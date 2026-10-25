// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143d1e7d0 SSL_CTX_remove_session body=26 status=ok
// SIG undefined SSL_CTX_remove_session(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_remove_session(undefined8 param_1,undefined8 param_2)

{
  FUN_1400687c0(param_1,param_2,1);
  return;
}



// FUNCTION 143d1e7f0 SHA1_Update body=307 status=ok
// SIG undefined SHA1_Update(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SHA1_Update(longlong param_1,void *param_2,size_t param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  size_t _Size;
  ulonglong uVar4;
  
  if (param_3 != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    uVar3 = *(uint *)(param_1 + 0x14) + (int)param_3 * 8;
    if (uVar3 < *(uint *)(param_1 + 0x14)) {
      iVar2 = iVar2 + 1;
    }
    *(uint *)(param_1 + 0x14) = uVar3;
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x18) = (int)(param_3 >> 0x1d) + iVar2;
    if (uVar4 != 0) {
      puVar1 = (undefined8 *)(param_1 + 0x1c);
      if ((param_3 < 0x40) && (uVar4 + param_3 < 0x40)) {
        _guard_xfg_dispatch_icall_nop((void *)(uVar4 + (longlong)puVar1),param_2,param_3);
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + (int)param_3;
        return 1;
      }
      _Size = 0x40 - uVar4;
      _guard_xfg_dispatch_icall_nop((void *)(uVar4 + (longlong)puVar1),param_2,_Size);
      FUN_1400687c0(param_1,puVar1,1);
      *(undefined4 *)(param_1 + 0x5c) = 0;
      param_2 = (void *)((longlong)param_2 + _Size);
      param_3 = param_3 - _Size;
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0x24) = 0;
      *(undefined8 *)(param_1 + 0x2c) = 0;
      *(undefined8 *)(param_1 + 0x34) = 0;
      *(undefined8 *)(param_1 + 0x3c) = 0;
      *(undefined8 *)(param_1 + 0x44) = 0;
      *(undefined8 *)(param_1 + 0x4c) = 0;
      *(undefined8 *)(param_1 + 0x54) = 0;
    }
    uVar4 = param_3 >> 6;
    if (uVar4 != 0) {
      FUN_1400687c0(param_1,param_2,uVar4);
      param_2 = (void *)((longlong)param_2 + uVar4 * 0x40);
      param_3 = param_3 + uVar4 * -0x40;
    }
    if (param_3 != 0) {
      *(int *)(param_1 + 0x5c) = (int)param_3;
      _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x1c),param_2,param_3);
    }
  }
  return 1;
}



// FUNCTION 143d1e930 SHA384_Final body=22 status=ok
// SIG undefined SHA384_Final(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SHA384_Final(void)

{
  SHA512_Final();
  return;
}



// FUNCTION 143d1e950 SHA384_Init body=143 status=ok
// SIG undefined SHA384_Init(void)

undefined8 SHA384_Init(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x30;
  *param_1 = 0xcbbb9d5dc1059ed8;
  param_1[1] = 0x629a292a367cd507;
  param_1[2] = 0x9159015a3070dd17;
  param_1[3] = 0x152fecd8f70e5939;
  param_1[4] = 0x67332667ffc00b31;
  param_1[5] = 0x8eb44a8768581511;
  param_1[6] = 0xdb0c2e0d64f98fa7;
  param_1[7] = 0x47b5481dbefa4fa4;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  return 1;
}



// FUNCTION 143d1e9e0 SHA384_Update body=22 status=ok
// SIG undefined SHA384_Update(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SHA384_Update(void)

{
  SHA512_Update();
  return;
}



// FUNCTION 143d1ea00 SHA512 body=269 status=ok
// SIG undefined SHA512(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined * SHA512(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143d1ea0c;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_24 = 0x40;
  local_f8 = 0x6a09e667f3bcc908;
  puVar1 = &DAT_146bcb4e0;
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3;
  }
  local_f0 = 0xbb67ae8584caa73b;
  local_e8 = 0x3c6ef372fe94f82b;
  local_e0 = 0xa54ff53a5f1d36f1;
  local_d8 = 0x510e527fade682d1;
  local_d0 = 0x9b05688c2b3e6c1f;
  local_c8 = 0x1f83d9abfb41bd6b;
  local_c0 = 0x5be0cd19137e2179;
  local_b8 = 0;
  local_b0 = 0;
  local_28 = 0;
  SHA512_Update(&local_f8,param_1,param_2);
  SHA512_Final(puVar1,&local_f8);
  FUN_14004ff40(&local_f8,0xd8);
  return puVar1;
}



// FUNCTION 143d1eb10 SHA512_Final body=2044 status=ok
// SIG undefined SHA512_Final(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SHA512_Final(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  uVar2 = *(uint *)(param_2 + 0x1a);
  puVar1 = param_2 + 10;
  *(undefined1 *)((ulonglong)uVar2 + (longlong)puVar1) = 0x80;
  uVar5 = (ulonglong)uVar2 + 1;
  if (0x70 < uVar5) {
    _guard_xfg_dispatch_icall_nop((void *)(uVar5 + (longlong)puVar1),0,0x80 - uVar5);
    uVar5 = 0;
    FUN_14008dcc0(param_2,puVar1,1);
  }
  _guard_xfg_dispatch_icall_nop((void *)(uVar5 + (longlong)puVar1),0,0x70 - uVar5);
  *(undefined1 *)((longlong)param_2 + 0xcf) = *(undefined1 *)(param_2 + 8);
  *(char *)((longlong)param_2 + 0xce) = (char)((uint)*(undefined4 *)(param_2 + 8) >> 8);
  *(char *)((longlong)param_2 + 0xcd) = (char)((uint)*(undefined4 *)(param_2 + 8) >> 0x10);
  *(char *)((longlong)param_2 + 0xcc) = (char)((uint)*(undefined4 *)(param_2 + 8) >> 0x18);
  *(char *)((longlong)param_2 + 0xcb) = (char)((ulonglong)param_2[8] >> 0x20);
  *(char *)((longlong)param_2 + 0xca) = (char)((ulonglong)param_2[8] >> 0x28);
  *(undefined1 *)((longlong)param_2 + 0xc9) = *(undefined1 *)((longlong)param_2 + 0x46);
  *(undefined1 *)(param_2 + 0x19) = *(undefined1 *)((longlong)param_2 + 0x47);
  *(undefined1 *)((longlong)param_2 + 199) = *(undefined1 *)(param_2 + 9);
  *(char *)((longlong)param_2 + 0xc6) = (char)((uint)*(undefined4 *)(param_2 + 9) >> 8);
  *(char *)((longlong)param_2 + 0xc5) = (char)((uint)*(undefined4 *)(param_2 + 9) >> 0x10);
  *(char *)((longlong)param_2 + 0xc4) = (char)((uint)*(undefined4 *)(param_2 + 9) >> 0x18);
  *(char *)((longlong)param_2 + 0xc3) = (char)((ulonglong)param_2[9] >> 0x20);
  *(char *)((longlong)param_2 + 0xc2) = (char)((ulonglong)param_2[9] >> 0x28);
  *(undefined1 *)((longlong)param_2 + 0xc1) = *(undefined1 *)((longlong)param_2 + 0x4e);
  *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)((longlong)param_2 + 0x4f);
  FUN_14008dcc0(param_2,puVar1,1);
  if (param_1 != (undefined1 *)0x0) {
    iVar3 = *(int *)((longlong)param_2 + 0xd4);
    if (iVar3 == 0x1c) {
      uVar4 = *param_2;
      *param_1 = (char)((ulonglong)uVar4 >> 0x38);
      param_1[1] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[2] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[3] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[4] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[5] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[6] = (char)((ulonglong)uVar4 >> 8);
      param_1[7] = (char)uVar4;
      uVar4 = param_2[1];
      param_1[8] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[9] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[10] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0xb] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0xc] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0xd] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0xe] = (char)((ulonglong)uVar4 >> 8);
      param_1[0xf] = (char)uVar4;
      uVar4 = param_2[2];
      param_1[0x10] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x11] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x12] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x13] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x14] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x15] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x16] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x17] = (char)uVar4;
      uVar4 = param_2[3];
      param_1[0x18] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x19] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x1a] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x1b] = (char)((ulonglong)uVar4 >> 0x20);
      return 1;
    }
    if (iVar3 == 0x20) {
      uVar4 = *param_2;
      *param_1 = (char)((ulonglong)uVar4 >> 0x38);
      param_1[1] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[2] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[3] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[4] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[5] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[6] = (char)((ulonglong)uVar4 >> 8);
      param_1[7] = (char)uVar4;
      uVar4 = param_2[1];
      param_1[8] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[9] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[10] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0xb] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0xc] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0xd] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0xe] = (char)((ulonglong)uVar4 >> 8);
      param_1[0xf] = (char)uVar4;
      uVar4 = param_2[2];
      param_1[0x10] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x11] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x12] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x13] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x14] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x15] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x16] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x17] = (char)uVar4;
      uVar4 = param_2[3];
      param_1[0x18] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x19] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x1a] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x1b] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x1c] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x1d] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x1e] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x1f] = (char)uVar4;
      return 1;
    }
    if (iVar3 == 0x30) {
      uVar4 = *param_2;
      *param_1 = (char)((ulonglong)uVar4 >> 0x38);
      param_1[1] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[2] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[3] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[4] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[5] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[6] = (char)((ulonglong)uVar4 >> 8);
      param_1[7] = (char)uVar4;
      uVar4 = param_2[1];
      param_1[8] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[9] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[10] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0xb] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0xc] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0xd] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0xe] = (char)((ulonglong)uVar4 >> 8);
      param_1[0xf] = (char)uVar4;
      uVar4 = param_2[2];
      param_1[0x10] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x11] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x12] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x13] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x14] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x15] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x16] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x17] = (char)uVar4;
      uVar4 = param_2[3];
      param_1[0x18] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x19] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x1a] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x1b] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x1c] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x1d] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x1e] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x1f] = (char)uVar4;
      uVar4 = param_2[4];
      param_1[0x20] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x21] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x22] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x23] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x24] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x25] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x26] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x27] = (char)uVar4;
      uVar4 = param_2[5];
      param_1[0x28] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x29] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x2a] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x2b] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x2c] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x2d] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x2e] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x2f] = (char)uVar4;
      return 1;
    }
    if (iVar3 == 0x40) {
      uVar4 = *param_2;
      *param_1 = (char)((ulonglong)uVar4 >> 0x38);
      param_1[1] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[2] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[3] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[4] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[5] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[6] = (char)((ulonglong)uVar4 >> 8);
      param_1[7] = (char)uVar4;
      uVar4 = param_2[1];
      param_1[8] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[9] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[10] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0xb] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0xc] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0xd] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0xe] = (char)((ulonglong)uVar4 >> 8);
      param_1[0xf] = (char)uVar4;
      uVar4 = param_2[2];
      param_1[0x10] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x11] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x12] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x13] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x14] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x15] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x16] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x17] = (char)uVar4;
      uVar4 = param_2[3];
      param_1[0x18] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x19] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x1a] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x1b] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x1c] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x1d] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x1e] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x1f] = (char)uVar4;
      uVar4 = param_2[4];
      param_1[0x20] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x21] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x22] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x23] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x24] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x25] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x26] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x27] = (char)uVar4;
      uVar4 = param_2[5];
      param_1[0x28] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x29] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x2a] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x2b] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x2c] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x2d] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x2e] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x2f] = (char)uVar4;
      uVar4 = param_2[6];
      param_1[0x30] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x31] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x32] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x33] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x34] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x35] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x36] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x37] = (char)uVar4;
      uVar4 = param_2[7];
      param_1[0x38] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x39] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x3a] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x3b] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x3c] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x3d] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x3e] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x3f] = (char)uVar4;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143d1f310 SHA512_Init body=143 status=ok
// SIG undefined SHA512_Init(void)

undefined8 SHA512_Init(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x40;
  *param_1 = 0x6a09e667f3bcc908;
  param_1[1] = 0xbb67ae8584caa73b;
  param_1[2] = 0x3c6ef372fe94f82b;
  param_1[3] = 0xa54ff53a5f1d36f1;
  param_1[4] = 0x510e527fade682d1;
  param_1[5] = 0x9b05688c2b3e6c1f;
  param_1[6] = 0x1f83d9abfb41bd6b;
  param_1[7] = 0x5be0cd19137e2179;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  return 1;
}



// FUNCTION 143d1f3a0 SSL_CTX_remove_session body=26 status=ok
// SIG undefined SSL_CTX_remove_session(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_remove_session(undefined8 param_1,undefined8 param_2)

{
  FUN_14008dcc0(param_1,param_2,1);
  return;
}



// FUNCTION 143d1f3c0 SHA512_Update body=273 status=ok
// SIG undefined SHA512_Update(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SHA512_Update(longlong param_1,void *param_2,ulonglong param_3)

{
  void *_Dst;
  void *_Dst_00;
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  _Dst = (void *)(param_1 + 0x50);
  if (param_3 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    uVar3 = *(ulonglong *)(param_1 + 0x40) + param_3 * 8;
    if (uVar3 < *(ulonglong *)(param_1 + 0x40)) {
      lVar2 = lVar2 + 1;
    }
    *(ulonglong *)(param_1 + 0x40) = uVar3;
    *(ulonglong *)(param_1 + 0x48) = (param_3 >> 0x3d) + lVar2;
    uVar1 = *(uint *)(param_1 + 0xd0);
    if (uVar1 != 0) {
      _Dst_00 = (void *)((ulonglong)uVar1 + (longlong)_Dst);
      uVar3 = 0x80 - (ulonglong)uVar1;
      if (param_3 < uVar3) {
        _guard_xfg_dispatch_icall_nop(_Dst_00,param_2,param_3);
        *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + (int)param_3;
        return 1;
      }
      _guard_xfg_dispatch_icall_nop(_Dst_00,param_2,uVar3);
      *(undefined4 *)(param_1 + 0xd0) = 0;
      param_3 = param_3 - uVar3;
      param_2 = (void *)((longlong)param_2 + uVar3);
      FUN_14008dcc0(param_1,_Dst,1);
    }
    uVar3 = param_3;
    if (0x7f < param_3) {
      FUN_14008dcc0(param_1,param_2,param_3 >> 7);
      uVar3 = (ulonglong)((uint)param_3 & 0x7f);
      param_2 = (void *)((longlong)param_2 + (param_3 - uVar3));
    }
    if (uVar3 != 0) {
      _guard_xfg_dispatch_icall_nop(_Dst,param_2,uVar3);
      *(int *)(param_1 + 0xd0) = (int)uVar3;
    }
  }
  return 1;
}



// FUNCTION 143d1f4e0 FUN_143d1f4e0 body=143 status=ok
// SIG undefined FUN_143d1f4e0(void)

undefined8 FUN_143d1f4e0(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x1c;
  *param_1 = 0x8c3d37c819544da2;
  param_1[1] = 0x73e1996689dcd4d6;
  param_1[2] = 0x1dfab7ae32ff9c82;
  param_1[3] = 0x679dd514582f9fcf;
  param_1[4] = 0xf6d2b697bd44da8;
  param_1[5] = 0x77e36f7304c48942;
  param_1[6] = 0x3f9d85a86a1d36c8;
  param_1[7] = 0x1112e6ad91d692a1;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  return 1;
}



// FUNCTION 143d1f570 FUN_143d1f570 body=143 status=ok
// SIG undefined FUN_143d1f570(void)

undefined8 FUN_143d1f570(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x20;
  *param_1 = 0x22312194fc2bf72c;
  param_1[1] = 0x9f555fa3c84c64c2;
  param_1[2] = 0x2393b86b6f53b151;
  param_1[3] = 0x963877195940eabd;
  param_1[4] = 0x96283ee2a88effe3;
  param_1[5] = 0xbe5e1e2553863992;
  param_1[6] = 0x2b0199fc2c85b8aa;
  param_1[7] = 0xeb72ddc81c52ca2;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  return 1;
}



// FUNCTION 143d1f600 MD5_Final body=356 status=ok
// SIG undefined MD5_Final(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 MD5_Final(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  uVar2 = param_2[0x16];
  puVar1 = param_2 + 6;
  *(undefined1 *)((ulonglong)uVar2 + (longlong)puVar1) = 0x80;
  uVar4 = (ulonglong)uVar2 + 1;
  if (0x38 < uVar4) {
    _guard_xfg_dispatch_icall_nop((void *)(uVar4 + (longlong)puVar1),0,0x40 - uVar4);
    uVar4 = 0;
    FUN_140092fc0(param_2,puVar1,1);
  }
  _guard_xfg_dispatch_icall_nop((void *)(uVar4 + (longlong)puVar1),0,0x38 - uVar4);
  *(undefined1 *)(param_2 + 0x14) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((longlong)param_2 + 0x51) = *(undefined1 *)((longlong)param_2 + 0x11);
  *(undefined1 *)((longlong)param_2 + 0x52) = *(undefined1 *)((longlong)param_2 + 0x12);
  *(undefined1 *)((longlong)param_2 + 0x53) = *(undefined1 *)((longlong)param_2 + 0x13);
  *(undefined1 *)(param_2 + 0x15) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)((longlong)param_2 + 0x55) = *(undefined1 *)((longlong)param_2 + 0x15);
  *(undefined1 *)((longlong)param_2 + 0x56) = *(undefined1 *)((longlong)param_2 + 0x16);
  *(undefined1 *)((longlong)param_2 + 0x57) = *(undefined1 *)((longlong)param_2 + 0x17);
  FUN_140092fc0(param_2,puVar1,1);
  param_2[0x16] = 0;
  FUN_14004ff40(puVar1,0x40);
  uVar3 = *param_2;
  *param_1 = (char)uVar3;
  param_1[1] = (char)((uint)uVar3 >> 8);
  param_1[2] = (char)((uint)uVar3 >> 0x10);
  param_1[3] = (char)((uint)uVar3 >> 0x18);
  uVar3 = param_2[1];
  param_1[4] = (char)uVar3;
  param_1[5] = (char)((uint)uVar3 >> 8);
  param_1[6] = (char)((uint)uVar3 >> 0x10);
  param_1[7] = (char)((uint)uVar3 >> 0x18);
  uVar3 = param_2[2];
  param_1[8] = (char)uVar3;
  param_1[9] = (char)((uint)uVar3 >> 8);
  param_1[10] = (char)((uint)uVar3 >> 0x10);
  param_1[0xb] = (char)((uint)uVar3 >> 0x18);
  uVar3 = param_2[3];
  param_1[0xc] = (char)uVar3;
  param_1[0xd] = (char)((uint)uVar3 >> 8);
  param_1[0xe] = (char)((uint)uVar3 >> 0x10);
  param_1[0xf] = (char)((uint)uVar3 >> 0x18);
  return 1;
}



// FUNCTION 143d1f770 MD5_Init body=74 status=ok
// SIG undefined MD5_Init(void)

undefined8 MD5_Init(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0;
  *param_1 = 0x67452301;
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  param_1[3] = 0x10325476;
  return 1;
}



// FUNCTION 143d1f7c0 SSL_CTX_remove_session body=26 status=ok
// SIG undefined SSL_CTX_remove_session(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_remove_session(undefined8 param_1,undefined8 param_2)

{
  FUN_140092fc0(param_1,param_2,1);
  return;
}



// FUNCTION 143d1f7e0 MD5_Update body=307 status=ok
// SIG undefined MD5_Update(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 MD5_Update(longlong param_1,void *param_2,size_t param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  size_t _Size;
  ulonglong uVar4;
  
  if (param_3 != 0) {
    iVar2 = *(int *)(param_1 + 0x14);
    uVar3 = *(uint *)(param_1 + 0x10) + (int)param_3 * 8;
    if (uVar3 < *(uint *)(param_1 + 0x10)) {
      iVar2 = iVar2 + 1;
    }
    *(uint *)(param_1 + 0x10) = uVar3;
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x58);
    *(int *)(param_1 + 0x14) = (int)(param_3 >> 0x1d) + iVar2;
    if (uVar4 != 0) {
      puVar1 = (undefined8 *)(param_1 + 0x18);
      if ((param_3 < 0x40) && (uVar4 + param_3 < 0x40)) {
        _guard_xfg_dispatch_icall_nop((void *)(uVar4 + (longlong)puVar1),param_2,param_3);
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (int)param_3;
        return 1;
      }
      _Size = 0x40 - uVar4;
      _guard_xfg_dispatch_icall_nop((void *)(uVar4 + (longlong)puVar1),param_2,_Size);
      FUN_140092fc0(param_1,puVar1,1);
      *(undefined4 *)(param_1 + 0x58) = 0;
      param_2 = (void *)((longlong)param_2 + _Size);
      param_3 = param_3 - _Size;
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
    uVar4 = param_3 >> 6;
    if (uVar4 != 0) {
      FUN_140092fc0(param_1,param_2,uVar4);
      param_2 = (void *)((longlong)param_2 + uVar4 * 0x40);
      param_3 = param_3 + uVar4 * -0x40;
    }
    if (param_3 != 0) {
      *(int *)(param_1 + 0x58) = (int)param_3;
      _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x18),param_2,param_3);
    }
  }
  return 1;
}



// FUNCTION 143d1f920 OPENSSL_cpuid_setup body=399 status=ok
// SIG undefined OPENSSL_cpuid_setup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OPENSSL_cpuid_setup(void)

{
  short sVar1;
  DWORD DVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  short *psVar9;
  
  if (DAT_146bcb580 == 0) {
    psVar9 = &DAT_146bcb520;
    DAT_146bcb580 = 1;
    DVar2 = GetEnvironmentVariableW(L"OPENSSL_ia32cap",&DAT_146bcb520,0x30);
    sVar1 = DAT_146bcb520;
    if (DVar2 - 1 < 0x2f) {
      lVar8 = 0;
      lVar7 = lVar8;
      if (DAT_146bcb520 == 0x7e) {
        lVar7 = 2;
      }
      uVar3 = ossl_strtouint64((longlong)&DAT_146bcb520 + lVar7);
      if (sVar1 == 0x7e) {
        uVar4 = FUN_14004fd30(&DAT_146bcd580);
        sVar1 = DAT_146bcb520;
        uVar5 = uVar4 & ~uVar3 & 0xedfff7fdffffffff;
        if ((uVar3 & 0x1000000) == 0) {
          uVar5 = uVar4 & ~uVar3;
        }
      }
      else {
        sVar1 = DAT_146bcb520;
        uVar5 = uVar3;
        if (DAT_146bcb520 == 0x3a) {
          uVar5 = FUN_14004fd30(&DAT_146bcd580);
          sVar1 = DAT_146bcb520;
        }
      }
      while (sVar1 != 0) {
        psVar9 = psVar9 + 1;
        if (sVar1 == 0x3a) {
          sVar1 = *psVar9;
          if (sVar1 == 0x7e) {
            lVar8 = 2;
          }
          uVar6 = ossl_strtouint64((longlong)psVar9 + lVar8);
          if (sVar1 == 0x7e) {
            _DAT_146bcd588 = _DAT_146bcd588 & ~(uint)uVar6;
            _DAT_146bcd58c = _DAT_146bcd58c & ~(uint)((ulonglong)uVar6 >> 0x20);
            uVar6 = _DAT_146bcd588;
          }
          goto LAB_143d1fa7b;
        }
        sVar1 = *psVar9;
      }
      _DAT_146bcd588 = 0;
      uVar6 = _DAT_146bcd588;
    }
    else {
      uVar5 = FUN_14004fd30(&DAT_146bcd580);
      uVar6 = _DAT_146bcd588;
    }
LAB_143d1fa7b:
    _DAT_146bcd588 = uVar6;
    DAT_146bcd580 = (uint)uVar5 | 0x400;
    DAT_146bcd584 = (undefined4)(uVar5 >> 0x20);
  }
  return;
}



// FUNCTION 143d1fab0 OPENSSL_die body=50 status=ok
// SIG undefined OPENSSL_die(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OPENSSL_die(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143d1fc70("%s:%d: OpenSSL internal error: %s\n",param_2,param_3,param_1,0x143d1faba);
  raise(0x16);
                    /* WARNING: Subroutine does not return */
  _exit(3);
}



// FUNCTION 143d1faf0 OPENSSL_isservice body=381 status=ok
// SIG undefined OPENSSL_isservice(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong OPENSSL_isservice(void)

{
  longlong lVar1;
  undefined1 *puVar2;
  BOOL BVar3;
  DWORD DVar4;
  uint uVar5;
  HMODULE hModule;
  HWINSTA hObj;
  wchar_t *pwVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined8 uStackY_50;
  undefined1 auStackY_48 [32];
  uint local_18;
  undefined4 uStack_14;
  ulonglong local_10;
  
  puVar8 = auStackY_48;
  local_10 = DAT_1468387a8 ^ (ulonglong)&local_18;
  if (DAT_146bcb588 == (FARPROC)0x0) {
    uStackY_50 = 0x143d1fb32;
    hModule = GetModuleHandleW((LPCWSTR)0x0);
    if (hModule == (HMODULE)0x0) {
      DAT_146bcb588 = (FARPROC)CONCAT44(uStack_14,local_18);
    }
    else {
      uStackY_50 = 0x143d1fb47;
      DAT_146bcb588 = GetProcAddress(hModule,"_OPENSSL_isservice");
    }
    if (DAT_146bcb588 != (FARPROC)0x0) goto LAB_143d1fc40;
    DAT_146bcb588 = (FARPROC)&DAT_ffffffffffffffff;
  }
  else {
LAB_143d1fc40:
    if (DAT_146bcb588 != (FARPROC)&DAT_ffffffffffffffff) {
      uStackY_50 = 0x143d1fc4c;
      uVar7 = (*DAT_146bcb588)();
      goto LAB_143d1fc53;
    }
  }
  uStackY_50 = 0x143d1fb67;
  hObj = GetProcessWindowStation();
  puVar2 = auStackY_48;
  if (hObj != (HWINSTA)0x0) {
    uStackY_50 = 0x143d1fb8f;
    BVar3 = GetUserObjectInformationW(hObj,2,(PVOID)0x0,0,&local_18);
    puVar2 = auStackY_48;
    if (BVar3 == 0) {
      uStackY_50 = 0x143d1fb9d;
      DVar4 = GetLastError();
      puVar2 = auStackY_48;
      if ((DVar4 == 0x7a) && (puVar2 = auStackY_48, local_18 < 0x201)) {
        uVar5 = local_18 + 1 & 0xfffffffe;
        local_18 = uVar5;
        uVar7 = (ulonglong)uVar5 + 0x11;
        if (uVar7 <= (ulonglong)uVar5 + 2) {
          uVar7 = 0xffffffffffffff0;
        }
        uStackY_50 = 0x143d1fbe3;
        lVar1 = -(uVar7 & 0xfffffffffffffff0);
        puVar8 = auStackY_48 + lVar1;
        pwVar6 = (wchar_t *)((longlong)&local_18 + lVar1);
        *(uint **)(&stack0xffffffffffffffd8 + lVar1) = &local_18;
        *(undefined8 *)(auStackY_48 + lVar1 + -8) = 0x143d1fc08;
        BVar3 = GetUserObjectInformationW
                          (hObj,2,pwVar6,uVar5,*(LPDWORD *)(&stack0xffffffffffffffd8 + lVar1));
        puVar2 = auStackY_48 + lVar1;
        if (BVar3 != 0) {
          uVar5 = local_18 + 1;
          local_18 = uVar5 & 0xfffffffe;
          pwVar6[uVar5 >> 1] = L'\0';
          *(undefined8 *)(auStackY_48 + lVar1 + -8) = 0x143d1fc2f;
          pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar6,L"Service-0x");
          uVar7 = (ulonglong)(pwVar6 != (wchar_t *)0x0);
          goto LAB_143d1fc53;
        }
      }
    }
  }
  puVar8 = puVar2;
  uVar7 = 0xffffffff;
LAB_143d1fc53:
  *(undefined8 *)(puVar8 + -8) = 0x143d1fc5f;
  return uVar7;
}



// FUNCTION 143d1fc70 FUN_143d1fc70 body=845 status=ok
// SIG undefined FUN_143d1fc70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143d1fc70(LPCSTR param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  LPCSTR pCVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  DWORD DVar5;
  int iVar6;
  HANDLE pvVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  undefined1 (*pauVar10) [16];
  ulonglong uVar11;
  undefined2 *puVar12;
  undefined1 *puVar13;
  LPCSTR lpMultiByteStr;
  uint cbMultiByte;
  undefined1 auVar15 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar31 [16];
  undefined1 auVar39 [16];
  undefined1 auVar47 [16];
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 uStackY_2b0;
  undefined1 auStackY_2a8 [32];
  undefined8 *local_280;
  DWORD local_278 [2];
  undefined8 local_270 [3];
  undefined8 local_258;
  WCHAR local_248 [8];
  undefined1 local_238 [494];
  undefined2 local_4a;
  ulonglong local_48;
  undefined8 uStack_38;
  ulonglong uVar14;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 uVar30;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  
  uStack_38 = 0x143d1fc96;
  local_48 = DAT_1468387a8 ^ (ulonglong)&local_258;
  uStackY_2b0 = 0x143d1fcba;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  pvVar7 = GetStdHandle(0xfffffff4);
  if (pvVar7 != (HANDLE)0x0) {
    uStackY_2b0 = 0x143d1fccb;
    DVar5 = GetFileType(pvVar7);
    if (DVar5 != 0) {
      uStackY_2b0 = 0x143d1fcdb;
      puVar8 = (ulonglong *)__local_stdio_printf_options();
      uStackY_2b0 = 0x143d1fd07;
      local_280 = &local_res10;
      DVar5 = __stdio_common_vsprintf(*puVar8 | 1,local_248,0x200,param_1);
      if ((int)DVar5 < 0) {
        DVar5 = 0xffffffff;
      }
      if ((int)DVar5 < 0) {
        DVar5 = 0x200;
      }
      uStackY_2b0 = 0x143d1fd2f;
      WriteFile(pvVar7,local_248,DVar5,(LPDWORD)&local_258,(LPOVERLAPPED)0x0);
      puVar13 = auStackY_2a8;
      goto LAB_143d1ff9e;
    }
  }
  uStackY_2b0 = 0x143d1fd43;
  lpMultiByteStr = param_1;
  iVar6 = _strlen31(param_1);
  cbMultiByte = iVar6 + 1;
  uVar14 = (ulonglong)cbMultiByte;
  uVar9 = uVar14 * 2 + 0xf;
  if (uVar9 <= uVar14 * 2) {
    uVar9 = 0xffffffffffffff0;
  }
  uStackY_2b0 = 0x143d1fd6d;
  lVar4 = -(uVar9 & 0xfffffffffffffff0);
  puVar13 = auStackY_2a8 + lVar4;
  uVar9 = 0;
  pCVar1 = (LPCSTR)((longlong)&local_258 + lVar4);
  if (pCVar1 != (LPCSTR)0x0) {
    *(uint *)((longlong)local_278 + lVar4 + -8) = cbMultiByte;
    *(LPCSTR *)((longlong)local_270 + lVar4 + -0x18) = pCVar1;
    *(undefined8 *)(auStackY_2a8 + lVar4 + -8) = 0x143d1fd9c;
    iVar6 = MultiByteToWideChar(0,0,lpMultiByteStr,cbMultiByte,
                                *(LPWSTR *)((longlong)local_270 + lVar4 + -0x18),
                                *(int *)((longlong)local_278 + lVar4 + -8));
    if ((iVar6 == 0) && (uVar14 != 0)) {
      uVar11 = uVar9;
      if ((0x1f < uVar14) &&
         ((param_1 + (uVar14 - 1) < pCVar1 || (pCVar1 + (uVar14 - 1) * 2 < param_1)))) {
        pauVar10 = (undefined1 (*) [16])(local_238 + lVar4);
        do {
          uVar2 = *(ulonglong *)(param_1 + uVar11);
          uVar3 = *(ulonglong *)(param_1 + uVar11 + 8);
          uVar30 = (undefined1)(uVar2 >> 0x38);
          auVar20._8_6_ = 0;
          auVar20._0_8_ = uVar2;
          auVar20[0xe] = uVar30;
          auVar20[0xf] = uVar30;
          uVar30 = (undefined1)(uVar2 >> 0x30);
          auVar19._14_2_ = auVar20._14_2_;
          auVar19._8_5_ = 0;
          auVar19._0_8_ = uVar2;
          auVar19[0xd] = uVar30;
          auVar18._13_3_ = auVar19._13_3_;
          auVar18._8_4_ = 0;
          auVar18._0_8_ = uVar2;
          auVar18[0xc] = uVar30;
          uVar30 = (undefined1)(uVar2 >> 0x28);
          auVar17._12_4_ = auVar18._12_4_;
          auVar17._8_3_ = 0;
          auVar17._0_8_ = uVar2;
          auVar17[0xb] = uVar30;
          auVar16._11_5_ = auVar17._11_5_;
          auVar16._8_2_ = 0;
          auVar16._0_8_ = uVar2;
          auVar16[10] = uVar30;
          uVar30 = (undefined1)(uVar2 >> 0x20);
          auVar47._10_6_ = auVar16._10_6_;
          auVar47[8] = 0;
          auVar47._0_8_ = uVar2;
          auVar47[9] = uVar30;
          auVar21._9_7_ = auVar47._9_7_;
          auVar21[8] = uVar30;
          auVar21._0_8_ = uVar2;
          uVar30 = (undefined1)(uVar2 >> 0x18);
          auVar15._8_8_ = auVar21._8_8_;
          auVar15[7] = uVar30;
          auVar15[6] = uVar30;
          uVar30 = (undefined1)(uVar2 >> 0x10);
          auVar15[5] = uVar30;
          auVar15[4] = uVar30;
          uVar30 = (undefined1)(uVar2 >> 8);
          auVar15[3] = uVar30;
          auVar15[2] = uVar30;
          auVar15[0] = (undefined1)uVar2;
          auVar15[1] = auVar15[0];
          uVar30 = (undefined1)(uVar3 >> 0x38);
          auVar38._8_6_ = 0;
          auVar38._0_8_ = uVar3;
          auVar38[0xe] = uVar30;
          auVar38[0xf] = uVar30;
          uVar30 = (undefined1)(uVar3 >> 0x30);
          auVar37._14_2_ = auVar38._14_2_;
          auVar37._8_5_ = 0;
          auVar37._0_8_ = uVar3;
          auVar37[0xd] = uVar30;
          auVar36._13_3_ = auVar37._13_3_;
          auVar36._8_4_ = 0;
          auVar36._0_8_ = uVar3;
          auVar36[0xc] = uVar30;
          uVar30 = (undefined1)(uVar3 >> 0x28);
          auVar35._12_4_ = auVar36._12_4_;
          auVar35._8_3_ = 0;
          auVar35._0_8_ = uVar3;
          auVar35[0xb] = uVar30;
          auVar34._11_5_ = auVar35._11_5_;
          auVar34._8_2_ = 0;
          auVar34._0_8_ = uVar3;
          auVar34[10] = uVar30;
          uVar30 = (undefined1)(uVar3 >> 0x20);
          auVar33._10_6_ = auVar34._10_6_;
          auVar33[8] = 0;
          auVar33._0_8_ = uVar3;
          auVar33[9] = uVar30;
          auVar32._9_7_ = auVar33._9_7_;
          auVar32[8] = uVar30;
          auVar32._0_8_ = uVar3;
          uVar30 = (undefined1)(uVar3 >> 0x18);
          auVar31._8_8_ = auVar32._8_8_;
          auVar31[7] = uVar30;
          auVar31[6] = uVar30;
          uVar30 = (undefined1)(uVar3 >> 0x10);
          auVar31[5] = uVar30;
          auVar31[4] = uVar30;
          uVar30 = (undefined1)(uVar3 >> 8);
          auVar31[3] = uVar30;
          auVar31[2] = uVar30;
          auVar31[0] = (undefined1)uVar3;
          auVar31[1] = auVar31[0];
          auVar21 = psraw(auVar15,8);
          pauVar10[-2] = auVar21;
          uVar2 = *(ulonglong *)(param_1 + uVar11 + 0x10);
          auVar21 = psraw(auVar31,8);
          pauVar10[-1] = auVar21;
          uVar3 = *(ulonglong *)(param_1 + uVar11 + 0x18);
          uVar11 = uVar11 + 0x20;
          uVar30 = (undefined1)(uVar2 >> 0x38);
          auVar29._8_6_ = 0;
          auVar29._0_8_ = uVar2;
          auVar29[0xe] = uVar30;
          auVar29[0xf] = uVar30;
          uVar30 = (undefined1)(uVar2 >> 0x30);
          auVar28._14_2_ = auVar29._14_2_;
          auVar28._8_5_ = 0;
          auVar28._0_8_ = uVar2;
          auVar28[0xd] = uVar30;
          auVar27._13_3_ = auVar28._13_3_;
          auVar27._8_4_ = 0;
          auVar27._0_8_ = uVar2;
          auVar27[0xc] = uVar30;
          uVar30 = (undefined1)(uVar2 >> 0x28);
          auVar26._12_4_ = auVar27._12_4_;
          auVar26._8_3_ = 0;
          auVar26._0_8_ = uVar2;
          auVar26[0xb] = uVar30;
          auVar25._11_5_ = auVar26._11_5_;
          auVar25._8_2_ = 0;
          auVar25._0_8_ = uVar2;
          auVar25[10] = uVar30;
          uVar30 = (undefined1)(uVar2 >> 0x20);
          auVar24._10_6_ = auVar25._10_6_;
          auVar24[8] = 0;
          auVar24._0_8_ = uVar2;
          auVar24[9] = uVar30;
          auVar23._9_7_ = auVar24._9_7_;
          auVar23[8] = uVar30;
          auVar23._0_8_ = uVar2;
          uVar30 = (undefined1)(uVar2 >> 0x18);
          auVar22._8_8_ = auVar23._8_8_;
          auVar22[7] = uVar30;
          auVar22[6] = uVar30;
          uVar30 = (undefined1)(uVar2 >> 0x10);
          auVar22[5] = uVar30;
          auVar22[4] = uVar30;
          uVar30 = (undefined1)(uVar2 >> 8);
          auVar22[3] = uVar30;
          auVar22[2] = uVar30;
          auVar22[0] = (undefined1)uVar2;
          auVar22[1] = auVar22[0];
          uVar30 = (undefined1)(uVar3 >> 0x38);
          auVar46._8_6_ = 0;
          auVar46._0_8_ = uVar3;
          auVar46[0xe] = uVar30;
          auVar46[0xf] = uVar30;
          uVar30 = (undefined1)(uVar3 >> 0x30);
          auVar45._14_2_ = auVar46._14_2_;
          auVar45._8_5_ = 0;
          auVar45._0_8_ = uVar3;
          auVar45[0xd] = uVar30;
          auVar44._13_3_ = auVar45._13_3_;
          auVar44._8_4_ = 0;
          auVar44._0_8_ = uVar3;
          auVar44[0xc] = uVar30;
          uVar30 = (undefined1)(uVar3 >> 0x28);
          auVar43._12_4_ = auVar44._12_4_;
          auVar43._8_3_ = 0;
          auVar43._0_8_ = uVar3;
          auVar43[0xb] = uVar30;
          auVar42._11_5_ = auVar43._11_5_;
          auVar42._8_2_ = 0;
          auVar42._0_8_ = uVar3;
          auVar42[10] = uVar30;
          uVar30 = (undefined1)(uVar3 >> 0x20);
          auVar41._10_6_ = auVar42._10_6_;
          auVar41[8] = 0;
          auVar41._0_8_ = uVar3;
          auVar41[9] = uVar30;
          auVar40._9_7_ = auVar41._9_7_;
          auVar40[8] = uVar30;
          auVar40._0_8_ = uVar3;
          uVar30 = (undefined1)(uVar3 >> 0x18);
          auVar39._8_8_ = auVar40._8_8_;
          auVar39[7] = uVar30;
          auVar39[6] = uVar30;
          uVar30 = (undefined1)(uVar3 >> 0x10);
          auVar39[5] = uVar30;
          auVar39[4] = uVar30;
          uVar30 = (undefined1)(uVar3 >> 8);
          auVar39[3] = uVar30;
          auVar39[2] = uVar30;
          auVar39[0] = (undefined1)uVar3;
          auVar39[1] = auVar39[0];
          auVar21 = psraw(auVar22,8);
          auVar47 = psraw(auVar39,8);
          *pauVar10 = auVar21;
          pauVar10[1] = auVar47;
          pauVar10 = pauVar10 + 4;
        } while (uVar11 < (uVar14 & 0xffffffffffffffe0));
      }
      for (; uVar11 < uVar14; uVar11 = uVar11 + 1) {
        *(short *)(pCVar1 + uVar11 * 2) = (short)param_1[uVar11];
      }
    }
    if (uVar14 != 0) {
      do {
        if (*(short *)(pCVar1 + uVar9 * 2) == 0x25) {
          puVar12 = (undefined2 *)((longlong)&local_258 + uVar9 * 2 + lVar4 + 2);
          do {
            switch(*puVar12) {
            case 0x2a:
            case 0x2d:
            case 0x2e:
            case 0x30:
            case 0x31:
            case 0x32:
            case 0x33:
            case 0x34:
            case 0x35:
            case 0x36:
            case 0x37:
            case 0x38:
            case 0x39:
              uVar9 = uVar9 + 1;
              puVar12 = puVar12 + 1;
              break;
            default:
              goto switchD_143d1fec2_caseD_2b;
            case 0x43:
              *puVar12 = 99;
              goto switchD_143d1fec2_caseD_2b;
            case 0x53:
              *puVar12 = 0x73;
              goto switchD_143d1fec2_caseD_2b;
            case 99:
              *puVar12 = 0x43;
              goto switchD_143d1fec2_caseD_2b;
            case 0x73:
              *puVar12 = 0x53;
              goto switchD_143d1fec2_caseD_2b;
            }
          } while( true );
        }
switchD_143d1fec2_caseD_2b:
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar14);
    }
  }
  *(undefined8 *)(auStackY_2a8 + lVar4 + -8) = 0x143d1fef7;
  puVar8 = (ulonglong *)__local_stdio_printf_options();
  *(undefined8 **)((longlong)local_278 + lVar4 + -8) = &local_res10;
  *(undefined8 *)((longlong)local_270 + lVar4 + -0x18) = 0;
  uVar9 = *puVar8;
  *(undefined8 *)(auStackY_2a8 + lVar4 + -8) = 0x143d1ff1b;
  __stdio_common_vswprintf(uVar9 | 1,local_248);
  local_4a = 0;
  *(undefined8 *)(auStackY_2a8 + lVar4 + -8) = 0x143d1ff27;
  iVar6 = OPENSSL_isservice();
  if (iVar6 < 1) {
    *(undefined8 *)(auStackY_2a8 + lVar4 + -8) = 0x143d1ff9e;
    MessageBoxW((HWND)0x0,local_248,L"OpenSSL: FATAL",0x10);
  }
  else {
    *(undefined8 *)(auStackY_2a8 + lVar4 + -8) = 0x143d1ff3a;
    pvVar7 = RegisterEventSourceW((LPCWSTR)0x0,L"OpenSSL");
    puVar13 = auStackY_2a8 + lVar4;
    if (pvVar7 != (HANDLE)0x0) {
      *(undefined8 *)((longlong)local_270 + lVar4 + 8) = 0;
      local_258 = local_248;
      *(undefined8 **)((longlong)local_270 + lVar4) = &local_258;
      *(undefined4 *)((longlong)local_278 + lVar4) = 0;
      *(undefined2 *)((longlong)local_278 + lVar4 + -8) = 1;
      *(undefined8 *)((longlong)local_270 + lVar4 + -0x18) = 0;
      *(undefined8 *)(auStackY_2a8 + lVar4 + -8) = 0x143d1ff7c;
      ReportEventW(pvVar7,1,0,0,*(PSID *)((longlong)local_270 + lVar4 + -0x18),
                   *(WORD *)((longlong)local_278 + lVar4 + -8),
                   *(DWORD *)((longlong)local_278 + lVar4),
                   *(LPCWSTR **)((longlong)local_270 + lVar4),
                   *(LPVOID *)((longlong)local_270 + lVar4 + 8));
      *(undefined8 *)(auStackY_2a8 + lVar4 + -8) = 0x143d1ff85;
      DeregisterEventSource(pvVar7);
      puVar13 = auStackY_2a8 + lVar4;
    }
  }
LAB_143d1ff9e:
  *(undefined8 *)(puVar13 + -8) = 0x143d1ffad;
  return;
}



// FUNCTION 143d20030 _vsnprintf body=113 status=ok
// SIG int _vsnprintf(char * _Dest, size_t _Count, char * _Format, va_list _Args)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int __cdecl _vsnprintf(char *_Dest,size_t _Count,char *_Format,va_list _Args)

{
  int iVar1;
  ulonglong *puVar2;
  
  puVar2 = (ulonglong *)__local_stdio_printf_options();
  iVar1 = __stdio_common_vsprintf(*puVar2 | 1,_Dest,_Count,_Format,0,_Args);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



// FUNCTION 143d200b0 ossl_strtouint64 body=182 status=ok
// SIG undefined ossl_strtouint64(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ossl_strtouint64(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  longlong lVar6;
  
  lVar6 = 0;
  uVar5 = 10;
  puVar4 = param_1;
  if (*param_1 == 0x30) {
    uVar5 = 8;
    puVar4 = param_1 + 1;
    iVar2 = ossl_tolower(param_1[1]);
    if (iVar2 == 0x78) {
      uVar5 = 0x10;
      puVar4 = param_1 + 2;
    }
  }
  while( true ) {
    uVar1 = *puVar4;
    iVar2 = ossl_ctype_check(uVar1,4);
    if (iVar2 == 0) {
      iVar2 = ossl_ctype_check(uVar1,0x10);
      if (iVar2 == 0) {
        uVar3 = 0x10;
      }
      else {
        iVar2 = ossl_tolower(uVar1);
        uVar3 = iVar2 - 0x57;
      }
    }
    else {
      uVar3 = uVar1 - 0x30;
    }
    puVar4 = puVar4 + 1;
    if (uVar5 <= uVar3) break;
    lVar6 = (ulonglong)uVar3 + (ulonglong)uVar5 * lVar6;
  }
  return lVar6;
}



// FUNCTION 143d20170 drbg_bytes body=181 status=ok
// SIG undefined drbg_bytes(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 drbg_bytes(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  iVar1 = CRYPTO_THREAD_run_once(&DAT_146bcb5a0,do_rand_drbg_init_ossl_);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = DAT_146bcb5a8;
  }
  if (iVar2 != 0) {
    lVar3 = CRYPTO_THREAD_get_local(&DAT_146bcb598);
    if (lVar3 != 0) {
LAB_143d201f6:
      uVar4 = RAND_DRBG_bytes(lVar3,param_1,(longlong)param_2);
      return uVar4;
    }
    iVar2 = ossl_init_thread_start(4);
    if (iVar2 != 0) {
      lVar3 = drbg_setup(DAT_146bcb590);
      CRYPTO_THREAD_set_local(&DAT_146bcb598,lVar3);
      if (lVar3 != 0) goto LAB_143d201f6;
    }
  }
  return 0;
}



// FUNCTION 143d20230 drbg_add body=256 status=ok
// SIG undefined drbg_add(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 drbg_add(undefined8 param_1,int param_2,double param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  double dVar6;
  
  iVar2 = CRYPTO_THREAD_run_once(&DAT_146bcb5a0,do_rand_drbg_init_ossl_);
  lVar1 = DAT_146bcb590;
  iVar5 = 0;
  if (iVar2 != 0) {
    iVar5 = DAT_146bcb5a8;
  }
  if ((((iVar5 != 0) && (DAT_146bcb590 != 0)) && (-1 < param_2)) && (0.0 <= param_3)) {
    dVar6 = (double)*(longlong *)(DAT_146bcb590 + 0x40);
    if (*(longlong *)(DAT_146bcb590 + 0x40) < 0) {
      dVar6 = dVar6 + 1.8446744073709552e+19;
    }
    if (param_3 <= dVar6) {
      rand_drbg_unlock(DAT_146bcb590);
      param_3 = param_3 * 8.0;
      lVar4 = 0;
      if ((9.223372036854776e+18 <= param_3) &&
         (param_3 = param_3 - 9.223372036854776e+18, param_3 < 9.223372036854776e+18)) {
        lVar4 = -0x8000000000000000;
      }
      uVar3 = rand_drbg_restart(lVar1,param_1,param_2,(longlong)param_3 + lVar4);
      rand_drbg_unlock(lVar1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 143d20330 drbg_seed body=261 status=ok
// SIG undefined drbg_seed(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 drbg_seed(undefined8 param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  
  dVar7 = (double)param_2;
  iVar2 = CRYPTO_THREAD_run_once(&DAT_146bcb5a0,do_rand_drbg_init_ossl_);
  lVar1 = DAT_146bcb590;
  iVar5 = 0;
  if (iVar2 != 0) {
    iVar5 = DAT_146bcb5a8;
  }
  if ((((iVar5 != 0) && (DAT_146bcb590 != 0)) && (-1 < param_2)) && (0.0 <= dVar7)) {
    dVar6 = (double)*(longlong *)(DAT_146bcb590 + 0x40);
    if (*(longlong *)(DAT_146bcb590 + 0x40) < 0) {
      dVar6 = dVar6 + 1.8446744073709552e+19;
    }
    if (dVar7 <= dVar6) {
      rand_drbg_unlock(DAT_146bcb590);
      dVar7 = dVar7 * 8.0;
      lVar4 = 0;
      if ((9.223372036854776e+18 <= dVar7) &&
         (dVar7 = dVar7 - 9.223372036854776e+18, dVar7 < 9.223372036854776e+18)) {
        lVar4 = -0x8000000000000000;
      }
      uVar3 = rand_drbg_restart(lVar1,param_1,param_2,(longlong)dVar7 + lVar4);
      rand_drbg_unlock(lVar1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 143d20440 drbg_status body=130 status=ok
// SIG undefined drbg_status(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool drbg_status(void)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar3 = CRYPTO_THREAD_run_once(&DAT_146bcb5a0,do_rand_drbg_init_ossl_);
  plVar2 = DAT_146bcb590;
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = DAT_146bcb5a8;
  }
  if ((iVar4 != 0) && (DAT_146bcb590 != (longlong *)0x0)) {
    lVar5 = 0;
    if (*DAT_146bcb590 != 0) {
      CRYPTO_THREAD_read_lock();
      lVar5 = *plVar2;
    }
    lVar1 = plVar2[0x12];
    if (lVar5 != 0) {
      CRYPTO_THREAD_unlock();
    }
    return (int)lVar1 == 1;
  }
  return false;
}



// FUNCTION 143d204d0 RAND_DRBG_bytes body=564 status=ok
// SIG undefined RAND_DRBG_bytes(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 RAND_DRBG_bytes(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  __time64_t _Var4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 local_res8;
  ulonglong local_res18;
  ulonglong in_stack_ffffffffffffffb8;
  undefined4 uVar9;
  
  uVar7 = 0;
  local_res8 = 0;
  uVar3 = rand_drbg_get_additional_data(&local_res8,*(undefined8 *)(param_1 + 0x60));
  do {
    uVar6 = local_res8;
    uVar9 = (undefined4)(in_stack_ffffffffffffffb8 >> 0x20);
    if (param_3 == 0) {
      uVar7 = 1;
LAB_143d206bb:
      if (uVar3 != 0) {
        CRYPTO_secure_clear_free(local_res8,uVar3,"crypto\\rand\\drbg_lib.c",0x29a);
      }
      return uVar7;
    }
    uVar5 = *(ulonglong *)(param_1 + 0x30);
    if (param_3 <= *(ulonglong *)(param_1 + 0x30)) {
      uVar5 = param_3;
    }
    if (*(int *)(param_1 + 0x90) != 1) {
      rand_drbg_restart(param_1,0,0,0);
      if (*(int *)(param_1 + 0x90) == 2) {
        uVar2 = 0x243;
        uVar6 = 0x72;
      }
      else {
        if (*(int *)(param_1 + 0x90) != 0) goto LAB_143d2057e;
        uVar2 = 0x247;
        uVar6 = 0x73;
      }
LAB_143d2069e:
      ERR_put_error(0x24,0x6b,uVar6,"crypto\\rand\\drbg_lib.c",CONCAT44(uVar9,uVar2));
      goto LAB_143d206bb;
    }
LAB_143d2057e:
    if (*(ulonglong *)(param_1 + 0x30) < uVar5) {
      uVar2 = 0x24d;
      uVar6 = 0x75;
      goto LAB_143d2069e;
    }
    if (*(ulonglong *)(param_1 + 0x60) < uVar3) {
      uVar2 = 0x251;
      uVar6 = 0x66;
      goto LAB_143d2069e;
    }
    bVar8 = *(int *)(param_1 + 0x18) != DAT_146bcd590;
    if (bVar8) {
      *(int *)(param_1 + 0x18) = DAT_146bcd590;
    }
    if ((*(uint *)(param_1 + 0x6c) != 0) && (*(uint *)(param_1 + 0x6c) <= *(uint *)(param_1 + 0x68))
       ) {
      bVar8 = true;
    }
    if (0 < *(longlong *)(param_1 + 0x78)) {
      _Var4 = _time64((__time64_t *)0x0);
      if ((_Var4 < *(longlong *)(param_1 + 0x70)) ||
         (*(longlong *)(param_1 + 0x78) <= _Var4 - *(longlong *)(param_1 + 0x70))) {
        bVar8 = true;
      }
    }
    if ((((*(int *)(param_1 + 0x80) != 0) && (*(longlong *)(param_1 + 8) != 0)) &&
        (*(int *)(param_1 + 0x80) != *(int *)(*(longlong *)(param_1 + 8) + 0x80))) ||
       (local_res18 = uVar3, bVar8)) {
      iVar1 = RAND_DRBG_reseed(param_1,uVar6,uVar3,0);
      if (iVar1 == 0) {
        uVar2 = 0x26b;
        uVar6 = 0x76;
        goto LAB_143d2069e;
      }
      local_res18 = 0;
    }
    iVar1 = (**(code **)(*(longlong *)(param_1 + 0x138) + 0x10))(param_1);
    uVar9 = (undefined4)(local_res18 >> 0x20);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x90) = 2;
      uVar2 = 0x274;
      uVar6 = 0x70;
      goto LAB_143d2069e;
    }
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
    param_3 = param_3 - uVar5;
    in_stack_ffffffffffffffb8 = local_res18;
  } while( true );
}



// FUNCTION 143d20710 RAND_DRBG_free body=117 status=ok
// SIG undefined RAND_DRBG_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RAND_DRBG_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if (param_1[0x27] != 0) {
      (**(code **)(param_1[0x27] + 0x18))();
    }
    CRYPTO_THREAD_lock_free(*param_1);
    CRYPTO_free_ex_data(0xf,param_1,param_1 + 0x13);
    if (*(int *)(param_1 + 2) != 0) {
      CRYPTO_secure_clear_free();
      return;
    }
    CRYPTO_clear_free(param_1,0x160,"crypto\\rand\\drbg_lib.c",0x106);
  }
  return;
}



// FUNCTION 143d20790 RAND_DRBG_generate body=594 status=ok
// SIG undefined RAND_DRBG_generate(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
RAND_DRBG_generate(longlong param_1,undefined8 param_2,ulonglong param_3,int param_4,
                  ulonglong param_5,ulonglong param_6)

{
  int iVar1;
  __time64_t _Var2;
  bool bVar3;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar5 = 0x143d207a7;
  if (*(int *)(param_1 + 0x90) != 1) {
    rand_drbg_restart(param_1,0,0,0);
    if (*(int *)(param_1 + 0x90) == 2) {
      ERR_put_error(0x24,0x6b,0x72,"crypto\\rand\\drbg_lib.c",CONCAT44(uVar4,0x243));
      return 0;
    }
    if (*(int *)(param_1 + 0x90) == 0) {
      ERR_put_error(0x24,0x6b,0x73,"crypto\\rand\\drbg_lib.c",CONCAT44(uVar4,0x247));
      return 0;
    }
  }
  if (param_3 <= *(ulonglong *)(param_1 + 0x30)) {
    if (*(ulonglong *)(param_1 + 0x60) < param_6) {
      ERR_put_error(0x24,0x6b,0x66,"crypto\\rand\\drbg_lib.c",CONCAT44(uVar4,0x251));
      uVar5 = 0;
    }
    else {
      bVar3 = *(int *)(param_1 + 0x18) != DAT_146bcd590;
      if (bVar3) {
        *(int *)(param_1 + 0x18) = DAT_146bcd590;
      }
      if ((*(uint *)(param_1 + 0x6c) != 0) &&
         (*(uint *)(param_1 + 0x6c) <= *(uint *)(param_1 + 0x68))) {
        bVar3 = true;
      }
      if (0 < *(longlong *)(param_1 + 0x78)) {
        _Var2 = _time64((__time64_t *)0x0);
        if ((_Var2 < *(longlong *)(param_1 + 0x70)) ||
           (*(longlong *)(param_1 + 0x78) <= _Var2 - *(longlong *)(param_1 + 0x70))) {
          bVar3 = true;
        }
      }
      if (((((*(int *)(param_1 + 0x80) == 0) || (*(longlong *)(param_1 + 8) == 0)) ||
           (*(int *)(param_1 + 0x80) == *(int *)(*(longlong *)(param_1 + 8) + 0x80))) &&
          ((!bVar3 && (param_4 == 0)))) ||
         (iVar1 = RAND_DRBG_reseed(param_1,param_5,param_6,param_4), param_5 = 0, param_6 = 0,
         iVar1 != 0)) {
        iVar1 = (**(code **)(*(longlong *)(param_1 + 0x138) + 0x10))
                          (param_1,param_2,param_3,param_5,param_6,uVar5);
        if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 0x90) = 2;
          ERR_put_error(0x24,0x6b,0x70,"crypto\\rand\\drbg_lib.c",0x274);
          uVar5 = 0;
        }
        else {
          *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
          uVar5 = 1;
        }
      }
      else {
        ERR_put_error(0x24,0x6b,0x76,"crypto\\rand\\drbg_lib.c",CONCAT44(uVar4,0x26b));
        uVar5 = 0;
      }
    }
    return uVar5;
  }
  ERR_put_error(0x24,0x6b,0x75,"crypto\\rand\\drbg_lib.c",CONCAT44(uVar4,0x24d));
  return 0;
}



// FUNCTION 143d209f0 RAND_DRBG_get0_private body=128 status=ok
// SIG undefined RAND_DRBG_get0_private(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong RAND_DRBG_get0_private(void)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = CRYPTO_THREAD_run_once(&DAT_146bcb5a0,do_rand_drbg_init_ossl_);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = DAT_146bcb5a8;
  }
  if (iVar2 == 0) {
    return 0;
  }
  lVar3 = CRYPTO_THREAD_get_local(&DAT_146bcb59c);
  if (lVar3 == 0) {
    iVar2 = ossl_init_thread_start(4);
    if (iVar2 == 0) {
      return 0;
    }
    lVar3 = drbg_setup(DAT_146bcb590);
    CRYPTO_THREAD_set_local(&DAT_146bcb59c,lVar3);
  }
  return lVar3;
}



// FUNCTION 143d20a70 RAND_DRBG_instantiate body=712 status=ok
// SIG undefined RAND_DRBG_instantiate(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool RAND_DRBG_instantiate(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  __time64_t _Var3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong local_res8;
  longlong local_res18 [2];
  undefined8 uVar9;
  ulonglong in_stack_ffffffffffffffb0;
  undefined8 uVar10;
  
  uVar10 = 0x143d20a8a;
  uVar2 = 0;
  lVar4 = (longlong)*(int *)(param_1 + 0x28);
  local_res18[0] = 0;
  local_res8 = 0;
  uVar8 = 0;
  uVar6 = 0;
  uVar5 = *(ulonglong *)(param_1 + 0x38);
  uVar7 = *(ulonglong *)(param_1 + 0x40);
  if (*(ulonglong *)(param_1 + 0x58) < param_3) {
    uVar9 = 0x11c;
    uVar10 = 0x74;
    uVar6 = uVar2;
    uVar8 = uVar2;
  }
  else if (*(longlong *)(param_1 + 0x138) == 0) {
    uVar9 = 0x122;
    uVar10 = 0x80;
  }
  else if (*(int *)(param_1 + 0x90) == 0) {
    *(undefined4 *)(param_1 + 0x90) = 2;
    if ((*(longlong *)(param_1 + 0x48) != 0) && (*(longlong *)(param_1 + 0x150) == 0)) {
      uVar5 = uVar5 + *(longlong *)(param_1 + 0x48);
      lVar4 = lVar4 + *(int *)(param_1 + 0x28) / 2;
      uVar7 = uVar7 + *(longlong *)(param_1 + 0x50);
    }
    uVar6 = uVar2;
    if (*(code **)(param_1 + 0x140) != (code *)0x0) {
      uVar6 = (**(code **)(param_1 + 0x140))
                        (param_1,&local_res8,lVar4,uVar5,uVar7,
                         in_stack_ffffffffffffffb0 & 0xffffffff00000000);
    }
    if ((uVar6 < uVar5) || (uVar7 < uVar6)) {
      uVar9 = 0x140;
      uVar10 = 0x6e;
    }
    else if (((*(longlong *)(param_1 + 0x48) == 0) ||
             (uVar2 = uVar8, *(code **)(param_1 + 0x150) == (code *)0x0)) ||
            ((uVar2 = (**(code **)(param_1 + 0x150))
                                (param_1,local_res18,*(int *)(param_1 + 0x28) / 2,
                                 *(longlong *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50)),
             *(ulonglong *)(param_1 + 0x48) <= uVar2 && (uVar2 <= *(ulonglong *)(param_1 + 0x50)))))
    {
      iVar1 = (*(code *)**(undefined8 **)(param_1 + 0x138))
                        (param_1,local_res8,uVar6,local_res18[0],uVar2,param_2,param_3,uVar10);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x90) = 1;
        *(undefined4 *)(param_1 + 0x68) = 0;
        _Var3 = _time64((__time64_t *)0x0);
        *(__time64_t *)(param_1 + 0x70) = _Var3;
        if (*(int *)(param_1 + 0x80) != 0) {
          if (*(longlong *)(param_1 + 8) == 0) {
            *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
          }
          else {
            *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x80);
          }
        }
        goto LAB_143d20c88;
      }
      uVar9 = 0x14f;
      uVar10 = 0x6c;
      uVar8 = uVar2;
    }
    else {
      uVar9 = 0x148;
      uVar10 = 0x6f;
      uVar8 = uVar2;
    }
  }
  else {
    uVar9 = 0x129;
    uVar10 = 0x67;
    if (*(int *)(param_1 + 0x90) == 2) {
      uVar10 = 0x72;
    }
  }
  ERR_put_error(0x24,0x6c,uVar10,"crypto\\rand\\drbg_lib.c",uVar9);
  uVar2 = uVar8;
LAB_143d20c88:
  if ((local_res8 != 0) && (*(code **)(param_1 + 0x148) != (code *)0x0)) {
    (**(code **)(param_1 + 0x148))(param_1,local_res8,uVar6);
  }
  if ((local_res18[0] != 0) && (*(code **)(param_1 + 0x158) != (code *)0x0)) {
    (**(code **)(param_1 + 0x158))(param_1,local_res18[0],uVar2);
  }
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 != 0) {
    if (*(int *)(param_1 + 0x90) == 1) {
      ERR_put_error(0x24,0x6c,0x7f,"crypto\\rand\\drbg_lib.c",0x165);
      lVar4 = *(longlong *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x90) = 2;
    }
    rand_pool_free(lVar4);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return *(int *)(param_1 + 0x90) == 1;
}



// FUNCTION 143d20d40 RAND_DRBG_reseed body=468 status=ok
// SIG undefined RAND_DRBG_reseed(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool RAND_DRBG_reseed(longlong param_1,longlong param_2,ulonglong param_3,undefined4 param_4)

{
  int iVar1;
  ulonglong uVar2;
  __time64_t _Var3;
  ulonglong uVar4;
  bool bVar5;
  longlong local_res8;
  undefined8 uVar6;
  
  uVar6 = 0x143d20d58;
  uVar2 = 0;
  local_res8 = 0;
  if (*(int *)(param_1 + 0x90) == 2) {
    ERR_put_error(0x24,0x6e,0x72,"crypto\\rand\\drbg_lib.c",0x196,0x143d20d58);
    bVar5 = false;
  }
  else if (*(int *)(param_1 + 0x90) == 0) {
    ERR_put_error(0x24,0x6e,0x73,"crypto\\rand\\drbg_lib.c",0x19a,0x143d20d58);
    bVar5 = false;
  }
  else {
    uVar4 = uVar2;
    if ((param_2 == 0) || (uVar4 = param_3, param_3 <= *(ulonglong *)(param_1 + 0x60))) {
      *(undefined4 *)(param_1 + 0x90) = 2;
      if (*(code **)(param_1 + 0x140) != (code *)0x0) {
        uVar6 = CONCAT44(1,param_4);
        uVar2 = (**(code **)(param_1 + 0x140))
                          (param_1,&local_res8,*(undefined4 *)(param_1 + 0x28),
                           *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),uVar6);
      }
      if ((uVar2 < *(ulonglong *)(param_1 + 0x38)) || (*(ulonglong *)(param_1 + 0x40) < uVar2)) {
        ERR_put_error(0x24,0x6e,0x6e,"crypto\\rand\\drbg_lib.c",0x1ad,uVar6);
      }
      else {
        iVar1 = (**(code **)(*(longlong *)(param_1 + 0x138) + 8))
                          (param_1,local_res8,uVar2,param_2,uVar4);
        if (iVar1 != 0) {
          *(undefined4 *)(param_1 + 0x90) = 1;
          *(undefined4 *)(param_1 + 0x68) = 0;
          _Var3 = _time64((__time64_t *)0x0);
          *(__time64_t *)(param_1 + 0x70) = _Var3;
          if (*(int *)(param_1 + 0x80) != 0) {
            if (*(longlong *)(param_1 + 8) == 0) {
              *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
            }
            else {
              *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x80);
            }
          }
        }
      }
      if ((local_res8 != 0) && (*(code **)(param_1 + 0x148) != (code *)0x0)) {
        (**(code **)(param_1 + 0x148))(param_1,local_res8,uVar2);
      }
      bVar5 = *(int *)(param_1 + 0x90) == 1;
    }
    else {
      ERR_put_error(0x24,0x6e,0x66,"crypto\\rand\\drbg_lib.c",0x1a1,0x143d20d58);
      bVar5 = false;
    }
  }
  return bVar5;
}



// FUNCTION 143d20f20 RAND_DRBG_set body=175 status=ok
// SIG undefined RAND_DRBG_set(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int RAND_DRBG_set(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 == 0) && (param_3 == 0)) {
    param_2 = DAT_1468372a0;
    param_3 = DAT_146bcb5a4;
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(short *)(param_1 + 0x1c) = (short)param_3;
  *(int *)(param_1 + 0x14) = param_2;
  if (param_2 != 0) {
    if (param_2 - 0x388U < 3) {
      iVar1 = drbg_ctr_init();
      if (iVar1 == 0) {
        ERR_put_error(0x24,0x68,0x6b,"crypto\\rand\\drbg_lib.c",0x7f);
      }
      return iVar1;
    }
    ERR_put_error(0x24,0x68,0x78,"crypto\\rand\\drbg_lib.c",0x72);
    return 0;
  }
  return 1;
}



// FUNCTION 143d20fd0 RAND_OpenSSL body=8 status=ok
// SIG undefined RAND_OpenSSL(void)

undefined ** RAND_OpenSSL(void)

{
  return &PTR_drbg_seed_146837270;
}



// FUNCTION 143d20fe0 do_rand_drbg_init_ossl_ body=135 status=ok
// SIG undefined do_rand_drbg_init_ossl_(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void do_rand_drbg_init_ossl_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = OPENSSL_init_crypto(0,0,param_3,param_4,0x143d20fea);
  if (iVar1 != 0) {
    iVar1 = CRYPTO_THREAD_init_local(&DAT_146bcb59c,0);
    if (iVar1 != 0) {
      iVar1 = CRYPTO_THREAD_init_local(&DAT_146bcb598,0);
      if (iVar1 != 0) {
        DAT_146bcb590 = drbg_setup(0);
        if (DAT_146bcb590 != 0) {
          DAT_146bcb5a8 = 1;
          return;
        }
        CRYPTO_THREAD_cleanup_local(&DAT_146bcb598);
      }
      CRYPTO_THREAD_cleanup_local(&DAT_146bcb59c);
    }
  }
  DAT_146bcb5a8 = 0;
  return;
}



// FUNCTION 143d21070 drbg_delete_thread_state body=94 status=ok
// SIG undefined drbg_delete_thread_state(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void drbg_delete_thread_state(void)

{
  undefined8 uVar1;
  
  uVar1 = CRYPTO_THREAD_get_local(&DAT_146bcb598);
  CRYPTO_THREAD_set_local(&DAT_146bcb598,0);
  RAND_DRBG_free(uVar1);
  uVar1 = CRYPTO_THREAD_get_local(&DAT_146bcb59c);
  CRYPTO_THREAD_set_local(&DAT_146bcb59c,0);
  RAND_DRBG_free(uVar1);
  return;
}



// FUNCTION 143d210d0 drbg_setup body=228 status=ok
// SIG undefined drbg_setup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * drbg_setup(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143d210e0;
  plVar2 = (longlong *)rand_drbg_new(1,DAT_1468372a0,DAT_146bcb5a4,param_1);
  if (plVar2 != (longlong *)0x0) {
    if (param_1 != 0) {
LAB_143d21187:
      *(undefined4 *)(plVar2 + 0x10) = 1;
      RAND_DRBG_instantiate(plVar2,"OpenSSL NIST SP 800-90A DRBG",0x1c);
      return plVar2;
    }
    if ((int)plVar2[0x12] == 0) {
      if (*plVar2 != 0) goto LAB_143d21187;
      if (((longlong *)plVar2[1] == (longlong *)0x0) || (*(longlong *)plVar2[1] != 0)) {
        lVar3 = CRYPTO_THREAD_lock_new();
        *plVar2 = lVar3;
        if (lVar3 != 0) goto LAB_143d21187;
        uVar1 = 0x330;
        uVar4 = 0x7e;
      }
      else {
        uVar1 = 0x329;
        uVar4 = 0x82;
      }
    }
    else {
      uVar1 = 0x322;
      uVar4 = 0x81;
    }
    ERR_put_error(0x24,0x77,uVar4,"crypto\\rand\\drbg_lib.c",uVar1,uVar5);
    RAND_DRBG_free(plVar2);
  }
  return (longlong *)0x0;
}



// FUNCTION 143d211c0 rand_drbg_cleanup_int body=74 status=ok
// SIG undefined rand_drbg_cleanup_int(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void rand_drbg_cleanup_int(void)

{
  if (DAT_146bcb590 != 0) {
    RAND_DRBG_free();
    DAT_146bcb590 = 0;
    CRYPTO_THREAD_cleanup_local(&DAT_146bcb59c);
    CRYPTO_THREAD_cleanup_local(&DAT_146bcb598);
    return;
  }
  return;
}



// FUNCTION 143d21210 rand_drbg_unlock body=40 status=ok
// SIG undefined rand_drbg_unlock(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 rand_drbg_unlock(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = CRYPTO_THREAD_read_lock();
    return uVar1;
  }
  return 1;
}



// FUNCTION 143d21240 rand_drbg_new body=420 status=ok
// SIG undefined rand_drbg_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong rand_drbg_new(int param_1,undefined4 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143d21260;
  if (param_1 == 0) {
    lVar4 = CRYPTO_zalloc(0x160,"crypto\\rand\\drbg_lib.c",0xaf);
  }
  else {
    lVar4 = CRYPTO_secure_zalloc();
  }
  if (lVar4 == 0) {
    ERR_put_error(0x24,0x6d,0x41,"crypto\\rand\\drbg_lib.c",0xb2,uVar6);
  }
  else {
    if ((param_1 == 0) || (pwVar5 = AK::MemoryMgr::GetPoolName((long)lVar4), (int)pwVar5 == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    *(undefined4 *)(lVar4 + 0x10) = uVar2;
    *(undefined4 *)(lVar4 + 0x18) = DAT_146bcd590;
    *(longlong **)(lVar4 + 8) = param_4;
    if (param_4 == (longlong *)0x0) {
      *(code **)(lVar4 + 0x150) = rand_drbg_get_nonce;
      *(code **)(lVar4 + 0x158) = rand_drbg_cleanup_nonce;
      *(undefined4 *)(lVar4 + 0x6c) = DAT_1468372a4;
      uVar6 = DAT_1468372b0;
    }
    else {
      *(undefined4 *)(lVar4 + 0x6c) = DAT_1468372a8;
      uVar6 = DAT_1468372b8;
    }
    *(undefined8 *)(lVar4 + 0x78) = uVar6;
    *(code **)(lVar4 + 0x140) = rand_drbg_get_entropy;
    *(code **)(lVar4 + 0x148) = rand_drbg_cleanup_entropy;
    iVar3 = RAND_DRBG_set(lVar4,param_2,param_3);
    if (iVar3 != 0) {
      if (param_4 == (longlong *)0x0) {
        return lVar4;
      }
      if (*param_4 != 0) {
        CRYPTO_THREAD_read_lock();
      }
      iVar3 = *(int *)(lVar4 + 0x28);
      lVar1 = param_4[5];
      rand_drbg_unlock(param_4);
      if (iVar3 <= (int)lVar1) {
        return lVar4;
      }
      ERR_put_error(0x24,0x6d,0x83,"crypto\\rand\\drbg_lib.c",0xdb);
    }
    if (*(int *)(lVar4 + 0x10) == 0) {
      CRYPTO_free(lVar4,"crypto\\rand\\drbg_lib.c",0xe7);
    }
    else {
      CRYPTO_secure_free(lVar4,"crypto\\rand\\drbg_lib.c",0xe5);
    }
  }
  return 0;
}



// FUNCTION 143d213f0 rand_drbg_restart body=599 status=ok
// SIG undefined rand_drbg_restart(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool rand_drbg_restart(longlong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143d21412;
  bVar5 = false;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    ERR_put_error(0x24,0x66,0x44,"crypto\\rand\\drbg_lib.c",0x1df,0x143d21412);
    rand_pool_free(*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar3 = 0;
  uVar4 = 0;
  if (param_2 != 0) {
    if (param_4 != 0) {
      if (*(ulonglong *)(param_1 + 0x40) < param_3) {
        ERR_put_error(0x24,0x66,0x6a,"crypto\\rand\\drbg_lib.c",0x1e8,uVar6);
      }
      else {
        if (param_3 * 8 < param_4) {
          ERR_put_error(0x24,0x66,0x7c,"crypto\\rand\\drbg_lib.c",0x1ed,uVar6);
          return false;
        }
        lVar2 = rand_pool_new(param_4 & 0xffffffff,param_3,param_3);
        *(longlong *)(param_1 + 0x20) = lVar2;
        if (lVar2 != 0) {
          rand_pool_add(lVar2,param_2,param_3,param_4);
          uVar3 = 0;
          uVar4 = 0;
          goto LAB_143d2152b;
        }
      }
      return false;
    }
    uVar3 = param_3;
    uVar4 = param_2;
    if (*(ulonglong *)(param_1 + 0x60) < param_3) {
      ERR_put_error(0x24,0x66,0x66,"crypto\\rand\\drbg_lib.c",0x1fa,uVar6);
      return false;
    }
  }
LAB_143d2152b:
  if (*(int *)(param_1 + 0x90) == 2) {
    if (*(longlong *)(param_1 + 0x138) == 0) {
      ERR_put_error(0x24,0x76,0x80,"crypto\\rand\\drbg_lib.c",0x17b,uVar6);
    }
    else {
      (**(code **)(*(longlong *)(param_1 + 0x138) + 0x18))(param_1);
      RAND_DRBG_set(param_1,*(undefined4 *)(param_1 + 0x14),*(undefined2 *)(param_1 + 0x1c));
    }
  }
  iVar1 = *(int *)(param_1 + 0x90);
  if (iVar1 == 0) {
    RAND_DRBG_instantiate(param_1,"OpenSSL NIST SP 800-90A DRBG",0x1c);
    iVar1 = *(int *)(param_1 + 0x90);
    bVar5 = iVar1 == 1;
  }
  if (iVar1 == 1) {
    if (uVar4 == 0) {
      if (!bVar5) {
        RAND_DRBG_reseed(param_1,0,0,0);
      }
    }
    else {
      (**(code **)(*(longlong *)(param_1 + 0x138) + 8))(param_1,uVar4,uVar3,0,0);
    }
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    bVar5 = *(int *)(param_1 + 0x90) == 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x90) = 2;
    ERR_put_error(0x24,0x66,0x44,"crypto\\rand\\drbg_lib.c",0x225);
    rand_pool_free(*(undefined8 *)(param_1 + 0x20));
    bVar5 = false;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return bVar5;
}



// FUNCTION 143d21650 rand_drbg_unlock body=40 status=ok
// SIG undefined rand_drbg_unlock(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 rand_drbg_unlock(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = CRYPTO_THREAD_unlock();
    return uVar1;
  }
  return 1;
}



// FUNCTION 143d21680 openssl_add_all_ciphers_int body=3037 status=ok
// SIG undefined openssl_add_all_ciphers_int(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void openssl_add_all_ciphers_int(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143d003c0();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d003b0();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d003d0();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d01080();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d01030();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d01020();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d01040();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d003f0();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d01090();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d01050();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d71450();
  EVP_add_cipher(uVar1);
  OBJ_NAME_add(&DAT_145d7ef40,0x8002,"DESX-CBC");
  OBJ_NAME_add(&DAT_145d7ef48,0x8002,"DESX-CBC");
  uVar1 = FUN_143d003a0();
  EVP_add_cipher(uVar1);
  OBJ_NAME_add(&DAT_145d7ef50,0x8002,"DES-CBC");
  OBJ_NAME_add(&DAT_145d7ef54,0x8002,"DES-CBC");
  uVar1 = FUN_143d01070();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d01010();
  EVP_add_cipher(uVar1);
  OBJ_NAME_add(&DAT_145d7ef58,0x8002,"DES-EDE3-CBC");
  OBJ_NAME_add(&DAT_145d7ef60,0x8002,"DES-EDE3-CBC");
  uVar1 = FUN_143d003e0();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d00ff0();
  EVP_add_cipher(uVar1);
  OBJ_NAME_add("DES-EDE-ECB",0x8002,"DES-EDE");
  OBJ_NAME_add("des-ede-ecb",0x8002,"DES-EDE");
  uVar1 = FUN_143d01000();
  EVP_add_cipher(uVar1);
  OBJ_NAME_add("DES-EDE3-ECB",0x8002,"DES-EDE3");
  OBJ_NAME_add("des-ede3-ecb",0x8002,"DES-EDE3");
  uVar1 = FUN_143d01060();
  EVP_add_cipher(uVar1);
  OBJ_NAME_add("des3-wrap",0x8002,"id-smime-alg-CMS3DESwrap");
  uVar1 = FUN_143d013a0();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d013b0();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d01b60();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d02020();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d02010();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d02030();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d02000();
  EVP_add_cipher(uVar1);
  OBJ_NAME_add(&DAT_145d4a5e4,0x8002,"IDEA-CBC");
  OBJ_NAME_add(&DAT_145d7efb4,0x8002,"IDEA-CBC");
  uVar1 = FUN_143d0c020();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0c010();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0c030();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0c000();
  EVP_add_cipher(uVar1);
  OBJ_NAME_add(&DAT_145d4a5ec,0x8002,"SEED-CBC");
  OBJ_NAME_add(&DAT_145d7efbc,0x8002,"SEED-CBC");
  uVar1 = FUN_143d722d0();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d722a0();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d722b0();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d722e0();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d722c0();
  EVP_add_cipher(uVar1);
  OBJ_NAME_add(&DAT_145d7efc4,0x8002,"SM4-CBC");
  OBJ_NAME_add(&DAT_145d7efc8,0x8002,"SM4-CBC");
  uVar1 = FUN_143d02750();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d02740();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d02760();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d02730();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d02710();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d02720();
  EVP_add_cipher(uVar1);
  OBJ_NAME_add(&DAT_145d4a5e0,0x8002,"RC2-CBC");
  OBJ_NAME_add(&DAT_145d7efcc,0x8002,"RC2-CBC");
  OBJ_NAME_add("rc2-128",0x8002,"RC2-CBC");
  OBJ_NAME_add("rc2-64",0x8002,"RC2-64-CBC");
  OBJ_NAME_add("rc2-40",0x8002,"RC2-40-CBC");
  uVar1 = FUN_143d718b0();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d718a0();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d718c0();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d71890();
  EVP_add_cipher(uVar1);
  OBJ_NAME_add(&DAT_145d7efe8,0x8002,"BF-CBC");
  OBJ_NAME_add(&DAT_145d7efec,0x8002,"BF-CBC");
  OBJ_NAME_add("blowfish",0x8002,"BF-CBC");
  uVar1 = FUN_143d71d20();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d71d10();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d71d30();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d71d00();
  EVP_add_cipher(uVar1);
  OBJ_NAME_add(&DAT_145d7effc,0x8002,"CAST5-CBC");
  OBJ_NAME_add(&DAT_145d7f004,0x8002,"CAST5-CBC");
  OBJ_NAME_add("CAST-cbc",0x8002,"CAST5-CBC");
  OBJ_NAME_add("cast-cbc",0x8002,"CAST5-CBC");
  uVar1 = EVP_aes_256_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_256_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_256_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_256_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_256_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_256_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_256_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_256_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_256_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_256_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_256_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d05380();
  EVP_add_cipher(uVar1);
  OBJ_NAME_add("aes128-wrap",0x8002,"id-aes128-wrap");
  uVar1 = FUN_143d05390();
  EVP_add_cipher(uVar1);
  OBJ_NAME_add("AES128",0x8002,"AES-128-CBC");
  OBJ_NAME_add("aes128",0x8002,"AES-128-CBC");
  uVar1 = EVP_aes_256_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_256_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_256_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_256_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_256_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_256_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_256_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_256_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_256_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_256_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d05500();
  EVP_add_cipher(uVar1);
  OBJ_NAME_add("aes192-wrap",0x8002,"id-aes192-wrap");
  uVar1 = FUN_143d05510();
  EVP_add_cipher(uVar1);
  OBJ_NAME_add("AES192",0x8002,"AES-192-CBC");
  OBJ_NAME_add("aes192",0x8002,"AES-192-CBC");
  uVar1 = EVP_aes_256_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_256_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_256_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_256_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_256_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_256_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_256_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_256_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_256_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_256_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_256_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d05660();
  EVP_add_cipher(uVar1);
  OBJ_NAME_add("aes256-wrap",0x8002,"id-aes256-wrap");
  uVar1 = FUN_143d05670();
  EVP_add_cipher(uVar1);
  OBJ_NAME_add("AES256",0x8002,"AES-256-CBC");
  OBJ_NAME_add("aes256",0x8002,"AES-256-CBC");
  uVar1 = FUN_143d068e0();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d06900();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d08070();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d080d0();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0a280();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0a220();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0a250();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0a240();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0a260();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0a270();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0a2a0();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0a290();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0a230();
  EVP_add_cipher(uVar1);
  OBJ_NAME_add("ARIA128",0x8002,"ARIA-128-CBC");
  OBJ_NAME_add("aria128",0x8002,"ARIA-128-CBC");
  uVar1 = FUN_143d0a310();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0a2b0();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0a2e0();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0a2d0();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0a2f0();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0a300();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0a330();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0a320();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0a2c0();
  EVP_add_cipher(uVar1);
  OBJ_NAME_add("ARIA192",0x8002,"ARIA-192-CBC");
  OBJ_NAME_add("aria192",0x8002,"ARIA-192-CBC");
  uVar1 = FUN_143d0a3a0();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0a340();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0a370();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0a360();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0a380();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0a390();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0a3c0();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0a3b0();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0a350();
  EVP_add_cipher(uVar1);
  OBJ_NAME_add("ARIA256",0x8002,"ARIA-256-CBC");
  OBJ_NAME_add("aria256",0x8002,"ARIA-256-CBC");
  uVar1 = FUN_143d0ace0();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0ac90();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0acb0();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0aca0();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0acc0();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0acf0();
  EVP_add_cipher(uVar1);
  OBJ_NAME_add("CAMELLIA128",0x8002,"CAMELLIA-128-CBC");
  OBJ_NAME_add("camellia128",0x8002,"CAMELLIA-128-CBC");
  uVar1 = FUN_143d0ad50();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0ad00();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0ad20();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0ad10();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0ad30();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0ad60();
  EVP_add_cipher(uVar1);
  OBJ_NAME_add("CAMELLIA192",0x8002,"CAMELLIA-192-CBC");
  OBJ_NAME_add("camellia192",0x8002,"CAMELLIA-192-CBC");
  uVar1 = FUN_143d0adc0();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0ad70();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0ad90();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0ad80();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0ada0();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0add0();
  EVP_add_cipher(uVar1);
  OBJ_NAME_add("CAMELLIA256",0x8002,"CAMELLIA-256-CBC");
  OBJ_NAME_add("camellia256",0x8002,"CAMELLIA-256-CBC");
  uVar1 = FUN_143d0acd0();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0ad40();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0adb0();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0b8e0();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0b8f0();
  EVP_add_cipher(uVar1);
  return;
}



// FUNCTION 143d22260 openssl_add_all_digests_int body=423 status=ok
// SIG undefined openssl_add_all_digests_int(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void openssl_add_all_digests_int(void)

{
  undefined8 uVar1;
  undefined8 in_R9;
  undefined8 uVar2;
  
  uVar2 = 0x143d2226a;
  uVar1 = FUN_143d72360();
  EVP_add_digest(uVar1);
  uVar1 = EVP_md5();
  EVP_add_digest(uVar1);
  OBJ_NAME_add("ssl3-md5",0x8001,&DAT_145d489c0,in_R9,uVar2);
  uVar1 = FUN_143cffbe0();
  EVP_add_digest(uVar1);
  uVar1 = EVP_sha1();
  EVP_add_digest(uVar1);
  OBJ_NAME_add("ssl3-sha1",0x8001,&DAT_145d489c4);
  OBJ_NAME_add("RSA-SHA1-2",0x8001,"RSA-SHA1");
  uVar1 = FUN_143d72850();
  EVP_add_digest(uVar1);
  uVar1 = FUN_143d728d0();
  EVP_add_digest(uVar1);
  OBJ_NAME_add("ripemd",0x8001,"RIPEMD160");
  OBJ_NAME_add("rmd160",0x8001,"RIPEMD160");
  uVar1 = FUN_143cf0fb0();
  EVP_add_digest(uVar1);
  uVar1 = EVP_sha256();
  EVP_add_digest(uVar1);
  uVar1 = FUN_143cf0fd0();
  EVP_add_digest(uVar1);
  uVar1 = FUN_143cf0fe0();
  EVP_add_digest(uVar1);
  uVar1 = FUN_143cf0ff0();
  EVP_add_digest(uVar1);
  uVar1 = FUN_143cf1000();
  EVP_add_digest(uVar1);
  uVar1 = FUN_143d72970();
  EVP_add_digest(uVar1);
  uVar1 = EVP_sm3();
  EVP_add_digest(uVar1);
  uVar1 = FUN_143d72400();
  EVP_add_digest(uVar1);
  uVar1 = FUN_143d724a0();
  EVP_add_digest(uVar1);
  uVar1 = FUN_143d726d0();
  EVP_add_digest(uVar1);
  uVar1 = FUN_143d726e0();
  EVP_add_digest(uVar1);
  uVar1 = FUN_143d726f0();
  EVP_add_digest(uVar1);
  uVar1 = FUN_143d72700();
  EVP_add_digest(uVar1);
  uVar1 = FUN_143d72710();
  EVP_add_digest(uVar1);
  uVar1 = EVP_shake256();
  EVP_add_digest(uVar1);
  return;
}



// FUNCTION 143d22410 openssl_config_int body=74 status=ok
// SIG undefined openssl_config_int(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void openssl_config_int(undefined8 param_1)

{
  if (DAT_146bcb5ac == 0) {
    OPENSSL_load_builtin_modules();
    ENGINE_load_builtin_engines();
    ERR_clear_error();
    CONF_modules_load_file(0,param_1,0x30);
    DAT_146bcb5ac = 1;
  }
  return;
}



// FUNCTION 143d22460 openssl_no_config_int body=11 status=ok
// SIG undefined openssl_no_config_int(void)

void openssl_no_config_int(void)

{
  DAT_146bcb5ac = 1;
  return;
}



// FUNCTION 143d22470 ENGINE_register_all_complete body=140 status=ok
// SIG undefined ENGINE_register_all_complete(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_register_all_complete(void)

{
  longlong lVar1;
  
  for (lVar1 = ENGINE_get_first(); lVar1 != 0; lVar1 = ENGINE_get_next(lVar1)) {
    if ((*(byte *)(lVar1 + 0x98) & 8) == 0) {
      ENGINE_register_ciphers(lVar1);
      ENGINE_register_digests(lVar1);
      ENGINE_register_RSA(lVar1);
      ENGINE_register_DSA(lVar1);
      ENGINE_register_DH(lVar1);
      ENGINE_register_EC(lVar1);
      ENGINE_register_RAND(lVar1);
      ENGINE_register_pkey_meths(lVar1);
      ENGINE_register_pkey_asn1_meths(lVar1);
    }
  }
  return 1;
}



// FUNCTION 143d22500 ENGINE_set_default_string body=336 status=ok
// SIG undefined ENGINE_set_default_string(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 ENGINE_set_default_string(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  uint local_res18 [4];
  
  local_res18[0] = 0;
  iVar2 = CONF_parse_list(param_2,0x2c,1,int_def_cb,local_res18,0x143d22515);
  uVar1 = local_res18[0];
  if (iVar2 == 0) {
    ERR_put_error(0x26,0xbd,0x96,"crypto\\engine\\eng_fat.c",0x56);
    ERR_add_error_data(2,&DAT_145d7f148,param_2);
    return 0;
  }
  cVar3 = (char)local_res18[0];
  if (((local_res18[0] & 0x40) != 0) && (iVar2 = ENGINE_set_default_ciphers(param_1), iVar2 == 0)) {
    return 0;
  }
  if ((cVar3 < '\0') && (iVar2 = ENGINE_set_default_digests(param_1), iVar2 == 0)) {
    return 0;
  }
  if (((uVar1 & 1) != 0) && (iVar2 = ENGINE_set_default_RSA(param_1), iVar2 == 0)) {
    return 0;
  }
  if (((uVar1 & 2) != 0) && (iVar2 = ENGINE_set_default_DSA(param_1), iVar2 == 0)) {
    return 0;
  }
  if (((uVar1 & 4) != 0) && (iVar2 = ENGINE_set_default_DH(param_1), iVar2 == 0)) {
    return 0;
  }
  if (((uVar1 >> 0xb & 1) != 0) && (iVar2 = ENGINE_set_default_EC(param_1), iVar2 == 0)) {
    return 0;
  }
  if (((uVar1 & 8) != 0) && (iVar2 = ENGINE_set_default_RAND(param_1), iVar2 == 0)) {
    return 0;
  }
  if (((uVar1 >> 9 & 1) != 0) && (iVar2 = ENGINE_set_default_pkey_meths(param_1), iVar2 == 0)) {
    return 0;
  }
  if (((uVar1 >> 10 & 1) != 0) && (iVar2 = ENGINE_set_default_pkey_asn1_meths(param_1), iVar2 == 0))
  {
    return 0;
  }
  return 1;
}



// FUNCTION 143d22650 int_def_cb body=592 status=ok
// SIG undefined int_def_cb(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 int_def_cb(char *param_1,int param_2,uint *param_3)

{
  int iVar1;
  size_t _MaxCount;
  
  if (param_1 != (char *)0x0) {
    _MaxCount = (size_t)param_2;
    iVar1 = strncmp(param_1,"ALL",_MaxCount);
    if (iVar1 == 0) {
      *param_3 = *param_3 | 0xffff;
      return 1;
    }
    iVar1 = strncmp(param_1,"RSA",_MaxCount);
    if (iVar1 == 0) {
      *param_3 = *param_3 | 1;
      return 1;
    }
    iVar1 = strncmp(param_1,"DSA",_MaxCount);
    if (iVar1 == 0) {
      *param_3 = *param_3 | 2;
      return 1;
    }
    iVar1 = strncmp(param_1,"DH",_MaxCount);
    if (iVar1 == 0) {
      *param_3 = *param_3 | 4;
      return 1;
    }
    iVar1 = strncmp(param_1,"EC",_MaxCount);
    if (iVar1 == 0) {
      *param_3 = *param_3 | 0x800;
      return 1;
    }
    iVar1 = strncmp(param_1,"RAND",_MaxCount);
    if (iVar1 == 0) {
      *param_3 = *param_3 | 8;
      return 1;
    }
    iVar1 = strncmp(param_1,"CIPHERS",_MaxCount);
    if (iVar1 == 0) {
      *param_3 = *param_3 | 0x40;
      return 1;
    }
    iVar1 = strncmp(param_1,"DIGESTS",_MaxCount);
    if (iVar1 == 0) {
      *param_3 = *param_3 | 0x80;
      return 1;
    }
    iVar1 = strncmp(param_1,"PKEY",_MaxCount);
    if (iVar1 == 0) {
      *param_3 = *param_3 | 0x600;
      return 1;
    }
    iVar1 = strncmp(param_1,"PKEY_CRYPTO",_MaxCount);
    if (iVar1 == 0) {
      *param_3 = *param_3 | 0x200;
      return 1;
    }
    iVar1 = strncmp(param_1,"PKEY_ASN1",_MaxCount);
    if (iVar1 == 0) {
      *param_3 = *param_3 | 0x400;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143d228a0 engine_load_openssl_int body=311 status=ok
// SIG undefined engine_load_openssl_int(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void engine_load_openssl_int(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = ENGINE_new();
  if (lVar2 == 0) {
    return;
  }
  iVar1 = ENGINE_set_id(lVar2,PTR_s_openssl_1468372c0);
  if (iVar1 != 0) {
    iVar1 = ENGINE_set_name(lVar2,PTR_s_Software_engine_support_1468372c8);
    if (iVar1 != 0) {
      iVar1 = ENGINE_set_destroy_function(lVar2,openssl_destroy);
      if (iVar1 != 0) {
        uVar3 = RSA_get_default_method();
        iVar1 = EVP_MD_meth_set_init(lVar2,uVar3);
        if (iVar1 != 0) {
          uVar3 = DSA_get_default_method();
          iVar1 = EVP_MD_meth_set_update(lVar2,uVar3);
          if (iVar1 != 0) {
            uVar3 = FUN_143d6a4d0();
            iVar1 = ENGINE_set_EC(lVar2,uVar3);
            if (iVar1 != 0) {
              uVar3 = DH_get_default_method();
              iVar1 = EVP_MD_meth_set_final(lVar2,uVar3);
              if (iVar1 != 0) {
                uVar3 = RAND_OpenSSL();
                iVar1 = ENGINE_set_RAND(lVar2,uVar3);
                if (iVar1 != 0) {
                  iVar1 = ENGINE_set_ciphers(lVar2,openssl_ciphers);
                  if (iVar1 != 0) {
                    iVar1 = ENGINE_set_digests(lVar2,openssl_digests);
                    if (iVar1 != 0) {
                      iVar1 = ENGINE_set_load_privkey_function(lVar2,openssl_load_privkey);
                      if (iVar1 != 0) {
                        ENGINE_add(lVar2);
                        ENGINE_free(lVar2);
                        ERR_clear_error();
                        return;
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
  ENGINE_free(lVar2);
  return;
}



// FUNCTION 143d229e0 openssl_ciphers body=267 status=ok
// SIG undefined openssl_ciphers(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int openssl_ciphers(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_2 == (undefined8 *)0x0) {
    if (DAT_146bcb5d4 != 0) {
      iVar2 = DAT_146bcb5d0;
      *param_3 = &DAT_146bcb5c0;
      return iVar2;
    }
    lVar3 = test_r4_cipher();
    if (lVar3 != 0) {
      uVar1 = FRollingHash::GetWindowSize(lVar3);
      *(undefined4 *)(&DAT_146bcb5c0 + (longlong)DAT_146bcb5d0 * 4) = uVar1;
      DAT_146bcb5d0 = DAT_146bcb5d0 + 1;
    }
    lVar3 = test_r4_40_cipher();
    if (lVar3 != 0) {
      uVar1 = FRollingHash::GetWindowSize(lVar3);
      *(undefined4 *)(&DAT_146bcb5c0 + (longlong)DAT_146bcb5d0 * 4) = uVar1;
      DAT_146bcb5d0 = DAT_146bcb5d0 + 1;
    }
    iVar2 = DAT_146bcb5d0;
    DAT_146bcb5d4 = 1;
    *(undefined4 *)(&DAT_146bcb5c0 + (longlong)DAT_146bcb5d0 * 4) = 0;
    *param_3 = &DAT_146bcb5c0;
    return iVar2;
  }
  if (param_4 != 5) {
    if (param_4 != 0x61) {
      *param_2 = 0;
      return 0;
    }
    uVar4 = test_r4_40_cipher();
    *param_2 = uVar4;
    return 1;
  }
  uVar4 = test_r4_cipher();
  *param_2 = uVar4;
  return 1;
}



// FUNCTION 143d22af0 openssl_destroy body=92 status=ok
// SIG undefined openssl_destroy(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 openssl_destroy(void)

{
  EVP_MD_meth_free(DAT_146bcb5d8);
  DAT_146bcb5d8 = 0;
  EVP_CIPHER_meth_free(DAT_146bcb5b0);
  DAT_146bcb5b0 = 0;
  EVP_CIPHER_meth_free(DAT_146bcb5b8);
  DAT_146bcb5b8 = 0;
  return 1;
}



// FUNCTION 143d22b50 openssl_digests body=197 status=ok
// SIG undefined openssl_digests(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int openssl_digests(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_2 != (undefined8 *)0x0) {
    if (param_4 != 0x40) {
      *param_2 = 0;
      return 0;
    }
    uVar4 = test_sha_md();
    *param_2 = uVar4;
    return 1;
  }
  if (DAT_146bcb5ec != 0) {
    iVar2 = DAT_146bcb5e8;
    *param_3 = &DAT_146bcb5e0;
    return iVar2;
  }
  lVar3 = test_sha_md();
  if (lVar3 != 0) {
    uVar1 = FRollingHash::GetWindowSize(lVar3);
    *(undefined4 *)(&DAT_146bcb5e0 + (longlong)DAT_146bcb5e8 * 4) = uVar1;
    DAT_146bcb5e8 = DAT_146bcb5e8 + 1;
  }
  iVar2 = DAT_146bcb5e8;
  DAT_146bcb5ec = 1;
  *(undefined4 *)(&DAT_146bcb5e0 + (longlong)DAT_146bcb5e8 * 4) = 0;
  *param_3 = &DAT_146bcb5e0;
  return iVar2;
}



// FUNCTION 143d22c20 openssl_load_privkey body=124 status=ok
// SIG undefined openssl_load_privkey(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 openssl_load_privkey(undefined8 param_1,undefined8 param_2)

{
  FILE *_File;
  longlong lVar1;
  undefined8 uVar2;
  
  _File = (FILE *)__acrt_iob_func(2);
  fwprintf(_File,(wchar_t *)"(TEST_ENG_OPENSSL_PKEY)Loading Private key %s\n",param_2);
  lVar1 = BIO_new_file(param_2,&DAT_145d71df8);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = PEM_read_bio_PrivateKey(lVar1,0,0,0);
  BIO_free(lVar1);
  return uVar2;
}



// FUNCTION 143d22ca0 test_r4_40_cipher body=174 status=ok
// SIG undefined test_r4_40_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong test_r4_40_cipher(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = DAT_146bcb5b8;
  if ((DAT_146bcb5b8 == 0) &&
     ((((lVar2 = EVP_CIPHER_meth_new(5,1,5), lVar2 == 0 ||
        (iVar1 = EVP_MD_meth_set_flags(lVar2,0), iVar1 == 0)) ||
       (iVar1 = EVP_CIPHER_meth_set_flags(lVar2,8), iVar1 == 0)) ||
      (((iVar1 = EVP_MD_meth_set_update(lVar2,test_rc4_init_key), iVar1 == 0 ||
        (iVar1 = EVP_MD_meth_set_final(lVar2,test_rc4_cipher), iVar1 == 0)) ||
       (iVar1 = EVP_CIPHER_meth_set_impl_ctx_size(lVar2,0x418), iVar1 == 0)))))) {
    EVP_CIPHER_meth_free(lVar2);
    lVar2 = 0;
  }
  DAT_146bcb5b8 = lVar2;
  return lVar2;
}



// FUNCTION 143d22d50 test_r4_cipher body=173 status=ok
// SIG undefined test_r4_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong test_r4_cipher(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = DAT_146bcb5b0;
  if ((DAT_146bcb5b0 == 0) &&
     ((((lVar2 = EVP_CIPHER_meth_new(5,1,0x10), lVar2 == 0 ||
        (iVar1 = EVP_MD_meth_set_flags(lVar2,0), iVar1 == 0)) ||
       (iVar1 = EVP_CIPHER_meth_set_flags(lVar2,8), iVar1 == 0)) ||
      (((iVar1 = EVP_MD_meth_set_update(lVar2,test_rc4_init_key), iVar1 == 0 ||
        (iVar1 = EVP_MD_meth_set_final(lVar2,test_rc4_cipher), iVar1 == 0)) ||
       (iVar1 = EVP_CIPHER_meth_set_impl_ctx_size(lVar2,0x418), iVar1 == 0)))))) {
    EVP_CIPHER_meth_free(lVar2);
    lVar2 = 0;
  }
  DAT_146bcb5b0 = lVar2;
  return lVar2;
}



// FUNCTION 143d22e00 test_rc4_cipher body=77 status=ok
// SIG undefined test_rc4_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
test_rc4_cipher(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FTcpDeserializedMessage::GetMessage();
  FUN_140054f80(lVar1 + 0x10,param_4,param_3,param_2);
  return 1;
}



// FUNCTION 143d22e50 test_rc4_init_key body=151 status=ok
// SIG undefined test_rc4_init_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 test_rc4_init_key(undefined8 param_1,void *param_2)

{
  int iVar1;
  undefined4 uVar2;
  FILE *_File;
  void *_Dst;
  undefined8 uVar3;
  longlong lVar4;
  
  _File = (FILE *)__acrt_iob_func(2);
  fwprintf(_File,(wchar_t *)"(TEST_ENG_OPENSSL_RC4) test_init_key() called\n");
  iVar1 = UVariantSet::GetNumVariants(param_1);
  _Dst = (void *)FTcpDeserializedMessage::GetMessage(param_1);
  _guard_xfg_dispatch_icall_nop(_Dst,param_2,(longlong)iVar1);
  uVar3 = FTcpDeserializedMessage::GetMessage(param_1);
  uVar2 = UVariantSet::GetNumVariants(param_1);
  lVar4 = FTcpDeserializedMessage::GetMessage(param_1);
  FUN_140055620(lVar4 + 0x10,uVar2,uVar3);
  return 1;
}



// FUNCTION 143d22ef0 test_sha_md body=205 status=ok
// SIG undefined test_sha_md(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong test_sha_md(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = DAT_146bcb5d8;
  if ((DAT_146bcb5d8 == 0) &&
     (((((lVar2 = EVP_MD_meth_new(0x40,0x41), lVar2 == 0 ||
         (iVar1 = EVP_MD_meth_set_result_size(lVar2,0x14), iVar1 == 0)) ||
        (iVar1 = EVP_MD_meth_set_input_blocksize(lVar2,0x40), iVar1 == 0)) ||
       ((iVar1 = EVP_MD_meth_set_app_datasize(lVar2,0x68), iVar1 == 0 ||
        (iVar1 = EVP_MD_meth_set_flags(lVar2,0), iVar1 == 0)))) ||
      ((iVar1 = EVP_MD_meth_set_init(lVar2,cmac_key_free), iVar1 == 0 ||
       ((iVar1 = EVP_MD_meth_set_update(lVar2,FUN_143cf0b60), iVar1 == 0 ||
        (iVar1 = EVP_MD_meth_set_final(lVar2,FUN_143cf0ba0), iVar1 == 0)))))))) {
    EVP_MD_meth_free(lVar2);
    lVar2 = 0;
  }
  DAT_146bcb5d8 = lVar2;
  return lVar2;
}



// FUNCTION 143d22fc0 get_random_bytes body=60 status=ok
// SIG undefined get_random_bytes(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool get_random_bytes(undefined8 param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
    return false;
  }
  lVar1 = FUN_1400500f0(param_1,(longlong)param_2);
  return param_2 == lVar1;
}



// FUNCTION 143d23000 engine_load_rdrand_int body=201 status=ok
// SIG undefined engine_load_rdrand_int(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void engine_load_rdrand_int(void)

{
  int iVar1;
  longlong lVar2;
  
  if (((DAT_146bcd584 & 0x40000000) == 0) || (lVar2 = ENGINE_new(), lVar2 == 0)) {
    return;
  }
  iVar1 = ENGINE_set_id(lVar2,PTR_s_rdrand_146837300);
  if (((iVar1 != 0) &&
      (((iVar1 = ENGINE_set_name(lVar2,PTR_s_Intel_RDRAND_engine_146837308), iVar1 != 0 &&
        (iVar1 = ENGINE_set_flags(lVar2,8), iVar1 != 0)) &&
       (iVar1 = ENGINE_set_init_function(lVar2,AK::MemoryMgr::SetMonitoring), iVar1 != 0)))) &&
     (iVar1 = ENGINE_set_RAND(lVar2,&DAT_1468372d0), iVar1 != 0)) {
    ENGINE_add(lVar2);
    ENGINE_free(lVar2);
    ERR_clear_error();
    return;
  }
  ENGINE_free(lVar2);
  return;
}



// FUNCTION 143d230d0 FUN_143d230d0 body=1176 status=ok
// SIG undefined FUN_143d230d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_143d230d0(undefined8 param_1,undefined4 param_2,uint param_3,longlong param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 uVar8;
  code *pcVar9;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  pcVar9 = (code *)0x143d230f2;
  if (DAT_146837320 < 0) {
    pcVar9 = dynamic_data_ctx_free_func;
    uVar7 = 0;
    iVar1 = CRYPTO_get_ex_new_index(10,0,0,0,0,dynamic_data_ctx_free_func);
    if (iVar1 == -1) {
      ERR_put_error(0x26,0xb5,0x90,"crypto\\engine\\eng_dyn.c",CONCAT44(uVar7,0xd2));
      uVar7 = 0x70;
      uVar8 = 0x127;
      goto LAB_143d23533;
    }
    CRYPTO_THREAD_read_lock(DAT_146bcd570);
    if (DAT_146837320 < 0) {
      DAT_146837320 = iVar1;
    }
    CRYPTO_THREAD_unlock(DAT_146bcd570);
  }
  plVar2 = (longlong *)ENGINE_get_ex_data(param_1,DAT_146837320);
  if (plVar2 == (longlong *)0x0) {
    plVar3 = (longlong *)CRYPTO_zalloc(0x58,"crypto\\engine\\eng_dyn.c",0x9c);
    iVar1 = 1;
    if (plVar3 == (longlong *)0x0) {
      ERR_put_error(0x26,0xb7,0x41,"crypto\\engine\\eng_dyn.c",CONCAT44(uVar7,0xa0),pcVar9);
      uVar7 = 0x70;
      uVar8 = 0x127;
      goto LAB_143d23533;
    }
    lVar4 = OPENSSL_sk_new_null();
    plVar3[10] = lVar4;
    if (lVar4 == 0) {
      ERR_put_error(0x26,0xb7,0x41,"crypto\\engine\\eng_dyn.c",CONCAT44(uVar7,0xa5),pcVar9);
      CRYPTO_free(plVar3,"crypto\\engine\\eng_dyn.c",0xa6);
      uVar7 = 0x70;
      uVar8 = 0x127;
      goto LAB_143d23533;
    }
    *(undefined4 *)(plVar3 + 9) = 1;
    plVar3[7] = (longlong)"v_check";
    plVar3[8] = (longlong)"bind_engine";
    CRYPTO_THREAD_read_lock(DAT_146bcd570);
    plVar2 = (longlong *)ENGINE_get_ex_data(param_1,DAT_146837320);
    plVar6 = plVar3;
    if ((plVar2 == (longlong *)0x0) &&
       (iVar1 = ENGINE_set_ex_data(param_1,DAT_146837320,plVar3), iVar1 != 0)) {
      plVar6 = (longlong *)0x0;
      plVar2 = plVar3;
    }
    CRYPTO_THREAD_unlock(DAT_146bcd570);
    if (plVar6 != (longlong *)0x0) {
      OPENSSL_sk_free(plVar6[10]);
    }
    CRYPTO_free(plVar6,"crypto\\engine\\eng_dyn.c",0xbe);
    if ((iVar1 == 0) || (plVar2 == (longlong *)0x0)) {
      uVar8 = 0x127;
      uVar7 = 0x70;
      goto LAB_143d23533;
    }
  }
  if (*plVar2 == 0) {
    switch(param_2) {
    case 200:
      if (param_4 != 0) {
        lVar4 = -1;
        do {
          lVar4 = lVar4 + 1;
        } while (*(char *)(param_4 + lVar4) != '\0');
        if (lVar4 == 0) {
          param_4 = 0;
        }
      }
      CRYPTO_free(plVar2[3],"crypto\\engine\\eng_dyn.c",0x135);
      if (param_4 == 0) {
        plVar2[3] = 0;
        return 0;
      }
      lVar4 = CRYPTO_strdup(param_4,"crypto\\engine\\eng_dyn.c",0x137);
      plVar2[3] = lVar4;
      return (ulonglong)(lVar4 != 0);
    case 0xc9:
      *(uint *)(plVar2 + 4) = (uint)(param_3 != 0);
      return 1;
    case 0xca:
      if (param_4 != 0) {
        lVar4 = -1;
        do {
          lVar4 = lVar4 + 1;
        } while (*(char *)(param_4 + lVar4) != '\0');
        if (lVar4 == 0) {
          param_4 = 0;
        }
      }
      CRYPTO_free(plVar2[5],"crypto\\engine\\eng_dyn.c",0x142);
      if (param_4 == 0) {
        plVar2[5] = 0;
        return 0;
      }
      lVar4 = CRYPTO_strdup(param_4,"crypto\\engine\\eng_dyn.c",0x144);
      plVar2[5] = lVar4;
      return (ulonglong)(lVar4 != 0);
    case 0xcb:
      if (param_3 < 3) {
        *(uint *)(plVar2 + 6) = param_3;
        return 1;
      }
      uVar8 = 0x14a;
      uVar7 = 0x8f;
      break;
    case 0xcc:
      if (param_3 < 3) {
        *(uint *)(plVar2 + 9) = param_3;
        return 1;
      }
      uVar8 = 0x153;
      uVar7 = 0x8f;
      break;
    case 0xcd:
      if (param_4 != 0) {
        lVar4 = -1;
        do {
          lVar4 = lVar4 + 1;
        } while (*(char *)(param_4 + lVar4) != '\0');
        if (lVar4 != 0) {
          lVar4 = CRYPTO_strdup(param_4,"crypto\\engine\\eng_dyn.c",0x15f);
          if (lVar4 == 0) {
            uVar8 = 0x161;
            uVar7 = 0x41;
          }
          else {
            iVar1 = OPENSSL_sk_push(plVar2[10],lVar4);
            if (iVar1 != 0) {
              return 1;
            }
            CRYPTO_free(lVar4,"crypto\\engine\\eng_dyn.c",0x165);
            uVar7 = 0x41;
            uVar8 = 0x166;
          }
          break;
        }
      }
      uVar8 = 0x15b;
      uVar7 = 0x8f;
      break;
    case 0xce:
      uVar5 = dynamic_load(param_1,plVar2);
      return uVar5;
    default:
      uVar8 = 0x16e;
      uVar7 = 0x77;
    }
  }
  else {
    uVar8 = 0x12d;
    uVar7 = 100;
  }
LAB_143d23533:
  ERR_put_error(0x26,0xb4,uVar7,"crypto\\engine\\eng_dyn.c",uVar8,pcVar9);
  return 0;
}



// FUNCTION 143d23590 dynamic_data_ctx_free_func body=117 status=ok
// SIG undefined dynamic_data_ctx_free_func(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void dynamic_data_ctx_free_func(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    DSO_free(*param_2);
    CRYPTO_free(param_2[3],"crypto\\engine\\eng_dyn.c",0x8d);
    CRYPTO_free(param_2[5],"crypto\\engine\\eng_dyn.c",0x8e);
    OPENSSL_sk_pop_free(param_2[10],int_free_str);
    CRYPTO_free(param_2,"crypto\\engine\\eng_dyn.c",0x90);
  }
  return;
}



// FUNCTION 143d23610 dynamic_load body=1020 status=ok
// SIG undefined dynamic_load(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dynamic_load(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  code *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 local_f8;
  undefined1 local_f0 [8];
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
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
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar3 = *param_2;
  if (lVar3 == 0) {
    lVar3 = DSO_new();
    *param_2 = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
  }
  if (param_2[3] == 0) {
    if (param_2[5] == 0) {
      return 0;
    }
    DSO_ctrl(lVar3,2,2,0);
    lVar3 = DSO_convert_filename(*param_2,param_2[5]);
    param_2[3] = lVar3;
  }
  iVar7 = 0;
  if (((int)param_2[9] == 2) || (lVar3 = DSO_load(*param_2,param_2[3],0,0), lVar3 == 0)) {
    if (((int)param_2[9] != 0) && ((iVar1 = OPENSSL_sk_num(param_2[10]), 0 < iVar1 && (0 < iVar1))))
    {
      do {
        uVar4 = OPENSSL_sk_value(param_2[10],iVar7);
        lVar3 = DSO_merge(*param_2,param_2[3],uVar4);
        if (lVar3 == 0) break;
        lVar5 = DSO_load(*param_2,lVar3,0,0);
        if (lVar5 != 0) {
          CRYPTO_free(lVar3,"crypto\\engine\\eng_dyn.c",0x184);
          goto LAB_143d23762;
        }
        CRYPTO_free(lVar3,"crypto\\engine\\eng_dyn.c",0x187);
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar1);
    }
    ERR_put_error(0x26,0xb6,0x84,"crypto\\engine\\eng_dyn.c",0x19e);
    DSO_free(*param_2);
    *param_2 = 0;
    return 0;
  }
LAB_143d23762:
  lVar3 = DSO_bind_func(*param_2,param_2[8]);
  param_2[2] = lVar3;
  if (lVar3 == 0) {
    param_2[2] = 0;
    DSO_free(*param_2);
    *param_2 = 0;
    uVar9 = 0x1ab;
    uVar8 = 0x68;
  }
  else {
    if ((int)param_2[4] == 0) {
      pcVar6 = (code *)DSO_bind_func(*param_2,param_2[7]);
      param_2[1] = (longlong)pcVar6;
      if ((pcVar6 == (code *)0x0) || (uVar2 = (*pcVar6)(0x30000), uVar2 < 0x30000)) {
        param_2[2] = 0;
        param_2[1] = 0;
        DSO_free(*param_2);
        *param_2 = 0;
        uVar9 = 0x1c6;
        uVar8 = 0x91;
        goto LAB_143d237a3;
      }
    }
    local_d8 = *param_1;
    uStack_d0 = param_1[1];
    local_c8 = param_1[2];
    uStack_c0 = param_1[3];
    local_b8 = param_1[4];
    uStack_b0 = param_1[5];
    local_a8 = param_1[6];
    uStack_a0 = param_1[7];
    local_98 = param_1[8];
    uStack_90 = param_1[9];
    local_88 = param_1[10];
    uStack_80 = param_1[0xb];
    local_78 = param_1[0xc];
    uStack_70 = param_1[0xd];
    local_58 = param_1[0x10];
    uStack_50 = param_1[0x11];
    local_68 = param_1[0xe];
    uStack_60 = param_1[0xf];
    local_48 = param_1[0x12];
    uStack_40 = param_1[0x13];
    local_38 = *(undefined4 *)(param_1 + 0x14);
    uStack_34 = *(undefined4 *)((longlong)param_1 + 0xa4);
    uStack_30 = *(undefined4 *)(param_1 + 0x15);
    uStack_2c = *(undefined4 *)((longlong)param_1 + 0xac);
    local_28 = *(undefined4 *)(param_1 + 0x16);
    uStack_24 = *(undefined4 *)((longlong)param_1 + 0xb4);
    uStack_20 = *(undefined4 *)(param_1 + 0x17);
    uStack_1c = *(undefined4 *)((longlong)param_1 + 0xbc);
    local_f8 = ENGINE_get_static_state();
    CRYPTO_get_mem_functions(local_f0,local_e8,local_e0);
    engine_set_all_null(param_1);
    iVar7 = (*(code *)param_2[2])(param_1,param_2[5],&local_f8);
    if (iVar7 == 0) {
      param_2[2] = 0;
      param_2[1] = 0;
      DSO_free(*param_2);
      *param_2 = 0;
      ERR_put_error(0x26,0xb6,0x6d,"crypto\\engine\\eng_dyn.c",0x1e5);
      *param_1 = local_d8;
      param_1[1] = uStack_d0;
      param_1[2] = local_c8;
      param_1[3] = uStack_c0;
      param_1[4] = local_b8;
      param_1[5] = uStack_b0;
      param_1[6] = local_a8;
      param_1[7] = uStack_a0;
      param_1[8] = local_98;
      param_1[9] = uStack_90;
      param_1[10] = local_88;
      param_1[0xb] = uStack_80;
      param_1[0xc] = local_78;
      param_1[0xd] = uStack_70;
      param_1[0xe] = local_68;
      param_1[0xf] = uStack_60;
      param_1[0x10] = local_58;
      param_1[0x11] = uStack_50;
      param_1[0x12] = local_48;
      param_1[0x13] = uStack_40;
      param_1[0x14] = CONCAT44(uStack_34,local_38);
      param_1[0x15] = CONCAT44(uStack_2c,uStack_30);
      param_1[0x16] = CONCAT44(uStack_24,local_28);
      param_1[0x17] = CONCAT44(uStack_1c,uStack_20);
      return 0;
    }
    if (((int)param_2[6] < 1) || (iVar7 = ENGINE_add(param_1), iVar7 != 0)) {
      return 1;
    }
    if ((int)param_2[6] < 2) {
      ERR_clear_error();
      return 1;
    }
    uVar9 = 0x1f6;
    uVar8 = 0x67;
  }
LAB_143d237a3:
  ERR_put_error(0x26,0xb6,uVar8,"crypto\\engine\\eng_dyn.c",uVar9);
  return 0;
}



// FUNCTION 143d23a10 engine_load_dynamic_int body=212 status=ok
// SIG undefined engine_load_dynamic_int(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void engine_load_dynamic_int(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = ENGINE_new();
  if (lVar2 == 0) {
    return;
  }
  iVar1 = ENGINE_set_id(lVar2,PTR_s_dynamic_146837310);
  if (iVar1 != 0) {
    iVar1 = ENGINE_set_name(lVar2,PTR_s_Dynamic_engine_loading_support_146837318);
    if (iVar1 != 0) {
      iVar1 = ENGINE_set_init_function(lVar2,AK::MemoryMgr::GetPoolName);
      if (iVar1 != 0) {
        iVar1 = ENGINE_set_finish_function(lVar2,AK::MemoryMgr::GetPoolName);
        if (iVar1 != 0) {
          iVar1 = ENGINE_set_ctrl_function(lVar2,FUN_143d230d0);
          if (iVar1 != 0) {
            iVar1 = ENGINE_set_flags(lVar2,4);
            if (iVar1 != 0) {
              iVar1 = ENGINE_set_cmd_defns(lVar2,&DAT_145d7f220);
              if (iVar1 != 0) {
                ENGINE_add(lVar2);
                ENGINE_free(lVar2);
                ERR_clear_error();
                return;
              }
            }
          }
        }
      }
    }
  }
  ENGINE_free(lVar2);
  return;
}



// FUNCTION 143d23af0 int_free_str body=33 status=ok
// SIG undefined int_free_str(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void int_free_str(undefined8 param_1)

{
  CRYPTO_free(param_1,"crypto\\engine\\eng_dyn.c",0x7a);
  return;
}



// FUNCTION 143d23b20 padlock_rand_bytes body=176 status=ok
// SIG undefined padlock_rand_bytes(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 padlock_rand_bytes(undefined1 *param_1,int param_2)

{
  uint uVar1;
  undefined1 local_res10 [24];
  
  while( true ) {
    if (param_2 < 8) {
      while( true ) {
        if (param_2 < 1) {
          FUN_14004ff40(local_res10,4);
          return 1;
        }
        uVar1 = FUN_140093b20(local_res10,3);
        if ((uVar1 & 0x40) == 0) break;
        if ((uVar1 & 0x7c00) != 0) {
          return 0;
        }
        if ((uVar1 & 0x1f) != 0) {
          if ((uVar1 & 0x1f) != 1) {
            return 0;
          }
          *param_1 = local_res10[0];
          param_1 = param_1 + 1;
          param_2 = param_2 + -1;
        }
      }
      return 0;
    }
    uVar1 = FUN_140093b20(param_1,0);
    if ((uVar1 & 0x40) == 0) {
      return 0;
    }
    if ((uVar1 & 0x7c00) != 0) break;
    if ((uVar1 & 0x1f) != 0) {
      if ((uVar1 & 0x1f) != 8) {
        return 0;
      }
      param_1 = param_1 + 8;
      param_2 = param_2 + -8;
    }
  }
  return 0;
}



// FUNCTION 143d23bd0 engine_load_padlock_int body=280 status=ok
// SIG undefined engine_load_padlock_int(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void engine_load_padlock_int(void)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143d23bdc;
  lVar3 = ENGINE_new();
  if (lVar3 == 0) {
    return;
  }
  uVar1 = FUN_140093a00();
  DAT_146bcb658 = 0;
  bVar5 = (uVar1 & 0xc0) == 0xc0;
  DAT_146bcb654 = (uint)bVar5;
  pcVar4 = "no-ACE";
  if (bVar5) {
    pcVar4 = "ACE";
  }
  BIO_snprintf(&DAT_146bcb5f0,100,"VIA PadLock (%s, %s)","no-RNG",pcVar4,uVar6);
  iVar2 = ENGINE_set_id(lVar3,PTR_s_padlock_146837358);
  if (iVar2 != 0) {
    iVar2 = ENGINE_set_name(lVar3,&DAT_146bcb5f0);
    if (iVar2 != 0) {
      iVar2 = ENGINE_set_init_function(lVar3,&LAB_143d25320);
      if (iVar2 != 0) {
        if (DAT_146bcb654 != 0) {
          iVar2 = ENGINE_set_ciphers(lVar3,FUN_143d24130);
          if (iVar2 == 0) goto LAB_143d23cd5;
        }
        if (DAT_146bcb658 != 0) {
          iVar2 = ENGINE_set_RAND(lVar3,&DAT_146837328);
          if (iVar2 == 0) goto LAB_143d23cd5;
        }
        ENGINE_add(lVar3);
        ENGINE_free(lVar3);
        ERR_clear_error();
        return;
      }
    }
  }
LAB_143d23cd5:
  ENGINE_free(lVar3);
  return;
}



// FUNCTION 143d23cf0 padlock_aes_init_key body=416 status=ok
// SIG undefined padlock_aes_init_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
padlock_aes_init_key(undefined8 param_1,undefined4 *param_2,undefined8 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  void *_Dst;
  uint uVar10;
  
  iVar5 = UVariantSet::GetNumVariants();
  iVar5 = iVar5 * 8;
  uVar8 = FHardwareCursor::GetHandle(param_1);
  uVar6 = TResourceArray<unsigned_char,0>::GetResourceDataSize(uVar8);
  if (param_2 != (undefined4 *)0x0) {
    iVar7 = FTcpDeserializedMessage::GetMessage(param_1);
    lVar9 = FTcpDeserializedMessage::GetMessage(param_1);
    _Dst = (void *)((ulonglong)(-iVar7 & 0xf) + lVar9);
    _guard_xfg_dispatch_icall_nop(_Dst,0,0x114);
    if ((uVar6 & 0xf0007) - 4 < 2) {
      *(uint *)((longlong)_Dst + 0x10) = *(uint *)((longlong)_Dst + 0x10) & 0xfffffdff;
      uVar10 = *(uint *)((longlong)_Dst + 0x10);
    }
    else {
      iVar7 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
      uVar10 = 0;
      if (iVar7 == 0) {
        uVar10 = 0x200;
      }
      uVar10 = uVar10 | *(uint *)((longlong)_Dst + 0x10) & 0xfffffdff;
      *(uint *)((longlong)_Dst + 0x10) = uVar10;
    }
    uVar10 = (((int)((iVar5 + -0x80 >> 0x1f & 0x1fU) + iVar5 + -0x80) >> 5) - 6U ^ uVar10) & 0xf ^
             uVar10;
    uVar10 = uVar10 ^ (((int)(iVar5 + -0x80 + (iVar5 + -0x80 >> 0x1f & 0x3fU)) >> 6) << 10 ^ uVar10)
                      & 0xc00;
    *(uint *)((longlong)_Dst + 0x10) = uVar10;
    if (iVar5 == 0x80) {
      uVar1 = *param_2;
      uVar2 = param_2[1];
      uVar3 = param_2[2];
      uVar4 = param_2[3];
      *(uint *)((longlong)_Dst + 0x10) = uVar10 & 0xffffff7f;
      *(undefined4 *)((longlong)_Dst + 0x20) = uVar1;
      *(undefined4 *)((longlong)_Dst + 0x24) = uVar2;
      *(undefined4 *)((longlong)_Dst + 0x28) = uVar3;
      *(undefined4 *)((longlong)_Dst + 0x2c) = uVar4;
      FUN_140093ad0();
      return 1;
    }
    if ((iVar5 == 0xc0) || (iVar5 == 0x100)) {
      if (((uVar6 & 0xf0007) - 1 < 2) && (param_4 == 0)) {
        FUN_140057850(param_2,iVar5,(longlong)_Dst + 0x20);
        *(uint *)((longlong)_Dst + 0x10) = *(uint *)((longlong)_Dst + 0x10) | 0x80;
        FUN_140093ad0();
        return 1;
      }
      FUN_140057570(param_2,iVar5,(longlong)_Dst + 0x20);
      *(uint *)((longlong)_Dst + 0x10) = *(uint *)((longlong)_Dst + 0x10) | 0x80;
      FUN_140093ad0();
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143d23e90 padlock_cbc_cipher body=151 status=ok
// SIG undefined padlock_cbc_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong padlock_cbc_cipher(undefined8 param_1,undefined8 param_2,undefined8 param_3,
                            undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  iVar5 = FTcpDeserializedMessage::GetMessage();
  lVar6 = FTcpDeserializedMessage::GetMessage(param_1);
  puVar10 = (undefined8 *)((ulonglong)(-iVar5 & 0xf) + lVar6);
  puVar7 = (undefined4 *)IMessageToken::ToText(param_1);
  uVar1 = puVar7[1];
  uVar2 = puVar7[2];
  uVar3 = puVar7[3];
  *(undefined4 *)puVar10 = *puVar7;
  *(undefined4 *)((longlong)puVar10 + 4) = uVar1;
  *(undefined4 *)(puVar10 + 1) = uVar2;
  *(undefined4 *)((longlong)puVar10 + 0xc) = uVar3;
  uVar8 = FUN_140093fb0(param_2,param_3,puVar10,param_4);
  if ((int)uVar8 != 0) {
    puVar9 = (undefined8 *)IMessageToken::ToText(param_1);
    uVar4 = puVar10[1];
    *puVar9 = *puVar10;
    puVar9[1] = uVar4;
    uVar8 = uVar8 & 0xffffffff;
  }
  return uVar8;
}



// FUNCTION 143d23f30 padlock_cfb_cipher body=512 status=ok
// SIG undefined padlock_cfb_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 padlock_cfb_cipher(undefined8 param_1,byte *param_2,byte *param_3,ulonglong param_4)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  
  iVar6 = FTcpDeserializedMessage::GetMessage();
  lVar7 = FTcpDeserializedMessage::GetMessage(param_1);
  pbVar13 = (byte *)((ulonglong)(-iVar6 & 0xf) + lVar7);
  iVar6 = FOnlineVoiceImpl::GetNumLocalTalkers(param_1);
  uVar11 = (ulonglong)iVar6;
  if (iVar6 == 0) {
LAB_143d2400a:
    if (param_4 != 0) {
      puVar8 = (undefined4 *)IMessageToken::ToText(param_1);
      uVar2 = puVar8[1];
      uVar3 = puVar8[2];
      uVar4 = puVar8[3];
      *(undefined4 *)pbVar13 = *puVar8;
      *(undefined4 *)(pbVar13 + 4) = uVar2;
      *(undefined4 *)(pbVar13 + 8) = uVar3;
      *(undefined4 *)(pbVar13 + 0xc) = uVar4;
      uVar11 = param_4 & 0xfffffffffffffff0;
      if (uVar11 != 0) {
        iVar6 = FUN_140094200(param_2,param_3,pbVar13,uVar11);
        if (iVar6 == 0) goto LAB_143d24040;
        param_4 = param_4 - uVar11;
      }
      if (param_4 != 0) {
        param_2 = param_2 + uVar11;
        param_3 = param_3 + uVar11;
        FArchiveState::SetGameNetVer(param_1,param_4 & 0xffffffff);
        if ((*(uint *)(pbVar13 + 0x10) >> 9 & 1) == 0) {
          FUN_140093ad0();
          FUN_140093ae0(pbVar13,pbVar13,pbVar13);
          FUN_140093ad0();
          pbVar12 = pbVar13;
          do {
            bVar5 = *param_3;
            bVar1 = *pbVar12;
            *param_2 = bVar5 ^ bVar1;
            param_3 = param_3 + 1;
            *pbVar12 = bVar5 ^ bVar1;
            param_4 = param_4 - 1;
            param_2 = param_2 + 1;
            pbVar12 = pbVar12 + 1;
          } while (param_4 != 0);
        }
        else {
          *(uint *)(pbVar13 + 0x10) = *(uint *)(pbVar13 + 0x10) & 0xfffffdff;
          FUN_140093ad0();
          FUN_140093ae0(pbVar13,pbVar13,pbVar13);
          *(uint *)(pbVar13 + 0x10) = *(uint *)(pbVar13 + 0x10) | 0x200;
          FUN_140093ad0();
          pbVar12 = pbVar13;
          do {
            bVar5 = *param_3;
            param_3 = param_3 + 1;
            *param_2 = *pbVar12 ^ bVar5;
            param_2 = param_2 + 1;
            *pbVar12 = bVar5;
            param_4 = param_4 - 1;
            pbVar12 = pbVar12 + 1;
          } while (param_4 != 0);
        }
      }
      puVar9 = (undefined8 *)IMessageToken::ToText(param_1);
      uVar10 = *(undefined8 *)(pbVar13 + 8);
      *puVar9 = *(undefined8 *)pbVar13;
      puVar9[1] = uVar10;
    }
    uVar10 = 1;
  }
  else {
    lVar7 = IMessageToken::ToText(param_1);
    if (uVar11 < 0x10) {
      iVar6 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
      if (iVar6 == 0) {
        do {
          if (param_4 == 0) break;
          bVar5 = *param_3;
          param_4 = param_4 - 1;
          param_3 = param_3 + 1;
          *param_2 = *(byte *)(lVar7 + uVar11) ^ bVar5;
          param_2 = param_2 + 1;
          *(byte *)(lVar7 + uVar11) = bVar5;
          uVar11 = uVar11 + 1;
        } while (uVar11 < 0x10);
      }
      else {
        do {
          if (param_4 == 0) break;
          param_4 = param_4 - 1;
          bVar5 = *(byte *)(lVar7 + uVar11) ^ *param_3;
          param_3 = param_3 + 1;
          *param_2 = bVar5;
          param_2 = param_2 + 1;
          *(byte *)(lVar7 + uVar11) = bVar5;
          uVar11 = uVar11 + 1;
        } while (uVar11 < 0x10);
      }
      FArchiveState::SetGameNetVer(param_1,(uint)uVar11 & 0xf);
      goto LAB_143d2400a;
    }
LAB_143d24040:
    uVar10 = 0;
  }
  return uVar10;
}



// FUNCTION 143d24130 FUN_143d24130 body=4140 status=ok
// SIG undefined FUN_143d24130(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_143d24130(undefined8 param_1,longlong *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  
  if (param_2 == (longlong *)0x0) {
    *param_3 = &DAT_145d7f550;
    return DAT_146837360;
  }
  if (param_4 < 0x389) {
    if (param_4 == 0x388) {
      lVar2 = DAT_146bcb680;
      if (DAT_146bcb680 == 0) {
        DAT_146bcb680 = EVP_CIPHER_meth_new(0x388,1,0x10);
        if ((((DAT_146bcb680 != 0) &&
             (iVar1 = EVP_MD_meth_set_flags(DAT_146bcb680,0x10), iVar1 != 0)) &&
            (iVar1 = EVP_CIPHER_meth_set_flags(DAT_146bcb680,5), iVar1 != 0)) &&
           (((iVar1 = EVP_MD_meth_set_update(DAT_146bcb680,padlock_aes_init_key), iVar1 != 0 &&
             (iVar1 = EVP_MD_meth_set_final(DAT_146bcb680,padlock_ctr_cipher), iVar1 != 0)) &&
            ((iVar1 = EVP_CIPHER_meth_set_impl_ctx_size(DAT_146bcb680,0x124), iVar1 != 0 &&
             ((iVar1 = ENGINE_set_ciphers(DAT_146bcb680,EVP_CIPHER_set_asn1_iv), iVar1 != 0 &&
              (iVar1 = ENGINE_set_digests(DAT_146bcb680,EVP_CIPHER_get_asn1_iv), iVar1 != 0))))))))
        {
          *param_2 = DAT_146bcb680;
          return 1;
        }
        EVP_CIPHER_meth_free(DAT_146bcb680);
        DAT_146bcb680 = 0;
        *param_2 = 0;
        return 1;
      }
    }
    else {
      switch(param_4) {
      case 0x1a2:
        lVar2 = DAT_146bcb660;
        if (DAT_146bcb660 == 0) {
          DAT_146bcb660 = EVP_CIPHER_meth_new(0x1a2,0x10,0x10);
          if ((((DAT_146bcb660 != 0) &&
               (iVar1 = EVP_MD_meth_set_flags(DAT_146bcb660,0x10), iVar1 != 0)) &&
              (iVar1 = EVP_CIPHER_meth_set_flags(DAT_146bcb660,1), iVar1 != 0)) &&
             (((iVar1 = EVP_MD_meth_set_update(DAT_146bcb660,padlock_aes_init_key), iVar1 != 0 &&
               (iVar1 = EVP_MD_meth_set_final(DAT_146bcb660,padlock_ecb_cipher), iVar1 != 0)) &&
              ((iVar1 = EVP_CIPHER_meth_set_impl_ctx_size(DAT_146bcb660,0x124), iVar1 != 0 &&
               ((iVar1 = ENGINE_set_ciphers(DAT_146bcb660,EVP_CIPHER_set_asn1_iv), iVar1 != 0 &&
                (iVar1 = ENGINE_set_digests(DAT_146bcb660,EVP_CIPHER_get_asn1_iv), iVar1 != 0)))))))
             ) {
            *param_2 = DAT_146bcb660;
            return 1;
          }
          EVP_CIPHER_meth_free(DAT_146bcb660);
          DAT_146bcb660 = 0;
          *param_2 = 0;
          return 1;
        }
        break;
      case 0x1a3:
        lVar2 = DAT_146bcb668;
        if (DAT_146bcb668 == 0) {
          DAT_146bcb668 = EVP_CIPHER_meth_new(0x1a3,0x10,0x10);
          if ((((DAT_146bcb668 != 0) &&
               (iVar1 = EVP_MD_meth_set_flags(DAT_146bcb668,0x10), iVar1 != 0)) &&
              (iVar1 = EVP_CIPHER_meth_set_flags(DAT_146bcb668,2), iVar1 != 0)) &&
             (((iVar1 = EVP_MD_meth_set_update(DAT_146bcb668,padlock_aes_init_key), iVar1 != 0 &&
               (iVar1 = EVP_MD_meth_set_final(DAT_146bcb668,padlock_cbc_cipher), iVar1 != 0)) &&
              ((iVar1 = EVP_CIPHER_meth_set_impl_ctx_size(DAT_146bcb668,0x124), iVar1 != 0 &&
               ((iVar1 = ENGINE_set_ciphers(DAT_146bcb668,EVP_CIPHER_set_asn1_iv), iVar1 != 0 &&
                (iVar1 = ENGINE_set_digests(DAT_146bcb668,EVP_CIPHER_get_asn1_iv), iVar1 != 0)))))))
             ) {
            *param_2 = DAT_146bcb668;
            return 1;
          }
          EVP_CIPHER_meth_free(DAT_146bcb668);
          DAT_146bcb668 = 0;
          *param_2 = 0;
          return 1;
        }
        break;
      case 0x1a4:
        lVar2 = DAT_146bcb678;
        if (DAT_146bcb678 == 0) {
          DAT_146bcb678 = EVP_CIPHER_meth_new(0x1a4,1,0x10);
          if (((((DAT_146bcb678 != 0) &&
                (iVar1 = EVP_MD_meth_set_flags(DAT_146bcb678,0x10), iVar1 != 0)) &&
               (iVar1 = EVP_CIPHER_meth_set_flags(DAT_146bcb678,4), iVar1 != 0)) &&
              ((iVar1 = EVP_MD_meth_set_update(DAT_146bcb678,padlock_aes_init_key), iVar1 != 0 &&
               (iVar1 = EVP_MD_meth_set_final(DAT_146bcb678,padlock_ofb_cipher), iVar1 != 0)))) &&
             ((iVar1 = EVP_CIPHER_meth_set_impl_ctx_size(DAT_146bcb678,0x124), iVar1 != 0 &&
              ((iVar1 = ENGINE_set_ciphers(DAT_146bcb678,EVP_CIPHER_set_asn1_iv), iVar1 != 0 &&
               (iVar1 = ENGINE_set_digests(DAT_146bcb678,EVP_CIPHER_get_asn1_iv), iVar1 != 0)))))) {
            *param_2 = DAT_146bcb678;
            return 1;
          }
          EVP_CIPHER_meth_free(DAT_146bcb678);
          DAT_146bcb678 = 0;
          *param_2 = 0;
          return 1;
        }
        break;
      case 0x1a5:
        lVar2 = DAT_146bcb670;
        if (DAT_146bcb670 == 0) {
          DAT_146bcb670 = EVP_CIPHER_meth_new(0x1a5,1,0x10);
          if ((((DAT_146bcb670 != 0) &&
               (iVar1 = EVP_MD_meth_set_flags(DAT_146bcb670,0x10), iVar1 != 0)) &&
              (iVar1 = EVP_CIPHER_meth_set_flags(DAT_146bcb670,3), iVar1 != 0)) &&
             (((iVar1 = EVP_MD_meth_set_update(DAT_146bcb670,padlock_aes_init_key), iVar1 != 0 &&
               (iVar1 = EVP_MD_meth_set_final(DAT_146bcb670,padlock_cfb_cipher), iVar1 != 0)) &&
              ((iVar1 = EVP_CIPHER_meth_set_impl_ctx_size(DAT_146bcb670,0x124), iVar1 != 0 &&
               ((iVar1 = ENGINE_set_ciphers(DAT_146bcb670,EVP_CIPHER_set_asn1_iv), iVar1 != 0 &&
                (iVar1 = ENGINE_set_digests(DAT_146bcb670,EVP_CIPHER_get_asn1_iv), iVar1 != 0)))))))
             ) {
            *param_2 = DAT_146bcb670;
            return 1;
          }
          EVP_CIPHER_meth_free(DAT_146bcb670);
          DAT_146bcb670 = 0;
          *param_2 = 0;
          return 1;
        }
        break;
      case 0x1a6:
        lVar2 = DAT_146bcb688;
        if (DAT_146bcb688 == 0) {
          DAT_146bcb688 = EVP_CIPHER_meth_new(0x1a6,0x10,0x18);
          if ((((DAT_146bcb688 != 0) &&
               (iVar1 = EVP_MD_meth_set_flags(DAT_146bcb688,0x10), iVar1 != 0)) &&
              (iVar1 = EVP_CIPHER_meth_set_flags(DAT_146bcb688,1), iVar1 != 0)) &&
             (((iVar1 = EVP_MD_meth_set_update(DAT_146bcb688,padlock_aes_init_key), iVar1 != 0 &&
               (iVar1 = EVP_MD_meth_set_final(DAT_146bcb688,padlock_ecb_cipher), iVar1 != 0)) &&
              ((iVar1 = EVP_CIPHER_meth_set_impl_ctx_size(DAT_146bcb688,0x124), iVar1 != 0 &&
               ((iVar1 = ENGINE_set_ciphers(DAT_146bcb688,EVP_CIPHER_set_asn1_iv), iVar1 != 0 &&
                (iVar1 = ENGINE_set_digests(DAT_146bcb688,EVP_CIPHER_get_asn1_iv), iVar1 != 0)))))))
             ) {
            *param_2 = DAT_146bcb688;
            return 1;
          }
          EVP_CIPHER_meth_free(DAT_146bcb688);
          DAT_146bcb688 = 0;
          *param_2 = 0;
          return 1;
        }
        break;
      case 0x1a7:
        lVar2 = DAT_146bcb690;
        if (DAT_146bcb690 == 0) {
          DAT_146bcb690 = EVP_CIPHER_meth_new(0x1a7,0x10,0x18);
          if ((((((DAT_146bcb690 != 0) &&
                 (iVar1 = EVP_MD_meth_set_flags(DAT_146bcb690,0x10), iVar1 != 0)) &&
                (iVar1 = EVP_CIPHER_meth_set_flags(DAT_146bcb690,2), iVar1 != 0)) &&
               ((iVar1 = EVP_MD_meth_set_update(DAT_146bcb690,padlock_aes_init_key), iVar1 != 0 &&
                (iVar1 = EVP_MD_meth_set_final(DAT_146bcb690,padlock_cbc_cipher), iVar1 != 0)))) &&
              (iVar1 = EVP_CIPHER_meth_set_impl_ctx_size(DAT_146bcb690,0x124), iVar1 != 0)) &&
             ((iVar1 = ENGINE_set_ciphers(DAT_146bcb690,EVP_CIPHER_set_asn1_iv), iVar1 != 0 &&
              (iVar1 = ENGINE_set_digests(DAT_146bcb690,EVP_CIPHER_get_asn1_iv), iVar1 != 0)))) {
            *param_2 = DAT_146bcb690;
            return 1;
          }
          EVP_CIPHER_meth_free(DAT_146bcb690);
          DAT_146bcb690 = 0;
          *param_2 = 0;
          return 1;
        }
        break;
      case 0x1a8:
        lVar2 = DAT_146bcb6a0;
        if (DAT_146bcb6a0 == 0) {
          DAT_146bcb6a0 = EVP_CIPHER_meth_new(0x1a8,1,0x18);
          if ((((DAT_146bcb6a0 != 0) &&
               (iVar1 = EVP_MD_meth_set_flags(DAT_146bcb6a0,0x10), iVar1 != 0)) &&
              (iVar1 = EVP_CIPHER_meth_set_flags(DAT_146bcb6a0,4), iVar1 != 0)) &&
             (((iVar1 = EVP_MD_meth_set_update(DAT_146bcb6a0,padlock_aes_init_key), iVar1 != 0 &&
               (iVar1 = EVP_MD_meth_set_final(DAT_146bcb6a0,padlock_ofb_cipher), iVar1 != 0)) &&
              ((iVar1 = EVP_CIPHER_meth_set_impl_ctx_size(DAT_146bcb6a0,0x124), iVar1 != 0 &&
               ((iVar1 = ENGINE_set_ciphers(DAT_146bcb6a0,EVP_CIPHER_set_asn1_iv), iVar1 != 0 &&
                (iVar1 = ENGINE_set_digests(DAT_146bcb6a0,EVP_CIPHER_get_asn1_iv), iVar1 != 0)))))))
             ) {
            *param_2 = DAT_146bcb6a0;
            return 1;
          }
          EVP_CIPHER_meth_free(DAT_146bcb6a0);
          DAT_146bcb6a0 = 0;
          *param_2 = 0;
          return 1;
        }
        break;
      case 0x1a9:
        lVar2 = DAT_146bcb698;
        if (DAT_146bcb698 == 0) {
          DAT_146bcb698 = EVP_CIPHER_meth_new(0x1a9,1,0x18);
          if ((((DAT_146bcb698 != 0) &&
               (iVar1 = EVP_MD_meth_set_flags(DAT_146bcb698,0x10), iVar1 != 0)) &&
              (iVar1 = EVP_CIPHER_meth_set_flags(DAT_146bcb698,3), iVar1 != 0)) &&
             (((iVar1 = EVP_MD_meth_set_update(DAT_146bcb698,padlock_aes_init_key), iVar1 != 0 &&
               (iVar1 = EVP_MD_meth_set_final(DAT_146bcb698,padlock_cfb_cipher), iVar1 != 0)) &&
              ((iVar1 = EVP_CIPHER_meth_set_impl_ctx_size(DAT_146bcb698,0x124), iVar1 != 0 &&
               ((iVar1 = ENGINE_set_ciphers(DAT_146bcb698,EVP_CIPHER_set_asn1_iv), iVar1 != 0 &&
                (iVar1 = ENGINE_set_digests(DAT_146bcb698,EVP_CIPHER_get_asn1_iv), iVar1 != 0)))))))
             ) {
            *param_2 = DAT_146bcb698;
            return 1;
          }
          EVP_CIPHER_meth_free(DAT_146bcb698);
          DAT_146bcb698 = 0;
          *param_2 = 0;
          return 1;
        }
        break;
      case 0x1aa:
        lVar2 = DAT_146bcb6b0;
        if (DAT_146bcb6b0 == 0) {
          DAT_146bcb6b0 = EVP_CIPHER_meth_new(0x1aa,0x10,0x20);
          if (((((DAT_146bcb6b0 != 0) &&
                (iVar1 = EVP_MD_meth_set_flags(DAT_146bcb6b0,0x10), iVar1 != 0)) &&
               (iVar1 = EVP_CIPHER_meth_set_flags(DAT_146bcb6b0,1), iVar1 != 0)) &&
              ((iVar1 = EVP_MD_meth_set_update(DAT_146bcb6b0,padlock_aes_init_key), iVar1 != 0 &&
               (iVar1 = EVP_MD_meth_set_final(DAT_146bcb6b0,padlock_ecb_cipher), iVar1 != 0)))) &&
             ((iVar1 = EVP_CIPHER_meth_set_impl_ctx_size(DAT_146bcb6b0,0x124), iVar1 != 0 &&
              ((iVar1 = ENGINE_set_ciphers(DAT_146bcb6b0,EVP_CIPHER_set_asn1_iv), iVar1 != 0 &&
               (iVar1 = ENGINE_set_digests(DAT_146bcb6b0,EVP_CIPHER_get_asn1_iv), iVar1 != 0)))))) {
            *param_2 = DAT_146bcb6b0;
            return 1;
          }
          EVP_CIPHER_meth_free(DAT_146bcb6b0);
          DAT_146bcb6b0 = 0;
          *param_2 = 0;
          return 1;
        }
        break;
      case 0x1ab:
        lVar2 = DAT_146bcb6b8;
        if (DAT_146bcb6b8 == 0) {
          DAT_146bcb6b8 = EVP_CIPHER_meth_new(0x1ab,0x10,0x20);
          if (((((DAT_146bcb6b8 != 0) &&
                (iVar1 = EVP_MD_meth_set_flags(DAT_146bcb6b8,0x10), iVar1 != 0)) &&
               (iVar1 = EVP_CIPHER_meth_set_flags(DAT_146bcb6b8,2), iVar1 != 0)) &&
              ((iVar1 = EVP_MD_meth_set_update(DAT_146bcb6b8,padlock_aes_init_key), iVar1 != 0 &&
               (iVar1 = EVP_MD_meth_set_final(DAT_146bcb6b8,padlock_cbc_cipher), iVar1 != 0)))) &&
             ((iVar1 = EVP_CIPHER_meth_set_impl_ctx_size(DAT_146bcb6b8,0x124), iVar1 != 0 &&
              ((iVar1 = ENGINE_set_ciphers(DAT_146bcb6b8,EVP_CIPHER_set_asn1_iv), iVar1 != 0 &&
               (iVar1 = ENGINE_set_digests(DAT_146bcb6b8,EVP_CIPHER_get_asn1_iv), iVar1 != 0)))))) {
            *param_2 = DAT_146bcb6b8;
            return 1;
          }
          EVP_CIPHER_meth_free(DAT_146bcb6b8);
          DAT_146bcb6b8 = 0;
          *param_2 = 0;
          return 1;
        }
        break;
      case 0x1ac:
        lVar2 = DAT_146bcb6c8;
        if (DAT_146bcb6c8 == 0) {
          DAT_146bcb6c8 = EVP_CIPHER_meth_new(0x1ac,1,0x20);
          if ((((DAT_146bcb6c8 != 0) &&
               (iVar1 = EVP_MD_meth_set_flags(DAT_146bcb6c8,0x10), iVar1 != 0)) &&
              (iVar1 = EVP_CIPHER_meth_set_flags(DAT_146bcb6c8,4), iVar1 != 0)) &&
             (((iVar1 = EVP_MD_meth_set_update(DAT_146bcb6c8,padlock_aes_init_key), iVar1 != 0 &&
               (iVar1 = EVP_MD_meth_set_final(DAT_146bcb6c8,padlock_ofb_cipher), iVar1 != 0)) &&
              ((iVar1 = EVP_CIPHER_meth_set_impl_ctx_size(DAT_146bcb6c8,0x124), iVar1 != 0 &&
               ((iVar1 = ENGINE_set_ciphers(DAT_146bcb6c8,EVP_CIPHER_set_asn1_iv), iVar1 != 0 &&
                (iVar1 = ENGINE_set_digests(DAT_146bcb6c8,EVP_CIPHER_get_asn1_iv), iVar1 != 0)))))))
             ) {
            *param_2 = DAT_146bcb6c8;
            return 1;
          }
          EVP_CIPHER_meth_free(DAT_146bcb6c8);
          DAT_146bcb6c8 = 0;
          *param_2 = 0;
          return 1;
        }
        break;
      case 0x1ad:
        lVar2 = DAT_146bcb6c0;
        if (DAT_146bcb6c0 == 0) {
          DAT_146bcb6c0 = EVP_CIPHER_meth_new(0x1ad,1,0x20);
          if (((((DAT_146bcb6c0 != 0) &&
                (iVar1 = EVP_MD_meth_set_flags(DAT_146bcb6c0,0x10), iVar1 != 0)) &&
               (iVar1 = EVP_CIPHER_meth_set_flags(DAT_146bcb6c0,3), iVar1 != 0)) &&
              ((iVar1 = EVP_MD_meth_set_update(DAT_146bcb6c0,padlock_aes_init_key), iVar1 != 0 &&
               (iVar1 = EVP_MD_meth_set_final(DAT_146bcb6c0,padlock_cfb_cipher), iVar1 != 0)))) &&
             ((iVar1 = EVP_CIPHER_meth_set_impl_ctx_size(DAT_146bcb6c0,0x124), iVar1 != 0 &&
              ((iVar1 = ENGINE_set_ciphers(DAT_146bcb6c0,EVP_CIPHER_set_asn1_iv), iVar1 != 0 &&
               (iVar1 = ENGINE_set_digests(DAT_146bcb6c0,EVP_CIPHER_get_asn1_iv), iVar1 != 0)))))) {
            *param_2 = DAT_146bcb6c0;
            return 1;
          }
          EVP_CIPHER_meth_free(DAT_146bcb6c0);
          DAT_146bcb6c0 = 0;
          *param_2 = 0;
          return 1;
        }
        break;
      default:
switchD_143d24195_default:
        *param_2 = 0;
        return 0;
      }
    }
  }
  else if (param_4 == 0x389) {
    lVar2 = DAT_146bcb6a8;
    if (DAT_146bcb6a8 == 0) {
      DAT_146bcb6a8 = EVP_CIPHER_meth_new(0x389,1,0x18);
      if ((((((DAT_146bcb6a8 != 0) &&
             (iVar1 = EVP_MD_meth_set_flags(DAT_146bcb6a8,0x10), iVar1 != 0)) &&
            (iVar1 = EVP_CIPHER_meth_set_flags(DAT_146bcb6a8,5), iVar1 != 0)) &&
           ((iVar1 = EVP_MD_meth_set_update(DAT_146bcb6a8,padlock_aes_init_key), iVar1 != 0 &&
            (iVar1 = EVP_MD_meth_set_final(DAT_146bcb6a8,padlock_ctr_cipher), iVar1 != 0)))) &&
          (iVar1 = EVP_CIPHER_meth_set_impl_ctx_size(DAT_146bcb6a8,0x124), iVar1 != 0)) &&
         ((iVar1 = ENGINE_set_ciphers(DAT_146bcb6a8,EVP_CIPHER_set_asn1_iv), iVar1 != 0 &&
          (iVar1 = ENGINE_set_digests(DAT_146bcb6a8,EVP_CIPHER_get_asn1_iv), iVar1 != 0)))) {
        *param_2 = DAT_146bcb6a8;
        return 1;
      }
      EVP_CIPHER_meth_free(DAT_146bcb6a8);
      lVar2 = 0;
      DAT_146bcb6a8 = 0;
    }
  }
  else {
    if (param_4 != 0x38a) goto switchD_143d24195_default;
    lVar2 = DAT_146bcb6d0;
    if (DAT_146bcb6d0 == 0) {
      DAT_146bcb6d0 = EVP_CIPHER_meth_new(0x38a,1,0x20);
      if ((((DAT_146bcb6d0 != 0) && (iVar1 = EVP_MD_meth_set_flags(DAT_146bcb6d0,0x10), iVar1 != 0))
          && (iVar1 = EVP_CIPHER_meth_set_flags(DAT_146bcb6d0,5), iVar1 != 0)) &&
         (((iVar1 = EVP_MD_meth_set_update(DAT_146bcb6d0,padlock_aes_init_key), iVar1 != 0 &&
           (iVar1 = EVP_MD_meth_set_final(DAT_146bcb6d0,padlock_ctr_cipher), iVar1 != 0)) &&
          ((iVar1 = EVP_CIPHER_meth_set_impl_ctx_size(DAT_146bcb6d0,0x124), iVar1 != 0 &&
           ((iVar1 = ENGINE_set_ciphers(DAT_146bcb6d0,EVP_CIPHER_set_asn1_iv), iVar1 != 0 &&
            (iVar1 = ENGINE_set_digests(DAT_146bcb6d0,EVP_CIPHER_get_asn1_iv), iVar1 != 0)))))))) {
        *param_2 = DAT_146bcb6d0;
        return 1;
      }
      EVP_CIPHER_meth_free(DAT_146bcb6d0);
      DAT_146bcb6d0 = 0;
      *param_2 = 0;
      return 1;
    }
  }
  *param_2 = lVar2;
  return 1;
}



// FUNCTION 143d25190 padlock_ctr32_encrypt_glue body=56 status=ok
// SIG undefined padlock_ctr32_encrypt_glue(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void padlock_ctr32_encrypt_glue
               (undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 *param_4,
               undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *param_4 = *param_5;
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  FUN_140094540(param_2,param_1,param_4,param_3 << 4);
  return;
}



// FUNCTION 143d251d0 padlock_ctr_cipher body=195 status=ok
// SIG undefined padlock_ctr_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
padlock_ctr_cipher(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_28 [2];
  undefined8 uStack_20;
  
  uStack_20 = 0x143d251ee;
  iVar1 = FTcpDeserializedMessage::GetMessage();
  lVar2 = FTcpDeserializedMessage::GetMessage(param_1);
  local_28[0] = FOnlineVoiceImpl::GetNumLocalTalkers(param_1);
  uVar3 = UListView::OnItemSelectionChanged(param_1);
  uVar4 = IMessageToken::ToText(param_1);
  CRYPTO_ctr128_encrypt_ctr32
            (param_3,param_2,param_4,(ulonglong)(-iVar1 & 0xf) + lVar2,uVar4,uVar3,local_28,
             padlock_ctr32_encrypt_glue);
  FArchiveState::SetGameNetVer(param_1,local_28[0]);
  return 1;
}



// FUNCTION 143d252a0 padlock_ecb_cipher body=113 status=ok
// SIG undefined padlock_ecb_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void padlock_ecb_cipher(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FTcpDeserializedMessage::GetMessage();
  lVar2 = FTcpDeserializedMessage::GetMessage(param_1);
  FUN_140093d70(param_2,param_3,(ulonglong)(-iVar1 & 0xf) + lVar2,param_4);
  return;
}



// FUNCTION 143d25340 padlock_ofb_cipher body=350 status=ok
// SIG undefined padlock_ofb_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 padlock_ofb_cipher(undefined8 param_1,byte *param_2,byte *param_3,ulonglong param_4)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  
  iVar5 = FTcpDeserializedMessage::GetMessage();
  lVar6 = FTcpDeserializedMessage::GetMessage(param_1);
  pbVar13 = (byte *)((ulonglong)(-iVar5 & 0xf) + lVar6);
  iVar5 = FOnlineVoiceImpl::GetNumLocalTalkers(param_1);
  uVar10 = (ulonglong)iVar5;
  if (iVar5 == 0) {
LAB_143d253dd:
    if (param_4 != 0) {
      puVar7 = (undefined4 *)IMessageToken::ToText(param_1);
      uVar2 = puVar7[1];
      uVar3 = puVar7[2];
      uVar4 = puVar7[3];
      *(undefined4 *)pbVar13 = *puVar7;
      *(undefined4 *)(pbVar13 + 4) = uVar2;
      *(undefined4 *)(pbVar13 + 8) = uVar3;
      *(undefined4 *)(pbVar13 + 0xc) = uVar4;
      uVar10 = param_4 & 0xfffffffffffffff0;
      if (uVar10 != 0) {
        iVar5 = FUN_1400943a0(param_2,param_3,pbVar13,uVar10);
        if (iVar5 == 0) goto LAB_143d25413;
        param_4 = param_4 - uVar10;
      }
      if (param_4 != 0) {
        param_3 = param_3 + uVar10;
        FArchiveState::SetGameNetVer(param_1,param_4 & 0xffffffff);
        FUN_140093ad0();
        FUN_140093ae0(pbVar13,pbVar13,pbVar13);
        FUN_140093ad0();
        pbVar11 = pbVar13;
        pbVar12 = param_2 + uVar10;
        do {
          bVar1 = *param_3;
          param_3 = param_3 + 1;
          *pbVar12 = bVar1 ^ *pbVar11;
          pbVar11 = pbVar11 + 1;
          param_4 = param_4 - 1;
          pbVar12 = pbVar12 + 1;
        } while (param_4 != 0);
      }
      puVar8 = (undefined8 *)IMessageToken::ToText(param_1);
      uVar9 = *(undefined8 *)(pbVar13 + 8);
      *puVar8 = *(undefined8 *)pbVar13;
      puVar8[1] = uVar9;
    }
    uVar9 = 1;
  }
  else {
    lVar6 = IMessageToken::ToText(param_1);
    if (uVar10 < 0x10) {
      do {
        if (param_4 == 0) break;
        pbVar11 = (byte *)(lVar6 + uVar10);
        param_4 = param_4 - 1;
        uVar10 = uVar10 + 1;
        *param_2 = *pbVar11 ^ *param_3;
        param_3 = param_3 + 1;
        param_2 = param_2 + 1;
      } while (uVar10 < 0x10);
      FArchiveState::SetGameNetVer(param_1,(uint)uVar10 & 0xf);
      goto LAB_143d253dd;
    }
LAB_143d25413:
    uVar9 = 0;
  }
  return uVar9;
}



// FUNCTION 143d254a0 CAPI_trace body=184 status=ok
// SIG undefined CAPI_trace(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CAPI_trace(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  
  if (((param_1 != (int *)0x0) && (1 < *param_1)) && (*(longlong *)(param_1 + 2) != 0)) {
    local_res18 = param_3;
    local_res20 = param_4;
    lVar1 = BIO_new_file(*(longlong *)(param_1 + 2),&DAT_145d76d88);
    if (lVar1 == 0) {
      if (DAT_146bcb6d8 == 0) {
        DAT_146bcb6d8 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_146bcb6d8,0x76,0x73,"engines\\e_capi.c",0x437);
      return;
    }
    BIO_vprintf(lVar1,param_2,&local_res18);
    BIO_free(lVar1);
  }
  return;
}



// FUNCTION 143d25560 capi_adderror body=93 status=ok
// SIG undefined capi_adderror(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void capi_adderror(undefined4 param_1)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x143d2556a;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  BIO_snprintf(local_28,10,&DAT_145d801c4,param_1);
  ERR_add_error_data(2,"Error code= 0x",local_28);
  return;
}



// FUNCTION 143d255c0 capi_addlasterror body=99 status=ok
// SIG undefined capi_addlasterror(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void capi_addlasterror(void)

{
  DWORD DVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x143d255ca;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  DVar1 = GetLastError();
  BIO_snprintf(local_28,10,&DAT_145d801c4,DVar1);
  ERR_add_error_data(2,"Error code= 0x",local_28);
  return;
}



// FUNCTION 143d25630 capi_cert_get_fname body=260 status=ok
// SIG undefined capi_cert_get_fname(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 capi_cert_get_fname(undefined8 param_1,PCCERT_CONTEXT param_2)

{
  BOOL BVar1;
  void *pvData;
  undefined8 uVar2;
  DWORD local_res18 [4];
  
  CAPI_trace(param_1,"capi_cert_get_fname\n");
  BVar1 = CertGetCertificateContextProperty(param_2,0xb,(void *)0x0,local_res18);
  if (BVar1 != 0) {
    pvData = (void *)CRYPTO_malloc(local_res18[0],"engines\\e_capi.c",0x534);
    if (pvData != (void *)0x0) {
      BVar1 = CertGetCertificateContextProperty(param_2,0xb,pvData,local_res18);
      if (BVar1 != 0) {
        uVar2 = wide_to_asc(pvData);
        CRYPTO_free(pvData,"engines\\e_capi.c",0x53a);
        return uVar2;
      }
      if (DAT_146bcb6d8 == 0) {
        DAT_146bcb6d8 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_146bcb6d8,99,0x6f,"engines\\e_capi.c",0x53d);
      capi_addlasterror();
      CRYPTO_free(pvData,"engines\\e_capi.c",0x540);
    }
  }
  return 0;
}



// FUNCTION 143d25740 FUN_143d25740 body=934 status=ok
// SIG undefined FUN_143d25740(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_143d25740(undefined8 param_1,undefined4 param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  uint *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 local_28 [2];
  undefined8 local_20;
  
  local_20 = 0x143d25754;
  uVar7 = 1;
  if (DAT_1468376c0 == -1) {
    if (DAT_146bcb6d8 == 0) {
      DAT_146bcb6d8 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_146bcb6d8,100,0x6b,"engines\\e_capi.c",0x122);
    return 0;
  }
  puVar2 = (uint *)ENGINE_get_ex_data();
  uVar3 = __acrt_iob_func(1);
  lVar4 = BIO_new_fp(uVar3,0);
  if (lVar4 == 0) {
    if (DAT_146bcb6d8 == 0) {
      DAT_146bcb6d8 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_146bcb6d8,100,0x73,"engines\\e_capi.c",0x128);
    return 0;
  }
  switch(param_2) {
  case 200:
    uVar7 = capi_list_certs(puVar2,lVar4,0);
    break;
  case 0xc9:
    uVar7 = capi_list_certs(puVar2,lVar4,param_4);
    break;
  case 0xca:
    *puVar2 = param_3;
    CAPI_trace(puVar2,"Setting debug level to %d\n",param_3);
    break;
  case 0xcb:
    lVar5 = CRYPTO_strdup(param_4,"engines\\e_capi.c",0x159);
    if (lVar5 != 0) {
      *(longlong *)(puVar2 + 2) = lVar5;
      CAPI_trace(puVar2,"Setting debug file to %s\n",lVar5);
      break;
    }
    if (DAT_146bcb6d8 == 0) {
      DAT_146bcb6d8 = ERR_get_next_error_library();
    }
    uVar7 = 0x15e;
    uVar3 = 0x41;
    goto LAB_143d25aae;
  case 0xcc:
    puVar2[4] = param_3;
    CAPI_trace(puVar2,"Setting key type to %d\n",param_3);
    break;
  case 0xcd:
    uVar7 = capi_list_providers(puVar2,lVar4);
    break;
  case 0xce:
    iVar1 = capi_get_provname(puVar2,&local_20,local_28,param_3);
    if (iVar1 == 1) {
      uVar7 = capi_ctx_set_provname(puVar2,local_20,local_28[0],0);
      CRYPTO_free(local_20,"engines\\e_capi.c",0x688);
      break;
    }
    goto LAB_143d25ac1;
  case 0xcf:
    uVar7 = capi_ctx_set_provname(puVar2,param_4,puVar2[8],1);
    break;
  case 0xd0:
    puVar2[8] = param_3;
    break;
  case 0xd1:
    uVar7 = capi_list_containers(puVar2,lVar4);
    break;
  case 0xd2:
    puVar2[0x10] = param_3;
    break;
  case 0xd3:
    if (2 < param_3 - 1) {
      if (DAT_146bcb6d8 == 0) {
        DAT_146bcb6d8 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_146bcb6d8,100,0x78,"engines\\e_capi.c",0x172);
      BIO_free(lVar4);
      return 0;
    }
    puVar2[0xf] = param_3;
    break;
  case 0xd4:
    lVar5 = CRYPTO_strdup(param_4,"engines\\e_capi.c",0x13d);
    if (lVar5 != 0) {
      CRYPTO_free(*(undefined8 *)(puVar2 + 10),"engines\\e_capi.c",0x13f);
      *(longlong *)(puVar2 + 10) = lVar5;
      CAPI_trace(puVar2,"Setting store name to %s\n",param_4);
      uVar7 = 1;
      break;
    }
    if (DAT_146bcb6d8 == 0) {
      DAT_146bcb6d8 = ERR_get_next_error_library();
    }
    uVar7 = 0x143;
    uVar3 = 0x41;
    goto LAB_143d25aae;
  case 0xd5:
    uVar6 = puVar2[0xe] & 0xfffdffff | 0x10000;
    if ((param_3 & 1) != 0) {
      uVar6 = puVar2[0xe] & 0xfffeffff | 0x20000;
    }
    puVar2[0xe] = uVar6;
    CAPI_trace(puVar2,"Setting flags to %d\n",param_3);
    uVar7 = 1;
    break;
  default:
    if (DAT_146bcb6d8 == 0) {
      DAT_146bcb6d8 = ERR_get_next_error_library();
    }
    uVar7 = 0x182;
    uVar3 = 0x7d;
LAB_143d25aae:
    ERR_put_error(DAT_146bcb6d8,100,uVar3,"engines\\e_capi.c",uVar7);
LAB_143d25ac1:
    uVar7 = 0;
  }
  BIO_free(lVar4);
  return uVar7;
}



// FUNCTION 143d25b20 capi_ctx_set_provname body=457 status=ok
// SIG undefined capi_ctx_set_provname(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 capi_ctx_set_provname(longlong param_1,LPCSTR param_2,DWORD param_3,int param_4)

{
  LPCWSTR szProvider;
  uint uVar1;
  BOOL BVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uStackY_50;
  undefined1 auStackY_48 [32];
  HCRYPTPROV local_18;
  ulonglong local_10;
  
  puVar6 = auStackY_48;
  local_10 = DAT_1468387a8 ^ (ulonglong)&local_18;
  uStackY_50 = 0x143d25b70;
  CAPI_trace(param_1,"capi_ctx_set_provname, name=%s, type=%d\n",param_2,param_3);
  if (param_4 == 0) {
LAB_143d25c12:
    *(undefined8 *)(puVar6 + -8) = 0x143d25c27;
    lVar4 = CRYPTO_strdup(param_2,"engines\\e_capi.c",0x675);
    puVar7 = puVar6;
    if (lVar4 == 0) {
      if (DAT_146bcb6d8 == 0) {
        *(undefined8 *)(puVar6 + -8) = 0x143d25c3e;
        DAT_146bcb6d8 = ERR_get_next_error_library();
      }
      *(undefined4 *)(puVar6 + 0x20) = 0x677;
      *(undefined8 *)(puVar6 + -8) = 0x143d25c63;
      ERR_put_error(DAT_146bcb6d8,0x66,0x41,"engines\\e_capi.c");
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(puVar6 + -8) = 0x143d25cba;
      CRYPTO_free(uVar5,"engines\\e_capi.c",0x67a);
      uVar5 = 1;
      *(longlong *)(param_1 + 0x18) = lVar4;
      *(DWORD *)(param_1 + 0x20) = param_3;
    }
  }
  else {
    uStackY_50 = 0x143d25b94;
    uVar1 = MultiByteToWideChar(0,0,param_2,-1,(LPWSTR)0x0,0);
    puVar7 = auStackY_48;
    if (uVar1 != 0) {
      uVar3 = (ulonglong)uVar1 * 2 + 0xf;
      if (uVar3 <= (ulonglong)uVar1 * 2) {
        uVar3 = 0xffffffffffffff0;
      }
      uStackY_50 = 0x143d25bbf;
      lVar4 = -(uVar3 & 0xfffffffffffffff0);
      puVar6 = auStackY_48 + lVar4;
      *(uint *)(&stack0xffffffffffffffe0 + lVar4) = uVar1;
      szProvider = (LPCWSTR)((longlong)&local_18 + lVar4);
      *(LPCWSTR *)(&stack0xffffffffffffffd8 + lVar4) = szProvider;
      *(undefined8 *)(auStackY_48 + lVar4 + -8) = 0x143d25be3;
      MultiByteToWideChar(0,0,param_2,-1,*(LPWSTR *)(&stack0xffffffffffffffd8 + lVar4),
                          *(int *)(&stack0xffffffffffffffe0 + lVar4));
      puVar7 = auStackY_48 + lVar4;
      if (szProvider != (LPCWSTR)0x0) {
        *(undefined4 *)(&stack0xffffffffffffffd8 + lVar4) = 0xf0000000;
        *(undefined8 *)(auStackY_48 + lVar4 + -8) = 0x143d25c02;
        BVar2 = CryptAcquireContextW
                          (&local_18,(LPCWSTR)0x0,szProvider,param_3,
                           *(DWORD *)(&stack0xffffffffffffffd8 + lVar4));
        puVar7 = auStackY_48 + lVar4;
        if (BVar2 != 0) {
          *(undefined8 *)(auStackY_48 + lVar4 + -8) = 0x143d25c12;
          CryptReleaseContext(local_18,0);
          goto LAB_143d25c12;
        }
      }
    }
    if (DAT_146bcb6d8 == 0) {
      *(undefined8 *)(puVar7 + -8) = 0x143d25c76;
      DAT_146bcb6d8 = ERR_get_next_error_library();
    }
    *(undefined4 *)(puVar7 + 0x20) = 0x66f;
    *(undefined8 *)(puVar7 + -8) = 0x143d25c9b;
    ERR_put_error(DAT_146bcb6d8,0x66,0x68,"engines\\e_capi.c");
    *(undefined8 *)(puVar7 + -8) = 0x143d25ca0;
    capi_addlasterror();
    uVar5 = 0;
  }
  *(undefined8 *)(puVar7 + -8) = 0x143d25cd3;
  return uVar5;
}



// FUNCTION 143d25cf0 capi_destroy body=124 status=ok
// SIG undefined capi_destroy(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 capi_destroy(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0x143d25cfa;
  RSA_meth_free(DAT_146bcb6e0);
  DAT_146bcb6e0 = 0;
  DSA_meth_free(DAT_146bcb6e8);
  DAT_146bcb6e8 = 0;
  if (DAT_146bcb6dc != 0) {
    ERR_unload_strings(DAT_146bcb6d8,&DAT_146837370,param_3,param_4,uVar1);
    ERR_unload_strings(DAT_146bcb6d8,&DAT_1468374c0);
    DAT_146bcb6dc = 0;
  }
  return 1;
}



// FUNCTION 143d25d70 capi_dsa_do_sign body=852 status=ok
// SIG undefined capi_dsa_do_sign(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong capi_dsa_do_sign(BYTE *param_1,int param_2,undefined8 param_3)

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
  BYTE BVar10;
  BOOL BVar11;
  int iVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStackY_88 [32];
  DWORD local_58 [2];
  HCRYPTHASH local_50;
  BYTE local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  BYTE local_35;
  undefined1 local_34 [20];
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStackY_88;
  lVar17 = 0;
  uVar13 = FARSupportInterface::GetXRTrackingSystem(param_3);
  uVar13 = ENGINE_get_ex_data(uVar13,DAT_1468376c0);
  CAPI_trace(uVar13,"Called CAPI_dsa_do_sign()\n");
  lVar14 = DSA_get_ex_data(param_3,DAT_1468376c8);
  if (lVar14 == 0) {
    if (DAT_146bcb6d8 == 0) {
      DAT_146bcb6d8 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_146bcb6d8,0x72,0x66,"engines\\e_capi.c");
    return 0;
  }
  if (param_2 != 0x14) {
    if (DAT_146bcb6d8 == 0) {
      DAT_146bcb6d8 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_146bcb6d8,0x72,0x76,"engines\\e_capi.c");
    return 0;
  }
  BVar11 = CryptCreateHash(*(HCRYPTPROV *)(lVar14 + 8),0x8004,0,0,&local_50);
  if (BVar11 == 0) {
    if (DAT_146bcb6d8 == 0) {
      DAT_146bcb6d8 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_146bcb6d8,0x72,100,"engines\\e_capi.c");
    capi_addlasterror();
    return 0;
  }
  BVar11 = CryptSetHashParam(local_50,2,param_1,0);
  if (BVar11 == 0) {
    if (DAT_146bcb6d8 == 0) {
      DAT_146bcb6d8 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_146bcb6d8,0x72,0x67,"engines\\e_capi.c");
    capi_addlasterror();
  }
  else {
    local_58[0] = 0x28;
    BVar11 = CryptSignHashW(local_50,*(DWORD *)(lVar14 + 0x18),(LPCWSTR)0x0,0,&local_48,local_58);
    if (BVar11 == 0) {
      if (DAT_146bcb6d8 == 0) {
        DAT_146bcb6d8 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_146bcb6d8,0x72,0x72,"engines\\e_capi.c");
      capi_addlasterror();
    }
    else {
      lVar14 = BN_new();
      lVar15 = BN_new();
      BVar10 = local_35;
      uVar9 = local_36;
      uVar8 = local_37;
      uVar7 = local_38;
      uVar6 = local_39;
      uVar5 = local_3a;
      uVar4 = local_3b;
      uVar3 = local_3c;
      uVar2 = local_3d;
      uVar1 = local_3e;
      if ((lVar14 != 0) && (lVar15 != 0)) {
        local_35 = local_48;
        local_48 = BVar10;
        local_36 = local_47;
        local_47 = uVar9;
        local_37 = local_46;
        local_46 = uVar8;
        local_38 = local_45;
        local_45 = uVar7;
        local_39 = local_44;
        local_44 = uVar6;
        local_3a = local_43;
        local_43 = uVar5;
        local_3b = local_42;
        local_42 = uVar4;
        local_3c = local_41;
        local_41 = uVar3;
        local_3d = local_40;
        local_40 = uVar2;
        local_3e = local_3f;
        local_3f = uVar1;
        lVar16 = BN_bin2bn(&local_48,0x14,lVar14);
        if ((lVar16 != 0) &&
           ((iVar12 = lend_tobn(lVar15,local_34,0x14), lVar17 = 0, iVar12 != 0 &&
            (lVar17 = DSA_SIG_new(), lVar17 != 0)))) {
          ECDSA_SIG_set0(lVar17,lVar14,lVar15);
          goto LAB_143d26088;
        }
      }
      BN_free(lVar14);
      BN_free(lVar15);
    }
  }
LAB_143d26088:
  FUN_14004ff40(&local_48,0x28);
  CryptDestroyHash(local_50);
  return lVar17;
}



// FUNCTION 143d260d0 capi_dsa_free body=131 status=ok
// SIG undefined capi_dsa_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 capi_dsa_free(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)DSA_get_ex_data(param_1,DAT_1468376c8);
  if (puVar1 != (undefined8 *)0x0) {
    CryptDestroyKey(puVar1[2]);
    CryptReleaseContext(puVar1[1],0);
    if ((PCCERT_CONTEXT)*puVar1 != (PCCERT_CONTEXT)0x0) {
      CertFreeCertificateContext((PCCERT_CONTEXT)*puVar1);
    }
    CRYPTO_free(puVar1,"engines\\e_capi.c",0x63a);
  }
  DSA_set_ex_data(param_1,DAT_1468376c8,0);
  return 1;
}



// FUNCTION 143d26160 capi_dump_cert body=560 status=ok
// SIG undefined capi_dump_cert(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void capi_dump_cert(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 local_res8;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  if ((uVar1 & 2) != 0) {
    lVar2 = capi_cert_get_fname(param_1,param_3,param_3,param_4,0x143d2616d);
    if (lVar2 == 0) {
      BIO_printf(param_2,"  <No Friendly Name>\n");
    }
    else {
      BIO_printf(param_2,"  Friendly Name \"%s\"\n",lVar2);
      CRYPTO_free(lVar2,"engines\\e_capi.c",0x54e);
    }
  }
  local_res8 = *(undefined8 *)(param_3 + 8);
  lVar2 = d2i_X509(0,&local_res8,*(undefined4 *)(param_3 + 0x10));
  if (lVar2 == 0) {
    BIO_printf(param_2,"  <Can\'t parse certificate>\n");
  }
  if ((uVar1 & 1) != 0) {
    BIO_printf(param_2,"  Subject: ");
    uVar3 = FBackChannelConnection::GetSocket(lVar2);
    X509_NAME_print_ex(param_2,uVar3,0,0x82031f);
    BIO_printf(param_2,"\n  Issuer: ");
    uVar3 = FVoicePacketImpl::GetSampleCounter(lVar2);
    X509_NAME_print_ex(param_2,uVar3,0,0x82031f);
    BIO_printf(param_2,&DAT_143fc48d8);
  }
  if ((uVar1 & 4) != 0) {
    X509_print_ex(param_2,lVar2,0x82031f,0);
  }
  if ((uVar1 & 0x20) != 0) {
    puVar4 = (undefined8 *)capi_get_prov_info(param_1,param_3);
    if (puVar4 == (undefined8 *)0x0) {
      BIO_printf(param_2,"  No Private Key\n");
    }
    else {
      lVar5 = wide_to_asc(puVar4[1]);
      lVar6 = wide_to_asc(*puVar4);
      if ((lVar5 != 0) && (lVar6 != 0)) {
        BIO_printf(param_2,"  Private Key Info:\n");
        BIO_printf(param_2,"    Provider Name:  %s, Provider Type %lu\n",lVar5,
                   *(undefined4 *)(puVar4 + 2));
        BIO_printf(param_2,"    Container Name: %s, Key Type %lu\n",lVar6,
                   *(undefined4 *)(puVar4 + 5));
      }
      CRYPTO_free(lVar5,"engines\\e_capi.c",0x527);
      CRYPTO_free(lVar6,"engines\\e_capi.c",0x528);
    }
    CRYPTO_free(puVar4,"engines\\e_capi.c",0x566);
  }
  if ((uVar1 & 8) != 0) {
    PEM_write_bio_X509(param_2,lVar2);
  }
  X509_free(lVar2);
  return;
}



// FUNCTION 143d26390 capi_find_cert body=498 status=ok
// SIG undefined capi_find_cert(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

PCCERT_CONTEXT capi_find_cert(longlong param_1,void *param_2,HCERTSTORE param_3)

{
  char cVar1;
  char cVar2;
  BOOL BVar3;
  PCCERT_CONTEXT pCVar4;
  void *pvData;
  char *pcVar5;
  char *pcVar6;
  DWORD local_res8 [2];
  
  if (*(int *)(param_1 + 0x3c) == 1) {
    pCVar4 = CertFindCertificateInStore(param_3,1,0,0x70007,param_2,(PCCERT_CONTEXT)0x0);
    return pCVar4;
  }
  if (*(int *)(param_1 + 0x3c) != 2) {
    return (PCCERT_CONTEXT)0x0;
  }
  pCVar4 = CertEnumCertificatesInStore(param_3,(PCCERT_CONTEXT)0x0);
  do {
    if (pCVar4 == (PCCERT_CONTEXT)0x0) {
      return (PCCERT_CONTEXT)0x0;
    }
    CAPI_trace(param_1,"capi_cert_get_fname\n");
    BVar3 = CertGetCertificateContextProperty(pCVar4,0xb,(void *)0x0,local_res8);
    if ((BVar3 != 0) &&
       (pvData = (void *)CRYPTO_malloc(local_res8[0],"engines\\e_capi.c"), pvData != (void *)0x0)) {
      BVar3 = CertGetCertificateContextProperty(pCVar4,0xb,pvData,local_res8);
      if (BVar3 == 0) {
        if (DAT_146bcb6d8 == 0) {
          DAT_146bcb6d8 = ERR_get_next_error_library();
        }
        ERR_put_error(DAT_146bcb6d8,99,0x6f,"engines\\e_capi.c",0x53d);
        capi_addlasterror();
        CRYPTO_free(pvData,"engines\\e_capi.c");
      }
      else {
        pcVar5 = (char *)wide_to_asc(pvData);
        CRYPTO_free(pvData,"engines\\e_capi.c");
        if (pcVar5 != (char *)0x0) {
          pcVar6 = pcVar5;
          do {
            cVar1 = *pcVar6;
            cVar2 = pcVar6[(longlong)param_2 - (longlong)pcVar5];
            if (cVar1 != cVar2) break;
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          CRYPTO_free(pcVar5,"engines\\e_capi.c");
          if (cVar1 == cVar2) {
            return pCVar4;
          }
        }
      }
    }
    pCVar4 = CertEnumCertificatesInStore(param_3,pCVar4);
  } while( true );
}



// FUNCTION 143d26590 capi_find_key body=453 status=ok
// SIG undefined capi_find_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 capi_find_key(longlong param_1,LPCSTR param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  LPCSTR pCVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  HCERTSTORE hCertStore;
  PCCERT_CONTEXT pCertContext;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 uStackY_60;
  undefined1 auStackY_58 [32];
  ulonglong local_28 [2];
  undefined8 uVar12;
  
  local_28[1] = 0x143d265a0;
  local_28[0] = DAT_1468387a8 ^ (ulonglong)local_28;
  iVar7 = *(int *)(param_1 + 0x3c);
  uVar12 = 0;
  uVar11 = 0;
  uVar8 = uVar12;
  puVar10 = auStackY_58;
  if (0 < iVar7) {
    if (iVar7 < 3) {
      uStackY_60 = 0x143d266f0;
      hCertStore = (HCERTSTORE)capi_open_store(param_1,0);
      uVar8 = 0;
      puVar10 = auStackY_58;
      if (hCertStore != (HCERTSTORE)0x0) {
        uStackY_60 = 0x143d26706;
        pCertContext = (PCCERT_CONTEXT)capi_find_cert(param_1,param_2,hCertStore);
        uVar8 = uVar12;
        if (pCertContext != (PCCERT_CONTEXT)0x0) {
          uStackY_60 = 0x143d26719;
          uVar8 = capi_get_cert_key(param_1,pCertContext);
          uStackY_60 = 0x143d26725;
          CertFreeCertificateContext(pCertContext);
        }
        uStackY_60 = 0x143d26730;
        CertCloseStore(hCertStore,0);
        puVar10 = auStackY_58;
      }
    }
    else {
      puVar10 = auStackY_58;
      if (iVar7 == 3) {
        uStackY_60 = 0x143d26601;
        uVar6 = MultiByteToWideChar(0,0,param_2,-1,(LPWSTR)0x0,0);
        puVar10 = auStackY_58;
        if (uVar6 != 0) {
          uVar9 = (ulonglong)uVar6 * 2 + 0xf;
          if (uVar9 <= (ulonglong)uVar6 * 2) {
            uVar9 = 0xffffffffffffff0;
          }
          uStackY_60 = 0x143d26632;
          lVar4 = -(uVar9 & 0xfffffffffffffff0);
          *(uint *)(&stack0xffffffffffffffd0 + lVar4) = uVar6;
          *(longlong *)(&stack0xffffffffffffffc8 + lVar4) = (longlong)local_28 + lVar4;
          *(undefined8 *)(auStackY_58 + lVar4 + -8) = 0x143d26656;
          iVar7 = MultiByteToWideChar(0,0,param_2,-1,*(LPWSTR *)(&stack0xffffffffffffffc8 + lVar4),
                                      *(int *)(&stack0xffffffffffffffd0 + lVar4));
          uVar8 = uVar11;
          puVar10 = auStackY_58 + lVar4;
          if (iVar7 != 0) {
            pCVar3 = *(LPCSTR *)(param_1 + 0x18);
            *(undefined4 *)(&stack0xffffffffffffffd0 + lVar4) = 0;
            *(undefined8 *)(&stack0xffffffffffffffc8 + lVar4) = 0;
            *(undefined8 *)(auStackY_58 + lVar4 + -8) = 0x143d2667b;
            uVar6 = MultiByteToWideChar(0,0,pCVar3,-1,*(LPWSTR *)(&stack0xffffffffffffffc8 + lVar4),
                                        *(int *)(&stack0xffffffffffffffd0 + lVar4));
            puVar10 = auStackY_58 + lVar4;
            if (uVar6 != 0) {
              uVar9 = (ulonglong)uVar6 * 2 + 0xf;
              if (uVar9 <= (ulonglong)uVar6 * 2) {
                uVar9 = 0xffffffffffffff0;
              }
              *(undefined8 *)(auStackY_58 + lVar4 + -8) = 0x143d266a2;
              pCVar3 = *(LPCSTR *)(param_1 + 0x18);
              lVar5 = -(uVar9 & 0xfffffffffffffff0);
              *(uint *)(auStackY_58 + lVar5 + lVar4 + 0x28) = uVar6;
              lVar1 = (longlong)local_28 + lVar5 + lVar4;
              *(longlong *)(auStackY_58 + lVar5 + lVar4 + 0x20) = lVar1;
              *(undefined8 *)(auStackY_58 + lVar5 + lVar4 + -8) = 0x143d266c7;
              iVar7 = MultiByteToWideChar(0,0,pCVar3,-1,
                                          *(LPWSTR *)(auStackY_58 + lVar5 + lVar4 + 0x20),
                                          *(int *)(auStackY_58 + lVar5 + lVar4 + 0x28));
              puVar10 = auStackY_58 + lVar5 + lVar4;
              if (iVar7 != 0) {
                uVar2 = *(undefined4 *)(param_1 + 0x20);
                *(undefined4 *)(auStackY_58 + lVar5 + lVar4 + 0x20) =
                     *(undefined4 *)(param_1 + 0x10);
                *(undefined8 *)(auStackY_58 + lVar5 + lVar4 + -8) = 0x143d266e4;
                uVar8 = capi_get_key(param_1,(longlong)local_28 + lVar4,lVar1,uVar2);
                puVar10 = auStackY_58 + lVar5 + lVar4;
              }
            }
          }
        }
      }
    }
  }
  *(undefined8 *)(puVar10 + -8) = 0x143d2673f;
  return uVar8;
}



// FUNCTION 143d26760 capi_finish body=201 status=ok
// SIG undefined capi_finish(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 capi_finish(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = ENGINE_get_ex_data(param_1,DAT_1468376c0);
  CAPI_trace(lVar1,"Calling capi_ctx_free with %lx\n",lVar1);
  if (lVar1 != 0) {
    CRYPTO_free(*(undefined8 *)(lVar1 + 0x18),"engines\\e_capi.c",0x656);
    CRYPTO_free(*(undefined8 *)(lVar1 + 8),"engines\\e_capi.c",0x657);
    CRYPTO_free(*(undefined8 *)(lVar1 + 0x28),"engines\\e_capi.c",0x658);
    CRYPTO_free(*(undefined8 *)(lVar1 + 0x30),"engines\\e_capi.c",0x659);
    CRYPTO_free(lVar1,"engines\\e_capi.c",0x65a);
  }
  ENGINE_set_ex_data(param_1,DAT_1468376c0,0);
  return 1;
}



// FUNCTION 143d26830 capi_free_key body=85 status=ok
// SIG undefined capi_free_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void capi_free_key(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    CryptDestroyKey(param_1[2]);
    CryptReleaseContext(param_1[1],0);
    if ((PCCERT_CONTEXT)*param_1 != (PCCERT_CONTEXT)0x0) {
      CertFreeCertificateContext((PCCERT_CONTEXT)*param_1);
    }
    CRYPTO_free(param_1,"engines\\e_capi.c",0x63a);
  }
  return;
}



// FUNCTION 143d26890 capi_get_cert_key body=111 status=ok
// SIG undefined capi_get_cert_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 capi_get_cert_key(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143d268a5;
  uVar2 = 0;
  puVar1 = (undefined8 *)capi_get_prov_info();
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = capi_get_key(param_1,*puVar1,puVar1[1],*(undefined4 *)(puVar1 + 2),
                         *(undefined4 *)(puVar1 + 5),uVar3);
  }
  CRYPTO_free(puVar1,"engines\\e_capi.c",0x604);
  return uVar2;
}



// FUNCTION 143d26900 capi_get_key body=517 status=ok
// SIG undefined capi_get_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * capi_get_key(int *param_1,LPCWSTR param_2,wchar_t *param_3,DWORD param_4,DWORD param_5)

{
  WCHAR WVar1;
  WCHAR WVar2;
  BOOL BVar3;
  undefined8 *puVar4;
  LPCWSTR pWVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0x143d2691a;
  puVar4 = (undefined8 *)CRYPTO_malloc(0x20,"engines\\e_capi.c",0x5cb);
  if (puVar4 != (undefined8 *)0x0) {
    if ((param_4 == 1) && (DAT_146bcb6f0 != 0)) {
      pWVar5 = param_3;
      do {
        WVar1 = *pWVar5;
        WVar2 = *(WCHAR *)((longlong)pWVar5 +
                          ((longlong)L"Microsoft Enhanced Cryptographic Provider v1.0" -
                          (longlong)param_3));
        if (WVar1 != WVar2) break;
        pWVar5 = pWVar5 + 1;
      } while (WVar2 != L'\0');
      if (WVar1 == WVar2) {
        param_3 = L"Microsoft Enhanced RSA and AES Cryptographic Provider";
        param_4 = 0x18;
      }
    }
    if (((param_1 != (int *)0x0) && (1 < *param_1)) && (*(longlong *)(param_1 + 2) != 0)) {
      uVar6 = wide_to_asc(param_2);
      uVar7 = wide_to_asc(param_3);
      CAPI_trace(param_1,"capi_get_key, contname=%s, provname=%s, type=%d\n",uVar6,uVar7,param_4,
                 uVar8);
      CRYPTO_free(uVar7,"engines\\e_capi.c",0x5df);
      CRYPTO_free(uVar6,"engines\\e_capi.c",0x5e0);
    }
    BVar3 = CryptAcquireContextW
                      (puVar4 + 1,param_2,param_3,param_4,(uint)param_1[0xe] >> 0xc & 0x20);
    if (BVar3 == 0) {
      if (DAT_146bcb6d8 == 0) {
        DAT_146bcb6d8 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_146bcb6d8,0x67,0x68,"engines\\e_capi.c",0x5e6);
      capi_addlasterror();
    }
    else {
      BVar3 = CryptGetUserKey(puVar4[1],param_5,puVar4 + 2);
      if (BVar3 != 0) {
        *(DWORD *)(puVar4 + 3) = param_5;
        *puVar4 = 0;
        return puVar4;
      }
      if (DAT_146bcb6d8 == 0) {
        DAT_146bcb6d8 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_146bcb6d8,0x67,0x75,"engines\\e_capi.c",0x5eb);
      capi_addlasterror();
      CryptReleaseContext(puVar4[1],0);
    }
    CRYPTO_free(puVar4,"engines\\e_capi.c",0x5f5);
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143d26b10 capi_get_pkey body=1333 status=ok
// SIG undefined capi_get_pkey(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong capi_get_pkey(undefined8 param_1,longlong param_2)

{
  BOOL BVar1;
  int iVar2;
  BYTE *pbData;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  BYTE *pBVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStackY_98 [32];
  DWORD local_68 [2];
  longlong local_60;
  longlong local_58;
  longlong local_50 [2];
  ulonglong local_40;
  longlong lVar12;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStackY_98;
  lVar12 = 0;
  lVar11 = 0;
  lVar5 = 0;
  lVar9 = 0;
  lVar3 = 0;
  lVar13 = 0;
  local_50[0] = param_2;
  BVar1 = CryptExportKey(*(HCRYPTKEY *)(param_2 + 0x10),0,6,0,(BYTE *)0x0,local_68);
  if (BVar1 == 0) {
    if (DAT_146bcb6d8 == 0) {
      DAT_146bcb6d8 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_146bcb6d8,0x73,0x7c,"engines\\e_capi.c");
    capi_addlasterror();
    return 0;
  }
  pbData = (BYTE *)CRYPTO_malloc(local_68[0],"engines\\e_capi.c",0x282);
  lVar6 = lVar12;
  lVar14 = lVar3;
  if (pbData == (BYTE *)0x0) goto LAB_143d26fb5;
  BVar1 = CryptExportKey(*(HCRYPTKEY *)(param_2 + 0x10),0,6,0,pbData,local_68);
  if (BVar1 == 0) {
    if (DAT_146bcb6d8 == 0) {
      DAT_146bcb6d8 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_146bcb6d8,0x73,0x7b,"engines\\e_capi.c");
    capi_addlasterror();
    lVar11 = lVar12;
    lVar13 = lVar3;
    goto LAB_143d26feb;
  }
  if (*pbData == '\x06') {
    if ((*(int *)(pbData + 4) - 0x2400U & 0xffff7fff) == 0) {
      if (*(int *)(pbData + 8) == 0x31415352) {
        lVar6 = RSA_new_method(param_1);
        lVar5 = lVar9;
        lVar14 = lVar13;
        if (lVar6 != 0) {
          lVar5 = BN_new();
          lVar11 = BN_new();
          if ((lVar5 == 0) || (lVar11 == 0)) {
            BN_free(lVar5);
LAB_143d26fb0:
            BN_free(lVar11);
            lVar5 = lVar9;
            lVar14 = lVar3;
          }
          else {
            RSA_set0_key(lVar6,lVar11,lVar5,0);
            iVar2 = BN_set_word(lVar5,*(undefined4 *)(pbData + 0x10));
            lVar5 = lVar9;
            if ((iVar2 != 0) &&
               (iVar2 = lend_tobn(lVar11,pbData + 0x14,*(uint *)(pbData + 0xc) >> 3), iVar2 != 0)) {
              RSA_set_ex_data(lVar6,DAT_1468376c4,param_2);
              lVar5 = EVP_PKEY_new();
              if (lVar5 != 0) {
                EVP_PKEY_assign(lVar5,6,lVar6);
                lVar11 = 0;
                goto LAB_143d26feb;
              }
            }
          }
        }
LAB_143d26fb5:
        if (DAT_146bcb6d8 == 0) {
          DAT_146bcb6d8 = ERR_get_next_error_library();
        }
        uVar10 = 0x41;
        goto LAB_143d26fd8;
      }
      BIO_snprintf(local_50,10,&DAT_145d80128);
      if (DAT_146bcb6d8 == 0) {
        DAT_146bcb6d8 = ERR_get_next_error_library();
      }
      uVar10 = 0x7a;
    }
    else {
      if (*(int *)(pbData + 4) != 0x2200) {
        BIO_snprintf(local_50,10,&DAT_145d8013c);
        if (DAT_146bcb6d8 == 0) {
          DAT_146bcb6d8 = ERR_get_next_error_library();
        }
        ERR_put_error(DAT_146bcb6d8,0x73,0x80,"engines\\e_capi.c");
        ERR_add_error_data(2,"aiKeyAlg=0x",local_50);
        lVar5 = lVar9;
        goto LAB_143d26feb;
      }
      if (*(int *)(pbData + 8) == 0x31535344) {
        pBVar8 = pbData + 0x10;
        uVar7 = *(uint *)(pbData + 0xc) >> 3;
        lVar3 = DSA_new_method(param_1);
        lVar14 = lVar3;
        if (lVar3 != 0) {
          local_58 = BN_new();
          lVar13 = BN_new();
          lVar4 = BN_new();
          local_60 = BN_new();
          if ((((local_58 == 0) || (lVar13 == 0)) || (lVar4 == 0)) || (local_60 == 0)) {
            BN_free();
            BN_free(lVar13);
            BN_free(lVar4);
            lVar11 = local_60;
            goto LAB_143d26fb0;
          }
          DSA_set0_pqg(lVar3,local_58,lVar13,lVar4);
          DSA_set0_key(lVar3,local_60,0);
          iVar2 = lend_tobn(local_58,pBVar8,uVar7);
          if (iVar2 != 0) {
            pBVar8 = pBVar8 + uVar7;
            iVar2 = lend_tobn(lVar13,pBVar8,0x14);
            lVar5 = lVar9;
            lVar6 = lVar11;
            if (iVar2 != 0) {
              iVar2 = lend_tobn(lVar4,pBVar8 + 0x14,uVar7);
              if ((iVar2 != 0) &&
                 (iVar2 = lend_tobn(local_60,pBVar8 + 0x14 + uVar7,uVar7), iVar2 != 0)) {
                DSA_set_ex_data(lVar3,DAT_1468376c8,local_50[0]);
                lVar5 = EVP_PKEY_new();
                if (lVar5 != 0) {
                  EVP_PKEY_assign(lVar5,0x74,lVar3);
                  lVar13 = 0;
                  lVar11 = lVar12;
                  goto LAB_143d26feb;
                }
              }
            }
          }
        }
        goto LAB_143d26fb5;
      }
      BIO_snprintf(local_50,10,&DAT_145d80128);
      if (DAT_146bcb6d8 == 0) {
        DAT_146bcb6d8 = ERR_get_next_error_library();
      }
      uVar10 = 0x77;
    }
    ERR_put_error(DAT_146bcb6d8,0x73,uVar10,"engines\\e_capi.c");
    ERR_add_error_data(2,"magic=0x",local_50);
    lVar11 = lVar12;
    lVar13 = lVar3;
  }
  else {
    if (DAT_146bcb6d8 == 0) {
      DAT_146bcb6d8 = ERR_get_next_error_library();
    }
    uVar10 = 0x79;
LAB_143d26fd8:
    ERR_put_error(DAT_146bcb6d8,0x73,uVar10,"engines\\e_capi.c");
    lVar11 = lVar6;
    lVar13 = lVar14;
  }
LAB_143d26feb:
  CRYPTO_free(pbData,"engines\\e_capi.c",0x2ff);
  if (lVar5 == 0) {
    RSA_free(lVar11);
    DSA_free(lVar13);
  }
  return lVar5;
}



// FUNCTION 143d27050 capi_get_prov_info body=281 status=ok
// SIG undefined capi_get_prov_info(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void * capi_get_prov_info(undefined8 param_1,PCCERT_CONTEXT param_2)

{
  BOOL BVar1;
  void *pvData;
  DWORD local_res18 [4];
  undefined8 uVar2;
  
  uVar2 = 0x143d2705c;
  BVar1 = CertGetCertificateContextProperty(param_2,2,(void *)0x0,local_res18);
  if (BVar1 == 0) {
    return (void *)0x0;
  }
  pvData = (void *)CRYPTO_malloc(local_res18[0],"engines\\e_capi.c",0x504);
  if (pvData == (void *)0x0) {
    if (DAT_146bcb6d8 == 0) {
      DAT_146bcb6d8 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_146bcb6d8,0x69,0x41,"engines\\e_capi.c",0x506,uVar2);
    return (void *)0x0;
  }
  BVar1 = CertGetCertificateContextProperty(param_2,2,pvData,local_res18);
  if (BVar1 == 0) {
    if (DAT_146bcb6d8 == 0) {
      DAT_146bcb6d8 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_146bcb6d8,0x69,0x70,"engines\\e_capi.c",0x50c,uVar2);
    capi_addlasterror();
    CRYPTO_free(pvData,"engines\\e_capi.c",0x50e);
    return (void *)0x0;
  }
  return pvData;
}



// FUNCTION 143d27170 capi_get_provname body=514 status=ok
// SIG undefined capi_get_provname(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 capi_get_provname(undefined8 param_1,longlong *param_2,DWORD *param_3,DWORD param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  LPWSTR szProvName;
  longlong lVar3;
  undefined4 uVar5;
  LPWSTR pWVar4;
  DWORD local_18 [2];
  undefined8 uStack_10;
  
  uStack_10 = 0x143d27190;
  CAPI_trace(param_1,"capi_get_provname, index=%d\n",param_4);
  uVar5 = 0;
  BVar1 = CryptEnumProvidersW(param_4,(DWORD *)0x0,0,param_3,(LPWSTR)0x0,local_18);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 == 0x103) {
      return 2;
    }
    if (DAT_146bcb6d8 == 0) {
      DAT_146bcb6d8 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_146bcb6d8,0x68,0x69,"engines\\e_capi.c",0x476);
    capi_adderror(DVar2);
  }
  else {
    szProvName = (LPWSTR)CRYPTO_malloc(local_18[0],"engines\\e_capi.c",0x47a);
    if (szProvName == (LPWSTR)0x0) {
      if (DAT_146bcb6d8 == 0) {
        DAT_146bcb6d8 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_146bcb6d8,0x68,0x41,"engines\\e_capi.c",CONCAT44(uVar5,0x47c));
      return 0;
    }
    pWVar4 = szProvName;
    BVar1 = CryptEnumProvidersW(param_4,(DWORD *)0x0,0,param_3,szProvName,local_18);
    uVar5 = (undefined4)((ulonglong)pWVar4 >> 0x20);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      CRYPTO_free(szProvName,"engines\\e_capi.c",0x481);
      if (DVar2 == 0x103) {
        return 2;
      }
      if (DAT_146bcb6d8 == 0) {
        DAT_146bcb6d8 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_146bcb6d8,0x68,0x69,"engines\\e_capi.c",CONCAT44(uVar5,0x484));
      capi_adderror(DVar2);
      return 0;
    }
    lVar3 = wide_to_asc(szProvName);
    *param_2 = lVar3;
    CRYPTO_free(szProvName,"engines\\e_capi.c",0x48a);
    if (*param_2 != 0) {
      CAPI_trace(param_1,"capi_get_provname, returned name=%s, type=%d\n",*param_2,*param_3);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143d27380 capi_init body=860 status=ok
// SIG undefined capi_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 capi_init(undefined8 param_1)

{
  int iVar1;
  BOOL BVar2;
  WriteBytesMem *this;
  uchar *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  HCRYPTPROV local_res10;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar8 = 0x143d27395;
  if (DAT_1468376c0 < 0) {
    uVar7 = 0;
    DAT_1468376c0 = CRYPTO_get_ex_new_index(10,0,0,0,0,0);
    if (DAT_1468376c0 < 0) goto LAB_143d27605;
    DAT_1468376cc = CRYPTO_get_ex_new_index(3,0,0,0,0,0);
    uVar7 = 0;
    DAT_1468376c4 = CRYPTO_get_ex_new_index(9,0,0,0,0,0);
    this = (WriteBytesMem *)FUN_143d5eb80();
    uVar8 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
            ::GetBoundProgramCounterForTimerManager(this);
    iVar1 = RSA_meth_set_pub_enc(DAT_146bcb6e0,uVar8);
    if (iVar1 == 0) goto LAB_143d27605;
    puVar3 = AK::WriteBytesMem::Bytes(this);
    iVar1 = EVP_MD_meth_set_init(DAT_146bcb6e0,puVar3);
    if (iVar1 == 0) goto LAB_143d27605;
    iVar1 = EVP_MD_meth_set_update(DAT_146bcb6e0,capi_rsa_priv_enc);
    if (iVar1 == 0) goto LAB_143d27605;
    iVar1 = EVP_MD_meth_set_final(DAT_146bcb6e0,capi_rsa_priv_dec);
    if (iVar1 == 0) goto LAB_143d27605;
    uVar8 = FNiagaraEmitterHandle::GetInstance(this);
    iVar1 = ENGINE_set_EC(DAT_146bcb6e0,uVar8);
    if (iVar1 == 0) goto LAB_143d27605;
    uVar8 = FVoicePacketImpl::GetSampleCounter(this);
    iVar1 = ENGINE_set_RAND(DAT_146bcb6e0,uVar8);
    if (iVar1 == 0) goto LAB_143d27605;
    iVar1 = ENGINE_set_digests(DAT_146bcb6e0,capi_rsa_free);
    if (iVar1 == 0) goto LAB_143d27605;
    iVar1 = ENGINE_set_destroy_function(DAT_146bcb6e0,capi_rsa_sign);
    if (iVar1 == 0) goto LAB_143d27605;
    uVar8 = 0;
    uVar7 = 0;
    DAT_1468376c8 = CRYPTO_get_ex_new_index(7,0,0,0,0,0);
    uVar4 = FUN_143d73aa0();
    iVar1 = RSA_meth_set_pub_enc(DAT_146bcb6e8,capi_dsa_do_sign);
    if (iVar1 == 0) goto LAB_143d27605;
    uVar5 = FUniqueNetIdString::GetBytes(uVar4);
    iVar1 = EVP_MD_meth_set_update(DAT_146bcb6e8,uVar5);
    if (iVar1 == 0) goto LAB_143d27605;
    iVar1 = ENGINE_set_ciphers(DAT_146bcb6e8,capi_dsa_free);
    if (iVar1 == 0) goto LAB_143d27605;
    uVar5 = USignificanceManager::GetWorld(uVar4);
    iVar1 = EVP_MD_meth_set_final(DAT_146bcb6e8,uVar5);
    if (iVar1 == 0) goto LAB_143d27605;
    uVar4 = FNiagaraEmitterHandle::GetInstance(uVar4);
    iVar1 = ENGINE_set_EC(DAT_146bcb6e8,uVar4);
    if (iVar1 == 0) goto LAB_143d27605;
  }
  lVar6 = CRYPTO_zalloc(0x60,"engines\\e_capi.c",0x641);
  iVar1 = DAT_1468376c0;
  if (lVar6 != 0) {
    *(code **)(lVar6 + 0x48) = AK::MemoryMgr::GetPoolName;
    *(undefined4 *)(lVar6 + 0x20) = 1;
    *(undefined4 *)(lVar6 + 0x40) = 3;
    *(undefined4 *)(lVar6 + 0x10) = 1;
    *(undefined4 *)(lVar6 + 0x38) = 0x1c000;
    *(undefined4 *)(lVar6 + 0x3c) = 1;
    ENGINE_set_ex_data(param_1,iVar1,lVar6);
    BVar2 = CryptAcquireContextW
                      (&local_res10,(LPCWSTR)0x0,
                       L"Microsoft Enhanced RSA and AES Cryptographic Provider",0x18,0xf0000000);
    if (BVar2 != 0) {
      DAT_146bcb6f0 = 1;
      CryptReleaseContext(local_res10,0);
    }
    return 1;
  }
  if (DAT_146bcb6d8 == 0) {
    DAT_146bcb6d8 = ERR_get_next_error_library();
  }
  uVar4 = CONCAT44(uVar7,0x644);
  ERR_put_error(DAT_146bcb6d8,0x65,0x41,"engines\\e_capi.c",uVar4,uVar8);
  uVar7 = (undefined4)((ulonglong)uVar4 >> 0x20);
LAB_143d27605:
  if (DAT_146bcb6d8 == 0) {
    DAT_146bcb6d8 = ERR_get_next_error_library();
  }
  ERR_put_error(DAT_146bcb6d8,0x6a,0x41,"engines\\e_capi.c",CONCAT44(uVar7,0x1e9));
  return 0;
}



// FUNCTION 143d276e0 capi_list_certs body=285 status=ok
// SIG undefined capi_list_certs(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 capi_list_certs(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  HCERTSTORE hCertStore;
  PCCERT_CONTEXT pCVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  
  uVar5 = 1;
  puVar4 = &DAT_145d8042c;
  if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
    puVar4 = *(undefined **)(param_1 + 0x28);
  }
  CAPI_trace(param_1,"Listing certs for store %s\n",puVar4);
  hCertStore = (HCERTSTORE)capi_open_store(param_1,puVar4);
  uVar1 = 0;
  if (hCertStore != (HCERTSTORE)0x0) {
    if (param_3 == 0) {
      iVar3 = 0;
      for (pCVar2 = CertEnumCertificatesInStore(hCertStore,(PCCERT_CONTEXT)0x0); uVar5 = 1,
          pCVar2 != (PCCERT_CONTEXT)0x0; pCVar2 = CertEnumCertificatesInStore(hCertStore,pCVar2)) {
        BIO_printf(param_2,"Certificate %d\n",iVar3);
        capi_dump_cert(param_1,param_2,pCVar2);
        iVar3 = iVar3 + 1;
      }
    }
    else {
      pCVar2 = (PCCERT_CONTEXT)capi_find_cert(param_1,param_3,hCertStore);
      if (pCVar2 == (PCCERT_CONTEXT)0x0) {
        uVar5 = 0;
      }
      else {
        capi_dump_cert(param_1,param_2,pCVar2);
        CertFreeCertificateContext(pCVar2);
      }
    }
    CertCloseStore(hCertStore,0);
    uVar1 = uVar5;
  }
  return uVar1;
}



// FUNCTION 143d27800 capi_list_containers body=894 status=ok
// SIG undefined capi_list_containers(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 capi_list_containers(longlong param_1,undefined8 param_2)

{
  LPCSTR lpMultiByteStr;
  longlong lVar1;
  uint uVar2;
  HCRYPTPROV HVar3;
  undefined1 *puVar4;
  BOOL BVar5;
  DWORD DVar6;
  BYTE *pbData;
  ulonglong uVar7;
  int iVar8;
  LPCWSTR szProvider;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined8 uStackY_70;
  undefined1 auStackY_68 [32];
  DWORD local_38;
  uint uStack_34;
  HCRYPTPROV local_30;
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x143d27810;
  puVar9 = auStackY_68;
  local_28 = DAT_1468387a8 ^ (ulonglong)&local_38;
  local_38 = 0;
  uVar10 = 1;
  szProvider = (LPCWSTR)0x0;
  uStackY_70 = 0x143d2785f;
  CAPI_trace(param_1,"Listing containers CSP=%s, type = %d\n",*(undefined8 *)(param_1 + 0x18),
             *(undefined4 *)(param_1 + 0x20));
  if (*(LPCSTR *)(param_1 + 0x18) != (LPCSTR)0x0) {
    uStackY_70 = 0x143d27883;
    uStack_34 = MultiByteToWideChar(0,0,*(LPCSTR *)(param_1 + 0x18),-1,(LPWSTR)0x0,0);
    puVar4 = auStackY_68;
    if (uStack_34 != 0) {
      uVar7 = (ulonglong)uStack_34 * 2 + 0xf;
      if (uVar7 <= (ulonglong)uStack_34 * 2) {
        uVar7 = 0xffffffffffffff0;
      }
      uStackY_70 = 0x143d278b0;
      lpMultiByteStr = *(LPCSTR *)(param_1 + 0x18);
      lVar1 = -(uVar7 & 0xfffffffffffffff0);
      puVar9 = auStackY_68 + lVar1;
      *(uint *)(&stack0xffffffffffffffc0 + lVar1) = uStack_34;
      szProvider = (LPCWSTR)((longlong)&local_38 + lVar1);
      *(LPCWSTR *)(&stack0xffffffffffffffb8 + lVar1) = szProvider;
      *(undefined8 *)(auStackY_68 + lVar1 + -8) = 0x143d278d5;
      MultiByteToWideChar(0,0,lpMultiByteStr,-1,*(LPWSTR *)(&stack0xffffffffffffffb8 + lVar1),
                          *(int *)(&stack0xffffffffffffffc0 + lVar1));
      puVar4 = auStackY_68 + lVar1;
      if (szProvider != (LPCWSTR)0x0) goto LAB_143d2791a;
    }
    puVar9 = puVar4;
    if (DAT_146bcb6d8 == 0) {
      *(undefined8 *)(puVar9 + -8) = 0x143d278e9;
      DAT_146bcb6d8 = ERR_get_next_error_library();
    }
    *(undefined4 *)(puVar9 + 0x20) = 0x4bb;
    *(undefined8 *)(puVar9 + -8) = 0x143d2790e;
    ERR_put_error(DAT_146bcb6d8,0x6b,0x41,"engines\\e_capi.c");
    *(undefined8 *)(puVar9 + -8) = 0x143d27913;
    capi_addlasterror();
    uVar10 = 0;
    goto LAB_143d27b58;
  }
LAB_143d2791a:
  DVar6 = *(DWORD *)(param_1 + 0x20);
  *(undefined4 *)(puVar9 + 0x20) = 0xf0000000;
  *(undefined8 *)(puVar9 + -8) = 0x143d27935;
  BVar5 = CryptAcquireContextW(&local_30,(LPCWSTR)0x0,szProvider,DVar6,*(DWORD *)(puVar9 + 0x20));
  HVar3 = local_30;
  if (BVar5 == 0) {
    if (DAT_146bcb6d8 == 0) {
      *(undefined8 *)(puVar9 + -8) = 0x143d27948;
      DAT_146bcb6d8 = ERR_get_next_error_library();
    }
    *(undefined4 *)(puVar9 + 0x20) = 0x4c3;
    *(undefined8 *)(puVar9 + -8) = 0x143d2796d;
    ERR_put_error(DAT_146bcb6d8,0x6b,0x68,"engines\\e_capi.c");
    *(undefined8 *)(puVar9 + -8) = 0x143d27972;
    capi_addlasterror();
    uVar10 = 0;
    goto LAB_143d27b58;
  }
  *(undefined4 *)(puVar9 + 0x20) = 1;
  *(undefined8 *)(puVar9 + -8) = 0x143d27993;
  BVar5 = CryptGetProvParam(HVar3,2,(BYTE *)0x0,&local_38,*(DWORD *)(puVar9 + 0x20));
  DVar6 = local_38;
  if (BVar5 == 0) {
    if (DAT_146bcb6d8 == 0) {
      *(undefined8 *)(puVar9 + -8) = 0x143d279a6;
      DAT_146bcb6d8 = ERR_get_next_error_library();
    }
    *(undefined4 *)(puVar9 + 0x20) = 0x4c9;
    *(undefined8 *)(puVar9 + -8) = 0x143d279cb;
    ERR_put_error(DAT_146bcb6d8,0x6b,0x6c,"engines\\e_capi.c");
    *(undefined8 *)(puVar9 + -8) = 0x143d279d0;
    capi_addlasterror();
    *(undefined8 *)(puVar9 + -8) = 0x143d279dc;
    CryptReleaseContext(local_30,0);
    uVar10 = 0;
    goto LAB_143d27b58;
  }
  *(undefined8 *)(puVar9 + -8) = 0x143d279f6;
  CAPI_trace(param_1,"Got max container len %d\n",DVar6);
  DVar6 = local_38;
  if (local_38 == 0) {
    DVar6 = 0x400;
  }
  local_38 = DVar6;
  *(undefined8 *)(puVar9 + -8) = 0x143d27a1a;
  pbData = (BYTE *)CRYPTO_malloc(DVar6,"engines\\e_capi.c",0x4d1);
  if (pbData == (BYTE *)0x0) {
    if (DAT_146bcb6d8 == 0) {
      *(undefined8 *)(puVar9 + -8) = 0x143d27a31;
      DAT_146bcb6d8 = ERR_get_next_error_library();
    }
    *(undefined4 *)(puVar9 + 0x20) = 0x4d3;
    *(undefined8 *)(puVar9 + -8) = 0x143d27a56;
    ERR_put_error(DAT_146bcb6d8,0x6b,0x41,"engines\\e_capi.c");
LAB_143d27b31:
    uVar10 = 0;
  }
  else {
    iVar8 = 0;
    while( true ) {
      HVar3 = local_30;
      uStack_34 = local_38;
      *pbData = '\0';
      *(uint *)(puVar9 + 0x20) = (uint)(iVar8 == 0);
      *(undefined8 *)(puVar9 + -8) = 0x143d27a8d;
      BVar5 = CryptGetProvParam(HVar3,2,pbData,&uStack_34,*(DWORD *)(puVar9 + 0x20));
      uVar2 = uStack_34;
      if (BVar5 == 0) break;
      *(uint *)(puVar9 + 0x28) = (uint)(iVar8 == 0);
      *(int *)(puVar9 + 0x20) = iVar8;
      *(undefined8 *)(puVar9 + -8) = 0x143d27ab0;
      CAPI_trace(param_1,"Container name %s, len=%d, index=%d, flags=%d\n",pbData,uVar2);
      if ((*pbData == '\0') && (uStack_34 == local_38)) {
        *(undefined8 *)(puVar9 + -8) = 0x143d27ae5;
        CAPI_trace(param_1,"Enumerate bug: using workaround\n");
        goto LAB_143d27b34;
      }
      *(undefined8 *)(puVar9 + -8) = 0x143d27ad2;
      BIO_printf(param_2,"%lu. %s\n",iVar8,pbData);
      iVar8 = iVar8 + 1;
    }
    *(undefined8 *)(puVar9 + -8) = 0x143d27aed;
    DVar6 = GetLastError();
    if (DVar6 != 0x103) {
      if (DAT_146bcb6d8 == 0) {
        *(undefined8 *)(puVar9 + -8) = 0x143d27b05;
        DAT_146bcb6d8 = ERR_get_next_error_library();
      }
      *(undefined4 *)(puVar9 + 0x20) = 0x4e4;
      *(undefined8 *)(puVar9 + -8) = 0x143d27b2a;
      ERR_put_error(DAT_146bcb6d8,0x6b,0x6c,"engines\\e_capi.c");
      *(undefined8 *)(puVar9 + -8) = 0x143d27b31;
      capi_adderror(DVar6);
      goto LAB_143d27b31;
    }
  }
LAB_143d27b34:
  *(undefined8 *)(puVar9 + -8) = 0x143d27b49;
  CRYPTO_free(pbData,"engines\\e_capi.c",0x4f5);
  *(undefined8 *)(puVar9 + -8) = 0x143d27b55;
  CryptReleaseContext(local_30,0);
LAB_143d27b58:
  *(undefined8 *)(puVar9 + -8) = 0x143d27b64;
  return uVar10;
}



// FUNCTION 143d27b80 capi_list_providers body=662 status=ok
// SIG undefined capi_list_providers(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 capi_list_providers(undefined8 param_1,undefined8 param_2)

{
  BOOL BVar1;
  LPWSTR szProvName;
  longlong lVar2;
  DWORD DVar3;
  undefined1 auStackY_78 [32];
  DWORD local_48;
  DWORD local_44;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStackY_78;
  CAPI_trace(param_1,"capi_list_providers\n");
  BIO_printf(param_2,"Available CSPs:\n");
  DVar3 = 0;
  while( true ) {
    CAPI_trace(param_1,"capi_get_provname, index=%d\n",DVar3);
    BVar1 = CryptEnumProvidersW(DVar3,(DWORD *)0x0,0,&local_48,(LPWSTR)0x0,&local_44);
    if (BVar1 == 0) {
      DVar3 = GetLastError();
      if (DVar3 != 0x103) {
        if (DAT_146bcb6d8 == 0) {
          DAT_146bcb6d8 = ERR_get_next_error_library();
        }
        ERR_put_error(DAT_146bcb6d8,0x68,0x69,"engines\\e_capi.c");
        BIO_snprintf(local_40,10,&DAT_145d801c4,DVar3);
        ERR_add_error_data(2,"Error code= 0x",local_40);
      }
      return 1;
    }
    szProvName = (LPWSTR)CRYPTO_malloc(local_44,"engines\\e_capi.c",0x47a);
    if (szProvName == (LPWSTR)0x0) {
      if (DAT_146bcb6d8 == 0) {
        DAT_146bcb6d8 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_146bcb6d8,0x68,0x41,"engines\\e_capi.c");
      return 1;
    }
    BVar1 = CryptEnumProvidersW(DVar3,(DWORD *)0x0,0,&local_48,szProvName,&local_44);
    if (BVar1 == 0) {
      DVar3 = GetLastError();
      CRYPTO_free(szProvName,"engines\\e_capi.c",0x481);
      if (DVar3 == 0x103) {
        return 1;
      }
      if (DAT_146bcb6d8 == 0) {
        DAT_146bcb6d8 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_146bcb6d8,0x68,0x69,"engines\\e_capi.c");
      capi_adderror(DVar3);
      return 1;
    }
    lVar2 = wide_to_asc(szProvName);
    CRYPTO_free(szProvName,"engines\\e_capi.c",0x48a);
    if (lVar2 == 0) break;
    CAPI_trace(param_1,"capi_get_provname, returned name=%s, type=%d\n",lVar2,local_48);
    BIO_printf(param_2,"%lu. %s, type %lu\n",DVar3,lVar2);
    CRYPTO_free(lVar2,"engines\\e_capi.c",0x4a4);
    DVar3 = DVar3 + 1;
  }
  return 1;
}



// FUNCTION 143d27e20 capi_load_privkey body=166 status=ok
// SIG undefined capi_load_privkey(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong capi_load_privkey(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143d27e30;
  lVar1 = ENGINE_get_ex_data(param_1,DAT_1468376c0);
  if (lVar1 == 0) {
    if (DAT_146bcb6d8 == 0) {
      DAT_146bcb6d8 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_146bcb6d8,0x6c,0x65,"engines\\e_capi.c",0x318,uVar3);
  }
  else {
    lVar1 = capi_find_key(lVar1,param_2);
    if (lVar1 != 0) {
      lVar2 = capi_get_pkey(param_1,lVar1);
      if (lVar2 == 0) {
        capi_free_key(lVar1);
      }
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 143d27ed0 capi_load_ssl_client_cert body=778 status=ok
// SIG undefined capi_load_ssl_client_cert(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
capi_load_ssl_client_cert
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
          undefined8 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  HCERTSTORE hCertStore;
  PCCERT_CONTEXT pCertContext;
  longlong lVar5;
  undefined8 uVar6;
  PCCERT_CONTEXT pCVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  BYTE *local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143d27ef3;
  uVar15 = 0;
  lVar4 = ENGINE_get_ex_data(param_1,DAT_1468376c0);
  *param_4 = 0;
  *param_5 = 0;
  puVar11 = &DAT_145d8042c;
  if (*(undefined **)(lVar4 + 0x30) != (undefined *)0x0) {
    puVar11 = *(undefined **)(lVar4 + 0x30);
  }
  hCertStore = (HCERTSTORE)capi_open_store(lVar4,puVar11);
  if (hCertStore != (HCERTSTORE)0x0) {
    pCertContext = CertEnumCertificatesInStore(hCertStore,(PCCERT_CONTEXT)0x0);
    uVar8 = uVar15;
    uVar13 = uVar15;
    for (; pCertContext != (PCCERT_CONTEXT)0x0;
        pCertContext = CertEnumCertificatesInStore(hCertStore,pCertContext)) {
      local_48 = pCertContext->pbCertEncoded;
      lVar5 = d2i_X509(0,&local_48,pCertContext->cbCertEncoded);
      if (lVar5 == 0) {
        CAPI_trace(lVar4,"Can\'t Parse Certificate %d\n",uVar13);
      }
      else {
        iVar2 = OPENSSL_sk_num(param_3);
        if (iVar2 < 1) {
LAB_143d280a0:
          iVar2 = X509_check_purpose(lVar5,1);
          if ((iVar2 != 0) &&
             (puVar9 = (undefined8 *)capi_get_cert_key(lVar4,pCertContext),
             puVar9 != (undefined8 *)0x0)) {
            pCVar7 = CertDuplicateCertificateContext(pCertContext);
            uVar1 = DAT_1468376cc;
            *puVar9 = pCVar7;
            X509_set_ex_data(lVar5,uVar1,puVar9);
            if (uVar8 == 0) {
              uVar8 = OPENSSL_sk_new_null();
            }
            OPENSSL_sk_push(uVar8,lVar5);
            goto LAB_143d28007;
          }
        }
        else {
          iVar2 = OPENSSL_sk_num(param_3);
          uVar12 = uVar15;
          if (0 < iVar2) {
            do {
              uVar10 = OPENSSL_sk_value(param_3,uVar12);
              uVar6 = FVoicePacketImpl::GetSampleCounter(lVar5);
              iVar2 = X509_NAME_cmp(uVar10,uVar6);
              if (iVar2 == 0) goto LAB_143d280a0;
              uVar14 = (int)uVar12 + 1;
              uVar12 = (ulonglong)uVar14;
              iVar2 = OPENSSL_sk_num(param_3);
            } while ((int)uVar14 < iVar2);
          }
        }
        X509_free(lVar5);
      }
LAB_143d28007:
      uVar13 = (ulonglong)((int)uVar13 + 1);
    }
    CertCloseStore(hCertStore,0);
    if (uVar8 != 0) {
      iVar2 = (**(code **)(lVar4 + 0x48))(param_1,param_2,uVar8);
      iVar3 = OPENSSL_sk_num(uVar8);
      if (0 < iVar3) {
        do {
          lVar4 = OPENSSL_sk_value(uVar8,uVar15);
          if ((int)uVar15 == iVar2) {
            *param_4 = lVar4;
          }
          else {
            puVar9 = (undefined8 *)X509_get_ex_data(lVar4,DAT_1468376cc);
            if (puVar9 != (undefined8 *)0x0) {
              CryptDestroyKey(puVar9[2]);
              CryptReleaseContext(puVar9[1],0);
              if ((PCCERT_CONTEXT)*puVar9 != (PCCERT_CONTEXT)0x0) {
                CertFreeCertificateContext((PCCERT_CONTEXT)*puVar9);
              }
              CRYPTO_free(puVar9,"engines\\e_capi.c",0x63a);
            }
            X509_free(lVar4);
          }
          uVar14 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar14;
          iVar3 = OPENSSL_sk_num(uVar8);
        } while ((int)uVar14 < iVar3);
      }
      OPENSSL_sk_free(uVar8);
      if (*param_4 != 0) {
        uVar10 = X509_get_ex_data(*param_4,DAT_1468376cc);
        uVar10 = capi_get_pkey(param_1,uVar10);
        uVar1 = DAT_1468376cc;
        *param_5 = uVar10;
        X509_set_ex_data(*param_4,uVar1,0);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143d281e0 capi_open_store body=165 status=ok
// SIG undefined capi_open_store(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

HCERTSTORE capi_open_store(longlong param_1,undefined *param_2)

{
  HCERTSTORE pvVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143d281f0;
  if (param_2 == (undefined *)0x0) {
    param_2 = &DAT_145d8042c;
    if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
      param_2 = *(undefined **)(param_1 + 0x28);
    }
  }
  CAPI_trace(param_1,"Opening certificate store %s\n",param_2);
  pvVar1 = CertOpenStore(&DAT_00000009,0,0,*(DWORD *)(param_1 + 0x38),param_2);
  if (pvVar1 == (HCERTSTORE)0x0) {
    if (DAT_146bcb6d8 == 0) {
      DAT_146bcb6d8 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_146bcb6d8,0x6d,0x71,"engines\\e_capi.c",0x57b,uVar2);
    capi_addlasterror();
  }
  return pvVar1;
}



// FUNCTION 143d28290 capi_rsa_free body=131 status=ok
// SIG undefined capi_rsa_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 capi_rsa_free(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)RSA_get_ex_data(param_1,DAT_1468376c4);
  if (puVar1 != (undefined8 *)0x0) {
    CryptDestroyKey(puVar1[2]);
    CryptReleaseContext(puVar1[1],0);
    if ((PCCERT_CONTEXT)*puVar1 != (PCCERT_CONTEXT)0x0) {
      CertFreeCertificateContext((PCCERT_CONTEXT)*puVar1);
    }
    CRYPTO_free(puVar1,"engines\\e_capi.c",0x63a);
  }
  RSA_set_ex_data(param_1,DAT_1468376c4,0);
  return 1;
}



// FUNCTION 143d28320 capi_rsa_priv_dec body=662 status=ok
// SIG undefined capi_rsa_priv_dec(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

DWORD capi_rsa_priv_dec(DWORD param_1,longlong param_2,void *param_3,WriteBytesMem *param_4,
                       int param_5)

{
  BYTE *pBVar1;
  BOOL BVar2;
  uchar *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  BYTE *pbData;
  longlong lVar6;
  BYTE *pBVar7;
  longlong lVar8;
  size_t _Size;
  undefined1 auStackY_78 [32];
  DWORD local_48 [2];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStackY_78;
  lVar8 = (longlong)(int)param_1;
  if (0 < (int)param_1) {
    puVar3 = AK::WriteBytesMem::Bytes(param_4);
    uVar4 = ENGINE_get_ex_data(puVar3,DAT_1468376c0);
    CAPI_trace(uVar4,"Called capi_rsa_priv_dec()\n");
    lVar5 = RSA_get_ex_data(param_4,DAT_1468376c4);
    if (lVar5 == 0) {
      if (DAT_146bcb6d8 == 0) {
        DAT_146bcb6d8 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_146bcb6d8,0x6e,0x66,"engines\\e_capi.c");
      param_1 = 0xffffffff;
    }
    else if (param_5 == 1) {
      pbData = (BYTE *)CRYPTO_malloc(lVar8,"engines\\e_capi.c",0x3bc);
      if (pbData == (BYTE *)0x0) {
        if (DAT_146bcb6d8 == 0) {
          DAT_146bcb6d8 = ERR_get_next_error_library();
        }
        ERR_put_error(DAT_146bcb6d8,0x6e,0x41,"engines\\e_capi.c");
        param_1 = 0xffffffff;
      }
      else {
        if (0 < (int)param_1) {
          lVar6 = 0;
          pBVar7 = pbData + lVar8 + -1;
          do {
            pBVar1 = (BYTE *)(lVar6 + param_2);
            lVar6 = lVar6 + 1;
            *pBVar7 = *pBVar1;
            pBVar7 = pBVar7 + -1;
          } while (lVar6 < lVar8);
        }
        local_48[0] = param_1;
        BVar2 = CryptDecrypt(*(HCRYPTKEY *)(lVar5 + 0x10),0,1,0,pbData,local_48);
        param_1 = local_48[0];
        if (BVar2 == 0) {
          if (DAT_146bcb6d8 == 0) {
            DAT_146bcb6d8 = ERR_get_next_error_library();
          }
          ERR_put_error(DAT_146bcb6d8,0x6e,0x6a,"engines\\e_capi.c");
          capi_addlasterror();
          FUN_14004ff40(pbData,local_48[0]);
          CRYPTO_free(pbData,"engines\\e_capi.c",0x3c9);
          param_1 = 0xffffffff;
        }
        else {
          _Size = (size_t)(int)local_48[0];
          _guard_xfg_dispatch_icall_nop(param_3,pbData,_Size);
          FUN_14004ff40(pbData,_Size);
          CRYPTO_free(pbData,"engines\\e_capi.c",0x3cf);
        }
      }
    }
    else {
      BIO_snprintf(local_40,10,&DAT_144cd4c80);
      if (DAT_146bcb6d8 == 0) {
        DAT_146bcb6d8 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_146bcb6d8,0x6e,0x7f,"engines\\e_capi.c");
      ERR_add_error_data(2,"padding=",local_40);
      param_1 = 0xffffffff;
    }
  }
  return param_1;
}



// FUNCTION 143d285c0 capi_rsa_priv_enc body=75 status=ok
// SIG undefined capi_rsa_priv_enc(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 capi_rsa_priv_enc(void)

{
  if (DAT_146bcb6d8 == 0) {
    DAT_146bcb6d8 = ERR_get_next_error_library();
  }
  ERR_put_error(DAT_146bcb6d8,0x6f,0x74,"engines\\e_capi.c",0x32e);
  return 0xffffffff;
}



// FUNCTION 143d28610 capi_rsa_sign body=791 status=ok
// SIG undefined capi_rsa_sign(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
capi_rsa_sign(int param_1,BYTE *param_2,undefined8 param_3,BYTE *param_4,uint *param_5,
             WriteBytesMem *param_6)

{
  BYTE BVar1;
  BOOL BVar2;
  uchar *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  ALG_ID Algid;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStackY_98 [32];
  uint local_68 [2];
  HCRYPTHASH local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143d28625;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStackY_98;
  uVar6 = 0xffffffff;
  puVar3 = AK::WriteBytesMem::Bytes(param_6);
  uVar4 = ENGINE_get_ex_data(puVar3,DAT_1468376c0);
  CAPI_trace(uVar4,"Called CAPI_rsa_sign()\n");
  lVar5 = RSA_get_ex_data(param_6,DAT_1468376c4);
  if (lVar5 == 0) {
    if (DAT_146bcb6d8 == 0) {
      DAT_146bcb6d8 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_146bcb6d8,0x70,0x66,"engines\\e_capi.c");
    return 0xffffffff;
  }
  if (param_1 < 0x2a1) {
    if (param_1 == 0x2a0) {
      Algid = 0x800c;
    }
    else if (param_1 == 4) {
      Algid = 0x8003;
    }
    else if (param_1 == 0x40) {
      Algid = 0x8004;
    }
    else {
      if (param_1 != 0x72) goto LAB_143d28718;
      Algid = 0x8008;
    }
  }
  else if (param_1 == 0x2a1) {
    Algid = 0x800d;
  }
  else {
    if (param_1 != 0x2a2) {
LAB_143d28718:
      BIO_snprintf(local_58,10,&DAT_145d80168,param_1);
      if (DAT_146bcb6d8 == 0) {
        DAT_146bcb6d8 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_146bcb6d8,0x70,0x7e,"engines\\e_capi.c");
      ERR_add_error_data(2,"NID=0x",local_58);
      return 0xffffffff;
    }
    Algid = 0x800e;
  }
  BVar2 = CryptCreateHash(*(HCRYPTPROV *)(lVar5 + 8),Algid,0,0,&local_60);
  if (BVar2 == 0) {
    if (DAT_146bcb6d8 == 0) {
      DAT_146bcb6d8 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_146bcb6d8,0x70,100,"engines\\e_capi.c");
    capi_addlasterror();
  }
  else {
    BVar2 = CryptSetHashParam(local_60,2,param_2,0);
    if (BVar2 == 0) {
      if (DAT_146bcb6d8 == 0) {
        DAT_146bcb6d8 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_146bcb6d8,0x70,0x67,"engines\\e_capi.c");
      capi_addlasterror();
    }
    else {
      local_68[0] = RSA_size(param_6);
      BVar2 = CryptSignHashW(local_60,*(DWORD *)(lVar5 + 0x18),(LPCWSTR)0x0,0,param_4,local_68);
      if (BVar2 == 0) {
        if (DAT_146bcb6d8 == 0) {
          DAT_146bcb6d8 = ERR_get_next_error_library();
        }
        ERR_put_error(DAT_146bcb6d8,0x70,0x72,"engines\\e_capi.c");
        capi_addlasterror();
      }
      else {
        uVar9 = 0;
        uVar6 = 1;
        if ((local_68[0] & 0xfffffffe) != 0) {
          do {
            BVar1 = param_4[uVar9];
            uVar7 = (local_68[0] - (int)uVar9) - 1;
            param_4[uVar9] = param_4[uVar7];
            uVar8 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar8;
            param_4[uVar7] = BVar1;
          } while (uVar8 < local_68[0] >> 1);
        }
        *param_5 = local_68[0];
      }
    }
    CryptDestroyHash(local_60);
  }
  return uVar6;
}



// FUNCTION 143d28930 engine_capi body=497 status=ok
// SIG undefined engine_capi(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong engine_capi(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = ENGINE_new();
  if (lVar2 != 0) {
    DAT_146bcb6e0 = RSA_meth_new("CryptoAPI RSA method",0);
    if (DAT_146bcb6e0 != 0) {
      DAT_146bcb6e8 = DSA_meth_new("CryptoAPI DSA method",0);
      if (DAT_146bcb6e8 != 0) {
        iVar1 = ENGINE_set_id(lVar2,PTR_DAT_1468376b0);
        if (iVar1 != 0) {
          iVar1 = ENGINE_set_name(lVar2,PTR_s_CryptoAPI_ENGINE_1468376b8);
          if (iVar1 != 0) {
            iVar1 = ENGINE_set_flags(lVar2,8);
            if (iVar1 != 0) {
              iVar1 = ENGINE_set_init_function(lVar2,capi_init);
              if (iVar1 != 0) {
                iVar1 = ENGINE_set_finish_function(lVar2,capi_finish);
                if (iVar1 != 0) {
                  iVar1 = ENGINE_set_destroy_function(lVar2,capi_destroy);
                  if (iVar1 != 0) {
                    iVar1 = EVP_MD_meth_set_init(lVar2,DAT_146bcb6e0);
                    if (iVar1 != 0) {
                      iVar1 = EVP_MD_meth_set_update(lVar2,DAT_146bcb6e8);
                      if (iVar1 != 0) {
                        iVar1 = ENGINE_set_load_privkey_function(lVar2,capi_load_privkey);
                        if (iVar1 != 0) {
                          iVar1 = ENGINE_set_load_ssl_client_cert_function
                                            (lVar2,capi_load_ssl_client_cert);
                          if (iVar1 != 0) {
                            iVar1 = ENGINE_set_cmd_defns(lVar2,&DAT_145d7fa60);
                            if (iVar1 != 0) {
                              iVar1 = ENGINE_set_ctrl_function(lVar2,FUN_143d25740);
                              if (iVar1 != 0) {
                                if (DAT_146bcb6d8 == 0) {
                                  DAT_146bcb6d8 = ERR_get_next_error_library();
                                }
                                if (DAT_146bcb6dc == 0) {
                                  ERR_load_strings(DAT_146bcb6d8,&DAT_146837370);
                                  ERR_load_strings(DAT_146bcb6d8,&DAT_1468374c0);
                                  DAT_146bcb6dc = 1;
                                }
                                return lVar2;
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
      RSA_meth_free(DAT_146bcb6e0);
      DAT_146bcb6e0 = 0;
      DSA_meth_free(DAT_146bcb6e8);
      DAT_146bcb6e8 = 0;
    }
    ENGINE_free(lVar2);
  }
  return 0;
}



// FUNCTION 143d28b30 engine_load_capi_int body=60 status=ok
// SIG undefined engine_load_capi_int(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void engine_load_capi_int(void)

{
  longlong lVar1;
  
  lVar1 = engine_capi();
  if (lVar1 != 0) {
    ENGINE_add(lVar1);
    ENGINE_free(lVar1);
    ERR_clear_error();
    return;
  }
  return;
}



// FUNCTION 143d28b70 lend_tobn body=101 status=ok
// SIG undefined lend_tobn(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool lend_tobn(undefined8 param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  
  lVar4 = (longlong)(param_3 / 2);
  if (0 < param_3 / 2) {
    puVar2 = param_2 + (longlong)param_3 + -1;
    puVar3 = param_2;
    do {
      uVar1 = *puVar3;
      *puVar3 = *puVar2;
      puVar3 = puVar3 + 1;
      *puVar2 = uVar1;
      lVar4 = lVar4 + -1;
      puVar2 = puVar2 + -1;
    } while (lVar4 != 0);
  }
  lVar4 = BN_bin2bn(param_2,param_3,param_1);
  return lVar4 != 0;
}



// FUNCTION 143d28be0 wide_to_asc body=418 status=ok
// SIG undefined wide_to_asc(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

LPSTR wide_to_asc(LPCWSTR param_1)

{
  longlong lVar1;
  int iVar2;
  LPSTR lpMultiByteStr;
  longlong lVar3;
  undefined4 uVar5;
  LPSTR pCVar4;
  
  if (param_1 != (LPCWSTR)0x0) {
    lVar3 = -1;
    do {
      lVar1 = lVar3 + 1;
      lVar3 = lVar3 + 1;
    } while (param_1[lVar1] != L'\0');
    uVar5 = 0;
    iVar2 = WideCharToMultiByte(0,0,param_1,(int)lVar3 + 1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar2 == 0) {
      if (DAT_146bcb6d8 == 0) {
        DAT_146bcb6d8 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_146bcb6d8,0x71,0x81,"engines\\e_capi.c",0x45c);
      lpMultiByteStr = (LPSTR)0x0;
    }
    else {
      lpMultiByteStr = (LPSTR)CRYPTO_malloc((longlong)iVar2,"engines\\e_capi.c",0x45f);
      if (lpMultiByteStr == (LPSTR)0x0) {
        if (DAT_146bcb6d8 == 0) {
          DAT_146bcb6d8 = ERR_get_next_error_library();
        }
        ERR_put_error(DAT_146bcb6d8,0x71,0x41,"engines\\e_capi.c",CONCAT44(uVar5,0x461));
        lpMultiByteStr = (LPSTR)0x0;
      }
      else {
        pCVar4 = lpMultiByteStr;
        iVar2 = WideCharToMultiByte(0,0,param_1,(int)lVar3 + 1,lpMultiByteStr,iVar2,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
        uVar5 = (undefined4)((ulonglong)pCVar4 >> 0x20);
        if (iVar2 == 0) {
          CRYPTO_free(lpMultiByteStr,"engines\\e_capi.c",0x465);
          if (DAT_146bcb6d8 == 0) {
            DAT_146bcb6d8 = ERR_get_next_error_library();
          }
          ERR_put_error(DAT_146bcb6d8,0x71,0x81,"engines\\e_capi.c",CONCAT44(uVar5,0x466));
          lpMultiByteStr = (LPSTR)0x0;
        }
      }
    }
    return lpMultiByteStr;
  }
  return (LPSTR)0x0;
}



// FUNCTION 143d28d90 ENGINE_free body=120 status=ok
// SIG undefined ENGINE_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_free(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x9c);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 2) {
      engine_pkey_meths_free();
      engine_pkey_asn1_meths_free(param_1);
      if (*(code **)(param_1 + 0x58) != (code *)0x0) {
        (**(code **)(param_1 + 0x58))(param_1);
      }
      CRYPTO_free_ex_data(10,param_1,param_1 + 0xa8);
      CRYPTO_free(param_1,"crypto\\engine\\eng_lib.c",0x60);
    }
  }
  return 1;
}



// FUNCTION 143d28e10 ENGINE_get_ex_data body=29 status=ok
// SIG undefined ENGINE_get_ex_data(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ENGINE_get_ex_data(longlong param_1)

{
  CRYPTO_get_ex_data(param_1 + 0xa8);
  return;
}



// FUNCTION 143d28e30 ENGINE_get_static_state body=8 status=ok
// SIG undefined ENGINE_get_static_state(void)

undefined * ENGINE_get_static_state(void)

{
  return &DAT_146bcb708;
}



// FUNCTION 143d28e40 ENGINE_new body=190 status=ok
// SIG undefined ENGINE_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ENGINE_new(void)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143d28e4c;
  iVar1 = CRYPTO_THREAD_run_once(&DAT_146bcb6f8,FUN_143d29020);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = DAT_146bcb6fc;
  }
  if (iVar2 != 0) {
    lVar3 = CRYPTO_zalloc(0xc0,"crypto\\engine\\eng_lib.c",0x22);
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0x9c) = 1;
      iVar2 = CRYPTO_new_ex_data(10,lVar3,lVar3 + 0xa8);
      if (iVar2 == 0) {
        CRYPTO_free(lVar3,"crypto\\engine\\eng_lib.c",0x29);
        return 0;
      }
      return lVar3;
    }
  }
  ERR_put_error(0x26,0x7a,0x41,"crypto\\engine\\eng_lib.c",0x23,uVar4);
  return 0;
}



// FUNCTION 143d28f00 ENGINE_set_cmd_defns body=13 status=ok
// SIG undefined ENGINE_set_cmd_defns(void)

undefined8 ENGINE_set_cmd_defns(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x90) = param_2;
  return 1;
}



// FUNCTION 143d28f10 ENGINE_set_ctrl_function body=10 status=ok
// SIG undefined ENGINE_set_ctrl_function(void)

undefined8 ENGINE_set_ctrl_function(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x70) = param_2;
  return 1;
}



// FUNCTION 143d28f20 ENGINE_set_destroy_function body=10 status=ok
// SIG undefined ENGINE_set_destroy_function(void)

undefined8 ENGINE_set_destroy_function(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x58) = param_2;
  return 1;
}



// FUNCTION 143d28f30 ENGINE_set_ex_data body=29 status=ok
// SIG undefined ENGINE_set_ex_data(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ENGINE_set_ex_data(longlong param_1)

{
  CRYPTO_set_ex_data(param_1 + 0xa8);
  return;
}



// FUNCTION 143d28f50 ENGINE_set_finish_function body=10 status=ok
// SIG undefined ENGINE_set_finish_function(void)

undefined8 ENGINE_set_finish_function(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x68) = param_2;
  return 1;
}



// FUNCTION 143d28f60 ENGINE_set_flags body=12 status=ok
// SIG undefined ENGINE_set_flags(void)

undefined8 ENGINE_set_flags(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x98) = param_2;
  return 1;
}



// FUNCTION 143d28f70 ENGINE_set_id body=68 status=ok
// SIG undefined ENGINE_set_id(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_set_id(longlong *param_1,longlong param_2)

{
  if (param_2 == 0) {
    ERR_put_error(0x26,0x81,0x43,"crypto\\engine\\eng_lib.c",0xc4);
    return 0;
  }
  *param_1 = param_2;
  return 1;
}



// FUNCTION 143d28fc0 ENGINE_set_init_function body=10 status=ok
// SIG undefined ENGINE_set_init_function(void)

undefined8 ENGINE_set_init_function(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x60) = param_2;
  return 1;
}



// FUNCTION 143d28fd0 ENGINE_set_name body=69 status=ok
// SIG undefined ENGINE_set_name(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_set_name(longlong param_1,longlong param_2)

{
  if (param_2 == 0) {
    ERR_put_error(0x26,0x82,0x43,"crypto\\engine\\eng_lib.c",0xce);
    return 0;
  }
  *(longlong *)(param_1 + 8) = param_2;
  return 1;
}



// FUNCTION 143d29020 FUN_143d29020 body=70 status=ok
// SIG undefined FUN_143d29020(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d29020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = OPENSSL_init_crypto(0,0,param_3,param_4,0x143d2902a);
  if (iVar1 == 0) {
    DAT_146bcb6fc = 0;
    return;
  }
  DAT_146bcd570 = CRYPTO_THREAD_lock_new();
  DAT_146bcb6fc = (uint)(DAT_146bcd570 != 0);
  return;
}



// FUNCTION 143d29070 engine_cleanup_add_first body=87 status=ok
// SIG undefined engine_cleanup_add_first(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void engine_cleanup_add_first(undefined8 param_1)

{
  longlong lVar1;
  
  if ((DAT_146bcb700 == 0) && (DAT_146bcb700 = OPENSSL_sk_new_null(), DAT_146bcb700 == 0)) {
    return;
  }
  lVar1 = int_cleanup_item(param_1);
  if (lVar1 == 0) {
    return;
  }
  OPENSSL_sk_insert(DAT_146bcb700,lVar1,0);
  return;
}



// FUNCTION 143d290d0 engine_cleanup_add_last body=112 status=ok
// SIG undefined engine_cleanup_add_last(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void engine_cleanup_add_last(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  
  if ((DAT_146bcb700 == 0) && (DAT_146bcb700 = OPENSSL_sk_new_null(), DAT_146bcb700 == 0)) {
    return;
  }
  lVar2 = int_cleanup_item(param_1);
  if ((lVar2 != 0) && (iVar1 = OPENSSL_sk_push(DAT_146bcb700,lVar2), iVar1 < 1)) {
    CRYPTO_free(lVar2,"crypto\\engine\\eng_lib.c",0x9b);
    return;
  }
  return;
}



// FUNCTION 143d29140 engine_cleanup_cb_free body=46 status=ok
// SIG undefined engine_cleanup_cb_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void engine_cleanup_cb_free(undefined8 *param_1)

{
  (*(code *)*param_1)();
  CRYPTO_free(param_1,"crypto\\engine\\eng_lib.c",0xa3);
  return;
}



// FUNCTION 143d29170 engine_cleanup_int body=64 status=ok
// SIG undefined engine_cleanup_int(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void engine_cleanup_int(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (DAT_146bcb700 != 0) {
    OPENSSL_sk_pop_free(DAT_146bcb700,engine_cleanup_cb_free,param_3,param_4,0x143d2917a);
    DAT_146bcb700 = 0;
  }
  CRYPTO_THREAD_lock_free(DAT_146bcd570);
  return;
}



// FUNCTION 143d291b0 engine_free_util body=141 status=ok
// SIG undefined engine_free_util(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 engine_free_util(longlong param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      iVar2 = *(int *)(param_1 + 0x9c) + -1;
      *(int *)(param_1 + 0x9c) = iVar2;
    }
    else {
      LOCK();
      piVar1 = (int *)(param_1 + 0x9c);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      iVar2 = iVar2 + -1;
    }
    if (iVar2 < 1) {
      engine_pkey_meths_free();
      engine_pkey_asn1_meths_free(param_1);
      if (*(code **)(param_1 + 0x58) != (code *)0x0) {
        (**(code **)(param_1 + 0x58))(param_1);
      }
      CRYPTO_free_ex_data(10,param_1,param_1 + 0xa8);
      CRYPTO_free(param_1,"crypto\\engine\\eng_lib.c",0x60);
    }
  }
  return 1;
}



// FUNCTION 143d29240 engine_set_all_null body=74 status=ok
// SIG undefined engine_set_all_null(void)

void engine_set_all_null(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  return;
}



// FUNCTION 143d29290 int_cleanup_item body=91 status=ok
// SIG undefined int_cleanup_item(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * int_cleanup_item(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143d2929c;
  puVar1 = (undefined8 *)CRYPTO_malloc(8,"crypto\\engine\\eng_lib.c",0x80);
  if (puVar1 == (undefined8 *)0x0) {
    ERR_put_error(0x26,199,0x41,"crypto\\engine\\eng_lib.c",0x81,uVar2);
    return (undefined8 *)0x0;
  }
  *puVar1 = param_1;
  return puVar1;
}



// FUNCTION 143d292f0 err_load_crypto_strings_int body=364 status=ok
// SIG undefined err_load_crypto_strings_int(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 err_load_crypto_strings_int(void)

{
  int iVar1;
  
  iVar1 = ERR_load_ERR_strings();
  if (iVar1 != 0) {
    iVar1 = ERR_load_BN_strings();
    if (iVar1 != 0) {
      iVar1 = ERR_load_RSA_strings();
      if (iVar1 != 0) {
        iVar1 = ERR_load_DH_strings();
        if (iVar1 != 0) {
          iVar1 = ERR_load_EVP_strings();
          if (iVar1 != 0) {
            iVar1 = ERR_load_BUF_strings();
            if (iVar1 != 0) {
              iVar1 = ERR_load_OBJ_strings();
              if (iVar1 != 0) {
                iVar1 = ERR_load_PEM_strings();
                if (iVar1 != 0) {
                  iVar1 = ERR_load_DSA_strings();
                  if (iVar1 != 0) {
                    iVar1 = ERR_load_X509_strings();
                    if (iVar1 != 0) {
                      iVar1 = ERR_load_ASN1_strings();
                      if (iVar1 != 0) {
                        iVar1 = ERR_load_CONF_strings();
                        if (iVar1 != 0) {
                          iVar1 = ERR_load_CRYPTO_strings();
                          if (iVar1 != 0) {
                            iVar1 = ERR_load_COMP_strings();
                            if (iVar1 != 0) {
                              iVar1 = ERR_load_EC_strings();
                              if (iVar1 != 0) {
                                iVar1 = ERR_load_BIO_strings();
                                if (iVar1 != 0) {
                                  iVar1 = ERR_load_PKCS7_strings();
                                  if (iVar1 != 0) {
                                    iVar1 = ERR_load_X509V3_strings();
                                    if (iVar1 != 0) {
                                      iVar1 = ERR_load_PKCS12_strings();
                                      if (iVar1 != 0) {
                                        iVar1 = ERR_load_RAND_strings();
                                        if (iVar1 != 0) {
                                          iVar1 = ERR_load_DSO_strings();
                                          if (iVar1 != 0) {
                                            iVar1 = ERR_load_TS_strings();
                                            if (iVar1 != 0) {
                                              iVar1 = ERR_load_ENGINE_strings();
                                              if (iVar1 != 0) {
                                                iVar1 = ERR_load_OCSP_strings();
                                                if (iVar1 != 0) {
                                                  iVar1 = ERR_load_UI_strings();
                                                  if (iVar1 != 0) {
                                                    iVar1 = ERR_load_CMS_strings();
                                                    if (iVar1 != 0) {
                                                      iVar1 = ERR_load_CT_strings();
                                                      if (iVar1 != 0) {
                                                        iVar1 = ERR_load_ASYNC_strings();
                                                        if (iVar1 != 0) {
                                                          iVar1 = ERR_load_KDF_strings();
                                                          if (iVar1 != 0) {
                                                            iVar1 = ERR_load_OSSL_STORE_strings();
                                                            if (iVar1 != 0) {
                                                              return 1;
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
  return 0;
}



// FUNCTION 143d29460 ossl_store_cleanup_int body=22 status=ok
// SIG undefined ossl_store_cleanup_int(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ossl_store_cleanup_int(void)

{
  ossl_store_destroy_loaders_int();
  return;
}



// FUNCTION 143d29480 bio_sock_cleanup_int body=48 status=ok
// SIG undefined bio_sock_cleanup_int(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void bio_sock_cleanup_int(void)

{
  if (DAT_146bcb720 != 0) {
    DAT_146bcb720 = 0;
                    /* WARNING: Could not recover jumptable at 0x000143d294a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    Ordinal_116();
    return;
  }
  return;
}



// FUNCTION 143d294b0 bread_conv body=73 status=ok
// SIG undefined bread_conv(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 bread_conv(longlong *param_1,undefined8 param_2,ulonglong param_3,longlong *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x7fffffff;
  if (param_3 < 0x80000000) {
    uVar1 = (undefined4)param_3;
  }
  uVar2 = (**(code **)(*param_1 + 0x28))(param_1,param_2,uVar1);
  if ((int)uVar2 < 1) {
    *param_4 = 0;
    return uVar2;
  }
  *param_4 = (longlong)(int)uVar2;
  return 1;
}



// FUNCTION 143d29500 bwrite_conv body=73 status=ok
// SIG undefined bwrite_conv(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 bwrite_conv(longlong *param_1,undefined8 param_2,ulonglong param_3,longlong *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x7fffffff;
  if (param_3 < 0x80000000) {
    uVar1 = (undefined4)param_3;
  }
  uVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_2,uVar1);
  if ((int)uVar2 < 1) {
    *param_4 = 0;
    return uVar2;
  }
  *param_4 = (longlong)(int)uVar2;
  return 1;
}



// FUNCTION 143d29570 def_crl_verify body=49 status=ok
// SIG undefined def_crl_verify(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void def_crl_verify(longlong param_1,undefined8 param_2)

{
  ASN1_item_verify(&DAT_145d80700,param_1 + 0x50,param_1 + 0x60,param_1,param_2);
  return;
}



// FUNCTION 143d295b0 def_crl_lookup body=412 status=ok
// SIG undefined def_crl_lookup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char def_crl_lookup(longlong param_1,longlong *param_2,undefined4 *param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_40;
  
  uStack_40 = 0x143d295d4;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    iVar1 = OPENSSL_sk_is_sorted();
    if (iVar1 == 0) {
      CRYPTO_THREAD_read_lock(*(undefined8 *)(param_1 + 0xd8));
      OPENSSL_sk_sort(*(undefined8 *)(param_1 + 0x30));
      CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0xd8));
    }
    local_78 = *param_3;
    uStack_74 = param_3[1];
    uStack_70 = param_3[2];
    uStack_6c = param_3[3];
    local_68 = *(undefined8 *)(param_3 + 4);
    iVar1 = OPENSSL_sk_find(*(undefined8 *)(param_1 + 0x30),&local_78);
    if ((-1 < iVar1) && (iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x30)), iVar1 < iVar2)) {
      do {
        lVar5 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x30),iVar1);
        iVar3 = ASN1_INTEGER_cmp(lVar5,param_3);
        if (iVar3 != 0) {
          return '\0';
        }
        lVar9 = *(longlong *)(lVar5 + 0x28);
        if (lVar9 == 0) {
          if (param_4 == 0) {
LAB_143d296a9:
            if (param_2 != (longlong *)0x0) {
              *param_2 = lVar5;
            }
            return (*(int *)(lVar5 + 0x30) == 8) + '\x01';
          }
          uVar6 = FUniqueNetIdString::GetBytes(param_1);
          iVar3 = X509_NAME_cmp(param_4,uVar6);
          if (iVar3 == 0) goto LAB_143d296a9;
        }
        else {
          lVar7 = param_4;
          if (param_4 == 0) {
            lVar7 = FUniqueNetIdString::GetBytes(param_1);
            lVar9 = *(longlong *)(lVar5 + 0x28);
          }
          iVar4 = OPENSSL_sk_num(lVar9);
          iVar3 = 0;
          if (0 < iVar4) {
            do {
              piVar8 = (int *)OPENSSL_sk_value(*(undefined8 *)(lVar5 + 0x28),iVar3);
              if ((*piVar8 == 4) &&
                 (iVar4 = X509_NAME_cmp(lVar7,*(undefined8 *)(piVar8 + 2)), iVar4 == 0))
              goto LAB_143d296a9;
              iVar3 = iVar3 + 1;
              iVar4 = OPENSSL_sk_num(*(undefined8 *)(lVar5 + 0x28));
            } while (iVar3 < iVar4);
          }
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar2);
    }
  }
  return '\0';
}



// FUNCTION 143d29750 crl_inf_cb body=59 status=ok
// SIG undefined crl_inf_cb(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 crl_inf_cb(int param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  if (((*param_2 != 0) && (lVar1 = *(longlong *)(*param_2 + 0x30), lVar1 != 0)) && (param_1 == 5)) {
    OPENSSL_sk_set_cmp_func(lVar1,X509_REVOKED_cmp,param_3,param_4,0x143d2975a);
  }
  return 1;
}



// FUNCTION 143d29790 crl_cb body=828 status=ok
// SIG undefined crl_cb(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 crl_cb(int param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int *piVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  byte bVar13;
  uint uVar14;
  int iVar15;
  
  puVar3 = PTR_DAT_146837700;
  lVar1 = *param_2;
  if (param_1 == 1) {
    *(undefined8 *)(lVar1 + 0x88) = 0;
    *(undefined8 *)(lVar1 + 0x80) = 0;
    *(undefined4 *)(lVar1 + 0x7c) = 0;
    *(undefined4 *)(lVar1 + 0x90) = 0;
    *(undefined **)(lVar1 + 200) = puVar3;
    *(undefined8 *)(lVar1 + 0xd0) = 0;
    *(undefined8 *)(lVar1 + 0xa8) = 0;
    *(undefined8 *)(lVar1 + 0x98) = 0;
    *(undefined8 *)(lVar1 + 0xa0) = 0;
    *(undefined4 *)(lVar1 + 0x94) = 0x807f;
    return 1;
  }
  if (param_1 == 3) {
    pcVar2 = *(code **)(*(longlong *)(lVar1 + 200) + 0x10);
    if ((pcVar2 == (code *)0x0) || (iVar15 = (*pcVar2)(lVar1), iVar15 != 0)) {
      AUTHORITY_KEYID_free(*(undefined8 *)(lVar1 + 0x80));
      AUTHORITY_KEYID_free(*(undefined8 *)(lVar1 + 0x88));
      ASN1_BIT_STRING_free(*(undefined8 *)(lVar1 + 0x98));
      ASN1_BIT_STRING_free(*(undefined8 *)(lVar1 + 0xa0));
      OPENSSL_sk_pop_free(*(undefined8 *)(lVar1 + 0xa8),GENERAL_NAMES_free);
      return 1;
    }
  }
  else {
    if (param_1 != 5) {
      return 1;
    }
    uVar7 = EVP_sha1();
    X509_CRL_digest(lVar1,uVar7,lVar1 + 0xb0,0);
    puVar8 = (undefined8 *)X509_CRL_get_ext_d2i(lVar1,0x302,0,0);
    iVar15 = 0;
    *(undefined8 **)(lVar1 + 0x88) = puVar8;
    if (puVar8 != (undefined8 *)0x0) {
      uVar14 = *(uint *)(lVar1 + 0x90);
      uVar4 = uVar14 | 1;
      *(uint *)(lVar1 + 0x90) = uVar4;
      bVar13 = 0 < *(int *)(puVar8 + 1);
      if ((bool)bVar13) {
        uVar4 = uVar14 | 5;
        *(uint *)(lVar1 + 0x90) = uVar4;
      }
      if (0 < *(int *)((longlong)puVar8 + 0xc)) {
        bVar13 = bVar13 + 1;
        uVar4 = uVar4 | 8;
        *(uint *)(lVar1 + 0x90) = uVar4;
      }
      if (0 < *(int *)((longlong)puVar8 + 0x1c)) {
        bVar13 = bVar13 + 1;
        uVar4 = uVar4 | 0x10;
        *(uint *)(lVar1 + 0x90) = uVar4;
      }
      if (1 < bVar13) {
        uVar4 = uVar4 | 2;
        *(uint *)(lVar1 + 0x90) = uVar4;
      }
      if (0 < *(int *)(puVar8 + 3)) {
        uVar4 = uVar4 | 0x20;
        *(uint *)(lVar1 + 0x90) = uVar4;
      }
      if (puVar8[2] != 0) {
        *(uint *)(lVar1 + 0x90) = uVar4 | 0x40;
        piVar9 = (int *)puVar8[2];
        iVar5 = *piVar9;
        if (iVar5 < 1) {
          uVar14 = *(uint *)(lVar1 + 0x94);
        }
        else {
          uVar14 = (uint)**(byte **)(piVar9 + 2);
          *(uint *)(lVar1 + 0x94) = (uint)**(byte **)(piVar9 + 2);
          piVar9 = (int *)puVar8[2];
          iVar5 = *piVar9;
        }
        if (1 < iVar5) {
          uVar14 = uVar14 | (uint)*(byte *)(*(longlong *)(piVar9 + 2) + 1) << 8;
        }
        *(uint *)(lVar1 + 0x94) = uVar14 & 0x807f;
      }
      uVar7 = FUniqueNetIdString::GetBytes(lVar1);
      DIST_POINT_set_dpname(*puVar8,uVar7);
    }
    uVar7 = X509_CRL_get_ext_d2i(lVar1,0x5a,0);
    *(undefined8 *)(lVar1 + 0x80) = uVar7;
    uVar7 = X509_CRL_get_ext_d2i(lVar1,0x58,0);
    *(undefined8 *)(lVar1 + 0x98) = uVar7;
    lVar10 = X509_CRL_get_ext_d2i(lVar1,0x8c,0,0);
    *(longlong *)(lVar1 + 0xa0) = lVar10;
    if ((lVar10 != 0) && (*(longlong *)(lVar1 + 0x98) == 0)) {
      *(uint *)(lVar1 + 0x7c) = *(uint *)(lVar1 + 0x7c) | 0x80;
    }
    uVar7 = *(undefined8 *)(lVar1 + 0x38);
    iVar5 = OPENSSL_sk_num(uVar7);
    if (0 < iVar5) {
      do {
        uVar11 = OPENSSL_sk_value(uVar7,iVar15);
        uVar12 = EVP_MD_CTX_md(uVar11);
        iVar5 = OBJ_obj2nid(uVar12);
        if (iVar5 == 0x359) {
          *(uint *)(lVar1 + 0x7c) = *(uint *)(lVar1 + 0x7c) | 0x1000;
        }
        iVar6 = X509_EXTENSION_get_critical(uVar11);
        if ((((iVar6 != 0) && (iVar5 != 0x302)) && (iVar5 != 0x5a)) && (iVar5 != 0x8c)) {
          *(uint *)(lVar1 + 0x7c) = *(uint *)(lVar1 + 0x7c) | 0x200;
          break;
        }
        iVar15 = iVar15 + 1;
        iVar5 = OPENSSL_sk_num(uVar7);
      } while (iVar15 < iVar5);
    }
    iVar15 = crl_set_issuers(lVar1);
    if ((iVar15 != 0) &&
       ((pcVar2 = *(code **)(*(longlong *)(lVar1 + 200) + 8), pcVar2 == (code *)0x0 ||
        (iVar15 = (*pcVar2)(lVar1), iVar15 != 0)))) {
      *(uint *)(lVar1 + 0x7c) = *(uint *)(lVar1 + 0x7c) | 0x100;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143d29ad0 X509_CRL_free body=29 status=ok
// SIG undefined X509_CRL_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_CRL_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_145d80790);
  return;
}



// FUNCTION 143d29af0 X509_CRL_get0_by_cert body=123 status=ok
// SIG undefined X509_CRL_get0_by_cert(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_CRL_get0_by_cert(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 200);
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FVoicePacketImpl::GetSampleCounter(param_3);
    uVar3 = UE4Function_Private::TFunction_OwnedObject<<lambda_6ee2cf6eb29fb3eaf224d7c8f92aa15b>,0>
            ::GetAddress(param_3);
    uVar2 = (**(code **)(lVar1 + 0x18))(param_1,param_2,uVar3,uVar2);
  }
  return uVar2;
}



// FUNCTION 143d29b70 X509_CRL_it body=8 status=ok
// SIG undefined X509_CRL_it(void)

undefined * X509_CRL_it(void)

{
  return &DAT_145d80790;
}



// FUNCTION 143d29b80 X509_CRL_verify body=43 status=ok
// SIG undefined X509_CRL_verify(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_CRL_verify(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 200) + 0x20);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d29ba1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 143d29bb0 X509_REVOKED_cmp body=28 status=ok
// SIG undefined X509_REVOKED_cmp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_REVOKED_cmp(undefined8 *param_1,undefined8 *param_2)

{
  ASN1_STRING_cmp(*param_1,*param_2);
  return;
}



// FUNCTION 143d29bd0 crl_set_issuers body=412 status=ok
// SIG undefined crl_set_issuers(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 crl_set_issuers(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  int local_res10 [2];
  
  uVar4 = FVoicePacketImpl::GetSampleCounter();
  iVar9 = 0;
  iVar2 = OPENSSL_sk_num(uVar4);
  lVar7 = 0;
  if (0 < iVar2) {
    do {
      lVar5 = OPENSSL_sk_value(uVar4,iVar9);
      lVar6 = X509_REVOKED_get_ext_d2i(lVar5,0x303,local_res10,0);
      if (lVar6 == 0) {
        lVar6 = lVar7;
        if (local_res10[0] != -1) goto LAB_143d29c41;
      }
      else {
        lVar7 = *(longlong *)(param_1 + 0xa8);
        if (lVar7 == 0) {
          lVar7 = OPENSSL_sk_new_null();
          *(longlong *)(param_1 + 0xa8) = lVar7;
          if (lVar7 == 0) {
            return 0;
          }
        }
        iVar2 = OPENSSL_sk_push(lVar7,lVar6);
        if (iVar2 == 0) {
          return 0;
        }
      }
      *(longlong *)(lVar5 + 0x28) = lVar6;
      lVar7 = X509_REVOKED_get_ext_d2i(lVar5,0x8d,local_res10,0);
      if ((lVar7 == 0) && (local_res10[0] != -1)) {
LAB_143d29c41:
        *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x80;
        return 1;
      }
      if (lVar7 == 0) {
        *(undefined4 *)(lVar5 + 0x30) = 0xffffffff;
      }
      else {
        uVar3 = ASN1_ENUMERATED_get(lVar7);
        *(undefined4 *)(lVar5 + 0x30) = uVar3;
        ASN1_BIT_STRING_free(lVar7);
      }
      uVar1 = *(undefined8 *)(lVar5 + 0x20);
      local_res10[0] = 0;
      iVar2 = OPENSSL_sk_num(uVar1);
      if (local_res10[0] < iVar2) {
        do {
          uVar8 = OPENSSL_sk_value(uVar1,local_res10[0]);
          iVar2 = X509_EXTENSION_get_critical(uVar8);
          if (iVar2 != 0) {
            uVar8 = EVP_MD_CTX_md(uVar8);
            iVar2 = OBJ_obj2nid(uVar8);
            if (iVar2 != 0x303) {
              *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x200;
              break;
            }
          }
          local_res10[0] = local_res10[0] + 1;
          iVar2 = OPENSSL_sk_num(uVar1);
        } while (local_res10[0] < iVar2);
      }
      iVar9 = iVar9 + 1;
      iVar2 = OPENSSL_sk_num(uVar4);
      lVar7 = lVar6;
    } while (iVar9 < iVar2);
  }
  return 1;
}



// FUNCTION 143d29d70 X509_CRL_free body=29 status=ok
// SIG undefined X509_CRL_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_CRL_free(void)

{
  ASN1_item_d2i();
  return;
}



// FUNCTION 143d29d90 X509_CRL_up_ref body=21 status=ok
// SIG undefined X509_CRL_up_ref(void)

bool X509_CRL_up_ref(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x78);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return 1 < iVar2 + 1;
}



// FUNCTION 143d29db0 ossl_ctype_check body=32 status=ok
// SIG undefined ossl_ctype_check(void)

undefined8 ossl_ctype_check(uint param_1,ushort param_2)

{
  if ((param_1 < 0x80) &&
     ((param_2 & *(ushort *)(&DAT_145d80820 + (longlong)(int)param_1 * 2)) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 143d29dd0 ossl_tolower body=50 status=ok
// SIG undefined ossl_tolower(void)

/* WARNING: Removing unreachable block (ram,0x000143d29df1) */

uint ossl_tolower(uint param_1)

{
  if ((param_1 < 0x80) && (((&DAT_145d80820)[(longlong)(int)param_1 * 2] & 2) != 0)) {
    return param_1 ^ 0x20;
  }
  return param_1;
}



// FUNCTION 143d29e10 ASN1_ENUMERATED_get body=95 status=ok
// SIG undefined ASN1_ENUMERATED_get(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ASN1_ENUMERATED_get(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong local_res8 [4];
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (((((param_1[1] & 0xfffffeffU) == 10) && (*param_1 < 5)) &&
      (iVar1 = asn1_string_get_int64(local_res8,param_1,10,param_4,0x143d29e1a), iVar1 != 0)) &&
     (local_res8[0] + 0x80000000U < 0x100000000)) {
    return local_res8[0];
  }
  return 0xffffffff;
}



// FUNCTION 143d29e70 ASN1_ENUMERATED_to_BN body=26 status=ok
// SIG undefined ASN1_ENUMERATED_to_BN(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_ENUMERATED_to_BN(undefined8 param_1,undefined8 param_2)

{
  asn1_string_to_bn(param_1,param_2,10);
  return;
}



// FUNCTION 143d29e90 ASN1_INTEGER_cmp body=74 status=ok
// SIG undefined ASN1_INTEGER_cmp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ASN1_INTEGER_cmp(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 4) & 0x100;
  if (uVar2 != (*(uint *)(param_2 + 4) & 0x100)) {
    uVar1 = 1;
    if (uVar2 != 0) {
      uVar1 = 0xffffffff;
    }
    return uVar1;
  }
  uVar1 = ASN1_STRING_cmp();
  if (uVar2 != 0) {
    uVar1 = (ulonglong)(uint)-(int)uVar1;
  }
  return uVar1;
}



// FUNCTION 143d29ee0 ASN1_INTEGER_dup body=22 status=ok
// SIG undefined ASN1_INTEGER_dup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_INTEGER_dup(void)

{
  ASN1_STRING_dup();
  return;
}



// FUNCTION 143d29f00 ASN1_INTEGER_get body=81 status=ok
// SIG undefined ASN1_INTEGER_get(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ASN1_INTEGER_get(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong local_res8 [4];
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = asn1_string_get_int64(local_res8,param_1,2,param_4,0x143d29f0a);
  if ((iVar1 == 0) || (0xffffffff < local_res8[0] + 0x80000000U)) {
    local_res8[0] = 0xffffffff;
  }
  return local_res8[0];
}



// FUNCTION 143d29f60 ASN1_INTEGER_get_uint64 body=181 status=ok
// SIG undefined ASN1_INTEGER_get_uint64(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASN1_INTEGER_get_uint64(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  
  if (param_2 == (int *)0x0) {
    ERR_put_error(0xd,0xe6,0x43,"crypto\\asn1\\a_int.c",0x165);
    return 0;
  }
  if ((param_2[1] & 0xfffffeffU) != 2) {
    ERR_put_error(0xd,0xe6,0xe1,"crypto\\asn1\\a_int.c",0x169);
    return 0;
  }
  if (((uint)param_2[1] >> 8 & 1) != 0) {
    ERR_put_error(0xd,0xe6,0xe2,"crypto\\asn1\\a_int.c",0x16d);
    return 0;
  }
  uVar1 = asn1_get_uint64(param_1,*(undefined8 *)(param_2 + 2),(longlong)*param_2);
  return uVar1;
}



// FUNCTION 143d2a020 ASN1_INTEGER_set body=29 status=ok
// SIG undefined ASN1_INTEGER_set(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_INTEGER_set(undefined8 param_1,int param_2)

{
  asn1_string_set_int64(param_1,(longlong)param_2,2);
  return;
}



// FUNCTION 143d2a040 ASN1_INTEGER_to_BN body=26 status=ok
// SIG undefined ASN1_INTEGER_to_BN(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_INTEGER_to_BN(undefined8 param_1,undefined8 param_2)

{
  asn1_string_to_bn(param_1,param_2,2);
  return;
}



// FUNCTION 143d2a060 BN_to_ASN1_INTEGER body=26 status=ok
// SIG undefined BN_to_ASN1_INTEGER(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_to_ASN1_INTEGER(undefined8 param_1,undefined8 param_2)

{
  bn_to_asn1_string(param_1,param_2,2);
  return;
}



// FUNCTION 143d2a080 asn1_get_uint64 body=113 status=ok
// SIG undefined asn1_get_uint64(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 asn1_get_uint64(ulonglong *param_1,longlong param_2,ulonglong param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_3 < 9) {
    if (param_2 != 0) {
      uVar2 = 0;
      uVar3 = uVar2;
      if (param_3 != 0) {
        do {
          pbVar1 = (byte *)(uVar3 + param_2);
          uVar3 = uVar3 + 1;
          uVar2 = uVar2 << 8 | (ulonglong)*pbVar1;
        } while (uVar3 < param_3);
      }
      *param_1 = uVar2;
      return 1;
    }
  }
  else {
    ERR_put_error(0xd,0xe1,0xdf,"crypto\\asn1\\a_int.c",0xd5);
  }
  return 0;
}



// FUNCTION 143d2a100 asn1_string_get_int64 body=397 status=ok
// SIG undefined asn1_string_get_int64(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 asn1_string_get_int64(ulonglong *param_1,int *param_2,uint param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 == (int *)0x0) {
    ERR_put_error(0xd,0xe3,0x43,"crypto\\asn1\\a_int.c",0x142);
    return 0;
  }
  if ((param_2[1] & 0xfffffeffU) != param_3) {
    ERR_put_error(0xd,0xe3,0xe1,"crypto\\asn1\\a_int.c",0x146);
    return 0;
  }
  uVar4 = (ulonglong)*param_2;
  if (uVar4 < 9) {
    if (*(longlong *)(param_2 + 2) != 0) {
      uVar2 = 0;
      uVar3 = uVar2;
      if (uVar4 != 0) {
        do {
          pbVar1 = (byte *)(uVar3 + *(longlong *)(param_2 + 2));
          uVar3 = uVar3 + 1;
          uVar2 = uVar2 << 8 | (ulonglong)*pbVar1;
        } while (uVar3 < uVar4);
      }
      if ((param_2[1] & 0x100U) != 0) {
        if (uVar2 < 0x8000000000000001) {
          *param_1 = -uVar2;
          return 1;
        }
        ERR_put_error(0xd,0xe0,0xe0,"crypto\\asn1\\a_int.c",0x109);
        return 0;
      }
      if (uVar2 < 0x8000000000000000) {
        *param_1 = uVar2;
        return 1;
      }
      ERR_put_error(0xd,0xe0,0xdf,"crypto\\asn1\\a_int.c",0x110);
      return 0;
    }
  }
  else {
    ERR_put_error(0xd,0xe1,0xdf,"crypto\\asn1\\a_int.c",0xd5);
  }
  return 0;
}



// FUNCTION 143d2a290 asn1_string_set_int64 body=151 status=ok
// SIG undefined asn1_string_set_int64(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void asn1_string_set_int64(longlong param_1,ulonglong param_2,uint param_3)

{
  longlong lVar1;
  undefined1 auStack_38 [31];
  undefined1 auStack_19 [9];
  ulonglong local_10;
  undefined8 uStack_8;
  longlong lVar2;
  
  uStack_8 = 0x143d2a29a;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  *(uint *)(param_1 + 4) = param_3;
  lVar2 = 8;
  if ((longlong)param_2 < 0) {
    param_2 = -param_2;
    do {
      lVar1 = lVar2 + -1;
      auStack_19[lVar2] = (char)param_2;
      param_2 = param_2 >> 8;
      lVar2 = lVar1;
    } while (param_2 != 0);
    param_3 = param_3 | 0x100;
  }
  else {
    do {
      lVar1 = lVar2 + -1;
      auStack_19[lVar2] = (char)param_2;
      param_2 = param_2 >> 8;
      lVar2 = lVar1;
    } while (param_2 != 0);
    param_3 = param_3 & 0xfffffeff;
  }
  *(uint *)(param_1 + 4) = param_3;
  ASN1_STRING_set(param_1,auStack_19 + lVar1 + 1,8 - (int)lVar1);
  return;
}



// FUNCTION 143d2a330 asn1_string_to_bn body=180 status=ok
// SIG undefined asn1_string_to_bn(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong asn1_string_to_bn(undefined4 *param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143d2a33c;
  if ((param_1[1] & 0xfffffeff) != param_3) {
    ERR_put_error(0xd,0xe4,0xe1,"crypto\\asn1\\a_int.c",499,0x143d2a33c);
    return 0;
  }
  lVar1 = BN_bin2bn(*(undefined8 *)(param_1 + 2),*param_1,param_2);
  if (lVar1 == 0) {
    ERR_put_error(0xd,0xe4,0x69,"crypto\\asn1\\a_int.c",0x1f9,uVar2);
    return 0;
  }
  if ((param_1[1] & 0x100) != 0) {
    BN_set_negative(lVar1,1);
  }
  return lVar1;
}



// FUNCTION 143d2a3f0 bn_to_asn1_string body=266 status=ok
// SIG undefined bn_to_asn1_string(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * bn_to_asn1_string(undefined8 param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143d2a405;
  if (param_2 == (int *)0x0) {
    piVar4 = (int *)ASN1_STRING_type_new(param_3);
  }
  else {
    param_2[1] = param_3;
    piVar4 = param_2;
  }
  if (piVar4 == (int *)0x0) {
    uVar1 = 0x1cf;
    uVar5 = 0x3a;
  }
  else {
    iVar2 = BN_is_negative(param_1);
    if ((iVar2 != 0) && (iVar2 = BN_is_zero(param_1), iVar2 == 0)) {
      piVar4[1] = piVar4[1] | 0x102;
    }
    iVar2 = BN_num_bits(param_1);
    iVar2 = (int)((iVar2 + 7 >> 0x1f & 7U) + iVar2 + 7) >> 3;
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    iVar3 = ASN1_STRING_set(piVar4,0,iVar2);
    if (iVar3 != 0) {
      iVar3 = BN_is_zero(param_1);
      if (iVar3 == 0) {
        iVar2 = BN_bn2bin(param_1);
      }
      else {
        **(undefined1 **)(piVar4 + 2) = 0;
      }
      *piVar4 = iVar2;
      return piVar4;
    }
    uVar1 = 0x1dc;
    uVar5 = 0x41;
  }
  ERR_put_error(0xd,0xe5,uVar5,"crypto\\asn1\\a_int.c",uVar1,uVar6);
  if (piVar4 != param_2) {
    ASN1_BIT_STRING_free(piVar4);
  }
  return (int *)0x0;
}



// FUNCTION 143d2a500 c2i_ASN1_INTEGER body=230 status=ok
// SIG undefined c2i_ASN1_INTEGER(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong c2i_ASN1_INTEGER(longlong *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  int local_res18 [4];
  undefined8 uVar5;
  
  uVar5 = 0x143d2a518;
  lVar4 = (longlong)param_3;
  uVar2 = c2i_ibuf(0,0,*param_2,lVar4);
  if (uVar2 != 0) {
    if ((param_1 == (longlong *)0x0) || (lVar3 = *param_1, lVar3 == 0)) {
      lVar3 = ASN1_INTEGER_new();
      if (lVar3 == 0) {
        return 0;
      }
      *(undefined4 *)(lVar3 + 4) = 2;
    }
    iVar1 = ASN1_STRING_set(lVar3,0,uVar2 & 0xffffffff);
    if (iVar1 != 0) {
      c2i_ibuf(*(undefined8 *)(lVar3 + 8),local_res18,*param_2,lVar4);
      if (local_res18[0] != 0) {
        *(uint *)(lVar3 + 4) = *(uint *)(lVar3 + 4) | 0x100;
      }
      *param_2 = *param_2 + lVar4;
      if (param_1 != (longlong *)0x0) {
        *param_1 = lVar3;
        return lVar3;
      }
      return lVar3;
    }
    ERR_put_error(0xd,0xc2,0x41,"crypto\\asn1\\a_int.c",0x139,uVar5);
    if ((param_1 == (longlong *)0x0) || (*param_1 != lVar3)) {
      ASN1_BIT_STRING_free(lVar3);
    }
  }
  return 0;
}



// FUNCTION 143d2a5f0 c2i_ibuf body=494 status=ok
// SIG undefined c2i_ibuf(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong c2i_ibuf(byte *param_1,uint *param_2,byte *param_3,ulonglong param_4)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 auVar3 [13];
  undefined1 auVar4 [13];
  undefined1 auVar5 [13];
  undefined1 auVar6 [13];
  byte bVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  longlong lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  if (param_4 == 0) {
    ERR_put_error(0xd,0xe2,0xde,"crypto\\asn1\\a_int.c",0x9a);
    return 0;
  }
  bVar2 = *param_3;
  if (param_2 != (uint *)0x0) {
    *param_2 = bVar2 & 0x80;
  }
  if (param_4 == 1) {
    if (param_1 != (byte *)0x0) {
      bVar7 = *param_3;
      if ((bVar2 & 0x80) != 0) {
        bVar7 = ~bVar7 + 1;
      }
      *param_1 = bVar7;
    }
    return 1;
  }
  uVar11 = 0;
  uVar10 = 0;
  if (*param_3 == 0) {
    uVar9 = 1;
    uVar11 = 1;
  }
  else {
    uVar9 = uVar10;
    if (*param_3 != 0xff) goto LAB_143d2a77d;
    uVar8 = 1;
    if (1 < param_4) {
      if (7 < param_4 - 1) {
        auVar16 = ZEXT816(0);
        auVar18 = ZEXT816(0);
        do {
          uVar10 = *(uint *)(param_3 + uVar8);
          auVar3[0xc] = (char)(uVar10 >> 0x18);
          auVar3._0_12_ = ZEXT712(0);
          auVar5[1] = 0;
          auVar5[0] = (byte)(uVar10 >> 0x10);
          auVar5._2_3_ = auVar3._10_3_;
          auVar5._5_8_ = 0;
          auVar15[5] = 0;
          auVar15[4] = (byte)(uVar10 >> 8);
          auVar15._6_7_ = SUB137(auVar5 << 0x40,6);
          auVar15._0_4_ = uVar10 & 0xff;
          auVar15._13_3_ = 0;
          auVar16 = auVar15 | auVar16;
          uVar10 = *(uint *)(param_3 + uVar8 + 4);
          uVar8 = uVar8 + 8;
          auVar4[0xc] = (char)(uVar10 >> 0x18);
          auVar4._0_12_ = ZEXT712(0);
          auVar6[1] = 0;
          auVar6[0] = (byte)(uVar10 >> 0x10);
          auVar6._2_3_ = auVar4._10_3_;
          auVar6._5_8_ = 0;
          auVar17[5] = 0;
          auVar17[4] = (byte)(uVar10 >> 8);
          auVar17._6_7_ = SUB137(auVar6 << 0x40,6);
          auVar17._0_4_ = uVar10 & 0xff;
          auVar17._13_3_ = 0;
          auVar18 = auVar17 | auVar18;
        } while (uVar8 < param_4 - ((uint)(param_4 - 1) & 7));
        auVar16 = auVar16 | auVar18 | (auVar16 | auVar18) >> 0x40;
        uVar11 = (ulonglong)(auVar16._0_4_ | auVar16._4_4_);
      }
      uVar10 = (uint)uVar11;
      for (; uVar8 < param_4; uVar8 = uVar8 + 1) {
        uVar10 = (uint)uVar11 | (uint)param_3[uVar8];
        uVar11 = (ulonglong)uVar10;
      }
    }
    uVar9 = (uint)(uVar10 != 0);
    uVar11 = (ulonglong)(uVar10 != 0);
    if (uVar10 == 0) goto LAB_143d2a77d;
  }
  if ((bVar2 & 0x80) == (param_3[1] & 0x80)) {
    ERR_put_error(0xd,0xe2,0xdd,"crypto\\asn1\\a_int.c",0xbb);
    return 0;
  }
LAB_143d2a77d:
  lVar14 = param_4 - uVar9;
  if (param_1 != (byte *)0x0) {
    uVar10 = -(uint)((bVar2 & 0x80) != 0);
    pbVar13 = param_3 + lVar14 + uVar11;
    uVar9 = uVar10 & 1;
    if (lVar14 != 0) {
      pbVar12 = pbVar13 + (-(longlong)param_3 - uVar11);
      do {
        pbVar1 = pbVar13 + -1;
        pbVar13 = pbVar13 + -1;
        pbVar12 = pbVar12 + -1;
        uVar9 = uVar9 + ((uint)*pbVar1 ^ uVar10 & 0xff);
        param_1[(longlong)pbVar12] = (byte)uVar9;
        uVar9 = uVar9 >> 8;
      } while (pbVar12 != (byte *)0x0);
    }
  }
  return lVar14;
}



// FUNCTION 143d2a7e0 c2i_uint64_int body=196 status=ok
// SIG undefined c2i_uint64_int(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 c2i_uint64_int(ulonglong *param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  byte local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  uVar2 = c2i_ibuf(0,0,*param_3,(longlong)param_4);
  if (uVar2 != 0) {
    if (uVar2 < 9) {
      c2i_ibuf(local_38,param_2,*param_3,(longlong)param_4);
      uVar3 = 0;
      uVar4 = uVar3;
      if (uVar2 != 0) {
        do {
          pbVar1 = local_38 + uVar4;
          uVar4 = uVar4 + 1;
          uVar3 = uVar3 << 8 | (ulonglong)*pbVar1;
        } while (uVar4 < uVar2);
      }
      *param_1 = uVar3;
      return 1;
    }
    local_48 = 0x267;
    ERR_put_error(0xd,0x65,0xdf,"crypto\\asn1\\a_int.c");
  }
  return 0;
}



// FUNCTION 143d2a8b0 i2c_ASN1_INTEGER body=43 status=ok
// SIG undefined i2c_ASN1_INTEGER(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2c_ASN1_INTEGER(int *param_1,undefined8 param_2)

{
  i2c_ibuf(*(undefined8 *)(param_1 + 2),(longlong)*param_1,param_1[1] & 0x100,param_2);
  return;
}



// FUNCTION 143d2a8e0 i2c_ibuf body=390 status=ok
// SIG undefined i2c_ibuf(void)

void i2c_ibuf(byte *param_1,ulonglong param_2,int param_3,longlong *param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  undefined1 auVar4 [13];
  undefined1 auVar5 [13];
  undefined1 auVar6 [13];
  undefined1 auVar7 [13];
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte bVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  byte *pbVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  uVar10 = 0;
  uVar14 = 0;
  bVar11 = 0;
  if ((param_1 == (byte *)0x0) || (param_2 == 0)) {
    lVar8 = 1;
  }
  else {
    bVar2 = *param_1;
    if (param_3 == 0) {
      bVar11 = 0;
      if (0x7f < bVar2) {
        uVar14 = 1;
        lVar8 = param_2 + 1;
        uVar10 = param_2;
        goto LAB_143d2a9fe;
      }
    }
    else {
      bVar11 = 0xff;
      if (0x80 < bVar2) {
        uVar14 = 1;
        lVar8 = param_2 + 1;
        uVar10 = param_2;
        goto LAB_143d2a9fe;
      }
      bVar11 = 0xff;
      if (bVar2 == 0x80) {
        uVar9 = 1;
        if (1 < param_2) {
          if (7 < param_2 - 1) {
            auVar17 = ZEXT816(0);
            auVar19 = ZEXT816(0);
            do {
              uVar14 = *(uint *)(param_1 + uVar9);
              auVar4[0xc] = (char)(uVar14 >> 0x18);
              auVar4._0_12_ = ZEXT712(0);
              auVar6[1] = 0;
              auVar6[0] = (byte)(uVar14 >> 0x10);
              auVar6._2_3_ = auVar4._10_3_;
              auVar6._5_8_ = 0;
              auVar16[5] = 0;
              auVar16[4] = (byte)(uVar14 >> 8);
              auVar16._6_7_ = SUB137(auVar6 << 0x40,6);
              auVar16._0_4_ = uVar14 & 0xff;
              auVar16._13_3_ = 0;
              auVar17 = auVar16 | auVar17;
              uVar14 = *(uint *)(param_1 + uVar9 + 4);
              uVar9 = uVar9 + 8;
              auVar5[0xc] = (char)(uVar14 >> 0x18);
              auVar5._0_12_ = ZEXT712(0);
              auVar7[1] = 0;
              auVar7[0] = (byte)(uVar14 >> 0x10);
              auVar7._2_3_ = auVar5._10_3_;
              auVar7._5_8_ = 0;
              auVar18[5] = 0;
              auVar18[4] = (byte)(uVar14 >> 8);
              auVar18._6_7_ = SUB137(auVar7 << 0x40,6);
              auVar18._0_4_ = uVar14 & 0xff;
              auVar18._13_3_ = 0;
              auVar19 = auVar18 | auVar19;
            } while (uVar9 < param_2 - ((uint)(param_2 - 1) & 7));
            auVar17 = auVar19 | auVar17 | (auVar19 | auVar17) >> 0x40;
            uVar10 = (ulonglong)(auVar17._0_4_ | auVar17._4_4_);
          }
          uVar14 = (uint)uVar10;
          for (; uVar9 < param_2; uVar9 = uVar9 + 1) {
            uVar14 = (uint)uVar10 | (uint)param_1[uVar9];
            uVar10 = (ulonglong)uVar14;
          }
        }
        bVar11 = -(uVar14 != 0);
        uVar10 = (ulonglong)(bVar11 & 1);
      }
    }
    uVar14 = (uint)uVar10;
    lVar8 = uVar10 + param_2;
    uVar10 = param_2;
  }
LAB_143d2a9fe:
  if ((param_4 != (longlong *)0x0) && (pbVar3 = (byte *)*param_4, pbVar3 != (byte *)0x0)) {
    pbVar15 = param_1 + uVar10;
    uVar12 = bVar11 & 1;
    *pbVar3 = bVar11;
    if (uVar10 != 0) {
      lVar13 = (longlong)pbVar15 - (longlong)param_1;
      do {
        pbVar1 = pbVar15 + -1;
        pbVar15 = pbVar15 + -1;
        lVar13 = lVar13 + -1;
        uVar12 = uVar12 + (*pbVar1 ^ bVar11);
        pbVar3[lVar13 + (ulonglong)uVar14] = (byte)uVar12;
        uVar12 = uVar12 >> 8;
      } while (lVar13 != 0);
    }
    *param_4 = *param_4 + lVar8;
  }
  return;
}



// FUNCTION 143d2aa70 i2c_uint64_int body=99 status=ok
// SIG undefined i2c_uint64_int(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void i2c_uint64_int(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_19;
  ulonglong local_18 [2];
  undefined8 uStack_8;
  
  uStack_8 = 0x143d2aa7a;
  local_18[0] = DAT_1468387a8 ^ (ulonglong)auStack_48;
  lVar1 = 8;
  puVar2 = local_18;
  do {
    puVar2 = (ulonglong *)((longlong)puVar2 + -1);
    lVar1 = lVar1 + -1;
    *(char *)puVar2 = (char)param_2;
    param_2 = param_2 >> 8;
  } while (param_2 != 0);
  local_28 = param_1;
  i2c_ibuf(puVar2,8 - lVar1,param_3,&local_28);
  return;
}



// FUNCTION 143d2aae0 ASN1_UTCTIME_adj body=138 status=ok
// SIG undefined ASN1_UTCTIME_adj(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 ASN1_UTCTIME_adj(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60 [40];
  ulonglong local_38;
  undefined8 uStack_28;
  
  uStack_28 = 0x143d2aaef;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_68 = param_2;
  lVar2 = OPENSSL_gmtime(&local_68,local_60);
  if (lVar2 == 0) {
LAB_143d2ab52:
    uVar3 = 0;
  }
  else {
    if ((param_3 != 0) || (param_4 != 0)) {
      iVar1 = OPENSSL_gmtime_adj(lVar2,param_3,param_4);
      if (iVar1 == 0) goto LAB_143d2ab52;
    }
    uVar3 = asn1_time_from_tm(param_1,lVar2,0x17);
  }
  return uVar3;
}



// FUNCTION 143d2ab70 ASN1_UTCTIME_check body=40 status=ok
// SIG undefined ASN1_UTCTIME_check(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASN1_UTCTIME_check(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 4) != 0x17) {
    return 0;
  }
  uVar1 = FUN_143d2b260(0,param_1);
  return uVar1;
}



// FUNCTION 143d2aba0 ASN1_GENERALIZEDTIME_adj body=138 status=ok
// SIG undefined ASN1_GENERALIZEDTIME_adj(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 ASN1_GENERALIZEDTIME_adj(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60 [40];
  ulonglong local_38;
  undefined8 uStack_28;
  
  uStack_28 = 0x143d2abaf;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_68 = param_2;
  lVar2 = OPENSSL_gmtime(&local_68,local_60);
  if (lVar2 == 0) {
LAB_143d2ac12:
    uVar3 = 0;
  }
  else {
    if ((param_3 != 0) || (param_4 != 0)) {
      iVar1 = OPENSSL_gmtime_adj(lVar2,param_3,param_4);
      if (iVar1 == 0) goto LAB_143d2ac12;
    }
    uVar3 = asn1_time_from_tm(param_1,lVar2,0x18);
  }
  return uVar3;
}



// FUNCTION 143d2ac30 ASN1_GENERALIZEDTIME_check body=40 status=ok
// SIG undefined ASN1_GENERALIZEDTIME_check(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASN1_GENERALIZEDTIME_check(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 4) != 0x18) {
    return 0;
  }
  uVar1 = FUN_143d2b260(0,param_1);
  return uVar1;
}



// FUNCTION 143d2ac60 ASN1_GENERALIZEDTIME_print body=35 status=ok
// SIG undefined ASN1_GENERALIZEDTIME_print(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASN1_GENERALIZEDTIME_print(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 4) != 0x18) {
    return 0;
  }
  uVar1 = ASN1_TIME_print();
  return uVar1;
}



// FUNCTION 143d2ac90 ASN1_GENERALIZEDTIME_set_string body=116 status=ok
// SIG undefined ASN1_GENERALIZEDTIME_set_string(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASN1_GENERALIZEDTIME_set_string(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_28;
  undefined4 local_24;
  longlong local_20;
  undefined4 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143d2ac9c;
  local_24 = 0x18;
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(param_2 + lVar2) != '\0');
  local_28 = (undefined4)lVar2;
  local_18 = 0;
  local_20 = param_2;
  iVar1 = FUN_143d2b260(0,&local_28);
  if (iVar1 == 0) {
    return 0;
  }
  if ((param_1 != 0) && (iVar1 = ASN1_STRING_copy(param_1,&local_28), iVar1 == 0)) {
    return 0;
  }
  return 1;
}



// FUNCTION 143d2ad10 ASN1_TIME_adj body=170 status=ok
// SIG undefined ASN1_TIME_adj(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 ASN1_TIME_adj(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_68;
  undefined1 local_60 [40];
  ulonglong local_38;
  undefined8 uStack_28;
  
  uStack_28 = 0x143d2ad1f;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_68 = param_2;
  lVar2 = OPENSSL_gmtime(&local_68,local_60);
  if (lVar2 == 0) {
    local_78 = 0x146;
    ERR_put_error(0xd,0xd9,0xad,"crypto\\asn1\\a_time.c");
LAB_143d2ad76:
    uVar3 = 0;
  }
  else {
    if ((param_3 != 0) || (param_4 != 0)) {
      iVar1 = OPENSSL_gmtime_adj(lVar2,param_3,param_4);
      if (iVar1 == 0) goto LAB_143d2ad76;
    }
    uVar3 = asn1_time_from_tm(param_1,lVar2,0xffffffff);
  }
  return uVar3;
}



// FUNCTION 143d2adc0 ASN1_TIME_check body=51 status=ok
// SIG undefined ASN1_TIME_check(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASN1_TIME_check(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 4) == 0x18) {
    uVar1 = ASN1_GENERALIZEDTIME_check();
    return uVar1;
  }
  if (*(int *)(param_1 + 4) == 0x17) {
    uVar1 = ASN1_UTCTIME_check();
    return uVar1;
  }
  return 0;
}



// FUNCTION 143d2ae00 ASN1_TIME_diff body=248 status=ok
// SIG undefined ASN1_TIME_diff(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8 ASN1_TIME_diff(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 auStack_98 [32];
  __time64_t local_78 [5];
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (param_3 == 0) {
    _time64(local_78);
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    lVar2 = OPENSSL_gmtime(local_78,&local_48);
    bVar4 = lVar2 == 0;
  }
  else {
    iVar1 = FUN_143d2b260(&local_48,param_3);
    bVar4 = iVar1 == 0;
  }
  if (!bVar4) {
    if (param_4 == 0) {
      _time64(local_78);
      local_78[1] = 0;
      local_78[2] = 0;
      local_78[3] = 0;
      local_78[4] = 0;
      local_50 = 0;
      lVar2 = OPENSSL_gmtime(local_78,local_78 + 1);
      bVar4 = lVar2 == 0;
    }
    else {
      iVar1 = FUN_143d2b260(local_78 + 1,param_4);
      bVar4 = iVar1 == 0;
    }
    if (!bVar4) {
      uVar3 = OPENSSL_gmtime_diff(param_1,param_2,&local_48,local_78 + 1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 143d2af00 ASN1_TIME_free body=29 status=ok
// SIG undefined ASN1_TIME_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_TIME_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_145d80940);
  return;
}



// FUNCTION 143d2af30 ASN1_TIME_print body=504 status=ok
// SIG undefined ASN1_TIME_print(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool ASN1_TIME_print(undefined8 param_1,int *param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  longlong lVar9;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  
  iVar3 = FUN_143d2b260(&local_58);
  if (iVar3 == 0) {
    BIO_write(param_1,"Bad time value",0xe);
    return false;
  }
  lVar2 = *(longlong *)(param_2 + 2);
  iVar3 = *param_2;
  cVar1 = *(char *)((longlong)iVar3 + -1 + lVar2);
  if (param_2[1] == 0x18) {
    iVar7 = 0;
    lVar9 = 0;
    if ((0xf < iVar3) && (lVar9 = 0, *(char *)(lVar2 + 0xe) == '.')) {
      lVar9 = lVar2 + 0xe;
      iVar7 = 1;
      if (0xf < iVar3) {
        iVar6 = 0xf;
        pcVar8 = (char *)(lVar2 + 0xf);
        do {
          iVar4 = ossl_ctype_check((int)*pcVar8,4);
          if (iVar4 == 0) break;
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + 1;
          pcVar8 = pcVar8 + 1;
        } while (iVar6 < iVar3);
      }
    }
    puVar5 = &DAT_143f3f584;
    if (cVar1 == 'Z') {
      puVar5 = &DAT_145d80ab8;
    }
    iVar3 = BIO_printf(param_1,"%s %2d %02d:%02d:%02d%.*s %d%s",
                       &DAT_145d80a20 + (longlong)local_48 * 4,local_4c,local_50,local_54,local_58,
                       iVar7,lVar9,local_44 + 0x76c,puVar5);
  }
  else {
    puVar5 = &DAT_143f3f584;
    if (cVar1 == 'Z') {
      puVar5 = &DAT_145d80ab8;
    }
    iVar3 = BIO_printf(param_1,"%s %2d %02d:%02d:%02d %d%s",&DAT_145d80a20 + (longlong)local_48 * 4,
                       local_4c,local_50,local_54,local_58,local_44 + 0x76c,puVar5);
  }
  return 0 < iVar3;
}



// FUNCTION 143d2b130 asn1_time_from_tm body=299 status=ok
// SIG undefined asn1_time_from_tm(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * asn1_time_from_tm(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143d2b14a;
  puVar3 = (undefined4 *)0x0;
  if (param_3 == -1) {
    param_3 = (99 < param_2[5] - 0x32) + 0x17;
  }
  else if (param_3 == 0x17) {
    if (99 < param_2[5] - 0x32) goto LAB_143d2b183;
  }
  else if (param_3 != 0x18) goto LAB_143d2b183;
  puVar3 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)ASN1_STRING_new();
  }
  if (puVar3 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  iVar1 = ASN1_STRING_set(puVar3,0,0x14);
  if (iVar1 != 0) {
    puVar3[1] = param_3;
    if (param_3 == 0x18) {
      iVar1 = param_2[5] + 0x76c;
    }
    else {
      iVar1 = (int)param_2[5] % 100;
    }
    pcVar4 = "%04d%02d%02d%02d%02d%02dZ";
    if (param_3 != 0x18) {
      pcVar4 = "%02d%02d%02d%02d%02d%02dZ";
    }
    uVar2 = BIO_snprintf(*(undefined8 *)(puVar3 + 2),0x14,pcVar4,iVar1,param_2[4] + 1,param_2[3],
                         param_2[2],param_2[1],*param_2,uVar5);
    *puVar3 = uVar2;
    return puVar3;
  }
LAB_143d2b183:
  if (puVar3 != param_1) {
    ASN1_STRING_free(puVar3);
  }
  return (undefined4 *)0x0;
}



// FUNCTION 143d2b260 FUN_143d2b260 body=1346 status=ok
// SIG undefined FUN_143d2b260(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143d2b260(undefined8 *param_1,uint *param_2)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  uint *puVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  char *pcVar20;
  int iVar21;
  ulonglong uVar22;
  undefined1 auStack_b8 [32];
  char local_98;
  uint local_94;
  int local_90;
  uint local_8c;
  uint local_88;
  int local_84;
  ulonglong local_80;
  uint *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  ulonglong local_40;
  ulonglong uVar15;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  uVar22 = 0;
  local_88 = 0;
  local_80 = 6;
  local_8c = 6;
  if (param_2[1] == 0x17) {
    uVar7 = param_2[4] & 0x100;
    iVar8 = 0xd;
    if (uVar7 == 0) {
      iVar8 = 0xb;
    }
    local_88 = (uint)(uVar7 != 0);
    uVar17 = (ulonglong)(uVar7 != 0);
    local_80 = 5;
  }
  else {
    if (param_2[1] != 0x18) {
      return 0;
    }
    local_8c = 7;
    if ((param_2[4] & 0x100) == 0) {
      iVar8 = 0xd;
      uVar17 = uVar22;
      local_80 = 6;
    }
    else {
      iVar8 = 0xf;
      local_88 = 1;
      uVar17 = 1;
    }
  }
  uVar7 = *param_2;
  uVar11 = (ulonglong)(int)uVar7;
  lVar3 = *(longlong *)(param_2 + 2);
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  if ((int)uVar7 < iVar8) {
    return 0;
  }
  local_90 = 0;
  uVar15 = uVar22;
  uVar16 = uVar22;
  uVar18 = uVar22;
  local_94 = uVar7;
  local_78 = param_2;
  local_70 = param_1;
  do {
    uVar12 = (uint)uVar15;
    if (((((int)uVar17 == 0) && (uVar16 == local_80)) &&
        (bVar6 = *(char *)(uVar18 + lVar3) - 0x2b, bVar6 < 0x30)) &&
       (uVar14 = 0, (0x800000000005U >> ((longlong)(char)bVar6 & 0x3fU) & 1) != 0)) break;
    iVar8 = ossl_ctype_check((int)*(char *)(uVar18 + lVar3),4);
    if (iVar8 == 0) {
      return 0;
    }
    cVar2 = *(char *)(uVar18 + lVar3);
    uVar17 = uVar18 + 1;
    if (uVar17 == uVar11) {
      return 0;
    }
    iVar8 = ossl_ctype_check((int)*(char *)(uVar17 + lVar3),4);
    if (iVar8 == 0) {
      return 0;
    }
    uVar12 = uVar12 + 2;
    uVar15 = (ulonglong)uVar12;
    uVar18 = uVar18 + 2;
    iVar8 = (int)*(char *)(uVar17 + lVar3) + cVar2 * 10 + -0x210;
    if (uVar18 == uVar11) {
      return 0;
    }
    uVar1 = uVar16 + 1;
    uVar14 = local_78[1];
    uVar17 = uVar1;
    if (uVar14 != 0x17) {
      uVar17 = uVar16;
    }
    if (iVar8 < (int)(&DAT_145d809a0)[uVar17]) {
      return 0;
    }
    if ((int)(&DAT_145d809c8)[uVar17] < iVar8) {
      return 0;
    }
    iVar21 = local_90 + 1;
    iVar9 = iVar21;
    if (uVar14 != 0x17) {
      iVar9 = local_90;
    }
    iVar5 = (int)local_58;
    switch(iVar9) {
    case 0:
      local_58 = CONCAT44((iVar8 + -0x13) * 100,(int)local_58);
      break;
    case 1:
      if (uVar14 == 0x17) {
        if (iVar8 < 0x32) {
          local_58 = CONCAT44(iVar8 + 100,(int)local_58);
        }
        else {
          local_58 = CONCAT44(iVar8,(int)local_58);
        }
      }
      else {
        local_58 = CONCAT44(local_58._4_4_ + iVar8,(int)local_58);
      }
      break;
    case 2:
      local_58 = CONCAT44(local_58._4_4_,iVar8 + -1);
      break;
    case 3:
      lVar19 = (longlong)(int)local_58;
      if ((int)local_58 == 1) {
        iVar9 = FUN_143d2b7c0(local_58._4_4_ + 0x76c);
        iVar9 = iVar9 + 0x1c;
      }
      else {
        iVar9 = *(int *)(&DAT_145d809f0 + lVar19 * 4);
      }
      if (iVar9 < iVar8) {
        return 0;
      }
      local_84 = *(int *)(&DAT_145d80970 + lVar19 * 4) + iVar8;
      local_90 = local_58._4_4_ + 0x76c;
      uStack_60 = CONCAT44(iVar8,(undefined4)uStack_60);
      uStack_50._4_4_ = local_84 + -1;
      if (iVar5 < 2) {
        local_90 = local_58._4_4_ + 0x76b;
        iVar9 = 0xe;
      }
      else {
        iVar10 = FUN_143d2b7c0();
        iVar9 = 2;
        uStack_50._4_4_ = local_84 + -1 + iVar10;
      }
      iVar10 = local_90 / 100;
      local_90 = local_90 % 100;
      uStack_50 = CONCAT44(uStack_50._4_4_,
                           (((int)((local_90 >> 0x1f & 3U) + local_90) >> 2) + 6 +
                            local_90 + iVar10 * 5 +
                            ((iVar9 + iVar5) * 0xd) / 5 +
                            ((int)(iVar10 + (iVar10 >> 0x1f & 3U)) >> 2) + iVar8) % 7);
      break;
    case 4:
      uStack_60 = CONCAT44(uStack_60._4_4_,iVar8);
      break;
    case 5:
      local_68 = CONCAT44(iVar8,(undefined4)local_68);
      break;
    case 6:
      local_68 = CONCAT44(local_68._4_4_,iVar8);
    }
    uVar17 = (ulonglong)local_88;
    uVar16 = uVar1;
    uVar14 = local_88;
    local_90 = iVar21;
  } while ((longlong)uVar1 < (longlong)(ulonglong)local_8c);
  if ((local_78[1] == 0x18) && (*(char *)((int)uVar12 + lVar3) == '.')) {
    if (uVar14 != 0) {
      return 0;
    }
    uVar13 = uVar12 + 1;
    if (uVar13 == uVar7) {
      return 0;
    }
    lVar19 = (longlong)(int)uVar13;
    uVar12 = uVar13;
    if ((longlong)uVar11 <= lVar19) {
      return 0;
    }
    do {
      iVar8 = ossl_ctype_check((int)*(char *)(lVar19 + lVar3),4);
      if (iVar8 == 0) break;
      uVar12 = uVar12 + 1;
      lVar19 = lVar19 + 1;
    } while (lVar19 < (longlong)uVar11);
    if (uVar13 == uVar12) {
      return 0;
    }
    if (uVar12 == uVar7) {
      return 0;
    }
  }
  puVar4 = local_78;
  local_98 = *(char *)((int)uVar12 + lVar3);
  if (local_98 == 'Z') {
    uVar14 = uVar12 + 1;
    local_94 = uVar7;
  }
  else {
    if (uVar14 != 0) {
      return 0;
    }
    if ((local_98 - 0x2bU & 0xfd) != 0) {
      return 0;
    }
    uVar14 = uVar12 + 1;
    if (uVar12 + 5 != uVar7) {
      return 0;
    }
    uVar17 = (ulonglong)local_8c;
    pcVar20 = (char *)((int)uVar14 + lVar3);
    uVar7 = local_8c;
    do {
      iVar8 = ossl_ctype_check((int)*pcVar20,4);
      if (iVar8 == 0) {
        return 0;
      }
      cVar2 = *pcVar20;
      iVar8 = ossl_ctype_check((int)pcVar20[1],4);
      if (iVar8 == 0) {
        return 0;
      }
      iVar8 = (int)pcVar20[1] + cVar2 * 10 + -0x210;
      uVar11 = uVar17 + 1;
      if (puVar4[1] != 0x17) {
        uVar11 = uVar17;
      }
      if (iVar8 < (int)(&DAT_145d809a0)[uVar11]) {
        return 0;
      }
      if ((int)(&DAT_145d809c8)[uVar11] < iVar8) {
        return 0;
      }
      if (local_70 != (undefined8 *)0x0) {
        if (uVar17 == local_8c) {
          uVar22 = (ulonglong)(uint)(iVar8 * 0xe10);
        }
        else if (uVar7 == local_8c + 1) {
          uVar22 = (ulonglong)(uint)((int)uVar22 + iVar8 * 0x3c);
        }
      }
      uVar14 = uVar14 + 2;
      pcVar20 = pcVar20 + 2;
      uVar7 = uVar7 + 1;
      uVar17 = uVar17 + 1;
    } while ((int)uVar7 < (int)(local_8c + 2));
    if ((int)uVar22 != 0) {
      uVar17 = (ulonglong)(uint)-(int)uVar22;
      if (local_98 == '-') {
        uVar17 = uVar22;
      }
      iVar8 = OPENSSL_gmtime_adj(&local_68,0,uVar17);
      if (iVar8 == 0) {
        return 0;
      }
    }
  }
  if (uVar14 != local_94) {
    return 0;
  }
  if (local_70 != (undefined8 *)0x0) {
    *local_70 = local_68;
    local_70[1] = uStack_60;
    local_70[2] = local_58;
    local_70[3] = uStack_50;
    *(undefined4 *)(local_70 + 4) = local_48;
  }
  return 1;
}



// FUNCTION 143d2b7c0 FUN_143d2b7c0 body=94 status=ok
// SIG undefined FUN_143d2b7c0(void)

undefined8 FUN_143d2b7c0(uint param_1)

{
  if (param_1 == ((int)param_1 / 400) * 400) {
    return 1;
  }
  if (param_1 != ((int)param_1 / 100) * 100) {
    param_1 = param_1 & 0x80000003;
    if ((int)param_1 < 0) {
      param_1 = (param_1 - 1 | 0xfffffffc) + 1;
    }
    if (param_1 == 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143d2b820 ASN1_OCTET_STRING_cmp body=22 status=ok
// SIG undefined ASN1_OCTET_STRING_cmp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_OCTET_STRING_cmp(void)

{
  ASN1_STRING_cmp();
  return;
}



// FUNCTION 143d2b840 ASN1_OCTET_STRING_set body=22 status=ok
// SIG undefined ASN1_OCTET_STRING_set(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_OCTET_STRING_set(void)

{
  ASN1_STRING_set();
  return;
}



// FUNCTION 143d2b860 X509_policy_check body=888 status=ok
// SIG undefined X509_policy_check(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong X509_policy_check(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,
                           undefined8 param_4,undefined4 param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  bool bVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  uint uVar12;
  ulonglong uVar14;
  ulonglong *puVar15;
  int iVar16;
  undefined8 *puVar17;
  ulonglong local_48;
  longlong *local_40;
  ulonglong uVar13;
  
  uVar14 = 0;
  *param_1 = 0;
  bVar3 = false;
  *param_2 = 0;
  local_40 = (longlong *)0x0;
  local_48 = 0;
  uVar6 = tree_init(&local_40,param_3,param_5);
  plVar4 = local_40;
  if ((int)(uint)uVar6 < 1) {
    return uVar6;
  }
  if ((uVar6 & 4) == 0) {
    if ((uVar6 & 2) != 0) {
      X509_policy_tree_free(local_40);
      return (ulonglong)(((uint)uVar6 & 4) + 1);
    }
  }
  else {
    *param_2 = 1;
    if ((uVar6 & 2) != 0) {
      return 0xfffffffe;
    }
  }
  iVar5 = tree_evaluate(local_40);
  if (iVar5 < 1) {
LAB_143d2ba54:
    X509_policy_tree_free(plVar4);
    uVar6 = 0;
  }
  else {
    if (iVar5 == 2) {
      X509_policy_tree_free(plVar4);
      if ((uVar6 & 4) != 0) {
        return 0xfffffffe;
      }
    }
    else {
      iVar5 = (int)plVar4[1];
      puVar15 = (ulonglong *)(plVar4 + 3);
      lVar10 = *plVar4;
      if (*(longlong *)((longlong)iVar5 * 0x20 + -0x10 + lVar10) != 0) {
        iVar5 = tree_add_auth_node(puVar15);
        if (iVar5 == 0) goto LAB_143d2ba54;
        lVar10 = *plVar4;
        puVar15 = &local_48;
        iVar5 = (int)plVar4[1];
      }
      iVar16 = 1;
      uVar13 = uVar14;
      if (1 < iVar5) {
        puVar17 = (undefined8 *)(lVar10 + 8);
        do {
          lVar10 = puVar17[1];
          uVar13 = local_48;
          if (lVar10 == 0) break;
          puVar1 = puVar17 + 4;
          puVar17 = puVar17 + 4;
          iVar5 = OPENSSL_sk_num(*puVar1);
          uVar13 = uVar14;
          if (0 < iVar5) {
            do {
              lVar7 = OPENSSL_sk_value(*puVar17,uVar13);
              if (*(longlong *)(lVar7 + 8) == lVar10) {
                uVar8 = *puVar15;
                if (uVar8 == 0) {
                  uVar8 = policy_node_cmp_new();
                  *puVar15 = uVar8;
                  if (uVar8 != 0) goto LAB_143d2b9e8;
                }
                else {
LAB_143d2b9e8:
                  iVar5 = OPENSSL_sk_find(uVar8,lVar7);
                  if ((-1 < iVar5) || (iVar5 = OPENSSL_sk_push(*puVar15,lVar7), iVar5 != 0))
                  goto LAB_143d2ba06;
                }
                if (puVar15 == &local_48) {
                  OPENSSL_sk_free(local_48);
                }
                goto LAB_143d2ba54;
              }
LAB_143d2ba06:
              uVar12 = (int)uVar13 + 1;
              uVar13 = (ulonglong)uVar12;
              iVar5 = OPENSSL_sk_num(*puVar17);
            } while ((int)uVar12 < iVar5);
          }
          iVar16 = iVar16 + 1;
          uVar13 = local_48;
        } while (iVar16 < (int)plVar4[1]);
      }
      if (puVar15 == &local_48) {
        iVar5 = 2;
      }
      else {
        uVar13 = plVar4[3];
        iVar5 = 1;
      }
      iVar16 = OPENSSL_sk_num(param_4);
      if (0 < iVar16) {
        plVar2 = *(longlong **)((longlong)(int)plVar4[1] * 0x20 + -0x10 + *plVar4);
        iVar16 = OPENSSL_sk_num(param_4);
        uVar8 = uVar14;
        if (0 < iVar16) {
          do {
            uVar9 = OPENSSL_sk_value(param_4,uVar8);
            iVar16 = OBJ_obj2nid(uVar9);
            if (iVar16 == 0x2ea) {
              *(uint *)(plVar4 + 5) = *(uint *)(plVar4 + 5) | 2;
              goto LAB_143d2bb83;
            }
            uVar12 = (int)uVar8 + 1;
            iVar16 = OPENSSL_sk_num(param_4);
            uVar8 = (ulonglong)uVar12;
          } while ((int)uVar12 < iVar16);
        }
        iVar16 = OPENSSL_sk_num(param_4);
        if (0 < iVar16) {
          do {
            uVar9 = OPENSSL_sk_value(param_4,uVar14);
            lVar10 = tree_find_sk(uVar13,uVar9);
            if (lVar10 == 0) {
              if (plVar2 != (longlong *)0x0) {
                puVar11 = (undefined4 *)policy_data_new(0,uVar9,*(uint *)*plVar2 & 0x10);
                if (puVar11 != (undefined4 *)0x0) {
                  *(undefined8 *)(puVar11 + 4) = *(undefined8 *)(*plVar2 + 0x10);
                  *puVar11 = 0xc;
                  lVar10 = level_add_node(0,puVar11,plVar2[1],plVar4);
                  goto LAB_143d2bb43;
                }
                goto LAB_143d2bb89;
              }
            }
            else {
LAB_143d2bb43:
              lVar7 = plVar4[4];
              if (lVar7 == 0) {
                lVar7 = OPENSSL_sk_new_null();
                plVar4[4] = lVar7;
                if (lVar7 == 0) break;
              }
              iVar16 = OPENSSL_sk_push(lVar7,lVar10);
              if (iVar16 == 0) goto LAB_143d2bb89;
            }
            uVar12 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar12;
            iVar16 = OPENSSL_sk_num(param_4);
          } while ((int)uVar12 < iVar16);
        }
      }
LAB_143d2bb83:
      bVar3 = true;
LAB_143d2bb89:
      if (iVar5 == 2) {
        OPENSSL_sk_free(uVar13);
      }
      if (!bVar3) goto LAB_143d2ba54;
      *param_1 = plVar4;
      if ((uVar6 & 4) != 0) {
        uVar9 = X509_policy_tree_get0_user_policies(plVar4);
        iVar5 = OPENSSL_sk_num(uVar9);
        if (iVar5 < 1) {
          return 0xfffffffe;
        }
      }
    }
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 143d2bbe0 X509_policy_tree_free body=189 status=ok
// SIG undefined X509_policy_tree_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_policy_tree_free(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    OPENSSL_sk_free(param_1[3]);
    OPENSSL_sk_pop_free(param_1[4],exnode_free);
    puVar1 = (undefined8 *)*param_1;
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 1)) {
      do {
        X509_free(*puVar1);
        OPENSSL_sk_pop_free(puVar1[1],policy_node_free);
        policy_node_free(puVar1[2]);
        iVar2 = iVar2 + 1;
        puVar1 = puVar1 + 4;
      } while (iVar2 < *(int *)(param_1 + 1));
    }
    OPENSSL_sk_pop_free(param_1[2],policy_data_free);
    CRYPTO_free(*param_1,"crypto\\x509v3\\pcy_tree.c",0x271);
    CRYPTO_free(param_1,"crypto\\x509v3\\pcy_tree.c",0x272);
  }
  return;
}



// FUNCTION 143d2bca0 exnode_free body=53 status=ok
// SIG undefined exnode_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void exnode_free(undefined8 *param_1)

{
  if (((byte *)*param_1 != (byte *)0x0) && ((*(byte *)*param_1 & 8) != 0)) {
    CRYPTO_free(param_1,"crypto\\x509v3\\pcy_tree.c",0x25c);
    return;
  }
  return;
}



// FUNCTION 143d2bce0 tree_add_auth_node body=119 status=ok
// SIG undefined tree_add_auth_node(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool tree_add_auth_node(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    lVar2 = policy_node_cmp_new();
    *param_1 = lVar2;
    if (lVar2 == 0) {
      return false;
    }
  }
  iVar1 = OPENSSL_sk_find(lVar2,param_2);
  if (-1 < iVar1) {
    return true;
  }
  iVar1 = OPENSSL_sk_push(*param_1,param_2);
  return iVar1 != 0;
}



// FUNCTION 143d2bd60 tree_add_unmatched body=154 status=ok
// SIG undefined tree_add_unmatched(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
tree_add_unmatched(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  uint *puVar2;
  longlong lVar3;
  
  if (param_3 == 0) {
    param_3 = *(longlong *)((uint *)*param_4 + 2);
  }
  puVar2 = (uint *)policy_data_new(0,param_3,*(uint *)*param_4 & 0x10);
  if (puVar2 != (uint *)0x0) {
    uVar1 = *(undefined8 *)(*param_2 + 0x10);
    *puVar2 = *puVar2 | 4;
    *(undefined8 *)(puVar2 + 4) = uVar1;
    lVar3 = level_add_node(param_1,puVar2,param_4,param_5);
    if (lVar3 != 0) {
      return 1;
    }
    policy_data_free(puVar2);
  }
  return 0;
}



// FUNCTION 143d2be00 tree_evaluate body=632 status=ok
// SIG undefined tree_evaluate(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tree_evaluate(longlong *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  int local_res10;
  
  puVar11 = (undefined8 *)*param_1;
  local_res10 = 1;
  if (1 < (int)param_1[1]) {
    puVar12 = puVar11 + 1;
    do {
      puVar11 = puVar11 + 4;
      lVar4 = policy_cache_set(*puVar11);
      iVar13 = 0;
      iVar3 = OPENSSL_sk_num(*(undefined8 *)(lVar4 + 8));
      if (0 < iVar3) {
        do {
          lVar5 = OPENSSL_sk_value(*(undefined8 *)(lVar4 + 8),iVar13);
          bVar2 = false;
          iVar9 = 0;
          iVar3 = OPENSSL_sk_num(*puVar12);
          if (iVar3 < 1) {
LAB_143d2bed3:
            if ((puVar12[1] != 0) &&
               (lVar5 = level_add_node(puVar11,lVar5,puVar12[1],0), lVar5 == 0)) {
              return 0;
            }
          }
          else {
            do {
              uVar6 = OPENSSL_sk_value(*puVar12,iVar9);
              iVar3 = policy_node_match(puVar12 + -1,uVar6,*(undefined8 *)(lVar5 + 8));
              if (iVar3 != 0) {
                lVar7 = level_add_node(puVar11,lVar5,uVar6,0);
                if (lVar7 == 0) {
                  return 0;
                }
                bVar2 = true;
              }
              iVar9 = iVar9 + 1;
              iVar3 = OPENSSL_sk_num(*puVar12);
            } while (iVar9 < iVar3);
            if (!bVar2) goto LAB_143d2bed3;
          }
          iVar13 = iVar13 + 1;
          iVar3 = OPENSSL_sk_num(*(undefined8 *)(lVar4 + 8));
        } while (iVar13 < iVar3);
      }
      if (((*(uint *)(puVar12 + 6) & 0x200) == 0) &&
         (iVar3 = tree_link_any(puVar11,lVar4,param_1), iVar3 == 0)) {
        return 0;
      }
      puVar10 = puVar11;
      if ((*(uint *)(puVar12 + 6) & 0x400) != 0) {
        uVar6 = puVar12[4];
        iVar3 = OPENSSL_sk_num(uVar6);
        while (iVar3 = iVar3 + -1, -1 < iVar3) {
          puVar8 = (undefined8 *)OPENSSL_sk_value(uVar6,iVar3);
          if ((*(byte *)*puVar8 & 3) != 0) {
            *(int *)(puVar8[1] + 0x10) = *(int *)(puVar8[1] + 0x10) + -1;
            CRYPTO_free(puVar8,"crypto\\x509v3\\pcy_tree.c",0x193);
            OPENSSL_sk_delete(uVar6,iVar3);
          }
        }
      }
      do {
        uVar6 = puVar10[-3];
        puVar8 = puVar10 + -4;
        iVar3 = OPENSSL_sk_num(uVar6);
        while (iVar3 = iVar3 + -1, -1 < iVar3) {
          lVar4 = OPENSSL_sk_value(uVar6,iVar3);
          if (*(int *)(lVar4 + 0x10) == 0) {
            piVar1 = (int *)(*(longlong *)(lVar4 + 8) + 0x10);
            *piVar1 = *piVar1 + -1;
            CRYPTO_free(lVar4,"crypto\\x509v3\\pcy_tree.c",0x1a0);
            OPENSSL_sk_delete(uVar6,iVar3);
          }
        }
        lVar4 = puVar10[-2];
        if ((lVar4 != 0) && (*(int *)(lVar4 + 0x10) == 0)) {
          if (*(longlong *)(lVar4 + 8) != 0) {
            piVar1 = (int *)(*(longlong *)(lVar4 + 8) + 0x10);
            *piVar1 = *piVar1 + -1;
            lVar4 = puVar10[-2];
          }
          CRYPTO_free(lVar4,"crypto\\x509v3\\pcy_tree.c",0x1a7);
          lVar4 = 0;
          puVar10[-2] = 0;
        }
        puVar10 = puVar8;
      } while (puVar8 != (undefined8 *)*param_1);
      if (lVar4 == 0) {
        return 2;
      }
      local_res10 = local_res10 + 1;
      puVar12 = puVar12 + 4;
    } while (local_res10 < (int)param_1[1]);
  }
  return 1;
}



// FUNCTION 143d2c080 tree_init body=818 status=ok
// SIG undefined tree_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint tree_init(longlong *param_1,undefined8 param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  
  uVar14 = 1;
  iVar4 = OPENSSL_sk_num(param_2);
  *param_1 = 0;
  iVar6 = 0;
  if ((param_3 >> 8 & 1) == 0) {
    iVar6 = iVar4;
  }
  iVar18 = 0;
  if ((param_3 >> 9 & 1) == 0) {
    iVar18 = iVar4;
  }
  iVar13 = 0;
  if ((param_3 >> 10 & 1) == 0) {
    iVar13 = iVar4;
  }
  if (iVar4 == 1) {
    return 2;
  }
  iVar17 = iVar4 + -2;
  for (iVar19 = iVar17; uVar15 = uVar14, iVar3 = iVar17, -1 < iVar19; iVar19 = iVar19 + -1) {
    uVar7 = OPENSSL_sk_value(param_2,iVar19);
    X509_check_purpose(uVar7,0xffffffff);
    lVar8 = policy_cache_set(uVar7);
    if (lVar8 == 0) {
      return 0;
    }
  }
  while ((-1 < iVar3 && ((0 < iVar6 || ((uVar14 & 2) == 0))))) {
    uVar7 = OPENSSL_sk_value(param_2,iVar3);
    uVar5 = X509_get_extension_flags(uVar7);
    if ((uVar5 >> 0xb & 1) != 0) {
      return 0xffffffff;
    }
    lVar8 = policy_cache_set(uVar7);
    if (((uVar14 & 1) != 0) && (uVar14 = uVar15, *(longlong *)(lVar8 + 8) == 0)) {
      uVar15 = 2;
      uVar14 = 2;
    }
    if (0 < iVar6) {
      iVar19 = iVar6 + -1;
      if ((uVar5 & 0x20) != 0) {
        iVar19 = iVar6;
      }
      iVar2 = *(int *)(lVar8 + 0x14);
      iVar6 = iVar19;
      if ((-1 < iVar2) && (iVar2 < iVar19)) {
        iVar6 = iVar2;
      }
    }
    iVar3 = iVar3 + -1;
  }
  uVar15 = uVar14 | 4;
  if (iVar6 != 0) {
    uVar15 = uVar14;
  }
  if ((uVar15 & 1) != 0) {
    plVar9 = (longlong *)CRYPTO_zalloc(0x30,"crypto\\x509v3\\pcy_tree.c");
    if (plVar9 == (longlong *)0x0) {
      uVar20 = 0xa7;
    }
    else {
      lVar8 = CRYPTO_zalloc((longlong)iVar4 << 5,"crypto\\x509v3\\pcy_tree.c",0xb2);
      *plVar9 = lVar8;
      if (lVar8 != 0) {
        *(int *)(plVar9 + 1) = iVar4;
        uVar7 = OBJ_nid2obj(0x2ea);
        lVar10 = policy_data_new(0,uVar7,0);
        if (lVar10 != 0) {
          lVar11 = level_add_node(lVar8,lVar10,0,plVar9);
          if (lVar11 != 0) {
            if (-1 < iVar17) {
              puVar16 = (uint *)(lVar8 + 0x18);
              do {
                uVar7 = OPENSSL_sk_value(param_2,iVar17);
                uVar14 = X509_get_extension_flags(uVar7);
                plVar12 = (longlong *)policy_cache_set(uVar7);
                X509_up_ref(uVar7);
                puVar1 = puVar16 + 8;
                *(undefined8 *)(puVar16 + 2) = uVar7;
                if (*plVar12 == 0) {
                  *puVar1 = *puVar1 | 0x200;
                }
                uVar14 = uVar14 & 0x20;
                if (iVar18 == 0) {
                  if ((uVar14 == 0) || (iVar17 == 0)) {
                    *puVar1 = *puVar1 | 0x200;
                  }
                }
                else {
                  iVar6 = iVar18 + -1;
                  if (uVar14 != 0) {
                    iVar6 = iVar18;
                  }
                  iVar4 = (int)plVar12[2];
                  iVar18 = iVar6;
                  if ((-1 < iVar4) && (iVar4 < iVar6)) {
                    iVar18 = iVar4;
                  }
                }
                if (iVar13 == 0) {
                  *puVar1 = *puVar1 | 0x400;
                }
                else {
                  iVar6 = iVar13 + -1;
                  if (uVar14 != 0) {
                    iVar6 = iVar13;
                  }
                  iVar4 = (int)plVar12[3];
                  iVar13 = iVar6;
                  if ((-1 < iVar4) && (iVar4 < iVar6)) {
                    iVar13 = iVar4;
                  }
                }
                iVar17 = iVar17 + -1;
                puVar16 = puVar1;
              } while (-1 < iVar17);
            }
            *param_1 = (longlong)plVar9;
            return uVar15;
          }
          policy_data_free(lVar10);
        }
        X509_policy_tree_free(plVar9);
        return 0;
      }
      CRYPTO_free(plVar9,"crypto\\x509v3\\pcy_tree.c",0xb3);
      uVar20 = 0xb4;
    }
    ERR_put_error(0x22,0xac,0x41,"crypto\\x509v3\\pcy_tree.c",uVar20);
    return 0;
  }
  return uVar15;
}



// FUNCTION 143d2c3c0 tree_link_any body=394 status=ok
// SIG undefined tree_link_any(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tree_link_any(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint *puVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = 0;
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + -0x18));
  if (0 < iVar1) {
    do {
      puVar2 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + -0x18),iVar8);
      if (((*(uint *)(param_1 + -8) & 0x400) == 0) && ((*(byte *)*puVar2 & 1) != 0)) {
        uVar6 = *(undefined8 *)((byte *)*puVar2 + 0x18);
        iVar1 = OPENSSL_sk_num(uVar6);
        if (*(int *)(puVar2 + 2) != iVar1) {
          iVar7 = 0;
          iVar1 = OPENSSL_sk_num(uVar6);
          if (0 < iVar1) {
            do {
              uVar3 = OPENSSL_sk_value(uVar6,iVar7);
              lVar4 = level_find_node(param_1,puVar2,uVar3);
              if ((lVar4 == 0) &&
                 (iVar1 = tree_add_unmatched(param_1,param_2,uVar3,puVar2,param_3), iVar1 == 0))
              goto LAB_143d2c518;
              iVar7 = iVar7 + 1;
              iVar1 = OPENSSL_sk_num(uVar6);
            } while (iVar7 < iVar1);
          }
        }
      }
      else if (*(int *)(puVar2 + 2) == 0) {
        puVar5 = (uint *)policy_data_new(0,*(undefined8 *)((uint *)*puVar2 + 2),
                                         *(uint *)*puVar2 & 0x10);
        if (puVar5 == (uint *)0x0) goto LAB_143d2c518;
        uVar6 = *(undefined8 *)(*param_2 + 0x10);
        *puVar5 = *puVar5 | 4;
        *(undefined8 *)(puVar5 + 4) = uVar6;
        lVar4 = level_add_node(param_1,puVar5,puVar2,param_3);
        if (lVar4 == 0) {
          policy_data_free(puVar5);
          return 0;
        }
      }
      iVar8 = iVar8 + 1;
      iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + -0x18));
    } while (iVar8 < iVar1);
  }
  if ((*(longlong *)(param_1 + -0x10) == 0) ||
     (lVar4 = level_add_node(param_1,*param_2,*(longlong *)(param_1 + -0x10),0), lVar4 != 0)) {
    uVar6 = 1;
  }
  else {
LAB_143d2c518:
    uVar6 = 0;
  }
  return uVar6;
}



// FUNCTION 143d2c550 X509_NAME_ENTRY_create_by_OBJ body=371 status=ok
// SIG undefined X509_NAME_ENTRY_create_by_OBJ(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong *
X509_NAME_ENTRY_create_by_OBJ
          (longlong *param_1,longlong param_2,uint param_3,longlong param_4,uint param_5)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143d2c568;
  if (((param_1 == (longlong *)0x0) || (plVar3 = (longlong *)*param_1, plVar3 == (longlong *)0x0))
     && (plVar3 = (longlong *)X509_NAME_ENTRY_free(), plVar3 == (longlong *)0x0)) {
    return (longlong *)0x0;
  }
  if (param_2 == 0) {
    ERR_put_error(0xb,0x73,0x43,"crypto\\x509\\x509name.c",0x136,uVar6);
  }
  else {
    ASN1_OBJECT_free(*plVar3);
    lVar4 = OBJ_dup(param_2);
    *plVar3 = lVar4;
    if ((lVar4 != 0) && ((uVar5 = (ulonglong)param_5, param_4 != 0 || (param_5 == 0)))) {
      if (((int)param_3 < 1) || ((param_3 >> 0xc & 1) == 0)) {
        if ((int)param_5 < 0) {
          uVar5 = 0xffffffffffffffff;
          do {
            uVar5 = uVar5 + 1;
          } while (*(char *)(uVar5 + param_4) != '\0');
        }
        iVar2 = ASN1_STRING_set(plVar3[1],param_4,uVar5 & 0xffffffff);
        if (iVar2 != 0) {
          if (param_3 != 0xffffffff) {
            if (param_3 == 0xfffffffe) {
              uVar1 = ASN1_PRINTABLE_type(param_4,uVar5 & 0xffffffff);
              *(undefined4 *)(plVar3[1] + 4) = uVar1;
            }
            else {
              *(uint *)(plVar3[1] + 4) = param_3;
            }
          }
          goto LAB_143d2c664;
        }
      }
      else {
        uVar1 = OBJ_obj2nid(lVar4);
        lVar4 = ASN1_STRING_set_by_NID(plVar3 + 1,param_4,param_5,param_3,uVar1);
        if (lVar4 != 0) {
LAB_143d2c664:
          if (param_1 == (longlong *)0x0) {
            return plVar3;
          }
          if (*param_1 != 0) {
            return plVar3;
          }
          *param_1 = (longlong)plVar3;
          return plVar3;
        }
      }
    }
  }
  if ((param_1 == (longlong *)0x0) || (plVar3 != (longlong *)*param_1)) {
    X509_NAME_ENTRY_free(plVar3);
  }
  return (longlong *)0x0;
}



// FUNCTION 143d2c6d0 X509_NAME_ENTRY_get_data body=13 status=ok
// SIG undefined X509_NAME_ENTRY_get_data(void)

undefined8 X509_NAME_ENTRY_get_data(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 143d2c6e0 X509_NAME_add_entry body=330 status=ok
// SIG undefined X509_NAME_add_entry(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_NAME_add_entry(undefined8 *param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined8 uVar8;
  
  uVar8 = 0x143d2c6f4;
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  uVar1 = *param_1;
  iVar3 = OPENSSL_sk_num(uVar1);
  iVar5 = iVar3;
  if ((param_3 <= iVar3) && (iVar5 = param_3, param_3 < 0)) {
    iVar5 = iVar3;
  }
  iVar6 = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  bVar7 = param_4 == 0;
  if (param_4 == -1) {
    if (iVar5 == 0) {
      bVar7 = true;
      iVar6 = 0;
      goto LAB_143d2c78e;
    }
    iVar2 = iVar5 + -1;
  }
  else {
    iVar2 = iVar5;
    if (iVar3 <= iVar5) {
      if (iVar5 != 0) {
        lVar4 = OPENSSL_sk_value(uVar1,iVar5 + -1);
        iVar6 = *(int *)(lVar4 + 0x10) + 1;
      }
      goto LAB_143d2c78e;
    }
  }
  lVar4 = OPENSSL_sk_value(uVar1,iVar2);
  iVar6 = *(int *)(lVar4 + 0x10);
LAB_143d2c78e:
  lVar4 = X509_NAME_ENTRY_dup(param_2);
  if (lVar4 != 0) {
    *(int *)(lVar4 + 0x10) = iVar6;
    iVar3 = OPENSSL_sk_insert(uVar1,lVar4,iVar5);
    if (iVar3 != 0) {
      if (bVar7) {
        iVar3 = OPENSSL_sk_num(uVar1);
        while (iVar5 = iVar5 + 1, iVar5 < iVar3) {
          lVar4 = OPENSSL_sk_value(uVar1,iVar5);
          *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + 1;
        }
      }
      return 1;
    }
    ERR_put_error(0xb,0x71,0x41,"crypto\\x509\\x509name.c",0xe3,uVar8);
  }
  X509_NAME_ENTRY_free(lVar4);
  return 0;
}



// FUNCTION 143d2c830 X509_NAME_add_entry_by_txt body=223 status=ok
// SIG undefined X509_NAME_add_entry_by_txt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
X509_NAME_add_entry_by_txt
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143d2c850;
  lVar2 = OBJ_txt2obj(param_2,0);
  if (lVar2 == 0) {
    ERR_put_error(0xb,0x83,0x77,"crypto\\x509\\x509name.c",0xfc);
    ERR_add_error_data(2,"name=",param_2);
    uVar1 = 0;
  }
  else {
    lVar3 = X509_NAME_ENTRY_create_by_OBJ(0,lVar2,param_3,param_4,param_5,uVar4);
    ASN1_OBJECT_free(lVar2);
    if (lVar3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = X509_NAME_add_entry(param_1,lVar3,param_6,param_7);
      X509_NAME_ENTRY_free(lVar3);
    }
  }
  return uVar1;
}



// FUNCTION 143d2c910 X509_NAME_delete_entry body=221 status=ok
// SIG undefined X509_NAME_delete_entry(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong X509_NAME_delete_entry(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  if (((param_1 != (undefined8 *)0x0) && (iVar2 = OPENSSL_sk_num(*param_1), param_2 < iVar2)) &&
     (-1 < param_2)) {
    uVar1 = *param_1;
    lVar3 = OPENSSL_sk_delete(uVar1,param_2);
    iVar2 = OPENSSL_sk_num(uVar1);
    *(undefined4 *)(param_1 + 1) = 1;
    if (param_2 != iVar2) {
      if (param_2 == 0) {
        iVar5 = *(int *)(lVar3 + 0x10) + -1;
      }
      else {
        lVar4 = OPENSSL_sk_value(uVar1,param_2 + -1);
        iVar5 = *(int *)(lVar4 + 0x10);
      }
      lVar4 = OPENSSL_sk_value(uVar1,param_2);
      if (iVar5 + 1 < *(int *)(lVar4 + 0x10)) {
        for (; param_2 < iVar2; param_2 = param_2 + 1) {
          lVar4 = OPENSSL_sk_value(uVar1,param_2);
          *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
        }
      }
    }
    return lVar3;
  }
  return 0;
}



// FUNCTION 143d2c9f0 X509_NAME_entry_count body=37 status=ok
// SIG undefined X509_NAME_entry_count(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_NAME_entry_count(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  uVar1 = OPENSSL_sk_num(*param_1);
  return uVar1;
}



// FUNCTION 143d2ca20 X509_NAME_get_entry body=78 status=ok
// SIG undefined X509_NAME_get_entry(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_NAME_get_entry(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    iVar1 = OPENSSL_sk_num(*param_1);
    if ((param_2 < iVar1) && (-1 < param_2)) {
      uVar2 = OPENSSL_sk_value(*param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 143d2ca70 X509_NAME_get_index_by_NID body=77 status=ok
// SIG undefined X509_NAME_get_index_by_NID(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_NAME_get_index_by_NID(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = OBJ_nid2obj(param_2);
  if (lVar1 == 0) {
    return 0xfffffffe;
  }
  uVar2 = X509_NAME_get_index_by_OBJ(param_1,lVar1,param_3);
  return uVar2;
}



// FUNCTION 143d2cac0 X509_NAME_get_index_by_OBJ body=147 status=ok
// SIG undefined X509_NAME_get_index_by_OBJ(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int X509_NAME_get_index_by_OBJ(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  
  if (param_1 == (undefined8 *)0x0) {
LAB_143d2cb2f:
    iVar4 = -1;
  }
  else {
    uVar1 = *param_1;
    iVar2 = OPENSSL_sk_num(uVar1);
    iVar4 = -1;
    if (-1 < param_3) {
      iVar4 = param_3;
    }
    do {
      iVar4 = iVar4 + 1;
      if (iVar2 <= iVar4) goto LAB_143d2cb2f;
      puVar5 = (undefined8 *)OPENSSL_sk_value(uVar1,iVar4);
      iVar3 = OBJ_cmp(*puVar5,param_2);
    } while (iVar3 != 0);
  }
  return iVar4;
}



// FUNCTION 143d2cb60 X509_EXTENSION_get_critical body=20 status=ok
// SIG undefined X509_EXTENSION_get_critical(void)

undefined8 X509_EXTENSION_get_critical(longlong param_1)

{
  if ((param_1 != 0) && (0 < *(int *)(param_1 + 8))) {
    return 1;
  }
  return 0;
}



// FUNCTION 143d2cb80 X509_EXTENSION_get_data body=13 status=ok
// SIG undefined X509_EXTENSION_get_data(void)

longlong X509_EXTENSION_get_data(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return param_1 + 0x10;
}



// FUNCTION 143d2cb90 X509_EXTENSION_set_data body=55 status=ok
// SIG undefined X509_EXTENSION_set_data(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
X509_EXTENSION_set_data(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = ASN1_OCTET_STRING_set
                      (param_1 + 0x10,*(undefined8 *)(param_2 + 2),*param_2,param_4,0x143d2cb9a);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143d2cbd0 X509v3_get_ext body=75 status=ok
// SIG undefined X509v3_get_ext(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509v3_get_ext(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    iVar1 = OPENSSL_sk_num();
    if ((param_2 < iVar1) && (-1 < param_2)) {
      uVar2 = OPENSSL_sk_delete(param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 143d2cc20 X509v3_get_ext body=75 status=ok
// SIG undefined X509v3_get_ext(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509v3_get_ext(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    iVar1 = OPENSSL_sk_num();
    if ((param_2 < iVar1) && (-1 < param_2)) {
      uVar2 = OPENSSL_sk_value(param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 143d2cc70 X509v3_get_ext_by_NID body=187 status=ok
// SIG undefined X509v3_get_ext_by_NID(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int X509v3_get_ext_by_NID(longlong param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  
  lVar3 = OBJ_nid2obj(param_2);
  if (lVar3 == 0) {
    return -2;
  }
  if (param_1 != 0) {
    iVar5 = 0;
    if (-1 < param_3 + 1) {
      iVar5 = param_3 + 1;
    }
    iVar1 = OPENSSL_sk_num(param_1);
    while( true ) {
      if (iVar1 <= iVar5) {
        return -1;
      }
      puVar4 = (undefined8 *)OPENSSL_sk_value(param_1,iVar5);
      iVar2 = OBJ_cmp(*puVar4,lVar3);
      if (iVar2 == 0) break;
      iVar5 = iVar5 + 1;
    }
    return iVar5;
  }
  return -1;
}



// FUNCTION 143d2cd30 X509v3_get_ext_count body=34 status=ok
// SIG undefined X509v3_get_ext_count(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509v3_get_ext_count(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = OPENSSL_sk_num();
  return uVar1;
}



// FUNCTION 143d2cd60 trust_1oidany body=29 status=ok
// SIG undefined trust_1oidany(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void trust_1oidany(longlong param_1,undefined8 param_2,uint param_3)

{
  obj_trust(*(undefined4 *)(param_1 + 0x18),param_2,param_3 | 0x18);
  return;
}



// FUNCTION 143d2cd80 trust_1oid body=29 status=ok
// SIG undefined trust_1oid(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void trust_1oid(longlong param_1,undefined8 param_2,uint param_3)

{
  obj_trust(*(undefined4 *)(param_1 + 0x18),param_2,param_3 & 0xffffffe7);
  return;
}



// FUNCTION 143d2cda0 trust_compat body=77 status=ok
// SIG undefined trust_compat(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 trust_compat(undefined8 param_1,longlong param_2,uint param_3)

{
  undefined8 uVar1;
  
  X509_check_purpose(param_2,0xffffffff,0);
  if (((param_3 & 4) != 0) || (uVar1 = 1, (*(uint *)(param_2 + 0xd0) & 0x2000) == 0)) {
    uVar1 = 3;
  }
  return uVar1;
}



// FUNCTION 143d2cdf0 obj_trust body=288 status=ok
// SIG undefined obj_trust(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 obj_trust(int param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x138);
  if (plVar1 != (longlong *)0x0) {
    iVar5 = 0;
    if (plVar1[1] != 0) {
      iVar4 = 0;
      iVar2 = OPENSSL_sk_num();
      if (0 < iVar2) {
        do {
          uVar3 = OPENSSL_sk_value(plVar1[1],iVar4);
          iVar2 = OBJ_obj2nid(uVar3);
          if (iVar2 == param_1) {
            return 2;
          }
          if ((iVar2 == 0x38e) && ((param_3 & 0x10) != 0)) {
            return 2;
          }
          iVar4 = iVar4 + 1;
          iVar2 = OPENSSL_sk_num(plVar1[1]);
        } while (iVar4 < iVar2);
      }
    }
    if (*plVar1 != 0) {
      iVar2 = OPENSSL_sk_num();
      if (0 < iVar2) {
        do {
          uVar3 = OPENSSL_sk_value(*plVar1,iVar5);
          iVar2 = OBJ_obj2nid(uVar3);
          if ((iVar2 == param_1) || ((iVar2 == 0x38e && ((param_3 & 0x10) != 0)))) {
            return 1;
          }
          iVar5 = iVar5 + 1;
          iVar2 = OPENSSL_sk_num(*plVar1);
        } while (iVar5 < iVar2);
      }
      return 2;
    }
  }
  if ((((param_3 & 8) != 0) && (X509_check_purpose(param_2,0xffffffff), (param_3 & 4) == 0)) &&
     ((*(uint *)(param_2 + 0xd0) & 0x2000) != 0)) {
    return 1;
  }
  return 3;
}



// FUNCTION 143d2cf10 X509_check_trust body=280 status=ok
// SIG undefined X509_check_trust(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 X509_check_trust(longlong param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  int local_38 [2];
  undefined8 uStack_30;
  undefined8 uStack_10;
  
  uStack_10 = 0x143d2cf25;
  if (param_2 == 0) {
    uVar2 = obj_trust(0x38e,param_1,param_3 | 8);
    return uVar2;
  }
  uVar4 = param_2 - 1;
  if (7 < uVar4) {
    if (DAT_146bcb8d8 == 0) goto LAB_143d2d00a;
    local_38[0] = param_2;
    iVar1 = OPENSSL_sk_find(DAT_146bcb8d8,local_38);
    if (iVar1 < 0) goto LAB_143d2d00a;
    uVar4 = iVar1 + 8;
  }
  if (uVar4 != 0xffffffff) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Could not recover jumptable at 0x000143d2cfa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*_DAT_00000008)(0,param_1,param_3);
      return uVar2;
    }
    if ((int)uVar4 < 8) {
      switch(uVar4) {
      case 0:
        goto trust_compat;
      default:
        uVar2 = obj_trust(*(undefined4 *)((longlong)(int)uVar4 * 0x28 + 0x146837738),param_1,
                          param_3 | 0x18);
        return uVar2;
      case 5:
      case 6:
        uVar2 = obj_trust(*(undefined4 *)((longlong)(int)uVar4 * 0x28 + 0x146837738),param_1,
                          param_3 & 0xffffffe7);
        return uVar2;
      }
    }
    lVar3 = OPENSSL_sk_value(DAT_146bcb8d8,uVar4 - 8);
                    /* WARNING: Could not recover jumptable at 0x000143d2d006. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(lVar3 + 8))(lVar3,param_1,param_3);
    return uVar2;
  }
LAB_143d2d00a:
  uVar2 = (*(code *)PTR_obj_trust_146837710)(param_2,param_1,param_3);
  return uVar2;
trust_compat:
  uStack_10 = 0x143d2cdb0;
  uStack_30 = 0x143d2cdc7;
  X509_check_purpose(param_1,0xffffffff,0);
  if (((param_3 & 4) != 0) || (uVar2 = 1, (*(uint *)(param_1 + 0xd0) & 0x2000) == 0)) {
    uVar2 = 3;
  }
  return uVar2;
}



// FUNCTION 143d2d060 GENERAL_NAMES_free body=29 status=ok
// SIG undefined GENERAL_NAMES_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void GENERAL_NAMES_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_145d80e20);
  return;
}



// FUNCTION 143d2d090 GENERAL_NAMES_new body=29 status=ok
// SIG undefined GENERAL_NAMES_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void GENERAL_NAMES_new(void)

{
  ASN1_item_new(&DAT_145d80e20);
  return;
}



// FUNCTION 143d2d0b0 FUN_143d2d0b0 body=233 status=ok
// SIG undefined FUN_143d2d0b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_143d2d0b0(int *param_1,int *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  
  iVar3 = -1;
  if (((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) && (*param_1 == *param_2)) {
    switch(*param_1) {
    case 0:
      puVar1 = *(undefined8 **)(param_1 + 2);
      if (((puVar1 != (undefined8 *)0x0) &&
          (puVar2 = *(undefined8 **)(param_2 + 2), puVar2 != (undefined8 *)0x0)) &&
         (iVar3 = OBJ_cmp(*puVar1,*puVar2), iVar3 == 0)) {
        iVar3 = ASN1_TYPE_cmp(puVar1[1],puVar2[1]);
      }
      break;
    case 1:
    case 2:
    case 6:
      iVar3 = ASN1_STRING_cmp(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      break;
    case 3:
    case 5:
      iVar3 = ASN1_TYPE_cmp(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      break;
    case 4:
      iVar3 = X509_NAME_cmp(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      break;
    case 7:
      iVar3 = ASN1_OCTET_STRING_cmp(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      break;
    case 8:
      iVar3 = OBJ_cmp(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
    }
  }
  return iVar3;
}



// FUNCTION 143d2d1c0 GENERAL_NAME_free body=29 status=ok
// SIG undefined GENERAL_NAME_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void GENERAL_NAME_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_145d80dd0);
  return;
}



// FUNCTION 143d2d1e0 GENERAL_NAME_new body=29 status=ok
// SIG undefined GENERAL_NAME_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void GENERAL_NAME_new(void)

{
  ASN1_item_new(&DAT_145d80dd0);
  return;
}



// FUNCTION 143d2d200 FUN_143d2d200 body=29 status=ok
// SIG undefined FUN_143d2d200(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d2d200(void)

{
  ASN1_item_new(&DAT_145d80c10);
  return;
}



// FUNCTION 143d2d240 v2i_NAME_CONSTRAINTS body=464 status=ok
// SIG undefined v2i_NAME_CONSTRAINTS(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * v2i_NAME_CONSTRAINTS(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 local_38 [8];
  longlong local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x143d2d264;
  puVar4 = (undefined8 *)0x0;
  plVar2 = (longlong *)ASN1_item_new(&DAT_145d810b0);
  if (plVar2 == (longlong *)0x0) {
LAB_143d2d3b1:
    ERR_put_error(0x22,0x93,0x41,"crypto\\x509v3\\v3_ncons.c",0x92);
LAB_143d2d3d1:
    ASN1_item_free(plVar2,&DAT_145d810b0);
    ASN1_item_free(puVar4,&DAT_145d81040);
    plVar2 = (longlong *)0x0;
  }
  else {
    iVar5 = 0;
    iVar1 = OPENSSL_sk_num(param_3);
    if (0 < iVar1) {
      do {
        lVar3 = OPENSSL_sk_value(param_3,iVar5);
        iVar1 = strncmp(*(char **)(lVar3 + 8),"permitted",9);
        if ((iVar1 == 0) && (*(char *)(*(longlong *)(lVar3 + 8) + 9) != '\0')) {
          local_30 = *(longlong *)(lVar3 + 8) + 10;
          plVar6 = plVar2;
        }
        else {
          iVar1 = strncmp(*(char **)(lVar3 + 8),"excluded",8);
          if ((iVar1 != 0) || (*(char *)(*(longlong *)(lVar3 + 8) + 8) == '\0')) {
            ERR_put_error(0x22,0x93,0x8f,"crypto\\x509v3\\v3_ncons.c",0x7f);
            puVar4 = (undefined8 *)0x0;
            goto LAB_143d2d3d1;
          }
          plVar6 = plVar2 + 1;
          local_30 = *(longlong *)(lVar3 + 8) + 9;
        }
        local_28 = *(undefined8 *)(lVar3 + 0x10);
        puVar4 = (undefined8 *)ASN1_item_new(&DAT_145d81040);
        if (puVar4 == (undefined8 *)0x0) goto LAB_143d2d3b1;
        lVar3 = v2i_GENERAL_NAME_ex(*puVar4,param_1,param_2,local_38,1);
        if (lVar3 == 0) goto LAB_143d2d3d1;
        lVar3 = *plVar6;
        if (lVar3 == 0) {
          lVar3 = OPENSSL_sk_new_null();
          *plVar6 = lVar3;
          if (lVar3 == 0) goto LAB_143d2d3b1;
        }
        iVar1 = OPENSSL_sk_push(lVar3,puVar4);
        if (iVar1 == 0) goto LAB_143d2d3b1;
        iVar5 = iVar5 + 1;
        iVar1 = OPENSSL_sk_num(param_3);
      } while (iVar5 < iVar1);
    }
  }
  return plVar2;
}



// FUNCTION 143d2d410 i2r_NAME_CONSTRAINTS body=117 status=ok
// SIG undefined i2r_NAME_CONSTRAINTS(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
i2r_NAME_CONSTRAINTS(undefined8 param_1,undefined8 *param_2,undefined8 param_3,ulonglong param_4)

{
  do_i2r_name_constraints(param_1,*param_2,param_3,param_4,"Permitted",0x143d2d42a);
  do_i2r_name_constraints(param_1,param_2[1],param_3,param_4 & 0xffffffff,"Excluded");
  return 1;
}



// FUNCTION 143d2d490 NAME_CONSTRAINTS_check body=446 status=ok
// SIG undefined NAME_CONSTRAINTS_check(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 NAME_CONSTRAINTS_check(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined4 local_28 [2];
  longlong local_20;
  
  local_20 = 0x143d2d4b4;
  lVar5 = FBackChannelConnection::GetSocket();
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x100));
  iVar2 = X509_NAME_entry_count(lVar5);
  iVar8 = 0;
  iVar7 = 0;
  if (iVar2 < 0) {
    iVar2 = iVar7;
  }
  if (iVar1 < 0) {
    iVar1 = iVar7;
  }
  if (iVar2 <= 0x7fffffff - iVar1) {
    iVar3 = OPENSSL_sk_num(param_2[1]);
    iVar4 = OPENSSL_sk_num(*param_2);
    if (iVar4 < 0) {
      iVar4 = iVar7;
    }
    if (iVar3 < 0) {
      iVar3 = iVar7;
    }
    if ((iVar4 <= 0x7fffffff - iVar3) &&
       ((iVar1 + iVar2 < 1 || (iVar4 + iVar3 <= (int)(0x100000 / (longlong)(iVar1 + iVar2)))))) {
      iVar1 = X509_NAME_entry_count(lVar5);
      if (0 < iVar1) {
        local_28[0] = 4;
        local_20 = lVar5;
        uVar6 = nc_match(local_28,param_2);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        local_28[0] = 1;
        for (iVar1 = X509_NAME_get_index_by_NID(lVar5,0x30,0xffffffff); iVar1 != -1;
            iVar1 = X509_NAME_get_index_by_NID(lVar5,0x30,iVar1)) {
          uVar6 = X509_NAME_get_entry(lVar5,iVar1);
          local_20 = X509_NAME_ENTRY_get_data(uVar6);
          if (*(int *)(local_20 + 4) != 0x16) {
            return 0x35;
          }
          uVar6 = nc_match(local_28,param_2);
          if ((int)uVar6 != 0) {
            return uVar6;
          }
        }
      }
      iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x100));
      if (0 < iVar1) {
        do {
          uVar6 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x100),iVar8);
          uVar6 = nc_match(uVar6,param_2);
          if ((int)uVar6 != 0) {
            return uVar6;
          }
          iVar8 = iVar8 + 1;
          iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x100));
        } while (iVar8 < iVar1);
      }
      return 0;
    }
  }
  return 1;
}



// FUNCTION 143d2d650 NAME_CONSTRAINTS_check_CN body=503 status=ok
// SIG undefined NAME_CONSTRAINTS_check_CN(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int NAME_CONSTRAINTS_check_CN(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong local_res18;
  undefined4 local_48 [2];
  uint *local_40;
  uint local_38;
  undefined4 local_34;
  longlong local_30;
  undefined4 local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x143d2d66e;
  uVar6 = FBackChannelConnection::GetSocket();
  local_28 = 0;
  local_34 = 0x16;
  local_40 = &local_38;
  local_48[0] = 2;
  iVar4 = X509_NAME_get_index_by_NID(uVar6,0xd,0xffffffff);
  do {
    if (iVar4 == -1) {
      return 0;
    }
    uVar7 = X509_NAME_get_entry(uVar6,iVar4);
    uVar7 = X509_NAME_ENTRY_get_data(uVar7);
    bVar2 = false;
    uVar5 = ASN1_STRING_to_UTF8(&local_res18,uVar7);
    lVar3 = local_res18;
    uVar9 = (ulonglong)(int)uVar5;
    if ((int)uVar5 < 0) {
      return 0x11;
    }
    uVar10 = uVar9;
    if (0 < (int)uVar5) {
      do {
        uVar5 = (uint)uVar10;
        if (*(char *)(local_res18 + -1 + uVar9) != '\0') break;
        uVar5 = uVar5 - 1;
        uVar10 = (ulonglong)uVar5;
        uVar9 = uVar9 - 1;
      } while (0 < (longlong)uVar9);
    }
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (*(char *)(local_res18 + lVar8) != '\0');
    if ((int)uVar5 != lVar8) {
      CRYPTO_free(local_res18,"crypto\\x509v3\\v3_ncons.c",0x155);
      return 0x35;
    }
    iVar11 = 0;
    lVar8 = 0;
    if ((int)uVar5 < 1) {
LAB_143d2d7d6:
      CRYPTO_free(local_res18,"crypto\\x509v3\\v3_ncons.c",0x185);
    }
    else {
      do {
        cVar1 = *(char *)(lVar8 + local_res18);
        if ((0x19 < (byte)(cVar1 + 0x9fU)) &&
           ((0x2f < (byte)(cVar1 - 0x30U) ||
            ((0x87fffffe03ffU >> ((ulonglong)(byte)(cVar1 - 0x30U) & 0x3f) & 1) == 0)))) {
          if ((lVar8 < 1) || ((int)(uVar5 - 1) <= iVar11)) goto LAB_143d2d7d6;
          if (cVar1 != '-') {
            if ((((cVar1 != '.') || (cVar1 = *(char *)(lVar8 + 1 + local_res18), cVar1 == '.')) ||
                (*(char *)(lVar8 + -1 + local_res18) == '-')) || (cVar1 == '-')) goto LAB_143d2d7d6;
            bVar2 = true;
          }
        }
        iVar11 = iVar11 + 1;
        lVar8 = lVar8 + 1;
      } while (lVar8 < (int)uVar5);
      if (!bVar2) goto LAB_143d2d7d6;
      if (uVar5 != 0) {
        local_30 = local_res18;
        local_38 = uVar5;
        iVar11 = nc_match(local_48,param_2);
        CRYPTO_free(lVar3,"crypto\\x509v3\\v3_ncons.c",0x1af);
        if (iVar11 != 0) {
          return iVar11;
        }
      }
    }
    iVar4 = X509_NAME_get_index_by_NID(uVar6,0xd,iVar4);
  } while( true );
}



// FUNCTION 143d2d850 FUN_143d2d850 body=29 status=ok
// SIG undefined FUN_143d2d850(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d2d850(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_145d810b0);
  return;
}



// FUNCTION 143d2d870 do_i2r_name_constraints body=452 status=ok
// SIG undefined do_i2r_name_constraints(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
do_i2r_name_constraints
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  
  iVar2 = OPENSSL_sk_num(param_2);
  if (0 < iVar2) {
    BIO_printf(param_3,"%*s%s:\n",param_4,&DAT_143f3f584,param_5);
  }
  iVar5 = 0;
  iVar2 = OPENSSL_sk_num(param_2);
  if (0 < iVar2) {
    do {
      puVar3 = (undefined8 *)OPENSSL_sk_value(param_2,iVar5);
      BIO_printf(param_3,&DAT_145d811b8,param_4 + 2,&DAT_143f3f584);
      if (*(int *)*puVar3 == 7) {
        piVar1 = *(int **)((int *)*puVar3 + 2);
        puVar6 = *(undefined1 **)(piVar1 + 2);
        iVar2 = *piVar1;
        BIO_puts(param_3,&DAT_145d811bc);
        if (iVar2 == 8) {
          BIO_printf(param_3,"%d.%d.%d.%d/%d.%d.%d.%d",*puVar6,puVar6[1],puVar6[2],puVar6[3],
                     puVar6[4],puVar6[5],puVar6[6],puVar6[7]);
        }
        else if (iVar2 == 0x20) {
          iVar2 = 0;
          do {
            BIO_printf(param_3,&DAT_145d811d8,CONCAT11(*puVar6,puVar6[1]));
            puVar6 = puVar6 + 2;
            if (iVar2 == 7) {
              puVar4 = (undefined2 *)&DAT_145cc6654;
LAB_143d2d9cc:
              BIO_puts(param_3,puVar4);
            }
            else if (iVar2 != 0xf) {
              puVar4 = &DAT_145cc3708;
              goto LAB_143d2d9cc;
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < 0x10);
        }
        else {
          BIO_printf(param_3,"IP Address:<invalid>");
        }
      }
      else {
        FUN_143d784e0(param_3);
      }
      BIO_puts(param_3,&DAT_143fc48d8);
      iVar5 = iVar5 + 1;
      iVar2 = OPENSSL_sk_num(param_2);
    } while (iVar5 < iVar2);
  }
  return 1;
}



// FUNCTION 143d2da40 ia5casecmp body=84 status=ok
// SIG undefined ia5casecmp(void)

undefined8 ia5casecmp(longlong param_1,byte *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  byte bVar3;
  longlong lVar4;
  
  lVar4 = -1;
  param_1 = param_1 - (longlong)param_2;
  do {
    bVar1 = param_2[param_1];
    bVar3 = *param_2;
    if (bVar1 == bVar3) {
      if (bVar1 == 0) {
        return 0;
      }
    }
    else {
      if ((byte)(bVar1 + 0xbf) < 0x1a) {
        bVar1 = bVar1 + 0x20;
      }
      if ((byte)(bVar3 + 0xbf) < 0x1a) {
        bVar3 = bVar3 + 0x20;
      }
      if (bVar1 != bVar3) {
        uVar2 = 1;
        if (bVar1 < bVar3) {
          uVar2 = 0xffffffff;
        }
        return uVar2;
      }
    }
    param_2 = param_2 + 1;
    lVar4 = lVar4 + -1;
    if (lVar4 == 0) {
      return 0;
    }
  } while( true );
}



// FUNCTION 143d2daa0 ia5ncasecmp body=88 status=ok
// SIG undefined ia5ncasecmp(void)

undefined8 ia5ncasecmp(longlong param_1,byte *param_2,longlong param_3)

{
  byte bVar1;
  undefined8 uVar2;
  byte bVar3;
  
  if (param_3 != 0) {
    param_1 = param_1 - (longlong)param_2;
    do {
      bVar1 = param_2[param_1];
      bVar3 = *param_2;
      if (bVar1 == bVar3) {
        if (bVar1 == 0) {
          return 0;
        }
      }
      else {
        if ((byte)(bVar1 + 0xbf) < 0x1a) {
          bVar1 = bVar1 + 0x20;
        }
        if ((byte)(bVar3 + 0xbf) < 0x1a) {
          bVar3 = bVar3 + 0x20;
        }
        if (bVar1 != bVar3) {
          uVar2 = 1;
          if (bVar1 < bVar3) {
            uVar2 = 0xffffffff;
          }
          return uVar2;
        }
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return 0;
}



// FUNCTION 143d2db00 nc_match body=284 status=ok
// SIG undefined nc_match(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 nc_match(int *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar1 = OPENSSL_sk_num(*param_2);
  iVar5 = iVar6;
  iVar4 = iVar6;
  if (0 < iVar1) {
    do {
      puVar2 = (undefined8 *)OPENSSL_sk_value(*param_2,iVar5);
      if (*param_1 == *(int *)*puVar2) {
        if (puVar2[1] != 0) {
          return 0x31;
        }
        if (puVar2[2] != 0) {
          return 0x31;
        }
        if (iVar4 != 2) {
          if (iVar4 == 0) {
            iVar4 = 1;
          }
          uVar3 = nc_match_single(param_1);
          if ((int)uVar3 == 0) {
            iVar4 = 2;
          }
          else if ((int)uVar3 != 0x2f) {
            return uVar3;
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar1 = OPENSSL_sk_num(*param_2);
    } while (iVar5 < iVar1);
    if (iVar4 == 1) {
      return 0x2f;
    }
  }
  iVar5 = OPENSSL_sk_num(param_2[1]);
  if (0 < iVar5) {
    do {
      puVar2 = (undefined8 *)OPENSSL_sk_value(param_2[1],iVar6);
      if (*param_1 == *(int *)*puVar2) {
        if ((puVar2[1] != 0) || (puVar2[2] != 0)) {
          return 0x31;
        }
        uVar3 = nc_match_single(param_1);
        if ((int)uVar3 == 0) {
          return 0x30;
        }
        if ((int)uVar3 != 0x2f) {
          return uVar3;
        }
      }
      iVar6 = iVar6 + 1;
      iVar5 = OPENSSL_sk_num(param_2[1]);
    } while (iVar6 < iVar5);
  }
  return 0;
}



// FUNCTION 143d2dc20 nc_match_single body=1044 status=ok
// SIG undefined nc_match_single(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte nc_match_single(longlong param_1,int *param_2)

{
  int iVar1;
  byte *pbVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  ulonglong uVar9;
  char cVar10;
  longlong lVar11;
  char cVar12;
  byte *pbVar13;
  char *pcVar14;
  longlong lVar15;
  
  iVar5 = *param_2;
  if (iVar5 == 1) {
    piVar3 = *(int **)(param_2 + 2);
    piVar4 = *(int **)(param_1 + 8);
    pcVar6 = *(char **)(piVar3 + 2);
    pcVar7 = *(char **)(piVar4 + 2);
    pcVar8 = _guard_xfg_dispatch_icall_nop(pcVar6,0x40);
    pcVar14 = _guard_xfg_dispatch_icall_nop(pcVar7,0x40);
    if (pcVar14 == (char *)0x0) {
      return 0x35;
    }
    if (pcVar8 == (char *)0x0) {
      if (*pcVar6 == '.') {
        iVar5 = *piVar3;
        iVar1 = *piVar4;
        if (iVar1 <= iVar5) {
          return 0x2f;
        }
        iVar5 = ia5casecmp(pcVar6,pcVar7 + (iVar1 - iVar5));
        if (iVar5 == 0) {
          return 0;
        }
        return 0x2f;
      }
    }
    else {
      if ((pcVar8 != pcVar6) &&
         (((longlong)pcVar8 - (longlong)pcVar6 != (longlong)pcVar14 - (longlong)pcVar7 ||
          (iVar5 = strncmp(pcVar6,pcVar7,(longlong)pcVar14 - (longlong)pcVar7), iVar5 != 0)))) {
        return 0x2f;
      }
      pcVar6 = pcVar8 + 1;
    }
    pcVar14 = pcVar14 + 1;
    lVar11 = -1;
    lVar15 = (longlong)pcVar6 - (longlong)pcVar14;
    do {
      cVar10 = pcVar14[lVar15];
      cVar12 = *pcVar14;
      if (cVar10 == cVar12) {
        if (cVar10 == '\0') {
          return 0;
        }
      }
      else {
        if ((byte)(cVar10 + 0xbfU) < 0x1a) {
          cVar10 = cVar10 + ' ';
        }
        if ((byte)(cVar12 + 0xbfU) < 0x1a) {
          cVar12 = cVar12 + ' ';
        }
        if (cVar10 != cVar12) {
          return 0x2f;
        }
      }
      pcVar14 = pcVar14 + 1;
      lVar11 = lVar11 + -1;
      if (lVar11 == 0) {
        return 0;
      }
    } while( true );
  }
  if (iVar5 == 2) {
    pcVar6 = *(char **)(*(int **)(param_2 + 2) + 2);
    pcVar14 = *(char **)(*(int **)(param_1 + 8) + 2);
    cVar10 = *pcVar6;
    if (cVar10 == '\0') {
      return 0;
    }
    iVar5 = **(int **)(param_1 + 8);
    iVar1 = **(int **)(param_2 + 2);
    if (((iVar5 <= iVar1) || (pcVar14 = pcVar14 + (iVar5 - iVar1), cVar10 == '.')) ||
       (pcVar14[-1] == '.')) {
      lVar11 = -1;
      lVar15 = (longlong)pcVar6 - (longlong)pcVar14;
      do {
        cVar10 = pcVar14[lVar15];
        cVar12 = *pcVar14;
        if (cVar10 == cVar12) {
          if (cVar10 == '\0') {
            return 0;
          }
        }
        else {
          if ((byte)(cVar10 + 0xbfU) < 0x1a) {
            cVar10 = cVar10 + ' ';
          }
          if ((byte)(cVar12 + 0xbfU) < 0x1a) {
            cVar12 = cVar12 + ' ';
          }
          if (cVar10 != cVar12) {
            return 0x2f;
          }
        }
        pcVar14 = pcVar14 + 1;
        lVar11 = lVar11 + -1;
        if (lVar11 == 0) {
          return 0;
        }
      } while( true );
    }
  }
  else {
    if (iVar5 != 4) {
      if (iVar5 == 6) {
        piVar3 = *(int **)(param_2 + 2);
        pcVar14 = *(char **)(piVar3 + 2);
        pcVar6 = _guard_xfg_dispatch_icall_nop(*(char **)(*(longlong *)(param_1 + 8) + 8),0x3a);
        if (((pcVar6 != (char *)0x0) && (pcVar6[1] == '/')) && (pcVar6[2] == '/')) {
          pcVar6 = pcVar6 + 3;
          pcVar7 = _guard_xfg_dispatch_icall_nop(pcVar6,0x3a);
          if ((pcVar7 == (char *)0x0) &&
             (pcVar7 = _guard_xfg_dispatch_icall_nop(pcVar6,0x2f), pcVar7 == (char *)0x0)) {
            uVar9 = 0xffffffffffffffff;
            do {
              uVar9 = uVar9 + 1;
            } while (pcVar6[uVar9] != '\0');
          }
          else {
            uVar9 = (ulonglong)(uint)((int)pcVar7 - (int)pcVar6);
          }
          iVar5 = (int)uVar9;
          if (iVar5 != 0) {
            iVar1 = *piVar3;
            if (*pcVar14 != '.') {
              if (iVar1 != iVar5) {
                return 0x2f;
              }
              iVar5 = ia5ncasecmp(pcVar6,pcVar14,(longlong)iVar5);
              if (iVar5 == 0) {
                return 0;
              }
              return 0x2f;
            }
            if (iVar5 <= iVar1) {
              return 0x2f;
            }
            iVar5 = ia5ncasecmp(pcVar6 + ((longlong)iVar5 - (longlong)iVar1),pcVar14,(longlong)iVar1
                               );
            if (iVar5 == 0) {
              return 0;
            }
            return 0x2f;
          }
        }
      }
      else {
        if (iVar5 != 7) {
          return 0x33;
        }
        pbVar2 = *(byte **)(*(int **)(param_2 + 2) + 2);
        iVar5 = **(int **)(param_1 + 8);
        lVar11 = (longlong)iVar5;
        iVar1 = **(int **)(param_2 + 2);
        if (((iVar5 == 4) || (iVar5 == 0x10)) && ((iVar1 == 8 || (iVar1 == 0x20)))) {
          if (iVar5 * 2 != iVar1) {
            return 0x2f;
          }
          if (iVar5 < 1) {
            return 0;
          }
          pbVar13 = pbVar2;
          do {
            if ((pbVar13[*(longlong *)(*(int **)(param_1 + 8) + 2) - (longlong)pbVar2] &
                pbVar13[lVar11]) != (*pbVar13 & pbVar13[lVar11])) {
              return 0x2f;
            }
            pbVar13 = pbVar13 + 1;
          } while ((longlong)pbVar13 - (longlong)pbVar2 < lVar11);
          return 0;
        }
      }
      return 0x35;
    }
    lVar11 = *(longlong *)(param_1 + 8);
    lVar15 = *(longlong *)(param_2 + 2);
    if (((*(int *)(lVar11 + 8) != 0) && (iVar5 = i2d_X509_NAME(lVar11,0), iVar5 < 0)) ||
       ((*(int *)(lVar15 + 8) != 0 && (iVar5 = i2d_X509_NAME(lVar15,0), iVar5 < 0)))) {
      return 0x11;
    }
    if (*(int *)(lVar15 + 0x20) <= *(int *)(lVar11 + 0x20)) {
      iVar5 = _guard_xfg_dispatch_icall_nop
                        (*(void **)(lVar15 + 0x18),*(void **)(lVar11 + 0x18),
                         (longlong)*(int *)(lVar15 + 0x20));
      return -(iVar5 != 0) & 0x2f;
    }
  }
  return 0x2f;
}



// FUNCTION 143d2e040 X509V3_NAME_from_section body=264 status=ok
// SIG undefined X509V3_NAME_from_section(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509V3_NAME_from_section(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined8 uVar8;
  
  uVar8 = 0x143d2e060;
  if (param_1 == 0) {
LAB_143d2e12b:
    uVar8 = 0;
  }
  else {
    iVar5 = 0;
    iVar3 = OPENSSL_sk_num(param_2);
    if (0 < iVar3) {
      do {
        lVar4 = OPENSSL_sk_value(param_2,iVar5);
        pbVar7 = *(byte **)(lVar4 + 8);
        bVar2 = *pbVar7;
        pbVar6 = pbVar7;
        while (bVar2 != 0) {
          if ((bVar2 < 0x3b) && ((0x400500000000000U >> ((ulonglong)bVar2 & 0x3f) & 1) != 0)) {
            if (pbVar6[1] != 0) {
              pbVar7 = pbVar6 + 1;
            }
            break;
          }
          pbVar1 = pbVar6 + 1;
          pbVar6 = pbVar6 + 1;
          bVar2 = *pbVar1;
        }
        pbVar6 = pbVar7 + 1;
        if (*pbVar7 != 0x2b) {
          pbVar6 = pbVar7;
        }
        iVar3 = X509_NAME_add_entry_by_txt
                          (param_1,pbVar6,param_3,*(undefined8 *)(lVar4 + 0x10),0xffffffff,
                           0xffffffff,(*pbVar7 != 0x2b) - 1,uVar8);
        if (iVar3 == 0) goto LAB_143d2e12b;
        iVar5 = iVar5 + 1;
        iVar3 = OPENSSL_sk_num(param_2);
      } while (iVar5 < iVar3);
    }
    uVar8 = 1;
  }
  return uVar8;
}



// FUNCTION 143d2e150 X509V3_add_value body=335 status=ok
// SIG undefined X509V3_add_value(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509V3_add_value(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  uVar7 = 0x143d2e16e;
  lVar1 = *param_3;
  puVar5 = (undefined8 *)0x0;
  lVar3 = 0;
  lVar4 = 0;
  if ((((param_1 == 0) ||
       (lVar3 = CRYPTO_strdup(param_1,"crypto\\x509v3\\v3_utl.c",0x2c), lVar3 != 0)) &&
      ((param_2 == 0 || (lVar4 = CRYPTO_strdup(param_2,"crypto\\x509v3\\v3_utl.c",0x2e), lVar4 != 0)
       ))) && (puVar5 = (undefined8 *)CRYPTO_malloc(0x18,"crypto\\x509v3\\v3_utl.c"),
              puVar5 != (undefined8 *)0x0)) {
    if (lVar1 == 0) {
      lVar6 = OPENSSL_sk_new_null();
      *param_3 = lVar6;
      if (lVar6 == 0) goto LAB_143d2e215;
    }
    *puVar5 = 0;
    puVar5[1] = lVar3;
    puVar5[2] = lVar4;
    iVar2 = OPENSSL_sk_push(*param_3,puVar5);
    if (iVar2 != 0) {
      return 1;
    }
  }
LAB_143d2e215:
  ERR_put_error(0x22,0x69,0x41,"crypto\\x509v3\\v3_utl.c",0x3b,uVar7);
  if (lVar1 == 0) {
    OPENSSL_sk_free(*param_3);
    *param_3 = 0;
  }
  CRYPTO_free(puVar5,"crypto\\x509v3\\v3_utl.c",0x40);
  CRYPTO_free(lVar3,"crypto\\x509v3\\v3_utl.c",0x41);
  CRYPTO_free(lVar4,"crypto\\x509v3\\v3_utl.c",0x42);
  return 0;
}



// FUNCTION 143d2e2a0 X509V3_add_value_bool body=40 status=ok
// SIG undefined X509V3_add_value_bool(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509V3_add_value_bool(undefined8 param_1,int param_2)

{
  char *pcVar1;
  
  pcVar1 = "TRUE";
  if (param_2 == 0) {
    pcVar1 = "FALSE";
  }
  X509V3_add_value(param_1,pcVar1);
  return;
}



// FUNCTION 143d2e2d0 X509V3_add_value_int body=202 status=ok
// SIG undefined X509V3_add_value_int(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 X509V3_add_value_int(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143d2e2e0;
  if (param_2 == 0) {
    return 1;
  }
  lVar3 = 0;
  lVar2 = ASN1_INTEGER_to_BN(param_2,0);
  if (lVar2 != 0) {
    lVar3 = bignum_to_string(lVar2);
    if (lVar3 != 0) goto LAB_143d2e34d;
  }
  ERR_put_error(0x22,0x78,0x41,"crypto\\x509v3\\v3_utl.c",0xa4,uVar4);
LAB_143d2e34d:
  BN_free(lVar2);
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = X509V3_add_value(param_1,lVar3,param_3);
    CRYPTO_free(lVar3,"crypto\\x509v3\\v3_utl.c",0xe9);
  }
  return uVar1;
}



// FUNCTION 143d2e3a0 FUN_143d2e3a0 body=22 status=ok
// SIG undefined FUN_143d2e3a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d2e3a0(void)

{
  X509V3_add_value();
  return;
}



// FUNCTION 143d2e3c0 X509V3_conf_free body=112 status=ok
// SIG undefined X509V3_conf_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509V3_conf_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    CRYPTO_free(param_1[1],"crypto\\x509v3\\v3_utl.c",0x52);
    CRYPTO_free(param_1[2],"crypto\\x509v3\\v3_utl.c",0x53);
    CRYPTO_free(*param_1,"crypto\\x509v3\\v3_utl.c",0x54);
    CRYPTO_free(param_1,"crypto\\x509v3\\v3_utl.c",0x55);
  }
  return;
}



// FUNCTION 143d2e430 X509V3_get_value_bool body=612 status=ok
// SIG undefined X509V3_get_value_bool(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int X509V3_get_value_bool(undefined8 *param_1,undefined4 *param_2)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143d2e43c;
  pcVar1 = (char *)param_1[2];
  if (pcVar1 == (char *)0x0) {
LAB_143d2e633:
    ERR_put_error(0x22,0x6e,0x68,"crypto\\x509v3\\v3_utl.c",0x107);
    ERR_add_error_data(6,"section:",*param_1,",name:",param_1[1],",value:",param_1[2],uVar4);
    return 0;
  }
  lVar2 = 0;
  while (lVar3 = lVar2, pcVar1[lVar3] == (&DAT_145d81210)[lVar3]) {
    lVar2 = lVar3 + 1;
    if (lVar3 + 1 == 5) {
      *param_2 = 0xff;
      return (int)lVar3 + -3;
    }
  }
  lVar2 = 0;
  while (lVar3 = lVar2, pcVar1[lVar3] == (&DAT_145cc0dc0)[lVar3]) {
    lVar2 = lVar3 + 1;
    if (lVar3 + 1 == 5) {
      *param_2 = 0xff;
      return (int)lVar3 + -3;
    }
  }
  if (((*pcVar1 != 'Y') || (pcVar1[1] != '\0')) && ((*pcVar1 != 'y' || (pcVar1[1] != '\0')))) {
    lVar2 = 0;
    while (lVar3 = lVar2, pcVar1[lVar3] == (&DAT_145d81228)[lVar3]) {
      lVar2 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        *param_2 = 0xff;
        return (int)lVar3 + -2;
      }
    }
    lVar2 = 0;
    do {
      lVar3 = lVar2 + 1;
      if (pcVar1[lVar2] != (&DAT_145cc5550)[lVar2]) {
        lVar2 = 0;
        while (lVar3 = lVar2, pcVar1[lVar3] == "FALSE"[lVar3]) {
          lVar2 = lVar3 + 1;
          if (lVar3 + 1 == 6) {
            *param_2 = 0;
            return (int)lVar3 + -4;
          }
        }
        lVar2 = 0;
        while (lVar3 = lVar2, pcVar1[lVar3] == "false"[lVar3]) {
          lVar2 = lVar3 + 1;
          if (lVar3 + 1 == 6) {
            *param_2 = 0;
            return (int)lVar3 + -4;
          }
        }
        if (((((*pcVar1 == 'N') && (pcVar1[1] == '\0')) || ((*pcVar1 == 'n' && (pcVar1[1] == '\0')))
             ) || (((*pcVar1 == 'N' && (pcVar1[1] == 'O')) && (pcVar1[2] == '\0')))) ||
           (((*pcVar1 == 'n' && (pcVar1[1] == 'o')) && (pcVar1[2] == '\0')))) {
          *param_2 = 0;
          return 1;
        }
        goto LAB_143d2e633;
      }
      lVar2 = lVar3;
    } while (lVar3 != 4);
  }
  *param_2 = 0xff;
  return 1;
}



// FUNCTION 143d2e6a0 X509V3_get_value_int body=398 status=ok
// SIG undefined X509V3_get_value_int(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509V3_get_value_int(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  char *pcVar7;
  undefined4 uVar8;
  bool bVar9;
  longlong local_res8;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar10;
  undefined8 uVar11;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar11 = 0x143d2e6be;
  pcVar2 = (char *)param_1[2];
  local_res8 = 0;
  if (pcVar2 == (char *)0x0) {
    uVar3 = 0xb0;
    uVar8 = 0x6d;
  }
  else {
    local_res8 = BN_new();
    if (local_res8 == 0) {
      uVar3 = 0xb5;
      uVar8 = 0x41;
    }
    else {
      cVar1 = *pcVar2;
      bVar9 = cVar1 == '-';
      cVar6 = cVar1;
      if (bVar9) {
        cVar6 = pcVar2[1];
      }
      pcVar7 = pcVar2 + 1;
      if (cVar1 != '-') {
        pcVar7 = pcVar2;
      }
      if ((cVar6 == '0') && ((pcVar7[1] + 0xa8U & 0xdf) == 0)) {
        pcVar7 = pcVar7 + 2;
        iVar4 = BN_hex2bn(&local_res8,pcVar7);
      }
      else {
        iVar4 = BN_dec2bn(&local_res8,pcVar7);
      }
      if ((iVar4 == 0) || (pcVar7[iVar4] != '\0')) {
        BN_free(local_res8);
        uVar3 = 0xcb;
        uVar8 = 100;
      }
      else {
        if ((bVar9) && (iVar4 = BN_is_zero(local_res8), iVar4 != 0)) {
          bVar9 = false;
        }
        lVar5 = BN_to_ASN1_INTEGER(local_res8,0);
        BN_free(local_res8);
        if (lVar5 != 0) {
          if (bVar9) {
            *(uint *)(lVar5 + 4) = *(uint *)(lVar5 + 4) | 0x100;
          }
          *param_2 = lVar5;
          return 1;
        }
        uVar3 = 0xd6;
        uVar8 = 0x65;
      }
    }
  }
  ERR_put_error(0x22,0x6c,uVar8,"crypto\\x509v3\\v3_utl.c",CONCAT44(uVar10,uVar3));
  ERR_add_error_data(6,"section:",*param_1,",name:",param_1[1],",value:",param_1[2],uVar11);
  return 0;
}



// FUNCTION 143d2e830 X509V3_parse_list body=490 status=ok
// SIG undefined X509V3_parse_list(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509V3_parse_list(undefined8 param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  undefined4 uVar11;
  bool bVar12;
  undefined8 local_res10;
  undefined8 uVar13;
  
  uVar13 = 0x143d2e848;
  local_res10 = 0;
  pcVar3 = (char *)CRYPTO_strdup(param_1,"crypto\\x509v3\\v3_utl.c",0x127);
  if (pcVar3 == (char *)0x0) {
    uVar7 = 0x129;
    uVar11 = 0x41;
  }
  else {
    lVar5 = 0;
    iVar9 = 1;
    cVar2 = *pcVar3;
    pcVar8 = pcVar3;
    pcVar10 = pcVar3;
    while (((cVar2 != '\0' && (cVar2 != '\r')) && (cVar2 != '\n'))) {
      if (iVar9 == 1) {
        if (cVar2 == ':') {
          *pcVar8 = '\0';
          iVar9 = 2;
          lVar5 = strip_spaces(pcVar10);
          if (lVar5 == 0) {
            uVar7 = 0x13a;
            goto LAB_143d2e993;
          }
          pcVar10 = pcVar8 + 1;
        }
        else if (cVar2 == ',') {
          *pcVar8 = '\0';
          lVar5 = strip_spaces(pcVar10);
          pcVar10 = pcVar8 + 1;
          if (lVar5 == 0) {
            uVar7 = 0x144;
            goto LAB_143d2e993;
          }
          X509V3_add_value(lVar5,0,&local_res10);
        }
      }
      else if ((iVar9 == 2) && (cVar2 == ',')) {
        *pcVar8 = '\0';
        lVar4 = strip_spaces(pcVar10);
        if (lVar4 == 0) {
          uVar7 = 0x152;
          uVar11 = 0x6d;
          goto LAB_143d2e999;
        }
        X509V3_add_value(lVar5,lVar4,&local_res10);
        lVar5 = 0;
        pcVar10 = pcVar8 + 1;
        iVar9 = 1;
      }
      pcVar1 = pcVar8 + 1;
      pcVar8 = pcVar8 + 1;
      cVar2 = *pcVar1;
    }
    lVar4 = strip_spaces(pcVar10);
    if (iVar9 == 2) {
      bVar12 = lVar4 != 0;
      lVar6 = lVar4;
      lVar4 = lVar5;
      if (bVar12) {
LAB_143d2e9dd:
        X509V3_add_value(lVar4,lVar6,&local_res10);
        CRYPTO_free(pcVar3,"crypto\\x509v3\\v3_utl.c",0x16d);
        return local_res10;
      }
      uVar7 = 0x161;
      uVar11 = 0x6d;
    }
    else {
      if (lVar4 != 0) {
        lVar6 = 0;
        goto LAB_143d2e9dd;
      }
      uVar7 = 0x168;
LAB_143d2e993:
      uVar11 = 0x6c;
    }
  }
LAB_143d2e999:
  ERR_put_error(0x22,0x6d,uVar11,"crypto\\x509v3\\v3_utl.c",uVar7,uVar13);
  CRYPTO_free(pcVar3,"crypto\\x509v3\\v3_utl.c",0x171);
  OPENSSL_sk_pop_free(local_res10,X509V3_conf_free);
  return 0;
}



// FUNCTION 143d2ea20 X509_check_email body=194 status=ok
// SIG undefined X509_check_email(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_check_email(undefined8 param_1,char *param_2,ulonglong param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  undefined8 uVar4;
  char *pcVar5;
  size_t _MaxCount;
  
  if (param_2 == (char *)0x0) {
LAB_143d2eac8:
    uVar4 = 0xfffffffe;
  }
  else {
    if (param_3 == 0) {
      cVar1 = *param_2;
      pcVar5 = param_2;
      for (uVar2 = 0; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
        pcVar5 = pcVar5 + 1;
        cVar1 = *pcVar5;
      }
      param_3 = (ulonglong)(uVar2 & 0x7fffffff);
    }
    else {
      _MaxCount = param_3 - 1;
      if (param_3 < 2) {
        _MaxCount = param_3;
      }
      pvVar3 = _guard_xfg_dispatch_icall_nop(param_2,0,_MaxCount);
      if (pvVar3 != (void *)0x0) goto LAB_143d2eac8;
    }
    if ((1 < param_3) && (param_2[param_3 - 1] == '\0')) {
      param_3 = param_3 - 1;
    }
    uVar4 = do_x509_check(param_1,param_2,param_3,param_4,1,0);
  }
  return uVar4;
}



// FUNCTION 143d2eaf0 X509_check_host body=195 status=ok
// SIG undefined X509_check_host(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
X509_check_host(undefined8 param_1,char *param_2,ulonglong param_3,undefined4 param_4,
               undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  undefined8 uVar4;
  char *pcVar5;
  size_t _MaxCount;
  
  if (param_2 == (char *)0x0) {
LAB_143d2eb99:
    uVar4 = 0xfffffffe;
  }
  else {
    if (param_3 == 0) {
      cVar1 = *param_2;
      pcVar5 = param_2;
      for (uVar2 = 0; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
        pcVar5 = pcVar5 + 1;
        cVar1 = *pcVar5;
      }
      param_3 = (ulonglong)(uVar2 & 0x7fffffff);
    }
    else {
      _MaxCount = param_3 - 1;
      if (param_3 < 2) {
        _MaxCount = param_3;
      }
      pvVar3 = _guard_xfg_dispatch_icall_nop(param_2,0,_MaxCount);
      if (pvVar3 != (void *)0x0) goto LAB_143d2eb99;
    }
    if ((1 < param_3) && (param_2[param_3 - 1] == '\0')) {
      param_3 = param_3 - 1;
    }
    uVar4 = do_x509_check(param_1,param_2,param_3,param_4,2,param_5);
  }
  return uVar4;
}



// FUNCTION 143d2ebc0 X509_check_ip body=53 status=ok
// SIG undefined X509_check_ip(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_check_ip(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    return 0xfffffffe;
  }
  uVar1 = do_x509_check();
  return uVar1;
}



// FUNCTION 143d2ec00 a2i_IPADDRESS body=125 status=ok
// SIG undefined a2i_IPADDRESS(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong a2i_IPADDRESS(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143d2ec10;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  iVar1 = a2i_ipadd(local_28,param_1);
  if ((iVar1 != 0) && (lVar2 = ASN1_OCTET_STRING_new(), lVar2 != 0)) {
    iVar1 = ASN1_OCTET_STRING_set(lVar2,local_28,iVar1);
    if (iVar1 != 0) {
      return lVar2;
    }
    ASN1_BIT_STRING_free(lVar2);
  }
  return 0;
}



// FUNCTION 143d2ec80 a2i_IPADDRESS_NC body=284 status=ok
// SIG undefined a2i_IPADDRESS_NC(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong a2i_IPADDRESS_NC(char *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143d2ec9a;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  lVar5 = 0;
  pcVar3 = _guard_xfg_dispatch_icall_nop(param_1,0x2f);
  if ((pcVar3 != (char *)0x0) &&
     (lVar4 = CRYPTO_strdup(param_1,"crypto\\x509v3\\v3_utl.c",0x3e3), lVar4 != 0)) {
    pcVar3[lVar4 - (longlong)param_1] = '\0';
    iVar1 = a2i_ipadd(local_38,lVar4);
    if (iVar1 != 0) {
      iVar2 = a2i_ipadd(local_38 + iVar1,pcVar3 + (lVar4 - (longlong)param_1) + 1);
      CRYPTO_free(lVar4,"crypto\\x509v3\\v3_utl.c",0x3f0);
      lVar6 = 0;
      lVar4 = lVar5;
      if ((((iVar2 != 0) && (lVar4 = lVar6, iVar1 == iVar2)) &&
          (lVar5 = ASN1_OCTET_STRING_new(), lVar5 != 0)) &&
         (iVar1 = ASN1_OCTET_STRING_set(lVar5,local_38,iVar2 + iVar1), iVar1 != 0)) {
        return lVar5;
      }
    }
    CRYPTO_free(lVar4,"crypto\\x509v3\\v3_utl.c",0x3ff);
    ASN1_BIT_STRING_free(lVar5);
  }
  return 0;
}



// FUNCTION 143d2eda0 a2i_ipadd body=390 status=ok
// SIG undefined a2i_ipadd(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 a2i_ipadd(undefined8 *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  size_t _Size;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  int local_28;
  int local_24;
  int local_20;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = 0x143d2edb5;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  pcVar3 = _guard_xfg_dispatch_icall_nop(param_2,0x3a);
  if (pcVar3 == (char *)0x0) {
    iVar2 = ipv4_from_asc(param_1,param_2);
    if (iVar2 == 0) {
      return 0;
    }
    return 4;
  }
  local_24 = -1;
  local_28 = 0;
  local_20 = 0;
  local_48 = &local_38;
  iVar1 = CONF_parse_list(param_2,0x3a,0,ipv6_cb);
  iVar2 = local_28;
  if (iVar1 == 0) {
    return 0;
  }
  _Size = (size_t)local_24;
  if (local_24 == -1) {
    if (local_28 != 0x10) {
      return 0;
    }
  }
  else {
    if (local_28 == 0x10) {
      return 0;
    }
    if (3 < local_20) {
      return 0;
    }
    if (local_20 == 3) {
      if (0 < local_28) {
        return 0;
      }
    }
    else if (local_20 == 2) {
      if ((local_24 != 0) && (local_24 != local_28)) {
        return 0;
      }
    }
    else {
      if (local_24 == 0) {
        return 0;
      }
      if (local_24 == local_28) {
        return 0;
      }
    }
    if (-1 < local_24) {
      _guard_xfg_dispatch_icall_nop(param_1,&local_38,_Size);
      _guard_xfg_dispatch_icall_nop((void *)(_Size + (longlong)param_1),0,(longlong)(0x10 - iVar2));
      if (local_28 == local_24) {
        return 0x10;
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(((longlong)local_24 - (longlong)local_28) + 0x10 + (longlong)param_1),
                 (void *)((longlong)&local_38 + (longlong)local_24),(longlong)(local_28 - local_24))
      ;
      return 0x10;
    }
  }
  *param_1 = local_38;
  param_1[1] = uStack_30;
  return 0x10;
}



// FUNCTION 143d2ef30 bignum_to_string body=313 status=ok
// SIG undefined bignum_to_string(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong bignum_to_string(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  char *pcVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  uVar8 = 0x143d2ef3c;
  iVar2 = BN_num_bits();
  if (iVar2 < 0x80) {
    lVar4 = BN_bn2dec();
    return lVar4;
  }
  pcVar5 = (char *)BN_bn2hex(param_1);
  if (pcVar5 != (char *)0x0) {
    cVar1 = *pcVar5;
    pcVar6 = pcVar5;
    for (uVar3 = 0; (cVar1 != '\0' && (uVar3 < 0x80000000)); uVar3 = uVar3 + 1) {
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar6;
    }
    iVar2 = (uVar3 & 0x7fffffff) + 3;
    lVar4 = CRYPTO_malloc(iVar2,"crypto\\x509v3\\v3_utl.c",0x7a);
    if (lVar4 != 0) {
      pcVar6 = pcVar5 + 1;
      if (*pcVar5 != '-') {
        pcVar6 = pcVar5;
      }
      puVar7 = &DAT_145d81220;
      if (*pcVar5 != '-') {
        puVar7 = &DAT_145d76da4;
      }
      OPENSSL_strlcpy(lVar4,puVar7,iVar2);
      OPENSSL_strlcat(lVar4,pcVar6,iVar2);
      CRYPTO_free(pcVar5,"crypto\\x509v3\\v3_utl.c",0x89);
      return lVar4;
    }
    ERR_put_error(0x22,0xa7,0x41,"crypto\\x509v3\\v3_utl.c",0x7c,uVar8);
    CRYPTO_free(pcVar5,"crypto\\x509v3\\v3_utl.c",0x7d);
    return 0;
  }
  return 0;
}



// FUNCTION 143d2f070 do_check_string body=352 status=ok
// SIG undefined do_check_string(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int do_check_string(int *param_1,int param_2,code *param_3,undefined4 param_4,void *param_5,
                   size_t param_6,undefined8 *param_7)

{
  void *_Buf1;
  int iVar1;
  int iVar2;
  undefined8 local_res8;
  undefined8 uVar3;
  
  uVar3 = 0x143d2f088;
  _Buf1 = *(void **)(param_1 + 2);
  if (_Buf1 != (void *)0x0) {
    iVar1 = *param_1;
    if (iVar1 != 0) {
      if (param_2 < 1) {
        iVar1 = ASN1_STRING_to_UTF8(&local_res8,param_1);
        if (-1 < iVar1) {
          iVar2 = (*param_3)(local_res8,(longlong)iVar1,param_5,param_6,param_4,uVar3);
          if ((0 < iVar2) && (param_7 != (undefined8 *)0x0)) {
            uVar3 = CRYPTO_strndup(local_res8,(longlong)iVar1,"crypto\\x509v3\\v3_utl.c",0x32c);
            *param_7 = uVar3;
          }
          CRYPTO_free(local_res8,"crypto\\x509v3\\v3_utl.c",0x32d);
          return iVar2;
        }
        return -1;
      }
      if (param_2 == param_1[1]) {
        if (param_2 == 0x16) {
          iVar1 = (*param_3)(_Buf1,(longlong)iVar1,param_5,param_6,param_4,0x143d2f088);
          if (iVar1 < 1) {
            return iVar1;
          }
        }
        else {
          if (iVar1 != (int)param_6) {
            return 0;
          }
          iVar1 = _guard_xfg_dispatch_icall_nop(_Buf1,param_5,param_6);
          if (iVar1 != 0) {
            return 0;
          }
          iVar1 = 1;
        }
        if (param_7 == (undefined8 *)0x0) {
          return iVar1;
        }
        uVar3 = CRYPTO_strndup(*(undefined8 *)(param_1 + 2),(longlong)*param_1,
                               "crypto\\x509v3\\v3_utl.c",0x31e);
        *param_7 = uVar3;
        return iVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 143d2f1d0 do_x509_check body=708 status=ok
// SIG undefined do_x509_check(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int do_x509_check(undefined8 param_1,char *param_2,ulonglong param_3,uint param_4,int param_5,
                 undefined8 *param_6)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  longlong lVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char *pcVar12;
  int iVar13;
  undefined4 uVar14;
  int local_res20;
  char *in_stack_ffffffffffffff88;
  undefined8 local_58 [2];
  undefined8 uStack_48;
  
  uStack_48 = 0x143d2f1f0;
  bVar2 = false;
  local_res20 = 0;
  param_4 = param_4 & 0xffff7fff;
  iVar5 = 0;
  if (param_5 == 1) {
    uVar14 = 0x16;
    local_res20 = 0x30;
    pcVar7 = equal_email;
  }
  else if (param_5 == 2) {
    local_res20 = 0xd;
    if ((1 < param_3) && (*param_2 == '.')) {
      param_4 = param_4 | 0x8000;
    }
    pcVar7 = equal_nocase;
    uVar14 = 0x16;
    if ((param_4 & 2) == 0) {
      pcVar7 = equal_wildcard;
    }
  }
  else {
    uVar14 = 4;
    pcVar7 = equal_case;
  }
  if (param_3 == 0) {
    cVar1 = *param_2;
    pcVar12 = param_2;
    for (uVar3 = 0; (cVar1 != '\0' && (uVar3 < 0x80000000)); uVar3 = uVar3 + 1) {
      pcVar12 = pcVar12 + 1;
      cVar1 = *pcVar12;
    }
    param_3 = (ulonglong)(uVar3 & 0x7fffffff);
  }
  lVar8 = X509_get_ext_d2i(param_1,0x55,0);
  if (lVar8 != 0) {
    iVar13 = 0;
    iVar4 = OPENSSL_sk_num(lVar8);
    iVar6 = 0;
    if (0 < iVar4) {
      do {
        iVar5 = iVar6;
        piVar9 = (int *)OPENSSL_sk_value(lVar8,iVar13);
        if (*piVar9 == param_5) {
          bVar2 = true;
          in_stack_ffffffffffffff88 = param_2;
          iVar5 = do_check_string(*(undefined8 *)(piVar9 + 2),uVar14,pcVar7,param_4,param_2,param_3,
                                  param_6);
          if (iVar5 != 0) break;
        }
        iVar13 = iVar13 + 1;
        iVar4 = OPENSSL_sk_num(lVar8);
        iVar6 = iVar5;
      } while (iVar13 < iVar4);
    }
    GENERAL_NAMES_free(lVar8);
    if (iVar5 != 0) {
      return iVar5;
    }
    if ((bVar2) && ((param_4 & 1) == 0)) {
      return 0;
    }
  }
  if ((local_res20 != 0) && ((param_4 & 0x20) == 0)) {
    uVar10 = FBackChannelConnection::GetSocket(param_1);
    for (iVar5 = X509_NAME_get_index_by_NID(uVar10,local_res20,0xffffffff); -1 < iVar5;
        iVar5 = X509_NAME_get_index_by_NID(uVar10,local_res20,iVar5)) {
      uVar11 = X509_NAME_get_entry(uVar10,iVar5);
      piVar9 = (int *)X509_NAME_ENTRY_get_data(uVar11);
      uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
      if ((*(longlong *)(piVar9 + 2) != 0) && (*piVar9 != 0)) {
        iVar6 = ASN1_STRING_to_UTF8(local_58,piVar9);
        if (iVar6 < 0) {
          return -1;
        }
        in_stack_ffffffffffffff88 = (char *)CONCAT44(uVar14,param_4);
        iVar4 = (*pcVar7)(local_58[0],(longlong)iVar6,param_2,param_3,in_stack_ffffffffffffff88);
        if ((0 < iVar4) && (param_6 != (undefined8 *)0x0)) {
          uVar11 = CRYPTO_strndup(local_58[0],(longlong)iVar6,"crypto\\x509v3\\v3_utl.c",0x32c);
          *param_6 = uVar11;
        }
        CRYPTO_free(local_58[0],"crypto\\x509v3\\v3_utl.c",0x32d);
        if (iVar4 != 0) {
          return iVar4;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143d2f4a0 equal_case body=125 status=ok
// SIG undefined equal_case(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool equal_case(char *param_1,ulonglong param_2,void *param_3,ulonglong param_4,uint param_5)

{
  ulonglong uVar1;
  char *pcVar2;
  int iVar3;
  
  uVar1 = param_2;
  pcVar2 = param_1;
  if ((param_5 >> 0xf & 1) != 0) {
    for (; ((param_4 < uVar1 && (*pcVar2 != '\0')) && (((param_5 & 0x10) == 0 || (*pcVar2 != '.'))))
        ; pcVar2 = pcVar2 + 1) {
      uVar1 = uVar1 - 1;
    }
    if (uVar1 == param_4) {
      param_1 = pcVar2;
      param_2 = uVar1;
    }
  }
  if (param_2 != param_4) {
    return false;
  }
  iVar3 = _guard_xfg_dispatch_icall_nop(param_1,param_3,param_2);
  return iVar3 == 0;
}


