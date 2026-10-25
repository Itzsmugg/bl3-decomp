// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14357a160 FUN_14357a160 body=63 status=ok
// SIG undefined FUN_14357a160(void)

void FUN_14357a160(longlong param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (*(code *)**(undefined8 **)(param_1 + 0x78))(param_1 + 0x78,param_2,4);
  if ((iVar2 == 4) && (((byte)*(undefined4 *)(param_1 + 0x40) & 0x18) != 8)) {
    uVar1 = *param_2;
    *param_2 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  }
  return;
}



// FUNCTION 14357a1b0 FUN_14357a1b0 body=547 status=ok
// SIG undefined FUN_14357a1b0(void)

void FUN_14357a1b0(longlong param_1,longlong *param_2,uint param_3,undefined8 *param_4)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined *puVar10;
  ulonglong uVar11;
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  longlong local_28;
  
  uVar8 = 0;
  if (PTR_s_us_ascii_1467d8a30 != (undefined *)0x0) {
    puVar10 = PTR_s_us_ascii_1467d8a30;
    uVar11 = uVar8;
    do {
      pcVar5 = *(char **)*param_4;
      do {
        cVar2 = *pcVar5;
        cVar3 = pcVar5[(longlong)puVar10 - (longlong)*(char **)*param_4];
        if (cVar2 != cVar3) break;
        pcVar5 = pcVar5 + 1;
      } while (cVar3 != '\0');
      if (cVar2 == cVar3) {
        uVar9 = *(uint *)(param_1 + 0x48);
        if (param_3 < *(uint *)(param_1 + 0x48)) {
          uVar9 = param_3;
        }
        lVar7 = FUN_143360a90(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) +
                               0x218),(ulonglong)*(uint *)(param_1 + 0x44) +
                                      *(longlong *)(param_1 + 0x50),uVar9);
        goto LAB_14357a35e;
      }
      uVar11 = (ulonglong)((int)uVar11 + 1);
      puVar10 = (&PTR_s_us_ascii_1467d8a30)[uVar11];
    } while (puVar10 != (undefined *)0x0);
  }
  if (PTR_s_utf_8_1467d8778 != (undefined *)0x0) {
    puVar10 = PTR_s_utf_8_1467d8778;
    uVar11 = uVar8;
    do {
      pcVar5 = *(char **)*param_4;
      do {
        cVar2 = *pcVar5;
        cVar3 = pcVar5[(longlong)puVar10 - (longlong)*(char **)*param_4];
        if (cVar2 != cVar3) break;
        pcVar5 = pcVar5 + 1;
      } while (cVar3 != '\0');
      if (cVar2 == cVar3) {
        (**(code **)(*(longlong *)(param_1 + 0x78) + 8))(param_1 + 0x78,local_38,param_2,param_3);
        return;
      }
      uVar11 = (ulonglong)((int)uVar11 + 1);
      puVar10 = (&PTR_s_utf_8_1467d8778)[uVar11];
    } while (puVar10 != (undefined *)0x0);
  }
  if (PTR_s_unicode_1467d8a18 != (undefined *)0x0) {
    puVar10 = PTR_s_unicode_1467d8a18;
    do {
      pcVar5 = *(char **)*param_4;
      do {
        cVar2 = *pcVar5;
        cVar3 = pcVar5[(longlong)puVar10 - (longlong)*(char **)*param_4];
        if (cVar2 != cVar3) break;
        pcVar5 = pcVar5 + 1;
      } while (cVar3 != '\0');
      if (cVar2 == cVar3) {
        uVar9 = *(uint *)(param_1 + 0x48);
        if (param_3 < *(uint *)(param_1 + 0x48)) {
          uVar9 = param_3;
        }
        lVar7 = FUN_143360fd0(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) +
                               0x218),(ulonglong)*(uint *)(param_1 + 0x44) +
                                      *(longlong *)(param_1 + 0x50),uVar9);
LAB_14357a35e:
        *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 2;
        piVar1 = (int *)(*param_2 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *param_2 = lVar7;
        piVar1 = (int *)(lVar7 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920(lVar7);
        }
        *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + uVar9;
        return;
      }
      uVar8 = (ulonglong)((int)uVar8 + 1);
      puVar10 = (&PTR_s_unicode_1467d8a18)[uVar8];
    } while (puVar10 != (undefined *)0x0);
  }
  uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar6 = FUN_1435c8e40(local_30,0x5e4,uVar4);
  FUN_1435cbe70(uVar4,uVar6);
  piVar1 = (int *)(local_28 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14357a3e0 FUN_14357a3e0 body=29 status=ok
// SIG undefined FUN_14357a3e0(void)

void FUN_14357a3e0(longlong param_1,undefined8 param_2)

{
  undefined1 local_res8 [32];
  
  FUN_1435dd7a0(param_1 + 0x150,local_res8,param_2);
  return;
}



// FUNCTION 14357a410 FUN_14357a410 body=107 status=ok
// SIG undefined FUN_14357a410(void)

void FUN_14357a410(longlong param_1,int *param_2)

{
  int iVar1;
  ushort local_res8 [4];
  
  iVar1 = (*(code *)**(undefined8 **)(param_1 + 0x78))(param_1 + 0x78,local_res8,2);
  if (iVar1 == 2) {
    if (((byte)*(undefined4 *)(param_1 + 0x40) & 0x18) != 8) {
      *param_2 = (int)(short)(local_res8[0] >> 8 | local_res8[0] << 8);
      return;
    }
    *param_2 = (int)(short)local_res8[0];
  }
  return;
}



// FUNCTION 14357a4c0 FUN_14357a4c0 body=63 status=ok
// SIG undefined FUN_14357a4c0(void)

void FUN_14357a4c0(longlong param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (*(code *)**(undefined8 **)(param_1 + 0x78))(param_1 + 0x78,param_2,4);
  if ((iVar2 == 4) && (((byte)*(undefined4 *)(param_1 + 0x40) & 0x18) != 8)) {
    uVar1 = *param_2;
    *param_2 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  }
  return;
}



// FUNCTION 14357a510 FUN_14357a510 body=76 status=ok
// SIG undefined FUN_14357a510(void)

void FUN_14357a510(longlong param_1,uint *param_2)

{
  int iVar1;
  ushort local_res8 [4];
  
  iVar1 = (*(code *)**(undefined8 **)(param_1 + 0x78))(param_1 + 0x78,local_res8,2);
  if (iVar1 == 2) {
    if (((byte)*(undefined4 *)(param_1 + 0x40) & 0x18) != 8) {
      local_res8[0] = local_res8[0] << 8 | local_res8[0] >> 8;
    }
    *param_2 = (uint)local_res8[0];
  }
  return;
}



// FUNCTION 14357a570 FUN_14357a570 body=109 status=ok
// SIG undefined FUN_14357a570(void)

void FUN_14357a570(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 local_res8 [8];
  ushort local_res18 [4];
  
  iVar1 = (*(code *)**(undefined8 **)(param_1 + 0x78))(param_1 + 0x78,local_res18,2);
  if (iVar1 == 2) {
    if (((byte)*(undefined4 *)(param_1 + 0x40) & 0x18) != 8) {
      local_res18[0] = local_res18[0] << 8 | local_res18[0] >> 8;
    }
    (**(code **)(*(longlong *)(param_1 + 0x78) + 8))
              (param_1 + 0x78,local_res8,param_2,local_res18[0]);
  }
  return;
}



// FUNCTION 14357a5f0 FUN_14357a5f0 body=31 status=ok
// SIG undefined FUN_14357a5f0(void)

void FUN_14357a5f0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 local_res8 [32];
  
  (**(code **)(*(longlong *)(param_1 + 0x78) + 8))(param_1 + 0x78,local_res8,param_2,param_3);
  return;
}



// FUNCTION 14357a620 FUN_14357a620 body=196 status=ok
// SIG undefined FUN_14357a620(void)

void FUN_14357a620(longlong param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  ulonglong uVar5;
  
  uVar5 = *(ulonglong *)(param_1 + 0x58);
  pcVar4 = *(char **)(param_1 + 0x50);
  if (1 < uVar5) {
    cVar2 = *pcVar4;
    if (((cVar2 == -2) && (pcVar4[1] == -1)) || ((cVar2 == -1 && (pcVar4[1] == -2)))) {
      lVar3 = FUN_143360fd0(*(undefined8 *)
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218)
                            ,pcVar4 + 2,uVar5 - 2 >> 1);
      goto LAB_14357a6b3;
    }
    if ((((2 < uVar5) && (cVar2 == -0x11)) && (pcVar4[1] == -0x45)) && (pcVar4[2] == -0x41)) {
      uVar5 = uVar5 - 3;
      pcVar4 = pcVar4 + 3;
    }
  }
  lVar3 = FUN_143360a90(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10)
                         + 0x218),pcVar4,uVar5);
LAB_14357a6b3:
  *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 2;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar3;
  piVar1 = (int *)(lVar3 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar3);
  }
  return;
}



// FUNCTION 14357a6f0 FUN_14357a6f0 body=395 status=ok
// SIG undefined FUN_14357a6f0(void)

void FUN_14357a6f0(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  void *_Dst;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_res8 [8];
  undefined1 local_88 [8];
  longlong local_80;
  void *local_78;
  uint local_70;
  undefined8 local_68;
  int local_60;
  
  uVar2 = *(uint *)(param_1 + 0x48);
  if (uVar2 != 0) {
    _Dst = (void *)(**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,uVar2,0);
    _guard_xfg_dispatch_icall_nop(_Dst,*(void **)(param_1 + 0x50),(ulonglong)uVar2);
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(int *)(param_1 + 0x44) != 0) {
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    _guard_xfg_dispatch_icall_nop(&local_78,0,0x58);
    inflateInit_(&local_78,"1.2.7",0x58);
    local_78 = _Dst;
    local_70 = uVar2;
    uVar4 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x2000,0);
    do {
      local_60 = 0x2000;
      local_68 = uVar4;
      iVar3 = FUN_14369eec0(&local_78,0);
      (*(code *)**(undefined8 **)(param_1 + 0x68))
                (param_1 + 0x68,local_res8,uVar4,0x2000 - local_60);
    } while (iVar3 == 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar4);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,_Dst);
    *(undefined4 *)(param_1 + 0x44) = 0;
    if (iVar3 != 1) {
      uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
      uVar5 = FUN_1435c8e40(local_88,0x5e5,uVar4);
      FUN_1435cbdb0(uVar4,uVar5);
      piVar1 = (int *)(local_80 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    inflateEnd(&local_78);
  }
  return;
}



// FUNCTION 14357a890 FUN_14357a890 body=40 status=ok
// SIG undefined FUN_14357a890(void)

void FUN_14357a890(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 local_res8 [16];
  undefined1 local_res18 [16];
  
  local_res18[0] = param_3;
  (*(code *)**(undefined8 **)(param_1 + 0x68))(param_1 + 0x68,local_res8,local_res18,1);
  return;
}



// FUNCTION 14357a8c0 FUN_14357a8c0 body=40 status=ok
// SIG undefined FUN_14357a8c0(void)

void FUN_14357a8c0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 local_res8 [16];
  undefined1 local_res18 [16];
  
  local_res18[0] = param_3;
  (*(code *)**(undefined8 **)(param_1 + 0x68))(param_1 + 0x68,local_res8,local_res18,1);
  return;
}



// FUNCTION 14357a8f0 FUN_14357a8f0 body=157 status=ok
// SIG undefined FUN_14357a8f0(void)

void FUN_14357a8f0(longlong param_1,undefined8 param_2,longlong param_3,uint param_4,uint param_5)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_res18 [16];
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 != 0) {
    uVar2 = *(uint *)(param_3 + 0x48);
    if (uVar2 < param_4) {
      param_4 = uVar2;
    }
    if (param_5 == 0) {
      param_5 = uVar2 - param_4;
    }
    if (uVar2 - param_4 < param_5) {
      uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
      uVar4 = FUN_1435c8e40(local_18,0x7d6,uVar3);
      FUN_1435cbdf0(uVar3,uVar4);
      piVar1 = (int *)(local_10 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
        return;
      }
    }
    else if (param_5 != 0) {
      (*(code *)**(undefined8 **)(param_1 + 0x68))
                (param_1 + 0x68,local_res18,(ulonglong)param_4 + *(longlong *)(param_3 + 0x50));
    }
  }
  return;
}



// FUNCTION 14357a9a0 FUN_14357a9a0 body=69 status=ok
// SIG undefined FUN_14357a9a0(void)

void FUN_14357a9a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_res8 [16];
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  if (((byte)*(undefined4 *)(param_1 + 0x40) & 0x18) != 8) {
    local_res18[0] = FUN_143562a40((int)param_3);
  }
  (*(code *)**(undefined8 **)(param_1 + 0x68))(param_1 + 0x68,local_res8,local_res18,8);
  return;
}



// FUNCTION 14357a9f0 FUN_14357a9f0 body=116 status=ok
// SIG undefined FUN_14357a9f0(void)

void FUN_14357a9f0(longlong param_1,undefined8 param_2,double param_3)

{
  float fVar1;
  float local_res8 [4];
  float local_res18 [4];
  
  fVar1 = (float)param_3;
  local_res18[0] = fVar1;
  if (((byte)*(undefined4 *)(param_1 + 0x40) & 0x18) != 8) {
    local_res18[0] =
         (float)(((uint)fVar1 & 0xff0000 | (uint)fVar1 >> 0x10) >> 8 |
                ((uint)fVar1 & 0xff00 | (int)fVar1 << 0x10) << 8);
    local_res8[0] = fVar1;
  }
  (*(code *)**(undefined8 **)(param_1 + 0x68))(param_1 + 0x68,local_res8,local_res18,4);
  return;
}



// FUNCTION 14357aa70 FUN_14357aa70 body=93 status=ok
// SIG undefined FUN_14357aa70(void)

void FUN_14357aa70(longlong param_1,undefined8 param_2,uint param_3)

{
  undefined1 local_res8 [16];
  uint local_res18 [4];
  
  local_res18[0] = param_3;
  if (((byte)*(undefined4 *)(param_1 + 0x40) & 0x18) != 8) {
    local_res18[0] =
         (param_3 & 0xff0000 | param_3 >> 0x10) >> 8 | (param_3 & 0xff00 | param_3 << 0x10) << 8;
  }
  (*(code *)**(undefined8 **)(param_1 + 0x68))(param_1 + 0x68,local_res8,local_res18,4);
  return;
}



// FUNCTION 14357aae0 FUN_14357aae0 body=418 status=ok
// SIG undefined FUN_14357aae0(void)

void FUN_14357aae0(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined *puVar8;
  ulonglong uVar9;
  undefined1 local_48 [8];
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  uVar7 = 0;
  if (PTR_s_utf_8_1467d8778 != (undefined *)0x0) {
    puVar8 = PTR_s_utf_8_1467d8778;
    uVar9 = uVar7;
    do {
      pcVar5 = *(char **)*param_4;
      do {
        cVar2 = *pcVar5;
        cVar3 = pcVar5[(longlong)puVar8 - (longlong)*(char **)*param_4];
        if (cVar2 != cVar3) break;
        pcVar5 = pcVar5 + 1;
      } while (cVar3 != '\0');
      if (cVar2 == cVar3) {
        (*(code *)**(undefined8 **)(param_1 + 0x68))
                  ((undefined8 *)(param_1 + 0x68),local_48,*(undefined8 *)*param_3,
                   *(undefined4 *)((undefined8 *)*param_3 + 4));
        return;
      }
      uVar9 = (ulonglong)((int)uVar9 + 1);
      puVar8 = (&PTR_s_utf_8_1467d8778)[uVar9];
    } while (puVar8 != (undefined *)0x0);
  }
  if (PTR_s_unicode_1467d8a18 != (undefined *)0x0) {
    puVar8 = PTR_s_unicode_1467d8a18;
    do {
      pcVar5 = *(char **)*param_4;
      do {
        cVar2 = *pcVar5;
        cVar3 = pcVar5[(longlong)puVar8 - (longlong)*(char **)*param_4];
        if (cVar2 != cVar3) break;
        pcVar5 = pcVar5 + 1;
      } while (cVar3 != '\0');
      if (cVar2 == cVar3) {
        local_40 = 0;
        local_38 = 0;
        local_30 = 0;
        local_28 = 0;
        FUN_143392800(&local_40,*(undefined8 *)*param_3,*(undefined4 *)((undefined8 *)*param_3 + 4))
        ;
        if ((ulonglong)(local_38 * 2) < 0x100000000) {
          (*(code *)**(undefined8 **)(param_1 + 0x68))
                    (param_1 + 0x68,local_48,local_40,(int)local_38 * 2);
        }
        Scaleform::WStringBuffer::~WStringBuffer(&local_40);
        return;
      }
      uVar7 = (ulonglong)((int)uVar7 + 1);
      puVar8 = (&PTR_s_unicode_1467d8a18)[uVar7];
    } while (puVar8 != (undefined *)0x0);
  }
  uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar6 = FUN_1435c8e40(&local_40,0x5e4,uVar4);
  FUN_1435cbe70(uVar4,uVar6);
  piVar1 = (int *)(local_38 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14357ac90 FUN_14357ac90 body=26 status=ok
// SIG undefined FUN_14357ac90(void)

void FUN_14357ac90(longlong param_1)

{
  undefined1 local_res8 [32];
  
  FUN_1435dfb90(param_1 + 0x88,local_res8);
  return;
}



// FUNCTION 14357acb0 FUN_14357acb0 body=72 status=ok
// SIG undefined FUN_14357acb0(void)

void FUN_14357acb0(longlong param_1,undefined8 param_2,ushort param_3)

{
  ushort local_res8 [8];
  undefined1 local_res18 [16];
  
  local_res8[0] = param_3;
  if (((byte)*(undefined4 *)(param_1 + 0x40) & 0x18) != 8) {
    local_res8[0] = param_3 >> 8 | param_3 << 8;
  }
  (*(code *)**(undefined8 **)(param_1 + 0x68))(param_1 + 0x68,local_res18,local_res8,2);
  return;
}



// FUNCTION 14357ad00 FUN_14357ad00 body=93 status=ok
// SIG undefined FUN_14357ad00(void)

void FUN_14357ad00(longlong param_1,undefined8 param_2,uint param_3)

{
  undefined1 local_res8 [16];
  uint local_res18 [4];
  
  local_res18[0] = param_3;
  if (((byte)*(undefined4 *)(param_1 + 0x40) & 0x18) != 8) {
    local_res18[0] =
         (param_3 & 0xff0000 | param_3 >> 0x10) >> 8 | (param_3 & 0xff00 | param_3 << 0x10) << 8;
  }
  (*(code *)**(undefined8 **)(param_1 + 0x68))(param_1 + 0x68,local_res8,local_res18,4);
  return;
}



// FUNCTION 14357ad70 FUN_14357ad70 body=195 status=ok
// SIG undefined FUN_14357ad70(void)

void FUN_14357ad70(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_res18 [8];
  ushort local_res20 [4];
  undefined1 local_18 [8];
  longlong local_10;
  
  if (*(uint *)(*param_3 + 0x20) < 0x10000) {
    uVar3 = *(ushort *)(*param_3 + 0x20);
    local_res20[0] = uVar3;
    if (((byte)*(undefined4 *)(param_1 + 0x40) & 0x18) != 8) {
      local_res20[0] = uVar3 << 8 | uVar3 >> 8;
    }
    puVar2 = (undefined8 *)(param_1 + 0x68);
    (*(code *)**(undefined8 **)(param_1 + 0x68))(puVar2,local_res18,local_res20,2);
    (**(code **)*puVar2)(puVar2,local_res18,*(undefined8 *)*param_3,uVar3);
  }
  else {
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar5 = FUN_1435c8e40(local_18,0x3e9,uVar4);
    FUN_1435cbdf0(uVar4,uVar5);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  return;
}



// FUNCTION 14357ae40 FUN_14357ae40 body=215 status=ok
// SIG undefined FUN_14357ae40(void)

void FUN_14357ae40(longlong param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  char *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 local_res18 [8];
  undefined8 *local_res20;
  undefined1 local_18 [8];
  undefined8 *local_10;
  
  uVar4 = *param_3 & 0x1f;
  if (uVar4 == 0) {
LAB_14357aed9:
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar6 = FUN_1435c8e40(local_18,0x5e3,uVar3);
    FUN_1435cbe70(uVar3,uVar6);
  }
  else {
    if (uVar4 == 0xc) {
      bVar7 = *(longlong *)(param_3 + 4) == 0;
LAB_14357ae78:
      if (bVar7) goto LAB_14357aed9;
    }
    else if (uVar4 == 10) {
      bVar7 = *(longlong *)(param_3 + 4) == *(longlong *)(*(longlong *)(param_3 + 4) + 8) + 0x80;
      goto LAB_14357ae78;
    }
    lVar2 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218);
    local_res20 = (undefined8 *)(lVar2 + 0x48);
    piVar1 = (int *)(lVar2 + 0x60);
    *piVar1 = *piVar1 + 1;
    pcVar5 = (char *)FUN_1435911f0(param_3,local_res18,&local_res20);
    local_10 = local_res20;
    if (*pcVar5 != '\0') {
      (*(code *)**(undefined8 **)(param_1 + 0x68))
                ((undefined8 *)(param_1 + 0x68),local_res18,*local_res20,
                 *(undefined4 *)(local_res20 + 4));
      local_10 = local_res20;
    }
  }
  piVar1 = (int *)(local_10 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14357af20 FUN_14357af20 body=539 status=ok
// SIG undefined FUN_14357af20(void)

void FUN_14357af20(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong local_res8 [2];
  ulonglong local_res18;
  ulonglong local_res20;
  undefined1 local_48 [8];
  longlong local_40;
  SysFile local_38 [16];
  RefCountImpl *local_28;
  
  puVar2 = (undefined8 *)*param_3;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  if (puVar2 != (undefined8 *)(puVar2[1] + 0x80)) {
    uVar8 = *puVar2;
    uVar6 = FUN_14335fa60(param_3);
    FUN_1432c3140(local_res8,uVar8,uVar6);
    cVar4 = Scaleform::GFx::URLBuilder::IsPathAbsolute((local_res8[0] & 0xfffffffffffffffc) + 0xc);
    if ((cVar4 == '\0') && (*(longlong *)(lVar3 + 0x108) != 0)) {
      uVar9 = *(longlong *)(lVar3 + 0x108) - 1;
      uVar8 = FUN_143307740(*(longlong *)
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(lVar3 + 0x120) + (uVar9 >> 6) * 8) +
                                0x18 + (ulonglong)((uint)uVar9 & 0x3f) * 0xa0) + 0xa0) + 0x18,
                            &local_res20);
      uVar8 = FString::TrimQuotes(uVar8,&local_res18,local_res8);
      FUN_1432c4d80(local_res8,uVar8);
      iVar7 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                        ((local_res18 & 0xfffffffffffffffc) + 8,0xffffffff);
      if (iVar7 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res18 & 0xfffffffffffffffc);
      }
      iVar7 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                        ((local_res20 & 0xfffffffffffffffc) + 8,0xffffffff);
      if (iVar7 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res20 & 0xfffffffffffffffc);
      }
    }
    Scaleform::SysFile::SysFile(local_38);
    bVar5 = Scaleform::SysFile::Open(local_38,(String *)local_res8,0xb,0x1b6);
    if ((!bVar5) ||
       (iVar7 = (**(code **)(*(longlong *)local_28 + 0x48))
                          (local_28,*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x48))
       , iVar7 != *(int *)(param_1 + 0x48))) {
      uVar8 = FUN_1435c8e40(local_48,0x5dd,lVar3);
      FUN_1435cbdb0(lVar3,uVar8);
      piVar1 = (int *)(local_40 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    if (local_28 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(local_28);
    }
    Scaleform::RefCountImplCore::~RefCountImplCore((RefCountImplCore *)local_38);
    iVar7 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res8[0] & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar7 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8[0] & 0xfffffffffffffffc);
    }
    return;
  }
  uVar8 = FUN_1435c8e40(local_48,0x5e3,lVar3);
  FUN_1435cbe70(lVar3,uVar8);
  piVar1 = (int *)(local_40 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 != 0) {
    return;
  }
  FUN_14335f920();
  return;
}



// FUNCTION 14357b150 FUN_14357b150 body=51 status=ok
// SIG undefined FUN_14357b150(void)

undefined8 * FUN_14357b150(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  param_1[0x11] = param_1[0x11] | 1;
  *param_1 = &PTR_FUN_145b43790;
  *(undefined4 *)(param_1 + 0x12) = 8;
  return param_1;
}



// FUNCTION 14357b190 FUN_14357b190 body=141 status=ok
// SIG undefined FUN_14357b190(void)

void FUN_14357b190(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  lVar1 = FUN_1435b5bc0(param_3);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_143579270(lVar1,param_3);
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,uVar2);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 14357b230 FUN_14357b230 body=51 status=ok
// SIG undefined FUN_14357b230(void)

undefined8 * FUN_14357b230(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  param_1[0x11] = param_1[0x11] | 1;
  *param_1 = &PTR_FUN_145b17648;
  *(undefined4 *)(param_1 + 0x12) = 8;
  return param_1;
}



// FUNCTION 14357b270 FUN_14357b270 body=270 status=ok
// SIG undefined FUN_14357b270(void)

undefined8 * FUN_14357b270(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b43080);
    puVar3[0x11] = puVar3[0x11] | 1;
    *puVar3 = &PTR_FUN_145b17648;
    *(undefined4 *)(puVar3 + 0x12) = 8;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b43080);
    puVar3[0x11] = puVar3[0x11] | 1;
    *puVar3 = &PTR_FUN_145b43790;
    *(undefined4 *)(puVar3 + 0x12) = 8;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x58);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *(undefined4 *)(puVar3 + 10) = 3;
    *puVar3 = &PTR_ForEachChild_GC_145b231d0;
  }
  return param_1;
}



// FUNCTION 14357b390 FUN_14357b390 body=40 status=ok
// SIG undefined FUN_14357b390(void)

undefined8 * FUN_14357b390(undefined8 *param_1)

{
  FUN_1435b37d0();
  *(undefined4 *)(param_1 + 10) = 3;
  *param_1 = &PTR_ForEachChild_GC_145b231d0;
  return param_1;
}



// FUNCTION 14357b3c0 FUN_14357b3c0 body=95 status=ok
// SIG undefined FUN_14357b3c0(void)

void FUN_14357b3c0(longlong param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if ((param_3 == 0) || (param_3 == 3)) {
    *(int *)(param_1 + 0x50) = param_3;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar3 = FUN_1435c8e40(local_18,0x422,uVar2);
    FUN_1435cbdf0(uVar2,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  return;
}



// FUNCTION 14357b440 FUN_14357b440 body=790 status=ok
// SIG undefined FUN_14357b440(void)

void FUN_14357b440(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  char *pcVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  ulonglong local_res8;
  ulonglong local_res18;
  ulonglong local_res20;
  SysFile local_458 [16];
  RefCountImpl *local_448;
  undefined1 local_440 [8];
  longlong local_438;
  undefined1 local_428 [1024];
  
  plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x38);
  (**(code **)(*plVar2 + 8))
            (plVar2,2,"The method class_::ByteArray::readFile() is not implemented\n");
  puVar3 = (undefined8 *)*param_3;
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  if (puVar3 == (undefined8 *)(puVar3[1] + 0x80)) {
    uVar8 = FUN_1435c8e40(local_440,0x5e3,lVar9);
    FUN_1435cbe70(lVar9,uVar8);
    piVar1 = (int *)(local_438 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    FUN_14335f920();
    return;
  }
  uVar8 = *puVar3;
  uVar6 = FUN_14335fa60(param_3);
  FUN_1432c3140(&local_res18,uVar8,uVar6);
  cVar4 = Scaleform::GFx::URLBuilder::IsPathAbsolute((local_res18 & 0xfffffffffffffffc) + 0xc);
  if ((cVar4 == '\0') && (*(longlong *)(lVar9 + 0x108) != 0)) {
    uVar12 = *(longlong *)(lVar9 + 0x108) - 1;
    uVar8 = FUN_143307740(*(longlong *)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)(lVar9 + 0x120) + (uVar12 >> 6) * 8) + 0x18
                             + (ulonglong)((uint)uVar12 & 0x3f) * 0xa0) + 0xa0) + 0x18,&local_res20)
    ;
    uVar8 = FString::TrimQuotes(uVar8,&local_res8,&local_res18);
    FUN_1432c4d80(&local_res18,uVar8);
    iVar7 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar7 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
    }
    iVar7 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res20 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar7 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res20 & 0xfffffffffffffffc);
    }
  }
  Scaleform::SysFile::SysFile(local_458);
  bVar5 = Scaleform::SysFile::Open(local_458,(String *)&local_res18,0x21,0x124);
  if (bVar5) {
    uVar12 = (**(code **)(*(longlong *)local_448 + 0x38))();
    if ((longlong)uVar12 < 0x7fffffff) {
      uVar8 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0xd8);
      lVar9 = FUN_1435b5bc0(uVar8);
      uVar10 = 0;
      if (lVar9 != 0) {
        uVar10 = FUN_143579270(lVar9,uVar8);
      }
      FUN_1434e68a0(param_2,uVar10);
      uVar14 = (uint)uVar12;
      while (uVar14 != 0) {
        iVar13 = (int)uVar12;
        iVar7 = 0x400;
        if (iVar13 < 0x400) {
          iVar7 = iVar13;
        }
        (**(code **)(*(longlong *)local_448 + 0x50))(local_448,local_428,iVar7);
        pcVar11 = (char *)(*(code *)**(undefined8 **)(*param_2 + 0x68))
                                    ((undefined8 *)(*param_2 + 0x68),&local_res8,local_428,iVar7);
        if (*pcVar11 == '\0') goto LAB_14357b6fa;
        uVar14 = iVar13 - iVar7;
        uVar12 = (ulonglong)uVar14;
      }
      *(undefined4 *)(*param_2 + 0x44) = 0;
      goto LAB_14357b6fa;
    }
    uVar8 = FUN_1435c8e40(local_440,0x465,lVar9);
    FUN_1435cbdf0(lVar9,uVar8);
  }
  else {
    uVar8 = FUN_1435c8e40(local_440,0x5dc,lVar9);
    FUN_1435cbdb0(lVar9,uVar8);
  }
  piVar1 = (int *)(local_438 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
LAB_14357b6fa:
  if (local_448 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_448);
  }
  Scaleform::RefCountImplCore::~RefCountImplCore((RefCountImplCore *)local_458);
  iVar7 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res18 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar7 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res18 & 0xfffffffffffffffc);
  }
  return;
}



// FUNCTION 14357b760 FUN_14357b760 body=48 status=ok
// SIG undefined FUN_14357b760(void)

undefined8 * FUN_14357b760(undefined8 *param_1)

{
  UInterpTrackInst::UInterpTrackInst();
  *(undefined1 *)(param_1 + 8) = 0;
  *param_1 = &PTR_ForEachChild_GC_145b43808;
  param_1[9] = &DAT_1467d8c70;
  return param_1;
}



// FUNCTION 14357b7a0 FUN_14357b7a0 body=938 status=ok
// SIG undefined FUN_14357b7a0(void)

void FUN_14357b7a0(undefined8 param_1,char param_2,longlong *param_3,code *param_4)

{
  longlong lVar1;
  uint uVar2;
  RefCountImpl *pRVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint *puVar6;
  RefCountImpl *pRVar7;
  RefCountImpl *pRVar8;
  ulonglong uVar9;
  RefCountImpl *pRVar10;
  longlong lVar11;
  longlong lVar12;
  RefCountImpl *this;
  longlong lVar13;
  undefined1 local_98 [4];
  undefined4 local_94;
  longlong local_90;
  ulonglong local_88;
  longlong local_80;
  longlong local_78;
  RefCountImpl *local_70;
  RefCountImpl *local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  pRVar7 = (RefCountImpl *)0x0;
  if ((param_2 != '\0') && (param_4 == (code *)&LAB_143581a10)) {
    lVar13 = *param_3;
    lVar1 = lVar13 + 0x40;
    pRVar8 = (RefCountImpl *)((*(longlong *)(lVar13 + 0x10) - lVar13) + -0x40 >> 3);
    uVar9 = *(ulonglong *)(lVar13 + 0x40);
    pRVar10 = pRVar7;
    while (local_90 = lVar13, local_80 = lVar13, local_78 = lVar1, local_70 = pRVar8,
          local_58 = uVar9, uVar9 == 0) {
      local_68 = pRVar10 + 1;
      if (pRVar8 <= local_68) goto LAB_14357ba21;
      pRVar10 = local_68;
      uVar9 = *(ulonglong *)(lVar1 + (longlong)local_68 * 8);
    }
    local_68 = pRVar10;
    local_88 = FUN_143561b20(uVar9);
    local_60 = local_88;
    if (pRVar10 < pRVar8) {
      do {
        lVar11 = ((longlong)pRVar10 * 0x40 + local_88) * 0x20;
        local_60 = local_88;
        if (((*(uint *)(*(longlong *)(lVar13 + 0x20) + lVar11) >> 9 & 1) != 0) &&
           (*(longlong *)(*(longlong *)(*(longlong *)(lVar13 + 0x20) + 8 + lVar11) + 8) == 0)) {
          lVar12 = *(longlong *)(lVar13 + 0x28);
          uVar2 = *(uint *)(lVar12 + lVar11) & 0x1f;
          if (uVar2 < 0xd) {
            if (uVar2 == 0xc) {
              lVar12 = *(longlong *)(lVar12 + 0x10 + lVar11);
              goto LAB_14357b8b5;
            }
          }
          else {
            lVar12 = *(longlong *)(lVar12 + 0x18 + lVar11);
LAB_14357b8b5:
            if (lVar12 != 0) {
              local_94 = 0x148;
              pRVar3 = (RefCountImpl *)
                       (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_3,0x28,&local_94);
              this = pRVar7;
              if (pRVar3 != (RefCountImpl *)0x0) {
                *(undefined8 *)(pRVar3 + 8) = 0;
                *(undefined8 *)(pRVar3 + 0x10) = 0;
                *(undefined8 *)(pRVar3 + 0x18) = 0;
                *(undefined8 *)(pRVar3 + 0x20) = 0;
                *(undefined ***)pRVar3 = &PTR_FUN_144f70a50;
                *(undefined ***)pRVar3 = &PTR_FUN_145b241c0;
                *(undefined4 *)(pRVar3 + 8) = 1;
                *(undefined8 *)(pRVar3 + 0x10) = 0;
                *(undefined8 *)(pRVar3 + 0x18) = 0;
                *(undefined8 *)(pRVar3 + 0x20) = 0;
                this = pRVar3;
              }
              FUN_1434f0700(this + 0x18,lVar12);
              FUN_143515e90(param_1,this);
              lVar13 = local_90;
              if (this != (RefCountImpl *)0x0) {
                Scaleform::RefCountImpl::Release(this);
                lVar13 = local_90;
              }
            }
          }
          lVar11 = *(longlong *)(lVar13 + 0x20) + lVar11;
          lVar13 = local_90;
          if (*(int *)(*param_3 + 8) != 0) {
            uVar4 = FUN_143591d60(local_98,lVar11);
            FUN_143581a20(*param_3,lVar11,uVar4);
            lVar13 = local_90;
          }
        }
        if (pRVar8 <= pRVar10) break;
        if (local_88 < 0x3f) {
          uVar9 = uVar9 & ~(1L << (local_88 & 0x3f));
        }
        else {
          local_68 = pRVar10 + 1;
          if (pRVar8 <= local_68) break;
          uVar9 = *(ulonglong *)(lVar1 + (longlong)local_68 * 8);
          pRVar10 = local_68;
        }
        while (local_58 = uVar9, uVar9 == 0) {
          local_68 = pRVar10 + 1;
          if (pRVar8 <= local_68) goto LAB_14357ba21;
          pRVar10 = local_68;
          uVar9 = *(ulonglong *)(lVar1 + (longlong)local_68 * 8);
        }
        local_88 = FUN_143561b20(uVar9);
        local_60 = local_88;
        if (pRVar8 <= pRVar10) break;
      } while( true );
    }
  }
LAB_14357ba21:
  lVar1 = *param_3;
  pRVar10 = (RefCountImpl *)((*(longlong *)(lVar1 + 0x10) - lVar1) + -0x40 >> 3);
  uVar9 = *(ulonglong *)(lVar1 + 0x40);
  while (uVar9 == 0) {
    pRVar7 = pRVar7 + 1;
    if (pRVar10 <= pRVar7) {
      return;
    }
    uVar9 = *(ulonglong *)(lVar1 + 0x40 + (longlong)pRVar7 * 8);
  }
  uVar5 = FUN_143561b20(uVar9);
  do {
    if (pRVar10 <= pRVar7) {
      return;
    }
    if (param_2 == '\0') {
      puVar6 = (uint *)(((longlong)pRVar7 * 0x40 + uVar5) * 0x20 + *(longlong *)(lVar1 + 0x20));
      uVar2 = *puVar6 & 0x1f;
      if (10 < uVar2) {
        if (uVar2 < 0xd) {
          puVar6 = puVar6 + 4;
        }
        else {
          if (0xe < uVar2) goto LAB_14357bab4;
          puVar6 = puVar6 + 6;
        }
        if (*(longlong *)puVar6 != 0) {
          (*param_4)(param_1);
        }
      }
    }
LAB_14357bab4:
    puVar6 = (uint *)(((longlong)pRVar7 * 0x40 + uVar5) * 0x20 + *(longlong *)(lVar1 + 0x28));
    uVar2 = *puVar6 & 0x1f;
    if (10 < uVar2) {
      if (uVar2 < 0xd) {
        puVar6 = puVar6 + 4;
      }
      else {
        if (0xe < uVar2) goto LAB_14357baf0;
        puVar6 = puVar6 + 6;
      }
      if (*(longlong *)puVar6 != 0) {
        (*param_4)(param_1);
      }
    }
LAB_14357baf0:
    if (pRVar10 <= pRVar7) {
      return;
    }
    if (uVar5 < 0x3f) {
      uVar9 = uVar9 & ~(1L << (uVar5 & 0x3f));
    }
    else {
      pRVar7 = pRVar7 + 1;
      if (pRVar10 <= pRVar7) {
        return;
      }
      uVar9 = *(ulonglong *)(lVar1 + 0x40 + (longlong)pRVar7 * 8);
    }
    while (uVar9 == 0) {
      pRVar7 = pRVar7 + 1;
      if (pRVar10 <= pRVar7) {
        return;
      }
      uVar9 = *(ulonglong *)(lVar1 + 0x40 + (longlong)pRVar7 * 8);
    }
    uVar5 = FUN_143561b20(uVar9);
  } while( true );
}



// FUNCTION 14357bb50 FUN_14357bb50 body=60 status=ok
// SIG undefined FUN_14357bb50(void)

undefined8 * FUN_14357bb50(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  UInterpTrackInst::UInterpTrackInst();
  *(undefined1 *)(param_1 + 8) = param_3;
  *param_1 = &PTR_ForEachChild_GC_145b43808;
  param_1[9] = &DAT_1467d8c70;
  return param_1;
}



// FUNCTION 14357bba0 ~FLightmapResourceCluster body=41 status=ok
// SIG undefined ~FLightmapResourceCluster(void)

void FLightmapResourceCluster::~FLightmapResourceCluster(undefined8 *param_1)

{
  *param_1 = &PTR_ForEachChild_GC_145b43808;
  FUN_1435810e0(param_1 + 9);
  FUN_1435b9dc0(param_1);
  return;
}



// FUNCTION 14357bbd0 FUN_14357bbd0 body=43 status=ok
// SIG undefined FUN_14357bbd0(void)

undefined1 *
FUN_14357bbd0(longlong *param_1,undefined1 *param_2,longlong param_3,undefined8 param_4)

{
  (**(code **)(*param_1 + 0x90))(param_1,param_3 + 0x10,param_4,0);
  *param_2 = 1;
  return param_2;
}



// FUNCTION 14357bc10 FUN_14357bc10 body=202 status=ok
// SIG undefined FUN_14357bc10(void)

undefined1 *
FUN_14357bc10(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  uint *puVar2;
  undefined8 local_res8;
  longlong local_18;
  longlong local_10;
  
  cVar1 = Scaleform::GFx::AS3::Multiname::ContainsNamespace
                    (param_3,*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x1d8));
  if ((cVar1 != '\0') && (FUN_14357c450(param_1,&local_18,param_3,&local_res8), local_10 != -1)) {
    if ((*(char *)(param_1 + 0x40) == '\0') ||
       ((puVar2 = (uint *)(local_10 * 0x20 + *(longlong *)(local_18 + 0x20)),
        (*puVar2 >> 9 & 1) == 0 || (*(longlong *)(*(longlong *)(puVar2 + 2) + 8) != 0)))) {
      FUN_143590140(param_4,local_10 * 0x20 + *(longlong *)(local_18 + 0x28));
      *param_2 = 1;
      return param_2;
    }
    FUN_143581a20(*(undefined8 *)(param_1 + 0x48),puVar2,local_res8);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14357bce0 FUN_14357bce0 body=44 status=ok
// SIG undefined FUN_14357bce0(void)

undefined1 * FUN_14357bce0(longlong param_1,undefined1 *param_2,uint param_3,undefined8 param_4)

{
  FUN_143590140(param_4,(ulonglong)param_3 * 0x20 +
                        *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x28));
  *param_2 = 1;
  return param_2;
}



// FUNCTION 14357bd20 FUN_14357bd20 body=157 status=ok
// SIG undefined FUN_14357bd20(void)

undefined1 * FUN_14357bd20(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 local_res8;
  longlong local_18;
  longlong local_10;
  
  cVar1 = Scaleform::GFx::AS3::Multiname::ContainsNamespace
                    (param_3,*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x1d8));
  if (cVar1 != '\0') {
    FUN_14357c450(param_1,&local_18,param_3,&local_res8);
    if (local_10 != -1) {
      FUN_143581a20(*(undefined8 *)(param_1 + 0x48),local_10 * 0x20 + *(longlong *)(local_18 + 0x20)
                    ,local_res8);
      *param_2 = 1;
      return param_2;
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14357bdd0 FUN_14357bdd0 body=661 status=ok
// SIG undefined FUN_14357bdd0(void)

void FUN_14357bdd0(longlong param_1,uint *param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined *puVar3;
  char cVar4;
  char *pcVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 local_res8 [16];
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint local_68 [2];
  undefined8 local_60;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  
  local_68[0] = *param_2;
  local_58 = param_2[4];
  uStack_54 = param_2[5];
  uStack_50 = param_2[6];
  uStack_4c = param_2[7];
  local_60 = *(undefined8 *)(param_2 + 2);
  if (9 < ((byte)local_68[0] & 0x1f)) {
    if ((local_68[0] >> 9 & 1) == 0) {
      FUN_143592070(param_2);
    }
    else {
      FUN_143592140();
    }
  }
  if ((local_68[0] & 0x1f) == 10) {
    pcVar5 = (char *)FUN_1435bdf80(local_res8,CONCAT44(uStack_54,local_58));
    if (*pcVar5 != '\0') {
      if (9 < ((byte)local_68[0] & 0x1f)) {
        if ((local_68[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_68);
        }
        else {
          FUN_143592150();
        }
      }
      local_78 = (uint)local_res8._8_8_;
      uStack_74 = SUB84(local_res8._8_8_,4);
      local_68[0] = local_68[0] & 0xffffffe4 | 4;
      local_58 = local_78;
      uStack_54 = uStack_74;
      uStack_50 = uStack_70;
      uStack_4c = uStack_6c;
    }
  }
  else if ((local_68[0] & 0x1f) - 2 < 2) {
    FUN_143590b10(local_68,local_res8);
  }
  uVar6 = FUN_143591d60(local_res8,local_68);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(int *)(lVar1 + 8) == 0) {
    lVar10 = -1;
  }
  else {
    uVar7 = *(uint *)(lVar1 + 0x30) & uVar6;
    plVar11 = (longlong *)(uVar7 * 0x10 + *(longlong *)(lVar1 + 0x38));
    if (*plVar11 != -1) {
      plVar13 = (longlong *)0x0;
      while( true ) {
        plVar12 = plVar11;
        lVar10 = *plVar12;
        uVar2 = *(ulonglong *)(*(longlong *)(lVar1 + 0x10) + lVar10 * 8);
        if ((plVar13 == (longlong *)0x0) && (uVar7 != (*(uint *)(lVar1 + 0x30) & uVar2))) break;
        if ((uVar2 == uVar6) &&
           (cVar4 = FUN_1435927d0(lVar10 * 0x20 + *(longlong *)(lVar1 + 0x20),local_68),
           cVar4 != '\0')) goto LAB_14357bf5e;
        uVar7 = plVar12[1];
        if (uVar7 == 0xffffffffffffffff) break;
        plVar11 = (longlong *)(uVar7 * 0x10 + *(longlong *)(lVar1 + 0x38));
        plVar13 = plVar12;
      }
    }
    lVar10 = -1;
  }
LAB_14357bf5e:
  if (lVar10 != -1) {
    if (((*(char *)(param_1 + 0x40) == '\0') ||
        (puVar9 = (uint *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x20) + lVar10 * 0x20),
        (*puVar9 >> 9 & 1) == 0)) || (*(longlong *)(*(longlong *)(puVar9 + 2) + 8) != 0)) {
      FUN_143590140(lVar10 * 0x20 + *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x28),param_3);
      goto LAB_14357c015;
    }
    FUN_143581a20(*(undefined8 *)(param_1 + 0x48),puVar9,uVar6);
  }
  if (*(char *)(param_1 + 0x40) != '\0') {
    FUN_143590620(local_68);
  }
  puVar3 = *(undefined **)(param_1 + 0x48);
  if (puVar3 == &DAT_1467d8c70) {
    iVar8 = 8;
LAB_14357bff3:
    FUN_143581b70(param_1 + 0x48,iVar8,0,0);
  }
  else if (*(uint *)(puVar3 + 0x18) <= *(uint *)(puVar3 + 8)) {
    iVar8 = *(int *)(puVar3 + 0x30) * 2 + 2;
    goto LAB_14357bff3;
  }
  FUN_143580df0(*(undefined8 *)(param_1 + 0x48),local_68,param_3,uVar6);
LAB_14357c015:
  if (9 < ((byte)local_68[0] & 0x1f)) {
    if ((local_68[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_68);
  }
  return;
}



// FUNCTION 14357c070 FUN_14357c070 body=231 status=ok
// SIG undefined FUN_14357c070(void)

ulonglong * FUN_14357c070(longlong param_1,ulonglong *param_2,undefined8 param_3)

{
  char cVar1;
  uint *puVar2;
  undefined8 local_res8;
  longlong local_18;
  longlong local_10;
  
  cVar1 = Scaleform::GFx::AS3::Multiname::ContainsNamespace
                    (param_3,*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x1d8));
  if (cVar1 != '\0') {
    FUN_14357c450(param_1,&local_18,param_3,&local_res8);
    if (local_10 != -1) {
      if (((*(char *)(param_1 + 0x40) == '\0') ||
          (puVar2 = (uint *)(local_10 * 0x20 + *(longlong *)(local_18 + 0x20)),
          (*puVar2 >> 9 & 1) == 0)) || (*(longlong *)(*(longlong *)(puVar2 + 2) + 8) != 0)) {
        *param_2 = local_10 * 0x20 + *(longlong *)(local_18 + 0x28) | 1;
        param_2[1] = 0xffffffffffffffff;
        FUN_143590110(param_2 + 2,param_1);
        return param_2;
      }
      FUN_143581a20(*(undefined8 *)(param_1 + 0x48),puVar2,local_res8);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  param_2[3] = 0;
  return param_2;
}



// FUNCTION 14357c160 ForEachChild_GC body=63 status=ok
// SIG undefined ForEachChild_GC(void)

void Scaleform::GFx::AS3::Instances::fl_utils::Dictionary::ForEachChild_GC
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1435b16a0();
  FUN_14357b7a0(param_2,*(undefined1 *)(param_1 + 0x40),param_1 + 0x48,param_3);
  return;
}



// FUNCTION 14357c1b0 FUN_14357c1b0 body=82 status=ok
// SIG undefined FUN_14357c1b0(void)

void FUN_14357c1b0(longlong param_1,undefined8 param_2,int param_3)

{
  if ((param_3 != 0) &&
     (FUN_143590140(param_2,(((ulonglong)(param_3 - 1U) & 0xffffffffffffffc0) +
                            (ulonglong)(param_3 - 1U & 0x3f)) * 0x20 +
                            *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x20)),
     *(char *)(param_1 + 0x40) != '\0')) {
    FUN_1435906a0(param_2);
  }
  return;
}



// FUNCTION 14357c210 FUN_14357c210 body=562 status=ok
// SIG undefined FUN_14357c210(void)

int * FUN_14357c210(longlong param_1,int *param_2,int param_3)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  longlong local_58;
  longlong lStack_50;
  ulonglong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  ulonglong uStack_30;
  
  if (param_3 == 0) {
    local_58 = *(longlong *)(param_1 + 0x48);
    lStack_50 = local_58 + 0x40;
    uStack_40 = 0;
    local_48 = (*(longlong *)(local_58 + 0x10) - local_58) + -0x40 >> 3;
    uStack_30 = *(ulonglong *)(local_58 + 0x40);
    while (uStack_30 == 0) {
      uStack_40 = uStack_40 + 1;
      if (local_48 <= uStack_40) goto LAB_14357c2e2;
      uStack_30 = *(ulonglong *)(lStack_50 + uStack_40 * 8);
    }
    local_38 = FUN_143561b20();
  }
  else {
    local_58 = *(longlong *)(param_1 + 0x48);
    lStack_50 = local_58 + 0x40;
    local_48 = (*(longlong *)(local_58 + 0x10) - local_58) + -0x40 >> 3;
    uVar3 = param_3 - 1U & 0x3f;
    local_38 = (ulonglong)uVar3;
    uStack_40 = (ulonglong)(param_3 - 1U >> 6);
    uStack_30 = *(ulonglong *)(lStack_50 + uStack_40 * 8) & ~((1L << (sbyte)uVar3) - 1U);
  }
LAB_14357c2e2:
  if (param_3 != 0) {
    if (local_48 <= uStack_40) goto LAB_14357c401;
    if (local_38 < 0x3f) {
      uStack_30 = uStack_30 & ~(1L << (local_38 & 0x3f));
    }
    else {
      uStack_40 = uStack_40 + 1;
      if (local_48 <= uStack_40) goto LAB_14357c37a;
      uStack_30 = *(ulonglong *)(lStack_50 + uStack_40 * 8);
    }
    while (uStack_30 == 0) {
      uStack_40 = uStack_40 + 1;
      if (local_48 <= uStack_40) goto LAB_14357c401;
      uStack_30 = *(ulonglong *)(lStack_50 + uStack_40 * 8);
    }
    local_38 = FUN_143561b20(uStack_30);
  }
LAB_14357c37a:
  if (uStack_40 < local_48) {
    cVar1 = *(char *)(param_1 + 0x40);
    do {
      if (((cVar1 == '\0') ||
          (puVar2 = (uint *)((uStack_40 * 0x40 + local_38) * 0x20 + *(longlong *)(local_58 + 0x20)),
          (*puVar2 >> 9 & 1) == 0)) || (*(longlong *)(*(longlong *)(puVar2 + 2) + 8) != 0)) {
        *param_2 = (int)local_38 + 1 + (int)uStack_40 * 0x40;
        return param_2;
      }
      if (local_38 < 0x3f) {
        uStack_30 = uStack_30 & ~(1L << (local_38 & 0x3f));
      }
      else {
        uStack_40 = uStack_40 + 1;
        if (local_48 <= uStack_40) break;
        uStack_30 = *(ulonglong *)(lStack_50 + uStack_40 * 8);
      }
      while (uStack_30 == 0) {
        uStack_40 = uStack_40 + 1;
        if (local_48 <= uStack_40) goto LAB_14357c401;
        uStack_30 = *(ulonglong *)(lStack_50 + uStack_40 * 8);
      }
      local_38 = FUN_143561b20(uStack_30);
      if (local_48 <= uStack_40) break;
    } while( true );
  }
LAB_14357c401:
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14357c450 FUN_14357c450 body=644 status=ok
// SIG undefined FUN_14357c450(void)

undefined8 * FUN_14357c450(longlong param_1,undefined8 *param_2,longlong param_3,ulonglong *param_4)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  char *pcVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong local_res8;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  
  puVar1 = (uint *)(param_3 + 0x10);
  *param_2 = *(undefined8 *)(param_1 + 0x48);
  lVar12 = -1;
  uVar7 = *puVar1 & 0x1f;
  param_2[1] = 0xffffffffffffffff;
  local_res8 = param_1;
  if (uVar7 < 2) {
LAB_14357c67f:
    uVar9 = FUN_143591d60(&local_res8,puVar1);
    *param_4 = uVar9;
    puVar11 = (undefined8 *)FUN_143581220(*(undefined8 *)(param_1 + 0x48),&local_res8,puVar1,uVar9);
    uVar5 = *puVar11;
    *param_2 = *(undefined8 *)(param_1 + 0x48);
    param_2[1] = uVar5;
  }
  else {
    lVar13 = lVar12;
    if (uVar7 < 4) {
      pcVar8 = (char *)FUN_143590af0(puVar1,local_res10,&local_res18);
      if (*pcVar8 == '\0') {
        return param_2;
      }
      local_48 = local_res18;
      local_50 = 0;
      local_58[0] = 4;
      uVar9 = FUN_143591d60(local_res10,local_58);
      *param_4 = uVar9;
      lVar2 = *(longlong *)(param_1 + 0x48);
      if (*(int *)(lVar2 + 8) != 0) {
        uVar10 = *(uint *)(lVar2 + 0x30) & uVar9;
        plVar14 = (longlong *)(uVar10 * 0x10 + *(longlong *)(lVar2 + 0x38));
        plVar16 = (longlong *)0x0;
        if (*plVar14 != -1) {
          while( true ) {
            plVar15 = plVar14;
            lVar3 = *plVar15;
            uVar4 = *(ulonglong *)(*(longlong *)(lVar2 + 0x10) + lVar3 * 8);
            if ((((plVar16 == (longlong *)0x0) &&
                 (lVar13 = lVar12, uVar10 != (*(uint *)(lVar2 + 0x30) & uVar4))) ||
                ((uVar4 == uVar9 &&
                 (cVar6 = FUN_1435927d0(lVar3 * 0x20 + *(longlong *)(lVar2 + 0x20),local_58),
                 lVar13 = lVar3, cVar6 != '\0')))) ||
               (uVar10 = plVar15[1], lVar13 = lVar12, uVar10 == 0xffffffffffffffff)) break;
            plVar14 = (longlong *)(uVar10 * 0x10 + *(longlong *)(lVar2 + 0x38));
            plVar16 = plVar15;
          }
        }
      }
    }
    else {
      if ((uVar7 != 10) ||
         (pcVar8 = (char *)FUN_1435bdf80(local_res10,*(undefined8 *)(param_3 + 0x20),&local_res18),
         *pcVar8 == '\0')) goto LAB_14357c67f;
      local_48 = local_res18;
      local_50 = 0;
      local_58[0] = 4;
      uVar9 = FUN_143591d60(local_res10,local_58);
      *param_4 = uVar9;
      lVar2 = *(longlong *)(param_1 + 0x48);
      if (*(int *)(lVar2 + 8) != 0) {
        uVar10 = *(uint *)(lVar2 + 0x30) & uVar9;
        plVar14 = (longlong *)(uVar10 * 0x10 + *(longlong *)(lVar2 + 0x38));
        plVar16 = (longlong *)0x0;
        if (*plVar14 != -1) {
          while( true ) {
            plVar15 = plVar14;
            lVar3 = *plVar15;
            uVar4 = *(ulonglong *)(*(longlong *)(lVar2 + 0x10) + lVar3 * 8);
            if ((((plVar16 == (longlong *)0x0) &&
                 (lVar13 = lVar12, uVar10 != (*(uint *)(lVar2 + 0x30) & uVar4))) ||
                ((uVar4 == uVar9 &&
                 (cVar6 = FUN_1435927d0(lVar3 * 0x20 + *(longlong *)(lVar2 + 0x20),local_58),
                 lVar13 = lVar3, cVar6 != '\0')))) ||
               (uVar10 = plVar15[1], lVar13 = lVar12, uVar10 == 0xffffffffffffffff)) break;
            plVar14 = (longlong *)(uVar10 * 0x10 + *(longlong *)(lVar2 + 0x38));
            plVar16 = plVar15;
          }
        }
      }
    }
    local_68 = (undefined4)*(undefined8 *)(local_res8 + 0x48);
    uStack_64 = (undefined4)((ulonglong)*(undefined8 *)(local_res8 + 0x48) >> 0x20);
    uStack_60 = (undefined4)lVar13;
    uStack_5c = (undefined4)((ulonglong)lVar13 >> 0x20);
    *(undefined4 *)param_2 = local_68;
    *(undefined4 *)((longlong)param_2 + 4) = uStack_64;
    *(undefined4 *)(param_2 + 1) = uStack_60;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_5c;
    if (9 < ((byte)local_58[0] & 0x1f)) {
      if ((local_58[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_58);
      }
      else {
        FUN_143592150();
      }
    }
  }
  return param_2;
}



// FUNCTION 14357c6e0 AS3Constructor body=34 status=ok
// SIG undefined AS3Constructor(void)

void Scaleform::GFx::AS3::Instances::fl_utils::Dictionary::AS3Constructor
               (longlong param_1,int param_2,undefined8 param_3)

{
  char cVar1;
  
  if ((param_2 != 0) && (cVar1 = FUN_1435909c0(param_3), cVar1 != '\0')) {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  return;
}



// FUNCTION 14357c710 FUN_14357c710 body=43 status=ok
// SIG undefined FUN_14357c710(void)

undefined8 * FUN_14357c710(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *(undefined4 *)(param_1 + 0x12) = 0xb;
  *param_1 = &PTR_FUN_145b438c8;
  return param_1;
}



// FUNCTION 14357c750 FUN_14357c750 body=188 status=ok
// SIG undefined FUN_14357c750(void)

void FUN_14357c750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    UInterpTrackInst::UInterpTrackInst(puVar1,param_3);
    *(undefined1 *)(puVar1 + 8) = 0;
    *puVar1 = &PTR_ForEachChild_GC_145b43808;
    puVar1[9] = &DAT_1467d8c70;
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar1);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 14357c820 FUN_14357c820 body=43 status=ok
// SIG undefined FUN_14357c820(void)

undefined8 * FUN_14357c820(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *(undefined4 *)(param_1 + 0x12) = 0xb;
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14357c860 FUN_14357c860 body=234 status=ok
// SIG undefined FUN_14357c860(void)

undefined8 * FUN_14357c860(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b433e0);
    *(undefined4 *)(puVar2 + 0x12) = 0xb;
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b433e0);
    *(undefined4 *)(puVar2 + 0x12) = 0xb;
    *puVar2 = &PTR_FUN_145b438c8;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14357c950 FUN_14357c950 body=33 status=ok
// SIG undefined FUN_14357c950(void)

undefined8 * FUN_14357c950(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14357c980 FUN_14357c980 body=215 status=ok
// SIG undefined FUN_14357c980(void)

undefined8 * FUN_14357c980(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b434a0);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)FUN_1434af920(lVar3,param_2,&PTR_DAT_145b434a0);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14357ca60 FUN_14357ca60 body=50 status=ok
// SIG undefined FUN_14357ca60(void)

void * FUN_14357ca60(void *param_1)

{
  _guard_xfg_dispatch_icall_nop(param_1,0,0x58);
  inflateInit_(param_1,"1.2.7",0x58);
  return param_1;
}



// FUNCTION 14357cab0 FUN_14357cab0 body=65 status=ok
// SIG undefined FUN_14357cab0(void)

undefined8 FUN_14357cab0(int *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (*param_1 << 0x15) >> 0x1b;
  if ((iVar2 < 10) || (iVar2 == 0xe)) {
    cVar1 = Scaleform::GFx::AS3::SlotInfo::IsConst();
    if (cVar1 == '\0') {
      cVar1 = FUN_1434b29c0(*(undefined8 *)(param_1 + 2));
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14357cb00 FUN_14357cb00 body=52 status=ok
// SIG undefined FUN_14357cb00(void)

undefined4 FUN_14357cb00(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined **local_18;
  undefined4 local_10;
  
  local_10 = 0;
  local_18 = &PTR_FUN_145b439e0;
  FUN_1435b43c0(param_1 + 0x28,local_res8,&local_18);
  return local_10;
}



// FUNCTION 14357cb40 FUN_14357cb40 body=33 status=ok
// SIG undefined FUN_14357cb40(void)

undefined8 * FUN_14357cb40(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14357cb70 FUN_14357cb70 body=250 status=ok
// SIG undefined FUN_14357cb70(void)

undefined8 * FUN_14357cb70(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b43440);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b43440);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x60);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b23ad8;
    puVar5[10] = "bigEndian";
    puVar5[0xb] = "littleEndian";
  }
  return param_1;
}



// FUNCTION 14357cc70 FUN_14357cc70 body=55 status=ok
// SIG undefined FUN_14357cc70(void)

undefined8 * FUN_14357cc70(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b23ad8;
  param_1[10] = "bigEndian";
  param_1[0xb] = "littleEndian";
  return param_1;
}



// FUNCTION 14357ccb0 FUN_14357ccb0 body=33 status=ok
// SIG undefined FUN_14357ccb0(void)

undefined8 * FUN_14357ccb0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14357cce0 FUN_14357cce0 body=215 status=ok
// SIG undefined FUN_14357cce0(void)

undefined8 * FUN_14357cce0(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b430e0);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)FUN_1434af920(lVar3,param_2,&PTR_DAT_145b430e0);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14357cdc0 FUN_14357cdc0 body=33 status=ok
// SIG undefined FUN_14357cdc0(void)

undefined8 * FUN_14357cdc0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14357cdf0 FUN_14357cdf0 body=215 status=ok
// SIG undefined FUN_14357cdf0(void)

undefined8 * FUN_14357cdf0(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b431d0);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)FUN_1434af920(lVar3,param_2,&PTR_DAT_145b431d0);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14357ced0 FUN_14357ced0 body=73 status=ok
// SIG undefined FUN_14357ced0(void)

undefined8 * FUN_14357ced0(undefined8 *param_1)

{
  UInterpTrackInst::UInterpTrackInst();
  param_1[8] = 0xffffffffffffffff;
  *param_1 = &PTR_FUN_145b43a30;
  param_1[9] = 0xffffffffffffffff;
  param_1[10] = 0xffffffffffffffff;
  param_1[0xb] = 0xffffffffffffffff;
  param_1[0xc] = 0xffffffffffffffff;
  return param_1;
}



// FUNCTION 14357cf20 FUN_14357cf20 body=337 status=ok
// SIG undefined FUN_14357cf20(void)

undefined1 *
FUN_14357cf20(longlong param_1,undefined1 *param_2,undefined4 *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 local_res8 [8];
  longlong local_res18;
  uint local_38 [2];
  undefined8 local_30;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  if (((byte)*param_3 & 3) < 2) {
    lVar6 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x218);
    local_res18 = lVar6 + 0x48;
    piVar1 = (int *)(lVar6 + 0x60);
    *piVar1 = *piVar1 + 1;
    pcVar4 = (char *)FUN_1435911f0(param_3 + 4,local_res8,&local_res18);
    if (*pcVar4 == '\0') {
      *param_2 = 0;
      piVar1 = (int *)(local_res18 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) {
        return param_2;
      }
      FUN_14335f920();
      return param_2;
    }
    uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 0x250) + 0xd8);
    uVar5 = FUN_1435aec10(param_3);
    lVar6 = FUN_1435b5bc0(uVar3);
    uVar7 = 0;
    if (lVar6 != 0) {
      uVar7 = FUN_1434bb260(lVar6,uVar3,&local_res18,uVar5);
    }
    local_38[0] = 0;
    local_30 = 0;
    Scaleform::GFx::AS3::Value::PickUnsafe(local_38,uVar7);
    FUN_143590140(param_4,local_38);
    if (9 < ((byte)local_38[0] & 0x1f)) {
      if ((local_38[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_38);
      }
      else {
        FUN_143592150();
      }
    }
    piVar1 = (int *)(local_res18 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    FUN_143590140(param_4,param_3 + 4);
  }
  *param_2 = *(char *)(lVar2 + 0xb8) == '\0';
  return param_2;
}



// FUNCTION 14357d080 FUN_14357d080 body=169 status=ok
// SIG undefined FUN_14357d080(void)

undefined4 FUN_14357d080(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong local_res8;
  ulonglong local_res18 [2];
  
  lVar3 = *(longlong *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(longlong *)(lVar3 + 0x98) + 0x1f0);
  local_res8 = FUN_143360a60(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(lVar3 + 0x98) + 0x10) + 0x218));
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  FUN_1435b4530(lVar3 + 0x28,local_res18,&local_res8,uVar2);
  if ((longlong)local_res18[0] < 0) {
    lVar3 = 0;
  }
  else if (local_res18[0] < *(ulonglong *)(lVar3 + 0x28)) {
    lVar3 = FUN_1434ef150(*(undefined8 *)(lVar3 + 0x30),local_res18[0]);
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 0x38) + 0x10 +
            ((local_res18[0] & 0xffffffff) - *(ulonglong *)(lVar3 + 0x28)) * 0x40;
  }
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return *(undefined4 *)(lVar3 + 4);
}



// FUNCTION 14357d130 FUN_14357d130 body=855 status=ok
// SIG undefined FUN_14357d130(void)

undefined1 * FUN_14357d130(longlong param_1,undefined1 *param_2,undefined8 param_3,uint *param_4)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  char *pcVar7;
  uint *puVar8;
  longlong local_res8;
  uint local_f8 [2];
  undefined8 local_f0;
  undefined8 local_d8;
  ulonglong local_d0;
  uint local_c8 [8];
  uint local_a8 [2];
  undefined8 local_a0;
  undefined4 local_88 [2];
  undefined8 local_80;
  uint local_68 [2];
  undefined8 local_60;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint local_48 [8];
  
  lVar5 = *(longlong *)(param_1 + 0x28);
  lVar4 = *(longlong *)(lVar5 + 0x98);
  local_d8 = 0xffffffffffffffff;
  lVar5 = FUN_1435af580(*(undefined8 *)(lVar5 + 0x98),lVar5,param_3,&local_d8,param_1);
  if (lVar5 == 0) {
    if (*(int *)(param_1 + 100) < 0) {
      lVar5 = *(longlong *)(param_1 + 0x28);
      uVar6 = *(undefined8 *)(*(longlong *)(lVar5 + 0x98) + 0x1f0);
      local_res8 = FUN_143360a60(*(undefined8 *)
                                  (*(longlong *)(*(longlong *)(lVar5 + 0x98) + 0x10) + 0x218),
                                 "setProperty");
      *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
      FUN_1435b4530(lVar5 + 0x28,&local_d0,&local_res8,uVar6);
      if ((longlong)local_d0 < 0) {
        lVar5 = 0;
      }
      else if (local_d0 < *(ulonglong *)(lVar5 + 0x28)) {
        lVar5 = FUN_1434ef150(*(undefined8 *)(lVar5 + 0x30),local_d0);
      }
      else {
        lVar5 = *(longlong *)(lVar5 + 0x38) + 0x10 +
                ((local_d0 & 0xffffffff) - *(ulonglong *)(lVar5 + 0x28)) * 0x40;
      }
      piVar1 = (int *)(local_res8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(lVar5 + 4);
    }
    iVar3 = *(int *)(param_1 + 100);
    uVar6 = FUN_1434ef190(*(undefined8 *)(param_1 + 0x28));
    FUN_1435d7ec0(uVar6,local_c8,(longlong)iVar3);
    local_60 = *(undefined8 *)(param_4 + 2);
    local_68[0] = *param_4;
    local_58 = param_4[4];
    uStack_54 = param_4[5];
    uStack_50 = param_4[6];
    uStack_4c = param_4[7];
    local_f8[0] = 0;
    local_f0 = 0;
    local_88[0] = 0;
    local_80 = 0;
    if (9 < ((byte)local_68[0] & 0x1f)) {
      if ((local_68[0] >> 9 & 1) == 0) {
        FUN_143592070(param_4);
      }
      else {
        FUN_143592140();
      }
    }
    pcVar7 = (char *)FUN_14357cf20(param_1,&local_res8,param_3,local_88);
    lVar5 = 2;
    if (*pcVar7 == '\0') {
      *param_2 = 0;
      puVar8 = local_48;
      do {
        puVar2 = puVar8 + -8;
        puVar8 = puVar8 + -8;
        lVar5 = lVar5 + -1;
        if (9 < ((byte)*puVar2 & 0x1f)) {
          if ((*puVar2 >> 9 & 1) == 0) {
            FUN_1435920c0(puVar8);
          }
          else {
            FUN_143592150();
          }
        }
      } while (lVar5 != 0);
    }
    else {
      local_res8 = CONCAT44(local_res8._4_4_,2);
      uVar6 = FUN_143590110(local_48,param_1);
      local_a8[0] = 0;
      local_a0 = 0;
      FUN_1435ce880(lVar4,local_c8,uVar6,local_a8,&local_res8,local_88,0,1);
      FUN_1435904e0(local_a8,local_f8);
      if (9 < ((byte)local_a8[0] & 0x1f)) {
        if ((local_a8[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_a8);
        }
        else {
          FUN_143592150();
        }
      }
      if (9 < ((byte)local_48[0] & 0x1f)) {
        if ((local_48[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_48);
        }
        else {
          FUN_143592150();
        }
      }
      puVar8 = local_48;
      *param_2 = *(char *)(lVar4 + 0xb8) == '\0';
      do {
        puVar2 = puVar8 + -8;
        puVar8 = puVar8 + -8;
        lVar5 = lVar5 + -1;
        if (9 < ((byte)*puVar2 & 0x1f)) {
          if ((*puVar2 >> 9 & 1) == 0) {
            FUN_1435920c0(puVar8);
          }
          else {
            FUN_143592150();
          }
        }
      } while (lVar5 != 0);
    }
    if (9 < ((byte)local_f8[0] & 0x1f)) {
      if ((local_f8[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_f8);
      }
      else {
        FUN_143592150();
      }
    }
    if (9 < ((byte)local_c8[0] & 0x1f)) {
      if ((local_c8[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_c8);
      }
      else {
        FUN_143592150();
      }
    }
  }
  else {
    FUN_1435acaa0(lVar5,param_2,lVar4,param_4,param_1);
  }
  return param_2;
}



// FUNCTION 14357d490 FUN_14357d490 body=601 status=ok
// SIG undefined FUN_14357d490(void)

undefined1 *
FUN_14357d490(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  char *pcVar5;
  undefined8 uVar6;
  uint *puVar7;
  undefined4 local_res8 [2];
  uint local_b8 [2];
  undefined8 local_b0;
  uint local_98 [2];
  undefined8 local_90;
  undefined8 local_78;
  uint local_70 [8];
  uint local_50 [10];
  
  lVar4 = *(longlong *)(param_1 + 0x28);
  lVar2 = *(longlong *)(lVar4 + 0x98);
  local_78 = 0xffffffffffffffff;
  lVar4 = FUN_1435af580(*(undefined8 *)(lVar4 + 0x98),lVar4,param_3,&local_78,param_1);
  if (lVar4 != 0) {
    local_b8[0] = 0;
    local_b0 = 0;
    pcVar5 = (char *)FUN_1435abe90(lVar4,local_res8,local_b8,param_1);
    if (*pcVar5 != '\0') {
      FUN_1435904e0(local_b8,param_4);
      *param_2 = 1;
      if (((byte)local_b8[0] & 0x1f) < 10) {
        return param_2;
      }
      puVar7 = local_b8;
      if ((local_b8[0] >> 9 & 1) != 0) {
        FUN_143592150();
        return param_2;
      }
      goto LAB_14357d6c4;
    }
    if (9 < ((byte)local_b8[0] & 0x1f)) {
      if ((local_b8[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_b8);
      }
      else {
        FUN_143592150();
      }
    }
  }
  if (*(int *)(param_1 + 0x4c) < 0) {
    uVar3 = FUN_14357d080(param_1,"getProperty");
    *(undefined4 *)(param_1 + 0x4c) = uVar3;
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  uVar6 = FUN_1434ef190(*(undefined8 *)(param_1 + 0x28));
  FUN_1435d7ec0(uVar6,local_70,(longlong)iVar1);
  local_98[0] = 0;
  local_90 = 0;
  pcVar5 = (char *)FUN_14357cf20(param_1,local_res8,param_3,local_98);
  if (*pcVar5 == '\0') {
    *param_2 = 0;
  }
  else {
    local_res8[0] = 1;
    uVar6 = FUN_143590110(local_50,param_1);
    local_b8[0] = 0;
    local_b0 = 0;
    FUN_1435ce880(lVar2,local_70,uVar6,local_b8,local_res8,local_98,0,1);
    FUN_1435904e0(local_b8,param_4);
    if (9 < ((byte)local_b8[0] & 0x1f)) {
      if ((local_b8[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_b8);
      }
      else {
        FUN_143592150();
      }
    }
    if (9 < ((byte)local_50[0] & 0x1f)) {
      if ((local_50[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_50);
      }
      else {
        FUN_143592150();
      }
    }
    *param_2 = *(char *)(lVar2 + 0xb8) == '\0';
  }
  if (9 < ((byte)local_98[0] & 0x1f)) {
    if ((local_98[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_98);
    }
    else {
      FUN_143592150();
    }
  }
  if (((byte)local_70[0] & 0x1f) < 10) {
    return param_2;
  }
  puVar7 = local_70;
  if ((local_70[0] >> 9 & 1) != 0) {
    FUN_143592150(puVar7);
    return param_2;
  }
LAB_14357d6c4:
  FUN_1435920c0(puVar7);
  return param_2;
}



// FUNCTION 14357d6f0 FUN_14357d6f0 body=754 status=ok
// SIG undefined FUN_14357d6f0(void)

undefined1 * FUN_14357d6f0(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
  char *pcVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong local_res20;
  uint local_d8 [2];
  undefined8 local_d0;
  uint local_b8 [2];
  undefined8 local_b0;
  uint local_98 [8];
  ulonglong local_78;
  uint local_70 [2];
  undefined8 local_68;
  uint local_50 [10];
  
  uVar5 = 1;
  pcVar6 = (char *)FUN_1435b1480(param_1,&local_res20);
  if (*pcVar6 == '\0') {
    lVar7 = 0;
    lVar3 = *(longlong *)(param_1 + 0x28);
    lVar4 = *(longlong *)(lVar3 + 0x98);
    if (*(int *)(param_1 + 0x44) < 0) {
      uVar8 = *(undefined8 *)(lVar4 + 0x1f0);
      local_res20 = FUN_143360a60(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),
                                  "deleteProperty");
      *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
      FUN_1435b4530(lVar3 + 0x28,&local_78,&local_res20,uVar8);
      if (-1 < (longlong)local_78) {
        if (local_78 < *(ulonglong *)(lVar3 + 0x28)) {
          lVar7 = FUN_1434ef150(*(undefined8 *)(lVar3 + 0x30),local_78);
        }
        else {
          lVar7 = *(longlong *)(lVar3 + 0x38) + 0x10 +
                  ((local_78 & 0xffffffff) - *(ulonglong *)(lVar3 + 0x28)) * 0x40;
        }
      }
      piVar1 = (int *)(local_res20 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(lVar7 + 4);
    }
    iVar2 = *(int *)(param_1 + 0x44);
    uVar8 = FUN_1434ef190(*(undefined8 *)(param_1 + 0x28));
    FUN_1435d7ec0(uVar8,local_98,(longlong)iVar2);
    local_b8[0] = 0;
    local_b0 = 0;
    local_d8[0] = 0;
    local_d0 = 0;
    pcVar6 = (char *)FUN_14357cf20(param_1,&local_res20,param_3,local_d8);
    if (*pcVar6 != '\0') {
      local_res20 = CONCAT44(local_res20._4_4_,1);
      uVar8 = FUN_143590110(local_50,param_1);
      local_70[0] = 0;
      local_68 = 0;
      FUN_1435ce880(lVar4,local_98,uVar8,local_70,&local_res20,local_d8,0,1);
      FUN_1435904e0(local_70,local_b8);
      if (9 < ((byte)local_70[0] & 0x1f)) {
        if ((local_70[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_70);
        }
        else {
          FUN_143592150();
        }
      }
      if (9 < ((byte)local_50[0] & 0x1f)) {
        if ((local_50[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_50);
        }
        else {
          FUN_143592150();
        }
      }
      if (*(char *)(lVar4 + 0xb8) == '\0') {
        uVar5 = FUN_1435909c0(local_b8);
        if (9 < ((byte)local_d8[0] & 0x1f)) {
          if ((local_d8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_d8);
          }
          else {
            FUN_143592150();
          }
        }
        if (9 < ((byte)local_b8[0] & 0x1f)) {
          if ((local_b8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_b8);
          }
          else {
            FUN_143592150();
          }
        }
        if (9 < ((byte)local_98[0] & 0x1f)) {
          if ((local_98[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_98);
          }
          else {
            FUN_143592150();
          }
        }
        goto LAB_14357d9c1;
      }
    }
    *param_2 = 0;
    if (9 < ((byte)local_d8[0] & 0x1f)) {
      if ((local_d8[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_d8);
      }
      else {
        FUN_143592150();
      }
    }
    if (9 < ((byte)local_b8[0] & 0x1f)) {
      if ((local_b8[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_b8);
      }
      else {
        FUN_143592150();
      }
    }
    if (9 < ((byte)local_98[0] & 0x1f)) {
      if ((local_98[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_98);
      }
      else {
        FUN_143592150();
      }
    }
  }
  else {
LAB_14357d9c1:
    *param_2 = uVar5;
  }
  return param_2;
}



// FUNCTION 14357d9f0 FUN_14357d9f0 body=859 status=ok
// SIG undefined FUN_14357d9f0(void)

undefined1 *
FUN_14357d9f0(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  bool bVar11;
  undefined4 local_res8 [2];
  uint local_e8 [2];
  undefined8 local_e0;
  longlong local_d8;
  longlong local_c8;
  longlong local_c0;
  uint local_b8 [8];
  undefined8 local_98;
  uint local_90 [2];
  undefined8 local_88;
  undefined4 local_68 [2];
  undefined8 local_60;
  uint local_48 [8];
  
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  FUN_143590110(local_b8,param_1);
  local_98 = 0xffffffffffffffff;
  lVar7 = FUN_1435af580(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),
                        *(longlong *)(param_1 + 0x28),param_3,&local_98,param_1);
  if (lVar7 == 0) {
    if (*(int *)(param_1 + 0x40) < 0) {
      uVar6 = FUN_14357d080(param_1,"callProperty");
      *(undefined4 *)(param_1 + 0x40) = uVar6;
    }
    iVar3 = *(int *)(param_1 + 0x40);
    uVar9 = FUN_1434ef190(*(undefined8 *)(param_1 + 0x28));
    FUN_1435d7ec0(uVar9,local_e8,(longlong)iVar3);
    FUN_1435ca860(lVar4,&local_c8);
    FUN_1434b4230(local_c8 + 0x40,param_5,param_6);
    local_68[0] = 0;
    local_60 = 0;
    local_48[0] = 0;
    local_48[2] = 0;
    local_48[3] = 0;
    Scaleform::GFx::AS3::Value::PickUnsafe(local_48,local_c8);
    pcVar8 = (char *)FUN_14357cf20(param_1,local_res8,param_3,local_68);
    lVar7 = 2;
    if (*pcVar8 == '\0') {
      *param_2 = 0;
      puVar10 = &stack0xffffffffffffffd8;
      do {
        puVar2 = (uint *)(puVar10 + -0x20);
        puVar10 = puVar10 + -0x20;
        lVar7 = lVar7 + -1;
        if (9 < ((byte)*puVar2 & 0x1f)) {
          if ((*puVar2 >> 9 & 1) == 0) {
            FUN_1435920c0(puVar10);
          }
          else {
            FUN_143592150();
          }
        }
      } while (lVar7 != 0);
      if (9 < ((byte)local_e8[0] & 0x1f)) {
        if ((local_e8[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_e8);
        }
        else {
          FUN_143592150();
        }
      }
      goto LAB_14357dd03;
    }
    local_res8[0] = 2;
    local_90[0] = 0;
    local_88 = 0;
    FUN_1435ce880(lVar4,local_e8,local_b8,local_90,local_res8,local_68,0,1);
    FUN_1435904e0(local_90,param_4);
    if (9 < ((byte)local_90[0] & 0x1f)) {
      if ((local_90[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_90);
      }
      else {
        FUN_143592150();
      }
    }
    puVar10 = &stack0xffffffffffffffd8;
    do {
      puVar2 = (uint *)(puVar10 + -0x20);
      puVar10 = puVar10 + -0x20;
      lVar7 = lVar7 + -1;
      if (9 < ((byte)*puVar2 & 0x1f)) {
        if ((*puVar2 >> 9 & 1) == 0) {
          FUN_1435920c0(puVar10);
        }
        else {
          FUN_143592150();
        }
      }
    } while (lVar7 != 0);
  }
  else {
    local_e8[0] = 0;
    local_e0 = 0;
    pcVar8 = (char *)FUN_1435abe90(lVar7,local_res8,local_e8,param_1);
    if (*pcVar8 != '\0') {
      uVar5 = local_e8[0] & 0x1f;
      if (uVar5 == 0) {
LAB_14357dafb:
        uVar9 = FUN_1435c8e40(&local_c8,0x3ee,lVar4);
        FUN_1435cbe70(lVar4,uVar9);
        piVar1 = (int *)(local_c0 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      else {
        if (uVar5 == 0xc) {
          bVar11 = local_d8 == 0;
LAB_14357dab9:
          if (bVar11) goto LAB_14357dafb;
        }
        else if (uVar5 == 10) {
          bVar11 = local_d8 == *(longlong *)(local_d8 + 8) + 0x80;
          goto LAB_14357dab9;
        }
        local_res8[0] = param_5;
        FUN_1435ce880(lVar4,local_e8,local_b8,param_4,local_res8,param_6,0,1);
      }
    }
  }
  if (9 < ((byte)local_e8[0] & 0x1f)) {
    if ((local_e8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_e8);
    }
    else {
      FUN_143592150();
    }
  }
  *param_2 = *(char *)(lVar4 + 0xb8) == '\0';
LAB_14357dd03:
  if (9 < ((byte)local_b8[0] & 0x1f)) {
    if ((local_b8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_b8);
    }
    else {
      FUN_143592150();
    }
  }
  return param_2;
}



// FUNCTION 14357dd60 FUN_14357dd60 body=677 status=ok
// SIG undefined FUN_14357dd60(void)

undefined1 FUN_14357dd60(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  char *pcVar8;
  longlong local_res8;
  undefined8 local_res20;
  ulonglong local_d8;
  uint local_d0 [2];
  undefined8 local_c8;
  uint local_b0 [2];
  undefined8 local_a8;
  uint local_90 [2];
  undefined8 local_88;
  uint local_70 [8];
  uint local_50 [10];
  
  local_res20 = 0xffffffffffffffff;
  lVar5 = FUN_1435af580(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),
                        *(longlong *)(param_1 + 0x28),param_2,&local_res20,param_1);
  if (lVar5 == 0) {
    lVar5 = *(longlong *)(param_1 + 0x28);
    lVar6 = 0;
    lVar3 = *(longlong *)(lVar5 + 0x98);
    if (*(int *)(param_1 + 0x50) < 0) {
      uVar7 = *(undefined8 *)(lVar3 + 0x1f0);
      local_res8 = FUN_143360a60(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"hasProperty")
      ;
      *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
      FUN_1435b4530(lVar5 + 0x28,&local_d8,&local_res8,uVar7);
      if (-1 < (longlong)local_d8) {
        if (local_d8 < *(ulonglong *)(lVar5 + 0x28)) {
          lVar6 = FUN_1434ef150(*(undefined8 *)(lVar5 + 0x30),local_d8);
        }
        else {
          lVar6 = *(longlong *)(lVar5 + 0x38) + 0x10 +
                  ((local_d8 & 0xffffffff) - *(ulonglong *)(lVar5 + 0x28)) * 0x40;
        }
      }
      piVar1 = (int *)(local_res8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(lVar6 + 4);
    }
    iVar2 = *(int *)(param_1 + 0x50);
    uVar7 = FUN_1434ef190(*(undefined8 *)(param_1 + 0x28));
    FUN_1435d7ec0(uVar7,local_70,(longlong)iVar2);
    local_90[0] = 0;
    local_88 = 0;
    local_b0[0] = 0;
    local_a8 = 0;
    pcVar8 = (char *)FUN_14357cf20(param_1,&local_res8,param_2,local_b0);
    if (*pcVar8 == '\0') {
      uVar4 = 0;
    }
    else {
      local_res8 = CONCAT44(local_res8._4_4_,1);
      uVar7 = FUN_143590110(local_50,param_1);
      local_d0[0] = 0;
      local_c8 = 0;
      FUN_1435ce880(lVar3,local_70,uVar7,local_d0,&local_res8,local_b0,0,1);
      FUN_1435904e0(local_d0,local_90);
      if (9 < ((byte)local_d0[0] & 0x1f)) {
        if ((local_d0[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_d0);
        }
        else {
          FUN_143592150();
        }
      }
      if (9 < ((byte)local_50[0] & 0x1f)) {
        if ((local_50[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_50);
        }
        else {
          FUN_143592150();
        }
      }
      uVar4 = FUN_1435909c0(local_90);
    }
    if (9 < ((byte)local_b0[0] & 0x1f)) {
      if ((local_b0[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_b0);
      }
      else {
        FUN_143592150();
      }
    }
    if (9 < ((byte)local_90[0] & 0x1f)) {
      if ((local_90[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_90);
      }
      else {
        FUN_143592150();
      }
    }
    if (9 < ((byte)local_70[0] & 0x1f)) {
      if ((local_70[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_70);
      }
      else {
        FUN_143592150();
      }
    }
    return uVar4;
  }
  return 1;
}



// FUNCTION 14357e010 FUN_14357e010 body=511 status=ok
// SIG undefined FUN_14357e010(void)

void FUN_14357e010(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_res8;
  ulonglong local_res20;
  uint local_a8 [2];
  undefined8 local_a0;
  uint local_88 [2];
  undefined8 local_80;
  undefined4 local_78;
  uint local_68 [8];
  uint local_48 [8];
  
  lVar4 = *(longlong *)(param_1 + 0x28);
  lVar3 = *(longlong *)(lVar4 + 0x98);
  if (*(int *)(param_1 + 0x58) < 0) {
    uVar5 = *(undefined8 *)(lVar3 + 0x1f0);
    local_res8 = FUN_143360a60(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"nextName");
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    FUN_1435b4530(lVar4 + 0x28,&local_res20,&local_res8,uVar5);
    if ((longlong)local_res20 < 0) {
      lVar4 = 0;
    }
    else if (local_res20 < *(ulonglong *)(lVar4 + 0x28)) {
      lVar4 = FUN_1434ef150(*(undefined8 *)(lVar4 + 0x30),local_res20);
    }
    else {
      lVar4 = *(longlong *)(lVar4 + 0x38) + 0x10 +
              ((local_res20 & 0xffffffff) - *(ulonglong *)(lVar4 + 0x28)) * 0x40;
    }
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(lVar4 + 4);
  }
  iVar2 = *(int *)(param_1 + 0x58);
  uVar5 = FUN_1434ef190(*(undefined8 *)(param_1 + 0x28));
  FUN_1435d7ec0(uVar5,local_68,(longlong)iVar2);
  local_88[0] = 3;
  local_80 = 0;
  local_res8 = CONCAT44(local_res8._4_4_,1);
  local_78 = param_3;
  uVar5 = FUN_143590110(local_48,param_1);
  local_a8[0] = 0;
  local_a0 = 0;
  FUN_1435ce880(lVar3,local_68,uVar5,local_a8,&local_res8,local_88,0,1);
  FUN_1435904e0(local_a8,param_2);
  if (9 < ((byte)local_a8[0] & 0x1f)) {
    if ((local_a8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_a8);
    }
    else {
      FUN_143592150();
    }
  }
  if (9 < ((byte)local_48[0] & 0x1f)) {
    if ((local_48[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_48);
    }
    else {
      FUN_143592150();
    }
  }
  if (9 < ((byte)local_88[0] & 0x1f)) {
    if ((local_88[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_88);
    }
    else {
      FUN_143592150();
    }
  }
  if (9 < ((byte)local_68[0] & 0x1f)) {
    if ((local_68[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_68);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 14357e220 FUN_14357e220 body=577 status=ok
// SIG undefined FUN_14357e220(void)

uint * FUN_14357e220(longlong param_1,uint *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  char *pcVar7;
  longlong local_res8;
  uint local_res10;
  int iStackX_14;
  undefined4 local_res18;
  uint local_d8 [2];
  undefined8 local_d0;
  uint local_b8 [2];
  undefined8 local_b0;
  undefined4 local_a8;
  uint local_98 [2];
  undefined8 local_90;
  uint local_78 [8];
  uint local_58 [8];
  
  lVar3 = *(longlong *)(param_1 + 0x28);
  lVar5 = 0;
  *param_2 = 0;
  lVar4 = *(longlong *)(lVar3 + 0x98);
  local_res18 = param_3;
  if (*(int *)(param_1 + 0x5c) < 0) {
    uVar6 = *(undefined8 *)(lVar4 + 0x1f0);
    local_res8 = FUN_143360a60(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"nextNameIndex")
    ;
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    FUN_1435b4530(lVar3 + 0x28,&local_res10,&local_res8,uVar6);
    if (-1 < iStackX_14) {
      if (CONCAT44(iStackX_14,local_res10) < *(ulonglong *)(lVar3 + 0x28)) {
        lVar5 = FUN_1434ef150(*(undefined8 *)(lVar3 + 0x30),CONCAT44(iStackX_14,local_res10));
      }
      else {
        lVar5 = *(longlong *)(lVar3 + 0x38) + 0x10 +
                ((ulonglong)local_res10 - *(ulonglong *)(lVar3 + 0x28)) * 0x40;
      }
    }
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(lVar5 + 4);
  }
  iVar2 = *(int *)(param_1 + 0x5c);
  uVar6 = FUN_1434ef190(*(undefined8 *)(param_1 + 0x28));
  FUN_1435d7ec0(uVar6,local_78,(longlong)iVar2);
  local_a8 = local_res18;
  local_98[0] = 0;
  local_90 = 0;
  local_b8[0] = 3;
  local_b0 = 0;
  local_res8 = CONCAT44(local_res8._4_4_,1);
  uVar6 = FUN_143590110(local_58,param_1);
  local_d8[0] = 0;
  local_d0 = 0;
  FUN_1435ce880(lVar4,local_78,uVar6,local_d8,&local_res8,local_b8,0,1);
  FUN_1435904e0(local_d8,local_98);
  if (9 < ((byte)local_d8[0] & 0x1f)) {
    if ((local_d8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_d8);
    }
    else {
      FUN_143592150();
    }
  }
  if (9 < ((byte)local_58[0] & 0x1f)) {
    if ((local_58[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_58);
    }
    else {
      FUN_143592150();
    }
  }
  if ((*(char *)(lVar4 + 0xb8) == '\0') &&
     (pcVar7 = (char *)FUN_143590eb0(local_98,&local_res8,&local_res10), *pcVar7 != '\0')) {
    *param_2 = local_res10;
  }
  if (9 < ((byte)local_b8[0] & 0x1f)) {
    if ((local_b8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_b8);
    }
    else {
      FUN_143592150();
    }
  }
  if (9 < ((byte)local_98[0] & 0x1f)) {
    if ((local_98[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_98);
    }
    else {
      FUN_143592150();
    }
  }
  if (9 < ((byte)local_78[0] & 0x1f)) {
    if ((local_78[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_78);
    }
    else {
      FUN_143592150();
    }
  }
  return param_2;
}



// FUNCTION 14357e470 FUN_14357e470 body=511 status=ok
// SIG undefined FUN_14357e470(void)

void FUN_14357e470(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_res8;
  ulonglong local_res20;
  uint local_a8 [2];
  undefined8 local_a0;
  uint local_88 [2];
  undefined8 local_80;
  undefined4 local_78;
  uint local_68 [8];
  uint local_48 [8];
  
  lVar4 = *(longlong *)(param_1 + 0x28);
  lVar3 = *(longlong *)(lVar4 + 0x98);
  if (*(int *)(param_1 + 0x60) < 0) {
    uVar5 = *(undefined8 *)(lVar3 + 0x1f0);
    local_res8 = FUN_143360a60(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"nextValue");
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    FUN_1435b4530(lVar4 + 0x28,&local_res20,&local_res8,uVar5);
    if ((longlong)local_res20 < 0) {
      lVar4 = 0;
    }
    else if (local_res20 < *(ulonglong *)(lVar4 + 0x28)) {
      lVar4 = FUN_1434ef150(*(undefined8 *)(lVar4 + 0x30),local_res20);
    }
    else {
      lVar4 = *(longlong *)(lVar4 + 0x38) + 0x10 +
              ((local_res20 & 0xffffffff) - *(ulonglong *)(lVar4 + 0x28)) * 0x40;
    }
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar4 + 4);
  }
  iVar2 = *(int *)(param_1 + 0x60);
  uVar5 = FUN_1434ef190(*(undefined8 *)(param_1 + 0x28));
  FUN_1435d7ec0(uVar5,local_68,(longlong)iVar2);
  local_88[0] = 3;
  local_80 = 0;
  local_res8 = CONCAT44(local_res8._4_4_,1);
  local_78 = param_3;
  uVar5 = FUN_143590110(local_48,param_1);
  local_a8[0] = 0;
  local_a0 = 0;
  FUN_1435ce880(lVar3,local_68,uVar5,local_a8,&local_res8,local_88,0,1);
  FUN_1435904e0(local_a8,param_2);
  if (9 < ((byte)local_a8[0] & 0x1f)) {
    if ((local_a8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_a8);
    }
    else {
      FUN_143592150();
    }
  }
  if (9 < ((byte)local_48[0] & 0x1f)) {
    if ((local_48[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_48);
    }
    else {
      FUN_143592150();
    }
  }
  if (9 < ((byte)local_88[0] & 0x1f)) {
    if ((local_88[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_88);
    }
    else {
      FUN_143592150();
    }
  }
  if (9 < ((byte)local_68[0] & 0x1f)) {
    if ((local_68[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_68);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 14357e680 FUN_14357e680 body=612 status=ok
// SIG undefined FUN_14357e680(void)

void FUN_14357e680(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined4 local_res8 [2];
  ulonglong local_res20;
  undefined4 *puVar7;
  uint local_c8 [2];
  undefined8 local_c0;
  uint local_a8 [2];
  undefined8 local_a0;
  uint local_88 [2];
  longlong local_80;
  uint local_68 [8];
  uint local_48 [8];
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  if (*(char *)(*(longlong *)(lVar3 + 0x50) + 0x28) == '\0') {
    uVar5 = FUN_1435c8e40(local_88,0x3e9,lVar3);
    FUN_1435cbeb0(lVar3,uVar5);
    piVar1 = (int *)(local_80 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    if (*(int *)(param_1 + 0x48) < 0) {
      uVar4 = FUN_14357d080(param_1,"getDescendants");
      *(undefined4 *)(param_1 + 0x48) = uVar4;
    }
    iVar2 = *(int *)(param_1 + 0x48);
    uVar5 = FUN_1434ef190(*(undefined8 *)(param_1 + 0x28));
    FUN_1435d7ec0(uVar5,local_68,(longlong)iVar2);
    local_a8[0] = 0;
    local_a0 = 0;
    local_c8[0] = 0;
    local_c0 = 0;
    pcVar6 = (char *)FUN_14357cf20(param_1,local_res8,param_3,local_c8);
    if (*pcVar6 != '\0') {
      local_res8[0] = 1;
      uVar5 = FUN_143590110(local_48,param_1);
      puVar7 = local_res8;
      local_88[0] = 0;
      local_80 = 0;
      FUN_1435ce880(lVar3,local_68,uVar5,local_88,puVar7,local_c8,0,1);
      uVar4 = (undefined4)((ulonglong)puVar7 >> 0x20);
      FUN_1435904e0(local_88,local_a8);
      if (9 < ((byte)local_88[0] & 0x1f)) {
        if ((local_88[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_88);
        }
        else {
          FUN_143592150();
        }
      }
      if (9 < ((byte)local_48[0] & 0x1f)) {
        if ((local_48[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_48);
        }
        else {
          FUN_143592150();
        }
      }
      if (*(char *)(lVar3 + 0xb8) == '\0') {
        local_res20 = 0;
        FUN_1435ccdc0(lVar3,local_res8,&local_res20,"XMLList",CONCAT44(uVar4,1),local_a8);
        if ((char)local_res8[0] != '\0') {
          FUN_1434d74b0(param_2,local_res20);
        }
        if (local_res20 != 0) {
          if ((local_res20 & 1) == 0) {
            if ((*(uint *)(local_res20 + 8) & 0x3fffff) != 0) {
              *(uint *)(local_res20 + 8) = *(uint *)(local_res20 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            local_res20 = local_res20 - 1;
          }
        }
      }
    }
    if (9 < ((byte)local_c8[0] & 0x1f)) {
      if ((local_c8[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_c8);
      }
      else {
        FUN_143592150();
      }
    }
    if (9 < ((byte)local_a8[0] & 0x1f)) {
      if ((local_a8[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_a8);
      }
      else {
        FUN_143592150();
      }
    }
    if (9 < ((byte)local_68[0] & 0x1f)) {
      if ((local_68[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_68);
      }
      else {
        FUN_143592150();
      }
    }
  }
  return;
}



// FUNCTION 14357e8f0 FUN_14357e8f0 body=68 status=ok
// SIG undefined FUN_14357e8f0(void)

void FUN_14357e8f0(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar3 = FUN_1435c8e40(local_18,0x82a,uVar2);
  FUN_1435cbdb0(uVar2,uVar3);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14357e940 FUN_14357e940 body=68 status=ok
// SIG undefined FUN_14357e940(void)

void FUN_14357e940(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar3 = FUN_1435c8e40(local_18,0x82c,uVar2);
  FUN_1435cbdb0(uVar2,uVar3);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14357e990 FUN_14357e990 body=68 status=ok
// SIG undefined FUN_14357e990(void)

void FUN_14357e990(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar3 = FUN_1435c8e40(local_18,0x82d,uVar2);
  FUN_1435cbdb0(uVar2,uVar3);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14357e9e0 FUN_14357e9e0 body=68 status=ok
// SIG undefined FUN_14357e9e0(void)

void FUN_14357e9e0(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar3 = FUN_1435c8e40(local_18,0x828,uVar2);
  FUN_1435cbdb0(uVar2,uVar3);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14357ea30 FUN_14357ea30 body=68 status=ok
// SIG undefined FUN_14357ea30(void)

void FUN_14357ea30(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar3 = FUN_1435c8e40(local_18,0x82b,uVar2);
  FUN_1435cbdb0(uVar2,uVar3);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14357eab0 FUN_14357eab0 body=68 status=ok
// SIG undefined FUN_14357eab0(void)

void FUN_14357eab0(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar3 = FUN_1435c8e40(local_18,0x83a,uVar2);
  FUN_1435cbdb0(uVar2,uVar3);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14357eb00 FUN_14357eb00 body=68 status=ok
// SIG undefined FUN_14357eb00(void)

void FUN_14357eb00(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar3 = FUN_1435c8e40(local_18,0x839,uVar2);
  FUN_1435cbdb0(uVar2,uVar3);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14357eb50 FUN_14357eb50 body=68 status=ok
// SIG undefined FUN_14357eb50(void)

void FUN_14357eb50(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar3 = FUN_1435c8e40(local_18,0x83b,uVar2);
  FUN_1435cbdb0(uVar2,uVar3);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14357eba0 FUN_14357eba0 body=68 status=ok
// SIG undefined FUN_14357eba0(void)

void FUN_14357eba0(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar3 = FUN_1435c8e40(local_18,0x829,uVar2);
  FUN_1435cbdb0(uVar2,uVar3);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14357ebf0 FUN_14357ebf0 body=43 status=ok
// SIG undefined FUN_14357ebf0(void)

undefined8 * FUN_14357ebf0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *(undefined4 *)(param_1 + 0x12) = 0x16;
  *param_1 = &PTR_FUN_145b43af0;
  return param_1;
}



// FUNCTION 14357ec30 FUN_14357ec30 body=213 status=ok
// SIG undefined FUN_14357ec30(void)

void FUN_14357ec30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    UInterpTrackInst::UInterpTrackInst(puVar1,param_3);
    puVar1[8] = 0xffffffffffffffff;
    *puVar1 = &PTR_FUN_145b43a30;
    puVar1[9] = 0xffffffffffffffff;
    puVar1[10] = 0xffffffffffffffff;
    puVar1[0xb] = 0xffffffffffffffff;
    puVar1[0xc] = 0xffffffffffffffff;
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar1);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 14357ed10 FUN_14357ed10 body=43 status=ok
// SIG undefined FUN_14357ed10(void)

undefined8 * FUN_14357ed10(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *(undefined4 *)(param_1 + 0x12) = 0x16;
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14357ed50 FUN_14357ed50 body=234 status=ok
// SIG undefined FUN_14357ed50(void)

undefined8 * FUN_14357ed50(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b427e0);
    *(undefined4 *)(puVar2 + 0x12) = 0x16;
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b427e0);
    *(undefined4 *)(puVar2 + 0x12) = 0x16;
    *puVar2 = &PTR_FUN_145b43af0;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14357ee40 FUN_14357ee40 body=56 status=ok
// SIG undefined FUN_14357ee40(void)

undefined8 * FUN_14357ee40(undefined8 *param_1)

{
  FUN_143519560();
  *param_1 = &PTR_FUN_145b43bc0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  return param_1;
}



// FUNCTION 14357ee80 FUN_14357ee80 body=199 status=ok
// SIG undefined FUN_14357ee80(void)

undefined8 * FUN_14357ee80(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  uint *puVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 local_68 [32];
  undefined4 local_48;
  undefined8 local_40;
  undefined1 local_38;
  uint local_28 [4];
  undefined1 local_18;
  
  lVar2 = *(longlong *)(param_1 + 0x40);
  *param_2 = 0;
  Scaleform::GFx::AS3::Value::Value(local_68,param_3);
  local_40 = 0;
  local_38 = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_18 = 0;
  lVar4 = 3;
  local_48 = 1;
  local_28[0] = 1;
  FUN_1435e8720(lVar2,param_2,*(undefined8 *)(lVar2 + 0x388),3,local_68);
  puVar3 = &stack0xfffffffffffffff8;
  do {
    puVar1 = (uint *)(puVar3 + -0x20);
    puVar3 = puVar3 + -0x20;
    lVar4 = lVar4 + -1;
    if (9 < ((byte)*puVar1 & 0x1f)) {
      if ((*puVar1 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar3);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar4 != 0);
  return param_2;
}



// FUNCTION 14357ef50 FUN_14357ef50 body=245 status=ok
// SIG undefined FUN_14357ef50(void)

void FUN_14357ef50(longlong param_1)

{
  longlong lVar1;
  ulonglong local_res8;
  ulonglong local_res10;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0x68);
  FUN_14357ee80(param_1,&local_res10,*(longlong *)(lVar1 + 0x300) + 0x2c8);
  FUN_1434f0700(local_res10 + 0x50,param_1);
  FUN_14351af40(param_1,local_res10,0);
  if (*(int *)(param_1 + 0x80) <= *(int *)(param_1 + 0x84)) {
    FUN_14357ee80(param_1,&local_res8,*(longlong *)(lVar1 + 0x300) + 0x2d0);
    FUN_1434f0700(local_res8 + 0x50,param_1);
    FUN_14351af40(param_1,local_res8,0);
    if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
       ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
      FUN_1434ef880();
    }
  }
  if (((local_res10 != 0) && ((local_res10 & 1) == 0)) &&
     ((*(uint *)(local_res10 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res10 + 8) = *(uint *)(local_res10 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 14357f050 FUN_14357f050 body=155 status=ok
// SIG undefined FUN_14357f050(void)

void FUN_14357f050(longlong param_1,uint param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res10 [8];
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_2 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    uVar3 = FUN_1435c8e40(local_18,0x427,uVar2);
    FUN_1435cbef0(uVar2,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    FUN_143590af0(param_3,local_res10,param_1 + 0x88);
    if (1 < param_2) {
      FUN_143590b70(param_3 + 0x20,local_res10,param_1 + 0x80);
    }
  }
  return;
}



// FUNCTION 14357f180 runningGet body=49 status=ok
// SIG undefined runningGet(void)

void Scaleform::GFx::AS3::Instances::fl_utils::Timer::runningGet
               (longlong param_1,undefined1 *param_2)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0x90) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x18))();
    if (cVar1 != '\0') {
      *param_2 = 1;
      return;
    }
  }
  *param_2 = 0;
  return;
}



// FUNCTION 14357f1c0 reset body=30 status=ok
// SIG undefined reset(void)

void Scaleform::GFx::AS3::Instances::fl_utils::Timer::reset(longlong param_1)

{
  FUN_14357f2e0();
  *(undefined4 *)(param_1 + 0x84) = 0;
  return;
}



// FUNCTION 14357f1f0 FUN_14357f1f0 body=231 status=ok
// SIG undefined FUN_14357f1f0(void)

void FUN_14357f1f0(longlong param_1)

{
  undefined8 uVar1;
  RefCountImpl *this;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0;
  uVar1 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x300) + 0x10);
  if (*(longlong **)(param_1 + 0x90) != (longlong *)0x0) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x18))();
    if (cVar3 != '\0') {
      return;
    }
    this = *(RefCountImpl **)(param_1 + 0x90);
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(this + 0x68);
    if (this != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(this);
    }
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x48);
  lVar4 = (**(code **)(*plVar2 + 0x50))(plVar2,0x88,0);
  if (lVar4 != 0) {
    uVar5 = FUN_1435fd370(lVar4,param_1,(longlong)*(double *)(param_1 + 0x88),
                          *(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x80));
  }
  if (*(RefCountImpl **)(param_1 + 0x90) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x90));
  }
  *(undefined8 *)(param_1 + 0x90) = uVar5;
  FUN_1432e6fd0(uVar1,uVar5);
  (**(code **)(**(longlong **)(param_1 + 0x90) + 8))(*(longlong **)(param_1 + 0x90),uVar1);
  return;
}



// FUNCTION 14357f2e0 FUN_14357f2e0 body=113 status=ok
// SIG undefined FUN_14357f2e0(void)

void FUN_14357f2e0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  
  if (*(longlong **)(param_1 + 0x90) != (longlong *)0x0) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x18))();
    if (cVar2 != '\0') {
      uVar1 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x300) + 0x10);
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x40))();
      FUN_1432e7070(uVar1,uVar3);
    }
  }
  if (*(RefCountImpl **)(param_1 + 0x90) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x90));
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  return;
}



// FUNCTION 14357f360 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b43c90;
  return param_1;
}



// FUNCTION 14357f390 FUN_14357f390 body=189 status=ok
// SIG undefined FUN_14357f390(void)

void FUN_14357f390(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_143519560(puVar1,param_3);
    *puVar1 = &PTR_FUN_145b43bc0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
  }
  local_20 = 0;
  local_28[0] = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar1);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 14357f460 FUN_14357f460 body=33 status=ok
// SIG undefined FUN_14357f460(void)

undefined8 * FUN_14357f460(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14357f490 FUN_14357f490 body=214 status=ok
// SIG undefined FUN_14357f490(void)

undefined8 * FUN_14357f490(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b42840);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar2,param_2,&PTR_DAT_145b42840);
    *puVar2 = &PTR_FUN_145b43c90;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14357f610 FUN_14357f610 body=145 status=ok
// SIG undefined FUN_14357f610(void)

void FUN_14357f610(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b79d10)((longlong)DAT_146b79d18 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14357f710 FUN_14357f710 body=112 status=ok
// SIG undefined FUN_14357f710(void)

void FUN_14357f710(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b79d20)(DAT_146b79d28 + lVar2,local_18);
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



// FUNCTION 14357f780 FUN_14357f780 body=209 status=ok
// SIG undefined FUN_14357f780(void)

void FUN_14357f780(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18;
  longlong local_10 [2];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18 = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18 = *(longlong *)(param_6 + 4);
    *(int *)(local_18 + 0x18) = *(int *)(local_18 + 0x18) + 1;
  }
  if ((((byte)param_6[8] & 0x1f) == 0xc) && (*(longlong *)(param_6 + 0xc) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_10[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_10[0] = *(longlong *)(param_6 + 0xc);
    *(int *)(local_10[0] + 0x18) = *(int *)(local_10[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79f40)(DAT_146b79f48 + lVar2,param_4,&local_18,local_10,param_2);
  }
  piVar1 = (int *)(local_10[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_18 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14357f860 FUN_14357f860 body=145 status=ok
// SIG undefined FUN_14357f860(void)

void FUN_14357f860(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b79fc0)((longlong)DAT_146b79fc8 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14357f900 FUN_14357f900 body=132 status=ok
// SIG undefined FUN_14357f900(void)

void FUN_14357f900(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79d30)(DAT_146b79d38 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14357f9c0 FUN_14357f9c0 body=266 status=ok
// SIG undefined FUN_14357f9c0(void)

void FUN_14357f9c0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong local_18;
  longlong local_10;
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  local_18 = 0;
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_10 = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_10 = *(longlong *)(param_6 + 4);
    *(int *)(local_10 + 0x18) = *(int *)(local_10 + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79fd0)(DAT_146b79fd8 + lVar2,&local_18,&local_10);
  }
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  uVar4 = local_18;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18 != 0) {
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18);
    if (((uVar4 != 0) && ((uVar4 & 1) == 0)) && ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
      FUN_1434ef880(uVar4);
    }
  }
  if (((local_18 != 0) && ((local_18 & 1) == 0)) && ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 14357fad0 FUN_14357fad0 body=145 status=ok
// SIG undefined FUN_14357fad0(void)

void FUN_14357fad0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b79d40)((longlong)DAT_146b79d48 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14357fc00 FUN_14357fc00 body=145 status=ok
// SIG undefined FUN_14357fc00(void)

void FUN_14357fc00(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b79d60)((longlong)DAT_146b79d68 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14357fca0 FUN_14357fca0 body=132 status=ok
// SIG undefined FUN_14357fca0(void)

void FUN_14357fca0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79f80)(DAT_146b79f88 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14357fd90 FUN_14357fd90 body=145 status=ok
// SIG undefined FUN_14357fd90(void)

void FUN_14357fd90(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b79d80)((longlong)DAT_146b79d88 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14357fe30 FUN_14357fe30 body=132 status=ok
// SIG undefined FUN_14357fe30(void)

void FUN_14357fe30(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79fa0)(DAT_146b79fa8 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14357ff30 FUN_14357ff30 body=144 status=ok
// SIG undefined FUN_14357ff30(void)

void FUN_14357ff30(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b79de0)((longlong)DAT_146b79de8 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14357ffc0 FUN_14357ffc0 body=145 status=ok
// SIG undefined FUN_14357ffc0(void)

void FUN_14357ffc0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b79df0)((longlong)DAT_146b79df8 + *(longlong *)(param_3 + 0x10),local_18);
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
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 1435800a0 FUN_1435800a0 body=148 status=ok
// SIG undefined FUN_1435800a0(void)

void FUN_1435800a0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b79e10)(DAT_146b79e18 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 143580140 FUN_143580140 body=148 status=ok
// SIG undefined FUN_143580140(void)

void FUN_143580140(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b79e20)(DAT_146b79e28 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 1435801e0 FUN_1435801e0 body=145 status=ok
// SIG undefined FUN_1435801e0(void)

void FUN_1435801e0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b79e30)((longlong)DAT_146b79e38 + *(longlong *)(param_3 + 0x10),local_18);
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
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143580280 FUN_143580280 body=216 status=ok
// SIG undefined FUN_143580280(void)

void FUN_143580280(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_28;
  undefined4 local_20;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_28 = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  local_20 = *(undefined4 *)(param_6 + 0x10);
  if ((((byte)*(undefined4 *)(param_6 + 0x20) & 0x1f) == 0xc) &&
     (*(longlong *)(param_6 + 0x30) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 0x30);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79e40)(DAT_146b79e48 + lVar2,&local_28,local_20,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,&local_28);
  }
  piVar1 = (int *)(local_28 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143580360 FUN_143580360 body=145 status=ok
// SIG undefined FUN_143580360(void)

void FUN_143580360(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b7a080)((longlong)DAT_146b7a088 + *(longlong *)(param_3 + 0x10),local_18);
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
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143580420 FUN_143580420 body=148 status=ok
// SIG undefined FUN_143580420(void)

void FUN_143580420(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b7a090)(DAT_146b7a098 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 1435804c0 FUN_1435804c0 body=145 status=ok
// SIG undefined FUN_1435804c0(void)

void FUN_1435804c0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b79e60)((longlong)DAT_146b79e68 + *(longlong *)(param_3 + 0x10),local_18);
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
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143580590 FUN_143580590 body=145 status=ok
// SIG undefined FUN_143580590(void)

void FUN_143580590(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b79e70)((longlong)DAT_146b79e78 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143580630 FUN_143580630 body=145 status=ok
// SIG undefined FUN_143580630(void)

void FUN_143580630(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b7a0b0)((longlong)DAT_146b7a0b8 + *(longlong *)(param_3 + 0x10),local_18);
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
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 1435806d0 FUN_1435806d0 body=145 status=ok
// SIG undefined FUN_1435806d0(void)

void FUN_1435806d0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b79e80)((longlong)DAT_146b79e88 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143580770 FUN_143580770 body=145 status=ok
// SIG undefined FUN_143580770(void)

void FUN_143580770(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b79e90)((longlong)DAT_146b79e98 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143580840 FUN_143580840 body=112 status=ok
// SIG undefined FUN_143580840(void)

void FUN_143580840(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b79ea0)(DAT_146b79ea8 + lVar2,local_18);
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



// FUNCTION 1435808b0 FUN_1435808b0 body=144 status=ok
// SIG undefined FUN_1435808b0(void)

void FUN_1435808b0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b7a0d0)((longlong)DAT_146b7a0d8 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143580980 FUN_143580980 body=135 status=ok
// SIG undefined FUN_143580980(void)

void FUN_143580980(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18;
  undefined4 local_10;
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18 = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  local_10 = *(undefined4 *)(param_6 + 0x10);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79eb0)(DAT_146b79eb8 + lVar2,&local_18);
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,&local_18);
  }
  piVar1 = (int *)(local_18 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143580a30 FUN_143580a30 body=112 status=ok
// SIG undefined FUN_143580a30(void)

void FUN_143580a30(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b79ec0)(DAT_146b79ec8 + lVar2,local_18);
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



// FUNCTION 143580ae0 FUN_143580ae0 body=158 status=ok
// SIG undefined FUN_143580ae0(void)

ulonglong * FUN_143580ae0(ulonglong *param_1,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = (longlong)param_1 + (ulonglong)(param_3 + 0x40 >> 6) * 8 + 0x37 & 0xfffffffffffffff8;
  *param_1 = uVar3;
  *(uint *)(param_1 + 1) = param_3;
  uVar3 = (ulonglong)param_3 * 8 + 0x1f + uVar3 & 0xffffffffffffffe0;
  param_1[2] = uVar3;
  uVar3 = (ulonglong)param_3 * 0x20 + uVar3;
  param_1[3] = uVar3;
  *(uint *)(param_1 + 4) = param_2 - 1;
  param_1[5] = uVar3 + (ulonglong)(uint)param_1[1] * 0x20;
  if (param_2 != 0) {
    lVar2 = 0;
    uVar3 = (ulonglong)param_2;
    do {
      puVar1 = (undefined8 *)(param_1[5] + lVar2);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = 0xffffffffffffffff;
        puVar1[1] = 0xffffffffffffffff;
      }
      lVar2 = lVar2 + 0x10;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 143580b80 FUN_143580b80 body=137 status=ok
// SIG undefined FUN_143580b80(void)

undefined1 * FUN_143580b80(longlong param_1,undefined1 *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (*param_3 << 0x15) >> 0x1b;
  if ((9 < iVar2) && (iVar2 != 0xe)) {
    *param_2 = 1;
    return param_2;
  }
  cVar1 = Scaleform::GFx::AS3::SlotInfo::IsConst(param_3);
  if (cVar1 == '\0') {
    cVar1 = FUN_1434b29c0(*(undefined8 *)(param_3 + 2));
    *param_2 = 1;
    if (cVar1 != '\0') {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      return param_2;
    }
  }
  else {
    *param_2 = 1;
  }
  return param_2;
}



// FUNCTION 143580c10 FUN_143580c10 body=157 status=ok
// SIG undefined FUN_143580c10(void)

longlong FUN_143580c10(longlong param_1,ulonglong param_2)

{
  FUN_1434e5ef0(param_1 + 0x1d0);
  FUN_1434e5ef0(param_1 + 0x1b0);
  FUN_143561f20(param_1 + 0x188);
  FUN_143562190(param_1 + 0x88);
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x50));
  FUN_1435b9dc0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x1f0);
  }
  return param_1;
}



// FUNCTION 143580cb0 FUN_143580cb0 body=111 status=ok
// SIG undefined FUN_143580cb0(void)

undefined8 * FUN_143580cb0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_ForEachChild_GC_145b43808;
  FUN_1435810e0(param_1 + 9);
  FUN_1435b9dc0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 143580d20 FUN_143580d20 body=89 status=ok
// SIG undefined FUN_143580d20(void)

undefined8 FUN_143580d20(undefined8 param_1,ulonglong param_2)

{
  FUN_1435b9dc0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 143580d80 FUN_143580d80 body=109 status=ok
// SIG undefined FUN_143580d80(void)

longlong FUN_143580d80(longlong param_1,uint param_2)

{
  if (*(RefCountImpl **)(param_1 + 0x90) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x90));
  }
  FUN_1435196e0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 143580df0 FUN_143580df0 body=240 status=ok
// SIG undefined FUN_143580df0(void)

void FUN_143580df0(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong local_res8;
  
  FUN_143580ee0(param_1,&local_res8,param_2,param_3,param_4);
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x30);
  lVar1 = *(longlong *)(param_1 + 0x38);
  param_4 = uVar3 & param_4;
  plVar5 = (longlong *)(param_4 * 0x10 + lVar1);
  uVar2 = param_4;
  if (*plVar5 != -1) {
    do {
      uVar2 = uVar2 + 1 & uVar3;
    } while (*(longlong *)(lVar1 + uVar2 * 0x10) != -1);
    uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + *plVar5 * 8) & uVar3;
    plVar6 = (longlong *)(uVar2 * 0x10 + lVar1);
    if (param_4 == uVar3) {
      *plVar6 = local_res8;
      plVar6[1] = plVar5[1];
      plVar5[1] = uVar2;
      return;
    }
    lVar4 = uVar3 * 0x10 + lVar1;
    uVar3 = *(ulonglong *)(lVar4 + 8);
    while (uVar3 != param_4) {
      lVar4 = *(longlong *)(lVar4 + 8) * 0x10 + lVar1;
      uVar3 = *(ulonglong *)(lVar4 + 8);
    }
    if (plVar6 != (longlong *)0x0) {
      lVar1 = plVar5[1];
      *plVar6 = *plVar5;
      plVar6[1] = lVar1;
    }
    *(ulonglong *)(lVar4 + 8) = uVar2;
  }
  *plVar5 = local_res8;
  plVar5[1] = -1;
  return;
}



// FUNCTION 143580ee0 FUN_143580ee0 body=309 status=ok
// SIG undefined FUN_143580ee0(void)

ulonglong *
FUN_143580ee0(longlong param_1,ulonglong *param_2,uint *param_3,uint *param_4,undefined8 param_5)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar6;
  ulonglong local_res8;
  longlong local_28;
  longlong local_20;
  
  uVar5 = (ulonglong)*(uint *)(param_1 + 0xc);
  lVar1 = param_1 + 0x40;
  local_20 = ((*(longlong *)(param_1 + 0x10) - param_1) + -0x40 >> 3) << 6;
  local_res8 = uVar5;
  local_28 = lVar1;
  FUN_1435818e0(&local_28,&local_res8,uVar5 + 1);
  *param_2 = uVar5;
  *(undefined4 *)(param_1 + 0xc) = (undefined4)local_res8;
  puVar6 = (uint *)(uVar5 * 0x20 + *(longlong *)(param_1 + 0x20));
  if (puVar6 != (uint *)0x0) {
    *puVar6 = *param_3;
    *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(param_3 + 2);
    uVar2 = param_3[5];
    uVar3 = param_3[6];
    uVar4 = param_3[7];
    puVar6[4] = param_3[4];
    puVar6[5] = uVar2;
    puVar6[6] = uVar3;
    puVar6[7] = uVar4;
    if (9 < ((byte)*param_3 & 0x1f)) {
      if ((*param_3 >> 9 & 1) == 0) {
        FUN_143592070(param_3);
      }
      else {
        FUN_143592140();
      }
    }
  }
  puVar6 = (uint *)(*param_2 * 0x20 + *(longlong *)(param_1 + 0x28));
  if (puVar6 != (uint *)0x0) {
    *puVar6 = *param_4;
    *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(param_4 + 2);
    uVar2 = param_4[5];
    uVar3 = param_4[6];
    uVar4 = param_4[7];
    puVar6[4] = param_4[4];
    puVar6[5] = uVar2;
    puVar6[6] = uVar3;
    puVar6[7] = uVar4;
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_143592070(param_4);
      }
      else {
        FUN_143592140();
      }
    }
  }
  uVar5 = *param_2;
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + uVar5 * 8) = param_5;
  *(ulonglong *)(lVar1 + (uVar5 >> 6) * 8) =
       *(ulonglong *)(lVar1 + (uVar5 >> 6) * 8) | 1L << ((uint)uVar5 & 0x3f);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return param_2;
}



// FUNCTION 143581020 FUN_143581020 body=191 status=ok
// SIG undefined FUN_143581020(void)

ulonglong FUN_143581020(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x40);
  uVar3 = (ulonglong)param_2;
  lVar1 = (ulonglong)(param_2 + 0x40 >> 6) * 8;
  uVar4 = ((ulonglong)param_3 * 0x10 - lVar2) +
          uVar3 * 0x40 +
          ((lVar2 + 0x47U & 0xfffffffffffffff8) + lVar1 + 0x1f + uVar3 * 8 & 0xffffffffffffffe0);
  uVar3 = uVar3 * 0x40 +
          (uVar3 * 8 + 0x1f + (lVar2 * 2 + 0x47U & 0xfffffffffffffff8) + lVar1 & 0xffffffffffffffe0)
          + lVar2 * -2 + (ulonglong)param_3 * 0x10;
  if (uVar3 < uVar4) {
    uVar3 = uVar4;
  }
  return uVar3;
}



// FUNCTION 1435810e0 FUN_1435810e0 body=119 status=ok
// SIG undefined FUN_1435810e0(void)

void FUN_1435810e0(undefined8 *param_1)

{
  undefined *puVar1;
  code *local_18;
  undefined4 uStack_10;
  
  puVar1 = (undefined *)*param_1;
  if (puVar1 != &DAT_1467d8c70) {
    local_18 = FUN_143581160;
    uStack_10 = 0;
    FUN_143581310(puVar1,&local_18);
    *(undefined4 *)(puVar1 + 8) = 0;
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = &DAT_1467d8c70;
  }
  return;
}



// FUNCTION 143581160 FUN_143581160 body=178 status=ok
// SIG undefined FUN_143581160(void)

void FUN_143581160(longlong param_1,ulonglong param_2,longlong *param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 * 0x20 + *(longlong *)(param_1 + 0x20));
  if (9 < ((byte)uVar1 & 0x1f)) {
    if ((uVar1 >> 9 & 1) == 0) {
      FUN_1435920c0();
    }
    else {
      FUN_143592150();
    }
  }
  uVar1 = *(uint *)(param_2 * 0x20 + *(longlong *)(param_1 + 0x28));
  if (9 < ((byte)uVar1 & 0x1f)) {
    if ((uVar1 >> 9 & 1) == 0) {
      FUN_1435920c0();
    }
    else {
      FUN_143592150();
    }
  }
  *(ulonglong *)(*param_3 + (param_2 >> 6) * 8) =
       *(ulonglong *)(*param_3 + (param_2 >> 6) * 8) & ~(1L << ((uint)param_2 & 0x3f));
  if (param_2 < *(uint *)(param_1 + 0xc)) {
    *(uint *)(param_1 + 0xc) = (uint)param_2;
  }
  return;
}



// FUNCTION 143581220 FUN_143581220 body=233 status=ok
// SIG undefined FUN_143581220(void)

longlong * FUN_143581220(longlong param_1,longlong *param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  if (*(int *)(param_1 + 8) == 0) {
    *param_2 = -1;
    return param_2;
  }
  uVar4 = *(uint *)(param_1 + 0x30) & param_4;
  plVar5 = (longlong *)(uVar4 * 0x10 + *(longlong *)(param_1 + 0x38));
  if (*plVar5 == -1) {
    *param_2 = -1;
  }
  else {
    plVar7 = (longlong *)0x0;
    while( true ) {
      plVar6 = plVar5;
      lVar1 = *plVar6;
      uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + lVar1 * 8);
      if ((plVar7 == (longlong *)0x0) && (uVar4 != (*(uint *)(param_1 + 0x30) & uVar2))) break;
      if ((uVar2 == param_4) &&
         (cVar3 = FUN_1435927d0(lVar1 * 0x20 + *(longlong *)(param_1 + 0x20),param_3), cVar3 != '\0'
         )) {
        *param_2 = lVar1;
        return param_2;
      }
      uVar4 = plVar6[1];
      if (uVar4 == 0xffffffffffffffff) break;
      plVar5 = (longlong *)(uVar4 * 0x10 + *(longlong *)(param_1 + 0x38));
      plVar7 = plVar6;
    }
    *param_2 = -1;
  }
  return param_2;
}



// FUNCTION 143581310 FUN_143581310 body=193 status=ok
// SIG undefined FUN_143581310(void)

void FUN_143581310(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong local_res8;
  longlong local_28;
  longlong local_20;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 != 0) {
    lVar5 = param_1 + 0x40;
    local_20 = ((*(longlong *)(param_1 + 0x10) - param_1) + -0x40 >> 3) << 6;
    uVar4 = 0;
    local_res8 = 0;
    local_28 = lVar5;
    cVar2 = FUN_1435817f0(&local_28,&local_res8);
    if ((cVar2 != '\0') && (uVar3 = local_res8, uVar1 != 0)) {
      do {
        if ((*(ulonglong *)(lVar5 + (uVar3 >> 6) * 8) >> ((byte)uVar3 & 0x3f) & 1) != 0) {
          uVar4 = uVar4 + 1;
          (*(code *)*param_2)(*(int *)(param_2 + 1) + param_1,uVar3,&local_28);
          lVar5 = local_28;
        }
        uVar3 = uVar3 + 1;
      } while (uVar4 < uVar1);
    }
  }
  return;
}



// FUNCTION 1435813e0 FUN_1435813e0 body=167 status=ok
// SIG undefined FUN_1435813e0(void)

void FUN_1435813e0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = param_6;
  local_18[0] = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79ff0)((longlong)DAT_146b79ff8 + *(longlong *)(param_3 + 0x10),local_18);
  }
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



// FUNCTION 1435814f0 FUN_1435814f0 body=167 status=ok
// SIG undefined FUN_1435814f0(void)

void FUN_1435814f0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = param_6;
  local_18[0] = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7a020)((longlong)DAT_146b7a028 + *(longlong *)(param_3 + 0x10),local_18);
  }
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



// FUNCTION 1435815a0 FUN_1435815a0 body=167 status=ok
// SIG undefined FUN_1435815a0(void)

void FUN_1435815a0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = param_6;
  local_18[0] = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7a030)((longlong)DAT_146b7a038 + *(longlong *)(param_3 + 0x10),local_18);
  }
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



// FUNCTION 143581650 FUN_143581650 body=135 status=ok
// SIG undefined FUN_143581650(void)

void FUN_143581650(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18;
  undefined4 local_10;
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18 = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  local_10 = *(undefined4 *)(param_6 + 0x10);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7a040)(DAT_146b7a048 + lVar2,&local_18);
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,&local_18);
  }
  piVar1 = (int *)(local_18 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435816e0 FUN_1435816e0 body=167 status=ok
// SIG undefined FUN_1435816e0(void)

void FUN_1435816e0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [2];
  undefined4 local_10;
  
  local_18[0] = 0;
  local_10 = *(undefined4 *)(param_6 + 0x10);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b7a050)((longlong)DAT_146b7a058 + *(longlong *)(param_3 + 0x10),local_18);
  }
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
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 1435817f0 FUN_1435817f0 body=237 status=ok
// SIG undefined FUN_1435817f0(void)

ulonglong FUN_1435817f0(undefined8 *param_1,longlong *param_2)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = 0;
  uVar3 = param_1[1] + 0x3f >> 6;
  if (uVar3 != 0) {
    puVar2 = (ulonglong *)*param_1;
    do {
      uVar4 = *puVar2;
      if (uVar4 != 0) {
        uVar4 = ~uVar4 + 1 & uVar4;
        *param_2 = ((ulonglong)
                    (-(uint)((uVar4 & 0xffffffff00000000) != 0) & 0x20 |
                     -(uint)((uVar4 & 0xffff0000ffff0000) != 0) & 0x10 |
                     -(uint)((uVar4 & 0xff00ff00ff00ff00) != 0) & 8 |
                     -(uint)((uVar4 & 0xf0f0f0f0f0f0f0f0) != 0) & 4 |
                    -(uint)((uVar4 & 0xcccccccccccccccc) != 0) & 2) |
                   (ulonglong)((uVar4 & 0xaaaaaaaaaaaaaaaa) != 0)) + uVar1 * 0x40;
        return CONCAT71((int7)(uVar1 * 0x40 >> 8),1);
      }
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar1 < uVar3);
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1435818e0 FUN_1435818e0 body=293 status=ok
// SIG undefined FUN_1435818e0(void)

ulonglong FUN_1435818e0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  
  uVar1 = param_3 >> 6;
  puVar3 = (ulonglong *)(*param_1 + uVar1 * 8);
  uVar2 = (1L << ((byte)param_3 & 0x3f)) - 1U | *puVar3;
  while( true ) {
    if (param_1[1] + 0x3fU >> 6 <= uVar1) {
      return uVar1 & 0xffffffffffffff00;
    }
    if (uVar2 != 0xffffffffffffffff) break;
    uVar2 = puVar3[1];
    puVar3 = puVar3 + 1;
    uVar1 = uVar1 + 1;
  }
  uVar2 = ~uVar2 & uVar2 + 1;
  *param_2 = ((ulonglong)
              (-(uint)((uVar2 & 0xffffffff00000000) != 0) & 0x20 |
               -(uint)((uVar2 & 0xffff0000ffff0000) != 0) & 0x10 |
               -(uint)((uVar2 & 0xff00ff00ff00ff00) != 0) & 8 |
               -(uint)((uVar2 & 0xf0f0f0f0f0f0f0f0) != 0) & 4 |
              -(uint)((uVar2 & 0xcccccccccccccccc) != 0) & 2) |
             (ulonglong)((uVar2 & 0xaaaaaaaaaaaaaaaa) != 0)) + uVar1 * 0x40;
  return CONCAT71((int7)(uVar1 * 0x40 >> 8),1);
}



// FUNCTION 143581a20 FUN_143581a20 body=326 status=ok
// SIG undefined FUN_143581a20(void)

ulonglong FUN_143581a20(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong local_28;
  longlong local_20;
  
  if (*(int *)(param_1 + 8) == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar4 = *(uint *)(param_1 + 0x30) & param_3;
  plVar6 = (longlong *)(uVar4 * 0x10 + *(longlong *)(param_1 + 0x38));
  if (*plVar6 == -1) {
    return uVar4 & 0xffffffffffffff00;
  }
  plVar5 = (longlong *)0x0;
  while( true ) {
    lVar1 = *plVar6;
    uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + lVar1 * 8);
    if ((plVar5 == (longlong *)0x0) && (uVar4 != (*(uint *)(param_1 + 0x30) & uVar2))) break;
    if ((uVar2 == param_3) &&
       (cVar3 = FUN_1435927d0(lVar1 * 0x20 + *(longlong *)(param_1 + 0x20),param_2), cVar3 != '\0'))
    {
      local_28 = param_1 + 0x40;
      local_20 = ((*(longlong *)(param_1 + 0x10) - param_1) + -0x40 >> 3) << 6;
      FUN_143581160(param_1,lVar1,&local_28);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
      lVar1 = plVar6[1];
      if (plVar5 == (longlong *)0x0) {
        if (lVar1 != -1) {
          plVar5 = (longlong *)(lVar1 * 0x10 + *(longlong *)(param_1 + 0x38));
          lVar1 = plVar5[1];
          *plVar6 = *plVar5;
          plVar6[1] = lVar1;
          plVar6 = plVar5;
        }
      }
      else {
        plVar5[1] = lVar1;
      }
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = -1;
        plVar6[1] = -1;
      }
      return CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
    }
    uVar4 = plVar6[1];
    if (uVar4 == 0xffffffffffffffff) break;
    plVar5 = plVar6;
    plVar6 = (longlong *)(uVar4 * 0x10 + *(longlong *)(param_1 + 0x38));
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 143581b70 FUN_143581b70 body=725 status=ok
// SIG undefined FUN_143581b70(void)

void FUN_143581b70(longlong *param_1,uint param_2,longlong *param_3)

{
  undefined *puVar1;
  size_t _Size;
  undefined8 *_Dst;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  code *pcVar10;
  uint *puVar11;
  uint *puVar12;
  code *local_38;
  undefined4 uStack_30;
  
  if (param_2 == 0) {
    FUN_1435810e0();
    return;
  }
  if (param_2 < 8) {
    iVar8 = 8;
  }
  else {
    uVar6 = param_2 - 1 | param_2 - 1 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    iVar8 = (uVar6 >> 0x10 | uVar6) + 1;
  }
  uVar6 = (uint)(iVar8 * 4) / 5;
  if ((undefined8 *)*param_1 == (undefined8 *)&DAT_1467d8c70) {
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
  _Size = FUN_143581020(param_3,uVar6,iVar8);
  _Dst = (undefined8 *)(**(code **)(*param_3 + 0x50))(param_3,_Size,0);
  _guard_xfg_dispatch_icall_nop(_Dst,0,_Size);
  uVar5 = 0;
  if (_Dst != (undefined8 *)0x0) {
    *_Dst = param_3;
    _Dst[1] = 0;
    FUN_143580ae0(_Dst + 2,iVar8,uVar6);
  }
  pcVar10 = (code *)*param_1;
  if (pcVar10 != (code *)&DAT_1467d8c70) {
    uVar7 = (*(longlong *)(pcVar10 + 0x10) - (longlong)pcVar10) + -0x40 >> 3;
    uVar9 = *(ulonglong *)(pcVar10 + 0x40);
    while (local_38 = pcVar10, uVar9 == 0) {
      uVar5 = uVar5 + 1;
      if (uVar7 <= uVar5) goto LAB_143581db9;
      uVar9 = *(ulonglong *)(pcVar10 + uVar5 * 8 + 0x40);
    }
    uVar2 = FUN_143561b20(uVar9);
    if (uVar5 < uVar7) {
      while( true ) {
        lVar4 = uVar5 * 0x40 + uVar2;
        lVar3 = lVar4 * 0x20;
        puVar12 = (uint *)(*(longlong *)(pcVar10 + 0x20) + lVar3);
        puVar11 = (uint *)(*(longlong *)(pcVar10 + 0x28) + lVar3);
        FUN_143580df0(_Dst,puVar12,puVar11,
                      *(undefined8 *)(*(longlong *)(*param_1 + 0x10) + lVar4 * 8));
        if (9 < ((byte)*puVar12 & 0x1f)) {
          if ((*puVar12 >> 9 & 1) == 0) {
            FUN_1435920c0(puVar12);
          }
          else {
            FUN_143592150();
          }
        }
        if (9 < ((byte)*puVar11 & 0x1f)) {
          if ((*puVar11 >> 9 & 1) == 0) {
            FUN_1435920c0(puVar11);
          }
          else {
            FUN_143592150();
          }
        }
        pcVar10 = local_38;
        if (uVar7 <= uVar5) break;
        if (uVar2 < 0x3f) {
          uVar9 = uVar9 & ~(1L << (uVar2 & 0x3f));
        }
        else {
          uVar5 = uVar5 + 1;
          if (uVar7 <= uVar5) break;
          uVar9 = *(ulonglong *)(local_38 + uVar5 * 8 + 0x40);
        }
        while (uVar9 == 0) {
          uVar5 = uVar5 + 1;
          if (uVar7 <= uVar5) goto LAB_143581db9;
          uVar9 = *(ulonglong *)(local_38 + uVar5 * 8 + 0x40);
        }
        uVar2 = FUN_143561b20(uVar9);
        if (uVar7 <= uVar5) break;
      }
    }
LAB_143581db9:
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = (longlong)&DAT_1467d8c70;
  }
  puVar1 = (undefined *)*param_1;
  *param_1 = (longlong)_Dst;
  if (puVar1 != &DAT_1467d8c70) {
    local_38 = FUN_143581160;
    uStack_30 = 0;
    FUN_143581310(puVar1,&local_38);
    *(undefined4 *)(puVar1 + 8) = 0;
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar1);
  }
  return;
}



// FUNCTION 143581e50 FUN_143581e50 body=144 status=ok
// SIG undefined FUN_143581e50(void)

void FUN_143581e50(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b7a5d0)((longlong)DAT_146b7a5d8 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143581ee0 FUN_143581ee0 body=33 status=ok
// SIG undefined FUN_143581ee0(void)

undefined8 * FUN_143581ee0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143581f10 FUN_143581f10 body=256 status=ok
// SIG undefined FUN_143581f10(void)

undefined8 * FUN_143581f10(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b44e70);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b44e70);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x60);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *(undefined4 *)(puVar5 + 10) = 1;
    *puVar5 = &PTR_ForEachChild_GC_145b23ad8;
    *(undefined4 *)((longlong)puVar5 + 0x54) = 2;
    *(undefined4 *)(puVar5 + 0xb) = 4;
    *(undefined4 *)((longlong)puVar5 + 0x5c) = 8;
  }
  return param_1;
}



// FUNCTION 143582020 FUN_143582020 body=61 status=ok
// SIG undefined FUN_143582020(void)

undefined8 * FUN_143582020(undefined8 *param_1)

{
  FUN_1435b37d0();
  *(undefined4 *)(param_1 + 10) = 1;
  *param_1 = &PTR_ForEachChild_GC_145b23ad8;
  *(undefined4 *)((longlong)param_1 + 0x54) = 2;
  *(undefined4 *)(param_1 + 0xb) = 4;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 8;
  return param_1;
}



// FUNCTION 143582070 FUN_143582070 body=82 status=ok
// SIG undefined FUN_143582070(void)

void FUN_143582070(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)
            (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x300) + 0x10);
  (**(code **)(*plVar1 + 0x220))(plVar1,param_3);
  *(undefined1 *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x38) + 0xc) =
       param_3;
  return;
}



// FUNCTION 143582170 FUN_143582170 body=531 status=ok
// SIG undefined FUN_143582170(void)

void FUN_143582170(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong local_res8;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  uint local_40 [10];
  
  uVar5 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  uVar3 = FUN_1435cf280(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),&local_58);
  puVar4 = (ulonglong *)
           FUN_1435ca860(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),&local_res8);
  uVar2 = *puVar4;
  if (uVar3 != 0) {
    do {
      local_res8 = FUN_143360a60(*(undefined8 *)
                                  (*(longlong *)
                                    (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) +
                                  0x218),(*(ulonglong *)
                                           (*(longlong *)
                                             (*(longlong *)(local_58 + uVar5 * 8) + 0xa0) + 0x18) &
                                         0xfffffffffffffffc) + 0xc);
      *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
      Scaleform::GFx::AS3::Value::Value(local_40,&local_res8);
      piVar1 = (int *)(local_res8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      FUN_1434b49b0(uVar2 + 0x40,local_40);
      if (9 < ((byte)local_40[0] & 0x1f)) {
        if ((local_40[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_40);
        }
        else {
          FUN_143592150();
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  if (&local_res8 != param_2) {
    if (uVar2 != 0) {
      *(uint *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1U & 0x8fffffff;
    }
    uVar3 = *param_2;
    if (uVar3 != 0) {
      if ((uVar3 & 1) == 0) {
        if ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = uVar3 - 1;
      }
    }
    *param_2 = uVar2;
  }
  if (((uVar2 != 0) && ((uVar2 & 1) == 0)) && ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
    FUN_1434ef880(uVar2);
  }
  puVar4 = (ulonglong *)(local_58 + (local_50 + -1) * 8);
  for (lVar6 = local_50; lVar6 != 0; lVar6 = lVar6 + -1) {
    uVar2 = *puVar4;
    if (uVar2 != 0) {
      if ((uVar2 & 1) == 0) {
        if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *puVar4 = uVar2 - 1;
      }
    }
    puVar4 = puVar4 + -1;
  }
  if (local_58 != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  return;
}



// FUNCTION 143582390 FUN_143582390 body=84 status=ok
// SIG undefined FUN_143582390(void)

void FUN_143582390(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong local_res8;
  
  plVar3 = (longlong *)
           FUN_1435cae80(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),&local_res8);
  lVar2 = *plVar3;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar2;
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435823f0 FUN_1435823f0 body=109 status=ok
// SIG undefined FUN_1435823f0(void)

void FUN_1435823f0(longlong param_1,undefined8 param_2,char param_3,undefined4 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)
            (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x300) + 0x10);
  if (param_3 != '\0') {
    (**(code **)(*plVar1 + 0x188))(plVar1,2);
  }
  (**(code **)(*plVar1 + 0x1a0))(plVar1,param_4,0,*(undefined8 *)*param_5,0,0);
  return;
}



// FUNCTION 143582470 FUN_143582470 body=492 status=ok
// SIG undefined FUN_143582470(void)

void FUN_143582470(longlong param_1,ulonglong *param_2,longlong param_3)

{
  int *piVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  char *pcVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined1 local_res8 [8];
  longlong local_res10;
  
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar3 = FUN_1435cb320(lVar6);
  lVar4 = FUN_1435b5bc0(uVar3);
  uVar9 = 0;
  uVar5 = uVar9;
  if (lVar4 != 0) {
    uVar5 = FUN_143623eb0(lVar4,uVar3);
  }
  uVar2 = *param_2;
  if (uVar5 != uVar2) {
    if (uVar2 != 0) {
      if ((uVar2 & 1) == 0) {
        if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = uVar2 - 1;
      }
    }
    *param_2 = uVar5;
  }
  if (param_3 == 0) {
    lVar6 = *(longlong *)(lVar6 + 0x1c8);
  }
  else {
    lVar6 = *(longlong *)(param_3 + 0x40);
  }
  plVar10 = (longlong *)(lVar6 + 0x30);
  lVar6 = *(longlong *)(lVar6 + 0x30);
  if (lVar6 == 0) {
    plVar10 = (longlong *)0x0;
    uVar9 = 0;
  }
  else {
    plVar7 = (longlong *)(lVar6 + 0x10);
    do {
      if (*plVar7 != -2) break;
      uVar9 = uVar9 + 1;
      plVar7 = plVar7 + 5;
    } while (uVar9 <= *(ulonglong *)(lVar6 + 8));
  }
  do {
    do {
      if (((plVar10 == (longlong *)0x0) || (lVar6 = *plVar10, lVar6 == 0)) ||
         (*(longlong *)(lVar6 + 8) < (longlong)uVar9)) {
        return;
      }
      plVar7 = *(longlong **)(lVar6 + 0x30 + uVar9 * 0x28);
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x28))(plVar7,&local_res10,1);
      uVar5 = *param_2;
      lVar6 = *plVar7;
      if (lVar6 != 0) {
        *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1;
      }
      pcVar8 = (char *)FUN_14361f950(uVar5 + 0x40,local_res8);
      if (*pcVar8 != '\0') {
        FUN_143578f70(uVar5 + 0x58,*(undefined8 *)(uVar5 + 0x70),*(longlong *)(uVar5 + 0x60) + 1);
        plVar7 = (longlong *)(*(longlong *)(uVar5 + 0x58) + (*(longlong *)(uVar5 + 0x60) + -1) * 8);
        if (plVar7 != (longlong *)0x0) {
          if (lVar6 != 0) {
            *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1;
          }
          *plVar7 = lVar6;
        }
      }
      if (lVar6 != 0) {
        piVar1 = (int *)(lVar6 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920(lVar6);
        }
      }
      piVar1 = (int *)(local_res10 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      uVar5 = *(ulonglong *)(*plVar10 + 8);
    } while (((longlong)uVar5 < (longlong)uVar9) || (uVar9 = uVar9 + 1, uVar5 < uVar9));
    plVar7 = (longlong *)(*plVar10 + (uVar9 * 5 + 2) * 8);
    do {
      if (*plVar7 != -2) break;
      uVar9 = uVar9 + 1;
      plVar7 = plVar7 + 5;
    } while (uVar9 <= uVar5);
  } while( true );
}



// FUNCTION 143582670 FUN_143582670 body=33 status=ok
// SIG undefined FUN_143582670(void)

undefined8 * FUN_143582670(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1435826a0 FUN_1435826a0 body=228 status=ok
// SIG undefined FUN_1435826a0(void)

undefined8 * FUN_1435826a0(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b43f28);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b43f28);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b18698;
  }
  return param_1;
}



// FUNCTION 143582790 FUN_143582790 body=33 status=ok
// SIG undefined FUN_143582790(void)

undefined8 * FUN_143582790(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b18698;
  return param_1;
}



// FUNCTION 143582900 FUN_143582900 body=852 status=ok
// SIG undefined FUN_143582900(void)

void FUN_143582900(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,
                  undefined1 param_5,uint param_6)

{
  int *piVar1;
  char *_Str1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  RefCountNTSImpl *pRVar8;
  RefCountNTSImpl *pRVar9;
  ulonglong uVar10;
  RefCountNTSImpl *this;
  longlong lVar11;
  RefCountNTSImpl *pRVar12;
  undefined1 local_78 [4];
  int local_74;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined8 local_68;
  RefCountNTSImpl *pRStack_60;
  undefined4 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  if (*(char *)(lVar5 + 0x3f8) == '\0') {
    return;
  }
  pRVar12 = (RefCountNTSImpl *)0x0;
  lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x300) + 0x10);
  if (param_4 == 0) {
    lVar11 = (ulonglong)*(byte *)((ulonglong)param_6 + 0x52c4 + lVar6) * 0x60;
    piVar1 = *(int **)(lVar11 + 0x4ce8 + lVar6);
    this = pRVar12;
    if (piVar1 != (int *)0x0) {
      pRVar8 = *(RefCountNTSImpl **)(piVar1 + 2);
      if (pRVar8 == (RefCountNTSImpl *)0x0) {
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        *(undefined8 *)(lVar11 + 0x4ce8 + lVar6) = 0;
        this = (RefCountNTSImpl *)0x0;
      }
      else if (*(int *)(pRVar8 + 8) != 0) {
        *(int *)(pRVar8 + 8) = *(int *)(pRVar8 + 8) + 1;
        *(int *)(pRVar8 + 8) = *(int *)(pRVar8 + 8) + 1;
        Scaleform::RefCountNTSImpl::Release(pRVar8);
        *(int *)(pRVar8 + 8) = *(int *)(pRVar8 + 8) + 1;
        this = pRVar8;
      }
    }
    if (this != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this);
    }
  }
  else {
    this = *(RefCountNTSImpl **)(param_4 + 0x88);
    if (this != (RefCountNTSImpl *)0x0) {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
    }
  }
  uVar3 = 0;
  _Str1 = *(char **)*param_3;
  pRVar8 = pRVar12;
  if (((*_Str1 == 'u') && (_Str1[1] == 'p')) && (_Str1[2] == '\0')) {
    local_74 = 0x26;
  }
  else {
    do {
      pRVar9 = pRVar8;
      pRVar8 = pRVar12;
      if (*(RefCountNTSImpl *)(_Str1 + (longlong)pRVar9) != pRVar9[0x145b136b8]) goto LAB_143582a70;
      pRVar8 = pRVar9 + 1;
    } while (pRVar9 + 1 != (RefCountNTSImpl *)0x5);
    local_74 = (int)pRVar9 + 0x24;
  }
  goto LAB_143582b05;
  while (pRVar8 = pRVar9 + 1, pRVar9 + 1 != (RefCountNTSImpl *)0x5) {
LAB_143582a70:
    pRVar9 = pRVar8;
    pRVar8 = pRVar12;
    if (*(RefCountNTSImpl *)(_Str1 + (longlong)pRVar9) != pRVar9[0x145b068ec]) goto LAB_143582aa0;
  }
  local_74 = (int)pRVar9 + 0x21;
  goto LAB_143582b05;
  while (pRVar8 = pRVar9 + 1, pRVar9 + 1 != (RefCountNTSImpl *)&DAT_00000006) {
LAB_143582aa0:
    pRVar9 = pRVar8;
    pRVar8 = pRVar12;
    if (*(RefCountNTSImpl *)(_Str1 + (longlong)pRVar9) != pRVar9[0x145b068f4]) goto LAB_143582ad0;
  }
  local_74 = (int)pRVar9 + 0x22;
  goto LAB_143582b05;
  while (pRVar8 = pRVar9, uVar3 = 0, pRVar9 != (RefCountNTSImpl *)&DAT_00000004) {
LAB_143582ad0:
    pRVar9 = pRVar8 + 1;
    if (*(RefCountNTSImpl *)(_Str1 + (longlong)pRVar8) != pRVar8[0x145b136c0]) {
      iVar4 = _guard_xfg_dispatch_icall_nop(_Str1,"shifttab");
      if (iVar4 != 0) {
        lVar6 = FUN_14358b2a0(lVar5);
        if (lVar6 != 0) {
          uVar2 = *(undefined8 *)*param_3;
          uVar7 = FUN_14358b2a0(lVar5);
          FUN_14337ae30(uVar7,"moveFocus - invalid string id for key: \'%s\'",uVar2);
        }
        goto LAB_143582c1a;
      }
      uVar3 = 1;
      break;
    }
  }
  local_74 = 9;
LAB_143582b05:
  local_68 = 0;
  pRStack_60 = (RefCountNTSImpl *)0x0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0xffffffff;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  local_6e = (undefined1)param_6;
  local_6f = uVar3;
  FUN_1432e8520(lVar6,&local_68,local_78,param_5,0);
  if (this != (RefCountNTSImpl *)0x0) {
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
  }
  if (pRStack_60 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(pRStack_60);
  }
  local_30._0_3_ = CONCAT12(1,(undefined2)local_30);
  pRStack_60 = this;
  FUN_1432e8680(lVar6,5,local_78,&local_68);
  FUN_1432e9400(lVar6,&local_68);
  if ((pRStack_60 != (RefCountNTSImpl *)0x0) &&
     (lVar5 = (**(code **)(*(longlong *)(pRStack_60 + (ulonglong)(byte)pRStack_60[0x6d] * 4) + 8))()
     , lVar5 != 0)) {
    pRVar12 = (RefCountNTSImpl *)(lVar5 + -0x38);
  }
  uVar10 = *(ulonglong *)(pRVar12 + 0x10);
  if (uVar10 == 0) {
    uVar10 = *(ulonglong *)(pRVar12 + 8);
  }
  if ((uVar10 & 1) != 0) {
    uVar10 = uVar10 - 1;
  }
  FUN_1434f0700(param_2,uVar10);
  if (pRStack_60 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(pRStack_60);
  }
LAB_143582c1a:
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
  }
  return;
}



// FUNCTION 143582c60 FUN_143582c60 body=1742 status=ok
// SIG undefined FUN_143582c60(void)

void FUN_143582c60(longlong param_1,ulonglong *param_2,undefined8 *param_3,longlong param_4,
                  char param_5,longlong param_6,undefined1 param_7,uint param_8)

{
  char *_Str1;
  char cVar1;
  int iVar2;
  uint uVar3;
  RefCountNTSImpl *pRVar4;
  int *piVar5;
  longlong lVar6;
  Rect<float> *pRVar7;
  longlong lVar8;
  RefCountNTSImpl *pRVar9;
  ulonglong uVar10;
  longlong lVar11;
  RefCountNTSImpl *this;
  RefCountNTSImpl *pRVar12;
  uint uVar13;
  RefCountNTSImpl *pRVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  undefined1 local_148 [4];
  uint local_144;
  char local_13f;
  undefined1 local_13e;
  RefCountNTSImpl *local_138;
  longlong local_128 [2];
  undefined8 local_118;
  undefined8 *local_110;
  RefCountNTSImpl *local_108;
  undefined8 local_100;
  longlong local_f8;
  int *local_f0;
  RefCountNTSImpl *local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined2 local_c8;
  undefined8 local_b8;
  RefCountNTSImpl *pRStack_b0;
  undefined4 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  if (*(char *)(lVar6 + 0x3f8) == '\0') {
    return;
  }
  lVar8 = *(longlong *)(*(longlong *)(lVar6 + 0x300) + 0x10);
  pRVar12 = (RefCountNTSImpl *)0x0;
  local_128[0] = lVar8;
  if (param_6 == 0) {
    lVar11 = (ulonglong)*(byte *)((ulonglong)param_8 + 0x52c4 + lVar8) * 0x60;
    piVar5 = *(int **)(lVar11 + 0x4ce8 + lVar8);
    this = pRVar12;
    if (piVar5 != (int *)0x0) {
      pRVar9 = *(RefCountNTSImpl **)(piVar5 + 2);
      if (pRVar9 == (RefCountNTSImpl *)0x0) {
        *piVar5 = *piVar5 + -1;
        if (*piVar5 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        *(undefined8 *)(lVar11 + 0x4ce8 + lVar8) = 0;
        this = (RefCountNTSImpl *)0x0;
      }
      else if (*(int *)(pRVar9 + 8) != 0) {
        *(int *)(pRVar9 + 8) = *(int *)(pRVar9 + 8) + 1;
        *(int *)(pRVar9 + 8) = *(int *)(pRVar9 + 8) + 1;
        Scaleform::RefCountNTSImpl::Release(pRVar9);
        *(int *)(pRVar9 + 8) = *(int *)(pRVar9 + 8) + 1;
        this = pRVar9;
      }
    }
    if (this != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this);
    }
  }
  else {
    this = *(RefCountNTSImpl **)(param_6 + 0x88);
    if (this != (RefCountNTSImpl *)0x0) {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
    }
  }
  cVar1 = '\0';
  _Str1 = *(char **)*param_3;
  pRVar9 = pRVar12;
  if (((*_Str1 == 'u') && (_Str1[1] == 'p')) && (_Str1[2] == '\0')) {
    uVar13 = 0x26;
  }
  else {
    do {
      pRVar4 = pRVar9;
      pRVar9 = pRVar12;
      if (*(RefCountNTSImpl *)(_Str1 + (longlong)pRVar4) != pRVar4[0x145b136b8]) goto LAB_143582dd0;
      pRVar9 = pRVar4 + 1;
    } while (pRVar4 + 1 != (RefCountNTSImpl *)0x5);
    uVar13 = (int)pRVar4 + 0x24;
  }
  goto LAB_143582e65;
  while (pRVar9 = pRVar4 + 1, pRVar4 + 1 != (RefCountNTSImpl *)0x5) {
LAB_143582dd0:
    pRVar4 = pRVar9;
    pRVar9 = pRVar12;
    if (*(RefCountNTSImpl *)(_Str1 + (longlong)pRVar4) != pRVar4[0x145b068ec]) goto LAB_143582e00;
  }
  uVar13 = (int)pRVar4 + 0x21;
  goto LAB_143582e65;
  while (pRVar9 = pRVar4 + 1, pRVar4 + 1 != (RefCountNTSImpl *)&DAT_00000006) {
LAB_143582e00:
    pRVar4 = pRVar9;
    pRVar9 = pRVar12;
    if (*(RefCountNTSImpl *)(_Str1 + (longlong)pRVar4) != pRVar4[0x145b068f4]) goto LAB_143582e30;
  }
  uVar13 = (int)pRVar4 + 0x22;
  goto LAB_143582e65;
  while (pRVar9 = pRVar4, cVar1 = '\0', pRVar4 != (RefCountNTSImpl *)&DAT_00000004) {
LAB_143582e30:
    pRVar4 = pRVar9 + 1;
    if (*(RefCountNTSImpl *)(_Str1 + (longlong)pRVar9) != pRVar9[0x145b136c0]) {
      iVar2 = _guard_xfg_dispatch_icall_nop(_Str1,"shifttab");
      if (iVar2 != 0) goto LAB_1435832ed;
      cVar1 = '\x01';
      break;
    }
  }
  uVar13 = 9;
LAB_143582e65:
  if (param_4 == 0) {
    local_138 = (RefCountNTSImpl *)
                Scaleform::GFx::MovieImpl::GetModalClip(local_128[0],(ulonglong)param_8);
    if (local_138 != (RefCountNTSImpl *)0x0) {
      *(int *)(local_138 + 8) = *(int *)(local_138 + 8) + 1;
    }
  }
  else {
    local_138 = *(RefCountNTSImpl **)(param_4 + 0x88);
    if (local_138 != (RefCountNTSImpl *)0x0) {
      *(int *)(local_138 + 8) = *(int *)(local_138 + 8) + 1;
    }
  }
  pRVar9 = local_138;
  uVar3 = uVar13 & 0xffff;
  local_b8 = 0;
  pRStack_b0 = (RefCountNTSImpl *)0x0;
  local_a8 = 0xffffffff;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_7c = 0;
  local_13e = (undefined1)param_8;
  local_f8 = *(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x300) + 0x10) + 0x48);
  local_118 = 0;
  local_144 = uVar3;
  local_13f = cVar1;
  if (local_f8 == 0) {
    local_f8 = (**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,&local_118);
  }
  local_110 = (undefined8 *)0x0;
  local_f0 = (int *)0x0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_108 = (RefCountNTSImpl *)0x0;
  local_100 = 0;
  local_e8 = (RefCountNTSImpl *)0x0;
  local_e0 = 0;
  pRVar4 = pRVar12;
  if (pRVar9 != (RefCountNTSImpl *)0x0) {
    pRVar4 = *(RefCountNTSImpl **)(pRVar9 + 0x70);
    if ((pRVar4 != (RefCountNTSImpl *)0x0) ||
       (pRVar4 = (RefCountNTSImpl *)FUN_14336c170(pRVar9), pRVar4 != (RefCountNTSImpl *)0x0)) {
      *(int *)pRVar4 = *(int *)pRVar4 + 1;
    }
    pRVar14 = local_e8;
    if ((local_e8 != (RefCountNTSImpl *)0x0) &&
       (*(int *)local_e8 = *(int *)local_e8 + -1, *(int *)local_e8 < 1)) {
      FUN_14336bed0(local_e8);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,pRVar14);
    }
  }
  local_e8 = pRVar4;
  if (this == (RefCountNTSImpl *)0x0) {
    if ((local_f0 != (int *)0x0) && (*local_f0 = *local_f0 + -1, *local_f0 == 0)) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    local_f0 = (int *)0x0;
    piVar5 = local_f0;
  }
  else {
    piVar5 = (int *)FUN_1432be180(this);
    if ((local_f0 != (int *)0x0) && (*local_f0 = *local_f0 + -1, *local_f0 == 0)) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
  }
  local_f0 = piVar5;
  FUN_1432e8520(local_128[0],&local_b8,local_148,param_7,&local_118);
  local_80._0_3_ = CONCAT12(1,(undefined2)local_80);
  FUN_1432e8680(local_128[0],5,local_148,&local_b8);
  pRVar4 = local_108;
  lVar6 = local_128[0];
  if ((pRStack_b0 == (RefCountNTSImpl *)0x0) || (pRStack_b0 == this)) {
    if ((param_5 == '\0') || (local_108 == (RefCountNTSImpl *)0x0)) {
      uVar10 = *param_2;
      if (uVar10 != 0) {
        if ((uVar10 & 1) == 0) {
          if ((*(uint *)(uVar10 + 8) & 0x3fffff) != 0) {
            *(uint *)(uVar10 + 8) = *(uint *)(uVar10 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *param_2 = uVar10 - 1;
        }
        *param_2 = 0;
      }
    }
    else if ((short)uVar13 == 9) {
      if (cVar1 == '\0') {
        lVar6 = FUN_14358b2e0(*local_110);
        uVar10 = *(ulonglong *)(lVar6 + 0x10);
        if (uVar10 == 0) {
          uVar10 = *(ulonglong *)(lVar6 + 8);
        }
        if ((uVar10 & 1) != 0) {
          uVar10 = uVar10 - 1;
        }
        FUN_1434f0700(param_2,uVar10);
      }
      else {
        lVar6 = FUN_14358b2e0(local_110[(longlong)(local_108 + -1)]);
        uVar10 = *(ulonglong *)(lVar6 + 0x10);
        if (uVar10 == 0) {
          uVar10 = *(ulonglong *)(lVar6 + 8);
        }
        if ((uVar10 & 1) != 0) {
          uVar10 = uVar10 - 1;
        }
        FUN_1434f0700(param_2,uVar10);
      }
    }
    else {
      fVar17 = 1.1754944e-38;
      pRVar14 = pRVar12;
      if (local_108 != (RefCountNTSImpl *)0x0) {
        do {
          if (local_110[(longlong)pRVar14] != 0) {
            piVar5 = (int *)(local_110[(longlong)pRVar14] + 8);
            *piVar5 = *piVar5 + 1;
          }
          pRVar9 = (RefCountNTSImpl *)local_110[(longlong)pRVar14];
          if ((local_80._3_1_ != '\0') ||
             (cVar1 = (**(code **)(*(longlong *)pRVar9 + 0x2c0))(pRVar9), cVar1 != '\0')) {
            cVar1 = (**(code **)(*(longlong *)pRVar9 + 0x2b0))(pRVar9,lVar6,(undefined1)local_80);
            if (cVar1 != '\0') {
              local_78 = 0x3f800000;
              uStack_74 = 0;
              uStack_70 = 0;
              uStack_6c = 0;
              local_68 = 0;
              uStack_64 = 0x3f800000;
              uStack_60 = 0;
              uStack_5c = 0;
              FUN_14336a6d0(pRVar9,&local_78);
              pRVar7 = (Rect<float> *)(**(code **)(*(longlong *)pRVar9 + 0x2f0))(pRVar9,local_128);
              Scaleform::Render::Matrix2x4<float>::EncloseTransform
                        ((Matrix2x4<float> *)&local_78,(Rect<float> *)&local_158,pRVar7);
              fVar16 = local_150;
              if ((uVar3 == 0x25) || (fVar16 = local_14c, uVar3 == 0x26)) {
                if (fVar17 != 1.1754944e-38) {
                  bVar15 = fVar16 < fVar17;
LAB_143583218:
                  if (bVar15 || fVar17 == fVar16) goto LAB_143583220;
                }
              }
              else {
                fVar16 = local_158;
                if ((uVar3 != 0x27) && (fVar16 = local_154, uVar3 != 0x28)) goto LAB_143583220;
                if (fVar17 != 1.1754944e-38) {
                  bVar15 = fVar17 < fVar16;
                  goto LAB_143583218;
                }
              }
              pRVar12 = pRVar14;
              fVar17 = fVar16;
            }
          }
LAB_143583220:
          Scaleform::RefCountNTSImpl::Release(pRVar9);
          pRVar14 = pRVar14 + 1;
          pRVar9 = local_138;
        } while (pRVar14 < pRVar4);
      }
      lVar6 = 0;
      lVar8 = local_110[(longlong)pRVar12];
      if ((lVar8 != 0) &&
         (lVar8 = (**(code **)(*(longlong *)(lVar8 + (ulonglong)*(byte *)(lVar8 + 0x6d) * 4) + 8))()
         , lVar8 != 0)) {
        lVar6 = lVar8 + -0x38;
      }
      uVar10 = *(ulonglong *)(lVar6 + 0x10);
      if (uVar10 == 0) {
        uVar10 = *(ulonglong *)(lVar6 + 8);
      }
      if ((uVar10 & 1) != 0) {
        uVar10 = uVar10 - 1;
      }
      FUN_1434f0700(param_2,uVar10);
    }
  }
  else {
    lVar6 = (**(code **)(*(longlong *)(pRStack_b0 + (ulonglong)(byte)pRStack_b0[0x6d] * 4) + 8))();
    if (lVar6 != 0) {
      pRVar12 = (RefCountNTSImpl *)(lVar6 + -0x38);
    }
    uVar10 = *(ulonglong *)(pRVar12 + 0x10);
    if (uVar10 == 0) {
      uVar10 = *(ulonglong *)(pRVar12 + 8);
    }
    if ((uVar10 & 1) != 0) {
      uVar10 = uVar10 - 1;
    }
    FUN_1434f0700(param_2,uVar10);
  }
  FUN_1432efa70(&local_118);
  if (pRStack_b0 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(pRStack_b0);
  }
  if (pRVar9 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(pRVar9);
  }
LAB_1435832ed:
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
  }
  return;
}



// FUNCTION 143583340 FUN_143583340 body=258 status=ok
// SIG undefined FUN_143583340(void)

void FUN_143583340(longlong param_1,undefined8 param_2,longlong param_3,uint param_4)

{
  longlong lVar1;
  int *piVar2;
  RefCountNTSImpl *this;
  longlong lVar3;
  RefCountNTSImpl *this_00;
  
  this = (RefCountNTSImpl *)0x0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  if ((param_3 != 0) &&
     (this = *(RefCountNTSImpl **)(param_3 + 0x88), this != (RefCountNTSImpl *)0x0)) {
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
  }
  lVar3 = *(longlong *)(*(longlong *)(lVar1 + 0x300) + 0x10);
  lVar3 = (ulonglong)*(byte *)((ulonglong)param_4 + 0x52c4 + lVar3) * 0x60 + lVar3;
  piVar2 = *(int **)(lVar3 + 0x4ce8);
  this_00 = (RefCountNTSImpl *)0x0;
  if (piVar2 != (int *)0x0) {
    this_00 = *(RefCountNTSImpl **)(piVar2 + 2);
    if (this_00 == (RefCountNTSImpl *)0x0) {
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *(undefined8 *)(lVar3 + 0x4ce8) = 0;
      this_00 = (RefCountNTSImpl *)0x0;
    }
    else if (*(int *)(this_00 + 8) == 0) {
      this_00 = (RefCountNTSImpl *)0x0;
    }
    else {
      *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
      *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
      Scaleform::RefCountNTSImpl::Release(this_00);
    }
  }
  if (this_00 != this) {
    FUN_1432eb210(*(undefined8 *)(*(longlong *)(lVar1 + 0x300) + 0x10),this,param_4,3);
  }
  if (this_00 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this_00);
  }
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
  }
  return;
}



// FUNCTION 143583450 FUN_143583450 body=419 status=ok
// SIG undefined FUN_143583450(void)

void FUN_143583450(longlong param_1,ulonglong *param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  RefCountNTSImpl *this;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x300) + 0x10);
  lVar4 = (ulonglong)*(byte *)((ulonglong)param_3 + 0x52c4 + lVar4) * 0x60 + lVar4;
  piVar2 = *(int **)(lVar4 + 0x4ce8);
  if (piVar2 != (int *)0x0) {
    this = *(RefCountNTSImpl **)(piVar2 + 2);
    if (this == (RefCountNTSImpl *)0x0) {
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *(undefined8 *)(lVar4 + 0x4ce8) = 0;
    }
    else if (*(int *)(this + 8) != 0) {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      Scaleform::RefCountNTSImpl::Release(this);
      lVar4 = (**(code **)(*(longlong *)(this + (ulonglong)(byte)this[0x6d] * 4) + 8))
                        (this + (ulonglong)(byte)this[0x6d] * 4);
      if (lVar4 != 0) {
        lVar4 = lVar4 + -0x38;
      }
      uVar3 = *(ulonglong *)(lVar4 + 0x10);
      if (uVar3 == 0) {
        uVar3 = *(ulonglong *)(lVar4 + 8);
      }
      if ((uVar3 & 1) != 0) {
        uVar3 = uVar3 - 1;
      }
      if ((uVar3 != 0) &&
         ((iVar1 = *(int *)(*(longlong *)(uVar3 + 0x28) + 0x90), iVar1 == 0x19 || (0x1e < iVar1))))
      {
        FUN_1434f0700(param_2);
        Scaleform::RefCountNTSImpl::Release(this);
        return;
      }
      uVar3 = *param_2;
      if (uVar3 != 0) {
        if ((uVar3 & 1) != 0) {
          *param_2 = uVar3 - 1;
          *param_2 = 0;
          Scaleform::RefCountNTSImpl::Release(this);
          return;
        }
        if ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
          FUN_1434ef880();
        }
        *param_2 = 0;
      }
      Scaleform::RefCountNTSImpl::Release(this);
      return;
    }
  }
  uVar3 = *param_2;
  if (uVar3 != 0) {
    if ((uVar3 & 1) == 0) {
      if ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *param_2 = uVar3 - 1;
    }
    *param_2 = 0;
  }
  return;
}



// FUNCTION 143583670 FUN_143583670 body=52 status=ok
// SIG undefined FUN_143583670(void)

void FUN_143583670(longlong param_1,uint *param_2,longlong param_3)

{
  ushort uVar1;
  
  if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x3f8) != '\0') {
    uVar1 = Scaleform::GFx::InteractiveObject::GetFocusGroupMask(*(undefined8 *)(param_3 + 0x88));
    *param_2 = (uint)uVar1;
  }
  return;
}



// FUNCTION 1435836b0 FUN_1435836b0 body=75 status=ok
// SIG undefined FUN_1435836b0(void)

void FUN_1435836b0(longlong param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 uVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  if (*(char *)(lVar1 + 0x3f8) != '\0') {
    plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x300) + 0x10);
    uVar3 = (**(code **)(*plVar2 + 0x1c0))(plVar2,param_3,param_4);
    *param_2 = uVar3;
    return;
  }
  *param_2 = 0;
  return;
}



// FUNCTION 143583710 FUN_143583710 body=72 status=ok
// SIG undefined FUN_143583710(void)

void FUN_143583710(longlong param_1,undefined4 *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  if (*(char *)(lVar1 + 0x3f8) != '\0') {
    plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x300) + 0x10);
    uVar3 = (**(code **)(*plVar2 + 0x1c8))(plVar2,param_3);
    *param_2 = uVar3;
    return;
  }
  *param_2 = 0;
  return;
}



// FUNCTION 143583760 FUN_143583760 body=68 status=ok
// SIG undefined FUN_143583760(void)

void FUN_143583760(longlong param_1,undefined4 *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  if (*(char *)(lVar1 + 0x3f8) != '\0') {
    uVar2 = FUN_1432ea9c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x300) + 0x10),param_3);
    *param_2 = uVar2;
    return;
  }
  *param_2 = 0;
  return;
}



// FUNCTION 1435837b0 FUN_1435837b0 body=186 status=ok
// SIG undefined FUN_1435837b0(void)

void FUN_1435837b0(longlong param_1,ulonglong *param_2,undefined4 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  if (*(char *)(lVar1 + 0x3f8) != '\0') {
    lVar1 = Scaleform::GFx::MovieImpl::GetModalClip
                      (*(undefined8 *)(*(longlong *)(lVar1 + 0x300) + 0x10),param_3);
    if (lVar1 != 0) {
      uVar2 = *(ulonglong *)(lVar1 + 0x10 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4);
      if (uVar2 == 0) {
        uVar2 = *(ulonglong *)(lVar1 + 8 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4);
      }
      if ((uVar2 & 1) != 0) {
        uVar2 = uVar2 - 1;
      }
      if ((uVar2 != 0) && (*(int *)(*(longlong *)(uVar2 + 0x28) + 0x90) - 0x20U < 2)) {
        FUN_1434f0700(param_2);
        return;
      }
      uVar2 = *param_2;
      if (uVar2 != 0) {
        if ((uVar2 & 1) != 0) {
          *param_2 = uVar2 - 1;
          *param_2 = 0;
          return;
        }
        if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
          FUN_1434ef880();
        }
        *param_2 = 0;
      }
    }
  }
  return;
}



// FUNCTION 1435838c0 FUN_1435838c0 body=33 status=ok
// SIG undefined FUN_1435838c0(void)

undefined8 * FUN_1435838c0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1435838f0 FUN_1435838f0 body=238 status=ok
// SIG undefined FUN_1435838f0(void)

undefined8 * FUN_1435838f0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b45390);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  uVar4 = 0;
  if (lVar3 != 0) {
    uVar4 = UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b45390);
  }
  FUN_1435b8600(*param_1,uVar4);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x60);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar2,*param_1);
    *(undefined4 *)(puVar2 + 10) = 0;
    *puVar2 = &PTR_ForEachChild_GC_145b23ad8;
    *(undefined4 *)((longlong)puVar2 + 0x54) = 1;
    *(undefined4 *)(puVar2 + 0xb) = 2;
    *(undefined4 *)((longlong)puVar2 + 0x5c) = 3;
  }
  return param_1;
}



// FUNCTION 1435839f0 FUN_1435839f0 body=61 status=ok
// SIG undefined FUN_1435839f0(void)

undefined8 * FUN_1435839f0(undefined8 *param_1)

{
  FUN_1435b37d0();
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = &PTR_ForEachChild_GC_145b23ad8;
  *(undefined4 *)((longlong)param_1 + 0x54) = 1;
  *(undefined4 *)(param_1 + 0xb) = 2;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 3;
  return param_1;
}



// FUNCTION 143583b00 FUN_143583b00 body=439 status=ok
// SIG undefined FUN_143583b00(void)

void FUN_143583b00(longlong param_1,ulonglong *param_2,double param_3,double param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  float local_res8;
  float local_resc;
  float local_48;
  float fStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  
  lVar1 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x300) + 0x10);
  plVar3 = *(longlong **)(lVar1 + 0x58);
  if (plVar3 == (longlong *)0x0) {
    uVar2 = *param_2;
    if (uVar2 == 0) {
      return;
    }
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *param_2 = uVar2 - 1;
    }
  }
  else {
    local_48 = 1.0;
    fStack_44 = 0.0;
    uStack_40 = 0;
    fStack_3c = 0.0;
    local_38 = 0.0;
    fStack_34 = 1.0;
    uStack_30 = 0;
    fStack_2c = 0.0;
    (**(code **)(*plVar3 + 0x1e8))(plVar3,&local_48);
    plVar3 = (longlong *)0x0;
    local_res8 = fStack_44 * (float)(param_4 * 20.0) + local_48 * (float)(param_3 * 20.0) +
                 fStack_3c;
    local_resc = local_38 * (float)(param_3 * 20.0) + fStack_34 * (float)(param_4 * 20.0) +
                 fStack_2c;
    lVar1 = FUN_1432e79b0(lVar1,&local_res8,0,param_5,0);
    if (lVar1 != 0) {
      lVar1 = (**(code **)(*(longlong *)(lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4) + 8))();
      if (lVar1 != 0) {
        plVar3 = (longlong *)(lVar1 + -0x38);
      }
      (**(code **)(*plVar3 + 0x70))(plVar3,1);
      uVar2 = plVar3[2];
      if (uVar2 == 0) {
        uVar2 = plVar3[1];
      }
      if ((uVar2 & 1) != 0) {
        uVar2 = uVar2 - 1;
      }
      FUN_1434f0700(param_2,uVar2);
      return;
    }
    uVar2 = *param_2;
    if (uVar2 == 0) {
      return;
    }
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *param_2 = uVar2 - 1;
    }
  }
  *param_2 = 0;
  return;
}



// FUNCTION 143583cc0 FUN_143583cc0 body=277 status=ok
// SIG undefined FUN_143583cc0(void)

void FUN_143583cc0(longlong param_1,ulonglong *param_2,undefined1 param_3,uint param_4)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined4 local_res8;
  undefined4 local_resc;
  
  plVar1 = *(longlong **)
            (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x300) + 0x10);
  uVar2 = (**(code **)(*plVar1 + 0x160))(plVar1);
  if (param_4 < uVar2) {
    plVar6 = (longlong *)0x0;
    plVar3 = plVar6;
    if (param_4 < 6) {
      plVar3 = plVar1 + ((ulonglong)param_4 + 0x6d) * 10;
    }
    local_resc = *(undefined4 *)((longlong)plVar3 + 0x3c);
    local_res8 = (undefined4)plVar3[7];
    lVar4 = FUN_1432e79b0(plVar1,&local_res8,param_4,param_3,0);
    if (lVar4 == 0) {
      uVar5 = *param_2;
      if (uVar5 != 0) {
        if ((uVar5 & 1) == 0) {
          if ((*(uint *)(uVar5 + 8) & 0x3fffff) != 0) {
            *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *param_2 = uVar5 - 1;
        }
        *param_2 = 0;
      }
    }
    else {
      lVar4 = (**(code **)(*(longlong *)(lVar4 + (ulonglong)*(byte *)(lVar4 + 0x6d) * 4) + 8))();
      if (lVar4 != 0) {
        plVar6 = (longlong *)(lVar4 + -0x38);
      }
      (**(code **)(*plVar6 + 0x70))(plVar6,1);
      uVar5 = plVar6[2];
      if (uVar5 == 0) {
        uVar5 = plVar6[1];
      }
      if ((uVar5 & 1) != 0) {
        uVar5 = uVar5 - 1;
      }
      FUN_1434f0700(param_2,uVar5);
    }
  }
  return;
}



// FUNCTION 143583e30 FUN_143583e30 body=122 status=ok
// SIG undefined FUN_143583e30(void)

void FUN_143583e30(longlong param_1,undefined4 *param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  ushort uVar3;
  
  uVar1 = FUN_14336b350(*(undefined8 *)(param_3 + 0x88));
  lVar2 = FUN_1432cd1e0(uVar1);
  uVar3 = *(ushort *)(lVar2 + 10) & 0xc;
  if (uVar3 == 4) {
    *param_2 = *(undefined4 *)(param_1 + 0x54);
    return;
  }
  if (uVar3 != 8) {
    if (uVar3 != 0xc) {
      *param_2 = *(undefined4 *)(param_1 + 0x50);
      return;
    }
    *param_2 = *(undefined4 *)(param_1 + 0x5c);
    return;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x58);
  return;
}



// FUNCTION 143583eb0 FUN_143583eb0 body=73 status=ok
// SIG undefined FUN_143583eb0(void)

void FUN_143583eb0(longlong param_1,undefined8 param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if (param_4 == *(int *)(param_1 + 0x5c)) {
    uVar2 = 0xc;
  }
  else if (param_4 == *(int *)(param_1 + 0x54)) {
    uVar2 = 4;
  }
  else {
    uVar2 = 0;
    if (param_4 == *(int *)(param_1 + 0x58)) {
      uVar2 = 8;
    }
  }
  uVar1 = FUN_14336b350(*(undefined8 *)(param_3 + 0x88));
  FUN_143362aa0(uVar1,uVar2);
  return;
}



// FUNCTION 143583f00 FUN_143583f00 body=57 status=ok
// SIG undefined FUN_143583f00(void)

void FUN_143583f00(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  if (*(char *)(lVar1 + 0x3f8) != '\0') {
    uVar2 = (**(code **)(**(longlong **)(*(longlong *)(lVar1 + 0x300) + 0x10) + 0x170))();
    *param_2 = uVar2;
  }
  return;
}



// FUNCTION 143583f40 FUN_143583f40 body=344 status=ok
// SIG undefined FUN_143583f40(void)

void FUN_143583f40(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined4 local_res8 [2];
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  uint local_a8 [2];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_88 [2];
  undefined8 local_80;
  double local_78;
  undefined4 local_68;
  undefined8 local_60;
  double local_58;
  undefined4 local_48;
  undefined8 local_40;
  double local_38;
  uint local_28 [4];
  double local_18;
  
  plVar2 = *(longlong **)
            (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x300) + 0x10);
  (**(code **)(*plVar2 + 0x90))(plVar2,&local_b8);
  local_80 = 0;
  local_60 = 0;
  lVar4 = 4;
  local_40 = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_a8[0] = 0;
  local_a0 = 0;
  local_78 = (double)local_b8;
  local_88[0] = 4;
  local_68 = 4;
  local_48 = 4;
  local_28[0] = 4;
  local_res8[0] = 4;
  local_58 = (double)local_b4;
  local_38 = (double)(local_b0 - local_b8);
  local_18 = (double)(local_ac - local_b4);
  plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x3d0);
  (**(code **)(*plVar2 + 0x68))(plVar2,local_a8,local_res8,local_88,1,1);
  FUN_1434f0700(param_2,local_98);
  if (9 < ((byte)local_a8[0] & 0x1f)) {
    if ((local_a8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_a8);
    }
    else {
      FUN_143592150();
    }
  }
  puVar3 = &stack0xfffffffffffffff8;
  do {
    puVar1 = (uint *)(puVar3 + -0x20);
    puVar3 = puVar3 + -0x20;
    lVar4 = lVar4 + -1;
    if (9 < ((byte)*puVar1 & 0x1f)) {
      if ((*puVar1 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar3);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar4 != 0);
  return;
}



// FUNCTION 1435840b0 FUN_1435840b0 body=63 status=ok
// SIG undefined FUN_1435840b0(void)

void FUN_1435840b0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  if (*(char *)(lVar1 + 0x3f8) != '\0') {
    lVar1 = FUN_1432ec660(*(undefined8 *)(*(longlong *)(lVar1 + 0x300) + 0x10));
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0x1a0) = param_3;
    }
  }
  return;
}



// FUNCTION 143584100 FUN_143584100 body=68 status=ok
// SIG undefined FUN_143584100(void)

void FUN_143584100(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  *param_2 = 0;
  if (*(char *)(lVar1 + 0x3f8) != '\0') {
    lVar1 = FUN_1432ec660(*(undefined8 *)(*(longlong *)(lVar1 + 0x300) + 0x10));
    if (lVar1 != 0) {
      *param_2 = *(undefined1 *)(lVar1 + 0x1a0);
    }
  }
  return;
}



// FUNCTION 143584150 FUN_143584150 body=81 status=ok
// SIG undefined FUN_143584150(void)

undefined8 * FUN_143584150(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  FUN_143517270();
  *param_1 = &PTR_ForEachChild_GC_145b46708;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[0xc] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  *(byte *)((longlong)param_1 + 0x5c) = *(byte *)((longlong)param_1 + 0x5c) & 0xfe;
  *(byte *)((longlong)param_1 + 0x5c) = *(byte *)((longlong)param_1 + 0x5c) | 2;
  *(undefined4 *)(param_1 + 0xd) = 0;
  return param_1;
}



// FUNCTION 1435841b0 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b467e0;
  return param_1;
}



// FUNCTION 1435841e0 FUN_1435841e0 body=212 status=ok
// SIG undefined FUN_1435841e0(void)

void FUN_1435841e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar3 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_143517270(puVar3,param_3);
    *puVar3 = &PTR_ForEachChild_GC_145b46708;
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(puVar3[5] + 0x98) + 0x10) + 0x218);
    puVar3[0xc] = lVar2 + 0x48;
    piVar1 = (int *)(lVar2 + 0x60);
    *piVar1 = *piVar1 + 1;
    *(byte *)((longlong)puVar3 + 0x5c) = *(byte *)((longlong)puVar3 + 0x5c) & 0xfe;
    *(byte *)((longlong)puVar3 + 0x5c) = *(byte *)((longlong)puVar3 + 0x5c) | 2;
    *(undefined4 *)(puVar3 + 0xd) = 0;
  }
  local_20 = 0;
  local_28[0] = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar3);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 1435842c0 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1435842f0 FUN_1435842f0 body=238 status=ok
// SIG undefined FUN_1435842f0(void)

undefined8 * FUN_1435842f0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar3,param_2,&PTR_DAT_145b43e50);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar3,param_2,&PTR_DAT_145b43e50);
    *puVar3 = &PTR_FUN_145b467e0;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x58);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b231d0;
    puVar3[10] = "mouseCursorChange";
  }
  return param_1;
}



// FUNCTION 1435843f0 UFlowNodeBlueprint body=44 status=ok
// SIG undefined UFlowNodeBlueprint(void)

undefined8 * UFlowNodeBlueprint::UFlowNodeBlueprint(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b231d0;
  param_1[10] = "mouseCursorChange";
  return param_1;
}



// FUNCTION 143584430 FUN_143584430 body=33 status=ok
// SIG undefined FUN_143584430(void)

undefined8 * FUN_143584430(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143584460 FUN_143584460 body=228 status=ok
// SIG undefined FUN_143584460(void)

undefined8 * FUN_143584460(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b44c90);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b44c90);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b18698;
  }
  return param_1;
}



// FUNCTION 143584550 FUN_143584550 body=33 status=ok
// SIG undefined FUN_143584550(void)

undefined8 * FUN_143584550(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b18698;
  return param_1;
}



// FUNCTION 1435845a0 isBatchingDisabled body=33 status=ok
// SIG undefined isBatchingDisabled(void)

void Scaleform::GFx::AS3::Classes::fl_gfx::DisplayObjectEx::isBatchingDisabled
               (undefined8 param_1,undefined1 *param_2,longlong param_3)

{
  undefined1 uVar1;
  
  if (param_3 != 0) {
    uVar1 = FUN_14336bc80(*(undefined8 *)(param_3 + 0x88));
    *param_2 = uVar1;
  }
  return;
}



// FUNCTION 1435845f0 FUN_1435845f0 body=131 status=ok
// SIG undefined FUN_1435845f0(void)

void FUN_1435845f0(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = FUN_14336bb40(*(undefined8 *)(param_3 + 0x88));
    if (lVar2 != 0) {
      FUN_1433601c0(param_2,lVar2);
      return;
    }
    lVar2 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218);
    *(int *)(lVar2 + 0x60) = *(int *)(lVar2 + 0x60) + 2;
    piVar1 = (int *)(*param_2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_2 = lVar2 + 0x48;
    piVar1 = (int *)(lVar2 + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar2 + 0x48);
    }
  }
  return;
}



// FUNCTION 1435846a0 getRendererFloat body=42 status=ok
// SIG undefined getRendererFloat(void)

void Scaleform::GFx::AS3::Classes::fl_gfx::DisplayObjectEx::getRendererFloat
               (undefined8 param_1,double *param_2,longlong param_3)

{
  float fVar1;
  
  if (param_3 != 0) {
    fVar1 = (float)FUN_14336bbe0(*(undefined8 *)(param_3 + 0x88));
    *param_2 = (double)fVar1;
  }
  return;
}



// FUNCTION 1435846f0 isBatchingDisabled body=33 status=ok
// SIG undefined isBatchingDisabled(void)

void Scaleform::GFx::AS3::Classes::fl_gfx::DisplayObjectEx::isBatchingDisabled
               (undefined8 param_1,undefined1 *param_2,longlong param_3)

{
  undefined1 uVar1;
  
  if (param_3 != 0) {
    uVar1 = FUN_14336bd20(*(undefined8 *)(param_3 + 0x88));
    *param_2 = uVar1;
  }
  return;
}



// FUNCTION 143584720 FUN_143584720 body=33 status=ok
// SIG undefined FUN_143584720(void)

undefined8 * FUN_143584720(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143584750 FUN_143584750 body=228 status=ok
// SIG undefined FUN_143584750(void)

undefined8 * FUN_143584750(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b457f0);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b457f0);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b18698;
  }
  return param_1;
}



// FUNCTION 143584840 FUN_143584840 body=33 status=ok
// SIG undefined FUN_143584840(void)

undefined8 * FUN_143584840(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b18698;
  return param_1;
}



// FUNCTION 1435849a0 FUN_1435849a0 body=33 status=ok
// SIG undefined FUN_1435849a0(void)

undefined8 * FUN_1435849a0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1435849d0 FUN_1435849d0 body=216 status=ok
// SIG undefined FUN_1435849d0(void)

undefined8 * FUN_1435849d0(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b44360);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b44360);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0xa8,0);
  if (lVar3 != 0) {
    FUN_143584ab0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143584ab0 FUN_143584ab0 body=134 status=ok
// SIG undefined FUN_143584ab0(void)

undefined8 * FUN_143584ab0(undefined8 *param_1)

{
  FUN_1435b37d0();
  param_1[10] = &DAT_145b122f4;
  *param_1 = &PTR_ForEachChild_GC_145b46870;
  param_1[0xb] = &DAT_145b1237c;
  param_1[0xf] = "shrink";
  param_1[0xc] = "center";
  param_1[0x10] = &DAT_145b12390;
  param_1[0xd] = "bottom";
  param_1[0xe] = &DAT_145b122f4;
  param_1[0x11] = &DAT_145b122f4;
  param_1[0x12] = &DAT_145b1237c;
  param_1[0x13] = "center";
  param_1[0x14] = "bottom";
  return param_1;
}



// FUNCTION 143584b40 FUN_143584b40 body=288 status=ok
// SIG undefined FUN_143584b40(void)

void FUN_143584b40(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar5 = FUN_1435c8e40(&local_28,0x5e3,uVar2);
    FUN_1435cbef0(uVar2,uVar5);
    piVar1 = (int *)(local_20 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x3f8) != '\0') {
    lVar3 = *(longlong *)(param_3 + 0x88);
    cVar4 = FUN_143dea8d0(lVar3);
    if (cVar4 == '\0') {
      local_10 = (**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,lVar3);
      local_28 = 0;
      local_20 = 0;
      local_18 = 0;
      Scaleform::Render::Text::DocView::AppendHtml
                (*(undefined8 *)(lVar3 + 0xe0),*(undefined8 *)*param_4,0xffffffffffffffff,0,
                 &local_28);
      *(uint *)(lVar3 + 0xfc) = *(uint *)(lVar3 + 0xfc) | 0x10000;
      if (local_20 != 0) {
        FUN_143deace0(lVar3,&local_28);
      }
      FUN_143de5880(lVar3);
      FUN_1434082b0(local_28,local_20);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_28);
    }
  }
  return;
}



// FUNCTION 143584c70 FUN_143584c70 body=426 status=ok
// SIG undefined FUN_143584c70(void)

void FUN_143584c70(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  int *piVar1;
  byte *pbVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == 0) {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar6 = FUN_1435c8e40(local_18,0x5e3,uVar3);
    FUN_1435cbef0(uVar3,uVar6);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x3f8) != '\0') {
    lVar7 = 0;
    lVar4 = *(longlong *)(param_3 + 0x88);
    lVar5 = *(longlong *)*param_4;
    lVar8 = lVar7;
    while (lVar9 = lVar8 + 1, lVar10 = lVar7, *(char *)(lVar5 + lVar8) == (&DAT_145b122f4)[lVar8]) {
      lVar8 = lVar9;
      if (lVar9 == 5) {
        lVar5 = *(longlong *)(lVar4 + 0xe0);
        pbVar2 = (byte *)(lVar5 + 0x159);
        *pbVar2 = *pbVar2 & 0xf3;
        pbVar2 = (byte *)(lVar5 + 0x15b);
        *pbVar2 = *pbVar2 | 1;
        FUN_143de5880(lVar4);
        return;
      }
    }
    while (lVar9 = lVar10 + 1, lVar8 = lVar7, *(char *)(lVar5 + lVar10) == (&DAT_145b1237c)[lVar10])
    {
      lVar10 = lVar9;
      if (lVar9 == 4) {
        lVar5 = *(longlong *)(lVar4 + 0xe0);
        *(byte *)(lVar5 + 0x159) = *(byte *)(lVar5 + 0x159) & 0xf7;
        *(byte *)(lVar5 + 0x159) = *(byte *)(lVar5 + 0x159) | 4;
        *(byte *)(lVar5 + 0x15b) = *(byte *)(lVar5 + 0x15b) | 1;
        FUN_143de5880(lVar4);
        return;
      }
    }
    while (lVar10 = lVar8 + 1, *(char *)(lVar5 + lVar8) == "bottom"[lVar8]) {
      lVar8 = lVar10;
      if (lVar10 == 7) {
        lVar5 = *(longlong *)(lVar4 + 0xe0);
        *(byte *)(lVar5 + 0x159) = *(byte *)(lVar5 + 0x159) & 0xfb;
        *(byte *)(lVar5 + 0x159) = *(byte *)(lVar5 + 0x159) | 8;
        *(byte *)(lVar5 + 0x15b) = *(byte *)(lVar5 + 0x15b) | 1;
        FUN_143de5880(lVar4);
        return;
      }
    }
    do {
      lVar8 = lVar7 + 1;
      if (*(char *)(lVar5 + lVar7) != "center"[lVar7]) goto LAB_143584e09;
      lVar7 = lVar8;
    } while (lVar8 != 7);
    lVar5 = *(longlong *)(lVar4 + 0xe0);
    pbVar2 = (byte *)(lVar5 + 0x159);
    *pbVar2 = *pbVar2 | 0xc;
    pbVar2 = (byte *)(lVar5 + 0x15b);
    *pbVar2 = *pbVar2 | 1;
LAB_143584e09:
    FUN_143de5880(lVar4);
    return;
  }
  return;
}



// FUNCTION 143584e20 FUN_143584e20 body=203 status=ok
// SIG undefined FUN_143584e20(void)

void FUN_143584e20(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar3 = FUN_1435c8e40(local_18,0x5e3,uVar2);
    FUN_1435cbef0(uVar2,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
    return;
  }
  bVar4 = *(byte *)(*(longlong *)(*(longlong *)(param_3 + 0x88) + 0xe0) + 0x159) >> 2 & 3;
  if (bVar4 == 1) {
    FUN_1433601c0(param_2,&DAT_145b1237c);
    return;
  }
  if (bVar4 != 2) {
    if (bVar4 != 3) {
      FUN_1433601c0(param_2,&DAT_145b122f4);
      return;
    }
    FUN_1433601c0(param_2,"center");
    return;
  }
  FUN_1433601c0(param_2,"bottom");
  return;
}



// FUNCTION 143584f00 FUN_143584f00 body=402 status=ok
// SIG undefined FUN_143584f00(void)

void FUN_143584f00(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  int *piVar1;
  byte *pbVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == 0) {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar5 = FUN_1435c8e40(local_18,0x5e3,uVar3);
    FUN_1435cbef0(uVar3,uVar5);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    FUN_14335f920();
    return;
  }
  if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x3f8) == '\0') {
    return;
  }
  lVar10 = 0;
  lVar4 = *(longlong *)(param_3 + 0x88);
  lVar6 = lVar10;
  do {
    lVar7 = lVar6 + 1;
    if (*(char *)(*(longlong *)*param_4 + lVar6) != (&DAT_145b122f4)[lVar6]) {
      Scaleform::Render::Text::DocView::SetAutoSizeY(*(undefined8 *)(lVar4 + 0xe0));
      lVar6 = *(longlong *)*param_4;
      lVar7 = lVar10;
      goto LAB_143584fe1;
    }
    lVar6 = lVar7;
  } while (lVar7 != 5);
  pbVar2 = (byte *)(*(longlong *)(lVar4 + 0xe0) + 0x158);
  *pbVar2 = *pbVar2 & 0xfd;
  lVar6 = *(longlong *)(lVar4 + 0xe0);
  *(byte *)(lVar6 + 0x159) = *(byte *)(lVar6 + 0x159) & 0xf3;
  goto LAB_143585073;
  while (lVar7 = lVar8, lVar8 != 4) {
LAB_143584fe1:
    lVar8 = lVar7 + 1;
    lVar9 = lVar10;
    if (*(char *)(lVar6 + lVar7) != (&DAT_145b1237c)[lVar7]) goto LAB_143585020;
  }
  lVar6 = *(longlong *)(lVar4 + 0xe0);
  *(byte *)(lVar6 + 0x159) = *(byte *)(lVar6 + 0x159) & 0xf7;
  *(byte *)(lVar6 + 0x159) = *(byte *)(lVar6 + 0x159) | 4;
  goto LAB_143585073;
  while (lVar9 = lVar7, lVar7 != 7) {
LAB_143585020:
    lVar7 = lVar9 + 1;
    if (*(char *)(lVar6 + lVar9) != "bottom"[lVar9]) goto LAB_143585052;
  }
  lVar6 = *(longlong *)(lVar4 + 0xe0);
  *(byte *)(lVar6 + 0x159) = *(byte *)(lVar6 + 0x159) & 0xfb;
  *(byte *)(lVar6 + 0x159) = *(byte *)(lVar6 + 0x159) | 8;
  goto LAB_143585073;
  while (lVar10 = lVar7, lVar7 != 7) {
LAB_143585052:
    lVar7 = lVar10 + 1;
    if (*(char *)(lVar6 + lVar10) != "center"[lVar10]) goto LAB_14358507a;
  }
  lVar6 = *(longlong *)(lVar4 + 0xe0);
  *(byte *)(lVar6 + 0x159) = *(byte *)(lVar6 + 0x159) | 0xc;
LAB_143585073:
  *(byte *)(lVar6 + 0x15b) = *(byte *)(lVar6 + 0x15b) | 1;
LAB_14358507a:
  FUN_143de5880(lVar4);
  return;
}



// FUNCTION 1435850a0 FUN_1435850a0 body=235 status=ok
// SIG undefined FUN_1435850a0(void)

void FUN_1435850a0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(local_18,0x5e3,uVar2);
    FUN_1435cbef0(uVar2,uVar4);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
    return;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_3 + 0x88) + 0xe0);
  if ((*(byte *)(lVar3 + 0x158) & 2) == 0) {
    FUN_1433601c0(param_2,&DAT_145b122f4);
    return;
  }
  bVar5 = *(byte *)(lVar3 + 0x159) >> 2 & 3;
  if (bVar5 != 1) {
    if (bVar5 == 2) {
      FUN_1433601c0(param_2,"bottom");
      return;
    }
    if (bVar5 != 3) {
      FUN_1433601c0(param_2,&DAT_145b122f4);
      return;
    }
    FUN_1433601c0(param_2,"center");
    return;
  }
  FUN_1433601c0(param_2,&DAT_145b1237c);
  return;
}



// FUNCTION 1435851a0 FUN_1435851a0 body=353 status=ok
// SIG undefined FUN_1435851a0(void)

void FUN_1435851a0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  int *piVar1;
  byte *pbVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == 0) {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar6 = FUN_1435c8e40(local_18,0x5e3,uVar3);
    FUN_1435cbef0(uVar3,uVar6);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x3f8) != '\0') {
    lVar4 = *(longlong *)(param_3 + 0x88);
    lVar5 = *(longlong *)*param_4;
    lVar7 = 0;
    lVar10 = lVar7;
    while (lVar8 = lVar10 + 1, lVar9 = lVar7, *(char *)(lVar5 + lVar10) == (&DAT_145b122f4)[lVar10])
    {
      lVar10 = lVar8;
      if (lVar8 == 5) {
        lVar5 = *(longlong *)(lVar4 + 0xe0);
        pbVar2 = (byte *)(lVar5 + 0x159);
        *pbVar2 = *pbVar2 & 0xcf;
        pbVar2 = (byte *)(lVar5 + 0x15b);
        *pbVar2 = *pbVar2 | 1;
        FUN_143de5880(lVar4);
        return;
      }
    }
    while (lVar10 = lVar9 + 1, *(char *)(lVar5 + lVar9) == "shrink"[lVar9]) {
      lVar9 = lVar10;
      if (lVar10 == 7) {
        lVar5 = *(longlong *)(lVar4 + 0xe0);
        *(byte *)(lVar5 + 0x159) = *(byte *)(lVar5 + 0x159) & 0xdf;
        *(byte *)(lVar5 + 0x159) = *(byte *)(lVar5 + 0x159) | 0x10;
        *(byte *)(lVar5 + 0x15b) = *(byte *)(lVar5 + 0x15b) | 1;
        FUN_143de5880(lVar4);
        return;
      }
    }
    do {
      lVar10 = lVar7 + 1;
      if (*(char *)(lVar5 + lVar7) != (&DAT_145b12390)[lVar7]) goto LAB_1435852f0;
      lVar7 = lVar10;
    } while (lVar10 != 4);
    lVar5 = *(longlong *)(lVar4 + 0xe0);
    *(byte *)(lVar5 + 0x159) = *(byte *)(lVar5 + 0x159) & 0xef;
    *(byte *)(lVar5 + 0x159) = *(byte *)(lVar5 + 0x159) | 0x20;
    *(byte *)(lVar5 + 0x15b) = *(byte *)(lVar5 + 0x15b) | 1;
LAB_1435852f0:
    FUN_143de5880(lVar4);
    return;
  }
  return;
}



// FUNCTION 143585310 FUN_143585310 body=176 status=ok
// SIG undefined FUN_143585310(void)

void FUN_143585310(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar3 = FUN_1435c8e40(local_18,0x5e3,uVar2);
    FUN_1435cbef0(uVar2,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
    return;
  }
  bVar4 = *(byte *)(*(longlong *)(*(longlong *)(param_3 + 0x88) + 0xe0) + 0x159) >> 4 & 3;
  if (bVar4 == 1) {
    FUN_1433601c0(param_2,"shrink");
    return;
  }
  if (bVar4 != 2) {
    FUN_1433601c0(param_2,&DAT_145b122f4);
    return;
  }
  FUN_1433601c0(param_2,&DAT_145b12390);
  return;
}



// FUNCTION 1435853d0 FUN_1435853d0 body=122 status=ok
// SIG undefined FUN_1435853d0(void)

void FUN_1435853d0(longlong param_1,undefined8 param_2,longlong param_3,char param_4)

{
  int *piVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == 0) {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(local_18,0x5e3,uVar3);
    FUN_1435cbef0(uVar3,uVar4);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    if (param_4 == '\0') {
      puVar2 = (uint *)(*(longlong *)(param_3 + 0x88) + 0xfc);
      *puVar2 = *puVar2 | 0x800;
      return;
    }
    puVar2 = (uint *)(*(longlong *)(param_3 + 0x88) + 0xfc);
    *puVar2 = *puVar2 & 0xfffff7ff;
  }
  return;
}



// FUNCTION 143585450 FUN_143585450 body=544 status=ok
// SIG undefined FUN_143585450(void)

void FUN_143585450(longlong param_1,undefined8 param_2,longlong param_3,uint *param_4)

{
  int *piVar1;
  byte *pbVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  char cVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  bool bVar16;
  longlong local_res18 [2];
  undefined1 local_38 [8];
  longlong local_30;
  
  if (param_3 == 0) {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar8 = FUN_1435c8e40(local_38,0x5e3,uVar3);
    FUN_1435cbef0(uVar3,uVar8);
    piVar1 = (int *)(local_30 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    FUN_14335f920();
    return;
  }
  uVar14 = *param_4 & 0x1f;
  lVar11 = *(longlong *)(param_3 + 0x88);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  if (uVar14 == 0xc) {
    bVar16 = *(longlong *)(param_4 + 4) == 0;
LAB_1435854e8:
    if (bVar16) goto LAB_14358561f;
  }
  else if (uVar14 == 10) {
    bVar16 = *(longlong *)(param_4 + 4) == *(longlong *)(*(longlong *)(param_4 + 4) + 8) + 0x80;
    goto LAB_1435854e8;
  }
  if (uVar14 != 0) {
    if (uVar14 != 0xc) {
      puVar12 = (undefined8 *)Scaleform::GFx::DisplayObject::GetName(lVar11,local_res18);
      FUN_1434a1590(lVar11 + 0x18,
                    "%s.setImageSubstitutions() failed: parameter should be either \'null\', object or array"
                    ,*(undefined8 *)*puVar12);
      piVar1 = (int *)(local_res18[0] + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) {
        return;
      }
      FUN_14335f920();
      return;
    }
    lVar5 = *(longlong *)(param_4 + 4);
    cVar7 = FUN_1435c8c20(lVar4,param_4,*(undefined8 *)(lVar4 + 0x248));
    if (cVar7 != '\0') {
      uVar6 = *(ulonglong *)(lVar5 + 0x40);
      uVar15 = 0;
      if (uVar6 == 0) {
        return;
      }
      do {
        puVar9 = (undefined4 *)FUN_1434b4f50(lVar5 + 0x40,uVar15);
        if (((byte)*puVar9 & 0x1f) == 0xc) {
          lVar10 = (**(code **)(*(longlong *)(lVar11 + (ulonglong)*(byte *)(lVar11 + 0x6d) * 4) + 8)
                   )(lVar11 + (ulonglong)*(byte *)(lVar11 + 0x6d) * 4);
          uVar13 = lVar10 - 0x38;
          if (lVar10 == 0) {
            uVar13 = 0;
          }
          FUN_1435f7260(uVar13,lVar4,uVar15 & 0xffffffff,puVar9);
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar6);
      return;
    }
    if (((byte)*param_4 & 0x1f) != 0xc) {
      return;
    }
    lVar11 = (**(code **)(*(longlong *)(lVar11 + (ulonglong)*(byte *)(lVar11 + 0x6d) * 4) + 8))
                       (lVar11 + (ulonglong)*(byte *)(lVar11 + 0x6d) * 4);
    if (lVar11 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = lVar11 + -0x38;
    }
    FUN_1435f7260(lVar11,lVar4,0,param_4);
    return;
  }
LAB_14358561f:
  Scaleform::GFx::TextField::ClearIdImageDescAssoc(lVar11);
  lVar4 = *(longlong *)(lVar11 + 0xe0);
  lVar5 = *(longlong *)(lVar4 + 0x30);
  if (lVar5 != 0) {
    FUN_143403e20(lVar5);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar5);
  }
  *(undefined8 *)(lVar4 + 0x30) = 0;
  pbVar2 = (byte *)(*(longlong *)(lVar11 + 0xe0) + 0x15b);
  *pbVar2 = *pbVar2 | 2;
  FUN_143de5880(lVar11);
  return;
}



// FUNCTION 143585680 FUN_143585680 body=894 status=ok
// SIG undefined FUN_143585680(void)

void FUN_143585680(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,
                  longlong param_5)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  char *pcVar10;
  longlong lVar11;
  RefCountImpl *pRVar12;
  longlong *plVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong *plVar19;
  undefined4 local_res18;
  undefined4 uStackX_1c;
  undefined1 local_78 [8];
  longlong local_70;
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (param_3 == 0) {
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar8 = FUN_1435c8e40(local_78,0x5e3,uVar4);
    FUN_1435cbef0(uVar4,uVar8);
    piVar1 = (int *)(local_70 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    FUN_14335f920();
    return;
  }
  plVar5 = *(longlong **)(param_3 + 0x88);
  plVar16 = (longlong *)plVar5[0x24];
  if (plVar16 == (longlong *)0x0) {
    return;
  }
  FUN_1432c2fb0(&local_res18,*(undefined8 *)*param_4);
  plVar13 = (longlong *)0x0;
  plVar19 = plVar13;
  if (*plVar16 != 0) {
    puVar14 = (ulonglong *)(CONCAT44(uStackX_1c,local_res18) & 0xfffffffffffffffc);
    uVar9 = FUN_1432c4390((longlong)puVar14 + 0xc,*puVar14 & 0x7fffffffffffffff,0x1505);
    lVar6 = *plVar16;
    uVar9 = *(ulonglong *)(lVar6 + 8) & uVar9;
    puVar14 = (ulonglong *)(lVar6 + 0x10 + uVar9 * 0x20);
    if ((*puVar14 != 0xfffffffffffffffe) && (puVar14[1] == uVar9)) {
      uVar15 = CONCAT44(uStackX_1c,local_res18);
      uVar18 = uVar9;
      do {
        if (puVar14[1] == uVar9) {
          pcVar10 = (char *)((puVar14[2] & 0xfffffffffffffffc) + 0xc);
          lVar17 = ((uVar15 & 0xfffffffffffffffc) + 0xc) - (longlong)pcVar10;
          do {
            cVar2 = *pcVar10;
            cVar3 = pcVar10[lVar17];
            if (cVar2 != cVar3) break;
            pcVar10 = pcVar10 + 1;
          } while (cVar3 != '\0');
          if (cVar2 == cVar3) {
            if (-1 < (longlong)uVar18) {
              plVar19 = (longlong *)((uVar18 + 1) * 0x20 + lVar6);
            }
            goto LAB_1435857ec;
          }
        }
        uVar18 = *puVar14;
        if (uVar18 == 0xffffffffffffffff) goto LAB_1435857ec;
        puVar14 = (ulonglong *)(lVar6 + 0x10 + uVar18 * 0x20);
      } while( true );
    }
  }
  uVar15 = CONCAT44(uStackX_1c,local_res18);
LAB_1435857ec:
  plVar16 = plVar19 + 1;
  if (plVar19 == (longlong *)0x0) {
    plVar16 = plVar13;
  }
  iVar7 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar15 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar7 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar15 & 0xfffffffffffffffc);
  }
  if (plVar16 == (longlong *)0x0) {
    return;
  }
  lVar6 = *plVar16;
  if (param_5 == 0) {
    lVar17 = Scaleform::GFx::TextField::CreateImageSubstitutor(plVar5);
    if (lVar17 == 0) {
      return;
    }
    FUN_1433fb0b0(lVar17,lVar6);
    *(byte *)(plVar5[0x1c] + 0x15b) = *(byte *)(plVar5[0x1c] + 0x15b) | 2;
    FUN_143deb2f0(plVar5,*(undefined8 *)*param_4);
    FUN_143de5880(plVar5);
    return;
  }
  lVar17 = FUN_1434f5cb0();
  lVar11 = (**(code **)(*plVar5 + 0x218))(plVar5);
  if (lVar11 != 0) {
    Scaleform::GFx::Resource::AddRef(lVar11);
  }
  iVar7 = (**(code **)(**(longlong **)(lVar17 + 0x18) + 0x18))();
  if (iVar7 == 0) {
    pRVar12 = (RefCountImpl *)(**(code **)(*(longlong *)(lVar11 + 0x18) + 0x18))(lVar11 + 0x18,0xe);
    if (pRVar12 == (RefCountImpl *)0x0) {
      local_res18 = 0x21000;
      FUN_1433db230(&local_res18,"ImageCreator is null in UpdateImageSubstitution");
      goto LAB_1435859a0;
    }
    Scaleform::RefCountImpl::Release(pRVar12);
    local_60 = (**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,plVar5);
    local_68[0] = 3;
    local_58 = 1;
    local_54 = 1;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    pRVar12 = (RefCountImpl *)(**(code **)(*(longlong *)(lVar11 + 0x18) + 0x18))(lVar11 + 0x18,0xe);
    plVar13 = (longlong *)
              (**(code **)(*(longlong *)pRVar12 + 0x20))
                        (pRVar12,local_68,*(undefined8 *)(lVar17 + 0x18));
    Scaleform::RefCountImpl::Release(pRVar12);
  }
  else {
    plVar13 = *(longlong **)(lVar17 + 0x18);
    if (plVar13 == (longlong *)0x0) goto LAB_1435859a0;
    (**(code **)(*plVar13 + 8))(plVar13);
  }
  if (plVar13 != (longlong *)0x0) {
    (**(code **)(*plVar13 + 8))(plVar13);
  }
LAB_1435859a0:
  if (*(longlong **)(lVar6 + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(lVar6 + 0x10) + 0x10))();
  }
  *(longlong **)(lVar6 + 0x10) = plVar13;
  FUN_143de5880(plVar5);
  if (plVar13 != (longlong *)0x0) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
  if (lVar11 != 0) {
    FUN_1432de450(lVar11);
  }
  return;
}



// FUNCTION 143585a10 FUN_143585a10 body=116 status=ok
// SIG undefined FUN_143585a10(void)

void FUN_143585a10(longlong param_1,undefined8 param_2,longlong param_3,char param_4)

{
  int *piVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == 0) {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(local_18,0x5e3,uVar3);
    FUN_1435cbef0(uVar3,uVar4);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    if (param_4 != '\0') {
      puVar2 = (uint *)(*(longlong *)(param_3 + 0x88) + 0xfc);
      *puVar2 = *puVar2 | 8;
      return;
    }
    puVar2 = (uint *)(*(longlong *)(param_3 + 0x88) + 0xfc);
    *puVar2 = *puVar2 & 0xfffffff7;
  }
  return;
}



// FUNCTION 143585a90 FUN_143585a90 body=106 status=ok
// SIG undefined FUN_143585a90(void)

void FUN_143585a90(longlong param_1,byte *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar3 = FUN_1435c8e40(local_18,0x5e3,uVar2);
    FUN_1435cbef0(uVar2,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    *param_2 = (byte)(*(uint *)(*(longlong *)(param_3 + 0x88) + 0xfc) >> 3) & 1;
  }
  return;
}



// FUNCTION 143585b00 FUN_143585b00 body=123 status=ok
// SIG undefined FUN_143585b00(void)

void FUN_143585b00(longlong param_1,undefined8 param_2,longlong param_3,char param_4)

{
  int *piVar1;
  byte *pbVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == 0) {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar5 = FUN_1435c8e40(local_18,0x5e3,uVar3);
    FUN_1435cbef0(uVar3,uVar5);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(param_3 + 0x88) + 0xe0);
    if (param_4 != '\0') {
      pbVar2 = (byte *)(lVar4 + 0x15a);
      *pbVar2 = *pbVar2 | 4;
      return;
    }
    pbVar2 = (byte *)(lVar4 + 0x15a);
    *pbVar2 = *pbVar2 & 0xfb;
  }
  return;
}



// FUNCTION 143585b90 FUN_143585b90 body=139 status=ok
// SIG undefined FUN_143585b90(void)

void FUN_143585b90(longlong param_1,undefined1 *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(local_18,0x5e3,uVar2);
    FUN_1435cbef0(uVar2,uVar4);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_3 + 0x88) + 0xe0);
    if ((((*(byte *)(lVar3 + 0x15a) & 4) != 0) && (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0))
       && ((*(byte *)(lVar3 + 0x10) & 0x10) != 0)) {
      *param_2 = 1;
      return;
    }
    *param_2 = 0;
  }
  return;
}



// FUNCTION 143585c30 FUN_143585c30 body=143 status=ok
// SIG undefined FUN_143585c30(void)

void FUN_143585c30(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(local_18,0x5e3,uVar2);
    FUN_1435cbef0(uVar2,uVar4);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else if ((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x3f8) != '\0') &&
          (lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_3 + 0x88) + 0xe0) + 0xd8),
          lVar3 != 0)) {
    *(undefined4 *)(lVar3 + 0x94) = param_4;
    Scaleform::GFx::Text::EditorKit::InvalidateSelectionColors();
    return;
  }
  return;
}



// FUNCTION 143585cd0 FUN_143585cd0 body=135 status=ok
// SIG undefined FUN_143585cd0(void)

void FUN_143585cd0(longlong param_1,undefined4 *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(local_18,0x5e3,uVar2);
    FUN_1435cbef0(uVar2,uVar4);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else if ((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x3f8) != '\0') &&
          (lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_3 + 0x88) + 0xe0) + 0xd8),
          lVar3 != 0)) {
    *param_2 = *(undefined4 *)(lVar3 + 0x94);
  }
  return;
}



// FUNCTION 143585d60 FUN_143585d60 body=143 status=ok
// SIG undefined FUN_143585d60(void)

void FUN_143585d60(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(local_18,0x5e3,uVar2);
    FUN_1435cbef0(uVar2,uVar4);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else if ((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x3f8) != '\0') &&
          (lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_3 + 0x88) + 0xe0) + 0xd8),
          lVar3 != 0)) {
    *(undefined4 *)(lVar3 + 0x90) = param_4;
    Scaleform::GFx::Text::EditorKit::InvalidateSelectionColors();
    return;
  }
  return;
}



// FUNCTION 143585e00 FUN_143585e00 body=135 status=ok
// SIG undefined FUN_143585e00(void)

void FUN_143585e00(longlong param_1,undefined4 *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(local_18,0x5e3,uVar2);
    FUN_1435cbef0(uVar2,uVar4);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else if ((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x3f8) != '\0') &&
          (lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_3 + 0x88) + 0xe0) + 0xd8),
          lVar3 != 0)) {
    *param_2 = *(undefined4 *)(lVar3 + 0x90);
  }
  return;
}



// FUNCTION 143585e90 FUN_143585e90 body=143 status=ok
// SIG undefined FUN_143585e90(void)

void FUN_143585e90(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(local_18,0x5e3,uVar2);
    FUN_1435cbef0(uVar2,uVar4);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else if ((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x3f8) != '\0') &&
          (lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_3 + 0x88) + 0xe0) + 0xd8),
          lVar3 != 0)) {
    *(undefined4 *)(lVar3 + 0x9c) = param_4;
    Scaleform::GFx::Text::EditorKit::InvalidateSelectionColors();
    return;
  }
  return;
}



// FUNCTION 143585f30 FUN_143585f30 body=135 status=ok
// SIG undefined FUN_143585f30(void)

void FUN_143585f30(longlong param_1,undefined4 *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(local_18,0x5e3,uVar2);
    FUN_1435cbef0(uVar2,uVar4);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else if ((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x3f8) != '\0') &&
          (lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_3 + 0x88) + 0xe0) + 0xd8),
          lVar3 != 0)) {
    *param_2 = *(undefined4 *)(lVar3 + 0x9c);
  }
  return;
}



// FUNCTION 143585fc0 FUN_143585fc0 body=143 status=ok
// SIG undefined FUN_143585fc0(void)

void FUN_143585fc0(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(local_18,0x5e3,uVar2);
    FUN_1435cbef0(uVar2,uVar4);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else if ((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x3f8) != '\0') &&
          (lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_3 + 0x88) + 0xe0) + 0xd8),
          lVar3 != 0)) {
    *(undefined4 *)(lVar3 + 0x98) = param_4;
    Scaleform::GFx::Text::EditorKit::InvalidateSelectionColors();
    return;
  }
  return;
}



// FUNCTION 143586060 FUN_143586060 body=135 status=ok
// SIG undefined FUN_143586060(void)

void FUN_143586060(longlong param_1,undefined4 *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(local_18,0x5e3,uVar2);
    FUN_1435cbef0(uVar2,uVar4);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else if ((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x3f8) != '\0') &&
          (lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_3 + 0x88) + 0xe0) + 0xd8),
          lVar3 != 0)) {
    *param_2 = *(undefined4 *)(lVar3 + 0x98);
  }
  return;
}



// FUNCTION 1435860f0 FUN_1435860f0 body=123 status=ok
// SIG undefined FUN_1435860f0(void)

void FUN_1435860f0(longlong param_1,undefined8 param_2,longlong param_3,char param_4)

{
  int *piVar1;
  byte *pbVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == 0) {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar5 = FUN_1435c8e40(local_18,0x5e3,uVar3);
    FUN_1435cbef0(uVar3,uVar5);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(param_3 + 0x88) + 0xe0);
    if (param_4 != '\0') {
      pbVar2 = (byte *)(lVar4 + 0x15a);
      *pbVar2 = *pbVar2 | 8;
      return;
    }
    pbVar2 = (byte *)(lVar4 + 0x15a);
    *pbVar2 = *pbVar2 & 0xf7;
  }
  return;
}



// FUNCTION 143586180 FUN_143586180 body=114 status=ok
// SIG undefined FUN_143586180(void)

void FUN_143586180(longlong param_1,uint *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar3 = FUN_1435c8e40(local_18,0x5e3,uVar2);
    FUN_1435cbef0(uVar2,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    *param_2 = *(byte *)(*(longlong *)(*(longlong *)(param_3 + 0x88) + 0xe0) + 0x15a) >> 3 & 1;
  }
  return;
}



// FUNCTION 143586200 FUN_143586200 body=48 status=ok
// SIG undefined FUN_143586200(void)

undefined8 * FUN_143586200(undefined8 *param_1)

{
  FUN_14351fed0();
  *param_1 = &PTR_ForEachChild_GC_145b46948;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  return param_1;
}



// FUNCTION 143586260 FUN_143586260 body=237 status=ok
// SIG undefined FUN_143586260(void)

longlong * FUN_143586260(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  FUN_143517380();
  puVar1 = (ulonglong *)(param_1 + 0x68);
  lVar3 = *param_2;
  *(undefined1 *)(lVar3 + 0x84) = *(undefined1 *)(param_1 + 0x84);
  puVar2 = (ulonglong *)(lVar3 + 0x68);
  *(undefined1 *)(lVar3 + 0x85) = *(undefined1 *)(param_1 + 0x85);
  *(undefined1 *)(lVar3 + 0x86) = *(undefined1 *)(param_1 + 0x86);
  *(undefined4 *)(lVar3 + 0x60) = *(undefined4 *)(param_1 + 0x60);
  if (puVar1 != puVar2) {
    uVar4 = *puVar1;
    if (uVar4 != 0) {
      *(uint *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1U & 0x8fffffff;
    }
    uVar4 = *puVar2;
    if (uVar4 != 0) {
      if ((uVar4 & 1) == 0) {
        if ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *puVar2 = uVar4 - 1;
      }
    }
    *puVar2 = *puVar1;
  }
  *(undefined8 *)(lVar3 + 0x70) = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(lVar3 + 0x78) = *(undefined8 *)(param_1 + 0x78);
  *(undefined4 *)(lVar3 + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(lVar3 + 0x88) = *(undefined4 *)(param_1 + 0x88);
  return param_2;
}



// FUNCTION 143586360 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b46a20;
  return param_1;
}



// FUNCTION 143586390 FUN_143586390 body=181 status=ok
// SIG undefined FUN_143586390(void)

void FUN_143586390(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14351fed0(puVar1,param_3);
    *puVar1 = &PTR_ForEachChild_GC_145b46948;
    puVar1[0x11] = 0;
    *(undefined4 *)(puVar1 + 0x12) = 0;
  }
  local_20 = 0;
  local_28[0] = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar1);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 143586450 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143586480 FUN_143586480 body=248 status=ok
// SIG undefined FUN_143586480(void)

undefined8 * FUN_143586480(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar3,param_2,&PTR_DAT_145b45c18);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar3,param_2,&PTR_DAT_145b45c18);
    *puVar3 = &PTR_FUN_145b46a20;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x60);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *(undefined4 *)(puVar3 + 10) = 0;
    *puVar3 = &PTR_ForEachChild_GC_145b23ad8;
    *(undefined4 *)((longlong)puVar3 + 0x54) = 1;
    *(undefined4 *)(puVar3 + 0xb) = 2;
  }
  return param_1;
}



// FUNCTION 143586580 FUN_143586580 body=54 status=ok
// SIG undefined FUN_143586580(void)

undefined8 * FUN_143586580(undefined8 *param_1)

{
  FUN_1435b37d0();
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = &PTR_ForEachChild_GC_145b23ad8;
  *(undefined4 *)((longlong)param_1 + 0x54) = 1;
  *(undefined4 *)(param_1 + 0xb) = 2;
  return param_1;
}



// FUNCTION 1435865c0 FUN_1435865c0 body=40 status=ok
// SIG undefined FUN_1435865c0(void)

undefined8 * FUN_1435865c0(undefined8 *param_1)

{
  FUN_143525b10();
  *(undefined4 *)(param_1 + 0xf) = 0;
  *param_1 = &PTR_ForEachChild_GC_145b46a98;
  return param_1;
}



// FUNCTION 143586610 Clone body=113 status=ok
// SIG undefined Clone(void)

longlong *
Scaleform::GFx::AS3::Instances::fl_gfx::KeyboardEventEx::Clone(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  FUN_143517380();
  lVar1 = *param_2;
  *(undefined4 *)(lVar1 + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(lVar1 + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(lVar1 + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined1 *)(lVar1 + 0x6c) = *(undefined1 *)(param_1 + 0x6c);
  *(undefined1 *)(lVar1 + 0x70) = *(undefined1 *)(param_1 + 0x70);
  *(undefined1 *)(lVar1 + 0x71) = *(undefined1 *)(param_1 + 0x71);
  *(undefined1 *)(lVar1 + 0x72) = *(undefined1 *)(param_1 + 0x72);
  *(undefined1 *)(lVar1 + 0x73) = *(undefined1 *)(param_1 + 0x73);
  *(undefined4 *)(lVar1 + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(lVar1 + 0x78) = *(undefined4 *)(param_1 + 0x78);
  return param_2;
}



// FUNCTION 143586690 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b46b70;
  return param_1;
}



// FUNCTION 1435866c0 FUN_1435866c0 body=171 status=ok
// SIG undefined FUN_1435866c0(void)

void FUN_1435866c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_143525b10(puVar1,param_3);
    *puVar1 = &PTR_ForEachChild_GC_145b46a98;
    *(undefined4 *)(puVar1 + 0xf) = 0;
  }
  local_20 = 0;
  local_28[0] = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar1);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 143586780 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1435867b0 FUN_1435867b0 body=214 status=ok
// SIG undefined FUN_1435867b0(void)

undefined8 * FUN_1435867b0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar2,param_2,&PTR_DAT_145b45300);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar2,param_2,&PTR_DAT_145b45300);
    *puVar2 = &PTR_FUN_145b46b70;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143586890 FUN_143586890 body=33 status=ok
// SIG undefined FUN_143586890(void)

undefined8 * FUN_143586890(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1435868c0 FUN_1435868c0 body=216 status=ok
// SIG undefined FUN_1435868c0(void)

undefined8 * FUN_1435868c0(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b45790);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b45790);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,200,0);
  if (lVar3 != 0) {
    FUN_1435869a0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 1435869a0 FUN_1435869a0 body=287 status=ok
// SIG undefined FUN_1435869a0(void)

undefined8 * FUN_1435869a0(undefined8 *param_1)

{
  FUN_1435b37d0();
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = &PTR_ForEachChild_GC_145b26540;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0xff00;
  *(undefined4 *)(param_1 + 0xb) = 0xff01;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0xff02;
  *(undefined4 *)(param_1 + 0xc) = 0xff03;
  *(undefined4 *)((longlong)param_1 + 100) = 0xff04;
  *(undefined4 *)(param_1 + 0xd) = 0xff05;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0xff06;
  *(undefined4 *)(param_1 + 0xe) = 0xff07;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0xff08;
  *(undefined4 *)(param_1 + 0xf) = 0xff09;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0xff0a;
  *(undefined4 *)(param_1 + 0x10) = 0xff0b;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0xff0c;
  *(undefined4 *)(param_1 + 0x11) = 0xff0d;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0xff0f;
  *(undefined4 *)(param_1 + 0x12) = 0xff10;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0xff11;
  *(undefined4 *)(param_1 + 0x13) = 0xff12;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0xff13;
  *(undefined4 *)(param_1 + 0x14) = 0xff14;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0xff15;
  *(undefined4 *)(param_1 + 0x15) = 0xff16;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0xff17;
  *(undefined4 *)(param_1 + 0x16) = 0xff18;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0xff19;
  *(undefined4 *)(param_1 + 0x17) = 0xff1a;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0xff1b;
  *(undefined4 *)(param_1 + 0x18) = 0xff1c;
  return param_1;
}



// FUNCTION 143586ae0 FUN_143586ae0 body=137 status=ok
// SIG undefined FUN_143586ae0(void)

undefined8 * FUN_143586ae0(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  FUN_143517270();
  *param_1 = &PTR_ForEachChild_GC_145b46be8;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  lVar2 = FUN_143360950(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218),
                        "gamePadAnalogChange",0x13);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 2;
  piVar1 = (int *)(param_1[8] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  param_1[8] = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar2);
  }
  return param_1;
}



// FUNCTION 143586b90 FUN_143586b90 body=422 status=ok
// SIG undefined FUN_143586b90(void)

ulonglong * FUN_143586b90(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  byte bVar4;
  byte bVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  lVar10 = FUN_1435b5bc0(uVar6);
  if (lVar10 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = FUN_143586ae0(lVar10,uVar6);
  }
  lVar10 = *(longlong *)(param_1 + 0x40);
  piVar1 = (int *)(lVar10 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*(longlong *)(uVar11 + 0x40) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *(longlong *)(uVar11 + 0x40) = lVar10;
  puVar2 = (ulonglong *)(param_1 + 0x48);
  puVar3 = (ulonglong *)(uVar11 + 0x48);
  if (puVar2 != puVar3) {
    uVar7 = *puVar2;
    if (uVar7 != 0) {
      *(uint *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1U & 0x8fffffff;
    }
    uVar7 = *puVar3;
    if (uVar7 != 0) {
      if ((uVar7 & 1) == 0) {
        if ((*(uint *)(uVar7 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *puVar3 = uVar7 - 1;
      }
    }
    *puVar3 = *puVar2;
  }
  puVar2 = (ulonglong *)(param_1 + 0x50);
  puVar3 = (ulonglong *)(uVar11 + 0x50);
  if (puVar2 != puVar3) {
    uVar7 = *puVar2;
    if (uVar7 != 0) {
      *(uint *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1U & 0x8fffffff;
    }
    uVar7 = *puVar3;
    if (uVar7 != 0) {
      if ((uVar7 & 1) == 0) {
        if ((*(uint *)(uVar7 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *puVar3 = uVar7 - 1;
      }
    }
    *puVar3 = *puVar2;
  }
  *(undefined4 *)(uVar11 + 0x58) = *(undefined4 *)(param_1 + 0x58);
  bVar4 = *(byte *)(uVar11 + 0x5c);
  bVar5 = *(byte *)(param_1 + 0x5c);
  *param_2 = uVar11;
  *(byte *)(uVar11 + 0x5c) = *(byte *)(uVar11 + 0x5c) ^ (bVar4 ^ bVar5) & 1;
  *(byte *)(uVar11 + 0x5c) =
       *(byte *)(uVar11 + 0x5c) ^ (*(byte *)(uVar11 + 0x5c) ^ *(byte *)(param_1 + 0x5c)) & 2;
  *(byte *)(uVar11 + 0x5c) =
       *(byte *)(uVar11 + 0x5c) ^ (*(byte *)(uVar11 + 0x5c) ^ *(byte *)(param_1 + 0x5c)) & 4;
  *(byte *)(uVar11 + 0x5c) =
       *(byte *)(uVar11 + 0x5c) ^ (*(byte *)(uVar11 + 0x5c) ^ *(byte *)(param_1 + 0x5c)) & 8;
  *(byte *)(uVar11 + 0x5c) =
       *(byte *)(uVar11 + 0x5c) ^ (*(byte *)(uVar11 + 0x5c) ^ *(byte *)(param_1 + 0x5c)) & 0x10;
  *(undefined4 *)(uVar11 + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(uVar11 + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined8 *)(uVar11 + 0x68) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(uVar11 + 0x70) = *(undefined8 *)(param_1 + 0x70);
  uVar8 = *(int *)(uVar11 + 8) + 1;
  uVar9 = uVar8 & 0x8fffffff;
  *(uint *)(uVar11 + 8) = uVar9;
  if (((uVar11 & 1) == 0) && ((uVar8 & 0x3fffff) != 0)) {
    *(uint *)(uVar11 + 8) = uVar9 - 1;
    FUN_1434ef880(uVar11);
  }
  return param_2;
}



// FUNCTION 143586d40 FUN_143586d40 body=283 status=ok
// SIG undefined FUN_143586d40(void)

void FUN_143586d40(longlong param_1,uint param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  if (param_2 < 3) {
    uVar4 = FUN_1435c8e40(local_18,0x427,uVar2);
    FUN_1435cbef0(uVar2,uVar4);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    switch(param_2) {
    default:
      FUN_143590af0(param_3 + 0xa0,local_res10,&local_res8);
      *(undefined8 *)(param_1 + 0x70) = local_res8;
    case 5:
      FUN_143590af0(param_3 + 0x80,local_res10,&local_res8);
      *(undefined8 *)(param_1 + 0x68) = local_res8;
    case 4:
      FUN_143590eb0(param_3 + 0x60,local_res10,param_1 + 100);
    case 3:
      FUN_143590eb0(param_3 + 0x40,local_res10,param_1 + 0x60);
      bVar3 = FUN_1435909c0(param_3 + 0x20);
      *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xfd;
      *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) | (bVar3 & 1) * '\x02';
      bVar3 = FUN_1435909c0(param_3);
      *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xfe;
      *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) | bVar3 & 1;
    }
  }
  return;
}



// FUNCTION 143586f00 FUN_143586f00 body=75 status=ok
// SIG undefined FUN_143586f00(void)

void FUN_143586f00(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong local_res8 [4];
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0xd0))(param_1,local_res8);
  FUN_1434f0700(param_2,*puVar1);
  if (((local_res8[0] != 0) && ((local_res8[0] & 1) == 0)) &&
     ((*(uint *)(local_res8[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8[0] + 8) = *(uint *)(local_res8[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 143586f60 FUN_143586f60 body=893 status=ok
// SIG undefined FUN_143586f60(void)

void FUN_143586f60(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong local_res8;
  uint local_158 [2];
  undefined8 local_150;
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  uint local_38 [8];
  
  local_158[0] = 0;
  local_150 = 0;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),
                             "GamePadAnalogEvent",0x12);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_138,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),&DAT_145af4d3c,4);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_118,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"bubbles",7);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_f8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"cancelable",10);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_d8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"eventPhase",10);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_b8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),&DAT_145b2b8e4,4);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_98,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"controllerIdx",
                             0xd);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_78,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"xvalue",6);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_58,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"yvalue",6);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_38,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  lVar4 = 9;
  FUN_143518160(param_1,local_158,9,local_138);
  FUN_1435911f0(local_158,&local_res8,param_2);
  puVar3 = &stack0xffffffffffffffe8;
  do {
    puVar2 = (uint *)(puVar3 + -0x20);
    puVar3 = puVar3 + -0x20;
    lVar4 = lVar4 + -1;
    if (9 < ((byte)*puVar2 & 0x1f)) {
      if ((*puVar2 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar3);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar4 != 0);
  if (9 < ((byte)local_158[0] & 0x1f)) {
    if ((local_158[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_158);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 1435872f0 FUN_1435872f0 body=85 status=ok
// SIG undefined FUN_1435872f0(void)

undefined8 * FUN_1435872f0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulonglong local_res8 [4];
  
  *param_2 = 0;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0xd0))(param_1,local_res8);
  FUN_1434f0700(param_2,*puVar1);
  if (((local_res8[0] != 0) && ((local_res8[0] & 1) == 0)) &&
     ((*(uint *)(local_res8[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8[0] + 8) = *(uint *)(local_res8[0] + 8) - 1;
    FUN_1434ef880();
  }
  return param_2;
}



// FUNCTION 143587350 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b46cc0;
  return param_1;
}



// FUNCTION 143587380 FUN_143587380 body=141 status=ok
// SIG undefined FUN_143587380(void)

void FUN_143587380(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  lVar1 = FUN_1435b5bc0(param_3);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_143586ae0(lVar1,param_3);
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,uVar2);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 143587420 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143587450 FUN_143587450 body=238 status=ok
// SIG undefined FUN_143587450(void)

undefined8 * FUN_143587450(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar3,param_2,&PTR_DAT_145b43fa0);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar3,param_2,&PTR_DAT_145b43fa0);
    *puVar3 = &PTR_FUN_145b46cc0;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x58);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b231d0;
    puVar3[10] = "gamePadAnalogChange";
  }
  return param_1;
}



// FUNCTION 143587550 UFlowNodeBlueprint body=44 status=ok
// SIG undefined UFlowNodeBlueprint(void)

undefined8 * UFlowNodeBlueprint::UFlowNodeBlueprint(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b231d0;
  param_1[10] = "gamePadAnalogChange";
  return param_1;
}


