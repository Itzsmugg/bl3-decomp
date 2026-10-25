// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140833170 FUN_140833170 body=998 status=ok
// SIG undefined FUN_140833170(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140833170(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  longlong lVar10;
  byte bVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  ushort *puVar20;
  uint uVar21;
  undefined8 uVar22;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dd;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined1 auStack_148 [72];
  ushort *local_100;
  longlong local_f8;
  longlong *local_f0;
  ulonglong local_e8;
  undefined1 local_e0 [16];
  undefined4 local_d0;
  undefined4 uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint local_c0;
  undefined8 local_bc;
  uint local_b4;
  uint uStack_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  ulonglong local_80;
  
  uVar8 = uRam000000014685ecbc;
  uVar7 = uRam000000014685ecb8;
  uVar6 = uRam000000014685ecb4;
  uVar5 = _DAT_14685ecb0;
  local_80 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_100 = (ushort *)(*param_1 + 0x10);
  if (*(char *)(*param_1 + 0x1a) == '\0') {
    local_d0 = 0;
    uStack_cc = 0;
    uVar24 = 0;
    uVar25 = 0;
  }
  else {
    local_d0 = 0x3f800000;
    uStack_cc = 0x3f800000;
    uVar24 = 0x3f800000;
    uVar25 = 0x3f800000;
  }
  uVar4 = CONCAT44(uStack_cc,local_d0);
  uVar14 = 0;
  uVar17 = *(uint *)(param_1 + 0xe);
  uVar16 = *(uint *)((longlong)param_1 + 0x74);
  uVar18 = *(uint *)(param_1 + 0xf);
  uVar21 = *(uint *)((longlong)param_1 + 0x7c);
  local_bc = 0;
  local_b4 = 0;
  uStack_b0 = 0;
  if (*local_100 != 0) {
    local_e8 = (ulonglong)*local_100;
    local_f8 = 0;
    uVar15 = uVar14;
    uVar13 = uVar14;
    uVar19 = uVar14;
    puVar20 = local_100;
    local_f0 = param_2;
    uStack_c8 = uVar24;
    uStack_c4 = uVar25;
    local_ac = uVar17;
    local_a8 = uVar16;
    local_a4 = uVar18;
    local_a0 = uVar21;
    do {
      puVar9 = local_100;
      uVar12 = 1 << (0x1f - ((byte)uVar13 & 0x1f) & 0x1f);
      if ((*(uint *)(param_1[4] + (uVar13 >> 5) * 4) & uVar12) == 0) {
        if ((*(uint *)(param_1[2] + (uVar13 >> 5) * 4) & uVar12) == 0) {
          uVar17 = uVar17 + 0x10;
          if (*(char *)((longlong)param_1 + 0x3d) != '\0') {
            uVar18 = uVar17 * 8;
            uVar21 = (uVar16 + 0x10) * 8;
            local_a0 = uVar21;
            local_a4 = uVar18;
          }
          uVar16 = uVar16 + 0x10;
          local_ac = uVar17;
          local_a8 = uVar16;
          if ((puVar20[4] & 1) != 0) {
            uStack_b0 = (int)uVar14 + (uint)*(byte *)((longlong)param_1 + 0x3c) * 2;
            uVar14 = (ulonglong)uStack_b0;
          }
        }
        else {
          uVar12 = (int)uVar15 + 0x10;
          uVar15 = (ulonglong)uVar12;
          local_bc = CONCAT44(local_bc._4_4_,uVar12);
        }
      }
      iVar3 = (int)uVar13;
      uVar13 = (ulonglong)(iVar3 + 1U >> 5);
      uVar12 = 1 << (0x1f - ((byte)(iVar3 + 1U) & 0x1f) & 0x1f);
      if ((*(uint *)(param_1[4] + uVar13 * 4) & uVar12) == 0) {
        if ((*(uint *)(param_1[2] + uVar13 * 4) & uVar12) == 0) {
          cVar2 = *(char *)((longlong)param_1 + 0x3d);
          bVar11 = (&DAT_144108ae8)[*(byte *)(param_1[8] + uVar19)] * '\x03';
          if (cVar2 != '\0') {
            bVar11 = bVar11 + 0xf & 0xf0;
          }
          uVar18 = uVar18 + bVar11;
          if (cVar2 != '\0') {
            uVar17 = uVar18 >> 3;
            local_ac = uVar17;
          }
          bVar11 = (&DAT_144108ae8)[*(byte *)(param_1[9] + uVar19)] * '\x03';
          if (cVar2 != '\0') {
            bVar11 = bVar11 + 0xf & 0xf0;
          }
          uVar21 = uVar21 + bVar11;
          if (cVar2 != '\0') {
            uVar16 = uVar21 >> 3;
            local_a8 = uVar16;
          }
          local_b4 = (int)uVar19 + 1;
          uVar19 = (ulonglong)local_b4;
          local_bc = CONCAT44(local_bc._4_4_ + 0x18,(undefined4)local_bc);
          local_a4 = uVar18;
          local_a0 = uVar21;
          if ((local_100[4] & 2) != 0) {
            uStack_b0 = (int)uVar14 + 6;
            uVar14 = (ulonglong)uStack_b0;
          }
        }
        else {
          uVar12 = (int)uVar15 + 0xc;
          uVar15 = (ulonglong)uVar12;
          local_bc = CONCAT44(local_bc._4_4_,uVar12);
        }
      }
      local_c0 = iVar3 + 2;
      uVar13 = (ulonglong)local_c0;
      lVar10 = local_f0[1];
      if (*(short *)(local_f8 + lVar10) == -1) {
        if (*(char *)((longlong)local_100 + 9) != '\0') {
          uVar12 = 1 << (0x1f - ((byte)local_c0 & 0x1f) & 0x1f);
          if ((*(uint *)(param_1[4] + (ulonglong)(local_c0 >> 5) * 4) & uVar12) == 0) {
            if ((*(uint *)(param_1[2] + (ulonglong)(local_c0 >> 5) * 4) & uVar12) == 0) {
              cVar2 = *(char *)((longlong)param_1 + 0x3d);
              bVar11 = (&DAT_144108ae8)[*(byte *)(param_1[8] + uVar19)] * '\x03';
              if (cVar2 != '\0') {
                bVar11 = bVar11 + 0xf & 0xf0;
              }
              uVar18 = uVar18 + bVar11;
              if (cVar2 != '\0') {
                uVar17 = uVar18 >> 3;
                local_ac = uVar17;
              }
              bVar11 = (&DAT_144108ae8)[*(byte *)(param_1[9] + uVar19)] * '\x03';
              if (cVar2 != '\0') {
                bVar11 = bVar11 + 0xf & 0xf0;
              }
              uVar21 = uVar21 + bVar11;
              if (cVar2 != '\0') {
                uVar16 = uVar21 >> 3;
                local_a8 = uVar16;
              }
              local_b4 = (int)uVar19 + 1;
              uVar19 = (ulonglong)local_b4;
              local_bc = CONCAT44(local_bc._4_4_ + 0x18,(undefined4)local_bc);
              local_a4 = uVar18;
              local_a0 = uVar21;
              if ((local_100[4] & 4) != 0) {
                uStack_b0 = (int)uVar14 + 6;
                uVar14 = (ulonglong)uStack_b0;
              }
            }
            else {
              uVar12 = (int)uVar15 + 0xc;
              uVar15 = (ulonglong)uVar12;
              local_bc = CONCAT44(local_bc._4_4_,uVar12);
            }
          }
          uVar13 = (ulonglong)(iVar3 + 3);
        }
      }
      else {
        uVar12 = uVar24;
        uVar23 = uVar25;
        uVar22 = uVar4;
        if (*(char *)((longlong)local_100 + 9) != '\0') {
          uVar22 = FUN_140831920(local_e0,local_100,param_1,&local_c0);
          lVar10 = local_f0[1];
          uVar14 = (ulonglong)uStack_b0;
          uVar19 = (ulonglong)local_b4;
          uVar15 = local_bc & 0xffffffff;
          uVar13 = (ulonglong)local_c0;
          uVar12 = extraout_XMM0_Dc;
          uVar23 = extraout_XMM0_Dd;
          uVar17 = local_ac;
          uVar16 = local_a8;
          uVar18 = local_a4;
          uVar21 = local_a0;
        }
        puVar1 = (uint *)(*local_f0 + 0x20 + (ulonglong)*(ushort *)(lVar10 + local_f8) * 0x30);
        *puVar1 = (uint)uVar22 & uVar5;
        puVar1[1] = (uint)((ulonglong)uVar22 >> 0x20) & uVar6;
        puVar1[2] = uVar12 & uVar7;
        puVar1[3] = uVar23 & uVar8;
      }
      local_f8 = local_f8 + 2;
      local_e8 = local_e8 - 1;
      puVar20 = puVar9;
    } while (local_e8 != 0);
  }
  return;
}



// FUNCTION 140833560 FUN_140833560 body=1759 status=ok
// SIG undefined FUN_140833560(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140833560(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  ulonglong uVar9;
  byte bVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined8 uVar18;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dd;
  undefined1 auStack_1b8 [56];
  ushort local_180;
  uint local_140;
  undefined1 local_100 [2];
  ushort local_fe;
  longlong *local_f8;
  uint local_c0;
  int local_bc;
  uint uStack_b8;
  uint local_b4;
  int iStack_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  ulonglong local_80;
  
  uVar6 = uRam000000014685ecbc;
  uVar5 = uRam000000014685ecb8;
  uVar4 = uRam000000014685ecb4;
  uVar3 = _DAT_14685ecb0;
  local_80 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  lVar2 = *param_1;
  uVar9 = 0;
  local_140 = 0;
  local_bc = 0;
  uStack_b8 = 0;
  local_fe = *(ushort *)(lVar2 + 0x10);
  uVar15 = *(uint *)(param_1 + 0xe);
  uVar14 = *(uint *)((longlong)param_1 + 0x74);
  uVar17 = *(uint *)(param_1 + 0xf);
  uVar13 = *(uint *)((longlong)param_1 + 0x7c);
  local_b4 = 0;
  iStack_b0 = 0;
  local_180 = 0;
  uVar12 = uVar9;
  uVar16 = uVar9;
  local_f8 = param_2;
  local_ac = uVar15;
  local_a8 = uVar14;
  local_a4 = uVar17;
  local_a0 = uVar13;
  if (local_fe != 0) {
    do {
      local_c0 = (uint)uVar12;
      uVar11 = 1 << (0x1f - ((byte)uVar12 & 0x1f) & 0x1f);
      if ((*(uint *)(param_1[4] + (uVar12 >> 5) * 4) & uVar11) == 0) {
        cVar7 = *(char *)(lVar2 + 0x14);
        if ((*(uint *)(param_1[2] + (uVar12 >> 5) * 4) & uVar11) == 0) {
          if (cVar7 == '\x04') {
            cVar7 = *(char *)((longlong)param_1 + 0x3d);
            bVar10 = (&DAT_144108ae8)[*(byte *)(param_1[8] + uVar16)] * '\x03';
            if (cVar7 != '\0') {
              bVar10 = bVar10 + 0xf & 0xf0;
            }
            uVar17 = uVar17 + bVar10;
            if (cVar7 != '\0') {
              uVar15 = *(uint *)(param_1 + 0xf) >> 3;
              local_ac = uVar15;
            }
            bVar10 = (&DAT_144108ae8)[*(byte *)(param_1[9] + uVar16)] * '\x03';
            if (cVar7 != '\0') {
              bVar10 = bVar10 + 0xf & 0xf0;
            }
            uVar13 = uVar13 + bVar10;
            if (cVar7 != '\0') {
              uVar14 = *(uint *)((longlong)param_1 + 0x7c) >> 3;
              local_a8 = uVar14;
            }
            local_b4 = (int)uVar16 + 1;
            uVar16 = (ulonglong)local_b4;
            local_c0 = local_140;
            local_a4 = uVar17;
            local_a0 = uVar13;
          }
          else {
            if (cVar7 == '\0') {
              iVar8 = 0x10;
            }
            else if (cVar7 == '\x01') {
              iVar8 = 0xc;
            }
            else if (cVar7 == '\x02') {
              iVar8 = 6;
            }
            else if (cVar7 == '\x03') {
              iVar8 = 4;
            }
            else {
              iVar8 = 0;
            }
            uVar15 = uVar15 + iVar8;
            if (*(char *)((longlong)param_1 + 0x3d) != '\0') {
              uVar17 = uVar15 * 8;
              local_a4 = uVar17;
            }
            uVar14 = uVar14 + iVar8;
            local_ac = uVar15;
            local_a8 = uVar14;
            if (*(char *)((longlong)param_1 + 0x3d) != '\0') {
              uVar13 = uVar14 * 8;
              local_a0 = uVar13;
            }
          }
          if ((*(byte *)(lVar2 + 0x17) & 1) != 0) {
            uStack_b8 = (int)uVar9 + (uint)*(byte *)((longlong)param_1 + 0x3c) * 8;
          }
          if ((*(byte *)(lVar2 + 0x18) & 1) != 0) {
            iStack_b0 = iStack_b0 + (uint)*(byte *)((longlong)param_1 + 0x3c) * 2;
          }
        }
        else {
          if (cVar7 == '\x04') {
            cVar7 = '\x01';
          }
          if (cVar7 == '\0') {
            local_bc = local_bc + 0x10;
          }
          else if (cVar7 == '\x01') {
            local_bc = local_bc + 0xc;
          }
          else if (cVar7 == '\x02') {
            local_bc = local_bc + 6;
          }
          else if (cVar7 == '\x03') {
            local_bc = local_bc + 4;
          }
        }
      }
      local_140 = local_c0 + 1;
      uVar12 = (ulonglong)local_180;
      if (*(short *)(local_f8[1] + uVar12 * 2) == -1) {
        uVar11 = 1 << (0x1f - ((byte)local_140 & 0x1f) & 0x1f);
        if ((*(uint *)(param_1[4] + (ulonglong)(local_140 >> 5) * 4) & uVar11) == 0) {
          if ((*(uint *)(param_1[2] + (ulonglong)(local_140 >> 5) * 4) & uVar11) == 0) {
            cVar7 = *(char *)(lVar2 + 0x15);
            if (cVar7 == '\x03') {
              cVar7 = *(char *)((longlong)param_1 + 0x3d);
              bVar10 = (&DAT_144108ae8)[*(byte *)(param_1[8] + uVar16)] * '\x03';
              if (cVar7 != '\0') {
                bVar10 = bVar10 + 0xf & 0xf0;
              }
              uVar17 = uVar17 + bVar10;
              if (cVar7 != '\0') {
                uVar15 = uVar17 >> 3;
                local_ac = uVar15;
              }
              bVar10 = (&DAT_144108ae8)[*(byte *)(param_1[9] + uVar16)] * '\x03';
              if (cVar7 != '\0') {
                bVar10 = bVar10 + 0xf & 0xf0;
              }
              uVar13 = uVar13 + bVar10;
              if (cVar7 != '\0') {
                uVar14 = uVar13 >> 3;
                local_a8 = uVar14;
              }
              local_b4 = (int)uVar16 + 1;
              uVar16 = (ulonglong)local_b4;
              local_a4 = uVar17;
              local_a0 = uVar13;
            }
            else {
              if (cVar7 == '\0') {
                iVar8 = 0xc;
              }
              else if (cVar7 == '\x01') {
                iVar8 = 6;
              }
              else if (cVar7 == '\x02') {
                iVar8 = 4;
              }
              else {
                iVar8 = 0;
              }
              uVar15 = uVar15 + iVar8;
              if (*(char *)((longlong)param_1 + 0x3d) != '\0') {
                uVar17 = uVar15 * 8;
                local_a4 = uVar17;
              }
              uVar14 = uVar14 + iVar8;
              local_ac = uVar15;
              local_a8 = uVar14;
              if (*(char *)((longlong)param_1 + 0x3d) != '\0') {
                uVar13 = uVar14 * 8;
                local_a0 = uVar13;
              }
            }
            if ((*(byte *)(lVar2 + 0x17) & 2) != 0) {
              uStack_b8 = uStack_b8 + 0x18;
            }
            if ((*(byte *)(lVar2 + 0x18) & 2) != 0) {
              iStack_b0 = iStack_b0 + 6;
            }
          }
          else {
            local_bc = local_bc + 0xc;
          }
        }
        local_c0 = local_c0 + 2;
      }
      else {
        local_c0 = local_140;
        uVar18 = FUN_140831c40(local_100,lVar2 + 0x10,param_1,&local_c0);
        uVar16 = (ulonglong)local_b4;
        puVar1 = (uint *)(*local_f8 + 0x10 + (ulonglong)*(ushort *)(local_f8[1] + uVar12 * 2) * 0x30
                         );
        *puVar1 = uVar3 & (uint)uVar18;
        puVar1[1] = uVar4 & (uint)((ulonglong)uVar18 >> 0x20);
        puVar1[2] = uVar5 & extraout_XMM0_Dc;
        puVar1[3] = uVar6 & extraout_XMM0_Dd;
        uVar15 = local_ac;
        uVar14 = local_a8;
        uVar17 = local_a4;
        uVar13 = local_a0;
      }
      if (*(char *)(lVar2 + 0x19) != '\0') {
        uVar11 = 1 << (0x1f - ((byte)local_c0 & 0x1f) & 0x1f);
        if ((*(uint *)(param_1[4] + (ulonglong)(local_c0 >> 5) * 4) & uVar11) == 0) {
          if ((*(uint *)(param_1[2] + (ulonglong)(local_c0 >> 5) * 4) & uVar11) == 0) {
            cVar7 = *(char *)(lVar2 + 0x16);
            if (cVar7 == '\x03') {
              cVar7 = *(char *)((longlong)param_1 + 0x3d);
              bVar10 = (&DAT_144108ae8)[*(byte *)(param_1[8] + uVar16)] * '\x03';
              if (cVar7 != '\0') {
                bVar10 = bVar10 + 0xf & 0xf0;
              }
              uVar17 = uVar17 + bVar10;
              if (cVar7 != '\0') {
                uVar15 = uVar17 >> 3;
                local_ac = uVar15;
              }
              bVar10 = (&DAT_144108ae8)[*(byte *)(param_1[9] + uVar16)] * '\x03';
              if (cVar7 != '\0') {
                bVar10 = bVar10 + 0xf & 0xf0;
              }
              uVar13 = uVar13 + bVar10;
              if (cVar7 != '\0') {
                uVar14 = uVar13 >> 3;
                local_a8 = uVar14;
              }
              local_b4 = (int)uVar16 + 1;
              uVar16 = (ulonglong)local_b4;
              local_a4 = uVar17;
              local_a0 = uVar13;
            }
            else {
              if (cVar7 == '\0') {
                iVar8 = 0xc;
              }
              else if (cVar7 == '\x01') {
                iVar8 = 6;
              }
              else if (cVar7 == '\x02') {
                iVar8 = 4;
              }
              else {
                iVar8 = 0;
              }
              uVar15 = uVar15 + iVar8;
              if (*(char *)((longlong)param_1 + 0x3d) != '\0') {
                uVar17 = uVar15 * 8;
                local_a4 = uVar17;
              }
              uVar14 = uVar14 + iVar8;
              local_ac = uVar15;
              local_a8 = uVar14;
              if (*(char *)((longlong)param_1 + 0x3d) != '\0') {
                uVar13 = uVar14 * 8;
                local_a0 = uVar13;
              }
            }
            if ((*(byte *)(lVar2 + 0x17) & 4) != 0) {
              uStack_b8 = uStack_b8 + 0x18;
            }
            if ((*(byte *)(lVar2 + 0x18) & 4) != 0) {
              iStack_b0 = iStack_b0 + 6;
            }
          }
          else {
            local_bc = local_bc + 0xc;
          }
        }
        local_c0 = local_c0 + 1;
      }
      uVar9 = (ulonglong)uStack_b8;
      local_180 = local_180 + 1;
      uVar12 = (ulonglong)local_c0;
      local_140 = local_c0;
    } while (local_180 < local_fe);
  }
  return;
}



// FUNCTION 140833c40 FUN_140833c40 body=861 status=ok
// SIG undefined FUN_140833c40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140833c40(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dd;
  undefined1 auStack_138 [56];
  int local_100;
  undefined1 local_e0 [8];
  longlong *local_d8;
  ulonglong local_d0;
  uint local_c0;
  uint local_bc;
  uint uStack_b8;
  uint local_b4;
  uint uStack_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a4;
  int local_a0;
  ulonglong local_80;
  
  uVar6 = uRam000000014685ecbc;
  uVar5 = uRam000000014685ecb8;
  uVar4 = uRam000000014685ecb4;
  uVar3 = _DAT_14685ecb0;
  local_80 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_ac = (undefined4)param_1[0xe];
  uVar9 = 0;
  lVar2 = *param_1;
  iVar14 = (int)param_1[0xf];
  local_a8 = *(undefined4 *)((longlong)param_1 + 0x74);
  local_100 = *(int *)((longlong)param_1 + 0x7c);
  local_bc = 0;
  uStack_b8 = 0;
  local_b4 = 0;
  uStack_b0 = 0;
  if (*(ushort *)(lVar2 + 0x10) != 0) {
    local_d0 = (ulonglong)*(ushort *)(lVar2 + 0x10);
    uVar10 = uVar9;
    uVar11 = uVar9;
    uVar12 = uVar9;
    uVar13 = uVar9;
    uVar15 = uVar9;
    local_d8 = param_2;
    local_a4 = iVar14;
    local_a0 = local_100;
    do {
      uVar7 = 1 << (0x1f - ((byte)uVar12 & 0x1f) & 0x1f);
      uVar8 = uVar9;
      if ((*(uint *)(param_1[4] + (uVar12 >> 5) * 4) & uVar7) == 0) {
        if ((*(uint *)(param_1[2] + (uVar12 >> 5) * 4) & uVar7) == 0) {
          local_b4 = (int)uVar9 + 1;
          uVar8 = (ulonglong)local_b4;
          iVar14 = iVar14 + (uint)(byte)((&DAT_144108ae8)[*(byte *)(param_1[8] + uVar9)] * '\x03');
          local_100 = local_100 +
                      (uint)(byte)((&DAT_144108ae8)[*(byte *)(param_1[9] + uVar9)] * '\x03');
          uStack_b8 = (int)uVar13 + (uint)*(byte *)((longlong)param_1 + 0x3c) * 8;
          uVar13 = (ulonglong)uStack_b8;
          local_a4 = iVar14;
          local_a0 = local_100;
          if ((*(byte *)(lVar2 + 0x18) & 1) != 0) {
            uStack_b0 = (int)uVar11 + (uint)*(byte *)((longlong)param_1 + 0x3c) * 2;
            uVar11 = (ulonglong)uStack_b0;
          }
        }
        else {
          local_bc = (int)uVar10 + 0xc;
          uVar10 = (ulonglong)local_bc;
        }
      }
      local_c0 = (int)uVar12 + 1;
      if (*(short *)(uVar15 + local_d8[1]) == -1) {
        uVar7 = 1 << (0x1f - ((byte)local_c0 & 0x1f) & 0x1f);
        if ((*(uint *)(param_1[4] + (ulonglong)(local_c0 >> 5) * 4) & uVar7) == 0) {
          if ((*(uint *)(param_1[2] + (ulonglong)(local_c0 >> 5) * 4) & uVar7) == 0) {
            uStack_b8 = (int)uVar13 + 0x18;
            uVar13 = (ulonglong)uStack_b8;
            local_b4 = (int)uVar8 + 1;
            iVar14 = iVar14 + (uint)(byte)((&DAT_144108ae8)[*(byte *)(param_1[8] + uVar8)] * '\x03')
            ;
            local_100 = local_100 +
                        (uint)(byte)((&DAT_144108ae8)[*(byte *)(param_1[9] + uVar8)] * '\x03');
            uVar8 = (ulonglong)local_b4;
            local_a4 = iVar14;
            local_a0 = local_100;
            if ((*(byte *)(lVar2 + 0x18) & 2) != 0) {
              uStack_b0 = (int)uVar11 + 6;
              uVar11 = (ulonglong)uStack_b0;
            }
          }
          else {
            local_bc = (int)uVar10 + 0xc;
            uVar10 = (ulonglong)local_bc;
          }
        }
        local_c0 = (int)uVar12 + 2;
      }
      else {
        uVar16 = FUN_140832150(local_e0,lVar2 + 0x10,param_1,&local_c0);
        uVar11 = (ulonglong)uStack_b0;
        uVar8 = (ulonglong)local_b4;
        uVar13 = (ulonglong)uStack_b8;
        uVar10 = (ulonglong)local_bc;
        local_100 = local_a0;
        puVar1 = (uint *)(*local_d8 + 0x10 + (ulonglong)*(ushort *)(uVar15 + local_d8[1]) * 0x30);
        *puVar1 = uVar3 & (uint)uVar16;
        puVar1[1] = uVar4 & (uint)((ulonglong)uVar16 >> 0x20);
        puVar1[2] = uVar5 & extraout_XMM0_Dc;
        puVar1[3] = uVar6 & extraout_XMM0_Dd;
        iVar14 = local_a4;
      }
      uVar9 = uVar8;
      if (*(char *)(lVar2 + 0x19) != '\0') {
        uVar7 = 1 << (0x1f - ((byte)local_c0 & 0x1f) & 0x1f);
        if ((*(uint *)(param_1[4] + (ulonglong)(local_c0 >> 5) * 4) & uVar7) == 0) {
          if ((*(uint *)(param_1[2] + (ulonglong)(local_c0 >> 5) * 4) & uVar7) == 0) {
            uStack_b8 = (int)uVar13 + 0x18;
            uVar13 = (ulonglong)uStack_b8;
            local_b4 = (int)uVar8 + 1;
            uVar9 = (ulonglong)local_b4;
            iVar14 = iVar14 + (uint)(byte)((&DAT_144108ae8)[*(byte *)(param_1[8] + uVar8)] * '\x03')
            ;
            local_100 = local_100 +
                        (uint)(byte)((&DAT_144108ae8)[*(byte *)(param_1[9] + uVar8)] * '\x03');
            local_a4 = iVar14;
            local_a0 = local_100;
            if ((*(byte *)(lVar2 + 0x18) & 4) != 0) {
              uStack_b0 = (int)uVar11 + 6;
              uVar11 = (ulonglong)uStack_b0;
            }
          }
          else {
            local_bc = (int)uVar10 + 0xc;
            uVar10 = (ulonglong)local_bc;
          }
        }
        local_c0 = local_c0 + 1;
      }
      uVar12 = (ulonglong)local_c0;
      uVar15 = uVar15 + 2;
      local_d0 = local_d0 - 1;
    } while (local_d0 != 0);
  }
  return;
}



// FUNCTION 140833fa0 FUN_140833fa0 body=943 status=ok
// SIG undefined FUN_140833fa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140833fa0(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  ushort *puVar9;
  ushort *puVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  undefined8 uVar19;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dd;
  undefined1 auStack_138 [56];
  undefined1 local_100 [8];
  ushort *local_f8;
  longlong local_f0;
  longlong *local_e8;
  ulonglong local_e0;
  uint local_c0;
  undefined8 local_bc;
  uint local_b4;
  uint uStack_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  ulonglong local_80;
  
  uVar6 = uRam000000014685ecbc;
  uVar5 = uRam000000014685ecb8;
  uVar4 = uRam000000014685ecb4;
  uVar3 = _DAT_14685ecb0;
  local_80 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  uVar11 = 0;
  uVar14 = *(uint *)(param_1 + 0xe);
  local_f8 = (ushort *)(*param_1 + 0x10);
  uVar12 = *(uint *)((longlong)param_1 + 0x74);
  uVar18 = *(uint *)(param_1 + 0xf);
  uVar17 = *(uint *)((longlong)param_1 + 0x7c);
  local_bc = 0;
  local_b4 = 0;
  uStack_b0 = 0;
  if (*local_f8 != 0) {
    local_e0 = (ulonglong)*local_f8;
    local_f0 = 0;
    puVar9 = local_f8;
    uVar13 = uVar11;
    uVar15 = uVar11;
    uVar16 = uVar11;
    local_e8 = param_2;
    local_ac = uVar14;
    local_a8 = uVar12;
    local_a4 = uVar18;
    local_a0 = uVar17;
    do {
      puVar10 = local_f8;
      uVar8 = 1 << (0x1f - ((byte)uVar13 & 0x1f) & 0x1f);
      if ((*(uint *)(param_1[4] + (uVar13 >> 5) * 4) & uVar8) == 0) {
        if ((*(uint *)(param_1[2] + (uVar13 >> 5) * 4) & uVar8) == 0) {
          uVar14 = uVar14 + 0x10;
          if (*(char *)((longlong)param_1 + 0x3d) != '\0') {
            uVar18 = uVar14 * 8;
            uVar17 = (uVar12 + 0x10) * 8;
            local_a0 = uVar17;
            local_a4 = uVar18;
          }
          uVar12 = uVar12 + 0x10;
          local_ac = uVar14;
          local_a8 = uVar12;
          if ((puVar9[4] & 1) != 0) {
            uStack_b0 = (int)uVar11 + (uint)*(byte *)((longlong)param_1 + 0x3c) * 2;
            uVar11 = (ulonglong)uStack_b0;
          }
        }
        else {
          uVar8 = (int)uVar15 + 0x10;
          uVar15 = (ulonglong)uVar8;
          local_bc = CONCAT44(local_bc._4_4_,uVar8);
        }
      }
      local_c0 = (int)uVar13 + 1;
      if (*(short *)(local_f0 + local_e8[1]) == -1) {
        uVar8 = 1 << (0x1f - ((byte)local_c0 & 0x1f) & 0x1f);
        if ((*(uint *)(param_1[4] + (ulonglong)(local_c0 >> 5) * 4) & uVar8) == 0) {
          if ((*(uint *)(param_1[2] + (ulonglong)(local_c0 >> 5) * 4) & uVar8) == 0) {
            cVar2 = *(char *)((longlong)param_1 + 0x3d);
            bVar7 = (&DAT_144108ae8)[*(byte *)(param_1[8] + uVar16)] * '\x03';
            if (cVar2 != '\0') {
              bVar7 = bVar7 + 0xf & 0xf0;
            }
            uVar18 = uVar18 + bVar7;
            if (cVar2 != '\0') {
              uVar14 = uVar18 >> 3;
              local_ac = uVar14;
            }
            bVar7 = (&DAT_144108ae8)[*(byte *)(param_1[9] + uVar16)] * '\x03';
            if (cVar2 != '\0') {
              bVar7 = bVar7 + 0xf & 0xf0;
            }
            uVar17 = uVar17 + bVar7;
            if (cVar2 != '\0') {
              uVar12 = uVar17 >> 3;
              local_a8 = uVar12;
            }
            local_b4 = (int)uVar16 + 1;
            uVar16 = (ulonglong)local_b4;
            local_bc = CONCAT44(local_bc._4_4_ + 0x18,(undefined4)local_bc);
            local_a4 = uVar18;
            local_a0 = uVar17;
            if ((local_f8[4] & 2) != 0) {
              uStack_b0 = (int)uVar11 + 6;
              uVar11 = (ulonglong)uStack_b0;
            }
          }
          else {
            uVar8 = (int)uVar15 + 0xc;
            uVar15 = (ulonglong)uVar8;
            local_bc = CONCAT44(local_bc._4_4_,uVar8);
          }
        }
        local_c0 = (int)uVar13 + 2;
      }
      else {
        uVar19 = FUN_140832450(local_100,local_f8,param_1,&local_c0);
        uVar11 = (ulonglong)uStack_b0;
        uVar16 = (ulonglong)local_b4;
        uVar15 = local_bc & 0xffffffff;
        puVar1 = (uint *)(*local_e8 + 0x10 + (ulonglong)*(ushort *)(local_f0 + local_e8[1]) * 0x30);
        *puVar1 = uVar3 & (uint)uVar19;
        puVar1[1] = uVar4 & (uint)((ulonglong)uVar19 >> 0x20);
        puVar1[2] = uVar5 & extraout_XMM0_Dc;
        puVar1[3] = uVar6 & extraout_XMM0_Dd;
        uVar14 = local_ac;
        uVar12 = local_a8;
        uVar18 = local_a4;
        uVar17 = local_a0;
      }
      if (*(char *)((longlong)puVar10 + 9) != '\0') {
        uVar8 = 1 << (0x1f - ((byte)local_c0 & 0x1f) & 0x1f);
        if ((*(uint *)(param_1[4] + (ulonglong)(local_c0 >> 5) * 4) & uVar8) == 0) {
          if ((*(uint *)(param_1[2] + (ulonglong)(local_c0 >> 5) * 4) & uVar8) == 0) {
            cVar2 = *(char *)((longlong)param_1 + 0x3d);
            bVar7 = (&DAT_144108ae8)[*(byte *)(param_1[8] + uVar16)] * '\x03';
            if (cVar2 != '\0') {
              bVar7 = bVar7 + 0xf & 0xf0;
            }
            uVar18 = uVar18 + bVar7;
            if (cVar2 != '\0') {
              uVar14 = uVar18 >> 3;
              local_ac = uVar14;
            }
            bVar7 = (&DAT_144108ae8)[*(byte *)(param_1[9] + uVar16)] * '\x03';
            if (cVar2 != '\0') {
              bVar7 = bVar7 + 0xf & 0xf0;
            }
            uVar17 = uVar17 + bVar7;
            if (cVar2 != '\0') {
              uVar12 = uVar17 >> 3;
              local_a8 = uVar12;
            }
            local_b4 = (int)uVar16 + 1;
            uVar16 = (ulonglong)local_b4;
            local_bc = CONCAT44(local_bc._4_4_ + 0x18,(undefined4)local_bc);
            puVar10 = local_f8;
            local_a4 = uVar18;
            local_a0 = uVar17;
            if ((local_f8[4] & 4) != 0) {
              uStack_b0 = (int)uVar11 + 6;
              uVar11 = (ulonglong)uStack_b0;
            }
          }
          else {
            uVar8 = (int)uVar15 + 0xc;
            uVar15 = (ulonglong)uVar8;
            local_bc = CONCAT44(local_bc._4_4_,uVar8);
          }
        }
        local_c0 = local_c0 + 1;
      }
      uVar13 = (ulonglong)local_c0;
      local_f0 = local_f0 + 2;
      local_e0 = local_e0 - 1;
      puVar9 = puVar10;
    } while (local_e0 != 0);
  }
  return;
}



// FUNCTION 140834350 FUN_140834350 body=1489 status=ok
// SIG undefined FUN_140834350(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140834350(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 extraout_XMM0_Qb;
  undefined1 auStack_128 [40];
  ushort local_100;
  ushort local_fe;
  longlong *local_f8;
  undefined8 local_c0;
  int local_b8;
  uint uStack_b4;
  int local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  ulonglong local_80;
  
  local_80 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  uVar13 = *(uint *)(param_1 + 0xe);
  uVar10 = 0;
  uVar12 = *(uint *)((longlong)param_1 + 0x74);
  uVar16 = *(uint *)(param_1 + 0xf);
  uVar9 = *(uint *)((longlong)param_1 + 0x7c);
  lVar2 = *param_1;
  local_c0 = 0;
  local_b8 = 0;
  uStack_b4 = 0;
  local_fe = *(ushort *)(lVar2 + 0x10);
  local_b0 = 0;
  local_100 = 0;
  uVar14 = uVar10;
  uVar15 = uVar10;
  local_f8 = param_2;
  local_ac = uVar13;
  local_a8 = uVar12;
  local_a4 = uVar16;
  local_a0 = uVar9;
  if (local_fe != 0) {
    do {
      uVar8 = (ulonglong)local_100;
      if (*(short *)(local_f8[1] + uVar8 * 2) == -1) {
        uVar5 = 1 << (0x1f - ((byte)uVar15 & 0x1f) & 0x1f);
        if ((*(uint *)(param_1[4] + (uVar15 >> 5) * 4) & uVar5) == 0) {
          cVar3 = *(char *)(lVar2 + 0x14);
          if ((*(uint *)(param_1[2] + (uVar15 >> 5) * 4) & uVar5) == 0) {
            if (cVar3 == '\x04') {
              cVar3 = *(char *)((longlong)param_1 + 0x3d);
              bVar4 = (&DAT_144108ae8)[*(byte *)(param_1[8] + uVar14)] * '\x03';
              if (cVar3 != '\0') {
                bVar4 = bVar4 + 0xf & 0xf0;
              }
              uVar16 = uVar16 + bVar4;
              if (cVar3 != '\0') {
                uVar13 = *(uint *)(param_1 + 0xf) >> 3;
                local_ac = uVar13;
              }
              bVar4 = (&DAT_144108ae8)[*(byte *)(param_1[9] + uVar14)] * '\x03';
              if (cVar3 != '\0') {
                bVar4 = bVar4 + 0xf & 0xf0;
              }
              uVar9 = uVar9 + bVar4;
              if (cVar3 != '\0') {
                uVar12 = *(uint *)((longlong)param_1 + 0x7c) >> 3;
                local_a8 = uVar12;
              }
              uStack_b4 = (int)uVar14 + 1;
              uVar14 = (ulonglong)uStack_b4;
              local_a4 = uVar16;
              local_a0 = uVar9;
            }
            else {
              if (cVar3 == '\0') {
                iVar11 = 0x10;
              }
              else if (cVar3 == '\x01') {
                iVar11 = 0xc;
              }
              else if (cVar3 == '\x02') {
                iVar11 = 6;
              }
              else if (cVar3 == '\x03') {
                iVar11 = 4;
              }
              else {
                iVar11 = 0;
              }
              uVar13 = uVar13 + iVar11;
              if (*(char *)((longlong)param_1 + 0x3d) != '\0') {
                uVar16 = uVar13 * 8;
                local_a4 = uVar16;
              }
              uVar12 = uVar12 + iVar11;
              local_ac = uVar13;
              local_a8 = uVar12;
              if (*(char *)((longlong)param_1 + 0x3d) != '\0') {
                uVar9 = uVar12 * 8;
                local_a0 = uVar9;
              }
            }
            if ((*(byte *)(lVar2 + 0x17) & 1) != 0) {
              local_b8 = local_b8 + (uint)*(byte *)((longlong)param_1 + 0x3c) * 8;
            }
            if ((*(byte *)(lVar2 + 0x18) & 1) != 0) {
              local_b0 = local_b0 + (uint)*(byte *)((longlong)param_1 + 0x3c) * 2;
            }
          }
          else {
            if (cVar3 == '\x04') {
              cVar3 = '\x01';
            }
            iVar11 = (int)uVar10;
            if (cVar3 == '\0') {
              local_c0 = (ulonglong)(iVar11 + 0x10) << 0x20;
            }
            else if (cVar3 == '\x01') {
              local_c0 = (ulonglong)(iVar11 + 0xc) << 0x20;
            }
            else if (cVar3 == '\x02') {
              local_c0 = (ulonglong)(iVar11 + 6) << 0x20;
            }
            else if (cVar3 == '\x03') {
              local_c0 = (ulonglong)(iVar11 + 4) << 0x20;
            }
            else {
              local_c0 = uVar10 << 0x20;
            }
          }
        }
        uVar5 = (int)uVar15 + 1;
      }
      else {
        uVar17 = FUN_1408300b0(param_1 + 0x18,lVar2 + 0x10,param_1,&local_c0);
        uVar14 = (ulonglong)uStack_b4;
        puVar1 = (undefined8 *)(*local_f8 + (ulonglong)*(ushort *)(local_f8[1] + uVar8 * 2) * 0x30);
        *puVar1 = uVar17;
        puVar1[1] = extraout_XMM0_Qb;
        uVar13 = local_ac;
        uVar12 = local_a8;
        uVar16 = local_a4;
        uVar9 = local_a0;
        uVar5 = (uint)local_c0;
      }
      uVar6 = 1 << (0x1f - ((byte)uVar5 & 0x1f) & 0x1f);
      if ((*(uint *)(param_1[4] + (ulonglong)(uVar5 >> 5) * 4) & uVar6) == 0) {
        if ((*(uint *)(param_1[2] + (ulonglong)(uVar5 >> 5) * 4) & uVar6) == 0) {
          cVar3 = *(char *)(lVar2 + 0x15);
          if (cVar3 == '\x03') {
            cVar3 = *(char *)((longlong)param_1 + 0x3d);
            bVar4 = (&DAT_144108ae8)[*(byte *)(param_1[8] + uVar14)] * '\x03';
            if (cVar3 != '\0') {
              bVar4 = bVar4 + 0xf & 0xf0;
            }
            uVar16 = uVar16 + bVar4;
            if (cVar3 != '\0') {
              uVar13 = uVar16 >> 3;
              local_ac = uVar13;
            }
            bVar4 = (&DAT_144108ae8)[*(byte *)(param_1[9] + uVar14)] * '\x03';
            if (cVar3 != '\0') {
              bVar4 = bVar4 + 0xf & 0xf0;
            }
            uVar9 = uVar9 + bVar4;
            if (cVar3 != '\0') {
              uVar12 = uVar9 >> 3;
              local_a8 = uVar12;
            }
            uStack_b4 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uStack_b4;
            local_a4 = uVar16;
            local_a0 = uVar9;
          }
          else {
            if (cVar3 == '\0') {
              iVar11 = 0xc;
            }
            else if (cVar3 == '\x01') {
              iVar11 = 6;
            }
            else if (cVar3 == '\x02') {
              iVar11 = 4;
            }
            else {
              iVar11 = 0;
            }
            uVar13 = uVar13 + iVar11;
            if (*(char *)((longlong)param_1 + 0x3d) != '\0') {
              uVar16 = uVar13 * 8;
              local_a4 = uVar16;
            }
            uVar12 = uVar12 + iVar11;
            local_ac = uVar13;
            local_a8 = uVar12;
            if (*(char *)((longlong)param_1 + 0x3d) != '\0') {
              uVar9 = uVar12 * 8;
              local_a0 = uVar9;
            }
          }
          if ((*(byte *)(lVar2 + 0x17) & 2) != 0) {
            local_b8 = local_b8 + 0x18;
          }
          if ((*(byte *)(lVar2 + 0x18) & 2) != 0) {
            local_b0 = local_b0 + 6;
          }
        }
        else {
          local_c0._4_4_ = local_c0._4_4_ + 0xc;
        }
      }
      uVar6 = uVar5 + 1;
      local_c0 = CONCAT44(local_c0._4_4_,uVar6);
      if (*(char *)(lVar2 + 0x19) != '\0') {
        uVar7 = 1 << (0x1f - ((byte)uVar6 & 0x1f) & 0x1f);
        if ((*(uint *)(param_1[4] + (ulonglong)(uVar6 >> 5) * 4) & uVar7) == 0) {
          if ((*(uint *)(param_1[2] + (ulonglong)(uVar6 >> 5) * 4) & uVar7) == 0) {
            cVar3 = *(char *)(lVar2 + 0x16);
            if (cVar3 == '\x03') {
              cVar3 = *(char *)((longlong)param_1 + 0x3d);
              bVar4 = (&DAT_144108ae8)[*(byte *)(param_1[8] + uVar14)] * '\x03';
              if (cVar3 != '\0') {
                bVar4 = bVar4 + 0xf & 0xf0;
              }
              uVar16 = uVar16 + bVar4;
              if (cVar3 != '\0') {
                uVar13 = uVar16 >> 3;
                local_ac = uVar13;
              }
              bVar4 = (&DAT_144108ae8)[*(byte *)(param_1[9] + uVar14)] * '\x03';
              if (cVar3 != '\0') {
                bVar4 = bVar4 + 0xf & 0xf0;
              }
              uVar9 = uVar9 + bVar4;
              if (cVar3 != '\0') {
                uVar12 = uVar9 >> 3;
                local_a8 = uVar12;
              }
              uStack_b4 = (int)uVar14 + 1;
              uVar14 = (ulonglong)uStack_b4;
              local_a4 = uVar16;
              local_a0 = uVar9;
            }
            else {
              if (cVar3 == '\0') {
                iVar11 = 0xc;
              }
              else if (cVar3 == '\x01') {
                iVar11 = 6;
              }
              else if (cVar3 == '\x02') {
                iVar11 = 4;
              }
              else {
                iVar11 = 0;
              }
              uVar13 = uVar13 + iVar11;
              if (*(char *)((longlong)param_1 + 0x3d) != '\0') {
                uVar16 = uVar13 * 8;
                local_a4 = uVar16;
              }
              uVar12 = uVar12 + iVar11;
              local_ac = uVar13;
              local_a8 = uVar12;
              if (*(char *)((longlong)param_1 + 0x3d) != '\0') {
                uVar9 = uVar12 * 8;
                local_a0 = uVar9;
              }
            }
            if ((*(byte *)(lVar2 + 0x17) & 4) != 0) {
              local_b8 = local_b8 + 0x18;
            }
            if ((*(byte *)(lVar2 + 0x18) & 4) != 0) {
              local_b0 = local_b0 + 6;
            }
          }
          else {
            local_c0 = (ulonglong)(local_c0._4_4_ + 0xc) << 0x20;
          }
        }
        uVar6 = uVar5 + 2;
        local_c0 = CONCAT44(local_c0._4_4_,uVar6);
      }
      uVar10 = local_c0 >> 0x20;
      local_100 = local_100 + 1;
      uVar15 = (ulonglong)uVar6;
    } while (local_100 < local_fe);
  }
  return;
}



// FUNCTION 140834930 FUN_140834930 body=867 status=ok
// SIG undefined FUN_140834930(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140834930(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 extraout_XMM0_Qb;
  undefined1 auStack_128 [40];
  int local_100;
  int local_e0;
  ulonglong local_d8;
  longlong *local_d0;
  uint local_c0;
  uint uStack_bc;
  undefined8 local_b8;
  uint local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a4;
  int local_a0;
  ulonglong local_80;
  
  local_80 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_ac = (undefined4)param_1[0xe];
  uVar6 = 0;
  local_e0 = (int)param_1[0xf];
  lVar2 = *param_1;
  local_a8 = *(undefined4 *)((longlong)param_1 + 0x74);
  local_100 = *(int *)((longlong)param_1 + 0x7c);
  local_c0 = 0;
  uStack_bc = 0;
  local_b8 = 0;
  local_b0 = 0;
  if (*(ushort *)(lVar2 + 0x10) != 0) {
    local_d8 = (ulonglong)*(ushort *)(lVar2 + 0x10);
    uVar7 = uVar6;
    uVar8 = uVar6;
    uVar9 = uVar6;
    uVar10 = uVar6;
    uVar12 = uVar6;
    local_d0 = param_2;
    local_a4 = local_e0;
    local_a0 = local_100;
    do {
      plVar3 = local_d0;
      if (*(short *)(uVar6 + local_d0[1]) == -1) {
        uVar4 = 1 << (0x1f - ((byte)uVar7 & 0x1f) & 0x1f);
        uVar11 = uVar12;
        if ((*(uint *)(param_1[4] + (uVar7 >> 5) * 4) & uVar4) == 0) {
          if ((*(uint *)(param_1[2] + (uVar7 >> 5) * 4) & uVar4) == 0) {
            uVar5 = (int)uVar12 + 1;
            uVar11 = (ulonglong)uVar5;
            local_e0 = local_e0 +
                       (uint)(byte)((&DAT_144108ae8)[*(byte *)(param_1[8] + uVar12)] * '\x03');
            local_100 = local_100 +
                        (uint)(byte)((&DAT_144108ae8)[*(byte *)(param_1[9] + uVar12)] * '\x03');
            uVar4 = (int)uVar10 + (uint)*(byte *)((longlong)param_1 + 0x3c) * 8;
            uVar10 = (ulonglong)uVar4;
            local_b8 = CONCAT44(uVar5,uVar4);
            local_a4 = local_e0;
            local_a0 = local_100;
            if ((*(byte *)(lVar2 + 0x18) & 1) != 0) {
              local_b0 = (int)uVar9 + (uint)*(byte *)((longlong)param_1 + 0x3c) * 2;
              uVar9 = (ulonglong)local_b0;
            }
          }
          else {
            uStack_bc = (int)uVar8 + 0xc;
            uVar8 = (ulonglong)uStack_bc;
          }
        }
        local_c0 = (int)uVar7 + 1;
      }
      else {
        uVar13 = FUN_140830a80(param_1 + 0x18,lVar2 + 0x10,param_1,&local_c0);
        uVar9 = (ulonglong)local_b0;
        uVar11 = local_b8 >> 0x20;
        uVar10 = local_b8 & 0xffffffff;
        uVar8 = (ulonglong)uStack_bc;
        local_e0 = local_a4;
        puVar1 = (undefined8 *)(*plVar3 + (ulonglong)*(ushort *)(uVar6 + plVar3[1]) * 0x30);
        *puVar1 = uVar13;
        puVar1[1] = extraout_XMM0_Qb;
        local_100 = local_a0;
      }
      uVar4 = 1 << (0x1f - ((byte)local_c0 & 0x1f) & 0x1f);
      uVar7 = uVar11;
      if ((*(uint *)(param_1[4] + (ulonglong)(local_c0 >> 5) * 4) & uVar4) == 0) {
        if ((*(uint *)(param_1[2] + (ulonglong)(local_c0 >> 5) * 4) & uVar4) == 0) {
          uVar4 = (int)uVar10 + 0x18;
          uVar10 = (ulonglong)uVar4;
          uVar5 = (int)uVar11 + 1;
          uVar7 = (ulonglong)uVar5;
          local_b8 = CONCAT44(uVar5,uVar4);
          local_e0 = local_e0 +
                     (uint)(byte)((&DAT_144108ae8)[*(byte *)(param_1[8] + uVar11)] * '\x03');
          local_100 = local_100 +
                      (uint)(byte)((&DAT_144108ae8)[*(byte *)(param_1[9] + uVar11)] * '\x03');
          local_a4 = local_e0;
          local_a0 = local_100;
          if ((*(byte *)(lVar2 + 0x18) & 2) != 0) {
            local_b0 = (int)uVar9 + 6;
            uVar9 = (ulonglong)local_b0;
          }
        }
        else {
          uStack_bc = (int)uVar8 + 0xc;
          uVar8 = (ulonglong)uStack_bc;
        }
      }
      uVar4 = local_c0 + 1;
      uVar12 = uVar7;
      if (*(char *)(lVar2 + 0x19) != '\0') {
        uVar5 = 1 << (0x1f - ((byte)uVar4 & 0x1f) & 0x1f);
        if ((*(uint *)(param_1[4] + (ulonglong)(uVar4 >> 5) * 4) & uVar5) == 0) {
          if ((*(uint *)(param_1[2] + (ulonglong)(uVar4 >> 5) * 4) & uVar5) == 0) {
            uVar4 = (int)uVar10 + 0x18;
            uVar10 = (ulonglong)uVar4;
            uVar5 = (int)uVar7 + 1;
            uVar12 = (ulonglong)uVar5;
            local_b8 = CONCAT44(uVar5,uVar4);
            local_e0 = local_e0 +
                       (uint)(byte)((&DAT_144108ae8)[*(byte *)(param_1[8] + uVar7)] * '\x03');
            local_100 = local_100 +
                        (uint)(byte)((&DAT_144108ae8)[*(byte *)(param_1[9] + uVar7)] * '\x03');
            local_a4 = local_e0;
            local_a0 = local_100;
            if ((*(byte *)(lVar2 + 0x18) & 4) != 0) {
              local_b0 = (int)uVar9 + 6;
              uVar9 = (ulonglong)local_b0;
            }
          }
          else {
            uStack_bc = (int)uVar8 + 0xc;
            uVar8 = (ulonglong)uStack_bc;
          }
        }
        uVar4 = local_c0 + 2;
      }
      uVar7 = (ulonglong)uVar4;
      uVar6 = uVar6 + 2;
      local_d8 = local_d8 - 1;
      local_c0 = uVar4;
    } while (local_d8 != 0);
  }
  return;
}



// FUNCTION 140834ca0 FUN_140834ca0 body=934 status=ok
// SIG undefined FUN_140834ca0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140834ca0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ushort *puVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined8 extraout_XMM0_Qb;
  undefined1 auStack_128 [40];
  ushort *local_100;
  longlong local_f8;
  ulonglong local_f0;
  longlong *local_e8;
  uint local_c0;
  uint uStack_bc;
  undefined8 local_b8;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  ulonglong local_80;
  
  local_80 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  uVar5 = 0;
  uVar6 = *(uint *)(param_1 + 0xe);
  puVar10 = (ushort *)(*param_1 + 0x10);
  uVar8 = *(uint *)((longlong)param_1 + 0x74);
  uVar12 = *(uint *)(param_1 + 0xf);
  uVar15 = *(uint *)((longlong)param_1 + 0x7c);
  local_c0 = 0;
  uStack_bc = 0;
  local_b8 = 0;
  local_b0 = 0;
  if (*puVar10 != 0) {
    local_f0 = (ulonglong)*puVar10;
    local_f8 = 0;
    uVar7 = uVar5;
    uVar11 = uVar5;
    uVar13 = uVar5;
    local_100 = puVar10;
    local_e8 = param_2;
    local_ac = uVar6;
    local_a8 = uVar8;
    local_a4 = uVar12;
    local_a0 = uVar15;
    do {
      lVar14 = local_f8;
      if (*(short *)(local_f8 + local_e8[1]) == -1) {
        uVar4 = 1 << (0x1f - ((byte)uVar7 & 0x1f) & 0x1f);
        if ((*(uint *)(param_1[4] + (uVar7 >> 5) * 4) & uVar4) == 0) {
          if ((*(uint *)(param_1[2] + (uVar7 >> 5) * 4) & uVar4) == 0) {
            uVar6 = uVar6 + 0x10;
            if (*(char *)((longlong)param_1 + 0x3d) != '\0') {
              uVar12 = uVar6 * 8;
              uVar15 = (uVar8 + 0x10) * 8;
              local_a0 = uVar15;
              local_a4 = uVar12;
            }
            uVar8 = uVar8 + 0x10;
            local_ac = uVar6;
            local_a8 = uVar8;
            if ((puVar10[4] & 1) != 0) {
              local_b0 = (int)uVar5 + (uint)*(byte *)((longlong)param_1 + 0x3c) * 2;
              uVar5 = (ulonglong)local_b0;
            }
          }
          else {
            uStack_bc = (int)uVar11 + 0x10;
            uVar11 = (ulonglong)uStack_bc;
          }
        }
        local_c0 = (int)uVar7 + 1;
      }
      else {
        uVar16 = FUN_140830e80(param_1 + 0x18,puVar10,param_1,&local_c0);
        uVar5 = (ulonglong)local_b0;
        uVar13 = local_b8 >> 0x20;
        uVar11 = (ulonglong)uStack_bc;
        puVar1 = (undefined8 *)(*local_e8 + (ulonglong)*(ushort *)(lVar14 + local_e8[1]) * 0x30);
        *puVar1 = uVar16;
        puVar1[1] = extraout_XMM0_Qb;
        puVar10 = local_100;
        uVar6 = local_ac;
        uVar8 = local_a8;
        uVar12 = local_a4;
        uVar15 = local_a0;
      }
      lVar14 = param_1[4];
      uVar4 = 1 << (0x1f - ((byte)local_c0 & 0x1f) & 0x1f);
      if ((*(uint *)(lVar14 + (ulonglong)(local_c0 >> 5) * 4) & uVar4) == 0) {
        if ((*(uint *)(param_1[2] + (ulonglong)(local_c0 >> 5) * 4) & uVar4) == 0) {
          cVar2 = *(char *)((longlong)param_1 + 0x3d);
          bVar3 = (&DAT_144108ae8)[*(byte *)(param_1[8] + uVar13)] * '\x03';
          if (cVar2 != '\0') {
            bVar3 = bVar3 + 0xf & 0xf0;
          }
          uVar12 = uVar12 + bVar3;
          if (cVar2 != '\0') {
            uVar6 = uVar12 >> 3;
            local_ac = uVar6;
          }
          bVar3 = (&DAT_144108ae8)[*(byte *)(param_1[9] + uVar13)] * '\x03';
          if (cVar2 != '\0') {
            bVar3 = bVar3 + 0xf & 0xf0;
          }
          uVar15 = uVar15 + bVar3;
          if (cVar2 != '\0') {
            uVar8 = uVar15 >> 3;
            local_a8 = uVar8;
          }
          uVar4 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar4;
          lVar14 = param_1[4];
          local_b8 = CONCAT44(uVar4,(int)local_b8 + 0x18);
          puVar10 = local_100;
          local_a4 = uVar12;
          local_a0 = uVar15;
          if ((local_100[4] & 2) != 0) {
            local_b0 = (int)uVar5 + 6;
            uVar5 = (ulonglong)local_b0;
          }
        }
        else {
          uStack_bc = (int)uVar11 + 0xc;
          uVar11 = (ulonglong)uStack_bc;
        }
      }
      uVar4 = local_c0 + 1;
      if (*(char *)((longlong)puVar10 + 9) != '\0') {
        uVar9 = 1 << (0x1f - ((byte)uVar4 & 0x1f) & 0x1f);
        if ((*(uint *)(lVar14 + (ulonglong)(uVar4 >> 5) * 4) & uVar9) == 0) {
          if ((*(uint *)(param_1[2] + (ulonglong)(uVar4 >> 5) * 4) & uVar9) == 0) {
            cVar2 = *(char *)((longlong)param_1 + 0x3d);
            bVar3 = (&DAT_144108ae8)[*(byte *)(param_1[8] + uVar13)] * '\x03';
            if (cVar2 != '\0') {
              bVar3 = bVar3 + 0xf & 0xf0;
            }
            uVar12 = uVar12 + bVar3;
            if (cVar2 != '\0') {
              uVar6 = uVar12 >> 3;
              local_ac = uVar6;
            }
            bVar3 = (&DAT_144108ae8)[*(byte *)(param_1[9] + uVar13)] * '\x03';
            if (cVar2 != '\0') {
              bVar3 = bVar3 + 0xf & 0xf0;
            }
            uVar15 = uVar15 + bVar3;
            if (cVar2 != '\0') {
              uVar8 = uVar15 >> 3;
              local_a8 = uVar8;
            }
            uVar4 = (int)uVar13 + 1;
            uVar13 = (ulonglong)uVar4;
            local_b8 = CONCAT44(uVar4,(int)local_b8 + 0x18);
            local_a4 = uVar12;
            local_a0 = uVar15;
            if ((local_100[4] & 4) != 0) {
              local_b0 = (int)uVar5 + 6;
              uVar5 = (ulonglong)local_b0;
            }
          }
          else {
            uStack_bc = (int)uVar11 + 0xc;
            uVar11 = (ulonglong)uStack_bc;
          }
        }
        uVar4 = local_c0 + 2;
        puVar10 = local_100;
      }
      uVar7 = (ulonglong)uVar4;
      local_f8 = local_f8 + 2;
      local_f0 = local_f0 - 1;
      local_c0 = uVar4;
    } while (local_f0 != 0);
  }
  return;
}



// FUNCTION 140835050 FUN_140835050 body=493 status=ok
// SIG undefined FUN_140835050(void)

void FUN_140835050(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 1 << (0x1f - ((byte)*param_4 & 0x1f) & 0x1f);
  lVar1 = (ulonglong)(*param_4 >> 5) * 4;
  if ((*(uint *)(lVar1 + *(longlong *)(param_3 + 0x20)) & uVar5) == 0) {
    cVar2 = *(char *)(param_2 + 4);
    if ((*(uint *)(lVar1 + *(longlong *)(param_3 + 0x10)) & uVar5) != 0) {
      if (cVar2 == '\x04') {
        cVar2 = '\x01';
      }
      if (cVar2 == '\0') {
        param_4[1] = param_4[1] + 0x10;
        *param_4 = *param_4 + 1;
        return;
      }
      if (cVar2 == '\x01') {
        param_4[1] = param_4[1] + 0xc;
        *param_4 = *param_4 + 1;
        return;
      }
      if (cVar2 != '\x02') {
        if (cVar2 != '\x03') {
          param_4[1] = param_4[1];
          *param_4 = *param_4 + 1;
          return;
        }
        param_4[1] = param_4[1] + 4;
        *param_4 = *param_4 + 1;
        return;
      }
      param_4[1] = param_4[1] + 6;
      *param_4 = *param_4 + 1;
      return;
    }
    if (cVar2 == '\x04') {
      bVar3 = (&DAT_144108ae8)[*(byte *)(*(longlong *)(param_3 + 0x40) + (ulonglong)param_4[3])] *
              '\x03';
      if (*(char *)(param_3 + 0x3d) != '\0') {
        bVar3 = bVar3 + 0xf & 0xf0;
      }
      param_4[7] = param_4[7] + (uint)bVar3;
      cVar2 = '\0';
      if (*(char *)(param_3 + 0x3d) != '\0') {
        param_4[5] = *(uint *)(param_3 + 0x78) >> 3;
        cVar2 = *(char *)(param_3 + 0x3d);
      }
      bVar3 = (&DAT_144108ae8)[*(byte *)(*(longlong *)(param_3 + 0x48) + (ulonglong)param_4[3])] *
              '\x03';
      if (cVar2 != '\0') {
        bVar3 = bVar3 + 0xf & 0xf0;
      }
      param_4[8] = param_4[8] + (uint)bVar3;
      if (*(char *)(param_3 + 0x3d) != '\0') {
        param_4[6] = *(uint *)(param_3 + 0x7c) >> 3;
      }
      param_4[3] = param_4[3] + 1;
    }
    else {
      if (cVar2 == '\0') {
        iVar4 = 0x10;
      }
      else if (cVar2 == '\x01') {
        iVar4 = 0xc;
      }
      else if (cVar2 == '\x02') {
        iVar4 = 6;
      }
      else if (cVar2 == '\x03') {
        iVar4 = 4;
      }
      else {
        iVar4 = 0;
      }
      uVar5 = param_4[5];
      param_4[5] = uVar5 + iVar4;
      if (*(char *)(param_3 + 0x3d) != '\0') {
        param_4[7] = (uVar5 + iVar4) * 8;
      }
      uVar5 = param_4[6];
      param_4[6] = uVar5 + iVar4;
      if (*(char *)(param_3 + 0x3d) != '\0') {
        param_4[8] = (uVar5 + iVar4) * 8;
      }
    }
    if ((*(byte *)(param_2 + 7) & 1) != 0) {
      param_4[2] = param_4[2] + (uint)*(byte *)(param_3 + 0x3c) * 8;
    }
    if ((*(byte *)(param_2 + 8) & 1) != 0) {
      param_4[4] = param_4[4] + (uint)*(byte *)(param_3 + 0x3c) * 2;
    }
  }
  *param_4 = *param_4 + 1;
  return;
}



// FUNCTION 140835240 FUN_140835240 body=370 status=ok
// SIG undefined FUN_140835240(void)

void FUN_140835240(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  
  uVar4 = 1 << (0x1f - ((byte)*param_4 & 0x1f) & 0x1f);
  lVar1 = (ulonglong)(*param_4 >> 5) * 4;
  if ((*(uint *)(lVar1 + *(longlong *)(param_3 + 0x20)) & uVar4) == 0) {
    if ((*(uint *)(lVar1 + *(longlong *)(param_3 + 0x10)) & uVar4) != 0) {
      param_4[1] = param_4[1] + 0xc;
      *param_4 = *param_4 + 1;
      return;
    }
    cVar5 = *(char *)(param_2 + 5);
    if (cVar5 == '\x03') {
      bVar2 = (&DAT_144108ae8)[*(byte *)(*(longlong *)(param_3 + 0x40) + (ulonglong)param_4[3])] *
              '\x03';
      if (*(char *)(param_3 + 0x3d) != '\0') {
        bVar2 = bVar2 + 0xf & 0xf0;
      }
      uVar4 = param_4[7];
      param_4[7] = bVar2 + uVar4;
      cVar5 = '\0';
      if (*(char *)(param_3 + 0x3d) != '\0') {
        param_4[5] = bVar2 + uVar4 >> 3;
        cVar5 = *(char *)(param_3 + 0x3d);
      }
      bVar2 = (&DAT_144108ae8)[*(byte *)(*(longlong *)(param_3 + 0x48) + (ulonglong)param_4[3])] *
              '\x03';
      if (cVar5 != '\0') {
        bVar2 = bVar2 + 0xf & 0xf0;
      }
      uVar4 = param_4[8];
      param_4[8] = bVar2 + uVar4;
      if (*(char *)(param_3 + 0x3d) != '\0') {
        param_4[6] = bVar2 + uVar4 >> 3;
      }
      param_4[3] = param_4[3] + 1;
    }
    else {
      if (cVar5 == '\0') {
        iVar3 = 0xc;
      }
      else if (cVar5 == '\x01') {
        iVar3 = 6;
      }
      else if (cVar5 == '\x02') {
        iVar3 = 4;
      }
      else {
        iVar3 = 0;
      }
      uVar4 = param_4[5];
      param_4[5] = uVar4 + iVar3;
      if (*(char *)(param_3 + 0x3d) != '\0') {
        param_4[7] = (uVar4 + iVar3) * 8;
      }
      uVar4 = param_4[6];
      param_4[6] = uVar4 + iVar3;
      if (*(char *)(param_3 + 0x3d) != '\0') {
        param_4[8] = (uVar4 + iVar3) * 8;
      }
    }
    if ((*(byte *)(param_2 + 7) & 2) != 0) {
      param_4[2] = param_4[2] + 0x18;
    }
    if ((*(byte *)(param_2 + 8) & 2) != 0) {
      param_4[4] = param_4[4] + 6;
    }
  }
  *param_4 = *param_4 + 1;
  return;
}



// FUNCTION 1408353c0 FUN_1408353c0 body=41 status=ok
// SIG undefined FUN_1408353c0(void)

undefined8 * FUN_1408353c0(undefined8 *param_1)

{
  UCommandlet::UCommandlet();
  *(uint *)(param_1 + 0xf) = *(uint *)(param_1 + 0xf) & 0xfffffff8;
  *(uint *)(param_1 + 0xf) = *(uint *)(param_1 + 0xf) | 0x18;
  *param_1 = &PTR__scalar_deleting_destructor__144108b00;
  return param_1;
}



// FUNCTION 1408353f0 FUN_1408353f0 body=159 status=ok
// SIG undefined FUN_1408353f0(void)

undefined8 * FUN_1408353f0(undefined8 *param_1)

{
  int iVar1;
  
  FUN_1422441b0();
  iVar1 = 0;
  *param_1 = &PTR_FUN_144109000;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  if ((undefined8 *)param_1[5] != &DAT_144108ac8) {
    *(undefined4 *)(param_1 + 6) = 0;
    if (*(int *)((longlong)param_1 + 0x34) != 4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 5,4);
      iVar1 = *(int *)(param_1 + 6);
    }
    *(int *)(param_1 + 6) = iVar1 + 4;
    if (*(int *)((longlong)param_1 + 0x34) < iVar1 + 4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 5,iVar1);
    }
    *(undefined8 *)param_1[5] = 0x4c00430041;
  }
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) | 1;
  *(undefined4 *)(param_1 + 9) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x42c80000;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3c23d70a;
  return param_1;
}



// FUNCTION 140835490 FUN_140835490 body=33 status=ok
// SIG undefined FUN_140835490(void)

undefined8 * FUN_140835490(undefined8 *param_1)

{
  FUN_1422441b0();
  *param_1 = &PTR_FUN_144108d88;
  return param_1;
}



// FUNCTION 1408354c0 FUN_1408354c0 body=204 status=ok
// SIG undefined FUN_1408354c0(void)

undefined8 * FUN_1408354c0(undefined8 *param_1)

{
  int iVar1;
  
  FUN_1422441b0();
  *param_1 = &PTR__scalar_deleting_destructor__144109278;
  if ((wchar_t *)param_1[5] != L"ACL Custom") {
    iVar1 = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    if (*(int *)((longlong)param_1 + 0x34) != 0xb) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 5,0xb);
      iVar1 = *(int *)(param_1 + 6);
    }
    *(int *)(param_1 + 6) = iVar1 + 0xb;
    if (*(int *)((longlong)param_1 + 0x34) < iVar1 + 0xb) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 5);
    }
    builtin_wcsncpy((wchar_t *)param_1[5],L"ACL Custom",0xb);
  }
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) | 1;
  *(undefined4 *)(param_1 + 9) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x42c80000;
  *(undefined2 *)(param_1 + 10) = 0x102;
  *(undefined1 *)((longlong)param_1 + 0x52) = 1;
  *(uint *)((longlong)param_1 + 100) = *(uint *)((longlong)param_1 + 100) | 0x7f;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0xb) = 0x3b3a9729;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3a83126f;
  *(undefined4 *)(param_1 + 0xc) = 0x3727c5ac;
  *(undefined4 *)(param_1 + 0xd) = 0x1f0010;
  return param_1;
}



// FUNCTION 140835590 ~DecompressionContext<acl::uniformly_sampled::DebugDecompressionSettings> body=70 status=ok
// SIG undefined ~DecompressionContext<acl::uniformly_sampled::DebugDecompressionSettings>(void)

void acl::uniformly_sampled::
     DecompressionContext<acl::uniformly_sampled::DebugDecompressionSettings>::
     ~DecompressionContext<acl::uniformly_sampled::DebugDecompressionSettings>(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 200);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 200) = 0;
    ~DecompressionContext<acl::uniformly_sampled::DebugDecompressionSettings>();
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1,0x100);
  }
  return;
}



// FUNCTION 1408355e0 FUN_1408355e0 body=84 status=ok
// SIG undefined FUN_1408355e0(void)

longlong FUN_1408355e0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 140835640 FUN_140835640 body=70 status=ok
// SIG undefined FUN_140835640(void)

longlong FUN_140835640(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 140835690 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UAnimCompress_RemoveLinearKeys::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1408356e0 operator_new body=143 status=ok
// SIG undefined operator_new(void)

void operator_new(int param_1,ulonglong *param_2,int param_3,int param_4)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  
  param_1 = param_1 * param_3;
  iVar2 = 8;
  if (0xf < param_1) {
    iVar2 = 0x10;
  }
  if (param_4 <= iVar2) {
    param_4 = iVar2;
  }
  lVar3 = (longlong)param_4;
  uVar1 = (longlong)param_1 + ((*param_2 - 1) + lVar3 & ~(lVar3 - 1U));
  if (param_2[1] < uVar1) {
    FMemStackBase::AllocateNewChunk(param_2,param_4 + param_1);
    *param_2 = (longlong)param_1 + ((*param_2 - 1) + lVar3 & ~(lVar3 - 1U));
  }
  else {
    *param_2 = uVar1;
  }
  return;
}



// FUNCTION 1408357d0 FUN_1408357d0 body=124 status=ok
// SIG undefined FUN_1408357d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1408357d0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_14685ecd0) {
    _Init_thread_header(&DAT_14685ecd0);
    if (DAT_14685ecd0 == -1) {
      DAT_14685ecc0 = 0;
      _DAT_14685ecc8 = 0;
      atexit((_func_5014 *)&LAB_143e422e0);
      _Init_thread_footer(&DAT_14685ecd0);
      return &DAT_14685ecc0;
    }
  }
  return &DAT_14685ecc0;
}



// FUNCTION 140835850 FUN_140835850 body=39 status=ok
// SIG undefined FUN_140835850(void)

void FUN_140835850(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144108a40;
    return;
  }
  return;
}



// FUNCTION 140835880 UnregisterEncoding body=213 status=ok
// SIG undefined UnregisterEncoding(void)

void FAnimEncodingRegistry::UnregisterEncoding(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 local_res8;
  
  local_res8 = *param_2;
  lVar5 = 0;
  lVar3 = *param_1;
  iVar1 = 0;
  uVar6 = (longlong)(int)param_1[1];
  if ((int)param_1[1] != 0) {
    do {
      uVar7 = uVar6 >> 1;
      iVar1 = FName::Compare((uVar7 + lVar5) * 0x10 + lVar3,&local_res8);
      if (iVar1 < 0) {
        lVar5 = (ulonglong)((uint)uVar6 & 1) + uVar7 + lVar5;
      }
      uVar6 = uVar7;
    } while (uVar7 != 0);
    iVar1 = (int)param_1[1];
  }
  iVar4 = (int)lVar5;
  if ((ulonglong)(longlong)iVar4 < (ulonglong)(longlong)iVar1) {
    lVar3 = (longlong)iVar4 * 0x10;
    iVar1 = FName::Compare(&local_res8,*param_1 + lVar3);
    if ((-1 < iVar1) && (iVar4 != -1)) {
      iVar1 = (int)param_1[1];
      iVar2 = (iVar1 - iVar4) + -1;
      if (iVar2 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)(*param_1 + lVar3),(void *)((longlong)(iVar4 + 1) * 0x10 + *param_1),
                   (longlong)iVar2 << 4);
        iVar1 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar1 + -1;
      TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 140835960 FUN_140835960 body=5112 status=ok
// SIG undefined FUN_140835960(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140835960(longlong *param_1,ushort param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined4 *param_5)

{
  longlong lVar1;
  bool bVar2;
  undefined8 *puVar3;
  char cVar4;
  char cVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  byte *pbVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  byte bVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  ulonglong uVar29;
  longlong lVar30;
  uint *puVar31;
  int iVar32;
  undefined4 extraout_XMM0_Da;
  undefined8 uVar33;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar36;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined4 uVar37;
  uint uVar38;
  int iVar39;
  int iVar45;
  int iVar49;
  uint uVar50;
  int iVar55;
  uint uVar56;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  int iVar51;
  int iVar57;
  undefined1 auVar42 [16];
  int iVar46;
  uint uVar47;
  int iVar52;
  uint uVar53;
  int iVar58;
  uint uVar59;
  undefined1 auVar43 [16];
  int iVar48;
  int iVar54;
  int iVar60;
  undefined1 auVar44 [16];
  int iVar61;
  undefined1 auVar62 [16];
  undefined4 uVar63;
  undefined4 uVar64;
  undefined1 auStack_258 [88];
  uint local_200;
  ushort local_1fc [2];
  uint local_1f8;
  uint local_1f4;
  int local_1f0;
  undefined8 local_1e0;
  int iStack_1d8;
  int iStack_1d4;
  uint local_1d0;
  undefined8 local_1c0;
  int iStack_1b8;
  int iStack_1b4;
  undefined8 local_1b0;
  int iStack_1a8;
  int iStack_1a4;
  longlong local_1a0;
  undefined4 *local_198;
  undefined8 local_190;
  int iStack_188;
  int iStack_184;
  undefined8 *local_180;
  undefined8 *local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined1 local_160 [16];
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  uint local_140;
  uint uStack_13c;
  uint local_138;
  uint uStack_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  uint local_120;
  ulonglong local_100;
  
  local_100 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  lVar1 = *param_1;
  lVar30 = lVar1 + 0x10;
  local_198 = param_5;
  if (*(char *)(lVar1 + 0x1a) == '\0') {
    uVar63 = 0;
    uVar64 = 0;
    uVar36 = 0;
    uVar37 = 0;
  }
  else {
    uVar63 = 0x3f800000;
    uVar64 = 0x3f800000;
    uVar36 = 0x3f800000;
    uVar37 = 0x3f800000;
  }
  uVar18 = *(uint *)(param_1 + 0xe);
  uVar12 = *(uint *)((longlong)param_1 + 0x74);
  uVar13 = *(uint *)(param_1 + 0xf);
  uVar27 = *(uint *)((longlong)param_1 + 0x7c);
  if (((*(char *)(lVar1 + 0x14) == '\x04') && (*(char *)(lVar1 + 0x15) == '\x03')) &&
     (*(char *)(lVar1 + 0x16) == '\x03')) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  local_190 = param_1;
  local_12c = uVar18;
  local_128 = uVar12;
  local_124 = uVar13;
  local_120 = uVar27;
  if ((*(char *)((longlong)param_1 + 0x3d) != '\0') || (!bVar2)) {
    uVar16 = 0;
    local_140 = 0;
    uStack_13c = 0;
    local_138 = 0;
    uStack_134 = 0;
    local_130 = 0;
    local_200 = local_200 & 0xffff0000;
    uVar24 = uVar16;
    uVar10 = uVar16;
    uVar15 = uVar16;
    if (param_2 != 0) {
      do {
        uVar8 = (uint)uVar24;
        iVar7 = (int)uVar15;
        uVar17 = 1 << (0x1f - ((byte)uVar15 & 0x1f) & 0x1f);
        local_1b0 = uVar15 >> 5;
        cVar4 = *(char *)((longlong)param_1 + 0x3d);
        if ((*(uint *)(param_1[4] + local_1b0 * 4) & uVar17) == 0) {
          cVar4 = *(char *)((longlong)param_1 + 0x3d);
          if ((*(uint *)(param_1[2] + local_1b0 * 4) & uVar17) == 0) {
            cVar5 = *(char *)(lVar1 + 0x14);
            if (cVar5 == '\x04') {
              bVar25 = (&DAT_144108ae8)[*(byte *)(param_1[8] + uVar16)] * '\x03';
              if (cVar4 != '\0') {
                bVar25 = bVar25 + 0xf & 0xf0;
              }
              uVar13 = uVar13 + bVar25;
              if (cVar4 != '\0') {
                uVar18 = *(uint *)(param_1 + 0xf) >> 3;
                local_12c = uVar18;
              }
              bVar25 = (&DAT_144108ae8)[*(byte *)(param_1[9] + uVar16)] * '\x03';
              if (cVar4 != '\0') {
                bVar25 = bVar25 + 0xf & 0xf0;
              }
              uVar27 = uVar27 + bVar25;
              if (cVar4 != '\0') {
                uVar12 = *(uint *)((longlong)param_1 + 0x7c) >> 3;
                local_128 = uVar12;
              }
              uStack_134 = (int)uVar16 + 1;
              uVar16 = (ulonglong)uStack_134;
              uVar8 = local_138;
              local_124 = uVar13;
              local_120 = uVar27;
            }
            else {
              if (cVar5 == '\0') {
                iVar23 = 0x10;
              }
              else if (cVar5 == '\x01') {
                iVar23 = 0xc;
              }
              else if (cVar5 == '\x02') {
                iVar23 = 6;
              }
              else {
                iVar23 = 0;
                if (cVar5 == '\x03') {
                  iVar23 = 4;
                }
              }
              uVar18 = uVar18 + iVar23;
              if (cVar4 != '\0') {
                uVar13 = uVar18 * 8;
                local_124 = uVar13;
              }
              uVar12 = uVar12 + iVar23;
              local_12c = uVar18;
              local_128 = uVar12;
              if (cVar4 != '\0') {
                uVar27 = uVar12 * 8;
                local_120 = uVar27;
              }
            }
            if ((*(byte *)(lVar1 + 0x17) & 1) != 0) {
              local_138 = uVar8 + (uint)*(byte *)((longlong)param_1 + 0x3c) * 8;
            }
            if ((*(byte *)(lVar1 + 0x18) & 1) != 0) {
              local_130 = local_130 + (uint)*(byte *)((longlong)param_1 + 0x3c) * 2;
            }
          }
          else {
            cVar5 = *(char *)(lVar1 + 0x14);
            if (*(char *)(lVar1 + 0x14) == '\x04') {
              cVar5 = '\x01';
            }
            uStack_13c = (uint)uVar10;
            if (cVar5 == '\0') {
              uStack_13c = uStack_13c + 0x10;
              uVar10 = (ulonglong)uStack_13c;
            }
            else if (cVar5 == '\x01') {
              uStack_13c = uStack_13c + 0xc;
              uVar10 = (ulonglong)uStack_13c;
            }
            else if (cVar5 == '\x02') {
              uStack_13c = uStack_13c + 6;
              uVar10 = (ulonglong)uStack_13c;
            }
            else if (cVar5 == '\x03') {
              uStack_13c = uStack_13c + 4;
              uVar10 = (ulonglong)uStack_13c;
            }
          }
        }
        uVar24 = (ulonglong)(iVar7 + 1U >> 5);
        uVar8 = 1 << (0x1f - ((byte)(iVar7 + 1U) & 0x1f) & 0x1f);
        if ((*(uint *)(param_1[4] + uVar24 * 4) & uVar8) == 0) {
          if ((*(uint *)(param_1[2] + uVar24 * 4) & uVar8) == 0) {
            cVar5 = *(char *)(lVar1 + 0x15);
            if (cVar5 == '\x03') {
              bVar25 = (&DAT_144108ae8)[*(byte *)(param_1[8] + uVar16)] * '\x03';
              if (cVar4 != '\0') {
                bVar25 = bVar25 + 0xf & 0xf0;
              }
              uVar13 = uVar13 + bVar25;
              if (cVar4 != '\0') {
                uVar18 = uVar13 >> 3;
                local_12c = uVar18;
              }
              bVar25 = (&DAT_144108ae8)[*(byte *)(param_1[9] + uVar16)] * '\x03';
              if (cVar4 != '\0') {
                bVar25 = bVar25 + 0xf & 0xf0;
              }
              uVar27 = uVar27 + bVar25;
              if (cVar4 != '\0') {
                uVar12 = uVar27 >> 3;
                local_128 = uVar12;
              }
              uStack_134 = (int)uVar16 + 1;
              uVar16 = (ulonglong)uStack_134;
              local_124 = uVar13;
              local_120 = uVar27;
            }
            else {
              if (cVar5 == '\0') {
                iVar23 = 0xc;
              }
              else if (cVar5 == '\x01') {
                iVar23 = 6;
              }
              else {
                iVar23 = 0;
                if (cVar5 == '\x02') {
                  iVar23 = 4;
                }
              }
              uVar18 = uVar18 + iVar23;
              if (cVar4 != '\0') {
                uVar13 = uVar18 * 8;
                local_124 = uVar13;
              }
              uVar12 = uVar12 + iVar23;
              local_12c = uVar18;
              local_128 = uVar12;
              if (cVar4 != '\0') {
                uVar27 = uVar12 * 8;
                local_120 = uVar27;
              }
            }
            if ((*(byte *)(lVar1 + 0x17) & 2) != 0) {
              local_138 = local_138 + 0x18;
            }
            if ((*(byte *)(lVar1 + 0x18) & 2) != 0) {
              local_130 = local_130 + 6;
            }
          }
          else {
            uStack_13c = (int)uVar10 + 0xc;
            uVar10 = (ulonglong)uStack_13c;
          }
        }
        local_140 = iVar7 + 2;
        if (*(char *)(lVar1 + 0x19) != '\0') {
          uVar8 = 1 << (0x1f - ((byte)local_140 & 0x1f) & 0x1f);
          if ((*(uint *)(param_1[4] + (ulonglong)(local_140 >> 5) * 4) & uVar8) == 0) {
            if ((*(uint *)(param_1[2] + (ulonglong)(local_140 >> 5) * 4) & uVar8) == 0) {
              cVar5 = *(char *)(lVar1 + 0x16);
              if (cVar5 == '\x03') {
                bVar25 = (&DAT_144108ae8)[*(byte *)(param_1[8] + uVar16)] * '\x03';
                if (cVar4 != '\0') {
                  bVar25 = bVar25 + 0xf & 0xf0;
                }
                uVar13 = uVar13 + bVar25;
                if (cVar4 != '\0') {
                  uVar18 = uVar13 >> 3;
                  local_12c = uVar18;
                }
                bVar25 = (&DAT_144108ae8)[*(byte *)(param_1[9] + uVar16)] * '\x03';
                if (cVar4 != '\0') {
                  bVar25 = bVar25 + 0xf & 0xf0;
                }
                uVar27 = uVar27 + bVar25;
                if (cVar4 != '\0') {
                  uVar12 = uVar27 >> 3;
                  local_128 = uVar12;
                }
                uStack_134 = (int)uVar16 + 1;
                uVar16 = (ulonglong)uStack_134;
                local_124 = uVar13;
                local_120 = uVar27;
              }
              else {
                if (cVar5 == '\0') {
                  iVar23 = 0xc;
                }
                else if (cVar5 == '\x01') {
                  iVar23 = 6;
                }
                else if (cVar5 == '\x02') {
                  iVar23 = 4;
                }
                else {
                  iVar23 = 0;
                }
                uVar18 = uVar18 + iVar23;
                if (cVar4 != '\0') {
                  uVar13 = uVar18 * 8;
                  local_124 = uVar13;
                }
                uVar12 = uVar12 + iVar23;
                local_12c = uVar18;
                local_128 = uVar12;
                if (cVar4 != '\0') {
                  uVar27 = uVar12 * 8;
                  local_120 = uVar27;
                }
              }
              if ((*(byte *)(lVar1 + 0x17) & 4) != 0) {
                local_138 = local_138 + 0x18;
              }
              if ((*(byte *)(lVar1 + 0x18) & 4) != 0) {
                local_130 = local_130 + 6;
              }
            }
            else {
              uStack_13c = (int)uVar10 + 0xc;
              uVar10 = (ulonglong)uStack_13c;
            }
          }
          local_140 = iVar7 + 3;
        }
        local_1e0 = CONCAT44(local_1e0._4_4_,uVar8);
        uVar6 = (short)local_200 + 1;
        local_200 = CONCAT22(local_200._2_2_,uVar6);
        uVar24 = (ulonglong)local_138;
        uVar15 = (ulonglong)local_140;
      } while (uVar6 < param_2);
    }
    goto LAB_140836c4b;
  }
  uVar24 = 0;
  local_138 = 0;
  local_130 = 0;
  local_1f8 = 0;
  local_200 = 0;
  local_1f0 = 0;
  local_1d0 = ((*(char *)(lVar1 + 0x19) != '\0') + 2) * (uint)param_2;
  uVar8 = 0;
  local_1f4 = 0;
  uVar17 = local_1d0 >> 5;
  uVar18 = local_130;
  uVar12 = local_130;
  if (*(char *)(lVar1 + 0x19) == '\0') {
    uVar19 = uVar8;
    uVar22 = uVar8;
    if (local_1d0 >> 5 != 0) {
      uVar11 = uVar24;
      uVar15 = uVar24;
      uVar16 = uVar24;
      uVar29 = uVar24;
      uVar10 = uVar24;
      if ((7 < uVar17) &&
         (uVar11 = 0, uVar15 = 0, uVar16 = 0, uVar29 = 0, uVar10 = 0, 1 < DAT_1468387b0)) {
        iVar7 = 0;
        iVar45 = 0;
        iVar51 = 0;
        iVar57 = 0;
        iVar23 = 0;
        iVar46 = 0;
        iVar52 = 0;
        iVar58 = 0;
        iVar20 = 0;
        iVar48 = 0;
        iVar54 = 0;
        iVar60 = 0;
        iVar39 = 0;
        iVar49 = 0;
        iVar55 = 0;
        iVar61 = 0;
        local_190 = (longlong *)0x0;
        iStack_188 = 0;
        iStack_184 = 0;
        local_1b0 = 0;
        iStack_1a8 = 0;
        iStack_1a4 = 0;
        local_1e0._0_4_ = 0;
        local_1e0._4_4_ = 0;
        iStack_1d8 = 0;
        iStack_1d4 = 0;
        local_1c0 = 0;
        iStack_1b8 = 0;
        iStack_1b4 = 0;
        do {
          puVar31 = (uint *)(param_1[4] + uVar24 * 4);
          uVar18 = *puVar31;
          uVar12 = puVar31[1];
          uVar19 = puVar31[2];
          uVar22 = puVar31[3];
          uVar26 = (uVar18 & 0xaaaaaaaa) - ((uVar18 & 0xaaaaaaaa) >> 1);
          uVar28 = (uVar12 & 0xaaaaaaaa) - ((uVar12 & 0xaaaaaaaa) >> 1);
          uVar50 = (uVar19 & 0xaaaaaaaa) - ((uVar19 & 0xaaaaaaaa) >> 1);
          uVar56 = (uVar22 & 0xaaaaaaaa) - ((uVar22 & 0xaaaaaaaa) >> 1);
          uVar26 = (uVar26 >> 2 & 0x33333333) + (uVar26 & 0x33333333);
          uVar28 = (uVar28 >> 2 & 0x33333333) + (uVar28 & 0x33333333);
          uVar50 = (uVar50 >> 2 & 0x33333333) + (uVar50 & 0x33333333);
          uVar56 = (uVar56 >> 2 & 0x33333333) + (uVar56 & 0x33333333);
          auVar40._0_4_ = (uVar26 >> 4) + uVar26;
          auVar40._4_4_ = (uVar28 >> 4) + uVar28;
          auVar40._8_4_ = (uVar50 >> 4) + uVar50;
          auVar40._12_4_ = (uVar56 >> 4) + uVar56;
          auVar41 = pmulld(auVar40 & _DAT_1441095c0,_DAT_1441095b0);
          iVar7 = (auVar41._0_4_ >> 0x18) + iVar7;
          iVar45 = (auVar41._4_4_ >> 0x18) + iVar45;
          iVar51 = (auVar41._8_4_ >> 0x18) + iVar51;
          iVar57 = (auVar41._12_4_ >> 0x18) + iVar57;
          uVar26 = ((uVar18 & 0x55555555) >> 2 & 0x33333333) + (uVar18 & 0x11111111);
          uVar28 = ((uVar12 & 0x55555555) >> 2 & 0x33333333) + (uVar12 & 0x11111111);
          uVar50 = ((uVar19 & 0x55555555) >> 2 & 0x33333333) + (uVar19 & 0x11111111);
          uVar56 = ((uVar22 & 0x55555555) >> 2 & 0x33333333) + (uVar22 & 0x11111111);
          puVar31 = (uint *)(param_1[2] + uVar24 * 4);
          uVar18 = *puVar31;
          uVar12 = puVar31[1];
          uVar19 = puVar31[2];
          uVar22 = puVar31[3];
          uVar10 = (ulonglong)((int)uVar24 + 4);
          auVar42._0_4_ = (uVar26 >> 4) + uVar26;
          auVar42._4_4_ = (uVar28 >> 4) + uVar28;
          auVar42._8_4_ = (uVar50 >> 4) + uVar50;
          auVar42._12_4_ = (uVar56 >> 4) + uVar56;
          auVar41 = pmulld(auVar42 & _DAT_1441095c0,_DAT_1441095b0);
          iVar23 = (auVar41._0_4_ >> 0x18) + iVar23;
          iVar46 = (auVar41._4_4_ >> 0x18) + iVar46;
          iVar52 = (auVar41._8_4_ >> 0x18) + iVar52;
          iVar58 = (auVar41._12_4_ >> 0x18) + iVar58;
          puVar31 = (uint *)(param_1[4] + uVar10 * 4);
          uVar26 = *puVar31;
          uVar28 = puVar31[1];
          uVar50 = puVar31[2];
          uVar56 = puVar31[3];
          uVar38 = (uVar18 & 0xaaaaaaaa) - ((uVar18 & 0xaaaaaaaa) >> 1);
          uVar47 = (uVar12 & 0xaaaaaaaa) - ((uVar12 & 0xaaaaaaaa) >> 1);
          uVar53 = (uVar19 & 0xaaaaaaaa) - ((uVar19 & 0xaaaaaaaa) >> 1);
          uVar59 = (uVar22 & 0xaaaaaaaa) - ((uVar22 & 0xaaaaaaaa) >> 1);
          uVar38 = (uVar38 >> 2 & 0x33333333) + (uVar38 & 0x33333333);
          uVar47 = (uVar47 >> 2 & 0x33333333) + (uVar47 & 0x33333333);
          uVar53 = (uVar53 >> 2 & 0x33333333) + (uVar53 & 0x33333333);
          uVar59 = (uVar59 >> 2 & 0x33333333) + (uVar59 & 0x33333333);
          auVar43._0_4_ = (uVar38 >> 4) + uVar38;
          auVar43._4_4_ = (uVar47 >> 4) + uVar47;
          auVar43._8_4_ = (uVar53 >> 4) + uVar53;
          auVar43._12_4_ = (uVar59 >> 4) + uVar59;
          auVar41 = pmulld(auVar43 & _DAT_1441095c0,_DAT_1441095b0);
          iVar20 = (auVar41._0_4_ >> 0x18) + iVar20;
          iVar48 = (auVar41._4_4_ >> 0x18) + iVar48;
          iVar54 = (auVar41._8_4_ >> 0x18) + iVar54;
          iVar60 = (auVar41._12_4_ >> 0x18) + iVar60;
          uVar18 = ((uVar18 & 0x55555555) >> 2 & 0x33333333) + (uVar18 & 0x11111111);
          uVar12 = ((uVar12 & 0x55555555) >> 2 & 0x33333333) + (uVar12 & 0x11111111);
          uVar19 = ((uVar19 & 0x55555555) >> 2 & 0x33333333) + (uVar19 & 0x11111111);
          uVar22 = ((uVar22 & 0x55555555) >> 2 & 0x33333333) + (uVar22 & 0x11111111);
          auVar44._0_4_ = (uVar18 >> 4) + uVar18;
          auVar44._4_4_ = (uVar12 >> 4) + uVar12;
          auVar44._8_4_ = (uVar19 >> 4) + uVar19;
          auVar44._12_4_ = (uVar22 >> 4) + uVar22;
          auVar41 = pmulld(auVar44 & _DAT_1441095c0,_DAT_1441095b0);
          iVar39 = (auVar41._0_4_ >> 0x18) + iVar39;
          iVar49 = (auVar41._4_4_ >> 0x18) + iVar49;
          iVar55 = (auVar41._8_4_ >> 0x18) + iVar55;
          iVar61 = (auVar41._12_4_ >> 0x18) + iVar61;
          uVar38 = (int)uVar24 + 8;
          uVar24 = (ulonglong)uVar38;
          uVar18 = (uVar26 & 0xaaaaaaaa) - ((uVar26 & 0xaaaaaaaa) >> 1);
          uVar12 = (uVar28 & 0xaaaaaaaa) - ((uVar28 & 0xaaaaaaaa) >> 1);
          uVar19 = (uVar50 & 0xaaaaaaaa) - ((uVar50 & 0xaaaaaaaa) >> 1);
          uVar22 = (uVar56 & 0xaaaaaaaa) - ((uVar56 & 0xaaaaaaaa) >> 1);
          uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
          uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
          uVar19 = (uVar19 >> 2 & 0x33333333) + (uVar19 & 0x33333333);
          uVar22 = (uVar22 >> 2 & 0x33333333) + (uVar22 & 0x33333333);
          auVar41._0_4_ = (uVar18 >> 4) + uVar18;
          auVar41._4_4_ = (uVar12 >> 4) + uVar12;
          auVar41._8_4_ = (uVar19 >> 4) + uVar19;
          auVar41._12_4_ = (uVar22 >> 4) + uVar22;
          auVar41 = pmulld(auVar41 & _DAT_1441095c0,_DAT_1441095b0);
          local_190._0_4_ = (auVar41._0_4_ >> 0x18) + (int)local_190;
          local_190._4_4_ = (auVar41._4_4_ >> 0x18) + local_190._4_4_;
          iStack_188 = (auVar41._8_4_ >> 0x18) + iStack_188;
          iStack_184 = (auVar41._12_4_ >> 0x18) + iStack_184;
          puVar31 = (uint *)(param_1[2] + uVar10 * 4);
          uVar18 = *puVar31;
          uVar12 = puVar31[1];
          uVar19 = puVar31[2];
          uVar22 = puVar31[3];
          uVar26 = ((uVar26 & 0x55555555) >> 2 & 0x33333333) + (uVar26 & 0x11111111);
          uVar28 = ((uVar28 & 0x55555555) >> 2 & 0x33333333) + (uVar28 & 0x11111111);
          uVar50 = ((uVar50 & 0x55555555) >> 2 & 0x33333333) + (uVar50 & 0x11111111);
          uVar56 = ((uVar56 & 0x55555555) >> 2 & 0x33333333) + (uVar56 & 0x11111111);
          auVar34._0_4_ = (uVar26 >> 4) + uVar26;
          auVar34._4_4_ = (uVar28 >> 4) + uVar28;
          auVar34._8_4_ = (uVar50 >> 4) + uVar50;
          auVar34._12_4_ = (uVar56 >> 4) + uVar56;
          auVar41 = pmulld(auVar34 & _DAT_1441095c0,_DAT_1441095b0);
          local_1b0._0_4_ = (auVar41._0_4_ >> 0x18) + (int)local_1b0;
          local_1b0._4_4_ = (auVar41._4_4_ >> 0x18) + local_1b0._4_4_;
          iStack_1a8 = (auVar41._8_4_ >> 0x18) + iStack_1a8;
          iStack_1a4 = (auVar41._12_4_ >> 0x18) + iStack_1a4;
          uVar26 = (uVar18 & 0xaaaaaaaa) - ((uVar18 & 0xaaaaaaaa) >> 1);
          uVar28 = (uVar12 & 0xaaaaaaaa) - ((uVar12 & 0xaaaaaaaa) >> 1);
          uVar50 = (uVar19 & 0xaaaaaaaa) - ((uVar19 & 0xaaaaaaaa) >> 1);
          uVar56 = (uVar22 & 0xaaaaaaaa) - ((uVar22 & 0xaaaaaaaa) >> 1);
          uVar26 = (uVar26 >> 2 & 0x33333333) + (uVar26 & 0x33333333);
          uVar28 = (uVar28 >> 2 & 0x33333333) + (uVar28 & 0x33333333);
          uVar50 = (uVar50 >> 2 & 0x33333333) + (uVar50 & 0x33333333);
          uVar56 = (uVar56 >> 2 & 0x33333333) + (uVar56 & 0x33333333);
          auVar62._0_4_ = (uVar26 >> 4) + uVar26;
          auVar62._4_4_ = (uVar28 >> 4) + uVar28;
          auVar62._8_4_ = (uVar50 >> 4) + uVar50;
          auVar62._12_4_ = (uVar56 >> 4) + uVar56;
          auVar41 = pmulld(auVar62 & _DAT_1441095c0,_DAT_1441095b0);
          uVar18 = ((uVar18 & 0x55555555) >> 2 & 0x33333333) + (uVar18 & 0x11111111);
          uVar12 = ((uVar12 & 0x55555555) >> 2 & 0x33333333) + (uVar12 & 0x11111111);
          uVar19 = ((uVar19 & 0x55555555) >> 2 & 0x33333333) + (uVar19 & 0x11111111);
          uVar22 = ((uVar22 & 0x55555555) >> 2 & 0x33333333) + (uVar22 & 0x11111111);
          auVar35._0_4_ = (uVar18 >> 4) + uVar18;
          auVar35._4_4_ = (uVar12 >> 4) + uVar12;
          auVar35._8_4_ = (uVar19 >> 4) + uVar19;
          auVar35._12_4_ = (uVar22 >> 4) + uVar22;
          local_1e0._0_4_ = (auVar41._0_4_ >> 0x18) + (uint)local_1e0;
          local_1e0._4_4_ = (auVar41._4_4_ >> 0x18) + local_1e0._4_4_;
          iStack_1d8 = (auVar41._8_4_ >> 0x18) + iStack_1d8;
          iStack_1d4 = (auVar41._12_4_ >> 0x18) + iStack_1d4;
          auVar41 = pmulld(auVar35 & _DAT_1441095c0,_DAT_1441095b0);
          iVar32 = (auVar41._0_4_ >> 0x18) + (uint)local_1c0;
          local_1c0._4_4_ = (auVar41._4_4_ >> 0x18) + local_1c0._4_4_;
          iStack_1b8 = (auVar41._8_4_ >> 0x18) + iStack_1b8;
          iStack_1b4 = (auVar41._12_4_ >> 0x18) + iStack_1b4;
          local_1c0 = CONCAT44(local_1c0._4_4_,iVar32);
        } while (uVar38 < (uVar17 & 0xfffffff8));
        iVar20 = iVar20 + (uint)local_1e0;
        local_1e0 = CONCAT44(local_1e0._4_4_,uVar38);
        uVar11 = (ulonglong)uVar38;
        uVar10 = (ulonglong)
                 (uint)(iVar39 + iVar32 + iVar55 + iStack_1b8 +
                       iVar49 + local_1c0._4_4_ + iVar61 + iStack_1b4);
        uVar15 = (ulonglong)
                 (uint)(iVar20 + iVar54 + iStack_1d8 +
                       iVar48 + local_1e0._4_4_ + iVar60 + iStack_1d4);
        local_200 = iVar23 + (int)local_1b0 + iVar52 + iStack_1a8 +
                    iVar46 + local_1b0._4_4_ + iVar58 + iStack_1a4;
        uVar16 = (ulonglong)local_200;
        local_1f8 = iVar7 + (int)local_190 + iVar51 + iStack_188 +
                    iVar45 + local_190._4_4_ + iVar57 + iStack_184;
        uVar29 = (ulonglong)local_1f8;
      }
      uVar12 = (uint)uVar10;
      uVar18 = (uint)uVar15;
      uVar22 = (uint)uVar29;
      uVar19 = (uint)uVar11;
      if (uVar19 < uVar17) {
        uVar17 = uVar17 - uVar19;
        uVar19 = uVar19 + uVar17;
        uVar24 = (ulonglong)uVar17;
        local_1e0 = CONCAT44(local_1e0._4_4_,uVar19);
        lVar9 = uVar11 * 4;
        do {
          uVar18 = *(uint *)(lVar9 + param_1[4]);
          uVar12 = (uVar18 & 0xaaaaaaaa) - ((uVar18 & 0xaaaaaaaa) >> 1);
          uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
          uVar17 = (uVar18 >> 2 & 0x11111111) + (uVar18 & 0x11111111);
          uVar18 = *(uint *)(lVar9 + param_1[2]);
          uVar22 = (int)uVar29 + (((uVar12 >> 4) + uVar12 & 0xf0f0f0f) * 0x1010101 >> 0x18);
          uVar29 = (ulonglong)uVar22;
          local_200 = (int)uVar16 + (((uVar17 >> 4) + uVar17 & 0xf0f0f0f) * 0x1010101 >> 0x18);
          uVar16 = (ulonglong)local_200;
          uVar12 = (uVar18 & 0xaaaaaaaa) - ((uVar18 & 0xaaaaaaaa) >> 1);
          uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
          uVar17 = (uVar18 >> 2 & 0x11111111) + (uVar18 & 0x11111111);
          uVar18 = (int)uVar15 + (((uVar12 >> 4) + uVar12 & 0xf0f0f0f) * 0x1010101 >> 0x18);
          uVar15 = (ulonglong)uVar18;
          uVar12 = (int)uVar10 + (((uVar17 >> 4) + uVar17 & 0xf0f0f0f) * 0x1010101 >> 0x18);
          uVar10 = (ulonglong)uVar12;
          uVar24 = uVar24 - 1;
          lVar9 = lVar9 + 4;
          local_1f8 = uVar22;
        } while (uVar24 != 0);
      }
    }
    uVar17 = uVar8;
    if ((local_1d0 & 0x1f) == 0) goto LAB_14083652f;
    uVar50 = ~((1 << (0x20U - (char)(local_1d0 & 0x1f) & 0x1f)) - 1U);
    uVar28 = *(uint *)(param_1[4] + (ulonglong)uVar19 * 4) & uVar50;
    uVar26 = (uVar28 & 0xaaaaaaaa) - ((uVar28 & 0xaaaaaaaa) >> 1);
    uVar26 = (uVar26 >> 2 & 0x33333333) + (uVar26 & 0x33333333);
    uVar28 = (uVar28 >> 2 & 0x11111111) + (uVar28 & 0x11111111);
    local_1f8 = uVar22 + (((uVar26 >> 4) + uVar26 & 0xf0f0f0f) * 0x1010101 >> 0x18);
    uVar22 = local_200 + (((uVar28 >> 4) + uVar28 & 0xf0f0f0f) * 0x1010101 >> 0x18);
    uVar50 = *(uint *)(param_1[2] + (ulonglong)uVar19 * 4) & uVar50;
    uVar19 = (uVar50 & 0xaaaaaaaa) - ((uVar50 & 0xaaaaaaaa) >> 1);
    uVar19 = (uVar19 >> 2 & 0x33333333) + (uVar19 & 0x33333333);
    uVar26 = (uVar50 >> 2 & 0x11111111) + (uVar50 & 0x11111111);
    uVar18 = uVar18 + (((uVar19 >> 4) + uVar19 & 0xf0f0f0f) * 0x1010101 >> 0x18);
    uVar12 = uVar12 + (((uVar26 >> 4) + uVar26 & 0xf0f0f0f) * 0x1010101 >> 0x18);
  }
  else {
    uVar22 = 0x49249249;
    uVar26 = 0x24924924;
    local_1c0 = CONCAT44(local_1c0._4_4_,0x49249249);
    uVar28 = 0x92492492;
    local_1e0 = CONCAT44(local_1e0._4_4_,0x24924924);
    uVar19 = uVar8;
    if (local_1d0 >> 5 != 0) {
      puVar31 = (uint *)param_1[2];
      local_1b0 = (ulonglong)uVar17;
      lVar9 = param_1[4] - (longlong)puVar31;
      uVar10 = uVar24;
      uVar15 = uVar24;
      uVar16 = uVar24;
      uVar29 = uVar24;
      local_1e0 = local_1b0;
      do {
        uVar18 = *(uint *)(lVar9 + (longlong)puVar31);
        uVar12 = (uVar18 & uVar28) - ((uVar18 & uVar28) >> 1 & 0x55555555);
        uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
        local_1f8 = (int)uVar16 + (((uVar12 >> 4) + uVar12 & 0xf0f0f0f) * 0x1010101 >> 0x18);
        uVar16 = (ulonglong)local_1f8;
        uVar12 = (uVar18 & uVar22) - ((uVar18 & uVar22) >> 1 & 0x55555555);
        uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
        local_200 = (int)uVar24 + (((uVar12 >> 4) + uVar12 & 0xf0f0f0f) * 0x1010101 >> 0x18);
        uVar24 = (ulonglong)local_200;
        uVar18 = (uVar18 & uVar26) - ((uVar18 & uVar26) >> 1 & 0x55555555);
        uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
        uVar19 = *puVar31;
        local_1f0 = local_1f0 + (((uVar18 >> 4) + uVar18 & 0xf0f0f0f) * 0x1010101 >> 0x18);
        uVar18 = (uVar19 & uVar28) - ((uVar19 & uVar28) >> 1 & 0x55555555);
        uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
        uVar18 = (int)uVar10 + (((uVar18 >> 4) + uVar18 & 0xf0f0f0f) * 0x1010101 >> 0x18);
        uVar10 = (ulonglong)uVar18;
        uVar12 = (uVar19 & uVar22) - ((uVar19 & uVar22) >> 1 & 0x55555555);
        uVar28 = uVar28 << 2 | uVar28 >> 0x1e;
        uVar19 = uVar19 & uVar26;
        uVar22 = uVar22 << 2 | uVar22 >> 0x1e;
        uVar26 = uVar26 << 2 | uVar26 >> 0x1e;
        uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
        puVar31 = puVar31 + 1;
        uVar12 = (int)uVar29 + (((uVar12 >> 4) + uVar12 & 0xf0f0f0f) * 0x1010101 >> 0x18);
        uVar29 = (ulonglong)uVar12;
        uVar19 = uVar19 - (uVar19 >> 1 & 0x55555555);
        uVar19 = (uVar19 >> 2 & 0x33333333) + (uVar19 & 0x33333333);
        local_1f4 = (int)uVar15 + (((uVar19 >> 4) + uVar19 & 0xf0f0f0f) * 0x1010101 >> 0x18);
        uVar15 = (ulonglong)local_1f4;
        local_1e0 = local_1e0 - 1;
      } while (local_1e0 != 0);
      local_1e0 = (ulonglong)uVar26;
      local_1c0._4_4_ = (int)((ulonglong)lVar9 >> 0x20);
      local_1c0 = CONCAT44(local_1c0._4_4_,uVar22);
      uVar19 = uVar17;
    }
    uVar17 = local_1f4;
    if ((local_1d0 & 0x1f) != 0) {
      uVar26 = ~((1 << (0x20U - (char)(local_1d0 & 0x1f) & 0x1f)) - 1U);
      uVar22 = *(uint *)(param_1[4] + (ulonglong)uVar19 * 4) & uVar26;
      uVar17 = (uVar22 & uVar28) - ((uVar22 & uVar28) >> 1 & 0x55555555);
      uVar17 = (uVar17 >> 2 & 0x33333333) + (uVar17 & 0x33333333);
      local_1f8 = local_1f8 + (((uVar17 >> 4) + uVar17 & 0xf0f0f0f) * 0x1010101 >> 0x18);
      uVar17 = (uVar22 & (uint)local_1c0) - ((uVar22 & (uint)local_1c0) >> 1 & 0x55555555);
      uVar17 = (uVar17 >> 2 & 0x33333333) + (uVar17 & 0x33333333);
      local_200 = local_200 + (((uVar17 >> 4) + uVar17 & 0xf0f0f0f) * 0x1010101 >> 0x18);
      uVar17 = (uVar22 & (uint)local_1e0) - ((uVar22 & (uint)local_1e0) >> 1 & 0x55555555);
      uVar17 = (uVar17 >> 2 & 0x33333333) + (uVar17 & 0x33333333);
      local_1f0 = local_1f0 + (((uVar17 >> 4) + uVar17 & 0xf0f0f0f) * 0x1010101 >> 0x18);
      uVar26 = *(uint *)(param_1[2] + (ulonglong)uVar19 * 4) & uVar26;
      uVar17 = (uVar26 & uVar28) - ((uVar26 & uVar28) >> 1 & 0x55555555);
      uVar17 = (uVar17 >> 2 & 0x33333333) + (uVar17 & 0x33333333);
      uVar18 = uVar18 + (((uVar17 >> 4) + uVar17 & 0xf0f0f0f) * 0x1010101 >> 0x18);
      uVar17 = (uVar26 & (uint)local_1c0) - ((uVar26 & (uint)local_1c0) >> 1 & 0x55555555);
      uVar17 = (uVar17 >> 2 & 0x33333333) + (uVar17 & 0x33333333);
      uVar12 = uVar12 + (((uVar17 >> 4) + uVar17 & 0xf0f0f0f) * 0x1010101 >> 0x18);
      uVar17 = (uVar26 & (uint)local_1e0) - ((uVar26 & (uint)local_1e0) >> 1 & 0x55555555);
      uVar17 = (uVar17 >> 2 & 0x33333333) + (uVar17 & 0x33333333);
      uVar17 = local_1f4 + (((uVar17 >> 4) + uVar17 & 0xf0f0f0f) * 0x1010101 >> 0x18);
    }
LAB_14083652f:
    uVar22 = local_200;
  }
  uVar19 = (uint)param_2;
  iVar7 = uVar19 - uVar18;
  local_1e0 = CONCAT44(local_1e0._4_4_,iVar7);
  iVar23 = uVar19 - uVar12;
  cVar4 = *(char *)(lVar1 + 0x14);
  if (*(char *)(lVar1 + 0x14) == '\x04') {
    cVar4 = '\x01';
  }
  if (cVar4 == '\0') {
    uVar8 = 0x10;
  }
  else if (cVar4 == '\x01') {
    uVar8 = 0xc;
  }
  else if (cVar4 == '\x02') {
    uVar8 = 6;
  }
  else if (cVar4 == '\x03') {
    uVar8 = 4;
  }
  bVar25 = *(byte *)(lVar1 + 0x18);
  uStack_13c = (uVar18 - local_1f8) * uVar8 + (uVar12 - uVar22) * 0xc;
  if ((*(byte *)(lVar1 + 0x17) & 1) != 0) {
    local_138 = (uint)*(byte *)((longlong)param_1 + 0x3c) * iVar7 * 8;
  }
  if ((bVar25 & 1) != 0) {
    local_130 = (uint)*(byte *)((longlong)param_1 + 0x3c) * iVar7 * 2;
  }
  if ((*(byte *)(lVar1 + 0x17) & 2) != 0) {
    local_138 = local_138 + iVar23 * 0x18;
  }
  if ((bVar25 & 2) != 0) {
    local_130 = local_130 + iVar23 * 6;
  }
  uVar24 = (ulonglong)(uint)(iVar23 + iVar7);
  if (*(char *)(lVar1 + 0x19) != '\0') {
    iVar20 = uVar19 - uVar17;
    uVar24 = (ulonglong)(uint)(iVar23 + iVar7 + iVar20);
    uStack_13c = uStack_13c + (uVar17 - local_1f0) * 0xc;
    if ((*(byte *)(lVar1 + 0x17) & 4) != 0) {
      local_138 = local_138 + iVar20 * 0x18;
    }
    if ((bVar25 & 4) != 0) {
      local_130 = local_130 + iVar20 * 6;
    }
  }
  uStack_134 = (uint)uVar24;
  local_140 = local_1d0;
  if (uStack_134 != 0) {
    pbVar21 = (byte *)param_1[9];
    do {
      uVar13 = uVar13 + (byte)((&DAT_144108ae8)[pbVar21[param_1[8] - param_1[9]]] * '\x03');
      uVar27 = uVar27 + (byte)((&DAT_144108ae8)[*pbVar21] * '\x03');
      uVar24 = uVar24 - 1;
      pbVar21 = pbVar21 + 1;
      local_124 = uVar13;
      local_120 = uVar27;
    } while (uVar24 != 0);
  }
LAB_140836c4b:
  local_1fc[0] = param_2;
  local_1a0 = lVar30;
  local_180 = param_3;
  local_178 = param_4;
  local_170 = uVar63;
  uStack_16c = uVar64;
  uStack_168 = uVar36;
  uStack_164 = uVar37;
  local_150 = uVar63;
  uStack_14c = uVar64;
  uStack_148 = uVar36;
  uStack_144 = uVar37;
  if (param_3 == (undefined8 *)0x0) {
    FUN_140835050(param_1 + 0x18,lVar30,param_1,&local_140);
  }
  else {
    uVar33 = FUN_1408300b0();
    *param_3 = uVar33;
    param_3[1] = extraout_XMM0_Qb;
  }
  puVar3 = local_178;
  puVar14 = local_198;
  if (local_178 == (undefined8 *)0x0) {
    if (local_198 == (undefined4 *)0x0) {
      return;
    }
    if (*(char *)(lVar1 + 0x19) != '\0') {
      FUN_140835240(local_1fc,lVar30,param_1,&local_140);
    }
  }
  else {
    uVar33 = FUN_140831c40(local_1fc,lVar30,param_1,&local_140);
    *puVar3 = uVar33;
    puVar3[1] = extraout_XMM0_Qb_00;
    puVar14 = local_198;
  }
  if (puVar14 != (undefined4 *)0x0) {
    if (*(char *)(lVar1 + 0x19) != '\0') {
      FUN_140831110(local_160,lVar30,param_1,&local_140);
      uVar36 = (undefined4)extraout_XMM0_Qb_01;
      uVar37 = (undefined4)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
      uVar63 = extraout_XMM0_Da;
      uVar64 = extraout_XMM0_Db;
    }
    *puVar14 = uVar63;
    puVar14[1] = uVar64;
    puVar14[2] = uVar36;
    puVar14[3] = uVar37;
  }
                    /* WARNING: Read-only address (ram,0x0001441095b0) is written */
                    /* WARNING: Read-only address (ram,0x0001441095c0) is written */
  return;
}



// FUNCTION 140836d60 FUN_140836d60 body=3861 status=ok
// SIG undefined FUN_140836d60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140836d60(longlong *param_1,ushort param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined4 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  int iVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  int iVar24;
  uint *puVar25;
  uint uVar26;
  longlong lVar27;
  int iVar28;
  undefined4 extraout_XMM0_Da;
  undefined8 uVar29;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar30;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined4 uVar31;
  int iVar32;
  int iVar33;
  int iVar42;
  int iVar46;
  int iVar47;
  int iVar51;
  undefined1 auVar34 [16];
  int iVar52;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  int iVar43;
  int iVar48;
  int iVar53;
  undefined1 auVar39 [16];
  int iVar44;
  int iVar49;
  int iVar54;
  undefined1 auVar40 [16];
  int iVar45;
  int iVar50;
  int iVar55;
  undefined1 auVar41 [16];
  int iVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined1 auStack_258 [88];
  byte local_200 [4];
  uint local_1fc;
  uint local_1f8;
  ushort local_1f4;
  uint local_1f0;
  uint local_1ec;
  undefined8 local_1e0;
  int iStack_1d8;
  int iStack_1d4;
  undefined1 local_1d0 [16];
  uint local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  int iStack_1a8;
  int iStack_1a4;
  longlong *local_1a0;
  undefined8 *local_198;
  undefined4 *local_190;
  undefined8 *local_188;
  int local_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined1 local_160 [16];
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  uint local_140;
  int local_13c;
  int local_138;
  uint local_134;
  int local_130;
  undefined4 local_12c;
  undefined4 local_128;
  int local_124;
  int local_120;
  ulonglong local_100;
  
  local_100 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  lVar2 = *param_1;
  lVar27 = lVar2 + 0x10;
  local_190 = param_5;
  if (*(char *)(lVar2 + 0x1a) == '\0') {
    uVar57 = 0;
    uVar58 = 0;
    uVar30 = 0;
    uVar31 = 0;
  }
  else {
    uVar57 = 0x3f800000;
    uVar58 = 0x3f800000;
    uVar30 = 0x3f800000;
    uVar31 = 0x3f800000;
  }
  local_12c = (undefined4)param_1[0xe];
  uVar9 = 0;
  uVar15 = 0;
  uVar7 = 0;
  local_124 = (int)param_1[0xf];
  local_120 = *(int *)((longlong)param_1 + 0x7c);
  local_128 = *(undefined4 *)((longlong)param_1 + 0x74);
  local_1ec = ((*(char *)(lVar2 + 0x19) != '\0') + 2) * (uint)param_2;
  local_1e0 = local_1e0 & 0xffffffff00000000;
  local_1fc = 0;
  local_1c0 = local_1ec >> 5;
  local_1f0 = 0;
  local_1f8 = 0;
  iVar28 = local_124;
  iVar24 = local_120;
  if (*(char *)(lVar2 + 0x19) == '\0') {
    local_1d0._0_4_ = 0;
    uVar15 = uVar7;
    if (local_1ec >> 5 != 0) {
      uVar20 = uVar9;
      uVar23 = uVar9;
      uVar12 = uVar9;
      uVar22 = uVar9;
      if ((7 < local_1c0) && (uVar20 = 0, uVar23 = 0, uVar12 = 0, uVar22 = 0, 1 < DAT_1468387b0)) {
        iVar4 = 0;
        iVar42 = 0;
        iVar47 = 0;
        iVar52 = 0;
        iVar6 = 0;
        iVar43 = 0;
        iVar48 = 0;
        iVar53 = 0;
        iVar21 = 0;
        iVar44 = 0;
        iVar49 = 0;
        iVar54 = 0;
        iVar32 = 0;
        iVar45 = 0;
        iVar50 = 0;
        iVar55 = 0;
        iVar33 = 0;
        iVar46 = 0;
        iVar51 = 0;
        iVar56 = 0;
        local_180 = 0;
        iStack_17c = 0;
        iStack_178 = 0;
        iStack_174 = 0;
        local_1e0._0_4_ = 0;
        local_1e0._4_4_ = 0;
        iStack_1d8 = 0;
        iStack_1d4 = 0;
        local_1b0 = 0;
        iStack_1a8 = 0;
        iStack_1a4 = 0;
        do {
          puVar25 = (uint *)(param_1[4] + uVar9 * 4);
          uVar15 = *puVar25;
          uVar7 = puVar25[1];
          uVar16 = puVar25[2];
          uVar10 = puVar25[3];
          uVar12 = (ulonglong)((int)uVar9 + 4);
          uVar13 = (uVar15 & 0xaaaaaaaa) - ((uVar15 & 0xaaaaaaaa) >> 1);
          uVar26 = (uVar7 & 0xaaaaaaaa) - ((uVar7 & 0xaaaaaaaa) >> 1);
          uVar18 = (uVar16 & 0xaaaaaaaa) - ((uVar16 & 0xaaaaaaaa) >> 1);
          uVar17 = (uVar10 & 0xaaaaaaaa) - ((uVar10 & 0xaaaaaaaa) >> 1);
          uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
          uVar26 = (uVar26 >> 2 & 0x33333333) + (uVar26 & 0x33333333);
          uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
          uVar17 = (uVar17 >> 2 & 0x33333333) + (uVar17 & 0x33333333);
          auVar34._0_4_ = (uVar13 >> 4) + uVar13;
          auVar34._4_4_ = (uVar26 >> 4) + uVar26;
          auVar34._8_4_ = (uVar18 >> 4) + uVar18;
          auVar34._12_4_ = (uVar17 >> 4) + uVar17;
          auVar34 = pmulld(auVar34 & _DAT_1441095c0,_DAT_1441095b0);
          iVar4 = (auVar34._0_4_ >> 0x18) + iVar4;
          iVar42 = (auVar34._4_4_ >> 0x18) + iVar42;
          iVar47 = (auVar34._8_4_ >> 0x18) + iVar47;
          iVar52 = (auVar34._12_4_ >> 0x18) + iVar52;
          uVar13 = ((uVar15 & 0x55555555) >> 2 & 0x33333333) + (uVar15 & 0x11111111);
          uVar26 = ((uVar7 & 0x55555555) >> 2 & 0x33333333) + (uVar7 & 0x11111111);
          uVar18 = ((uVar16 & 0x55555555) >> 2 & 0x33333333) + (uVar16 & 0x11111111);
          uVar17 = ((uVar10 & 0x55555555) >> 2 & 0x33333333) + (uVar10 & 0x11111111);
          puVar25 = (uint *)(param_1[2] + uVar9 * 4);
          uVar15 = *puVar25;
          uVar7 = puVar25[1];
          uVar16 = puVar25[2];
          uVar10 = puVar25[3];
          auVar35._0_4_ = (uVar13 >> 4) + uVar13;
          auVar35._4_4_ = (uVar26 >> 4) + uVar26;
          auVar35._8_4_ = (uVar18 >> 4) + uVar18;
          auVar35._12_4_ = (uVar17 >> 4) + uVar17;
          auVar34 = pmulld(auVar35 & _DAT_1441095c0,_DAT_1441095b0);
          local_180 = (auVar34._0_4_ >> 0x18) + local_180;
          iStack_17c = (auVar34._4_4_ >> 0x18) + iStack_17c;
          iStack_178 = (auVar34._8_4_ >> 0x18) + iStack_178;
          iStack_174 = (auVar34._12_4_ >> 0x18) + iStack_174;
          uVar13 = (uVar15 & 0xaaaaaaaa) - ((uVar15 & 0xaaaaaaaa) >> 1);
          uVar26 = (uVar7 & 0xaaaaaaaa) - ((uVar7 & 0xaaaaaaaa) >> 1);
          uVar18 = (uVar16 & 0xaaaaaaaa) - ((uVar16 & 0xaaaaaaaa) >> 1);
          uVar17 = (uVar10 & 0xaaaaaaaa) - ((uVar10 & 0xaaaaaaaa) >> 1);
          uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
          uVar26 = (uVar26 >> 2 & 0x33333333) + (uVar26 & 0x33333333);
          uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
          uVar17 = (uVar17 >> 2 & 0x33333333) + (uVar17 & 0x33333333);
          auVar36._0_4_ = (uVar13 >> 4) + uVar13;
          auVar36._4_4_ = (uVar26 >> 4) + uVar26;
          auVar36._8_4_ = (uVar18 >> 4) + uVar18;
          auVar36._12_4_ = (uVar17 >> 4) + uVar17;
          auVar34 = pmulld(auVar36 & _DAT_1441095c0,_DAT_1441095b0);
          local_1e0._0_4_ = (auVar34._0_4_ >> 0x18) + (int)local_1e0;
          local_1e0._4_4_ = (auVar34._4_4_ >> 0x18) + local_1e0._4_4_;
          iStack_1d8 = (auVar34._8_4_ >> 0x18) + iStack_1d8;
          iStack_1d4 = (auVar34._12_4_ >> 0x18) + iStack_1d4;
          uVar13 = ((uVar15 & 0x55555555) >> 2 & 0x33333333) + (uVar15 & 0x11111111);
          uVar26 = ((uVar7 & 0x55555555) >> 2 & 0x33333333) + (uVar7 & 0x11111111);
          uVar18 = ((uVar16 & 0x55555555) >> 2 & 0x33333333) + (uVar16 & 0x11111111);
          uVar17 = ((uVar10 & 0x55555555) >> 2 & 0x33333333) + (uVar10 & 0x11111111);
          puVar25 = (uint *)(param_1[4] + uVar12 * 4);
          uVar15 = *puVar25;
          uVar7 = puVar25[1];
          uVar16 = puVar25[2];
          uVar10 = puVar25[3];
          auVar37._0_4_ = (uVar13 >> 4) + uVar13;
          auVar37._4_4_ = (uVar26 >> 4) + uVar26;
          auVar37._8_4_ = (uVar18 >> 4) + uVar18;
          auVar37._12_4_ = (uVar17 >> 4) + uVar17;
          auVar34 = pmulld(auVar37 & _DAT_1441095c0,_DAT_1441095b0);
          local_1b0._0_4_ = (auVar34._0_4_ >> 0x18) + (int)local_1b0;
          local_1b0._4_4_ = (auVar34._4_4_ >> 0x18) + local_1b0._4_4_;
          iStack_1a8 = (auVar34._8_4_ >> 0x18) + iStack_1a8;
          iStack_1a4 = (auVar34._12_4_ >> 0x18) + iStack_1a4;
          local_1d0._0_4_ = (int)uVar9 + 8;
          uVar9 = (ulonglong)(uint)local_1d0._0_4_;
          uVar13 = (uVar15 & 0xaaaaaaaa) - ((uVar15 & 0xaaaaaaaa) >> 1);
          uVar26 = (uVar7 & 0xaaaaaaaa) - ((uVar7 & 0xaaaaaaaa) >> 1);
          uVar18 = (uVar16 & 0xaaaaaaaa) - ((uVar16 & 0xaaaaaaaa) >> 1);
          uVar17 = (uVar10 & 0xaaaaaaaa) - ((uVar10 & 0xaaaaaaaa) >> 1);
          uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
          uVar26 = (uVar26 >> 2 & 0x33333333) + (uVar26 & 0x33333333);
          uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
          uVar17 = (uVar17 >> 2 & 0x33333333) + (uVar17 & 0x33333333);
          auVar38._0_4_ = (uVar13 >> 4) + uVar13;
          auVar38._4_4_ = (uVar26 >> 4) + uVar26;
          auVar38._8_4_ = (uVar18 >> 4) + uVar18;
          auVar38._12_4_ = (uVar17 >> 4) + uVar17;
          auVar34 = pmulld(auVar38 & _DAT_1441095c0,_DAT_1441095b0);
          iVar6 = (auVar34._0_4_ >> 0x18) + iVar6;
          iVar43 = (auVar34._4_4_ >> 0x18) + iVar43;
          iVar48 = (auVar34._8_4_ >> 0x18) + iVar48;
          iVar53 = (auVar34._12_4_ >> 0x18) + iVar53;
          uVar13 = ((uVar15 & 0x55555555) >> 2 & 0x33333333) + (uVar15 & 0x11111111);
          uVar26 = ((uVar7 & 0x55555555) >> 2 & 0x33333333) + (uVar7 & 0x11111111);
          uVar18 = ((uVar16 & 0x55555555) >> 2 & 0x33333333) + (uVar16 & 0x11111111);
          uVar17 = ((uVar10 & 0x55555555) >> 2 & 0x33333333) + (uVar10 & 0x11111111);
          puVar25 = (uint *)(param_1[2] + uVar12 * 4);
          uVar15 = *puVar25;
          uVar7 = puVar25[1];
          uVar16 = puVar25[2];
          uVar10 = puVar25[3];
          auVar39._0_4_ = (uVar13 >> 4) + uVar13;
          auVar39._4_4_ = (uVar26 >> 4) + uVar26;
          auVar39._8_4_ = (uVar18 >> 4) + uVar18;
          auVar39._12_4_ = (uVar17 >> 4) + uVar17;
          auVar34 = pmulld(auVar39 & _DAT_1441095c0,_DAT_1441095b0);
          iVar21 = (auVar34._0_4_ >> 0x18) + iVar21;
          iVar44 = (auVar34._4_4_ >> 0x18) + iVar44;
          iVar49 = (auVar34._8_4_ >> 0x18) + iVar49;
          iVar54 = (auVar34._12_4_ >> 0x18) + iVar54;
          uVar13 = (uVar15 & 0xaaaaaaaa) - ((uVar15 & 0xaaaaaaaa) >> 1);
          uVar26 = (uVar7 & 0xaaaaaaaa) - ((uVar7 & 0xaaaaaaaa) >> 1);
          uVar18 = (uVar16 & 0xaaaaaaaa) - ((uVar16 & 0xaaaaaaaa) >> 1);
          uVar17 = (uVar10 & 0xaaaaaaaa) - ((uVar10 & 0xaaaaaaaa) >> 1);
          uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
          uVar26 = (uVar26 >> 2 & 0x33333333) + (uVar26 & 0x33333333);
          uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
          uVar17 = (uVar17 >> 2 & 0x33333333) + (uVar17 & 0x33333333);
          auVar40._0_4_ = (uVar13 >> 4) + uVar13;
          auVar40._4_4_ = (uVar26 >> 4) + uVar26;
          auVar40._8_4_ = (uVar18 >> 4) + uVar18;
          auVar40._12_4_ = (uVar17 >> 4) + uVar17;
          auVar34 = pmulld(auVar40 & _DAT_1441095c0,_DAT_1441095b0);
          iVar32 = (auVar34._0_4_ >> 0x18) + iVar32;
          iVar45 = (auVar34._4_4_ >> 0x18) + iVar45;
          iVar50 = (auVar34._8_4_ >> 0x18) + iVar50;
          iVar55 = (auVar34._12_4_ >> 0x18) + iVar55;
          uVar15 = ((uVar15 & 0x55555555) >> 2 & 0x33333333) + (uVar15 & 0x11111111);
          uVar7 = ((uVar7 & 0x55555555) >> 2 & 0x33333333) + (uVar7 & 0x11111111);
          uVar16 = ((uVar16 & 0x55555555) >> 2 & 0x33333333) + (uVar16 & 0x11111111);
          uVar10 = ((uVar10 & 0x55555555) >> 2 & 0x33333333) + (uVar10 & 0x11111111);
          auVar41._0_4_ = (uVar15 >> 4) + uVar15;
          auVar41._4_4_ = (uVar7 >> 4) + uVar7;
          auVar41._8_4_ = (uVar16 >> 4) + uVar16;
          auVar41._12_4_ = (uVar10 >> 4) + uVar10;
          auVar34 = pmulld(auVar41 & _DAT_1441095c0,_DAT_1441095b0);
          iVar33 = (auVar34._0_4_ >> 0x18) + iVar33;
          iVar46 = (auVar34._4_4_ >> 0x18) + iVar46;
          iVar51 = (auVar34._8_4_ >> 0x18) + iVar51;
          iVar56 = (auVar34._12_4_ >> 0x18) + iVar56;
        } while ((uint)local_1d0._0_4_ < (local_1c0 & 0xfffffff8));
        local_1d0._4_12_ = (undefined1  [12])0x0;
        uVar12 = (ulonglong)
                 (uint)(iVar33 + (int)local_1b0 + iVar51 + iStack_1a8 +
                       iVar46 + local_1b0._4_4_ + iVar56 + iStack_1a4);
        uVar22 = (ulonglong)
                 (uint)(iVar32 + (int)local_1e0 + iVar50 + iStack_1d8 +
                       iVar45 + local_1e0._4_4_ + iVar55 + iStack_1d4);
        local_1fc = iVar21 + local_180 + iVar49 + iStack_178 +
                    iVar44 + iStack_17c + iVar54 + iStack_174;
        uVar23 = (ulonglong)local_1fc;
        uVar15 = iVar6 + iVar4 + iVar48 + iVar47 + iVar43 + iVar42 + iVar53 + iVar52;
        uVar20 = (ulonglong)uVar15;
        local_1e0 = CONCAT44(local_1e0._4_4_,uVar15);
      }
      uVar15 = (uint)uVar22;
      uVar7 = (uint)uVar12;
      if ((uint)uVar9 < local_1c0) {
        local_1b0 = param_1[2];
        uVar11 = (ulonglong)(local_1c0 - local_1d0._0_4_);
        lVar5 = uVar9 * 4;
        do {
          uVar15 = *(uint *)(lVar5 + param_1[4]);
          uVar7 = (uVar15 & 0xaaaaaaaa) - ((uVar15 & 0xaaaaaaaa) >> 1);
          uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
          uVar16 = (uVar15 >> 2 & 0x11111111) + (uVar15 & 0x11111111);
          uVar15 = *(uint *)(lVar5 + local_1b0);
          uVar10 = (int)uVar20 + (((uVar7 >> 4) + uVar7 & 0xf0f0f0f) * 0x1010101 >> 0x18);
          uVar20 = (ulonglong)uVar10;
          local_1fc = (int)uVar23 + (((uVar16 >> 4) + uVar16 & 0xf0f0f0f) * 0x1010101 >> 0x18);
          uVar23 = (ulonglong)local_1fc;
          uVar7 = (uVar15 & 0xaaaaaaaa) - ((uVar15 & 0xaaaaaaaa) >> 1);
          uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
          uVar16 = (uVar15 >> 2 & 0x11111111) + (uVar15 & 0x11111111);
          uVar15 = (int)uVar22 + (((uVar7 >> 4) + uVar7 & 0xf0f0f0f) * 0x1010101 >> 0x18);
          uVar22 = (ulonglong)uVar15;
          uVar7 = (int)uVar12 + (((uVar16 >> 4) + uVar16 & 0xf0f0f0f) * 0x1010101 >> 0x18);
          uVar12 = (ulonglong)uVar7;
          uVar11 = uVar11 - 1;
          lVar5 = lVar5 + 4;
        } while (uVar11 != 0);
        uVar9 = (ulonglong)(local_1d0._0_4_ + (local_1c0 - local_1d0._0_4_));
        local_1e0 = CONCAT44(local_1e0._4_4_,uVar10);
      }
    }
    local_1f8 = 0;
    local_1d0._0_4_ = local_1ec & 0x1f;
    if (local_1d0._0_4_ != 0) {
      uVar13 = ~((1 << (0x20U - (char)local_1d0._0_4_ & 0x1f)) - 1U);
      uVar10 = *(uint *)(param_1[4] + uVar9 * 4) & uVar13;
      uVar16 = (uVar10 & 0xaaaaaaaa) - ((uVar10 & 0xaaaaaaaa) >> 1);
      uVar16 = (uVar16 >> 2 & 0x33333333) + (uVar16 & 0x33333333);
      uVar10 = (uVar10 >> 2 & 0x11111111) + (uVar10 & 0x11111111);
      local_1e0 = CONCAT44(local_1e0._4_4_,
                           (int)local_1e0 +
                           (((uVar16 >> 4) + uVar16 & 0xf0f0f0f) * 0x1010101 >> 0x18));
      local_1fc = local_1fc + (((uVar10 >> 4) + uVar10 & 0xf0f0f0f) * 0x1010101 >> 0x18);
      uVar13 = *(uint *)(param_1[2] + uVar9 * 4) & uVar13;
      uVar16 = (uVar13 & 0xaaaaaaaa) - ((uVar13 & 0xaaaaaaaa) >> 1);
      uVar16 = (uVar16 >> 2 & 0x33333333) + (uVar16 & 0x33333333);
      uVar10 = (uVar13 >> 2 & 0x11111111) + (uVar13 & 0x11111111);
      uVar15 = uVar15 + (((uVar16 >> 4) + uVar16 & 0xf0f0f0f) * 0x1010101 >> 0x18);
      uVar7 = uVar7 + (((uVar10 >> 4) + uVar10 & 0xf0f0f0f) * 0x1010101 >> 0x18);
    }
  }
  else {
    uVar13 = 0x92492492;
    uVar10 = 0x49249249;
    uVar26 = 0x24924924;
    uVar16 = 0;
    uVar7 = uVar15;
    if (local_1ec >> 5 != 0) {
      puVar25 = (uint *)param_1[2];
      local_1b0 = CONCAT44(0,local_1c0);
      lVar5 = param_1[4] - (longlong)puVar25;
      local_1d0._0_8_ = local_1b0;
      uVar12 = uVar9;
      uVar22 = uVar9;
      uVar23 = uVar9;
      uVar20 = uVar9;
      uVar11 = uVar9;
      do {
        uVar15 = *(uint *)(lVar5 + (longlong)puVar25);
        uVar7 = (uVar15 & uVar13) - ((uVar15 & uVar13) >> 1 & 0x55555555);
        uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
        uVar18 = (int)uVar12 + (((uVar7 >> 4) + uVar7 & 0xf0f0f0f) * 0x1010101 >> 0x18);
        uVar12 = (ulonglong)uVar18;
        uVar7 = (uVar15 & uVar10) - ((uVar15 & uVar10) >> 1 & 0x55555555);
        uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
        local_1fc = (int)uVar22 + (((uVar7 >> 4) + uVar7 & 0xf0f0f0f) * 0x1010101 >> 0x18);
        uVar22 = (ulonglong)local_1fc;
        uVar15 = (uVar15 & uVar26) - ((uVar15 & uVar26) >> 1 & 0x55555555);
        uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
        uVar16 = *puVar25;
        local_1f0 = (int)uVar9 + (((uVar15 >> 4) + uVar15 & 0xf0f0f0f) * 0x1010101 >> 0x18);
        uVar9 = (ulonglong)local_1f0;
        uVar15 = (uVar16 & uVar13) - ((uVar16 & uVar13) >> 1 & 0x55555555);
        uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
        uVar15 = (int)uVar20 + (((uVar15 >> 4) + uVar15 & 0xf0f0f0f) * 0x1010101 >> 0x18);
        uVar20 = (ulonglong)uVar15;
        uVar7 = (uVar16 & uVar10) - ((uVar16 & uVar10) >> 1 & 0x55555555);
        uVar13 = uVar13 << 2 | uVar13 >> 0x1e;
        uVar16 = uVar16 & uVar26;
        uVar10 = uVar10 << 2 | uVar10 >> 0x1e;
        uVar26 = uVar26 << 2 | uVar26 >> 0x1e;
        uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
        puVar25 = puVar25 + 1;
        uVar7 = (int)uVar23 + (((uVar7 >> 4) + uVar7 & 0xf0f0f0f) * 0x1010101 >> 0x18);
        uVar23 = (ulonglong)uVar7;
        uVar16 = uVar16 - (uVar16 >> 1 & 0x55555555);
        uVar16 = (uVar16 >> 2 & 0x33333333) + (uVar16 & 0x33333333);
        local_1f8 = (int)uVar11 + (((uVar16 >> 4) + uVar16 & 0xf0f0f0f) * 0x1010101 >> 0x18);
        uVar11 = (ulonglong)local_1f8;
        lVar1 = local_1d0._0_8_ + -1;
        local_1d0._0_8_ = lVar1;
      } while (lVar1 != 0);
      local_1e0._4_4_ = (int)((ulonglong)lVar5 >> 0x20);
      local_1e0 = CONCAT44(local_1e0._4_4_,uVar18);
      iVar28 = (int)param_1[0xf];
      iVar24 = *(int *)((longlong)param_1 + 0x7c);
      uVar16 = local_1c0;
    }
    uVar18 = local_1ec & 0x1f;
    local_1d0._0_4_ = uVar18;
    if (uVar18 != 0) {
      uVar19 = ~((1 << (0x20U - (char)uVar18 & 0x1f)) - 1U);
      uVar17 = *(uint *)(param_1[4] + (ulonglong)uVar16 * 4) & uVar19;
      uVar18 = (uVar17 & uVar13) - ((uVar17 & uVar13) >> 1 & 0x55555555);
      uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
      local_1e0 = CONCAT44(local_1e0._4_4_,
                           (int)local_1e0 +
                           (((uVar18 >> 4) + uVar18 & 0xf0f0f0f) * 0x1010101 >> 0x18));
      uVar18 = (uVar17 & uVar10) - ((uVar17 & uVar10) >> 1 & 0x55555555);
      uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
      local_1fc = local_1fc + (((uVar18 >> 4) + uVar18 & 0xf0f0f0f) * 0x1010101 >> 0x18);
      uVar18 = (uVar17 & uVar26) - ((uVar17 & uVar26) >> 1 & 0x55555555);
      uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
      local_1f0 = local_1f0 + (((uVar18 >> 4) + uVar18 & 0xf0f0f0f) * 0x1010101 >> 0x18);
      uVar19 = *(uint *)(param_1[2] + (ulonglong)uVar16 * 4) & uVar19;
      uVar16 = (uVar19 & uVar13) - ((uVar19 & uVar13) >> 1 & 0x55555555);
      uVar16 = (uVar16 >> 2 & 0x33333333) + (uVar16 & 0x33333333);
      uVar15 = uVar15 + (((uVar16 >> 4) + uVar16 & 0xf0f0f0f) * 0x1010101 >> 0x18);
      uVar16 = (uVar19 & uVar10) - ((uVar19 & uVar10) >> 1 & 0x55555555);
      uVar16 = (uVar16 >> 2 & 0x33333333) + (uVar16 & 0x33333333);
      uVar7 = uVar7 + (((uVar16 >> 4) + uVar16 & 0xf0f0f0f) * 0x1010101 >> 0x18);
      uVar16 = (uVar19 & uVar26) - ((uVar19 & uVar26) >> 1 & 0x55555555);
      uVar16 = (uVar16 >> 2 & 0x33333333) + (uVar16 & 0x33333333);
      local_1f8 = local_1f8 + (((uVar16 >> 4) + uVar16 & 0xf0f0f0f) * 0x1010101 >> 0x18);
    }
  }
  iVar21 = param_2 - uVar7;
  iVar6 = param_2 - uVar15;
  iVar4 = (uint)*(byte *)((longlong)param_1 + 0x3c) * iVar6;
  bVar14 = *(byte *)(lVar2 + 0x18);
  local_13c = (((uVar7 - local_1fc) - (int)local_1e0) + uVar15) * 0xc;
  local_200[0] = bVar14 & 1;
  local_130 = iVar4 * 2;
  if (local_200[0] == 0) {
    local_130 = 0;
  }
  local_138 = iVar4 * 8 + iVar21 * 0x18;
  if ((bVar14 & 2) != 0) {
    local_130 = local_130 + iVar21 * 6;
  }
  uVar9 = (ulonglong)(uint)(iVar21 + iVar6);
  if (*(char *)(lVar2 + 0x19) != '\0') {
    iVar4 = param_2 - local_1f8;
    uVar9 = (ulonglong)(uint)(iVar21 + iVar6 + iVar4);
    local_13c = local_13c + (local_1f8 - local_1f0) * 0xc;
    local_138 = local_138 + iVar4 * 0x18;
    if ((bVar14 & 4) != 0) {
      local_130 = local_130 + iVar4 * 6;
    }
  }
  local_134 = (uint)uVar9;
  bVar14 = (byte)local_1ec & 0x1f;
  if (local_134 != 0) {
    pbVar8 = (byte *)param_1[9];
    uVar12 = uVar9;
    do {
      iVar28 = iVar28 + (uint)(byte)((&DAT_144108ae8)[pbVar8[param_1[8] - param_1[9]]] * '\x03');
      iVar24 = iVar24 + (uint)(byte)((&DAT_144108ae8)[*pbVar8] * '\x03');
      uVar12 = uVar12 - 1;
      pbVar8 = pbVar8 + 1;
    } while (uVar12 != 0);
    local_124 = iVar28;
    local_120 = iVar24;
    bVar14 = local_1d0[0];
  }
  local_1f8 = iVar6;
  local_1f4 = param_2;
  local_1b8 = lVar27;
  local_1a0 = param_1;
  local_198 = param_4;
  local_188 = param_3;
  local_170 = uVar57;
  uStack_16c = uVar58;
  uStack_168 = uVar30;
  uStack_164 = uVar31;
  local_150 = uVar57;
  uStack_14c = uVar58;
  uStack_148 = uVar30;
  uStack_144 = uVar31;
  if (param_3 == (undefined8 *)0x0) {
    uVar15 = 1 << (0x1f - bVar14 & 0x1f);
    if ((*(uint *)(param_1[4] + (ulonglong)local_1c0 * 4) & uVar15) == 0) {
      if ((*(uint *)(param_1[2] + (ulonglong)local_1c0 * 4) & uVar15) == 0) {
        iVar28 = iVar28 + (uint)(byte)((&DAT_144108ae8)[*(byte *)(param_1[8] + uVar9)] * '\x03');
        iVar24 = iVar24 + (uint)(byte)((&DAT_144108ae8)[*(byte *)(param_1[9] + uVar9)] * '\x03');
        local_134 = local_134 + 1;
        uVar9 = (ulonglong)local_134;
        local_138 = local_138 + (uint)*(byte *)((longlong)param_1 + 0x3c) * 8;
        local_124 = iVar28;
        local_120 = iVar24;
        if (local_200[0] != 0) {
          local_130 = local_130 + (uint)*(byte *)((longlong)param_1 + 0x3c) * 2;
        }
      }
      else {
        local_13c = local_13c + 0xc;
      }
    }
    local_140 = local_1ec + 1;
  }
  else {
    local_140 = local_1ec;
    uVar29 = FUN_140830a80(param_1 + 0x18,lVar27,param_1,&local_140);
    uVar9 = (ulonglong)local_134;
    *param_3 = uVar29;
    param_3[1] = extraout_XMM0_Qb;
    iVar28 = local_124;
    iVar24 = local_120;
  }
  if (local_198 == (undefined8 *)0x0) {
    if (local_190 == (undefined4 *)0x0) {
      return;
    }
    if (*(char *)(lVar2 + 0x19) != '\0') {
      uVar15 = 1 << (0x1f - ((byte)local_140 & 0x1f) & 0x1f);
      if ((*(uint *)(param_1[4] + (ulonglong)(local_140 >> 5) * 4) & uVar15) == 0) {
        if ((*(uint *)(param_1[2] + (ulonglong)(local_140 >> 5) * 4) & uVar15) == 0) {
          local_138 = local_138 + 0x18;
          local_134 = (int)uVar9 + 1;
          local_124 = iVar28 + (uint)(byte)((&DAT_144108ae8)[*(byte *)(param_1[8] + uVar9)] * '\x03'
                                           );
          local_120 = iVar24 + (uint)(byte)((&DAT_144108ae8)[*(byte *)(param_1[9] + uVar9)] * '\x03'
                                           );
          if ((*(byte *)(lVar2 + 0x18) & 2) != 0) {
            local_130 = local_130 + 6;
          }
        }
        else {
          local_13c = local_13c + 0xc;
        }
      }
      local_140 = local_140 + 1;
    }
  }
  else {
    uVar29 = FUN_140832150(local_200,lVar27,param_1,&local_140);
    *local_198 = uVar29;
    local_198[1] = extraout_XMM0_Qb_00;
  }
  puVar3 = local_190;
  if (local_190 != (undefined4 *)0x0) {
    if (*(char *)(lVar2 + 0x19) != '\0') {
      FUN_140831610(local_160,lVar27,param_1,&local_140);
      uVar30 = (undefined4)extraout_XMM0_Qb_01;
      uVar31 = (undefined4)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
      uVar57 = extraout_XMM0_Da;
      uVar58 = extraout_XMM0_Db;
    }
    *puVar3 = uVar57;
    puVar3[1] = uVar58;
    puVar3[2] = uVar30;
    puVar3[3] = uVar31;
  }
                    /* WARNING: Read-only address (ram,0x0001441095b0) is written */
                    /* WARNING: Read-only address (ram,0x0001441095c0) is written */
  return;
}



// FUNCTION 140837c80 FUN_140837c80 body=1570 status=ok
// SIG undefined FUN_140837c80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140837c80(longlong *param_1,ushort param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStack_188 [72];
  char local_140 [8];
  undefined8 local_138;
  longlong local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined1 local_110 [16];
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  uint local_c0;
  uint uStack_bc;
  undefined8 local_b8;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  ulonglong local_80;
  
  local_80 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  local_120 = param_5;
  lVar2 = *param_1;
  lVar9 = lVar2 + 0x10;
  if (*(char *)(lVar2 + 0x1a) == '\0') {
    local_100 = 0;
    uStack_fc = 0;
    uVar21 = 0;
    uVar22 = 0;
  }
  else {
    local_100 = 0x3f800000;
    uStack_fc = 0x3f800000;
    uVar21 = 0x3f800000;
    uVar22 = 0x3f800000;
  }
  uVar20 = CONCAT44(uStack_fc,local_100);
  uVar7 = *(uint *)(param_1 + 0xe);
  uVar8 = 0;
  uVar5 = 0;
  uVar14 = *(uint *)((longlong)param_1 + 0x74);
  uVar16 = *(uint *)(param_1 + 0xf);
  uVar18 = *(uint *)((longlong)param_1 + 0x7c);
  local_c0 = 0;
  uStack_bc = 0;
  local_b8 = 0;
  local_b0 = 0;
  uVar15 = uVar8;
  iVar10 = 0;
  uVar12 = uVar5;
  local_ac = uVar7;
  local_a8 = uVar14;
  local_a4 = uVar16;
  local_a0 = uVar18;
  if (param_2 != 0) {
    local_140[0] = *(char *)(lVar2 + 0x19);
    uVar17 = (ulonglong)param_2;
    uVar11 = uVar8;
    uVar13 = uVar8;
    do {
      iVar10 = (int)uVar8;
      uVar5 = 1 << (0x1f - ((byte)uVar8 & 0x1f) & 0x1f);
      if ((*(uint *)(param_1[4] + (uVar8 >> 5) * 4) & uVar5) == 0) {
        if ((*(uint *)(param_1[2] + (uVar8 >> 5) * 4) & uVar5) == 0) {
          uVar7 = uVar7 + 0x10;
          if (*(char *)((longlong)param_1 + 0x3d) != '\0') {
            uVar16 = uVar7 * 8;
            uVar18 = (uVar14 + 0x10) * 8;
            local_a0 = uVar18;
            local_a4 = uVar16;
          }
          uVar14 = uVar14 + 0x10;
          local_ac = uVar7;
          local_a8 = uVar14;
          if ((*(byte *)(lVar2 + 0x18) & 1) != 0) {
            local_b0 = (int)uVar13 + (uint)*(byte *)((longlong)param_1 + 0x3c) * 2;
            uVar13 = (ulonglong)local_b0;
          }
        }
        else {
          uStack_bc = (int)uVar11 + 0x10;
          uVar11 = (ulonglong)uStack_bc;
        }
      }
      uVar8 = (ulonglong)(iVar10 + 1U >> 5);
      uVar5 = 1 << (0x1f - ((byte)(iVar10 + 1U) & 0x1f) & 0x1f);
      if ((*(uint *)(param_1[4] + uVar8 * 4) & uVar5) == 0) {
        if ((*(uint *)(param_1[2] + uVar8 * 4) & uVar5) == 0) {
          cVar1 = *(char *)((longlong)param_1 + 0x3d);
          bVar4 = (&DAT_144108ae8)[*(byte *)(param_1[8] + uVar15)] * '\x03';
          if (cVar1 != '\0') {
            bVar4 = bVar4 + 0xf & 0xf0;
          }
          uVar16 = uVar16 + bVar4;
          if (cVar1 != '\0') {
            uVar7 = uVar16 >> 3;
            local_ac = uVar7;
          }
          bVar4 = (&DAT_144108ae8)[*(byte *)(param_1[9] + uVar15)] * '\x03';
          if (cVar1 != '\0') {
            bVar4 = bVar4 + 0xf & 0xf0;
          }
          uVar18 = uVar18 + bVar4;
          if (cVar1 != '\0') {
            uVar14 = uVar18 >> 3;
            local_a8 = uVar14;
          }
          uVar5 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar5;
          local_b8 = CONCAT44(uVar5,(int)local_b8 + 0x18);
          local_a4 = uVar16;
          local_a0 = uVar18;
          if ((*(byte *)(lVar2 + 0x18) & 2) != 0) {
            local_b0 = (int)uVar13 + 6;
            uVar13 = (ulonglong)local_b0;
          }
        }
        else {
          uStack_bc = (int)uVar11 + 0xc;
          uVar11 = (ulonglong)uStack_bc;
        }
      }
      local_c0 = iVar10 + 2;
      if (local_140[0] != '\0') {
        uVar5 = 1 << (0x1f - ((byte)local_c0 & 0x1f) & 0x1f);
        if ((*(uint *)(param_1[4] + (ulonglong)(local_c0 >> 5) * 4) & uVar5) == 0) {
          if ((*(uint *)(param_1[2] + (ulonglong)(local_c0 >> 5) * 4) & uVar5) == 0) {
            cVar1 = *(char *)((longlong)param_1 + 0x3d);
            bVar4 = (&DAT_144108ae8)[*(byte *)(param_1[8] + uVar15)] * '\x03';
            if (cVar1 != '\0') {
              bVar4 = bVar4 + 0xf & 0xf0;
            }
            uVar16 = uVar16 + bVar4;
            if (cVar1 != '\0') {
              uVar7 = uVar16 >> 3;
              local_ac = uVar7;
            }
            bVar4 = (&DAT_144108ae8)[*(byte *)(param_1[9] + uVar15)] * '\x03';
            if (cVar1 != '\0') {
              bVar4 = bVar4 + 0xf & 0xf0;
            }
            uVar18 = uVar18 + bVar4;
            if (cVar1 != '\0') {
              uVar14 = uVar18 >> 3;
              local_a8 = uVar14;
            }
            uVar5 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar5;
            local_b8 = CONCAT44(uVar5,(int)local_b8 + 0x18);
            local_a4 = uVar16;
            local_a0 = uVar18;
            if ((*(byte *)(lVar2 + 0x18) & 4) != 0) {
              local_b0 = (int)uVar13 + 6;
              uVar13 = (ulonglong)local_b0;
            }
          }
          else {
            uStack_bc = (int)uVar11 + 0xc;
            uVar11 = (ulonglong)uStack_bc;
          }
        }
        local_c0 = iVar10 + 3;
      }
      uVar12 = (uint)uVar13;
      uVar5 = (uint)uVar11;
      uVar8 = (ulonglong)local_c0;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
    local_138 = 0;
    iVar10 = (int)local_b8;
  }
  local_130 = lVar9;
  local_128 = param_3;
  local_118 = param_4;
  uStack_f8 = uVar21;
  uStack_f4 = uVar22;
  if (param_3 == (undefined8 *)0x0) {
    uVar6 = 1 << (0x1f - ((byte)uVar8 & 0x1f) & 0x1f);
    if ((*(uint *)(param_1[4] + (uVar8 >> 5) * 4) & uVar6) == 0) {
      if ((*(uint *)(param_1[2] + (uVar8 >> 5) * 4) & uVar6) == 0) {
        local_ac = uVar7 + 0x10;
        if (*(char *)((longlong)param_1 + 0x3d) != '\0') {
          uVar16 = local_ac * 8;
          uVar18 = (uVar14 + 0x10) * 8;
          local_a0 = uVar18;
          local_a4 = uVar16;
        }
        local_a8 = uVar14 + 0x10;
        if ((*(byte *)(lVar2 + 0x18) & 1) != 0) {
          uVar12 = uVar12 + (uint)*(byte *)((longlong)param_1 + 0x3c) * 2;
          local_b0 = uVar12;
        }
      }
      else {
        uVar5 = uVar5 + 0x10;
        uStack_bc = uVar5;
      }
    }
    local_c0 = (int)uVar8 + 1;
  }
  else {
    uVar19 = FUN_140830e80(param_1 + 0x18,lVar9,param_1,&local_c0);
    uVar15 = local_b8 >> 0x20;
    *local_128 = uVar19;
    *(undefined4 *)(local_128 + 1) = extraout_XMM0_Dc;
    *(undefined4 *)((longlong)local_128 + 0xc) = extraout_XMM0_Dd;
    uVar16 = local_a4;
    uVar18 = local_a0;
    uVar5 = uStack_bc;
    iVar10 = (int)local_b8;
    uVar12 = local_b0;
  }
  puVar3 = local_118;
  if (local_118 == (undefined8 *)0x0) {
    if (local_120 == (undefined8 *)0x0) {
      return;
    }
    if (*(char *)(lVar2 + 0x19) != '\0') {
      uVar7 = 1 << (0x1f - ((byte)local_c0 & 0x1f) & 0x1f);
      if ((*(uint *)(param_1[4] + (ulonglong)(local_c0 >> 5) * 4) & uVar7) == 0) {
        if ((*(uint *)(param_1[2] + (ulonglong)(local_c0 >> 5) * 4) & uVar7) == 0) {
          cVar1 = *(char *)((longlong)param_1 + 0x3d);
          bVar4 = (&DAT_144108ae8)[*(byte *)(param_1[8] + uVar15)] * '\x03';
          if (cVar1 != '\0') {
            bVar4 = bVar4 + 0xf & 0xf0;
          }
          local_a4 = bVar4 + uVar16;
          if (cVar1 != '\0') {
            local_ac = local_a4 >> 3;
          }
          bVar4 = (&DAT_144108ae8)[*(byte *)(param_1[9] + uVar15)] * '\x03';
          if (cVar1 != '\0') {
            bVar4 = bVar4 + 0xf & 0xf0;
          }
          local_a0 = bVar4 + uVar18;
          if (cVar1 != '\0') {
            local_a8 = local_a0 >> 3;
          }
          local_b8 = CONCAT44((int)uVar15 + 1,iVar10 + 0x18);
          if ((*(byte *)(lVar2 + 0x18) & 2) != 0) {
            local_b0 = uVar12 + 6;
          }
        }
        else {
          uStack_bc = uVar5 + 0xc;
        }
      }
      local_c0 = local_c0 + 1;
    }
  }
  else {
    uVar19 = FUN_140832450(local_140,lVar9,param_1,&local_c0);
    *puVar3 = uVar19;
    *(undefined4 *)(puVar3 + 1) = extraout_XMM0_Dc_00;
    *(undefined4 *)((longlong)puVar3 + 0xc) = extraout_XMM0_Dd_00;
  }
  puVar3 = local_120;
  if (local_120 != (undefined8 *)0x0) {
    if (*(char *)(lVar2 + 0x19) != '\0') {
      uVar20 = FUN_140831920(local_110,lVar9,param_1,&local_c0);
      uVar21 = extraout_XMM0_Dc_01;
      uVar22 = extraout_XMM0_Dd_01;
    }
    *puVar3 = uVar20;
    *(undefined4 *)(puVar3 + 1) = uVar21;
    *(undefined4 *)((longlong)puVar3 + 0xc) = uVar22;
  }
  return;
}



// FUNCTION 1408382b0 FUN_1408382b0 body=279 status=ok
// SIG undefined FUN_1408382b0(void)

void FUN_1408382b0(int param_1,float param_2,float param_3,int param_4,int *param_5,uint *param_6,
                  float *param_7)

{
  uint in_EAX;
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar3 = param_1 - 1;
  auVar4._0_4_ = 0.0;
  if (param_2 != 0.0) {
    auVar4._0_4_ = (float)uVar3 / param_2 + 0.5;
    iVar2 = (int)auVar4._0_4_;
    in_EAX = uVar3;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != auVar4._0_4_)) {
      auVar4._4_4_ = auVar4._0_4_;
      auVar4._8_8_ = 0;
      uVar1 = movmskps(uVar3,auVar4);
      in_EAX = uVar1 & 1;
      auVar4._0_4_ = (float)(int)(iVar2 - in_EAX);
    }
  }
  auVar4._0_4_ = auVar4._0_4_ * param_3;
  iVar2 = (int)auVar4._0_4_;
  auVar5._0_4_ = auVar4._0_4_;
  if ((iVar2 != -0x80000000) && ((float)iVar2 != auVar4._0_4_)) {
    auVar6._4_4_ = auVar4._0_4_;
    auVar6._0_4_ = auVar4._0_4_;
    auVar6._8_8_ = 0;
    uVar1 = movmskps(in_EAX,auVar6);
    auVar5._0_4_ = (float)(int)(iVar2 - (uVar1 & 1));
  }
  iVar2 = (int)(longlong)auVar5._0_4_;
  uVar1 = iVar2 + 1;
  if (uVar1 <= uVar3) {
    uVar3 = uVar1;
  }
  *param_5 = iVar2;
  auVar5._0_4_ = auVar4._0_4_ - (float)((longlong)auVar5._0_4_ & 0xffffffff);
  *param_6 = uVar3;
  if (param_4 != 1) {
    if (param_4 != 2) {
      if (param_4 == 3) {
        auVar5._0_4_ = auVar5._0_4_ + 0.5;
        iVar2 = (int)auVar5._0_4_;
        if ((iVar2 != -0x80000000) && ((float)iVar2 != auVar5._0_4_)) {
          auVar5._4_4_ = auVar5._0_4_;
          auVar5._8_8_ = 0;
          uVar3 = movmskps((int)param_6,auVar5);
          auVar5._0_4_ = (float)(int)(iVar2 - (uVar3 & 1));
        }
      }
      *param_7 = auVar5._0_4_;
      return;
    }
    *param_7 = 1.0;
    return;
  }
  *param_7 = 0.0;
  return;
}



// FUNCTION 1408383d0 FUN_1408383d0 body=318 status=ok
// SIG undefined FUN_1408383d0(void)

void FUN_1408383d0(longlong *param_1,longlong param_2)

{
  ushort *puVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  
  cVar2 = *(char *)(param_2 + 0x14);
  puVar1 = (ushort *)(param_2 + 0x10);
  cVar3 = *(char *)(param_2 + 0x15);
  cVar4 = *(char *)(param_2 + 0x16);
  *param_1 = param_2;
  lVar8 = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 4);
  iVar5 = *(int *)(param_2 + 0x1c);
  uVar6 = *(uint *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x84) = 0xbf800000;
  *(float *)(param_1 + 6) = (float)(iVar5 - 1) / (float)uVar6;
  param_1[1] = (ulonglong)*(ushort *)(param_2 + 0x24) + (longlong)puVar1;
  param_1[4] = (ulonglong)*(ushort *)(param_2 + 0x26) + (longlong)puVar1;
  param_1[2] = (ulonglong)*(ushort *)(param_2 + 0x28) + (longlong)puVar1;
  lVar10 = lVar8;
  if (*(ushort *)(param_2 + 0x2a) != 0xffff) {
    lVar10 = (ulonglong)*(ushort *)(param_2 + 0x2a) + (longlong)puVar1;
  }
  param_1[3] = lVar10;
  if (*(ushort *)(param_2 + 0x2c) != 0xffff) {
    lVar8 = (ulonglong)*(ushort *)(param_2 + 0x2c) + (longlong)puVar1;
  }
  param_1[5] = lVar8;
  lVar10 = 2;
  plVar9 = param_1 + 10;
  do {
    plVar9[-2] = 0;
    *plVar9 = 0;
    plVar9[2] = 0;
    plVar9 = plVar9 + 1;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  *(uint *)((longlong)param_1 + 0x34) =
       ((*(char *)(param_2 + 0x19) != '\0') + 2) * (uint)*puVar1 + 0x1f >> 5;
  *(char *)((longlong)param_1 + 0x3c) = (cVar2 == '\0') + '\x03';
  if (((cVar2 == '\x04') && (cVar3 == '\x03')) && (cVar4 == '\x03')) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
    if (((cVar2 != '\x04') && (cVar3 != '\x03')) && (cVar4 != '\x03')) goto LAB_140838504;
  }
  if (!bVar7) {
    *(undefined1 *)((longlong)param_1 + 0x3d) = 1;
    return;
  }
LAB_140838504:
  *(undefined1 *)((longlong)param_1 + 0x3d) = 0;
  return;
}



// FUNCTION 140838510 FUN_140838510 body=232 status=ok
// SIG undefined FUN_140838510(void)

void FUN_140838510(longlong *param_1,longlong param_2)

{
  ushort *puVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  
  puVar1 = (ushort *)(param_2 + 0x10);
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 4);
  iVar4 = *(int *)(param_2 + 0x1c);
  uVar5 = *(uint *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x84) = 0xbf800000;
  *(float *)(param_1 + 6) = (float)(iVar4 - 1) / (float)uVar5;
  param_1[1] = (ulonglong)*(ushort *)(param_2 + 0x24) + (longlong)puVar1;
  param_1[4] = (ulonglong)*(ushort *)(param_2 + 0x26) + (longlong)puVar1;
  param_1[2] = (ulonglong)*(ushort *)(param_2 + 0x28) + (longlong)puVar1;
  lVar6 = 0;
  lVar8 = lVar6;
  if (*(ushort *)(param_2 + 0x2a) != 0xffff) {
    lVar8 = (ulonglong)*(ushort *)(param_2 + 0x2a) + (longlong)puVar1;
  }
  param_1[3] = lVar8;
  if (*(ushort *)(param_2 + 0x2c) != 0xffff) {
    lVar6 = (ulonglong)*(ushort *)(param_2 + 0x2c) + (longlong)puVar1;
  }
  param_1[5] = lVar6;
  lVar8 = 2;
  plVar7 = param_1 + 10;
  do {
    plVar7[-2] = 0;
    *plVar7 = 0;
    plVar7[2] = 0;
    plVar7 = plVar7 + 1;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  cVar2 = *(char *)(param_2 + 0x19);
  uVar3 = *puVar1;
  *(undefined2 *)((longlong)param_1 + 0x3c) = 3;
  *(uint *)((longlong)param_1 + 0x34) = ((cVar2 != '\0') + 2) * (uint)uVar3 + 0x1f >> 5;
  return;
}



// FUNCTION 140838600 FUN_140838600 body=232 status=ok
// SIG undefined FUN_140838600(void)

void FUN_140838600(longlong *param_1,longlong param_2)

{
  ushort *puVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  
  puVar1 = (ushort *)(param_2 + 0x10);
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 4);
  iVar4 = *(int *)(param_2 + 0x1c);
  uVar5 = *(uint *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x84) = 0xbf800000;
  *(float *)(param_1 + 6) = (float)(iVar4 - 1) / (float)uVar5;
  param_1[1] = (ulonglong)*(ushort *)(param_2 + 0x24) + (longlong)puVar1;
  param_1[4] = (ulonglong)*(ushort *)(param_2 + 0x26) + (longlong)puVar1;
  param_1[2] = (ulonglong)*(ushort *)(param_2 + 0x28) + (longlong)puVar1;
  lVar6 = 0;
  lVar8 = lVar6;
  if (*(ushort *)(param_2 + 0x2a) != 0xffff) {
    lVar8 = (ulonglong)*(ushort *)(param_2 + 0x2a) + (longlong)puVar1;
  }
  param_1[3] = lVar8;
  if (*(ushort *)(param_2 + 0x2c) != 0xffff) {
    lVar6 = (ulonglong)*(ushort *)(param_2 + 0x2c) + (longlong)puVar1;
  }
  param_1[5] = lVar6;
  lVar8 = 2;
  plVar7 = param_1 + 10;
  do {
    plVar7[-2] = 0;
    *plVar7 = 0;
    plVar7[2] = 0;
    plVar7 = plVar7 + 1;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  cVar2 = *(char *)(param_2 + 0x19);
  uVar3 = *puVar1;
  *(undefined2 *)((longlong)param_1 + 0x3c) = 0x104;
  *(uint *)((longlong)param_1 + 0x34) = ((cVar2 != '\0') + 2) * (uint)uVar3 + 0x1f >> 5;
  return;
}



// FUNCTION 1408386f0 quat_lerp body=196 status=ok
// SIG undefined quat_lerp(void)

undefined8 acl::quat_lerp(undefined8 param_1,undefined8 param_2,float param_3)

{
  float fVar1;
  float in_XMM0_Dc;
  float in_XMM0_Dd;
  float fVar2;
  float fVar3;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = (float)((ulonglong)param_2 >> 0x20);
  fVar8 = (float)((ulonglong)param_1 >> 0x20);
  fVar7 = (float)param_1;
  fVar6 = in_XMM0_Dd * in_XMM1_Dd + fVar8 * fVar1 + in_XMM0_Dc * in_XMM1_Dc + fVar7 * (float)param_2
  ;
  fVar7 = ((float)((uint)fVar6 & 0x80000000 ^ (uint)(float)param_2) - fVar7) * param_3 + fVar7;
  fVar8 = ((float)((uint)fVar6 & 0x80000000 ^ (uint)fVar1) - fVar8) * param_3 + fVar8;
  fVar9 = ((float)((uint)fVar6 & 0x80000000 ^ (uint)in_XMM1_Dc) - in_XMM0_Dc) * param_3 + in_XMM0_Dc
  ;
  fVar6 = ((float)((uint)fVar6 & 0x80000000 ^ (uint)in_XMM1_Dd) - in_XMM0_Dd) * param_3 + in_XMM0_Dd
  ;
  fVar1 = fVar7 * fVar7;
  fVar9 = fVar9 * fVar9;
  fVar6 = fVar6 * fVar6;
  fVar2 = fVar9 + fVar1;
  fVar3 = fVar6 + fVar8 * fVar8;
  auVar4._0_4_ = fVar3 + fVar2;
  auVar4._4_4_ = fVar2 + fVar3;
  auVar4._8_4_ = fVar2 + fVar1 + fVar9;
  auVar4._12_4_ = fVar2 + fVar1 + fVar6;
  auVar5 = rsqrtss(auVar4,auVar4);
  fVar1 = auVar5._0_4_;
  fVar1 = fVar1 * (0.5 - auVar4._0_4_ * 0.5 * fVar1 * fVar1) + fVar1;
  fVar1 = fVar1 * (0.5 - auVar4._0_4_ * 0.5 * fVar1 * fVar1) + fVar1;
  return CONCAT44(fVar1 * fVar8,fVar1 * fVar7);
}



// FUNCTION 1408387c0 FUN_1408387c0 body=502 status=ok
// SIG undefined FUN_1408387c0(void)

void FUN_1408387c0(longlong *param_1,float param_2,undefined4 param_3)

{
  float fVar1;
  longlong lVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  longlong lVar7;
  ushort uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  uint local_res8 [2];
  uint local_res10 [2];
  
  fVar1 = *(float *)(param_1 + 6);
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  if (fVar1 < param_2) {
    param_2 = fVar1;
  }
  if (param_2 != *(float *)((longlong)param_1 + 0x84)) {
    lVar2 = *param_1;
    lVar7 = lVar2 + 0x10;
    *(float *)((longlong)param_1 + 0x84) = param_2;
    FUN_1408382b0(*(undefined4 *)(lVar2 + 0x1c),fVar1,param_2,param_3,local_res10,local_res8,
                  param_1 + 0x10);
    piVar10 = (int *)0x0;
    uVar8 = 0;
    piVar6 = piVar10;
    piVar12 = piVar10;
    iVar11 = 0;
    iVar9 = 0;
    if (*(ushort *)(lVar2 + 0x12) != 0) {
      piVar3 = piVar10;
      do {
        piVar12 = (int *)(param_1[1] + (ulonglong)uVar8 * 0x14);
        uVar5 = (uint)piVar3;
        if (uVar5 <= local_res10[0]) {
          uVar4 = *piVar12 + uVar5;
          if (local_res10[0] < uVar4) {
            if ((local_res8[0] < uVar5) || (piVar6 = piVar12, uVar4 <= local_res8[0])) {
              local_res8[0] = local_res8[0] - *piVar12;
              piVar6 = piVar12 + 5;
            }
            iVar11 = local_res10[0] - uVar5;
            iVar9 = local_res8[0] - uVar5;
            break;
          }
        }
        piVar3 = (int *)(ulonglong)(uVar5 + *piVar12);
        uVar8 = uVar8 + 1;
        piVar12 = piVar10;
        iVar11 = 0;
        iVar9 = 0;
      } while (uVar8 < *(ushort *)(lVar2 + 0x12));
    }
    piVar3 = piVar10;
    if (piVar12[2] != 0xffffffff) {
      piVar3 = (int *)((ulonglong)(uint)piVar12[2] + lVar7);
    }
    param_1[8] = (longlong)piVar3;
    piVar3 = piVar10;
    if (piVar6[2] != 0xffffffff) {
      piVar3 = (int *)((ulonglong)(uint)piVar6[2] + lVar7);
    }
    param_1[9] = (longlong)piVar3;
    piVar3 = piVar10;
    if (piVar12[3] != 0xffffffff) {
      piVar3 = (int *)((ulonglong)(uint)piVar12[3] + lVar7);
    }
    param_1[10] = (longlong)piVar3;
    piVar3 = piVar10;
    if (piVar6[3] != 0xffffffff) {
      piVar3 = (int *)((ulonglong)(uint)piVar6[3] + lVar7);
    }
    param_1[0xb] = (longlong)piVar3;
    piVar3 = piVar10;
    if (piVar12[4] != 0xffffffff) {
      piVar3 = (int *)((ulonglong)(uint)piVar12[4] + lVar7);
    }
    param_1[0xc] = (longlong)piVar3;
    if (piVar6[4] != 0xffffffff) {
      piVar10 = (int *)(lVar7 + (ulonglong)(uint)piVar6[4]);
    }
    param_1[0xd] = (longlong)piVar10;
    *(uint *)(param_1 + 0xe) = (uint)(piVar12[1] * iVar11) >> 3;
    *(uint *)((longlong)param_1 + 0x74) = (uint)(piVar6[1] * iVar9) >> 3;
    *(int *)(param_1 + 0xf) = piVar12[1] * iVar11;
    *(int *)((longlong)param_1 + 0x7c) = piVar6[1] * iVar9;
  }
  return;
}



// FUNCTION 1408389c0 unpack_quat_32 body=212 status=ok
// SIG undefined unpack_quat_32(void)

undefined8 acl::unpack_quat_32(ushort *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (float)(*param_1 >> 5) * 0.0004885198;
  fVar1 = (float)(CONCAT22(*param_1,param_1[1]) >> 10 & 0x7ff) * 0.0004885198;
  return CONCAT44((fVar1 + fVar1) - 1.0,(fVar2 + fVar2) - 1.0);
}



// FUNCTION 140838aa0 FUN_140838aa0 body=181 status=ok
// SIG undefined FUN_140838aa0(void)

undefined8 FUN_140838aa0(ushort *param_1)

{
  return CONCAT44(((float)param_1[1] * 1.5259022e-05 + (float)param_1[1] * 1.5259022e-05) - 1.0,
                  ((float)*param_1 * 1.5259022e-05 + (float)*param_1 * 1.5259022e-05) - 1.0);
}



// FUNCTION 140838b60 FUN_140838b60 body=270 status=FAIL
// SIG undefined FUN_140838b60(void)
/* DECOMPILE FAILED */

// FUNCTION 140838c70 unpack_vector3_uXX_unsafe body=220 status=ok
// SIG undefined unpack_vector3_uXX_unsafe(void)

void acl::unpack_vector3_uXX_unsafe(void)

{
  return;
}



// FUNCTION 140838d50 FUN_140838d50 body=47 status=ok
// SIG undefined FUN_140838d50(void)

longlong FUN_140838d50(void)

{
  if (DAT_14685ece8 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_14685ece8,&PTR_s__Script_ACLPlugin_144109fd0);
  }
  return DAT_14685ece8;
}



// FUNCTION 140838d80 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UACLStatsDumpCommandlet::StaticClass(void)

{
  if (DAT_14685ecf8 == 0) {
    FUN_14171ccd0(L"/Script/ACLPlugin",L"ACLStatsDumpCommandlet",&DAT_14685ecf8,FUN_140447710,0x80,
                  0x10000008,0,L"Engine",&LAB_1408390c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14291cef0,&LAB_140447700,0);
  }
  return DAT_14685ecf8;
}



// FUNCTION 140838e50 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UXPrimaryDataAsset::GetPrivateStaticClass(void)

{
  if (DAT_14685ed30 == 0) {
    FUN_14171ccd0(L"/Script/ACLPlugin",L"AnimCompress_ACLBase",&DAT_14685ed30,FUN_140447710,0x48,
                  0x10000001,0,L"Engine",&LAB_140839100,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428ecc50,&LAB_140447700,0);
  }
  return DAT_14685ed30;
}



// FUNCTION 140838f00 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UAnimCompress_ACL::StaticClass(void)

{
  if (DAT_14685ed10 == 0) {
    FUN_14171ccd0(L"/Script/ACLPlugin",L"AnimCompress_ACL",&DAT_14685ed10,FUN_140447710,0x68,
                  0x10000000,0,L"Engine",&LAB_1408390e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UXPrimaryDataAsset::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14685ed10;
}



// FUNCTION 140838fb0 FUN_140838fb0 body=47 status=ok
// SIG undefined FUN_140838fb0(void)

longlong FUN_140838fb0(void)

{
  if (DAT_14685ed28 == 0) {
    FUN_141786440(&DAT_14685ed28,&PTR_GetPrivateStaticClass_144109ae0);
  }
  return DAT_14685ed28;
}



// FUNCTION 140839000 FUN_140839000 body=162 status=ok
// SIG undefined FUN_140839000(void)

longlong FUN_140839000(void)

{
  if (DAT_14685ed40 == 0) {
    FUN_14171ccd0(L"/Script/ACLPlugin",L"AnimCompress_ACLCustom",&DAT_14685ed40,FUN_140447710,0x70,
                  0x10000000,0,L"Engine",&LAB_140839120,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UXPrimaryDataAsset::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14685ed40;
}



// FUNCTION 140839140 ACLRotationFormat_StaticEnum body=85 status=ok
// SIG undefined ACLRotationFormat_StaticEnum(void)

void ACLRotationFormat_StaticEnum(void)

{
  if (DAT_14685ece0 == 0) {
    if (DAT_14685ece8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_14685ece8,&PTR_s__Script_ACLPlugin_144109fd0);
    }
    DAT_14685ece0 = GetStaticEnum(FUN_140839310,DAT_14685ece8,L"ACLRotationFormat");
  }
  return;
}



// FUNCTION 1408391a0 ACLVectorFormat_StaticEnum body=85 status=ok
// SIG undefined ACLVectorFormat_StaticEnum(void)

void ACLVectorFormat_StaticEnum(void)

{
  if (DAT_14685ecd8 == 0) {
    if (DAT_14685ece8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_14685ece8,&PTR_s__Script_ACLPlugin_144109fd0);
    }
    DAT_14685ecd8 = GetStaticEnum(FUN_140839340,DAT_14685ece8,L"ACLVectorFormat");
  }
  return;
}



// FUNCTION 140839270 thunk_FUN_1428ecc50 body=5 status=ok
// SIG undefined thunk_FUN_1428ecc50(void)

void thunk_FUN_1428ecc50(void)

{
  FUN_1428ecc50();
  return;
}



// FUNCTION 140839280 FUN_140839280 body=47 status=ok
// SIG undefined FUN_140839280(void)

longlong FUN_140839280(void)

{
  if (DAT_14685ecf0 == 0) {
    FUN_141786440(&DAT_14685ecf0,&PTR_StaticClass_144109670);
  }
  return DAT_14685ecf0;
}



// FUNCTION 1408392b0 FUN_1408392b0 body=47 status=ok
// SIG undefined FUN_1408392b0(void)

longlong FUN_1408392b0(void)

{
  if (DAT_14685ed08 == 0) {
    FUN_141786440(&DAT_14685ed08,&PTR_StaticClass_1441097b0);
  }
  return DAT_14685ed08;
}



// FUNCTION 1408392e0 FUN_1408392e0 body=47 status=ok
// SIG undefined FUN_1408392e0(void)

longlong FUN_1408392e0(void)

{
  if (DAT_14685ed38 == 0) {
    FUN_141786440(&DAT_14685ed38,&PTR_FUN_144109c90);
  }
  return DAT_14685ed38;
}



// FUNCTION 140839310 FUN_140839310 body=47 status=ok
// SIG undefined FUN_140839310(void)

longlong FUN_140839310(void)

{
  if (DAT_14685ed20 == 0) {
    FUN_1417866a0(&DAT_14685ed20,&PTR_FUN_14626e590);
  }
  return DAT_14685ed20;
}



// FUNCTION 140839340 FUN_140839340 body=47 status=ok
// SIG undefined FUN_140839340(void)

longlong FUN_140839340(void)

{
  if (DAT_14685ed18 == 0) {
    FUN_1417866a0(&DAT_14685ed18,&PTR_FUN_14626e540);
  }
  return DAT_14685ed18;
}



// FUNCTION 140839370 FUN_140839370 body=43 status=ok
// SIG undefined FUN_140839370(void)

undefined8 * FUN_140839370(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14410aec8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1408393a0 Tick body=339 status=ok
// SIG undefined Tick(void)

void FLiveLinkClient::Tick(longlong param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  dVar5 = (double)local_res8.QuadPart * DAT_1468b02f8 + 16777213.0;
  if (*(double *)(param_1 + 0x158) <= dVar5 && dVar5 != *(double *)(param_1 + 0x158)) {
    bVar1 = false;
    iVar3 = *(int *)(param_1 + 0x120) + -1;
    if (-1 < iVar3) {
      lVar4 = (longlong)iVar3 << 4;
      bVar1 = false;
      do {
        cVar2 = (**(code **)(**(longlong **)(lVar4 + *(longlong *)(param_1 + 0x118)) + 0x20))();
        if (cVar2 == '\0') {
          FUN_1408484c0(param_1 + -8,iVar3);
          bVar1 = true;
        }
        lVar4 = lVar4 + -0x10;
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
    }
    iVar3 = *(int *)(param_1 + 0x150) + -1;
    if (-1 < iVar3) {
      lVar4 = (longlong)iVar3 << 4;
      do {
        cVar2 = (**(code **)(**(longlong **)(lVar4 + *(longlong *)(param_1 + 0x148)) + 0x28))();
        if (cVar2 != '\0') {
          TArray<TSharedPtr<FUdpReassembledMessage,1>,FDefaultAllocator>::RemoveAtSwapImpl
                    (param_1 + 0x148,iVar3,1);
        }
        lVar4 = lVar4 + -0x10;
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
    }
    QueryPerformanceCounter(&local_res8);
    *(double *)(param_1 + 0x158) = (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
    if (bVar1) {
      TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x188);
    }
  }
  FUN_140842730(param_1 + -8);
  return;
}



// FUNCTION 140839500 AddReferencedObjects body=142 status=ok
// SIG undefined AddReferencedObjects(void)

void FLiveLinkClient::AddReferencedObjects(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 local_res8;
  
  uVar2 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x130);
  uVar3 = (longlong)*(int *)(param_1 + 0x138) & 0x1fffffffffffffff;
  if (puVar1 + *(int *)(param_1 + 0x138) < puVar1) {
    uVar3 = uVar2;
  }
  if (uVar3 != 0) {
    do {
      local_res8 = *puVar1;
      (**(code **)(*param_2 + 0x38))(param_2,&local_res8,0,0);
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar2 != uVar3);
  }
  return;
}



// FUNCTION 140839590 FUN_140839590 body=400 status=ok
// SIG undefined FUN_140839590(void)

void FUN_140839590(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  
  *(undefined8 *)(param_1 + 0x160) = 0;
  plVar3 = (longlong *)param_2[1];
  lVar4 = *param_2;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x120);
  plVar8 = plVar5;
  do {
    if (plVar8 == plVar5 + (longlong)*(int *)(param_1 + 0x128) * 2) {
      iVar7 = -1;
LAB_140839604:
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar3 + 1;
        lVar4 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      if (iVar7 != -1) {
        iVar2 = *(int *)(param_1 + 0x158);
        puVar9 = (undefined8 *)((longlong)iVar7 * 0x10 + *(longlong *)(param_1 + 0x120));
        *(int *)(param_1 + 0x158) = iVar2 + 1;
        if (*(int *)(param_1 + 0x15c) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x150,iVar2);
        }
        puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x150));
        *puVar6 = *puVar9;
        lVar4 = puVar9[1];
        puVar6[1] = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
        }
        FUN_1408484c0(param_1,iVar7);
        TBaseMulticastDelegate<void>::Broadcast(param_1 + 400);
      }
      plVar3 = (longlong *)param_2[1];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar3 + 1;
        lVar4 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000140839709. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 8))(plVar3,1);
            return;
          }
        }
      }
      return;
    }
    if (*plVar8 == lVar4) {
      iVar7 = (int)((longlong)plVar8 - (longlong)plVar5 >> 4);
      goto LAB_140839604;
    }
    plVar8 = plVar8 + 2;
  } while( true );
}



// FUNCTION 140839720 FUN_140839720 body=499 status=ok
// SIG undefined FUN_140839720(void)

void FUN_140839720(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [16];
  
  iVar5 = *(int *)(param_1 + 0x128);
  *(int *)(param_1 + 0x128) = iVar5 + 1;
  if (*(int *)(param_1 + 300) < iVar5 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x120,iVar5);
  }
  puVar13 = (undefined8 *)((longlong)iVar5 * 0x10 + *(longlong *)(param_1 + 0x120));
  *puVar13 = *param_2;
  lVar10 = param_2[1];
  puVar13[1] = lVar10;
  if (lVar10 != 0) {
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
    UNLOCK();
  }
  puVar9 = (undefined4 *)FGuid::NewGuid(local_38);
  plVar3 = (longlong *)(param_1 + 0x130);
  iVar5 = *(int *)(param_1 + 0x138);
  *(int *)(param_1 + 0x138) = iVar5 + 1;
  if (*(int *)(param_1 + 0x13c) < iVar5 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3,iVar5);
  }
  uVar6 = puVar9[1];
  uVar7 = puVar9[2];
  uVar8 = puVar9[3];
  puVar4 = (undefined4 *)(*plVar3 + (longlong)iVar5 * 0x10);
  *puVar4 = *puVar9;
  puVar4[1] = uVar6;
  puVar4[2] = uVar7;
  puVar4[3] = uVar8;
  lVar10 = (**(code **)(*(longlong *)*param_2 + 0x48))();
  if (lVar10 != 0) {
    lVar11 = ULiveLinkSourceFactory::StaticClass();
    lVar14 = lVar10;
    do {
      if (lVar14 == lVar11) goto LAB_1408397f6;
      lVar14 = *(longlong *)(lVar14 + 0x30);
    } while (lVar14 != 0);
  }
  lVar10 = ULiveLinkSourceFactory::StaticClass();
LAB_1408397f6:
  uVar12 = GetTransientPackage();
  FUN_1417846f0(uVar12,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar12 = FUN_1417985e0(lVar10,uVar12,0,0,0,0,0,0,0);
  iVar5 = *(int *)(param_1 + 0x148);
  *(int *)(param_1 + 0x148) = iVar5 + 1;
  if (*(int *)(param_1 + 0x14c) < iVar5 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x140,iVar5);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x140) + (longlong)iVar5 * 8) = uVar12;
  puVar9 = (undefined4 *)(*plVar3 + -0x10 + (longlong)*(int *)(param_1 + 0x138) * 0x10);
  local_48 = *puVar9;
  uStack_44 = puVar9[1];
  uStack_40 = puVar9[2];
  uStack_3c = puVar9[3];
  (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,param_1,&local_48);
  (**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,uVar12);
  TBaseMulticastDelegate<void>::Broadcast(param_1 + 400);
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 140839920 FUN_140839920 body=490 status=ok
// SIG undefined FUN_140839920(void)

void FUN_140839920(longlong param_1,undefined4 *param_2,longlong param_3,longlong param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  BOOL BVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  int local_res8 [2];
  longlong local_res18 [2];
  longlong *local_b8;
  longlong *local_b0;
  longlong local_a8 [6];
  undefined8 local_74;
  undefined8 local_6c;
  undefined1 local_64;
  undefined4 local_60;
  longlong local_58 [2];
  longlong local_48;
  undefined1 local_38 [16];
  
  local_res18[0] = param_3;
  BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x168));
  if (BVar5 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x168));
  }
  if (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4)) {
    lVar7 = *(longlong *)(param_1 + 0xb0);
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      lVar7 = param_1 + 0xa8;
    }
    iVar6 = *(int *)(lVar7 + ((longlong)
                              ((int)((ulonglong)local_res18[0] >> 0x20) + (int)local_res18[0]) &
                             (longlong)*(int *)(param_1 + 0xb8) - 1U) * 4);
    if (iVar6 != -1) {
      do {
        plVar8 = (longlong *)((longlong)iVar6 * 0x90 + *(longlong *)(param_1 + 0x70));
        if (*plVar8 == local_res18[0]) {
          if (iVar6 != -1) goto LAB_1408399e8;
          break;
        }
        iVar6 = (int)plVar8[0x11];
      } while (iVar6 != -1);
    }
  }
  plVar8 = (longlong *)0x0;
LAB_1408399e8:
  plVar9 = plVar8 + 1;
  if (plVar8 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  if (plVar9 == (longlong *)0x0) {
    local_60 = 0x3f000000;
    local_a8[0] = 0;
    local_a8[1] = 0;
    local_a8[2] = 0;
    local_a8[3] = 0;
    local_74 = 0;
    local_6c = 0;
    local_64 = 0;
    FLiveLinkRefSkeleton::FLiveLinkRefSkeleton(local_58,param_4);
    FGuid::NewGuid(local_38);
    local_b8 = local_res18;
    local_b0 = local_a8;
    FUN_14083b480(param_1 + 0x70,local_res8,&local_b8,0);
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x3c + (longlong)local_res8[0] * 0x90);
    *puVar1 = *param_2;
    puVar1[1] = uVar2;
    puVar1[2] = uVar3;
    puVar1[3] = uVar4;
    if (local_48 != 0) {
      FMemory::Free();
    }
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    FUN_14083df50(local_a8 + 2);
    if (local_a8[0] != 0) {
      FMemory::Free();
    }
  }
  else {
    FUN_140848770(plVar9 + 2,0);
    TArray<FName,FDefaultAllocator>::operator=(plVar9 + 10,param_4);
    TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(plVar9 + 0xc,param_4 + 0x10);
    plVar8 = (longlong *)FGuid::NewGuid(&local_b8);
    lVar7 = plVar8[1];
    plVar9[0xe] = *plVar8;
    plVar9[0xf] = lVar7;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    *(undefined4 *)((longlong)plVar9 + 0x34) = *param_2;
    *(undefined4 *)(plVar9 + 7) = uVar2;
    *(undefined4 *)((longlong)plVar9 + 0x3c) = uVar3;
    *(undefined4 *)(plVar9 + 8) = uVar4;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x168));
  return;
}



// FUNCTION 140839b10 FUN_140839b10 body=92 status=ok
// SIG undefined FUN_140839b10(void)

void FUN_140839b10(longlong param_1,undefined8 param_2)

{
  BOOL BVar1;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x168));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x168));
  }
  FUN_140847ed0(param_1 + 0x70,param_2);
                    /* WARNING: Could not recover jumptable at 0x000140839b65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x168));
  return;
}



// FUNCTION 140839b70 FUN_140839b70 body=265 status=ok
// SIG undefined FUN_140839b70(void)

void FUN_140839b70(longlong param_1,undefined4 *param_2,longlong param_3,undefined8 param_4)

{
  BOOL BVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x168));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x168));
  }
  if (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4)) {
    lVar3 = *(longlong *)(param_1 + 0xb0);
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      lVar3 = param_1 + 0xa8;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)param_3 >> 0x20) + (int)param_3) &
                             (longlong)*(int *)(param_1 + 0xb8) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar2 * 0x90 + *(longlong *)(param_1 + 0x70));
        if (*plVar5 == param_3) {
          if (iVar2 != -1) goto LAB_140839c28;
          break;
        }
        iVar2 = (int)plVar5[0x11];
      } while (iVar2 != -1);
    }
  }
  plVar5 = (longlong *)0x0;
LAB_140839c28:
  plVar4 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  if (plVar4 != (longlong *)0x0) {
    local_18 = *param_2;
    uStack_14 = param_2[1];
    uStack_10 = param_2[2];
    uStack_c = param_2[3];
    FUN_14083fc70(plVar4,param_4,&local_18);
  }
                    /* WARNING: Could not recover jumptable at 0x000140839c72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x168));
  return;
}



// FUNCTION 140839d20 FUN_140839d20 body=1155 status=ok
// SIG undefined FUN_140839d20(void)

void FUN_140839d20(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  BOOL BVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  int local_a8;
  uint uStack_a4;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  uint uStack_74;
  int iStack_58;
  uint uStack_54;
  uint *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 local_40;
  
  iVar7 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_2 + 0xc)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x168));
  if (BVar5 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x168));
  }
  if (*(int *)((longlong)param_2 + 0xc) <
      ((*(int *)(param_1 + 0x78) - *(int *)(param_1 + 0xa4)) - *(int *)(param_1 + 0x54)) +
      *(int *)(param_1 + 0x28)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
  }
  uStack_a4 = 1;
  uVar2 = *(uint *)(param_1 + 0x98);
  puVar1 = (uint *)(param_1 + 0x80);
  local_a8 = 0;
  uStack_94 = 0;
  iStack_90 = 0;
  if (uVar2 != 0) {
    puVar11 = *(uint **)(param_1 + 0x90);
    if (*(uint **)(param_1 + 0x90) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar10 = *puVar11;
    iStack_90 = iVar7;
    local_a8 = iVar7;
    while (uVar10 == 0) {
      lVar9 = (longlong)local_a8;
      iStack_90 = iStack_90 + 0x20;
      iVar6 = local_a8 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar6;
      if (bVar4) goto LAB_140839e4f;
      uVar10 = puVar11[lVar9 + 1];
    }
    uStack_a4 = -uVar10 & uVar10;
    iVar6 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_94 = (iStack_90 - iVar6) + 0x1f;
    if ((int)uVar2 < (int)uStack_94) {
LAB_140839e4f:
      uStack_94 = uVar2;
    }
  }
  uStack_74 = *(uint *)(param_1 + 0x98);
  uStack_48 = 0xffffffff;
  uStack_44 = uStack_94;
  local_40 = CONCAT44(uStack_8c,iStack_90);
  uVar10 = uStack_74 & 0xffffffe0;
  iStack_58 = local_a8;
  uStack_54 = uStack_a4;
  local_50 = puVar1;
  if (uStack_74 != uVar2) {
    puVar11 = *(uint **)(param_1 + 0x90);
    if (*(uint **)(param_1 + 0x90) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar8 = puVar11[(int)uStack_74 >> 5] & -1 << ((byte)uStack_74 & 0x1f);
    iVar6 = (int)uStack_74 >> 5;
    while (uVar8 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_140839f26;
      uVar8 = puVar11[(longlong)iVar6 + 1];
      iVar6 = iVar6 + 1;
    }
    uVar8 = -uVar8 & uVar8;
    iVar6 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_74 = (uVar10 - iVar6) + 0x1f;
    if ((int)uVar2 < (int)uStack_74) {
LAB_140839f26:
      uStack_74 = uVar2;
    }
  }
  while ((lVar9 = (longlong)(int)uStack_44, uStack_44 != uStack_74 || (local_50 != puVar1))) {
    iVar6 = (int)param_2[1];
    lVar3 = *(longlong *)(param_1 + 0x70);
    *(int *)(param_2 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
    }
    *(undefined8 *)(*param_2 + (longlong)iVar6 * 8) = *(undefined8 *)(lVar9 * 0x90 + lVar3);
    uStack_48 = uStack_48 & ~uStack_54;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_58);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x168));
  uStack_a4 = 1;
  uVar2 = *(uint *)(param_1 + 0x48);
  puVar1 = (uint *)(param_1 + 0x30);
  local_a8 = 0;
  uStack_94 = 0;
  iStack_90 = 0;
  if (uVar2 != 0) {
    puVar11 = *(uint **)(param_1 + 0x40);
    if (*(uint **)(param_1 + 0x40) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar10 = *puVar11;
    iStack_90 = iVar7;
    local_a8 = iVar7;
    while (uVar10 == 0) {
      lVar9 = (longlong)local_a8;
      iStack_90 = iStack_90 + 0x20;
      iVar7 = local_a8 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar7;
      if (bVar4) goto LAB_14083a05f;
      uVar10 = puVar11[lVar9 + 1];
    }
    uStack_a4 = -uVar10 & uVar10;
    iVar7 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_94 = (iStack_90 - iVar7) + 0x1f;
    if ((int)uVar2 < (int)uStack_94) {
LAB_14083a05f:
      uStack_94 = uVar2;
    }
  }
  uStack_74 = *(uint *)(param_1 + 0x48);
  uStack_48 = 0xffffffff;
  uStack_44 = uStack_94;
  local_40 = CONCAT44(uStack_8c,iStack_90);
  uVar10 = uStack_74 & 0xffffffe0;
  iStack_58 = local_a8;
  uStack_54 = uStack_a4;
  local_50 = puVar1;
  if (uStack_74 != uVar2) {
    puVar11 = *(uint **)(param_1 + 0x40);
    if (*(uint **)(param_1 + 0x40) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar8 = puVar11[(int)uStack_74 >> 5] & -1 << ((byte)uStack_74 & 0x1f);
    iVar7 = (int)uStack_74 >> 5;
    while (uVar8 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_14083a127;
      uVar8 = puVar11[(longlong)iVar7 + 1];
      iVar7 = iVar7 + 1;
    }
    uVar8 = -uVar8 & uVar8;
    iVar7 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_74 = (uVar10 - iVar7) + 0x1f;
    if ((int)uVar2 < (int)uStack_74) {
LAB_14083a127:
      uStack_74 = uVar2;
    }
  }
  while ((lVar9 = (longlong)(int)uStack_44, uStack_44 != uStack_74 || (local_50 != puVar1))) {
    iVar7 = (int)param_2[1];
    lVar3 = *(longlong *)(param_1 + 0x20);
    *(int *)(param_2 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
    }
    *(undefined8 *)(*param_2 + (longlong)iVar7 * 8) = *(undefined8 *)(lVar9 * 0x70 + lVar3);
    uStack_48 = uStack_48 & ~uStack_54;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_58);
  }
  return;
}



// FUNCTION 14083a1b0 FUN_14083a1b0 body=193 status=ok
// SIG undefined FUN_14083a1b0(void)

ulonglong FUN_14083a1b0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,
                       undefined4 *param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 local_28 [8];
  undefined4 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  plVar4 = *(longlong **)(param_1 + 8);
  plVar7 = plVar4 + (longlong)*(int *)(param_1 + 0x10) * 4;
  do {
    if (plVar4 == plVar7) {
LAB_14083a1eb:
      uVar5 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))
                        (*(longlong **)(param_1 + 0x18),param_3);
      if ((uVar5 != 0) && (0 < *(int *)(uVar5 + 0x48))) {
        lVar2 = *(longlong *)(uVar5 + 0x40);
        uVar1 = *(undefined4 *)(lVar2 + 0x14);
        local_20 = *(undefined4 *)(lVar2 + 0x18);
        *param_5 = *(undefined4 *)(lVar2 + 0x10);
        param_5[1] = uVar1;
        param_5[2] = local_20;
        puVar3 = *(undefined4 **)(uVar5 + 0x40);
        local_18 = *puVar3;
        uStack_14 = puVar3[1];
        uStack_10 = puVar3[2];
        uStack_c = puVar3[3];
        puVar6 = (undefined8 *)FQuat::Rotator(&local_18,local_28);
        *param_4 = *puVar6;
        uVar1 = *(undefined4 *)(puVar6 + 1);
        *(undefined4 *)(param_4 + 1) = uVar1;
        return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
      }
      return uVar5 & 0xffffffffffffff00;
    }
    if (plVar4[3] == param_3) {
      if (plVar4 != (longlong *)0x0) {
        param_3 = *plVar4;
      }
      goto LAB_14083a1eb;
    }
    plVar4 = plVar4 + 4;
  } while( true );
}



// FUNCTION 14083a280 FUN_14083a280 body=188 status=ok
// SIG undefined FUN_14083a280(void)

undefined4 FUN_14083a280(longlong param_1,longlong param_2,longlong param_3,undefined1 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  
  plVar1 = *(longlong **)(param_1 + 8);
  plVar4 = plVar1 + (longlong)*(int *)(param_1 + 0x10) * 4;
  for (; plVar1 != plVar4; plVar1 = plVar1 + 4) {
    if (plVar1[3] == param_2) {
      if (plVar1 != (longlong *)0x0) {
        param_2 = *plVar1;
      }
      break;
    }
  }
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))
                    (*(longlong **)(param_1 + 0x18),param_2);
  if (lVar2 != 0) {
    plVar1 = *(longlong **)(lVar2 + 0x30);
    for (plVar4 = plVar1; plVar4 != plVar1 + *(int *)(lVar2 + 0x38); plVar4 = plVar4 + 1) {
      if (*plVar4 == param_3) {
        iVar3 = (int)((longlong)plVar4 - (longlong)plVar1 >> 3);
        if (iVar3 != -1) {
          lVar2 = *(longlong *)(lVar2 + 0x50);
          if (*(char *)(lVar2 + 4 + (longlong)iVar3 * 8) != '\0') {
            *param_4 = 1;
            return *(undefined4 *)(lVar2 + (longlong)iVar3 * 8);
          }
        }
        break;
      }
    }
  }
  *param_4 = 0;
  return 0;
}



// FUNCTION 14083a340 FUN_14083a340 body=82 status=ok
// SIG undefined FUN_14083a340(void)

ulonglong FUN_14083a340(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar1 = *(longlong **)(param_1 + 8);
  plVar3 = plVar1 + (longlong)*(int *)(param_1 + 0x10) * 4;
  do {
    if (plVar1 == plVar3) {
LAB_14083a379:
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))
                        (*(longlong **)(param_1 + 0x18),param_3);
      return CONCAT71((int7)((ulonglong)-lVar2 >> 8),-(lVar2 != 0)) & 0xffffffffffffff02;
    }
    if (plVar1[3] == param_3) {
      if (plVar1 != (longlong *)0x0) {
        param_3 = *plVar1;
      }
      goto LAB_14083a379;
    }
    plVar1 = plVar1 + 4;
  } while( true );
}



// FUNCTION 14083a3a0 FUN_14083a3a0 body=123 status=ok
// SIG undefined FUN_14083a3a0(void)

undefined8 * FUN_14083a3a0(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_14685ee18) {
    _Init_thread_header(&DAT_14685ee18);
    if (DAT_14685ee18 == -1) {
      FName::FName(&DAT_14685ee10,L"LiveLinkMotionController",1);
      _Init_thread_footer(&DAT_14685ee18);
    }
  }
  *param_2 = DAT_14685ee10;
  return param_2;
}



// FUNCTION 14083a420 EnumerateSources body=121 status=ok
// SIG undefined EnumerateSources(void)

void FLiveLinkMotionController::EnumerateSources(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 8);
  lVar4 = (longlong)*(int *)(param_1 + 0x10) * 0x20 + lVar3;
  for (; lVar3 != lVar4; lVar3 = lVar3 + 0x20) {
    iVar1 = (int)param_2[1];
    uVar2 = *(undefined8 *)(lVar3 + 0x18);
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
  }
  return;
}



// FUNCTION 14083a4a0 FUN_14083a4a0 body=110 status=ok
// SIG undefined FUN_14083a4a0(void)

undefined8 * FUN_14083a4a0(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_14410af30;
  TBaseMulticastDelegate<void>::Remove(param_1[3] + 0x1a8,param_1[4]);
  param_1[4] = 0;
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f74308;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14083a530 FUN_14083a530 body=52 status=ok
// SIG undefined FUN_14083a530(void)

undefined8 FUN_14083a530(undefined8 param_1,ulonglong param_2)

{
  FUN_14083ea10();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1d0);
  }
  return param_1;
}



// FUNCTION 14083a570 FUN_14083a570 body=217 status=ok
// SIG undefined FUN_14083a570(void)

void FUN_14083a570(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_141593110();
  lVar2 = param_1 + 0x10;
  if (param_1 == -8) {
    lVar2 = 0;
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,DAT_146b44bf0,lVar2);
  lVar2 = param_1 + 0x1e0;
  if (param_1 == -0x1d8) {
    lVar2 = 0;
  }
  plVar1 = (longlong *)FUN_141593110();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_14685ee08) {
    _Init_thread_header(&DAT_14685ee08);
    if (DAT_14685ee08 == -1) {
      FName::FName(&DAT_14685ee00,L"MotionController",1);
      _Init_thread_footer(&DAT_14685ee08);
    }
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,DAT_14685ee00,lVar2);
  FUN_140844800();
  return;
}



// FUNCTION 14083a650 FUN_14083a650 body=252 status=ok
// SIG undefined FUN_14083a650(void)

void FUN_14083a650(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = param_1 + 0x1e0;
  if (param_1 == -0x1d8) {
    lVar2 = 0;
  }
  plVar1 = (longlong *)FUN_141593110();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_14685ee08) {
    _Init_thread_header(&DAT_14685ee08);
    if (DAT_14685ee08 == -1) {
      FName::FName(&DAT_14685ee00,L"MotionController",1);
      _Init_thread_footer(&DAT_14685ee08);
    }
  }
  (**(code **)(*plVar1 + 0x20))(plVar1,DAT_14685ee00,lVar2);
  plVar1 = (longlong *)FUN_141593110();
  lVar2 = param_1 + 0x10;
  if (param_1 == -8) {
    lVar2 = 0;
  }
  (**(code **)(*plVar1 + 0x20))(plVar1,DAT_146b44bf0,lVar2);
  plVar1 = (longlong *)FUN_140844800();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
  }
  return;
}



// FUNCTION 14083a750 FUN_14083a750 body=149 status=ok
// SIG undefined FUN_14083a750(void)

undefined8 * FUN_14083a750(undefined8 *param_1,uint param_2)

{
  param_1[0x3b] = &PTR_FUN_14410af30;
  TBaseMulticastDelegate<void>::Remove(param_1[0x3e] + 0x1a8,param_1[0x3f]);
  param_1[0x3f] = 0;
  if (param_1[0x3c] != 0) {
    FMemory::Free();
  }
  param_1[0x3b] = &PTR_FUN_143f74308;
  FUN_14083ea10(param_1 + 1);
  *param_1 = IModuleInterface::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x210);
  }
  return param_1;
}



// FUNCTION 14083a7f0 FUN_14083a7f0 body=202 status=ok
// SIG undefined FUN_14083a7f0(void)

undefined8 * FUN_14083a7f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = 0;
  param_2[1] = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  param_2[3] = 0;
  param_2[3] = puVar1[2];
  puVar1[2] = 0;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(puVar1 + 3);
  *(undefined4 *)((longlong)param_2 + 0x24) = *(undefined4 *)((longlong)puVar1 + 0x1c);
  puVar1[3] = 0;
  param_2[5] = puVar1[4];
  param_2[6] = puVar1[5];
  *(undefined4 *)(param_2 + 7) = *(undefined4 *)(puVar1 + 6);
  uVar2 = *(undefined8 *)((longlong)puVar1 + 0x3c);
  *(undefined8 *)((longlong)param_2 + 0x3c) = *(undefined8 *)((longlong)puVar1 + 0x34);
  *(undefined8 *)((longlong)param_2 + 0x44) = uVar2;
  *(undefined8 *)((longlong)param_2 + 0x4c) = *(undefined8 *)((longlong)puVar1 + 0x44);
  param_2[0xb] = 0;
  param_2[0xb] = puVar1[10];
  puVar1[10] = 0;
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(puVar1 + 0xb);
  *(undefined4 *)((longlong)param_2 + 100) = *(undefined4 *)((longlong)puVar1 + 0x5c);
  puVar1[0xb] = 0;
  param_2[0xd] = 0;
  param_2[0xd] = puVar1[0xc];
  puVar1[0xc] = 0;
  *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(puVar1 + 0xd);
  *(undefined4 *)((longlong)param_2 + 0x74) = *(undefined4 *)((longlong)puVar1 + 0x6c);
  puVar1[0xd] = 0;
  uVar2 = puVar1[0xf];
  param_2[0xf] = puVar1[0xe];
  param_2[0x10] = uVar2;
  return param_2;
}



// FUNCTION 14083a8c0 FUN_14083a8c0 body=341 status=ok
// SIG undefined FUN_14083a8c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14083a8c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  _guard_xfg_dispatch_icall_nop(local_78,0,0x60);
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  FUN_142fc64d0(local_78);
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = local_d8;
  *(undefined4 *)(param_2 + 2) = (undefined4)local_d0;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_d0._4_4_;
  param_2[3] = local_c8;
  *(undefined4 *)(param_2 + 4) = (undefined4)local_c0;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_c0._4_4_;
  *(undefined4 *)(param_2 + 5) = (undefined4)local_b8;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_b8._4_4_;
  *(undefined4 *)(param_2 + 6) = (undefined4)uStack_b0;
  *(undefined4 *)((longlong)param_2 + 0x34) = uStack_b0._4_4_;
  param_2[7] = local_a8;
  *(undefined4 *)(param_2 + 8) = (undefined4)local_a0;
  *(undefined4 *)((longlong)param_2 + 0x44) = local_a0._4_4_;
  param_2[9] = local_98;
  *(undefined4 *)(param_2 + 10) = (undefined4)local_90;
  *(undefined4 *)((longlong)param_2 + 0x54) = local_90._4_4_;
  param_2[0xb] = local_88;
  *(undefined4 *)(param_2 + 0xc) = (undefined4)local_80;
  *(undefined4 *)((longlong)param_2 + 100) = local_80._4_4_;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  FUN_142fc6420(param_2 + 0xd,local_78);
  FLiveLinkSubjectFrame::~FLiveLinkSubjectFrame(&local_d8);
  return param_2;
}



// FUNCTION 14083aa20 Emplace<TTuple<FName,float>_const_&> body=414 status=ok
// SIG undefined Emplace<TTuple<FName,float>_const_&>(void)

int * TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
      Emplace<TTuple<FName,float>_const_&>
                (longlong *param_1,int *param_2,undefined4 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  int local_38 [2];
  longlong *local_30;
  
  TSparseArray<TSetElement<TTuple<FFlareSpacecraftDescription_const_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  bVar11 = false;
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *param_2 = local_38[0];
  *(undefined4 *)local_30 = uVar2;
  *(undefined4 *)((longlong)local_30 + 4) = uVar3;
  *(undefined4 *)(local_30 + 1) = uVar4;
  *(undefined4 *)((longlong)local_30 + 0xc) = uVar5;
  *(undefined4 *)(local_30 + 2) = 0xffffffff;
  iVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar10 != 1) {
    lVar1 = *local_30;
    if (iVar10 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar7 +
                      ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar9 != -1) {
        do {
          if (*(longlong *)(*param_1 + (longlong)iVar9 * 0x18) == lVar1) goto LAB_14083aaec;
          iVar9 = *(int *)(*param_1 + 0x10 + (longlong)iVar9 * 0x18);
        } while (iVar9 != -1);
      }
    }
    iVar9 = -1;
LAB_14083aaec:
    bVar11 = iVar9 != -1;
    if (bVar11) {
      ::_guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar9 * 0x18),local_30,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = iVar9;
      goto LAB_14083ab96;
    }
  }
  cVar6 = ConditionalRehash(param_1,iVar10,0);
  if (cVar6 == '\0') {
    uVar8 = (int)((ulonglong)*local_30 >> 0x20) + (int)*local_30 & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x14) = uVar8;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 2) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
LAB_14083ab96:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 14083abc0 Emplace<TTuple<FName,FString>_const_&> body=435 status=ok
// SIG undefined Emplace<TTuple<FName,FString>_const_&>(void)

int * TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
      ::Emplace<TTuple<FName,FString>_const_&>
                (longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  void *_Dst;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_28 [2];
  longlong *local_20;
  
  TSparseArray<TSetElement<TTuple<FName,FNameArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_28);
  *param_2 = local_28[0];
  *local_20 = *param_3;
  FString::FString(local_20 + 1,param_3 + 1);
  *(undefined4 *)(local_20 + 3) = 0xffffffff;
  bVar7 = false;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    lVar1 = *local_20;
    if (iVar6 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar4 != -1) {
        do {
          if (*(longlong *)((longlong)iVar4 * 0x20 + *param_1) == lVar1) goto LAB_14083ac8b;
          iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *param_1);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_14083ac8b:
    bVar7 = iVar4 != -1;
    if (bVar7) {
      _Dst = (void *)((longlong)iVar4 * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_20,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar4;
      goto LAB_14083ad48;
    }
  }
  cVar2 = TSet<TTuple<FName,FNameArray>,TDefaultMapHashableKeyFuncs<FName,FNameArray,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar6,0);
  if (cVar2 == '\0') {
    uVar5 = (int)((ulonglong)*local_20 >> 0x20) + (int)*local_20 & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_20 + 0x1c) = uVar5;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(undefined4 *)(local_20 + 3) =
         *(undefined4 *)
          ((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_14083ad48:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 14083ad80 FUN_14083ad80 body=672 status=ok
// SIG undefined FUN_14083ad80(void)

uint * FUN_14083ad80(longlong *param_1,uint *param_2,longlong *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined4 *_Src;
  undefined4 *puVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  undefined4 uVar14;
  int iVar15;
  char cVar16;
  bool bVar17;
  uint local_res8 [2];
  
  iVar15 = 1;
  uVar14 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar12 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar12 + 1)) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,uVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar12 = *(uint *)(param_1 + 6);
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar10 = *(int *)(*param_1 + 4 + (longlong)(int)uVar12 * 0x28);
    *(int *)(param_1 + 6) = iVar10;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar10 * 0x28) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  *param_2 = uVar12;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar11 +
                   (longlong)((int)(uVar12 + ((int)uVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar12 & 0x1f);
  _Src = (undefined4 *)(*param_1 + (longlong)(int)uVar12 * 0x28);
  puVar2 = (undefined4 *)*param_3;
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  uVar7 = puVar2[3];
  *_Src = *puVar2;
  _Src[1] = uVar5;
  _Src[2] = uVar6;
  _Src[3] = uVar7;
  *(undefined8 *)(_Src + 4) = 0;
  *(undefined8 *)(_Src + 6) = 0;
  _Src[8] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    uVar12 = local_res8[0];
    lVar13 = (longlong)(int)local_res8[0];
    bVar17 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar17);
    if (bVar17) {
      lVar3 = *param_1;
      if (*(longlong *)(lVar3 + 0x10 + lVar13 * 0x28) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar3 + lVar13 * 0x28),_Src,0x20);
      uVar9 = *param_2;
      bVar4 = (byte)uVar9 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = uVar9;
      }
      lVar13 = *param_1;
      *(undefined4 *)(lVar13 + (longlong)(int)uVar9 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar14 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar13 + 4 + (longlong)(int)uVar9 * 0x28) = uVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar9;
      plVar11 = (longlong *)param_1[4];
      *param_2 = uVar12;
      if (plVar11 == (longlong *)0x0) {
        plVar11 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar11 +
                       (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_14083affa;
    }
  }
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar12) {
    uVar9 = (uVar12 >> 1) + 8;
    iVar15 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    iVar10 = 0x20;
    cVar16 = '\0';
    if (uVar9 != 0) {
      iVar10 = 0x1f - iVar15;
    }
    uVar9 = (uVar12 >> 1) + 7;
    iVar15 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar9 != 0) {
      cVar16 = '\x1f' - (char)iVar15;
    }
    iVar15 = 1 << (~(byte)((iVar10 << 0x1a) >> 0x1f) & 0x20U - cVar16 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar15 <= (int)param_1[9])))) {
    uVar12 = *param_2;
    uVar9 = FCrc::MemCrc_DEPRECATED(_Src,0x10);
    uVar9 = (int)param_1[9] - 1U & uVar9;
    _Src[9] = uVar9;
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    _Src[8] = *(undefined4 *)
               ((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(uint *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         uVar12;
  }
  else {
    *(int *)(param_1 + 9) = iVar15;
    TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14083affa:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 14083b020 Emplace<TKeyInitializer<FName_const_&>_> body=419 status=ok
// SIG undefined Emplace<TKeyInitializer<FName_const_&>_>(void)

int * TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
      Emplace<TKeyInitializer<FName_const_&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_38 [2];
  longlong *local_30;
  
  TSparseArray<TSetElement<TTuple<FFlareSpacecraftDescription_const_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  plVar3 = (longlong *)*param_3;
  bVar7 = false;
  *param_2 = local_38[0];
  lVar1 = *plVar3;
  *local_30 = lVar1;
  *(undefined4 *)(local_30 + 1) = 0;
  *(undefined4 *)(local_30 + 2) = 0xffffffff;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    if (iVar6 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar4 != -1) {
        do {
          if (*(longlong *)(*param_1 + (longlong)iVar4 * 0x18) == lVar1) goto LAB_14083b0ec;
          iVar4 = *(int *)(*param_1 + 0x10 + (longlong)iVar4 * 0x18);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_14083b0ec:
    bVar7 = iVar4 != -1;
    if (bVar7) {
      ::_guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar4 * 0x18),local_30,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = iVar4;
      goto LAB_14083b19b;
    }
  }
  cVar2 = TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar6,0);
  if (cVar2 == '\0') {
    uVar5 = (int)((ulonglong)*local_30 >> 0x20) + (int)*local_30 & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x14) = uVar5;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 2) =
         *(undefined4 *)
          ((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_14083b19b:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 14083b1d0 FUN_14083b1d0 body=673 status=ok
// SIG undefined FUN_14083b1d0(void)

int * FUN_14083b1d0(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  void *_Dst;
  char cVar9;
  uint uVar10;
  longlong *plVar11;
  bool bVar12;
  
  iVar8 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<FSpriteDrawCallRecord,FDefaultAllocator>::ResizeGrow(param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar7 * 0xd0 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0xd0 + *param_1) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar11 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
  plVar11 = (longlong *)((longlong)iVar7 * 0xd0 + *param_1);
  FUN_14083a8c0(param_3,plVar11);
  *(undefined4 *)(plVar11 + 0x19) = 0xffffffff;
  bVar12 = false;
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar10 != 1) {
    lVar3 = *plVar11;
    if (uVar10 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar6 +
                      ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar7 != -1) {
        do {
          if (*(longlong *)((longlong)iVar7 * 0xd0 + *param_1) == lVar3) goto LAB_14083b332;
          iVar7 = *(int *)((longlong)iVar7 * 0xd0 + 200 + *param_1);
        } while (iVar7 != -1);
      }
    }
    iVar7 = -1;
LAB_14083b332:
    bVar12 = iVar7 != -1;
    if (bVar12) {
      _Dst = (void *)((longlong)iVar7 * 0xd0 + *param_1);
      FLiveLinkSubjectFrame::~FLiveLinkSubjectFrame((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,plVar11,200);
      TSparseArray<TSetElement<TTuple<FPrimitiveComponentId,FComponentVelocityData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar7;
      goto LAB_14083b448;
    }
  }
  if (3 < uVar10) {
    uVar5 = (uVar10 >> 1) + 8;
    iVar8 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    iVar7 = 0x20;
    cVar9 = '\0';
    if (uVar5 != 0) {
      iVar7 = 0x1f - iVar8;
    }
    uVar5 = (uVar10 >> 1) + 7;
    iVar8 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar9 = '\x1f' - (char)iVar8;
    }
    iVar8 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar9 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar10 = (int)((ulonglong)*plVar11 >> 0x20) + (int)*plVar11 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar11 + 0xcc) = uVar10;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(plVar11 + 0x19) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    FUN_140847cb0(param_1);
  }
LAB_14083b448:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 14083b480 FUN_14083b480 body=712 status=ok
// SIG undefined FUN_14083b480(void)

int * FUN_14083b480(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  void *_Dst;
  char cVar9;
  uint uVar10;
  longlong *plVar11;
  bool bVar12;
  
  iVar8 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar7 * 0x90);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x90) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar11 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
  plVar11 = (longlong *)((longlong)iVar7 * 0x90 + *param_1);
  FUN_14083a7f0(param_3,plVar11);
  *(undefined4 *)(plVar11 + 0x11) = 0xffffffff;
  bVar12 = false;
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar10 != 1) {
    lVar3 = *plVar11;
    if (uVar10 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar6 +
                      ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar7 != -1) {
        do {
          if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x90) == lVar3) goto LAB_14083b5e2;
          iVar7 = *(int *)(*param_1 + 0x88 + (longlong)iVar7 * 0x90);
        } while (iVar7 != -1);
      }
    }
    iVar7 = -1;
LAB_14083b5e2:
    bVar12 = iVar7 != -1;
    if (bVar12) {
      _Dst = (void *)((longlong)iVar7 * 0x90 + *param_1);
      if (*(longlong *)((longlong)_Dst + 0x68) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)((longlong)_Dst + 0x58) != 0) {
        FMemory::Free();
      }
      FUN_14083df50((longlong)_Dst + 0x18);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,plVar11,0x88);
      TSparseArray<TSetElement<TTuple<FSlateFontKey,TSharedRef<FCharacterList,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar7;
      goto LAB_14083b71f;
    }
  }
  if (3 < uVar10) {
    uVar5 = (uVar10 >> 1) + 8;
    iVar8 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    iVar7 = 0x20;
    cVar9 = '\0';
    if (uVar5 != 0) {
      iVar7 = 0x1f - iVar8;
    }
    uVar5 = (uVar10 >> 1) + 7;
    iVar8 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar9 = '\x1f' - (char)iVar8;
    }
    iVar8 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar9 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar10 = (int)((ulonglong)*plVar11 >> 0x20) + (int)*plVar11 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar11 + 0x8c) = uVar10;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(plVar11 + 0x11) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<FName,FVehicleCustomizationData>,TDefaultMapHashableKeyFuncs<FName,FVehicleCustomizationData,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14083b71f:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 14083b750 Emplace<TPairInitializer<FName_&&,FString_const_&>_> body=437 status=ok
// SIG undefined Emplace<TPairInitializer<FName_&&,FString_const_&>_>(void)

int * TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_&&,FString_const_&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  uint uVar6;
  int iVar7;
  bool bVar8;
  int local_28 [2];
  longlong *local_20;
  
  TSparseArray<TSetElement<TTuple<FName,FNameArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_28);
  uVar1 = param_3[1];
  *param_2 = local_28[0];
  *local_20 = *(longlong *)*param_3;
  FString::FString(local_20 + 1,uVar1);
  *(undefined4 *)(local_20 + 3) = 0xffffffff;
  bVar8 = false;
  iVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar7 != 1) {
    lVar2 = *local_20;
    if (iVar7 != 0) {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar4 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar5 != -1) {
        do {
          if (*(longlong *)((longlong)iVar5 * 0x20 + *param_1) == lVar2) goto LAB_14083b81d;
          iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + *param_1);
        } while (iVar5 != -1);
      }
    }
    iVar5 = -1;
LAB_14083b81d:
    bVar8 = iVar5 != -1;
    if (bVar8) {
      _Dst = (void *)((longlong)iVar5 * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_20,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar5;
      goto LAB_14083b8da;
    }
  }
  cVar3 = TSet<TTuple<FName,FNameArray>,TDefaultMapHashableKeyFuncs<FName,FNameArray,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar7,0);
  if (cVar3 == '\0') {
    uVar6 = (int)((ulonglong)*local_20 >> 0x20) + (int)*local_20 & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_20 + 0x1c) = uVar6;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(local_20 + 3) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         *param_2;
  }
LAB_14083b8da:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 14083b910 Emplace<TPairInitializer<FName_const_&,float_const_&>_> body=420 status=ok
// SIG undefined Emplace<TPairInitializer<FName_const_&,float_const_&>_>(void)

int * TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FName_const_&,float_const_&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  int local_38 [2];
  longlong *local_30;
  
  TSparseArray<TSetElement<TTuple<FFlareSpacecraftDescription_const_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  bVar8 = false;
  puVar1 = (undefined4 *)param_3[1];
  lVar2 = *(longlong *)*param_3;
  *param_2 = local_38[0];
  *local_30 = lVar2;
  *(undefined4 *)(local_30 + 1) = *puVar1;
  *(undefined4 *)(local_30 + 2) = 0xffffffff;
  iVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar7 != 1) {
    if (iVar7 != 0) {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar4 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar5 != -1) {
        do {
          if (*(longlong *)(*param_1 + (longlong)iVar5 * 0x18) == lVar2) goto LAB_14083b9dd;
          iVar5 = *(int *)(*param_1 + 0x10 + (longlong)iVar5 * 0x18);
        } while (iVar5 != -1);
      }
    }
    iVar5 = -1;
LAB_14083b9dd:
    bVar8 = iVar5 != -1;
    if (bVar8) {
      ::_guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar5 * 0x18),local_30,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = iVar5;
      goto LAB_14083ba8c;
    }
  }
  cVar3 = ConditionalRehash(param_1,iVar7,0);
  if (cVar3 == '\0') {
    uVar6 = (int)((ulonglong)*local_30 >> 0x20) + (int)*local_30 & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x14) = uVar6;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 2) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         *param_2;
  }
LAB_14083ba8c:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 14083bac0 FUN_14083bac0 body=1020 status=ok
// SIG undefined FUN_14083bac0(void)

void FUN_14083bac0(longlong param_1,longlong *param_2,char param_3)

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
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_14083bbbd;
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
LAB_14083bbbd:
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
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_14083bc95;
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
LAB_14083bc95:
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
      lVar5 = FUN_142a07000();
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
          FUN_14083bac0(*(longlong *)(*plVar14 + 0x2d8),&local_b8,1);
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



// FUNCTION 14083bec0 HeapSortInternal<TTuple<FGuid,FText>,FIdentityFunctor,TDereferenceWrapper<TTuple<FGuid,FText>,<lambda_3ba24c872c7654b4b6f80e3cd0610351>_>_> body=789 status=ok
// SIG undefined HeapSortInternal<TTuple<FGuid,FText>,FIdentityFunctor,TDereferenceWrapper<TTuple<FGuid,FText>,<lambda_3ba24c872c7654b4b6f80e3cd0610351>_>_>(void)

void AlgoImpl::
     HeapSortInternal<TTuple<FGuid,FText>,FIdentityFunctor,TDereferenceWrapper<TTuple<FGuid,FText>,<lambda_3ba24c872c7654b4b6f80e3cd0610351>_>_>
               (undefined8 *param_1,int param_2,undefined8 param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  
  iVar11 = (param_2 + -2) / 2;
  if (-1 < iVar11) {
    iVar13 = iVar11 * 2 + 1;
    iVar4 = iVar13;
    iVar14 = iVar11;
joined_r0x00014083bf06:
    do {
      if (iVar13 < param_2) {
        iVar13 = iVar11 * 2;
        iVar15 = iVar13 + 1;
        if (iVar13 + 2 < param_2) {
          piVar1 = (int *)(param_1 + ((longlong)iVar13 + 2) * 5);
          if ((((*(int *)((longlong)param_1 + ((longlong)iVar13 + 2) * 0x28 + 0xc) == param_4[3] &&
                piVar1[2] == param_4[2]) && piVar1[1] == param_4[1]) && *piVar1 == *param_4) ||
             (iVar12 = FText::CompareToCaseIgnored(piVar1 + 4,param_1 + (longlong)iVar15 * 5 + 2),
             iVar12 < 1)) {
            bVar10 = true;
          }
          else {
            bVar10 = false;
          }
          if (bVar10) {
            iVar15 = iVar13;
          }
          iVar15 = iVar15 + 1;
        }
        piVar1 = (int *)(param_1 + (longlong)iVar11 * 5);
        if ((((*(int *)((longlong)param_1 + (longlong)iVar11 * 0x28 + 0xc) == param_4[3] &&
              piVar1[2] == param_4[2]) && piVar1[1] == param_4[1]) && *piVar1 == *param_4) ||
           (iVar11 = FText::CompareToCaseIgnored(piVar1 + 4,param_1 + (longlong)iVar15 * 5 + 2),
           iVar11 < 1)) {
          piVar2 = (int *)(param_1 + (longlong)iVar15 * 5);
          if (piVar1 != piVar2) {
            uVar5 = *(undefined8 *)(piVar2 + 2);
            uVar6 = *(undefined8 *)piVar1;
            uVar7 = *(undefined8 *)(piVar1 + 2);
            uVar8 = *(undefined8 *)(piVar1 + 4);
            uVar9 = *(undefined8 *)(piVar1 + 6);
            uVar3 = *(undefined8 *)(piVar1 + 8);
            *(undefined8 *)piVar1 = *(undefined8 *)piVar2;
            *(undefined8 *)(piVar1 + 2) = uVar5;
            uVar5 = *(undefined8 *)(piVar2 + 6);
            *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(piVar2 + 4);
            *(undefined8 *)(piVar1 + 6) = uVar5;
            *(undefined8 *)(piVar1 + 8) = *(undefined8 *)(piVar2 + 8);
            *(undefined8 *)piVar2 = uVar6;
            *(undefined8 *)(piVar2 + 2) = uVar7;
            *(undefined8 *)(piVar2 + 4) = uVar8;
            *(undefined8 *)(piVar2 + 6) = uVar9;
            *(undefined8 *)(piVar2 + 8) = uVar3;
          }
          iVar13 = iVar15 * 2 + 1;
          iVar11 = iVar15;
          goto joined_r0x00014083bf06;
        }
      }
      iVar13 = iVar4 + -2;
      iVar11 = iVar14 + -1;
      iVar4 = iVar13;
      iVar14 = iVar11;
    } while (-1 < iVar11);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar16 = param_1 + (longlong)param_2 * 5;
    do {
      if (param_1 != puVar16) {
        uVar5 = puVar16[1];
        uVar6 = *param_1;
        uVar7 = param_1[1];
        uVar8 = param_1[2];
        uVar9 = param_1[3];
        uVar3 = param_1[4];
        *param_1 = *puVar16;
        param_1[1] = uVar5;
        uVar5 = puVar16[3];
        param_1[2] = puVar16[2];
        param_1[3] = uVar5;
        param_1[4] = puVar16[4];
        *puVar16 = uVar6;
        puVar16[1] = uVar7;
        puVar16[2] = uVar8;
        puVar16[3] = uVar9;
        puVar16[4] = uVar3;
      }
      iVar11 = 0;
      if (1 < param_2) {
        do {
          iVar4 = iVar11 * 2;
          iVar13 = iVar4 + 1;
          if (iVar4 + 2 < param_2) {
            piVar1 = (int *)(param_1 + ((longlong)iVar4 + 2) * 5);
            if ((((*(int *)((longlong)param_1 + ((longlong)iVar4 + 2) * 0x28 + 0xc) == param_4[3] &&
                  piVar1[2] == param_4[2]) && piVar1[1] == param_4[1]) && *param_4 == *piVar1) ||
               (iVar14 = FText::CompareToCaseIgnored(piVar1 + 4,param_1 + (longlong)iVar13 * 5 + 2),
               iVar14 < 1)) {
              bVar10 = true;
            }
            else {
              bVar10 = false;
            }
            if (bVar10) {
              iVar13 = iVar4;
            }
            iVar13 = iVar13 + 1;
          }
          piVar1 = (int *)(param_1 + (longlong)iVar11 * 5);
          if ((((*(int *)((longlong)param_1 + (longlong)iVar11 * 0x28 + 0xc) != param_4[3] ||
                piVar1[2] != param_4[2]) || piVar1[1] != param_4[1]) || *piVar1 != *param_4) &&
             (iVar11 = FText::CompareToCaseIgnored(piVar1 + 4,param_1 + (longlong)iVar13 * 5 + 2),
             0 < iVar11)) break;
          piVar2 = (int *)(param_1 + (longlong)iVar13 * 5);
          if (piVar1 != piVar2) {
            uVar5 = *(undefined8 *)(piVar2 + 2);
            uVar6 = *(undefined8 *)piVar1;
            uVar7 = *(undefined8 *)(piVar1 + 2);
            uVar8 = *(undefined8 *)(piVar1 + 4);
            uVar9 = *(undefined8 *)(piVar1 + 6);
            uVar3 = *(undefined8 *)(piVar1 + 8);
            *(undefined8 *)piVar1 = *(undefined8 *)piVar2;
            *(undefined8 *)(piVar1 + 2) = uVar5;
            uVar5 = *(undefined8 *)(piVar2 + 6);
            *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(piVar2 + 4);
            *(undefined8 *)(piVar1 + 6) = uVar5;
            *(undefined8 *)(piVar1 + 8) = *(undefined8 *)(piVar2 + 8);
            *(undefined8 *)piVar2 = uVar6;
            *(undefined8 *)(piVar2 + 2) = uVar7;
            *(undefined8 *)(piVar2 + 4) = uVar8;
            *(undefined8 *)(piVar2 + 6) = uVar9;
            *(undefined8 *)(piVar2 + 8) = uVar3;
          }
          iVar11 = iVar13;
        } while (iVar13 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar16 = puVar16 + -5;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 14083c1e0 HeapSortInternal<FName,FIdentityFunctor,TDereferenceWrapper<FName,TLess<FName>_>_> body=395 status=ok
// SIG undefined HeapSortInternal<FName,FIdentityFunctor,TDereferenceWrapper<FName,TLess<FName>_>_>(void)

void AlgoImpl::HeapSortInternal<FName,FIdentityFunctor,TDereferenceWrapper<FName,TLess<FName>_>_>
               (undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  
  iVar4 = (param_2 + -2) / 2;
  if (-1 < iVar4) {
    iVar6 = iVar4 * 2 + 1;
    iVar9 = iVar6;
    iVar7 = iVar4;
joined_r0x00014083c219:
    do {
      if (iVar6 < param_2) {
        iVar6 = iVar4 * 2;
        iVar8 = iVar6 + 1;
        if (iVar6 + 2 < param_2) {
          iVar5 = FName::Compare(param_1 + (iVar6 + 2),param_1 + iVar8);
          if (iVar5 < 0) {
            iVar8 = iVar6;
          }
          iVar8 = iVar8 + 1;
        }
        puVar10 = param_1 + iVar8;
        puVar1 = param_1 + iVar4;
        iVar4 = FName::Compare(puVar1,puVar10);
        if (iVar4 < 0) {
          if (puVar1 != puVar10) {
            uVar3 = *puVar1;
            *puVar1 = *puVar10;
            *puVar10 = uVar3;
          }
          iVar6 = iVar8 * 2 + 1;
          iVar4 = iVar8;
          goto joined_r0x00014083c219;
        }
      }
      iVar6 = iVar9 + -2;
      iVar4 = iVar7 + -1;
      iVar9 = iVar6;
      iVar7 = iVar4;
    } while (-1 < iVar4);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar10 = param_1 + param_2;
    do {
      if (param_1 != puVar10) {
        uVar3 = *param_1;
        *param_1 = *puVar10;
        *puVar10 = uVar3;
      }
      iVar4 = 0;
      if (1 < param_2) {
        do {
          iVar6 = iVar4 * 2;
          iVar9 = iVar6 + 1;
          if (iVar6 + 2 < param_2) {
            iVar7 = FName::Compare(param_1 + (iVar6 + 2),param_1 + iVar9);
            if (iVar7 < 0) {
              iVar9 = iVar6;
            }
            iVar9 = iVar9 + 1;
          }
          puVar1 = param_1 + iVar9;
          puVar2 = param_1 + iVar4;
          iVar4 = FName::Compare(puVar2,puVar1);
          if (-1 < iVar4) break;
          if (puVar2 != puVar1) {
            uVar3 = *puVar2;
            *puVar2 = *puVar1;
            *puVar1 = uVar3;
          }
          iVar4 = iVar9;
        } while (iVar9 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar10 = puVar10 + -1;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 14083c370 FUN_14083c370 body=50 status=ok
// SIG undefined FUN_14083c370(void)

longlong FUN_14083c370(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != plVar1 + (int)param_1[1]) {
    plVar2 = plVar1;
    do {
      if (*plVar2 == *param_2) {
        return (longlong)plVar2 - (longlong)plVar1 >> 3;
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1 + (int)param_1[1]);
  }
  return 0xffffffff;
}



// FUNCTION 14083c3b0 IntroSortInternal<TTuple<FGuid,FText>,FIdentityFunctor,TDereferenceWrapper<TTuple<FGuid,FText>,<lambda_3ba24c872c7654b4b6f80e3cd0610351>_>_> body=1079 status=ok
// SIG undefined IntroSortInternal<TTuple<FGuid,FText>,FIdentityFunctor,TDereferenceWrapper<TTuple<FGuid,FText>,<lambda_3ba24c872c7654b4b6f80e3cd0610351>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<TTuple<FGuid,FText>,FIdentityFunctor,TDereferenceWrapper<TTuple<FGuid,FText>,<lambda_3ba24c872c7654b4b6f80e3cd0610351>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,int *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  longlong *plVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  float fVar18;
  undefined1 auStack_388 [48];
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
    lStack_340 = param_1 + param_2 * 0x28 + -0x28;
    fVar18 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar18 = fVar18 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar18 = ::_guard_xfg_dispatch_icall_nop(fVar18);
    local_338 = (undefined4)(longlong)(fVar18 + fVar18);
    ::_guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar14 = &local_348;
    do {
      piVar16 = (int *)*plVar14;
      piVar17 = (int *)plVar14[1];
      local_358 = plVar14[2];
      lVar9 = ((longlong)piVar17 - (longlong)piVar16) / 0x28 + 1;
      piVar15 = piVar16;
      iVar13 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14083c4b0:
        if (8 < lVar9) {
          if (lVar9 < 0) {
            lVar9 = lVar9 + 1;
          }
          piVar16 = piVar15 + (lVar9 >> 1) * 10;
          if (piVar16 != piVar15) {
            uVar2 = *(undefined8 *)(piVar15 + 2);
            uVar3 = *(undefined8 *)piVar16;
            uVar4 = *(undefined8 *)(piVar16 + 2);
            uVar5 = *(undefined8 *)(piVar16 + 4);
            uVar6 = *(undefined8 *)(piVar16 + 6);
            uVar1 = *(undefined8 *)(piVar16 + 8);
            *(undefined8 *)piVar16 = *(undefined8 *)piVar15;
            *(undefined8 *)(piVar16 + 2) = uVar2;
            uVar2 = *(undefined8 *)(piVar15 + 6);
            *(undefined8 *)(piVar16 + 4) = *(undefined8 *)(piVar15 + 4);
            *(undefined8 *)(piVar16 + 6) = uVar2;
            *(undefined8 *)(piVar16 + 8) = *(undefined8 *)(piVar15 + 8);
            *(undefined8 *)piVar15 = uVar3;
            *(undefined8 *)(piVar15 + 2) = uVar4;
            *(undefined8 *)(piVar15 + 4) = uVar5;
            *(undefined8 *)(piVar15 + 6) = uVar6;
            *(undefined8 *)(piVar15 + 8) = uVar1;
          }
          piVar11 = piVar17 + 10;
          piVar16 = piVar15;
LAB_14083c510:
          piVar10 = piVar16;
          piVar16 = piVar10 + 10;
          if ((piVar16 <= piVar17) &&
             (((piVar15[3] != param_4[3] || piVar15[2] != param_4[2]) || piVar15[1] != param_4[1])
              || *piVar15 != *param_4)) goto code_r0x00014083c53b;
          goto LAB_14083c550;
        }
        for (; piVar11 = piVar15, piVar16 = piVar15, piVar15 < piVar17; piVar17 = piVar17 + -10) {
          while (piVar10 = piVar11, piVar16 = piVar16 + 10, piVar16 <= piVar17) {
            if ((((piVar10[2] == param_4[2] && piVar10[3] == param_4[3]) && piVar10[1] == param_4[1]
                 ) && *piVar10 == *param_4) ||
               (iVar13 = FText::CompareToCaseIgnored(piVar10 + 4,piVar16 + 4), iVar13 < 1)) {
              bVar7 = true;
            }
            else {
              bVar7 = false;
            }
            piVar11 = piVar16;
            if (!bVar7) {
              piVar11 = piVar10;
            }
          }
          if (piVar10 != piVar17) {
            uVar2 = *(undefined8 *)(piVar17 + 2);
            uVar3 = *(undefined8 *)piVar10;
            uVar4 = *(undefined8 *)(piVar10 + 2);
            uVar5 = *(undefined8 *)(piVar10 + 4);
            uVar6 = *(undefined8 *)(piVar10 + 6);
            uVar1 = *(undefined8 *)(piVar10 + 8);
            *(undefined8 *)piVar10 = *(undefined8 *)piVar17;
            *(undefined8 *)(piVar10 + 2) = uVar2;
            uVar2 = *(undefined8 *)(piVar17 + 6);
            *(undefined8 *)(piVar10 + 4) = *(undefined8 *)(piVar17 + 4);
            *(undefined8 *)(piVar10 + 6) = uVar2;
            *(undefined8 *)(piVar10 + 8) = *(undefined8 *)(piVar17 + 8);
            *(undefined8 *)piVar17 = uVar3;
            *(undefined8 *)(piVar17 + 2) = uVar4;
            *(undefined8 *)(piVar17 + 4) = uVar5;
            *(undefined8 *)(piVar17 + 6) = uVar6;
            *(undefined8 *)(piVar17 + 8) = uVar1;
          }
        }
        goto LAB_14083c6d6;
      }
LAB_14083c6bd:
      HeapSortInternal<TTuple<FGuid,FText>,FIdentityFunctor,TDereferenceWrapper<TTuple<FGuid,FText>,<lambda_3ba24c872c7654b4b6f80e3cd0610351>_>_>
                (piVar16,lVar9,param_3,param_4);
LAB_14083c6d6:
      plVar14 = plVar14 + -3;
    } while (&local_348 <= plVar14);
  }
  return;
code_r0x00014083c53b:
  iVar8 = FText::CompareToCaseIgnored(piVar15 + 4,piVar10 + 0xe);
  if (0 < iVar8) goto LAB_14083c510;
LAB_14083c550:
  do {
    piVar12 = piVar11;
    piVar11 = piVar12 + -10;
    if ((piVar11 <= piVar15) ||
       (((piVar12[-7] == param_4[3] && piVar12[-8] == param_4[2]) && piVar12[-9] == param_4[1]) &&
        *piVar11 == *param_4)) break;
    iVar8 = FText::CompareToCaseIgnored(piVar12 + -6,piVar15 + 4);
  } while (0 < iVar8);
  if (piVar16 <= piVar11) {
    if (piVar16 != piVar11) {
      uVar2 = *(undefined8 *)(piVar12 + -8);
      uVar3 = *(undefined8 *)piVar16;
      uVar4 = *(undefined8 *)(piVar10 + 0xc);
      uVar5 = *(undefined8 *)(piVar10 + 0xe);
      uVar6 = *(undefined8 *)(piVar10 + 0x10);
      uVar1 = *(undefined8 *)(piVar10 + 0x12);
      *(undefined8 *)piVar16 = *(undefined8 *)piVar11;
      *(undefined8 *)(piVar10 + 0xc) = uVar2;
      uVar2 = *(undefined8 *)(piVar12 + -4);
      *(undefined8 *)(piVar10 + 0xe) = *(undefined8 *)(piVar12 + -6);
      *(undefined8 *)(piVar10 + 0x10) = uVar2;
      *(undefined8 *)(piVar10 + 0x12) = *(undefined8 *)(piVar12 + -2);
      *(undefined8 *)piVar11 = uVar3;
      *(undefined8 *)(piVar12 + -8) = uVar4;
      *(undefined8 *)(piVar12 + -6) = uVar5;
      *(undefined8 *)(piVar12 + -4) = uVar6;
      *(undefined8 *)(piVar12 + -2) = uVar1;
    }
    goto LAB_14083c510;
  }
  if (piVar15 != piVar11) {
    uVar2 = *(undefined8 *)(piVar12 + -8);
    uVar3 = *(undefined8 *)piVar15;
    uVar4 = *(undefined8 *)(piVar15 + 2);
    uVar5 = *(undefined8 *)(piVar15 + 4);
    uVar6 = *(undefined8 *)(piVar15 + 6);
    uVar1 = *(undefined8 *)(piVar15 + 8);
    *(undefined8 *)piVar15 = *(undefined8 *)piVar11;
    *(undefined8 *)(piVar15 + 2) = uVar2;
    uVar2 = *(undefined8 *)(piVar12 + -4);
    *(undefined8 *)(piVar15 + 4) = *(undefined8 *)(piVar12 + -6);
    *(undefined8 *)(piVar15 + 6) = uVar2;
    *(undefined8 *)(piVar15 + 8) = *(undefined8 *)(piVar12 + -2);
    *(undefined8 *)piVar11 = uVar3;
    *(undefined8 *)(piVar12 + -8) = uVar4;
    *(undefined8 *)(piVar12 + -6) = uVar5;
    *(undefined8 *)(piVar12 + -4) = uVar6;
    *(undefined8 *)(piVar12 + -2) = uVar1;
  }
  iVar13 = iVar13 + -1;
  if (((longlong)piVar11 + (-0x28 - (longlong)piVar15)) / 0x28 <
      ((longlong)piVar17 - (longlong)piVar16) / 0x28) {
    if (piVar16 < piVar17) {
      *plVar14 = (longlong)piVar16;
      plVar14[1] = (longlong)piVar17;
      *(int *)(plVar14 + 2) = iVar13;
      plVar14 = plVar14 + 3;
    }
    if (piVar11 <= piVar15 + 10) goto LAB_14083c6d6;
    piVar17 = piVar12 + -0x14;
    piVar16 = piVar15;
  }
  else {
    if (piVar15 + 10 < piVar11) {
      *plVar14 = (longlong)piVar15;
      plVar14[1] = (longlong)(piVar12 + -0x14);
      *(int *)(plVar14 + 2) = iVar13;
      plVar14 = plVar14 + 3;
    }
    if (piVar17 <= piVar16) goto LAB_14083c6d6;
  }
  lVar9 = ((longlong)piVar17 - (longlong)piVar16) / 0x28 + 1;
  piVar15 = piVar16;
  if (iVar13 == 0) goto LAB_14083c6bd;
  goto LAB_14083c4b0;
}



// FUNCTION 14083c7f0 IntroSortInternal<FName,FIdentityFunctor,TDereferenceWrapper<FName,TLess<FName>_>_> body=703 status=ok
// SIG undefined IntroSortInternal<FName,FIdentityFunctor,TDereferenceWrapper<FName,TLess<FName>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::IntroSortInternal<FName,FIdentityFunctor,TDereferenceWrapper<FName,TLess<FName>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float fVar11;
  undefined1 auStack_388 [48];
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
    lStack_340 = param_1 + (param_2 - 1) * 8;
    fVar11 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar11 = fVar11 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar11 = ::_guard_xfg_dispatch_icall_nop(fVar11);
    local_338 = (undefined4)(longlong)(fVar11 + fVar11);
    ::_guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar8 = &local_348;
    do {
      puVar6 = (undefined8 *)*plVar8;
      puVar10 = (undefined8 *)plVar8[1];
      local_358 = plVar8[2];
      lVar3 = ((longlong)puVar10 - (longlong)puVar6 >> 3) + 1;
      puVar9 = puVar6;
      iVar7 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14083c8d0:
        if (8 < lVar3) {
          if (lVar3 < 0) {
            lVar3 = lVar3 + 1;
          }
          puVar6 = puVar9 + (lVar3 >> 1);
          if (puVar6 != puVar9) {
            uVar1 = *puVar6;
            *puVar6 = *puVar9;
            *puVar9 = uVar1;
          }
          puVar4 = puVar10 + 1;
          puVar6 = puVar9;
LAB_14083c907:
          puVar6 = puVar6 + 1;
          if (puVar6 <= puVar10) goto code_r0x00014083c910;
          goto LAB_14083c920;
        }
        for (; puVar4 = puVar9, puVar6 = puVar9, puVar9 < puVar10; puVar10 = puVar10 + -1) {
          while (puVar6 = puVar6 + 1, puVar6 <= puVar10) {
            iVar7 = FName::Compare(puVar4,puVar6);
            if (iVar7 < 0) {
              puVar4 = puVar6;
            }
          }
          if (puVar4 != puVar10) {
            uVar1 = *puVar4;
            *puVar4 = *puVar10;
            *puVar10 = uVar1;
          }
        }
        goto LAB_14083c9fa;
      }
LAB_14083c9eb:
      HeapSortInternal<FName,FIdentityFunctor,TDereferenceWrapper<FName,TLess<FName>_>_>
                (puVar6,lVar3,param_3,param_4);
LAB_14083c9fa:
      plVar8 = plVar8 + -3;
    } while (&local_348 <= plVar8);
  }
  return;
code_r0x00014083c910:
  iVar2 = FName::Compare(puVar9,puVar6);
  if (-1 < iVar2) goto LAB_14083c907;
LAB_14083c920:
  do {
    puVar5 = puVar4;
    puVar4 = puVar5 + -1;
    if (puVar4 <= puVar9) break;
    iVar2 = FName::Compare(puVar4,puVar9);
  } while (-1 < iVar2);
  if (puVar6 <= puVar4) {
    if (puVar6 != puVar4) {
      uVar1 = *puVar6;
      *puVar6 = *puVar4;
      *puVar4 = uVar1;
    }
    goto LAB_14083c907;
  }
  if (puVar9 != puVar4) {
    uVar1 = *puVar9;
    *puVar9 = *puVar4;
    *puVar4 = uVar1;
  }
  iVar7 = iVar7 + -1;
  if ((longlong)((longlong)puVar4 + (-8 - (longlong)puVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)puVar10 - (longlong)puVar6 & 0xfffffffffffffff8U)) {
    if (puVar6 < puVar10) {
      *plVar8 = (longlong)puVar6;
      plVar8[1] = (longlong)puVar10;
      *(int *)(plVar8 + 2) = iVar7;
      plVar8 = plVar8 + 3;
    }
    if (puVar4 <= puVar9 + 1) goto LAB_14083c9fa;
    puVar10 = puVar5 + -2;
    puVar6 = puVar9;
  }
  else {
    if (puVar9 + 1 < puVar4) {
      *plVar8 = (longlong)puVar9;
      plVar8[1] = (longlong)(puVar5 + -2);
      *(int *)(plVar8 + 2) = iVar7;
      plVar8 = plVar8 + 3;
    }
    if (puVar10 <= puVar6) goto LAB_14083c9fa;
  }
  lVar3 = ((longlong)puVar10 - (longlong)puVar6 >> 3) + 1;
  puVar9 = puVar6;
  if (iVar7 == 0) goto LAB_14083c9eb;
  goto LAB_14083c8d0;
}



// FUNCTION 14083cab0 FUN_14083cab0 body=204 status=ok
// SIG undefined FUN_14083cab0(void)

undefined8 * FUN_14083cab0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)operator_new(0xb0);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar4 + 1) = 1;
    *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
    *puVar4 = &PTR_LAB_14410cc38;
    puVar4[2] = &PTR_FUN_14410cb30;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    *(undefined4 *)(puVar4 + 8) = *param_3;
    *(undefined4 *)((longlong)puVar4 + 0x44) = uVar1;
    *(undefined4 *)(puVar4 + 9) = uVar2;
    *(undefined4 *)((longlong)puVar4 + 0x4c) = uVar3;
    FText::FText(puVar4 + 10,param_1);
    FText::FText(puVar4 + 0xd,param_2);
    FText::FText(puVar4 + 0x10);
    puVar4[0x13] = 0;
    puVar4[0x14] = 0;
    *(undefined4 *)(puVar4 + 0x15) = 0;
    puVar5 = puVar4;
  }
  return puVar5;
}



// FUNCTION 14083cb80 FUN_14083cb80 body=1441 status=ok
// SIG undefined FUN_14083cb80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14083cb80(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  uVar13 = uRam000000014685ed7c;
  uVar10 = uRam000000014685ed78;
  uVar8 = uRam000000014685ed74;
  uVar11 = _DAT_14685ed70;
  *param_1 = &PTR__scalar_deleting_destructor__14410b870;
  uVar7 = uRam000000014685ed6c;
  lVar6 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(uint *)((longlong)param_1 + 0x1c) = uVar7;
  uVar7 = uRam000000014685ed64 & uVar8;
  uVar9 = uRam000000014685ed68 & uVar10;
  uVar12 = uRam000000014685ed6c & uVar13;
  *(uint *)(param_1 + 6) = _DAT_14685ed60 & uVar11;
  *(uint *)((longlong)param_1 + 0x34) = uVar7;
  *(uint *)(param_1 + 7) = uVar9;
  *(uint *)((longlong)param_1 + 0x3c) = uVar12;
  uVar7 = uRam000000014685ed6c;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(uint *)((longlong)param_1 + 0x4c) = uVar7;
  uVar7 = uRam000000014685ed64 & uVar8;
  uVar9 = uRam000000014685ed68 & uVar10;
  uVar12 = uRam000000014685ed6c & uVar13;
  *(uint *)(param_1 + 0xc) = _DAT_14685ed60 & uVar11;
  *(uint *)((longlong)param_1 + 100) = uVar7;
  *(uint *)(param_1 + 0xd) = uVar9;
  *(uint *)((longlong)param_1 + 0x6c) = uVar12;
  uVar7 = uRam000000014685ed6c;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(uint *)((longlong)param_1 + 0x7c) = uVar7;
  uVar8 = uRam000000014685ed64 & uVar8;
  uVar10 = uRam000000014685ed68 & uVar10;
  uVar13 = uRam000000014685ed6c & uVar13;
  *(uint *)(param_1 + 0x12) = _DAT_14685ed60 & uVar11;
  *(uint *)((longlong)param_1 + 0x94) = uVar8;
  *(uint *)(param_1 + 0x13) = uVar10;
  *(uint *)((longlong)param_1 + 0x9c) = uVar13;
  param_1[0x14] = param_2;
  plVar1 = *(longlong **)(param_2 + 0x10);
  lVar5 = lVar6;
  if (plVar1 != (longlong *)0x0) {
    uVar4 = UAnimClassInterface::GetPrivateStaticClass();
    lVar5 = UObjectBaseUtility::GetInterfaceAddress(plVar1,uVar4);
    if (lVar5 == 0) {
      lVar5 = UDynamicClass::GetPrivateStaticClass();
      if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      lVar5 = lVar6;
      if (bVar3) {
        if (plVar1[0x1f] == 0) {
          (**(code **)(*plVar1 + 0x368))(plVar1);
        }
        lVar2 = plVar1[0x4c];
        if (lVar2 != 0) {
          uVar4 = UAnimClassInterface::GetPrivateStaticClass();
          lVar5 = UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar4);
        }
      }
    }
  }
  param_1[0x15] = lVar5;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x3f800000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0xffffffff;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0x5629063;
  *(undefined4 *)(param_1 + 0x3b) = 0x5629063;
  *(undefined4 *)(param_1 + 0x52) = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x62) = 0xffff;
  param_1[99] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 100) = 0xffff;
  param_1[0x65] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x66) = 0xffff;
  param_1[0x67] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffff;
  param_1[0x69] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x6a) = 0xffff;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x364) = 0;
  uVar7 = uRam000000014685ed6c;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x374) = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  *(uint *)((longlong)param_1 + 0x37c) = uVar7;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  uVar7 = uRam000000014685ed64 & uRam000000014685ed74;
  uVar11 = uRam000000014685ed68 & uRam000000014685ed78;
  uVar8 = uRam000000014685ed6c & uRam000000014685ed7c;
  *(uint *)(param_1 + 0x72) = _DAT_14685ed60 & _DAT_14685ed70;
  *(uint *)((longlong)param_1 + 0x394) = uVar7;
  *(uint *)(param_1 + 0x73) = uVar11;
  *(uint *)((longlong)param_1 + 0x39c) = uVar8;
  FBoneContainer::FBoneContainer(param_1 + 0x74);
  uVar7 = uRam000000014685ed6c;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4d4) = 0;
  *(undefined4 *)(param_1 + 0x9b) = 0;
  *(uint *)((longlong)param_1 + 0x4dc) = uVar7;
  uVar7 = uRam000000014685ed64 & uRam000000014685ed74;
  uVar11 = uRam000000014685ed68 & uRam000000014685ed78;
  uVar8 = uRam000000014685ed6c & uRam000000014685ed7c;
  *(uint *)(param_1 + 0x9e) = _DAT_14685ed60 & _DAT_14685ed70;
  *(uint *)((longlong)param_1 + 0x4f4) = uVar7;
  *(uint *)(param_1 + 0x9f) = uVar11;
  *(uint *)((longlong)param_1 + 0x4fc) = uVar8;
  uVar7 = uRam000000014685ed6c;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x504) = 0;
  *(undefined4 *)(param_1 + 0xa1) = 0;
  *(uint *)((longlong)param_1 + 0x50c) = uVar7;
  uVar7 = uRam000000014685ed64 & uRam000000014685ed74;
  uVar11 = uRam000000014685ed68 & uRam000000014685ed78;
  uVar8 = uRam000000014685ed6c & uRam000000014685ed7c;
  *(uint *)(param_1 + 0xa4) = _DAT_14685ed60 & _DAT_14685ed70;
  *(uint *)((longlong)param_1 + 0x524) = uVar7;
  *(uint *)(param_1 + 0xa5) = uVar11;
  *(uint *)((longlong)param_1 + 0x52c) = uVar8;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  *(byte *)(param_1 + 0xb7) = *(byte *)(param_1 + 0xb7) & 0xfc;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  *(undefined4 *)(param_1 + 0xc6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x634) = 0;
  param_1[200] = 0;
  *(undefined4 *)(param_1 + 0xc9) = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x664) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x66c) = 0;
  *(undefined4 *)(param_1 + 0xce) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x674) = 0;
  *(undefined4 *)(param_1 + 0xcf) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd0) = 0x3e99999a;
  *(undefined4 *)((longlong)param_1 + 0x684) = 0x3f733333;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  param_1[0xd5] = 0;
  *(undefined4 *)(param_1 + 0xd6) = 0xffffffff;
  return param_1;
}



// FUNCTION 14083d130 FUN_14083d130 body=80 status=ok
// SIG undefined FUN_14083d130(void)

undefined8 * FUN_14083d130(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_Initialize_AnyThread_14410b780;
  param_1[6] = 0;
  uVar1 = FUN_14084a450();
  param_1[7] = uVar1;
  param_1[8] = 0;
  param_1[9] = 0;
  return param_1;
}



// FUNCTION 14083d180 FUN_14083d180 body=654 status=ok
// SIG undefined FUN_14083d180(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14083d180(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  
  lVar15 = 0;
  *param_1 = &PTR_FUN_14410bbe0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_142fc64d0(param_1 + 0xd);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  TArray<FName,FDefaultAllocator>::operator=(param_1 + 1,param_2);
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 3,param_2 + 0x10);
  uVar5 = *(undefined4 *)(param_2 + 0x24);
  uVar6 = *(undefined4 *)(param_2 + 0x28);
  uVar7 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 6) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar7;
  TArray<FName,FDefaultAllocator>::operator=(param_1 + 7,param_2 + 0x30);
  TArray<FTransform,FDefaultAllocator>::operator=(param_1 + 9,param_2 + 0x40);
  TArray<FName,FDefaultAllocator>::operator=(param_1 + 0xb,param_2 + 0x50);
  FLiveLinkMetaData::operator=(param_1 + 0xd,param_2 + 0x60);
  iVar3 = *(int *)(param_1 + 10);
  lVar18 = (longlong)iVar3;
  plVar1 = param_1 + 0x19;
  iVar4 = *(int *)(param_1 + 0x1a);
  if (iVar4 < iVar3) {
    *(int *)(param_1 + 0x1a) = iVar3;
    iVar17 = iVar3 - iVar4;
    if (*(int *)((longlong)param_1 + 0xd4) < iVar3) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar1,iVar4);
    }
    uVar11 = uRam000000014685ed7c;
    uVar10 = uRam000000014685ed78;
    uVar9 = uRam000000014685ed74;
    uVar8 = _DAT_14685ed70;
    puVar14 = (undefined1 *)((longlong)iVar4 * 0x40 + *plVar1);
    if (iVar17 != 0) {
      puVar12 = (uint *)(puVar14 + 0x30);
      do {
        *puVar14 = 0;
        uVar19 = uRam000000014685ed6c;
        puVar14 = puVar14 + 0x40;
        puVar12[-8] = 0;
        puVar12[-7] = 0;
        puVar12[-6] = 0;
        puVar12[-5] = uVar19;
        puVar12[-4] = 0;
        puVar12[-3] = 0;
        puVar12[-2] = 0;
        puVar12[-1] = 0;
        uVar19 = uRam000000014685ed64 & uVar9;
        uVar20 = uRam000000014685ed68 & uVar10;
        uVar21 = uRam000000014685ed6c & uVar11;
        *puVar12 = _DAT_14685ed60 & uVar8;
        puVar12[1] = uVar19;
        puVar12[2] = uVar20;
        puVar12[3] = uVar21;
        iVar17 = iVar17 + -1;
        puVar12 = puVar12 + 0x10;
      } while (iVar17 != 0);
    }
  }
  else if ((iVar3 < iVar4) && (iVar3 != iVar4)) {
    *(int *)(param_1 + 0x1a) = iVar3;
    TArray<FPartyReservation,FDefaultAllocator>::ResizeShrink(plVar1);
  }
  plVar2 = param_1 + 0x1b;
  iVar4 = *(int *)(param_1 + 0x1c);
  if (iVar4 < iVar3) {
    *(int *)(param_1 + 0x1c) = iVar3;
    iVar17 = iVar3 - iVar4;
    if (*(int *)((longlong)param_1 + 0xe4) < iVar3) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar2,iVar4);
    }
    puVar14 = (undefined1 *)(*plVar2 + (longlong)iVar4 * 0x18);
    if (iVar17 != 0) {
      puVar13 = puVar14 + 0x14;
      do {
        *puVar14 = 0;
        puVar14 = puVar14 + 0x18;
        *(undefined8 *)(puVar13 + -0xc) = 0;
        *(undefined8 *)(puVar13 + -4) = 0;
        puVar13 = puVar13 + 0x18;
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
    }
  }
  else if (iVar3 < iVar4) {
    TArray<FVertexAndAttributes,FDefaultAllocator>::RemoveAtImpl(plVar2,iVar3,iVar4 - iVar3,1);
  }
  lVar16 = lVar15;
  if (0 < iVar3) {
    do {
      *(undefined1 *)(lVar15 + *plVar1) = 0;
      *(undefined1 *)(lVar16 + *plVar2) = 0;
      lVar18 = lVar18 + -1;
      lVar15 = lVar15 + 0x40;
      lVar16 = lVar16 + 0x18;
    } while (lVar18 != 0);
  }
  return param_1;
}



// FUNCTION 14083d410 FUN_14083d410 body=188 status=ok
// SIG undefined FUN_14083d410(void)

undefined8 * FUN_14083d410(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14410bbe0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_142fc64d0(param_1 + 0xd);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  return param_1;
}



// FUNCTION 14083d4d0 FUN_14083d4d0 body=670 status=ok
// SIG undefined FUN_14083d4d0(void)

undefined8 * FUN_14083d4d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  
  *param_1 = &PTR_FUN_14410aec8;
  puVar1 = param_1 + 1;
  *puVar1 = &PTR__purecall_143f740d8;
  plVar4 = (longlong *)FUN_1404cfca0();
  iVar2 = (int)plVar4[1];
  *(int *)(plVar4 + 1) = iVar2 + 1;
  if (*(int *)((longlong)plVar4 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar4,iVar2);
  }
  lVar7 = 0;
  *(undefined8 **)(*plVar4 + (longlong)iVar2 * 8) = puVar1;
  param_1[2] = &PTR__scalar_deleting_destructor__143f73ca8;
  *(undefined1 *)(param_1 + 3) = 0;
  if (DAT_1468c217e == '\0') {
    if (DAT_1469e6880 == 0) {
      uVar5 = GetTransientPackage();
      FUN_1417846f0(uVar5,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      uVar6 = UGCObjectReferencer::GetPrivateStaticClass();
      DAT_1469e6880 = FUN_1417985e0(uVar6,uVar5,0,0,0,0,0,0,0);
      iVar2 = *(int *)(DAT_1469e6880 + 0xc);
      if (iVar2 < (int)DAT_1469e91c4) {
        uVar8 = iVar2 >> 0x1f & 0xffff;
        uVar3 = iVar2 + uVar8;
        lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar8) * 0x18;
      }
      *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | 0x40000000;
    }
    UGCObjectReferencer::AddObject(DAT_1469e6880,param_1 + 2);
    *(undefined1 *)(param_1 + 3) = 1;
  }
  *param_1 = &PTR_FUN_14410b000;
  *puVar1 = &PTR_Tick_14410b040;
  param_1[2] = &PTR_LAB_14410b088;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2d));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x2d),4000);
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 2;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 2;
  FGuid::NewGuid(param_1 + 0x38);
  FUN_140840440(param_1);
  return param_1;
}



// FUNCTION 14083d770 FUN_14083d770 body=415 status=ok
// SIG undefined FUN_14083d770(void)

/* WARNING: Removing unreachable block (ram,0x00014083d8b5) */

undefined8 * FUN_14083d770(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  undefined8 local_28;
  int iStack_20;
  undefined4 uStack_1c;
  
  *param_1 = &PTR_FUN_14410af30;
  uVar5 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_140841d70();
  iStack_20 = 0;
  local_28 = (longlong *)&LAB_140846d50;
  plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar2 != (longlong *)0x0) {
    plVar2[1] = (longlong)param_1;
    *plVar2 = (longlong)&PTR_GetPoolName_143f77a38;
    *(undefined4 *)(plVar2 + 2) = (undefined4)local_28;
    *(undefined4 *)((longlong)plVar2 + 0x14) = local_28._4_4_;
    *(int *)(plVar2 + 3) = iStack_20;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_1c;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143f77a80;
  }
  lVar3 = param_1[3];
  plVar6 = (longlong *)(lVar3 + 0x1a8);
  if (plVar2 != (longlong *)0x0) {
    local_28 = (longlong *)0x0;
    iStack_20 = 0;
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_28);
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar6,1);
    if ((iStack_20 != 0) && (local_28 != (longlong *)0x0)) {
      puVar4 = (undefined8 *)(**(code **)(*local_28 + 0x20))(local_28,local_res8);
      uVar5 = *puVar4;
    }
    iVar1 = *(int *)(lVar3 + 0x1b0);
    *(int *)(lVar3 + 0x1b0) = iVar1 + 1;
    if (*(int *)(lVar3 + 0x1b4) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar1);
    }
    puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar6);
    *puVar4 = 0;
    *puVar4 = local_28;
    local_28 = (longlong *)0x0;
    *(int *)(puVar4 + 1) = iStack_20;
    iStack_20 = 0;
  }
  param_1[4] = uVar5;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  puVar4 = (undefined8 *)FGuid::NewGuid(&local_28);
  uVar5 = puVar4[1];
  param_1[5] = *puVar4;
  param_1[6] = uVar5;
  return param_1;
}



// FUNCTION 14083d910 FLiveLinkRefSkeleton body=174 status=ok
// SIG undefined FLiveLinkRefSkeleton(void)

undefined8 * FLiveLinkRefSkeleton::FLiveLinkRefSkeleton(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_1,pvVar2,(longlong)iVar1 << 3);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(param_1 + 2,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[2],pvVar2,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 14083d9c0 ForAnyElementType body=11 status=ok
// SIG undefined ForAnyElementType(void)

undefined8 * FHeapAllocator::ForAnyElementType::ForAnyElementType(undefined8 *param_1)

{
  *param_1 = 0;
  return param_1;
}



// FUNCTION 14083d9d0 FLiveLinkTransform body=31 status=ok
// SIG undefined FLiveLinkTransform(void)

undefined8 * FLiveLinkTransform::FLiveLinkTransform(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__14410bbe8;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  return param_1;
}



// FUNCTION 14083d9f0 FUN_14083d9f0 body=232 status=ok
// SIG undefined FUN_14083d9f0(void)

undefined8 * FUN_14083d9f0(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar6 = (undefined8 *)FName::FName(local_res8,"Messaging",1);
  uVar3 = *puVar6;
  uVar7 = FUN_14168dc80();
  plVar8 = (longlong *)FUN_141690010(uVar7,uVar3);
  puVar6 = (undefined8 *)(**(code **)(*plVar8 + 0x50))(plVar8,local_18);
  *param_1 = *puVar6;
  lVar4 = puVar6[1];
  param_1[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_10 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)local_10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = *param_2;
  plVar8 = (longlong *)FTaskGraphInterface::Get();
  uVar5 = (**(code **)(*plVar8 + 0x10))(plVar8,0);
  *(undefined4 *)(param_1 + 7) = uVar5;
  return param_1;
}



// FUNCTION 14083dae0 FUN_14083dae0 body=446 status=ok
// SIG undefined FUN_14083dae0(void)

undefined8 * FUN_14083dae0(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  
  FUN_142326e40();
  *param_1 = &PTR_FUN_14410c070;
  puVar1 = param_1 + 0x32;
  param_1[5] = &PTR_LAB_14410c468;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *puVar1 = 0;
  plVar3 = (longlong *)FUN_141593110();
  plVar4 = (longlong *)(**(code **)(*plVar3 + 0x28))(plVar3);
  plVar5 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)&DAT_143f3ed00;
    plVar5[1] = (longlong)puVar1;
    plVar5[2] = (longlong)&LAB_140846ce0;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[4] = lVar6;
    *plVar5 = (longlong)&PTR_GetPoolName_143f3ed48;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar4,1);
    (**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
    iVar2 = (int)plVar4[1];
    *(int *)(plVar4 + 1) = iVar2 + 1;
    if (*(int *)((longlong)plVar4 + 0xc) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar2);
    }
    puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar4);
    *puVar7 = plVar5;
    *(undefined4 *)(puVar7 + 1) = 3;
  }
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3);
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&DAT_143f3ed00;
    plVar4[1] = (longlong)puVar1;
    plVar4[2] = (longlong)&LAB_140846d10;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar6;
    *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar3,1);
    (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
    iVar2 = (int)plVar3[1];
    *(int *)(plVar3 + 1) = iVar2 + 1;
    if (*(int *)((longlong)plVar3 + 0xc) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3,iVar2);
    }
    puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar3);
    *puVar7 = plVar4;
    *(undefined4 *)(puVar7 + 1) = 3;
  }
  FLiveLinkClientReference::InitClient(puVar1);
  *(undefined1 *)(param_1 + 7) = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *(byte *)((longlong)param_1 + 0xb9) = *(byte *)((longlong)param_1 + 0xb9) | 0x20;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 2;
  return param_1;
}



// FUNCTION 14083dca0 FUN_14083dca0 body=91 status=ok
// SIG undefined FUN_14083dca0(void)

undefined8 * FUN_14083dca0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142326e40(param_1,uVar1);
  *param_1 = &PTR_FUN_14410bc48;
  param_1[5] = &PTR_LAB_14410c040;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 6;
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(byte *)((longlong)param_1 + 0xb9) = *(byte *)((longlong)param_1 + 0xb9) | 0x20;
  return param_1;
}



// FUNCTION 14083dd00 FUN_14083dd00 body=33 status=ok
// SIG undefined FUN_14083dd00(void)

undefined8 * FUN_14083dd00(undefined8 *param_1)

{
  FUN_1422552b0();
  *param_1 = &PTR__scalar_deleting_destructor__14410c510;
  return param_1;
}



// FUNCTION 14083dd30 ULiveLinkMessageBusFinder body=93 status=ok
// SIG undefined ULiveLinkMessageBusFinder(void)

undefined8 * ULiveLinkMessageBusFinder::ULiveLinkMessageBusFinder(undefined8 *param_1)

{
  FUN_1417818c0();
  *param_1 = &PTR__scalar_deleting_destructor__14410c898;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xb),4000);
  return param_1;
}



// FUNCTION 14083dd90 FUN_14083dd90 body=399 status=ok
// SIG undefined FUN_14083dd90(void)

undefined8 * FUN_14083dd90(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  
  FUN_141781840();
  uVar7 = 0;
  *param_1 = &PTR_FUN_14410b8e8;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  lVar2 = *(longlong *)(param_1[2] + 200);
  if (lVar2 != 0) {
    lVar4 = UBlueprint::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      plVar8 = (longlong *)(lVar2 + 0xc0);
      plVar5 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = (longlong)&PTR_FUN_143f4d290;
        FWeakObjectPtr::operator=(plVar5 + 1,param_1);
        plVar5[2] = (longlong)FUN_140846cc0;
        lVar4 = FDelegateHandle::GenerateNewID();
        plVar5[4] = lVar4;
        *plVar5 = (longlong)&PTR_FUN_143f4d2d8;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
        puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
        iVar1 = *(int *)(lVar2 + 200);
        uVar7 = *puVar6;
        *(int *)(lVar2 + 200) = iVar1 + 1;
        if (*(int *)(lVar2 + 0xcc) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar1);
        }
        puVar6 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar8);
        *puVar6 = plVar5;
        *(undefined4 *)(puVar6 + 1) = 3;
      }
      param_1[0x19] = uVar7;
    }
  }
  return param_1;
}



// FUNCTION 14083df20 FUN_14083df20 body=33 status=ok
// SIG undefined FUN_14083df20(void)

undefined8 * FUN_14083df20(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_14410b430;
  return param_1;
}



// FUNCTION 14083df50 FUN_14083df50 body=218 status=ok
// SIG undefined FUN_14083df50(void)

void FUN_14083df50(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)*param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    plVar1 = plVar3 + 0xc;
    do {
      *(undefined4 *)(plVar1 + 1) = 0;
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty(plVar1 + -8,0);
      if (plVar1[-4] != 0) {
        FMemory::Free();
      }
      if (plVar1[-8] != 0) {
        FMemory::Free();
      }
      if (plVar1[-10] != 0) {
        FMemory::Free();
      }
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 0x12;
      plVar1 = plVar1 + 0x12;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar3 = (longlong *)*param_1;
  }
  if (plVar3 != (longlong *)0x0) {
    FMemory::Free(plVar3);
    return;
  }
  return;
}



// FUNCTION 14083e030 FUN_14083e030 body=187 status=ok
// SIG undefined FUN_14083e030(void)

void FUN_14083e030(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  
  lVar1 = *param_1;
  iVar5 = (int)param_1[1];
  if (iVar5 != 0) {
    plVar4 = (longlong *)(lVar1 + 0x10);
    do {
      if ((int)plVar4[1] == 0) {
        plVar3 = (longlong *)*plVar4;
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)*plVar4;
        plVar2 = plVar3;
      }
      if (plVar2 == (longlong *)0x0) {
        if (((int)plVar4[1] != 0) && (plVar3 != (longlong *)0x0)) {
          lVar1 = *plVar3;
          goto LAB_14083e08e;
        }
      }
      else {
        lVar1 = *plVar2;
        plVar3 = plVar2;
LAB_14083e08e:
        (**(code **)(lVar1 + 0x28))(plVar3,0);
        if (*plVar4 != 0) {
          lVar1 = FMemory::Realloc(*plVar4,0,0);
          *plVar4 = lVar1;
        }
        *(undefined4 *)(plVar4 + 1) = 0;
      }
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14083e0f0 FUN_14083e0f0 body=187 status=ok
// SIG undefined FUN_14083e0f0(void)

void FUN_14083e0f0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  
  lVar1 = *param_1;
  iVar5 = (int)param_1[1];
  if (iVar5 != 0) {
    plVar4 = (longlong *)(lVar1 + 0x18);
    do {
      if ((int)plVar4[1] == 0) {
        plVar3 = (longlong *)*plVar4;
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)*plVar4;
        plVar2 = plVar3;
      }
      if (plVar2 == (longlong *)0x0) {
        if (((int)plVar4[1] != 0) && (plVar3 != (longlong *)0x0)) {
          lVar1 = *plVar3;
          goto LAB_14083e14e;
        }
      }
      else {
        lVar1 = *plVar2;
        plVar3 = plVar2;
LAB_14083e14e:
        (**(code **)(lVar1 + 0x28))(plVar3,0);
        if (*plVar4 != 0) {
          lVar1 = FMemory::Realloc(*plVar4,0,0);
          *plVar4 = lVar1;
        }
        *(undefined4 *)(plVar4 + 1) = 0;
      }
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 5;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14083e1b0 ~TArray<FPoseSnapshot,FDefaultAllocator> body=100 status=ok
// SIG undefined ~TArray<FPoseSnapshot,FDefaultAllocator>(void)

void TArray<FPoseSnapshot,FDefaultAllocator>::~TArray<FPoseSnapshot,FDefaultAllocator>
               (undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      if (plVar1[2] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 7;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 14083e220 ~TArray<FMovieSceneBinding,FDefaultAllocator> body=109 status=ok
// SIG undefined ~TArray<FMovieSceneBinding,FDefaultAllocator>(void)

void TArray<FMovieSceneBinding,FDefaultAllocator>::~TArray<FMovieSceneBinding,FDefaultAllocator>
               (longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x10);
    do {
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 6;
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



// FUNCTION 14083e290 FUN_14083e290 body=155 status=ok
// SIG undefined FUN_14083e290(void)

void FUN_14083e290(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar4 = (longlong *)(lVar1 + 0x18);
    do {
      iVar5 = (int)plVar4[1];
      lVar1 = *plVar4;
      if (iVar5 != 0) {
        plVar2 = (longlong *)(lVar1 + 0x30);
        do {
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          plVar2 = plVar2 + 8;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        lVar1 = *plVar4;
      }
      if (lVar1 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 5;
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



// FUNCTION 14083e330 ~TQueue<TSharedPtr<IMediaAudioSample,1>,0> body=147 status=ok
// SIG undefined ~TQueue<TSharedPtr<IMediaAudioSample,1>,0>(void)

void TQueue<TSharedPtr<IMediaAudioSample,1>,0>::~TQueue<TSharedPtr<IMediaAudioSample,1>,0>
               (longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar4 = *(longlong *)(param_1 + 8);
  while (lVar4 != 0) {
    *(undefined8 *)(param_1 + 8) = **(undefined8 **)(param_1 + 8);
    if (lVar4 != 0) {
      plVar5 = *(longlong **)(lVar4 + 0x10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      FMemory::operator_delete(lVar4,0x18);
    }
    lVar4 = *(longlong *)(param_1 + 8);
  }
  return;
}



// FUNCTION 14083e3d0 FUN_14083e3d0 body=395 status=ok
// SIG undefined FUN_14083e3d0(void)

void FUN_14083e3d0(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar3 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar4) goto LAB_14083e491;
      uVar3 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
    iVar6 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_44 = (iStack_40 - iVar6) + 0x1f;
    if (iVar2 < iStack_44) {
LAB_14083e491:
      iStack_44 = iVar2;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  iStack_18 = iStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar2) {
    do {
      FLiveLinkSubjectFrame::~FLiveLinkSubjectFrame((longlong)iStack_1c * 0xd0 + 8 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<FSpriteDrawCallRecord,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14083e560 FUN_14083e560 body=709 status=ok
// SIG undefined FUN_14083e560(void)

void FUN_14083e560(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__14410b870;
  if (param_1[0xd1] != 0) {
    FMemory::Free();
  }
  if (param_1[0xca] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xc9) = 0;
  if (param_1[200] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xc0);
  if (param_1[0xbe] != 0) {
    FMemory::Free();
  }
  if (param_1[0xbc] != 0) {
    FMemory::Free();
  }
  FUN_14083e290(param_1 + 0xba);
  if (param_1[0xb8] != 0) {
    FMemory::Free();
  }
  TArray<FPoseSnapshot,FDefaultAllocator>::~TArray<FPoseSnapshot,FDefaultAllocator>(param_1 + 0xb5);
  FUN_14083e030(param_1 + 0xb3);
  FUN_14083e030(param_1 + 0xb1);
  FUN_14083e0f0(param_1 + 0xaf);
  if (param_1[0xad] != 0) {
    FMemory::Free();
  }
  if (param_1[0xab] != 0) {
    FMemory::Free();
  }
  if (param_1[0xa9] != 0) {
    FMemory::Free();
  }
  if (param_1[0xa7] != 0) {
    FMemory::Free();
  }
  FBoneContainer::~FBoneContainer(param_1 + 0x74);
  lVar4 = 2;
  puVar3 = param_1 + 0x61;
  lVar1 = 2;
  do {
    plVar2 = puVar3 + -2;
    puVar3 = puVar3 + -2;
    lVar1 = lVar1 + -1;
    if (*plVar2 != 0) {
      FMemory::Free();
    }
  } while (lVar1 != 0);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (param_1[0x5b] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x53);
  FUN_14083e830(param_1 + 0x3a);
  puVar3 = param_1 + 0x2f;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (param_1[0x37] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (puVar3);
  lVar1 = 2;
  do {
    plVar2 = puVar3 + -2;
    puVar3 = puVar3 + -2;
    lVar1 = lVar1 + -1;
    if (*plVar2 != 0) {
      FMemory::Free();
    }
  } while (lVar1 != 0);
  lVar1 = 2;
  puVar3 = param_1 + 0x2b;
  do {
    plVar2 = puVar3 + -2;
    puVar3 = puVar3 + -2;
    lVar1 = lVar1 + -1;
    if (*plVar2 != 0) {
      FMemory::Free();
    }
  } while (lVar1 != 0);
  lVar1 = 2;
  puVar3 = param_1 + 0x27;
  do {
    iVar5 = *(int *)(puVar3 + -1);
    puVar3 = puVar3 + -2;
    plVar2 = (longlong *)*puVar3;
    lVar1 = lVar1 + -1;
    if (iVar5 != 0) {
      do {
        if (plVar2[6] != 0) {
          FMemory::Free();
        }
        if (plVar2[3] != 0) {
          FMemory::Free();
        }
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 0xf;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      plVar2 = (longlong *)*puVar3;
    }
    if (plVar2 != (longlong *)0x0) {
      FMemory::Free(plVar2);
    }
  } while (lVar1 != 0);
  puVar3 = param_1 + 0x23;
  do {
    plVar2 = puVar3 + -2;
    puVar3 = puVar3 + -2;
    lVar4 = lVar4 + -1;
    if (*plVar2 != 0) {
      FMemory::Free();
    }
  } while (lVar4 != 0);
  if (param_1[0x1d] != 0) {
    FMemory::Free();
  }
  if (param_1[0x19] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14083e830 FUN_14083e830 body=104 status=ok
// SIG undefined FUN_14083e830(void)

void FUN_14083e830(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14083e8a0 ~FBoneContainer body=253 status=ok
// SIG undefined ~FBoneContainer(void)

void FBoneContainer::~FBoneContainer(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (param_1[0x23] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FRetargetSourceCachedData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x1b,0);
  if (param_1[0x1f] != 0) {
    FMemory::Free();
  }
  if (param_1[0x1b] != 0) {
    FMemory::Free();
  }
  if (param_1[0x18] != 0) {
    FMemory::Free();
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
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14083e9a0 FUN_14083e9a0 body=100 status=ok
// SIG undefined FUN_14083e9a0(void)

void FUN_14083e9a0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x130) = 0;
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xe8);
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0xd8);
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  FLiveLinkSubjectFrame::~FLiveLinkSubjectFrame(param_1 + 8);
  return;
}



// FUNCTION 14083ea10 FUN_14083ea10 body=740 status=ok
// SIG undefined FUN_14083ea10(void)

void FUN_14083ea10(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_38;
  int local_30;
  int iStack_2c;
  
  *param_1 = &PTR_FUN_14410b000;
  param_1[1] = &PTR_Tick_14410b040;
  lVar6 = 0;
  param_1[2] = &PTR_LAB_14410b088;
  local_38 = 0;
  local_30 = 0;
  iStack_2c = 0;
  if (0 < *(int *)(param_1 + 0x25)) {
    TArray<float,FDefaultAllocator>::ResizeTo(&local_38,*(int *)(param_1 + 0x25));
    iVar2 = *(int *)(param_1 + 0x25);
    lVar6 = local_38;
    iVar4 = iStack_2c;
    while (0 < iVar2) {
      iVar3 = 0;
      if ((iVar4 < 0) && (local_30 = 0, iVar3 = 0, iVar4 != 0)) {
        TArray<float,FDefaultAllocator>::ResizeTo(&local_38,0);
        iVar2 = *(int *)(param_1 + 0x25);
        lVar6 = local_38;
        iVar4 = iStack_2c;
        iVar3 = local_30;
      }
      iVar5 = 0;
      if (0 < iVar2) {
        lVar7 = 0;
        do {
          cVar1 = (**(code **)(**(longlong **)(lVar7 + param_1[0x24]) + 0x28))();
          if (cVar1 != '\0') {
            local_30 = iVar3 + 1;
            if (iVar4 < local_30) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_38);
              lVar6 = local_38;
              iVar4 = iStack_2c;
            }
            *(int *)(lVar6 + (longlong)iVar3 * 4) = iVar5;
            iVar3 = local_30;
          }
          iVar2 = *(int *)(param_1 + 0x25);
          iVar5 = iVar5 + 1;
          lVar7 = lVar7 + 0x10;
        } while (iVar5 < iVar2);
      }
      lVar7 = (longlong)(iVar3 + -1);
      if (-1 < iVar3 + -1) {
        do {
          TArray<TSharedPtr<FUdpReassembledMessage,1>,FDefaultAllocator>::RemoveAtSwapImpl
                    (param_1 + 0x24,*(undefined4 *)(lVar6 + lVar7 * 4),1);
          lVar7 = lVar7 + -1;
        } while (-1 < lVar7);
        iVar2 = *(int *)(param_1 + 0x25);
      }
    }
  }
  if (lVar6 != 0) {
    FMemory::Free(lVar6);
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x35);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x32);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2d));
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x2a);
  if (param_1[0x28] != 0) {
    FMemory::Free();
  }
  if (param_1[0x26] != 0) {
    FMemory::Free();
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x24);
  if (param_1[0x22] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (param_1[0x20] != 0) {
    FMemory::Free();
  }
  FUN_14083e3d0(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  FUN_140843c70(param_1 + 0xe,0);
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  FUN_140843e50(param_1 + 4,0);
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  param_1[2] = &PTR__scalar_deleting_destructor__143f73ca8;
  if ((DAT_1469e6880 != 0) && (*(char *)(param_1 + 3) != '\0')) {
    UGCObjectReferencer::RemoveObject(DAT_1469e6880,param_1 + 2);
  }
  FUN_1404bf750(param_1 + 1);
  *param_1 = &PTR_FUN_14410aec8;
  return;
}



// FUNCTION 14083ed00 FUN_14083ed00 body=262 status=ok
// SIG undefined FUN_14083ed00(void)

void FUN_14083ed00(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[0xf];
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
  plVar4 = (longlong *)param_1[0xc];
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
  plVar4 = (longlong *)param_1[9];
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
  plVar4 = (longlong *)param_1[5];
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
  *param_1 = &PTR_FUN_14410bb88;
  return;
}



// FUNCTION 14083ee10 ~FLiveLinkSubjectFrame body=162 status=ok
// SIG undefined ~FLiveLinkSubjectFrame(void)

void FLiveLinkSubjectFrame::~FLiveLinkSubjectFrame(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0xc,0);
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14083eec0 ~FMessageEndpoint body=291 status=ok
// SIG undefined ~FMessageEndpoint(void)

void FMessageEndpoint::~FMessageEndpoint(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  
  *param_1 = &PTR_LAB_14410c850;
  param_1[1] = &PTR_LAB_14410c880;
  plVar2 = (longlong *)param_1[7];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar6 = iVar5 == 0;
    if (bVar6) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (!bVar6) {
      LOCK();
      bVar6 = iVar5 == (int)plVar2[1];
      if (bVar6) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar6) {
        if (plVar2 != (longlong *)0x0) {
          plVar3 = (longlong *)param_1[6];
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x48))(plVar3,param_1 + 4);
          }
          LOCK();
          plVar3 = plVar2 + 1;
          lVar4 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar2)(plVar2);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar2 + 8))(plVar2,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar6 = iVar5 == 0;
      if (bVar6) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x13);
  TQueue<TSharedPtr<IMediaAudioSample,1>,0>::~TQueue<TSharedPtr<IMediaAudioSample,1>,0>
            (param_1 + 0xe);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 9);
  plVar2 = (longlong *)param_1[7];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar5 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 8))(plVar2,1);
    }
  }
  param_1[1] = &PTR__purecall_143f9a338;
  *param_1 = &PTR__purecall_143f595c8;
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar5 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 8))(plVar2,1);
    }
  }
  return;
}



// FUNCTION 14083eff0 FUN_14083eff0 body=743 status=ok
// SIG undefined FUN_14083eff0(void)

void FUN_14083eff0(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  
  *param_1 = &PTR__scalar_deleting_destructor__14410b0f0;
  if (param_1[0x86] != 0) {
    FMemory::Free();
  }
  if (param_1[0x83] != 0) {
    FMemory::Free();
  }
  if (param_1[0x81] != 0) {
    FMemory::Free();
  }
  if (param_1[0x7c] != 0) {
    FMemory::Free();
  }
  if (param_1[0x79] != 0) {
    FMemory::Free();
  }
  iVar6 = *(int *)(param_1 + 0x78);
  lVar1 = param_1[0x77];
  if (iVar6 != 0) {
    plVar5 = (longlong *)(lVar1 + 8);
    do {
      if ((int)plVar5[1] == 0) {
        plVar3 = (longlong *)*plVar5;
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)*plVar5;
        plVar2 = plVar3;
      }
      if (plVar2 == (longlong *)0x0) {
        if (((int)plVar5[1] != 0) && (plVar3 != (longlong *)0x0)) {
          lVar1 = *plVar3;
          goto LAB_14083f0ae;
        }
      }
      else {
        lVar1 = *plVar2;
        plVar3 = plVar2;
LAB_14083f0ae:
        (**(code **)(lVar1 + 0x28))(plVar3,0);
        if (*plVar5 != 0) {
          lVar1 = FMemory::Realloc(*plVar5,0,0);
          *plVar5 = lVar1;
        }
        *(undefined4 *)(plVar5 + 1) = 0;
      }
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 3;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar1 = param_1[0x77];
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  if (param_1[0x75] != 0) {
    FMemory::Free();
  }
  if (param_1[0x73] != 0) {
    FMemory::Free();
  }
  if (param_1[0x68] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x66) = 0;
  if (param_1[0x65] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x5d);
  if (param_1[0x59] != 0) {
    FMemory::Free();
  }
  lVar1 = 3;
  plVar5 = param_1 + 0x59;
  do {
    lVar1 = lVar1 + -1;
    *(undefined4 *)(plVar5 + -1) = 0;
    if (plVar5[-2] != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (plVar5 + -10);
    plVar5 = plVar5 + -10;
  } while (lVar1 != 0);
  iVar6 = *(int *)(param_1 + 0x3a);
  puVar4 = (undefined8 *)param_1[0x39];
  if (iVar6 != 0) {
    do {
      puVar4[0xc] = &PTR_FUN_14410b0e0;
      *puVar4 = &PTR_FUN_14410b0e0;
      puVar4 = puVar4 + 0x15;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    puVar4 = (undefined8 *)param_1[0x39];
  }
  if (puVar4 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  if (param_1[0x37] != 0) {
    FMemory::Free();
  }
  FUN_14083e830(param_1 + 0x1f);
  iVar6 = *(int *)(param_1 + 0x1e);
  lVar1 = param_1[0x1d];
  if (iVar6 != 0) {
    lVar1 = lVar1 + 0x10;
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar1);
      lVar1 = lVar1 + 0x20;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar1 = param_1[0x1d];
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  iVar6 = *(int *)(param_1 + 0x1c);
  lVar1 = param_1[0x1b];
  if (iVar6 != 0) {
    lVar1 = lVar1 + 0x10;
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar1);
      lVar1 = lVar1 + 0x20;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar1 = param_1[0x1b];
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x11);
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 14083f2e0 operator= body=114 status=ok
// SIG undefined operator=(void)

undefined8 *
TArray<FTransform,FDefaultAllocator>::operator=(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = (void *)*param_2;
    iVar1 = *(int *)(param_2 + 1);
    *(int *)(param_1 + 1) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return param_1;
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(param_1,iVar1);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 * 0x30);
  }
  return param_1;
}



// FUNCTION 14083f360 operator= body=506 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::operator=
          (longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  uint local_48;
  undefined4 uStack_44;
  longlong *local_40;
  uint uStack_38;
  uint uStack_34;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  if (param_1 != param_2) {
    uVar7 = 0;
    iVar9 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != iVar9) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (param_1,iVar9);
    }
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    uVar3 = iVar9 + 0x1f + (iVar9 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
    if (*(uint *)((longlong)param_1 + 0x2c) != uVar3) {
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
    }
    cVar2 = ConditionalRehash(param_1,iVar9,1);
    if ((cVar2 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
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
    puStack_30 = (uint *)(param_2 + 2);
    local_68 = 0;
    uStack_64 = 1;
    local_58._4_4_ = 0;
    uStack_50 = 0;
    if (iVar9 != 0) {
      puVar11 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar11 = puStack_30;
      }
      uVar3 = *puVar11;
      uVar8 = uVar7;
      while (uVar3 == 0) {
        iVar4 = (int)uVar8;
        uStack_50 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_50;
        local_68 = iVar4 + 1;
        uVar8 = (ulonglong)local_68;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_14083f4bb;
        uVar3 = puVar11[(longlong)iVar4 + 1];
      }
      uStack_64 = -uVar3 & uVar3;
      iVar4 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_58._4_4_ = (uStack_50 - iVar4) + 0x1f;
      if (iVar9 < local_58._4_4_) {
LAB_14083f4bb:
        local_58._4_4_ = iVar9;
      }
    }
    uStack_38 = local_68;
    uStack_34 = uStack_64;
    uStack_28 = 0xffffffff;
    iStack_24 = local_58._4_4_;
    uStack_20 = uStack_50;
    uStack_1c = iStack_4c;
    uStack_60 = local_68;
    uStack_5c = uStack_64;
    local_48 = uStack_50;
    uStack_44 = iStack_4c;
    uStack_50 = 0xffffffff;
    iStack_4c = local_58._4_4_;
    bVar1 = local_58._4_4_ < iVar9;
    local_40 = param_2;
    local_58 = puStack_30;
    if (bVar1) {
      do {
        Emplace<TTuple<FName,float>_const_&>
                  (param_1,local_res8,*param_2 + (longlong)iStack_4c * 0x18,0);
        uStack_50 = uStack_50 & ~uStack_5c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
      } while (iStack_4c < (int)local_58[6]);
    }
  }
  return param_1;
}



// FUNCTION 14083f580 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<FMediaPlayerFacade>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x150);
  }
  return param_1;
}



// FUNCTION 14083f5b0 FUN_14083f5b0 body=43 status=ok
// SIG undefined FUN_14083f5b0(void)

undefined8 * FUN_14083f5b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 14083f5e0 FUN_14083f5e0 body=43 status=ok
// SIG undefined FUN_14083f5e0(void)

undefined8 * FUN_14083f5e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3ef70;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14083f610 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
ADebugCameraController::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14083e560();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6c0);
  }
  return param_1;
}



// FUNCTION 14083f650 FUN_14083f650 body=43 status=ok
// SIG undefined FUN_14083f650(void)

undefined8 * FUN_14083f650(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14410b0e0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14083f680 `scalar_deleting_destructor' body=72 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FAnimNode_AssetPlayerBase::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14083f6d0 FUN_14083f6d0 body=52 status=ok
// SIG undefined FUN_14083f6d0(void)

undefined8 FUN_14083f6d0(undefined8 param_1,ulonglong param_2)

{
  FUN_14083e9a0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x140);
  }
  return param_1;
}



// FUNCTION 14083f710 FUN_14083f710 body=139 status=ok
// SIG undefined FUN_14083f710(void)

undefined8 * FUN_14083f710(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_IsPromotedBuild_14410cba8;
  LOCK();
  *(undefined4 *)(param_1 + 1) = 0;
  UNLOCK();
  (**(code **)(*(longlong *)param_1[2] + 0x20))();
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 8);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  *param_1 = &PTR_IsPromotedBuild_143f60558;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 14083f7a0 FUN_14083f7a0 body=87 status=ok
// SIG undefined FUN_14083f7a0(void)

longlong FUN_14083f7a0(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x6b8) = &PTR_ReadLocalVoiceData_1440104f8;
  if (*(longlong *)(param_1 + 0x6c8) != 0) {
    FMemory::Free();
  }
  FUN_14083e560(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x710);
  }
  return param_1;
}



// FUNCTION 14083f800 FUN_14083f800 body=43 status=ok
// SIG undefined FUN_14083f800(void)

undefined8 * FUN_14083f800(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143fcfaf0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14083f830 FUN_14083f830 body=52 status=ok
// SIG undefined FUN_14083f830(void)

undefined8 FUN_14083f830(undefined8 param_1,ulonglong param_2)

{
  FUN_14083ed00();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 14083f870 `scalar_deleting_destructor' body=124 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageContext,1>_>
         ::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x10);
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14083f8f0 FUN_14083f8f0 body=43 status=ok
// SIG undefined FUN_14083f8f0(void)

undefined8 * FUN_14083f8f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14410bb88;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 14083f920 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FMessageEndpoint::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FMessageEndpoint();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 14083f960 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FGeomCacheTrackProxy::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14083eff0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x440);
  }
  return param_1;
}



// FUNCTION 14083f9a0 FUN_14083f9a0 body=134 status=ok
// SIG undefined FUN_14083f9a0(void)

longlong FUN_14083f9a0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_141593110();
  uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
  FUN_140483870(uVar2,param_1 + 400);
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1);
  FUN_140483870(uVar2,param_1 + 400);
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x198);
  }
  return param_1;
}



// FUNCTION 14083fa30 FUN_14083fa30 body=73 status=ok
// SIG undefined FUN_14083fa30(void)

longlong FUN_14083fa30(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x198);
  }
  return param_1;
}



// FUNCTION 14083fa80 `scalar_deleting_destructor' body=151 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong ULiveLinkMessageBusFinder::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  TArray<FMovieSceneBinding,FDefaultAllocator>::~TArray<FMovieSceneBinding,FDefaultAllocator>
            (param_1 + 0x38);
  plVar4 = *(longlong **)(param_1 + 0x30);
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 14083fb20 FUN_14083fb20 body=132 status=ok
// SIG undefined FUN_14083fb20(void)

longlong FUN_14083fb20(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 14083fbb0 FUN_14083fbb0 body=190 status=ok
// SIG undefined FUN_14083fbb0(void)

int FUN_14083fbb0(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  LARGE_INTEGER local_res8;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + param_2;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + param_2) {
    TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x90 + *param_1);
  if (param_2 != 0) {
    lVar2 = (longlong)puVar3 + 0x1c;
    do {
      *puVar3 = 0;
      *(undefined8 *)(lVar2 + -0x14) = 0;
      *(undefined8 *)(lVar2 + -0xc) = 0;
      *(undefined8 *)(lVar2 + -4) = 0;
      FUN_142fc64d0(lVar2 + 4);
      *(undefined8 *)(lVar2 + 0x6c) = 0;
      QueryPerformanceCounter(&local_res8);
      puVar3 = puVar3 + 0x12;
      *(double *)(lVar2 + 100) = (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
      lVar2 = lVar2 + 0x90;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return iVar1;
}



// FUNCTION 14083fc70 FUN_14083fc70 body=1223 status=ok
// SIG undefined FUN_14083fc70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14083fc70(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  LARGE_INTEGER *pLVar1;
  undefined4 **ppuVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  LARGE_INTEGER LVar8;
  int iVar9;
  longlong *plVar10;
  int *piVar11;
  int iVar12;
  double *pdVar13;
  longlong lVar14;
  int iVar15;
  undefined4 *puVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined1 auStack_138 [32];
  LARGE_INTEGER local_118 [2];
  undefined4 *local_108;
  int local_100;
  int local_fc;
  int local_f8;
  longlong *local_f0;
  longlong local_e8;
  LARGE_INTEGER *local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8 [4];
  longlong local_98;
  longlong local_78;
  undefined4 local_70;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  pLVar1 = (LARGE_INTEGER *)(param_1 + 2);
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  *(undefined4 *)((longlong)param_1 + 0x34) = *param_3;
  *(undefined4 *)(param_1 + 7) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar6;
  *(undefined4 *)(param_1 + 8) = uVar7;
  local_e8 = param_2;
  local_e0 = pLVar1;
  if (*(char *)((longlong)param_1 + 0x44) == '\0') {
    iVar15 = (int)param_1[3];
    if (1 < iVar15) {
      FUN_140848770(pLVar1,0);
      iVar15 = (int)param_1[3];
    }
    if (iVar15 == 0) {
      FUN_14083fbb0(pLVar1,1);
    }
    local_118[0] = (LARGE_INTEGER)((LARGE_INTEGER *)(param_1 + 2))->QuadPart;
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    param_1[4] = *(longlong *)(param_2 + 0x28);
  }
  else {
    if (*(double *)(param_2 + 0x20) <= (double)param_1[5] &&
        (double)param_1[5] != *(double *)(param_2 + 0x20)) {
      FUN_140848770(pLVar1);
      param_1[5] = 0;
      param_1[4] = *(longlong *)(param_2 + 0x28);
    }
    iVar15 = (int)param_1[3];
    if (iVar15 == 0) {
      FUN_14083fbb0(pLVar1,1);
      local_118[0] = (LARGE_INTEGER)pLVar1->QuadPart;
      *(undefined4 *)(param_1 + 6) = 0;
    }
    else {
      if (5 < (int)param_1[6]) {
        FUN_140848200(pLVar1,0,(int)param_1[6],0);
        iVar15 = (int)param_1[3];
        *(undefined4 *)(param_1 + 6) = 0;
      }
      iVar15 = iVar15 + -1;
      if (-1 < iVar15) {
        lVar18 = (longlong)iVar15;
        pdVar13 = (double *)(lVar18 * 0x90 + param_1[2] + 0x80);
        do {
          if (*pdVar13 <= *(double *)(param_2 + 0x20) && *(double *)(param_2 + 0x20) != *pdVar13)
          break;
          iVar15 = iVar15 + -1;
          pdVar13 = pdVar13 + -0x12;
          lVar18 = lVar18 + -1;
        } while (-1 < lVar18);
      }
      _guard_xfg_dispatch_icall_nop(local_b8,0,0x70);
      local_d8 = 0;
      local_d0 = 0;
      local_c8 = 0;
      local_c0 = 0;
      FUN_142fc64d0(local_b8);
      uStack_50 = 0;
      QueryPerformanceCounter(local_118);
      iVar12 = (int)param_1[3];
      local_58 = (double)local_118[0].QuadPart * DAT_1468b02f8;
      *(int *)(param_1 + 3) = iVar12 + 1;
      local_58 = local_58 + 16777216.0;
      if (*(int *)((longlong)param_1 + 0x1c) < iVar12 + 1) {
        TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow
                  (param_1 + 2,iVar12);
      }
      lVar14 = ((longlong)iVar15 + 1) * 0x90;
      _guard_xfg_dispatch_icall_nop
                ((void *)(param_1[2] + lVar14 + 0x90),(void *)(param_1[2] + lVar14),
                 (longlong)(iVar12 - (iVar15 + 1)) * 0x90);
      lVar18 = param_1[2];
      *(undefined8 *)(lVar14 + lVar18) = 0;
      *(longlong *)(lVar14 + lVar18) = local_d8;
      local_d8 = 0;
      *(undefined4 *)(lVar14 + 8 + lVar18) = (undefined4)local_d0;
      *(undefined4 *)(lVar14 + 0xc + lVar18) = local_d0._4_4_;
      local_d0 = 0;
      *(undefined8 *)(lVar14 + 0x10 + lVar18) = 0;
      *(longlong *)(lVar14 + 0x10 + lVar18) = local_c8;
      local_c8 = 0;
      *(undefined4 *)(lVar14 + 0x18 + lVar18) = (undefined4)local_c0;
      *(undefined4 *)(lVar14 + 0x1c + lVar18) = local_c0._4_4_;
      local_c0 = 0;
      FUN_142fc6420(lVar18 + 0x20 + lVar14,local_b8);
      puVar16 = (undefined4 *)(lVar14 + 0x80 + lVar18);
      *puVar16 = (undefined4)local_58;
      puVar16[1] = local_58._4_4_;
      puVar16[2] = (undefined4)uStack_50;
      puVar16[3] = uStack_50._4_4_;
      local_70 = 0;
      if (local_78 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty(local_b8,0);
      if (local_98 != 0) {
        FMemory::Free();
      }
      if (local_b8[0] != 0) {
        FMemory::Free();
      }
      if (local_c8 != 0) {
        FMemory::Free();
      }
      if (local_d8 != 0) {
        FMemory::Free();
      }
      local_118[0].QuadPart = param_1[2] + lVar14;
    }
  }
  iVar15 = (int)param_1[1];
  local_108 = (undefined4 *)0x0;
  local_fc = 0;
  iVar12 = iVar15;
  puVar16 = local_108;
  local_f8 = iVar15;
  local_100 = iVar15;
  if (0 < iVar15) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_108,0);
    puVar16 = local_108;
  }
  for (; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar16 = 0;
    *(undefined1 *)(puVar16 + 1) = 0;
    puVar16 = puVar16 + 2;
  }
  plVar17 = *(longlong **)(param_2 + 0x10);
  local_f0 = plVar17 + (longlong)*(int *)(param_2 + 0x18) * 2;
  puVar16 = local_108;
  iVar12 = local_100;
  if (plVar17 != local_f0) {
    do {
      plVar4 = (longlong *)*param_1;
      iVar15 = (int)param_1[1];
      if (plVar4 != plVar4 + iVar15) {
        plVar10 = plVar4;
        do {
          if (*plVar10 == *plVar17) {
            iVar9 = (int)((longlong)plVar10 - (longlong)plVar4 >> 3);
            if (iVar9 != -1) goto LAB_14083fffa;
            break;
          }
          plVar10 = plVar10 + 1;
        } while (plVar10 != plVar4 + iVar15);
      }
      *(int *)(param_1 + 1) = iVar15 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar15 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar15);
      }
      *(longlong *)(*param_1 + (longlong)iVar15 * 8) = *plVar17;
      local_100 = iVar12 + 1;
      if (local_fc < local_100) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_108,iVar12);
        puVar16 = local_108;
      }
      puVar16[(longlong)iVar12 * 2] = 0;
      *(undefined1 *)(puVar16 + (longlong)iVar12 * 2 + 1) = 0;
      iVar12 = local_100;
      iVar9 = iVar15;
LAB_14083fffa:
      plVar4 = plVar17 + 1;
      plVar17 = plVar17 + 2;
      puVar16[(longlong)iVar9 * 2] = (int)*plVar4;
      *(undefined1 *)(puVar16 + (longlong)iVar9 * 2 + 1) = 1;
      iVar15 = local_f8;
    } while (plVar17 != local_f0);
  }
  lVar18 = local_e8;
  LVar8 = local_118[0];
  iVar15 = (int)param_1[1] - iVar15;
  TArray<FTransform,FDefaultAllocator>::operator=(local_118[0].QuadPart,local_e8);
  ppuVar2 = (undefined4 **)(LVar8.QuadPart + 0x10);
  if (ppuVar2 != &local_108) {
    if (*ppuVar2 != (undefined4 *)0x0) {
      FMemory::Free();
    }
    *ppuVar2 = puVar16;
    *(int *)(LVar8.QuadPart + 0x18) = iVar12;
    *(int *)(LVar8.QuadPart + 0x1c) = local_fc;
    puVar16 = (undefined4 *)0x0;
  }
  FLiveLinkMetaData::operator=(LVar8.QuadPart + 0x20,lVar18 + 0x30);
  uVar5 = *(undefined4 *)(lVar18 + 0x24);
  uVar6 = *(undefined4 *)(lVar18 + 0x28);
  uVar7 = *(undefined4 *)(lVar18 + 0x2c);
  *(undefined4 *)(LVar8.QuadPart + 0x80) = *(undefined4 *)(lVar18 + 0x20);
  *(undefined4 *)(LVar8.QuadPart + 0x84) = uVar5;
  *(undefined4 *)(LVar8.QuadPart + 0x88) = uVar6;
  *(undefined4 *)(LVar8.QuadPart + 0x8c) = uVar7;
  if (0 < iVar15) {
    lVar18 = local_e0->QuadPart;
    lVar14 = (longlong)(int)local_e0[1].s.LowPart * 0x90 + lVar18;
    if (lVar18 != lVar14) {
      piVar11 = (int *)(lVar18 + 0x18);
      do {
        iVar12 = *piVar11;
        *piVar11 = iVar12 + iVar15;
        if (piVar11[1] < iVar12 + iVar15) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(piVar11 + -2,iVar12);
        }
        puVar3 = (undefined4 *)(*(longlong *)(piVar11 + -2) + (longlong)iVar12 * 8);
        for (iVar12 = iVar15; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar3 = 0;
          *(undefined1 *)(puVar3 + 1) = 0;
          puVar3 = puVar3 + 2;
        }
        lVar18 = lVar18 + 0x90;
        piVar11 = piVar11 + 0x24;
      } while (lVar18 != lVar14);
    }
  }
  if (puVar16 != (undefined4 *)0x0) {
    FMemory::Free(puVar16);
  }
  return;
}



// FUNCTION 140840140 FUN_140840140 body=761 status=ok
// SIG undefined FUN_140840140(void)

void FUN_140840140(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  undefined2 *_Src;
  undefined8 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  undefined8 local_res18;
  void *local_res20;
  undefined8 local_88;
  longlong local_80;
  undefined2 *local_70;
  undefined8 local_68;
  longlong local_60 [4];
  
  local_res18 = param_3;
  puVar1 = (undefined8 *)FName::ToString(&local_res18);
  local_70 = (undefined2 *)*puVar1;
  iVar6 = *(int *)(puVar1 + 1);
  *puVar1 = 0;
  local_68._0_4_ = *(int *)(puVar1 + 1);
  local_68._4_4_ = *(int *)((longlong)puVar1 + 0xc);
  iVar2 = (2 - (uint)(iVar6 != 0)) + (int)local_68;
  puVar1[1] = 0;
  iVar4 = (int)local_68;
  if (local_68._4_4_ < iVar2) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_70,iVar2,-iVar6);
    iVar4 = (int)local_68;
  }
  iVar6 = (2 - (uint)(iVar4 != 0)) + iVar4;
  local_68 = CONCAT44(local_68._4_4_,iVar6);
  if (local_68._4_4_ < iVar6) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70,iVar4);
    iVar6 = (int)local_68;
  }
  _Src = local_70;
  local_70[(longlong)iVar4 - (ulonglong)(iVar4 != 0)] = 0x5f;
  (local_70 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)))[1] = 0;
  if (local_80 != 0) {
    FMemory::Free();
  }
  iVar4 = (int)param_2[1];
  if (*(int *)((longlong)param_1 + 0xc) < (int)param_1[1] + iVar4) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1);
    iVar4 = (int)param_2[1];
  }
  lVar7 = *param_2;
  local_80 = (longlong)iVar4 * 8 + lVar7;
  if (lVar7 != local_80) {
    do {
      puVar1 = (undefined8 *)FName::ToString(lVar7,local_60);
      if (iVar6 < 2) {
        puVar5 = (undefined2 *)*puVar1;
        *puVar1 = 0;
        iVar8 = *(int *)(puVar1 + 1);
        puVar1[1] = 0;
      }
      else {
        iVar4 = *(int *)(puVar1 + 1) + -1;
        if (*(int *)(puVar1 + 1) == 0) {
          iVar4 = 0;
        }
        if ((iVar6 != 0) || (iVar2 = 1, iVar4 == 0)) {
          iVar2 = 0;
        }
        local_70 = (undefined2 *)0x0;
        puVar5 = (undefined2 *)0x0;
        if ((iVar6 == 0) && (iVar2 + iVar4 == 0)) {
          local_68._4_4_ = 0;
          iVar2 = iVar6;
        }
        else {
          local_68._0_4_ = iVar6;
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_70,iVar2 + iVar4 + iVar6,0);
          puVar5 = local_70;
          _guard_xfg_dispatch_icall_nop(local_70,_Src,(longlong)iVar6 * 2);
          iVar2 = (int)local_68;
        }
        local_res20 = (void *)*puVar1;
        iVar8 = iVar2;
        if (iVar4 != 0) {
          iVar8 = iVar4 + (uint)(iVar2 == 0) + iVar2;
          local_68 = CONCAT44(local_68._4_4_,iVar8);
          if (local_68._4_4_ < iVar8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70,iVar2);
            puVar5 = local_70;
            iVar8 = (int)local_68;
          }
          _guard_xfg_dispatch_icall_nop
                    (puVar5 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)),local_res20,
                     (longlong)iVar4 * 2);
          (puVar5 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)))[iVar4] = 0;
        }
        local_70 = (undefined2 *)0x0;
        local_68 = 0;
      }
      puVar3 = &DAT_143f3eda8;
      if (iVar8 != 0) {
        puVar3 = puVar5;
      }
      FName::FName(&local_88,puVar3);
      iVar4 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar4 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar4 * 8) = local_88;
      if (puVar5 != (undefined2 *)0x0) {
        FMemory::Free(puVar5);
      }
      if (local_60[0] != 0) {
        FMemory::Free();
      }
      lVar7 = lVar7 + 8;
    } while (lVar7 != local_80);
  }
  if (_Src != (undefined2 *)0x0) {
    FMemory::Free(_Src);
  }
  return;
}



// FUNCTION 140840440 FUN_140840440 body=464 status=ok
// SIG undefined FUN_140840440(void)

void FUN_140840440(longlong param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong *local_28;
  longlong *local_20;
  
  iVar3 = *(int *)(param_1 + 0x138);
  *(int *)(param_1 + 0x138) = iVar3 + 1;
  if (*(int *)(param_1 + 0x13c) < iVar3 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x130,iVar3);
  }
  uVar4 = *(undefined4 *)(param_1 + 0x1c4);
  uVar5 = *(undefined4 *)(param_1 + 0x1c8);
  uVar6 = *(undefined4 *)(param_1 + 0x1cc);
  puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x130) + (longlong)iVar3 * 0x10);
  *puVar2 = *(undefined4 *)(param_1 + 0x1c0);
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  plVar10 = (longlong *)operator_new(0x18);
  local_20 = (longlong *)0x0;
  if (plVar10 != (longlong *)0x0) {
    *(undefined4 *)(plVar10 + 1) = 1;
    *plVar10 = (longlong)&PTR_FUN_14410cc18;
    *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
    plVar10[2] = (longlong)&PTR_FUN_14410bbf0;
    local_20 = plVar10;
  }
  local_28 = local_20 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_28,local_28,local_28);
  plVar8 = local_20;
  plVar10 = local_28;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x128);
  *(int *)(param_1 + 0x128) = iVar3 + 1;
  if (*(int *)(param_1 + 300) < iVar3 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x120,iVar3);
  }
  plVar9 = local_20;
  plVar11 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x120));
  *plVar11 = (longlong)plVar10;
  plVar11[1] = (longlong)plVar8;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_20 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  uVar12 = GetTransientPackage();
  FUN_1417846f0(uVar12,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar13 = ULiveLinkSourceFactory::StaticClass();
  uVar12 = FUN_1417985e0(uVar13,uVar12,0,0,0,0,0,0,0);
  iVar3 = *(int *)(param_1 + 0x148);
  *(int *)(param_1 + 0x148) = iVar3 + 1;
  if (*(int *)(param_1 + 0x14c) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x140,iVar3);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x140) + (longlong)iVar3 * 8) = uVar12;
  return;
}



// FUNCTION 140840610 FUN_140840610 body=330 status=ok
// SIG undefined FUN_140840610(void)

void FUN_140840610(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  
  if (*(longlong *)(param_1 + 200) == 0) goto LAB_14084074d;
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 200);
  if (lVar7 == 0) {
LAB_14084067c:
    lVar7 = 0;
  }
  else {
    lVar2 = UBlueprint::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_14084067c;
  }
  lVar2 = *(longlong *)(param_1 + 200);
  iVar4 = 0;
  if (0 < *(int *)(lVar7 + 200)) {
    lVar6 = 0;
    do {
      plVar5 = (longlong *)(*(longlong *)(lVar7 + 0xc0) + lVar6);
      if ((((int)plVar5[1] != 0) && (plVar3 = (longlong *)*plVar5, plVar3 != (longlong *)0x0)) &&
         (plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res8), *plVar3 == lVar2))
      {
        if (((int)plVar5[1] != 0) && (plVar3 = (longlong *)*plVar5, plVar3 != (longlong *)0x0)) {
          (**(code **)(*plVar3 + 0x28))(plVar3,0);
          if (*plVar5 != 0) {
            lVar2 = FMemory::Realloc(*plVar5,0,0);
            *plVar5 = lVar2;
          }
          *(undefined4 *)(plVar5 + 1) = 0;
        }
        break;
      }
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 0x10;
    } while (iVar4 < *(int *)(lVar7 + 200));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar7 + 0xc0,0);
  *(undefined8 *)(param_1 + 200) = 0;
LAB_14084074d:
  FUN_1417502d0(param_1);
  return;
}



// FUNCTION 140840760 FUN_140840760 body=330 status=ok
// SIG undefined FUN_140840760(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140840760(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar11;
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
  float fVar23;
  
  fVar13 = param_1[4];
  fVar11 = param_1[5];
  fVar12 = param_1[6];
  fVar14 = param_1[7];
  fVar4 = 1.0 - param_4;
  fVar20 = param_1[8];
  fVar1 = param_1[9];
  fVar2 = param_1[10];
  fVar3 = param_1[0xb];
  fVar19 = *param_1 * fVar4;
  fVar21 = param_1[1] * fVar4;
  fVar22 = param_1[2] * fVar4;
  fVar23 = param_1[3] * fVar4;
  param_3[4] = fVar13 * fVar4;
  param_3[5] = fVar11 * fVar4;
  param_3[6] = fVar12 * fVar4;
  param_3[7] = fVar14 * fVar4;
  *param_3 = fVar19;
  param_3[1] = fVar21;
  param_3[2] = fVar22;
  param_3[3] = fVar23;
  param_3[8] = fVar20 * fVar4;
  param_3[9] = fVar1 * fVar4;
  param_3[10] = fVar2 * fVar4;
  param_3[0xb] = fVar3 * fVar4;
  fVar15 = *param_2 * param_4;
  fVar16 = param_2[1] * param_4;
  fVar17 = param_2[2] * param_4;
  fVar18 = param_2[3] * param_4;
  fVar5 = fVar19 * fVar15 + fVar22 * fVar17;
  fVar8 = fVar21 * fVar16 + fVar23 * fVar18;
  fVar9 = fVar22 * fVar17 + fVar19 * fVar15;
  fVar10 = fVar23 * fVar18 + fVar21 * fVar16;
  fVar19 = (float)(-(uint)(0.0 <= fVar8 + fVar5) & ((uint)(0.0 - fVar15) ^ (uint)fVar15) ^
                  (uint)(0.0 - fVar15)) + fVar19;
  fVar21 = (float)(-(uint)(0.0 <= fVar9 + fVar8) & ((uint)(0.0 - fVar16) ^ (uint)fVar16) ^
                  (uint)(0.0 - fVar16)) + fVar21;
  fVar22 = (float)(-(uint)(0.0 <= fVar10 + fVar9) & ((uint)(0.0 - fVar17) ^ (uint)fVar17) ^
                  (uint)(0.0 - fVar17)) + fVar22;
  fVar23 = (float)(-(uint)(0.0 <= fVar5 + fVar10) & ((uint)(0.0 - fVar18) ^ (uint)fVar18) ^
                  (uint)(0.0 - fVar18)) + fVar23;
  *param_3 = fVar19;
  param_3[1] = fVar21;
  param_3[2] = fVar22;
  param_3[3] = fVar23;
  fVar17 = fRam000000014685edcc;
  fVar16 = fRam000000014685edc8;
  fVar15 = fRam000000014685edc4;
  fVar10 = _DAT_14685edc0;
  fVar5 = param_2[5];
  fVar8 = param_2[6];
  fVar9 = param_2[7];
  param_3[4] = param_2[4] * param_4 + fVar13 * fVar4;
  param_3[5] = fVar5 * param_4 + fVar11 * fVar4;
  param_3[6] = fVar8 * param_4 + fVar12 * fVar4;
  param_3[7] = fVar9 * param_4 + fVar14 * fVar4;
  fVar5 = fVar19 * fVar19 + fVar22 * fVar22;
  fVar8 = fVar21 * fVar21 + fVar23 * fVar23;
  fVar9 = fVar22 * fVar22 + fVar19 * fVar19;
  fVar13 = fVar23 * fVar23 + fVar21 * fVar21;
  auVar6._0_4_ = param_2[8] * param_4 + fVar20 * fVar4;
  auVar6._4_4_ = param_2[9] * param_4 + fVar1 * fVar4;
  auVar6._8_4_ = param_2[10] * param_4 + fVar2 * fVar4;
  auVar6._12_4_ = param_2[0xb] * param_4 + fVar3 * fVar4;
  fVar20 = fVar8 + fVar5;
  fVar8 = fVar9 + fVar8;
  fVar9 = fVar13 + fVar9;
  fVar5 = fVar5 + fVar13;
  *(undefined1 (*) [16])(param_3 + 8) = auVar6;
  auVar7._4_4_ = fVar8;
  auVar7._0_4_ = fVar20;
  auVar7._8_4_ = fVar9;
  auVar7._12_4_ = fVar5;
  auVar7 = rsqrtps(auVar6,auVar7);
  fVar13 = auVar7._0_4_;
  fVar11 = auVar7._4_4_;
  fVar12 = auVar7._8_4_;
  fVar14 = auVar7._12_4_;
  fVar13 = (fVar10 - fVar13 * fVar13 * fVar20 * fVar10) * fVar13 + fVar13;
  fVar11 = (fVar15 - fVar11 * fVar11 * fVar8 * fVar15) * fVar11 + fVar11;
  fVar12 = (fVar16 - fVar12 * fVar12 * fVar9 * fVar16) * fVar12 + fVar12;
  fVar14 = (fVar17 - fVar14 * fVar14 * fVar5 * fVar17) * fVar14 + fVar14;
  fVar11 = (float)(((uint)(((fVar15 - fVar11 * fVar11 * fVar8 * fVar15) * fVar11 + fVar11) * fVar21)
                   ^ uRam000000014685edb4) & -(uint)(fRam000000014685edf4 <= fVar8) ^
                  uRam000000014685edb4);
  fVar12 = (float)(((uint)(((fVar16 - fVar12 * fVar12 * fVar9 * fVar16) * fVar12 + fVar12) * fVar22)
                   ^ uRam000000014685edb8) & -(uint)(fRam000000014685edf8 <= fVar9) ^
                  uRam000000014685edb8);
  fVar14 = (float)(((uint)(((fVar17 - fVar14 * fVar14 * fVar5 * fVar17) * fVar14 + fVar14) * fVar23)
                   ^ uRam000000014685edbc) & -(uint)(fRam000000014685edfc <= fVar5) ^
                  uRam000000014685edbc);
  *param_3 = (float)(((uint)(((fVar10 - fVar13 * fVar13 * fVar20 * fVar10) * fVar13 + fVar13) *
                            fVar19) ^ _DAT_14685edb0) & -(uint)(_DAT_14685edf0 <= fVar20) ^
                    _DAT_14685edb0);
  param_3[1] = fVar11;
  param_3[2] = fVar12;
  param_3[3] = fVar14;
  return;
}



// FUNCTION 1408408b0 Build body=1213 status=ok
// SIG undefined Build(void)

undefined8 ** FMessageEndpointBuilder::Build(longlong *param_1,undefined8 **param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  longlong lVar8;
  byte bVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  int iVar18;
  bool bVar19;
  undefined8 *local_68;
  longlong *local_60;
  undefined8 *local_58;
  longlong *local_50;
  undefined1 local_48 [16];
  
  puVar14 = (undefined8 *)0x0;
  *param_2 = (undefined8 *)0x0;
  param_2[1] = (undefined8 *)0x0;
  plVar2 = (longlong *)param_1[1];
  bVar7 = false;
  if (plVar2 == (longlong *)0x0) {
    return param_2;
  }
  LOCK();
  iVar18 = (int)plVar2[1];
  bVar19 = iVar18 == 0;
  if (bVar19) {
    *(int *)(plVar2 + 1) = 0;
    iVar18 = 0;
  }
  UNLOCK();
  if (bVar19) {
    return param_2;
  }
  while( true ) {
    LOCK();
    bVar19 = iVar18 == (int)plVar2[1];
    if (bVar19) {
      *(int *)(plVar2 + 1) = iVar18 + 1;
    }
    UNLOCK();
    if (bVar19) break;
    LOCK();
    iVar18 = (int)plVar2[1];
    bVar19 = iVar18 == 0;
    if (bVar19) {
      *(int *)(plVar2 + 1) = 0;
      iVar18 = 0;
    }
    UNLOCK();
    if (bVar19) {
      return param_2;
    }
  }
  if (plVar2 == (longlong *)0x0) {
    return param_2;
  }
  plVar3 = (longlong *)*param_1;
  if (plVar3 == (longlong *)0x0) goto LAB_140840d29;
  puVar11 = (undefined8 *)operator_new(0xb0);
  if (puVar11 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    puVar11[2] = 0;
    puVar11[3] = 0;
    *puVar11 = &PTR_LAB_14410c850;
    puVar11[1] = &PTR_LAB_14410c880;
    puVar11[4] = 0;
    puVar11[5] = 0;
    puVar12 = (undefined4 *)FGuid::NewGuid(local_48);
    uVar4 = puVar12[1];
    uVar5 = puVar12[2];
    uVar6 = puVar12[3];
    *(undefined4 *)(puVar11 + 4) = *puVar12;
    *(undefined4 *)((longlong)puVar11 + 0x24) = uVar4;
    *(undefined4 *)(puVar11 + 5) = uVar5;
    *(undefined4 *)((longlong)puVar11 + 0x2c) = uVar6;
    puVar11[6] = plVar3;
    puVar11[7] = plVar2;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    *(undefined1 *)(puVar11 + 8) = 1;
    puVar11[9] = 0;
    iVar18 = (int)param_1[4];
    puVar14 = (undefined8 *)param_1[3];
    *(int *)(puVar11 + 10) = iVar18;
    if (iVar18 == 0) {
      *(undefined4 *)((longlong)puVar11 + 0x54) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar11 + 9,iVar18,0);
      puVar13 = (undefined8 *)puVar11[9];
      do {
        *puVar13 = *puVar14;
        lVar8 = puVar14[1];
        puVar13[1] = lVar8;
        if (lVar8 != 0) {
          LOCK();
          *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
          UNLOCK();
        }
        puVar13 = puVar13 + 2;
        puVar14 = puVar14 + 2;
        iVar18 = iVar18 + -1;
      } while (iVar18 != 0);
    }
    puVar14 = (undefined8 *)0x0;
    FGuid::NewGuid(puVar11 + 0xb);
    puVar13 = (undefined8 *)operator_new(0x18);
    if (puVar13 != (undefined8 *)0x0) {
      *puVar13 = 0;
      puVar13[1] = 0;
      puVar13[2] = 0;
      puVar14 = puVar13;
    }
    puVar11[0xf] = puVar14;
    puVar11[0xe] = puVar14;
    *(undefined1 *)(puVar11 + 0x10) = 0;
    puVar11[0x11] = param_1[6];
    puVar11[0x13] = 0;
    *(undefined4 *)(puVar11 + 0x14) = 0;
    plVar15 = (longlong *)FTaskGraphInterface::Get();
    bVar9 = (**(code **)(*plVar15 + 0x10))(plVar15);
    bVar7 = true;
    uVar10 = 0xff;
    if (bVar9 != 0xff) {
      uVar10 = (uint)bVar9;
    }
    *(uint *)(puVar11 + 0x12) = uVar10;
    puVar14 = puVar11;
  }
  plVar15 = (longlong *)0x0;
  plVar16 = (longlong *)operator_new(0x18);
  if (plVar16 != (longlong *)0x0) {
    *(undefined4 *)(plVar16 + 1) = 1;
    *(undefined4 *)((longlong)plVar16 + 0xc) = 1;
    *plVar16 = (longlong)&PTR_FUN_14410cc48;
    plVar16[2] = (longlong)puVar14;
    plVar15 = plVar16;
  }
  plVar16 = puVar14 + 2;
  if (puVar14 == (undefined8 *)0x0) {
    plVar16 = (longlong *)0x0;
  }
  local_68 = puVar14;
  local_60 = plVar15;
  if (plVar16 != (longlong *)0x0) {
    if ((*plVar16 != 0) && (plVar16[1] != 0)) {
      piVar1 = (int *)(plVar16[1] + 8);
      LOCK();
      iVar18 = *piVar1;
      if (iVar18 == 0) {
        *piVar1 = 0;
        iVar18 = 0;
      }
      UNLOCK();
      if (0 < iVar18) goto LAB_140840b8e;
    }
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
    }
    *plVar16 = (longlong)puVar14;
    plVar17 = (longlong *)plVar16[1];
    if (plVar15 != plVar17) {
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
        UNLOCK();
        plVar17 = (longlong *)plVar16[1];
      }
      if (plVar17 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*plVar17 + 8))(plVar17,1);
        }
      }
      plVar16[1] = (longlong)plVar15;
    }
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar16 = plVar15 + 1;
      lVar8 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar15)();
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15,1);
        }
      }
    }
  }
LAB_140840b8e:
  if (param_2 != &local_68) {
    *param_2 = puVar14;
    local_68 = (undefined8 *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_60);
  }
  plVar15 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_60 + 1;
    lVar8 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  if ((bVar7) && (plVar2 != (longlong *)0x0)) {
    LOCK();
    plVar15 = plVar2 + 1;
    lVar8 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  plVar15 = param_2[1];
  local_58 = *param_2;
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  local_50 = plVar15;
  (**(code **)(*plVar3 + 0x20))(plVar3,*param_2 + 4,&local_58);
  plVar3 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_50 + 1;
    lVar8 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar15 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
  }
  if ((char)param_1[2] != '\0') {
    *(undefined1 *)(*param_2 + 8) = 0;
  }
  if ((char)param_1[5] == '\0') {
    uVar10 = 0xff;
    if ((*(uint *)(param_1 + 7) & 0xff) != 0xff) {
      uVar10 = *(uint *)(param_1 + 7) & 0xff;
    }
    *(uint *)(*param_2 + 0x12) = uVar10;
  }
  else {
    *(undefined1 *)(*param_2 + 0x10) = 1;
    *(undefined4 *)(*param_2 + 0x12) = 0xff;
  }
LAB_140840d29:
  LOCK();
  plVar3 = plVar2 + 1;
  lVar8 = *plVar3;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)lVar8 == 1) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    iVar18 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar18 == 1) {
      (**(code **)(*plVar2 + 8))(plVar2,1);
    }
  }
  return param_2;
}



// FUNCTION 140840d70 FUN_140840d70 body=611 status=ok
// SIG undefined FUN_140840d70(void)

void FUN_140840d70(undefined8 param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  ushort uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint *puVar12;
  undefined8 local_res10;
  int local_a8;
  uint uStack_a4;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int iStack_80;
  uint uStack_7c;
  uint *local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 uStack_40;
  
  uVar7 = FWeakObjectPtr::Get(*(longlong *)(param_3 + 0x10) + 0x40);
  uVar3 = *(uint *)(param_2 + 5);
  puVar1 = (uint *)(param_2 + 2);
  uStack_a4 = 1;
  local_a8 = 0;
  uStack_94 = 0;
  iStack_90 = 0;
  if (uVar3 != 0) {
    puVar12 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar4 = *puVar12;
    iStack_90 = 0;
    local_a8 = 0;
    while (uVar4 == 0) {
      lVar10 = (longlong)local_a8;
      iStack_90 = iStack_90 + 0x20;
      iVar8 = local_a8 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar8;
      if (bVar5) goto LAB_140840e4c;
      uVar4 = puVar12[lVar10 + 1];
    }
    uStack_a4 = -uVar4 & uVar4;
    iVar8 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_94 = (iStack_90 - iVar8) + 0x1f;
    if ((int)uVar3 < (int)uStack_94) {
LAB_140840e4c:
      uStack_94 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_2 + 5);
  uStack_70 = 0xffffffff;
  uStack_6c = uStack_94;
  local_68 = CONCAT44(uStack_8c,iStack_90);
  uStack_58 = CONCAT44(uStack_a4,local_a8);
  uVar11 = uVar4 & 0xffffffe0;
  iStack_80 = local_a8;
  uStack_7c = uStack_a4;
  local_78 = puVar1;
  local_60 = param_2;
  puStack_50 = puVar1;
  uStack_40 = local_68;
  uStack_48 = uStack_70;
  uStack_44 = uStack_6c;
  uStack_94 = uVar4;
  if (uVar4 != uVar3) {
    puVar12 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar9 = puVar12[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar8 = (int)uVar4 >> 5;
    while (uVar9 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_140840f11;
      uVar9 = puVar12[(longlong)iVar8 + 1];
      iVar8 = iVar8 + 1;
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
    uStack_94 = (uVar11 - iVar8) + 0x1f;
    if ((int)uVar3 < (int)uStack_94) {
LAB_140840f11:
      uStack_94 = uVar3;
    }
  }
  while ((uStack_6c != uStack_94 || (local_78 != puVar1))) {
    uVar2 = *(undefined4 *)(*param_2 + 8 + (longlong)(int)uStack_6c * 0x18);
    local_res10 = *(undefined8 *)(*param_2 + (longlong)(int)uStack_6c * 0x18);
    uVar6 = USkeleton::GetUIDByName(uVar7,&DAT_146aef308,&local_res10);
    if ((uVar6 != 0xffff) &&
       (uVar6 = *(ushort *)(*(longlong *)param_4[2] + (ulonglong)uVar6 * 2), uVar6 != 0xffff)) {
      lVar10 = *param_4;
      *(undefined4 *)(lVar10 + (ulonglong)uVar6 * 8) = uVar2;
      *(undefined1 *)(lVar10 + 4 + (ulonglong)uVar6 * 8) = 1;
    }
    uStack_70 = uStack_70 & ~uStack_7c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
  }
  return;
}



// FUNCTION 140840fe0 FUN_140840fe0 body=981 status=ok
// SIG undefined FUN_140840fe0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140840fe0(longlong param_1,double param_2,longlong param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  double *pdVar19;
  int iVar20;
  longlong lVar21;
  longlong *plVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  float fVar26;
  
  TArray<FName,FDefaultAllocator>::operator=(param_3,param_1 + 0x50);
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_3 + 0x10,param_1 + 0x60);
  uVar5 = *(undefined4 *)(param_1 + 0x74);
  uVar6 = *(undefined4 *)(param_1 + 0x78);
  uVar7 = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(param_3 + 0x24) = uVar5;
  *(undefined4 *)(param_3 + 0x28) = uVar6;
  *(undefined4 *)(param_3 + 0x2c) = uVar7;
  TArray<FName,FDefaultAllocator>::operator=(param_3 + 0x30,param_1);
  uVar13 = 0;
  *(undefined4 *)(param_3 + 0x48) = 0;
  if ((*(int *)(param_3 + 0x4c) < 0) && (*(int *)(param_3 + 0x4c) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_3 + 0x40,0);
  }
  *(undefined4 *)(param_3 + 0x58) = 0;
  if ((*(int *)(param_3 + 0x5c) < 0) && (*(int *)(param_3 + 0x5c) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_3 + 0x50,0);
  }
  if (*(char *)(param_1 + 0x44) == '\0') {
    TArray<FTransform,FDefaultAllocator>::operator=
              (param_3 + 0x40,
               (longlong)(*(int *)(param_1 + 0x18) + -1) * 0x90 + *(longlong *)(param_1 + 0x10));
    TArray<FName,FDefaultAllocator>::operator=
              (param_3 + 0x50,
               *(longlong *)(param_1 + 0x10) + 0x10 +
               (longlong)(*(int *)(param_1 + 0x18) + -1) * 0x90);
    FLiveLinkMetaData::operator=
              (param_3 + 0x60,
               *(longlong *)(param_1 + 0x10) + 0x20 +
               (longlong)(*(int *)(param_1 + 0x18) + -1) * 0x90);
    *(undefined8 *)(param_1 + 0x28) =
         *(undefined8 *)
          (*(longlong *)(param_1 + 0x10) + -0x10 + (longlong)*(int *)(param_1 + 0x18) * 0x90);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x18) + -1;
    return;
  }
  iVar20 = *(int *)(param_1 + 0x18) + -1;
  uVar17 = (ulonglong)iVar20;
  dVar4 = (param_2 - *(double *)(param_1 + 0x20)) - (double)*(float *)(param_1 + 0x48);
  *(double *)(param_1 + 0x28) = dVar4;
  if (-1 < iVar20) {
    pdVar19 = (double *)(*(longlong *)(param_1 + 0x10) + 0x80 + uVar17 * 0x90);
    uVar18 = uVar17;
    do {
      iVar16 = (int)uVar18;
      if (*pdVar19 <= dVar4 && dVar4 != *pdVar19) {
        *(int *)(param_1 + 0x30) = iVar16;
        lVar21 = (longlong)iVar16 * 0x90;
        plVar14 = (longlong *)(lVar21 + *(longlong *)(param_1 + 0x10));
        if (iVar16 == iVar20) {
          TArray<FTransform,FDefaultAllocator>::operator=(param_3 + 0x40,plVar14);
          TArray<FName,FDefaultAllocator>::operator=
                    (param_3 + 0x50,*(longlong *)(param_1 + 0x10) + 0x10 + lVar21);
          plVar14 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x20 + lVar21);
        }
        else {
          iVar20 = (int)plVar14[1];
          plVar22 = (longlong *)(((longlong)iVar16 + 1) * 0x90 + *(longlong *)(param_1 + 0x10));
          iVar16 = *(int *)(param_3 + 0x48);
          fVar26 = (float)((dVar4 - (double)plVar14[0x10]) /
                          ((double)plVar22[0x10] - (double)plVar14[0x10]));
          if (iVar16 < iVar20) {
            *(int *)(param_3 + 0x48) = iVar20;
            iVar15 = iVar20 - iVar16;
            if (*(int *)(param_3 + 0x4c) < iVar20) {
              TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_3 + 0x40,iVar16);
            }
            uVar11 = uRam000000014685ed7c;
            uVar10 = uRam000000014685ed78;
            uVar9 = uRam000000014685ed74;
            uVar8 = _DAT_14685ed70;
            puVar1 = (undefined4 *)((longlong)iVar16 * 0x30 + *(longlong *)(param_3 + 0x40));
            uVar23 = uRam000000014685ed6c;
            for (; uRam000000014685ed6c = uVar23, iVar15 != 0; iVar15 = iVar15 + -1) {
              *puVar1 = 0;
              puVar1[1] = 0;
              puVar1[2] = 0;
              puVar1[3] = uVar23;
              *(undefined8 *)(puVar1 + 4) = 0;
              *(undefined8 *)(puVar1 + 6) = 0;
              uVar23 = uRam000000014685ed64 & uVar9;
              uVar24 = uRam000000014685ed68 & uVar10;
              uVar25 = uRam000000014685ed6c & uVar11;
              puVar1[8] = _DAT_14685ed60 & uVar8;
              puVar1[9] = uVar23;
              puVar1[10] = uVar24;
              puVar1[0xb] = uVar25;
              puVar1 = puVar1 + 0xc;
              uVar23 = uRam000000014685ed6c;
            }
          }
          else if ((iVar20 < iVar16) && (iVar20 != iVar16)) {
            *(int *)(param_3 + 0x48) = iVar20;
          }
          uVar17 = uVar13;
          if (0 < (int)plVar14[1]) {
            do {
              lVar21 = (longlong)(int)uVar17 * 0x30;
              FUN_140840760(lVar21 + *plVar14,*plVar22 + lVar21,
                            *(longlong *)(param_3 + 0x40) + lVar21,fVar26);
              uVar23 = (int)uVar17 + 1;
              uVar17 = (ulonglong)uVar23;
            } while ((int)uVar23 < (int)plVar14[1]);
          }
          iVar20 = *(int *)(param_3 + 0x58);
          iVar16 = (int)plVar14[3];
          if (iVar20 < iVar16) {
            *(int *)(param_3 + 0x58) = iVar16;
            iVar15 = iVar16 - iVar20;
            if (*(int *)(param_3 + 0x5c) < iVar16) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (param_3 + 0x50,iVar20);
            }
            puVar1 = (undefined4 *)(*(longlong *)(param_3 + 0x50) + (longlong)iVar20 * 8);
            for (; iVar15 != 0; iVar15 = iVar15 + -1) {
              *puVar1 = 0;
              *(undefined1 *)(puVar1 + 1) = 0;
              puVar1 = puVar1 + 2;
            }
          }
          else if ((iVar16 < iVar20) && (iVar16 != iVar20)) {
            *(int *)(param_3 + 0x58) = iVar16;
          }
          if (0 < (int)plVar14[3]) {
            uVar17 = uVar13;
            do {
              lVar21 = plVar14[2];
              lVar2 = plVar22[2];
              lVar3 = *(longlong *)(param_3 + 0x50);
              *(float *)(uVar13 + lVar3) =
                   (1.0 - fVar26) * *(float *)(uVar13 + lVar21) +
                   fVar26 * *(float *)(uVar13 + lVar2);
              if ((*(char *)(uVar13 + 4 + lVar21) == '\0') &&
                 (*(char *)(uVar13 + 4 + lVar2) == '\0')) {
                uVar12 = 0;
              }
              else {
                uVar12 = 1;
              }
              *(undefined1 *)(uVar13 + 4 + lVar3) = uVar12;
              uVar23 = (int)uVar17 + 1;
              uVar17 = (ulonglong)uVar23;
              uVar13 = uVar13 + 8;
            } while ((int)uVar23 < (int)plVar14[3]);
          }
          plVar14 = plVar14 + 4;
        }
        FLiveLinkMetaData::operator=(param_3 + 0x60,plVar14);
        return;
      }
      uVar18 = (ulonglong)(iVar16 - 1);
      pdVar19 = pdVar19 + -0x12;
      uVar17 = uVar17 - 1;
    } while (-1 < (longlong)uVar17);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  TArray<FTransform,FDefaultAllocator>::operator=(param_3 + 0x40,*(undefined8 *)(param_1 + 0x10));
  TArray<FName,FDefaultAllocator>::operator=(param_3 + 0x50,*(longlong *)(param_1 + 0x10) + 0x10);
  FLiveLinkMetaData::operator=(param_3 + 0x60,*(longlong *)(param_1 + 0x10) + 0x20);
  return;
}



// FUNCTION 1408413c0 FUN_1408413c0 body=1399 status=ok
// SIG undefined FUN_1408413c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1408413c0(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  ushort *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  ushort *puVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong *plVar19;
  undefined8 *puVar20;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined8 local_110;
  int local_108 [2];
  undefined8 local_100;
  longlong local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  int local_94;
  longlong local_88;
  undefined4 local_80;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  uVar14 = 0;
  local_d0 = param_5;
  iVar10 = (int)param_3[1];
  local_118 = (undefined8 *)0x0;
  local_110 = 0;
  local_f8 = param_1;
  local_f0 = param_4;
  local_e8 = param_3;
  if (0 < iVar10) {
    FUN_140848da0(&local_118,iVar10);
    iVar10 = (int)param_3[1];
    uVar14 = local_110 & 0xffffffff;
  }
  lVar18 = local_f8;
  plVar19 = (longlong *)*param_3;
  plVar2 = plVar19 + iVar10;
  puVar20 = local_118;
  if (plVar19 != plVar2) {
    plVar1 = (longlong *)(local_f8 + 0x28);
    do {
      lVar16 = *plVar19;
      if (*(int *)(lVar18 + 0x30) != *(int *)(lVar18 + 0x5c)) {
        lVar11 = *(longlong *)(lVar18 + 0x68);
        if (*(longlong *)(lVar18 + 0x68) == 0) {
          lVar11 = lVar18 + 0x60;
        }
        iVar10 = *(int *)(lVar11 + ((longlong)((int)((ulonglong)lVar16 >> 0x20) + (int)lVar16) &
                                   (longlong)*(int *)(lVar18 + 0x70) - 1U) * 4);
        if (iVar10 != -1) {
          lVar11 = *plVar1;
          do {
            puVar15 = (undefined8 *)(lVar11 + (longlong)iVar10 * 0x18);
            if (*(longlong *)(lVar11 + (longlong)iVar10 * 0x18) == lVar16) {
              if (iVar10 != -1) goto LAB_1408414e3;
              break;
            }
            iVar10 = *(int *)(puVar15 + 2);
          } while (iVar10 != -1);
        }
      }
      puVar15 = (undefined8 *)0x0;
LAB_1408414e3:
      puVar17 = puVar15 + 1;
      if (puVar15 == (undefined8 *)0x0) {
        puVar17 = (undefined8 *)0x0;
      }
      iVar10 = (int)uVar14;
      if (puVar17 == (undefined8 *)0x0) {
        FUN_14084eb90(local_f8,&local_100,lVar16);
        uVar13 = iVar10 + 1;
        local_110 = CONCAT44(local_110._4_4_,uVar13);
        if (local_110._4_4_ < (int)uVar13) {
          FUN_140848b80(&local_118,uVar14);
          puVar20 = local_118;
          uVar13 = (uint)local_110;
        }
        puVar20[iVar10] = local_100;
        local_d8 = &local_100;
        local_e0 = plVar19;
        TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
                  (plVar1,local_108,&local_e0,0);
      }
      else {
        uVar13 = iVar10 + 1;
        local_110 = CONCAT44(local_110._4_4_,uVar13);
        if (local_110._4_4_ < (int)uVar13) {
          FUN_140848b80(&local_118,uVar14);
          puVar20 = local_118;
          uVar13 = (uint)local_110;
        }
        puVar20[iVar10] = *puVar17;
      }
      uVar14 = (ulonglong)uVar13;
      plVar19 = plVar19 + 1;
      param_3 = local_e8;
      param_4 = local_f0;
    } while (plVar19 != plVar2);
  }
  if (0 < (int)uVar14) {
    lVar18 = 0;
    do {
      local_100 = *puVar20;
      lVar16 = param_3[8];
      uVar4 = *(undefined8 *)(lVar18 + lVar16);
      uVar5 = ((undefined8 *)(lVar18 + lVar16))[1];
      puVar15 = (undefined8 *)(lVar18 + 0x10 + lVar16);
      uVar6 = *puVar15;
      uVar7 = puVar15[1];
      puVar15 = (undefined8 *)(lVar18 + 0x20 + lVar16);
      uVar8 = *puVar15;
      uVar9 = puVar15[1];
      uVar13 = FUN_1422f2470(param_4[2],&local_100);
      if (uVar13 != 0xffffffff) {
        puVar3 = *(ushort **)param_4[2];
        for (puVar12 = puVar3; puVar12 != puVar3 + *(int *)((undefined8 *)param_4[2] + 1);
            puVar12 = puVar12 + 1) {
          if (*puVar12 == uVar13) {
            iVar10 = (int)((longlong)puVar12 - (longlong)puVar3 >> 1);
            if (iVar10 != -1) {
              puVar15 = (undefined8 *)((longlong)iVar10 * 0x30 + *param_4);
              *puVar15 = uVar4;
              puVar15[1] = uVar5;
              puVar15[2] = uVar6;
              puVar15[3] = uVar7;
              puVar15[4] = uVar8;
              puVar15[5] = uVar9;
            }
            break;
          }
        }
      }
      puVar20 = puVar20 + 1;
      lVar18 = lVar18 + 0x30;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  iVar10 = (int)param_3[7];
  local_118 = (undefined8 *)0x0;
  local_110 = 0;
  if (0 < iVar10) {
    FUN_140848da0(&local_118,iVar10);
    iVar10 = (int)param_3[7];
  }
  lVar18 = local_f8;
  plVar19 = (longlong *)param_3[6];
  plVar2 = plVar19 + iVar10;
  puVar20 = local_118;
  uVar14 = local_110;
  do {
    local_110 = uVar14;
    if (plVar19 == plVar2) {
      iVar10 = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 0xffffffff;
      local_94 = 0;
      local_88 = 0;
      local_80 = 0;
      TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
      ::Reset(&local_c8);
      if ((int)local_c0 - local_94 < (int)param_3[0xb]) {
        TSparseArray<TSetElement<TSharedPtr<FInterfaceContainer,0>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::Reserve(&local_c8);
      }
      plVar2 = local_f0;
      FWeakObjectPtr::Get(local_f0[2] + 0x40);
      if (0 < (int)param_3[7]) {
        lVar16 = 0;
        do {
          lVar11 = param_3[10];
          if (*(char *)(lVar16 + 4 + lVar11) != '\0') {
            local_f0 = puVar20 + iVar10;
            TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
            Emplace<TKeyInitializer<FName_const_&>_>(&local_c8,local_108,&local_f0,0);
            *(undefined4 *)(local_c8 + 8 + (longlong)local_108[0] * 0x18) =
                 *(undefined4 *)(lVar16 + lVar11);
          }
          iVar10 = iVar10 + 1;
          lVar16 = lVar16 + 8;
          param_3 = local_e8;
        } while (iVar10 < (int)local_e8[7]);
      }
      FUN_14084f5e0(lVar18,&local_c8);
      FUN_140840d70(lVar18,&local_c8,plVar2,local_d0);
      local_80 = 0;
      if (local_88 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_c8);
      return;
    }
    lVar16 = *plVar19;
    if (*(int *)(lVar18 + 0x80) != *(int *)(lVar18 + 0xac)) {
      lVar11 = *(longlong *)(lVar18 + 0xb8);
      if (*(longlong *)(lVar18 + 0xb8) == 0) {
        lVar11 = lVar18 + 0xb0;
      }
      iVar10 = *(int *)(lVar11 + ((longlong)((int)((ulonglong)lVar16 >> 0x20) + (int)lVar16) &
                                 (longlong)*(int *)(lVar18 + 0xc0) - 1U) * 4);
      if (iVar10 != -1) {
        do {
          lVar11 = *(longlong *)(lVar18 + 0x78) + (longlong)iVar10 * 0x18;
          if (*(longlong *)(*(longlong *)(lVar18 + 0x78) + (longlong)iVar10 * 0x18) == lVar16) {
            if (iVar10 != -1) goto LAB_140841733;
            break;
          }
          iVar10 = *(int *)(lVar11 + 0x10);
        } while (iVar10 != -1);
      }
    }
    lVar11 = 0;
LAB_140841733:
    puVar15 = (undefined8 *)(lVar11 + 8);
    if (lVar11 == 0) {
      puVar15 = (undefined8 *)0x0;
    }
    if (puVar15 == (undefined8 *)0x0) {
      FUN_14084ebf0(lVar18,&local_100,lVar16);
      uVar14 = local_110;
      lVar16 = (longlong)(int)(uint)local_110;
      iVar10 = (uint)local_110 + 1;
      local_110 = CONCAT44(local_110._4_4_,iVar10);
      if (local_110._4_4_ < iVar10) {
        FUN_140848b80(&local_118,uVar14 & 0xffffffff);
        puVar20 = local_118;
      }
      puVar20[lVar16] = local_100;
      local_d8 = &local_100;
      local_e0 = plVar19;
      TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
                (lVar18 + 0x78,local_108,&local_e0,0);
    }
    else {
      local_110._0_4_ = (uint)uVar14;
      lVar16 = (longlong)(int)(uint)local_110;
      iVar10 = (uint)local_110 + 1;
      local_110._4_4_ = (int)(uVar14 >> 0x20);
      local_110 = CONCAT44(local_110._4_4_,iVar10);
      if (local_110._4_4_ < iVar10) {
        FUN_140848b80(&local_118,uVar14 & 0xffffffff);
        puVar20 = local_118;
      }
      puVar20[lVar16] = *puVar15;
    }
    plVar19 = plVar19 + 1;
    param_3 = local_e8;
    uVar14 = local_110;
  } while( true );
}



// FUNCTION 140841940 FUN_140841940 body=82 status=ok
// SIG undefined FUN_140841940(void)

void FUN_140841940(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\plugins\\animation\\livelink\\source\\livelink\\public\\LiveLinkRetargetAsset.h"
             ,0x23,L"Pure virtual not implemented (%s)",
             L"ULiveLinkRetargetAsset::BuildPoseForSubject");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\plugins\\animation\\livelink\\source\\livelink\\public\\LiveLinkRetargetAsset.h"
             ,0x23,L"Pure virtual not implemented (%s)");
  return;
}



// FUNCTION 1408419a0 FUN_1408419a0 body=975 status=ok
// SIG undefined FUN_1408419a0(void)

void FUN_1408419a0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong **pplVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  int *piVar9;
  longlong *plVar10;
  longlong lVar11;
  int local_res20;
  undefined4 uStackX_24;
  int *local_60;
  int local_58;
  int local_54;
  longlong *local_50;
  int local_48;
  undefined4 local_44;
  
  FUN_140849db0(param_1,param_3);
  iVar3 = (int)param_1[1];
  plVar8 = (longlong *)0x0;
  if (iVar3 == (int)param_1[0xb]) {
    if (0 < iVar3) {
      piVar5 = (int *)param_1[10];
      plVar6 = (longlong *)*param_1;
      plVar4 = plVar8;
      do {
        lVar11 = *plVar6;
        if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
          plVar2 = (longlong *)param_2[8];
          if ((longlong *)param_2[8] == (longlong *)0x0) {
            plVar2 = param_2 + 7;
          }
          iVar7 = *(int *)((longlong)plVar2 +
                          ((longlong)((int)((ulonglong)lVar11 >> 0x20) + (int)lVar11) &
                          (longlong)(int)param_2[9] - 1U) * 4);
          if (iVar7 != -1) {
            do {
              plVar2 = (longlong *)((longlong)iVar7 * 0xd0 + *param_2);
              if (*plVar2 == lVar11) {
                if (iVar7 != -1) goto LAB_140841a67;
                break;
              }
              iVar7 = (int)plVar2[0x19];
            } while (iVar7 != -1);
          }
        }
        plVar2 = plVar8;
LAB_140841a67:
        if (((piVar5[3] != *(int *)((longlong)plVar2 + 0x34) || piVar5[2] != (int)plVar2[6]) ||
            piVar5[1] != *(int *)((longlong)plVar2 + 0x2c)) || *piVar5 != (int)plVar2[5])
        goto LAB_140841aad;
        plVar4 = (longlong *)((longlong)plVar4 + 1);
        plVar6 = plVar6 + 1;
        piVar5 = piVar5 + 4;
        if ((longlong)iVar3 <= (longlong)plVar4) {
          return;
        }
      } while( true );
    }
  }
  else {
LAB_140841aad:
    FName::FName(&local_res20,L"Root",1);
    local_50 = (longlong *)0x0;
    local_48 = 1;
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_50,1);
    plVar2 = local_50;
    local_60 = (int *)0x0;
    local_58 = 1;
    *local_50 = CONCAT44(uStackX_24,local_res20);
    local_res20 = -1;
    TArray<int,FDefaultAllocator>::ResizeForCopy(&local_60,1);
    *local_60 = local_res20;
    plVar4 = (longlong *)*param_1;
    plVar6 = plVar4 + (int)param_1[1];
    piVar5 = local_60;
    iVar3 = local_58;
    for (; plVar4 != plVar6; plVar4 = plVar4 + 1) {
      lVar11 = *plVar4;
      if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
        plVar2 = (longlong *)param_2[8];
        if ((longlong *)param_2[8] == (longlong *)0x0) {
          plVar2 = param_2 + 7;
        }
        iVar7 = *(int *)((longlong)plVar2 +
                        ((longlong)((int)((ulonglong)lVar11 >> 0x20) + (int)lVar11) &
                        (longlong)(int)param_2[9] - 1U) * 4);
        if (iVar7 != -1) {
          do {
            plVar2 = (longlong *)((longlong)iVar7 * 0xd0 + *param_2);
            if (*plVar2 == lVar11) {
              if (iVar7 != -1) goto LAB_140841bb7;
              break;
            }
            iVar7 = (int)plVar2[0x19];
          } while (iVar7 != -1);
        }
      }
      plVar2 = plVar8;
LAB_140841bb7:
      FUN_140840140(&local_50,plVar2 + 1);
      iVar7 = (int)plVar2[4];
      local_res20 = iVar3;
      if (local_54 < iVar3 + iVar7) {
        TArray<float,FDefaultAllocator>::ResizeTo(&local_60);
        iVar7 = (int)plVar2[4];
        piVar5 = local_60;
        iVar3 = local_58;
      }
      piVar9 = (int *)plVar2[3];
      plVar2 = (longlong *)((longlong)iVar7 & 0x3fffffffffffffff);
      if (piVar9 + iVar7 < piVar9) {
        plVar2 = plVar8;
      }
      plVar10 = plVar8;
      if (plVar2 != (longlong *)0x0) {
        do {
          local_58 = iVar3 + 1;
          if (*piVar9 == -1) {
            if (local_54 < local_58) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_60,iVar3);
              piVar5 = local_60;
            }
            piVar5[iVar3] = 0;
          }
          else {
            iVar7 = *piVar9 + local_res20;
            if (local_54 < local_58) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_60,iVar3);
              piVar5 = local_60;
            }
            piVar5[iVar3] = iVar7;
          }
          piVar9 = piVar9 + 1;
          plVar10 = (longlong *)((longlong)plVar10 + 1);
          iVar3 = local_58;
        } while (plVar10 != plVar2);
      }
      plVar2 = local_50;
    }
    pplVar1 = (longlong **)(param_1 + 6);
    if (pplVar1 != &local_50) {
      lVar11 = (longlong)local_48;
      *(int *)(param_1 + 7) = local_48;
      if ((local_48 == 0) && (*(int *)((longlong)param_1 + 0x3c) == 0)) {
        *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(pplVar1,local_48);
        _guard_xfg_dispatch_icall_nop(*pplVar1,plVar2,lVar11 << 3);
      }
    }
    local_50 = (longlong *)0x0;
    local_48 = iVar3;
    if (iVar3 == 0) {
      local_44 = 0;
    }
    else {
      TArray<int,FDefaultAllocator>::ResizeForCopy(&local_50,iVar3,0);
      plVar8 = local_50;
      _guard_xfg_dispatch_icall_nop(local_50,piVar5,(longlong)iVar3 << 2);
    }
    TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 8,&local_50);
    if (plVar8 != (longlong *)0x0) {
      FMemory::Free(plVar8);
    }
    if (piVar5 != (int *)0x0) {
      FMemory::Free(piVar5);
    }
    if (plVar2 != (longlong *)0x0) {
      FMemory::Free(plVar2);
    }
  }
  return;
}



// FUNCTION 140841d70 FUN_140841d70 body=2494 status=ok
// SIG undefined FUN_140841d70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140841d70(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  int *piVar3;
  longlong *plVar4;
  uint uVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined2 *puVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  longlong *plVar21;
  int *piVar22;
  uint *puVar23;
  undefined1 uVar24;
  undefined8 *puVar25;
  longlong *plVar26;
  int *piVar27;
  undefined4 *puVar28;
  longlong *plVar29;
  undefined1 auStack_2b8 [32];
  undefined1 local_298 [8];
  undefined4 *local_290;
  undefined8 local_288;
  int *local_280;
  int local_278;
  int local_274;
  int local_270 [2];
  longlong local_268;
  int *local_260;
  int local_258;
  int local_254;
  int local_250 [2];
  longlong *local_248;
  longlong *local_240;
  longlong local_238;
  int local_230;
  longlong *local_228;
  int local_220;
  undefined4 local_21c;
  int local_218;
  uint uStack_214;
  uint *puStack_210;
  undefined4 local_208;
  int iStack_204;
  int iStack_200;
  undefined4 uStack_1fc;
  undefined8 *local_1f8;
  void *local_1f0;
  int local_1e8;
  undefined4 local_1e4;
  undefined8 *local_1e0;
  undefined8 local_1d8;
  longlong *local_1d0;
  undefined8 uStack_1c8;
  uint *local_1c0;
  uint uStack_1b8;
  int iStack_1b4;
  int local_1b0;
  undefined4 uStack_1ac;
  int local_1a8;
  longlong local_1a0;
  undefined8 *local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  longlong local_180;
  undefined4 *local_178;
  undefined1 local_170 [8];
  longlong *local_168;
  longlong *local_158;
  longlong *plStack_150;
  uint *puStack_148;
  undefined4 uStack_140;
  int iStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  int local_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108 [2];
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [24];
  undefined1 local_c8 [32];
  undefined1 local_a8 [16];
  longlong local_98 [3];
  undefined8 local_80;
  uint local_78 [4];
  uint *local_68;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  bVar10 = false;
  bVar9 = false;
  local_270[0] = 0;
  local_268 = param_1;
  FUN_140845600(*(undefined8 *)(param_1 + 0x18),&local_1e0);
  local_1a0 = param_1 + 0x28;
  local_98[2] = 0;
  local_80 = 0;
  local_68 = (uint *)0x0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  FUN_14083ad80(local_98 + 2,&local_258,&local_1a0,0);
  lVar2 = local_98[2] + (longlong)local_258 * 0x28;
  iVar13 = (int)local_1d8;
  puVar16 = local_1e0 + (longlong)iVar13 * 3;
  local_1f8 = local_1e0;
  for (puVar25 = local_1e0; puVar25 != puVar16; puVar25 = puVar25 + 3) {
    TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
    ::FindId(local_98 + 2,&local_254,puVar25 + 1);
    if ((local_254 == -1) || (lVar19 = local_98[2] + (longlong)local_254 * 0x28, lVar19 == 0)) {
      local_198 = puVar25 + 1;
      FUN_14083ad80(local_98 + 2,local_250,&local_198,0);
      lVar19 = local_98[2] + (longlong)local_250[0] * 0x28;
    }
    iVar12 = *(int *)(lVar19 + 0x18);
    *(int *)(lVar19 + 0x18) = iVar12 + 1;
    if (*(int *)(lVar19 + 0x1c) < iVar12 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar19 + 0x10,iVar12);
    }
    *(undefined8 *)(*(longlong *)(lVar19 + 0x10) + (longlong)iVar12 * 8) = *puVar25;
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(lVar2 + 0x10,puVar25);
  }
  local_260 = (int *)0x0;
  local_280 = (int *)0x0;
  local_274 = 0;
  local_278 = 0;
  if ((int)local_80 != local_54) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_280);
    local_260 = local_280;
  }
  puStack_210 = local_78;
  local_218 = 0;
  uStack_214 = 1;
  iStack_204 = 0;
  iStack_200 = 0;
  if ((int)local_60 != 0) {
    puVar23 = local_78;
    if (local_68 != (uint *)0x0) {
      puVar23 = local_68;
    }
    uVar5 = *puVar23;
    while (uVar5 == 0) {
      iStack_200 = iStack_200 + 0x20;
      if ((int)((int)local_60 + -1 + ((int)local_60 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_218) {
        iStack_204 = (int)local_60;
        local_218 = local_218 + 1;
        goto LAB_14084200a;
      }
      uVar5 = puVar23[(longlong)local_218 + 1];
      local_218 = local_218 + 1;
    }
    uStack_214 = -uVar5 & uVar5;
    local_1a8 = 0x1f;
    if (uStack_214 != 0) {
      for (; uStack_214 >> local_1a8 == 0; local_1a8 = local_1a8 + -1) {
      }
    }
    if (uStack_214 == 0) {
      iVar12 = 0x20;
    }
    else {
      iVar12 = 0x1f - local_1a8;
    }
    iStack_204 = (iStack_200 - iVar12) + 0x1f;
    if ((int)local_60 < iStack_204) {
      iStack_204 = (int)local_60;
    }
  }
LAB_14084200a:
  local_208 = 0xffffffff;
  local_1d0 = local_98 + 2;
  uStack_1c8 = (longlong *)CONCAT44(uStack_214,local_218);
  uStack_140 = 0xffffffff;
  iStack_13c = iStack_204;
  iStack_138 = iStack_200;
  uStack_134 = uStack_1fc;
  uStack_1b8 = 0xffffffff;
  iStack_1b4 = iStack_204;
  local_1b0 = iStack_200;
  uStack_1ac = uStack_1fc;
  piVar22 = local_260;
  iVar12 = local_278;
  local_280 = local_260;
  local_1c0 = puStack_210;
  local_158 = local_1d0;
  plStack_150 = uStack_1c8;
  puStack_148 = puStack_210;
  iVar18 = local_278;
  if (iStack_204 < (int)local_60) {
    do {
      iVar7 = iStack_1b4;
      local_278 = iVar18 + 1;
      if (local_274 < local_278) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_280,iVar18);
        piVar22 = local_280;
      }
      iVar12 = local_278;
      piVar27 = piVar22 + (longlong)iVar18 * 4;
      if (piVar27 != (int *)0x0) {
        piVar3 = (int *)(*local_1d0 + (longlong)iVar7 * 0x28);
        iVar18 = piVar3[1];
        iVar7 = piVar3[2];
        iVar8 = piVar3[3];
        *piVar27 = *piVar3;
        piVar27[1] = iVar18;
        piVar27[2] = iVar7;
        piVar27[3] = iVar8;
      }
      uStack_1b8 = uStack_1b8 & ~uStack_1c8._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1c8);
      iVar18 = iVar12;
    } while (iStack_1b4 < (int)local_1c0[6]);
  }
  local_260 = piVar22;
  piVar22 = local_260;
  local_290 = (undefined4 *)0x0;
  local_288 = 0;
  if (0 < iVar12) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (&local_290,iVar12);
  }
  lVar2 = local_268;
  piVar27 = piVar22 + (longlong)iVar12 * 4;
  if (piVar22 != piVar27) {
    do {
      if (((piVar22[3] == *(int *)(lVar2 + 0x34) && piVar22[1] == *(int *)(lVar2 + 0x2c)) &&
          *piVar22 == *(int *)(lVar2 + 0x28)) && *(int *)(lVar2 + 0x30) == piVar22[2]) {
        bVar10 = true;
        puVar14 = (undefined1 *)
                  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (&local_158,&DAT_14410afe0,L"LiveLinkModule",L"LiveLinkAnySource");
      }
      else {
        local_128 = *piVar22;
        iStack_124 = piVar22[1];
        iStack_120 = piVar22[2];
        iStack_11c = piVar22[3];
        bVar9 = true;
        FUN_140844f60(*(undefined8 *)(lVar2 + 0x18),&local_248,&local_128);
        if (local_248 == (longlong *)0x0) {
          FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_170,L"Invalid Source Type",L"TempLocTextLiveLink",L"InvalidSourceType");
        }
        else {
          (**(code **)(*local_248 + 0x30))(local_248,local_170);
        }
        plVar26 = local_240;
        if (local_240 != (longlong *)0x0) {
          LOCK();
          plVar29 = local_240 + 1;
          lVar19 = *plVar29;
          *(int *)plVar29 = (int)*plVar29 + -1;
          UNLOCK();
          if ((int)lVar19 == 1) {
            (**(code **)*local_240)(local_240);
            LOCK();
            piVar3 = (int *)((longlong)plVar26 + 0xc);
            iVar13 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar13 == 1) {
              (**(code **)(*local_240 + 8))(local_240,1);
            }
          }
        }
        puVar14 = local_170;
      }
      FText::FText(local_f8,puVar14);
      plVar26 = local_168;
      if ((bVar9) && (bVar9 = false, local_168 != (longlong *)0x0)) {
        LOCK();
        plVar29 = local_168 + 1;
        lVar19 = *plVar29;
        *(int *)plVar29 = (int)*plVar29 + -1;
        UNLOCK();
        if ((int)lVar19 == 1) {
          (**(code **)*local_168)(local_168);
          LOCK();
          piVar3 = (int *)((longlong)plVar26 + 0xc);
          iVar13 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*plVar26 + 8))(plVar26,1);
          }
        }
      }
      plVar26 = plStack_150;
      if ((bVar10) && (bVar10 = false, plStack_150 != (longlong *)0x0)) {
        LOCK();
        plVar29 = plStack_150 + 1;
        lVar19 = *plVar29;
        *(int *)plVar29 = (int)*plVar29 + -1;
        UNLOCK();
        if ((int)lVar19 == 1) {
          (**(code **)*plStack_150)(plStack_150);
          LOCK();
          piVar3 = (int *)((longlong)plVar26 + 0xc);
          iVar13 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*plVar26 + 8))(plVar26,1);
          }
        }
      }
      uVar11 = local_288;
      lVar19 = (longlong)(int)local_288;
      iVar13 = (int)local_288 + 1;
      local_288 = CONCAT44(local_288._4_4_,iVar13);
      if (local_288._4_4_ < iVar13) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_290,uVar11 & 0xffffffff);
      }
      iVar13 = piVar22[1];
      iVar12 = piVar22[2];
      iVar18 = piVar22[3];
      lVar19 = lVar19 * 5 + 2;
      piVar3 = local_290 + lVar19 * 2 + -4;
      *piVar3 = *piVar22;
      piVar3[1] = iVar13;
      piVar3[2] = iVar12;
      piVar3[3] = iVar18;
      FText::FText(local_290 + lVar19 * 2,local_f8);
      plVar26 = local_f0;
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        plVar29 = local_f0 + 1;
        lVar19 = *plVar29;
        *(int *)plVar29 = (int)*plVar29 + -1;
        UNLOCK();
        if ((int)lVar19 == 1) {
          (**(code **)*local_f0)(local_f0);
          LOCK();
          piVar3 = (int *)((longlong)plVar26 + 0xc);
          iVar13 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*plVar26 + 8))(plVar26,1);
          }
        }
      }
      piVar22 = piVar22 + 4;
    } while (piVar22 != piVar27);
    iVar13 = (int)local_1d8;
    local_1f8 = local_1e0;
    local_260 = local_280;
  }
  local_118 = *(undefined4 *)(lVar2 + 0x28);
  uStack_114 = *(undefined4 *)(lVar2 + 0x2c);
  uStack_110 = *(undefined4 *)(lVar2 + 0x30);
  uStack_10c = *(undefined4 *)(lVar2 + 0x34);
  lVar19 = (longlong)(int)local_288;
  AlgoImpl::
  IntroSortInternal<TTuple<FGuid,FText>,FIdentityFunctor,TDereferenceWrapper<TTuple<FGuid,FText>,<lambda_3ba24c872c7654b4b6f80e3cd0610351>_>_>
            (local_290,lVar19,local_298[0],&local_118);
  plVar26 = (longlong *)(lVar2 + 8);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  if (0x7fffffff < *(uint *)(lVar2 + 0x14)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (plVar26,0);
  }
  if (*(int *)(lVar2 + 0x14) < iVar13) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (plVar26,iVar13);
  }
  local_178 = local_290 + lVar19 * 10;
  puVar28 = local_290;
  uVar24 = local_298[0];
  if (local_290 != local_178) {
    do {
      TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
      ::FindId(local_98 + 2,local_270,puVar28);
      if (local_270[0] == -1) {
        lVar19 = 0;
      }
      else {
        lVar19 = local_98[2] + (longlong)local_270[0] * 0x28;
      }
      local_220 = *(int *)(lVar19 + 0x18);
      lVar20 = (longlong)local_220;
      plVar29 = (longlong *)0x0;
      pvVar6 = *(void **)(lVar19 + 0x10);
      local_228 = (longlong *)0x0;
      if (local_220 == 0) {
        local_21c = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                  (&local_228,local_220,0);
        plVar29 = local_228;
        _guard_xfg_dispatch_icall_nop(local_228,pvVar6,lVar20 << 3);
      }
      lVar19 = (longlong)local_220;
      AlgoImpl::IntroSortInternal<FName,FIdentityFunctor,TDereferenceWrapper<FName,TLess<FName>_>_>
                (plVar29,lVar19,uVar24,local_298);
      plVar4 = plVar29 + lVar19;
      plVar21 = plVar29;
      for (; plVar29 != plVar4; plVar29 = plVar29 + 1) {
        local_268 = *plVar29;
        uVar15 = FName::ToString(&local_268,local_e0);
        FStringFormatArg::FStringFormatArg(local_c8,uVar15);
        puVar16 = (undefined8 *)FText::ToString(puVar28 + 4);
        local_1f0 = (void *)0x0;
        local_1e8 = *(int *)(puVar16 + 1);
        lVar19 = (longlong)local_1e8;
        pvVar6 = (void *)*puVar16;
        if (local_1e8 == 0) {
          local_1e4 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1f0,local_1e8,0);
          _guard_xfg_dispatch_icall_nop(local_1f0,pvVar6,lVar19 * 2);
        }
        FStringFormatArg::FStringFormatArg(local_a8,&local_1f0);
        local_238 = 0;
        local_230 = 2;
        TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(&local_238,2);
        puVar14 = local_c8;
        iVar13 = 2;
        lVar19 = local_238;
        do {
          FStringFormatArg::FStringFormatArg(lVar19,puVar14);
          lVar19 = lVar19 + 0x20;
          puVar14 = puVar14 + 0x20;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
        puVar16 = (undefined8 *)FString::Format(local_108,L"{0} ({1})",&local_238);
        if (*(int *)(puVar16 + 1) == 0) {
          puVar17 = &DAT_143f3eda8;
        }
        else {
          puVar17 = (undefined2 *)*puVar16;
        }
        FName::FName(&local_180,puVar17);
        if (local_108[0] != 0) {
          FMemory::Free();
        }
        if (local_230 != 0) {
          plVar21 = (longlong *)(local_238 + 0x10);
          iVar13 = local_230;
          do {
            if (*plVar21 != 0) {
              FMemory::Free();
            }
            plVar21 = plVar21 + 4;
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
        }
        if (local_238 != 0) {
          FMemory::Free();
        }
        lVar19 = 2;
        puVar23 = local_78;
        do {
          puVar1 = puVar23 + -8;
          puVar23 = puVar23 + -8;
          lVar19 = lVar19 + -1;
          if (*(longlong *)puVar1 != 0) {
            FMemory::Free();
          }
          lVar20 = local_268;
        } while (lVar19 != 0);
        iVar13 = *(int *)(lVar2 + 0x10);
        local_190 = *puVar28;
        uStack_18c = puVar28[1];
        uStack_188 = puVar28[2];
        uStack_184 = puVar28[3];
        *(int *)(lVar2 + 0x10) = iVar13 + 1;
        if (*(int *)(lVar2 + 0x14) < iVar13 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(plVar26,iVar13);
        }
        plVar21 = (longlong *)((longlong)iVar13 * 0x20 + *plVar26);
        *plVar21 = lVar20;
        *(undefined4 *)(plVar21 + 1) = local_190;
        *(undefined4 *)((longlong)plVar21 + 0xc) = uStack_18c;
        *(undefined4 *)(plVar21 + 2) = uStack_188;
        *(undefined4 *)((longlong)plVar21 + 0x14) = uStack_184;
        plVar21[3] = local_180;
        plVar21 = local_228;
        uVar24 = local_298[0];
      }
      if (plVar21 != (longlong *)0x0) {
        FMemory::Free(plVar21);
      }
      puVar28 = puVar28 + 10;
    } while (puVar28 != local_178);
  }
  piVar22 = local_260;
  puVar16 = local_1f8;
  if ((int)local_288 != 0) {
    plVar26 = (longlong *)(local_290 + 6);
    iVar13 = (int)local_288;
    do {
      plVar29 = (longlong *)*plVar26;
      if (plVar29 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar29 + 1;
        lVar2 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*plVar29)(plVar29);
          LOCK();
          piVar22 = (int *)((longlong)plVar29 + 0xc);
          iVar12 = *piVar22;
          *piVar22 = *piVar22 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar29 + 8))(plVar29,1);
          }
        }
      }
      plVar26 = plVar26 + 5;
      iVar13 = iVar13 + -1;
      piVar22 = local_280;
      puVar16 = local_1e0;
    } while (iVar13 != 0);
  }
  if (local_290 != (undefined4 *)0x0) {
    FMemory::Free(local_290);
  }
  if (piVar22 != (int *)0x0) {
    FMemory::Free(piVar22);
  }
  local_40 = 0;
  if (local_48 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_98 + 2);
  if (puVar16 != (undefined8 *)0x0) {
    FMemory::Free(puVar16);
  }
  return;
}



// FUNCTION 140842730 FUN_140842730 body=2671 status=ok
// SIG undefined FUN_140842730(void)

void FUN_140842730(longlong param_1)

{
  longlong *plVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar2;
  int *piVar3;
  bool bVar4;
  double dVar5;
  int *piVar6;
  int iVar7;
  BOOL BVar8;
  int iVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  PRTL_CRITICAL_SECTION_DEBUG p_Var17;
  ulonglong uVar18;
  int *piVar19;
  longlong *plVar20;
  longlong *plVar21;
  uint uVar22;
  uint *puVar23;
  uint *puVar24;
  uint uVar25;
  ulonglong uVar26;
  PRTL_CRITICAL_SECTION_DEBUG *pp_Var27;
  LARGE_INTEGER local_res10;
  int local_res18;
  PRTL_CRITICAL_SECTION_DEBUG local_res20;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  uint uStack_e0;
  int iStack_dc;
  uint local_d8;
  undefined4 uStack_d4;
  longlong *local_d0;
  undefined8 local_c8;
  PRTL_CRITICAL_SECTION_DEBUG *local_c0;
  undefined8 uStack_b8;
  uint *puStack_b0;
  uint uStack_a8;
  uint uStack_a4;
  undefined8 uStack_a0;
  PRTL_CRITICAL_SECTION_DEBUG *local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  uint uStack_80;
  uint uStack_7c;
  undefined8 uStack_78;
  LPCRITICAL_SECTION local_68;
  ulonglong local_60;
  
  plVar1 = (longlong *)(param_1 + 0xc0);
  local_res18 = *(int *)(param_1 + 200) - *(int *)(param_1 + 0xf4);
  uVar16 = 0;
  local_d0 = (longlong *)0x0;
  local_c8 = 0;
  uVar26 = uVar16;
  if (local_res18 != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&local_d0,local_res18);
    uVar26 = local_c8 & 0xffffffff;
  }
  iVar9 = *(int *)(param_1 + 0xe8);
  puStack_b0 = (uint *)(param_1 + 0xd0);
  local_f8._0_4_ = 0;
  local_f8._4_4_ = 1;
  local_e8._4_4_ = 0;
  uStack_e0 = 0;
  if (iVar9 != 0) {
    puVar23 = *(uint **)(param_1 + 0xe0);
    if (*(uint **)(param_1 + 0xe0) == (uint *)0x0) {
      puVar23 = puStack_b0;
    }
    uVar15 = *puVar23;
    uVar11 = uVar16;
    uVar18 = uVar16;
    while (uVar15 == 0) {
      iVar7 = (int)uVar11;
      uStack_e0 = (int)uVar18 + 0x20;
      uVar18 = (ulonglong)uStack_e0;
      local_f8._0_4_ = iVar7 + 1;
      uVar11 = (ulonglong)(uint)local_f8;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_140842842;
      uVar15 = puVar23[(longlong)iVar7 + 1];
    }
    local_f8._4_4_ = -uVar15 & uVar15;
    iVar7 = 0x1f;
    if (local_f8._4_4_ != 0) {
      for (; local_f8._4_4_ >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (local_f8._4_4_ == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    local_e8._4_4_ = (uStack_e0 - iVar7) + 0x1f;
    if (iVar9 < (int)local_e8._4_4_) {
LAB_140842842:
      local_e8._4_4_ = iVar9;
    }
  }
  _uStack_a8 = CONCAT44(local_e8._4_4_,0xffffffff);
  uStack_a0 = CONCAT44(iStack_dc,uStack_e0);
  uStack_b8._0_4_ = (uint)local_f8;
  uStack_b8._4_4_ = local_f8._4_4_;
  uStack_f0._0_4_ = (uint)local_f8;
  uStack_f0._4_4_ = local_f8._4_4_;
  local_d8 = uStack_e0;
  uStack_d4 = iStack_dc;
  uStack_e0 = 0xffffffff;
  iStack_dc = local_e8._4_4_;
  bVar4 = (int)local_e8._4_4_ < iVar9;
  plVar13 = local_d0;
  local_c0 = (PRTL_CRITICAL_SECTION_DEBUG *)plVar1;
  local_e8 = puStack_b0;
  if (bVar4) {
    do {
      iVar9 = iStack_dc;
      iVar7 = (int)uVar26;
      uVar15 = iVar7 + 1;
      local_c8 = CONCAT44(local_c8._4_4_,uVar15);
      if (local_c8._4_4_ < (int)uVar15) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_d0,uVar26);
        plVar13 = local_d0;
        uVar15 = (uint)local_c8;
      }
      uVar26 = (ulonglong)uVar15;
      if (plVar13 + iVar7 != (longlong *)0x0) {
        plVar13[iVar7] = *(longlong *)((longlong)iVar9 * 0xd0 + *plVar1);
      }
      uStack_e0 = uStack_e0 & ~uStack_f0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_f0);
    } while (iStack_dc < (int)local_e8[6]);
  }
  QueryPerformanceCounter(&local_res10);
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x168);
  dVar5 = (double)local_res10.QuadPart * DAT_1468b02f8;
  local_68 = lpCriticalSection;
  BVar8 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar8 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  local_res10.QuadPart = param_1 + 0x70;
  uStack_f0 = (uint *)(param_1 + 0x80);
  iVar9 = *(int *)(param_1 + 0x98);
  local_f8 = 0x100000000;
  local_e8._4_4_ = 0;
  uStack_e0 = 0;
  if (iVar9 != 0) {
    puVar23 = *(uint **)(param_1 + 0x90);
    if (*(uint **)(param_1 + 0x90) == (uint *)0x0) {
      puVar23 = uStack_f0;
    }
    uVar15 = *puVar23;
    uVar11 = uVar16;
    while (uVar15 == 0) {
      iVar7 = (int)uVar16;
      uStack_e0 = (int)uVar11 + 0x20;
      uVar11 = (ulonglong)uStack_e0;
      uVar16 = (ulonglong)(iVar7 + 1U);
      local_f8._4_4_ = (uint)((ulonglong)local_f8 >> 0x20);
      local_f8 = CONCAT44(local_f8._4_4_,iVar7 + 1U);
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_140842a01;
      uVar15 = puVar23[(longlong)iVar7 + 1];
    }
    uVar15 = -uVar15 & uVar15;
    iVar7 = 0x1f;
    if (uVar15 != 0) {
      for (; uVar15 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    local_f8 = CONCAT44(uVar15,(uint)local_f8);
    if (uVar15 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    local_e8._4_4_ = (uStack_e0 - iVar7) + 0x1f;
    if (iVar9 < (int)local_e8._4_4_) {
LAB_140842a01:
      local_e8._4_4_ = iVar9;
    }
  }
  local_e8._0_4_ = 0xffffffff;
  uVar15 = *(uint *)(param_1 + 0x98);
  local_c0 = (PRTL_CRITICAL_SECTION_DEBUG *)(param_1 + 0x70);
  uVar2 = *(uint *)(param_1 + 0x98);
  uStack_a8 = 0xffffffff;
  uStack_a4 = local_e8._4_4_;
  uStack_a0 = CONCAT44(iStack_dc,uStack_e0);
  uStack_90 = local_f8;
  uVar25 = -1 << ((byte)uVar2 & 0x1f);
  uVar22 = uVar2 & 0xffffffe0;
  uStack_88 = (uint *)CONCAT44(uVar2,uVar25);
  uStack_b8 = local_f8;
  if (uVar2 != uVar15) {
    puVar23 = *(uint **)(param_1 + 0x90);
    if (*(uint **)(param_1 + 0x90) == (uint *)0x0) {
      puVar23 = uStack_f0;
    }
    uVar25 = puVar23[(int)uVar2 >> 5] & uVar25;
    iVar9 = (int)uVar2 >> 5;
    while (uVar25 == 0) {
      uVar22 = uVar22 + 0x20;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
      goto LAB_140842ae5;
      uVar25 = puVar23[(longlong)iVar9 + 1];
      uStack_88 = (uint *)0xffffffff;
      iVar9 = iVar9 + 1;
    }
    uVar25 = -uVar25 & uVar25;
    iVar9 = 0x1f;
    if (uVar25 != 0) {
      for (; uVar25 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar25 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    iVar9 = (uVar22 - iVar9) + 0x1f;
    uStack_88 = (uint *)CONCAT44(iVar9,(undefined4)uStack_88);
    if ((int)uVar15 < iVar9) {
LAB_140842ae5:
      uStack_88 = (uint *)CONCAT44(uVar15,(undefined4)uStack_88);
    }
  }
  local_60 = (ulonglong)uStack_88 >> 0x20;
  puStack_b0 = uStack_f0;
  local_98 = local_c0;
  uStack_78 = uStack_a0;
  uStack_80 = uStack_a8;
  uStack_7c = uStack_a4;
  while( true ) {
    if (((uStack_a4 == (int)local_60) && (puStack_b0 == uStack_f0)) &&
       (local_c0 == (PRTL_CRITICAL_SECTION_DEBUG *)(param_1 + 0x70))) break;
    p_Var17 = *local_c0 + (longlong)(int)uStack_a4 * 3;
    iVar9 = (int)uVar26;
    local_res20 = *(PRTL_CRITICAL_SECTION_DEBUG *)p_Var17;
    for (plVar20 = plVar13; plVar20 != plVar13 + iVar9; plVar20 = plVar20 + 1) {
      if ((PRTL_CRITICAL_SECTION_DEBUG)*plVar20 == local_res20) {
        iVar7 = (int)((longlong)plVar20 - (longlong)plVar13 >> 3);
        if (iVar7 != -1) {
          iVar12 = (iVar9 - iVar7) + -1;
          if (0 < iVar12) {
            iVar12 = 1;
          }
          if (iVar12 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (plVar13 + iVar7,plVar13 + (iVar9 - iVar12),(longlong)iVar12 << 3);
          }
          uVar26 = (ulonglong)(iVar9 - 1);
        }
        break;
      }
    }
    piVar3 = *(int **)(param_1 + 0x130);
    plVar13 = (longlong *)((longlong)&p_Var17[1].CriticalSection + 4);
    local_98 = (PRTL_CRITICAL_SECTION_DEBUG *)*plVar13;
    piVar6 = (int *)((longlong)&p_Var17[1].ProcessLocksList.Flink + 4);
    uStack_90 = *(undefined8 *)piVar6;
    for (piVar19 = piVar3; piVar19 != piVar3 + (longlong)*(int *)(param_1 + 0x138) * 4;
        piVar19 = piVar19 + 4) {
      if (((piVar19[1] == *(int *)&p_Var17[1].ProcessLocksList.Flink && piVar19[2] == *piVar6) &&
          piVar19[3] == *(int *)&p_Var17[1].ProcessLocksList.Blink) && *piVar19 == *(int *)plVar13)
      {
        iVar9 = (int)((longlong)piVar19 - (longlong)piVar3 >> 4);
        if ((iVar9 != -1) &&
           (puVar10 = (undefined8 *)
                      (*(longlong *)(*(longlong *)(param_1 + 0x140) + (longlong)iVar9 * 8) + 0x28),
           puVar10 != (undefined8 *)0x0)) {
          *(undefined8 *)((longlong)&p_Var17[1].ProcessLocksList.Blink + 4) = *puVar10;
        }
        break;
      }
    }
    if (0 < (int)p_Var17->EntryCount) {
      if (*(int *)(param_1 + 200) != *(int *)(param_1 + 0xf4)) {
        lVar14 = *(longlong *)(param_1 + 0x100);
        if (*(longlong *)(param_1 + 0x100) == 0) {
          lVar14 = param_1 + 0xf8;
        }
        iVar9 = *(int *)(lVar14 + ((longlong)
                                   ((int)((ulonglong)local_res20 >> 0x20) + (int)local_res20) &
                                  (longlong)*(int *)(param_1 + 0x108) - 1U) * 4);
        if (iVar9 != -1) {
          do {
            plVar13 = (longlong *)((longlong)iVar9 * 0xd0 + *plVar1);
            if ((PRTL_CRITICAL_SECTION_DEBUG)*plVar13 == local_res20) {
              if (iVar9 != -1) goto LAB_140842cb7;
              break;
            }
            iVar9 = (int)plVar13[0x19];
          } while (iVar9 != -1);
        }
      }
      plVar13 = (longlong *)0x0;
LAB_140842cb7:
      plVar20 = plVar13 + 1;
      if (plVar13 == (longlong *)0x0) {
        plVar20 = (longlong *)0x0;
      }
      if (plVar20 == (longlong *)0x0) {
        iVar9 = *(int *)(param_1 + 0x118);
        *(int *)(param_1 + 0x118) = iVar9 + 1;
        if (*(int *)(param_1 + 0x11c) < iVar9 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x110,iVar9);
        }
        *(PRTL_CRITICAL_SECTION_DEBUG *)(*(longlong *)(param_1 + 0x110) + (longlong)iVar9 * 8) =
             local_res20;
        local_98 = &local_res20;
        FUN_14083b1d0(plVar1,&local_res10,&local_98,0);
        plVar20 = (longlong *)(*plVar1 + (longlong)(int)local_res10.s.LowPart * 0xd0 + 8);
      }
      FUN_140840fe0(&p_Var17->CriticalSection,SUB84(dVar5 + 16777216.0,0),plVar20);
    }
    uStack_a8 = uStack_a8 & ~uStack_b8._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_b8);
    plVar13 = local_d0;
  }
  LeaveCriticalSection(local_68);
  pp_Var27 = (PRTL_CRITICAL_SECTION_DEBUG *)(param_1 + 0x20);
  uVar15 = *(uint *)(param_1 + 0x48);
  puVar23 = (uint *)(param_1 + 0x30);
  local_f8._0_4_ = 0;
  local_f8._4_4_ = 1;
  local_e8._4_4_ = 0;
  uStack_e0 = 0;
  if (uVar15 != 0) {
    puVar24 = *(uint **)(param_1 + 0x40);
    if (*(uint **)(param_1 + 0x40) == (uint *)0x0) {
      puVar24 = puVar23;
    }
    uVar2 = *puVar24;
    uStack_e0 = 0;
    local_f8._0_4_ = 0;
    while (uVar2 == 0) {
      lVar14 = (longlong)(int)(uint)local_f8;
      uStack_e0 = uStack_e0 + 0x20;
      iVar9 = (uint)local_f8 + 1;
      bVar4 = (int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)(uint)local_f8;
      local_f8._0_4_ = iVar9;
      if (bVar4) goto LAB_140842e25;
      uVar2 = puVar24[lVar14 + 1];
    }
    local_f8._4_4_ = -uVar2 & uVar2;
    iVar9 = 0x1f;
    if (local_f8._4_4_ != 0) {
      for (; local_f8._4_4_ >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (local_f8._4_4_ == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    local_e8._4_4_ = (uStack_e0 - iVar9) + 0x1f;
    if ((int)uVar15 < (int)local_e8._4_4_) {
LAB_140842e25:
      local_e8._4_4_ = uVar15;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x48);
  uStack_a8 = 0xffffffff;
  uStack_a4 = local_e8._4_4_;
  uStack_a0 = CONCAT44(iStack_dc,uStack_e0);
  local_e8._0_4_ = -1 << ((byte)uVar2 & 0x1f);
  uStack_90._0_4_ = (uint)local_f8;
  uStack_90._4_4_ = local_f8._4_4_;
  uVar25 = uVar2 & 0xffffffe0;
  uStack_b8 = CONCAT44(local_f8._4_4_,(uint)local_f8);
  uStack_f0 = puVar23;
  local_e8._4_4_ = uVar2;
  local_c0 = pp_Var27;
  puStack_b0 = puVar23;
  local_98 = pp_Var27;
  uStack_88 = puVar23;
  uStack_78 = uStack_a0;
  uStack_80 = uStack_a8;
  uStack_7c = uStack_a4;
  if (uVar2 != uVar15) {
    puVar24 = *(uint **)(param_1 + 0x40);
    if (*(uint **)(param_1 + 0x40) == (uint *)0x0) {
      puVar24 = puVar23;
    }
    uVar22 = puVar24[(int)uVar2 >> 5] & (uint)local_e8;
    iVar9 = (int)uVar2 >> 5;
    while (uVar22 == 0) {
      uVar25 = uVar25 + 0x20;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
      goto LAB_140842ef7;
      uVar22 = puVar24[(longlong)iVar9 + 1];
      local_e8._0_4_ = 0xffffffff;
      iVar9 = iVar9 + 1;
    }
    uVar22 = -uVar22 & uVar22;
    iVar9 = 0x1f;
    if (uVar22 != 0) {
      for (; uVar22 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar22 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    local_e8._4_4_ = (uVar25 - iVar9) + 0x1f;
    uVar2 = local_e8._4_4_;
    if ((int)uVar15 < (int)local_e8._4_4_) {
LAB_140842ef7:
      local_e8._4_4_ = uVar15;
      uVar2 = uVar15;
    }
  }
  do {
    iVar9 = (int)uVar26;
    if (((uStack_a4 == uVar2) && (puStack_b0 == puVar23)) && (local_c0 == pp_Var27)) {
      if ((local_res18 != *(int *)(param_1 + 200) - *(int *)(param_1 + 0xf4)) || (0 < iVar9)) {
        TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x1a8);
      }
      uVar26 = 0;
      uVar16 = (ulonglong)((longlong)(plVar13 + iVar9) + (7 - (longlong)plVar13)) >> 3;
      if (plVar13 + iVar9 < plVar13) {
        uVar16 = 0;
      }
      plVar20 = plVar13;
      if (uVar16 != 0) {
        do {
          lVar14 = *plVar13;
          FUN_140848010(plVar1,lVar14);
          plVar20 = *(longlong **)(param_1 + 0x110);
          iVar9 = *(int *)(param_1 + 0x118);
          for (plVar21 = plVar20; plVar21 != plVar20 + iVar9; plVar21 = plVar21 + 1) {
            if (*plVar21 == lVar14) {
              iVar7 = (int)((longlong)plVar21 - (longlong)plVar20 >> 3);
              if (iVar7 != -1) {
                iVar12 = (iVar9 - iVar7) + -1;
                if (0 < iVar12) {
                  iVar12 = 1;
                }
                if (iVar12 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            (plVar20 + iVar7,plVar20 + (iVar9 - iVar12),(longlong)iVar12 << 3);
                  iVar9 = *(int *)(param_1 + 0x118);
                }
                *(int *)(param_1 + 0x118) = iVar9 + -1;
              }
              break;
            }
          }
          plVar13 = plVar13 + 1;
          uVar26 = uVar26 + 1;
          plVar20 = local_d0;
        } while (uVar26 != uVar16);
      }
      if (plVar20 != (longlong *)0x0) {
        FMemory::Free(plVar20);
      }
      return;
    }
    plVar20 = (longlong *)((longlong)(int)uStack_a4 * 0x70 + (longlong)*local_c0);
    if (0 < (int)plVar20[2]) {
      local_res20 = (PRTL_CRITICAL_SECTION_DEBUG)*plVar20;
      for (plVar21 = plVar13; plVar21 != plVar13 + iVar9; plVar21 = plVar21 + 1) {
        if ((PRTL_CRITICAL_SECTION_DEBUG)*plVar21 == local_res20) {
          iVar7 = (int)((longlong)plVar21 - (longlong)plVar13 >> 3);
          if (iVar7 != -1) {
            iVar12 = (iVar9 - iVar7) + -1;
            if (0 < iVar12) {
              iVar12 = 1;
            }
            if (iVar12 != 0) {
              _guard_xfg_dispatch_icall_nop
                        (plVar13 + iVar7,plVar13 + (iVar9 - iVar12),(longlong)iVar12 << 3);
            }
            uVar26 = (ulonglong)(iVar9 - 1);
          }
          break;
        }
      }
      if (*(int *)(param_1 + 200) != *(int *)(param_1 + 0xf4)) {
        lVar14 = *(longlong *)(param_1 + 0x100);
        if (*(longlong *)(param_1 + 0x100) == 0) {
          lVar14 = param_1 + 0xf8;
        }
        iVar9 = *(int *)(lVar14 + ((longlong)
                                   ((int)((ulonglong)local_res20 >> 0x20) + (int)local_res20) &
                                  (longlong)*(int *)(param_1 + 0x108) - 1U) * 4);
        if (iVar9 != -1) {
          do {
            plVar21 = (longlong *)((longlong)iVar9 * 0xd0 + *plVar1);
            if ((PRTL_CRITICAL_SECTION_DEBUG)*plVar21 == local_res20) {
              if ((iVar9 != -1) && (plVar21 != (longlong *)0x0)) goto LAB_140843054;
              break;
            }
            iVar9 = (int)plVar21[0x19];
          } while (iVar9 != -1);
        }
      }
      local_68 = (LPCRITICAL_SECTION)&local_res20;
      FUN_14083b1d0(plVar1,&local_res10,&local_68,0);
      plVar21 = (longlong *)((longlong)(int)local_res10.s.LowPart * 0xd0 + *plVar1);
LAB_140843054:
      FUN_1408431a0(param_1,plVar20 + 1,plVar21 + 1);
    }
    uStack_a8 = uStack_a8 & ~uStack_b8._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_b8);
  } while( true );
}



// FUNCTION 1408431a0 FUN_1408431a0 body=1420 status=ok
// SIG undefined FUN_1408431a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408431a0(longlong param_1,ulonglong *param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  void *_Src;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  uint uVar12;
  undefined2 *puVar13;
  int iVar14;
  longlong *plVar15;
  uint *puVar16;
  longlong *plVar17;
  uint uVar18;
  uint *puVar19;
  longlong lVar20;
  undefined2 *puVar21;
  longlong *plVar22;
  undefined1 local_res8 [8];
  longlong *local_res10;
  longlong local_res18;
  longlong *local_res20;
  undefined2 *local_138;
  undefined8 local_130;
  uint local_128;
  uint uStack_124;
  uint *puStack_120;
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  undefined4 uStack_10c;
  ulonglong local_108;
  uint *local_100;
  longlong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  longlong *local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  uint uStack_c8;
  uint uStack_c4;
  uint *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  longlong *local_a8;
  longlong local_a0;
  undefined1 local_98 [8];
  longlong local_90 [2];
  longlong local_80 [2];
  longlong *local_70;
  undefined8 uStack_68;
  uint *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  plVar22 = (longlong *)(param_1 + 0xc0);
  local_d8 = plVar22;
  FUN_1408419a0(param_2,plVar22,param_1 + 0x110);
  TArray<FName,FDefaultAllocator>::operator=(param_3,param_2 + 6);
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_3 + 0x10,param_2 + 8);
  TArray<FName,FDefaultAllocator>::operator=(param_3 + 0x30,param_2 + 2);
  plVar17 = (longlong *)(param_3 + 0x40);
  *(undefined4 *)(param_3 + 0x48) = 0;
  local_e0 = plVar17;
  if (*(int *)(param_3 + 0x4c) < *(int *)(param_3 + 8)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(plVar17);
  }
  iVar7 = *(int *)(param_3 + 0x48);
  *(int *)(param_3 + 0x48) = iVar7 + 1;
  if (*(int *)(param_3 + 0x4c) < iVar7 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar17,iVar7);
  }
  uVar3 = uRam00000001468b5b78;
  local_f8 = param_3 + 0x60;
  puVar10 = (undefined8 *)((longlong)iVar7 * 0x30 + *plVar17);
  *puVar10 = _DAT_1468b5b70;
  puVar10[1] = uVar3;
  uVar6 = uRam00000001468b5b8c;
  uVar5 = uRam00000001468b5b88;
  uVar4 = uRam00000001468b5b84;
  *(undefined4 *)(puVar10 + 2) = _DAT_1468b5b80;
  *(undefined4 *)((longlong)puVar10 + 0x14) = uVar4;
  *(undefined4 *)(puVar10 + 3) = uVar5;
  *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar6;
  uVar6 = uRam00000001468b5b9c;
  uVar5 = uRam00000001468b5b98;
  uVar4 = uRam00000001468b5b94;
  *(undefined4 *)(puVar10 + 4) = _DAT_1468b5b90;
  *(undefined4 *)((longlong)puVar10 + 0x24) = uVar4;
  *(undefined4 *)(puVar10 + 5) = uVar5;
  *(undefined4 *)((longlong)puVar10 + 0x2c) = uVar6;
  TSet<TTuple<FName,FNameArray>,TDefaultMapHashableKeyFuncs<FName,FNameArray,0>,FDefaultSetAllocator>
  ::Empty(local_f8,0);
  local_res20 = (longlong *)*param_2;
  local_108 = 0;
  local_e8 = (longlong)(int)param_2[1] & 0x1fffffffffffffff;
  if (local_res20 + (int)param_2[1] < local_res20) {
    local_e8 = 0;
  }
  if (local_e8 != 0) {
    do {
      local_res18 = *local_res20;
      plVar11 = (longlong *)0x0;
      if ((int)plVar22[1] != *(int *)((longlong)plVar22 + 0x34)) {
        plVar15 = (longlong *)plVar22[8];
        if ((longlong *)plVar22[8] == (longlong *)0x0) {
          plVar15 = plVar22 + 7;
        }
        iVar7 = *(int *)((longlong)plVar15 +
                        ((longlong)((int)((ulonglong)local_res18 >> 0x20) + (int)local_res18) &
                        (longlong)(int)plVar22[9] - 1U) * 4);
        if (iVar7 != -1) {
          do {
            plVar15 = (longlong *)((longlong)iVar7 * 0xd0 + *plVar22);
            if (*plVar15 == local_res18) {
              if (iVar7 != -1) goto LAB_140843327;
              break;
            }
            iVar7 = (int)plVar15[0x19];
          } while (iVar7 != -1);
        }
      }
      plVar15 = plVar11;
LAB_140843327:
      iVar7 = (int)plVar15[10];
      if (iVar7 != 0) {
        iVar9 = (int)plVar17[1];
        if (*(int *)((longlong)plVar17 + 0xc) < iVar9 + iVar7) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeTo(plVar17);
          iVar9 = (int)plVar17[1];
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar9 * 0x30 + *plVar17),(void *)plVar15[9],
                   (longlong)iVar7 * 0x30);
        *(int *)(plVar17 + 1) = (int)plVar17[1] + iVar7;
      }
      local_res10 = plVar15 + 0xd;
      uStack_124 = 1;
      uVar1 = *(uint *)(plVar15 + 0x12);
      puStack_120 = (uint *)(plVar15 + 0xf);
      local_128 = 0;
      uStack_114 = 0;
      uStack_110 = 0;
      if (uVar1 != 0) {
        puVar16 = (uint *)plVar15[0x11];
        if ((uint *)plVar15[0x11] == (uint *)0x0) {
          puVar16 = puStack_120;
        }
        uVar2 = *puVar16;
        plVar17 = plVar11;
        while (uVar2 == 0) {
          iVar7 = (int)plVar11;
          uStack_110 = (int)plVar17 + 0x20;
          plVar17 = (longlong *)(ulonglong)uStack_110;
          local_128 = iVar7 + 1;
          plVar11 = (longlong *)(ulonglong)local_128;
          if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
          goto LAB_140843425;
          uVar2 = puVar16[(longlong)iVar7 + 1];
        }
        uStack_124 = -uVar2 & uVar2;
        iVar7 = 0x1f;
        if (uStack_124 != 0) {
          for (; uStack_124 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        if (uStack_124 == 0) {
          iVar7 = 0x20;
        }
        else {
          iVar7 = 0x1f - iVar7;
        }
        uStack_114 = (uStack_110 - iVar7) + 0x1f;
        if ((int)uVar1 < (int)uStack_114) {
LAB_140843425:
          uStack_114 = uVar1;
        }
      }
      uVar2 = *(uint *)(plVar15 + 0x12);
      puVar16 = (uint *)(plVar15 + 0xf);
      uStack_b8 = CONCAT44(uStack_114,0xffffffff);
      local_b0 = CONCAT44(uStack_10c,uStack_110);
      uStack_68 = CONCAT44(uStack_124,local_128);
      local_118 = -1 << ((byte)uVar2 & 0x1f);
      uVar18 = uVar2 & 0xffffffe0;
      uStack_c8 = local_128;
      uStack_c4 = uStack_124;
      uStack_114 = uVar2;
      if (uVar2 != uVar1) {
        puVar19 = (uint *)plVar15[0x11];
        if ((uint *)plVar15[0x11] == (uint *)0x0) {
          puVar19 = puVar16;
        }
        uVar12 = puVar19[(int)uVar2 >> 5] & local_118;
        iVar7 = (int)uVar2 >> 5;
        while (uVar12 == 0) {
          uVar18 = uVar18 + 0x20;
          if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
          goto LAB_140843508;
          uVar12 = puVar19[(longlong)iVar7 + 1];
          local_118 = 0xffffffff;
          iVar7 = iVar7 + 1;
        }
        uVar12 = -uVar12 & uVar12;
        iVar7 = 0x1f;
        if (uVar12 != 0) {
          for (; uVar12 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        if (uVar12 == 0) {
          iVar7 = 0x20;
        }
        else {
          iVar7 = 0x1f - iVar7;
        }
        uStack_114 = (uVar18 - iVar7) + 0x1f;
        if ((int)uVar1 < (int)uStack_114) {
LAB_140843508:
          uStack_114 = uVar1;
        }
      }
      local_f0 = (ulonglong)uStack_114;
      local_100 = puVar16;
      local_c0 = puStack_120;
      local_70 = local_res10;
      puStack_60 = puStack_120;
      uStack_58 = uStack_b8;
      uStack_50 = local_b0;
      local_d0 = local_res10;
      while( true ) {
        if (((uStack_b8._4_4_ == (int)local_f0) && (local_c0 == puVar16)) &&
           (local_d0 == local_res10)) break;
        lVar20 = (longlong)uStack_b8._4_4_ * 0x20 + *local_d0;
        puVar10 = (undefined8 *)FName::ToString(lVar20,local_80);
        puVar8 = (undefined8 *)FName::ToString(&local_res18,local_90);
        iVar7 = *(int *)(puVar8 + 1);
        if (iVar7 < 2) {
          puVar21 = (undefined2 *)*puVar10;
          *puVar10 = 0;
          iVar7 = *(int *)(puVar10 + 1);
          puVar10[1] = 0;
        }
        else {
          iVar9 = *(int *)(puVar10 + 1) + -1;
          if (*(int *)(puVar10 + 1) == 0) {
            iVar9 = 0;
          }
          if ((iVar7 != 0) || (iVar14 = 1, iVar9 == 0)) {
            iVar14 = 0;
          }
          local_138 = (undefined2 *)*puVar8;
          *puVar8 = 0;
          local_130._4_4_ = *(int *)((longlong)puVar8 + 0xc);
          puVar8[1] = 0;
          if (local_130._4_4_ < iVar14 + iVar9 + iVar7) {
            local_130._0_4_ = iVar7;
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_138);
            iVar7 = (int)local_130;
          }
          _Src = (void *)*puVar10;
          puVar21 = local_138;
          if (iVar9 != 0) {
            iVar14 = iVar7 + (uint)(iVar7 == 0) + iVar9;
            local_130 = CONCAT44(local_130._4_4_,iVar14);
            if (local_130._4_4_ < iVar14) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,iVar7);
              iVar14 = (int)local_130;
            }
            puVar21 = local_138;
            puVar13 = local_138 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0));
            _guard_xfg_dispatch_icall_nop(puVar13,_Src,(longlong)iVar9 * 2);
            puVar13[iVar9] = 0;
            puVar16 = local_100;
            iVar7 = iVar14;
          }
          local_138 = (undefined2 *)0x0;
          local_130 = 0;
        }
        puVar13 = &DAT_143f3eda8;
        if (iVar7 != 0) {
          puVar13 = puVar21;
        }
        FName::FName(local_98,puVar13,1);
        if (puVar21 != (undefined2 *)0x0) {
          FMemory::Free(puVar21);
        }
        if (local_90[0] != 0) {
          FMemory::Free();
        }
        if (local_80[0] != 0) {
          FMemory::Free();
        }
        local_a8 = &local_res18;
        local_a0 = lVar20 + 8;
        TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_&&,FString_const_&>_>(local_f8,local_res8,&local_a8,0);
        uStack_b8 = CONCAT44(uStack_b8._4_4_,(uint)uStack_b8 & ~uStack_c4);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_c8);
      }
      local_res20 = local_res20 + 1;
      local_108 = local_108 + 1;
      plVar17 = local_e0;
      plVar22 = local_d8;
    } while (local_108 != local_e8);
  }
  return;
}



// FUNCTION 140843730 FUN_140843730 body=65 status=ok
// SIG undefined FUN_140843730(void)

ulonglong FUN_140843730(longlong param_1)

{
  longlong local_18;
  ulonglong local_10;
  
  local_10 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    local_18 = 0;
    local_10 = 0;
    FCachedSubjectFrame::GetChildTransformIndices
              (*(longlong *)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),&local_18);
    if (local_18 != 0) {
      FMemory::Free();
    }
    local_10 = local_10 & 0xffffffff;
  }
  return local_10;
}



// FUNCTION 140843780 GetTransformRootSpace body=24 status=ok
// SIG undefined GetTransformRootSpace(void)

void FLiveLinkTransform::GetTransformRootSpace(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_140845b60(*(longlong *)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),param_2);
    return;
  }
  return;
}



// FUNCTION 1408437a0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
ConditionalRehash(longlong param_1,uint param_2,char param_3)

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



// FUNCTION 140843850 FUN_140843850 body=552 status=ok
// SIG undefined FUN_140843850(void)

void FUN_140843850(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  plVar6 = (longlong *)FUN_141593110();
  iVar5 = (**(code **)(*plVar6 + 8))(plVar6,DAT_146b44bf0);
  if (0 < iVar5) {
    lVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,DAT_146b44bf0,0);
    if (lVar7 == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = (longlong *)(lVar7 + -8);
    }
    uVar8 = FText::FromString(local_30,param_1 + 0x20);
    uVar9 = FText::FromString(local_48,param_1 + 0x10);
    local_80 = (longlong *)FUN_14083cab0(uVar9,uVar8,param_1);
    local_88 = local_80 + 2;
    SharedPointerInternals::EnableSharedFromThis(&local_88,local_88,local_88);
    plVar4 = local_80;
    plVar3 = local_88;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_80 + 1) = (int)local_80[1] + 1;
      UNLOCK();
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_80 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_80)(local_80);
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
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)local_40 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)local_28 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_28 + 8))(local_28,1);
        }
      }
    }
    local_78 = plVar3;
    local_70 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    (**(code **)(*plVar6 + 8))(plVar6,&local_78);
    local_68 = plVar3;
    local_60 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    FLiveLinkSourceHandle::SetSourcePointer(param_2,&local_68);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar4 + 1;
      lVar7 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    return;
  }
  local_58 = 0;
  uStack_50 = 0;
  FLiveLinkSourceHandle::SetSourcePointer(param_2,&local_58);
  return;
}



// FUNCTION 140843a80 Init body=97 status=ok
// SIG undefined Init(void)

void FManifestUObject::Init(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = GetTransientPackage();
  FUN_1417846f0(uVar1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar2 = UStateMachineConnection::GetPrivateStaticClass();
  FUN_1417985e0(uVar2,uVar1,0,0,0,0,0,0,0);
  return;
}



// FUNCTION 140843af0 FUN_140843af0 body=165 status=ok
// SIG undefined FUN_140843af0(void)

undefined8 * FUN_140843af0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x710);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14083cb80(puVar1,param_1);
    *puVar1 = &PTR_FUN_14410c498;
    puVar1[0xd8] = 0;
    puVar1[0xd9] = 0;
    puVar1[0xda] = 0;
    puVar1[0xdb] = 0;
    *(undefined1 *)(puVar1 + 0xdc) = 0;
    puVar1[0xd7] = &PTR_Initialize_AnyThread_14410b780;
    puVar1[0xdd] = 0;
    uVar2 = FUN_14084a450();
    puVar1[0xde] = uVar2;
    puVar1[0xdf] = 0;
    puVar1[0xe0] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140843ba0 FUN_140843ba0 body=9 status=ok
// SIG undefined FUN_140843ba0(void)

void FUN_140843ba0(longlong param_1)

{
  FUN_14083e9a0(param_1 + 0x10);
  return;
}



// FUNCTION 140843bb0 FUN_140843bb0 body=12 status=ok
// SIG undefined FUN_140843bb0(void)

void FUN_140843bb0(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14410bb88;
  return;
}



// FUNCTION 140843bd0 FUN_140843bd0 body=22 status=ok
// SIG undefined FUN_140843bd0(void)

void FUN_140843bd0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140843be1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 140843bf0 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FName,FNameArray>,TDefaultMapHashableKeyFuncs<FName,FNameArray,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = ConditionalRehash(param_1,param_2);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar2 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 140843c70 FUN_140843c70 body=475 status=ok
// SIG undefined FUN_140843c70(void)

void FUN_140843c70(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar4 = *puVar7;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar6 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar6;
      if (bVar3) goto LAB_140843d41;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_54 = (iStack_50 - iVar6) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_140843d41:
      iStack_54 = iVar2;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar2) {
    do {
      lVar5 = (longlong)iStack_2c * 0x90 + *param_1;
      if (*(longlong *)(lVar5 + 0x68) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar5 + 0x58) != 0) {
        FMemory::Free();
      }
      FUN_14083df50(lVar5 + 0x18);
      if (*(longlong *)(lVar5 + 8) != 0) {
        FMemory::Free();
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<144,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 140843e50 FUN_140843e50 body=490 status=ok
// SIG undefined FUN_140843e50(void)

void FUN_140843e50(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar4 = *puVar7;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar6 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar6;
      if (bVar3) goto LAB_140843f21;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_54 = (iStack_50 - iVar6) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_140843f21:
      iStack_54 = iVar2;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar2) {
    do {
      lVar5 = (longlong)iStack_2c * 0x70 + *param_1;
      if (*(longlong *)(lVar5 + 0x58) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar5 + 0x48) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar5 + 0x38) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar5 + 0x18) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar5 + 8) != 0) {
        FMemory::Free();
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 140844040 Empty body=452 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FName,FRetargetSourceCachedData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar4 = *puVar7;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar6 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar6;
      if (bVar3) goto LAB_140844111;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_54 = (iStack_50 - iVar6) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_140844111:
      iStack_54 = iVar2;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar2) {
    do {
      lVar5 = (longlong)iStack_2c * 0x30 + *param_1;
      if (*(longlong *)(lVar5 + 0x18) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar5 + 8) != 0) {
        FMemory::Free();
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 140844210 FUN_140844210 body=24 status=ok
// SIG undefined FUN_140844210(void)

undefined8 FUN_140844210(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x6b8) + 0x18))();
  return 1;
}



// FUNCTION 140844230 FUN_140844230 body=260 status=ok
// SIG undefined FUN_140844230(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140844230(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar6 = uRam000000014685ed7c;
  uVar5 = uRam000000014685ed78;
  uVar4 = uRam000000014685ed74;
  uVar3 = _DAT_14685ed70;
  if (*(char *)(param_2 + 0x40) == '\0') {
    FUN_1408488d0(param_2 + 8,*(undefined8 *)(param_2 + 0x18));
  }
  else {
    puVar8 = *(undefined4 **)(param_2 + 8);
    puVar9 = puVar8 + (longlong)*(int *)(param_2 + 0x10) * 0xc;
    uVar10 = uRam000000014685ed6c;
    for (; uRam000000014685ed6c = uVar10, puVar8 != puVar9; puVar8 = puVar8 + 0xc) {
      *(undefined8 *)(puVar8 + 4) = 0;
      *(undefined8 *)(puVar8 + 6) = 0;
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = uVar10;
      uVar10 = uRam000000014685ed64 & uVar4;
      uVar11 = uRam000000014685ed68 & uVar5;
      uVar12 = uRam000000014685ed6c & uVar6;
      puVar8[8] = _DAT_14685ed60 & uVar3;
      puVar8[9] = uVar10;
      puVar8[10] = uVar11;
      puVar8[0xb] = uVar12;
      auVar2._4_4_ = DAT_1468b5d94;
      auVar2._0_4_ = DAT_1468b5d90;
      auVar2._8_4_ = DAT_1468b5d98;
      auVar2._12_4_ = 0;
      *(undefined1 (*) [16])(puVar8 + 8) = auVar2;
      uVar10 = uRam000000014685ed6c;
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x48);
  if (((plVar1 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x40) != 0)) &&
     (lVar7 = (**(code **)(*plVar1 + 0x38))(plVar1,*(undefined8 *)(param_1 + 0x30)), lVar7 != 0)) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x280))
              (*(longlong **)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x50),lVar7,param_2 + 8,
               param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}



// FUNCTION 140844340 FromFrameNumber body=1210 status=ok
// SIG undefined FromFrameNumber(void)

int * FTimecode::FromFrameNumber(int *param_1,uint *param_2,int *param_3,char param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  float fVar6;
  float fVar7;
  uint in_EAX;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined4 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  uVar15 = *param_2;
  fVar6 = (float)*param_3 / (float)param_3[1];
  iVar16 = (int)ROUND(-0.5 - (fVar6 + fVar6)) >> 1;
  iVar17 = -iVar16;
  if (param_4 == '\0') {
    auVar20._0_8_ = (double)(int)uVar15;
    dVar5 = auVar20._0_8_ / (double)(iVar16 * -0xe10);
    lVar12 = (longlong)dVar5;
    uVar22 = (undefined4)((ulonglong)dVar5 >> 0x20);
    if (0.0 <= dVar5) {
      if ((lVar12 != -0x8000000000000000) && ((double)lVar12 != dVar5)) {
        auVar4._8_4_ = SUB84(dVar5,0);
        auVar4._0_8_ = dVar5;
        auVar4._12_4_ = uVar22;
        uVar8 = movmskpd(in_EAX,auVar4);
        in_EAX = uVar8 & 1;
        uVar9 = -(ulonglong)in_EAX;
        goto LAB_1408446b3;
      }
    }
    else if ((lVar12 != -0x8000000000000000) && ((double)lVar12 != dVar5)) {
      auVar3._8_4_ = SUB84(dVar5,0);
      auVar3._0_8_ = dVar5;
      auVar3._12_4_ = uVar22;
      uVar8 = movmskpd(in_EAX,auVar3);
      in_EAX = uVar8 & 1 ^ 1;
      uVar9 = (ulonglong)in_EAX;
LAB_1408446b3:
      dVar5 = (double)(longlong)(lVar12 + uVar9);
    }
    auVar25._0_8_ = auVar20._0_8_ / (double)(iVar16 * -0x3c);
    lVar12 = (longlong)auVar25._0_8_;
    if (0.0 <= auVar25._0_8_) {
      if ((lVar12 != -0x8000000000000000) && ((double)lVar12 != auVar25._0_8_)) {
        auVar26._8_8_ = auVar25._0_8_;
        auVar26._0_8_ = auVar25._0_8_;
        uVar8 = movmskpd(in_EAX,auVar26);
        uVar9 = -(ulonglong)(uVar8 & 1);
        goto LAB_140844725;
      }
    }
    else if ((lVar12 != -0x8000000000000000) && ((double)lVar12 != auVar25._0_8_)) {
      auVar25._8_8_ = auVar25._0_8_;
      uVar8 = movmskpd(in_EAX,auVar25);
      uVar9 = (ulonglong)(uVar8 & 1 ^ 1);
LAB_140844725:
      auVar25._0_8_ = (double)(longlong)(lVar12 + uVar9);
    }
    auVar20._0_8_ = auVar20._0_8_ / (double)iVar17;
    iVar16 = ((int)auVar25._0_8_ / 0x3c) * 0x3c;
    lVar12 = (longlong)auVar20._0_8_;
    if (0.0 <= auVar20._0_8_) {
      if ((lVar12 != -0x8000000000000000) && ((double)lVar12 != auVar20._0_8_)) {
        auVar21._8_8_ = auVar20._0_8_;
        auVar21._0_8_ = auVar20._0_8_;
        uVar8 = movmskpd(iVar16,auVar21);
        uVar9 = -(ulonglong)(uVar8 & 1);
        goto LAB_1408447b1;
      }
    }
    else if ((lVar12 != -0x8000000000000000) && ((double)lVar12 != auVar20._0_8_)) {
      auVar20._8_8_ = auVar20._0_8_;
      uVar8 = movmskpd(iVar16,auVar20);
      uVar9 = (ulonglong)(uVar8 & 1 ^ 1);
LAB_1408447b1:
      auVar20._0_8_ = (double)(longlong)(lVar12 + uVar9);
    }
    param_1[1] = (int)auVar25._0_8_ % 0x3c;
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[2] = (int)auVar20._0_8_ % 0x3c;
    goto LAB_1408447e5;
  }
  iVar13 = 4;
  if (iVar17 < 0x1f) {
    iVar13 = 2;
  }
  uVar11 = (int)uVar15 >> 0x1f;
  iVar14 = (uVar15 ^ uVar11) - uVar11;
  iVar10 = (int)ROUND((fVar6 * 600.0 + fVar6 * 600.0) - 0.5) >> 1;
  fVar7 = (float)iVar14;
  uVar8 = iVar14 / iVar10;
  if (iVar13 <= iVar14 % iVar10) {
    fVar6 = (float)(iVar14 % iVar10 - iVar13) /
            (float)(uint)((int)ROUND((fVar6 * 60.0 + fVar6 * 60.0) - 0.5) >> 1);
    uVar8 = ((int)ROUND((fVar6 + fVar6) - 0.5) >> 1) * iVar13;
    iVar14 = iVar14 + uVar8;
  }
  if (0 < (int)uVar15) {
    uVar11 = 1;
  }
  uVar15 = (iVar14 + ((int)ROUND((fVar7 / (float)iVar10 + fVar7 / (float)iVar10) - 0.5) >> 1) *
                     iVar13 * 9) * uVar11;
  auVar20._0_8_ = (double)(int)uVar15;
  dVar5 = auVar20._0_8_ / (double)(iVar16 * -0xe10);
  lVar12 = (longlong)dVar5;
  uVar22 = (undefined4)((ulonglong)dVar5 >> 0x20);
  if (0.0 <= dVar5) {
    if ((lVar12 != -0x8000000000000000) && ((double)lVar12 != dVar5)) {
      auVar2._8_4_ = SUB84(dVar5,0);
      auVar2._0_8_ = dVar5;
      auVar2._12_4_ = uVar22;
      uVar8 = movmskpd(uVar8,auVar2);
      uVar8 = uVar8 & 1;
      uVar9 = -(ulonglong)uVar8;
      goto LAB_1408444fc;
    }
  }
  else if ((lVar12 != -0x8000000000000000) && ((double)lVar12 != dVar5)) {
    auVar1._8_4_ = SUB84(dVar5,0);
    auVar1._0_8_ = dVar5;
    auVar1._12_4_ = uVar22;
    uVar8 = movmskpd(uVar8,auVar1);
    uVar8 = uVar8 & 1 ^ 1;
    uVar9 = (ulonglong)uVar8;
LAB_1408444fc:
    dVar5 = (double)(longlong)(lVar12 + uVar9);
  }
  auVar23._0_8_ = auVar20._0_8_ / (double)(iVar16 * -0x3c);
  lVar12 = (longlong)auVar23._0_8_;
  if (0.0 <= auVar23._0_8_) {
    if ((lVar12 != -0x8000000000000000) && ((double)lVar12 != auVar23._0_8_)) {
      auVar24._8_8_ = auVar23._0_8_;
      auVar24._0_8_ = auVar23._0_8_;
      uVar8 = movmskpd(uVar8,auVar24);
      uVar9 = -(ulonglong)(uVar8 & 1);
      goto LAB_14084456e;
    }
  }
  else if ((lVar12 != -0x8000000000000000) && ((double)lVar12 != auVar23._0_8_)) {
    auVar23._8_8_ = auVar23._0_8_;
    uVar8 = movmskpd(uVar8,auVar23);
    uVar9 = (ulonglong)(uVar8 & 1 ^ 1);
LAB_14084456e:
    auVar23._0_8_ = (double)(longlong)(lVar12 + uVar9);
  }
  auVar18._0_8_ = auVar20._0_8_ / (double)iVar17;
  lVar12 = (longlong)auVar18._0_8_;
  if (0.0 <= auVar18._0_8_) {
    if ((lVar12 != -0x8000000000000000) && ((double)lVar12 != auVar18._0_8_)) {
      auVar19._8_8_ = auVar18._0_8_;
      auVar19._0_8_ = auVar18._0_8_;
      uVar8 = movmskpd(0,auVar19);
      uVar9 = -(ulonglong)(uVar8 & 1);
      goto LAB_1408445fa;
    }
  }
  else if ((lVar12 != -0x8000000000000000) && ((double)lVar12 != auVar18._0_8_)) {
    auVar18._8_8_ = auVar18._0_8_;
    uVar8 = movmskpd(((int)auVar23._0_8_ / 0x3c) * 0x3c,auVar18);
    uVar9 = (ulonglong)(uVar8 & 1 ^ 1);
LAB_1408445fa:
    auVar18._0_8_ = (double)(longlong)(lVar12 + uVar9);
  }
  param_1[1] = (int)auVar23._0_8_ % 0x3c;
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[2] = (int)auVar18._0_8_ % 0x3c;
LAB_1408447e5:
  *param_1 = (int)dVar5;
  param_1[3] = (int)uVar15 % iVar17;
  return param_1;
}



// FUNCTION 140844800 FUN_140844800 body=215 status=ok
// SIG undefined FUN_140844800(void)

undefined8 * FUN_140844800(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (DAT_14685ed50 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)operator_new(0x90);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &PTR_IsPromotedBuild_14410cba8;
      *(undefined4 *)(puVar1 + 1) = 1;
      InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 3));
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar1 + 3),4000);
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[0xc] = 0;
      puVar1[0xd] = 0;
      *(undefined4 *)(puVar1 + 0xe) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x74) = 0;
      puVar1[0x10] = 0;
      *(undefined4 *)(puVar1 + 0x11) = 0;
      uVar2 = FUN_1415d42a0(puVar1,L"MessageBusHeartbeatManager",0,0xffffffff,0xffffffffffffffff);
      puVar1[2] = uVar2;
      DAT_14685ed50 = puVar1;
      return puVar1;
    }
    DAT_14685ed50 = (undefined8 *)0x0;
  }
  return DAT_14685ed50;
}



// FUNCTION 1408448e0 FUN_1408448e0 body=255 status=ok
// SIG undefined FUN_1408448e0(void)

void FUN_1408448e0(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_28 [32];
  
  lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_2,1);
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 400) == 0) {
      lVar2 = lVar2 + 0x400;
    }
    else {
      lVar2 = *(longlong *)(*(longlong *)(lVar2 + 400) + 0x98);
    }
    lVar3 = FLatentActionManager::
            FindExistingActionWithPredicate<FStreamLevelAction,_FLatentActionManager::FindExistingAction<FStreamLevelAction>_::_2_::FFirstItemPredicate>
                      (lVar2,*(undefined8 *)(param_3 + 4),param_3[1],local_28);
    if (lVar3 == 0) {
      FUN_140846dc0(param_1);
      puVar4 = (undefined8 *)operator_new(0x38);
      if (puVar4 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)0x0;
      }
      else {
        uVar1 = *(undefined8 *)(param_3 + 4);
        *puVar4 = &PTR_FUN_14410cb10;
        puVar4[1] = *(undefined8 *)(param_3 + 2);
        *(undefined4 *)(puVar4 + 2) = *param_3;
        FWeakObjectPtr::operator=((longlong)puVar4 + 0x14,uVar1);
        FWeakObjectPtr::operator=((longlong)puVar4 + 0x1c,param_1);
        puVar4[5] = param_5;
        *(undefined4 *)(puVar4 + 6) = param_4;
      }
      FUN_142514cf0(lVar2,*(undefined8 *)(param_3 + 4),param_3[1],puVar4);
    }
  }
  return;
}



// FUNCTION 1408449e0 FUN_1408449e0 body=78 status=ok
// SIG undefined FUN_1408449e0(void)

void FUN_1408449e0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  cVar1 = FUN_1408469c0(param_1);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 400) + 0x30))(*(longlong **)(param_1 + 400),param_2);
  }
  return;
}



// FUNCTION 140844a30 GetChildTransformIndices body=225 status=ok
// SIG undefined GetChildTransformIndices(void)

void FCachedSubjectFrame::GetChildTransformIndices(longlong param_1,int param_2,longlong param_3)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  *(undefined4 *)(param_3 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_3 + 0xc)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_3,0);
  }
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x50))) {
    puVar1 = (undefined1 *)(*(longlong *)(param_1 + 0xd8) + (longlong)param_2 * 0x18);
    if (*(char *)(*(longlong *)(param_1 + 0xd8) + (longlong)param_2 * 0x18) == '\0') {
      uVar5 = uVar4;
      if (0 < *(int *)(param_1 + 0x20)) {
        do {
          if (*(int *)(uVar5 + *(longlong *)(param_1 + 0x18)) == param_2) {
            iVar2 = *(int *)(puVar1 + 0x10);
            *(int *)(puVar1 + 0x10) = iVar2 + 1;
            if (*(int *)(puVar1 + 0x14) < iVar2 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(puVar1 + 8,iVar2);
            }
            *(int *)(*(longlong *)(puVar1 + 8) + (longlong)iVar2 * 4) = (int)uVar4;
          }
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar3;
          uVar5 = uVar5 + 4;
        } while ((int)uVar3 < *(int *)(param_1 + 0x20));
      }
      *puVar1 = 1;
    }
    TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_3,puVar1 + 8);
  }
  return;
}



// FUNCTION 140844b20 GetChildren body=469 status=ok
// SIG undefined GetChildren(void)

void FLiveLinkTransform::GetChildren(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined4 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  
  iVar7 = *(int *)((longlong)param_2 + 0xc);
  iVar9 = (int)param_2[1];
  if (iVar7 < 0) {
    if (iVar9 != 0) {
      plVar11 = (longlong *)(*param_2 + 0x10);
      do {
        plVar5 = (longlong *)*plVar11;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar7 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        plVar11 = plVar11 + 4;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      iVar7 = *(int *)((longlong)param_2 + 0xc);
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (iVar7 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                (param_2,0);
    }
  }
  else {
    if (iVar9 != 0) {
      plVar11 = (longlong *)(*param_2 + 0x10);
      do {
        plVar5 = (longlong *)*plVar11;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar7 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        plVar11 = plVar11 + 4;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    *(undefined4 *)(param_2 + 1) = 0;
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    local_48 = (undefined4 *)0x0;
    local_40 = 0;
    FCachedSubjectFrame::GetChildTransformIndices
              (*(longlong *)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),&local_48);
    puVar3 = local_48 + (int)local_40;
    for (puVar8 = local_48; puVar8 != puVar3; puVar8 = puVar8 + 1) {
      iVar7 = (int)param_2[1];
      uVar4 = *puVar8;
      *(int *)(param_2 + 1) = iVar7 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(param_2,iVar7);
      }
      lVar6 = *param_2;
      lVar10 = (longlong)iVar7 * 0x20;
      *(undefined ***)(lVar10 + lVar6) = &PTR__scalar_deleting_destructor__14410bbe8;
      *(undefined8 *)(lVar10 + 8 + lVar6) = 0;
      *(undefined8 *)(lVar10 + 0x10 + lVar6) = 0;
      *(undefined4 *)(lVar10 + 0x18 + lVar6) = 0xffffffff;
      local_38 = *(undefined8 *)(param_1 + 8);
      local_30 = *(longlong *)(param_1 + 0x10);
      if (local_30 != 0) {
        LOCK();
        *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
        UNLOCK();
      }
      FLiveLinkSourceHandle::SetSourcePointer(*param_2 + lVar10,&local_38);
      *(undefined4 *)(lVar10 + 0x18 + *param_2) = uVar4;
    }
    if (local_48 != (undefined4 *)0x0) {
      FMemory::Free(local_48);
    }
  }
  return;
}



// FUNCTION 140844d00 GetChildren body=5 status=ok
// SIG undefined GetChildren(void)

void FLiveLinkTransform::GetChildren(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined4 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  longlong lStack_30;
  
  iVar7 = *(int *)((longlong)param_2 + 0xc);
  iVar9 = (int)param_2[1];
  if (iVar7 < 0) {
    if (iVar9 != 0) {
      plVar11 = (longlong *)(*param_2 + 0x10);
      do {
        plVar5 = (longlong *)*plVar11;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar7 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        plVar11 = plVar11 + 4;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      iVar7 = *(int *)((longlong)param_2 + 0xc);
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (iVar7 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                (param_2,0);
    }
  }
  else {
    if (iVar9 != 0) {
      plVar11 = (longlong *)(*param_2 + 0x10);
      do {
        plVar5 = (longlong *)*plVar11;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar7 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        plVar11 = plVar11 + 4;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    *(undefined4 *)(param_2 + 1) = 0;
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    puStack_48 = (undefined4 *)0x0;
    uStack_40 = 0;
    FCachedSubjectFrame::GetChildTransformIndices
              (*(longlong *)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),&puStack_48);
    puVar3 = puStack_48 + (int)uStack_40;
    for (puVar8 = puStack_48; puVar8 != puVar3; puVar8 = puVar8 + 1) {
      iVar7 = (int)param_2[1];
      uVar4 = *puVar8;
      *(int *)(param_2 + 1) = iVar7 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(param_2,iVar7);
      }
      lVar6 = *param_2;
      lVar10 = (longlong)iVar7 * 0x20;
      *(undefined ***)(lVar10 + lVar6) = &PTR__scalar_deleting_destructor__14410bbe8;
      *(undefined8 *)(lVar10 + 8 + lVar6) = 0;
      *(undefined8 *)(lVar10 + 0x10 + lVar6) = 0;
      *(undefined4 *)(lVar10 + 0x18 + lVar6) = 0xffffffff;
      uStack_38 = *(undefined8 *)(param_1 + 8);
      lStack_30 = *(longlong *)(param_1 + 0x10);
      if (lStack_30 != 0) {
        LOCK();
        *(int *)(lStack_30 + 8) = *(int *)(lStack_30 + 8) + 1;
        UNLOCK();
      }
      FLiveLinkSourceHandle::SetSourcePointer(*param_2 + lVar10,&uStack_38);
      *(undefined4 *)(lVar10 + 0x18 + *param_2) = uVar4;
    }
    if (puStack_48 != (undefined4 *)0x0) {
      FMemory::Free(puStack_48);
    }
  }
  return;
}



// FUNCTION 140844d10 FUN_140844d10 body=256 status=ok
// SIG undefined FUN_140844d10(void)

void FUN_140844d10(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined4 local_res8 [2];
  undefined1 local_res18 [16];
  longlong local_38;
  undefined4 *local_30;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x138) == '\0') {
      iVar2 = *(int *)(lVar1 + 0x60);
      if (*(int *)(lVar1 + 0x40) <= *(int *)(lVar1 + 0x60)) {
        iVar2 = *(int *)(lVar1 + 0x40);
      }
      if (*(int *)(lVar1 + 0xf0) - *(int *)(lVar1 + 0x11c) < iVar2) {
        TSparseArray<TSetElement<TSharedPtr<FInterfaceContainer,0>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::Reserve(lVar1 + 0xe8,iVar2);
      }
      iVar3 = 0;
      if (0 < iVar2) {
        local_30 = local_res8;
        lVar4 = 0;
        do {
          if (*(char *)(*(longlong *)(lVar1 + 0x58) + 4 + lVar4 * 8) == '\0') {
            local_res8[0] = 0;
          }
          else {
            local_res8[0] = *(undefined4 *)(*(longlong *)(lVar1 + 0x58) + lVar4 * 8);
          }
          local_38 = *(longlong *)(lVar1 + 0x38) + (longlong)iVar3 * 8;
          TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FName_const_&,float_const_&>_>
                    (lVar1 + 0xe8,local_res18,&local_38,0);
          iVar3 = iVar3 + 1;
          lVar4 = lVar4 + 1;
        } while (lVar4 < iVar2);
      }
      *(undefined1 *)(lVar1 + 0x138) = 1;
    }
    TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
    operator=(param_2,lVar1 + 0xe8);
  }
  return;
}



// FUNCTION 140844e20 FUN_140844e20 body=14 status=ok
// SIG undefined FUN_140844e20(void)

void FUN_140844e20(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined1 auVar4 [12];
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  uint *puVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  uint auStackX_8 [2];
  ulonglong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  longlong *plStack_30;
  undefined8 uStack_28;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == 0) {
    return;
  }
  plVar8 = (longlong *)(lVar1 + 0x68);
  if (param_2 != plVar8) {
    TSet<TTuple<FName,FNameArray>,TDefaultMapHashableKeyFuncs<FName,FNameArray,0>,FDefaultSetAllocator>
    ::Empty(param_2,*(int *)(lVar1 + 0x70) - *(int *)(lVar1 + 0x9c));
    iVar10 = *(int *)(lVar1 + 0x90);
    puStack_20 = (uint *)(lVar1 + 0x78);
    uStack_58 = (longlong *)0x100000000;
    iVar9 = 0;
    uStack_40 = uStack_40 & 0xffffffff00000000;
    uStack_48._4_4_ = 0;
    if (iVar10 != 0) {
      puVar12 = *(uint **)(lVar1 + 0x88);
      if (*(uint **)(lVar1 + 0x88) == (uint *)0x0) {
        puVar12 = puStack_20;
      }
      uVar5 = *puVar12;
      iVar6 = 0;
      while (uVar5 == 0) {
        iVar9 = iVar9 + 0x20;
        uStack_40._4_4_ = (int)(uStack_40 >> 0x20);
        uStack_40 = CONCAT44(uStack_40._4_4_,iVar9);
        uVar7 = (ulonglong)uStack_58 >> 0x20;
        uStack_58 = (longlong *)CONCAT44((int)uVar7,iVar6 + 1);
        if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_14084547d;
        uVar5 = puVar12[(longlong)iVar6 + 1];
        iVar6 = iVar6 + 1;
      }
      uVar5 = -uVar5 & uVar5;
      iVar6 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      uStack_58 = (longlong *)CONCAT44(uVar5,SUB84(uStack_58,0));
      if (uVar5 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      uStack_48._4_4_ = (iVar9 - iVar6) + 0x1f;
      if (iVar10 < uStack_48._4_4_) {
LAB_14084547d:
        uStack_48._4_4_ = iVar10;
      }
    }
    uStack_18 = 0xffffffff;
    iStack_14 = uStack_48._4_4_;
    uStack_10 = (uint)uStack_40;
    uStack_c = uStack_40._4_4_;
    uStack_28 = uStack_58;
    uVar7 = CONCAT44(uStack_48._4_4_,0xffffffff);
    uStack_50 = uStack_58;
    auVar4._4_8_ = uStack_58;
    auVar4._0_4_ = uStack_48._4_4_;
    auVar13._0_8_ = auVar4._0_8_ << 0x20;
    auVar13._8_4_ = (uint)uStack_40;
    auVar13._12_4_ = uStack_40._4_4_;
    uStack_38 = auVar13._8_8_;
    bVar3 = uStack_48._4_4_ < iVar10;
    iVar10 = uStack_48._4_4_;
    uStack_58 = plVar8;
    uStack_48 = puStack_20;
    uStack_40 = uVar7;
    plStack_30 = plVar8;
    if (bVar3) {
      do {
        TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
        ::Emplace<TTuple<FName,FString>_const_&>
                  (param_2,auStackX_8,(longlong)iVar10 * 0x20 + *uStack_58,0);
        uStack_40 = CONCAT44(uStack_40._4_4_,(uint)uStack_40 & ~uStack_50._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
        bVar3 = uStack_40._4_4_ < (int)uStack_48[6];
        iVar10 = uStack_40._4_4_;
      } while (bVar3);
    }
  }
  auVar14._0_8_ =
       ((double)*(int *)(lVar1 + 0xc0) / (double)*(int *)(lVar1 + 0xc4)) *
       (double)*(int *)(lVar1 + 0xb8);
  lVar11 = (longlong)auVar14._0_8_;
  if (0.0 <= auVar14._0_8_) {
    if ((lVar11 == -0x8000000000000000) || ((double)lVar11 == auVar14._0_8_)) goto LAB_140845591;
    auVar15._8_8_ = auVar14._0_8_;
    auVar15._0_8_ = auVar14._0_8_;
    uVar5 = movmskpd(0,auVar15);
    uVar7 = -(ulonglong)(uVar5 & 1);
  }
  else {
    if ((lVar11 == -0x8000000000000000) || ((double)lVar11 == auVar14._0_8_)) goto LAB_140845591;
    auVar14._8_8_ = auVar14._0_8_;
    uVar5 = movmskpd(0,auVar14);
    uVar7 = (ulonglong)(uVar5 & 1 ^ 1);
  }
  auVar14._0_8_ = (double)(longlong)(lVar11 + uVar7);
LAB_140845591:
  uVar2 = *(undefined8 *)(lVar1 + 0xc0);
  auStackX_8[0] = (int)auVar14._0_8_ + *(int *)(lVar1 + 0xbc);
  auStackX_8[1] = 0;
  uStack_68 = (ulonglong)auStackX_8[0];
  uStack_60 = uVar2;
  plVar8 = (longlong *)FTimecode::FromFrameNumber(&uStack_58,&uStack_68,&uStack_60,0);
  lVar1 = plVar8[1];
  param_2[10] = *plVar8;
  param_2[0xb] = lVar1;
  lVar1 = plVar8[2];
  *(undefined8 *)((longlong)param_2 + 100) = uVar2;
  *(int *)(param_2 + 0xc) = (int)lVar1;
  return;
}



// FUNCTION 140844e30 FUN_140844e30 body=104 status=ok
// SIG undefined FUN_140844e30(void)

void FUN_140844e30(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_18;
  longlong local_10;
  
  local_18 = *(longlong *)(param_1 + 8);
  if (local_18 != 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    if ((iVar1 < 0) || (*(int *)(local_18 + 0x50) <= iVar1)) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = *(undefined4 *)(*(longlong *)(local_18 + 0x18) + (longlong)iVar1 * 4);
    }
    local_10 = *(longlong *)(param_1 + 0x10);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    FLiveLinkSourceHandle::SetSourcePointer(param_2,&local_18);
    *(undefined4 *)(param_2 + 0x18) = uVar2;
  }
  return;
}



// FUNCTION 140844ea0 FUN_140844ea0 body=7 status=ok
// SIG undefined FUN_140844ea0(void)

undefined4 FUN_140844ea0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x90);
}



// FUNCTION 140844ec0 FUN_140844ec0 body=139 status=ok
// SIG undefined FUN_140844ec0(void)

void FUN_140844ec0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *(undefined8 *)(param_1 + 8);
  local_10 = *(longlong *)(param_1 + 0x10);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FLiveLinkSourceHandle::SetSourcePointer(param_2,&local_18);
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    piVar2 = *(int **)(lVar1 + 0x18);
    for (piVar3 = piVar2; piVar3 != piVar2 + *(int *)(lVar1 + 0x20); piVar3 = piVar3 + 1) {
      if (*piVar3 < 0) {
        *(int *)(param_2 + 0x18) = (int)((longlong)piVar3 - (longlong)piVar2 >> 2);
        return;
      }
    }
    *(undefined4 *)(param_2 + 0x18) = 0xffffffff;
  }
  return;
}



// FUNCTION 140844f60 FUN_140844f60 body=306 status=ok
// SIG undefined FUN_140844f60(void)

undefined8 * FUN_140844f60(longlong param_1,undefined8 *param_2,int *param_3)

{
  int *piVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  int *piVar8;
  longlong *plVar9;
  uint uStackX_c;
  
  piVar1 = *(int **)(param_1 + 0x130);
  plVar5 = (longlong *)0x0;
  piVar8 = piVar1;
  do {
    if (piVar8 == piVar1 + (longlong)*(int *)(param_1 + 0x138) * 4) {
LAB_140844fea:
      bVar2 = false;
      plVar6 = (longlong *)((ulonglong)uStackX_c << 0x20);
      plVar9 = plVar5;
LAB_140844ff7:
      *param_2 = plVar9;
      param_2[1] = plVar5;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      if ((bVar2) && (plVar6 != (longlong *)0x0)) {
        LOCK();
        plVar5 = plVar6 + 1;
        lVar3 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
      return param_2;
    }
    if (((piVar8[1] == param_3[1] && piVar8[2] == param_3[2]) && piVar8[3] == param_3[3]) &&
        *piVar8 == *param_3) {
      iVar7 = (int)((longlong)piVar8 - (longlong)piVar1 >> 4);
      if (iVar7 != -1) {
        puVar4 = (undefined8 *)((longlong)iVar7 * 0x10 + *(longlong *)(param_1 + 0x120));
        plVar5 = (longlong *)puVar4[1];
        plVar9 = (longlong *)*puVar4;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        bVar2 = true;
        plVar6 = plVar5;
        goto LAB_140844ff7;
      }
      goto LAB_140844fea;
    }
    piVar8 = piVar8 + 4;
  } while( true );
}



// FUNCTION 1408450a0 GetPropertyTooltip body=26 status=ok
// SIG undefined GetPropertyTooltip(void)

undefined8 UPropertyValue::GetPropertyTooltip(undefined8 param_1,undefined8 param_2)

{
  FText::FText(param_2);
  return param_2;
}



// FUNCTION 1408450c0 FUN_1408450c0 body=61 status=ok
// SIG undefined FUN_1408450c0(void)

undefined8 FUN_1408450c0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_2 + 8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
    return param_1;
  }
  uVar2 = FUN_1404b03b0();
  FText::FText(param_1,uVar2);
  return param_1;
}



// FUNCTION 140845100 GetWidgetVisibilityText body=30 status=ok
// SIG undefined GetWidgetVisibilityText(void)

undefined8
FSnapshotWidgetReflectorNode::GetWidgetVisibilityText(longlong param_1,undefined8 param_2)

{
  FText::FText(param_2,param_1 + 0x70);
  return param_2;
}



// FUNCTION 140845120 FUN_140845120 body=61 status=ok
// SIG undefined FUN_140845120(void)

undefined8 FUN_140845120(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_2 + 8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x40))(plVar1,param_1);
    return param_1;
  }
  uVar2 = FUN_1404b03b0();
  FText::FText(param_1,uVar2);
  return param_1;
}



// FUNCTION 140845160 GetSourceType body=47 status=ok
// SIG undefined GetSourceType(void)

undefined8 FLiveLinkVirtualSubjectSource::GetSourceType(undefined8 param_1,undefined8 param_2)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (param_2,L"Virtual Subjects",L"TempLocTextLiveLink",L"LiveLinkVirtualSubjectName");
  return param_2;
}



// FUNCTION 140845190 FUN_140845190 body=61 status=ok
// SIG undefined FUN_140845190(void)

undefined8 FUN_140845190(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_2 + 8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,param_1);
    return param_1;
  }
  uVar2 = FUN_1404b03b0();
  FText::FText(param_1,uVar2);
  return param_1;
}



// FUNCTION 1408451d0 FUN_1408451d0 body=453 status=ok
// SIG undefined FUN_1408451d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1408451d0(longlong param_1,undefined8 param_2,undefined1 *param_3,longlong param_4)

{
  longlong **pplVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *plStack_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  *param_3 = 0;
  cVar6 = FUN_1408469c0();
  if (cVar6 != '\0') {
    lVar7 = (**(code **)(**(longlong **)(param_1 + 400) + 0x38))
                      (*(longlong **)(param_1 + 400),param_2);
    if (lVar7 != 0) {
      local_40 = (longlong *)operator_new(0x150);
      if (local_40 == (longlong *)0x0) {
        local_40 = (longlong *)0x0;
      }
      else {
        *(undefined4 *)(local_40 + 1) = 1;
        *(undefined4 *)((longlong)local_40 + 0xc) = 1;
        *local_40 = (longlong)&PTR_FUN_14410cc28;
        FUN_14083d180(local_40 + 2,lVar7);
      }
      local_48 = local_40 + 2;
      SharedPointerInternals::EnableSharedFromThis(&local_48,local_48,local_48);
      plVar5 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
      }
      local_58 = local_48;
      pplVar1 = (longlong **)(param_4 + 8);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
      }
      plVar8 = local_40;
      if (&local_58 != pplVar1) {
        local_58 = *pplVar1;
        plVar8 = *(longlong **)(param_4 + 0x10);
        local_38 = local_48;
        plStack_30 = local_40;
        *pplVar1 = local_48;
        *(longlong **)(param_4 + 0x10) = local_40;
      }
      plStack_50 = plVar8;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar8 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar3 = (int *)((longlong)plVar8 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_50 + 8))(plStack_50,1);
          }
        }
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar5 + 1;
        lVar7 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      plVar5 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_40 + 1;
        lVar7 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      *param_3 = 1;
    }
  }
  return;
}



// FUNCTION 1408453a0 FUN_1408453a0 body=599 status=ok
// SIG undefined FUN_1408453a0(void)

void FUN_1408453a0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  undefined1 auVar3 [12];
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  uint *puVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  uint local_res8 [2];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *local_30;
  undefined8 uStack_28;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  plVar7 = (longlong *)(param_1 + 0x68);
  if (param_2 != plVar7) {
    TSet<TTuple<FName,FNameArray>,TDefaultMapHashableKeyFuncs<FName,FNameArray,0>,FDefaultSetAllocator>
    ::Empty(param_2,*(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x9c));
    iVar9 = *(int *)(param_1 + 0x90);
    puStack_20 = (uint *)(param_1 + 0x78);
    local_58 = (longlong *)0x100000000;
    iVar8 = 0;
    uStack_40 = uStack_40 & 0xffffffff00000000;
    local_48._4_4_ = 0;
    if (iVar9 != 0) {
      puVar11 = *(uint **)(param_1 + 0x88);
      if (*(uint **)(param_1 + 0x88) == (uint *)0x0) {
        puVar11 = puStack_20;
      }
      uVar4 = *puVar11;
      iVar5 = 0;
      while (uVar4 == 0) {
        iVar8 = iVar8 + 0x20;
        uStack_40._4_4_ = (int)(uStack_40 >> 0x20);
        uStack_40 = CONCAT44(uStack_40._4_4_,iVar8);
        uVar6 = (ulonglong)local_58 >> 0x20;
        local_58 = (longlong *)CONCAT44((int)uVar6,iVar5 + 1);
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_14084547d;
        uVar4 = puVar11[(longlong)iVar5 + 1];
        iVar5 = iVar5 + 1;
      }
      uVar4 = -uVar4 & uVar4;
      iVar5 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      local_58 = (longlong *)CONCAT44(uVar4,SUB84(local_58,0));
      if (uVar4 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      local_48._4_4_ = (iVar8 - iVar5) + 0x1f;
      if (iVar9 < local_48._4_4_) {
LAB_14084547d:
        local_48._4_4_ = iVar9;
      }
    }
    uStack_18 = 0xffffffff;
    iStack_14 = local_48._4_4_;
    uStack_10 = (uint)uStack_40;
    uStack_c = uStack_40._4_4_;
    uStack_28 = local_58;
    uVar6 = CONCAT44(local_48._4_4_,0xffffffff);
    uStack_50 = local_58;
    auVar3._4_8_ = local_58;
    auVar3._0_4_ = local_48._4_4_;
    auVar12._0_8_ = auVar3._0_8_ << 0x20;
    auVar12._8_4_ = (uint)uStack_40;
    auVar12._12_4_ = uStack_40._4_4_;
    local_38 = auVar12._8_8_;
    bVar2 = local_48._4_4_ < iVar9;
    iVar9 = local_48._4_4_;
    local_58 = plVar7;
    local_48 = puStack_20;
    uStack_40 = uVar6;
    local_30 = plVar7;
    if (bVar2) {
      do {
        TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
        ::Emplace<TTuple<FName,FString>_const_&>
                  (param_2,local_res8,(longlong)iVar9 * 0x20 + *local_58,0);
        uStack_40 = CONCAT44(uStack_40._4_4_,(uint)uStack_40 & ~uStack_50._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
        bVar2 = uStack_40._4_4_ < (int)local_48[6];
        iVar9 = uStack_40._4_4_;
      } while (bVar2);
    }
  }
  auVar13._0_8_ =
       ((double)*(int *)(param_1 + 0xc0) / (double)*(int *)(param_1 + 0xc4)) *
       (double)*(int *)(param_1 + 0xb8);
  lVar10 = (longlong)auVar13._0_8_;
  if (0.0 <= auVar13._0_8_) {
    if ((lVar10 == -0x8000000000000000) || ((double)lVar10 == auVar13._0_8_)) goto LAB_140845591;
    auVar14._8_8_ = auVar13._0_8_;
    auVar14._0_8_ = auVar13._0_8_;
    uVar4 = movmskpd(0,auVar14);
    uVar6 = -(ulonglong)(uVar4 & 1);
  }
  else {
    if ((lVar10 == -0x8000000000000000) || ((double)lVar10 == auVar13._0_8_)) goto LAB_140845591;
    auVar13._8_8_ = auVar13._0_8_;
    uVar4 = movmskpd(0,auVar13);
    uVar6 = (ulonglong)(uVar4 & 1 ^ 1);
  }
  auVar13._0_8_ = (double)(longlong)(lVar10 + uVar6);
LAB_140845591:
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  local_res8[0] = (int)auVar13._0_8_ + *(int *)(param_1 + 0xbc);
  local_res8[1] = 0;
  local_68 = (ulonglong)local_res8[0];
  local_60 = uVar1;
  plVar7 = (longlong *)FTimecode::FromFrameNumber(&local_58,&local_68,&local_60,0);
  lVar10 = plVar7[1];
  param_2[10] = *plVar7;
  param_2[0xb] = lVar10;
  lVar10 = plVar7[2];
  *(undefined8 *)((longlong)param_2 + 100) = uVar1;
  *(int *)(param_2 + 0xc) = (int)lVar10;
  return;
}



// FUNCTION 140845600 FUN_140845600 body=1164 status=ok
// SIG undefined FUN_140845600(void)

longlong * FUN_140845600(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  BOOL BVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  uint uVar18;
  uint *puVar19;
  int local_a8;
  uint uStack_a4;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int iStack_80;
  uint uStack_7c;
  uint *local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 uStack_40;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x168);
  iVar13 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  BVar11 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar11 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (*(int *)((longlong)param_2 + 0xc) <
      ((*(int *)(param_1 + 0x78) - *(int *)(param_1 + 0xa4)) - *(int *)(param_1 + 0x54)) +
      *(int *)(param_1 + 0x28)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_2);
  }
  plVar16 = (longlong *)(param_1 + 0x70);
  uStack_a4 = 1;
  uVar3 = *(uint *)(param_1 + 0x98);
  puVar1 = (uint *)(param_1 + 0x80);
  local_a8 = 0;
  uStack_94 = 0;
  iStack_90 = 0;
  if (uVar3 != 0) {
    puVar19 = *(uint **)(param_1 + 0x90);
    if (*(uint **)(param_1 + 0x90) == (uint *)0x0) {
      puVar19 = puVar1;
    }
    uVar4 = *puVar19;
    iStack_90 = iVar13;
    local_a8 = iVar13;
    while (uVar4 == 0) {
      lVar15 = (longlong)local_a8;
      iStack_90 = iStack_90 + 0x20;
      iVar12 = local_a8 + 1;
      bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar12;
      if (bVar6) goto LAB_14084571f;
      uVar4 = puVar19[lVar15 + 1];
    }
    uStack_a4 = -uVar4 & uVar4;
    iVar12 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar12 = 0x20;
    }
    else {
      iVar12 = 0x1f - iVar12;
    }
    uStack_94 = (iStack_90 - iVar12) + 0x1f;
    if ((int)uVar3 < (int)uStack_94) {
LAB_14084571f:
      uStack_94 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x98);
  uStack_70 = 0xffffffff;
  uStack_6c = uStack_94;
  local_68 = CONCAT44(uStack_8c,iStack_90);
  uStack_58 = CONCAT44(uStack_a4,local_a8);
  uVar18 = uVar4 & 0xffffffe0;
  iStack_80 = local_a8;
  uStack_7c = uStack_a4;
  local_78 = puVar1;
  local_60 = plVar16;
  puStack_50 = puVar1;
  uStack_40 = local_68;
  uStack_48 = uStack_70;
  uStack_44 = uStack_6c;
  uStack_94 = uVar4;
  if (uVar4 != uVar3) {
    puVar19 = *(uint **)(param_1 + 0x90);
    if (*(uint **)(param_1 + 0x90) == (uint *)0x0) {
      puVar19 = puVar1;
    }
    uVar14 = puVar19[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar12 = (int)uVar4 >> 5;
    while (uVar14 == 0) {
      uVar18 = uVar18 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar12)
      goto LAB_1408457f6;
      uVar14 = puVar19[(longlong)iVar12 + 1];
      iVar12 = iVar12 + 1;
    }
    uVar14 = -uVar14 & uVar14;
    iVar12 = 0x1f;
    if (uVar14 != 0) {
      for (; uVar14 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar14 == 0) {
      iVar12 = 0x20;
    }
    else {
      iVar12 = 0x1f - iVar12;
    }
    uStack_94 = (uVar18 - iVar12) + 0x1f;
    if ((int)uVar3 < (int)uStack_94) {
LAB_1408457f6:
      uStack_94 = uVar3;
    }
  }
  while ((uStack_6c != uStack_94 || (local_78 != puVar1))) {
    iVar12 = (int)param_2[1];
    puVar17 = (undefined8 *)((longlong)(int)uStack_6c * 0x90 + *plVar16);
    *(int *)(param_2 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar12 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_2,iVar12);
    }
    uVar7 = *(undefined4 *)((longlong)puVar17 + 0x3c);
    uVar8 = *(undefined4 *)(puVar17 + 8);
    uVar9 = *(undefined4 *)((longlong)puVar17 + 0x44);
    uVar10 = *(undefined4 *)(puVar17 + 9);
    puVar2 = (undefined8 *)(*param_2 + (longlong)iVar12 * 0x18);
    *puVar2 = *puVar17;
    uStack_70 = uStack_70 & ~uStack_7c;
    *(undefined4 *)(puVar2 + 1) = uVar7;
    *(undefined4 *)((longlong)puVar2 + 0xc) = uVar8;
    *(undefined4 *)(puVar2 + 2) = uVar9;
    *(undefined4 *)((longlong)puVar2 + 0x14) = uVar10;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
  }
  LeaveCriticalSection(lpCriticalSection);
  plVar16 = (longlong *)(param_1 + 0x20);
  local_a8 = 0;
  uVar3 = *(uint *)(param_1 + 0x48);
  puVar1 = (uint *)(param_1 + 0x30);
  uStack_a4 = 1;
  uStack_94 = 0;
  iStack_90 = 0;
  if (uVar3 != 0) {
    puVar19 = *(uint **)(param_1 + 0x40);
    if (*(uint **)(param_1 + 0x40) == (uint *)0x0) {
      puVar19 = puVar1;
    }
    uVar4 = *puVar19;
    iStack_90 = iVar13;
    local_a8 = iVar13;
    while (uVar4 == 0) {
      lVar15 = (longlong)local_a8;
      iStack_90 = iStack_90 + 0x20;
      iVar13 = local_a8 + 1;
      bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar13;
      if (bVar6) goto LAB_14084592f;
      uVar4 = puVar19[lVar15 + 1];
    }
    uStack_a4 = -uVar4 & uVar4;
    iVar13 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - iVar13;
    }
    uStack_94 = (iStack_90 - iVar13) + 0x1f;
    if ((int)uVar3 < (int)uStack_94) {
LAB_14084592f:
      uStack_94 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x48);
  uStack_70 = 0xffffffff;
  uStack_6c = uStack_94;
  local_68 = CONCAT44(uStack_8c,iStack_90);
  uStack_58 = CONCAT44(uStack_a4,local_a8);
  uVar18 = uVar4 & 0xffffffe0;
  iStack_80 = local_a8;
  uStack_7c = uStack_a4;
  local_78 = puVar1;
  local_60 = plVar16;
  puStack_50 = puVar1;
  uStack_40 = local_68;
  uStack_48 = uStack_70;
  uStack_44 = uStack_6c;
  uStack_94 = uVar4;
  if (uVar4 != uVar3) {
    puVar19 = *(uint **)(param_1 + 0x40);
    if (*(uint **)(param_1 + 0x40) == (uint *)0x0) {
      puVar19 = puVar1;
    }
    uVar14 = puVar19[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar13 = (int)uVar4 >> 5;
    while (uVar14 == 0) {
      uVar18 = uVar18 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar13)
      goto LAB_1408459f7;
      uVar14 = puVar19[(longlong)iVar13 + 1];
      iVar13 = iVar13 + 1;
    }
    uVar14 = -uVar14 & uVar14;
    iVar13 = 0x1f;
    if (uVar14 != 0) {
      for (; uVar14 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar14 == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - iVar13;
    }
    uStack_94 = (uVar18 - iVar13) + 0x1f;
    if ((int)uVar3 < (int)uStack_94) {
LAB_1408459f7:
      uStack_94 = uVar3;
    }
  }
  while ((lVar15 = (longlong)(int)uStack_6c, uStack_6c != uStack_94 || (local_78 != puVar1))) {
    iVar13 = (int)param_2[1];
    lVar5 = *plVar16;
    *(int *)(param_2 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar13 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_2,iVar13);
    }
    puVar17 = (undefined8 *)(*param_2 + (longlong)iVar13 * 0x18);
    uVar7 = *(undefined4 *)(param_1 + 0x1c0);
    uVar8 = *(undefined4 *)(param_1 + 0x1c4);
    uVar9 = *(undefined4 *)(param_1 + 0x1c8);
    uVar10 = *(undefined4 *)(param_1 + 0x1cc);
    *puVar17 = *(undefined8 *)(lVar15 * 0x70 + lVar5);
    uStack_70 = uStack_70 & ~uStack_7c;
    *(undefined4 *)(puVar17 + 1) = uVar7;
    *(undefined4 *)((longlong)puVar17 + 0xc) = uVar8;
    *(undefined4 *)(puVar17 + 2) = uVar9;
    *(undefined4 *)((longlong)puVar17 + 0x14) = uVar10;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
  }
  return param_2;
}



// FUNCTION 140845a90 FUN_140845a90 body=69 status=ok
// SIG undefined FUN_140845a90(void)

void FUN_140845a90(longlong param_1,undefined4 param_2,longlong param_3)

{
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *(undefined8 *)(param_1 + 8);
  local_10 = *(longlong *)(param_1 + 0x10);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FLiveLinkSourceHandle::SetSourcePointer(param_3,&local_18);
  *(undefined4 *)(param_3 + 0x18) = param_2;
  return;
}



// FUNCTION 140845ae0 FUN_140845ae0 body=119 status=ok
// SIG undefined FUN_140845ae0(void)

void FUN_140845ae0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 local_18;
  longlong local_10;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 8);
  plVar3 = plVar1;
  do {
    if (plVar3 == plVar1 + *(int *)(*(longlong *)(param_1 + 8) + 0x10)) {
      uVar2 = 0xffffffff;
LAB_140845b18:
      local_18 = *(undefined8 *)(param_1 + 8);
      local_10 = *(longlong *)(param_1 + 0x10);
      if (local_10 != 0) {
        LOCK();
        *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
        UNLOCK();
      }
      FLiveLinkSourceHandle::SetSourcePointer(param_3,&local_18);
      *(undefined4 *)(param_3 + 0x18) = uVar2;
      return;
    }
    if (*plVar3 == param_2) {
      uVar2 = (undefined4)((longlong)plVar3 - (longlong)plVar1 >> 3);
      goto LAB_140845b18;
    }
    plVar3 = plVar3 + 1;
  } while( true );
}



// FUNCTION 140845b60 FUN_140845b60 body=1659 status=ok
// SIG undefined FUN_140845b60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140845b60(longlong param_1,int param_2,float *param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  int iVar12;
  char *pcVar13;
  float *pfVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar18 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
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
  undefined1 auStack_178 [48];
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
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  ulonglong local_c8;
  
  uVar6 = uRam00000001468b5b78;
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  *(undefined8 *)param_3 = _DAT_1468b5b70;
  *(undefined8 *)(param_3 + 2) = uVar6;
  uVar6 = uRam00000001468b5b88;
  *(undefined8 *)(param_3 + 4) = _DAT_1468b5b80;
  *(undefined8 *)(param_3 + 6) = uVar6;
  uVar6 = uRam00000001468b5b98;
  *(undefined8 *)(param_3 + 8) = _DAT_1468b5b90;
  *(undefined8 *)(param_3 + 10) = uVar6;
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x50))) {
    pcVar13 = (char *)((longlong)param_2 * 0x40 + *(longlong *)(param_1 + 200));
    if (*pcVar13 == '\0') {
      local_d8 = (float)((uint)_DAT_14685ed60 & _DAT_14685ed70);
      fStack_d4 = (float)((uint)fRam000000014685ed64 & uRam000000014685ed74);
      fStack_d0 = (float)((uint)fRam000000014685ed68 & uRam000000014685ed78);
      fStack_cc = (float)((uint)fRam000000014685ed6c & uRam000000014685ed7c);
      pfVar14 = (float *)((longlong)param_2 * 0x30 + *(longlong *)(param_1 + 0x48));
      local_f8 = 0.0;
      fStack_f4 = 0.0;
      fStack_f0 = 0.0;
      fStack_ec = fRam000000014685ed6c;
      local_e8 = 0;
      uStack_e0 = 0;
      uVar11 = FUN_140845b60(param_1,0,&local_f8);
      fVar10 = fStack_cc;
      fVar9 = fStack_d0;
      fVar8 = fStack_d4;
      fVar7 = local_d8;
      fVar32 = fRam000000014685ede8;
      fVar31 = fRam000000014685ede4;
      fVar22 = _DAT_14685ede0;
      fVar50 = fRam000000014685ed68;
      fVar49 = fRam000000014685ed64;
      fVar48 = _DAT_14685ed60;
      auVar1 = *(undefined1 (*) [16])(pfVar14 + 8);
      fVar2 = auVar1._0_4_;
      fVar3 = auVar1._4_4_;
      fVar4 = auVar1._8_4_;
      auVar15._4_4_ = fStack_d4;
      auVar15._0_4_ = local_d8;
      auVar15._8_4_ = fStack_d0;
      auVar15._12_4_ = fStack_cc;
      auVar15 = minps(auVar1,auVar15);
      auVar16._4_4_ = -(uint)(auVar15._4_4_ < fRam000000014685ede4);
      auVar16._0_4_ = -(uint)(auVar15._0_4_ < _DAT_14685ede0);
      auVar16._8_4_ = -(uint)(auVar15._8_4_ < fRam000000014685ede8);
      auVar16._12_4_ = -(uint)(auVar15._12_4_ < fRam000000014685edec);
      iVar12 = movmskps(uVar11,auVar16);
      if (iVar12 == 0) {
        fVar48 = *pfVar14;
        fVar49 = pfVar14[1];
        fVar50 = pfVar14[2];
        fVar22 = pfVar14[3];
        local_d8 = pfVar14[4] * local_d8;
        fStack_d4 = pfVar14[5] * fStack_d4;
        fStack_d0 = pfVar14[6] * fStack_d0;
        fStack_cc = pfVar14[7] * fStack_cc;
        fVar31 = fVar22 * local_f8 * _DAT_14685eda0 + fStack_ec * fVar48 +
                 fVar50 * fStack_f4 * _DAT_14685ed90 + fVar49 * fStack_f0 * _DAT_14685ed80;
        fVar32 = fVar50 * local_f8 * fRam000000014685eda4 + fStack_ec * fVar49 +
                 fVar22 * fStack_f4 * fRam000000014685ed94 +
                 fVar48 * fStack_f0 * fRam000000014685ed84;
        fVar23 = fVar49 * local_f8 * fRam000000014685eda8 + fStack_ec * fVar50 +
                 fVar48 * fStack_f4 * fRam000000014685ed98 +
                 fVar22 * fStack_f0 * fRam000000014685ed88;
        fVar24 = fVar48 * local_f8 * fRam000000014685edac + fStack_ec * fVar22 +
                 fVar49 * fStack_f4 * fRam000000014685ed9c +
                 fVar50 * fStack_f0 * fRam000000014685ed8c;
        fVar48 = fStack_d0 * fStack_f4 - fStack_d4 * fStack_f0;
        fVar49 = local_d8 * fStack_f0 - fStack_d0 * local_f8;
        fVar50 = fStack_d4 * local_f8 - local_d8 * fStack_f4;
        fVar22 = fStack_cc * fStack_ec - fStack_cc * fStack_ec;
        fVar48 = fVar48 + fVar48;
        fVar49 = fVar49 + fVar49;
        fVar50 = fVar50 + fVar50;
        fVar22 = fVar22 + fVar22;
        local_118 = (fVar50 * fStack_f4 - fVar49 * fStack_f0) + fStack_ec * fVar48 + local_d8 +
                    (float)local_e8;
        fStack_114 = (fVar48 * fStack_f0 - fVar50 * local_f8) + fStack_ec * fVar49 + fStack_d4 +
                     local_e8._4_4_;
        fStack_110 = (fVar49 * local_f8 - fVar48 * fStack_f4) + fStack_ec * fVar50 + fStack_d0 +
                     (float)uStack_e0;
        uStack_e0._4_4_ =
             (fVar22 * fStack_ec - fVar22 * fStack_ec) + fStack_ec * fVar22 + fStack_cc +
             uStack_e0._4_4_;
      }
      else {
        fVar23 = fStack_f4 + fStack_f4;
        fVar27 = fStack_f0 + fStack_f0;
        fVar45 = fVar2 * local_d8;
        fVar46 = fVar3 * fStack_d4;
        fVar47 = fVar4 * fStack_d0;
        fVar29 = (local_f8 + local_f8) * local_f8;
        fVar24 = (local_f8 + local_f8) * fStack_ec;
        fVar42 = (fVar27 * fStack_ec + fVar23 * local_f8) * local_d8;
        fVar43 = (fVar24 + fVar27 * fStack_f4) * fStack_d4;
        fVar44 = (fVar23 * fStack_ec + fVar27 * local_f8) * fStack_d0;
        fVar33 = fStack_d4 * (fVar23 * local_f8 - fVar27 * fStack_ec);
        fVar35 = fStack_d0 * (fVar27 * fStack_f4 - fVar24);
        fVar37 = local_d8 * (fVar27 * local_f8 - fVar23 * fStack_ec);
        fVar17 = (float)((uint)((_DAT_14685ed60 - (fVar27 * fStack_f0 + fVar23 * fStack_f4)) *
                               local_d8) & _DAT_14685ed70);
        fVar19 = (float)((uint)((fRam000000014685ed64 - (fVar27 * fStack_f0 + fVar29)) * fStack_d4)
                        & uRam000000014685ed74);
        fVar20 = (float)((uint)((fRam000000014685ed68 - (fVar23 * fStack_f4 + fVar29)) * fStack_d0)
                        & uRam000000014685ed78);
        fVar21 = (float)((uint)((fRam000000014685ed6c - (fVar29 + fVar29)) * fStack_cc) &
                        uRam000000014685ed7c);
        fVar23 = *pfVar14;
        fVar24 = pfVar14[1];
        fVar27 = pfVar14[2];
        fVar29 = pfVar14[3];
        fVar25 = fVar24 + fVar24;
        fVar28 = fVar27 + fVar27;
        fVar30 = fVar23 * (fVar23 + fVar23);
        fVar26 = (fVar23 + fVar23) * fVar29;
        fVar39 = (fVar28 * fVar29 + fVar25 * fVar23) * fVar2;
        fVar40 = (fVar26 + fVar28 * fVar24) * fVar3;
        fVar41 = (fVar25 * fVar29 + fVar28 * fVar23) * fVar4;
        fVar34 = fVar3 * (fVar25 * fVar23 - fVar28 * fVar29);
        fVar36 = fVar4 * (fVar28 * fVar24 - fVar26);
        fVar38 = fVar2 * (fVar28 * fVar23 - fVar25 * fVar29);
        fVar29 = (float)((uint)((_DAT_14685ed60 - (fVar27 * fVar28 + fVar24 * fVar25)) * fVar2) &
                        _DAT_14685ed70);
        fVar26 = (float)((uint)((fRam000000014685ed64 - (fVar27 * fVar28 + fVar30)) * fVar3) &
                        uRam000000014685ed74);
        fVar25 = (float)((uint)((fRam000000014685ed68 - (fVar24 * fVar25 + fVar30)) * fVar4) &
                        uRam000000014685ed78);
        fVar28 = (float)((uint)((fRam000000014685ed6c - (fVar30 + fVar30)) * auVar1._12_4_) &
                        uRam000000014685ed7c);
        fVar23 = pfVar14[4];
        fVar24 = pfVar14[5];
        fVar27 = pfVar14[6];
        local_148 = fVar39 * fVar33 + fVar29 * fVar17 + fVar38 * fVar44 + fVar28 * (float)local_e8;
        fStack_144 = fVar39 * fVar19 + fVar29 * fVar42 + fVar38 * fVar35 + fVar28 * local_e8._4_4_;
        fStack_140 = fVar39 * fVar43 + fVar29 * fVar37 + fVar38 * fVar20 + fVar28 * (float)uStack_e0
        ;
        fStack_13c = fVar39 * fVar21 + fVar29 * fVar21 + fVar38 * fVar21 +
                     fVar28 * fRam000000014685ed6c;
        local_138 = fVar26 * fVar33 + fVar34 * fVar17 + fVar40 * fVar44 + fVar28 * (float)local_e8;
        fStack_134 = fVar26 * fVar19 + fVar34 * fVar42 + fVar40 * fVar35 + fVar28 * local_e8._4_4_;
        fStack_130 = fVar26 * fVar43 + fVar34 * fVar37 + fVar40 * fVar20 + fVar28 * (float)uStack_e0
        ;
        fStack_12c = fVar26 * fVar21 + fVar34 * fVar21 + fVar40 * fVar21 +
                     fVar28 * fRam000000014685ed6c;
        local_128 = fVar36 * fVar33 + fVar41 * fVar17 + fVar25 * fVar44 + fVar28 * (float)local_e8;
        fStack_124 = fVar36 * fVar19 + fVar41 * fVar42 + fVar25 * fVar35 + fVar28 * local_e8._4_4_;
        fStack_120 = fVar36 * fVar43 + fVar41 * fVar37 + fVar25 * fVar20 + fVar28 * (float)uStack_e0
        ;
        fStack_11c = fVar36 * fVar21 + fVar41 * fVar21 + fVar25 * fVar21 +
                     fVar28 * fRam000000014685ed6c;
        local_118 = fVar24 * fVar33 + fVar23 * fVar17 + fVar27 * fVar44 +
                    fRam000000014685ed6c * (float)local_e8;
        fStack_114 = fVar24 * fVar19 + fVar23 * fVar42 + fVar27 * fVar35 +
                     fRam000000014685ed6c * local_e8._4_4_;
        fStack_110 = fVar24 * fVar43 + fVar23 * fVar37 + fVar27 * fVar20 +
                     fRam000000014685ed6c * (float)uStack_e0;
        fStack_10c = fVar24 * fVar21 + fVar23 * fVar21 + fVar27 * fVar21 +
                     fRam000000014685ed6c * fRam000000014685ed6c;
        FMatrix::RemoveScaling(&local_148);
        fVar48 = (float)(-(uint)(fVar22 <= fVar45) & (_DAT_14685edd0 ^ (uint)fVar48) ^
                        _DAT_14685edd0);
        fVar49 = (float)(-(uint)(fVar31 <= fVar46) & (uRam000000014685edd4 ^ (uint)fVar49) ^
                        uRam000000014685edd4);
        fVar50 = (float)(-(uint)(fVar32 <= fVar47) & (uRam000000014685edd8 ^ (uint)fVar50) ^
                        uRam000000014685edd8);
        local_148 = local_148 * fVar48;
        fStack_144 = fStack_144 * fVar48;
        fStack_140 = fStack_140 * fVar48;
        fStack_134 = fStack_134 * fVar49;
        fStack_130 = fStack_130 * fVar49;
        local_138 = local_138 * fVar49;
        fStack_124 = fStack_124 * fVar50;
        fStack_120 = fStack_120 * fVar50;
        local_128 = local_128 * fVar50;
        FQuat::FQuat(&local_108,&local_148);
        auVar18._0_4_ = local_108 * local_108 + fStack_100 * fStack_100;
        auVar18._4_4_ = fStack_104 * fStack_104 + fStack_fc * fStack_fc;
        auVar18._8_4_ = fStack_100 * fStack_100 + local_108 * local_108;
        auVar18._12_4_ = fStack_fc * fStack_fc + fStack_104 * fStack_104;
        fVar31 = auVar18._4_4_ + auVar18._0_4_;
        fVar32 = auVar18._8_4_ + auVar18._4_4_;
        fVar23 = auVar18._12_4_ + auVar18._8_4_;
        fVar24 = auVar18._0_4_ + auVar18._12_4_;
        auVar5._4_4_ = fVar32;
        auVar5._0_4_ = fVar31;
        auVar5._8_4_ = fVar23;
        auVar5._12_4_ = fVar24;
        auVar15 = rsqrtps(auVar18,auVar5);
        fVar48 = auVar15._0_4_;
        fVar49 = auVar15._4_4_;
        fVar50 = auVar15._8_4_;
        fVar22 = auVar15._12_4_;
        fVar48 = (_DAT_14685edc0 - fVar48 * fVar48 * fVar31 * _DAT_14685edc0) * fVar48 + fVar48;
        fVar49 = (fRam000000014685edc4 - fVar49 * fVar49 * fVar32 * fRam000000014685edc4) * fVar49 +
                 fVar49;
        fVar50 = (fRam000000014685edc8 - fVar50 * fVar50 * fVar23 * fRam000000014685edc8) * fVar50 +
                 fVar50;
        fVar22 = (fRam000000014685edcc - fVar22 * fVar22 * fVar24 * fRam000000014685edcc) * fVar22 +
                 fVar22;
        uStack_e0._4_4_ = 0.0;
        fVar31 = (float)(((uint)(((_DAT_14685edc0 - fVar48 * fVar48 * fVar31 * _DAT_14685edc0) *
                                  fVar48 + fVar48) * local_108) ^ _DAT_14685edb0) &
                         -(uint)(1e-08 <= fVar31) ^ _DAT_14685edb0);
        fVar32 = (float)(((uint)(((fRam000000014685edc4 -
                                  fVar49 * fVar49 * fVar32 * fRam000000014685edc4) * fVar49 + fVar49
                                 ) * fStack_104) ^ uRam000000014685edb4) & -(uint)(1e-08 <= fVar32)
                        ^ uRam000000014685edb4);
        fVar23 = (float)(((uint)(((fRam000000014685edc8 -
                                  fVar50 * fVar50 * fVar23 * fRam000000014685edc8) * fVar50 + fVar50
                                 ) * fStack_100) ^ uRam000000014685edb8) & -(uint)(1e-08 <= fVar23)
                        ^ uRam000000014685edb8);
        fVar24 = (float)(((uint)(((fRam000000014685edcc -
                                  fVar22 * fVar22 * fVar24 * fRam000000014685edcc) * fVar22 + fVar22
                                 ) * fStack_fc) ^ uRam000000014685edbc) & -(uint)(1e-08 <= fVar24) ^
                        uRam000000014685edbc);
      }
      *param_3 = fVar31;
      param_3[1] = fVar32;
      param_3[2] = fVar23;
      param_3[3] = fVar24;
      param_3[4] = local_118;
      param_3[5] = fStack_114;
      param_3[6] = fStack_110;
      param_3[7] = uStack_e0._4_4_;
      param_3[8] = fVar2 * fVar7;
      param_3[9] = fVar3 * fVar8;
      param_3[10] = fVar4 * fVar9;
      param_3[0xb] = auVar1._12_4_ * fVar10;
      *pcVar13 = '\x01';
      uVar6 = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)(pcVar13 + 0x10) = *(undefined8 *)param_3;
      *(undefined8 *)(pcVar13 + 0x18) = uVar6;
      uVar6 = *(undefined8 *)(param_3 + 6);
      *(undefined8 *)(pcVar13 + 0x20) = *(undefined8 *)(param_3 + 4);
      *(undefined8 *)(pcVar13 + 0x28) = uVar6;
      uVar6 = *(undefined8 *)(param_3 + 10);
      *(undefined8 *)(pcVar13 + 0x30) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)(pcVar13 + 0x38) = uVar6;
    }
    else {
      uVar6 = *(undefined8 *)(pcVar13 + 0x18);
      *(undefined8 *)param_3 = *(undefined8 *)(pcVar13 + 0x10);
      *(undefined8 *)(param_3 + 2) = uVar6;
      uVar6 = *(undefined8 *)(pcVar13 + 0x28);
      *(undefined8 *)(param_3 + 4) = *(undefined8 *)(pcVar13 + 0x20);
      *(undefined8 *)(param_3 + 6) = uVar6;
      uVar6 = *(undefined8 *)(pcVar13 + 0x38);
      *(undefined8 *)(param_3 + 8) = *(undefined8 *)(pcVar13 + 0x30);
      *(undefined8 *)(param_3 + 10) = uVar6;
    }
  }
  return;
}



// FUNCTION 1408461e0 FUN_1408461e0 body=85 status=ok
// SIG undefined FUN_1408461e0(void)

void FUN_1408461e0(longlong param_1,undefined8 *param_2)

{
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  *(double *)(param_1 + 0x90) = (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
                    /* WARNING: Could not recover jumptable at 0x000140846231. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8),*param_2);
  return;
}



// FUNCTION 140846240 FUN_140846240 body=60 status=ok
// SIG undefined FUN_140846240(void)

void FUN_140846240(longlong param_1)

{
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  *(double *)(param_1 + 0x90) = (double)local_res8[0].QuadPart * DAT_1468b02f8 + 16777216.0;
  return;
}



// FUNCTION 140846280 HandleMessage body=161 status=ok
// SIG undefined HandleMessage(void)

void TRawMessageHandler<FLiveLinkClearSubject,FLiveLinkMessageBusSource>::HandleMessage
               (longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = FLiveLinkClearSubject::StaticStruct();
  if (lVar3 == 0) {
    return;
  }
  lVar3 = *(longlong *)(lVar3 + 0x18);
  plVar1 = (longlong *)*param_2;
  lVar4 = (**(code **)(*plVar1 + 0x18))(plVar1);
  if (lVar4 != 0) {
    uVar5 = (**(code **)(*plVar1 + 0x20))(plVar1);
    cVar2 = FWeakObjectPtr::IsValid(uVar5,0,1);
    if (cVar2 != '\0') {
      uVar5 = (**(code **)(*plVar1 + 0x20))(plVar1);
      lVar4 = FWeakObjectPtr::Get(uVar5);
      lVar4 = *(longlong *)(lVar4 + 0x18);
      goto LAB_1408462f1;
    }
  }
  lVar4 = 0;
LAB_1408462f1:
  if (lVar4 == lVar3) {
    uVar5 = (**(code **)(*(longlong *)*param_2 + 0x18))();
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8),uVar5,param_2);
  }
  return;
}



// FUNCTION 140846330 HandleMessage body=161 status=ok
// SIG undefined HandleMessage(void)

void TRawMessageHandler<FLiveLinkHeartbeatMessage,FLiveLinkMessageBusSource>::HandleMessage
               (longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = FLiveLinkHeartbeatMessage::StaticStruct();
  if (lVar3 == 0) {
    return;
  }
  lVar3 = *(longlong *)(lVar3 + 0x18);
  plVar1 = (longlong *)*param_2;
  lVar4 = (**(code **)(*plVar1 + 0x18))(plVar1);
  if (lVar4 != 0) {
    uVar5 = (**(code **)(*plVar1 + 0x20))(plVar1);
    cVar2 = FWeakObjectPtr::IsValid(uVar5,0,1);
    if (cVar2 != '\0') {
      uVar5 = (**(code **)(*plVar1 + 0x20))(plVar1);
      lVar4 = FWeakObjectPtr::Get(uVar5);
      lVar4 = *(longlong *)(lVar4 + 0x18);
      goto LAB_1408463a1;
    }
  }
  lVar4 = 0;
LAB_1408463a1:
  if (lVar4 == lVar3) {
    uVar5 = (**(code **)(*(longlong *)*param_2 + 0x18))();
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8),uVar5,param_2);
  }
  return;
}



// FUNCTION 1408463e0 HandleMessage body=161 status=ok
// SIG undefined HandleMessage(void)

void TRawMessageHandler<FLiveLinkPongMessage,FLiveLinkMessageBusDiscoveryManager>::HandleMessage
               (longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = FLiveLinkPongMessage::StaticStruct();
  if (lVar3 == 0) {
    return;
  }
  lVar3 = *(longlong *)(lVar3 + 0x18);
  plVar1 = (longlong *)*param_2;
  lVar4 = (**(code **)(*plVar1 + 0x18))(plVar1);
  if (lVar4 != 0) {
    uVar5 = (**(code **)(*plVar1 + 0x20))(plVar1);
    cVar2 = FWeakObjectPtr::IsValid(uVar5,0,1);
    if (cVar2 != '\0') {
      uVar5 = (**(code **)(*plVar1 + 0x20))(plVar1);
      lVar4 = FWeakObjectPtr::Get(uVar5);
      lVar4 = *(longlong *)(lVar4 + 0x18);
      goto LAB_140846451;
    }
  }
  lVar4 = 0;
LAB_140846451:
  if (lVar4 == lVar3) {
    uVar5 = (**(code **)(*(longlong *)*param_2 + 0x18))();
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8),uVar5,param_2);
  }
  return;
}



// FUNCTION 140846490 HandleMessage body=161 status=ok
// SIG undefined HandleMessage(void)

void TRawMessageHandler<FLiveLinkSubjectDataMessage,FLiveLinkMessageBusSource>::HandleMessage
               (longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = FLiveLinkSubjectDataMessage::StaticStruct();
  if (lVar3 == 0) {
    return;
  }
  lVar3 = *(longlong *)(lVar3 + 0x18);
  plVar1 = (longlong *)*param_2;
  lVar4 = (**(code **)(*plVar1 + 0x18))(plVar1);
  if (lVar4 != 0) {
    uVar5 = (**(code **)(*plVar1 + 0x20))(plVar1);
    cVar2 = FWeakObjectPtr::IsValid(uVar5,0,1);
    if (cVar2 != '\0') {
      uVar5 = (**(code **)(*plVar1 + 0x20))(plVar1);
      lVar4 = FWeakObjectPtr::Get(uVar5);
      lVar4 = *(longlong *)(lVar4 + 0x18);
      goto LAB_140846501;
    }
  }
  lVar4 = 0;
LAB_140846501:
  if (lVar4 == lVar3) {
    uVar5 = (**(code **)(*(longlong *)*param_2 + 0x18))();
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8),uVar5,param_2);
  }
  return;
}



// FUNCTION 140846540 HandleMessage body=161 status=ok
// SIG undefined HandleMessage(void)

void TRawMessageHandler<FLiveLinkSubjectFrameMessage,FLiveLinkMessageBusSource>::HandleMessage
               (longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = FLiveLinkSubjectFrameMessage::StaticStruct();
  if (lVar3 == 0) {
    return;
  }
  lVar3 = *(longlong *)(lVar3 + 0x18);
  plVar1 = (longlong *)*param_2;
  lVar4 = (**(code **)(*plVar1 + 0x18))(plVar1);
  if (lVar4 != 0) {
    uVar5 = (**(code **)(*plVar1 + 0x20))(plVar1);
    cVar2 = FWeakObjectPtr::IsValid(uVar5,0,1);
    if (cVar2 != '\0') {
      uVar5 = (**(code **)(*plVar1 + 0x20))(plVar1);
      lVar4 = FWeakObjectPtr::Get(uVar5);
      lVar4 = *(longlong *)(lVar4 + 0x18);
      goto LAB_1408465b1;
    }
  }
  lVar4 = 0;
LAB_1408465b1:
  if (lVar4 == lVar3) {
    uVar5 = (**(code **)(*(longlong *)*param_2 + 0x18))();
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8),uVar5,param_2);
  }
  return;
}



// FUNCTION 1408465f0 FUN_1408465f0 body=263 status=ok
// SIG undefined FUN_1408465f0(void)

void FUN_1408465f0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  BOOL BVar6;
  undefined4 *puVar7;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  if (((*(int *)(param_2 + 0x2c) == *(int *)(param_1 + 0x54) &&
       *(int *)(param_2 + 0x28) == *(int *)(param_1 + 0x50)) &&
      *(int *)(param_2 + 0x24) == *(int *)(param_1 + 0x4c)) &&
      *(int *)(param_2 + 0x20) == *(int *)(param_1 + 0x48)) {
    BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
    if (BVar6 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
    }
    puVar7 = (undefined4 *)(**(code **)(*(longlong *)*param_3 + 0x40))();
    uVar2 = *puVar7;
    uVar3 = puVar7[1];
    uVar4 = puVar7[2];
    uVar5 = puVar7[3];
    FString::FString(&local_28,param_2);
    FString::FString(&local_18,param_2 + 0x10);
    iVar1 = *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0x40) = iVar1 + 1;
    if (*(int *)(param_1 + 0x44) < iVar1 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1 + 0x38,iVar1);
    }
    puVar7 = (undefined4 *)((longlong)iVar1 * 0x30 + *(longlong *)(param_1 + 0x38));
    *puVar7 = uVar2;
    puVar7[1] = uVar3;
    puVar7[2] = uVar4;
    puVar7[3] = uVar5;
    *(undefined8 *)(puVar7 + 4) = local_28;
    puVar7[6] = local_20;
    puVar7[7] = local_1c;
    *(undefined8 *)(puVar7 + 8) = local_18;
    puVar7[10] = local_10;
    puVar7[0xb] = local_c;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  }
  return;
}



// FUNCTION 140846700 FUN_140846700 body=103 status=ok
// SIG undefined FUN_140846700(void)

void FUN_140846700(longlong param_1,longlong param_2)

{
  LARGE_INTEGER local_res8;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  QueryPerformanceCounter(&local_res8);
  *(double *)(param_1 + 0x90) = (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
  local_18 = *(undefined4 *)(param_1 + 0x10);
  uStack_14 = *(undefined4 *)(param_1 + 0x14);
  uStack_10 = *(undefined4 *)(param_1 + 0x18);
  uStack_c = *(undefined4 *)(param_1 + 0x1c);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
            (*(longlong **)(param_1 + 8),&local_18,*(undefined8 *)(param_2 + 0x20),param_2);
  return;
}



// FUNCTION 140846770 FUN_140846770 body=587 status=ok
// SIG undefined FUN_140846770(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140846770(longlong param_1,undefined8 *param_2)

{
  double dVar1;
  int iVar2;
  void *pvVar3;
  undefined1 auStack_108 [32];
  LARGE_INTEGER local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  void *local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  double local_b8;
  double local_b0;
  longlong local_a8 [4];
  longlong local_88;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  QueryPerformanceCounter(&local_e8);
  local_d8 = (void *)0x0;
  local_d0 = 0;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  *(double *)(param_1 + 0x90) =
       (double)CONCAT44(local_e8.s.HighPart,local_e8.s.LowPart) * DAT_1468b02f8 + 16777216.0;
  local_b0 = 0.0;
  QueryPerformanceCounter(&local_e8);
  local_b8 = (double)CONCAT44(local_e8.s.HighPart,local_e8.s.LowPart) * DAT_1468b02f8 + 16777216.0;
  FUN_142fc64d0(local_a8);
  if (&local_d8 != (void **)(param_2 + 1)) {
    iVar2 = *(int *)(param_2 + 2);
    pvVar3 = (void *)param_2[1];
    local_d0 = CONCAT44(local_d0._4_4_,iVar2);
    if ((iVar2 == 0) && (local_d0._4_4_ == 0)) {
      local_d0 = 0;
    }
    else {
      TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(&local_d8,iVar2);
      _guard_xfg_dispatch_icall_nop(local_d8,pvVar3,(longlong)iVar2 * 0x30);
    }
  }
  if (&local_c8 != (void **)(param_2 + 3)) {
    iVar2 = *(int *)(param_2 + 4);
    pvVar3 = (void *)param_2[3];
    local_c0 = CONCAT44(local_c0._4_4_,iVar2);
    if ((iVar2 == 0) && (local_c0._4_4_ == 0)) {
      local_c0 = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_c8,iVar2);
      _guard_xfg_dispatch_icall_nop(local_c8,pvVar3,(longlong)iVar2 << 4);
    }
  }
  FLiveLinkMetaData::operator=(local_a8,param_2 + 5);
  dVar1 = (double)param_2[0x11];
  QueryPerformanceCounter(&local_e8);
  local_b0 = ((double)CONCAT44(local_e8.s.HighPart,local_e8.s.LowPart) * DAT_1468b02f8 + 16777216.0)
             - dVar1;
  local_e8.s.LowPart = *(DWORD *)(param_1 + 0x10);
  local_e8.s.HighPart = *(LONG *)(param_1 + 0x14);
  uStack_e0 = *(undefined4 *)(param_1 + 0x18);
  uStack_dc = *(undefined4 *)(param_1 + 0x1c);
  local_b8 = dVar1;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
            (*(longlong **)(param_1 + 8),&local_e8,*param_2,&local_d8);
  local_60 = 0;
  if (local_68 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_a8,0);
  if (local_88 != 0) {
    FMemory::Free();
  }
  if (local_a8[0] != 0) {
    FMemory::Free();
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_d8 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1408469c0 FUN_1408469c0 body=111 status=ok
// SIG undefined FUN_1408469c0(void)

bool FUN_1408469c0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 400) == 0) {
    plVar2 = (longlong *)FUN_141593110();
    iVar1 = (**(code **)(*plVar2 + 8))(plVar2,DAT_146b44bf0);
    if (0 < iVar1) {
      lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,DAT_146b44bf0,0);
      if (lVar3 != 0) {
        lVar3 = lVar3 + -8;
      }
      *(longlong *)(param_1 + 400) = lVar3;
    }
  }
  return *(longlong *)(param_1 + 400) != 0;
}



// FUNCTION 140846a30 HasParent body=55 status=ok
// SIG undefined HasParent(void)

byte ULiveLinkBlueprintLibrary::HasParent(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if ((-1 < iVar1) && (iVar1 < *(int *)(lVar2 + 0x50))) {
    return (byte)((uint)*(undefined4 *)(*(longlong *)(lVar2 + 0x18) + (longlong)iVar1 * 4) >> 0x1f)
           ^ 1;
  }
  return 0;
}



// FUNCTION 140846a70 InitClient body=100 status=ok
// SIG undefined InitClient(void)

void FLiveLinkClientReference::InitClient(longlong *param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = (longlong *)FUN_141593110();
  iVar2 = (**(code **)(*plVar3 + 8))(plVar3,DAT_146b44bf0);
  uVar1 = DAT_146b44bf0;
  if (0 < iVar2) {
    plVar3 = (longlong *)FUN_141593110();
    lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,uVar1,0);
    if (lVar4 != 0) {
      *param_1 = lVar4 + -8;
      return;
    }
    *param_1 = 0;
  }
  return;
}



// FUNCTION 140846ae0 FUN_140846ae0 body=50 status=ok
// SIG undefined FUN_140846ae0(void)

void FUN_140846ae0(longlong param_1)

{
  undefined1 local_res8 [32];
  
  FUN_142275c20();
  SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>(local_res8,param_1);
  (*(code *)**(undefined8 **)(param_1 + 0x6b8))((undefined8 *)(param_1 + 0x6b8),local_res8);
  return;
}



// FUNCTION 140846b20 FUN_140846b20 body=84 status=ok
// SIG undefined FUN_140846b20(void)

undefined8 * FUN_140846b20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x210);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14410b0a0;
    FUN_14083d4d0(puVar1 + 1);
    FUN_14083d770(puVar1 + 0x3b,puVar1 + 1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140846b80 Initialize_AnyThread body=118 status=ok
// SIG undefined Initialize_AnyThread(void)

void FAnimNode_LiveLinkPose::Initialize_AnyThread(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = (longlong *)FUN_141593110();
  iVar2 = (**(code **)(*plVar3 + 8))(plVar3,DAT_146b44bf0);
  uVar1 = DAT_146b44bf0;
  if (0 < iVar2) {
    plVar3 = (longlong *)FUN_141593110();
    lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,uVar1,0);
    if (lVar4 != 0) {
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(longlong *)(param_1 + 0x48) = lVar4 + -8;
      return;
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



// FUNCTION 140846c10 FUN_140846c10 body=37 status=ok
// SIG undefined FUN_140846c10(void)

undefined8 FUN_140846c10(longlong param_1)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140846c40 NotifyMessageError body=103 status=ok
// SIG undefined NotifyMessageError(void)

void FMessageEndpoint::NotifyMessageError(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  
  uVar1 = *param_2;
  if ((*(int *)(param_1 + 0x98) != 0) && (*(longlong **)(param_1 + 0x90) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x18))();
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x98) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x90);
      }
      (**(code **)(*plVar3 + 0x40))(plVar3,uVar1,param_3);
    }
  }
  return;
}



// FUNCTION 140846cb0 FUN_140846cb0 body=14 status=ok
// SIG undefined FUN_140846cb0(void)

undefined4 FUN_140846cb0(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    return *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x50);
  }
  return 0;
}



// FUNCTION 140846cc0 FUN_140846cc0 body=32 status=ok
// SIG undefined FUN_140846cc0(void)

void FUN_140846cc0(longlong param_1)

{
  TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
  ::Reset(param_1 + 0x28);
  TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
  ::Reset(param_1 + 0x78);
  return;
}



// FUNCTION 140846d60 ParentBoneSpaceTransform body=90 status=ok
// SIG undefined ParentBoneSpaceTransform(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ULiveLinkBlueprintLibrary::ParentBoneSpaceTransform(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar3 = uRam00000001468b5b78;
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    *param_2 = _DAT_1468b5b70;
    param_2[1] = uVar3;
    uVar3 = uRam00000001468b5b88;
    param_2[2] = _DAT_1468b5b80;
    param_2[3] = uVar3;
    uVar3 = uRam00000001468b5b98;
    param_2[4] = _DAT_1468b5b90;
    param_2[5] = uVar3;
    if ((-1 < iVar1) && (iVar1 < *(int *)(lVar2 + 0x50))) {
      puVar4 = (undefined8 *)((longlong)iVar1 * 0x30 + *(longlong *)(lVar2 + 0x48));
      uVar3 = puVar4[1];
      *param_2 = *puVar4;
      param_2[1] = uVar3;
      uVar3 = puVar4[3];
      param_2[2] = puVar4[2];
      param_2[3] = uVar3;
      uVar3 = puVar4[5];
      param_2[4] = puVar4[4];
      param_2[5] = uVar3;
    }
  }
  return;
}



// FUNCTION 140846dc0 FUN_140846dc0 body=668 status=ok
// SIG undefined FUN_140846dc0(void)

void FUN_140846dc0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18 [2];
  longlong local_a8;
  longlong *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [40];
  
  plVar1 = (longlong *)(param_1 + 0x28);
  puVar14 = (undefined8 *)0x0;
  if (*plVar1 == 0) {
    FName::FName(local_res8,L"LiveLinkMessageBusSource",1);
    lVar8 = FUN_14083d9f0(local_78,local_res8);
    puVar9 = (undefined8 *)operator_new(0x18);
    local_98 = puVar14;
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[1] = param_1;
      *puVar9 = &PTR_HandleMessage_14410cb98;
      puVar9[2] = FUN_1408465f0;
      local_98 = puVar9;
    }
    puVar9 = (undefined8 *)operator_new(0x18);
    local_90 = puVar14;
    if (puVar9 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar9 + 1) = 1;
      *puVar9 = &PTR_FUN_143f3f2d0;
      *(undefined4 *)((longlong)puVar9 + 0xc) = 1;
      puVar9[2] = local_98;
      local_90 = puVar9;
    }
    SharedPointerInternals::EnableSharedFromThis(&local_98,local_98,local_98);
    iVar7 = *(int *)(lVar8 + 0x20);
    *(int *)(lVar8 + 0x20) = iVar7 + 1;
    if (*(int *)(lVar8 + 0x24) < iVar7 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar8 + 0x18,iVar7);
    }
    puVar9 = (undefined8 *)((longlong)iVar7 * 0x10 + *(longlong *)(lVar8 + 0x18));
    *puVar9 = local_98;
    puVar9[1] = local_90;
    local_90 = (undefined8 *)0x0;
    local_98 = (undefined8 *)0x0;
    FMessageEndpointBuilder::Build(lVar8,&local_a8);
    if (plVar1 != &local_a8) {
      *plVar1 = local_a8;
      local_a8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x30,&local_a0);
    }
    plVar12 = local_a0;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_a0 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar3 = (int *)((longlong)plVar12 + 0xc);
        iVar7 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_60);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      piVar3 = (int *)((longlong)local_70 + 0xc);
      iVar7 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if ((iVar7 == 1) && (local_70 != (longlong *)0x0)) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  iVar7 = *(int *)(param_1 + 0x44);
  iVar13 = *(int *)(param_1 + 0x40);
  if (iVar7 < 0) {
    if (iVar13 != 0) {
      plVar12 = (longlong *)(*(longlong *)(param_1 + 0x38) + 0x10);
      do {
        if (plVar12[2] != 0) {
          FMemory::Free();
        }
        if (*plVar12 != 0) {
          FMemory::Free();
        }
        plVar12 = plVar12 + 6;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
      iVar7 = *(int *)(param_1 + 0x44);
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    if (iVar7 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(param_1 + 0x38,0);
    }
  }
  else {
    if (iVar13 != 0) {
      plVar12 = (longlong *)(*(longlong *)(param_1 + 0x38) + 0x10);
      do {
        if (plVar12[2] != 0) {
          FMemory::Free();
        }
        if (*plVar12 != 0) {
          FMemory::Free();
        }
        plVar12 = plVar12 + 6;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  puVar10 = (undefined4 *)FGuid::NewGuid(local_88);
  uVar4 = puVar10[1];
  uVar5 = puVar10[2];
  uVar6 = puVar10[3];
  *(undefined4 *)(param_1 + 0x48) = *puVar10;
  *(undefined4 *)(param_1 + 0x4c) = uVar4;
  *(undefined4 *)(param_1 + 0x50) = uVar5;
  *(undefined4 *)(param_1 + 0x54) = uVar6;
  puVar9 = (undefined8 *)operator_new(0x10);
  if (puVar9 != (undefined8 *)0x0) {
    uVar4 = *(undefined4 *)(param_1 + 0x4c);
    uVar5 = *(undefined4 *)(param_1 + 0x50);
    uVar6 = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)puVar9 = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)((longlong)puVar9 + 4) = uVar4;
    *(undefined4 *)(puVar9 + 1) = uVar5;
    *(undefined4 *)((longlong)puVar9 + 0xc) = uVar6;
    puVar14 = puVar9;
  }
  lVar8 = *plVar1;
  local_res10 = 0x2bca2875f4373fff;
  local_res18[0] = 0;
  uVar11 = FLiveLinkPingMessage::StaticStruct();
  FMessageEndpoint::Publish(lVar8,puVar14,uVar11,2,local_res18,&local_res10);
  return;
}



// FUNCTION 140847060 Publish body=446 status=ok
// SIG undefined Publish(void)

void FMessageEndpoint::Publish
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
               undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  longlong local_48;
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if ((*(char *)(param_1 + 0x40) != '\0') &&
     (plVar2 = *(longlong **)(param_1 + 0x38), plVar2 != (longlong *)0x0)) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar7 = iVar5 == 0;
    if (bVar7) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (!bVar7) {
      LOCK();
      bVar7 = iVar5 == (int)plVar2[1];
      if (bVar7) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar7) {
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        plVar3 = *(longlong **)(param_1 + 0x30);
        if (plVar3 != (longlong *)0x0) {
          plVar6 = (longlong *)
                   TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x10,local_38);
          if (*plVar6 == 0) {
            local_48 = 0;
          }
          else {
            local_48 = *plVar6 + 8;
          }
          local_40 = (longlong *)plVar6[1];
          if (local_40 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_40 + 1) = (int)local_40[1] + 1;
            UNLOCK();
          }
          (**(code **)(*plVar3 + 0x18))(plVar3,param_2,param_3,param_4,param_5,param_6,&local_48);
          plVar3 = local_40;
          if (local_40 != (longlong *)0x0) {
            LOCK();
            plVar6 = local_40 + 1;
            lVar4 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*local_40)(local_40);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
          }
          if (local_30 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_30 + 1;
            lVar4 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*local_30)(local_30);
              LOCK();
              piVar1 = (int *)((longlong)local_30 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*local_30 + 8))(local_30,1);
              }
            }
          }
        }
        LOCK();
        plVar3 = plVar2 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 != 1) {
          return;
        }
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 != 1) {
          return;
        }
        (**(code **)(*plVar2 + 8))(plVar2,1);
        return;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar7 = iVar5 == 0;
      if (bVar7) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 140847220 FUN_140847220 body=1300 status=ok
// SIG undefined FUN_140847220(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_140847220(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  BOOL BVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined4 *_Src;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_118;
  longlong *local_110;
  undefined4 *local_108;
  ulonglong local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  void *local_b8;
  int local_b0;
  int local_ac;
  longlong local_a8 [2];
  longlong *plStack_98;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [56];
  
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  *(undefined8 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0x10) = uVar5;
  *(undefined4 *)(param_1 + 0x14) = uVar6;
  *(undefined4 *)(param_1 + 0x18) = uVar7;
  *(undefined4 *)(param_1 + 0x1c) = uVar8;
  FName::FName(local_res10,L"LiveLinkMessageBusSource",1);
  lVar11 = FUN_14083d9f0(local_90,local_res10);
  puVar12 = (undefined8 *)operator_new(0x18);
  puVar15 = (undefined8 *)0x0;
  local_f8 = puVar15;
  if (puVar12 != (undefined8 *)0x0) {
    puVar12[1] = param_1;
    *puVar12 = &PTR_HandleMessage_14410cbd8;
    puVar12[2] = FUN_140846700;
    local_f8 = puVar12;
  }
  puVar12 = (undefined8 *)operator_new(0x18);
  local_f0 = puVar15;
  if (puVar12 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar12 + 1) = 1;
    *puVar12 = &PTR_FUN_143f3f2d0;
    *(undefined4 *)((longlong)puVar12 + 0xc) = 1;
    puVar12[2] = local_f8;
    local_f0 = puVar12;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_f8,local_f8,local_f8);
  iVar3 = *(int *)(lVar11 + 0x20);
  *(int *)(lVar11 + 0x20) = iVar3 + 1;
  if (*(int *)(lVar11 + 0x24) < iVar3 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar11 + 0x18,iVar3);
  }
  puVar12 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar11 + 0x18));
  *puVar12 = local_f8;
  puVar12[1] = local_f0;
  local_f0 = (undefined8 *)0x0;
  local_f8 = (undefined8 *)0x0;
  puVar12 = (undefined8 *)operator_new(0x18);
  local_e8 = puVar15;
  if (puVar12 != (undefined8 *)0x0) {
    puVar12[1] = param_1;
    *puVar12 = &PTR_HandleMessage_14410cbe8;
    puVar12[2] = FUN_140846770;
    local_e8 = puVar12;
  }
  puVar12 = (undefined8 *)operator_new(0x18);
  local_e0 = puVar15;
  if (puVar12 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar12 + 1) = 1;
    *puVar12 = &PTR_FUN_143f3f2d0;
    *(undefined4 *)((longlong)puVar12 + 0xc) = 1;
    puVar12[2] = local_e8;
    local_e0 = puVar12;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_e8,local_e8,local_e8);
  iVar3 = *(int *)(lVar11 + 0x20);
  *(int *)(lVar11 + 0x20) = iVar3 + 1;
  if (*(int *)(lVar11 + 0x24) < iVar3 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar11 + 0x18,iVar3);
  }
  puVar12 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar11 + 0x18));
  *puVar12 = local_e8;
  puVar12[1] = local_e0;
  local_e0 = (undefined8 *)0x0;
  local_e8 = (undefined8 *)0x0;
  puVar12 = (undefined8 *)operator_new(0x18);
  local_d8 = puVar15;
  if (puVar12 != (undefined8 *)0x0) {
    puVar12[1] = param_1;
    *puVar12 = &PTR_HandleMessage_14410cbf8;
    puVar12[2] = FUN_140846240;
    local_d8 = puVar12;
  }
  puVar12 = (undefined8 *)operator_new(0x18);
  local_d0 = puVar15;
  if (puVar12 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar12 + 1) = 1;
    *puVar12 = &PTR_FUN_143f3f2d0;
    *(undefined4 *)((longlong)puVar12 + 0xc) = 1;
    puVar12[2] = local_d8;
    local_d0 = puVar12;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_d8,local_d8,local_d8);
  iVar3 = *(int *)(lVar11 + 0x20);
  *(int *)(lVar11 + 0x20) = iVar3 + 1;
  if (*(int *)(lVar11 + 0x24) < iVar3 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar11 + 0x18,iVar3);
  }
  puVar12 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar11 + 0x18));
  *puVar12 = local_d8;
  puVar12[1] = local_d0;
  local_d0 = (undefined8 *)0x0;
  local_d8 = (undefined8 *)0x0;
  puVar12 = (undefined8 *)operator_new(0x18);
  local_c8 = puVar15;
  if (puVar12 != (undefined8 *)0x0) {
    puVar12[1] = param_1;
    *puVar12 = &PTR_HandleMessage_14410cc08;
    puVar12[2] = FUN_1408461e0;
    local_c8 = puVar12;
  }
  puVar12 = (undefined8 *)operator_new(0x18);
  if (puVar12 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar12 + 1) = 1;
    *puVar12 = &PTR_FUN_143f3f2d0;
    *(undefined4 *)((longlong)puVar12 + 0xc) = 1;
    puVar12[2] = local_c8;
    puVar15 = puVar12;
  }
  local_c0 = puVar15;
  SharedPointerInternals::EnableSharedFromThis(&local_c8,local_c8,local_c8);
  iVar3 = *(int *)(lVar11 + 0x20);
  *(int *)(lVar11 + 0x20) = iVar3 + 1;
  if (*(int *)(lVar11 + 0x24) < iVar3 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar11 + 0x18,iVar3);
  }
  puVar15 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar11 + 0x18));
  *puVar15 = local_c8;
  puVar15[1] = local_c0;
  local_c0 = (undefined8 *)0x0;
  local_c8 = (undefined8 *)0x0;
  FMessageEndpointBuilder::Build(lVar11,&local_118);
  puVar15 = (undefined8 *)(param_1 + 0x20);
  if (puVar15 != &local_118) {
    *puVar15 = local_118;
    local_118 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x28,&local_110);
  }
  plVar9 = local_110;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_110 + 1;
    lVar11 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_110 + 8))(local_110,1);
      }
    }
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_78);
  if (local_88 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_88 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (local_88 != (longlong *)0x0)) {
      (**(code **)(*local_88 + 8))(local_88,1);
    }
  }
  uVar13 = operator_new(1);
  uVar4 = *puVar15;
  local_100 = 1;
  local_108 = (undefined4 *)0x0;
  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_108,0);
  _Src = local_108;
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  uVar6 = *(undefined4 *)(param_1 + 0x38);
  uVar7 = *(undefined4 *)(param_1 + 0x3c);
  *local_108 = *(undefined4 *)(param_1 + 0x30);
  local_108[1] = uVar5;
  local_108[2] = uVar6;
  local_108[3] = uVar7;
  local_b8 = (void *)0x0;
  lVar11 = (longlong)(int)local_100;
  local_b0 = (int)local_100;
  if ((int)local_100 == 0) {
    local_ac = (int)local_100;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_b8,local_100 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_b8,_Src,lVar11 << 4);
  }
  local_res20 = 0;
  local_a8[1] = 0;
  plStack_98 = (longlong *)0x0;
  local_res18 = 0x2bca2875f4373fff;
  uVar14 = FLiveLinkConnectMessage::StaticStruct();
  FUN_1408494a0(uVar4,uVar13,uVar14,local_a8 + 1,&local_b8,&local_res20,&local_res18);
  plVar9 = plStack_98;
  if (plStack_98 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_98 + 1;
    lVar11 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    _Src = local_108;
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_98)(plStack_98);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      _Src = local_108;
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
        _Src = local_108;
      }
    }
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free();
  }
  FMemory::Free(_Src);
  LOCK();
  *(undefined4 *)(param_1 + 0x98) = 1;
  UNLOCK();
  local_a8[0] = param_1;
  lVar11 = FUN_140844800();
  BVar10 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar11 + 0x18));
  if (BVar10 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar11 + 0x18));
  }
  FUN_14058c5a0(lVar11 + 0x40,local_res8,local_a8,0);
                    /* WARNING: Could not recover jumptable at 0x00014084772d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar11 + 0x18));
  return;
}



// FUNCTION 140847740 ReceiveMessage body=294 status=ok
// SIG undefined ReceiveMessage(void)

void FMessageEndpoint::ReceiveMessage(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
    plVar3 = (longlong *)*param_2;
    if (*(char *)(param_1 + 0x80) == '\0') {
      lVar6 = (**(code **)(*plVar3 + 0x18))(plVar3);
      if (lVar6 != 0) {
        uVar7 = (**(code **)(*plVar3 + 0x20))(plVar3);
        cVar4 = FWeakObjectPtr::IsValid(uVar7,0,1);
        if ((cVar4 != '\0') && (iVar9 = 0, 0 < *(int *)(param_1 + 0x50))) {
          lVar6 = 0;
          do {
            puVar2 = *(undefined8 **)(lVar6 + *(longlong *)(param_1 + 0x48));
            (**(code **)*puVar2)(puVar2,param_2);
            iVar9 = iVar9 + 1;
            lVar6 = lVar6 + 0x10;
          } while (iVar9 < *(int *)(param_1 + 0x50));
        }
      }
    }
    else {
      plVar10 = (longlong *)param_2[1];
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
      }
      plVar5 = (longlong *)operator_new(0x18);
      plVar8 = (longlong *)0x0;
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = 0;
        plVar5[1] = (longlong)plVar3;
        plVar5[2] = (longlong)plVar10;
        plVar8 = plVar5;
        plVar10 = (longlong *)0x0;
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        puVar2 = *(undefined8 **)(param_1 + 0x70);
        *(longlong **)(param_1 + 0x70) = plVar8;
        UNLOCK();
        LOCK();
        *puVar2 = plVar8;
        UNLOCK();
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar10 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140847870 Rehash body=533 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
     Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint *puVar14;
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
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar10 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar10 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar10) {
      uVar12 = 0;
      uVar13 = (ulonglong)uVar10;
      do {
        uVar11 = (longlong)(int)*plVar2 - 1U & uVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar12 = uVar12 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar11 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = puStack_28;
      }
      uVar10 = *puVar14;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar10 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar9 = local_58 + 1;
        bVar5 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar9;
        if (bVar5) goto LAB_1408479af;
        uVar10 = puVar14[lVar6 + 1];
      }
      uStack_54 = -uVar10 & uVar10;
      iVar9 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      iStack_44 = (iStack_40 - iVar9) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_1408479af:
        iStack_44 = iVar3;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        lVar6 = *param_1;
        lVar8 = (longlong)iStack_1c;
        uVar4 = *(undefined8 *)(lVar6 + lVar8 * 0x18);
        uVar10 = (int)((ulonglong)uVar4 >> 0x20) + (int)uVar4 & (int)*plVar2 - 1U;
        *(uint *)(lVar6 + 0x14 + lVar8 * 0x18) = uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x10 + lVar8 * 0x18) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar10) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 140847a90 Rehash body=540 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FName,FVehicleCustomizationData>,TDefaultMapHashableKeyFuncs<FName,FVehicleCustomizationData,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
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
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar5 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar5;
  }
  uVar8 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar8 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar8) {
      uVar10 = 0;
      uVar12 = (ulonglong)uVar8;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar9 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puStack_28;
      }
      uVar8 = *puVar13;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_140847bcf;
        uVar8 = puVar13[lVar5 + 1];
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
      if (iVar3 < iStack_44) {
LAB_140847bcf:
        iStack_44 = iVar3;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        puVar11 = (undefined8 *)((longlong)iStack_1c * 0x90 + *param_1);
        uVar8 = (int)((ulonglong)*puVar11 >> 0x20) + (int)*puVar11 & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar11 + 0x8c) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar11 + 0x11) =
             *(undefined4 *)
              ((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 140847cb0 FUN_140847cb0 body=539 status=ok
// SIG undefined FUN_140847cb0(void)

void FUN_140847cb0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
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
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar5 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar5;
  }
  uVar8 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar8 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar8) {
      uVar10 = 0;
      uVar12 = (ulonglong)uVar8;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar9 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puStack_28;
      }
      uVar8 = *puVar13;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_140847def;
        uVar8 = puVar13[lVar5 + 1];
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
      if (iVar3 < iStack_44) {
LAB_140847def:
        iStack_44 = iVar3;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        puVar11 = (undefined8 *)((longlong)iStack_1c * 0xd0 + *param_1);
        uVar8 = (int)((ulonglong)*puVar11 >> 0x20) + (int)*puVar11 & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar11 + 0xcc) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar11 + 0x19) =
             *(undefined4 *)
              ((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 140847ed0 FUN_140847ed0 body=310 status=ok
// SIG undefined FUN_140847ed0(void)

undefined8 FUN_140847ed0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar8 = (longlong)(int)param_1[9] - 1;
  plVar7 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar7 = param_1 + 7;
  }
  iVar4 = *(int *)((longlong)plVar7 +
                  ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) & uVar8) * 4);
  if (iVar4 != -1) {
    lVar5 = *param_1;
    do {
      lVar6 = (longlong)iVar4;
      if (*(longlong *)(lVar5 + lVar6 * 0x90) == param_2) {
        lVar1 = lVar6 * 0x90 + lVar5;
        uVar8 = (longlong)*(int *)(lVar1 + 0x8c) & uVar8;
        piVar3 = (int *)((longlong)plVar7 + uVar8 * 4);
        iVar2 = *(int *)((longlong)plVar7 + uVar8 * 4);
        goto joined_r0x000140847f70;
      }
      iVar4 = *(int *)(lVar5 + 0x88 + lVar6 * 0x90);
    } while (iVar4 != -1);
  }
  return 0;
joined_r0x000140847f70:
  if (iVar2 == -1) {
LAB_140847fa0:
    lVar5 = *param_1 + lVar6 * 0x90;
    if (*(longlong *)(lVar5 + 0x68) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar5 + 0x58) != 0) {
      FMemory::Free();
    }
    FUN_14083df50(lVar5 + 0x18);
    if (*(longlong *)(lVar5 + 8) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FSlateFontKey,TSharedRef<FCharacterList,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar4,1);
    return 1;
  }
  if (iVar2 == iVar4) {
    *piVar3 = *(int *)(lVar1 + 0x88);
    goto LAB_140847fa0;
  }
  piVar3 = (int *)((longlong)iVar2 * 0x90 + 0x88 + lVar5);
  iVar2 = *piVar3;
  goto joined_r0x000140847f70;
}



// FUNCTION 140848010 FUN_140848010 body=284 status=ok
// SIG undefined FUN_140848010(void)

undefined8 FUN_140848010(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar6 = (longlong)(int)param_1[9] - 1;
  plVar7 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar7 = param_1 + 7;
  }
  iVar5 = *(int *)((longlong)plVar7 +
                  ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) & uVar6) * 4);
  if (iVar5 != -1) {
    lVar2 = *param_1;
    do {
      lVar3 = (longlong)iVar5 * 0xd0;
      if (*(longlong *)(lVar3 + lVar2) == param_2) {
        lVar8 = (longlong)iVar5 * 0xd0;
        lVar3 = lVar8 + lVar2;
        uVar6 = (longlong)*(int *)(lVar3 + 0xcc) & uVar6;
        piVar4 = (int *)((longlong)plVar7 + uVar6 * 4);
        iVar1 = *(int *)((longlong)plVar7 + uVar6 * 4);
        goto joined_r0x0001408480bf;
      }
      iVar5 = *(int *)(lVar3 + 200 + lVar2);
    } while (iVar5 != -1);
  }
  return 0;
joined_r0x0001408480bf:
  if (iVar1 == -1) {
LAB_1408480f0:
    FLiveLinkSubjectFrame::~FLiveLinkSubjectFrame(*param_1 + 8 + lVar8);
    TSparseArray<TSetElement<TTuple<FPrimitiveComponentId,FComponentVelocityData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar5,1);
    return 1;
  }
  if (iVar1 == iVar5) {
    *piVar4 = *(int *)(lVar3 + 200);
    goto LAB_1408480f0;
  }
  piVar4 = (int *)((longlong)iVar1 * 0xd0 + 200 + lVar2);
  iVar1 = *piVar4;
  goto joined_r0x0001408480bf;
}



// FUNCTION 140848130 RemoveAtImpl body=203 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<FVertexAndAttributes,FDefaultAllocator>::RemoveAtImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)(*param_1 + 8 + (longlong)param_2 * 0x18);
    iVar3 = param_3;
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (int)param_1[1];
    iVar1 = (iVar3 - param_2) - param_3;
    if (iVar1 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x18),
                 (void *)(*param_1 + (longlong)(param_2 + param_3) * 0x18),(longlong)iVar1 * 0x18);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 140848200 FUN_140848200 body=318 status=ok
// SIG undefined FUN_140848200(void)

void FUN_140848200(longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  
  if (param_3 != 0) {
    plVar4 = (longlong *)(*param_1 + (longlong)param_2 * 0x90);
    plVar2 = plVar4 + 0xc;
    iVar3 = param_3;
    do {
      *(undefined4 *)(plVar2 + 1) = 0;
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty(plVar2 + -8,0);
      if (plVar2[-4] != 0) {
        FMemory::Free();
      }
      if (plVar2[-8] != 0) {
        FMemory::Free();
      }
      if (plVar2[-10] != 0) {
        FMemory::Free();
      }
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 0x12;
      plVar2 = plVar2 + 0x12;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (int)param_1[1];
    iVar1 = (iVar3 - param_2) - param_3;
    if (iVar1 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x90),
                 (void *)((longlong)(param_3 + param_2) * 0x90 + *param_1),(longlong)iVar1 * 0x90);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      TArray<HAPI_ParmInfo,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 140848340 RemoveAtUninitialized body=182 status=ok
// SIG undefined RemoveAtUninitialized(void)

void TSparseArray<TSetElement<TTuple<FSlateFontKey,TSharedRef<FCharacterList,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::RemoveAtUninitialized(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  
  uVar10 = (ulonglong)param_2;
  if (param_3 != 0) {
    bVar3 = (byte)param_2 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    lVar8 = uVar10 * 0x90;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x90) = iVar9;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + lVar8) = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar2 + 4 + lVar8) = uVar4;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar7 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      lVar8 = lVar8 + 0x90;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140848400 RemoveAtUninitialized body=181 status=ok
// SIG undefined RemoveAtUninitialized(void)

void TSparseArray<TSetElement<TTuple<FPrimitiveComponentId,FComponentVelocityData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::RemoveAtUninitialized(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  
  uVar10 = (ulonglong)param_2;
  if (param_3 != 0) {
    bVar3 = (byte)param_2 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    lVar8 = uVar10 * 0xd0;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0xd0 + *param_1) = iVar9;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + lVar8) = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar2 + 4 + lVar8) = uVar4;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar7 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      lVar8 = lVar8 + 0xd0;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1408484c0 FUN_1408484c0 body=224 status=ok
// SIG undefined FUN_1408484c0(void)

void FUN_1408484c0(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  TArray<TSharedPtr<FUdpReassembledMessage,1>,FDefaultAllocator>::RemoveAtSwapImpl
            (param_1 + 0x120,param_2,1,0);
  iVar2 = *(int *)(param_1 + 0x138);
  iVar1 = (iVar2 - param_2) + -1;
  if (0 < iVar1) {
    iVar1 = 1;
  }
  if (iVar1 != 0) {
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)param_2 * 0x10 + *(longlong *)(param_1 + 0x130)),
               (void *)((longlong)(iVar2 - iVar1) * 0x10 + *(longlong *)(param_1 + 0x130)),
               (longlong)iVar1 << 4);
    iVar2 = *(int *)(param_1 + 0x138);
  }
  *(int *)(param_1 + 0x138) = iVar2 + -1;
  iVar2 = *(int *)(param_1 + 0x148);
  iVar1 = (iVar2 - param_2) + -1;
  if (0 < iVar1) {
    iVar1 = 1;
  }
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x148) = iVar2 + -1;
  }
  else {
    _guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(param_1 + 0x140) + (longlong)param_2 * 8),
               (void *)(*(longlong *)(param_1 + 0x140) + (longlong)(iVar2 - iVar1) * 8),
               (longlong)iVar1 << 3);
    *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + -1;
  }
  return;
}



// FUNCTION 1408485a0 FUN_1408485a0 body=159 status=ok
// SIG undefined FUN_1408485a0(void)

undefined8 FUN_1408485a0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 local_18;
  longlong local_10;
  
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
    if (cVar1 != '\0') {
      plVar3 = (longlong *)FUN_141593110();
      iVar2 = (**(code **)(*plVar3 + 8))(plVar3,DAT_146b44bf0);
      if (0 < iVar2) {
        lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,DAT_146b44bf0,0);
        if (lVar4 == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = (longlong *)(lVar4 + -8);
        }
        local_18 = *(undefined8 *)(param_1 + 8);
        local_10 = *(longlong *)(param_1 + 0x10);
        if (local_10 != 0) {
          LOCK();
          *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
          UNLOCK();
        }
        (**(code **)(*plVar3 + 0x10))(plVar3,&local_18);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140848640 FUN_140848640 body=296 status=ok
// SIG undefined FUN_140848640(void)

undefined8 FUN_140848640(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  BOOL BVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined8 local_18;
  longlong *plStack_10;
  
  lVar8 = FUN_140844800();
  LOCK();
  bVar9 = *(int *)(lVar8 + 8) == 0;
  if (bVar9) {
    *(int *)(lVar8 + 8) = 0;
  }
  UNLOCK();
  if (!bVar9) {
    BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x18));
    if (BVar6 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x18));
    }
    TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove(lVar8 + 0x40,param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x18));
  }
  lVar8 = *(longlong *)(param_1 + 0x20);
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  local_18 = 0;
  plStack_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x20) != &local_18) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x28,&plStack_10);
    plVar5 = plStack_10;
    if (plStack_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_10 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_10)(plStack_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plStack_10 + 8))(plStack_10,1);
        }
      }
    }
  }
  do {
    if (lVar8 == 0) break;
    if (plVar3 == (longlong *)0x0) {
      return 1;
    }
    LOCK();
    iVar7 = (int)plVar3[1];
    if (iVar7 == 0) {
      *(int *)(plVar3 + 1) = 0;
      iVar7 = 0;
    }
    UNLOCK();
  } while (0 < iVar7);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    iVar7 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return 1;
}



// FUNCTION 140848770 FUN_140848770 body=351 status=ok
// SIG undefined FUN_140848770(void)

void FUN_140848770(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  plVar4 = (longlong *)*param_1;
  iVar3 = (int)param_1[1];
  if (iVar1 < param_2) {
    if (iVar3 != 0) {
      plVar2 = plVar4 + 0xc;
      do {
        *(undefined4 *)(plVar2 + 1) = 0;
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::Empty(plVar2 + -8,0);
        if (plVar2[-4] != 0) {
          FMemory::Free();
        }
        if (plVar2[-8] != 0) {
          FMemory::Free();
        }
        if (plVar2[-10] != 0) {
          FMemory::Free();
        }
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 0x12;
        plVar2 = plVar2 + 0x12;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      iVar1 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar1 != param_2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<144,8>_>,FDefaultAllocator>::ResizeTo
                (param_1,param_2);
    }
  }
  else {
    if (iVar3 != 0) {
      plVar2 = plVar4 + 0xc;
      do {
        *(undefined4 *)(plVar2 + 1) = 0;
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::Empty(plVar2 + -8,0);
        if (plVar2[-4] != 0) {
          FMemory::Free();
        }
        if (plVar2[-8] != 0) {
          FMemory::Free();
        }
        if (plVar2[-10] != 0) {
          FMemory::Free();
        }
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 0x12;
        plVar2 = plVar2 + 0x12;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 1408488d0 FUN_1408488d0 body=416 status=ok
// SIG undefined FUN_1408488d0(void)

/* WARNING: Removing unreachable block (ram,0x000140848984) */
/* WARNING: Removing unreachable block (ram,0x000140848992) */
/* WARNING: Removing unreachable block (ram,0x0001408489ba) */
/* WARNING: Removing unreachable block (ram,0x0001408489be) */
/* WARNING: Removing unreachable block (ram,0x0001408489ca) */
/* WARNING: Removing unreachable block (ram,0x0001408489d1) */
/* WARNING: Removing unreachable block (ram,0x0001408489ec) */
/* WARNING: Removing unreachable block (ram,0x0001408489e2) */
/* WARNING: Removing unreachable block (ram,0x0001408489ea) */
/* WARNING: Removing unreachable block (ram,0x0001408489f1) */
/* WARNING: Removing unreachable block (ram,0x0001408489f4) */
/* WARNING: Removing unreachable block (ram,0x0001408489fb) */
/* WARNING: Removing unreachable block (ram,0x0001408489ff) */
/* WARNING: Removing unreachable block (ram,0x000140848a04) */

void FUN_1408488d0(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  lVar8 = 0;
  iVar2 = *(int *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
    FUN_140848c80();
  }
  iVar2 = *(int *)(param_2 + 0xa8);
  if (iVar2 != 0) {
    iVar6 = (int)param_1[1];
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + iVar2) {
      FUN_140848c80(param_1);
      iVar6 = (int)param_1[1];
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar6 * 0x30 + *param_1),*(void **)(param_2 + 0xa0),
               (longlong)iVar2 * 0x30);
    *(int *)(param_1 + 1) = (int)param_1[1] + iVar2;
  }
  if ((*(char *)(param_2 + 0xd0) != '\0') &&
     (lVar5 = FWeakObjectPtr::Get(param_2 + 0x38), lVar5 != 0)) {
    lVar5 = FWeakObjectPtr::Get(param_2 + 0x40);
    if (*(uint *)(param_1 + 1) != 0) {
      uVar10 = (ulonglong)*(uint *)(param_1 + 1);
      lVar9 = lVar8;
      do {
        lVar8 = lVar8 + 4;
        lVar3 = *param_1;
        puVar7 = (undefined8 *)
                 ((longlong)*(int *)(*(longlong *)(param_1[2] + 0x70) + -4 + lVar8) * 0x30 +
                 *(longlong *)(lVar5 + 0x88));
        uVar4 = puVar7[1];
        *(undefined8 *)(lVar9 + lVar3) = *puVar7;
        ((undefined8 *)(lVar9 + lVar3))[1] = uVar4;
        uVar4 = puVar7[3];
        puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar3);
        *puVar1 = puVar7[2];
        puVar1[1] = uVar4;
        uVar4 = puVar7[5];
        puVar1 = (undefined8 *)(lVar9 + 0x20 + lVar3);
        *puVar1 = puVar7[4];
        puVar1[1] = uVar4;
        uVar10 = uVar10 - 1;
        lVar9 = lVar9 + 0x30;
      } while (uVar10 != 0);
    }
  }
  return;
}



// FUNCTION 140848a70 FUN_140848a70 body=262 status=ok
// SIG undefined FUN_140848a70(void)

void FUN_140848a70(undefined8 *param_1,int param_2,int param_3,int param_4)

{
  ulonglong *puVar1;
  void *_Src;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  void *_Dst;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 local_res18 [16];
  undefined *local_48;
  undefined1 *puStack_40;
  
  if (param_3 != 0) {
    _Src = (void *)*param_1;
    puStack_40 = local_res18;
    local_48 = &DAT_14060d670;
    local_res18[0] = 0;
    iVar6 = param_3 * param_4;
    lVar3 = FUN_1415d8310(&local_48,&DAT_146216a38);
    uVar5 = 8;
    uVar2 = uVar5;
    if (0xf < iVar6) {
      uVar2 = 0x10;
    }
    uVar7 = (ulonglong)uVar2;
    puVar1 = (ulonglong *)(lVar3 + 0x18);
    _Dst = (void *)((uVar7 - 1) + *puVar1 & ~(uVar7 - 1));
    uVar4 = (longlong)iVar6 + (longlong)_Dst;
    if (*(ulonglong *)(lVar3 + 0x20) < uVar4) {
      if (0xf < iVar6) {
        uVar5 = 0x10;
      }
      FMemStackBase::AllocateNewChunk(puVar1,uVar5 + iVar6);
      _Dst = (void *)((uVar7 - 1) + *puVar1 & ~(uVar7 - 1));
      uVar4 = (longlong)iVar6 + (longlong)_Dst;
    }
    *puVar1 = uVar4;
    *param_1 = _Dst;
    if ((_Src != (void *)0x0) && (param_2 != 0)) {
      if (param_3 <= param_2) {
        param_2 = param_3;
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)(param_2 * param_4));
    }
  }
  return;
}



// FUNCTION 140848b80 FUN_140848b80 body=65 status=ok
// SIG undefined FUN_140848b80(void)

void FUN_140848b80(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 4;
  uVar1 = *(uint *)(param_1 + 8);
  if ((*(int *)(param_1 + 0xc) != 0) || (4 < uVar1)) {
    iVar2 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
  }
  if (iVar2 < (int)uVar1) {
    iVar2 = 0x7fffffff;
  }
  *(int *)(param_1 + 0xc) = iVar2;
  FUN_140848a70(param_1,param_2,iVar2,8);
  return;
}



// FUNCTION 140848bd0 ResizeShrink body=168 status=ok
// SIG undefined ResizeShrink(void)

ulonglong TArray<HAPI_ParmInfo,FDefaultAllocator>::ResizeShrink(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar4 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar5 - iVar4);
  if ((0x3fff < uVar2 * 0x90) || (uVar2 = (ulonglong)(uint)(iVar5 * 2), iVar4 * 3 < iVar5 * 2)) {
    if (0x40 < (uint)(iVar5 - iVar4)) {
      if (0 < iVar4) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar4 * 0x90,0);
        iVar5 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        uVar2 = SUB168(ZEXT816(0xe38e38e38e38e38f) * auVar1,0);
        iVar4 = (int)(uVar3 / 0x90);
      }
      goto LAB_140848c46;
    }
    if (iVar4 == 0) goto LAB_140848c46;
  }
  iVar4 = iVar5;
LAB_140848c46:
  if (iVar4 != iVar5) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x90,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 140848c80 FUN_140848c80 body=284 status=ok
// SIG undefined FUN_140848c80(void)

void FUN_140848c80(undefined8 *param_1,int param_2)

{
  ulonglong *puVar1;
  int iVar2;
  void *_Src;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  void *_Dst;
  int iVar7;
  undefined1 local_res10 [8];
  undefined *local_38;
  undefined1 *puStack_30;
  
  if (param_2 != *(int *)((longlong)param_1 + 0xc)) {
    iVar2 = *(int *)(param_1 + 1);
    *(int *)((longlong)param_1 + 0xc) = param_2;
    _Src = (void *)*param_1;
    if (param_2 != 0) {
      puStack_30 = local_res10;
      local_38 = &DAT_14060d670;
      local_res10[0] = 0;
      iVar7 = param_2 * 0x30;
      lVar4 = FUN_1415d8310(&local_38,&DAT_146216a38);
      puVar1 = (ulonglong *)(lVar4 + 0x18);
      uVar3 = 8;
      if (0xf < iVar7) {
        uVar3 = 0x10;
      }
      uVar6 = 0x10;
      if (0xf < iVar7) {
        uVar6 = (ulonglong)uVar3;
      }
      _Dst = (void *)((*puVar1 - 1) + uVar6 & ~(uVar6 - 1));
      uVar5 = (longlong)iVar7 + (longlong)_Dst;
      if (*(ulonglong *)(lVar4 + 0x20) < uVar5) {
        FMemStackBase::AllocateNewChunk(puVar1,(int)uVar6 + iVar7);
        _Dst = (void *)((*puVar1 - 1) + uVar6 & ~(uVar6 - 1));
        uVar5 = (longlong)iVar7 + (longlong)_Dst;
      }
      *puVar1 = uVar5;
      *param_1 = _Dst;
      if ((_Src != (void *)0x0) && (iVar2 != 0)) {
        if (param_2 <= iVar2) {
          iVar2 = param_2;
        }
        _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)(iVar2 * 0x30));
      }
    }
  }
  return;
}



// FUNCTION 140848da0 FUN_140848da0 body=26 status=ok
// SIG undefined FUN_140848da0(void)

void FUN_140848da0(longlong param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_140848a70(param_1,*(undefined4 *)(param_1 + 8),param_2,8);
    return;
  }
  return;
}



// FUNCTION 140848dc0 FUN_140848dc0 body=1753 status=ok
// SIG undefined FUN_140848dc0(void)

undefined8 FUN_140848dc0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  char cVar10;
  BOOL BVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int *piVar17;
  uint uVar18;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar19;
  uint uVar20;
  ulonglong *puVar21;
  longlong lVar22;
  uint uVar23;
  uint *puVar24;
  ulonglong *puVar25;
  undefined4 *_Src;
  uint uVar26;
  ulonglong *puVar27;
  ulonglong uVar28;
  bool bVar29;
  LARGE_INTEGER local_res20;
  ulonglong *local_168;
  undefined8 local_160;
  undefined4 *local_158;
  ulonglong local_150;
  void *local_148;
  int local_140;
  undefined4 local_13c;
  uint local_138;
  uint uStack_134;
  uint *puStack_130;
  undefined4 local_128;
  uint uStack_124;
  uint uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  LPCRITICAL_SECTION local_d8;
  undefined8 local_d0;
  uint uStack_c8;
  uint uStack_c4;
  uint *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  
  LOCK();
  bVar29 = *(int *)(param_1 + 8) == 0;
  if (bVar29) {
    *(int *)(param_1 + 8) = 0;
  }
  UNLOCK();
  if (!bVar29) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x18);
    plVar1 = (longlong *)(param_1 + 0x40);
    local_d8 = lpCriticalSection;
    do {
      puVar25 = (ulonglong *)0x0;
      BVar11 = TryEnterCriticalSection(lpCriticalSection);
      if (BVar11 == 0) {
        EnterCriticalSection(lpCriticalSection);
      }
      uVar18 = *(uint *)(param_1 + 0x68);
      puStack_130 = (uint *)(param_1 + 0x50);
      local_168 = (ulonglong *)0x0;
      local_160 = 0;
      local_138 = 0;
      uStack_134 = 1;
      uStack_124 = 0;
      uStack_120 = 0;
      if (uVar18 != 0) {
        puVar24 = *(uint **)(param_1 + 0x60);
        if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
          puVar24 = puStack_130;
        }
        uVar20 = *puVar24;
        puVar27 = puVar25;
        puVar21 = puVar25;
        while (uVar20 == 0) {
          iVar12 = (int)puVar27;
          uStack_120 = (int)puVar21 + 0x20;
          puVar21 = (ulonglong *)(ulonglong)uStack_120;
          local_138 = iVar12 + 1;
          puVar27 = (ulonglong *)(ulonglong)local_138;
          if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar12)
          goto LAB_140848f2a;
          uVar20 = puVar24[(longlong)iVar12 + 1];
        }
        uStack_134 = -uVar20 & uVar20;
        iVar12 = 0x1f;
        if (uStack_134 != 0) {
          for (; uStack_134 >> iVar12 == 0; iVar12 = iVar12 + -1) {
          }
        }
        if (uStack_134 == 0) {
          iVar12 = 0x20;
        }
        else {
          iVar12 = 0x1f - iVar12;
        }
        uStack_124 = (uStack_120 - iVar12) + 0x1f;
        if ((int)uVar18 < (int)uStack_124) {
LAB_140848f2a:
          uStack_124 = uVar18;
        }
      }
      local_128 = 0xffffffff;
      uVar20 = *(uint *)(param_1 + 0x68);
      uStack_110 = CONCAT44(uStack_134,local_138);
      uStack_b8 = CONCAT44(uStack_124,0xffffffff);
      uStack_f8 = CONCAT44(uStack_11c,uStack_120);
      iVar12 = (int)uVar20 >> 5;
      local_118._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
      uVar26 = -1 << ((byte)uVar20 & 0x1f);
      uVar23 = uVar20 & 0xffffffe0;
      local_118 = CONCAT44(local_118._4_4_,iVar12);
      uStack_108 = CONCAT44(uVar20,uVar26);
      uStack_100 = CONCAT44(uStack_124,uVar20) & 0xffffffffffffffe0;
      uStack_c8 = local_138;
      uStack_c4 = uStack_134;
      local_c0 = puStack_130;
      local_b0 = uStack_f8;
      local_d0 = plVar1;
      uVar8 = uStack_108;
      if (uVar20 != uVar18) {
        puVar24 = *(uint **)(param_1 + 0x60);
        if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
          puVar24 = puStack_130;
        }
        uVar26 = puVar24[iVar12] & uVar26;
        while (uVar26 == 0) {
          uVar23 = uVar23 + 0x20;
          uVar28 = uStack_100 >> 0x20;
          uStack_100 = CONCAT44((int)uVar28,uVar23);
          local_118._4_4_ = (undefined4)((ulonglong)local_118 >> 0x20);
          local_118 = CONCAT44(local_118._4_4_,iVar12 + 1);
          if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar12)
          goto LAB_140849014;
          uVar26 = puVar24[(longlong)iVar12 + 1];
          uStack_108 = 0xffffffff;
          iVar12 = iVar12 + 1;
        }
        uVar26 = -uVar26 & uVar26;
        iVar12 = 0x1f;
        if (uVar26 != 0) {
          for (; uVar26 >> iVar12 == 0; iVar12 = iVar12 + -1) {
          }
        }
        if (uVar26 == 0) {
          iVar12 = 0x20;
        }
        else {
          iVar12 = 0x1f - iVar12;
        }
        iVar12 = (uVar23 - iVar12) + 0x1f;
        uStack_108 = CONCAT44(iVar12,(undefined4)uStack_108);
        uVar8 = uStack_108;
        if ((int)uVar18 < iVar12) {
LAB_140849014:
          uStack_108 = CONCAT44(uVar18,(undefined4)uStack_108);
          uVar8 = uStack_108;
        }
      }
      while( true ) {
        lpCriticalSection = local_d8;
        if (((uStack_b8._4_4_ == (int)((ulonglong)uVar8 >> 0x20)) &&
            (local_c0 == (uint *)(param_1 + 0x50))) && (local_d0 == plVar1)) break;
        puVar27 = (ulonglong *)((longlong)uStack_b8._4_4_ * 0x10 + *local_d0);
        if ((longlong *)*puVar27 != (longlong *)0x0) {
          cVar10 = (**(code **)(*(longlong *)*puVar27 + 0x20))();
          if (cVar10 != '\0') {
            uVar28 = *puVar27;
            QueryPerformanceCounter(&local_res20);
            dVar5 = (double)local_res20.QuadPart * DAT_1468b02f8 + 16777216.0;
            if ((dVar5 - 7.5 < *(double *)(uVar28 + 0x88)) &&
               (*(double *)(uVar28 + 0x90) <= dVar5 - 15.0 &&
                dVar5 - 15.0 != *(double *)(uVar28 + 0x90))) {
              LOCK();
              *(undefined4 *)(uVar28 + 0x98) = 0;
              UNLOCK();
            }
            uVar15 = operator_new(1);
            local_158 = (undefined4 *)0x0;
            local_e0 = *(undefined8 *)(uVar28 + 0x20);
            local_150 = 1;
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_158,0);
            _Src = local_158;
            lVar19 = (longlong)(int)local_150;
            uVar14 = *(undefined4 *)(uVar28 + 0x34);
            uVar6 = *(undefined4 *)(uVar28 + 0x38);
            uVar7 = *(undefined4 *)(uVar28 + 0x3c);
            *local_158 = *(undefined4 *)(uVar28 + 0x30);
            local_158[1] = uVar14;
            local_158[2] = uVar6;
            local_158[3] = uVar7;
            local_148 = (void *)0x0;
            local_140 = (int)local_150;
            if ((int)local_150 == 0) {
              local_13c = 0;
            }
            else {
              TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_148,local_150 & 0xffffffff,0);
              _guard_xfg_dispatch_icall_nop(local_148,_Src,lVar19 << 4);
            }
            local_e8 = 0;
            local_a8 = 0;
            plStack_a0 = (longlong *)0x0;
            local_f0 = 0x2bca2875f4373fff;
            uVar16 = FLiveLinkHeartbeatMessage::StaticStruct();
            FUN_1408494a0(local_e0,uVar15,uVar16,&local_a8,&local_148,&local_e8,&local_f0);
            plVar9 = plStack_a0;
            if (plStack_a0 != (longlong *)0x0) {
              LOCK();
              plVar2 = plStack_a0 + 1;
              lVar19 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              _Src = local_158;
              if ((int)lVar19 == 1) {
                (**(code **)*plStack_a0)(plStack_a0);
                LOCK();
                piVar17 = (int *)((longlong)plVar9 + 0xc);
                iVar12 = *piVar17;
                *piVar17 = *piVar17 + -1;
                UNLOCK();
                _Src = local_158;
                if (iVar12 == 1) {
                  (**(code **)(*plVar9 + 8))(plVar9);
                  _Src = local_158;
                }
              }
            }
            if (local_148 != (void *)0x0) {
              FMemory::Free();
            }
            if (_Src != (undefined4 *)0x0) {
              FMemory::Free(_Src);
            }
            *(double *)(uVar28 + 0x88) = dVar5;
            LOCK();
            bVar29 = *(int *)(uVar28 + 0x98) == 0;
            if (bVar29) {
              *(int *)(uVar28 + 0x98) = 0;
            }
            UNLOCK();
            puVar25 = local_168;
            if (!bVar29) goto LAB_140849231;
          }
          lVar19 = (longlong)(int)local_160;
          iVar12 = (int)local_160 + 1;
          local_160 = CONCAT44(local_160._4_4_,iVar12);
          if (local_160._4_4_ < iVar12) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_168);
            puVar25 = local_168;
          }
          puVar25[lVar19] = *puVar27;
        }
LAB_140849231:
        uStack_b8 = CONCAT44(uStack_b8._4_4_,(uint)uStack_b8 & ~uStack_c4);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_c8);
      }
      puVar27 = puVar25;
      if (puVar25 != puVar25 + (int)local_160) {
LAB_140849264:
        if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
          uVar28 = (longlong)*(int *)(param_1 + 0x88) - 1;
          iVar12 = (int)(*puVar27 >> 4);
          uVar20 = 0x9e3779b9U - iVar12 ^ iVar12 << 8;
          uVar18 = -(uVar20 + iVar12) ^ uVar20 >> 0xd;
          uVar26 = (iVar12 - uVar20) - uVar18 ^ uVar18 >> 0xc;
          uVar20 = (uVar20 - uVar26) - uVar18 ^ uVar26 << 0x10;
          uVar18 = (uVar18 - uVar20) - uVar26 ^ uVar20 >> 5;
          uVar26 = (uVar26 - uVar20) - uVar18 ^ uVar18 >> 3;
          uVar20 = (uVar20 - uVar26) - uVar18 ^ uVar26 << 10;
          lVar19 = *(longlong *)(param_1 + 0x80);
          if (*(longlong *)(param_1 + 0x80) == 0) {
            lVar19 = param_1 + 0x78;
          }
          iVar12 = *(int *)(lVar19 + (((longlong)(int)((uVar18 - uVar20) - uVar26) ^
                                      (ulonglong)(uVar20 >> 0xf)) & uVar28) * 4);
          if (iVar12 != -1) {
            lVar3 = *plVar1;
            do {
              lVar22 = (longlong)iVar12;
              if (*(ulonglong *)(lVar3 + lVar22 * 0x10) == *puVar27) {
                uVar28 = (longlong)*(int *)(lVar3 + 0xc + lVar22 * 0x10) & uVar28;
                piVar17 = (int *)(lVar19 + uVar28 * 4);
                iVar13 = *(int *)(lVar19 + uVar28 * 4);
                if (iVar13 != -1) goto LAB_140849365;
                goto LAB_140849386;
              }
              iVar12 = *(int *)(lVar3 + 8 + lVar22 * 0x10);
            } while (iVar12 != -1);
          }
        }
        goto LAB_1408493f3;
      }
LAB_140849400:
      if (puVar25 != (ulonglong *)0x0) {
        FMemory::Free(puVar25);
      }
      LeaveCriticalSection(lpCriticalSection);
      FUN_1416b1760(0x3f800000);
      LOCK();
      bVar29 = *(int *)(param_1 + 8) == 0;
      if (bVar29) {
        *(int *)(param_1 + 8) = 0;
      }
      UNLOCK();
    } while (!bVar29);
  }
  return 0;
  while( true ) {
    piVar17 = (int *)(lVar3 + 8 + (longlong)iVar13 * 0x10);
    iVar13 = *piVar17;
    if (iVar13 == -1) break;
LAB_140849365:
    if (iVar13 == iVar12) {
      *piVar17 = *(int *)(lVar3 + 8 + lVar22 * 0x10);
      break;
    }
  }
LAB_140849386:
  bVar4 = (byte)iVar12 & 0x1f;
  if (*(int *)(param_1 + 0x74) != 0) {
    *(int *)(*plVar1 + (longlong)*(int *)(param_1 + 0x70) * 0x10) = iVar12;
  }
  lVar19 = *plVar1;
  *(undefined4 *)(lVar19 + lVar22 * 0x10) = 0xffffffff;
  if (*(int *)(param_1 + 0x74) < 1) {
    uVar14 = 0xffffffff;
  }
  else {
    uVar14 = *(undefined4 *)(param_1 + 0x70);
  }
  *(undefined4 *)(lVar19 + 4 + lVar22 * 0x10) = uVar14;
  *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
  *(int *)(param_1 + 0x70) = iVar12;
  lVar19 = *(longlong *)(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x60) == 0) {
    lVar19 = param_1 + 0x50;
  }
  if (iVar12 < 0) {
    iVar12 = iVar12 + 0x1f;
  }
  puVar24 = (uint *)(lVar19 + (longlong)(iVar12 >> 5) * 4);
  *puVar24 = *puVar24 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
LAB_1408493f3:
  puVar27 = puVar27 + 1;
  if (puVar27 == puVar25 + (int)local_160) goto LAB_140849400;
  goto LAB_140849264;
}



// FUNCTION 1408494a0 FUN_1408494a0 body=458 status=ok
// SIG undefined FUN_1408494a0(void)

void FUN_1408494a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  longlong local_48;
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if ((*(char *)(param_1 + 0x40) != '\0') &&
     (plVar2 = *(longlong **)(param_1 + 0x38), plVar2 != (longlong *)0x0)) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar7 = iVar5 == 0;
    if (bVar7) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (!bVar7) {
      LOCK();
      bVar7 = iVar5 == (int)plVar2[1];
      if (bVar7) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar7) {
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        plVar3 = *(longlong **)(param_1 + 0x30);
        if (plVar3 != (longlong *)0x0) {
          plVar6 = (longlong *)
                   TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x10,local_38);
          if (*plVar6 == 0) {
            local_48 = 0;
          }
          else {
            local_48 = *plVar6 + 8;
          }
          local_40 = (longlong *)plVar6[1];
          if (local_40 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_40 + 1) = (int)local_40[1] + 1;
            UNLOCK();
          }
          (**(code **)(*plVar3 + 0x28))
                    (plVar3,param_2,param_3,param_4,param_5,param_6,param_7,&local_48);
          plVar3 = local_40;
          if (local_40 != (longlong *)0x0) {
            LOCK();
            plVar6 = local_40 + 1;
            lVar4 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*local_40)(local_40);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
          }
          if (local_30 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_30 + 1;
            lVar4 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*local_30)(local_30);
              LOCK();
              piVar1 = (int *)((longlong)local_30 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*local_30 + 8))(local_30,1);
              }
            }
          }
        }
        LOCK();
        plVar3 = plVar2 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 != 1) {
          return;
        }
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 != 1) {
          return;
        }
        (**(code **)(*plVar2 + 8))(plVar2,1);
        return;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar7 = iVar5 == 0;
      if (bVar7) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 140849670 SetSourcePointer body=246 status=ok
// SIG undefined SetSourcePointer(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FLiveLinkSourceHandle::SetSourcePointer(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  puVar1 = (undefined8 *)(param_1 + 8);
  uStack_30 = (longlong *)param_2[1];
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_30 + 1) = (int)uStack_30[1] + 1;
    UNLOCK();
  }
  if (&local_38 != puVar1) {
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    uVar6 = *puVar1;
    plVar5 = *(longlong **)(param_1 + 0x10);
    local_28 = (undefined4)local_38;
    uStack_24 = local_38._4_4_;
    uStack_20 = (undefined4)uStack_30;
    uStack_1c = uStack_30._4_4_;
    *(undefined4 *)puVar1 = (undefined4)local_38;
    *(undefined4 *)(param_1 + 0xc) = local_38._4_4_;
    *(undefined4 *)(param_1 + 0x10) = (undefined4)uStack_30;
    *(undefined4 *)(param_1 + 0x14) = uStack_30._4_4_;
    local_38 = uVar6;
    uStack_30 = plVar5;
  }
  plVar5 = uStack_30;
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = uStack_30 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*uStack_30)(uStack_30);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*uStack_30 + 8))(uStack_30,1);
      }
    }
  }
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 140849780 FUN_140849780 body=207 status=ok
// SIG undefined FUN_140849780(void)

void FUN_140849780(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  plVar1 = *(longlong **)(param_1 + 400);
  if (((((plVar1 != (longlong *)0x0) &&
        (lVar3 = (**(code **)(*plVar1 + 0x38))(plVar1,*(undefined8 *)(param_1 + 0x178)), lVar3 != 0)
        ) && (*(char *)(param_1 + 0x188) != '\0')) &&
      (((iVar4 = 0, *(longlong *)(param_1 + 0x180) == 0 ||
        (iVar2 = FUN_14083c370(lVar3), iVar2 == -1)) || (iVar4 = iVar2, -1 < iVar2)))) &&
     (iVar4 < *(int *)(lVar3 + 0x48))) {
    if (*(longlong *)(param_1 + 0x118) != 0) {
      if (*(char *)(param_1 + 0x189) != '\0') {
        FUN_14223d0f0();
        return;
      }
      FUN_14223d270(*(longlong *)(param_1 + 0x118),
                    (longlong)iVar4 * 0x30 + *(longlong *)(lVar3 + 0x40),0,0,0);
    }
  }
  return;
}



// FUNCTION 140849850 FUN_140849850 body=286 status=ok
// SIG undefined FUN_140849850(void)

void FUN_140849850(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  undefined4 local_58 [2];
  undefined8 *local_50;
  undefined8 local_48;
  
  if (*(char *)(param_1 + 0x188) != '\0') {
    uVar2 = 0;
    local_50 = (undefined8 *)0x0;
    local_48 = 0;
    FUN_14083bac0(*(undefined8 *)(param_1 + 0x118),&local_50,0);
    puVar1 = local_50;
    uVar3 = (ulonglong)((longlong)(local_50 + (int)local_48) + (7 - (longlong)local_50)) >> 3;
    if (local_50 + (int)local_48 < local_50) {
      uVar3 = uVar2;
    }
    puVar4 = local_50;
    if (uVar3 != 0) {
      do {
        AK::MemoryMgr::StartProfileThreadUsage((long)*puVar4);
        uVar2 = uVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar2 != uVar3);
    }
    *(undefined1 *)(param_1 + 0x188) = 0;
    if (puVar1 != (undefined8 *)0x0) {
      FMemory::Free(puVar1);
    }
  }
  if (0 < *(int *)(param_1 + 0x180)) {
    FEditorScriptExecutionGuard::FEditorScriptExecutionGuard(local_res8);
    local_58[0] = param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x178,local_58);
    FEditorScriptExecutionGuard::~FEditorScriptExecutionGuard(local_res8);
  }
  FUN_142357eb0(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140849970 FUN_140849970 body=89 status=ok
// SIG undefined FUN_140849970(void)

void FUN_140849970(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_res8 [4];
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    if ((-1 < iVar1) && (iVar1 < *(int *)(lVar2 + 0x50))) {
      *param_2 = *(undefined8 *)(*(longlong *)(lVar2 + 8) + (longlong)iVar1 * 8);
      return;
    }
    FName::FName(local_res8,L"None",1);
    *param_2 = local_res8[0];
  }
  return;
}



// FUNCTION 1408499d0 TransformNames body=25 status=ok
// SIG undefined TransformNames(void)

void ULiveLinkBlueprintLibrary::TransformNames(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    TArray<FName,FDefaultAllocator>::operator=(param_2,*(longlong *)(param_1 + 8) + 8);
    return;
  }
  return;
}



// FUNCTION 1408499f0 FUN_1408499f0 body=125 status=ok
// SIG undefined FUN_1408499f0(void)

void FUN_1408499f0(longlong param_1,undefined4 param_2)

{
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  *(short *)(param_1 + 0x330) = *(short *)(param_1 + 0x330) + 1;
  *(undefined8 *)(param_1 + 0x328) = DAT_1468c21b0;
  if (*(short *)(param_1 + 0x330) == -1) {
    *(undefined2 *)(param_1 + 0x330) = 0;
  }
  SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>(local_38,param_1);
  local_30 = 0x3f800000;
  local_2c = 0x3f800000;
  local_28 = param_2;
  (**(code **)(*(longlong *)(param_1 + 0x6b8) + 0x10))((longlong *)(param_1 + 0x6b8),local_38);
  return;
}



// FUNCTION 140849a70 FUN_140849a70 body=437 status=ok
// SIG undefined FUN_140849a70(void)

void FUN_140849a70(longlong param_1,longlong param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  BOOL BVar6;
  longlong lVar7;
  int iVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  float fVar12;
  
  fVar12 = *(float *)(param_1 + 0x30) - *(float *)(param_2 + 0x74);
  *(float *)(param_1 + 0x30) = fVar12;
  if (fVar12 <= 0.0) {
    lVar7 = FWeakObjectPtr::Get(param_1 + 0x1c);
    if (lVar7 != 0) {
      plVar4 = *(longlong **)(param_1 + 0x28);
      lpCriticalSection = (LPCRITICAL_SECTION)(lVar7 + 0x58);
      BVar6 = TryEnterCriticalSection(lpCriticalSection);
      if (BVar6 == 0) {
        EnterCriticalSection(lpCriticalSection);
      }
      if (plVar4 != (longlong *)(lVar7 + 0x38)) {
        iVar8 = (int)plVar4[1];
        if (iVar8 != 0) {
          plVar10 = (longlong *)(*plVar4 + 0x10);
          do {
            if (plVar10[2] != 0) {
              FMemory::Free();
            }
            if (*plVar10 != 0) {
              FMemory::Free();
            }
            plVar10 = plVar10 + 6;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        iVar8 = *(int *)(lVar7 + 0x40);
        lVar7 = *(longlong *)(lVar7 + 0x38);
        *(int *)(plVar4 + 1) = iVar8;
        if ((iVar8 == 0) && (*(int *)((longlong)plVar4 + 0xc) == 0)) {
          *(undefined4 *)((longlong)plVar4 + 0xc) = 0;
        }
        else {
          TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(plVar4,iVar8);
          puVar9 = (undefined4 *)*plVar4;
          if (iVar8 != 0) {
            lVar7 = lVar7 + 0x20;
            do {
              uVar1 = *(undefined4 *)(lVar7 + -0x1c);
              uVar2 = *(undefined4 *)(lVar7 + -0x18);
              uVar3 = *(undefined4 *)(lVar7 + -0x14);
              *puVar9 = *(undefined4 *)(lVar7 + -0x20);
              puVar9[1] = uVar1;
              puVar9[2] = uVar2;
              puVar9[3] = uVar3;
              FString::FString(puVar9 + 4,lVar7 + -0x10);
              FString::FString(puVar9 + 8,lVar7);
              lVar7 = lVar7 + 0x30;
              puVar9 = puVar9 + 0xc;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
        }
      }
      LeaveCriticalSection(lpCriticalSection);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar5 = *(undefined8 *)(param_1 + 8);
    *(undefined1 *)(param_2 + 0x70) = 1;
    iVar8 = *(int *)(param_2 + 0x68);
    lVar7 = (longlong)iVar8;
    *(int *)(param_2 + 0x68) = iVar8 + 1;
    if (*(int *)(param_2 + 0x6c) < iVar8 + 1) {
      TArray<FLatentResponse::FExecutionInfo,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (param_2,iVar8);
    }
    lVar11 = *(longlong *)(param_2 + 0x60);
    if (*(longlong *)(param_2 + 0x60) == 0) {
      lVar11 = param_2;
    }
    *(undefined8 *)(lVar11 + lVar7 * 0x18) = uVar5;
    *(undefined4 *)(lVar11 + 8 + lVar7 * 0x18) = uVar3;
    *(undefined4 *)(lVar11 + 0xc + lVar7 * 0x18) = uVar1;
    *(undefined4 *)(lVar11 + 0x10 + lVar7 * 0x18) = uVar2;
  }
  return;
}



// FUNCTION 140849c30 FUN_140849c30 body=382 status=ok
// SIG undefined FUN_140849c30(void)

void FUN_140849c30(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  FUN_142290d80(param_1 + 8);
  lVar6 = 0;
  *(float *)(param_1 + 0x50) = *(float *)(param_2 + 2) + *(float *)(param_1 + 0x50);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar1 = FUN_14084a190();
    lVar5 = *(longlong *)(param_1 + 0x38);
    lVar2 = lVar5;
    if (lVar5 != 0) {
LAB_140849c71:
      if (lVar2 != lVar1) goto code_r0x000140849c76;
      if (lVar5 != 0) {
        lVar2 = FUN_14084a190();
        for (lVar5 = *(longlong *)(param_1 + 0x38);
            (lVar1 = lVar6, lVar5 != 0 && (lVar1 = *(longlong *)(param_1 + 0x38), lVar5 != lVar2));
            lVar5 = *(longlong *)(lVar5 + 0x30)) {
        }
        if ((*(byte *)(lVar1 + 0xb4) & 1) == 0) goto LAB_140849cba;
      }
    }
  }
LAB_140849cb1:
  uVar3 = FUN_14084a450();
  *(undefined8 *)(param_1 + 0x38) = uVar3;
LAB_140849cba:
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar5 = lVar6;
    if (*(longlong *)(param_1 + 0x38) != 0) {
      lVar1 = FUN_14084a190();
      for (lVar2 = *(longlong *)(param_1 + 0x38);
          (lVar5 = lVar6, lVar2 != 0 && (lVar5 = *(longlong *)(param_1 + 0x38), lVar2 != lVar1));
          lVar2 = *(longlong *)(lVar2 + 0x30)) {
      }
    }
    if (lVar5 == *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10)) {
      return;
    }
  }
  lVar5 = lVar6;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar1 = FUN_14084a190();
    for (lVar2 = *(longlong *)(param_1 + 0x38);
        (lVar5 = lVar6, lVar2 != 0 && (lVar5 = *(longlong *)(param_1 + 0x38), lVar2 != lVar1));
        lVar2 = *(longlong *)(lVar2 + 0x30)) {
    }
  }
  uVar3 = *(undefined8 *)(*param_2 + 0xa0);
  FUN_1417846f0(uVar3,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  plVar4 = (longlong *)FUN_1417985e0(lVar5,uVar3,0,0,0,0,0,0,0);
  *(longlong **)(param_1 + 0x40) = plVar4;
  (**(code **)(*plVar4 + 0x278))(plVar4);
  return;
code_r0x000140849c76:
  lVar2 = *(longlong *)(lVar2 + 0x30);
  if (lVar2 == 0) goto LAB_140849cb1;
  goto LAB_140849c71;
}



// FUNCTION 140849db0 FUN_140849db0 body=437 status=ok
// SIG undefined FUN_140849db0(void)

void FUN_140849db0(longlong *param_1,undefined8 *param_2)

{
  void *_Src;
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  longlong *local_48;
  int local_40;
  
  local_40 = *(int *)(param_2 + 1);
  lVar5 = (longlong)local_40;
  _Src = (void *)*param_2;
  plVar11 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  if (local_40 != 0) {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_48,local_40,0);
    plVar11 = local_48;
    _guard_xfg_dispatch_icall_nop(local_48,_Src,lVar5 << 3);
  }
  iVar4 = (int)param_1[1];
  lVar5 = (longlong)iVar4;
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    lVar2 = (longlong)local_40;
    iVar10 = 0;
    if (plVar11 != plVar11 + lVar2) {
      plVar3 = plVar11;
      do {
        if (*plVar3 == *(longlong *)*param_1) {
          bVar7 = 1;
          goto LAB_140849e6c;
        }
        plVar3 = plVar3 + 1;
      } while (plVar3 != plVar11 + lVar2);
    }
    bVar7 = 0;
LAB_140849e6c:
    lVar6 = 0;
    iVar8 = 0;
    do {
      lVar6 = lVar6 + 1;
      iVar9 = iVar8 + 1;
      if (lVar6 < lVar5) {
        do {
          if (plVar11 != plVar11 + lVar2) {
            plVar3 = plVar11;
            do {
              if (*plVar3 == *(longlong *)(*param_1 + lVar6 * 8)) {
                bVar1 = 1;
                goto LAB_140849ea6;
              }
              plVar3 = plVar3 + 1;
            } while (plVar3 != plVar11 + lVar2);
          }
          bVar1 = 0;
LAB_140849ea6:
          if (bVar7 != bVar1) break;
          iVar9 = iVar9 + 1;
          lVar6 = lVar6 + 1;
        } while (lVar6 < lVar5);
      }
      if (bVar7 != 0) {
        if (iVar10 != iVar8) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*param_1 + (longlong)iVar10 * 8),
                     (void *)(*param_1 + (longlong)iVar8 * 8),(longlong)(iVar9 - iVar8) << 3);
        }
        iVar10 = iVar10 + (iVar9 - iVar8);
      }
      bVar7 = bVar7 ^ 1;
      iVar8 = iVar9;
    } while (lVar6 < lVar5);
    iVar4 = iVar4 - iVar10;
    *(int *)(param_1 + 1) = iVar10;
  }
  if (plVar11 != (longlong *)0x0) {
    FMemory::Free(plVar11);
  }
  if (0 < iVar4) {
    *(undefined4 *)(param_1 + 0xb) = 0;
    if (0x7fffffff < *(uint *)((longlong)param_1 + 0x5c)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 10,0);
      return;
    }
  }
  return;
}



// FUNCTION 140849f70 FUN_140849f70 body=162 status=ok
// SIG undefined FUN_140849f70(void)

longlong FUN_140849f70(void)

{
  if (DAT_14685efa8 == 0) {
    FUN_14171ccd0(L"/Script/LiveLink",L"LiveLinkComponent",&DAT_14685efa8,FUN_14084f770,0x198,
                  0x10000000,0,L"Engine",&LAB_14084bb20,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_14685efa8;
}



// FUNCTION 14084a020 FUN_14084a020 body=47 status=ok
// SIG undefined FUN_14084a020(void)

longlong FUN_14084a020(void)

{
  if (DAT_14685efa0 == 0) {
    FUN_141786440(&DAT_14685efa0,&PTR_FUN_14410cde0);
  }
  return DAT_14685efa0;
}


