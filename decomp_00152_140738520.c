// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140738520 FUN_140738520 body=19 status=ok
// SIG undefined FUN_140738520(void)

undefined1 FUN_140738520(longlong param_1)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  if (*(char *)(param_1 + 0x1b0) != '\a') {
    uVar1 = *(undefined1 *)(param_1 + 0x571);
  }
  return uVar1;
}



// FUNCTION 140738550 FUN_140738550 body=86 status=ok
// SIG undefined FUN_140738550(void)

undefined4 * FUN_140738550(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  uVar2 = *(undefined4 *)(param_1 + 0x224);
  fVar3 = *(float *)(param_1 + 0x228);
  *param_2 = *(undefined4 *)(param_1 + 0x220);
  param_2[2] = fVar3;
  param_2[1] = uVar2;
  lVar1 = *(longlong *)(param_1 + 0x6f0);
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x720) == '\0') {
      fVar4 = *(float *)(lVar1 + 0x34);
    }
    else {
      fVar4 = *(float *)(lVar1 + 0x38);
    }
    param_2[2] = fVar3 - fVar4 * 0.5;
  }
  return param_2;
}



// FUNCTION 1407385b0 FUN_1407385b0 body=520 status=ok
// SIG undefined FUN_1407385b0(void)

int FUN_1407385b0(longlong param_1,float *param_2,float param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float local_58;
  
  fVar6 = *param_2;
  fVar2 = param_2[1];
  fVar3 = fVar6 * fVar6 + fVar2 * fVar2;
  if (fVar3 == 1.0) {
    if (param_2[2] == 0.0) {
      local_58 = (float)*(undefined8 *)param_2;
      fVar5 = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
      fVar4 = param_2[2];
      goto LAB_1407386ba;
    }
  }
  else {
    fVar5 = DAT_1468b5d94;
    local_58 = DAT_1468b5d90;
    fVar4 = DAT_1468b5d98;
    if (fVar3 < 1e-08) goto LAB_1407386ba;
    auVar7 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
    fVar5 = auVar7._0_4_;
    fVar5 = fVar5 + fVar5 * (0.5 - fVar3 * 0.5 * fVar5 * fVar5);
    fVar5 = fVar5 + fVar5 * (0.5 - fVar3 * 0.5 * fVar5 * fVar5);
    fVar6 = fVar6 * fVar5;
    fVar2 = fVar2 * fVar5;
  }
  fVar5 = fVar2;
  local_58 = fVar6;
  fVar4 = 0.0;
LAB_1407386ba:
  fVar3 = (float)DAT_1464aa7b8 * local_58;
  fVar2 = DAT_1464aa7b8._4_4_ * fVar5;
  fVar5 = (float)DAT_1464aa7a8 * local_58 + DAT_1464aa7a8._4_4_ * fVar5 + DAT_1464aa7b0 * fVar4;
  fVar4 = DAT_1464aa7c0 * fVar4;
  fVar6 = -1.0;
  if ((-1.0 <= fVar5) && (fVar6 = fVar5, 1.0 <= fVar5)) {
    fVar6 = 1.0;
  }
  fVar5 = _guard_xfg_dispatch_icall_nop(fVar6);
  fVar5 = fVar5 * 57.295776;
  fVar6 = fVar5;
  if (fVar3 + fVar2 + fVar4 <= 0.0) {
    fVar6 = -fVar5;
  }
  if (fVar5 <= *(float *)(param_1 + 0x90) * param_3) {
    iVar1 = (int)((fVar6 / *(float *)(param_1 + 0x90) + 1.0) * 0.5 * (float)*(int *)(param_1 + 0x84)
                 );
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



// FUNCTION 1407387c0 Poly1305_ctx_size body=6 status=ok
// SIG undefined Poly1305_ctx_size(void)

undefined8 Poly1305_ctx_size(void)

{
  return 0xf8;
}



// FUNCTION 1407387f0 FUN_1407387f0 body=40 status=ok
// SIG undefined FUN_1407387f0(void)

void FUN_1407387f0(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2f0))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014073880c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2e0))(plVar1);
    return;
  }
  return;
}



// FUNCTION 140738830 FUN_140738830 body=1240 status=ok
// SIG undefined FUN_140738830(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_140738830(longlong param_1,char *param_2,longlong param_3,undefined8 *param_4,
                    byte param_5)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8 [16];
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined1 local_158 [16];
  byte local_148 [16];
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  uint uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  longlong local_c0;
  undefined2 local_b8;
  undefined1 local_b6;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  if ((((param_3 == 0) || (*(longlong *)(param_1 + 0x580) == 0)) || (param_5 == 0)) ||
     (*(longlong *)(param_1 + 0x5c0) == 0)) {
    *param_2 = '\0';
    uVar3 = CONCAT44(uRam00000001468b5b7c,uRam00000001468b5b78);
    *(ulonglong *)(param_2 + 0x10) = CONCAT44(uRam00000001468b5b74,_DAT_1468b5b70);
    *(undefined8 *)(param_2 + 0x18) = uVar3;
    uVar3 = CONCAT44(uRam00000001468b5b8c,uRam00000001468b5b88);
    *(ulonglong *)(param_2 + 0x20) = CONCAT44(uRam00000001468b5b84,_DAT_1468b5b80);
    *(undefined8 *)(param_2 + 0x28) = uVar3;
    uVar3 = CONCAT44(uRam00000001468b5b9c,uRam00000001468b5b98);
    *(ulonglong *)(param_2 + 0x30) = CONCAT44(uRam00000001468b5b94,_DAT_1468b5b90);
    *(undefined8 *)(param_2 + 0x38) = uVar3;
    *(undefined8 *)(param_2 + 0x40) = DAT_1468b5da0;
    *(undefined4 *)(param_2 + 0x48) = DAT_1468b5da8;
    param_2[0x4c] = '\0';
    param_2[0x4d] = '\0';
    param_2[0x4e] = '\0';
    param_2[0x4f] = '\0';
    return param_2;
  }
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (plVar1 == (longlong *)0x0) {
    *param_2 = '\0';
    uVar3 = CONCAT44(uRam00000001468b5b7c,uRam00000001468b5b78);
    *(ulonglong *)(param_2 + 0x10) = CONCAT44(uRam00000001468b5b74,_DAT_1468b5b70);
    *(undefined8 *)(param_2 + 0x18) = uVar3;
    uVar3 = CONCAT44(uRam00000001468b5b8c,uRam00000001468b5b88);
    *(ulonglong *)(param_2 + 0x20) = CONCAT44(uRam00000001468b5b84,_DAT_1468b5b80);
    *(undefined8 *)(param_2 + 0x28) = uVar3;
    uVar3 = CONCAT44(uRam00000001468b5b9c,uRam00000001468b5b98);
    *(ulonglong *)(param_2 + 0x30) = CONCAT44(uRam00000001468b5b94,_DAT_1468b5b90);
    *(undefined8 *)(param_2 + 0x38) = uVar3;
    *(undefined8 *)(param_2 + 0x40) = DAT_1468b5da0;
    *(undefined4 *)(param_2 + 0x48) = DAT_1468b5da8;
    param_2[0x4c] = '\0';
    param_2[0x4d] = '\0';
    param_2[0x4e] = '\0';
    param_2[0x4f] = '\0';
    return param_2;
  }
  cVar5 = *(char *)(*(longlong *)(param_1 + 0x5c0) + 0x4b0);
  if ((param_5 == 3) && ((cVar4 = FUN_14073d080(), cVar4 == '\0' || (cVar5 == '\x05')))) {
    *param_2 = '\0';
    uVar3 = CONCAT44(uRam00000001468b5b7c,uRam00000001468b5b78);
    *(ulonglong *)(param_2 + 0x10) = CONCAT44(uRam00000001468b5b74,_DAT_1468b5b70);
    *(undefined8 *)(param_2 + 0x18) = uVar3;
    uVar3 = CONCAT44(uRam00000001468b5b8c,uRam00000001468b5b88);
    *(ulonglong *)(param_2 + 0x20) = CONCAT44(uRam00000001468b5b84,_DAT_1468b5b80);
    *(undefined8 *)(param_2 + 0x28) = uVar3;
    uVar3 = CONCAT44(uRam00000001468b5b9c,uRam00000001468b5b98);
    *(ulonglong *)(param_2 + 0x30) = CONCAT44(uRam00000001468b5b94,_DAT_1468b5b90);
    *(undefined8 *)(param_2 + 0x38) = uVar3;
    *(undefined8 *)(param_2 + 0x40) = DAT_1468b5da0;
    *(undefined4 *)(param_2 + 0x48) = DAT_1468b5da8;
    param_2[0x4c] = '\0';
    param_2[0x4d] = '\0';
    param_2[0x4e] = '\0';
    param_2[0x4f] = '\0';
    return param_2;
  }
  local_a8 = 0;
  local_148[0] = param_5;
  lVar2 = plVar1[0x2d];
  if (lVar2 == 0) {
    local_128 = 0;
    uStack_124 = 0;
    uStack_120 = 0;
    uStack_11c = 0;
    local_118 = _DAT_146858bd0 & _DAT_146858be0;
    uStack_114 = uRam0000000146858bd4 & uRam0000000146858be4;
    uStack_110 = uRam0000000146858bd8 & uRam0000000146858be8;
    uStack_10c = uRam0000000146858bdc & uRam0000000146858bec;
    local_138 = 0;
    uStack_134 = 0;
    uStack_130 = 0;
    uStack_12c = uRam0000000146858bdc;
  }
  else {
    local_138 = *(undefined4 *)(lVar2 + 0x210);
    uStack_134 = *(undefined4 *)(lVar2 + 0x214);
    uStack_130 = *(undefined4 *)(lVar2 + 0x218);
    local_128 = *(undefined4 *)(lVar2 + 0x220);
    uStack_124 = *(undefined4 *)(lVar2 + 0x224);
    uStack_120 = *(undefined4 *)(lVar2 + 0x228);
    uStack_11c = *(undefined4 *)(lVar2 + 0x22c);
    local_118 = *(uint *)(lVar2 + 0x230);
    uStack_114 = *(uint *)(lVar2 + 0x234);
    uStack_110 = *(uint *)(lVar2 + 0x238);
    uStack_10c = *(uint *)(lVar2 + 0x23c);
    uStack_12c = *(uint *)(lVar2 + 0x21c);
  }
  local_d8 = *(longlong *)(param_1 + 0x580);
  local_108 = *param_4;
  uStack_100 = param_4[1];
  local_d0 = *(undefined4 *)(param_1 + 0x8f8);
  local_e8 = param_4[4];
  uStack_e0 = param_4[5];
  fVar9 = *(float *)(local_d8 + 0x230);
  local_b8 = *(undefined2 *)(param_1 + 0x8e8);
  local_b6 = *(undefined1 *)(param_1 + 0x8ea);
  local_f8._4_4_ = *(float *)((longlong)param_4 + 0x14) * fVar9;
  local_f8._0_4_ = *(float *)(param_4 + 2) * fVar9;
  local_f8._8_4_ = *(float *)(param_4 + 3) * fVar9;
  local_f8._12_4_ = 0;
  if ((*(longlong *)(param_1 + 0x318) == 0) ||
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x318) + 0x38), lVar2 == 0)) {
    puVar6 = (undefined8 *)&DAT_1468b5d90;
  }
  else {
    puVar6 = (undefined8 *)(lVar2 + 0x34);
  }
  local_cc = *puVar6;
  local_b0 = *(undefined4 *)(param_1 + 0x628);
  local_c4 = *(undefined4 *)(puVar6 + 1);
  local_b4 = *(undefined4 *)(param_1 + 0x624);
  local_ac = *(undefined4 *)(param_1 + 0x62c);
  local_c0 = param_3;
  (**(code **)(*plVar1 + 0x578))(plVar1,&local_a8,(longlong)&local_a8 + 4);
  fVar9 = (float)local_a8 + *(float *)(param_1 + 0x634);
  local_a8._0_4_ = fVar9;
  if ((param_5 != 3) && (cVar5 = FUN_14073d080(param_1), cVar5 != '\0')) {
    local_a8._4_4_ = local_a8._4_4_ + *(float *)(param_1 + 0x638);
  }
  cVar5 = '\0';
  uVar14 = 0;
  uVar23 = (undefined4)DAT_1468b5da0;
  uVar24 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
  local_15c = 0;
  local_1a8[0] = 0;
  local_198 = _DAT_1468b5b70;
  uStack_194 = uRam00000001468b5b74;
  uStack_190 = uRam00000001468b5b78;
  uStack_18c = uRam00000001468b5b7c;
  local_188 = _DAT_1468b5b80;
  uStack_184 = uRam00000001468b5b84;
  uStack_180 = uRam00000001468b5b88;
  uStack_17c = uRam00000001468b5b8c;
  local_178 = _DAT_1468b5b90;
  uStack_174 = uRam00000001468b5b94;
  uStack_170 = uRam00000001468b5b98;
  uStack_16c = uRam00000001468b5b9c;
  local_168 = DAT_1468b5da0;
  local_160 = DAT_1468b5da8;
  uVar10 = _DAT_1468b5b80;
  uVar11 = uRam00000001468b5b84;
  uVar12 = uRam00000001468b5b88;
  uVar13 = uRam00000001468b5b8c;
  uVar15 = _DAT_1468b5b70;
  uVar16 = uRam00000001468b5b74;
  uVar17 = uRam00000001468b5b78;
  uVar18 = uRam00000001468b5b7c;
  uVar19 = _DAT_1468b5b90;
  uVar20 = uRam00000001468b5b94;
  uVar21 = uRam00000001468b5b98;
  uVar22 = uRam00000001468b5b9c;
  uVar8 = DAT_1468b5da8;
  if ((local_d8 == 0) || (local_c0 == 0)) goto LAB_140738c29;
  if (local_148[0] == 0) {
LAB_140738c0e:
    uVar12 = uStack_120;
    uVar13 = 0;
  }
  else if (local_148[0] < 3) {
LAB_140738bee:
    puVar7 = (undefined4 *)FUN_14072f5c0(local_1a8,local_148);
    uVar15 = *puVar7;
    uVar16 = puVar7[1];
    uVar17 = puVar7[2];
    uVar18 = puVar7[3];
    uVar10 = puVar7[4];
    uVar11 = puVar7[5];
    uVar19 = puVar7[8];
    uVar20 = puVar7[9];
    uVar21 = puVar7[10];
    uVar22 = puVar7[0xb];
    uVar12 = puVar7[6];
    uVar13 = puVar7[7];
    if (cVar5 == '\0') goto LAB_140738c0e;
  }
  else {
    if (local_148[0] != 3) {
      if (1 < (byte)(local_148[0] - 4)) goto LAB_140738c0e;
      cVar5 = '\x01';
      puVar6 = (undefined8 *)FUN_1407380c0(local_158,local_148);
      uVar23 = (undefined4)*puVar6;
      uVar24 = (undefined4)((ulonglong)*puVar6 >> 0x20);
      uVar8 = *(undefined4 *)(puVar6 + 1);
      uVar14 = local_d0;
      goto LAB_140738bee;
    }
    FUN_14072ec70(local_148,local_1a8);
    uVar23 = (undefined4)local_168;
    uVar24 = (undefined4)((ulonglong)local_168 >> 0x20);
    uVar10 = local_188;
    uVar11 = uStack_184;
    uVar12 = uStack_180;
    uVar13 = uStack_17c;
    uVar14 = local_15c;
    uVar15 = local_198;
    uVar16 = uStack_194;
    uVar17 = uStack_190;
    uVar18 = uStack_18c;
    uVar19 = local_178;
    uVar20 = uStack_174;
    uVar21 = uStack_170;
    uVar22 = uStack_16c;
    uVar8 = local_160;
  }
  cVar5 = '\x01';
LAB_140738c29:
  cVar4 = FUN_14073cf40(param_1);
  if (cVar4 != '\0') {
    uVar14 = 0;
  }
  *param_2 = cVar5;
  *(undefined4 *)(param_2 + 0x10) = uVar15;
  *(undefined4 *)(param_2 + 0x14) = uVar16;
  *(undefined4 *)(param_2 + 0x18) = uVar17;
  *(undefined4 *)(param_2 + 0x1c) = uVar18;
  *(undefined4 *)(param_2 + 0x20) = uVar10;
  *(undefined4 *)(param_2 + 0x24) = uVar11;
  *(undefined4 *)(param_2 + 0x28) = uVar12;
  *(undefined4 *)(param_2 + 0x2c) = uVar13;
  *(undefined4 *)(param_2 + 0x30) = uVar19;
  *(undefined4 *)(param_2 + 0x34) = uVar20;
  *(undefined4 *)(param_2 + 0x38) = uVar21;
  *(undefined4 *)(param_2 + 0x3c) = uVar22;
  *(ulonglong *)(param_2 + 0x40) = CONCAT44(uVar24,uVar23);
  *(undefined4 *)(param_2 + 0x4c) = uVar14;
  *(undefined4 *)(param_2 + 0x48) = uVar8;
  return param_2;
}



// FUNCTION 140738d10 FUN_140738d10 body=232 status=ok
// SIG undefined FUN_140738d10(void)

void FUN_140738d10(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14233e8d0();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146858e50) && (_Init_thread_header(&DAT_146858e50), DAT_146858e50 == -1))
  {
    uVar1 = UBorder::GetPrivateStaticClass();
    UBorder::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"RepData",1);
    DAT_146858e48 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146858e50);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146858e48 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146858e48 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146858e48 + 0x30));
  }
  return;
}



// FUNCTION 140738e00 FUN_140738e00 body=232 status=ok
// SIG undefined FUN_140738e00(void)

void FUN_140738e00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14233e8d0();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146858e68) && (_Init_thread_header(&DAT_146858e68), DAT_146858e68 == -1))
  {
    uVar1 = FUN_1407a6820();
    FUN_1407a6820();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ClientData",1);
    DAT_146858e60 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146858e68);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146858e60 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146858e60 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146858e60 + 0x30));
  }
  return;
}



// FUNCTION 140738ef0 FUN_140738ef0 body=493 status=ok
// SIG undefined FUN_140738ef0(void)

longlong * FUN_140738ef0(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  if (param_1 != (longlong *)0x0) {
    lVar2 = AAICharacter::GetPrivateStaticClass();
    if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return param_1;
    }
  }
  if (param_1 == (longlong *)0x0) {
LAB_140738f97:
    plVar5 = (longlong *)0x0;
  }
  else {
    lVar2 = ARemnantWeaponMod::GetPrivateStaticClass();
    if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    plVar5 = param_1;
    if (!bVar1) goto LAB_140738f97;
  }
  *param_3 = (longlong)plVar5;
  if (plVar5 != (longlong *)0x0) {
    return (longlong *)plVar5[0xc5];
  }
  if (param_1 == (longlong *)0x0) {
LAB_140738ff8:
    plVar5 = (longlong *)0x0;
  }
  else {
    lVar2 = FUN_1429d7ab0();
    if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    plVar5 = param_1;
    if (!bVar1) goto LAB_140738ff8;
  }
  *param_2 = plVar5;
  if (plVar5 == (longlong *)0x0) {
    if (param_1 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
    lVar2 = FUN_1428dfc70();
    if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      return (longlong *)0x0;
    }
    goto LAB_14073906c;
  }
  lVar2 = plVar5[0x92];
  if (lVar2 == 0) {
LAB_140739048:
    lVar2 = 0;
  }
  else {
    lVar3 = ARemnantWeaponMod::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140739048;
  }
  *param_3 = lVar2;
  if (lVar2 != 0) {
    return *(longlong **)(lVar2 + 0x628);
  }
  param_1 = (longlong *)*param_2;
LAB_14073906c:
  uVar4 = AAICharacter::GetPrivateStaticClass();
                    /* WARNING: Could not recover jumptable at 0x000140739089. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x628))(param_1,uVar4);
  return plVar5;
}



// FUNCTION 1407390e0 FUN_1407390e0 body=123 status=ok
// SIG undefined FUN_1407390e0(void)

undefined8 * FUN_1407390e0(longlong param_1,undefined8 *param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = DAT_14622e788;
  if (param_3 < 0) {
    *param_2 = DAT_14622e780;
    *(undefined4 *)(param_2 + 1) = uVar1;
    return param_2;
  }
  FUN_14072f200(param_1,param_3);
  uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x800) + 0xc + (longlong)param_3 * 0x18);
  *param_2 = *(undefined8 *)(*(longlong *)(param_1 + 0x800) + 4 + (longlong)param_3 * 0x18);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 140739160 FUN_140739160 body=123 status=ok
// SIG undefined FUN_140739160(void)

undefined8 * FUN_140739160(longlong param_1,undefined8 *param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = DAT_14622e788;
  if (param_3 < 0) {
    *param_2 = DAT_14622e780;
    *(undefined4 *)(param_2 + 1) = uVar1;
    return param_2;
  }
  FUN_14072f3e0(param_1,param_3);
  uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x810) + 0xc + (longlong)param_3 * 0x18);
  *param_2 = *(undefined8 *)(*(longlong *)(param_1 + 0x810) + 4 + (longlong)param_3 * 0x18);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 140739240 FUN_140739240 body=148 status=ok
// SIG undefined FUN_140739240(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_140739240(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_48 [48];
  ulonglong local_18;
  
  uVar1 = uRam00000001468b5b78;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  *param_2 = _DAT_1468b5b70;
  param_2[1] = uVar1;
  uVar4 = uRam00000001468b5b8c;
  uVar3 = uRam00000001468b5b88;
  uVar2 = uRam00000001468b5b84;
  *(undefined4 *)(param_2 + 2) = _DAT_1468b5b80;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar2;
  *(undefined4 *)(param_2 + 3) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar4;
  uVar5 = uRam00000001468b5b9c;
  uVar4 = uRam00000001468b5b98;
  uVar3 = uRam00000001468b5b94;
  uVar2 = _DAT_1468b5b90;
  *(undefined4 *)(param_2 + 4) = _DAT_1468b5b90;
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar3;
  *(undefined4 *)(param_2 + 5) = uVar4;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar5;
  lVar6 = FUN_140737790(uVar2,param_3,param_4);
  if (lVar6 != 0) {
    local_58 = 0;
    puVar7 = (undefined8 *)FUN_142291830(lVar6,local_48,0,0x7f7fffff);
    uVar1 = puVar7[1];
    *param_2 = *puVar7;
    param_2[1] = uVar1;
    uVar1 = puVar7[3];
    param_2[2] = puVar7[2];
    param_2[3] = uVar1;
    uVar1 = puVar7[5];
    param_2[4] = puVar7[4];
    param_2[5] = uVar1;
  }
  return param_2;
}



// FUNCTION 1407392e0 FUN_1407392e0 body=406 status=ok
// SIG undefined FUN_1407392e0(void)

undefined8 * FUN_1407392e0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 local_res8;
  undefined8 *local_38;
  undefined8 local_30;
  longlong local_28;
  int local_20;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 == 0) {
    *param_2 = 0;
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146858e54) &&
       (_Init_thread_header(&DAT_146858e54), DAT_146858e54 == -1)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14622e7a0,0);
      FGenericPlatformString::Convert<char,wchar_t>
                (DAT_14622e7a0,0x25,"UGbxCoverTransitionTable::GetRowName",0x25,0x3f);
      atexit((_func_5014 *)&LAB_143e41890);
      _Init_thread_footer(&DAT_146858e54);
    }
    iVar5 = 0;
    local_38 = (undefined8 *)0x0;
    puVar4 = &DAT_143f3eda8;
    if (DAT_14622e7a8 != 0) {
      puVar4 = DAT_14622e7a0;
    }
    local_30 = 0;
    FUN_140724b20(lVar1,puVar4,&local_38);
    UDataTable::GetRowNames(lVar1,&local_28);
    iVar2 = (int)local_30;
    if ((int)local_30 == local_20) {
      local_res8 = 0;
      puVar6 = local_38;
      if (0 < (int)local_30) {
        do {
          cVar3 = FUN_1407318c0(*puVar6,param_3);
          if (cVar3 != '\0') {
            local_res8 = *(undefined8 *)(local_28 + (longlong)iVar5 * 8);
            break;
          }
          iVar5 = iVar5 + 1;
          puVar6 = puVar6 + 1;
        } while (iVar5 < iVar2);
      }
      *param_2 = local_res8;
      if (local_28 != 0) {
        FMemory::Free();
      }
    }
    else {
      *param_2 = 0;
      if (local_28 != 0) {
        FMemory::Free();
      }
    }
    if (local_38 != (undefined8 *)0x0) {
      FMemory::Free(local_38);
    }
  }
  return param_2;
}



// FUNCTION 140739480 GetPostProcessInstance body=8 status=ok
// SIG undefined GetPostProcessInstance(void)

undefined8 USkeletalMeshComponent::GetPostProcessInstance(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x6f0);
}



// FUNCTION 140739490 FUN_140739490 body=19 status=ok
// SIG undefined FUN_140739490(void)

undefined1 FUN_140739490(longlong param_1)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  if (*(char *)(param_1 + 0x1b0) != '\a') {
    uVar1 = *(undefined1 *)(param_1 + 0x570);
  }
  return uVar1;
}



// FUNCTION 1407394b0 FUN_1407394b0 body=721 status=ok
// SIG undefined FUN_1407394b0(void)

longlong * FUN_1407394b0(longlong param_1,longlong *param_2)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  int iVar11;
  longlong lVar12;
  void *local_78;
  int local_70;
  int local_6c;
  void *local_68;
  int local_60;
  longlong local_58 [2];
  longlong local_48 [2];
  longlong local_38 [2];
  
  iVar11 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  lVar7 = *(longlong *)(param_1 + 0x90);
  lVar12 = (longlong)*(int *)(param_1 + 0x98) * 0x110 + lVar7;
  for (; lVar7 != lVar12; lVar7 = lVar7 + 0x110) {
    iVar3 = (int)param_2[1];
    iVar6 = iVar3 + -1;
    if (iVar3 < 1) {
      iVar6 = iVar11;
    }
    iVar3 = (iVar3 < 1) + 1 + iVar3;
    *(int *)(param_2 + 1) = iVar3;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
    }
    *(undefined2 *)(*param_2 + (longlong)iVar6 * 2) = 10;
    *(undefined2 *)(*param_2 + 2 + (longlong)iVar6 * 2) = 0;
    iVar3 = (int)param_2[1];
    iVar6 = iVar3 + -1;
    if (iVar3 < 1) {
      iVar6 = iVar11;
    }
    iVar3 = (iVar3 < 1) + 1 + iVar3;
    *(int *)(param_2 + 1) = iVar3;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
    }
    *(undefined2 *)(*param_2 + (longlong)iVar6 * 2) = 9;
    *(undefined2 *)(*param_2 + 2 + (longlong)iVar6 * 2) = 0;
    puVar5 = (undefined8 *)FUN_142de9d00(lVar7 + 8,local_48);
    if (*(int *)(puVar5 + 1) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = (undefined2 *)*puVar5;
    }
    puVar5 = (undefined8 *)FName::ToString(lVar7,local_58);
    if (*(int *)(puVar5 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*puVar5;
    }
    FString::PrintfImpl(&local_78,L"%s: Weight=%s",puVar9,puVar10);
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    if (*(char *)(lVar7 + 0x108) != '\0') {
      puVar5 = (undefined8 *)FUN_142de9d00(lVar7 + 0x88,local_38);
      if (*(int *)(puVar5 + 1) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = (undefined2 *)*puVar5;
      }
      FString::PrintfImpl(&local_68,L", LoopCountMax=%s",puVar10);
      pvVar2 = local_68;
      iVar3 = local_70;
      iVar6 = iVar11;
      if (local_60 != 0) {
        iVar6 = local_60 + -1;
      }
      if (iVar6 != 0) {
        lVar8 = (longlong)local_70;
        local_70 = (uint)(local_70 == 0) + local_70 + iVar6;
        if (local_6c < local_70) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar3);
        }
        pvVar1 = (void *)((longlong)local_78 + (lVar8 - (ulonglong)(iVar3 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar6 * 2);
        *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar1) = 0;
      }
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
    }
    pvVar2 = local_78;
    iVar3 = iVar11;
    if (local_70 != 0) {
      iVar3 = local_70 + -1;
    }
    if (iVar3 != 0) {
      iVar6 = (int)param_2[1];
      iVar4 = (uint)(iVar6 == 0) + iVar6 + iVar3;
      *(int *)(param_2 + 1) = iVar4;
      if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
      }
      pvVar1 = (void *)(*param_2 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar3 * 2);
      *(undefined2 *)((longlong)iVar3 * 2 + (longlong)pvVar1) = 0;
    }
    if (local_78 != (void *)0x0) {
      FMemory::Free(local_78);
    }
  }
  return param_2;
}



// FUNCTION 140739790 FUN_140739790 body=790 status=ok
// SIG undefined FUN_140739790(void)

longlong * FUN_140739790(longlong *param_1,longlong *param_2)

{
  void *_Dst;
  void *_Src;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  longlong *local_48;
  int local_40;
  int local_3c;
  longlong local_38 [2];
  
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (longlong *)UBTAuxiliaryNode::GetMyNode();
  if (plVar5 != (longlong *)0x0) {
    lVar6 = UBTTask_GameplayTaskBase::StaticClass();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar6 = (**(code **)(*plVar5 + 0x2f0))(plVar5);
      if ((lVar6 != 0) &&
         ((lVar7 = (**(code **)(*param_1 + 0x148))(param_1), lVar7 == 0 ||
          (cVar2 = UWorld::IsGameWorld(lVar7), cVar2 == '\0')))) {
        plVar9 = *(longlong **)(lVar6 + 0x108);
        iVar3 = 0;
        plVar5 = plVar9 + *(int *)(lVar6 + 0x110);
        local_48 = (longlong *)0x0;
        local_3c = 0;
        iVar11 = iVar3;
        if (plVar9 != plVar5) {
          lVar7 = *plVar9;
          while (iVar11 = 0, lVar7 == 0) {
            plVar9 = plVar9 + 1;
            if (plVar9 == plVar5) goto LAB_14073995b;
            lVar7 = *plVar9;
          }
          if (plVar9 != plVar5) {
            plVar13 = (longlong *)0x0;
            iVar12 = 0;
            do {
              plVar8 = (longlong *)
                       (**(code **)(*(longlong *)*plVar9 + 0x338))((longlong *)*plVar9,local_38);
              lVar7 = (longlong)iVar3;
              local_40 = iVar3 + 1;
              if (iVar12 < local_40) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_48,iVar3);
                plVar13 = local_48;
                iVar12 = local_3c;
              }
              iVar3 = local_40;
              plVar10 = plVar13 + lVar7 * 2;
              *plVar10 = 0;
              *plVar10 = *plVar8;
              *plVar8 = 0;
              *(int *)(plVar10 + 1) = (int)plVar8[1];
              *(undefined4 *)((longlong)plVar10 + 0xc) = *(undefined4 *)((longlong)plVar8 + 0xc);
              plVar8[1] = 0;
              if (local_38[0] != 0) {
                FMemory::Free();
              }
              plVar8 = (longlong *)
                       (*(longlong *)(lVar6 + 0x108) + (longlong)*(int *)(lVar6 + 0x110) * 8);
              if (plVar9 != plVar8) {
                do {
                  plVar9 = plVar9 + 1;
                  if (plVar9 == plVar8) break;
                } while (*plVar9 == 0);
              }
              iVar11 = iVar3;
            } while (plVar9 != plVar5);
          }
        }
LAB_14073995b:
        plVar13 = local_48 + (longlong)iVar11 * 2;
        plVar9 = local_48;
        for (plVar5 = local_48; plVar8 = plVar9, local_48 = plVar9, plVar5 != plVar13;
            plVar5 = plVar5 + 2) {
          iVar3 = (int)param_2[1];
          iVar12 = iVar3 + -1;
          if (iVar3 < 1) {
            iVar12 = 0;
          }
          iVar3 = (iVar3 < 1) + 1 + iVar3;
          *(int *)(param_2 + 1) = iVar3;
          if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
          }
          *(undefined2 *)(*param_2 + (longlong)iVar12 * 2) = 10;
          *(undefined2 *)(*param_2 + 2 + (longlong)iVar12 * 2) = 0;
          _Src = (void *)*plVar5;
          iVar3 = (int)plVar5[1] + -1;
          if ((int)plVar5[1] == 0) {
            iVar3 = 0;
          }
          if (iVar3 != 0) {
            iVar12 = (int)param_2[1];
            iVar4 = (uint)(iVar12 == 0) + iVar12 + iVar3;
            *(int *)(param_2 + 1) = iVar4;
            if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar12);
            }
            _Dst = (void *)(*param_2 + ((longlong)iVar12 - (ulonglong)(iVar12 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar3 * 2);
            *(undefined2 *)((longlong)iVar3 * 2 + (longlong)_Dst) = 0;
          }
          plVar9 = local_48;
        }
        for (; iVar11 != 0; iVar11 = iVar11 + -1) {
          if (*plVar8 != 0) {
            FMemory::Free();
          }
          plVar8 = plVar8 + 2;
        }
        if (plVar9 != (longlong *)0x0) {
          FMemory::Free(plVar9);
        }
      }
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 140739ab0 FUN_140739ab0 body=1409 status=ok
// SIG undefined FUN_140739ab0(void)

void ** FUN_140739ab0(longlong param_1,void **param_2)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  void *local_38;
  undefined8 local_30;
  
  *param_2 = (void *)0x0;
  param_2[1] = (void *)0x0;
  iVar7 = 0;
  iVar8 = 0;
  if (*(char *)(param_1 + 0xe8) != '\0') {
    local_38 = (void *)0x0;
    local_30 = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    pvVar2 = local_38;
    FGenericPlatformString::Memcpy(local_38,L"LoopCount=",0x16);
    if (((int)local_30 != 0) && (iVar6 = (int)local_30 + -1, iVar6 != 0)) {
      iVar4 = *(int *)(param_2 + 1);
      iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar6;
      *(int *)(param_2 + 1) = iVar3;
      if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
      }
      pvVar1 = (void *)((longlong)*param_2 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar6 * 2);
      *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar1) = 0;
    }
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    puVar5 = (undefined8 *)FUN_142de9d00(param_1 + 0x68,&local_38);
    pvVar2 = (void *)*puVar5;
    iVar6 = *(int *)(puVar5 + 1) + -1;
    if (*(int *)(puVar5 + 1) == 0) {
      iVar6 = iVar8;
    }
    if (iVar6 != 0) {
      iVar4 = *(int *)(param_2 + 1);
      iVar3 = (uint)(iVar4 == 0) + iVar6 + iVar4;
      *(int *)(param_2 + 1) = iVar3;
      if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
      }
      pvVar1 = (void *)((longlong)*param_2 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar6 * 2);
      *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar1) = 0;
    }
    if (local_38 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if (*(char *)(param_1 + 0x170) != '\0') {
    iVar6 = *(int *)(param_2 + 1);
    if (1 < iVar6) {
      iVar4 = iVar6 + -1;
      if (iVar6 < 1) {
        iVar4 = iVar7;
      }
      iVar6 = (iVar6 < 1) + 1 + iVar6;
      *(int *)(param_2 + 1) = iVar6;
      if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
      *(undefined2 *)((longlong)*param_2 + (longlong)iVar4 * 2) = 0x2c;
      *(undefined2 *)((longlong)*param_2 + (longlong)iVar4 * 2 + 2) = 0;
      iVar6 = *(int *)(param_2 + 1);
      iVar4 = iVar6 + -1;
      if (iVar6 < 1) {
        iVar4 = iVar7;
      }
      iVar6 = (iVar6 < 1) + 1 + iVar6;
      *(int *)(param_2 + 1) = iVar6;
      if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
      *(undefined2 *)((longlong)*param_2 + (longlong)iVar4 * 2) = 0x20;
      *(undefined2 *)((longlong)*param_2 + (longlong)iVar4 * 2 + 2) = 0;
    }
    local_38 = (void *)0x0;
    local_30 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    pvVar2 = local_38;
    FGenericPlatformString::Memcpy(local_38,L"LoopTime=",0x14);
    if (((int)local_30 != 0) && (iVar6 = (int)local_30 + -1, iVar6 != 0)) {
      iVar4 = *(int *)(param_2 + 1);
      iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar6;
      *(int *)(param_2 + 1) = iVar3;
      if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
      }
      pvVar1 = (void *)((longlong)*param_2 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar6 * 2);
      *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar1) = 0;
    }
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    puVar5 = (undefined8 *)FUN_142de9d00(param_1 + 0xf0,&local_38);
    pvVar2 = (void *)*puVar5;
    iVar6 = *(int *)(puVar5 + 1) + -1;
    if (*(int *)(puVar5 + 1) == 0) {
      iVar6 = iVar8;
    }
    if (iVar6 != 0) {
      iVar4 = *(int *)(param_2 + 1);
      iVar3 = (uint)(iVar4 == 0) + iVar6 + iVar4;
      *(int *)(param_2 + 1) = iVar3;
      if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
      }
      pvVar1 = (void *)((longlong)*param_2 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar6 * 2);
      *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar1) = 0;
    }
    if (local_38 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if ((*(char *)(param_1 + 0x188) != '\0') && (*(longlong *)(param_1 + 0x178) != 0)) {
    iVar6 = *(int *)(param_2 + 1);
    if (1 < iVar6) {
      iVar4 = iVar6 + -1;
      if (iVar6 < 1) {
        iVar4 = iVar7;
      }
      iVar6 = (iVar6 < 1) + 1 + iVar6;
      *(int *)(param_2 + 1) = iVar6;
      if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
      *(undefined2 *)((longlong)*param_2 + (longlong)iVar4 * 2) = 0x2c;
      *(undefined2 *)((longlong)*param_2 + (longlong)iVar4 * 2 + 2) = 0;
      iVar6 = *(int *)(param_2 + 1);
      iVar4 = iVar6 + -1;
      if (iVar6 < 1) {
        iVar4 = iVar7;
      }
      iVar6 = (iVar6 < 1) + 1 + iVar6;
      *(int *)(param_2 + 1) = iVar6;
      if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
      *(undefined2 *)((longlong)*param_2 + (longlong)iVar4 * 2) = 0x20;
      *(undefined2 *)((longlong)*param_2 + (longlong)iVar4 * 2 + 2) = 0;
    }
    if (*(char *)(param_1 + 0x180) != '\0') {
      local_38 = (void *)0x0;
      local_30 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      pvVar2 = local_38;
      FGenericPlatformString::Memcpy(local_38,L"Not ",10);
      if (((int)local_30 != 0) && (iVar7 = (int)local_30 + -1, iVar7 != 0)) {
        iVar6 = *(int *)(param_2 + 1);
        iVar4 = (uint)(iVar6 == 0) + iVar6 + iVar7;
        *(int *)(param_2 + 1) = iVar4;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
        }
        pvVar1 = (void *)((longlong)*param_2 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar7 * 2);
        *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar1) = 0;
      }
      if (pvVar2 != (void *)0x0) {
        FMemory::Free(pvVar2);
      }
    }
    puVar5 = (undefined8 *)
             (**(code **)(**(longlong **)(param_1 + 0x178) + 0x278))
                       (*(longlong **)(param_1 + 0x178),&local_38);
    pvVar2 = (void *)*puVar5;
    iVar7 = *(int *)(puVar5 + 1) + -1;
    if (*(int *)(puVar5 + 1) == 0) {
      iVar7 = iVar8;
    }
    if (iVar7 != 0) {
      iVar8 = *(int *)(param_2 + 1);
      iVar6 = (uint)(iVar8 == 0) + iVar7 + iVar8;
      *(int *)(param_2 + 1) = iVar6;
      if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar8);
      }
      pvVar1 = (void *)((longlong)*param_2 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar7 * 2);
      *(undefined2 *)((longlong)pvVar1 + (longlong)iVar7 * 2) = 0;
    }
    if (local_38 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if (*(int *)(param_2 + 1) < 2) {
    local_38 = (void *)0x0;
    local_30 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    pvVar2 = local_38;
    FGenericPlatformString::Convert<char,wchar_t>(local_38,0xe,"Infinite Loop",0xe,0x3f);
    if (param_2 != &local_38) {
      if (*param_2 != (void *)0x0) {
        FMemory::Free();
      }
      *param_2 = pvVar2;
      *(int *)(param_2 + 1) = (int)local_30;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_30._4_4_;
      return param_2;
    }
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
  }
  return param_2;
}



// FUNCTION 14073a040 FUN_14073a040 body=523 status=ok
// SIG undefined FUN_14073a040(void)

undefined8 FUN_14073a040(longlong param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t **ppwVar3;
  undefined8 *puVar4;
  wchar_t *pwVar5;
  undefined2 *puVar6;
  wchar_t *pwVar7;
  undefined2 *puVar8;
  int iVar9;
  wchar_t *local_38;
  int local_30;
  int local_2c;
  longlong local_28 [2];
  
  pwVar7 = (wchar_t *)0x0;
  iVar9 = 0;
  local_38 = (wchar_t *)0x0;
  local_2c = 0;
  pwVar5 = pwVar7;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    pwVar1 = (wchar_t *)UBlackboardKeyType::GetPrivateStaticClass();
    for (pwVar2 = *(wchar_t **)(param_1 + 0x80);
        (pwVar5 = pwVar7, pwVar2 != (wchar_t *)0x0 &&
        (pwVar5 = *(wchar_t **)(param_1 + 0x80), pwVar2 != pwVar1));
        pwVar2 = *(wchar_t **)(pwVar2 + 0x18)) {
    }
  }
  pwVar2 = (wchar_t *)FUN_142dfd5b0();
  if (pwVar5 != pwVar2) {
    pwVar5 = pwVar7;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      pwVar1 = (wchar_t *)UBlackboardKeyType::GetPrivateStaticClass();
      for (pwVar2 = *(wchar_t **)(param_1 + 0x80);
          (pwVar5 = pwVar7, pwVar2 != (wchar_t *)0x0 &&
          (pwVar5 = *(wchar_t **)(param_1 + 0x80), pwVar2 != pwVar1));
          pwVar2 = *(wchar_t **)(pwVar2 + 0x18)) {
      }
    }
    pwVar2 = (wchar_t *)UBlackboardKeyType_Object::GetPrivateStaticClass();
    if (pwVar5 != pwVar2) {
      pwVar5 = pwVar7;
      if (*(longlong *)(param_1 + 0x80) != 0) {
        pwVar1 = (wchar_t *)UBlackboardKeyType::GetPrivateStaticClass();
        for (pwVar2 = *(wchar_t **)(param_1 + 0x80);
            (pwVar5 = pwVar7, pwVar2 != (wchar_t *)0x0 &&
            (pwVar5 = *(wchar_t **)(param_1 + 0x80), pwVar2 != pwVar1));
            pwVar2 = *(wchar_t **)(pwVar2 + 0x18)) {
        }
      }
      pwVar2 = (wchar_t *)UBlackboardKeyType_Object::GetPrivateStaticClass();
      if (pwVar5 != pwVar2) {
        local_30 = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_38,8);
        local_30 = local_30 + 8;
        if (local_2c < local_30) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38);
        }
        builtin_wcsncpy(local_38,L"invalid",8);
        pwVar7 = local_38;
        iVar9 = local_30;
        goto LAB_14073a19f;
      }
    }
  }
  ppwVar3 = (wchar_t **)FName::ToString(param_1 + 0x78,local_28);
  if (&local_38 != ppwVar3) {
    pwVar7 = *ppwVar3;
    *ppwVar3 = (wchar_t *)0x0;
    iVar9 = *(int *)(ppwVar3 + 1);
    ppwVar3[1] = (wchar_t *)0x0;
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
LAB_14073a19f:
  puVar4 = (undefined8 *)FUN_142de9d00(param_1 + 0x90,&local_38);
  puVar6 = &DAT_143f3eda8;
  if (*(int *)(puVar4 + 1) == 0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = (undefined2 *)*puVar4;
  }
  pwVar5 = L"";
  if (iVar9 != 0) {
    pwVar5 = pwVar7;
  }
  puVar4 = (undefined8 *)UBTDecorator::GetStaticDescription(param_1,local_28);
  if (*(int *)(puVar4 + 1) != 0) {
    puVar6 = (undefined2 *)*puVar4;
  }
  FString::PrintfImpl(param_2,L"%s: %s in range %s",puVar6,pwVar5,puVar8);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (pwVar7 != (wchar_t *)0x0) {
    FMemory::Free(pwVar7);
  }
  return param_2;
}



// FUNCTION 14073a250 FUN_14073a250 body=443 status=ok
// SIG undefined FUN_14073a250(void)

longlong * FUN_14073a250(longlong *param_1,longlong *param_2)

{
  void *_Dst;
  void *_Src;
  char cVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *local_38;
  ulonglong local_30;
  
  *param_2 = 0;
  param_2[1] = 0;
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x2f0))();
  if ((plVar4 != (longlong *)0x0) &&
     ((lVar5 = (**(code **)(*param_1 + 0x148))(param_1), lVar5 == 0 ||
      (cVar1 = UWorld::IsGameWorld(lVar5), cVar1 == '\0')))) {
    local_38 = (longlong *)0x0;
    local_30 = 0;
    (**(code **)(*plVar4 + 0x348))(plVar4,&local_38);
    uVar8 = (ulonglong)(int)local_30;
    plVar9 = local_38 + uVar8 * 2;
    plVar4 = local_38;
    if (local_38 != plVar9) {
      do {
        iVar2 = (int)param_2[1];
        iVar6 = iVar2 + -1;
        if (iVar2 < 1) {
          iVar6 = 0;
        }
        iVar2 = (iVar2 < 1) + 1 + iVar2;
        *(int *)(param_2 + 1) = iVar2;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
        }
        *(undefined2 *)(*param_2 + (longlong)iVar6 * 2) = 10;
        *(undefined2 *)(*param_2 + 2 + (longlong)iVar6 * 2) = 0;
        _Src = (void *)*plVar4;
        iVar2 = (int)plVar4[1] + -1;
        if ((int)plVar4[1] == 0) {
          iVar2 = 0;
        }
        if (iVar2 != 0) {
          iVar6 = (int)param_2[1];
          iVar3 = (uint)(iVar6 == 0) + iVar2 + iVar6;
          *(int *)(param_2 + 1) = iVar3;
          if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
          }
          _Dst = (void *)(*param_2 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar2 * 2);
          *(undefined2 *)((longlong)iVar2 * 2 + (longlong)_Dst) = 0;
        }
        plVar4 = plVar4 + 2;
      } while (plVar4 != plVar9);
      uVar8 = local_30 & 0xffffffff;
    }
    uVar7 = (uint)uVar8;
    plVar4 = local_38;
    while (uVar7 != 0) {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
      uVar7 = (int)uVar8 - 1;
      uVar8 = (ulonglong)uVar7;
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  return param_2;
}



// FUNCTION 14073a420 FUN_14073a420 body=487 status=ok
// SIG undefined FUN_14073a420(void)

undefined8 * FUN_14073a420(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 local_res18;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  if (((*param_3 != 0) && (param_3[1] != 0)) && ((param_3[2] != 0 || ((char)param_3[3] == '\0')))) {
    local_30 = *(longlong *)(param_1 + 0x310);
    if (((local_30 == 0) || (*(longlong *)(param_1 + 0x318) == 0)) ||
       ((*(longlong *)(param_1 + 800) == 0 && (*(char *)(param_1 + 0x328) != '\0')))) {
      lVar3 = *(longlong *)(param_1 + 0x900);
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x908);
    }
    if (lVar3 != 0) {
      if (*(longlong *)(param_1 + 0x5a8) == 0) {
        local_58 = 0;
      }
      else {
        local_58 = FUN_140eaf760(*(longlong *)(param_1 + 0x5a8));
        local_30 = *(longlong *)(param_1 + 0x310);
      }
      local_50 = *(undefined8 *)(param_1 + 0x5a0);
      lVar1 = *param_3;
      local_48 = param_3[1];
      local_40 = *(undefined8 *)(param_1 + 0x318);
      local_28 = *(undefined8 *)(param_1 + 0x580);
      local_20 = *(undefined8 *)(param_1 + 0x5c0);
      local_38 = lVar1;
      FUN_1407392e0(lVar3,&local_res18,&local_58);
      if ((((((int)local_res18 != 0) || (local_res18._4_4_ != 0)) &&
           (*(longlong *)(param_1 + 0x310) != 0)) && (*(longlong *)(param_1 + 0x318) != 0)) &&
         (((*(longlong *)(param_1 + 800) != 0 || (*(char *)(param_1 + 0x328) == '\0')) &&
          (cVar2 = FUN_14073d080(param_1), cVar2 != '\0')))) {
        if (((lVar1 == 0) || (*(longlong *)(param_1 + 0x5a0) == 0)) ||
           ((*(longlong *)(param_1 + 0x908) == 0 || (*(longlong *)(param_1 + 0x118) == 0)))) {
          local_res18 = 0;
        }
        else if ((*(longlong *)(param_1 + 0x120) == 0) &&
                (FUN_1423407b0(param_1), *(longlong *)(param_1 + 0x120) == 0)) {
          FUN_1423407b0(param_1);
          *param_2 = local_res18;
          return param_2;
        }
      }
      *param_2 = local_res18;
      return param_2;
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14073a610 GetAssignedStarSignPerk body=14 status=ok
// SIG undefined GetAssignedStarSignPerk(void)

undefined8 * ABBQPlayerState::GetAssignedStarSignPerk(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x578);
  return param_2;
}



// FUNCTION 14073a620 FUN_14073a620 body=480 status=ok
// SIG undefined FUN_14073a620(void)

int FUN_14073a620(longlong param_1,float *param_2,float param_3)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float local_58;
  
  fVar5 = param_2[2];
  fVar4 = *param_2;
  fVar1 = param_2[1];
  fVar6 = fVar4 * fVar4 + fVar1 * fVar1 + fVar5 * fVar5;
  if (fVar6 == 1.0) {
    local_58 = (float)*(undefined8 *)param_2;
    fVar3 = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
    fVar7 = param_2[2];
  }
  else {
    fVar3 = DAT_1468b5d94;
    fVar7 = DAT_1468b5d98;
    local_58 = DAT_1468b5d90;
    if (1e-08 <= fVar6) {
      auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
      fVar7 = auVar8._0_4_;
      fVar7 = fVar7 + fVar7 * (0.5 - fVar6 * 0.5 * fVar7 * fVar7);
      fVar7 = fVar7 + fVar7 * (0.5 - fVar6 * 0.5 * fVar7 * fVar7);
      local_58 = fVar4 * fVar7;
      fVar3 = fVar1 * fVar7;
      fVar7 = fVar5 * fVar7;
    }
  }
  fVar4 = (float)DAT_1464aa798 * local_58 + DAT_1464aa798._4_4_ * fVar3 + DAT_1464aa7a0 * fVar7;
  fVar5 = -1.0;
  if ((-1.0 <= fVar4) && (fVar5 = fVar4, 1.0 <= fVar4)) {
    fVar5 = 1.0;
  }
  fVar4 = _guard_xfg_dispatch_icall_nop(fVar5);
  fVar5 = *(float *)(param_1 + 0x8c);
  fVar4 = 90.0 - fVar4 * 57.295776;
  if ((fVar4 < -(fVar5 * param_3)) || (*(float *)(param_1 + 0x88) * param_3 < fVar4)) {
    iVar2 = -1;
  }
  else {
    iVar2 = (int)(((fVar5 + fVar4) / (*(float *)(param_1 + 0x88) + fVar5)) *
                 (float)*(int *)(param_1 + 0x80));
  }
  return iVar2;
}



// FUNCTION 14073a800 FUN_14073a800 body=159 status=ok
// SIG undefined FUN_14073a800(void)

longlong FUN_14073a800(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  plVar5 = *(longlong **)(param_1 + 0x700);
  plVar4 = plVar5 + (longlong)*(int *)(param_1 + 0x708) * 0x18;
  for (; plVar5 != plVar4; plVar5 = plVar5 + 0x18) {
    if (*plVar5 != 0) {
      iVar1 = *(int *)(param_2 + 0x48);
      iVar2 = iVar1 + 1;
      *(int *)(param_2 + 0x48) = iVar2;
      if (*(int *)(param_2 + 0x4c) < iVar2) {
        TArray<USkeletalMeshComponent_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(param_2)
        ;
      }
      lVar3 = *(longlong *)(param_2 + 0x40);
      if (*(longlong *)(param_2 + 0x40) == 0) {
        lVar3 = param_2;
      }
      *(longlong *)(lVar3 + (longlong)iVar1 * 8) = *plVar5;
    }
  }
  return param_2;
}



// FUNCTION 14073a8a0 FUN_14073a8a0 body=429 status=ok
// SIG undefined FUN_14073a8a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * FUN_14073a8a0(longlong param_1,void *param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [64];
  undefined1 *local_68;
  uint local_60;
  uint uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  puVar4 = (undefined1 *)0x0;
  uVar5 = 0;
  uVar7 = 0;
  local_68 = (undefined1 *)0x0;
  local_60 = 0;
  uStack_5c = 0;
  if (((*(longlong *)(param_1 + 0x6f0) == 0) || (*(char *)(param_1 + 0x6fa) == '\0')) ||
     (*(int *)(param_1 + 0x708) < 1)) {
    *(undefined8 *)((longlong)param_2 + 0x40) = 0;
    uVar5 = uVar7;
  }
  else {
    puVar3 = *(undefined8 **)(param_1 + 0x700);
    puVar8 = puVar3 + (longlong)*(int *)(param_1 + 0x708) * 0x18;
    puVar6 = puVar4;
    puVar2 = puVar4;
    uVar7 = uVar5;
    for (; puVar3 != puVar8; puVar3 = puVar3 + 0x18) {
      if (((0 < *(int *)(puVar3 + 0x11)) && (*(int *)(puVar3 + 0x11) == *(int *)(puVar3 + 0x12))) &&
         ((*(int *)(puVar3[0x10] + 8) == *(int *)((longlong)puVar3 + 0x94) &&
          (cVar1 = FUN_14073ab20(puVar3 + 2,param_3,0x3f800000), cVar1 != '\0')))) {
        local_60 = (int)puVar6 + 1;
        if ((int)puVar2 < (int)local_60) {
          TArray<USkeletalMeshComponent_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow
                    (local_a8,puVar6);
          puVar4 = local_68;
        }
        puVar2 = local_a8;
        if (puVar4 != (undefined1 *)0x0) {
          puVar2 = puVar4;
        }
        *(undefined8 *)(puVar2 + (longlong)(int)puVar6 * 8) = *puVar3;
        puVar2 = (undefined1 *)(ulonglong)uStack_5c;
        puVar6 = (undefined1 *)(ulonglong)local_60;
        puVar4 = local_68;
      }
      uVar5 = (uint)puVar6;
      uVar7 = (uint)puVar2;
    }
    *(undefined8 *)((longlong)param_2 + 0x40) = 0;
    if (puVar4 != (undefined1 *)0x0) goto LAB_14073aa05;
  }
  _guard_xfg_dispatch_icall_nop(param_2,local_a8,0x40);
LAB_14073aa05:
  if (*(longlong *)((longlong)param_2 + 0x40) != 0) {
    FMemory::Free();
    puVar4 = local_68;
    uVar7 = uStack_5c;
    uVar5 = local_60;
  }
  *(undefined1 **)((longlong)param_2 + 0x40) = puVar4;
  *(uint *)((longlong)param_2 + 0x4c) = uVar7;
  *(uint *)((longlong)param_2 + 0x48) = uVar5;
  return param_2;
}



// FUNCTION 14073aa50 FUN_14073aa50 body=24 status=ok
// SIG undefined FUN_14073aa50(void)

undefined1 FUN_14073aa50(longlong param_1)

{
  if ((*(int *)(param_1 + 0x578) == 0) && (*(int *)(param_1 + 0x57c) == 0)) {
    return 0;
  }
  return 1;
}



// FUNCTION 14073aa70 FUN_14073aa70 body=174 status=ok
// SIG undefined FUN_14073aa70(void)

void FUN_14073aa70(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  longlong *plVar4;
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  if (param_2 != 0) {
    plVar4 = *(longlong **)(param_1 + 0x1b0);
    plVar1 = plVar4 + *(int *)(param_1 + 0x1b8);
    for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
      if (*plVar4 == *(longlong *)(param_2 + 0x18)) {
        return;
      }
    }
    iVar3 = *(int *)(param_1 + 0x260);
    local_18 = CONCAT31(local_18._1_3_,*(byte *)(param_2 + 0x24c) >> 6) & 0xffffff01;
    *(int *)(param_1 + 0x260) = iVar3 + 1;
    if (*(int *)(param_1 + 0x264) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 600),iVar3);
    }
    uStack_10 = (uint)param_2;
    uStack_c = (uint)((ulonglong)param_2 >> 0x20);
    puVar2 = (uint *)(*(longlong *)(param_1 + 600) + (longlong)iVar3 * 0x10);
    *puVar2 = local_18;
    puVar2[1] = uStack_14;
    puVar2[2] = uStack_10;
    puVar2[3] = uStack_c;
    FUN_142397540(param_2,1);
  }
  return;
}



// FUNCTION 14073ab20 FUN_14073ab20 body=373 status=ok
// SIG undefined FUN_14073ab20(void)

ulonglong FUN_14073ab20(longlong param_1,float *param_2,undefined4 param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_58;
  float fStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  
  fVar12 = param_2[1];
  fVar2 = *param_2;
  fVar3 = param_2[2];
  uStack_4c = 0x3f800000;
  fVar9 = fVar3 * *(float *)(param_1 + 0x50);
  fVar10 = *(float *)(param_1 + 0x60) * 1.0 + fVar9 +
           fVar12 * *(float *)(param_1 + 0x40) + fVar2 * *(float *)(param_1 + 0x30);
  fVar11 = *(float *)(param_1 + 100) * 1.0 + fVar3 * *(float *)(param_1 + 0x54) +
           fVar12 * *(float *)(param_1 + 0x44) + fVar2 * *(float *)(param_1 + 0x34);
  fVar12 = *(float *)(param_1 + 0x68) * 1.0 + fVar3 * *(float *)(param_1 + 0x58) +
           fVar12 * *(float *)(param_1 + 0x48) + fVar2 * *(float *)(param_1 + 0x38);
  _local_58 = CONCAT44(fVar11,fVar10);
  fStack_50 = fVar12;
  iVar6 = FUN_14073a620(fVar9,&local_58);
  iVar7 = FUN_1407385b0(param_1,&local_58,param_3);
  uVar4 = *(uint *)(param_1 + 0x78);
  uVar8 = (ulonglong)uVar4;
  if ((((0 < (int)uVar4) && (uVar4 == *(uint *)(param_1 + 0x80))) &&
      (lVar5 = *(longlong *)(param_1 + 0x70), *(int *)(lVar5 + 8) == *(int *)(param_1 + 0x84))) &&
     (((-1 < iVar6 && (iVar6 < (int)uVar4)) &&
      ((-1 < iVar7 && (uVar8 = (longlong)iVar6 * 0x10, iVar7 < *(int *)(uVar8 + 8 + lVar5))))))) {
    uVar8 = *(ulonglong *)(uVar8 + lVar5);
    pfVar1 = (float *)(uVar8 + (longlong)iVar7 * 4);
    if (pfVar1 != (float *)0x0) {
      return CONCAT71((int7)(uVar8 >> 8),
                      SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar12 * fVar12) < *pfVar1);
    }
  }
  return uVar8 & 0xffffffffffffff00;
}



// FUNCTION 14073aca0 FUN_14073aca0 body=534 status=ok
// SIG undefined FUN_14073aca0(void)

void FUN_14073aca0(longlong param_1,wchar_t *param_2)

{
  int iVar1;
  bool bVar2;
  wchar_t *pwVar3;
  char cVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  longlong *plVar7;
  undefined8 uVar8;
  wchar_t *pwVar9;
  int *piVar10;
  int *piVar11;
  longlong *plVar12;
  longlong local_res10;
  int local_28;
  int local_24;
  longlong local_20;
  
  if (param_2 != (wchar_t *)0x0) {
    lVar5 = UMonkeyAnim::StaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 8) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 8) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    pwVar6 = param_2;
    if (bVar2) goto LAB_14073acf1;
  }
  pwVar6 = (wchar_t *)0x0;
LAB_14073acf1:
  *(wchar_t **)(param_1 + 0x68) = pwVar6;
  if ((param_2 != (wchar_t *)0x0) &&
     (plVar7 = (longlong *)FUN_142269f40(param_2), plVar7 != (longlong *)0x0)) {
    uVar8 = FUN_142e39920();
    uVar8 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar8);
    *(undefined8 *)(param_1 + 0x70) = uVar8;
    uVar8 = FUN_1407a6820();
    uVar8 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar8);
    *(undefined8 *)(param_1 + 0x60) = uVar8;
    pwVar9 = _guard_xfg_dispatch_icall_nop
                       (L"&UGbxAnimStateManager_Cover::Owner_PostBeginPlay",L"::");
    pwVar6 = (wchar_t *)0x0;
    while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar6 = pwVar3;
    }
    FName::FName(&local_res10,pwVar6 + 2,1);
    plVar12 = plVar7 + 0x81;
    FWeakObjectPtr::operator=(&local_28,0);
    local_20 = 0;
    FWeakObjectPtr::operator=(&local_28,param_1);
    local_20 = local_res10;
    if ((local_res10 != 0) && (lVar5 = FWeakObjectPtr::Get(&local_28), lVar5 != 0)) {
      UObject::FindFunction(lVar5,local_20);
    }
    piVar10 = (int *)*plVar12;
    lVar5 = plVar7[0x82];
    for (piVar11 = piVar10; piVar11 != piVar10 + (longlong)(int)lVar5 * 4; piVar11 = piVar11 + 4) {
      if (((*piVar11 == local_28) && (piVar11[1] == local_24)) ||
         ((cVar4 = FWeakObjectPtr::IsValid(piVar11), cVar4 == '\0' &&
          (cVar4 = FWeakObjectPtr::IsValid(&local_28), cVar4 == '\0')))) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if ((bVar2) && (*(longlong *)(piVar11 + 2) == local_20)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        if ((int)((longlong)piVar11 - (longlong)piVar10 >> 4) != -1) goto LAB_14073aea1;
        break;
      }
    }
    iVar1 = (int)plVar7[0x82];
    *(int *)(plVar7 + 0x82) = iVar1 + 1;
    if (*(int *)((longlong)plVar7 + 0x414) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12,iVar1);
    }
    piVar10 = (int *)((longlong)iVar1 * 0x10 + *plVar12);
    *piVar10 = local_28;
    piVar10[1] = local_24;
    *(longlong *)(piVar10 + 2) = local_20;
LAB_14073aea1:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar12);
  }
  return;
}



// FUNCTION 14073aec0 FUN_14073aec0 body=123 status=ok
// SIG undefined FUN_14073aec0(void)

void FUN_14073aec0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  
  cVar1 = FUN_142bbd6b0(param_2[1],&DAT_146858c08);
  if (cVar1 != -1) {
    if (*(longlong *)(param_1 + 0xd0) != 0) {
      FUN_142bcad50();
      FUN_140740ab0(param_1,*param_2,cVar1);
      return;
    }
    FUN_142bb5c30(param_2[1],&DAT_146858c08);
  }
  return;
}



// FUNCTION 14073af40 FUN_14073af40 body=126 status=ok
// SIG undefined FUN_14073af40(void)

void FUN_14073af40(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    *(undefined1 *)(*param_2 + 0x600) = 1;
    FUN_142bcad50(param_2[1],&DAT_146858cd0,*(undefined8 *)(param_1 + 0xd0));
    uVar1 = FUN_142bbd6b0(param_2[1],&DAT_146858cd0);
    FUN_140740ab0(param_1,*param_2,uVar1);
    return;
  }
  FUN_142bb5c30(param_2[1],&DAT_146858cd0);
  return;
}



// FUNCTION 14073afc0 FUN_14073afc0 body=198 status=ok
// SIG undefined FUN_14073afc0(void)

void FUN_14073afc0(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  
  if ((*(longlong *)(param_1 + 0xe0) == 0) || (*(longlong *)(param_1 + 0xe8) == 0)) {
    FUN_142bb5c30(param_2[1],&DAT_146858cd8);
    FUN_142bb5c30(param_2[1],&DAT_146858ce0);
  }
  else {
    *(undefined1 *)(*param_2 + 0x600) = 1;
    FUN_142bcad50(param_2[1],&DAT_146858cd8,*(undefined8 *)(param_1 + 0xe0));
    FUN_142bcad50(param_2[1],&DAT_146858ce0,*(undefined8 *)(param_1 + 0xe8));
  }
  uVar1 = FUN_142bbd6b0(param_2[1],&DAT_146858cd8);
  FUN_140740ab0(param_1,*param_2,uVar1);
  uVar1 = FUN_142bbd6b0(param_2[1],&DAT_146858ce0);
  FUN_140740ab0(param_1,*param_2,uVar1);
  return;
}



// FUNCTION 14073b090 FUN_14073b090 body=204 status=ok
// SIG undefined FUN_14073b090(void)

void FUN_14073b090(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  
  cVar1 = FUN_142bbd6b0(param_2[1],&DAT_146858ce8);
  if (cVar1 != -1) {
    if (*(longlong *)(param_1 + 0xe0) == 0) {
      FUN_142bb5c30(param_2[1],&DAT_146858ce8);
      FUN_142bb5c30(param_2[1],&DAT_146858cf0);
    }
    else {
      FUN_142bcad50();
      FUN_140740ab0(param_1,*param_2,cVar1);
      cVar1 = FUN_142bbd6b0(param_2[1],&DAT_146858cf0);
      if (cVar1 != -1) {
        FUN_142bcad50(param_2[1],&DAT_146858cf0,*(undefined8 *)(param_1 + 0xf0));
        FUN_140740ab0(param_1,*param_2,cVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14073b160 FUN_14073b160 body=768 status=ok
// SIG undefined FUN_14073b160(void)

void FUN_14073b160(longlong *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (param_1[0x1d] == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014073b459. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x308))();
    return;
  }
  plVar2 = (longlong *)UBlackboardKeyType_Object::GetPrivateStaticClass();
  if (plVar2 != (longlong *)0x0) {
    plVar3 = (longlong *)UBlackboardKeyType::GetPrivateStaticClass();
    plVar5 = plVar2;
    do {
      if (plVar5 == plVar3) {
        lVar6 = plVar2[0x1f];
        if (lVar6 == 0) {
          (**(code **)(*plVar2 + 0x368))(plVar2);
          lVar6 = plVar2[0x1f];
        }
        FUN_142bb3d50(param_2[1],DAT_146858cf8,lVar6);
        break;
      }
      plVar5 = (longlong *)plVar5[6];
    } while (plVar5 != (longlong *)0x0);
  }
  FUN_142bcad50(param_2[1],&DAT_146858cf8,param_1[0x1d]);
  uVar1 = FUN_142bbd6b0(param_2[1],&DAT_146858cf8);
  FUN_140740ab0(param_1,*param_2,uVar1);
  plVar2 = (longlong *)UBlackboardKeyType_Float::GetPrivateStaticClass();
  if (plVar2 != (longlong *)0x0) {
    plVar3 = (longlong *)UBlackboardKeyType::GetPrivateStaticClass();
    plVar5 = plVar2;
    do {
      if (plVar5 == plVar3) {
        lVar6 = plVar2[0x1f];
        if (lVar6 == 0) {
          (**(code **)(*plVar2 + 0x368))(plVar2);
          lVar6 = plVar2[0x1f];
        }
        FUN_142bb3d50(param_2[1],DAT_146858d00,lVar6);
        break;
      }
      plVar5 = (longlong *)plVar5[6];
    } while (plVar5 != (longlong *)0x0);
  }
  UBlackboardComponent::SetValueAsFloat(param_2[1],&DAT_146858d00,(int)param_1[0x23]);
  uVar1 = FUN_142bbd6b0(param_2[1],&DAT_146858d00);
  FUN_140740ab0(param_1,*param_2,uVar1);
  plVar2 = (longlong *)UBlackboardKeyType_Bool::GetPrivateStaticClass();
  if (plVar2 != (longlong *)0x0) {
    plVar3 = (longlong *)UBlackboardKeyType::GetPrivateStaticClass();
    plVar5 = plVar2;
    do {
      if (plVar5 == plVar3) {
        lVar6 = plVar2[0x1f];
        if (lVar6 == 0) {
          (**(code **)(*plVar2 + 0x368))(plVar2);
          lVar6 = plVar2[0x1f];
        }
        FUN_142bb3d50(param_2[1],DAT_146858d08,lVar6);
        break;
      }
      plVar5 = (longlong *)plVar5[6];
    } while (plVar5 != (longlong *)0x0);
  }
  UBlackboardComponent::SetValueAsBool
            (param_2[1],&DAT_146858d08,*(undefined1 *)((longlong)param_1 + 0x11c));
  uVar1 = FUN_142bbd6b0(param_2[1],&DAT_146858d08);
  FUN_140740ab0(param_1,*param_2,uVar1);
  if (param_1[0x21] != 0) {
    uVar4 = UBlackboardKeyType_Object::GetPrivateStaticClass();
    FUN_14073b8c0(param_1,param_2,&DAT_146858d10,uVar4);
    FUN_142bcad50(param_2[1],&DAT_146858d10,param_1[0x21]);
    uVar1 = FUN_142bbd6b0(param_2[1],&DAT_146858d10);
    FUN_140740ab0(param_1,*param_2,uVar1);
  }
  if (param_1[0x22] != 0) {
    uVar4 = UBlackboardKeyType_Object::GetPrivateStaticClass();
    FUN_14073b8c0(param_1,param_2,&DAT_146858d18,uVar4);
    FUN_142bcad50(param_2[1],&DAT_146858d18,param_1[0x22]);
    uVar1 = FUN_142bbd6b0(param_2[1],&DAT_146858d18);
    FUN_140740ab0(param_1,*param_2,uVar1);
  }
  plVar2 = (longlong *)UBlackboardKeyType_Object::GetPrivateStaticClass();
  if (plVar2 != (longlong *)0x0) {
    plVar3 = (longlong *)UBlackboardKeyType::GetPrivateStaticClass();
    plVar5 = plVar2;
    do {
      if (plVar5 == plVar3) {
        lVar6 = plVar2[0x1f];
        if (lVar6 == 0) {
          (**(code **)(*plVar2 + 0x368))(plVar2);
          lVar6 = plVar2[0x1f];
        }
        FUN_142bb3d50(param_2[1],DAT_146858d20,lVar6);
        return;
      }
      plVar5 = (longlong *)plVar5[6];
    } while (plVar5 != (longlong *)0x0);
  }
  return;
}



// FUNCTION 14073b460 FUN_14073b460 body=687 status=ok
// SIG undefined FUN_14073b460(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14073b460(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_158 [32];
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined4 uStack_110;
  uint uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 local_fc;
  longlong local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  if ((*(longlong *)(param_1 + 0x118) != 0) && (lVar1 = *(longlong *)(*param_2 + 0x5c8), lVar1 != 0)
     ) {
    cVar2 = FUN_142cc5d60(param_1 + 0x138,param_2[1]);
    if (cVar2 != '\0') {
      return;
    }
    local_68 = _DAT_146858bd0 & _DAT_146858be0;
    uStack_64 = uRam0000000146858bd4 & uRam0000000146858be4;
    uStack_60 = uRam0000000146858bd8 & uRam0000000146858be8;
    uStack_5c = uRam0000000146858bdc & uRam0000000146858bec;
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = uRam0000000146858bdc;
    local_78 = 0;
    uStack_70 = 0;
    cVar2 = FUN_1407ef670(*(undefined8 *)(param_1 + 0x118),lVar1,&local_88,0);
    if (cVar2 != '\0') {
      uVar4 = (undefined4)local_78;
      uVar5 = local_78._4_4_;
      uVar3 = (undefined4)uStack_70;
      uStack_110 = (undefined4)uStack_70;
      local_128 = local_78;
      local_120 = (undefined4)uStack_70;
      FUN_142cd0df0(param_1 + 0x128,param_2[1],&local_128);
      cVar2 = FUN_142ccda60(param_1 + 0x128,param_2[1],local_138);
      if (cVar2 != '\0') {
        FUN_140740ab0(param_1,*param_2,local_138[0]);
      }
      if ((*(longlong *)(*param_2 + 0x628) != 0) &&
         (lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x628) + 0x6b8), lVar1 != 0)) {
        FUN_142f89a30(&local_108);
        local_fc = 0x44800000;
        local_108 = uVar4;
        uStack_104 = uVar5;
        local_100 = uVar3;
        local_98 = lVar1;
        cVar2 = FUN_142fae610(&local_108,&local_128,0);
        if (cVar2 != '\0') {
          uVar4 = (undefined4)local_128;
          uVar5 = (undefined4)((ulonglong)local_128 >> 0x20);
          uVar3 = local_120;
        }
      }
      local_128 = CONCAT44(uVar5,uVar4);
      local_120 = uVar3;
      FUN_142cd0df0(param_1 + 0x138,param_2[1],&local_128);
      cVar2 = FUN_142ccda60(param_1 + 0x138,param_2[1],local_138);
      if (cVar2 != '\0') {
        FUN_140740ab0(param_1,*param_2,local_138[0]);
      }
      local_118 = CONCAT44(uStack_84,local_88);
      uStack_110 = uStack_80;
      uStack_10c = uStack_7c;
      FQuat::Rotator(&local_118,&local_128);
      local_118 = local_128;
      uStack_110 = local_120;
      FUN_142cd0b20(param_1 + 0x148,param_2[1],&local_118);
      cVar2 = FUN_142ccda60(param_1 + 0x148,param_2[1],local_138);
      if (cVar2 == '\0') {
        return;
      }
      FUN_140740ab0(param_1,*param_2,local_138[0]);
      return;
    }
  }
  FUN_142cbcc90(param_1 + 0x128,param_2[1]);
  FUN_142cbcc90(param_1 + 0x138,param_2[1]);
  FUN_142cbcc90(param_1 + 0x148,param_2[1]);
  return;
}



// FUNCTION 14073b710 FUN_14073b710 body=123 status=ok
// SIG undefined FUN_14073b710(void)

void FUN_14073b710(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  
  cVar1 = FUN_142bbd6b0(param_2[1],&DAT_146858d48);
  if (cVar1 != -1) {
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      FUN_142bcad50();
      FUN_140740ab0(param_1,*param_2,cVar1);
      return;
    }
    FUN_142bb5c30(param_2[1],&DAT_146858d48);
  }
  return;
}



// FUNCTION 14073b790 FUN_14073b790 body=304 status=ok
// SIG undefined FUN_14073b790(void)

void FUN_14073b790(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  char cVar10;
  undefined1 uVar11;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  cVar9 = FUN_142bbd6b0(param_2[1],&DAT_146858d50);
  if (cVar9 != -1) {
    cVar10 = FUN_140761cd0((undefined4 *)(param_1 + 0x110));
    if (cVar10 != '\0') {
      uVar7 = *(undefined8 *)(param_1 + 0x118);
      uVar8 = *(undefined8 *)(param_1 + 0x120);
      uVar6 = param_2[1];
      uVar1 = *(undefined8 *)(param_1 + 0x128);
      uVar3 = *(undefined4 *)(param_1 + 0x114);
      uVar2 = *(undefined8 *)(param_1 + 0x130);
      uVar4 = *(undefined4 *)(param_1 + 0x110);
      uVar5 = *(undefined4 *)(param_1 + 0x138);
      uVar11 = FUN_142bbd6b0(uVar6);
      local_58 = uVar4;
      local_54 = uVar3;
      local_50 = uVar7;
      uStack_48 = uVar8;
      local_40 = uVar1;
      local_38 = uVar2;
      local_30 = uVar5;
      FUN_140725c40(uVar6,uVar11,&local_58);
      FUN_140740ab0(param_1,*param_2,cVar9);
      return;
    }
    FUN_142bb5c30(param_2[1],&DAT_146858d50);
  }
  return;
}



// FUNCTION 14073b8c0 FUN_14073b8c0 body=126 status=ok
// SIG undefined FUN_14073b8c0(void)

void FUN_14073b8c0(undefined8 param_1,longlong param_2,undefined8 *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_4 != (longlong *)0x0) {
    plVar1 = (longlong *)UBlackboardKeyType::GetPrivateStaticClass();
    plVar2 = param_4;
    while (plVar2 != plVar1) {
      plVar2 = (longlong *)plVar2[6];
      if (plVar2 == (longlong *)0x0) {
        return;
      }
    }
    lVar3 = param_4[0x1f];
    if (lVar3 == 0) {
      (**(code **)(*param_4 + 0x368))(param_4);
      lVar3 = param_4[0x1f];
    }
    FUN_142bb3d50(*(undefined8 *)(param_2 + 8),*param_3,lVar3);
  }
  return;
}



// FUNCTION 14073b940 FUN_14073b940 body=118 status=ok
// SIG undefined FUN_14073b940(void)

bool FUN_14073b940(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x88);
    *(int *)(param_1 + 0x88) = iVar1 + 1;
    if (*(int *)(param_1 + 0x8c) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x80,iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar1 * 8) = param_2;
  }
  FUN_140744ad0(param_1,0);
  return 0 < *(int *)(param_1 + 0x88);
}



// FUNCTION 14073b9c0 FUN_14073b9c0 body=27 status=ok
// SIG undefined FUN_14073b9c0(void)

void FUN_14073b9c0(undefined8 param_1)

{
  UPartyBeaconState::SetTeamAssignmentMethod();
  FUN_1407409d0(param_1);
  return;
}



// FUNCTION 14073b9e0 FUN_14073b9e0 body=72 status=ok
// SIG undefined FUN_14073b9e0(void)

void FUN_14073b9e0(longlong param_1)

{
  longlong lVar1;
  
  UPartyBeaconState::SetTeamAssignmentMethod();
  lVar1 = UBTNode::GetBlackboardAsset(param_1);
  if (lVar1 != 0) {
    FUN_142bc9360(param_1 + 0xa0,lVar1);
    FUN_142bc9360(param_1 + 0x78,lVar1);
  }
  return;
}



// FUNCTION 14073ba30 FUN_14073ba30 body=89 status=ok
// SIG undefined FUN_14073ba30(void)

void FUN_14073ba30(longlong *param_1,undefined8 param_2,longlong param_3)

{
  ushort uVar1;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (param_3 != 0) {
    uVar1 = (**(code **)(*param_1 + 0x298))(param_1);
    _guard_xfg_dispatch_icall_nop((void *)(param_3 + 2),0,(ulonglong)uVar1 - 2);
    *(undefined4 *)(param_3 + 8) = 0xffffffff;
    *(undefined4 *)(param_3 + 4) = 0;
    *(undefined4 *)(param_3 + 0xc) = 0;
    *(int *)(param_3 + 0x10) = (int)param_1[0xc];
  }
  return;
}



// FUNCTION 14073ba90 FUN_14073ba90 body=82 status=ok
// SIG undefined FUN_14073ba90(void)

void FUN_14073ba90(longlong *param_1,undefined8 param_2,void *param_3)

{
  ushort uVar1;
  
  if (param_3 != (void *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x298))();
    _guard_xfg_dispatch_icall_nop(param_3,0,(ulonglong)uVar1);
    FUN_140746760(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 14073baf0 FUN_14073baf0 body=228 status=ok
// SIG undefined FUN_14073baf0(void)

void FUN_14073baf0(longlong *param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_38 [48];
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if ((param_4 == 0) && (param_3 != (undefined8 *)0x0)) {
    *param_3 = 0;
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x2f0))(param_1);
    if ((plVar3 != (longlong *)0x0) && (lVar1 = *(longlong *)(param_2 + 0x188), lVar1 != 0)) {
      lVar4 = ARemnantWeaponMod::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        uVar5 = (**(code **)(*plVar3 + 0x308))(plVar3,8);
        param_3[1] = uVar5;
        uVar5 = FUN_1406dcc80(uVar5);
        *param_3 = uVar5;
        uVar5 = FUN_1406d48b0(local_38,lVar1,uVar5,param_3[1]);
        FUN_1406e7a20(plVar3,uVar5);
      }
    }
  }
  return;
}



// FUNCTION 14073bbe0 FUN_14073bbe0 body=1147 status=ok
// SIG undefined FUN_14073bbe0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14073bbe0(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  undefined1 auStack_498 [32];
  char local_478;
  char local_468 [16];
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined4 local_420;
  undefined4 local_41c;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  longlong local_3e8;
  longlong local_3e0;
  longlong local_3d8;
  undefined1 local_3d0;
  undefined1 local_3cf;
  undefined4 local_3cc;
  undefined1 local_3c8;
  undefined1 local_3c0 [128];
  undefined1 local_340;
  undefined1 local_338 [128];
  longlong local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined1 local_2a0 [4];
  undefined4 local_29c;
  undefined1 local_298 [272];
  longlong local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined1 local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined1 local_e8;
  undefined1 local_e0;
  undefined1 local_d8 [128];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_498;
  cVar1 = *(char *)(param_1 + 0x38);
  if ((((cVar1 != '\x02') && (cVar1 != '\x04')) && (cVar1 != '\x05')) &&
     ((cVar1 != '\x06' && (cVar1 != '\a')))) {
    return;
  }
  if (param_2 == '\0') {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x60);
  if (cVar1 == '\a') {
    local_2b8 = *(longlong *)(lVar2 + 0x1e0);
    local_2b0 = *(undefined8 *)(lVar2 + 0x1e8);
    local_2a8 = *(undefined8 *)(lVar2 + 0x1f0);
    puVar6 = (undefined2 *)(lVar2 + 0x1f8);
    local_2a0[0] = *(undefined1 *)puVar6;
    local_2a0[1] = *(undefined1 *)(lVar2 + 0x1f9);
    local_29c = *(undefined4 *)(lVar2 + 0x1fc);
    local_298[0] = *(undefined1 *)(lVar2 + 0x200);
    FUN_142de2b80(local_298 + 8,lVar2 + 0x208);
    local_298[0x88] = *(undefined1 *)(lVar2 + 0x288);
    plVar7 = &local_2b8;
    puVar5 = local_298 + 0x90;
  }
  else {
    local_188 = *(longlong *)(lVar2 + 0x310);
    local_180 = *(undefined8 *)(lVar2 + 0x318);
    local_178 = *(undefined8 *)(lVar2 + 800);
    puVar6 = (undefined2 *)(lVar2 + 0x328);
    uStack_170 = CONCAT62(uStack_170._2_6_,*puVar6);
    uStack_170 = CONCAT44(*(undefined4 *)(lVar2 + 0x32c),(undefined4)uStack_170);
    local_168 = CONCAT71(local_168._1_7_,*(undefined1 *)(lVar2 + 0x330));
    FUN_142de2b80(&uStack_160,lVar2 + 0x338);
    local_e0 = *(undefined1 *)(lVar2 + 0x3b8);
    plVar7 = &local_188;
    puVar5 = local_d8;
  }
  FUN_142de2b80(puVar5,puVar6 + 0x4c);
  local_3e8 = *plVar7;
  local_3cc = *(undefined4 *)((longlong)plVar7 + 0x1c);
  local_3e0 = plVar7[1];
  local_3d8 = plVar7[2];
  local_3d0 = (undefined1)plVar7[3];
  local_3cf = *(undefined1 *)((longlong)plVar7 + 0x19);
  local_3c8 = (undefined1)plVar7[4];
  FUN_142de2b80(local_3c0,plVar7 + 5);
  local_340 = (undefined1)plVar7[0x15];
  FUN_142de2b80(local_338,plVar7 + 0x16);
  if (local_3e8 == 0) {
    return;
  }
  if (((param_2 == '\x04') && (*(longlong *)(param_1 + 0x58) != 0)) &&
     ((*(longlong *)(param_1 + 0x68) != 0 &&
      ((lVar2 = FUN_142c9fc30(), lVar2 != 0 && (*(char *)(lVar2 + 0x68) != '\0')))))) {
    param_2 = '\x05';
  }
  lVar2 = *(longlong *)(param_1 + 0x78);
  if (*(char *)(param_1 + 0x38) == '\a') {
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar2 = FUN_142c9fd40(*(undefined8 *)(param_1 + 0x68));
      goto LAB_14073be3b;
    }
  }
  else {
LAB_14073be3b:
    if (lVar2 != 0) {
      local_478 = 0;
      puVar3 = (undefined8 *)FUN_142291830(lVar2,&local_58,0,0x7f7fffff);
      goto LAB_14073be92;
    }
  }
  puVar3 = &local_58;
  local_58 = _DAT_1468b5b70;
  uStack_50 = uRam00000001468b5b78;
  local_38 = CONCAT44(uRam00000001468b5b94,_DAT_1468b5b90);
  uStack_30 = CONCAT44(uRam00000001468b5b9c,uRam00000001468b5b98);
  local_48 = _DAT_1468b5b80;
  uStack_40 = uRam00000001468b5b88;
LAB_14073be92:
  local_418 = *puVar3;
  uStack_410 = puVar3[1];
  local_408 = *(undefined4 *)(puVar3 + 2);
  uStack_404 = *(undefined4 *)((longlong)puVar3 + 0x14);
  uStack_400 = *(undefined4 *)(puVar3 + 3);
  uStack_3fc = *(undefined4 *)((longlong)puVar3 + 0x1c);
  local_3f8 = *(undefined4 *)(puVar3 + 4);
  uStack_3f4 = *(undefined4 *)((longlong)puVar3 + 0x24);
  uStack_3f0 = *(undefined4 *)(puVar3 + 5);
  uStack_3ec = *(undefined4 *)((longlong)puVar3 + 0x2c);
  local_478 = param_2;
  FUN_140738830(*(undefined8 *)(param_1 + 0x60),local_468,local_3e8,&local_418);
  if (local_468[0] != '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146858ec8) &&
       (_Init_thread_header(&DAT_146858ec8), DAT_146858ec8 == -1)) {
      FName::FName(&DAT_146858ec0,L"Cover",1);
      _Init_thread_footer(&DAT_146858ec8);
    }
    local_ec = DAT_1468b5d98;
    local_140 = 0x3f800000;
    local_148 = DAT_146858ec0;
    local_128 = _DAT_1468b5b70;
    uStack_120 = uRam00000001468b5b78;
    local_118 = _DAT_1468b5b80;
    uStack_110 = uRam00000001468b5b88;
    local_12c = 0;
    local_108 = _DAT_1468b5b90;
    uStack_104 = uRam00000001468b5b94;
    uStack_100 = uRam00000001468b5b98;
    uStack_fc = uRam00000001468b5b9c;
    local_f8 = 0;
    local_f4 = _DAT_1468b5d90;
    local_188 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x118);
    uVar4 = *(undefined8 *)(param_1 + 0x78);
    if (*(char *)(param_1 + 0x38) == '\a') {
      if (*(longlong *)(param_1 + 0x58) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_142c9fd40(*(undefined8 *)(param_1 + 0x68));
      }
    }
    local_178 = local_458;
    uStack_170 = uStack_450;
    local_158 = local_438;
    uStack_150 = uStack_430;
    local_168 = local_448;
    uStack_160 = uStack_440;
    local_13c = local_41c;
    local_138 = local_428;
    local_130 = local_420;
    local_e8 = 0;
    local_180 = uVar4;
    FUN_142cad7a0(&local_188);
  }
  return;
}



// FUNCTION 14073c060 FUN_14073c060 body=59 status=ok
// SIG undefined FUN_14073c060(void)

void FUN_14073c060(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0xf0,0);
  uVar1 = FUN_140765020(param_2);
  FUN_14072b980(param_1,uVar1);
  return;
}



// FUNCTION 14073c0a0 FUN_14073c0a0 body=284 status=ok
// SIG undefined FUN_14073c0a0(void)

void FUN_14073c0a0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  longlong local_18;
  longlong local_10;
  
  if ((param_1[0x44] != 0) && (param_1[0x45] != 0)) {
    piVar1 = (int *)(param_1[0x45] + 8);
    LOCK();
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      *piVar1 = 0;
      iVar2 = 0;
    }
    UNLOCK();
    if (((0 < iVar2) && (param_1[0x3e] != 0)) && ((char)param_1[0x4d] == '\0')) {
      if (*(char *)((longlong)param_1 + 0x1e3) != '\0') {
        FUN_142dbb5d0(param_1[0x3e] + 0x288,&DAT_146858d98);
      }
      if ((param_1[0x23] != 0) && (*(char *)(param_1[0x23] + 0x128) == '\x03')) {
        *(undefined1 *)((longlong)param_1 + 0x251) = *(undefined1 *)((longlong)param_1 + 0x269);
        *(undefined1 *)(param_1 + 0x4a) = 0;
        (**(code **)(*param_1 + 0x260))(param_1);
      }
      local_10 = param_1[0x45];
      local_18 = 0;
      if (local_10 != 0) {
        LOCK();
        iVar2 = *(int *)(local_10 + 8);
        bVar3 = iVar2 == 0;
        if (bVar3) {
          *(int *)(local_10 + 8) = 0;
          iVar2 = 0;
        }
        UNLOCK();
        while (!bVar3) {
          LOCK();
          bVar3 = iVar2 == *(int *)(local_10 + 8);
          if (bVar3) {
            *(int *)(local_10 + 8) = iVar2 + 1;
          }
          UNLOCK();
          if (bVar3) {
            if (local_10 != 0) {
              local_18 = param_1[0x44];
            }
            goto LAB_14073c1a0;
          }
          LOCK();
          iVar2 = *(int *)(local_10 + 8);
          bVar3 = iVar2 == 0;
          if (bVar3) {
            *(int *)(local_10 + 8) = 0;
            iVar2 = 0;
          }
          UNLOCK();
        }
        local_10 = 0;
      }
LAB_14073c1a0:
      FUN_142c84750(param_1[0x3e],&local_18);
    }
  }
  return;
}



// FUNCTION 14073c1c0 Inverse body=2005 status=ok
// SIG undefined Inverse(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FMatrix::Inverse(float *param_1,float *param_2)

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
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
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
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  
  fVar1 = param_1[2];
  if (((ABS(*param_1) <= 1e-08) && (ABS(param_1[1]) <= 1e-08)) && (ABS(fVar1) <= 1e-08)) {
    if (((ABS(param_1[4]) <= 1e-08) && (ABS(param_1[5]) <= 1e-08)) && (ABS(param_1[6]) <= 1e-08)) {
      if (((ABS(param_1[8]) <= 1e-08) && (ABS(param_1[9]) <= 1e-08)) && (ABS(param_1[10]) <= 1e-08))
      goto LAB_14073c272;
    }
  }
  fVar41 = (float)Determinant();
  if (fVar41 != 0.0) {
    fVar41 = param_1[10];
    fVar2 = param_1[0xe];
    fVar3 = param_1[5];
    fVar4 = param_1[0xf];
    fVar5 = param_1[3];
    fVar56 = param_1[0xb];
    fVar6 = param_1[6];
    fVar7 = param_1[7];
    fVar51 = fVar41 * fVar4 - fVar56 * fVar2;
    fVar53 = fVar6 * fVar4 - fVar7 * fVar2;
    fVar55 = fVar6 * fVar56 - fVar7 * fVar41;
    fVar44 = fVar1 * fVar4 - fVar5 * fVar2;
    fVar2 = param_1[0xd];
    fVar49 = fVar1 * fVar56 - fVar5 * fVar41;
    fVar41 = param_1[9];
    fVar46 = fVar1 * fVar7 - fVar5 * fVar6;
    fVar57 = (fVar3 * fVar51 - fVar41 * fVar53) + fVar2 * fVar55;
    fVar58 = (param_1[1] * fVar51 - fVar41 * fVar44) + fVar2 * fVar49;
    fVar59 = (param_1[1] * fVar53 - fVar3 * fVar44) + fVar2 * fVar46;
    fVar1 = param_1[0xc];
    fVar2 = param_1[4];
    fVar60 = (param_1[1] * fVar55 - fVar3 * fVar49) + fVar41 * fVar46;
    fVar61 = 1.0 / (((*param_1 * fVar57 - fVar2 * fVar58) + param_1[8] * fVar59) - fVar1 * fVar60);
    fVar41 = param_1[8];
    fVar3 = param_1[8];
    fVar6 = *param_1;
    fVar8 = *param_1;
    fVar9 = param_1[4];
    fVar10 = param_1[8];
    fVar11 = param_1[0xd];
    fVar42 = param_1[9] * fVar4 - fVar11 * fVar56;
    fVar12 = param_1[0xc];
    fVar50 = param_1[5] * fVar4 - fVar11 * fVar7;
    fVar52 = param_1[5] * fVar56 - param_1[9] * fVar7;
    fVar13 = param_1[9];
    fVar56 = param_1[1] * fVar56;
    fVar14 = *param_1;
    fVar47 = param_1[1] * fVar4 - fVar11 * fVar5;
    fVar4 = param_1[4];
    fVar11 = param_1[8];
    fVar15 = param_1[4];
    fVar16 = param_1[1];
    fVar17 = param_1[5];
    fVar18 = param_1[8];
    fVar19 = param_1[9];
    fVar20 = param_1[0xd];
    fVar45 = fVar19 * param_1[0xe] - fVar20 * param_1[10];
    fVar21 = param_1[6];
    fVar22 = param_1[10];
    fVar48 = fVar17 * param_1[0xe] - fVar20 * param_1[6];
    fVar23 = param_1[4];
    fVar24 = param_1[8];
    fVar25 = *param_1;
    fVar54 = param_1[1] * param_1[0xe] - param_1[2] * fVar20;
    fVar20 = *param_1;
    fVar43 = param_1[1] * param_1[10] - param_1[2] * fVar19;
    fVar26 = param_1[8];
    fVar27 = param_1[4];
    fVar28 = param_1[0xc];
    fVar29 = param_1[4];
    fVar30 = param_1[1];
    fVar31 = param_1[6];
    fVar32 = param_1[2];
    fVar33 = param_1[5];
    fVar34 = *param_1;
    fVar35 = param_1[0xc];
    fVar36 = param_1[8];
    *param_2 = fVar57 * fVar61;
    param_2[1] = -(fVar58 * fVar61);
    param_2[2] = fVar59 * fVar61;
    param_2[3] = -(fVar60 * fVar61);
    param_2[4] = -(((fVar2 * fVar51 - fVar41 * fVar53) + fVar1 * fVar55) * fVar61);
    param_2[5] = ((fVar6 * fVar51 - fVar3 * fVar44) + fVar1 * fVar49) * fVar61;
    param_2[6] = -(((fVar8 * fVar53 - fVar9 * fVar44) + fVar1 * fVar46) * fVar61);
    param_2[7] = ((fVar8 * fVar55 - fVar9 * fVar49) + fVar10 * fVar46) * fVar61;
    param_2[8] = ((fVar42 * fVar9 - fVar50 * fVar10) + fVar52 * fVar12) * fVar61;
    param_2[9] = ((fVar47 * fVar11 - fVar14 * fVar42) + (fVar13 * fVar5 - fVar56) * fVar12) * fVar61
    ;
    param_2[10] = ((fVar14 * fVar50 - fVar47 * fVar15) + (fVar16 * fVar7 - fVar17 * fVar5) * fVar12)
                  * fVar61;
    param_2[0xb] = (((fVar56 - fVar13 * fVar5) * fVar4 - fVar14 * fVar52) +
                   (fVar17 * fVar5 - fVar16 * fVar7) * fVar18) * fVar61;
    param_2[0xc] = ((fVar48 * fVar24 - fVar45 * fVar23) +
                   (fVar19 * fVar21 - fVar17 * fVar22) * fVar12) * fVar61;
    param_2[0xd] = ((fVar20 * fVar45 - fVar54 * fVar26) + fVar43 * fVar28) * fVar61;
    param_2[0xe] = ((fVar54 * fVar27 - fVar34 * fVar48) +
                   (fVar32 * fVar33 - fVar30 * fVar31) * fVar35) * fVar61;
    param_2[0xf] = (((fVar17 * fVar22 - fVar19 * fVar21) * fVar25 - fVar43 * fVar29) +
                   (fVar30 * fVar31 - fVar32 * fVar33) * fVar36) * fVar61;
    return param_2;
  }
LAB_14073c272:
  uVar39 = _DAT_1464aa7e8;
  uVar38 = _DAT_1464aa7e0;
  uVar37 = _DAT_1464aa7d8;
  *(undefined8 *)param_2 = _DAT_1464aa7d0;
  *(undefined8 *)(param_2 + 2) = uVar37;
  uVar40 = _DAT_1464aa7f8;
  uVar37 = _DAT_1464aa7f0;
  *(undefined8 *)(param_2 + 4) = uVar38;
  *(undefined8 *)(param_2 + 6) = uVar39;
  uVar39 = uRam00000001464aa808;
  uVar38 = _DAT_1464aa800;
  *(undefined8 *)(param_2 + 8) = uVar37;
  *(undefined8 *)(param_2 + 10) = uVar40;
  *(undefined8 *)(param_2 + 0xc) = uVar38;
  *(undefined8 *)(param_2 + 0xe) = uVar39;
  return param_2;
}



// FUNCTION 14073c9a0 FUN_14073c9a0 body=123 status=ok
// SIG undefined FUN_14073c9a0(void)

undefined8 FUN_14073c9a0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x8e0) == 0) {
    return 1;
  }
  lVar1 = 0;
  if (*(longlong *)(param_1 + 0x590) != 0) {
    lVar1 = FUN_14075eaf0();
  }
  lVar3 = lVar1 + 0x48;
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  if (lVar3 == 0) {
    return 0;
  }
  uVar2 = FUN_140761b20(lVar3,*(undefined8 *)(param_1 + 0x8e0),*(undefined8 *)(param_1 + 0x590),0,0)
  ;
  return uVar2;
}



// FUNCTION 14073ca20 FUN_14073ca20 body=11 status=ok
// SIG undefined FUN_14073ca20(void)

bool FUN_14073ca20(longlong param_1)

{
  return *(char *)(param_1 + 0x26a) != '\0';
}



// FUNCTION 14073ca30 FUN_14073ca30 body=8 status=ok
// SIG undefined FUN_14073ca30(void)

undefined1 FUN_14073ca30(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x268);
}



// FUNCTION 14073ca40 FUN_14073ca40 body=259 status=ok
// SIG undefined FUN_14073ca40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14073ca40(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_res10 [8];
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28 [16];
  
  if (param_2 == 0) {
    return 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x5b0);
  lVar3 = *(longlong *)(lVar4 + 0x7538);
  if (*(longlong *)(lVar4 + 0x7538) == 0) {
    lVar3 = lVar4 + 0x338;
  }
  lVar4 = (longlong)*(int *)(lVar4 + 0x7540) * 0x390 + lVar3;
  do {
    if (lVar3 == lVar4) {
      return 0;
    }
    if (*(char *)(lVar3 + 0x380) != '\0') {
      puVar2 = (undefined8 *)FUN_142dcd3a0(lVar3,local_28,local_res10);
      local_38 = *puVar2;
      local_30 = *(undefined4 *)(puVar2 + 1);
      cVar1 = FUN_14073cb50(param_1,param_2,&local_38);
      if (cVar1 != '\0') {
        return 1;
      }
    }
    lVar3 = lVar3 + 0x390;
  } while( true );
}



// FUNCTION 14073cb50 FUN_14073cb50 body=639 status=ok
// SIG undefined FUN_14073cb50(void)

ulonglong FUN_14073cb50(longlong param_1,longlong param_2,float *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  DWORD DVar5;
  ulonglong in_RAX;
  ulonglong uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined1 local_120 [128];
  undefined1 local_a0;
  undefined1 local_98 [128];
  
  lVar3 = DAT_146858df8;
  if (param_2 != 0) {
    cVar4 = FUN_1415ad720();
    if (((cVar4 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar5 = GetCurrentThreadId(), DVar5 != DAT_1468c21c0)) {
      lVar7 = 4;
    }
    else {
      lVar7 = 0;
    }
    fVar11 = *(float *)(param_2 + 0x228);
    lVar2 = *(longlong *)(param_2 + 0x6f0);
    if (lVar2 != 0) {
      if (*(char *)(param_2 + 0x720) == '\0') {
        fVar8 = *(float *)(lVar2 + 0x34);
      }
      else {
        fVar8 = *(float *)(lVar2 + 0x38);
      }
      fVar11 = fVar11 - fVar8 * 0.5;
    }
    fVar9 = param_3[1] - *(float *)(param_2 + 0x224);
    fVar8 = *param_3 - *(float *)(param_2 + 0x220);
    fVar11 = SQRT(fVar9 * fVar9 + fVar8 * fVar8 + (param_3[2] - fVar11) * (param_3[2] - fVar11));
    if (fVar11 < *(float *)(lVar7 + lVar3) || fVar11 == *(float *)(lVar7 + lVar3)) {
      return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
    }
    uVar1 = *(uint *)(param_2 + 0x7b8);
    in_RAX = (ulonglong)uVar1;
    if (((0 < (int)uVar1) && (uVar1 == *(uint *)(param_2 + 0x7c0))) &&
       (in_RAX = (ulonglong)*(uint *)(param_2 + 0x7c4),
       *(uint *)(*(longlong *)(param_2 + 0x7b0) + 8) == *(uint *)(param_2 + 0x7c4))) {
      lVar3 = *(longlong *)(param_1 + 0x310);
      FUN_142de2b80(local_120,param_1 + 0x338);
      local_a0 = *(undefined1 *)(param_1 + 0x3b8);
      FUN_142de2b80(local_98,param_1 + 0x3c0);
      if (param_2 == lVar3) {
        uVar10 = *(undefined4 *)(param_1 + 0x32c);
        FUN_142de2b80(local_120,param_1 + 0x338);
        local_a0 = *(undefined1 *)(param_1 + 0x3b8);
        FUN_142de2b80(local_98,param_1 + 0x3c0);
      }
      else {
        uVar10 = 0x3f800000;
      }
      uVar6 = FUN_14073ab20(param_2 + 0x740,param_3,uVar10);
      return uVar6;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14073cdd0 FUN_14073cdd0 body=92 status=ok
// SIG undefined FUN_14073cdd0(void)

ulonglong FUN_14073cdd0(ulonglong param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  
  if (*(int *)(param_1 + 0x490) != 0) {
    puVar2 = *(ulonglong **)(param_1 + 0x488);
    param_1 = (ulonglong)*(int *)(param_1 + 0x490);
    puVar1 = puVar2 + param_1;
    for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      param_1 = *puVar2;
      if ((((param_1 != 0) && (*(longlong *)(param_1 + 0x6f0) != 0)) &&
          (*(char *)(param_1 + 0x6fa) != '\0')) &&
         ((0 < *(int *)(param_1 + 0x708) && (*(char *)(param_1 + 0x6f8) != '\0')))) {
        return CONCAT71((int7)(param_1 >> 8),1);
      }
    }
  }
  return param_1 & 0xffffffffffffff00;
}



// FUNCTION 14073ce30 FUN_14073ce30 body=43 status=ok
// SIG undefined FUN_14073ce30(void)

undefined1 FUN_14073ce30(longlong param_1)

{
  if ((((*(longlong *)(param_1 + 0x6f0) != 0) && (*(char *)(param_1 + 0x6fa) != '\0')) &&
      (0 < *(int *)(param_1 + 0x708))) && (*(char *)(param_1 + 0x6f8) != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 14073ce60 FUN_14073ce60 body=150 status=ok
// SIG undefined FUN_14073ce60(void)

undefined8 FUN_14073ce60(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  if (((0 < *(int *)(param_1 + 0x7b8)) && (*(int *)(param_1 + 0x7b8) == *(int *)(param_1 + 0x7c0)))
     && (*(int *)(*(longlong *)(param_1 + 0x7b0) + 8) == *(int *)(param_1 + 0x7c4))) {
    lVar3 = *param_2;
    lVar1 = lVar3 + (longlong)(int)param_2[1] * 0xc;
    for (; lVar3 != lVar1; lVar3 = lVar3 + 0xc) {
      cVar2 = FUN_14073ab20(param_1 + 0x740,lVar3,0x3f800000);
      if (cVar2 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14073cf00 IsPostLoadThreadSafe body=27 status=ok
// SIG undefined IsPostLoadThreadSafe(void)

bool USceneComponent::IsPostLoadThreadSafe(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar2 = USoundNodeEnveloper::StaticClass();
  return lVar1 == lVar2;
}



// FUNCTION 14073cf20 IsPostLoadThreadSafe body=27 status=ok
// SIG undefined IsPostLoadThreadSafe(void)

bool USceneComponent::IsPostLoadThreadSafe(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar2 = FUN_14078b2d0();
  return lVar1 == lVar2;
}



// FUNCTION 14073cf40 FUN_14073cf40 body=45 status=ok
// SIG undefined FUN_14073cf40(void)

undefined1 FUN_14073cf40(longlong param_1)

{
  if (((*(longlong *)(param_1 + 0x310) != 0) && (*(longlong *)(param_1 + 0x318) != 0)) &&
     ((*(longlong *)(param_1 + 800) != 0 || (*(char *)(param_1 + 0x328) == '\0')))) {
    return 1;
  }
  return 0;
}



// FUNCTION 14073cf70 FUN_14073cf70 body=204 status=ok
// SIG undefined FUN_14073cf70(void)

bool FUN_14073cf70(longlong param_1,longlong param_2)

{
  longlong lVar1;
  float fVar2;
  float local_38;
  float local_34;
  float local_30;
  float local_28;
  float fStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x5a0) != 0)) {
    lVar1 = *(longlong *)(param_2 + 0x6f0);
    local_28 = *(float *)(param_2 + 0x220);
    fStack_24 = *(float *)(param_2 + 0x224);
    fStack_20 = *(float *)(param_2 + 0x228);
    uStack_1c = *(undefined4 *)(param_2 + 0x22c);
    fVar2 = fStack_20;
    if (lVar1 != 0) {
      if (*(char *)(param_2 + 0x720) == '\0') {
        fVar2 = *(float *)(lVar1 + 0x34);
      }
      else {
        fVar2 = *(float *)(lVar1 + 0x38);
      }
      fVar2 = fStack_20 - fVar2 * 0.5;
    }
    FUN_142fa2d40(*(longlong *)(param_1 + 0x5a0) + 0x6e8,&local_38);
    return (local_28 - local_38) * (local_28 - local_38) +
           (fStack_24 - local_34) * (fStack_24 - local_34) + (fVar2 - local_30) * (fVar2 - local_30)
           <= *(float *)(param_1 + 0x8fc) * *(float *)(param_1 + 0x8fc);
  }
  return false;
}



// FUNCTION 14073d040 FUN_14073d040 body=41 status=ok
// SIG undefined FUN_14073d040(void)

ulonglong FUN_14073d040(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  ulonglong in_RAX;
  
  if ((*(longlong *)(param_1 + 0x220) != 0) && (*(longlong *)(param_1 + 0x228) != 0)) {
    in_RAX = 0;
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x228) + 8);
    LOCK();
    uVar2 = *puVar1;
    if (uVar2 == 0) {
      *puVar1 = 0;
    }
    else {
      in_RAX = (ulonglong)uVar2;
    }
    UNLOCK();
    if (0 < (int)in_RAX) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14073d080 FUN_14073d080 body=387 status=ok
// SIG undefined FUN_14073d080(void)

longlong FUN_14073d080(longlong param_1)

{
  longlong lVar1;
  uint7 uVar2;
  undefined1 local_240 [128];
  undefined1 local_1c0;
  undefined1 local_1b8 [128];
  longlong local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_120;
  undefined1 local_11f;
  undefined4 local_11c;
  undefined1 local_118;
  undefined1 local_110 [128];
  undefined1 local_90;
  undefined1 local_88 [128];
  
  lVar1 = *(longlong *)(param_1 + 0x310);
  FUN_142de2b80(local_240,param_1 + 0x338);
  local_1c0 = *(undefined1 *)(param_1 + 0x3b8);
  FUN_142de2b80(local_1b8,param_1 + 0x3c0);
  local_138 = lVar1;
  if ((lVar1 == 0) && (local_138 = *(longlong *)(param_1 + 0x440), local_138 == 0)) {
    local_138 = *(longlong *)(param_1 + 0x1e0);
    local_11c = *(undefined4 *)(param_1 + 0x1fc);
    local_130 = *(undefined8 *)(param_1 + 0x1e8);
    local_128 = *(undefined8 *)(param_1 + 0x1f0);
    local_120 = *(undefined1 *)(param_1 + 0x1f8);
    local_11f = *(undefined1 *)(param_1 + 0x1f9);
    local_118 = *(undefined1 *)(param_1 + 0x200);
    FUN_142de2b80(local_110,param_1 + 0x208);
    local_90 = *(undefined1 *)(param_1 + 0x288);
    FUN_142de2b80(local_88,param_1 + 0x290);
    lVar1 = 0;
    if (local_138 == 0) goto LAB_14073d1e2;
  }
  lVar1 = *(longlong *)(local_138 + 0x6f0);
LAB_14073d1e2:
  uVar2 = (uint7)((ulonglong)lVar1 >> 8);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x3c) != '\0')) {
    return CONCAT71(uVar2,1);
  }
  return (ulonglong)uVar2 << 8;
}



// FUNCTION 14073d210 FUN_14073d210 body=32 status=ok
// SIG undefined FUN_14073d210(void)

undefined1 FUN_14073d210(longlong *param_1)

{
  if (((*param_1 != 0) && (param_1[1] != 0)) && ((param_1[2] != 0 || ((char)param_1[3] == '\0')))) {
    return 1;
  }
  return 0;
}



// FUNCTION 14073d230 FUN_14073d230 body=94 status=ok
// SIG undefined FUN_14073d230(void)

undefined8 FUN_14073d230(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  uint7 uVar4;
  
  lVar2 = FUN_142bbf6c0(*(undefined8 *)(param_2 + 8),&DAT_146858c08);
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = ACameraActor::GetPrivateStaticClass();
    uVar4 = (uint7)((ulonglong)(lVar3 + 0x88) >> 8);
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      lVar3 = (ulonglong)uVar4 << 8;
      bVar1 = false;
    }
    else {
      lVar3 = CONCAT71(uVar4,1);
      bVar1 = true;
    }
    if (bVar1) goto LAB_14073d282;
  }
  lVar2 = 0;
LAB_14073d282:
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),lVar2 != 0);
}



// FUNCTION 14073d290 FUN_14073d290 body=94 status=ok
// SIG undefined FUN_14073d290(void)

undefined8 FUN_14073d290(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  uint7 uVar4;
  
  lVar2 = FUN_142bbf6c0(*(undefined8 *)(param_2 + 8),&DAT_146858cd0);
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = FUN_1428dfc70();
    uVar4 = (uint7)((ulonglong)(lVar3 + 0x88) >> 8);
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      lVar3 = (ulonglong)uVar4 << 8;
      bVar1 = false;
    }
    else {
      lVar3 = CONCAT71(uVar4,1);
      bVar1 = true;
    }
    if (bVar1) goto LAB_14073d2e2;
  }
  lVar2 = 0;
LAB_14073d2e2:
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),lVar2 != 0);
}



// FUNCTION 14073d2f0 FUN_14073d2f0 body=206 status=ok
// SIG undefined FUN_14073d2f0(void)

longlong FUN_14073d2f0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint7 uVar5;
  
  lVar2 = FUN_142bbf6c0(*(undefined8 *)(param_2 + 8),&DAT_146858cd8);
  if (lVar2 == 0) {
LAB_14073d34c:
    lVar2 = 0;
  }
  else {
    lVar3 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_14073d34c;
  }
  lVar4 = FUN_142bbf6c0(*(undefined8 *)(param_2 + 8),&DAT_146858ce0);
  lVar3 = 0;
  if (lVar4 != 0) {
    lVar3 = FUN_1428dfc70();
    uVar5 = (uint7)((ulonglong)(lVar3 + 0x88) >> 8);
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      lVar3 = (ulonglong)uVar5 << 8;
      bVar1 = false;
    }
    else {
      lVar3 = CONCAT71(uVar5,1);
      bVar1 = true;
    }
    if (bVar1) goto LAB_14073d39a;
  }
  lVar4 = 0;
LAB_14073d39a:
  uVar5 = (uint7)((ulonglong)lVar3 >> 8);
  if ((lVar2 != 0) && (lVar4 != 0)) {
    return CONCAT71(uVar5,1);
  }
  return (ulonglong)uVar5 << 8;
}



// FUNCTION 14073d3c0 FUN_14073d3c0 body=94 status=ok
// SIG undefined FUN_14073d3c0(void)

undefined8 FUN_14073d3c0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  uint7 uVar4;
  
  lVar2 = FUN_142bbf6c0(*(undefined8 *)(param_2 + 8),&DAT_146858ce8);
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = FUN_1428dfc70();
    uVar4 = (uint7)((ulonglong)(lVar3 + 0x88) >> 8);
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      lVar3 = (ulonglong)uVar4 << 8;
      bVar1 = false;
    }
    else {
      lVar3 = CONCAT71(uVar4,1);
      bVar1 = true;
    }
    if (bVar1) goto LAB_14073d412;
  }
  lVar2 = 0;
LAB_14073d412:
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),lVar2 != 0);
}



// FUNCTION 14073d420 FUN_14073d420 body=94 status=ok
// SIG undefined FUN_14073d420(void)

undefined8 FUN_14073d420(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  uint7 uVar4;
  
  lVar2 = FUN_142bbf6c0(*(undefined8 *)(param_2 + 8),&DAT_146858cf8);
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = UGNewsMenuItem::GetPrivateStaticClass();
    uVar4 = (uint7)((ulonglong)(lVar3 + 0x88) >> 8);
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      lVar3 = (ulonglong)uVar4 << 8;
      bVar1 = false;
    }
    else {
      lVar3 = CONCAT71(uVar4,1);
      bVar1 = true;
    }
    if (bVar1) goto LAB_14073d472;
  }
  lVar2 = 0;
LAB_14073d472:
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),lVar2 != 0);
}



// FUNCTION 14073d490 FUN_14073d490 body=94 status=ok
// SIG undefined FUN_14073d490(void)

undefined8 FUN_14073d490(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  uint7 uVar4;
  
  lVar2 = FUN_142bbf6c0(*(undefined8 *)(param_2 + 8),&DAT_146858d48);
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = FUN_1428dfc70();
    uVar4 = (uint7)((ulonglong)(lVar3 + 0x88) >> 8);
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      lVar3 = (ulonglong)uVar4 << 8;
      bVar1 = false;
    }
    else {
      lVar3 = CONCAT71(uVar4,1);
      bVar1 = true;
    }
    if (bVar1) goto LAB_14073d4e2;
  }
  lVar2 = 0;
LAB_14073d4e2:
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),lVar2 != 0);
}



// FUNCTION 14073d500 FUN_14073d500 body=333 status=ok
// SIG undefined FUN_14073d500(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14073d500(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 local_28;
  float local_20;
  float local_18;
  float local_14;
  float local_10;
  
  lVar1 = *(longlong *)(param_1 + 0xd8);
  lVar2 = param_2[1];
  plVar5 = (longlong *)FUN_142dd0030(param_3);
  if (plVar5 == (longlong *)0x0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x378) != '\0') {
    (**(code **)(*(longlong *)(*param_2 + 0x458) + 0x18))((longlong *)(*param_2 + 0x458),&local_18);
    lVar3 = plVar5[0x2d];
    if (lVar3 == 0) {
      local_28 = _DAT_1468b5d90;
      local_20 = DAT_1468b5d98;
    }
    else {
      local_28 = *(undefined8 *)(lVar3 + 0x220);
      local_20 = *(float *)(lVar3 + 0x228);
    }
    local_18 = local_18 - (float)local_28;
    local_14 = local_14 - (float)((ulonglong)local_28 >> 0x20);
    cVar4 = FUN_142c4a520(lVar1 + lVar2 + 0xf0,
                          SQRT(local_14 * local_14 + local_18 * local_18 +
                               (local_10 - local_20) * (local_10 - local_20)));
    if (cVar4 == '\0') {
      return 0;
    }
  }
  if (*(char *)(param_1 + 0x379) != '\0') {
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x688))(plVar5);
    if (plVar5 == (longlong *)0x0) {
      return 0;
    }
    cVar4 = (**(code **)(*plVar5 + 0x780))(plVar5);
    if (cVar4 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 14073d650 FUN_14073d650 body=112 status=ok
// SIG undefined FUN_14073d650(void)

void FUN_14073d650(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x5c0) != 0) {
    FUN_142dafbc0(*(longlong *)(param_1 + 0x5c0) + 0x8b0,&DAT_146858de0);
    FUN_142dafbc0(*(longlong *)(param_1 + 0x5c0) + 0x948,&DAT_146858de0);
    if (*(char *)(param_1 + 0x63c) != '\0') {
      FUN_142dafbc0(*(longlong *)(param_1 + 0x5c0) + 0x14f0,&DAT_146858de0);
      return;
    }
  }
  return;
}



// FUNCTION 14073d6c0 FUN_14073d6c0 body=146 status=ok
// SIG undefined FUN_14073d6c0(void)

undefined8 * FUN_14073d6c0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  while( true ) {
    if (param_2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    plVar1 = (longlong *)param_2[2];
    uVar2 = *(uint *)((longlong)plVar1 + 0xc);
    if ((int)uVar2 < (int)DAT_1469e91c4) {
      uVar4 = uVar2 & 0xffff;
      if ((int)uVar2 < 0) {
        uVar2 = uVar2 + 0xffff;
        uVar4 = uVar4 - 0x10000;
      }
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)uVar4 * 0x18;
    }
    else {
      lVar3 = 0;
    }
    if (((*(uint *)(lVar3 + 8) & 0x30000000) == 0) &&
       (lVar3 = (**(code **)(*plVar1 + 0x148))(plVar1), lVar3 == *param_1)) break;
    param_2 = (undefined8 *)*param_2;
  }
  return param_2;
}



// FUNCTION 14073d760 FUN_14073d760 body=154 status=ok
// SIG undefined FUN_14073d760(void)

undefined8 * FUN_14073d760(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  do {
    if (param_2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    lVar1 = param_2[2];
    uVar2 = *(uint *)(lVar1 + 0xc);
    if ((int)uVar2 < (int)DAT_1469e91c4) {
      uVar4 = uVar2 & 0xffff;
      if ((int)uVar2 < 0) {
        uVar2 = uVar2 + 0xffff;
        uVar4 = uVar4 - 0x10000;
      }
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)uVar4 * 0x18;
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) & 0x30000000) == 0) {
      lVar3 = *(longlong *)(lVar1 + 0x120);
      if (lVar3 == 0) {
        lVar3 = FUN_1423407b0(lVar1);
      }
      if (lVar3 == *param_1) {
        return param_2;
      }
    }
    param_2 = (undefined8 *)*param_2;
  } while( true );
}



// FUNCTION 14073d800 FUN_14073d800 body=48 status=ok
// SIG undefined FUN_14073d800(void)

void FUN_14073d800(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  UAnimNotify::Notify();
  lVar1 = FUN_140765170(param_2);
  if (lVar1 != 0) {
    FUN_140763a30(lVar1,0);
    return;
  }
  return;
}



// FUNCTION 14073d830 FUN_14073d830 body=96 status=ok
// SIG undefined FUN_14073d830(void)

void FUN_14073d830(long param_1,undefined8 param_2,longlong param_3,int param_4,int *param_5)

{
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  if ((param_3 != 0) && (*param_5 == 0)) {
    if (*(int *)(param_3 + 8) == param_4) {
      *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
      return;
    }
    *(undefined4 *)(param_3 + 4) = 1;
    *(int *)(param_3 + 8) = param_4;
  }
  return;
}



// FUNCTION 14073d890 FUN_14073d890 body=130 status=ok
// SIG undefined FUN_14073d890(void)

void FUN_14073d890(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar1 = *param_2;
  lVar3 = (ulonglong)*(ushort *)(lVar1 + 800) * 0x60;
  lVar2 = (ulonglong)*(ushort *)(param_1 + 0x52) +
          *(longlong *)(lVar3 + 0x38 + *(longlong *)(lVar1 + 0x1d8));
  if (lVar2 != 0) {
    if (*(int *)(lVar1 + 0x1e0) != 0) {
      for (lVar1 = *(longlong *)(lVar3 + 8 + *(longlong *)(lVar1 + 0x1d8)); lVar1 != 0;
          lVar1 = *(longlong *)(lVar1 + 0x48)) {
        if (lVar1 == param_1) goto LAB_14073d8fc;
      }
    }
    *(undefined4 *)(lVar2 + 8) = 0xffffffff;
    *(undefined4 *)(lVar2 + 4) = 0;
LAB_14073d8fc:
    FUN_1407407d0(param_1,lVar2,*param_2);
  }
  return;
}



// FUNCTION 14073d920 FUN_14073d920 body=706 status=ok
// SIG undefined FUN_14073d920(void)

void FUN_14073d920(longlong *param_1,longlong param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_28;
  undefined8 local_20;
  longlong local_18 [2];
  
  if ((param_2 != 0) && (lVar5 = *param_3, *(longlong *)(lVar5 + 0x568) != 0)) {
    plVar1 = (longlong *)param_1[0x10];
    for (plVar4 = plVar1; plVar4 != plVar1 + (int)param_1[0x11]; plVar4 = plVar4 + 1) {
      if (*plVar4 == lVar5) {
        if (((int)((longlong)plVar4 - (longlong)plVar1 >> 3) != -1) && ((int)param_1[0xd] == 0)) {
          if ((*(longlong *)(lVar5 + 0x608) != 0) &&
             (cVar2 = FUN_1407c3030(*(longlong *)(lVar5 + 0x608) + 0x430), cVar2 != '\0')) {
            return;
          }
          if ((param_1[0x14] != param_2) && (param_1[0x14] != 0)) {
            if (param_4 != '\x03') {
              return;
            }
            plVar4 = (longlong *)param_1[0x12];
            plVar1 = plVar4 + (int)param_1[0x13];
            while( true ) {
              if (plVar4 == plVar1) {
                return;
              }
              if (*plVar4 == *param_3) break;
              plVar4 = plVar4 + 1;
            }
            FUN_140732b30(param_2,param_3);
            FUN_140732b30(param_1[0x14],param_3);
            FUN_14072b980(param_1,*param_3);
            return;
          }
          local_28 = *param_3;
          local_20 = *(undefined8 *)(local_28 + 0x568);
          if (param_4 == '\0') {
            if (*(int *)(*(longlong *)(param_2 + 0xd8) + 0x2c + param_3[1]) == 1) {
              *(undefined1 *)((longlong)param_1 + 0x7d) = 1;
              (**(code **)(*param_1 + 0x300))(param_1,&local_28);
              *(undefined1 *)((longlong)param_1 + 0x7d) = 0;
            }
            *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
            return;
          }
          if (param_4 == '\x02') {
            cVar2 = *(char *)(*(longlong *)(param_2 + 0xd8) + 0x29 + param_3[1]);
            if ((cVar2 == '\x02') && (*(char *)(param_2 + 0xd3) != '\0')) {
              cVar2 = '\x01';
            }
            (**(code **)(*param_1 + 0x2e0))(param_1,&local_28,cVar2 != '\x01');
            return;
          }
          if (param_4 == '\x03') {
            lVar5 = *(longlong *)(param_2 + 0xd8) + param_3[1];
            cVar2 = *(char *)(lVar5 + 0x29);
            if (cVar2 == '\x02') {
              if (*(char *)(param_2 + 0xd3) == '\0') goto LAB_14073dafd;
            }
            else if (cVar2 != '\x01') {
              if (cVar2 == '\x03') {
                plVar4 = (longlong *)param_1[0x12];
                plVar1 = plVar4 + (int)param_1[0x13];
                while( true ) {
                  if (plVar4 == plVar1) {
                    return;
                  }
                  if (*plVar4 == local_28) break;
                  plVar4 = plVar4 + 1;
                }
              }
LAB_14073dafd:
              FUN_140732b30(param_2,param_3);
              FUN_14072b980(param_1,local_28);
              return;
            }
            plVar1 = (longlong *)(lVar5 + 8);
            if (((local_18 != plVar1) && (*(int *)(lVar5 + 0x10) != 0)) &&
               (plVar4 = (longlong *)*plVar1, plVar4 != (longlong *)0x0)) {
              (**(code **)(*plVar4 + 0x28))(plVar4,0);
              if (*plVar1 != 0) {
                lVar3 = FMemory::Realloc(*plVar1,0,0);
                *plVar1 = lVar3;
              }
              *(undefined4 *)(lVar5 + 0x10) = 0;
            }
            FUN_140744d20(param_1,*param_3);
            return;
          }
          if (param_4 != '\x04') {
            return;
          }
          cVar2 = (**(code **)(*param_1 + 0x310))(param_1,&local_28);
          if (cVar2 != '\0') {
            FUN_14072b980(param_1,local_28);
          }
        }
        break;
      }
    }
    FUN_140732b30(param_2,param_3);
  }
  return;
}



// FUNCTION 14073dc00 FUN_14073dc00 body=14 status=ok
// SIG undefined FUN_14073dc00(void)

void FUN_14073dc00(longlong param_1)

{
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0xc0,0);
  return;
}



// FUNCTION 14073dc30 FUN_14073dc30 body=96 status=ok
// SIG undefined FUN_14073dc30(void)

void FUN_14073dc30(longlong *param_1,char param_2)

{
  longlong lVar1;
  char *pcVar2;
  longlong *plVar3;
  
  if (DAT_1468c217e == '\0') {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if (lVar1 != 0) {
      pcVar2 = (char *)FUN_14288cc20(DAT_146b17150,lVar1);
      if (*pcVar2 == '\0') {
        plVar3 = param_1 + 0x1a;
        if (param_2 != '\0') {
          plVar3 = param_1 + 0x18;
        }
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(plVar3,0);
      }
    }
  }
  return;
}



// FUNCTION 14073dc90 FUN_14073dc90 body=59 status=ok
// SIG undefined FUN_14073dc90(void)

void FUN_14073dc90(longlong param_1,char param_2)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = *(undefined8 *)(param_1 + 0xe0);
  if (param_2 == '\0') {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0xd0,local_res18);
    return;
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0xc0,local_res18);
  return;
}



// FUNCTION 14073dcd0 FUN_14073dcd0 body=304 status=ok
// SIG undefined FUN_14073dcd0(void)

void FUN_14073dcd0(longlong param_1,char param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  undefined8 local_res8;
  
  if ((*(char *)(param_1 + 0x120) != '\0') && (*(longlong *)(param_1 + 0x118) != 0)) {
    pwVar3 = _guard_xfg_dispatch_icall_nop
                       (L"&UGameplayTask_ScriptedMoveToLevelSequence::OnLevelSequenceFinished",L"::"
                       );
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res8,pwVar2 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(param_1 + 0x118) + 0x570,param_1,local_res8);
    pwVar3 = _guard_xfg_dispatch_icall_nop
                       (L"&UGameplayTask_ScriptedMoveToLevelSequence::OnLevelSequenceStopped",L"::")
    ;
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res8,pwVar2 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(param_1 + 0x118) + 0x580,param_1,local_res8);
  }
  lVar4 = 0xf0;
  if (param_2 != '\0') {
    lVar4 = 0x100;
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar4 + param_1,0);
  return;
}



// FUNCTION 14073de00 FUN_14073de00 body=130 status=ok
// SIG undefined FUN_14073de00(void)

void FUN_14073de00(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_140765020(param_3);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x568) != 0)) {
    iVar1 = *(int *)(param_1 + 0x88);
    *(int *)(param_1 + 0x88) = iVar1 + 1;
    if (*(int *)(param_1 + 0x8c) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x80,iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar1 * 8) = lVar2;
    FUN_140744630(param_1,lVar2);
  }
  return;
}



// FUNCTION 14073dee0 FUN_14073dee0 body=273 status=ok
// SIG undefined FUN_14073dee0(void)

undefined8 FUN_14073dee0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 local_18 [2];
  
  if ((*(char *)((longlong)param_1 + 0x7d) == '\0') &&
     (lVar1 = *(longlong *)(param_2 + 0x118), lVar1 != 0)) {
    lVar4 = ARemnantWeaponMod::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (lVar1 = *(longlong *)(lVar1 + 0x608), lVar1 != 0)) {
      if (*(longlong **)(((ulonglong)*(byte *)(lVar1 + 0x330) + 0xf) * 0x30 + lVar1) == param_1) {
        if (*(char *)((longlong)param_1 + 0x7c) != '\0') {
          FUN_1407333e0(local_18,param_2);
          cVar3 = (**(code **)(*param_1 + 0x310))(param_1,local_18);
          if (cVar3 == '\0') {
            FUN_140744d20(param_1,local_18[0]);
            return 1;
          }
        }
      }
      else {
        *(undefined1 *)((longlong)param_1 + 0x7d) = 1;
        FUN_1407333e0(local_18,param_2);
        (**(code **)(*param_1 + 0x300))(param_1,local_18);
        *(undefined1 *)((longlong)param_1 + 0x7d) = 0;
      }
    }
  }
  return 1;
}



// FUNCTION 14073e000 FUN_14073e000 body=175 status=ok
// SIG undefined FUN_14073e000(void)

undefined8 FUN_14073e000(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_1426e2440(param_2);
  if (lVar3 != 0) {
    lVar4 = UProgressBar::GetPrivateStaticClass();
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
      uVar2 = FUN_142bbb940(lVar3,param_1);
      uVar5 = FUN_142bbe120(lVar3,param_1,uVar2);
      FUN_140746950(param_1,lVar3,uVar5);
      FUN_140743ed0(param_1,lVar3,uVar5);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14073e0b0 FUN_14073e0b0 body=496 status=ok
// SIG undefined FUN_14073e0b0(void)

undefined8 FUN_14073e0b0(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int *piVar9;
  longlong lVar10;
  
  lVar5 = FUN_1426e2440(param_2);
  if (lVar5 != 0) {
    lVar6 = UProgressBar::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) &&
       (plVar7 = (longlong *)FUN_140725690(param_2,*(undefined1 *)(param_1 + 0x90)),
       plVar7 != (longlong *)0x0)) {
      lVar6 = FUN_1428dfc70();
      if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        uVar8 = AUGWeapon_Hook::GetPrivateStaticClass();
        lVar6 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar8);
        if (lVar6 != 0) {
          uVar3 = FUN_142bbb940(lVar5,param_1);
          piVar9 = (int *)FUN_142bbe120(lVar5,param_1,uVar3);
          if (*(longlong *)(piVar9 + 0xe) != lVar6) {
            uVar8 = 0;
            piVar9[0xc] = 0;
            piVar9[0xd] = 0;
            *(longlong *)(piVar9 + 0xe) = lVar6;
            if (((*(byte *)(piVar9 + 9) & 1) == 0) &&
               (lVar6 = *(longlong *)(lVar5 + 0x188), lVar6 != 0)) {
              lVar10 = ARemnantWeaponMod::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (bVar1) {
                uVar8 = *(undefined8 *)(lVar6 + 0x628);
              }
              if (*piVar9 != -1) {
                FUN_142bcb970(param_1,lVar5);
                FUN_142f97d20(uVar8,*piVar9);
              }
              if (((*(uint *)(param_1 + 0xac) & 0x400) == 0) &&
                 (cVar2 = (**(code **)(*(longlong *)(*(longlong *)(lVar5 + 0x188) + 0x458) + 0x40))
                                    (), cVar2 != '\0')) {
                *(byte *)(piVar9 + 9) = *(byte *)(piVar9 + 9) | 1;
                return 1;
              }
              iVar4 = FUN_142bec5e0(param_1,lVar5,piVar9);
              if (iVar4 != 3) {
                UBTTaskNode::FinishLatentTask(param_1,lVar5,iVar4);
              }
            }
          }
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14073e2a0 FUN_14073e2a0 body=172 status=ok
// SIG undefined FUN_14073e2a0(void)

void FUN_14073e2a0(longlong param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 local_18 [2];
  
  if ((undefined8 *)(param_1 + 0x220) != local_18) {
    *(undefined8 *)(param_1 + 0x220) = 0;
    plVar3 = *(longlong **)(param_1 + 0x228);
    *(undefined8 *)(param_1 + 0x228) = 0;
    if (plVar3 != (longlong *)0x0) {
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
  if (param_2 == '\x01') {
    lVar4 = *(longlong *)(param_1 + 0x120);
    if ((lVar4 == 0) && (lVar4 = FUN_1423407b0(param_1), lVar4 == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(lVar4 + 0x790);
    }
    *(undefined4 *)(param_1 + 0x26c) = uVar5;
    if (*(char *)(param_1 + 0x1e0) != '\0') {
      *(undefined1 *)(param_1 + 0x268) = 1;
      FUN_140733cd0(param_1);
      FUN_1407347f0(param_1);
    }
    return;
  }
  return;
}



// FUNCTION 14073e350 FUN_14073e350 body=218 status=ok
// SIG undefined FUN_14073e350(void)

void FUN_14073e350(longlong *param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  
  bVar5 = (int)param_1[0xd] != 1;
  iVar1 = (int)param_1[0x11] + -1;
  lVar4 = (longlong)iVar1;
  if (-1 < iVar1) {
    do {
      FUN_140744b60(param_1,*(undefined8 *)(param_1[0x10] + lVar4 * 8),bVar5);
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  lVar4 = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x8c)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x10,0);
  }
  (**(code **)(*param_1 + 0x2f8))(param_1,bVar5);
  if (*(char *)((longlong)param_1 + 0x39) != '\x04') {
    iVar1 = *(int *)((longlong)param_1 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar3 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar3;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar3) * 0x18;
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
      FUN_142b7a710(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 14073e430 FUN_14073e430 body=302 status=ok
// SIG undefined FUN_14073e430(void)

void FUN_14073e430(longlong param_1)

{
  undefined1 uVar1;
  char cVar2;
  longlong lVar3;
  BOOL BVar4;
  undefined8 uVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x60);
  if (lVar3 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x68) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x70) == 0) {
    return;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x178) == 0) {
    return;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x38);
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x1b8));
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x1b8));
  }
  *(undefined1 *)(lVar3 + 0x1b1) = uVar1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x1b8));
  switch(*(undefined1 *)(param_1 + 0x38)) {
  case 1:
  case 5:
switchD_14073e4d8_caseD_1:
    uVar5 = 0x140000001;
    break;
  case 2:
    uVar5 = 0x140000003;
    break;
  case 3:
  case 4:
  case 6:
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x318);
    if (lVar3 == 0) goto switchD_14073e4d8_caseD_1;
    uVar5 = CONCAT71(0x1400000,(*(char *)(lVar3 + 0x30) == '\0') + '\x01');
    break;
  case 7:
    FUN_142cab640(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x58),
                  *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x578));
    uVar5 = 4;
    break;
  default:
    goto switchD_14073e4d8_default;
  }
  FUN_14073bbe0(param_1,uVar5);
switchD_14073e4d8_default:
  cVar2 = *(char *)(param_1 + 0x38);
  if ((((cVar2 == '\x02') || (cVar2 == '\x04')) || (cVar2 == '\x05')) ||
     ((cVar2 == '\x06' || (cVar2 == '\a')))) {
    FUN_142cf49e0(*(longlong *)(param_1 + 0x70) + 0x2580,*(undefined4 *)(param_1 + 0x30),
                  *(undefined4 *)(param_1 + 0x34));
  }
  return;
}



// FUNCTION 14073e580 FUN_14073e580 body=348 status=ok
// SIG undefined FUN_14073e580(void)

void FUN_14073e580(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  BOOL BVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x60);
  if ((((lVar2 != 0) && (*(longlong *)(param_1 + 0x68) != 0)) &&
      (*(longlong *)(param_1 + 0x70) != 0)) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x178) != 0)) {
    cVar1 = *(char *)(param_1 + 0x38);
    if ((cVar1 == '\x02') || (param_2 != '\0')) {
      BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x1b8));
      if (BVar3 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x1b8));
      }
      *(undefined1 *)(lVar2 + 0x1b1) = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x1b8));
      cVar1 = *(char *)(param_1 + 0x38);
    }
    if (cVar1 == '\a') {
      *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x578) = 0;
      cVar1 = *(char *)(param_1 + 0x38);
    }
    if (((cVar1 == '\x02') || (cVar1 == '\x04')) ||
       ((cVar1 == '\x05' || ((cVar1 == '\x06' || (cVar1 == '\a')))))) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38) < DAT_146858eb8) {
        _Init_thread_header(&DAT_146858eb8);
        if (DAT_146858eb8 == -1) {
          FName::FName(&DAT_146858eb0,L"Cover",1);
          _Init_thread_footer(&DAT_146858eb8);
        }
      }
      FUN_142cad710(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x118),&DAT_146858eb0);
      FUN_142cf4a80(*(longlong *)(param_1 + 0x70) + 0x2580,*(undefined4 *)(param_1 + 0x30),
                    *(undefined4 *)(param_1 + 0x34));
    }
  }
  return;
}



// FUNCTION 14073e6e0 FUN_14073e6e0 body=185 status=ok
// SIG undefined FUN_14073e6e0(void)

void FUN_14073e6e0(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  lVar6 = 0;
  if (lVar3 != 0) {
    if (*(longlong *)(lVar3 + 400) == 0) {
      uVar4 = *(undefined8 *)(lVar3 + 0x3f8);
    }
    else {
      uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
    }
    FUN_142880530(uVar4,param_1 + 0x22);
    param_1[0x22] = 0;
  }
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar5;
    lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  if (((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) && ((int)param_1[0xd] == 0)) {
    *(undefined4 *)(param_1 + 0xd) = 1;
    UGameplayTask::EndTask(param_1);
    return;
  }
  return;
}



// FUNCTION 14073e7b0 FUN_14073e7b0 body=466 status=ok
// SIG undefined FUN_14073e7b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14073e7b0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    local_98 = &LAB_14073e7a0;
    uStack_90 = 0;
    plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      *(undefined4 *)(plVar2 + 2) = (undefined4)local_98;
      *(undefined4 *)((longlong)plVar2 + 0x14) = local_98._4_4_;
      *(undefined4 *)(plVar2 + 3) = uStack_90;
      *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_8c;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[5] = lVar3;
      *plVar2 = (longlong)&PTR_FUN_143f77bd0;
    }
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar4 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar4 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    local_88 = 0;
    local_80 = 0;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_88);
    }
    FWeakObjectPtr::operator=(local_78,0);
    local_a0 = 0xbf800000;
    local_a8 = 0;
    local_70 = 0;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    local_68 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar4,param_1 + 0x22,&local_88,0);
    if (local_28 != 0) {
      plVar5 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar5 = local_38;
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      lVar1 = FMemory::Realloc(plVar2,0,0);
      if (lVar1 != 0) {
        FMemory::Free(lVar1);
      }
    }
  }
  return;
}



// FUNCTION 14073e990 FUN_14073e990 body=115 status=ok
// SIG undefined FUN_14073e990(void)

void FUN_14073e990(undefined8 param_1,undefined8 param_2,int *param_3,longlong param_4,int param_5)

{
  UBTTaskNode::OnMessage();
  if ((param_3[1] == param_5) && (*param_3 == 1)) {
    if (param_4 == DAT_146b2c640) {
      *param_3 = 3;
      return;
    }
    if (param_4 == DAT_146b2c608) {
      *param_3 = 2;
    }
  }
  return;
}



// FUNCTION 14073ea10 FUN_14073ea10 body=284 status=ok
// SIG undefined FUN_14073ea10(void)

void FUN_14073ea10(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 local_138 [304];
  
  if ((((*(longlong *)(param_1 + 0x310) != 0) && (*(longlong *)(param_1 + 0x318) != 0)) &&
      ((*(longlong *)(param_1 + 800) != 0 || (*(char *)(param_1 + 0x328) == '\0')))) &&
     (*(longlong *)(param_1 + 0x5c0) != 0)) {
    if ((*(longlong *)(param_1 + 0x118) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x118) + 0x128) == '\x03')) {
      bVar1 = *(byte *)(*(longlong *)(param_1 + 0x5c0) + 0x248);
      if ((*(uint *)(param_1 + 0x1ac) != (uint)bVar1) &&
         ((2 < *(uint *)(param_1 + 0x1ac) - 1 || (2 < bVar1 - 1)))) {
        *(undefined1 *)(param_1 + 0x1a9) = 0;
        uVar3 = FUN_1407265c0(local_138);
        FUN_140743ac0(param_1,uVar3);
        FUN_140732200(param_1);
      }
    }
    if (*(char *)(param_1 + 0x5e8) != '\0') {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x5c0) + 0x180);
      (**(code **)(*plVar2 + 0x830))(plVar2,0,0);
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x5c0) + 0x180);
      (**(code **)(*plVar2 + 0x830))(plVar2,1);
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x5c0) + 0x180);
      (**(code **)(*plVar2 + 0x830))(plVar2,7);
    }
  }
  return;
}



// FUNCTION 14073eb30 FUN_14073eb30 body=341 status=ok
// SIG undefined FUN_14073eb30(void)

void FUN_14073eb30(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  float fVar7;
  undefined8 local_res8;
  
  piVar6 = (int *)(*(longlong *)
                    ((ulonglong)*(ushort *)(*param_2 + 800) * 0x60 + 0x38 +
                    *(longlong *)(*param_2 + 0x1d8)) + (ulonglong)*(ushort *)(param_1 + 0x52));
  if (piVar6 != (int *)0x0) {
    if (*piVar6 != 0) {
      *piVar6 = *piVar6 + 1;
      return;
    }
    piVar6[1] = 0;
    piVar6[2] = 0;
    piVar6[3] = 0;
    piVar6[4] = 0;
    *piVar6 = 1;
    plVar1 = *(longlong **)(*param_2 + 0x188);
    if ((plVar1 != (longlong *)0x0) && (lVar5 = (**(code **)(*plVar1 + 0x148))(plVar1), lVar5 != 0))
    {
      uVar2 = *(undefined8 *)(*param_2 + 0x180);
      if (*(char *)(param_1 + 0xe8) != '\0') {
        local_res8 = uVar2;
        fVar7 = (float)FUN_142de77e0(param_1 + 0x68,plVar1,0,&local_res8);
        iVar4 = (int)ROUND(fVar7 * 2.0 + 0.5) >> 1;
        if (iVar4 < 1) {
          iVar4 = 0;
        }
        piVar6[1] = iVar4;
      }
      if (*(char *)(param_1 + 0x170) != '\0') {
        piVar6[3] = *(int *)(lVar5 + 0x790);
        local_res8 = uVar2;
        fVar7 = (float)FUN_142de77e0(param_1 + 0xf0,plVar1,0,&local_res8);
        if (fVar7 <= 0.0) {
          fVar7 = 0.0;
        }
        piVar6[2] = (int)fVar7;
      }
      cVar3 = FUN_1407445e0(param_1,piVar6);
      *(byte *)(param_1 + 0x58) = cVar3 << 2 | *(byte *)(param_1 + 0x58) & 0xfb;
    }
  }
  return;
}



// FUNCTION 14073ec90 FUN_14073ec90 body=218 status=ok
// SIG undefined FUN_14073ec90(void)

void FUN_14073ec90(longlong param_1,longlong *param_2,int *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  undefined8 *puVar5;
  
  lVar1 = *param_2;
  puVar5 = (undefined8 *)
           (*(longlong *)
             ((ulonglong)*(ushort *)(lVar1 + 800) * 0x60 + 0x38 + *(longlong *)(lVar1 + 0x1d8)) +
           (ulonglong)*(ushort *)(param_1 + 0x52));
  if (puVar5 != (undefined8 *)0x0) {
    if (((*param_3 == 0) && (plVar2 = *(longlong **)(param_1 + 0x48), plVar2 != (longlong *)0x0)) &&
       (cVar3 = FUN_140730f40(param_1,lVar1,puVar5), cVar3 != '\0')) {
      (**(code **)(*plVar2 + 0x2d0))(plVar2,param_2,*(undefined1 *)(param_1 + 0x59));
      *param_3 = 3;
    }
    else if (*param_3 != 3) {
      *puVar5 = 0;
      puVar5[1] = 0;
      *(undefined4 *)(puVar5 + 2) = 0;
      if ((((*(char *)(param_1 + 100) - 1U & 0xfd) == 0) && (*(char *)(param_1 + 0x188) != '\0')) &&
         (*(longlong *)(param_1 + 0x178) != 0)) {
        bVar4 = 4;
      }
      else {
        bVar4 = 0;
      }
      *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) & 0xfb;
      *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | bVar4;
    }
  }
  return;
}



// FUNCTION 14073ed80 FUN_14073ed80 body=66 status=ok
// SIG undefined FUN_14073ed80(void)

void FUN_14073ed80(longlong param_1)

{
  undefined4 uVar1;
  
  FUN_142343b00();
  if (((*(uint *)(param_1 + 8) >> 4 & 1) == 0) && (*(longlong *)(param_1 + 0x118) != 0)) {
    uVar1 = FUN_142232850();
    FUN_14247c340(param_1 + 0x140,uVar1);
    return;
  }
  return;
}



// FUNCTION 14073ee40 FUN_14073ee40 body=119 status=ok
// SIG undefined FUN_14073ee40(void)

void FUN_14073ee40(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (((*(char *)(param_1 + 0x268) != '\0') && (*(char *)(param_1 + 0x1a0) == '\0')) &&
     (param_2 != 0)) {
    lVar2 = FUN_1429f11d0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      param_2 = 0;
    }
    FUN_14073aa70(param_1,param_2);
  }
  return;
}



// FUNCTION 14073eec0 FUN_14073eec0 body=446 status=ok
// SIG undefined FUN_14073eec0(void)

void FUN_14073eec0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar10 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  lVar1 = lVar10 + 0x58;
  *(undefined4 *)(lVar10 + 0xe0) = 0;
  if (0x7fffffff < *(uint *)(lVar10 + 0xe4)) {
    FUN_1407418a0(lVar1,0);
  }
  *(undefined4 *)(lVar10 + 0xe8) = 0xffffffff;
  *(undefined4 *)(lVar10 + 0xec) = 0;
  FUN_14072ebc0(param_1,param_2);
  lVar2 = *(longlong *)(*param_2 + 0x5e8);
  if (lVar2 != 0) {
    iVar7 = *(int *)(lVar2 + 0x7540);
    if (*(int *)(lVar10 + 0xe4) < iVar7) {
      FUN_1407418a0(lVar1,iVar7);
      iVar7 = *(int *)(lVar2 + 0x7540);
    }
    lVar9 = *(longlong *)(lVar2 + 0x7538);
    if (*(longlong *)(lVar2 + 0x7538) == 0) {
      lVar9 = lVar2 + 0x338;
    }
    lVar4 = (longlong)iVar7 * 0x390 + lVar9;
    for (; lVar9 != lVar4; lVar9 = lVar9 + 0x390) {
      cVar3 = FUN_14073d500(param_1,param_2,lVar9);
      if ((cVar3 != '\0') && (lVar5 = FUN_142dd0030(lVar9), lVar5 != 0)) {
        iVar7 = *(int *)(lVar10 + 0xe0);
        *(int *)(lVar10 + 0xe0) = iVar7 + 1;
        if (*(int *)(lVar10 + 0xe4) < iVar7 + 1) {
          TArray<AEmitter_*,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(lVar1,iVar7);
        }
        lVar8 = *(longlong *)(lVar10 + 0xd8);
        if (*(longlong *)(lVar10 + 0xd8) == 0) {
          lVar8 = lVar1;
        }
        FWeakObjectPtr::operator=(lVar8 + (longlong)iVar7 * 8,lVar5);
      }
    }
    if (0 < *(int *)(lVar10 + 0xe0)) {
      *(undefined4 *)(lVar10 + 0xe8) = 0;
      *(undefined4 *)(lVar10 + 0xec) = 1;
      lVar9 = *(longlong *)(lVar10 + 0xd8);
      if (*(longlong *)(lVar10 + 0xd8) == 0) {
        lVar9 = lVar1;
      }
      uVar6 = FWeakObjectPtr::Get(lVar9);
      FUN_142ddbcf0(lVar2,1,uVar6);
    }
  }
  FUN_1406f1db0(param_1,param_2);
  return;
}



// FUNCTION 14073f080 FUN_14073f080 body=141 status=ok
// SIG undefined FUN_14073f080(void)

void FUN_14073f080(longlong param_1,longlong *param_2,undefined1 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  *(undefined4 *)(lVar1 + 0xe0) = 0;
  if (0x7fffffff < *(uint *)(lVar1 + 0xe4)) {
    FUN_1407418a0(lVar1 + 0x58,0);
  }
  *(undefined4 *)(lVar1 + 0xe8) = 0xffffffff;
  if (*(longlong *)(*param_2 + 0x5e8) != 0) {
    FUN_142ddbcf0(*(longlong *)(*param_2 + 0x5e8),1,0);
  }
  FUN_140715960(param_1,param_2,param_3);
  return;
}



// FUNCTION 14073f110 FUN_14073f110 body=94 status=ok
// SIG undefined FUN_14073f110(void)

void FUN_14073f110(longlong param_1,longlong param_2,longlong param_3)

{
  *(undefined4 *)(param_3 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_3 + 0x14) = 0;
  if ((*(longlong *)(param_2 + 0x180) != 0) && (*(longlong *)(param_3 + 8) != 0)) {
    FUN_142bcd200(*(longlong *)(param_2 + 0x180),*(undefined1 *)(param_1 + 0x90),
                  *(undefined8 *)(param_3 + 8));
    *(undefined8 *)(param_3 + 8) = 0;
    return;
  }
  *(undefined8 *)(param_3 + 8) = 0;
  return;
}



// FUNCTION 14073f170 FUN_14073f170 body=343 status=ok
// SIG undefined FUN_14073f170(void)

void FUN_14073f170(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 local_28;
  longlong local_20;
  
  lVar1 = *(longlong *)(param_2 + 0x180);
  if (lVar1 != 0) {
    if (*(longlong *)(param_3 + 0x28) != 0) {
      FUN_142bcd200(lVar1,*(undefined1 *)(param_1 + 0x90),*(undefined8 *)(param_3 + 0x28));
    }
    lVar7 = 0;
    *(undefined8 *)(param_3 + 0x28) = 0;
    plVar3 = (longlong *)FUN_140725690(lVar1,*(undefined1 *)(param_1 + 0x90));
    lVar6 = lVar7;
    if (plVar3 != (longlong *)0x0) {
      lVar4 = FUN_1428dfc70();
      if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        uVar5 = AUGWeapon_Hook::GetPrivateStaticClass();
        lVar6 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar5);
      }
    }
    *(undefined8 *)(param_3 + 0x30) = *(undefined8 *)(param_3 + 0x38);
    if (lVar6 != 0) {
      lVar7 = FUN_14076aaa0();
    }
    FUN_140725870(lVar1,*(undefined1 *)(param_1 + 0x90),lVar7);
    if (((*(longlong *)(param_2 + 0x188) != 0) &&
        (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x188) + 0x488), lVar1 != 0)) &&
       (lVar6 = *(longlong *)(param_3 + 0x38), lVar6 != 0)) {
      local_28 = *(undefined8 *)(lVar6 + 0x118);
      local_20 = lVar1;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (lVar6 + 0x748,&local_28);
    }
  }
  FUN_142bec2d0(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14073f2d0 FUN_14073f2d0 body=375 status=ok
// SIG undefined FUN_14073f2d0(void)

void FUN_14073f2d0(longlong param_1)

{
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined2 local_120;
  undefined4 local_11c;
  undefined1 local_110 [136];
  undefined1 local_88 [128];
  
  if ((*(longlong *)(param_1 + 0x5c0) != 0) &&
     ((((*(longlong *)(param_1 + 0x310) != 0 && (*(longlong *)(param_1 + 0x318) != 0)) &&
       ((*(longlong *)(param_1 + 800) != 0 || (*(char *)(param_1 + 0x328) == '\0')))) ||
      (((*(char *)(param_1 + 0x1b0) != '\0' || (*(int *)(param_1 + 0x578) != 0)) ||
       (*(int *)(param_1 + 0x57c) != 0)))))) {
    local_128 = 0;
    local_120 = 0x101;
    local_138 = 0;
    uStack_130 = 0;
    local_11c = 0x3f400000;
    FUN_142de2eb0(local_110);
    FUN_142de2eb0(local_88);
    FUN_140743c90(param_1,&local_138);
    local_128 = 0;
    local_120 = 0x101;
    local_138 = 0;
    uStack_130 = 0;
    local_11c = 0x3f400000;
    FUN_142de2eb0(local_110);
    FUN_142de2eb0(local_88);
    FUN_140743ac0(param_1,&local_138);
    FUN_140732200(param_1);
    FUN_140746a00(param_1);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146858e78) {
      _Init_thread_header(&DAT_146858e78);
      if (DAT_146858e78 == -1) {
        FName::FName(&DAT_146858e70,L"Cover",1);
        _Init_thread_footer(&DAT_146858e78);
      }
    }
    FUN_142cad710(*(undefined8 *)(param_1 + 0x118),&DAT_146858e70);
  }
  return;
}



// FUNCTION 14073f450 FUN_14073f450 body=212 status=ok
// SIG undefined FUN_14073f450(void)

void FUN_14073f450(longlong param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 local_18 [2];
  
  if ((undefined8 *)(param_1 + 0x220) != local_18) {
    *(undefined8 *)(param_1 + 0x220) = 0;
    plVar3 = *(longlong **)(param_1 + 0x228);
    *(undefined8 *)(param_1 + 0x228) = 0;
    if (plVar3 != (longlong *)0x0) {
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
  if (param_2 == '\x01') {
    lVar4 = *(longlong *)(param_1 + 0x120);
    if ((lVar4 == 0) && (lVar4 = FUN_1423407b0(param_1), lVar4 == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(lVar4 + 0x790);
    }
    *(undefined4 *)(param_1 + 0x26c) = uVar5;
    if ((*(char *)(param_1 + 0x1e3) != '\0') && (*(longlong *)(param_1 + 0x1f0) != 0)) {
      FUN_142dbb5d0(*(longlong *)(param_1 + 0x1f0) + 0x288,&DAT_146858d98);
    }
    if (*(char *)(param_1 + 0x1e1) != '\0') {
      *(undefined1 *)(param_1 + 0x268) = 0;
      FUN_140734240(param_1);
      FUN_1407347f0(param_1);
    }
    return;
  }
  return;
}



// FUNCTION 14073f530 FUN_14073f530 body=52 status=ok
// SIG undefined FUN_14073f530(void)

void FUN_14073f530(longlong param_1)

{
  FUN_142344780();
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_140483870(*(longlong *)(param_1 + 0x118) + 0x3b0,param_1);
    return;
  }
  return;
}



// FUNCTION 14073f580 FUN_14073f580 body=60 status=ok
// SIG undefined FUN_14073f580(void)

void FUN_14073f580(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    lVar1 = FUN_142dd6c60(*param_2);
    if (lVar1 != 0) {
      FUN_142ddc5e0(lVar1,3,*(undefined8 *)(param_1 + 0xd8));
      return;
    }
  }
  return;
}



// FUNCTION 14073f5c0 FUN_14073f5c0 body=60 status=ok
// SIG undefined FUN_14073f5c0(void)

void FUN_14073f5c0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    lVar1 = FUN_142dd6c60(*param_2);
    if (lVar1 != 0) {
      FUN_142ddc5e0(lVar1,3,*(undefined8 *)(param_1 + 0xf0));
      return;
    }
  }
  return;
}



// FUNCTION 14073f600 FUN_14073f600 body=69 status=ok
// SIG undefined FUN_14073f600(void)

void FUN_14073f600(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_142dd6c60(*param_2);
  if (lVar1 != 0) {
    FUN_142ddc5e0(lVar1,3,*(undefined8 *)(param_1 + 0xe8));
  }
                    /* WARNING: Could not recover jumptable at 0x00014073f63e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_2 + 0x8f0))();
  return;
}



// FUNCTION 14073f650 FUN_14073f650 body=69 status=ok
// SIG undefined FUN_14073f650(void)

void FUN_14073f650(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_142dd6c60(*param_2);
  if (lVar1 != 0) {
    FUN_142ddc5e0(lVar1,3,*(undefined8 *)(param_1 + 0xf0));
  }
                    /* WARNING: Could not recover jumptable at 0x00014073f68e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_2 + 0x8f0))();
  return;
}



// FUNCTION 14073f6a0 FUN_14073f6a0 body=50 status=ok
// SIG undefined FUN_14073f6a0(void)

void FUN_14073f6a0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_142dd6c60(*param_2);
  if (lVar1 != 0) {
    FUN_142ddc5e0(lVar1,3,*(undefined8 *)(param_1 + 0x158));
    return;
  }
  return;
}



// FUNCTION 14073f6e0 FUN_14073f6e0 body=50 status=ok
// SIG undefined FUN_14073f6e0(void)

void FUN_14073f6e0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_142dd6c60(*param_2);
  if (lVar1 != 0) {
    FUN_142ddc5e0(lVar1,3,*(undefined8 *)(param_1 + 0xe8));
    return;
  }
  return;
}



// FUNCTION 14073f720 FUN_14073f720 body=688 status=ok
// SIG undefined FUN_14073f720(void)

void FUN_14073f720(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  undefined8 local_res10;
  code *local_28;
  ulonglong uStack_20;
  
  lVar1 = *(longlong *)(*param_2 + 0x630);
  if (lVar1 != 0) {
    pwVar5 = (wchar_t *)0x0;
    uStack_20 = uStack_20 & 0xffffffff00000000;
    local_28 = FUN_14073dc00;
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UGameplayTask_SmartAction::ReserveCallback",L"::");
    pwVar4 = pwVar5;
    while (pwVar2 = pwVar3, pwVar2 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar4 = pwVar2;
    }
    FName::FName(&local_res10,pwVar4 + 2,1);
    TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
              (lVar1 + 0x180,param_1,&local_28,local_res10);
    uStack_20 = uStack_20 & 0xffffffff00000000;
    local_28 = FUN_1407466b0;
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UGameplayTask_SmartAction::UnreserveCallback",L"::");
    pwVar4 = pwVar5;
    while (pwVar2 = pwVar3, pwVar2 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar4 = pwVar2;
    }
    FName::FName(&local_res10,pwVar4 + 2,1);
    TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
              (lVar1 + 400,param_1,&local_28,local_res10);
    uStack_20 = uStack_20 & 0xffffffff00000000;
    local_28 = FUN_14072d080;
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UGameplayTask_SmartAction::BeginCallback",L"::");
    pwVar4 = pwVar5;
    while (pwVar2 = pwVar3, pwVar2 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar4 = pwVar2;
    }
    FName::FName(&local_res10,pwVar4 + 2,1);
    TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
              (lVar1 + 0x1a0,param_1,&local_28,local_res10);
    uStack_20 = uStack_20 & 0xffffffff00000000;
    local_28 = FUN_14073c060;
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UGameplayTask_SmartAction::InterruptCallback",L"::");
    pwVar4 = pwVar5;
    while (pwVar2 = pwVar3, pwVar2 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar4 = pwVar2;
    }
    FName::FName(&local_res10,pwVar4 + 2,1);
    TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
              (lVar1 + 0x1b0,param_1,&local_28,local_res10);
    uStack_20 = uStack_20 & 0xffffffff00000000;
    local_28 = FUN_140744d90;
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&UGameplayTask_SmartAction::SuccessCallback",L"::");
    while (pwVar3 = pwVar4, pwVar3 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar5 = pwVar3;
    }
    FName::FName(&local_res10,pwVar5 + 2,1);
    TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
              (lVar1 + 0x1c0,param_1,&local_28,local_res10);
  }
  return;
}



// FUNCTION 14073f9d0 FUN_14073f9d0 body=46 status=ok
// SIG undefined FUN_14073f9d0(void)

void FUN_14073f9d0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    lVar1 = FUN_142dd6c60(*param_2);
    if (lVar1 != 0) {
      FUN_142dc77b0(lVar1,3);
      return;
    }
  }
  return;
}



// FUNCTION 14073fa00 FUN_14073fa00 body=46 status=ok
// SIG undefined FUN_14073fa00(void)

void FUN_14073fa00(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    lVar1 = FUN_142dd6c60(*param_2);
    if (lVar1 != 0) {
      FUN_142dc77b0(lVar1,3);
      return;
    }
  }
  return;
}



// FUNCTION 14073fa30 FUN_14073fa30 body=110 status=ok
// SIG undefined FUN_14073fa30(void)

void FUN_14073fa30(undefined8 param_1,undefined8 *param_2,undefined1 param_3)

{
  longlong lVar1;
  
  FUN_142bb5c30(param_2[1],&DAT_146858ce8);
  FUN_142bb5c30(param_2[1],&DAT_146858cf0);
  lVar1 = FUN_142dd6c60(*param_2);
  if (lVar1 != 0) {
    FUN_142dc77b0(lVar1,3);
  }
  FUN_140746350(param_1,param_2,param_3);
  return;
}



// FUNCTION 14073faa0 FUN_14073faa0 body=36 status=ok
// SIG undefined FUN_14073faa0(void)

void FUN_14073faa0(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_142dd6c60(*param_2);
  if (lVar1 != 0) {
    FUN_142dc77b0(lVar1,3);
    return;
  }
  return;
}



// FUNCTION 14073fad0 FUN_14073fad0 body=270 status=ok
// SIG undefined FUN_14073fad0(void)

void FUN_14073fad0(longlong param_1,longlong *param_2,char param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_res8;
  
  FUN_142cbcc90(param_1 + 0x128,param_2[1]);
  FUN_142cbcc90(param_1 + 0x138,param_2[1]);
  FUN_142cbcc90(param_1 + 0x148,param_2[1]);
  lVar2 = FUN_142dd6c60(*param_2);
  if (lVar2 != 0) {
    FUN_142dc77b0(lVar2,3);
  }
  if (*(longlong *)(*param_2 + 0x498) != 0) {
    lVar2 = param_1 + 0xc0;
    if (param_3 != '\0') {
      lVar2 = param_1 + 0xd0;
    }
    local_res8 = *(longlong *)(*param_2 + 0x498);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar2,&local_res8);
  }
  if (((*(char *)(param_1 + 0x120) != '\0') && (*(longlong *)(param_1 + 0x118) != 0)) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x4b0), lVar2 != 0)) {
    lVar3 = FUN_1407eff40();
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
      (**(code **)(*(longlong *)(*param_2 + 0x5b8) + 0x10))
                ((longlong *)(*param_2 + 0x5b8),lVar2,
                 CONCAT71((int7)((ulonglong)(lVar3 + 0x88) >> 8),1));
    }
  }
  return;
}



// FUNCTION 14073fbe0 FUN_14073fbe0 body=76 status=ok
// SIG undefined FUN_14073fbe0(void)

void FUN_14073fbe0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  FUN_142bb5c30(param_2[1],&DAT_146858d48);
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    lVar1 = FUN_142dd6c60(*param_2);
    if (lVar1 != 0) {
      FUN_142dc77b0(lVar1,3);
    }
  }
  return;
}



// FUNCTION 14073fc30 FUN_14073fc30 body=586 status=ok
// SIG undefined FUN_14073fc30(void)

void FUN_14073fc30(longlong param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  undefined8 local_res10;
  
  lVar1 = *(longlong *)(*param_2 + 0x630);
  if (lVar1 != 0) {
    pwVar6 = (wchar_t *)0x0;
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UGameplayTask_SmartAction::ReserveCallback",L"::");
    pwVar4 = pwVar6;
    while (pwVar2 = pwVar3, pwVar2 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar4 = pwVar2;
    }
    FName::FName(&local_res10,pwVar4 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar1 + 0x180,param_1,local_res10);
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UGameplayTask_SmartAction::UnreserveCallback",L"::");
    pwVar4 = pwVar6;
    while (pwVar2 = pwVar3, pwVar2 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar4 = pwVar2;
    }
    FName::FName(&local_res10,pwVar4 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar1 + 400,param_1,local_res10);
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UGameplayTask_SmartAction::BeginCallback",L"::");
    pwVar4 = pwVar6;
    while (pwVar2 = pwVar3, pwVar2 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar4 = pwVar2;
    }
    FName::FName(&local_res10,pwVar4 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar1 + 0x1a0,param_1,local_res10);
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UGameplayTask_SmartAction::InterruptCallback",L"::");
    pwVar4 = pwVar6;
    while (pwVar2 = pwVar3, pwVar2 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar4 = pwVar2;
    }
    FName::FName(&local_res10,pwVar4 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar1 + 0x1b0,param_1,local_res10);
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&UGameplayTask_SmartAction::SuccessCallback",L"::");
    while (pwVar3 = pwVar4, pwVar3 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar6 = pwVar3;
    }
    FName::FName(&local_res10,pwVar6 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar1 + 0x1c0,param_1,local_res10);
    if (param_3 == '\x01') {
      lVar5 = param_1 + 0xd0;
      if (*(char *)(lVar1 + 0x218) == '\x03') {
        lVar5 = param_1 + 0xf0;
      }
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar5,0);
      return;
    }
  }
  return;
}



// FUNCTION 14073fe80 FUN_14073fe80 body=544 status=ok
// SIG undefined FUN_14073fe80(void)

void FUN_14073fe80(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  undefined8 local_res10;
  
  lVar1 = *(longlong *)(*param_2 + 0x630);
  if (lVar1 != 0) {
    pwVar5 = (wchar_t *)0x0;
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UGameplayTask_SmartAction::ReserveCallback",L"::");
    pwVar4 = pwVar5;
    while (pwVar2 = pwVar3, pwVar2 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar4 = pwVar2;
    }
    FName::FName(&local_res10,pwVar4 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar1 + 0x180,param_1,local_res10);
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UGameplayTask_SmartAction::UnreserveCallback",L"::");
    pwVar4 = pwVar5;
    while (pwVar2 = pwVar3, pwVar2 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar4 = pwVar2;
    }
    FName::FName(&local_res10,pwVar4 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar1 + 400,param_1,local_res10);
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UGameplayTask_SmartAction::BeginCallback",L"::");
    pwVar4 = pwVar5;
    while (pwVar2 = pwVar3, pwVar2 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar4 = pwVar2;
    }
    FName::FName(&local_res10,pwVar4 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar1 + 0x1a0,param_1,local_res10);
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UGameplayTask_SmartAction::InterruptCallback",L"::");
    pwVar4 = pwVar5;
    while (pwVar2 = pwVar3, pwVar2 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar4 = pwVar2;
    }
    FName::FName(&local_res10,pwVar4 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar1 + 0x1b0,param_1,local_res10);
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&UGameplayTask_SmartAction::SuccessCallback",L"::");
    while (pwVar3 = pwVar4, pwVar3 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar5 = pwVar3;
    }
    FName::FName(&local_res10,pwVar5 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar1 + 0x1c0,param_1,local_res10);
  }
  return;
}



// FUNCTION 1407400c0 FUN_1407400c0 body=410 status=ok
// SIG undefined FUN_1407400c0(void)

void FUN_1407400c0(longlong param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  int iVar4;
  undefined8 local_res8;
  code *local_18;
  undefined8 uStack_10;
  
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0xe0,0);
  if ((*(char *)(param_1 + 0x120) != '\0') && (*(longlong *)(param_1 + 0x118) != 0)) {
    uStack_10 = (ulonglong)uStack_10._4_4_ << 0x20;
    local_18 = FUN_14073e6e0;
    pwVar3 = _guard_xfg_dispatch_icall_nop
                       (L"&UGameplayTask_ScriptedMoveToLevelSequence::OnLevelSequenceFinished",L"::"
                       );
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res8,pwVar2 + 2,1);
    FUN_1407260e0(*(longlong *)(param_1 + 0x118) + 0x570,param_1,&local_18,local_res8);
    uStack_10 = uStack_10 & 0xffffffff00000000;
    local_18 = FUN_14073e7b0;
    pwVar3 = _guard_xfg_dispatch_icall_nop
                       (L"&UGameplayTask_ScriptedMoveToLevelSequence::OnLevelSequenceStopped",L"::")
    ;
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res8,pwVar2 + 2,1);
    FUN_1407260e0(*(longlong *)(param_1 + 0x118) + 0x580,param_1,&local_18,local_res8);
    FUN_1407ed8d0(*(undefined8 *)(param_1 + 0x118));
    return;
  }
  if (*(char *)(param_1 + 0x6c) == '\x01') {
    iVar4 = *(int *)(param_1 + 0x78);
  }
  else {
    iVar4 = 1;
  }
  if (*(int *)(param_1 + 0x74) < iVar4) {
    FUN_14072b840(param_1);
    return;
  }
  FUN_140732d80();
  return;
}



// FUNCTION 140740280 FUN_140740280 body=293 status=ok
// SIG undefined FUN_140740280(void)

void FUN_140740280(longlong param_1)

{
  bool bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((*(longlong *)(param_1 + 0x68) == 0) ||
     (plVar2 = (longlong *)FUN_142269f40(), plVar2 == (longlong *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_1407a6820();
    uVar3 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar3);
  }
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  if (*(longlong *)(param_1 + 0x68) == 0) {
    return;
  }
  plVar2 = (longlong *)
           FUN_142274180(*(longlong *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x30),
                         *(undefined4 *)(param_1 + 0x34));
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  lVar4 = (**(code **)(*plVar2 + 0x108))(plVar2);
  if (lVar4 == 0) {
LAB_140740330:
    lVar4 = 0;
  }
  else {
    lVar5 = UAnimMontage::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140740330;
  }
  *(longlong *)(param_1 + 0x78) = lVar4;
  if (lVar4 != 0) {
    return;
  }
  if (plVar2[0xb] == 0) {
    return;
  }
  lVar4 = FUN_14227ddc0(*(undefined8 *)(param_1 + 0x68));
  if (lVar4 != 0) {
    lVar5 = UAnimMontage::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140740391;
  }
  lVar4 = 0;
LAB_140740391:
  *(longlong *)(param_1 + 0x78) = lVar4;
  return;
}



// FUNCTION 1407403b0 FUN_1407403b0 body=186 status=ok
// SIG undefined FUN_1407403b0(void)

undefined8 FUN_1407403b0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong local_28 [2];
  longlong local_18 [2];
  
  FString::FString(local_18,param_1);
  FString::FString(local_28,local_18);
  puVar3 = (undefined8 *)*param_2;
  puVar5 = puVar3 + (longlong)*(int *)(param_2 + 1) * 2;
  do {
    if (puVar3 == puVar5) {
      if (local_28[0] != 0) {
        FMemory::Free();
      }
      uVar4 = 0;
LAB_14074043a:
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      return uVar4;
    }
    if (*(int *)(puVar3 + 1) == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      puVar2 = (undefined2 *)*puVar3;
    }
    iVar1 = FUN_141592950(local_28,puVar2,1,0,0xffffffff);
    if (iVar1 != -1) {
      if (local_28[0] != 0) {
        FMemory::Free();
      }
      uVar4 = 1;
      goto LAB_14074043a;
    }
    puVar3 = puVar3 + 2;
  } while( true );
}



// FUNCTION 140740470 FUN_140740470 body=741 status=ok
// SIG undefined FUN_140740470(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140740470(longlong param_1,uint param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined8 local_f0;
  longlong local_e8 [20];
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  lVar4 = FUN_140765020();
  if (lVar4 != 0) {
    if (*(longlong *)(lVar4 + 0x608) != 0) {
      FUN_14071caf0(*(longlong *)(lVar4 + 0x608),(param_2 & 0xff) + 3);
    }
    lVar4 = FUN_142dd6c60(param_1);
    if (lVar4 == 0) {
      return;
    }
    FUN_142dc77b0(lVar4,3);
    return;
  }
  if (param_1 == 0) {
    return;
  }
  lVar4 = FUN_1407b4160();
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
      != lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x628);
  if (lVar4 != 0) {
    uVar5 = UCompositionGraphCaptureProtocol::StaticClass();
    cVar2 = FUN_142b796e0(lVar4,uVar5);
    if (cVar2 != '\0') {
      FUN_142b78e20(lVar4,param_1 + 0x5f0);
      return;
    }
  }
  lVar4 = UCableComponent::GetAttachedActor(param_1);
  if (lVar4 == 0) {
    return;
  }
  uVar7 = 0;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  iVar3 = FUN_1407c9b90(lVar4,0,1);
  local_f8 = (undefined8 *)0x0;
  local_f0 = 0;
  if (0 < iVar3) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&local_f8,iVar3);
  }
  FUN_1407c7b00(lVar4,&local_f8,0,1);
  uVar11 = local_40;
  if ((int)local_40 < iVar3) {
    local_40 = CONCAT44(local_40._4_4_,iVar3);
    iVar6 = iVar3;
    if (iVar3 <= local_40._4_4_) goto LAB_14074063a;
    FUN_140741560(local_e8,uVar11 & 0xffffffff);
  }
  else {
    iVar6 = (int)local_40;
    if (((int)local_40 <= iVar3) || (iVar8 = (int)local_40 - iVar3, iVar8 == 0)) goto LAB_14074063a;
    iVar6 = ((int)local_40 - iVar8) - iVar3;
    if (iVar6 != 0) {
      plVar9 = local_e8;
      if (local_48 != (longlong *)0x0) {
        plVar9 = local_48;
      }
      _guard_xfg_dispatch_icall_nop(plVar9 + iVar3,plVar9 + (iVar8 + iVar3),(longlong)iVar6 << 3);
    }
    local_40 = CONCAT44(local_40._4_4_,(int)local_40 - iVar8);
    FUN_1407417a0(local_e8);
  }
  iVar6 = (int)local_40;
LAB_14074063a:
  plVar9 = local_e8;
  if (local_48 != (longlong *)0x0) {
    plVar9 = local_48;
  }
  uVar11 = (ulonglong)((longlong)(local_f8 + (int)local_f0) + (7 - (longlong)local_f8)) >> 3;
  if (local_f8 + (int)local_f0 < local_f8) {
    uVar11 = uVar7;
  }
  puVar10 = local_f8;
  uVar12 = uVar7;
  if (uVar11 != 0) {
    do {
      lVar4 = FUN_140765020(*puVar10);
      uVar12 = uVar12 + 1;
      *plVar9 = lVar4;
      plVar9 = plVar9 + 1;
      puVar10 = puVar10 + 1;
    } while (uVar12 != uVar11);
    iVar6 = (int)local_40;
  }
  plVar9 = local_e8;
  if (local_48 != (longlong *)0x0) {
    plVar9 = local_48;
  }
  uVar11 = (longlong)iVar6 & 0x1fffffffffffffff;
  if (plVar9 + iVar6 < plVar9) {
    uVar11 = uVar7;
  }
  if (uVar11 != 0) {
    do {
      if ((*plVar9 != 0) && (lVar4 = *(longlong *)(*plVar9 + 0x608), lVar4 != 0)) {
        FUN_14071caf0(lVar4,(param_2 & 0xff) + 3);
      }
      plVar9 = plVar9 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar11);
  }
  if (local_f8 != (undefined8 *)0x0) {
    FMemory::Free(local_f8);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}



// FUNCTION 140740760 FUN_140740760 body=110 status=ok
// SIG undefined FUN_140740760(void)

void FUN_140740760(longlong param_1)

{
  int iVar1;
  
  FUN_142bed4f0();
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    UObjectBaseUtility::MarkPackageDirty(param_1);
    iVar1 = *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x68) = iVar1 + 1;
    if (*(int *)(param_1 + 0x6c) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x60,iVar1);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar1 * 8) =
         *(undefined8 *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 1407407d0 FUN_1407407d0 body=498 status=ok
// SIG undefined FUN_1407407d0(void)

void FUN_1407407d0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  float fVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  int *piVar10;
  longlong lVar11;
  ulonglong uVar12;
  float fVar13;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar14 [16];
  float fVar15;
  longlong local_res18 [2];
  
  uVar4 = *(undefined8 *)(param_3 + 0x118);
  fVar15 = 0.0;
  lVar11 = *(longlong *)(param_3 + 0x180);
  if (lVar11 == 0) {
    lVar11 = -1;
  }
  uVar7 = 0;
  iVar6 = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  lVar1 = param_2 + (longlong)*(int *)(param_2 + 0x10) * 8;
  if (0 < *(int *)(param_2 + 0x10)) {
    piVar10 = (int *)(param_2 + 0x18);
    uVar12 = uVar7;
    do {
      iVar9 = (int)uVar7;
      if ((iVar9 < 0) || (*(int *)(param_1 + 0x98) <= iVar9)) {
        *piVar10 = 0;
        fVar13 = 0.0;
      }
      else {
        lVar8 = *(longlong *)(param_1 + 0x90);
        if (*(char *)(uVar12 + 0x108 + lVar8) == '\0') {
          *piVar10 = 0;
        }
        else {
          local_res18[0] = lVar11;
          fVar13 = (float)FUN_142de77e0(lVar8 + 0x88 + uVar12,uVar4,0,local_res18);
          *piVar10 = (int)fVar13;
          if ((*(int *)(param_2 + 8) == iVar9) && ((int)fVar13 <= *(int *)(param_2 + 4))) {
            fVar13 = 0.0;
            goto LAB_1407408e4;
          }
        }
        local_res18[0] = lVar11;
        auVar14._0_8_ = FUN_142de77e0(lVar8 + 8 + uVar12,uVar4,0,local_res18);
        auVar14._8_8_ = extraout_XMM0_Qb;
        if ((float)auVar14._0_8_ <= 0.0) {
          auVar5._12_4_ = 0;
          auVar5._0_12_ = auVar14._4_12_;
          auVar14 = auVar5 << 0x20;
        }
        fVar13 = auVar14._0_4_;
      }
LAB_1407408e4:
      piVar10[-1] = (int)fVar13;
      iVar6 = *(int *)(param_2 + 0xc);
      if (0.0 < fVar13) {
        *(int *)(lVar1 + 0x14 + (longlong)iVar6 * 4) = iVar9;
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
        iVar6 = *(int *)(param_2 + 0xc);
        fVar15 = fVar15 + (float)piVar10[-1];
      }
      uVar7 = (ulonglong)(iVar9 + 1U);
      piVar10 = piVar10 + 2;
      uVar12 = uVar12 + 0x110;
    } while ((int)(iVar9 + 1U) < *(int *)(param_2 + 0x10));
  }
  lVar11 = (longlong)(iVar6 + -1);
  if (0 < iVar6 + -1) {
    do {
      iVar6 = rand();
      lVar8 = 0;
      fVar13 = (float)iVar6 * 3.051851e-05 * fVar15;
      if (0 < lVar11) {
        do {
          fVar2 = *(float *)(param_2 + 0x14 + lVar8 * 8);
          fVar13 = fVar13 - fVar2;
          if (fVar13 <= 0.0) {
            uVar3 = *(undefined4 *)(lVar1 + 0x14 + lVar11 * 4);
            fVar15 = fVar15 - fVar2;
            *(undefined4 *)(lVar1 + 0x14 + lVar11 * 4) = *(undefined4 *)(lVar1 + 0x14 + lVar8 * 4);
            *(undefined4 *)(lVar1 + 0x14 + lVar8 * 4) = uVar3;
            break;
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < lVar11);
      }
      lVar11 = lVar11 + -1;
    } while (0 < lVar11);
  }
  return;
}



// FUNCTION 1407409d0 FUN_1407409d0 body=219 status=ok
// SIG undefined FUN_1407409d0(void)

void FUN_1407409d0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  ulonglong local_res8;
  longlong local_28 [2];
  longlong local_18 [2];
  
  local_res8 = local_res8 & 0xffffffff00000000;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2f0))();
  bVar4 = plVar1 == (longlong *)0x0;
  if (bVar4) {
    lVar2 = USafeZone::GetPrivateStaticClass();
    local_res8 = *(ulonglong *)(lVar2 + 0x18);
    FName::ToString(&local_res8,local_28);
    plVar1 = local_28;
  }
  else {
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x338))(plVar1,local_18);
  }
  plVar3 = param_1 + 6;
  if (plVar3 != plVar1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    *plVar3 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 7) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (bVar4) {
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  if ((!bVar4) && (local_18[0] != 0)) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140740ab0 FUN_140740ab0 body=313 status=ok
// SIG undefined FUN_140740ab0(void)

void FUN_140740ab0(longlong param_1,longlong param_2,char param_3)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined1 local_res10 [8];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar3 = *(longlong *)(param_2 + 0x568);
  if (lVar3 != 0) {
    pcVar1 = (char *)(param_1 + 0xa8);
    pcVar4 = *(char **)(param_1 + 0xb0);
    if (*(char **)(param_1 + 0xb0) == (char *)0x0) {
      pcVar4 = pcVar1;
    }
    pcVar7 = pcVar4 + *(int *)(param_1 + 0xb8);
    for (; pcVar4 != pcVar7; pcVar4 = pcVar4 + 1) {
      if (*pcVar4 == param_3) {
        return;
      }
    }
    local_28 = FUN_14073dee0;
    uStack_20 = 0;
    local_38 = 0;
    local_30 = 0;
    puVar5 = (undefined8 *)operator_new(0x30,&local_38);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_14407c830;
      FWeakObjectPtr::operator=(puVar5 + 1,param_1);
      *(undefined4 *)(puVar5 + 2) = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar5 + 0x14) = local_28._4_4_;
      *(undefined4 *)(puVar5 + 3) = uStack_20;
      *(undefined4 *)((longlong)puVar5 + 0x1c) = uStack_1c;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[5] = uVar6;
    }
    FUN_142bc77b0(lVar3,local_res10,param_3,param_1,&local_38);
    iVar2 = *(int *)(param_1 + 0xb8);
    *(int *)(param_1 + 0xb8) = iVar2 + 1;
    if (*(int *)(param_1 + 0xbc) < iVar2 + 1) {
      TArray<unsigned_char,TInlineAllocator<8,TSizedDefaultAllocator<32>_>_>::ResizeGrow
                (pcVar1,iVar2);
    }
    pcVar4 = *(char **)(param_1 + 0xb0);
    if (*(char **)(param_1 + 0xb0) == (char *)0x0) {
      pcVar4 = pcVar1;
    }
    pcVar4[iVar2] = param_3;
  }
  return;
}



// FUNCTION 140740bf0 FUN_140740bf0 body=305 status=ok
// SIG undefined FUN_140740bf0(void)

int FUN_140740bf0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  
  iVar1 = (int)param_1[0xb];
  lVar6 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  iVar7 = 0;
  plVar2 = (longlong *)param_1[10];
  if ((longlong *)param_1[10] == (longlong *)0x0) {
    plVar2 = param_1;
  }
  bVar8 = *plVar2 != *param_2;
  lVar3 = 0;
  iVar4 = 0;
  do {
    lVar3 = lVar3 + 1;
    iVar5 = iVar4 + 1;
    if (lVar3 < lVar6) {
      plVar2 = (longlong *)param_1[10];
      if ((longlong *)param_1[10] == (longlong *)0x0) {
        plVar2 = param_1;
      }
      plVar2 = plVar2 + lVar3;
      do {
        if (bVar8 != (*plVar2 != *param_2)) break;
        iVar5 = iVar5 + 1;
        lVar3 = lVar3 + 1;
        plVar2 = plVar2 + 1;
      } while (lVar3 < lVar6);
    }
    if (bVar8 != false) {
      if (iVar7 != iVar4) {
        plVar2 = (longlong *)param_1[10];
        if ((longlong *)param_1[10] == (longlong *)0x0) {
          plVar2 = param_1;
        }
        _guard_xfg_dispatch_icall_nop(plVar2 + iVar7,plVar2 + iVar4,(longlong)(iVar5 - iVar4) << 3);
      }
      iVar7 = iVar7 + (iVar5 - iVar4);
    }
    bVar8 = (bool)(bVar8 ^ 1);
    iVar4 = iVar5;
    if (lVar6 <= lVar3) {
      *(int *)(param_1 + 0xb) = iVar7;
      return iVar1 - iVar7;
    }
  } while( true );
}



// FUNCTION 140740d30 Remove body=203 status=ok
// SIG undefined Remove(void)

void TMulticastScriptDelegate<FWeakObjectPtr>::Remove
               (longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar7 = lVar1;
  do {
    if (lVar7 == (longlong)(int)lVar2 * 0x10 + lVar1) {
LAB_140740ddb:
      CompactInvocationList(param_1);
      return;
    }
    if (((*(longlong *)(lVar7 + 8) == param_3) && (param_2 != 0)) &&
       (lVar3 = FWeakObjectPtr::GetEvenIfUnreachable(lVar7), param_2 == lVar3)) {
      iVar6 = (int)(lVar7 - lVar1 >> 4);
      if (iVar6 != -1) {
        iVar5 = (int)param_1[1];
        iVar4 = (iVar5 - iVar6) + -1;
        if (0 < iVar4) {
          iVar4 = 1;
        }
        if (iVar4 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar6 * 0x10 + *param_1),
                     (void *)((longlong)(iVar5 - iVar4) * 0x10 + *param_1),(longlong)iVar4 << 4);
          iVar5 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar5 + -1;
      }
      goto LAB_140740ddb;
    }
    lVar7 = lVar7 + 0x10;
  } while( true );
}



// FUNCTION 140740e00 Remove body=415 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,uint *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  undefined4 *puVar9;
  longlong lVar10;
  uint local_res8;
  uint local_resc;
  undefined4 local_res18;
  undefined4 local_res1c;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  lVar7 = (longlong)(int)((param_2[1] ^ *param_2) & (int)param_1[9] - 1U);
  plVar5 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar5 = param_1 + 7;
  }
  piVar8 = (int *)((longlong)plVar5 + lVar7 * 4);
  iVar2 = *(int *)((longlong)plVar5 + lVar7 * 4);
  while( true ) {
    if (iVar2 == -1) {
      return 0;
    }
    local_res8 = *param_2;
    local_resc = param_2[1];
    puVar9 = (undefined4 *)((longlong)iVar2 * 0x20 + *param_1);
    local_res18 = *puVar9;
    local_res1c = puVar9[1];
    cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_res18,&local_res8);
    if (cVar4 != '\0') break;
    iVar2 = puVar9[6];
    piVar8 = puVar9 + 6;
  }
  iVar2 = *piVar8;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar7 = *param_1;
    lVar10 = (longlong)iVar2 * 0x20;
    lVar6 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar10 + 0x1c + lVar7));
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    piVar8 = (int *)((longlong)plVar5 + lVar6 * 4);
    iVar3 = *(int *)((longlong)plVar5 + lVar6 * 4);
    while (iVar3 != -1) {
      if (iVar3 == iVar2) {
        *piVar8 = *(int *)(lVar10 + 0x18 + lVar7);
        break;
      }
      piVar8 = (int *)(lVar7 + 0x18 + (longlong)iVar3 * 0x20);
      iVar3 = *piVar8;
    }
  }
  plVar5 = *(longlong **)((longlong)iVar2 * 0x20 + *param_1 + 0x10);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar8 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar2,1);
  return 1;
}



// FUNCTION 140740fa0 ResizeAllocation body=141 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<8,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>::
     ResizeAllocation(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (param_3 < 9) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2);
    pvVar1 = *(void **)((longlong)param_1 + 8);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    param_4 = 0;
  }
  else {
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_3 != 0) {
        pvVar1 = (void *)FMemory::Realloc(0,(int)param_3 * param_4,0);
        *(void **)((longlong)param_1 + 8) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 8) = uVar2;
  return;
}



// FUNCTION 140741030 ResizeAllocation body=149 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<10,FDefaultAllocator>::ForElementType<FName>::ResizeAllocation
               (void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x50);
  if (param_3 < 0xb) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 3);
    pvVar1 = *(void **)((longlong)param_1 + 0x50);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    param_4 = 0;
  }
  else {
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_3 != 0) {
        pvVar1 = (void *)FMemory::Realloc(0,(int)param_3 * param_4,0);
        *(void **)((longlong)param_1 + 0x50) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 3);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x50) = uVar2;
  return;
}



// FUNCTION 1407410d0 ResizeAllocation body=161 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<20,TSizedDefaultAllocator<32>_>::ForElementType<ASBZAICharacter_*>::
     ResizeAllocation(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0xa0);
  if (param_3 < 0x15) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 3);
    pvVar1 = *(void **)((longlong)param_1 + 0xa0);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    param_4 = 0;
  }
  else {
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_3 != 0) {
        pvVar1 = (void *)FMemory::Realloc(0,(int)param_3 * param_4,0);
        *(void **)((longlong)param_1 + 0xa0) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 3);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0xa0) = uVar2;
  return;
}



// FUNCTION 140741180 ResizeAllocation body=149 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<8,FDefaultAllocator>::ForElementType<USkeletalMeshComponent_*>::
     ResizeAllocation(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x40);
  if (param_3 < 9) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 3);
    pvVar1 = *(void **)((longlong)param_1 + 0x40);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    param_4 = 0;
  }
  else {
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_3 != 0) {
        pvVar1 = (void *)FMemory::Realloc(0,(int)param_3 * param_4,0);
        *(void **)((longlong)param_1 + 0x40) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 3);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar2;
  return;
}



// FUNCTION 140741220 ResizeAllocation body=161 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<16,TSizedDefaultAllocator<32>_>::ForElementType<FGameplayTag>::
     ResizeAllocation(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x80);
  if (param_3 < 0x11) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 3);
    pvVar1 = *(void **)((longlong)param_1 + 0x80);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    param_4 = 0;
  }
  else {
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_3 != 0) {
        pvVar1 = (void *)FMemory::Realloc(0,(int)param_3 * param_4,0);
        *(void **)((longlong)param_1 + 0x80) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 3);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x80) = uVar2;
  return;
}



// FUNCTION 1407412d0 ResizeForCopy body=112 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<UProperty_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeForCopy
               (longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != param_3) {
    TInlineAllocator<8,FDefaultAllocator>::ForElementType<USkeletalMeshComponent_*>::
    ResizeAllocation(param_1,0,iVar1,8);
  }
  *(int *)(param_1 + 0x4c) = iVar1;
  return;
}



// FUNCTION 140741340 ResizeGrow body=120 status=ok
// SIG undefined ResizeGrow(void)

void TArray<unsigned_char,TInlineAllocator<8,TSizedDefaultAllocator<32>_>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 < 9) {
    iVar2 = 8;
  }
  else {
    lVar3 = 4;
    if ((*(int *)(param_1 + 0x14) != 0) || (4 < uVar1)) {
      lVar3 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    iVar2 = FMemory::QuantizeSize(lVar3,0);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x14) = iVar2;
  TInlineAllocator<8,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>::ResizeAllocation
            (param_1,param_2,iVar2,1);
  return;
}



// FUNCTION 1407413c0 FUN_1407413c0 body=261 status=ok
// SIG undefined FUN_1407413c0(void)

void FUN_1407413c0(void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x198);
  if (uVar1 < 0x33) {
    uVar2 = 0x32;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x19c) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 * 8,0);
    uVar2 = (uint)(uVar3 >> 3);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x19c) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 400);
  if (uVar2 < 0x33) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 3);
    pvVar4 = *(void **)((longlong)param_1 + 400);
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
        *(void **)((longlong)param_1 + 400) = pvVar4;
      }
      _guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 3);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 3;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 400) = uVar5;
  return;
}



// FUNCTION 1407414d0 ResizeGrow body=132 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FName,TInlineAllocator<10,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  if (uVar1 < 0xb) {
    iVar2 = 10;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x5c) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 * 8,0);
    iVar2 = (int)(uVar3 >> 3);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x5c) = iVar2;
  TInlineAllocator<10,FDefaultAllocator>::ForElementType<FName>::ResizeAllocation
            (param_1,param_2,iVar2,8);
  return;
}



// FUNCTION 140741560 FUN_140741560 body=141 status=ok
// SIG undefined FUN_140741560(void)

void FUN_140741560(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0xa8);
  if (uVar1 < 0x15) {
    iVar2 = 0x14;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0xac) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 * 8,0);
    iVar2 = (int)(uVar3 >> 3);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0xac) = iVar2;
  TInlineAllocator<20,TSizedDefaultAllocator<32>_>::ForElementType<ASBZAICharacter_*>::
  ResizeAllocation(param_1,param_2,iVar2,8);
  return;
}



// FUNCTION 1407415f0 ResizeGrow body=132 status=ok
// SIG undefined ResizeGrow(void)

void TArray<USkeletalMeshComponent_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (uVar1 < 9) {
    iVar2 = 8;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x4c) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 * 8,0);
    iVar2 = (int)(uVar3 >> 3);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x4c) = iVar2;
  TInlineAllocator<8,FDefaultAllocator>::ForElementType<USkeletalMeshComponent_*>::ResizeAllocation
            (param_1,param_2,iVar2,8);
  return;
}



// FUNCTION 140741680 ResizeGrow body=141 status=ok
// SIG undefined ResizeGrow(void)

void TArray<AEmitter_*,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (uVar1 < 0x11) {
    iVar2 = 0x10;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x8c) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 * 8,0);
    iVar2 = (int)(uVar3 >> 3);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x8c) = iVar2;
  TInlineAllocator<16,TSizedDefaultAllocator<32>_>::ForElementType<FGameplayTag>::ResizeAllocation
            (param_1,param_2,iVar2,8);
  return;
}



// FUNCTION 140741710 ResizeShrink body=144 status=ok
// SIG undefined ResizeShrink(void)

void TArray<FLinearAllocation,TInlineAllocator<10,FDefaultAllocator>_>::ResizeShrink
               (longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x58);
  uVar3 = *(uint *)(param_1 + 0x5c);
  if (uVar2 < 0xb) {
    uVar2 = 10;
    goto LAB_140741779;
  }
  if ((0x3fff < (ulonglong)((longlong)(int)(uVar3 - uVar2) << 3)) ||
     ((int)(uVar2 * 3) < (int)(uVar3 * 2))) {
    if (0x40 < uVar3 - uVar2) {
      if (0 < (int)uVar2) {
        uVar1 = FMemory::QuantizeSize((longlong)(int)uVar2 << 3,0);
        uVar3 = *(uint *)(param_1 + 0x5c);
        uVar2 = (uint)(uVar1 >> 3);
      }
      goto LAB_140741779;
    }
    if (uVar2 == 0) goto LAB_140741779;
  }
  uVar2 = uVar3;
LAB_140741779:
  if (uVar2 != uVar3) {
    *(uint *)(param_1 + 0x5c) = uVar2;
    TInlineAllocator<10,FDefaultAllocator>::ForElementType<FName>::ResizeAllocation
              (param_1,*(undefined4 *)(param_1 + 0x58),uVar2,8);
    return;
  }
  return;
}



// FUNCTION 1407417a0 FUN_1407417a0 body=159 status=ok
// SIG undefined FUN_1407417a0(void)

void FUN_1407417a0(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0xa8);
  uVar3 = *(uint *)(param_1 + 0xac);
  if (uVar2 < 0x15) {
    uVar2 = 0x14;
    goto LAB_140741812;
  }
  if ((0x3fff < (ulonglong)((longlong)(int)(uVar3 - uVar2) << 3)) ||
     ((int)(uVar2 * 3) < (int)(uVar3 * 2))) {
    if (0x40 < uVar3 - uVar2) {
      if (0 < (int)uVar2) {
        uVar1 = FMemory::QuantizeSize((longlong)(int)uVar2 << 3,0);
        uVar3 = *(uint *)(param_1 + 0xac);
        uVar2 = (uint)(uVar1 >> 3);
      }
      goto LAB_140741812;
    }
    if (uVar2 == 0) goto LAB_140741812;
  }
  uVar2 = uVar3;
LAB_140741812:
  if (uVar2 != uVar3) {
    *(uint *)(param_1 + 0xac) = uVar2;
    TInlineAllocator<20,TSizedDefaultAllocator<32>_>::ForElementType<ASBZAICharacter_*>::
    ResizeAllocation(param_1,*(undefined4 *)(param_1 + 0xa8),uVar2,8);
    return;
  }
  return;
}



// FUNCTION 140741840 ResizeTo body=93 status=ok
// SIG undefined ResizeTo(void)

void TArray<unsigned_char,TInlineAllocator<8,TSizedDefaultAllocator<32>_>_>::ResizeTo
               (longlong param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 9) {
      iVar1 = 8;
    }
    else {
      iVar1 = FMemory::QuantizeSize((longlong)(int)param_2,0);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0x14)) {
    *(int *)(param_1 + 0x14) = iVar1;
    TInlineAllocator<8,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>::ResizeAllocation
              (param_1,*(undefined4 *)(param_1 + 0x10),iVar1,1);
  }
  return;
}



// FUNCTION 1407418a0 FUN_1407418a0 body=110 status=ok
// SIG undefined FUN_1407418a0(void)

void FUN_1407418a0(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x11) {
      iVar1 = 0x10;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0x8c)) {
    *(int *)(param_1 + 0x8c) = iVar1;
    TInlineAllocator<16,TSizedDefaultAllocator<32>_>::ForElementType<FGameplayTag>::ResizeAllocation
              (param_1,*(undefined4 *)(param_1 + 0x88),iVar1,8);
  }
  return;
}



// FUNCTION 140741910 FUN_140741910 body=25 status=ok
// SIG undefined FUN_140741910(void)

char FUN_140741910(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x298))();
  return (cVar1 == '\0') + '\x01';
}



// FUNCTION 140741930 FUN_140741930 body=883 status=ok
// SIG undefined FUN_140741930(void)

void FUN_140741930(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  short sVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  char cVar10;
  float fVar11;
  LARGE_INTEGER local_res10;
  longlong *local_78;
  int local_70;
  double local_68;
  undefined8 local_60;
  char local_57;
  byte local_56;
  
  lVar7 = *(longlong *)(param_2 + 0x170);
  if (lVar7 != 0) {
    lVar6 = FUN_142c3ef00();
    lVar7 = *(longlong *)(lVar7 + 0x10);
    if ((*(int *)(lVar7 + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar7 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (((bVar3) && (lVar7 = FWeakObjectPtr::Get(param_2 + 0x34), lVar7 != 0)) &&
       (lVar6 = UEngine::GetWorldFromContextObject(DAT_146b17150,lVar7,1), lVar6 != 0)) {
      lVar6 = FUN_1429d7ab0();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        uVar8 = FWeakObjectPtr::Get(param_2 + 0x34);
        FAIDataProviderValue::BindData(param_1 + 0x60,uVar8,*(undefined4 *)(param_2 + 0x30));
        cVar5 = FAIDataProviderBoolValue::GetValue(param_1 + 0x60);
        FUN_142bd2270(&local_78,param_1,param_2,0xffffffff);
LAB_140741a80:
        if ((int)local_78[1] <= local_70) goto LAB_140741ace;
        if ((*(byte *)((longlong)local_78 + 0x156) & 1) != 0) goto LAB_140741ace;
        if ((0.0 <= local_68) &&
           (QueryPerformanceCounter(&local_res10),
           local_68 <= (double)local_res10.QuadPart * DAT_1468b02f8 + 16777216.0))
        goto LAB_140741ace;
        bVar3 = true;
        do {
          if (!bVar3) {
            *(int *)(local_78 + 0x27) = local_70;
            return;
          }
          lVar6 = UEnvQueryItemType_Actor::GetValue
                            (((longlong)(*(int *)(*local_78 + 4 + (longlong)local_70 * 0xc) * 2) >>
                             1) + local_78[3]);
          if (lVar6 == 0) {
LAB_140741b50:
            cVar10 = '\0';
          }
          else {
            lVar9 = ACameraActor::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (!bVar3) goto LAB_140741b50;
            if ((*(longlong *)(lVar6 + 0x7f8) == 0) || (*(longlong *)(lVar6 + 0x7f8) != lVar7)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (!bVar3) goto LAB_140741b50;
            cVar10 = '\x01';
          }
          if ((local_56 & 2) == 0) {
            cVar1 = *(char *)(param_1 + 0x5a);
            if ((((cVar1 == '\0') || (cVar1 == '\x01')) || (cVar1 == '\x02')) ||
               ((cVar1 != '\x03' || (cVar10 != cVar5)))) {
              if ((local_56 & 4) == 0) {
                fVar11 = 0.0;
                goto LAB_140741b91;
              }
            }
            else {
              fVar11 = 1.0;
LAB_140741b91:
              sVar4 = local_60._4_2_;
              if (local_57 == '\0') {
                local_60 = CONCAT44(local_60._4_4_,(float)local_60 + fVar11);
              }
              else if (local_57 == '\x01') {
                if ((sVar4 == 0) || (fVar11 < (float)local_60)) {
LAB_140741bcc:
                  local_60 = CONCAT44(local_60._4_4_,fVar11);
                }
              }
              else if (local_57 == '\x02') {
                if (sVar4 == 0) goto LAB_140741bcc;
                if ((float)local_60 < fVar11) {
                  local_60 = CONCAT44(local_60._4_4_,fVar11);
                }
              }
              local_60._0_6_ = CONCAT24(sVar4 + 1,(float)local_60);
            }
            local_60 = CONCAT26(local_60._6_2_ + 1,(undefined6)local_60);
          }
          FUN_142bf3280(&local_78);
          if ((*(byte *)((longlong)local_78 + 0x156) & 1) != 0) goto LAB_140741a80;
          local_70 = local_70 + 1;
          local_60 = 0;
          local_56 = local_56 & 0xfd | 1;
          if (local_70 < (int)local_78[1]) goto LAB_140741c30;
LAB_140741ace:
          bVar3 = false;
        } while( true );
      }
    }
  }
  return;
LAB_140741c30:
  do {
    uVar2 = *(uint *)(*local_78 + 4 + (longlong)local_70 * 0xc);
    if (((uVar2 >> 0x1e & 1) == 0) && (-1 < (int)uVar2)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
  } while ((!bVar3) && (local_70 = local_70 + 1, local_70 < (int)local_78[1]));
  goto LAB_140741a80;
}



// FUNCTION 140741cb0 FUN_140741cb0 body=900 status=ok
// SIG undefined FUN_140741cb0(void)

void FUN_140741cb0(longlong param_1,longlong param_2)

{
  uint uVar1;
  short sVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  float fVar10;
  LARGE_INTEGER local_res10;
  longlong local_88 [2];
  longlong *local_78;
  int local_70;
  double local_68;
  undefined8 local_60;
  char local_57;
  byte local_56;
  
  lVar8 = *(longlong *)(param_2 + 0x170);
  if (lVar8 != 0) {
    lVar5 = FUN_142c3ef00();
    lVar8 = *(longlong *)(lVar8 + 0x10);
    if ((*(int *)(lVar8 + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar8 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) {
      local_88[0] = 0;
      local_88[1] = 0;
      lVar8 = 0;
      if (*(longlong *)(param_1 + 0x1d8) != 0) {
        lVar6 = UEnvQueryContext::GetPrivateStaticClass();
        for (lVar5 = *(longlong *)(param_1 + 0x1d8);
            (lVar8 = 0, lVar5 != 0 && (lVar8 = *(longlong *)(param_1 + 0x1d8), lVar5 != lVar6));
            lVar5 = *(longlong *)(lVar5 + 0x30)) {
        }
      }
      cVar3 = FUN_142bedad0(param_2,lVar8,local_88);
      if (cVar3 != '\0') {
        uVar7 = FWeakObjectPtr::Get(param_2 + 0x34);
        FAIDataProviderValue::BindData(param_1 + 0x1e0,uVar7,*(undefined4 *)(param_2 + 0x30));
        cVar3 = FAIDataProviderBoolValue::GetValue(param_1 + 0x1e0);
        if (cVar3 != '\0') {
          FAIDataProviderValue::BindData(param_1 + 0x60,uVar7,*(undefined4 *)(param_2 + 0x30));
          cVar3 = FAIDataProviderBoolValue::GetValue(param_1 + 0x60);
          FUN_142bd2270(&local_78,param_1,param_2,0xffffffff);
LAB_140741e08:
          if ((int)local_78[1] <= local_70) goto LAB_140741e56;
          if ((*(byte *)((longlong)local_78 + 0x156) & 1) != 0) goto LAB_140741e56;
          if ((0.0 <= local_68) &&
             (QueryPerformanceCounter(&local_res10),
             local_68 <= (double)local_res10.QuadPart * DAT_1468b02f8 + 16777216.0))
          goto LAB_140741e56;
          bVar9 = true;
          do {
            if (!bVar9) {
              *(int *)(local_78 + 0x27) = local_70;
              break;
            }
            lVar8 = UEnvQueryItemType_Actor::GetValue
                              (((longlong)(*(int *)(*local_78 + 4 + (longlong)local_70 * 0xc) * 2)
                               >> 1) + local_78[3]);
            if (lVar8 == 0) {
LAB_140741ecd:
              bVar9 = false;
            }
            else {
              lVar5 = ACameraActor::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
                bVar9 = false;
              }
              else {
                bVar9 = true;
              }
              if ((!bVar9) || (cVar4 = FUN_14073ce60(lVar8), cVar4 != '\0')) goto LAB_140741ecd;
              bVar9 = true;
            }
            if ((local_56 & 2) == 0) {
              cVar4 = *(char *)(param_1 + 0x5a);
              if ((((cVar4 == '\0') || (cVar4 == '\x01')) || (cVar4 == '\x02')) ||
                 ((cVar4 != '\x03' || (bVar9 == (cVar3 == '\0'))))) {
                if ((local_56 & 4) == 0) {
                  fVar10 = 0.0;
                  goto LAB_140741f09;
                }
              }
              else {
                fVar10 = 1.0;
LAB_140741f09:
                sVar2 = local_60._4_2_;
                if (local_57 == '\0') {
                  local_60 = CONCAT44(local_60._4_4_,(float)local_60 + fVar10);
                }
                else if (local_57 == '\x01') {
                  if ((sVar2 == 0) || (fVar10 < (float)local_60)) {
LAB_140741f44:
                    local_60 = CONCAT44(local_60._4_4_,fVar10);
                  }
                }
                else if (local_57 == '\x02') {
                  if (sVar2 == 0) goto LAB_140741f44;
                  if ((float)local_60 < fVar10) {
                    local_60 = CONCAT44(local_60._4_4_,fVar10);
                  }
                }
                local_60._0_6_ = CONCAT24(sVar2 + 1,(float)local_60);
              }
              local_60 = CONCAT26(local_60._6_2_ + 1,(undefined6)local_60);
            }
            FUN_142bf3280(&local_78);
            if ((*(byte *)((longlong)local_78 + 0x156) & 1) != 0) goto LAB_140741e08;
            local_70 = local_70 + 1;
            local_60 = 0;
            local_56 = local_56 & 0xfd | 1;
            if (local_70 < (int)local_78[1]) goto LAB_140741fb0;
LAB_140741e56:
            bVar9 = false;
          } while( true );
        }
      }
      if (local_88[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
LAB_140741fb0:
  do {
    uVar1 = *(uint *)(*local_78 + 4 + (longlong)local_70 * 0xc);
    if (((uVar1 >> 0x1e & 1) == 0) && (-1 < (int)uVar1)) {
      bVar9 = true;
    }
    else {
      bVar9 = false;
    }
  } while ((!bVar9) && (local_70 = local_70 + 1, local_70 < (int)local_78[1]));
  goto LAB_140741e08;
}



// FUNCTION 140742040 FUN_140742040 body=1041 status=ok
// SIG undefined FUN_140742040(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140742040(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  short sVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  char cVar12;
  float fVar13;
  undefined1 auStack_128 [32];
  longlong *local_108;
  int local_100;
  double local_f8;
  undefined8 local_f0;
  char local_e7;
  byte local_e6;
  longlong local_e0;
  undefined8 local_d8;
  LARGE_INTEGER local_d0;
  undefined1 local_c8 [64];
  longlong local_88;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  lVar10 = *(longlong *)(param_2 + 0x170);
  if (lVar10 != 0) {
    lVar7 = FUN_142c3ef00();
    lVar10 = *(longlong *)(lVar10 + 0x10);
    if ((*(int *)(lVar10 + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar10 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      local_e0 = 0;
      local_d8 = 0;
      lVar10 = 0;
      if (*(longlong *)(param_1 + 0x1d8) != 0) {
        lVar8 = UEnvQueryContext::GetPrivateStaticClass();
        for (lVar7 = *(longlong *)(param_1 + 0x1d8);
            (lVar10 = 0, lVar7 != 0 && (lVar10 = *(longlong *)(param_1 + 0x1d8), lVar7 != lVar8));
            lVar7 = *(longlong *)(lVar7 + 0x30)) {
        }
      }
      cVar6 = FUN_142bedad0(param_2,lVar10,&local_e0);
      if (cVar6 != '\0') {
        uVar9 = FWeakObjectPtr::Get(param_2 + 0x34);
        FAIDataProviderValue::BindData(param_1 + 0x1e0,uVar9,*(undefined4 *)(param_2 + 0x30));
        cVar6 = FAIDataProviderBoolValue::GetValue(param_1 + 0x1e0);
        if (cVar6 != '\0') {
          FAIDataProviderValue::BindData(param_1 + 0x60,uVar9,*(undefined4 *)(param_2 + 0x30));
          cVar6 = FAIDataProviderBoolValue::GetValue(param_1 + 0x60);
          FUN_142bd2270(&local_108,param_1,param_2,0xffffffff);
LAB_1407421c0:
          if ((int)local_108[1] <= local_100) goto LAB_140742214;
          if ((*(byte *)((longlong)local_108 + 0x156) & 1) != 0) goto LAB_140742214;
          if ((0.0 <= local_f8) &&
             (QueryPerformanceCounter(&local_d0),
             local_f8 <= (double)local_d0.QuadPart * DAT_1468b02f8 + 16777216.0))
          goto LAB_140742214;
          bVar4 = true;
          do {
            if (!bVar4) {
              *(int *)(local_108 + 0x27) = local_100;
              break;
            }
            lVar10 = UEnvQueryItemType_Actor::GetValue
                               (((longlong)
                                 (*(int *)(*local_108 + 4 + (longlong)local_100 * 0xc) * 2) >> 1) +
                                local_108[3]);
            if (lVar10 == 0) {
LAB_1407422c2:
              cVar12 = '\0';
            }
            else {
              lVar7 = ACameraActor::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (!bVar4) goto LAB_1407422c2;
              cVar12 = '\x01';
              lVar7 = local_e0 + (longlong)(int)local_d8 * 0xc;
              lVar8 = local_e0;
              if (local_e0 != lVar7) {
                do {
                  lVar11 = FUN_14073a8a0(lVar10,local_c8,lVar8);
                  iVar2 = *(int *)(lVar11 + 0x48);
                  if (local_88 != 0) {
                    FMemory::Free();
                  }
                  if (iVar2 < 1) goto LAB_1407422c2;
                  lVar8 = lVar8 + 0xc;
                } while (lVar8 != lVar7);
                cVar12 = '\x01';
              }
            }
            if ((local_e6 & 2) == 0) {
              cVar1 = *(char *)(param_1 + 0x5a);
              if ((((cVar1 == '\0') || (cVar1 == '\x01')) || (cVar1 == '\x02')) ||
                 ((cVar1 != '\x03' || (cVar12 != cVar6)))) {
                if ((local_e6 & 4) == 0) {
                  fVar13 = 0.0;
                  goto LAB_140742304;
                }
              }
              else {
                fVar13 = 1.0;
LAB_140742304:
                sVar5 = local_f0._4_2_;
                if (local_e7 == '\0') {
                  local_f0 = CONCAT44(local_f0._4_4_,(float)local_f0 + fVar13);
                }
                else if (local_e7 == '\x01') {
                  if ((sVar5 == 0) || (fVar13 < (float)local_f0)) {
LAB_140742344:
                    local_f0 = CONCAT44(local_f0._4_4_,fVar13);
                  }
                }
                else if (local_e7 == '\x02') {
                  if (sVar5 == 0) goto LAB_140742344;
                  if ((float)local_f0 < fVar13) {
                    local_f0 = CONCAT44(local_f0._4_4_,fVar13);
                  }
                }
                local_f0._0_6_ = CONCAT24(sVar5 + 1,(float)local_f0);
              }
              local_f0 = CONCAT26(local_f0._6_2_ + 1,(undefined6)local_f0);
            }
            FUN_142bf3280(&local_108);
            if ((*(byte *)((longlong)local_108 + 0x156) & 1) != 0) goto LAB_1407421c0;
            local_100 = local_100 + 1;
            local_f0 = 0;
            local_e6 = local_e6 & 0xfd | 1;
            if (local_100 < (int)local_108[1]) goto LAB_1407423b0;
LAB_140742214:
            bVar4 = false;
          } while( true );
        }
      }
      if (local_e0 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
LAB_1407423b0:
  do {
    uVar3 = *(uint *)(*local_108 + 4 + (longlong)local_100 * 0xc);
    if (((uVar3 >> 0x1e & 1) == 0) && (-1 < (int)uVar3)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
  } while ((!bVar4) && (local_100 = local_100 + 1, local_100 < (int)local_108[1]));
  goto LAB_1407421c0;
}



// FUNCTION 140742460 FUN_140742460 body=3278 status=ok
// SIG undefined FUN_140742460(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140742460(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  short sVar9;
  undefined4 uVar10;
  char cVar11;
  char cVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined8 uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 *puVar20;
  float *pfVar21;
  float *pfVar22;
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
  undefined1 auStack_218 [32];
  char local_1f8;
  char local_1f7;
  char local_1f6;
  float local_1f4;
  float local_1f0;
  longlong *local_1e8;
  int local_1e0;
  double local_1d8;
  undefined8 local_1d0;
  char local_1c7;
  byte local_1c6;
  longlong *local_1c0;
  float *local_1b8;
  undefined8 local_1b0;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  undefined4 uStack_19c;
  float *local_198;
  undefined8 local_190;
  undefined8 local_188;
  float local_180;
  longlong local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  LARGE_INTEGER local_160;
  undefined8 local_158;
  float local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined1 local_138 [64];
  longlong local_f8;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  lVar15 = *(longlong *)(param_2 + 0x170);
  if (lVar15 != 0) {
    lVar13 = FUN_142c3ef00();
    lVar15 = *(longlong *)(lVar15 + 0x10);
    if ((*(int *)(lVar15 + 0x90) < *(int *)(lVar13 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar15 + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8) !=
        lVar13 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (((bVar7) &&
        (plVar14 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x34), plVar14 != (longlong *)0x0)) &&
       (lVar15 = UEngine::GetWorldFromContextObject(DAT_146b17150,plVar14,1), lVar15 != 0)) {
      lVar15 = FUN_1429d7ab0();
      if ((*(int *)(plVar14[2] + 0x90) < *(int *)(lVar15 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar14[2] + 0x88) + (longlong)*(int *)(lVar15 + 0x90) * 8) !=
          lVar15 + 0x88)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if ((bVar7) &&
         (plVar16 = (longlong *)(**(code **)(*plVar14 + 0x678))(plVar14), plVar16 != (longlong *)0x0
         )) {
        local_1c0 = plVar16;
        lVar15 = AHeoCon::GetPrivateStaticClass();
        if ((*(int *)(plVar16[2] + 0x90) < *(int *)(lVar15 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar16[2] + 0x88) + (longlong)*(int *)(lVar15 + 0x90) * 8)
            != lVar15 + 0x88)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (bVar7) {
          uVar17 = FUN_1407a6820();
          lVar15 = (**(code **)(*plVar16 + 0x628))(plVar16,uVar17);
          if (lVar15 != 0) {
            local_178 = lVar15;
            cVar11 = FUN_14073cf40(lVar15);
            local_1f7 = cVar11;
            fVar23 = (float)FUN_140737900(lVar15);
            FAIDataProviderValue::BindData(param_1 + 0x1f0,plVar14,*(undefined4 *)(param_2 + 0x30));
            if (cVar11 == '\0') {
              fVar25 = 1.0;
            }
            else {
              fVar25 = *(float *)(param_1 + 0x250);
            }
            fVar24 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x1f0);
            fVar34 = fVar24 * fVar25;
            if (fVar24 * fVar25 <= fVar23 + 50.0) {
              fVar34 = fVar23 + 50.0;
            }
            FAIDataProviderValue::BindData(param_1 + 0x220,plVar14,*(undefined4 *)(param_2 + 0x30));
            if (cVar11 == '\0') {
              fVar23 = 1.0;
            }
            else {
              fVar23 = *(float *)(param_1 + 0x254);
            }
            fVar25 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x220);
            fVar25 = fVar25 * fVar23;
            FAIDataProviderValue::BindData(param_1 + 600,plVar14,*(undefined4 *)(param_2 + 0x30));
            fVar23 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 600);
            lVar19 = 0;
            local_198 = (float *)0x0;
            local_190 = 0;
            lVar13 = lVar19;
            local_1f4 = fVar23;
            if (*(longlong *)(param_1 + 0x1d8) != 0) {
              lVar18 = UEnvQueryContext::GetPrivateStaticClass();
              for (lVar6 = *(longlong *)(param_1 + 0x1d8);
                  (lVar13 = lVar19, lVar6 != 0 &&
                  (lVar13 = *(longlong *)(param_1 + 0x1d8), lVar6 != lVar18));
                  lVar6 = *(longlong *)(lVar6 + 0x30)) {
              }
            }
            FUN_142bedad0(param_2,lVar13,&local_198);
            FAIDataProviderValue::BindData(param_1 + 0x2e8,plVar14,*(undefined4 *)(param_2 + 0x30));
            fVar24 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x2e8);
            local_1f0 = fVar24;
            FAIDataProviderValue::BindData(param_1 + 0x2b8,plVar14,*(undefined4 *)(param_2 + 0x30));
            local_1f6 = FAIDataProviderBoolValue::GetValue(param_1 + 0x2b8);
            FAIDataProviderValue::BindData(param_1 + 0x288,plVar14,*(undefined4 *)(param_2 + 0x30));
            cVar12 = FAIDataProviderBoolValue::GetValue(param_1 + 0x288);
            local_1b8 = (float *)0x0;
            local_1b0 = 0;
            lVar13 = lVar19;
            local_1f8 = cVar12;
            if (*(longlong *)(param_1 + 0x1e0) != 0) {
              lVar18 = UEnvQueryContext::GetPrivateStaticClass();
              for (lVar6 = *(longlong *)(param_1 + 0x1e0);
                  (lVar13 = lVar19, lVar6 != 0 &&
                  (lVar13 = *(longlong *)(param_1 + 0x1e0), lVar6 != lVar18));
                  lVar6 = *(longlong *)(lVar6 + 0x30)) {
              }
            }
            FUN_142bedad0(param_2,lVar13,&local_1b8);
            FUN_142bd2270(&local_1e8,param_1,param_2,0xffffffff);
LAB_140742832:
            if ((int)local_1e8[1] <= local_1e0) goto LAB_14074288b;
            if ((*(byte *)((longlong)local_1e8 + 0x156) & 1) != 0) goto LAB_14074288b;
            if ((0.0 <= local_1d8) &&
               (QueryPerformanceCounter(&local_160),
               local_1d8 <= (double)local_160.QuadPart * DAT_1468b02f8 + 16777216.0))
            goto LAB_14074288b;
            bVar7 = true;
            do {
              if (!bVar7) {
                *(int *)(local_1e8 + 0x27) = local_1e0;
                if (local_1b8 != (float *)0x0) {
                  FMemory::Free();
                }
                if (local_198 == (float *)0x0) {
                  return;
                }
                FMemory::Free();
                return;
              }
              lVar13 = UEnvQueryItemType_Actor::GetValue
                                 (((longlong)
                                   (*(int *)(*local_1e8 + 4 + (longlong)local_1e0 * 0xc) * 2) >> 1)
                                  + local_1e8[3]);
              if (lVar13 == 0) {
LAB_1407428f2:
                lVar13 = 0;
              }
              else {
                lVar19 = ACameraActor::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar19 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar19 + 0x90) * 8) != lVar19 + 0x88)) {
                  bVar7 = false;
                }
                else {
                  bVar7 = true;
                }
                if (!bVar7) goto LAB_1407428f2;
              }
              if (cVar11 == '\0') {
LAB_14074291a:
                bVar7 = false;
              }
              else {
                if ((*(longlong **)(lVar13 + 0x7f8) == (longlong *)0x0) ||
                   (*(longlong **)(lVar13 + 0x7f8) != plVar16)) {
                  bVar7 = false;
                }
                else {
                  bVar7 = true;
                }
                if (!bVar7) goto LAB_14074291a;
                bVar7 = true;
              }
              bVar8 = false;
              if ((lVar13 != 0) &&
                 (pfVar21 = local_1b8 + (longlong)(int)local_1b0 * 3, pfVar22 = local_1b8,
                 cVar12 = local_1f8, local_1b8 != pfVar21)) {
                do {
                  local_158 = *(undefined8 *)pfVar22;
                  local_150 = pfVar22[2];
                  cVar11 = FUN_14073cb50(lVar15,lVar13,&local_158);
                  if (cVar11 != '\0') {
                    local_1c6 = local_1c6 & 0xfe | 2;
                    local_1d0 = CONCAT44(local_1d0._4_4_,0xff7fffff);
                    goto LAB_140742fcd;
                  }
                  pfVar22 = pfVar22 + 3;
                } while (pfVar22 != pfVar21);
                cVar12 = local_1f8;
              }
              if (bVar7) {
                fVar33 = 1.0;
              }
              else {
                fVar33 = 0.0;
              }
              fVar1 = *(float *)(param_1 + 0x318);
              if ((lVar13 == 0) || (fVar23 <= 0.0)) {
                fVar27 = 0.0;
              }
              else {
                lVar19 = local_1c0[0x2d];
                if (lVar19 == 0) {
                  local_140 = DAT_1468b5d98;
                  puVar20 = &local_148;
                  local_148 = _DAT_1468b5d90;
                }
                else {
                  puVar20 = (undefined8 *)&local_170;
                  local_170 = *(undefined4 *)(lVar19 + 0x220);
                  local_168 = *(undefined4 *)(lVar19 + 0x228);
                  uStack_16c = *(undefined4 *)(lVar19 + 0x224);
                }
                uVar17 = *puVar20;
                local_180 = *(float *)(puVar20 + 1);
                local_1a8 = *(float *)(lVar13 + 0x220);
                fStack_1a4 = *(float *)(lVar13 + 0x224);
                fStack_1a0 = *(float *)(lVar13 + 0x228);
                uStack_19c = *(undefined4 *)(lVar13 + 0x22c);
                lVar19 = *(longlong *)(lVar13 + 0x6f0);
                fVar27 = fStack_1a0;
                if (lVar19 != 0) {
                  if (*(char *)(lVar13 + 0x720) == '\0') {
                    fVar27 = *(float *)(lVar19 + 0x34);
                  }
                  else {
                    fVar27 = *(float *)(lVar19 + 0x38);
                  }
                  fVar27 = fStack_1a0 - fVar27 * 0.5;
                }
                local_188._4_4_ = (float)((ulonglong)uVar17 >> 0x20);
                local_188._0_4_ = (float)uVar17;
                fVar27 = SQRT((local_1a8 - (float)local_188) * (local_1a8 - (float)local_188) +
                              (fStack_1a4 - local_188._4_4_) * (fStack_1a4 - local_188._4_4_) +
                              (fVar27 - local_180) * (fVar27 - local_180));
                local_188 = uVar17;
                if ((fVar27 < 0.0) || (fVar23 < fVar27)) {
                  bVar8 = true;
                  fVar27 = -1.0;
                }
                else {
                  fVar27 = fVar27 / fVar23;
                  if (0.0 <= fVar27) {
                    if (1.0 <= fVar27) {
                      fVar27 = 1.0;
                    }
                    fVar27 = 1.0 - fVar27;
                  }
                  else {
                    fVar27 = 1.0;
                  }
                }
              }
              fVar2 = *(float *)(param_1 + 0x31c);
              fVar23 = local_1f4;
              if (bVar8) {
                local_1c6 = local_1c6 & 0xfe | 2;
                local_1d0 = CONCAT44(local_1d0._4_4_,0xff7fffff);
              }
              else {
                if ((lVar13 == 0) || (fVar25 <= fVar34)) {
                  fVar32 = 0.0;
                }
                else if ((int)local_1b0 == 0) {
                  fVar32 = 1.0;
                }
                else {
                  local_1a8 = *(float *)(lVar13 + 0x220);
                  fStack_1a4 = *(float *)(lVar13 + 0x224);
                  fStack_1a0 = *(float *)(lVar13 + 0x228);
                  uStack_19c = *(undefined4 *)(lVar13 + 0x22c);
                  lVar19 = *(longlong *)(lVar13 + 0x6f0);
                  fVar28 = fStack_1a0;
                  if (lVar19 != 0) {
                    if (*(char *)(lVar13 + 0x720) == '\0') {
                      fVar32 = *(float *)(lVar19 + 0x34);
                    }
                    else {
                      fVar32 = *(float *)(lVar19 + 0x38);
                    }
                    fVar28 = fStack_1a0 - fVar32 * 0.5;
                  }
                  fVar32 = 0.0;
                  for (pfVar21 = local_1b8; pfVar21 != local_1b8 + (longlong)(int)local_1b0 * 3;
                      pfVar21 = pfVar21 + 3) {
                    fVar31 = SQRT((fStack_1a4 - pfVar21[1]) * (fStack_1a4 - pfVar21[1]) +
                                  (local_1a8 - *pfVar21) * (local_1a8 - *pfVar21) +
                                  (fVar28 - pfVar21[2]) * (fVar28 - pfVar21[2]));
                    if ((fVar31 < fVar34) || (fVar25 < fVar31)) {
                      bVar8 = true;
                      fVar32 = -1.0;
                      goto LAB_140742c23;
                    }
                    fVar31 = (fVar31 - fVar34) / (fVar25 - fVar34);
                    if (0.0 <= fVar31) {
                      if (1.0 <= fVar31) {
                        fVar31 = 1.0;
                      }
                    }
                    else {
                      fVar31 = 0.0;
                    }
                    fVar32 = fVar32 + (1.0 - fVar31);
                  }
                  fVar32 = fVar32 / (float)(int)local_1b0;
                }
LAB_140742c23:
                fVar28 = *(float *)(param_1 + 800);
                if (bVar8) {
                  local_1c6 = local_1c6 & 0xfe | 2;
                  local_1d0 = CONCAT44(local_1d0._4_4_,0xff7fffff);
                }
                else {
                  if ((lVar13 == 0) || (1000.0 <= fVar24)) {
                    fVar31 = 0.0;
                  }
                  else if ((int)local_190 == 0) {
                    fVar31 = 1.0;
                  }
                  else {
                    local_1a8 = *(float *)(lVar13 + 0x220);
                    fStack_1a4 = *(float *)(lVar13 + 0x224);
                    fStack_1a0 = *(float *)(lVar13 + 0x228);
                    uStack_19c = *(undefined4 *)(lVar13 + 0x22c);
                    lVar19 = *(longlong *)(lVar13 + 0x6f0);
                    fVar29 = fStack_1a0;
                    if (lVar19 != 0) {
                      if (*(char *)(lVar13 + 0x720) == '\0') {
                        fVar31 = *(float *)(lVar19 + 0x34);
                      }
                      else {
                        fVar31 = *(float *)(lVar19 + 0x38);
                      }
                      fVar29 = fStack_1a0 - fVar31 * 0.5;
                    }
                    fVar31 = 0.0;
                    for (pfVar21 = local_198; pfVar21 != local_198 + (longlong)(int)local_190 * 3;
                        pfVar21 = pfVar21 + 3) {
                      fVar30 = SQRT((local_1a8 - *pfVar21) * (local_1a8 - *pfVar21) +
                                    (fStack_1a4 - pfVar21[1]) * (fStack_1a4 - pfVar21[1]) +
                                    (fVar29 - pfVar21[2]) * (fVar29 - pfVar21[2]));
                      if (fVar30 < fVar24) {
                        bVar8 = true;
                        fVar31 = -1.0;
                        goto LAB_140742d79;
                      }
                      fVar30 = (fVar30 - fVar24) / (1000.0 - fVar24);
                      if (0.0 <= fVar30) {
                        if (1.0 <= fVar30) {
                          fVar30 = 1.0;
                        }
                      }
                      else {
                        fVar30 = 0.0;
                      }
                      fVar31 = fVar31 + fVar30;
                    }
                    fVar31 = fVar31 / (float)(int)local_190;
                  }
LAB_140742d79:
                  fVar30 = -1.0;
                  fVar29 = *(float *)(param_1 + 0x324);
                  if (bVar8) {
                    local_1c6 = local_1c6 & 0xfe | 2;
                    local_1d0 = CONCAT44(local_1d0._4_4_,0xff7fffff);
                  }
                  else {
                    if (((cVar12 != '\0') && (lVar13 != 0)) && (!bVar7)) {
                      pfVar21 = local_1b8 + (longlong)(int)local_1b0 * 3;
                      lVar15 = local_178;
                      for (pfVar22 = local_1b8; local_178 = lVar15, pfVar22 != pfVar21;
                          pfVar22 = pfVar22 + 3) {
                        lVar15 = FUN_14073a8a0(lVar13,local_138,pfVar22);
                        iVar4 = *(int *)(lVar15 + 0x48);
                        if (local_f8 != 0) {
                          FMemory::Free();
                        }
                        lVar15 = local_178;
                        if (iVar4 < 1) {
                          bVar8 = true;
                          goto LAB_140742e05;
                        }
                      }
                    }
                    fVar30 = 1.0;
LAB_140742e05:
                    fVar3 = *(float *)(param_1 + 0x328);
                    if (bVar8) {
                      local_1c6 = local_1c6 & 0xfe | 2;
                      local_1d0 = CONCAT44(local_1d0._4_4_,0xff7fffff);
                      fVar23 = local_1f4;
                      fVar24 = local_1f0;
                    }
                    else {
                      if (((local_1f6 == '\0') || (lVar13 == 0)) ||
                         ((bVar7 || (cVar11 = FUN_14073ce60(lVar13,&local_1b8), cVar11 == '\0')))) {
                        fVar26 = 1.0;
                      }
                      else {
                        fVar26 = -1.0;
                        bVar8 = true;
                      }
                      uVar10 = local_1d0._4_4_;
                      fVar23 = local_1f4;
                      fVar24 = local_1f0;
                      if (bVar8) {
                        local_1c6 = local_1c6 & 0xfe | 2;
                        local_1d0 = CONCAT44(local_1d0._4_4_,0xff7fffff);
                      }
                      else {
                        fVar33 = (fVar27 * fVar2 + fVar33 * fVar1 + fVar32 * fVar28 +
                                  fVar31 * fVar29 + fVar30 * fVar3 +
                                 fVar26 * *(float *)(param_1 + 0x32c)) /
                                 (*(float *)(param_1 + 0x318) + *(float *)(param_1 + 0x31c) +
                                  *(float *)(param_1 + 800) + *(float *)(param_1 + 0x324) + fVar3 +
                                 *(float *)(param_1 + 0x32c));
                        if (0.0 <= fVar33) {
                          if (1.0 <= fVar33) {
                            fVar33 = 1.0;
                          }
                        }
                        else {
                          fVar33 = 0.0;
                        }
                        if ((local_1c6 & 2) == 0) {
                          if (*(char *)(param_1 + 0x44) == '\x01') {
LAB_140742f4a:
                            sVar9 = local_1d0._4_2_;
                            if (local_1c7 == '\0') {
                              local_1d0 = CONCAT44(uVar10,(float)local_1d0 + fVar33);
                            }
                            else if (local_1c7 == '\x01') {
                              if ((local_1d0._4_2_ == 0) || (fVar33 < (float)local_1d0)) {
LAB_140742f8a:
                                local_1d0 = CONCAT44(uVar10,fVar33);
                              }
                            }
                            else if (local_1c7 == '\x02') {
                              if (local_1d0._4_2_ == 0) goto LAB_140742f8a;
                              if ((float)local_1d0 < fVar33) {
                                local_1d0 = CONCAT44(uVar10,fVar33);
                              }
                            }
                            local_1d0._0_6_ = CONCAT24(sVar9 + 1,(float)local_1d0);
                          }
                          else {
                            cVar11 = *(char *)(param_1 + 0x5a);
                            if (cVar11 == '\0') {
                              bVar7 = 0.0 <= fVar33;
LAB_140742f46:
                              if (bVar7) goto LAB_140742f4a;
                            }
                            else {
                              if (cVar11 == '\x01') {
                                bVar7 = fVar33 <= 1.0;
                                goto LAB_140742f46;
                              }
                              if (((cVar11 == '\x02') && (0.0 <= fVar33)) && (fVar33 <= 1.0))
                              goto LAB_140742f4a;
                            }
                          }
                          local_1d0 = CONCAT26(local_1d0._6_2_ + 1,(undefined6)local_1d0);
                        }
                      }
                    }
                  }
                }
              }
LAB_140742fcd:
              FUN_142bf3280(&local_1e8);
              plVar16 = local_1c0;
              cVar12 = local_1f8;
              cVar11 = local_1f7;
              if ((*(byte *)((longlong)local_1e8 + 0x156) & 1) != 0) goto LAB_140742832;
              local_1e0 = local_1e0 + 1;
              local_1d0 = 0;
              local_1c6 = local_1c6 & 0xfd | 1;
              if (local_1e0 < (int)local_1e8[1]) goto LAB_140743030;
LAB_14074288b:
              bVar7 = false;
            } while( true );
          }
        }
      }
    }
  }
  return;
LAB_140743030:
  do {
    uVar5 = *(uint *)(*local_1e8 + 4 + (longlong)local_1e0 * 0xc);
    if (((uVar5 >> 0x1e & 1) == 0) && (-1 < (int)uVar5)) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
  } while ((!bVar7) && (local_1e0 = local_1e0 + 1, local_1e0 < (int)local_1e8[1]));
  goto LAB_140742832;
}



// FUNCTION 140743130 FUN_140743130 body=1396 status=ok
// SIG undefined FUN_140743130(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140743130(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  DWORD DVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  LARGE_INTEGER local_res10;
  float local_118;
  float fStack_114;
  undefined8 local_108;
  float fStack_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  int local_e0;
  double local_d8;
  
  lVar10 = *(longlong *)(param_2 + 0x170);
  if (lVar10 != 0) {
    lVar7 = FUN_142c3ef00();
    lVar10 = *(longlong *)(lVar10 + 0x10);
    if ((*(int *)(lVar10 + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar10 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      local_f8 = (undefined8 *)0x0;
      local_f0 = 0;
      lVar10 = 0;
      if (*(longlong *)(param_1 + 0x1d8) != 0) {
        lVar8 = UEnvQueryContext::GetPrivateStaticClass();
        for (lVar7 = *(longlong *)(param_1 + 0x1d8);
            (lVar10 = 0, lVar7 != 0 && (lVar10 = *(longlong *)(param_1 + 0x1d8), lVar7 != lVar8));
            lVar7 = *(longlong *)(lVar7 + 0x30)) {
        }
      }
      cVar5 = FUN_142bedad0(param_2,lVar10,&local_f8);
      if (((cVar5 != '\0') && ((int)local_f0 != 0)) &&
         (plVar9 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x34), plVar9 != (longlong *)0x0)) {
        lVar7 = 1;
        lVar10 = UEngine::GetWorldFromContextObject(DAT_146b17150,plVar9,1);
        if (lVar10 != 0) {
          lVar10 = FUN_1429d7ab0();
          if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
              != lVar10 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if ((bVar4) &&
             (plVar11 = (longlong *)(**(code **)(*plVar9 + 0x678))(plVar9),
             plVar11 != (longlong *)0x0)) {
            uVar12 = FUN_1407a6820();
            lVar10 = (**(code **)(*plVar11 + 0x628))(plVar11,uVar12);
            if (lVar10 != 0) {
              cVar5 = FUN_140746c20(lVar10,&local_res10);
              if ((cVar5 == '\0') || (cVar5 = FUN_14073c9a0(lVar10), cVar5 == '\0')) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              lVar10 = DAT_146858e10;
              cVar5 = FUN_1415ad720(&DAT_1468e2448);
              if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
                 (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
                lVar7 = 0;
              }
              fVar1 = *(float *)(lVar10 + lVar7 * 4);
              fVar2 = *(float *)(local_f8 + 1);
              lVar10 = plVar11[0x2d];
              if (lVar10 == 0) {
                local_108 = _DAT_1468b5d90;
                fStack_100 = DAT_1468b5d98;
              }
              else {
                local_108 = *(undefined8 *)(lVar10 + 0x220);
                fStack_100 = *(float *)(lVar10 + 0x228);
              }
              fStack_114 = (float)((ulonglong)*local_f8 >> 0x20);
              local_118 = (float)*local_f8;
              fVar13 = (float)((ulonglong)local_108 >> 0x20) - fStack_114;
              fVar15 = (float)local_108 - local_118;
              fStack_100 = fStack_100 - fVar2;
              fVar13 = SQRT(fVar13 * fVar13 + fVar15 * fVar15 + fStack_100 * fStack_100);
              FUN_142bd2270(&local_e8,param_1,param_2);
              while( true ) {
                if ((((int)local_e8[1] <= local_e0) ||
                    ((*(byte *)((longlong)local_e8 + 0x156) & 1) != 0)) ||
                   ((0.0 <= local_d8 &&
                    (QueryPerformanceCounter(&local_res10),
                    local_d8 <= (double)local_res10.QuadPart * DAT_1468b02f8 + 16777216.0)))) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if (!bVar3) break;
                lVar10 = UEnvQueryItemType_Actor::GetValue
                                   (((longlong)
                                     (*(int *)(*local_e8 + 4 + (longlong)local_e0 * 0xc) * 2) >> 1)
                                    + local_e8[3]);
                if (lVar10 == 0) {
LAB_14074351c:
                  lVar10 = 0;
                }
                else {
                  lVar7 = ACameraActor::GetPrivateStaticClass();
                  if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                    bVar3 = false;
                  }
                  else {
                    bVar3 = true;
                  }
                  if (!bVar3) goto LAB_14074351c;
                }
                if (bVar4) {
                  uVar12 = 0;
                  if (lVar10 != 0) {
                    fVar15 = *(float *)(lVar10 + 0x228);
                    lVar7 = *(longlong *)(lVar10 + 0x6f0);
                    if (lVar7 != 0) {
                      if (*(char *)(lVar10 + 0x720) == '\0') {
                        fVar14 = *(float *)(lVar7 + 0x34);
                      }
                      else {
                        fVar14 = *(float *)(lVar7 + 0x38);
                      }
                      fVar15 = fVar15 - fVar14 * 0.5;
                    }
                    fVar15 = fVar15 - fVar2;
                    fVar16 = *(float *)(lVar10 + 0x220) - local_118;
                    fVar14 = *(float *)(lVar10 + 0x224) - fStack_114;
                    fVar15 = SQRT(fVar16 * fVar16 + fVar14 * fVar14 + fVar15 * fVar15);
                    if ((0.0 < fVar13) && (fVar15 < fVar13)) {
                      bVar3 = fVar1 < fVar13 - fVar15;
                      goto LAB_1407435d9;
                    }
                    goto LAB_1407435e2;
                  }
                }
                else {
                  if (lVar10 != 0) {
                    if ((*(longlong **)(lVar10 + 0x7f8) == (longlong *)0x0) ||
                       (*(longlong **)(lVar10 + 0x7f8) != plVar9)) {
                      bVar3 = false;
                    }
                    else {
                      bVar3 = true;
                    }
LAB_1407435d9:
                    if (bVar3) {
                      uVar12 = 1;
                      goto LAB_1407435e5;
                    }
                  }
LAB_1407435e2:
                  uVar12 = 0;
                }
LAB_1407435e5:
                FUN_140744110(&local_e8,*(undefined1 *)(param_1 + 0x44),
                              *(undefined1 *)(param_1 + 0x5a),uVar12,1);
                FUN_14072a010(&local_e8);
              }
              *(int *)(local_e8 + 0x27) = local_e0;
            }
          }
        }
      }
      if (local_f8 != (undefined8 *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1407436b0 FUN_1407436b0 body=595 status=ok
// SIG undefined FUN_1407436b0(void)

longlong FUN_1407436b0(float *param_1,undefined8 *param_2,float param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  longlong lVar11;
  float *pfVar12;
  uint uVar13;
  float *pfVar14;
  float fVar15;
  int local_a8;
  uint uStack_a4;
  float fStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int iStack_80;
  uint uStack_7c;
  float *local_78;
  uint uStack_70;
  float fStack_6c;
  undefined8 local_68;
  float *local_60;
  undefined8 uStack_58;
  float *pfStack_50;
  uint uStack_48;
  float fStack_44;
  undefined8 uStack_40;
  
  fVar15 = 0.0;
  if (param_3 < 0.0) {
    iVar8 = rand();
    param_3 = (float)iVar8 * 3.051851e-05;
  }
  fVar2 = *param_1;
  pfVar12 = param_1 + 2;
  uStack_a4 = 1;
  fVar3 = param_1[0xc];
  pfVar1 = param_1 + 6;
  local_a8 = 0;
  fStack_94 = 0.0;
  iStack_90 = 0;
  if (fVar3 != 0.0) {
    pfVar14 = *(float **)(param_1 + 10);
    if (*(float **)(param_1 + 10) == (float *)0x0) {
      pfVar14 = pfVar1;
    }
    fVar4 = *pfVar14;
    iStack_90 = 0;
    local_a8 = 0;
    while (fVar4 == 0.0) {
      lVar11 = (longlong)local_a8;
      iStack_90 = iStack_90 + 0x20;
      iVar8 = local_a8 + 1;
      bVar7 = (int)((int)fVar3 + -1 + ((int)fVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar8;
      if (bVar7) goto LAB_1407437ac;
      fVar4 = pfVar14[lVar11 + 1];
    }
    uStack_a4 = -(int)fVar4 & (uint)fVar4;
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
    fStack_94 = (float)((iStack_90 - iVar8) + 0x1f);
    if ((int)fVar3 < (int)fStack_94) {
LAB_1407437ac:
      fStack_94 = fVar3;
    }
  }
  fVar4 = param_1[0xc];
  uStack_70 = 0xffffffff;
  fStack_6c = fStack_94;
  local_68 = CONCAT44(uStack_8c,iStack_90);
  uStack_58 = CONCAT44(uStack_a4,local_a8);
  uVar13 = (uint)fVar4 & 0xffffffe0;
  iStack_80 = local_a8;
  uStack_7c = uStack_a4;
  local_78 = pfVar1;
  local_60 = pfVar12;
  pfStack_50 = pfVar1;
  uStack_40 = local_68;
  uStack_48 = uStack_70;
  fStack_44 = fStack_6c;
  fStack_94 = fVar4;
  if (fVar4 != fVar3) {
    pfVar14 = *(float **)(param_1 + 10);
    if (*(float **)(param_1 + 10) == (float *)0x0) {
      pfVar14 = pfVar1;
    }
    fVar10 = (float)((uint)pfVar14[(int)fVar4 >> 5] & -1 << (SUB41(fVar4,0) & 0x1f));
    iVar8 = (int)fVar4 >> 5;
    while (fVar10 == 0.0) {
      uVar13 = uVar13 + 0x20;
      if ((int)((int)fVar3 + -1 + ((int)fVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar8)
      goto LAB_140743871;
      fVar10 = pfVar14[(longlong)iVar8 + 1];
      iVar8 = iVar8 + 1;
    }
    uVar9 = -(int)fVar10 & (uint)fVar10;
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
    fStack_94 = (float)((uVar13 - iVar8) + 0x1f);
    if ((int)fVar3 < (int)fStack_94) {
LAB_140743871:
      fStack_94 = fVar3;
    }
  }
  while( true ) {
    lVar11 = (longlong)(int)fStack_6c;
    if ((fStack_6c == fStack_94) && (local_78 == pfVar1)) {
      return (ulonglong)(uint7)(int7)(int3)((uint)fStack_6c >> 8) << 8;
    }
    lVar5 = *(longlong *)pfVar12;
    if ((fVar15 <= param_3 * fVar2) &&
       (param_3 * fVar2 <= fVar15 + *(float *)(lVar5 + 8 + lVar11 * 0x18))) break;
    fVar15 = fVar15 + *(float *)(lVar5 + 8 + lVar11 * 0x18);
    uStack_70 = uStack_70 & ~uStack_7c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
  }
  uVar6 = *(undefined8 *)(lVar5 + lVar11 * 0x18);
  *param_2 = uVar6;
  return CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
}



// FUNCTION 140743910 FUN_140743910 body=402 status=ok
// SIG undefined FUN_140743910(void)

void FUN_140743910(longlong param_1,char param_2)

{
  char local_288 [8];
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined1 local_258;
  undefined1 local_257;
  undefined4 local_254;
  undefined1 local_250;
  undefined1 local_248 [128];
  undefined1 local_1c8;
  undefined1 local_1c0 [128];
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 local_128;
  undefined1 local_127;
  undefined4 local_124;
  undefined1 local_120;
  undefined1 local_118 [128];
  undefined1 local_98;
  undefined1 local_90 [136];
  
  if (param_2 != *(char *)(param_1 + 0x1b0)) {
    *(char *)(param_1 + 0x1b0) = param_2;
    local_124 = *(undefined4 *)(param_1 + 0x32c);
    local_140 = *(undefined8 *)(param_1 + 0x310);
    local_138 = *(undefined8 *)(param_1 + 0x318);
    local_130 = *(undefined8 *)(param_1 + 800);
    local_128 = *(undefined1 *)(param_1 + 0x328);
    local_127 = *(undefined1 *)(param_1 + 0x329);
    local_120 = *(undefined1 *)(param_1 + 0x330);
    FUN_142de2b80(local_118,param_1 + 0x338);
    local_98 = *(undefined1 *)(param_1 + 0x3b8);
    FUN_142de2b80(local_90,param_1 + 0x3c0);
    local_270 = *(undefined8 *)(param_1 + 0x310);
    local_254 = *(undefined4 *)(param_1 + 0x32c);
    local_268 = *(undefined8 *)(param_1 + 0x318);
    local_260 = *(undefined8 *)(param_1 + 800);
    local_258 = *(undefined1 *)(param_1 + 0x328);
    local_257 = *(undefined1 *)(param_1 + 0x329);
    local_250 = *(undefined1 *)(param_1 + 0x330);
    FUN_142de2b80(local_248,param_1 + 0x338);
    local_1c8 = *(undefined1 *)(param_1 + 0x3b8);
    FUN_142de2b80(local_1c0,param_1 + 0x3c0);
    local_280 = local_268;
    local_278 = local_130;
    local_288[0] = param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x180,local_288);
  }
  return;
}



// FUNCTION 140743ab0 FUN_140743ab0 body=12 status=ok
// SIG undefined FUN_140743ab0(void)

void FUN_140743ab0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x1e8) = param_2;
  FUN_1407347f0();
  return;
}



// FUNCTION 140743ac0 FUN_140743ac0 body=462 status=ok
// SIG undefined FUN_140743ac0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140743ac0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  plVar1 = (longlong *)(param_1 + 0x310);
  if (((*plVar1 == 0) || (*(longlong *)(param_1 + 0x318) == 0)) ||
     ((*(longlong *)(param_1 + 800) == 0 && (*(char *)(param_1 + 0x328) != '\0')))) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  FUN_140729c70(param_1 + 0x440,plVar1);
  FUN_140729c70(plVar1);
  lVar7 = *plVar1;
  if (((lVar7 == 0) || (*(longlong *)(param_1 + 0x318) == 0)) ||
     ((*(longlong *)(param_1 + 800) == 0 && (*(char *)(param_1 + 0x328) != '\0')))) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (((*(longlong *)(param_1 + 0x118) != 0) &&
      (*(char *)(*(longlong *)(param_1 + 0x118) + 0x128) == '\x03')) &&
     (lVar2 = *(longlong *)(param_1 + 0x440), lVar2 != lVar7)) {
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x7f0) == *(longlong *)(param_1 + 0x588))) {
      *(longlong *)(lVar2 + 0x7f0) = *(longlong *)(param_1 + 0x588);
      lVar7 = *plVar1;
    }
    if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x7f8) == *(longlong *)(param_1 + 0x588))) {
      *(undefined8 *)(lVar7 + 0x7f0) = 0;
    }
  }
  if (bVar5) {
    if (!bVar6) {
      FUN_140732b90(param_1);
      FUN_140746640(param_1);
      if ((*(longlong *)(param_1 + 0x588) != 0) && (*(longlong *)(param_1 + 0x318) != 0)) {
        FUN_142cbcc70();
      }
      *(undefined8 *)(param_1 + 0x578) = 0;
    }
  }
  else if (bVar6) {
    FUN_14073d650(param_1);
    lVar7 = *(longlong *)(param_1 + 0x588);
    if (((lVar7 != 0) && (*(longlong *)(param_1 + 0x318) != 0)) &&
       (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x318) + 0x38), lVar2 != 0)) {
      lVar3 = *(longlong *)(lVar7 + 0x4d0);
      if (lVar3 == 0) {
        fVar12 = 0.0;
      }
      else {
        uVar8 = *(uint *)(lVar3 + 0x230) & _DAT_146858c40;
        uVar9 = *(uint *)(lVar3 + 0x234) & uRam0000000146858c44;
        uVar10 = *(uint *)(lVar3 + 0x238) & uRam0000000146858c48;
        uVar11 = *(uint *)(lVar3 + 0x23c) & uRam0000000146858c4c;
        auVar13._4_4_ = uVar9;
        auVar13._0_4_ = uVar8;
        auVar13._8_4_ = uVar10;
        auVar13._12_4_ = uVar11;
        auVar14._4_4_ = uVar10;
        auVar14._0_4_ = uVar9;
        auVar14._8_4_ = uVar8;
        auVar14._12_4_ = uVar11;
        auVar14 = minps(auVar13,auVar14);
        auVar4._4_4_ = uVar8;
        auVar4._0_4_ = uVar10;
        auVar4._8_4_ = uVar9;
        auVar4._12_4_ = uVar11;
        auVar14 = minps(auVar14,auVar4);
        fVar12 = auVar14._0_4_ * *(float *)(lVar3 + 0x710);
      }
      FUN_142ccf630(lVar7,*(float *)(lVar2 + 0x3c) - fVar12);
    }
    FUN_140732790(param_1);
    *(undefined1 *)(param_1 + 0x571) = 1;
    FUN_1407466f0(param_1);
  }
  FUN_1407466f0(param_1);
  return;
}



// FUNCTION 140743c90 FUN_140743c90 body=467 status=ok
// SIG undefined FUN_140743c90(void)

undefined8 FUN_140743c90(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined2 local_120;
  undefined4 local_11c;
  undefined1 local_110 [136];
  undefined1 local_88 [128];
  
  plVar1 = (longlong *)(param_1 + 0x1e0);
  if ((((*param_2 != *plVar1) || (param_2[1] != *(longlong *)(param_1 + 0x1e8))) ||
      (param_2[2] != *(longlong *)(param_1 + 0x1f0))) ||
     (((char)param_2[3] != *(char *)(param_1 + 0x1f8) ||
      (*(char *)((longlong)param_2 + 0x19) != *(char *)(param_1 + 0x1f9))))) {
    FUN_140729c70(plVar1);
    if ((((*(longlong *)(param_1 + 0x310) != 0) && (*(longlong *)(param_1 + 0x318) != 0)) &&
        (((*(longlong *)(param_1 + 800) != 0 || (*(char *)(param_1 + 0x328) == '\0')) &&
         (*(char *)(param_1 + 0x571) == '\0')))) && (*(char *)(param_1 + 0x1b0) != '\x02')) {
      *(undefined1 *)(param_1 + 0x571) = 1;
      FUN_1407466f0(param_1);
    }
    FUN_140746bc0(param_1);
    if ((((*(longlong *)(param_1 + 0x310) == 0) || (*(longlong *)(param_1 + 0x318) == 0)) ||
        ((*(longlong *)(param_1 + 800) == 0 && (*(char *)(param_1 + 0x328) != '\0')))) &&
       ((*(int *)(param_1 + 0x578) == 0 && (*(int *)(param_1 + 0x57c) == 0)))) {
      local_128 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_120 = 0x101;
      local_11c = 0x3f400000;
      FUN_142de2eb0(local_110);
      FUN_142de2eb0(local_88);
      FUN_140729c70(plVar1,&local_138);
    }
    if (((*plVar1 == 0) || (*(longlong *)(param_1 + 0x1e8) == 0)) ||
       ((*(longlong *)(param_1 + 0x1f0) == 0 && (*(char *)(param_1 + 0x1f8) != '\0')))) {
      *(undefined8 *)(param_1 + 0x578) = 0;
    }
  }
  if ((((*plVar1 != 0) && (*(longlong *)(param_1 + 0x1e8) != 0)) &&
      ((*(longlong *)(param_1 + 0x1f0) != 0 || (*(char *)(param_1 + 0x1f8) == '\0')))) &&
     ((((*(longlong *)(param_1 + 0x310) != 0 && (*(longlong *)(param_1 + 0x318) != 0)) &&
       ((*(longlong *)(param_1 + 800) != 0 || (*(char *)(param_1 + 0x328) == '\0')))) ||
      ((*(int *)(param_1 + 0x578) != 0 || (*(int *)(param_1 + 0x57c) != 0)))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 140743e70 FUN_140743e70 body=75 status=ok
// SIG undefined FUN_140743e70(void)

void FUN_140743e70(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x488);
  uVar2 = 0;
  uVar3 = (longlong)*(int *)(param_1 + 0x490) & 0x1fffffffffffffff;
  if (plVar1 + *(int *)(param_1 + 0x490) < plVar1) {
    uVar3 = uVar2;
  }
  if (uVar3 != 0) {
    do {
      if (*plVar1 != 0) {
        *(undefined1 *)(*plVar1 + 0x6f8) = param_2;
      }
      plVar1 = plVar1 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar3);
  }
  return;
}



// FUNCTION 140743ec0 FUN_140743ec0 body=7 status=ok
// SIG undefined FUN_140743ec0(void)

void FUN_140743ec0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x6f8) = param_2;
  return;
}



// FUNCTION 140743ed0 FUN_140743ed0 body=565 status=ok
// SIG undefined FUN_140743ed0(void)

undefined8 FUN_140743ed0(longlong param_1,longlong param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  int local_res18;
  char cStackX_1c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58 [3];
  longlong local_40;
  uint local_38;
  undefined4 local_34;
  longlong *local_28;
  
  if (*param_3 != 0) {
    return 3;
  }
  lVar5 = FWeakObjectPtr::Get(param_3 + 4);
  if ((lVar5 == 0) || (plVar3 = *(longlong **)(param_2 + 0x188), plVar3 == (longlong *)0x0)) {
    return 1;
  }
  lVar6 = ARemnantWeaponMod::GetPrivateStaticClass();
  if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return 1;
  }
  if (plVar3[0xc5] == 0) {
    return 1;
  }
  FAIMoveRequest::FAIMoveRequest(local_58);
  local_40 = plVar3[0xaf];
  local_34 = *(undefined4 *)(param_1 + 0x98);
  local_38 = ((((*(byte *)(param_1 + 0x9c) & 1) << 2 | *(byte *)(param_1 + 0x9d) & 1) * 2 |
              *(byte *)(param_1 + 0x9f) & 1) * 2 | *(byte *)(param_1 + 0x9e) & 1) << 3 |
             local_38 & 0xffffff47 | 4;
  local_78 = *(undefined4 *)(lVar5 + 0x220);
  local_74 = *(undefined4 *)(lVar5 + 0x224);
  local_70 = *(undefined4 *)(lVar5 + 0x228);
  uStack_5c = *(undefined4 *)(lVar5 + 0x22c);
  local_68 = local_78;
  uStack_64 = local_74;
  uStack_60 = local_70;
  FAIMoveRequest::SetGoalLocation(local_58,&local_78);
  if (((local_38 & 1) == 0) || (((local_38 & 2) != 0 && (local_58[0] == 0)))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
    (**(code **)(*plVar3 + 0x850))(plVar3,&local_res18,local_58,0);
    if (cStackX_1c == '\x01') {
      uVar7 = 0;
      goto LAB_1407440a7;
    }
    if (cStackX_1c == '\x02') {
      param_3[1] = local_res18;
      FUN_142bce900(param_1,param_2,DAT_146b2c608,local_res18);
      FUN_142bce780(param_1,param_2,DAT_146b2c640);
      uVar7 = 3;
      goto LAB_1407440a7;
    }
  }
  uVar7 = 1;
LAB_1407440a7:
  if (local_28 == (longlong *)0x0) {
    return uVar7;
  }
  LOCK();
  plVar3 = local_28 + 1;
  lVar5 = *plVar3;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)lVar5 == 1) {
    (**(code **)*local_28)(local_28);
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*local_28 + 8))(local_28,1);
      return uVar7;
    }
    return uVar7;
  }
  return uVar7;
}



// FUNCTION 140744110 FUN_140744110 body=152 status=ok
// SIG undefined FUN_140744110(void)

void FUN_140744110(longlong param_1,undefined8 param_2,int param_3,char param_4,char param_5)

{
  char cVar1;
  float fVar2;
  
  if ((*(byte *)(param_1 + 0x22) & 2) != 0) {
    return;
  }
  if ((((param_3 == 0) || (param_3 == 1)) || (param_3 == 2)) ||
     ((param_3 != 3 || (param_4 != param_5)))) {
    if ((*(byte *)(param_1 + 0x22) & 4) != 0) goto LAB_1407441a3;
    fVar2 = 0.0;
  }
  else {
    fVar2 = 1.0;
  }
  cVar1 = *(char *)(param_1 + 0x21);
  if (cVar1 == '\0') {
    fVar2 = fVar2 + *(float *)(param_1 + 0x18);
LAB_14074419a:
    *(float *)(param_1 + 0x18) = fVar2;
  }
  else if (cVar1 == '\x01') {
    if (*(short *)(param_1 + 0x1c) == 0) goto LAB_14074419a;
    if (fVar2 < *(float *)(param_1 + 0x18)) {
      *(short *)(param_1 + 0x1c) = *(short *)(param_1 + 0x1c) + 1;
      *(short *)(param_1 + 0x1e) = *(short *)(param_1 + 0x1e) + 1;
      *(float *)(param_1 + 0x18) = fVar2;
      return;
    }
  }
  else if (cVar1 == '\x02') {
    if (*(short *)(param_1 + 0x1c) == 0) goto LAB_14074419a;
    if (*(float *)(param_1 + 0x18) <= fVar2 && fVar2 != *(float *)(param_1 + 0x18)) {
      *(short *)(param_1 + 0x1c) = *(short *)(param_1 + 0x1c) + 1;
      *(short *)(param_1 + 0x1e) = *(short *)(param_1 + 0x1e) + 1;
      *(float *)(param_1 + 0x18) = fVar2;
      return;
    }
  }
  *(short *)(param_1 + 0x1c) = *(short *)(param_1 + 0x1c) + 1;
LAB_1407441a3:
  *(short *)(param_1 + 0x1e) = *(short *)(param_1 + 0x1e) + 1;
  return;
}



// FUNCTION 1407441b0 FUN_1407441b0 body=236 status=ok
// SIG undefined FUN_1407441b0(void)

void FUN_1407441b0(longlong param_1,char param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined8 local_res8;
  
  if (*(char *)(param_1 + 0x570) == '\0') {
    if (param_2 != '\0') {
      local_res8 = 0xffffffffffffffff;
      fVar2 = (float)FUN_142de77e0(param_1 + 0x760,*(undefined8 *)(param_1 + 0x118),0,&local_res8);
      lVar1 = *(longlong *)(param_1 + 0x120);
      if (lVar1 == 0) {
        lVar1 = FUN_1423407b0(param_1);
        if (lVar1 != 0) goto LAB_14074421d;
        fVar3 = 0.0;
      }
      else {
LAB_14074421d:
        fVar3 = *(float *)(lVar1 + 0x790);
      }
      *(float *)(param_1 + 0x198) = fVar3;
      *(float *)(param_1 + 0x19c) = fVar3 + fVar2;
      *(undefined8 *)(param_1 + 0x1a0) = DAT_1468c21b0;
      FUN_140732c90(param_1,0);
      goto LAB_14074427b;
    }
  }
  else if (param_2 != '\0') goto LAB_14074427b;
  *(undefined4 *)(param_1 + 0x198) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x1a0) = DAT_1468c21b0;
LAB_14074427b:
  *(char *)(param_1 + 0x570) = param_2;
  FUN_140732200(param_1);
  FUN_140746a00(param_1);
  return;
}



// FUNCTION 1407442a0 FUN_1407442a0 body=70 status=ok
// SIG undefined FUN_1407442a0(void)

void FUN_1407442a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0();
    if (lVar1 == 0) {
      *(undefined4 *)(param_1 + 0x26c) = 0;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x26c) = *(undefined4 *)(lVar1 + 0x790);
  return;
}



// FUNCTION 1407442f0 FUN_1407442f0 body=511 status=ok
// SIG undefined FUN_1407442f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1407442f0(longlong param_1)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  if (*(longlong *)(param_1 + 0x310) == 0) {
    return false;
  }
  if (*(longlong *)(param_1 + 0x318) == 0) {
    return false;
  }
  if ((*(longlong *)(param_1 + 800) == 0) && (*(char *)(param_1 + 0x328) != '\0')) {
    return false;
  }
  if (*(longlong *)(param_1 + 0x590) == 0) {
    return false;
  }
  lVar6 = *(longlong *)(param_1 + 0x120);
  if ((lVar6 == 0) && (lVar6 = FUN_1423407b0(), lVar6 == 0)) {
    return false;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x590) + 0x568) == 0) {
    return false;
  }
  cVar3 = FUN_140744520();
  if (cVar3 != '\0') {
    return true;
  }
  fVar1 = *(float *)(lVar6 + 0x790);
  if (((*(char *)(param_1 + 0x1b0) - 1U & 0xfd) == 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x5c0) + 0x2581) != '\0')) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (((*(char *)(param_1 + 0x1b0) == '\a') ||
      (*(char *)(param_1 + 0x571) != *(char *)(param_1 + 0x570))) || (bVar2)) {
    *(float *)(param_1 + 0x194) = fVar1;
    return false;
  }
  if ((*(longlong *)(param_1 + 0x5b8) == 0) || (cVar3 = FUN_14077c9d0(), cVar3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  cVar3 = '\x01';
  if (*(char *)(param_1 + 0x1b0) != '\a') {
    cVar3 = *(char *)(param_1 + 0x571);
  }
  if ((*(longlong *)(param_1 + 0x590) != 0) && (*(longlong *)(param_1 + 0x588) != 0)) {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x588) + 0x168);
    if (lVar6 == 0) {
      local_38 = _DAT_1468b5d90;
      local_30 = DAT_1468b5d98;
    }
    else {
      local_38 = *(undefined8 *)(lVar6 + 0x220);
      local_30 = *(undefined4 *)(lVar6 + 0x228);
    }
    local_28 = local_38;
    local_20 = local_30;
    cVar4 = FUN_1407617b0(*(longlong *)(param_1 + 0x590),&local_28,0,0);
    if (cVar4 != '\0') {
      bVar5 = true;
      goto LAB_1407444a8;
    }
  }
  bVar5 = false;
LAB_1407444a8:
  if ((!bVar2) && (!bVar5)) {
    if (fVar1 < *(float *)(param_1 + 0x194) + *(float *)(param_1 + 400)) {
      return false;
    }
    return true;
  }
  return cVar3 == '\x02';
}



// FUNCTION 1407444f0 FUN_1407444f0 body=48 status=ok
// SIG undefined FUN_1407444f0(void)

ulonglong FUN_1407444f0(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if (((*(char *)(param_1 + 0x1b0) != '\a') &&
      (((*(char *)(param_1 + 0x570) == '\0' || (*(char *)(param_1 + 0x1b0) == '\x03')) &&
       (uVar1 = *(ulonglong *)(param_1 + 0x318), uVar1 != 0)))) && (*(char *)(uVar1 + 0x42) != '\0')
     ) {
    return CONCAT71((int7)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 140744520 FUN_140744520 body=182 status=ok
// SIG undefined FUN_140744520(void)

ulonglong FUN_140744520(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x310);
  if (((((uVar1 != 0) && (*(longlong *)(uVar1 + 0x6f0) != 0)) && (*(char *)(uVar1 + 0x6fa) != '\0'))
      && (((0 < *(int *)(uVar1 + 0x708) && (*(char *)(uVar1 + 0x6f8) != '\0')) &&
          (*(char *)(param_1 + 0x618) == '\0')))) &&
     (((((*(longlong *)(param_1 + 0x318) != 0 &&
         ((*(longlong *)(param_1 + 800) != 0 || (*(char *)(param_1 + 0x328) == '\0')))) &&
        (*(ulonglong *)(param_1 + 0x1e0) != 0)) &&
       ((*(longlong *)(param_1 + 0x1e8) != 0 &&
        (((*(longlong *)(param_1 + 0x1f0) != 0 || (*(char *)(param_1 + 0x1f8) == '\0')) &&
         (*(ulonglong *)(param_1 + 0x1e0) == uVar1)))))) ||
      (((uVar1 = 0, (*(char *)(param_1 + 0x1b0) - 1U & 0xfd) != 0 ||
        (*(int *)(param_1 + 0x578) != 0)) || (*(int *)(param_1 + 0x57c) != 0)))))) {
    return uVar1 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)(uVar1 >> 8),1);
}



// FUNCTION 1407445e0 FUN_1407445e0 body=79 status=ok
// SIG undefined FUN_1407445e0(void)

ulonglong FUN_1407445e0(longlong param_1,int *param_2)

{
  longlong lVar1;
  ulonglong in_RAX;
  
  if (param_2 == (int *)0x0) goto LAB_140744610;
  if (*param_2 == 0) {
    in_RAX = 0;
    if (((*(char *)(param_1 + 100) - 1U & 0xfd) != 0) || (*(char *)(param_1 + 0x188) == '\0'))
    goto LAB_140744610;
    lVar1 = *(longlong *)(param_1 + 0x178);
  }
  else {
    in_RAX = 0;
    if (1 < (byte)(*(char *)(param_1 + 100) - 2U)) goto LAB_140744610;
    if (*(char *)(param_1 + 0x170) != '\0') {
      return 1;
    }
    if (*(char *)(param_1 + 0x188) == '\0') goto LAB_140744610;
    lVar1 = *(longlong *)(param_1 + 0x178);
  }
  in_RAX = 0;
  if (lVar1 != 0) {
    return 1;
  }
LAB_140744610:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140744630 FUN_140744630 body=1173 status=ok
// SIG undefined FUN_140744630(void)

undefined8 FUN_140744630(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  code *pcVar6;
  undefined8 uVar7;
  longlong lVar8;
  code *pcVar9;
  longlong *plVar10;
  longlong local_res10;
  undefined1 local_res18 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [8];
  longlong local_60;
  
  if (param_2 != 0) {
    local_80 = *(longlong *)(param_2 + 0x568);
    if (local_80 != 0) {
      plVar1 = *(longlong **)(param_2 + 0x608);
      local_88 = param_2;
      if (plVar1 == (longlong *)0x0) {
LAB_140744a9d:
        (**(code **)(*param_1 + 0x2d8))(param_1,&local_88);
        *(int *)(param_1 + 0xf) = (int)param_1[0xf] + 1;
        uVar7 = 1;
      }
      else {
        FUN_14071caf0(plVar1,4);
        local_res10 = 0;
        plVar5 = (longlong *)(**(code **)(*param_1 + 0x318))(param_1,local_res18,param_2);
        if (*plVar5 != 0) {
          pcVar6 = (code *)USafeZone::GetPrivateStaticClass();
          pcVar2 = (code *)*plVar5;
          for (pcVar9 = pcVar2; pcVar9 != (code *)0x0; pcVar9 = *(code **)(pcVar9 + 0x30)) {
            if (pcVar9 == pcVar6) {
              if (pcVar2 == (code *)0x0) break;
              lVar8 = plVar1[0x5b];
              if (lVar8 == 0) {
                plVar5 = (longlong *)plVar1[0x44];
                if (plVar5 != (longlong *)0x0) {
                  lVar8 = plVar5[0x1f];
                  if (lVar8 == 0) {
                    (**(code **)(*plVar5 + 0x368))(plVar5);
                    lVar8 = plVar5[0x1f];
                    if (lVar8 == 0) goto LAB_14074477c;
                  }
                  goto LAB_140744760;
                }
              }
              else {
LAB_140744760:
                uStack_90 = &local_res10;
                local_98 = pcVar2;
                FUN_1406f8f90(lVar8,&local_98,&LAB_140722850);
              }
LAB_14074477c:
              if (local_res10 == 0) {
                uStack_70 = 0;
                local_98 = (code *)0x0;
                local_78 = FUN_14073d920;
                pcVar9 = (code *)FMemory::Realloc(0,0x30);
                uStack_90 = (longlong *)CONCAT44(uStack_90._4_4_,3);
                local_98 = pcVar9;
                if (pcVar9 != (code *)0x0) {
                  *(undefined ***)pcVar9 = &PTR_FUN_144060be0;
                  FWeakObjectPtr::operator=(pcVar9 + 8,param_1);
                  *(undefined4 *)(pcVar9 + 0x10) = (undefined4)local_78;
                  *(undefined4 *)(pcVar9 + 0x14) = local_78._4_4_;
                  *(undefined4 *)(pcVar9 + 0x18) = uStack_70;
                  *(undefined4 *)(pcVar9 + 0x1c) = uStack_6c;
                  lVar8 = FDelegateHandle::GenerateNewID();
                  *(longlong *)(pcVar9 + 0x28) = lVar8;
                  *(undefined ***)pcVar9 = &PTR_FUN_144060c28;
                }
                cVar4 = FUN_14071ba40(plVar1,1,pcVar2,&local_98,param_1);
                if ((int)uStack_90 == 0) {
LAB_140744a70:
                  if (local_98 != (code *)0x0) {
                    FMemory::Free(local_98);
                  }
                }
                else if (local_98 != (code *)0x0) {
                  (**(code **)(*(longlong *)local_98 + 0x28))(local_98,0);
                  if (local_98 != (code *)0x0) {
                    local_98 = (code *)FMemory::Realloc(local_98,0,0);
                  }
                  uStack_90 = (longlong *)((ulonglong)uStack_90 & 0xffffffff00000000);
                  goto LAB_140744a70;
                }
                if (cVar4 == '\0') break;
              }
              else {
                if (((plVar1[0x5b] == 0) &&
                    ((**(code **)(*plVar1 + 0x450))(plVar1), plVar1[0x5b] == 0)) ||
                   (plVar1[0x5e] == 0)) break;
                FUN_140707cb0(plVar1 + 0x5a,param_2);
                FUN_1406d48b0(local_68,param_2,plVar1[0x5e],plVar1[0x5d]);
                param_1[0x14] = local_res10;
                local_98 = FUN_14073d920;
                uStack_90 = (longlong *)((ulonglong)uStack_90 & 0xffffffff00000000);
                plVar5 = (longlong *)FMemory::Realloc(0,0x30);
                if (plVar5 != (longlong *)0x0) {
                  *plVar5 = (longlong)&PTR_FUN_144060be0;
                  FWeakObjectPtr::operator=(plVar5 + 1,param_1);
                  *(undefined4 *)(plVar5 + 2) = (undefined4)local_98;
                  *(undefined4 *)((longlong)plVar5 + 0x14) = local_98._4_4_;
                  *(int *)(plVar5 + 3) = (int)uStack_90;
                  *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_90._4_4_;
                  lVar8 = FDelegateHandle::GenerateNewID();
                  plVar5[5] = lVar8;
                  *plVar5 = (longlong)&PTR_FUN_144060c28;
                }
                plVar10 = (longlong *)(local_60 + 8 + *(longlong *)(local_res10 + 0xd8));
                if (&local_78 != plVar10) {
                  if (plVar5 == (longlong *)0x0) {
                    if (((int)plVar10[1] != 0) &&
                       (plVar3 = (longlong *)*plVar10, plVar3 != (longlong *)0x0)) {
                      (**(code **)(*plVar3 + 0x28))(plVar3,0);
                      if (*plVar10 != 0) {
                        lVar8 = FMemory::Realloc(*plVar10,0,0);
                        *plVar10 = lVar8;
                      }
                      *(undefined4 *)(plVar10 + 1) = 0;
                    }
                  }
                  else {
                    (**(code **)(*plVar5 + 0x30))(plVar5,plVar10);
                  }
                }
                if (plVar5 != (longlong *)0x0) {
                  (**(code **)(*plVar5 + 0x28))(plVar5,0);
                  lVar8 = FMemory::Realloc(plVar5,0,0);
                  if (lVar8 != 0) {
                    FMemory::Free(lVar8);
                  }
                }
                local_98 = FUN_14073d920;
                uStack_90 = (longlong *)((ulonglong)uStack_90 & 0xffffffff00000000);
                plVar5 = (longlong *)FMemory::Realloc(0,0x30,0);
                if (plVar5 != (longlong *)0x0) {
                  *plVar5 = (longlong)&PTR_FUN_144060be0;
                  FWeakObjectPtr::operator=(plVar5 + 1,param_1);
                  *(undefined4 *)(plVar5 + 2) = (undefined4)local_98;
                  *(undefined4 *)((longlong)plVar5 + 0x14) = local_98._4_4_;
                  *(int *)(plVar5 + 3) = (int)uStack_90;
                  *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_90._4_4_;
                  lVar8 = FDelegateHandle::GenerateNewID();
                  plVar5[5] = lVar8;
                  *plVar5 = (longlong)&PTR_FUN_144060c28;
                }
                plVar10 = (longlong *)(local_60 + 8 + *(longlong *)(plVar1[0x5b] + 0xd8));
                if (&local_78 != plVar10) {
                  if (plVar5 == (longlong *)0x0) {
                    if (((int)plVar10[1] != 0) &&
                       (plVar3 = (longlong *)*plVar10, plVar3 != (longlong *)0x0)) {
                      (**(code **)(*plVar3 + 0x28))(plVar3,0);
                      if (*plVar10 != 0) {
                        lVar8 = FMemory::Realloc(*plVar10,0,0);
                        *plVar10 = lVar8;
                      }
                      *(undefined4 *)(plVar10 + 1) = 0;
                    }
                  }
                  else {
                    (**(code **)(*plVar5 + 0x30))(plVar5,plVar10);
                  }
                }
                if (plVar5 != (longlong *)0x0) {
                  (**(code **)(*plVar5 + 0x28))(plVar5,0);
                  lVar8 = FMemory::Realloc(plVar5,0,0);
                  if (lVar8 != 0) {
                    FMemory::Free(lVar8);
                  }
                }
                plVar1[0x5a] = (longlong)param_1;
                *(bool *)((longlong)param_1 + 0x7c) =
                     *(char *)(*(longlong *)(local_res10 + 0xd8) + 0x28 + local_60) == '\x02';
              }
              *(undefined1 *)((longlong)param_1 + 0x7d) = 1;
              (**(code **)(*param_1 + 0x300))(param_1,&local_88);
              *(undefined1 *)((longlong)param_1 + 0x7d) = 0;
              goto LAB_140744a9d;
            }
          }
        }
        FUN_14072b980(param_1,param_2);
        uVar7 = 0;
      }
      return uVar7;
    }
  }
  return 0;
}



// FUNCTION 140744ad0 FUN_140744ad0 body=136 status=ok
// SIG undefined FUN_140744ad0(void)

void FUN_140744ad0(longlong param_1,byte param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
  uVar1 = 0;
  plVar3 = *(longlong **)(param_1 + 0x80);
  uVar2 = (longlong)*(int *)(param_1 + 0x88) & 0x1fffffffffffffff;
  if (plVar3 + *(int *)(param_1 + 0x88) < plVar3) {
    uVar2 = uVar1;
  }
  if (uVar2 != 0) {
    do {
      if (*(longlong *)(*plVar3 + 0x608) != 0) {
        FUN_14071caf0(*(longlong *)(*plVar3 + 0x608),param_2 + 3);
      }
      plVar3 = plVar3 + 1;
      uVar1 = uVar1 + 1;
    } while (uVar1 != uVar2);
  }
  return;
}



// FUNCTION 140744b60 FUN_140744b60 body=437 status=ok
// SIG undefined FUN_140744b60(void)

bool FUN_140744b60(longlong *param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong local_res10;
  longlong local_18;
  undefined8 local_10;
  
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x568) == 0)) {
    return false;
  }
  local_res10 = param_2;
  FUN_142bcd510(*(longlong *)(param_2 + 0x568),param_1);
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0xbc)) {
    TArray<unsigned_char,TInlineAllocator<8,TSizedDefaultAllocator<32>_>_>::ResizeTo
              (param_1 + 0x15,0);
  }
  local_10 = *(undefined8 *)(param_2 + 0x568);
  local_18 = param_2;
  (**(code **)(*param_1 + 0x2e8))(param_1,&local_18,param_3);
  TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x10,&local_res10);
  TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x12,&local_res10);
  lVar1 = *(longlong *)(local_res10 + 0x608);
  if (lVar1 == 0) goto LAB_140744ccb;
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x318))(param_1);
  if (*plVar4 != 0) {
    lVar5 = USafeZone::GetPrivateStaticClass();
    lVar6 = *plVar4;
    for (lVar2 = lVar6; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar5) goto LAB_140744c56;
    }
  }
  lVar6 = 0;
LAB_140744c56:
  lVar2 = *(longlong *)(lVar1 + 0x2d8 + (ulonglong)*(byte *)(lVar1 + 0x330) * 0x30);
  if ((lVar6 == 0) || (lVar2 == 0)) {
LAB_140744cad:
    bVar3 = false;
  }
  else {
    lVar2 = *(longlong *)(lVar2 + 0x10);
    if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140744cad;
    bVar3 = true;
  }
  if (bVar3) {
    uVar7 = 4;
    if (param_3 == '\0') {
      uVar7 = 1;
    }
    FUN_14071caf0(lVar1,uVar7);
  }
LAB_140744ccb:
  if (param_3 == '\0') {
    *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + 1;
  }
  else {
    *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 1;
  }
  (**(code **)(*param_1 + 0x308))(param_1,&local_18);
  return (int)param_1[0x11] == 0;
}



// FUNCTION 140744d20 FUN_140744d20 body=111 status=ok
// SIG undefined FUN_140744d20(void)

void FUN_140744d20(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)param_1[0x10];
  plVar3 = plVar1;
  if (plVar1 != plVar1 + (int)param_1[0x11]) {
    while (*plVar3 != param_2) {
      plVar3 = plVar3 + 1;
      if (plVar3 == plVar1 + (int)param_1[0x11]) {
        return;
      }
    }
    if ((int)((longlong)plVar3 - (longlong)plVar1 >> 3) != -1) {
      cVar2 = FUN_140744b60(param_1,param_2,0);
      if ((cVar2 != '\0') || (*(char *)((longlong)param_1 + 0x6c) == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x000140744d82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x2f0))(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140744d90 FUN_140744d90 body=59 status=ok
// SIG undefined FUN_140744d90(void)

void FUN_140744d90(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x100,0);
  uVar1 = FUN_140765020(param_2);
  FUN_140744d20(param_1,uVar1);
  return;
}



// FUNCTION 140744dd0 FUN_140744dd0 body=480 status=ok
// SIG undefined FUN_140744dd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140744dd0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined1 *puVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_138 [32];
  undefined1 local_118 [64];
  undefined1 *local_d8;
  int local_d0;
  undefined4 local_cc;
  undefined1 local_c8 [64];
  undefined1 *local_88;
  int local_80;
  undefined4 local_7c;
  undefined1 local_78 [64];
  undefined1 *local_38;
  int local_30;
  ulonglong local_28;
  undefined1 *puVar5;
  
  uVar3 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  if ((param_2 == 0) || (local_28 = uVar3, uVar3 = FUN_140731380(), (char)uVar3 == '\0')) {
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else {
    FUN_14073a800(param_2,local_78);
    puVar5 = local_38;
    local_88 = (undefined1 *)0x0;
    local_80 = local_30;
    if (local_30 == 0) {
      local_7c = 0;
      iVar7 = 0;
    }
    else {
      TArray<UProperty_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeForCopy(local_c8,local_30,0)
      ;
      puVar6 = local_78;
      if (puVar5 != (undefined1 *)0x0) {
        puVar6 = puVar5;
      }
      puVar5 = local_c8;
      if (local_88 != (undefined1 *)0x0) {
        puVar5 = local_88;
      }
      _guard_xfg_dispatch_icall_nop(puVar5,puVar6,(longlong)local_30 << 3);
      iVar7 = local_80;
    }
    puVar5 = local_88;
    local_d8 = (undefined1 *)0x0;
    local_d0 = iVar7;
    if (iVar7 == 0) {
      local_cc = 0;
    }
    else {
      TArray<UProperty_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeForCopy(local_118,iVar7,0);
      puVar6 = local_c8;
      if (puVar5 != (undefined1 *)0x0) {
        puVar6 = puVar5;
      }
      puVar5 = local_118;
      if (local_d8 != (undefined1 *)0x0) {
        puVar5 = local_d8;
      }
      _guard_xfg_dispatch_icall_nop(puVar5,puVar6,(longlong)iVar7 << 3);
    }
    plVar8 = *(longlong **)(param_1 + 0x640);
    plVar9 = plVar8 + (longlong)*(int *)(param_1 + 0x648) * 0x55;
    for (; plVar8 != plVar9; plVar8 = plVar8 + 0x55) {
      if ((*plVar8 != 0) && (lVar2 = *(longlong *)(*plVar8 + 0x38), lVar2 != 0)) {
        puVar5 = local_118;
        if (local_d8 != (undefined1 *)0x0) {
          puVar5 = (undefined1 *)0x0;
        }
        plVar4 = (longlong *)((ulonglong)puVar5 | (ulonglong)local_d8);
        plVar1 = plVar4 + local_d0;
        for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
          if (*plVar4 == lVar2) {
            if (local_d8 != (undefined1 *)0x0) {
              FMemory::Free(local_d8);
            }
            uVar3 = 1;
            goto LAB_140744f5d;
          }
        }
      }
    }
    if (local_d8 != (undefined1 *)0x0) {
      FMemory::Free(local_d8);
    }
    uVar3 = 0;
LAB_140744f5d:
    if (local_88 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    if (local_38 != (undefined1 *)0x0) {
      FMemory::Free();
    }
  }
  return uVar3;
}



// FUNCTION 140744fb0 FUN_140744fb0 body=27 status=ok
// SIG undefined FUN_140744fb0(void)

void FUN_140744fb0(undefined8 param_1)

{
  FUN_142357eb0();
  FUN_1407347f0(param_1);
  return;
}



// FUNCTION 140744fd0 FUN_140744fd0 body=1280 status=ok
// SIG undefined FUN_140744fd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140744fd0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  float fVar10;
  undefined1 local_res8 [8];
  uint uVar11;
  undefined4 uVar12;
  undefined1 local_148 [320];
  
  FUN_142357eb0();
  if ((((*(longlong *)(param_1 + 0x310) != 0) && (*(longlong *)(param_1 + 0x318) != 0)) &&
      ((*(longlong *)(param_1 + 800) != 0 || (*(char *)(param_1 + 0x328) == '\0')))) &&
     ((((*(longlong *)(param_1 + 0x118) != 0 &&
        (*(char *)(*(longlong *)(param_1 + 0x118) + 0x128) == '\x03')) &&
       (*(longlong *)(param_1 + 0x598) != 0)) &&
      ((*(uint *)(*(longlong *)(param_1 + 0x598) + 0x840) >> 3 & 1) != 0)))) {
    *(undefined4 *)(param_1 + 0x198) = 0xbf800000;
    *(ulonglong *)(param_1 + 0x1a0) = DAT_1468c21b0;
    *(undefined1 *)(param_1 + 0x570) = 0;
    FUN_140732200(param_1);
    FUN_140746a00(param_1);
    *(undefined1 *)(param_1 + 0x571) = 0;
    FUN_1407466f0(param_1);
    FUN_140743910(param_1,0);
    uVar4 = FUN_1407265c0(local_148);
    FUN_140743c90(param_1,uVar4);
    uVar4 = FUN_1407265c0(local_148);
    FUN_140743ac0(param_1,uVar4);
    *(undefined1 *)(param_1 + 0x5e8) = 0;
    FUN_140732c90(param_1,0);
  }
  FUN_1407324c0(param_1);
  if (((*(longlong *)(param_1 + 0x310) == 0) || (*(longlong *)(param_1 + 0x318) == 0)) ||
     (((*(longlong *)(param_1 + 800) == 0 && (*(char *)(param_1 + 0x328) != '\0')) ||
      (*(char *)(param_1 + 0x1b0) == '\0')))) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  if (cVar2 != *(char *)(param_1 + 0x1a8)) {
    *(char *)(param_1 + 0x1a8) = cVar2;
    if (cVar2 == '\0') {
      FUN_140746640(param_1);
    }
    else {
      FUN_14073d650();
    }
  }
  FUN_140732200(param_1);
  FUN_140746a00(param_1);
  if (((*(longlong *)(param_1 + 0x118) != 0) &&
      (*(char *)(*(longlong *)(param_1 + 0x118) + 0x128) == '\x03')) &&
     (cVar2 = FUN_140731750(param_1,param_1 + 0x1e0,0), cVar2 != '\0')) {
    puVar5 = (undefined8 *)FUN_14073a420(param_1,local_res8,param_1 + 0x1e0);
    *(undefined8 *)(param_1 + 0x578) = *puVar5;
  }
  if ((((*(longlong *)(param_1 + 0x310) == 0) || (*(longlong *)(param_1 + 0x318) == 0)) ||
      ((*(longlong *)(param_1 + 800) == 0 && (*(char *)(param_1 + 0x328) != '\0')))) &&
     ((((*(char *)(param_1 + 0x1b0) == '\0' && (*(char *)(param_1 + 0x1a9) == '\0')) &&
       (*(char *)(param_1 + 0x5e8) == '\0')) &&
      (((*(longlong *)(param_1 + 0x5c0) != 0 &&
        (cVar2 = FUN_1407c3030(*(longlong *)(param_1 + 0x5c0) + 0x8b0), cVar2 == '\0')) &&
       (cVar2 = FUN_142cf3960(*(undefined8 *)(param_1 + 0x5c0)), cVar2 != '\0')))))) {
    plVar6 = (longlong *)
             FSlateEditableTextLayout::GetScrollOffset(*(undefined8 *)(param_1 + 0x5c0),local_res8);
    if (*plVar6 == DAT_146858de0) {
      FUN_142cf3f20(*(undefined8 *)(param_1 + 0x5c0),1);
    }
  }
  if ((*(longlong *)(param_1 + 0x118) == 0) ||
     (*(char *)(*(longlong *)(param_1 + 0x118) + 0x128) != '\x03')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((((*(longlong *)(param_1 + 0x310) != 0) && (*(longlong *)(param_1 + 0x318) != 0)) &&
      ((*(longlong *)(param_1 + 800) != 0 || (*(char *)(param_1 + 0x328) == '\0')))) ||
     (((*(char *)(param_1 + 0x1b0) != '\0' || (*(int *)(param_1 + 0x578) != 0)) ||
      (*(int *)(param_1 + 0x57c) != 0)))) {
    if (bVar1) {
      lVar7 = *(longlong *)(param_1 + 0x120);
      if ((lVar7 == 0) && (lVar7 = FUN_1423407b0(param_1), lVar7 == 0)) {
        fVar10 = 0.0;
      }
      else {
        fVar10 = *(float *)(lVar7 + 0x790);
      }
      if (((0.0 < *(float *)(param_1 + 0x198) || *(float *)(param_1 + 0x198) == 0.0) &&
          (0.0 <= *(float *)(param_1 + 0x19c))) && (*(float *)(param_1 + 0x19c) <= fVar10)) {
        cVar2 = FUN_14073c9a0(param_1);
        if (cVar2 == '\0') {
          if ((*(longlong *)(param_1 + 0x8e0) != 0) &&
             (*(ulonglong *)(param_1 + 0x1a0) <= DAT_1468c21b0)) {
            lVar7 = 0;
            if (*(longlong *)(param_1 + 0x590) != 0) {
              lVar7 = FUN_14075eaf0();
            }
            lVar9 = lVar7 + 0x48;
            if (lVar7 == 0) {
              lVar9 = 0;
            }
            if (lVar9 != 0) {
              uVar12 = 0;
              uVar11 = 0x3f800000;
              cVar2 = FUN_140753a50(lVar9,*(undefined8 *)(param_1 + 0x8e0),
                                    *(undefined8 *)(param_1 + 0x590),0,0x3f800000,0);
              if (cVar2 == '\0') {
                iVar3 = rand();
                iVar8 = 5;
                if ((int)((float)iVar3 * 0.00018311106) < 6) {
                  iVar8 = (int)((float)iVar3 * 0.00018311106);
                }
                *(ulonglong *)(param_1 + 0x1a0) = (longlong)(iVar8 + 5) + DAT_1468c21b0;
              }
              else {
                FUN_1407514c0(lVar9,*(undefined8 *)(param_1 + 0x8e0),
                              *(undefined8 *)(param_1 + 0x590),0x3f800000,uVar11 & 0xffffff00,
                              CONCAT44(uVar12,0x40a00000),0);
              }
            }
          }
        }
        else {
          iVar3 = rand();
          iVar8 = 5;
          if ((int)((float)iVar3 * 0.00018311106) < 6) {
            iVar8 = (int)((float)iVar3 * 0.00018311106);
          }
          *(ulonglong *)(param_1 + 0x1a0) = (longlong)(iVar8 + 0xf) + DAT_1468c21b0;
        }
      }
    }
    FUN_14072c870(param_1);
    if ((bVar1) && (cVar2 = FUN_1407442f0(param_1), cVar2 != '\0')) {
      FUN_140731ee0(param_1);
    }
    if ((((*(longlong *)(param_1 + 0x310) != 0) && (*(longlong *)(param_1 + 0x318) != 0)) &&
        ((*(longlong *)(param_1 + 800) != 0 || (*(char *)(param_1 + 0x328) == '\0')))) &&
       (lVar7 = *(longlong *)(param_1 + 0x5c0), lVar7 != 0)) {
      *(undefined8 *)(lVar7 + 0x18c) = _DAT_1468b5d90;
      *(undefined4 *)(lVar7 + 0x194) = DAT_1468b5d98;
    }
  }
  return;
}



// FUNCTION 1407454d0 FUN_1407454d0 body=350 status=ok
// SIG undefined FUN_1407454d0(void)

void FUN_1407454d0(longlong param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  char local_18 [16];
  
  plVar3 = (longlong *)UBTAuxiliaryNode::GetMyNode();
  if (plVar3 != (longlong *)0x0) {
    lVar4 = UBTTask_GameplayTaskBase::StaticClass();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_18[0] = '\0';
      cVar2 = (**(code **)(*plVar3 + 0x2f8))
                        (plVar3,param_2,
                         ((ulonglong)*(ushort *)((longlong)plVar3 + 0x52) -
                         (ulonglong)*(ushort *)(param_1 + 0x52)) + param_3,local_18);
      if ((cVar2 != '\0') && (local_18[0] == '\0')) {
        local_18[0] = '\0';
        for (lVar4 = *(longlong *)(param_1 + 0x48); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x48))
        {
          lVar5 = UBTComposite_Sequence::StaticClass();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            return;
          }
          lVar5 = UBTComposite_SimpleParallel::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            return;
          }
          cVar2 = FUN_142bc1d80(param_2,lVar4,0xffffffff);
          if (cVar2 != '\0') {
            FUN_142bc8a50(param_2,param_1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140745630 FUN_140745630 body=95 status=ok
// SIG undefined FUN_140745630(void)

void FUN_140745630(longlong param_1,undefined8 param_2,int *param_3)

{
  char cVar1;
  
  if (param_3 != (int *)0x0) {
    if (*param_3 == 0) {
      if (*(char *)(param_1 + 0x188) == '\0') {
        return;
      }
      if (*(longlong *)(param_1 + 0x178) == 0) {
        return;
      }
      if ((char)param_3[4] != '\0') {
        return;
      }
      cVar1 = FUN_140730f40();
      if (cVar1 == '\0') {
        return;
      }
    }
    else {
      cVar1 = FUN_140730f40();
      if (cVar1 != '\0') {
        return;
      }
    }
    FUN_142bc8a50(param_2,param_1);
  }
  return;
}



// FUNCTION 140745690 FUN_140745690 body=47 status=ok
// SIG undefined FUN_140745690(void)

void FUN_140745690(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_140746760();
  if (cVar1 != '\0') {
    FUN_142bc8a50(param_2,param_1);
  }
  return;
}



// FUNCTION 1407456c0 FUN_1407456c0 body=279 status=ok
// SIG undefined FUN_1407456c0(void)

void FUN_1407456c0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_38 [8];
  longlong local_30;
  
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x2f0))();
  if ((plVar4 != (longlong *)0x0) && (lVar1 = *(longlong *)(param_2 + 0x188), lVar1 != 0)) {
    lVar5 = ARemnantWeaponMod::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (param_3 != (undefined8 *)0x0)) {
      FUN_1406d48b0(local_38,lVar1,*param_3,param_3[1]);
      cVar3 = FUN_1406faaf0(plVar4,local_38);
      if (*(char *)(plVar4[0x1b] + 0x28 + local_30) == '\x03') {
        (**(code **)(*plVar4 + 0x300))(plVar4,local_38);
        if ((byte)(cVar3 - 3U) < 2) {
          UBTTaskNode::FinishLatentAbort(param_1,param_2);
        }
        else if (cVar3 == '\x01') {
          UBTTaskNode::FinishLatentTask(param_1,param_2,0);
        }
        else {
          UBTTaskNode::FinishLatentTask(param_1,param_2,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1407457e0 FUN_1407457e0 body=1034 status=ok
// SIG undefined FUN_1407457e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407457e0(longlong param_1,longlong param_2,undefined8 param_3,float param_4)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_res10 [2];
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
  float fStack_4c;
  
  lVar8 = *(longlong *)(param_2 + 0x180);
  if (*(longlong *)(param_2 + 0x188) == 0) {
    return;
  }
  if (lVar8 == 0) {
    return;
  }
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x188) + 0x488);
  if (lVar2 == 0) {
    return;
  }
  lVar4 = FUN_140725690(lVar8,*(undefined1 *)(param_1 + 0x98));
  if (lVar4 == 0) {
    return;
  }
  lVar5 = FUN_1428dfc70();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  FUN_1407304b0(param_1,lVar4,lVar2,&local_78,local_res10);
  if (local_res10[0] < *(float *)(param_1 + 0x70) * 0.017453292) {
    UBTTaskNode::FinishLatentTask(param_1,param_2,0);
    return;
  }
  bVar1 = *(byte *)(param_1 + 0xc0);
  lVar4 = FUN_142bbd600(lVar8,bVar1);
  if (((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) &&
     (lVar5 = *(longlong *)(*(longlong *)(lVar4 + 8) + 0x10),
     lVar6 = UBlackboardKeyType_Float::GetPrivateStaticClass(), lVar5 == lVar6)) {
    lVar4 = *(longlong *)(lVar4 + 8);
    bVar7 = *(byte *)(lVar4 + 0x2b) >> 1 & 1;
    if (bVar7 != 0) {
      lVar4 = *(longlong *)(*(longlong *)(lVar8 + 0x1a8) + (ulonglong)bVar1 * 8);
    }
    if ((*(int *)(lVar8 + 400) == 0) || (*(int *)(lVar8 + 0x1a0) <= (int)(uint)bVar1)) {
      lVar8 = 0;
    }
    else {
      lVar8 = (ulonglong)*(ushort *)(*(longlong *)(lVar8 + 0x198) + (ulonglong)bVar1 * 2) +
              *(longlong *)(lVar8 + 0x188);
    }
    if (lVar8 + (ulonglong)bVar7 * 4 != 0) {
      fVar9 = (float)FUN_142bbf1b0(lVar4);
      goto LAB_140745990;
    }
  }
  fVar9 = 0.0;
LAB_140745990:
  if (fVar9 <= 5.0) {
    fVar9 = 5.0;
  }
  param_4 = fVar9 * 0.017453292 * param_4;
  if (local_res10[0] <= param_4) {
    param_4 = local_res10[0];
  }
  param_4 = param_4 * 0.5;
  if (param_4 < 0.0) {
    fVar9 = param_4 * 0.15915494 - 0.5;
  }
  else {
    fVar9 = param_4 * 0.15915494 + 0.5;
  }
  param_4 = param_4 - (float)(int)fVar9 * 6.2831855;
  if (param_4 <= 1.5707964) {
    if (-1.5707964 <= param_4) {
      fStack_5c = 1.0;
    }
    else {
      fStack_5c = -1.0;
      param_4 = -3.1415927 - param_4;
    }
  }
  else {
    fStack_5c = -1.0;
    param_4 = 3.1415927 - param_4;
  }
  lVar8 = *(longlong *)(lVar2 + 0x168);
  fVar9 = param_4 * param_4;
  param_4 = (((((2.7525562e-06 - fVar9 * 2.3889859e-08) * fVar9 - 0.00019840874) * fVar9 +
              0.008333331) * fVar9 - 0.16666667) * fVar9 + 1.0) * param_4;
  local_68 = local_78 * param_4;
  fStack_64 = local_74 * param_4;
  fStack_60 = local_70 * param_4;
  fStack_5c = (((((2.4760495e-05 - fVar9 * 2.6051615e-07) * fVar9 - 0.0013888378) * fVar9 +
                0.041666638) * fVar9 - 0.5) * fVar9 + 1.0) * fStack_5c;
  if (lVar8 == 0) {
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    fVar12 = 1.0;
  }
  else {
    fVar9 = *(float *)(lVar8 + 0x210);
    fVar10 = *(float *)(lVar8 + 0x214);
    fVar11 = *(float *)(lVar8 + 0x218);
    fVar12 = *(float *)(lVar8 + 0x21c);
  }
  local_58 = fVar12 * local_68 * _DAT_146858c30 + fStack_5c * fVar9 +
             fVar11 * fStack_64 * _DAT_146858c20 + fVar10 * fStack_60 * _DAT_146858c10;
  fStack_54 = fVar11 * local_68 * fRam0000000146858c34 + fStack_5c * fVar10 +
              fVar12 * fStack_64 * fRam0000000146858c24 + fVar9 * fStack_60 * fRam0000000146858c14;
  fStack_50 = fVar10 * local_68 * fRam0000000146858c38 + fStack_5c * fVar11 +
              fVar9 * fStack_64 * fRam0000000146858c28 + fVar12 * fStack_60 * fRam0000000146858c18;
  fStack_4c = fVar9 * local_68 * fRam0000000146858c3c + fStack_5c * fVar12 +
              fVar10 * fStack_64 * fRam0000000146858c2c + fVar11 * fStack_60 * fRam0000000146858c1c;
  FUN_14223d160(lVar2,&local_58,0);
  return;
}



// FUNCTION 140745bf0 FUN_140745bf0 body=96 status=ok
// SIG undefined FUN_140745bf0(void)

void FUN_140745bf0(undefined8 param_1,undefined8 param_2,int *param_3)

{
  undefined4 uVar1;
  
  if (*param_3 == 2) {
    uVar1 = 0;
  }
  else {
    if (*param_3 != 3) goto LAB_140745c2b;
    uVar1 = 1;
  }
  UBTTaskNode::FinishLatentTask(param_1,param_2,uVar1);
LAB_140745c2b:
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 140745c50 FUN_140745c50 body=232 status=ok
// SIG undefined FUN_140745c50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140745c50(undefined8 param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  longlong lVar1;
  char cVar2;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  if ((*(longlong *)(param_2 + 0x188) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x188) + 0x488), lVar1 != 0)) {
    lVar1 = *(longlong *)(lVar1 + 0x168);
    if (lVar1 == 0) {
      local_38 = _DAT_1468b5d90;
      local_30 = DAT_1468b5d98;
    }
    else {
      local_38 = *(undefined8 *)(lVar1 + 0x220);
      local_30 = *(undefined4 *)(lVar1 + 0x228);
    }
    local_28 = local_38;
    local_20 = local_30;
    cVar2 = FUN_140760160(*(undefined8 *)(param_3 + 0x38),&local_28,0);
    if (cVar2 != '\0') {
      UBTTaskNode::FinishLatentTask(param_1,param_2,0);
    }
  }
  FUN_142bf4100(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140745d40 FUN_140745d40 body=295 status=ok
// SIG undefined FUN_140745d40(void)

void FUN_140745d40(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 local_110 [128];
  undefined1 local_90;
  undefined1 local_88 [128];
  
  if ((((*(char *)(param_1 + 0xe0) == '\0') && (lVar1 = *(longlong *)(param_1 + 0xd8), lVar1 != 0))
      && (*(longlong *)(param_1 + 0xd0) != 0)) &&
     (((lVar2 = *(longlong *)(lVar1 + 0x310), lVar2 != 0 && (*(longlong *)(lVar1 + 0x318) != 0)) &&
      ((*(longlong *)(lVar1 + 800) != 0 || (*(char *)(lVar1 + 0x328) == '\0')))))) {
    FUN_142de2b80(local_110,lVar1 + 0x338);
    local_90 = *(undefined1 *)(lVar1 + 0x3b8);
    FUN_142de2b80(local_88,lVar1 + 0x3c0);
    if (lVar2 == *(longlong *)(param_1 + 0xd0)) {
      *(undefined1 *)(param_1 + 0xe0) = 1;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0xc0,0);
    }
  }
  return;
}



// FUNCTION 140745e70 TryMoveIteratorToParentBlackboard body=98 status=ok
// SIG undefined TryMoveIteratorToParentBlackboard(void)

void UAISystem::FBlackboardDataToComponentsIterator::TryMoveIteratorToParentBlackboard
               (uint *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  uint *puVar3;
  
  uVar2 = (ulonglong)(int)*param_1;
  puVar3 = *(uint **)(param_1 + 0x32);
  if (*(uint **)(param_1 + 0x32) == (uint *)0x0) {
    puVar3 = param_1 + 2;
  }
  if (puVar3[uVar2 * 6 + 4] == 0xffffffff) {
    do {
      if ((int)(param_1[0x34] - 1) <= (int)uVar2) {
        return;
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
      *param_1 = uVar1;
      puVar3 = *(uint **)(param_1 + 0x32);
      if (*(uint **)(param_1 + 0x32) == (uint *)0x0) {
        puVar3 = param_1 + 2;
      }
    } while (puVar3[(longlong)(int)uVar1 * 6 + 4] == 0xffffffff);
  }
  return;
}



// FUNCTION 140745ee0 FUN_140745ee0 body=700 status=ok
// SIG undefined FUN_140745ee0(void)

char FUN_140745ee0(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  char cVar9;
  
  lVar8 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8);
  cVar9 = '\x02';
  do {
    iVar6 = *(int *)(lVar8 + 0x50);
    if ((iVar6 < 0) || (*(int *)(param_1 + 0x150) <= iVar6)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      if ((0 < *(int *)(param_1 + 0x150)) && (lVar5 = **(longlong **)(param_1 + 0x148), lVar5 != 0))
      {
        lVar4 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) goto LAB_140745fff;
      }
LAB_14074609a:
      *(undefined4 *)(lVar8 + 0x50) = 0xffffffff;
      goto LAB_1407460a1;
    }
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x148) + (longlong)iVar6 * 8);
    if (lVar5 == 0) goto LAB_14074609a;
    lVar4 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_14074609a;
    cVar9 = param_3;
    if (param_3 != '\0') {
      if (param_3 == '\x01') {
        lVar5 = *(longlong *)(lVar5 + 0x158);
      }
      else {
        if (param_3 != '\x02') goto LAB_14074609a;
        lVar5 = *(longlong *)(lVar5 + 0x160);
      }
    }
LAB_140745fff:
    if (lVar5 == 0) goto LAB_14074609a;
    plVar1 = *(longlong **)(param_1 + 0x148);
    for (plVar7 = plVar1; plVar7 != plVar1 + *(int *)(param_1 + 0x150); plVar7 = plVar7 + 1) {
      if (*plVar7 == lVar5) {
        iVar6 = (int)((longlong)plVar7 - (longlong)plVar1 >> 3);
        goto LAB_140746035;
      }
    }
    iVar6 = -1;
LAB_140746035:
    *(int *)(lVar8 + 0x50) = iVar6;
    if ((iVar6 < 0) || (*(int *)(param_1 + 0x150) <= iVar6)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((!bVar2) ||
       (lVar4 = *(longlong *)(lVar5 + 0xd8) + *(longlong *)(param_2 + 8),
       *(char *)(lVar4 + 0x50) != '\0')) goto LAB_1407460a1;
    *(undefined1 *)(lVar4 + 0x50) = 1;
    cVar3 = FUN_1406de170(lVar5,param_2);
  } while ((cVar3 == '\0') || (cVar3 = FUN_1406f70d0(lVar5,param_2,param_1), cVar3 == '\0'));
  cVar9 = '\0';
LAB_1407460a1:
  plVar7 = *(longlong **)(param_1 + 0x148);
  plVar1 = plVar7 + *(int *)(param_1 + 0x150);
  for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
    lVar8 = *plVar7;
    if (lVar8 != 0) {
      lVar5 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
      lVar8 = *(longlong *)(lVar8 + 0x10);
      if ((*(int *)(lVar8 + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar8 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) break;
    }
  }
  lVar8 = *(longlong *)(param_1 + 0x148);
  iVar6 = *(int *)(param_1 + 0x150);
joined_r0x000140746114:
  do {
    if (plVar7 == (longlong *)(lVar8 + (longlong)iVar6 * 8)) {
      return cVar9;
    }
    *(undefined1 *)(*(longlong *)(*plVar7 + 0xd8) + 0x50 + *(longlong *)(param_2 + 8)) = 0;
    do {
      do {
        plVar7 = plVar7 + 1;
        if (plVar7 == plVar1) goto joined_r0x000140746114;
        lVar5 = *plVar7;
      } while (lVar5 == 0);
      lVar4 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
      lVar5 = *(longlong *)(lVar5 + 0x10);
      if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    } while (!bVar2);
  } while( true );
}



// FUNCTION 1407461a0 FUN_1407461a0 body=429 status=ok
// SIG undefined FUN_1407461a0(void)

char FUN_1407461a0(longlong param_1,longlong *param_2,undefined1 param_3)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  longlong local_res20;
  
  cVar2 = FUN_14071ff30();
  FUN_14072ebc0(param_1,param_2);
  if (1 < (byte)(cVar2 - 1U)) {
    return cVar2;
  }
  lVar5 = *param_2;
  lVar1 = *(longlong *)(lVar5 + 0x5e8);
  if (lVar1 == 0) {
    return cVar2;
  }
  lVar6 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  if (*(char *)(param_1 + 0x2f0) == '\0') {
    iVar4 = 0x7fffffff;
  }
  else {
    local_res20 = *(longlong *)(lVar5 + 0x568);
    fVar7 = (float)FUN_142de77e0(param_1 + 0x270,lVar5,0,&local_res20);
    iVar4 = (int)ROUND(fVar7 * 2.0 + 0.5) >> 1;
  }
  if (*(int *)(lVar6 + 0xec) < iVar4) {
    do {
      do {
        iVar4 = *(int *)(lVar6 + 0xe8) + 1;
        *(int *)(lVar6 + 0xe8) = iVar4;
        if ((iVar4 < 0) || (*(int *)(lVar6 + 0xe0) <= iVar4)) goto LAB_140746300;
        lVar5 = *(longlong *)(lVar6 + 0xd8);
        if (*(longlong *)(lVar6 + 0xd8) == 0) {
          lVar5 = lVar6 + 0x58;
        }
        local_res20 = FWeakObjectPtr::Get(lVar5 + (longlong)iVar4 * 8);
      } while (((local_res20 == 0) || (lVar5 = FUN_140724a00(lVar1 + 0x338), lVar5 == 0)) ||
              (cVar3 = FUN_14073d500(param_1,param_2,lVar5), cVar3 == '\0'));
      FUN_142ddbcf0(lVar1,1,local_res20);
      cVar2 = FUN_14071ff30(param_1,param_2,param_3);
    } while ((cVar2 == '\x01') || (cVar2 == '\x02'));
LAB_140746300:
    *(int *)(lVar6 + 0xec) = *(int *)(lVar6 + 0xec) + 1;
  }
  return cVar2;
}



// FUNCTION 140746350 FUN_140746350 body=713 status=ok
// SIG undefined FUN_140746350(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140746350(longlong param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined4 uVar12;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined1 local_28 [16];
  
  if (((*(char *)(param_1 + 0xf8) != '\0') && (param_3 != '\0')) &&
     (plVar11 = *(longlong **)(param_1 + 0xe0), plVar11 != (longlong *)0x0)) {
    lVar1 = *(longlong *)(*param_2 + 0x628);
    if ((lVar1 != 0) && (plVar2 = *(longlong **)(*param_2 + 0x488), plVar2 != (longlong *)0x0)) {
      uVar6 = AUGWeapon_Hook::GetPrivateStaticClass();
      lVar7 = (**(code **)(*plVar11 + 0x628))(plVar11,uVar6);
      lVar8 = FUN_14076abd0(lVar7,0,0);
      while ((lVar8 != 0 && (*(longlong *)(lVar8 + 0x118) != *(longlong *)(param_1 + 0xe0)))) {
        lVar9 = FUN_14076abd0(lVar8,0,0);
        lVar7 = lVar8;
        lVar8 = lVar9;
      }
      if (lVar7 != 0) {
        plVar11 = *(longlong **)(lVar7 + 0x118);
      }
      if (plVar11 != (longlong *)0x0) {
        FUN_142f88b40(&local_b8);
        local_38 = *(undefined8 *)(lVar1 + 0x6b8);
        lVar7 = plVar11[0x2d];
        if (lVar7 == 0) {
          local_f8 = _DAT_1468b5d90;
          local_f0 = DAT_1468b5d98;
        }
        else {
          local_f8 = *(undefined8 *)(lVar7 + 0x220);
          local_f0 = *(float *)(lVar7 + 0x228);
        }
        local_b8 = local_f8;
        local_b0 = local_f0;
        local_98 = *(undefined8 *)(lVar1 + 0x6e8);
        uStack_90 = *(undefined8 *)(lVar1 + 0x6f0);
        local_88 = *(undefined8 *)(lVar1 + 0x6f8);
        uStack_80 = *(undefined8 *)(lVar1 + 0x700);
        local_78 = *(undefined8 *)(lVar1 + 0x708);
        uStack_70 = *(undefined8 *)(lVar1 + 0x710);
        local_68 = *(undefined8 *)(lVar1 + 0x718);
        uStack_60 = *(undefined8 *)(lVar1 + 0x720);
        local_58 = *(undefined4 *)(lVar1 + 0x728);
        uStack_54 = *(undefined4 *)(lVar1 + 0x72c);
        uStack_50 = *(undefined4 *)(lVar1 + 0x730);
        uStack_4c = *(undefined4 *)(lVar1 + 0x734);
        local_48 = *(undefined4 *)(lVar1 + 0x738);
        uStack_44 = *(undefined4 *)(lVar1 + 0x73c);
        uStack_40 = *(undefined4 *)(lVar1 + 0x740);
        uStack_3c = *(undefined4 *)(lVar1 + 0x744);
        local_e8 = 0;
        local_e0 = 0.0;
        uVar4 = FUN_142f9e730(&local_b8,&local_e8,0);
        if ((char)uVar4 == '\0') {
          local_e8 = local_b8;
          local_e0 = local_b0;
        }
        local_e0 = local_e0 + local_98._4_4_;
        lVar1 = plVar2[0x2d];
        if (lVar1 == 0) {
          uVar4 = (undefined4)DAT_1468b5da0;
          uVar12 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
          local_d0 = DAT_1468b5da8;
        }
        else {
          local_c8 = *(float *)(lVar1 + 0x210);
          fStack_c4 = *(float *)(lVar1 + 0x214);
          fStack_c0 = *(float *)(lVar1 + 0x218);
          fStack_bc = *(float *)(lVar1 + 0x21c);
          auVar3._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_c4);
          auVar3._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_c8);
          auVar3._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_c0);
          auVar3._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_bc);
          iVar5 = movmskps(uVar4,auVar3);
          if (iVar5 != 0) {
            *(float *)(lVar1 + 0x250) = local_c8;
            *(float *)(lVar1 + 0x254) = fStack_c4;
            *(float *)(lVar1 + 600) = fStack_c0;
            *(float *)(lVar1 + 0x25c) = fStack_bc;
            puVar10 = (undefined8 *)FQuat::Rotator(&local_c8,local_28);
            *(undefined8 *)(lVar1 + 0x260) = *puVar10;
            *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar10 + 1);
          }
          uVar4 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
          uVar12 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
          local_d0 = *(undefined4 *)(lVar1 + 0x268);
        }
        local_d8 = CONCAT44(uVar12,uVar4);
        (**(code **)(*plVar2 + 0x500))(plVar2,&local_e8,&local_d8,0,0);
      }
    }
  }
  return;
}



// FUNCTION 140746620 FUN_140746620 body=21 status=ok
// SIG undefined FUN_140746620(void)

void FUN_140746620(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x7f8) == param_2) {
    *(undefined8 *)(param_1 + 0x7f8) = 0;
  }
  return;
}



// FUNCTION 140746640 FUN_140746640 body=112 status=ok
// SIG undefined FUN_140746640(void)

void FUN_140746640(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x5c0) != 0) {
    FUN_142dbb5d0(*(longlong *)(param_1 + 0x5c0) + 0x8b0,&DAT_146858de0);
    FUN_142dbb5d0(*(longlong *)(param_1 + 0x5c0) + 0x948,&DAT_146858de0);
    if (*(char *)(param_1 + 0x63c) != '\0') {
      FUN_142dbb5d0(*(longlong *)(param_1 + 0x5c0) + 0x14f0,&DAT_146858de0);
      return;
    }
  }
  return;
}



// FUNCTION 1407466b0 FUN_1407466b0 body=59 status=ok
// SIG undefined FUN_1407466b0(void)

void FUN_1407466b0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0xd0,0);
  uVar1 = FUN_140765020(param_2);
  FUN_14072b980(param_1,uVar1);
  return;
}



// FUNCTION 1407466f0 FUN_1407466f0 body=112 status=ok
// SIG undefined FUN_1407466f0(void)

void FUN_1407466f0(longlong *param_1)

{
  longlong lVar1;
  
  if ((param_1[0x23] != 0) && (*(char *)(param_1[0x23] + 0x128) == '\x03')) {
    param_1[0xbe] = param_1[99];
    *(undefined1 *)(param_1 + 0xc0) = *(undefined1 *)((longlong)param_1 + 0x571);
    param_1[0xc1] = param_1[0xaf];
    *(char *)(param_1 + 0xc2) = (char)param_1[0xc3];
    lVar1 = param_1[0x3c];
    if (lVar1 == 0) {
      lVar1 = param_1[0x62];
    }
    param_1[0xbf] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x000140746758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x260))();
    return;
  }
  return;
}



// FUNCTION 140746760 FUN_140746760 body=493 status=ok
// SIG undefined FUN_140746760(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140746760(longlong param_1,longlong param_2,float *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined7 uVar6;
  float extraout_XMM0_Da;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 local_78;
  float local_70;
  float local_68;
  float local_64;
  undefined8 local_60;
  float local_58;
  undefined8 local_54;
  float local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  if (param_3 == (float *)0x0) {
    local_48 = local_48 & 0xffffffffffffff00;
  }
  else {
    param_3[2] = 3.4028235e+38;
    if ((*(longlong *)(param_2 + 0x188) != 0) &&
       (plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x188) + 0x488), plVar1 != (longlong *)0x0))
    {
      lVar2 = plVar1[0x2d];
      if (lVar2 == 0) {
        local_54 = _DAT_1468b5d90;
        local_4c = DAT_1468b5d98;
      }
      else {
        local_54 = *(undefined8 *)(lVar2 + 0x220);
        local_4c = *(float *)(lVar2 + 0x228);
      }
      local_58 = local_4c;
      local_60 = local_54;
      (**(code **)(*plVar1 + 0x570))(plVar1,&local_68,&local_78,0);
      cVar3 = FUN_140737bb0(param_1,param_2,&local_78,&local_64);
      if (cVar3 != '\0') {
        local_64 = (SQRT((local_78._4_4_ - local_60._4_4_) * (local_78._4_4_ - local_60._4_4_) +
                         ((float)local_78 - (float)local_60) * ((float)local_78 - (float)local_60) +
                         (local_70 - local_58) * (local_70 - local_58)) - local_68) - local_64;
        if (local_64 <= 0.0) {
          local_64 = 0.0;
        }
        param_3[2] = local_64;
      }
    }
    local_78 = *(undefined8 *)(param_2 + 0x180);
    cVar3 = *(char *)(param_3 + 3);
    local_88 = &local_78;
    uVar5 = FUN_142df1760(param_1 + 0x90,&local_54,*(undefined8 *)(param_2 + 0x188),0);
    if (local_4c._0_1_ == '\x01') {
      *param_3 = (float)local_54;
      param_3[1] = local_54._4_4_;
      bVar4 = ABS(param_3[2] - (float)local_54) < local_54._4_4_;
      uVar6 = (undefined7)((ulonglong)uVar5 >> 8);
    }
    else {
      uVar5 = FUN_142cc4350(&local_54,0);
      bVar4 = param_3[2] <= extraout_XMM0_Da;
      param_3[1] = 0.0;
      *param_3 = extraout_XMM0_Da;
      uVar6 = (undefined7)((ulonglong)uVar5 >> 8);
    }
    *(bool *)(param_3 + 3) = bVar4;
    local_48 = CONCAT71(uVar6,(bool)cVar3 != bVar4);
  }
  return local_48;
}



// FUNCTION 140746950 FUN_140746950 body=170 status=ok
// SIG undefined FUN_140746950(void)

void FUN_140746950(longlong param_1,longlong param_2,uint *param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (1 < *param_3) {
    return;
  }
  lVar2 = 0;
  if (*(longlong *)(param_2 + 0x180) != 0) {
    lVar2 = FUN_140725690(*(longlong *)(param_2 + 0x180),*(undefined1 *)(param_1 + 0x90));
    if (lVar2 != 0) {
      lVar3 = FUN_1429ff160();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_1407469ca;
    }
    lVar2 = 0;
  }
LAB_1407469ca:
  lVar3 = FWeakObjectPtr::Get(param_3 + 4);
  if (lVar3 != lVar2) {
    FWeakObjectPtr::operator=(param_3 + 4,lVar2);
    *param_3 = 0;
  }
  return;
}



// FUNCTION 140746a00 FUN_140746a00 body=440 status=ok
// SIG undefined FUN_140746a00(void)

void FUN_140746a00(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  void *pvVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x5c0);
  if (lVar2 == 0) {
    return;
  }
  if (*(longlong *)(lVar2 + 0x178) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x118) == 0) {
    return;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x118) + 0x128) == '\x03') {
    if ((*(char *)(param_1 + 0x1a9) == '\0') && (*(char *)(param_1 + 0x5e8) == '\0')) {
      return;
    }
    uVar6 = 6;
    *(undefined4 *)(param_1 + 0x1ac) = 6;
    if (((*(char *)(param_1 + 0x5e8) == '\0') || (*(char *)(param_1 + 0x1b0) == '\x04')) ||
       (*(char *)(param_1 + 0x1b0) == '\x05')) {
      uVar6 = (uint)*(byte *)(lVar2 + 0x4b0);
      *(uint *)(param_1 + 0x1ac) = (uint)*(byte *)(lVar2 + 0x4b0);
    }
    pvVar4 = ThreadLocalStoragePointer;
    bVar1 = *(byte *)(lVar2 + 0x248);
    if (uVar6 != bVar1) {
      if (((bVar1 - 1 & 0xfffffffd) == 0) || (bVar1 == 2)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if ((uVar6 - 1 < 3) && (bVar3)) {
        return;
      }
      if (*(int *)(param_1 + 0x1ac) != 6) {
        cVar5 = FUN_1407c3030(lVar2 + 0x8b0);
        if ((cVar5 == '\0') ||
           (cVar5 = FUN_142dafb10(*(longlong *)(param_1 + 0x5c0) + 0x8b0,&DAT_146858de0),
           cVar5 != '\0')) {
          (**(code **)(**(longlong **)(param_1 + 0x5c0) + 0x5a0))
                    (*(longlong **)(param_1 + 0x5c0),*(undefined4 *)(param_1 + 0x1ac),0);
          FUN_142cf3f20(*(undefined8 *)(param_1 + 0x5c0),0);
        }
        *(undefined1 *)(param_1 + 0x1a9) = 0;
        return;
      }
      uVar7 = (ulonglong)_tls_index;
      *(undefined1 *)(param_1 + 0x1a9) = 1;
      if ((*(int *)(*(longlong *)((longlong)pvVar4 + uVar7 * 8) + 0x38) < DAT_146858e88) &&
         (_Init_thread_header(&DAT_146858e88), DAT_146858e88 == -1)) {
        FName::FName(&DAT_146858e80,L"Cover",1);
        _Init_thread_footer(&DAT_146858e88);
      }
      FUN_142cff920(*(undefined8 *)(param_1 + 0x5c0),1,DAT_146858e80);
      return;
    }
    return;
  }
  return;
}



// FUNCTION 140746bc0 FUN_140746bc0 body=95 status=ok
// SIG undefined FUN_140746bc0(void)

void FUN_140746bc0(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  if (((*(longlong *)(param_1 + 0x118) != 0) &&
      (*(char *)(*(longlong *)(param_1 + 0x118) + 0x128) == '\x03')) &&
     (cVar1 = FUN_140731750(param_1,param_1 + 0x1e0,0), cVar1 != '\0')) {
    puVar2 = (undefined8 *)FUN_14073a420(param_1,local_res8,param_1 + 0x1e0);
    *(undefined8 *)(param_1 + 0x578) = *puVar2;
  }
  return;
}



// FUNCTION 140746c20 FUN_140746c20 body=137 status=ok
// SIG undefined FUN_140746c20(void)

undefined8 FUN_140746c20(longlong param_1,float *param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  
  *param_2 = 0.0;
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0();
  }
  if (lVar1 == 0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = *(float *)(lVar1 + 0x790);
  }
  if (((0.0 < *(float *)(param_1 + 0x198) || *(float *)(param_1 + 0x198) == 0.0) &&
      (0.0 <= *(float *)(param_1 + 0x19c))) && (*(float *)(param_1 + 0x19c) <= fVar3)) {
    return 1;
  }
  fVar3 = *(float *)(param_1 + 0x19c) - fVar3;
  fVar2 = 0.0;
  if (0.0 <= fVar3) {
    fVar2 = fVar3;
  }
  *param_2 = fVar2;
  return 0;
}



// FUNCTION 140746cb0 FUN_140746cb0 body=398 status=ok
// SIG undefined FUN_140746cb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140746cb0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    plVar3[1] = param_1;
    *plVar3 = (longlong)&DAT_143f3ed00;
    plVar3[2] = (longlong)AK::MemoryMgr::StartProfileThreadUsage;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af190,1);
    (**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
    iVar2 = DAT_1464af198;
    lVar4 = (longlong)DAT_1464af198;
    DAT_1464af198 = DAT_1464af198 + 1;
    if (DAT_1464af19c < DAT_1464af198) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af190,iVar2);
    }
    puVar5 = (undefined8 *)(lVar4 * 0x10 + _DAT_1464af190);
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 3;
  }
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar3 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 8) = 0;
    return;
  }
  *plVar3 = (longlong)&PTR_GetPoolName_143fca720;
  plVar3[1] = (longlong)FUN_140762650;
  lVar4 = FDelegateHandle::GenerateNewID();
  plVar3[3] = lVar4;
  *plVar3 = (longlong)&PTR_GetPoolName_143fca768;
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_14625a6f0,1);
  puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
  iVar2 = DAT_14625a6f8;
  lVar4 = (longlong)DAT_14625a6f8;
  uVar1 = *puVar5;
  DAT_14625a6f8 = DAT_14625a6f8 + 1;
  if (DAT_14625a6fc < DAT_14625a6f8) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_14625a6f0,iVar2);
  }
  puVar5 = (undefined8 *)(lVar4 * 0x10 + DAT_14625a6f0);
  *puVar5 = plVar3;
  *(undefined4 *)(puVar5 + 1) = 2;
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}



// FUNCTION 140746e40 FUN_140746e40 body=343 status=ok
// SIG undefined FUN_140746e40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140746e40(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined1 local_res8 [8];
  
  lVar4 = 0x464af190;
  FUN_140483870(&DAT_1464af190,param_1);
  AK::MemoryMgr::StartProfileThreadUsage(lVar4);
  uVar7 = 0;
  lVar3 = *(longlong *)(param_1 + 8);
  uVar9 = uVar7;
  uVar11 = uVar7;
  iVar5 = DAT_14625a6f8;
  if (0 < DAT_14625a6f8) {
    do {
      plVar10 = (longlong *)(DAT_14625a6f0 + uVar11);
      if ((((int)plVar10[1] != 0) && (plVar2 = (longlong *)*plVar10, plVar2 != (longlong *)0x0)) &&
         (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8),
         iVar5 = DAT_14625a6f8, *plVar2 == lVar3)) {
        if (((int)plVar10[1] != 0) && (plVar2 = (longlong *)*plVar10, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar10 != 0) {
            lVar3 = FMemory::Realloc(*plVar10,0,0);
            *plVar10 = lVar3;
          }
          *(undefined4 *)(plVar10 + 1) = 0;
          iVar5 = DAT_14625a6f8;
        }
        break;
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar11 = uVar11 + 0x10;
    } while ((int)uVar8 < iVar5);
  }
  if (DAT_14625a704 < 1) {
    uVar9 = uVar7;
    iVar6 = iVar5;
    if (0 < iVar5) {
      do {
        if (((*(int *)(uVar7 + 8 + DAT_14625a6f0) == 0) ||
            (*(longlong **)(uVar7 + DAT_14625a6f0) == (longlong *)0x0)) ||
           (cVar1 = (**(code **)(**(longlong **)(uVar7 + DAT_14625a6f0) + 0x10))(), cVar1 != '\0'))
        {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_14625a6f0,uVar9,1,1);
        }
        else {
          uVar9 = (ulonglong)((int)uVar9 + 1);
          uVar7 = uVar7 + 0x10;
        }
        iVar6 = DAT_14625a6f8;
      } while ((int)uVar9 < DAT_14625a6f8);
    }
    _DAT_14625a700 = iVar6 * 2;
    if (_DAT_14625a700 < 3) {
      _DAT_14625a700 = 2;
    }
    if ((_DAT_14625a700 < iVar5) && (DAT_14625a6fc != iVar6)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_14625a6f0);
      return;
    }
  }
  return;
}



// FUNCTION 140746fa0 operator==<USkinnedMeshComponent,USkinnedMeshComponent,FWeakObjectPtr> body=81 status=ok
// SIG undefined operator==<USkinnedMeshComponent,USkinnedMeshComponent,FWeakObjectPtr>(void)

undefined8
operator==<USkinnedMeshComponent,USkinnedMeshComponent,FWeakObjectPtr>
          (undefined8 param_1,int *param_2)

{
  char cVar1;
  int local_res10;
  int local_res14;
  
  FWeakObjectPtr::operator=(&local_res10,param_1);
  if ((local_res10 == *param_2) && (local_res14 == param_2[1])) {
    return 1;
  }
  cVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if ((cVar1 == '\0') && (cVar1 = FWeakObjectPtr::IsValid(param_2), cVar1 == '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 140747000 operator<FString,FFormatArgumentValue>_TTuple<FString,FFormatArgumentValue> body=128 status=ok
// SIG undefined operator<FString,FFormatArgumentValue>_TTuple<FString,FFormatArgumentValue>(void)

undefined8 *
TPairInitializer<FString_&&,FFormatArgumentValue_&&>::
operator<FString,FFormatArgumentValue>_TTuple<FString,FFormatArgumentValue>
          (undefined8 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[1];
  param_1 = (undefined8 *)*param_1;
  *param_2 = 0;
  *param_2 = *param_1;
  *param_1 = 0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  *(undefined4 *)(param_2 + 2) = *puVar1;
  param_2[3] = *(undefined8 *)(puVar1 + 2);
  param_2[3] = *(undefined8 *)(puVar1 + 2);
  *(undefined4 *)(param_2 + 3) = puVar1[2];
  param_2[3] = *(undefined8 *)(puVar1 + 2);
  *(undefined1 *)(param_2 + 7) = 0;
  if (*(char *)(puVar1 + 10) != '\0') {
    FText::FText(param_2 + 4);
    *(undefined1 *)(param_2 + 7) = 1;
  }
  return param_2;
}



// FUNCTION 140747080 FUN_140747080 body=192 status=ok
// SIG undefined FUN_140747080(void)

void FUN_140747080(longlong *param_1)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined1 local_res8 [8];
  uint local_20;
  
  FWeakObjectPtr::operator=(local_res8);
  uVar1 = *(ushort *)((longlong)param_1 + 0x154);
  uVar2 = *(uint *)(param_1 + 4);
  iVar4 = uVar2 + uVar1;
  *(int *)(param_1 + 4) = iVar4;
  if (*(int *)((longlong)param_1 + 0x24) < iVar4) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 3);
  }
  _guard_xfg_dispatch_icall_nop((void *)(param_1[3] + (longlong)(int)uVar2),0,(ulonglong)uVar1);
  UEnvQueryItemType_Actor::SetValue(param_1[3] + (longlong)(int)uVar2,local_res8);
  iVar4 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
  }
  lVar3 = *param_1;
  *(ulonglong *)(lVar3 + (longlong)iVar4 * 0xc) = ((ulonglong)uVar2 & 0x7fffffff) << 0x20;
  *(uint *)(lVar3 + 8 + (longlong)iVar4 * 0xc) = local_20 & 0xfffffffe;
  return;
}



// FUNCTION 140747140 FUN_140747140 body=228 status=ok
// SIG undefined FUN_140747140(void)

void FUN_140747140(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong local_18 [2];
  
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_1440899b0;
    FWeakObjectPtr::operator=(plVar2 + 1,param_2);
    plVar2[2] = param_3;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[4] = lVar3;
  }
  if (local_18 != param_1) {
    if (plVar2 == (longlong *)0x0) {
      if (((int)param_1[1] != 0) && (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x28))(plVar1,0);
        if (*param_1 != 0) {
          lVar3 = FMemory::Realloc(*param_1,0,0);
          *param_1 = lVar3;
        }
        *(undefined4 *)(param_1 + 1) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,param_1);
    }
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  return;
}



// FUNCTION 140747230 FUN_140747230 body=238 status=ok
// SIG undefined FUN_140747230(void)

void FUN_140747230(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong local_18 [2];
  
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_143f4d290;
    FWeakObjectPtr::operator=(plVar2 + 1,param_2);
    plVar2[2] = param_3;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[4] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_143f4d2d8;
  }
  if (local_18 != param_1) {
    if (plVar2 == (longlong *)0x0) {
      if (((int)param_1[1] != 0) && (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x28))(plVar1,0);
        if (*param_1 != 0) {
          lVar3 = FMemory::Realloc(*param_1,0,0);
          *param_1 = lVar3;
        }
        *(undefined4 *)(param_1 + 1) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,param_1);
    }
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  return;
}



// FUNCTION 140747320 FUN_140747320 body=218 status=ok
// SIG undefined FUN_140747320(void)

void FUN_140747320(undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  param_1 = (undefined8 *)*param_1;
  if (param_3 != 0) {
    puVar2 = (undefined8 *)(param_2 + 8);
    do {
      *param_1 = puVar2[-1];
      param_1[1] = 0;
      iVar1 = *(int *)(puVar2 + 1);
      _Src = (void *)*puVar2;
      *(int *)(param_1 + 2) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0x14) = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 1,iVar1,0);
        _guard_xfg_dispatch_icall_nop((void *)param_1[1],_Src,(longlong)iVar1 << 3);
      }
      param_1 = param_1 + 3;
      puVar2 = puVar2 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140747400 Emplace<TTuple<UObject_*,FSparseItemInfo>_const_&> body=430 status=ok
// SIG undefined Emplace<TTuple<UObject_*,FSparseItemInfo>_const_&>(void)

int * TSet<TTuple<UObject_*,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<UObject_*,FSparseItemInfo,0>,FDefaultSetAllocator>
      ::Emplace<TTuple<UObject_*,FSparseItemInfo>_const_&>
                (longlong *param_1,int *param_2,undefined4 *param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  int local_res8 [2];
  int local_38 [2];
  ulonglong *local_30;
  
  TSparseArray<TSetElement<TTuple<FFlareSpacecraftDescription_const_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  bVar11 = false;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *param_2 = local_38[0];
  *(undefined4 *)local_30 = uVar1;
  *(undefined4 *)((longlong)local_30 + 4) = uVar2;
  *(undefined4 *)(local_30 + 1) = uVar3;
  *(undefined4 *)((longlong)local_30 + 0xc) = uVar4;
  *(undefined4 *)(local_30 + 2) = 0xffffffff;
  iVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar9 != 1) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,*local_30);
    bVar11 = local_res8[0] != -1;
    if (bVar11) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)local_res8[0] * 0x18),local_30,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = local_res8[0];
      goto LAB_140747586;
    }
  }
  cVar5 = TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar9,0);
  if (cVar5 == '\0') {
    iVar9 = (int)(*local_30 >> 4);
    uVar8 = 0x9e3779b9U - iVar9 ^ iVar9 << 8;
    uVar10 = -(uVar8 + iVar9) ^ uVar8 >> 0xd;
    uVar7 = (iVar9 - uVar8) - uVar10 ^ uVar10 >> 0xc;
    uVar8 = (uVar8 - uVar7) - uVar10 ^ uVar7 << 0x10;
    uVar10 = (uVar10 - uVar8) - uVar7 ^ uVar8 >> 5;
    uVar7 = (uVar7 - uVar8) - uVar10 ^ uVar10 >> 3;
    uVar8 = (uVar8 - uVar7) - uVar10 ^ uVar7 << 10;
    uVar7 = ((uVar10 - uVar8) - uVar7 ^ uVar8 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x14) = uVar7;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 2) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         *param_2;
  }
LAB_140747586:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 1407475b0 FUN_1407475b0 body=649 status=ok
// SIG undefined FUN_1407475b0(void)

int * FUN_1407475b0(longlong param_1,int *param_2,undefined4 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  undefined4 uVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  int local_res8 [2];
  int local_38 [2];
  undefined4 *local_30;
  
  FUN_140752020(param_1,local_38);
  uVar11 = 0xffffffff;
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  bVar15 = false;
  *param_2 = local_38[0];
  *local_30 = uVar4;
  local_30[1] = uVar5;
  local_30[2] = uVar6;
  local_30[3] = uVar7;
  local_30[4] = 0xffffffff;
  if (*(int *)(param_1 + 0x608) - *(int *)(param_1 + 0x62c) != 1) {
    FUN_1407585b0(param_1,local_res8,local_30);
    bVar15 = local_res8[0] != -1;
    if (bVar15) {
      lVar9 = *(longlong *)(param_1 + 0x600);
      if (*(longlong *)(param_1 + 0x600) == 0) {
        lVar9 = param_1;
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar9 + (longlong)local_res8[0] * 0x18),local_30,0x10);
      iVar2 = *param_2;
      bVar3 = (byte)iVar2 & 0x1f;
      if (*(int *)(param_1 + 0x62c) != 0) {
        lVar9 = *(longlong *)(param_1 + 0x600);
        if (*(longlong *)(param_1 + 0x600) == 0) {
          lVar9 = param_1;
        }
        *(int *)(lVar9 + (longlong)*(int *)(param_1 + 0x628) * 0x18) = iVar2;
      }
      lVar9 = *(longlong *)(param_1 + 0x600);
      if (*(longlong *)(param_1 + 0x600) == 0) {
        lVar9 = param_1;
      }
      *(undefined4 *)(lVar9 + (longlong)iVar2 * 0x18) = 0xffffffff;
      if (0 < *(int *)(param_1 + 0x62c)) {
        uVar11 = *(undefined4 *)(param_1 + 0x628);
      }
      *(undefined4 *)(lVar9 + 4 + (longlong)iVar2 * 0x18) = uVar11;
      *(int *)(param_1 + 0x62c) = *(int *)(param_1 + 0x62c) + 1;
      *(int *)(param_1 + 0x628) = iVar2;
      lVar9 = *(longlong *)(param_1 + 0x618);
      *param_2 = local_res8[0];
      if (lVar9 == 0) {
        lVar9 = param_1 + 0x610;
      }
      puVar1 = (uint *)(lVar9 + (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_140747809;
    }
  }
  uVar14 = *(int *)(param_1 + 0x608) - *(int *)(param_1 + 0x62c);
  uVar8 = uVar14 >> 1;
  iVar2 = 0x1f;
  if (uVar8 != 0) {
    for (; uVar8 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  iVar10 = 0x20;
  cVar12 = '\0';
  if (uVar8 != 0) {
    iVar10 = 0x1f - iVar2;
  }
  uVar8 = uVar8 - 1;
  iVar2 = 0x1f;
  if (uVar8 != 0) {
    for (; uVar8 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  if (uVar8 != 0) {
    cVar12 = '\x1f' - (char)iVar2;
  }
  uVar13 = 1 << (~(byte)((iVar10 << 0x1a) >> 0x1f) & -cVar12 & 0x1f);
  uVar8 = 0x20;
  if ((0x1f < uVar13) && (uVar8 = uVar13, uVar14 < 4)) {
    uVar8 = 0;
  }
  if (((int)uVar14 < 1) ||
     ((*(int *)(param_1 + 0x6b8) != 0 && ((int)uVar8 <= *(int *)(param_1 + 0x6b8))))) {
    iVar2 = *param_2;
    uVar8 = FCrc::MemCrc32(local_30,0x10);
    uVar8 = *(int *)(param_1 + 0x6b8) - 1U & uVar8;
    local_30[5] = uVar8;
    lVar9 = *(longlong *)(param_1 + 0x6b0);
    if (*(longlong *)(param_1 + 0x6b0) == 0) {
      lVar9 = param_1 + 0x630;
    }
    local_30[4] = *(undefined4 *)
                   (lVar9 + ((longlong)*(int *)(param_1 + 0x6b8) - 1U & (longlong)(int)uVar8) * 4);
    lVar9 = *(longlong *)(param_1 + 0x6b0);
    if (*(longlong *)(param_1 + 0x6b0) == 0) {
      lVar9 = param_1 + 0x630;
    }
    *(int *)(lVar9 + ((longlong)*(int *)(param_1 + 0x6b8) - 1U & (longlong)(int)uVar8) * 4) = iVar2;
  }
  else {
    *(uint *)(param_1 + 0x6b8) = uVar8;
    FUN_140765bb0(param_1);
  }
LAB_140747809:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar15;
  }
  return param_2;
}



// FUNCTION 140747840 FUN_140747840 body=758 status=ok
// SIG undefined FUN_140747840(void)

uint * FUN_140747840(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uVar16;
  bool bVar17;
  uint local_res8 [2];
  ulonglong *local_res10;
  
  iVar11 = 1;
  uVar16 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar10 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar10 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,uVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar10 = *(uint *)(param_1 + 6);
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)(*param_1 + 4 + (longlong)(int)uVar10 * 0x18);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x18) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = uVar10;
  local_res8[0] = local_res8[0] & 0xffffff00;
  lVar5 = (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar15 = (uint *)((longlong)plVar7 + lVar5);
  *puVar15 = *puVar15 | 1 << ((byte)uVar10 & 0x1f);
  lVar6 = (longlong)(int)uVar10;
  local_res10 = (ulonglong *)(*param_1 + lVar6 * 0x18);
  uVar1 = *(ulonglong *)*param_3;
  *local_res10 = uVar1;
  *(undefined4 *)(local_res10 + 1) = 0;
  *(undefined4 *)(local_res10 + 2) = 0xffffffff;
  uVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar14 != 1) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar1);
    uVar4 = local_res8[0];
    lVar9 = (longlong)(int)local_res8[0];
    bVar17 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar17);
    if (bVar17) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + lVar9 * 0x18),local_res10,0x10);
      bVar2 = (byte)uVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = uVar10;
      }
      lVar9 = *param_1;
      *(undefined4 *)(lVar9 + lVar6 * 0x18) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar16 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar9 + 4 + lVar6 * 0x18) = uVar16;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar10;
      plVar7 = (longlong *)param_1[4];
      *param_2 = uVar4;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar15 = (uint *)((longlong)plVar7 + lVar5);
      *puVar15 = *puVar15 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_140747b07;
    }
  }
  if (3 < uVar14) {
    uVar4 = (uVar14 >> 1) + 8;
    iVar11 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    iVar8 = 0x20;
    cVar12 = '\0';
    if (uVar4 != 0) {
      iVar8 = 0x1f - iVar11;
    }
    uVar4 = (uVar14 >> 1) + 7;
    iVar11 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar12 = '\x1f' - (char)iVar11;
    }
    iVar11 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar14 < 1) || (((int)param_1[9] != 0 && (iVar11 <= (int)param_1[9])))) {
    iVar11 = (int)(*local_res10 >> 4);
    uVar4 = 0x9e3779b9U - iVar11 ^ iVar11 << 8;
    uVar13 = -(iVar11 + uVar4) ^ uVar4 >> 0xd;
    uVar14 = (iVar11 - uVar4) - uVar13 ^ uVar13 >> 0xc;
    uVar4 = (uVar4 - uVar14) - uVar13 ^ uVar14 << 0x10;
    uVar13 = (uVar13 - uVar4) - uVar14 ^ uVar4 >> 5;
    uVar14 = (uVar14 - uVar4) - uVar13 ^ uVar13 >> 3;
    uVar4 = (uVar4 - uVar14) - uVar13 ^ uVar14 << 10;
    uVar14 = ((uVar13 - uVar4) - uVar14 ^ uVar4 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_res10 + 0x14) = uVar14;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(local_res10 + 2) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(uint *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4) =
         uVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar11;
    TSet<TTuple<ULandscapeLayerInfoObject_*,float>,TDefaultMapHashableKeyFuncs<ULandscapeLayerInfoObject_*,float,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_140747b07:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 140747b40 Emplace<TKeyInitializer<VkImage_T_*_const_&>_> body=435 status=ok
// SIG undefined Emplace<TKeyInitializer<VkImage_T_*_const_&>_>(void)

int * TSet<TTuple<VkImage_T_*,enum_VkImageLayout>,TDefaultMapHashableKeyFuncs<VkImage_T_*,enum_VkImageLayout,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<VkImage_T_*_const_&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  ulonglong *puVar1;
  char cVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  int local_res8 [2];
  int local_38 [2];
  ulonglong *local_30;
  
  TSparseArray<TSetElement<TTuple<FFlareSpacecraftDescription_const_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  puVar1 = (ulonglong *)*param_3;
  bVar8 = false;
  *param_2 = local_38[0];
  *local_30 = *puVar1;
  *(undefined4 *)(local_30 + 1) = 0;
  *(undefined4 *)(local_30 + 2) = 0xffffffff;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8);
    bVar8 = local_res8[0] != -1;
    if (bVar8) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)local_res8[0] * 0x18),local_30,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = local_res8[0];
      goto LAB_140747ccb;
    }
  }
  cVar2 = TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar6,0);
  if (cVar2 == '\0') {
    iVar6 = (int)(*local_30 >> 4);
    uVar5 = 0x9e3779b9U - iVar6 ^ iVar6 << 8;
    uVar7 = -(uVar5 + iVar6) ^ uVar5 >> 0xd;
    uVar4 = (iVar6 - uVar5) - uVar7 ^ uVar7 >> 0xc;
    uVar5 = (uVar5 - uVar4) - uVar7 ^ uVar4 << 0x10;
    uVar7 = (uVar7 - uVar5) - uVar4 ^ uVar5 >> 5;
    uVar4 = (uVar4 - uVar5) - uVar7 ^ uVar7 >> 3;
    uVar5 = (uVar5 - uVar4) - uVar7 ^ uVar4 << 10;
    uVar4 = ((uVar7 - uVar5) - uVar4 ^ uVar5 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x14) = uVar4;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 2) =
         *(undefined4 *)
          ((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) =
         *param_2;
  }
LAB_140747ccb:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 140747d00 FUN_140747d00 body=693 status=ok
// SIG undefined FUN_140747d00(void)

int * FUN_140747d00(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  bool local_res8;
  
  uVar9 = 0xffffffff;
  iVar8 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar7 = *(int *)(*param_1 + 4 + (longlong)iVar12 * 0x28);
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x28) = 0xffffffff;
    }
  }
  plVar10 = (longlong *)param_1[4];
  *param_2 = iVar12;
  local_res8 = false;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar10 +
                   (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar12 & 0x1f);
  plVar10 = (longlong *)(*param_1 + (longlong)iVar12 * 0x28);
  lVar2 = *(longlong *)*param_3;
  *plVar10 = lVar2;
  plVar10[1] = 0;
  plVar10[2] = 0;
  plVar10[3] = 0;
  *(undefined4 *)(plVar10 + 4) = 0xffffffff;
  iVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar12 != 1) {
    iVar7 = iVar8;
    if (iVar12 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar6 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar5 != -1) {
        do {
          iVar7 = iVar5;
          if (*(longlong *)(*param_1 + (longlong)iVar5 * 0x28) == lVar2) break;
          iVar5 = *(int *)(*param_1 + 0x20 + (longlong)iVar5 * 0x28);
          iVar7 = iVar8;
        } while (iVar5 != -1);
      }
    }
    local_res8 = iVar7 != -1;
    if (local_res8) {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + 0x10 + (longlong)iVar7 * 0x28) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar2 + (longlong)iVar7 * 0x28),plVar10,0x20);
      iVar8 = *param_2;
      bVar3 = (byte)iVar8 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar8;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + (longlong)iVar8 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar9 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar2 + 4 + (longlong)iVar8 * 0x28) = uVar9;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar8;
      plVar10 = (longlong *)param_1[4];
      *param_2 = iVar7;
      if (plVar10 == (longlong *)0x0) {
        plVar10 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar10 +
                       (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_140747f89;
    }
  }
  cVar4 = TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar12,0);
  if (cVar4 == '\0') {
    uVar11 = (int)((ulonglong)*plVar10 >> 0x20) + (int)*plVar10 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar10 + 0x24) = uVar11;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(plVar10 + 4) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_140747f89:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 140747fc0 FUN_140747fc0 body=631 status=ok
// SIG undefined FUN_140747fc0(void)

int * FUN_140747fc0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  bool bVar11;
  
  iVar8 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x14) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  bVar11 = false;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
  puVar1 = (uint *)(*param_1 + (longlong)iVar7 * 0x14);
  puVar3 = (undefined8 *)param_3[1];
  *puVar1 = *(uint *)*param_3;
  *(undefined8 *)(puVar1 + 1) = *puVar3;
  puVar1[3] = 0xffffffff;
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar10 != 1) {
    if (uVar10 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar5 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar1) * 4);
      if (iVar6 != -1) {
        do {
          if (*(uint *)(*param_1 + (longlong)iVar6 * 0x14) == *puVar1) goto LAB_14074811b;
          iVar6 = *(int *)(*param_1 + 0xc + (longlong)iVar6 * 0x14);
        } while (iVar6 != -1);
      }
    }
    iVar6 = -1;
LAB_14074811b:
    bVar11 = iVar6 != -1;
    if (bVar11) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar6 * 0x14),puVar1,0xc);
      TSparseArray<TSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar7,1);
      *param_2 = iVar6;
      goto LAB_14074820e;
    }
  }
  if (3 < uVar10) {
    uVar4 = (uVar10 >> 1) + 8;
    iVar8 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    iVar6 = 0x20;
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar8;
    }
    uVar4 = (uVar10 >> 1) + 7;
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
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar10 = (int)param_1[9] - 1U & *puVar1;
    puVar1[4] = uVar10;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    puVar1[3] = *(uint *)((longlong)plVar5 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         iVar7;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<unsigned_int,FMeshSectionInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FMeshSectionInfo,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14074820e:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 140748240 FUN_140748240 body=610 status=ok
// SIG undefined FUN_140748240(void)

int * FUN_140748240(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  undefined2 *puVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  uint *puVar10;
  bool bVar11;
  
  iVar7 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar6);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar6 = (int)param_1[6];
    iVar1 = *(int *)(*param_1 + 4 + (longlong)iVar6 * 0x10);
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  plVar4 = (longlong *)param_1[4];
  *param_2 = iVar6;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = param_1 + 2;
  }
  bVar11 = false;
  puVar10 = (uint *)((longlong)plVar4 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar10 = *puVar10 | 1 << ((byte)iVar6 & 0x1f);
  puVar10 = (uint *)((longlong)iVar6 * 0x10 + *param_1);
  puVar2 = (undefined2 *)param_3[1];
  *puVar10 = *(uint *)*param_3;
  *(undefined2 *)(puVar10 + 1) = *puVar2;
  puVar10[2] = 0xffffffff;
  uVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar9 != 1) {
    if (uVar9 != 0) {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar4 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar10) * 4);
      if (iVar5 != -1) {
        do {
          if (*(uint *)(*param_1 + (longlong)iVar5 * 0x10) == *puVar10) goto LAB_14074838a;
          iVar5 = *(int *)(*param_1 + 8 + (longlong)iVar5 * 0x10);
        } while (iVar5 != -1);
      }
    }
    iVar5 = -1;
LAB_14074838a:
    bVar11 = iVar5 != -1;
    if (bVar11) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar5 * 0x10 + *param_1),puVar10,8);
      TSparseArray<TSetElement<TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FCacheEntry_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar6,1);
      *param_2 = iVar5;
      goto LAB_140748479;
    }
  }
  if (3 < uVar9) {
    uVar3 = (uVar9 >> 1) + 8;
    iVar7 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    iVar5 = 0x20;
    if (uVar3 != 0) {
      iVar5 = 0x1f - iVar7;
    }
    uVar3 = (uVar9 >> 1) + 7;
    iVar7 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar3 == 0) {
      cVar8 = '\0';
    }
    else {
      cVar8 = '\x1f' - (char)iVar7;
    }
    iVar7 = 1 << (~(byte)((iVar5 << 0x1a) >> 0x1f) & 0x20U - cVar8 & 0x1f);
  }
  if (((int)uVar9 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    uVar9 = (int)param_1[9] - 1U & *puVar10;
    puVar10[3] = uVar9;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    puVar10[2] = *(uint *)((longlong)plVar4 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) = iVar6
    ;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Rehash
              (param_1);
  }
LAB_140748479:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 1407484b0 FUN_1407484b0 body=852 status=ok
// SIG undefined FUN_1407484b0(void)

int * FUN_1407484b0(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined8 *_Src;
  undefined8 *puVar2;
  void *_Dst;
  short sVar3;
  short sVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  short *psVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  char cVar13;
  undefined2 *puVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  undefined2 *puVar18;
  bool bVar19;
  
  iVar11 = 1;
  iVar17 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar7 = *(int *)(*param_1 + 4 + (longlong)iVar12 * 0x48);
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x48) = 0xffffffff;
    }
  }
  plVar10 = (longlong *)param_1[4];
  *param_2 = iVar12;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar10 +
                   (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar12 & 0x1f);
  _Src = (undefined8 *)(*param_1 + (longlong)iVar12 * 0x48);
  TPairInitializer<FString_&&,FFormatArgumentValue_&&>::
  operator<FString,FFormatArgumentValue>_TTuple<FString,FFormatArgumentValue>(param_3,_Src);
  *(undefined4 *)(_Src + 8) = 0xffffffff;
  puVar18 = &DAT_143f3eda8;
  bVar19 = false;
  uVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar16 != 1) {
    iVar12 = iVar17;
    if (uVar16 != 0) {
      iVar5 = *(int *)(_Src + 1);
      if (iVar5 == 0) {
        puVar14 = &DAT_143f3eda8;
      }
      else {
        puVar14 = (undefined2 *)*_Src;
      }
      plVar10 = (longlong *)param_1[8];
      iVar7 = FCrc::StrCrc32<wchar_t>(puVar14,0);
      if (plVar10 == (longlong *)0x0) {
        plVar10 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar10 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar7 != -1) {
        do {
          puVar2 = (undefined8 *)(*param_1 + (longlong)iVar7 * 0x48);
          if (iVar5 == 0) {
            puVar14 = &DAT_143f3eda8;
          }
          else {
            puVar14 = (undefined2 *)*_Src;
          }
          if (*(int *)(puVar2 + 1) == 0) {
            psVar9 = &DAT_143f3eda8;
          }
          else {
            psVar9 = (short *)*puVar2;
          }
          lVar15 = (longlong)puVar14 - (longlong)psVar9;
          do {
            sVar3 = *psVar9;
            sVar4 = *(short *)((longlong)psVar9 + lVar15);
            if (sVar3 != sVar4) break;
            psVar9 = psVar9 + 1;
          } while (sVar4 != 0);
          iVar12 = iVar7;
        } while ((sVar3 != sVar4) && (iVar7 = *(int *)(puVar2 + 8), iVar12 = iVar17, iVar7 != -1));
      }
    }
    bVar19 = iVar12 != -1;
    if (bVar19) {
      _Dst = (void *)(*param_1 + (longlong)iVar12 * 0x48);
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,FFormatArgumentValue>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,FFormatArgumentValue>(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x40);
      iVar11 = *param_2;
      bVar6 = (byte)iVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x48) = iVar11;
      }
      lVar15 = *param_1;
      *(undefined4 *)(lVar15 + (longlong)iVar11 * 0x48) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar17 = (int)param_1[6];
      }
      *(int *)(lVar15 + 4 + (longlong)iVar11 * 0x48) = iVar17;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar10 = (longlong *)param_1[4];
      *param_2 = iVar12;
      if (plVar10 == (longlong *)0x0) {
        plVar10 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar10 +
                       (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar6 | 1U >> 0x20 - bVar6);
      goto LAB_1407487df;
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
    cVar13 = '\0';
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
      cVar13 = '\x1f' - (char)iVar17;
    }
    iVar11 = 1 << (~(byte)((iVar11 << 0x1a) >> 0x1f) & 0x20U - cVar13 & 0x1f);
  }
  if (((int)uVar16 < 1) || (((int)param_1[9] != 0 && (iVar11 <= (int)param_1[9])))) {
    iVar17 = *param_2;
    if (*(int *)(_Src + 1) != 0) {
      puVar18 = (undefined2 *)*_Src;
    }
    uVar16 = FCrc::StrCrc32<wchar_t>(puVar18,0);
    uVar16 = uVar16 & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x44) = uVar16;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 8) =
         *(undefined4 *)
          ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4) =
         iVar17;
  }
  else {
    *(int *)(param_1 + 9) = iVar11;
    TSet<TTuple<FString,FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FLocKeyMapFuncs<FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1407487df:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar19;
  }
  return param_2;
}



// FUNCTION 140748810 Emplace<TPairInitializer<VkImage_T_*_const_&,enum_VkImageLayout_&&>_> body=442 status=ok
// SIG undefined Emplace<TPairInitializer<VkImage_T_*_const_&,enum_VkImageLayout_&&>_>(void)

int * TSet<TTuple<VkImage_T_*,enum_VkImageLayout>,TDefaultMapHashableKeyFuncs<VkImage_T_*,enum_VkImageLayout,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<VkImage_T_*_const_&,enum_VkImageLayout_&&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  char cVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  int local_res8 [2];
  int local_38 [2];
  ulonglong *local_30;
  
  TSparseArray<TSetElement<TTuple<FFlareSpacecraftDescription_const_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  bVar9 = false;
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(ulonglong *)*param_3;
  *param_2 = local_38[0];
  *local_30 = uVar2;
  *(undefined4 *)(local_30 + 1) = *puVar1;
  *(undefined4 *)(local_30 + 2) = 0xffffffff;
  iVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar7 != 1) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8);
    bVar9 = local_res8[0] != -1;
    if (bVar9) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)local_res8[0] * 0x18),local_30,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = local_res8[0];
      goto LAB_1407489a2;
    }
  }
  cVar3 = TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar7);
  if (cVar3 == '\0') {
    iVar7 = (int)(*local_30 >> 4);
    uVar6 = 0x9e3779b9U - iVar7 ^ iVar7 << 8;
    uVar8 = -(uVar6 + iVar7) ^ uVar6 >> 0xd;
    uVar5 = (iVar7 - uVar6) - uVar8 ^ uVar8 >> 0xc;
    uVar6 = (uVar6 - uVar5) - uVar8 ^ uVar5 << 0x10;
    uVar8 = (uVar8 - uVar6) - uVar5 ^ uVar6 >> 5;
    uVar5 = (uVar5 - uVar6) - uVar8 ^ uVar8 >> 3;
    uVar6 = (uVar6 - uVar5) - uVar8 ^ uVar5 << 10;
    uVar5 = ((uVar8 - uVar6) - uVar5 ^ uVar6 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x14) = uVar5;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 2) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_1407489a2:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar9;
  }
  return param_2;
}



// FUNCTION 1407489d0 Emplace<TPairInitializer<FFlareResourceDescription_*_const_&,int_const_&>_> body=771 status=ok
// SIG undefined Emplace<TPairInitializer<FFlareResourceDescription_*_const_&,int_const_&>_>(void)

uint * TSet<TTuple<FFlareResourceDescription_*,int>,TDefaultMapHashableKeyFuncs<FFlareResourceDescription_*,int,0>,FDefaultSetAllocator>
       ::Emplace<TPairInitializer<FFlareResourceDescription_*_const_&,int_const_&>_>
                 (longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uVar17;
  bool bVar18;
  uint local_res8 [2];
  ulonglong *local_res10;
  
  iVar12 = 1;
  uVar17 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar11 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar11 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,uVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar11 = *(uint *)(param_1 + 6);
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar9 = *(int *)(*param_1 + 4 + (longlong)(int)uVar11 * 0x18);
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar9 * 0x18) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = uVar11;
  local_res8[0] = local_res8[0] & 0xffffff00;
  lVar7 = (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar16 = (uint *)((longlong)plVar8 + lVar7);
  *puVar16 = *puVar16 | 1 << ((byte)uVar11 & 0x1f);
  puVar2 = (undefined4 *)param_3[1];
  lVar1 = (longlong)(int)uVar11 * 0x18;
  local_res10 = (ulonglong *)(*param_1 + lVar1);
  uVar3 = *(ulonglong *)*param_3;
  *local_res10 = uVar3;
  *(undefined4 *)(local_res10 + 1) = *puVar2;
  *(undefined4 *)(local_res10 + 2) = 0xffffffff;
  uVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar15 != 1) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar3);
    uVar6 = local_res8[0];
    lVar10 = (longlong)(int)local_res8[0];
    bVar18 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar18);
    if (bVar18) {
      ::_guard_xfg_dispatch_icall_nop((void *)(*param_1 + lVar10 * 0x18),local_res10,0x10);
      bVar4 = (byte)uVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = uVar11;
      }
      lVar10 = *param_1;
      *(undefined4 *)(lVar1 + lVar10) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar17 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar1 + 4 + lVar10) = uVar17;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar11;
      plVar8 = (longlong *)param_1[4];
      *param_2 = uVar6;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar16 = (uint *)((longlong)plVar8 + lVar7);
      *puVar16 = *puVar16 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_140748ca4;
    }
  }
  if (3 < uVar15) {
    uVar6 = (uVar15 >> 1) + 8;
    iVar12 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    iVar9 = 0x20;
    cVar13 = '\0';
    if (uVar6 != 0) {
      iVar9 = 0x1f - iVar12;
    }
    uVar6 = (uVar15 >> 1) + 7;
    iVar12 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar6 != 0) {
      cVar13 = '\x1f' - (char)iVar12;
    }
    iVar12 = 1 << (~(byte)((iVar9 << 0x1a) >> 0x1f) & 0x20U - cVar13 & 0x1f);
  }
  if (((int)uVar15 < 1) || (((int)param_1[9] != 0 && (iVar12 <= (int)param_1[9])))) {
    iVar12 = (int)(*local_res10 >> 4);
    uVar6 = 0x9e3779b9U - iVar12 ^ iVar12 << 8;
    uVar14 = -(iVar12 + uVar6) ^ uVar6 >> 0xd;
    uVar15 = (iVar12 - uVar6) - uVar14 ^ uVar14 >> 0xc;
    uVar6 = (uVar6 - uVar15) - uVar14 ^ uVar15 << 0x10;
    uVar14 = (uVar14 - uVar6) - uVar15 ^ uVar6 >> 5;
    uVar15 = (uVar15 - uVar6) - uVar14 ^ uVar14 >> 3;
    uVar6 = (uVar6 - uVar15) - uVar14 ^ uVar15 << 10;
    uVar15 = ((uVar14 - uVar6) - uVar15 ^ uVar6 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_res10 + 0x14) = uVar15;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(local_res10 + 2) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(uint *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4) =
         uVar11;
  }
  else {
    *(int *)(param_1 + 9) = iVar12;
    TSet<TTuple<FFlareSpacecraftDescription_const_*,int>,TDefaultMapHashableKeyFuncs<FFlareSpacecraftDescription_const_*,int,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_140748ca4:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 140748ce0 FUN_140748ce0 body=802 status=ok
// SIG undefined FUN_140748ce0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140748ce0(longlong *param_1,longlong param_2,longlong *param_3,float param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  undefined1 local_res10 [16];
  uint local_res20;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  uint uStack_78;
  uint local_74;
  undefined8 local_70;
  undefined4 local_68;
  float local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  puVar8 = (undefined8 *)FUN_140761e00(uVar2,*(undefined8 *)(param_2 + 0x18));
  puVar9 = (undefined8 *)
           FUN_140761e00(*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
  if (puVar8 != puVar9) {
    local_res20 = local_74;
    do {
      lVar3 = puVar8[2];
      iVar13 = 0;
      if (0 < (int)param_3[1]) {
        lVar14 = 0;
        do {
          lVar4 = *(longlong *)(lVar14 + *param_3);
          if (lVar4 != 0) {
            lVar10 = FUN_1429d7ab0();
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if ((bVar6) && (lVar10 = *(longlong *)(lVar4 + 0x490), lVar10 != 0)) {
              lVar11 = FUN_142c2de20();
              if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              if ((bVar6) && (cVar7 = FUN_140761940(lVar3,lVar10), cVar7 != '\0')) {
                lVar4 = *(longlong *)(lVar4 + 0x168);
                uVar5 = *(undefined8 *)(lVar3 + 0x220);
                uStack_50 = *(undefined8 *)(lVar3 + 0x228);
                if (lVar4 == 0) {
                  local_68 = DAT_1468b5d98;
                  puVar12 = &local_70;
                  local_70 = _DAT_1468b5d90;
                }
                else {
                  puVar12 = (undefined8 *)&local_88;
                  local_88 = *(undefined4 *)(lVar4 + 0x220);
                  local_80 = *(undefined4 *)(lVar4 + 0x228);
                  uStack_84 = *(undefined4 *)(lVar4 + 0x224);
                }
                local_58._0_4_ = (float)uVar5;
                local_58._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
                fVar16 = (float)local_58 - (float)*puVar12;
                local_5c = *(float *)(puVar12 + 1);
                fVar17 = local_58._4_4_ - (float)((ulonglong)*puVar12 >> 0x20);
                local_58 = uVar5;
                if (fVar17 * fVar17 + fVar16 * fVar16 +
                    ((float)uStack_50 - local_5c) * ((float)uStack_50 - local_5c) <
                    param_4 * param_4) {
                  FWeakObjectPtr::operator=(local_res10);
                  uVar1 = *(ushort *)((longlong)param_1 + 0x154);
                  uVar15 = *(uint *)(param_1 + 4);
                  iVar13 = uVar15 + uVar1;
                  *(int *)(param_1 + 4) = iVar13;
                  if (*(int *)((longlong)param_1 + 0x24) < iVar13) {
                    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 3);
                  }
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(param_1[3] + (longlong)(int)uVar15),0,(ulonglong)uVar1);
                  UEnvQueryItemType_Actor::SetValue(param_1[3] + (longlong)(int)uVar15,local_res10);
                  iVar13 = (int)param_1[1];
                  uStack_78 = uVar15 & 0x7fffffff;
                  uVar15 = local_res20 & 0xfffffffe;
                  local_7c = 0;
                  *(int *)(param_1 + 1) = iVar13 + 1;
                  local_res20 = uVar15;
                  if (*(int *)((longlong)param_1 + 0xc) < iVar13 + 1) {
                    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1,iVar13);
                  }
                  lVar3 = *param_1;
                  *(ulonglong *)(lVar3 + (longlong)iVar13 * 0xc) = CONCAT44(uStack_78,local_7c);
                  *(uint *)(lVar3 + 8 + (longlong)iVar13 * 0xc) = uVar15;
                  break;
                }
              }
            }
          }
          iVar13 = iVar13 + 1;
          lVar14 = lVar14 + 8;
        } while (iVar13 < (int)param_3[1]);
      }
      puVar8 = (undefined8 *)FUN_140761e00(uVar2,*puVar8);
    } while (puVar8 != puVar9);
  }
  return;
}



// FUNCTION 140749010 FUN_140749010 body=802 status=ok
// SIG undefined FUN_140749010(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140749010(longlong *param_1,longlong param_2,longlong *param_3,float param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  undefined1 local_res10 [16];
  uint local_res20;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  uint uStack_78;
  uint local_74;
  undefined8 local_70;
  undefined4 local_68;
  float local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  puVar8 = (undefined8 *)FUN_14073d760(uVar2,*(undefined8 *)(param_2 + 0x10));
  puVar9 = (undefined8 *)
           FUN_14073d760(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
  if (puVar8 != puVar9) {
    local_res20 = local_74;
    do {
      lVar3 = puVar8[2];
      iVar13 = 0;
      if (0 < (int)param_3[1]) {
        lVar14 = 0;
        do {
          lVar4 = *(longlong *)(lVar14 + *param_3);
          if (lVar4 != 0) {
            lVar10 = FUN_1429d7ab0();
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if ((bVar6) && (lVar10 = *(longlong *)(lVar4 + 0x490), lVar10 != 0)) {
              lVar11 = FUN_142c2de20();
              if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              if ((bVar6) && (cVar7 = FUN_140761940(lVar3,lVar10), cVar7 != '\0')) {
                lVar4 = *(longlong *)(lVar4 + 0x168);
                uVar5 = *(undefined8 *)(lVar3 + 0x220);
                uStack_50 = *(undefined8 *)(lVar3 + 0x228);
                if (lVar4 == 0) {
                  local_68 = DAT_1468b5d98;
                  puVar12 = &local_70;
                  local_70 = _DAT_1468b5d90;
                }
                else {
                  puVar12 = (undefined8 *)&local_88;
                  local_88 = *(undefined4 *)(lVar4 + 0x220);
                  local_80 = *(undefined4 *)(lVar4 + 0x228);
                  uStack_84 = *(undefined4 *)(lVar4 + 0x224);
                }
                local_58._0_4_ = (float)uVar5;
                local_58._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
                fVar16 = (float)local_58 - (float)*puVar12;
                local_5c = *(float *)(puVar12 + 1);
                fVar17 = local_58._4_4_ - (float)((ulonglong)*puVar12 >> 0x20);
                local_58 = uVar5;
                if (fVar17 * fVar17 + fVar16 * fVar16 +
                    ((float)uStack_50 - local_5c) * ((float)uStack_50 - local_5c) <
                    param_4 * param_4) {
                  FWeakObjectPtr::operator=(local_res10);
                  uVar1 = *(ushort *)((longlong)param_1 + 0x154);
                  uVar15 = *(uint *)(param_1 + 4);
                  iVar13 = uVar15 + uVar1;
                  *(int *)(param_1 + 4) = iVar13;
                  if (*(int *)((longlong)param_1 + 0x24) < iVar13) {
                    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 3);
                  }
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(param_1[3] + (longlong)(int)uVar15),0,(ulonglong)uVar1);
                  UEnvQueryItemType_Actor::SetValue(param_1[3] + (longlong)(int)uVar15,local_res10);
                  iVar13 = (int)param_1[1];
                  uStack_78 = uVar15 & 0x7fffffff;
                  uVar15 = local_res20 & 0xfffffffe;
                  local_7c = 0;
                  *(int *)(param_1 + 1) = iVar13 + 1;
                  local_res20 = uVar15;
                  if (*(int *)((longlong)param_1 + 0xc) < iVar13 + 1) {
                    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1,iVar13);
                  }
                  lVar3 = *param_1;
                  *(ulonglong *)(lVar3 + (longlong)iVar13 * 0xc) = CONCAT44(uStack_78,local_7c);
                  *(uint *)(lVar3 + 8 + (longlong)iVar13 * 0xc) = uVar15;
                  break;
                }
              }
            }
          }
          iVar13 = iVar13 + 1;
          lVar14 = lVar14 + 8;
        } while (iVar13 < (int)param_3[1]);
      }
      puVar8 = (undefined8 *)FUN_14073d760(uVar2,*puVar8);
    } while (puVar8 != puVar9);
  }
  return;
}



// FUNCTION 140749340 FindPathFollowingAgentForActor body=536 status=ok
// SIG undefined FindPathFollowingAgentForActor(void)

longlong FNavigationSystem::FindPathFollowingAgentForActor(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  int local_88;
  uint uStack_84;
  uint uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int iStack_60;
  uint uStack_5c;
  uint *local_58;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 uStack_38;
  uint *puStack_30;
  uint uStack_28;
  uint uStack_24;
  undefined8 uStack_20;
  
  plVar2 = (longlong *)(param_1 + 0x2b0);
  uStack_84 = 1;
  uVar3 = *(uint *)(param_1 + 0x2d8);
  puVar1 = (uint *)(param_1 + 0x2c0);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar11 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar4 = *puVar11;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar4 == 0) {
      lVar9 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar7 = local_88 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar7;
      if (bVar5) goto LAB_14074940c;
      uVar4 = puVar11[lVar9 + 1];
    }
    uStack_84 = -uVar4 & uVar4;
    iVar7 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_74 = (iStack_70 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_14074940c:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x2d8);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar10 = uVar4 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar1;
  local_40 = plVar2;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar4;
  if (uVar4 != uVar3) {
    puVar11 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar8 = puVar11[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar7 = (int)uVar4 >> 5;
    while (uVar8 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_1407494d2;
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
    if ((int)uVar3 < (int)uStack_74) {
LAB_1407494d2:
      uStack_74 = uVar3;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar1))) {
    lVar9 = *(longlong *)(*plVar2 + (longlong)(int)uStack_4c * 0x10);
    if (lVar9 != 0) {
      uVar6 = UPathFollowingAgentInterface::GetPrivateStaticClass();
      lVar9 = UObjectBaseUtility::GetInterfaceAddress(lVar9,uVar6);
      if (lVar9 != 0) {
        return lVar9;
      }
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return 0;
}



// FUNCTION 140749560 FUN_140749560 body=737 status=ok
// SIG undefined FUN_140749560(void)

undefined8
FUN_140749560(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong *plVar1;
  undefined4 *puVar2;
  float fVar3;
  int iVar4;
  char cVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  float local_res10 [4];
  undefined8 local_res20;
  uint local_88 [2];
  longlong *local_80;
  longlong *local_78;
  float *local_70;
  longlong local_68;
  longlong lStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  byte local_48;
  undefined7 uStack_47;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    return 0;
  }
  if (param_2 == param_3) {
    return 1;
  }
  plVar9 = (longlong *)(param_1 + 8);
  iVar7 = 0;
  iVar12 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  local_res20 = param_4;
  local_80 = plVar9;
  if (*(int *)(param_1 + 0x14) < 0x40) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (plVar9,0x40);
  }
  TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
  ::Reset(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x78) = 0;
  if ((*(int *)(param_1 + 0x7c) < 0) && (*(int *)(param_1 + 0x7c) != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x70,0);
  }
  fVar3 = *(float *)(param_1 + 0x10);
  lVar8 = (longlong)(int)fVar3;
  local_48 = local_48 & 0xfc;
  lStack_60 = 0;
  local_58 = 0x7f7fffff;
  uStack_54 = 0x7f7fffff;
  uStack_50 = 0xffffffffffffffff;
  *(int *)(param_1 + 0x10) = (int)fVar3 + 1;
  local_68 = param_2;
  if (*(int *)(param_1 + 0x14) < (int)fVar3 + 1) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar9,fVar3);
  }
  lVar10 = *plVar9;
  plVar1 = (longlong *)(lVar10 + lVar8 * 0x28);
  *plVar1 = local_68;
  plVar1[1] = lStack_60;
  puVar2 = (undefined4 *)(lVar10 + 0x10 + lVar8 * 0x28);
  *puVar2 = local_58;
  puVar2[1] = uStack_54;
  puVar2[2] = (undefined4)uStack_50;
  puVar2[3] = uStack_50._4_4_;
  *(ulonglong *)(lVar10 + 0x20 + lVar8 * 0x28) = CONCAT71(uStack_47,local_48);
  local_78 = &local_68;
  local_70 = local_res10;
  local_res10[0] = fVar3;
  TSet<TTuple<FFlareResourceDescription_*,int>,TDefaultMapHashableKeyFuncs<FFlareResourceDescription_*,int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FFlareResourceDescription_*_const_&,int_const_&>_>
            (param_1 + 0x18,local_88,&local_78,0);
  lVar8 = *plVar9 + (longlong)(int)local_res10[0] * 0x28;
  *(float *)(lVar8 + 0x18) = local_res10[0];
  *(undefined4 *)(lVar8 + 0x10) = 0;
  uVar14 = FUN_14075eba0(local_res20,param_2,param_3);
  *(undefined4 *)(lVar8 + 0x14) = uVar14;
  FGraphAStar<FDakMapGraphData,FDakMapAStarPolicy,FDakAStarSearchNode<FDakMapGraphData>_>::FOpenList
  ::Push(param_1 + 0x70,lVar8);
  uVar11 = local_res20;
  cVar5 = '\x01';
  local_res10[0] = *(float *)(lVar8 + 0x14);
  iVar4 = *(int *)(param_1 + 0x78);
  uVar13 = *(uint *)(lVar8 + 0x18);
  while ((local_88[0] = uVar13, 0 < iVar4 && (plVar9 = local_80, cVar5 != '\0'))) {
    cVar5 = FUN_14074a7e0(param_1,param_3,1,uVar11,local_88,local_res10);
    iVar4 = *(int *)(param_1 + 0x78);
    plVar9 = local_80;
    uVar13 = local_88[0];
  }
  if (local_res10[0] == 0.0) {
    uVar6 = (ulonglong)uVar13;
    do {
      lVar8 = (longlong)iVar7;
      iVar7 = iVar7 + 1;
      iVar4 = *(int *)(*plVar9 + 0x1c + (longlong)(int)uVar6 * 0x28);
      uVar6 = (ulonglong)iVar4;
      if (((iVar4 < 0) || ((int)plVar9[1] <= iVar4)) ||
         (*(longlong *)(*plVar9 + uVar6 * 0x28) == param_2)) {
        if (iVar7 < 10000) {
          uVar11 = 1;
        }
        else {
          uVar11 = 3;
        }
        goto LAB_14074978a;
      }
    } while (iVar7 < 10000);
    uVar11 = 3;
LAB_14074978a:
    *(undefined4 *)(param_5 + 1) = 0;
    if (*(int *)((longlong)param_5 + 0xc) < iVar7) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_5);
      iVar12 = (int)param_5[1];
    }
    *(int *)(param_5 + 1) = iVar12 + iVar7;
    if (*(int *)((longlong)param_5 + 0xc) < iVar12 + iVar7) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_5);
    }
    _guard_xfg_dispatch_icall_nop((void *)(*param_5 + (longlong)iVar12 * 8),0,(longlong)iVar7 << 3);
    lVar10 = *plVar9;
    do {
      *(undefined8 *)(*param_5 + lVar8 * 8) = *(undefined8 *)(lVar10 + (longlong)(int)uVar13 * 0x28)
      ;
      lVar8 = lVar8 + -1;
      lVar10 = *plVar9;
      uVar13 = *(uint *)(lVar10 + 0x1c + (longlong)(int)uVar13 * 0x28);
    } while (-1 < lVar8);
  }
  else {
    uVar11 = 2;
  }
  return uVar11;
}



// FUNCTION 140749850 FUN_140749850 body=1139 status=ok
// SIG undefined FUN_140749850(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140749850(longlong param_1,longlong param_2,char param_3)

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
      if (bVar3) goto LAB_14074997f;
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
LAB_14074997f:
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
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_140749a3f;
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
LAB_140749a3f:
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
      lVar4 = UUGHitTextureButton::GetPrivateStaticClass();
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
          FUN_140749850(*(longlong *)(*plVar14 + 0x2d8),local_108,1);
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



// FUNCTION 140749cd0 FUN_140749cd0 body=1139 status=ok
// SIG undefined FUN_140749cd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140749cd0(longlong param_1,longlong param_2,char param_3)

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
      if (bVar3) goto LAB_140749dff;
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
LAB_140749dff:
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
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_140749ebf;
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
LAB_140749ebf:
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
      lVar4 = FUN_1429ff160();
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
          FUN_140749cd0(*(longlong *)(*plVar14 + 0x2d8),local_108,1);
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



// FUNCTION 14074a150 FUN_14074a150 body=649 status=ok
// SIG undefined FUN_14074a150(void)

void FUN_14074a150(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  undefined8 *puVar19;
  
  iVar13 = (param_2 + -2) / 2;
  if (-1 < iVar13) {
    iVar14 = iVar13 * 2 + 1;
    iVar7 = iVar14;
    iVar18 = iVar13;
joined_r0x00014074a17a:
    do {
      if (iVar14 < param_2) {
        iVar14 = iVar13 * 2;
        iVar17 = iVar14 + 1;
        if (iVar14 + 2 < param_2) {
          lVar15 = (longlong)iVar14 + 2;
          lVar16 = (longlong)iVar17;
          iVar5 = *(int *)((longlong)param_1 + lVar15 * 0x28 + 4);
          iVar3 = *(int *)((longlong)param_1 + lVar16 * 0x28 + 4);
          if (iVar5 == iVar3) {
            if (*(int *)(param_1 + lVar15 * 5 + 1) == *(int *)(param_1 + lVar16 * 5 + 1)) {
              bVar6 = *(float *)(param_1 + lVar15 * 5 + 3) < *(float *)(param_1 + lVar16 * 5 + 3);
            }
            else {
              bVar6 = *(int *)(param_1 + lVar15 * 5 + 1) < *(int *)(param_1 + lVar16 * 5 + 1);
            }
          }
          else {
            bVar6 = iVar5 < iVar3;
          }
          if (bVar6) {
            iVar17 = iVar14;
          }
          iVar17 = iVar17 + 1;
        }
        puVar19 = param_1 + (longlong)iVar13 * 5;
        puVar1 = param_1 + (longlong)iVar17 * 5;
        if (*(int *)((longlong)puVar19 + 4) == *(int *)((longlong)puVar1 + 4)) {
          if (*(int *)(puVar19 + 1) == *(int *)(puVar1 + 1)) {
            bVar6 = *(float *)(puVar19 + 3) < *(float *)(puVar1 + 3);
          }
          else {
            bVar6 = *(int *)(puVar19 + 1) < *(int *)(puVar1 + 1);
          }
        }
        else {
          bVar6 = *(int *)((longlong)puVar19 + 4) < *(int *)((longlong)puVar1 + 4);
        }
        if (bVar6) {
          if (puVar19 != puVar1) {
            uVar8 = puVar1[1];
            uVar9 = *puVar19;
            uVar10 = puVar19[1];
            uVar11 = puVar19[2];
            uVar12 = puVar19[3];
            uVar4 = puVar19[4];
            *puVar19 = *puVar1;
            puVar19[1] = uVar8;
            uVar8 = puVar1[3];
            puVar19[2] = puVar1[2];
            puVar19[3] = uVar8;
            puVar19[4] = puVar1[4];
            *puVar1 = uVar9;
            puVar1[1] = uVar10;
            puVar1[2] = uVar11;
            puVar1[3] = uVar12;
            puVar1[4] = uVar4;
          }
          iVar14 = iVar17 * 2 + 1;
          iVar13 = iVar17;
          goto joined_r0x00014074a17a;
        }
      }
      iVar14 = iVar7 + -2;
      iVar13 = iVar18 + -1;
      iVar7 = iVar14;
      iVar18 = iVar13;
    } while (-1 < iVar13);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar19 = param_1 + (longlong)param_2 * 5;
    do {
      if (param_1 != puVar19) {
        uVar8 = puVar19[1];
        uVar9 = *param_1;
        uVar10 = param_1[1];
        uVar11 = param_1[2];
        uVar12 = param_1[3];
        uVar4 = param_1[4];
        *param_1 = *puVar19;
        param_1[1] = uVar8;
        uVar8 = puVar19[3];
        param_1[2] = puVar19[2];
        param_1[3] = uVar8;
        param_1[4] = puVar19[4];
        *puVar19 = uVar9;
        puVar19[1] = uVar10;
        puVar19[2] = uVar11;
        puVar19[3] = uVar12;
        puVar19[4] = uVar4;
      }
      iVar13 = 0;
      if (1 < param_2) {
        do {
          iVar7 = iVar13 * 2;
          iVar14 = iVar7 + 1;
          if (iVar7 + 2 < param_2) {
            lVar15 = (longlong)iVar7 + 2;
            lVar16 = (longlong)iVar14;
            iVar17 = *(int *)((longlong)param_1 + lVar15 * 0x28 + 4);
            iVar18 = *(int *)((longlong)param_1 + lVar16 * 0x28 + 4);
            if (iVar17 == iVar18) {
              if (*(int *)(param_1 + lVar15 * 5 + 1) == *(int *)(param_1 + lVar16 * 5 + 1)) {
                bVar6 = *(float *)(param_1 + lVar15 * 5 + 3) < *(float *)(param_1 + lVar16 * 5 + 3);
              }
              else {
                bVar6 = *(int *)(param_1 + lVar15 * 5 + 1) < *(int *)(param_1 + lVar16 * 5 + 1);
              }
            }
            else {
              bVar6 = iVar17 < iVar18;
            }
            if (bVar6) {
              iVar14 = iVar7;
            }
            iVar14 = iVar14 + 1;
          }
          puVar1 = param_1 + (longlong)iVar13 * 5;
          puVar2 = param_1 + (longlong)iVar14 * 5;
          if (*(int *)((longlong)puVar1 + 4) == *(int *)((longlong)puVar2 + 4)) {
            if (*(int *)(puVar1 + 1) == *(int *)(puVar2 + 1)) {
              bVar6 = *(float *)(puVar1 + 3) < *(float *)(puVar2 + 3);
            }
            else {
              bVar6 = *(int *)(puVar1 + 1) < *(int *)(puVar2 + 1);
            }
          }
          else {
            bVar6 = *(int *)((longlong)puVar1 + 4) < *(int *)((longlong)puVar2 + 4);
          }
          if (!bVar6) break;
          if (puVar1 != puVar2) {
            uVar8 = puVar2[1];
            uVar9 = *puVar1;
            uVar10 = puVar1[1];
            uVar11 = puVar1[2];
            uVar12 = puVar1[3];
            uVar4 = puVar1[4];
            *puVar1 = *puVar2;
            puVar1[1] = uVar8;
            uVar8 = puVar2[3];
            puVar1[2] = puVar2[2];
            puVar1[3] = uVar8;
            puVar1[4] = puVar2[4];
            *puVar2 = uVar9;
            puVar2[1] = uVar10;
            puVar2[2] = uVar11;
            puVar2[3] = uVar12;
            puVar2[4] = uVar4;
          }
          iVar13 = iVar14;
        } while (iVar14 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar19 = puVar19 + -5;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 14074a3e0 FUN_14074a3e0 body=1018 status=ok
// SIG undefined FUN_14074a3e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14074a3e0(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  float fVar17;
  undefined1 auStack_378 [48];
  longlong local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_378;
    lStack_330 = param_1 + param_2 * 0x28 + -0x28;
    fVar17 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar17 = fVar17 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar17 = _guard_xfg_dispatch_icall_nop(fVar17);
    local_328 = (undefined4)(longlong)(fVar17 + fVar17);
    _guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar16 = &local_338;
    do {
      puVar13 = (undefined8 *)*plVar16;
      puVar10 = (undefined8 *)plVar16[1];
      lVar1 = plVar16[2];
      local_348._0_4_ = (int)lVar1;
      lVar9 = ((longlong)puVar10 - (longlong)puVar13) / 0x28 + 1;
      puVar12 = puVar13;
      if ((int)local_348 != 0) {
LAB_14074a4d0:
        if (8 < lVar9) {
          if (lVar9 < 0) {
            lVar9 = lVar9 + 1;
          }
          puVar13 = puVar12 + (lVar9 >> 1) * 5;
          if (puVar13 != puVar12) {
            uVar4 = puVar12[1];
            uVar5 = *puVar13;
            uVar6 = puVar13[1];
            uVar7 = puVar13[2];
            uVar8 = puVar13[3];
            uVar2 = puVar13[4];
            *puVar13 = *puVar12;
            puVar13[1] = uVar4;
            uVar4 = puVar12[3];
            puVar13[2] = puVar12[2];
            puVar13[3] = uVar4;
            puVar13[4] = puVar12[4];
            *puVar12 = uVar5;
            puVar12[1] = uVar6;
            puVar12[2] = uVar7;
            puVar12[3] = uVar8;
            puVar12[4] = uVar2;
          }
          puVar14 = puVar10 + 5;
          puVar13 = puVar12;
LAB_14074a530:
          puVar11 = puVar13;
          puVar13 = puVar11 + 5;
          if (puVar13 <= puVar10) goto code_r0x00014074a539;
          goto LAB_14074a570;
        }
        for (; puVar13 = puVar12, puVar14 = puVar12, puVar12 < puVar10; puVar10 = puVar10 + -5) {
          while (puVar11 = puVar13, puVar13 = puVar14 + 5, puVar13 <= puVar10) {
            if (*(int *)((longlong)puVar11 + 4) == *(int *)((longlong)puVar14 + 0x2c)) {
              if (*(int *)(puVar11 + 1) == *(int *)(puVar14 + 6)) {
                bVar3 = *(float *)(puVar11 + 3) < *(float *)(puVar14 + 8);
              }
              else {
                bVar3 = *(int *)(puVar11 + 1) < *(int *)(puVar14 + 6);
              }
            }
            else {
              bVar3 = *(int *)((longlong)puVar11 + 4) < *(int *)((longlong)puVar14 + 0x2c);
            }
            puVar14 = puVar13;
            if (!bVar3) {
              puVar13 = puVar11;
            }
          }
          if (puVar11 != puVar10) {
            uVar4 = puVar10[1];
            uVar5 = *puVar11;
            uVar6 = puVar11[1];
            uVar7 = puVar11[2];
            uVar8 = puVar11[3];
            uVar2 = puVar11[4];
            *puVar11 = *puVar10;
            puVar11[1] = uVar4;
            uVar4 = puVar10[3];
            puVar11[2] = puVar10[2];
            puVar11[3] = uVar4;
            puVar11[4] = puVar10[4];
            *puVar10 = uVar5;
            puVar10[1] = uVar6;
            puVar10[2] = uVar7;
            puVar10[3] = uVar8;
            puVar10[4] = uVar2;
          }
        }
        goto LAB_14074a6ef;
      }
LAB_14074a6e0:
      local_348 = lVar1;
      FUN_14074a150(puVar13,lVar9,param_3,param_4);
LAB_14074a6ef:
      plVar16 = plVar16 + -3;
    } while (&local_338 <= plVar16);
  }
  return;
code_r0x00014074a539:
  if (*(int *)((longlong)puVar12 + 4) == *(int *)((longlong)puVar11 + 0x2c)) {
    if (*(int *)(puVar12 + 1) == *(int *)(puVar11 + 6)) {
      bVar3 = *(float *)(puVar12 + 3) < *(float *)(puVar11 + 8);
    }
    else {
      bVar3 = *(int *)(puVar12 + 1) < *(int *)(puVar11 + 6);
    }
  }
  else {
    bVar3 = *(int *)((longlong)puVar12 + 4) < *(int *)((longlong)puVar11 + 0x2c);
  }
  if (!bVar3) goto LAB_14074a530;
LAB_14074a570:
  do {
    puVar15 = puVar14;
    puVar14 = puVar15 + -5;
    if (puVar14 <= puVar12) break;
    if (*(int *)((longlong)puVar15 + -0x24) == *(int *)((longlong)puVar12 + 4)) {
      if (*(int *)(puVar15 + -4) == *(int *)(puVar12 + 1)) {
        bVar3 = *(float *)(puVar15 + -2) < *(float *)(puVar12 + 3);
      }
      else {
        bVar3 = *(int *)(puVar15 + -4) < *(int *)(puVar12 + 1);
      }
    }
    else {
      bVar3 = *(int *)((longlong)puVar15 + -0x24) < *(int *)((longlong)puVar12 + 4);
    }
  } while (!bVar3);
  if (puVar13 <= puVar14) {
    if (puVar13 != puVar14) {
      uVar4 = puVar15[-4];
      uVar5 = *puVar13;
      uVar6 = puVar11[6];
      uVar7 = puVar11[7];
      uVar8 = puVar11[8];
      uVar2 = puVar11[9];
      *puVar13 = *puVar14;
      puVar11[6] = uVar4;
      uVar4 = puVar15[-2];
      puVar11[7] = puVar15[-3];
      puVar11[8] = uVar4;
      puVar11[9] = puVar15[-1];
      *puVar14 = uVar5;
      puVar15[-4] = uVar6;
      puVar15[-3] = uVar7;
      puVar15[-2] = uVar8;
      puVar15[-1] = uVar2;
    }
    goto LAB_14074a530;
  }
  if (puVar12 != puVar14) {
    uVar4 = puVar15[-4];
    uVar5 = *puVar12;
    uVar6 = puVar12[1];
    uVar7 = puVar12[2];
    uVar8 = puVar12[3];
    uVar2 = puVar12[4];
    *puVar12 = *puVar14;
    puVar12[1] = uVar4;
    uVar4 = puVar15[-2];
    puVar12[2] = puVar15[-3];
    puVar12[3] = uVar4;
    puVar12[4] = puVar15[-1];
    *puVar14 = uVar5;
    puVar15[-4] = uVar6;
    puVar15[-3] = uVar7;
    puVar15[-2] = uVar8;
    puVar15[-1] = uVar2;
  }
  local_348._0_4_ = (int)local_348 + -1;
  if (((longlong)puVar14 + (-0x28 - (longlong)puVar12)) / 0x28 <
      ((longlong)puVar10 - (longlong)puVar13) / 0x28) {
    if (puVar13 < puVar10) {
      *plVar16 = (longlong)puVar13;
      plVar16[1] = (longlong)puVar10;
      *(int *)(plVar16 + 2) = (int)local_348;
      plVar16 = plVar16 + 3;
    }
    if (puVar14 <= puVar12 + 5) goto LAB_14074a6ef;
    puVar10 = puVar15 + -10;
    puVar13 = puVar12;
  }
  else {
    if (puVar12 + 5 < puVar14) {
      *plVar16 = (longlong)puVar12;
      plVar16[1] = (longlong)(puVar15 + -10);
      *(int *)(plVar16 + 2) = (int)local_348;
      plVar16 = plVar16 + 3;
    }
    if (puVar10 <= puVar13) goto LAB_14074a6ef;
  }
  lVar9 = ((longlong)puVar10 - (longlong)puVar13) / 0x28 + 1;
  puVar12 = puVar13;
  if ((int)local_348 == 0) goto LAB_14074a6e0;
  goto LAB_14074a4d0;
}



// FUNCTION 14074a7e0 FUN_14074a7e0 body=1131 status=ok
// SIG undefined FUN_14074a7e0(void)

undefined8
FUN_14074a7e0(longlong param_1,longlong param_2,char param_3,undefined8 param_4,undefined4 *param_5,
             float *param_6)

{
  undefined8 *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  float *pfVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  longlong lVar16;
  int *piVar17;
  longlong *plVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  float extraout_XMM0_Da;
  float fVar25;
  float fVar26;
  float fVar27;
  int local_res8 [2];
  longlong local_res10;
  char local_res18;
  undefined8 local_res20;
  int local_d8;
  undefined1 local_d4 [4];
  undefined8 *local_d0;
  ulonglong *local_c8;
  int *local_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  byte local_98;
  undefined7 uStack_97;
  
  iVar19 = *(int *)(param_1 + 0x78);
  puVar1 = (undefined8 *)(param_1 + 0x70);
  piVar17 = (int *)*puVar1;
  puVar9 = *(undefined8 **)(param_1 + 0x88);
  iVar13 = iVar19 + -1;
  lVar22 = (longlong)*piVar17;
  if (0 < iVar13) {
    iVar13 = 1;
  }
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  local_d0 = puVar1;
  if (iVar13 != 0) {
    _guard_xfg_dispatch_icall_nop(piVar17,piVar17 + (iVar19 - iVar13),(longlong)iVar13 << 2);
    piVar17 = (int *)*puVar1;
    iVar19 = *(int *)(param_1 + 0x78);
  }
  iVar19 = iVar19 + -1;
  iVar13 = 0;
  *(int *)(param_1 + 0x78) = iVar19;
  if (1 < iVar19) {
    do {
      iVar20 = iVar13 * 2 + 1;
      iVar7 = iVar13 * 2 + 2;
      lVar23 = *(longlong *)*puVar9;
      iVar21 = iVar20;
      if ((iVar7 < iVar19) &&
         (fVar26 = *(float *)(lVar23 + 0x14 + (longlong)piVar17[iVar7] * 0x28),
         pfVar4 = (float *)(lVar23 + 0x14 + (longlong)piVar17[iVar20] * 0x28), iVar21 = iVar7,
         *pfVar4 <= fVar26 && fVar26 != *pfVar4)) {
        iVar21 = iVar20;
      }
      iVar7 = piVar17[iVar13];
      fVar26 = *(float *)(lVar23 + 0x14 + (longlong)iVar7 * 0x28);
      pfVar4 = (float *)(lVar23 + 0x14 + (longlong)piVar17[iVar21] * 0x28);
      param_2 = local_res10;
      if (fVar26 < *pfVar4 || fVar26 == *pfVar4) break;
      piVar17[iVar13] = piVar17[iVar21];
      piVar17[iVar21] = iVar7;
      iVar13 = iVar21;
    } while (iVar21 * 2 + 1 < iVar19);
  }
  lVar24 = 0;
  plVar2 = (longlong *)(param_1 + 8);
  pbVar5 = (byte *)(**(longlong **)(param_1 + 0x80) + 0x20 + lVar22 * 0x28);
  *pbVar5 = *pbVar5 & 0xfe;
  lVar23 = *plVar2;
  pbVar5 = (byte *)(lVar23 + 0x20 + lVar22 * 0x28);
  *pbVar5 = *pbVar5 | 2;
  if ((local_res18 == '\0') || (*(longlong *)(lVar23 + lVar22 * 0x28) != param_2)) {
    lVar23 = (longlong)*(int *)(*(longlong *)(lVar23 + lVar22 * 0x28) + 0x720);
    if (0 < lVar23) {
      do {
        plVar18 = *(longlong **)
                   (*(longlong *)(*(longlong *)(*plVar2 + lVar22 * 0x28) + 0x718) + 8 + lVar24);
        if (plVar18 != (longlong *)0x0) {
          uVar14 = AUGWeapon_Hook::GetPrivateStaticClass();
          uVar15 = (**(code **)(*plVar18 + 0x628))(plVar18,uVar14);
          if (((((uVar15 != 0) && (uVar15 != *(ulonglong *)(*plVar2 + 8 + lVar22 * 0x28))) &&
               (uVar10 = *(ulonglong *)(*plVar2 + lVar22 * 0x28), uVar15 != uVar10)) &&
              ((lVar16 = FUN_140758880(uVar10,uVar15), lVar16 != 0 &&
               (*(char *)(uVar10 + 0x6f8) != '\0')))) && (*(char *)(uVar15 + 0x6f8) != '\0')) {
            TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
            ::FindId(param_1 + 0x18,&local_d8,uVar15);
            if (local_d8 == -1) {
              lVar16 = 0;
            }
            else {
              lVar16 = *(longlong *)(param_1 + 0x18) + (longlong)local_d8 * 0x18;
            }
            piVar17 = (int *)(lVar16 + 8);
            if (lVar16 == 0) {
              piVar17 = (int *)0x0;
            }
            if (piVar17 == (int *)0x0) {
              local_98 = local_98 & 0xfc;
              iVar13 = *(int *)(param_1 + 0x10);
              lVar16 = (longlong)iVar13;
              uStack_b0 = 0;
              local_a8 = 0x7f7fffff;
              uStack_a4 = 0x7f7fffff;
              uStack_a0 = 0xffffffffffffffff;
              *(int *)(param_1 + 0x10) = iVar13 + 1;
              local_b8 = uVar15;
              if (*(int *)(param_1 + 0x14) < iVar13 + 1) {
                TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar2,iVar13);
              }
              lVar11 = *plVar2;
              puVar3 = (ulonglong *)(lVar11 + lVar16 * 0x28);
              *puVar3 = local_b8;
              puVar3[1] = uStack_b0;
              puVar6 = (undefined4 *)(lVar11 + 0x10 + lVar16 * 0x28);
              *puVar6 = local_a8;
              puVar6[1] = uStack_a4;
              puVar6[2] = (undefined4)uStack_a0;
              puVar6[3] = uStack_a0._4_4_;
              *(ulonglong *)(lVar11 + 0x20 + lVar16 * 0x28) = CONCAT71(uStack_97,local_98);
              local_c8 = &local_b8;
              local_c0 = local_res8;
              local_res8[0] = iVar13;
              TSet<TTuple<FFlareResourceDescription_*,int>,TDefaultMapHashableKeyFuncs<FFlareResourceDescription_*,int,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<FFlareResourceDescription_*_const_&,int_const_&>_>
                        (param_1 + 0x18,local_d4,&local_c8,0);
              plVar18 = (longlong *)(*plVar2 + (longlong)local_res8[0] * 0x28);
              *(int *)(plVar18 + 3) = local_res8[0];
              lVar16 = *plVar2;
            }
            else {
              lVar16 = *plVar2;
              plVar18 = (longlong *)(lVar16 + (longlong)*piVar17 * 0x28);
            }
            lVar11 = *plVar18;
            if (*(char *)(lVar11 + 0x6f8) == '\0') {
              fVar26 = 3.4028235e+38;
            }
            else {
              lVar12 = *(longlong *)(lVar16 + lVar22 * 0x28);
              fVar26 = *(float *)(lVar12 + 0x220) - *(float *)(lVar11 + 0x220);
              fVar27 = *(float *)(lVar12 + 0x224) - *(float *)(lVar11 + 0x224);
              fVar26 = ABS(fVar27 * fVar27 + fVar26 * fVar26);
            }
            fVar26 = fVar26 + *(float *)(lVar16 + 0x10 + lVar22 * 0x28);
            if ((local_res18 == '\0') || (lVar11 == local_res10)) {
              fVar27 = 0.0;
            }
            else {
              FUN_14075eba0(local_res20,lVar11,local_res10);
              fVar27 = extraout_XMM0_Da;
            }
            fVar25 = fVar27 + fVar26;
            if (fVar25 < *(float *)((longlong)plVar18 + 0x14)) {
              *(float *)(plVar18 + 2) = fVar26;
              *(float *)((longlong)plVar18 + 0x14) = fVar25;
              plVar18[1] = *(longlong *)(*plVar2 + lVar22 * 0x28);
              uVar8 = *(undefined4 *)(*plVar2 + 0x18 + lVar22 * 0x28);
              *(byte *)(plVar18 + 4) = *(byte *)(plVar18 + 4) & 0xfd;
              *(undefined4 *)((longlong)plVar18 + 0x1c) = uVar8;
              if ((*(byte *)(plVar18 + 4) & 1) == 0) {
                FGraphAStar<FDakMapGraphData,FDakMapAStarPolicy,FDakAStarSearchNode<FDakMapGraphData>_>
                ::FOpenList::Push(local_d0,plVar18);
              }
              if (fVar27 < *param_6) {
                *param_6 = fVar27;
                *param_5 = (int)plVar18[3];
              }
            }
          }
        }
        lVar24 = lVar24 + 0x20;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
    }
    uVar14 = 1;
  }
  else {
    *param_5 = *(undefined4 *)(lVar23 + 0x18 + lVar22 * 0x28);
    *param_6 = 0.0;
    uVar14 = 0;
  }
  return uVar14;
}



// FUNCTION 14074ac50 FUN_14074ac50 body=129 status=ok
// SIG undefined FUN_14074ac50(void)

void FUN_14074ac50(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  iVar3 = 0;
  if (0 < iVar1) {
    lVar5 = 0;
    do {
      iVar2 = rand();
      if (iVar3 != iVar2 % iVar1) {
        FGenericPlatformMemory::MemswapGreaterThan8
                  (lVar5 + *param_1,*param_1 + (longlong)(iVar2 % iVar1) * 0xc,0xc);
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0xc;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 14074ace0 FUN_14074ace0 body=970 status=ok
// SIG undefined FUN_14074ace0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14074ace0(longlong param_1,byte param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  uint local_118 [2];
  undefined1 local_110 [192];
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  lVar5 = FUN_142bbd600();
  if (((lVar5 == 0) || (*(longlong *)(lVar5 + 8) == 0)) ||
     (lVar7 = *(longlong *)(*(longlong *)(lVar5 + 8) + 0x10), lVar6 = FUN_142c361d0(),
     lVar7 != lVar6)) {
    return 0;
  }
  lVar7 = *(longlong *)(lVar5 + 8);
  lVar13 = 0;
  bVar8 = *(byte *)(lVar7 + 0x2b) >> 1 & 1;
  lVar6 = lVar13;
  if ((*(int *)(param_1 + 400) != 0) && ((int)(uint)param_2 < *(int *)(param_1 + 0x1a0))) {
    lVar6 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x198) + (ulonglong)param_2 * 2) +
            *(longlong *)(param_1 + 0x188);
  }
  lVar2 = (ulonglong)bVar8 * 4;
  lVar6 = lVar6 + lVar2;
  if (lVar6 == 0) {
    return 0;
  }
  if (bVar8 != 0) {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1a8) + (ulonglong)param_2 * 8);
  }
  cVar3 = UBlackboardKeyType_Rotator::SetValue(lVar7,lVar6,param_3);
  if (((cVar3 == '\0') ||
      (FUN_142bc3660(param_1,param_2), (*(byte *)(*(longlong *)(param_1 + 0x180) + 0x48) & 1) == 0))
     || (cVar3 = FUN_142bc1e70(param_1,param_2), cVar3 == '\0')) {
    return 1;
  }
  lVar7 = *(longlong *)(param_1 + 0x120);
  if (((lVar7 != 0) || (lVar7 = FUN_1423407b0(param_1), lVar7 != 0)) &&
     (lVar7 = *(longlong *)(lVar7 + 0x150), lVar7 != 0)) {
    lVar6 = FUN_142c32730();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_14074ae4d;
  }
  lVar7 = lVar13;
LAB_14074ae4d:
  UAISystem::CreateBlackboardDataToComponentsIterator
            (lVar7,local_118,*(undefined8 *)(param_1 + 0x180));
  do {
    uVar12 = (ulonglong)local_118[0];
    do {
      iVar11 = (int)uVar12;
      if (iVar11 < local_48) {
        puVar10 = local_110;
        if (local_50 != (undefined1 *)0x0) {
          puVar10 = local_50;
        }
        if (*(int *)(puVar10 + (longlong)iVar11 * 0x18 + 0x10) == -1) goto LAB_14074ae9b;
        bVar4 = true;
      }
      else {
LAB_14074ae9b:
        bVar4 = false;
      }
      if (!bVar4) {
        if (local_50 == (undefined1 *)0x0) {
          return 1;
        }
        FMemory::Free(local_50);
        return 1;
      }
      puVar10 = local_110;
      if (local_50 != (undefined1 *)0x0) {
        puVar10 = local_50;
      }
      lVar7 = FWeakObjectPtr::Get(**(longlong **)(puVar10 + (longlong)iVar11 * 0x18) +
                                  ((longlong)*(int *)(puVar10 + (longlong)iVar11 * 0x18 + 0x10) * 3
                                  + 1) * 8);
      if ((lVar7 != 0) && (cVar3 = FUN_142bcaf00(param_1,lVar7), cVar3 != '\0')) {
        lVar6 = FUN_142bbbf70(lVar7);
        if (lVar6 == 0) {
          bVar8 = 0xff;
        }
        else {
          bVar8 = UBlackboardData::GetKeyID(lVar6,lVar5);
        }
        if (bVar8 != 0xff) {
          lVar6 = *(longlong *)(lVar5 + 8);
          if ((*(byte *)(lVar6 + 0x2b) & 2) != 0) {
            lVar6 = *(longlong *)(*(longlong *)(lVar7 + 0x1a8) + (ulonglong)(uint)bVar8 * 8);
          }
          lVar9 = lVar13;
          if ((*(int *)(lVar7 + 400) != 0) && ((int)(uint)bVar8 < *(int *)(lVar7 + 0x1a0))) {
            lVar9 = (ulonglong)*(ushort *)(*(longlong *)(lVar7 + 0x198) + (ulonglong)bVar8 * 2) +
                    *(longlong *)(lVar7 + 0x188);
          }
          UBlackboardKeyType_Rotator::SetValue(lVar6,lVar9 + lVar2,param_3);
          FUN_142bc3660(lVar7,bVar8);
        }
      }
      puVar10 = local_110;
      if (local_50 != (undefined1 *)0x0) {
        puVar10 = local_50;
      }
      lVar7 = (longlong)(int)local_118[0];
      iVar11 = *(int *)(puVar10 + lVar7 * 0x18 + 0x14);
      *(int *)(puVar10 + lVar7 * 0x18 + 0x10) = iVar11;
      puVar1 = (undefined8 *)(puVar10 + lVar7 * 0x18);
      while (iVar11 != -1) {
        *(undefined4 *)((longlong)puVar1 + 0x14) =
             *(undefined4 *)(*(longlong *)*puVar1 + 0x10 + (longlong)iVar11 * 0x18);
        lVar7 = *(longlong *)*puVar1;
        local_120 = *(undefined4 *)(lVar7 + (longlong)iVar11 * 0x18);
        local_11c = *(undefined4 *)(lVar7 + 4 + (longlong)iVar11 * 0x18);
        local_128 = *(undefined4 *)(puVar1 + 1);
        local_124 = *(undefined4 *)((longlong)puVar1 + 0xc);
        cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_120,&local_128);
        if (cVar3 != '\0') break;
        iVar11 = *(int *)((longlong)puVar1 + 0x14);
        *(int *)(puVar1 + 2) = iVar11;
      }
      uVar12 = (ulonglong)(int)local_118[0];
      puVar10 = local_110;
      if (local_50 != (undefined1 *)0x0) {
        puVar10 = local_50;
      }
    } while ((*(int *)(puVar10 + uVar12 * 0x18 + 0x10) != -1) ||
            (local_48 + -1 <= (int)local_118[0]));
    local_118[0] = local_118[0] + 1;
    UAISystem::FBlackboardDataToComponentsIterator::TryMoveIteratorToParentBlackboard(local_118);
  } while( true );
}



// FUNCTION 14074b0b0 FUN_14074b0b0 body=970 status=ok
// SIG undefined FUN_14074b0b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14074b0b0(longlong param_1,byte param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  uint local_118 [2];
  undefined1 local_110 [192];
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  lVar5 = FUN_142bbd600();
  if (((lVar5 == 0) || (*(longlong *)(lVar5 + 8) == 0)) ||
     (lVar7 = *(longlong *)(*(longlong *)(lVar5 + 8) + 0x10),
     lVar6 = UBlackboardKeyType_Object::GetPrivateStaticClass(), lVar7 != lVar6)) {
    return 0;
  }
  lVar7 = *(longlong *)(lVar5 + 8);
  lVar13 = 0;
  bVar8 = *(byte *)(lVar7 + 0x2b) >> 1 & 1;
  lVar6 = lVar13;
  if ((*(int *)(param_1 + 400) != 0) && ((int)(uint)param_2 < *(int *)(param_1 + 0x1a0))) {
    lVar6 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x198) + (ulonglong)param_2 * 2) +
            *(longlong *)(param_1 + 0x188);
  }
  lVar2 = (ulonglong)bVar8 * 4;
  lVar6 = lVar6 + lVar2;
  if (lVar6 == 0) {
    return 0;
  }
  if (bVar8 != 0) {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1a8) + (ulonglong)param_2 * 8);
  }
  cVar3 = UBlackboardKeyType_Rotator::SetValue(lVar7,lVar6,param_3);
  if (((cVar3 == '\0') ||
      (FUN_142bc3660(param_1,param_2), (*(byte *)(*(longlong *)(param_1 + 0x180) + 0x48) & 1) == 0))
     || (cVar3 = FUN_142bc1e70(param_1,param_2), cVar3 == '\0')) {
    return 1;
  }
  lVar7 = *(longlong *)(param_1 + 0x120);
  if (((lVar7 != 0) || (lVar7 = FUN_1423407b0(param_1), lVar7 != 0)) &&
     (lVar7 = *(longlong *)(lVar7 + 0x150), lVar7 != 0)) {
    lVar6 = FUN_142c32730();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_14074b21d;
  }
  lVar7 = lVar13;
LAB_14074b21d:
  UAISystem::CreateBlackboardDataToComponentsIterator
            (lVar7,local_118,*(undefined8 *)(param_1 + 0x180));
  do {
    uVar12 = (ulonglong)local_118[0];
    do {
      iVar11 = (int)uVar12;
      if (iVar11 < local_48) {
        puVar10 = local_110;
        if (local_50 != (undefined1 *)0x0) {
          puVar10 = local_50;
        }
        if (*(int *)(puVar10 + (longlong)iVar11 * 0x18 + 0x10) == -1) goto LAB_14074b26b;
        bVar4 = true;
      }
      else {
LAB_14074b26b:
        bVar4 = false;
      }
      if (!bVar4) {
        if (local_50 == (undefined1 *)0x0) {
          return 1;
        }
        FMemory::Free(local_50);
        return 1;
      }
      puVar10 = local_110;
      if (local_50 != (undefined1 *)0x0) {
        puVar10 = local_50;
      }
      lVar7 = FWeakObjectPtr::Get(**(longlong **)(puVar10 + (longlong)iVar11 * 0x18) +
                                  ((longlong)*(int *)(puVar10 + (longlong)iVar11 * 0x18 + 0x10) * 3
                                  + 1) * 8);
      if ((lVar7 != 0) && (cVar3 = FUN_142bcaf00(param_1,lVar7), cVar3 != '\0')) {
        lVar6 = FUN_142bbbf70(lVar7);
        if (lVar6 == 0) {
          bVar8 = 0xff;
        }
        else {
          bVar8 = UBlackboardData::GetKeyID(lVar6,lVar5);
        }
        if (bVar8 != 0xff) {
          lVar6 = *(longlong *)(lVar5 + 8);
          if ((*(byte *)(lVar6 + 0x2b) & 2) != 0) {
            lVar6 = *(longlong *)(*(longlong *)(lVar7 + 0x1a8) + (ulonglong)(uint)bVar8 * 8);
          }
          lVar9 = lVar13;
          if ((*(int *)(lVar7 + 400) != 0) && ((int)(uint)bVar8 < *(int *)(lVar7 + 0x1a0))) {
            lVar9 = (ulonglong)*(ushort *)(*(longlong *)(lVar7 + 0x198) + (ulonglong)bVar8 * 2) +
                    *(longlong *)(lVar7 + 0x188);
          }
          UBlackboardKeyType_Rotator::SetValue(lVar6,lVar9 + lVar2,param_3);
          FUN_142bc3660(lVar7,bVar8);
        }
      }
      puVar10 = local_110;
      if (local_50 != (undefined1 *)0x0) {
        puVar10 = local_50;
      }
      lVar7 = (longlong)(int)local_118[0];
      iVar11 = *(int *)(puVar10 + lVar7 * 0x18 + 0x14);
      *(int *)(puVar10 + lVar7 * 0x18 + 0x10) = iVar11;
      puVar1 = (undefined8 *)(puVar10 + lVar7 * 0x18);
      while (iVar11 != -1) {
        *(undefined4 *)((longlong)puVar1 + 0x14) =
             *(undefined4 *)(*(longlong *)*puVar1 + 0x10 + (longlong)iVar11 * 0x18);
        lVar7 = *(longlong *)*puVar1;
        local_120 = *(undefined4 *)(lVar7 + (longlong)iVar11 * 0x18);
        local_11c = *(undefined4 *)(lVar7 + 4 + (longlong)iVar11 * 0x18);
        local_128 = *(undefined4 *)(puVar1 + 1);
        local_124 = *(undefined4 *)((longlong)puVar1 + 0xc);
        cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_120,&local_128);
        if (cVar3 != '\0') break;
        iVar11 = *(int *)((longlong)puVar1 + 0x14);
        *(int *)(puVar1 + 2) = iVar11;
      }
      uVar12 = (ulonglong)(int)local_118[0];
      puVar10 = local_110;
      if (local_50 != (undefined1 *)0x0) {
        puVar10 = local_50;
      }
    } while ((*(int *)(puVar10 + uVar12 * 0x18 + 0x10) != -1) ||
            (local_48 + -1 <= (int)local_118[0]));
    local_118[0] = local_118[0] + 1;
    UAISystem::FBlackboardDataToComponentsIterator::TryMoveIteratorToParentBlackboard(local_118);
  } while( true );
}



// FUNCTION 14074b480 FUN_14074b480 body=338 status=ok
// SIG undefined FUN_14074b480(void)

void FUN_14074b480(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  
  lVar2 = (longlong)param_3 - (longlong)param_1 >> 3;
  if (lVar2 < 0x29) {
    uVar4 = *param_2;
    if (uVar4 < *param_1) {
      *param_2 = *param_1;
      *param_1 = uVar4;
      uVar4 = *param_2;
    }
    uVar1 = *param_3;
    if (uVar1 < uVar4) {
      *param_3 = uVar4;
      *param_2 = uVar1;
      if (uVar1 < *param_1) {
        *param_2 = *param_1;
        *param_1 = uVar1;
        return;
      }
    }
  }
  else {
    lVar2 = lVar2 + 1 >> 3;
    uVar4 = param_1[lVar2];
    if (uVar4 < *param_1) {
      param_1[lVar2] = *param_1;
      *param_1 = uVar4;
      uVar4 = param_1[lVar2];
    }
    uVar1 = param_1[lVar2 * 2];
    if (uVar1 < uVar4) {
      param_1[lVar2 * 2] = uVar4;
      param_1[lVar2] = uVar1;
      if (uVar1 < *param_1) {
        param_1[lVar2] = *param_1;
        *param_1 = uVar1;
      }
    }
    uVar4 = *param_2;
    puVar3 = param_2 + -lVar2;
    if (uVar4 < *puVar3) {
      *param_2 = *puVar3;
      *puVar3 = uVar4;
      uVar4 = *param_2;
    }
    uVar1 = param_2[lVar2];
    if (uVar1 < uVar4) {
      param_2[lVar2] = uVar4;
      *param_2 = uVar1;
      if (uVar1 < *puVar3) {
        *param_2 = *puVar3;
        *puVar3 = uVar1;
      }
    }
    puVar5 = param_3 + lVar2 * -2;
    puVar3 = param_3 + -lVar2;
    uVar4 = *puVar3;
    if (uVar4 < *puVar5) {
      *puVar3 = *puVar5;
      *puVar5 = uVar4;
      uVar4 = *puVar3;
    }
    uVar1 = *param_3;
    if (uVar1 < uVar4) {
      *param_3 = uVar4;
      *puVar3 = uVar1;
      if (uVar1 < *puVar5) {
        *puVar3 = *puVar5;
        *puVar5 = uVar1;
      }
    }
    uVar4 = *param_2;
    if (uVar4 < param_1[lVar2]) {
      *param_2 = param_1[lVar2];
      param_1[lVar2] = uVar4;
      uVar4 = *param_2;
    }
    uVar1 = *puVar3;
    if (uVar1 < uVar4) {
      *puVar3 = uVar4;
      *param_2 = uVar1;
      if (uVar1 < param_1[lVar2]) {
        *param_2 = param_1[lVar2];
        param_1[lVar2] = uVar1;
      }
    }
  }
  return;
}



// FUNCTION 14074b5e0 FUN_14074b5e0 body=1084 status=ok
// SIG undefined FUN_14074b5e0(void)

void FUN_14074b5e0(ulonglong *param_1,ulonglong *param_2,longlong param_3,undefined1 param_4)

{
  longlong lVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  lVar1 = (longlong)param_2 - (longlong)param_1;
  do {
    lVar3 = lVar1 >> 3;
    if (lVar3 < 0x21) {
LAB_14074b7e2:
      if ((1 < lVar3) && (param_1 != param_2)) {
        for (puVar5 = param_1 + 1; puVar5 != param_2; puVar5 = puVar5 + 1) {
          uVar10 = *puVar5;
          if (uVar10 < *param_1) {
            _guard_xfg_dispatch_icall_nop(param_1 + 1,param_1,(longlong)puVar5 - (longlong)param_1);
            *param_1 = uVar10;
          }
          else {
            uVar9 = puVar5[-1];
            puVar7 = puVar5;
            while (uVar10 < uVar9) {
              *puVar7 = uVar9;
              uVar9 = puVar7[-2];
              puVar7 = puVar7 + -1;
            }
            *puVar7 = uVar10;
          }
        }
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < lVar3) {
        uVar10 = (longlong)param_2 - (longlong)param_1 >> 3;
        lVar1 = (longlong)param_2 - (longlong)param_1 >> 4;
        if (0 < lVar1) {
          lVar3 = (longlong)(uVar10 - 1) >> 1;
          do {
            uVar9 = param_1[lVar1 + -1];
            lVar1 = lVar1 + -1;
            lVar11 = lVar1;
            while (lVar11 < lVar3) {
              lVar8 = (2 - (ulonglong)(param_1[lVar11 * 2 + 2] < param_1[lVar11 * 2 + 1])) +
                      lVar11 * 2;
              param_1[lVar11] = param_1[lVar8];
              lVar11 = lVar8;
            }
            if ((lVar11 == lVar3) && ((uVar10 & 1) == 0)) {
              param_1[lVar11] = param_1[uVar10 - 1];
              lVar11 = uVar10 - 1;
            }
            while (lVar1 < lVar11) {
              lVar8 = lVar11 + -1 >> 1;
              if (uVar9 <= param_1[lVar8]) break;
              param_1[lVar11] = param_1[lVar8];
              lVar11 = lVar8;
            }
            param_1[lVar11] = uVar9;
          } while (0 < lVar1);
        }
        if ((longlong)uVar10 < 2) {
          return;
        }
        param_2 = param_2 + -1;
        do {
          if (1 < (longlong)uVar10) {
            uVar10 = *param_2;
            uVar9 = (longlong)param_2 - (longlong)param_1 >> 3;
            lVar1 = 0;
            *param_2 = *param_1;
            lVar11 = (longlong)(uVar9 - 1) >> 1;
            lVar3 = lVar1;
            if (0 < lVar11) {
              do {
                lVar1 = (2 - (ulonglong)(param_1[lVar3 * 2 + 2] < param_1[lVar3 * 2 + 1])) +
                        lVar3 * 2;
                param_1[lVar3] = param_1[lVar1];
                lVar3 = lVar1;
              } while (lVar1 < lVar11);
            }
            if ((lVar1 == lVar11) && ((uVar9 & 1) == 0)) {
              param_1[lVar1] = param_1[uVar9 - 1];
              lVar1 = uVar9 - 1;
            }
            while (0 < lVar1) {
              lVar3 = lVar1 + -1 >> 1;
              if (uVar10 <= param_1[lVar3]) break;
              param_1[lVar1] = param_1[lVar3];
              lVar1 = lVar3;
            }
            param_1[lVar1] = uVar10;
          }
          param_2 = param_2 + -1;
          uVar10 = (8 - (longlong)param_1) + (longlong)param_2 >> 3;
          if ((longlong)uVar10 < 2) {
            return;
          }
        } while( true );
      }
      goto LAB_14074b7e2;
    }
    puVar7 = param_1 + (lVar1 >> 4);
    FUN_14074b480(param_1,puVar7,param_2 + -1,param_4);
    puVar5 = puVar7 + 1;
    if (param_1 < puVar7) {
      uVar10 = *puVar7;
      do {
        uVar9 = puVar7[-1];
        puVar6 = puVar7 + -1;
        if ((uVar9 < uVar10) || (uVar9 != uVar10)) break;
        uVar10 = uVar9;
        puVar7 = puVar6;
      } while (param_1 < puVar6);
    }
    puVar6 = puVar5;
    puVar4 = puVar7;
    if (puVar5 < param_2) {
      do {
        puVar6 = puVar5;
        if ((*puVar5 < *puVar7) || (*puVar5 != *puVar7)) break;
        puVar5 = puVar5 + 1;
        puVar6 = puVar5;
      } while (puVar5 < param_2);
    }
joined_r0x00014074b68b:
    puVar2 = puVar7;
    if (puVar5 < param_2) {
      uVar10 = *puVar5;
      if (uVar10 <= *puVar4) {
        if (*puVar4 != uVar10) goto joined_r0x00014074b6b8;
        if (puVar6 != puVar5) {
          uVar9 = *puVar6;
          *puVar6 = uVar10;
          *puVar5 = uVar9;
        }
        puVar6 = puVar6 + 1;
      }
      puVar5 = puVar5 + 1;
      goto joined_r0x00014074b68b;
    }
joined_r0x00014074b6b8:
    for (; param_1 < puVar7; puVar7 = puVar7 + -1) {
      puVar2 = puVar2 + -1;
      uVar10 = *puVar2;
      if (*puVar4 <= uVar10) {
        if (uVar10 != *puVar4) break;
        puVar4 = puVar4 + -1;
        if (puVar4 != puVar2) {
          uVar9 = *puVar4;
          *puVar4 = uVar10;
          *puVar2 = uVar9;
        }
      }
    }
    if (puVar7 != param_1) {
      puVar7 = puVar7 + -1;
      if (puVar5 == param_2) {
        puVar4 = puVar4 + -1;
        if (puVar7 == puVar4) {
          uVar10 = *puVar4;
          *puVar4 = puVar6[-1];
          puVar6[-1] = uVar10;
          puVar6 = puVar6 + -1;
        }
        else {
          puVar6 = puVar6 + -1;
          uVar10 = *puVar7;
          *puVar7 = *puVar4;
          *puVar4 = uVar10;
          *puVar4 = *puVar6;
          *puVar6 = uVar10;
        }
      }
      else {
        uVar10 = *puVar5;
        *puVar5 = *puVar7;
        puVar5 = puVar5 + 1;
        *puVar7 = uVar10;
      }
      goto joined_r0x00014074b68b;
    }
    if (puVar5 != param_2) {
      if (puVar6 != puVar5) {
        uVar10 = *puVar4;
        *puVar4 = *puVar6;
        *puVar6 = uVar10;
      }
      uVar10 = *puVar4;
      *puVar4 = *puVar5;
      *puVar5 = uVar10;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
      puVar4 = puVar4 + 1;
      goto joined_r0x00014074b68b;
    }
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)((longlong)puVar4 - (longlong)param_1 & 0xfffffffffffffff8U) <
        (longlong)((longlong)param_2 - (longlong)puVar6 & 0xfffffffffffffff8U)) {
      FUN_14074b5e0(param_1,puVar4,param_3,param_4);
      puVar4 = param_2;
      param_1 = puVar6;
    }
    else {
      FUN_14074b5e0(puVar6,param_2,param_3,param_4);
    }
    lVar1 = (longlong)puVar4 - (longlong)param_1;
    param_2 = puVar4;
  } while( true );
}



// FUNCTION 14074ba20 FUN_14074ba20 body=291 status=ok
// SIG undefined FUN_14074ba20(void)

void FUN_14074ba20(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  int local_18;
  int local_14;
  longlong local_10;
  
  FWeakObjectPtr::operator=(&local_18,0);
  local_10 = 0;
  FWeakObjectPtr::operator=(&local_18,param_2);
  local_10 = param_4;
  if ((param_4 != 0) && (lVar3 = FWeakObjectPtr::Get(&local_18), lVar3 != 0)) {
    UObject::FindFunction(lVar3,local_10);
  }
  piVar4 = (int *)*param_1;
  lVar3 = param_1[1];
  piVar5 = piVar4;
  do {
    if (piVar5 == piVar4 + (longlong)(int)lVar3 * 4) {
LAB_14074baed:
      iVar1 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
      }
      piVar4 = (int *)((longlong)iVar1 * 0x10 + *param_1);
      *piVar4 = local_18;
      piVar4[1] = local_14;
      *(longlong *)(piVar4 + 2) = local_10;
LAB_14074bb26:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(param_1);
      return;
    }
    if ((((*piVar5 == local_18) && (piVar5[1] == local_14)) ||
        ((cVar2 = FWeakObjectPtr::IsValid(piVar5), cVar2 == '\0' &&
         (cVar2 = FWeakObjectPtr::IsValid(&local_18), cVar2 == '\0')))) &&
       (*(longlong *)(piVar5 + 2) == local_10)) {
      if ((int)((longlong)piVar5 - (longlong)piVar4 >> 4) != -1) goto LAB_14074bb26;
      goto LAB_14074baed;
    }
    piVar5 = piVar5 + 4;
  } while( true );
}



// FUNCTION 14074bb50 FUN_14074bb50 body=239 status=ok
// SIG undefined FUN_14074bb50(void)

undefined8 * FUN_14074bb50(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  plVar1 = param_1 + 0x90;
  *param_1 = &PTR_FUN_144084280;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  *plVar1 = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AINodeComponent",1);
  uVar4 = *puVar2;
  uVar3 = AUGWeapon_Hook::GetPrivateStaticClass();
  uVar4 = FUN_141752410(param_1,uVar4,uVar3,uVar3,1,0,0);
  param_1[0x8b] = uVar4;
  param_1[0x2d] = uVar4;
  if ((*(byte *)(param_1 + 1) & 0x30) == 0) {
    param_1[0x92] = param_1;
    param_1[0x91] = &DAT_1468590d0;
    *plVar1 = (longlong)DAT_1468590d0;
    DAT_1468590d0 = plVar1;
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  return param_1;
}



// FUNCTION 14074bc40 FUN_14074bc40 body=593 status=ok
// SIG undefined FUN_14074bc40(void)

undefined8 * FUN_14074bc40(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_141784790(param_2,L"PathFollowingComponent");
  puVar1 = (undefined8 *)FName::FName(local_res8,L"PathFollowingComponent",1);
  FObjectInitializer::FOverrides::Add(param_2 + 0x20,*puVar1,0,param_2);
  FUN_142bb0cb0(param_1,param_2);
  *(undefined1 *)(param_1 + 0xc0) = 0;
  *param_1 = &PTR_FUN_14407f900;
  param_1[0x8b] = &PTR_LAB_144080210;
  param_1[0xa1] = &PTR_LAB_144080268;
  param_1[0xa2] = &PTR_LAB_144080280;
  param_1[0xa3] = &PTR_LAB_1440802c8;
  param_1[0xa4] = &PTR_LAB_1440802f0;
  param_1[0xb3] = &PTR_LAB_144080308;
  param_1[0xb4] = &PTR_LAB_144080340;
  param_1[0xb5] = &PTR_LAB_144080358;
  param_1[0xb6] = &PTR_LAB_144080370;
  param_1[0xb7] = &PTR_LAB_1440803e0;
  param_1[0xb8] = &PTR_LAB_1440803f8;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0xbf800000;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  FWeakObjectPtr::operator=(param_1 + 0xd3,0);
  param_1[0xd4] = 0;
  FWeakObjectPtr::operator=(param_1 + 0xd5,0);
  param_1[0xd6] = 0;
  *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 1;
  uVar3 = DAT_146859050;
  uVar2 = AGBlizzard::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0xc1] = uVar3;
  uVar3 = DAT_146859058;
  uVar2 = AAICharacter::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0xc5] = uVar3;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AIUseComponent",1);
  uVar3 = *puVar1;
  uVar2 = USoUICheckbox::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0xc6] = uVar3;
  param_1[0xaa] = param_1[0xc1];
  return param_1;
}



// FUNCTION 14074bea0 FUN_14074bea0 body=874 status=ok
// SIG undefined FUN_14074bea0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14074bea0(undefined8 *param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  float fVar8;
  uint uVar9;
  uint uVar14;
  uint uVar15;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  uint uVar16;
  uint uVar20;
  uint uVar21;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar22;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined2 *local_48;
  undefined8 local_40;
  undefined2 *local_38;
  undefined8 local_30;
  
  local_res8 = DAT_146aefaf8;
  lVar4 = FName::GetComparisonNameEntry(&local_res8);
  if (lVar4 == 0) {
    local_48 = (undefined2 *)0x0;
    local_40 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy(local_48,L"*INVALID*",0x14);
  }
  else {
    FNameEntry::GetPlainNameString(lVar4,&local_48);
  }
  puVar7 = &DAT_143f3eda8;
  if ((int)local_40 != 0) {
    puVar7 = local_48;
  }
  FUN_141784790(param_2,puVar7);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  uVar5 = FUN_142e39920();
  FObjectInitializer::FOverrides::Add(param_2 + 0x20,local_res8,uVar5,param_2);
  local_res10 = DAT_146aefaf0;
  lVar4 = FName::GetComparisonNameEntry(&local_res10);
  if (lVar4 == 0) {
    local_38 = (undefined2 *)0x0;
    local_30 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"*INVALID*",0x14);
  }
  else {
    FNameEntry::GetPlainNameString(lVar4,&local_38);
  }
  puVar7 = &DAT_143f3eda8;
  if ((int)local_30 != 0) {
    puVar7 = local_38;
  }
  FUN_141784790(param_2,puVar7);
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  uVar5 = FUN_142e5c1e0();
  FObjectInitializer::FOverrides::Add(param_2 + 0x20,local_res10,uVar5,param_2);
  FUN_142bd1830(param_1,param_2);
  *param_1 = &PTR__scalar_deleting_destructor__144082960;
  param_1[0x8b] = &PTR_LAB_1440832b8;
  param_1[0x116] = &PTR_LAB_144083310;
  lVar4 = param_1[0x99];
  param_1[0x134] = lVar4;
  if (lVar4 != 0) {
    *(undefined1 *)(lVar4 + 0x4b0) = 2;
  }
  uVar5 = DAT_146b31348;
  uVar6 = FUN_142e79d90();
  uVar5 = FUN_141752410(param_1,uVar5,uVar6,uVar6,0,0,0);
  param_1[0x135] = uVar5;
  uVar5 = DAT_146b31370;
  uVar6 = UScrollBox::GetPrivateStaticClass();
  uVar5 = FUN_141752410(param_1,uVar5,uVar6,uVar6,0,0,0);
  param_1[0x136] = uVar5;
  uVar5 = DAT_146b31378;
  uVar6 = FUN_142e0a580();
  uVar5 = FUN_141752410(param_1,uVar5,uVar6,uVar6,0,0,0);
  param_1[0x137] = uVar5;
  uVar5 = DAT_146b31380;
  uVar6 = UThrobber::GetPrivateStaticClass();
  uVar5 = FUN_141752410(param_1,uVar5,uVar6,uVar6,0,0,0);
  param_1[0x138] = uVar5;
  uVar5 = ARemnantWeaponMod::GetPrivateStaticClass();
  uVar3 = uRam0000000146858f7c;
  uVar15 = uRam0000000146858f78;
  uVar14 = uRam0000000146858f74;
  uVar9 = _DAT_146858f70;
  param_1[0x8e] = uVar5;
  lVar4 = param_1[0x9a];
  *(undefined1 *)((longlong)param_1 + 0x469) = 3;
  if (lVar4 == 0) {
    fVar8 = *(float *)(param_1 + 0x12a);
  }
  else {
    uVar16 = *(uint *)(lVar4 + 0x230) & uVar9;
    uVar20 = *(uint *)(lVar4 + 0x234) & uVar14;
    auVar10._4_4_ = uVar20;
    auVar10._0_4_ = uVar16;
    uVar21 = *(uint *)(lVar4 + 0x238) & uVar15;
    auVar17._12_4_ = *(uint *)(lVar4 + 0x23c) & uVar3;
    auVar10._8_4_ = uVar21;
    auVar10._12_4_ = auVar17._12_4_;
    auVar11._4_4_ = uVar21;
    auVar11._0_4_ = uVar20;
    auVar11._8_4_ = uVar16;
    auVar11._12_4_ = auVar17._12_4_;
    auVar11 = minps(auVar10,auVar11);
    auVar17._4_4_ = uVar16;
    auVar17._0_4_ = uVar21;
    auVar17._8_4_ = uVar20;
    auVar11 = minps(auVar11,auVar17);
    *(float *)((longlong)param_1 + 0x94c) = auVar11._0_4_ * *(float *)(lVar4 + 0x714);
    uVar16 = *(uint *)(lVar4 + 0x230) & uVar9;
    uVar20 = *(uint *)(lVar4 + 0x234) & uVar14;
    auVar12._4_4_ = uVar20;
    auVar12._0_4_ = uVar16;
    uVar21 = *(uint *)(lVar4 + 0x238) & uVar15;
    auVar18._12_4_ = *(uint *)(lVar4 + 0x23c) & uVar3;
    auVar12._8_4_ = uVar21;
    auVar12._12_4_ = auVar18._12_4_;
    auVar1._4_4_ = uVar21;
    auVar1._0_4_ = uVar20;
    auVar1._8_4_ = uVar16;
    auVar1._12_4_ = auVar18._12_4_;
    auVar11 = minps(auVar12,auVar1);
    auVar18._4_4_ = uVar16;
    auVar18._0_4_ = uVar21;
    auVar18._8_4_ = uVar20;
    auVar11 = minps(auVar11,auVar18);
    fVar8 = auVar11._0_4_ * *(float *)(lVar4 + 0x710);
    *(float *)(param_1 + 0x12a) = fVar8;
  }
  fVar22 = *(float *)((longlong)param_1 + 0x464) * 0.5;
  *(uint *)(param_1 + 0x129) = *(uint *)(param_1 + 0x129) | 4;
  *(float *)(param_1 + 0x139) = fVar22;
  *(float *)((longlong)param_1 + 0x9cc) = fVar22;
  *(float *)(param_1 + 0x12a) = fVar8 + fVar8;
  if (lVar4 != 0) {
    uVar9 = *(uint *)(lVar4 + 0x230) & uVar9;
    uVar14 = *(uint *)(lVar4 + 0x234) & uVar14;
    auVar19._4_4_ = uVar14;
    auVar19._0_4_ = uVar9;
    uVar15 = *(uint *)(lVar4 + 0x238) & uVar15;
    auVar13._12_4_ = *(uint *)(lVar4 + 0x23c) & uVar3;
    auVar19._8_4_ = uVar15;
    auVar19._12_4_ = auVar13._12_4_;
    auVar2._4_4_ = uVar15;
    auVar2._0_4_ = uVar14;
    auVar2._8_4_ = uVar9;
    auVar2._12_4_ = auVar13._12_4_;
    auVar11 = minps(auVar19,auVar2);
    auVar13._4_4_ = uVar9;
    auVar13._0_4_ = uVar15;
    auVar13._8_4_ = uVar14;
    auVar11 = minps(auVar11,auVar13);
    *(float *)((longlong)param_1 + 0x9cc) = auVar11._0_4_ * *(float *)(lVar4 + 0x710) + fVar22;
  }
  *(uint *)((longlong)param_1 + 0x93c) = *(uint *)((longlong)param_1 + 0x93c) & 0xfffffffb;
  return param_1;
}



// FUNCTION 14074c210 FUN_14074c210 body=276 status=ok
// SIG undefined FUN_14074c210(void)

undefined8 * FUN_14074c210(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_143fde4c8;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SceneComp",1);
  uVar3 = *puVar1;
  uVar2 = FUN_1429ff160();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x2d] = uVar3;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SmartObjectComponent",1);
  uVar3 = *puVar1;
  uVar2 = ALoreItem::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8b] = uVar3;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxActionComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142e27720();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8c] = uVar3;
  *param_1 = &PTR_FUN_143fde4c8;
  return param_1;
}



// FUNCTION 14074c330 FUN_14074c330 body=130 status=ok
// SIG undefined FUN_14074c330(void)

undefined8 * FUN_14074c330(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  param_1[0x8b] = 0;
  *param_1 = &PTR_FUN_144088fb8;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"LookAtPointComponent",1);
  uVar3 = *puVar1;
  uVar2 = ACameraActor::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8b] = uVar3;
  param_1[0x2d] = uVar3;
  return param_1;
}



// FUNCTION 14074c3c0 FUN_14074c3c0 body=134 status=ok
// SIG undefined FUN_14074c3c0(void)

undefined8 * FUN_14074c3c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  param_1[0x8b] = 0;
  *param_1 = &PTR_FUN_144088fb8;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"PerchComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_1407b3120();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8b] = uVar3;
  FUN_14223f010(param_1,uVar3);
  return param_1;
}



// FUNCTION 14074c450 FUN_14074c450 body=266 status=ok
// SIG undefined FUN_14074c450(void)

undefined8 * FUN_14074c450(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_143fde4c8;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SceneComp",1);
  uVar3 = *puVar1;
  uVar2 = FUN_1429ff160();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x2d] = uVar3;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SmartObjectComponent",1);
  uVar3 = *puVar1;
  uVar2 = ALoreItem::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8b] = uVar3;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxActionComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142e27720();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8c] = uVar3;
  return param_1;
}



// FUNCTION 14074c5e0 FUN_14074c5e0 body=278 status=ok
// SIG undefined FUN_14074c5e0(void)

undefined8 * FUN_14074c5e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  param_1[0x4c] = 0;
  iVar4 = *(int *)(param_2 + 0x4d);
  puVar5 = (undefined8 *)param_2[0x4c];
  *(int *)(param_1 + 0x4d) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x26c) = 0;
  }
  else {
    FUN_140767c20(param_1 + 4,iVar4,0);
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = param_2 + 4;
    }
    puVar2 = (undefined8 *)param_1[0x4c];
    if ((undefined8 *)param_1[0x4c] == (undefined8 *)0x0) {
      puVar2 = param_1 + 4;
    }
    lVar3 = (longlong)puVar5 - (longlong)puVar2;
    puVar2 = puVar2 + 4;
    do {
      uVar1 = *(undefined4 *)puVar5;
      puVar5 = (undefined8 *)((longlong)puVar5 + 0x24);
      *(undefined4 *)(puVar2 + -4) = uVar1;
      *(undefined4 *)((longlong)puVar2 + -0x1c) = *(undefined4 *)((longlong)puVar2 + lVar3 + -0x1c);
      *(undefined4 *)(puVar2 + -3) = *(undefined4 *)((longlong)puVar2 + lVar3 + -0x18);
      *(undefined4 *)((longlong)puVar2 + -0x14) = *(undefined4 *)((longlong)puVar2 + lVar3 + -0x14);
      *(undefined1 *)(puVar2 + -2) = *(undefined1 *)((longlong)puVar2 + lVar3 + -0x10);
      *(undefined4 *)((longlong)puVar2 + -0xc) = *(undefined4 *)((longlong)puVar2 + lVar3 + -0xc);
      *(undefined4 *)(puVar2 + -1) = *(undefined4 *)((longlong)puVar2 + lVar3 + -8);
      *(undefined4 *)((longlong)puVar2 + -4) = *(undefined4 *)((longlong)puVar2 + lVar3 + -4);
      *(undefined4 *)puVar2 = *(undefined4 *)((longlong)puVar2 + lVar3);
      puVar2 = (undefined8 *)((longlong)puVar2 + 0x24);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return param_1;
}



// FUNCTION 14074c720 FUN_14074c720 body=63 status=ok
// SIG undefined FUN_14074c720(void)

longlong FUN_14074c720(longlong param_1)

{
  FUN_142de2d20(param_1,0x3f800000,0);
  FUN_142de2d20(param_1 + 0x80,0,0);
  *(undefined8 *)(param_1 + 0x100) = 0;
  return param_1;
}



// FUNCTION 14074c7c0 FPackedNormal body=170 status=ok
// SIG undefined FPackedNormal(void)

undefined1 * FPackedNormal::FPackedNormal(undefined1 *param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)ROUND(*param_2 * 127.0 + *param_2 * 127.0 + 0.5) >> 1;
  iVar1 = -0x80;
  if ((-0x81 < iVar2) && (iVar1 = 0x7f, iVar2 < 0x7f)) {
    iVar1 = iVar2;
  }
  *param_1 = (char)iVar1;
  iVar2 = (int)ROUND(param_2[1] * 127.0 + param_2[1] * 127.0 + 0.5) >> 1;
  iVar1 = -0x80;
  if ((-0x81 < iVar2) && (iVar1 = 0x7f, iVar2 < 0x7f)) {
    iVar1 = iVar2;
  }
  param_1[1] = (char)iVar1;
  iVar2 = (int)ROUND(param_2[2] * 127.0 + param_2[2] * 127.0 + 0.5) >> 1;
  iVar1 = -0x80;
  if ((-0x81 < iVar2) && (iVar1 = 0x7f, iVar2 < 0x7f)) {
    iVar1 = iVar2;
  }
  param_1[2] = (char)iVar1;
  param_1[3] = 0x7f;
  return param_1;
}



// FUNCTION 14074c870 FUN_14074c870 body=86 status=ok
// SIG undefined FUN_14074c870(void)

undefined4 * FUN_14074c870(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[2] = 0xffffffff;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x1a] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x1b) = 1;
  return param_1;
}



// FUNCTION 14074c8d0 FUN_14074c8d0 body=71 status=ok
// SIG undefined FUN_14074c8d0(void)

undefined4 * FUN_14074c8d0(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[2] = 0xffffffff;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  return param_1;
}



// FUNCTION 14074c920 FUN_14074c920 body=163 status=ok
// SIG undefined FUN_14074c920(void)

longlong FUN_14074c920(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  FWeakObjectPtr::operator=(param_1,0);
  uVar3 = *param_4;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar1 = *(undefined4 *)(param_4 + 1);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar3 = ALoreItem::GetPrivateStaticClass();
  lVar4 = (**(code **)(*param_2 + 0x628))(param_2,uVar3);
  if (lVar4 != 0) {
    cVar2 = FUN_14075f8b0(lVar4,param_3,param_1 + 8);
    if (cVar2 != '\0') {
      FWeakObjectPtr::operator=(param_1,param_2);
    }
  }
  return param_1;
}



// FUNCTION 14074c9d0 FUN_14074c9d0 body=142 status=ok
// SIG undefined FUN_14074c9d0(void)

longlong FUN_14074c9d0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  char cVar4;
  
  FWeakObjectPtr::operator=(param_1,0);
  uVar1 = *param_4;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar2 = *(undefined4 *)(param_4 + 1);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  if ((param_2 != 0) && (lVar3 = *(longlong *)(param_2 + 0x118), lVar3 != 0)) {
    cVar4 = FUN_14075f8b0(param_2,param_3);
    if (cVar4 != '\0') {
      FWeakObjectPtr::operator=(param_1,lVar3);
    }
  }
  return param_1;
}



// FUNCTION 14074cac0 FUN_14074cac0 body=193 status=ok
// SIG undefined FUN_14074cac0(void)

undefined4 * FUN_14074cac0(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xb) = *(undefined8 *)(param_2 + 0xb);
  param_1[0xd] = param_2[0xd];
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  param_1[0x10] = param_2[0x10];
  *(byte *)(param_1 + 0x11) =
       *(byte *)(param_1 + 0x11) ^ (*(byte *)(param_1 + 0x11) ^ *(byte *)(param_2 + 0x11)) & 1;
  bVar1 = (*(byte *)(param_2 + 0x11) ^ *(byte *)(param_1 + 0x11)) & 2 ^ *(byte *)(param_1 + 0x11);
  *(byte *)(param_1 + 0x11) = bVar1;
  bVar1 = (*(byte *)(param_2 + 0x11) ^ bVar1) & 4 ^ bVar1;
  *(byte *)(param_1 + 0x11) = bVar1;
  bVar1 = (*(byte *)(param_2 + 0x11) ^ bVar1) & 8 ^ bVar1;
  *(byte *)(param_1 + 0x11) = bVar1;
  bVar1 = (*(byte *)(param_2 + 0x11) ^ bVar1) & 0x10 ^ bVar1;
  *(byte *)(param_1 + 0x11) = bVar1;
  *(byte *)(param_1 + 0x11) = (*(byte *)(param_2 + 0x11) ^ bVar1) & 0x20 ^ bVar1;
  return param_1;
}



// FUNCTION 14074cb90 FUN_14074cb90 body=364 status=ok
// SIG undefined FUN_14074cb90(void)

undefined8 * FUN_14074cb90(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  
  FUN_1417818c0();
  puVar1 = param_1 + 5;
  *puVar1 = &PTR__purecall_143f740d8;
  plVar3 = (longlong *)FUN_1404cfca0();
  iVar2 = (int)plVar3[1];
  *(int *)(plVar3 + 1) = iVar2 + 1;
  if (*(int *)((longlong)plVar3 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar2);
  }
  *(undefined8 **)(*plVar3 + (longlong)iVar2 * 8) = puVar1;
  *param_1 = &PTR_FUN_144081ba8;
  *puVar1 = &PTR_FUN_144081e20;
  param_1[6] = &PTR_LAB_144081e68;
  param_1[7] = &PTR_LAB_144081e90;
  param_1[0x4ea] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0x4eb] = 0;
  param_1[0x4ed] = 0;
  param_1[0x4ee] = 0;
  param_1[0x4ef] = 0;
  param_1[0x4f0] = 0;
  param_1[0x4f1] = 0;
  param_1[0x4f2] = 0;
  param_1[0x4f3] = 0;
  param_1[0x4f4] = 0;
  param_1[0x4f5] = 0;
  param_1[0x4f6] = 0;
  param_1[0x4f7] = 0;
  param_1[0x4f8] = 0;
  *(undefined4 *)(param_1 + 0x4f9) = 0;
  param_1[0x4fa] = 0;
  param_1[0x4fb] = 0;
  param_1[0x4fe] = 0;
  param_1[0x4ff] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2804) = 0;
  *(undefined4 *)(param_1 + 0x500) = 0xffffffff;
  param_1[0x502] = 0;
  *(undefined4 *)(param_1 + 0x503) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2824) = 0;
  *(undefined4 *)(param_1 + 0x504) = 0xffffffff;
  DAT_146858ee0 = 0;
  param_1[0x505] = 0;
  param_1[0x506] = 0;
  *(undefined1 *)(param_1 + 0x507) = 0;
  *(undefined4 *)((longlong)param_1 + 0x283c) = 0;
  return param_1;
}



// FUNCTION 14074cd00 FUN_14074cd00 body=339 status=ok
// SIG undefined FUN_14074cd00(void)

undefined8 * FUN_14074cd00(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_14178c940();
  FUN_14237eb90(param_1,uVar2);
  *(undefined2 *)(param_1 + 0xdf) = 1;
  plVar1 = param_1 + 0xee;
  *(undefined4 *)((longlong)param_1 + 0x6fc) = 0x447a0000;
  *param_1 = &PTR_FUN_1440838f8;
  *(undefined4 *)((longlong)param_1 + 0x704) = 0x42c80000;
  param_1[5] = &PTR_LAB_1440841e0;
  *(undefined4 *)(param_1 + 0xe1) = 0x42c80000;
  param_1[0x5a] = &PTR_LAB_144084210;
  param_1[0xde] = &PTR_LAB_144084268;
  *(undefined1 *)((longlong)param_1 + 0x70c) = 1;
  *(undefined4 *)(param_1 + 0xe2) = 0x43480000;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  *(undefined4 *)(param_1 + 0xed) = 0x101;
  *plVar1 = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  *(byte *)((longlong)param_1 + 0x24c) = *(byte *)((longlong)param_1 + 0x24c) | 0x40;
  *(byte *)((longlong)param_1 + 0x2f1) = *(byte *)((longlong)param_1 + 0x2f1) & 0xf5;
  *(byte *)((longlong)param_1 + 0x24d) = *(byte *)((longlong)param_1 + 0x24d) & 0xef | 8;
  FUN_142717090(param_1,0);
  if ((*(byte *)(param_1 + 1) & 0x30) == 0) {
    param_1[0xf0] = param_1;
    param_1[0xef] = &DAT_1468590e8;
    *plVar1 = (longlong)DAT_1468590e8;
    DAT_1468590e8 = plVar1;
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  return param_1;
}



// FUNCTION 14074ce60 FUN_14074ce60 body=77 status=ok
// SIG undefined FUN_14074ce60(void)

undefined8 * FUN_14074ce60(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UFontFaceInterface::UFontFaceInterface(param_1,uVar1);
  *param_1 = &PTR__scalar_deleting_destructor__144081928;
  FUN_142de2c00(param_1 + 6,1,2);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return param_1;
}



// FUNCTION 14074ceb0 UAISenseConfig_Proximity body=42 status=ok
// SIG undefined UAISenseConfig_Proximity(void)

undefined8 * UAISenseConfig_Proximity::UAISenseConfig_Proximity(undefined8 *param_1)

{
  UAISenseConfig::UAISenseConfig();
  *param_1 = &PTR__scalar_deleting_destructor__144086338;
  *(undefined4 *)(param_1 + 5) = DAT_1464aa744;
  return param_1;
}



// FUNCTION 14074cee0 FUN_14074cee0 body=54 status=ok
// SIG undefined FUN_14074cee0(void)

undefined8 * FUN_14074cee0(undefined8 *param_1)

{
  undefined4 uVar1;
  
  UAISenseConfig::UAISenseConfig();
  *param_1 = &PTR__scalar_deleting_destructor__1440865b8;
  param_1[10] = 0;
  uVar1 = DAT_1464aa750;
  *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 3;
  *(undefined4 *)(param_1 + 5) = uVar1;
  return param_1;
}



// FUNCTION 14074cf20 FUN_14074cf20 body=187 status=ok
// SIG undefined FUN_14074cf20(void)

undefined8 * FUN_14074cf20(undefined8 *param_1)

{
  FUN_142c1acb0();
  *param_1 = &PTR_FUN_144083628;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0xffffffff;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0x3f000000;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    FUN_140747230(param_1 + 0xb,param_1,FUN_1407631f0);
    FUN_140747230(param_1 + 0xd,param_1,FUN_140762ad0);
    FUN_140747230(param_1 + 0xf,param_1,FUN_140762890);
  }
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 2;
  return param_1;
}


