// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143248610 FUN_143248610 body=87 status=ok
// SIG undefined FUN_143248610(void)

undefined8 FUN_143248610(undefined4 *param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  param_1[4] = 0;
  param_1[1] = param_3;
  *param_1 = param_4;
  uVar1 = SUB168(ZEXT816(0x168) * ZEXT416(param_3),0);
  if (SUB168(ZEXT816(0x168) * ZEXT416(param_3),8) != 0) {
    uVar1 = 0xffffffffffffffff;
  }
  lVar2 = FUN_143246250(param_2,uVar1);
  *(longlong *)(param_1 + 2) = lVar2;
  uVar1 = 0x34;
  if (lVar2 != 0) {
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 143248670 FUN_143248670 body=21 status=ok
// SIG undefined FUN_143248670(void)

longlong FUN_143248670(longlong param_1)

{
  FUN_143248690();
  return param_1 + 0x168;
}



// FUNCTION 143248690 FUN_143248690 body=1525 status=ok
// SIG undefined FUN_143248690(void)

void FUN_143248690(longlong param_1,longlong param_2,float *param_3,int param_4)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
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
  float local_res8;
  float local_res20;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1c8;
  float fStack_1c0;
  float local_1b8;
  float fStack_1b0;
  float local_1a8;
  float fStack_1a0;
  float local_198;
  float fStack_190;
  float local_188;
  float fStack_180;
  float local_178;
  float fStack_170;
  float local_168;
  float fStack_160;
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  
  fVar3 = *(float *)(param_1 + 0x18);
  fVar4 = *(float *)(param_1 + 0x2c);
  fVar5 = *(float *)(param_1 + 0x40);
  fVar6 = *(float *)(param_1 + 0x54);
  fVar7 = *(float *)(param_1 + 0x68);
  fVar8 = *(float *)(param_1 + 0x7c);
  fVar1 = *(float *)(param_1 + 0x98);
  fVar9 = *(float *)(param_1 + 0x90);
  fVar2 = *(float *)(param_1 + 0x9c);
  fVar24 = *(float *)(param_1 + 0xb4);
  local_1c8 = *(float *)(param_1 + 0xb8);
  fVar20 = *(float *)(param_1 + 0xbc);
  fStack_1c0 = *(float *)(param_1 + 0xc0);
  local_1b8 = *(float *)(param_1 + 0xd0);
  fVar26 = *(float *)(param_1 + 0xd4);
  fStack_1b0 = *(float *)(param_1 + 0xd8);
  local_1a8 = *(float *)(param_1 + 0xe8);
  fVar21 = *(float *)(param_1 + 0xec);
  fStack_1a0 = *(float *)(param_1 + 0xf0);
  local_198 = *(float *)(param_1 + 0x100);
  fVar27 = *(float *)(param_1 + 0x104);
  fStack_190 = *(float *)(param_1 + 0x108);
  local_188 = *(float *)(param_1 + 0x118);
  fVar22 = *(float *)(param_1 + 0x11c);
  fStack_180 = *(float *)(param_1 + 0x120);
  local_178 = *(float *)(param_1 + 0x130);
  fStack_170 = *(float *)(param_1 + 0x138);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  uVar11 = *(undefined8 *)(param_1 + 0x38);
  uVar12 = *(undefined8 *)(param_1 + 0x44);
  uVar13 = *(undefined8 *)(param_1 + 0x4c);
  uVar14 = *(undefined8 *)(param_1 + 0x58);
  uVar15 = *(undefined8 *)(param_1 + 0x60);
  uVar16 = *(undefined8 *)(param_1 + 0x6c);
  uVar17 = *(undefined8 *)(param_1 + 0x74);
  uVar18 = *(undefined8 *)(param_1 + 0x80);
  uVar19 = *(undefined8 *)(param_1 + 0x88);
  fVar28 = *(float *)(param_1 + 0x144);
  local_168 = *(float *)(param_1 + 0x148);
  fVar23 = *(float *)(param_1 + 0x14c);
  fStack_160 = *(float *)(param_1 + 0x150);
  fVar29 = *(float *)(param_1 + 0xcc);
  fVar30 = *(float *)(param_1 + 0xe4);
  fVar31 = *(float *)(param_1 + 0xfc);
  fVar32 = *(float *)(param_1 + 0x114);
  fVar33 = *(float *)(param_1 + 300);
  fVar34 = *(float *)(param_1 + 0x134);
  if (param_4 != 0) {
    param_2 = param_2 - (longlong)param_3;
    fStack_144 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
    fStack_148 = (float)*(undefined8 *)(param_1 + 0x10);
    fStack_14c = (float)((ulonglong)*(undefined8 *)(param_1 + 8) >> 0x20);
    local_150 = (float)*(undefined8 *)(param_1 + 8);
    fStack_12c = (float)((ulonglong)*(undefined8 *)(param_1 + 0x24) >> 0x20);
    fStack_130 = (float)*(undefined8 *)(param_1 + 0x24);
    fStack_134 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x1c) >> 0x20);
    local_138 = (float)*(undefined8 *)(param_1 + 0x1c);
    fVar25 = fStack_1c0;
    local_res8 = local_1b8;
    local_res20 = local_1c8;
    local_1f8 = fStack_1b0;
    local_1f4 = local_1a8;
    local_1f0 = fStack_1a0;
    local_1ec = local_198;
    local_1e8 = fStack_190;
    local_1e4 = local_188;
    local_1e0 = fStack_180;
    local_1dc = local_178;
    local_1d8 = fStack_170;
    local_1d4 = local_168;
    local_1d0 = fStack_160;
    do {
      fStack_160 = fVar23;
      local_168 = fVar28;
      fStack_170 = fVar34;
      local_178 = fVar33;
      fStack_180 = fVar22;
      local_188 = fVar32;
      fStack_190 = fVar27;
      local_198 = fVar31;
      fStack_1a0 = fVar21;
      local_1a8 = fVar30;
      fStack_1b0 = fVar26;
      local_1b8 = fVar29;
      fStack_1c0 = fVar20;
      local_1c8 = fVar24;
      fVar24 = *(float *)(param_2 + (longlong)param_3);
      fVar20 = local_res20 * fStack_148;
      local_res20 = local_1c8;
      fVar20 = ((local_1c8 * fStack_14c + local_150 * fVar24 + fVar20) - fStack_1c0 * fStack_144) -
               fVar25 * fVar3;
      fVar26 = ((local_1b8 * fStack_134 + local_138 * fVar20 + local_res8 * fStack_130) -
               fStack_1b0 * fStack_12c) - local_1f8 * fVar4;
      local_res8 = local_1b8;
      local_1f8 = fStack_1b0;
      local_120 = (float)uVar10;
      fStack_11c = (float)((ulonglong)uVar10 >> 0x20);
      fStack_118 = (float)uVar11;
      fStack_114 = (float)((ulonglong)uVar11 >> 0x20);
      fVar21 = ((local_1a8 * fStack_11c + local_120 * fVar26 + local_1f4 * fStack_118) -
               fStack_1a0 * fStack_114) - local_1f0 * fVar5;
      local_1f4 = local_1a8;
      local_1f0 = fStack_1a0;
      local_108 = (float)uVar12;
      fStack_104 = (float)((ulonglong)uVar12 >> 0x20);
      fStack_100 = (float)uVar13;
      fStack_fc = (float)((ulonglong)uVar13 >> 0x20);
      fVar27 = ((local_198 * fStack_104 + local_108 * fVar21 + local_1ec * fStack_100) -
               fStack_190 * fStack_fc) - local_1e8 * fVar6;
      local_1ec = local_198;
      local_1e8 = fStack_190;
      local_f0 = (float)uVar14;
      fStack_ec = (float)((ulonglong)uVar14 >> 0x20);
      fStack_e8 = (float)uVar15;
      fStack_e4 = (float)((ulonglong)uVar15 >> 0x20);
      fVar22 = ((local_188 * fStack_ec + local_f0 * fVar27 + local_1e4 * fStack_e8) -
               fStack_180 * fStack_e4) - local_1e0 * fVar7;
      local_1e4 = local_188;
      local_1e0 = fStack_180;
      local_d8 = (float)uVar16;
      fStack_d4 = (float)((ulonglong)uVar16 >> 0x20);
      fStack_d0 = (float)uVar17;
      fStack_cc = (float)((ulonglong)uVar17 >> 0x20);
      fVar28 = ((local_178 * fStack_d4 + local_d8 * fVar22 + local_1dc * fStack_d0) -
               fStack_170 * fStack_cc) - local_1d8 * fVar8;
      local_1dc = local_178;
      local_1d8 = fStack_170;
      local_c0 = (float)uVar18;
      fStack_bc = (float)((ulonglong)uVar18 >> 0x20);
      fStack_b8 = (float)uVar19;
      fStack_b4 = (float)((ulonglong)uVar19 >> 0x20);
      fVar23 = ((local_168 * fStack_bc + local_c0 * fVar28 + local_1d4 * fStack_b8) -
               fStack_160 * fStack_b4) - local_1d0 * fVar9;
      local_1d4 = local_168;
      local_1d0 = fStack_160;
      *param_3 = fVar23 * fVar1 + fVar24 * fVar2;
      param_3 = param_3 + 1;
      param_4 = param_4 + -1;
      fVar29 = fVar20;
      fVar25 = fStack_1c0;
      fVar30 = fVar26;
      fVar31 = fVar21;
      fVar32 = fVar27;
      fVar33 = fVar22;
      fVar34 = fVar28;
    } while (param_4 != 0);
  }
  *(float *)(param_1 + 300) = fVar33;
  *(float *)(param_1 + 0x130) = local_178;
  *(float *)(param_1 + 0x134) = fVar34;
  *(float *)(param_1 + 0x138) = fStack_170;
  *(float *)(param_1 + 0xb4) = fVar24;
  *(float *)(param_1 + 0xb8) = local_1c8;
  *(float *)(param_1 + 0xbc) = fVar20;
  *(float *)(param_1 + 0xc0) = fStack_1c0;
  *(float *)(param_1 + 0xcc) = fVar29;
  *(float *)(param_1 + 0xd0) = local_1b8;
  *(float *)(param_1 + 0xd4) = fVar26;
  *(float *)(param_1 + 0xd8) = fStack_1b0;
  *(float *)(param_1 + 0xe4) = fVar30;
  *(float *)(param_1 + 0xe8) = local_1a8;
  *(float *)(param_1 + 0xec) = fVar21;
  *(float *)(param_1 + 0xf0) = fStack_1a0;
  *(float *)(param_1 + 0xfc) = fVar31;
  *(float *)(param_1 + 0x100) = local_198;
  *(float *)(param_1 + 0x104) = fVar27;
  *(float *)(param_1 + 0x108) = fStack_190;
  *(float *)(param_1 + 0x114) = fVar32;
  *(float *)(param_1 + 0x118) = local_188;
  *(float *)(param_1 + 0x11c) = fVar22;
  *(float *)(param_1 + 0x120) = fStack_180;
  *(float *)(param_1 + 0x144) = fVar28;
  *(float *)(param_1 + 0x148) = local_168;
  *(float *)(param_1 + 0x14c) = fVar23;
  *(float *)(param_1 + 0x150) = fStack_160;
  return;
}



// FUNCTION 143248c90 FUN_143248c90 body=1196 status=ok
// SIG undefined FUN_143248c90(void)

void FUN_143248c90(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  undefined4 uVar15;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined4 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined4 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined4 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined4 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined4 local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined1 local_1d0 [48];
  undefined1 local_1a0 [48];
  undefined1 local_170 [48];
  undefined1 local_140 [48];
  undefined1 local_110 [48];
  undefined1 local_e0 [48];
  undefined1 local_b0 [152];
  
  FUN_14324ac80(*param_1,*param_2,*(double *)(param_2 + 2) * 0.01,local_1d0,local_1a0,local_170,
                local_140,local_110,local_e0,local_b0);
  uVar2 = 0;
  uVar3 = 0;
  uVar4 = 0;
  if (param_1[1] != 0) {
    do {
      lVar1 = (ulonglong)uVar3 * 0x168;
      FUN_143249850(param_1,local_1d0,*(longlong *)(param_1 + 2) + lVar1,2);
      FUN_143249850(param_1,local_1a0,*(longlong *)(param_1 + 2) + lVar1,7);
      FUN_143249850(param_1,local_170,*(longlong *)(param_1 + 2) + lVar1,0xc);
      FUN_143249850(param_1,local_140,*(longlong *)(param_1 + 2) + lVar1,0x11);
      FUN_143249850(param_1,local_110,*(longlong *)(param_1 + 2) + lVar1,0x16);
      FUN_143249850(param_1,local_e0,*(longlong *)(param_1 + 2) + lVar1,0x1b);
      FUN_143249850(param_1,local_b0,*(longlong *)(param_1 + 2) + lVar1,0x20);
      uVar4 = param_1[1];
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  uVar6 = 0;
  uVar3 = 0;
  if (uVar4 != 0) {
    do {
      FUN_1432498f0(param_1,1,uVar6 * 0x168 + *(longlong *)(param_1 + 2),0x25);
      uVar3 = param_1[1];
      uVar4 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar4;
    } while (uVar4 < uVar3);
  }
  uVar15 = 0;
  if (*(char *)(param_2 + 4) == '\0') {
    dVar14 = (double)FUN_143254fa0(*param_2);
    uVar15 = SUB84(dVar14,0);
    uVar3 = param_1[1];
    if (dVar14 < 0.0) {
      dVar14 = _guard_xfg_dispatch_icall_nop(10.0,dVar14 * 0.05);
      uVar15 = SUB84(dVar14,0);
    }
  }
  uVar6 = 0;
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      FUN_143249830(param_1,uVar15,*(longlong *)(param_1 + 2) + uVar6 * 0x168,0x26);
      FUN_143249830(param_1,0,*(longlong *)(param_1 + 2) + uVar6 * 0x168,0x27);
      uVar4 = param_1[1];
      uVar3 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar3;
    } while (uVar3 < uVar4);
  }
  uVar5 = 0;
  uVar3 = 0;
  if (uVar4 != 0) {
    do {
      FUN_143249830(param_1,0,*(longlong *)(param_1 + 2) + 0xac + (ulonglong)uVar5 * 0x168,0x2d);
      FUN_143249830(param_1,0,*(longlong *)(param_1 + 2) + 0xac + (ulonglong)uVar5 * 0x168,0x2e);
      uVar3 = param_1[1];
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  uVar6 = 0;
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      FUN_1432498f0(param_1,1,uVar6 * 0x168 + *(longlong *)(param_1 + 2),0x28);
      uVar4 = param_1[1];
      uVar3 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar3;
    } while (uVar3 < uVar4);
  }
  uVar3 = 0;
  if (uVar4 != 0) {
    do {
      FUN_143249830(param_1,0,*(longlong *)(param_1 + 2) + 0xac + (ulonglong)uVar3 * 0x168,0);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)param_1[1]);
    if (param_1[1] != 0) {
      do {
        FUN_143249830(param_1,0,*(longlong *)(param_1 + 2) + 0xac + (ulonglong)uVar2 * 0x168,0x2c);
        uVar2 = uVar2 + 1;
      } while (uVar2 < (uint)param_1[1]);
    }
  }
  lVar1 = *(longlong *)(param_1 + 2);
  local_278 = *(undefined8 *)(lVar1 + 8);
  uStack_270 = *(undefined8 *)(lVar1 + 0x10);
  local_268 = *(undefined4 *)(lVar1 + 0x18);
  local_250 = *(undefined4 *)(lVar1 + 0x2c);
  local_260 = *(undefined8 *)(lVar1 + 0x1c);
  uStack_258 = *(undefined8 *)(lVar1 + 0x24);
  local_238 = *(undefined4 *)(lVar1 + 0x40);
  local_220 = *(undefined4 *)(lVar1 + 0x54);
  local_248 = *(undefined8 *)(lVar1 + 0x30);
  uStack_240 = *(undefined8 *)(lVar1 + 0x38);
  local_208 = *(undefined4 *)(lVar1 + 0x68);
  local_1f0 = *(undefined4 *)(lVar1 + 0x7c);
  local_230 = *(undefined8 *)(lVar1 + 0x44);
  uStack_228 = *(undefined8 *)(lVar1 + 0x4c);
  local_1d8 = *(undefined4 *)(lVar1 + 0x90);
  local_218 = *(undefined8 *)(lVar1 + 0x58);
  uStack_210 = *(undefined8 *)(lVar1 + 0x60);
  local_200 = *(undefined8 *)(lVar1 + 0x6c);
  uStack_1f8 = *(undefined8 *)(lVar1 + 0x74);
  local_1e8 = *(undefined4 *)(lVar1 + 0x80);
  uStack_1e4 = *(undefined4 *)(lVar1 + 0x84);
  uStack_1e0 = *(undefined4 *)(lVar1 + 0x88);
  uStack_1dc = *(undefined4 *)(lVar1 + 0x8c);
  fVar7 = (float)thunk_FUN_143249ad0(&local_278);
  fVar8 = (float)thunk_FUN_143249ad0(&local_260);
  fVar9 = (float)thunk_FUN_143249ad0(&local_248);
  fVar10 = (float)thunk_FUN_143249ad0(&local_230);
  fVar11 = (float)thunk_FUN_143249ad0(&local_218);
  fVar12 = (float)thunk_FUN_143249ad0(&local_200);
  fVar13 = (float)thunk_FUN_143249ad0(&local_1e8);
  if (fVar8 <= fVar7) {
    fVar8 = fVar7;
  }
  if (fVar8 <= fVar9) {
    fVar8 = fVar9;
  }
  if (fVar8 <= fVar10) {
    fVar8 = fVar10;
  }
  if (fVar8 <= fVar11) {
    fVar8 = fVar11;
  }
  if (fVar8 <= fVar12) {
    fVar8 = fVar12;
  }
  if (fVar8 <= fVar13) {
    fVar8 = fVar13;
  }
  param_1[4] = (int)(longlong)(fVar8 * 6.91);
  return;
}



// FUNCTION 143249140 FUN_143249140 body=4 status=ok
// SIG undefined FUN_143249140(void)

int FUN_143249140(undefined8 param_1,int param_2)

{
  return param_2 * 100;
}



// FUNCTION 143249150 FUN_143249150 body=80 status=ok
// SIG undefined FUN_143249150(void)

undefined8 FUN_143249150(undefined4 *param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  param_1[1] = param_3;
  *param_1 = param_4;
  uVar1 = SUB168(ZEXT816(100) * ZEXT416(param_3),0);
  if (SUB168(ZEXT816(100) * ZEXT416(param_3),8) != 0) {
    uVar1 = 0xffffffffffffffff;
  }
  lVar2 = FUN_143246250(param_2,uVar1);
  *(longlong *)(param_1 + 2) = lVar2;
  uVar1 = 0x34;
  if (lVar2 != 0) {
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 1432491a0 FUN_1432491a0 body=604 status=ok
// SIG undefined FUN_1432491a0(void)

longlong FUN_1432491a0(longlong param_1,float *param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  fVar1 = *(float *)(param_1 + 8);
  fVar6 = *(float *)(param_1 + 0x40);
  fVar11 = *(float *)(param_1 + 0x44);
  fVar7 = *(float *)(param_1 + 0x48);
  fVar12 = *(float *)(param_1 + 0x4c);
  fVar2 = *(float *)(param_1 + 0x20);
  dVar3 = _guard_xfg_dispatch_icall_nop(2.0,(double)-fVar1);
  if (param_4 != 0) {
    fStack_bc = (float)((ulonglong)uVar5 >> 0x20);
    fVar9 = fVar12;
    fVar10 = fVar11;
    do {
      fVar11 = fVar6;
      fVar12 = fVar7;
      param_4 = param_4 + -1;
      fVar6 = *(float *)(param_1 + 0x30) * *param_2;
      param_2 = param_2 + 1;
      *(float *)(param_1 + 0x34) = fVar6;
      fVar7 = fVar6 * 8388607.0 * (float)dVar3;
      if (fVar7 <= 0.0) {
        fVar7 = fVar7 - 0.5;
      }
      else {
        fVar7 = fVar7 + 0.5;
      }
      fVar6 = *(float *)(param_1 + 0x38);
      fVar8 = *(float *)(param_1 + 0x3c) - 1.0;
      if (*(float *)(param_1 + 0x3c) <= 1.0) {
        fVar8 = *(float *)(param_1 + 0xc);
        fVar6 = (float)((int)fVar7 << ((byte)(int)fVar1 & 0x1f)) * 1.192093e-07;
      }
      local_c8 = (float)uVar4;
      fStack_c0 = (float)uVar5;
      *(float *)(param_1 + 0x3c) = fVar8;
      fStack_c4 = (float)((ulonglong)uVar4 >> 0x20);
      *(float *)(param_1 + 0x38) = fVar6;
      fVar7 = ((fVar11 * fStack_c4 + local_c8 * fVar6 + fVar10 * fStack_c0) - fVar12 * fStack_bc) -
              fVar9 * fVar2;
      *param_3 = fVar7 * *(float *)(param_1 + 0x58);
      param_3 = param_3 + 1;
      fVar9 = fVar12;
      fVar10 = fVar11;
    } while (param_4 != 0);
  }
  *(float *)(param_1 + 0x40) = fVar6;
  *(float *)(param_1 + 0x44) = fVar11;
  *(float *)(param_1 + 0x48) = fVar7;
  *(float *)(param_1 + 0x4c) = fVar12;
  return param_1 + 100;
}



// FUNCTION 143249400 FUN_143249400 body=605 status=ok
// SIG undefined FUN_143249400(void)

void FUN_143249400(uint *param_1,int *param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 local_68 [80];
  
  uVar7 = 0;
  cVar2 = (char)param_2[4];
  iVar5 = 0;
  if (cVar2 == '\0') {
    iVar5 = 0x18 - *(int *)(&DAT_145aed640 + (longlong)*param_2 * 4);
  }
  uVar4 = 0;
  uVar1 = 0;
  if (param_1[1] != 0) {
    do {
      FUN_1432498f0(param_1,iVar5,uVar4 * 100 + *(longlong *)(param_1 + 2),2);
      uVar1 = param_1[1];
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < uVar1);
    cVar2 = (char)param_2[4];
  }
  iVar5 = 0;
  if ((cVar2 == '\0') && (iVar5 = param_2[1], 48000 < *param_1)) {
    iVar5 = iVar5 * 2;
  }
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      FUN_1432498f0(param_1,iVar5,(ulonglong)uVar3 * 100 + *(longlong *)(param_1 + 2),3);
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_1[1]);
    cVar2 = (char)param_2[4];
  }
  auVar8._0_8_ = 20000.0;
  if (cVar2 == '\0') {
    auVar8._0_8_ = *(double *)(param_2 + 2) * 0.01;
    auVar8._8_8_ = 0;
    if (0.0 < auVar8._0_8_) {
      auVar8 = sqrtpd(auVar8,auVar8);
    }
    auVar8._0_8_ = 20000.0 - auVar8._0_8_ * 19000.0;
  }
  FUN_143249b70(*param_1,0x4034000000000000,auVar8._0_8_,local_68);
  uVar4 = 0;
  uVar1 = 0;
  if (param_1[1] != 0) {
    do {
      FUN_143249850(param_1,local_68,uVar4 * 100 + *(longlong *)(param_1 + 2),4);
      uVar1 = param_1[1];
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < uVar1);
  }
  uVar6 = 0;
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      FUN_143249830(param_1,0x3ff0000000000000,
                    *(longlong *)(param_1 + 2) + 0x30 + (ulonglong)uVar6 * 100,0xb);
      FUN_143249830(param_1,0,*(longlong *)(param_1 + 2) + 0x30 + (ulonglong)uVar6 * 100,0xc);
      uVar3 = param_1[1];
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar3);
  }
  uVar4 = 0;
  uVar1 = 0;
  if (uVar3 != 0) {
    do {
      FUN_1432498f0(param_1,1,uVar4 * 100 + *(longlong *)(param_1 + 2),9);
      uVar1 = param_1[1];
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < uVar1);
  }
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      FUN_143249830(param_1,0x3ff0000000000000,
                    *(longlong *)(param_1 + 2) + 0x30 + (ulonglong)uVar3 * 100,0);
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_1[1]);
    if (param_1[1] != 0) {
      do {
        FUN_143249830(param_1,0x3ff0000000000000,
                      *(longlong *)(param_1 + 2) + 0x30 + (ulonglong)uVar7 * 100,10);
        uVar7 = uVar7 + 1;
      } while (uVar7 < param_1[1]);
    }
  }
  return;
}



// FUNCTION 143249660 FUN_143249660 body=417 status=ok
// SIG undefined FUN_143249660(void)

void FUN_143249660(float *param_1,float *param_2,float param_3,float param_4,float param_5,
                  float param_6,uint param_7)

{
  float *pfVar1;
  float *pfVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((param_4 == param_3) && (param_6 == param_5)) {
    pfVar1 = param_1 + param_7;
    if (param_1 < pfVar1) {
      lVar4 = (longlong)param_2 - (longlong)param_1;
      do {
        pfVar2 = (float *)(lVar4 + (longlong)param_1);
        fVar6 = pfVar2[1];
        fVar9 = pfVar2[2];
        fVar7 = pfVar2[3];
        *param_1 = *pfVar2 * param_6 + *param_1 * param_4;
        param_1[1] = fVar6 * param_6 + param_1[1] * param_4;
        param_1[2] = fVar9 * param_6 + param_1[2] * param_4;
        param_1[3] = fVar7 * param_6 + param_1[3] * param_4;
        param_1 = param_1 + 4;
      } while (param_1 < pfVar1);
      return;
    }
  }
  else {
    uVar3 = 0;
    fVar6 = 1.0 / (float)param_7;
    uVar5 = (ulonglong)((longlong)(param_1 + param_7) + (3 - (longlong)param_1)) >> 2;
    if (param_1 + param_7 < param_1) {
      uVar5 = uVar3;
    }
    fVar9 = (param_4 - param_3) * fVar6;
    fVar6 = (param_6 - param_5) * fVar6;
    if (3 < uVar5) {
      lVar4 = (uVar5 - 4 >> 2) + 1;
      uVar3 = lVar4 * 4;
      do {
        fVar7 = param_3 + fVar9 + fVar9;
        *param_1 = param_3 * *param_1 + param_5 * *param_2;
        fVar10 = param_5 + fVar6 + fVar6;
        fVar8 = fVar7 + fVar9;
        param_1[1] = (param_5 + fVar6) * param_2[1] + (param_3 + fVar9) * param_1[1];
        fVar11 = fVar10 + fVar6;
        param_3 = fVar8 + fVar9;
        param_1[2] = fVar10 * param_2[2] + fVar7 * param_1[2];
        pfVar1 = param_2 + 3;
        param_5 = fVar11 + fVar6;
        param_2 = param_2 + 4;
        param_1[3] = fVar11 * *pfVar1 + fVar8 * param_1[3];
        param_1 = param_1 + 4;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    for (; uVar3 < uVar5; uVar3 = uVar3 + 1) {
      fVar8 = param_3 * *param_1;
      param_3 = param_3 + fVar9;
      fVar7 = param_5 * *param_2;
      param_5 = param_5 + fVar6;
      param_2 = param_2 + 1;
      *param_1 = fVar8 + fVar7;
      param_1 = param_1 + 1;
    }
  }
  return;
}



// FUNCTION 143249810 FUN_143249810 body=17 status=ok
// SIG undefined FUN_143249810(void)

undefined4 * FUN_143249810(undefined4 *param_1)

{
  *param_1 = 0xac44;
  param_1[1] = 1;
  return param_1;
}



// FUNCTION 143249830 FUN_143249830 body=17 status=ok
// SIG undefined FUN_143249830(void)

void FUN_143249830(undefined8 param_1,double param_2,longlong param_3,int param_4)

{
  *(float *)(param_3 + (longlong)param_4 * 4) = (float)param_2;
  return;
}



// FUNCTION 143249850 FUN_143249850 body=82 status=ok
// SIG undefined FUN_143249850(void)

void FUN_143249850(undefined8 param_1,double *param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_4;
  *(float *)(param_3 + lVar1 * 4) = (float)*param_2;
  *(float *)(param_3 + 4 + lVar1 * 4) = (float)param_2[1];
  *(float *)(param_3 + 8 + lVar1 * 4) = (float)param_2[2];
  *(float *)(param_3 + 0xc + lVar1 * 4) = (float)param_2[4];
  *(float *)(param_3 + 0x10 + lVar1 * 4) = (float)param_2[5];
  return;
}



// FUNCTION 1432498b0 FUN_1432498b0 body=50 status=ok
// SIG undefined FUN_1432498b0(void)

void FUN_1432498b0(undefined8 param_1,double *param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_4;
  *(float *)(param_3 + lVar1 * 4) = (float)*param_2;
  *(float *)(param_3 + 4 + lVar1 * 4) = (float)param_2[1];
  *(float *)(param_3 + 8 + lVar1 * 4) = (float)param_2[4];
  return;
}



// FUNCTION 1432498f0 FUN_1432498f0 body=17 status=ok
// SIG undefined FUN_1432498f0(void)

void FUN_1432498f0(undefined8 param_1,int param_2,longlong param_3,int param_4)

{
  *(float *)(param_3 + (longlong)param_4 * 4) = (float)param_2;
  return;
}



// FUNCTION 143249910 FUN_143249910 body=393 status=ok
// SIG undefined FUN_143249910(void)

void FUN_143249910(undefined8 param_1,ulonglong param_2,uint param_3,longlong param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  double *pdVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  float *pfVar13;
  uint uVar14;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar15;
  
  lVar7 = (longlong)param_5;
  uVar15 = 0;
  uVar14 = 0;
  if (((0 < (int)param_3) && (7 < param_3)) &&
     ((param_2 + (longlong)(int)(param_3 - 1) * 8 < (ulonglong)(param_4 + lVar7 * 4) ||
      ((ulonglong)(param_4 + (longlong)(int)(param_5 + (param_3 - 1)) * 4) < param_2)))) {
    uVar10 = param_3 & 0x80000007;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xfffffff8) + 1;
    }
    pdVar8 = (double *)(param_2 + 0x20);
    puVar11 = (undefined8 *)(param_4 + (lVar7 + 2) * 4);
    uVar17 = uVar15;
    do {
      uVar14 = (int)uVar15 + 8;
      uVar15 = (ulonglong)uVar14;
      uVar17 = uVar17 + 8;
      dVar3 = pdVar8[-2];
      dVar4 = pdVar8[-1];
      puVar11[-1] = CONCAT44((float)pdVar8[-3],(float)pdVar8[-4]);
      dVar5 = *pdVar8;
      dVar6 = pdVar8[1];
      *puVar11 = CONCAT44((float)dVar4,(float)dVar3);
      dVar3 = pdVar8[2];
      dVar4 = pdVar8[3];
      puVar11[1] = CONCAT44((float)dVar6,(float)dVar5);
      puVar11[2] = CONCAT44((float)dVar4,(float)dVar3);
      pdVar8 = pdVar8 + 8;
      puVar11 = puVar11 + 4;
    } while ((longlong)uVar17 < (longlong)(int)(param_3 - uVar10));
  }
  lVar12 = (longlong)(int)uVar14;
  lVar16 = (longlong)(int)param_3;
  if (lVar12 < lVar16) {
    if (3 < lVar16 - lVar12) {
      lVar2 = lVar12 + lVar7;
      lVar1 = lVar12 * 8;
      lVar9 = ((lVar16 - lVar12) - 4U >> 2) + 1;
      lVar12 = lVar12 + lVar9 * 4;
      pdVar8 = (double *)(param_2 + 0x10 + lVar1);
      pfVar13 = (float *)(param_4 + lVar2 * 4);
      do {
        *pfVar13 = (float)pdVar8[-2];
        pfVar13[1] = (float)pdVar8[-1];
        pfVar13[2] = (float)*pdVar8;
        pfVar13[3] = (float)pdVar8[1];
        lVar9 = lVar9 + -1;
        pdVar8 = pdVar8 + 4;
        pfVar13 = pfVar13 + 4;
      } while (lVar9 != 0);
    }
    if (lVar12 < lVar16) {
      pfVar13 = (float *)(param_4 + (lVar7 + lVar12) * 4);
      do {
        lVar7 = lVar12 * 8;
        lVar12 = lVar12 + 1;
        *pfVar13 = (float)*(double *)(param_2 + lVar7);
        pfVar13 = pfVar13 + 1;
      } while (lVar12 < lVar16);
    }
  }
  return;
}



// FUNCTION 143249aa0 FUN_143249aa0 body=36 status=ok
// SIG undefined FUN_143249aa0(void)

void FUN_143249aa0(undefined8 *param_1)

{
  *param_1 = 0x3ff0000000000000;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x3ff0000000000000;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



// FUNCTION 143249ad0 FUN_143249ad0 body=154 status=ok
// SIG undefined FUN_143249ad0(void)

float FUN_143249ad0(longlong param_1)

{
  float fVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_1 + 0xc);
  fVar3 = fVar1 * fVar1 - *(float *)(param_1 + 0x10) * 4.0;
  if (fVar3 < 0.0) {
    fVar3 = fVar1 * fVar1 - fVar3;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (double)fVar3;
    auVar2 = sqrtpd(ZEXT416((uint)fVar3),auVar2);
    return 1.0 / (1.0 - (float)(auVar2._0_8_ * 0.5));
  }
  fVar4 = ABS(-fVar1 - SQRT(fVar3));
  fVar1 = ABS(SQRT(fVar3) - fVar1);
  if (fVar4 <= fVar1) {
    fVar4 = fVar1;
  }
  return 1.0 / (1.0 - fVar4 * 0.5);
}



// FUNCTION 143249b70 FUN_143249b70 body=326 status=ok
// SIG undefined FUN_143249b70(void)

void FUN_143249b70(uint param_1,double param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  param_2 = (1.0 / (double)param_1) * param_2;
  if (param_2 <= 0.00020833333333333335) {
    param_2 = 0.00020833333333333335;
  }
  if (0.4583333333333333 <= param_2) {
    param_2 = 0.4583333333333333;
  }
  dVar1 = _guard_xfg_dispatch_icall_nop(param_2 * 3.141592653589793);
  param_3 = (1.0 / (double)param_1) * param_3;
  if (param_3 <= 0.00020833333333333335) {
    param_3 = 0.00020833333333333335;
  }
  dVar4 = 1.0 / (dVar1 + 1.0);
  if (0.4583333333333333 <= param_3) {
    param_3 = 0.4583333333333333;
  }
  dVar1 = (dVar1 - 1.0) * dVar4;
  dVar2 = _guard_xfg_dispatch_icall_nop(param_3 * 3.141592653589793);
  param_4[3] = 1.0;
  dVar3 = 1.0 / (dVar2 + 1.0);
  dVar5 = (dVar2 - 1.0) * dVar3;
  dVar3 = dVar3 * dVar2;
  dVar2 = dVar3 * dVar4;
  *param_4 = dVar2;
  param_4[4] = dVar5 + dVar1;
  dVar4 = -(dVar3 * dVar4);
  param_4[2] = dVar4;
  param_4[5] = dVar5 * dVar1;
  param_4[1] = dVar2 + dVar4;
  return;
}



// FUNCTION 143249cc0 FUN_143249cc0 body=139 status=ok
// SIG undefined FUN_143249cc0(void)

void FUN_143249cc0(uint param_1,double param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  
  param_2 = param_2 / (double)param_1;
  if (param_2 <= 0.00020833333333333335) {
    param_2 = 0.00020833333333333335;
  }
  if (0.4583333333333333 <= param_2) {
    param_2 = 0.4583333333333333;
  }
  dVar1 = _guard_xfg_dispatch_icall_nop(param_2 * 3.141592653589793);
  param_3[2] = 0.0;
  param_3[5] = 0.0;
  param_3[3] = 1.0;
  dVar2 = 1.0 / (dVar1 + 1.0);
  *param_3 = dVar2;
  param_3[1] = -dVar2;
  param_3[4] = (dVar1 - 1.0) * dVar2;
  return;
}



// FUNCTION 143249d50 FUN_143249d50 body=134 status=ok
// SIG undefined FUN_143249d50(void)

void FUN_143249d50(uint param_1,double param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  
  param_2 = param_2 / (double)param_1;
  if (param_2 <= 0.00020833333333333335) {
    param_2 = 0.00020833333333333335;
  }
  if (0.4583333333333333 <= param_2) {
    param_2 = 0.4583333333333333;
  }
  dVar3 = _guard_xfg_dispatch_icall_nop(param_2 * 3.141592653589793);
  *(undefined8 *)param_3[1] = 0;
  *(undefined8 *)(param_3[2] + 8) = 0;
  *(undefined8 *)(param_3[1] + 8) = 0x3ff0000000000000;
  dVar4 = 1.0 / (dVar3 + 1.0);
  dVar2 = dVar4 * dVar3;
  auVar1._8_4_ = SUB84(dVar2,0);
  auVar1._0_8_ = dVar2;
  auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *param_3 = auVar1;
  *(double *)param_3[2] = (dVar3 - 1.0) * dVar4;
  return;
}



// FUNCTION 143249de0 FUN_143249de0 body=525 status=ok
// SIG undefined FUN_143249de0(void)

void FUN_143249de0(uint param_1,double param_2,double param_3,double param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  param_2 = param_2 / (double)param_1;
  if (param_2 <= 0.00020833333333333335) {
    param_2 = 0.00020833333333333335;
  }
  if (0.4583333333333333 <= param_2) {
    param_2 = 0.4583333333333333;
  }
  dVar5 = _guard_xfg_dispatch_icall_nop(param_2 * 3.141592653589793);
  dVar4 = 1.0;
  dVar2 = (1.0 / param_3) * (dVar5 + 1.0);
  dVar3 = dVar5 * dVar5;
  dVar6 = _guard_xfg_dispatch_icall_nop(10.0,param_4 * 0.05);
  param_4 = param_4 * 0.05555555555555555;
  if (dVar6 < 1.0) {
    dVar6 = 1.0 / dVar6;
    dVar7 = dVar6 * dVar2;
    dVar1 = (param_2 * dVar7 + (1.0 - param_2)) * ABS(param_4) + (1.0 - ABS(param_4));
    if (dVar1 <= 1.0) {
      dVar1 = dVar4;
    }
    dVar8 = dVar2;
    dVar9 = 1.0;
    dVar4 = dVar1;
    if (dVar6 <= dVar1) {
      dVar4 = dVar6;
    }
  }
  else {
    dVar8 = dVar6 * dVar2;
    dVar9 = (1.0 - ABS(param_4)) + (param_2 * dVar8 + (1.0 - param_2)) * ABS(param_4);
    if (dVar9 <= 1.0) {
      dVar9 = 1.0;
    }
    dVar7 = dVar2;
    if (dVar6 <= dVar9) {
      dVar9 = dVar6;
    }
  }
  param_5[3] = 1.0;
  dVar2 = 1.0 / (dVar7 * dVar5 + dVar4 + dVar3);
  *param_5 = (dVar8 * dVar5 + dVar9 + dVar3) * dVar2;
  param_5[1] = ((dVar3 + dVar3) - (dVar9 + dVar9)) * dVar2;
  param_5[5] = ((dVar4 - dVar7 * dVar5) + dVar3) * dVar2;
  param_5[2] = ((dVar9 - dVar8 * dVar5) + dVar3) * dVar2;
  param_5[4] = ((dVar3 + dVar3) - (dVar4 + dVar4)) * dVar2;
  return;
}



// FUNCTION 143249ff0 FUN_143249ff0 body=525 status=ok
// SIG undefined FUN_143249ff0(void)

void FUN_143249ff0(uint param_1,double param_2,double param_3,double param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  param_2 = param_2 / (double)param_1;
  if (param_2 <= 0.00020833333333333335) {
    param_2 = 0.00020833333333333335;
  }
  if (0.4583333333333333 <= param_2) {
    param_2 = 0.4583333333333333;
  }
  dVar5 = _guard_xfg_dispatch_icall_nop(param_2 * 3.141592653589793);
  dVar4 = 1.0;
  dVar2 = (1.0 / param_3) * (dVar5 + 1.0);
  dVar3 = dVar5 * dVar5;
  dVar6 = _guard_xfg_dispatch_icall_nop(10.0,param_4 * 0.05);
  param_4 = param_4 * 0.08333333333333333;
  if (dVar6 < 1.0) {
    dVar6 = 1.0 / dVar6;
    dVar7 = dVar6 * dVar2;
    dVar1 = (param_2 * dVar7 + (1.0 - param_2)) * ABS(param_4) + (1.0 - ABS(param_4));
    if (dVar1 <= 1.0) {
      dVar1 = dVar4;
    }
    dVar8 = dVar2;
    dVar9 = 1.0;
    dVar4 = dVar1;
    if (dVar6 <= dVar1) {
      dVar4 = dVar6;
    }
  }
  else {
    dVar8 = dVar6 * dVar2;
    dVar9 = (1.0 - ABS(param_4)) + (param_2 * dVar8 + (1.0 - param_2)) * ABS(param_4);
    if (dVar9 <= 1.0) {
      dVar9 = 1.0;
    }
    dVar7 = dVar2;
    if (dVar6 <= dVar9) {
      dVar9 = dVar6;
    }
  }
  param_5[3] = 1.0;
  dVar2 = 1.0 / (dVar7 * dVar5 + dVar4 + dVar3);
  *param_5 = (dVar8 * dVar5 + dVar9 + dVar3) * dVar2;
  param_5[1] = ((dVar3 + dVar3) - (dVar9 + dVar9)) * dVar2;
  param_5[5] = ((dVar4 - dVar7 * dVar5) + dVar3) * dVar2;
  param_5[2] = ((dVar9 - dVar8 * dVar5) + dVar3) * dVar2;
  param_5[4] = ((dVar3 + dVar3) - (dVar4 + dVar4)) * dVar2;
  return;
}



// FUNCTION 14324a200 FUN_14324a200 body=128 status=ok
// SIG undefined FUN_14324a200(void)

void FUN_14324a200(undefined4 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  undefined8 param_5)

{
  double dVar1;
  
  dVar1 = _guard_xfg_dispatch_icall_nop(param_3,0.25);
  FUN_14324a4d0(param_1,param_2,0x3feb333333333333,SUB84(dVar1 * -1.6,0),0x8000000000000000,param_4,
                1,0,param_5);
  return;
}



// FUNCTION 14324a280 FUN_14324a280 body=142 status=ok
// SIG undefined FUN_14324a280(void)

void FUN_14324a280(undefined4 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  undefined8 param_5)

{
  double dVar1;
  
  dVar1 = _guard_xfg_dispatch_icall_nop(param_3,0.25);
  FUN_14324a880(param_1,param_2,0x3feb333333333333,SUB84(dVar1 * -1.6,0),0x8000000000000000,param_4,
                1,0,0x3ff0000000000000,param_5);
  return;
}



// FUNCTION 14324a310 FUN_14324a310 body=194 status=ok
// SIG undefined FUN_14324a310(void)

void FUN_14324a310(uint param_1,double param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  param_2 = param_2 / (double)param_1;
  if (param_2 <= 0.00020833333333333335) {
    param_2 = 0.00020833333333333335;
  }
  if (0.4583333333333333 <= param_2) {
    param_2 = 0.4583333333333333;
  }
  dVar1 = _guard_xfg_dispatch_icall_nop(param_2 * 3.141592653589793);
  dVar3 = dVar1 * dVar1;
  param_4[3] = 1.0;
  dVar2 = 1.0 / (dVar1 * param_3 + 1.0 + dVar3);
  *param_4 = dVar2;
  param_4[2] = dVar2;
  param_4[5] = ((1.0 - dVar1 * param_3) + dVar3) * dVar2;
  param_4[1] = dVar2 * -2.0;
  param_4[4] = ((dVar3 + dVar3) - 2.0) * dVar2;
  return;
}



// FUNCTION 14324a3e0 FUN_14324a3e0 body=226 status=ok
// SIG undefined FUN_14324a3e0(void)

void FUN_14324a3e0(uint param_1,double param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  param_2 = param_2 / (double)param_1;
  if (param_2 <= 0.00020833333333333335) {
    param_2 = 0.00020833333333333335;
  }
  if (0.4583333333333333 <= param_2) {
    param_2 = 0.4583333333333333;
  }
  dVar2 = _guard_xfg_dispatch_icall_nop(param_2 * 3.141592653589793);
  dVar1 = dVar2 * dVar2;
  param_4[3] = 1.0;
  dVar3 = 1.0 / (dVar2 * param_3 + 1.0 + dVar1);
  *param_4 = dVar3 * dVar1;
  param_4[2] = dVar3 * dVar1;
  param_4[1] = (dVar1 + dVar1) * dVar3;
  param_4[4] = ((dVar1 + dVar1) - 2.0) * dVar3;
  param_4[5] = ((1.0 - dVar2 * param_3) + dVar1) * dVar3;
  return;
}



// FUNCTION 14324a4d0 FUN_14324a4d0 body=942 status=ok
// SIG undefined FUN_14324a4d0(void)

void FUN_14324a4d0(uint param_1,double param_2,double param_3,undefined8 param_4,double param_5,
                  double param_6,char param_7,char param_8,double *param_9)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 in_XMM3 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  undefined4 uVar13;
  
  dVar9 = param_5;
  uVar12 = SUB84(param_5,0);
  uVar13 = (undefined4)((ulonglong)param_5 >> 0x20);
  param_2 = param_2 / (double)param_1;
  if (param_2 <= 0.00020833333333333335) {
    param_2 = 0.00020833333333333335;
  }
  if (0.4583333333333333 <= param_2) {
    param_2 = 0.4583333333333333;
  }
  auVar11 = in_XMM3;
  dVar6 = _guard_xfg_dispatch_icall_nop(10.0,param_6 * 0.05);
  dVar7 = _guard_xfg_dispatch_icall_nop(1.5707963267948966 - param_2 * 3.141592653589793);
  dVar4 = 1.0;
  dVar8 = dVar7 * dVar7;
  dVar2 = dVar4;
  param_5 = dVar6;
  if (param_6 <= 0.0) {
    param_5 = 1.0;
    dVar2 = (1.0 / SQRT(dVar6)) * (1.0 / SQRT(dVar6));
  }
  if (param_8 != '\0') {
    param_6 = param_6 * 0.8333333333333333;
  }
  dVar6 = _guard_xfg_dispatch_icall_nop(10.0,param_6 * 0.05);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = ABS(param_6 * 0.05555555555555555);
  auVar11 = sqrtpd(auVar11,auVar1);
  if (param_6 <= 0.0) {
    dVar9 = SQRT(dVar6);
    param_6 = in_XMM3._0_8_;
    dVar6 = 1.0;
    dVar9 = 1.0 / dVar9;
    dVar3 = dVar9 * dVar9;
    dVar10 = dVar4;
  }
  else {
    param_6 = dVar9;
    uVar12 = in_XMM3._0_4_;
    uVar13 = in_XMM3._4_4_;
    dVar10 = SQRT(dVar6);
    dVar9 = dVar4;
    dVar3 = dVar4;
  }
  param_3 = (1.0 - param_2) * param_3;
  if (param_3 <= 0.015) {
    param_3 = 0.015;
  }
  dVar4 = (param_5 - param_3 * param_5) + param_3 * dVar6;
  dVar6 = ((auVar11._0_8_ * (double)CONCAT44(uVar13,uVar12) * 0.5 + 1.4142135623730951) * param_3 *
           dVar10 + (1.0 - param_3)) * dVar7;
  dVar10 = dVar4 * dVar8;
  dVar4 = (param_3 + param_3) - (dVar8 + dVar8) * dVar4;
  dVar5 = (param_3 - dVar6) + dVar10;
  dVar10 = dVar6 + param_3 + dVar10;
  param_9[1] = dVar4;
  *param_9 = dVar10;
  dVar2 = (dVar2 - param_3 * dVar2) + param_3 * dVar3;
  param_9[2] = dVar5;
  dVar6 = dVar2 * dVar8;
  dVar2 = (param_3 + param_3) - (dVar8 + dVar8) * dVar2;
  param_9[4] = dVar2;
  dVar7 = ((auVar11._0_8_ * param_6 * 0.5 + 1.4142135623730951) * param_3 * dVar9 + (1.0 - param_3))
          * dVar7;
  dVar9 = dVar7 + param_3 + dVar6;
  dVar6 = (param_3 - dVar7) + dVar6;
  param_9[3] = dVar9;
  param_9[5] = dVar6;
  if (param_7 != '\0') {
    dVar9 = 1.0 / dVar9;
    param_9[3] = 1.0;
    *param_9 = dVar10 * dVar9;
    param_9[1] = dVar4 * dVar9;
    param_9[2] = dVar5 * dVar9;
    param_9[4] = dVar2 * dVar9;
    param_9[5] = dVar6 * dVar9;
  }
  return;
}



// FUNCTION 14324a880 FUN_14324a880 body=941 status=ok
// SIG undefined FUN_14324a880(void)

void FUN_14324a880(uint param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,char param_7,char param_8,double param_9,double *param_10)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar11;
  double dVar8;
  undefined4 uVar12;
  double dVar9;
  double dVar10;
  double dVar13;
  undefined1 auVar14 [16];
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  double local_res10;
  
  dVar13 = param_6;
  uVar15 = SUB84(param_4,0);
  uVar16 = (undefined4)((ulonglong)param_4 >> 0x20);
  dVar6 = _guard_xfg_dispatch_icall_nop(10.0,param_6 * 0.05);
  param_2 = param_2 / (double)param_1;
  if (param_2 <= 0.00020833333333333335) {
    param_2 = 0.00020833333333333335;
  }
  if (0.4583333333333333 <= param_2) {
    param_2 = 0.4583333333333333;
  }
  dVar7 = _guard_xfg_dispatch_icall_nop(param_2 * 3.141592653589793);
  uVar5 = SUB84(dVar7,0);
  uVar11 = (undefined4)((ulonglong)dVar7 >> 0x20);
  dVar8 = _guard_xfg_dispatch_icall_nop(param_2 * 3.141592653589793 * param_9);
  uVar12 = (undefined4)((ulonglong)dVar8 >> 0x20);
  if (param_6 <= 0.0) {
    dVar1 = dVar7 * dVar7;
    dVar7 = dVar8 * dVar8;
    uVar17 = SUB84(dVar8,0);
    uVar18 = uVar12;
  }
  else {
    dVar1 = dVar8 * dVar8;
    dVar7 = dVar7 * dVar7;
    uVar17 = uVar5;
    uVar18 = uVar11;
    uVar5 = SUB84(dVar8,0);
    uVar11 = uVar12;
  }
  dVar2 = 1.0;
  bVar4 = param_6 <= 0.0;
  dVar8 = dVar2;
  param_6 = dVar6;
  if (bVar4) {
    param_6 = 1.0;
    dVar8 = (1.0 / SQRT(dVar6)) * (1.0 / SQRT(dVar6));
  }
  if (param_8 != '\0') {
    dVar13 = dVar13 * 0.8333333333333333;
  }
  dVar6 = _guard_xfg_dispatch_icall_nop(10.0,dVar13 * 0.05);
  dVar9 = 1.0;
  auVar14._0_8_ = ABS(dVar13 * 0.05555555555555555);
  auVar14._8_8_ = 0;
  auVar14 = sqrtpd(auVar14,auVar14);
  if (dVar13 <= 0.0) {
    dVar9 = SQRT(dVar6);
    dVar6 = 1.0;
    uVar15 = SUB84(param_5,0);
    uVar16 = (undefined4)((ulonglong)param_5 >> 0x20);
    dVar9 = 1.0 / dVar9;
    dVar13 = dVar9 * dVar9;
    dVar3 = dVar2;
    local_res10 = param_4;
  }
  else {
    local_res10 = param_5;
    dVar3 = SQRT(dVar6);
    dVar13 = dVar2;
  }
  dVar3 = (((double)CONCAT44(uVar16,uVar15) * 0.5 * auVar14._0_8_ + 1.4142135623730951) * param_3 *
           dVar3 + (1.0 - param_3)) * (double)CONCAT44(uVar11,uVar5);
  dVar6 = (param_6 - param_6 * param_3) + dVar6 * param_3;
  dVar10 = dVar6 * dVar1;
  dVar2 = dVar3 + param_3 + dVar10;
  dVar6 = (dVar1 + dVar1) * dVar6 - (param_3 + param_3);
  *param_10 = dVar2;
  dVar10 = (param_3 - dVar3) + dVar10;
  param_10[1] = dVar6;
  param_10[2] = dVar10;
  dVar13 = (dVar8 - dVar8 * param_3) + dVar13 * param_3;
  dVar8 = dVar13 * dVar7;
  dVar1 = ((local_res10 * 0.5 * auVar14._0_8_ + 1.4142135623730951) * param_3 * dVar9 +
          (1.0 - param_3)) * (double)CONCAT44(uVar18,uVar17);
  dVar7 = (dVar7 + dVar7) * dVar13 - (param_3 + param_3);
  param_10[4] = dVar7;
  dVar13 = dVar1 + param_3 + dVar8;
  dVar8 = (param_3 - dVar1) + dVar8;
  param_10[3] = dVar13;
  param_10[5] = dVar8;
  if (param_7 != '\0') {
    dVar13 = 1.0 / dVar13;
    param_10[3] = 1.0;
    *param_10 = dVar2 * dVar13;
    param_10[1] = dVar6 * dVar13;
    param_10[2] = dVar10 * dVar13;
    param_10[4] = dVar7 * dVar13;
    param_10[5] = dVar8 * dVar13;
  }
  return;
}



// FUNCTION 14324ac30 FUN_14324ac30 body=30 status=ok
// SIG undefined FUN_14324ac30(void)

void FUN_14324ac30(uint param_1,double param_2)

{
  FUN_143255540(param_2 * 0.001 * (double)param_1);
  return;
}



// FUNCTION 14324ac50 FUN_14324ac50 body=27 status=ok
// SIG undefined FUN_14324ac50(void)

int FUN_14324ac50(uint param_1,double param_2)

{
  return (int)(param_2 * 0.001 * (double)param_1);
}



// FUNCTION 14324ac70 thunk_FUN_143249ad0 body=5 status=ok
// SIG undefined thunk_FUN_143249ad0(void)

float thunk_FUN_143249ad0(longlong param_1)

{
  float fVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_1 + 0xc);
  fVar3 = fVar1 * fVar1 - *(float *)(param_1 + 0x10) * 4.0;
  if (fVar3 < 0.0) {
    fVar3 = fVar1 * fVar1 - fVar3;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (double)fVar3;
    auVar2 = sqrtpd(ZEXT416((uint)fVar3),auVar2);
    return 1.0 / (1.0 - (float)(auVar2._0_8_ * 0.5));
  }
  fVar4 = ABS(-fVar1 - SQRT(fVar3));
  fVar1 = ABS(SQRT(fVar3) - fVar1);
  if (fVar4 <= fVar1) {
    fVar4 = fVar1;
  }
  return 1.0 / (1.0 - fVar4 * 0.5);
}



// FUNCTION 14324ac80 FUN_14324ac80 body=41102 status=ok
// SIG undefined FUN_14324ac80(void)

void FUN_14324ac80(undefined4 param_1,undefined4 param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  switch(param_2) {
  case 0:
    FUN_143249cc0(param_1,0x404c000000000000,param_4);
    FUN_14324a280(param_1,param_3 * 237.0,0x3fe8000000000000,0x4011333333333333,param_5);
    FUN_143249de0(param_1,param_3 * 336.0,0x401b333333333333,0x4010666666666666,param_6);
    FUN_143249de0(param_1,param_3 * 595.0,0x402999999999999a,0x4021333333333333,param_7);
    FUN_143249de0(param_1,param_3 * 868.0,0x402299999999999a,0xc01d333333333333,param_8);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    uVar3 = 0x3ff6666666666666;
    param_3 = 6000.0;
    break;
  case 1:
    FUN_143249cc0(param_1,0x4049000000000000,param_4);
    FUN_14324a280(param_1,0x4095180000000000,0x3fc0000000000000,0xc02f000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 990.0,0x4030000000000000,0xc008000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 1100.0,0x4030000000000000,0x4014000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 2500.0,0x4030000000000000,0x3ff8000000000000,param_8);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    param_3 = param_3 * 3000.0;
    uVar3 = 0x3fe8000000000000;
    break;
  case 2:
    FUN_143249cc0(param_1,0x4054000000000000,param_4);
    FUN_14324a280(param_1,0x4079000000000000,0x3fe5000000000000,0xc01a000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 625.0,0x4023666666666666,0x4032000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 1640.0,0x4025000000000000,0x4018cccccccccccd,param_7);
    FUN_143249de0(param_1,param_3 * 3590.0,0x401d99999999999a,0x4032000000000000,param_8);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    uVar3 = 0x3ff6666666666666;
    param_3 = 1980.0;
    break;
  case 3:
    FUN_14324a310(param_1,0x4052a66666666666,0x3ff6666666666666);
    FUN_14324a280(param_1,0x4063d9999999999a,0x3fe6000000000000,0x401d333333333333,param_5);
    FUN_143249de0(param_1,param_3 * 224.9,0x4022666666666666,0xc032000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 692.0,0x4024000000000000,0x4024000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 1680.0,0x400599999999999a,0x4020cccccccccccd,param_8);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    uVar3 = 0x3ff6666666666666;
    param_3 = 6180.0;
    break;
  case 4:
    FUN_14324a310(param_1,param_3 * 169.0,0x3fe051eb851eb852);
    FUN_143249de0(param_1,0x4054000000000000,0x4030000000000000,0xc029333333333333,param_5);
    FUN_143249de0(param_1,param_3 * 250.0,0x4014000000000000,0x4018000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 400.0,0x4014000000000000,0x4014000000000000,param_7);
    FUN_143249de0(param_1,0x408c200000000000,0x4010000000000000,0xc014000000000000,param_8);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    param_3 = param_3 * 9710.0;
    uVar3 = 0x3fe3851eb851eb85;
    break;
  case 5:
    FUN_14324a310(param_1,0x4058c00000000000,0x3ff6666666666666);
    FUN_143249de0(param_1,param_3 * 290.0,0x4014000000000000,0x4032000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 780.0,0x4028000000000000,0xc008000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 999.0,0x4010000000000000,0x4012000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 1650.0,0x4030000000000000,0x402199999999999a,param_8);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    uVar3 = 0x3fe3333333333333;
    param_3 = 8760.0;
    break;
  case 6:
    FUN_14324a310(param_1,0x405a800000000000,0x3ff6666666666666);
    FUN_14324a280(param_1,0x4047c00000000000,0x3ff0000000000000,0xc02b333333333333,param_5);
    FUN_143249de0(param_1,param_3 * 212.9,0x401999999999999a,0x4008000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 439.4,0x4016cccccccccccd,0x4011333333333333,param_7);
    FUN_143249de0(param_1,param_3 * 1810.0,0x4027333333333333,0x4021333333333333,param_8);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    uVar3 = 0x3fe199999999999a;
    param_3 = 8900.0;
    break;
  case 7:
    FUN_14324a310(param_1,param_3 * 124.1,0x3fceb851eb851eb8);
    FUN_143249de0(param_1,param_3 * 192.3,0x401c000000000000,0x4032000000000000,param_5);
    FUN_143249de0(param_1,0x408479999999999a,0x401999999999999a,0x4022666666666666,param_6);
    FUN_143249de0(param_1,0x409fe00000000000,0x4016cccccccccccd,0x402199999999999a,param_7);
    FUN_143249de0(param_1,0x40ad9c0000000000,0x4027333333333333,0x4021333333333333,param_8);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    param_3 = param_3 * 8800.0;
    uVar3 = 0x3fe3333333333333;
    break;
  case 8:
    FUN_14324a310(param_1,0x4049000000000000,0x3fd0000000000000);
    FUN_143249de0(param_1,param_3 * 108.0,0x4030000000000000,0x4032000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 321.0,0x402e000000000000,0x4028000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff4cccccccccccd,0x401b99999999999a,param_7);
    FUN_143249de0(param_1,param_3 * 4850.0,0x3ff999999999999a,0x4021333333333333,param_8);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_143249d50(param_1,0x40a9780000000000,param_10);
    return;
  case 9:
    FUN_143249cc0(param_1,param_3 * 34.8,param_4);
    FUN_143249de0(param_1,param_3 * 120.6,0x402099999999999a,0x4032000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 265.2,0x402a666666666666,0xc02fcccccccccccd,param_6);
    FUN_143249de0(param_1,param_3 * 503.9,0x4030000000000000,0xc0304ccccccccccd,param_7);
    FUN_143249de0(param_1,param_3 * 2190.0,0x4023000000000000,0xc02499999999999a,param_8);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_143249d50(param_1,param_3 * 4670.0,param_10);
    return;
  case 10:
    FUN_14324a310(param_1,0x40515147ae147ae1,0x3fd0000000000000);
    FUN_143249de0(param_1,param_3 * 81.0,0x4030000000000000,0x4030b5c28f5c28f6,param_5);
    FUN_143249de0(param_1,param_3 * 243.0,0x4030000000000000,0x4029b851eb851eb8,param_6);
    FUN_143249de0(param_1,param_3 * 405.0,0x4030000000000000,0x402947ae147ae148,param_7);
    FUN_143249de0(param_1,param_3 * 567.0,0x4030000000000000,0x402423d70a3d70a4,param_8);
    FUN_143249de0(param_1,param_3 * 729.0,0x4030000000000000,0x4022000000000000,param_9);
    uVar3 = 0x3fe28f5c28f5c28f;
    param_3 = 1366.19;
    break;
  case 0xb:
    FUN_14324a310(param_1,0x4046000000000000,0x3ff6666666666666);
    FUN_143249de0(param_1,param_3 * 80.4,0x4003333333333333,0x4032000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 224.9,0x402a000000000000,0xc032000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 353.1,0x4030000000000000,0x4026cccccccccccd,param_7);
    FUN_143249de0(param_1,param_3 * 924.3,0x4030000000000000,0xc02d99999999999a,param_8);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_143249d50(param_1,0x40b20c0000000000,param_10);
    return;
  case 0xc:
    FUN_14324a310(param_1,param_3 * 26.4,0x3ff6666666666666);
    FUN_143249de0(param_1,param_3 * 484.0,0x4012666666666666,0x4032000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 925.0,0x4030000000000000,0x402c000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 1270.0,0x401ecccccccccccd,0xc032000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 1700.0,0x4030000000000000,0x402c000000000000,param_8);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    uVar3 = 0x3ff6666666666666;
    param_3 = 7130.0;
    break;
  case 0xd:
    FUN_14324a310(param_1,param_3 * 24.4,0x3ff6666666666666);
    FUN_143249de0(param_1,param_3 * 161.2,0x4000000000000000,0x4032000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 633.8,0x3ffe666666666666,0xc032000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 803.1,0x4030000000000000,0x4032000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 1340.0,0x4030000000000000,0x4032000000000000,param_8);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    uVar3 = 0x3ff199999999999a;
    param_3 = 6890.0;
    break;
  case 0xe:
    FUN_14324a310(param_1,param_3 * 24.4,0x3ff6666666666666);
    FUN_143249de0(param_1,param_3 * 156.8,0x4015333333333333,0x4032000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 587.1,0x4020666666666666,0xc0304ccccccccccd,param_6);
    FUN_143249de0(param_1,param_3 * 825.4,0x4030000000000000,0x402ecccccccccccd,param_7);
    FUN_143249de0(param_1,param_3 * 1040.0,0x4030000000000000,0xc02d99999999999a,param_8);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    uVar3 = 0x3ff6666666666666;
    param_3 = 7380.0;
    break;
  case 0xf:
    FUN_14324a310(param_1,param_3 * 22.5,0x3ff6666666666666);
    FUN_143249de0(param_1,param_3 * 170.0,0x4000000000000000,0x4026cccccccccccd,param_5);
    FUN_143249de0(param_1,param_3 * 498.1,0x4000000000000000,0xc018000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 921.1,0x4030000000000000,0x4023333333333333,param_7);
    FUN_143249de0(param_1,param_3 * 1140.0,0x4030000000000000,0xc032000000000000,param_8);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    uVar3 = 0x3ff6666666666666;
    param_3 = 4260.0;
    break;
  case 0x10:
    FUN_14324a310(param_1,param_3 * 80.0,0x3fd999999999999a);
    FUN_143249de0(param_1,param_3 * 120.0,0x4000000000000000,0x4004000000000000,param_5);
    FUN_143249de0(param_1,0x4076800000000000,0x4008000000000000,0xc00c000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 480.0,0x4014000000000000,0x3ff8000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 1500.0,0x3ff0000000000000,0x3ff8000000000000,param_8);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    param_3 = param_3 * 4000.0;
    uVar3 = 0x3fd999999999999a;
    break;
  case 0x11:
    FUN_14324a310(param_1,param_3 * 80.0,0x3fe6666666666666);
    FUN_143249de0(param_1,param_3 * 120.0,0x4020000000000000,0,param_5);
    FUN_143249de0(param_1,param_3 * 240.0,0x4020000000000000,0,param_6);
    FUN_143249de0(param_1,param_3 * 360.0,0x4020000000000000,0,param_7);
    FUN_143249de0(param_1,param_3 * 480.0,0x4020000000000000,0,param_8);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    param_3 = param_3 * 8000.0;
    uVar3 = 0x3fe6666666666666;
    break;
  case 0x12:
    FUN_14324a310(param_1,0x4046800000000000,0x3fe999999999999a);
    FUN_143249de0(param_1,0x4056800000000000,0x3ff0000000000000,0xc032800000000000,param_5);
    FUN_143249de0(param_1,param_3 * 254.0,0x401c000000000000,0x401799999999999a,param_6);
    FUN_143249de0(param_1,param_3 * 760.0,0x4010cccccccccccd,0x4032000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 2190.0,0x401f333333333333,0x4031cccccccccccd,param_8);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_143249d50(param_1,0x40ae000000000000,param_10);
    return;
  case 0x13:
    FUN_143249cc0(param_1,0x404bf33333333333,param_4);
    FUN_14324a280(param_1,0x4079000000000000,0x3f9999999999999a,0x4023333333333333,param_5);
    FUN_143249de0(param_1,param_3 * 511.9,0x4030000000000000,0xc032000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 648.5,0x4030000000000000,0x4026cccccccccccd,param_7);
    FUN_143249de0(param_1,param_3 * 2070.0,0x4007333333333333,0xc02499999999999a,param_8);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_143249d50(param_1,0x40add80000000000,param_10);
    return;
  case 0x14:
    FUN_143249cc0(param_1,param_3 * 20.0,param_4);
    FUN_143249de0(param_1,param_3 * 163.2,0x3ff8000000000000,0x402f333333333333,param_5);
    FUN_143249de0(param_1,param_3 * 348.8,0x4023cccccccccccd,0xc030800000000000,param_6);
    FUN_143249de0(param_1,param_3 * 648.5,0x4030000000000000,0x4026cccccccccccd,param_7);
    FUN_143249de0(param_1,param_3 * 1580.0,0x401999999999999a,0xc02499999999999a,param_8);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_143249d50(param_1,0x40add80000000000,param_10);
    return;
  case 0x15:
    FUN_14324a310(param_1,0x403bd9999999999a,0x3ff68f5c28f5c28f);
    FUN_143249de0(param_1,param_3 * 43.43,0x40035c28f5c28f5c,0x4031ca3d70a3d70a,param_5);
    FUN_143249de0(param_1,param_3 * 1174.24,0x4011eb851eb851ec,0,param_6);
    FUN_143249de0(param_1,param_3 * 2858.28,0x40227ae147ae147b,0,param_7);
    FUN_143249de0(param_1,param_3 * 6148.1,0x4030000000000000,0,param_8);
    FUN_14324a200(param_1,0x407bb40000000000,0x3ff0000000000000,0xc02a051eb851eb85,param_9);
    uVar3 = 0x3ff68f5c28f5c28f;
    param_3 = 9521.35;
    break;
  case 0x16:
    FUN_14324a310(param_1,param_3 * 63.76,0x3fe6b851eb851eb8);
    FUN_143249de0(param_1,0x406ec0a3d70a3d71,0x4012a3d70a3d70a4,0xc02edc28f5c28f5c,param_5);
    FUN_143249de0(param_1,0x4087295c28f5c28f,0x4028000000000000,0xc01128f5c28f5c29,param_6);
    FUN_143249de0(param_1,param_3 * 2539.58,0x401eeb851eb851ec,0x4029b851eb851eb8,param_7);
    FUN_143249de0(param_1,param_3 * 4225.42,0x40260a3d70a3d70a,0x4028dc28f5c28f5c,param_8);
    FUN_143249de0(param_1,param_3 * 9729.61,0x4000000000000000,0,param_9);
    param_3 = param_3 * 7141.38;
    uVar3 = 0x3fe851eb851eb852;
    break;
  case 0x17:
    FUN_143249cc0(param_1,0x407b000000000000,param_4);
    FUN_143249de0(param_1,param_3 * 424.0,0x4010666666666666,0x4029cccccccccccd,param_5);
    FUN_143249de0(param_1,param_3 * 1310.0,0x4027000000000000,0x4028000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 2920.0,0x402899999999999a,0x40304ccccccccccd,param_7);
    FUN_14324a200(param_1,0x40c01d0000000000,0x3fb0000000000000,0xc032000000000000,param_8);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_143249d50(param_1,0x40b7700000000000,param_10);
    return;
  case 0x18:
    FUN_14324a310(param_1,0x404b800000000000,0x3fe0000000000000);
    FUN_14324a280(param_1,0x407a800000000000,0x3fd0666666666666,0xc02ccccccccccccd,param_5);
    FUN_143249de0(param_1,param_3 * 474.0,0x401399999999999a,0x402d333333333333,param_6);
    FUN_143249de0(param_1,param_3 * 1360.0,0x4027666666666666,0x402d99999999999a,param_7);
    FUN_143249de0(param_1,param_3 * 2980.0,0x402e000000000000,0x4025cccccccccccd,param_8);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    uVar3 = 0x3fd0000000000000;
    param_3 = 2690.0;
    break;
  case 0x19:
    FUN_143249cc0(param_1,0x4074b00000000000,param_4);
    FUN_143249de0(param_1,0x405bf33333333333,0x400999999999999a,0xc032000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 400.0,0x400d99999999999a,0x4032000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 1750.0,0x4030000000000000,0x4032000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 3200.0,0x4030000000000000,0x4027333333333333,param_8);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_143249d50(param_1,0x40b6080000000000,param_10);
    return;
  case 0x1a:
    FUN_143249cc0(param_1,0x4044000000000000,param_4);
    FUN_143249de0(param_1,param_3 * 475.0,0x400ccccccccccccd,0x4032000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 1070.0,0x4030000000000000,0x4018000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 1430.0,0x4030000000000000,0x4020cccccccccccd,param_7);
    FUN_143249de0(param_1,param_3 * 5710.0,0x4030000000000000,0x4032000000000000,param_8);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    uVar3 = 0x3fd0a3d70a3d70a4;
    param_3 = 3840.0;
    break;
  case 0x1b:
    FUN_14324a310(param_1,param_3 * 81.74,0x3fd7ae147ae147ae);
    FUN_143249de0(param_1,param_3 * 285.39,0x400b851eb851eb85,0x4030b5c28f5c28f6,param_5);
    FUN_143249de0(param_1,0x407d5b3333333333,0x3ff23d70a3d70a3d,0xc02edc28f5c28f5c,param_6);
    FUN_143249de0(param_1,0x4083aa8f5c28f5c3,0x4027051eb851eb85,0x4032000000000000,param_7);
    FUN_143249de0(param_1,0x4079000000000000,0x4030000000000000,0x402947ae147ae148,param_8);
    FUN_143249de0(param_1,param_3 * 1305.08,0x401c51eb851eb852,0x402bdc28f5c28f5c,param_9);
    param_3 = param_3 * 3738.69;
    uVar3 = 0x3fdae147ae147ae1;
    break;
  case 0x1c:
    FUN_14324a310(param_1,0x40532ccccccccccd,0x3fd3333333333333);
    FUN_143249de0(param_1,param_3 * 200.9,0x400c000000000000,0x4020cccccccccccd,param_5);
    FUN_143249de0(param_1,param_3 * 400.0,0x400f333333333333,0xc012cccccccccccd,param_6);
    FUN_143249de0(param_1,param_3 * 610.5,0x4024cccccccccccd,0x4024333333333333,param_7);
    FUN_143249de0(param_1,param_3 * 1620.0,0x4004000000000000,0x401399999999999a,param_8);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    uVar3 = 0x3fe999999999999a;
    param_3 = 5230.0;
    break;
  case 0x1d:
    FUN_143249cc0(param_1,0x405c79999999999a,param_4);
    FUN_143249de0(param_1,param_3 * 163.9,0x4016000000000000,0xc01c000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 298.0,0x4028000000000000,0xc02d333333333333,param_6);
    FUN_143249de0(param_1,param_3 * 554.7,0x4024000000000000,0x402a333333333333,param_7);
    FUN_143249de0(param_1,param_3 * 861.8,0x4022000000000000,0x401ecccccccccccd,param_8);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    uVar3 = 0x3fe0cccccccccccd;
    param_3 = 3710.0;
    break;
  case 0x1e:
    FUN_14324a310(param_1,param_3 * 307.56,0x3fe999999999999a);
    FUN_14324a310(param_1,0x406388a3d70a3d71,0x3ff69fbe76c8b439,param_5);
    FUN_143249de0(param_1,param_3 * 346.32,0x401c70a3d70a3d71,0x402cb851eb851eb8,param_6);
    FUN_143249de0(param_1,param_3 * 626.35,0x4023cccccccccccd,0x402423d70a3d70a4,param_7);
    FUN_143249de0(param_1,param_3 * 3831.73,0x400428f5c28f5c29,0x4024947ae147ae14,param_8);
    FUN_143249de0(param_1,param_3 * 2015.77,0x4011333333333333,0xc025000000000000,param_9);
    goto LAB_1432504dc;
  case 0x1f:
    FUN_143249cc0(param_1,0x4060000000000000,param_4);
    FUN_143249de0(param_1,param_3 * 169.0,0x400a666666666666,0xc014666666666666,param_5);
    FUN_143249de0(param_1,param_3 * 229.0,0x4014000000000000,0x402e333333333333,param_6);
    FUN_143249de0(param_1,param_3 * 1860.0,0x4012cccccccccccd,0xc018000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 1320.0,0x4030000000000000,0x4023333333333333,param_8);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    uVar3 = 0x3ff6666666666666;
    param_3 = 6210.0;
    break;
  case 0x20:
    FUN_143249cc0(param_1,0x4076633333333333,param_4);
    FUN_143249de0(param_1,param_3 * 258.3,0x402f666666666666,0xc032000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 290.0,0x4028000000000000,0x4029cccccccccccd,param_6);
    FUN_143249de0(param_1,param_3 * 439.4,0x4030000000000000,0xc02d333333333333,param_7);
    FUN_143249de0(param_1,param_3 * 3030.0,0x402f99999999999a,0xc022666666666666,param_8);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_143249d50(param_1,0x40b0540000000000,param_10);
    return;
  case 0x21:
    FUN_14324a310(param_1,0x4047800000000000,0x3ff6666666666666);
    FUN_14324a280(param_1,0x407181999999999a,0x3f9999999999999a,0xc032000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 240.0,0x4018000000000000,0xc018000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 946.7,0x4030000000000000,0x4030666666666666,param_7);
    FUN_143249de0(param_1,param_3 * 3000.0,0x401ccccccccccccd,0x4030b33333333333,param_8);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_143249d50(param_1,0x40a8740000000000,param_10);
    return;
  case 0x22:
    FUN_14324a310(param_1,0x4063866666666666,0x3fd0000000000000);
    FUN_143249de0(param_1,param_3 * 308.8,0x4020cccccccccccd,0x401c000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 617.9,0x401a000000000000,0x402ccccccccccccd,param_6);
    FUN_143249de0(param_1,param_3 * 896.2,0x4030000000000000,0x4025000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 2730.0,0x4008000000000000,0x4020333333333333,param_8);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    uVar3 = 0x3ff7333333333333;
    param_3 = 10000.0;
    break;
  case 0x23:
    FUN_143249cc0(param_1,0x40728b3333333333,param_4);
    FUN_143249de0(param_1,param_3 * 440.0,0x4023333333333333,0x402b000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 1910.0,0x4008cccccccccccd,0xc032000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 3530.0,0x402699999999999a,0x4032000000000000,param_7);
    FUN_143249de0(param_1,0x40caf40000000000,0x4028000000000000,0xc028000000000000,param_8);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    param_3 = param_3 * 2630.0;
    uVar3 = 0x3fe4cccccccccccd;
    break;
  case 0x24:
    FUN_143249cc0(param_1,0x40728b3333333333,param_4);
    FUN_143249de0(param_1,param_3 * 922.0,0x4023333333333333,0xc023333333333333,param_5);
    FUN_143249de0(param_1,0x4099500000000000,0x4008cccccccccccd,0xc032000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 3730.0,0x402699999999999a,0x4032000000000000,param_7);
    FUN_143249de0(param_1,0x40b7c00000000000,0x4028000000000000,0xc024cccccccccccd,param_8);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    param_3 = param_3 * 1870.0;
    uVar3 = 0x3fe4cccccccccccd;
    break;
  case 0x25:
    FUN_143249cc0(param_1,0x405d99999999999a,param_4);
    FUN_143249de0(param_1,param_3 * 116.5,0x4018000000000000,0xc033000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 218.9,0x4030000000000000,0xc022000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 290.0,0x402f666666666666,0xc032000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 2135.0,0x4015333333333333,0x402fcccccccccccd,param_8);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    uVar3 = 0x3ff999999999999a;
    param_3 = 6020.0;
    break;
  case 0x26:
    FUN_14324a310(param_1,0x40a4b1ae147ae148,0x3fe6147ae147ae14);
    FUN_143249de0(param_1,param_3 * 861.92,0x4028000000000000,0x4012000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 2188.54,0x4030000000000000,0x400d1eb851eb851f,param_6);
    FUN_143249de0(param_1,param_3 * 3433.32,0x4030000000000000,0x401d28f5c28f5c29,param_7);
    FUN_143249de0(param_1,param_3 * 5712.44,0x4030000000000000,0xc02647ae147ae148,param_8);
    FUN_143249de0(param_1,param_3 * 12115.28,0x401a000000000000,0x401a8f5c28f5c28f,param_9);
    uVar3 = 0x3ff68f5c28f5c28f;
    param_3 = 3237.88;
    break;
  case 0x27:
    FUN_143249cc0(param_1,0x40a0243d70a3d70a,param_4);
    FUN_143249de0(param_1,param_3 * 397.19,0x402c0f5c28f5c28f,0x402723d70a3d70a4,param_5);
    FUN_143249de0(param_1,param_3 * 1765.29,0x4022e66666666666,0x402a23d70a3d70a4,param_6);
    FUN_143249de0(param_1,param_3 * 2085.01,0x4030000000000000,0x40304a3d70a3d70a,param_7);
    FUN_143249de0(param_1,param_3 * 3684.22,0x4030000000000000,0xc03011eb851eb852,param_8);
    FUN_143249de0(param_1,param_3 * 9653.49,0x4030000000000000,0x402b6b851eb851ec,param_9);
    uVar3 = 0x3fe3333333333333;
    param_3 = 2103.23;
    break;
  case 0x28:
    FUN_143249cc0(param_1,0x4047000000000000,param_4);
    FUN_14324a280(param_1,0x405bcccccccccccd,0x3fc0000000000000,0xc02f333333333333,param_5);
    FUN_143249de0(param_1,param_3 * 272.0,0x401399999999999a,0x4017333333333333,param_6);
    FUN_143249de0(param_1,param_3 * 562.3,0x4016000000000000,0xc02a333333333333,param_7);
    FUN_143249de0(param_1,param_3 * 1810.0,0x401799999999999a,0xc023cccccccccccd,param_8);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    uVar3 = 0x3ff6666666666666;
    param_3 = 3130.0;
    break;
  case 0x29:
    FUN_143249cc0(param_1,0x40be5d947ae147ae,param_4);
    FUN_143249de0(param_1,param_3 * 4000.0,0x4030000000000000,0,param_5);
    FUN_143249de0(param_1,0x406e870a3d70a3d7,0x4012b851eb851eb8,0x4032000000000000,param_6);
    FUN_143249de0(param_1,0x409a4da3d70a3d71,0x3ffc7ae147ae147b,0xc025dc28f5c28f5c,param_7);
    FUN_143249de0(param_1,param_3 * 4000.0,0x4030000000000000,0x4032000000000000,param_8);
    FUN_143249de0(param_1,param_3 * 5108.97,0x4030000000000000,0x402d23d70a3d70a4,param_9);
    param_3 = param_3 * 11813.7;
    uVar3 = 0x3feb333333333333;
    break;
  case 0x2a:
    FUN_14324a310(param_1,param_3 * 145.96,0x3fd47ae147ae147b);
    FUN_143249de0(param_1,0x4073700000000000,0x402e9eb851eb851f,0x402a947ae147ae14,param_5);
    FUN_143249de0(param_1,0x407dfe6666666666,0x4030000000000000,0x4025cccccccccccd,param_6);
    FUN_143249de0(param_1,param_3 * 792.27,0x401f000000000000,0x4032000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 2040.0,0x402ac7ae147ae148,0x402b000000000000,param_8);
    FUN_143249de0(param_1,param_3 * 4480.75,0x402ad70a3d70a3d7,0x402a23d70a3d70a4,param_9);
    uVar3 = 0x3ff68f5c28f5c28f;
    param_3 = 5356.3;
    break;
  case 0x2b:
    FUN_14324a310(param_1,0x404e400000000000,0x3ff6666666666666);
    FUN_143249de0(param_1,param_3 * 306.5,0x3fd999999999999a,0x4025cccccccccccd,param_5);
    FUN_143249de0(param_1,param_3 * 1770.0,0x400d99999999999a,0xc029333333333333,param_6);
    FUN_143249de0(param_1,param_3 * 6630.0,0x402199999999999a,0xc032000000000000,param_7);
    FUN_14324a3e0(param_1,param_3 * 9060.0,0x3ff0000000000000,param_8);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    param_3 = 9080.0;
    uVar3 = 0x3ff0000000000000;
    break;
  case 0x2c:
    FUN_14324a310(param_1,0x4035000000000000,0x3ff6666666666666);
    FUN_143249de0(param_1,param_3 * 80.0,0x401f99999999999a,0x4032000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 160.0,0x402e000000000000,0x403019999999999a,param_6);
    FUN_143249de0(param_1,param_3 * 240.0,0x4030000000000000,0x4032000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 1270.0,0x400ccccccccccccd,0x402a333333333333,param_8);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    uVar3 = 0x3ff6666666666666;
    param_3 = 6210.0;
    break;
  case 0x2d:
    FUN_143249cc0(param_1,0x4036800000000000,param_4);
    FUN_143249de0(param_1,param_3 * 42.1,0x400b333333333333,0x4030e66666666666,param_5);
    FUN_143249de0(param_1,param_3 * 175.7,0x402ecccccccccccd,0x40304ccccccccccd,param_6);
    FUN_143249de0(param_1,param_3 * 179.4,0x401a666666666666,0x4023cccccccccccd,param_7);
    FUN_143249de0(param_1,param_3 * 1710.0,0x4002666666666666,0xc02499999999999a,param_8);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_143249d50(param_1,0x40b6a80000000000,param_10);
    return;
  case 0x2e:
    FUN_14324a310(param_1,0x403c800000000000,0x3ff6666666666666);
    FUN_143249de0(param_1,param_3 * 130.0,0x4012666666666666,0x4032000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 311.3,0x4008cccccccccccd,0xc032000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 165.0,0x4028000000000000,0x4027cccccccccccd,param_7);
    FUN_143249de0(param_1,param_3 * 1190.0,0x4030000000000000,0xc032000000000000,param_8);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    uVar3 = 0x3ff6666666666666;
    param_3 = 7630.0;
    break;
  case 0x2f:
    FUN_14324a310(param_1,0x404e333333333333,0x3ff6666666666666);
    FUN_143249de0(param_1,param_3 * 300.0,0x4026000000000000,0xc028666666666666,param_5);
    FUN_143249de0(param_1,param_3 * 727.0,0x3fd999999999999a,0xc028cccccccccccd,param_6);
    FUN_143249de0(param_1,param_3 * 3890.0,0x4015333333333333,0x402a99999999999a,param_7);
    FUN_143249de0(param_1,param_3 * 8930.0,0x4025000000000000,0x401599999999999a,param_8);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    uVar3 = 0x3ff6666666666666;
    param_3 = 11800.0;
    break;
  case 0x30:
    FUN_14324a310(param_1,0x40546f5c28f5c28f,0x3ff1c28f5c28f5c3);
    FUN_143249de0(param_1,param_3 * 4000.0,0x401a000000000000,0x4023b851eb851eb8,param_5);
    FUN_143249de0(param_1,param_3 * 1133.55,0x401c8f5c28f5c28f,0xc032000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 1146.9,0x3ff7851eb851eb85,0xc032000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 4859.41,0x402351eb851eb852,0xc032000000000000,param_8);
    FUN_143249de0(param_1,param_3 * 8961.5,0x4030000000000000,0xc0226b851eb851ec,param_9);
    uVar3 = 0x3fe3333333333333;
    param_3 = 8860.73;
    break;
  case 0x31:
    FUN_143249cc0(param_1,0x405eeb851eb851ec,param_4);
    FUN_143249de0(param_1,0x406defae147ae148,0x3fd999999999999a,0xc032000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 1737.78,0x4021947ae147ae14,0x40315c28f5c28f5c,param_6);
    FUN_143249de0(param_1,param_3 * 2993.58,0x402f4ccccccccccd,0x402d23d70a3d70a4,param_7);
    FUN_143249de0(param_1,param_3 * 9323.87,0x401dae147ae147ae,0x4032000000000000,param_8);
    FUN_143249de0(param_1,param_3 * 3101.03,0x402b70a3d70a3d71,0x4029b851eb851eb8,param_9);
    FUN_143249d50(param_1,0x408bbb70a3d70a3d,param_10);
    return;
  case 0x32:
    FUN_14324a310(param_1,0x40524ccccccccccd,0x3ff68f5c28f5c28f);
    FUN_143249de0(param_1,param_3 * 515.96,0x4003851eb851eb85,0xc031ca3d70a3d70a,param_5);
    FUN_143249de0(param_1,param_3 * 2878.74,0x4006147ae147ae14,0xc01b70a3d70a3d71,param_6);
    FUN_143249de0(param_1,param_3 * 5179.47,0x4030000000000000,0xc0286b851eb851ec,param_7);
    FUN_143249de0(param_1,param_3 * 6202.06,0x4030000000000000,0x401fb851eb851eb8,param_8);
    FUN_143249de0(param_1,param_3 * 9466.52,0x4030000000000000,0xc019b851eb851eb8,param_9);
    FUN_143249d50(param_1,0x40a94bc28f5c28f6,param_10);
    return;
  case 0x33:
    FUN_14324a310(param_1,param_3 * 902.59,0x3feccccccccccccd);
    FUN_143249de0(param_1,param_3 * 831.3,0x4000000000000000,0x401570a3d70a3d71,param_5);
    FUN_143249de0(param_1,param_3 * 1230.71,0x4024c28f5c28f5c3,0xc022000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 3831.19,0x402923d70a3d70a4,0xc032000000000000,param_7);
    FUN_143249de0(param_1,0x40b6ef3333333333,0x402c3d70a3d70a3d,0x402a23d70a3d70a4,param_8);
    FUN_143249de0(param_1,0x40a623c28f5c28f6,0x4030000000000000,0x40256b851eb851ec,param_9);
    uVar3 = 0x3fe6b851eb851eb8;
    param_3 = 2609.6;
    break;
  case 0x34:
    FUN_14324a310(param_1,param_3 * 572.37,0x3fe947ae147ae148);
    FUN_143249de0(param_1,0x40a7c1f0a3d70a3d,0x4026851eb851eb85,0x4020b851eb851eb8,param_5);
    FUN_143249de0(param_1,param_3 * 935.64,0x400947ae147ae148,0x401647ae147ae148,param_6);
    FUN_143249de0(param_1,param_3 * 1211.53,0x4000000000000000,0xc01128f5c28f5c29,param_7);
    FUN_143249de0(param_1,param_3 * 3535.81,0x4030000000000000,0xc02fb851eb851eb8,param_8);
    FUN_143249de0(param_1,0x40b20835c28f5c29,0x4030000000000000,0x402347ae147ae148,param_9);
    uVar3 = 0x3fe70a3d70a3d70a;
    param_3 = 2180.22;
    break;
  case 0x35:
    FUN_143249cc0(param_1,0x4034000000000000,param_4);
    FUN_143249de0(param_1,param_3 * 3212.34,0x401a99999999999a,0xc00651eb851eb852,param_5);
    FUN_143249de0(param_1,param_3 * 4352.1,0x4017d70a3d70a3d7,0x4024947ae147ae14,param_6);
    FUN_143249de0(param_1,param_3 * 7530.09,0x402f4ccccccccccd,0x4022000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 9448.32,0x4030000000000000,0xc02123d70a3d70a4,param_8);
    FUN_143249de0(param_1,param_3 * 10857.11,0x4030000000000000,0x4027947ae147ae14,param_9);
    FUN_143249d50(param_1,0x40c8cb3eb851eb85,param_10);
    return;
  case 0x36:
    FUN_14324a310(param_1,0x408c34b851eb851f,0x3fe5c28f5c28f5c3);
    FUN_14324a310(param_1,param_3 * 902.59,0x3fe5c28f5c28f5c3,param_5);
    FUN_143249de0(param_1,param_3 * 1622.29,0x401d0a3d70a3d70a,0x4024947ae147ae14,param_6);
    FUN_143249de0(param_1,param_3 * 4893.62,0x401b333333333333,0xc02f47ae147ae148,param_7);
    FUN_143249de0(param_1,param_3 * 3930.09,0x402c0f5c28f5c28f,0xc032000000000000,param_8);
    FUN_14324a3e0(param_1,param_3 * 2609.6,0x3fdd70a3d70a3d71,param_9);
    uVar3 = 0x3fdd70a3d70a3d71;
    param_3 = 2609.6;
    break;
  case 0x37:
    FUN_14324a310(param_1,0x406b9a8f5c28f5c3,0x3fe0000000000000);
    FUN_143249de0(param_1,param_3 * 484.61,0x4017d70a3d70a3d7,0x402c47ae147ae148,param_5);
    FUN_143249de0(param_1,param_3 * 1520.49,0x401170a3d70a3d71,0x402423d70a3d70a4,param_6);
    FUN_143249de0(param_1,param_3 * 2600.86,0x401bcccccccccccd,0x402a947ae147ae14,param_7);
    FUN_143249de0(param_1,param_3 * 4325.49,0x40208f5c28f5c28f,0x4032000000000000,param_8);
    FUN_14324a3e0(param_1,0x40bdf9cf5c28f5c3,0x3fd0000000000000,param_9);
    FUN_143249d50(param_1,param_3 * 7673.81,param_10);
    return;
  case 0x38:
    FUN_143249cc0(param_1,0x406b9a8f5c28f5c3,param_4);
    FUN_143249de0(param_1,param_3 * 183.1,0x4020eb851eb851ec,0x4032000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 627.52,0x4007333333333333,0x401728f5c28f5c29,param_6);
    FUN_143249de0(param_1,param_3 * 1761.36,0x4030000000000000,0xc02d947ae147ae14,param_7);
    FUN_143249de0(param_1,param_3 * 4780.82,0x4030000000000000,0x402723d70a3d70a4,param_8);
    FUN_143249de0(param_1,param_3 * 6576.85,0x4030000000000000,0x402947ae147ae148,param_9);
    uVar3 = 0x3fdb851eb851eb85;
    param_3 = 11813.7;
    break;
  case 0x39:
    FUN_143249cc0(param_1,0x4060cb851eb851ec,param_4);
    FUN_143249de0(param_1,param_3 * 60.0,0x40208f5c28f5c28f,0xc018d70a3d70a3d7,param_5);
    FUN_143249de0(param_1,param_3 * 209.21,0x400ca3d70a3d70a4,0x4032000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 393.77,0x4010c28f5c28f5c3,0x4032000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 1000.0,0x4010c28f5c28f5c3,0x402e000000000000,param_8);
    FUN_143249de0(param_1,param_3 * 4816.96,0x4030000000000000,0x4032000000000000,param_9);
    uVar3 = 0x3fdb851eb851eb85;
    param_3 = 10231.23;
    break;
  case 0x3a:
    FUN_143249cc0(param_1,0x4063d1eb851eb852,param_4);
    FUN_143249de0(param_1,param_3 * 57.12,0x400f5c28f5c28f5c,0xc032000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 348.77,0x4001c28f5c28f5c3,0x4020b851eb851eb8,param_6);
    FUN_143249de0(param_1,param_3 * 2231.77,0x4014e147ae147ae1,0x4027947ae147ae14,param_7);
    FUN_143249de0(param_1,param_3 * 4660.21,0x4030000000000000,0xc01b70a3d70a3d71,param_8);
    FUN_143249de0(param_1,param_3 * 13257.41,0x4030000000000000,0x4028000000000000,param_9);
    FUN_143249d50(param_1,0x40a4633333333333,param_10);
    return;
  case 0x3b:
    FUN_14324a310(param_1,0x407338f5c28f5c29,0x3fe4cccccccccccd);
    FUN_143249cc0(param_1,param_3 * 307.56,param_5);
    FUN_143249de0(param_1,param_3 * 4300.0,0x4030000000000000,0x402e000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 5526.33,0x4030000000000000,0xc025000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 9941.65,0x4030000000000000,0xc032000000000000,param_8);
    FUN_14324a3e0(param_1,param_3 * 7673.81,0x3fef5c28f5c28f5c,param_9);
    uVar3 = 0x3fef5c28f5c28f5c;
    param_3 = 7673.81;
    break;
  case 0x3c:
    FUN_14324a310(param_1,0x4076af5c28f5c28f,0x3ff68f5c28f5c28f);
    FUN_143249de0(param_1,0x404c8f5c28f5c28f,0x3fd999999999999a,0xc032000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 223.18,0x400af5c28f5c28f6,0xc0226b851eb851ec,param_6);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3fd999999999999a,0x4032000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 5000.0,0x4020eb851eb851ec,0xc032000000000000,param_8);
    FUN_143249de0(param_1,param_3 * 8000.0,0x4030000000000000,0xc032000000000000,param_9);
    uVar3 = 0x3ff5eb851eb851ec;
    param_3 = 4638.81;
    break;
  case 0x3d:
    FUN_14324a310(param_1,param_3 * 58.69,0x3ff68f5c28f5c28f);
    FUN_143249de0(param_1,param_3 * 57.12,0x400f5c28f5c28f5c,0,param_5);
    FUN_143249de0(param_1,param_3 * 113.36,0x3ff6e147ae147ae1,0x4026b851eb851eb8,param_6);
    FUN_143249de0(param_1,param_3 * 346.04,0x4009333333333333,0x402d23d70a3d70a4,param_7);
    FUN_143249de0(param_1,param_3 * 5802.88,0x4030000000000000,0x4012d70a3d70a3d7,param_8);
    param_3 = param_3 * 8860.73;
    FUN_14324a3e0(param_1,param_3,0x3ff68f5c28f5c28f,param_9);
    uVar3 = 0x3ff68f5c28f5c28f;
    break;
  case 0x3e:
    FUN_14324a310(param_1,0x405c766666666666,0x3fe70a3d70a3d70a);
    FUN_143249de0(param_1,param_3 * 339.34,0x40278a3d70a3d70a,0x4032000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 697.48,0x40125c28f5c28f5c,0x4026b851eb851eb8,param_6);
    FUN_143249de0(param_1,param_3 * 2316.84,0x4030000000000000,0xc0148f5c28f5c28f,param_7);
    FUN_143249de0(param_1,param_3 * 3720.43,0x40278a3d70a3d70a,0xc032000000000000,param_8);
    FUN_143249de0(param_1,param_3 * 9977.2,0x40278a3d70a3d70a,0xc032000000000000,param_9);
    goto LAB_14324ea78;
  case 0x3f:
    FUN_14324a310(param_1,param_3 * 260.61,0x3fe7ae147ae147ae);
    FUN_143249de0(param_1,param_3 * 2651.48,0x4024c28f5c28f5c3,0x401c47ae147ae148,param_5);
    FUN_143249de0(param_1,param_3 * 255.17,0x40150a3d70a3d70a,0x400b70a3d70a3d71,param_6);
    FUN_143249de0(param_1,0x408e67ae147ae148,0x3ff170a3d70a3d71,0xc028dc28f5c28f5c,param_7);
    FUN_143249de0(param_1,param_3 * 4111.16,0x401e851eb851eb85,0x400ee147ae147ae1,param_8);
    FUN_143249de0(param_1,param_3 * 8961.5,0x40157ae147ae147b,0x4012000000000000,param_9);
    uVar3 = 0x3ff68f5c28f5c28f;
    param_3 = 6411.18;
    break;
  case 0x40:
    FUN_14324a310(param_1,0x406968f5c28f5c29,0x3fd0000000000000);
    FUN_14324a280(param_1,param_3 * 40.0,0x3fc0000000000000,0x401d28f5c28f5c29,param_5);
    FUN_143249de0(param_1,param_3 * 885.72,0x40113d70a3d70a3d,0xc013b851eb851eb8,param_6);
    FUN_143249de0(param_1,0x408f400000000000,0x3fd999999999999a,0xc028000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 2442.16,0x401a333333333333,0x4018000000000000,param_8);
    FUN_143249de0(param_1,param_3 * 4079.0,0x4017d70a3d70a3d7,0x401647ae147ae148,param_9);
    uVar3 = 0x3ff68f5c28f5c28f;
    param_3 = 12694.49;
    break;
  case 0x41:
    FUN_14324a310(param_1,0x4034000000000000,0x3ff68f5c28f5c28f);
    FUN_14324a310(param_1,param_3 * 20.0,0x3ff68f5c28f5c28f,param_5);
    FUN_143249de0(param_1,param_3 * 120.69,0x402df5c28f5c28f6,0xc028000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 582.53,0x402df5c28f5c28f6,0xc01647ae147ae148,param_7);
    FUN_143249de0(param_1,param_3 * 4125.69,0x4030000000000000,0x401128f5c28f5c29,param_8);
    FUN_143249de0(param_1,param_3 * 7057.47,0x401a99999999999a,0x400d1eb851eb851f,param_9);
    param_3 = 18187.0;
    uVar3 = 0x3ff68f5c28f5c28f;
    break;
  case 0x42:
    FUN_143249cc0(param_1,0x4084408f5c28f5c3,param_4);
    FUN_143249de0(param_1,param_3 * 91.75,0x4014e147ae147ae1,0x402047ae147ae148,param_5);
    FUN_143249de0(param_1,param_3 * 348.77,0x401b5c28f5c28f5c,0x402947ae147ae148,param_6);
    FUN_143249de0(param_1,param_3 * 275.73,0x40258f5c28f5c28f,0x4024947ae147ae14,param_7);
    FUN_143249de0(param_1,0x40989c3d70a3d70a,0x3ff599999999999a,0xc02947ae147ae148,param_8);
    FUN_143249de0(param_1,param_3 * 8254.04,0x40204ccccccccccd,0x4022dc28f5c28f5c,param_9);
    FUN_143249d50(param_1,0x40b4ec4ccccccccd,param_10);
    return;
  case 0x43:
    FUN_14324a310(param_1,0x4052d00000000000,0x3ff68f5c28f5c28f);
    FUN_143249de0(param_1,0x405d5ae147ae147b,0x3ff0f5c28f5c28f6,0xc01c47ae147ae148,param_5);
    FUN_143249de0(param_1,param_3 * 259.49,0x401047ae147ae148,0x4032000000000000,param_6);
    FUN_143249de0(param_1,0x40733ae147ae147b,0x3fd999999999999a,0xc02bdc28f5c28f5c,param_7);
    FUN_143249de0(param_1,param_3 * 5407.7,0x4030000000000000,0x3ff8000000000000,param_8);
    FUN_143249de0(param_1,param_3 * 8254.04,0x4030000000000000,0x4018000000000000,param_9);
    uVar3 = 0x3ff68f5c28f5c28f;
    param_3 = 7141.38;
    break;
  case 0x44:
    FUN_14324a310(param_1,0x4052d00000000000,0x3ff68f5c28f5c28f);
    FUN_143249cc0(param_1,param_3 * 75.25,param_5);
    FUN_143249de0(param_1,param_3 * 84.51,0x402df5c28f5c28f6,0xc013b851eb851eb8,param_6);
    FUN_143249de0(param_1,param_3 * 480.82,0x4030000000000000,0xc022000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 3187.21,0x4030000000000000,0x401eeb851eb851ec,param_8);
    FUN_143249de0(param_1,param_3 * 4682.28,0x4030000000000000,0x401570a3d70a3d71,param_9);
    uVar3 = 0x3ff68f5c28f5c28f;
    param_3 = 14657.96;
    break;
  case 0x45:
    FUN_143249cc0(param_1,0x407338f5c28f5c29,param_4);
    FUN_143249de0(param_1,param_3 * 311.3,0x4030000000000000,0x402e000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 500.0,0x4030000000000000,0xc022000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 2700.0,0x4030000000000000,0x4025000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 4328.96,0x4020333333333333,0x402cb851eb851eb8,param_8);
    FUN_143249de0(param_1,param_3 * 10000.0,0x4030000000000000,0,param_9);
    FUN_143249d50(param_1,0x40ab2e947ae147ae,param_10);
    return;
  case 0x46:
    FUN_143249cc0(param_1,0x4074e1c28f5c28f6,param_4);
    uVar3 = 0x4022000000000000;
    goto LAB_143254bfa;
  case 0x47:
    FUN_143249cc0(param_1,0x409b5b0000000000,param_4);
    FUN_143249de0(param_1,param_3 * 1387.96,0x4022147ae147ae14,0x4025000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 224.94,0x3ff599999999999a,0x4030ee147ae147ae,param_6);
    FUN_143249de0(param_1,param_3 * 291.26,0x3ffc000000000000,0x402b000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 5161.48,0x4030000000000000,0xc032000000000000,param_8);
    FUN_143249de0(param_1,param_3 * 7196.86,0x40242e147ae147ae,0x4032000000000000,param_9);
    FUN_143249d50(param_1,0x40a94bc28f5c28f6,param_10);
    return;
  case 0x48:
    FUN_14324a310(param_1,0x4060cb851eb851ec,0x3ff07ae147ae147b);
    FUN_143249cc0(param_1,param_3 * 134.36,param_5);
    FUN_143249de0(param_1,param_3 * 475.23,0x4030000000000000,0xc028dc28f5c28f5c,param_6);
    FUN_143249de0(param_1,param_3 * 632.46,0x4030000000000000,0xc02e6b851eb851ec,param_7);
    FUN_143249de0(param_1,param_3 * 2778.99,0x40138f5c28f5c28f,0xc020b851eb851eb8,param_8);
    FUN_14324a3e0(param_1,param_3 * 12694.49,0x3fedc28f5c28f5c3,param_9);
    uVar3 = 0x3fedc28f5c28f5c3;
    param_3 = 12694.49;
    break;
  case 0x49:
    FUN_14324a310(param_1,0x4034000000000000,0x3ff68f5c28f5c28f);
    FUN_143249de0(param_1,param_3 * 46.24,0x3ff199999999999a,0x400b70a3d70a3d71,param_5);
    FUN_143249de0(param_1,param_3 * 133.62,0x3ff70a3d70a3d70a,0x4018000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_7);
    FUN_14324a3e0(param_1,0x4076a1c28f5c28f6,0x3ff69fbe76c8b439,param_8);
    param_3 = param_3 * 66.66;
    FUN_14324a3e0(param_1,param_3,0x3ff0000000000000,param_9);
    uVar3 = 0x3ff0000000000000;
    break;
  case 0x4a:
    FUN_14324a310(param_1,param_3 * 505.5,0x3ff68f5c28f5c28f);
    FUN_143249de0(param_1,param_3 * 106.68,0x401999999999999a,0x400651eb851eb852,param_5);
    FUN_143249de0(param_1,param_3 * 536.34,0x401a000000000000,0x4022dc28f5c28f5c,param_6);
    FUN_143249de0(param_1,param_3 * 221.43,0x401651eb851eb852,0x4027947ae147ae14,param_7);
    FUN_143249de0(param_1,0x409ab83d70a3d70a,0x4010c28f5c28f5c3,0xc02047ae147ae148,param_8);
    FUN_143249de0(param_1,param_3 * 6275.08,0x400c51eb851eb852,0x4022000000000000,param_9);
    FUN_143249d50(param_1,0x40a5a58000000000,param_10);
    return;
  case 0x4b:
    FUN_14324a310(param_1,0x404d5851eb851eb8,0x3fe5c28f5c28f5c3);
    FUN_143249de0(param_1,param_3 * 106.68,0x401999999999999a,0x4019b851eb851eb8,param_5);
    FUN_143249de0(param_1,param_3 * 443.91,0x4000000000000000,0x401fb851eb851eb8,param_6);
    FUN_143249de0(param_1,param_3 * 221.43,0x401651eb851eb852,0xc032000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 1710.06,0x4010c28f5c28f5c3,0xc027947ae147ae14,param_8);
    FUN_143249de0(param_1,param_3 * 6275.08,0x400c51eb851eb852,0x401e000000000000,param_9);
    FUN_143249d50(param_1,0x40a5a58000000000,param_10);
    return;
  case 0x4c:
    FUN_14324a310(param_1,param_3 * 30.26,0x3febd70a3d70a3d7);
    FUN_143249de0(param_1,param_3 * 93.02,0x4006b851eb851eb8,0x4019b851eb851eb8,param_5);
    FUN_143249de0(param_1,param_3 * 443.91,0x401b5c28f5c28f5c,0x401a8f5c28f5c28f,param_6);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_7);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_8);
    FUN_14324a3e0(param_1,0x4066cdc28f5c28f6,0x3ff68f5c28f5c28f,param_9);
    uVar3 = 0x3ff68f5c28f5c28f;
    param_3 = 182.43;
    break;
  case 0x4d:
    FUN_14324a310(param_1,0x4065880000000000,0x3fe3d70a3d70a3d7);
    FUN_143249de0(param_1,param_3 * 92.76,0x3ff87ae147ae147b,0x401728f5c28f5c29,param_5);
    FUN_143249de0(param_1,param_3 * 3816.47,0x3ffe666666666666,0x401728f5c28f5c29,param_6);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3fd999999999999a,0xc02b000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 2188.54,0x401c99999999999a,0xc02d23d70a3d70a4,param_8);
    FUN_143249de0(param_1,param_3 * 4565.87,0x4018000000000000,0x4022d1eb851eb852,param_9);
    FUN_143249d50(param_1,0x40b378ab851eb852,param_10);
    return;
  case 0x4e:
    FUN_14324a310(param_1,0x4059900000000000,0x3fe3d70a3d70a3d7);
    FUN_143249de0(param_1,0x40565147ae147ae1,0x3ffa8f5c28f5c28f,0xc032000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 137.63,0x3ffd99999999999a,0xc032000000000000,param_6);
    FUN_14324a3e0(param_1,0x409fd13d70a3d70a,0x3ff69fbe76c8b439,param_7);
    FUN_14324a3e0(param_1,0x409fd13d70a3d70a,0x3ff69fbe76c8b439,param_8);
    param_3 = param_3 * 2609.6;
    FUN_14324a3e0(param_1,param_3,0x3fd0000000000000,param_9);
    uVar3 = 0x3fd0000000000000;
    break;
  case 0x4f:
    FUN_143249cc0(param_1,0x4095566666666666,param_4);
    FUN_143249de0(param_1,0x4069e5c28f5c28f6,0x4015d70a3d70a3d7,0xc032000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 4031.54,0x4030000000000000,0xc032000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 4811.66,0x4030000000000000,0xc032000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 5521.95,0x4026000000000000,0xc021947ae147ae14,param_8);
    FUN_14324a3e0(param_1,0x40a5e851eb851eb8,0x3fe147ae147ae148,param_9);
    param_3 = param_3 * 2804.16;
    uVar3 = 0x3fe147ae147ae148;
    break;
  case 0x50:
    FUN_143249de0(param_1,0x405e847ae147ae14,0x3ffbd70a3d70a3d7,0xc032000000000000,param_4);
    FUN_143249de0(param_1,param_3 * 188.6,0x4006147ae147ae14,0xc032000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 1437.78,0x3ff3333333333333,0x40304a3d70a3d70a,param_6);
    FUN_143249de0(param_1,param_3 * 1974.23,0x401dae147ae147ae,0x401647ae147ae148,param_7);
    FUN_14324a3e0(param_1,param_3 * 894.75,0x3ff69fbe76c8b439,param_8);
    FUN_14324a3e0(param_1,0x40a5e851eb851eb8,0x3fe3d70a3d70a3d7,param_9);
    uVar3 = 0x3fe3d70a3d70a3d7;
    param_3 = 2804.16;
    break;
  case 0x51:
    FUN_14324a310(param_1,param_3 * 745.52,0x3ff69fbe76c8b439);
    FUN_143249de0(param_1,0x4060d570a3d70a3d,0x40100a3d70a3d70a,0xc032000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 479.04,0x400f5c28f5c28f5c,0x4032000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 765.39,0x40100a3d70a3d70a,0xc025000000000000,param_7);
    FUN_14324a3e0(param_1,param_3 * 872.94,0x3ff69fbe76c8b439,param_8);
    FUN_14324a3e0(param_1,0x40a5e851eb851eb8,0x3fdc28f5c28f5c29,param_9);
    uVar3 = 0x3fdc28f5c28f5c29;
    param_3 = 2804.16;
    break;
  case 0x52:
    FUN_14324a310(param_1,param_3 * 1919.43,0x3ff69fbe76c8b439);
    FUN_143249de0(param_1,param_3 * 306.49,0x40028f5c28f5c28f,0x4032000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 630.11,0x3ffbd70a3d70a3d7,0x4018000000000000,param_6);
    FUN_14324a3e0(param_1,0x40a5d5851eb851ec,0x3ff69fbe76c8b439,param_7);
    FUN_14324a3e0(param_1,0x40a5d5851eb851ec,0x3ff69fbe76c8b439,param_8);
    param_3 = param_3 * 2609.6;
    FUN_14324a3e0(param_1,param_3,0x3fdc28f5c28f5c29,param_9);
    uVar3 = 0x3fdc28f5c28f5c29;
    break;
  case 0x53:
    FUN_14324a310(param_1,param_3 * 362.96,0x3fd70a3d70a3d70a);
    FUN_14324a310(param_1,param_3 * 362.96,0x3fd70a3d70a3d70a,param_5);
    FUN_143249de0(param_1,param_3 * 620.21,0x40100a3d70a3d70a,0x4018d70a3d70a3d7,param_6);
    FUN_143249de0(param_1,0x40af400000000000,0x4020eb851eb851ec,0xc032000000000000,param_7);
    FUN_143249de0(param_1,0x40b5b5fae147ae14,0x4010666666666666,0xc032000000000000,param_8);
    FUN_14324a3e0(param_1,param_3 * 3013.23,0x3fd0a3d70a3d70a4,param_9);
    uVar3 = 0x3fd0a3d70a3d70a4;
    param_3 = 3013.23;
    break;
  case 0x54:
    FUN_14324a310(param_1,0x4099715c28f5c28f,0x3ff69fbe76c8b439);
    FUN_143249de0(param_1,param_3 * 306.49,0x40028f5c28f5c28f,0x4030b5c28f5c28f6,param_5);
    FUN_143249de0(param_1,param_3 * 667.45,0x3ffbd70a3d70a3d7,0x401c47ae147ae148,param_6);
    FUN_143249de0(param_1,param_3 * 1974.23,0x400d5c28f5c28f5c,0x401647ae147ae148,param_7);
    FUN_14324a3e0(param_1,0x40a05f8a3d70a3d7,0x3ff69fbe76c8b439,param_8);
    param_3 = param_3 * 2609.6;
    FUN_14324a3e0(param_1,param_3,0x3fdc28f5c28f5c29,param_9);
    uVar3 = 0x3fdc28f5c28f5c29;
    break;
  case 0x55:
    FUN_14324a310(param_1,0x407ac570a3d70a3d,0x3ff0cccccccccccd);
    FUN_143249de0(param_1,param_3 * 1060.0,0x401199999999999a,0xc020cccccccccccd,param_5);
    FUN_143249de0(param_1,param_3 * 4924.22,0x4030000000000000,0xc032000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 4234.48,0x4030000000000000,0xc032000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 5802.88,0x4030000000000000,0xc032000000000000,param_8);
    FUN_14324a3e0(param_1,param_3 * 3237.88,0x3fd0000000000000,param_9);
    uVar3 = 0x3fd0000000000000;
    param_3 = 3237.88;
    break;
  case 0x56:
    FUN_14324a310(param_1,0x408dd0f5c28f5c29,0x3ff69fbe76c8b439);
    FUN_143249de0(param_1,param_3 * 2627.82,0x4014000000000000,0x402f47ae147ae148,param_5);
    FUN_143249de0(param_1,param_3 * 3146.15,0x4020333333333333,0x402e000000000000,param_6);
    FUN_14324a3e0(param_1,param_3 * 2794.76,0x3ff69fbe76c8b439,param_7);
    FUN_14324a3e0(param_1,0x40a5d5851eb851ec,0x3ff69fbe76c8b439,param_8);
    FUN_14324a3e0(param_1,param_3 * 2609.6,0x3ff68f5c28f5c28f,param_9);
    uVar3 = 0x3ff68f5c28f5c28f;
    param_3 = 2609.6;
    break;
  case 0x57:
    FUN_14324a310(param_1,0x4087e68f5c28f5c3,0x3ff68f5c28f5c28f);
    FUN_143249de0(param_1,param_3 * 141.15,0x4018851eb851eb85,0xc032000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 2755.21,0x400c28f5c28f5c29,0x400ccccccccccccd,param_6);
    FUN_14324a200(param_1,0x40bce4dc28f5c28f,0x3ff0000000000000,0xc032000000000000,param_7);
    FUN_14324a3e0(param_1,0x40a536eb851eb852,0x3ff69fbe76c8b439,param_8);
    FUN_14324a3e0(param_1,0x40a536eb851eb852,0x3ff69fbe76c8b439,param_9);
    param_3 = param_3 * 2609.6;
    uVar3 = 0x3fdd70a3d70a3d71;
    break;
  case 0x58:
    FUN_14324a310(param_1,0x406b9a8f5c28f5c3,0x3ff68f5c28f5c28f);
    FUN_143249de0(param_1,param_3 * 142.26,0x4009333333333333,0xc032000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 2559.6,0x400d5c28f5c28f5c,0x402723d70a3d70a4,param_6);
    FUN_143249de0(param_1,param_3 * 3863.23,0x4030000000000000,0xc032000000000000,param_7);
    uVar3 = 0x40155c28f5c28f5c;
    dVar1 = param_3 * 5370.08;
    uVar2 = 0xc032000000000000;
    goto LAB_143250209;
  case 0x59:
    FUN_14324a310(param_1,0x407d1547ae147ae1,0x3fea3d70a3d70a3d);
    FUN_143249de0(param_1,param_3 * 142.26,0x4009333333333333,0xc022dc28f5c28f5c,param_5);
    FUN_143249de0(param_1,param_3 * 1400.45,0x40185c28f5c28f5c,0x402347ae147ae148,param_6);
    FUN_143249de0(param_1,param_3 * 3863.23,0x4030000000000000,0xc032000000000000,param_7);
    uVar2 = 0xc02fb851eb851eb8;
    dVar1 = param_3 * 5672.71;
    uVar3 = 0x401c666666666666;
LAB_143250209:
    FUN_143249de0(param_1,dVar1,uVar3,uVar2,param_8);
    FUN_14324a3e0(param_1,0x40a1a8147ae147ae,0x3fd0000000000000,param_9);
    FUN_143249d50(param_1,param_3 * 2260.04,param_10);
    return;
  case 0x5a:
    FUN_14324a310(param_1,0x407d1547ae147ae1,0x3fd7ae147ae147ae);
    FUN_14324a310(param_1,param_3 * 465.33,0x3fd7ae147ae147ae,param_5);
    FUN_143249de0(param_1,param_3 * 138.42,0x4030000000000000,0xc032000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 4172.44,0x4017d70a3d70a3d7,0xc032000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 5964.15,0x40051eb851eb851f,0xc032000000000000,param_8);
    FUN_14324a3e0(param_1,param_3 * 3237.88,0x3fd3d70a3d70a3d7,param_9);
    uVar3 = 0x3fd3d70a3d70a3d7;
    param_3 = 3237.88;
    break;
  case 0x5b:
    FUN_14324a310(param_1,0x4095566666666666,0x3fe199999999999a);
    FUN_143249de0(param_1,param_3 * 3786.61,0x4030000000000000,0xc032000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 4377.09,0x4030000000000000,0xc032000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 5224.07,0x40260a3d70a3d70a,0xc0286b851eb851ec,param_7);
    FUN_143249de0(param_1,param_3 * 6690.0,0x4026000000000000,0xc02edc28f5c28f5c,param_8);
    FUN_14324a3e0(param_1,param_3 * 2804.16,0x3fd0000000000000,param_9);
LAB_1432504dc:
    FUN_143249d50(param_1,0x40a5e851eb851eb8,param_10);
    return;
  case 0x5c:
    FUN_14324a310(param_1,0x409214999999999a,0x3ff68f5c28f5c28f);
    FUN_143249de0(param_1,param_3 * 110.29,0x4030000000000000,0xc032000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 733.09,0x3ff6666666666666,0x401eae147ae147ae,param_6);
    FUN_14324a200(param_1,0x40bce4dc28f5c28f,0x3ff0000000000000,0xc032000000000000,param_7);
    FUN_14324a3e0(param_1,0x40ac4a428f5c28f6,0x3ff69fbe76c8b439,param_8);
    FUN_14324a3e0(param_1,0x40ac4a428f5c28f6,0x3ff69fbe76c8b439,param_9);
    param_3 = param_3 * 2609.6;
    uVar3 = 0x3feb851eb851eb85;
    break;
  case 0x5d:
    FUN_14324a310(param_1,param_3 * 334.11,0x3fd47ae147ae147b);
    FUN_14324a310(param_1,param_3 * 245.65,0x3ff69fbe76c8b439,param_5);
    FUN_14324a310(param_1,param_3 * 245.65,0x3ff69fbe76c8b439,param_6);
    FUN_143249de0(param_1,0x407cac28f5c28f5c,0x3ffb851eb851eb85,0x401ed70a3d70a3d7,param_7);
    FUN_14324a3e0(param_1,0x40a6017ae147ae14,0x3ff69fbe76c8b439,param_8);
    FUN_14324a3e0(param_1,0x40a6017ae147ae14,0x3ff69fbe76c8b439,param_9);
    param_3 = param_3 * 2314.86;
    uVar3 = 0x3fe0f5c28f5c28f6;
    break;
  case 0x5e:
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_4);
    FUN_143249de0(param_1,0x4054000000000000,0x4030000000000000,0xc032000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 250.0,0x40100a3d70a3d70a,0x4032000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 250.0,0x40100a3d70a3d70a,0x40226b851eb851ec,param_7);
    FUN_143249de0(param_1,param_3 * 5000.0,0x4030000000000000,0xc032000000000000,param_8);
    FUN_14324a3e0(param_1,param_3 * 3013.23,0x3fd0000000000000,param_9);
    uVar3 = 0x3fd0000000000000;
    param_3 = 3013.23;
    break;
  case 0x5f:
    FUN_143249cc0(param_1,0x4081293333333333,param_4);
    FUN_14324a280(param_1,0x4081d9eb851eb852,0x3ff0000000000000,0xc01570a3d70a3d71,param_5);
    FUN_143249de0(param_1,param_3 * 208.81,0x4009333333333333,0xc032000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 980.63,0x3ffe666666666666,0x4024947ae147ae14,param_7);
    FUN_143249de0(param_1,param_3 * 3970.59,0x40260a3d70a3d70a,0xc032000000000000,param_8);
    FUN_143249de0(param_1,param_3 * 7063.64,0x40035c28f5c28f5c,0xc022000000000000,param_9);
    uVar3 = 0x3fd70a3d70a3d70a;
    param_3 = 2260.04;
    break;
  case 0x60:
    FUN_14324a310(param_1,0x407049c28f5c28f6,0x3ff68f5c28f5c28f);
    FUN_14324a280(param_1,0x4069000000000000,0x3fe2147ae147ae14,0xc032000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 400.0,0x400b70a3d70a3d71,0x4032000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 180.0,0x4030000000000000,0xc022000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 4143.58,0x4014d70a3d70a3d7,0xc032000000000000,param_8);
    FUN_14324a3e0(param_1,param_3 * 2428.54,0x3fd0000000000000,param_9);
    FUN_143249d50(param_1,0x40a2f9147ae147ae,param_10);
    return;
  case 0x61:
    FUN_14324a310(param_1,0x407338f5c28f5c29,0x3fd0000000000000);
    FUN_143249de0(param_1,param_3 * 2000.0,0x401f333333333333,0x402799999999999a,param_5);
    FUN_143249de0(param_1,param_3 * 4730.0,0x4030000000000000,0x40271eb851eb851f,param_6);
    FUN_143249de0(param_1,0x40b3880000000000,0x4030000000000000,0xc025dc28f5c28f5c,param_7);
    FUN_143249de0(param_1,param_3 * 6399.01,0x4030000000000000,0x401ed70a3d70a3d7,param_8);
    FUN_143249de0(param_1,0x40c3880000000000,0x4030000000000000,0xc024947ae147ae14,param_9);
    param_3 = param_3 * 12694.49;
    uVar3 = 0x3fdd70a3d70a3d71;
    break;
  case 0x62:
    FUN_14324a310(param_1,param_3 * 195.03,0x3fd0000000000000);
    FUN_143249cc0(param_1,0x406860f5c28f5c29,param_5);
    FUN_143249de0(param_1,param_3 * 674.8,0x4030000000000000,0xc032000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 1339.06,0x3ff2666666666666,0x402123d70a3d70a4,param_7);
    FUN_143249de0(param_1,param_3 * 5029.73,0x4030000000000000,0xc032000000000000,param_8);
    FUN_143249de0(param_1,param_3 * 8699.31,0x4030000000000000,0,param_9);
    uVar3 = 0x3fd8f5c28f5c28f6;
    param_3 = 2804.16;
    break;
  case 99:
    FUN_14324a310(param_1,param_3 * 362.96,0x3fe7ae147ae147ae);
    FUN_143249cc0(param_1,0x4076af5c28f5c28f,param_5);
    FUN_143249de0(param_1,param_3 * 616.67,0x401170a3d70a3d71,0x4032000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 1160.0,0x40214ccccccccccd,0x4022000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 2180.0,0x401c666666666666,0x40304ccccccccccd,param_8);
    FUN_14324a3e0(param_1,param_3 * 3738.69,0x3fd0a3d70a3d70a4,param_9);
    uVar3 = 0x3fd0a3d70a3d70a4;
    param_3 = 3738.69;
    break;
  case 100:
    FUN_14324a310(param_1,param_3 * 526.88,0x3fed70a3d70a3d71);
    FUN_143249de0(param_1,0x4074775c28f5c28f,0x4010666666666666,0xc032000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 533.41,0x40035c28f5c28f5c,0x402947ae147ae148,param_6);
    FUN_143249de0(param_1,param_3 * 883.95,0x4015d70a3d70a3d7,0x4020d70a3d70a3d7,param_7);
    FUN_143249de0(param_1,param_3 * 3076.77,0x401fae147ae147ae,0x402d947ae147ae14,param_8);
    FUN_14324a3e0(param_1,param_3 * 1957.3,0x3fea8f5c28f5c28f,param_9);
    uVar3 = 0x3fea8f5c28f5c28f;
    param_3 = 1957.3;
    break;
  case 0x65:
    FUN_14324a310(param_1,0x4080ecf5c28f5c29,0x3ff68f5c28f5c28f);
    FUN_143249de0(param_1,param_3 * 494.0,0x401d0a3d70a3d70a,0x401928f5c28f5c29,param_5);
    FUN_143249de0(param_1,param_3 * 530.88,0x401251eb851eb852,0x4030800000000000,param_6);
    FUN_143249de0(param_1,param_3 * 1418.2,0x3fd999999999999a,0xc032000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 1606.77,0x40214ccccccccccd,0x40256b851eb851ec,param_8);
    FUN_14324a3e0(param_1,param_3 * 1695.11,0x3fe3d70a3d70a3d7,param_9);
    uVar3 = 0x3fe3d70a3d70a3d7;
    param_3 = 1695.11;
    break;
  case 0x66:
    FUN_143249cc0(param_1,0x407d1547ae147ae1,param_4);
    FUN_143249de0(param_1,param_3 * 300.0,0x3ffdeb851eb851ec,0,param_5);
    FUN_143249de0(param_1,param_3 * 99.62,0x4030000000000000,0xc03191eb851eb852,param_6);
    FUN_143249de0(param_1,param_3 * 627.51,0x400799999999999a,0x4032000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 3742.55,0x401fae147ae147ae,0xc032000000000000,param_8);
    FUN_14324a3e0(param_1,param_3 * 2609.6,0x3fd7ae147ae147ae,param_9);
    uVar3 = 0x3fd7ae147ae147ae;
    param_3 = 2609.6;
    break;
  case 0x67:
    FUN_14324a310(param_1,param_3 * 465.33,0x3fd28f5c28f5c28f);
    FUN_14324a280(param_1,0x406753d70a3d70a4,0x3fed4ccccccccccd,0xc0226b851eb851ec,param_5);
    FUN_143249de0(param_1,0x406bf6b851eb851f,0x401dae147ae147ae,0xc032000000000000,param_6);
    FUN_143249de0(param_1,0x40926b147ae147ae,0x3fe2e147ae147ae1,0xc02a947ae147ae14,param_7);
    FUN_143249de0(param_1,param_3 * 1835.03,0x4006147ae147ae14,0x402d23d70a3d70a4,param_8);
    param_3 = param_3 * 1271.4;
    FUN_14324a3e0(param_1,param_3,0x3ff68f5c28f5c28f,param_9);
    uVar3 = 0x3ff68f5c28f5c28f;
    break;
  case 0x68:
    FUN_143249cc0(param_1,0x4076af5c28f5c28f,param_4);
    FUN_14324a280(param_1,0x4068e9eb851eb852,0x3f9999999999999a,0xc032000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 312.55,0x4022147ae147ae14,0x402d23d70a3d70a4,param_6);
    FUN_143249de0(param_1,param_3 * 594.03,0x400bae147ae147ae,0x4032000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 2673.38,0x4010c28f5c28f5c3,0x4032000000000000,param_8);
    FUN_143249de0(param_1,param_3 * 4503.72,0x3ff0cccccccccccd,0xc032000000000000,param_9);
    param_3 = param_3 * 1715.55;
    uVar3 = 0x3fe6147ae147ae14;
    break;
  case 0x69:
    FUN_14324a310(param_1,param_3 * 549.15,0x3fe23d70a3d70a3d);
    FUN_143249de0(param_1,0x40701fae147ae148,0x40242e147ae147ae,0xc032000000000000,param_5);
    FUN_143249de0(param_1,0x4096ef3333333333,0x40133d70a3d70a3d,0xc02edc28f5c28f5c,param_6);
    FUN_143249de0(param_1,param_3 * 1757.59,0x40278a3d70a3d70a,0x400d1eb851eb851f,param_7);
    FUN_143249de0(param_1,param_3 * 2735.68,0x40278a3d70a3d70a,0x402e000000000000,param_8);
    FUN_14324a3e0(param_1,0x409e37eb851eb852,0x3fe3333333333333,param_9);
    param_3 = param_3 * 1933.98;
    uVar3 = 0x3fe3333333333333;
    break;
  case 0x6a:
    FUN_14324a310(param_1,param_3 * 428.34,0x3fd1eb851eb851ec);
    FUN_143249de0(param_1,0x40643c28f5c28f5c,0x40208f5c28f5c28f,0xc032000000000000,param_5);
    FUN_143249de0(param_1,0x406060f5c28f5c29,0x4030000000000000,0xc01ed70a3d70a3d7,param_6);
    FUN_143249de0(param_1,param_3 * 650.03,0x401251eb851eb852,0x4020b851eb851eb8,param_7);
    FUN_143249de0(param_1,param_3 * 5365.39,0x4030000000000000,0xc032000000000000,param_8);
    FUN_14324a3e0(param_1,0x40a94bc28f5c28f6,0x3fe8f5c28f5c28f6,param_9);
    param_3 = param_3 * 3237.88;
    uVar3 = 0x3fe8f5c28f5c28f6;
    break;
  case 0x6b:
    FUN_143249cc0(param_1,0x4086003d70a3d70a,param_4);
    FUN_143249de0(param_1,param_3 * 246.14,0x4030000000000000,0xc032000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 695.88,0x4008cccccccccccd,0x40287ae147ae147b,param_6);
    FUN_143249de0(param_1,param_3 * 1878.49,0x40242e147ae147ae,0x401c47ae147ae148,param_7);
    FUN_143249de0(param_1,param_3 * 2275.01,0x4030000000000000,0xc032000000000000,param_8);
    FUN_14324a3e0(param_1,0x40a425051eb851ec,0x3fe0a3d70a3d70a4,param_9);
    param_3 = param_3 * 2578.51;
    uVar3 = 0x3fe0a3d70a3d70a4;
    break;
  case 0x6c:
    FUN_14324a310(param_1,0x407338f5c28f5c29,0x3ff68f5c28f5c28f);
    FUN_143249de0(param_1,0x4072c00000000000,0x400028f5c28f5c29,0xc032000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 661.58,0x401f8f5c28f5c28f,0x4032000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 830.2,0x4011eb851eb851ec,0x4032000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 3977.22,0x4022e66666666666,0x4032000000000000,param_8);
    FUN_143249de0(param_1,param_3 * 6238.46,0x4030000000000000,0,param_9);
    param_3 = param_3 * 6645.88;
    uVar3 = 0x3fd0000000000000;
    break;
  case 0x6d:
    FUN_14324a310(param_1,0x4082a48f5c28f5c3,0x3fe947ae147ae148);
    FUN_14324a310(param_1,param_3 * 596.57,0x3fe947ae147ae148,param_5);
    FUN_143249de0(param_1,param_3 * 782.94,0x4018000000000000,0x401e000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 1131.28,0x3ff5eb851eb851ec,0x402647ae147ae148,param_7);
    FUN_143249de0(param_1,param_3 * 2428.81,0x401f333333333333,0x402e000000000000,param_8);
    FUN_143249de0(param_1,param_3 * 2888.78,0x401c99999999999a,0x402e6b851eb851ec,param_9);
    uVar3 = 0x3ff68f5c28f5c28f;
    param_3 = 1271.4;
    break;
  case 0x6e:
    FUN_14324a310(param_1,0x407049c28f5c28f6,0x3ff68f5c28f5c28f);
    FUN_143249de0(param_1,0x4069000000000000,0x401599999999999a,0xc0300f5c28f5c28f,param_5);
    FUN_143249de0(param_1,param_3 * 400.0,0x4007d70a3d70a3d7,0x4026b851eb851eb8,param_6);
    FUN_143249de0(param_1,param_3 * 2560.0,0x40236b851eb851ec,0x402af0a3d70a3d71,param_7);
    FUN_143249de0(param_1,param_3 * 3971.27,0x4030000000000000,0xc02947ae147ae148,param_8);
    FUN_143249de0(param_1,0x40c43b799999999a,0x401bcccccccccccd,0xc032000000000000,param_9);
    param_3 = param_3 * 6184.77;
    uVar3 = 0x3fe6b851eb851eb8;
    break;
  case 0x6f:
    FUN_14324a310(param_1,0x4095566666666666,0x3fea8f5c28f5c28f);
    FUN_143249de0(param_1,param_3 * 437.71,0x3ff91eb851eb851f,0,param_5);
    FUN_143249de0(param_1,param_3 * 1730.44,0x4020eb851eb851ec,0x4019b851eb851eb8,param_6);
    FUN_143249de0(param_1,param_3 * 1506.52,0x4030000000000000,0x4032000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 2640.6,0x4023851eb851eb85,0x4030b5c28f5c28f6,param_8);
    FUN_14324a3e0(param_1,0x40992b70a3d70a3d,0x3ff69fbe76c8b439,param_9);
    uVar3 = 0x3fe70a3d70a3d70a;
    param_3 = 1695.11;
    break;
  case 0x70:
    FUN_143249cc0(param_1,0x40992e6666666666,param_4);
    FUN_143249de0(param_1,0x406095c28f5c28f6,0x3ff1eb851eb851ec,0xc02423d70a3d70a4,param_5);
    FUN_143249de0(param_1,param_3 * 346.48,0x4020eb851eb851ec,0x402d23d70a3d70a4,param_6);
    FUN_143249de0(param_1,param_3 * 1162.89,0x400347ae147ae148,0x4025dc28f5c28f5c,param_7);
    FUN_143249de0(param_1,param_3 * 2224.84,0x401dae147ae147ae,0x4009ae147ae147ae,param_8);
    FUN_143249de0(param_1,param_3 * 4127.02,0x40071eb851eb851f,0x401fb851eb851eb8,param_9);
    uVar3 = 0x3fe3851eb851eb85;
    param_3 = 2428.54;
    break;
  case 0x71:
    FUN_14324a310(param_1,param_3 * 902.59,0x3ff68f5c28f5c28f);
    FUN_143249de0(param_1,param_3 * 353.03,0x40195c28f5c28f5c,0x4030ee147ae147ae,param_5);
    FUN_143249de0(param_1,0x408a1a0000000000,0x3ff3333333333333,0xc026b851eb851eb8,param_6);
    FUN_143249de0(param_1,param_3 * 3035.32,0x40208f5c28f5c28f,0x4025dc28f5c28f5c,param_7);
    FUN_143249de0(param_1,0x40b8e66b851eb852,0x4030000000000000,0xc020b851eb851eb8,param_8);
    FUN_143249de0(param_1,param_3 * 4605.28,0x4030000000000000,0x401c47ae147ae148,param_9);
    param_3 = param_3 * 1957.3;
    uVar3 = 0x3fe47ae147ae147b;
    break;
  case 0x72:
    FUN_143249cc0(param_1,0x406dfccccccccccd,param_4);
    FUN_143249de0(param_1,0x40565147ae147ae1,0x40068f5c28f5c28f,0xc028dc28f5c28f5c,param_5);
    FUN_143249de0(param_1,param_3 * 344.39,0x4016cccccccccccd,0x4032000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 446.35,0x401251eb851eb852,0x402b6b851eb851ec,param_7);
    FUN_143249de0(param_1,param_3 * 1433.84,0x4011eb851eb851ec,0x402347ae147ae148,param_8);
    FUN_14324a3e0(param_1,param_3 * 4017.43,0x3fe851eb851eb852,param_9);
    uVar3 = 0x3fe851eb851eb852;
    param_3 = 4017.43;
    break;
  case 0x73:
    FUN_14324a310(param_1,0x40623eb851eb851f,0x3fe6b851eb851eb8);
    FUN_143249de0(param_1,param_3 * 231.71,0x401451eb851eb852,0xc0286b851eb851ec,param_5);
    FUN_143249de0(param_1,param_3 * 367.01,0x402a5c28f5c28f5c,0x402347ae147ae148,param_6);
    FUN_143249de0(param_1,param_3 * 1957.62,0x40214ccccccccccd,0xc020b851eb851eb8,param_7);
    FUN_143249de0(param_1,param_3 * 2442.16,0x401a99999999999a,0x4018d70a3d70a3d7,param_8);
    FUN_14324a3e0(param_1,param_3 * 3237.88,0x3ff2666666666666,param_9);
    uVar3 = 0x3ff2666666666666;
    param_3 = 3237.88;
    break;
  case 0x74:
    FUN_143249de0(param_1,0x408f400000000000,0x4030000000000000,0,param_4);
    FUN_143249de0(param_1,param_3 * 321.23,0x4007333333333333,0x40315c28f5c28f5c,param_5);
    FUN_143249de0(param_1,param_3 * 471.51,0x40262e147ae147ae,0x4030ee147ae147ae,param_6);
    FUN_143249de0(param_1,0x405e000000000000,0x3fd999999999999a,0xc032000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 4715.07,0x401ac28f5c28f5c3,0x402647ae147ae148,param_8);
    FUN_143249de0(param_1,param_3 * 10857.11,0x401128f5c28f5c29,0x402e000000000000,param_9);
    FUN_143249d50(param_1,0x40a4633333333333,param_10);
    return;
  case 0x75:
    FUN_14324a310(param_1,param_3 * 307.56,0x3ff68f5c28f5c28f);
    FUN_14324a310(param_1,0x406b247ae147ae14,0x3ff69fbe76c8b439,param_5);
    FUN_143249de0(param_1,param_3 * 320.0,0x400147ae147ae148,0x4028000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 640.0,0x40227ae147ae147b,0x403191eb851eb852,param_7);
    FUN_143249de0(param_1,param_3 * 2800.9,0x40242e147ae147ae,0x4030ee147ae147ae,param_8);
    FUN_14324a3e0(param_1,0x40a1a8147ae147ae,0x3fe3851eb851eb85,param_9);
    param_3 = param_3 * 2260.04;
    uVar3 = 0x3fe3851eb851eb85;
    break;
  case 0x76:
    FUN_143249cc0(param_1,0x4065880000000000,param_4);
    FUN_143249de0(param_1,param_3 * 751.4,0x401970a3d70a3d71,0xc02edc28f5c28f5c,param_5);
    FUN_143249de0(param_1,param_3 * 1206.87,0x401970a3d70a3d71,0xc01b70a3d70a3d71,param_6);
    FUN_143249de0(param_1,param_3 * 2295.44,0x4030000000000000,0xc012000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 4684.51,0x4026000000000000,0x402047ae147ae148,param_8);
    FUN_143249de0(param_1,param_3 * 7259.95,0x4030000000000000,0x4019b851eb851eb8,param_9);
    FUN_143249d50(param_1,0x40b828c51eb851ec,param_10);
    return;
  case 0x77:
    FUN_143249cc0(param_1,0x406968f5c28f5c29,param_4);
    FUN_143249de0(param_1,param_3 * 163.2,0x4014666666666666,0xc032000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 642.47,0x40003d70a3d70a3d,0x402947ae147ae148,param_6);
    FUN_143249de0(param_1,param_3 * 2045.81,0x4030000000000000,0xc009ae147ae147ae,param_7);
    FUN_143249de0(param_1,param_3 * 4411.6,0x4030000000000000,0xc032000000000000,param_8);
    FUN_14324a3e0(param_1,0x40a78a75c28f5c29,0x3fe4cccccccccccd,param_9);
LAB_14324ea78:
    uVar3 = 0x3fe4cccccccccccd;
    param_3 = 3013.23;
    break;
  case 0x78:
    FUN_143249cc0(param_1,0x4056333333333333,param_4);
    FUN_14324a280(param_1,param_3 * 190.82,0x3ff0000000000000,0xc032000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 80.0,0x3ff87ae147ae147b,0xc032000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 4059.62,0x4030000000000000,0xc032000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 5645.98,0x401128f5c28f5c29,0xc02a23d70a3d70a4,param_8);
    FUN_14324a3e0(param_1,0x40a1a8147ae147ae,0x3fdd70a3d70a3d71,param_9);
    uVar3 = 0x3fdd70a3d70a3d71;
    param_3 = 2260.04;
    break;
  case 0x79:
    FUN_14324a310(param_1,0x40581e147ae147ae,0x3ff68f5c28f5c28f);
    FUN_143249de0(param_1,param_3 * 471.51,0x40071eb851eb851f,0xc032000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 4031.54,0x401a99999999999a,0x402edc28f5c28f5c,param_6);
    FUN_143249de0(param_1,param_3 * 7419.76,0x4030000000000000,0x401728f5c28f5c29,param_7);
    FUN_143249de0(param_1,param_3 * 10040.12,0x4025147ae147ae14,0x4023b851eb851eb8,param_8);
    FUN_143249de0(param_1,param_3 * 16966.86,0x4030000000000000,0xc032000000000000,param_9);
    uVar3 = 0x3fd0000000000000;
    param_3 = 19542.95;
    break;
  case 0x7a:
    FUN_14324a310(param_1,0x4086003d70a3d70a,0x3fe851eb851eb852);
    FUN_14324a310(param_1,param_3 * 704.03,0x3fe851eb851eb852,param_5);
    FUN_143249de0(param_1,0x4093d80000000000,0x4021000000000000,0xc02e666666666666,param_6);
    FUN_143249de0(param_1,param_3 * 8325.11,0x4030000000000000,0x402347ae147ae148,param_7);
    FUN_143249de0(param_1,param_3 * 10650.3,0x4030000000000000,0x402947ae147ae148,param_8);
    FUN_143249de0(param_1,0x40cceb55c28f5c29,0x4030000000000000,0xc032000000000000,param_9);
    param_3 = param_3 * 4017.43;
    uVar3 = 0x3fd70a3d70a3d70a;
    break;
  case 0x7b:
    FUN_14324a310(param_1,0x407338f5c28f5c29,0x3ff0000000000000);
    FUN_143249de0(param_1,param_3 * 4000.0,0x400c3d70a3d70a3d,0x4026b851eb851eb8,param_5);
    FUN_143249de0(param_1,param_3 * 882.32,0x3ff30a3d70a3d70a,0xc027947ae147ae14,param_6);
    FUN_143249de0(param_1,param_3 * 3577.94,0x401847ae147ae148,0x4027947ae147ae14,param_7);
    FUN_143249de0(param_1,param_3 * 5059.64,0x402351eb851eb852,0x403123d70a3d70a4,param_8);
    FUN_143249de0(param_1,param_3 * 6225.99,0x402cb33333333333,0xc02edc28f5c28f5c,param_9);
    uVar3 = 0x3fe6b851eb851eb8;
    param_3 = 11813.7;
    break;
  case 0x7c:
    FUN_143249cc0(param_1,0x4071b1c28f5c28f6,param_4);
    FUN_143249de0(param_1,param_3 * 4000.0,0x4030000000000000,0x4026b851eb851eb8,param_5);
    FUN_143249de0(param_1,param_3 * 1663.82,0x402370a3d70a3d71,0x402723d70a3d70a4,param_6);
    FUN_143249de0(param_1,param_3 * 631.84,0x401d0a3d70a3d70a,0x4025000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 315.13,0x4022e66666666666,0x4030b5c28f5c28f6,param_8);
    FUN_143249de0(param_1,param_3 * 9210.55,0x402923d70a3d70a4,0x401b70a3d70a3d71,param_9);
    uVar3 = 0x3ff68f5c28f5c28f;
    param_3 = 3237.88;
    break;
  case 0x7d:
    FUN_14324a310(param_1,0x4087e68f5c28f5c3,0x3ff68f5c28f5c28f);
    FUN_143249de0(param_1,param_3 * 536.97,0x40117ae147ae147b,0x402e6b851eb851ec,param_5);
    FUN_143249de0(param_1,param_3 * 2180.13,0x4030000000000000,0xc02a23d70a3d70a4,param_6);
    FUN_143249de0(param_1,param_3 * 3396.36,0x402675c28f5c28f6,0x4028dc28f5c28f5c,param_7);
    FUN_143249de0(param_1,param_3 * 7937.41,0x4030000000000000,0x402b000000000000,param_8);
    FUN_143249de0(param_1,param_3 * 10480.9,0x4030000000000000,0x40256b851eb851ec,param_9);
    uVar3 = 0x3fe3d70a3d70a3d7;
    param_3 = 2260.04;
    break;
  case 0x7e:
    FUN_143249cc0(param_1,0x403e428f5c28f5c3,param_4);
    FUN_143249de0(param_1,param_3 * 392.35,0x401fae147ae147ae,0xc02d947ae147ae14,param_5);
    FUN_143249de0(param_1,param_3 * 716.92,0x400a51eb851eb852,0xc027947ae147ae14,param_6);
    FUN_143249de0(param_1,param_3 * 3843.05,0x4022147ae147ae14,0x4025000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 6655.3,0x402cae147ae147ae,0x401570a3d70a3d71,param_8);
    FUN_143249de0(param_1,param_3 * 9283.18,0x4030000000000000,0xc02e000000000000,param_9);
    uVar3 = 0x3ff68f5c28f5c28f;
    param_3 = 8860.73;
    break;
  case 0x7f:
    FUN_143249cc0(param_1,0x408c34b851eb851f,param_4);
    FUN_143249de0(param_1,param_3 * 392.2,0x402c0f5c28f5c28f,0x402347ae147ae148,param_5);
    FUN_143249de0(param_1,param_3 * 996.16,0x4022e66666666666,0x4024947ae147ae14,param_6);
    FUN_143249de0(param_1,param_3 * 3949.85,0x4030000000000000,0x40226b851eb851ec,param_7);
    FUN_143249de0(param_1,param_3 * 10040.12,0x4030000000000000,0x402647ae147ae148,param_8);
    FUN_143249de0(param_1,param_3 * 6866.64,0x4030000000000000,0x4023b851eb851eb8,param_9);
    goto LAB_1432527d3;
  case 0x80:
    FUN_143249cc0(param_1,0x4071b1c28f5c28f6,param_4);
    FUN_143249de0(param_1,param_3 * 304.1,0x400d5c28f5c28f5c,0x402e000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 1174.24,0x4011eb851eb851ec,0xc02edc28f5c28f5c,param_6);
    FUN_143249de0(param_1,param_3 * 2858.28,0x40227ae147ae147b,0x40226b851eb851ec,param_7);
    FUN_143249de0(param_1,param_3 * 6148.1,0x4030000000000000,0x4028000000000000,param_8);
    FUN_143249de0(param_1,param_3 * 10656.15,0x4030000000000000,0xc026b851eb851eb8,param_9);
    FUN_143249d50(param_1,0x40b67ba666666666,param_10);
    return;
  case 0x81:
    FUN_143249cc0(param_1,0x403bd9999999999a,param_4);
    FUN_143249de0(param_1,param_3 * 446.35,0x40138f5c28f5c28f,0x402947ae147ae148,param_5);
    FUN_143249de0(param_1,param_3 * 822.23,0x401970a3d70a3d71,0xc029cccccccccccd,param_6);
    FUN_143249de0(param_1,param_3 * 5667.75,0x401470a3d70a3d71,0x4031ca3d70a3d70a,param_7);
    FUN_143249de0(param_1,param_3 * 8554.38,0x4030000000000000,0x402423d70a3d70a4,param_8);
    FUN_143249de0(param_1,param_3 * 10952.29,0x4030000000000000,0x40226b851eb851ec,param_9);
    uVar3 = 0x3fe147ae147ae148;
    param_3 = 17544.72;
    break;
  case 0x82:
    FUN_14324a310(param_1,param_3 * 63.76,0x3ff68f5c28f5c28f);
    FUN_143249de0(param_1,0x408a68a3d70a3d71,0x4014e147ae147ae1,0x4018d70a3d70a3d7,param_5);
    FUN_143249de0(param_1,0x4079000000000000,0x3ff028f5c28f5c29,0xc0148f5c28f5c28f,param_6);
    FUN_143249de0(param_1,0x40b0b328f5c28f5c,0x4000000000000000,0x4018000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 8617.74,0x4025b33333333333,0x402423d70a3d70a4,param_8);
    FUN_143249de0(param_1,0x40c666799999999a,0x401a333333333333,0x402647ae147ae148,param_9);
    FUN_143249d50(param_1,param_3 * 16925.12,param_10);
    return;
  case 0x83:
    FUN_143249cc0(param_1,0x405eeb851eb851ec,param_4);
    FUN_143249de0(param_1,param_3 * 312.55,0x4003c28f5c28f5c3,0xc0256b851eb851ec,param_5);
    FUN_143249de0(param_1,param_3 * 892.71,0x4030000000000000,0x4026b851eb851eb8,param_6);
    FUN_143249de0(param_1,param_3 * 1440.41,0x4022e66666666666,0xc032000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 4684.51,0x4022147ae147ae14,0x402e000000000000,param_8);
    FUN_143249de0(param_1,param_3 * 6506.01,0x4030000000000000,0x40148f5c28f5c28f,param_9);
    FUN_143249d50(param_1,0x40b828c51eb851ec,param_10);
    return;
  case 0x84:
    FUN_143249cc0(param_1,param_3 * 134.36,param_4);
    FUN_14324a280(param_1,param_3 * 1111.87,0x3fc0a3d70a3d70a4,0xc032000000000000,param_5);
    FUN_143249de0(param_1,0x40a050428f5c28f6,0x4020eb851eb851ec,0x4009ae147ae147ae,param_6);
    FUN_143249de0(param_1,0x40b13791eb851eb8,0x4030000000000000,0xc012d70a3d70a3d7,param_7);
    FUN_143249de0(param_1,0x40b89c4000000000,0x401dae147ae147ae,0x401128f5c28f5c29,param_8);
    FUN_143249de0(param_1,0x40c693b1eb851eb8,0x4030000000000000,0x3ffee147ae147ae1,param_9);
    FUN_143249d50(param_1,param_3 * 8245.94,param_10);
    return;
  case 0x85:
    FUN_14324a310(param_1,0x4035bae147ae147b,0x3ff68f5c28f5c28f);
    FUN_143249de0(param_1,param_3 * 903.95,0x4015c28f5c28f5c3,0x40148f5c28f5c28f,param_5);
    FUN_143249de0(param_1,param_3 * 823.88,0x40161eb851eb851f,0x4028000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 1156.53,0x40258f5c28f5c28f,0xc032000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 3487.68,0x4018d70a3d70a3d7,0x402e6b851eb851ec,param_8);
    FUN_143249de0(param_1,param_3 * 5579.42,0x4023428f5c28f5c3,0x401ed70a3d70a3d7,param_9);
    uVar3 = 0x3ff68f5c28f5c28f;
    param_3 = 8245.94;
    break;
  case 0x86:
    FUN_143249cc0(param_1,0x4035bae147ae147b,param_4);
    FUN_143249de0(param_1,param_3 * 267.2,0x4020eb851eb851ec,0x402f47ae147ae148,param_5);
    FUN_143249de0(param_1,param_3 * 414.36,0x401651eb851eb852,0xc022000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 2618.24,0x4030000000000000,0x402e000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 6655.3,0x402cae147ae147ae,0x401a8f5c28f5c28f,param_8);
    FUN_143249de0(param_1,param_3 * 8550.32,0x4030000000000000,0xc02e000000000000,param_9);
    uVar3 = 0x3fec7ae147ae147b;
    param_3 = 11813.7;
    break;
  case 0x87:
    FUN_143249cc0(param_1,0x405a333333333333,param_4);
    FUN_143249de0(param_1,param_3 * 560.1,0x40100a3d70a3d70a,0x402647ae147ae148,param_5);
    FUN_143249de0(param_1,param_3 * 1771.45,0x4009c28f5c28f5c3,0x402b6b851eb851ec,param_6);
    FUN_143249de0(param_1,param_3 * 5339.89,0x4030000000000000,0x4025000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 7426.54,0x4030000000000000,0x401ed70a3d70a3d7,param_8);
    FUN_143249de0(param_1,param_3 * 9806.32,0x4030000000000000,0x401728f5c28f5c29,param_9);
    FUN_143249d50(param_1,0x40a2f9147ae147ae,param_10);
    return;
  case 0x88:
    FUN_143249cc0(param_1,0x4060cb851eb851ec,param_4);
    FUN_14324a280(param_1,0x40727deb851eb852,0x3fc71eb851eb851f,0xc032000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 295.9,0x40028f5c28f5c28f,0xc02bdc28f5c28f5c,param_6);
    FUN_143249de0(param_1,param_3 * 1215.28,0x3ff5eb851eb851ec,0x4023b851eb851eb8,param_7);
    FUN_143249de0(param_1,param_3 * 5802.88,0x4030000000000000,0x4019b851eb851eb8,param_8);
    FUN_14324a3e0(param_1,0x40af62dc28f5c28f,0x3fdd70a3d70a3d71,param_9);
    FUN_143249d50(param_1,param_3 * 4017.43,param_10);
    return;
  case 0x89:
    FUN_143249cc0(param_1,0x4056333333333333,param_4);
    FUN_143249de0(param_1,param_3 * 1663.82,0x4030000000000000,0x4020b851eb851eb8,param_5);
    FUN_143249de0(param_1,param_3 * 2394.86,0x4030000000000000,0xc026b851eb851eb8,param_6);
    FUN_143249de0(param_1,param_3 * 5224.07,0x4030000000000000,0x4018000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 8321.83,0x4030000000000000,0xc01ed70a3d70a3d7,param_8);
    FUN_143249de0(param_1,param_3 * 14406.3,0x4030000000000000,0xc0148f5c28f5c28f,param_9);
    FUN_143249d50(param_1,0x40c14e5d70a3d70a,param_10);
    return;
  case 0x8a:
    FUN_143249cc0(param_1,0x406968f5c28f5c29,param_4);
    FUN_143249de0(param_1,param_3 * 625.25,0x4000a3d70a3d70a4,0xc026b851eb851eb8,param_5);
    FUN_143249de0(param_1,param_3 * 2088.13,0x401651eb851eb852,0x401728f5c28f5c29,param_6);
    FUN_143249de0(param_1,param_3 * 3638.03,0x401d0a3d70a3d70a,0x402047ae147ae148,param_7);
    FUN_143249de0(param_1,param_3 * 6475.34,0x4030000000000000,0xc0315c28f5c28f5c,param_8);
    FUN_143249de0(param_1,param_3 * 11246.83,0x4030000000000000,0xc0226b851eb851ec,param_9);
    uVar3 = 0x3fe0000000000000;
    param_3 = 8245.94;
    break;
  case 0x8b:
    FUN_143249cc0(param_1,0x40546f5c28f5c28f,param_4);
    FUN_143249de0(param_1,param_3 * 3463.2,0x4022e66666666666,0x4019b851eb851eb8,param_5);
    FUN_143249de0(param_1,param_3 * 8000.0,0x4030000000000000,0xc01a8f5c28f5c28f,param_6);
    FUN_143249de0(param_1,0x4072f87ae147ae14,0x3fe947ae147ae148,0xc025000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 1856.64,0x40173d70a3d70a3d,0x402b6b851eb851ec,param_8);
    FUN_143249de0(param_1,param_3 * 4668.83,0x401bb851eb851eb8,0x4018d70a3d70a3d7,param_9);
    FUN_143249d50(param_1,0x40bbe56147ae147b,param_10);
    return;
  case 0x8c:
    FUN_14324a310(param_1,0x403bd9999999999a,0x3ff68f5c28f5c28f);
    FUN_143249de0(param_1,0x405cec28f5c28f5c,0x3ff1eb851eb851ec,0xc0011eb851eb851f,param_5);
    FUN_143249de0(param_1,param_3 * 1657.43,0x3ff1eb851eb851ec,0xc025dc28f5c28f5c,param_6);
    FUN_143249de0(param_1,param_3 * 3119.67,0x400ae147ae147ae1,0x402647ae147ae148,param_7);
    FUN_143249de0(param_1,param_3 * 7722.79,0x4030000000000000,0x402b000000000000,param_8);
    uVar2 = 0x400ee147ae147ae1;
    uVar3 = 0x3ff8f5c28f5c28f6;
    param_3 = param_3 * 5000.0;
    goto LAB_1432534d9;
  case 0x8d:
    FUN_143249cc0(param_1,param_3 * 1483.51,param_4);
    FUN_143249de0(param_1,param_3 * 2753.67,0x40161eb851eb851f,0x40286147ae147ae1,param_5);
    FUN_143249de0(param_1,param_3 * 420.92,0x3fe6147ae147ae14,0xc02a947ae147ae14,param_6);
    FUN_143249de0(param_1,0x40b645d1eb851eb8,0x402b9eb851eb851f,0x403123d70a3d70a4,param_7);
    FUN_143249de0(param_1,param_3 * 4587.58,0x40117ae147ae147b,0xc02bdc28f5c28f5c,param_8);
    FUN_143249de0(param_1,0x40c009f99999999a,0x4030000000000000,0x4029b851eb851eb8,param_9);
    param_3 = param_3 * 3237.88;
    uVar3 = 0x3ff68f5c28f5c28f;
    break;
  case 0x8e:
    FUN_14324a310(param_1,0x4034000000000000,0x3ff68f5c28f5c28f);
    FUN_143249de0(param_1,param_3 * 2571.77,0x402370a3d70a3d71,0x4021947ae147ae14,param_5);
    FUN_143249de0(param_1,param_3 * 2442.16,0x4000000000000000,0x402a947ae147ae14,param_6);
    FUN_143249de0(param_1,param_3 * 3433.32,0x402923d70a3d70a4,0xc02b000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 4587.58,0x40148f5c28f5c28f,0x4009ae147ae147ae,param_8);
    FUN_143249de0(param_1,param_3 * 8530.07,0x4029b33333333333,0x40286b851eb851ec,param_9);
    uVar3 = 0x3ff68f5c28f5c28f;
    param_3 = 13640.94;
    break;
  case 0x8f:
    FUN_14324a310(param_1,0x4034000000000000,0x3ff68f5c28f5c28f);
    FUN_143249de0(param_1,param_3 * 2242.38,0x40278a3d70a3d70a,0x40286b851eb851ec,param_5);
    FUN_143249de0(param_1,param_3 * 2725.17,0x4000000000000000,0x4020b851eb851eb8,param_6);
    FUN_143249de0(param_1,param_3 * 4903.16,0x40100a3d70a3d70a,0xc02b000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 4980.79,0x4030000000000000,0x4029b851eb851eb8,param_8);
    FUN_143249de0(param_1,param_3 * 7856.66,0x402a428f5c28f5c3,0x402c47ae147ae148,param_9);
    uVar3 = 0x3ff68f5c28f5c28f;
    param_3 = 10231.23;
    break;
  case 0x90:
    FUN_143249cc0(param_1,0x405eeb851eb851ec,param_4);
    FUN_143249de0(param_1,param_3 * 378.66,0x4021ae147ae147ae,0x4030800000000000,param_5);
    FUN_143249de0(param_1,param_3 * 1111.6,0x40043d70a3d70a3d,0xc030b5c28f5c28f6,param_6);
    FUN_143249de0(param_1,param_3 * 3278.14,0x4030000000000000,0x403011eb851eb852,param_7);
    FUN_143249de0(param_1,param_3 * 4084.51,0x4022147ae147ae14,0xc023b851eb851eb8,param_8);
    FUN_143249de0(param_1,param_3 * 7461.71,0x4030000000000000,0x4028000000000000,param_9);
    FUN_143249d50(param_1,0x40bdf9cf5c28f5c3,param_10);
    return;
  case 0x91:
    FUN_14324a310(param_1,0x405a333333333333,0x3ff23d70a3d70a3d);
    FUN_143249de0(param_1,param_3 * 711.31,0x401a000000000000,0xc031ca3d70a3d70a,param_5);
    FUN_143249de0(param_1,param_3 * 2088.13,0x40227ae147ae147b,0xc02d23d70a3d70a4,param_6);
    FUN_143249de0(param_1,param_3 * 7023.93,0x401dae147ae147ae,0x4032000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 10605.93,0x4030000000000000,0x402d947ae147ae14,param_8);
    FUN_143249de0(param_1,param_3 * 14793.73,0x4030000000000000,0x402cb851eb851eb8,param_9);
    FUN_143249d50(param_1,0x40a1a8147ae147ae,param_10);
    return;
  case 0x92:
    FUN_14324a310(param_1,0x408c34b851eb851f,0x3fe851eb851eb852);
    FUN_143249de0(param_1,param_3 * 426.53,0x401547ae147ae148,0x4027947ae147ae14,param_5);
    FUN_143249de0(param_1,param_3 * 569.05,0x402675c28f5c28f6,0x4022000000000000,param_6);
    FUN_143249de0(param_1,0x4096037ae147ae14,0x3ff4000000000000,0xc02e6b851eb851ec,param_7);
    FUN_143249de0(param_1,param_3 * 1757.59,0x4019eb851eb851ec,0x4022000000000000,param_8);
    FUN_143249de0(param_1,param_3 * 4070.84,0x401bcccccccccccd,0x402a947ae147ae14,param_9);
    uVar3 = 0x3ff68f5c28f5c28f;
    param_3 = 4638.81;
    break;
  case 0x93:
    FUN_14324a310(param_1,0x4058cae147ae147b,0x3fe0f5c28f5c28f6);
    FUN_143249de0(param_1,param_3 * 130.72,0x3ffc7ae147ae147b,0x4019b851eb851eb8,param_5);
    FUN_143249de0(param_1,param_3 * 1839.72,0x40117ae147ae147b,0x4022000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 9376.45,0x4028947ae147ae14,0x402723d70a3d70a4,param_7);
    FUN_143249de0(param_1,param_3 * 12163.89,0x4017c28f5c28f5c3,0x402fb851eb851eb8,param_8);
    FUN_143249de0(param_1,param_3 * 5825.27,0x4023bd70a3d70a3d,0x40304a3d70a3d70a,param_9);
    FUN_143249d50(param_1,0x409a7c70a3d70a3d,param_10);
    return;
  case 0x94:
    FUN_143249de0(param_1,param_3 * 368.42,0x4030000000000000,0xc01d28f5c28f5c29,param_4);
    FUN_143249de0(param_1,param_3 * 144.62,0x3fee147ae147ae14,0x402947ae147ae148,param_5);
    FUN_143249de0(param_1,param_3 * 1373.33,0x402299999999999a,0xc02bdc28f5c28f5c,param_6);
    FUN_143249de0(param_1,param_3 * 2275.85,0x40138f5c28f5c28f,0x402047ae147ae148,param_7);
    FUN_143249de0(param_1,param_3 * 6034.36,0x4030000000000000,0xc01e000000000000,param_8);
    uVar2 = 0x402c47ae147ae148;
    uVar3 = 0x4014e147ae147ae1;
    param_3 = param_3 * 9518.56;
LAB_1432534d9:
    FUN_143249de0(param_1,param_3,uVar3,uVar2,param_9);
    FUN_143249d50(param_1,0x40b21ecf5c28f5c3,param_10);
    return;
  case 0x95:
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_4);
    FUN_143249de0(param_1,param_3 * 108.18,0x4016cccccccccccd,0x4025000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 1502.79,0x4009333333333333,0xc030800000000000,param_6);
    FUN_143249de0(param_1,param_3 * 3443.95,0x4030000000000000,0xc028dc28f5c28f5c,param_7);
    FUN_143249de0(param_1,param_3 * 8287.16,0x4030000000000000,0xc02a947ae147ae14,param_8);
    FUN_143249de0(param_1,param_3 * 16061.71,0x4030000000000000,0xc032000000000000,param_9);
    uVar3 = 0x3fe147ae147ae148;
    param_3 = 10231.23;
    break;
  case 0x96:
    FUN_14324a310(param_1,0x404511eb851eb852,0x3ff2e147ae147ae1);
    FUN_14324a280(param_1,param_3 * 446.35,0x3fd38f5c28f5c28f,0x4026b851eb851eb8,param_5);
    FUN_143249de0(param_1,param_3 * 969.22,0x40280f5c28f5c28f,0x402047ae147ae148,param_6);
    FUN_143249de0(param_1,param_3 * 1792.3,0x4030000000000000,0xc02c47ae147ae148,param_7);
    FUN_143249de0(param_1,param_3 * 7879.06,0x4030000000000000,0x4018d70a3d70a3d7,param_8);
    FUN_143249de0(param_1,param_3 * 13269.0,0x4030000000000000,0x401728f5c28f5c29,param_9);
    FUN_143249d50(param_1,0x40b378ab851eb852,param_10);
    return;
  case 0x97:
    FUN_14324a310(param_1,0x40546f5c28f5c28f,0x3fd0000000000000);
    FUN_14324a280(param_1,param_3 * 446.35,0x3fd38f5c28f5c28f,0x402423d70a3d70a4,param_5);
    FUN_143249de0(param_1,param_3 * 969.22,0x4015d70a3d70a3d7,0x402047ae147ae148,param_6);
    FUN_143249de0(param_1,param_3 * 8100.0,0x4030000000000000,0xc025000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 12200.0,0x4030000000000000,0xc01a666666666666,param_8);
    FUN_14324a200(param_1,param_3 * 4082.57,0x3ff0000000000000,0xc018d70a3d70a3d7,param_9);
    uVar3 = 0x3fef5c28f5c28f5c;
    param_3 = 13640.94;
    break;
  case 0x98:
    FUN_143249cc0(param_1,0x4060066666666666,param_4);
    FUN_143249de0(param_1,param_3 * 300.0,0x4018000000000000,0x4020000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 933.0,0x401999999999999a,0x402ccccccccccccd,param_6);
    FUN_143249de0(param_1,param_3 * 1230.0,0x4016cccccccccccd,0xc033000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 3300.0,0x4028000000000000,0x4018cccccccccccd,param_8);
    FUN_143249de0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    uVar3 = 0x3ff8000000000000;
    param_3 = 4410.0;
    break;
  case 0x99:
    FUN_143249cc0(param_1,0x40623eb851eb851f,param_4);
    FUN_143249de0(param_1,param_3 * 131.06,0x4017d70a3d70a3d7,0xc032000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 131.03,0x3fee147ae147ae14,0xc032000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 923.91,0x40028f5c28f5c28f,0x4032000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 4922.83,0x40258f5c28f5c28f,0xc032000000000000,param_8);
    FUN_14324a3e0(param_1,0x40a4633333333333,0x3febd70a3d70a3d7,param_9);
    uVar3 = 0x3febd70a3d70a3d7;
    param_3 = 2609.6;
    break;
  case 0x9a:
    FUN_143249cc0(param_1,0x407d1547ae147ae1,param_4);
    FUN_14324a280(param_1,param_3 * 163.2,0x3ff0000000000000,0xc02e000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 80.0,0x400799999999999a,0xc031ca3d70a3d70a,param_6);
    FUN_143249de0(param_1,param_3 * 3172.07,0x4030000000000000,0x4023b851eb851eb8,param_7);
    FUN_143249de0(param_1,param_3 * 4411.6,0x4030000000000000,0xc032000000000000,param_8);
    FUN_14324a3e0(param_1,param_3 * 2103.23,0x3fe051eb851eb852,param_9);
    uVar3 = 0x3fe051eb851eb852;
    param_3 = 2103.23;
    break;
  case 0x9b:
    FUN_14324a310(param_1,0x406dfccccccccccd,0x3ff30a3d70a3d70a);
    FUN_14324a280(param_1,param_3 * 177.14,0x4000000000000000,0xc025000000000000,param_5);
    FUN_143249de0(param_1,param_3 * 400.0,0x4008f5c28f5c28f6,0x4028000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 2762.78,0x4030000000000000,0x4030ee147ae147ae,param_7);
    FUN_143249de0(param_1,param_3 * 1904.42,0x402199999999999a,0x401d28f5c28f5c29,param_8);
    FUN_14324a3e0(param_1,0x40a1a8147ae147ae,0x3fe5c28f5c28f5c3,param_9);
    param_3 = 2260.04;
    goto LAB_143254cd7;
  case 0x9c:
    FUN_14324a310(param_1,param_3 * 307.56,0x3fd0000000000000);
    FUN_14324a310(param_1,param_3 * 648.07,0x3ff68f5c28f5c28f,param_5);
    FUN_143249de0(param_1,param_3 * 263.29,0x4015c28f5c28f5c3,0x402e6b851eb851ec,param_6);
    FUN_143249de0(param_1,param_3 * 482.75,0x400e147ae147ae14,0xc030ee147ae147ae,param_7);
    FUN_143249de0(param_1,param_3 * 1803.07,0x40208f5c28f5c28f,0x402047ae147ae148,param_8);
    FUN_14324a3e0(param_1,0x40a867147ae147ae,0x3fd0000000000000,param_9);
    param_3 = param_3 * 1957.3;
    uVar3 = 0x3ff30a3d70a3d70a;
    break;
  case 0x9d:
    FUN_14324a310(param_1,0x4074e1c28f5c28f6,0x3fe4cccccccccccd);
    FUN_14324a310(param_1,param_3 * 334.11,0x3fe4cccccccccccd,param_5);
    FUN_143249de0(param_1,param_3 * 338.03,0x4001ae147ae147ae,0x4018000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 3584.6,0x4002e147ae147ae1,0x402a947ae147ae14,param_7);
    FUN_14324a3e0(param_1,param_3 * 2524.99,0x3ff69fbe76c8b439,param_8);
    FUN_14324a3e0(param_1,param_3 * 2804.16,0x3fd6666666666666,param_9);
LAB_1432527d3:
    uVar3 = 0x3fd6666666666666;
    param_3 = 2804.16;
    break;
  case 0x9e:
    FUN_14324a310(param_1,0x408c34b851eb851f,0x3fd3d70a3d70a3d7);
    FUN_14324a310(param_1,param_3 * 1035.89,0x3ff69fbe76c8b439,param_5);
    FUN_143249de0(param_1,param_3 * 385.99,0x401bc28f5c28f5c3,0x4031ca3d70a3d70a,param_6);
    FUN_143249de0(param_1,param_3 * 1352.12,0x40051eb851eb851f,0x4023b851eb851eb8,param_7);
    FUN_143249de0(param_1,param_3 * 3269.24,0x401151eb851eb852,0x4032000000000000,param_8);
    FUN_14324a3e0(param_1,0x408bf60000000000,0x3ff69fbe76c8b439,param_9);
    param_3 = param_3 * 2804.16;
    uVar3 = 0x3fd0000000000000;
    break;
  case 0x9f:
    FUN_14324a310(param_1,0x407338f5c28f5c29,0x3fec7ae147ae147b);
    FUN_143249de0(param_1,param_3 * 142.26,0x40113d70a3d70a3d,0x4030b5c28f5c28f6,param_5);
    FUN_143249de0(param_1,param_3 * 458.76,0x4020a8f5c28f5c29,0xc02b000000000000,param_6);
    FUN_143249de0(param_1,param_3 * 307.68,0x4021c28f5c28f5c3,0x402b000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 1149.19,0x4017d70a3d70a3d7,0x401047ae147ae148,param_8);
    FUN_143249de0(param_1,param_3 * 4442.41,0x4023bd70a3d70a3d,0x401a8f5c28f5c28f,param_9);
    FUN_143249d50(param_1,0x4098a60000000000,param_10);
    return;
  case 0xa0:
    FUN_14324a310(param_1,0x40515147ae147ae1,0x3fdc28f5c28f5c29);
    FUN_143249de0(param_1,param_3 * 172.35,0x4022147ae147ae14,0x40256b851eb851ec,param_5);
    FUN_143249de0(param_1,param_3 * 1856.64,0x401a333333333333,0x4021947ae147ae14,param_6);
    FUN_143249de0(param_1,param_3 * 3831.19,0x40141eb851eb851f,0x4020b851eb851eb8,param_7);
    FUN_143249de0(param_1,param_3 * 5712.44,0x4000000000000000,0xc01d28f5c28f5c29,param_8);
    FUN_143249de0(param_1,param_3 * 10738.72,0x4030000000000000,0x402b000000000000,param_9);
    uVar3 = 0x3febd70a3d70a3d7;
    param_3 = 7673.81;
    break;
  case 0xa1:
    FUN_14324a310(param_1,0x40581e147ae147ae,0x3fe47ae147ae147b);
    FUN_143249de0(param_1,param_3 * 84.51,0x4000000000000000,0x401ed70a3d70a3d7,param_5);
    FUN_143249de0(param_1,param_3 * 201.58,0x4000000000000000,0xc002e147ae147ae1,param_6);
    FUN_143249de0(param_1,param_3 * 464.16,0x4000000000000000,0x401e000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 5407.7,0x4021cccccccccccd,0x402123d70a3d70a4,param_8);
    FUN_143249de0(param_1,param_3 * 1211.53,0x40227ae147ae147b,0x40148f5c28f5c28f,param_9);
    uVar3 = 0x3ff68f5c28f5c28f;
    param_3 = 7141.38;
    break;
  case 0xa2:
    FUN_14324a310(param_1,0x4068b7ae147ae148,0x3fdc28f5c28f5c29);
    FUN_143249de0(param_1,param_3 * 368.42,0x4020333333333333,0x402b6b851eb851ec,param_5);
    FUN_143249de0(param_1,param_3 * 3922.53,0x4030000000000000,0x403011eb851eb852,param_6);
    FUN_143249de0(param_1,param_3 * 5640.82,0x40260a3d70a3d70a,0x402d23d70a3d70a4,param_7);
    FUN_143249de0(param_1,param_3 * 5645.98,0x4027051eb851eb85,0x402d23d70a3d70a4,param_8);
    FUN_14324a3e0(param_1,param_3 * 2260.04,0x3fe47ae147ae147b,param_9);
    uVar3 = 0x3fe47ae147ae147b;
    param_3 = 2260.04;
    break;
  case 0xa3:
    FUN_143249cc0(param_1,0x4074e1c28f5c28f6,param_4);
    uVar3 = 0x4032000000000000;
LAB_143254bfa:
    FUN_143249de0(param_1,param_3 * 145.07,0x3ff5eb851eb851ec,uVar3,param_5);
    FUN_143249de0(param_1,param_3 * 719.63,0x40227ae147ae147b,0x4026b851eb851eb8,param_6);
    FUN_143249de0(param_1,param_3 * 556.99,0x3feeb851eb851eb8,0xc032000000000000,param_7);
    FUN_143249de0(param_1,param_3 * 5183.97,0x3fd999999999999a,0xc02947ae147ae148,param_8);
    FUN_143249de0(param_1,param_3 * 4275.16,0x4020333333333333,0x4032000000000000,param_9);
    param_3 = 6807.11;
LAB_143254cd7:
    uVar3 = 0x3fe5c28f5c28f5c3;
    break;
  default:
    goto switchD_14324acc9_default;
  }
  FUN_14324a3e0(param_1,param_3,uVar3,param_10);
switchD_14324acc9_default:
  return;
}



// FUNCTION 143254fa0 FUN_143254fa0 body=781 status=ok
// SIG undefined FUN_143254fa0(void)

undefined8 FUN_143254fa0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 0xbfeccccccccccccd;
  default:
    return 0x3ff0000000000000;
  case 2:
    return 0xc01ccccccccccccd;
  case 3:
  case 0x11:
  case 0x52:
  case 0x80:
  case 0x96:
    return 0xc01399999999999a;
  case 4:
  case 8:
  case 0x10:
  case 0x58:
  case 0x8b:
    return 0xc01a666666666666;
  case 5:
    return 0xc021666666666666;
  case 6:
  case 0xc:
  case 0x3d:
  case 0x45:
  case 0x9e:
    return 0xc01c000000000000;
  case 7:
  case 0x2a:
    return 0xc024000000000000;
  case 9:
  case 0x3f:
  case 0x42:
    return 0xbfe999999999999a;
  case 10:
  case 0x1c:
  case 0x5d:
  case 0x8a:
    return 0xc014000000000000;
  case 0xb:
    return 0xc004000000000000;
  case 0xd:
  case 0xe:
  case 0x14:
    return 0xc010000000000000;
  case 0xf:
  case 0x92:
    return 0xbfd999999999999a;
  case 0x12:
  case 0x85:
    return 0xc02699999999999a;
  case 0x13:
  case 0x4a:
    return 0xbff8000000000000;
  case 0x16:
  case 0x27:
    return 0xc026cccccccccccd;
  case 0x17:
  case 0x22:
  case 0x3b:
    return 0xc020666666666666;
  case 0x18:
    return 0xc02b000000000000;
  case 0x19:
    return 0xc021cccccccccccd;
  case 0x1a:
    return 0xc02a333333333333;
  case 0x1b:
  case 0x1d:
  case 0x7c:
  case 0x7e:
    return 0xc01599999999999a;
  case 0x1e:
  case 0x8c:
  case 0x9a:
    return 0xc018000000000000;
  case 0x1f:
  case 0x69:
  case 0x95:
    return 0xc002666666666666;
  case 0x21:
  case 0x35:
    return 0xc022666666666666;
  case 0x23:
    return 0xbffccccccccccccd;
  case 0x25:
    return 0xc022000000000000;
  case 0x26:
    return 0xbff6666666666666;
  case 0x29:
  case 0x87:
  case 0x94:
    return 0xc01e000000000000;
  case 0x2b:
  case 0x41:
  case 0x7d:
    return 0xc011333333333333;
  case 0x2c:
  case 0x88:
    return 0xc020000000000000;
  case 0x2d:
  case 0x48:
    return 0xc014666666666666;
  case 0x2e:
    return 0xc00c000000000000;
  case 0x2f:
  case 0x4e:
  case 0x5a:
    return 0xc01799999999999a;
  case 0x31:
  case 0x89:
    return 0xc004cccccccccccd;
  case 0x33:
    return 0xc00e666666666666;
  case 0x34:
    return 0xbffb333333333333;
  case 0x36:
  case 0x9b:
    return 0xc02799999999999a;
  case 0x37:
    return 0xc0314ccccccccccd;
  case 0x38:
    return 0xc028cccccccccccd;
  case 0x39:
    return 0xc030b33333333333;
  case 0x3a:
  case 0x57:
    return 0xc012000000000000;
  case 0x3c:
    return 0xc02899999999999a;
  case 0x3e:
  case 0x74:
  case 0xa1:
    return 0xc015333333333333;
  case 0x44:
    return 0xc01199999999999a;
  case 0x47:
  case 0x6a:
  case 0x78:
  case 0x7f:
  case 0x93:
    return 0xc01999999999999a;
  case 0x4f:
  case 0x5b:
    return 0xc00a666666666666;
  case 0x50:
  case 0x5f:
    return 0xc01acccccccccccd;
  case 0x53:
    return 0xc020cccccccccccd;
  case 0x54:
    return 0xc02099999999999a;
  case 0x55:
    return 0xc026333333333333;
  case 0x56:
  case 0x90:
    return 0xc016666666666666;
  case 0x59:
  case 0x6b:
    return 0xc016000000000000;
  case 0x5c:
    return 0xc007333333333333;
  case 0x5e:
    return 0xc030cccccccccccd;
  case 0x60:
    return 0xc013333333333333;
  case 0x61:
    return 0xc022cccccccccccd;
  case 0x62:
    return 0xc021333333333333;
  case 99:
  case 0x81:
    return 0xc032000000000000;
  case 100:
    return 0xc01c666666666666;
  case 0x66:
    return 0xc025cccccccccccd;
  case 0x68:
    return 0xc012cccccccccccd;
  case 0x6c:
    return 0xc031e66666666666;
  case 0x6d:
    return 0xc02999999999999a;
  case 0x6e:
    return 0xc018666666666666;
  case 0x6f:
    return 0xc02a99999999999a;
  case 0x70:
  case 0x7a:
  case 0xa2:
    return 0xc01b99999999999a;
  case 0x72:
    return 0xc027666666666666;
  case 0x73:
    return 0xbfe0000000000000;
  case 0x75:
    return 0xc02b666666666666;
  case 0x76:
  case 0x84:
    return 0xc008000000000000;
  case 0x77:
    return 0xc019333333333333;
  case 0x79:
    return 0xc028000000000000;
  case 0x7b:
    return 0xc032333333333333;
  case 0x82:
    return 0xc02bcccccccccccd;
  case 0x83:
  case 0x86:
    return 0xc01ecccccccccccd;
  case 0x8e:
    return 0xc02d000000000000;
  case 0x8f:
    return 0xc024666666666666;
  case 0x91:
    return 0xc01b333333333333;
  case 0x97:
  case 0xa0:
    return 0xc018cccccccccccd;
  case 0x99:
    return 0xc021000000000000;
  case 0x9c:
    return 0xc008cccccccccccd;
  case 0x9d:
    return 0xc03219999999999a;
  case 0x9f:
    return 0xbff0000000000000;
  }
}



// FUNCTION 143255540 FUN_143255540 body=33 status=ok
// SIG undefined FUN_143255540(void)

double FUN_143255540(double param_1)

{
  double dVar1;
  
  dVar1 = 1.0;
  if ((param_1 != 0.0) && (dVar1 = 1.0 / param_1, 1.0 <= dVar1)) {
    dVar1 = 1.0;
  }
  return dVar1;
}



// FUNCTION 143255570 FUN_143255570 body=64 status=ok
// SIG undefined FUN_143255570(void)

undefined8 * FUN_143255570(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145aefeb8;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1432555b0 CreateAkDelayFXParams body=37 status=ok
// SIG undefined CreateAkDelayFXParams(void)

void CreateAkDelayFXParams(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 8))(param_1,0x20);
  if (lVar1 != 0) {
    CAkDelayFXParams::CAkDelayFXParams(lVar1);
    return;
  }
  return;
}



// FUNCTION 1432555e0 FUN_1432555e0 body=429 status=ok
// SIG undefined FUN_1432555e0(void)

void FUN_1432555e0(longlong param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined4 local_28;
  undefined4 uStack_14;
  
  lVar8 = *(longlong *)(param_1 + 8);
  *(undefined1 *)(lVar8 + 0x1c) = 0;
  if ((char)((ulonglong)*(undefined8 *)(lVar8 + 0x18) >> 0x20) == '\x01') {
    local_38 = (float)*(undefined8 *)(lVar8 + 8);
    fStack_34 = (float)((ulonglong)*(undefined8 *)(lVar8 + 8) >> 0x20);
    fStack_30 = (float)*(undefined8 *)(lVar8 + 0x10);
    fStack_2c = (float)((ulonglong)*(undefined8 *)(lVar8 + 0x10) >> 0x20);
    local_28 = (undefined4)*(undefined8 *)(lVar8 + 0x18);
    lVar8 = *(longlong *)(param_1 + 0x10);
    auVar1._8_4_ = SUB84((double)fStack_34,0);
    auVar1._0_8_ = (double)local_38;
    auVar1._12_4_ = (int)((ulonglong)(double)fStack_34 >> 0x20);
    *(undefined1 (*) [16])(lVar8 + 0xd8) = auVar1;
    auVar2._8_4_ = SUB84((double)fStack_2c,0);
    auVar2._0_8_ = (double)fStack_30;
    auVar2._12_4_ = (int)((ulonglong)(double)fStack_2c >> 0x20);
    *(undefined1 (*) [16])(lVar8 + 0xe8) = auVar2;
    *(ulonglong *)(lVar8 + 0xf8) = CONCAT44(uStack_14,local_28);
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
  }
  uVar3 = *(uint *)(param_1 + 0x20);
  if (*(int *)((longlong)param_2 + 0xc) != 0x11) {
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
    uVar4 = *(ushort *)((longlong)param_2 + 0x12);
    goto LAB_143255770;
  }
  uVar6 = *(uint *)(param_1 + 0x18);
  if ((uVar6 == 0) && (*(short *)((longlong)param_2 + 0x12) == 0)) {
    return;
  }
  if ((uVar6 == 0xffffffff) || (*(short *)((longlong)param_2 + 0x12) != 0)) {
    *(uint *)(param_1 + 0x18) = uVar3;
    uVar6 = uVar3;
LAB_1432556bc:
    *(uint *)(param_1 + 0x1c) = uVar3;
  }
  else if (*(uint *)(param_1 + 0x1c) < uVar3) {
    uVar6 = (uVar6 - *(uint *)(param_1 + 0x1c)) + uVar3;
    *(uint *)(param_1 + 0x18) = uVar6;
    goto LAB_1432556bc;
  }
  uVar5 = (uint)*(ushort *)(param_2 + 2) - (uint)*(ushort *)((longlong)param_2 + 0x12);
  uVar3 = uVar6;
  if (uVar5 <= uVar6) {
    uVar3 = uVar5;
  }
  *(uint *)(param_1 + 0x18) = uVar6 - uVar3;
  uVar4 = *(ushort *)((longlong)param_2 + 0x12);
  iVar9 = (uint)*(ushort *)(param_2 + 2) - (uint)uVar4;
  if (iVar9 != 0) {
    uVar4 = *(ushort *)(param_2 + 2);
    if (*(byte *)(param_2 + 1) != 0) {
      uVar7 = (ulonglong)*(byte *)(param_2 + 1);
      lVar8 = 0;
      do {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*param_2 +
                           ((ulonglong)*(ushort *)(param_2 + 2) * lVar8 +
                           (ulonglong)*(ushort *)((longlong)param_2 + 0x12)) * 4),0,
                   (ulonglong)(uint)(iVar9 * 4));
        lVar8 = lVar8 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      uVar4 = *(ushort *)(param_2 + 2);
    }
    *(ushort *)((longlong)param_2 + 0x12) = uVar4;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0x2d;
  }
LAB_143255770:
  if (uVar4 != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 8))(*(longlong **)(param_1 + 0x10),param_2);
  }
  return;
}



// FUNCTION 143255790 FUN_143255790 body=644 status=ok
// SIG undefined FUN_143255790(void)

undefined8 FUN_143255790(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_3 == 3) {
    if (param_1[3] != 0) {
      return 1;
    }
    lVar1 = (**(code **)(*param_2 + 8))(param_2,8);
    lVar2 = 0;
    if (lVar1 != 0) {
      lVar2 = FHeapAllocator::ForAnyElementType::ForAnyElementType(lVar1);
    }
    param_1[3] = lVar2;
    if (lVar2 == 0) {
      return 0x34;
    }
    uVar3 = FUN_143256ad0(lVar2);
    uVar3 = FUN_1432461e0(param_1 + 0xb,param_2,uVar3);
    if ((int)uVar3 != 1) {
      return uVar3;
    }
    uVar3 = FUN_143256ae0(param_1[3],param_1 + 0xb,param_2,(int)param_1[1]);
  }
  else if (param_3 == 4) {
    if (param_1[2] != 0) {
      return 1;
    }
    lVar1 = (**(code **)(*param_2 + 8))(param_2,8);
    lVar2 = 0;
    if (lVar1 != 0) {
      lVar2 = FHeapAllocator::ForAnyElementType::ForAnyElementType(lVar1);
    }
    param_1[2] = lVar2;
    if (lVar2 == 0) {
      return 0x34;
    }
    uVar3 = FUN_143255fa0(lVar2);
    uVar3 = FUN_1432461e0(param_1 + 7,param_2,uVar3);
    if ((int)uVar3 != 1) {
      return uVar3;
    }
    uVar3 = FUN_143255fd0(param_1[2],param_1 + 7,param_2,(int)param_1[1]);
  }
  else if (param_3 == 0x60f) {
    if (param_1[4] != 0) {
      return 1;
    }
    lVar1 = (**(code **)(*param_2 + 8))(param_2,8);
    lVar2 = 0;
    if (lVar1 != 0) {
      lVar2 = FHeapAllocator::ForAnyElementType::ForAnyElementType(lVar1);
    }
    param_1[4] = lVar2;
    if (lVar2 == 0) {
      return 0x34;
    }
    uVar3 = FUN_143257660(lVar2);
    uVar3 = FUN_1432461e0(param_1 + 0xf,param_2,uVar3);
    if ((int)uVar3 != 1) {
      return uVar3;
    }
    uVar3 = FUN_143257670(param_1[4],param_1 + 0xf,param_2,(int)param_1[1]);
  }
  else if (param_3 == 0x63f) {
    if (param_1[5] != 0) {
      return 1;
    }
    lVar1 = (**(code **)(*param_2 + 8))(param_2,8);
    lVar2 = 0;
    if (lVar1 != 0) {
      lVar2 = FHeapAllocator::ForAnyElementType::ForAnyElementType(lVar1);
    }
    param_1[5] = lVar2;
    if (lVar2 == 0) {
      return 0x34;
    }
    uVar3 = FUN_143258740(lVar2);
    uVar3 = FUN_1432461e0(param_1 + 0x13,param_2,uVar3);
    if ((int)uVar3 != 1) {
      return uVar3;
    }
    uVar3 = FUN_143258750(param_1[5],param_1 + 0x13,param_2,(int)param_1[1]);
  }
  else {
    if (param_1[6] != 0) {
      return 1;
    }
    lVar1 = (**(code **)(*param_2 + 8))(param_2,8);
    lVar2 = 0;
    if (lVar1 != 0) {
      lVar2 = FHeapAllocator::ForAnyElementType::ForAnyElementType(lVar1);
    }
    param_1[6] = lVar2;
    if (lVar2 == 0) {
      return 0x34;
    }
    uVar3 = FUN_143259ae0(lVar2);
    uVar3 = FUN_1432461e0(param_1 + 0x17,param_2,uVar3);
    if ((int)uVar3 != 1) {
      return uVar3;
    }
    uVar3 = FUN_143259af0(param_1[6],param_1 + 0x17,param_2,(int)param_1[1]);
  }
  if ((int)uVar3 == 1) {
    (**(code **)(*param_1 + 0x10))(param_1);
    return 1;
  }
  return uVar3;
}



// FUNCTION 143255a20 FUN_143255a20 body=251 status=ok
// SIG undefined FUN_143255a20(void)

undefined8
FUN_143255a20(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,int *param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  uVar1 = param_5[1];
  *(undefined8 *)(param_1 + 8) = param_4;
  lVar4 = (**(code **)(*param_2 + 8))(param_2,0x100);
  lVar5 = 0;
  uVar3 = 0;
  if (lVar4 != 0) {
    lVar5 = FUN_14325a590(lVar4);
  }
  *(longlong *)(param_1 + 0x10) = lVar5;
  if (lVar5 == 0) {
    uVar6 = 0x34;
  }
  else {
    if (*param_5 != *(int *)(lVar5 + 8)) {
      *(int *)(lVar5 + 8) = *param_5;
      lVar5 = *(longlong *)(param_1 + 0x10);
    }
    uVar6 = FUN_143255790(lVar5,param_2,uVar1 >> 0xc);
    if ((int)uVar6 == 1) {
      lVar5 = *(longlong *)(param_1 + 0x10);
      iVar2 = *param_5;
      if (*(longlong *)(lVar5 + 0x28) == 0) {
        if (*(longlong *)(lVar5 + 0x20) == 0) {
          if (*(longlong *)(lVar5 + 0x18) == 0) {
            if (*(longlong *)(lVar5 + 0x10) == 0) {
              if (*(longlong *)(lVar5 + 0x30) != 0) {
                uVar3 = FUN_143255fb0(*(longlong *)(lVar5 + 0x30),iVar2);
              }
            }
            else {
              uVar3 = FUN_143255fb0(*(longlong *)(lVar5 + 0x10),iVar2);
            }
          }
          else {
            uVar3 = FUN_143255fb0(*(longlong *)(lVar5 + 0x18),iVar2);
          }
        }
        else {
          uVar3 = FUN_143255fb0(*(longlong *)(lVar5 + 0x20),iVar2);
        }
      }
      else {
        uVar3 = FUN_143255fb0(*(longlong *)(lVar5 + 0x28),iVar2);
      }
      *(undefined4 *)(param_1 + 0x20) = uVar3;
      uVar6 = 1;
    }
  }
  return uVar6;
}



// FUNCTION 143255b20 FUN_143255b20 body=432 status=ok
// SIG undefined FUN_143255b20(void)

void FUN_143255b20(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_143246260(param_1 + 0x38);
    FUN_143256a60(*(undefined8 *)(param_1 + 0x10),param_2);
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (lVar1 != 0) {
      AK::MemoryMgr::StartProfileThreadUsage((long)lVar1);
      (**(code **)(*param_2 + 0x10))(param_2,lVar1);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    return;
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_143246260(param_1 + 0x58);
    FUN_143256a60(*(undefined8 *)(param_1 + 0x18),param_2);
    lVar1 = *(longlong *)(param_1 + 0x18);
    if (lVar1 != 0) {
      AK::MemoryMgr::StartProfileThreadUsage((long)lVar1);
      (**(code **)(*param_2 + 0x10))(param_2,lVar1);
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    return;
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_143246260(param_1 + 0x78);
    FUN_143256a60(*(undefined8 *)(param_1 + 0x20),param_2);
    lVar1 = *(longlong *)(param_1 + 0x20);
    if (lVar1 != 0) {
      AK::MemoryMgr::StartProfileThreadUsage((long)lVar1);
      (**(code **)(*param_2 + 0x10))(param_2,lVar1);
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    return;
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_143246260(param_1 + 0x98);
    FUN_143256a60(*(undefined8 *)(param_1 + 0x28),param_2);
    lVar1 = *(longlong *)(param_1 + 0x28);
    if (lVar1 != 0) {
      AK::MemoryMgr::StartProfileThreadUsage((long)lVar1);
      (**(code **)(*param_2 + 0x10))(param_2,lVar1);
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
    return;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_143246260(param_1 + 0xb8);
    FUN_143256a60(*(undefined8 *)(param_1 + 0x30),param_2);
    lVar1 = *(longlong *)(param_1 + 0x30);
    if (lVar1 != 0) {
      AK::MemoryMgr::StartProfileThreadUsage((long)lVar1);
      (**(code **)(*param_2 + 0x10))(param_2,lVar1);
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 143255cd0 FUN_143255cd0 body=117 status=ok
// SIG undefined FUN_143255cd0(void)

undefined8 FUN_143255cd0(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if (param_1[2] != 0) {
    FUN_143255b20();
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      (**(code **)(*param_2 + 0x10))(param_2,puVar1);
    }
    param_1[2] = 0;
  }
  (**(code **)*param_1)(param_1,0);
  (**(code **)(*param_2 + 0x10))(param_2,param_1);
  return 1;
}



// FUNCTION 143255d50 CAkDelayFXParams body=14 status=ok
// SIG undefined CAkDelayFXParams(void)

undefined8 * CAkDelayFXParams::CAkDelayFXParams(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145aeff00;
  return param_1;
}



// FUNCTION 143255d60 FUN_143255d60 body=71 status=ok
// SIG undefined FUN_143255d60(void)

void FUN_143255d60(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,0x20);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_145aeff00;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    return;
  }
  return;
}



// FUNCTION 143255fa0 FUN_143255fa0 body=6 status=ok
// SIG undefined FUN_143255fa0(void)

undefined8 FUN_143255fa0(void)

{
  return 0x1948;
}



// FUNCTION 143255fb0 FUN_143255fb0 body=22 status=ok
// SIG undefined FUN_143255fb0(void)

void FUN_143255fb0(undefined8 *param_1)

{
  FUN_14325ab90((uint *)*param_1 + 4,(double)*(uint *)*param_1);
  return;
}



// FUNCTION 143255fd0 FUN_143255fd0 body=168 status=ok
// SIG undefined FUN_143255fd0(void)

undefined4 FUN_143255fd0(longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  puVar2 = (undefined4 *)(**(code **)(*param_3 + 8))(param_3,0x18);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_143249810(puVar2);
    FScale2D::FScale2D(puVar2 + 4,0x3a5ed289,0x39aa64c3);
  }
  *param_1 = (longlong)puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    uVar1 = 0x34;
  }
  else {
    uVar1 = 1;
    *puVar2 = param_4;
    puVar2[1] = 1;
    lVar3 = FUN_143246250(param_2,0x1948);
    *(longlong *)(puVar2 + 2) = lVar3;
    if (lVar3 == 0) {
      uVar1 = 0x34;
    }
    else {
      *(undefined4 *)(lVar3 + 0xc) = 0x3f800000;
    }
  }
  return uVar1;
}



// FUNCTION 143256080 FUN_143256080 body=1466 status=ok
// SIG undefined FUN_143256080(void)

void FUN_143256080(longlong param_1,float *param_2,float *param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  float *pfVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  longlong local_c0;
  
  fVar3 = *(float *)(param_1 + 0x14);
  iVar19 = (int)*(float *)(param_1 + 0xca8);
  iVar14 = (int)*(float *)(param_1 + 0xcb0);
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  iVar13 = (int)*(float *)(param_1 + 4);
  iVar16 = (int)*(float *)(param_1 + 0x28);
  iVar12 = (int)*(float *)(param_1 + 0x2c);
  iVar18 = (int)*(float *)(param_1 + 0x30);
  if (param_4 != 0) {
    fVar4 = *(float *)(param_1 + 8);
    lVar15 = (longlong)iVar19;
    iVar1 = iVar16 + 1;
    local_c0 = (longlong)iVar18;
    do {
      fVar23 = *param_2;
      iVar9 = iVar19 + 1;
      param_2 = param_2 + 1;
      fVar23 = fVar23 * 0.25118864;
      lVar2 = lVar15 + (int)fVar4;
      param_4 = param_4 + -1;
      uVar5 = *(undefined4 *)(param_1 + 0xca4 + lVar2 * 4);
      lVar8 = lVar15 + 1;
      if (1.0 <= fVar23) {
        fVar23 = 1.0;
      }
      fVar21 = 0.0;
      iVar19 = 0;
      if (iVar9 < iVar13) {
        iVar19 = iVar9;
      }
      pfVar10 = (float *)(param_1 + 0xca4 + (longlong)(int)fVar4 * 4);
      lVar15 = 0;
      if (iVar9 < iVar13) {
        lVar15 = lVar8;
      }
      if (fVar23 <= -1.0) {
        fVar23 = -1.0;
      }
      iVar9 = 0;
      *(float *)(param_1 + 0xca4 + lVar2 * 4) = fVar23;
      *(undefined4 *)(param_1 + 0xcac) = uVar5;
      if (3 < iVar13) {
        uVar6 = (iVar13 - 4U >> 2) + 1;
        uVar11 = (ulonglong)uVar6;
        iVar9 = uVar6 * 4;
        do {
          if (ABS(fVar21) < ABS(*pfVar10)) {
            fVar21 = *pfVar10;
          }
          if (ABS(fVar21) < ABS(pfVar10[1])) {
            fVar21 = pfVar10[1];
          }
          if (ABS(fVar21) < ABS(pfVar10[2])) {
            fVar21 = pfVar10[2];
          }
          if (ABS(fVar21) < ABS(pfVar10[3])) {
            fVar21 = pfVar10[3];
          }
          pfVar10 = pfVar10 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (iVar9 < iVar13) {
        uVar11 = (ulonglong)(uint)(iVar13 - iVar9);
        do {
          if (ABS(fVar21) < ABS(*pfVar10)) {
            fVar21 = *pfVar10;
          }
          pfVar10 = pfVar10 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      fVar23 = ABS(fVar23);
      if (1.0 <= fVar23) {
        fVar23 = 1.0;
      }
      if (ABS(*(float *)(param_1 + 0xc)) <= fVar23) {
        fVar23 = *(float *)(param_1 + 0xc);
      }
      pfVar10 = (float *)(param_1 + 0xcb4);
      fVar20 = ABS(*pfVar10);
      fVar22 = *pfVar10;
      if (fVar20 < ABS(fVar23)) {
        fVar22 = fVar23;
      }
      *pfVar10 = ABS(fVar22);
      iVar9 = (int)fVar3;
      if (ABS(fVar23) <= fVar20) {
        iVar9 = iVar14;
      }
      fVar23 = ABS(fVar22) - *(float *)(param_1 + 0x10);
      if (ABS(fVar23) < ABS(*(float *)(param_1 + 0xcb8))) {
        fVar23 = *(float *)(param_1 + 0xcb8);
      }
      *(float *)(param_1 + 0xcb8) = fVar23;
      fVar22 = *(float *)(param_1 + 0x1c);
      fVar20 = 0.0;
      iVar14 = 0;
      if (-1 < iVar9 + -1) {
        iVar14 = iVar9 + -1;
      }
      if (iVar14 < 1) {
        fVar20 = *(float *)(param_1 + 0x18);
        fVar22 = 0.0;
      }
      fVar21 = ABS(fVar21);
      fVar22 = fVar23 * fVar22 + *(float *)(param_1 + 0x10) +
               (fVar21 - *(float *)(param_1 + 0x10)) * fVar20;
      if (ABS(*pfVar10) <= ABS(fVar22)) {
        fVar22 = *pfVar10;
      }
      if (iVar14 < 1) {
        fVar23 = (float)iVar14;
      }
      *(float *)(param_1 + 0xcb8) = fVar23;
      fVar23 = *(float *)(param_1 + 0xcac);
      if (ABS(fVar22) < ABS(fVar23)) {
        fVar22 = fVar23;
      }
      *(float *)(param_1 + 0x10) = ABS(fVar22);
      fVar20 = *pfVar10;
      if (ABS(fVar22) < ABS(fVar23)) {
        fVar20 = fVar23;
      }
      *pfVar10 = ABS(fVar20);
      fVar23 = *(float *)(param_1 + 0xcbc);
      fVar22 = *(float *)(param_1 + 0x20);
      if (ABS(fVar23) < fVar21) {
        fVar22 = *(float *)(param_1 + 0x24);
      }
      fVar23 = (fVar21 - fVar23) * fVar22 + fVar23;
      *(float *)(param_1 + 0xcbc) = fVar23;
      if (fVar23 <= *(float *)(param_1 + 0x10)) {
        fVar23 = *(float *)(param_1 + 0x10);
      }
      *(float *)(param_1 + 0x10) = fVar23;
      fVar21 = *pfVar10;
      if (iVar14 < 1) {
        fVar21 = fVar23;
      }
      fVar22 = 0.0;
      *pfVar10 = fVar21;
      lVar8 = local_c0 + 1;
      lVar2 = iVar16 + local_c0;
      iVar9 = iVar18 + 1;
      *(float *)(param_1 + 0xca4 + lVar2 * 4) = fVar23;
      fVar23 = *(float *)(param_1 + (longlong)iVar16 * 4);
      iVar18 = 0;
      if (lVar8 < iVar12) {
        iVar18 = iVar9;
      }
      lVar7 = 0;
      if (lVar8 < iVar12) {
        lVar7 = lVar8;
      }
      iVar9 = 0;
      fVar21 = *(float *)(param_1 + 0xca4 + (lVar2 - local_c0) * 4);
      iVar17 = iVar1;
      if (3 < iVar12) {
        pfVar10 = (float *)(param_1 + ((longlong)iVar1 + 0x32b) * 4);
        uVar6 = (iVar12 - 4U >> 2) + 1;
        uVar11 = (ulonglong)uVar6;
        iVar9 = uVar6 * 4;
        iVar17 = iVar1 + iVar9;
        do {
          fVar22 = fVar22 + (fVar21 + pfVar10[-2] + pfVar10[-1] + *pfVar10) * fVar23;
          fVar21 = pfVar10[1];
          pfVar10 = pfVar10 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (iVar9 < iVar12) {
        uVar11 = (ulonglong)(uint)(iVar12 - iVar9);
        pfVar10 = (float *)(param_1 + ((longlong)iVar17 + 0x329) * 4);
        do {
          fVar22 = fVar22 + fVar21 * fVar23;
          fVar21 = *pfVar10;
          pfVar10 = pfVar10 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      fVar23 = (fVar22 + fVar22) - fVar22 * fVar22;
      fVar23 = ((fVar23 + fVar23) - fVar23 * fVar23) * 599.0;
      iVar9 = (int)fVar23;
      lVar8 = (longlong)iVar9;
      fVar21 = (*(float *)(param_1 + 0xcc8 + lVar8 * 4) - *(float *)(param_1 + 0xcc4 + lVar8 * 4)) *
               (fVar23 - (float)iVar9) + *(float *)(param_1 + 0xcc4 + lVar8 * 4);
      fVar23 = fVar21;
      if (ABS(fVar21) < ABS(*(float *)(param_1 + 0x34))) {
        fVar23 = *(float *)(param_1 + 0x34);
      }
      *(float *)(param_1 + 0x34) = fVar23;
      fVar23 = *(float *)(param_1 + 0xcac);
      fVar22 = *(float *)(param_1 + 0x38);
      if (ABS(*(float *)(param_1 + 0x38)) < ABS(fVar23)) {
        fVar22 = fVar23;
      }
      *(float *)(param_1 + 0x38) = fVar22;
      fVar21 = fVar23 * fVar21 * *(float *)(param_1 + 0x3c);
      fVar23 = *(float *)(param_1 + 0x44);
      if (ABS(*(float *)(param_1 + 0x44)) < ABS(fVar21)) {
        fVar23 = fVar21;
      }
      *(float *)(param_1 + 0x44) = fVar23;
      *param_3 = fVar21;
      param_3 = param_3 + 1;
      local_c0 = lVar7;
    } while (param_4 != 0);
  }
  *(float *)(param_1 + 0xcb0) = (float)iVar14;
  *(float *)(param_1 + 0xca8) = (float)iVar19;
  *(float *)(param_1 + 0x30) = (float)iVar18;
  return;
}



// FUNCTION 143256640 FUN_143256640 body=25 status=ok
// SIG undefined FUN_143256640(void)

void FUN_143256640(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  FUN_143256080(param_2,*param_3,*param_4,*(undefined2 *)((longlong)param_3 + 0x12));
  return;
}



// FUNCTION 143256660 FUN_143256660 body=976 status=ok
// SIG undefined FUN_143256660(void)

void FUN_143256660(longlong *param_1,double *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  longlong lVar6;
  float *pfVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_res8;
  undefined4 uStackX_c;
  
  dVar9 = *param_2;
  dVar8 = param_2[1] - 12.0;
  if (dVar8 <= -36.0) {
    dVar8 = -36.0;
  }
  if (dVar8 < 0.0) {
    dVar9 = dVar9 + -0.01;
  }
  lVar6 = *(longlong *)(*param_1 + 8);
  dVar9 = _guard_xfg_dispatch_icall_nop(10.0,dVar9 * 0.05);
  *(float *)(lVar6 + 0x3c) = (float)dVar9;
  dVar9 = *param_2;
  if (dVar8 < 0.0) {
    dVar9 = dVar9 + -0.01;
  }
  dVar9 = _guard_xfg_dispatch_icall_nop(10.0,dVar9 * 0.05);
  *(float *)(lVar6 + 0x3c) = (float)dVar9;
  FUN_14325a9a0(lVar6 + 0xcc4,600,SUB84(dVar8,0),param_2[2]);
  puVar1 = (uint *)*param_1;
  iVar5 = FUN_14325ab80(puVar1 + 4,(double)*puVar1);
  dVar9 = (double)FUN_143255540((double)iVar5);
  puVar2 = (undefined4 *)*param_1;
  *(float *)(*(longlong *)(puVar1 + 2) + 0x1c) = (float)dVar9;
  switch(*(undefined4 *)(param_2 + 4)) {
  case 0:
    dVar9 = 0.0;
    dVar8 = 3.0;
    break;
  case 1:
    dVar8 = 4.0;
    dVar9 = 0.0;
    break;
  case 2:
    dVar9 = 0.0;
    dVar8 = 5.0;
    break;
  case 3:
    dVar8 = 6.0;
    dVar9 = 0.0;
    break;
  case 4:
    dVar9 = 0.0;
    dVar8 = 10.0;
    break;
  case 5:
    dVar8 = 15.0;
    dVar9 = 0.0;
    break;
  default:
    dVar9 = (double)CONCAT44(uStackX_c,local_res8);
    dVar8 = (double)CONCAT44(uStackX_c,local_res8);
  }
  if (param_2[3] <= dVar8) {
    dVar8 = param_2[3];
  }
  dVar9 = (double)FUN_14324ac30(*puVar2,dVar8 + dVar9);
  puVar3 = (undefined4 *)*param_1;
  *(float *)(*(longlong *)(puVar2 + 2) + 0x18) = (float)dVar9;
  dVar9 = param_2[3];
  uVar10 = uStackX_c;
  uVar11 = uStackX_c;
  switch(*(undefined4 *)(param_2 + 4)) {
  case 0:
    uStackX_c = 0x40490000;
    uVar10 = 0x40890000;
    local_res8 = 0;
    uVar11 = 0x40080000;
    break;
  case 1:
    uStackX_c = 0x40440000;
    uVar10 = 0x4082c000;
    local_res8 = 0;
    uVar11 = 0x40100000;
    break;
  case 2:
    uStackX_c = 0x403e0000;
    uVar10 = 0x40790000;
    local_res8 = 0;
    uVar11 = 0x40140000;
    break;
  case 3:
    uStackX_c = 0x40340000;
    uVar10 = 0x40690000;
    local_res8 = 0;
    uVar11 = 0x40180000;
    break;
  case 4:
    uStackX_c = 0x40240000;
    uVar10 = 0x40590000;
    local_res8 = 0;
    uVar11 = 0x40240000;
    break;
  case 5:
    uStackX_c = 0x40140000;
    uVar10 = 0x40490000;
    local_res8 = 0;
    uVar11 = 0x402e0000;
  }
  dVar8 = (double)FUN_14324ac30(*puVar3,CONCAT44(uStackX_c,local_res8));
  dVar9 = dVar9 - (double)CONCAT44(uVar11,local_res8);
  if (dVar9 <= 0.0) {
    dVar9 = 0.0;
  }
  *(float *)(*(longlong *)(puVar3 + 2) + 0x24) = (float)dVar8;
  dVar9 = (double)FUN_14324ac30(*puVar3,dVar9 + (double)CONCAT44(uVar10,local_res8));
  puVar1 = (uint *)*param_1;
  *(float *)(*(longlong *)(puVar3 + 2) + 0x20) = (float)dVar9;
  iVar5 = FUN_14325ab90(puVar1 + 4,(double)*puVar1);
  puVar4 = (uint *)*param_1;
  *(float *)(*(longlong *)(puVar1 + 2) + 0x14) = (float)(iVar5 + 1);
  *(undefined4 *)(*(longlong *)(puVar4 + 2) + 8) = 0x44180000;
  iVar5 = FUN_14325ab90(puVar4 + 4,(double)*puVar4);
  *(float *)(*(longlong *)(puVar4 + 2) + 4) = (float)iVar5;
  *(undefined4 *)(*(longlong *)(puVar4 + 2) + 0x28) = 0x443dc000;
  iVar5 = FUN_14325ab60(puVar4 + 4,(double)*puVar4);
  *(float *)(*(longlong *)(puVar4 + 2) + 0x2c) = (float)iVar5;
  iVar5 = FUN_14325ab60(puVar4 + 4,(double)*puVar4);
  if (0 < iVar5) {
    pfVar7 = (float *)(*(longlong *)(puVar4 + 2) + 0xbdc);
    for (lVar6 = (longlong)iVar5; lVar6 != 0; lVar6 = lVar6 + -1) {
      *pfVar7 = 1.0 / (float)iVar5;
      pfVar7 = pfVar7 + 1;
    }
  }
  return;
}



// FUNCTION 143256a60 FUN_143256a60 body=104 status=ok
// SIG undefined FUN_143256a60(void)

void FUN_143256a60(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    AK::MemoryMgr::StartProfileThreadUsage((int)lVar1 + 0x10);
    AK::MemoryMgr::StartProfileThreadUsage((int)lVar1);
    (**(code **)(*param_2 + 0x10))(param_2,lVar1);
    *param_1 = 0;
    return;
  }
  *param_1 = 0;
  return;
}



// FUNCTION 143256ad0 FUN_143256ad0 body=6 status=ok
// SIG undefined FUN_143256ad0(void)

undefined8 FUN_143256ad0(void)

{
  return 0x1e10;
}



// FUNCTION 143256ae0 FUN_143256ae0 body=178 status=ok
// SIG undefined FUN_143256ae0(void)

undefined8 FUN_143256ae0(longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined4 *)(**(code **)(*param_3 + 8))(param_3,0x18);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_143249810(puVar1);
    FScale2D::FScale2D(puVar1 + 4,0x3a5ed289,0x39aa64c3);
  }
  *param_1 = (longlong)puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 2;
    *puVar1 = param_4;
    lVar2 = FUN_143246250(param_2,0x1e10);
    *(longlong *)(puVar1 + 2) = lVar2;
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0x14) = 0x3f800000;
      *(undefined4 *)(*(longlong *)(puVar1 + 2) + 0x10) = 0x443e8000;
      return 1;
    }
  }
  return 0x34;
}



// FUNCTION 143256ba0 FUN_143256ba0 body=1700 status=ok
// SIG undefined FUN_143256ba0(void)

void FUN_143256ba0(longlong param_1,longlong param_2,float *param_3,float *param_4,float *param_5,
                  int param_6)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  float *pfVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int local_res8;
  longlong local_b8;
  
  iVar13 = (int)*(float *)(param_1 + 0xf20);
  iVar14 = (int)*(float *)(param_1 + 0xf10);
  fVar3 = *(float *)(param_1 + 0x1c);
  local_res8 = (int)*(float *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  iVar12 = (int)*(float *)(param_1 + 8);
  iVar15 = (int)*(float *)(param_1 + 0x30);
  iVar18 = (int)*(float *)(param_1 + 0x34);
  if (param_6 != 0) {
    fVar4 = *(float *)(param_1 + 0xc);
    param_2 = param_2 - (longlong)param_3;
    local_b8 = (longlong)iVar14;
    fVar5 = *(float *)(param_1 + 0x10);
    iVar1 = iVar15 + 1;
    lVar8 = (longlong)local_res8;
    do {
      pfVar9 = (float *)(param_2 + (longlong)param_3);
      param_6 = param_6 + -1;
      fVar20 = *param_3;
      param_3 = param_3 + 1;
      fVar19 = *pfVar9 * 0.25118864;
      iVar7 = iVar14 + 1;
      lVar10 = (int)fVar4 + local_b8;
      fVar20 = fVar20 * 0.25118864;
      if (1.0 <= fVar19) {
        fVar19 = 1.0;
      }
      iVar14 = 0;
      if (iVar7 < iVar12) {
        iVar14 = iVar7;
      }
      lVar2 = (int)fVar5 + local_b8;
      fVar22 = *(float *)(param_1 + lVar10 * 4);
      if (1.0 <= fVar20) {
        fVar20 = 1.0;
      }
      lVar17 = local_b8 + 1;
      if (fVar19 <= -1.0) {
        fVar19 = -1.0;
      }
      if (fVar20 <= -1.0) {
        fVar20 = -1.0;
      }
      local_b8 = 0;
      if (iVar7 < iVar12) {
        local_b8 = lVar17;
      }
      *(float *)(param_1 + lVar10 * 4) = fVar19;
      fVar21 = *(float *)(param_1 + 0xf08 + lVar10 * 4);
      *(float *)(param_1 + 0xf08 + lVar10 * 4) = fVar20;
      *(float *)(param_1 + 0xf14) = fVar22;
      *(float *)(param_1 + 0xf18) = fVar21;
      if (ABS(fVar21) < ABS(fVar22)) {
        fVar21 = fVar22;
      }
      *(float *)(param_1 + 0xf1c) = fVar21;
      fVar22 = ABS(fVar19);
      fVar21 = ABS(fVar20);
      if (fVar22 < fVar21) {
        fVar19 = fVar20;
      }
      *(float *)(param_1 + 0xf08 + lVar2 * 4) = fVar19;
      iVar7 = 0;
      pfVar9 = (float *)(param_1 + ((longlong)(int)fVar5 + 0x3c2) * 4);
      fVar20 = 0.0;
      if (3 < iVar12) {
        uVar6 = (iVar12 - 4U >> 2) + 1;
        uVar11 = (ulonglong)uVar6;
        iVar7 = uVar6 * 4;
        do {
          if (ABS(fVar20) < ABS(*pfVar9)) {
            fVar20 = *pfVar9;
          }
          if (ABS(fVar20) < ABS(pfVar9[1])) {
            fVar20 = pfVar9[1];
          }
          if (ABS(fVar20) < ABS(pfVar9[2])) {
            fVar20 = pfVar9[2];
          }
          if (ABS(fVar20) < ABS(pfVar9[3])) {
            fVar20 = pfVar9[3];
          }
          pfVar9 = pfVar9 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (iVar7 < iVar12) {
        uVar11 = (ulonglong)(uint)(iVar12 - iVar7);
        do {
          if (ABS(fVar20) < ABS(*pfVar9)) {
            fVar20 = *pfVar9;
          }
          pfVar9 = pfVar9 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (fVar22 <= fVar21) {
        fVar22 = fVar21;
      }
      if (1.0 <= fVar22) {
        fVar22 = 1.0;
      }
      if (ABS(*(float *)(param_1 + 0x14)) <= fVar22) {
        fVar22 = *(float *)(param_1 + 0x14);
      }
      pfVar9 = (float *)(param_1 + 0xf24);
      fVar21 = ABS(*pfVar9);
      fVar19 = *pfVar9;
      if (fVar21 < ABS(fVar22)) {
        fVar19 = fVar22;
      }
      *pfVar9 = ABS(fVar19);
      iVar7 = (int)fVar3;
      if (ABS(fVar22) <= fVar21) {
        iVar7 = iVar13;
      }
      fVar19 = ABS(fVar19) - *(float *)(param_1 + 0x18);
      if (ABS(fVar19) < ABS(*(float *)(param_1 + 0xf28))) {
        fVar19 = *(float *)(param_1 + 0xf28);
      }
      *(float *)(param_1 + 0xf28) = fVar19;
      fVar22 = *(float *)(param_1 + 0x24);
      fVar21 = 0.0;
      iVar13 = 0;
      if (-1 < iVar7 + -1) {
        iVar13 = iVar7 + -1;
      }
      if (iVar13 < 1) {
        fVar21 = *(float *)(param_1 + 0x20);
        fVar22 = 0.0;
      }
      fVar20 = ABS(fVar20);
      fVar22 = fVar19 * fVar22 + *(float *)(param_1 + 0x18) +
               (fVar20 - *(float *)(param_1 + 0x18)) * fVar21;
      if (ABS(*pfVar9) <= ABS(fVar22)) {
        fVar22 = *pfVar9;
      }
      if (iVar13 < 1) {
        fVar19 = 0.0;
      }
      *(float *)(param_1 + 0xf28) = fVar19;
      fVar19 = *(float *)(param_1 + 0xf1c);
      if (ABS(fVar22) < ABS(fVar19)) {
        fVar22 = fVar19;
      }
      *(float *)(param_1 + 0x18) = ABS(fVar22);
      fVar21 = *pfVar9;
      if (ABS(fVar22) < ABS(fVar19)) {
        fVar21 = fVar19;
      }
      *pfVar9 = ABS(fVar21);
      fVar19 = *(float *)(param_1 + 0xf2c);
      fVar22 = *(float *)(param_1 + 0x28);
      if (ABS(fVar19) < fVar20) {
        fVar22 = *(float *)(param_1 + 0x2c);
      }
      fVar19 = (fVar20 - fVar19) * fVar22 + fVar19;
      *(float *)(param_1 + 0xf2c) = fVar19;
      if (fVar19 <= *(float *)(param_1 + 0x18)) {
        fVar19 = *(float *)(param_1 + 0x18);
      }
      *(float *)(param_1 + 0x18) = fVar19;
      fVar20 = *pfVar9;
      if (iVar13 < 1) {
        fVar20 = fVar19;
      }
      lVar10 = lVar8 + 1;
      iVar7 = local_res8 + 1;
      *pfVar9 = fVar20;
      fVar22 = 0.0;
      lVar2 = iVar15 + lVar8;
      *(float *)(param_1 + 0xf08 + lVar2 * 4) = fVar19;
      fVar20 = *(float *)(param_1 + (longlong)iVar15 * 4);
      local_res8 = 0;
      if (lVar10 < iVar18) {
        local_res8 = iVar7;
      }
      lVar17 = 0;
      if (lVar10 < iVar18) {
        lVar17 = lVar10;
      }
      iVar7 = 0;
      fVar19 = *(float *)(param_1 + 0xf08 + (lVar2 - lVar8) * 4);
      iVar16 = iVar1;
      if (3 < iVar18) {
        pfVar9 = (float *)(param_1 + ((longlong)iVar1 + 0x3c4) * 4);
        uVar6 = (iVar18 - 4U >> 2) + 1;
        uVar11 = (ulonglong)uVar6;
        iVar7 = uVar6 * 4;
        iVar16 = iVar1 + iVar7;
        do {
          fVar22 = fVar22 + (fVar19 + pfVar9[-2] + pfVar9[-1] + *pfVar9) * fVar20;
          fVar19 = pfVar9[1];
          pfVar9 = pfVar9 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (iVar7 < iVar18) {
        uVar11 = (ulonglong)(uint)(iVar18 - iVar7);
        pfVar9 = (float *)(param_1 + ((longlong)iVar16 + 0x3c2) * 4);
        do {
          fVar22 = fVar22 + fVar19 * fVar20;
          fVar19 = *pfVar9;
          pfVar9 = pfVar9 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      fVar20 = (fVar22 + fVar22) - fVar22 * fVar22;
      fVar20 = ((fVar20 + fVar20) - fVar20 * fVar20) * 599.0;
      iVar7 = (int)fVar20;
      lVar8 = (longlong)iVar7;
      fVar19 = (*(float *)(param_1 + 0xf38 + lVar8 * 4) - *(float *)(param_1 + 0xf34 + lVar8 * 4)) *
               (fVar20 - (float)iVar7) + *(float *)(param_1 + 0xf34 + lVar8 * 4);
      fVar20 = fVar19;
      if (ABS(fVar19) < ABS(*(float *)(param_1 + 0x3c))) {
        fVar20 = *(float *)(param_1 + 0x3c);
      }
      *(float *)(param_1 + 0x3c) = fVar20;
      fVar20 = *(float *)(param_1 + 0xf14);
      fVar22 = *(float *)(param_1 + 0x40);
      if (ABS(*(float *)(param_1 + 0x40)) < ABS(fVar20)) {
        fVar22 = fVar20;
      }
      *(float *)(param_1 + 0x40) = fVar22;
      fVar22 = fVar20 * fVar19 * *(float *)(param_1 + 0x44);
      fVar20 = *(float *)(param_1 + 0x4c);
      if (ABS(*(float *)(param_1 + 0x4c)) < ABS(fVar22)) {
        fVar20 = fVar22;
      }
      *(float *)(param_1 + 0x4c) = fVar20;
      *param_4 = fVar22;
      param_4 = param_4 + 1;
      fVar20 = *(float *)(param_1 + 0xf18);
      fVar22 = *(float *)(param_1 + 0x50);
      if (ABS(*(float *)(param_1 + 0x50)) < ABS(fVar20)) {
        fVar22 = fVar20;
      }
      *(float *)(param_1 + 0x50) = fVar22;
      fVar19 = fVar20 * fVar19 * *(float *)(param_1 + 0x54);
      fVar20 = *(float *)(param_1 + 0x5c);
      if (ABS(*(float *)(param_1 + 0x5c)) < ABS(fVar19)) {
        fVar20 = fVar19;
      }
      *(float *)(param_1 + 0x5c) = fVar20;
      *param_5 = fVar19;
      param_5 = param_5 + 1;
      lVar8 = lVar17;
    } while (param_6 != 0);
  }
  *(float *)(param_1 + 0xf20) = (float)iVar13;
  *(float *)(param_1 + 0xf10) = (float)iVar14;
  *(float *)(param_1 + 0x38) = (float)local_res8;
  return;
}



// FUNCTION 143257250 FUN_143257250 body=65 status=ok
// SIG undefined FUN_143257250(void)

void FUN_143257250(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  FUN_143256ba0(param_2,*param_3,*param_3 + (ulonglong)*(ushort *)(param_3 + 2) * 4,*param_4,
                *param_4 + (ulonglong)*(ushort *)(param_4 + 2) * 4,
                *(undefined2 *)((longlong)param_3 + 0x12));
  return;
}



// FUNCTION 1432572a0 FUN_1432572a0 body=901 status=ok
// SIG undefined FUN_1432572a0(void)

void FUN_1432572a0(longlong *param_1,double *param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  longlong lVar7;
  float *pfVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 local_res8;
  undefined4 uStackX_c;
  
  dVar11 = *param_2;
  dVar10 = param_2[1] - 12.0;
  if (dVar10 <= -36.0) {
    dVar10 = -36.0;
  }
  lVar7 = *(longlong *)(*param_1 + 8);
  if (dVar10 < 0.0) {
    dVar11 = dVar11 + -0.01;
  }
  dVar9 = _guard_xfg_dispatch_icall_nop(10.0,dVar11 * 0.05);
  dVar11 = param_2[2];
  *(float *)(lVar7 + 0x54) = (float)dVar9;
  *(float *)(lVar7 + 0x44) = (float)dVar9;
  FUN_14325a9a0(lVar7 + 0xf34,600,SUB84(dVar10,0),dVar11);
  puVar2 = (uint *)*param_1;
  iVar6 = FUN_14325ab80(puVar2 + 4,(double)*puVar2);
  dVar10 = (double)FUN_143255540((double)iVar6);
  uVar1 = *(undefined4 *)(param_2 + 4);
  dVar11 = param_2[3];
  puVar3 = (undefined4 *)*param_1;
  *(float *)(*(longlong *)(puVar2 + 2) + 0x24) = (float)dVar10;
  switch(uVar1) {
  case 0:
    dVar10 = 0.0;
    dVar9 = 3.0;
    break;
  case 1:
    dVar9 = 4.0;
    dVar10 = 0.0;
    break;
  case 2:
    dVar9 = 5.0;
    dVar10 = 0.0;
    break;
  case 3:
    dVar9 = 6.0;
    dVar10 = 0.0;
    break;
  case 4:
    dVar10 = 0.0;
    dVar9 = 10.0;
    break;
  case 5:
    dVar9 = 15.0;
    dVar10 = 0.0;
    break;
  default:
    dVar10 = (double)CONCAT44(uStackX_c,local_res8);
    dVar9 = (double)CONCAT44(uStackX_c,local_res8);
  }
  if (dVar11 <= dVar9) {
    dVar9 = dVar11;
  }
  dVar10 = (double)FUN_14324ac30(*puVar3,dVar9 + dVar10);
  puVar4 = (undefined4 *)*param_1;
  *(float *)(*(longlong *)(puVar3 + 2) + 0x20) = (float)dVar10;
  uVar12 = uStackX_c;
  uVar13 = uStackX_c;
  switch(uVar1) {
  case 0:
    uStackX_c = 0x40490000;
    uVar12 = 0x40890000;
    local_res8 = 0;
    uVar13 = 0x40080000;
    break;
  case 1:
    uStackX_c = 0x40440000;
    uVar12 = 0x4082c000;
    local_res8 = 0;
    uVar13 = 0x40100000;
    break;
  case 2:
    uStackX_c = 0x403e0000;
    uVar12 = 0x40790000;
    local_res8 = 0;
    uVar13 = 0x40140000;
    break;
  case 3:
    uStackX_c = 0x40340000;
    uVar12 = 0x40690000;
    local_res8 = 0;
    uVar13 = 0x40180000;
    break;
  case 4:
    uStackX_c = 0x40240000;
    uVar12 = 0x40590000;
    local_res8 = 0;
    uVar13 = 0x40240000;
    break;
  case 5:
    uStackX_c = 0x40140000;
    uVar12 = 0x40490000;
    local_res8 = 0;
    uVar13 = 0x402e0000;
  }
  dVar10 = (double)FUN_14324ac30(*puVar4,CONCAT44(uStackX_c,local_res8));
  dVar11 = dVar11 - (double)CONCAT44(uVar13,local_res8);
  if (dVar11 <= 0.0) {
    dVar11 = 0.0;
  }
  *(float *)(*(longlong *)(puVar4 + 2) + 0x2c) = (float)dVar10;
  dVar11 = (double)FUN_14324ac30(*puVar4,dVar11 + (double)CONCAT44(uVar12,local_res8));
  puVar2 = (uint *)*param_1;
  *(float *)(*(longlong *)(puVar4 + 2) + 0x28) = (float)dVar11;
  iVar6 = FUN_14325ab90(puVar2 + 4,(double)*puVar2);
  puVar5 = (uint *)*param_1;
  *(float *)(*(longlong *)(puVar2 + 2) + 0x1c) = (float)(iVar6 + 1);
  *(undefined4 *)(*(longlong *)(puVar5 + 2) + 0xc) = 0x4418c000;
  iVar6 = FUN_14325ab90(puVar5 + 4,(double)*puVar5);
  *(float *)(*(longlong *)(puVar5 + 2) + 8) = (float)iVar6;
  *(undefined4 *)(*(longlong *)(puVar5 + 2) + 0x30) = 0x44644000;
  iVar6 = FUN_14325ab60(puVar5 + 4,(double)*puVar5);
  *(float *)(*(longlong *)(puVar5 + 2) + 0x34) = (float)iVar6;
  iVar6 = FUN_14325ab60(puVar5 + 4,(double)*puVar5);
  if (0 < iVar6) {
    pfVar8 = (float *)(*(longlong *)(puVar5 + 2) + 0xe44);
    for (lVar7 = (longlong)iVar6; lVar7 != 0; lVar7 = lVar7 + -1) {
      *pfVar8 = 1.0 / (float)iVar6;
      pfVar8 = pfVar8 + 1;
    }
  }
  return;
}



// FUNCTION 143257660 FUN_143257660 body=6 status=ok
// SIG undefined FUN_143257660(void)

undefined8 FUN_143257660(void)

{
  return 0x27c0;
}



// FUNCTION 143257670 FUN_143257670 body=178 status=ok
// SIG undefined FUN_143257670(void)

undefined8 FUN_143257670(longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined4 *)(**(code **)(*param_3 + 8))(param_3,0x18);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_143249810(puVar1);
    FScale2D::FScale2D(puVar1 + 4,0x3a5ed289,0x39aa64c3);
  }
  *param_1 = (longlong)puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 6;
    *puVar1 = param_4;
    lVar2 = FUN_143246250(param_2,0x27c0);
    *(longlong *)(puVar1 + 2) = lVar2;
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0x24) = 0x3f800000;
      *(undefined4 *)(*(longlong *)(puVar1 + 2) + 0x20) = 0x44860000;
      return 1;
    }
  }
  return 0x34;
}



// FUNCTION 143257730 FUN_143257730 body=2853 status=ok
// SIG undefined FUN_143257730(void)

void FUN_143257730(longlong param_1,float *param_2,longlong param_3,longlong param_4,float *param_5,
                  longlong param_6,float *param_7,float *param_8,float *param_9,float *param_10,
                  float *param_11,float *param_12,float *param_13,int param_14)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  float *pfVar10;
  float *pfVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int local_res8;
  longlong local_c8;
  
  iVar15 = (int)*(float *)(param_1 + 0x13f8);
  iVar13 = (int)*(float *)(param_1 + 0x1418);
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  fVar1 = *(float *)(param_1 + 0x2c);
  fVar2 = *(float *)(param_1 + 0x1c);
  local_res8 = (int)*(float *)(param_1 + 0x48);
  iVar6 = (int)*(float *)(param_1 + 0x40);
  iVar20 = (int)*(float *)(param_1 + 0x18);
  fVar3 = *(float *)(param_1 + 0x20);
  iVar19 = (int)*(float *)(param_1 + 0x44);
  if (param_14 != 0) {
    local_c8 = (longlong)iVar15;
    iVar7 = iVar6 + 1;
    param_3 = param_3 - (longlong)param_5;
    param_4 = param_4 - (longlong)param_5;
    param_6 = param_6 - (longlong)param_7;
    lVar9 = (longlong)local_res8;
    do {
      pfVar11 = (float *)(param_1 + 0x13e4);
      fVar22 = *param_2 * 0.25118864;
      param_14 = param_14 + -1;
      param_2 = param_2 + 1;
      fVar23 = *(float *)(param_3 + (longlong)param_5) * 0.25118864;
      if (1.0 <= fVar22) {
        fVar22 = 1.0;
      }
      if (1.0 <= fVar23) {
        fVar23 = 1.0;
      }
      if (fVar22 <= -1.0) {
        fVar22 = -1.0;
      }
      if (fVar23 <= -1.0) {
        fVar23 = -1.0;
      }
      *(float *)(param_1 + 0x13e0) = fVar22;
      *pfVar11 = fVar23;
      pfVar10 = (float *)(param_4 + (longlong)param_5);
      fVar22 = *param_5;
      param_5 = param_5 + 1;
      fVar23 = *pfVar10 * 0.25118864;
      iVar17 = (int)fVar2 + iVar15;
      fVar22 = fVar22 * 0.25118864;
      if (1.0 <= fVar23) {
        fVar23 = 1.0;
      }
      if (1.0 <= fVar22) {
        fVar22 = 1.0;
      }
      if (fVar23 <= -1.0) {
        fVar23 = -1.0;
      }
      if (fVar22 <= -1.0) {
        fVar22 = -1.0;
      }
      *(float *)(param_1 + 0x13e8) = fVar23;
      *(float *)(param_1 + 0x13ec) = fVar22;
      pfVar10 = (float *)(param_6 + (longlong)param_7);
      iVar18 = iVar15 + 1;
      fVar22 = *param_7;
      param_7 = param_7 + 1;
      fVar23 = *pfVar10 * 0.25118864;
      lVar12 = (int)fVar2 + local_c8;
      fVar22 = fVar22 * 0.25118864;
      if (1.0 <= fVar23) {
        fVar23 = 1.0;
      }
      if (1.0 <= fVar22) {
        fVar22 = 1.0;
      }
      if (fVar23 <= -1.0) {
        fVar23 = -1.0;
      }
      if (fVar22 <= -1.0) {
        fVar22 = -1.0;
      }
      *(float *)(param_1 + 0x13f0) = fVar23;
      *(float *)(param_1 + 0x13f4) = fVar22;
      uVar4 = *(undefined4 *)(param_1 + lVar12 * 4);
      fVar22 = *(float *)(param_1 + 0x18);
      *(undefined4 *)(param_1 + lVar12 * 4) = *(undefined4 *)(param_1 + 0x13e0);
      lVar14 = (int)fVar3 + local_c8;
      uVar5 = *(undefined4 *)(param_1 + 0x13e0 + lVar12 * 4);
      *(float *)(param_1 + 0x13e0 + lVar12 * 4) = *pfVar11;
      iVar15 = 0;
      if (iVar18 < iVar20) {
        iVar15 = iVar18;
      }
      *(undefined4 *)(param_1 + 0x13fc) = uVar4;
      *(undefined4 *)(param_1 + 0x1400) = uVar5;
      lVar12 = local_c8 + 1;
      local_c8 = 0;
      if (iVar18 < iVar20) {
        local_c8 = lVar12;
      }
      lVar12 = (longlong)((int)fVar22 + iVar17);
      uVar4 = *(undefined4 *)(param_1 + 4 + lVar12 * 4);
      *(undefined4 *)(param_1 + 4 + lVar12 * 4) = *(undefined4 *)(param_1 + 0x13e8);
      uVar5 = *(undefined4 *)(param_1 + 0x13e4 + lVar12 * 4);
      *(undefined4 *)(param_1 + 0x13e4 + lVar12 * 4) = *(undefined4 *)(param_1 + 0x13ec);
      *(undefined4 *)(param_1 + 0x1404) = uVar4;
      *(undefined4 *)(param_1 + 0x1408) = uVar5;
      lVar12 = (longlong)(iVar17 + (int)fVar22 * 2);
      uVar4 = *(undefined4 *)(param_1 + 8 + lVar12 * 4);
      *(undefined4 *)(param_1 + 8 + lVar12 * 4) = *(undefined4 *)(param_1 + 0x13f0);
      uVar5 = *(undefined4 *)(param_1 + 0x13e8 + lVar12 * 4);
      *(undefined4 *)(param_1 + 0x13e8 + lVar12 * 4) = *(undefined4 *)(param_1 + 0x13f4);
      *(undefined4 *)(param_1 + 0x140c) = uVar4;
      *(undefined4 *)(param_1 + 0x1410) = uVar5;
      fVar22 = *pfVar11;
      if (ABS(*pfVar11) < ABS(*(float *)(param_1 + 0x13e0))) {
        fVar22 = *(float *)(param_1 + 0x13e0);
      }
      if (ABS(fVar22) < ABS(*(float *)(param_1 + 0x13e8))) {
        fVar22 = *(float *)(param_1 + 0x13e8);
      }
      if (ABS(fVar22) < ABS(*(float *)(param_1 + 0x13ec))) {
        fVar22 = *(float *)(param_1 + 0x13ec);
      }
      if (ABS(fVar22) < ABS(*(float *)(param_1 + 0x13f0))) {
        fVar22 = *(float *)(param_1 + 0x13f0);
      }
      if (ABS(fVar22) < ABS(*(float *)(param_1 + 0x13f4))) {
        fVar22 = *(float *)(param_1 + 0x13f4);
      }
      fVar23 = *(float *)(param_1 + 0x1400);
      if (ABS(*(float *)(param_1 + 0x1400)) < ABS(*(float *)(param_1 + 0x13fc))) {
        fVar23 = *(float *)(param_1 + 0x13fc);
      }
      if (ABS(fVar23) < ABS(*(float *)(param_1 + 0x1404))) {
        fVar23 = *(float *)(param_1 + 0x1404);
      }
      if (ABS(fVar23) < ABS(*(float *)(param_1 + 0x1408))) {
        fVar23 = *(float *)(param_1 + 0x1408);
      }
      if (ABS(fVar23) < ABS(*(float *)(param_1 + 0x140c))) {
        fVar23 = *(float *)(param_1 + 0x140c);
      }
      if (ABS(fVar23) < ABS(*(float *)(param_1 + 0x1410))) {
        fVar23 = *(float *)(param_1 + 0x1410);
      }
      iVar17 = 0;
      *(float *)(param_1 + 0x1414) = fVar23;
      *(float *)(param_1 + 0x13e0 + lVar14 * 4) = fVar22;
      fVar22 = 0.0;
      pfVar10 = (float *)(param_1 + ((longlong)(int)fVar3 + 0x4f8) * 4);
      if (3 < iVar20) {
        uVar8 = (iVar20 - 4U >> 2) + 1;
        uVar16 = (ulonglong)uVar8;
        iVar17 = uVar8 * 4;
        do {
          if (ABS(fVar22) < ABS(*pfVar10)) {
            fVar22 = *pfVar10;
          }
          if (ABS(fVar22) < ABS(pfVar10[1])) {
            fVar22 = pfVar10[1];
          }
          if (ABS(fVar22) < ABS(pfVar10[2])) {
            fVar22 = pfVar10[2];
          }
          if (ABS(fVar22) < ABS(pfVar10[3])) {
            fVar22 = pfVar10[3];
          }
          pfVar10 = pfVar10 + 4;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      if (iVar17 < iVar20) {
        uVar16 = (ulonglong)(uint)(iVar20 - iVar17);
        do {
          if (ABS(fVar22) < ABS(*pfVar10)) {
            fVar22 = *pfVar10;
          }
          pfVar10 = pfVar10 + 1;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      fVar23 = ABS(*pfVar11);
      if (ABS(*pfVar11) <= ABS(*(float *)(param_1 + 0x13e0))) {
        fVar23 = ABS(*(float *)(param_1 + 0x13e0));
      }
      fVar25 = ABS(*(float *)(param_1 + 0x13e8));
      if (ABS(*(float *)(param_1 + 0x13e8)) <= fVar23) {
        fVar25 = fVar23;
      }
      fVar23 = ABS(*(float *)(param_1 + 0x13ec));
      if (ABS(*(float *)(param_1 + 0x13ec)) <= fVar25) {
        fVar23 = fVar25;
      }
      fVar25 = ABS(*(float *)(param_1 + 0x13f0));
      if (ABS(*(float *)(param_1 + 0x13f0)) <= fVar23) {
        fVar25 = fVar23;
      }
      fVar23 = ABS(*(float *)(param_1 + 0x13f4));
      if (ABS(*(float *)(param_1 + 0x13f4)) <= fVar25) {
        fVar23 = fVar25;
      }
      if (1.0 <= fVar23) {
        fVar23 = 1.0;
      }
      if (ABS(*(float *)(param_1 + 0x24)) <= fVar23) {
        fVar23 = *(float *)(param_1 + 0x24);
      }
      fVar24 = ABS(*(float *)(param_1 + 0x141c));
      fVar25 = *(float *)(param_1 + 0x141c);
      if (fVar24 < ABS(fVar23)) {
        fVar25 = fVar23;
      }
      *(float *)(param_1 + 0x141c) = ABS(fVar25);
      iVar17 = (int)fVar1;
      if (ABS(fVar23) <= fVar24) {
        iVar17 = iVar13;
      }
      fVar23 = ABS(fVar25) - *(float *)(param_1 + 0x28);
      if (ABS(fVar23) < ABS(*(float *)(param_1 + 0x1420))) {
        fVar23 = *(float *)(param_1 + 0x1420);
      }
      *(float *)(param_1 + 0x1420) = fVar23;
      fVar25 = *(float *)(param_1 + 0x34);
      fVar24 = 0.0;
      iVar13 = 0;
      if (-1 < iVar17 + -1) {
        iVar13 = iVar17 + -1;
      }
      if (iVar13 < 1) {
        fVar24 = *(float *)(param_1 + 0x30);
        fVar25 = 0.0;
      }
      fVar22 = ABS(fVar22);
      fVar25 = fVar23 * fVar25 + *(float *)(param_1 + 0x28) +
               (fVar22 - *(float *)(param_1 + 0x28)) * fVar24;
      if (ABS(*(float *)(param_1 + 0x141c)) <= ABS(fVar25)) {
        fVar25 = *(float *)(param_1 + 0x141c);
      }
      if (iVar13 < 1) {
        fVar23 = 0.0;
      }
      *(float *)(param_1 + 0x1420) = fVar23;
      fVar23 = *(float *)(param_1 + 0x1414);
      if (ABS(fVar25) < ABS(fVar23)) {
        fVar25 = fVar23;
      }
      *(float *)(param_1 + 0x28) = ABS(fVar25);
      fVar24 = *(float *)(param_1 + 0x141c);
      if (ABS(fVar25) < ABS(fVar23)) {
        fVar24 = fVar23;
      }
      *(float *)(param_1 + 0x141c) = ABS(fVar24);
      fVar23 = *(float *)(param_1 + 0x1424);
      fVar25 = *(float *)(param_1 + 0x38);
      if (ABS(fVar23) < fVar22) {
        fVar25 = *(float *)(param_1 + 0x3c);
      }
      fVar23 = (fVar22 - fVar23) * fVar25 + fVar23;
      *(float *)(param_1 + 0x1424) = fVar23;
      fVar22 = *(float *)(param_1 + 0x28);
      if (*(float *)(param_1 + 0x28) <= fVar23) {
        fVar22 = fVar23;
      }
      *(float *)(param_1 + 0x28) = fVar22;
      fVar23 = *(float *)(param_1 + 0x141c);
      if (iVar13 < 1) {
        fVar23 = fVar22;
      }
      lVar12 = lVar9 + 1;
      iVar17 = local_res8 + 1;
      *(float *)(param_1 + 0x141c) = fVar23;
      fVar23 = 0.0;
      lVar14 = iVar6 + lVar9;
      *(float *)(param_1 + 0x13e0 + lVar14 * 4) = fVar22;
      fVar22 = *(float *)(param_1 + (longlong)iVar6 * 4);
      local_res8 = 0;
      if (lVar12 < iVar19) {
        local_res8 = iVar17;
      }
      lVar21 = 0;
      if (lVar12 < iVar19) {
        lVar21 = lVar12;
      }
      iVar17 = 0;
      fVar25 = *(float *)(param_1 + 0x13e0 + (lVar14 - lVar9) * 4);
      iVar18 = iVar7;
      if (3 < iVar19) {
        pfVar11 = (float *)(param_1 + ((longlong)iVar7 + 0x4fa) * 4);
        uVar8 = (iVar19 - 4U >> 2) + 1;
        uVar16 = (ulonglong)uVar8;
        iVar17 = uVar8 * 4;
        iVar18 = iVar7 + iVar17;
        do {
          fVar23 = fVar23 + (fVar25 + pfVar11[-2] + pfVar11[-1] + *pfVar11) * fVar22;
          fVar25 = pfVar11[1];
          pfVar11 = pfVar11 + 4;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      if (iVar17 < iVar19) {
        uVar16 = (ulonglong)(uint)(iVar19 - iVar17);
        pfVar11 = (float *)(param_1 + ((longlong)iVar18 + 0x4f8) * 4);
        do {
          fVar23 = fVar23 + fVar25 * fVar22;
          fVar25 = *pfVar11;
          pfVar11 = pfVar11 + 1;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      fVar22 = (fVar23 + fVar23) - fVar23 * fVar23;
      fVar22 = ((fVar22 + fVar22) - fVar22 * fVar22) * 599.0;
      iVar17 = (int)fVar22;
      lVar9 = (longlong)iVar17;
      fVar23 = (*(float *)(param_1 + 0x1430 + lVar9 * 4) - *(float *)(param_1 + 0x142c + lVar9 * 4))
               * (fVar22 - (float)iVar17) + *(float *)(param_1 + 0x142c + lVar9 * 4);
      fVar22 = fVar23;
      if (ABS(fVar23) < ABS(*(float *)(param_1 + 0x4c))) {
        fVar22 = *(float *)(param_1 + 0x4c);
      }
      *(float *)(param_1 + 0x4c) = fVar22;
      fVar22 = *(float *)(param_1 + 0x13fc);
      fVar25 = *(float *)(param_1 + 0x50);
      if (ABS(*(float *)(param_1 + 0x50)) < ABS(fVar22)) {
        fVar25 = fVar22;
      }
      *(float *)(param_1 + 0x50) = fVar25;
      fVar25 = fVar22 * fVar23 * *(float *)(param_1 + 0x54);
      fVar22 = *(float *)(param_1 + 0x5c);
      if (ABS(*(float *)(param_1 + 0x5c)) < ABS(fVar25)) {
        fVar22 = fVar25;
      }
      *(float *)(param_1 + 0x5c) = fVar22;
      *param_8 = fVar25;
      param_8 = param_8 + 1;
      fVar22 = *(float *)(param_1 + 0x1400);
      fVar25 = *(float *)(param_1 + 0x60);
      if (ABS(*(float *)(param_1 + 0x60)) < ABS(fVar22)) {
        fVar25 = fVar22;
      }
      *(float *)(param_1 + 0x60) = fVar25;
      fVar25 = fVar22 * fVar23 * *(float *)(param_1 + 100);
      fVar22 = *(float *)(param_1 + 0x6c);
      if (ABS(*(float *)(param_1 + 0x6c)) < ABS(fVar25)) {
        fVar22 = fVar25;
      }
      *(float *)(param_1 + 0x6c) = fVar22;
      *param_9 = fVar25;
      param_9 = param_9 + 1;
      fVar22 = *(float *)(param_1 + 0x1404);
      fVar25 = *(float *)(param_1 + 0x70);
      if (ABS(*(float *)(param_1 + 0x70)) < ABS(fVar22)) {
        fVar25 = fVar22;
      }
      *(float *)(param_1 + 0x70) = fVar25;
      fVar25 = fVar22 * fVar23 * *(float *)(param_1 + 0x74);
      fVar22 = *(float *)(param_1 + 0x7c);
      if (ABS(*(float *)(param_1 + 0x7c)) < ABS(fVar25)) {
        fVar22 = fVar25;
      }
      *(float *)(param_1 + 0x7c) = fVar22;
      *param_10 = fVar25;
      param_10 = param_10 + 1;
      fVar22 = *(float *)(param_1 + 0x1408);
      fVar25 = *(float *)(param_1 + 0x80);
      if (ABS(*(float *)(param_1 + 0x80)) < ABS(fVar22)) {
        fVar25 = fVar22;
      }
      *(float *)(param_1 + 0x80) = fVar25;
      fVar25 = fVar22 * fVar23 * *(float *)(param_1 + 0x84);
      fVar22 = *(float *)(param_1 + 0x8c);
      if (ABS(*(float *)(param_1 + 0x8c)) < ABS(fVar25)) {
        fVar22 = fVar25;
      }
      *(float *)(param_1 + 0x8c) = fVar22;
      *param_11 = fVar25;
      param_11 = param_11 + 1;
      fVar22 = *(float *)(param_1 + 0x140c);
      fVar25 = *(float *)(param_1 + 0x90);
      if (ABS(*(float *)(param_1 + 0x90)) < ABS(fVar22)) {
        fVar25 = fVar22;
      }
      *(float *)(param_1 + 0x90) = fVar25;
      fVar25 = fVar22 * fVar23 * *(float *)(param_1 + 0x94);
      fVar22 = *(float *)(param_1 + 0x9c);
      if (ABS(*(float *)(param_1 + 0x9c)) < ABS(fVar25)) {
        fVar22 = fVar25;
      }
      *(float *)(param_1 + 0x9c) = fVar22;
      *param_12 = fVar25;
      param_12 = param_12 + 1;
      fVar22 = *(float *)(param_1 + 0x1410);
      fVar25 = *(float *)(param_1 + 0xa0);
      if (ABS(*(float *)(param_1 + 0xa0)) < ABS(fVar22)) {
        fVar25 = fVar22;
      }
      *(float *)(param_1 + 0xa0) = fVar25;
      fVar23 = fVar22 * fVar23 * *(float *)(param_1 + 0xa4);
      fVar22 = *(float *)(param_1 + 0xac);
      if (ABS(*(float *)(param_1 + 0xac)) < ABS(fVar23)) {
        fVar22 = fVar23;
      }
      *(float *)(param_1 + 0xac) = fVar22;
      *param_13 = fVar23;
      param_13 = param_13 + 1;
      lVar9 = lVar21;
    } while (param_14 != 0);
  }
  *(float *)(param_1 + 0x1418) = (float)iVar13;
  *(float *)(param_1 + 0x13f8) = (float)iVar15;
  *(float *)(param_1 + 0x48) = (float)local_res8;
  return;
}



// FUNCTION 143258260 FUN_143258260 body=243 status=ok
// SIG undefined FUN_143258260(void)

void FUN_143258260(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = (ulonglong)*(ushort *)(param_4 + 2);
  lVar1 = *param_4;
  uVar4 = (ulonglong)*(ushort *)(param_3 + 2);
  lVar2 = *param_3;
  FUN_143257730(param_2,lVar2,lVar2 + uVar4 * 8,lVar2 + uVar4 * 4,lVar2 + uVar4 * 0xc,
                uVar4 * 0x10 + lVar2,lVar2 + uVar4 * 0x14,lVar1,uVar3 * 8 + lVar1,uVar3 * 4 + lVar1,
                uVar3 * 0xc + lVar1,(ulonglong)*(ushort *)(param_4 + 2) * 0x10 + lVar1,
                uVar3 * 0x14 + lVar1,*(undefined2 *)((longlong)param_3 + 0x12));
  return;
}



// FUNCTION 143258360 FUN_143258360 body=930 status=ok
// SIG undefined FUN_143258360(void)

void FUN_143258360(longlong *param_1,double *param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  longlong lVar7;
  float *pfVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 local_res8;
  undefined4 uStackX_c;
  
  dVar12 = *param_2;
  dVar10 = param_2[1] - 12.0;
  if (dVar10 <= -36.0) {
    dVar10 = -36.0;
  }
  lVar7 = *(longlong *)(*param_1 + 8);
  if (dVar10 < 0.0) {
    dVar12 = dVar12 + -0.01;
  }
  dVar9 = _guard_xfg_dispatch_icall_nop(10.0,dVar12 * 0.05);
  dVar12 = param_2[2];
  fVar11 = (float)dVar9;
  *(float *)(lVar7 + 0xa4) = fVar11;
  *(float *)(lVar7 + 0x94) = fVar11;
  *(float *)(lVar7 + 0x84) = fVar11;
  *(float *)(lVar7 + 0x74) = fVar11;
  *(float *)(lVar7 + 100) = fVar11;
  *(float *)(lVar7 + 0x54) = fVar11;
  FUN_14325a9a0(lVar7 + 0x142c,600,SUB84(dVar10,0),dVar12);
  puVar2 = (uint *)*param_1;
  iVar6 = FUN_14325ab80(puVar2 + 4,(double)*puVar2);
  dVar10 = (double)FUN_143255540((double)iVar6);
  uVar1 = *(undefined4 *)(param_2 + 4);
  dVar12 = param_2[3];
  puVar3 = (undefined4 *)*param_1;
  *(float *)(*(longlong *)(puVar2 + 2) + 0x34) = (float)dVar10;
  switch(uVar1) {
  case 0:
    dVar10 = 0.0;
    dVar9 = 3.0;
    break;
  case 1:
    dVar9 = 4.0;
    dVar10 = 0.0;
    break;
  case 2:
    dVar9 = 5.0;
    dVar10 = 0.0;
    break;
  case 3:
    dVar9 = 6.0;
    dVar10 = 0.0;
    break;
  case 4:
    dVar10 = 0.0;
    dVar9 = 10.0;
    break;
  case 5:
    dVar9 = 15.0;
    dVar10 = 0.0;
    break;
  default:
    dVar10 = (double)CONCAT44(uStackX_c,local_res8);
    dVar9 = (double)CONCAT44(uStackX_c,local_res8);
  }
  if (dVar12 <= dVar9) {
    dVar9 = dVar12;
  }
  dVar10 = (double)FUN_14324ac30(*puVar3,dVar9 + dVar10);
  puVar4 = (undefined4 *)*param_1;
  *(float *)(*(longlong *)(puVar3 + 2) + 0x30) = (float)dVar10;
  uVar13 = uStackX_c;
  uVar14 = uStackX_c;
  switch(uVar1) {
  case 0:
    uStackX_c = 0x40490000;
    uVar13 = 0x40890000;
    local_res8 = 0;
    uVar14 = 0x40080000;
    break;
  case 1:
    uStackX_c = 0x40440000;
    uVar13 = 0x4082c000;
    local_res8 = 0;
    uVar14 = 0x40100000;
    break;
  case 2:
    uStackX_c = 0x403e0000;
    uVar13 = 0x40790000;
    local_res8 = 0;
    uVar14 = 0x40140000;
    break;
  case 3:
    uStackX_c = 0x40340000;
    uVar13 = 0x40690000;
    local_res8 = 0;
    uVar14 = 0x40180000;
    break;
  case 4:
    uStackX_c = 0x40240000;
    uVar13 = 0x40590000;
    local_res8 = 0;
    uVar14 = 0x40240000;
    break;
  case 5:
    uStackX_c = 0x40140000;
    uVar13 = 0x40490000;
    local_res8 = 0;
    uVar14 = 0x402e0000;
  }
  dVar10 = (double)FUN_14324ac30(*puVar4,CONCAT44(uStackX_c,local_res8));
  dVar12 = dVar12 - (double)CONCAT44(uVar14,local_res8);
  if (dVar12 <= 0.0) {
    dVar12 = 0.0;
  }
  *(float *)(*(longlong *)(puVar4 + 2) + 0x3c) = (float)dVar10;
  dVar12 = (double)FUN_14324ac30(*puVar4,dVar12 + (double)CONCAT44(uVar13,local_res8));
  puVar2 = (uint *)*param_1;
  *(float *)(*(longlong *)(puVar4 + 2) + 0x38) = (float)dVar12;
  iVar6 = FUN_14325ab90(puVar2 + 4,(double)*puVar2);
  puVar5 = (uint *)*param_1;
  *(float *)(*(longlong *)(puVar2 + 2) + 0x2c) = (float)(iVar6 + 1);
  *(undefined4 *)(*(longlong *)(puVar5 + 2) + 0x1c) = 0x441ac000;
  iVar6 = FUN_14325ab90(puVar5 + 4,(double)*puVar5);
  *(float *)(*(longlong *)(puVar5 + 2) + 0x18) = (float)iVar6;
  *(undefined4 *)(*(longlong *)(puVar5 + 2) + 0x40) = 0x4498e000;
  iVar6 = FUN_14325ab60(puVar5 + 4,(double)*puVar5);
  *(float *)(*(longlong *)(puVar5 + 2) + 0x44) = (float)iVar6;
  iVar6 = FUN_14325ab60(puVar5 + 4,(double)*puVar5);
  if (0 < iVar6) {
    pfVar8 = (float *)(*(longlong *)(puVar5 + 2) + 0x131c);
    for (lVar7 = (longlong)iVar6; lVar7 != 0; lVar7 = lVar7 + -1) {
      *pfVar8 = 1.0 / (float)iVar6;
      pfVar8 = pfVar8 + 1;
    }
  }
  return;
}



// FUNCTION 143258740 FUN_143258740 body=6 status=ok
// SIG undefined FUN_143258740(void)

undefined8 FUN_143258740(void)

{
  return 0x2c98;
}



// FUNCTION 143258750 FUN_143258750 body=178 status=ok
// SIG undefined FUN_143258750(void)

undefined8 FUN_143258750(longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined4 *)(**(code **)(*param_3 + 8))(param_3,0x18);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_143249810(puVar1);
    FScale2D::FScale2D(puVar1 + 4,0x3a5ed289,0x39aa64c3);
  }
  *param_1 = (longlong)puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 8;
    *puVar1 = param_4;
    lVar2 = FUN_143246250(param_2,0x2c98);
    *(longlong *)(puVar1 + 2) = lVar2;
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0x2c) = 0x3f800000;
      *(undefined4 *)(*(longlong *)(puVar1 + 2) + 0x28) = 0x44996000;
      return 1;
    }
  }
  return 0x34;
}



// FUNCTION 143258810 FUN_143258810 body=3395 status=ok
// SIG undefined FUN_143258810(void)

void FUN_143258810(longlong param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6,float *param_7,float *param_8,float *param_9,float *param_10,
                  float *param_11,float *param_12,float *param_13,float *param_14,float *param_15,
                  float *param_16,float *param_17,int param_18)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int local_res8;
  float *local_res10;
  float *local_res20;
  longlong local_c8;
  
  iVar18 = (int)*(float *)(param_1 + 0x166c);
  iVar14 = (int)*(float *)(param_1 + 0x1694);
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0xb4) = 0;
  fVar1 = *(float *)(param_1 + 0x34);
  *(undefined8 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  fVar2 = *(float *)(param_1 + 0x24);
  local_res8 = (int)*(float *)(param_1 + 0x50);
  iVar6 = (int)*(float *)(param_1 + 0x48);
  iVar20 = (int)*(float *)(param_1 + 0x20);
  fVar3 = *(float *)(param_1 + 0x28);
  iVar19 = (int)*(float *)(param_1 + 0x4c);
  if (param_18 != 0) {
    local_c8 = (longlong)iVar18;
    iVar7 = iVar6 + 1;
    lVar9 = (longlong)local_res8;
    local_res10 = param_2;
    local_res20 = param_4;
    do {
      iVar12 = iVar18 + 1;
      pfVar11 = (float *)(param_1 + 0x1650);
      fVar23 = *param_3 * 0.25118864;
      param_3 = param_3 + 1;
      param_18 = param_18 + -1;
      fVar22 = *local_res10;
      local_res10 = local_res10 + 1;
      fVar22 = fVar22 * 0.25118864;
      iVar17 = (int)fVar2 + iVar18;
      if (1.0 <= fVar23) {
        fVar23 = 1.0;
      }
      if (1.0 <= fVar22) {
        fVar22 = 1.0;
      }
      if (fVar23 <= -1.0) {
        fVar23 = -1.0;
      }
      if (fVar22 <= -1.0) {
        fVar22 = -1.0;
      }
      *(float *)(param_1 + 0x164c) = fVar22;
      *(float *)(param_1 + 0x1650) = fVar23;
      fVar22 = *local_res20;
      local_res20 = local_res20 + 1;
      fVar22 = fVar22 * 0.25118864;
      fVar23 = *param_5;
      param_5 = param_5 + 1;
      fVar23 = fVar23 * 0.25118864;
      if (1.0 <= fVar22) {
        fVar22 = 1.0;
      }
      if (1.0 <= fVar23) {
        fVar23 = 1.0;
      }
      if (fVar22 <= -1.0) {
        fVar22 = -1.0;
      }
      if (fVar23 <= -1.0) {
        fVar23 = -1.0;
      }
      *(float *)(param_1 + 0x1654) = fVar22;
      *(float *)(param_1 + 0x1658) = fVar23;
      fVar22 = *param_6;
      param_6 = param_6 + 1;
      fVar22 = fVar22 * 0.25118864;
      fVar23 = *param_7;
      param_7 = param_7 + 1;
      fVar23 = fVar23 * 0.25118864;
      if (1.0 <= fVar22) {
        fVar22 = 1.0;
      }
      if (1.0 <= fVar23) {
        fVar23 = 1.0;
      }
      if (fVar22 <= -1.0) {
        fVar22 = -1.0;
      }
      if (fVar23 <= -1.0) {
        fVar23 = -1.0;
      }
      *(float *)(param_1 + 0x165c) = fVar22;
      *(float *)(param_1 + 0x1660) = fVar23;
      fVar22 = *param_8;
      param_8 = param_8 + 1;
      fVar22 = fVar22 * 0.25118864;
      fVar23 = *param_9;
      param_9 = param_9 + 1;
      fVar23 = fVar23 * 0.25118864;
      if (1.0 <= fVar22) {
        fVar22 = 1.0;
      }
      if (1.0 <= fVar23) {
        fVar23 = 1.0;
      }
      if (fVar22 <= -1.0) {
        fVar22 = -1.0;
      }
      if (fVar23 <= -1.0) {
        fVar23 = -1.0;
      }
      *(float *)(param_1 + 0x1664) = fVar22;
      *(float *)(param_1 + 0x1668) = fVar23;
      fVar22 = *(float *)(param_1 + 0x20);
      lVar13 = (int)fVar2 + local_c8;
      lVar15 = (int)fVar3 + local_c8;
      iVar18 = 0;
      if (iVar12 < iVar20) {
        iVar18 = iVar12;
      }
      uVar4 = *(undefined4 *)(param_1 + lVar13 * 4);
      lVar21 = local_c8 + 1;
      *(undefined4 *)(param_1 + lVar13 * 4) = *(undefined4 *)(param_1 + 0x164c);
      uVar5 = *(undefined4 *)(param_1 + 0x164c + lVar13 * 4);
      *(float *)(param_1 + 0x164c + lVar13 * 4) = *pfVar11;
      local_c8 = 0;
      if (iVar12 < iVar20) {
        local_c8 = lVar21;
      }
      *(undefined4 *)(param_1 + 0x1670) = uVar4;
      *(undefined4 *)(param_1 + 0x1674) = uVar5;
      iVar12 = (int)fVar22;
      lVar13 = (longlong)(iVar12 + iVar17);
      uVar4 = *(undefined4 *)(param_1 + 4 + lVar13 * 4);
      *(undefined4 *)(param_1 + 4 + lVar13 * 4) = *(undefined4 *)(param_1 + 0x1654);
      uVar5 = *(undefined4 *)(param_1 + 0x1650 + lVar13 * 4);
      *(undefined4 *)(param_1 + 0x1650 + lVar13 * 4) = *(undefined4 *)(param_1 + 0x1658);
      iVar17 = iVar17 + iVar12 * 2;
      *(undefined4 *)(param_1 + 0x1678) = uVar4;
      *(undefined4 *)(param_1 + 0x167c) = uVar5;
      lVar13 = (longlong)iVar17;
      uVar4 = *(undefined4 *)(param_1 + 8 + lVar13 * 4);
      *(undefined4 *)(param_1 + 8 + lVar13 * 4) = *(undefined4 *)(param_1 + 0x165c);
      uVar5 = *(undefined4 *)(param_1 + 0x1654 + lVar13 * 4);
      *(undefined4 *)(param_1 + 0x1654 + lVar13 * 4) = *(undefined4 *)(param_1 + 0x1660);
      *(undefined4 *)(param_1 + 0x1680) = uVar4;
      *(undefined4 *)(param_1 + 0x1684) = uVar5;
      lVar13 = (longlong)(iVar12 + iVar17);
      uVar4 = *(undefined4 *)(param_1 + 0xc + lVar13 * 4);
      *(undefined4 *)(param_1 + 0xc + lVar13 * 4) = *(undefined4 *)(param_1 + 0x1664);
      uVar5 = *(undefined4 *)(param_1 + 0x1658 + lVar13 * 4);
      *(undefined4 *)(param_1 + 0x1658 + lVar13 * 4) = *(undefined4 *)(param_1 + 0x1668);
      *(undefined4 *)(param_1 + 0x1688) = uVar4;
      *(undefined4 *)(param_1 + 0x168c) = uVar5;
      fVar22 = *pfVar11;
      if (ABS(*pfVar11) < ABS(*(float *)(param_1 + 0x164c))) {
        fVar22 = *(float *)(param_1 + 0x164c);
      }
      if (ABS(fVar22) < ABS(*(float *)(param_1 + 0x1654))) {
        fVar22 = *(float *)(param_1 + 0x1654);
      }
      if (ABS(fVar22) < ABS(*(float *)(param_1 + 0x1658))) {
        fVar22 = *(float *)(param_1 + 0x1658);
      }
      if (ABS(fVar22) < ABS(*(float *)(param_1 + 0x165c))) {
        fVar22 = *(float *)(param_1 + 0x165c);
      }
      if (ABS(fVar22) < ABS(*(float *)(param_1 + 0x1660))) {
        fVar22 = *(float *)(param_1 + 0x1660);
      }
      if (ABS(fVar22) < ABS(*(float *)(param_1 + 0x1664))) {
        fVar22 = *(float *)(param_1 + 0x1664);
      }
      if (ABS(fVar22) < ABS(*(float *)(param_1 + 0x1668))) {
        fVar22 = *(float *)(param_1 + 0x1668);
      }
      fVar23 = *(float *)(param_1 + 0x1674);
      if (ABS(*(float *)(param_1 + 0x1674)) < ABS(*(float *)(param_1 + 0x1670))) {
        fVar23 = *(float *)(param_1 + 0x1670);
      }
      if (ABS(fVar23) < ABS(*(float *)(param_1 + 0x1678))) {
        fVar23 = *(float *)(param_1 + 0x1678);
      }
      if (ABS(fVar23) < ABS(*(float *)(param_1 + 0x167c))) {
        fVar23 = *(float *)(param_1 + 0x167c);
      }
      if (ABS(fVar23) < ABS(*(float *)(param_1 + 0x1680))) {
        fVar23 = *(float *)(param_1 + 0x1680);
      }
      if (ABS(fVar23) < ABS(*(float *)(param_1 + 0x1684))) {
        fVar23 = *(float *)(param_1 + 0x1684);
      }
      if (ABS(fVar23) < ABS(*(float *)(param_1 + 0x1688))) {
        fVar23 = *(float *)(param_1 + 0x1688);
      }
      if (ABS(fVar23) < ABS(*(float *)(param_1 + 0x168c))) {
        fVar23 = *(float *)(param_1 + 0x168c);
      }
      iVar12 = 0;
      *(float *)(param_1 + 0x1690) = fVar23;
      *(float *)(param_1 + 0x164c + lVar15 * 4) = fVar22;
      fVar22 = 0.0;
      pfVar10 = (float *)(param_1 + ((longlong)(int)fVar3 + 0x593) * 4);
      if (3 < iVar20) {
        uVar8 = (iVar20 - 4U >> 2) + 1;
        uVar16 = (ulonglong)uVar8;
        iVar12 = uVar8 * 4;
        do {
          if (ABS(fVar22) < ABS(*pfVar10)) {
            fVar22 = *pfVar10;
          }
          if (ABS(fVar22) < ABS(pfVar10[1])) {
            fVar22 = pfVar10[1];
          }
          if (ABS(fVar22) < ABS(pfVar10[2])) {
            fVar22 = pfVar10[2];
          }
          if (ABS(fVar22) < ABS(pfVar10[3])) {
            fVar22 = pfVar10[3];
          }
          pfVar10 = pfVar10 + 4;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      if (iVar12 < iVar20) {
        uVar16 = (ulonglong)(uint)(iVar20 - iVar12);
        do {
          if (ABS(fVar22) < ABS(*pfVar10)) {
            fVar22 = *pfVar10;
          }
          pfVar10 = pfVar10 + 1;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      fVar23 = ABS(*pfVar11);
      if (ABS(*pfVar11) <= ABS(*(float *)(param_1 + 0x164c))) {
        fVar23 = ABS(*(float *)(param_1 + 0x164c));
      }
      fVar25 = ABS(*(float *)(param_1 + 0x1654));
      if (ABS(*(float *)(param_1 + 0x1654)) <= fVar23) {
        fVar25 = fVar23;
      }
      fVar23 = ABS(*(float *)(param_1 + 0x1658));
      if (ABS(*(float *)(param_1 + 0x1658)) <= fVar25) {
        fVar23 = fVar25;
      }
      fVar25 = ABS(*(float *)(param_1 + 0x165c));
      if (ABS(*(float *)(param_1 + 0x165c)) <= fVar23) {
        fVar25 = fVar23;
      }
      fVar23 = ABS(*(float *)(param_1 + 0x1660));
      if (ABS(*(float *)(param_1 + 0x1660)) <= fVar25) {
        fVar23 = fVar25;
      }
      fVar25 = ABS(*(float *)(param_1 + 0x1664));
      if (ABS(*(float *)(param_1 + 0x1664)) <= fVar23) {
        fVar25 = fVar23;
      }
      fVar23 = ABS(*(float *)(param_1 + 0x1668));
      if (ABS(*(float *)(param_1 + 0x1668)) <= fVar25) {
        fVar23 = fVar25;
      }
      if (1.0 <= fVar23) {
        fVar23 = 1.0;
      }
      if (ABS(*(float *)(param_1 + 0x2c)) <= fVar23) {
        fVar23 = *(float *)(param_1 + 0x2c);
      }
      fVar24 = ABS(*(float *)(param_1 + 0x1698));
      fVar25 = *(float *)(param_1 + 0x1698);
      if (fVar24 < ABS(fVar23)) {
        fVar25 = fVar23;
      }
      *(float *)(param_1 + 0x1698) = ABS(fVar25);
      iVar12 = (int)fVar1;
      if (ABS(fVar23) <= fVar24) {
        iVar12 = iVar14;
      }
      fVar23 = ABS(fVar25) - *(float *)(param_1 + 0x30);
      if (ABS(fVar23) < ABS(*(float *)(param_1 + 0x169c))) {
        fVar23 = *(float *)(param_1 + 0x169c);
      }
      *(float *)(param_1 + 0x169c) = fVar23;
      fVar25 = *(float *)(param_1 + 0x3c);
      fVar24 = 0.0;
      iVar14 = 0;
      if (-1 < iVar12 + -1) {
        iVar14 = iVar12 + -1;
      }
      if (iVar14 < 1) {
        fVar24 = *(float *)(param_1 + 0x38);
        fVar25 = 0.0;
      }
      fVar22 = ABS(fVar22);
      fVar25 = fVar23 * fVar25 + *(float *)(param_1 + 0x30) +
               (fVar22 - *(float *)(param_1 + 0x30)) * fVar24;
      if (ABS(*(float *)(param_1 + 0x1698)) <= ABS(fVar25)) {
        fVar25 = *(float *)(param_1 + 0x1698);
      }
      if (iVar14 < 1) {
        fVar23 = 0.0;
      }
      *(float *)(param_1 + 0x169c) = fVar23;
      fVar23 = *(float *)(param_1 + 0x1690);
      if (ABS(fVar25) < ABS(fVar23)) {
        fVar25 = fVar23;
      }
      *(float *)(param_1 + 0x30) = ABS(fVar25);
      fVar24 = *(float *)(param_1 + 0x1698);
      if (ABS(fVar25) < ABS(fVar23)) {
        fVar24 = fVar23;
      }
      *(float *)(param_1 + 0x1698) = ABS(fVar24);
      fVar23 = *(float *)(param_1 + 0x16a0);
      fVar25 = *(float *)(param_1 + 0x40);
      if (ABS(fVar23) < fVar22) {
        fVar25 = *(float *)(param_1 + 0x44);
      }
      fVar23 = (fVar22 - fVar23) * fVar25 + fVar23;
      *(float *)(param_1 + 0x16a0) = fVar23;
      fVar22 = *(float *)(param_1 + 0x30);
      if (*(float *)(param_1 + 0x30) <= fVar23) {
        fVar22 = fVar23;
      }
      *(float *)(param_1 + 0x30) = fVar22;
      fVar23 = *(float *)(param_1 + 0x1698);
      if (iVar14 < 1) {
        fVar23 = fVar22;
      }
      lVar13 = lVar9 + 1;
      iVar12 = local_res8 + 1;
      *(float *)(param_1 + 0x1698) = fVar23;
      fVar23 = 0.0;
      lVar15 = iVar6 + lVar9;
      *(float *)(param_1 + 0x164c + lVar15 * 4) = fVar22;
      fVar22 = *(float *)(param_1 + (longlong)iVar6 * 4);
      local_res8 = 0;
      if (lVar13 < iVar19) {
        local_res8 = iVar12;
      }
      lVar21 = 0;
      if (lVar13 < iVar19) {
        lVar21 = lVar13;
      }
      iVar12 = 0;
      fVar25 = *(float *)(param_1 + 0x164c + (lVar15 - lVar9) * 4);
      iVar17 = iVar7;
      if (3 < iVar19) {
        pfVar11 = (float *)(param_1 + ((longlong)iVar7 + 0x595) * 4);
        uVar8 = (iVar19 - 4U >> 2) + 1;
        uVar16 = (ulonglong)uVar8;
        iVar12 = uVar8 * 4;
        iVar17 = iVar7 + iVar12;
        do {
          fVar23 = fVar23 + (fVar25 + pfVar11[-2] + pfVar11[-1] + *pfVar11) * fVar22;
          fVar25 = pfVar11[1];
          pfVar11 = pfVar11 + 4;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      if (iVar12 < iVar19) {
        uVar16 = (ulonglong)(uint)(iVar19 - iVar12);
        pfVar11 = (float *)(param_1 + ((longlong)iVar17 + 0x593) * 4);
        do {
          fVar23 = fVar23 + fVar25 * fVar22;
          fVar25 = *pfVar11;
          pfVar11 = pfVar11 + 1;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      fVar22 = (fVar23 + fVar23) - fVar23 * fVar23;
      fVar22 = ((fVar22 + fVar22) - fVar22 * fVar22) * 599.0;
      iVar12 = (int)fVar22;
      lVar9 = (longlong)iVar12;
      fVar23 = (*(float *)(param_1 + 0x16ac + lVar9 * 4) - *(float *)(param_1 + 0x16a8 + lVar9 * 4))
               * (fVar22 - (float)iVar12) + *(float *)(param_1 + 0x16a8 + lVar9 * 4);
      fVar22 = fVar23;
      if (ABS(fVar23) < ABS(*(float *)(param_1 + 0x54))) {
        fVar22 = *(float *)(param_1 + 0x54);
      }
      *(float *)(param_1 + 0x54) = fVar22;
      fVar22 = *(float *)(param_1 + 0x1670);
      fVar25 = *(float *)(param_1 + 0x58);
      if (ABS(*(float *)(param_1 + 0x58)) < ABS(fVar22)) {
        fVar25 = fVar22;
      }
      *(float *)(param_1 + 0x58) = fVar25;
      fVar25 = fVar22 * fVar23 * *(float *)(param_1 + 0x5c);
      fVar22 = *(float *)(param_1 + 100);
      if (ABS(*(float *)(param_1 + 100)) < ABS(fVar25)) {
        fVar22 = fVar25;
      }
      *(float *)(param_1 + 100) = fVar22;
      *param_10 = fVar25;
      param_10 = param_10 + 1;
      fVar22 = *(float *)(param_1 + 0x1674);
      fVar25 = *(float *)(param_1 + 0x68);
      if (ABS(*(float *)(param_1 + 0x68)) < ABS(fVar22)) {
        fVar25 = fVar22;
      }
      *(float *)(param_1 + 0x68) = fVar25;
      fVar25 = fVar22 * fVar23 * *(float *)(param_1 + 0x6c);
      fVar22 = *(float *)(param_1 + 0x74);
      if (ABS(*(float *)(param_1 + 0x74)) < ABS(fVar25)) {
        fVar22 = fVar25;
      }
      *(float *)(param_1 + 0x74) = fVar22;
      *param_11 = fVar25;
      param_11 = param_11 + 1;
      fVar22 = *(float *)(param_1 + 0x1678);
      fVar25 = *(float *)(param_1 + 0x78);
      if (ABS(*(float *)(param_1 + 0x78)) < ABS(fVar22)) {
        fVar25 = fVar22;
      }
      *(float *)(param_1 + 0x78) = fVar25;
      fVar25 = fVar22 * fVar23 * *(float *)(param_1 + 0x7c);
      fVar22 = *(float *)(param_1 + 0x84);
      if (ABS(*(float *)(param_1 + 0x84)) < ABS(fVar25)) {
        fVar22 = fVar25;
      }
      *(float *)(param_1 + 0x84) = fVar22;
      *param_12 = fVar25;
      param_12 = param_12 + 1;
      fVar22 = *(float *)(param_1 + 0x167c);
      fVar25 = *(float *)(param_1 + 0x88);
      if (ABS(*(float *)(param_1 + 0x88)) < ABS(fVar22)) {
        fVar25 = fVar22;
      }
      *(float *)(param_1 + 0x88) = fVar25;
      fVar25 = fVar22 * fVar23 * *(float *)(param_1 + 0x8c);
      fVar22 = *(float *)(param_1 + 0x94);
      if (ABS(*(float *)(param_1 + 0x94)) < ABS(fVar25)) {
        fVar22 = fVar25;
      }
      *(float *)(param_1 + 0x94) = fVar22;
      *param_13 = fVar25;
      param_13 = param_13 + 1;
      fVar22 = *(float *)(param_1 + 0x1680);
      fVar25 = *(float *)(param_1 + 0x98);
      if (ABS(*(float *)(param_1 + 0x98)) < ABS(fVar22)) {
        fVar25 = fVar22;
      }
      *(float *)(param_1 + 0x98) = fVar25;
      fVar25 = fVar22 * fVar23 * *(float *)(param_1 + 0x9c);
      fVar22 = *(float *)(param_1 + 0xa4);
      if (ABS(*(float *)(param_1 + 0xa4)) < ABS(fVar25)) {
        fVar22 = fVar25;
      }
      *(float *)(param_1 + 0xa4) = fVar22;
      *param_14 = fVar25;
      param_14 = param_14 + 1;
      fVar22 = *(float *)(param_1 + 0x1684);
      fVar25 = *(float *)(param_1 + 0xa8);
      if (ABS(*(float *)(param_1 + 0xa8)) < ABS(fVar22)) {
        fVar25 = fVar22;
      }
      *(float *)(param_1 + 0xa8) = fVar25;
      fVar25 = fVar22 * fVar23 * *(float *)(param_1 + 0xac);
      fVar22 = *(float *)(param_1 + 0xb4);
      if (ABS(*(float *)(param_1 + 0xb4)) < ABS(fVar25)) {
        fVar22 = fVar25;
      }
      *(float *)(param_1 + 0xb4) = fVar22;
      *param_15 = fVar25;
      param_15 = param_15 + 1;
      fVar22 = *(float *)(param_1 + 0x1688);
      fVar25 = *(float *)(param_1 + 0xb8);
      if (ABS(*(float *)(param_1 + 0xb8)) < ABS(fVar22)) {
        fVar25 = fVar22;
      }
      *(float *)(param_1 + 0xb8) = fVar25;
      fVar25 = fVar22 * fVar23 * *(float *)(param_1 + 0xbc);
      fVar22 = *(float *)(param_1 + 0xc4);
      if (ABS(*(float *)(param_1 + 0xc4)) < ABS(fVar25)) {
        fVar22 = fVar25;
      }
      *(float *)(param_1 + 0xc4) = fVar22;
      *param_16 = fVar25;
      param_16 = param_16 + 1;
      fVar22 = *(float *)(param_1 + 0x168c);
      fVar25 = *(float *)(param_1 + 200);
      if (ABS(*(float *)(param_1 + 200)) < ABS(fVar22)) {
        fVar25 = fVar22;
      }
      *(float *)(param_1 + 200) = fVar25;
      fVar23 = fVar22 * fVar23 * *(float *)(param_1 + 0xcc);
      fVar22 = *(float *)(param_1 + 0xd4);
      if (ABS(*(float *)(param_1 + 0xd4)) < ABS(fVar23)) {
        fVar22 = fVar23;
      }
      *(float *)(param_1 + 0xd4) = fVar22;
      *param_17 = fVar23;
      param_17 = param_17 + 1;
      lVar9 = lVar21;
    } while (param_18 != 0);
  }
  *(float *)(param_1 + 0x1694) = (float)iVar14;
  *(float *)(param_1 + 0x166c) = (float)iVar18;
  *(float *)(param_1 + 0x50) = (float)local_res8;
  return;
}



// FUNCTION 143259560 FUN_143259560 body=338 status=ok
// SIG undefined FUN_143259560(void)

void FUN_143259560(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  lVar1 = *param_4;
  uVar3 = (ulonglong)*(ushort *)(param_4 + 2);
  uVar4 = (ulonglong)*(ushort *)(param_3 + 2);
  lVar2 = *param_3;
  FUN_143258810(param_2,*param_3,*param_3 + (ulonglong)*(ushort *)(param_3 + 2) * 8,
                *param_3 + uVar4 * 4,lVar2 + uVar4 * 0xc,
                (ulonglong)*(ushort *)(param_3 + 2) * 0x10 + lVar2,lVar2 + uVar4 * 0x14,
                lVar2 + uVar4 * 0x18,uVar4 * 0x1c + lVar2,lVar1,lVar1 + uVar3 * 8,lVar1 + uVar3 * 4,
                lVar1 + uVar3 * 0xc,(ulonglong)*(ushort *)(param_4 + 2) * 0x10 + lVar1,
                lVar1 + uVar3 * 0x14,lVar1 + uVar3 * 0x18,uVar3 * 0x1c + lVar1,
                *(undefined2 *)((longlong)param_3 + 0x12));
  return;
}



// FUNCTION 1432596c0 FUN_1432596c0 body=119 status=ok
// SIG undefined FUN_1432596c0(void)

void FUN_1432596c0(longlong param_1,double param_2,double param_3)

{
  longlong lVar1;
  double dVar2;
  float fVar3;
  
  if (param_3 < 0.0) {
    param_2 = param_2 + -0.01;
  }
  dVar2 = _guard_xfg_dispatch_icall_nop(10.0,param_2 * 0.05);
  lVar1 = *(longlong *)(param_1 + 8);
  fVar3 = (float)dVar2;
  *(float *)(lVar1 + 0xcc) = fVar3;
  *(float *)(lVar1 + 0xbc) = fVar3;
  *(float *)(lVar1 + 0xac) = fVar3;
  *(float *)(lVar1 + 0x9c) = fVar3;
  *(float *)(lVar1 + 0x8c) = fVar3;
  *(float *)(lVar1 + 0x7c) = fVar3;
  *(float *)(lVar1 + 0x6c) = fVar3;
  *(float *)(lVar1 + 0x5c) = fVar3;
  return;
}



// FUNCTION 143259740 FUN_143259740 body=879 status=ok
// SIG undefined FUN_143259740(void)

void FUN_143259740(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  longlong lVar6;
  float *pfVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 local_res8;
  undefined4 uStackX_c;
  
  uVar11 = SUB84((double)param_2[1] - 12.0,0);
  if ((double)param_2[1] - 12.0 <= -36.0) {
    uVar11 = 0;
  }
  FUN_1432596c0(*param_1,*param_2,uVar11);
  FUN_1432596c0(*param_1,*param_2,uVar11);
  FUN_14325a9a0(*(longlong *)(*param_1 + 8) + 0x16a8,600,uVar11,param_2[2]);
  puVar1 = (uint *)*param_1;
  iVar5 = FUN_14325ab80(puVar1 + 4,(double)*puVar1);
  dVar8 = (double)FUN_143255540((double)iVar5);
  uVar11 = *(undefined4 *)(param_2 + 4);
  dVar9 = (double)param_2[3];
  puVar2 = (undefined4 *)*param_1;
  *(float *)(*(longlong *)(puVar1 + 2) + 0x3c) = (float)dVar8;
  switch(uVar11) {
  case 0:
    dVar8 = 0.0;
    dVar10 = 3.0;
    break;
  case 1:
    dVar10 = 4.0;
    dVar8 = 0.0;
    break;
  case 2:
    dVar10 = 5.0;
    dVar8 = 0.0;
    break;
  case 3:
    dVar10 = 6.0;
    dVar8 = 0.0;
    break;
  case 4:
    dVar8 = 0.0;
    dVar10 = 10.0;
    break;
  case 5:
    dVar10 = 15.0;
    dVar8 = 0.0;
    break;
  default:
    dVar8 = (double)CONCAT44(uStackX_c,local_res8);
    dVar10 = (double)CONCAT44(uStackX_c,local_res8);
  }
  if (dVar9 <= dVar10) {
    dVar10 = dVar9;
  }
  dVar8 = (double)FUN_14324ac30(*puVar2,dVar10 + dVar8);
  puVar3 = (undefined4 *)*param_1;
  *(float *)(*(longlong *)(puVar2 + 2) + 0x38) = (float)dVar8;
  uVar12 = uStackX_c;
  uVar13 = uStackX_c;
  switch(uVar11) {
  case 0:
    uStackX_c = 0x40490000;
    uVar12 = 0x40890000;
    local_res8 = 0;
    uVar13 = 0x40080000;
    break;
  case 1:
    uStackX_c = 0x40440000;
    uVar12 = 0x4082c000;
    local_res8 = 0;
    uVar13 = 0x40100000;
    break;
  case 2:
    uStackX_c = 0x403e0000;
    uVar12 = 0x40790000;
    local_res8 = 0;
    uVar13 = 0x40140000;
    break;
  case 3:
    uStackX_c = 0x40340000;
    uVar12 = 0x40690000;
    local_res8 = 0;
    uVar13 = 0x40180000;
    break;
  case 4:
    uStackX_c = 0x40240000;
    uVar12 = 0x40590000;
    local_res8 = 0;
    uVar13 = 0x40240000;
    break;
  case 5:
    uStackX_c = 0x40140000;
    uVar12 = 0x40490000;
    local_res8 = 0;
    uVar13 = 0x402e0000;
  }
  dVar8 = (double)FUN_14324ac30(*puVar3,CONCAT44(uStackX_c,local_res8));
  dVar9 = dVar9 - (double)CONCAT44(uVar13,local_res8);
  if (dVar9 <= 0.0) {
    dVar9 = 0.0;
  }
  *(float *)(*(longlong *)(puVar3 + 2) + 0x44) = (float)dVar8;
  dVar9 = (double)FUN_14324ac30(*puVar3,dVar9 + (double)CONCAT44(uVar12,local_res8));
  puVar1 = (uint *)*param_1;
  *(float *)(*(longlong *)(puVar3 + 2) + 0x40) = (float)dVar9;
  iVar5 = FUN_14325ab90(puVar1 + 4,(double)*puVar1);
  puVar4 = (uint *)*param_1;
  *(float *)(*(longlong *)(puVar1 + 2) + 0x34) = (float)(iVar5 + 1);
  *(undefined4 *)(*(longlong *)(puVar4 + 2) + 0x24) = 0x441bc000;
  iVar5 = FUN_14325ab90(puVar4 + 4,(double)*puVar4);
  *(float *)(*(longlong *)(puVar4 + 2) + 0x20) = (float)iVar5;
  *(undefined4 *)(*(longlong *)(puVar4 + 2) + 0x48) = 0x44ac4000;
  iVar5 = FUN_14325ab60(puVar4 + 4,(double)*puVar4);
  *(float *)(*(longlong *)(puVar4 + 2) + 0x4c) = (float)iVar5;
  iVar5 = FUN_14325ab60(puVar4 + 4,(double)*puVar4);
  if (0 < iVar5) {
    pfVar7 = (float *)(*(longlong *)(puVar4 + 2) + 0x1588);
    for (lVar6 = (longlong)iVar5; lVar6 != 0; lVar6 = lVar6 + -1) {
      *pfVar7 = 1.0 / (float)iVar5;
      pfVar7 = pfVar7 + 1;
    }
  }
  return;
}



// FUNCTION 143259ae0 FUN_143259ae0 body=6 status=ok
// SIG undefined FUN_143259ae0(void)

undefined8 FUN_143259ae0(void)

{
  return 0x22610;
}



// FUNCTION 143259af0 FUN_143259af0 body=178 status=ok
// SIG undefined FUN_143259af0(void)

undefined8 FUN_143259af0(longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined4 *)(**(code **)(*param_3 + 8))(param_3,0x18);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_143249810(puVar1);
    FScale2D::FScale2D(puVar1 + 4,0x3a5ed289,0x39aa64c3);
  }
  *param_1 = (longlong)puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 2;
    *puVar1 = param_4;
    lVar2 = FUN_143246250(param_2,0x22610);
    *(longlong *)(puVar1 + 2) = lVar2;
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0x14) = 0x3f800000;
      *(undefined4 *)(*(longlong *)(puVar1 + 2) + 0x10) = 0x443e8000;
      return 1;
    }
  }
  return 0x34;
}



// FUNCTION 143259bb0 FUN_143259bb0 body=2486 status=ok
// SIG undefined FUN_143259bb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143259bb0(longlong param_1,longlong *param_2,longlong *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  float *pfVar14;
  uint uVar15;
  longlong lVar16;
  longlong *plVar17;
  uint uVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  int local_res8;
  int local_res20;
  longlong local_18b8;
  float local_18a8 [256];
  float local_14a8 [256];
  longlong local_10a8 [256];
  longlong alStack_8a8 [270];
  
  uVar21 = (ulonglong)*(byte *)(param_2 + 1);
  uVar11 = 0;
  if (*(byte *)(param_2 + 1) != 0) {
    uVar4 = *(ushort *)(param_3 + 2);
    uVar5 = *(ushort *)(param_2 + 2);
    lVar12 = *param_3;
    lVar16 = *param_2;
    uVar10 = uVar11;
    do {
      *(longlong *)((longlong)local_10a8 + uVar10) = lVar16;
      lVar16 = lVar16 + (ulonglong)uVar5 * 4;
      *(longlong *)((longlong)alStack_8a8 + uVar10) = lVar12;
      uVar10 = uVar10 + 8;
      lVar12 = lVar12 + (ulonglong)uVar4 * 4;
      uVar21 = uVar21 - 1;
    } while (uVar21 != 0);
  }
  local_res20 = (int)*(float *)(param_1 + 0xf10);
  fVar1 = *(float *)(param_1 + 0x1c);
  local_res8 = (int)*(float *)(param_1 + 0x38);
  iVar23 = (int)*(float *)(param_1 + 0xf20);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  uVar22 = *(uint *)(param_2 + 1);
  uVar18 = (uint)*(float *)(param_1 + 8);
  fVar2 = *(float *)(param_1 + 0x10);
  iVar20 = (int)*(float *)(param_1 + 0x30);
  uVar24 = (uint)*(float *)(param_1 + 0x34);
  if ((char)uVar22 != '\0') {
    do {
      uVar15 = (int)uVar11 + 1;
      *(undefined4 *)(param_1 + 0x21e10 + uVar11 * 4) = 0;
      *(undefined4 *)(param_1 + 0x22210 + uVar11 * 4) = 0;
      uVar22 = *(uint *)(param_2 + 1);
      uVar11 = (ulonglong)uVar15;
    } while (uVar15 < (uVar22 & 0xff));
  }
  if ((byte)uVar22 < 2) {
    local_18a8[1] = 0.0;
  }
  if (param_4 != 0) {
    iVar8 = iVar20 + 1;
    lVar12 = (longlong)local_res20;
    local_18b8 = (longlong)local_res8;
    do {
      param_4 = param_4 + -1;
      uVar22 = uVar22 & 0xff;
      uVar11 = 0;
      if (3 < uVar22) {
        uVar15 = (uVar22 - 4 >> 2) + 1;
        uVar21 = (ulonglong)uVar15;
        uVar11 = (ulonglong)(uVar15 * 4);
        plVar17 = local_10a8 + 1;
        pfVar14 = local_18a8 + 1;
        do {
          pfVar6 = (float *)*plVar17;
          fVar25 = *(float *)plVar17[-1] * 0.25118864;
          plVar17[-1] = (longlong)((float *)plVar17[-1] + 1);
          *plVar17 = (longlong)(pfVar6 + 1);
          if (1.0 <= fVar25) {
            fVar25 = 1.0;
          }
          if (fVar25 <= -1.0) {
            fVar25 = -1.0;
          }
          pfVar14[-1] = fVar25;
          pfVar7 = (float *)plVar17[1];
          fVar25 = *pfVar6 * 0.25118864;
          plVar17[1] = (longlong)(pfVar7 + 1);
          if (1.0 <= fVar25) {
            fVar25 = 1.0;
          }
          if (fVar25 <= -1.0) {
            fVar25 = -1.0;
          }
          *pfVar14 = fVar25;
          pfVar6 = (float *)plVar17[2];
          fVar25 = *pfVar7 * 0.25118864;
          plVar17[2] = (longlong)(pfVar6 + 1);
          if (1.0 <= fVar25) {
            fVar25 = 1.0;
          }
          if (fVar25 <= -1.0) {
            fVar25 = -1.0;
          }
          pfVar14[1] = fVar25;
          fVar25 = *pfVar6 * 0.25118864;
          if (1.0 <= fVar25) {
            fVar25 = 1.0;
          }
          if (fVar25 <= -1.0) {
            fVar25 = -1.0;
          }
          pfVar14[2] = fVar25;
          uVar21 = uVar21 - 1;
          plVar17 = plVar17 + 4;
          pfVar14 = pfVar14 + 4;
        } while (uVar21 != 0);
      }
      if ((uint)uVar11 < uVar22) {
        uVar21 = (ulonglong)(uVar22 - (uint)uVar11);
        plVar17 = local_10a8 + uVar11;
        pfVar14 = local_18a8 + uVar11;
        do {
          fVar25 = *(float *)*plVar17 * 0.25118864;
          *plVar17 = (longlong)((float *)*plVar17 + 1);
          if (1.0 <= fVar25) {
            fVar25 = 1.0;
          }
          if (fVar25 <= -1.0) {
            fVar25 = -1.0;
          }
          *pfVar14 = fVar25;
          uVar21 = uVar21 - 1;
          plVar17 = plVar17 + 1;
          pfVar14 = pfVar14 + 1;
        } while (uVar21 != 0);
      }
      iVar9 = local_res20 + 1;
      local_res20 = 0;
      if (iVar9 < (int)uVar18) {
        local_res20 = iVar9;
      }
      uVar15 = *(uint *)(param_2 + 1);
      lVar16 = 0;
      if (iVar9 < (int)uVar18) {
        lVar16 = lVar12 + 1;
      }
      uVar11 = 0;
      if (uVar22 != 0) {
        do {
          lVar13 = uVar11 * 0x80 + lVar12;
          fVar25 = *(float *)(param_1 + 0x1e10 + lVar13 * 4);
          *(float *)(param_1 + 0x1e10 + lVar13 * 4) = local_18a8[uVar11];
          uVar15 = *(uint *)(param_2 + 1);
          local_14a8[uVar11] = fVar25;
          uVar22 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar22;
        } while (uVar22 < (uVar15 & 0xff));
      }
      uVar15 = uVar15 & 0xff;
      uVar11 = 0;
      fVar25 = 0.0;
      if (3 < uVar15) {
        uVar22 = (uVar15 - 4 >> 2) + 1;
        uVar21 = (ulonglong)uVar22;
        uVar11 = (ulonglong)(uVar22 * 4);
        pfVar14 = local_14a8 + 1;
        do {
          fVar28 = ABS(pfVar14[-1]);
          if (ABS(pfVar14[-1]) <= fVar25) {
            fVar28 = fVar25;
          }
          if (fVar28 <= ABS(*pfVar14)) {
            fVar28 = ABS(*pfVar14);
          }
          if (fVar28 <= ABS(pfVar14[1])) {
            fVar28 = ABS(pfVar14[1]);
          }
          fVar25 = fVar28;
          if (fVar28 <= ABS(pfVar14[2])) {
            fVar25 = ABS(pfVar14[2]);
          }
          uVar21 = uVar21 - 1;
          pfVar14 = pfVar14 + 4;
        } while (uVar21 != 0);
      }
      if ((uint)uVar11 < uVar15) {
        pfVar14 = local_14a8 + uVar11;
        uVar11 = (ulonglong)(uVar15 - (uint)uVar11);
        do {
          fVar28 = *pfVar14;
          pfVar14 = pfVar14 + 1;
          fVar27 = ABS(fVar28);
          if (ABS(fVar28) <= fVar25) {
            fVar27 = fVar25;
          }
          fVar25 = fVar27;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      *(float *)(param_1 + 0xf1c) = fVar25;
      uVar11 = 0;
      bVar3 = *(byte *)(param_2 + 1);
      fVar25 = 0.0;
      if (3 < bVar3) {
        pfVar14 = local_18a8 + 1;
        uVar22 = (bVar3 - 4 >> 2) + 1;
        uVar21 = (ulonglong)uVar22;
        uVar11 = (ulonglong)(uVar22 * 4);
        do {
          if (ABS(fVar25) < ABS(pfVar14[-1])) {
            fVar25 = pfVar14[-1];
          }
          if (ABS(fVar25) < ABS(*pfVar14)) {
            fVar25 = *pfVar14;
          }
          if (ABS(fVar25) < ABS(pfVar14[1])) {
            fVar25 = pfVar14[1];
          }
          if (ABS(fVar25) < ABS(pfVar14[2])) {
            fVar25 = pfVar14[2];
          }
          pfVar14 = pfVar14 + 4;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      if ((uint)uVar11 < (uint)bVar3) {
        pfVar14 = local_18a8 + uVar11;
        uVar11 = (ulonglong)((uint)bVar3 - (uint)uVar11);
        do {
          if (ABS(fVar25) < ABS(*pfVar14)) {
            fVar25 = *pfVar14;
          }
          pfVar14 = pfVar14 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      uVar22 = 0;
      *(float *)(param_1 + 0xf08 + ((int)fVar2 + lVar12) * 4) = fVar25;
      fVar25 = 0.0;
      pfVar14 = (float *)(param_1 + ((longlong)(int)fVar2 + 0x3c2) * 4);
      if (3 < uVar18) {
        uVar22 = (uVar18 - 4 >> 2) + 1;
        uVar11 = (ulonglong)uVar22;
        uVar22 = uVar22 * 4;
        do {
          if (ABS(fVar25) < ABS(*pfVar14)) {
            fVar25 = *pfVar14;
          }
          if (ABS(fVar25) < ABS(pfVar14[1])) {
            fVar25 = pfVar14[1];
          }
          if (ABS(fVar25) < ABS(pfVar14[2])) {
            fVar25 = pfVar14[2];
          }
          if (ABS(fVar25) < ABS(pfVar14[3])) {
            fVar25 = pfVar14[3];
          }
          pfVar14 = pfVar14 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (uVar22 < uVar18) {
        uVar11 = (ulonglong)(uVar18 - uVar22);
        do {
          if (ABS(fVar25) < ABS(*pfVar14)) {
            fVar25 = *pfVar14;
          }
          pfVar14 = pfVar14 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      fVar28 = ABS(local_18a8[0]);
      if (ABS(local_18a8[0]) <= ABS(local_18a8[1])) {
        fVar28 = ABS(local_18a8[1]);
      }
      if (1.0 <= fVar28) {
        fVar28 = 1.0;
      }
      if (ABS(*(float *)(param_1 + 0x14)) <= fVar28) {
        fVar28 = *(float *)(param_1 + 0x14);
      }
      pfVar14 = (float *)(param_1 + 0xf24);
      fVar26 = ABS(*pfVar14);
      fVar27 = *pfVar14;
      if (fVar26 < ABS(fVar28)) {
        fVar27 = fVar28;
      }
      *pfVar14 = ABS(fVar27);
      iVar9 = (int)fVar1;
      if (ABS(fVar28) <= fVar26) {
        iVar9 = iVar23;
      }
      fVar28 = ABS(fVar27) - *(float *)(param_1 + 0x18);
      if (ABS(fVar28) < ABS(*(float *)(param_1 + 0xf28))) {
        fVar28 = *(float *)(param_1 + 0xf28);
      }
      *(float *)(param_1 + 0xf28) = fVar28;
      fVar27 = *(float *)(param_1 + 0x24);
      fVar26 = 0.0;
      iVar23 = 0;
      if (-1 < iVar9 + -1) {
        iVar23 = iVar9 + -1;
      }
      if (iVar23 < 1) {
        fVar26 = *(float *)(param_1 + 0x20);
        fVar27 = 0.0;
      }
      fVar29 = ABS(fVar25);
      fVar27 = fVar28 * fVar27 + *(float *)(param_1 + 0x18) +
               (fVar29 - *(float *)(param_1 + 0x18)) * fVar26;
      if (ABS(*pfVar14) <= ABS(fVar27)) {
        fVar27 = *pfVar14;
      }
      if (iVar23 < 1) {
        fVar28 = 0.0;
      }
      *(float *)(param_1 + 0xf28) = fVar28;
      if (ABS(fVar27) < fVar29) {
        fVar27 = fVar25;
      }
      *(float *)(param_1 + 0x18) = ABS(fVar27);
      fVar28 = *pfVar14;
      if (ABS(fVar27) < fVar29) {
        fVar28 = fVar25;
      }
      *pfVar14 = ABS(fVar28);
      fVar25 = *(float *)(param_1 + 0xf2c);
      fVar28 = *(float *)(param_1 + 0x28);
      if (ABS(fVar25) < fVar29) {
        fVar28 = *(float *)(param_1 + 0x2c);
      }
      fVar25 = (fVar29 - fVar25) * fVar28 + fVar25;
      *(float *)(param_1 + 0xf2c) = fVar25;
      fVar28 = *(float *)(param_1 + 0x18);
      if (*(float *)(param_1 + 0x18) <= fVar25) {
        fVar28 = fVar25;
      }
      *(float *)(param_1 + 0x18) = fVar28;
      fVar25 = *pfVar14;
      if (iVar23 < 1) {
        fVar25 = fVar28;
      }
      lVar13 = iVar20 + local_18b8;
      *pfVar14 = fVar25;
      fVar25 = 0.0;
      lVar12 = local_18b8 + 1;
      iVar9 = local_res8 + 1;
      *(float *)(param_1 + 0xf08 + lVar13 * 4) = fVar28;
      local_res8 = 0;
      if (lVar12 < (int)uVar24) {
        local_res8 = iVar9;
      }
      lVar19 = 0;
      if (lVar12 < (int)uVar24) {
        lVar19 = lVar12;
      }
      uVar22 = 0;
      fVar28 = *(float *)(param_1 + (longlong)iVar20 * 4);
      fVar27 = *(float *)(param_1 + 0xf08 + (lVar13 - local_18b8) * 4);
      iVar9 = iVar8;
      if (3 < uVar24) {
        pfVar14 = (float *)(param_1 + ((longlong)iVar8 + 0x3c4) * 4);
        uVar22 = (uVar24 - 4 >> 2) + 1;
        uVar11 = (ulonglong)uVar22;
        uVar22 = uVar22 * 4;
        iVar9 = iVar8 + uVar22;
        do {
          fVar25 = fVar25 + (fVar27 + pfVar14[-2] + pfVar14[-1] + *pfVar14) * fVar28;
          fVar27 = pfVar14[1];
          pfVar14 = pfVar14 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (uVar22 < uVar24) {
        uVar11 = (ulonglong)(uVar24 - uVar22);
        pfVar14 = (float *)(param_1 + ((longlong)iVar9 + 0x3c2) * 4);
        do {
          fVar26 = fVar28 * fVar27;
          fVar27 = *pfVar14;
          pfVar14 = pfVar14 + 1;
          fVar25 = fVar25 + fVar26;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      fVar25 = (fVar25 + fVar25) - fVar25 * fVar25;
      fVar25 = ((fVar25 + fVar25) - fVar25 * fVar25) * 599.0;
      iVar9 = (int)fVar25;
      lVar12 = (longlong)iVar9;
      fVar28 = (*(float *)(param_1 + 0xf38 + lVar12 * 4) - *(float *)(param_1 + 0xf34 + lVar12 * 4))
               * (fVar25 - (float)iVar9) + *(float *)(param_1 + 0xf34 + lVar12 * 4);
      fVar25 = fVar28;
      if (ABS(fVar28) < ABS(*(float *)(param_1 + 0x3c))) {
        fVar25 = *(float *)(param_1 + 0x3c);
      }
      *(float *)(param_1 + 0x3c) = fVar25;
      uVar11 = 0;
      uVar22 = *(uint *)(param_2 + 1);
      fVar25 = *(float *)(param_1 + 0x44);
      if ((char)uVar22 != '\0') {
        do {
          fVar27 = local_14a8[uVar11];
          fVar26 = *(float *)(param_1 + 0x21e10 + uVar11 * 4);
          fVar29 = ABS(fVar27);
          if (ABS(fVar26) < fVar29) {
            fVar26 = fVar29;
          }
          *(float *)(param_1 + 0x21e10 + uVar11 * 4) = fVar26;
          fVar26 = *(float *)(param_1 + 0x22210 + uVar11 * 4);
          fVar27 = fVar27 * fVar28 * fVar25;
          fVar29 = ABS(fVar27);
          if (ABS(fVar26) < fVar29) {
            fVar26 = fVar29;
          }
          pfVar14 = (float *)alStack_8a8[uVar11];
          *(float *)(param_1 + 0x22210 + uVar11 * 4) = fVar26;
          *pfVar14 = fVar27;
          uVar22 = *(uint *)(param_2 + 1);
          alStack_8a8[uVar11] = (longlong)(pfVar14 + 1);
          uVar15 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar15;
        } while (uVar15 < (uVar22 & 0xff));
      }
      lVar12 = lVar16;
      local_18b8 = lVar19;
    } while (param_4 != 0);
  }
  *(float *)(param_1 + 0xf20) = (float)iVar23;
  *(float *)(param_1 + 0xf10) = (float)local_res20;
  *(float *)(param_1 + 0x38) = (float)local_res8;
  return;
}



// FUNCTION 14325a570 FUN_14325a570 body=25 status=ok
// SIG undefined FUN_14325a570(void)

void FUN_14325a570(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  FUN_143259bb0(param_2,param_3,param_4,*(undefined2 *)(param_3 + 0x12));
  return;
}



// FUNCTION 14325a590 FUN_14325a590 body=171 status=ok
// SIG undefined FUN_14325a590(void)

undefined8 * FUN_14325a590(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0xac44;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_145aeff58;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_1432461b0(param_1 + 7);
  FUN_1432461b0(param_1 + 0xb);
  FUN_1432461b0(param_1 + 0xf);
  FUN_1432461b0(param_1 + 0x13);
  FUN_1432461b0(param_1 + 0x17);
  *param_1 = &PTR_FUN_145aeffa8;
  param_1[0x1e] = 0x4024000000000000;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  return param_1;
}



// FUNCTION 14325a640 FUN_14325a640 body=118 status=ok
// SIG undefined FUN_14325a640(void)

undefined8 * FUN_14325a640(undefined8 *param_1,uint param_2)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_145aeff58;
  iVar1 = (int)param_1;
  AK::MemoryMgr::StartProfileThreadUsage(iVar1 + 0xb8);
  AK::MemoryMgr::StartProfileThreadUsage(iVar1 + 0x98);
  AK::MemoryMgr::StartProfileThreadUsage(iVar1 + 0x78);
  AK::MemoryMgr::StartProfileThreadUsage(iVar1 + 0x58);
  AK::MemoryMgr::StartProfileThreadUsage(iVar1 + 0x38);
  *param_1 = &PTR_FUN_143fcf628;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 14325a6c0 FUN_14325a6c0 body=118 status=ok
// SIG undefined FUN_14325a6c0(void)

undefined8 * FUN_14325a6c0(undefined8 *param_1,uint param_2)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_145aeff58;
  iVar1 = (int)param_1;
  AK::MemoryMgr::StartProfileThreadUsage(iVar1 + 0xb8);
  AK::MemoryMgr::StartProfileThreadUsage(iVar1 + 0x98);
  AK::MemoryMgr::StartProfileThreadUsage(iVar1 + 0x78);
  AK::MemoryMgr::StartProfileThreadUsage(iVar1 + 0x58);
  AK::MemoryMgr::StartProfileThreadUsage(iVar1 + 0x38);
  *param_1 = &PTR_FUN_143fcf628;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 14325a740 FUN_14325a740 body=251 status=ok
// SIG undefined FUN_14325a740(void)

void FUN_14325a740(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(uint *)(param_2 + 8) >> 0xc;
  if (uVar1 == 3) {
    uVar2 = FUN_1432461d0(param_1 + 0x58,0);
    FUN_143257250(*(undefined8 *)(param_1 + 0x18),uVar2,param_2,param_2);
    return;
  }
  if (uVar1 == 4) {
    uVar2 = FUN_1432461d0(param_1 + 0x38,0);
    FUN_143256640(*(undefined8 *)(param_1 + 0x10),uVar2,param_2,param_2);
    return;
  }
  if (uVar1 == 0x60f) {
    uVar2 = FUN_1432461d0(param_1 + 0x78,0);
    FUN_143258260(*(undefined8 *)(param_1 + 0x20),uVar2,param_2,param_2);
    return;
  }
  if (uVar1 != 0x63f) {
    uVar2 = FUN_1432461d0(param_1 + 0xb8,0);
    FUN_14325a570(*(undefined8 *)(param_1 + 0x30),uVar2,param_2,param_2);
    return;
  }
  uVar2 = FUN_1432461d0(param_1 + 0x98,0);
  FUN_143259560(*(undefined8 *)(param_1 + 0x28),uVar2,param_2,param_2);
  return;
}



// FUNCTION 14325a860 FUN_14325a860 body=63 status=ok
// SIG undefined FUN_14325a860(void)

void FUN_14325a860(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_38 = *(undefined8 *)(param_1 + 0xd8);
  uStack_30 = *(undefined8 *)(param_1 + 0xe0);
  local_28 = *(undefined4 *)(param_1 + 0xe8);
  uStack_24 = *(undefined4 *)(param_1 + 0xec);
  uStack_20 = *(undefined4 *)(param_1 + 0xf0);
  uStack_1c = *(undefined4 *)(param_1 + 0xf4);
  local_18 = *(undefined8 *)(param_1 + 0xf8);
  FUN_1432572a0(param_2,&local_38);
  return;
}



// FUNCTION 14325a8a0 FUN_14325a8a0 body=63 status=ok
// SIG undefined FUN_14325a8a0(void)

void FUN_14325a8a0(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_38 = *(undefined8 *)(param_1 + 0xd8);
  uStack_30 = *(undefined8 *)(param_1 + 0xe0);
  local_28 = *(undefined4 *)(param_1 + 0xe8);
  uStack_24 = *(undefined4 *)(param_1 + 0xec);
  uStack_20 = *(undefined4 *)(param_1 + 0xf0);
  uStack_1c = *(undefined4 *)(param_1 + 0xf4);
  local_18 = *(undefined8 *)(param_1 + 0xf8);
  FUN_143259740(param_2,&local_38);
  return;
}



// FUNCTION 14325a8e0 FUN_14325a8e0 body=63 status=ok
// SIG undefined FUN_14325a8e0(void)

void FUN_14325a8e0(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_38 = *(undefined8 *)(param_1 + 0xd8);
  uStack_30 = *(undefined8 *)(param_1 + 0xe0);
  local_28 = *(undefined4 *)(param_1 + 0xe8);
  uStack_24 = *(undefined4 *)(param_1 + 0xec);
  uStack_20 = *(undefined4 *)(param_1 + 0xf0);
  uStack_1c = *(undefined4 *)(param_1 + 0xf4);
  local_18 = *(undefined8 *)(param_1 + 0xf8);
  FUN_143258360(param_2,&local_38);
  return;
}



// FUNCTION 14325a920 FUN_14325a920 body=108 status=ok
// SIG undefined FUN_14325a920(void)

void FUN_14325a920(longlong *param_1)

{
  if (param_1[2] != 0) {
    (**(code **)(*param_1 + 0x28))();
  }
  if (param_1[3] != 0) {
    (**(code **)(*param_1 + 0x30))(param_1);
  }
  if (param_1[4] != 0) {
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  if (param_1[5] != 0) {
    (**(code **)(*param_1 + 0x40))(param_1);
  }
  if (param_1[6] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014325a982. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x48))(param_1);
    return;
  }
  return;
}



// FUNCTION 14325a990 FScale2D body=13 status=ok
// SIG undefined FScale2D(void)

undefined4 * FScale2D::FScale2D(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return param_1;
}



// FUNCTION 14325a9a0 FUN_14325a9a0 body=443 status=ok
// SIG undefined FUN_14325a9a0(void)

void FUN_14325a9a0(float *param_1,int param_2,double param_3,double param_4)

{
  double dVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar3 = _guard_xfg_dispatch_icall_nop(param_4 * 0.01,0.0005);
  dVar4 = _guard_xfg_dispatch_icall_nop(10.0,param_3 * -0.05);
  dVar5 = _guard_xfg_dispatch_icall_nop(10.0,param_3 * 0.025);
  iVar2 = 0;
  if (0 < param_2) {
    do {
      dVar7 = (double)iVar2 * (1.0 / (double)(param_2 + -1));
      dVar1 = dVar4;
      if (0.0 < dVar7) {
        dVar1 = 1.0 - SQRT(SQRT(1.0 - dVar7));
        dVar7 = _guard_xfg_dispatch_icall_nop(dVar1,1.0 / ((1.0 - dVar3) * 10000.0 + 2.0) - 1.0);
        dVar6 = _guard_xfg_dispatch_icall_nop(dVar1,-0.9999);
        dVar1 = dVar7 + dVar5;
        if (dVar6 <= dVar7 + dVar5) {
          dVar1 = dVar6;
        }
      }
      if (dVar1 <= 1.0) {
        dVar1 = 1.0;
      }
      iVar2 = iVar2 + 1;
      if (dVar4 <= dVar1) {
        dVar1 = dVar4;
      }
      *param_1 = (float)dVar1;
      param_1 = param_1 + 1;
    } while (iVar2 < param_2);
  }
  return;
}



// FUNCTION 14325ab60 FUN_14325ab60 body=17 status=ok
// SIG undefined FUN_14325ab60(void)

int FUN_14325ab60(longlong param_1,double param_2)

{
  return (int)((double)*(float *)(param_1 + 4) * param_2);
}



// FUNCTION 14325ab80 FUN_14325ab80 body=16 status=ok
// SIG undefined FUN_14325ab80(void)

int FUN_14325ab80(float *param_1,double param_2)

{
  return (int)((double)*param_1 * param_2);
}



// FUNCTION 14325ab90 FUN_14325ab90 body=34 status=ok
// SIG undefined FUN_14325ab90(void)

int FUN_14325ab90(float *param_1,double param_2)

{
  return (int)((double)param_1[1] * param_2) + (int)((double)*param_1 * param_2);
}



// FUNCTION 14325abc0 FUN_14325abc0 body=64 status=ok
// SIG undefined FUN_14325abc0(void)

void FUN_14325abc0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = CGbxMonoMixerParams::vftable;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    return;
  }
  return;
}



// FUNCTION 14325ac00 FUN_14325ac00 body=53 status=ok
// SIG undefined FUN_14325ac00(void)

void FUN_14325ac00(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x10);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = CGbxMonoMixer::vftable;
    return;
  }
  return;
}



// FUNCTION 14325ac40 FUN_14325ac40 body=52 status=ok
// SIG undefined FUN_14325ac40(void)

void FUN_14325ac40(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0;
    *puVar1 = CGbxMonoMixerParams::vftable;
    return;
  }
  return;
}



// FUNCTION 14325ac80 FUN_14325ac80 body=802 status=ok
// SIG undefined FUN_14325ac80(void)

void FUN_14325ac80(longlong param_1,longlong *param_2)

{
  void *pvVar1;
  float *pfVar2;
  float *pfVar3;
  ushort uVar4;
  void *_Src;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  float *pfVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  float fVar26;
  uint uVar20;
  
  if (0.0 < *(float *)(*(longlong *)(param_1 + 8) + 8)) {
    uVar4 = *(ushort *)((longlong)param_2 + 0x12);
    uVar14 = *(uint *)(param_2 + 1) & 0xff;
    uVar5 = uVar14 - 1;
    if ((*(uint *)(param_2 + 1) & 0x8000) == 0) {
      uVar5 = uVar14;
    }
    if (1 < uVar5) {
      _Src = (void *)*param_2;
      uVar17 = 0;
      uVar23 = (ulonglong)(uVar5 - 1);
      lVar24 = 1;
      uVar14 = 8;
      lVar25 = 1;
      fVar26 = 1.0 / (float)uVar5;
      do {
        pvVar1 = (void *)(*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * lVar25 * 4);
        uVar12 = (uint)uVar4;
        uVar19 = (uint)uVar4;
        uVar20 = (uint)uVar4;
        if (uVar4 != 0) {
          uVar22 = uVar17;
          if ((0xf < uVar20) &&
             (((void *)((longlong)pvVar1 + (ulonglong)(uVar4 - 1) * 4) < _Src ||
              (uVar22 = 0, (void *)((longlong)_Src + (ulonglong)(uVar4 - 1) * 4) < pvVar1)))) {
            uVar22 = uVar17;
            uVar21 = uVar14;
            do {
              pfVar15 = (float *)((longlong)_Src + uVar22 * 4);
              fVar6 = pfVar15[1];
              fVar7 = pfVar15[2];
              fVar8 = pfVar15[3];
              uVar13 = (ulonglong)(uVar21 - 4);
              pfVar2 = (float *)((longlong)pvVar1 + uVar22 * 4);
              fVar9 = pfVar2[1];
              fVar10 = pfVar2[2];
              fVar11 = pfVar2[3];
              pfVar3 = (float *)((longlong)_Src + uVar22 * 4);
              *pfVar3 = *pfVar2 + *pfVar15;
              pfVar3[1] = fVar9 + fVar6;
              pfVar3[2] = fVar10 + fVar7;
              pfVar3[3] = fVar11 + fVar8;
              uVar18 = (int)uVar22 + 0x10;
              uVar22 = (ulonglong)uVar18;
              pfVar15 = (float *)((longlong)_Src + uVar13 * 4);
              fVar6 = pfVar15[1];
              fVar7 = pfVar15[2];
              fVar8 = pfVar15[3];
              pfVar2 = (float *)((longlong)pvVar1 + uVar13 * 4);
              fVar9 = pfVar2[1];
              fVar10 = pfVar2[2];
              fVar11 = pfVar2[3];
              pfVar3 = (float *)((longlong)_Src + uVar13 * 4);
              *pfVar3 = *pfVar2 + *pfVar15;
              pfVar3[1] = fVar9 + fVar6;
              pfVar3[2] = fVar10 + fVar7;
              pfVar3[3] = fVar11 + fVar8;
              uVar13 = (ulonglong)uVar21;
              pfVar15 = (float *)((longlong)_Src + uVar13 * 4);
              fVar6 = pfVar15[1];
              fVar7 = pfVar15[2];
              fVar8 = pfVar15[3];
              pfVar2 = (float *)((longlong)pvVar1 + uVar13 * 4);
              fVar9 = pfVar2[1];
              fVar10 = pfVar2[2];
              fVar11 = pfVar2[3];
              pfVar3 = (float *)((longlong)_Src + uVar13 * 4);
              *pfVar3 = *pfVar2 + *pfVar15;
              pfVar3[1] = fVar9 + fVar6;
              pfVar3[2] = fVar10 + fVar7;
              pfVar3[3] = fVar11 + fVar8;
              uVar13 = (ulonglong)(uVar21 + 4);
              uVar21 = uVar21 + 0x10;
              pfVar15 = (float *)((longlong)_Src + uVar13 * 4);
              fVar6 = pfVar15[1];
              fVar7 = pfVar15[2];
              fVar8 = pfVar15[3];
              pfVar2 = (float *)((longlong)pvVar1 + uVar13 * 4);
              fVar9 = pfVar2[1];
              fVar10 = pfVar2[2];
              fVar11 = pfVar2[3];
              pfVar3 = (float *)((longlong)_Src + uVar13 * 4);
              *pfVar3 = *pfVar2 + *pfVar15;
              pfVar3[1] = fVar9 + fVar6;
              pfVar3[2] = fVar10 + fVar7;
              pfVar3[3] = fVar11 + fVar8;
            } while (uVar18 < (uVar20 & 0xfffffff0));
          }
          uVar21 = (uint)uVar22;
          if (uVar21 < uVar20) {
            if (3 < uVar20 - uVar21) {
              lVar16 = (longlong)pvVar1 - (longlong)_Src;
              uVar18 = ((uVar19 - uVar21) - 4 >> 2) + 1;
              pfVar15 = (float *)((longlong)_Src + (uVar22 + 1) * 4);
              uVar22 = (ulonglong)uVar18;
              uVar21 = uVar21 + uVar18 * 4;
              do {
                pfVar15[-1] = *(float *)(lVar16 + -4 + (longlong)pfVar15) + pfVar15[-1];
                *pfVar15 = *(float *)(lVar16 + (longlong)pfVar15) + *pfVar15;
                pfVar15[1] = *(float *)(lVar16 + 4 + (longlong)pfVar15) + pfVar15[1];
                pfVar15[2] = *(float *)(lVar16 + 8 + (longlong)pfVar15) + pfVar15[2];
                pfVar15 = pfVar15 + 4;
                uVar22 = uVar22 - 1;
              } while (uVar22 != 0);
            }
            if (uVar21 < uVar19) {
              uVar22 = (ulonglong)(uVar12 - uVar21);
              pfVar15 = (float *)((longlong)_Src + (ulonglong)uVar21 * 4);
              do {
                *pfVar15 = *(float *)((longlong)pfVar15 + ((longlong)pvVar1 - (longlong)_Src)) +
                           *pfVar15;
                pfVar15 = pfVar15 + 1;
                uVar22 = uVar22 - 1;
              } while (uVar22 != 0);
            }
          }
        }
        lVar25 = lVar25 + 1;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
      if (uVar12 != 0) {
        if (0xf < uVar20) {
          do {
            pfVar15 = (float *)((longlong)_Src + uVar17 * 4);
            fVar6 = pfVar15[1];
            fVar7 = pfVar15[2];
            fVar8 = pfVar15[3];
            pfVar2 = (float *)((longlong)_Src + uVar17 * 4);
            *pfVar2 = *pfVar15 * fVar26;
            pfVar2[1] = fVar6 * fVar26;
            pfVar2[2] = fVar7 * fVar26;
            pfVar2[3] = fVar8 * fVar26;
            uVar18 = (int)uVar17 + 0x10;
            uVar17 = (ulonglong)uVar18;
            pfVar15 = (float *)((longlong)_Src + (ulonglong)(uVar14 - 4) * 4);
            fVar6 = pfVar15[1];
            fVar7 = pfVar15[2];
            fVar8 = pfVar15[3];
            pfVar2 = (float *)((longlong)_Src + (ulonglong)(uVar14 - 4) * 4);
            *pfVar2 = fVar26 * *pfVar15;
            pfVar2[1] = fVar26 * fVar6;
            pfVar2[2] = fVar26 * fVar7;
            pfVar2[3] = fVar26 * fVar8;
            pfVar15 = (float *)((longlong)_Src + (ulonglong)uVar14 * 4);
            fVar6 = pfVar15[1];
            fVar7 = pfVar15[2];
            fVar8 = pfVar15[3];
            pfVar2 = (float *)((longlong)_Src + (ulonglong)uVar14 * 4);
            *pfVar2 = *pfVar15 * fVar26;
            pfVar2[1] = fVar6 * fVar26;
            pfVar2[2] = fVar7 * fVar26;
            pfVar2[3] = fVar8 * fVar26;
            uVar21 = uVar14 + 4;
            uVar14 = uVar14 + 0x10;
            pfVar15 = (float *)((longlong)_Src + (ulonglong)uVar21 * 4);
            fVar6 = pfVar15[1];
            fVar7 = pfVar15[2];
            fVar8 = pfVar15[3];
            pfVar2 = (float *)((longlong)_Src + (ulonglong)uVar21 * 4);
            *pfVar2 = *pfVar15 * fVar26;
            pfVar2[1] = fVar6 * fVar26;
            pfVar2[2] = fVar7 * fVar26;
            pfVar2[3] = fVar8 * fVar26;
          } while (uVar18 < (uVar12 & 0xfffffff0));
        }
        uVar14 = (uint)uVar17;
        if (uVar14 < uVar12) {
          if (3 < uVar20 - uVar14) {
            lVar25 = uVar17 + 2;
            uVar12 = ((uVar20 - uVar14) - 4 >> 2) + 1;
            uVar23 = (ulonglong)uVar12;
            uVar17 = (ulonglong)(uVar14 + uVar12 * 4);
            pfVar15 = (float *)((longlong)_Src + lVar25 * 4);
            do {
              pfVar15[-2] = pfVar15[-2] * fVar26;
              pfVar15[-1] = pfVar15[-1] * fVar26;
              *pfVar15 = *pfVar15 * fVar26;
              pfVar15[1] = pfVar15[1] * fVar26;
              uVar23 = uVar23 - 1;
              pfVar15 = pfVar15 + 4;
            } while (uVar23 != 0);
          }
          if ((uint)uVar17 < uVar19) {
            uVar23 = (ulonglong)(uVar19 - (uint)uVar17);
            pfVar15 = (float *)((longlong)_Src + uVar17 * 4);
            do {
              *pfVar15 = fVar26 * *pfVar15;
              uVar23 = uVar23 - 1;
              pfVar15 = pfVar15 + 1;
            } while (uVar23 != 0);
          }
        }
      }
      if (1 < uVar5) {
        uVar17 = (ulonglong)(uVar5 - 1);
        do {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * lVar24 * 4),_Src,
                     (ulonglong)uVar4 << 2);
          lVar24 = lVar24 + 1;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
    }
  }
  return;
}



// FUNCTION 14325afb0 FUN_14325afb0 body=25 status=ok
// SIG undefined FUN_14325afb0(void)

undefined8 FUN_14325afb0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 3;
  *(undefined2 *)(param_2 + 2) = 1;
  param_2[1] = 0x7e201;
  return 1;
}



// FUNCTION 14325afd0 FUN_14325afd0 body=10 status=ok
// SIG undefined FUN_14325afd0(void)

undefined8 FUN_14325afd0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 8) = param_4;
  return 1;
}



// FUNCTION 14325afe0 FUN_14325afe0 body=53 status=ok
// SIG undefined FUN_14325afe0(void)

undefined8 FUN_14325afe0(longlong param_1,short param_2,float *param_3)

{
  if (param_2 != 0) {
    return 0x1f;
  }
  *(float *)(param_1 + 8) = (float)(*param_3 != 0.0);
  return 1;
}



// FUNCTION 14325b020 FUN_14325b020 body=21 status=ok
// SIG undefined FUN_14325b020(void)

undefined8 FUN_14325b020(longlong param_1,byte *param_2)

{
  *(float *)(param_1 + 8) = (float)*param_2;
  return 1;
}



// FUNCTION 14325b040 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<FPackageLocalizationCultureCache>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = AK::IAkPlugin::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 14325b070 FUN_14325b070 body=70 status=ok
// SIG undefined FUN_14325b070(void)

void FUN_14325b070(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = CGbxGranularReverseParams::vftable;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    return;
  }
  return;
}



// FUNCTION 14325b0c0 FUN_14325b0c0 body=194 status=ok
// SIG undefined FUN_14325b0c0(void)

undefined8 * FUN_14325b0c0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))();
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = 0;
    *puVar1 = CGbxGranularReverse::vftable;
    puVar1[4] = 0x4138000000000000;
    *(undefined4 *)(puVar1 + 5) = *(undefined4 *)((longlong)puVar1 + 0x24);
    puVar1[8] = 0x4138000000000000;
    *(undefined4 *)(puVar1 + 9) = *(undefined4 *)((longlong)puVar1 + 0x44);
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    *(undefined4 *)(puVar1 + 0x13) = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    *(undefined4 *)(puVar1 + 0x16) = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *(undefined4 *)(puVar1 + 0x1c) = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    *(undefined4 *)(puVar1 + 0x1f) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14325b190 FUN_14325b190 body=52 status=ok
// SIG undefined FUN_14325b190(void)

void FUN_14325b190(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x3ba3d70a;
    *puVar1 = CGbxGranularReverseParams::vftable;
    return;
  }
  return;
}



// FUNCTION 14325b1d0 FUN_14325b1d0 body=1530 status=ok
// SIG undefined FUN_14325b1d0(void)

void FUN_14325b1d0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  double dVar25;
  double dVar26;
  float fVar27;
  float fVar28;
  float _X;
  float _X_00;
  float fVar29;
  uint local_res8;
  undefined8 local_138;
  uint local_130;
  longlong local_128;
  
  uVar4 = *(ushort *)((longlong)param_2 + 0x12);
  uVar19 = *(uint *)(param_2 + 1) & 0xff;
  uVar8 = uVar19 - 1;
  if ((*(uint *)(param_2 + 1) & 0x8000) == 0) {
    uVar8 = uVar19;
  }
  FUN_143260d90(param_1 + 0x38,1.0 / *(float *)(*(longlong *)(param_1 + 0x10) + 8));
  local_res8 = 0;
  if (uVar4 != 0) {
    do {
      uVar15 = (ulonglong)uVar8;
      local_130 = (uint)uVar4;
      uVar17 = (ulonglong)(uVar4 - local_res8);
      if (0x40 < uVar4 - local_res8) {
        uVar17 = 0x40;
      }
      iVar16 = (int)uVar17;
      fVar27 = *(float *)(*(longlong *)(param_1 + 0x10) + 8) * *(float *)(param_1 + 0xc) *
               *(float *)(param_1 + 0x70) + *(float *)(param_1 + 0x74) * *(float *)(param_1 + 0x6c);
      *(float *)(param_1 + 0x6c) = fVar27;
      FUN_143260330(param_1 + 0x18,*(undefined8 *)(param_1 + 0x90),uVar17);
      uVar19 = *(uint *)(param_1 + 0x84);
      uVar14 = 0;
      if (*(int *)(param_1 + 0x98) != 0) {
        do {
          *(float *)(*(longlong *)(param_1 + 0x90) + uVar14 * 4) =
               (float)uVar19 * *(float *)(*(longlong *)(param_1 + 0x90) + uVar14 * 4);
          uVar12 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar12;
        } while (uVar12 < *(uint *)(param_1 + 0x98));
      }
      FUN_143260330(param_1 + 0x38,*(undefined8 *)(param_1 + 0xa8),uVar17);
      uVar19 = *(uint *)(param_1 + 200);
      if (uVar19 != *(uint *)(param_1 + 0xb0)) {
        FUN_14325be10(param_1 + 0xb8);
        uVar19 = *(uint *)(param_1 + 200);
      }
      _guard_xfg_dispatch_icall_nop
                (*(void **)(param_1 + 0xc0),*(void **)(param_1 + 0xa8),(ulonglong)uVar19 << 2);
      uVar14 = 0;
      uVar19 = 0;
      if (*(int *)(param_1 + 200) != 0) {
        do {
          *(float *)(*(longlong *)(param_1 + 0xc0) + uVar14 * 4) =
               *(float *)(*(longlong *)(param_1 + 0xc0) + uVar14 * 4) + 0.5;
          uVar12 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar12;
          uVar19 = *(uint *)(param_1 + 200);
        } while (uVar12 < uVar19);
      }
      if ((*(longlong *)(param_1 + 0xc0) != 0) && (uVar19 != 0)) {
        uVar14 = 0;
        do {
          local_138 = (double)CONCAT44(0x41380000,
                                       SUB84((double)*(float *)(*(longlong *)(param_1 + 0xc0) +
                                                               uVar14 * 4) + 1572864.0,0));
          *(float *)(*(longlong *)(param_1 + 0xc0) + uVar14 * 4) = (float)(local_138 - 1572864.0);
          uVar19 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar19;
        } while (uVar19 < *(uint *)(param_1 + 200));
      }
      FUN_143260440(param_1 + 0x58,*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0xa8),
                    *(undefined8 *)(param_1 + 0xd8),iVar16);
      FUN_143260440(param_1 + 0x60,*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0xc0),
                    *(undefined8 *)(param_1 + 0xf0),iVar16);
      if (uVar8 != 0) {
        lVar20 = 0;
        local_128 = 0;
        do {
          lVar6 = *(longlong *)(param_1 + 0x78);
          lVar1 = *param_2 +
                  ((ulonglong)*(ushort *)(param_2 + 2) * local_128 + (ulonglong)local_res8) * 4;
          if (iVar16 != 0) {
            lVar21 = 0;
            fVar29 = (float)((longlong)fVar27 & 0xffffffff);
            local_138 = (double)uVar17;
            do {
              *(undefined4 *)
               (*(longlong *)(lVar20 + 8 + lVar6) +
               ((longlong)*(float *)(lVar21 + *(longlong *)(param_1 + 0x90)) & 0xffffffffU) * 4) =
                   *(undefined4 *)(lVar21 + lVar1);
              uVar19 = *(uint *)(param_1 + 0x84);
              fVar2 = *(float *)(lVar21 + *(longlong *)(param_1 + 0xa8));
              dVar26 = (double)uVar19;
              dVar25 = _guard_xfg_dispatch_icall_nop
                                 ((double)(*(float *)(lVar21 + *(longlong *)(param_1 + 0xd8)) -
                                          fVar2 * fVar29),dVar26);
              _X = (float)dVar25;
              fVar28 = (float)uVar19;
              if (_X < 0.0) {
                _X = _X + fVar28;
              }
              fVar22 = _guard_xfg_dispatch_icall_nop(_X);
              fVar23 = _guard_xfg_dispatch_icall_nop(_X);
              iVar5 = *(int *)(lVar20 + 0x10 + lVar6);
              iVar9 = (int)fVar23;
              iVar13 = 0;
              if (0 < (int)fVar22) {
                iVar13 = (int)fVar22;
              }
              iVar18 = iVar5 + -1;
              if (iVar5 <= iVar13) {
                iVar13 = iVar18;
              }
              lVar7 = *(longlong *)(lVar20 + 8 + lVar6);
              iVar11 = 0;
              if (0 < iVar9) {
                iVar11 = iVar9;
              }
              iVar10 = iVar18;
              if (iVar11 < iVar5) {
                iVar10 = iVar11;
              }
              fVar22 = *(float *)(lVar7 + (longlong)iVar10 * 4);
              fVar23 = *(float *)(lVar7 + (longlong)iVar13 * 4);
              fVar2 = *(float *)(&DAT_146b52ae0 + ((longlong)(fVar2 * 8192.0) & 0xffffffffU) * 4);
              fVar3 = *(float *)(lVar21 + *(longlong *)(param_1 + 0xc0));
              dVar26 = _guard_xfg_dispatch_icall_nop
                                 ((double)(*(float *)(lVar21 + *(longlong *)(param_1 + 0xf0)) -
                                          fVar3 * fVar29),dVar26);
              _X_00 = (float)dVar26;
              if (_X_00 < 0.0) {
                _X_00 = _X_00 + fVar28;
              }
              fVar28 = _guard_xfg_dispatch_icall_nop(_X_00);
              fVar24 = _guard_xfg_dispatch_icall_nop(_X_00);
              iVar11 = (int)fVar24;
              iVar13 = 0;
              if (0 < (int)fVar28) {
                iVar13 = (int)fVar28;
              }
              if (iVar5 <= iVar13) {
                iVar13 = iVar18;
              }
              iVar10 = 0;
              if (0 < iVar11) {
                iVar10 = iVar11;
              }
              if (iVar10 < iVar5) {
                iVar18 = iVar10;
              }
              *(float *)(lVar21 + lVar1) =
                   ((1.0 - ((float)iVar11 - _X_00)) * *(float *)(lVar7 + (longlong)iVar18 * 4) +
                   ((float)iVar11 - _X_00) * *(float *)(lVar7 + (longlong)iVar13 * 4)) *
                   *(float *)(&DAT_146b52ae0 + ((longlong)(fVar3 * 8192.0) & 0xffffffffU) * 4) +
                   ((1.0 - ((float)iVar9 - _X)) * fVar22 + ((float)iVar9 - _X) * fVar23) * fVar2;
              lVar21 = lVar21 + 4;
              local_138 = (double)((longlong)local_138 - 1);
            } while (local_138 != 0.0);
          }
          lVar20 = lVar20 + 0x18;
          local_128 = local_128 + 1;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      local_res8 = local_res8 + iVar16;
    } while (local_res8 < local_130);
  }
  return;
}



// FUNCTION 14325b7d0 FUN_14325b7d0 body=1182 status=ok
// SIG undefined FUN_14325b7d0(void)

undefined8
FUN_14325b7d0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,uint *param_5)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  void *pvVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar9;
  byte bVar10;
  float *pfVar11;
  undefined8 uVar12;
  undefined8 extraout_XMM0_Qb;
  float fVar13;
  ulonglong uVar8;
  
  if (param_4 != 0) {
    uVar9 = 0;
    *(longlong *)(param_1 + 0x10) = param_4;
    if (DAT_146b5aae0 == '\0') {
      pfVar11 = (float *)&DAT_146b52ae0;
      uVar8 = uVar9;
      do {
        uVar12 = __vdecl_cosf4();
        uVar7 = (int)uVar8 + 4;
        uVar8 = (ulonglong)uVar7;
        *pfVar11 = 0.5 - (float)uVar12 * 0.5;
        pfVar11[1] = 0.5 - (float)((ulonglong)uVar12 >> 0x20) * 0.5;
        pfVar11[2] = 0.5 - (float)extraout_XMM0_Qb * 0.5;
        pfVar11[3] = 0.5 - (float)((ulonglong)extraout_XMM0_Qb >> 0x20) * 0.5;
        pfVar11 = pfVar11 + 4;
      } while ((int)uVar7 < 0x2000);
      DAT_146b5aae0 = '\x01';
    }
    uVar7 = *param_5;
    *(undefined4 *)(param_1 + 8) = 0x3ecccccd;
    *(float *)(param_1 + 0xc) = (float)uVar7;
    *(int *)(param_1 + 0x84) = (int)(longlong)((float)uVar7 * 0.4);
    uVar7 = param_5[1] & 0xff;
    *(uint *)(param_1 + 0x80) = uVar7;
    if ((param_5[1] & 0x8000) != 0) {
      uVar7 = uVar7 - 1;
      *(uint *)(param_1 + 0x80) = uVar7;
    }
    if (uVar7 - 1 < 0x20) {
      FUN_14325fcb0(param_1 + 0x18,0x40200000,(float)*param_5);
      FUN_14325fcb0(param_1 + 0x38,0x43480000,(float)*param_5);
      FUN_14325ff60(param_1 + 0x58);
      FUN_14325ff60(param_1 + 0x60);
      fVar13 = *(float *)(*(longlong *)(param_1 + 0x10) + 0xc);
      if (fVar13 <= 0.1) {
        fVar13 = 0.1;
      }
      FUN_14325ff70(param_1 + 0x68,fVar13,*(float *)(param_1 + 0xc) * 0.015625);
      lVar4 = (**(code **)(*param_2 + 8))(param_2,(ulonglong)*(uint *)(param_1 + 0x80) * 0x18);
      *(longlong *)(param_1 + 0x78) = lVar4;
      if (lVar4 != 0) {
        bVar10 = 1;
        uVar8 = uVar9;
        if (*(int *)(param_1 + 0x80) != 0) {
          do {
            lVar4 = *(longlong *)(param_1 + 0x78);
            *(undefined8 *)(lVar4 + uVar8 * 0x18) = 0;
            *(undefined8 *)(lVar4 + 8 + uVar8 * 0x18) = 0;
            *(undefined4 *)(lVar4 + 0x10 + uVar8 * 0x18) = 0;
            lVar4 = *(longlong *)(param_1 + 0x78);
            uVar1 = *(undefined4 *)(param_1 + 0x84);
            *(longlong **)(lVar4 + uVar8 * 0x18) = param_2;
            bVar3 = FUN_14325be10(lVar4 + uVar8 * 0x18,uVar1);
            bVar10 = bVar10 & bVar3;
            uVar7 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar7;
          } while (uVar7 < *(uint *)(param_1 + 0x80));
        }
        *(longlong **)(param_1 + 0x88) = param_2;
        *(undefined4 *)(param_1 + 0x98) = 0;
        plVar6 = param_2;
        if (*(longlong *)(param_1 + 0x90) != 0) {
          (**(code **)(*param_2 + 0x10))();
          plVar6 = *(longlong **)(param_1 + 0x88);
          *(undefined8 *)(param_1 + 0x90) = 0;
        }
        if (plVar6 != (longlong *)0x0) {
          pvVar5 = (void *)(**(code **)(*plVar6 + 8))();
          *(void **)(param_1 + 0x90) = pvVar5;
          if (pvVar5 != (void *)0x0) {
            *(undefined4 *)(param_1 + 0x98) = 0x40;
            _guard_xfg_dispatch_icall_nop(pvVar5,0,0x100);
          }
        }
        bVar3 = 0;
        if (*(int *)(param_1 + 0x98) == 0x40) {
          bVar3 = bVar10;
        }
        *(longlong **)(param_1 + 0xa0) = param_2;
        *(undefined4 *)(param_1 + 0xb0) = 0;
        plVar6 = param_2;
        if (*(longlong *)(param_1 + 0xa8) != 0) {
          (**(code **)(*param_2 + 0x10))();
          plVar6 = *(longlong **)(param_1 + 0xa0);
          *(undefined8 *)(param_1 + 0xa8) = 0;
        }
        if (plVar6 != (longlong *)0x0) {
          pvVar5 = (void *)(**(code **)(*plVar6 + 8))();
          *(void **)(param_1 + 0xa8) = pvVar5;
          if (pvVar5 != (void *)0x0) {
            *(undefined4 *)(param_1 + 0xb0) = 0x40;
            _guard_xfg_dispatch_icall_nop(pvVar5,0,0x100);
          }
        }
        iVar2 = *(int *)(param_1 + 0xb0);
        *(longlong **)(param_1 + 0xb8) = param_2;
        *(undefined4 *)(param_1 + 200) = 0;
        plVar6 = param_2;
        if (*(longlong *)(param_1 + 0xc0) != 0) {
          (**(code **)(*param_2 + 0x10))();
          plVar6 = *(longlong **)(param_1 + 0xb8);
          *(undefined8 *)(param_1 + 0xc0) = 0;
        }
        if (plVar6 != (longlong *)0x0) {
          pvVar5 = (void *)(**(code **)(*plVar6 + 8))();
          *(void **)(param_1 + 0xc0) = pvVar5;
          if (pvVar5 != (void *)0x0) {
            *(undefined4 *)(param_1 + 200) = 0x40;
            _guard_xfg_dispatch_icall_nop(pvVar5,0,0x100);
          }
        }
        bVar10 = 0;
        if (*(int *)(param_1 + 200) == 0x40) {
          bVar10 = iVar2 == 0x40 & bVar3;
        }
        *(longlong **)(param_1 + 0xd0) = param_2;
        *(undefined4 *)(param_1 + 0xe0) = 0;
        plVar6 = param_2;
        if (*(longlong *)(param_1 + 0xd8) != 0) {
          (**(code **)(*param_2 + 0x10))();
          plVar6 = *(longlong **)(param_1 + 0xd0);
          *(undefined8 *)(param_1 + 0xd8) = 0;
        }
        if (plVar6 != (longlong *)0x0) {
          pvVar5 = (void *)(**(code **)(*plVar6 + 8))();
          *(void **)(param_1 + 0xd8) = pvVar5;
          if (pvVar5 != (void *)0x0) {
            *(undefined4 *)(param_1 + 0xe0) = 0x40;
            _guard_xfg_dispatch_icall_nop(pvVar5,0,0x100);
          }
        }
        iVar2 = *(int *)(param_1 + 0xe0);
        *(longlong **)(param_1 + 0xe8) = param_2;
        *(undefined4 *)(param_1 + 0xf8) = 0;
        if (*(longlong *)(param_1 + 0xf0) != 0) {
          (**(code **)(*param_2 + 0x10))(param_2);
          param_2 = *(longlong **)(param_1 + 0xe8);
          *(undefined8 *)(param_1 + 0xf0) = 0;
        }
        if (param_2 != (longlong *)0x0) {
          pvVar5 = (void *)(**(code **)(*param_2 + 8))(param_2);
          *(void **)(param_1 + 0xf0) = pvVar5;
          if (pvVar5 != (void *)0x0) {
            *(undefined4 *)(param_1 + 0xf8) = 0x40;
            _guard_xfg_dispatch_icall_nop(pvVar5,0,0x100);
          }
        }
        if (*(int *)(param_1 + 0xf8) == 0x40) {
          uVar9 = (ulonglong)(iVar2 == 0x40 & bVar10);
        }
        if ((char)uVar9 != '\0') {
          return 1;
        }
        return 0x34;
      }
    }
  }
  return 2;
}



// FUNCTION 14325bc70 FUN_14325bc70 body=40 status=ok
// SIG undefined FUN_14325bc70(void)

undefined8 FUN_14325bc70(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_4 == 0) {
    *(undefined4 *)(param_1 + 1) = 0x3ba3d70a;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f000000;
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014325bc94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_3,param_4);
  return uVar1;
}



// FUNCTION 14325bca0 FUN_14325bca0 body=358 status=ok
// SIG undefined FUN_14325bca0(void)

undefined8 FUN_14325bca0(longlong param_1)

{
  void *_Dst;
  uint uVar1;
  ulonglong uVar2;
  float fVar3;
  
  FUN_143260c20(param_1 + 0x18,0);
  FUN_143260c20(param_1 + 0x38,0);
  FUN_14325ff60(param_1 + 0x58);
  FUN_14325ff60(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = *(float *)(*(longlong *)(param_1 + 0x10) + 8) * *(float *)(param_1 + 0xc);
  }
  setPxJointLimitParametersBounceThreshold(param_1 + 0x68,fVar3);
  uVar2 = 0;
  if (*(int *)(param_1 + 0x80) != 0) {
    do {
      _Dst = *(void **)(*(longlong *)(param_1 + 0x78) + 8 + uVar2 * 0x18);
      if ((_Dst != (void *)0x0) &&
         (uVar1 = *(uint *)(*(longlong *)(param_1 + 0x78) + 0x10 + uVar2 * 0x18), uVar1 != 0)) {
        _guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)uVar1 << 2);
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x80));
  }
  if ((*(void **)(param_1 + 0x90) != (void *)0x0) && (*(uint *)(param_1 + 0x98) != 0)) {
    _guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 0x90),0,(ulonglong)*(uint *)(param_1 + 0x98) << 2);
  }
  if ((*(void **)(param_1 + 0xa8) != (void *)0x0) && (*(uint *)(param_1 + 0xb0) != 0)) {
    _guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 0xa8),0,(ulonglong)*(uint *)(param_1 + 0xb0) << 2);
  }
  if ((*(void **)(param_1 + 0xc0) != (void *)0x0) && (*(uint *)(param_1 + 200) != 0)) {
    _guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 0xc0),0,(ulonglong)*(uint *)(param_1 + 200) << 2);
  }
  if ((*(void **)(param_1 + 0xd8) != (void *)0x0) && (*(uint *)(param_1 + 0xe0) != 0)) {
    _guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 0xd8),0,(ulonglong)*(uint *)(param_1 + 0xe0) << 2);
  }
  if ((*(void **)(param_1 + 0xf0) != (void *)0x0) && (*(uint *)(param_1 + 0xf8) != 0)) {
    _guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 0xf0),0,(ulonglong)*(uint *)(param_1 + 0xf8) << 2);
  }
  return 1;
}



// FUNCTION 14325be10 FUN_14325be10 body=127 status=ok
// SIG undefined FUN_14325be10(void)

bool FUN_14325be10(longlong *param_1,uint param_2)

{
  void *_Dst;
  
  *(undefined4 *)(param_1 + 2) = 0;
  if ((param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    param_1[1] = 0;
  }
  if ((param_2 != 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
    _Dst = (void *)(**(code **)(*(longlong *)*param_1 + 8))();
    param_1[1] = (longlong)_Dst;
    if (_Dst != (void *)0x0) {
      *(uint *)(param_1 + 2) = param_2;
      _guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)param_2 << 2);
    }
  }
  return *(uint *)(param_1 + 2) == param_2;
}



// FUNCTION 14325be90 FUN_14325be90 body=45 status=ok
// SIG undefined FUN_14325be90(void)

undefined8 FUN_14325be90(longlong param_1,short param_2,undefined4 *param_3)

{
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 8) = *param_3;
    return 1;
  }
  if (param_2 != 1) {
    return 0x1f;
  }
  *(undefined4 *)(param_1 + 0xc) = *param_3;
  return 1;
}



// FUNCTION 14325bec0 FUN_14325bec0 body=286 status=ok
// SIG undefined FUN_14325bec0(void)

undefined8 FUN_14325bec0(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    do {
      plVar1 = *(longlong **)(param_1[0xf] + uVar3 * 0x18);
      if ((plVar1 != (longlong *)0x0) && (*(longlong *)(param_1[0xf] + 8 + uVar3 * 0x18) != 0)) {
        (**(code **)(*plVar1 + 0x10))();
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 0x10));
  }
  if (param_1[0xf] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  if (((longlong *)param_1[0x11] != (longlong *)0x0) && (param_1[0x12] != 0)) {
    (**(code **)(*(longlong *)param_1[0x11] + 0x10))();
  }
  if (((longlong *)param_1[0x14] != (longlong *)0x0) && (param_1[0x15] != 0)) {
    (**(code **)(*(longlong *)param_1[0x14] + 0x10))();
  }
  if (((longlong *)param_1[0x17] != (longlong *)0x0) && (param_1[0x18] != 0)) {
    (**(code **)(*(longlong *)param_1[0x17] + 0x10))();
  }
  if (((longlong *)param_1[0x1a] != (longlong *)0x0) && (param_1[0x1b] != 0)) {
    (**(code **)(*(longlong *)param_1[0x1a] + 0x10))();
  }
  if (((longlong *)param_1[0x1d] != (longlong *)0x0) && (param_1[0x1e] != 0)) {
    (**(code **)(*(longlong *)param_1[0x1d] + 0x10))();
  }
  (**(code **)*param_1)(param_1,0);
  (**(code **)(*param_2 + 0x10))(param_2,param_1);
  return 1;
}



// FUNCTION 14325bfe0 FUN_14325bfe0 body=20 status=ok
// SIG undefined FUN_14325bfe0(void)

undefined8 FUN_14325bfe0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  return 1;
}



// FUNCTION 14325c000 FUN_14325c000 body=48 status=ok
// SIG undefined FUN_14325c000(void)

void FUN_14325c000(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = CGbxVoxVUParams::vftable;
    return;
  }
  return;
}



// FUNCTION 14325c030 FUN_14325c030 body=78 status=ok
// SIG undefined FUN_14325c030(void)

undefined8 * FUN_14325c030(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x50);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = 0xffffffffffffffff;
    *puVar1 = CGbxVoxVU::vftable;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14325c080 FUN_14325c080 body=45 status=ok
// SIG undefined FUN_14325c080(void)

void FUN_14325c080(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = CGbxVoxVUParams::vftable;
    return;
  }
  return;
}



// FUNCTION 14325c0b0 FUN_14325c0b0 body=1153 status=ok
// SIG undefined FUN_14325c0b0(void)

void FUN_14325c0b0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  float *pfVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if ((*(longlong *)(param_1 + 0x10) != 0) && (*(longlong *)(param_1 + 0x18) != -1)) {
    uVar3 = *(uint *)(param_2 + 1) & 0xff;
    uVar2 = *(ushort *)((longlong)param_2 + 0x12);
    uVar6 = uVar3 - 1;
    if ((*(uint *)(param_2 + 1) & 0x8000) == 0) {
      uVar6 = uVar3;
    }
    uVar5 = (ulonglong)uVar6;
    if ((uVar6 != 0) && (uVar2 != 0)) {
      fVar10 = (float)uVar5;
      if ((*(void **)(param_1 + 0x28) != (void *)0x0) && (*(uint *)(param_1 + 0x30) != 0)) {
        _guard_xfg_dispatch_icall_nop
                  (*(void **)(param_1 + 0x28),0,(ulonglong)*(uint *)(param_1 + 0x30) << 2);
      }
      if (uVar6 != 0) {
        lVar4 = 0;
        do {
          (**(code **)(**(longlong **)(param_1 + 0x10) + 0x78))
                    (*(longlong **)(param_1 + 0x10),
                     *param_2 + (ulonglong)*(ushort *)(param_2 + 2) * lVar4 * 4,
                     *(undefined8 *)(param_1 + 0x28),1.0 / fVar10,1.0 / fVar10,uVar2);
          lVar4 = lVar4 + 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
      uVar6 = (uint)uVar2;
      if (uVar6 != 0) {
        uVar3 = 0x10;
        do {
          if (uVar3 - 0x10 < uVar6) {
            fVar10 = *(float *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar3 - 0x10) * 4) *
                     0.08;
          }
          else {
            fVar10 = 0.0;
          }
          if (uVar3 - 8 < uVar6) {
            fVar18 = *(float *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar3 - 8) * 4) * 0.215;
          }
          else {
            fVar18 = 0.0;
          }
          if (uVar3 < uVar6) {
            fVar16 = *(float *)(*(longlong *)(param_1 + 0x28) + (ulonglong)uVar3 * 4) * 0.54;
          }
          else {
            fVar16 = 0.0;
          }
          if (uVar3 + 8 < uVar6) {
            fVar17 = *(float *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar3 + 8) * 4) * 0.865;
          }
          else {
            fVar17 = 0.0;
          }
          if (uVar3 + 0x10 < uVar6) {
            fVar19 = *(float *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar3 + 0x10) * 4);
          }
          else {
            fVar19 = 0.0;
          }
          if (uVar3 + 0x18 < uVar6) {
            fVar15 = *(float *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar3 + 0x18) * 4) *
                     0.865;
          }
          else {
            fVar15 = 0.0;
          }
          uVar7 = (uint)uVar2;
          if (uVar3 + 0x20 < uVar7) {
            fVar14 = *(float *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar3 + 0x20) * 4) *
                     0.54;
          }
          else {
            fVar14 = 0.0;
          }
          if (uVar3 + 0x28 < uVar7) {
            fVar13 = *(float *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar3 + 0x28) * 4) *
                     0.215;
          }
          else {
            fVar13 = 0.0;
          }
          pfVar8 = (float *)(param_1 + 0x38);
          lVar4 = 0;
          lVar9 = 5;
          do {
            fVar12 = fVar10 * *(float *)((longlong)&DAT_145af01e0 + lVar4) + 0.0 +
                     fVar18 * *(float *)((longlong)&DAT_145af01e4 + lVar4) +
                     fVar16 * *(float *)((longlong)&DAT_145af01e8 + lVar4) +
                     fVar17 * *(float *)((longlong)&DAT_145af01ec + lVar4) +
                     fVar19 * *(float *)((longlong)&DAT_145af01f0 + lVar4) +
                     fVar15 * *(float *)((longlong)&DAT_145af01f4 + lVar4) +
                     fVar14 * *(float *)((longlong)&DAT_145af01f8 + lVar4) +
                     fVar13 * *(float *)((longlong)&DAT_145af01fc + lVar4);
            fVar11 = fVar10 * *(float *)((longlong)&DAT_145af0280 + lVar4) + 0.0 +
                     fVar18 * *(float *)((longlong)&DAT_145af0284 + lVar4) +
                     fVar16 * *(float *)((longlong)&DAT_145af0288 + lVar4) +
                     fVar17 * *(float *)((longlong)&DAT_145af028c + lVar4) +
                     fVar19 * *(float *)((longlong)&DAT_145af0290 + lVar4) +
                     fVar15 * *(float *)((longlong)&DAT_145af0294 + lVar4) +
                     fVar14 * *(float *)((longlong)&DAT_145af0298 + lVar4) +
                     fVar13 * *(float *)((longlong)&DAT_145af029c + lVar4);
            fVar11 = _guard_xfg_dispatch_icall_nop(fVar11 * fVar11 + fVar12 * fVar12);
            lVar4 = lVar4 + 0x20;
            *pfVar8 = fVar11 * (64.0 / (float)uVar2) + *pfVar8;
            pfVar8 = pfVar8 + 1;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
          uVar1 = uVar3 + 0x30;
          uVar3 = uVar3 + 0x40;
        } while (uVar1 < uVar7);
      }
    }
  }
  return;
}



// FUNCTION 14325c540 FUN_14325c540 body=216 status=ok
// SIG undefined FUN_14325c540(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_14325c540(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [32];
  byte local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  if (param_1 == 0) {
    return 0;
  }
  uVar4 = 0;
  do {
    bVar1 = *(byte *)(param_1 + uVar4);
    if (bVar1 == 0) break;
    bVar2 = bVar1 + 0x20;
    if (0x19 < (byte)(bVar1 + 0xbf)) {
      bVar2 = bVar1;
    }
    local_58[uVar4] = bVar2;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x3f);
  if (0x3f < uVar4) {
                    /* WARNING: Subroutine does not return */
    __report_rangecheckfailure();
  }
  local_58[uVar4] = 0;
  uVar3 = 0x811c9dc5;
  pbVar5 = local_58;
  uVar6 = uVar4 & 0xffffffff;
  if (local_58 + (uVar4 & 0xffffffff) < local_58) {
    uVar6 = 0;
  }
  if (uVar6 != 0) {
    do {
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      uVar3 = uVar3 * 0x1000193 ^ (uint)bVar1;
    } while ((ulonglong)((longlong)pbVar5 - (longlong)local_58) < uVar6);
  }
  return uVar3;
}



// FUNCTION 14325c620 FUN_14325c620 body=269 status=ok
// SIG undefined FUN_14325c620(void)

undefined8 FUN_14325c620(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  void *_Dst;
  ulonglong uVar4;
  ulonglong uVar5;
  
  *(undefined8 *)(param_1 + 8) = param_4;
  uVar2 = (**(code **)(*param_3 + 8))(param_3);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  plVar3 = (longlong *)(**(code **)(*param_3 + 0x10))(param_3);
  uVar2 = (**(code **)(*plVar3 + 8))(plVar3);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
  if (param_2 != 0) {
    *(longlong *)(param_1 + 0x20) = param_2;
  }
  uVar4 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong **)(param_1 + 0x20) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  if ((uVar1 != 0) && (*(longlong **)(param_1 + 0x20) != (longlong *)0x0)) {
    _Dst = (void *)(**(code **)(**(longlong **)(param_1 + 0x20) + 8))();
    *(void **)(param_1 + 0x28) = _Dst;
    if (_Dst != (void *)0x0) {
      *(uint *)(param_1 + 0x30) = (uint)uVar1;
      _guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)uVar1 << 2);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(uint *)(param_1 + 0x30) == (uint)uVar1) {
    uVar5 = uVar4;
    if (DAT_146b5aae8 != 0) {
      do {
        if (*(longlong *)(DAT_146b5aae8 + uVar4 * 8) == 0) {
          *(longlong *)(DAT_146b5aae8 + (longlong)(int)uVar5 * 8) = param_1;
          break;
        }
        uVar4 = uVar4 + 1;
        uVar5 = (ulonglong)((int)uVar5 + 1);
      } while ((longlong)uVar4 < 0x10);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0x34;
  }
  return uVar2;
}



// FUNCTION 14325c730 FUN_14325c730 body=19 status=ok
// SIG undefined FUN_14325c730(void)

undefined8 FUN_14325c730(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return 1;
}



// FUNCTION 14325c750 FUN_14325c750 body=188 status=ok
// SIG undefined FUN_14325c750(void)

undefined8 FUN_14325c750(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar1 = DAT_146b5aae8;
  if ((param_1 != (undefined8 *)0x0) && (DAT_146b5aae8 != 0)) {
    uVar4 = 0;
    uVar2 = uVar4;
    uVar5 = uVar4;
    do {
      if (*(undefined8 **)(DAT_146b5aae8 + uVar2 * 8) == param_1) {
        *(undefined8 *)(DAT_146b5aae8 + (longlong)(int)uVar5 * 8) = 0;
        if (param_1[3] != -1) {
          plVar3 = (longlong *)(lVar1 + 0x80);
          uVar2 = uVar4;
          goto LAB_14325c7a7;
        }
        break;
      }
      uVar5 = (ulonglong)((int)uVar5 + 1);
      uVar2 = uVar2 + 1;
    } while ((longlong)uVar2 < 0x10);
  }
  goto LAB_14325c7c9;
  while( true ) {
    uVar4 = (ulonglong)((int)uVar4 + 1);
    uVar2 = uVar2 + 1;
    plVar3 = plVar3 + 1;
    if (0xf < (longlong)uVar2) break;
LAB_14325c7a7:
    if (*plVar3 == 0) {
      *(undefined8 *)(lVar1 + 0x80 + (longlong)(int)uVar4 * 8) = param_1[3];
      break;
    }
  }
LAB_14325c7c9:
  if (((longlong *)param_1[4] != (longlong *)0x0) && (param_1[5] != 0)) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
  }
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 14325c810 FUN_14325c810 body=578 status=ok
// SIG undefined FUN_14325c810(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14325c810(longlong *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_238 [32];
  undefined4 local_218;
  undefined4 local_210;
  undefined1 local_208;
  longlong local_1f8 [16];
  float local_178 [80];
  ulonglong local_38;
  
  lVar8 = DAT_146b5aae8;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  if ((DAT_146b5aae8 != 0) && (param_2 == 8)) {
    _guard_xfg_dispatch_icall_nop(local_1f8,0,0x80);
    _guard_xfg_dispatch_icall_nop(local_178,0,0x140);
    uVar12 = 0;
    uVar13 = uVar12;
    do {
      lVar11 = *(longlong *)(uVar13 + lVar8);
      if (lVar11 == 0) {
LAB_14325c94f:
        lVar11 = *(longlong *)(uVar13 + 0x80 + lVar8);
        uVar5 = uVar12;
        uVar7 = uVar12;
        if (lVar11 != 0) {
          do {
            if ((local_1f8[uVar5] == lVar11) || (local_1f8[uVar5] == 0)) {
              local_1f8[uVar5] = lVar11;
              break;
            }
            uVar6 = (int)uVar7 + 1;
            uVar5 = uVar5 + 1;
            uVar7 = (ulonglong)uVar6;
          } while ((int)uVar6 < 0x10);
          *(undefined8 *)(uVar13 + 0x80 + lVar8) = 0;
          lVar8 = DAT_146b5aae8;
        }
      }
      else {
        lVar4 = *(longlong *)(lVar11 + 0x18);
        uVar5 = uVar12;
        uVar7 = uVar12;
        if (lVar4 != -1) {
          do {
            if ((local_1f8[uVar5] == lVar4) || (local_1f8[uVar5] == 0)) {
              fVar1 = *(float *)(lVar11 + 0x38);
              fVar2 = *(float *)(lVar11 + 0x3c);
              local_1f8[uVar5] = lVar4;
              fVar3 = local_178[uVar5 * 5 + 1];
              local_178[uVar5 * 5] = fVar1 + local_178[uVar5 * 5];
              fVar1 = *(float *)(lVar11 + 0x40);
              local_178[uVar5 * 5 + 1] = fVar2 + fVar3;
              fVar2 = *(float *)(lVar11 + 0x44);
              local_178[uVar5 * 5 + 2] = fVar1 + local_178[uVar5 * 5 + 2];
              fVar1 = *(float *)(lVar11 + 0x48);
              local_178[uVar5 * 5 + 3] = fVar2 + local_178[uVar5 * 5 + 3];
              local_178[uVar5 * 5 + 4] = fVar1 + local_178[uVar5 * 5 + 4];
              break;
            }
            uVar6 = (int)uVar7 + 1;
            uVar5 = uVar5 + 1;
            uVar7 = (ulonglong)uVar6;
          } while ((int)uVar6 < 0x10);
          goto LAB_14325c94f;
        }
      }
      uVar13 = uVar13 + 8;
    } while ((longlong)uVar13 < 0x80);
    puVar10 = &stack0xfffffffeb94a5398;
    do {
      lVar8 = local_1f8[uVar12];
      if (lVar8 == 0) {
        return;
      }
      puVar9 = &DAT_146b5aaf0;
      lVar11 = 5;
      do {
        local_208 = 0;
        local_210 = 4;
        local_218 = 100;
        (**(code **)(*param_1 + 0x58))
                  (param_1,*puVar9,*(undefined4 *)((longlong)puVar9 + (longlong)puVar10),lVar8);
        puVar9 = puVar9 + 1;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      uVar12 = uVar12 + 1;
      puVar10 = puVar10 + 0x14;
    } while ((longlong)uVar12 < 0x10);
  }
  return;
}



// FUNCTION 14325ca60 FUN_14325ca60 body=319 status=ok
// SIG undefined FUN_14325ca60(void)

void FUN_14325ca60(longlong *param_1,int param_2)

{
  longlong *plVar1;
  void *pvVar2;
  
  if (param_2 == 1) {
    if (DAT_146b5aae8 == (void *)0x0) {
      plVar1 = (longlong *)(**(code **)(*param_1 + 0x50))();
      pvVar2 = (void *)(**(code **)(*plVar1 + 8))(plVar1);
      if (pvVar2 == (void *)0x0) {
        pvVar2 = (void *)0x0;
      }
      else {
        _guard_xfg_dispatch_icall_nop(pvVar2,0,0x100);
      }
      DAT_146b5aae8 = pvVar2;
      if (pvVar2 != (void *)0x0) {
        (**(code **)(*param_1 + 0x40))(param_1,3,0x40,0x3ec,FUN_14325ca60,0x80,0);
        (**(code **)(*param_1 + 0x40))(param_1,3,0x40,0x3ec,FUN_14325c810,8,0);
        return;
      }
    }
  }
  else if ((param_2 == 0x80) && (DAT_146b5aae8 != (void *)0x0)) {
    (**(code **)(*param_1 + 0x48))(param_1,FUN_14325c810,8);
    pvVar2 = DAT_146b5aae8;
    plVar1 = (longlong *)(**(code **)(*param_1 + 0x50))(param_1);
    if (pvVar2 != (void *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,pvVar2);
    }
    DAT_146b5aae8 = (void *)0x0;
  }
  return;
}



// FUNCTION 14325cbc0 FUN_14325cbc0 body=11 status=ok
// SIG undefined FUN_14325cbc0(void)

void FUN_14325cbc0(undefined8 *param_1)

{
  *param_1 = AK::IAkPlugin::vftable;
  return;
}



// FUNCTION 14325cbd0 FUN_14325cbd0 body=162 status=ok
// SIG undefined FUN_14325cbd0(void)

undefined8 * FUN_14325cbd0(undefined8 *param_1,uint param_2)

{
  *param_1 = CGbxAcousticsMixer::vftable;
  _eh_vector_destructor_iterator_
            (param_1 + 0x1b,0x20,3,AK::MemoryMgr::StartProfileThreadUsage,0xfffffffffffffffe);
  _eh_vector_destructor_iterator_(param_1 + 0x12,0x18,3,AK::MemoryMgr::StartProfileThreadUsage);
  _eh_vector_destructor_iterator_(param_1 + 9,0x18,3,AK::MemoryMgr::StartProfileThreadUsage);
  *param_1 = AK::IAkPlugin::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1b8);
  }
  return param_1;
}



// FUNCTION 14325cc80 FUN_14325cc80 body=243 status=ok
// SIG undefined FUN_14325cc80(void)

void FUN_14325cc80(longlong param_1,undefined8 param_2,longlong param_3,ulonglong param_4,
                  float param_5,float param_6,undefined2 param_7)

{
  float fVar1;
  undefined2 uVar2;
  float *pfVar3;
  longlong lVar4;
  
  param_1 = param_1 + 0xd8;
  lVar4 = 3;
  pfVar3 = (float *)(&DAT_145af0510 + (param_4 & 0xffffffff) * 0xc);
  do {
    fVar1 = *pfVar3;
    if (fVar1 != 0.0) {
      uVar2 = FUN_14325d540(param_3);
      FUN_14325fff0(param_1,param_2,*(undefined8 *)(param_3 + 8),param_7,fVar1 * param_5,
                    fVar1 * param_6,uVar2);
    }
    param_1 = param_1 + 0x20;
    pfVar3 = pfVar3 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}



// FUNCTION 14325cd80 FUN_14325cd80 body=70 status=ok
// SIG undefined FUN_14325cd80(void)

void FUN_14325cd80(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = CGbxAcousticsMixerParams::vftable;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    return;
  }
  return;
}



// FUNCTION 14325cdd0 FUN_14325cdd0 body=1631 status=ok
// SIG undefined FUN_14325cdd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14325cdd0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 *puVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_168 [32];
  float local_148;
  undefined2 local_140;
  undefined8 local_138;
  undefined8 local_130;
  float local_128;
  float local_120 [5];
  float local_10c;
  float local_108 [5];
  float local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  if (*(int *)((longlong)param_5 + 0xc) == 0x2d) {
    local_138 = param_3;
    local_130 = param_4;
    plVar9 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2);
    uVar10 = (**(code **)(*plVar9 + 8))(plVar9);
    puVar11 = (undefined4 *)FUN_14325d570(param_1,uVar10);
    if ((puVar11 != (undefined4 *)0x0) &&
       (puVar12 = (undefined4 *)(**(code **)(*param_2 + 0x28))(param_2),
       puVar12 != (undefined4 *)0x0)) {
      local_128 = (float)puVar12[4];
      uVar5 = puVar11[1];
      uVar6 = puVar11[2];
      uVar7 = puVar11[3];
      fVar20 = (float)puVar12[2];
      fVar1 = (float)puVar11[2];
      fVar2 = (float)puVar12[3];
      fVar3 = (float)puVar11[3];
      fVar24 = (float)puVar12[5];
      fVar22 = (float)puVar11[5];
      fVar25 = (float)puVar11[4];
      *puVar12 = *puVar11;
      puVar12[1] = uVar5;
      puVar12[2] = uVar6;
      puVar12[3] = uVar7;
      *(undefined8 *)(puVar12 + 4) = *(undefined8 *)(puVar11 + 4);
      uVar8 = *(uint *)(param_5 + 1);
      if ((uVar8 & 0xf00) == 0x200) {
        fVar20 = (float)local_138 * (float)local_130 * local_128;
        fVar25 = fVar25 * local_138._4_4_ * local_130._4_4_;
        fVar24 = (float)local_138 * (float)local_130 * fVar24;
        fVar22 = local_138._4_4_ * local_130._4_4_ * fVar22;
        plVar9 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
        plVar13 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
        uVar10 = *(undefined8 *)(param_1 + 0x50);
        lVar17 = *param_5;
        lVar16 = *plVar13;
        local_140 = (**(code **)(*plVar9 + 0x10))(plVar9);
        local_148 = fVar25;
        (**(code **)(lVar16 + 0x78))(plVar13,lVar17,uVar10,fVar20);
        plVar9 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
        plVar13 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
        lVar17 = *param_5;
        uVar4 = *(ushort *)(param_5 + 2);
        uVar10 = *(undefined8 *)(param_1 + 0x68);
        lVar16 = *plVar13;
        local_140 = (**(code **)(*plVar9 + 0x10))(plVar9);
        local_148 = fVar25;
        (**(code **)(lVar16 + 0x78))(plVar13,lVar17 + (ulonglong)uVar4 * 4,uVar10,fVar20);
        plVar9 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
        plVar13 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
        uVar4 = *(ushort *)(param_5 + 2);
        uVar10 = *(undefined8 *)(param_1 + 0x80);
        lVar17 = *plVar13;
        lVar16 = *param_5;
        local_140 = (**(code **)(*plVar9 + 0x10))(plVar9);
        local_148 = fVar25;
        (**(code **)(lVar17 + 0x78))(plVar13,lVar16 + (ulonglong)uVar4 * 0xc,uVar10,fVar20);
        plVar9 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
        plVar13 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
        uVar10 = *(undefined8 *)(param_1 + 0x98);
        lVar17 = *param_5;
        lVar16 = *plVar13;
        local_140 = (**(code **)(*plVar9 + 0x10))(plVar9);
        local_148 = fVar22;
        (**(code **)(lVar16 + 0x78))(plVar13,lVar17,uVar10,fVar24);
        plVar9 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
        plVar13 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
        lVar17 = *param_5;
        uVar4 = *(ushort *)(param_5 + 2);
        uVar10 = *(undefined8 *)(param_1 + 0xb0);
        lVar16 = *plVar13;
        fVar22 = fVar22 * -1.0;
        fVar24 = fVar24 * -1.0;
        local_140 = (**(code **)(*plVar9 + 0x10))(plVar9);
        local_148 = fVar22;
        (**(code **)(lVar16 + 0x78))(plVar13,lVar17 + (ulonglong)uVar4 * 4,uVar10,fVar24);
        plVar9 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
        plVar13 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
        uVar4 = *(ushort *)(param_5 + 2);
        uVar10 = *(undefined8 *)(param_1 + 200);
        lVar17 = *plVar13;
        lVar16 = *param_5;
        local_140 = (**(code **)(*plVar9 + 0x10))(plVar9);
        local_148 = fVar22;
        (**(code **)(lVar17 + 0x78))(plVar13,lVar16 + (ulonglong)uVar4 * 0xc,uVar10,fVar24);
      }
      else {
        uVar8 = uVar8 - (uVar8 >> 0xf & 1);
        uVar14 = uVar8 & 0xff;
        uVar15 = (ulonglong)uVar14;
        if ((char)uVar8 != '\0') {
          fVar21 = (float)local_138 * (float)local_130;
          fVar23 = local_138._4_4_ * local_130._4_4_;
          fVar19 = (float)uVar15;
          if ((*(void **)(param_1 + 0x38) != (void *)0x0) && (*(uint *)(param_1 + 0x40) != 0)) {
            _guard_xfg_dispatch_icall_nop
                      (*(void **)(param_1 + 0x38),0,(ulonglong)*(uint *)(param_1 + 0x40) << 2);
          }
          if (uVar14 != 0) {
            lVar17 = 0;
            do {
              lVar16 = *param_5;
              uVar4 = *(ushort *)(param_5 + 2);
              plVar9 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
              local_140 = (undefined2)param_5[2];
              local_148 = fVar23 * (1.0 / fVar19);
              (**(code **)(*plVar9 + 0x78))
                        (plVar9,lVar16 + (ulonglong)uVar4 * lVar17 * 4,
                         *(undefined8 *)(param_1 + 0x38),fVar21 * (1.0 / fVar19));
              lVar17 = lVar17 + 1;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          local_120[3] = fVar1 * fVar25;
          local_120[2] = fVar20 * local_128;
          local_10c = fVar3 * fVar25;
          local_120[4] = fVar2 * local_128;
          local_120[0] = local_128;
          local_120[1] = fVar25;
          local_108[1] = _guard_xfg_dispatch_icall_nop
                                   (10.0,*(float *)(*(longlong *)(param_1 + 8) + 8) * 0.05);
          puVar18 = (undefined8 *)(param_1 + 0x98);
          local_108[0] = fVar24 * local_108[1];
          lVar17 = 0;
          local_108[1] = fVar22 * local_108[1];
          lVar16 = 3;
          local_108[2] = fVar20 * -1.0 * local_108[0];
          local_108[3] = fVar1 * -1.0 * local_108[1];
          local_108[4] = fVar2 * -1.0 * local_108[0];
          local_f4 = fVar3 * -1.0 * local_108[1];
          do {
            plVar9 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
            if (*(longlong *)(param_1 + 0x38) == 0) {
              local_140 = 0;
            }
            else {
              local_140 = (undefined2)*(undefined4 *)(param_1 + 0x40);
            }
            local_148 = *(float *)((longlong)local_120 + lVar17 + 4);
            (**(code **)(*plVar9 + 0x78))
                      (plVar9,*(longlong *)(param_1 + 0x38),puVar18[-9],
                       *(undefined4 *)((longlong)local_120 + lVar17));
            plVar9 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
            if (*(longlong *)(param_1 + 0x38) == 0) {
              local_140 = 0;
            }
            else {
              local_140 = (undefined2)*(undefined4 *)(param_1 + 0x40);
            }
            local_148 = *(float *)((longlong)local_108 + lVar17 + 4);
            (**(code **)(*plVar9 + 0x78))
                      (plVar9,*(longlong *)(param_1 + 0x38),*puVar18,
                       *(undefined4 *)((longlong)local_108 + lVar17));
            lVar17 = lVar17 + 8;
            puVar18 = puVar18 + 3;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
        }
      }
    }
  }
  return;
}



// FUNCTION 14325d430 FUN_14325d430 body=211 status=ok
// SIG undefined FUN_14325d430(void)

undefined8 * FUN_14325d430(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x1b8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = CGbxAcousticsMixer::vftable;
    puVar1[6] = 0;
    puVar1[7] = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    _eh_vector_constructor_iterator_
              (puVar1 + 9,0x18,3,DSP::CAkRectifier::CAkRectifier,
               AK::MemoryMgr::StartProfileThreadUsage);
    _eh_vector_constructor_iterator_
              (puVar1 + 0x12,0x18,3,DSP::CAkRectifier::CAkRectifier,
               AK::MemoryMgr::StartProfileThreadUsage);
    _eh_vector_constructor_iterator_
              (puVar1 + 0x1b,0x20,3,&LAB_14325cba0,AK::MemoryMgr::StartProfileThreadUsage);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14325d510 FUN_14325d510 body=45 status=ok
// SIG undefined FUN_14325d510(void)

void FUN_14325d510(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = CGbxAcousticsMixerParams::vftable;
    return;
  }
  return;
}



// FUNCTION 14325d540 FUN_14325d540 body=14 status=ok
// SIG undefined FUN_14325d540(void)

undefined4 FUN_14325d540(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    return *(undefined4 *)(param_1 + 0x10);
  }
  return 0;
}



// FUNCTION 14325d550 FUN_14325d550 body=25 status=ok
// SIG undefined FUN_14325d550(void)

undefined8 FUN_14325d550(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 6;
  *(undefined2 *)(param_2 + 2) = 0;
  param_2[1] = 0x7e201;
  return 1;
}



// FUNCTION 14325d570 FUN_14325d570 body=170 status=ok
// SIG undefined FUN_14325d570(void)

longlong * FUN_14325d570(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar3;
  uint uVar4;
  uint local_res8 [2];
  longlong local_res18 [2];
  longlong *plVar2;
  
  plVar2 = (longlong *)0x0;
  local_res18[0] = 0;
  local_res8[0] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))
            (*(longlong **)(param_1 + 0x10),local_res18,local_res8);
  if ((local_res18[0] != 0) && (0x7f < local_res8[0])) {
    uVar4 = (local_res8[0] - 0x80) / 0x18;
    plVar3 = (longlong *)(local_res18[0] + 0x80);
    if (uVar4 != 0) {
      while (*plVar3 != param_2) {
        uVar1 = (int)plVar2 + 1;
        plVar2 = (longlong *)(ulonglong)uVar1;
        plVar3 = plVar3 + 3;
        if (uVar4 <= uVar1) {
          return (longlong *)0x0;
        }
      }
      plVar2 = (longlong *)(local_res18[0] + 0x80) + (longlong)plVar2 * 3;
    }
    return plVar2;
  }
  return (longlong *)0x0;
}



// FUNCTION 14325d620 FUN_14325d620 body=136 status=ok
// SIG undefined FUN_14325d620(void)

bool FUN_14325d620(longlong *param_1,longlong param_2,uint param_3)

{
  void *_Dst;
  
  if (param_2 != 0) {
    *param_1 = param_2;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if ((param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    param_1[1] = 0;
  }
  if ((param_3 != 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
    _Dst = (void *)(**(code **)(*(longlong *)*param_1 + 8))();
    param_1[1] = (longlong)_Dst;
    if (_Dst != (void *)0x0) {
      *(uint *)(param_1 + 2) = param_3;
      _guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)param_3 << 2);
    }
  }
  return *(uint *)(param_1 + 2) == param_3;
}



// FUNCTION 14325d6b0 FUN_14325d6b0 body=660 status=ok
// SIG undefined FUN_14325d6b0(void)

undefined8
FUN_14325d6b0(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4,uint *param_5)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined2 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  void *pvVar9;
  undefined8 uVar10;
  byte bVar11;
  uint *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  
  if ((param_5[1] & 0xf00) != 0x200) {
    return 0x4e;
  }
  *(undefined8 *)(param_1 + 8) = param_4;
  *(longlong **)(param_1 + 0x10) = param_3;
  *(longlong *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x20) = 0;
  uVar1 = *param_5;
  *(uint *)(param_1 + 0x28) = uVar1;
  uVar13 = (ulonglong)((float)uVar1 * 0.2);
  plVar7 = (longlong *)(**(code **)(*param_3 + 8))(param_3);
  uVar3 = (**(code **)(*plVar7 + 0x10))(plVar7);
  plVar7 = (longlong *)(**(code **)(*param_3 + 8))(param_3);
  plVar8 = (longlong *)(**(code **)(*param_3 + 8))(param_3);
  uVar4 = (**(code **)(*plVar7 + 0x10))(plVar7);
  uVar5 = (**(code **)(*plVar8 + 0x10))(plVar8);
  *(uint *)(param_1 + 0x2c) =
       (uint)uVar5 *
       ((int)((uVar13 & 0xffffffff) / (ulonglong)uVar4) +
       (uint)((int)((uVar13 & 0xffffffff) % (ulonglong)uVar3) != 0));
  plVar7 = (longlong *)(**(code **)(*param_3 + 8))(param_3);
  uVar6 = (**(code **)(*plVar7 + 0x10))(plVar7);
  FUN_14325d620(param_1 + 0x30,param_2,uVar6);
  lVar14 = param_1 + 0xd8;
  bVar2 = 1;
  puVar12 = (uint *)(param_1 + 0x58);
  lVar15 = 3;
  do {
    plVar7 = (longlong *)(**(code **)(*param_3 + 8))(param_3);
    uVar3 = (**(code **)(*plVar7 + 0x10))();
    if (param_2 != 0) {
      *(longlong *)(puVar12 + -4) = param_2;
    }
    *puVar12 = 0;
    if ((*(longlong *)(puVar12 + -2) != 0) && (*(longlong **)(puVar12 + -4) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(puVar12 + -4) + 0x10))();
      puVar12[-2] = 0;
      puVar12[-1] = 0;
    }
    if ((uVar3 != 0) && (*(longlong **)(puVar12 + -4) != (longlong *)0x0)) {
      pvVar9 = (void *)(**(code **)(**(longlong **)(puVar12 + -4) + 8))();
      *(void **)(puVar12 + -2) = pvVar9;
      if (pvVar9 != (void *)0x0) {
        *puVar12 = (uint)uVar3;
        _guard_xfg_dispatch_icall_nop(pvVar9,0,(ulonglong)uVar3 << 2);
      }
    }
    bVar11 = 0;
    if (*puVar12 == (uint)uVar3) {
      bVar11 = bVar2;
    }
    plVar7 = (longlong *)(**(code **)(*param_3 + 8))(param_3);
    uVar3 = (**(code **)(*plVar7 + 0x10))(plVar7);
    if (param_2 != 0) {
      *(longlong *)(puVar12 + 0xe) = param_2;
    }
    puVar12[0x12] = 0;
    if ((*(longlong *)(puVar12 + 0x10) != 0) && (*(longlong **)(puVar12 + 0xe) != (longlong *)0x0))
    {
      (**(code **)(**(longlong **)(puVar12 + 0xe) + 0x10))();
      puVar12[0x10] = 0;
      puVar12[0x11] = 0;
    }
    if ((uVar3 != 0) && (*(longlong **)(puVar12 + 0xe) != (longlong *)0x0)) {
      pvVar9 = (void *)(**(code **)(**(longlong **)(puVar12 + 0xe) + 8))();
      *(void **)(puVar12 + 0x10) = pvVar9;
      if (pvVar9 != (void *)0x0) {
        puVar12[0x12] = (uint)uVar3;
        _guard_xfg_dispatch_icall_nop(pvVar9,0,(ulonglong)uVar3 << 2);
      }
    }
    uVar1 = puVar12[0x12];
    plVar7 = (longlong *)(**(code **)(*param_3 + 8))(param_3);
    uVar4 = (**(code **)(*plVar7 + 0x10))(plVar7);
    bVar2 = thunk_FUN_14325d620(lVar14,param_2,(uint)uVar4 + *(int *)(param_1 + 0x2c));
    bVar2 = bVar11 & uVar1 == uVar3 & bVar2;
    lVar14 = lVar14 + 0x20;
    puVar12 = puVar12 + 6;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  uVar10 = 1;
  if (bVar2 == 0) {
    uVar10 = 0x34;
  }
  return uVar10;
}



// FUNCTION 14325d950 FUN_14325d950 body=37 status=ok
// SIG undefined FUN_14325d950(void)

undefined8 FUN_14325d950(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_4 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x40;
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014325d971. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_3,param_4);
  return uVar1;
}



// FUNCTION 14325d980 FUN_14325d980 body=181 status=ok
// SIG undefined FUN_14325d980(void)

void FUN_14325d980(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if ((*(int *)(param_1 + 0x20) == 0) && (0 < *(int *)(param_1 + 0x24))) {
    uVar1 = *(ushort *)(param_2 + 2);
    uVar3 = (ulonglong)*(byte *)(param_2 + 1);
    iVar2 = (uint)uVar1 - (uint)*(ushort *)((longlong)param_2 + 0x12);
    if (iVar2 != 0) {
      if (*(byte *)(param_2 + 1) != 0) {
        lVar4 = 0;
        do {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*param_2 +
                             ((ulonglong)*(ushort *)(param_2 + 2) * lVar4 +
                             (ulonglong)*(ushort *)((longlong)param_2 + 0x12)) * 4),0,
                     (ulonglong)(uint)(iVar2 * 4));
          lVar4 = lVar4 + 1;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
        uVar1 = *(ushort *)(param_2 + 2);
      }
      *(ushort *)((longlong)param_2 + 0x12) = uVar1;
    }
    *(undefined4 *)((longlong)param_2 + 0xc) = 0x2d;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
  }
  return;
}



// FUNCTION 14325da40 FUN_14325da40 body=158 status=ok
// SIG undefined FUN_14325da40(void)

void FUN_14325da40(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  if ((param_2 != (longlong *)0x0) && (lVar4 = (**(code **)(*param_2 + 0x10))(param_2), lVar4 != 0))
  {
    plVar5 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2);
    uVar6 = (**(code **)(*plVar5 + 8))(plVar5);
    puVar7 = (undefined4 *)FUN_14325d570(param_1,uVar6);
    if ((puVar7 != (undefined4 *)0x0) &&
       ((plVar5 = *(longlong **)(param_1 + 0x18), plVar5 != (longlong *)0x0 &&
        (puVar8 = (undefined4 *)(**(code **)(*plVar5 + 8))(plVar5,0x18), puVar8 != (undefined4 *)0x0
        )))) {
      uVar1 = puVar7[1];
      uVar2 = puVar7[2];
      uVar3 = puVar7[3];
      *puVar8 = *puVar7;
      puVar8[1] = uVar1;
      puVar8[2] = uVar2;
      puVar8[3] = uVar3;
      *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(puVar7 + 4);
      (**(code **)(*param_2 + 0x30))(param_2,puVar8);
    }
  }
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  *(undefined4 *)(param_1 + 0x24) = 0x20;
  return;
}



// FUNCTION 14325dae0 FUN_14325dae0 body=65 status=ok
// SIG undefined FUN_14325dae0(void)

void FUN_14325dae0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_2 + 0x28))(param_2);
    if ((lVar2 != 0) && (plVar1 = *(longlong **)(param_1 + 0x18), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x10))(plVar1,lVar2);
    }
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
    return;
  }
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
  return;
}



// FUNCTION 14325db30 FUN_14325db30 body=2180 status=ok
// SIG undefined FUN_14325db30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14325db30(longlong param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined2 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float *pfVar17;
  float fVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  float *pfVar23;
  longlong lVar24;
  float fVar25;
  ulonglong uVar26;
  uint *puVar27;
  undefined1 auStack_158 [32];
  float local_138;
  float local_130;
  float local_128;
  uint local_118;
  uint local_114;
  longlong local_110;
  undefined8 *local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong *local_e8;
  undefined8 *local_e0;
  uint local_d8 [2];
  float local_d0;
  ulonglong local_b0;
  
  local_b0 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_108 = (undefined8 *)0x0;
  local_118 = 0;
  local_e8 = param_2;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))
            (*(longlong **)(param_1 + 0x10),&local_108,&local_118);
  puVar9 = local_108;
  local_e0 = local_108;
  if ((local_108 == (undefined8 *)0x0) || (local_118 < 0x80)) {
    return;
  }
  plVar11 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
  (**(code **)(*plVar11 + 0x28))(plVar11,0,local_d8);
  plVar11 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
  fVar1 = local_d0;
  uVar19 = local_d8[0];
  local_130._0_2_ = (ushort)param_2[2];
  local_138 = 1.0;
  (**(code **)(*plVar11 + 0x78))(plVar11,*(undefined8 *)(param_1 + 0x50),*param_2,0x3f800000);
  local_130._0_2_ = *(ushort *)(param_2 + 2);
  local_138 = fVar1;
  (**(code **)(*plVar11 + 0x78))
            (plVar11,*(undefined8 *)(param_1 + 0x68),*param_2 + (ulonglong)local_130._0_2_ * 4,fVar1
            );
  local_130._0_2_ = *(ushort *)(param_2 + 2);
  local_138 = (float)uVar19;
  (**(code **)(*plVar11 + 0x78))
            (plVar11,*(undefined8 *)(param_1 + 0x80),*param_2 + (ulonglong)local_130._0_2_ * 4,
             uVar19);
  local_130._0_2_ = *(ushort *)(param_2 + 2);
  local_138 = (float)(uVar19 ^ 0x80000000);
  (**(code **)(*plVar11 + 0x78))
            (plVar11,*(undefined8 *)(param_1 + 0x68),*param_2 + (ulonglong)local_130._0_2_ * 0xc,
             local_138);
  local_130 = (float)CONCAT22(local_130._2_2_,*(ushort *)(param_2 + 2));
  local_138 = fVar1;
  (**(code **)(*plVar11 + 0x78))
            (plVar11,*(undefined8 *)(param_1 + 0x80),
             *param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 0xc,fVar1);
  lVar24 = (longlong)puVar9 - param_1;
  local_114 = 0;
  local_110 = 0;
  local_f8 = 3;
  pfVar23 = (float *)(param_1 + 0x13c);
  local_f0 = lVar24;
  do {
    lVar22 = local_110;
    uVar19 = local_114;
    lVar20 = 3;
    if ((*(void **)(param_1 + 0x38) != (void *)0x0) && (*(uint *)(param_1 + 0x40) != 0)) {
      _guard_xfg_dispatch_icall_nop
                (*(void **)(param_1 + 0x38),0,(ulonglong)*(uint *)(param_1 + 0x40) << 2);
    }
    pfVar17 = (float *)((longlong)&DAT_145af04b0 + lVar22);
    do {
      plVar11 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
      if (*(longlong *)(param_1 + 0x38) == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = (undefined2)*(undefined4 *)(param_1 + 0x40);
      }
      local_138 = *pfVar17;
      local_130 = (float)CONCAT22(local_130._2_2_,uVar13);
      (**(code **)(*plVar11 + 0x78))(plVar11);
      pfVar17 = pfVar17 + 1;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    local_100 = 4;
    do {
      fVar1 = *(float *)((longlong)pfVar23 + lVar24 + -0x138);
      fVar2 = *pfVar23;
      uVar26 = (ulonglong)((float)*(uint *)(param_1 + 0x28) * pfVar23[-1]);
      uVar21 = (ulonglong)
               ((float)*(uint *)(param_1 + 0x28) * *(float *)((longlong)pfVar23 + lVar24 + -0x13c));
      fVar18 = (float)((uint)uVar21 & 0xfffffff0);
      fVar25 = (float)((uint)uVar26 & 0xfffffff0);
      if ((((uVar26 & 0xfffffff0) == 0) || ((uint)*(float *)(param_1 + 0x2c) <= (uint)fVar25)) ||
         (fVar2 <= 0.0)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((((uVar21 & 0xfffffff0) == 0) || ((uint)*(float *)(param_1 + 0x2c) <= (uint)fVar18)) ||
         (fVar1 <= 0.0)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (((bVar5) && (bVar8)) && (fVar18 == fVar25)) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      if ((((bVar5) && (bVar8)) && (fVar18 != fVar25)) &&
         (uVar15 = (int)fVar18 - (int)fVar25 >> 0x1f,
         (int)(((int)fVar18 - (int)fVar25 ^ uVar15) - uVar15) <
         *(int *)(*(longlong *)(param_1 + 8) + 0xc))) {
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
      if (bVar6) {
        (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
        local_138 = fVar2;
        local_130 = fVar1;
        local_128 = fVar18;
LAB_14325df87:
        FUN_14325cc80(param_1);
      }
      else {
        if (!bVar7) {
          if (bVar5) {
            (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
            local_130 = 0.0;
            local_138 = fVar2;
            local_128 = fVar25;
          }
          else {
            if (!bVar8) goto LAB_14325df99;
            (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
            local_138 = 0.0;
            local_130 = fVar1;
            local_128 = fVar18;
          }
          goto LAB_14325df87;
        }
        (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
        lVar20 = 3;
        pfVar17 = (float *)(&DAT_145af04e0 + local_110);
        lVar22 = param_1 + 0xd8;
        do {
          fVar25 = *pfVar17;
          if (fVar25 != 0.0) {
            FUN_14325d540(param_1 + 0x30);
            local_138 = fVar18;
            local_130 = fVar25 * fVar2;
            local_128 = fVar25 * fVar1;
            FUN_1432601a0(lVar22);
          }
          lVar22 = lVar22 + 0x20;
          pfVar17 = pfVar17 + 1;
          lVar20 = lVar20 + -1;
          lVar24 = local_f0;
          uVar19 = local_114;
        } while (lVar20 != 0);
      }
LAB_14325df99:
      pfVar23 = pfVar23 + 2;
      local_100 = local_100 + -1;
    } while (local_100 != 0);
    local_110 = local_110 + 0xc;
    local_114 = uVar19 + 1;
    if (3 < local_114) {
      plVar12 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
      plVar10 = local_e8;
      plVar11 = (longlong *)(param_1 + 0xe0);
      local_138 = 1.0;
      local_130._0_2_ = (short)local_e8[2];
      (**(code **)(*plVar12 + 0x78))
                (plVar12,*plVar11 + (ulonglong)*(uint *)(param_1 + 0xf0) * 4,*local_e8,0x3f800000);
      local_130._0_2_ = *(ushort *)(plVar10 + 2);
      local_138 = local_d0;
      (**(code **)(*plVar12 + 0x78))
                (plVar12,*(longlong *)(param_1 + 0x100) + (ulonglong)*(uint *)(param_1 + 0x110) * 4,
                 *plVar10 + (ulonglong)local_130._0_2_ * 4,local_d0);
      local_130._0_2_ = *(ushort *)(plVar10 + 2);
      local_138 = (float)local_d8[0];
      (**(code **)(*plVar12 + 0x78))
                (plVar12,*(longlong *)(param_1 + 0x120) + (ulonglong)*(uint *)(param_1 + 0x130) * 4,
                 *plVar10 + (ulonglong)local_130._0_2_ * 4,local_d8[0]);
      local_130._0_2_ = *(ushort *)(plVar10 + 2);
      local_138 = (float)(local_d8[0] ^ 0x80000000);
      (**(code **)(*plVar12 + 0x78))
                (plVar12,*(longlong *)(param_1 + 0x100) + (ulonglong)*(uint *)(param_1 + 0x110) * 4,
                 *plVar10 + (ulonglong)local_130._0_2_ * 0xc,local_138);
      local_130 = (float)CONCAT22(local_130._2_2_,*(ushort *)(plVar10 + 2));
      local_138 = local_d0;
      (**(code **)(*plVar12 + 0x78))
                (plVar12,*(longlong *)(param_1 + 0x120) + (ulonglong)*(uint *)(param_1 + 0x130) * 4,
                 *plVar10 + (ulonglong)*(ushort *)(plVar10 + 2) * 0xc,local_d0);
      puVar27 = (uint *)(param_1 + 0x58);
      do {
        if ((*(void **)(puVar27 + -2) != (void *)0x0) && (*puVar27 != 0)) {
          _guard_xfg_dispatch_icall_nop(*(void **)(puVar27 + -2),0,(ulonglong)*puVar27 << 2);
        }
        if ((*(void **)(puVar27 + 0x10) != (void *)0x0) && (puVar27[0x12] != 0)) {
          _guard_xfg_dispatch_icall_nop(*(void **)(puVar27 + 0x10),0,(ulonglong)puVar27[0x12] << 2);
        }
        uVar19 = 0;
        uVar3 = *(ushort *)(plVar10 + 2);
        if (*plVar11 == 0) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(uint *)(plVar11 + 1);
        }
        uVar21 = (ulonglong)*(uint *)(plVar11 + 2);
        uVar16 = (uint)uVar3;
        if (uVar15 < *(uint *)(plVar11 + 2) + (uint)uVar3) {
          uVar15 = uVar19;
          if (3 < uVar16) {
            uVar15 = (uVar3 - 4 >> 2) + 1;
            uVar26 = (ulonglong)uVar15;
            uVar15 = uVar15 * 4;
            do {
              *(undefined4 *)(*plVar11 + uVar21 * 4) = 0;
              uVar14 = uVar19;
              if (*plVar11 != 0) {
                uVar14 = *(uint *)(plVar11 + 1);
              }
              uVar21 = (ulonglong)((int)plVar11[2] + 1) % (ulonglong)uVar14;
              *(int *)(plVar11 + 2) = (int)uVar21;
              *(undefined4 *)(*plVar11 + uVar21 * 4) = 0;
              uVar14 = uVar19;
              if (*plVar11 != 0) {
                uVar14 = *(uint *)(plVar11 + 1);
              }
              uVar21 = (ulonglong)((int)plVar11[2] + 1) % (ulonglong)uVar14;
              *(int *)(plVar11 + 2) = (int)uVar21;
              *(undefined4 *)(*plVar11 + uVar21 * 4) = 0;
              uVar14 = uVar19;
              if (*plVar11 != 0) {
                uVar14 = *(uint *)(plVar11 + 1);
              }
              uVar21 = (ulonglong)((int)plVar11[2] + 1) % (ulonglong)uVar14;
              *(int *)(plVar11 + 2) = (int)uVar21;
              *(undefined4 *)(*plVar11 + uVar21 * 4) = 0;
              uVar14 = uVar19;
              if (*plVar11 != 0) {
                uVar14 = *(uint *)(plVar11 + 1);
              }
              uVar21 = (ulonglong)((int)plVar11[2] + 1) % (ulonglong)uVar14;
              *(int *)(plVar11 + 2) = (int)uVar21;
              uVar26 = uVar26 - 1;
            } while (uVar26 != 0);
          }
          if (uVar15 < uVar16) {
            uVar26 = (ulonglong)(uVar16 - uVar15);
            do {
              *(undefined4 *)(*plVar11 + uVar21 * 4) = 0;
              uVar15 = uVar19;
              if (*plVar11 != 0) {
                uVar15 = *(uint *)(plVar11 + 1);
              }
              uVar21 = (ulonglong)((int)plVar11[2] + 1) % (ulonglong)uVar15;
              *(int *)(plVar11 + 2) = (int)uVar21;
              uVar26 = uVar26 - 1;
            } while (uVar26 != 0);
          }
        }
        else {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar11 + uVar21 * 4),0,(ulonglong)((uint)uVar3 * 4));
          if (*plVar11 == 0) {
            *(uint *)(plVar11 + 2) = ((int)plVar11[2] + uVar16) % 0;
          }
          else {
            *(uint *)(plVar11 + 2) = ((int)plVar11[2] + (uint)uVar3) % *(uint *)(plVar11 + 1);
          }
        }
        puVar27 = puVar27 + 6;
        plVar11 = plVar11 + 4;
        local_f8 = local_f8 + -1;
      } while (local_f8 != 0);
      if ((*(void **)(param_1 + 0x38) != (void *)0x0) && (*(uint *)(param_1 + 0x40) != 0)) {
        _guard_xfg_dispatch_icall_nop
                  (*(void **)(param_1 + 0x38),0,(ulonglong)*(uint *)(param_1 + 0x40) << 2);
      }
      uVar4 = local_e0[1];
      *(undefined8 *)(param_1 + 0x138) = *local_e0;
      *(undefined8 *)(param_1 + 0x140) = uVar4;
      uVar4 = local_e0[3];
      *(undefined8 *)(param_1 + 0x148) = local_e0[2];
      *(undefined8 *)(param_1 + 0x150) = uVar4;
      uVar4 = local_e0[5];
      *(undefined8 *)(param_1 + 0x158) = local_e0[4];
      *(undefined8 *)(param_1 + 0x160) = uVar4;
      uVar4 = local_e0[7];
      *(undefined8 *)(param_1 + 0x168) = local_e0[6];
      *(undefined8 *)(param_1 + 0x170) = uVar4;
      uVar4 = local_e0[9];
      *(undefined8 *)(param_1 + 0x178) = local_e0[8];
      *(undefined8 *)(param_1 + 0x180) = uVar4;
      uVar4 = local_e0[0xb];
      *(undefined8 *)(param_1 + 0x188) = local_e0[10];
      *(undefined8 *)(param_1 + 400) = uVar4;
      uVar4 = local_e0[0xd];
      *(undefined8 *)(param_1 + 0x198) = local_e0[0xc];
      *(undefined8 *)(param_1 + 0x1a0) = uVar4;
      uVar4 = local_e0[0xf];
      *(undefined8 *)(param_1 + 0x1a8) = local_e0[0xe];
      *(undefined8 *)(param_1 + 0x1b0) = uVar4;
      *(short *)((longlong)plVar10 + 0x12) = (short)plVar10[2];
      return;
    }
    local_100 = 0;
  } while( true );
}



// FUNCTION 14325e3c0 FUN_14325e3c0 body=194 status=ok
// SIG undefined FUN_14325e3c0(void)

undefined4 FUN_14325e3c0(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(void **)(param_1 + 0x38) != (void *)0x0) && (*(uint *)(param_1 + 0x40) != 0)) {
    _guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 0x38),0,(ulonglong)*(uint *)(param_1 + 0x40) << 2);
  }
  lVar3 = param_1 + 0xd8;
  lVar2 = 3;
  puVar1 = (uint *)(param_1 + 0x58);
  do {
    if ((*(void **)(puVar1 + -2) != (void *)0x0) && (*puVar1 != 0)) {
      _guard_xfg_dispatch_icall_nop(*(void **)(puVar1 + -2),0,(ulonglong)*puVar1 << 2);
    }
    if ((*(void **)(puVar1 + 0x10) != (void *)0x0) && (puVar1[0x12] != 0)) {
      _guard_xfg_dispatch_icall_nop(*(void **)(puVar1 + 0x10),0,(ulonglong)puVar1[0x12] << 2);
    }
    FUN_143260be0(lVar3);
    lVar3 = lVar3 + 0x20;
    puVar1 = puVar1 + 6;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x138),0,0x80);
  return 1;
}



// FUNCTION 14325e490 FUN_14325e490 body=39 status=ok
// SIG undefined FUN_14325e490(void)

undefined8 FUN_14325e490(longlong param_1,short param_2,undefined4 *param_3)

{
  if (param_2 != 0) {
    if (param_2 == 1) {
      *(undefined4 *)(param_1 + 0xc) = *param_3;
    }
    return 0x1f;
  }
  *(undefined4 *)(param_1 + 8) = *param_3;
  return 1;
}



// FUNCTION 14325e4c0 FUN_14325e4c0 body=200 status=ok
// SIG undefined FUN_14325e4c0(void)

undefined8 FUN_14325e4c0(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = param_1 + 10;
  puVar3 = param_1 + 0x1b;
  lVar2 = 3;
  do {
    FUN_14325fbf0(puVar3);
    if (((longlong *)plVar1[8] != (longlong *)0x0) && (plVar1[9] != 0)) {
      (**(code **)(*(longlong *)plVar1[8] + 0x10))();
    }
    if (((longlong *)plVar1[-1] != (longlong *)0x0) && (*plVar1 != 0)) {
      (**(code **)(*(longlong *)plVar1[-1] + 0x10))();
    }
    puVar3 = puVar3 + 4;
    plVar1 = plVar1 + 3;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  if (((longlong *)param_1[6] != (longlong *)0x0) && (param_1[7] != 0)) {
    (**(code **)(*(longlong *)param_1[6] + 0x10))();
  }
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 14325e590 FUN_14325e590 body=104 status=ok
// SIG undefined FUN_14325e590(void)

undefined8 * FUN_14325e590(undefined8 *param_1,uint param_2)

{
  *param_1 = CGbxReverbDWN::vftable;
  _eh_vector_destructor_iterator_
            (param_1 + 2,0x20,8,AK::MemoryMgr::StartProfileThreadUsage,0xfffffffffffffffe);
  *param_1 = AK::IAkPlugin::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x368);
  }
  return param_1;
}



// FUNCTION 14325e600 FUN_14325e600 body=100 status=ok
// SIG undefined FUN_14325e600(void)

void FUN_14325e600(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = CGbxReverbDWNParams::vftable;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
    return;
  }
  return;
}



// FUNCTION 14325e670 FUN_14325e670 body=198 status=ok
// SIG undefined FUN_14325e670(void)

undefined8 *
FUN_14325e670(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))(param_1,0x368,param_3,param_4,0xfffffffffffffffe);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = CGbxReverbDWN::vftable;
    puVar1[1] = 0;
    FUN_14325fa00(puVar1 + 2);
    puVar1[0x5a] = 0;
    puVar1[0x5b] = 0;
    *(undefined4 *)(puVar1 + 0x5c) = 0;
    puVar1[0x5d] = 0;
    puVar1[0x5e] = 0;
    *(undefined4 *)(puVar1 + 0x5f) = 0;
    puVar1[0x60] = 0;
    puVar1[0x61] = 0;
    *(undefined4 *)(puVar1 + 0x62) = 0;
    *(undefined4 *)(puVar1 + 99) = 0;
    puVar1[100] = 0;
    puVar1[0x65] = 0;
    *(undefined4 *)(puVar1 + 0x66) = 0;
    *(undefined4 *)(puVar1 + 0x67) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14325e740 FUN_14325e740 body=45 status=ok
// SIG undefined FUN_14325e740(void)

void FUN_14325e740(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = CGbxReverbDWNParams::vftable;
    return;
  }
  return;
}



// FUNCTION 14325e770 FUN_14325e770 body=3235 status=ok
// SIG undefined FUN_14325e770(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14325e770(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  float *pfVar2;
  float *pfVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ushort uVar14;
  uint uVar15;
  float *pfVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  ulonglong uVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b5ab08) && (_Init_thread_header(&DAT_146b5ab08), DAT_146b5ab08 == -1))
  {
    _DAT_146b5ab04 = _guard_xfg_dispatch_icall_nop(10.0,-4.5);
    _Init_thread_footer(&DAT_146b5ab08);
  }
  uVar20 = 0;
  uVar11 = 0;
  if ((*(int *)((longlong)param_2 + 0xc) == 0x11) && (_DAT_146b5ab04 < *(float *)(param_1 + 0x340)))
  {
    uVar14 = *(ushort *)(param_2 + 2);
    uVar19 = (ulonglong)*(byte *)(param_2 + 1);
    iVar17 = (uint)uVar14 - (uint)*(ushort *)((longlong)param_2 + 0x12);
    if (iVar17 != 0) {
      if (*(byte *)(param_2 + 1) != 0) {
        uVar22 = uVar20;
        do {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*param_2 +
                             (*(ushort *)(param_2 + 2) * uVar22 +
                             (ulonglong)*(ushort *)((longlong)param_2 + 0x12)) * 4),0,
                     (ulonglong)(uint)(iVar17 * 4));
          uVar22 = uVar22 + 1;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
        uVar14 = *(ushort *)(param_2 + 2);
      }
      *(ushort *)((longlong)param_2 + 0x12) = uVar14;
    }
    *(undefined4 *)((longlong)param_2 + 0xc) = 0x2d;
  }
  lVar12 = *(longlong *)(param_1 + 8);
  uVar14 = *(ushort *)((longlong)param_2 + 0x12);
  uVar21 = (uint)uVar14;
  uVar15 = *(uint *)(param_2 + 1) & 0xff;
  uVar27 = uVar15 - 1;
  if ((*(uint *)(param_2 + 1) & 0x8000) == 0) {
    uVar27 = uVar15;
  }
  fVar28 = _guard_xfg_dispatch_icall_nop(10.0,*(float *)(lVar12 + 0x1c) * 0.05);
  fVar29 = _guard_xfg_dispatch_icall_nop(10.0,*(float *)(lVar12 + 0x20) * 0.05);
  *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(lVar12 + 8);
  *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)(lVar12 + 0xc);
  if (*(char *)(lVar12 + 0x24) != '\0') {
    FUN_143260db0(param_1 + 0x10,*(undefined4 *)(lVar12 + 0x10));
  }
  if ((*(void **)(param_1 + 0x2d8) != (void *)0x0) && (*(uint *)(param_1 + 0x2e0) != 0)) {
    _guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 0x2d8),0,(ulonglong)*(uint *)(param_1 + 0x2e0) << 2);
  }
  if ((*(void **)(param_1 + 0x2f0) != (void *)0x0) && (*(uint *)(param_1 + 0x2f8) != 0)) {
    _guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 0x2f0),0,(ulonglong)*(uint *)(param_1 + 0x2f8) << 2);
  }
  uVar19 = uVar20;
  uVar22 = uVar20;
  if (uVar27 != 0) {
    do {
      uVar1 = *param_2 + *(ushort *)(param_2 + 2) * uVar19 * 4;
      if (uVar14 != 0) {
        uVar15 = (uint)uVar14;
        uVar24 = uVar20;
        if (0xf < uVar15) {
          lVar12 = 0x2d8;
          if ((uVar22 & 1) != 0) {
            lVar12 = 0x2f0;
          }
          uVar26 = *(ulonglong *)(lVar12 + param_1);
          if ((uVar1 + (ulonglong)(uVar14 - 1) * 4 < uVar26) ||
             (uVar26 + (ulonglong)(uVar14 - 1) * 4 < uVar1)) {
            uVar25 = 8;
            uVar13 = uVar20;
            do {
              uVar23 = (int)uVar13 + 0x10;
              uVar24 = (ulonglong)uVar23;
              pfVar16 = (float *)(uVar26 + uVar13 * 4);
              fVar5 = pfVar16[1];
              fVar6 = pfVar16[2];
              fVar7 = pfVar16[3];
              pfVar2 = (float *)(uVar1 + uVar13 * 4);
              fVar8 = pfVar2[1];
              fVar9 = pfVar2[2];
              fVar10 = pfVar2[3];
              pfVar3 = (float *)(uVar26 + uVar13 * 4);
              *pfVar3 = *pfVar2 + *pfVar16;
              pfVar3[1] = fVar8 + fVar5;
              pfVar3[2] = fVar9 + fVar6;
              pfVar3[3] = fVar10 + fVar7;
              uVar13 = (ulonglong)(uVar25 - 4);
              pfVar16 = (float *)(uVar26 + uVar13 * 4);
              fVar5 = pfVar16[1];
              fVar6 = pfVar16[2];
              fVar7 = pfVar16[3];
              pfVar2 = (float *)(uVar1 + uVar13 * 4);
              fVar8 = pfVar2[1];
              fVar9 = pfVar2[2];
              fVar10 = pfVar2[3];
              pfVar3 = (float *)(uVar26 + uVar13 * 4);
              *pfVar3 = *pfVar2 + *pfVar16;
              pfVar3[1] = fVar8 + fVar5;
              pfVar3[2] = fVar9 + fVar6;
              pfVar3[3] = fVar10 + fVar7;
              uVar13 = (ulonglong)uVar25;
              pfVar16 = (float *)(uVar26 + uVar13 * 4);
              fVar5 = pfVar16[1];
              fVar6 = pfVar16[2];
              fVar7 = pfVar16[3];
              pfVar2 = (float *)(uVar1 + uVar13 * 4);
              fVar8 = pfVar2[1];
              fVar9 = pfVar2[2];
              fVar10 = pfVar2[3];
              pfVar3 = (float *)(uVar26 + uVar13 * 4);
              *pfVar3 = *pfVar2 + *pfVar16;
              pfVar3[1] = fVar8 + fVar5;
              pfVar3[2] = fVar9 + fVar6;
              pfVar3[3] = fVar10 + fVar7;
              uVar13 = (ulonglong)(uVar25 + 4);
              uVar25 = uVar25 + 0x10;
              pfVar16 = (float *)(uVar26 + uVar13 * 4);
              fVar5 = pfVar16[1];
              fVar6 = pfVar16[2];
              fVar7 = pfVar16[3];
              pfVar2 = (float *)(uVar1 + uVar13 * 4);
              fVar8 = pfVar2[1];
              fVar9 = pfVar2[2];
              fVar10 = pfVar2[3];
              pfVar3 = (float *)(uVar26 + uVar13 * 4);
              *pfVar3 = *pfVar2 + *pfVar16;
              pfVar3[1] = fVar8 + fVar5;
              pfVar3[2] = fVar9 + fVar6;
              pfVar3[3] = fVar10 + fVar7;
              uVar13 = uVar24;
            } while (uVar23 < (uVar15 & 0xfffffff0));
          }
        }
        uVar25 = (uint)uVar24;
        if (uVar25 < uVar15) {
          if (3 < uVar15 - uVar25) {
            lVar12 = 0x2d8;
            if ((uVar22 & 1) != 0) {
              lVar12 = 0x2f0;
            }
            lVar18 = -uVar1;
            lVar12 = *(longlong *)(lVar12 + param_1);
            uVar15 = ((uVar21 - uVar25) - 4 >> 2) + 1;
            uVar26 = (ulonglong)uVar15;
            uVar25 = uVar25 + uVar15 * 4;
            pfVar16 = (float *)(uVar1 + (uVar24 + 2) * 4);
            do {
              *(float *)((longlong)pfVar16 + lVar18 + lVar12 + -8) =
                   pfVar16[-2] + *(float *)((longlong)pfVar16 + lVar18 + lVar12 + -8);
              *(float *)((longlong)pfVar16 + lVar18 + lVar12 + -4) =
                   pfVar16[-1] + *(float *)((longlong)pfVar16 + lVar18 + lVar12 + -4);
              *(float *)((longlong)pfVar16 + lVar12 + lVar18) =
                   *(float *)((longlong)pfVar16 + lVar12 + lVar18) + *pfVar16;
              *(float *)((longlong)pfVar16 + lVar18 + lVar12 + 4) =
                   pfVar16[1] + *(float *)((longlong)pfVar16 + lVar18 + lVar12 + 4);
              uVar26 = uVar26 - 1;
              pfVar16 = pfVar16 + 4;
            } while (uVar26 != 0);
          }
          if (uVar25 < uVar21) {
            lVar12 = 0x2d8;
            if ((uVar22 & 1) != 0) {
              lVar12 = 0x2f0;
            }
            lVar18 = *(longlong *)(lVar12 + param_1);
            lVar12 = (ulonglong)uVar25 * 4;
            uVar24 = (ulonglong)(uVar21 - uVar25);
            do {
              *(float *)(lVar12 + lVar18) = *(float *)(lVar12 + uVar1) + *(float *)(lVar12 + lVar18)
              ;
              lVar12 = lVar12 + 4;
              uVar24 = uVar24 - 1;
            } while (uVar24 != 0);
          }
        }
      }
      uVar15 = (int)uVar22 + 1;
      uVar22 = (ulonglong)uVar15;
      uVar19 = uVar19 + 1;
    } while (uVar15 < uVar27);
  }
  uVar15 = uVar11;
  if (3 < uVar21) {
    uVar15 = (uVar21 - 4 >> 2) + 1;
    uVar22 = (ulonglong)uVar15;
    uVar15 = uVar15 * 4;
    uVar19 = uVar20;
    do {
      uVar4 = *(undefined4 *)
               (*(longlong *)(param_1 + 0x308) + (ulonglong)*(uint *)(param_1 + 0x318) * 4);
      *(undefined4 *)(*(longlong *)(param_1 + 0x308) + (ulonglong)*(uint *)(param_1 + 0x318) * 4) =
           *(undefined4 *)(uVar19 + *(longlong *)(param_1 + 0x2d8));
      uVar25 = uVar11;
      if (*(longlong *)(param_1 + 0x308) != 0) {
        uVar25 = *(uint *)(param_1 + 0x310);
      }
      *(uint *)(param_1 + 0x318) = (*(int *)(param_1 + 0x318) + 1U) % uVar25;
      *(undefined4 *)(uVar19 + *(longlong *)(param_1 + 0x2d8)) = uVar4;
      uVar4 = *(undefined4 *)
               (*(longlong *)(param_1 + 0x328) + (ulonglong)*(uint *)(param_1 + 0x338) * 4);
      *(undefined4 *)(*(longlong *)(param_1 + 0x328) + (ulonglong)*(uint *)(param_1 + 0x338) * 4) =
           *(undefined4 *)(uVar19 + *(longlong *)(param_1 + 0x2f0));
      uVar25 = uVar11;
      if (*(longlong *)(param_1 + 0x328) != 0) {
        uVar25 = *(uint *)(param_1 + 0x330);
      }
      *(uint *)(param_1 + 0x338) = (*(int *)(param_1 + 0x338) + 1U) % uVar25;
      *(undefined4 *)(uVar19 + *(longlong *)(param_1 + 0x2f0)) = uVar4;
      uVar4 = *(undefined4 *)
               (*(longlong *)(param_1 + 0x308) + (ulonglong)*(uint *)(param_1 + 0x318) * 4);
      *(undefined4 *)(*(longlong *)(param_1 + 0x308) + (ulonglong)*(uint *)(param_1 + 0x318) * 4) =
           *(undefined4 *)(*(longlong *)(param_1 + 0x2d8) + 4 + uVar19);
      uVar25 = uVar11;
      if (*(longlong *)(param_1 + 0x308) != 0) {
        uVar25 = *(uint *)(param_1 + 0x310);
      }
      *(uint *)(param_1 + 0x318) = (*(int *)(param_1 + 0x318) + 1U) % uVar25;
      *(undefined4 *)(*(longlong *)(param_1 + 0x2d8) + 4 + uVar19) = uVar4;
      uVar4 = *(undefined4 *)
               (*(longlong *)(param_1 + 0x328) + (ulonglong)*(uint *)(param_1 + 0x338) * 4);
      *(undefined4 *)(*(longlong *)(param_1 + 0x328) + (ulonglong)*(uint *)(param_1 + 0x338) * 4) =
           *(undefined4 *)(uVar19 + 4 + *(longlong *)(param_1 + 0x2f0));
      uVar25 = uVar11;
      if (*(longlong *)(param_1 + 0x328) != 0) {
        uVar25 = *(uint *)(param_1 + 0x330);
      }
      *(uint *)(param_1 + 0x338) = (*(int *)(param_1 + 0x338) + 1U) % uVar25;
      *(undefined4 *)(uVar19 + 4 + *(longlong *)(param_1 + 0x2f0)) = uVar4;
      uVar4 = *(undefined4 *)
               (*(longlong *)(param_1 + 0x308) + (ulonglong)*(uint *)(param_1 + 0x318) * 4);
      *(undefined4 *)(*(longlong *)(param_1 + 0x308) + (ulonglong)*(uint *)(param_1 + 0x318) * 4) =
           *(undefined4 *)(uVar19 + 8 + *(longlong *)(param_1 + 0x2d8));
      uVar25 = uVar11;
      if (*(longlong *)(param_1 + 0x308) != 0) {
        uVar25 = *(uint *)(param_1 + 0x310);
      }
      *(uint *)(param_1 + 0x318) = (*(int *)(param_1 + 0x318) + 1U) % uVar25;
      *(undefined4 *)(uVar19 + 8 + *(longlong *)(param_1 + 0x2d8)) = uVar4;
      uVar4 = *(undefined4 *)
               (*(longlong *)(param_1 + 0x328) + (ulonglong)*(uint *)(param_1 + 0x338) * 4);
      *(undefined4 *)(*(longlong *)(param_1 + 0x328) + (ulonglong)*(uint *)(param_1 + 0x338) * 4) =
           *(undefined4 *)(uVar19 + 8 + *(longlong *)(param_1 + 0x2f0));
      uVar25 = uVar11;
      if (*(longlong *)(param_1 + 0x328) != 0) {
        uVar25 = *(uint *)(param_1 + 0x330);
      }
      *(uint *)(param_1 + 0x338) = (*(int *)(param_1 + 0x338) + 1U) % uVar25;
      *(undefined4 *)(uVar19 + 8 + *(longlong *)(param_1 + 0x2f0)) = uVar4;
      uVar4 = *(undefined4 *)
               (*(longlong *)(param_1 + 0x308) + (ulonglong)*(uint *)(param_1 + 0x318) * 4);
      *(undefined4 *)(*(longlong *)(param_1 + 0x308) + (ulonglong)*(uint *)(param_1 + 0x318) * 4) =
           *(undefined4 *)(uVar19 + 0xc + *(longlong *)(param_1 + 0x2d8));
      uVar25 = uVar11;
      if (*(longlong *)(param_1 + 0x308) != 0) {
        uVar25 = *(uint *)(param_1 + 0x310);
      }
      *(uint *)(param_1 + 0x318) = (*(int *)(param_1 + 0x318) + 1U) % uVar25;
      *(undefined4 *)(uVar19 + 0xc + *(longlong *)(param_1 + 0x2d8)) = uVar4;
      uVar4 = *(undefined4 *)
               (*(longlong *)(param_1 + 0x328) + (ulonglong)*(uint *)(param_1 + 0x338) * 4);
      *(undefined4 *)(*(longlong *)(param_1 + 0x328) + (ulonglong)*(uint *)(param_1 + 0x338) * 4) =
           *(undefined4 *)(uVar19 + 0xc + *(longlong *)(param_1 + 0x2f0));
      uVar25 = uVar11;
      if (*(longlong *)(param_1 + 0x328) != 0) {
        uVar25 = *(uint *)(param_1 + 0x330);
      }
      *(uint *)(param_1 + 0x338) = (*(int *)(param_1 + 0x338) + 1U) % uVar25;
      *(undefined4 *)(uVar19 + 0xc + *(longlong *)(param_1 + 0x2f0)) = uVar4;
      uVar19 = uVar19 + 0x10;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
  }
  if (uVar15 < uVar21) {
    uVar19 = (ulonglong)(uVar21 - uVar15);
    lVar12 = (ulonglong)uVar15 * 4;
    do {
      uVar4 = *(undefined4 *)
               (*(longlong *)(param_1 + 0x308) + (ulonglong)*(uint *)(param_1 + 0x318) * 4);
      *(undefined4 *)(*(longlong *)(param_1 + 0x308) + (ulonglong)*(uint *)(param_1 + 0x318) * 4) =
           *(undefined4 *)(lVar12 + *(longlong *)(param_1 + 0x2d8));
      uVar15 = uVar11;
      if (*(longlong *)(param_1 + 0x308) != 0) {
        uVar15 = *(uint *)(param_1 + 0x310);
      }
      *(uint *)(param_1 + 0x318) = (*(int *)(param_1 + 0x318) + 1U) % uVar15;
      *(undefined4 *)(lVar12 + *(longlong *)(param_1 + 0x2d8)) = uVar4;
      uVar4 = *(undefined4 *)
               (*(longlong *)(param_1 + 0x328) + (ulonglong)*(uint *)(param_1 + 0x338) * 4);
      *(undefined4 *)(*(longlong *)(param_1 + 0x328) + (ulonglong)*(uint *)(param_1 + 0x338) * 4) =
           *(undefined4 *)(lVar12 + *(longlong *)(param_1 + 0x2f0));
      uVar15 = uVar11;
      if (*(longlong *)(param_1 + 0x328) != 0) {
        uVar15 = *(uint *)(param_1 + 0x330);
      }
      *(uint *)(param_1 + 0x338) = (*(int *)(param_1 + 0x338) + 1U) % uVar15;
      *(undefined4 *)(lVar12 + *(longlong *)(param_1 + 0x2f0)) = uVar4;
      lVar12 = lVar12 + 4;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  FUN_143260580(param_1 + 0x10,*(undefined8 *)(param_1 + 0x2d8),*(undefined8 *)(param_1 + 0x2f0),
                uVar21);
  uVar19 = uVar20;
  uVar22 = uVar20;
  if (uVar27 != 0) {
    do {
      uVar1 = *param_2 + *(ushort *)(param_2 + 2) * uVar19 * 4;
      if (uVar14 != 0) {
        uVar24 = uVar20;
        if (0xf < uVar21) {
          lVar12 = 0x2d8;
          if ((uVar22 & 1) != 0) {
            lVar12 = 0x2f0;
          }
          uVar26 = *(ulonglong *)(lVar12 + param_1);
          if ((uVar26 + (ulonglong)(uVar21 - 1) * 4 < uVar1) ||
             (uVar24 = 0, uVar1 + (ulonglong)(uVar21 - 1) * 4 < uVar26)) {
            uVar15 = 8;
            uVar13 = uVar20;
            do {
              uVar25 = (int)uVar13 + 0x10;
              uVar24 = (ulonglong)uVar25;
              pfVar16 = (float *)(uVar1 + uVar13 * 4);
              fVar5 = pfVar16[1];
              fVar6 = pfVar16[2];
              fVar7 = pfVar16[3];
              pfVar2 = (float *)(uVar26 + uVar13 * 4);
              fVar8 = pfVar2[1];
              fVar9 = pfVar2[2];
              fVar10 = pfVar2[3];
              pfVar3 = (float *)(uVar1 + uVar13 * 4);
              *pfVar3 = *pfVar2 * fVar28 + fVar29 * *pfVar16;
              pfVar3[1] = fVar8 * fVar28 + fVar29 * fVar5;
              pfVar3[2] = fVar9 * fVar28 + fVar29 * fVar6;
              pfVar3[3] = fVar10 * fVar28 + fVar29 * fVar7;
              uVar13 = (ulonglong)(uVar15 - 4);
              pfVar16 = (float *)(uVar1 + uVar13 * 4);
              fVar5 = pfVar16[1];
              fVar6 = pfVar16[2];
              fVar7 = pfVar16[3];
              pfVar2 = (float *)(uVar26 + uVar13 * 4);
              fVar8 = pfVar2[1];
              fVar9 = pfVar2[2];
              fVar10 = pfVar2[3];
              pfVar3 = (float *)(uVar1 + uVar13 * 4);
              *pfVar3 = *pfVar2 * fVar28 + fVar29 * *pfVar16;
              pfVar3[1] = fVar8 * fVar28 + fVar29 * fVar5;
              pfVar3[2] = fVar9 * fVar28 + fVar29 * fVar6;
              pfVar3[3] = fVar10 * fVar28 + fVar29 * fVar7;
              uVar13 = (ulonglong)uVar15;
              pfVar16 = (float *)(uVar1 + uVar13 * 4);
              fVar5 = pfVar16[1];
              fVar6 = pfVar16[2];
              fVar7 = pfVar16[3];
              pfVar2 = (float *)(uVar26 + uVar13 * 4);
              fVar8 = pfVar2[1];
              fVar9 = pfVar2[2];
              fVar10 = pfVar2[3];
              pfVar3 = (float *)(uVar1 + uVar13 * 4);
              *pfVar3 = *pfVar2 * fVar28 + fVar29 * *pfVar16;
              pfVar3[1] = fVar8 * fVar28 + fVar29 * fVar5;
              pfVar3[2] = fVar9 * fVar28 + fVar29 * fVar6;
              pfVar3[3] = fVar10 * fVar28 + fVar29 * fVar7;
              uVar13 = (ulonglong)(uVar15 + 4);
              uVar15 = uVar15 + 0x10;
              pfVar16 = (float *)(uVar1 + uVar13 * 4);
              fVar5 = pfVar16[1];
              fVar6 = pfVar16[2];
              fVar7 = pfVar16[3];
              pfVar2 = (float *)(uVar26 + uVar13 * 4);
              fVar8 = pfVar2[1];
              fVar9 = pfVar2[2];
              fVar10 = pfVar2[3];
              pfVar3 = (float *)(uVar1 + uVar13 * 4);
              *pfVar3 = *pfVar2 * fVar28 + fVar29 * *pfVar16;
              pfVar3[1] = fVar8 * fVar28 + fVar29 * fVar5;
              pfVar3[2] = fVar9 * fVar28 + fVar29 * fVar6;
              pfVar3[3] = fVar10 * fVar28 + fVar29 * fVar7;
              uVar13 = uVar24;
            } while (uVar25 < (uVar21 & 0xfffffff0));
          }
        }
        uVar15 = (uint)uVar24;
        if (uVar15 < uVar21) {
          if (3 < uVar21 - uVar15) {
            lVar12 = 0x2d8;
            if ((uVar22 & 1) != 0) {
              lVar12 = 0x2f0;
            }
            lVar18 = -uVar1;
            lVar12 = *(longlong *)(lVar12 + param_1);
            pfVar16 = (float *)(uVar1 + (uVar24 + 2) * 4);
            uVar25 = ((uVar21 - uVar15) - 4 >> 2) + 1;
            uVar24 = (ulonglong)uVar25;
            uVar15 = uVar15 + uVar25 * 4;
            do {
              pfVar16[-2] = fVar29 * pfVar16[-2] +
                            fVar28 * *(float *)((longlong)pfVar16 + lVar12 + lVar18 + -8);
              pfVar16[-1] = fVar28 * *(float *)((longlong)pfVar16 + lVar12 + lVar18 + -4) +
                            fVar29 * pfVar16[-1];
              *pfVar16 = fVar28 * *(float *)((longlong)pfVar16 + lVar12 + lVar18) +
                         fVar29 * *pfVar16;
              pfVar16[1] = fVar28 * *(float *)((longlong)pfVar16 + lVar12 + lVar18 + 4) +
                           fVar29 * pfVar16[1];
              pfVar16 = pfVar16 + 4;
              uVar24 = uVar24 - 1;
            } while (uVar24 != 0);
          }
          if (uVar15 < uVar21) {
            lVar12 = 0x2d8;
            if ((uVar22 & 1) != 0) {
              lVar12 = 0x2f0;
            }
            uVar24 = (ulonglong)(uVar21 - uVar15);
            lVar12 = *(longlong *)(lVar12 + param_1);
            pfVar16 = (float *)(uVar1 + (ulonglong)uVar15 * 4);
            do {
              *pfVar16 = fVar28 * *(float *)((longlong)pfVar16 + (lVar12 - uVar1)) +
                         fVar29 * *pfVar16;
              pfVar16 = pfVar16 + 1;
              uVar24 = uVar24 - 1;
            } while (uVar24 != 0);
          }
        }
      }
      uVar15 = (int)uVar22 + 1;
      uVar19 = uVar19 + 1;
      uVar22 = (ulonglong)uVar15;
    } while (uVar15 < uVar27);
  }
  fVar28 = 0.0;
  fVar29 = 0.0;
  if (3 < uVar21) {
    uVar11 = (uVar21 - 4 >> 2) + 1;
    uVar19 = (ulonglong)uVar11;
    uVar11 = uVar11 * 4;
    do {
      fVar28 = *(float *)(*(longlong *)(param_1 + 0x2d8) + uVar20);
      *(float *)(param_1 + 0x348) =
           fVar28 * fVar28 * *(float *)(param_1 + 0x34c) +
           *(float *)(param_1 + 0x350) * *(float *)(param_1 + 0x348);
      fVar28 = *(float *)(*(longlong *)(param_1 + 0x2f0) + uVar20);
      *(float *)(param_1 + 0x358) =
           fVar28 * fVar28 * *(float *)(param_1 + 0x35c) +
           *(float *)(param_1 + 0x360) * *(float *)(param_1 + 0x358);
      fVar28 = *(float *)(*(longlong *)(param_1 + 0x2d8) + 4 + uVar20);
      *(float *)(param_1 + 0x348) =
           fVar28 * fVar28 * *(float *)(param_1 + 0x34c) +
           *(float *)(param_1 + 0x350) * *(float *)(param_1 + 0x348);
      fVar28 = *(float *)(*(longlong *)(param_1 + 0x2f0) + 4 + uVar20);
      *(float *)(param_1 + 0x358) =
           fVar28 * fVar28 * *(float *)(param_1 + 0x35c) +
           *(float *)(param_1 + 0x360) * *(float *)(param_1 + 0x358);
      fVar28 = *(float *)(*(longlong *)(param_1 + 0x2d8) + 8 + uVar20);
      *(float *)(param_1 + 0x348) =
           fVar28 * fVar28 * *(float *)(param_1 + 0x34c) +
           *(float *)(param_1 + 0x350) * *(float *)(param_1 + 0x348);
      fVar28 = *(float *)(*(longlong *)(param_1 + 0x2f0) + 8 + uVar20);
      *(float *)(param_1 + 0x358) =
           fVar28 * fVar28 * *(float *)(param_1 + 0x35c) +
           *(float *)(param_1 + 0x360) * *(float *)(param_1 + 0x358);
      fVar28 = *(float *)(*(longlong *)(param_1 + 0x2d8) + 0xc + uVar20);
      fVar28 = fVar28 * fVar28 * *(float *)(param_1 + 0x34c) +
               *(float *)(param_1 + 0x350) * *(float *)(param_1 + 0x348);
      *(float *)(param_1 + 0x348) = fVar28;
      fVar28 = _guard_xfg_dispatch_icall_nop(fVar28);
      fVar29 = *(float *)(*(longlong *)(param_1 + 0x2f0) + 0xc + uVar20);
      fVar29 = fVar29 * fVar29 * *(float *)(param_1 + 0x35c) +
               *(float *)(param_1 + 0x360) * *(float *)(param_1 + 0x358);
      *(float *)(param_1 + 0x358) = fVar29;
      fVar29 = _guard_xfg_dispatch_icall_nop(fVar29);
      uVar20 = uVar20 + 0x10;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  if (uVar11 < uVar21) {
    uVar20 = (ulonglong)(uVar21 - uVar11);
    lVar12 = (ulonglong)uVar11 * 4;
    do {
      fVar28 = *(float *)(*(longlong *)(param_1 + 0x2d8) + lVar12);
      fVar28 = fVar28 * fVar28 * *(float *)(param_1 + 0x34c) +
               *(float *)(param_1 + 0x350) * *(float *)(param_1 + 0x348);
      *(float *)(param_1 + 0x348) = fVar28;
      fVar28 = _guard_xfg_dispatch_icall_nop(fVar28);
      fVar29 = *(float *)(*(longlong *)(param_1 + 0x2f0) + lVar12);
      fVar29 = fVar29 * fVar29 * *(float *)(param_1 + 0x35c) +
               *(float *)(param_1 + 0x360) * *(float *)(param_1 + 0x358);
      *(float *)(param_1 + 0x358) = fVar29;
      fVar29 = _guard_xfg_dispatch_icall_nop(fVar29);
      lVar12 = lVar12 + 4;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
  if (fVar28 <= fVar29) {
    fVar28 = fVar29;
  }
  *(float *)(param_1 + 0x340) = fVar28;
  return;
}



// FUNCTION 14325f420 FUN_14325f420 body=357 status=ok
// SIG undefined FUN_14325f420(void)

undefined4
FUN_14325f420(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4,uint *param_5)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  
  if (param_4 == 0) {
    return 2;
  }
  *(longlong *)(param_1 + 8) = param_4;
  plVar9 = (longlong *)(**(code **)(*param_3 + 8))(param_3);
  uVar7 = (**(code **)(*plVar9 + 0x10))(plVar9);
  lVar1 = *(longlong *)(param_1 + 8);
  bVar2 = FUN_14325fd60(param_1 + 0x10,*(undefined4 *)(lVar1 + 8),*(undefined4 *)(lVar1 + 0x10),
                        *(undefined4 *)(lVar1 + 0xc),(float)*param_5,uVar7,
                        *(undefined4 *)(lVar1 + 0x14),param_2);
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x24) = 0;
  bVar3 = FUN_14325d620(param_1 + 0x2d0,param_2,uVar7);
  bVar4 = FUN_14325d620(param_1 + 0x2e8,param_2,uVar7);
  uVar10 = (ulonglong)((float)*param_5 * *(float *)(*(longlong *)(param_1 + 8) + 0x18));
  bVar5 = thunk_FUN_14325d620(param_1 + 0x300,param_2,uVar10 & 0xffffffff);
  bVar6 = thunk_FUN_14325d620(param_1 + 800,param_2,uVar10 & 0xffffffff);
  FUN_14325fce0(param_1 + 0x344,(float)*param_5);
  FUN_14325fce0(param_1 + 0x354,(float)*param_5);
  uVar8 = 1;
  if ((bVar2 & 1 & bVar3 & bVar4 & bVar5 & bVar6) == 0) {
    uVar8 = 0x34;
  }
  return uVar8;
}



// FUNCTION 14325f590 FUN_14325f590 body=76 status=ok
// SIG undefined FUN_14325f590(void)

undefined8 FUN_14325f590(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_4 == 0) {
    *(undefined4 *)(param_1 + 1) = 0x3f59999a;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
    *(undefined4 *)(param_1 + 2) = 0x44fa0000;
    *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
    *(undefined4 *)(param_1 + 3) = 0x3dcccccd;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0xc1400000;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined1 *)((longlong)param_1 + 0x24) = 1;
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014325f5d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_3,param_4);
  return uVar1;
}



// FUNCTION 14325f5e0 FUN_14325f5e0 body=149 status=ok
// SIG undefined FUN_14325f5e0(void)

undefined8 FUN_14325f5e0(longlong param_1)

{
  FUN_143260c50(param_1 + 0x10);
  if ((*(void **)(param_1 + 0x2d8) != (void *)0x0) && (*(uint *)(param_1 + 0x2e0) != 0)) {
    _guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 0x2d8),0,(ulonglong)*(uint *)(param_1 + 0x2e0) << 2);
  }
  if ((*(void **)(param_1 + 0x2f0) != (void *)0x0) && (*(uint *)(param_1 + 0x2f8) != 0)) {
    _guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 0x2f0),0,(ulonglong)*(uint *)(param_1 + 0x2f8) << 2);
  }
  FUN_143260bb0(param_1 + 0x300);
  FUN_143260bb0(param_1 + 800);
  FUN_143260c40(param_1 + 0x344);
  FUN_143260c40(param_1 + 0x354);
  return 1;
}



// FUNCTION 14325f680 FUN_14325f680 body=123 status=ok
// SIG undefined FUN_14325f680(void)

undefined8 FUN_14325f680(longlong param_1,undefined2 param_2,undefined4 *param_3)

{
  switch(param_2) {
  case 0:
    *(undefined4 *)(param_1 + 8) = *param_3;
    return 1;
  case 1:
    *(undefined4 *)(param_1 + 0xc) = *param_3;
    return 1;
  case 2:
    *(undefined4 *)(param_1 + 0x10) = *param_3;
    *(undefined1 *)(param_1 + 0x24) = 1;
    return 1;
  case 3:
    *(undefined4 *)(param_1 + 0x14) = *param_3;
    return 1;
  case 4:
    *(undefined4 *)(param_1 + 0x18) = *param_3;
    return 1;
  case 5:
    *(undefined4 *)(param_1 + 0x1c) = *param_3;
    return 1;
  case 6:
    *(undefined4 *)(param_1 + 0x20) = *param_3;
    return 1;
  default:
    return 0x1f;
  }
}



// FUNCTION 14325f720 FUN_14325f720 body=71 status=ok
// SIG undefined FUN_14325f720(void)

undefined8 FUN_14325f720(longlong param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = param_2[1];
  *(undefined4 *)(param_1 + 0x10) = param_2[2];
  *(undefined4 *)(param_1 + 0x14) = param_2[3];
  *(undefined4 *)(param_1 + 0x18) = param_2[4];
  *(undefined4 *)(param_1 + 0x1c) = param_2[5];
  *(undefined4 *)(param_1 + 0x20) = param_2[6];
  *(undefined1 *)(param_1 + 0x24) = 1;
  return 1;
}



// FUNCTION 14325f770 FUN_14325f770 body=152 status=ok
// SIG undefined FUN_14325f770(void)

undefined8 FUN_14325f770(undefined8 *param_1,longlong *param_2)

{
  FUN_14325fc10(param_1 + 2);
  if (((longlong *)param_1[0x5a] != (longlong *)0x0) && (param_1[0x5b] != 0)) {
    (**(code **)(*(longlong *)param_1[0x5a] + 0x10))();
  }
  if (((longlong *)param_1[0x5d] != (longlong *)0x0) && (param_1[0x5e] != 0)) {
    (**(code **)(*(longlong *)param_1[0x5d] + 0x10))();
  }
  FUN_14325fbf0(param_1 + 0x60);
  FUN_14325fbf0(param_1 + 100);
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 14325f810 FUN_14325f810 body=496 status=ok
// SIG undefined FUN_14325f810(void)

float FUN_14325f810(uint *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar14 = (float)log2f(0x4f000000);
  fVar14 = _guard_xfg_dispatch_icall_nop(24.0 / fVar14);
  fVar19 = 0.0;
  fVar15 = 1.0;
  iVar6 = (int)fVar14;
  if ((int)fVar14 < 1) {
    iVar6 = 1;
  }
  iVar12 = 0;
  if (3 < iVar6) {
    uVar7 = (iVar6 - 4U >> 2) + 1;
    uVar13 = (ulonglong)uVar7;
    iVar12 = uVar7 * 4;
    do {
      uVar8 = (ulonglong)*param_1 * 0xbc8f;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar8;
      lVar11 = SUB168(ZEXT816(0x200000005) * auVar1,8);
      uVar8 = (ulonglong)
              (uint)((int)uVar8 + (int)((uVar8 - lVar11 >> 1) + lVar11 >> 0x1e) * -0x7fffffff);
      uVar9 = uVar8 * 0xbc8f;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar9;
      lVar11 = SUB168(ZEXT816(0x200000005) * auVar2,8);
      fVar14 = ((float)uVar8 - 1.0) * fVar15;
      fVar16 = fVar15 * 2.1474836e+09;
      uVar8 = (ulonglong)
              (uint)((int)uVar9 + (int)((uVar9 - lVar11 >> 1) + lVar11 >> 0x1e) * -0x7fffffff);
      uVar9 = uVar8 * 0xbc8f;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar9;
      lVar11 = SUB168(ZEXT816(0x200000005) * auVar3,8);
      fVar17 = fVar16 * 2.1474836e+09;
      uVar9 = (ulonglong)
              (uint)((int)uVar9 + (int)((uVar9 - lVar11 >> 1) + lVar11 >> 0x1e) * -0x7fffffff);
      uVar10 = uVar9 * 0xbc8f;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar10;
      lVar11 = SUB168(ZEXT816(0x200000005) * auVar4,8);
      fVar18 = fVar17 * 2.1474836e+09;
      uVar7 = (int)uVar10 + (int)((uVar10 - lVar11 >> 1) + lVar11 >> 0x1e) * -0x7fffffff;
      *param_1 = uVar7;
      fVar15 = fVar18 * 2.1474836e+09;
      fVar19 = fVar19 + fVar14 + ((float)uVar8 - 1.0) * fVar16 + ((float)uVar9 - 1.0) * fVar17 +
               ((float)uVar7 - 1.0) * fVar18;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  if (iVar12 < iVar6) {
    uVar13 = (ulonglong)(uint)(iVar6 - iVar12);
    do {
      uVar8 = (ulonglong)*param_1 * 0xbc8f;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar8;
      lVar11 = SUB168(ZEXT816(0x200000005) * auVar5,8);
      uVar7 = (int)uVar8 + (int)((uVar8 - lVar11 >> 1) + lVar11 >> 0x1e) * -0x7fffffff;
      *param_1 = uVar7;
      fVar14 = ((float)uVar7 - 1.0) * fVar15;
      fVar15 = fVar15 * 2.1474836e+09;
      fVar19 = fVar19 + fVar14;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  return fVar19 / fVar15;
}



// FUNCTION 14325fa00 FUN_14325fa00 body=494 status=ok
// SIG undefined FUN_14325fa00(void)

longlong FUN_14325fa00(longlong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint *puVar6;
  float fVar7;
  float fVar8;
  
  lVar5 = 8;
  _eh_vector_constructor_iterator_
            (param_1,0x20,8,&LAB_14325cba0,AK::MemoryMgr::StartProfileThreadUsage);
  puVar6 = (uint *)(param_1 + 0x100);
  do {
    lVar5 = lVar5 + -1;
    puVar6[0] = 1;
    puVar6[1] = 0;
    puVar6[2] = 0x3f800000;
    fVar7 = (float)log2f(0x4f800000);
    fVar7 = _guard_xfg_dispatch_icall_nop(24.0 / fVar7);
    uVar1 = (int)fVar7;
    if ((int)fVar7 < 1) {
      uVar1 = 1;
    }
    fVar8 = 0.0;
    fVar7 = 1.0;
    if (0 < (int)uVar1) {
      uVar4 = (ulonglong)uVar1;
      do {
        uVar1 = std::_guard_xfg_dispatch_icall_nop();
        fVar8 = fVar8 + ((float)uVar1 - 0.0) * fVar7;
        fVar7 = fVar7 * 4.2949673e+09;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    uVar4 = (ulonglong)
            (((fVar8 / fVar7) * ((float)puVar6[2] - (float)puVar6[1]) + (float)puVar6[1]) * 10000.0)
    ;
    iVar2 = (int)uVar4;
    iVar3 = (int)((uVar4 & 0xffffffff) * 3 >> 0x20);
    uVar1 = iVar2 + (((uint)(iVar2 - iVar3) >> 1) + iVar3 >> 0x1e) * -0x7fffffff;
    if (uVar1 == 0) {
      uVar1 = 1;
    }
    *puVar6 = uVar1;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6 = puVar6 + 8;
  } while (lVar5 != 0);
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined4 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  *(undefined4 *)(param_1 + 0x2b4) = 0x3f800000;
  return param_1;
}



// FUNCTION 14325fbf0 FUN_14325fbf0 body=28 status=ok
// SIG undefined FUN_14325fbf0(void)

void FUN_14325fbf0(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if ((plVar1 != (longlong *)0x0) && (param_1[1] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014325fc07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 14325fc10 FUN_14325fc10 body=141 status=ok
// SIG undefined FUN_14325fc10(void)

void FUN_14325fc10(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = 8;
  plVar1 = param_1;
  do {
    if (((longlong *)*plVar1 != (longlong *)0x0) && (plVar1[1] != 0)) {
      (**(code **)(*(longlong *)*plVar1 + 0x10))();
    }
    plVar1 = plVar1 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  if (((longlong *)param_1[0x50] != (longlong *)0x0) && (param_1[0x51] != 0)) {
    (**(code **)(*(longlong *)param_1[0x50] + 0x10))();
  }
  if (((longlong *)param_1[0x53] != (longlong *)0x0) && (param_1[0x54] != 0)) {
    (**(code **)(*(longlong *)param_1[0x53] + 0x10))();
  }
  return;
}



// FUNCTION 14325fca0 thunk_FUN_14325d620 body=5 status=ok
// SIG undefined thunk_FUN_14325d620(void)

bool thunk_FUN_14325d620(longlong *param_1,longlong param_2,uint param_3)

{
  void *_Dst;
  
  if (param_2 != 0) {
    *param_1 = param_2;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if ((param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    param_1[1] = 0;
  }
  if ((param_3 != 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
    _Dst = (void *)(**(code **)(*(longlong *)*param_1 + 8))();
    param_1[1] = (longlong)_Dst;
    if (_Dst != (void *)0x0) {
      *(uint *)(param_1 + 2) = param_3;
      _guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)param_3 << 2);
    }
  }
  return *(uint *)(param_1 + 2) == param_3;
}



// FUNCTION 14325fcb0 FUN_14325fcb0 body=48 status=ok
// SIG undefined FUN_14325fcb0(void)

void FUN_14325fcb0(double *param_1,float param_2,float param_3)

{
  param_1[1] = 0.0;
  *param_1 = 1.0 / (double)param_3;
  param_1[3] = (double)param_2 * (1.0 / (double)param_3);
  return;
}



// FUNCTION 14325fce0 FUN_14325fce0 body=117 status=ok
// SIG undefined FUN_14325fce0(void)

void FUN_14325fce0(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  *param_1 = param_2;
  fVar1 = _guard_xfg_dispatch_icall_nop(125.66371 / param_2);
  fVar1 = 2.0 - fVar1;
  fVar2 = _guard_xfg_dispatch_icall_nop(fVar1 * fVar1 - 1.0);
  param_1[1] = 0.0;
  param_1[3] = fVar1 - fVar2;
  param_1[2] = 1.0 - (fVar1 - fVar2);
  return;
}



// FUNCTION 14325fd60 FUN_14325fd60 body=510 status=ok
// SIG undefined FUN_14325fd60(void)

byte FUN_14325fd60(longlong param_1,undefined4 param_2,float param_3,undefined4 param_4,
                  undefined4 param_5,int param_6,undefined4 param_7,undefined8 param_8)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  
  pfVar5 = (float *)(param_1 + 0x208);
  piVar10 = (int *)(param_1 + 0x110);
  lVar9 = 0;
  bVar6 = 1;
  lVar8 = 8;
  *(undefined4 *)(param_1 + 0x2b0) = param_2;
  *(undefined4 *)(param_1 + 0x2b4) = param_4;
  *(undefined4 *)(param_1 + 0x2b8) = param_5;
  *(undefined4 *)(param_1 + 700) = param_7;
  lVar7 = param_1;
  do {
    fVar12 = *(float *)((longlong)&DAT_145af0640 + lVar9) * *(float *)(param_1 + 0x2b8);
    bVar1 = FUN_14325d620(lVar7,param_8,
                          (int)(longlong)
                               (*(float *)((longlong)&DAT_145af0620 + lVar9) *
                                *(float *)(param_1 + 700) + fVar12 + fVar12) + 1);
    fVar12 = *(float *)(param_1 + 0x2b8);
    bVar6 = bVar6 & bVar1;
    fVar11 = *(float *)((longlong)&DAT_145af0660 + lVar9);
    piVar10[-1] = (int)fVar12;
    iVar3 = (int)(longlong)(fVar12 / fVar11);
    iVar4 = 1;
    if (iVar3 != 0) {
      iVar4 = iVar3;
    }
    *piVar10 = iVar4;
    fVar12 = *(float *)(param_1 + 0x2b8);
    pfVar5[-2] = fVar12;
    fVar12 = _guard_xfg_dispatch_icall_nop((param_3 * 6.2831855) / fVar12);
    fVar12 = 2.0 - fVar12;
    fVar11 = _guard_xfg_dispatch_icall_nop(fVar12 * fVar12 - 1.0);
    pfVar5[-1] = 0.0;
    lVar7 = lVar7 + 0x20;
    piVar10 = piVar10 + 8;
    lVar9 = lVar9 + 4;
    pfVar5[1] = fVar12 - fVar11;
    *pfVar5 = 1.0 - (fVar12 - fVar11);
    pfVar5 = pfVar5 + 4;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  bVar1 = FUN_14325d620(param_1 + 0x280,param_8,param_6 * 8);
  bVar2 = FUN_14325d620(param_1 + 0x298,param_8,param_6);
  return bVar2 & bVar6 & bVar1;
}



// FUNCTION 14325ff60 FUN_14325ff60 body=8 status=ok
// SIG undefined FUN_14325ff60(void)

void FUN_14325ff60(undefined8 *param_1)

{
  *param_1 = 0x3f800000;
  return;
}



// FUNCTION 14325ff70 FUN_14325ff70 body=120 status=ok
// SIG undefined FUN_14325ff70(void)

void FUN_14325ff70(float *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  *param_1 = param_3;
  fVar1 = _guard_xfg_dispatch_icall_nop((param_2 * 6.2831855) / param_3);
  fVar1 = 2.0 - fVar1;
  fVar2 = _guard_xfg_dispatch_icall_nop(fVar1 * fVar1 - 1.0);
  param_1[1] = 0.0;
  param_1[3] = fVar1 - fVar2;
  param_1[2] = 1.0 - (fVar1 - fVar2);
  return;
}



// FUNCTION 14325fff0 FUN_14325fff0 body=429 status=ok
// SIG undefined FUN_14325fff0(void)

void FUN_14325fff0(longlong param_1,longlong *param_2,longlong param_3,ushort param_4,float param_5,
                  float param_6,ushort param_7)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  short sVar7;
  
  uVar5 = *(uint *)(param_1 + 0x18);
  lVar4 = *(longlong *)(param_1 + 8);
  uVar3 = param_4 + uVar5;
  iVar6 = 0;
  uVar2 = 0;
  if (lVar4 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x10);
  }
  if (uVar3 < uVar1) {
    if (lVar4 == 0) {
      sVar7 = 0;
    }
    else {
      sVar7 = (short)*(undefined4 *)(param_1 + 0x10);
    }
    uVar2 = sVar7 - (short)uVar3;
    if (param_7 < uVar2) {
      uVar2 = param_7;
    }
    (**(code **)(*param_2 + 0x78))
              (param_2,param_3,lVar4 + (ulonglong)uVar3 * 4,*param_2,
               ((float)uVar2 * (param_6 - param_5)) / (float)param_7 + param_5,uVar2);
    lVar4 = *(longlong *)(param_1 + 8);
    uVar3 = uVar3 + uVar2;
    uVar5 = *(uint *)(param_1 + 0x18);
  }
  if (lVar4 != 0) {
    iVar6 = *(int *)(param_1 + 0x10);
  }
  if ((uVar3 - iVar6 < uVar5) && (uVar2 != param_7)) {
    sVar7 = param_7 - uVar2;
    if ((int)(uVar5 & 0xffff) <= (int)((uint)param_7 - (uint)uVar2)) {
      sVar7 = (short)uVar5;
    }
    (**(code **)(*param_2 + 0x78))
              (param_2,param_3 + (ulonglong)uVar2 * 4,lVar4 + (ulonglong)(uVar3 - iVar6) * 4,
               ((float)uVar2 * (param_6 - param_5)) / (float)param_7 + param_5,param_6,sVar7);
  }
  return;
}



// FUNCTION 1432601a0 FUN_1432601a0 body=400 status=ok
// SIG undefined FUN_1432601a0(void)

void FUN_1432601a0(longlong param_1,longlong param_2,ushort param_3,int param_4,int param_5,
                  float param_6,float param_7)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar6 = (uint)param_3;
  param_5 = (uVar6 - param_4) + param_5;
  if (param_5 < 1) {
    fVar10 = 0.0;
  }
  else {
    fVar10 = (param_7 - param_6) / (float)param_5;
  }
  iVar5 = 0;
  if (0 < param_5) {
    do {
      fVar9 = ((float)iVar5 / (float)param_5) * (float)param_3;
      fVar7 = _guard_xfg_dispatch_icall_nop(fVar9);
      fVar8 = _guard_xfg_dispatch_icall_nop(fVar9);
      lVar1 = *(longlong *)(param_1 + 8);
      fVar9 = fVar9 - (float)(int)fVar7;
      iVar3 = uVar6 - 1;
      if ((int)fVar8 < (int)uVar6) {
        iVar3 = (int)fVar8;
      }
      fVar7 = ((1.0 - fVar9) * *(float *)(param_2 + (longlong)(int)fVar7 * 4) +
              fVar9 * *(float *)(param_2 + (longlong)iVar3 * 4)) * param_6;
      if (lVar1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(uint *)(param_1 + 0x10);
      }
      param_6 = param_6 + fVar10;
      uVar2 = (ulonglong)(uint)(iVar5 + param_4 + *(int *)(param_1 + 0x18)) % (ulonglong)uVar4;
      iVar5 = iVar5 + 1;
      *(float *)(lVar1 + uVar2 * 4) = fVar7 + *(float *)(lVar1 + uVar2 * 4);
    } while (iVar5 < param_5);
  }
  return;
}



// FUNCTION 143260330 FUN_143260330 body=272 status=ok
// SIG undefined FUN_143260330(void)

void FUN_143260330(longlong param_1,longlong param_2,uint param_3)

{
  double dVar1;
  uint uVar2;
  ulonglong uVar3;
  float *pfVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  if (3 < param_3) {
    pfVar4 = (float *)(param_2 + 8);
    uVar2 = (param_3 - 4 >> 2) + 1;
    uVar3 = (ulonglong)uVar2;
    uVar5 = (ulonglong)(uVar2 * 4);
    do {
      dVar1 = *(double *)(param_1 + 8);
      *(double *)(param_1 + 8) = dVar1 + *(double *)(param_1 + 0x18);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x10);
      pfVar4[-2] = (float)(dVar1 - 1572864.0);
      dVar1 = *(double *)(param_1 + 8);
      *(double *)(param_1 + 8) = dVar1 + *(double *)(param_1 + 0x18);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x10);
      pfVar4[-1] = (float)(dVar1 - 1572864.0);
      dVar1 = *(double *)(param_1 + 8);
      *(double *)(param_1 + 8) = dVar1 + *(double *)(param_1 + 0x18);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x10);
      *pfVar4 = (float)(dVar1 - 1572864.0);
      dVar1 = *(double *)(param_1 + 8);
      *(double *)(param_1 + 8) = dVar1 + *(double *)(param_1 + 0x18);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x10);
      pfVar4[1] = (float)(dVar1 - 1572864.0);
      pfVar4 = pfVar4 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if ((uint)uVar5 < param_3) {
    pfVar4 = (float *)(param_2 + uVar5 * 4);
    uVar5 = (ulonglong)(param_3 - (uint)uVar5);
    do {
      dVar1 = *(double *)(param_1 + 8);
      *(double *)(param_1 + 8) = dVar1 + *(double *)(param_1 + 0x18);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x10);
      *pfVar4 = (float)(dVar1 - 1572864.0);
      pfVar4 = pfVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 143260440 FUN_143260440 body=317 status=ok
// SIG undefined FUN_143260440(void)

void FUN_143260440(float *param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  float *pfVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  float fVar8;
  
  uVar6 = 0;
  if (3 < param_5) {
    pfVar4 = (float *)(param_2 + 4);
    lVar7 = param_3 - param_2;
    lVar3 = param_4 - param_2;
    uVar2 = (param_5 - 4 >> 2) + 1;
    uVar5 = (ulonglong)uVar2;
    uVar6 = (ulonglong)(uVar2 * 4);
    do {
      fVar1 = *(float *)(lVar7 + -4 + (longlong)pfVar4);
      if (*param_1 <= fVar1) {
        fVar8 = param_1[1];
      }
      else {
        fVar8 = pfVar4[-1];
        param_1[1] = fVar8;
      }
      *param_1 = fVar1;
      *(float *)(lVar3 + -4 + (longlong)pfVar4) = fVar8;
      fVar1 = *(float *)(lVar7 + (longlong)pfVar4);
      if (fVar1 < *param_1) {
        param_1[1] = *pfVar4;
      }
      *param_1 = fVar1;
      *(float *)(lVar3 + (longlong)pfVar4) = param_1[1];
      fVar1 = *(float *)(lVar7 + 4 + (longlong)pfVar4);
      if (fVar1 < *param_1) {
        param_1[1] = pfVar4[1];
      }
      *param_1 = fVar1;
      *(float *)(lVar3 + 4 + (longlong)pfVar4) = param_1[1];
      fVar1 = *(float *)(lVar7 + 8 + (longlong)pfVar4);
      if (fVar1 < *param_1) {
        param_1[1] = pfVar4[2];
      }
      *param_1 = fVar1;
      *(float *)(lVar3 + 8 + (longlong)pfVar4) = param_1[1];
      pfVar4 = pfVar4 + 4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if ((uint)uVar6 < param_5) {
    pfVar4 = (float *)(param_2 + uVar6 * 4);
    uVar6 = (ulonglong)(param_5 - (uint)uVar6);
    do {
      fVar1 = *(float *)((longlong)pfVar4 + (param_3 - param_2));
      if (fVar1 < *param_1) {
        param_1[1] = *pfVar4;
      }
      *param_1 = fVar1;
      *(float *)((longlong)pfVar4 + (param_4 - param_2)) = param_1[1];
      pfVar4 = pfVar4 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 143260580 FUN_143260580 body=1570 status=ok
// SIG undefined FUN_143260580(void)

void FUN_143260580(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint local_a8;
  
  local_a8 = 0;
  if (param_4 != 0) {
    lVar14 = 0;
    param_2 = param_2 - param_3;
    do {
      uVar10 = local_a8 * 8;
      uVar15 = 0;
      pfVar1 = (float *)(lVar14 + param_3);
      *(undefined4 *)(lVar14 + *(longlong *)(param_1 + 0x2a0)) = 0;
      *(float *)(*(longlong *)(param_1 + 0x2a0) + lVar14) =
           *(float *)(*(longlong *)(param_1 + 0x288) + (ulonglong)uVar10 * 4) +
           *(float *)(*(longlong *)(param_1 + 0x2a0) + lVar14);
      *(float *)(*(longlong *)(param_1 + 0x2a0) + lVar14) =
           *(float *)(*(longlong *)(param_1 + 0x288) + (ulonglong)(uVar10 + 1) * 4) +
           *(float *)(*(longlong *)(param_1 + 0x2a0) + lVar14);
      *(float *)(*(longlong *)(param_1 + 0x2a0) + lVar14) =
           *(float *)(*(longlong *)(param_1 + 0x288) + (ulonglong)(uVar10 + 2) * 4) +
           *(float *)(*(longlong *)(param_1 + 0x2a0) + lVar14);
      *(float *)(*(longlong *)(param_1 + 0x2a0) + lVar14) =
           *(float *)(*(longlong *)(param_1 + 0x288) + (ulonglong)(uVar10 + 3) * 4) +
           *(float *)(*(longlong *)(param_1 + 0x2a0) + lVar14);
      *(float *)(*(longlong *)(param_1 + 0x2a0) + lVar14) =
           *(float *)(*(longlong *)(param_1 + 0x288) + (ulonglong)(uVar10 + 4) * 4) +
           *(float *)(*(longlong *)(param_1 + 0x2a0) + lVar14);
      *(float *)(*(longlong *)(param_1 + 0x2a0) + lVar14) =
           *(float *)(*(longlong *)(param_1 + 0x288) + (ulonglong)(uVar10 + 5) * 4) +
           *(float *)(*(longlong *)(param_1 + 0x2a0) + lVar14);
      *(float *)(*(longlong *)(param_1 + 0x2a0) + lVar14) =
           *(float *)(*(longlong *)(param_1 + 0x288) + (ulonglong)(uVar10 + 6) * 4) +
           *(float *)(*(longlong *)(param_1 + 0x2a0) + lVar14);
      *(float *)(*(longlong *)(param_1 + 0x2a0) + lVar14) =
           *(float *)(*(longlong *)(param_1 + 0x288) + (ulonglong)(uVar10 + 7) * 4) +
           *(float *)(*(longlong *)(param_1 + 0x2a0) + lVar14);
      *(float *)(*(longlong *)(param_1 + 0x2a0) + lVar14) =
           *(float *)(*(longlong *)(param_1 + 0x2a0) + lVar14) * 0.25;
      fVar2 = *(float *)(param_2 + (longlong)pfVar1);
      *(undefined4 *)(param_2 + (longlong)pfVar1) = 0;
      fVar3 = *pfVar1;
      *pfVar1 = 0.0;
      do {
        uVar5 = uVar15 * 2;
        uVar8 = (ulonglong)uVar5;
        lVar9 = (uVar8 + 8) * 0x20 + param_1;
        uVar10 = *(uint *)(lVar9 + 0x14);
        if (uVar10 == 0) {
          fVar18 = *(float *)(lVar9 + 4);
          fVar16 = (float)FUN_14325f810(lVar9);
          uVar10 = *(uint *)(lVar9 + 0x10);
          fVar17 = *(float *)(lVar9 + 0x18);
          fVar18 = fVar16 * (*(float *)(lVar9 + 8) - fVar18) + fVar18;
          fVar18 = (((fVar18 + fVar18) - 1.0) - fVar17) / (float)uVar10;
          *(float *)(lVar9 + 0x1c) = fVar18;
        }
        else {
          fVar17 = *(float *)(lVar9 + 0x18);
          fVar18 = *(float *)(lVar9 + 0x1c);
        }
        *(uint *)(lVar9 + 0x14) = uVar10 - 1;
        lVar11 = (ulonglong)uVar5 * 0x20;
        *(float *)(lVar9 + 0x18) = fVar17 + fVar18;
        lVar9 = *(longlong *)(lVar11 + 8 + param_1);
        iVar12 = (int)(longlong)
                      (fVar17 * (float)(&DAT_145af0640)[uVar8] * *(float *)(param_1 + 0x2b4) *
                       *(float *)(param_1 + 0x2b8) +
                      (float)(&DAT_145af0620)[uVar8] * *(float *)(param_1 + 700));
        if (lVar9 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(lVar11 + 0x10 + param_1);
        }
        if (iVar6 <= iVar12) {
          iVar12 = iVar6 + -1;
        }
        uVar10 = *(uint *)(lVar11 + 0x18 + param_1);
        uVar7 = uVar10 - iVar12;
        uVar4 = iVar6 + uVar7;
        if (-1 < (int)uVar7) {
          uVar4 = uVar7;
        }
        fVar17 = *(float *)(lVar9 + (ulonglong)uVar4 * 4);
        uVar4 = (uVar15 + local_a8 * 4) * 2;
        uVar13 = (ulonglong)uVar4;
        *(float *)(lVar9 + (ulonglong)uVar10 * 4) =
             (fVar2 + *(float *)(*(longlong *)(param_1 + 0x2a0) + lVar14)) -
             *(float *)(*(longlong *)(param_1 + 0x288) + uVar13 * 4);
        if (*(longlong *)(lVar11 + 8 + param_1) == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(uint *)(lVar11 + 0x10 + param_1);
        }
        *(uint *)(lVar11 + 0x18 + param_1) = (*(int *)(lVar11 + 0x18 + param_1) + 1U) % uVar10;
        lVar9 = (uVar8 + 0x20) * 0x10 + param_1;
        fVar17 = fVar17 * *(float *)(param_1 + 0x2b0) * *(float *)(lVar9 + 8) +
                 *(float *)(lVar9 + 0xc) * *(float *)(lVar9 + 4);
        *(float *)(lVar9 + 4) = fVar17;
        *(float *)(*(longlong *)(param_1 + 0x288) + uVar13 * 4) = fVar17;
        uVar8 = (ulonglong)(uVar5 + 1);
        lVar9 = ((ulonglong)(uVar5 + 1) + 8) * 0x20 + param_1;
        *(float *)(param_2 + (longlong)pfVar1) =
             *(float *)(*(longlong *)(param_1 + 0x288) + uVar13 * 4) +
             *(float *)(param_2 + (longlong)pfVar1);
        uVar10 = *(uint *)(lVar9 + 0x14);
        if (uVar10 == 0) {
          fVar18 = *(float *)(lVar9 + 4);
          fVar16 = (float)FUN_14325f810(lVar9);
          uVar10 = *(uint *)(lVar9 + 0x10);
          fVar17 = *(float *)(lVar9 + 0x18);
          fVar18 = fVar16 * (*(float *)(lVar9 + 8) - fVar18) + fVar18;
          fVar18 = (((fVar18 + fVar18) - 1.0) - fVar17) / (float)uVar10;
          *(float *)(lVar9 + 0x1c) = fVar18;
        }
        else {
          fVar17 = *(float *)(lVar9 + 0x18);
          fVar18 = *(float *)(lVar9 + 0x1c);
        }
        *(uint *)(lVar9 + 0x14) = uVar10 - 1;
        lVar11 = uVar8 * 0x20;
        *(float *)(lVar9 + 0x18) = fVar17 + fVar18;
        lVar9 = *(longlong *)(lVar11 + 8 + param_1);
        iVar12 = (int)(longlong)
                      (fVar17 * (float)(&DAT_145af0640)[uVar8] * *(float *)(param_1 + 0x2b4) *
                       *(float *)(param_1 + 0x2b8) +
                      (float)(&DAT_145af0620)[uVar8] * *(float *)(param_1 + 700));
        if (lVar9 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(lVar11 + 0x10 + param_1);
        }
        if (iVar6 <= iVar12) {
          iVar12 = iVar6 + -1;
        }
        uVar10 = *(uint *)(lVar11 + 0x18 + param_1);
        uVar7 = uVar10 - iVar12;
        uVar13 = (ulonglong)(uVar4 + 1);
        uVar5 = iVar6 + uVar7;
        if (-1 < (int)uVar7) {
          uVar5 = uVar7;
        }
        fVar17 = *(float *)(lVar9 + (ulonglong)uVar5 * 4);
        *(float *)(lVar9 + (ulonglong)uVar10 * 4) =
             (fVar3 + *(float *)(*(longlong *)(param_1 + 0x2a0) + lVar14)) -
             *(float *)(*(longlong *)(param_1 + 0x288) + uVar13 * 4);
        if (*(longlong *)(lVar11 + 8 + param_1) == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(uint *)(lVar11 + 0x10 + param_1);
        }
        uVar15 = uVar15 + 1;
        *(uint *)(lVar11 + 0x18 + param_1) = (*(int *)(lVar11 + 0x18 + param_1) + 1U) % uVar10;
        lVar9 = (uVar8 + 0x20) * 0x10 + param_1;
        fVar17 = fVar17 * *(float *)(param_1 + 0x2b0) * *(float *)(lVar9 + 8) +
                 *(float *)(lVar9 + 0xc) * *(float *)(lVar9 + 4);
        *(float *)(lVar9 + 4) = fVar17;
        *(float *)(*(longlong *)(param_1 + 0x288) + uVar13 * 4) = fVar17;
        *pfVar1 = *(float *)(*(longlong *)(param_1 + 0x288) + uVar13 * 4) + *pfVar1;
      } while (uVar15 < 4);
      lVar14 = lVar14 + 4;
      local_a8 = local_a8 + 1;
      *(float *)(param_2 + (longlong)pfVar1) = *(float *)(param_2 + (longlong)pfVar1) * 0.35;
      *pfVar1 = *pfVar1 * 0.35;
    } while (local_a8 < param_4);
  }
  return;
}



// FUNCTION 143260bb0 FUN_143260bb0 body=41 status=ok
// SIG undefined FUN_143260bb0(void)

void FUN_143260bb0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((*(void **)(param_1 + 8) != (void *)0x0) && (*(uint *)(param_1 + 0x10) != 0)) {
    _guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 8),0,(ulonglong)*(uint *)(param_1 + 0x10) << 2);
    return;
  }
  return;
}



// FUNCTION 143260be0 FUN_143260be0 body=52 status=ok
// SIG undefined FUN_143260be0(void)

void FUN_143260be0(longlong param_1)

{
  if ((*(void **)(param_1 + 8) != (void *)0x0) && (*(uint *)(param_1 + 0x10) != 0)) {
    _guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 8),0,(ulonglong)*(uint *)(param_1 + 0x10) << 2);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 143260c20 FUN_143260c20 body=20 status=ok
// SIG undefined FUN_143260c20(void)

void FUN_143260c20(longlong param_1,double param_2)

{
  *(double *)(param_1 + 8) = param_2 + 1572864.0;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x10);
  return;
}



// FUNCTION 143260c40 FUN_143260c40 body=8 status=ok
// SIG undefined FUN_143260c40(void)

void FUN_143260c40(longlong param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



// FUNCTION 143260c50 FUN_143260c50 body=296 status=ok
// SIG undefined FUN_143260c50(void)

void FUN_143260c50(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  
  puVar3 = (undefined4 *)(param_1 + 0x204);
  puVar1 = (undefined4 *)(param_1 + 0x114);
  lVar2 = 8;
  do {
    puVar1[-0x3f] = 0;
    if ((*(void **)(puVar1 + -0x43) != (void *)0x0) && (puVar1[-0x41] != 0)) {
      _guard_xfg_dispatch_icall_nop
                (*(void **)(puVar1 + -0x43),0,(ulonglong)(uint)puVar1[-0x41] << 2);
    }
    *puVar1 = 0;
    fVar5 = (float)puVar1[-4];
    fVar4 = (float)FUN_14325f810(puVar1 + -5);
    fVar5 = fVar4 * ((float)puVar1[-3] - fVar5) + fVar5;
    puVar1[1] = (fVar5 + fVar5) - 1.0;
    puVar1 = puVar1 + 8;
    *puVar3 = 0;
    puVar3 = puVar3 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  if ((*(void **)(param_1 + 0x288) != (void *)0x0) && (*(uint *)(param_1 + 0x290) != 0)) {
    _guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 0x288),0,(ulonglong)*(uint *)(param_1 + 0x290) << 2);
  }
  if ((*(void **)(param_1 + 0x2a0) != (void *)0x0) && (*(uint *)(param_1 + 0x2a8) != 0)) {
    _guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 0x2a0),0,(ulonglong)*(uint *)(param_1 + 0x2a8) << 2);
  }
  return;
}



// FUNCTION 143260d80 setPxJointLimitParametersBounceThreshold body=6 status=ok
// SIG undefined setPxJointLimitParametersBounceThreshold(void)

void setPxJointLimitParametersBounceThreshold(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}



// FUNCTION 143260d90 FUN_143260d90 body=17 status=ok
// SIG undefined FUN_143260d90(void)

void FUN_143260d90(double *param_1,float param_2)

{
  param_1[3] = (double)param_2 * *param_1;
  return;
}



// FUNCTION 143260db0 FUN_143260db0 body=639 status=ok
// SIG undefined FUN_143260db0(void)

void FUN_143260db0(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  param_2 = param_2 * 6.2831855;
  fVar1 = _guard_xfg_dispatch_icall_nop(param_2 / *(float *)(param_1 + 0x200));
  fVar1 = 2.0 - fVar1;
  fVar2 = _guard_xfg_dispatch_icall_nop(fVar1 * fVar1 - 1.0);
  *(float *)(param_1 + 0x20c) = fVar1 - fVar2;
  *(float *)(param_1 + 0x208) = 1.0 - (fVar1 - fVar2);
  fVar1 = _guard_xfg_dispatch_icall_nop(param_2 / *(float *)(param_1 + 0x210));
  fVar1 = 2.0 - fVar1;
  fVar2 = _guard_xfg_dispatch_icall_nop(fVar1 * fVar1 - 1.0);
  *(float *)(param_1 + 0x21c) = fVar1 - fVar2;
  *(float *)(param_1 + 0x218) = 1.0 - (fVar1 - fVar2);
  fVar1 = _guard_xfg_dispatch_icall_nop(param_2 / *(float *)(param_1 + 0x220));
  fVar1 = 2.0 - fVar1;
  fVar2 = _guard_xfg_dispatch_icall_nop(fVar1 * fVar1 - 1.0);
  *(float *)(param_1 + 0x22c) = fVar1 - fVar2;
  *(float *)(param_1 + 0x228) = 1.0 - (fVar1 - fVar2);
  fVar1 = _guard_xfg_dispatch_icall_nop(param_2 / *(float *)(param_1 + 0x230));
  fVar1 = 2.0 - fVar1;
  fVar2 = _guard_xfg_dispatch_icall_nop(fVar1 * fVar1 - 1.0);
  *(float *)(param_1 + 0x23c) = fVar1 - fVar2;
  *(float *)(param_1 + 0x238) = 1.0 - (fVar1 - fVar2);
  fVar1 = _guard_xfg_dispatch_icall_nop(param_2 / *(float *)(param_1 + 0x240));
  fVar1 = 2.0 - fVar1;
  fVar2 = _guard_xfg_dispatch_icall_nop(fVar1 * fVar1 - 1.0);
  *(float *)(param_1 + 0x24c) = fVar1 - fVar2;
  *(float *)(param_1 + 0x248) = 1.0 - (fVar1 - fVar2);
  fVar1 = _guard_xfg_dispatch_icall_nop(param_2 / *(float *)(param_1 + 0x250));
  fVar1 = 2.0 - fVar1;
  fVar2 = _guard_xfg_dispatch_icall_nop(fVar1 * fVar1 - 1.0);
  *(float *)(param_1 + 0x25c) = fVar1 - fVar2;
  *(float *)(param_1 + 600) = 1.0 - (fVar1 - fVar2);
  fVar1 = _guard_xfg_dispatch_icall_nop(param_2 / *(float *)(param_1 + 0x260));
  fVar1 = 2.0 - fVar1;
  fVar2 = _guard_xfg_dispatch_icall_nop(fVar1 * fVar1 - 1.0);
  *(float *)(param_1 + 0x26c) = fVar1 - fVar2;
  *(float *)(param_1 + 0x268) = 1.0 - (fVar1 - fVar2);
  fVar1 = _guard_xfg_dispatch_icall_nop(param_2 / *(float *)(param_1 + 0x270));
  fVar1 = 2.0 - fVar1;
  fVar2 = _guard_xfg_dispatch_icall_nop(fVar1 * fVar1 - 1.0);
  *(float *)(param_1 + 0x27c) = fVar1 - fVar2;
  *(float *)(param_1 + 0x278) = 1.0 - (fVar1 - fVar2);
  return;
}



// FUNCTION 143261030 `scalar_deleting_destructor' body=76 status=ok
// SIG void * `scalar_deleting_destructor'(UMSFreeThreadProxyFactory * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl Concurrency::details::UMSFreeThreadProxyFactory::`scalar
   deleting destructor'(unsigned int) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall
Concurrency::details::UMSFreeThreadProxyFactory::_scalar_deleting_destructor_
          (UMSFreeThreadProxyFactory *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__145af06b0;
  FUN_143261ca0(this + 0x20);
  *(undefined ***)this = AK::IAkPlugin::vftable;
  if ((param_1 & 1) != 0) {
    FMemory::operator_delete(this,0x120);
  }
  return this;
}



// FUNCTION 143261080 FUN_143261080 body=238 status=ok
// SIG undefined FUN_143261080(void)

void FUN_143261080(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  if (0 < *(int *)(param_1 + 0xb8)) {
    puVar2 = (undefined8 *)(param_1 + 0xd0);
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0xb8));
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *(undefined8 *)(param_1 + 200) = 0;
  }
  if (*(char *)(param_1 + 0xa0) != '\0') {
    *(undefined1 *)(param_1 + 0xa0) = 0;
    WaitForThreadpoolWorkCallbacks(*(PTP_WORK *)(param_1 + 0x118),0);
    CloseThreadpoolWork(*(PTP_WORK *)(param_1 + 0x118));
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  FUN_143262020(param_1 + 0x20,param_2);
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (lVar1 != 0) {
    FUN_143262150(lVar1);
    (**(code **)(*param_2 + 0x10))(param_2,lVar1);
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 143261170 FUN_143261170 body=721 status=ok
// SIG undefined FUN_143261170(void)

void FUN_143261170(longlong param_1,longlong *param_2,undefined8 param_3)

{
  float *pfVar1;
  ulonglong uVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  float *pfVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float *pfVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_48;
  float fStack_44;
  
  uVar3 = *(ushort *)((longlong)param_2 + 0x12);
  if (uVar3 != 0) {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0xb0) + 0xd8);
    if (iVar4 == 1) {
      uVar6 = (ulonglong)*(ushort *)(param_1 + 8);
      uVar8 = 0;
      fStack_44 = (float)((ulonglong)param_3 >> 0x20);
      local_48 = (float)param_3;
      uVar16 = (ulonglong)uVar3;
      lVar5 = *(longlong *)(param_1 + 0xd0 + uVar6 * 8);
      uVar13 = *(uint *)(param_1 + 0x10);
      uVar17 = uVar13 & 0xff;
      fVar22 = (fStack_44 - local_48) / (float)uVar16;
      if (0xfff < (uVar13 & 0xfffff000)) {
        uVar9 = 1;
        uVar6 = uVar8;
        uVar18 = uVar8;
        do {
          uVar11 = *(uint *)(param_2 + 1) >> 0xc;
          uVar10 = uVar11 & uVar9;
          uVar15 = (uint)uVar6;
          if ((uVar9 & uVar13 >> 0xc) != 0) {
            pfVar7 = (float *)(lVar5 + uVar18 * 4);
            if (uVar10 == 0) {
              pfVar12 = pfVar7 + uVar17 * uVar3;
              for (; pfVar7 < pfVar12; pfVar7 = pfVar7 + uVar17) {
                *pfVar7 = 0.0;
              }
            }
            else {
              if ((uVar11 & 8) == 0) {
LAB_143261280:
                uVar11 = uVar15;
              }
              else {
                uVar13 = 0;
                uVar6 = uVar8;
                for (uVar11 = uVar11 & 7; uVar11 != 0; uVar11 = uVar11 & uVar11 - 1) {
                  uVar13 = (int)uVar6 + 1;
                  uVar6 = (ulonglong)uVar13;
                }
                if (uVar15 == uVar13) {
                  uVar11 = (*(uint *)(param_2 + 1) & 0xff) - 1;
                }
                else {
                  uVar11 = uVar15 - 1;
                  if (uVar15 <= uVar13) goto LAB_143261280;
                }
              }
              pfVar12 = (float *)(*param_2 +
                                 (ulonglong)*(ushort *)(param_2 + 2) * (ulonglong)uVar11 * 4);
              uVar6 = uVar16;
              if (pfVar12 + uVar16 < pfVar12) {
                uVar6 = uVar8;
              }
              uVar2 = uVar8;
              fVar21 = local_48;
              if (3 < uVar6) {
                lVar14 = (uVar6 - 4 >> 2) + 1;
                uVar2 = lVar14 * 4;
                do {
                  *pfVar7 = fVar21 * *pfVar12;
                  fVar19 = fVar21 + fVar22 + fVar22;
                  pfVar7 = pfVar7 + uVar17;
                  *pfVar7 = (fVar21 + fVar22) * pfVar12[1];
                  fVar20 = fVar19 + fVar22;
                  pfVar7 = pfVar7 + uVar17;
                  *pfVar7 = fVar19 * pfVar12[2];
                  fVar21 = fVar20 + fVar22;
                  pfVar1 = pfVar12 + 3;
                  pfVar12 = pfVar12 + 4;
                  pfVar7[uVar17] = fVar20 * *pfVar1;
                  pfVar7 = pfVar7 + uVar17 + uVar17;
                  lVar14 = lVar14 + -1;
                } while (lVar14 != 0);
              }
              for (; uVar2 < uVar6; uVar2 = uVar2 + 1) {
                fVar19 = *pfVar12;
                pfVar12 = pfVar12 + 1;
                *pfVar7 = fVar21 * fVar19;
                pfVar7 = pfVar7 + uVar17;
                fVar21 = fVar21 + fVar22;
              }
            }
            uVar18 = (ulonglong)((int)uVar18 + 1);
          }
          uVar13 = *(uint *)(param_1 + 0x10);
          uVar9 = uVar9 * 2;
          uVar11 = uVar15 + 1;
          if (uVar10 == 0) {
            uVar11 = uVar15;
          }
          uVar6 = (ulonglong)uVar11;
        } while (uVar9 <= uVar13 >> 0xc);
        uVar6 = (ulonglong)*(ushort *)(param_1 + 8);
      }
      FUN_143261f30(param_1 + 0x20,(uint)*(ushort *)(param_1 + 0xc) * (uint)uVar3,
                    *(undefined8 *)(param_1 + 0xd0 + uVar6 * 8));
      *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + 1;
      if ((uint)*(ushort *)(param_1 + 8) == *(uint *)(param_1 + 0xb8)) {
        *(undefined2 *)(param_1 + 8) = 0;
      }
      *(undefined1 *)(param_1 + 0x112) = 1;
      return;
    }
    if (iVar4 == 2) {
      *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0xd8) = 0;
      FUN_1432622f0(*(undefined8 *)(param_1 + 0xb0),*(undefined1 *)(param_1 + 0x10),
                    *(undefined8 *)(param_1 + 0xc0));
    }
  }
  return;
}



// FUNCTION 143261450 FUN_143261450 body=216 status=ok
// SIG undefined FUN_143261450(void)

undefined8 * FUN_143261450(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x120);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined2 *)(puVar1 + 1) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__145af06b0;
    *(undefined2 *)((longlong)puVar1 + 0xc) = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    *(uint *)(puVar1 + 2) = *(uint *)(puVar1 + 2) & 0xff;
    *(undefined8 *)((longlong)puVar1 + 0x14) = 0;
    FUN_143261c60(puVar1 + 4);
    *(undefined1 *)(puVar1 + 0x14) = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    *(undefined4 *)(puVar1 + 0x17) = 0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined2 *)(puVar1 + 0x22) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x112) = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x20] = 0;
    puVar1[0x21] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143261530 CreateAudioInputSourceParams body=37 status=ok
// SIG undefined CreateAudioInputSourceParams(void)

void CreateAudioInputSourceParams(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 8))(param_1,0x10);
  if (lVar1 != 0) {
    CAkFxSrcAudioInputParams::CAkFxSrcAudioInputParams(lVar1);
    return;
  }
  return;
}



// FUNCTION 143261560 FUN_143261560 body=837 status=ok
// SIG undefined FUN_143261560(void)

int FUN_143261560(PVOID param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                 longlong param_5)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  void *pvVar8;
  PTP_WORK pwk;
  uint uVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 local_48 [2];
  ushort local_46;
  undefined4 local_3c;
  undefined2 local_38;
  undefined1 local_30 [2];
  ushort local_2e;
  undefined4 local_24;
  undefined2 local_20;
  
  *(longlong **)((longlong)param_1 + 0xc0) = param_3;
  uVar1 = (**(code **)(*param_3 + 0x70))(param_3);
  *(uint *)((longlong)param_1 + 0xb8) = (uint)uVar1;
  plVar5 = (longlong *)(**(code **)(*param_3 + 8))(param_3);
  sVar2 = (**(code **)(*plVar5 + 0x10))(plVar5);
  if (sVar2 == 0x100) {
    if (*(int *)((longlong)param_1 + 0xb8) < 5) {
      *(undefined4 *)((longlong)param_1 + 0xb8) = 5;
    }
  }
  else if ((sVar2 == 0x200) && (*(int *)((longlong)param_1 + 0xb8) < 3)) {
    *(undefined4 *)((longlong)param_1 + 0xb8) = 3;
  }
  uVar9 = 0x2d63f;
  uVar12 = *(uint *)(param_5 + 4);
  if ((((char)uVar12 == '\0') || ((uVar12 & 0xf00) != 0x100)) ||
     ((uVar3 = uVar12 >> 0xc, uVar3 != 3 &&
      (((uVar3 != 0x60f && (uVar3 != 0x63f)) && (uVar3 != 0x2d63f)))))) {
    bVar10 = 0;
    do {
      bVar10 = bVar10 + 1;
      uVar9 = uVar9 & uVar9 - 1;
    } while (uVar9 != 0);
    *(byte *)((longlong)param_1 + 0x10) = bVar10;
    *(uint *)((longlong)param_1 + 0x10) = bVar10 | 0x2d63f100;
    *(uint *)(param_5 + 4) = bVar10 | 0x2d63f100;
  }
  else {
    *(uint *)((longlong)param_1 + 0x10) = uVar12;
  }
  lVar6 = (**(code **)(*param_2 + 8))(param_2,0xe8);
  uVar13 = 0;
  uVar7 = uVar13;
  if (lVar6 != 0) {
    uVar7 = FUN_143262090(lVar6);
  }
  *(ulonglong *)((longlong)param_1 + 0xb0) = uVar7;
  if (uVar7 == 0) {
LAB_143261874:
    FUN_143261080(param_1,param_2);
    iVar4 = 0x34;
  }
  else {
    iVar4 = FUN_1432622f0(uVar7,*(undefined1 *)((longlong)param_1 + 0x10),param_3);
    if (iVar4 == 1) {
      *(ushort *)((longlong)param_1 + 0xc) = (*(ushort *)((longlong)param_1 + 0x10) & 0xff) << 2;
      plVar5 = (longlong *)(**(code **)(*param_3 + 8))(param_3);
      uVar1 = (**(code **)(*plVar5 + 0x10))(plVar5);
      iVar4 = (uint)*(ushort *)((longlong)param_1 + 0xc) * (uint)uVar1;
      pvVar8 = (void *)(**(code **)(*param_2 + 8))(param_2);
      *(void **)((longlong)param_1 + 200) = pvVar8;
      if (pvVar8 != (void *)0x0) {
        _guard_xfg_dispatch_icall_nop
                  (pvVar8,0,(ulonglong)(uint)(*(int *)((longlong)param_1 + 0xb8) * iVar4));
        iVar11 = *(int *)((longlong)param_1 + 0xb8);
        if (0 < iVar11) {
          plVar5 = (longlong *)((longlong)param_1 + 0xd0);
          do {
            iVar11 = (int)uVar13;
            uVar12 = iVar11 + 1;
            uVar13 = (ulonglong)uVar12;
            *plVar5 = (ulonglong)(uint)(iVar11 * iVar4) + *(longlong *)((longlong)param_1 + 200);
            iVar11 = *(int *)((longlong)param_1 + 0xb8);
            plVar5 = plVar5 + 1;
          } while ((int)uVar12 < iVar11);
        }
        local_46 = *(ushort *)((longlong)param_1 + 0x10) & 0xff;
        *(int *)((longlong)param_1 + 0x18) = iVar4;
        local_24 = 0x200004;
        *(int *)((longlong)param_1 + 0x14) = iVar11 * iVar4;
        local_20 = *(undefined2 *)(*(longlong *)((longlong)param_1 + 0xb0) + 0x10);
        local_3c = 0x200004;
        local_2e = local_46;
        plVar5 = (longlong *)(**(code **)(*param_3 + 8))(param_3);
        local_38 = (**(code **)(*plVar5 + 0x10))(plVar5);
        iVar4 = FUN_143261db0((longlong)param_1 + 0x20,param_2,
                              *(undefined4 *)((longlong)param_1 + 0x14),local_30,local_48);
        if (iVar4 != 1) {
          FUN_143261080(param_1,param_2);
          return iVar4;
        }
        pvVar8 = (void *)(**(code **)(*param_2 + 8))
                                   (param_2,*(int *)(*(longlong *)((longlong)param_1 + 0xb0) + 0x10)
                                            * (uint)*(ushort *)((longlong)param_1 + 0xc));
        *(void **)((longlong)param_1 + 0xa8) = pvVar8;
        if (pvVar8 != (void *)0x0) {
          _guard_xfg_dispatch_icall_nop
                    (pvVar8,0,(ulonglong)
                              (*(int *)(*(longlong *)((longlong)param_1 + 0xb0) + 0x10) *
                              (uint)*(ushort *)((longlong)param_1 + 0xc)));
          *(undefined1 *)((longlong)param_1 + 0xa0) = 1;
          pwk = CreateThreadpoolWork(FUN_1432619f0,param_1,(PTP_CALLBACK_ENVIRON)0x0);
          *(PTP_WORK *)((longlong)param_1 + 0x118) = pwk;
          if (pwk == (PTP_WORK)0x0) {
            FUN_143261080(param_1,param_2);
            (**(code **)(*param_3 + 0x40))
                      (param_3,"MS Spatial Sound: Could not create worker threads.",2);
            return 2;
          }
          SubmitThreadpoolWork(pwk);
          return 1;
        }
        goto LAB_143261874;
      }
    }
    FUN_143261080(param_1,param_2);
    iVar4 = 4;
  }
  return iVar4;
}



// FUNCTION 1432618b0 FUN_1432618b0 body=86 status=ok
// SIG undefined FUN_1432618b0(void)

char FUN_1432618b0(longlong param_1,uint *param_2)

{
  ushort uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xc0) + 8))();
  uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
  *param_2 = (uint)((uint)*(ushort *)(param_1 + 0xc) * (uint)uVar1 < *(uint *)(param_1 + 100));
  return (*(char *)(param_1 + 0x111) != '\0') + '\x01';
}



// FUNCTION 143261910 FUN_143261910 body=208 status=ok
// SIG undefined FUN_143261910(void)

void FUN_143261910(longlong param_1)

{
  void *_Dst;
  undefined8 uVar1;
  ushort uVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x112) != '\0') {
    *(undefined1 *)(param_1 + 0x112) = 0;
    return;
  }
  _Dst = *(void **)(param_1 + 0xd0 + (ulonglong)*(ushort *)(param_1 + 8) * 8);
  plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xc0) + 8))();
  uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
  _guard_xfg_dispatch_icall_nop
            (_Dst,0,(ulonglong)((uint)*(byte *)(param_1 + 0x10) * (uint)uVar2 * 4));
  uVar1 = *(undefined8 *)(param_1 + 0xd0 + (ulonglong)*(ushort *)(param_1 + 8) * 8);
  plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xc0) + 8))();
  uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
  FUN_143261f30(param_1 + 0x20,(uint)*(ushort *)(param_1 + 0xc) * (uint)uVar2,uVar1);
  *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + 1;
  if ((uint)*(ushort *)(param_1 + 8) == *(uint *)(param_1 + 0xb8)) {
    *(undefined2 *)(param_1 + 8) = 0;
    *(undefined1 *)(param_1 + 0x112) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x112) = 0;
  return;
}



// FUNCTION 1432619f0 FUN_1432619f0 body=545 status=ok
// SIG undefined FUN_1432619f0(void)

void FUN_1432619f0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  bool bVar5;
  bool bVar6;
  DWORD DVar7;
  int iVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  uint local_res10 [2];
  undefined1 local_res20 [8];
  undefined1 local_d8 [16];
  longlong local_c8 [12];
  longlong local_68 [12];
  
  CoInitializeEx((LPVOID)0x0,0);
  cVar1 = *(char *)(param_2 + 0xa0);
  while (cVar1 != '\0') {
    lVar3 = *(longlong *)(param_2 + 0xb0);
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0xd8) == 1)) {
      if ((*(HANDLE *)(lVar3 + 8) == (HANDLE)0x0) ||
         (DVar7 = WaitForSingleObject(*(HANDLE *)(lVar3 + 8),100), DVar7 == 0)) {
        iVar8 = (**(code **)(*(longlong *)**(undefined8 **)(param_2 + 0xb0) + 0x40))
                          ((longlong *)**(undefined8 **)(param_2 + 0xb0),local_res20,local_res10);
        if (iVar8 != 0) {
          *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + 0xd8) = 2;
        }
        uVar11 = *(uint *)(param_2 + 0x10);
        uVar14 = 0;
        if ((char)uVar11 != '\0') {
          do {
            plVar9 = *(longlong **)(*(longlong *)(param_2 + 0xb0) + (uVar14 + 2) * 0x10);
            (**(code **)(*plVar9 + 0x18))(plVar9,local_c8 + uVar14,local_d8);
            uVar11 = *(uint *)(param_2 + 0x10);
            uVar10 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar10;
          } while (uVar10 < (uVar11 & 0xff));
        }
        uVar14 = (ulonglong)(uVar11 & 0xff);
        bVar5 = true;
        if ((char)uVar11 != '\0') {
          plVar9 = local_c8;
          do {
            lVar3 = *plVar9;
            plVar9 = plVar9 + 1;
            bVar6 = false;
            if (lVar3 != 0) {
              bVar6 = bVar5;
            }
            bVar5 = bVar6;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        if (bVar5) {
          FUN_143261ce0(param_2 + 0x20,*(ushort *)(param_2 + 0xc) * local_res10[0]);
          puVar12 = *(undefined4 **)(param_2 + 0xa8);
          uVar11 = *(uint *)(param_2 + 0x10) & 0xff;
          if (uVar11 != 0) {
            _guard_xfg_dispatch_icall_nop(local_68,local_c8,(ulonglong)uVar11 << 3);
          }
          uVar10 = 0;
          if (local_res10[0] != 0) {
            do {
              uVar14 = 0;
              if (uVar11 != 0) {
                do {
                  puVar4 = (undefined4 *)local_68[uVar14];
                  uVar2 = *puVar12;
                  puVar12 = puVar12 + 1;
                  *puVar4 = uVar2;
                  uVar11 = *(uint *)(param_2 + 0x10);
                  local_68[uVar14] = (longlong)(puVar4 + 1);
                  uVar13 = (int)uVar14 + 1;
                  uVar14 = (ulonglong)uVar13;
                  uVar11 = uVar11 & 0xff;
                } while (uVar13 < uVar11);
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < local_res10[0]);
          }
        }
        iVar8 = (**(code **)(*(longlong *)**(undefined8 **)(param_2 + 0xb0) + 0x48))();
        if (iVar8 != 0) {
          *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + 0xd8) = 2;
        }
        (**(code **)(**(longlong **)(param_2 + 0xc0) + 0x68))();
      }
      else {
        *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + 0xd8) = 2;
      }
    }
    cVar1 = *(char *)(param_2 + 0xa0);
  }
  return;
}



// FUNCTION 143261c20 Term body=64 status=ok
// SIG undefined Term(void)

undefined8 CAkFDNReverbFX::Term(undefined8 *param_1,longlong *param_2)

{
  FUN_143261080();
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 143261c60 FUN_143261c60 body=50 status=ok
// SIG undefined FUN_143261c60(void)

undefined8 * FUN_143261c60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145af0748;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 143261ca0 FUN_143261ca0 body=11 status=ok
// SIG undefined FUN_143261ca0(void)

void FUN_143261ca0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145af0748;
  return;
}



// FUNCTION 143261cb0 FUN_143261cb0 body=43 status=ok
// SIG undefined FUN_143261cb0(void)

undefined8 * FUN_143261cb0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145af0748;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 143261ce0 FUN_143261ce0 body=198 status=ok
// SIG undefined FUN_143261ce0(void)

void FUN_143261ce0(longlong param_1,uint param_2,void *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (((param_2 <= (uint)(*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x44))) &&
      (*(int *)(param_1 + 0x74) != 0)) && (*(int *)(param_1 + 0x78) != 0)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
    uVar2 = *(uint *)(param_1 + 0x3c);
    uVar1 = *(int *)(param_1 + 0x38) - uVar2;
    if (uVar1 < param_2) {
      _guard_xfg_dispatch_icall_nop
                (param_3,(void *)((ulonglong)uVar2 + *(longlong *)(param_1 + 0x30)),(ulonglong)uVar1
                );
      uVar3 = *(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x3c);
      uVar2 = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((ulonglong)uVar3 + (longlong)param_3),
               (void *)((ulonglong)uVar2 + *(longlong *)(param_1 + 0x30)),
               (ulonglong)(param_2 - uVar3));
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + param_2;
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + (param_2 - uVar3);
    if (*(uint *)(param_1 + 0x38) <= *(uint *)(param_1 + 0x3c)) {
      *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) - *(uint *)(param_1 + 0x38);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  }
  return;
}



// FUNCTION 143261db0 FUN_143261db0 body=378 status=ok
// SIG undefined FUN_143261db0(void)

undefined8
FUN_143261db0(longlong param_1,longlong *param_2,uint param_3,undefined8 *param_4,
             undefined4 *param_5)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  BOOL BVar6;
  void *_Dst;
  
  _Dst = (void *)(**(code **)(*param_2 + 8))(param_2);
  *(void **)(param_1 + 0x30) = _Dst;
  if (_Dst != (void *)0x0) {
    _guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)param_3);
    *(uint *)(param_1 + 0x38) = param_3;
    *(uint *)(param_1 + 0x44) = param_3;
    uVar5 = param_4[1];
    *(undefined8 *)(param_1 + 0x1a) = *param_4;
    *(undefined8 *)(param_1 + 0x22) = uVar5;
    sVar1 = *(short *)(param_4 + 2);
    *(short *)(param_1 + 0x2a) = sVar1;
    if ((*(short *)(param_1 + 0x18) != 0) && (sVar1 != 0)) {
      if ((*(short *)(param_1 + 0x16) == 0x20) && (*(short *)(param_1 + 0x28) == 0x20)) {
        *(uint *)(param_1 + 0x74) =
             (uint)*(ushort *)(param_1 + 0x14) * (uint)*(ushort *)(param_1 + 10);
        *(uint *)(param_1 + 0x78) =
             (uint)*(ushort *)(param_1 + 0x26) * (uint)*(ushort *)(param_1 + 0x1c);
      }
      else {
        *(undefined8 *)(param_1 + 0x74) = 0;
      }
    }
    *(undefined8 *)(param_1 + 0x3c) = 0;
    uVar2 = param_5[1];
    uVar3 = param_5[2];
    uVar4 = param_5[3];
    *(undefined4 *)(param_1 + 8) = *param_5;
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    *(undefined4 *)(param_1 + 0x10) = uVar3;
    *(undefined4 *)(param_1 + 0x14) = uVar4;
    sVar1 = *(short *)(param_5 + 4);
    *(short *)(param_1 + 0x18) = sVar1;
    if ((sVar1 != 0) && (*(short *)(param_1 + 0x2a) != 0)) {
      if ((*(short *)(param_1 + 0x16) == 0x20) && (*(short *)(param_1 + 0x28) == 0x20)) {
        *(uint *)(param_1 + 0x74) =
             (uint)*(ushort *)(param_1 + 0x14) * (uint)*(ushort *)(param_1 + 10);
        *(uint *)(param_1 + 0x78) =
             (uint)*(ushort *)(param_1 + 0x26) * (uint)*(ushort *)(param_1 + 0x1c);
      }
      else {
        *(undefined8 *)(param_1 + 0x74) = 0;
      }
    }
    BVar6 = InitializeCriticalSectionEx((LPCRITICAL_SECTION)(param_1 + 0x48),0,0);
    if (BVar6 == 0) {
      if (*(longlong *)(param_1 + 0x30) != 0) {
        (**(code **)(*param_2 + 0x10))();
        *(undefined8 *)(param_1 + 0x30) = 0;
      }
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined2 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x1a) = 0;
      *(undefined8 *)(param_1 + 0x22) = 0;
      *(undefined2 *)(param_1 + 0x2a) = 0;
      if (*(char *)(param_1 + 0x70) != '\0') {
        DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
        *(undefined1 *)(param_1 + 0x70) = 0;
      }
      return 2;
    }
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  return 1;
}



// FUNCTION 143261f30 FUN_143261f30 body=236 status=ok
// SIG undefined FUN_143261f30(void)

void FUN_143261f30(longlong param_1,uint param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if ((*(int *)(param_1 + 0x74) != 0) && (*(int *)(param_1 + 0x78) != 0)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
    uVar2 = *(uint *)(param_1 + 0x74);
    iVar3 = 0;
    uVar1 = param_2 / uVar2;
    uVar4 = 0;
    if (uVar1 != 0) {
      do {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((ulonglong)*(uint *)(param_1 + 0x40) + *(longlong *)(param_1 + 0x30)),
                   (void *)((ulonglong)(uVar2 * uVar4) + param_3),(longlong)(int)uVar2);
        uVar2 = *(uint *)(param_1 + 0x74);
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + uVar2;
        if (*(uint *)(param_1 + 0x38) <= *(uint *)(param_1 + 0x40)) {
          *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) - *(uint *)(param_1 + 0x38);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
    if (*(uint *)(param_1 + 0x44) < (*(int *)(param_1 + 0x78) / (int)uVar2) * param_2) {
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x40);
    }
    else {
      iVar3 = *(uint *)(param_1 + 0x44) - (*(int *)(param_1 + 0x78) * param_2) / uVar2;
    }
    *(int *)(param_1 + 0x44) = iVar3;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  }
  return;
}



// FUNCTION 143262020 FUN_143262020 body=98 status=ok
// SIG undefined FUN_143262020(void)

void FUN_143262020(longlong param_1,longlong *param_2)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(char *)(param_1 + 0x70) != '\0') {
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  return;
}



// FUNCTION 143262090 FUN_143262090 body=191 status=ok
// SIG undefined FUN_143262090(void)

undefined8 * FUN_143262090(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined4 *)(param_1 + 5) = 4;
  *(undefined4 *)(param_1 + 7) = 8;
  *(undefined4 *)(param_1 + 9) = 0x10;
  *(undefined4 *)(param_1 + 0xb) = 0x80;
  *(undefined4 *)(param_1 + 0xd) = 0x100;
  *(undefined4 *)(param_1 + 0xf) = 0x20;
  *(undefined4 *)(param_1 + 0x11) = 0x40;
  *(undefined4 *)(param_1 + 0x13) = 0x200;
  *(undefined4 *)(param_1 + 0x15) = 0x400;
  *(undefined4 *)(param_1 + 0x17) = 0x800;
  *(undefined4 *)(param_1 + 0x19) = 0x1000;
  return param_1;
}



// FUNCTION 143262150 FUN_143262150 body=132 status=ok
// SIG undefined FUN_143262150(void)

void FUN_143262150(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)param_1[0x1c];
  if (plVar2 != (longlong *)0x0) {
    param_1[0x1c] = 0;
    (**(code **)(*plVar2 + 0x10))();
  }
  lVar3 = 0xc;
  plVar2 = param_1 + 0x1c;
  do {
    plVar1 = (longlong *)plVar2[-2];
    plVar2 = plVar2 + -2;
    lVar3 = lVar3 + -1;
    if (plVar1 != (longlong *)0x0) {
      *plVar2 = 0;
      (**(code **)(*plVar1 + 0x10))();
    }
  } while (lVar3 != 0);
  plVar2 = (longlong *)*param_1;
  if (plVar2 != (longlong *)0x0) {
    *param_1 = 0;
    (**(code **)(*plVar2 + 0x10))();
  }
  return;
}



// FUNCTION 1432621e0 FUN_1432621e0 body=259 status=ok
// SIG undefined FUN_1432621e0(void)

undefined4 FUN_1432621e0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  LPCWSTR local_res8;
  CHAR local_118 [259];
  undefined1 local_15;
  
  uVar3 = 0xffffffff;
  if (param_1 != (longlong *)0x0) {
    local_res8 = (LPCWSTR)0x0;
    iVar1 = (**(code **)(*param_1 + 0x28))(param_1,&local_res8);
    lVar4 = -1;
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (local_res8[lVar6] != L'\0');
    if ((uint)lVar6 < 0x102) {
      do {
        lVar4 = lVar4 + 1;
      } while (local_res8[lVar4] != L'\0');
    }
    else {
      lVar4 = 0x102;
    }
    iVar2 = WideCharToMultiByte(0xfde9,0,local_res8,(int)lVar4,local_118,0x103,(LPCSTR)0x0,
                                (LPBOOL)0x0);
    local_118[iVar2] = '\0';
    local_15 = 0;
    if (iVar1 == 0) {
      plVar5 = (longlong *)(**(code **)(*param_2 + 8))(param_2);
      uVar3 = (**(code **)(*plVar5 + 0xb8))(plVar5,local_118);
      CoTaskMemFree(local_res8);
    }
  }
  return uVar3;
}



// FUNCTION 1432622f0 FUN_1432622f0 body=1142 status=ok
// SIG undefined FUN_1432622f0(void)

undefined8 FUN_1432622f0(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  char *pcVar9;
  uint uVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  int iVar15;
  ulonglong uVar16;
  uint local_res10 [2];
  int local_res18 [2];
  undefined1 local_res20 [8];
  longlong *local_108;
  longlong *local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong *local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  HANDLE local_88;
  undefined8 local_80;
  GUID local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_58;
  
  uVar16 = (ulonglong)param_2;
  if (param_2 != 0) {
    plVar12 = param_1 + 4;
    uVar13 = uVar16;
    do {
      plVar1 = (longlong *)*plVar12;
      if (plVar1 != (longlong *)0x0) {
        *plVar12 = 0;
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar12 = plVar12 + 2;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  (**(code **)(*param_3 + 0x18))(param_3,local_res18,local_res20);
  local_108 = (longlong *)0x0;
  local_e0 = (longlong *)0x0;
  iVar6 = -1;
  CoCreateInstance((IID *)&DAT_144177ea8,(LPUNKNOWN)0x0,0x17,(IID *)&DAT_144177eb8,&local_e0);
  iVar15 = 0;
  if (local_e0 == (longlong *)0x0) {
LAB_143262742:
    (**(code **)(*param_3 + 0x40))(param_3,"MSSpatial: No output device found.",2);
    *(undefined4 *)(param_1 + 0x1b) = 0;
    return 2;
  }
  (**(code **)(*local_e0 + 0x20))(local_e0,0,0,&local_108);
  if (local_108 != (longlong *)0x0) {
    iVar6 = FUN_1432621e0(local_108,param_3);
    (**(code **)(*local_108 + 0x10))();
    local_108 = (longlong *)0x0;
  }
  local_e8 = (longlong *)0x0;
  if (local_res18[0] != 0) {
    iVar6 = local_res18[0];
  }
  (**(code **)(*local_e0 + 0x18))(local_e0,0,0xf,&local_e8);
  if (local_e8 != (longlong *)0x0) {
    local_res10[0] = 0;
    (**(code **)(*local_e8 + 0x18))(local_e8,local_res10);
    puVar11 = (undefined4 *)0x0;
    if (local_res10[0] != 0) {
      do {
        (**(code **)(*local_e8 + 0x20))(local_e8,puVar11,&local_108);
        if (local_108 != (longlong *)0x0) {
          iVar7 = FUN_1432621e0(local_108,param_3);
          if (iVar7 == iVar6) break;
          (**(code **)(*local_108 + 0x10))();
          local_108 = (longlong *)0x0;
        }
        uVar10 = (int)puVar11 + 1;
        puVar11 = (undefined4 *)(ulonglong)uVar10;
      } while (uVar10 < local_res10[0]);
    }
    (**(code **)(*local_e8 + 0x10))();
  }
  (**(code **)(*local_e0 + 0x10))();
  plVar12 = local_108;
  if (local_108 == (longlong *)0x0) goto LAB_143262742;
  local_78.Data1 = 0;
  local_78.Data2 = 0;
  local_78.Data3 = 0;
  local_78.Data4[0] = '\0';
  local_78.Data4[1] = '\0';
  local_78.Data4[2] = '\0';
  local_78.Data4[3] = '\0';
  local_78.Data4[4] = '\0';
  local_78.Data4[5] = '\0';
  local_78.Data4[6] = '\0';
  local_78.Data4[7] = '\0';
  local_f8 = 0xc6b5673c;
  uStack_f4 = 0x4d24f8d9;
  uStack_f0 = 0x37ebc29a;
  uStack_ec = 0xe06ea3fb;
  CoCreateGuid(&local_78);
  uVar3 = CONCAT44(local_78._4_4_,local_78.Data1);
  uVar4 = CONCAT44(local_78.Data4._4_4_,local_78.Data4._0_4_);
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = (undefined8 *)0x0;
  puVar8 = CoTaskMemAlloc(0x30);
  uVar5 = local_d0;
  uVar14 = 1;
  if (puVar8 == (undefined8 *)0x0) {
    iVar15 = -0x7ff8fff2;
  }
  else {
    *(undefined4 *)(puVar8 + 4) = 0x7e2;
    *puVar8 = uVar3;
    puVar8[1] = uVar4;
    *(undefined4 *)((longlong)puVar8 + 0x24) = 1;
    puVar8[2] = CONCAT44(uStack_f4,local_f8);
    puVar8[3] = CONCAT44(uStack_ec,uStack_f0);
    puVar8[5] = 6;
    local_d0 = CONCAT62(local_d0._2_6_,0x41);
    uVar3 = local_d0;
    uStack_c8 = CONCAT44(uStack_c8._4_4_,0x30);
    local_d0._4_4_ = SUB84(uVar5,4);
    local_68 = (undefined4)local_d0;
    uStack_64 = local_d0._4_4_;
    uStack_60 = 0x30;
    uStack_5c = uStack_c8._4_4_;
    local_d0 = uVar3;
    local_c0 = puVar8;
    local_58 = puVar8;
  }
  puVar11 = &local_68;
  if (iVar15 < 0) {
    puVar11 = (undefined4 *)0x0;
  }
  plVar1 = param_1 + 0x1c;
  plVar2 = (longlong *)*plVar1;
  if (plVar2 != (longlong *)0x0) {
    *plVar1 = 0;
    (**(code **)(*plVar2 + 0x10))();
  }
  iVar6 = (**(code **)(*plVar12 + 0x18))(plVar12,&DAT_145ac6470,1,puVar11,plVar1);
  if (iVar6 != 0) {
    (**(code **)(*param_3 + 0x40))(param_3,"MSSpatial: Could not activate SpatialAudioClient",2);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    return 2;
  }
  (**(code **)(*plVar12 + 0x10))(plVar12);
  local_100 = (longlong *)0x0;
  iVar6 = (**(code **)(*(longlong *)*plVar1 + 0x30))((longlong *)*plVar1,&local_100);
  if (iVar6 == 0) {
    local_d8 = 0;
    iVar6 = (**(code **)(*local_100 + 0x18))(local_100,local_res10);
    if (((iVar6 == 0) && (local_res10[0] != 0)) &&
       (iVar6 = (**(code **)(*local_100 + 0x20))(local_100,0,&local_d8), iVar6 == 0)) {
      (**(code **)(*(longlong *)*plVar1 + 0x38))((longlong *)*plVar1,local_d8,param_1 + 2);
      local_88 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
      plVar1 = (longlong *)*plVar1;
      param_1[1] = (longlong)local_88;
      local_a0 = local_d8;
      plVar12 = (longlong *)*param_1;
      local_b8 = 0x41;
      local_a8 = &local_a0;
      local_98 = 0x1ffe;
      local_90 = 0;
      local_8c = 6;
      local_80 = 0;
      local_b0 = 0x28;
      if (plVar12 != (longlong *)0x0) {
        *param_1 = 0;
        (**(code **)(*plVar12 + 0x10))();
      }
      iVar6 = (**(code **)(*plVar1 + 0x50))(plVar1,&local_b8,&DAT_145af0750,param_1);
      if (iVar6 == 0) {
        if (param_2 != 0) {
          plVar12 = param_1 + 4;
          do {
            if (*plVar12 == 0) {
              (**(code **)(*(longlong *)*param_1 + 0x50))
                        ((longlong *)*param_1,(int)plVar12[-1],plVar12);
            }
            plVar12 = plVar12 + 2;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
        iVar6 = (**(code **)(*(longlong *)*param_1 + 0x28))();
        if (-1 < iVar6) {
          *(undefined4 *)(param_1 + 0x1b) = 1;
          goto LAB_143262724;
        }
        pcVar9 = "MSSpatial: Could not start Spatial Audio Stream.";
      }
      else {
        pcVar9 = "MSSpatial: Could not activate Spatial Audio Stream.";
      }
    }
    else {
      pcVar9 = "MSSpatial: No supported formats.";
    }
  }
  else {
    pcVar9 = "MSSpatial internal error: no enumerator.";
  }
  uVar14 = 2;
  (**(code **)(*param_3 + 0x40))(param_3,pcVar9,2);
LAB_143262724:
  plVar12 = local_100;
  if (local_100 == (longlong *)0x0) {
    return uVar14;
  }
  local_100 = (longlong *)0x0;
  (**(code **)(*plVar12 + 0x10))();
  return uVar14;
}



// FUNCTION 143262770 CAkFxSrcAudioInputParams body=14 status=ok
// SIG undefined CAkFxSrcAudioInputParams(void)

undefined8 * CAkFxSrcAudioInputParams::CAkFxSrcAudioInputParams(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145af0888;
  return param_1;
}



// FUNCTION 143262780 FUN_143262780 body=43 status=ok
// SIG undefined FUN_143262780(void)

void FUN_143262780(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145af0888;
    return;
  }
  return;
}



// FUNCTION 1432627b6 DelayLoad_CreateApexSDK body=12 status=ok
// SIG undefined DelayLoad_CreateApexSDK(void)

void DelayLoad_CreateApexSDK(void)

{
  FUN_1432627c8();
  return;
}



// FUNCTION 1432627c2 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001432627c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CreateApexSDK();
  return;
}



// FUNCTION 1432627c8 FUN_1432627c8 body=121 status=ok
// SIG undefined FUN_1432627c8(void)

void FUN_1432627c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)__delayLoadHelper2(&ImgDelayDescr_1461de048);
                    /* WARNING: Could not recover jumptable at 0x00014326283f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 143262841 DelayLoad_GetApexSDK body=12 status=ok
// SIG undefined DelayLoad_GetApexSDK(void)

void DelayLoad_GetApexSDK(void)

{
  FUN_1432627c8();
  return;
}



// FUNCTION 14326284d _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014326284d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetApexSDK();
  return;
}



// FUNCTION 143262860 FUN_143262860 body=272 status=ok
// SIG undefined FUN_143262860(void)

undefined4 *
FUN_143262860(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  basic_ostream<char,std::char_traits<char>_> *this;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar3;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar2 = param_5[2];
  local_30 = (undefined4)*param_5;
  uStack_2c = (undefined4)((ulonglong)*param_5 >> 0x20);
  uStack_28 = (undefined4)param_5[1];
  uStack_24 = (undefined4)((ulonglong)param_5[1] >> 0x20);
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  param_1[3] = uStack_24;
  *(undefined8 *)(param_1 + 4) = uVar2;
  param_1[6] = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  lVar1 = (*(code *)*param_5)(0x88,0,param_5[2],param_4,0xfffffffffffffffe);
  if (lVar1 == 0) {
    uVar2 = std::operator<<<std::char_traits<char>_>
                      (cerr_exref,"FACEFX FATAL ERROR: OUT OF MEMORY (file ");
    uVar2 = std::operator<<<std::char_traits<char>_>
                      (uVar2,"C:\\Users\\jcr\\Code\\facefx-runtime\\facefx/src/memory.hpp");
    this = (basic_ostream<char,std::char_traits<char>_> *)
           std::operator<<<std::char_traits<char>_>(uVar2,", line ");
    pbVar3 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(this,0x15);
    std::operator<<<std::char_traits<char>_>(pbVar3,&DAT_145af0b78);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar2 = FUN_143266160(lVar1,param_2,param_3);
  *(undefined8 *)(param_1 + 8) = uVar2;
  FUN_143266570(uVar2,param_4,param_5);
  return param_1;
}



// FUNCTION 143262980 FUN_143262980 body=209 status=ok
// SIG undefined FUN_143262980(void)

undefined4 *
FUN_143262980(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  basic_ostream<char,std::char_traits<char>_> *this;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar2 = param_4[2];
  local_28 = (undefined4)*param_4;
  uStack_24 = (undefined4)((ulonglong)*param_4 >> 0x20);
  uStack_20 = (undefined4)param_4[1];
  uStack_1c = (undefined4)((ulonglong)param_4[1] >> 0x20);
  *param_1 = local_28;
  param_1[1] = uStack_24;
  param_1[2] = uStack_20;
  param_1[3] = uStack_1c;
  *(undefined8 *)(param_1 + 4) = uVar2;
  param_1[6] = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  puVar1 = (undefined8 *)(*(code *)*param_4)(0x10,0,param_4[2]);
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = std::operator<<<std::char_traits<char>_>
                      (cerr_exref,"FACEFX FATAL ERROR: OUT OF MEMORY (file ");
    uVar2 = std::operator<<<std::char_traits<char>_>
                      (uVar2,"C:\\Users\\jcr\\Code\\facefx-runtime\\facefx/src/memory.hpp");
    this = (basic_ostream<char,std::char_traits<char>_> *)
           std::operator<<<std::char_traits<char>_>(uVar2,", line ");
    pbVar3 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(this,0x15);
    std::operator<<<std::char_traits<char>_>(pbVar3,&DAT_145af0b78);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 **)(param_1 + 8) = puVar1;
  return param_1;
}



// FUNCTION 143262a60 FUN_143262a60 body=274 status=ok
// SIG undefined FUN_143262a60(void)

undefined4 *
FUN_143262a60(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  basic_ostream<char,std::char_traits<char>_> *this;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar3;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar2 = param_5[2];
  local_30 = (undefined4)*param_5;
  uStack_2c = (undefined4)((ulonglong)*param_5 >> 0x20);
  uStack_28 = (undefined4)param_5[1];
  uStack_24 = (undefined4)((ulonglong)param_5[1] >> 0x20);
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  param_1[3] = uStack_24;
  *(undefined8 *)(param_1 + 4) = uVar2;
  param_1[6] = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  lVar1 = (*(code *)*param_5)(0xa0,0,param_5[2],param_4,0xfffffffffffffffe);
  if (lVar1 == 0) {
    uVar2 = std::operator<<<std::char_traits<char>_>
                      (cerr_exref,"FACEFX FATAL ERROR: OUT OF MEMORY (file ");
    uVar2 = std::operator<<<std::char_traits<char>_>
                      (uVar2,"C:\\Users\\jcr\\Code\\facefx-runtime\\facefx/src/memory.hpp");
    this = (basic_ostream<char,std::char_traits<char>_> *)
           std::operator<<<std::char_traits<char>_>(uVar2,", line ");
    pbVar3 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(this,0x15);
    std::operator<<<std::char_traits<char>_>(pbVar3,&DAT_145af0b78);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar2 = FUN_143265280(lVar1,param_2,param_3);
  *(undefined8 *)(param_1 + 8) = uVar2;
  FUN_143265520(uVar2,param_4,param_5);
  return param_1;
}



// FUNCTION 143262b80 FUN_143262b80 body=576 status=ok
// SIG undefined FUN_143262b80(void)

undefined4 *
FUN_143262b80(undefined4 *param_1,longlong *param_2,longlong param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  basic_ostream<char,std::char_traits<char>_> *pbVar3;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar2 = param_4[2];
  local_20 = (undefined4)*param_4;
  uStack_1c = (undefined4)((ulonglong)*param_4 >> 0x20);
  uStack_18 = (undefined4)param_4[1];
  uStack_14 = (undefined4)((ulonglong)param_4[1] >> 0x20);
  *param_1 = local_20;
  param_1[1] = uStack_1c;
  param_1[2] = uStack_18;
  param_1[3] = uStack_14;
  *(undefined8 *)(param_1 + 4) = uVar2;
  param_1[6] = 0;
  _Mtx_init_in_situ(param_1 + 8,2,param_3,param_4,0xfffffffffffffffe);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(*param_2 + 0x18);
  *(longlong *)(param_1 + 0x1e) = param_3;
  *(ulonglong *)(param_1 + 0x20) = (ulonglong)*(ushort *)(*param_2 + 0x20);
  puVar1 = (undefined4 *)(*(code *)*param_4)(param_3 * 4,0,param_4[2]);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = std::operator<<<std::char_traits<char>_>
                      (cerr_exref,"FACEFX FATAL ERROR: OUT OF MEMORY (file ");
    uVar2 = std::operator<<<std::char_traits<char>_>
                      (uVar2,"C:\\Users\\jcr\\Code\\facefx-runtime\\facefx/src/memory.hpp");
    pbVar3 = (basic_ostream<char,std::char_traits<char>_> *)
             std::operator<<<std::char_traits<char>_>(uVar2,", line ");
    pbVar4 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar3,0x15);
    std::operator<<<std::char_traits<char>_>(pbVar4,&DAT_145af0b78);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 **)(param_1 + 0x22) = puVar1;
  lVar6 = *(longlong *)(param_1 + 0x1e);
  if (lVar6 != 0) {
    for (; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
  }
  puVar5 = (undefined8 *)(*(code *)*param_4)(*(longlong *)(param_1 + 0x1e) * 8,0,param_4[2]);
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined8 **)(param_1 + 0x24) = puVar5;
    lVar6 = *(longlong *)(param_1 + 0x1e);
    if (lVar6 != 0) {
      for (; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
    }
    puVar1 = (undefined4 *)(*(code *)*param_4)(*(longlong *)(param_1 + 0x20) * 4,0,param_4[2]);
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined4 **)(param_1 + 0x26) = puVar1;
      lVar6 = *(longlong *)(param_1 + 0x20);
      if (lVar6 != 0) {
        for (; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar1 = 0;
          puVar1 = puVar1 + 1;
        }
      }
      param_1[0x28] = 0;
      return param_1;
    }
    uVar2 = std::operator<<<std::char_traits<char>_>
                      (cerr_exref,"FACEFX FATAL ERROR: OUT OF MEMORY (file ");
    uVar2 = std::operator<<<std::char_traits<char>_>
                      (uVar2,"C:\\Users\\jcr\\Code\\facefx-runtime\\facefx/src/memory.hpp");
    pbVar3 = (basic_ostream<char,std::char_traits<char>_> *)
             std::operator<<<std::char_traits<char>_>(uVar2,", line ");
    pbVar4 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar3,0x15);
    std::operator<<<std::char_traits<char>_>(pbVar4,&DAT_145af0b78);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar2 = std::operator<<<std::char_traits<char>_>
                    (cerr_exref,"FACEFX FATAL ERROR: OUT OF MEMORY (file ");
  uVar2 = std::operator<<<std::char_traits<char>_>
                    (uVar2,"C:\\Users\\jcr\\Code\\facefx-runtime\\facefx/src/memory.hpp");
  pbVar3 = (basic_ostream<char,std::char_traits<char>_> *)
           std::operator<<<std::char_traits<char>_>(uVar2,", line ");
  pbVar4 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar3,0x15);
  std::operator<<<std::char_traits<char>_>(pbVar4,&DAT_145af0b78);
                    /* WARNING: Subroutine does not return */
  abort();
}



// FUNCTION 143262dd0 ~basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> body=116 status=ok
// SIG undefined ~basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>(void)

void std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
     ~basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x98) + 4) + -0x98 + param_1) =
       vftable;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x98) + 4);
  *(int *)((longlong)iVar1 + -0x9c + param_1) = iVar1 + -0x98;
  *(undefined ***)(param_1 + -0x80) =
       basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(param_1 + -0x80);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)(param_1 + -0x80));
                    /* WARNING: Could not recover jumptable at 0x000143262e3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)(param_1 + -0x78));
  return;
}



// FUNCTION 143262e50 FUN_143262e50 body=176 status=ok
// SIG undefined FUN_143262e50(void)

void FUN_143262e50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  iVar1 = _Mtx_lock(param_1 + 0x20);
  if (iVar1 != 0) {
    std::_Throw_C_error(iVar1);
  }
  (**(code **)(param_1 + 8))
            (*(undefined8 *)(param_1 + 0x98),0,*(undefined8 *)(param_1 + 0x10),param_4,uVar2);
  *(undefined8 *)(param_1 + 0x98) = 0;
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x90),0,*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x90) = 0;
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x88),0,*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x88) = 0;
  iVar1 = _Mtx_unlock(param_1 + 0x20);
  if (iVar1 != 0) {
    std::_Throw_C_error(iVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000143262ef9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Mtx_destroy_in_situ(param_1 + 0x20);
  return;
}



// FUNCTION 143262f00 _Mtx_destroy_in_situ body=7 status=ok
// SIG undefined _Mtx_destroy_in_situ(void)

void _Mtx_destroy_in_situ(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143262f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Mtx_destroy_in_situ();
  return;
}



// FUNCTION 143262f10 ~sentry body=72 status=ok
// SIG undefined ~sentry(void)

void std::basic_ostream<char,std::char_traits<char>_>::sentry::~sentry(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  
  bVar2 = std::uncaught_exception();
  if (!bVar2) {
    std::basic_ostream<char,std::char_traits<char>_>::_Osfx
              ((basic_ostream<char,std::char_traits<char>_> *)*param_1);
  }
  plVar1 = *(longlong **)((longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48 + *param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}



// FUNCTION 143262f58 FUN_143262f58 body=12 status=ok
// SIG undefined FUN_143262f58(void)

void FUN_143262f58(longlong param_1)

{
  FUN_143262f70(param_1 - *(int *)(param_1 + -4));
  return;
}



// FUNCTION 143262f70 FUN_143262f70 body=80 status=ok
// SIG undefined FUN_143262f70(void)

basic_ios<char,std::char_traits<char>_> *
FUN_143262f70(basic_ios<char,std::char_traits<char>_> *param_1,ulonglong param_2)

{
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>();
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1 + -0x98,0xf8);
  }
  return param_1 + -0x98;
}



// FUNCTION 143262fc0 FUN_143262fc0 body=129 status=ok
// SIG undefined FUN_143262fc0(void)

void FUN_143262fc0(undefined8 *param_1,undefined8 *param_2)

{
  if ((ulonglong)param_2[3] < 0x10) {
    if (param_2[2] + 1 != 0) {
      memmove(param_1,param_2,param_2[2] + 1);
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
  param_2[3] = 0xf;
  param_2[2] = 0;
  if (0xf < (ulonglong)param_2[3]) {
    *(undefined1 *)*param_2 = 0;
    return;
  }
  *(undefined1 *)param_2 = 0;
  return;
}



// FUNCTION 143263050 FUN_143263050 body=392 status=ok
// SIG undefined FUN_143263050(void)

void FUN_143263050(ulonglong *param_1,ulonglong param_2,size_t param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *_Dst;
  ulonglong uVar4;
  
  uVar4 = param_2 | 0xf;
  if (uVar4 != 0xffffffffffffffff) {
    uVar3 = param_1[3];
    uVar2 = uVar3 >> 1;
    param_2 = uVar4;
    if ((uVar4 / 3 < uVar2) && (param_2 = 0xfffffffffffffffe, uVar3 <= -uVar2 - 2)) {
      param_2 = uVar3 + uVar2;
    }
  }
  if (param_2 == 0xffffffffffffffff) {
    _Dst = (ulonglong *)0x0;
  }
  else if (param_2 + 1 < 0x1000) {
    _Dst = (ulonglong *)operator_new();
    if (_Dst == (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  else {
    if (param_2 + 0x28 <= param_2 + 1) {
                    /* WARNING: Subroutine does not return */
      std::_Xbad_alloc();
    }
    uVar4 = operator_new(param_2 + 0x28);
    if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    _Dst = (ulonglong *)(uVar4 + 0x27 & 0xffffffffffffffe0);
    _Dst[-1] = uVar4;
  }
  if (param_3 != 0) {
    puVar1 = param_1;
    if (0xf < param_1[3]) {
      puVar1 = (ulonglong *)*param_1;
    }
    if (param_3 != 0) {
      _guard_xfg_dispatch_icall_nop(_Dst,puVar1,param_3);
    }
  }
  if (0xf < param_1[3]) {
    uVar4 = *param_1;
    uVar3 = uVar4;
    if (0xfff < param_1[3] + 1) {
      if ((uVar4 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar3 = *(ulonglong *)(uVar4 - 8);
      if (uVar4 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar4 - uVar3 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar4 - uVar3) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar3);
  }
  param_1[3] = 0xf;
  param_1[2] = 0;
  puVar1 = param_1;
  if (0xf < param_1[3]) {
    puVar1 = (ulonglong *)*param_1;
  }
  *(undefined1 *)puVar1 = 0;
  *param_1 = (ulonglong)_Dst;
  param_1[3] = param_2;
  param_1[2] = param_3;
  if (0xf < param_1[3]) {
    param_1 = _Dst;
  }
  *(undefined1 *)((longlong)param_1 + param_3) = 0;
  return;
}



// FUNCTION 143263200 FUN_143263200 body=95 status=ok
// SIG undefined FUN_143263200(void)

ulonglong FUN_143263200(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    if (0xfff < param_2) {
      if (param_2 + 0x27 <= param_2) {
                    /* WARNING: Subroutine does not return */
        std::_Xbad_alloc();
      }
      lVar1 = operator_new();
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar2 - 8) = lVar1;
      return uVar2;
    }
    uVar2 = operator_new(param_2);
    if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  return uVar2;
}



// FUNCTION 143263270 assign body=290 status=ok
// SIG undefined assign(void)

undefined8 *
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
          (undefined8 *param_1,undefined8 *param_2,ulonglong param_3,ulonglong param_4)

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
    if (0xf < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    *(undefined1 *)((longlong)puVar2 + param_3) = 0;
    erase(param_1,0);
  }
  else {
    if (param_4 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("string too long");
    }
    if ((ulonglong)param_1[3] < param_4) {
      FUN_143263050(param_1,param_4,param_1[2]);
      if (param_4 == 0) {
        return param_1;
      }
    }
    else if (param_4 == 0) {
      param_1[2] = 0;
      if (0xf < (ulonglong)param_1[3]) {
        *(undefined1 *)*param_1 = 0;
        return param_1;
      }
      *(undefined1 *)param_1 = 0;
      return param_1;
    }
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    puVar2 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    if (param_4 != 0) {
      ::_guard_xfg_dispatch_icall_nop(puVar2,(void *)((longlong)param_2 + param_3),param_4);
    }
    param_1[2] = param_4;
    puVar2 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    *(undefined1 *)((longlong)puVar2 + param_4) = 0;
  }
  return param_1;
}



// FUNCTION 1432633a0 assign body=300 status=ok
// SIG undefined assign(void)

undefined8 *
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
          (undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  
  if (param_2 != (undefined8 *)0x0) {
    uVar1 = param_1[3];
    puVar2 = param_1;
    if (0xf < uVar1) {
      puVar2 = (undefined8 *)*param_1;
    }
    if (puVar2 <= param_2) {
      puVar2 = param_1;
      if (0xf < uVar1) {
        puVar2 = (undefined8 *)*param_1;
      }
      if (param_2 < (undefined8 *)((longlong)puVar2 + param_1[2])) {
        puVar2 = param_1;
        if (0xf < uVar1) {
          puVar2 = (undefined8 *)*param_1;
        }
        puVar2 = (undefined8 *)assign(param_1,param_1,(longlong)param_2 - (longlong)puVar2,param_3);
        return puVar2;
      }
    }
  }
  if (param_3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("string too long");
  }
  if ((ulonglong)param_1[3] < param_3) {
    FUN_143263050(param_1,param_3,param_1[2]);
    if (param_3 == 0) {
      return param_1;
    }
  }
  else if (param_3 == 0) {
    param_1[2] = 0;
    if (0xf < (ulonglong)param_1[3]) {
      *(undefined1 *)*param_1 = 0;
      return param_1;
    }
    *(undefined1 *)param_1 = 0;
    return param_1;
  }
  puVar2 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar2 = (undefined8 *)*param_1;
  }
  if (param_3 != 0) {
    ::_guard_xfg_dispatch_icall_nop(puVar2,param_2,param_3);
  }
  param_1[2] = param_3;
  puVar2 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar2 = (undefined8 *)*param_1;
  }
  *(undefined1 *)((longlong)puVar2 + param_3) = 0;
  return param_1;
}



// FUNCTION 1432634d0 erase body=197 status=ok
// SIG undefined erase(void)

longlong *
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
          (longlong *param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  uVar1 = param_1[2];
  if (uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid string position");
  }
  if (param_3 < uVar1 - param_2) {
    if (param_3 != 0) {
      plVar2 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        plVar2 = (longlong *)*param_1;
      }
      lVar3 = uVar1 - param_3;
      if (lVar3 - param_2 != 0) {
        memmove((void *)((longlong)plVar2 + param_2),
                (void *)((longlong)((longlong)plVar2 + param_2) + param_3),lVar3 - param_2);
      }
      param_1[2] = lVar3;
      if (0xf < (ulonglong)param_1[3]) {
        *(undefined1 *)(*param_1 + lVar3) = 0;
        return param_1;
      }
      *(undefined1 *)((longlong)param_1 + lVar3) = 0;
    }
    return param_1;
  }
  param_1[2] = param_2;
  if ((ulonglong)param_1[3] < 0x10) {
    *(undefined1 *)((longlong)param_1 + param_2) = 0;
    return param_1;
  }
  *(undefined1 *)(*param_1 + param_2) = 0;
  return param_1;
}



// FUNCTION 1432635a0 str body=35 status=ok
// SIG undefined str(void)

undefined8
std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::str
          (longlong param_1,undefined8 param_2)

{
  basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str(param_1 + 0x18);
  return param_2;
}



// FUNCTION 1432635d0 FUN_1432635d0 body=399 status=ok
// SIG undefined FUN_1432635d0(void)

undefined8 FUN_1432635d0(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  
  if (param_1 == 0) {
    piVar4 = _errno();
    *piVar4 = 0x16;
    return 0;
  }
  if (*(int *)(param_1 + 0x18) < 0) {
    piVar4 = _errno();
    *piVar4 = 0xffe2;
    return 0;
  }
  LOCK();
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  UNLOCK();
  if (param_2 == 0) {
    piVar4 = _errno();
    *piVar4 = 0x16;
  }
  else {
    if (-1 < *(int *)(param_2 + 0x18)) {
      LOCK();
      *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
      UNLOCK();
      if (param_3 == 0) {
        piVar4 = _errno();
        *piVar4 = 0x16;
LAB_1432636a1:
        uVar5 = 0;
      }
      else {
        lVar2 = *(longlong *)(param_1 + 0x20);
        if (param_4 != *(ushort *)(*(longlong *)(lVar2 + 0x50) + 0x18)) {
          piVar4 = _errno();
          *piVar4 = 0x16;
          goto LAB_1432636a1;
        }
        if (*(longlong *)(param_2 + 0x70) != *(longlong *)(*(longlong *)(lVar2 + 0x50) + 0x10)) {
          piVar4 = _errno();
          *piVar4 = 0xffe3;
          goto LAB_1432636a1;
        }
        iVar3 = _Mtx_lock(param_2 + 0x20);
        if (iVar3 != 0) {
          std::_Throw_C_error(iVar3);
        }
        uVar1 = *(undefined4 *)(param_2 + 0xa0);
        FUN_1432653d0(lVar2,param_2);
        iVar3 = _Mtx_unlock(param_2 + 0x20);
        if (iVar3 != 0) {
          std::_Throw_C_error(iVar3);
        }
        FUN_143265340(lVar2,uVar1,param_3);
        piVar4 = _errno();
        *piVar4 = 0;
        uVar5 = 1;
      }
      if (0 < *(int *)(param_2 + 0x18)) {
        LOCK();
        *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + -1;
        UNLOCK();
      }
      goto LAB_143263721;
    }
    piVar4 = _errno();
    *piVar4 = 0xffe2;
  }
  uVar5 = 0;
LAB_143263721:
  if (0 < *(int *)(param_1 + 0x18)) {
    LOCK();
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    UNLOCK();
    return uVar5;
  }
  return uVar5;
}



// FUNCTION 143263760 FUN_143263760 body=254 status=ok
// SIG undefined FUN_143263760(void)

bool FUN_143263760(longlong param_1,longlong param_2)

{
  int *piVar1;
  bool bVar2;
  
  if (param_1 == 0) {
    piVar1 = _errno();
    *piVar1 = 0x16;
    return false;
  }
  if (*(int *)(param_1 + 0x18) < 0) {
    piVar1 = _errno();
    *piVar1 = 0xffe2;
    return false;
  }
  LOCK();
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  UNLOCK();
  if (param_2 == 0) {
    piVar1 = _errno();
    *piVar1 = 0x16;
  }
  else {
    if (-1 < *(int *)(param_2 + 0x18)) {
      LOCK();
      *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
      UNLOCK();
      bVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x50) + 0x18) ==
              *(longlong *)(**(longlong **)(param_2 + 0x20) + 0x18);
      if (bVar2) {
        piVar1 = _errno();
        *piVar1 = 0;
      }
      else {
        piVar1 = _errno();
        *piVar1 = 0xffe3;
      }
      if (0 < *(int *)(param_2 + 0x18)) {
        LOCK();
        *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + -1;
        UNLOCK();
      }
      goto LAB_143263826;
    }
    piVar1 = _errno();
    *piVar1 = 0xffe2;
  }
  bVar2 = false;
LAB_143263826:
  if (0 < *(int *)(param_1 + 0x18)) {
    LOCK();
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    UNLOCK();
  }
  return bVar2;
}



// FUNCTION 143263860 FUN_143263860 body=657 status=ok
// SIG undefined FUN_143263860(void)

undefined8
FUN_143263860(int *param_1,ulonglong param_2,int param_3,longlong param_4,longlong *param_5,
             longlong *param_6)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  basic_ostream<char,std::char_traits<char>_> *pbVar4;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar5;
  longlong lVar6;
  char local_res8 [8];
  
  if ((param_1 == (int *)0x0) || (param_4 == 0)) {
    piVar2 = _errno();
    *piVar2 = 0x16;
    return 0;
  }
  if ((param_5 == (longlong *)0x0) || (*param_5 != 0)) {
    piVar2 = _errno();
    *piVar2 = 0x16;
  }
  else if (((param_6 == (longlong *)0x0) || (*param_6 == 0)) || (param_6[1] == 0)) {
    piVar2 = _errno();
    *piVar2 = 0x16;
  }
  else if (((param_2 < 0x10) || (*param_1 != 0x66665f5f)) || ((char)param_1[1] != 'x')) {
    piVar2 = _errno();
    *piVar2 = 9;
  }
  else if (*(char *)((longlong)param_1 + 5) == '\0') {
    local_res8[0] = '\0';
    iVar1 = FUN_1432650a0(0,local_res8);
    if (iVar1 < 0) {
      uVar3 = std::operator<<<std::char_traits<char>_>(cerr_exref,"FaceFX Fatal Assertion failed: ")
      ;
      uVar3 = std::operator<<<std::char_traits<char>_>(uVar3,"err >= 0");
      uVar3 = std::operator<<<std::char_traits<char>_>(uVar3,", file ");
      uVar3 = std::operator<<<std::char_traits<char>_>
                        (uVar3,"C:\\Users\\jcr\\Code\\facefx-runtime\\facefx/src/data-algorithm.hpp"
                        );
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
               std::operator<<<std::char_traits<char>_>(uVar3,", line ");
      pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,0x25);
      std::operator<<<std::char_traits<char>_>(pbVar5,&DAT_145af0af0);
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (*(char *)((longlong)param_1 + 6) == local_res8[0]) {
      if (*(char *)((longlong)param_1 + 7) == '\x01') {
        if ((uint)param_1[2] == param_2) {
          if ((param_3 == 0) ||
             (iVar1 = FUN_143265100(param_1 + 4,(ulonglong)(uint)param_1[2] - 0x10),
             iVar1 == param_1[3])) {
            piVar2 = _errno();
            *piVar2 = 0;
            *param_5 = 0;
            lVar6 = (*(code *)*param_6)(0x28,0,param_6[2]);
            if (lVar6 == 0) {
              uVar3 = std::operator<<<std::char_traits<char>_>
                                (cerr_exref,"FACEFX FATAL ERROR: OUT OF MEMORY (file ");
              uVar3 = std::operator<<<std::char_traits<char>_>
                                (uVar3,"C:\\Users\\jcr\\Code\\facefx-runtime\\facefx/src/memory.hpp"
                                );
              pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
                       std::operator<<<std::char_traits<char>_>(uVar3,", line ");
              pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,0x15);
              std::operator<<<std::char_traits<char>_>(pbVar5,&DAT_145af0b78);
                    /* WARNING: Subroutine does not return */
              abort();
            }
            lVar6 = FUN_143262860(lVar6,param_1,param_2,param_4,param_6);
            *param_5 = lVar6;
            piVar2 = _errno();
            *piVar2 = 0;
            return 1;
          }
          piVar2 = _errno();
          *piVar2 = 0xffe1;
        }
        else {
          piVar2 = _errno();
          *piVar2 = 0xffe0;
        }
      }
      else {
        piVar2 = _errno();
        *piVar2 = 0xffdf;
      }
    }
    else {
      piVar2 = _errno();
      *piVar2 = 0xffde;
    }
  }
  else {
    piVar2 = _errno();
    *piVar2 = 0xffdd;
  }
  return 0;
}



// FUNCTION 143263b00 FUN_143263b00 body=610 status=ok
// SIG undefined FUN_143263b00(void)

undefined8
FUN_143263b00(int *param_1,ulonglong param_2,int param_3,longlong *param_4,longlong *param_5)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  basic_ostream<char,std::char_traits<char>_> *pbVar4;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar5;
  longlong lVar6;
  char local_res8 [8];
  
  if (((param_1 != (int *)0x0) && (param_4 != (longlong *)0x0)) && (*param_4 == 0)) {
    if (((param_5 == (longlong *)0x0) || (*param_5 == 0)) || (param_5[1] == 0)) {
      piVar2 = _errno();
      *piVar2 = 0x16;
    }
    else if (((param_2 < 0x10) || (*param_1 != 0x66665f5f)) || ((char)param_1[1] != 'x')) {
      piVar2 = _errno();
      *piVar2 = 9;
    }
    else if (*(char *)((longlong)param_1 + 5) == '\0') {
      local_res8[0] = '\0';
      iVar1 = FUN_1432650a0(0,local_res8);
      if (iVar1 < 0) {
        uVar3 = std::operator<<<std::char_traits<char>_>
                          (cerr_exref,"FaceFX Fatal Assertion failed: ");
        uVar3 = std::operator<<<std::char_traits<char>_>(uVar3,"err >= 0");
        uVar3 = std::operator<<<std::char_traits<char>_>(uVar3,", file ");
        uVar3 = std::operator<<<std::char_traits<char>_>
                          (uVar3,
                           "C:\\Users\\jcr\\Code\\facefx-runtime\\facefx/src/data-algorithm.hpp");
        pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
                 std::operator<<<std::char_traits<char>_>(uVar3,", line ");
        pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,0x25);
        std::operator<<<std::char_traits<char>_>(pbVar5,&DAT_145af0af0);
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (*(char *)((longlong)param_1 + 6) == local_res8[0]) {
        if (*(char *)((longlong)param_1 + 7) == '\x03') {
          if ((uint)param_1[2] == param_2) {
            if ((param_3 == 0) ||
               (iVar1 = FUN_143265100(param_1 + 4,(ulonglong)(uint)param_1[2] - 0x10),
               iVar1 == param_1[3])) {
              piVar2 = _errno();
              *piVar2 = 0;
              *param_4 = 0;
              lVar6 = (*(code *)*param_5)(0x28,0,param_5[2]);
              if (lVar6 != 0) {
                lVar6 = FUN_143262980(lVar6,param_1,param_2,param_5);
                *param_4 = lVar6;
                piVar2 = _errno();
                *piVar2 = 0;
                return 1;
              }
              uVar3 = std::operator<<<std::char_traits<char>_>
                                (cerr_exref,"FACEFX FATAL ERROR: OUT OF MEMORY (file ");
              uVar3 = std::operator<<<std::char_traits<char>_>
                                (uVar3,"C:\\Users\\jcr\\Code\\facefx-runtime\\facefx/src/memory.hpp"
                                );
              pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
                       std::operator<<<std::char_traits<char>_>(uVar3,", line ");
              pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,0x15);
              std::operator<<<std::char_traits<char>_>(pbVar5,&DAT_145af0b78);
                    /* WARNING: Subroutine does not return */
              abort();
            }
            piVar2 = _errno();
            *piVar2 = 0xffe1;
          }
          else {
            piVar2 = _errno();
            *piVar2 = 0xffe0;
          }
        }
        else {
          piVar2 = _errno();
          *piVar2 = 0xffdf;
        }
      }
      else {
        piVar2 = _errno();
        *piVar2 = 0xffde;
      }
    }
    else {
      piVar2 = _errno();
      *piVar2 = 0xffdd;
    }
    return 0;
  }
  piVar2 = _errno();
  *piVar2 = 0x16;
  return 0;
}



// FUNCTION 143263d70 FUN_143263d70 body=656 status=ok
// SIG undefined FUN_143263d70(void)

undefined8
FUN_143263d70(int *param_1,ulonglong param_2,int param_3,int param_4,longlong *param_5,
             longlong *param_6)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  basic_ostream<char,std::char_traits<char>_> *pbVar4;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar5;
  longlong lVar6;
  char local_res8 [8];
  
  if (param_1 == (int *)0x0) {
    piVar2 = _errno();
    *piVar2 = 0x16;
    return 0;
  }
  if ((param_5 == (longlong *)0x0) || (*param_5 != 0)) {
    piVar2 = _errno();
    *piVar2 = 0x16;
  }
  else if (((param_6 == (longlong *)0x0) || (*param_6 == 0)) || (param_6[1] == 0)) {
    piVar2 = _errno();
    *piVar2 = 0x16;
  }
  else if (((param_2 < 0x10) || (*param_1 != 0x66665f5f)) || ((char)param_1[1] != 'x')) {
    piVar2 = _errno();
    *piVar2 = 9;
  }
  else if (*(char *)((longlong)param_1 + 5) == '\0') {
    local_res8[0] = '\0';
    iVar1 = FUN_1432650a0(0,local_res8);
    if (iVar1 < 0) {
      uVar3 = std::operator<<<std::char_traits<char>_>(cerr_exref,"FaceFX Fatal Assertion failed: ")
      ;
      uVar3 = std::operator<<<std::char_traits<char>_>(uVar3,"err >= 0");
      uVar3 = std::operator<<<std::char_traits<char>_>(uVar3,", file ");
      uVar3 = std::operator<<<std::char_traits<char>_>
                        (uVar3,"C:\\Users\\jcr\\Code\\facefx-runtime\\facefx/src/data-algorithm.hpp"
                        );
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
               std::operator<<<std::char_traits<char>_>(uVar3,", line ");
      pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,0x25);
      std::operator<<<std::char_traits<char>_>(pbVar5,&DAT_145af0af0);
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (*(char *)((longlong)param_1 + 6) == local_res8[0]) {
      if (*(char *)((longlong)param_1 + 7) == '\x02') {
        if ((uint)param_1[2] == param_2) {
          if ((param_3 == 0) ||
             (iVar1 = FUN_143265100(param_1 + 4,(ulonglong)(uint)param_1[2] - 0x10),
             iVar1 == param_1[3])) {
            piVar2 = _errno();
            *piVar2 = 0;
            *param_5 = 0;
            lVar6 = (*(code *)*param_6)(0x28,0,param_6[2]);
            if (lVar6 == 0) {
              uVar3 = std::operator<<<std::char_traits<char>_>
                                (cerr_exref,"FACEFX FATAL ERROR: OUT OF MEMORY (file ");
              uVar3 = std::operator<<<std::char_traits<char>_>
                                (uVar3,"C:\\Users\\jcr\\Code\\facefx-runtime\\facefx/src/memory.hpp"
                                );
              pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
                       std::operator<<<std::char_traits<char>_>(uVar3,", line ");
              pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,0x15);
              std::operator<<<std::char_traits<char>_>(pbVar5,&DAT_145af0b78);
                    /* WARNING: Subroutine does not return */
              abort();
            }
            lVar6 = FUN_143262a60(lVar6,param_1,param_2,param_4 != 0,param_6);
            *param_5 = lVar6;
            piVar2 = _errno();
            *piVar2 = 0;
            return 1;
          }
          piVar2 = _errno();
          *piVar2 = 0xffe1;
        }
        else {
          piVar2 = _errno();
          *piVar2 = 0xffe0;
        }
      }
      else {
        piVar2 = _errno();
        *piVar2 = 0xffdf;
      }
    }
    else {
      piVar2 = _errno();
      *piVar2 = 0xffde;
    }
  }
  else {
    piVar2 = _errno();
    *piVar2 = 0xffdd;
  }
  return 0;
}



// FUNCTION 143264010 FUN_143264010 body=350 status=ok
// SIG undefined FUN_143264010(void)

undefined8 FUN_143264010(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  basic_ostream<char,std::char_traits<char>_> *this;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar4;
  
  if (param_1 == 0) {
    piVar1 = _errno();
    *piVar1 = 0x16;
    return 0;
  }
  if (-1 < *(int *)(param_1 + 0x18)) {
    LOCK();
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    UNLOCK();
    if ((((param_2 == (longlong *)0x0) || (*param_2 != 0)) || (param_3 == (longlong *)0x0)) ||
       ((*param_3 == 0 || (param_3[1] == 0)))) {
      piVar1 = _errno();
      uVar3 = 0;
      *piVar1 = 0x16;
    }
    else {
      *param_2 = 0;
      lVar2 = (*(code *)*param_3)(0xa8,0,param_3[2]);
      if (lVar2 == 0) {
        uVar3 = std::operator<<<std::char_traits<char>_>
                          (cerr_exref,"FACEFX FATAL ERROR: OUT OF MEMORY (file ");
        uVar3 = std::operator<<<std::char_traits<char>_>
                          (uVar3,"C:\\Users\\jcr\\Code\\facefx-runtime\\facefx/src/memory.hpp");
        this = (basic_ostream<char,std::char_traits<char>_> *)
               std::operator<<<std::char_traits<char>_>(uVar3,", line ");
        pbVar4 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(this,0x15);
        std::operator<<<std::char_traits<char>_>(pbVar4,&DAT_145af0b78);
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar2 = FUN_143262b80(lVar2,*(longlong *)(param_1 + 0x20) + 0x50,
                            *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x60),param_3);
      *param_2 = lVar2;
      piVar1 = _errno();
      *piVar1 = 0;
      uVar3 = 1;
    }
    if (0 < *(int *)(param_1 + 0x18)) {
      LOCK();
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      UNLOCK();
    }
    return uVar3;
  }
  piVar1 = _errno();
  *piVar1 = 0xffe2;
  return 0;
}



// FUNCTION 143264170 FUN_143264170 body=88 status=ok
// SIG undefined FUN_143264170(void)

undefined8 FUN_143264170(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((param_1 != 0) && (param_2 != (undefined8 *)0x0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(param_1 + lVar3) != '\0');
    uVar2 = FUN_143265150();
    *param_2 = uVar2;
    piVar1 = _errno();
    *piVar1 = 0;
    return 1;
  }
  piVar1 = _errno();
  *piVar1 = 0x16;
  return 0;
}



// FUNCTION 1432641d0 FUN_1432641d0 body=370 status=ok
// SIG undefined FUN_1432641d0(void)

undefined8
FUN_1432641d0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int *piVar6;
  bool bVar7;
  undefined8 uVar8;
  
  uVar8 = 0xfffffffffffffffe;
  if ((param_1 == (longlong *)0x0) || (lVar2 = *param_1, lVar2 == 0)) {
    piVar6 = _errno();
    *piVar6 = 0x16;
  }
  else if (*(int *)(lVar2 + 0x18) < 0) {
    piVar6 = _errno();
    *piVar6 = 0xffe2;
  }
  else {
    LOCK();
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
    UNLOCK();
    lVar2 = *param_1;
    cVar5 = FUN_1432661c0();
    if (cVar5 == '\0') {
      piVar6 = _errno();
      *piVar6 = 0xb;
      if (0 < *(int *)(lVar2 + 0x18)) {
        LOCK();
        *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + -1;
        UNLOCK();
      }
    }
    else {
      if (0 < *(int *)(lVar2 + 0x18)) {
        LOCK();
        *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + -1;
        UNLOCK();
      }
      iVar1 = *(int *)(*param_1 + 0x18);
      if (iVar1 < 0) {
LAB_14326429f:
        if ((param_2 != (undefined8 *)0x0) && (param_3 != (undefined8 *)0x0)) {
          lVar2 = *(longlong *)(*param_1 + 0x20);
          *param_2 = *(undefined8 *)(lVar2 + 0x50);
          *param_3 = *(undefined8 *)(lVar2 + 0x58);
        }
        lVar2 = *param_1;
        pcVar3 = *(code **)(lVar2 + 8);
        uVar4 = *(undefined8 *)(lVar2 + 0x10);
        if (lVar2 != 0) {
          FUN_143266450(*(undefined8 *)(lVar2 + 0x20),lVar2);
          if (*(longlong *)(lVar2 + 0x20) != 0) {
            FUN_143265320();
          }
          (**(code **)(lVar2 + 8))
                    (*(undefined8 *)(lVar2 + 0x20),0,*(undefined8 *)(lVar2 + 0x10),param_4,uVar8);
          *(undefined8 *)(lVar2 + 0x20) = 0;
        }
        (*pcVar3)(*param_1,0,uVar4);
        *param_1 = 0;
        piVar6 = _errno();
        *piVar6 = 0;
        return 1;
      }
      if (iVar1 == 0) {
        piVar6 = (int *)(*param_1 + 0x18);
        LOCK();
        bVar7 = *piVar6 == 0;
        if (bVar7) {
          *piVar6 = -1;
        }
        UNLOCK();
        if (bVar7) goto LAB_14326429f;
      }
      piVar6 = _errno();
      *piVar6 = 0xb;
    }
  }
  return 0;
}



// FUNCTION 143264350 FUN_143264350 body=238 status=ok
// SIG undefined FUN_143264350(void)

undefined8
FUN_143264350(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  int *piVar4;
  undefined8 uVar5;
  bool bVar6;
  
  if ((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) {
    piVar4 = _errno();
    *piVar4 = 0x16;
    return 0;
  }
  if (*(int *)(lVar1 + 0x18) < 0) {
LAB_1432643c1:
    if ((param_2 != (undefined8 *)0x0) && (param_3 != (undefined8 *)0x0)) {
      puVar2 = *(undefined8 **)(*param_1 + 0x20);
      *param_2 = *puVar2;
      *param_3 = puVar2[1];
    }
    lVar1 = *param_1;
    pcVar3 = *(code **)(lVar1 + 8);
    uVar5 = *(undefined8 *)(lVar1 + 0x10);
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)(lVar1 + 0x20);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      (**(code **)(lVar1 + 8))
                (*(undefined8 *)(lVar1 + 0x20),0,*(undefined8 *)(lVar1 + 0x10),param_4,
                 0xfffffffffffffffe);
      *(undefined8 *)(lVar1 + 0x20) = 0;
    }
    (*pcVar3)(*param_1,0,uVar5);
    *param_1 = 0;
    piVar4 = _errno();
    *piVar4 = 0;
    uVar5 = 1;
  }
  else {
    if (*(int *)(lVar1 + 0x18) == 0) {
      param_4 = 0xffffffff;
      LOCK();
      bVar6 = *(int *)(lVar1 + 0x18) == 0;
      if (bVar6) {
        *(int *)(lVar1 + 0x18) = -1;
      }
      UNLOCK();
      if (bVar6) goto LAB_1432643c1;
    }
    piVar4 = _errno();
    *piVar4 = 0xb;
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 143264440 FUN_143264440 body=266 status=ok
// SIG undefined FUN_143264440(void)

undefined8
FUN_143264440(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  int *piVar3;
  undefined8 uVar4;
  bool bVar5;
  
  if ((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) {
    piVar3 = _errno();
    *piVar3 = 0x16;
    return 0;
  }
  if (*(int *)(lVar1 + 0x18) < 0) {
LAB_1432644b5:
    lVar1 = *(longlong *)(*param_1 + 0x20);
    if ((param_2 != (undefined8 *)0x0) && (param_3 != (undefined8 *)0x0)) {
      *param_2 = *(undefined8 *)(lVar1 + 0x50);
      *param_3 = *(undefined8 *)(lVar1 + 0x58);
    }
    lVar1 = *param_1;
    pcVar2 = *(code **)(lVar1 + 8);
    uVar4 = *(undefined8 *)(lVar1 + 0x10);
    if (lVar1 != 0) {
      FUN_143265450(*(undefined8 *)(lVar1 + 0x20),lVar1,param_3,param_4,0xfffffffffffffffe);
      if (*(longlong *)(lVar1 + 0x20) != 0) {
        FUN_143265320();
      }
      (**(code **)(lVar1 + 8))(*(undefined8 *)(lVar1 + 0x20),0,*(undefined8 *)(lVar1 + 0x10));
      *(undefined8 *)(lVar1 + 0x20) = 0;
    }
    (*pcVar2)(*param_1,0,uVar4);
    *param_1 = 0;
    piVar3 = _errno();
    *piVar3 = 0;
    uVar4 = 1;
  }
  else {
    if (*(int *)(lVar1 + 0x18) == 0) {
      param_4 = 0xffffffff;
      LOCK();
      bVar5 = *(int *)(lVar1 + 0x18) == 0;
      if (bVar5) {
        *(int *)(lVar1 + 0x18) = -1;
      }
      UNLOCK();
      if (bVar5) goto LAB_1432644b5;
    }
    piVar3 = _errno();
    *piVar3 = 0xb;
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 143264550 FUN_143264550 body=174 status=ok
// SIG undefined FUN_143264550(void)

undefined8 FUN_143264550(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  int *piVar4;
  bool bVar5;
  
  if ((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) {
    piVar4 = _errno();
    *piVar4 = 0x16;
    return 0;
  }
  if (*(int *)(lVar1 + 0x18) < 0) {
LAB_1432645ad:
    lVar1 = *param_1;
    pcVar2 = *(code **)(lVar1 + 8);
    uVar3 = *(undefined8 *)(lVar1 + 0x10);
    if (lVar1 != 0) {
      FUN_143262e50();
    }
    (*pcVar2)(*param_1,0,uVar3);
    *param_1 = 0;
    piVar4 = _errno();
    *piVar4 = 0;
    return 1;
  }
  if (*(int *)(lVar1 + 0x18) == 0) {
    LOCK();
    bVar5 = *(int *)(lVar1 + 0x18) == 0;
    if (bVar5) {
      *(int *)(lVar1 + 0x18) = -1;
    }
    UNLOCK();
    if (bVar5) goto LAB_1432645ad;
  }
  piVar4 = _errno();
  *piVar4 = 0xb;
  return 0;
}



// FUNCTION 143264600 FUN_143264600 body=17 status=ok
// SIG undefined FUN_143264600(void)

int FUN_143264600(void)

{
  int *piVar1;
  
  piVar1 = _errno();
  return *piVar1;
}



// FUNCTION 143264620 FUN_143264620 body=245 status=ok
// SIG undefined FUN_143264620(void)

undefined8 FUN_143264620(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  
  if (param_1 == 0) {
    piVar2 = _errno();
    *piVar2 = 0x16;
    return 0;
  }
  if (*(int *)(param_1 + 0x18) < 0) {
    piVar2 = _errno();
    *piVar2 = 0xffe2;
    return 0;
  }
  LOCK();
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  UNLOCK();
  if ((param_2 == 0) || (param_3 == 0)) {
    piVar2 = _errno();
    uVar6 = 0;
    *piVar2 = 0x16;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x20);
    uVar7 = (ulonglong)*(ushort *)(*(longlong *)(lVar1 + 0x50) + 0x20);
    if (param_3 != 0) {
      puVar5 = (undefined4 *)(param_2 + 8);
      do {
        *puVar5 = 0xffffffff;
        if (uVar7 != 0) {
          plVar3 = (longlong *)(*(longlong *)(lVar1 + 0x50) + 0x28);
          uVar4 = 0;
          do {
            if (*plVar3 == *(longlong *)(puVar5 + -2)) {
              *puVar5 = (int)uVar4;
              break;
            }
            uVar4 = uVar4 + 1;
            plVar3 = plVar3 + 2;
          } while (uVar4 < uVar7);
        }
        puVar5 = puVar5 + 4;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    piVar2 = _errno();
    *piVar2 = 0;
    uVar6 = 1;
  }
  if (0 < *(int *)(param_1 + 0x18)) {
    LOCK();
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    UNLOCK();
  }
  return uVar6;
}



// FUNCTION 143264720 FUN_143264720 body=208 status=ok
// SIG undefined FUN_143264720(void)

undefined8 FUN_143264720(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  longlong lVar2;
  int *piVar3;
  undefined8 uVar4;
  
  if (param_1 == 0) {
    piVar3 = _errno();
    *piVar3 = 0x16;
    return 0;
  }
  if (-1 < *(int *)(param_1 + 0x18)) {
    LOCK();
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    UNLOCK();
    if (param_2 == (undefined4 *)0x0) {
      piVar3 = _errno();
      uVar4 = 0;
      *piVar3 = 0x16;
    }
    else if (param_3 == (undefined4 *)0x0) {
      piVar3 = _errno();
      uVar4 = 0;
      *piVar3 = 0x16;
    }
    else {
      lVar2 = **(longlong **)(param_1 + 0x20);
      uVar1 = *(uint *)(lVar2 + 0x20);
      if ((ulonglong)uVar1 < 2) {
        piVar3 = _errno();
        uVar4 = 0;
        *piVar3 = 0xe;
      }
      else {
        *param_2 = *(undefined4 *)(lVar2 + 0x24);
        *param_3 = *(undefined4 *)(lVar2 + 0x18 + (ulonglong)uVar1 * 0xc);
        piVar3 = _errno();
        *piVar3 = 0;
        uVar4 = 1;
      }
    }
    if (0 < *(int *)(param_1 + 0x18)) {
      LOCK();
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      UNLOCK();
    }
    return uVar4;
  }
  piVar3 = _errno();
  *piVar3 = 0xffe2;
  return 0;
}



// FUNCTION 1432647f0 FUN_1432647f0 body=146 status=ok
// SIG undefined FUN_1432647f0(void)

bool FUN_1432647f0(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  
  if (param_1 == 0) {
    piVar1 = _errno();
    *piVar1 = 0x16;
    return false;
  }
  if (-1 < *(int *)(param_1 + 0x18)) {
    LOCK();
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    UNLOCK();
    if (param_2 != (ulonglong *)0x0) {
      *param_2 = (ulonglong)*(ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x50) + 0x18);
      piVar1 = _errno();
      *piVar1 = 0;
    }
    else {
      piVar1 = _errno();
      *piVar1 = 0x16;
    }
    if (0 < *(int *)(param_1 + 0x18)) {
      LOCK();
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      UNLOCK();
    }
    return param_2 != (ulonglong *)0x0;
  }
  piVar1 = _errno();
  *piVar1 = 0xffe2;
  return false;
}



// FUNCTION 143264890 FUN_143264890 body=233 status=ok
// SIG undefined FUN_143264890(void)

undefined8 FUN_143264890(longlong param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if (param_1 == 0) {
    piVar3 = _errno();
    *piVar3 = 0x16;
    return 0;
  }
  if (*(int *)(param_1 + 0x18) < 0) {
    piVar3 = _errno();
    *piVar3 = 0xffe2;
    return 0;
  }
  LOCK();
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  UNLOCK();
  if (param_2 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    uVar9 = (ulonglong)*(ushort *)(*(longlong *)(lVar2 + 0x50) + 0x18);
    if (param_3 == uVar9) {
      uVar6 = 0;
      uVar5 = uVar6;
      uVar8 = uVar6;
      if (uVar9 != 0) {
        do {
          piVar3 = (int *)(*(longlong *)(lVar2 + 0x50) + 0x20);
          iVar1 = *piVar3;
          uVar4 = uVar6;
          if (iVar1 != 0) {
            uVar4 = (longlong)iVar1 + (longlong)piVar3;
          }
          *(undefined8 *)(param_2 + uVar5 * 8) = *(undefined8 *)(uVar8 + uVar4);
          uVar5 = uVar5 + 1;
          uVar8 = uVar8 + 0x38;
        } while (uVar5 < uVar9);
      }
      piVar3 = _errno();
      *piVar3 = 0;
      uVar7 = 1;
      goto LAB_143264948;
    }
  }
  piVar3 = _errno();
  uVar7 = 0;
  *piVar3 = 0x16;
LAB_143264948:
  if (0 < *(int *)(param_1 + 0x18)) {
    LOCK();
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    UNLOCK();
  }
  return uVar7;
}



// FUNCTION 143264980 FUN_143264980 body=139 status=ok
// SIG undefined FUN_143264980(void)

bool FUN_143264980(longlong param_1)

{
  char cVar1;
  int *piVar2;
  
  if (param_1 == 0) {
    piVar2 = _errno();
    *piVar2 = 0x16;
    return false;
  }
  if (-1 < *(int *)(param_1 + 0x18)) {
    LOCK();
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    UNLOCK();
    cVar1 = FUN_143266870(*(undefined8 *)(param_1 + 0x20));
    if (cVar1 != '\0') {
      piVar2 = _errno();
      *piVar2 = 0;
    }
    else {
      piVar2 = _errno();
      *piVar2 = 1;
    }
    if (0 < *(int *)(param_1 + 0x18)) {
      LOCK();
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      UNLOCK();
    }
    return cVar1 != '\0';
  }
  piVar2 = _errno();
  *piVar2 = 0xffe2;
  return false;
}



// FUNCTION 143264a10 FUN_143264a10 body=350 status=ok
// SIG undefined FUN_143264a10(void)

undefined8 FUN_143264a10(longlong param_1,longlong param_2,ulonglong *param_3)

{
  longlong lVar1;
  char cVar2;
  int *piVar3;
  undefined8 uVar4;
  ulonglong local_res8;
  
  if (param_1 == 0) {
    piVar3 = _errno();
    *piVar3 = 0x16;
    return 0;
  }
  if (*(int *)(param_1 + 0x18) < 0) {
    piVar3 = _errno();
    *piVar3 = 0xffe2;
    return 0;
  }
  LOCK();
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  UNLOCK();
  if (param_2 == 0) {
    piVar3 = _errno();
    *piVar3 = 0x16;
  }
  else {
    if (-1 < *(int *)(param_2 + 0x18)) {
      LOCK();
      *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
      UNLOCK();
      lVar1 = *(longlong *)(param_1 + 0x20);
      cVar2 = fx::actor_state::can_play_anim(lVar1);
      if (cVar2 == '\0') {
        piVar3 = _errno();
        uVar4 = 0;
        *piVar3 = 0xffe3;
      }
      else {
        local_res8 = 0xffffffffffffffff;
        if (param_3 != (ulonglong *)0x0) {
          local_res8 = *param_3;
          if ((local_res8 != 0xffffffffffffffff) && (*(ulonglong *)(lVar1 + 0x60) <= local_res8)) {
            piVar3 = _errno();
            uVar4 = 0;
            *piVar3 = 0x16;
            goto LAB_143264b18;
          }
        }
        cVar2 = FUN_1432668f0(lVar1,param_2,&local_res8);
        if (cVar2 == '\0') {
          piVar3 = _errno();
          uVar4 = 0;
          *piVar3 = 0xffe4;
        }
        else {
          if (param_3 != (ulonglong *)0x0) {
            *param_3 = local_res8;
          }
          piVar3 = _errno();
          *piVar3 = 0;
          uVar4 = 1;
        }
      }
LAB_143264b18:
      if (0 < *(int *)(param_2 + 0x18)) {
        LOCK();
        *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + -1;
        UNLOCK();
      }
      goto LAB_143264b3c;
    }
    piVar3 = _errno();
    *piVar3 = 0xffe2;
  }
  uVar4 = 0;
LAB_143264b3c:
  if (0 < *(int *)(param_1 + 0x18)) {
    LOCK();
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    UNLOCK();
  }
  return uVar4;
}



// FUNCTION 143264b70 FUN_143264b70 body=343 status=ok
// SIG undefined FUN_143264b70(void)

undefined8 FUN_143264b70(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 in_R8;
  
  if (param_1 == 0) {
    piVar3 = _errno();
    *piVar3 = 0x16;
    return 0;
  }
  if (*(int *)(param_1 + 0x18) < 0) {
    piVar3 = _errno();
    *piVar3 = 0xffe2;
    return 0;
  }
  LOCK();
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  UNLOCK();
  if (param_2 == 0) {
    piVar3 = _errno();
    *piVar3 = 0x16;
  }
  else {
    if (-1 < *(int *)(param_2 + 0x18)) {
      LOCK();
      *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
      UNLOCK();
      lVar1 = *(longlong *)(param_1 + 0x20);
      if (*(longlong *)(*(longlong *)(lVar1 + 0x50) + 0x18) == *(longlong *)(param_2 + 0x70)) {
        iVar2 = _Mtx_lock(param_2 + 0x20,param_2,in_R8,param_4,0xfffffffffffffffe);
        if (iVar2 != 0) {
          std::_Throw_C_error(iVar2);
        }
        FUN_1432669e0(lVar1,param_3,param_2);
        piVar3 = _errno();
        *piVar3 = 0;
        uVar4 = 1;
        iVar2 = _Mtx_unlock(param_2 + 0x20);
        if (iVar2 != 0) {
          std::_Throw_C_error(iVar2);
        }
      }
      else {
        piVar3 = _errno();
        *piVar3 = 0xffe3;
        uVar4 = 0;
      }
      if (0 < *(int *)(param_2 + 0x18)) {
        LOCK();
        *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + -1;
        UNLOCK();
      }
      goto LAB_143264c87;
    }
    piVar3 = _errno();
    *piVar3 = 0xffe2;
  }
  uVar4 = 0;
LAB_143264c87:
  if (0 < *(int *)(param_1 + 0x18)) {
    LOCK();
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    UNLOCK();
    return uVar4;
  }
  return uVar4;
}



// FUNCTION 143264cd0 FUN_143264cd0 body=251 status=ok
// SIG undefined FUN_143264cd0(void)

undefined8 FUN_143264cd0(longlong param_1,void *param_2,longlong param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    piVar2 = _errno();
    *piVar2 = 0x16;
  }
  else {
    if (-1 < *(int *)(param_1 + 0x18)) {
      LOCK();
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      UNLOCK();
      if ((param_2 == (void *)0x0) || (param_3 != *(longlong *)(param_1 + 0x78))) {
        piVar2 = _errno();
        *piVar2 = 0x16;
        uVar3 = 0;
      }
      else {
        iVar1 = _Mtx_lock(param_1 + 0x20);
        if (iVar1 != 0) {
          std::_Throw_C_error(iVar1);
        }
        if (param_3 != 0) {
          _guard_xfg_dispatch_icall_nop(param_2,*(void **)(param_1 + 0x88),param_3 << 2);
        }
        piVar2 = _errno();
        *piVar2 = 0;
        uVar3 = 1;
        iVar1 = _Mtx_unlock(param_1 + 0x20);
        if (iVar1 != 0) {
          std::_Throw_C_error(iVar1);
        }
      }
      if (*(int *)(param_1 + 0x18) < 1) {
        return uVar3;
      }
      LOCK();
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      UNLOCK();
      return uVar3;
    }
    piVar2 = _errno();
    *piVar2 = 0xffe2;
  }
  return 0;
}



// FUNCTION 143264dd0 FUN_143264dd0 body=443 status=ok
// SIG undefined FUN_143264dd0(void)

bool FUN_143264dd0(longlong param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  ulonglong *puVar5;
  undefined4 *puVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if (param_1 == 0) {
    piVar4 = _errno();
    *piVar4 = 0x16;
  }
  else {
    if (-1 < *(int *)(param_1 + 0x18)) {
      LOCK();
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      UNLOCK();
      if ((param_2 == 0) || (param_3 == 0)) {
        piVar4 = _errno();
        *piVar4 = 0x16;
        bVar7 = false;
      }
      else {
        iVar3 = _Mtx_lock(param_1 + 0x20);
        if (iVar3 != 0) {
          std::_Throw_C_error(iVar3);
        }
        uVar1 = *(ulonglong *)(param_1 + 0x80);
        lVar2 = *(longlong *)(param_1 + 0x98);
        bVar7 = true;
        uVar9 = 0;
        if (3 < param_3) {
          puVar5 = (ulonglong *)(param_2 + 0x18);
          lVar8 = (param_3 - 4 >> 2) + 1;
          uVar9 = lVar8 * 4;
          do {
            if (puVar5[-2] < uVar1) {
              *(undefined4 *)(puVar5 + -3) = *(undefined4 *)(lVar2 + puVar5[-2] * 4);
            }
            else {
              bVar7 = false;
            }
            if (*puVar5 < uVar1) {
              *(undefined4 *)(puVar5 + -1) = *(undefined4 *)(lVar2 + *puVar5 * 4);
            }
            else {
              bVar7 = false;
            }
            if (puVar5[2] < uVar1) {
              *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(lVar2 + puVar5[2] * 4);
            }
            else {
              bVar7 = false;
            }
            if (puVar5[4] < uVar1) {
              *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(lVar2 + puVar5[4] * 4);
            }
            else {
              bVar7 = false;
            }
            puVar5 = puVar5 + 8;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        if (uVar9 < param_3) {
          puVar6 = (undefined4 *)(uVar9 * 0x10 + param_2);
          lVar8 = param_3 - uVar9;
          do {
            if (*(ulonglong *)(puVar6 + 2) < uVar1) {
              *puVar6 = *(undefined4 *)(lVar2 + *(ulonglong *)(puVar6 + 2) * 4);
            }
            else {
              bVar7 = false;
            }
            puVar6 = puVar6 + 4;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        if (bVar7) {
          piVar4 = _errno();
          *piVar4 = 0;
        }
        else {
          piVar4 = _errno();
          *piVar4 = 0xe;
        }
        iVar3 = _Mtx_unlock(param_1 + 0x20);
        if (iVar3 != 0) {
          std::_Throw_C_error(iVar3);
        }
      }
      if (*(int *)(param_1 + 0x18) < 1) {
        return bVar7;
      }
      LOCK();
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      UNLOCK();
      return bVar7;
    }
    piVar4 = _errno();
    *piVar4 = 0xffe2;
  }
  return false;
}



// FUNCTION 143264f90 FUN_143264f90 body=139 status=ok
// SIG undefined FUN_143264f90(void)

bool FUN_143264f90(longlong param_1)

{
  char cVar1;
  int *piVar2;
  
  if (param_1 == 0) {
    piVar2 = _errno();
    *piVar2 = 0x16;
    return false;
  }
  if (-1 < *(int *)(param_1 + 0x18)) {
    LOCK();
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    UNLOCK();
    cVar1 = FUN_143266c90(*(undefined8 *)(param_1 + 0x20));
    if (cVar1 != '\0') {
      piVar2 = _errno();
      *piVar2 = 0;
    }
    else {
      piVar2 = _errno();
      *piVar2 = 1;
    }
    if (0 < *(int *)(param_1 + 0x18)) {
      LOCK();
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      UNLOCK();
    }
    return cVar1 != '\0';
  }
  piVar2 = _errno();
  *piVar2 = 0xffe2;
  return false;
}



// FUNCTION 143265020 FUN_143265020 body=119 status=ok
// SIG undefined FUN_143265020(void)

undefined8 FUN_143265020(longlong param_1)

{
  int *piVar1;
  
  if (param_1 == 0) {
    piVar1 = _errno();
    *piVar1 = 0x16;
    return 0;
  }
  if (-1 < *(int *)(param_1 + 0x18)) {
    LOCK();
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    UNLOCK();
    FUN_143266d50(*(undefined8 *)(param_1 + 0x20));
    piVar1 = _errno();
    *piVar1 = 0;
    if (0 < *(int *)(param_1 + 0x18)) {
      LOCK();
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      UNLOCK();
    }
    return 1;
  }
  piVar1 = _errno();
  *piVar1 = 0xffe2;
  return 0;
}



// FUNCTION 1432650a0 FUN_1432650a0 body=95 status=ok
// SIG undefined FUN_1432650a0(void)

undefined8 FUN_1432650a0(char param_1,undefined1 *param_2)

{
  byte bVar1;
  int *piVar2;
  
  bVar1 = 0;
  do {
    if ((&DAT_145af0cb0)[(ulonglong)bVar1 * 0x20] == param_1) {
      *param_2 = (&UNK_145af0cb8)[(ulonglong)bVar1 * 0x20];
      piVar2 = _errno();
      *piVar2 = 0;
      return 1;
    }
    bVar1 = bVar1 + 1;
  } while (bVar1 < 7);
  *param_2 = 0;
  piVar2 = _errno();
  *piVar2 = 2;
  return 0;
}



// FUNCTION 143265100 FUN_143265100 body=70 status=ok
// SIG undefined FUN_143265100(void)

uint FUN_143265100(char *param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0xffffffff;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar2 = *(uint *)(&DAT_1467c86c0 + (ulonglong)(((int)cVar1 ^ uVar2) & 0xff) * 4) ^ uVar2 >> 8;
  }
  return ~uVar2;
}



// FUNCTION 143265150 FUN_143265150 body=266 status=ok
// SIG undefined FUN_143265150(void)

ulonglong FUN_143265150(byte *param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  uVar2 = (ulonglong)param_2 * -0x395b586ca42e166b ^ 0x4eb23;
  uVar3 = (ulonglong)(param_2 >> 3) * 8 + 7 >> 3;
  if (param_1 + (ulonglong)(param_2 >> 3) * 8 < param_1) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    do {
      lVar1 = *(longlong *)param_1;
      uVar4 = uVar4 + 1;
      param_1 = param_1 + 8;
      uVar2 = (uVar2 ^ ((ulonglong)(lVar1 * -0x395b586ca42e166b) >> 0x2f ^
                       lVar1 * -0x395b586ca42e166b) * -0x395b586ca42e166b) * -0x395b586ca42e166b;
    } while (uVar4 != uVar3);
  }
  switch(param_2 & 7) {
  case 7:
    uVar2 = uVar2 ^ (ulonglong)param_1[6] << 0x30;
  case 6:
    uVar2 = uVar2 ^ (ulonglong)param_1[5] << 0x28;
  case 5:
    uVar2 = uVar2 ^ (ulonglong)param_1[4] << 0x20;
  case 4:
    uVar2 = uVar2 ^ (ulonglong)param_1[3] << 0x18;
  case 3:
    uVar2 = uVar2 ^ (ulonglong)param_1[2] << 0x10;
  case 2:
    uVar2 = uVar2 ^ (ulonglong)param_1[1] << 8;
  case 1:
    uVar2 = (uVar2 ^ *param_1) * -0x395b586ca42e166b;
  default:
    uVar3 = (uVar2 >> 0x2f ^ uVar2) * -0x395b586ca42e166b;
    return uVar3 >> 0x2f ^ uVar3;
  }
}



// FUNCTION 143265280 FUN_143265280 body=112 status=ok
// SIG undefined FUN_143265280(void)

longlong FUN_143265280(longlong param_1,longlong param_2,undefined8 param_3)

{
  ushort uVar1;
  
  _Mtx_init_in_situ(param_1,2);
  *(longlong *)(param_1 + 0x50) = param_2;
  *(undefined8 *)(param_1 + 0x58) = param_3;
  uVar1 = *(ushort *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(ulonglong *)(param_1 + 0x60) = (ulonglong)uVar1;
  return param_1;
}



// FUNCTION 1432652f0 FUN_1432652f0 body=41 status=ok
// SIG undefined FUN_1432652f0(void)

void FUN_1432652f0(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = _Mtx_unlock(*param_1);
  if (iVar1 != 0) {
    std::_Throw_C_error(iVar1);
  }
  return;
}



// FUNCTION 143265320 FUN_143265320 body=17 status=ok
// SIG undefined FUN_143265320(void)

void FUN_143265320(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014326532a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Mtx_destroy_in_situ();
  return;
}



// FUNCTION 143265340 FUN_143265340 body=144 status=ok
// SIG undefined FUN_143265340(void)

void FUN_143265340(longlong param_1,ulonglong param_2,void *param_3)

{
  int iVar1;
  
  iVar1 = _Mtx_lock();
  if (iVar1 != 0) {
    std::_Throw_C_error(iVar1);
  }
  if ((((byte)(param_2 & 0xffffffff) & 3) == 1) || (((param_2 & 0xffffffff) >> 2 & 1) != 0)) {
    FUN_143265d50(param_1);
  }
  _guard_xfg_dispatch_icall_nop
            (param_3,*(void **)(param_1 + 0x88),*(longlong *)(param_1 + 0x60) * 0x28);
  iVar1 = _Mtx_unlock(param_1);
  if (iVar1 != 0) {
    std::_Throw_C_error(iVar1);
  }
  return;
}



// FUNCTION 1432653d0 FUN_1432653d0 body=115 status=ok
// SIG undefined FUN_1432653d0(void)

void FUN_1432653d0(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = _Mtx_lock();
  if (iVar1 != 0) {
    std::_Throw_C_error(iVar1);
  }
  uVar2 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x50) + 0x1a);
  if (uVar2 != 0) {
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x90),*(void **)(param_2 + 0x98),uVar2 << 2);
  }
  iVar1 = _Mtx_unlock(param_1);
  if (iVar1 != 0) {
    std::_Throw_C_error(iVar1);
  }
  return;
}



// FUNCTION 143265450 FUN_143265450 body=204 status=ok
// SIG undefined FUN_143265450(void)

void FUN_143265450(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  iVar1 = _Mtx_lock();
  if (iVar1 != 0) {
    std::_Throw_C_error(iVar1);
  }
  (**(code **)(param_2 + 8))
            (*(undefined8 *)(param_1 + 0x78),0,*(undefined8 *)(param_2 + 0x10),param_4,uVar2);
  *(undefined8 *)(param_1 + 0x78) = 0;
  (**(code **)(param_2 + 8))(*(undefined8 *)(param_1 + 0x80),0,*(undefined8 *)(param_2 + 0x10));
  *(undefined8 *)(param_1 + 0x80) = 0;
  (**(code **)(param_2 + 8))(*(undefined8 *)(param_1 + 0x98),0,*(undefined8 *)(param_2 + 0x10));
  *(undefined8 *)(param_1 + 0x98) = 0;
  (**(code **)(param_2 + 8))(*(undefined8 *)(param_1 + 0x88),0,*(undefined8 *)(param_2 + 0x10));
  *(undefined8 *)(param_1 + 0x88) = 0;
  (**(code **)(param_2 + 8))(*(undefined8 *)(param_1 + 0x90),0,*(undefined8 *)(param_2 + 0x10));
  *(undefined8 *)(param_1 + 0x90) = 0;
  iVar1 = _Mtx_unlock(param_1);
  if (iVar1 != 0) {
    std::_Throw_C_error(iVar1);
  }
  return;
}



// FUNCTION 143265520 FUN_143265520 body=505 status=ok
// SIG undefined FUN_143265520(void)

void FUN_143265520(longlong param_1,undefined1 param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  basic_ostream<char,std::char_traits<char>_> *pbVar4;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar5;
  void *_Dst;
  
  iVar1 = _Mtx_lock();
  if (iVar1 != 0) {
    std::_Throw_C_error(iVar1);
  }
  FUN_143265720(param_1,param_3);
  lVar2 = (*(code *)*param_3)(*(longlong *)(param_1 + 0x60) * 0x28,0,param_3[2]);
  if (lVar2 == 0) {
    uVar3 = std::operator<<<std::char_traits<char>_>
                      (cerr_exref,"FACEFX FATAL ERROR: OUT OF MEMORY (file ");
    uVar3 = std::operator<<<std::char_traits<char>_>
                      (uVar3,"C:\\Users\\jcr\\Code\\facefx-runtime\\facefx/src/memory.hpp");
    pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
             std::operator<<<std::char_traits<char>_>(uVar3,", line ");
    pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,0x15);
    std::operator<<<std::char_traits<char>_>(pbVar5,&DAT_145af0b78);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(longlong *)(param_1 + 0x98) = lVar2;
  FUN_143265c30(param_1,param_2);
  _Dst = (void *)(*(code *)*param_3)(*(longlong *)(param_1 + 0x60) * 0x28,0,param_3[2]);
  if (_Dst == (void *)0x0) {
    uVar3 = std::operator<<<std::char_traits<char>_>
                      (cerr_exref,"FACEFX FATAL ERROR: OUT OF MEMORY (file ");
    uVar3 = std::operator<<<std::char_traits<char>_>
                      (uVar3,"C:\\Users\\jcr\\Code\\facefx-runtime\\facefx/src/memory.hpp");
    pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
             std::operator<<<std::char_traits<char>_>(uVar3,", line ");
    pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,0x15);
    std::operator<<<std::char_traits<char>_>(pbVar5,&DAT_145af0b78);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(void **)(param_1 + 0x88) = _Dst;
  memmove(_Dst,*(void **)(param_1 + 0x98),*(longlong *)(param_1 + 0x60) * 0x28);
  lVar2 = (*(code *)*param_3)((ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x50) + 0x1a) * 4,0,
                              param_3[2]);
  if (lVar2 == 0) {
    uVar3 = std::operator<<<std::char_traits<char>_>
                      (cerr_exref,"FACEFX FATAL ERROR: OUT OF MEMORY (file ");
    uVar3 = std::operator<<<std::char_traits<char>_>
                      (uVar3,"C:\\Users\\jcr\\Code\\facefx-runtime\\facefx/src/memory.hpp");
    pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
             std::operator<<<std::char_traits<char>_>(uVar3,", line ");
    pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,0x15);
    std::operator<<<std::char_traits<char>_>(pbVar5,&DAT_145af0b78);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(longlong *)(param_1 + 0x90) = lVar2;
  iVar1 = _Mtx_unlock(param_1);
  if (iVar1 != 0) {
    std::_Throw_C_error(iVar1);
  }
  return;
}



// FUNCTION 143265720 FUN_143265720 body=1279 status=ok
// SIG undefined FUN_143265720(void)

void FUN_143265720(longlong param_1,undefined8 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  basic_ostream<char,std::char_traits<char>_> *pbVar8;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar9;
  uint *puVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined4 *puVar17;
  longlong lVar18;
  int *piVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong local_res8;
  ulonglong local_res10;
  ulonglong local_res18;
  uint local_res20 [2];
  uint local_68 [2];
  longlong local_60;
  ulonglong local_58;
  longlong local_50;
  
  lVar16 = *(longlong *)(param_1 + 0x60);
  lVar21 = 0;
  *(longlong *)(param_1 + 0x70) = lVar16;
  if (lVar16 != 0) {
    lVar11 = *(longlong *)(param_1 + 0x68);
    piVar19 = (int *)(*(longlong *)(param_1 + 0x50) + 0x20);
    lVar13 = lVar21;
    lVar20 = lVar16;
    do {
      iVar3 = *piVar19;
      lVar15 = (longlong)piVar19 + (longlong)iVar3;
      if (iVar3 == 0) {
        lVar15 = lVar21;
      }
      lVar16 = lVar16 + (ulonglong)*(ushort *)(lVar13 + 0xe + lVar15);
      *(longlong *)(param_1 + 0x70) = lVar16;
      lVar18 = lVar13 + 0xe;
      lVar13 = lVar13 + 0x38;
      lVar11 = lVar11 + (ulonglong)*(ushort *)(lVar18 + lVar15) * 10;
      *(longlong *)(param_1 + 0x68) = lVar11;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
  }
  lVar16 = (*(code *)*param_2)(*(longlong *)(param_1 + 0x70) * 4,0,param_2[2]);
  if (lVar16 != 0) {
    *(longlong *)(param_1 + 0x78) = lVar16;
    lVar16 = (*(code *)*param_2)(*(longlong *)(param_1 + 0x68) * 4,0,param_2[2]);
    if (lVar16 != 0) {
      lVar11 = *(longlong *)(param_1 + 0x70);
      *(longlong *)(param_1 + 0x80) = lVar16;
      if (lVar11 != 0) {
        puVar17 = *(undefined4 **)(param_1 + 0x78);
        for (; lVar11 != 0; lVar11 = lVar11 + -1) {
          *puVar17 = 0;
          puVar17 = puVar17 + 1;
        }
      }
      local_58 = 0;
      local_60 = 0;
      lVar11 = lVar21;
      lVar16 = lVar21;
      if (*(longlong *)(param_1 + 0x60) != 0) {
        do {
          lVar20 = -1;
          piVar19 = (int *)(*(longlong *)(param_1 + 0x50) + 0x20);
          iVar3 = *piVar19;
          lVar13 = (longlong)piVar19 + (longlong)iVar3;
          if (iVar3 == 0) {
            lVar13 = 0;
          }
          local_res10 = 0;
          local_res18 = 0;
          *(uint *)(*(longlong *)(param_1 + 0x78) + lVar21 * 4) =
               (uint)*(ushort *)(lVar13 + 0xe + lVar11);
          local_50 = lVar21 + 1;
          uVar1 = *(ushort *)(lVar13 + 8 + lVar11);
          uVar2 = *(ushort *)(lVar13 + 10 + lVar11);
          local_res8 = 0;
          lVar21 = lVar20;
          if (uVar1 != 0) {
            lVar21 = local_60;
          }
          lVar15 = lVar20;
          if (uVar2 != 0) {
            lVar15 = (ulonglong)uVar1 + local_60;
          }
          if (*(short *)(lVar13 + 0xc + lVar11) != 0) {
            lVar20 = (ulonglong)uVar1 + (ulonglong)uVar2 + local_60;
          }
          lVar18 = lVar16 * 4;
          while (((lVar21 != -1 || (lVar15 != -1)) || (lVar20 != -1))) {
            uVar12 = 0x7fffffff;
            uVar14 = 0x7fffffff;
            local_68[0] = 0x7fffffff;
            uVar22 = 0x7fffffff;
            if (-1 < lVar21) {
              uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x50) + 0x24 + lVar21 * 0x14);
              uVar12 = (uint)uVar1;
              local_68[0] = (uint)uVar1;
            }
            if (-1 < lVar15) {
              uVar14 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x50) + 0x24 + lVar15 * 0x14);
            }
            if (-1 < lVar20) {
              uVar22 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x50) + 0x24 + lVar20 * 0x14);
            }
            puVar10 = local_res20;
            if (uVar12 <= uVar14) {
              puVar10 = local_68;
            }
            uVar6 = *puVar10;
            if ((int)uVar22 < (int)*puVar10) {
              uVar6 = uVar22;
            }
            *(uint *)(*(longlong *)(param_1 + 0x78) + local_50 * 4) = uVar6;
            local_50 = local_50 + 1;
            if (uVar12 == uVar6) {
              lVar4 = *(longlong *)(param_1 + 0x50);
              local_res10 = local_res10 + 1;
              *(undefined4 *)(lVar18 + *(longlong *)(param_1 + 0x80)) =
                   *(undefined4 *)(lVar4 + 0x28 + lVar21 * 0x14);
              *(undefined4 *)(lVar18 + 4 + *(longlong *)(param_1 + 0x80)) =
                   *(undefined4 *)(lVar4 + 0x2c + lVar21 * 0x14);
              *(undefined4 *)(lVar18 + 8 + *(longlong *)(param_1 + 0x80)) =
                   *(undefined4 *)(lVar4 + 0x30 + lVar21 * 0x14);
              lVar21 = lVar21 + 1;
            }
            else {
              *(undefined4 *)(lVar18 + *(longlong *)(param_1 + 0x80)) = 0;
              *(undefined4 *)(lVar18 + 4 + *(longlong *)(param_1 + 0x80)) = 0;
              *(undefined4 *)(lVar18 + 8 + *(longlong *)(param_1 + 0x80)) = 0;
            }
            if (uVar14 == uVar6) {
              lVar4 = *(longlong *)(param_1 + 0x50);
              local_res18 = local_res18 + 1;
              *(undefined4 *)(lVar18 + 0xc + *(longlong *)(param_1 + 0x80)) =
                   *(undefined4 *)(lVar4 + 0x28 + lVar15 * 0x14);
              *(undefined4 *)(lVar18 + 0x10 + *(longlong *)(param_1 + 0x80)) =
                   *(undefined4 *)(lVar4 + 0x2c + lVar15 * 0x14);
              *(undefined4 *)(lVar18 + 0x14 + *(longlong *)(param_1 + 0x80)) =
                   *(undefined4 *)(lVar4 + 0x30 + lVar15 * 0x14);
              *(undefined4 *)(lVar18 + 0x18 + *(longlong *)(param_1 + 0x80)) =
                   *(undefined4 *)(lVar4 + 0x34 + lVar15 * 0x14);
              lVar15 = lVar15 + 1;
            }
            else {
              *(undefined4 *)(lVar18 + 0xc + *(longlong *)(param_1 + 0x80)) = 0;
              *(undefined4 *)(lVar18 + 0x10 + *(longlong *)(param_1 + 0x80)) = 0;
              *(undefined4 *)(lVar18 + 0x14 + *(longlong *)(param_1 + 0x80)) = 0;
              *(undefined4 *)(lVar18 + 0x18 + *(longlong *)(param_1 + 0x80)) = 0;
            }
            if (uVar22 == uVar6) {
              lVar5 = *(longlong *)(param_1 + 0x50);
              *(undefined4 *)(lVar18 + 0x1c + *(longlong *)(param_1 + 0x80)) =
                   *(undefined4 *)(lVar5 + 0x28 + lVar20 * 0x14);
              *(undefined4 *)(lVar18 + 0x20 + *(longlong *)(param_1 + 0x80)) =
                   *(undefined4 *)(lVar5 + 0x2c + lVar20 * 0x14);
              lVar4 = lVar20 * 0x14;
              local_res8 = local_res8 + 1;
              lVar20 = lVar20 + 1;
              *(undefined4 *)(lVar18 + 0x24 + *(longlong *)(param_1 + 0x80)) =
                   *(undefined4 *)(lVar5 + 0x30 + lVar4);
            }
            else {
              *(undefined4 *)(lVar18 + 0x1c + *(longlong *)(param_1 + 0x80)) = 0;
              *(undefined4 *)(lVar18 + 0x20 + *(longlong *)(param_1 + 0x80)) = 0;
              *(undefined4 *)(lVar18 + 0x24 + *(longlong *)(param_1 + 0x80)) = 0;
            }
            lVar16 = lVar16 + 10;
            if (local_res10 == *(ushort *)(lVar13 + 8 + lVar11)) {
              lVar21 = -1;
            }
            if (local_res18 == *(ushort *)(lVar13 + 10 + lVar11)) {
              lVar15 = -1;
            }
            if (local_res8 == *(ushort *)(lVar13 + 0xc + lVar11)) {
              lVar20 = -1;
            }
            lVar18 = lVar18 + 0x28;
          }
          local_58 = local_58 + 1;
          local_60 = (ulonglong)*(ushort *)(lVar13 + 8 + lVar11) + local_60 +
                     (ulonglong)*(ushort *)(lVar13 + 0xc + lVar11) +
                     (ulonglong)*(ushort *)(lVar13 + 10 + lVar11);
          lVar21 = local_50;
          lVar11 = lVar11 + 0x38;
        } while (local_58 < *(ulonglong *)(param_1 + 0x60));
      }
      return;
    }
    uVar7 = std::operator<<<std::char_traits<char>_>
                      (cerr_exref,"FACEFX FATAL ERROR: OUT OF MEMORY (file ");
    uVar7 = std::operator<<<std::char_traits<char>_>
                      (uVar7,"C:\\Users\\jcr\\Code\\facefx-runtime\\facefx/src/memory.hpp");
    pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
             std::operator<<<std::char_traits<char>_>(uVar7,", line ");
    pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,0x15);
    std::operator<<<std::char_traits<char>_>(pbVar9,&DAT_145af0b78);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar7 = std::operator<<<std::char_traits<char>_>
                    (cerr_exref,"FACEFX FATAL ERROR: OUT OF MEMORY (file ");
  uVar7 = std::operator<<<std::char_traits<char>_>
                    (uVar7,"C:\\Users\\jcr\\Code\\facefx-runtime\\facefx/src/memory.hpp");
  pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
           std::operator<<<std::char_traits<char>_>(uVar7,", line ");
  pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,0x15);
  std::operator<<<std::char_traits<char>_>(pbVar9,&DAT_145af0b78);
                    /* WARNING: Subroutine does not return */
  abort();
}



// FUNCTION 143265c30 FUN_143265c30 body=273 status=ok
// SIG undefined FUN_143265c30(void)

void FUN_143265c30(longlong param_1,char param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  
  puVar7 = *(undefined8 **)(param_1 + 0x98);
  if (param_2 == '\0') {
    lVar3 = *(longlong *)(param_1 + 0x60);
    if (lVar3 != 0) {
      puVar8 = puVar7 + 2;
      lVar9 = (longlong)puVar7 + 0xc;
      puVar10 = puVar7 + 1;
      piVar6 = (int *)(*(longlong *)(param_1 + 0x50) + 0x20);
      iVar2 = *piVar6;
      lVar5 = 0;
      do {
        lVar4 = (longlong)piVar6 + (longlong)iVar2;
        if (iVar2 == 0) {
          lVar4 = 0;
        }
        *(undefined4 *)puVar7 = *(undefined4 *)(lVar5 + 0x10 + lVar4);
        *(undefined4 *)((longlong)puVar7 + 4) = *(undefined4 *)(lVar5 + 0x14 + lVar4);
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(lVar5 + 0x18 + lVar4);
        *(undefined4 *)((longlong)puVar7 + 0xc) = *(undefined4 *)(lVar5 + 0x1c + lVar4);
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(lVar5 + 0x20 + lVar4);
        puVar10 = puVar10 + 5;
        *(undefined4 *)(lVar9 + 8) = *(undefined4 *)(lVar5 + 0x24 + lVar4);
        lVar9 = lVar9 + 0x28;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(lVar5 + 0x28 + lVar4);
        puVar8 = puVar8 + 5;
        *(undefined4 *)((longlong)puVar7 + 0x1c) = *(undefined4 *)(lVar5 + 0x2c + lVar4);
        *(undefined4 *)(puVar7 + 4) = *(undefined4 *)(lVar5 + 0x30 + lVar4);
        lVar1 = lVar5 + 0x34;
        lVar5 = lVar5 + 0x38;
        *(undefined4 *)((longlong)puVar7 + 0x24) = *(undefined4 *)(lVar1 + lVar4);
        puVar7 = puVar7 + 5;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x60);
    if (lVar3 != 0) {
      do {
        *puVar7 = 0;
        *(undefined4 *)(puVar7 + 1) = 0;
        *(undefined8 *)((longlong)puVar7 + 0xc) = 0x3f800000;
        *(undefined8 *)((longlong)puVar7 + 0x14) = 0;
        *(undefined8 *)((longlong)puVar7 + 0x1c) = 0;
        *(undefined4 *)((longlong)puVar7 + 0x24) = 0;
        puVar7 = puVar7 + 5;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      return;
    }
  }
  return;
}



// FUNCTION 143265d50 FUN_143265d50 body=1040 status=ok
// SIG undefined FUN_143265d50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143265d50(longlong param_1)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  void *_Dst;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  lVar11 = *(longlong *)(param_1 + 0x60);
  _Dst = *(void **)(param_1 + 0x88);
  _guard_xfg_dispatch_icall_nop(_Dst,*(void **)(param_1 + 0x98),lVar11 * 0x28);
  lVar8 = *(longlong *)(param_1 + 0x90);
  uVar12 = 0;
  lVar9 = *(longlong *)(param_1 + 0x78);
  uVar13 = uVar12;
  uVar14 = uVar12;
  uVar18 = uVar12;
  if (lVar11 != 0) {
    do {
      uVar17 = (ulonglong)_tls_index;
      uVar7 = *(uint *)(lVar9 + uVar13 * 4);
      bVar10 = false;
      uVar13 = uVar13 + 1;
      if (uVar7 != 0) {
        lVar11 = uVar14 * 4 + 0xc;
        uVar16 = (ulonglong)uVar7;
        lVar15 = uVar14 * 4 + 8;
        do {
          lVar1 = uVar13 * 4;
          uVar13 = uVar13 + 1;
          fVar21 = *(float *)(lVar8 + (ulonglong)*(uint *)(lVar9 + lVar1) * 4);
          if (fVar21 != 0.0) {
            lVar1 = *(longlong *)(param_1 + 0x80);
            bVar10 = true;
            fVar19 = *(float *)(lVar1 + 0x10 + uVar14 * 4);
            fVar4 = *(float *)(lVar1 + 0xc + lVar15);
            fVar25 = fVar21 * *(float *)(lVar1 + 0xc + uVar14 * 4) + 1.0;
            *(float *)((longlong)_Dst + uVar12 * 4) =
                 fVar21 * *(float *)(lVar1 + uVar14 * 4) + *(float *)((longlong)_Dst + uVar12 * 4);
            fVar24 = fVar21 * fVar19 + 0.0;
            fVar23 = fVar21 * fVar4 + 0.0;
            fVar22 = fVar21 * *(float *)(lVar1 + 0xc + lVar11) + 0.0;
            *(float *)((longlong)_Dst + uVar12 * 4 + 4) =
                 fVar21 * *(float *)(lVar1 + 4 + uVar14 * 4) +
                 *(float *)((longlong)_Dst + uVar12 * 4 + 4);
            *(float *)((longlong)_Dst + uVar12 * 4 + 8) =
                 fVar21 * *(float *)(lVar1 + 8 + uVar14 * 4) +
                 *(float *)((longlong)_Dst + uVar12 * 4 + 8);
            fVar19 = *(float *)((longlong)_Dst + uVar12 * 4 + 0xc);
            fVar4 = *(float *)((longlong)_Dst + uVar12 * 4 + 0x10);
            fVar20 = *(float *)((longlong)_Dst + uVar12 * 4 + 0x14);
            fVar5 = *(float *)((longlong)_Dst + uVar12 * 4 + 0x18);
            *(float *)((longlong)_Dst + uVar12 * 4 + 0xc) =
                 ((fVar19 * fVar25 - fVar4 * fVar24) - fVar20 * fVar23) - fVar5 * fVar22;
            *(float *)((longlong)_Dst + uVar12 * 4 + 0x10) =
                 (fVar19 * fVar24 + fVar4 * fVar25 + fVar20 * fVar22) - fVar5 * fVar23;
            fVar6 = *(float *)(lVar1 + 0x1c + uVar14 * 4);
            *(float *)((longlong)_Dst + uVar12 * 4 + 0x14) =
                 (fVar19 * fVar23 - fVar4 * fVar22) + fVar20 * fVar25 + fVar5 * fVar24;
            *(float *)((longlong)_Dst + uVar12 * 4 + 0x18) =
                 ((fVar19 * fVar22 + fVar4 * fVar23) - fVar20 * fVar24) + fVar5 * fVar25;
            *(float *)((longlong)_Dst + uVar12 * 4 + 0x1c) =
                 fVar21 * fVar6 + *(float *)((longlong)_Dst + uVar12 * 4 + 0x1c);
            fVar19 = *(float *)(lVar1 + 0x24 + uVar14 * 4);
            *(float *)((longlong)_Dst + uVar12 * 4 + 0x20) =
                 fVar21 * *(float *)(lVar1 + 0x20 + uVar14 * 4) +
                 *(float *)((longlong)_Dst + uVar12 * 4 + 0x20);
            *(float *)((longlong)_Dst + uVar12 * 4 + 0x24) =
                 fVar21 * fVar19 + *(float *)((longlong)_Dst + uVar12 * 4 + 0x24);
          }
          uVar14 = uVar14 + 10;
          lVar15 = lVar15 + 0x28;
          lVar11 = lVar11 + 0x28;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
        if (bVar10) {
          fVar21 = *(float *)((longlong)_Dst + uVar12 * 4 + 0x10);
          fVar19 = *(float *)((longlong)_Dst + uVar12 * 4 + 0xc);
          fVar4 = *(float *)((longlong)_Dst + uVar12 * 4 + 0x14);
          fVar20 = *(float *)((longlong)_Dst + uVar12 * 4 + 0x18);
          fVar21 = fVar19 * fVar19 + fVar21 * fVar21 + fVar4 * fVar4 + fVar20 * fVar20;
          if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar17 * 8) + 0x38) <
               DAT_146b62b24) && (_Init_thread_header(&DAT_146b62b24), DAT_146b62b24 == -1)) {
            _DAT_146b62b20 = 0x34000000;
            _Init_thread_footer(&DAT_146b62b24);
          }
          fVar19 = fVar21 - 1.0;
          if ((1.1920929e-07 <= fVar19) || (fVar19 <= -1.1920929e-07)) {
            fVar20 = _guard_xfg_dispatch_icall_nop(fVar21);
            fVar20 = 1.0 / fVar20;
            pfVar2 = (float *)((longlong)_Dst + uVar12 * 4 + 0xc);
            fVar21 = pfVar2[1];
            fVar19 = pfVar2[2];
            fVar4 = pfVar2[3];
            pfVar3 = (float *)((longlong)_Dst + uVar12 * 4 + 0xc);
            *pfVar3 = fVar20 * *pfVar2;
            pfVar3[1] = fVar20 * fVar21;
            pfVar3[2] = fVar20 * fVar19;
            pfVar3[3] = fVar20 * fVar4;
          }
        }
      }
      uVar18 = uVar18 + 1;
      uVar12 = uVar12 + 10;
    } while (uVar18 < *(ulonglong *)(param_1 + 0x60));
  }
  return;
}



// FUNCTION 143266160 FUN_143266160 body=87 status=ok
// SIG undefined FUN_143266160(void)

longlong FUN_143266160(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  _Mtx_init_in_situ(param_1,2);
  *(undefined8 *)(param_1 + 0x50) = param_2;
  *(undefined8 *)(param_1 + 0x58) = param_3;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  return param_1;
}



// FUNCTION 1432661c0 FUN_1432661c0 body=118 status=ok
// SIG undefined FUN_1432661c0(void)

undefined8 FUN_1432661c0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  iVar1 = _Mtx_lock();
  if (iVar1 != 0) {
    std::_Throw_C_error(iVar1);
  }
  uVar3 = 0;
  if (*(ulonglong *)(param_1 + 0x60) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x68);
    do {
      if (*plVar2 != 0) {
        uVar4 = 0;
        goto LAB_143266212;
      }
      uVar3 = uVar3 + 1;
      plVar2 = plVar2 + 0xc;
    } while (uVar3 < *(ulonglong *)(param_1 + 0x60));
  }
  uVar4 = 1;
LAB_143266212:
  iVar1 = _Mtx_unlock(param_1);
  if (iVar1 != 0) {
    std::_Throw_C_error(iVar1);
  }
  return uVar4;
}


