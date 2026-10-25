// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141d030b0 SetParameters body=266 status=ok
// SIG undefined SetParameters(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TFilterVS<16>::SetParameters(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_98[0] = 0;
  local_98[1] = 0;
  local_98[2] = 0;
  local_98[3] = 0x3f800000;
  uVar3 = 0;
  local_98[4] = 0;
  local_98[5] = 0;
  local_98[6] = 0;
  local_98[7] = 0x3f800000;
  puVar4 = (undefined4 *)(param_3 + 8);
  local_98[8] = 0;
  local_98[9] = 0;
  local_98[10] = 0;
  local_98[0xb] = 0x3f800000;
  local_98[0xc] = 0;
  local_98[0xd] = 0;
  local_98[0xe] = 0;
  local_98[0xf] = 0x3f800000;
  local_98[0x10] = 0;
  local_98[0x11] = 0;
  local_98[0x12] = 0;
  local_98[0x13] = 0x3f800000;
  local_98[0x14] = 0;
  local_98[0x15] = 0;
  local_98[0x16] = 0;
  local_98[0x17] = 0x3f800000;
  local_98[0x18] = 0;
  local_98[0x19] = 0;
  local_98[0x1a] = 0;
  local_98[0x1b] = 0x3f800000;
  local_98[0x1c] = 0;
  local_98[0x1d] = 0;
  local_98[0x1e] = 0;
  local_98[0x1f] = 0x3f800000;
  do {
    local_98[uVar3 * 2] = puVar4[-2];
    local_98[uVar3 * 2 + 1] = puVar4[-1];
    if ((int)uVar3 + 1U < 0x10) {
      local_98[uVar3 * 2 + 2] = *puVar4;
      local_98[uVar3 * 2 + 3] = puVar4[1];
    }
    uVar2 = (int)uVar3 + 2;
    uVar3 = (ulonglong)uVar2;
    puVar4 = puVar4 + 4;
  } while (uVar2 < 0x10);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1,0);
  }
  local_a0 = 0;
  local_a8 = 8;
  SetShaderValueArray<FRHIVertexShader_*,FVector4,FRHICommandListImmediate>
            (param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0xc0,local_98);
  return;
}



// FUNCTION 141d031c0 SetParameters body=266 status=ok
// SIG undefined SetParameters(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TFilterVS<17>::SetParameters(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8 [36];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0x3f800000;
  uVar3 = 0;
  local_a8[4] = 0;
  local_a8[5] = 0;
  local_a8[6] = 0;
  local_a8[7] = 0x3f800000;
  puVar4 = (undefined4 *)(param_3 + 8);
  local_a8[8] = 0;
  local_a8[9] = 0;
  local_a8[10] = 0;
  local_a8[0xb] = 0x3f800000;
  local_a8[0xc] = 0;
  local_a8[0xd] = 0;
  local_a8[0xe] = 0;
  local_a8[0xf] = 0x3f800000;
  local_a8[0x10] = 0;
  local_a8[0x11] = 0;
  local_a8[0x12] = 0;
  local_a8[0x13] = 0x3f800000;
  local_a8[0x14] = 0;
  local_a8[0x15] = 0;
  local_a8[0x16] = 0;
  local_a8[0x17] = 0x3f800000;
  local_a8[0x18] = 0;
  local_a8[0x19] = 0;
  local_a8[0x1a] = 0;
  local_a8[0x1b] = 0x3f800000;
  local_a8[0x1c] = 0;
  local_a8[0x1d] = 0;
  local_a8[0x1e] = 0;
  local_a8[0x1f] = 0x3f800000;
  local_a8[0x20] = 0;
  local_a8[0x21] = 0;
  local_a8[0x22] = 0;
  local_a8[0x23] = 0x3f800000;
  do {
    local_a8[uVar3 * 2] = puVar4[-2];
    local_a8[uVar3 * 2 + 1] = puVar4[-1];
    if ((int)uVar3 + 1U < 0x11) {
      local_a8[uVar3 * 2 + 2] = *puVar4;
      local_a8[uVar3 * 2 + 3] = puVar4[1];
    }
    uVar2 = (int)uVar3 + 2;
    uVar3 = (ulonglong)uVar2;
    puVar4 = puVar4 + 4;
  } while (uVar2 < 0x11);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1,0);
  }
  local_b0 = 0;
  local_b8 = 9;
  SetShaderValueArray<FRHIVertexShader_*,FVector4,FRHICommandListImmediate>
            (param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0xc0,local_a8);
  return;
}



// FUNCTION 141d032d0 SetParameters body=266 status=ok
// SIG undefined SetParameters(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TFilterVS<18>::SetParameters(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8 [36];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0x3f800000;
  uVar3 = 0;
  local_a8[4] = 0;
  local_a8[5] = 0;
  local_a8[6] = 0;
  local_a8[7] = 0x3f800000;
  puVar4 = (undefined4 *)(param_3 + 8);
  local_a8[8] = 0;
  local_a8[9] = 0;
  local_a8[10] = 0;
  local_a8[0xb] = 0x3f800000;
  local_a8[0xc] = 0;
  local_a8[0xd] = 0;
  local_a8[0xe] = 0;
  local_a8[0xf] = 0x3f800000;
  local_a8[0x10] = 0;
  local_a8[0x11] = 0;
  local_a8[0x12] = 0;
  local_a8[0x13] = 0x3f800000;
  local_a8[0x14] = 0;
  local_a8[0x15] = 0;
  local_a8[0x16] = 0;
  local_a8[0x17] = 0x3f800000;
  local_a8[0x18] = 0;
  local_a8[0x19] = 0;
  local_a8[0x1a] = 0;
  local_a8[0x1b] = 0x3f800000;
  local_a8[0x1c] = 0;
  local_a8[0x1d] = 0;
  local_a8[0x1e] = 0;
  local_a8[0x1f] = 0x3f800000;
  local_a8[0x20] = 0;
  local_a8[0x21] = 0;
  local_a8[0x22] = 0;
  local_a8[0x23] = 0x3f800000;
  do {
    local_a8[uVar3 * 2] = puVar4[-2];
    local_a8[uVar3 * 2 + 1] = puVar4[-1];
    if ((int)uVar3 + 1U < 0x12) {
      local_a8[uVar3 * 2 + 2] = *puVar4;
      local_a8[uVar3 * 2 + 3] = puVar4[1];
    }
    uVar2 = (int)uVar3 + 2;
    uVar3 = (ulonglong)uVar2;
    puVar4 = puVar4 + 4;
  } while (uVar2 < 0x12);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1,0);
  }
  local_b0 = 0;
  local_b8 = 9;
  SetShaderValueArray<FRHIVertexShader_*,FVector4,FRHICommandListImmediate>
            (param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0xc0,local_a8);
  return;
}



// FUNCTION 141d033e0 SetParameters body=266 status=ok
// SIG undefined SetParameters(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TFilterVS<19>::SetParameters(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8 [40];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_b8[2] = 0;
  local_b8[3] = 0x3f800000;
  uVar3 = 0;
  local_b8[4] = 0;
  local_b8[5] = 0;
  local_b8[6] = 0;
  local_b8[7] = 0x3f800000;
  puVar4 = (undefined4 *)(param_3 + 8);
  local_b8[8] = 0;
  local_b8[9] = 0;
  local_b8[10] = 0;
  local_b8[0xb] = 0x3f800000;
  local_b8[0xc] = 0;
  local_b8[0xd] = 0;
  local_b8[0xe] = 0;
  local_b8[0xf] = 0x3f800000;
  local_b8[0x10] = 0;
  local_b8[0x11] = 0;
  local_b8[0x12] = 0;
  local_b8[0x13] = 0x3f800000;
  local_b8[0x14] = 0;
  local_b8[0x15] = 0;
  local_b8[0x16] = 0;
  local_b8[0x17] = 0x3f800000;
  local_b8[0x18] = 0;
  local_b8[0x19] = 0;
  local_b8[0x1a] = 0;
  local_b8[0x1b] = 0x3f800000;
  local_b8[0x1c] = 0;
  local_b8[0x1d] = 0;
  local_b8[0x1e] = 0;
  local_b8[0x1f] = 0x3f800000;
  local_b8[0x20] = 0;
  local_b8[0x21] = 0;
  local_b8[0x22] = 0;
  local_b8[0x23] = 0x3f800000;
  local_b8[0x24] = 0;
  local_b8[0x25] = 0;
  local_b8[0x26] = 0;
  local_b8[0x27] = 0x3f800000;
  do {
    local_b8[uVar3 * 2] = puVar4[-2];
    local_b8[uVar3 * 2 + 1] = puVar4[-1];
    if ((int)uVar3 + 1U < 0x13) {
      local_b8[uVar3 * 2 + 2] = *puVar4;
      local_b8[uVar3 * 2 + 3] = puVar4[1];
    }
    uVar2 = (int)uVar3 + 2;
    uVar3 = (ulonglong)uVar2;
    puVar4 = puVar4 + 4;
  } while (uVar2 < 0x13);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1,0);
  }
  local_c0 = 0;
  local_c8 = 10;
  SetShaderValueArray<FRHIVertexShader_*,FVector4,FRHICommandListImmediate>
            (param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0xc0,local_b8);
  return;
}



// FUNCTION 141d034f0 SetParameters body=266 status=ok
// SIG undefined SetParameters(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TFilterVS<20>::SetParameters(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8 [40];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_b8[2] = 0;
  local_b8[3] = 0x3f800000;
  uVar3 = 0;
  local_b8[4] = 0;
  local_b8[5] = 0;
  local_b8[6] = 0;
  local_b8[7] = 0x3f800000;
  puVar4 = (undefined4 *)(param_3 + 8);
  local_b8[8] = 0;
  local_b8[9] = 0;
  local_b8[10] = 0;
  local_b8[0xb] = 0x3f800000;
  local_b8[0xc] = 0;
  local_b8[0xd] = 0;
  local_b8[0xe] = 0;
  local_b8[0xf] = 0x3f800000;
  local_b8[0x10] = 0;
  local_b8[0x11] = 0;
  local_b8[0x12] = 0;
  local_b8[0x13] = 0x3f800000;
  local_b8[0x14] = 0;
  local_b8[0x15] = 0;
  local_b8[0x16] = 0;
  local_b8[0x17] = 0x3f800000;
  local_b8[0x18] = 0;
  local_b8[0x19] = 0;
  local_b8[0x1a] = 0;
  local_b8[0x1b] = 0x3f800000;
  local_b8[0x1c] = 0;
  local_b8[0x1d] = 0;
  local_b8[0x1e] = 0;
  local_b8[0x1f] = 0x3f800000;
  local_b8[0x20] = 0;
  local_b8[0x21] = 0;
  local_b8[0x22] = 0;
  local_b8[0x23] = 0x3f800000;
  local_b8[0x24] = 0;
  local_b8[0x25] = 0;
  local_b8[0x26] = 0;
  local_b8[0x27] = 0x3f800000;
  do {
    local_b8[uVar3 * 2] = puVar4[-2];
    local_b8[uVar3 * 2 + 1] = puVar4[-1];
    if ((int)uVar3 + 1U < 0x14) {
      local_b8[uVar3 * 2 + 2] = *puVar4;
      local_b8[uVar3 * 2 + 3] = puVar4[1];
    }
    uVar2 = (int)uVar3 + 2;
    uVar3 = (ulonglong)uVar2;
    puVar4 = puVar4 + 4;
  } while (uVar2 < 0x14);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1,0);
  }
  local_c0 = 0;
  local_c8 = 10;
  SetShaderValueArray<FRHIVertexShader_*,FVector4,FRHICommandListImmediate>
            (param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0xc0,local_b8);
  return;
}



// FUNCTION 141d03600 SetParameters body=282 status=ok
// SIG undefined SetParameters(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TFilterVS<21>::SetParameters(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8 [44];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_c8[2] = 0;
  local_c8[3] = 0x3f800000;
  uVar3 = 0;
  local_c8[4] = 0;
  local_c8[5] = 0;
  local_c8[6] = 0;
  local_c8[7] = 0x3f800000;
  puVar4 = (undefined4 *)(param_3 + 8);
  local_c8[8] = 0;
  local_c8[9] = 0;
  local_c8[10] = 0;
  local_c8[0xb] = 0x3f800000;
  local_c8[0xc] = 0;
  local_c8[0xd] = 0;
  local_c8[0xe] = 0;
  local_c8[0xf] = 0x3f800000;
  local_c8[0x10] = 0;
  local_c8[0x11] = 0;
  local_c8[0x12] = 0;
  local_c8[0x13] = 0x3f800000;
  local_c8[0x14] = 0;
  local_c8[0x15] = 0;
  local_c8[0x16] = 0;
  local_c8[0x17] = 0x3f800000;
  local_c8[0x18] = 0;
  local_c8[0x19] = 0;
  local_c8[0x1a] = 0;
  local_c8[0x1b] = 0x3f800000;
  local_c8[0x1c] = 0;
  local_c8[0x1d] = 0;
  local_c8[0x1e] = 0;
  local_c8[0x1f] = 0x3f800000;
  local_c8[0x20] = 0;
  local_c8[0x21] = 0;
  local_c8[0x22] = 0;
  local_c8[0x23] = 0x3f800000;
  local_c8[0x24] = 0;
  local_c8[0x25] = 0;
  local_c8[0x26] = 0;
  local_c8[0x27] = 0x3f800000;
  local_c8[0x28] = 0;
  local_c8[0x29] = 0;
  local_c8[0x2a] = 0;
  local_c8[0x2b] = 0x3f800000;
  do {
    local_c8[uVar3 * 2] = puVar4[-2];
    local_c8[uVar3 * 2 + 1] = puVar4[-1];
    if ((int)uVar3 + 1U < 0x15) {
      local_c8[uVar3 * 2 + 2] = *puVar4;
      local_c8[uVar3 * 2 + 3] = puVar4[1];
    }
    uVar2 = (int)uVar3 + 2;
    uVar3 = (ulonglong)uVar2;
    puVar4 = puVar4 + 4;
  } while (uVar2 < 0x15);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1,0);
  }
  local_d0 = 0;
  local_d8 = 0xb;
  SetShaderValueArray<FRHIVertexShader_*,FVector4,FRHICommandListImmediate>
            (param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0xc0,local_c8);
  return;
}



// FUNCTION 141d03720 SetParameters body=282 status=ok
// SIG undefined SetParameters(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TFilterVS<22>::SetParameters(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8 [44];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_c8[2] = 0;
  local_c8[3] = 0x3f800000;
  uVar3 = 0;
  local_c8[4] = 0;
  local_c8[5] = 0;
  local_c8[6] = 0;
  local_c8[7] = 0x3f800000;
  puVar4 = (undefined4 *)(param_3 + 8);
  local_c8[8] = 0;
  local_c8[9] = 0;
  local_c8[10] = 0;
  local_c8[0xb] = 0x3f800000;
  local_c8[0xc] = 0;
  local_c8[0xd] = 0;
  local_c8[0xe] = 0;
  local_c8[0xf] = 0x3f800000;
  local_c8[0x10] = 0;
  local_c8[0x11] = 0;
  local_c8[0x12] = 0;
  local_c8[0x13] = 0x3f800000;
  local_c8[0x14] = 0;
  local_c8[0x15] = 0;
  local_c8[0x16] = 0;
  local_c8[0x17] = 0x3f800000;
  local_c8[0x18] = 0;
  local_c8[0x19] = 0;
  local_c8[0x1a] = 0;
  local_c8[0x1b] = 0x3f800000;
  local_c8[0x1c] = 0;
  local_c8[0x1d] = 0;
  local_c8[0x1e] = 0;
  local_c8[0x1f] = 0x3f800000;
  local_c8[0x20] = 0;
  local_c8[0x21] = 0;
  local_c8[0x22] = 0;
  local_c8[0x23] = 0x3f800000;
  local_c8[0x24] = 0;
  local_c8[0x25] = 0;
  local_c8[0x26] = 0;
  local_c8[0x27] = 0x3f800000;
  local_c8[0x28] = 0;
  local_c8[0x29] = 0;
  local_c8[0x2a] = 0;
  local_c8[0x2b] = 0x3f800000;
  do {
    local_c8[uVar3 * 2] = puVar4[-2];
    local_c8[uVar3 * 2 + 1] = puVar4[-1];
    if ((int)uVar3 + 1U < 0x16) {
      local_c8[uVar3 * 2 + 2] = *puVar4;
      local_c8[uVar3 * 2 + 3] = puVar4[1];
    }
    uVar2 = (int)uVar3 + 2;
    uVar3 = (ulonglong)uVar2;
    puVar4 = puVar4 + 4;
  } while (uVar2 < 0x16);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1,0);
  }
  local_d0 = 0;
  local_d8 = 0xb;
  SetShaderValueArray<FRHIVertexShader_*,FVector4,FRHICommandListImmediate>
            (param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0xc0,local_c8);
  return;
}



// FUNCTION 141d03840 SetParameters body=282 status=ok
// SIG undefined SetParameters(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TFilterVS<23>::SetParameters(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8 [48];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_d8[2] = 0;
  local_d8[3] = 0x3f800000;
  uVar3 = 0;
  local_d8[4] = 0;
  local_d8[5] = 0;
  local_d8[6] = 0;
  local_d8[7] = 0x3f800000;
  puVar4 = (undefined4 *)(param_3 + 8);
  local_d8[8] = 0;
  local_d8[9] = 0;
  local_d8[10] = 0;
  local_d8[0xb] = 0x3f800000;
  local_d8[0xc] = 0;
  local_d8[0xd] = 0;
  local_d8[0xe] = 0;
  local_d8[0xf] = 0x3f800000;
  local_d8[0x10] = 0;
  local_d8[0x11] = 0;
  local_d8[0x12] = 0;
  local_d8[0x13] = 0x3f800000;
  local_d8[0x14] = 0;
  local_d8[0x15] = 0;
  local_d8[0x16] = 0;
  local_d8[0x17] = 0x3f800000;
  local_d8[0x18] = 0;
  local_d8[0x19] = 0;
  local_d8[0x1a] = 0;
  local_d8[0x1b] = 0x3f800000;
  local_d8[0x1c] = 0;
  local_d8[0x1d] = 0;
  local_d8[0x1e] = 0;
  local_d8[0x1f] = 0x3f800000;
  local_d8[0x20] = 0;
  local_d8[0x21] = 0;
  local_d8[0x22] = 0;
  local_d8[0x23] = 0x3f800000;
  local_d8[0x24] = 0;
  local_d8[0x25] = 0;
  local_d8[0x26] = 0;
  local_d8[0x27] = 0x3f800000;
  local_d8[0x28] = 0;
  local_d8[0x29] = 0;
  local_d8[0x2a] = 0;
  local_d8[0x2b] = 0x3f800000;
  local_d8[0x2c] = 0;
  local_d8[0x2d] = 0;
  local_d8[0x2e] = 0;
  local_d8[0x2f] = 0x3f800000;
  do {
    local_d8[uVar3 * 2] = puVar4[-2];
    local_d8[uVar3 * 2 + 1] = puVar4[-1];
    if ((int)uVar3 + 1U < 0x17) {
      local_d8[uVar3 * 2 + 2] = *puVar4;
      local_d8[uVar3 * 2 + 3] = puVar4[1];
    }
    uVar2 = (int)uVar3 + 2;
    uVar3 = (ulonglong)uVar2;
    puVar4 = puVar4 + 4;
  } while (uVar2 < 0x17);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1,0);
  }
  local_e0 = 0;
  local_e8 = 0xc;
  SetShaderValueArray<FRHIVertexShader_*,FVector4,FRHICommandListImmediate>
            (param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0xc0,local_d8);
  return;
}



// FUNCTION 141d03960 SetParameters body=282 status=ok
// SIG undefined SetParameters(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TFilterVS<24>::SetParameters(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8 [48];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_d8[2] = 0;
  local_d8[3] = 0x3f800000;
  uVar3 = 0;
  local_d8[4] = 0;
  local_d8[5] = 0;
  local_d8[6] = 0;
  local_d8[7] = 0x3f800000;
  puVar4 = (undefined4 *)(param_3 + 8);
  local_d8[8] = 0;
  local_d8[9] = 0;
  local_d8[10] = 0;
  local_d8[0xb] = 0x3f800000;
  local_d8[0xc] = 0;
  local_d8[0xd] = 0;
  local_d8[0xe] = 0;
  local_d8[0xf] = 0x3f800000;
  local_d8[0x10] = 0;
  local_d8[0x11] = 0;
  local_d8[0x12] = 0;
  local_d8[0x13] = 0x3f800000;
  local_d8[0x14] = 0;
  local_d8[0x15] = 0;
  local_d8[0x16] = 0;
  local_d8[0x17] = 0x3f800000;
  local_d8[0x18] = 0;
  local_d8[0x19] = 0;
  local_d8[0x1a] = 0;
  local_d8[0x1b] = 0x3f800000;
  local_d8[0x1c] = 0;
  local_d8[0x1d] = 0;
  local_d8[0x1e] = 0;
  local_d8[0x1f] = 0x3f800000;
  local_d8[0x20] = 0;
  local_d8[0x21] = 0;
  local_d8[0x22] = 0;
  local_d8[0x23] = 0x3f800000;
  local_d8[0x24] = 0;
  local_d8[0x25] = 0;
  local_d8[0x26] = 0;
  local_d8[0x27] = 0x3f800000;
  local_d8[0x28] = 0;
  local_d8[0x29] = 0;
  local_d8[0x2a] = 0;
  local_d8[0x2b] = 0x3f800000;
  local_d8[0x2c] = 0;
  local_d8[0x2d] = 0;
  local_d8[0x2e] = 0;
  local_d8[0x2f] = 0x3f800000;
  do {
    local_d8[uVar3 * 2] = puVar4[-2];
    local_d8[uVar3 * 2 + 1] = puVar4[-1];
    if ((int)uVar3 + 1U < 0x18) {
      local_d8[uVar3 * 2 + 2] = *puVar4;
      local_d8[uVar3 * 2 + 3] = puVar4[1];
    }
    uVar2 = (int)uVar3 + 2;
    uVar3 = (ulonglong)uVar2;
    puVar4 = puVar4 + 4;
  } while (uVar2 < 0x18);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1,0);
  }
  local_e0 = 0;
  local_e8 = 0xc;
  SetShaderValueArray<FRHIVertexShader_*,FVector4,FRHICommandListImmediate>
            (param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0xc0,local_d8);
  return;
}



// FUNCTION 141d03a80 SetParameters body=298 status=ok
// SIG undefined SetParameters(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TFilterVS<25>::SetParameters(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8 [52];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_e8[2] = 0;
  local_e8[3] = 0x3f800000;
  uVar3 = 0;
  local_e8[4] = 0;
  local_e8[5] = 0;
  local_e8[6] = 0;
  local_e8[7] = 0x3f800000;
  puVar4 = (undefined4 *)(param_3 + 8);
  local_e8[8] = 0;
  local_e8[9] = 0;
  local_e8[10] = 0;
  local_e8[0xb] = 0x3f800000;
  local_e8[0xc] = 0;
  local_e8[0xd] = 0;
  local_e8[0xe] = 0;
  local_e8[0xf] = 0x3f800000;
  local_e8[0x10] = 0;
  local_e8[0x11] = 0;
  local_e8[0x12] = 0;
  local_e8[0x13] = 0x3f800000;
  local_e8[0x14] = 0;
  local_e8[0x15] = 0;
  local_e8[0x16] = 0;
  local_e8[0x17] = 0x3f800000;
  local_e8[0x18] = 0;
  local_e8[0x19] = 0;
  local_e8[0x1a] = 0;
  local_e8[0x1b] = 0x3f800000;
  local_e8[0x1c] = 0;
  local_e8[0x1d] = 0;
  local_e8[0x1e] = 0;
  local_e8[0x1f] = 0x3f800000;
  local_e8[0x20] = 0;
  local_e8[0x21] = 0;
  local_e8[0x22] = 0;
  local_e8[0x23] = 0x3f800000;
  local_e8[0x24] = 0;
  local_e8[0x25] = 0;
  local_e8[0x26] = 0;
  local_e8[0x27] = 0x3f800000;
  local_e8[0x28] = 0;
  local_e8[0x29] = 0;
  local_e8[0x2a] = 0;
  local_e8[0x2b] = 0x3f800000;
  local_e8[0x2c] = 0;
  local_e8[0x2d] = 0;
  local_e8[0x2e] = 0;
  local_e8[0x2f] = 0x3f800000;
  local_e8[0x30] = 0;
  local_e8[0x31] = 0;
  local_e8[0x32] = 0;
  local_e8[0x33] = 0x3f800000;
  do {
    local_e8[uVar3 * 2] = puVar4[-2];
    local_e8[uVar3 * 2 + 1] = puVar4[-1];
    if ((int)uVar3 + 1U < 0x19) {
      local_e8[uVar3 * 2 + 2] = *puVar4;
      local_e8[uVar3 * 2 + 3] = puVar4[1];
    }
    uVar2 = (int)uVar3 + 2;
    uVar3 = (ulonglong)uVar2;
    puVar4 = puVar4 + 4;
  } while (uVar2 < 0x19);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1,0);
  }
  local_f0 = 0;
  local_f8 = 0xd;
  SetShaderValueArray<FRHIVertexShader_*,FVector4,FRHICommandListImmediate>
            (param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0xc0,local_e8);
  return;
}



// FUNCTION 141d03bb0 SetParameters body=298 status=ok
// SIG undefined SetParameters(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TFilterVS<26>::SetParameters(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8 [52];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_e8[2] = 0;
  local_e8[3] = 0x3f800000;
  uVar3 = 0;
  local_e8[4] = 0;
  local_e8[5] = 0;
  local_e8[6] = 0;
  local_e8[7] = 0x3f800000;
  puVar4 = (undefined4 *)(param_3 + 8);
  local_e8[8] = 0;
  local_e8[9] = 0;
  local_e8[10] = 0;
  local_e8[0xb] = 0x3f800000;
  local_e8[0xc] = 0;
  local_e8[0xd] = 0;
  local_e8[0xe] = 0;
  local_e8[0xf] = 0x3f800000;
  local_e8[0x10] = 0;
  local_e8[0x11] = 0;
  local_e8[0x12] = 0;
  local_e8[0x13] = 0x3f800000;
  local_e8[0x14] = 0;
  local_e8[0x15] = 0;
  local_e8[0x16] = 0;
  local_e8[0x17] = 0x3f800000;
  local_e8[0x18] = 0;
  local_e8[0x19] = 0;
  local_e8[0x1a] = 0;
  local_e8[0x1b] = 0x3f800000;
  local_e8[0x1c] = 0;
  local_e8[0x1d] = 0;
  local_e8[0x1e] = 0;
  local_e8[0x1f] = 0x3f800000;
  local_e8[0x20] = 0;
  local_e8[0x21] = 0;
  local_e8[0x22] = 0;
  local_e8[0x23] = 0x3f800000;
  local_e8[0x24] = 0;
  local_e8[0x25] = 0;
  local_e8[0x26] = 0;
  local_e8[0x27] = 0x3f800000;
  local_e8[0x28] = 0;
  local_e8[0x29] = 0;
  local_e8[0x2a] = 0;
  local_e8[0x2b] = 0x3f800000;
  local_e8[0x2c] = 0;
  local_e8[0x2d] = 0;
  local_e8[0x2e] = 0;
  local_e8[0x2f] = 0x3f800000;
  local_e8[0x30] = 0;
  local_e8[0x31] = 0;
  local_e8[0x32] = 0;
  local_e8[0x33] = 0x3f800000;
  do {
    local_e8[uVar3 * 2] = puVar4[-2];
    local_e8[uVar3 * 2 + 1] = puVar4[-1];
    if ((int)uVar3 + 1U < 0x1a) {
      local_e8[uVar3 * 2 + 2] = *puVar4;
      local_e8[uVar3 * 2 + 3] = puVar4[1];
    }
    uVar2 = (int)uVar3 + 2;
    uVar3 = (ulonglong)uVar2;
    puVar4 = puVar4 + 4;
  } while (uVar2 < 0x1a);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1,0);
  }
  local_f0 = 0;
  local_f8 = 0xd;
  SetShaderValueArray<FRHIVertexShader_*,FVector4,FRHICommandListImmediate>
            (param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0xc0,local_e8);
  return;
}



// FUNCTION 141d03ce0 SetParameters body=298 status=ok
// SIG undefined SetParameters(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TFilterVS<27>::SetParameters(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8 [56];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_f8[0] = 0;
  local_f8[1] = 0;
  local_f8[2] = 0;
  local_f8[3] = 0x3f800000;
  uVar3 = 0;
  local_f8[4] = 0;
  local_f8[5] = 0;
  local_f8[6] = 0;
  local_f8[7] = 0x3f800000;
  puVar4 = (undefined4 *)(param_3 + 8);
  local_f8[8] = 0;
  local_f8[9] = 0;
  local_f8[10] = 0;
  local_f8[0xb] = 0x3f800000;
  local_f8[0xc] = 0;
  local_f8[0xd] = 0;
  local_f8[0xe] = 0;
  local_f8[0xf] = 0x3f800000;
  local_f8[0x10] = 0;
  local_f8[0x11] = 0;
  local_f8[0x12] = 0;
  local_f8[0x13] = 0x3f800000;
  local_f8[0x14] = 0;
  local_f8[0x15] = 0;
  local_f8[0x16] = 0;
  local_f8[0x17] = 0x3f800000;
  local_f8[0x18] = 0;
  local_f8[0x19] = 0;
  local_f8[0x1a] = 0;
  local_f8[0x1b] = 0x3f800000;
  local_f8[0x1c] = 0;
  local_f8[0x1d] = 0;
  local_f8[0x1e] = 0;
  local_f8[0x1f] = 0x3f800000;
  local_f8[0x20] = 0;
  local_f8[0x21] = 0;
  local_f8[0x22] = 0;
  local_f8[0x23] = 0x3f800000;
  local_f8[0x24] = 0;
  local_f8[0x25] = 0;
  local_f8[0x26] = 0;
  local_f8[0x27] = 0x3f800000;
  local_f8[0x28] = 0;
  local_f8[0x29] = 0;
  local_f8[0x2a] = 0;
  local_f8[0x2b] = 0x3f800000;
  local_f8[0x2c] = 0;
  local_f8[0x2d] = 0;
  local_f8[0x2e] = 0;
  local_f8[0x2f] = 0x3f800000;
  local_f8[0x30] = 0;
  local_f8[0x31] = 0;
  local_f8[0x32] = 0;
  local_f8[0x33] = 0x3f800000;
  local_f8[0x34] = 0;
  local_f8[0x35] = 0;
  local_f8[0x36] = 0;
  local_f8[0x37] = 0x3f800000;
  do {
    local_f8[uVar3 * 2] = puVar4[-2];
    local_f8[uVar3 * 2 + 1] = puVar4[-1];
    if ((int)uVar3 + 1U < 0x1b) {
      local_f8[uVar3 * 2 + 2] = *puVar4;
      local_f8[uVar3 * 2 + 3] = puVar4[1];
    }
    uVar2 = (int)uVar3 + 2;
    uVar3 = (ulonglong)uVar2;
    puVar4 = puVar4 + 4;
  } while (uVar2 < 0x1b);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1,0);
  }
  local_100 = 0;
  local_108 = 0xe;
  SetShaderValueArray<FRHIVertexShader_*,FVector4,FRHICommandListImmediate>
            (param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0xc0,local_f8);
  return;
}



// FUNCTION 141d03e10 SetParameters body=298 status=ok
// SIG undefined SetParameters(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TFilterVS<28>::SetParameters(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8 [56];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_f8[0] = 0;
  local_f8[1] = 0;
  local_f8[2] = 0;
  local_f8[3] = 0x3f800000;
  uVar3 = 0;
  local_f8[4] = 0;
  local_f8[5] = 0;
  local_f8[6] = 0;
  local_f8[7] = 0x3f800000;
  puVar4 = (undefined4 *)(param_3 + 8);
  local_f8[8] = 0;
  local_f8[9] = 0;
  local_f8[10] = 0;
  local_f8[0xb] = 0x3f800000;
  local_f8[0xc] = 0;
  local_f8[0xd] = 0;
  local_f8[0xe] = 0;
  local_f8[0xf] = 0x3f800000;
  local_f8[0x10] = 0;
  local_f8[0x11] = 0;
  local_f8[0x12] = 0;
  local_f8[0x13] = 0x3f800000;
  local_f8[0x14] = 0;
  local_f8[0x15] = 0;
  local_f8[0x16] = 0;
  local_f8[0x17] = 0x3f800000;
  local_f8[0x18] = 0;
  local_f8[0x19] = 0;
  local_f8[0x1a] = 0;
  local_f8[0x1b] = 0x3f800000;
  local_f8[0x1c] = 0;
  local_f8[0x1d] = 0;
  local_f8[0x1e] = 0;
  local_f8[0x1f] = 0x3f800000;
  local_f8[0x20] = 0;
  local_f8[0x21] = 0;
  local_f8[0x22] = 0;
  local_f8[0x23] = 0x3f800000;
  local_f8[0x24] = 0;
  local_f8[0x25] = 0;
  local_f8[0x26] = 0;
  local_f8[0x27] = 0x3f800000;
  local_f8[0x28] = 0;
  local_f8[0x29] = 0;
  local_f8[0x2a] = 0;
  local_f8[0x2b] = 0x3f800000;
  local_f8[0x2c] = 0;
  local_f8[0x2d] = 0;
  local_f8[0x2e] = 0;
  local_f8[0x2f] = 0x3f800000;
  local_f8[0x30] = 0;
  local_f8[0x31] = 0;
  local_f8[0x32] = 0;
  local_f8[0x33] = 0x3f800000;
  local_f8[0x34] = 0;
  local_f8[0x35] = 0;
  local_f8[0x36] = 0;
  local_f8[0x37] = 0x3f800000;
  do {
    local_f8[uVar3 * 2] = puVar4[-2];
    local_f8[uVar3 * 2 + 1] = puVar4[-1];
    if ((int)uVar3 + 1U < 0x1c) {
      local_f8[uVar3 * 2 + 2] = *puVar4;
      local_f8[uVar3 * 2 + 3] = puVar4[1];
    }
    uVar2 = (int)uVar3 + 2;
    uVar3 = (ulonglong)uVar2;
    puVar4 = puVar4 + 4;
  } while (uVar2 < 0x1c);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1,0);
  }
  local_100 = 0;
  local_108 = 0xe;
  SetShaderValueArray<FRHIVertexShader_*,FVector4,FRHICommandListImmediate>
            (param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0xc0,local_f8);
  return;
}



// FUNCTION 141d03f40 SetParameters body=314 status=ok
// SIG undefined SetParameters(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TFilterVS<29>::SetParameters(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_108 [60];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_108[0] = 0;
  local_108[1] = 0;
  local_108[2] = 0;
  local_108[3] = 0x3f800000;
  uVar3 = 0;
  local_108[4] = 0;
  local_108[5] = 0;
  local_108[6] = 0;
  local_108[7] = 0x3f800000;
  puVar4 = (undefined4 *)(param_3 + 8);
  local_108[8] = 0;
  local_108[9] = 0;
  local_108[10] = 0;
  local_108[0xb] = 0x3f800000;
  local_108[0xc] = 0;
  local_108[0xd] = 0;
  local_108[0xe] = 0;
  local_108[0xf] = 0x3f800000;
  local_108[0x10] = 0;
  local_108[0x11] = 0;
  local_108[0x12] = 0;
  local_108[0x13] = 0x3f800000;
  local_108[0x14] = 0;
  local_108[0x15] = 0;
  local_108[0x16] = 0;
  local_108[0x17] = 0x3f800000;
  local_108[0x18] = 0;
  local_108[0x19] = 0;
  local_108[0x1a] = 0;
  local_108[0x1b] = 0x3f800000;
  local_108[0x1c] = 0;
  local_108[0x1d] = 0;
  local_108[0x1e] = 0;
  local_108[0x1f] = 0x3f800000;
  local_108[0x20] = 0;
  local_108[0x21] = 0;
  local_108[0x22] = 0;
  local_108[0x23] = 0x3f800000;
  local_108[0x24] = 0;
  local_108[0x25] = 0;
  local_108[0x26] = 0;
  local_108[0x27] = 0x3f800000;
  local_108[0x28] = 0;
  local_108[0x29] = 0;
  local_108[0x2a] = 0;
  local_108[0x2b] = 0x3f800000;
  local_108[0x2c] = 0;
  local_108[0x2d] = 0;
  local_108[0x2e] = 0;
  local_108[0x2f] = 0x3f800000;
  local_108[0x30] = 0;
  local_108[0x31] = 0;
  local_108[0x32] = 0;
  local_108[0x33] = 0x3f800000;
  local_108[0x34] = 0;
  local_108[0x35] = 0;
  local_108[0x36] = 0;
  local_108[0x37] = 0x3f800000;
  local_108[0x38] = 0;
  local_108[0x39] = 0;
  local_108[0x3a] = 0;
  local_108[0x3b] = 0x3f800000;
  do {
    local_108[uVar3 * 2] = puVar4[-2];
    local_108[uVar3 * 2 + 1] = puVar4[-1];
    if ((int)uVar3 + 1U < 0x1d) {
      local_108[uVar3 * 2 + 2] = *puVar4;
      local_108[uVar3 * 2 + 3] = puVar4[1];
    }
    uVar2 = (int)uVar3 + 2;
    uVar3 = (ulonglong)uVar2;
    puVar4 = puVar4 + 4;
  } while (uVar2 < 0x1d);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1,0);
  }
  local_110 = 0;
  local_118 = 0xf;
  SetShaderValueArray<FRHIVertexShader_*,FVector4,FRHICommandListImmediate>
            (param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0xc0,local_108);
  return;
}



// FUNCTION 141d04080 SetParameters body=314 status=ok
// SIG undefined SetParameters(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TFilterVS<30>::SetParameters(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_108 [60];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_108[0] = 0;
  local_108[1] = 0;
  local_108[2] = 0;
  local_108[3] = 0x3f800000;
  uVar3 = 0;
  local_108[4] = 0;
  local_108[5] = 0;
  local_108[6] = 0;
  local_108[7] = 0x3f800000;
  puVar4 = (undefined4 *)(param_3 + 8);
  local_108[8] = 0;
  local_108[9] = 0;
  local_108[10] = 0;
  local_108[0xb] = 0x3f800000;
  local_108[0xc] = 0;
  local_108[0xd] = 0;
  local_108[0xe] = 0;
  local_108[0xf] = 0x3f800000;
  local_108[0x10] = 0;
  local_108[0x11] = 0;
  local_108[0x12] = 0;
  local_108[0x13] = 0x3f800000;
  local_108[0x14] = 0;
  local_108[0x15] = 0;
  local_108[0x16] = 0;
  local_108[0x17] = 0x3f800000;
  local_108[0x18] = 0;
  local_108[0x19] = 0;
  local_108[0x1a] = 0;
  local_108[0x1b] = 0x3f800000;
  local_108[0x1c] = 0;
  local_108[0x1d] = 0;
  local_108[0x1e] = 0;
  local_108[0x1f] = 0x3f800000;
  local_108[0x20] = 0;
  local_108[0x21] = 0;
  local_108[0x22] = 0;
  local_108[0x23] = 0x3f800000;
  local_108[0x24] = 0;
  local_108[0x25] = 0;
  local_108[0x26] = 0;
  local_108[0x27] = 0x3f800000;
  local_108[0x28] = 0;
  local_108[0x29] = 0;
  local_108[0x2a] = 0;
  local_108[0x2b] = 0x3f800000;
  local_108[0x2c] = 0;
  local_108[0x2d] = 0;
  local_108[0x2e] = 0;
  local_108[0x2f] = 0x3f800000;
  local_108[0x30] = 0;
  local_108[0x31] = 0;
  local_108[0x32] = 0;
  local_108[0x33] = 0x3f800000;
  local_108[0x34] = 0;
  local_108[0x35] = 0;
  local_108[0x36] = 0;
  local_108[0x37] = 0x3f800000;
  local_108[0x38] = 0;
  local_108[0x39] = 0;
  local_108[0x3a] = 0;
  local_108[0x3b] = 0x3f800000;
  do {
    local_108[uVar3 * 2] = puVar4[-2];
    local_108[uVar3 * 2 + 1] = puVar4[-1];
    if ((int)uVar3 + 1U < 0x1e) {
      local_108[uVar3 * 2 + 2] = *puVar4;
      local_108[uVar3 * 2 + 3] = puVar4[1];
    }
    uVar2 = (int)uVar3 + 2;
    uVar3 = (ulonglong)uVar2;
    puVar4 = puVar4 + 4;
  } while (uVar2 < 0x1e);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1,0);
  }
  local_110 = 0;
  local_118 = 0xf;
  SetShaderValueArray<FRHIVertexShader_*,FVector4,FRHICommandListImmediate>
            (param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0xc0,local_108);
  return;
}



// FUNCTION 141d041c0 SetParameters body=314 status=ok
// SIG undefined SetParameters(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TFilterVS<31>::SetParameters(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118 [64];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_118[0] = 0;
  local_118[1] = 0;
  local_118[2] = 0;
  local_118[3] = 0x3f800000;
  uVar3 = 0;
  local_118[4] = 0;
  local_118[5] = 0;
  local_118[6] = 0;
  local_118[7] = 0x3f800000;
  puVar4 = (undefined4 *)(param_3 + 8);
  local_118[8] = 0;
  local_118[9] = 0;
  local_118[10] = 0;
  local_118[0xb] = 0x3f800000;
  local_118[0xc] = 0;
  local_118[0xd] = 0;
  local_118[0xe] = 0;
  local_118[0xf] = 0x3f800000;
  local_118[0x10] = 0;
  local_118[0x11] = 0;
  local_118[0x12] = 0;
  local_118[0x13] = 0x3f800000;
  local_118[0x14] = 0;
  local_118[0x15] = 0;
  local_118[0x16] = 0;
  local_118[0x17] = 0x3f800000;
  local_118[0x18] = 0;
  local_118[0x19] = 0;
  local_118[0x1a] = 0;
  local_118[0x1b] = 0x3f800000;
  local_118[0x1c] = 0;
  local_118[0x1d] = 0;
  local_118[0x1e] = 0;
  local_118[0x1f] = 0x3f800000;
  local_118[0x20] = 0;
  local_118[0x21] = 0;
  local_118[0x22] = 0;
  local_118[0x23] = 0x3f800000;
  local_118[0x24] = 0;
  local_118[0x25] = 0;
  local_118[0x26] = 0;
  local_118[0x27] = 0x3f800000;
  local_118[0x28] = 0;
  local_118[0x29] = 0;
  local_118[0x2a] = 0;
  local_118[0x2b] = 0x3f800000;
  local_118[0x2c] = 0;
  local_118[0x2d] = 0;
  local_118[0x2e] = 0;
  local_118[0x2f] = 0x3f800000;
  local_118[0x30] = 0;
  local_118[0x31] = 0;
  local_118[0x32] = 0;
  local_118[0x33] = 0x3f800000;
  local_118[0x34] = 0;
  local_118[0x35] = 0;
  local_118[0x36] = 0;
  local_118[0x37] = 0x3f800000;
  local_118[0x38] = 0;
  local_118[0x39] = 0;
  local_118[0x3a] = 0;
  local_118[0x3b] = 0x3f800000;
  local_118[0x3c] = 0;
  local_118[0x3d] = 0;
  local_118[0x3e] = 0;
  local_118[0x3f] = 0x3f800000;
  do {
    local_118[uVar3 * 2] = puVar4[-2];
    local_118[uVar3 * 2 + 1] = puVar4[-1];
    if ((int)uVar3 + 1U < 0x1f) {
      local_118[uVar3 * 2 + 2] = *puVar4;
      local_118[uVar3 * 2 + 3] = puVar4[1];
    }
    uVar2 = (int)uVar3 + 2;
    uVar3 = (ulonglong)uVar2;
    puVar4 = puVar4 + 4;
  } while (uVar2 < 0x1f);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1,0);
  }
  local_120 = 0;
  local_128 = 0x10;
  SetShaderValueArray<FRHIVertexShader_*,FVector4,FRHICommandListImmediate>
            (param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0xc0,local_118);
  return;
}



// FUNCTION 141d04300 SetParameters body=314 status=ok
// SIG undefined SetParameters(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TFilterVS<32>::SetParameters(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118 [64];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_118[0] = 0;
  local_118[1] = 0;
  local_118[2] = 0;
  local_118[3] = 0x3f800000;
  uVar3 = 0;
  local_118[4] = 0;
  local_118[5] = 0;
  local_118[6] = 0;
  local_118[7] = 0x3f800000;
  puVar4 = (undefined4 *)(param_3 + 8);
  local_118[8] = 0;
  local_118[9] = 0;
  local_118[10] = 0;
  local_118[0xb] = 0x3f800000;
  local_118[0xc] = 0;
  local_118[0xd] = 0;
  local_118[0xe] = 0;
  local_118[0xf] = 0x3f800000;
  local_118[0x10] = 0;
  local_118[0x11] = 0;
  local_118[0x12] = 0;
  local_118[0x13] = 0x3f800000;
  local_118[0x14] = 0;
  local_118[0x15] = 0;
  local_118[0x16] = 0;
  local_118[0x17] = 0x3f800000;
  local_118[0x18] = 0;
  local_118[0x19] = 0;
  local_118[0x1a] = 0;
  local_118[0x1b] = 0x3f800000;
  local_118[0x1c] = 0;
  local_118[0x1d] = 0;
  local_118[0x1e] = 0;
  local_118[0x1f] = 0x3f800000;
  local_118[0x20] = 0;
  local_118[0x21] = 0;
  local_118[0x22] = 0;
  local_118[0x23] = 0x3f800000;
  local_118[0x24] = 0;
  local_118[0x25] = 0;
  local_118[0x26] = 0;
  local_118[0x27] = 0x3f800000;
  local_118[0x28] = 0;
  local_118[0x29] = 0;
  local_118[0x2a] = 0;
  local_118[0x2b] = 0x3f800000;
  local_118[0x2c] = 0;
  local_118[0x2d] = 0;
  local_118[0x2e] = 0;
  local_118[0x2f] = 0x3f800000;
  local_118[0x30] = 0;
  local_118[0x31] = 0;
  local_118[0x32] = 0;
  local_118[0x33] = 0x3f800000;
  local_118[0x34] = 0;
  local_118[0x35] = 0;
  local_118[0x36] = 0;
  local_118[0x37] = 0x3f800000;
  local_118[0x38] = 0;
  local_118[0x39] = 0;
  local_118[0x3a] = 0;
  local_118[0x3b] = 0x3f800000;
  local_118[0x3c] = 0;
  local_118[0x3d] = 0;
  local_118[0x3e] = 0;
  local_118[0x3f] = 0x3f800000;
  do {
    local_118[uVar3 * 2] = puVar4[-2];
    local_118[uVar3 * 2 + 1] = puVar4[-1];
    if ((int)uVar3 + 1U < 0x20) {
      local_118[uVar3 * 2 + 2] = *puVar4;
      local_118[uVar3 * 2 + 3] = puVar4[1];
    }
    uVar2 = (int)uVar3 + 2;
    uVar3 = (ulonglong)uVar2;
    puVar4 = puVar4 + 4;
  } while (uVar2 < 0x20);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1,0);
  }
  local_120 = 0;
  local_128 = 0x10;
  SetShaderValueArray<FRHIVertexShader_*,FVector4,FRHICommandListImmediate>
            (param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0xc0,local_118);
  return;
}



// FUNCTION 141d04440 SetParameters body=250 status=ok
// SIG undefined SetParameters(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TFilterVS<11>::SetParameters(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78 [24];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  uVar3 = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[3] = 0x3f800000;
  puVar4 = (undefined4 *)(param_3 + 8);
  local_78[4] = 0;
  local_78[5] = 0;
  local_78[6] = 0;
  local_78[7] = 0x3f800000;
  local_78[8] = 0;
  local_78[9] = 0;
  local_78[10] = 0;
  local_78[0xb] = 0x3f800000;
  local_78[0xc] = 0;
  local_78[0xd] = 0;
  local_78[0xe] = 0;
  local_78[0xf] = 0x3f800000;
  local_78[0x10] = 0;
  local_78[0x11] = 0;
  local_78[0x12] = 0;
  local_78[0x13] = 0x3f800000;
  local_78[0x14] = 0;
  local_78[0x15] = 0;
  local_78[0x16] = 0;
  local_78[0x17] = 0x3f800000;
  do {
    local_78[uVar3 * 2] = puVar4[-2];
    local_78[uVar3 * 2 + 1] = puVar4[-1];
    if ((int)uVar3 + 1U < 0xb) {
      local_78[uVar3 * 2 + 2] = *puVar4;
      local_78[uVar3 * 2 + 3] = puVar4[1];
    }
    uVar2 = (int)uVar3 + 2;
    uVar3 = (ulonglong)uVar2;
    puVar4 = puVar4 + 4;
  } while (uVar2 < 0xb);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1,0);
  }
  local_80 = 0;
  local_88 = 6;
  SetShaderValueArray<FRHIVertexShader_*,FVector4,FRHICommandListImmediate>
            (param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0xc0,local_78);
  return;
}



// FUNCTION 141d04540 SetParameters body=250 status=ok
// SIG undefined SetParameters(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TFilterVS<12>::SetParameters(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78 [24];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  uVar3 = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[3] = 0x3f800000;
  puVar4 = (undefined4 *)(param_3 + 8);
  local_78[4] = 0;
  local_78[5] = 0;
  local_78[6] = 0;
  local_78[7] = 0x3f800000;
  local_78[8] = 0;
  local_78[9] = 0;
  local_78[10] = 0;
  local_78[0xb] = 0x3f800000;
  local_78[0xc] = 0;
  local_78[0xd] = 0;
  local_78[0xe] = 0;
  local_78[0xf] = 0x3f800000;
  local_78[0x10] = 0;
  local_78[0x11] = 0;
  local_78[0x12] = 0;
  local_78[0x13] = 0x3f800000;
  local_78[0x14] = 0;
  local_78[0x15] = 0;
  local_78[0x16] = 0;
  local_78[0x17] = 0x3f800000;
  do {
    local_78[uVar3 * 2] = puVar4[-2];
    local_78[uVar3 * 2 + 1] = puVar4[-1];
    if ((int)uVar3 + 1U < 0xc) {
      local_78[uVar3 * 2 + 2] = *puVar4;
      local_78[uVar3 * 2 + 3] = puVar4[1];
    }
    uVar2 = (int)uVar3 + 2;
    uVar3 = (ulonglong)uVar2;
    puVar4 = puVar4 + 4;
  } while (uVar2 < 0xc);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1,0);
  }
  local_80 = 0;
  local_88 = 6;
  SetShaderValueArray<FRHIVertexShader_*,FVector4,FRHICommandListImmediate>
            (param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0xc0,local_78);
  return;
}



// FUNCTION 141d04640 SetParameters body=250 status=ok
// SIG undefined SetParameters(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TFilterVS<13>::SetParameters(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88 [28];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0x3f800000;
  uVar3 = 0;
  local_88[4] = 0;
  local_88[5] = 0;
  local_88[6] = 0;
  local_88[7] = 0x3f800000;
  puVar4 = (undefined4 *)(param_3 + 8);
  local_88[8] = 0;
  local_88[9] = 0;
  local_88[10] = 0;
  local_88[0xb] = 0x3f800000;
  local_88[0xc] = 0;
  local_88[0xd] = 0;
  local_88[0xe] = 0;
  local_88[0xf] = 0x3f800000;
  local_88[0x10] = 0;
  local_88[0x11] = 0;
  local_88[0x12] = 0;
  local_88[0x13] = 0x3f800000;
  local_88[0x14] = 0;
  local_88[0x15] = 0;
  local_88[0x16] = 0;
  local_88[0x17] = 0x3f800000;
  local_88[0x18] = 0;
  local_88[0x19] = 0;
  local_88[0x1a] = 0;
  local_88[0x1b] = 0x3f800000;
  do {
    local_88[uVar3 * 2] = puVar4[-2];
    local_88[uVar3 * 2 + 1] = puVar4[-1];
    if ((int)uVar3 + 1U < 0xd) {
      local_88[uVar3 * 2 + 2] = *puVar4;
      local_88[uVar3 * 2 + 3] = puVar4[1];
    }
    uVar2 = (int)uVar3 + 2;
    uVar3 = (ulonglong)uVar2;
    puVar4 = puVar4 + 4;
  } while (uVar2 < 0xd);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1,0);
  }
  local_90 = 0;
  local_98 = 7;
  SetShaderValueArray<FRHIVertexShader_*,FVector4,FRHICommandListImmediate>
            (param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0xc0,local_88);
  return;
}



// FUNCTION 141d04740 SetParameters body=250 status=ok
// SIG undefined SetParameters(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TFilterVS<14>::SetParameters(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88 [28];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0x3f800000;
  uVar3 = 0;
  local_88[4] = 0;
  local_88[5] = 0;
  local_88[6] = 0;
  local_88[7] = 0x3f800000;
  puVar4 = (undefined4 *)(param_3 + 8);
  local_88[8] = 0;
  local_88[9] = 0;
  local_88[10] = 0;
  local_88[0xb] = 0x3f800000;
  local_88[0xc] = 0;
  local_88[0xd] = 0;
  local_88[0xe] = 0;
  local_88[0xf] = 0x3f800000;
  local_88[0x10] = 0;
  local_88[0x11] = 0;
  local_88[0x12] = 0;
  local_88[0x13] = 0x3f800000;
  local_88[0x14] = 0;
  local_88[0x15] = 0;
  local_88[0x16] = 0;
  local_88[0x17] = 0x3f800000;
  local_88[0x18] = 0;
  local_88[0x19] = 0;
  local_88[0x1a] = 0;
  local_88[0x1b] = 0x3f800000;
  do {
    local_88[uVar3 * 2] = puVar4[-2];
    local_88[uVar3 * 2 + 1] = puVar4[-1];
    if ((int)uVar3 + 1U < 0xe) {
      local_88[uVar3 * 2 + 2] = *puVar4;
      local_88[uVar3 * 2 + 3] = puVar4[1];
    }
    uVar2 = (int)uVar3 + 2;
    uVar3 = (ulonglong)uVar2;
    puVar4 = puVar4 + 4;
  } while (uVar2 < 0xe);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1,0);
  }
  local_90 = 0;
  local_98 = 7;
  SetShaderValueArray<FRHIVertexShader_*,FVector4,FRHICommandListImmediate>
            (param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0xc0,local_88);
  return;
}



// FUNCTION 141d04840 SetParameters body=266 status=ok
// SIG undefined SetParameters(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TFilterVS<15>::SetParameters(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_98[0] = 0;
  local_98[1] = 0;
  local_98[2] = 0;
  local_98[3] = 0x3f800000;
  uVar3 = 0;
  local_98[4] = 0;
  local_98[5] = 0;
  local_98[6] = 0;
  local_98[7] = 0x3f800000;
  puVar4 = (undefined4 *)(param_3 + 8);
  local_98[8] = 0;
  local_98[9] = 0;
  local_98[10] = 0;
  local_98[0xb] = 0x3f800000;
  local_98[0xc] = 0;
  local_98[0xd] = 0;
  local_98[0xe] = 0;
  local_98[0xf] = 0x3f800000;
  local_98[0x10] = 0;
  local_98[0x11] = 0;
  local_98[0x12] = 0;
  local_98[0x13] = 0x3f800000;
  local_98[0x14] = 0;
  local_98[0x15] = 0;
  local_98[0x16] = 0;
  local_98[0x17] = 0x3f800000;
  local_98[0x18] = 0;
  local_98[0x19] = 0;
  local_98[0x1a] = 0;
  local_98[0x1b] = 0x3f800000;
  local_98[0x1c] = 0;
  local_98[0x1d] = 0;
  local_98[0x1e] = 0;
  local_98[0x1f] = 0x3f800000;
  do {
    local_98[uVar3 * 2] = puVar4[-2];
    local_98[uVar3 * 2 + 1] = puVar4[-1];
    if ((int)uVar3 + 1U < 0xf) {
      local_98[uVar3 * 2 + 2] = *puVar4;
      local_98[uVar3 * 2 + 3] = puVar4[1];
    }
    uVar2 = (int)uVar3 + 2;
    uVar3 = (ulonglong)uVar2;
    puVar4 = puVar4 + 4;
  } while (uVar2 < 0xf);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1,0);
  }
  local_a0 = 0;
  local_a8 = 8;
  SetShaderValueArray<FRHIVertexShader_*,FVector4,FRHICommandListImmediate>
            (param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0xc0,local_98);
  return;
}



// FUNCTION 141d04950 FUN_141d04950 body=523 status=ok
// SIG undefined FUN_141d04950(void)

void FUN_141d04950(longlong param_1,longlong *param_2,float *param_3)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *_Dst;
  float fVar9;
  float fVar10;
  float local_res8 [2];
  float local_58;
  float local_54;
  float local_50;
  
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x38);
  FUN_141c07aa0(param_1,param_2[8],uVar4,*(undefined8 *)(*param_2 + 0x20));
  FUN_141c16400(*param_2 + 0x390,local_res8);
  fVar9 = _guard_xfg_dispatch_icall_nop(local_res8[0]);
  local_58 = *param_3;
  lVar3 = param_2[8];
  fVar10 = fVar9 / SQRT(fVar9 * fVar9 + 1.0);
  local_54 = param_3[1];
  local_50 = (fVar9 / (((local_58 + 1.0) / (SQRT(1.0 - fVar10 * fVar10) + local_58)) * fVar10) - 1.0
             ) * param_3[2] + 1.0;
  uVar5 = (uint)*(ushort *)(param_1 + 0xc4);
  if (0xb < *(ushort *)(param_1 + 0xc4)) {
    uVar5 = 0xc;
  }
  if (uVar5 != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
    uVar2 = *(ushort *)(param_1 + 0xc2);
    _Dst = (void *)(*(longlong *)(lVar3 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar6 = (longlong)_Dst + (ulonglong)uVar5;
    if (*(ulonglong *)(lVar3 + 0x38) < uVar6) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30,uVar5 + 0x10);
      _Dst = (void *)(*(longlong *)(lVar3 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar6 = (longlong)_Dst + (ulonglong)uVar5;
    }
    *(ulonglong *)(lVar3 + 0x30) = uVar6;
    _guard_xfg_dispatch_icall_nop(_Dst,&local_58,(ulonglong)uVar5);
    puVar8 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 6;
    if (*(undefined8 **)(lVar3 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x38);
      puVar8 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 6;
    }
    *(undefined8 **)(lVar3 + 0x30) = puVar7;
    *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
    **(undefined8 **)(lVar3 + 8) = puVar8;
    *(undefined8 **)(lVar3 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *(uint *)(puVar8 + 4) = (uint)uVar1;
    *(uint *)((longlong)puVar8 + 0x24) = (uint)uVar2;
    *puVar8 = &PTR_LAB_143f4d340;
    puVar8[2] = uVar4;
    puVar8[3] = _Dst;
    *(uint *)(puVar8 + 5) = uVar5;
  }
  return;
}



// FUNCTION 141d04b60 FUN_141d04b60 body=139 status=ok
// SIG undefined FUN_141d04b60(void)

void FUN_141d04b60(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x3cc) == 0) {
    lVar3 = 0x30;
  }
  else if (*(int *)(param_1 + 0x3cc) == 1) {
    if (*(char *)(param_1 + 0x3d0) == '\0') {
      iVar2 = FUN_141ce5560(param_1,*(undefined4 *)(param_1 + 0x3c8));
      if (iVar2 != 10) {
        lVar3 = 0x38;
        goto LAB_141d04bb7;
      }
    }
    lVar3 = 0x40;
  }
  else {
    lVar3 = 0x48;
  }
LAB_141d04bb7:
  plVar1 = *(longlong **)(lVar3 + param_1);
  *(longlong **)(lVar3 + param_1) = param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1);
  }
  return;
}



// FUNCTION 141d04bf0 FUN_141d04bf0 body=339 status=ok
// SIG undefined FUN_141d04bf0(void)

void FUN_141d04bf0(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a7fa30) {
    _Init_thread_header(&DAT_146a7fa30);
    if (DAT_146a7fa30 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar1 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))
                         (DAT_1468b1f88,L"r.SeparateTranslucencyScreenPercentage");
      lVar2 = 0;
      if (plVar1 != (longlong *)0x0) {
        lVar2 = (**(code **)(*plVar1 + 0x40))(plVar1);
      }
      DAT_146a7fa28 = lVar2;
      _Init_thread_footer(&DAT_146a7fa30);
    }
  }
  fVar5 = *(float *)(DAT_146a7fa28 + 4) * 0.01;
  fVar6 = 0.0;
  if ((0.0 <= fVar5) && (fVar6 = fVar5, 100.0 <= fVar5)) {
    fVar6 = 100.0;
  }
  if ((ABS(fVar6 - 1.0) < 0.001) && (param_2 != '\0')) {
    fVar6 = 0.5;
  }
  iVar3 = (int)((float)*(int *)(param_1 + 0x378) * fVar6);
  iVar4 = 1;
  if (0 < iVar3) {
    iVar4 = iVar3;
  }
  *(int *)(param_1 + 0x388) = iVar4;
  iVar3 = (int)((float)(int)((ulonglong)*(undefined8 *)(param_1 + 0x378) >> 0x20) * fVar6);
  iVar4 = 1;
  if (0 < iVar3) {
    iVar4 = iVar3;
  }
  *(int *)(param_1 + 0x38c) = iVar4;
  *(float *)(param_1 + 0x390) = fVar6;
  return;
}



// FUNCTION 141d04d50 SetSnapshotOnCmdList body=8 status=ok
// SIG undefined SetSnapshotOnCmdList(void)

void FSceneRenderTargets::SetSnapshotOnCmdList(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x90) = param_1;
  return;
}



// FUNCTION 141d04d60 FUN_141d04d60 body=3463 status=ok
// SIG undefined FUN_141d04d60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141d04d60(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_118 [32];
  wchar_t *local_f8;
  undefined1 local_f0;
  undefined1 local_e8;
  undefined4 local_d8;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  int local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined2 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined1 local_60;
  wchar_t *local_58;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  iVar1 = *(int *)(param_1 + 0x378);
  iVar2 = *(int *)(param_1 + 0x37c);
  if (*(longlong *)(param_1 + 0x2d0) == 0) {
    plVar3 = *(longlong **)(param_1 + 0x120);
    *(longlong **)(param_1 + 0x2d0) = plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))();
    }
  }
  if (((*(longlong **)(param_1 + 0x230) == (longlong *)0x0) ||
      (lVar5 = (**(code **)(**(longlong **)(param_1 + 0x230) + 0x10))(),
      *(int *)(lVar5 + 0x14) < iVar1)) ||
     (lVar5 = (**(code **)(**(longlong **)(param_1 + 0x230) + 0x10))(),
     *(int *)(lVar5 + 0x18) < iVar2)) {
    FUN_141cf3480(param_1);
    local_b4 = (iVar1 + 1) / 2;
    local_b0 = (iVar2 + 1) / 2;
    local_ac = (int)(iVar1 + 3 + (iVar1 + 3 >> 0x1f & 3U)) >> 2;
    local_c0 = (int)(iVar2 + 3 + (iVar2 + 3 >> 0x1f & 3U)) >> 2;
    iVar6 = (int)((iVar1 + 7 >> 0x1f & 7U) + iVar1 + 7) >> 3;
    iVar7 = (int)((iVar2 + 7 >> 0x1f & 7U) + iVar2 + 7) >> 3;
    local_bc = (int)(iVar1 + 0xf + (iVar1 + 0xf >> 0x1f & 0xfU)) >> 4;
    local_b8 = (int)(iVar2 + 0xf + (iVar2 + 0xf >> 0x1f & 0xfU)) >> 4;
    local_a8 = (int)(iVar1 + 0x1f + (iVar1 + 0x1f >> 0x1f & 0x1fU)) >> 5;
    local_a4 = (int)(iVar2 + 0x1f + (iVar2 + 0x1f >> 0x1f & 0x1fU)) >> 5;
    local_a0 = (int)(iVar1 + 0x3f + (iVar1 + 0x3f >> 0x1f & 0x3fU)) >> 6;
    local_9c = (int)(iVar2 + 0x3f + (iVar2 + 0x3f >> 0x1f & 0x3fU)) >> 6;
    if (*(longlong *)(param_1 + 0x230) == 0) {
      local_e8 = 1;
      local_d8 = 1;
      uStack_d4 = 0;
      uStack_cc = 0;
      local_f0 = 1;
      local_78 = 1;
      local_70 = 1;
      local_50 = 1;
      local_7c = 0;
      local_60 = 0;
      local_58 = L"UnknownTexture2D";
      local_98 = 1;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      local_88 = 0;
      local_74 = 0x10000;
      local_6c = 0x15;
      local_64 = 0x2010009;
      local_f8 = L"CSAODepthLinear";
      local_84 = iVar1;
      local_80 = iVar2;
      FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_98,param_1 + 0x230);
    }
    iVar2 = local_b0;
    iVar1 = local_b4;
    if (*(longlong *)(param_1 + 0x238) == 0) {
      local_d8 = 1;
      uStack_d4 = 0;
      uStack_cc = 0;
      local_78 = 1;
      local_70 = 1;
      local_7c = 0;
      local_58 = L"UnknownTexture2D";
      local_e8 = 1;
      local_f0 = 1;
      local_98 = 1;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      local_88 = 0;
      local_84 = local_b4;
      local_80 = local_b0;
      local_74 = 0x10000;
      local_6c = 0x15;
      local_64 = 0x2010009;
      local_60 = 0;
      local_50 = 1;
      local_f8 = L"CSAODepthLinearDownSize1";
      FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_98);
    }
    iVar4 = local_ac;
    if (*(longlong *)(param_1 + 0x240) == 0) {
      local_80 = local_c0;
      local_e8 = 1;
      local_7c = 0;
      local_60 = 0;
      local_d8 = 1;
      uStack_d4 = 0;
      uStack_cc = 0;
      local_f0 = 1;
      local_58 = L"UnknownTexture2D";
      local_78 = 1;
      local_70 = 1;
      local_50 = 1;
      local_f8 = L"CSAODepthLinearDownSize2";
      local_98 = 1;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      local_88 = 0;
      local_84 = local_ac;
      local_74 = 0x10000;
      local_6c = 0x15;
      local_64 = 0x2010009;
      FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_98);
    }
    if (*(longlong *)(param_1 + 0x248) == 0) {
      local_e8 = 1;
      local_d8 = 1;
      local_78 = 1;
      local_70 = 1;
      uStack_d4 = 0;
      uStack_cc = 0;
      local_7c = 0;
      local_58 = L"UnknownTexture2D";
      local_60 = 0;
      local_f0 = 1;
      local_f8 = L"CSAODepthLinearDownSize3";
      local_98 = 1;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      local_88 = 0;
      local_74 = 0x10000;
      local_6c = 0x15;
      local_64 = 0x2010009;
      local_50 = 1;
      local_84 = iVar6;
      local_80 = iVar7;
      FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_98);
    }
    if (*(longlong *)(param_1 + 0x250) == 0) {
      local_84 = local_bc;
      local_80 = local_b8;
      local_e8 = 1;
      local_7c = 0;
      local_60 = 0;
      local_d8 = 1;
      uStack_d4 = 0;
      uStack_cc = 0;
      local_f0 = 1;
      local_58 = L"UnknownTexture2D";
      local_78 = 1;
      local_70 = 1;
      local_50 = 1;
      local_f8 = L"CSAODepthLinearDownSize4";
      local_98 = 1;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      local_88 = 0;
      local_74 = 0x10000;
      local_6c = 0x15;
      local_64 = 0x2010009;
      FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_98);
    }
    if (*(longlong *)(param_1 + 600) == 0) {
      local_e8 = 1;
      local_7c = 0;
      local_d8 = 1;
      local_70 = 1;
      uStack_d4 = 0;
      uStack_cc = 0;
      local_60 = 0;
      local_58 = L"UnknownTexture2D";
      local_f0 = 1;
      local_f8 = L"CSAODepthTiledDownSize1";
      local_98 = 1;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      local_88 = 0;
      local_74 = 0x10001;
      local_6c = 0x15;
      local_64 = 0x10009;
      local_50 = 1;
      local_78 = 0x10;
      local_84 = iVar6;
      local_80 = iVar7;
      FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_98);
    }
    if (*(longlong *)(param_1 + 0x260) == 0) {
      local_84 = local_bc;
      local_80 = local_b8;
      local_e8 = 1;
      local_7c = 0;
      local_60 = 0;
      local_d8 = 1;
      uStack_d4 = 0;
      uStack_cc = 0;
      local_f0 = 1;
      local_58 = L"UnknownTexture2D";
      local_70 = 1;
      local_50 = 1;
      local_f8 = L"CSAODepthTiledDownSize2";
      local_98 = 1;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      local_88 = 0;
      local_74 = 0x10001;
      local_6c = 0x15;
      local_64 = 0x10009;
      local_78 = 0x10;
      FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_98);
    }
    if (*(longlong *)(param_1 + 0x268) == 0) {
      local_84 = local_a8;
      local_80 = local_a4;
      local_e8 = 1;
      local_7c = 0;
      local_60 = 0;
      local_d8 = 1;
      uStack_d4 = 0;
      uStack_cc = 0;
      local_f0 = 1;
      local_58 = L"UnknownTexture2D";
      local_70 = 1;
      local_50 = 1;
      local_f8 = L"CSAODepthTiledDownSize3";
      local_98 = 1;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      local_88 = 0;
      local_74 = 0x10001;
      local_6c = 0x15;
      local_64 = 0x10009;
      local_78 = 0x10;
      FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_98);
    }
    if (*(longlong *)(param_1 + 0x270) == 0) {
      local_84 = local_a0;
      local_80 = local_9c;
      local_e8 = 1;
      local_7c = 0;
      local_60 = 0;
      local_d8 = 1;
      uStack_d4 = 0;
      uStack_cc = 0;
      local_f0 = 1;
      local_58 = L"UnknownTexture2D";
      local_70 = 1;
      local_50 = 1;
      local_f8 = L"CSAODepthTiledDownSize4";
      local_98 = 1;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      local_88 = 0;
      local_74 = 0x10001;
      local_6c = 0x15;
      local_64 = 0x10009;
      local_78 = 0x10;
      FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_98);
    }
    if (*(longlong *)(param_1 + 0x278) == 0) {
      local_e8 = 1;
      local_d8 = 1;
      local_78 = 1;
      local_70 = 1;
      uStack_d4 = 0;
      uStack_cc = 0;
      local_7c = 0;
      local_58 = L"UnknownTexture2D";
      local_60 = 0;
      local_f0 = 1;
      local_f8 = L"CSAOMerge1";
      local_98 = 1;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      local_88 = 0;
      local_84 = iVar1;
      local_80 = iVar2;
      local_74 = 0x10000;
      local_6c = 3;
      local_64 = 0x2010009;
      local_50 = 1;
      FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_98);
    }
    if (*(longlong *)(param_1 + 0x280) == 0) {
      local_80 = local_c0;
      local_e8 = 1;
      local_7c = 0;
      local_60 = 0;
      local_d8 = 1;
      uStack_d4 = 0;
      uStack_cc = 0;
      local_f0 = 1;
      local_58 = L"UnknownTexture2D";
      local_78 = 1;
      local_70 = 1;
      local_50 = 1;
      local_f8 = L"CSAOMerge2";
      local_98 = 1;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      local_88 = 0;
      local_84 = iVar4;
      local_74 = 0x10000;
      local_6c = 3;
      local_64 = 0x2010009;
      FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_98);
    }
    if (*(longlong *)(param_1 + 0x288) == 0) {
      local_e8 = 1;
      local_d8 = 1;
      local_78 = 1;
      local_70 = 1;
      uStack_d4 = 0;
      uStack_cc = 0;
      local_7c = 0;
      local_58 = L"UnknownTexture2D";
      local_60 = 0;
      local_f0 = 1;
      local_f8 = L"CSAOMerge3";
      local_98 = 1;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      local_88 = 0;
      local_74 = 0x10000;
      local_6c = 3;
      local_64 = 0x2010009;
      local_50 = 1;
      local_84 = iVar6;
      local_80 = iVar7;
      FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_98);
    }
    if (*(longlong *)(param_1 + 0x290) == 0) {
      local_84 = local_bc;
      local_80 = local_b8;
      local_e8 = 1;
      local_7c = 0;
      local_60 = 0;
      local_d8 = 1;
      uStack_d4 = 0;
      uStack_cc = 0;
      local_f0 = 1;
      local_58 = L"UnknownTexture2D";
      local_78 = 1;
      local_70 = 1;
      local_50 = 1;
      local_f8 = L"CSAOMerge4";
      local_98 = 1;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      local_88 = 0;
      local_74 = 0x10000;
      local_6c = 3;
      local_64 = 0x2010009;
      FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_98);
    }
    if (*(longlong *)(param_1 + 0x298) == 0) {
      local_e8 = 1;
      local_d8 = 1;
      local_78 = 1;
      local_70 = 1;
      uStack_d4 = 0;
      uStack_cc = 0;
      local_7c = 0;
      local_58 = L"UnknownTexture2D";
      local_60 = 0;
      local_f0 = 1;
      local_f8 = L"CSAOSmoothed1";
      local_98 = 1;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      local_88 = 0;
      local_84 = iVar1;
      local_80 = iVar2;
      local_74 = 0x10000;
      local_6c = 3;
      local_64 = 0x2010009;
      local_50 = 1;
      FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_98);
    }
    if (*(longlong *)(param_1 + 0x2a0) == 0) {
      local_80 = local_c0;
      local_e8 = 1;
      local_7c = 0;
      local_60 = 0;
      local_d8 = 1;
      uStack_d4 = 0;
      uStack_cc = 0;
      local_f0 = 1;
      local_58 = L"UnknownTexture2D";
      local_78 = 1;
      local_70 = 1;
      local_50 = 1;
      local_f8 = L"CSAOSmoothed2";
      local_98 = 1;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      local_88 = 0;
      local_84 = iVar4;
      local_74 = 0x10000;
      local_6c = 3;
      local_64 = 0x2010009;
      FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_98);
    }
    if (*(longlong *)(param_1 + 0x2a8) == 0) {
      local_e8 = 1;
      local_d8 = 1;
      local_78 = 1;
      local_70 = 1;
      uStack_d4 = 0;
      uStack_cc = 0;
      local_7c = 0;
      local_58 = L"UnknownTexture2D";
      local_60 = 0;
      local_f0 = 1;
      local_f8 = L"CSAOSmoothed3";
      local_98 = 1;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      local_88 = 0;
      local_74 = 0x10000;
      local_6c = 3;
      local_64 = 0x2010009;
      local_50 = 1;
      local_84 = iVar6;
      local_80 = iVar7;
      FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_98);
    }
    if (*(longlong *)(param_1 + 0x2b0) == 0) {
      local_84 = iVar1;
      local_80 = iVar2;
      uStack_d4 = 0;
      uStack_cc = 0;
      local_58 = L"UnknownTexture2D";
      local_e8 = 1;
      local_d8 = 1;
      local_f0 = 1;
      local_88 = 0;
      local_98 = 1;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      local_7c = 0;
      local_78 = 1;
      local_74 = 0x10000;
      local_70 = 1;
      local_6c = 3;
      local_64 = 0x2010009;
      local_60 = 0;
      local_50 = 1;
      local_f8 = L"CSAOHQ1";
      FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_98);
    }
    if (*(longlong *)(param_1 + 0x2b8) == 0) {
      local_84 = iVar4;
      uStack_d4 = 0;
      uStack_cc = 0;
      local_80 = local_c0;
      local_e8 = 1;
      local_d8 = 1;
      local_f0 = 1;
      local_88 = 0;
      local_98 = 1;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      local_7c = 0;
      local_78 = 1;
      local_74 = 0x10000;
      local_70 = 1;
      local_6c = 3;
      local_64 = 0x2010009;
      local_60 = 0;
      local_58 = L"UnknownTexture2D";
      local_50 = 1;
      local_f8 = L"CSAOHQ2";
      FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_98);
    }
    if (*(longlong *)(param_1 + 0x2c0) == 0) {
      local_e8 = 1;
      uStack_d4 = 0;
      uStack_cc = 0;
      local_d8 = 1;
      local_f0 = 1;
      local_88 = 0;
      local_98 = 1;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      local_7c = 0;
      local_78 = 1;
      local_74 = 0x10000;
      local_70 = 1;
      local_6c = 3;
      local_64 = 0x2010009;
      local_60 = 0;
      local_58 = L"UnknownTexture2D";
      local_50 = 1;
      local_f8 = L"CSAOHQ3";
      local_84 = iVar6;
      local_80 = iVar7;
      FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_98);
    }
    if (*(longlong *)(param_1 + 0x2c8) == 0) {
      local_84 = local_bc;
      uStack_d4 = 0;
      uStack_cc = 0;
      local_80 = local_b8;
      local_e8 = 1;
      local_d8 = 1;
      local_f0 = 1;
      local_88 = 0;
      local_98 = 1;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      local_7c = 0;
      local_78 = 1;
      local_74 = 0x10000;
      local_70 = 1;
      local_6c = 3;
      local_64 = 0x2010009;
      local_60 = 0;
      local_58 = L"UnknownTexture2D";
      local_50 = 1;
      local_f8 = L"CSAOHQ4";
      FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_98);
    }
  }
  return;
}



// FUNCTION 141d05af0 SetVS body=50 status=ok
// SIG undefined SetVS(void)

void FPostProcessPassParameters::SetVS
               (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
               undefined4 param_5,undefined8 param_6)

{
  FUN_141caa290(param_1,*(undefined8 *)(param_3 + 0x40),param_2,param_3,param_4,param_5,param_6);
  return;
}



// FUNCTION 141d05b30 FUN_141d05b30 body=343 status=ok
// SIG undefined FUN_141d05b30(void)

void FUN_141d05b30(longlong param_1,undefined8 param_2,char param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  uVar5 = *(undefined8 *)(DAT_1464c3318 + 0x10);
  uVar4 = *(undefined8 *)(DAT_1464c3368 + 0x10);
  uVar3 = uVar5;
  if (param_3 != '\0') {
    puVar2 = (undefined8 *)FSceneRenderTargets::GetSceneColorTexture();
    uVar3 = *puVar2;
  }
  *param_4 = uVar3;
  uVar3 = FUN_1404a0e20();
  puVar2 = (undefined8 *)0x0;
  param_4[1] = uVar3;
  if ((*(int *)(param_1 + 0x3c8) < 2) &&
     ((uVar1 = (&DAT_1464c9c48)[*(int *)(param_1 + 0x3c8)], 0x1b < uVar1 ||
      ((0x8dfc0ebU >> (uVar1 & 0x1f) & 1) == 0)))) {
    puVar6 = puVar2;
    if ((uVar1 < 0x1e) && (puVar6 = (undefined8 *)0x0, (0x25e2cf88U >> (uVar1 & 0x1f) & 1) != 0)) {
      puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x10);
    }
  }
  else if (DAT_1464c9c11 == '\0') {
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x98) + 8);
  }
  else {
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x10);
  }
  uVar3 = uVar4;
  if ((param_3 != '\0') && (puVar6 != (undefined8 *)0x0)) {
    uVar3 = *puVar6;
  }
  param_4[2] = uVar3;
  uVar3 = FUN_1404a0e20();
  param_4[3] = uVar3;
  uVar3 = uVar5;
  if ((param_3 != '\0') && (*(longlong *)(param_1 + 0x90) != 0)) {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x10);
  }
  param_4[4] = uVar3;
  uVar3 = FUN_1404a0e20();
  param_4[5] = uVar3;
  if (*(char *)(param_1 + 0x2d9) != '\0') {
    puVar2 = *(undefined8 **)(param_1 + 0x130);
  }
  if (puVar2 != (undefined8 *)0x0) {
    uVar4 = puVar2[2];
  }
  param_4[6] = uVar4;
  uVar4 = FUN_1404a0e20();
  param_4[7] = uVar4;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x138) + 0x10);
  }
  param_4[8] = uVar5;
  uVar5 = FUN_1404a0e20();
  param_4[9] = uVar5;
  return;
}



// FUNCTION 141d05c90 FUN_141d05c90 body=1116 status=ok
// SIG undefined FUN_141d05c90(void)

void FUN_141d05c90(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  
  uVar14 = *(undefined8 *)(DAT_1464c3310 + 0x10);
  uVar2 = *(undefined8 *)(DAT_1464c3318 + 0x10);
  uVar16 = *(undefined8 *)(DAT_1464c3368 + 0x10);
  uVar12 = uVar2;
  if ((param_3 & 1) != 0) {
    puVar11 = (undefined8 *)FSceneRenderTargets::GetSceneColorTexture(param_1);
    uVar12 = *puVar11;
  }
  *param_4 = uVar12;
  uVar12 = FUN_1404a0e20();
  puVar11 = (undefined8 *)0x0;
  param_4[1] = uVar12;
  if ((*(int *)(param_1 + 0x3c8) < 2) &&
     ((uVar1 = (&DAT_1464c9c48)[*(int *)(param_1 + 0x3c8)], 0x1b < uVar1 ||
      ((0x8dfc0ebU >> (uVar1 & 0x1f) & 1) == 0)))) {
    puVar15 = puVar11;
    if ((uVar1 < 0x1e) && (puVar15 = (undefined8 *)0x0, (0x25e2cf88U >> (uVar1 & 0x1f) & 1) != 0)) {
      puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x10);
    }
  }
  else if (DAT_1464c9c11 == '\0') {
    puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x98) + 8);
  }
  else {
    puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x10);
  }
  uVar12 = uVar16;
  if (((param_3 & 1) != 0) && (puVar15 != (undefined8 *)0x0)) {
    uVar12 = *puVar15;
  }
  param_4[2] = uVar12;
  uVar12 = uVar16;
  if ((param_3 & 1) != 0) {
    if (((*(char *)(param_1 + 0x375) != '\0') && (*(longlong *)(param_1 + 0x220) != 0)) &&
       (*(float *)(param_1 + 0x390) <= 1.0 && *(float *)(param_1 + 0x390) != 1.0)) {
      param_4[2] = *(undefined8 *)(*(longlong *)(param_1 + 0x220) + 8);
    }
    if (DAT_1464c9c11 == '\0') {
      uVar12 = *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 8);
    }
    else {
      uVar12 = *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x10);
    }
  }
  param_4[4] = uVar12;
  uVar12 = FUN_1404a0e20();
  param_4[3] = uVar12;
  if (((param_3 & 1) == 0) ||
     (lVar13 = *(longlong *)(param_1 + 0x78), *(longlong *)(param_1 + 0x78) == 0)) {
    lVar13 = DAT_146ac3da8;
  }
  param_4[0x1d] = lVar13;
  if ((DAT_146ac3ac0 == 0) || (iVar10 = FUN_1419ef5f0(), iVar10 < 3)) {
    cVar9 = FUN_141ee4480();
    bVar8 = false;
    if (cVar9 != '\0') goto LAB_141d05e30;
  }
  else {
LAB_141d05e30:
    bVar8 = true;
  }
  if (((param_3 >> 1 & 1) == 0) || ((bVar8 && (cVar9 = FUN_141ee4480(), cVar9 == '\0')))) {
    bVar8 = false;
LAB_141d05e64:
    lVar13 = DAT_1464c3318 + 8;
    if (bVar8) goto LAB_141d05e73;
  }
  else {
    bVar8 = true;
    if (*(longlong *)(param_1 + 0xb8) == 0) goto LAB_141d05e64;
    lVar13 = *(longlong *)(param_1 + 0xb8) + 8;
LAB_141d05e73:
    lVar5 = *(longlong *)(param_1 + 0xc0);
    if (*(longlong *)(param_1 + 0xc0) != 0) goto LAB_141d05e87;
  }
  lVar5 = DAT_1464c3318;
LAB_141d05e87:
  if ((!bVar8) || (lVar6 = *(longlong *)(param_1 + 200), *(longlong *)(param_1 + 200) == 0)) {
    lVar6 = DAT_1464c3318;
  }
  if ((!bVar8) || (lVar7 = *(longlong *)(param_1 + 0xd0), *(longlong *)(param_1 + 0xd0) == 0)) {
    lVar7 = DAT_1464c3318;
  }
  lVar3 = DAT_1464c3318;
  if ((bVar8) && (*(longlong *)(param_1 + 0xd8) != 0)) {
    lVar3 = *(longlong *)(param_1 + 0xd8);
  }
  lVar4 = DAT_1464c3318;
  if ((bVar8) && (*(longlong *)(param_1 + 0xe0) != 0)) {
    lVar4 = *(longlong *)(param_1 + 0xe0);
  }
  param_4[5] = *(undefined8 *)(lVar13 + 8);
  param_4[6] = *(undefined8 *)(lVar5 + 0x10);
  param_4[7] = *(undefined8 *)(lVar6 + 0x10);
  param_4[8] = *(undefined8 *)(lVar7 + 0x10);
  param_4[9] = *(undefined8 *)(lVar3 + 0x10);
  param_4[10] = *(undefined8 *)(lVar4 + 0x10);
  param_4[0xb] = *(undefined8 *)(lVar13 + 8);
  param_4[0xc] = *(undefined8 *)(lVar5 + 0x10);
  param_4[0xd] = *(undefined8 *)(lVar6 + 0x10);
  param_4[0xe] = *(undefined8 *)(lVar7 + 0x10);
  param_4[0xf] = *(undefined8 *)(lVar3 + 0x10);
  param_4[0x10] = *(undefined8 *)(lVar4 + 0x10);
  uVar12 = FUN_1404a0e20();
  param_4[0x11] = uVar12;
  uVar12 = FUN_1404a0e20();
  param_4[0x12] = uVar12;
  uVar12 = FUN_1404a0e20();
  param_4[0x13] = uVar12;
  uVar12 = FUN_1404a0e20();
  param_4[0x14] = uVar12;
  uVar12 = FUN_1404a0e20();
  param_4[0x15] = uVar12;
  uVar12 = FUN_1404a0e20();
  param_4[0x16] = uVar12;
  if (((param_3 >> 2 & 1) != 0) && (*(char *)(param_1 + 0x2d8) != '\0')) {
    uVar14 = *(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0x10);
  }
  param_4[0x17] = uVar14;
  uVar14 = FUN_1404a0e20();
  param_4[0x18] = uVar14;
  if (*(char *)(param_1 + 0x2d9) != '\0') {
    puVar11 = *(undefined8 **)(param_1 + 0x130);
  }
  lVar13 = DAT_146ac3da8;
  if ((param_3 >> 3 & 1) != 0) {
    if (puVar11 != (undefined8 *)0x0) {
      uVar16 = puVar11[2];
    }
    if ((*(char *)(param_1 + 0x2d9) != '\0') && (*(longlong *)(param_1 + 0x140) != 0)) {
      lVar13 = *(longlong *)(param_1 + 0x140);
    }
  }
  param_4[0x1a] = uVar16;
  uVar14 = FUN_1404a0e20();
  param_4[0x1b] = uVar14;
  param_4[0x19] = uVar16;
  param_4[0x1c] = lVar13;
  uVar14 = *(undefined8 *)(DAT_146ac3d68 + 0x30);
  param_4[0x23] = uVar2;
  param_4[0x22] = uVar14;
  uVar14 = FUN_141a156e0();
  param_4[0x24] = uVar14;
  if (*(longlong *)(param_1 + 0x148) == 0) {
    puVar11 = (undefined8 *)(DAT_146ac3d68 + 0x30);
  }
  else {
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x148) + 0x10);
  }
  param_4[0x1f] = *puVar11;
  if (*(longlong *)(param_1 + 0x148) == 0) {
    puVar11 = (undefined8 *)(DAT_146ac3d68 + 0x30);
  }
  else {
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x148) + 0x10);
  }
  param_4[0x20] = *puVar11;
  uVar14 = FUN_1404a0e20();
  param_4[0x21] = uVar14;
  if (*(longlong *)(param_1 + 0x88) == 0) {
    uVar14 = *(undefined8 *)(DAT_146ac3e10 + 0x30);
  }
  else {
    uVar14 = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x10);
  }
  param_4[0x1e] = uVar14;
  return;
}



// FUNCTION 141d060f0 FUN_141d060f0 body=56 status=ok
// SIG undefined FUN_141d060f0(void)

undefined4 FUN_141d060f0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = FUN_1419ef5f0(iVar1);
  if ((((iVar2 < 3) || (iVar1 == 0x1b)) && (iVar1 != 0xc)) && ((iVar1 != 0x1b && (iVar2 < 2)))) {
    return 0;
  }
  return 1;
}



// FUNCTION 141d06130 FUN_141d06130 body=61 status=ok
// SIG undefined FUN_141d06130(void)

undefined4 FUN_141d06130(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = FUN_1419ef5f0(iVar1);
  if (2 < iVar2) {
    if (iVar1 == 0xc) {
      return 0;
    }
    if (iVar1 != 0x1b) {
      return 1;
    }
  }
  if (((iVar1 != 0xc) && (iVar1 != 0x1b)) && (1 < iVar2)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141d06170 ShouldCompilePermutation body=46 status=ok
// SIG undefined ShouldCompilePermutation(void)

undefined4 TFilterPS<17,1,1>::ShouldCompilePermutation(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = FUN_1419ef5f0(iVar1);
  if (((2 < iVar2) && (iVar1 != 0xc)) && (iVar1 != 0x1b)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141d061a0 FUN_141d061a0 body=897 status=ok
// SIG undefined FUN_141d061a0(void)

void FUN_141d061a0(longlong param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  
  FUN_141d066f0();
  if (*(char *)(param_1 + 0x159) != '\0') {
    *(undefined1 *)(param_1 + 0x159) = 0;
    *(undefined1 *)(param_1 + 0x161) = 1;
  }
  uVar14 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a7f9d0) && (_Init_thread_header(&DAT_146a7f9d0), DAT_146a7f9d0 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.RenderTargetPoolMin");
    uVar11 = uVar14;
    if (plVar5 != (longlong *)0x0) {
      uVar11 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_146a7f9c8 = uVar11;
    _Init_thread_footer(&DAT_146a7f9d0);
  }
  iVar4 = *(int *)(DAT_146a7f9c8 + 4);
  iVar13 = 0;
  iVar2 = iVar13;
  if ((-1 < iVar4) && (iVar2 = 0x8000, iVar4 < 0x8000)) {
    iVar2 = iVar4;
  }
  uVar8 = *(uint *)(param_1 + 0x110);
  uVar15 = iVar2 << 10;
  if (uVar8 != 0) {
    plVar5 = (longlong *)(param_1 + 0x108);
    uVar11 = uVar14;
    do {
      iVar4 = (int)uVar11;
      if (*(longlong *)(*plVar5 + (longlong)iVar4 * 8) == 0) {
        iVar2 = *(int *)(param_1 + 0x110);
        iVar1 = (iVar2 - iVar4) + -1;
        if (0 < iVar1) {
          iVar1 = 1;
        }
        if (iVar1 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar5 + (longlong)iVar4 * 8),
                     (void *)(*plVar5 + (longlong)(iVar2 - iVar1) * 8),(longlong)iVar1 << 3);
          iVar2 = *(int *)(param_1 + 0x110);
        }
        *(int *)(param_1 + 0x110) = iVar2 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar5);
        uVar8 = uVar8 - 1;
      }
      uVar11 = (ulonglong)(iVar4 + 1U);
    } while (iVar4 + 1U < uVar8);
  }
  if (*(int *)(DAT_146a61d80 + 4) != 0) {
    iVar4 = *(int *)(DAT_146a61d68 + 4);
    uVar8 = 0;
    uVar11 = uVar14;
    uVar6 = uVar14;
    if (*(int *)(param_1 + 0x110) != 0) {
      do {
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x108) + (longlong)(int)uVar6 * 8);
        if ((lVar9 != 0) && (*(char *)(lVar9 + 0xb8) == '\0')) {
          if (*(int *)(lVar9 + 0x60) == 1) {
            *(int *)(lVar9 + 100) = *(int *)(lVar9 + 100) + 1;
          }
          if ((*(int *)(lVar9 + 0x60) == 1) && ((int)uVar11 <= *(int *)(lVar9 + 100))) {
            uVar11 = (ulonglong)*(uint *)(lVar9 + 100);
          }
        }
        iVar13 = (int)uVar11;
        uVar8 = *(uint *)(param_1 + 0x110);
        uVar12 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar12;
      } while (uVar12 < uVar8);
    }
    if ((iVar4 < iVar13) && (uVar11 = uVar14, uVar8 != 0)) {
      do {
        lVar9 = (longlong)(int)uVar11;
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x108) + lVar9 * 8);
        if ((plVar5 != (longlong *)0x0) &&
           ((((char)plVar5[0x17] == '\0' && ((int)plVar5[0xc] == 1)) &&
            (iVar4 < *(int *)((longlong)plVar5 + 100))))) {
          iVar2 = (**(code **)(*plVar5 + 0x20))();
          *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) - (iVar2 + 0x3ffU >> 10);
          lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x108) + lVar9 * 8);
          *(undefined8 *)(*(longlong *)(param_1 + 0x108) + lVar9 * 8) = 0;
          if (lVar7 != 0) {
            FUN_141cf2980();
          }
        }
        uVar8 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar8;
      } while (uVar8 < *(uint *)(param_1 + 0x110));
    }
  }
  if (*(int *)(DAT_146a61d98 + 4) != 0) {
    uVar8 = *(uint *)(param_1 + 0x148);
    if (uVar15 < uVar8) {
      do {
        uVar11 = 0xffffffff;
        if (*(uint *)(param_1 + 0x110) == 0) {
LAB_141d0647d:
          if (*(char *)(param_1 + 0x158) == '\0') {
            uVar8 = *(uint *)(param_1 + 0x148);
            *(undefined1 *)(param_1 + 0x158) = 1;
          }
          break;
        }
        lVar9 = *(longlong *)(param_1 + 0x108);
        uVar6 = uVar14;
        do {
          uVar8 = (uint)uVar6;
          lVar7 = *(longlong *)(lVar9 + (longlong)(int)uVar8 * 8);
          if (((lVar7 != 0) && (uVar12 = *(uint *)(lVar7 + 100), 2 < uVar12)) &&
             (uVar10 = (uint)uVar11, uVar11 = uVar6, uVar10 != 0xffffffff)) {
            uVar3 = uVar8;
            if (uVar12 <= *(uint *)(*(longlong *)(lVar9 + (longlong)(int)uVar10 * 8) + 100)) {
              uVar3 = uVar10;
            }
            uVar11 = (ulonglong)uVar3;
          }
          uVar6 = (ulonglong)(uVar8 + 1);
        } while (uVar8 + 1 < *(uint *)(param_1 + 0x110));
        uVar8 = *(uint *)(param_1 + 0x148);
        if ((int)uVar11 == -1) goto LAB_141d0647d;
        lVar7 = (longlong)(int)uVar11;
        iVar4 = (**(code **)(**(longlong **)(lVar9 + lVar7 * 8) + 0x20))();
        *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) - (iVar4 + 0x3ffU >> 10);
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x108) + lVar7 * 8);
        *(undefined8 *)(*(longlong *)(param_1 + 0x108) + lVar7 * 8) = 0;
        if (lVar9 != 0) {
          FUN_141cf2980();
        }
        uVar8 = *(uint *)(param_1 + 0x148);
      } while (uVar15 < uVar8);
      if (uVar15 < uVar8) {
        return;
      }
    }
    if (*(char *)(param_1 + 0x158) != '\0') {
      *(undefined1 *)(param_1 + 0x158) = 0;
    }
  }
  return;
}



// FUNCTION 141d06530 FUN_141d06530 body=434 status=ok
// SIG undefined FUN_141d06530(void)

void FUN_141d06530(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong local_res18;
  
  FUN_141d066f0();
  plVar5 = (longlong *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x130) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x134)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar5,0);
  }
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x110)) {
    lVar9 = 0;
    do {
      plVar7 = *(longlong **)(lVar9 + *(longlong *)(param_1 + 0x108));
      if (((plVar7 != (longlong *)0x0) &&
          (lVar3 = (**(code **)(*plVar7 + 0x10))(plVar7), *(char *)(lVar3 + 0x48) != '\0')) &&
         (lVar3 = plVar7[1], lVar3 != 0)) {
        iVar2 = *(int *)(param_1 + 0x130);
        *(int *)(param_1 + 0x130) = iVar2 + 1;
        if (*(int *)(param_1 + 0x134) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar5,iVar2);
        }
        *(longlong *)(*plVar5 + (longlong)iVar2 * 8) = lVar3;
      }
      iVar8 = iVar8 + 1;
      lVar9 = lVar9 + 8;
    } while (iVar8 < *(int *)(param_1 + 0x110));
  }
  if (0 < *(int *)(param_1 + 0x130)) {
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar6 + 4;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x28);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar6 + 4;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144e34600;
    puVar6[2] = plVar5;
    *(undefined4 *)(puVar6 + 3) = 1;
    if (DAT_146ab6383 != '\0') {
      plVar5 = (longlong *)FRHICommandListImmediate::RHIThreadFence(param_2,&local_res18,0);
      plVar7 = (longlong *)(param_1 + 0x150);
      if (plVar7 != plVar5) {
        lVar9 = *plVar7;
        *plVar7 = *plVar5;
        *plVar5 = 0;
        if (lVar9 != 0) {
          LOCK();
          piVar1 = (int *)(lVar9 + 0x48);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            FGraphEvent::Recycle();
          }
        }
      }
      if (local_res18 != 0) {
        LOCK();
        piVar1 = (int *)(local_res18 + 0x48);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          FGraphEvent::Recycle();
        }
      }
    }
  }
  return;
}



// FUNCTION 141d066f0 FUN_141d066f0 body=239 status=ok
// SIG undefined FUN_141d066f0(void)

void FUN_141d066f0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_141ed9b00(param_1 + 0x150);
    lVar2 = *(longlong *)(param_1 + 0x150);
    *(undefined8 *)(param_1 + 0x150) = 0;
    if (lVar2 != 0) {
      LOCK();
      piVar1 = (int *)(lVar2 + 0x48);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FGraphEvent::Recycle();
      }
    }
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  if ((*(int *)(param_1 + 0x134) < 0) && (*(int *)(param_1 + 0x134) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x128,0);
  }
  iVar3 = *(int *)(param_1 + 0x124);
  plVar4 = *(longlong **)(param_1 + 0x118);
  iVar5 = *(int *)(param_1 + 0x120);
  if (iVar3 < 0) {
    if (iVar5 != 0) {
      do {
        if (*plVar4 != 0) {
          FUN_141cf2980();
        }
        plVar4 = plVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      iVar3 = *(int *)(param_1 + 0x124);
    }
    *(undefined4 *)(param_1 + 0x120) = 0;
    if (iVar3 != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo((undefined8 *)(param_1 + 0x118),0);
    }
  }
  else {
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*plVar4 != 0) {
        FUN_141cf2980();
      }
      plVar4 = plVar4 + 1;
    }
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  return;
}



// FUNCTION 141d067e0 zzGetMembersBefore body=524 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FMobileSceneTextureUniformParameters::zzGetMembersBefore(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  zzGetMembersBefore(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"SceneAlphaCopyTextureSampler";
  puVar1[1] = L"SamplerState";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x28;
  puVar2[1] = 8;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"CustomDepthTexture";
  puVar1[1] = L"Texture2D";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x30;
  puVar2[1] = 9;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"CustomDepthTextureSampler";
  puVar1[1] = L"SamplerState";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x38;
  puVar2[1] = 8;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"MobileCustomStencilTexture";
  puVar1[1] = L"Texture2D";
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x900000040;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141d069f0 zzGetMembersBefore body=606 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FMobileSceneTextureUniformParameters::zzGetMembersBefore(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = 0;
  param_1[1] = 1;
  TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,0);
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = L"SceneColorTexture";
  puVar3[1] = L"Texture2D";
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x14) = 9;
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = 1;
  *(undefined4 *)(puVar3 + 4) = 1;
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0;
  *(undefined4 *)(puVar3 + 5) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"SceneColorTextureSampler";
  puVar3[1] = L"SamplerState";
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 8;
  puVar1[1] = 8;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"SceneDepthTexture";
  puVar3[1] = L"Texture2D";
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x10;
  puVar1[1] = 9;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"SceneDepthTextureSampler";
  puVar3[1] = L"SamplerState";
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x18;
  puVar1[1] = 8;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"SceneAlphaCopyTexture";
  puVar3[1] = L"Texture2D";
  puVar3 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar3 = 0x900000020;
  puVar3[1] = 0x100000000;
  puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar3 = 1;
  puVar3[1] = 0;
  return param_1;
}



// FUNCTION 141d06c50 FUN_141d06c50 body=521 status=ok
// SIG undefined FUN_141d06c50(void)

longlong * FUN_141d06c50(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FSceneTexturesUniformParameters::zzGetMembersBefore(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"SceneStencilTexture";
  puVar1[1] = L"Texture2D<uint2>";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xe8;
  puVar2[1] = 6;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"GBXSceneStencilTexture";
  puVar1[1] = L"Texture2D<uint>";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xf0;
  puVar2[1] = 9;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"CustomColorTexture";
  puVar1[1] = L"Texture2D";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xf8;
  puVar2[1] = 9;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"CustomColorTextureNonMS";
  puVar1[1] = L"Texture2D";
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x900000100;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141d06e60 zzGetMembersBefore body=529 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FSceneTexturesUniformParameters::zzGetMembersBefore(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  zzGetMembersBefore(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"CustomDepthTextureNonMS";
  puVar1[1] = L"Texture2D<float>";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 200;
  puVar2[1] = 9;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"CustomDepthTexture";
  puVar1[1] = L"Texture2D";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xd0;
  puVar2[1] = 9;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"CustomDepthTextureSampler";
  puVar1[1] = L"SamplerState";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xd8;
  puVar2[1] = 8;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"CustomStencilTexture";
  puVar1[1] = L"Texture2D<uint2>";
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x6000000e0;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141d07080 zzGetMembersBefore body=514 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FSceneTexturesUniformParameters::zzGetMembersBefore(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  zzGetMembersBefore(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"GBufferETexture";
  puVar1[1] = L"Texture2D";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x48;
  puVar2[1] = 9;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"GBufferVelocityTexture";
  puVar1[1] = L"Texture2D";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x50;
  puVar2[1] = 9;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"GBufferATextureNonMS";
  puVar1[1] = L"Texture2D<float4>";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x58;
  puVar2[1] = 9;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"GBufferBTextureNonMS";
  puVar1[1] = L"Texture2D<float4>";
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x900000060;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141d07290 zzGetMembersBefore body=507 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FSceneTexturesUniformParameters::zzGetMembersBefore(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  zzGetMembersBefore(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"GBufferATexture";
  puVar1[1] = L"Texture2D";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x28;
  puVar2[1] = 9;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"GBufferBTexture";
  puVar1[1] = L"Texture2D";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x30;
  puVar2[1] = 9;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"GBufferCTexture";
  puVar1[1] = L"Texture2D";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x38;
  puVar2[1] = 9;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"GBufferDTexture";
  puVar1[1] = L"Texture2D";
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x900000040;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141d07490 zzGetMembersBefore body=507 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FSceneTexturesUniformParameters::zzGetMembersBefore(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  zzGetMembersBefore(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"GBufferATextureSampler";
  puVar1[1] = L"SamplerState";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x88;
  puVar2[1] = 8;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"GBufferBTextureSampler";
  puVar1[1] = L"SamplerState";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x90;
  puVar2[1] = 8;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"GBufferCTextureSampler";
  puVar1[1] = L"SamplerState";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x98;
  puVar2[1] = 8;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"GBufferDTextureSampler";
  puVar1[1] = L"SamplerState";
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x8000000a0;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141d07690 zzGetMembersBefore body=507 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FSceneTexturesUniformParameters::zzGetMembersBefore(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  zzGetMembersBefore(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"GBufferCTextureNonMS";
  puVar1[1] = L"Texture2D<float4>";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x68;
  puVar2[1] = 9;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"GBufferDTextureNonMS";
  puVar1[1] = L"Texture2D<float4>";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x70;
  puVar2[1] = 9;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"GBufferETextureNonMS";
  puVar1[1] = L"Texture2D<float4>";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x78;
  puVar2[1] = 9;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"GBufferVelocityTextureNonMS";
  puVar1[1] = L"Texture2D<float4>";
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x900000080;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141d07890 FUN_141d07890 body=524 status=ok
// SIG undefined FUN_141d07890(void)

longlong * FUN_141d07890(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_141d06c50(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"CustomColorTextureSampler";
  puVar1[1] = L"SamplerState";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x108;
  puVar2[1] = 8;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"EyeAdaptation";
  puVar1[1] = L"Texture2D";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x110;
  puVar2[1] = 9;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"SceneColorCopyTexture";
  puVar1[1] = L"Texture2D";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x118;
  puVar2[1] = 9;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"SceneColorCopyTextureSampler";
  puVar1[1] = L"SamplerState";
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x800000120;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141d07aa0 zzGetMembersBefore body=613 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FSceneTexturesUniformParameters::zzGetMembersBefore(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = 0;
  param_1[1] = 1;
  TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,0);
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = L"SceneColorTexture";
  puVar3[1] = L"Texture2D";
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x14) = 9;
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = 1;
  *(undefined4 *)(puVar3 + 4) = 1;
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0;
  *(undefined4 *)(puVar3 + 5) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"SceneColorTextureSampler";
  puVar3[1] = L"SamplerState";
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 8;
  puVar1[1] = 8;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"SceneDepthTexture";
  puVar3[1] = L"Texture2D";
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x10;
  puVar1[1] = 9;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"SceneDepthTextureSampler";
  puVar3[1] = L"SamplerState";
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x18;
  puVar1[1] = 8;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"SceneDepthTextureNonMS";
  puVar3[1] = L"Texture2D<float>";
  puVar3 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar3 = 0x900000020;
  puVar3[1] = 0x100000000;
  puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar3 = 1;
  puVar3[1] = 0;
  return param_1;
}



// FUNCTION 141d07d10 zzGetMembersBefore body=514 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FSceneTexturesUniformParameters::zzGetMembersBefore(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  zzGetMembersBefore(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"GBufferETextureSampler";
  puVar1[1] = L"SamplerState";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xa8;
  puVar2[1] = 8;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"GBufferVelocityTextureSampler";
  puVar1[1] = L"SamplerState";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xb0;
  puVar2[1] = 8;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"ScreenSpaceAOTexture";
  puVar1[1] = L"Texture2D";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xb8;
  puVar2[1] = 9;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"ScreenSpaceAOTextureSampler";
  puVar1[1] = L"SamplerState";
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x8000000c0;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141d07f20 Serialize body=224 status=ok
// SIG undefined Serialize(void)

undefined1 VisualizeTexturePS<2>::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_1419e0b60(param_2,param_1 + 0xc0);
  FUN_1419e0b60(param_2,param_1 + 0xc4);
  FUN_1419e0b60(param_2,param_1 + 200);
  FUN_1419e0b60(param_2,param_1 + 0xcc);
  FUN_1419e0b60(param_2,param_1 + 0xd0);
  FUN_1419e0b60(param_2,param_1 + 0xd4);
  FUN_1419e0b60(param_2,param_1 + 0xd8);
  FUN_1419e0b60(param_2,param_1 + 0xdc);
  FUN_1419e0b60(param_2,param_1 + 0xe0);
  FUN_1419e0b60(param_2,param_1 + 0xe4);
  FUN_1419e0a40(param_2,param_1 + 0xec);
  FUN_1419e0a40(param_2,param_1 + 0xf2);
  FUN_1419e0b60(param_2,param_1 + 0xe8);
  return 0;
}



// FUNCTION 141d08000 Serialize body=119 status=ok
// SIG undefined Serialize(void)

undefined1 FCopyCubemapToCubeFacePS::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_1419e0a40(param_2,param_1 + 0xc0);
  FUN_1419e0b60(param_2,param_1 + 0xc6);
  FUN_1419e0b60(param_2,param_1 + 0xca);
  FUN_1419e0a40(param_2,param_1 + 0xce);
  FUN_1419e0a40(param_2,param_1 + 0xd4);
  FUN_1419e0a40(param_2,param_1 + 0xda);
  return 0;
}



// FUNCTION 141d08080 FUN_141d08080 body=74 status=ok
// SIG undefined FUN_141d08080(void)

undefined1 FUN_141d08080(longlong param_1,undefined8 param_2)

{
  FUN_1419e0a40(param_2,param_1 + 200);
  FUN_1419e0a40(param_2,param_1 + 0xce);
  FUN_1419e0a40(param_2,param_1 + 0xd4);
  return 0;
}



// FUNCTION 141d080d0 SetMesh body=188 status=ok
// SIG undefined SetMesh(void)

void FPrimitiveDistanceAccuracyPS::SetMesh
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  longlong lVar1;
  undefined4 local_res8 [2];
  
  lVar1 = *(longlong *)(param_1 + -0x78);
  local_res8[0] = 0xbf800000;
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,*(undefined8 *)(lVar1 + 0x40),param_1 + 0xe,local_res8,0);
  if ((CONCAT44(param_5._4_4_,(undefined4)param_5) == 0) ||
     ((*(uint *)(CONCAT44(param_5._4_4_,(undefined4)param_5) + 0x18) & 0x300) != 0)) {
    param_5._0_4_ = 0x3f800000;
  }
  else {
    param_5._0_4_ = 0x3e4ccccd;
  }
  lVar1 = *(longlong *)(param_1 + -0x78);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,*(undefined8 *)(lVar1 + 0x40),param_1 + 0x14,&param_5,0);
  return;
}



// FUNCTION 141d08190 Serialize body=149 status=ok
// SIG undefined Serialize(void)

undefined1 FCopyDiffuseIrradiancePS::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_1419e0a40(param_2,param_1 + 0xc0);
  FUN_1419e0a40(param_2,param_1 + 0xc6);
  FUN_1419e0b60(param_2,param_1 + 0xcc);
  FUN_1419e0b60(param_2,param_1 + 0xd0);
  FUN_1419e0a40(param_2,param_1 + 0xd4);
  FUN_1419e0a40(param_2,param_1 + 0xda);
  FUN_1419e0a40(param_2,param_1 + 0xe0);
  FUN_1419e0a40(param_2,param_1 + 0xe6);
  return 0;
}



// FUNCTION 141d08230 Serialize body=119 status=ok
// SIG undefined Serialize(void)

undefined1 FAccumulateDiffuseIrradiancePS::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_1419e0a40(param_2,param_1 + 0xc0);
  FUN_1419e0a40(param_2,param_1 + 0xc6);
  FUN_1419e0b60(param_2,param_1 + 0xcc);
  FUN_1419e0b60(param_2,param_1 + 0xd0);
  FUN_1419e0a40(param_2,param_1 + 0xd4);
  FUN_1419e0a40(param_2,param_1 + 0xda);
  return 0;
}



// FUNCTION 141d082b0 Serialize body=74 status=ok
// SIG undefined Serialize(void)

undefined1 FAccumulateCubeFacesPS::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_1419e0a40(param_2,param_1 + 0xc0);
  FUN_1419e0b60(param_2,param_1 + 0xc6);
  FUN_1419e0b60(param_2,param_1 + 0xca);
  return 0;
}



// FUNCTION 141d08300 FUN_141d08300 body=104 status=ok
// SIG undefined FUN_141d08300(void)

undefined8 * FUN_141d08300(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144e46eb0;
  FRenderResource::ReleaseResource();
  *param_1 = &PTR_FUN_144e47238;
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141d08370 FUN_141d08370 body=237 status=ok
// SIG undefined FUN_141d08370(void)

void FUN_141d08370(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141d2aa80(param_1 + 2,param_3,param_1 + 4);
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_144e46f30;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  plVar5 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar5 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 141d08460 FUN_141d08460 body=97 status=ok
// SIG undefined FUN_141d08460(void)

undefined8 * FUN_141d08460(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e46f30;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141d084d0 FUN_141d084d0 body=104 status=ok
// SIG undefined FUN_141d084d0(void)

void FUN_141d084d0(longlong param_1)

{
  undefined1 local_res8 [8];
  
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,0);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    (**(code **)(*DAT_146ab6358 + 0x110))
              (DAT_146ab6358,local_res8,*(longlong *)(param_1 + 0x40),&DAT_146a825a8,
               *(undefined4 *)(param_1 + 0x30));
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  }
  return;
}



// FUNCTION 141d08540 FUN_141d08540 body=89 status=ok
// SIG undefined FUN_141d08540(void)

undefined8 * FUN_141d08540(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144e47238;
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141d085a0 FUN_141d085a0 body=104 status=ok
// SIG undefined FUN_141d085a0(void)

void FUN_141d085a0(longlong param_1)

{
  undefined1 local_res8 [8];
  
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,0);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    (**(code **)(*DAT_146ab6358 + 0x110))
              (DAT_146ab6358,local_res8,*(longlong *)(param_1 + 0x40),&DAT_146a818f8,
               *(undefined4 *)(param_1 + 0x30));
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  }
  return;
}



// FUNCTION 141d08610 FUN_141d08610 body=119 status=ok
// SIG undefined FUN_141d08610(void)

undefined1 FUN_141d08610(longlong param_1,undefined8 param_2)

{
  FUN_1419e0a40(param_2,param_1 + 0xc0);
  FUN_1419e0a40(param_2,param_1 + 0xc6);
  FUN_1419e0a40(param_2,param_1 + 0xcc);
  FUN_1419e0a40(param_2,param_1 + 0xd2);
  FUN_1419e0b60(param_2,param_1 + 0xd8);
  FUN_1419e0b60(param_2,param_1 + 0xdc);
  return 0;
}



// FUNCTION 141d08690 FUN_141d08690 body=89 status=ok
// SIG undefined FUN_141d08690(void)

undefined8 * FUN_141d08690(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144e472d0;
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141d086f0 FUN_141d086f0 body=390 status=ok
// SIG undefined FUN_141d086f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141d086f0(longlong param_1)

{
  undefined4 *puVar1;
  void *_Dst;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_c028 [32];
  undefined4 local_c008;
  undefined1 local_bff8 [16];
  undefined8 local_bfe8;
  undefined4 local_bfe0 [1362];
  undefined8 local_aa98;
  undefined4 local_aa90 [1362];
  undefined8 local_9548;
  undefined4 local_9540 [8182];
  undefined8 local_1568;
  undefined4 local_1560 [1362];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x141d08700;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c028;
  lVar2 = 0x155;
  puVar1 = local_bfe0;
  lVar3 = 0x155;
  do {
    *(undefined8 *)(puVar1 + -2) = 0;
    *puVar1 = 0;
    puVar1[1] = 0x3f800000;
    puVar1 = puVar1 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  lVar3 = 0x155;
  puVar1 = local_aa90;
  do {
    *(undefined8 *)(puVar1 + -2) = 0;
    *puVar1 = 0;
    puVar1[1] = 0x3f800000;
    puVar1 = puVar1 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  lVar3 = 0x155;
  puVar1 = local_9540;
  do {
    *(undefined8 *)(puVar1 + -2) = 0;
    *puVar1 = 0;
    puVar1[1] = 0x3f800000;
    puVar1 = puVar1 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  puVar1 = local_1560;
  do {
    *(undefined8 *)(puVar1 + -2) = 0;
    *puVar1 = 0;
    puVar1[1] = 0x3f800000;
    puVar1 = puVar1 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  _guard_xfg_dispatch_icall_nop(&local_bfe8,0,0xbfd0);
  _Dst = *(void **)(param_1 + 0x40);
  if (_Dst == (void *)0x0) {
    _Dst = (void *)FMemory::Malloc(0xbfd0,0x10);
    *(void **)(param_1 + 0x40) = _Dst;
  }
  _guard_xfg_dispatch_icall_nop(_Dst,&local_bfe8,0xbfd0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,0);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    local_c008 = *(undefined4 *)(param_1 + 0x30);
    (**(code **)(*DAT_146ab6358 + 0x110))
              (DAT_146ab6358,local_bff8,*(longlong *)(param_1 + 0x40),&DAT_146a818f8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,local_bff8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_bff8);
  }
  return;
}



// FUNCTION 141d08880 FUN_141d08880 body=109 status=ok
// SIG undefined FUN_141d08880(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141d08880(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82708) {
    _Init_thread_header(&DAT_146a82708);
    if (DAT_146a82708 == -1) {
      _DAT_146a82700 = 0;
      atexit((_func_5014 *)&LAB_143e94d30);
      _Init_thread_footer(&DAT_146a82708);
    }
  }
  return &DAT_146a82700;
}



// FUNCTION 141d08900 FUN_141d08900 body=104 status=ok
// SIG undefined FUN_141d08900(void)

undefined8 * FUN_141d08900(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144e47340;
  FRenderResource::ReleaseResource();
  *param_1 = &PTR_FUN_144e472d0;
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141d08970 `scalar_deleting_destructor' body=101 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FCaptureRenderTarget>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e47380;
  param_1[6] = &PTR_LAB_144e473c0;
  FRenderResource::ReleaseResource();
  param_1[6] = &PTR_FUN_144dd5318;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141d089e0 FUN_141d089e0 body=339 status=ok
// SIG undefined FUN_141d089e0(void)

undefined1 FUN_141d089e0(longlong param_1,undefined8 param_2)

{
  FUN_141ad3f10(param_1 + 0xc0);
  FUN_141ad3f10(param_1 + 200,param_2);
  FUN_1419e0b60(param_2,param_1 + 0xd0);
  FUN_1419e0b60(param_2,param_1 + 0xd4);
  FUN_1419e0b60(param_2,param_1 + 0xd8);
  FUN_1419e0b60(param_2,param_1 + 0xdc);
  FUN_1419e0b60(param_2,param_1 + 0xe0);
  FUN_1419e0b60(param_2,param_1 + 0xe4);
  FUN_1419e0b60(param_2,param_1 + 0xe8);
  FUN_1419e0b60(param_2,param_1 + 0xec);
  FUN_1419e0b60(param_2,param_1 + 0xf0);
  FUN_1419e0b60(param_2,param_1 + 0xf4);
  FUN_1419e0b60(param_2,param_1 + 0xf8);
  FUN_1419e0a40(param_2,param_1 + 0xfc);
  FUN_1419e0a40(param_2,param_1 + 0x102);
  FUN_1419e0a40(param_2,param_1 + 0x108);
  FUN_1419e0a40(param_2,param_1 + 0x10e);
  FUN_1419e0a40(param_2,param_1 + 0x114);
  FUN_1419e0a40(param_2,param_1 + 0x11a);
  FUN_1419e0a40(param_2,param_1 + 0x120);
  FUN_1419e0b60(param_2,param_1 + 0x126);
  return 0;
}



// FUNCTION 141d08b40 Serialize body=169 status=ok
// SIG undefined Serialize(void)

ulonglong FPostProcessScreenSpaceReflectionsPS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = ::operator<<(param_2,param_1 + 0xc0);
  FUN_141ad3f10(param_1 + 0x1bc,uVar1);
  FUN_141ad3f10(param_1 + 0x1c4,uVar1);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1cc);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1d2);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1d8);
  uVar2 = FUN_1419e0a40(uVar1,param_1 + 0x1de);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141d08bf0 FUN_141d08bf0 body=670 status=ok
// SIG undefined FUN_141d08bf0(void)

int * FUN_141d08bf0(longlong *param_1,int *param_2,undefined4 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  uint uVar13;
  undefined1 uVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong *_Src;
  uint *puVar17;
  undefined4 uVar18;
  bool bVar19;
  int local_res8 [2];
  int local_res10;
  
  uVar18 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x18);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  plVar12 = (longlong *)param_1[4];
  *param_2 = iVar10;
  lVar9 = (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = param_1 + 2;
  }
  puVar17 = (uint *)((longlong)plVar12 + lVar9);
  *puVar17 = *puVar17 | 1 << ((byte)iVar10 & 0x1f);
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  lVar1 = (longlong)iVar10 * 0x18;
  _Src = (ulonglong *)(*param_1 + lVar1);
  *(undefined4 *)_Src = *param_3;
  *(undefined4 *)((longlong)_Src + 4) = uVar4;
  *(undefined4 *)(_Src + 1) = uVar5;
  *(undefined4 *)((longlong)_Src + 0xc) = uVar6;
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  local_res10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (local_res10 != 1) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,*_Src);
    iVar2 = local_res8[0];
    lVar15 = (longlong)local_res8[0];
    bVar19 = local_res8[0] != -1;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar19);
    if (bVar19) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + lVar15 * 0x18),_Src,0x10);
      bVar3 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar10;
      }
      lVar15 = *param_1;
      *(undefined4 *)(lVar1 + lVar15) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar18 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar1 + 4 + lVar15) = uVar18;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar12 = (longlong *)param_1[4];
      *param_2 = iVar2;
      if (plVar12 == (longlong *)0x0) {
        plVar12 = param_1 + 2;
      }
      puVar17 = (uint *)((longlong)plVar12 + lVar9);
      *puVar17 = *puVar17 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      uVar14 = (undefined1)local_res8[0];
      goto LAB_141d08e64;
    }
  }
  uVar14 = 0;
  cVar7 = TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,local_res10,0);
  if (cVar7 == '\0') {
    iVar10 = (int)(*_Src >> 4);
    uVar13 = 0x9e3779b9U - iVar10 ^ iVar10 << 8;
    uVar16 = -(iVar10 + uVar13) ^ uVar13 >> 0xd;
    uVar11 = (iVar10 - uVar13) - uVar16 ^ uVar16 >> 0xc;
    uVar13 = (uVar13 - uVar11) - uVar16 ^ uVar11 << 0x10;
    uVar16 = (uVar16 - uVar13) - uVar11 ^ uVar13 >> 5;
    uVar11 = (uVar11 - uVar13) - uVar16 ^ uVar16 >> 3;
    uVar13 = (uVar13 - uVar11) - uVar16 ^ uVar11 << 10;
    uVar11 = ((uVar16 - uVar13) - uVar11 ^ uVar13 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar11;
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_141d08e64:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar14;
  }
  return param_2;
}



// FUNCTION 141d08e90 FUN_141d08e90 body=615 status=ok
// SIG undefined FUN_141d08e90(void)

int * FUN_141d08e90(longlong *param_1,int *param_2,uint *param_3,undefined1 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  
  iVar13 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar12 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0xc);
    *(int *)(param_1 + 6) = iVar12;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar12 * 0xc) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar10;
  lVar6 = (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar9 = (uint *)((longlong)plVar7 + lVar6);
  *puVar9 = *puVar9 | 1 << ((byte)iVar10 & 0x1f);
  lVar1 = (longlong)iVar10 * 0xc;
  puVar9 = (uint *)(*param_1 + lVar1);
  bVar14 = false;
  *puVar9 = *param_3;
  puVar9[1] = 0xffffffff;
  iVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar12 != 1) {
    iVar5 = iVar13;
    if (iVar12 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar7 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar9) * 4);
      if (iVar8 != -1) {
        do {
          iVar5 = iVar8;
          if (*(uint *)(*param_1 + (longlong)iVar8 * 0xc) == *puVar9) break;
          iVar8 = *(int *)(*param_1 + 4 + (longlong)iVar8 * 0xc);
          iVar5 = iVar13;
        } while (iVar8 != -1);
      }
    }
    bVar14 = iVar5 != -1;
    if (bVar14) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar5 * 0xc),puVar9,4);
      bVar3 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0xc) = iVar10;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar1 + lVar2) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar13 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar2) = iVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar7 = (longlong *)param_1[4];
      *param_2 = iVar5;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar9 = (uint *)((longlong)plVar7 + lVar6);
      *puVar9 = *puVar9 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_141d090cc;
    }
  }
  cVar4 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::ConditionalRehash(param_1,iVar12,0)
  ;
  if (cVar4 == '\0') {
    uVar11 = (int)param_1[9] - 1U & *puVar9;
    puVar9[2] = uVar11;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    puVar9[1] = *(uint *)((longlong)plVar7 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_141d090cc:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar14;
  }
  return param_2;
}



// FUNCTION 141d09100 FUN_141d09100 body=597 status=ok
// SIG undefined FUN_141d09100(void)

uint * FUN_141d09100(longlong *param_1,uint *param_2,longlong *param_3,undefined1 *param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  uint uVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  uint uVar13;
  longlong lVar14;
  void *_Dst;
  undefined4 uVar15;
  undefined4 *_Src;
  bool bVar16;
  uint local_res8 [2];
  
  uVar15 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar13 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar13 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar13 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,uVar13);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar13 = *(uint *)(param_1 + 6);
    iVar3 = *(int *)((longlong)(int)uVar13 * 0x20 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  *param_2 = uVar13;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar11 +
                   (longlong)((int)(uVar13 + ((int)uVar13 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)uVar13 & 0x1f);
  puVar12 = (undefined4 *)*param_3;
  _Src = (undefined4 *)((longlong)(int)uVar13 * 0x20 + *param_1);
  puVar4 = (undefined8 *)param_3[1];
  uVar6 = puVar12[1];
  uVar7 = puVar12[2];
  uVar8 = puVar12[3];
  *_Src = *puVar12;
  _Src[1] = uVar6;
  _Src[2] = uVar7;
  _Src[3] = uVar8;
  *(undefined8 *)(_Src + 4) = *puVar4;
  *puVar4 = 0;
  _Src[6] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FGuid,AActor_*>,TDefaultMapHashableKeyFuncs<FGuid,AActor_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    uVar13 = local_res8[0];
    lVar14 = (longlong)(int)local_res8[0];
    bVar16 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar16);
    if (bVar16) {
      _Dst = (void *)(lVar14 * 0x20 + *param_1);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>((longlong)_Dst + 0x10);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      uVar10 = *param_2;
      bVar5 = (byte)uVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)((longlong)(int)param_1[6] * 0x20 + *param_1) = uVar10;
      }
      puVar12 = (undefined4 *)((longlong)(int)uVar10 * 0x20 + *param_1);
      *puVar12 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar15 = (undefined4)param_1[6];
      }
      puVar12[1] = uVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar10;
      plVar11 = (longlong *)param_1[4];
      *param_2 = uVar13;
      if (plVar11 == (longlong *)0x0) {
        plVar11 = param_1 + 2;
      }
      puVar2 = (uint *)((longlong)plVar11 +
                       (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar2 = *puVar2 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
      goto LAB_141d09331;
    }
  }
  cVar9 = TSet<TTuple<FUniqueObjectGuid,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar9 == '\0') {
    uVar13 = *param_2;
    uVar10 = FCrc::MemCrc_DEPRECATED(_Src,0x10);
    uVar10 = (int)param_1[9] - 1U & uVar10;
    _Src[7] = uVar10;
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    _Src[6] = *(undefined4 *)
               ((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(uint *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         uVar13;
  }
LAB_141d09331:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 141d09360 FUN_141d09360 body=833 status=ok
// SIG undefined FUN_141d09360(void)

int * FUN_141d09360(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  void *_Dst;
  char cVar10;
  uint uVar11;
  longlong *_Src;
  int iVar12;
  bool local_res8;
  
  iVar5 = 1;
  iVar12 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar7 = *(int *)((longlong)iVar9 * 0x40 + 4 + *param_1);
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar7 * 0x40 + *param_1) = 0xffffffff;
    }
  }
  plVar4 = (longlong *)param_1[4];
  *param_2 = iVar9;
  local_res8 = false;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  plVar4 = (longlong *)param_3[1];
  _Src = (longlong *)((longlong)iVar9 * 0x40 + *param_1);
  *_Src = *(longlong *)*param_3;
  _Src[1] = 0;
  _Src[1] = *plVar4;
  *plVar4 = 0;
  *(int *)(_Src + 2) = (int)plVar4[1];
  *(undefined4 *)((longlong)_Src + 0x14) = *(undefined4 *)((longlong)plVar4 + 0xc);
  plVar4[1] = 0;
  _Src[3] = 0;
  _Src[3] = plVar4[2];
  plVar4[2] = 0;
  *(int *)(_Src + 4) = (int)plVar4[3];
  *(undefined4 *)((longlong)_Src + 0x24) = *(undefined4 *)((longlong)plVar4 + 0x1c);
  plVar4[3] = 0;
  _Src[5] = plVar4[4];
  *(int *)(_Src + 6) = (int)plVar4[5];
  *(undefined4 *)(_Src + 7) = 0xffffffff;
  uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar11 != 1) {
    iVar8 = iVar12;
    if (uVar11 != 0) {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar4 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)(*_Src + 0x58)) * 4);
      if (iVar7 != -1) {
        do {
          iVar8 = iVar7;
          if (*(longlong *)((longlong)iVar7 * 0x40 + *param_1) == *_Src) break;
          iVar7 = *(int *)((longlong)iVar7 * 0x40 + 0x38 + *param_1);
          iVar8 = iVar12;
        } while (iVar7 != -1);
      }
    }
    local_res8 = iVar8 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar8 * 0x40 + *param_1);
      if (*(longlong *)((longlong)_Dst + 0x18) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x38);
      iVar5 = *param_2;
      bVar2 = (byte)iVar5 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x40 + *param_1) = iVar5;
      }
      puVar6 = (undefined4 *)((longlong)iVar5 * 0x40 + *param_1);
      *puVar6 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar12 = (int)param_1[6];
      }
      puVar6[1] = iVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar5;
      plVar4 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar4 == (longlong *)0x0) {
        plVar4 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar4 +
                       (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_141d09678;
    }
  }
  if (3 < uVar11) {
    uVar3 = (uVar11 >> 1) + 8;
    iVar12 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    iVar5 = 0x20;
    if (uVar3 != 0) {
      iVar5 = 0x1f - iVar12;
    }
    uVar3 = (uVar11 >> 1) + 7;
    iVar12 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar3 == 0) {
      cVar10 = '\0';
    }
    else {
      cVar10 = '\x1f' - (char)iVar12;
    }
    iVar5 = 1 << (~(byte)((iVar5 << 0x1a) >> 0x1f) & 0x20U - cVar10 & 0x1f);
  }
  if (((int)uVar11 < 1) || (((int)param_1[9] != 0 && (iVar5 <= (int)param_1[9])))) {
    uVar11 = (int)param_1[9] - 1U & *(uint *)(*_Src + 0x58);
    *(uint *)((longlong)_Src + 0x3c) = uVar11;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 7) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         iVar9;
  }
  else {
    *(int *)(param_1 + 9) = iVar5;
    FUN_141d46380(param_1);
  }
LAB_141d09678:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 141d096b0 FUN_141d096b0 body=1064 status=ok
// SIG undefined FUN_141d096b0(void)

int * FUN_141d096b0(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  ulonglong *puVar2;
  byte bVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  void *_Dst;
  char cVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ulonglong *_Src;
  bool local_res8;
  
  iVar6 = 1;
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar12 = *(int *)((longlong)iVar9 * 0x40 + 4 + *param_1);
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar12;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar12 * 0x40 + *param_1) = 0xffffffff;
    }
  }
  plVar4 = (longlong *)param_1[4];
  *param_2 = iVar9;
  local_res8 = false;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  puVar2 = (ulonglong *)param_3[1];
  _Src = (ulonglong *)((longlong)iVar9 * 0x40 + *param_1);
  *_Src = *(ulonglong *)*param_3;
  _Src[1] = 0;
  _Src[1] = *puVar2;
  *puVar2 = 0;
  *(int *)(_Src + 2) = (int)puVar2[1];
  *(undefined4 *)((longlong)_Src + 0x14) = *(undefined4 *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  _Src[3] = 0;
  _Src[3] = puVar2[2];
  puVar2[2] = 0;
  *(int *)(_Src + 4) = (int)puVar2[3];
  *(undefined4 *)((longlong)_Src + 0x24) = *(undefined4 *)((longlong)puVar2 + 0x1c);
  puVar2[3] = 0;
  _Src[5] = puVar2[4];
  *(int *)(_Src + 6) = (int)puVar2[5];
  *(undefined4 *)(_Src + 7) = 0xffffffff;
  uVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar15 != 1) {
    iVar8 = iVar14;
    if (uVar15 != 0) {
      iVar12 = (int)(*_Src >> 4);
      uVar11 = 0x9e3779b9U - iVar12 ^ iVar12 << 8;
      uVar5 = -(uVar11 + iVar12) ^ uVar11 >> 0xd;
      uVar13 = (iVar12 - uVar11) - uVar5 ^ uVar5 >> 0xc;
      uVar11 = (uVar11 - uVar13) - uVar5 ^ uVar13 << 0x10;
      uVar5 = (uVar5 - uVar11) - uVar13 ^ uVar11 >> 5;
      uVar13 = (uVar13 - uVar11) - uVar5 ^ uVar5 >> 3;
      uVar11 = (uVar11 - uVar13) - uVar5 ^ uVar13 << 10;
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar12 = *(int *)((longlong)plVar4 +
                       (((longlong)(int)((uVar5 - uVar11) - uVar13) ^ (ulonglong)(uVar11 >> 0xf)) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar12 != -1) {
        do {
          iVar8 = iVar12;
          if (*(ulonglong *)((longlong)iVar12 * 0x40 + *param_1) == *_Src) break;
          iVar12 = *(int *)((longlong)iVar12 * 0x40 + 0x38 + *param_1);
          iVar8 = iVar14;
        } while (iVar12 != -1);
      }
    }
    local_res8 = iVar8 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar8 * 0x40 + *param_1);
      if (*(longlong *)((longlong)_Dst + 0x18) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x38);
      iVar6 = *param_2;
      bVar3 = (byte)iVar6 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x40 + *param_1) = iVar6;
      }
      puVar7 = (undefined4 *)((longlong)iVar6 * 0x40 + *param_1);
      *puVar7 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      puVar7[1] = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar6;
      plVar4 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar4 == (longlong *)0x0) {
        plVar4 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar4 +
                       (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_141d09aaf;
    }
  }
  if (3 < uVar15) {
    uVar5 = (uVar15 >> 1) + 8;
    iVar14 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar6 = 0x20;
    if (uVar5 != 0) {
      iVar6 = 0x1f - iVar14;
    }
    uVar5 = (uVar15 >> 1) + 7;
    iVar14 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar5 == 0) {
      cVar10 = '\0';
    }
    else {
      cVar10 = '\x1f' - (char)iVar14;
    }
    iVar6 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar10 & 0x1f);
  }
  if (((int)uVar15 < 1) || (((int)param_1[9] != 0 && (iVar6 <= (int)param_1[9])))) {
    iVar14 = (int)(*_Src >> 4);
    uVar5 = 0x9e3779b9U - iVar14 ^ iVar14 << 8;
    uVar11 = -(uVar5 + iVar14) ^ uVar5 >> 0xd;
    uVar15 = (iVar14 - uVar5) - uVar11 ^ uVar11 >> 0xc;
    uVar5 = (uVar5 - uVar15) - uVar11 ^ uVar15 << 0x10;
    uVar11 = (uVar11 - uVar5) - uVar15 ^ uVar5 >> 5;
    uVar15 = (uVar15 - uVar5) - uVar11 ^ uVar11 >> 3;
    uVar5 = (uVar5 - uVar15) - uVar11 ^ uVar15 << 10;
    uVar15 = ((uVar11 - uVar5) - uVar15 ^ uVar5 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x3c) = uVar15;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 7) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4) =
         iVar9;
  }
  else {
    *(int *)(param_1 + 9) = iVar6;
    TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_141d09aaf:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 141d09ae0 FUN_141d09ae0 body=639 status=ok
// SIG undefined FUN_141d09ae0(void)

int * FUN_141d09ae0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      FUN_1404852a0(param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar11 = *(int *)((longlong)iVar10 * 0xc0 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar11;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar11 * 0xc0 + *param_1) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar10;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  bVar12 = false;
  puVar9 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar9 = *puVar9 | 1 << ((byte)iVar10 & 0x1f);
  puVar1 = (undefined8 *)param_3[1];
  puVar9 = (uint *)((longlong)iVar10 * 0xc0 + *param_1);
  *puVar9 = *(uint *)*param_3;
  uVar4 = puVar1[1];
  *(undefined8 *)(puVar9 + 4) = *puVar1;
  *(undefined8 *)(puVar9 + 6) = uVar4;
  uVar4 = puVar1[3];
  *(undefined8 *)(puVar9 + 8) = puVar1[2];
  *(undefined8 *)(puVar9 + 10) = uVar4;
  uVar4 = puVar1[5];
  *(undefined8 *)(puVar9 + 0xc) = puVar1[4];
  *(undefined8 *)(puVar9 + 0xe) = uVar4;
  uVar4 = puVar1[7];
  *(undefined8 *)(puVar9 + 0x10) = puVar1[6];
  *(undefined8 *)(puVar9 + 0x12) = uVar4;
  uVar4 = puVar1[9];
  *(undefined8 *)(puVar9 + 0x14) = puVar1[8];
  *(undefined8 *)(puVar9 + 0x16) = uVar4;
  uVar4 = puVar1[0xb];
  *(undefined8 *)(puVar9 + 0x18) = puVar1[10];
  *(undefined8 *)(puVar9 + 0x1a) = uVar4;
  uVar4 = puVar1[0xd];
  *(undefined8 *)(puVar9 + 0x1c) = puVar1[0xc];
  *(undefined8 *)(puVar9 + 0x1e) = uVar4;
  uVar4 = puVar1[0xf];
  *(undefined8 *)(puVar9 + 0x20) = puVar1[0xe];
  *(undefined8 *)(puVar9 + 0x22) = uVar4;
  uVar7 = *(uint *)((longlong)puVar1 + 0x84);
  uVar2 = *(uint *)(puVar1 + 0x11);
  uVar3 = *(uint *)((longlong)puVar1 + 0x8c);
  puVar9[0x24] = *(uint *)(puVar1 + 0x10);
  puVar9[0x25] = uVar7;
  puVar9[0x26] = uVar2;
  puVar9[0x27] = uVar3;
  uVar7 = *(uint *)((longlong)puVar1 + 0x94);
  uVar2 = *(uint *)(puVar1 + 0x13);
  uVar3 = *(uint *)((longlong)puVar1 + 0x9c);
  puVar9[0x28] = *(uint *)(puVar1 + 0x12);
  puVar9[0x29] = uVar7;
  puVar9[0x2a] = uVar2;
  puVar9[0x2b] = uVar3;
  puVar9[0x2c] = 0xffffffff;
  iVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar11 != 1) {
    if (iVar11 != 0) {
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar8 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar9) * 4);
      if (iVar6 != -1) {
        do {
          if (*(uint *)((longlong)iVar6 * 0xc0 + *param_1) == *puVar9) goto LAB_141d09c92;
          iVar6 = *(int *)((longlong)iVar6 * 0xc0 + 0xb0 + *param_1);
        } while (iVar6 != -1);
      }
    }
    iVar6 = -1;
LAB_141d09c92:
    bVar12 = iVar6 != -1;
    if (bVar12) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar6 * 0xc0 + *param_1),puVar9,0xb0);
      TSparseArray<TSetElement<TTuple<FPrimitiveComponentId,FMotionBlurInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar10,1);
      *param_2 = iVar6;
      goto LAB_141d09d36;
    }
  }
  cVar5 = TSet<TTuple<FPrimitiveComponentId,FMotionBlurInfo>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FMotionBlurInfo,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar11,0);
  if (cVar5 == '\0') {
    uVar7 = (int)param_1[9] - 1U & *puVar9;
    puVar9[0x2d] = uVar7;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    puVar9[0x2c] = *(uint *)((longlong)plVar8 +
                            ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         *param_2;
  }
LAB_141d09d36:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 141d09d60 FUN_141d09d60 body=683 status=ok
// SIG undefined FUN_141d09d60(void)

int * FUN_141d09d60(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  
  iVar9 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar8 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar8 = (int)param_1[6];
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar10 = *(int *)(*param_1 + 4 + (longlong)iVar8 * 0x28);
    *(int *)(param_1 + 6) = iVar10;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar10 * 0x28) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar8;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  bVar12 = false;
  puVar1 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  puVar1 = (uint *)(*param_1 + (longlong)iVar8 * 0x28);
  puVar2 = (undefined8 *)param_3[1];
  *puVar1 = *(uint *)*param_3;
  *(undefined8 *)(puVar1 + 2) = *puVar2;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined8 *)(puVar1 + 4) = puVar2[1];
  puVar2[1] = 0;
  puVar1[6] = *(uint *)(puVar2 + 2);
  puVar1[7] = *(uint *)((longlong)puVar2 + 0x14);
  puVar2[2] = 0;
  puVar1[8] = 0xffffffff;
  uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar11 != 1) {
    if (uVar11 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar10 = *(int *)((longlong)plVar6 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar1) * 4);
      if (iVar10 != -1) {
        do {
          if (*(uint *)(*param_1 + (longlong)iVar10 * 0x28) == *puVar1) goto LAB_141d09edb;
          iVar10 = *(int *)(*param_1 + 0x20 + (longlong)iVar10 * 0x28);
        } while (iVar10 != -1);
      }
    }
    iVar10 = -1;
LAB_141d09edb:
    bVar12 = iVar10 != -1;
    if (bVar12) {
      lVar3 = *param_1;
      if (*(longlong *)(lVar3 + 0x10 + (longlong)iVar10 * 0x28) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar3 + (longlong)iVar10 * 0x28),puVar1,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar10;
      goto LAB_141d09fe2;
    }
  }
  if (3 < uVar11) {
    uVar5 = (uVar11 >> 1) + 8;
    iVar9 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar10 = 0x20;
    cVar7 = '\0';
    if (uVar5 != 0) {
      iVar10 = 0x1f - iVar9;
    }
    uVar5 = (uVar11 >> 1) + 7;
    iVar9 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar7 = '\x1f' - (char)iVar9;
    }
    iVar9 = 1 << (~(byte)((iVar10 << 0x1a) >> 0x1f) & 0x20U - cVar7 & 0x1f);
  }
  if (((int)uVar11 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    uVar11 = (int)param_1[9] - 1U & *puVar1;
    puVar1[9] = uVar11;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    puVar1[8] = *(uint *)((longlong)plVar6 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         iVar8;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_141d09fe2:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 141d0a010 FUN_141d0a010 body=21 status=ok
// SIG undefined FUN_141d0a010(void)

longlong FUN_141d0a010(longlong param_1,int param_2)

{
  return param_1 + 0x238 + (longlong)param_2 * 0x98;
}



// FUNCTION 141d0a030 FUN_141d0a030 body=586 status=ok
// SIG undefined FUN_141d0a030(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_141d0a030(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  int *piVar6;
  int iVar7;
  longlong lVar8;
  uint *puVar9;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined8 local_d8;
  uint uStack_d0;
  int iStack_cc;
  int local_c8;
  undefined1 local_c0 [4];
  undefined1 local_bc [4];
  longlong *local_b8;
  int iStack_b0;
  uint uStack_ac;
  uint *puStack_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int iStack_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  puStack_a8 = (uint *)(param_1 + 2);
  local_58 = 0xffffffff;
  local_88 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  iVar1 = (int)param_1[5];
  local_e8._0_4_ = 0;
  local_e8._4_4_ = 1;
  local_d8._4_4_ = 0;
  uStack_d0 = 0;
  if (iVar1 != 0) {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puStack_a8;
    }
    uVar2 = *puVar9;
    local_e8._0_4_ = 0;
    uStack_d0 = 0;
    while (uVar2 == 0) {
      lVar8 = (longlong)(int)local_e8;
      uStack_d0 = uStack_d0 + 0x20;
      iVar7 = (int)local_e8 + 1;
      bVar4 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_e8;
      local_e8._0_4_ = iVar7;
      if (bVar4) goto LAB_141d0a131;
      uVar2 = puVar9[lVar8 + 1];
    }
    local_e8._4_4_ = -uVar2 & uVar2;
    iVar7 = 0x1f;
    if (local_e8._4_4_ != 0) {
      for (; local_e8._4_4_ >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (local_e8._4_4_ == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    local_d8._4_4_ = (uStack_d0 - iVar7) + 0x1f;
    if (iVar1 < local_d8._4_4_) {
LAB_141d0a131:
      local_d8._4_4_ = iVar1;
    }
  }
  uStack_a0 = 0xffffffff;
  iStack_9c = local_d8._4_4_;
  iStack_98 = uStack_d0;
  iStack_b0 = (int)local_e8;
  uStack_ac = local_e8._4_4_;
  iStack_e0 = (int)local_e8;
  uStack_dc = local_e8._4_4_;
  local_c8 = uStack_d0;
  uStack_d0 = 0xffffffff;
  iStack_cc = local_d8._4_4_;
  bVar4 = local_d8._4_4_ < iVar1;
  local_e8 = param_1;
  local_b8 = param_1;
  local_d8 = puStack_a8;
  if (bVar4) {
    do {
      plVar5 = local_e8;
      lVar3 = *local_e8;
      lVar8 = (longlong)iStack_cc * 0x28;
      piVar6 = (int *)TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
                                (&local_88,local_c0,*(undefined8 *)(lVar3 + lVar8));
      if (*piVar6 == -1) {
        iVar1 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar8 + lVar3);
        FUN_14058c900(&local_88,local_bc,*plVar5 + lVar8,0);
      }
      uStack_d0 = uStack_d0 & ~uStack_dc;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_e0);
    } while (iStack_cc < (int)local_d8[6]);
  }
  lVar8 = param_2[1];
  local_40 = 0;
  if (local_48 != 0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_88);
  return (int)lVar8;
}



// FUNCTION 141d0a280 FUN_141d0a280 body=21 status=ok
// SIG undefined FUN_141d0a280(void)

longlong FUN_141d0a280(longlong param_1,int param_2)

{
  return param_1 + 0xe18 + (longlong)param_2 * 0x98;
}



// FUNCTION 141d0a2a0 FUN_141d0a2a0 body=21 status=ok
// SIG undefined FUN_141d0a2a0(void)

longlong FUN_141d0a2a0(longlong param_1,int param_2)

{
  return param_1 + 0xc50 + (longlong)param_2 * 0x98;
}



// FUNCTION 141d0a2c0 HeapSortInternal<`FScene::FindClosestReflectionCaptures'::`2'::FReflectionCaptureDistIndex,FIdentityFunctor,TDereferenceWrapper<`FScene::FindClosestReflectionCaptures'::`2'::FReflectionCaptureDistIndex,<lambda_6ddd521d10b67a2a98310523add206df>_>_> body=540 status=ok
// SIG undefined HeapSortInternal<`FScene::FindClosestReflectionCaptures'::`2'::FReflectionCaptureDistIndex,FIdentityFunctor,TDereferenceWrapper<`FScene::FindClosestReflectionCaptures'::`2'::FReflectionCaptureDistIndex,<lambda_6ddd521d10b67a2a98310523add206df>_>_>(void)

void AlgoImpl::
     HeapSortInternal<_FScene::FindClosestReflectionCaptures_::_2_::FReflectionCaptureDistIndex,FIdentityFunctor,TDereferenceWrapper<_FScene::FindClosestReflectionCaptures_::_2_::FReflectionCaptureDistIndex,<lambda_6ddd521d10b67a2a98310523add206df>_>_>
               (undefined8 *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  bool bVar14;
  
  iVar7 = (param_2 + -2) / 2;
  if (-1 < iVar7) {
    iVar8 = iVar7 * 2 + 1;
    iVar3 = iVar8;
    iVar11 = iVar7;
joined_r0x000141d0a2f5:
    do {
      if (iVar8 < param_2) {
        iVar8 = iVar7 * 2;
        iVar9 = iVar8 + 1;
        if (iVar8 + 2 < param_2) {
          fVar1 = *(float *)(param_1[(longlong)iVar8 * 2 + 5] + 0x2c);
          fVar2 = *(float *)(param_1[(longlong)iVar9 * 2 + 1] + 0x2c);
          if (fVar1 == fVar2) {
            bVar14 = *(uint *)(param_1[(longlong)iVar8 * 2 + 5] + 0x34) <
                     *(uint *)(param_1[(longlong)iVar9 * 2 + 1] + 0x34);
          }
          else {
            bVar14 = fVar1 < fVar2;
          }
          if (bVar14) {
            iVar9 = iVar8;
          }
          iVar9 = iVar9 + 1;
        }
        puVar12 = param_1 + (longlong)iVar7 * 2;
        puVar10 = param_1 + (longlong)iVar9 * 2;
        fVar1 = *(float *)(puVar12[1] + 0x2c);
        fVar2 = *(float *)(puVar10[1] + 0x2c);
        if (fVar1 == fVar2) {
          bVar14 = *(uint *)(puVar12[1] + 0x34) < *(uint *)(puVar10[1] + 0x34);
        }
        else {
          bVar14 = fVar1 < fVar2;
        }
        if (bVar14) {
          if (puVar12 != puVar10) {
            uVar4 = puVar10[1];
            uVar5 = *puVar12;
            uVar6 = puVar12[1];
            *puVar12 = *puVar10;
            puVar12[1] = uVar4;
            *puVar10 = uVar5;
            puVar10[1] = uVar6;
          }
          iVar8 = iVar9 * 2 + 1;
          iVar7 = iVar9;
          goto joined_r0x000141d0a2f5;
        }
      }
      iVar8 = iVar3 + -2;
      iVar7 = iVar11 + -1;
      iVar3 = iVar8;
      iVar11 = iVar7;
    } while (-1 < iVar7);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar10 = param_1 + (longlong)param_2 * 2;
    do {
      if (param_1 != puVar10) {
        uVar4 = puVar10[1];
        uVar5 = *param_1;
        uVar6 = param_1[1];
        *param_1 = *puVar10;
        param_1[1] = uVar4;
        *puVar10 = uVar5;
        puVar10[1] = uVar6;
      }
      iVar7 = 0;
      if (1 < param_2) {
        do {
          iVar3 = iVar7 * 2;
          iVar8 = iVar3 + 1;
          if (iVar3 + 2 < param_2) {
            fVar1 = *(float *)(param_1[(longlong)iVar3 * 2 + 5] + 0x2c);
            fVar2 = *(float *)(param_1[(longlong)iVar8 * 2 + 1] + 0x2c);
            if (fVar1 == fVar2) {
              bVar14 = *(uint *)(param_1[(longlong)iVar3 * 2 + 5] + 0x34) <
                       *(uint *)(param_1[(longlong)iVar8 * 2 + 1] + 0x34);
            }
            else {
              bVar14 = fVar1 < fVar2;
            }
            if (bVar14) {
              iVar8 = iVar3;
            }
            iVar8 = iVar8 + 1;
          }
          puVar13 = param_1 + (longlong)iVar7 * 2;
          puVar12 = param_1 + (longlong)iVar8 * 2;
          fVar1 = *(float *)(puVar13[1] + 0x2c);
          fVar2 = *(float *)(puVar12[1] + 0x2c);
          if (fVar1 == fVar2) {
            bVar14 = *(uint *)(puVar13[1] + 0x34) < *(uint *)(puVar12[1] + 0x34);
          }
          else {
            bVar14 = fVar1 < fVar2;
          }
          if (!bVar14) break;
          if (puVar13 != puVar12) {
            uVar4 = puVar12[1];
            uVar5 = *puVar13;
            uVar6 = puVar13[1];
            *puVar13 = *puVar12;
            puVar13[1] = uVar4;
            *puVar12 = uVar5;
            puVar12[1] = uVar6;
          }
          iVar7 = iVar8;
        } while (iVar8 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar10 = puVar10 + -2;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 141d0a4e0 HeapSortInternal<FReflectionCaptureSortData,FIdentityFunctor,TDereferenceWrapper<FReflectionCaptureSortData,TLess<FReflectionCaptureSortData>_>_> body=1498 status=ok
// SIG undefined HeapSortInternal<FReflectionCaptureSortData,FIdentityFunctor,TDereferenceWrapper<FReflectionCaptureSortData,TLess<FReflectionCaptureSortData>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     HeapSortInternal<FReflectionCaptureSortData,FIdentityFunctor,TDereferenceWrapper<FReflectionCaptureSortData,TLess<FReflectionCaptureSortData>_>_>
               (undefined8 *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
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
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  undefined8 *puVar29;
  uint *puVar30;
  uint *puVar31;
  bool bVar32;
  
  iVar25 = (param_2 + -2) / 2;
  if (-1 < iVar25) {
    iVar26 = iVar25 * 2 + 1;
    iVar3 = iVar26;
    iVar28 = iVar25;
joined_r0x000141d0a526:
    do {
      if (iVar26 < param_2) {
        iVar26 = iVar25 * 2;
        iVar27 = iVar26 + 1;
        if (iVar26 + 2 < param_2) {
          fVar1 = *(float *)(((longlong)iVar26 + 2) * 0xa0 + 0x1c + (longlong)param_1);
          fVar2 = *(float *)((longlong)iVar27 * 0xa0 + 0x1c + (longlong)param_1);
          if (fVar1 == fVar2) {
            bVar32 = *(uint *)(param_1 + ((longlong)iVar26 + 2) * 0x14) <
                     *(uint *)(param_1 + (longlong)iVar27 * 0x14);
          }
          else {
            bVar32 = fVar1 < fVar2;
          }
          if (bVar32) {
            iVar27 = iVar26;
          }
          iVar27 = iVar27 + 1;
        }
        puVar31 = (uint *)(param_1 + (longlong)iVar25 * 0x14);
        puVar30 = (uint *)(param_1 + (longlong)iVar27 * 0x14);
        if ((float)puVar31[7] == (float)puVar30[7]) {
          bVar32 = *puVar31 < *puVar30;
        }
        else {
          bVar32 = (float)puVar31[7] < (float)puVar30[7];
        }
        if (bVar32) {
          if (puVar31 != puVar30) {
            uVar4 = *(undefined8 *)puVar31;
            uVar5 = *(undefined8 *)(puVar31 + 2);
            uVar6 = *(undefined8 *)(puVar31 + 4);
            uVar7 = *(undefined8 *)(puVar31 + 6);
            uVar8 = *(undefined8 *)(puVar31 + 8);
            uVar9 = *(undefined8 *)(puVar31 + 10);
            uVar10 = *(undefined8 *)(puVar31 + 0xc);
            uVar11 = *(undefined8 *)(puVar31 + 0xe);
            uVar12 = *(undefined8 *)(puVar31 + 0x10);
            uVar13 = *(undefined8 *)(puVar31 + 0x12);
            uVar14 = *(undefined8 *)(puVar31 + 0x14);
            uVar15 = *(undefined8 *)(puVar31 + 0x16);
            uVar16 = *(undefined8 *)(puVar31 + 0x18);
            uVar17 = *(undefined8 *)(puVar31 + 0x1a);
            uVar18 = *(undefined8 *)(puVar31 + 0x1c);
            uVar19 = *(undefined8 *)(puVar31 + 0x1e);
            uVar20 = *(undefined8 *)(puVar31 + 0x20);
            uVar21 = *(undefined8 *)(puVar31 + 0x22);
            uVar22 = *(undefined8 *)(puVar31 + 0x24);
            uVar23 = *(undefined8 *)(puVar31 + 0x26);
            uVar24 = *(undefined8 *)(puVar30 + 2);
            *(undefined8 *)puVar31 = *(undefined8 *)puVar30;
            *(undefined8 *)(puVar31 + 2) = uVar24;
            uVar24 = *(undefined8 *)(puVar30 + 6);
            *(undefined8 *)(puVar31 + 4) = *(undefined8 *)(puVar30 + 4);
            *(undefined8 *)(puVar31 + 6) = uVar24;
            uVar24 = *(undefined8 *)(puVar30 + 10);
            *(undefined8 *)(puVar31 + 8) = *(undefined8 *)(puVar30 + 8);
            *(undefined8 *)(puVar31 + 10) = uVar24;
            uVar24 = *(undefined8 *)(puVar30 + 0xe);
            *(undefined8 *)(puVar31 + 0xc) = *(undefined8 *)(puVar30 + 0xc);
            *(undefined8 *)(puVar31 + 0xe) = uVar24;
            uVar24 = *(undefined8 *)(puVar30 + 0x12);
            *(undefined8 *)(puVar31 + 0x10) = *(undefined8 *)(puVar30 + 0x10);
            *(undefined8 *)(puVar31 + 0x12) = uVar24;
            uVar24 = *(undefined8 *)(puVar30 + 0x16);
            *(undefined8 *)(puVar31 + 0x14) = *(undefined8 *)(puVar30 + 0x14);
            *(undefined8 *)(puVar31 + 0x16) = uVar24;
            uVar24 = *(undefined8 *)(puVar30 + 0x1a);
            *(undefined8 *)(puVar31 + 0x18) = *(undefined8 *)(puVar30 + 0x18);
            *(undefined8 *)(puVar31 + 0x1a) = uVar24;
            uVar24 = *(undefined8 *)(puVar30 + 0x1e);
            *(undefined8 *)(puVar31 + 0x1c) = *(undefined8 *)(puVar30 + 0x1c);
            *(undefined8 *)(puVar31 + 0x1e) = uVar24;
            uVar24 = *(undefined8 *)(puVar30 + 0x22);
            *(undefined8 *)(puVar31 + 0x20) = *(undefined8 *)(puVar30 + 0x20);
            *(undefined8 *)(puVar31 + 0x22) = uVar24;
            uVar24 = *(undefined8 *)(puVar30 + 0x26);
            *(undefined8 *)(puVar31 + 0x24) = *(undefined8 *)(puVar30 + 0x24);
            *(undefined8 *)(puVar31 + 0x26) = uVar24;
            *(undefined8 *)puVar30 = uVar4;
            *(undefined8 *)(puVar30 + 2) = uVar5;
            *(undefined8 *)(puVar30 + 4) = uVar6;
            *(undefined8 *)(puVar30 + 6) = uVar7;
            *(undefined8 *)(puVar30 + 8) = uVar8;
            *(undefined8 *)(puVar30 + 10) = uVar9;
            *(undefined8 *)(puVar30 + 0xc) = uVar10;
            *(undefined8 *)(puVar30 + 0xe) = uVar11;
            *(undefined8 *)(puVar30 + 0x10) = uVar12;
            *(undefined8 *)(puVar30 + 0x12) = uVar13;
            *(undefined8 *)(puVar30 + 0x14) = uVar14;
            *(undefined8 *)(puVar30 + 0x16) = uVar15;
            *(undefined8 *)(puVar30 + 0x18) = uVar16;
            *(undefined8 *)(puVar30 + 0x1a) = uVar17;
            *(undefined8 *)(puVar30 + 0x1c) = uVar18;
            *(undefined8 *)(puVar30 + 0x1e) = uVar19;
            *(undefined8 *)(puVar30 + 0x20) = uVar20;
            *(undefined8 *)(puVar30 + 0x22) = uVar21;
            *(undefined8 *)(puVar30 + 0x24) = uVar22;
            *(undefined8 *)(puVar30 + 0x26) = uVar23;
          }
          iVar26 = iVar27 * 2 + 1;
          iVar25 = iVar27;
          goto joined_r0x000141d0a526;
        }
      }
      iVar26 = iVar3 + -2;
      iVar25 = iVar28 + -1;
      iVar3 = iVar26;
      iVar28 = iVar25;
    } while (-1 < iVar25);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar29 = param_1 + (longlong)param_2 * 0x14;
    do {
      if (param_1 != puVar29) {
        uVar4 = *param_1;
        uVar5 = param_1[1];
        uVar6 = param_1[2];
        uVar7 = param_1[3];
        uVar8 = param_1[4];
        uVar9 = param_1[5];
        uVar10 = param_1[6];
        uVar11 = param_1[7];
        uVar12 = param_1[8];
        uVar13 = param_1[9];
        uVar14 = param_1[10];
        uVar15 = param_1[0xb];
        uVar16 = param_1[0xc];
        uVar17 = param_1[0xd];
        uVar18 = param_1[0xe];
        uVar19 = param_1[0xf];
        uVar20 = param_1[0x10];
        uVar21 = param_1[0x11];
        uVar22 = param_1[0x12];
        uVar23 = param_1[0x13];
        uVar24 = puVar29[1];
        *param_1 = *puVar29;
        param_1[1] = uVar24;
        uVar24 = puVar29[3];
        param_1[2] = puVar29[2];
        param_1[3] = uVar24;
        uVar24 = puVar29[5];
        param_1[4] = puVar29[4];
        param_1[5] = uVar24;
        uVar24 = puVar29[7];
        param_1[6] = puVar29[6];
        param_1[7] = uVar24;
        uVar24 = puVar29[9];
        param_1[8] = puVar29[8];
        param_1[9] = uVar24;
        uVar24 = puVar29[0xb];
        param_1[10] = puVar29[10];
        param_1[0xb] = uVar24;
        uVar24 = puVar29[0xd];
        param_1[0xc] = puVar29[0xc];
        param_1[0xd] = uVar24;
        uVar24 = puVar29[0xf];
        param_1[0xe] = puVar29[0xe];
        param_1[0xf] = uVar24;
        uVar24 = puVar29[0x11];
        param_1[0x10] = puVar29[0x10];
        param_1[0x11] = uVar24;
        uVar24 = puVar29[0x13];
        param_1[0x12] = puVar29[0x12];
        param_1[0x13] = uVar24;
        *puVar29 = uVar4;
        puVar29[1] = uVar5;
        puVar29[2] = uVar6;
        puVar29[3] = uVar7;
        puVar29[4] = uVar8;
        puVar29[5] = uVar9;
        puVar29[6] = uVar10;
        puVar29[7] = uVar11;
        puVar29[8] = uVar12;
        puVar29[9] = uVar13;
        puVar29[10] = uVar14;
        puVar29[0xb] = uVar15;
        puVar29[0xc] = uVar16;
        puVar29[0xd] = uVar17;
        puVar29[0xe] = uVar18;
        puVar29[0xf] = uVar19;
        puVar29[0x10] = uVar20;
        puVar29[0x11] = uVar21;
        puVar29[0x12] = uVar22;
        puVar29[0x13] = uVar23;
      }
      iVar25 = 0;
      if (1 < param_2) {
        do {
          iVar3 = iVar25 * 2;
          iVar26 = iVar3 + 1;
          if (iVar3 + 2 < param_2) {
            fVar1 = *(float *)(((longlong)iVar3 + 2) * 0xa0 + 0x1c + (longlong)param_1);
            fVar2 = *(float *)((longlong)iVar26 * 0xa0 + 0x1c + (longlong)param_1);
            if (fVar1 == fVar2) {
              bVar32 = *(uint *)(param_1 + ((longlong)iVar3 + 2) * 0x14) <
                       *(uint *)(param_1 + (longlong)iVar26 * 0x14);
            }
            else {
              bVar32 = fVar1 < fVar2;
            }
            if (bVar32) {
              iVar26 = iVar3;
            }
            iVar26 = iVar26 + 1;
          }
          puVar31 = (uint *)(param_1 + (longlong)iVar25 * 0x14);
          puVar30 = (uint *)(param_1 + (longlong)iVar26 * 0x14);
          if ((float)puVar31[7] == (float)puVar30[7]) {
            bVar32 = *puVar31 < *puVar30;
          }
          else {
            bVar32 = (float)puVar31[7] < (float)puVar30[7];
          }
          if (!bVar32) break;
          if (puVar31 != puVar30) {
            uVar4 = *(undefined8 *)puVar31;
            uVar5 = *(undefined8 *)(puVar31 + 2);
            uVar6 = *(undefined8 *)(puVar31 + 4);
            uVar7 = *(undefined8 *)(puVar31 + 6);
            uVar8 = *(undefined8 *)(puVar31 + 8);
            uVar9 = *(undefined8 *)(puVar31 + 10);
            uVar10 = *(undefined8 *)(puVar31 + 0xc);
            uVar11 = *(undefined8 *)(puVar31 + 0xe);
            uVar12 = *(undefined8 *)(puVar31 + 0x10);
            uVar13 = *(undefined8 *)(puVar31 + 0x12);
            uVar14 = *(undefined8 *)(puVar31 + 0x14);
            uVar15 = *(undefined8 *)(puVar31 + 0x16);
            uVar16 = *(undefined8 *)(puVar31 + 0x18);
            uVar17 = *(undefined8 *)(puVar31 + 0x1a);
            uVar18 = *(undefined8 *)(puVar31 + 0x1c);
            uVar19 = *(undefined8 *)(puVar31 + 0x1e);
            uVar20 = *(undefined8 *)(puVar31 + 0x20);
            uVar21 = *(undefined8 *)(puVar31 + 0x22);
            uVar22 = *(undefined8 *)(puVar31 + 0x24);
            uVar23 = *(undefined8 *)(puVar31 + 0x26);
            uVar24 = *(undefined8 *)(puVar30 + 2);
            *(undefined8 *)puVar31 = *(undefined8 *)puVar30;
            *(undefined8 *)(puVar31 + 2) = uVar24;
            uVar24 = *(undefined8 *)(puVar30 + 6);
            *(undefined8 *)(puVar31 + 4) = *(undefined8 *)(puVar30 + 4);
            *(undefined8 *)(puVar31 + 6) = uVar24;
            uVar24 = *(undefined8 *)(puVar30 + 10);
            *(undefined8 *)(puVar31 + 8) = *(undefined8 *)(puVar30 + 8);
            *(undefined8 *)(puVar31 + 10) = uVar24;
            uVar24 = *(undefined8 *)(puVar30 + 0xe);
            *(undefined8 *)(puVar31 + 0xc) = *(undefined8 *)(puVar30 + 0xc);
            *(undefined8 *)(puVar31 + 0xe) = uVar24;
            uVar24 = *(undefined8 *)(puVar30 + 0x12);
            *(undefined8 *)(puVar31 + 0x10) = *(undefined8 *)(puVar30 + 0x10);
            *(undefined8 *)(puVar31 + 0x12) = uVar24;
            uVar24 = *(undefined8 *)(puVar30 + 0x16);
            *(undefined8 *)(puVar31 + 0x14) = *(undefined8 *)(puVar30 + 0x14);
            *(undefined8 *)(puVar31 + 0x16) = uVar24;
            uVar24 = *(undefined8 *)(puVar30 + 0x1a);
            *(undefined8 *)(puVar31 + 0x18) = *(undefined8 *)(puVar30 + 0x18);
            *(undefined8 *)(puVar31 + 0x1a) = uVar24;
            uVar24 = *(undefined8 *)(puVar30 + 0x1e);
            *(undefined8 *)(puVar31 + 0x1c) = *(undefined8 *)(puVar30 + 0x1c);
            *(undefined8 *)(puVar31 + 0x1e) = uVar24;
            uVar24 = *(undefined8 *)(puVar30 + 0x22);
            *(undefined8 *)(puVar31 + 0x20) = *(undefined8 *)(puVar30 + 0x20);
            *(undefined8 *)(puVar31 + 0x22) = uVar24;
            uVar24 = *(undefined8 *)(puVar30 + 0x26);
            *(undefined8 *)(puVar31 + 0x24) = *(undefined8 *)(puVar30 + 0x24);
            *(undefined8 *)(puVar31 + 0x26) = uVar24;
            *(undefined8 *)puVar30 = uVar4;
            *(undefined8 *)(puVar30 + 2) = uVar5;
            *(undefined8 *)(puVar30 + 4) = uVar6;
            *(undefined8 *)(puVar30 + 6) = uVar7;
            *(undefined8 *)(puVar30 + 8) = uVar8;
            *(undefined8 *)(puVar30 + 10) = uVar9;
            *(undefined8 *)(puVar30 + 0xc) = uVar10;
            *(undefined8 *)(puVar30 + 0xe) = uVar11;
            *(undefined8 *)(puVar30 + 0x10) = uVar12;
            *(undefined8 *)(puVar30 + 0x12) = uVar13;
            *(undefined8 *)(puVar30 + 0x14) = uVar14;
            *(undefined8 *)(puVar30 + 0x16) = uVar15;
            *(undefined8 *)(puVar30 + 0x18) = uVar16;
            *(undefined8 *)(puVar30 + 0x1a) = uVar17;
            *(undefined8 *)(puVar30 + 0x1c) = uVar18;
            *(undefined8 *)(puVar30 + 0x1e) = uVar19;
            *(undefined8 *)(puVar30 + 0x20) = uVar20;
            *(undefined8 *)(puVar30 + 0x22) = uVar21;
            *(undefined8 *)(puVar30 + 0x24) = uVar22;
            *(undefined8 *)(puVar30 + 0x26) = uVar23;
          }
          iVar25 = iVar26;
        } while (iVar26 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar29 = puVar29 + -0x14;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 141d0aac0 IntroSortInternal<`FScene::FindClosestReflectionCaptures'::`2'::FReflectionCaptureDistIndex,FIdentityFunctor,TDereferenceWrapper<`FScene::FindClosestReflectionCaptures'::`2'::FReflectionCaptureDistIndex,<lambda_6ddd521d10b67a2a98310523add206df>_>_> body=739 status=ok
// SIG undefined IntroSortInternal<`FScene::FindClosestReflectionCaptures'::`2'::FReflectionCaptureDistIndex,FIdentityFunctor,TDereferenceWrapper<`FScene::FindClosestReflectionCaptures'::`2'::FReflectionCaptureDistIndex,<lambda_6ddd521d10b67a2a98310523add206df>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<_FScene::FindClosestReflectionCaptures_::_2_::FReflectionCaptureDistIndex,FIdentityFunctor,TDereferenceWrapper<_FScene::FindClosestReflectionCaptures_::_2_::FReflectionCaptureDistIndex,<lambda_6ddd521d10b67a2a98310523add206df>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  float fVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  bool bVar15;
  float fVar16;
  undefined1 auStack_368 [48];
  undefined8 local_338;
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
    pauVar9 = (undefined1 (*) [16])&local_328;
    do {
      uVar2 = *(undefined8 *)pauVar9[1];
      local_338._0_4_ = (int)uVar2;
      pauVar14 = SUB168(*pauVar9,0);
      pauVar12 = SUB168(*pauVar9,8);
      lVar7 = ((longlong)pauVar12 - (longlong)pauVar14 >> 4) + 1;
      pauVar13 = pauVar14;
      if ((int)local_338 != 0) {
LAB_141d0ab90:
        if (8 < lVar7) {
          pauVar14 = pauVar13 + lVar7 / 2;
          if (pauVar14 != pauVar13) {
            uVar4 = *(undefined4 *)(*pauVar13 + 4);
            uVar5 = *(undefined4 *)(*pauVar13 + 8);
            uVar6 = *(undefined4 *)(*pauVar13 + 0xc);
            auVar3 = *pauVar14;
            *(undefined4 *)*pauVar14 = *(undefined4 *)*pauVar13;
            *(undefined4 *)(*pauVar14 + 4) = uVar4;
            *(undefined4 *)(*pauVar14 + 8) = uVar5;
            *(undefined4 *)(*pauVar14 + 0xc) = uVar6;
            *pauVar13 = auVar3;
          }
          pauVar10 = pauVar12 + 1;
          pauVar14 = pauVar13;
LAB_141d0abc6:
          pauVar8 = pauVar14;
          pauVar14 = pauVar8 + 1;
          if (pauVar14 <= pauVar12) goto code_r0x000141d0abcf;
          goto LAB_141d0ac00;
        }
        for (; pauVar10 = pauVar13, pauVar14 = pauVar13, pauVar13 < pauVar12;
            pauVar12 = pauVar12 + -1) {
          while (pauVar8 = pauVar10, pauVar14 = pauVar14 + 1, pauVar14 <= pauVar12) {
            fVar16 = *(float *)(*(longlong *)(*pauVar8 + 8) + 0x2c);
            fVar1 = *(float *)(*(longlong *)(*pauVar14 + 8) + 0x2c);
            if (fVar16 == fVar1) {
              bVar15 = *(uint *)(*(longlong *)(*pauVar8 + 8) + 0x34) <
                       *(uint *)(*(longlong *)(*pauVar14 + 8) + 0x34);
            }
            else {
              bVar15 = fVar16 < fVar1;
            }
            pauVar10 = pauVar14;
            if (!bVar15) {
              pauVar10 = pauVar8;
            }
          }
          if (pauVar8 != pauVar12) {
            uVar2 = *(undefined8 *)(*pauVar12 + 8);
            auVar3 = *pauVar8;
            *(undefined8 *)*pauVar8 = *(undefined8 *)*pauVar12;
            *(undefined8 *)(*pauVar8 + 8) = uVar2;
            *pauVar12 = auVar3;
          }
        }
        goto LAB_141d0acf0;
      }
LAB_141d0ace1:
      local_338 = uVar2;
      HeapSortInternal<_FScene::FindClosestReflectionCaptures_::_2_::FReflectionCaptureDistIndex,FIdentityFunctor,TDereferenceWrapper<_FScene::FindClosestReflectionCaptures_::_2_::FReflectionCaptureDistIndex,<lambda_6ddd521d10b67a2a98310523add206df>_>_>
                (pauVar14,lVar7,param_3,param_4);
LAB_141d0acf0:
      pauVar9 = (undefined1 (*) [16])(pauVar9[-2] + 8);
    } while ((undefined1 (*) [16])&local_328 <= pauVar9);
  }
  return;
code_r0x000141d0abcf:
  fVar16 = *(float *)(*(longlong *)(*pauVar13 + 8) + 0x2c);
  fVar1 = *(float *)(*(longlong *)(pauVar8[1] + 8) + 0x2c);
  if (fVar16 == fVar1) {
    bVar15 = *(uint *)(*(longlong *)(*pauVar13 + 8) + 0x34) <
             *(uint *)(*(longlong *)(pauVar8[1] + 8) + 0x34);
  }
  else {
    bVar15 = fVar16 < fVar1;
  }
  if (!bVar15) goto LAB_141d0abc6;
LAB_141d0ac00:
  do {
    pauVar11 = pauVar10;
    pauVar10 = pauVar11 + -1;
    if (pauVar10 <= pauVar13) break;
    fVar16 = *(float *)(*(longlong *)(pauVar11[-1] + 8) + 0x2c);
    fVar1 = *(float *)(*(longlong *)(*pauVar13 + 8) + 0x2c);
    if (fVar16 == fVar1) {
      bVar15 = *(uint *)(*(longlong *)(pauVar11[-1] + 8) + 0x34) <
               *(uint *)(*(longlong *)(*pauVar13 + 8) + 0x34);
    }
    else {
      bVar15 = fVar16 < fVar1;
    }
  } while (!bVar15);
  if (pauVar14 <= pauVar10) {
    if (pauVar14 != pauVar10) {
      uVar4 = *(undefined4 *)(pauVar11[-1] + 4);
      uVar5 = *(undefined4 *)(pauVar11[-1] + 8);
      uVar6 = *(undefined4 *)(pauVar11[-1] + 0xc);
      auVar3 = *pauVar14;
      *(undefined4 *)*pauVar14 = *(undefined4 *)*pauVar10;
      *(undefined4 *)(pauVar8[1] + 4) = uVar4;
      *(undefined4 *)(pauVar8[1] + 8) = uVar5;
      *(undefined4 *)(pauVar8[1] + 0xc) = uVar6;
      *pauVar10 = auVar3;
    }
    goto LAB_141d0abc6;
  }
  if (pauVar13 != pauVar10) {
    uVar4 = *(undefined4 *)(pauVar11[-1] + 4);
    uVar5 = *(undefined4 *)(pauVar11[-1] + 8);
    uVar6 = *(undefined4 *)(pauVar11[-1] + 0xc);
    auVar3 = *pauVar13;
    *(undefined4 *)*pauVar13 = *(undefined4 *)*pauVar10;
    *(undefined4 *)(*pauVar13 + 4) = uVar4;
    *(undefined4 *)(*pauVar13 + 8) = uVar5;
    *(undefined4 *)(*pauVar13 + 0xc) = uVar6;
    *pauVar10 = auVar3;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)pauVar10 + (-0x10 - (longlong)pauVar13) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pauVar12 - (longlong)pauVar14 & 0xfffffffffffffff0U)) {
    if (pauVar14 < pauVar12) {
      *(undefined1 (**) [16])*pauVar9 = pauVar14;
      *(undefined1 (**) [16])(*pauVar9 + 8) = pauVar12;
      *(int *)pauVar9[1] = (int)local_338;
      pauVar9 = (undefined1 (*) [16])(pauVar9[1] + 8);
    }
    if (pauVar10 <= pauVar13 + 1) goto LAB_141d0acf0;
    pauVar12 = pauVar11 + -2;
    pauVar14 = pauVar13;
  }
  else {
    if (pauVar13 + 1 < pauVar10) {
      *(undefined1 (**) [16])*pauVar9 = pauVar13;
      *(undefined1 (**) [16])(*pauVar9 + 8) = pauVar11 + -2;
      *(int *)pauVar9[1] = (int)local_338;
      pauVar9 = (undefined1 (*) [16])(pauVar9[1] + 8);
    }
    if (pauVar12 <= pauVar14) goto LAB_141d0acf0;
  }
  lVar7 = ((longlong)pauVar12 - (longlong)pauVar14 >> 4) + 1;
  pauVar13 = pauVar14;
  if ((int)local_338 == 0) goto LAB_141d0ace1;
  goto LAB_141d0ab90;
}



// FUNCTION 141d0adb0 IntroSortInternal<FReflectionCaptureSortData,FIdentityFunctor,TDereferenceWrapper<FReflectionCaptureSortData,TLess<FReflectionCaptureSortData>_>_> body=2085 status=ok
// SIG undefined IntroSortInternal<FReflectionCaptureSortData,FIdentityFunctor,TDereferenceWrapper<FReflectionCaptureSortData,TLess<FReflectionCaptureSortData>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FReflectionCaptureSortData,FIdentityFunctor,TDereferenceWrapper<FReflectionCaptureSortData,TLess<FReflectionCaptureSortData>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  undefined1 (*pauVar13) [16];
  bool bVar14;
  float fVar15;
  undefined1 auStack_5f8 [48];
  undefined8 local_5c8;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
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
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_5f8;
    lStack_330 = param_2 * 0xa0 + -0xa0 + param_1;
    fVar15 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar15 = fVar15 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar15 = ::_guard_xfg_dispatch_icall_nop(fVar15);
    local_328 = (undefined4)(longlong)(fVar15 + fVar15);
    ::_guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    pauVar13 = (undefined1 (*) [16])&local_338;
    do {
      uVar1 = *(undefined8 *)pauVar13[1];
      local_5c8._0_4_ = (int)uVar1;
      puVar12 = SUB168(*pauVar13,0);
      puVar7 = SUB168(*pauVar13,8);
      lVar6 = ((longlong)puVar7 - (longlong)puVar12) / 0xa0 + 1;
      puVar11 = puVar12;
      if ((int)local_5c8 != 0) {
LAB_141d0aeb0:
        if (8 < lVar6) {
          if (lVar6 < 0) {
            lVar6 = lVar6 + 1;
          }
          puVar12 = puVar11 + (lVar6 >> 1) * 0x28;
          if (puVar12 != puVar11) {
            local_5b8 = *(undefined8 *)puVar12;
            uStack_5b0 = *(undefined8 *)(puVar12 + 2);
            local_5a8 = *(undefined8 *)(puVar12 + 4);
            uStack_5a0 = *(undefined8 *)(puVar12 + 6);
            local_598 = *(undefined8 *)(puVar12 + 8);
            uStack_590 = *(undefined8 *)(puVar12 + 10);
            local_588 = *(undefined8 *)(puVar12 + 0xc);
            uStack_580 = *(undefined8 *)(puVar12 + 0xe);
            local_578 = *(undefined8 *)(puVar12 + 0x10);
            uStack_570 = *(undefined8 *)(puVar12 + 0x12);
            local_568 = *(undefined8 *)(puVar12 + 0x14);
            uStack_560 = *(undefined8 *)(puVar12 + 0x16);
            local_558 = *(undefined8 *)(puVar12 + 0x18);
            uStack_550 = *(undefined8 *)(puVar12 + 0x1a);
            local_548 = *(undefined8 *)(puVar12 + 0x1c);
            uStack_540 = *(undefined8 *)(puVar12 + 0x1e);
            uVar2 = *(undefined8 *)(puVar12 + 0x20);
            uVar3 = *(undefined8 *)(puVar12 + 0x22);
            local_528 = *(undefined8 *)*(undefined1 (*) [16])(puVar12 + 0x24);
            uStack_520 = *(undefined8 *)(puVar12 + 0x26);
            auVar5 = *(undefined1 (*) [16])(puVar12 + 0x24);
            uVar4 = *(undefined8 *)(puVar11 + 2);
            *(undefined8 *)puVar12 = *(undefined8 *)puVar11;
            *(undefined8 *)(puVar12 + 2) = uVar4;
            uVar4 = *(undefined8 *)(puVar11 + 6);
            *(undefined8 *)(puVar12 + 4) = *(undefined8 *)(puVar11 + 4);
            *(undefined8 *)(puVar12 + 6) = uVar4;
            uVar4 = *(undefined8 *)(puVar11 + 10);
            *(undefined8 *)(puVar12 + 8) = *(undefined8 *)(puVar11 + 8);
            *(undefined8 *)(puVar12 + 10) = uVar4;
            uVar4 = *(undefined8 *)(puVar11 + 0xe);
            *(undefined8 *)(puVar12 + 0xc) = *(undefined8 *)(puVar11 + 0xc);
            *(undefined8 *)(puVar12 + 0xe) = uVar4;
            uVar4 = *(undefined8 *)(puVar11 + 0x12);
            *(undefined8 *)(puVar12 + 0x10) = *(undefined8 *)(puVar11 + 0x10);
            *(undefined8 *)(puVar12 + 0x12) = uVar4;
            uVar4 = *(undefined8 *)(puVar11 + 0x16);
            *(undefined8 *)(puVar12 + 0x14) = *(undefined8 *)(puVar11 + 0x14);
            *(undefined8 *)(puVar12 + 0x16) = uVar4;
            uVar4 = *(undefined8 *)(puVar11 + 0x1a);
            *(undefined8 *)(puVar12 + 0x18) = *(undefined8 *)(puVar11 + 0x18);
            *(undefined8 *)(puVar12 + 0x1a) = uVar4;
            uVar4 = *(undefined8 *)(puVar11 + 0x1e);
            *(undefined8 *)(puVar12 + 0x1c) = *(undefined8 *)(puVar11 + 0x1c);
            *(undefined8 *)(puVar12 + 0x1e) = uVar4;
            uVar4 = *(undefined8 *)(puVar11 + 0x22);
            *(undefined8 *)(puVar12 + 0x20) = *(undefined8 *)(puVar11 + 0x20);
            *(undefined8 *)(puVar12 + 0x22) = uVar4;
            uVar4 = *(undefined8 *)(puVar11 + 0x26);
            *(undefined8 *)(puVar12 + 0x24) = *(undefined8 *)(puVar11 + 0x24);
            *(undefined8 *)(puVar12 + 0x26) = uVar4;
            *(undefined8 *)puVar11 = local_5b8;
            *(undefined8 *)(puVar11 + 2) = uStack_5b0;
            *(undefined8 *)(puVar11 + 4) = local_5a8;
            *(undefined8 *)(puVar11 + 6) = uStack_5a0;
            *(undefined8 *)(puVar11 + 8) = local_598;
            *(undefined8 *)(puVar11 + 10) = uStack_590;
            *(undefined8 *)(puVar11 + 0xc) = local_588;
            *(undefined8 *)(puVar11 + 0xe) = uStack_580;
            *(undefined8 *)(puVar11 + 0x10) = local_578;
            *(undefined8 *)(puVar11 + 0x12) = uStack_570;
            *(undefined8 *)(puVar11 + 0x14) = local_568;
            *(undefined8 *)(puVar11 + 0x16) = uStack_560;
            *(undefined8 *)(puVar11 + 0x18) = local_558;
            *(undefined8 *)(puVar11 + 0x1a) = uStack_550;
            *(undefined8 *)(puVar11 + 0x1c) = local_548;
            *(undefined8 *)(puVar11 + 0x1e) = uStack_540;
            local_538._0_4_ = (uint)uVar2;
            local_538._4_4_ = (uint)((ulonglong)uVar2 >> 0x20);
            uStack_530._0_4_ = (uint)uVar3;
            uStack_530._4_4_ = (uint)((ulonglong)uVar3 >> 0x20);
            puVar11[0x20] = (uint)local_538;
            puVar11[0x21] = local_538._4_4_;
            puVar11[0x22] = (uint)uStack_530;
            puVar11[0x23] = uStack_530._4_4_;
            *(undefined1 (*) [16])(puVar11 + 0x24) = auVar5;
            local_538 = uVar2;
            uStack_530 = uVar3;
          }
          puVar9 = puVar7 + 0x28;
          puVar12 = puVar11;
LAB_141d0b020:
          puVar8 = puVar12;
          puVar12 = puVar8 + 0x28;
          if (puVar12 <= puVar7) goto code_r0x000141d0b02c;
          goto LAB_141d0b052;
        }
        for (; puVar9 = puVar11, puVar12 = puVar11, puVar11 < puVar7; puVar7 = puVar7 + -0x28) {
          while (puVar8 = puVar9, puVar12 = puVar12 + 0x28, puVar12 <= puVar7) {
            if ((float)puVar8[7] == (float)puVar12[7]) {
              bVar14 = *puVar8 < *puVar12;
            }
            else {
              bVar14 = (float)puVar8[7] < (float)puVar12[7];
            }
            puVar9 = puVar12;
            if (!bVar14) {
              puVar9 = puVar8;
            }
          }
          if (puVar8 != puVar7) {
            local_3d8 = *(undefined8 *)puVar8;
            uStack_3d0 = *(undefined8 *)(puVar8 + 2);
            local_3c8 = *(undefined8 *)(puVar8 + 4);
            uStack_3c0 = *(undefined8 *)(puVar8 + 6);
            local_3b8 = *(undefined8 *)(puVar8 + 8);
            uStack_3b0 = *(undefined8 *)(puVar8 + 10);
            local_3a8 = *(undefined8 *)(puVar8 + 0xc);
            uStack_3a0 = *(undefined8 *)(puVar8 + 0xe);
            local_398 = *(undefined8 *)(puVar8 + 0x10);
            uStack_390 = *(undefined8 *)(puVar8 + 0x12);
            local_388 = *(undefined8 *)(puVar8 + 0x14);
            uStack_380 = *(undefined8 *)(puVar8 + 0x16);
            local_378 = *(undefined8 *)(puVar8 + 0x18);
            uStack_370 = *(undefined8 *)(puVar8 + 0x1a);
            local_368 = *(undefined8 *)(puVar8 + 0x1c);
            uStack_360 = *(undefined8 *)(puVar8 + 0x1e);
            local_358 = *(undefined8 *)(puVar8 + 0x20);
            uStack_350 = *(undefined8 *)(puVar8 + 0x22);
            local_348 = *(undefined8 *)*(undefined1 (*) [16])(puVar8 + 0x24);
            uStack_340 = *(undefined8 *)(puVar8 + 0x26);
            auVar5 = *(undefined1 (*) [16])(puVar8 + 0x24);
            uVar1 = *(undefined8 *)(puVar7 + 2);
            *(undefined8 *)puVar8 = *(undefined8 *)puVar7;
            *(undefined8 *)(puVar8 + 2) = uVar1;
            uVar1 = *(undefined8 *)(puVar7 + 6);
            *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(puVar7 + 4);
            *(undefined8 *)(puVar8 + 6) = uVar1;
            uVar1 = *(undefined8 *)(puVar7 + 10);
            *(undefined8 *)(puVar8 + 8) = *(undefined8 *)(puVar7 + 8);
            *(undefined8 *)(puVar8 + 10) = uVar1;
            uVar1 = *(undefined8 *)(puVar7 + 0xe);
            *(undefined8 *)(puVar8 + 0xc) = *(undefined8 *)(puVar7 + 0xc);
            *(undefined8 *)(puVar8 + 0xe) = uVar1;
            uVar1 = *(undefined8 *)(puVar7 + 0x12);
            *(undefined8 *)(puVar8 + 0x10) = *(undefined8 *)(puVar7 + 0x10);
            *(undefined8 *)(puVar8 + 0x12) = uVar1;
            uVar1 = *(undefined8 *)(puVar7 + 0x16);
            *(undefined8 *)(puVar8 + 0x14) = *(undefined8 *)(puVar7 + 0x14);
            *(undefined8 *)(puVar8 + 0x16) = uVar1;
            uVar1 = *(undefined8 *)(puVar7 + 0x1a);
            *(undefined8 *)(puVar8 + 0x18) = *(undefined8 *)(puVar7 + 0x18);
            *(undefined8 *)(puVar8 + 0x1a) = uVar1;
            uVar1 = *(undefined8 *)(puVar7 + 0x1e);
            *(undefined8 *)(puVar8 + 0x1c) = *(undefined8 *)(puVar7 + 0x1c);
            *(undefined8 *)(puVar8 + 0x1e) = uVar1;
            uVar1 = *(undefined8 *)(puVar7 + 0x22);
            *(undefined8 *)(puVar8 + 0x20) = *(undefined8 *)(puVar7 + 0x20);
            *(undefined8 *)(puVar8 + 0x22) = uVar1;
            uVar1 = *(undefined8 *)(puVar7 + 0x26);
            *(undefined8 *)(puVar8 + 0x24) = *(undefined8 *)(puVar7 + 0x24);
            *(undefined8 *)(puVar8 + 0x26) = uVar1;
            *(undefined8 *)puVar7 = local_3d8;
            *(undefined8 *)(puVar7 + 2) = uStack_3d0;
            *(undefined8 *)(puVar7 + 4) = local_3c8;
            *(undefined8 *)(puVar7 + 6) = uStack_3c0;
            *(undefined8 *)(puVar7 + 8) = local_3b8;
            *(undefined8 *)(puVar7 + 10) = uStack_3b0;
            *(undefined8 *)(puVar7 + 0xc) = local_3a8;
            *(undefined8 *)(puVar7 + 0xe) = uStack_3a0;
            *(undefined8 *)(puVar7 + 0x10) = local_398;
            *(undefined8 *)(puVar7 + 0x12) = uStack_390;
            *(undefined8 *)(puVar7 + 0x14) = local_388;
            *(undefined8 *)(puVar7 + 0x16) = uStack_380;
            *(undefined8 *)(puVar7 + 0x18) = local_378;
            *(undefined8 *)(puVar7 + 0x1a) = uStack_370;
            *(undefined8 *)(puVar7 + 0x1c) = local_368;
            *(undefined8 *)(puVar7 + 0x1e) = uStack_360;
            *(undefined8 *)(puVar7 + 0x20) = local_358;
            *(undefined8 *)(puVar7 + 0x22) = uStack_350;
            *(undefined1 (*) [16])(puVar7 + 0x24) = auVar5;
          }
        }
        goto LAB_141d0b3f2;
      }
LAB_141d0b3e3:
      local_5c8 = uVar1;
      HeapSortInternal<FReflectionCaptureSortData,FIdentityFunctor,TDereferenceWrapper<FReflectionCaptureSortData,TLess<FReflectionCaptureSortData>_>_>
                (puVar12,lVar6,param_3,param_4);
LAB_141d0b3f2:
      pauVar13 = (undefined1 (*) [16])(pauVar13[-2] + 8);
    } while ((undefined1 (*) [16])&local_338 <= pauVar13);
  }
  return;
code_r0x000141d0b02c:
  if ((float)puVar11[7] == (float)puVar8[0x2f]) {
    bVar14 = *puVar11 < *puVar12;
  }
  else {
    bVar14 = (float)puVar11[7] < (float)puVar8[0x2f];
  }
  if (!bVar14) goto LAB_141d0b020;
LAB_141d0b052:
  do {
    puVar10 = puVar9;
    puVar9 = puVar10 + -0x28;
    if (puVar9 <= puVar11) break;
    if ((float)puVar10[-0x21] == (float)puVar11[7]) {
      bVar14 = *puVar9 < *puVar11;
    }
    else {
      bVar14 = (float)puVar10[-0x21] < (float)puVar11[7];
    }
  } while (!bVar14);
  if (puVar12 <= puVar9) {
    if (puVar12 != puVar9) {
      local_518 = *(undefined8 *)puVar12;
      uStack_510 = *(undefined8 *)(puVar8 + 0x2a);
      local_508 = *(undefined8 *)(puVar8 + 0x2c);
      uStack_500 = *(undefined8 *)(puVar8 + 0x2e);
      local_4f8 = *(undefined8 *)(puVar8 + 0x30);
      uStack_4f0 = *(undefined8 *)(puVar8 + 0x32);
      local_4e8 = *(undefined8 *)(puVar8 + 0x34);
      uStack_4e0 = *(undefined8 *)(puVar8 + 0x36);
      local_4d8 = *(undefined8 *)(puVar8 + 0x38);
      uStack_4d0 = *(undefined8 *)(puVar8 + 0x3a);
      local_4c8 = *(undefined8 *)(puVar8 + 0x3c);
      uStack_4c0 = *(undefined8 *)(puVar8 + 0x3e);
      local_4b8 = *(undefined8 *)(puVar8 + 0x40);
      uStack_4b0 = *(undefined8 *)(puVar8 + 0x42);
      local_4a8 = *(undefined8 *)(puVar8 + 0x44);
      uStack_4a0 = *(undefined8 *)(puVar8 + 0x46);
      uVar2 = *(undefined8 *)(puVar8 + 0x48);
      uVar3 = *(undefined8 *)(puVar8 + 0x4a);
      local_488 = *(undefined8 *)*(undefined1 (*) [16])(puVar8 + 0x4c);
      uStack_480 = *(undefined8 *)(puVar8 + 0x4e);
      auVar5 = *(undefined1 (*) [16])(puVar8 + 0x4c);
      uVar4 = *(undefined8 *)(puVar10 + -0x26);
      *(undefined8 *)puVar12 = *(undefined8 *)puVar9;
      *(undefined8 *)(puVar8 + 0x2a) = uVar4;
      uVar4 = *(undefined8 *)(puVar10 + -0x22);
      *(undefined8 *)(puVar8 + 0x2c) = *(undefined8 *)(puVar10 + -0x24);
      *(undefined8 *)(puVar8 + 0x2e) = uVar4;
      uVar4 = *(undefined8 *)(puVar10 + -0x1e);
      *(undefined8 *)(puVar8 + 0x30) = *(undefined8 *)(puVar10 + -0x20);
      *(undefined8 *)(puVar8 + 0x32) = uVar4;
      uVar4 = *(undefined8 *)(puVar10 + -0x1a);
      *(undefined8 *)(puVar8 + 0x34) = *(undefined8 *)(puVar10 + -0x1c);
      *(undefined8 *)(puVar8 + 0x36) = uVar4;
      uVar4 = *(undefined8 *)(puVar10 + -0x16);
      *(undefined8 *)(puVar8 + 0x38) = *(undefined8 *)(puVar10 + -0x18);
      *(undefined8 *)(puVar8 + 0x3a) = uVar4;
      uVar4 = *(undefined8 *)(puVar10 + -0x12);
      *(undefined8 *)(puVar8 + 0x3c) = *(undefined8 *)(puVar10 + -0x14);
      *(undefined8 *)(puVar8 + 0x3e) = uVar4;
      uVar4 = *(undefined8 *)(puVar10 + -0xe);
      *(undefined8 *)(puVar8 + 0x40) = *(undefined8 *)(puVar10 + -0x10);
      *(undefined8 *)(puVar8 + 0x42) = uVar4;
      uVar4 = *(undefined8 *)(puVar10 + -10);
      *(undefined8 *)(puVar8 + 0x44) = *(undefined8 *)(puVar10 + -0xc);
      *(undefined8 *)(puVar8 + 0x46) = uVar4;
      uVar4 = *(undefined8 *)(puVar10 + -6);
      *(undefined8 *)(puVar8 + 0x48) = *(undefined8 *)(puVar10 + -8);
      *(undefined8 *)(puVar8 + 0x4a) = uVar4;
      uVar4 = *(undefined8 *)(puVar10 + -2);
      *(undefined8 *)(puVar8 + 0x4c) = *(undefined8 *)(puVar10 + -4);
      *(undefined8 *)(puVar8 + 0x4e) = uVar4;
      *(undefined8 *)puVar9 = local_518;
      *(undefined8 *)(puVar10 + -0x26) = uStack_510;
      *(undefined8 *)(puVar10 + -0x24) = local_508;
      *(undefined8 *)(puVar10 + -0x22) = uStack_500;
      *(undefined8 *)(puVar10 + -0x20) = local_4f8;
      *(undefined8 *)(puVar10 + -0x1e) = uStack_4f0;
      *(undefined8 *)(puVar10 + -0x1c) = local_4e8;
      *(undefined8 *)(puVar10 + -0x1a) = uStack_4e0;
      *(undefined8 *)(puVar10 + -0x18) = local_4d8;
      *(undefined8 *)(puVar10 + -0x16) = uStack_4d0;
      *(undefined8 *)(puVar10 + -0x14) = local_4c8;
      *(undefined8 *)(puVar10 + -0x12) = uStack_4c0;
      *(undefined8 *)(puVar10 + -0x10) = local_4b8;
      *(undefined8 *)(puVar10 + -0xe) = uStack_4b0;
      *(undefined8 *)(puVar10 + -0xc) = local_4a8;
      *(undefined8 *)(puVar10 + -10) = uStack_4a0;
      local_498._0_4_ = (uint)uVar2;
      local_498._4_4_ = (uint)((ulonglong)uVar2 >> 0x20);
      uStack_490._0_4_ = (uint)uVar3;
      uStack_490._4_4_ = (uint)((ulonglong)uVar3 >> 0x20);
      puVar10[-8] = (uint)local_498;
      puVar10[-7] = local_498._4_4_;
      puVar10[-6] = (uint)uStack_490;
      puVar10[-5] = uStack_490._4_4_;
      *(undefined1 (*) [16])(puVar10 + -4) = auVar5;
      local_498 = uVar2;
      uStack_490 = uVar3;
    }
    goto LAB_141d0b020;
  }
  if (puVar11 != puVar9) {
    local_478 = *(undefined8 *)puVar11;
    uStack_470 = *(undefined8 *)(puVar11 + 2);
    local_468 = *(undefined8 *)(puVar11 + 4);
    uStack_460 = *(undefined8 *)(puVar11 + 6);
    local_458 = *(undefined8 *)(puVar11 + 8);
    uStack_450 = *(undefined8 *)(puVar11 + 10);
    local_448 = *(undefined8 *)(puVar11 + 0xc);
    uStack_440 = *(undefined8 *)(puVar11 + 0xe);
    local_438 = *(undefined8 *)(puVar11 + 0x10);
    uStack_430 = *(undefined8 *)(puVar11 + 0x12);
    local_428 = *(undefined8 *)(puVar11 + 0x14);
    uStack_420 = *(undefined8 *)(puVar11 + 0x16);
    local_418 = *(undefined8 *)(puVar11 + 0x18);
    uStack_410 = *(undefined8 *)(puVar11 + 0x1a);
    local_408 = *(undefined8 *)(puVar11 + 0x1c);
    uStack_400 = *(undefined8 *)(puVar11 + 0x1e);
    uVar2 = *(undefined8 *)(puVar11 + 0x20);
    uVar3 = *(undefined8 *)(puVar11 + 0x22);
    local_3e8 = *(undefined8 *)*(undefined1 (*) [16])(puVar11 + 0x24);
    uStack_3e0 = *(undefined8 *)(puVar11 + 0x26);
    auVar5 = *(undefined1 (*) [16])(puVar11 + 0x24);
    uVar4 = *(undefined8 *)(puVar10 + -0x26);
    *(undefined8 *)puVar11 = *(undefined8 *)puVar9;
    *(undefined8 *)(puVar11 + 2) = uVar4;
    uVar4 = *(undefined8 *)(puVar10 + -0x22);
    *(undefined8 *)(puVar11 + 4) = *(undefined8 *)(puVar10 + -0x24);
    *(undefined8 *)(puVar11 + 6) = uVar4;
    uVar4 = *(undefined8 *)(puVar10 + -0x1e);
    *(undefined8 *)(puVar11 + 8) = *(undefined8 *)(puVar10 + -0x20);
    *(undefined8 *)(puVar11 + 10) = uVar4;
    uVar4 = *(undefined8 *)(puVar10 + -0x1a);
    *(undefined8 *)(puVar11 + 0xc) = *(undefined8 *)(puVar10 + -0x1c);
    *(undefined8 *)(puVar11 + 0xe) = uVar4;
    uVar4 = *(undefined8 *)(puVar10 + -0x16);
    *(undefined8 *)(puVar11 + 0x10) = *(undefined8 *)(puVar10 + -0x18);
    *(undefined8 *)(puVar11 + 0x12) = uVar4;
    uVar4 = *(undefined8 *)(puVar10 + -0x12);
    *(undefined8 *)(puVar11 + 0x14) = *(undefined8 *)(puVar10 + -0x14);
    *(undefined8 *)(puVar11 + 0x16) = uVar4;
    uVar4 = *(undefined8 *)(puVar10 + -0xe);
    *(undefined8 *)(puVar11 + 0x18) = *(undefined8 *)(puVar10 + -0x10);
    *(undefined8 *)(puVar11 + 0x1a) = uVar4;
    uVar4 = *(undefined8 *)(puVar10 + -10);
    *(undefined8 *)(puVar11 + 0x1c) = *(undefined8 *)(puVar10 + -0xc);
    *(undefined8 *)(puVar11 + 0x1e) = uVar4;
    uVar4 = *(undefined8 *)(puVar10 + -6);
    *(undefined8 *)(puVar11 + 0x20) = *(undefined8 *)(puVar10 + -8);
    *(undefined8 *)(puVar11 + 0x22) = uVar4;
    uVar4 = *(undefined8 *)(puVar10 + -2);
    *(undefined8 *)(puVar11 + 0x24) = *(undefined8 *)(puVar10 + -4);
    *(undefined8 *)(puVar11 + 0x26) = uVar4;
    *(undefined8 *)puVar9 = local_478;
    *(undefined8 *)(puVar10 + -0x26) = uStack_470;
    *(undefined8 *)(puVar10 + -0x24) = local_468;
    *(undefined8 *)(puVar10 + -0x22) = uStack_460;
    *(undefined8 *)(puVar10 + -0x20) = local_458;
    *(undefined8 *)(puVar10 + -0x1e) = uStack_450;
    *(undefined8 *)(puVar10 + -0x1c) = local_448;
    *(undefined8 *)(puVar10 + -0x1a) = uStack_440;
    *(undefined8 *)(puVar10 + -0x18) = local_438;
    *(undefined8 *)(puVar10 + -0x16) = uStack_430;
    *(undefined8 *)(puVar10 + -0x14) = local_428;
    *(undefined8 *)(puVar10 + -0x12) = uStack_420;
    *(undefined8 *)(puVar10 + -0x10) = local_418;
    *(undefined8 *)(puVar10 + -0xe) = uStack_410;
    local_3f8._0_4_ = (uint)uVar2;
    local_3f8._4_4_ = (uint)((ulonglong)uVar2 >> 0x20);
    uStack_3f0._0_4_ = (uint)uVar3;
    uStack_3f0._4_4_ = (uint)((ulonglong)uVar3 >> 0x20);
    *(undefined8 *)(puVar10 + -0xc) = local_408;
    *(undefined8 *)(puVar10 + -10) = uStack_400;
    puVar10[-8] = (uint)local_3f8;
    puVar10[-7] = local_3f8._4_4_;
    puVar10[-6] = (uint)uStack_3f0;
    puVar10[-5] = uStack_3f0._4_4_;
    *(undefined1 (*) [16])(puVar10 + -4) = auVar5;
    local_3f8 = uVar2;
    uStack_3f0 = uVar3;
  }
  local_5c8._0_4_ = (int)local_5c8 + -1;
  if (((longlong)puVar9 + (-0xa0 - (longlong)puVar11)) / 0xa0 <
      ((longlong)puVar7 - (longlong)puVar12) / 0xa0) {
    if (puVar12 < puVar7) {
      *(uint **)*pauVar13 = puVar12;
      *(uint **)(*pauVar13 + 8) = puVar7;
      *(int *)pauVar13[1] = (int)local_5c8;
      pauVar13 = (undefined1 (*) [16])(pauVar13[1] + 8);
    }
    if (puVar9 <= puVar11 + 0x28) goto LAB_141d0b3f2;
    puVar7 = puVar10 + -0x50;
    puVar12 = puVar11;
  }
  else {
    if (puVar11 + 0x28 < puVar9) {
      *(uint **)*pauVar13 = puVar11;
      *(uint **)(*pauVar13 + 8) = puVar10 + -0x50;
      *(int *)pauVar13[1] = (int)local_5c8;
      pauVar13 = (undefined1 (*) [16])(pauVar13[1] + 8);
    }
    if (puVar7 <= puVar12) goto LAB_141d0b3f2;
  }
  lVar6 = ((longlong)puVar7 - (longlong)puVar12) / 0xa0 + 1;
  puVar11 = puVar12;
  if ((int)local_5c8 == 0) goto LAB_141d0b3e3;
  goto LAB_141d0aeb0;
}



// FUNCTION 141d0b5e0 FUN_141d0b5e0 body=203 status=ok
// SIG undefined FUN_141d0b5e0(void)

undefined8
FUN_141d0b5e0(longlong param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
             char param_7,char param_8)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int aiStackX_10 [2];
  undefined *puStack_18;
  undefined4 uStack_10;
  
  if (param_2 == '\0') {
    if (param_3 == '\0') {
      if (param_4 == '\0') {
        if (param_5 != '\0') {
          uStack_10 = 0;
          if (param_6 == '\0') {
            if (param_7 == '\0') {
              puStack_18 = &DAT_146a8d810;
              if (param_8 == '\0') {
                puStack_18 = &DAT_146a8d960;
              }
            }
            else if (param_8 == '\0') {
              puStack_18 = &DAT_146a8d6c0;
            }
            else {
              puStack_18 = &DAT_146a8d570;
            }
          }
          else if (param_7 == '\0') {
            if (param_8 == '\0') {
              puStack_18 = &DAT_146a8d420;
            }
            else {
              puStack_18 = &DAT_146a8d2d0;
            }
          }
          else if (param_8 == '\0') {
            puStack_18 = &DAT_146a8d180;
          }
          else {
            puStack_18 = &DAT_146a8d030;
          }
          TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
          ::FindId((longlong *)(param_1 + 0x38),aiStackX_10,&puStack_18);
          puVar3 = (undefined8 *)0x0;
          if (aiStackX_10[0] != -1) {
            puVar3 = (undefined8 *)((longlong)aiStackX_10[0] * 0x20 + *(longlong *)(param_1 + 0x38))
            ;
          }
          puVar2 = puVar3 + 2;
          if (puVar3 == (undefined8 *)0x0) {
            puVar2 = (undefined8 *)0x0;
          }
          return *puVar2;
        }
        uVar1 = FUN_141d0c2e0();
        return uVar1;
      }
      if (param_5 != '\0') {
        uStack_10 = 0;
        if (param_6 == '\0') {
          if (param_7 == '\0') {
            puStack_18 = &DAT_146a8c310;
            if (param_8 == '\0') {
              puStack_18 = &DAT_146a8c460;
            }
          }
          else if (param_8 == '\0') {
            puStack_18 = &DAT_146a8c1c0;
          }
          else {
            puStack_18 = &DAT_146a8c070;
          }
        }
        else if (param_7 == '\0') {
          if (param_8 == '\0') {
            puStack_18 = &DAT_146a8bf20;
          }
          else {
            puStack_18 = &DAT_146a8bdd0;
          }
        }
        else if (param_8 == '\0') {
          puStack_18 = &DAT_146a8bc80;
        }
        else {
          puStack_18 = &DAT_146a8bb30;
        }
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId((longlong *)(param_1 + 0x38),aiStackX_10,&puStack_18);
        puVar3 = (undefined8 *)0x0;
        if (aiStackX_10[0] != -1) {
          puVar3 = (undefined8 *)((longlong)aiStackX_10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
        }
        puVar2 = puVar3 + 2;
        if (puVar3 == (undefined8 *)0x0) {
          puVar2 = (undefined8 *)0x0;
        }
        return *puVar2;
      }
      uVar1 = FUN_141d0c140();
      return uVar1;
    }
    if (param_4 == '\0') {
      if (param_5 != '\0') {
        uStack_10 = 0;
        if (param_6 == '\0') {
          if (param_7 == '\0') {
            puStack_18 = &DAT_146a8ae10;
            if (param_8 == '\0') {
              puStack_18 = &DAT_146a8af60;
            }
          }
          else if (param_8 == '\0') {
            puStack_18 = &DAT_146a8acc0;
          }
          else {
            puStack_18 = &DAT_146a8ab70;
          }
        }
        else if (param_7 == '\0') {
          if (param_8 == '\0') {
            puStack_18 = &DAT_146a8aa20;
          }
          else {
            puStack_18 = &DAT_146a8a8d0;
          }
        }
        else if (param_8 == '\0') {
          puStack_18 = &DAT_146a8a780;
        }
        else {
          puStack_18 = &DAT_146a8a630;
        }
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId((longlong *)(param_1 + 0x38),aiStackX_10,&puStack_18);
        puVar3 = (undefined8 *)0x0;
        if (aiStackX_10[0] != -1) {
          puVar3 = (undefined8 *)((longlong)aiStackX_10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
        }
        puVar2 = puVar3 + 2;
        if (puVar3 == (undefined8 *)0x0) {
          puVar2 = (undefined8 *)0x0;
        }
        return *puVar2;
      }
      uVar1 = FUN_141d0bfa0();
      return uVar1;
    }
    if (param_5 != '\0') {
      uStack_10 = 0;
      if (param_6 == '\0') {
        if (param_7 == '\0') {
          puStack_18 = &DAT_146a89910;
          if (param_8 == '\0') {
            puStack_18 = &DAT_146a89a60;
          }
        }
        else if (param_8 == '\0') {
          puStack_18 = &DAT_146a897c0;
        }
        else {
          puStack_18 = &DAT_146a89670;
        }
      }
      else if (param_7 == '\0') {
        if (param_8 == '\0') {
          puStack_18 = &DAT_146a89520;
        }
        else {
          puStack_18 = &DAT_146a893d0;
        }
      }
      else if (param_8 == '\0') {
        puStack_18 = &DAT_146a89280;
      }
      else {
        puStack_18 = &DAT_146a89130;
      }
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId((longlong *)(param_1 + 0x38),aiStackX_10,&puStack_18);
      puVar3 = (undefined8 *)0x0;
      if (aiStackX_10[0] != -1) {
        puVar3 = (undefined8 *)((longlong)aiStackX_10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
      }
      puVar2 = puVar3 + 2;
      if (puVar3 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      return *puVar2;
    }
    uVar1 = FUN_141d0be00();
    return uVar1;
  }
  if (param_3 == '\0') {
    if (param_4 == '\0') {
      if (param_5 != '\0') {
        uStack_10 = 0;
        if (param_6 == '\0') {
          if (param_7 == '\0') {
            puStack_18 = &DAT_146a88410;
            if (param_8 == '\0') {
              puStack_18 = &DAT_146a88560;
            }
          }
          else if (param_8 == '\0') {
            puStack_18 = &DAT_146a882c0;
          }
          else {
            puStack_18 = &DAT_146a88170;
          }
        }
        else if (param_7 == '\0') {
          if (param_8 == '\0') {
            puStack_18 = &DAT_146a88020;
          }
          else {
            puStack_18 = &DAT_146a87ed0;
          }
        }
        else if (param_8 == '\0') {
          puStack_18 = &DAT_146a87d80;
        }
        else {
          puStack_18 = &DAT_146a87c30;
        }
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId((longlong *)(param_1 + 0x38),aiStackX_10,&puStack_18);
        puVar3 = (undefined8 *)0x0;
        if (aiStackX_10[0] != -1) {
          puVar3 = (undefined8 *)((longlong)aiStackX_10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
        }
        puVar2 = puVar3 + 2;
        if (puVar3 == (undefined8 *)0x0) {
          puVar2 = (undefined8 *)0x0;
        }
        return *puVar2;
      }
      uVar1 = FUN_141d0bc60();
      return uVar1;
    }
    if (param_5 != '\0') {
      uStack_10 = 0;
      if (param_6 == '\0') {
        if (param_7 == '\0') {
          puStack_18 = &DAT_146a86f10;
          if (param_8 == '\0') {
            puStack_18 = &DAT_146a87060;
          }
        }
        else if (param_8 == '\0') {
          puStack_18 = &DAT_146a86dc0;
        }
        else {
          puStack_18 = &DAT_146a86c70;
        }
      }
      else if (param_7 == '\0') {
        if (param_8 == '\0') {
          puStack_18 = &DAT_146a86b20;
        }
        else {
          puStack_18 = &DAT_146a869d0;
        }
      }
      else if (param_8 == '\0') {
        puStack_18 = &DAT_146a86880;
      }
      else {
        puStack_18 = &DAT_146a86730;
      }
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId((longlong *)(param_1 + 0x38),aiStackX_10,&puStack_18);
      puVar3 = (undefined8 *)0x0;
      if (aiStackX_10[0] != -1) {
        puVar3 = (undefined8 *)((longlong)aiStackX_10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
      }
      puVar2 = puVar3 + 2;
      if (puVar3 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      return *puVar2;
    }
    uVar1 = FUN_141d0bac0();
    return uVar1;
  }
  if (param_4 == '\0') {
    if (param_5 != '\0') {
      uStack_10 = 0;
      if (param_6 == '\0') {
        if (param_7 == '\0') {
          puStack_18 = &DAT_146a85a10;
          if (param_8 == '\0') {
            puStack_18 = &DAT_146a85b60;
          }
        }
        else if (param_8 == '\0') {
          puStack_18 = &DAT_146a858c0;
        }
        else {
          puStack_18 = &DAT_146a85770;
        }
      }
      else if (param_7 == '\0') {
        if (param_8 == '\0') {
          puStack_18 = &DAT_146a85620;
        }
        else {
          puStack_18 = &DAT_146a854d0;
        }
      }
      else if (param_8 == '\0') {
        puStack_18 = &DAT_146a85380;
      }
      else {
        puStack_18 = &DAT_146a85230;
      }
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId((longlong *)(param_1 + 0x38),aiStackX_10,&puStack_18);
      puVar3 = (undefined8 *)0x0;
      if (aiStackX_10[0] != -1) {
        puVar3 = (undefined8 *)((longlong)aiStackX_10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
      }
      puVar2 = puVar3 + 2;
      if (puVar3 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      return *puVar2;
    }
    uVar1 = FUN_141d0b920();
    return uVar1;
  }
  if (param_5 != '\0') {
    uStack_10 = 0;
    if (param_6 == '\0') {
      if (param_7 == '\0') {
        puStack_18 = &DAT_146a84510;
        if (param_8 == '\0') {
          puStack_18 = &DAT_146a84660;
        }
      }
      else if (param_8 == '\0') {
        puStack_18 = &DAT_146a843c0;
      }
      else {
        puStack_18 = &DAT_146a84270;
      }
    }
    else if (param_7 == '\0') {
      if (param_8 == '\0') {
        puStack_18 = &DAT_146a84120;
      }
      else {
        puStack_18 = &DAT_146a83fd0;
      }
    }
    else if (param_8 == '\0') {
      puStack_18 = &DAT_146a83e80;
    }
    else {
      puStack_18 = &DAT_146a83d30;
    }
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(param_1 + 0x38),aiStackX_10,&puStack_18);
    puVar3 = (undefined8 *)0x0;
    if (aiStackX_10[0] != -1) {
      puVar3 = (undefined8 *)((longlong)aiStackX_10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
    }
    puVar2 = puVar3 + 2;
    if (puVar3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)0x0;
    }
    return *puVar2;
  }
  uVar1 = FUN_141d0b780();
  return uVar1;
}



// FUNCTION 141d0b6b0 FUN_141d0b6b0 body=207 status=ok
// SIG undefined FUN_141d0b6b0(void)

undefined8 FUN_141d0b6b0(longlong param_1,char param_2,char param_3,char param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_10 = 0;
  if (param_2 == '\0') {
    if (param_3 == '\0') {
      local_18 = &DAT_146a84510;
      if (param_4 == '\0') {
        local_18 = &DAT_146a84660;
      }
    }
    else if (param_4 == '\0') {
      local_18 = &DAT_146a843c0;
    }
    else {
      local_18 = &DAT_146a84270;
    }
  }
  else if (param_3 == '\0') {
    if (param_4 == '\0') {
      local_18 = &DAT_146a84120;
    }
    else {
      local_18 = &DAT_146a83fd0;
    }
  }
  else if (param_4 == '\0') {
    local_18 = &DAT_146a83e80;
  }
  else {
    local_18 = &DAT_146a83d30;
  }
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141d0b780 FUN_141d0b780 body=207 status=ok
// SIG undefined FUN_141d0b780(void)

undefined8 FUN_141d0b780(longlong param_1,char param_2,char param_3,char param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_10 = 0;
  if (param_2 == '\0') {
    if (param_3 == '\0') {
      local_18 = &DAT_146a84f90;
      if (param_4 == '\0') {
        local_18 = &DAT_146a850e0;
      }
    }
    else if (param_4 == '\0') {
      local_18 = &DAT_146a84e40;
    }
    else {
      local_18 = &DAT_146a84cf0;
    }
  }
  else if (param_3 == '\0') {
    if (param_4 == '\0') {
      local_18 = &DAT_146a84ba0;
    }
    else {
      local_18 = &DAT_146a84a50;
    }
  }
  else if (param_4 == '\0') {
    local_18 = &DAT_146a84900;
  }
  else {
    local_18 = &DAT_146a847b0;
  }
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141d0b850 FUN_141d0b850 body=207 status=ok
// SIG undefined FUN_141d0b850(void)

undefined8 FUN_141d0b850(longlong param_1,char param_2,char param_3,char param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_10 = 0;
  if (param_2 == '\0') {
    if (param_3 == '\0') {
      local_18 = &DAT_146a85a10;
      if (param_4 == '\0') {
        local_18 = &DAT_146a85b60;
      }
    }
    else if (param_4 == '\0') {
      local_18 = &DAT_146a858c0;
    }
    else {
      local_18 = &DAT_146a85770;
    }
  }
  else if (param_3 == '\0') {
    if (param_4 == '\0') {
      local_18 = &DAT_146a85620;
    }
    else {
      local_18 = &DAT_146a854d0;
    }
  }
  else if (param_4 == '\0') {
    local_18 = &DAT_146a85380;
  }
  else {
    local_18 = &DAT_146a85230;
  }
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141d0b920 FUN_141d0b920 body=207 status=ok
// SIG undefined FUN_141d0b920(void)

undefined8 FUN_141d0b920(longlong param_1,char param_2,char param_3,char param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_10 = 0;
  if (param_2 == '\0') {
    if (param_3 == '\0') {
      local_18 = &DAT_146a86490;
      if (param_4 == '\0') {
        local_18 = &DAT_146a865e0;
      }
    }
    else if (param_4 == '\0') {
      local_18 = &DAT_146a86340;
    }
    else {
      local_18 = &DAT_146a861f0;
    }
  }
  else if (param_3 == '\0') {
    if (param_4 == '\0') {
      local_18 = &DAT_146a860a0;
    }
    else {
      local_18 = &DAT_146a85f50;
    }
  }
  else if (param_4 == '\0') {
    local_18 = &DAT_146a85e00;
  }
  else {
    local_18 = &DAT_146a85cb0;
  }
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141d0b9f0 FUN_141d0b9f0 body=207 status=ok
// SIG undefined FUN_141d0b9f0(void)

undefined8 FUN_141d0b9f0(longlong param_1,char param_2,char param_3,char param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_10 = 0;
  if (param_2 == '\0') {
    if (param_3 == '\0') {
      local_18 = &DAT_146a86f10;
      if (param_4 == '\0') {
        local_18 = &DAT_146a87060;
      }
    }
    else if (param_4 == '\0') {
      local_18 = &DAT_146a86dc0;
    }
    else {
      local_18 = &DAT_146a86c70;
    }
  }
  else if (param_3 == '\0') {
    if (param_4 == '\0') {
      local_18 = &DAT_146a86b20;
    }
    else {
      local_18 = &DAT_146a869d0;
    }
  }
  else if (param_4 == '\0') {
    local_18 = &DAT_146a86880;
  }
  else {
    local_18 = &DAT_146a86730;
  }
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141d0bac0 FUN_141d0bac0 body=207 status=ok
// SIG undefined FUN_141d0bac0(void)

undefined8 FUN_141d0bac0(longlong param_1,char param_2,char param_3,char param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_10 = 0;
  if (param_2 == '\0') {
    if (param_3 == '\0') {
      local_18 = &DAT_146a87990;
      if (param_4 == '\0') {
        local_18 = &DAT_146a87ae0;
      }
    }
    else if (param_4 == '\0') {
      local_18 = &DAT_146a87840;
    }
    else {
      local_18 = &DAT_146a876f0;
    }
  }
  else if (param_3 == '\0') {
    if (param_4 == '\0') {
      local_18 = &DAT_146a875a0;
    }
    else {
      local_18 = &DAT_146a87450;
    }
  }
  else if (param_4 == '\0') {
    local_18 = &DAT_146a87300;
  }
  else {
    local_18 = &DAT_146a871b0;
  }
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141d0bb90 FUN_141d0bb90 body=207 status=ok
// SIG undefined FUN_141d0bb90(void)

undefined8 FUN_141d0bb90(longlong param_1,char param_2,char param_3,char param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_10 = 0;
  if (param_2 == '\0') {
    if (param_3 == '\0') {
      local_18 = &DAT_146a88410;
      if (param_4 == '\0') {
        local_18 = &DAT_146a88560;
      }
    }
    else if (param_4 == '\0') {
      local_18 = &DAT_146a882c0;
    }
    else {
      local_18 = &DAT_146a88170;
    }
  }
  else if (param_3 == '\0') {
    if (param_4 == '\0') {
      local_18 = &DAT_146a88020;
    }
    else {
      local_18 = &DAT_146a87ed0;
    }
  }
  else if (param_4 == '\0') {
    local_18 = &DAT_146a87d80;
  }
  else {
    local_18 = &DAT_146a87c30;
  }
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141d0bc60 FUN_141d0bc60 body=207 status=ok
// SIG undefined FUN_141d0bc60(void)

undefined8 FUN_141d0bc60(longlong param_1,char param_2,char param_3,char param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_10 = 0;
  if (param_2 == '\0') {
    if (param_3 == '\0') {
      local_18 = &DAT_146a88e90;
      if (param_4 == '\0') {
        local_18 = &DAT_146a88fe0;
      }
    }
    else if (param_4 == '\0') {
      local_18 = &DAT_146a88d40;
    }
    else {
      local_18 = &DAT_146a88bf0;
    }
  }
  else if (param_3 == '\0') {
    if (param_4 == '\0') {
      local_18 = &DAT_146a88aa0;
    }
    else {
      local_18 = &DAT_146a88950;
    }
  }
  else if (param_4 == '\0') {
    local_18 = &DAT_146a88800;
  }
  else {
    local_18 = &DAT_146a886b0;
  }
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141d0bd30 FUN_141d0bd30 body=207 status=ok
// SIG undefined FUN_141d0bd30(void)

undefined8 FUN_141d0bd30(longlong param_1,char param_2,char param_3,char param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_10 = 0;
  if (param_2 == '\0') {
    if (param_3 == '\0') {
      local_18 = &DAT_146a89910;
      if (param_4 == '\0') {
        local_18 = &DAT_146a89a60;
      }
    }
    else if (param_4 == '\0') {
      local_18 = &DAT_146a897c0;
    }
    else {
      local_18 = &DAT_146a89670;
    }
  }
  else if (param_3 == '\0') {
    if (param_4 == '\0') {
      local_18 = &DAT_146a89520;
    }
    else {
      local_18 = &DAT_146a893d0;
    }
  }
  else if (param_4 == '\0') {
    local_18 = &DAT_146a89280;
  }
  else {
    local_18 = &DAT_146a89130;
  }
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141d0be00 FUN_141d0be00 body=207 status=ok
// SIG undefined FUN_141d0be00(void)

undefined8 FUN_141d0be00(longlong param_1,char param_2,char param_3,char param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_10 = 0;
  if (param_2 == '\0') {
    if (param_3 == '\0') {
      local_18 = &DAT_146a8a390;
      if (param_4 == '\0') {
        local_18 = &DAT_146a8a4e0;
      }
    }
    else if (param_4 == '\0') {
      local_18 = &DAT_146a8a240;
    }
    else {
      local_18 = &DAT_146a8a0f0;
    }
  }
  else if (param_3 == '\0') {
    if (param_4 == '\0') {
      local_18 = &DAT_146a89fa0;
    }
    else {
      local_18 = &DAT_146a89e50;
    }
  }
  else if (param_4 == '\0') {
    local_18 = &DAT_146a89d00;
  }
  else {
    local_18 = &DAT_146a89bb0;
  }
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141d0bed0 FUN_141d0bed0 body=207 status=ok
// SIG undefined FUN_141d0bed0(void)

undefined8 FUN_141d0bed0(longlong param_1,char param_2,char param_3,char param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_10 = 0;
  if (param_2 == '\0') {
    if (param_3 == '\0') {
      local_18 = &DAT_146a8ae10;
      if (param_4 == '\0') {
        local_18 = &DAT_146a8af60;
      }
    }
    else if (param_4 == '\0') {
      local_18 = &DAT_146a8acc0;
    }
    else {
      local_18 = &DAT_146a8ab70;
    }
  }
  else if (param_3 == '\0') {
    if (param_4 == '\0') {
      local_18 = &DAT_146a8aa20;
    }
    else {
      local_18 = &DAT_146a8a8d0;
    }
  }
  else if (param_4 == '\0') {
    local_18 = &DAT_146a8a780;
  }
  else {
    local_18 = &DAT_146a8a630;
  }
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141d0bfa0 FUN_141d0bfa0 body=207 status=ok
// SIG undefined FUN_141d0bfa0(void)

undefined8 FUN_141d0bfa0(longlong param_1,char param_2,char param_3,char param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_10 = 0;
  if (param_2 == '\0') {
    if (param_3 == '\0') {
      local_18 = &DAT_146a8b890;
      if (param_4 == '\0') {
        local_18 = &DAT_146a8b9e0;
      }
    }
    else if (param_4 == '\0') {
      local_18 = &DAT_146a8b740;
    }
    else {
      local_18 = &DAT_146a8b5f0;
    }
  }
  else if (param_3 == '\0') {
    if (param_4 == '\0') {
      local_18 = &DAT_146a8b4a0;
    }
    else {
      local_18 = &DAT_146a8b350;
    }
  }
  else if (param_4 == '\0') {
    local_18 = &DAT_146a8b200;
  }
  else {
    local_18 = &DAT_146a8b0b0;
  }
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141d0c070 FUN_141d0c070 body=207 status=ok
// SIG undefined FUN_141d0c070(void)

undefined8 FUN_141d0c070(longlong param_1,char param_2,char param_3,char param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_10 = 0;
  if (param_2 == '\0') {
    if (param_3 == '\0') {
      local_18 = &DAT_146a8c310;
      if (param_4 == '\0') {
        local_18 = &DAT_146a8c460;
      }
    }
    else if (param_4 == '\0') {
      local_18 = &DAT_146a8c1c0;
    }
    else {
      local_18 = &DAT_146a8c070;
    }
  }
  else if (param_3 == '\0') {
    if (param_4 == '\0') {
      local_18 = &DAT_146a8bf20;
    }
    else {
      local_18 = &DAT_146a8bdd0;
    }
  }
  else if (param_4 == '\0') {
    local_18 = &DAT_146a8bc80;
  }
  else {
    local_18 = &DAT_146a8bb30;
  }
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141d0c140 FUN_141d0c140 body=207 status=ok
// SIG undefined FUN_141d0c140(void)

undefined8 FUN_141d0c140(longlong param_1,char param_2,char param_3,char param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_10 = 0;
  if (param_2 == '\0') {
    if (param_3 == '\0') {
      local_18 = &DAT_146a8cd90;
      if (param_4 == '\0') {
        local_18 = &DAT_146a8cee0;
      }
    }
    else if (param_4 == '\0') {
      local_18 = &DAT_146a8cc40;
    }
    else {
      local_18 = &DAT_146a8caf0;
    }
  }
  else if (param_3 == '\0') {
    if (param_4 == '\0') {
      local_18 = &DAT_146a8c9a0;
    }
    else {
      local_18 = &DAT_146a8c850;
    }
  }
  else if (param_4 == '\0') {
    local_18 = &DAT_146a8c700;
  }
  else {
    local_18 = &DAT_146a8c5b0;
  }
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141d0c210 FUN_141d0c210 body=207 status=ok
// SIG undefined FUN_141d0c210(void)

undefined8 FUN_141d0c210(longlong param_1,char param_2,char param_3,char param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_10 = 0;
  if (param_2 == '\0') {
    if (param_3 == '\0') {
      local_18 = &DAT_146a8d810;
      if (param_4 == '\0') {
        local_18 = &DAT_146a8d960;
      }
    }
    else if (param_4 == '\0') {
      local_18 = &DAT_146a8d6c0;
    }
    else {
      local_18 = &DAT_146a8d570;
    }
  }
  else if (param_3 == '\0') {
    if (param_4 == '\0') {
      local_18 = &DAT_146a8d420;
    }
    else {
      local_18 = &DAT_146a8d2d0;
    }
  }
  else if (param_4 == '\0') {
    local_18 = &DAT_146a8d180;
  }
  else {
    local_18 = &DAT_146a8d030;
  }
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141d0c2e0 FUN_141d0c2e0 body=207 status=ok
// SIG undefined FUN_141d0c2e0(void)

undefined8 FUN_141d0c2e0(longlong param_1,char param_2,char param_3,char param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_10 = 0;
  if (param_2 == '\0') {
    if (param_3 == '\0') {
      local_18 = &DAT_146a8e290;
      if (param_4 == '\0') {
        local_18 = &DAT_146a8e3e0;
      }
    }
    else if (param_4 == '\0') {
      local_18 = &DAT_146a8e140;
    }
    else {
      local_18 = &DAT_146a8dff0;
    }
  }
  else if (param_3 == '\0') {
    if (param_4 == '\0') {
      local_18 = &DAT_146a8dea0;
    }
    else {
      local_18 = &DAT_146a8dd50;
    }
  }
  else if (param_4 == '\0') {
    local_18 = &DAT_146a8dc00;
  }
  else {
    local_18 = &DAT_146a8dab0;
  }
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141d0c3b0 FUN_141d0c3b0 body=203 status=ok
// SIG undefined FUN_141d0c3b0(void)

undefined8
FUN_141d0c3b0(longlong param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
             char param_7,char param_8)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int aiStackX_10 [2];
  undefined *puStack_18;
  undefined4 uStack_10;
  
  if (param_2 == '\0') {
    if (param_3 == '\0') {
      if (param_4 == '\0') {
        if (param_5 != '\0') {
          uStack_10 = 0;
          if (param_6 == '\0') {
            if (param_7 == '\0') {
              puStack_18 = &DAT_146a98010;
              if (param_8 == '\0') {
                puStack_18 = &DAT_146a98160;
              }
            }
            else if (param_8 == '\0') {
              puStack_18 = &DAT_146a97ec0;
            }
            else {
              puStack_18 = &DAT_146a97d70;
            }
          }
          else if (param_7 == '\0') {
            if (param_8 == '\0') {
              puStack_18 = &DAT_146a97c20;
            }
            else {
              puStack_18 = &DAT_146a97ad0;
            }
          }
          else if (param_8 == '\0') {
            puStack_18 = &DAT_146a97980;
          }
          else {
            puStack_18 = &DAT_146a97830;
          }
          TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
          ::FindId((longlong *)(param_1 + 0x38),aiStackX_10,&puStack_18);
          puVar3 = (undefined8 *)0x0;
          if (aiStackX_10[0] != -1) {
            puVar3 = (undefined8 *)((longlong)aiStackX_10[0] * 0x20 + *(longlong *)(param_1 + 0x38))
            ;
          }
          puVar2 = puVar3 + 2;
          if (puVar3 == (undefined8 *)0x0) {
            puVar2 = (undefined8 *)0x0;
          }
          return *puVar2;
        }
        uVar1 = FUN_141d0d0b0();
        return uVar1;
      }
      if (param_5 != '\0') {
        uStack_10 = 0;
        if (param_6 == '\0') {
          if (param_7 == '\0') {
            puStack_18 = &DAT_146a96b10;
            if (param_8 == '\0') {
              puStack_18 = &DAT_146a96c60;
            }
          }
          else if (param_8 == '\0') {
            puStack_18 = &DAT_146a969c0;
          }
          else {
            puStack_18 = &DAT_146a96870;
          }
        }
        else if (param_7 == '\0') {
          if (param_8 == '\0') {
            puStack_18 = &DAT_146a96720;
          }
          else {
            puStack_18 = &DAT_146a965d0;
          }
        }
        else if (param_8 == '\0') {
          puStack_18 = &DAT_146a96480;
        }
        else {
          puStack_18 = &DAT_146a96330;
        }
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId((longlong *)(param_1 + 0x38),aiStackX_10,&puStack_18);
        puVar3 = (undefined8 *)0x0;
        if (aiStackX_10[0] != -1) {
          puVar3 = (undefined8 *)((longlong)aiStackX_10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
        }
        puVar2 = puVar3 + 2;
        if (puVar3 == (undefined8 *)0x0) {
          puVar2 = (undefined8 *)0x0;
        }
        return *puVar2;
      }
      uVar1 = FUN_141d0cf10();
      return uVar1;
    }
    if (param_4 == '\0') {
      if (param_5 != '\0') {
        uStack_10 = 0;
        if (param_6 == '\0') {
          if (param_7 == '\0') {
            puStack_18 = &DAT_146a95610;
            if (param_8 == '\0') {
              puStack_18 = &DAT_146a95760;
            }
          }
          else if (param_8 == '\0') {
            puStack_18 = &DAT_146a954c0;
          }
          else {
            puStack_18 = &DAT_146a95370;
          }
        }
        else if (param_7 == '\0') {
          if (param_8 == '\0') {
            puStack_18 = &DAT_146a95220;
          }
          else {
            puStack_18 = &DAT_146a950d0;
          }
        }
        else if (param_8 == '\0') {
          puStack_18 = &DAT_146a94f80;
        }
        else {
          puStack_18 = &DAT_146a94e30;
        }
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId((longlong *)(param_1 + 0x38),aiStackX_10,&puStack_18);
        puVar3 = (undefined8 *)0x0;
        if (aiStackX_10[0] != -1) {
          puVar3 = (undefined8 *)((longlong)aiStackX_10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
        }
        puVar2 = puVar3 + 2;
        if (puVar3 == (undefined8 *)0x0) {
          puVar2 = (undefined8 *)0x0;
        }
        return *puVar2;
      }
      uVar1 = FUN_141d0cd70();
      return uVar1;
    }
    if (param_5 != '\0') {
      uStack_10 = 0;
      if (param_6 == '\0') {
        if (param_7 == '\0') {
          puStack_18 = &DAT_146a94110;
          if (param_8 == '\0') {
            puStack_18 = &DAT_146a94260;
          }
        }
        else if (param_8 == '\0') {
          puStack_18 = &DAT_146a93fc0;
        }
        else {
          puStack_18 = &DAT_146a93e70;
        }
      }
      else if (param_7 == '\0') {
        if (param_8 == '\0') {
          puStack_18 = &DAT_146a93d20;
        }
        else {
          puStack_18 = &DAT_146a93bd0;
        }
      }
      else if (param_8 == '\0') {
        puStack_18 = &DAT_146a93a80;
      }
      else {
        puStack_18 = &DAT_146a93930;
      }
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId((longlong *)(param_1 + 0x38),aiStackX_10,&puStack_18);
      puVar3 = (undefined8 *)0x0;
      if (aiStackX_10[0] != -1) {
        puVar3 = (undefined8 *)((longlong)aiStackX_10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
      }
      puVar2 = puVar3 + 2;
      if (puVar3 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      return *puVar2;
    }
    uVar1 = FUN_141d0cbd0();
    return uVar1;
  }
  if (param_3 == '\0') {
    if (param_4 == '\0') {
      if (param_5 != '\0') {
        uStack_10 = 0;
        if (param_6 == '\0') {
          if (param_7 == '\0') {
            puStack_18 = &DAT_146a92c10;
            if (param_8 == '\0') {
              puStack_18 = &DAT_146a92d60;
            }
          }
          else if (param_8 == '\0') {
            puStack_18 = &DAT_146a92ac0;
          }
          else {
            puStack_18 = &DAT_146a92970;
          }
        }
        else if (param_7 == '\0') {
          if (param_8 == '\0') {
            puStack_18 = &DAT_146a92820;
          }
          else {
            puStack_18 = &DAT_146a926d0;
          }
        }
        else if (param_8 == '\0') {
          puStack_18 = &DAT_146a92580;
        }
        else {
          puStack_18 = &DAT_146a92430;
        }
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId((longlong *)(param_1 + 0x38),aiStackX_10,&puStack_18);
        puVar3 = (undefined8 *)0x0;
        if (aiStackX_10[0] != -1) {
          puVar3 = (undefined8 *)((longlong)aiStackX_10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
        }
        puVar2 = puVar3 + 2;
        if (puVar3 == (undefined8 *)0x0) {
          puVar2 = (undefined8 *)0x0;
        }
        return *puVar2;
      }
      uVar1 = FUN_141d0ca30();
      return uVar1;
    }
    if (param_5 != '\0') {
      uStack_10 = 0;
      if (param_6 == '\0') {
        if (param_7 == '\0') {
          puStack_18 = &DAT_146a91710;
          if (param_8 == '\0') {
            puStack_18 = &DAT_146a91860;
          }
        }
        else if (param_8 == '\0') {
          puStack_18 = &DAT_146a915c0;
        }
        else {
          puStack_18 = &DAT_146a91470;
        }
      }
      else if (param_7 == '\0') {
        if (param_8 == '\0') {
          puStack_18 = &DAT_146a91320;
        }
        else {
          puStack_18 = &DAT_146a911d0;
        }
      }
      else if (param_8 == '\0') {
        puStack_18 = &DAT_146a91080;
      }
      else {
        puStack_18 = &DAT_146a90f30;
      }
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId((longlong *)(param_1 + 0x38),aiStackX_10,&puStack_18);
      puVar3 = (undefined8 *)0x0;
      if (aiStackX_10[0] != -1) {
        puVar3 = (undefined8 *)((longlong)aiStackX_10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
      }
      puVar2 = puVar3 + 2;
      if (puVar3 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      return *puVar2;
    }
    uVar1 = FUN_141d0c890();
    return uVar1;
  }
  if (param_4 == '\0') {
    if (param_5 != '\0') {
      uStack_10 = 0;
      if (param_6 == '\0') {
        if (param_7 == '\0') {
          puStack_18 = &DAT_146a90210;
          if (param_8 == '\0') {
            puStack_18 = &DAT_146a90360;
          }
        }
        else if (param_8 == '\0') {
          puStack_18 = &DAT_146a900c0;
        }
        else {
          puStack_18 = &DAT_146a8ff70;
        }
      }
      else if (param_7 == '\0') {
        if (param_8 == '\0') {
          puStack_18 = &DAT_146a8fe20;
        }
        else {
          puStack_18 = &DAT_146a8fcd0;
        }
      }
      else if (param_8 == '\0') {
        puStack_18 = &DAT_146a8fb80;
      }
      else {
        puStack_18 = &DAT_146a8fa30;
      }
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId((longlong *)(param_1 + 0x38),aiStackX_10,&puStack_18);
      puVar3 = (undefined8 *)0x0;
      if (aiStackX_10[0] != -1) {
        puVar3 = (undefined8 *)((longlong)aiStackX_10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
      }
      puVar2 = puVar3 + 2;
      if (puVar3 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      return *puVar2;
    }
    uVar1 = FUN_141d0c6f0();
    return uVar1;
  }
  if (param_5 != '\0') {
    uStack_10 = 0;
    if (param_6 == '\0') {
      if (param_7 == '\0') {
        puStack_18 = &DAT_146a8ed10;
        if (param_8 == '\0') {
          puStack_18 = &DAT_146a8ee60;
        }
      }
      else if (param_8 == '\0') {
        puStack_18 = &DAT_146a8ebc0;
      }
      else {
        puStack_18 = &DAT_146a8ea70;
      }
    }
    else if (param_7 == '\0') {
      if (param_8 == '\0') {
        puStack_18 = &DAT_146a8e920;
      }
      else {
        puStack_18 = &DAT_146a8e7d0;
      }
    }
    else if (param_8 == '\0') {
      puStack_18 = &DAT_146a8e680;
    }
    else {
      puStack_18 = &DAT_146a8e530;
    }
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(param_1 + 0x38),aiStackX_10,&puStack_18);
    puVar3 = (undefined8 *)0x0;
    if (aiStackX_10[0] != -1) {
      puVar3 = (undefined8 *)((longlong)aiStackX_10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
    }
    puVar2 = puVar3 + 2;
    if (puVar3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)0x0;
    }
    return *puVar2;
  }
  uVar1 = FUN_141d0c550();
  return uVar1;
}



// FUNCTION 141d0c480 FUN_141d0c480 body=207 status=ok
// SIG undefined FUN_141d0c480(void)

undefined8 FUN_141d0c480(longlong param_1,char param_2,char param_3,char param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_10 = 0;
  if (param_2 == '\0') {
    if (param_3 == '\0') {
      local_18 = &DAT_146a8ed10;
      if (param_4 == '\0') {
        local_18 = &DAT_146a8ee60;
      }
    }
    else if (param_4 == '\0') {
      local_18 = &DAT_146a8ebc0;
    }
    else {
      local_18 = &DAT_146a8ea70;
    }
  }
  else if (param_3 == '\0') {
    if (param_4 == '\0') {
      local_18 = &DAT_146a8e920;
    }
    else {
      local_18 = &DAT_146a8e7d0;
    }
  }
  else if (param_4 == '\0') {
    local_18 = &DAT_146a8e680;
  }
  else {
    local_18 = &DAT_146a8e530;
  }
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141d0c550 FUN_141d0c550 body=207 status=ok
// SIG undefined FUN_141d0c550(void)

undefined8 FUN_141d0c550(longlong param_1,char param_2,char param_3,char param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_10 = 0;
  if (param_2 == '\0') {
    if (param_3 == '\0') {
      local_18 = &DAT_146a8f790;
      if (param_4 == '\0') {
        local_18 = &DAT_146a8f8e0;
      }
    }
    else if (param_4 == '\0') {
      local_18 = &DAT_146a8f640;
    }
    else {
      local_18 = &DAT_146a8f4f0;
    }
  }
  else if (param_3 == '\0') {
    if (param_4 == '\0') {
      local_18 = &DAT_146a8f3a0;
    }
    else {
      local_18 = &DAT_146a8f250;
    }
  }
  else if (param_4 == '\0') {
    local_18 = &DAT_146a8f100;
  }
  else {
    local_18 = &DAT_146a8efb0;
  }
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141d0c620 FUN_141d0c620 body=207 status=ok
// SIG undefined FUN_141d0c620(void)

undefined8 FUN_141d0c620(longlong param_1,char param_2,char param_3,char param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_10 = 0;
  if (param_2 == '\0') {
    if (param_3 == '\0') {
      local_18 = &DAT_146a90210;
      if (param_4 == '\0') {
        local_18 = &DAT_146a90360;
      }
    }
    else if (param_4 == '\0') {
      local_18 = &DAT_146a900c0;
    }
    else {
      local_18 = &DAT_146a8ff70;
    }
  }
  else if (param_3 == '\0') {
    if (param_4 == '\0') {
      local_18 = &DAT_146a8fe20;
    }
    else {
      local_18 = &DAT_146a8fcd0;
    }
  }
  else if (param_4 == '\0') {
    local_18 = &DAT_146a8fb80;
  }
  else {
    local_18 = &DAT_146a8fa30;
  }
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141d0c6f0 FUN_141d0c6f0 body=207 status=ok
// SIG undefined FUN_141d0c6f0(void)

undefined8 FUN_141d0c6f0(longlong param_1,char param_2,char param_3,char param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_10 = 0;
  if (param_2 == '\0') {
    if (param_3 == '\0') {
      local_18 = &DAT_146a90c90;
      if (param_4 == '\0') {
        local_18 = &DAT_146a90de0;
      }
    }
    else if (param_4 == '\0') {
      local_18 = &DAT_146a90b40;
    }
    else {
      local_18 = &DAT_146a909f0;
    }
  }
  else if (param_3 == '\0') {
    if (param_4 == '\0') {
      local_18 = &DAT_146a908a0;
    }
    else {
      local_18 = &DAT_146a90750;
    }
  }
  else if (param_4 == '\0') {
    local_18 = &DAT_146a90600;
  }
  else {
    local_18 = &DAT_146a904b0;
  }
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141d0c7c0 FUN_141d0c7c0 body=207 status=ok
// SIG undefined FUN_141d0c7c0(void)

undefined8 FUN_141d0c7c0(longlong param_1,char param_2,char param_3,char param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_10 = 0;
  if (param_2 == '\0') {
    if (param_3 == '\0') {
      local_18 = &DAT_146a91710;
      if (param_4 == '\0') {
        local_18 = &DAT_146a91860;
      }
    }
    else if (param_4 == '\0') {
      local_18 = &DAT_146a915c0;
    }
    else {
      local_18 = &DAT_146a91470;
    }
  }
  else if (param_3 == '\0') {
    if (param_4 == '\0') {
      local_18 = &DAT_146a91320;
    }
    else {
      local_18 = &DAT_146a911d0;
    }
  }
  else if (param_4 == '\0') {
    local_18 = &DAT_146a91080;
  }
  else {
    local_18 = &DAT_146a90f30;
  }
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141d0c890 FUN_141d0c890 body=207 status=ok
// SIG undefined FUN_141d0c890(void)

undefined8 FUN_141d0c890(longlong param_1,char param_2,char param_3,char param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_10 = 0;
  if (param_2 == '\0') {
    if (param_3 == '\0') {
      local_18 = &DAT_146a92190;
      if (param_4 == '\0') {
        local_18 = &DAT_146a922e0;
      }
    }
    else if (param_4 == '\0') {
      local_18 = &DAT_146a92040;
    }
    else {
      local_18 = &DAT_146a91ef0;
    }
  }
  else if (param_3 == '\0') {
    if (param_4 == '\0') {
      local_18 = &DAT_146a91da0;
    }
    else {
      local_18 = &DAT_146a91c50;
    }
  }
  else if (param_4 == '\0') {
    local_18 = &DAT_146a91b00;
  }
  else {
    local_18 = &DAT_146a919b0;
  }
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141d0c960 FUN_141d0c960 body=207 status=ok
// SIG undefined FUN_141d0c960(void)

undefined8 FUN_141d0c960(longlong param_1,char param_2,char param_3,char param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_10 = 0;
  if (param_2 == '\0') {
    if (param_3 == '\0') {
      local_18 = &DAT_146a92c10;
      if (param_4 == '\0') {
        local_18 = &DAT_146a92d60;
      }
    }
    else if (param_4 == '\0') {
      local_18 = &DAT_146a92ac0;
    }
    else {
      local_18 = &DAT_146a92970;
    }
  }
  else if (param_3 == '\0') {
    if (param_4 == '\0') {
      local_18 = &DAT_146a92820;
    }
    else {
      local_18 = &DAT_146a926d0;
    }
  }
  else if (param_4 == '\0') {
    local_18 = &DAT_146a92580;
  }
  else {
    local_18 = &DAT_146a92430;
  }
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141d0ca30 FUN_141d0ca30 body=207 status=ok
// SIG undefined FUN_141d0ca30(void)

undefined8 FUN_141d0ca30(longlong param_1,char param_2,char param_3,char param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_10 = 0;
  if (param_2 == '\0') {
    if (param_3 == '\0') {
      local_18 = &DAT_146a93690;
      if (param_4 == '\0') {
        local_18 = &DAT_146a937e0;
      }
    }
    else if (param_4 == '\0') {
      local_18 = &DAT_146a93540;
    }
    else {
      local_18 = &DAT_146a933f0;
    }
  }
  else if (param_3 == '\0') {
    if (param_4 == '\0') {
      local_18 = &DAT_146a932a0;
    }
    else {
      local_18 = &DAT_146a93150;
    }
  }
  else if (param_4 == '\0') {
    local_18 = &DAT_146a93000;
  }
  else {
    local_18 = &DAT_146a92eb0;
  }
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141d0cb00 FUN_141d0cb00 body=207 status=ok
// SIG undefined FUN_141d0cb00(void)

undefined8 FUN_141d0cb00(longlong param_1,char param_2,char param_3,char param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_10 = 0;
  if (param_2 == '\0') {
    if (param_3 == '\0') {
      local_18 = &DAT_146a94110;
      if (param_4 == '\0') {
        local_18 = &DAT_146a94260;
      }
    }
    else if (param_4 == '\0') {
      local_18 = &DAT_146a93fc0;
    }
    else {
      local_18 = &DAT_146a93e70;
    }
  }
  else if (param_3 == '\0') {
    if (param_4 == '\0') {
      local_18 = &DAT_146a93d20;
    }
    else {
      local_18 = &DAT_146a93bd0;
    }
  }
  else if (param_4 == '\0') {
    local_18 = &DAT_146a93a80;
  }
  else {
    local_18 = &DAT_146a93930;
  }
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141d0cbd0 FUN_141d0cbd0 body=207 status=ok
// SIG undefined FUN_141d0cbd0(void)

undefined8 FUN_141d0cbd0(longlong param_1,char param_2,char param_3,char param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_10 = 0;
  if (param_2 == '\0') {
    if (param_3 == '\0') {
      local_18 = &DAT_146a94b90;
      if (param_4 == '\0') {
        local_18 = &DAT_146a94ce0;
      }
    }
    else if (param_4 == '\0') {
      local_18 = &DAT_146a94a40;
    }
    else {
      local_18 = &DAT_146a948f0;
    }
  }
  else if (param_3 == '\0') {
    if (param_4 == '\0') {
      local_18 = &DAT_146a947a0;
    }
    else {
      local_18 = &DAT_146a94650;
    }
  }
  else if (param_4 == '\0') {
    local_18 = &DAT_146a94500;
  }
  else {
    local_18 = &DAT_146a943b0;
  }
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141d0cca0 FUN_141d0cca0 body=207 status=ok
// SIG undefined FUN_141d0cca0(void)

undefined8 FUN_141d0cca0(longlong param_1,char param_2,char param_3,char param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_10 = 0;
  if (param_2 == '\0') {
    if (param_3 == '\0') {
      local_18 = &DAT_146a95610;
      if (param_4 == '\0') {
        local_18 = &DAT_146a95760;
      }
    }
    else if (param_4 == '\0') {
      local_18 = &DAT_146a954c0;
    }
    else {
      local_18 = &DAT_146a95370;
    }
  }
  else if (param_3 == '\0') {
    if (param_4 == '\0') {
      local_18 = &DAT_146a95220;
    }
    else {
      local_18 = &DAT_146a950d0;
    }
  }
  else if (param_4 == '\0') {
    local_18 = &DAT_146a94f80;
  }
  else {
    local_18 = &DAT_146a94e30;
  }
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141d0cd70 FUN_141d0cd70 body=207 status=ok
// SIG undefined FUN_141d0cd70(void)

undefined8 FUN_141d0cd70(longlong param_1,char param_2,char param_3,char param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_10 = 0;
  if (param_2 == '\0') {
    if (param_3 == '\0') {
      local_18 = &DAT_146a96090;
      if (param_4 == '\0') {
        local_18 = &DAT_146a961e0;
      }
    }
    else if (param_4 == '\0') {
      local_18 = &DAT_146a95f40;
    }
    else {
      local_18 = &DAT_146a95df0;
    }
  }
  else if (param_3 == '\0') {
    if (param_4 == '\0') {
      local_18 = &DAT_146a95ca0;
    }
    else {
      local_18 = &DAT_146a95b50;
    }
  }
  else if (param_4 == '\0') {
    local_18 = &DAT_146a95a00;
  }
  else {
    local_18 = &DAT_146a958b0;
  }
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141d0ce40 FUN_141d0ce40 body=207 status=ok
// SIG undefined FUN_141d0ce40(void)

undefined8 FUN_141d0ce40(longlong param_1,char param_2,char param_3,char param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_10 = 0;
  if (param_2 == '\0') {
    if (param_3 == '\0') {
      local_18 = &DAT_146a96b10;
      if (param_4 == '\0') {
        local_18 = &DAT_146a96c60;
      }
    }
    else if (param_4 == '\0') {
      local_18 = &DAT_146a969c0;
    }
    else {
      local_18 = &DAT_146a96870;
    }
  }
  else if (param_3 == '\0') {
    if (param_4 == '\0') {
      local_18 = &DAT_146a96720;
    }
    else {
      local_18 = &DAT_146a965d0;
    }
  }
  else if (param_4 == '\0') {
    local_18 = &DAT_146a96480;
  }
  else {
    local_18 = &DAT_146a96330;
  }
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141d0cf10 FUN_141d0cf10 body=207 status=ok
// SIG undefined FUN_141d0cf10(void)

undefined8 FUN_141d0cf10(longlong param_1,char param_2,char param_3,char param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_10 = 0;
  if (param_2 == '\0') {
    if (param_3 == '\0') {
      local_18 = &DAT_146a97590;
      if (param_4 == '\0') {
        local_18 = &DAT_146a976e0;
      }
    }
    else if (param_4 == '\0') {
      local_18 = &DAT_146a97440;
    }
    else {
      local_18 = &DAT_146a972f0;
    }
  }
  else if (param_3 == '\0') {
    if (param_4 == '\0') {
      local_18 = &DAT_146a971a0;
    }
    else {
      local_18 = &DAT_146a97050;
    }
  }
  else if (param_4 == '\0') {
    local_18 = &DAT_146a96f00;
  }
  else {
    local_18 = &DAT_146a96db0;
  }
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141d0cfe0 FUN_141d0cfe0 body=207 status=ok
// SIG undefined FUN_141d0cfe0(void)

undefined8 FUN_141d0cfe0(longlong param_1,char param_2,char param_3,char param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_10 = 0;
  if (param_2 == '\0') {
    if (param_3 == '\0') {
      local_18 = &DAT_146a98010;
      if (param_4 == '\0') {
        local_18 = &DAT_146a98160;
      }
    }
    else if (param_4 == '\0') {
      local_18 = &DAT_146a97ec0;
    }
    else {
      local_18 = &DAT_146a97d70;
    }
  }
  else if (param_3 == '\0') {
    if (param_4 == '\0') {
      local_18 = &DAT_146a97c20;
    }
    else {
      local_18 = &DAT_146a97ad0;
    }
  }
  else if (param_4 == '\0') {
    local_18 = &DAT_146a97980;
  }
  else {
    local_18 = &DAT_146a97830;
  }
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141d0d0b0 FUN_141d0d0b0 body=207 status=ok
// SIG undefined FUN_141d0d0b0(void)

undefined8 FUN_141d0d0b0(longlong param_1,char param_2,char param_3,char param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_10 = 0;
  if (param_2 == '\0') {
    if (param_3 == '\0') {
      local_18 = &DAT_146a98a90;
      if (param_4 == '\0') {
        local_18 = &DAT_146a98be0;
      }
    }
    else if (param_4 == '\0') {
      local_18 = &DAT_146a98940;
    }
    else {
      local_18 = &DAT_146a987f0;
    }
  }
  else if (param_3 == '\0') {
    if (param_4 == '\0') {
      local_18 = &DAT_146a986a0;
    }
    else {
      local_18 = &DAT_146a98550;
    }
  }
  else if (param_4 == '\0') {
    local_18 = &DAT_146a98400;
  }
  else {
    local_18 = &DAT_146a982b0;
  }
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141d0d180 FUN_141d0d180 body=856 status=ok
// SIG undefined FUN_141d0d180(void)

void FUN_141d0d180(longlong param_1,longlong param_2,undefined8 *param_3,char param_4,float param_5,
                  longlong param_6)

{
  ulonglong *puVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *_Dst;
  int iVar9;
  ulonglong _Size;
  float fVar10;
  float fVar11;
  undefined4 local_res8 [2];
  float local_res20 [2];
  float local_90;
  float local_8c;
  float local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  
  local_res20[0] = (float)CONCAT31(local_res20[0]._1_3_,param_4);
  iVar9 = 2;
  local_res8[0] = 0x3f800000;
  local_78 = 0;
  uStack_70 = 0;
  local_90 = 0.01;
  if (param_6 != 0) {
    FDistanceFieldAOParameters::FDistanceFieldAOParameters
              (&local_90,*(undefined4 *)(param_6 + 0x10c),*(undefined4 *)(param_6 + 0x110));
    local_res8[0] = *(undefined4 *)(param_6 + 0x114);
    iVar9 = *(int *)(param_6 + 300);
    local_78 = *(undefined8 *)(param_6 + 0x11c);
    uStack_70 = CONCAT44(*(undefined4 *)(param_6 + 0x118),*(undefined4 *)(param_6 + 0x124));
    local_90 = local_88;
  }
  fVar10 = _guard_xfg_dispatch_icall_nop(local_90 * 5.0);
  fVar11 = 1.0 / (fVar10 + 1.0);
  fVar10 = _guard_xfg_dispatch_icall_nop(local_90 * -5.0);
  uVar4 = *param_3;
  uVar5 = (uint)*(ushort *)(param_1 + 0x16);
  if (0xb < *(ushort *)(param_1 + 0x16)) {
    uVar5 = 0xc;
  }
  _Size = (ulonglong)uVar5;
  local_8c = 1.0 / (1.0 / (fVar10 + 1.0) - fVar11);
  local_88 = -(local_8c * fVar11);
  if (uVar5 != 0) {
    uVar2 = *(ushort *)(param_1 + 0x14);
    puVar1 = (ulonglong *)(param_2 + 0x30);
    uVar3 = *(ushort *)(param_1 + 0x12);
    _Dst = (void *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    uVar6 = _Size + (longlong)_Dst;
    if (*(ulonglong *)(param_2 + 0x38) < uVar6) {
      FMemStackBase::AllocateNewChunk(puVar1,uVar5 + 0x10);
      _Dst = (void *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      uVar6 = _Size + (longlong)_Dst;
    }
    *puVar1 = uVar6;
    _guard_xfg_dispatch_icall_nop(_Dst,&local_90,_Size);
    puVar8 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar8 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(puVar1,0x38);
      puVar8 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar8 + 6;
    }
    *puVar1 = (ulonglong)puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_143f594b0;
    puVar8[2] = uVar4;
    *(uint *)(puVar8 + 4) = (uint)uVar3;
    puVar8[3] = _Dst;
    *(uint *)((longlong)puVar8 + 0x24) = (uint)uVar2;
    *(uint *)(puVar8 + 5) = uVar5;
    param_4 = local_res20[0]._0_1_;
  }
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,*param_3,param_1 + 0x18,local_res8,0);
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,*param_3,param_1 + 0xc,&local_78,0);
  fVar10 = 0.0;
  if (iVar9 == 0) {
    local_res20[0] = 0.0;
  }
  else {
    local_res20[0] = 1.0;
  }
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,*param_3,param_1 + 0x1e,local_res20,0);
  if (param_4 != '\0') {
    fVar10 = 1.0;
  }
  local_res20[0] = fVar10;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,*param_3,param_1,local_res20,0);
  if (param_5 <= 0.1) {
    param_5 = 0.1;
  }
  local_res20[0] = 1.0 / param_5;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,*param_3,param_1 + 6,local_res20,0);
  return;
}



// FUNCTION 141d0d4e0 FUN_141d0d4e0 body=778 status=ok
// SIG undefined FUN_141d0d4e0(void)

void FUN_141d0d4e0(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float local_res8 [2];
  undefined8 local_res18 [2];
  ulonglong uVar10;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  
  lVar2 = FSceneRenderTargets::Get(param_3[8]);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  local_res18[0] = *(undefined8 *)(lVar1 + 0x40);
  FUN_141aa9690(param_1,param_2,local_res18[0],*(undefined8 *)(*param_3 + 0x20));
  uVar3 = FUN_1404a0e20();
  thunk_FUN_141ca99a0(param_1 + 0xc0,param_2,local_res18,param_3,uVar3,0,0);
  uVar10 = CONCAT44((int)((ulonglong)uVar3 >> 0x20),0xf);
  FUN_141aa6fa0(param_1 + 0x1bc,param_2,local_res18,*(undefined4 *)(*param_3 + 0x1a38),uVar10);
  FUN_141d23ff0(&local_48,param_3,param_4,0);
  uVar10 = uVar10 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,local_res18[0],param_1 + 0x1cc,&local_48,uVar10);
  lVar1 = *param_3;
  uVar10 = uVar10 & 0xffffffff00000000;
  local_48 = (float)(*(int *)(lVar1 + 0x1aa8) - *(int *)(lVar1 + 0x1aa0)) /
             (float)(*(int *)(lVar1 + 0x2fd0) * 2);
  local_44 = (float)(*(int *)(lVar1 + 0x1aac) - *(int *)(lVar1 + 0x1aa4)) /
             (float)(*(int *)(lVar1 + 0x2fd4) * 2);
  local_40 = 1.0 / local_48;
  local_3c = 1.0 / local_44;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,local_res18[0],param_1 + 0x1d2,&local_48,uVar10);
  lVar1 = *param_3;
  uVar4 = *(ulonglong *)(lVar2 + 0x378);
  iVar9 = (int)(uVar4 >> 0x20);
  uVar5 = *(ulonglong *)(lVar1 + 0x1aa0);
  iVar7 = *(int *)(lVar1 + 0x1aa8) - (int)uVar5;
  iVar8 = (int)(uVar5 >> 0x20);
  iVar6 = *(int *)(lVar1 + 0x1aac) - iVar8;
  if (*(longlong *)(lVar1 + 0x2e50) != 0) {
    iVar8 = *(int *)(lVar1 + 0x2e6c);
    uVar5 = (ulonglong)*(uint *)(lVar1 + 0x2e68);
    iVar7 = *(int *)(lVar1 + 0x2e70) - *(uint *)(lVar1 + 0x2e68);
    iVar9 = *(int *)(lVar1 + 0x2e64);
    iVar6 = *(int *)(lVar1 + 0x2e74) - iVar8;
    uVar4 = (ulonglong)*(uint *)(lVar1 + 0x2e60);
  }
  uVar10 = uVar10 & 0xffffffff00000000;
  local_40 = 1.0 / (float)(int)uVar4;
  local_48 = (float)iVar7 * 0.5 * local_40;
  local_44 = (float)-iVar6 * 0.5 * (1.0 / (float)iVar9);
  local_40 = ((float)(int)uVar5 + (float)iVar7 * 0.5) * local_40;
  local_3c = ((float)iVar6 * 0.5 + (float)iVar8) * (1.0 / (float)iVar9);
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_3[8],local_res18[0],param_1 + 0x1d8,&local_48,uVar10);
  lVar1 = *param_3;
  local_res8[0] = 1.0;
  if (*(longlong *)(lVar1 + 0x2e50) != 0) {
    local_res8[0] = *(float *)(lVar1 + 0x2f28) / *(float *)(lVar1 + 0x2e78);
  }
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,local_res18[0],param_1 + 0x1de,local_res8,uVar10 & 0xffffffff00000000);
  return;
}



// FUNCTION 141d0d7f0 FUN_141d0d7f0 body=3332 status=ok
// SIG undefined FUN_141d0d7f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d0d7f0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  undefined8 local_res8;
  undefined8 in_stack_ffffffffffffff38;
  undefined4 uVar18;
  undefined8 local_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  
  uVar18 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
  lVar8 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar8 + 0x28) == '\0') {
    FUN_1419f3850(lVar8);
  }
  uVar3 = *(undefined8 *)(lVar8 + 0x40);
  local_res8 = uVar3;
  FUN_141aa9690(param_1,param_2,uVar3,*(undefined8 *)(param_3 + 0x20));
  uVar7 = CONCAT44(uVar18,0xf);
  FUN_141aa6fa0(param_1 + 0xc0,param_2,&local_res8,*(undefined4 *)(param_3 + 0x1a38),uVar7);
  local_b0 = *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x20);
  lVar8 = *(longlong *)(local_b0 + 0x1270);
  if ((lVar8 == 0) ||
     (((*(longlong *)(lVar8 + 8) == 0 && (*(longlong *)(lVar8 + 0x10) == 0)) &&
      (*(longlong *)(lVar8 + 0x18) == 0)))) {
    uVar15 = *(undefined8 *)(DAT_146ac3e68 + 0x30);
  }
  else {
    uVar15 = *(undefined8 *)(lVar8 + 0x10);
  }
  lVar8 = *(longlong *)(local_b0 + 0x12b8);
  if ((lVar8 == 0) ||
     (((*(longlong *)(lVar8 + 8) == 0 && (*(longlong *)(lVar8 + 0x10) == 0)) &&
      (*(longlong *)(lVar8 + 0x18) == 0)))) {
    uVar5 = *(undefined8 *)(DAT_146ac3e68 + 0x30);
  }
  else {
    uVar5 = *(undefined8 *)(lVar8 + 0x10);
  }
  lVar8 = *(longlong *)(local_b0 + 0x1300);
  if ((lVar8 == 0) ||
     (((*(longlong *)(lVar8 + 8) == 0 && (*(longlong *)(lVar8 + 0x10) == 0)) &&
      (*(longlong *)(lVar8 + 0x18) == 0)))) {
    uVar16 = *(undefined8 *)(DAT_146ac3e68 + 0x30);
  }
  else {
    uVar16 = *(undefined8 *)(lVar8 + 0x10);
  }
  local_b8 = *(undefined8 *)(DAT_146ac3e68 + 0x30);
  uVar2 = FUN_141b33b80();
  if (*(short *)(param_1 + 0xd2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd0);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar9;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_143f59c80;
    *(uint *)(puVar10 + 3) = (uint)uVar1;
    puVar10[2] = local_res8;
    puVar10[4] = uVar15;
    uVar3 = local_res8;
  }
  if (*(short *)(param_1 + 0xe2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xe0);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar9;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_143f59c70;
    puVar10[2] = uVar3;
    *(uint *)(puVar10 + 3) = (uint)uVar1;
    puVar10[4] = uVar2;
  }
  uVar3 = FUN_141b33b80();
  if (*(short *)(param_1 + 0xd6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd4);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar9;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_143f59c80;
    puVar10[2] = local_res8;
    *(uint *)(puVar10 + 3) = (uint)uVar1;
    puVar10[4] = uVar5;
  }
  uVar15 = local_res8;
  if (*(short *)(param_1 + 0xe2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xe0);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar9;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_143f59c70;
    puVar10[2] = uVar15;
    *(uint *)(puVar10 + 3) = (uint)uVar1;
    puVar10[4] = uVar3;
  }
  uVar3 = FUN_141b33b80();
  if (*(short *)(param_1 + 0xda) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd8);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar9;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_143f59c80;
    puVar10[2] = uVar15;
    *(uint *)(puVar10 + 3) = (uint)uVar1;
    puVar10[4] = uVar16;
  }
  uVar4 = 0;
  if (*(short *)(param_1 + 0xe2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xe0);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar9;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_143f59c70;
    puVar10[2] = uVar15;
    *(uint *)(puVar10 + 3) = (uint)uVar1;
    puVar10[4] = uVar3;
  }
  uVar3 = FUN_141b33b80();
  if (*(short *)(param_1 + 0xde) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xdc);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar9;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_143f59c80;
    puVar10[4] = local_b8;
    puVar10[2] = uVar15;
    *(uint *)(puVar10 + 3) = (uint)uVar1;
  }
  if (*(short *)(param_1 + 0xe2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xe0);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar9;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_143f59c70;
    puVar10[2] = uVar15;
    *(uint *)(puVar10 + 3) = (uint)uVar1;
    puVar10[4] = uVar3;
  }
  uVar3 = FUN_1404a0e20();
  if (*(short *)(param_1 + 0xe6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xe4);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar9;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_143f59c80;
    puVar10[4] = param_4;
    puVar10[2] = uVar15;
    *(uint *)(puVar10 + 3) = (uint)uVar1;
  }
  if (*(short *)(param_1 + 0xea) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xe8);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar9;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_143f59c70;
    puVar10[2] = uVar15;
    *(uint *)(puVar10 + 3) = (uint)uVar1;
    puVar10[4] = uVar3;
  }
  uVar17 = (ulonglong)_tls_index;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar6 = uVar4;
    do {
      iVar11 = (int)uVar6;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar4 * 8) == &DAT_146a818d0) {
        if (iVar11 != -1) {
          puVar12 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar11 * 8);
          *puVar12 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141d0de8b;
        }
        break;
      }
      uVar6 = (ulonglong)(iVar11 + 1);
      uVar4 = uVar4 + 1;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x10));
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar17 * 8) + 0x38) <
       DAT_146a25438) && (_Init_thread_header(&DAT_146a25438), DAT_146a25438 == -1)) {
    _DAT_146a25430 = 0;
    DAT_146a25434 = 0;
    DAT_146a25436 = 0;
    _Init_thread_footer(&DAT_146a25438);
  }
  puVar12 = (undefined4 *)&DAT_146a25430;
LAB_141d0de8b:
  if (*(char *)((longlong)puVar12 + 6) != '\0') {
    uVar1 = *(ushort *)(puVar12 + 1);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar3 = *(undefined8 *)(param_3 + 0x2fb0);
    puVar9 = puVar10 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar9;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_144d920a0;
    puVar10[2] = uVar15;
    *(uint *)(puVar10 + 3) = (uint)uVar1;
    puVar10[4] = uVar3;
  }
  uVar3 = *(undefined8 *)(DAT_1464c3348 + 0x10);
  uVar5 = FUN_141a156e0();
  if (*(short *)(param_1 + 0xee) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xec);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar9;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_143f59c80;
    puVar10[2] = uVar15;
    *(uint *)(puVar10 + 3) = (uint)uVar1;
    puVar10[4] = uVar3;
  }
  if (*(short *)(param_1 + 0xf2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xf0);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar9;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_143f59c70;
    puVar10[2] = uVar15;
    *(uint *)(puVar10 + 3) = (uint)uVar1;
    puVar10[4] = uVar5;
  }
  uVar4 = 0;
  puVar12 = (undefined4 *)&DAT_146a612d8;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar6 = uVar4;
    uVar13 = uVar4;
    do {
      iVar11 = (int)uVar13;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar6 * 8) == &DAT_146a81840) {
        if (iVar11 != -1) {
          puVar14 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar11 * 8);
          *puVar14 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141d0e0c2;
        }
        break;
      }
      uVar13 = (ulonglong)(iVar11 + 1);
      uVar6 = uVar6 + 1;
    } while ((longlong)uVar6 < (longlong)*(int *)(param_1 + 0x10));
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar17 * 8) + 0x38) <
       DAT_146a612e0) && (_Init_thread_header(&DAT_146a612e0), DAT_146a612e0 == -1)) {
    _DAT_146a612d8 = 0;
    DAT_146a612dc = 0;
    DAT_146a612de = 0;
    _Init_thread_footer(&DAT_146a612e0);
  }
  puVar14 = (undefined4 *)&DAT_146a612d8;
LAB_141d0e0c2:
  uVar18 = (undefined4)(uVar7 >> 0x20);
  if (*(char *)((longlong)puVar14 + 6) != '\0') {
    local_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0x3f800000;
    uVar3 = FSceneRenderTargets::Get(param_2);
    FUN_141d4f100(uVar3,param_3,&local_a8);
    if (0 < *(int *)(param_1 + 0x10)) {
      uVar6 = uVar4;
      do {
        iVar11 = (int)uVar6;
        if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar4 * 8) == &DAT_146a81840) {
          if (iVar11 != -1) {
            puVar12 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar11 * 8);
            *puVar12 = *(undefined4 *)(param_1 + 0xb8);
            goto LAB_141d0e178;
          }
          break;
        }
        uVar6 = (ulonglong)(iVar11 + 1);
        uVar4 = uVar4 + 1;
      } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x10));
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar17 * 8) + 0x38) <
         DAT_146a612e0) && (_Init_thread_header(&DAT_146a612e0), DAT_146a612e0 == -1)) {
      _DAT_146a612d8 = 0;
      DAT_146a612dc = 0;
      DAT_146a612de = 0;
      _Init_thread_footer(&DAT_146a612e0);
    }
LAB_141d0e178:
    uVar18 = (undefined4)(uVar7 >> 0x20);
    if (*(char *)((longlong)puVar12 + 6) != '\0') {
      uVar7 = uVar7 & 0xffffffff00000000;
      (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_b8,&local_a8,&DAT_146a81868,uVar7);
      uVar3 = local_b8;
      uVar18 = (undefined4)(uVar7 >> 0x20);
      uVar1 = *(ushort *)(puVar12 + 1);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30);
        puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar9 = puVar10 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar9;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar10;
      *(undefined8 **)(param_2 + 8) = puVar10 + 1;
      puVar10[1] = 0;
      *puVar10 = &PTR_LAB_144d920a0;
      puVar10[2] = local_res8;
      *(uint *)(puVar10 + 3) = (uint)uVar1;
      puVar10[4] = uVar3;
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_b8);
    }
  }
  uVar7 = 0;
  FUN_141d0d180(param_1 + 0x102,param_2,&local_res8,*param_5 != 0,
                CONCAT44(uVar18,*(undefined4 *)(DAT_146a81820 + 4)),
                *(undefined8 *)(local_b0 + 0x1150));
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar4 = uVar7;
    do {
      iVar11 = (int)uVar4;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar7 * 8) == &DAT_146a1ea50) {
        if (iVar11 != -1) {
          puVar12 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar11 * 8);
          *puVar12 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141d0e30b;
        }
        break;
      }
      uVar4 = (ulonglong)(iVar11 + 1);
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < (longlong)*(int *)(param_1 + 0x10));
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar17 * 8) + 0x38) <
       DAT_146a25428) && (_Init_thread_header(&DAT_146a25428), DAT_146a25428 == -1)) {
    _DAT_146a25420 = 0;
    DAT_146a25424 = 0;
    DAT_146a25426 = 0;
    _Init_thread_footer(&DAT_146a25428);
  }
  puVar12 = (undefined4 *)&DAT_146a25420;
LAB_141d0e30b:
  if (*(char *)((longlong)puVar12 + 6) != '\0') {
    uVar1 = *(ushort *)(puVar12 + 1);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar3 = *(undefined8 *)(*(longlong *)(param_3 + 0x1a30) + 0x280);
    puVar9 = puVar10 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar9;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *(uint *)(puVar10 + 3) = (uint)uVar1;
    *puVar10 = &PTR_LAB_144d920a0;
    puVar10[2] = local_res8;
    puVar10[4] = uVar3;
  }
  uVar3 = local_res8;
  FUN_141b3c050(param_1 + 0xf4,param_2,&local_res8,param_3,param_5);
  lVar8 = FSceneRenderTargets::Get(param_2);
  if (((*(uint *)(param_3 + 0x28cc) & 0x400) == 0) || (*(longlong *)(lVar8 + 0x80) == 0)) {
    puVar9 = (undefined8 *)(DAT_146ac3e08 + 0x30);
  }
  else {
    puVar9 = (undefined8 *)(*(longlong *)(lVar8 + 0x80) + 0x10);
  }
  uVar15 = *puVar9;
  if (*(short *)(param_1 + 0x128) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x126);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar9;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_143f59c80;
    puVar10[2] = uVar3;
    *(uint *)(puVar10 + 3) = (uint)uVar1;
    puVar10[4] = uVar15;
  }
  return;
}



// FUNCTION 141d0e500 FUN_141d0e500 body=563 status=ok
// SIG undefined FUN_141d0e500(void)

void FUN_141d0e500(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint local_c8;
  uint uStack_c4;
  uint uStack_b4;
  uint uStack_b0;
  float local_a8;
  float fStack_a4;
  uint uStack_90;
  uint uStack_8c;
  uint *local_88;
  uint uStack_80;
  uint uStack_7c;
  uint local_78;
  uint *local_70;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  uint *puStack_58;
  undefined4 uStack_50;
  uint uStack_4c;
  uint uStack_48;
  
  puVar7 = (uint *)(param_1 + 0x50);
  lVar9 = 3;
  uVar8 = 0;
  fVar1 = *(float *)(param_2 + 1);
  fStack_a4 = (float)((ulonglong)*param_2 >> 0x20);
  local_a8 = (float)*param_2;
  do {
    uVar10 = puVar7[6];
    local_c8 = 0;
    uStack_c4 = 1;
    uStack_b4 = 0;
    uStack_b0 = 0;
    if (uVar10 != 0) {
      puVar12 = *(uint **)(puVar7 + 4);
      if (*(uint **)(puVar7 + 4) == (uint *)0x0) {
        puVar12 = puVar7;
      }
      uVar2 = *puVar12;
      uVar5 = uVar8;
      uVar11 = uVar8;
      while (uVar2 == 0) {
        iVar4 = (int)uVar5;
        uStack_b0 = (int)uVar11 + 0x20;
        uVar11 = (ulonglong)uStack_b0;
        local_c8 = iVar4 + 1;
        uVar5 = (ulonglong)local_c8;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
        goto LAB_141d0e5ef;
        uVar2 = puVar12[(longlong)iVar4 + 1];
      }
      uStack_c4 = -uVar2 & uVar2;
      iVar4 = 0x1f;
      if (uStack_c4 != 0) {
        for (; uStack_c4 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_c4 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_b4 = (uStack_b0 - iVar4) + 0x1f;
      if ((int)uVar10 < (int)uStack_b4) {
LAB_141d0e5ef:
        uStack_b4 = uVar10;
      }
    }
    puVar12 = puVar7 + -4;
    uStack_90 = local_c8;
    uStack_8c = uStack_c4;
    uStack_50 = 0xffffffff;
    uStack_4c = uStack_b4;
    uStack_48 = uStack_b0;
    uStack_80 = 0xffffffff;
    uStack_7c = uStack_b4;
    local_78 = uStack_b0;
    local_88 = puVar7;
    local_70 = puVar12;
    local_68 = puVar12;
    puStack_58 = puVar7;
    uStack_60 = uStack_90;
    uStack_5c = uStack_8c;
    if ((int)uStack_b4 < (int)uVar10) {
      do {
        lVar6 = (longlong)(int)uStack_7c * 0xf0 + *(longlong *)puVar12;
        uVar5 = uVar8;
        uVar11 = uVar8;
        if (0 < *(int *)(lVar6 + 0x18)) {
          do {
            lVar3 = *(longlong *)(lVar6 + 0x10);
            uVar10 = (int)uVar11 + 1;
            *(float *)(uVar5 + 0x10 + lVar3) = local_a8 + *(float *)(uVar5 + 0x10 + lVar3);
            *(float *)(uVar5 + 0x14 + lVar3) = fStack_a4 + *(float *)(uVar5 + 0x14 + lVar3);
            *(float *)(uVar5 + 0x18 + lVar3) = fVar1 + *(float *)(uVar5 + 0x18 + lVar3);
            uVar5 = uVar5 + 0x38;
            uVar11 = (ulonglong)uVar10;
          } while ((int)uVar10 < *(int *)(lVar6 + 0x18));
        }
        uStack_80 = uStack_80 & ~uStack_8c;
        *(float *)(lVar6 + 0xc4) = local_a8 + *(float *)(lVar6 + 0xc4);
        *(float *)(lVar6 + 200) = fStack_a4 + *(float *)(lVar6 + 200);
        *(float *)(lVar6 + 0xcc) = fVar1 + *(float *)(lVar6 + 0xcc);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
      } while ((int)uStack_7c < (int)local_88[6]);
    }
    puVar7 = puVar7 + 0x26;
    lVar9 = lVar9 + -1;
    if (lVar9 == 0) {
      return;
    }
  } while( true );
}



// FUNCTION 141d0e740 FUN_141d0e740 body=563 status=ok
// SIG undefined FUN_141d0e740(void)

void FUN_141d0e740(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint local_c8;
  uint uStack_c4;
  uint uStack_b4;
  uint uStack_b0;
  float local_a8;
  float fStack_a4;
  uint uStack_90;
  uint uStack_8c;
  uint *local_88;
  uint uStack_80;
  uint uStack_7c;
  uint local_78;
  uint *local_70;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  uint *puStack_58;
  undefined4 uStack_50;
  uint uStack_4c;
  uint uStack_48;
  
  puVar7 = (uint *)(param_1 + 0x50);
  lVar9 = 3;
  uVar8 = 0;
  fVar1 = *(float *)(param_2 + 1);
  fStack_a4 = (float)((ulonglong)*param_2 >> 0x20);
  local_a8 = (float)*param_2;
  do {
    uVar10 = puVar7[6];
    local_c8 = 0;
    uStack_c4 = 1;
    uStack_b4 = 0;
    uStack_b0 = 0;
    if (uVar10 != 0) {
      puVar12 = *(uint **)(puVar7 + 4);
      if (*(uint **)(puVar7 + 4) == (uint *)0x0) {
        puVar12 = puVar7;
      }
      uVar2 = *puVar12;
      uVar5 = uVar8;
      uVar11 = uVar8;
      while (uVar2 == 0) {
        iVar4 = (int)uVar5;
        uStack_b0 = (int)uVar11 + 0x20;
        uVar11 = (ulonglong)uStack_b0;
        local_c8 = iVar4 + 1;
        uVar5 = (ulonglong)local_c8;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
        goto LAB_141d0e82f;
        uVar2 = puVar12[(longlong)iVar4 + 1];
      }
      uStack_c4 = -uVar2 & uVar2;
      iVar4 = 0x1f;
      if (uStack_c4 != 0) {
        for (; uStack_c4 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_c4 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_b4 = (uStack_b0 - iVar4) + 0x1f;
      if ((int)uVar10 < (int)uStack_b4) {
LAB_141d0e82f:
        uStack_b4 = uVar10;
      }
    }
    puVar12 = puVar7 + -4;
    uStack_90 = local_c8;
    uStack_8c = uStack_c4;
    uStack_50 = 0xffffffff;
    uStack_4c = uStack_b4;
    uStack_48 = uStack_b0;
    uStack_80 = 0xffffffff;
    uStack_7c = uStack_b4;
    local_78 = uStack_b0;
    local_88 = puVar7;
    local_70 = puVar12;
    local_68 = puVar12;
    puStack_58 = puVar7;
    uStack_60 = uStack_90;
    uStack_5c = uStack_8c;
    if ((int)uStack_b4 < (int)uVar10) {
      do {
        lVar6 = (longlong)(int)uStack_7c * 0xe0 + *(longlong *)puVar12;
        uVar5 = uVar8;
        uVar11 = uVar8;
        if (0 < *(int *)(lVar6 + 0x18)) {
          do {
            lVar3 = *(longlong *)(lVar6 + 0x10);
            uVar10 = (int)uVar11 + 1;
            *(float *)(uVar5 + 0x10 + lVar3) = local_a8 + *(float *)(uVar5 + 0x10 + lVar3);
            *(float *)(uVar5 + 0x14 + lVar3) = fStack_a4 + *(float *)(uVar5 + 0x14 + lVar3);
            *(float *)(uVar5 + 0x18 + lVar3) = fVar1 + *(float *)(uVar5 + 0x18 + lVar3);
            uVar5 = uVar5 + 0x38;
            uVar11 = (ulonglong)uVar10;
          } while ((int)uVar10 < *(int *)(lVar6 + 0x18));
        }
        uStack_80 = uStack_80 & ~uStack_8c;
        *(float *)(lVar6 + 0xb4) = local_a8 + *(float *)(lVar6 + 0xb4);
        *(float *)(lVar6 + 0xb8) = fStack_a4 + *(float *)(lVar6 + 0xb8);
        *(float *)(lVar6 + 0xbc) = fVar1 + *(float *)(lVar6 + 0xbc);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
      } while ((int)uStack_7c < (int)local_88[6]);
    }
    puVar7 = puVar7 + 0x26;
    lVar9 = lVar9 + -1;
    if (lVar9 == 0) {
      return;
    }
  } while( true );
}



// FUNCTION 141d0e980 Swap<TArray<FPrimitiveSceneInfoCompact,TInlineAllocator<256,FDefaultAllocator>_>_> body=140 status=ok
// SIG undefined Swap<TArray<FPrimitiveSceneInfoCompact,TInlineAllocator<256,FDefaultAllocator>_>_>(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Swap<TArray<FPrimitiveSceneInfoCompact,TInlineAllocator<256,FDefaultAllocator>_>_>
               (void *param_1,void *param_2)

{
  undefined1 auStack_4048 [32];
  undefined1 local_4028 [16400];
  ulonglong local_18;
  undefined8 uStack_10;
  
  if (param_1 != param_2) {
    uStack_10 = 0x141d0e999;
    local_18 = DAT_1468387a8 ^ (ulonglong)auStack_4048;
    _guard_xfg_dispatch_icall_nop(local_4028,param_1,0x4010);
    _guard_xfg_dispatch_icall_nop(param_1,param_2,0x4010);
    _guard_xfg_dispatch_icall_nop(param_2,local_4028,0x4010);
  }
  return;
}



// FUNCTION 141d0ea10 FUN_141d0ea10 body=142 status=ok
// SIG undefined FUN_141d0ea10(void)

undefined8 * FUN_141d0ea10(undefined8 *param_1)

{
  char cVar1;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_144e48120;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    FRenderResource::InitResource();
    return param_1;
  }
  FUN_141edf270(param_1);
  return param_1;
}



// FUNCTION 141d0eaa0 FUN_141d0eaa0 body=142 status=ok
// SIG undefined FUN_141d0eaa0(void)

undefined8 * FUN_141d0eaa0(undefined8 *param_1)

{
  char cVar1;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e48020;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    FRenderResource::InitResource();
    return param_1;
  }
  FUN_141edf270(param_1);
  return param_1;
}



// FUNCTION 141d0eb30 FUN_141d0eb30 body=142 status=ok
// SIG undefined FUN_141d0eb30(void)

undefined8 * FUN_141d0eb30(undefined8 *param_1)

{
  char cVar1;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e48060;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    FRenderResource::InitResource();
    return param_1;
  }
  FUN_141edf270(param_1);
  return param_1;
}



// FUNCTION 141d0ebc0 VisualizeTexturePS<2> body=512 status=ok
// SIG undefined VisualizeTexturePS<2>(void)

undefined8 * VisualizeTexturePS<2>::VisualizeTexturePS<2>(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e34ab0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  FShaderResourceParameter::Bind
            (param_1 + 0x18,*(undefined8 *)(param_2 + 0x18),L"VisualizeTexture2D",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xc4,*(undefined8 *)(param_2 + 0x18),
             L"VisualizeDepthStencilTexture",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x19,*(undefined8 *)(param_2 + 0x18),L"VisualizeTexture2DSampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xcc,*(undefined8 *)(param_2 + 0x18),L"VisualizeTexture2DMS",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x1a,*(undefined8 *)(param_2 + 0x18),L"VisualizeTexture3D",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xd4,*(undefined8 *)(param_2 + 0x18),L"VisualizeTexture3DSampler",0
            );
  FShaderResourceParameter::Bind
            (param_1 + 0x1b,*(undefined8 *)(param_2 + 0x18),L"VisualizeTextureCube",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xdc,*(undefined8 *)(param_2 + 0x18),L"VisualizeTextureCubeSampler"
             ,0);
  FShaderResourceParameter::Bind
            (param_1 + 0x1c,*(undefined8 *)(param_2 + 0x18),L"VisualizeTextureCubeArray",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xe4,*(undefined8 *)(param_2 + 0x18),
             L"VisualizeTextureCubeArraySampler",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xec,*(undefined8 *)(param_2 + 0x18),L"VisualizeParam",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xf2,*(undefined8 *)(param_2 + 0x18),L"TextureExtent",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x1d,*(undefined8 *)(param_2 + 0x18),L"VisualizeUINT8Texture2D",0);
  return param_1;
}



// FUNCTION 141d0edc0 EURCMacro_FUpdateDrawLists body=108 status=ok
// SIG undefined EURCMacro_FUpdateDrawLists(void)

undefined8 *
`FScene::UpdateStaticDrawListsForMaterials'::`2'::EURCMacro_FUpdateDrawLists::
EURCMacro_FUpdateDrawLists(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 1,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[1],_Src,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 141d0ee30 FConvexVolume body=250 status=ok
// SIG undefined FConvexVolume(void)

void * FConvexVolume::FConvexVolume(void *param_1,void *param_2)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  iVar1 = *(int *)((longlong)param_2 + 0x70);
  pvVar3 = *(void **)((longlong)param_2 + 0x60);
  *(int *)((longlong)param_1 + 0x70) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  }
  else {
    TArray<FPlane,TInlineAllocator<6,FDefaultAllocator>_>::ResizeForCopy(param_1,iVar1,0);
    if (pvVar3 == (void *)0x0) {
      pvVar3 = param_2;
    }
    pvVar2 = *(void **)((longlong)param_1 + 0x60);
    if (*(void **)((longlong)param_1 + 0x60) == (void *)0x0) {
      pvVar2 = param_1;
    }
    ::_guard_xfg_dispatch_icall_nop(pvVar2,pvVar3,(longlong)iVar1 << 4);
  }
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  iVar1 = *(int *)((longlong)param_2 + 0x110);
  pvVar3 = *(void **)((longlong)param_2 + 0x100);
  *(int *)((longlong)param_1 + 0x110) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  }
  else {
    TArray<FPlane,TInlineAllocator<8,FDefaultAllocator>_>::ResizeForCopy
              ((void *)((longlong)param_1 + 0x80),iVar1,0);
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)((longlong)param_2 + 0x80);
    }
    pvVar2 = *(void **)((longlong)param_1 + 0x100);
    if (*(void **)((longlong)param_1 + 0x100) == (void *)0x0) {
      pvVar2 = (void *)((longlong)param_1 + 0x80);
    }
    ::_guard_xfg_dispatch_icall_nop(pvVar2,pvVar3,(longlong)iVar1 << 4);
  }
  return param_1;
}



// FUNCTION 141d0ef30 FCopyDiffuseIrradiancePS body=345 status=ok
// SIG undefined FCopyDiffuseIrradiancePS(void)

undefined8 *
FCopyDiffuseIrradiancePS::FCopyDiffuseIrradiancePS(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e46d60;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xce) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xde) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe6) = 0;
  *(undefined2 *)((longlong)param_1 + 0xea) = 0;
  FShaderParameter::Bind(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18),L"CubeFace",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xc6,*(undefined8 *)(param_2 + 0x18),L"SourceMipIndex",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xcc,*(undefined8 *)(param_2 + 0x18),L"SourceTexture",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x1a,*(undefined8 *)(param_2 + 0x18),L"SourceTextureSampler",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xd4,*(undefined8 *)(param_2 + 0x18),L"CoefficientMask0",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xda,*(undefined8 *)(param_2 + 0x18),L"CoefficientMask1",0);
  FShaderParameter::Bind(param_1 + 0x1c,*(undefined8 *)(param_2 + 0x18),L"CoefficientMask2",0);
  FShaderParameter::Bind((longlong)param_1 + 0xe6,*(undefined8 *)(param_2 + 0x18),L"NumSamples",0);
  return param_1;
}



// FUNCTION 141d0f090 FCubeFilterPS body=232 status=ok
// SIG undefined FCubeFilterPS(void)

undefined8 * FCubeFilterPS::FCubeFilterPS(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144dc9898;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xce) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd6) = 0;
  FShaderParameter::Bind(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18),L"CubeFace",0);
  FShaderParameter::Bind((longlong)param_1 + 0xc6,*(undefined8 *)(param_2 + 0x18),L"MipIndex",0);
  FShaderParameter::Bind((longlong)param_1 + 0xcc,*(undefined8 *)(param_2 + 0x18),L"NumMips",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xd2,*(undefined8 *)(param_2 + 0x18),L"SourceTexture",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xd6,*(undefined8 *)(param_2 + 0x18),L"SourceTextureSampler",0);
  return param_1;
}



// FUNCTION 141d0f180 FUN_141d0f180 body=643 status=ok
// SIG undefined FUN_141d0f180(void)

undefined4 * FUN_141d0f180(undefined4 *param_1,uint param_2)

{
  void *pvVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  int *piVar6;
  
  pvVar1 = ThreadLocalStoragePointer;
  piVar6 = (int *)0x0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x22] = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  param_1[0x38] = 0xffffffff;
  param_1[0x39] = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  param_1[0x3e] = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  param_1[0x54] = 0xffffffff;
  param_1[0x55] = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  param_1[0x5a] = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x5e) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x66) = 0;
  param_1[0x68] = 0;
  if (*(int *)(*(longlong *)((longlong)pvVar1 + (ulonglong)_tls_index * 8) + 0x38) < DAT_146a83c98)
  {
    _Init_thread_header(&DAT_146a83c98);
    if (DAT_146a83c98 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar5 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.GenerateMeshDistanceFields");
      if (plVar5 != (longlong *)0x0) {
        piVar6 = (int *)(**(code **)(*plVar5 + 0x38))(plVar5);
      }
      DAT_146a83c90 = piVar6;
      _Init_thread_footer(&DAT_146a83c98);
    }
  }
  if ((param_2 < 0x1f) && ((0x40000015U >> (param_2 & 0x1f) & 1) != 0)) {
LAB_141d0f341:
    if (*DAT_146a83c90 != 0) {
      uVar2 = 1;
      goto LAB_141d0f353;
    }
  }
  else {
    if ((param_2 < 0x1c) && ((0x8c51800U >> (param_2 & 0x1f) & 1) != 0)) {
      iVar3 = FUN_1419ef5f0(param_2);
      if (2 < iVar3) {
        uVar4 = RHIGetShaderLanguageVersion(param_2);
        if (1 < uVar4) goto LAB_141d0f341;
      }
    }
    if ((param_2 < 0x20) && ((0x90100000U >> (param_2 & 0x1f) & 1) != 0)) goto LAB_141d0f341;
    if ((param_2 < 0x1c) && ((0x8c51800U >> (param_2 & 0x1f) & 1) != 0)) {
      iVar3 = FUN_1419ef5f0(param_2);
      if (2 < iVar3) {
        uVar4 = RHIGetShaderLanguageVersion(param_2);
        if (1 < uVar4) goto LAB_141d0f341;
      }
    }
  }
  uVar2 = 0;
LAB_141d0f353:
  *(undefined1 *)(param_1 + 0x69) = uVar2;
  if ((param_2 < 0x1c) && ((0x8c51800U >> (param_2 & 0x1f) & 1) != 0)) {
    *(undefined1 *)((longlong)param_1 + 0x1a5) = 0;
    return param_1;
  }
  *(undefined1 *)((longlong)param_1 + 0x1a5) = 1;
  return param_1;
}



// FUNCTION 141d0f410 FDrawListStats body=369 status=ok
// SIG undefined FDrawListStats(void)

undefined4 * FDrawListStats::FDrawListStats(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  param_1[0x18] = 0;
  TSparseArray<TSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=(param_1 + 6,param_2 + 6);
  if (*(longlong *)(param_2 + 0x16) == 0) {
    ::_guard_xfg_dispatch_icall_nop(param_1 + 0x14,param_2 + 0x14,4);
  }
  if (*(longlong *)(param_1 + 0x16) != 0) {
    FMemory::Free();
  }
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_2 + 0x16) = 0;
  param_1[0x18] = param_2[0x18];
  param_2[0x18] = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  param_1[0x2c] = 0;
  TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=(param_1 + 0x1a,param_2 + 0x1a);
  if (*(longlong *)(param_2 + 0x2a) == 0) {
    ::_guard_xfg_dispatch_icall_nop(param_1 + 0x28,param_2 + 0x28,4);
  }
  if (*(longlong *)(param_1 + 0x2a) != 0) {
    FMemory::Free();
  }
  *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_2 + 0x2a);
  *(undefined8 *)(param_2 + 0x2a) = 0;
  param_1[0x2c] = param_2[0x2c];
  param_2[0x2c] = 0;
  return param_1;
}



// FUNCTION 141d0f590 FUN_141d0f590 body=566 status=ok
// SIG undefined FUN_141d0f590(void)

longlong FUN_141d0f590(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  void *pvVar4;
  
  FUN_140a25aa0();
  *(undefined8 *)(param_1 + 0x6b8) = 0;
  iVar1 = *(int *)(param_2 + 0x6c0);
  pvVar4 = *(void **)(param_2 + 0x6b8);
  *(int *)(param_1 + 0x6c0) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x6c4) = 0;
  }
  else {
    TArray<FFinalPostProcessSettings::FCubemapEntry,TInlineAllocator<8,FDefaultAllocator>_>::
    ResizeForCopy((void *)(param_1 + 0x5f8),iVar1,0);
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)(param_2 + 0x5f8);
    }
    pvVar3 = *(void **)(param_1 + 0x6b8);
    if (*(void **)(param_1 + 0x6b8) == (void *)0x0) {
      pvVar3 = (void *)(param_1 + 0x5f8);
    }
    _guard_xfg_dispatch_icall_nop(pvVar3,pvVar4,(longlong)iVar1 * 0x18);
  }
  *(undefined8 *)(param_1 + 0x748) = 0;
  iVar1 = *(int *)(param_2 + 0x750);
  pvVar4 = *(void **)(param_2 + 0x748);
  *(int *)(param_1 + 0x750) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x754) = 0;
  }
  else {
    TArray<FObjectInitializer::FOverrides::FOverride,TInlineAllocator<8,FDefaultAllocator>_>::
    ResizeForCopy((void *)(param_1 + 0x6c8),iVar1,0);
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)(param_2 + 0x6c8);
    }
    pvVar3 = *(void **)(param_1 + 0x748);
    if (*(void **)(param_1 + 0x748) == (void *)0x0) {
      pvVar3 = (void *)(param_1 + 0x6c8);
    }
    _guard_xfg_dispatch_icall_nop(pvVar3,pvVar4,(longlong)iVar1 << 4);
  }
  *(undefined8 *)(param_1 + 0x758) = 0;
  iVar1 = *(int *)(param_2 + 0x760);
  pvVar4 = *(void **)(param_2 + 0x758);
  *(int *)(param_1 + 0x760) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x764) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 0x758,iVar1,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x758),pvVar4,(longlong)iVar1 << 3);
  }
  *(undefined8 *)(param_1 + 0x768) = *(undefined8 *)(param_2 + 0x768);
  *(undefined8 *)(param_1 + 0x770) = *(undefined8 *)(param_2 + 0x770);
  *(undefined8 *)(param_1 + 0x778) = *(undefined8 *)(param_2 + 0x778);
  *(undefined1 *)(param_1 + 0x780) = *(undefined1 *)(param_2 + 0x780);
  FString::FString(param_1 + 0x788,param_2 + 0x788);
  *(undefined8 *)(param_1 + 0x798) = 0;
  iVar1 = *(int *)(param_2 + 0x7a0);
  pvVar4 = *(void **)(param_2 + 0x798);
  *(int *)(param_1 + 0x7a0) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x7a4) = 0;
  }
  else {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_1 + 0x798,iVar1,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x798),pvVar4,(longlong)iVar1);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x7b0);
  *(undefined8 *)(param_1 + 0x7a8) = *(undefined8 *)(param_2 + 0x7a8);
  *(undefined8 *)(param_1 + 0x7b0) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x7c0);
  *(undefined8 *)(param_1 + 0x7b8) = *(undefined8 *)(param_2 + 0x7b8);
  *(undefined8 *)(param_1 + 0x7c0) = uVar2;
  return param_1;
}



// FUNCTION 141d0f7d0 FLatentGPUTimer body=168 status=ok
// SIG undefined FLatentGPUTimer(void)

int * FLatentGPUTimer::FLatentGPUTimer(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
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
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  iVar1 = *param_1;
  iVar2 = param_1[4];
  iVar3 = iVar2 + iVar1;
  param_1[4] = iVar3;
  if (param_1[5] < iVar3) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 2);
  }
  ::_guard_xfg_dispatch_icall_nop
            ((void *)(*(longlong *)(param_1 + 2) + (longlong)iVar2 * 4),0,(longlong)iVar1 << 2);
  return param_1;
}



// FUNCTION 141d0f880 FNode body=100 status=ok
// SIG undefined FNode(void)

longlong TOctree<FLightSceneInfoCompact,FLightOctreeSemantics>::FNode::FNode
                   (longlong param_1,undefined8 param_2)

{
  uint uVar1;
  
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x310) = 0;
  uVar1 = 0;
  *(undefined8 *)(param_1 + 800) = param_2;
  *(undefined4 *)(param_1 + 0x368) = 0x80000000;
  do {
    *(undefined8 *)(param_1 + 0x328 + (ulonglong)(uVar1 & 7) * 8) = 0;
    if (((byte)uVar1 & 7) < 7) {
      uVar1 = uVar1 ^ (uVar1 + 1 ^ uVar1) & 7;
    }
    else {
      uVar1 = uVar1 | 8;
    }
  } while (uVar1 >> 3 == 0);
  return param_1;
}



// FUNCTION 141d0f8f0 FNode body=100 status=ok
// SIG undefined FNode(void)

longlong TOctree<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::FNode::FNode
                   (longlong param_1,undefined8 param_2)

{
  uint uVar1;
  
  *(undefined8 *)(param_1 + 0x4000) = 0;
  *(undefined8 *)(param_1 + 0x4008) = 0;
  uVar1 = 0;
  *(undefined8 *)(param_1 + 0x4010) = param_2;
  *(undefined4 *)(param_1 + 0x4058) = 0x80000000;
  do {
    *(undefined8 *)(param_1 + 0x4018 + (ulonglong)(uVar1 & 7) * 8) = 0;
    if (((byte)uVar1 & 7) < 7) {
      uVar1 = uVar1 ^ (uVar1 + 1 ^ uVar1) & 7;
    }
    else {
      uVar1 = uVar1 | 8;
    }
  } while (uVar1 >> 3 == 0);
  return param_1;
}



// FUNCTION 141d0f960 FUN_141d0f960 body=144 status=ok
// SIG undefined FUN_141d0f960(void)

longlong FUN_141d0f960(longlong param_1)

{
  FUN_1404546d0();
  *(undefined8 *)(param_1 + 0x570) = 0;
  *(undefined8 *)(param_1 + 0x578) = 0;
  *(undefined8 *)(param_1 + 0x588) = 0;
  *(undefined8 *)(param_1 + 0x590) = 0;
  *(undefined8 *)(param_1 + 0x5a0) = 0;
  *(undefined8 *)(param_1 + 0x5a8) = 0;
  *(undefined8 *)(param_1 + 0x5b8) = 0;
  *(undefined8 *)(param_1 + 0x5c0) = 0;
  *(undefined8 *)(param_1 + 0x5d0) = 0;
  *(undefined8 *)(param_1 + 0x5d8) = 0;
  *(undefined8 *)(param_1 + 0x5e8) = 0;
  *(undefined8 *)(param_1 + 0x5f0) = 0;
  *(undefined8 *)(param_1 + 0x600) = 0;
  *(undefined8 *)(param_1 + 0x608) = 0;
  *(undefined8 *)(param_1 + 0x618) = 0;
  *(undefined8 *)(param_1 + 0x620) = 0;
  *(undefined8 *)(param_1 + 0x630) = 0;
  return param_1;
}



// FUNCTION 141d0f9f0 FUN_141d0f9f0 body=463 status=ok
// SIG undefined FUN_141d0f9f0(void)

undefined8 * FUN_141d0f9f0(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_144e47e78;
  param_1[1] = *(undefined8 *)(param_2 + 0x640);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x354);
  param_1[3] = param_2 + 0x36c;
  param_1[4] = param_2 + 0x370;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(uint *)(param_1 + 0x11) = *(uint *)(param_1 + 0x11) | 1;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0xff7fffff;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1b] = param_3;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  bVar2 = (**(code **)(*(longlong *)param_1[1] + 0x150))();
  *(byte *)((longlong)param_1 + 0xe4) = *(byte *)((longlong)param_1 + 0xe4) & 0xfe;
  *(byte *)((longlong)param_1 + 0xe4) = *(byte *)((longlong)param_1 + 0xe4) | bVar2 & 1;
  bVar2 = (**(code **)(*(longlong *)param_1[1] + 0x160))();
  *(byte *)((longlong)param_1 + 0xe4) = *(byte *)((longlong)param_1 + 0xe4) & 0xfd;
  *(undefined4 *)(param_1 + 0x1d) = 0xffffffff;
  param_1[0x1e] = param_2;
  *(byte *)((longlong)param_1 + 0xe4) = *(byte *)((longlong)param_1 + 0xe4) | (bVar2 & 1) * '\x02';
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)((longlong)param_1 + 0xfc) = 0;
  *(byte *)((longlong)param_1 + 0xfd) = (byte)(*(uint *)(param_2 + 0x398) >> 1) & 1;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x39c);
  lVar3 = FUN_14238b2f0(param_2);
  if (lVar3 != 0) {
    lVar4 = FUN_1429f11d0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar3 != param_2)) {
      *(undefined4 *)(param_1 + 5) = *(undefined4 *)(lVar3 + 0x354);
    }
  }
  lVar3 = FUN_14238b970(param_2);
  if (lVar3 != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(lVar3 + 0x354);
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return param_1;
}



// FUNCTION 141d0fbc0 FUN_141d0fbc0 body=157 status=ok
// SIG undefined FUN_141d0fbc0(void)

longlong FUN_141d0fbc0(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = 0x155;
  puVar1 = (undefined4 *)(param_1 + 8);
  lVar4 = 0x155;
  do {
    *(undefined8 *)(puVar1 + -2) = 0;
    *puVar1 = 0;
    puVar1[1] = 0x3f800000;
    puVar1 = puVar1 + 4;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  puVar2 = (undefined8 *)(param_1 + 0x1550);
  lVar4 = 0x155;
  do {
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 0;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0x3f800000;
    puVar2 = puVar2 + 2;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  puVar2 = (undefined8 *)(param_1 + 0x2aa0);
  lVar4 = 0x155;
  do {
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 0;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0x3f800000;
    puVar2 = puVar2 + 2;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  puVar2 = (undefined8 *)(param_1 + 0xaa80);
  do {
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 0;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0x3f800000;
    puVar2 = puVar2 + 2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return param_1;
}



// FUNCTION 141d0fc60 FUN_141d0fc60 body=802 status=ok
// SIG undefined FUN_141d0fc60(void)

undefined8 * FUN_141d0fc60(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e34a80;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xce) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x102) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x112) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x122) = 0;
  *(undefined4 *)((longlong)param_1 + 0x126) = 0;
  FUN_141cdf500(param_2);
  FShaderResourceParameter::Bind
            (param_1 + 0x1a,*(undefined8 *)(param_2 + 0x18),L"ReflectionCubemap",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xd4,*(undefined8 *)(param_2 + 0x18),L"ReflectionCubemap_Sun",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x1b,*(undefined8 *)(param_2 + 0x18),L"ReflectionCubemap_Sky",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xdc,*(undefined8 *)(param_2 + 0x18),L"ReflectionCubemap_Mask",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x1c,*(undefined8 *)(param_2 + 0x18),L"ReflectionCubemapSampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xe4,*(undefined8 *)(param_2 + 0x18),
             L"ScreenSpaceReflectionsTexture",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x1d,*(undefined8 *)(param_2 + 0x18),L"ScreenSpaceReflectionsSampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xec,*(undefined8 *)(param_2 + 0x18),L"PreIntegratedGF",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x1e,*(undefined8 *)(param_2 + 0x18),L"PreIntegratedGFSampler",0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  FShaderResourceParameter::Bind((longlong)param_1 + 0xf4,uVar1,L"BentNormalAOTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0x1f,uVar1,L"BentNormalAOSampler",0);
  FShaderParameter::Bind((longlong)param_1 + 0xfc,uVar1,L"AOBufferBilinearUVMax",0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  FShaderParameter::Bind((undefined8 *)((longlong)param_1 + 0x102),uVar1,L"ApplyBentNormalAO",0);
  FShaderParameter::Bind(param_1 + 0x21,uVar1,L"InvSkySpecularOcclusionStrength",0);
  FShaderParameter::Bind((longlong)param_1 + 0x10e,uVar1,L"OcclusionTintAndMinOcclusion",0);
  FShaderParameter::Bind((longlong)param_1 + 0x114,uVar1,L"ContrastAndNormalizeMulAdd",0);
  FShaderParameter::Bind((longlong)param_1 + 0x11a,uVar1,L"OcclusionExponent",0);
  FShaderParameter::Bind(param_1 + 0x24,uVar1,L"OcclusionCombineMode",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x126,*(undefined8 *)(param_2 + 0x18),L"LightingChannelsTexture",0)
  ;
  return param_1;
}



// FUNCTION 141d0ff90 FUN_141d0ff90 body=157 status=ok
// SIG undefined FUN_141d0ff90(void)

undefined8 * FUN_141d0ff90(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e34a80;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xce) = 0;
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
  *(undefined2 *)(param_1 + 0x25) = 0;
  return param_1;
}



// FUNCTION 141d10030 FUN_141d10030 body=4734 status=ok
// SIG undefined FUN_141d10030(void)

undefined8 *
FUN_141d10030(undefined8 *param_1,undefined8 param_2,undefined1 param_3,byte param_4,char param_5,
             int param_6)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *pvVar4;
  char cVar5;
  undefined1 uVar6;
  DWORD DVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  float fVar19;
  
  *(int *)(param_1 + 1) = param_6;
  lVar12 = 0;
  *param_1 = &PTR_FUN_144e48160;
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0xf) = 4;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0xe] = &PTR__scalar_deleting_destructor__144e47fe0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  cVar5 = IsInRenderingThread();
  if (cVar5 == '\0') {
    FUN_141edf270(param_1 + 0xe);
  }
  else {
    FRenderResource::InitResource();
  }
  FUN_141d0eaa0(param_1 + 0x21);
  FUN_141d0eaa0(param_1 + 0x34);
  puVar14 = param_1 + 0x47;
  lVar16 = 3;
  lVar17 = 3;
  lVar15 = (longlong)param_1 + 0x2a4;
  do {
    *(undefined4 *)(lVar15 + -100) = 4;
    lVar17 = lVar17 + -1;
    *(undefined8 *)(lVar15 + -0x5c) = 0;
    *(undefined8 *)(lVar15 + -0x54) = 0;
    *(undefined1 *)(lVar15 + -0x44) = 0;
    *puVar14 = &PTR__scalar_deleting_destructor__144e48020;
    *(undefined8 *)(lVar15 + -0x3c) = 0;
    *(undefined8 *)(lVar15 + -0x34) = 0;
    *(undefined8 *)(lVar15 + -0x2c) = 0;
    *(undefined8 *)(lVar15 + -0x24) = 0;
    *(undefined8 *)(lVar15 + -0xc) = 0;
    *(undefined8 *)(lVar15 + -4) = 0;
    *(undefined4 *)(lVar15 + 4) = 0xffffffff;
    *(undefined4 *)(lVar15 + 8) = 0;
    *(undefined8 *)(lVar15 + 0x14) = 0;
    *(undefined4 *)(lVar15 + 0x1c) = 0;
    *(undefined4 *)(lVar15 + 0x24) = 0xffffffff;
    *(undefined4 *)(lVar15 + 0x28) = 0;
    cVar5 = IsInRenderingThread();
    if (cVar5 == '\0') {
      FUN_141edf270(puVar14);
    }
    else {
      FRenderResource::InitResource();
    }
    puVar14 = puVar14 + 0x13;
    lVar15 = lVar15 + 0x98;
  } while (lVar17 != 0);
  lVar17 = 3;
  puVar14 = param_1 + 0x80;
  lVar15 = (longlong)param_1 + 0x46c;
  do {
    *(undefined4 *)(lVar15 + -100) = 4;
    lVar17 = lVar17 + -1;
    *(undefined8 *)(lVar15 + -0x5c) = 0;
    *(undefined8 *)(lVar15 + -0x54) = 0;
    *(undefined1 *)(lVar15 + -0x44) = 0;
    *puVar14 = &PTR__scalar_deleting_destructor__144e48020;
    *(undefined8 *)(lVar15 + -0x3c) = 0;
    *(undefined8 *)(lVar15 + -0x34) = 0;
    *(undefined8 *)(lVar15 + -0x2c) = 0;
    *(undefined8 *)(lVar15 + -0x24) = 0;
    *(undefined8 *)(lVar15 + -0xc) = 0;
    *(undefined8 *)(lVar15 + -4) = 0;
    *(undefined4 *)(lVar15 + 4) = 0xffffffff;
    *(undefined4 *)(lVar15 + 8) = 0;
    *(undefined8 *)(lVar15 + 0x14) = 0;
    *(undefined4 *)(lVar15 + 0x1c) = 0;
    *(undefined4 *)(lVar15 + 0x24) = 0xffffffff;
    *(undefined4 *)(lVar15 + 0x28) = 0;
    cVar5 = IsInRenderingThread();
    if (cVar5 == '\0') {
      FUN_141edf270(puVar14);
    }
    else {
      FRenderResource::InitResource();
    }
    puVar14 = puVar14 + 0x13;
    lVar15 = lVar15 + 0x98;
  } while (lVar17 != 0);
  puVar14 = param_1 + 0xb9;
  lVar17 = 3;
  lVar15 = (longlong)param_1 + 0x634;
  do {
    *(undefined4 *)(lVar15 + -100) = 4;
    lVar17 = lVar17 + -1;
    *(undefined8 *)(lVar15 + -0x5c) = 0;
    *(undefined8 *)(lVar15 + -0x54) = 0;
    *(undefined1 *)(lVar15 + -0x44) = 0;
    *puVar14 = &PTR__scalar_deleting_destructor__144e48020;
    *(undefined8 *)(lVar15 + -0x3c) = 0;
    *(undefined8 *)(lVar15 + -0x34) = 0;
    *(undefined8 *)(lVar15 + -0x2c) = 0;
    *(undefined8 *)(lVar15 + -0x24) = 0;
    *(undefined8 *)(lVar15 + -0xc) = 0;
    *(undefined8 *)(lVar15 + -4) = 0;
    *(undefined4 *)(lVar15 + 4) = 0xffffffff;
    *(undefined4 *)(lVar15 + 8) = 0;
    *(undefined8 *)(lVar15 + 0x14) = 0;
    *(undefined4 *)(lVar15 + 0x1c) = 0;
    *(undefined4 *)(lVar15 + 0x24) = 0xffffffff;
    *(undefined4 *)(lVar15 + 0x28) = 0;
    cVar5 = IsInRenderingThread();
    if (cVar5 == '\0') {
      FUN_141edf270(puVar14);
    }
    else {
      FRenderResource::InitResource();
    }
    puVar14 = puVar14 + 0x13;
    lVar15 = lVar15 + 0x98;
  } while (lVar17 != 0);
  lVar17 = 3;
  puVar14 = param_1 + 0xf2;
  lVar15 = (longlong)param_1 + 0x7fc;
  do {
    *(undefined4 *)(lVar15 + -100) = 4;
    lVar17 = lVar17 + -1;
    *(undefined8 *)(lVar15 + -0x5c) = 0;
    *(undefined8 *)(lVar15 + -0x54) = 0;
    *(undefined1 *)(lVar15 + -0x44) = 0;
    *puVar14 = &PTR__scalar_deleting_destructor__144e48020;
    *(undefined8 *)(lVar15 + -0x3c) = 0;
    *(undefined8 *)(lVar15 + -0x34) = 0;
    *(undefined8 *)(lVar15 + -0x2c) = 0;
    *(undefined8 *)(lVar15 + -0x24) = 0;
    *(undefined8 *)(lVar15 + -0xc) = 0;
    *(undefined8 *)(lVar15 + -4) = 0;
    *(undefined4 *)(lVar15 + 4) = 0xffffffff;
    *(undefined4 *)(lVar15 + 8) = 0;
    *(undefined8 *)(lVar15 + 0x14) = 0;
    *(undefined4 *)(lVar15 + 0x1c) = 0;
    *(undefined4 *)(lVar15 + 0x24) = 0xffffffff;
    *(undefined4 *)(lVar15 + 0x28) = 0;
    cVar5 = IsInRenderingThread();
    if (cVar5 == '\0') {
      FUN_141edf270(puVar14);
    }
    else {
      FRenderResource::InitResource();
    }
    puVar14 = puVar14 + 0x13;
    lVar15 = lVar15 + 0x98;
  } while (lVar17 != 0);
  FUN_141d0eb30(param_1 + 299);
  FUN_141d0eb30(param_1 + 0x13e);
  *(undefined4 *)(param_1 + 0x152) = 4;
  param_1[0x153] = 0;
  param_1[0x154] = 0;
  *(undefined1 *)(param_1 + 0x156) = 0;
  param_1[0x151] = &PTR__scalar_deleting_destructor__144e480a0;
  param_1[0x157] = 0;
  param_1[0x158] = 0;
  param_1[0x159] = 0;
  param_1[0x15a] = 0;
  param_1[0x15d] = 0;
  param_1[0x15e] = 0;
  *(undefined4 *)(param_1 + 0x15f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xafc) = 0;
  param_1[0x161] = 0;
  *(undefined4 *)(param_1 + 0x162) = 0;
  *(undefined4 *)(param_1 + 0x163) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb1c) = 0;
  cVar5 = IsInRenderingThread();
  if (cVar5 == '\0') {
    FUN_141edf270(param_1 + 0x151);
  }
  else {
    FRenderResource::InitResource();
  }
  *(undefined4 *)(param_1 + 0x165) = 4;
  param_1[0x166] = 0;
  param_1[0x167] = 0;
  *(undefined1 *)(param_1 + 0x169) = 0;
  param_1[0x164] = &PTR__scalar_deleting_destructor__144e480e0;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  param_1[0x16c] = 0;
  param_1[0x16d] = 0;
  param_1[0x170] = 0;
  param_1[0x171] = 0;
  *(undefined4 *)(param_1 + 0x172) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb94) = 0;
  param_1[0x174] = 0;
  *(undefined4 *)(param_1 + 0x175) = 0;
  *(undefined4 *)(param_1 + 0x176) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xbb4) = 0;
  cVar5 = IsInRenderingThread();
  if (cVar5 == '\0') {
    FUN_141edf270(param_1 + 0x164);
  }
  else {
    FRenderResource::InitResource();
  }
  *(undefined4 *)(param_1 + 0x178) = 4;
  param_1[0x179] = 0;
  param_1[0x17a] = 0;
  *(undefined1 *)(param_1 + 0x17c) = 0;
  param_1[0x177] = &PTR__scalar_deleting_destructor__144e480e0;
  param_1[0x17d] = 0;
  param_1[0x17e] = 0;
  param_1[0x17f] = 0;
  param_1[0x180] = 0;
  param_1[0x183] = 0;
  param_1[0x184] = 0;
  *(undefined4 *)(param_1 + 0x185) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc2c) = 0;
  param_1[0x187] = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x189) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc4c) = 0;
  cVar5 = IsInRenderingThread();
  if (cVar5 == '\0') {
    FUN_141edf270(param_1 + 0x177);
  }
  else {
    FRenderResource::InitResource();
  }
  puVar14 = param_1 + 0x18a;
  lVar15 = 3;
  do {
    FUN_141d0ea10(puVar14);
    puVar14 = puVar14 + 0x13;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  puVar14 = param_1 + 0x1c3;
  do {
    FUN_141d0ea10(puVar14);
    puVar14 = puVar14 + 0x13;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  param_1[0x1fc] = 0;
  param_1[0x1fd] = 0;
  param_1[0x1fe] = 0;
  param_1[0x1ff] = 0;
  param_1[0x200] = 0;
  param_1[0x201] = 0;
  param_1[0x202] = 0;
  param_1[0x203] = 0;
  param_1[0x204] = 0;
  param_1[0x205] = 0;
  param_1[0x206] = 0;
  param_1[0x207] = 0;
  param_1[0x208] = 0;
  param_1[0x209] = 0;
  param_1[0x20a] = 0;
  param_1[0x20b] = 0;
  param_1[0x20c] = 0;
  param_1[0x20d] = 0;
  param_1[0x20e] = 0;
  param_1[0x20f] = 0;
  param_1[0x212] = 0;
  param_1[0x213] = 0;
  *(undefined4 *)(param_1 + 0x214) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x10a4) = 0;
  param_1[0x215] = 0;
  param_1[0x216] = 0;
  param_1[0x217] = 0;
  param_1[0x218] = 0;
  param_1[0x219] = 0;
  param_1[0x21a] = 0;
  param_1[0x21b] = 0;
  param_1[0x21c] = 0;
  param_1[0x21d] = 0;
  param_1[0x21e] = 0;
  param_1[0x21f] = 0;
  param_1[0x220] = 0;
  param_1[0x223] = 0;
  param_1[0x224] = 0;
  *(undefined4 *)(param_1 + 0x225) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x112c) = 0;
  param_1[0x226] = 0;
  param_1[0x227] = 0;
  *(undefined2 *)(param_1 + 0x228) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1144) = 0;
  *(undefined1 *)((longlong)param_1 + 0x114c) = 0;
  param_1[0x22a] = 0;
  param_1[0x22b] = 0;
  param_1[0x22c] = 0;
  param_1[0x22d] = 0;
  param_1[0x231] = 0;
  param_1[0x232] = 0;
  param_1[0x233] = 0;
  param_1[0x236] = 0;
  param_1[0x237] = 0;
  *(undefined4 *)(param_1 + 0x238) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x11c4) = 0;
  param_1[0x239] = 0;
  param_1[0x23a] = 0;
  param_1[0x23b] = 0;
  param_1[0x23c] = 0;
  param_1[0x23d] = 0;
  param_1[0x23e] = 0;
  param_1[0x23f] = 0;
  param_1[0x240] = 0;
  *(undefined1 *)(param_1 + 0x241) = 1;
  param_1[0x242] = 0;
  param_1[0x243] = 0;
  param_1[0x244] = 0;
  param_1[0x245] = 0;
  *(int *)(param_1 + 0x247) = param_6;
  param_1[0x248] = 0;
  param_1[0x249] = 0;
  *(undefined1 *)(param_1 + 0x24b) = 0;
  param_1[0x246] = &PTR_FUN_144e47fa0;
  param_1[0x24c] = 0;
  *(undefined4 *)(param_1 + 0x24d) = 0;
  param_1[0x24e] = 0;
  *(int *)(param_1 + 0x250) = param_6;
  param_1[0x251] = 0;
  param_1[0x252] = 0;
  *(undefined1 *)(param_1 + 0x254) = 0;
  param_1[0x24f] = &PTR_FUN_144e47fa0;
  param_1[0x255] = 0;
  *(undefined4 *)(param_1 + 0x256) = 0;
  param_1[599] = 0;
  *(int *)(param_1 + 0x259) = param_6;
  param_1[0x25a] = 0;
  param_1[0x25b] = 0;
  *(undefined1 *)(param_1 + 0x25d) = 0;
  param_1[600] = &PTR_FUN_144e47fa0;
  param_1[0x25e] = 0;
  *(undefined4 *)(param_1 + 0x25f) = 0;
  param_1[0x260] = 0;
  param_1[0x261] = 0;
  param_1[0x262] = 0;
  param_1[0x265] = 0;
  param_1[0x266] = 0;
  *(undefined4 *)(param_1 + 0x267) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x133c) = 0;
  param_1[0x269] = 0;
  *(undefined4 *)(param_1 + 0x26a) = 0;
  param_1[0x26d] = 0;
  param_1[0x26e] = 0;
  param_1[0x26f] = 0;
  param_1[0x270] = 0;
  param_1[0x273] = 0;
  param_1[0x274] = 0;
  *(undefined4 *)(param_1 + 0x275) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x13ac) = 0;
  param_1[0x277] = 0;
  param_1[0x278] = 0;
  param_1[0x279] = 0;
  *(undefined4 *)(param_1 + 0x27a) = 0xffffffff;
  param_1[0x27b] = 0;
  param_1[0x27c] = 0;
  FUN_141b54700(param_1 + 0x27d,param_6);
  param_1[0x2b2] = 0;
  param_1[0x2b3] = 0;
  param_1[0x2b6] = 0;
  param_1[0x2b7] = 0;
  *(undefined4 *)(param_1 + 0x2b8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x15c4) = 0;
  param_1[0x2ba] = 0;
  *(undefined4 *)(param_1 + 699) = 0;
  param_1[700] = 0;
  param_1[0x2bd] = 0;
  FUN_141d0f180(param_1 + 0x2be,(&DAT_1464c9c48)[param_6]);
  param_1[0x2f3] = 0;
  param_1[0x2f4] = 0;
  param_1[0x2f7] = 0;
  param_1[0x2f8] = 0;
  TBitArray<FDefaultBitArrayAllocator>::Init(param_1 + 0x2f5,0,0);
  *(undefined4 *)(param_1 + 0x2f9) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x17cc) = 0;
  param_1[0x2fb] = 0;
  *(undefined4 *)(param_1 + 0x2fc) = 0;
  param_1[0x2fd] = 0;
  param_1[0x2fe] = 0;
  param_1[0x2ff] = 0;
  param_1[0x300] = 0;
  *(undefined2 *)(param_1 + 0x301) = 0;
  *(undefined1 *)((longlong)param_1 + 0x180a) = 1;
  param_1[0x30f] = 0;
  param_1[0x310] = 0;
  *(int *)(param_1 + 0x310) = *(int *)(param_1 + 0x310) + 1;
  if (*(int *)((longlong)param_1 + 0x1884) < *(int *)(param_1 + 0x310)) {
    TArray<FTextureLayout::FTextureLayoutNode,TInlineAllocator<5,FDefaultAllocator>_>::ResizeGrow
              (param_1 + 0x302,0);
  }
  puVar14 = (undefined8 *)param_1[0x30f];
  if ((undefined8 *)param_1[0x30f] == (undefined8 *)0x0) {
    puVar14 = param_1 + 0x302;
  }
  if (puVar14 != (undefined8 *)0x0) {
    *puVar14 = 0xffffffffffffffff;
    puVar14[1] = 0;
    *(undefined1 *)(puVar14 + 2) = 0;
  }
  param_1[0x311] = 0;
  param_1[0x312] = 0;
  param_1[0x315] = 0;
  param_1[0x316] = 0;
  TBitArray<FDefaultBitArrayAllocator>::Init(param_1 + 0x313,0,0);
  *(undefined4 *)(param_1 + 0x317) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x18bc) = 0;
  param_1[0x318] = 0;
  param_1[0x319] = 0;
  param_1[0x31c] = 0;
  param_1[0x31d] = 0;
  TBitArray<FDefaultBitArrayAllocator>::Init(param_1 + 0x31a,0,0);
  *(undefined4 *)(param_1 + 0x31e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x18f4) = 0;
  param_1[799] = 0;
  param_1[800] = 0;
  param_1[0x321] = 0;
  param_1[0x322] = 0;
  param_1[0x323] = 0;
  param_1[0x324] = 0;
  *(undefined4 *)(param_1 + 0x325) = 0;
  *(undefined8 *)((longlong)param_1 + 0x192c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1934) = 0;
  param_1[0x327] = 0;
  param_1[0x328] = 0;
  param_1[0x329] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x32a));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x32a),4000);
  param_1[0x32f] = 0;
  param_1[0x330] = 0;
  param_1[0x333] = 0;
  param_1[0x334] = 0;
  TBitArray<FDefaultBitArrayAllocator>::Init(param_1 + 0x331,0,0);
  *(undefined4 *)(param_1 + 0x335) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x19ac) = 0;
  param_1[0x337] = 0;
  *(undefined4 *)(param_1 + 0x338) = 0;
  param_1[0x339] = 0;
  param_1[0x33a] = 0;
  param_1[0x33d] = 0;
  param_1[0x33e] = 0;
  TBitArray<FDefaultBitArrayAllocator>::Init(param_1 + 0x33b,0,0);
  *(undefined4 *)(param_1 + 0x33f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x19fc) = 0;
  param_1[0x341] = 0;
  *(undefined4 *)(param_1 + 0x342) = 0;
  param_1[0x343] = 0;
  param_1[0x344] = 0;
  param_1[0x347] = 0;
  param_1[0x348] = 0;
  TBitArray<FDefaultBitArrayAllocator>::Init(param_1 + 0x345,0,0);
  *(undefined4 *)(param_1 + 0x349) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1a4c) = 0;
  param_1[0x34b] = 0;
  *(undefined4 *)(param_1 + 0x34c) = 0;
  param_1[0x34d] = 0;
  TOctree<FLightSceneInfoCompact,FLightOctreeSemantics>::FNode::FNode(param_1 + 0x34e,0);
  uVar3 = DAT_1468b5d98;
  uVar2 = DAT_1468b5d94;
  uVar9 = DAT_1468b5d90;
  param_1[0x3c1] = 0;
  *(undefined4 *)(param_1 + 0x3c0) = 0x49080000;
  *(undefined4 *)(param_1 + 0x3bc) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x1de4) = uVar2;
  *(undefined4 *)(param_1 + 0x3bd) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1dec) = 0;
  *(undefined4 *)(param_1 + 0x3be) = 0x49800000;
  *(undefined4 *)((longlong)param_1 + 0x1df4) = 0x49800000;
  *(undefined4 *)(param_1 + 0x3bf) = 0x49800000;
  *(undefined4 *)((longlong)param_1 + 0x1dfc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e04) = 0x48f00000;
  *(undefined4 *)(param_1 + 0x3c2) = 0x44047914;
  param_1[0x3c3] = 0;
  TOctree<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::FNode::FNode
            (param_1 + 0x3c4,0,uVar9,uVar3,uVar9,uVar3,0x49800000,0x49800000);
  uVar3 = DAT_1468b5d98;
  uVar2 = DAT_1468b5d94;
  uVar9 = DAT_1468b5d90;
  param_1[0xbd5] = 0;
  *(undefined4 *)(param_1 + 0xbd4) = 0x49080000;
  *(undefined4 *)(param_1 + 0xbd0) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x5e84) = uVar2;
  *(undefined4 *)(param_1 + 0xbd1) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x5e8c) = 0;
  *(undefined4 *)(param_1 + 0xbd2) = 0x49800000;
  *(undefined4 *)((longlong)param_1 + 0x5e94) = 0x49800000;
  *(undefined4 *)(param_1 + 0xbd3) = 0x49800000;
  *(undefined4 *)((longlong)param_1 + 0x5e9c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5ea4) = 0x48f00000;
  *(undefined4 *)(param_1 + 0xbd6) = 0x44047914;
  param_1[0xbd7] = 0;
  *(undefined1 *)(param_1 + 0xbd8) = param_3;
  *(byte *)((longlong)param_1 + 0x5ec1) = param_4;
  param_1[0xbd9] = 0;
  *(undefined4 *)(param_1 + 0xbda) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5ed4) = 0;
  param_1[0xbdb] = 0;
  param_1[0xbdc] = 0;
  param_1[0xbdd] = 0;
  param_1[0xbe0] = 0;
  param_1[0xbe1] = 0;
  TBitArray<FDefaultBitArrayAllocator>::Init(param_1 + 0xbde,0,0);
  *(undefined4 *)(param_1 + 0xbe2) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5f14) = 0;
  param_1[0xbe4] = 0;
  *(undefined4 *)(param_1 + 0xbe5) = 0;
  *(undefined2 *)(param_1 + 0xbe6) = 0;
  param_1[0xbe7] = 0;
  param_1[0xbe8] = 0;
  param_1[0xbe9] = 0;
  param_1[0xbec] = 0;
  param_1[0xbed] = 0;
  TBitArray<FDefaultBitArrayAllocator>::Init(param_1 + 0xbea,0,0);
  *(undefined4 *)(param_1 + 0xbee) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5f74) = 0;
  param_1[0xbf0] = 0;
  *(undefined4 *)(param_1 + 0xbf1) = 0;
  param_1[0xbf2] = param_1;
  param_1[0xbf3] = 0;
  param_1[0xbf4] = 0;
  param_1[0xbf7] = 0;
  param_1[0xbf8] = 0;
  TBitArray<FDefaultBitArrayAllocator>::Init(param_1 + 0xbf5,0,0);
  *(undefined4 *)(param_1 + 0xbf9) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5fcc) = 0;
  param_1[0xbfb] = 0;
  *(undefined4 *)(param_1 + 0xbfc) = 0;
  lVar15 = UWorld::GetWorldSettings(param_2,0,1);
  *(undefined4 *)(param_1 + 0xbfd) = *(undefined4 *)(lVar15 + 0x4bc);
  lVar15 = UWorld::GetWorldSettings(param_2,0,1);
  *(undefined4 *)((longlong)param_1 + 0x5fec) = *(undefined4 *)(lVar15 + 0x4c0);
  lVar15 = UWorld::GetWorldSettings(param_2,0,1);
  fVar1 = *(float *)(lVar15 + 0x4c4);
  fVar19 = 0.0;
  if ((0.0 <= fVar1) && (fVar19 = fVar1, 1.0 <= fVar1)) {
    fVar19 = 1.0;
  }
  *(float *)(param_1 + 0xbfe) = fVar19;
  uVar10 = FUN_14274dce0();
  param_1[0xbff] = uVar10;
  param_1[0xc00] = 0;
  *(undefined4 *)(param_1 + 0xc01) = 0;
  *(undefined1 *)((longlong)param_1 + 0x600c) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc02));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xc02),4000);
  param_1[0xc07] = 0;
  param_1[0xc08] = 0;
  param_1[0xc0a] = 0;
  *(undefined4 *)(param_1 + 0xc09) = 0xbf800000;
  param_1[0xc0b] = 0;
  param_1[0xc0c] = 0;
  param_1[0xc0d] = 0;
  param_1[0xc0e] = 0;
  param_1[0xc0f] = 0;
  param_1[0xc10] = 0;
  param_1[0xc11] = 0;
  param_1[0xc12] = 0;
  param_1[0xc13] = 0;
  param_1[0xc14] = 0;
  param_1[0xc15] = 0;
  param_1[0xc16] = 0;
  param_1[0xc17] = 0;
  param_1[0xc18] = 0;
  param_1[0xc19] = 0;
  param_1[0xc1a] = 0;
  param_1[0xc1b] = 0;
  param_1[0xc1c] = 0;
  param_1[0x22e] = 0;
  param_1[0x22f] = 0;
  param_1[0x230] = 0;
  lVar15 = *(longlong *)(param_1[2] + 0x1b8);
  *(undefined8 **)(param_1[2] + 0x1b8) = param_1;
  pvVar4 = ThreadLocalStoragePointer;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_1[2] + 0x1c0);
  lVar16 = *(longlong *)((longlong)pvVar4 + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar16 + 0x38) < DAT_146a83ca8) &&
     (_Init_thread_header(&DAT_146a83ca8), DAT_146a83ca8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar13 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileHDR");
    lVar17 = lVar12;
    if (plVar13 != (longlong *)0x0) {
      lVar17 = (**(code **)(*plVar13 + 0x38))(plVar13);
    }
    DAT_146a83ca0 = lVar17;
    _Init_thread_footer(&DAT_146a83ca8);
  }
  if ((*(int *)(lVar16 + 0x38) < DAT_146a83cb8) &&
     (_Init_thread_header(&DAT_146a83cb8), DAT_146a83cb8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar13 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileHDR32bppMode");
    lVar17 = lVar12;
    if (plVar13 != (longlong *)0x0) {
      lVar17 = (**(code **)(*plVar13 + 0x38))(plVar13);
    }
    DAT_146a83cb0 = lVar17;
    _Init_thread_footer(&DAT_146a83cb8);
  }
  lVar17 = DAT_146a83ca0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar5 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar7 = GetCurrentThreadId();
    lVar11 = 4;
    if (DVar7 != DAT_1468c21c0) goto LAB_141d10fb2;
  }
  lVar11 = lVar12;
LAB_141d10fb2:
  bVar18 = *(int *)(lVar11 + lVar17) == 1;
  *(bool *)(param_1 + 0x228) = bVar18;
  if ((bVar18) && ((DAT_1464c9c5a == '\0' || (iVar8 = FUN_1419f1b20(DAT_146a83cb0,0), iVar8 != 0))))
  {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  *(undefined1 *)((longlong)param_1 + 0x1141) = uVar6;
  if ((*(int *)(lVar16 + 0x38) < DAT_146a83cc8) &&
     (_Init_thread_header(&DAT_146a83cc8), DAT_146a83cc8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar13 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.EarlyZPass");
    lVar17 = lVar12;
    if (plVar13 != (longlong *)0x0) {
      lVar17 = (**(code **)(*plVar13 + 0x38))(plVar13);
    }
    DAT_146a83cc0 = lVar17;
    _Init_thread_footer(&DAT_146a83cc8);
  }
  lVar17 = DAT_146a83cc0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar7 = GetCurrentThreadId(), lVar11 = 4, DVar7 == DAT_1468c21c0)) {
    lVar11 = lVar12;
  }
  *(undefined4 *)((longlong)param_1 + 0x1144) = *(undefined4 *)(lVar11 + lVar17);
  if ((*(int *)(lVar16 + 0x38) < DAT_146a83cd8) &&
     (_Init_thread_header(&DAT_146a83cd8), DAT_146a83cd8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar13 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.ShaderPipelines");
    lVar16 = lVar12;
    if (plVar13 != (longlong *)0x0) {
      lVar16 = (**(code **)(*plVar13 + 0x38))(plVar13);
    }
    DAT_146a83cd0 = lVar16;
    _Init_thread_footer(&DAT_146a83cd8);
  }
  uVar9 = FUN_1419f1b20(DAT_146a83cd0,0);
  *(undefined4 *)(param_1 + 0x229) = uVar9;
  if (param_5 == '\0') {
    if (lVar15 == 0) {
      *(undefined8 *)(param_1[2] + 0x5d0) = 0;
    }
    param_1[3] = 0;
  }
  else {
    lVar15 = param_1[2];
    if (*(longlong *)(lVar15 + 0x5d0) != 0) {
      FUN_1425e13b0(*(longlong *)(lVar15 + 0x5d0));
      lVar15 = param_1[2];
    }
    FUN_1428c81f0(lVar15);
  }
  cVar5 = DoSkeletalMeshIndexBuffersNeedSRV();
  if (cVar5 != '\0') {
    lVar15 = operator_new(0x60);
    if (lVar15 != 0) {
      lVar12 = FGPUSkinCache::FGPUSkinCache(lVar15,param_4 ^ 1);
    }
    param_1[0xbe7] = lVar12;
  }
  FUN_1428dba00(param_1[2],0,0);
  return param_1;
}



// FUNCTION 141d112b0 FUN_141d112b0 body=2645 status=ok
// SIG undefined FUN_141d112b0(void)

undefined8 * FUN_141d112b0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  
  *param_1 = &PTR_FUN_144e47de8;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  lVar9 = *(longlong *)(param_2 + 0x20);
  param_1[4] = lVar9;
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    UNLOCK();
  }
  lVar9 = *(longlong *)(param_2 + 0x28);
  param_1[5] = lVar9;
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    UNLOCK();
  }
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  lVar9 = *(longlong *)(param_2 + 0x38);
  param_1[7] = lVar9;
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    UNLOCK();
  }
  lVar9 = *(longlong *)(param_2 + 0x40);
  param_1[8] = lVar9;
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    UNLOCK();
  }
  lVar9 = *(longlong *)(param_2 + 0x48);
  param_1[9] = lVar9;
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    UNLOCK();
  }
  lVar9 = *(longlong *)(param_2 + 0x50);
  param_1[10] = lVar9;
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    UNLOCK();
  }
  lVar9 = *(longlong *)(param_2 + 0x58);
  param_1[0xb] = lVar9;
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    UNLOCK();
  }
  lVar9 = *(longlong *)(param_2 + 0x60);
  param_1[0xc] = lVar9;
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    UNLOCK();
  }
  lVar9 = *(longlong *)(param_2 + 0x68);
  param_1[0xd] = lVar9;
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    UNLOCK();
  }
  lVar9 = *(longlong *)(param_2 + 0x70);
  param_1[0xe] = lVar9;
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    UNLOCK();
  }
  param_1[0xf] = *(undefined8 *)(param_2 + 0x78);
  lVar12 = 2;
  param_1[0x10] = *(undefined8 *)(param_2 + 0x80);
  lVar9 = 2;
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x88);
  puVar11 = param_1 + 0x12;
  puVar10 = (undefined8 *)(param_2 + 0x90);
  do {
    puVar8 = puVar10;
    puVar7 = puVar11;
    uVar6 = puVar8[1];
    *puVar7 = *puVar8;
    puVar7[1] = uVar6;
    uVar6 = puVar8[3];
    puVar7[2] = puVar8[2];
    puVar7[3] = uVar6;
    uVar6 = puVar8[5];
    puVar7[4] = puVar8[4];
    puVar7[5] = uVar6;
    uVar6 = puVar8[7];
    puVar7[6] = puVar8[6];
    puVar7[7] = uVar6;
    uVar6 = puVar8[9];
    puVar7[8] = puVar8[8];
    puVar7[9] = uVar6;
    uVar6 = puVar8[0xb];
    puVar7[10] = puVar8[10];
    puVar7[0xb] = uVar6;
    uVar6 = puVar8[0xd];
    puVar7[0xc] = puVar8[0xc];
    puVar7[0xd] = uVar6;
    uVar6 = puVar8[0xf];
    puVar7[0xe] = puVar8[0xe];
    puVar7[0xf] = uVar6;
    lVar9 = lVar9 + -1;
    puVar11 = puVar7 + 0x10;
    puVar10 = puVar8 + 0x10;
  } while (lVar9 != 0);
  uVar6 = puVar8[0x11];
  puVar7[0x10] = puVar8[0x10];
  puVar7[0x11] = uVar6;
  uVar6 = puVar8[0x13];
  puVar7[0x12] = puVar8[0x12];
  puVar7[0x13] = uVar6;
  uVar6 = puVar8[0x15];
  puVar7[0x14] = puVar8[0x14];
  puVar7[0x15] = uVar6;
  uVar3 = *(undefined4 *)((longlong)puVar8 + 0xb4);
  uVar4 = *(undefined4 *)(puVar8 + 0x17);
  uVar5 = *(undefined4 *)((longlong)puVar8 + 0xbc);
  *(undefined4 *)(puVar7 + 0x16) = *(undefined4 *)(puVar8 + 0x16);
  *(undefined4 *)((longlong)puVar7 + 0xb4) = uVar3;
  *(undefined4 *)(puVar7 + 0x17) = uVar4;
  *(undefined4 *)((longlong)puVar7 + 0xbc) = uVar5;
  param_1[0x3a] = *(undefined8 *)(param_2 + 0x1d0);
  param_1[0x3b] = *(undefined8 *)(param_2 + 0x1d8);
  param_1[0x3c] = *(undefined8 *)(param_2 + 0x1e0);
  *(undefined4 *)(param_1 + 0x3d) = *(undefined4 *)(param_2 + 0x1e8);
  param_1[0x3e] = *(undefined8 *)(param_2 + 0x1f0);
  uVar6 = *(undefined8 *)(param_2 + 0x200);
  param_1[0x3f] = *(undefined8 *)(param_2 + 0x1f8);
  param_1[0x40] = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x210);
  param_1[0x41] = *(undefined8 *)(param_2 + 0x208);
  param_1[0x42] = uVar6;
  uVar3 = *(undefined4 *)(param_2 + 0x21c);
  uVar4 = *(undefined4 *)(param_2 + 0x220);
  uVar5 = *(undefined4 *)(param_2 + 0x224);
  *(undefined4 *)(param_1 + 0x43) = *(undefined4 *)(param_2 + 0x218);
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar3;
  *(undefined4 *)(param_1 + 0x44) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = *(undefined4 *)(param_2 + 0x228);
  *(undefined4 *)((longlong)param_1 + 0x22c) = *(undefined4 *)(param_2 + 0x22c);
  *(undefined4 *)(param_1 + 0x46) = *(undefined4 *)(param_2 + 0x230);
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  FUN_141d14cb0(param_1 + 0x47,param_2 + 0x238);
  *(undefined1 *)(param_1 + 0x5b) = 0;
  if (*(char *)(param_2 + 0x2d8) != '\0') {
    param_1[0x51] = 0;
    param_1[0x52] = 0;
    param_1[0x55] = 0;
    param_1[0x56] = 0;
    *(undefined4 *)(param_1 + 0x57) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 700) = 0;
    param_1[0x59] = 0;
    *(undefined4 *)(param_1 + 0x5a) = 0;
    FUN_141d14cb0(param_1 + 0x51);
    *(undefined1 *)(param_1 + 0x5b) = 1;
  }
  param_1[0x5c] = *(undefined8 *)(param_2 + 0x2e0);
  *(undefined4 *)(param_1 + 0x5d) = *(undefined4 *)(param_2 + 0x2e8);
  *(undefined4 *)((longlong)param_1 + 0x2ec) = *(undefined4 *)(param_2 + 0x2ec);
  param_1[0x5e] = *(undefined8 *)(param_2 + 0x2f0);
  *(undefined4 *)(param_1 + 0x5f) = *(undefined4 *)(param_2 + 0x2f8);
  *(undefined1 *)((longlong)param_1 + 0x2fc) = *(undefined1 *)(param_2 + 0x2fc);
  *(undefined1 *)((longlong)param_1 + 0x2fd) = *(undefined1 *)(param_2 + 0x2fd);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x300);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)(param_2 + 0x304);
  param_1[0x61] = *(undefined8 *)(param_2 + 0x308);
  *(undefined4 *)(param_1 + 0x62) = *(undefined4 *)(param_2 + 0x310);
  *(undefined4 *)((longlong)param_1 + 0x314) = *(undefined4 *)(param_2 + 0x314);
  *(undefined4 *)(param_1 + 99) = *(undefined4 *)(param_2 + 0x318);
  *(undefined4 *)((longlong)param_1 + 0x31c) = *(undefined4 *)(param_2 + 0x31c);
  uVar6 = *(undefined8 *)(param_2 + 0x328);
  param_1[100] = *(undefined8 *)(param_2 + 800);
  param_1[0x65] = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x338);
  param_1[0x66] = *(undefined8 *)(param_2 + 0x330);
  param_1[0x67] = uVar6;
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x340);
  *(undefined1 *)((longlong)param_1 + 0x341) = *(undefined1 *)(param_2 + 0x341);
  *(undefined1 *)((longlong)param_1 + 0x342) = *(undefined1 *)(param_2 + 0x342);
  param_1[0x6a] = *(undefined8 *)(param_2 + 0x350);
  *(undefined4 *)(param_1 + 0x6b) = *(undefined4 *)(param_2 + 0x358);
  param_1[0x6c] = *(undefined8 *)(param_2 + 0x360);
  uVar6 = *(undefined8 *)(param_2 + 0x370);
  param_1[0x6d] = *(undefined8 *)(param_2 + 0x368);
  param_1[0x6e] = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x380);
  param_1[0x6f] = *(undefined8 *)(param_2 + 0x378);
  param_1[0x70] = uVar6;
  *(undefined4 *)(param_1 + 0x71) = *(undefined4 *)(param_2 + 0x388);
  _guard_xfg_dispatch_icall_nop(param_1 + 0x72,(void *)(param_2 + 0x390),0x570);
  param_1[0x120] = *(undefined8 *)(param_2 + 0x900);
  *(undefined4 *)(param_1 + 0x121) = *(undefined4 *)(param_2 + 0x908);
  *(undefined8 *)((longlong)param_1 + 0x90c) = *(undefined8 *)(param_2 + 0x90c);
  *(undefined4 *)((longlong)param_1 + 0x914) = *(undefined4 *)(param_2 + 0x914);
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_2 + 0x920);
  *(undefined4 *)((longlong)param_1 + 0x924) = *(undefined4 *)(param_2 + 0x924);
  *(undefined4 *)(param_1 + 0x125) = *(undefined4 *)(param_2 + 0x928);
  *(undefined4 *)((longlong)param_1 + 0x92c) = *(undefined4 *)(param_2 + 0x92c);
  param_1[0x126] = *(undefined8 *)(param_2 + 0x930);
  *(undefined4 *)(param_1 + 0x127) = *(undefined4 *)(param_2 + 0x938);
  *(undefined4 *)((longlong)param_1 + 0x93c) = *(undefined4 *)(param_2 + 0x93c);
  _guard_xfg_dispatch_icall_nop(param_1 + 0x128,(void *)(param_2 + 0x940),0x570);
  uVar6 = *(undefined8 *)(param_2 + 0xeb8);
  param_1[0x1d6] = *(undefined8 *)(param_2 + 0xeb0);
  param_1[0x1d7] = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0xec8);
  param_1[0x1d8] = *(undefined8 *)(param_2 + 0xec0);
  param_1[0x1d9] = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0xed8);
  param_1[0x1da] = *(undefined8 *)(param_2 + 0xed0);
  param_1[0x1db] = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0xee8);
  param_1[0x1dc] = *(undefined8 *)(param_2 + 0xee0);
  param_1[0x1dd] = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0xef8);
  param_1[0x1de] = *(undefined8 *)(param_2 + 0xef0);
  param_1[0x1df] = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0xf08);
  param_1[0x1e0] = *(undefined8 *)(param_2 + 0xf00);
  param_1[0x1e1] = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0xf18);
  param_1[0x1e2] = *(undefined8 *)(param_2 + 0xf10);
  param_1[0x1e3] = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0xf28);
  param_1[0x1e4] = *(undefined8 *)(param_2 + 0xf20);
  param_1[0x1e5] = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0xf38);
  param_1[0x1e6] = *(undefined8 *)(param_2 + 0xf30);
  param_1[0x1e7] = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0xf48);
  param_1[0x1e8] = *(undefined8 *)(param_2 + 0xf40);
  param_1[0x1e9] = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0xf58);
  param_1[0x1ea] = *(undefined8 *)(param_2 + 0xf50);
  param_1[0x1eb] = uVar6;
  *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(param_2 + 0xf60);
  *(undefined4 *)((longlong)param_1 + 0xf64) = *(undefined4 *)(param_2 + 0xf64);
  *(undefined1 *)(param_1 + 0x1ed) = *(undefined1 *)(param_2 + 0xf68);
  *(undefined1 *)((longlong)param_1 + 0xf69) = *(undefined1 *)(param_2 + 0xf69);
  *(undefined4 *)((longlong)param_1 + 0xf6c) = *(undefined4 *)(param_2 + 0xf6c);
  *(undefined4 *)(param_1 + 0x1ee) = *(undefined4 *)(param_2 + 0xf70);
  *(undefined4 *)((longlong)param_1 + 0xf74) = *(undefined4 *)(param_2 + 0xf74);
  param_1[0x1ef] = *(undefined8 *)(param_2 + 0xf78);
  uVar6 = *(undefined8 *)(param_2 + 0xf88);
  param_1[0x1f0] = *(undefined8 *)(param_2 + 0xf80);
  param_1[0x1f1] = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0xf98);
  param_1[0x1f2] = *(undefined8 *)(param_2 + 0xf90);
  param_1[499] = uVar6;
  uVar3 = *(undefined4 *)(param_2 + 0xfa4);
  uVar4 = *(undefined4 *)(param_2 + 0xfa8);
  uVar5 = *(undefined4 *)(param_2 + 0xfac);
  *(undefined4 *)(param_1 + 500) = *(undefined4 *)(param_2 + 4000);
  *(undefined4 *)((longlong)param_1 + 0xfa4) = uVar3;
  *(undefined4 *)(param_1 + 0x1f5) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xfac) = uVar5;
  param_1[0x1f6] = *(undefined8 *)(param_2 + 0xfb0);
  param_1[0x1f7] = 0;
  param_1[0x1f8] = 0;
  param_1[0x1fb] = 0;
  param_1[0x1fc] = 0;
  *(undefined4 *)(param_1 + 0x1fd) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xfec) = 0;
  param_1[0x1ff] = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  FUN_141d14cb0(param_1 + 0x1f7,param_2 + 0xfb8);
  *(undefined1 *)(param_1 + 0x20b) = 0;
  if (*(char *)(param_2 + 0x1058) != '\0') {
    param_1[0x201] = 0;
    param_1[0x202] = 0;
    param_1[0x205] = 0;
    param_1[0x206] = 0;
    *(undefined4 *)(param_1 + 0x207) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x103c) = 0;
    param_1[0x209] = 0;
    *(undefined4 *)(param_1 + 0x20a) = 0;
    FUN_141d14cb0(param_1 + 0x201);
    *(undefined1 *)(param_1 + 0x20b) = 1;
  }
  *(undefined1 *)(param_1 + 0x20c) = *(undefined1 *)(param_2 + 0x1060);
  FConvexVolume::FConvexVolume(param_1 + 0x20e,param_2 + 0x1070);
  *(undefined1 *)(param_1 + 0x232) = *(undefined1 *)(param_2 + 0x1190);
  param_1[0x234] = *(undefined8 *)(param_2 + 0x11a0);
  *(undefined4 *)(param_1 + 0x235) = *(undefined4 *)(param_2 + 0x11a8);
  *(undefined4 *)((longlong)param_1 + 0x11ac) = *(undefined4 *)(param_2 + 0x11ac);
  *(undefined4 *)(param_1 + 0x236) = *(undefined4 *)(param_2 + 0x11b0);
  *(undefined1 *)((longlong)param_1 + 0x11b4) = *(undefined1 *)(param_2 + 0x11b4);
  uVar6 = *(undefined8 *)(param_2 + 0x11c8);
  param_1[0x238] = *(undefined8 *)(param_2 + 0x11c0);
  param_1[0x239] = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x11d8);
  param_1[0x23a] = *(undefined8 *)(param_2 + 0x11d0);
  param_1[0x23b] = uVar6;
  param_1[0x23c] = *(undefined8 *)(param_2 + 0x11e0);
  *(undefined4 *)(param_1 + 0x23d) = *(undefined4 *)(param_2 + 0x11e8);
  *(undefined4 *)((longlong)param_1 + 0x11ec) = *(undefined4 *)(param_2 + 0x11ec);
  *(undefined4 *)(param_1 + 0x23e) = *(undefined4 *)(param_2 + 0x11f0);
  *(undefined1 *)((longlong)param_1 + 0x11f4) = *(undefined1 *)(param_2 + 0x11f4);
  param_1[0x23f] = *(undefined8 *)(param_2 + 0x11f8);
  *(undefined1 *)(param_1 + 0x240) = *(undefined1 *)(param_2 + 0x1200);
  *(undefined1 *)((longlong)param_1 + 0x1201) = *(undefined1 *)(param_2 + 0x1201);
  *(undefined1 *)((longlong)param_1 + 0x1202) = *(undefined1 *)(param_2 + 0x1202);
  *(undefined1 *)((longlong)param_1 + 0x1203) = *(undefined1 *)(param_2 + 0x1203);
  *(undefined1 *)((longlong)param_1 + 0x1204) = *(undefined1 *)(param_2 + 0x1204);
  *(undefined1 *)((longlong)param_1 + 0x1205) = *(undefined1 *)(param_2 + 0x1205);
  *(undefined1 *)((longlong)param_1 + 0x1206) = *(undefined1 *)(param_2 + 0x1206);
  *(undefined1 *)((longlong)param_1 + 0x1207) = *(undefined1 *)(param_2 + 0x1207);
  *(undefined1 *)(param_1 + 0x241) = *(undefined1 *)(param_2 + 0x1208);
  *(undefined1 *)((longlong)param_1 + 0x1209) = *(undefined1 *)(param_2 + 0x1209);
  *(undefined1 *)((longlong)param_1 + 0x120a) = *(undefined1 *)(param_2 + 0x120a);
  *(undefined1 *)((longlong)param_1 + 0x120b) = *(undefined1 *)(param_2 + 0x120b);
  *(undefined1 *)((longlong)param_1 + 0x120c) = *(undefined1 *)(param_2 + 0x120c);
  *(undefined1 *)((longlong)param_1 + 0x120d) = *(undefined1 *)(param_2 + 0x120d);
  *(undefined1 *)((longlong)param_1 + 0x120e) = *(undefined1 *)(param_2 + 0x120e);
  param_1[0x242] = *(undefined8 *)(param_2 + 0x1210);
  *(undefined4 *)(param_1 + 0x243) = *(undefined4 *)(param_2 + 0x1218);
  *(undefined4 *)((longlong)param_1 + 0x121c) = *(undefined4 *)(param_2 + 0x121c);
  uVar6 = *(undefined8 *)(param_2 + 0x1228);
  param_1[0x244] = *(undefined8 *)(param_2 + 0x1220);
  param_1[0x245] = uVar6;
  param_1[0x246] = *(undefined8 *)(param_2 + 0x1230);
  *(undefined4 *)(param_1 + 0x247) = *(undefined4 *)(param_2 + 0x1238);
  *(undefined1 *)((longlong)param_1 + 0x123c) = *(undefined1 *)(param_2 + 0x123c);
  FUN_141d0f590(param_1 + 0x248,param_2 + 0x1240);
  *(undefined4 *)(param_1 + 0x342) = *(undefined4 *)(param_2 + 0x1a10);
  *(undefined4 *)((longlong)param_1 + 0x1a14) = *(undefined4 *)(param_2 + 0x1a14);
  lVar9 = *(longlong *)(param_2 + 0x1a18);
  param_1[0x343] = lVar9;
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    UNLOCK();
  }
  lVar9 = *(longlong *)(param_2 + 0x1a20);
  param_1[0x344] = lVar9;
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    UNLOCK();
  }
  lVar9 = *(longlong *)(param_2 + 0x1a28);
  param_1[0x345] = lVar9;
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    UNLOCK();
  }
  param_1[0x346] = *(undefined8 *)(param_2 + 0x1a30);
  *(undefined4 *)(param_1 + 0x347) = *(undefined4 *)(param_2 + 0x1a38);
  param_1[0x348] = *(undefined8 *)(param_2 + 0x1a40);
  param_1[0x349] = 0;
  iVar1 = *(int *)(param_2 + 0x1a50);
  pvVar2 = *(void **)(param_2 + 0x1a48);
  *(int *)(param_1 + 0x34a) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1a54) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 0x349,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[0x349],pvVar2,(longlong)iVar1 << 3);
  }
  puVar11 = param_1 + 0x34f;
  *(undefined4 *)(param_1 + 0x34b) = *(undefined4 *)(param_2 + 0x1a58);
  puVar10 = (undefined8 *)(param_2 + 0x1a78);
  param_1[0x34c] = *(undefined8 *)(param_2 + 0x1a60);
  *(undefined4 *)(param_1 + 0x34d) = *(undefined4 *)(param_2 + 0x1a68);
  *(undefined4 *)((longlong)param_1 + 0x1a6c) = *(undefined4 *)(param_2 + 0x1a6c);
  *(undefined4 *)(param_1 + 0x34e) = *(undefined4 *)(param_2 + 0x1a70);
  *(undefined4 *)((longlong)param_1 + 0x1a74) = *(undefined4 *)(param_2 + 0x1a74);
  do {
    *puVar11 = 0;
    lVar12 = lVar12 + -1;
    iVar1 = *(int *)(puVar10 + 1);
    pvVar2 = (void *)*puVar10;
    *(int *)((longlong)param_1 + (8 - param_2) + (longlong)puVar10) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + (0xc - param_2) + (longlong)puVar10) = 0;
    }
    else {
      TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar11,iVar1,0);
      _guard_xfg_dispatch_icall_nop((void *)*puVar11,pvVar2,(longlong)iVar1);
    }
    puVar11 = puVar11 + 2;
    puVar10 = puVar10 + 2;
  } while (lVar12 != 0);
  *(undefined1 *)(param_1 + 0x353) = *(undefined1 *)(param_2 + 0x1a98);
  *(undefined1 *)((longlong)param_1 + 0x1a99) = *(undefined1 *)(param_2 + 0x1a99);
  *(undefined1 *)((longlong)param_1 + 0x1a9a) = *(undefined1 *)(param_2 + 0x1a9a);
  return param_1;
}



// FUNCTION 141d11d10 FUN_141d11d10 body=342 status=ok
// SIG undefined FUN_141d11d10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_141d11d10(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0xffffffff;
  uVar1 = uRam00000001468b5d80;
  *(undefined8 *)(param_1 + 0x168) = _DAT_1468b5d78;
  *(undefined8 *)(param_1 + 0x170) = uVar1;
  uVar1 = uRam00000001468b5d80;
  *(undefined8 *)(param_1 + 0x178) = _DAT_1468b5d78;
  *(undefined8 *)(param_1 + 0x180) = uVar1;
  uVar2 = _DAT_1464aa6c8;
  uVar1 = _DAT_1464aa6c0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0x42c80000;
  *(undefined8 *)(param_1 + 0x188) = uVar1;
  *(undefined8 *)(param_1 + 400) = uVar2;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined1 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 600) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x25c) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined4 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 0x100;
  *(undefined4 *)(param_1 + 0x270) = 0x42b40000;
  *(undefined4 *)(param_1 + 0x274) = 0x42b40000;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined1 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x2a4) = 0;
  *(undefined4 *)(param_1 + 0x2ac) = 0;
  *(undefined1 *)(param_1 + 0x2b2) = 0;
  *(undefined2 *)(param_1 + 0x2b0) = 1;
  return param_1;
}



// FUNCTION 141d11e70 FUN_141d11e70 body=2125 status=ok
// SIG undefined FUN_141d11e70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141d11e70(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  DWORD DVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  
  uVar5 = 0;
  param_1[1] = 0;
  iVar10 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  lVar9 = 4;
  *(undefined4 *)(param_1 + 5) = 4;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *param_1 = &PTR_FUN_144e47ec8;
  param_1[3] = &PTR_LAB_144e47f50;
  param_1[4] = &PTR_LAB_144e47f60;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = &PTR__scalar_deleting_destructor__144deb638;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 1;
  FHZBOcclusionTester::FHZBOcclusionTester(param_1 + 0x2f);
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x344) = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x404) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x81) = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x444) = 0;
  param_1[0x8a] = 0;
  *(undefined4 *)(param_1 + 0x8b) = 0;
  param_1[0x8c] = 0;
  param_1[0x8e] = 0;
  *(undefined4 *)(param_1 + 0x8f) = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x96] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9c] = 0;
  FUN_141d0f960(param_1 + 0x9e);
  FUN_141d0f960(param_1 + 0x166);
  param_1[0x22f] = 0;
  param_1[0x230] = 0;
  param_1[0x232] = 0;
  param_1[0x233] = 0;
  param_1[0x235] = 0;
  param_1[0x236] = 0;
  param_1[0x238] = 0;
  param_1[0x239] = 0;
  param_1[0x23b] = 0;
  param_1[0x23c] = 0;
  param_1[0x23e] = 0;
  param_1[0x23f] = 0;
  param_1[0x241] = 0;
  param_1[0x242] = 0;
  param_1[0x244] = 0;
  param_1[0x245] = 0;
  param_1[0x247] = 0;
  param_1[0x248] = 0;
  param_1[0x24b] = 0;
  param_1[0x24c] = 0;
  *(undefined4 *)(param_1 + 0x24d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x126c) = 0;
  param_1[0x24f] = 0;
  *(undefined4 *)(param_1 + 0x250) = 0;
  param_1[0x251] = 0;
  param_1[0x252] = 0;
  param_1[0x253] = 0;
  param_1[0x254] = 0;
  param_1[0x255] = 0;
  param_1[0x256] = 0;
  param_1[599] = 0;
  param_1[600] = 0;
  param_1[0x259] = 0;
  param_1[0x25a] = 0;
  param_1[0x25b] = 0;
  *(undefined4 *)(param_1 + 0x25c) = 0;
  param_1[0x260] = 0;
  param_1[0x261] = 0;
  param_1[0x262] = 0;
  param_1[0x263] = 0;
  param_1[0x264] = 0;
  param_1[0x265] = 0;
  param_1[0x266] = 0;
  param_1[0x267] = 0;
  *(undefined4 *)(param_1 + 0x268) = 0;
  param_1[0x269] = 0;
  param_1[0x26a] = 0;
  param_1[0x26b] = 0;
  param_1[0x26c] = 0;
  *(undefined4 *)(param_1 + 0x26d) = 0;
  param_1[0x26e] = 0;
  param_1[0x26f] = 0;
  param_1[0x270] = 0;
  param_1[0x271] = 0;
  *(undefined4 *)(param_1 + 0x272) = 0;
  param_1[0x273] = 0;
  param_1[0x274] = 0;
  param_1[0x275] = 0;
  param_1[0x276] = 0;
  *(undefined4 *)(param_1 + 0x277) = 0;
  param_1[0x278] = 0;
  param_1[0x279] = 0;
  lVar6 = (longlong)param_1 + 0x1434;
  puVar4 = param_1 + 0x27d;
  do {
    *(undefined8 *)(lVar6 + -0x24) = 0;
    *(undefined8 *)(lVar6 + -0x1c) = 0;
    *(undefined8 *)(lVar6 + -0x14) = 0;
    *(undefined8 *)(lVar6 + -0xc) = 0;
    *(undefined8 *)(lVar6 + -4) = 0;
    *(undefined8 *)(lVar6 + 4) = 0;
    *(undefined4 *)puVar4 = DAT_1468b5ca8;
    *(undefined4 *)(lVar6 + -0x48) = DAT_1468b5cac;
    *(undefined4 *)(lVar6 + -0x44) = DAT_1468b5cb0;
    *(undefined4 *)(lVar6 + -0x40) = DAT_1468b5ca8;
    *(undefined4 *)(lVar6 + -0x3c) = DAT_1468b5cac;
    *(undefined4 *)(lVar6 + -0x38) = DAT_1468b5cb0;
    *(undefined8 *)(lVar6 + -0x34) = 0;
    *(undefined4 *)(lVar6 + -0x2c) = 1;
    lVar9 = lVar9 + -1;
    lVar6 = lVar6 + 0x58;
    puVar4 = puVar4 + 0xb;
  } while (lVar9 != 0);
  param_1[0x2aa] = 0;
  param_1[0x2ab] = 0;
  param_1[0x2ac] = 0;
  param_1[0x2ad] = 0;
  param_1[0x2ae] = 0;
  param_1[0x2af] = 0;
  param_1[0x2b0] = 0;
  param_1[0x2b1] = 0;
  param_1[0x2b2] = 0;
  *(undefined4 *)(param_1 + 0x2b3) = 0;
  param_1[0x2b4] = 0;
  param_1[0x2b5] = 0;
  param_1[0x2b6] = 0;
  param_1[0x2b7] = 0;
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  param_1[0x2b9] = 0;
  FLatentGPUTimer::FLatentGPUTimer(param_1 + 0x2ba,0x1e);
  FLatentGPUTimer::FLatentGPUTimer(param_1 + 0x2cb,0x1e);
  FLatentGPUTimer::FLatentGPUTimer(param_1 + 0x2dc,0x1e);
  *(undefined4 *)(param_1 + 0x2f4) = 0;
  FUN_141b54560(param_1 + 0x2f5);
  param_1[0x300] = 0;
  param_1[0x301] = 0;
  param_1[0x302] = 0;
  param_1[0x305] = 0;
  param_1[0x306] = 0;
  *(undefined4 *)(param_1 + 0x307) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x183c) = 0;
  param_1[0x309] = 0;
  *(undefined4 *)(param_1 + 0x30a) = 0;
  iVar8 = DAT_146a82608;
  LOCK();
  DAT_146a82608 = DAT_146a82608 + 1;
  UNLOCK();
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0xff7fffff;
  *(int *)(param_1 + 10) = iVar8 + 1;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x204) = 0x3f800000;
  param_1[0x42] = 0x3f800000;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0;
  param_1[0x47] = 0x3f800000;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0x3f800000;
  param_1[0x4a] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x4b) = DAT_1468b5d98;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
    FRenderResource::InitResource(param_1 + 4);
  }
  else {
    FUN_141edf270(param_1 + 4);
  }
  param_1[0x3c] = 0;
  param_1[0x3d] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x3e) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x4d4) = 0x100;
  param_1[0x9b] = 0;
  param_1[0x27a] = 0;
  param_1[0x27b] = 0;
  *(undefined2 *)((longlong)param_1 + 0x1775) = 0x101;
  *(undefined4 *)(param_1 + 0x25f) = 0x7f7fc99e;
  *(undefined1 *)((longlong)param_1 + 0x1777) = 0;
  puVar4 = (undefined8 *)param_1[0x9c];
  param_1[0x9c] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  *(undefined1 *)(param_1 + 0x9d) = 0;
  puVar4 = param_1 + 0x61;
  param_1[0x22e] = 0;
  do {
    puVar4[-1] = 0;
    uVar5 = uVar5 + 2;
    *puVar4 = 0;
    puVar4 = puVar4 + 2;
  } while (uVar5 < 2);
  puVar4 = param_1 + 0xb;
  *(undefined1 *)(param_1 + 0x27c) = 0;
  *(undefined4 *)(param_1 + 0x2a9) = 0;
  iVar8 = *(int *)(param_1 + 0x2a);
  puVar7 = (undefined8 *)param_1[0x29];
  if ((undefined8 *)param_1[0x29] == (undefined8 *)0x0) {
    puVar7 = puVar4;
  }
  for (; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined4 *)(puVar7 + 9) = 0;
    if (puVar7[8] != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (puVar7);
    puVar7 = puVar7 + 10;
  }
  *(undefined4 *)(param_1 + 0x2a) = 0;
  if (*(int *)((longlong)param_1 + 0x154) != 3) {
    FUN_141d4c430(puVar4,3);
    iVar10 = *(int *)(param_1 + 0x2a);
  }
  *(int *)(param_1 + 0x2a) = iVar10 + 3;
  if (*(int *)((longlong)param_1 + 0x154) < iVar10 + 3) {
    TArray<TMap<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>,0>_>,TInlineAllocator<3,FDefaultAllocator>_>
    ::ResizeGrow(puVar4,iVar10);
  }
  puVar7 = (undefined8 *)param_1[0x29];
  if ((undefined8 *)param_1[0x29] == (undefined8 *)0x0) {
    puVar7 = puVar4;
  }
  _guard_xfg_dispatch_icall_nop(puVar7 + (longlong)iVar10 * 10,0,0xf0);
  *(undefined1 *)(param_1 + 0x95) = 0;
  param_1[0x2ed] = 0;
  *(undefined4 *)(param_1 + 0x2ee) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1774) = 0;
  *(undefined4 *)(param_1 + 0x8d) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x46c) = 0;
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x300,0);
  return param_1;
}



// FUNCTION 141d126c0 FSpeedTreeUniformParameters body=643 status=ok
// SIG undefined FSpeedTreeUniformParameters(void)

undefined8 * FSpeedTreeUniformParameters::FSpeedTreeUniformParameters(undefined8 *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 500) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0;
  *(undefined8 *)((longlong)param_1 + 0x23c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x244) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x254) = 0;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0x3f800000;
  return param_1;
}



// FUNCTION 141d12950 FStaticStateResource body=170 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<0,7,1,4,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e48b58;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x4010700;
    local_10 = 7;
    local_c = 0xffff;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141d12a00 FStaticStateResource body=177 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<0,7,1,7,2,2,2,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e48b98;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x7010700;
    local_14 = 0x20202;
    local_10 = 7;
    local_c = 0xffff;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141d12ac0 FVisualizeTexture body=190 status=ok
// SIG undefined FVisualizeTexture(void)

undefined4 * FVisualizeTexture::FVisualizeTexture(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 1;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 1;
  *(undefined2 *)(param_1 + 0x1e) = 1;
  *(wchar_t **)(param_1 + 0x24) = L"UnknownTexture";
  *(undefined8 *)(param_1 + 0x1f) = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined2 *)(param_1 + 0x26) = 1;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *param_1 = 0;
  param_1[1] = 0x3f800000;
  param_1[3] = 0;
  param_1[2] = 0xffffffff;
  param_1[4] = 0;
  *(undefined8 *)(param_1 + 5) = 3;
  param_1[0x11] = 0xffffffff;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  *(undefined1 *)((longlong)param_1 + 0x26) = 0;
  param_1[10] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x34) = 1;
  return param_1;
}



// FUNCTION 141d12b80 ~TArray<TMap<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>,0>_>,TInlineAllocator<3,FDefaultAllocator>_> body=136 status=ok
// SIG undefined ~TArray<TMap<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>,0>_>,TInlineAllocator<3,FDefaultAllocator>_>(void)

void TArray<TMap<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>,0>_>,TInlineAllocator<3,FDefaultAllocator>_>
     ::
     ~TArray<TMap<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>,0>_>,TInlineAllocator<3,FDefaultAllocator>_>
               (longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xf0);
  iVar3 = *(int *)(param_1 + 0xf8);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = param_1;
  }
  if (iVar3 != 0) {
    do {
      *(undefined4 *)(lVar2 + 0x48) = 0;
      if (*(longlong *)(lVar2 + 0x40) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar2);
      lVar2 = lVar2 + 0x50;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *(longlong *)(param_1 + 0xf0);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141d12c10 ~TArray<TRefCountPtr<FGPUProfilerEventNode>,FDefaultAllocator> body=97 status=ok
// SIG undefined ~TArray<TRefCountPtr<FGPUProfilerEventNode>,FDefaultAllocator>(void)

void TArray<TRefCountPtr<FGPUProfilerEventNode>,FDefaultAllocator>::
     ~TArray<TRefCountPtr<FGPUProfilerEventNode>,FDefaultAllocator>(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 1);
  plVar3 = (longlong *)*param_1;
  if (iVar4 != 0) {
    do {
      puVar2 = (undefined8 *)*plVar3;
      if (puVar2 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      plVar3 = plVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    plVar3 = (longlong *)*param_1;
  }
  if (plVar3 != (longlong *)0x0) {
    FMemory::Free(plVar3);
  }
  return;
}



// FUNCTION 141d12c80 FUN_141d12c80 body=109 status=ok
// SIG undefined FUN_141d12c80(void)

void FUN_141d12c80(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  for (iVar2 = (int)param_1[1]; iVar2 != 0; iVar2 = iVar2 + -1) {
    FUN_141d5bc20(*puVar1);
    FMemory::Free(*puVar1);
    puVar1 = puVar1 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141d12cf0 ~TSparseArray<FDeferredDecalProxy_*,FDefaultSparseArrayAllocator> body=100 status=ok
// SIG undefined ~TSparseArray<FDeferredDecalProxy_*,FDefaultSparseArrayAllocator>(void)

void TSparseArray<FDeferredDecalProxy_*,FDefaultSparseArrayAllocator>::
     ~TSparseArray<FDeferredDecalProxy_*,FDefaultSparseArrayAllocator>(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,0);
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



// FUNCTION 141d12d60 FUN_141d12d60 body=100 status=ok
// SIG undefined FUN_141d12d60(void)

void FUN_141d12d60(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_141d4c320(param_1,0);
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



// FUNCTION 141d12dd0 ~TSparseArray<TSetElement<TTuple<FSoftObjectPath,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=398 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FSoftObjectPath,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FSoftObjectPath,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FSoftObjectPath,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

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
      if (bVar4) goto LAB_141d12e91;
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
LAB_141d12e91:
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
      if (*(longlong *)(*param_1 + 8 + (longlong)iStack_1c * 0x28) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
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



// FUNCTION 141d12f60 ~TSparseArray<TSetElement<TTuple<FVector,FVolumetricLightmapInterpolation>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=100 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FVector,FVolumetricLightmapInterpolation>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FVector,FVolumetricLightmapInterpolation>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FVector,FVolumetricLightmapInterpolation>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,16>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
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



// FUNCTION 141d12fd0 ~TSparseArray<TSetElement<TTuple<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=200 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>
                (*local_38 + (longlong)local_1c * 0x28 + 0x18);
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
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



// FUNCTION 141d130a0 ~TStaticMeshDrawList<FShadowDepthDrawingPolicy<1>_> body=145 status=ok
// SIG undefined ~TStaticMeshDrawList<FShadowDepthDrawingPolicy<1>_>(void)

void TStaticMeshDrawList<FShadowDepthDrawingPolicy<1>_>::
     ~TStaticMeshDrawList<FShadowDepthDrawingPolicy<1>_>(undefined8 *param_1)

{
  char cVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__144e480e0;
  cVar1 = IsInRenderingThread();
  if (cVar1 == '\0') {
    FUN_141edf360(param_1);
  }
  else {
    FRenderResource::ReleaseResource();
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TStaticMeshDrawList<FShadowDepthDrawingPolicy<1>_>::FDrawingPolicyLink>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 8,0);
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  FUN_141edd2d0(param_1);
  return;
}



// FUNCTION 141d13140 ~TStaticMeshDrawList<TBasePassDrawingPolicy<FSelfShadowedCachedPointIndirectLightingPolicy>_> body=145 status=ok
// SIG undefined ~TStaticMeshDrawList<TBasePassDrawingPolicy<FSelfShadowedCachedPointIndirectLightingPolicy>_>(void)

void TStaticMeshDrawList<TBasePassDrawingPolicy<FSelfShadowedCachedPointIndirectLightingPolicy>_>::
     ~TStaticMeshDrawList<TBasePassDrawingPolicy<FSelfShadowedCachedPointIndirectLightingPolicy>_>
               (undefined8 *param_1)

{
  char cVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__144e48020;
  cVar1 = IsInRenderingThread();
  if (cVar1 == '\0') {
    FUN_141edf360(param_1);
  }
  else {
    FRenderResource::ReleaseResource();
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TStaticMeshDrawList<TBasePassDrawingPolicy<FSelfShadowedCachedPointIndirectLightingPolicy>_>::FDrawingPolicyLink>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 8,0);
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  FUN_141edd2d0(param_1);
  return;
}



// FUNCTION 141d131e0 FUN_141d131e0 body=145 status=ok
// SIG undefined FUN_141d131e0(void)

void FUN_141d131e0(undefined8 *param_1)

{
  char cVar1;
  
  *param_1 = &PTR_FUN_144e48120;
  cVar1 = IsInRenderingThread();
  if (cVar1 == '\0') {
    FUN_141edf360(param_1);
  }
  else {
    FRenderResource::ReleaseResource();
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  FUN_141d2d290(param_1 + 8,0);
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  FUN_141edd2d0(param_1);
  return;
}



// FUNCTION 141d13280 ~TStaticMeshDrawList<FHitProxyDrawingPolicy> body=145 status=ok
// SIG undefined ~TStaticMeshDrawList<FHitProxyDrawingPolicy>(void)

void TStaticMeshDrawList<FHitProxyDrawingPolicy>::~TStaticMeshDrawList<FHitProxyDrawingPolicy>
               (undefined8 *param_1)

{
  char cVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__144e48060;
  cVar1 = IsInRenderingThread();
  if (cVar1 == '\0') {
    FUN_141edf360(param_1);
  }
  else {
    FRenderResource::ReleaseResource();
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TStaticMeshDrawList<FHitProxyDrawingPolicy>::FDrawingPolicyLink>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 8,0);
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  FUN_141edd2d0(param_1);
  return;
}



// FUNCTION 141d13320 ~TStaticMeshDrawList<FPositionOnlyDepthDrawingPolicy> body=145 status=ok
// SIG undefined ~TStaticMeshDrawList<FPositionOnlyDepthDrawingPolicy>(void)

void TStaticMeshDrawList<FPositionOnlyDepthDrawingPolicy>::
     ~TStaticMeshDrawList<FPositionOnlyDepthDrawingPolicy>(undefined8 *param_1)

{
  char cVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__144e47fe0;
  cVar1 = IsInRenderingThread();
  if (cVar1 == '\0') {
    FUN_141edf360(param_1);
  }
  else {
    FRenderResource::ReleaseResource();
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TStaticMeshDrawList<FPositionOnlyDepthDrawingPolicy>::FDrawingPolicyLink>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 8,0);
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  FUN_141edd2d0(param_1);
  return;
}



// FUNCTION 141d133c0 ~TStaticMeshDrawList<FVelocityDrawingPolicy> body=145 status=ok
// SIG undefined ~TStaticMeshDrawList<FVelocityDrawingPolicy>(void)

void TStaticMeshDrawList<FVelocityDrawingPolicy>::~TStaticMeshDrawList<FVelocityDrawingPolicy>
               (undefined8 *param_1)

{
  char cVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__144e480a0;
  cVar1 = IsInRenderingThread();
  if (cVar1 == '\0') {
    FUN_141edf360(param_1);
  }
  else {
    FRenderResource::ReleaseResource();
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TStaticMeshDrawList<FVelocityDrawingPolicy>::FDrawingPolicyLink>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 8,0);
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  FUN_141edd2d0(param_1);
  return;
}



// FUNCTION 141d13460 FUN_141d13460 body=115 status=ok
// SIG undefined FUN_141d13460(void)

void FUN_141d13460(longlong *param_1)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xb);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 10);
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 3);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 2);
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141d134e0 FUN_141d134e0 body=365 status=ok
// SIG undefined FUN_141d134e0(void)

void FUN_141d134e0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 8);
  if (lVar3 != 0) {
    FUN_141ace450(lVar3 + 0x30);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar3 + 0x40);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar3 + 0x38);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar3 + 0x30);
    FUN_141ace450(lVar3 + 8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar3 + 0x18);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar3 + 0x10);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar3 + 8);
    FMemory::operator_delete(lVar3,0x58);
  }
  lVar2 = 2;
  lVar3 = param_1 + 0x1a0;
  do {
    plVar1 = (longlong *)(lVar3 + -0x10);
    lVar3 = lVar3 + -0x10;
    lVar2 = lVar2 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar2 != 0);
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x170);
  *(undefined4 *)(param_1 + 0x168) = 0;
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x120);
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xb0);
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141d13650 ~FEyeAdaptationRTManager body=123 status=ok
// SIG undefined ~FEyeAdaptationRTManager(void)

void FSceneViewState::FEyeAdaptationRTManager::~FEyeAdaptationRTManager(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1 + 0x38;
  lVar2 = 3;
  do {
    plVar1 = (longlong *)(lVar3 + -8);
    lVar3 = lVar3 + -8;
    lVar2 = lVar2 + -1;
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x30))();
    }
  } while (lVar2 != 0);
  lVar3 = 2;
  param_1 = param_1 + 0x20;
  do {
    plVar1 = (longlong *)(param_1 + -8);
    param_1 = param_1 + -8;
    lVar3 = lVar3 + -1;
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x30))();
    }
  } while (lVar3 != 0);
  return;
}



// FUNCTION 141d136d0 FUN_141d136d0 body=171 status=ok
// SIG undefined FUN_141d136d0(void)

void FUN_141d136d0(longlong param_1)

{
  FUN_141ace450(param_1 + 0x78);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x88);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x80);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x78);
  FUN_141ace450(param_1 + 0x50);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x60);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x58);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x50);
  FUN_141ace450(param_1 + 0x28);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x38);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x30);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x28);
  FUN_141ace450(param_1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x10);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1);
  return;
}



// FUNCTION 141d13780 ~FGlobalDistanceFieldCacheTypeState body=48 status=ok
// SIG undefined ~FGlobalDistanceFieldCacheTypeState(void)

void FGlobalDistanceFieldCacheTypeState::~FGlobalDistanceFieldCacheTypeState(longlong *param_1)

{
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x30))();
  }
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141d137b0 FUN_141d137b0 body=213 status=ok
// SIG undefined FUN_141d137b0(void)

void FUN_141d137b0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x158);
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FIntVector,FIndirectLightingCacheBlock>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FIntVector,FIndirectLightingCacheBlock>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x68);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x30))();
  }
  if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x30))();
  }
  if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x30))();
  }
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x30))();
  }
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x30))();
  }
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x30))();
  }
  FUN_141edd2d0(param_1);
  return;
}



// FUNCTION 141d13890 ~FLatentGPUTimer body=459 status=ok
// SIG undefined ~FLatentGPUTimer(void)

void FLatentGPUTimer::~FLatentGPUTimer(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  
  lVar9 = 4;
  lVar10 = param_1 + 0x88;
  lVar8 = 4;
  do {
    plVar1 = (longlong *)(lVar10 + -8);
    lVar10 = lVar10 + -8;
    lVar8 = lVar8 + -1;
    if (*plVar1 != 0) {
      LOCK();
      piVar2 = (int *)(*plVar1 + 0x48);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FGraphEvent::Recycle();
      }
    }
  } while (lVar8 != 0);
  lVar8 = 4;
  lVar10 = param_1 + 0x68;
  do {
    puVar4 = *(undefined8 **)(lVar10 + -8);
    lVar10 = lVar10 + -8;
    lVar8 = lVar8 + -1;
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar4 + 1);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        if ((*(char *)(puVar4 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')
            ))) {
          LOCK();
          bVar11 = *(int *)((longlong)puVar4 + 0xc) == 0;
          if (bVar11) {
            *(int *)((longlong)puVar4 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar11) {
            uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar6 == 0) {
              lVar7 = 0;
            }
            else {
              lVar7 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar7 + 8) = puVar4;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
    }
  } while (lVar8 != 0);
  lVar10 = param_1 + 0x48;
  do {
    puVar4 = *(undefined8 **)(lVar10 + -8);
    lVar10 = lVar10 + -8;
    lVar9 = lVar9 + -1;
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar4 + 1);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        if ((*(char *)(puVar4 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')
            ))) {
          LOCK();
          bVar11 = *(int *)((longlong)puVar4 + 0xc) == 0;
          if (bVar11) {
            *(int *)((longlong)puVar4 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar11) {
            uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar6 == 0) {
              lVar8 = 0;
            }
            else {
              lVar8 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar8 + 8) = puVar4;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
    }
  } while (lVar9 != 0);
  if (*(longlong *)(param_1 + 8) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141d13a60 ~FNode body=137 status=ok
// SIG undefined ~FNode(void)

void TOctree<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::FNode::~FNode(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    lVar1 = *(longlong *)(param_1 + 0x4018 + (ulonglong)(uVar2 & 7) * 8);
    if (lVar1 != 0) {
      ~FNode(lVar1);
      FMemory::operator_delete(lVar1,0x4060);
    }
    if (((byte)uVar2 & 7) < 7) {
      uVar2 = uVar2 ^ (uVar2 + 1 ^ uVar2) & 7;
    }
    else {
      uVar2 = uVar2 | 8;
    }
  } while (uVar2 >> 3 == 0);
  if (*(longlong *)(param_1 + 0x4000) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141d13af0 FUN_141d13af0 body=256 status=ok
// SIG undefined FUN_141d13af0(void)

void FUN_141d13af0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong **)(param_1 + 0x630) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x630) + 0x30))();
  }
  lVar4 = 2;
  lVar3 = param_1 + 0x610;
  lVar2 = 2;
  do {
    plVar1 = (longlong *)(lVar3 + -8);
    lVar3 = lVar3 + -8;
    lVar2 = lVar2 + -1;
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x30))();
    }
  } while (lVar2 != 0);
  lVar2 = 2;
  lVar3 = param_1 + 0x5e0;
  do {
    plVar1 = (longlong *)(lVar3 + -8);
    lVar3 = lVar3 + -8;
    lVar2 = lVar2 + -1;
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x30))();
    }
  } while (lVar2 != 0);
  lVar2 = 2;
  lVar3 = param_1 + 0x5b0;
  do {
    plVar1 = (longlong *)(lVar3 + -8);
    lVar3 = lVar3 + -8;
    lVar2 = lVar2 + -1;
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x30))();
    }
  } while (lVar2 != 0);
  param_1 = param_1 + 0x580;
  do {
    plVar1 = (longlong *)(param_1 + -8);
    param_1 = param_1 + -8;
    lVar4 = lVar4 + -1;
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x30))();
    }
  } while (lVar4 != 0);
  return;
}



// FUNCTION 141d13bf0 FUN_141d13bf0 body=201 status=ok
// SIG undefined FUN_141d13bf0(void)

void FUN_141d13bf0(longlong param_1)

{
  TSparseArray<FDeferredDecalProxy_*,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FDeferredDecalProxy_*,FDefaultSparseArrayAllocator>(param_1 + 0x170);
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x148) = 0;
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x100);
  if (*(longlong **)(param_1 + 0xf8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x30))();
  }
  FUN_141edd2d0(param_1 + 0xb8);
  if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x30))();
  }
  FUN_141edd2d0(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x68) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x30))();
  }
  FUN_141edd2d0(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141d13cc0 FUN_141d13cc0 body=1949 status=ok
// SIG undefined FUN_141d13cc0(void)

void FUN_141d13cc0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  
  *param_1 = &PTR_FUN_144e48160;
  plVar9 = (longlong *)param_1[0x277];
  param_1[0x277] = 0;
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x30))();
  }
  puVar8 = param_1 + 0x278;
  plVar9 = (longlong *)*puVar8;
  for (iVar6 = *(int *)(param_1 + 0x279); iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar3 = (undefined8 *)*plVar9;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        if ((*(char *)(puVar3 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')
            ))) {
          LOCK();
          bVar11 = *(int *)((longlong)puVar3 + 0xc) == 0;
          if (bVar11) {
            *(int *)((longlong)puVar3 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar11) {
            uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
            lVar7 = 0;
            if (uVar5 != 0) {
              lVar7 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar7 + 8) = puVar3;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
    plVar9 = plVar9 + 1;
  }
  *(undefined4 *)(param_1 + 0x279) = 0;
  if (*(int *)((longlong)param_1 + 0x13cc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(puVar8,0);
  }
  (**(code **)(param_1[0x246] + 0x30))();
  (**(code **)(param_1[0x24f] + 0x30))();
  (**(code **)(param_1[600] + 0x30))();
  (**(code **)(param_1[0x27d] + 0x30))(param_1 + 0x27d);
  lVar7 = param_1[0x2bf];
  if (lVar7 != 0) {
    FUN_141ace450(lVar7 + 8);
    FUN_141ace450(lVar7 + 0x30);
  }
  puVar3 = (undefined8 *)param_1[0x321];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
    param_1[0x321] = 0;
  }
  lVar7 = param_1[0xbe7];
  if (lVar7 != 0) {
    FUN_1424b5d70(lVar7);
    FMemory::operator_delete(lVar7,0x60);
    param_1[0xbe7] = 0;
  }
  if (param_1[0xbd9] != 0) {
    FMemory::operator_delete(param_1[0xbd9],0xe0);
    param_1[0xbd9] = 0;
  }
  lVar7 = param_1[0xc1a];
  if (lVar7 != 0) {
    FUN_14246f7e0(lVar7);
    FMemory::operator_delete(lVar7,0x58);
    param_1[0xc1a] = 0;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xc1c);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xc1b);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xc19);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xc18);
  if (param_1[0xc16] != 0) {
    FMemory::Free();
  }
  FUN_141d13460(param_1 + 0xc0a);
  if (param_1[0xc07] != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc02));
  *(undefined4 *)(param_1 + 0xbfc) = 0;
  if (param_1[0xbfb] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FSoftObjectPath,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FSoftObjectPath,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xbf3);
  *(undefined4 *)(param_1 + 0xbf1) = 0;
  if (param_1[0xbf0] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FGuid,TRefCountPtr<FRHIUniformBuffer>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0xbe8,0);
  if (param_1[0xbec] != 0) {
    FMemory::Free();
  }
  if (param_1[0xbe8] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xbe5) = 0;
  if (param_1[0xbe4] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVector,FVolumetricLightmapInterpolation>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVector,FVolumetricLightmapInterpolation>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xbdc);
  TOctree<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::FNode::~FNode(param_1 + 0x3c4);
  TOctree<FLightSceneInfoCompact,FLightOctreeSemantics>::FNode::~FNode(param_1 + 0x34e);
  *(undefined4 *)(param_1 + 0x34c) = 0;
  if (param_1[0x34b] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x343);
  *(undefined4 *)(param_1 + 0x342) = 0;
  if (param_1[0x341] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x339);
  *(undefined4 *)(param_1 + 0x338) = 0;
  if (param_1[0x337] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x32f);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x32a));
  if (param_1[0x328] != 0) {
    FMemory::Free();
  }
  if (param_1[0x322] != 0) {
    FMemory::Free();
  }
  if (param_1[799] != 0) {
    FMemory::Free();
  }
  TSparseArray<FDeferredDecalProxy_*,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FDeferredDecalProxy_*,FDefaultSparseArrayAllocator>(param_1 + 0x318);
  TSparseArray<FDeferredDecalProxy_*,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FDeferredDecalProxy_*,FDefaultSparseArrayAllocator>(param_1 + 0x311);
  if (param_1[0x30f] != 0) {
    FMemory::Free();
  }
  TArray<TRefCountPtr<FGPUProfilerEventNode>,FDefaultAllocator>::
  ~TArray<TRefCountPtr<FGPUProfilerEventNode>,FDefaultAllocator>(param_1 + 0x2fe);
  if ((longlong *)param_1[0x2fd] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x2fd] + 0x30))();
  }
  *(undefined4 *)(param_1 + 0x2fc) = 0;
  if (param_1[0x2fb] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,FCachedShadowMapData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x2f3,0);
  if (param_1[0x2f7] != 0) {
    FMemory::Free();
  }
  if (param_1[0x2f3] != 0) {
    FMemory::Free();
  }
  FUN_141d134e0(param_1 + 0x2be);
  if (param_1[700] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 699) = 0;
  if (param_1[0x2ba] != 0) {
    FMemory::Free();
  }
  FUN_141d12d60(param_1 + 0x2b2);
  FUN_141d137b0(param_1 + 0x27d);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x27b);
  FUN_141a82840(puVar8);
  if ((longlong *)param_1[0x277] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x277] + 0x30))();
  }
  FUN_141d13bf0(param_1 + 0x241);
  if (param_1[0x23f] != 0) {
    FMemory::Free();
  }
  if (param_1[0x23d] != 0) {
    FMemory::Free();
  }
  if (param_1[0x23b] != 0) {
    FMemory::Free();
  }
  if (param_1[0x239] != 0) {
    FMemory::Free();
  }
  TSparseArray<FDeferredDecalProxy_*,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FDeferredDecalProxy_*,FDefaultSparseArrayAllocator>(param_1 + 0x232);
  if (param_1[0x22b] != 0) {
    FMemory::Free();
  }
  if (param_1[0x226] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x21f);
  if (param_1[0x21d] != 0) {
    FMemory::Free();
  }
  if (param_1[0x21b] != 0) {
    FMemory::Free();
  }
  if (param_1[0x219] != 0) {
    FMemory::Free();
  }
  if (param_1[0x217] != 0) {
    FMemory::Free();
  }
  if (param_1[0x215] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x20e);
  if (param_1[0x20c] != 0) {
    FMemory::Free();
  }
  if (param_1[0x20a] != 0) {
    FMemory::Free();
  }
  if (param_1[0x208] != 0) {
    FMemory::Free();
  }
  if (param_1[0x206] != 0) {
    FMemory::Free();
  }
  if (param_1[0x204] != 0) {
    FMemory::Free();
  }
  if (param_1[0x202] != 0) {
    FMemory::Free();
  }
  if (param_1[0x200] != 0) {
    FMemory::Free();
  }
  if (param_1[0x1fe] != 0) {
    FMemory::Free();
  }
  plVar9 = param_1 + 0x1fc;
  if (*plVar9 != 0) {
    FMemory::Free();
  }
  lVar10 = 3;
  lVar7 = 3;
  do {
    plVar9 = plVar9 + -0x13;
    FUN_141d131e0(plVar9);
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  lVar7 = 3;
  puVar8 = param_1 + 0x1c3;
  do {
    puVar8 = puVar8 + -0x13;
    FUN_141d131e0(puVar8);
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  TStaticMeshDrawList<FShadowDepthDrawingPolicy<1>_>::
  ~TStaticMeshDrawList<FShadowDepthDrawingPolicy<1>_>(param_1 + 0x177);
  TStaticMeshDrawList<FShadowDepthDrawingPolicy<1>_>::
  ~TStaticMeshDrawList<FShadowDepthDrawingPolicy<1>_>(param_1 + 0x164);
  TStaticMeshDrawList<FVelocityDrawingPolicy>::~TStaticMeshDrawList<FVelocityDrawingPolicy>
            (param_1 + 0x151);
  TStaticMeshDrawList<FHitProxyDrawingPolicy>::~TStaticMeshDrawList<FHitProxyDrawingPolicy>
            (param_1 + 0x13e);
  puVar8 = param_1 + 299;
  TStaticMeshDrawList<FHitProxyDrawingPolicy>::~TStaticMeshDrawList<FHitProxyDrawingPolicy>(puVar8);
  lVar7 = 3;
  do {
    puVar8 = puVar8 + -0x13;
    TStaticMeshDrawList<TBasePassDrawingPolicy<FSelfShadowedCachedPointIndirectLightingPolicy>_>::
    ~TStaticMeshDrawList<TBasePassDrawingPolicy<FSelfShadowedCachedPointIndirectLightingPolicy>_>
              (puVar8);
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  lVar7 = 3;
  puVar8 = param_1 + 0xf2;
  do {
    puVar8 = puVar8 + -0x13;
    TStaticMeshDrawList<TBasePassDrawingPolicy<FSelfShadowedCachedPointIndirectLightingPolicy>_>::
    ~TStaticMeshDrawList<TBasePassDrawingPolicy<FSelfShadowedCachedPointIndirectLightingPolicy>_>
              (puVar8);
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  lVar7 = 3;
  puVar8 = param_1 + 0xb9;
  do {
    puVar8 = puVar8 + -0x13;
    TStaticMeshDrawList<TBasePassDrawingPolicy<FSelfShadowedCachedPointIndirectLightingPolicy>_>::
    ~TStaticMeshDrawList<TBasePassDrawingPolicy<FSelfShadowedCachedPointIndirectLightingPolicy>_>
              (puVar8);
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  puVar8 = param_1 + 0x80;
  do {
    puVar8 = puVar8 + -0x13;
    TStaticMeshDrawList<TBasePassDrawingPolicy<FSelfShadowedCachedPointIndirectLightingPolicy>_>::
    ~TStaticMeshDrawList<TBasePassDrawingPolicy<FSelfShadowedCachedPointIndirectLightingPolicy>_>
              (puVar8);
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  TStaticMeshDrawList<TBasePassDrawingPolicy<FSelfShadowedCachedPointIndirectLightingPolicy>_>::
  ~TStaticMeshDrawList<TBasePassDrawingPolicy<FSelfShadowedCachedPointIndirectLightingPolicy>_>
            (param_1 + 0x34);
  TStaticMeshDrawList<TBasePassDrawingPolicy<FSelfShadowedCachedPointIndirectLightingPolicy>_>::
  ~TStaticMeshDrawList<TBasePassDrawingPolicy<FSelfShadowedCachedPointIndirectLightingPolicy>_>
            (param_1 + 0x21);
  TStaticMeshDrawList<FPositionOnlyDepthDrawingPolicy>::
  ~TStaticMeshDrawList<FPositionOnlyDepthDrawingPolicy>(param_1 + 0xe);
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 4);
  *param_1 = &PTR__purecall_144e47ad0;
  return;
}



// FUNCTION 141d14460 FUN_141d14460 body=1613 status=ok
// SIG undefined FUN_141d14460(void)

void FUN_141d14460(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  *param_1 = &PTR_FUN_144e47ec8;
  puVar3 = param_1 + 0x60;
  param_1[0x3c] = 0;
  param_1[3] = &PTR_LAB_144e47f50;
  param_1[4] = &PTR_LAB_144e47f60;
  do {
    FMemory::operator_delete(*puVar3,0x270);
    uVar5 = uVar5 + 1;
    puVar3 = puVar3 + 1;
  } while (uVar5 < 2);
  FUN_141d29350(param_1[0x22e]);
  FUN_141d29350(param_1[0x27a]);
  param_1[0x27a] = 0;
  FUN_141d29350(param_1[0x27b]);
  param_1[0x27b] = 0;
  FUN_141b96ce0(param_1);
  *(undefined4 *)(param_1 + 0x30a) = 0;
  if (param_1[0x309] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FPrimitiveOcclusionHistory>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x301,0);
  if (param_1[0x305] != 0) {
    FMemory::Free();
  }
  if (param_1[0x301] != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x300);
  FUN_141b55790(param_1 + 0x2f5);
  FLatentGPUTimer::~FLatentGPUTimer(param_1 + 0x2dc);
  FLatentGPUTimer::~FLatentGPUTimer(param_1 + 0x2cb);
  FLatentGPUTimer::~FLatentGPUTimer(param_1 + 0x2ba);
  FUN_141ace450(param_1 + 0x2b5);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x2b7);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x2b6);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x2b5);
  FUN_141ace450(param_1 + 0x2b0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x2b2);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x2b1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x2b0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x2af);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x2ae);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x2ad);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x2ac);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x2ab);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x2aa);
  lVar4 = 4;
  puVar3 = param_1 + 0x2ae;
  lVar6 = 2;
  do {
    puVar3 = puVar3 + -0xb;
    _vector_destructor_iterator_
              (puVar3,0x18,2,FGlobalDistanceFieldCacheTypeState::~FGlobalDistanceFieldCacheTypeState
              );
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  if ((longlong *)param_1[0x279] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x279] + 0x30))();
  }
  FUN_141d136d0(param_1 + 0x265);
  FUN_141d15fd0(param_1 + 0x264,param_1[0x264]);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x263);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 0x262);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x261);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x260);
  if ((longlong *)param_1[0x25a] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x25a] + 0x30))();
  }
  if ((longlong *)param_1[0x259] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x259] + 0x30))();
  }
  if ((longlong *)param_1[600] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[600] + 0x30))();
  }
  if ((longlong *)param_1[599] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[599] + 0x30))();
  }
  if ((longlong *)param_1[0x256] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x256] + 0x30))();
  }
  if ((longlong *)param_1[0x255] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x255] + 0x30))();
  }
  if ((longlong *)param_1[0x254] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x254] + 0x30))();
  }
  if ((longlong *)param_1[0x253] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x253] + 0x30))();
  }
  *(undefined4 *)(param_1 + 0x250) = 0;
  if (param_1[0x24f] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<ULightComponent_const_*,FTemporalAAHistory>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x247,0);
  if (param_1[0x24b] != 0) {
    FMemory::Free();
  }
  if (param_1[0x247] != 0) {
    FMemory::Free();
  }
  lVar4 = 2;
  puVar3 = param_1 + 0x243;
  do {
    plVar1 = puVar3 + -1;
    puVar3 = puVar3 + -1;
    lVar4 = lVar4 + -1;
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x30))();
    }
  } while (lVar4 != 0);
  lVar4 = 2;
  puVar3 = param_1 + 0x23d;
  do {
    plVar1 = puVar3 + -1;
    puVar3 = puVar3 + -1;
    lVar4 = lVar4 + -1;
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x30))();
    }
  } while (lVar4 != 0);
  lVar4 = 2;
  puVar3 = param_1 + 0x237;
  do {
    plVar1 = puVar3 + -1;
    puVar3 = puVar3 + -1;
    lVar4 = lVar4 + -1;
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x30))();
    }
  } while (lVar4 != 0);
  lVar4 = 2;
  puVar3 = param_1 + 0x231;
  do {
    plVar1 = puVar3 + -1;
    puVar3 = puVar3 + -1;
    lVar4 = lVar4 + -1;
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x30))();
    }
  } while (lVar4 != 0);
  FUN_141d13af0(param_1 + 0x166);
  FUN_141d13af0(param_1 + 0x9e);
  puVar3 = (undefined8 *)param_1[0x9c];
  if (puVar3 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar3 + 1);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (param_1[0x98] != 0) {
    FMemory::Free();
  }
  if ((longlong *)param_1[0x96] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x96] + 0x30))();
  }
  FSceneViewState::FEyeAdaptationRTManager::~FEyeAdaptationRTManager(param_1 + 0x8e);
  lVar4 = param_1[0x8c];
  if (lVar4 != 0) {
    FSceneSoftwareOcclusion::~FSceneSoftwareOcclusion(lVar4);
    FMemory::operator_delete(lVar4,0x18);
  }
  *(undefined4 *)(param_1 + 0x8b) = 0;
  if (param_1[0x8a] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x82);
  puVar3 = param_1 + 0x70;
  if (param_1[0x7e] != 0) {
    FMemory::Free();
  }
  if (param_1[0x7a] != 0) {
    FMemory::Free();
  }
  if (param_1[0x76] != 0) {
    FMemory::Free();
  }
  if (param_1[0x72] != 0) {
    FMemory::Free();
  }
  do {
    plVar1 = puVar3 + -2;
    puVar3 = puVar3 + -2;
    lVar6 = lVar6 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar6 != 0);
  *(undefined4 *)(param_1 + 0x6b) = 0;
  if (param_1[0x6a] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,FIndividualOcclusionHistory>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x62,0);
  if (param_1[0x66] != 0) {
    FMemory::Free();
  }
  if (param_1[0x62] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x5f) = 0;
  if (param_1[0x5e] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPrimitiveComponentId,FPrimitiveFadingState>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x56,0);
  if (param_1[0x5a] != 0) {
    FMemory::Free();
  }
  if (param_1[0x56] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x55) = 0;
  if (param_1[0x54] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x4c);
  if (param_1[0x3a] != 0) {
    FMemory::Free();
  }
  param_1[0x2f] = &PTR__scalar_deleting_destructor__144e47e88;
  if ((longlong *)param_1[0x37] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x37] + 0x30))();
  }
  FUN_141edd2d0(param_1 + 0x2f);
  FRenderQueryPool::~FRenderQueryPool(param_1 + 0x2b);
  TArray<TMap<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>,0>_>,TInlineAllocator<3,FDefaultAllocator>_>
  ::
  ~TArray<TMap<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>,0>_>,TInlineAllocator<3,FDefaultAllocator>_>
            (param_1 + 0xb);
  FUN_141edd2d0(param_1 + 4);
  param_1[3] = &PTR_FUN_1440780a8;
  *param_1 = &PTR__purecall_144e47df0;
  return;
}



// FUNCTION 141d14ab0 operator= body=506 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<UTexture2D_const_*,FTextureInstanceView::FTextureDesc>,TDefaultMapHashableKeyFuncs<UTexture2D_const_*,FTextureInstanceView::FTextureDesc,0>,FDefaultSetAllocator>
::operator=(longlong *param_1,longlong *param_2)

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
    cVar2 = TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
            ::ConditionalRehash(param_1,iVar9,1);
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
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_141d14c0b;
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
LAB_141d14c0b:
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
        FUN_141d08bf0(param_1,local_res8,*param_2 + (longlong)iStack_4c * 0x18,0);
        uStack_50 = uStack_50 & ~uStack_5c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
      } while (iStack_4c < (int)local_58[6]);
    }
  }
  return param_1;
}



// FUNCTION 141d14cb0 FUN_141d14cb0 body=506 status=ok
// SIG undefined FUN_141d14cb0(void)

longlong * FUN_141d14cb0(longlong *param_1,longlong *param_2)

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
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
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
    cVar2 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::ConditionalRehash
                      (param_1,iVar9,1);
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
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_141d14e0b;
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
LAB_141d14e0b:
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
        FUN_141d08e90(param_1,local_res8,*param_2 + (longlong)iStack_4c * 0xc,0);
        uStack_50 = uStack_50 & ~uStack_5c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
      } while (iStack_4c < (int)local_58[6]);
    }
  }
  return param_1;
}



// FUNCTION 141d14eb0 FUN_141d14eb0 body=240 status=ok
// SIG undefined FUN_141d14eb0(void)

void FUN_141d14eb0(undefined8 *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  
  if (*(char *)(param_1[1] + 0xb8) == '\0') {
    FUN_141d53e20(*param_1,param_1[1],param_1[2]);
    cVar2 = FUN_141d29740();
    if (cVar2 != '\0') {
      puVar1 = (undefined4 *)param_1[1];
      puVar1[8] = 0;
      if (puVar1[9] != 0) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(puVar1 + 6,0);
      }
      puVar1[0xc] = 0;
      if (puVar1[0xd] != 0) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(puVar1 + 10,0);
      }
      puVar1[0x12] = 0;
      if (puVar1[0x13] != 0) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(puVar1 + 0x10,0);
      }
      puVar1[0x16] = 0;
      if (puVar1[0x17] != 0) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(puVar1 + 0x14,0);
      }
      puVar1[0x1a] = 0;
      if (puVar1[0x1b] != 0) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(puVar1 + 0x18,0);
      }
      puVar1[0x1e] = 0;
      if (puVar1[0x1f] != 0) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(puVar1 + 0x1c,0);
      }
      puVar1[0x22] = 0;
      if (puVar1[0x23] != 0) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(puVar1 + 0x20,0);
      }
      puVar1[0x26] = 0;
      if (puVar1[0x27] != 0) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(puVar1 + 0x24,0);
      }
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 0x2e) = 1;
    }
  }
  return;
}



// FUNCTION 141d14fa0 FUN_141d14fa0 body=424 status=ok
// SIG undefined FUN_141d14fa0(void)

void FUN_141d14fa0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  
  lVar10 = *param_1;
  lVar8 = (longlong)*(int *)(lVar10 + 0x13e0);
  if (*(int *)(lVar10 + 0x13e0) != 0) {
    iVar9 = 0;
    bVar13 = **(longlong **)(lVar10 + 0x13d8) != param_1[1];
    lVar7 = 0;
    iVar11 = 0;
    do {
      lVar7 = lVar7 + 1;
      iVar12 = iVar11 + 1;
      if (lVar7 < lVar8) {
        plVar5 = (longlong *)(lVar7 * 0x10 + *(longlong *)(lVar10 + 0x13d8));
        do {
          if (bVar13 != (*plVar5 != param_1[1])) break;
          iVar12 = iVar12 + 1;
          lVar7 = lVar7 + 1;
          plVar5 = plVar5 + 2;
        } while (lVar7 < lVar8);
      }
      iVar6 = iVar12 - iVar11;
      if (bVar13 == false) {
        if (iVar6 != 0) {
          plVar5 = (longlong *)((longlong)iVar11 * 0x10 + 8 + *(longlong *)(lVar10 + 0x13d8));
          do {
            plVar3 = (longlong *)*plVar5;
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar3 + 1;
              lVar4 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)*plVar3)(plVar3);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                iVar11 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar11 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
            plVar5 = plVar5 + 2;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
      }
      else {
        if (iVar9 != iVar11) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar9 * 0x10 + *(longlong *)(lVar10 + 0x13d8)),
                     (void *)((longlong)iVar11 * 0x10 + *(longlong *)(lVar10 + 0x13d8)),
                     (longlong)iVar6 << 4);
        }
        iVar9 = iVar9 + iVar6;
      }
      bVar13 = (bool)(bVar13 ^ 1);
      iVar11 = iVar12;
    } while (lVar7 < lVar8);
    *(int *)(lVar10 + 0x13e0) = iVar9;
    lVar10 = *param_1;
  }
  FUN_141b6e2d0(lVar10 + 0x13e8,lVar10,param_1[1]);
  return;
}



// FUNCTION 141d15150 FUN_141d15150 body=162 status=ok
// SIG undefined FUN_141d15150(void)

void FUN_141d15150(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  uVar1 = *(undefined4 *)((longlong)param_1 + 0xc);
  lVar2 = *param_1;
  *(int *)(lVar2 + 0x1260) = (int)param_1[1];
  *(undefined4 *)(lVar2 + 0x1264) = uVar1;
  *(undefined4 *)(lVar2 + 0x1268) = 0x37;
  if (*(char *)(lVar2 + 0x1258) == '\0') {
    (**(code **)(*(longlong *)(lVar2 + 0x1230) + 0x28))();
  }
  else {
    FRenderResource::UpdateRHI();
  }
  lVar2 = *param_1;
  uVar1 = *(undefined4 *)((longlong)param_1 + 0xc);
  *(int *)(lVar2 + 0x12a8) = (int)param_1[1];
  *(undefined4 *)(lVar2 + 0x12ac) = uVar1;
  *(undefined4 *)(lVar2 + 0x12b0) = 7;
  if (*(char *)(lVar2 + 0x12a0) == '\0') {
    (**(code **)(*(longlong *)(lVar2 + 0x1278) + 0x28))();
  }
  else {
    FRenderResource::UpdateRHI();
  }
  lVar2 = *param_1;
  uVar1 = *(undefined4 *)((longlong)param_1 + 0xc);
  *(int *)(lVar2 + 0x12f0) = (int)param_1[1];
  *(undefined4 *)(lVar2 + 0x12f4) = uVar1;
  *(undefined4 *)(lVar2 + 0x12f8) = 5;
  if (*(char *)(lVar2 + 0x12e8) != '\0') {
    FRenderResource::UpdateRHI();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141d151ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(lVar2 + 0x12c0) + 0x28))();
  return;
}



// FUNCTION 141d15200 FUN_141d15200 body=425 status=ok
// SIG undefined FUN_141d15200(void)

void FUN_141d15200(undefined4 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  uint param_5,uint param_6,int param_7)

{
  uint uVar1;
  void *_Dst;
  uint uVar2;
  ulonglong uVar3;
  size_t _Size;
  void *_Src;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint local_res8 [2];
  undefined8 local_res10;
  int local_res18;
  
  iVar4 = param_1[1];
  iVar7 = 0;
  _Src = (void *)*param_3;
  local_res10 = param_2;
  if (0 < iVar4) {
    do {
      iVar4 = 1 << (((char)iVar4 - (char)iVar7) - 1U & 0x1f);
      uVar2 = ((param_5 - 1) + iVar4) / param_5;
      uVar1 = ((param_6 - 1) + iVar4) / param_6;
      uVar5 = 1;
      if (uVar1 != 0) {
        uVar5 = uVar1;
      }
      uVar1 = 1;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      iVar4 = uVar1 * param_7;
      iVar6 = 0;
      local_res18 = iVar4;
      do {
        local_res8[0] = 0;
        uVar1 = 0;
        _Dst = (void *)(**(code **)(*DAT_146ab6358 + 0x678))
                                 (DAT_146ab6358,&DAT_146ab6e78,local_res10,iVar6,*param_1,iVar7,1,
                                  local_res8,0);
        if (uVar5 != 0) {
          _Size = (size_t)iVar4;
          uVar3 = (ulonglong)uVar5;
          do {
            _guard_xfg_dispatch_icall_nop(_Dst,_Src,_Size);
            _Src = (void *)((longlong)_Src + _Size);
            _Dst = (void *)((longlong)_Dst + (ulonglong)local_res8[0]);
            uVar3 = uVar3 - 1;
            iVar4 = local_res18;
          } while (uVar3 != 0);
        }
        (**(code **)(*DAT_146ab6358 + 0x680))
                  (DAT_146ab6358,&DAT_146ab6e78,local_res10,iVar6,*param_1,iVar7,uVar1 & 0xffffff00)
        ;
        iVar6 = iVar6 + 1;
      } while (iVar6 < 6);
      iVar4 = param_1[1];
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar4);
  }
  return;
}



// FUNCTION 141d153b0 FUN_141d153b0 body=257 status=ok
// SIG undefined FUN_141d153b0(void)

void FUN_141d153b0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = (longlong)*(int *)(lVar1 + 0x15e8);
  if (*(int *)(lVar1 + 0x15e8) != 0) {
    iVar8 = 0;
    bVar9 = **(longlong **)(lVar1 + 0x15e0) != lVar2;
    lVar5 = 0;
    iVar6 = 0;
    do {
      lVar5 = lVar5 + 1;
      iVar7 = iVar6 + 1;
      if (lVar5 < lVar3) {
        plVar4 = (longlong *)(*(longlong *)(lVar1 + 0x15e0) + lVar5 * 8);
        do {
          if (bVar9 != (*plVar4 != lVar2)) break;
          iVar7 = iVar7 + 1;
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 1;
        } while (lVar5 < lVar3);
      }
      if (bVar9 != false) {
        if (iVar8 != iVar6) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(lVar1 + 0x15e0) + (longlong)iVar8 * 8),
                     (void *)(*(longlong *)(lVar1 + 0x15e0) + (longlong)iVar6 * 8),
                     (longlong)(iVar7 - iVar6) << 3);
        }
        iVar8 = iVar8 + (iVar7 - iVar6);
      }
      bVar9 = (bool)(bVar9 ^ 1);
      iVar6 = iVar7;
    } while (lVar5 < lVar3);
    *(int *)(lVar1 + 0x15e8) = iVar8;
  }
  return;
}



// FUNCTION 141d154c0 FUN_141d154c0 body=1334 status=ok
// SIG undefined FUN_141d154c0(void)

void FUN_141d154c0(longlong *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  longlong lVar23;
  longlong lVar24;
  undefined8 *puVar25;
  int iVar26;
  uint *puVar27;
  int local_318;
  uint uStack_314;
  int iStack_310;
  uint uStack_30c;
  undefined8 local_308;
  uint uStack_300;
  int iStack_2fc;
  undefined1 local_2f8 [16];
  longlong *local_2e8;
  char local_2e0;
  char cStack_2df;
  undefined8 local_2d8;
  undefined4 local_2d0;
  longlong *local_2c8;
  int iStack_2c0;
  uint uStack_2bc;
  uint *puStack_2b8;
  undefined1 auStack_2b0 [16];
  undefined8 local_2a0;
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
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  float local_178;
  undefined8 local_174;
  undefined4 local_16c;
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
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  lVar23 = *param_1;
  local_2d8 = *(undefined8 *)(lVar23 + 0x192c);
  plVar1 = (longlong *)(lVar23 + 0x1978);
  local_2d0 = *(undefined4 *)(lVar23 + 0x1934);
  uVar2 = *(undefined4 *)(lVar23 + 0x1920);
  uVar3 = *(undefined4 *)(lVar23 + 0x1924);
  uVar4 = *(undefined4 *)(lVar23 + 0x1928);
  puStack_2b8 = (uint *)(lVar23 + 0x1988);
  iVar5 = *(int *)(lVar23 + 0x19a0);
  local_318 = 0;
  uStack_314 = 1;
  local_308._4_4_ = 0;
  uStack_300 = 0;
  if (iVar5 != 0) {
    puVar27 = *(uint **)(lVar23 + 0x1998);
    if (*(uint **)(lVar23 + 0x1998) == (uint *)0x0) {
      puVar27 = puStack_2b8;
    }
    uVar6 = *puVar27;
    local_318 = 0;
    uStack_300 = 0;
    while (uVar6 == 0) {
      lVar24 = (longlong)local_318;
      uStack_300 = uStack_300 + 0x20;
      iVar26 = local_318 + 1;
      bVar7 = (int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_318;
      local_318 = iVar26;
      if (bVar7) goto LAB_141d155d1;
      uVar6 = puVar27[lVar24 + 1];
    }
    uStack_314 = -uVar6 & uVar6;
    iVar26 = 0x1f;
    if (uStack_314 != 0) {
      for (; uStack_314 >> iVar26 == 0; iVar26 = iVar26 + -1) {
      }
    }
    if (uStack_314 == 0) {
      iVar26 = 0x20;
    }
    else {
      iVar26 = 0x1f - iVar26;
    }
    local_308._4_4_ = (uStack_300 - iVar26) + 0x1f;
    if (iVar5 < local_308._4_4_) {
LAB_141d155d1:
      local_308._4_4_ = iVar5;
    }
  }
  auStack_2b0._4_4_ = local_308._4_4_;
  auStack_2b0._0_4_ = 0xffffffff;
  auStack_2b0._8_4_ = uStack_300;
  auStack_2b0._12_4_ = iStack_2fc;
  iStack_2c0 = local_318;
  uStack_2bc = uStack_314;
  local_2e0 = '\0';
  cStack_2df = '\0';
  local_2a0._0_4_ = SUB84(plVar1,0);
  local_2a0._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_300 = 0xffffffff;
  iStack_2fc = local_308._4_4_;
  iStack_310 = local_318;
  uStack_30c = uStack_314;
  local_2f8._8_4_ = (undefined4)local_2a0;
  local_2f8._0_8_ = auStack_2b0._8_8_;
  local_2f8._12_4_ = local_2a0._4_4_;
  bVar7 = local_308._4_4_ < *(int *)(lVar23 + 0x19a0);
  local_2e8 = plVar1;
  local_2c8 = plVar1;
  local_2a0 = plVar1;
  local_308 = puStack_2b8;
  if (bVar7) {
    do {
      lVar23 = *(longlong *)(*plVar1 + (longlong)iStack_2fc * 0x18);
      lVar24 = *(longlong *)(*plVar1 + 8 + (longlong)iStack_2fc * 0x18);
      if ((*(longlong *)(lVar23 + 0x38) == 0) || (*(longlong *)(lVar23 + 0xf8) == 0)) {
        TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
        ::Remove(local_2f8._8_8_,iStack_2fc);
        local_2e0 = '\x01';
      }
      else {
        FSpeedTreeWind::SetDirection(lVar24,&local_2d8);
        FSpeedTreeWind::SetStrength(lVar24,uVar2);
        FSpeedTreeWind::SetGustMin(lVar24,uVar3);
        FSpeedTreeWind::SetGustMax(lVar24,uVar4);
        FSpeedTreeWind::Advance(lVar24,1,(int)param_1[1]);
        puVar20 = (undefined8 *)FUN_14075c7f0(lVar24);
        FSpeedTreeUniformParameters::FSpeedTreeUniformParameters(&local_298);
        local_174 = 0;
        local_16c = 0;
        local_168 = puVar20[0x24];
        uStack_160 = puVar20[0x25];
        local_178 = (float)(double)param_1[1];
        local_298 = *puVar20;
        uStack_290 = puVar20[1];
        local_288 = puVar20[2];
        uStack_280 = puVar20[3];
        local_158 = puVar20[0x26];
        uStack_150 = puVar20[0x27];
        local_278 = puVar20[4];
        uStack_270 = puVar20[5];
        local_148 = puVar20[0x28];
        uStack_140 = puVar20[0x29];
        local_268 = puVar20[6];
        uStack_260 = puVar20[7];
        local_138 = puVar20[0x2a];
        uStack_130 = puVar20[0x2b];
        local_258 = puVar20[8];
        uStack_250 = puVar20[9];
        local_128 = puVar20[0x2c];
        uStack_120 = puVar20[0x2d];
        local_248 = puVar20[10];
        uStack_240 = puVar20[0xb];
        local_118 = puVar20[0x2e];
        uStack_110 = puVar20[0x2f];
        local_238 = puVar20[0xc];
        uStack_230 = puVar20[0xd];
        local_108 = puVar20[0x30];
        uStack_100 = puVar20[0x31];
        local_228 = puVar20[0xe];
        uStack_220 = puVar20[0xf];
        local_f8 = puVar20[0x32];
        uStack_f0 = puVar20[0x33];
        local_218 = puVar20[0x10];
        uStack_210 = puVar20[0x11];
        local_e8 = puVar20[0x34];
        uStack_e0 = puVar20[0x35];
        local_208 = puVar20[0x12];
        uStack_200 = puVar20[0x13];
        local_d8 = puVar20[0x36];
        uStack_d0 = puVar20[0x37];
        local_1f8 = puVar20[0x14];
        uStack_1f0 = puVar20[0x15];
        local_c8 = puVar20[0x38];
        uStack_c0 = puVar20[0x39];
        local_1e8 = puVar20[0x16];
        uStack_1e0 = puVar20[0x17];
        local_b8 = puVar20[0x3a];
        uStack_b0 = puVar20[0x3b];
        local_1d8 = puVar20[0x18];
        uStack_1d0 = puVar20[0x19];
        local_a8 = puVar20[0x3c];
        uStack_a0 = puVar20[0x3d];
        local_1c8 = puVar20[0x1a];
        uStack_1c0 = puVar20[0x1b];
        local_98 = puVar20[0x3e];
        uStack_90 = puVar20[0x3f];
        local_88 = puVar20[0x40];
        uStack_80 = puVar20[0x41];
        local_1b8 = puVar20[0x1c];
        uStack_1b0 = puVar20[0x1d];
        local_78 = puVar20[0x42];
        uStack_70 = puVar20[0x43];
        local_1a8 = puVar20[0x1e];
        uStack_1a0 = puVar20[0x1f];
        local_68 = puVar20[0x44];
        uStack_60 = puVar20[0x45];
        local_198 = puVar20[0x20];
        uStack_190 = puVar20[0x21];
        local_58 = *(undefined4 *)(puVar20 + 0x46);
        uStack_54 = *(undefined4 *)((longlong)puVar20 + 0x234);
        uStack_50 = *(undefined4 *)(puVar20 + 0x47);
        uStack_4c = *(undefined4 *)((longlong)puVar20 + 0x23c);
        local_188 = *(undefined4 *)(puVar20 + 0x22);
        uStack_184 = *(undefined4 *)((longlong)puVar20 + 0x114);
        uStack_180 = *(undefined4 *)(puVar20 + 0x23);
        uStack_17c = *(undefined4 *)((longlong)puVar20 + 0x11c);
        if (*(longlong *)(lVar24 + 0x8d0) == 0) {
          uVar21 = FMemory::Malloc(0x260,0x10);
          *(undefined8 *)(lVar24 + 0x8d0) = uVar21;
        }
        lVar23 = 4;
        puVar20 = *(undefined8 **)(lVar24 + 0x8d0);
        puVar19 = &local_298;
        do {
          puVar25 = puVar19;
          puVar22 = puVar20;
          uVar21 = puVar25[1];
          uVar16 = puVar25[2];
          uVar17 = puVar25[3];
          *puVar22 = *puVar25;
          puVar22[1] = uVar21;
          uVar21 = puVar25[4];
          uVar18 = puVar25[5];
          puVar22[2] = uVar16;
          puVar22[3] = uVar17;
          uVar16 = puVar25[6];
          uVar17 = puVar25[7];
          puVar22[4] = uVar21;
          puVar22[5] = uVar18;
          uVar21 = puVar25[8];
          uVar18 = puVar25[9];
          puVar22[6] = uVar16;
          puVar22[7] = uVar17;
          uVar16 = puVar25[10];
          uVar17 = puVar25[0xb];
          puVar22[8] = uVar21;
          puVar22[9] = uVar18;
          uVar21 = puVar25[0xc];
          uVar18 = puVar25[0xd];
          puVar22[10] = uVar16;
          puVar22[0xb] = uVar17;
          uVar16 = puVar25[0xe];
          uVar17 = puVar25[0xf];
          puVar22[0xc] = uVar21;
          puVar22[0xd] = uVar18;
          puVar22[0xe] = uVar16;
          puVar22[0xf] = uVar17;
          lVar23 = lVar23 + -1;
          puVar20 = puVar22 + 0x10;
          puVar19 = puVar25 + 0x10;
        } while (lVar23 != 0);
        uVar21 = puVar25[0x11];
        uVar16 = puVar25[0x12];
        uVar17 = puVar25[0x13];
        puVar22[0x10] = puVar25[0x10];
        puVar22[0x11] = uVar21;
        uVar21 = puVar25[0x14];
        uVar18 = puVar25[0x15];
        puVar22[0x12] = uVar16;
        puVar22[0x13] = uVar17;
        uVar16 = puVar25[0x16];
        uVar17 = puVar25[0x17];
        puVar22[0x14] = uVar21;
        puVar22[0x15] = uVar18;
        uVar8 = *(undefined4 *)(puVar25 + 0x18);
        uVar9 = *(undefined4 *)((longlong)puVar25 + 0xc4);
        uVar10 = *(undefined4 *)(puVar25 + 0x19);
        uVar11 = *(undefined4 *)((longlong)puVar25 + 0xcc);
        puVar22[0x16] = uVar16;
        puVar22[0x17] = uVar17;
        uVar12 = *(undefined4 *)(puVar25 + 0x1a);
        uVar13 = *(undefined4 *)((longlong)puVar25 + 0xd4);
        uVar14 = *(undefined4 *)(puVar25 + 0x1b);
        uVar15 = *(undefined4 *)((longlong)puVar25 + 0xdc);
        *(undefined4 *)(puVar22 + 0x18) = uVar8;
        *(undefined4 *)((longlong)puVar22 + 0xc4) = uVar9;
        *(undefined4 *)(puVar22 + 0x19) = uVar10;
        *(undefined4 *)((longlong)puVar22 + 0xcc) = uVar11;
        *(undefined4 *)(puVar22 + 0x1a) = uVar12;
        *(undefined4 *)((longlong)puVar22 + 0xd4) = uVar13;
        *(undefined4 *)(puVar22 + 0x1b) = uVar14;
        *(undefined4 *)((longlong)puVar22 + 0xdc) = uVar15;
        FRenderResource::UpdateRHI(lVar24 + 0x890);
      }
      uStack_300 = uStack_300 & ~uStack_30c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_310);
    } while (iStack_2fc < (int)local_308[6]);
    if ((local_2e0 != '\0') && (cStack_2df != '\0')) {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_2e8,(int)local_2e8[1] - *(int *)((longlong)local_2e8 + 0x34),
                          CONCAT71((uint7)(uint3)((uint)iStack_2fc >> 8),1));
    }
  }
  return;
}



// FUNCTION 141d15a00 FUN_141d15a00 body=468 status=ok
// SIG undefined FUN_141d15a00(void)

void FUN_141d15a00(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  longlong *plVar21;
  uint *puVar22;
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
  
  lVar5 = *param_1;
  lVar20 = param_1[1];
  plVar21 = (longlong *)(lVar5 + 0x5ee0);
  *(char *)(lVar5 + 0x5f31) = (char)lVar20;
  if ((char)lVar20 == '\0') {
    iVar4 = *(int *)(lVar5 + 0x5f08);
    puStack_28 = (uint *)(lVar5 + 0x5ef0);
    local_78 = 0;
    uStack_74 = 1;
    local_68._4_4_ = 0;
    uStack_60 = 0;
    if (iVar4 != 0) {
      puVar22 = *(uint **)(lVar5 + 0x5f00);
      if (*(uint **)(lVar5 + 0x5f00) == (uint *)0x0) {
        puVar22 = puStack_28;
      }
      uVar19 = *puVar22;
      local_78 = 0;
      uStack_60 = 0;
      while (uVar19 == 0) {
        lVar20 = (longlong)(int)local_78;
        uStack_60 = uStack_60 + 0x20;
        uVar19 = local_78 + 1;
        bVar6 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_78;
        local_78 = uVar19;
        if (bVar6) goto LAB_141d15adf;
        uVar19 = puVar22[lVar20 + 1];
      }
      uStack_74 = -uVar19 & uVar19;
      iVar18 = 0x1f;
      if (uStack_74 != 0) {
        for (; uStack_74 >> iVar18 == 0; iVar18 = iVar18 + -1) {
        }
      }
      if (uStack_74 == 0) {
        iVar18 = 0x20;
      }
      else {
        iVar18 = 0x1f - iVar18;
      }
      local_68._4_4_ = (uStack_60 - iVar18) + 0x1f;
      if (iVar4 < local_68._4_4_) {
LAB_141d15adf:
        local_68._4_4_ = iVar4;
      }
    }
    auStack_20._4_4_ = local_68._4_4_;
    auStack_20._0_4_ = 0xffffffff;
    auStack_20._8_4_ = uStack_60;
    auStack_20._12_4_ = iStack_5c;
    uStack_30 = local_78;
    uStack_2c = uStack_74;
    local_40 = 0;
    local_10._0_4_ = SUB84(plVar21,0);
    local_10._4_4_ = (undefined4)((ulonglong)plVar21 >> 0x20);
    uStack_60 = 0xffffffff;
    iStack_5c = local_68._4_4_;
    uStack_70 = local_78;
    uStack_6c = uStack_74;
    local_58._8_4_ = (undefined4)local_10;
    local_58._0_8_ = auStack_20._8_8_;
    local_58._12_4_ = local_10._4_4_;
    bVar6 = local_68._4_4_ < *(int *)(lVar5 + 0x5f08);
    local_48 = plVar21;
    local_38 = plVar21;
    local_10 = plVar21;
    local_68 = puStack_28;
    if (bVar6) {
      do {
        lVar20 = (longlong)iStack_5c * 0xc0;
        lVar5 = *plVar21;
        uStack_60 = uStack_60 & ~uStack_6c;
        puVar1 = (undefined8 *)(lVar20 + 0x60 + lVar5);
        uVar15 = puVar1[1];
        puVar2 = (undefined8 *)(lVar20 + 0x70 + lVar5);
        uVar16 = *puVar2;
        uVar17 = puVar2[1];
        puVar2 = (undefined8 *)(lVar20 + 0x20 + lVar5);
        *puVar2 = *puVar1;
        puVar2[1] = uVar15;
        puVar3 = (undefined4 *)(lVar20 + 0x80 + lVar5);
        uVar7 = *puVar3;
        uVar8 = puVar3[1];
        uVar9 = puVar3[2];
        uVar10 = puVar3[3];
        puVar1 = (undefined8 *)(lVar20 + 0x30 + lVar5);
        *puVar1 = uVar16;
        puVar1[1] = uVar17;
        puVar3 = (undefined4 *)(lVar20 + 0x90 + lVar5);
        uVar11 = *puVar3;
        uVar12 = puVar3[1];
        uVar13 = puVar3[2];
        uVar14 = puVar3[3];
        puVar3 = (undefined4 *)(lVar20 + 0x40 + lVar5);
        *puVar3 = uVar7;
        puVar3[1] = uVar8;
        puVar3[2] = uVar9;
        puVar3[3] = uVar10;
        puVar3 = (undefined4 *)(lVar20 + 0x50 + lVar5);
        *puVar3 = uVar11;
        puVar3[1] = uVar12;
        puVar3[2] = uVar13;
        puVar3[3] = uVar14;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
      } while (iStack_5c < (int)local_68[6]);
      if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
        TSet<TTuple<FPrimitiveComponentId,FMotionBlurInfo>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FMotionBlurInfo,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
      }
    }
  }
  return;
}



// FUNCTION 141d15be0 FUN_141d15be0 body=193 status=ok
// SIG undefined FUN_141d15be0(void)

void FUN_141d15be0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  LOCK();
  *(int *)(*param_1 + 0x5ed4) = *(int *)(*param_1 + 0x5ed4) + 1;
  UNLOCK();
  *(undefined1 *)(*param_1 + 0x1208) = 1;
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 0x1218);
  *(int *)(lVar2 + 0x1218) = iVar1 + 1;
  if (*(int *)(lVar2 + 0x121c) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar2 + 0x1210,iVar1);
  }
  *(longlong *)(*(longlong *)(lVar2 + 0x1210) + (longlong)iVar1 * 8) = param_1[1];
  *(int *)(param_1[1] + 8) = iVar1;
  lVar2 = *param_1;
  lVar3 = param_1[1];
  iVar1 = *(int *)(lVar2 + 0x1228);
  *(int *)(lVar2 + 0x1228) = iVar1 + 1;
  if (*(int *)(lVar2 + 0x122c) < iVar1 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(lVar2 + 0x1220,iVar1);
  }
  lVar2 = *(longlong *)(lVar2 + 0x1220);
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 0xc) = *(undefined8 *)(lVar3 + 0x20);
  *(undefined4 *)(lVar2 + (longlong)iVar1 * 0xc + 8) = *(undefined4 *)(lVar3 + 0x28);
  return;
}



// FUNCTION 141d15cb0 FUN_141d15cb0 body=309 status=ok
// SIG undefined FUN_141d15cb0(void)

void FUN_141d15cb0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  LOCK();
  *(int *)(*param_1 + 0x5ed4) = *(int *)(*param_1 + 0x5ed4) + -1;
  UNLOCK();
  *(undefined1 *)(*param_1 + 0x1208) = 1;
  lVar3 = *param_1;
  iVar1 = *(int *)(param_1[1] + 8);
  lVar5 = (longlong)iVar1;
  iVar2 = *(int *)(lVar3 + 0x1218);
  iVar4 = (iVar2 - iVar1) + -1;
  if (0 < iVar4) {
    iVar4 = 1;
  }
  if (iVar4 != 0) {
    _guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(lVar3 + 0x1210) + lVar5 * 8),
               (void *)(*(longlong *)(lVar3 + 0x1210) + (longlong)(iVar2 - iVar4) * 8),
               (longlong)iVar4 << 3);
    iVar2 = *(int *)(lVar3 + 0x1218);
  }
  *(int *)(lVar3 + 0x1218) = iVar2 + -1;
  TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(lVar3 + 0x1210);
  lVar3 = *param_1;
  iVar2 = *(int *)(lVar3 + 0x1228);
  iVar4 = (iVar2 - iVar1) + -1;
  if (0 < iVar4) {
    iVar4 = 1;
  }
  if (iVar4 != 0) {
    _guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(lVar3 + 0x1220) + lVar5 * 0xc),
               (void *)(*(longlong *)(lVar3 + 0x1220) + (longlong)(iVar2 - iVar4) * 0xc),
               (longlong)iVar4 * 0xc);
    iVar2 = *(int *)(lVar3 + 0x1228);
  }
  *(int *)(lVar3 + 0x1228) = iVar2 + -1;
  TArray<FVector,FDefaultAllocator>::ResizeShrink(lVar3 + 0x1220);
  if ((-1 < iVar1) && (iVar1 < *(int *)(*param_1 + 0x1218))) {
    *(int *)(*(longlong *)(*(longlong *)(*param_1 + 0x1210) + lVar5 * 8) + 8) = iVar1;
  }
  FMemory::operator_delete(param_1[1],0xd0);
  return;
}



// FUNCTION 141d15df0 FUN_141d15df0 body=131 status=ok
// SIG undefined FUN_141d15df0(void)

void FUN_141d15df0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 0x13e0);
  *(int *)(lVar2 + 0x13e0) = iVar1 + 1;
  if (*(int *)(lVar2 + 0x13e4) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar2 + 0x13d8,iVar1);
  }
  plVar3 = (longlong *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar2 + 0x13d8));
  *plVar3 = param_1[1];
  lVar2 = param_1[2];
  plVar3[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  FUN_141b6e2d0(*param_1 + 0x13e8,*param_1,param_1[1]);
  return;
}



// FUNCTION 141d15e80 FUN_141d15e80 body=334 status=ok
// SIG undefined FUN_141d15e80(void)

ulonglong FUN_141d15e80(longlong *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  undefined8 *local_res20;
  undefined4 *local_48;
  undefined8 **local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar6 = TSet<TTuple<FGuid,TRefCountPtr<FRHIUniformBuffer>_>,TDefaultMapHashableKeyFuncs<FGuid,TRefCountPtr<FRHIUniformBuffer>,0>,FDefaultSetAllocator>
          ::Empty(*param_1 + 0x5f40,0);
  iVar8 = 0;
  if (0 < (int)param_1[2]) {
    local_48 = &local_38;
    lVar9 = 0;
    local_40 = &local_res20;
    do {
      puVar2 = *(undefined4 **)(lVar9 + param_1[1]);
      local_res20 = *(undefined8 **)(puVar2 + 6);
      if (local_res20 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(local_res20 + 1) = *(int *)(local_res20 + 1) + 1;
        UNLOCK();
      }
      local_38 = *puVar2;
      uStack_34 = puVar2[1];
      uStack_30 = puVar2[2];
      uStack_2c = puVar2[3];
      uVar6 = FUN_141d09100(*param_1 + 0x5f40,local_res8,&local_48,0);
      puVar3 = local_res20;
      if (local_res20 != (undefined8 *)0x0) {
        LOCK();
        puVar1 = (uint *)(local_res20 + 1);
        uVar5 = *puVar1;
        uVar6 = (ulonglong)uVar5;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if (uVar5 == 1) {
          if ((*(char *)(local_res20 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
            uVar6 = 0;
            LOCK();
            uVar5 = *(uint *)((longlong)puVar3 + 0xc);
            if (uVar5 == 0) {
              *(uint *)((longlong)puVar3 + 0xc) = 1;
            }
            else {
              uVar6 = (ulonglong)uVar5;
            }
            UNLOCK();
            if (uVar5 == 0) {
              uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
              if (uVar5 == 0) {
                lVar7 = 0;
              }
              else {
                lVar7 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
              }
              *(undefined8 **)(lVar7 + 8) = puVar3;
              uVar6 = FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            uVar6 = (**(code **)*puVar3)(puVar3,1);
          }
        }
      }
      iVar8 = iVar8 + 1;
      lVar9 = lVar9 + 8;
    } while (iVar8 < (int)param_1[2]);
  }
  return uVar6;
}



// FUNCTION 141d15fd0 FUN_141d15fd0 body=240 status=ok
// SIG undefined FUN_141d15fd0(void)

void FUN_141d15fd0(undefined8 param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_141ace450(param_2 + 0x2d8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_2 + 0x2e8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_2 + 0x2e0);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_2 + 0x2d8);
    FUN_141ace450(param_2 + 0x2b0);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_2 + 0x2c0);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_2 + 0x2b8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_2 + 0x2b0);
    *(undefined ***)(param_2 + 0x288) = &PTR__scalar_deleting_destructor__144deb628;
    *(undefined4 *)(param_2 + 0x2a0) = 0;
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_2 + 0x290,0);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_2 + 0x298,0);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_2 + 0x298);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_2 + 0x290);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_2 + 0x280);
    FMemory::operator_delete(param_2,0x300);
  }
  return;
}



// FUNCTION 141d160e0 FUN_141d160e0 body=72 status=ok
// SIG undefined FUN_141d160e0(void)

undefined8 * FUN_141d160e0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 141d16130 FUN_141d16130 body=97 status=ok
// SIG undefined FUN_141d16130(void)

undefined8 * FUN_141d16130(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e48c38;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141d161a0 FUN_141d161a0 body=97 status=ok
// SIG undefined FUN_141d161a0(void)

undefined8 * FUN_141d161a0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e48c98;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141d16210 FUN_141d16210 body=97 status=ok
// SIG undefined FUN_141d16210(void)

undefined8 * FUN_141d16210(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e48cb8;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141d16280 FUN_141d16280 body=97 status=ok
// SIG undefined FUN_141d16280(void)

undefined8 * FUN_141d16280(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e48bf8;
  if (param_1[8] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[8] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141d162f0 `scalar_deleting_destructor' body=100 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGraphTask<TEnqueueUniqueRenderCommandType<`FScene::AddExponentialHeightFog'::`2'::FAddFogCommandName,<lambda_23dd2bba3cad69a0d8fd09c4f72e10da>_>_>
::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__144e48c28;
  if (param_1[0x19] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x19] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 141d16360 FUN_141d16360 body=97 status=ok
// SIG undefined FUN_141d16360(void)

undefined8 * FUN_141d16360(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e48c68;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141d163d0 FUN_141d163d0 body=97 status=ok
// SIG undefined FUN_141d163d0(void)

undefined8 * FUN_141d163d0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e48c78;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141d16440 FUN_141d16440 body=97 status=ok
// SIG undefined FUN_141d16440(void)

undefined8 * FUN_141d16440(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e48d10;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141d164b0 FUN_141d164b0 body=97 status=ok
// SIG undefined FUN_141d164b0(void)

undefined8 * FUN_141d164b0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e48cd8;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141d16520 FUN_141d16520 body=97 status=ok
// SIG undefined FUN_141d16520(void)

undefined8 * FUN_141d16520(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e48c88;
  if (param_1[0xf] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xf] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 141d16590 FUN_141d16590 body=97 status=ok
// SIG undefined FUN_141d16590(void)

undefined8 * FUN_141d16590(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e48bd8;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141d16600 FUN_141d16600 body=97 status=ok
// SIG undefined FUN_141d16600(void)

undefined8 * FUN_141d16600(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e48ce8;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141d16670 FUN_141d16670 body=97 status=ok
// SIG undefined FUN_141d16670(void)

undefined8 * FUN_141d16670(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e48ca8;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141d166e0 FUN_141d166e0 body=97 status=ok
// SIG undefined FUN_141d166e0(void)

undefined8 * FUN_141d166e0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e48cc8;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141d16750 FUN_141d16750 body=97 status=ok
// SIG undefined FUN_141d16750(void)

undefined8 * FUN_141d16750(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e48be8;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141d167c0 FUN_141d167c0 body=97 status=ok
// SIG undefined FUN_141d167c0(void)

undefined8 * FUN_141d167c0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e48c18;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141d16830 FUN_141d16830 body=97 status=ok
// SIG undefined FUN_141d16830(void)

undefined8 * FUN_141d16830(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e48c58;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141d168a0 `scalar_deleting_destructor' body=100 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGraphTask<TEnqueueUniqueRenderCommandType<`FScene::AddExponentialHeightFog'::`2'::FAddFogCommandName,<lambda_23dd2bba3cad69a0d8fd09c4f72e10da>_>_>
::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__144e48c48;
  if (param_1[0x19] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x19] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 141d16910 FUN_141d16910 body=97 status=ok
// SIG undefined FUN_141d16910(void)

undefined8 * FUN_141d16910(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e48c08;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141d16980 FUN_141d16980 body=97 status=ok
// SIG undefined FUN_141d16980(void)

undefined8 * FUN_141d16980(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e485c0;
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 141d169f0 FUN_141d169f0 body=97 status=ok
// SIG undefined FUN_141d169f0(void)

undefined8 * FUN_141d169f0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e485a0;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141d16a60 FUN_141d16a60 body=97 status=ok
// SIG undefined FUN_141d16a60(void)

undefined8 * FUN_141d16a60(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e485e0;
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 141d16ad0 FUN_141d16ad0 body=97 status=ok
// SIG undefined FUN_141d16ad0(void)

undefined8 * FUN_141d16ad0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e48620;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141d16b40 FUN_141d16b40 body=97 status=ok
// SIG undefined FUN_141d16b40(void)

undefined8 * FUN_141d16b40(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e485f0;
  if (param_1[8] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[8] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141d16bb0 FUN_141d16bb0 body=97 status=ok
// SIG undefined FUN_141d16bb0(void)

undefined8 * FUN_141d16bb0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e485d0;
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 141d16c20 `scalar_deleting_destructor' body=100 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGraphTask<`FScene::AddExponentialHeightFog'::`2'::EURCMacro_FAddFogCommand>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__144e48770;
  if (param_1[0x18] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x18] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 141d16c90 FUN_141d16c90 body=97 status=ok
// SIG undefined FUN_141d16c90(void)

undefined8 * FUN_141d16c90(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e48700;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141d16d00 FUN_141d16d00 body=97 status=ok
// SIG undefined FUN_141d16d00(void)

undefined8 * FUN_141d16d00(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e486f0;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141d16d70 FUN_141d16d70 body=97 status=ok
// SIG undefined FUN_141d16d70(void)

undefined8 * FUN_141d16d70(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e487b0;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141d16de0 FUN_141d16de0 body=97 status=ok
// SIG undefined FUN_141d16de0(void)

undefined8 * FUN_141d16de0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e48790;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141d16e50 FUN_141d16e50 body=97 status=ok
// SIG undefined FUN_141d16e50(void)

undefined8 * FUN_141d16e50(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e48810;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141d16ec0 FUN_141d16ec0 body=97 status=ok
// SIG undefined FUN_141d16ec0(void)

undefined8 * FUN_141d16ec0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e48720;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141d16f30 FUN_141d16f30 body=97 status=ok
// SIG undefined FUN_141d16f30(void)

undefined8 * FUN_141d16f30(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e487c0;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141d16fa0 FUN_141d16fa0 body=97 status=ok
// SIG undefined FUN_141d16fa0(void)

undefined8 * FUN_141d16fa0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e48820;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141d17010 FUN_141d17010 body=97 status=ok
// SIG undefined FUN_141d17010(void)

undefined8 * FUN_141d17010(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e48800;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141d17080 FUN_141d17080 body=97 status=ok
// SIG undefined FUN_141d17080(void)

undefined8 * FUN_141d17080(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e486e0;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141d170f0 FUN_141d170f0 body=97 status=ok
// SIG undefined FUN_141d170f0(void)

undefined8 * FUN_141d170f0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e48780;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141d17160 FUN_141d17160 body=97 status=ok
// SIG undefined FUN_141d17160(void)

undefined8 * FUN_141d17160(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e48760;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141d171d0 FUN_141d171d0 body=97 status=ok
// SIG undefined FUN_141d171d0(void)

undefined8 * FUN_141d171d0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e486d0;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141d17240 FUN_141d17240 body=97 status=ok
// SIG undefined FUN_141d17240(void)

undefined8 * FUN_141d17240(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e487a0;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141d172b0 FUN_141d172b0 body=97 status=ok
// SIG undefined FUN_141d172b0(void)

undefined8 * FUN_141d172b0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e487e0;
  if (param_1[0xe] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xe] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 141d17320 FUN_141d17320 body=97 status=ok
// SIG undefined FUN_141d17320(void)

undefined8 * FUN_141d17320(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e48710;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141d17390 FUN_141d17390 body=97 status=ok
// SIG undefined FUN_141d17390(void)

undefined8 * FUN_141d17390(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e48b48;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141d17400 FUN_141d17400 body=97 status=ok
// SIG undefined FUN_141d17400(void)

undefined8 * FUN_141d17400(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e487f0;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141d17470 FUN_141d17470 body=97 status=ok
// SIG undefined FUN_141d17470(void)

undefined8 * FUN_141d17470(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e48610;
  if (param_1[7] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[7] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 141d174e0 FUN_141d174e0 body=97 status=ok
// SIG undefined FUN_141d174e0(void)

undefined8 * FUN_141d174e0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e485b0;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141d17550 FUN_141d17550 body=97 status=ok
// SIG undefined FUN_141d17550(void)

undefined8 * FUN_141d17550(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e48600;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141d175c0 FUN_141d175c0 body=97 status=ok
// SIG undefined FUN_141d175c0(void)

undefined8 * FUN_141d175c0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e48730;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141d17630 FUN_141d17630 body=100 status=ok
// SIG undefined FUN_141d17630(void)

undefined8 * FUN_141d17630(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e48650;
  if (param_1[0x359] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x359] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1ad0);
  }
  return param_1;
}



// FUNCTION 141d176a0 FUN_141d176a0 body=97 status=ok
// SIG undefined FUN_141d176a0(void)

undefined8 * FUN_141d176a0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e486b0;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141d17710 FUN_141d17710 body=97 status=ok
// SIG undefined FUN_141d17710(void)

undefined8 * FUN_141d17710(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e48750;
  if (param_1[0xb] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xb] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 141d17780 FUN_141d17780 body=97 status=ok
// SIG undefined FUN_141d17780(void)

undefined8 * FUN_141d17780(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e48740;
  if (param_1[0xf] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xf] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 141d177f0 FUN_141d177f0 body=97 status=ok
// SIG undefined FUN_141d177f0(void)

undefined8 * FUN_141d177f0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e487d0;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141d17860 FUN_141d17860 body=97 status=ok
// SIG undefined FUN_141d17860(void)

undefined8 * FUN_141d17860(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e486c0;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141d178d0 FUN_141d178d0 body=97 status=ok
// SIG undefined FUN_141d178d0(void)

undefined8 * FUN_141d178d0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e486a0;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141d17940 FUN_141d17940 body=97 status=ok
// SIG undefined FUN_141d17940(void)

undefined8 * FUN_141d17940(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e47ac0;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141d179b0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TStaticMeshDrawList<FShadowDepthDrawingPolicy<1>_>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  ~TStaticMeshDrawList<FShadowDepthDrawingPolicy<1>_>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 141d179f0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TStaticMeshDrawList<TBasePassDrawingPolicy<FSelfShadowedCachedPointIndirectLightingPolicy>_>::
_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~TStaticMeshDrawList<TBasePassDrawingPolicy<FSelfShadowedCachedPointIndirectLightingPolicy>_>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 141d17a30 FUN_141d17a30 body=52 status=ok
// SIG undefined FUN_141d17a30(void)

undefined8 FUN_141d17a30(undefined8 param_1,ulonglong param_2)

{
  FUN_141d131e0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}


