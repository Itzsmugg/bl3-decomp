// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1432d5ad0 FUN_1432d5ad0 body=164 status=ok
// SIG undefined FUN_1432d5ad0(void)

void FUN_1432d5ad0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if (param_3 != param_1[2]) {
    if (param_3 == 0) {
      uVar2 = 0;
      if (*param_1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
        param_1[2] = 0;
        return;
      }
    }
    else {
      uVar2 = param_3 + 3U & 0xfffffffffffffffc;
      if (*param_1 != 0) {
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))();
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 2;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 << 4,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 1432d5b80 FUN_1432d5b80 body=164 status=ok
// SIG undefined FUN_1432d5b80(void)

void FUN_1432d5b80(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if (param_3 != param_1[2]) {
    if (param_3 == 0) {
      uVar2 = 0;
      if (*param_1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
        param_1[2] = 0;
        return;
      }
    }
    else {
      uVar2 = param_3 + 3U & 0xfffffffffffffffc;
      if (*param_1 != 0) {
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))();
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 2;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 << 5,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 1432d5c30 FUN_1432d5c30 body=153 status=ok
// SIG undefined FUN_1432d5c30(void)

void FUN_1432d5c30(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = param_1[1];
  if (param_2 < uVar1) {
    uVar4 = param_2;
    if ((ulonglong)param_1[2] >> 1 <= param_2) goto LAB_1432d5c77;
  }
  else {
    if (param_2 <= (ulonglong)param_1[2]) goto LAB_1432d5c77;
    uVar4 = (param_2 >> 2) + param_2;
  }
  FUN_1432d5b80(param_1,param_1,uVar4);
LAB_1432d5c77:
  param_1[1] = param_2;
  if (uVar1 < param_2) {
    puVar2 = (undefined8 *)(uVar1 * 0x20 + *param_1);
    for (lVar3 = param_2 - uVar1; lVar3 != 0; lVar3 = lVar3 + -1) {
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = 0x3f800000;
        puVar2[1] = 0;
        *(undefined4 *)(puVar2 + 2) = 0;
        *(undefined8 *)((longlong)puVar2 + 0x14) = 0x3f800000;
        *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
      }
      puVar2 = puVar2 + 4;
    }
  }
  return;
}



// FUNCTION 1432d5cd0 FUN_1432d5cd0 body=180 status=ok
// SIG undefined FUN_1432d5cd0(void)

void FUN_1432d5cd0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    puVar1 = (undefined8 *)(*param_1 + -0x38 + (lVar2 + param_3) * 0x38);
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      if ((RefCountNTSImpl *)*puVar1 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*puVar1);
      }
      puVar1 = puVar1 + -7;
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1432d5a20(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_1432d5a20(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 1432d5d90 FUN_1432d5d90 body=158 status=ok
// SIG undefined FUN_1432d5d90(void)

void FUN_1432d5d90(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  if (param_3 < (ulonglong)param_1[1]) {
    FUN_1432d5420(param_3 * 0x10 + *param_1,param_1[1] - param_3);
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1432d5ad0(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
    return;
  }
  if ((ulonglong)param_1[2] < param_3) {
    FUN_1432d5ad0(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
    return;
  }
  param_1[1] = param_3;
  return;
}



// FUNCTION 1432d5e30 FUN_1432d5e30 body=175 status=ok
// SIG undefined FUN_1432d5e30(void)

void FUN_1432d5e30(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    plVar1 = (longlong *)(*param_1 + ((param_3 - 1) + lVar2) * 8);
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x10))();
      }
      plVar1 = plVar1 + -1;
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1432cfd30(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_1432cfd30(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 1432d5ee0 FUN_1432d5ee0 body=202 status=ok
// SIG undefined FUN_1432d5ee0(void)

void FUN_1432d5ee0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar1 = param_1[1] - param_3;
    plVar2 = (longlong *)(*param_1 + ((param_3 - 1) + lVar1) * 8);
    for (; lVar1 != 0; lVar1 = lVar1 + -1) {
      if ((undefined **)*plVar2 != &PTR_LOOP_1467cd040) {
        FUN_1432c03a0(*(undefined **)*plVar2);
      }
      plVar2 = plVar2 + -1;
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1432cfd30(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
    return;
  }
  if ((ulonglong)param_1[2] < param_3) {
    FUN_1432cfd30(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
    return;
  }
  param_1[1] = param_3;
  return;
}



// FUNCTION 1432d5fb0 FUN_1432d5fb0 body=292 status=ok
// SIG undefined FUN_1432d5fb0(void)

void FUN_1432d5fb0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_1432d53c0();
    return;
  }
  if (param_3 < 8) {
    lVar3 = 8;
  }
  else {
    cVar2 = FUN_14207c6a0(param_3 - 1);
    lVar3 = 1L << (cVar2 + 1U & 0x3f);
  }
  local_res18[0] = 2;
  lVar4 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,lVar3 * 0x18 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar3 + -1;
  lVar1 = lVar4;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)(lVar1 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar1 = lVar1 + 0x18;
  }
  if (*param_1 != 0) {
    lVar3 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar1 = *param_1;
      if (*(longlong *)(lVar1 + 0x10 + lVar4) != -2) {
        FUN_1432d44d0(&local_res20,param_2,lVar1 + 0x20 + lVar4);
        *(undefined8 *)(lVar1 + 0x10 + lVar4) = 0xfffffffffffffffe;
      }
      lVar4 = lVar4 + 0x18;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 1432d60e0 FUN_1432d60e0 body=326 status=ok
// SIG undefined FUN_1432d60e0(void)

void FUN_1432d60e0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_1432d53c0();
    return;
  }
  if (param_3 < 8) {
    lVar3 = 8;
  }
  else {
    cVar1 = FUN_14207c6a0(param_3 - 1);
    lVar3 = 1L << (cVar1 + 1U & 0x3f);
  }
  local_res18[0] = 2;
  lVar5 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,lVar3 * 0x18 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar3 + -1;
  lVar4 = lVar5;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)(lVar4 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar4 = lVar4 + 0x18;
  }
  if (*param_1 != 0) {
    lVar3 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar4 = *param_1 + lVar5;
      if (*(longlong *)(lVar4 + 0x10) != -2) {
        uVar2 = FUN_1432d54c0(*(longlong *)(lVar4 + 0x20) + 0x10);
        FUN_1432d48e0(&local_res20,param_2,lVar4 + 0x20,uVar2);
        *(undefined8 *)(lVar4 + 0x10) = 0xfffffffffffffffe;
      }
      lVar5 = lVar5 + 0x18;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 1432d6270 FUN_1432d6270 body=595 status=ok
// SIG undefined FUN_1432d6270(void)

void FUN_1432d6270(longlong param_1,Matrix4x4<float> *param_2,float param_3,undefined8 *param_4,
                  undefined8 *param_5,float param_6)

{
  float fVar1;
  float fVar2;
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
  ulonglong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  fVar2 = (param_6 * *(float *)(param_1 + 0x14) * *(float *)(param_1 + 0x20)) /
          *(float *)(param_1 + 0x10);
  local_70 = 0;
  local_60 = 0;
  local_58 = 0;
  local_48 = 0;
  local_78 = 0x3f800000;
  local_68 = 0x3f80000000000000;
  local_50 = 0x3f800000;
  local_40 = 0x3f80000000000000;
  local_b0 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_88 = 0;
  local_b8 = 0x3f800000;
  local_a8 = 0x3f80000000000000;
  local_90 = 0x3f800000;
  local_80 = 0x3f80000000000000;
  uStack_130 = 0;
  uStack_120 = 0;
  local_118 = 0;
  local_108 = 0;
  local_138 = 0x3f800000;
  local_128 = 0x3f80000000000000;
  uStack_110 = 0x3f800000;
  uStack_100 = 0x3f80000000000000;
  fVar1 = -((fVar2 * param_3 * *(float *)(param_2 + 0x38)) / *(float *)param_2);
  if (fVar1 < 0.0) {
    fVar1 = -fVar1;
  }
  if (param_4 != (undefined8 *)0x0) {
    local_b0 = (ulonglong)(uint)fVar1 << 0x20;
    local_70 = (ulonglong)(uint)-fVar2 << 0x20;
    Scaleform::Render::Matrix4x4<float>::MultiplyMatrix
              ((Matrix4x4<float> *)&local_f8,param_2,(Matrix4x4<float> *)&local_b8);
    local_138 = local_f8;
    uStack_130 = uStack_f0;
    local_128 = local_e8;
    uStack_120 = uStack_e0;
    local_118 = local_d8;
    uStack_110 = uStack_d0;
    local_108 = local_c8;
    uStack_100 = uStack_c0;
    Scaleform::Render::Matrix4x4<float>::MultiplyMatrix
              ((Matrix4x4<float> *)&local_f8,(Matrix4x4<float> *)&local_78,
               (Matrix4x4<float> *)&local_138);
    *param_4 = local_f8;
    param_4[1] = uStack_f0;
    param_4[2] = local_e8;
    param_4[3] = uStack_e0;
    param_4[4] = local_d8;
    param_4[5] = uStack_d0;
    param_4[6] = local_c8;
    param_4[7] = uStack_c0;
  }
  if (param_5 != (undefined8 *)0x0) {
    local_70 = CONCAT44(fVar2,(undefined4)local_70);
    local_b0 = CONCAT44(fVar1,(undefined4)local_b0) ^ 0x8000000000000000;
    Scaleform::Render::Matrix4x4<float>::MultiplyMatrix
              ((Matrix4x4<float> *)&local_f8,param_2,(Matrix4x4<float> *)&local_b8);
    local_138 = local_f8;
    uStack_130 = uStack_f0;
    local_128 = local_e8;
    uStack_120 = uStack_e0;
    local_118 = local_d8;
    uStack_110 = uStack_d0;
    local_108 = local_c8;
    uStack_100 = uStack_c0;
    Scaleform::Render::Matrix4x4<float>::MultiplyMatrix
              ((Matrix4x4<float> *)&local_f8,(Matrix4x4<float> *)&local_78,
               (Matrix4x4<float> *)&local_138);
    *param_5 = local_f8;
    param_5[1] = uStack_f0;
    param_5[2] = local_e8;
    param_5[3] = uStack_e0;
    param_5[4] = local_d8;
    param_5[5] = uStack_d0;
    param_5[6] = local_c8;
    param_5[7] = uStack_c0;
  }
  return;
}



// FUNCTION 1432d64d0 FUN_1432d64d0 body=993 status=ok
// SIG undefined FUN_1432d64d0(void)

undefined8 * FUN_1432d64d0(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_144f70c20;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = 0x3f800000;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x3f800000;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x19) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x3f800000;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x21) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x3f800000;
  param_1[0x24] = 0x3f800000;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x28] = 0x3f800000;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  param_1[0x2c] = 0x3f800000;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x35) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
  param_1[0x3c] = 0x3f800000;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  *(undefined8 *)((longlong)param_1 + 500) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x45) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0x3f800000;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4d) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0;
  param_1[0x51] = 0;
  param_1[0x52] = param_2;
  param_1[0x54] = 0x3f800000;
  param_1[0x55] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b4) = 0x3f800000;
  param_1[0x57] = 0;
  param_1[0x54] = 0x40000000;
  *(undefined4 *)(param_1 + 0x55) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x56) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0xc0000000;
  *(undefined4 *)((longlong)param_1 + 700) = 0x3f800000;
  return param_1;
}



// FUNCTION 1432d68c0 FUN_1432d68c0 body=978 status=ok
// SIG undefined FUN_1432d68c0(void)

undefined8 * FUN_1432d68c0(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_144f70c20;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = 0x3f800000;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x3f800000;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x19) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x3f800000;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x21) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x3f800000;
  param_1[0x24] = 0x3f800000;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x28] = 0x3f800000;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  param_1[0x2c] = 0x3f800000;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x35) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
  param_1[0x3c] = 0x3f800000;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  *(undefined8 *)((longlong)param_1 + 500) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x45) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0x3f800000;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4d) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x54] = 0x3f800000;
  param_1[0x55] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b4) = 0x3f800000;
  param_1[0x57] = 0;
  param_1[0x54] = 0x40000000;
  *(undefined4 *)(param_1 + 0x55) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x56) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0xc0000000;
  *(undefined4 *)((longlong)param_1 + 700) = 0x3f800000;
  return param_1;
}



// FUNCTION 1432d6ca0 FUN_1432d6ca0 body=28 status=ok
// SIG undefined FUN_1432d6ca0(void)

longlong * FUN_1432d6ca0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x58))();
  return param_1 + 0x40;
}



// FUNCTION 1432d6cd0 FUN_1432d6cd0 body=161 status=ok
// SIG undefined FUN_1432d6cd0(void)

longlong * FUN_1432d6cd0(longlong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((((*param_2 != (int)*(float *)(param_1 + 0x3a)) ||
       (param_2[2] != (int)*(float *)(param_1 + 0x3b))) ||
      (param_2[1] != (int)*(float *)((longlong)param_1 + 0x1d4))) ||
     (param_2[3] != (int)*(float *)((longlong)param_1 + 0x1dc))) {
    iVar1 = param_2[1];
    iVar2 = param_2[2];
    iVar3 = param_2[3];
    *(float *)(param_1 + 0x3a) = (float)*param_2;
    *(float *)((longlong)param_1 + 0x1d4) = (float)iVar1;
    *(float *)(param_1 + 0x3b) = (float)iVar2;
    *(float *)((longlong)param_1 + 0x1dc) = (float)iVar3;
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  (**(code **)(*param_1 + 0x58))(param_1);
  return param_1 + 0x40;
}



// FUNCTION 1432d6d90 FUN_1432d6d90 body=186 status=ok
// SIG undefined FUN_1432d6d90(void)

void FUN_1432d6d90(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  *(undefined4 *)(param_1 + 0x14) = param_2[1];
  *(undefined4 *)(param_1 + 0x18) = param_2[2];
  *(undefined4 *)(param_1 + 0x1c) = param_2[3];
  *(undefined4 *)(param_1 + 0x20) = param_2[4];
  *(undefined4 *)(param_1 + 0x24) = param_2[5];
  *(undefined4 *)(param_1 + 0x28) = param_2[6];
  *(undefined4 *)(param_1 + 0x2c) = param_2[7];
  uVar1 = FUN_14201c970(local_48,param_1 + 0x120,param_1 + 0x160);
  puVar2 = (undefined4 *)FUN_14201c970(local_28,param_1 + 0x10,uVar1);
  *(undefined4 *)(param_1 + 0x1e0) = *puVar2;
  *(undefined4 *)(param_1 + 0x1e4) = puVar2[1];
  *(undefined4 *)(param_1 + 0x1e8) = puVar2[2];
  *(undefined4 *)(param_1 + 0x1ec) = puVar2[3];
  *(undefined4 *)(param_1 + 0x1f0) = puVar2[4];
  *(undefined4 *)(param_1 + 500) = puVar2[5];
  *(undefined4 *)(param_1 + 0x1f8) = puVar2[6];
  *(undefined4 *)(param_1 + 0x1fc) = puVar2[7];
  return;
}



// FUNCTION 1432d6e50 FUN_1432d6e50 body=1099 status=ok
// SIG undefined FUN_1432d6e50(void)

int * FUN_1432d6e50(longlong param_1,int *param_2,int *param_3)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  float fVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 local_98 [32];
  undefined1 local_78 [112];
  
  *(undefined2 *)(param_1 + 0x280) = 1;
  if ((param_3[10] & 0x30U) == 0) {
    *(undefined8 *)(param_1 + 0x160) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined4 *)(param_1 + 0x170) = 0;
    *(undefined8 *)(param_1 + 0x174) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x17c) = 0;
    *(undefined8 *)(param_1 + 0x180) = 0;
    *(undefined8 *)(param_1 + 0x188) = 0;
    *(undefined8 *)(param_1 + 400) = 0;
    *(undefined8 *)(param_1 + 0x198) = 0;
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined4 *)(param_1 + 0x180) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x194) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1a8) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1bc) = 0x3f800000;
  }
  else if (((param_3[10] & 0x30U) - 0x10 & 0xffffffdf) == 0) {
    *(undefined1 *)(param_1 + 0x281) = 1;
    if (((byte)param_3[10] & 0x30) == 0x30) {
      fVar9 = 0.0;
      uVar8 = 0xbf800000;
      fVar10 = (float)param_3[1];
    }
    else {
      fVar10 = 0.0;
      uVar8 = 0x3f800000;
      fVar9 = (float)*param_3;
    }
    *(float *)(param_1 + 0x16c) = fVar9;
    *(uint *)(param_1 + 0x164) = uVar8 ^ 0x80000000;
    *(uint *)(param_1 + 0x170) = uVar8;
    *(float *)(param_1 + 0x17c) = fVar10;
    *(undefined4 *)(param_1 + 0x160) = 0;
    *(undefined4 *)(param_1 + 0x168) = 0;
    *(undefined8 *)(param_1 + 0x174) = 0;
    *(uint *)(param_1 + 0x184) = uVar8;
    *(uint *)(param_1 + 400) = uVar8 ^ 0x80000000;
    *(undefined4 *)(param_1 + 0x180) = 0;
    *(undefined4 *)(param_1 + 0x194) = 0;
  }
  pfVar1 = (float *)(param_1 + 0x160);
  uVar5 = FUN_14201c970(local_98,param_1 + 0x120,pfVar1);
  puVar6 = (undefined4 *)FUN_14201c970(local_78,param_1 + 0x10,uVar5);
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_1 + 0x1e0) = *puVar6;
  *(undefined4 *)(param_1 + 0x1e4) = puVar6[1];
  *(undefined4 *)(param_1 + 0x1e8) = puVar6[2];
  *(undefined4 *)(param_1 + 0x1ec) = puVar6[3];
  *(undefined4 *)(param_1 + 0x1f0) = puVar6[4];
  *(undefined4 *)(param_1 + 500) = puVar6[5];
  *(undefined4 *)(param_1 + 0x1f8) = puVar6[6];
  *(undefined4 *)(param_1 + 0x1fc) = puVar6[7];
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = param_3[4];
  uVar8 = param_3[10];
  fVar10 = (float)iVar2;
  param_2[10] = uVar8;
  fVar12 = (float)iVar3;
  fVar9 = (float)(iVar4 + iVar2);
  fVar11 = fVar12 * *(float *)(param_1 + 0x164) + fVar10 * *pfVar1 + *(float *)(param_1 + 0x16c);
  fVar13 = fVar12 * *(float *)(param_1 + 0x174) + fVar10 * *(float *)(param_1 + 0x170) +
           *(float *)(param_1 + 0x17c);
  fVar10 = (float)(param_3[5] + iVar3);
  fVar12 = fVar10 * *(float *)(param_1 + 0x174) + fVar9 * *(float *)(param_1 + 0x170) +
           *(float *)(param_1 + 0x17c);
  fVar9 = fVar10 * *(float *)(param_1 + 0x164) + fVar9 * *pfVar1 + *(float *)(param_1 + 0x16c);
  fVar10 = fVar11;
  if (fVar9 <= fVar11) {
    fVar10 = fVar9;
  }
  fVar7 = _guard_xfg_dispatch_icall_nop(fVar10);
  fVar10 = fVar13;
  if (fVar12 <= fVar13) {
    fVar10 = fVar12;
  }
  param_2[2] = (int)fVar7;
  fVar10 = _guard_xfg_dispatch_icall_nop(fVar10);
  param_2[3] = (int)fVar10;
  fVar10 = _guard_xfg_dispatch_icall_nop(ABS(fVar11 - fVar9));
  param_2[4] = (int)fVar10;
  fVar10 = _guard_xfg_dispatch_icall_nop(ABS(fVar13 - fVar12));
  param_2[5] = (int)fVar10;
  if ((uVar8 & 4) != 0) {
    iVar2 = param_3[6];
    iVar3 = param_3[7];
    iVar4 = param_3[8];
    param_2[10] = uVar8;
    fVar10 = (float)iVar2;
    fVar12 = (float)iVar3;
    fVar9 = (float)(iVar4 + iVar2);
    fVar11 = fVar12 * *(float *)(param_1 + 0x164) + fVar10 * *pfVar1 + *(float *)(param_1 + 0x16c);
    fVar13 = fVar12 * *(float *)(param_1 + 0x174) + fVar10 * *(float *)(param_1 + 0x170) +
             *(float *)(param_1 + 0x17c);
    fVar10 = (float)(param_3[9] + iVar3);
    fVar12 = fVar10 * *(float *)(param_1 + 0x174) + fVar9 * *(float *)(param_1 + 0x170) +
             *(float *)(param_1 + 0x17c);
    fVar9 = fVar10 * *(float *)(param_1 + 0x164) + fVar9 * *pfVar1 + *(float *)(param_1 + 0x16c);
    fVar10 = fVar11;
    if (fVar9 <= fVar11) {
      fVar10 = fVar9;
    }
    fVar7 = _guard_xfg_dispatch_icall_nop(fVar10);
    fVar10 = fVar13;
    if (fVar12 <= fVar13) {
      fVar10 = fVar12;
    }
    param_2[6] = (int)fVar7;
    fVar10 = _guard_xfg_dispatch_icall_nop(fVar10);
    param_2[7] = (int)fVar10;
    fVar10 = _guard_xfg_dispatch_icall_nop(ABS(fVar11 - fVar9));
    param_2[8] = (int)fVar10;
    fVar10 = _guard_xfg_dispatch_icall_nop(ABS(fVar13 - fVar12));
    param_2[9] = (int)fVar10;
  }
  *param_2 = *param_3;
  param_2[1] = param_3[1];
  return param_2;
}



// FUNCTION 1432d72e0 FUN_1432d72e0 body=1155 status=ok
// SIG undefined FUN_1432d72e0(void)

void FUN_1432d72e0(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_3 + 0x14);
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_3 + 0x24);
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_3 + 0x28);
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_3 + 0x2c);
  uVar6 = *(undefined8 *)(param_3 + 0x38);
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_3 + 0x30);
  *(undefined8 *)(param_2 + 0x38) = uVar6;
  uVar6 = *(undefined8 *)(param_3 + 0x48);
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_3 + 0x40);
  *(undefined8 *)(param_2 + 0x48) = uVar6;
  uVar6 = *(undefined8 *)(param_3 + 0x58);
  *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_3 + 0x50);
  *(undefined8 *)(param_2 + 0x58) = uVar6;
  uVar6 = *(undefined8 *)(param_3 + 0x68);
  *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_3 + 0x60);
  *(undefined8 *)(param_2 + 0x68) = uVar6;
  uVar6 = *(undefined8 *)(param_3 + 0x78);
  *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_3 + 0x70);
  *(undefined8 *)(param_2 + 0x78) = uVar6;
  uVar6 = *(undefined8 *)(param_3 + 0x88);
  *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(param_3 + 0x80);
  *(undefined8 *)(param_2 + 0x88) = uVar6;
  uVar6 = *(undefined8 *)(param_3 + 0x98);
  *(undefined8 *)(param_2 + 0x90) = *(undefined8 *)(param_3 + 0x90);
  *(undefined8 *)(param_2 + 0x98) = uVar6;
  uVar6 = *(undefined8 *)(param_3 + 0xa8);
  *(undefined8 *)(param_2 + 0xa0) = *(undefined8 *)(param_3 + 0xa0);
  *(undefined8 *)(param_2 + 0xa8) = uVar6;
  uVar6 = *(undefined8 *)(param_3 + 0xb8);
  *(undefined8 *)(param_2 + 0xb0) = *(undefined8 *)(param_3 + 0xb0);
  *(undefined8 *)(param_2 + 0xb8) = uVar6;
  uVar6 = *(undefined8 *)(param_3 + 200);
  *(undefined8 *)(param_2 + 0xc0) = *(undefined8 *)(param_3 + 0xc0);
  *(undefined8 *)(param_2 + 200) = uVar6;
  uVar6 = *(undefined8 *)(param_3 + 0xd8);
  *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(param_3 + 0xd0);
  *(undefined8 *)(param_2 + 0xd8) = uVar6;
  uVar6 = *(undefined8 *)(param_3 + 0xe8);
  *(undefined8 *)(param_2 + 0xe0) = *(undefined8 *)(param_3 + 0xe0);
  *(undefined8 *)(param_2 + 0xe8) = uVar6;
  uVar6 = *(undefined8 *)(param_3 + 0xf8);
  *(undefined8 *)(param_2 + 0xf0) = *(undefined8 *)(param_3 + 0xf0);
  *(undefined8 *)(param_2 + 0xf8) = uVar6;
  uVar6 = *(undefined8 *)(param_3 + 0x108);
  *(undefined8 *)(param_2 + 0x100) = *(undefined8 *)(param_3 + 0x100);
  *(undefined8 *)(param_2 + 0x108) = uVar6;
  uVar6 = *(undefined8 *)(param_3 + 0x118);
  *(undefined8 *)(param_2 + 0x110) = *(undefined8 *)(param_3 + 0x110);
  *(undefined8 *)(param_2 + 0x118) = uVar6;
  *(undefined4 *)(param_2 + 0x120) = *(undefined4 *)(param_3 + 0x120);
  *(undefined4 *)(param_2 + 0x124) = *(undefined4 *)(param_3 + 0x124);
  *(undefined4 *)(param_2 + 0x128) = *(undefined4 *)(param_3 + 0x128);
  *(undefined4 *)(param_2 + 300) = *(undefined4 *)(param_3 + 300);
  *(undefined4 *)(param_2 + 0x130) = *(undefined4 *)(param_3 + 0x130);
  *(undefined4 *)(param_2 + 0x134) = *(undefined4 *)(param_3 + 0x134);
  *(undefined4 *)(param_2 + 0x138) = *(undefined4 *)(param_3 + 0x138);
  *(undefined4 *)(param_2 + 0x13c) = *(undefined4 *)(param_3 + 0x13c);
  *(undefined4 *)(param_2 + 0x140) = *(undefined4 *)(param_3 + 0x140);
  *(undefined4 *)(param_2 + 0x144) = *(undefined4 *)(param_3 + 0x144);
  *(undefined4 *)(param_2 + 0x148) = *(undefined4 *)(param_3 + 0x148);
  *(undefined4 *)(param_2 + 0x14c) = *(undefined4 *)(param_3 + 0x14c);
  *(undefined4 *)(param_2 + 0x150) = *(undefined4 *)(param_3 + 0x150);
  *(undefined4 *)(param_2 + 0x154) = *(undefined4 *)(param_3 + 0x154);
  *(undefined4 *)(param_2 + 0x158) = *(undefined4 *)(param_3 + 0x158);
  *(undefined4 *)(param_2 + 0x15c) = *(undefined4 *)(param_3 + 0x15c);
  *(undefined4 *)(param_2 + 0x160) = *(undefined4 *)(param_3 + 0x160);
  *(undefined4 *)(param_2 + 0x164) = *(undefined4 *)(param_3 + 0x164);
  *(undefined4 *)(param_2 + 0x168) = *(undefined4 *)(param_3 + 0x168);
  *(undefined4 *)(param_2 + 0x16c) = *(undefined4 *)(param_3 + 0x16c);
  *(undefined4 *)(param_2 + 0x170) = *(undefined4 *)(param_3 + 0x170);
  *(undefined4 *)(param_2 + 0x174) = *(undefined4 *)(param_3 + 0x174);
  *(undefined4 *)(param_2 + 0x178) = *(undefined4 *)(param_3 + 0x178);
  *(undefined4 *)(param_2 + 0x17c) = *(undefined4 *)(param_3 + 0x17c);
  uVar6 = *(undefined8 *)(param_3 + 0x188);
  *(undefined8 *)(param_2 + 0x180) = *(undefined8 *)(param_3 + 0x180);
  *(undefined8 *)(param_2 + 0x188) = uVar6;
  uVar6 = *(undefined8 *)(param_3 + 0x198);
  *(undefined8 *)(param_2 + 400) = *(undefined8 *)(param_3 + 400);
  *(undefined8 *)(param_2 + 0x198) = uVar6;
  uVar6 = *(undefined8 *)(param_3 + 0x1a8);
  *(undefined8 *)(param_2 + 0x1a0) = *(undefined8 *)(param_3 + 0x1a0);
  *(undefined8 *)(param_2 + 0x1a8) = uVar6;
  uVar6 = *(undefined8 *)(param_3 + 0x1b8);
  *(undefined8 *)(param_2 + 0x1b0) = *(undefined8 *)(param_3 + 0x1b0);
  *(undefined8 *)(param_2 + 0x1b8) = uVar6;
  uVar3 = *(undefined4 *)(param_3 + 0x1c0);
  uVar1 = *(undefined4 *)(param_3 + 0x1cc);
  uVar2 = *(undefined4 *)(param_3 + 0x1c8);
  *(undefined4 *)(param_2 + 0x1c4) = *(undefined4 *)(param_3 + 0x1c4);
  *(undefined4 *)(param_2 + 0x1c8) = uVar2;
  *(undefined4 *)(param_2 + 0x1cc) = uVar1;
  *(undefined4 *)(param_2 + 0x1c0) = uVar3;
  uVar1 = *(undefined4 *)(param_3 + 0x1d8);
  uVar3 = *(undefined4 *)(param_3 + 0x1d0);
  uVar2 = *(undefined4 *)(param_3 + 0x1dc);
  *(undefined4 *)(param_2 + 0x1d4) = *(undefined4 *)(param_3 + 0x1d4);
  *(undefined4 *)(param_2 + 0x1d8) = uVar1;
  *(undefined4 *)(param_2 + 0x1dc) = uVar2;
  *(undefined4 *)(param_2 + 0x1d0) = uVar3;
  *(undefined4 *)(param_2 + 0x1e0) = *(undefined4 *)(param_3 + 0x1e0);
  *(undefined4 *)(param_2 + 0x1e4) = *(undefined4 *)(param_3 + 0x1e4);
  *(undefined4 *)(param_2 + 0x1e8) = *(undefined4 *)(param_3 + 0x1e8);
  *(undefined4 *)(param_2 + 0x1ec) = *(undefined4 *)(param_3 + 0x1ec);
  *(undefined4 *)(param_2 + 0x1f0) = *(undefined4 *)(param_3 + 0x1f0);
  *(undefined4 *)(param_2 + 500) = *(undefined4 *)(param_3 + 500);
  *(undefined4 *)(param_2 + 0x1f8) = *(undefined4 *)(param_3 + 0x1f8);
  *(undefined4 *)(param_2 + 0x1fc) = *(undefined4 *)(param_3 + 0x1fc);
  uVar6 = *(undefined8 *)(param_3 + 0x208);
  *(undefined8 *)(param_2 + 0x200) = *(undefined8 *)(param_3 + 0x200);
  *(undefined8 *)(param_2 + 0x208) = uVar6;
  uVar6 = *(undefined8 *)(param_3 + 0x218);
  *(undefined8 *)(param_2 + 0x210) = *(undefined8 *)(param_3 + 0x210);
  *(undefined8 *)(param_2 + 0x218) = uVar6;
  uVar6 = *(undefined8 *)(param_3 + 0x228);
  *(undefined8 *)(param_2 + 0x220) = *(undefined8 *)(param_3 + 0x220);
  *(undefined8 *)(param_2 + 0x228) = uVar6;
  uVar6 = *(undefined8 *)(param_3 + 0x238);
  *(undefined8 *)(param_2 + 0x230) = *(undefined8 *)(param_3 + 0x230);
  *(undefined8 *)(param_2 + 0x238) = uVar6;
  uVar6 = *(undefined8 *)(param_3 + 0x248);
  *(undefined8 *)(param_2 + 0x240) = *(undefined8 *)(param_3 + 0x240);
  *(undefined8 *)(param_2 + 0x248) = uVar6;
  uVar6 = *(undefined8 *)(param_3 + 600);
  *(undefined8 *)(param_2 + 0x250) = *(undefined8 *)(param_3 + 0x250);
  *(undefined8 *)(param_2 + 600) = uVar6;
  uVar6 = *(undefined8 *)(param_3 + 0x268);
  *(undefined8 *)(param_2 + 0x260) = *(undefined8 *)(param_3 + 0x260);
  *(undefined8 *)(param_2 + 0x268) = uVar6;
  uVar6 = *(undefined8 *)(param_3 + 0x278);
  *(undefined8 *)(param_2 + 0x270) = *(undefined8 *)(param_3 + 0x270);
  *(undefined8 *)(param_2 + 0x278) = uVar6;
  *(undefined1 *)(param_2 + 0x280) = 1;
  *(undefined1 *)(param_2 + 0x281) = *(undefined1 *)(param_3 + 0x281);
  if (*(longlong *)(param_3 + 0x288) != 0) {
    if (*(RefCountImpl **)(param_3 + 0x288) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_3 + 0x288));
    }
    if (*(RefCountImpl **)(param_2 + 0x288) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_2 + 0x288));
    }
    plVar4 = *(longlong **)(param_3 + 0x288);
    *(longlong **)(param_2 + 0x288) = plVar4;
    lVar5 = *plVar4;
    uVar6 = (**(code **)(**(longlong **)(param_3 + 0x288) + 0x10))();
    (**(code **)(lVar5 + 8))(plVar4,uVar6);
  }
  *(undefined4 *)(param_2 + 0x284) = *(undefined4 *)(param_3 + 0x284);
  *(undefined8 *)(param_2 + 0x290) = *(undefined8 *)(param_3 + 0x290);
  return;
}



// FUNCTION 1432d7780 FUN_1432d7780 body=537 status=ok
// SIG undefined FUN_1432d7780(void)

void FUN_1432d7780(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 local_58 [32];
  undefined1 local_38 [48];
  
  *(undefined1 *)(param_1 + 0x280) = 1;
  *(undefined4 *)(param_1 + 0x120) = *param_2;
  *(undefined4 *)(param_1 + 0x124) = param_2[1];
  *(undefined4 *)(param_1 + 0x128) = param_2[2];
  *(undefined4 *)(param_1 + 300) = param_2[3];
  *(undefined4 *)(param_1 + 0x130) = param_2[4];
  *(undefined4 *)(param_1 + 0x134) = param_2[5];
  *(undefined4 *)(param_1 + 0x138) = param_2[6];
  *(undefined4 *)(param_1 + 0x13c) = param_2[7];
  uVar1 = FUN_14201c970(local_58,(undefined4 *)(param_1 + 0x120),param_1 + 0x160);
  puVar2 = (undefined4 *)FUN_14201c970(local_38,param_1 + 0x10,uVar1);
  *(undefined4 *)(param_1 + 0x1e0) = *puVar2;
  *(undefined4 *)(param_1 + 0x1e4) = puVar2[1];
  *(undefined4 *)(param_1 + 0x1e8) = puVar2[2];
  *(undefined4 *)(param_1 + 0x1ec) = puVar2[3];
  *(undefined4 *)(param_1 + 0x1f0) = puVar2[4];
  *(undefined4 *)(param_1 + 500) = puVar2[5];
  *(undefined4 *)(param_1 + 0x1f8) = puVar2[6];
  *(undefined4 *)(param_1 + 0x1fc) = puVar2[7];
  *(undefined4 *)(param_1 + 0x140) = *param_3;
  *(undefined4 *)(param_1 + 0x144) = param_3[1];
  *(undefined4 *)(param_1 + 0x148) = param_3[2];
  *(undefined4 *)(param_1 + 0x14c) = param_3[3];
  *(undefined4 *)(param_1 + 0x150) = param_3[4];
  *(undefined4 *)(param_1 + 0x154) = param_3[5];
  *(undefined4 *)(param_1 + 0x158) = param_3[6];
  *(undefined4 *)(param_1 + 0x15c) = param_3[7];
  if ((0.0 < *(float *)(param_1 + 0x1d8) - *(float *)(param_1 + 0x1d0)) &&
     (0.0 < *(float *)(param_1 + 0x1dc) - *(float *)(param_1 + 0x1d4))) {
    fVar5 = *(float *)(param_1 + 0x1d8) - *(float *)(param_1 + 0x1d0);
    fVar6 = *(float *)(param_1 + 0x1dc) - *(float *)(param_1 + 0x1d4);
    fVar4 = fVar5 * 0.5;
    fVar3 = fVar6 * 0.5;
    *(float *)(param_1 + 0x14c) =
         (((fVar3 * *(float *)(param_1 + 0x144) + fVar4 * *(float *)(param_1 + 0x140) +
           *(float *)(param_1 + 0x14c)) - fVar4) * 2.0) / fVar5;
    *(float *)(param_1 + 0x15c) =
         (((fVar3 * *(float *)(param_1 + 0x154) + fVar4 * *(float *)(param_1 + 0x150) +
           *(float *)(param_1 + 0x15c)) - fVar3) * -2.0) / fVar6;
    return;
  }
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  return;
}



// FUNCTION 1432d79a0 FUN_1432d79a0 body=805 status=ok
// SIG undefined FUN_1432d79a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432d79a0(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Matrix4x4<float> *pMVar5;
  undefined8 local_108;
  ulonglong local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  ulonglong local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  Matrix4x4<float> local_88 [64];
  Matrix4x4<float> local_48 [64];
  
  uVar1 = uRam00000001464fade8;
  if (*(char *)(param_1 + 0x280) != '\0') {
    if (((((*(float *)(param_1 + 0x1d0) == *(float *)(param_1 + 0x1c0)) &&
          (*(float *)(param_1 + 0x1d8) == *(float *)(param_1 + 0x1c8))) &&
         (*(float *)(param_1 + 0x1d4) == *(float *)(param_1 + 0x1c4))) &&
        (*(float *)(param_1 + 0x1dc) == *(float *)(param_1 + 0x1cc))) ||
       ((*(float *)(param_1 + 0x1c8) == *(float *)(param_1 + 0x1c0) &&
        (*(float *)(param_1 + 0x1cc) == *(float *)(param_1 + 0x1c4))))) {
      *(undefined8 *)(param_1 + 0x240) = _DAT_1464fade0;
      *(undefined8 *)(param_1 + 0x248) = uVar1;
      uVar1 = uRam00000001464fadf8;
      *(undefined8 *)(param_1 + 0x250) = _DAT_1464fadf0;
      *(undefined8 *)(param_1 + 600) = uVar1;
      uVar4 = uRam00000001464fae0c;
      uVar3 = uRam00000001464fae08;
      uVar2 = uRam00000001464fae04;
      *(undefined4 *)(param_1 + 0x260) = _DAT_1464fae00;
      *(undefined4 *)(param_1 + 0x264) = uVar2;
      *(undefined4 *)(param_1 + 0x268) = uVar3;
      *(undefined4 *)(param_1 + 0x26c) = uVar4;
      uVar1 = uRam00000001464fae18;
      *(undefined8 *)(param_1 + 0x270) = _DAT_1464fae10;
      *(undefined8 *)(param_1 + 0x278) = uVar1;
    }
    else {
      uStack_c0 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      local_98 = 0;
      uStack_90 = 0x3f80000000000000;
      uStack_a0 = 0x3f800000;
      local_e8 = 0;
      local_d8 = 0;
      local_108 = 0x3f800000;
      local_f8 = 0x3f80000000000000;
      local_d0 = 0x3f80000000000000;
      local_c8 = (ulonglong)
                 (uint)((*(float *)(param_1 + 0x1c8) - *(float *)(param_1 + 0x1c0)) /
                       (*(float *)(param_1 + 0x1d8) - *(float *)(param_1 + 0x1d0)));
      local_b8 = (ulonglong)
                 (uint)((*(float *)(param_1 + 0x1cc) - *(float *)(param_1 + 0x1c4)) /
                       (*(float *)(param_1 + 0x1dc) - *(float *)(param_1 + 0x1d4))) << 0x20;
      local_100 = (ulonglong)
                  (uint)((((*(float *)(param_1 + 0x1d8) + *(float *)(param_1 + 0x1d0)) * 0.5 -
                          (*(float *)(param_1 + 0x1c8) + *(float *)(param_1 + 0x1c0)) * 0.5) * 2.0)
                        / (*(float *)(param_1 + 0x1d8) - *(float *)(param_1 + 0x1d0))) << 0x20 ^
                  0x8000000000000000;
      local_f0 = (ulonglong)
                 (uint)((((*(float *)(param_1 + 0x1dc) + *(float *)(param_1 + 0x1d4)) * 0.5 -
                         (*(float *)(param_1 + 0x1cc) + *(float *)(param_1 + 0x1c4)) * 0.5) * 2.0) /
                       (*(float *)(param_1 + 0x1dc) - *(float *)(param_1 + 0x1d4))) << 0x20;
      local_e0 = 0x3f800000;
      Scaleform::Render::Matrix4x4<float>::MultiplyMatrix
                ((Matrix4x4<float> *)(param_1 + 0x240),(Matrix4x4<float> *)&local_108,
                 (Matrix4x4<float> *)&local_c8);
    }
    pMVar5 = (Matrix4x4<float> *)FUN_1432d7cd0(param_1,0x3f800000);
    Scaleform::Render::Matrix4x4<float>::MultiplyMatrix
              (local_48,(Matrix2x4<float> *)(param_1 + 0x140),(Matrix4x4<float> *)(param_1 + 0x240))
    ;
    Scaleform::Render::Matrix4x4<float>::MultiplyMatrix
              (local_88,(Matrix4x4<float> *)(param_1 + 0x180),pMVar5);
    Scaleform::Render::Matrix4x4<float>::MultiplyMatrix
              ((Matrix4x4<float> *)&local_108,local_48,local_88);
    Scaleform::Render::Matrix4x4<float>::MultiplyMatrix
              ((Matrix4x4<float> *)&local_c8,(Matrix4x4<float> *)&local_108,
               (Matrix3x4<float> *)(param_1 + 0x30));
    *(ulonglong *)(param_1 + 0x200) = local_c8;
    *(undefined8 *)(param_1 + 0x208) = uStack_c0;
    *(longlong *)(param_1 + 0x210) = local_b8;
    *(undefined8 *)(param_1 + 0x218) = uStack_b0;
    *(undefined8 *)(param_1 + 0x220) = local_a8;
    *(undefined8 *)(param_1 + 0x228) = uStack_a0;
    *(undefined8 *)(param_1 + 0x230) = local_98;
    *(undefined8 *)(param_1 + 0x238) = uStack_90;
    *(undefined1 *)(param_1 + 0x280) = 0;
  }
  return;
}



// FUNCTION 1432d7cd0 FUN_1432d7cd0 body=152 status=ok
// SIG undefined FUN_1432d7cd0(void)

longlong FUN_1432d7cd0(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  
  iVar1 = *(int *)(param_1 + 0x284);
  if ((iVar1 != 0) && (plVar2 = *(longlong **)(param_1 + 0x288), plVar2 != (longlong *)0x0)) {
    if (iVar1 == 1) {
      (**(code **)(*plVar2 + 0x18))(plVar2,param_1 + 0x60,*plVar2,param_1 + 0xa0,0,param_2);
      return param_1 + 0xa0;
    }
    if (iVar1 == 2) {
      (**(code **)(*plVar2 + 0x18))
                (plVar2,param_1 + 0x60,*(uint *)(param_1 + 0x5c) ^ 0x80000000,0,param_1 + 0xe0,
                 param_2);
      return param_1 + 0xe0;
    }
  }
  return param_1 + 0x60;
}



// FUNCTION 1432d7d70 MatrixStateFactory body=32 status=ok
// SIG undefined MatrixStateFactory(void)

undefined8 *
Scaleform::Render::MatrixStateFactory::MatrixStateFactory(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_144f88d40;
  lVar1 = DAT_146b62f28;
  if (param_2 != 0) {
    lVar1 = param_2;
  }
  param_1[1] = lVar1;
  return param_1;
}



// FUNCTION 1432d7da0 CreateMatrixState body=44 status=ok
// SIG undefined CreateMatrixState(void)

void Scaleform::Render::MatrixStateFactory::CreateMatrixState(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),0x2c0,0);
  if (lVar1 != 0) {
    FUN_1432d68c0(lVar1);
    return;
  }
  return;
}



// FUNCTION 1432d7e00 FUN_1432d7e00 body=105 status=ok
// SIG undefined FUN_1432d7e00(void)

void FUN_1432d7e00(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  plVar2 = (longlong *)*param_3;
  lVar3 = *plVar2;
  lVar4 = *(longlong *)**(undefined8 **)(param_2 + 8);
  bVar1 = (&DAT_1467ccff4)[(ulonglong)(*(byte *)(lVar4 + 0xf) & 0xf) * 5];
  uVar5 = FUN_1432c08f0(*(undefined8 **)(param_2 + 8),0);
                    /* WARNING: Could not recover jumptable at 0x0001432d7e66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x270))(plVar2,((ulonglong)bVar1 + 1) * 0x10 + lVar4,uVar5);
  return;
}



// FUNCTION 1432d7e70 FUN_1432d7e70 body=1387 status=ok
// SIG undefined FUN_1432d7e70(void)

undefined8 * FUN_1432d7e70(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = param_1 + 2;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145af87b0;
  *(undefined4 *)(param_1 + 1) = 1;
  *puVar1 = &PTR_FUN_145af8148;
  param_1[4] = 0;
  uVar5 = 0;
  param_1[3] = &PTR_FUN_144f70a50;
  param_1[3] = &PTR_FUN_145af8598;
  puVar2 = param_1 + 6;
  *(undefined4 *)(param_1 + 4) = 1;
  param_1[5] = puVar1;
  *puVar2 = puVar2;
  param_1[7] = puVar2;
  param_1[8] = param_2;
  *param_1 = &PTR_FUN_145af87b8;
  *puVar1 = &PTR_LAB_145af8ac8;
  param_1[9] = DAT_146b62f28;
  puVar1 = param_1 + 0x26;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 2;
  *(undefined4 *)(param_1 + 0xc) = 0x3727c5ac;
  *(undefined4 *)((longlong)param_1 + 100) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3a83126f;
  *(undefined4 *)(param_1 + 0xe) = 0x3f350481;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3fb50481;
  *(undefined4 *)(param_1 + 0xf) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x40000000;
  *(undefined4 *)(param_1 + 0x10) = 0x3f7d70a4;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x3f8147ae;
  *(undefined4 *)(param_1 + 0x11) = 0x3f7fbe77;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x3f8020c5;
  *(undefined4 *)(param_1 + 0x12) = 0x3f7eb852;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x3f80a3d7;
  *(undefined4 *)(param_1 + 0x13) = 0x3f733333;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x38d1b717;
  *(undefined4 *)(param_1 + 0x14) = 0x3a83126f;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x3d4ccccd;
  *(undefined4 *)(param_1 + 0x15) = 0xc;
  param_1[0x16] = 0x300000;
  param_1[0x17] = 0x1000000;
  param_1[0x18] = 0x300000;
  param_1[0x19] = 0xa00000;
  param_1[0x1a] = 0x200000;
  param_1[0x1b] = 0x40000;
  *(undefined4 *)(param_1 + 0x1c) = 0x18;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 5;
  *(undefined4 *)(param_1 + 0x1d) = 0x2000;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x4000;
  *(undefined4 *)(param_1 + 0x1e) = 0x1800;
  *(undefined4 *)(param_1 + 0x1f) = 0x400;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x400;
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x30;
  *(undefined4 *)(param_1 + 0x21) = 2;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x100;
  *(undefined4 *)(param_1 + 0x22) = 0x200;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x23) = 500;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x24) = 0x3d3851ec;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x25) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 300) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x12e) = 1;
  *puVar1 = puVar1;
  param_1[0x27] = puVar1;
  param_1[0x28] = param_1 + 0x26;
  param_1[0x29] = param_1 + 0x26;
  param_1[0x2a] = param_1 + 0x29;
  param_1[0x2b] = param_1 + 0x29;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 1;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined2 *)(param_1 + 0x42) = 0;
  *(undefined1 *)((longlong)param_1 + 0x212) = 0;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  param_1[0x44] = 0;
  param_1[0x43] = &PTR_FUN_144f70a50;
  param_1[0x45] = param_1[9];
  param_1[0x43] = &PTR_FUN_145af85a8;
  *(undefined4 *)(param_1 + 0x44) = 1;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  lVar3 = param_1[0x45];
  if (param_1[0x45] == 0) {
    lVar3 = DAT_146b62f28;
  }
  param_1[0x45] = lVar3;
  lVar3 = (**(code **)(*(longlong *)param_1[9] + 0x50))((longlong *)param_1[9],0x68,0);
  uVar4 = uVar5;
  if (lVar3 != 0) {
    uVar4 = FUN_1432dcd10(lVar3,param_1[9]);
  }
  param_1[0x48] = uVar4;
  lVar3 = (**(code **)(*(longlong *)param_1[9] + 0x50))((longlong *)param_1[9],0x1a98,0);
  if (lVar3 != 0) {
    uVar5 = FUN_14332a4a0(lVar3,param_1[9]);
  }
  param_1[0x49] = uVar5;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = &PTR_FUN_145af8618;
  param_1[0x52] = &PTR_FUN_145af85b0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  FUN_1432dcc20(param_1 + 0x54,param_1[9]);
  FUN_1432dce20(param_1 + 0x1a9,param_1[9]);
  FUN_1432c0940(param_1 + 0x1e4,param_1[9]);
  Scaleform::Render::RenderQueue::RenderQueue(param_1 + 0x1f5);
  FUN_143323ef0(param_1 + 0x1f9,param_1 + 0x1f5,param_1);
  param_1[0x222] = 0;
  param_1[0x223] = 0;
  *(undefined4 *)(param_1 + 0x224) = 0x7f;
  param_1[0x225] = 0;
  param_1[0x226] = param_1 + 0x222;
  param_1[0x227] = 0;
  param_1[0x228] = 0;
  param_1[0x229] = 0;
  param_1[0x22a] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x22b) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x115c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1164) = 0;
  *(undefined4 *)(param_1 + 0x22e) = 1;
  *(undefined4 *)((longlong)param_1 + 0x116c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x117c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1174) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1184) = 0;
  param_1[0x232] = 0;
  param_1[0x233] = 0;
  param_1[0x234] = 0x3f800000;
  param_1[0x235] = 0;
  *(undefined4 *)(param_1 + 0x236) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11b4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x11bc) = 0;
  param_1[0x238] = &DAT_1467cd310;
  FUN_143323d10();
  return param_1;
}



// FUNCTION 1432d83f0 FUN_1432d83f0 body=576 status=ok
// SIG undefined FUN_1432d83f0(void)

void FUN_1432d83f0(RefCountImplCore *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_145af87b8;
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_145af8ac8;
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x1138));
  lVar1 = *(longlong *)(param_1 + 0x1110);
  while (lVar1 != 0) {
    lVar1 = *(longlong *)(lVar1 + 0x3790);
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  FUN_143323f90(param_1 + 0xfc8);
  Scaleform::Render::RenderQueue::~RenderQueue(param_1 + 0xfa8);
  FUN_1432c09c0(param_1 + 0xf20);
  *(undefined ***)(param_1 + 0xec0) = &PTR_FUN_145af86a8;
  *(undefined ***)(param_1 + 0xdf0) = &PTR_FUN_145af86a8;
  *(undefined ***)(param_1 + 0xd98) = &PTR_FUN_145af86a8;
  Scaleform::Render::LinearHeap::ClearAndRelease(param_1 + 0xd70);
  Scaleform::Render::LinearHeap::ClearAndRelease(param_1 + 0xd48);
  *(undefined ***)(param_1 + 0xc70) = &PTR_FUN_145af86a8;
  *(undefined ***)(param_1 + 0x9d0) = &PTR_FUN_145af86a8;
  *(undefined ***)(param_1 + 0x900) = &PTR_FUN_145af86a8;
  *(undefined ***)(param_1 + 0x8a8) = &PTR_FUN_145af86a8;
  *(undefined ***)(param_1 + 0x340) = &PTR_FUN_145af86a8;
  Scaleform::Render::LinearHeap::ClearAndRelease(param_1 + 0x318);
  Scaleform::Render::LinearHeap::ClearAndRelease(param_1 + 0x2f0);
  Scaleform::Render::LinearHeap::ClearAndRelease(param_1 + 0x2c8);
  Scaleform::Render::LinearHeap::ClearAndRelease(param_1 + 0x2a0);
  *(undefined ***)(param_1 + 0x288) = &PTR_FUN_145af8618;
  *(undefined ***)(param_1 + 0x290) = &PTR_FUN_145af85b0;
  if (*(RefCountImpl **)(param_1 + 0x268) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x268));
  }
  if (*(RefCountImpl **)(param_1 + 0x260) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x260));
  }
  if (*(RefCountImpl **)(param_1 + 600) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 600));
  }
  if (*(RefCountImpl **)(param_1 + 0x248) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x248));
  }
  if (*(RefCountImpl **)(param_1 + 0x240) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x240));
  }
  FUN_1432dd110(param_1 + 0x218);
  if (*(longlong **)(param_1 + 0x1f0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1f0) + 0x10))();
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x1d8));
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x1c0));
  FUN_1432dd5e0(*(undefined8 *)(param_1 + 0x1a8),*(undefined8 *)(param_1 + 0x1b0));
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x1a8));
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 400));
  FUN_1432dd090(param_1 + 0x178);
  FUN_1432dd000(param_1 + 0x160);
  FUN_1432cd2a0(param_1 + 0x10);
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 1432d8640 FUN_1432d8640 body=5 status=ok
// SIG undefined FUN_1432d8640(void)

longlong FUN_1432d8640(longlong param_1)

{
  return param_1 + 0x60;
}



// FUNCTION 1432d8650 SetToleranceParams body=60 status=ok
// SIG undefined SetToleranceParams(void)

void Scaleform::Render::HAL::SetToleranceParams(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x60) = *param_2;
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  uVar1 = param_2[3];
  *(undefined8 *)(param_1 + 0x70) = param_2[2];
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  uVar1 = param_2[5];
  *(undefined8 *)(param_1 + 0x80) = param_2[4];
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  uVar1 = param_2[7];
  *(undefined8 *)(param_1 + 0x90) = param_2[6];
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  *(undefined8 *)(param_1 + 0xa0) = param_2[8];
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 9);
  return;
}



// FUNCTION 1432d86a0 FUN_1432d86a0 body=29 status=ok
// SIG undefined FUN_1432d86a0(void)

void FUN_1432d86a0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x130))();
                    /* WARNING: Could not recover jumptable at 0x0001432d86b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(lVar1 + 8) + 0x10))(lVar1 + 8);
  return;
}



// FUNCTION 1432d86d0 FUN_1432d86d0 body=38 status=ok
// SIG undefined FUN_1432d86d0(void)

void FUN_1432d86d0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x130))();
                    /* WARNING: Could not recover jumptable at 0x0001432d86f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(lVar1 + 8) + 8))(lVar1 + 8,param_2);
  return;
}



// FUNCTION 1432d8700 FUN_1432d8700 body=65 status=ok
// SIG undefined FUN_1432d8700(void)

undefined * FUN_1432d8700(longlong *param_1)

{
  longlong lVar1;
  undefined *puVar2;
  
  lVar1 = (**(code **)(*param_1 + 0xe0))();
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*param_1 + 0xe0))(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001432d8730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar2 = (undefined *)(**(code **)(*(longlong *)(lVar1 + 0x18) + 0x10))(lVar1 + 0x18);
    return puVar2;
  }
  return &DAT_1467cd8c8;
}



// FUNCTION 1432d8750 FUN_1432d8750 body=67 status=ok
// SIG undefined FUN_1432d8750(void)

void FUN_1432d8750(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0xe0))();
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*param_1 + 0xe0))(param_1);
    (**(code **)(*(longlong *)(lVar1 + 0x18) + 8))(lVar1 + 0x18,param_2);
  }
  return;
}



// FUNCTION 1432d87a0 FUN_1432d87a0 body=107 status=ok
// SIG undefined FUN_1432d87a0(void)

void FUN_1432d87a0(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && ((*(longlong *)(param_2 + 8) == 0 || (*(longlong *)(param_2 + 0x10) == 0))))
  {
    if ((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) {
      *(longlong *)(*(longlong *)(param_2 + 8) + 0x10) = *(longlong *)(param_2 + 0x10);
      *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
    }
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x150);
    *(longlong *)(param_2 + 0x10) = param_1 + 0x148;
    *(longlong *)(*(longlong *)(param_1 + 0x150) + 0x10) = param_2;
    *(longlong *)(param_1 + 0x150) = param_2;
  }
  return;
}



// FUNCTION 1432d8860 FUN_1432d8860 body=207 status=ok
// SIG undefined FUN_1432d8860(void)

ulonglong FUN_1432d8860(longlong *param_1,longlong param_2,char param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined4 local_res8 [2];
  undefined8 local_18;
  undefined8 uStack_10;
  
  uVar1 = (ulonglong)*(uint *)(param_1 + 0xb);
  if (((*(uint *)(param_1 + 0xb) & 1) != 0) && ((ulonglong)param_1[0x36] < 2)) {
    if ((*(uint *)(param_1 + 0xb) & 4) != 0) {
      (**(code **)(*param_1 + 0x68))();
    }
    if (param_1[0x36] == 1) {
      (**(code **)(*param_1 + 0x28))(param_1,0x14);
    }
    uVar1 = 0;
    if (((byte)(int)param_1[0xb] & 0xc) != 0xc) {
      if (param_2 == 0) {
        return 1;
      }
      local_res8[0] = 0;
      uVar2 = 0x15;
      if (param_3 != '\0') {
        uVar2 = 0x11;
      }
      local_18 = 0;
      uStack_10 = 0;
      uVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_2,uVar2,&local_18,local_res8);
      return uVar1;
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1432d8940 FUN_1432d8940 body=43 status=ok
// SIG undefined FUN_1432d8940(void)

undefined8 FUN_1432d8940(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1b0) == 0) {
    return 0;
  }
  return *(undefined8 *)
          (*(longlong *)(param_1 + 0x1b0) * 0x340 + -0x340 + *(longlong *)(param_1 + 0x1a8));
}



// FUNCTION 1432d8980 FUN_1432d8980 body=1135 status=ok
// SIG undefined FUN_1432d8980(void)

undefined8
FUN_1432d8980(longlong *param_1,longlong *param_2,uint param_3,undefined4 *param_4,
             undefined4 *param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  longlong *local_368 [2];
  RefCountImplCore local_358 [648];
  RefCountImpl *local_d0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  if ((*(uint *)(param_1 + 0xb) & 1) != 0) {
    if ((param_3 & 0x10) == 0) {
      plVar12 = (longlong *)(**(code **)(*param_1 + 0x118))();
      (**(code **)(*plVar12 + 8))(plVar12,0xb,"HAL::PushRenderTarget");
    }
    if (param_2 != (longlong *)0x0) {
      local_368[0] = (longlong *)0x0;
      FUN_1432d68c0(local_358);
      plVar12 = param_1 + 0x35;
      local_88 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_80 = 0;
      local_74 = 1;
      local_78 = 1;
      local_68 = 0;
      local_70 = 0;
      local_60 = 0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      FUN_1432de010(plVar12,plVar12,param_1[0x36] + 1);
      lVar13 = param_1[0x36] * 0x340 + -0x340 + *plVar12;
      if (lVar13 != 0) {
        FUN_14201b230(lVar13,local_368);
      }
      lVar14 = param_1[0x36] * 0x340;
      lVar13 = *plVar12;
      (**(code **)(*param_2 + 8))(param_2);
      plVar12 = *(longlong **)(lVar14 + -0x340 + lVar13);
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x10))();
      }
      *(longlong **)(lVar14 + -0x340 + lVar13) = param_2;
      plVar12 = (longlong *)(lVar13 + -0x330 + lVar14);
      *(uint *)(lVar14 + -0x34 + lVar13) = param_3;
      *(undefined4 *)(lVar14 + -0x30 + lVar13) = *param_5;
      *(undefined4 *)(lVar14 + -0x10 + lVar13) = 0;
      uVar8 = *(undefined8 *)((longlong)param_1 + 0x1164);
      puVar1 = (undefined8 *)(lVar14 + -0x60 + lVar13);
      *puVar1 = *(undefined8 *)((longlong)param_1 + 0x115c);
      puVar1[1] = uVar8;
      uVar8 = *(undefined8 *)((longlong)param_1 + 0x1174);
      puVar1 = (undefined8 *)(lVar14 + -0x50 + lVar13);
      *puVar1 = *(undefined8 *)((longlong)param_1 + 0x116c);
      puVar1[1] = uVar8;
      *(undefined8 *)(lVar14 + -0x40 + lVar13) = *(undefined8 *)((longlong)param_1 + 0x117c);
      *(undefined4 *)(lVar14 + -0x38 + lVar13) = *(undefined4 *)((longlong)param_1 + 0x1184);
      lVar9 = param_1[0x232];
      uVar2 = *(undefined4 *)((longlong)param_1 + 0x119c);
      lVar10 = param_1[0x233];
      *(undefined4 *)(lVar14 + -0x6c + lVar13) = *(undefined4 *)((longlong)param_1 + 0x1194);
      *(int *)(lVar14 + -0x68 + lVar13) = (int)lVar10;
      *(undefined4 *)(lVar14 + -100 + lVar13) = uVar2;
      *(int *)(lVar14 + -0x70 + lVar13) = (int)lVar9;
      (**(code **)(*plVar12 + 0x30))(plVar12,param_1[0x4b]);
      *(undefined4 *)(lVar14 + -0x2c + lVar13) = 0;
      uVar4 = *(uint *)(param_1 + 0xb);
      *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) & 0xffffffef;
      if ((param_3 & 8) != 0) {
        *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) | 0x10;
        lVar10 = param_2[6];
        iVar5 = *(int *)((longlong)param_2 + 0x34);
        lVar9 = param_2[6];
        lVar11 = param_2[7];
        iVar6 = *(int *)((longlong)param_2 + 0x3c);
        uVar2 = param_4[2];
        uVar3 = param_4[3];
        uVar7 = *param_4;
        *(undefined4 *)((longlong)param_1 + 0x1194) = param_4[1];
        *(undefined4 *)(param_1 + 0x233) = uVar2;
        *(undefined4 *)(param_1 + 0x232) = uVar7;
        *(undefined4 *)((longlong)param_1 + 0x119c) = uVar3;
        *(longlong *)((longlong)param_1 + 0x115c) = param_2[5];
        *(longlong *)((longlong)param_1 + 0x1164) = lVar9;
        *(int *)((longlong)param_1 + 0x116c) = (int)lVar11 - (int)lVar10;
        *(int *)(param_1 + 0x22e) = iVar6 - iVar5;
        *(undefined4 *)((longlong)param_1 + 0x1174) = 0;
        *(undefined4 *)(param_1 + 0x22f) = 0;
        *(undefined8 *)((longlong)param_1 + 0x117c) = 0;
        *(undefined4 *)((longlong)param_1 + 0x1184) = 0;
        (**(code **)(*(longlong *)param_1[0x4b] + 0x50))((longlong *)param_1[0x4b],&DAT_14621c810);
        if ((uVar4 >> 4 & 1) == 0) {
          lVar9 = param_1[0x4b];
          fVar15 = -*(float *)(lVar14 + -0x70 + lVar13);
          fVar16 = -*(float *)(lVar14 + -0x6c + lVar13);
          *(float *)(lVar9 + 0x1c0) = fVar15 + *(float *)(lVar9 + 0x1c0);
          *(float *)(lVar9 + 0x1c8) = fVar15 + *(float *)(lVar9 + 0x1c8);
          *(float *)(lVar9 + 0x1c4) = fVar16 + *(float *)(lVar9 + 0x1c4);
          *(float *)(lVar9 + 0x1cc) = fVar16 + *(float *)(lVar9 + 0x1cc);
        }
        lVar13 = param_1[0x4b];
        *(undefined8 *)(lVar13 + 0x160) = 0x3f800000;
        *(undefined8 *)(lVar13 + 0x168) = 0;
        *(undefined4 *)(lVar13 + 0x170) = 0;
        *(undefined8 *)(lVar13 + 0x174) = 0x3f800000;
        *(undefined4 *)(lVar13 + 0x17c) = 0;
        lVar13 = param_1[0x4b];
        *(undefined8 *)(lVar13 + 0x180) = 0;
        *(undefined8 *)(lVar13 + 0x188) = 0;
        *(undefined8 *)(lVar13 + 400) = 0;
        *(undefined8 *)(lVar13 + 0x198) = 0;
        *(undefined8 *)(lVar13 + 0x1a0) = 0;
        *(undefined8 *)(lVar13 + 0x1a8) = 0;
        *(undefined8 *)(lVar13 + 0x1b0) = 0;
        *(undefined8 *)(lVar13 + 0x1b8) = 0;
        *(undefined4 *)(lVar13 + 0x180) = 0x3f800000;
        *(undefined4 *)(lVar13 + 0x194) = 0x3f800000;
        *(undefined4 *)(lVar13 + 0x1a8) = 0x3f800000;
        *(undefined4 *)(lVar13 + 0x1bc) = 0x3f800000;
        *(uint *)((longlong)param_1 + 0x1184) = *(uint *)((longlong)param_1 + 0x1184) | 1;
        *(undefined1 *)(param_1[0x4b] + 0x280) = 1;
      }
      *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) & 0xffffffdf;
      if ((param_3 & 4) == 0) {
        (**(code **)(*param_1 + 0x290))(param_1,param_2[4],param_3,param_5);
        *(int *)(param_1 + 0x50) = (int)param_1[0x50] + 1;
        if ((param_3 & 8) != 0) {
          *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) | 0x20;
          (**(code **)(*param_1 + 0x260))(param_1);
        }
      }
      FUN_14201bc10(&local_50);
      if (local_d0 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(local_d0);
      }
      Scaleform::RefCountImplCore::~RefCountImplCore(local_358);
      if (local_368[0] != (longlong *)0x0) {
        (**(code **)(*local_368[0] + 0x10))();
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1432d8e00 FUN_1432d8e00 body=772 status=ok
// SIG undefined FUN_1432d8e00(void)

undefined8 FUN_1432d8e00(longlong *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  bool bVar10;
  RefCountImpl *this;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong **pplVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined4 local_res8 [2];
  longlong *local_res18;
  longlong *local_res20;
  
  local_res8[0] = 0;
  if (((*(uint *)(param_1 + 0xb) & 1) != 0) && (param_1[0x36] != 0)) {
    plVar13 = param_1 + 0x35;
    lVar16 = param_1[0x36] * 0x340;
    lVar6 = *plVar13;
    plVar7 = *(longlong **)(lVar6 + -0x340 + lVar16);
    if (plVar7 == (longlong *)0x0) {
      uVar12 = 0;
    }
    else {
      lVar11 = plVar7[4];
      if (lVar11 == 0) {
        pplVar14 = &local_res18;
        bVar10 = false;
        bVar9 = true;
        local_res18 = (longlong *)0x0;
        plVar15 = local_res20;
      }
      else {
        if (*(longlong **)(lVar11 + 8) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar11 + 8) + 8))();
        }
        plVar15 = *(longlong **)(lVar11 + 8);
        pplVar14 = &local_res20;
        local_res20 = plVar15;
        bVar10 = true;
        bVar9 = false;
        if (plVar15 != (longlong *)0x0) {
          (**(code **)(*plVar15 + 8))(plVar15);
        }
      }
      plVar8 = *pplVar14;
      if ((bVar9) && (local_res18 != (longlong *)0x0)) {
        (**(code **)(*local_res18 + 0x10))();
      }
      if ((bVar10) && (plVar15 != (longlong *)0x0)) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
      if (plVar8 == (longlong *)0x0) {
        this = (RefCountImpl *)0x0;
      }
      else {
        this = (RefCountImpl *)(**(code **)(*plVar8 + 0x18))(plVar8);
        if (this != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::AddRef(this);
        }
      }
      lVar11 = (**(code **)(*param_1 + 0xd0))(param_1);
      if ((lVar11 != 0) && ((*(uint *)(param_1 + 0xb) & 2) != 0)) {
        lVar11 = (**(code **)(*plVar7 + 0x18))(plVar7);
        if (lVar11 != 0) {
          uVar12 = (**(code **)(*param_1 + 0xd0))(param_1);
          FUN_1432c2490(uVar12,lVar11 + 0x20);
        }
        if (this != (RefCountImpl *)0x0) {
          uVar12 = (**(code **)(*param_1 + 0xd0))(param_1);
          FUN_1432c2490(uVar12,this + 0x20);
        }
      }
      if ((plVar8 != (longlong *)0x0) && (*(int *)((longlong)plVar8 + 0x14) == 5)) {
        (**(code **)(*(longlong *)plVar7[4] + 8))();
      }
      (**(code **)(*(longlong *)param_1[0x4b] + 0x30))
                ((longlong *)param_1[0x4b],lVar6 + -0x330 + lVar16);
      uVar3 = *(undefined4 *)(lVar6 + -0x68 + lVar16);
      uVar5 = *(undefined4 *)(lVar6 + -0x70 + lVar16);
      uVar4 = *(undefined4 *)(lVar6 + -100 + lVar16);
      *(undefined4 *)((longlong)param_1 + 0x1194) = *(undefined4 *)(lVar6 + -0x6c + lVar16);
      *(undefined4 *)(param_1 + 0x233) = uVar3;
      *(undefined4 *)((longlong)param_1 + 0x119c) = uVar4;
      *(undefined4 *)(param_1 + 0x232) = uVar5;
      puVar1 = (undefined8 *)(lVar6 + -0x60 + lVar16);
      uVar12 = puVar1[1];
      *(undefined8 *)((longlong)param_1 + 0x115c) = *puVar1;
      *(undefined8 *)((longlong)param_1 + 0x1164) = uVar12;
      puVar2 = (undefined4 *)(lVar6 + -0x50 + lVar16);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)((longlong)param_1 + 0x116c) = *puVar2;
      *(undefined4 *)(param_1 + 0x22e) = uVar3;
      *(undefined4 *)((longlong)param_1 + 0x1174) = uVar4;
      *(undefined4 *)(param_1 + 0x22f) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x117c) = *(undefined8 *)(lVar6 + -0x40 + lVar16);
      *(undefined4 *)((longlong)param_1 + 0x1184) = *(undefined4 *)(lVar6 + -0x38 + lVar16);
      FUN_1432ddca0(plVar13,param_1[0x36] + -1);
      *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) & 0xffffffcf;
      if (param_1[0x36] != 0) {
        uVar12 = *(undefined8 *)(*(longlong *)(param_1[0x36] * 0x340 + -0x340 + *plVar13) + 0x20);
        if ((*(byte *)(param_1[0x36] * 0x340 + -0x34 + *plVar13) & 8) != 0) {
          *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) | 0x10;
        }
        local_res8[0] = 0;
        (**(code **)(*param_1 + 0x290))(param_1,uVar12,param_2 | 1,local_res8);
        if ((param_2 & 4) == 0) {
          *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) | 0x20;
          (**(code **)(*param_1 + 0x260))(param_1);
        }
      }
      if ((param_2 & 0x10) == 0) {
        plVar13 = (longlong *)(**(code **)(*param_1 + 0x118))(param_1);
        (**(code **)(*plVar13 + 0x10))(plVar13,0xb);
      }
      if (this != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(this);
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
      uVar12 = 1;
    }
    return uVar12;
  }
  return 0;
}



// FUNCTION 1432d9110 FUN_1432d9110 body=638 status=ok
// SIG undefined FUN_1432d9110(void)

undefined1 FUN_1432d9110(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 uVar5;
  DWORD DVar6;
  longlong lVar7;
  undefined *puVar8;
  longlong *plVar9;
  RefCountImpl *this;
  longlong *plVar10;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  
  uVar2 = *(uint *)(param_2 + 8);
  *(uint *)((longlong)param_1 + 0x54) = uVar2;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0xc);
  if ((uVar2 >> 0x1e & 1) != 0) {
    lVar7 = (**(code **)(*param_1 + 0x118))();
    *(undefined1 *)(lVar7 + 0x68) = 1;
  }
  if ((*(uint *)((longlong)param_1 + 0x54) >> 0x16 & 1) == 0) {
    puVar8 = &DAT_1467cd4f0;
    if ((*(uint *)((longlong)param_1 + 0x54) >> 0x15 & 1) == 0) {
      puVar8 = &DAT_1467cd310;
    }
  }
  else {
    puVar8 = &DAT_1467cd6d0;
  }
  param_1[0x238] = (longlong)puVar8;
  if (param_1[0x4a] == 0) {
    lVar7 = (**(code **)(*(longlong *)param_1[9] + 0x50))((longlong *)param_1[9],0x10,0);
    plVar9 = (longlong *)0x0;
    if (lVar7 != 0) {
      plVar9 = (longlong *)
               Scaleform::Render::MatrixStateFactory::MatrixStateFactory(lVar7,param_1[9]);
    }
    param_1[0x4a] = (longlong)plVar9;
    if (plVar9 == (longlong *)0x0) {
      return 0;
    }
  }
  plVar9 = (longlong *)(**(code **)(*param_1 + 0x108))(param_1);
  lVar7 = (**(code **)(*plVar9 + 8))(plVar9);
  if ((RefCountImpl *)param_1[0x4b] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0x4b]);
  }
  param_1[0x4b] = lVar7;
  if ((int)param_1[10] == 0) {
    DVar6 = GetCurrentThreadId();
    *(DWORD *)(param_1 + 10) = DVar6;
  }
  plVar9 = (longlong *)param_1[8];
  if (plVar9 != (longlong *)0x0) {
    local_18 = 0;
    local_28 = 0;
    uStack_20 = 0;
    (**(code **)(*plVar9 + 0x10))(plVar9,&local_28);
  }
  (**(code **)(*param_1 + 0xb8))(param_1);
  (**(code **)(*param_1 + 0xb8))(param_1);
  FUN_14332ab70(param_1[0x49],param_1,param_1 + 0x43);
  cVar4 = FUN_143323d80(param_1 + 0x1f5,*(undefined4 *)(param_2 + 0x20));
  uVar5 = 0;
  if (cVar4 != '\0') {
    lVar7 = (**(code **)(*param_1 + 0x128))(param_1);
    if (lVar7 != 0) {
      this = (RefCountImpl *)(**(code **)(*param_1 + 0xd0))(param_1);
      if (this != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(this);
      }
      if (*(RefCountImpl **)(lVar7 + 0x60) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar7 + 0x60));
      }
      *(RefCountImpl **)(lVar7 + 0x60) = this;
      if ((((*(longlong *)(lVar7 + 0x20) == 0) || (*(longlong *)(lVar7 + 0x28) == 0)) &&
          (lVar1 = lVar7 + 0x18, lVar1 != 0)) &&
         ((*(longlong *)(lVar7 + 0x20) == 0 || (*(longlong *)(lVar7 + 0x28) == 0)))) {
        if ((*(longlong *)(lVar7 + 0x20) != 0) && (*(longlong *)(lVar7 + 0x28) != 0)) {
          *(longlong *)(*(longlong *)(lVar7 + 0x20) + 0x10) = *(longlong *)(lVar7 + 0x28);
          *(undefined8 *)(*(longlong *)(lVar7 + 0x28) + 8) = *(undefined8 *)(lVar7 + 0x20);
          *(undefined8 *)(lVar7 + 0x20) = 0;
          *(undefined8 *)(lVar7 + 0x28) = 0;
        }
        *(longlong *)(lVar7 + 0x20) = param_1[0x2a];
        *(longlong **)(lVar7 + 0x28) = param_1 + 0x29;
        *(longlong *)(param_1[0x2a] + 0x10) = lVar1;
        param_1[0x2a] = lVar1;
      }
    }
    *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) | 1;
    plVar9 = (longlong *)param_1[0x2b];
    plVar10 = param_1 + 0x29;
    if (param_1 + 0x2a == (longlong *)0x0) {
      plVar10 = (longlong *)0x0;
    }
    while (plVar9 != plVar10) {
      plVar3 = (longlong *)plVar9[2];
      (**(code **)(*plVar9 + 8))(plVar9,0);
      plVar9 = plVar3;
    }
    if ((param_1[0x36] == 0) && ((*(uint *)((longlong)param_1 + 0x54) & 0x2000000) == 0)) {
      (**(code **)(*param_1 + 0x280))(param_1);
    }
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 1432d93a0 FUN_1432d93a0 body=216 status=ok
// SIG undefined FUN_1432d93a0(void)

undefined8 FUN_1432d93a0(longlong *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  cVar3 = (**(code **)(*param_1 + 0x30))();
  if (cVar3 != '\0') {
    FUN_1432cd3e0(param_1 + 2);
    FUN_143325b60(param_1[0x48]);
    FUN_14332abb0(param_1[0x49]);
    puVar1 = (undefined8 *)param_1[0x4a];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    param_1[0x4a] = 0;
    Scaleform::Render::RenderQueue::~RenderQueue(param_1 + 0x1f5);
    (**(code **)(*param_1 + 0x288))(param_1);
    (**(code **)(*param_1 + 0xb8))(param_1);
    (**(code **)(*param_1 + 0xb8))(param_1);
    plVar4 = (longlong *)param_1[0x2b];
    *(undefined4 *)(param_1 + 0xb) = 0;
    plVar5 = param_1 + 0x29;
    if (param_1 + 0x2a == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
    }
    while (plVar4 != plVar5) {
      plVar2 = (longlong *)plVar4[2];
      (**(code **)(*plVar4 + 8))(plVar4,1);
      plVar4 = plVar2;
    }
  }
  return 1;
}



// FUNCTION 1432d9480 FUN_1432d9480 body=129 status=ok
// SIG undefined FUN_1432d9480(void)

undefined8 FUN_1432d9480(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if ((*(uint *)(param_1 + 0x58) & 0x2001) == 1) {
    FUN_14332abb0(*(undefined8 *)(param_1 + 0x248));
    plVar2 = *(longlong **)(param_1 + 0x158);
    plVar3 = (longlong *)(param_1 + 0x148);
    if (param_1 == -0x150) {
      plVar3 = (longlong *)0x0;
    }
    while (plVar2 != plVar3) {
      plVar1 = (longlong *)plVar2[2];
      (**(code **)(*plVar2 + 8))(plVar2,2);
      plVar2 = plVar1;
    }
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 0x2000;
    return 1;
  }
  return 0;
}



// FUNCTION 1432d9510 FUN_1432d9510 body=141 status=ok
// SIG undefined FUN_1432d9510(void)

undefined8 FUN_1432d9510(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if ((*(uint *)(param_1 + 0x58) & 0x2001) == 0x2001) {
    FUN_14332ab70(*(undefined8 *)(param_1 + 0x248),param_1,param_1 + 0x218);
    plVar2 = *(longlong **)(param_1 + 0x158);
    plVar3 = (longlong *)(param_1 + 0x148);
    if (param_1 == -0x150) {
      plVar3 = (longlong *)0x0;
    }
    while (plVar2 != plVar3) {
      plVar1 = (longlong *)plVar2[2];
      (**(code **)(*plVar2 + 8))(plVar2,3);
      plVar2 = plVar1;
    }
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) & 0xffffdfff;
    return 1;
  }
  return 0;
}



// FUNCTION 1432d95b0 FUN_1432d95b0 body=273 status=ok
// SIG undefined FUN_1432d95b0(void)

undefined8 FUN_1432d95b0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if ((*(uint *)(param_1 + 0xb) & 1) != 0) {
    plVar2 = (longlong *)param_1[0x2b];
    plVar5 = param_1 + 0x29;
    if (param_1 == (longlong *)0xfffffffffffffeb0) {
      plVar5 = (longlong *)0x0;
    }
    while (plVar2 != plVar5) {
      plVar1 = (longlong *)plVar2[2];
      (**(code **)(*plVar2 + 8))(plVar2,4);
      plVar2 = plVar1;
    }
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x118))(param_1);
    (**(code **)(*plVar2 + 8))(plVar2,1,"HAL::BeginFrame");
    if ((*(uint *)(param_1 + 0xb) >> 0xd & 1) == 0) {
      *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) | 2;
      uVar3 = (**(code **)(*param_1 + 0xe8))(param_1);
      FUN_143325a80(uVar3);
      uVar3 = (**(code **)(*param_1 + 0xe0))(param_1);
      Scaleform::Render::GlyphCache::OnBeginFrame(uVar3);
      uVar3 = (**(code **)(*param_1 + 200))(param_1);
      FUN_143323fa0(uVar3);
      plVar2 = (longlong *)(**(code **)(*param_1 + 0x130))(param_1);
      (**(code **)(*plVar2 + 0x18))(plVar2);
      lVar4 = (**(code **)(*param_1 + 0xd0))(param_1);
      if (lVar4 != 0) {
        plVar2 = (longlong *)(**(code **)(*param_1 + 0xd0))(param_1);
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1432d96d0 FUN_1432d96d0 body=260 status=ok
// SIG undefined FUN_1432d96d0(void)

void FUN_1432d96d0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  if (((byte)(int)param_1[0xb] & 3) == 3) {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x118))();
    lVar3 = (**(code **)(*param_1 + 0xd0))(param_1);
    if (lVar3 != 0) {
      plVar4 = (longlong *)(**(code **)(*param_1 + 0xd0))(param_1);
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    plVar4 = (longlong *)(**(code **)(*param_1 + 0xa8))(param_1);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x130))(param_1);
    (**(code **)(*plVar4 + 0x20))(plVar4);
    uVar5 = (**(code **)(*param_1 + 0xe0))(param_1);
    FUN_14332acd0(uVar5);
    FUN_1432cd470(param_1 + 2);
    *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) & 0xfffffffd;
    (**(code **)(*plVar2 + 0x10))(plVar2,1);
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x118))(param_1);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    plVar2 = (longlong *)param_1[0x2b];
    plVar4 = param_1 + 0x29;
    if (param_1 == (longlong *)0xfffffffffffffeb0) {
      plVar4 = (longlong *)0x0;
    }
    while (plVar2 != plVar4) {
      plVar1 = (longlong *)plVar2[2];
      (**(code **)(*plVar2 + 8))(plVar2,5);
      plVar2 = plVar1;
    }
  }
  return;
}



// FUNCTION 1432d97e0 FUN_1432d97e0 body=242 status=ok
// SIG undefined FUN_1432d97e0(void)

void FUN_1432d97e0(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar2 = (**(code **)(*param_1 + 200))();
  FUN_143324000(uVar2);
  uVar3 = 0;
  if (param_1[0x228] != 0) {
    do {
      plVar1 = *(longlong **)(param_1[0x227] + uVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        if ((undefined **)*plVar1 != &PTR_LOOP_1467cd040) {
          FUN_1432c03a0(*(undefined **)*plVar1);
        }
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,plVar1);
      }
      uVar3 = (ulonglong)((int)uVar3 + 1);
    } while (uVar3 < (ulonglong)param_1[0x228]);
  }
  if (((param_1[0x228] != 0) && ((param_1[0x229] & 0xfffffffffffffffeU) != 0)) &&
     (param_1[0x229] != 0)) {
    if (param_1[0x227] != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
      param_1[0x227] = 0;
    }
    param_1[0x229] = 0;
  }
  param_1[0x228] = 0;
  return;
}



// FUNCTION 1432d9900 FUN_1432d9900 body=346 status=ok
// SIG undefined FUN_1432d9900(void)

undefined4 FUN_1432d9900(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if ((*(uint *)(param_1 + 0xb) & 2) == 0) {
    return 0;
  }
  plVar4 = (longlong *)param_1[0x2b];
  plVar5 = param_1 + 0x29;
  if (param_1 + 0x2a == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  while (plVar4 != plVar5) {
    plVar2 = (longlong *)plVar4[2];
    (**(code **)(*plVar4 + 8))(plVar4,6);
    plVar4 = plVar2;
  }
  if (param_1[0x36] == 0) {
    return 0;
  }
  lVar3 = (**(code **)(*param_1 + 0x138))(param_1);
  if (lVar3 != 0) {
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x138))(param_1);
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x118))(param_1);
  (**(code **)(*plVar4 + 8))(plVar4,2,"HAL::BeginScene");
  *(undefined4 *)((longlong)param_1 + 0x20c) = 0x14;
  *(undefined1 *)((longlong)param_1 + 0x212) = 0;
  FUN_1432dafc0(param_1,0,0,0);
  (**(code **)(*param_1 + 0x2a0))(param_1,1);
  *(undefined4 *)(param_1 + 0x3f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0xffffffff;
  (**(code **)(*param_1 + 0x2c0))(param_1,1);
  iVar1 = (int)param_1[0x40];
  *(int *)((longlong)param_1 + 0x204) = iVar1;
  *(undefined4 *)(param_1 + 0x41) = 3;
  if (iVar1 != 3) {
    (**(code **)(*param_1 + 0x308))(param_1,iVar1);
    *(int *)(param_1 + 0x41) = iVar1;
  }
  *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) | 4;
  return 1;
}



// FUNCTION 1432d9a60 FUN_1432d9a60 body=520 status=ok
// SIG undefined FUN_1432d9a60(void)

undefined8 FUN_1432d9a60(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  RefCountImpl *this;
  longlong *plVar7;
  longlong *plVar8;
  longlong **pplVar9;
  longlong *plVar10;
  longlong *local_res8;
  longlong *local_res10;
  
  local_res8 = (longlong *)((ulonglong)local_res8 & 0xffffffff00000000);
  if (((byte)(int)param_1[0xb] & 6) == 6) {
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x118))();
    (**(code **)(*param_1 + 0x68))(param_1);
    lVar5 = (**(code **)(*param_1 + 0xd0))(param_1);
    if (lVar5 != 0) {
      uVar6 = (**(code **)(*param_1 + 0xd0))(param_1);
      FUN_1432c25b0(uVar6,2);
    }
    if (param_1[0x36] != 0) {
      plVar7 = (longlong *)param_1[0x35];
      if ((longlong *)*plVar7 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar7 + 8))();
      }
      plVar10 = (longlong *)*plVar7;
      plVar8 = (longlong *)0x0;
      if (plVar10 != (longlong *)0x0) {
        plVar8 = (longlong *)plVar10[4];
      }
      if (plVar8 == (longlong *)0x0) {
        pplVar9 = &local_res8;
        bVar3 = false;
        bVar2 = true;
        local_res8 = (longlong *)0x0;
        plVar8 = local_res10;
      }
      else {
        if ((longlong *)plVar8[1] != (longlong *)0x0) {
          (**(code **)(*(longlong *)plVar8[1] + 8))();
        }
        plVar8 = (longlong *)plVar8[1];
        pplVar9 = &local_res10;
        local_res10 = plVar8;
        bVar3 = true;
        bVar2 = false;
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 8))(plVar8);
        }
      }
      plVar1 = *pplVar9;
      if ((bVar2) && (local_res8 != (longlong *)0x0)) {
        (**(code **)(*local_res8 + 0x10))();
      }
      if ((bVar3) && (plVar8 != (longlong *)0x0)) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
      if (plVar1 == (longlong *)0x0) {
        this = (RefCountImpl *)0x0;
      }
      else {
        this = (RefCountImpl *)(**(code **)(*plVar1 + 0x18))(plVar1);
        if (this != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::AddRef(this);
        }
        if (*(int *)((longlong)plVar1 + 0x14) == 5) {
          (**(code **)(*(longlong *)plVar10[4] + 8))();
        }
      }
      *(undefined4 *)(plVar7 + 0x66) = 0;
      if (this != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(this);
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) & 0xfffffffb;
    plVar7 = (longlong *)param_1[0x2b];
    plVar10 = param_1 + 0x29;
    if (param_1 == (longlong *)0xfffffffffffffeb0) {
      plVar10 = (longlong *)0x0;
    }
    while (plVar7 != plVar10) {
      plVar8 = (longlong *)plVar7[2];
      (**(code **)(*plVar7 + 8))(plVar7,7);
      plVar7 = plVar8;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4,2);
    return 1;
  }
  return 0;
}



// FUNCTION 1432d9c70 FUN_1432d9c70 body=454 status=ok
// SIG undefined FUN_1432d9c70(void)

void FUN_1432d9c70(longlong *param_1,undefined4 *param_2,undefined4 *param_3,undefined1 param_4,
                  undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **local_118;
  undefined8 *local_110;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  
  if ((*(uint *)(param_1 + 0xb) & 2) != 0) {
    local_f4 = *param_3;
    uVar1 = param_3[10];
    uStack_f0 = param_3[1];
    uVar2 = *param_2;
    uStack_ec = param_3[2];
    uStack_e8 = param_3[3];
    local_e4 = param_3[4];
    uStack_e0 = param_3[5];
    uStack_dc = param_3[6];
    uStack_d8 = param_3[7];
    local_d4 = param_3[8];
    uStack_d0 = param_3[9];
    uVar3 = *param_5;
    uVar4 = param_5[1];
    uVar5 = param_5[2];
    uVar6 = param_5[3];
    local_110 = (undefined8 *)FUN_1432de0e0(param_1 + 0x222);
    *local_110 = 0xffffffffffffffff;
    local_110[1] = 0xffffffffffffffff;
    *(undefined4 *)(local_110 + 2) = uVar2;
    *(ulonglong *)((longlong)local_110 + 0x14) = CONCAT44(uStack_f0,local_f4);
    *(ulonglong *)((longlong)local_110 + 0x1c) = CONCAT44(uStack_e8,uStack_ec);
    *(undefined1 *)(local_110 + 8) = param_4;
    *(undefined4 *)((longlong)local_110 + 0x24) = local_e4;
    *(undefined4 *)(local_110 + 5) = uStack_e0;
    *(undefined4 *)((longlong)local_110 + 0x2c) = uStack_dc;
    *(undefined4 *)(local_110 + 6) = uStack_d8;
    *(ulonglong *)((longlong)local_110 + 0x34) = CONCAT44(uStack_d0,local_d4);
    *(undefined4 *)((longlong)local_110 + 0x3c) = uVar1;
    local_110[10] = uVar3;
    local_110[0xb] = uVar4;
    local_110[0xc] = uVar5;
    local_110[0xd] = uVar6;
    if ((*(uint *)(param_1 + 0xb) & 4) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001432d9dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x250))(param_1,local_110);
      return;
    }
    local_118 = &PTR_PTR_1467cd8b0;
    (**(code **)(*param_1 + 0x88))(param_1,&local_118);
  }
  return;
}



// FUNCTION 1432d9e40 FUN_1432d9e40 body=83 status=ok
// SIG undefined FUN_1432d9e40(void)

void FUN_1432d9e40(longlong *param_1)

{
  undefined **local_18;
  undefined8 local_10;
  
  if ((*(uint *)(param_1 + 0xb) >> 10 & 1) == 0) {
    local_10 = 0;
    local_18 = &PTR_PTR_1467cd8b8;
    (**(code **)(*param_1 + 0x88))(param_1,&local_18);
    return;
  }
  (**(code **)(*param_1 + 0x68))();
                    /* WARNING: Could not recover jumptable at 0x0001432d9e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 600))(param_1);
  return;
}



// FUNCTION 1432d9ea0 FUN_1432d9ea0 body=821 status=ok
// SIG undefined FUN_1432d9ea0(void)

void FUN_1432d9ea0(longlong param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  ushort uVar11;
  int *piVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 local_res10 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  plVar7 = *(longlong **)(param_2 + 0x28);
  lVar6 = FUN_1432cd220(param_2);
  piVar12 = (int *)(lVar6 + 0xa0);
  if ((*piVar12 == 0) || (*(int *)(lVar6 + 0xa4) == 0)) {
    piVar12 = (int *)(param_1 + 0x115c);
  }
  else {
    iVar2 = *(int *)(lVar6 + 0xa8);
    iVar3 = *(int *)(lVar6 + 0xac);
    lVar4 = *(longlong *)(param_1 + 600);
    if (((*(uint *)(lVar6 + 200) & 0x30) - 0x10 & 0xffffffdf) == 0) {
      iVar10 = *(int *)(lVar6 + 0xb4);
      iVar9 = *(int *)(lVar6 + 0xb0);
    }
    else {
      iVar10 = *(int *)(lVar6 + 0xb0);
      iVar9 = *(int *)(lVar6 + 0xb4);
    }
    *(float *)(lVar4 + 0x1c0) = (float)iVar2;
    *(float *)(lVar4 + 0x1c4) = (float)iVar3;
    *(float *)(lVar4 + 0x1c8) = (float)(iVar10 + iVar2);
    *(float *)(lVar4 + 0x1cc) = (float)(iVar9 + iVar3);
    *(undefined1 *)(lVar4 + 0x280) = 1;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  cVar5 = FUN_1432dcab0(piVar12,&local_78,1);
  bVar13 = cVar5 != '\0';
  if (bVar13) {
    fVar17 = (float)((int)local_78 - piVar12[2]);
    fVar16 = (float)(local_78._4_4_ - piVar12[3]);
    fVar15 = (float)((int)uStack_70 - piVar12[2]);
    fVar14 = (float)(uStack_70._4_4_ - piVar12[3]);
  }
  else {
    fVar17 = (float)local_68;
    fVar16 = local_68._4_4_;
    fVar15 = (float)uStack_60;
    fVar14 = uStack_60._4_4_;
  }
  if (*piVar12 == 0) {
    return;
  }
  if (piVar12[1] == 0) {
    return;
  }
  if (plVar7 == (longlong *)0x0) {
    uVar11 = *(ushort *)(lVar6 + 10) & 0xc;
    local_res10[0] = 0x47;
    if ((*(ushort *)(lVar6 + 10) & 0xc) == 0) {
      uVar11 = 4;
    }
    bVar1 = *(byte *)(lVar6 + 10);
    lVar6 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x1e0,local_res10);
    if (lVar6 == 0) {
      return;
    }
    plVar7 = (longlong *)FUN_1432dcef0(lVar6,uVar11 | bVar1 & 1,param_2);
    if (plVar7 == (longlong *)0x0) {
      return;
    }
    *(longlong **)(param_2 + 0x28) = plVar7;
    plVar7[2] = *(longlong *)(param_1 + 0x140);
    plVar7[3] = param_1 + 0x130;
    *(longlong **)(*(longlong *)(param_1 + 0x140) + 0x18) = plVar7;
    *(longlong **)(param_1 + 0x140) = plVar7;
    *(bool *)(plVar7 + 0x17) = bVar13;
    *(float *)(plVar7 + 0x14) = fVar17;
    *(float *)((longlong)plVar7 + 0xa4) = fVar16;
    *(float *)(plVar7 + 0x15) = fVar15;
    *(float *)((longlong)plVar7 + 0xac) = fVar14;
    uVar8 = FUN_1432cd220(param_2);
    (**(code **)(*plVar7 + 0x10))(plVar7,param_1,uVar8,1);
    FUN_143351bd0(plVar7,plVar7,0x1000003);
    Scaleform::Render::TreeCacheRoot::ChainUpdatesByDepth(plVar7);
  }
  else {
    if ((((bVar13 == (bool)(char)plVar7[0x17]) && (fVar17 == *(float *)(plVar7 + 0x14))) &&
        (fVar15 == *(float *)(plVar7 + 0x15))) &&
       ((fVar16 == *(float *)((longlong)plVar7 + 0xa4) &&
        (fVar14 == *(float *)((longlong)plVar7 + 0xac))))) goto LAB_1432da18e;
    *(bool *)(plVar7 + 0x17) = bVar13;
    *(float *)(plVar7 + 0x14) = fVar17;
    *(float *)((longlong)plVar7 + 0xa4) = fVar16;
    *(float *)(plVar7 + 0x15) = fVar15;
    *(float *)((longlong)plVar7 + 0xac) = fVar14;
    FUN_143351bd0(plVar7,plVar7,1);
  }
  FUN_143351d00(plVar7,param_1);
LAB_1432da18e:
  if (bVar13) {
    FUN_143352590(plVar7,param_1);
  }
  return;
}



// FUNCTION 1432da1e0 FUN_1432da1e0 body=146 status=ok
// SIG undefined FUN_1432da1e0(void)

void FUN_1432da1e0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  FUN_1432dca30();
  plVar2 = *(longlong **)(param_1 + 0x148);
  plVar3 = (longlong *)(param_1 + 0x130);
  if (param_1 == -0x140) {
    plVar3 = (longlong *)0x0;
  }
  for (; plVar2 != plVar3; plVar2 = (longlong *)plVar2[3]) {
    if ((param_2 == 0) || (lVar1 = FUN_1432cd260(plVar2[5]), param_2 == lVar1)) {
      (**(code **)(*plVar2 + 0x60))(plVar2,param_1);
      Scaleform::Render::TreeCacheRoot::ChainUpdatesByDepth(plVar2);
      FUN_143351d00(plVar2,param_1);
    }
  }
  return;
}



// FUNCTION 1432da290 FUN_1432da290 body=337 status=ok
// SIG undefined FUN_1432da290(void)

void FUN_1432da290(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined **local_res8;
  undefined **local_28;
  undefined8 *local_20;
  
  if ((*(uint *)(param_1 + 0xb) & 2) == 0) {
    return;
  }
  if ((*(uint *)(param_1 + 0xb) & 4) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001432da2bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x278))();
    return;
  }
  uVar3 = (**(code **)(*param_1 + 0x100))();
  FUN_1432c0a80(uVar3,&local_res8,2);
  FUN_1432c0490(&local_res8,param_2);
  FUN_1432c0630(&local_res8,param_3,0);
  local_20 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,8);
  if (local_20 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    *local_20 = local_res8;
    if (local_res8 != &PTR_LOOP_1467cd040) {
      *(int *)(*local_res8 + 8) = *(int *)(*local_res8 + 8) + 1;
    }
  }
  plVar1 = param_1 + 0x227;
  uVar4 = param_1[0x228] + 1;
  if (uVar4 < (ulonglong)param_1[0x228]) {
    uVar5 = uVar4;
    if ((ulonglong)param_1[0x229] >> 1 <= uVar4) goto LAB_1432da384;
  }
  else {
    if (uVar4 <= (ulonglong)param_1[0x229]) goto LAB_1432da384;
    uVar5 = (uVar4 >> 2) + uVar4;
  }
  FUN_1432cfd30(plVar1,plVar1,uVar5);
LAB_1432da384:
  param_1[0x228] = uVar4;
  puVar2 = (undefined8 *)(*plVar1 + -8 + uVar4 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = local_20;
  }
  local_28 = &PTR_PTR_1467cd8c0;
  (**(code **)(*param_1 + 0x88))(param_1,&local_28);
  if (local_res8 != &PTR_LOOP_1467cd040) {
    FUN_1432c03a0(*local_res8);
  }
  return;
}



// FUNCTION 1432da3f0 FUN_1432da3f0 body=116 status=ok
// SIG undefined FUN_1432da3f0(void)

undefined ** FUN_1432da3f0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b63144) {
    _Init_thread_header(&DAT_146b63144);
    if (DAT_146b63144 == -1) {
      _guard_xfg_dispatch_icall_nop(&DAT_1467cd908,0,0x61);
      atexit((_func_5014 *)&LAB_143ec46d0);
      _Init_thread_footer(&DAT_146b63144);
    }
  }
  return &PTR_PTR_1467cd900;
}



// FUNCTION 1432da4b0 FUN_1432da4b0 body=109 status=ok
// SIG undefined FUN_1432da4b0(void)

void FUN_1432da4b0(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar1 = *(uint *)(param_1 + 0x54);
  uVar3 = (uVar1 ^ param_2) & 0x19800000 ^ uVar1;
  *(uint *)(param_1 + 0x54) = uVar3;
  if (uVar3 != uVar1) {
    plVar4 = *(longlong **)(param_1 + 0x158);
    plVar5 = (longlong *)(param_1 + 0x148);
    if (param_1 == -0x150) {
      plVar5 = (longlong *)0x0;
    }
    while (plVar4 != plVar5) {
      plVar2 = (longlong *)plVar4[2];
      (**(code **)(*plVar4 + 8))(plVar4,0xb);
      plVar4 = plVar2;
    }
  }
  return;
}



// FUNCTION 1432da530 FUN_1432da530 body=68 status=ok
// SIG undefined FUN_1432da530(void)

void FUN_1432da530(longlong param_1,RefCountImpl *param_2)

{
  longlong lVar1;
  RefCountImpl *this;
  
  lVar1 = *(longlong *)(param_1 + 600);
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
  }
  this = *(RefCountImpl **)(lVar1 + 0x288);
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
  }
  *(RefCountImpl **)(lVar1 + 0x288) = param_2;
  return;
}



// FUNCTION 1432da580 FUN_1432da580 body=120 status=ok
// SIG undefined FUN_1432da580(void)

void FUN_1432da580(longlong param_1,float *param_2)

{
  longlong *plVar1;
  float fVar2;
  
  if (*param_2 == 0.0) {
    fVar2 = _guard_xfg_dispatch_icall_nop((1.0 / param_2[3]) / param_2[3] + 1.0);
    *param_2 = param_2[2] / (fVar2 * 2.54);
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 600) + 0x288);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,param_2);
  }
  return;
}



// FUNCTION 1432da630 FUN_1432da630 body=320 status=ok
// SIG undefined FUN_1432da630(void)

void FUN_1432da630(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  
  if ((*(int *)((longlong)param_1 + 0x5c) == 3) &&
     (cVar1 = (**(code **)(*param_1 + 0x158))(), cVar1 != '\0')) {
    (**(code **)(*param_1 + 0x180))(param_1,1);
    (**(code **)(*param_1 + 0x188))(param_1,param_2);
    (**(code **)(*param_1 + 0x180))(param_1,2);
    (**(code **)(*param_1 + 0x188))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001432da6a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x180))(param_1,3);
    return;
  }
  if (*(int *)((longlong)param_1 + 0x5c) == 1) {
    lVar2 = (**(code **)(*param_1 + 200))(param_1);
    *(undefined4 *)(lVar2 + 0x30) = 1;
    lVar2 = (**(code **)(*param_1 + 200))(param_1);
    *(undefined4 *)(lVar2 + 0x2c) = 1;
  }
  else if (*(int *)((longlong)param_1 + 0x5c) - 2U < 2) {
    lVar2 = (**(code **)(*param_1 + 200))(param_1);
    *(undefined4 *)(lVar2 + 0x30) = 0;
    lVar2 = (**(code **)(*param_1 + 200))(param_1);
    *(undefined4 *)(lVar2 + 0x2c) = 0;
  }
  lVar2 = *param_2;
  if (lVar2 != 0) {
    while( true ) {
      (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x28))
                (*(longlong **)(lVar2 + 0x18),param_1,*(undefined8 *)(lVar2 + 0x20),lVar2);
      if ((longlong *)*param_2 == (longlong *)param_2[1]) break;
      lVar2 = *(longlong *)*param_2;
      *param_2 = lVar2;
      if (lVar2 == 0) {
        return;
      }
    }
    param_2[1] = 0;
    *param_2 = 0;
  }
  return;
}



// FUNCTION 1432da780 FUN_1432da780 body=135 status=ok
// SIG undefined FUN_1432da780(void)

void FUN_1432da780(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  
  cVar4 = (**(code **)(*(longlong *)*param_2 + 0x18))();
  if ((cVar4 != '\0') || ((*(uint *)(param_1 + 0xb) & 8) != 0)) {
    uVar5 = (**(code **)(*param_1 + 200))(param_1);
    param_1 = param_1 + 0x1f5;
    puVar6 = (undefined4 *)FUN_143323e40(param_1);
    if (puVar6 == (undefined4 *)0x0) {
      FUN_143324080(uVar5,1);
      puVar6 = (undefined4 *)FUN_143323e40(param_1);
    }
    uVar1 = *(undefined4 *)((longlong)param_2 + 4);
    uVar2 = *(undefined4 *)(param_2 + 1);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    *puVar6 = *(undefined4 *)param_2;
    puVar6[1] = uVar1;
    puVar6[2] = uVar2;
    puVar6[3] = uVar3;
    FUN_143323e80(param_1);
    FUN_143324080(uVar5,0);
  }
  return;
}



// FUNCTION 1432da810 Draw body=33 status=ok
// SIG undefined Draw(void)

void Scaleform::Render::HAL::Draw(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  (**(code **)(*param_1 + 0x88))(param_1,&local_18);
  return;
}



// FUNCTION 1432da840 FUN_1432da840 body=797 status=ok
// SIG undefined FUN_1432da840(void)

void FUN_1432da840(longlong *param_1,RefCountImpl *param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  char cVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined4 local_res8 [2];
  
  if ((*(uint *)(param_1 + 0xb) & 8) == 0) {
    return;
  }
  plVar10 = (longlong *)(**(code **)(*param_1 + 0x118))();
  (**(code **)(*plVar10 + 8))(plVar10,6,"HAL::PushMask_BeginSubmit");
  lVar12 = param_1[0x36] * 0x340;
  lVar6 = param_1[0x35];
  cVar9 = (**(code **)(*param_1 + 0x2c8))(param_1);
  if (cVar9 == '\0') {
    *(undefined1 *)(lVar12 + -0x10 + lVar6) = 0;
    plVar10 = (longlong *)(**(code **)(*param_1 + 0xa8))(param_1);
    if (plVar10 == (longlong *)0x0) {
      return;
    }
    lVar7 = *(longlong *)(lVar12 + -0x340 + lVar6);
    if (lVar7 == 0) {
      return;
    }
    plVar11 = (longlong *)(**(code **)(*plVar10 + 0x38))(plVar10,lVar7 + 0x28,1);
    plVar10 = *(longlong **)(*(longlong *)(lVar12 + -0x340 + lVar6) + 0x20);
    if ((plVar10 != (longlong *)0x0) &&
       (cVar9 = (**(code **)(*plVar10 + 0x10))(plVar10,plVar11), cVar9 != '\0')) {
      local_res8[0] = 0;
      (**(code **)(*param_1 + 0x290))(param_1,plVar10,1,local_res8);
      cVar9 = (**(code **)(*param_1 + 0x2c8))(param_1);
      if (cVar9 != '\0') {
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
        goto LAB_1432da97c;
      }
      if (DAT_146b63148 == '\0') {
        DAT_146b63148 = '\x01';
      }
    }
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  else {
LAB_1432da97c:
    if ((int)param_1[0x41] != 0) {
      (**(code **)(*param_1 + 0x308))(param_1,0);
      *(undefined4 *)(param_1 + 0x41) = 0;
    }
    uVar5 = *(uint *)(lVar12 + -0x2c + lVar6);
    uVar14 = *(uint *)(param_1 + 0xb) >> 5;
    if ((((uVar5 != 0) && ((ulonglong)uVar5 < *(ulonglong *)(lVar12 + -0x20 + lVar6))) &&
        ((uVar14 & 1) != 0)) &&
       ((*(char *)(lVar12 + -0xf + lVar6) != '\0' && (*(char *)(lVar12 + -0xe + lVar6) != '\0')))) {
      (**(code **)(*param_1 + 0x2c0))(param_1,3);
      lVar7 = *(longlong *)
               ((ulonglong)*(uint *)(lVar12 + -0x2c + lVar6) * 0x20 +
               *(longlong *)(lVar12 + -0x28 + lVar6));
      (**(code **)(*param_1 + 0x2d8))
                (param_1,*(undefined8 *)(lVar7 + 0x18),*(undefined8 *)(lVar7 + 0x20));
    }
    FUN_1432ddc30(lVar12 + lVar6 + -0x28,*(int *)(lVar12 + -0x2c + lVar6) + 1);
    puVar13 = (undefined8 *)
              ((ulonglong)*(uint *)(lVar12 + -0x2c + lVar6) * 0x20 +
              *(longlong *)(lVar12 + lVar6 + -0x28));
    if (param_2 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(param_2);
    }
    if ((RefCountImpl *)*puVar13 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar13);
    }
    *puVar13 = param_2;
    *(byte *)(puVar13 + 1) = (byte)uVar14 & 1;
    fVar2 = *(float *)((longlong)param_1 + 0x1194);
    fVar3 = *(float *)(param_1 + 0x233);
    fVar4 = *(float *)((longlong)param_1 + 0x119c);
    *(int *)((longlong)puVar13 + 0xc) = (int)*(float *)(param_1 + 0x232);
    *(int *)(puVar13 + 2) = (int)fVar2;
    *(int *)((longlong)puVar13 + 0x14) = (int)fVar3;
    *(int *)(puVar13 + 3) = (int)fVar4;
    piVar1 = (int *)(lVar12 + -0x2c + lVar6);
    *piVar1 = *piVar1 + 1;
    *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) | 0x40;
    if ((*(int *)(lVar12 + -0x2c + lVar6) == 1) && ((uVar14 & 1) != 0)) {
      uVar8 = 2;
      if (*(char *)(lVar12 + -0xf + lVar6) == '\0') {
        uVar8 = 7;
      }
      (**(code **)(*param_1 + 0x2c0))(param_1,uVar8);
      (**(code **)(*param_1 + 0x2d8))
                (param_1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
    }
    if (*(char *)(lVar12 + -0xf + lVar6) == '\0') {
      if ((*(char *)(lVar12 + -0xd + lVar6) != '\0') &&
         ((**(code **)(*param_1 + 0x2c0))(param_1,7), DAT_146b6314a == '\0')) {
        DAT_146b6314a = 1 < *(uint *)(lVar12 + -0x2c + lVar6);
      }
    }
    else if (*(char *)(lVar12 + -0xe + lVar6) == '\0') {
      (**(code **)(*param_1 + 0x2c0))(param_1,2,1);
      if (DAT_146b63149 == '\0') {
        DAT_146b63149 = 1 < *(uint *)(lVar12 + -0x2c + lVar6);
      }
    }
    else {
      (**(code **)(*param_1 + 0x2c0))(param_1,4,*(int *)(lVar12 + -0x2c + lVar6) + -1);
    }
    *(int *)((longlong)param_1 + 0x27c) = *(int *)((longlong)param_1 + 0x27c) + 1;
  }
  return;
}



// FUNCTION 1432dab70 FUN_1432dab70 body=246 status=ok
// SIG undefined FUN_1432dab70(void)

void FUN_1432dab70(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  if (((byte)(int)param_1[0xb] & 0x48) != 0x48) {
    return;
  }
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x118))();
  *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) & 0xffffffbf;
  lVar7 = param_1[0x35] + -0x340 + param_1[0x36] * 0x340;
  cVar1 = *(char *)(*(longlong *)
                     (*(longlong *)(lVar7 + 800) * 0x20 + -0x20 + *(longlong *)(lVar7 + 0x318)) +
                   0x30);
  if (*(char *)(lVar7 + 0x331) == '\0') {
    if (*(char *)(lVar7 + 0x333) == '\0') goto LAB_1432dac26;
    lVar4 = *param_1;
    uVar5 = 8;
    uVar6 = 0;
    if (cVar1 != '\0') {
      uVar5 = 9;
      uVar6 = 0;
    }
  }
  else {
    lVar4 = *param_1;
    uVar6 = *(undefined4 *)(lVar7 + 0x314);
    if (cVar1 == '\0') {
      uVar5 = 5;
    }
    else {
      uVar5 = 6;
    }
  }
  (**(code **)(lVar4 + 0x2c0))(param_1,uVar5,uVar6);
LAB_1432dac26:
  iVar2 = *(int *)((longlong)param_1 + 0x204);
  if (iVar2 != (int)param_1[0x41]) {
    (**(code **)(*param_1 + 0x308))(param_1,iVar2);
    *(int *)(param_1 + 0x41) = iVar2;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3,6);
  return;
}



// FUNCTION 1432dac70 FUN_1432dac70 body=174 status=ok
// SIG undefined FUN_1432dac70(void)

void FUN_1432dac70(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if ((*(uint *)(param_1 + 0xb) & 8) == 0) {
    return;
  }
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x118))();
  (**(code **)(*plVar2 + 8))(plVar2,7,"Scaleform::Render::HAL::PopMask");
  cVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
  if (cVar1 == '\0') goto LAB_1432dad05;
  lVar4 = param_1[0x36] * 0x340 + param_1[0x35];
  *(int *)(lVar4 + -0x2c) = *(int *)(lVar4 + -0x2c) + -1;
  if (*(char *)(lVar4 + -0xf) == '\0') {
    if (*(char *)(lVar4 + -0xd) == '\0') goto LAB_1432dad05;
    lVar3 = *param_1;
LAB_1432dacf8:
    uVar5 = 1;
  }
  else {
    lVar3 = *param_1;
    if (*(int *)(lVar4 + -0x2c) == 0) goto LAB_1432dacf8;
    uVar5 = 5;
  }
  (**(code **)(lVar3 + 0x2c0))(param_1,uVar5);
LAB_1432dad05:
  (**(code **)(*plVar2 + 0x10))(plVar2,7);
  return;
}



// FUNCTION 1432dad30 FUN_1432dad30 body=303 status=ok
// SIG undefined FUN_1432dad30(void)

/* WARNING: Removing unreachable block (ram,0x0001432dae2f) */
/* WARNING: Removing unreachable block (ram,0x0001432dadcd) */
/* WARNING: Removing unreachable block (ram,0x0001432dade4) */
/* WARNING: Removing unreachable block (ram,0x0001432dae3f) */

void FUN_1432dad30(longlong param_1,RefCountImpl *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  if ((*(uint *)(param_1 + 0x58) & 8) != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x48);
    Scaleform::RefCountImpl::AddRef(param_2);
    FUN_14204fb20(param_1 + 0x160,param_1 + 0x160,*(longlong *)(param_1 + 0x168) + 1);
    puVar2 = (undefined8 *)
             (*(longlong *)(param_1 + 0x160) + -0x20 + *(longlong *)(param_1 + 0x168) * 0x20);
    if (puVar2 != (undefined8 *)0x0) {
      if (param_2 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(param_2);
      }
      *puVar2 = param_2;
      puVar2[1] = 0;
      puVar2[2] = 0;
      *(undefined1 *)((longlong)puVar2 + 0x19) = 0;
      *(undefined1 *)(puVar2 + 3) = 0;
    }
    FUN_1432dafc0(param_1,uVar1,0,*(uint *)(param_1 + 0x58) >> 4 & 0xffffff01);
    if (param_2 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(param_2);
    }
  }
  return;
}



// FUNCTION 1432dae70 FUN_1432dae70 body=326 status=ok
// SIG undefined FUN_1432dae70(void)

void FUN_1432dae70(longlong param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  RefCountImpl *this;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  if ((*(uint *)(param_1 + 0x58) & 8) != 0) {
    plVar2 = (longlong *)(param_1 + 0x160);
    lVar8 = *(longlong *)(param_1 + 0x168) * 0x20 + *plVar2;
    if (*(RefCountImpl **)(lVar8 + -0x20) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(lVar8 + -0x20));
    }
    this = *(RefCountImpl **)(lVar8 + -0x20);
    if (*(longlong **)(lVar8 + -0x18) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar8 + -0x18) + 8))();
    }
    plVar3 = *(longlong **)(lVar8 + -0x18);
    if (*(longlong **)(lVar8 + -0x10) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar8 + -0x10) + 8))();
    }
    plVar4 = *(longlong **)(lVar8 + -0x10);
    uVar5 = *(ulonglong *)(param_1 + 0x168);
    uVar1 = uVar5 - 1;
    FUN_14204fb20(plVar2,plVar2,uVar1);
    if (uVar5 < uVar1) {
      puVar6 = (undefined8 *)(uVar5 * 0x20 + *plVar2);
      for (lVar8 = uVar1 - uVar5; lVar8 != 0; lVar8 = lVar8 + -1) {
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6[2] = 0;
        }
        puVar6 = puVar6 + 4;
      }
    }
    if (*(longlong *)(param_1 + 0x168) == 0) {
      uVar7 = 1;
    }
    else {
      uVar7 = *(undefined4 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x168) * 0x20 + -0x20 + *plVar2) + 0x48);
    }
    FUN_1432dafc0(param_1,uVar7,0,*(uint *)(param_1 + 0x58) >> 4 & 0xffffff01);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (this != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(this);
      return;
    }
  }
  return;
}



// FUNCTION 1432dafc0 FUN_1432dafc0 body=220 status=ok
// SIG undefined FUN_1432dafc0(void)

void FUN_1432dafc0(longlong *param_1,uint param_2,char param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  
  if (((*(uint *)((longlong)param_1 + 0x20c) == param_2) && ((char)param_1[0x42] == param_3)) &&
     (*(char *)((longlong)param_1 + 0x211) == param_4)) {
    return;
  }
  uVar2 = 0;
  if (param_2 < 0x14) {
    uVar2 = param_2;
  }
  iVar1 = (**(code **)(param_1[0x51] + 0x40))(param_1 + 0x51,uVar2);
  *(uint *)((longlong)param_1 + 0x214) = *(uint *)((longlong)param_1 + 0x214) & 0xfffffffc;
  if (iVar1 - 3U < 2) {
    *(uint *)((longlong)param_1 + 0x214) = *(uint *)((longlong)param_1 + 0x214) | 1;
  }
  else if (iVar1 == 10) {
    *(uint *)((longlong)param_1 + 0x214) = *(uint *)((longlong)param_1 + 0x214) | 2;
    *(uint *)((longlong)param_1 + 0x214) = *(uint *)((longlong)param_1 + 0x214) | 0x20;
    goto LAB_1432db060;
  }
  if (iVar1 < 2) {
    *(uint *)((longlong)param_1 + 0x214) = *(uint *)((longlong)param_1 + 0x214) & 0xffffffdf;
  }
  else {
    *(uint *)((longlong)param_1 + 0x214) = *(uint *)((longlong)param_1 + 0x214) | 0x20;
  }
LAB_1432db060:
  *(int *)((longlong)param_1 + 0x20c) = iVar1;
  *(char *)(param_1 + 0x42) = param_3;
  *(char *)((longlong)param_1 + 0x211) = param_4;
  (**(code **)(*param_1 + 0x298))(param_1,iVar1,param_3,param_4);
  return;
}



// FUNCTION 1432db0b0 FUN_1432db0b0 body=465 status=ok
// SIG undefined FUN_1432db0b0(void)

void FUN_1432db0b0(longlong *param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  longlong local_28 [2];
  
  if ((*(uint *)(param_1 + 0xb) & 8) != 0) {
    if (*(int *)(param_2 + 0x18) == 0) {
      if (param_3 == '\0') {
        if (*(int *)((longlong)param_1 + 0x5c) == 1) {
          lVar3 = (**(code **)(*param_1 + 200))();
          *(undefined4 *)(lVar3 + 0x2c) = 0;
        }
        if (*(int *)((longlong)param_1 + 0x1154) < 0) {
          return;
        }
        *(int *)((longlong)param_1 + 0x1154) = *(int *)((longlong)param_1 + 0x1154) + 1;
        return;
      }
    }
    else if (param_3 == '\0') {
      lVar3 = 2;
      Scaleform::Render::CacheablePrimitive::GetCacheResults(param_2,local_28,2);
      uVar4 = 0;
      plVar5 = local_28;
      bVar6 = true;
      while( true ) {
        if ((longlong *)*plVar5 == (longlong *)0x0) {
          bVar6 = uVar4 != 0;
          goto LAB_1432db194;
        }
        iVar2 = (**(code **)(*(longlong *)*plVar5 + 0x20))();
        if (((iVar2 == 3) || (iVar2 = (**(code **)(*(longlong *)*plVar5 + 0x20))(), iVar2 == 2)) ||
           (*(longlong *)(*(longlong *)(*plVar5 + 0x20) + 0x10) != param_2)) break;
        uVar4 = uVar4 + 1;
        plVar5 = plVar5 + 1;
        if (1 < uVar4) {
LAB_1432db194:
          *(int *)((longlong)param_1 + 0x1154) = *(int *)((longlong)param_1 + 0x1154) + 1;
          if (!bVar6) {
            FUN_1432d4040(param_2,0,0,0);
            return;
          }
          if (-1 < (int)param_1[0x22b]) {
            return;
          }
          plVar5 = local_28;
          do {
            plVar1 = (longlong *)*plVar5;
            if (plVar1 != (longlong *)0x0) {
              (**(code **)(*plVar1 + 0x28))(plVar1,1);
            }
            plVar5 = plVar5 + 1;
            lVar3 = lVar3 + -1;
          } while (lVar3 != 0);
          lVar3 = (**(code **)(*param_1 + 200))(param_1);
          *(undefined4 *)(lVar3 + 0x2c) = 1;
          *(undefined4 *)(param_1 + 0x22b) = *(undefined4 *)((longlong)param_1 + 0x1154);
          return;
        }
      }
      bVar6 = false;
      goto LAB_1432db194;
    }
    if (-1 < *(int *)((longlong)param_1 + 0x1154)) {
      if (*(int *)((longlong)param_1 + 0x1154) == (int)param_1[0x22b]) {
        *(undefined4 *)(param_1 + 0x22b) = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x5c) != 1) {
          lVar3 = (**(code **)(*param_1 + 200))();
          *(undefined4 *)(lVar3 + 0x2c) = 0;
          *(int *)((longlong)param_1 + 0x1154) = *(int *)((longlong)param_1 + 0x1154) + -1;
          return;
        }
        lVar3 = (**(code **)(*param_1 + 200))();
        *(undefined4 *)(lVar3 + 0x2c) = 1;
      }
      *(int *)((longlong)param_1 + 0x1154) = *(int *)((longlong)param_1 + 0x1154) + -1;
      return;
    }
  }
  return;
}



// FUNCTION 1432db290 FUN_1432db290 body=927 status=ok
// SIG undefined FUN_1432db290(void)

void FUN_1432db290(longlong *param_1,RefCountImpl *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  float *pfVar9;
  undefined4 local_res8 [2];
  undefined4 local_res18;
  undefined4 local_res1c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  RefCountImpl *local_68;
  longlong *local_60;
  
  if ((*(uint *)(param_1 + 0xb) & 8) == 0) {
    return;
  }
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x118))();
  (**(code **)(*plVar6 + 8))(plVar6,0xc,"HAL::PushFilters");
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
  }
  local_60 = (longlong *)0x0;
  local_68 = param_2;
  cVar1 = (**(code **)(*param_1 + 0x240))(param_1,param_2);
  if ((cVar1 == '\0') || ((*(uint *)(param_1 + 0xb) & 0x300) != 0)) {
    FUN_1432dde80(param_1 + 0x2f,param_1 + 0x2f,param_1[0x30] + 1);
    puVar8 = (undefined8 *)(param_1[0x2f] + -0x10 + param_1[0x30] * 0x10);
    if (puVar8 != (undefined8 *)0x0) {
      if (param_2 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(param_2);
      }
      *puVar8 = param_2;
      puVar8[1] = 0;
    }
    goto LAB_1432db60a;
  }
  (**(code **)(*param_1 + 0x2c0))(param_1,1);
  (**(code **)(*param_1 + 0x308))(param_1,0);
  if (*(int *)(param_2 + 0x18) == 0) {
    pfVar9 = (float *)(((ulonglong)
                        (byte)(&DAT_1467ccff4)
                              [(ulonglong)
                               (*(byte *)(*(longlong *)**(undefined8 **)(param_2 + 0x30) + 0xf) &
                               0xf) * 5] + 1) * 0x10 +
                      *(longlong *)**(undefined8 **)(param_2 + 0x30));
    local_res18 = (undefined4)(longlong)(*pfVar9 + 0.5);
    local_res1c = (undefined4)(longlong)(pfVar9[5] + 0.5);
    plVar6 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,&local_res18,0);
    local_60 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      iVar2 = FUN_1432dcbf0();
      iVar3 = FUN_1432dcbf0();
      iVar4 = FUN_1432dcbf0();
      iVar5 = FUN_1432dcbf0();
      local_78 = (float)iVar2;
      local_res8[0] = 0;
      local_74 = (float)iVar3;
      local_70 = (float)iVar4;
      local_6c = (float)iVar5;
      (**(code **)(*param_1 + 0x20))(param_1,plVar6,8,&local_78,local_res8);
      FUN_1432dafc0(param_1,1,0,1);
      goto LAB_1432db586;
    }
    FUN_1432dde80(param_1 + 0x2f,param_1 + 0x2f,param_1[0x30] + 1);
    puVar8 = (undefined8 *)(param_1[0x2f] + -0x10 + param_1[0x30] * 0x10);
    if (puVar8 != (undefined8 *)0x0) {
      Scaleform::RefCountImpl::AddRef(param_2);
      *puVar8 = param_2;
      puVar8[1] = 0;
    }
  }
  else {
    *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) | 0x100;
    *(int *)(param_1 + 0x22a) = (int)param_1[0x30];
    lVar7 = (**(code **)(*param_1 + 200))(param_1);
    *(undefined4 *)(lVar7 + 0x30) = 1;
LAB_1432db586:
    *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) | 0x80;
    FUN_1432dde80(param_1 + 0x2f,param_1 + 0x2f,param_1[0x30] + 1);
    puVar8 = (undefined8 *)(param_1[0x2f] + -0x10 + param_1[0x30] * 0x10);
    plVar6 = local_60;
    if (puVar8 != (undefined8 *)0x0) {
      Scaleform::RefCountImpl::AddRef(param_2);
      plVar6 = local_60;
      *puVar8 = param_2;
      if (local_60 != (longlong *)0x0) {
        (**(code **)(*local_60 + 8))(local_60);
      }
      puVar8[1] = plVar6;
    }
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
LAB_1432db60a:
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(param_2);
  }
  return;
}



// FUNCTION 1432db640 FUN_1432db640 body=427 status=ok
// SIG undefined FUN_1432db640(void)

void FUN_1432db640(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  RefCountImpl *local_38;
  longlong *plStack_30;
  RefCountImpl *local_28;
  longlong *local_20;
  RefCountImpl *local_18;
  longlong *local_10;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x118))();
  cVar1 = (**(code **)(*param_1 + 0x240))
                    (param_1,*(undefined8 *)(param_1[0x2f] + -0x10 + param_1[0x30] * 0x10));
  if (cVar1 == '\0') {
    FUN_1432dd7a0(param_1 + 0x2f,&local_28);
    if (local_20 != (longlong *)0x0) {
      (**(code **)(*local_20 + 0x10))();
    }
  }
  else {
    local_38 = (RefCountImpl *)0x0;
    plStack_30 = (longlong *)0x0;
    puVar3 = (undefined8 *)FUN_1432dd7a0(param_1 + 0x2f,&local_18);
    if ((RefCountImpl *)*puVar3 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef((RefCountImpl *)*puVar3);
    }
    if (local_38 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(local_38);
    }
    local_38 = (RefCountImpl *)*puVar3;
    if ((longlong *)puVar3[1] != (longlong *)0x0) {
      (**(code **)(*(longlong *)puVar3[1] + 8))();
    }
    if (plStack_30 != (longlong *)0x0) {
      (**(code **)(*plStack_30 + 0x10))();
    }
    plStack_30 = (longlong *)puVar3[1];
    if (local_10 != (longlong *)0x0) {
      (**(code **)(*local_10 + 0x10))();
    }
    if (local_18 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(local_18);
    }
    if (((*(uint *)(param_1 + 0xb) >> 9 & 1) == 0) &&
       (((*(uint *)(param_1 + 0xb) >> 8 & 1) == 0 || ((int)param_1[0x30] <= (int)param_1[0x22a]))))
    {
      *(undefined4 *)(param_1 + 0x22a) = 0xffffffff;
      if ((*(uint *)(param_1 + 0xb) & 0x300) == 0) {
        (**(code **)(*param_1 + 0x2f0))(param_1,&local_38);
      }
      else {
        (**(code **)(*param_1 + 0x2f8))(param_1,local_38);
        lVar4 = (**(code **)(*param_1 + 200))(param_1);
        *(undefined4 *)(lVar4 + 0x30) = 0;
        *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) & 0xfffffcff;
      }
      if (param_1[0x30] == 0) {
        *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) & 0xffffff7f;
      }
    }
    local_28 = local_38;
    if (plStack_30 != (longlong *)0x0) {
      (**(code **)(*plStack_30 + 0x10))();
      local_28 = local_38;
    }
  }
  if (local_28 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_28);
  }
  (**(code **)(*plVar2 + 0x10))(plVar2,0xc);
  return;
}



// FUNCTION 1432db890 FUN_1432db890 body=138 status=ok
// SIG undefined FUN_1432db890(void)

void FUN_1432db890(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  FUN_1432ddd10(param_1 + 0x1d8,*(longlong *)(param_1 + 0x1e0) + -1);
  if (*(longlong *)(param_1 + 0x1e0) == 0) {
    puVar3 = (undefined8 *)&DAT_146b63020;
  }
  else {
    puVar3 = (undefined8 *)
             (*(longlong *)(param_1 + 0x1d8) + -0x30 + *(longlong *)(param_1 + 0x1e0) * 0x30);
  }
  lVar1 = *(longlong *)(param_1 + 600);
  uVar2 = puVar3[1];
  *(undefined8 *)(lVar1 + 0x30) = *puVar3;
  *(undefined8 *)(lVar1 + 0x38) = uVar2;
  uVar2 = puVar3[3];
  *(undefined8 *)(lVar1 + 0x40) = puVar3[2];
  *(undefined8 *)(lVar1 + 0x48) = uVar2;
  uVar2 = puVar3[5];
  *(undefined8 *)(lVar1 + 0x50) = puVar3[4];
  *(undefined8 *)(lVar1 + 0x58) = uVar2;
  *(undefined1 *)(*(longlong *)(param_1 + 600) + 0x280) = 1;
  return;
}



// FUNCTION 1432db920 FUN_1432db920 body=148 status=ok
// SIG undefined FUN_1432db920(void)

void FUN_1432db920(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  FUN_1432dddc0(param_1 + 400,*(longlong *)(param_1 + 0x198) + -1);
  if (*(longlong *)(param_1 + 0x198) == 0) {
    puVar3 = (undefined8 *)&DAT_1464fade0;
  }
  else {
    puVar3 = (undefined8 *)
             (*(longlong *)(param_1 + 400) + -0x40 + *(longlong *)(param_1 + 0x198) * 0x40);
  }
  lVar1 = *(longlong *)(param_1 + 600);
  uVar2 = puVar3[1];
  *(undefined8 *)(lVar1 + 0x60) = *puVar3;
  *(undefined8 *)(lVar1 + 0x68) = uVar2;
  uVar2 = puVar3[3];
  *(undefined8 *)(lVar1 + 0x70) = puVar3[2];
  *(undefined8 *)(lVar1 + 0x78) = uVar2;
  uVar2 = puVar3[5];
  *(undefined8 *)(lVar1 + 0x80) = puVar3[4];
  *(undefined8 *)(lVar1 + 0x88) = uVar2;
  uVar2 = puVar3[7];
  *(undefined8 *)(lVar1 + 0x90) = puVar3[6];
  *(undefined8 *)(lVar1 + 0x98) = uVar2;
  *(undefined1 *)(*(longlong *)(param_1 + 600) + 0x280) = 1;
  return;
}



// FUNCTION 1432db9c0 FUN_1432db9c0 body=121 status=ok
// SIG undefined FUN_1432db9c0(void)

void FUN_1432db9c0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  plVar1 = (longlong *)(param_1 + 0x1c0);
  uVar3 = *(longlong *)(param_1 + 0x1c8) + 1;
  if (uVar3 < *(ulonglong *)(param_1 + 0x1c8)) {
    uVar4 = uVar3;
    if (*(ulonglong *)(param_1 + 0x1d0) >> 1 <= uVar3) goto LAB_1432dba12;
  }
  else {
    if (uVar3 <= *(ulonglong *)(param_1 + 0x1d0)) goto LAB_1432dba12;
    uVar4 = (uVar3 >> 2) + uVar3;
  }
  FUN_1432cfc80(plVar1,plVar1,uVar4);
LAB_1432dba12:
  *(ulonglong *)(param_1 + 0x1c8) = uVar3;
  puVar2 = (undefined8 *)(*plVar1 + -8 + uVar3 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = param_2;
  }
  return;
}



// FUNCTION 1432dba60 FUN_1432dba60 body=81 status=ok
// SIG undefined FUN_1432dba60(void)

undefined8 FUN_1432dba60(undefined8 param_1,longlong *param_2)

{
  undefined4 uVar1;
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = (**(code **)(*param_2 + 8))(param_2);
    switch(uVar1) {
    case 0:
    case 1:
    case 2:
    case 6:
      return 10;
    case 3:
    case 4:
    case 5:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0x12:
    case 0x14:
    case 0x19:
      return 6;
    case 0x1a:
      return 2;
    }
  }
  return 0;
}



// FUNCTION 1432dbbf0 FUN_1432dbbf0 body=86 status=ok
// SIG undefined FUN_1432dbbf0(void)

void FUN_1432dbbf0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x158);
  plVar3 = (longlong *)(param_1 + 0x148);
  if (param_1 == -0x150) {
    plVar3 = (longlong *)0x0;
  }
  while (plVar2 != plVar3) {
    plVar1 = (longlong *)plVar2[2];
    (**(code **)(*plVar2 + 8))(plVar2,param_2);
    plVar2 = plVar1;
  }
  return;
}



// FUNCTION 1432dbc60 checkState body=11 status=ok
// SIG undefined checkState(void)

undefined4 Scaleform::Render::HAL::checkState(longlong param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x58) & param_2;
  return CONCAT31((int3)(uVar1 >> 8),uVar1 == param_2);
}



// FUNCTION 1432dbc80 FUN_1432dbc80 body=828 status=ok
// SIG undefined FUN_1432dbc80(void)

void FUN_1432dbc80(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  byte bVar8;
  longlong *plVar9;
  char cStackX_b;
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  float local_70;
  float local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58 [48];
  
  if ((*(uint *)(param_1 + 0xb) & 2) != 0) {
    plVar5 = (longlong *)param_1[0x2b];
    plVar9 = param_1 + 0x29;
    if (param_1 == (longlong *)0xfffffffffffffeb0) {
      plVar9 = (longlong *)0x0;
    }
    while (plVar5 != plVar9) {
      plVar1 = (longlong *)plVar5[2];
      (**(code **)(*plVar5 + 8))(plVar5,8);
      plVar5 = plVar1;
    }
    plVar5 = (longlong *)(**(code **)(*param_1 + 0x118))(param_1);
    (**(code **)(*plVar5 + 8))(plVar5,4,"HAL::beginDisplay");
    *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) | 8;
    lVar3 = param_2[2];
    *param_2 = param_1[0x225];
    param_1[0x225] = (longlong)param_2;
    if ((*(uint *)(param_1 + 0xb) & 4) == 0) {
      cVar4 = (**(code **)(*param_1 + 0x78))(param_1);
      if (cVar4 == '\0') {
        if (DAT_146b6314b == '\0') {
          DAT_146b6314b = '\x01';
        }
        *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) & 0xfffffff7;
        return;
      }
      *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) | 0x400;
    }
    bVar8 = (byte)(*(uint *)((longlong)param_2 + 0x3c) >> 1) & 1;
    *(byte *)(param_1 + 0x42) = bVar8;
    (**(code **)(*param_1 + 0x298))
              (param_1,*(undefined4 *)((longlong)param_1 + 0x20c),bVar8,
               *(undefined1 *)((longlong)param_1 + 0x211));
    (**(code **)(*param_1 + 0x2e0))(param_1);
    *(int *)(param_1 + 0x234) = (int)param_2[10];
    *(undefined4 *)((longlong)param_1 + 0x11a4) = *(undefined4 *)((longlong)param_2 + 0x54);
    *(int *)(param_1 + 0x235) = (int)param_2[0xb];
    *(undefined4 *)((longlong)param_1 + 0x11ac) = *(undefined4 *)((longlong)param_2 + 0x5c);
    *(int *)(param_1 + 0x236) = (int)param_2[0xc];
    *(undefined4 *)((longlong)param_1 + 0x11b4) = *(undefined4 *)((longlong)param_2 + 100);
    *(int *)(param_1 + 0x237) = (int)param_2[0xd];
    *(undefined4 *)((longlong)param_1 + 0x11bc) = *(undefined4 *)((longlong)param_2 + 0x6c);
    puVar6 = (undefined8 *)
             (**(code **)(*(longlong *)param_1[0x4b] + 0x28))
                       ((longlong *)param_1[0x4b],local_58,(longlong)param_2 + 0x14);
    uVar2 = puVar6[1];
    *(undefined8 *)((longlong)param_1 + 0x115c) = *puVar6;
    *(undefined8 *)((longlong)param_1 + 0x1164) = uVar2;
    uVar2 = puVar6[3];
    *(undefined8 *)((longlong)param_1 + 0x116c) = puVar6[2];
    *(undefined8 *)((longlong)param_1 + 0x1174) = uVar2;
    *(undefined8 *)((longlong)param_1 + 0x117c) = puVar6[4];
    local_90 = 0;
    uStack_88 = 0;
    *(undefined4 *)((longlong)param_1 + 0x1184) = *(undefined4 *)(puVar6 + 5);
    cVar4 = FUN_1432dcab0((undefined8 *)((longlong)param_1 + 0x115c),&local_90,0);
    if (cVar4 == '\0') {
      *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) & 0xffffffdf;
    }
    else {
      *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) | 0x20;
    }
    *(float *)(param_1 + 0x232) = (float)(int)local_90;
    *(float *)((longlong)param_1 + 0x1194) = (float)local_90._4_4_;
    *(float *)(param_1 + 0x233) = (float)(int)uStack_88;
    *(float *)((longlong)param_1 + 0x119c) = (float)uStack_88._4_4_;
    (**(code **)(*param_1 + 0x260))(param_1);
    if (((char)param_2[8] != '\0') && ((*(uint *)((longlong)param_1 + 0x54) & 0x400000) == 0)) {
      local_98 = (undefined4)(longlong)(*(float *)(param_1 + 0x233) - *(float *)(param_1 + 0x232));
      local_94 = (undefined4)
                 (longlong)
                 (*(float *)((longlong)param_1 + 0x119c) - *(float *)((longlong)param_1 + 0x1194));
      lVar7 = (**(code **)(*param_1 + 0x10))(param_1,&local_98,1);
      if ((longlong *)param_1[0x3e] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x3e] + 0x10))();
      }
      param_1[0x3e] = lVar7;
      local_70 = *(float *)(param_1 + 0x233) - *(float *)(param_1 + 0x232);
      local_6c = *(float *)((longlong)param_1 + 0x119c) - *(float *)((longlong)param_1 + 0x1194);
      local_78 = 0;
      local_res18[0] = 0;
      (**(code **)(*param_1 + 0x20))(param_1,lVar7,8,&local_78,local_res18);
    }
    cStackX_b = (char)((uint)(int)lVar3 >> 0x18);
    if ((cStackX_b != '\0') && ((*(uint *)((longlong)param_2 + 0x3c) & 0x200) == 0)) {
      local_60 = *(undefined4 *)((longlong)param_2 + 0x24);
      local_5c = (undefined4)param_2[5];
      local_68 = 0;
      local_res20[0] = (int)lVar3;
      (**(code **)(*param_1 + 0x90))(param_1,&local_68,local_res20,1);
    }
  }
  return;
}



// FUNCTION 1432dbfd0 FUN_1432dbfd0 body=817 status=ok
// SIG undefined FUN_1432dbfd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432dbfd0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  
  if ((*(uint *)(param_1 + 0xb) & 8) != 0) {
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x118))();
    (**(code **)(*param_1 + 0x2e8))(param_1);
    if ((param_1[0x36] != 0) &&
       (lVar1 = param_1[0x35],
       *(longlong *)(param_1[0x36] * 0x340 + -0x340 + lVar1) == param_1[0x3e])) {
      lVar9 = param_1[0x36] * 0x340;
      (**(code **)(*param_1 + 0x28))(param_1,0);
      FUN_1432dafc0(param_1,1,1);
      lVar5 = (**(code **)(**(longlong **)(lVar9 + -0x340 + lVar1) + 0x18))();
      local_res8 = *(undefined4 *)(lVar5 + 0x38);
      local_resc = *(undefined4 *)(lVar5 + 0x3c);
      puVar6 = (undefined4 *)
               (**(code **)(*(longlong *)param_1[0x4b] + 8))((longlong *)param_1[0x4b],&local_res8);
      local_68 = *puVar6;
      local_64 = puVar6[1];
      local_60 = puVar6[2];
      local_5c = puVar6[3];
      local_58 = puVar6[4];
      local_54 = puVar6[5];
      local_50 = puVar6[6];
      local_4c = puVar6[7];
      local_88 = _DAT_14621c810;
      uStack_80 = _DAT_14621c818;
      local_78 = _DAT_14621c820;
      uStack_70 = _DAT_14621c828;
      lVar2 = *(longlong *)(lVar9 + -0x340 + lVar1);
      fVar13 = (float)(*(int *)(lVar2 + 0x38) - *(int *)(lVar2 + 0x30)) /
               (float)*(uint *)(lVar5 + 0x38);
      fVar14 = (float)(*(int *)(lVar2 + 0x3c) - *(int *)(lVar2 + 0x34)) /
               (float)*(uint *)(lVar5 + 0x3c);
      fVar10 = (float)(**(code **)(*param_1 + 0x140))(param_1);
      fVar11 = uStack_80._4_4_;
      fVar12 = uStack_70._4_4_;
      if (-fVar10 < 0.0) {
        fVar12 = uStack_70._4_4_ + -1.0;
        fVar11 = uStack_80._4_4_ + 0.0;
      }
      local_88 = CONCAT44(local_88._4_4_ * fVar13,(float)local_88 * fVar13);
      local_78._0_4_ = (float)local_78 * fVar14;
      uStack_70._0_4_ = (float)uStack_70 * fVar14;
      local_78._4_4_ = local_78._4_4_ * fVar14;
      uStack_70._4_4_ = fVar12 * fVar14;
      uStack_80 = CONCAT44(fVar11 * fVar13,(float)uStack_80 * fVar13);
      fVar11 = (float)(**(code **)(*param_1 + 0x140))(param_1);
      fVar11 = -fVar11;
      local_78 = CONCAT44(local_78._4_4_ * fVar11,(float)local_78 * fVar11);
      uStack_70 = CONCAT44(uStack_70._4_4_ * fVar11,(float)uStack_70 * fVar11);
      (**(code **)(*param_1 + 0x228))(param_1,lVar5,&local_68,&local_88,0);
      plVar7 = *(longlong **)(lVar9 + -0x340 + lVar1);
      (**(code **)(*plVar7 + 0x28))(plVar7,0);
    }
    if ((*(uint *)(param_1 + 0xb) >> 10 & 1) != 0) {
      (**(code **)(*param_1 + 0x80))(param_1);
      *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) & 0xfffffbff;
    }
    *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) & 0xfffffff7;
    plVar7 = (longlong *)param_1[0x2b];
    plVar8 = param_1 + 0x29;
    if (param_1 == (longlong *)0xfffffffffffffeb0) {
      plVar8 = (longlong *)0x0;
    }
    while (plVar7 != plVar8) {
      plVar3 = (longlong *)plVar7[2];
      (**(code **)(*plVar7 + 8))(plVar7,9);
      plVar7 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4,4);
  }
  return;
}



// FUNCTION 1432dc470 FUN_1432dc470 body=46 status=ok
// SIG undefined FUN_1432dc470(void)

undefined4 FUN_1432dc470(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x168) != 0) {
    return *(undefined4 *)
            (*(longlong *)
              (*(longlong *)(param_1 + 0x168) * 0x20 + -0x20 + *(longlong *)(param_1 + 0x160)) +
            0x48);
  }
  return 1;
}



// FUNCTION 1432dc4b0 applyBlendMode body=17 status=ok
// SIG undefined applyBlendMode(void)

void Scaleform::Render::HAL::applyBlendMode(undefined8 param_1,undefined4 *param_2)

{
  FUN_1432dafc0(param_1,*param_2,*(undefined1 *)(param_2 + 1),*(undefined1 *)((longlong)param_2 + 5)
               );
  return;
}



// FUNCTION 1432dc4d0 FUN_1432dc4d0 body=51 status=ok
// SIG undefined FUN_1432dc4d0(void)

void FUN_1432dc4d0(longlong *param_1,char param_2)

{
  if (*(char *)((longlong)param_1 + 0x212) != param_2) {
    (**(code **)(*param_1 + 0x2a8))();
    *(char *)((longlong)param_1 + 0x212) = param_2;
  }
  return;
}



// FUNCTION 1432dc510 FUN_1432dc510 body=351 status=ok
// SIG undefined FUN_1432dc510(void)

void FUN_1432dc510(longlong *param_1,longlong param_2,ulonglong param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 local_428 [2];
  undefined4 local_418;
  undefined8 local_414;
  undefined4 local_40c [249];
  
  if (param_3 != 0) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      puVar2 = local_428 + 1;
      lVar4 = 0x20;
      uVar6 = 0x20;
      if (param_3 < 0x20) {
        uVar6 = param_3;
      }
      do {
        puVar2[-1] = 0x3f800000;
        *puVar2 = 0;
        *(undefined4 *)(puVar2 + 1) = 0;
        *(undefined8 *)((longlong)puVar2 + 0xc) = 0x3f800000;
        *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
        puVar2 = puVar2 + 4;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      if (uVar6 != 0) {
        do {
          lVar4 = **(longlong **)(param_2 + (uVar5 + lVar7) * 8);
          bVar1 = (&DAT_1467ccff4)[(ulonglong)(*(byte *)(lVar4 + 0xf) & 0xf) * 5];
          lVar3 = (**(code **)(*param_1 + 0x110))(param_1);
          FUN_1432be670(local_428 + uVar5 * 4,((ulonglong)bVar1 + 1) * 0x10 + lVar4,lVar3 + 0x1e0);
          uVar5 = (ulonglong)((int)uVar5 + 1);
        } while (uVar5 < uVar6);
      }
      (**(code **)(*param_1 + 0x2d0))(param_1,local_428,uVar6);
      param_3 = param_3 - uVar6;
      lVar7 = lVar7 + uVar6;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1432dc6f0 FUN_1432dc6f0 body=49 status=ok
// SIG undefined FUN_1432dc6f0(void)

void FUN_1432dc6f0(longlong *param_1,int param_2)

{
  if (param_2 != (int)param_1[0x41]) {
    (**(code **)(*param_1 + 0x308))();
    *(int *)(param_1 + 0x41) = param_2;
  }
  return;
}



// FUNCTION 1432dc730 FUN_1432dc730 body=636 status=ok
// SIG undefined FUN_1432dc730(void)

void FUN_1432dc730(longlong param_1,longlong param_2,undefined8 *param_3,char param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  param_3 = (undefined8 *)*param_3;
  do {
    if (param_3 == (undefined8 *)0x0) {
      if (param_4 != '\0') {
        lVar1 = (**(code **)(*(longlong *)(param_1 + -0x10) + 0xe8))(param_1 + -0x10);
        Scaleform::Lock::DoLock(lVar1 + 0x10);
        for (lVar3 = *(longlong *)(param_1 + 0x128); lVar3 != param_1 + 0x120;
            lVar3 = *(longlong *)(lVar3 + 8)) {
          FUN_1432d3ba0(lVar3 + -0x90,param_1 + -0x10);
        }
        Scaleform::Lock::DoLock(lVar1 + 0x10);
      }
      plVar7 = *(longlong **)(param_1 + 0x138);
      plVar8 = (longlong *)(param_1 + 0x120);
      if (param_1 == -0x130) {
        plVar8 = (longlong *)0x0;
      }
      for (; plVar7 != plVar8; plVar7 = (longlong *)plVar7[3]) {
        if ((param_4 != '\0') && (lVar3 = FUN_1432cd260(plVar7[5]), lVar3 == param_2)) {
          (**(code **)(*plVar7 + 0x60))(plVar7,param_1 + -0x10);
        }
        Scaleform::Render::TreeCacheRoot::ChainUpdatesByDepth(plVar7);
        FUN_143351d00(plVar7,param_1 + -0x10);
      }
      return;
    }
    uVar5 = 0;
    if (*(int *)(param_3 + 1) != 0) {
      do {
        if ((param_3[uVar5 * 4 + 2] != 0) &&
           (plVar8 = *(longlong **)(param_3[uVar5 * 4 + 2] + 0x28), plVar8 != (longlong *)0x0)) {
          if ((*(uint *)(param_3 + uVar5 * 4 + 5) & 0x3730) != 0) {
            (**(code **)(*plVar8 + 8))(plVar8,param_1 + -0x10);
          }
          uVar6 = 0;
          lVar3 = plVar8[4];
          if ((*(uint *)(param_3 + uVar5 * 4 + 5) & 0x7e248c) != 0) {
            if ((*(uint *)(param_3 + uVar5 * 4 + 5) & 4) != 0) {
              uVar6 = 0x1000000;
              lVar1 = FUN_1432cd220(plVar8[5]);
              *(ushort *)((longlong)plVar8 + 0x4a) =
                   *(ushort *)((longlong)plVar8 + 0x4a) ^
                   (*(ushort *)(lVar1 + 10) ^ *(ushort *)((longlong)plVar8 + 0x4a)) & 1;
            }
            if ((*(uint *)(param_3 + uVar5 * 4 + 5) & 0x40000) != 0) {
              uVar2 = FUN_1432cd220(plVar8[5]);
              FUN_14334e380(plVar8,param_1 + -0x10,uVar2,(short)plVar8[9] + 1,0);
            }
            uVar4 = uVar6 | 0x2000000;
            if ((*(uint *)(param_3 + uVar5 * 4 + 5) & 0x408) == 0) {
              uVar4 = uVar6;
            }
            uVar6 = *(uint *)(param_3 + uVar5 * 4 + 5) & 0x7e0000;
            if (uVar6 != 0) {
              *(uint *)((longlong)plVar8 + 0x4c) = *(uint *)((longlong)plVar8 + 0x4c) | uVar6;
              uVar4 = uVar4 | 0x1000000;
            }
            uVar6 = uVar4 | 0x1000000;
            if ((*(uint *)(param_3 + uVar5 * 4 + 5) & 0x2000) == 0) {
              uVar6 = uVar4;
            }
            if (lVar3 == 0) goto LAB_1432dc8b8;
            if ((uVar6 != 0) && (plVar8[6] != 0)) {
              FUN_143351bd0();
            }
          }
          if ((((lVar3 != 0) && ((*(uint *)(param_3 + uVar5 * 4 + 5) & 0x12003) != 0)) &&
              (FUN_143351bd0(lVar3,plVar8), (*(byte *)(param_3 + uVar5 * 4 + 5) & 1) != 0)) &&
             ((*(byte *)((longlong)plVar8 + 0x4a) >> 5 & 1) != 0)) {
            FUN_143351bd0(lVar3,plVar8[6],0x2000001);
          }
        }
LAB_1432dc8b8:
        uVar6 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar6;
      } while (uVar6 < *(uint *)(param_3 + 1));
    }
    param_3 = (undefined8 *)*param_3;
  } while( true );
}



// FUNCTION 1432dc9c0 FUN_1432dc9c0 body=42 status=ok
// SIG undefined FUN_1432dc9c0(void)

void FUN_1432dc9c0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x28);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1432dca00 FUN_1432dca00 body=34 status=ok
// SIG undefined FUN_1432dca00(void)

void FUN_1432dca00(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  if (*param_2 == 0) {
    plVar1 = (longlong *)(param_1 + 0x130);
    *param_2 = *plVar1;
    param_2[1] = (longlong)plVar1;
    *(longlong **)(*plVar1 + 8) = param_2;
    *plVar1 = (longlong)param_2;
  }
  return;
}



// FUNCTION 1432dca30 FUN_1432dca30 body=117 status=ok
// SIG undefined FUN_1432dca30(void)

void FUN_1432dca30(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0xe8))();
  Scaleform::Lock::DoLock(lVar2 + 0x10);
  for (plVar1 = (longlong *)param_1[0x27]; plVar1 != param_1 + 0x26; plVar1 = (longlong *)plVar1[1])
  {
    FUN_1432d3ba0(plVar1 + -0x12,param_1);
  }
  Scaleform::Lock::DoLock(lVar2 + 0x10);
  return;
}



// FUNCTION 1432dcab0 FUN_1432dcab0 body=308 status=ok
// SIG undefined FUN_1432dcab0(void)

longlong FUN_1432dcab0(int *param_1,int *param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if ((param_3 == '\0') || (((param_1[10] & 0x30U) - 0x10 & 0xffffffdf) != 0)) {
    iVar8 = param_1[5];
    uVar1 = param_1[4];
  }
  else {
    uVar1 = param_1[5];
    iVar8 = param_1[4];
  }
  iVar5 = param_1[3];
  iVar2 = param_1[2];
  iVar3 = *param_1;
  iVar4 = param_1[1];
  iVar8 = iVar5 + iVar8;
  iVar9 = iVar2 + uVar1;
  if ((((-1 < iVar8) && (iVar5 <= iVar4)) && (iVar2 <= iVar3)) && (-1 < iVar9)) {
    iVar6 = 0;
    if (0 < iVar2) {
      iVar6 = iVar2;
    }
    *param_2 = iVar6;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
    param_2[2] = iVar9;
    iVar2 = 0;
    if (0 < iVar5) {
      iVar2 = iVar5;
    }
    param_2[1] = iVar2;
    if (iVar4 < iVar8) {
      iVar8 = iVar4;
    }
    param_2[3] = iVar8;
    if ((*(byte *)(param_1 + 10) & 4) != 0) {
      iVar5 = param_1[7];
      iVar3 = param_1[6];
      iVar7 = param_1[8] + iVar3;
      uVar1 = param_1[9];
      iVar4 = iVar5 + uVar1;
      if (((iVar8 < iVar5) || (iVar4 < iVar2)) || ((iVar7 < iVar6 || (iVar9 < iVar3)))) {
        param_2[0] = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        param_2[3] = 0;
        return (ulonglong)(uint3)(uVar1 >> 8) << 8;
      }
      if (iVar3 < iVar6) {
        iVar3 = iVar6;
      }
      *param_2 = iVar3;
      if (iVar7 < iVar9) {
        iVar9 = iVar7;
      }
      param_2[2] = iVar9;
      if (iVar5 < iVar2) {
        iVar5 = iVar2;
      }
      param_2[1] = iVar5;
      if (iVar4 < iVar8) {
        iVar8 = iVar4;
      }
      param_2[3] = iVar8;
    }
    return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
  }
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  return (ulonglong)(uVar1 >> 8) << 8;
}



// FUNCTION 1432dcbf0 FUN_1432dcbf0 body=38 status=ok
// SIG undefined FUN_1432dcbf0(void)

int FUN_1432dcbf0(float param_1)

{
  if (0.0 < param_1) {
    return (int)(param_1 + 0.5);
  }
  return (int)(param_1 - 0.5);
}



// FUNCTION 1432dcc20 FUN_1432dcc20 body=228 status=ok
// SIG undefined FUN_1432dcc20(void)

undefined8 * FUN_1432dcc20(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0x2000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = param_2;
  param_1[6] = 0x2000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = param_2;
  param_1[0xb] = 0x2000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = param_2;
  param_1[0x10] = 0x2000;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_143335d80(param_1 + 0x14,param_1);
  FUN_143326810(param_1 + 0xc1,param_1 + 10);
  FUN_143327cf0(param_1 + 0xcc,param_1 + 0xf);
  FUN_1433492b0(param_1 + 0xe6,param_1 + 10);
  FUN_143344880(param_1 + 0x13a,param_1 + 10);
  return param_1;
}



// FUNCTION 1432dcd10 FUN_1432dcd10 body=126 status=ok
// SIG undefined FUN_1432dcd10(void)

undefined8 * FUN_1432dcd10(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145af87a8;
  *(undefined4 *)(param_1 + 1) = 1;
  FUN_1432bdc50(param_1 + 2,0);
  lVar3 = 2;
  plVar1 = param_1 + 8;
  do {
    plVar2 = plVar1 + -1;
    if (plVar1 == (longlong *)0x0) {
      plVar2 = (longlong *)0;
    }
    *plVar1 = (longlong)plVar2;
    plVar1[1] = (longlong)plVar2;
    plVar1 = plVar1 + 2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  param_1[0xc] = param_2;
  return param_1;
}



// FUNCTION 1432dcd90 FUN_1432dcd90 body=130 status=ok
// SIG undefined FUN_1432dcd90(void)

undefined8 * FUN_1432dcd90(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_1432d68c0(param_1 + 2);
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = 1;
  *(undefined4 *)(param_1 + 0x5e) = 1;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  return param_1;
}



// FUNCTION 1432dce20 FUN_1432dce20 body=204 status=ok
// SIG undefined FUN_1432dce20(void)

undefined8 * FUN_1432dce20(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0x2000;
  param_1[5] = param_2;
  param_1[6] = 0x2000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_143326810(param_1 + 10,param_1);
  FUN_143327cf0(param_1 + 0x15,param_1 + 5);
  param_1[0x2f] = &PTR_FUN_145af8728;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x30] = param_1;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x35] = param_1;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  return param_1;
}



// FUNCTION 1432dcef0 FUN_1432dcef0 body=262 status=ok
// SIG undefined FUN_1432dcef0(void)

undefined8 * FUN_1432dcef0(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  FUN_14334df70(param_1,param_3,param_2);
  param_1[0xe] = param_1 + 0xc;
  param_1[0xf] = param_1 + 0xc;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0x80000000;
  *param_1 = &PTR_FUN_145af8b70;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined2 *)(param_1 + 0x17) = 0;
  *(undefined1 *)((longlong)param_1 + 0xba) = 0;
  uVar1 = (**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x18] = param_1 + 0x1c;
  lVar3 = 0x10;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x20;
  param_1[0x1a] = uVar1;
  param_1[0x1b] = 0;
  puVar2 = param_1 + 0x1d;
  do {
    puVar2[-1] = param_1[0x1b];
    *puVar2 = param_1[0x1b];
    lVar3 = lVar3 + -1;
    puVar2 = puVar2 + 2;
  } while (lVar3 != 0);
  param_1[4] = param_1;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  return param_1;
}



// FUNCTION 1432dd000 FUN_1432dd000 body=133 status=ok
// SIG undefined FUN_1432dd000(void)

void FUN_1432dd000(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = param_1[1];
  puVar1 = (undefined8 *)(*param_1 + -0x20 + lVar2 * 0x20);
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    if ((longlong *)puVar1[2] != (longlong *)0x0) {
      (**(code **)(*(longlong *)puVar1[2] + 0x10))();
    }
    if ((longlong *)puVar1[1] != (longlong *)0x0) {
      (**(code **)(*(longlong *)puVar1[1] + 0x10))();
    }
    if ((RefCountImpl *)*puVar1 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar1);
    }
    puVar1 = puVar1 + -4;
  }
                    /* WARNING: Could not recover jumptable at 0x0001432dd081. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  return;
}



// FUNCTION 1432dd090 FUN_1432dd090 body=118 status=ok
// SIG undefined FUN_1432dd090(void)

void FUN_1432dd090(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = param_1[1];
  puVar1 = (undefined8 *)(*param_1 + -0x10 + lVar2 * 0x10);
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    if ((longlong *)puVar1[1] != (longlong *)0x0) {
      (**(code **)(*(longlong *)puVar1[1] + 0x10))();
    }
    if ((RefCountImpl *)*puVar1 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar1);
    }
    puVar1 = puVar1 + -2;
  }
                    /* WARNING: Could not recover jumptable at 0x0001432dd102. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  return;
}



// FUNCTION 1432dd110 FUN_1432dd110 body=197 status=ok
// SIG undefined FUN_1432dd110(void)

void FUN_1432dd110(RefCountImplCore *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_145af85a8;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    lVar1 = 0;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8) + 1;
    do {
      if (*(longlong *)(lVar1 + 0x10 + *(longlong *)(param_1 + 0x20)) != -2) {
        *(undefined8 *)(lVar1 + 0x10 + *(longlong *)(param_1 + 0x20)) = 0xfffffffffffffffe;
      }
      lVar1 = lVar1 + 0x18;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    lVar1 = 0;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8) + 1;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10 + lVar1) != -2) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10 + lVar1) = 0xfffffffffffffffe;
      }
      lVar1 = lVar1 + 0x18;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 1432dd1e0 FUN_1432dd1e0 body=121 status=ok
// SIG undefined FUN_1432dd1e0(void)

void FUN_1432dd1e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145af8b70;
  if (param_1[2] != 0) {
    *(undefined8 *)(param_1[2] + 0x18) = param_1[3];
    *(undefined8 *)(param_1[3] + 0x10) = param_1[2];
    param_1[2] = 0xffffffffffffffff;
    param_1[3] = 0xffffffffffffffff;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  if ((undefined8 *)param_1[0x18] != param_1 + 0x1c) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  FUN_143350470(param_1);
  return;
}



// FUNCTION 1432dd270 FUN_1432dd270 body=89 status=ok
// SIG undefined FUN_1432dd270(void)

RefCountImplCore * FUN_1432dd270(RefCountImplCore *param_1,uint param_2)

{
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1432dd2d0 FUN_1432dd2d0 body=89 status=ok
// SIG undefined FUN_1432dd2d0(void)

undefined8 FUN_1432dd2d0(undefined8 param_1,ulonglong param_2)

{
  FUN_1432d83f0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x11d0);
  }
  return param_1;
}



// FUNCTION 1432dd330 FUN_1432dd330 body=116 status=ok
// SIG undefined FUN_1432dd330(void)

RefCountImplCore * FUN_1432dd330(RefCountImplCore *param_1,ulonglong param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_145af87a8;
  FUN_143325b60();
  Scaleform::Lock::~Lock(param_1 + 0x10);
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1432dd3b0 FUN_1432dd3b0 body=89 status=ok
// SIG undefined FUN_1432dd3b0(void)

undefined8 FUN_1432dd3b0(undefined8 param_1,ulonglong param_2)

{
  FUN_1432dd110();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1432dd410 FUN_1432dd410 body=73 status=ok
// SIG undefined FUN_1432dd410(void)

undefined8 * FUN_1432dd410(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145af85b0;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1432dd460 FUN_1432dd460 body=84 status=ok
// SIG undefined FUN_1432dd460(void)

undefined8 * FUN_1432dd460(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145af8618;
  param_1[1] = &PTR_FUN_145af85b0;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1432dd4c0 FUN_1432dd4c0 body=43 status=ok
// SIG undefined FUN_1432dd4c0(void)

undefined8 * FUN_1432dd4c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145af86a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1432dd4f0 FUN_1432dd4f0 body=89 status=ok
// SIG undefined FUN_1432dd4f0(void)

undefined8 FUN_1432dd4f0(undefined8 param_1,ulonglong param_2)

{
  FUN_143350470();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 1432dd550 FUN_1432dd550 body=89 status=ok
// SIG undefined FUN_1432dd550(void)

undefined8 FUN_1432dd550(undefined8 param_1,ulonglong param_2)

{
  FUN_1432dd1e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x1e0);
  }
  return param_1;
}



// FUNCTION 1432dd5b0 FUN_1432dd5b0 body=43 status=ok
// SIG undefined FUN_1432dd5b0(void)

undefined8 * FUN_1432dd5b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145af86a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1432dd5e0 FUN_1432dd5e0 body=230 status=ok
// SIG undefined FUN_1432dd5e0(void)

void FUN_1432dd5e0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_2 * 0x340 + -0x340 + param_1);
    plVar2 = plVar4 + 0x53;
    do {
      lVar3 = plVar2[0x11];
      puVar1 = (undefined8 *)(plVar2[0x10] + -0x20 + lVar3 * 0x20);
      for (; lVar3 != 0; lVar3 = lVar3 + -1) {
        if ((RefCountImpl *)*puVar1 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar1);
        }
        puVar1 = puVar1 + -4;
      }
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,plVar2[0x10]);
      if ((RefCountImpl *)*plVar2 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)*plVar2);
      }
      Scaleform::RefCountImplCore::~RefCountImplCore((RefCountImplCore *)(plVar2 + -0x51));
      if ((longlong *)*plVar4 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar4 + 0x10))();
      }
      plVar4 = plVar4 + -0x68;
      plVar2 = plVar2 + -0x68;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1432dd6d0 FUN_1432dd6d0 body=4 status=ok
// SIG undefined FUN_1432dd6d0(void)

undefined4 FUN_1432dd6d0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  return param_3;
}



// FUNCTION 1432dd7a0 FUN_1432dd7a0 body=174 status=ok
// SIG undefined FUN_1432dd7a0(void)

undefined8 * FUN_1432dd7a0(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar4 = param_1[1] * 0x10 + *param_1;
  if (*(RefCountImpl **)(lVar4 + -0x10) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(lVar4 + -0x10));
  }
  *param_2 = *(undefined8 *)(lVar4 + -0x10);
  if (*(longlong **)(lVar4 + -8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(lVar4 + -8) + 8))();
  }
  param_2[1] = *(undefined8 *)(lVar4 + -8);
  uVar2 = param_1[1];
  uVar1 = uVar2 - 1;
  FUN_1432dde80(param_1,param_1,uVar1);
  if (uVar2 < uVar1) {
    puVar3 = (undefined8 *)(uVar2 * 0x10 + *param_1);
    for (lVar4 = uVar1 - uVar2; lVar4 != 0; lVar4 = lVar4 + -1) {
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
      }
      puVar3 = puVar3 + 2;
    }
  }
  return param_2;
}



// FUNCTION 1432dd850 FUN_1432dd850 body=137 status=ok
// SIG undefined FUN_1432dd850(void)

void FUN_1432dd850(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = param_1[1] + 1;
  if (uVar3 < (ulonglong)param_1[1]) {
    uVar4 = uVar3;
    if ((ulonglong)param_1[2] >> 1 <= uVar3) goto LAB_1432dd89b;
  }
  else {
    if (uVar3 <= (ulonglong)param_1[2]) goto LAB_1432dd89b;
    uVar4 = (uVar3 >> 2) + uVar3;
  }
  FUN_1432ddad0(param_1,param_1,uVar4);
LAB_1432dd89b:
  param_1[1] = uVar3;
  puVar2 = (undefined8 *)(*param_1 + -0x30 + uVar3 * 0x30);
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = param_2[1];
    *puVar2 = *param_2;
    puVar2[1] = uVar1;
    uVar1 = param_2[3];
    puVar2[2] = param_2[2];
    puVar2[3] = uVar1;
    uVar1 = param_2[5];
    puVar2[4] = param_2[4];
    puVar2[5] = uVar1;
  }
  return;
}



// FUNCTION 1432dd8e0 FUN_1432dd8e0 body=141 status=ok
// SIG undefined FUN_1432dd8e0(void)

void FUN_1432dd8e0(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = param_1[1] + 1;
  if (uVar3 < (ulonglong)param_1[1]) {
    uVar4 = uVar3;
    if ((ulonglong)param_1[2] >> 1 <= uVar3) goto LAB_1432dd92b;
  }
  else {
    if (uVar3 <= (ulonglong)param_1[2]) goto LAB_1432dd92b;
    uVar4 = (uVar3 >> 2) + uVar3;
  }
  FUN_1432ddb80(param_1,param_1,uVar4);
LAB_1432dd92b:
  param_1[1] = uVar3;
  puVar2 = (undefined8 *)(*param_1 + -0x40 + uVar3 * 0x40);
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = param_2[1];
    *puVar2 = *param_2;
    puVar2[1] = uVar1;
    uVar1 = param_2[3];
    puVar2[2] = param_2[2];
    puVar2[3] = uVar1;
    uVar1 = param_2[5];
    puVar2[4] = param_2[4];
    puVar2[5] = uVar1;
    uVar1 = param_2[7];
    puVar2[6] = param_2[6];
    puVar2[7] = uVar1;
  }
  return;
}



// FUNCTION 1432dd970 FUN_1432dd970 body=173 status=ok
// SIG undefined FUN_1432dd970(void)

void FUN_1432dd970(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if ((param_3 != param_1[2]) && ((ulonglong)param_1[2] <= param_3)) {
    if (param_3 == 0) {
      uVar2 = 0;
      if (*param_1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
        param_1[2] = 0;
        return;
      }
    }
    else {
      uVar2 = param_3 + 7 & 0xfffffffffffffff8;
      if (*param_1 != 0) {
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))();
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 2;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 << 4,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 1432dda20 FUN_1432dda20 body=173 status=ok
// SIG undefined FUN_1432dda20(void)

void FUN_1432dda20(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if ((param_3 != param_1[2]) && ((ulonglong)param_1[2] <= param_3)) {
    if (param_3 == 0) {
      uVar2 = 0;
      if (*param_1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
        param_1[2] = 0;
        return;
      }
    }
    else {
      uVar2 = param_3 + 7 & 0xfffffffffffffff8;
      if (*param_1 != 0) {
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))();
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 2;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 * 0x340,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 1432ddad0 FUN_1432ddad0 body=174 status=ok
// SIG undefined FUN_1432ddad0(void)

void FUN_1432ddad0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if ((param_3 != param_1[2]) && ((ulonglong)param_1[2] <= param_3)) {
    if (param_3 == 0) {
      uVar2 = 0;
      if (*param_1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
        param_1[2] = 0;
        return;
      }
    }
    else {
      uVar2 = param_3 + 7 & 0xfffffffffffffff8;
      if (*param_1 != 0) {
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))();
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 2;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 * 0x30,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 1432ddb80 FUN_1432ddb80 body=173 status=ok
// SIG undefined FUN_1432ddb80(void)

void FUN_1432ddb80(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if ((param_3 != param_1[2]) && ((ulonglong)param_1[2] <= param_3)) {
    if (param_3 == 0) {
      uVar2 = 0;
      if (*param_1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
        param_1[2] = 0;
        return;
      }
    }
    else {
      uVar2 = param_3 + 7 & 0xfffffffffffffff8;
      if (*param_1 != 0) {
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))();
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 2;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 << 6,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 1432ddc30 FUN_1432ddc30 body=109 status=ok
// SIG undefined FUN_1432ddc30(void)

void FUN_1432ddc30(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  uVar1 = param_1[1];
  FUN_1432ddf50(param_1,param_1,param_2);
  if (uVar1 < param_2) {
    puVar4 = (undefined8 *)(uVar1 * 0x20 + *param_1);
    lVar3 = param_2 - uVar1;
    if (lVar3 != 0) {
      puVar2 = (undefined8 *)((longlong)puVar4 + 0x14);
      do {
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = 0;
          puVar2[-1] = 0;
          *puVar2 = 0;
        }
        puVar4 = puVar4 + 4;
        puVar2 = puVar2 + 4;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
  }
  return;
}



// FUNCTION 1432ddca0 FUN_1432ddca0 body=111 status=ok
// SIG undefined FUN_1432ddca0(void)

void FUN_1432ddca0(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = param_1[1];
  FUN_1432de010(param_1,param_1,param_2);
  if (uVar1 < param_2) {
    lVar2 = uVar1 * 0x340 + *param_1;
    for (lVar3 = param_2 - uVar1; lVar3 != 0; lVar3 = lVar3 + -1) {
      if (lVar2 != 0) {
        FUN_1432dcd90(lVar2);
      }
      lVar2 = lVar2 + 0x340;
    }
  }
  return;
}



// FUNCTION 1432ddd10 FUN_1432ddd10 body=172 status=ok
// SIG undefined FUN_1432ddd10(void)

void FUN_1432ddd10(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = param_1[1];
  if (param_2 < uVar1) {
    uVar4 = param_2;
    if ((ulonglong)param_1[2] >> 1 <= param_2) goto LAB_1432ddd57;
  }
  else {
    if (param_2 <= (ulonglong)param_1[2]) goto LAB_1432ddd57;
    uVar4 = (param_2 >> 2) + param_2;
  }
  FUN_1432ddad0(param_1,param_1,uVar4);
LAB_1432ddd57:
  param_1[1] = param_2;
  if (uVar1 < param_2) {
    puVar2 = (undefined8 *)(uVar1 * 0x30 + *param_1);
    for (lVar3 = param_2 - uVar1; lVar3 != 0; lVar3 = lVar3 + -1) {
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        *(undefined4 *)puVar2 = 0x3f800000;
        *(undefined4 *)((longlong)puVar2 + 0x14) = 0x3f800000;
        *(undefined4 *)(puVar2 + 5) = 0x3f800000;
      }
      puVar2 = puVar2 + 6;
    }
  }
  return;
}



// FUNCTION 1432dddc0 FUN_1432dddc0 body=187 status=ok
// SIG undefined FUN_1432dddc0(void)

void FUN_1432dddc0(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = param_1[1];
  if (param_2 < uVar1) {
    uVar4 = param_2;
    if ((ulonglong)param_1[2] >> 1 <= param_2) goto LAB_1432dde07;
  }
  else {
    if (param_2 <= (ulonglong)param_1[2]) goto LAB_1432dde07;
    uVar4 = (param_2 >> 2) + param_2;
  }
  FUN_1432ddb80(param_1,param_1,uVar4);
LAB_1432dde07:
  param_1[1] = param_2;
  if (uVar1 < param_2) {
    puVar2 = (undefined8 *)(uVar1 * 0x40 + *param_1);
    for (lVar3 = param_2 - uVar1; lVar3 != 0; lVar3 = lVar3 + -1) {
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        *(undefined4 *)puVar2 = 0x3f800000;
        *(undefined4 *)((longlong)puVar2 + 0x14) = 0x3f800000;
        *(undefined4 *)(puVar2 + 5) = 0x3f800000;
        *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x3f800000;
      }
      puVar2 = puVar2 + 8;
    }
  }
  return;
}



// FUNCTION 1432dde80 FUN_1432dde80 body=195 status=ok
// SIG undefined FUN_1432dde80(void)

void FUN_1432dde80(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    puVar1 = (undefined8 *)(*param_1 + -0x10 + (lVar2 + param_3) * 0x10);
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      if ((longlong *)puVar1[1] != (longlong *)0x0) {
        (**(code **)(*(longlong *)puVar1[1] + 0x10))();
      }
      if ((RefCountImpl *)*puVar1 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar1);
      }
      puVar1 = puVar1 + -2;
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1432dd970(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_1432dd970(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 1432ddf50 FUN_1432ddf50 body=180 status=ok
// SIG undefined FUN_1432ddf50(void)

void FUN_1432ddf50(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    puVar1 = (undefined8 *)(*param_1 + -0x20 + (lVar2 + param_3) * 0x20);
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      if ((RefCountImpl *)*puVar1 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar1);
      }
      puVar1 = puVar1 + -4;
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_14204f750(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_14204f750(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 1432de010 FUN_1432de010 body=158 status=ok
// SIG undefined FUN_1432de010(void)

void FUN_1432de010(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  if (param_3 < (ulonglong)param_1[1]) {
    FUN_1432dd5e0(param_3 * 0x340 + *param_1,param_1[1] - param_3);
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1432dda20(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
    return;
  }
  if ((ulonglong)param_1[2] < param_3) {
    FUN_1432dda20(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
    return;
  }
  param_1[1] = param_3;
  return;
}



// FUNCTION 1432de0e0 FUN_1432de0e0 body=178 status=ok
// SIG undefined FUN_1432de0e0(void)

longlong * FUN_1432de0e0(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined4 local_res8 [8];
  
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    param_1[3] = *plVar2;
    return plVar2;
  }
  uVar1 = *(uint *)(param_1 + 2);
  if (uVar1 < 0x7f) {
    if (param_1[1] != 0) {
      *(uint *)(param_1 + 2) = uVar1 + 1;
      return (longlong *)((ulonglong)uVar1 * 0x70 + param_1[1]);
    }
    return (longlong *)0x0;
  }
  local_res8[0] = 2;
  plVar2 = (longlong *)
           (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1[4],0x37a0,local_res8);
  plVar2[0x6f2] = 0;
  if (param_1[1] != 0) {
    *(longlong **)(param_1[1] + 0x3790) = plVar2;
    param_1[1] = (longlong)plVar2;
    *(undefined4 *)(param_1 + 2) = 1;
    return plVar2;
  }
  *param_1 = (longlong)plVar2;
  param_1[1] = (longlong)plVar2;
  *(undefined4 *)(param_1 + 2) = 1;
  return plVar2;
}



// FUNCTION 1432de1a0 FUN_1432de1a0 body=187 status=ok
// SIG undefined FUN_1432de1a0(void)

undefined4 FUN_1432de1a0(uint *param_1,char *param_2,longlong param_3,char param_4)

{
  uint uVar1;
  undefined4 uVar2;
  longlong local_68 [3];
  undefined **local_50;
  byte local_42;
  uint local_38;
  
  if (param_4 == '\0') {
    uVar1 = *param_1 & 0xfff0000;
    if (uVar1 == 0x50000) {
      *param_2 = 'G';
    }
    else if ((uVar1 == 0x60000) || (uVar1 == 0x90000)) {
      *param_2 = 'F';
    }
    else {
      *param_2 = 'I';
    }
  }
  else {
    *param_2 = param_4;
  }
  FUN_143354a50(local_68,(short)*param_1);
  local_42 = local_42 | 1;
  local_38 = local_38 & 0xfffffff0 | 0x10;
  (**(code **)(local_68[0] + 0x18))(local_68);
  Scaleform::DoubleFormatter::InitString(&local_50,param_2 + 1,param_3 + -1);
  uVar2 = Scaleform::LongFormatter::GetSize(local_68);
  local_50 = &PTR_FUN_145af1858;
  FUN_143353a80(local_68);
  return uVar2;
}



// FUNCTION 1432de270 FUN_1432de270 body=65 status=ok
// SIG undefined FUN_1432de270(void)

undefined8 * FUN_1432de270(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_145af8c80;
  *(undefined4 *)(param_1 + 1) = 1;
  FUN_1432c2f70(param_1 + 4);
  *(undefined4 *)(param_1 + 2) = 1;
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 1432de2c0 FUN_1432de2c0 body=61 status=ok
// SIG undefined FUN_1432de2c0(void)

ulonglong FUN_1432de2c0(longlong param_1)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  
  puVar2 = (ulonglong *)(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffc);
  uVar1 = Scaleform::String::BernsteinHashFunction
                    ((longlong)puVar2 + 0xc,*puVar2 & 0x7fffffffffffffff,0x1505);
  return uVar1 ^ (longlong)*(int *)(param_1 + 0x10);
}



// FUNCTION 1432de310 FUN_1432de310 body=13 status=ok
// SIG undefined FUN_1432de310(void)

undefined8 * FUN_1432de310(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1432de330 FUN_1432de330 body=67 status=ok
// SIG undefined FUN_1432de330(void)

undefined8 * FUN_1432de330(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2,param_3);
  }
  param_1[1] = param_3;
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 1432de380 FUN_1432de380 body=62 status=ok
// SIG undefined FUN_1432de380(void)

longlong * FUN_1432de380(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,param_2[1]);
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return param_1;
}



// FUNCTION 1432de3d0 FUN_1432de3d0 body=80 status=ok
// SIG undefined FUN_1432de3d0(void)

longlong * FUN_1432de3d0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,param_2[1]);
  }
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1[1]);
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return param_1;
}



// FUNCTION 1432de430 AddRef body=14 status=ok
// SIG undefined AddRef(void)

void Scaleform::GFx::Resource::AddRef(longlong param_1)

{
  AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(param_1 + 8,1);
  return;
}



// FUNCTION 1432de450 FUN_1432de450 body=77 status=ok
// SIG undefined FUN_1432de450(void)

void FUN_1432de450(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(param_1 + 1,0xffffffff);
  if (iVar2 == 1) {
    plVar1 = (longlong *)param_1[2];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,param_1);
      param_1[2] = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x0001432de494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1432de4b0 AddRef_NotZero body=57 status=ok
// SIG undefined AddRef_NotZero(void)

undefined8 Scaleform::GFx::Resource::AddRef_NotZero(longlong param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    cVar2 = AtomicOpsRaw_4ByteImpl::CompareAndSet_NoSync((int *)(param_1 + 8),iVar1,iVar1 + 1);
    if (cVar2 != '\0') break;
    iVar1 = *(int *)(param_1 + 8);
  }
  return 1;
}



// FUNCTION 1432de4f0 GetNumWantingResources body=4 status=ok
// SIG undefined GetNumWantingResources(void)

undefined4 IStreamingManager::GetNumWantingResources(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// FUNCTION 1432de540 FUN_1432de540 body=119 status=ok
// SIG undefined FUN_1432de540(void)

undefined8 * FUN_1432de540(undefined8 *param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145af8c90;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = param_2;
  lVar1 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x58);
  if (lVar1 != 0) {
    uVar2 = FUN_1432deb10(lVar1,param_1);
    param_1[2] = uVar2;
    return param_1;
  }
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 1432de5c0 FUN_1432de5c0 body=138 status=ok
// SIG undefined FUN_1432de5c0(void)

void FUN_1432de5c0(RefCountImplCore *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_145af8c90;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1432df1a0();
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x10));
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    lVar1 = 0;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8) + 1;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10 + lVar1) != -2) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10 + lVar1) = 0xfffffffffffffffe;
      }
      lVar1 = lVar1 + 0x10;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    if (*(longlong *)(param_1 + 0x18) != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 1432de650 FUN_1432de650 body=213 status=ok
// SIG undefined FUN_1432de650(void)

undefined8 * FUN_1432de650(undefined8 *param_1,RefCountImpl *param_2,longlong *param_3)

{
  longlong *plVar1;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145af8c88;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_1432c2f70(param_1 + 7);
  Scaleform::Event::Event((Event *)(param_1 + 8),false,false);
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
  }
  if ((RefCountImpl *)param_1[2] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[2]);
  }
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  plVar1 = (longlong *)*param_3;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,param_3[1]);
  }
  plVar1 = (longlong *)param_1[5];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1[6]);
  }
  param_1[5] = *param_3;
  param_1[6] = param_3[1];
  return param_1;
}



// FUNCTION 1432de730 FUN_1432de730 body=252 status=ok
// SIG undefined FUN_1432de730(void)

void FUN_1432de730(RefCountImplCore *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong *plVar4;
  int iVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  *(undefined ***)param_1 = &PTR_FUN_145af8c88;
  Scaleform::Lock::DoLock(lVar1 + 0x18);
  if (*(int *)(param_1 + 0x18) == 0) {
    FUN_1432df710(*(longlong *)(param_1 + 0x10) + 0x48,param_1 + 0x28);
  }
  else if (*(longlong *)(param_1 + 0x20) != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x20);
    iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(puVar2 + 1,0xffffffff);
    if (iVar5 == 1) {
      plVar4 = (longlong *)puVar2[2];
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))(plVar4,puVar2);
        puVar2[2] = 0;
      }
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  Scaleform::Lock::DoLock(lVar1 + 0x18);
  Scaleform::Event::~Event((Event *)(param_1 + 0x40));
  uVar3 = *(ulonglong *)(param_1 + 0x38);
  iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar3 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar5 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar3 & 0xfffffffffffffffc);
  }
  plVar4 = *(longlong **)(param_1 + 0x28);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x10))(plVar4,*(undefined8 *)(param_1 + 0x30));
  }
  if (*(RefCountImpl **)(param_1 + 0x10) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x10));
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 1432de840 FUN_1432de840 body=58 status=ok
// SIG undefined FUN_1432de840(void)

undefined8 FUN_1432de840(longlong param_1)

{
  Scaleform::Event::Wait((Event *)(param_1 + 0x40),0xffffffff);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(*(longlong *)(param_1 + 0x20) + 8,1);
  }
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 1432de880 FUN_1432de880 body=59 status=ok
// SIG undefined FUN_1432de880(void)

bool FUN_1432de880(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  Scaleform::Lock::DoLock(lVar2 + 0x18);
  iVar1 = *(int *)(param_1 + 0x18);
  Scaleform::Lock::DoLock(lVar2 + 0x18);
  return iVar1 != 0;
}



// FUNCTION 1432de8d0 GetError body=13 status=ok
// SIG undefined GetError(void)

longlong Scaleform::GFx::ResourceLib::ResourceSlot::GetError(longlong param_1)

{
  return (*(ulonglong *)(param_1 + 0x38) & 0xfffffffffffffffc) + 0xc;
}



// FUNCTION 1432de8f0 FUN_1432de8f0 body=209 status=ok
// SIG undefined FUN_1432de8f0(void)

void FUN_1432de8f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  Scaleform::Lock::DoLock(lVar1 + 0x18);
  Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(param_2 + 8,1);
  lVar2 = *(longlong *)(param_1 + 0x10);
  *(longlong *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x18) = 1;
  if (*(longlong *)(lVar2 + 0x48) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x28);
    uVar4 = 0;
    if (plVar3 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x20))(plVar3,*(undefined8 *)(param_1 + 0x30));
    }
    lVar5 = FUN_1432dfb90(lVar2 + 0x48,param_1 + 0x28,
                          *(ulonglong *)(*(longlong *)(lVar2 + 0x48) + 8) & uVar4);
    if (-1 < lVar5) {
      puVar6 = (undefined4 *)((lVar5 + 1) * 0x20 + *(longlong *)(lVar2 + 0x48));
      goto LAB_1432de983;
    }
  }
  puVar6 = (undefined4 *)0x0;
LAB_1432de983:
  *(longlong *)(puVar6 + 2) = param_2;
  *puVar6 = 0;
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  Scaleform::Event::SetEvent((Event *)(param_1 + 0x40));
  Scaleform::Lock::DoLock(lVar1 + 0x18);
  return;
}



// FUNCTION 1432de9d0 FUN_1432de9d0 body=103 status=ok
// SIG undefined FUN_1432de9d0(void)

void FUN_1432de9d0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  Scaleform::Lock::DoLock(lVar1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = 2;
  Scaleform::String::operator=(param_1 + 0x38,param_2);
  FUN_1432df710(*(longlong *)(param_1 + 0x10) + 0x48,param_1 + 0x28);
  Scaleform::Event::SetEvent((Event *)(param_1 + 0x40));
  Scaleform::Lock::DoLock(lVar1 + 0x18);
  return;
}



// FUNCTION 1432dea40 FUN_1432dea40 body=191 status=ok
// SIG undefined FUN_1432dea40(void)

longlong FUN_1432dea40(int *param_1)

{
  RefCountImpl *this;
  longlong lVar1;
  
  if (*param_1 == 1) {
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(*(longlong *)(param_1 + 2) + 8,1);
    return *(longlong *)(param_1 + 2);
  }
  if (*param_1 == 4) {
    return 0;
  }
  this = *(RefCountImpl **)(param_1 + 2);
  Scaleform::Event::Wait((Event *)(this + 0x40),0xffffffff);
  if (*(longlong *)(this + 0x20) != 0) {
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(*(longlong *)(this + 0x20) + 8,1);
  }
  lVar1 = *(longlong *)(this + 0x20);
  if (lVar1 != 0) {
    *param_1 = 1;
    *(longlong *)(param_1 + 2) = lVar1;
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(lVar1 + 8,1);
    Scaleform::RefCountImpl::Release(this);
    return lVar1;
  }
  *param_1 = 4;
  return 0;
}



// FUNCTION 1432deb10 FUN_1432deb10 body=210 status=ok
// SIG undefined FUN_1432deb10(void)

undefined8 * FUN_1432deb10(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  uint local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145af8c98;
  *(undefined4 *)(param_1 + 1) = 1;
  FUN_1432bdc50(param_1 + 3,0);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[2] = param_2;
  if ((param_2 == 0) || (local_48[0] = 0x1000, *(char *)(param_2 + 0x20) == '\0')) {
    local_48[0] = 0;
  }
  local_10 = 0;
  local_30 = 0;
  local_20 = 0;
  local_48[0] = local_48[0] | 4;
  local_40 = 0x40;
  local_38 = 0x1000;
  local_28 = 0xffffffffffffffff;
  local_18 = 5;
  uVar1 = (**(code **)(*DAT_146b62f28 + 0x20))(DAT_146b62f28,"_ResourceLib_Images",local_48);
  if ((longlong *)param_1[10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[10] + 0x40))();
  }
  param_1[10] = uVar1;
  return param_1;
}



// FUNCTION 1432debf0 FUN_1432debf0 body=352 status=ok
// SIG undefined FUN_1432debf0(void)

void FUN_1432debf0(RefCountImplCore *param_1)

{
  RefCountImplCore *pRVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  RefCountImplCore *pRVar7;
  
  *(undefined ***)param_1 = &PTR_FUN_145af8c98;
  Scaleform::Lock::DoLock(param_1 + 0x18);
  lVar6 = *(longlong *)(param_1 + 0x48);
  pRVar1 = param_1 + 0x48;
  uVar5 = 0;
  if (lVar6 == 0) {
    uVar4 = 0;
    pRVar7 = (RefCountImplCore *)0x0;
  }
  else {
    plVar3 = (longlong *)(lVar6 + 0x10);
    uVar4 = uVar5;
    do {
      pRVar7 = pRVar1;
      if (*plVar3 != -2) break;
      uVar4 = uVar4 + 1;
      plVar3 = plVar3 + 4;
    } while (uVar4 <= *(ulonglong *)(lVar6 + 8));
  }
  do {
    do {
      if (((pRVar7 == (RefCountImplCore *)0x0) || (lVar6 = *(longlong *)pRVar7, lVar6 == 0)) ||
         (*(longlong *)(lVar6 + 8) < (longlong)uVar4)) {
        Scaleform::Lock::DoLock(param_1 + 0x18);
        if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_1 + 0x50) + 0x40))();
        }
        if (*(longlong *)pRVar1 != 0) {
          lVar6 = *(longlong *)(*(longlong *)pRVar1 + 8) + 1;
          do {
            if (*(longlong *)(uVar5 + 0x10 + *(longlong *)pRVar1) != -2) {
              *(undefined8 *)(uVar5 + 0x10 + *(longlong *)pRVar1) = 0xfffffffffffffffe;
            }
            uVar5 = uVar5 + 0x20;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
          if (*(longlong *)pRVar1 != 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          *(longlong *)pRVar1 = 0;
        }
        Scaleform::Lock::~Lock(param_1 + 0x18);
        Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
        return;
      }
      *(undefined8 *)(*(longlong *)(uVar4 * 0x20 + 0x28 + lVar6) + 0x10) = 0;
      uVar2 = *(ulonglong *)(*(longlong *)pRVar7 + 8);
    } while (((longlong)uVar2 < (longlong)uVar4) || (uVar4 = uVar4 + 1, uVar2 < uVar4));
    plVar3 = (longlong *)(uVar4 * 0x20 + 0x10 + *(longlong *)pRVar7);
    do {
      if (*plVar3 != -2) break;
      uVar4 = uVar4 + 1;
      plVar3 = plVar3 + 4;
    } while (uVar4 <= uVar2);
  } while( true );
}



// FUNCTION 1432ded60 FUN_1432ded60 body=193 status=ok
// SIG undefined FUN_1432ded60(void)

ulonglong FUN_1432ded60(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int *piVar7;
  
  Scaleform::Lock::DoLock(param_1 + 0x18);
  uVar6 = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    plVar2 = (longlong *)*param_2;
    uVar4 = uVar6;
    if (plVar2 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar2 + 0x20))(plVar2,param_2[1]);
    }
    lVar5 = FUN_1432dfb90(param_1 + 0x48,param_2,
                          *(ulonglong *)(*(longlong *)(param_1 + 0x48) + 8) & uVar4);
    if (((-1 < lVar5) &&
        (piVar7 = (int *)((lVar5 + 1) * 0x20 + *(longlong *)(param_1 + 0x48)), piVar7 != (int *)0x0)
        ) && (uVar6 = 0, *piVar7 == 0)) {
      lVar5 = *(longlong *)(piVar7 + 2);
      iVar1 = *(int *)(lVar5 + 8);
      while (iVar1 != 0) {
        cVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::CompareAndSet_NoSync(lVar5 + 8,iVar1,iVar1 + 1);
        if (cVar3 != '\0') {
          uVar6 = *(ulonglong *)(piVar7 + 2);
          break;
        }
        iVar1 = *(int *)(lVar5 + 8);
      }
    }
  }
  Scaleform::Lock::DoLock(param_1 + 0x18);
  return uVar6;
}



// FUNCTION 1432dee30 FUN_1432dee30 body=385 status=ok
// SIG undefined FUN_1432dee30(void)

undefined4 FUN_1432dee30(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  RefCountImpl *this;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined1 local_res8 [8];
  undefined4 local_38 [2];
  longlong local_30;
  
  Scaleform::Lock::DoLock(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    plVar2 = (longlong *)*param_3;
    uVar4 = 0;
    if (plVar2 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar2 + 0x20))(plVar2,param_3[1]);
    }
    lVar5 = FUN_1432dfb90(param_1 + 0x48,param_3,
                          *(ulonglong *)(*(longlong *)(param_1 + 0x48) + 8) & uVar4);
    if ((-1 < lVar5) &&
       (piVar7 = (int *)((lVar5 + 1) * 0x20 + *(longlong *)(param_1 + 0x48)), piVar7 != (int *)0x0))
    {
      if (*piVar7 != 0) {
        this = *(RefCountImpl **)(piVar7 + 2);
        *(RefCountImpl **)(param_2 + 2) = this;
        *param_2 = 2;
        Scaleform::RefCountImpl::AddRef(this);
        uVar8 = *param_2;
        goto LAB_1432def8f;
      }
      lVar5 = *(longlong *)(piVar7 + 2);
      iVar1 = *(int *)(lVar5 + 8);
      while (iVar1 != 0) {
        cVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::CompareAndSet_NoSync(lVar5 + 8,iVar1,iVar1 + 1);
        if (cVar3 != '\0') {
          *(undefined8 *)(param_2 + 2) = *(undefined8 *)(piVar7 + 2);
          *param_2 = 1;
          uVar8 = *param_2;
          goto LAB_1432def8f;
        }
        iVar1 = *(int *)(lVar5 + 8);
      }
      FUN_1432df710(param_1 + 0x48,param_3);
    }
  }
  lVar5 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x98,0);
  if ((lVar5 == 0) || (lVar5 = FUN_1432de650(lVar5,param_1,param_3), lVar5 == 0)) {
    uVar8 = 4;
  }
  else {
    local_38[0] = 1;
    local_30 = lVar5;
    uVar6 = FUN_1432dfd50(local_res8,local_38);
    FUN_1432df9b0(param_1 + 0x48,param_1 + 0x48,local_38,uVar6);
    *(longlong *)(param_2 + 2) = lVar5;
    uVar8 = 3;
    *param_2 = 3;
  }
LAB_1432def8f:
  Scaleform::Lock::DoLock(param_1 + 0x18);
  return uVar8;
}



// FUNCTION 1432defc0 FUN_1432defc0 body=138 status=ok
// SIG undefined FUN_1432defc0(void)

undefined8 FUN_1432defc0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong local_res10;
  
  local_res10 = param_2;
  Scaleform::Lock::DoLock(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != 0) {
    lVar1 = *(longlong *)(lVar2 + 0x18);
    if (lVar1 != 0) {
      lVar2 = FUN_1432dfb00(lVar2 + 0x18,&local_res10,
                            (param_2 >> 6 ^ param_2) & *(ulonglong *)(lVar1 + 8));
      if ((-1 < lVar2) && (lVar2 * 0x10 + 0x18 + lVar1 != 0)) {
        uVar3 = 1;
        goto LAB_1432df02e;
      }
    }
  }
  uVar3 = 0;
LAB_1432df02e:
  Scaleform::Lock::DoLock(param_1 + 0x18);
  return uVar3;
}



// FUNCTION 1432df050 FUN_1432df050 body=180 status=ok
// SIG undefined FUN_1432df050(void)

void FUN_1432df050(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong local_res10;
  
  local_res10 = param_2;
  Scaleform::Lock::DoLock(param_1 + 0x18);
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != 0) {
    lVar1 = *(longlong *)(lVar3 + 0x18);
    lVar3 = lVar3 + 0x18;
    if (lVar1 != 0) {
      lVar2 = FUN_1432dfb00(lVar3,&local_res10,(param_2 >> 6 ^ param_2) & *(ulonglong *)(lVar1 + 8))
      ;
      if ((-1 < lVar2) && (lVar2 * 0x10 + 0x18 + lVar1 != 0)) goto LAB_1432df0e7;
    }
    FUN_1432df860(lVar3,lVar3,&local_res10,param_2 >> 6 ^ param_2);
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(param_2 + 8,1);
  }
LAB_1432df0e7:
  Scaleform::Lock::DoLock(param_1 + 0x18);
  return;
}



// FUNCTION 1432df110 FUN_1432df110 body=138 status=ok
// SIG undefined FUN_1432df110(void)

void FUN_1432df110(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *local_res10;
  
  local_res10 = param_2;
  Scaleform::Lock::DoLock(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1432df5f0(*(longlong *)(param_1 + 0x10) + 0x18,&local_res10);
    iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(param_2 + 1,0xffffffff);
    if (iVar2 == 1) {
      plVar1 = (longlong *)param_2[2];
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,param_2);
        param_2[2] = 0;
      }
      (**(code **)*param_2)(param_2,1);
    }
  }
  Scaleform::Lock::DoLock(param_1 + 0x18);
  return;
}



// FUNCTION 1432df1a0 FUN_1432df1a0 body=375 status=ok
// SIG undefined FUN_1432df1a0(void)

void FUN_1432df1a0(longlong param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  
  Scaleform::Lock::DoLock(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != 0) {
    plVar6 = *(longlong **)(lVar2 + 0x18);
    plVar11 = (longlong *)(lVar2 + 0x18);
    uVar7 = 0;
    if (plVar6 == (longlong *)0x0) {
      plVar11 = (longlong *)0x0;
      uVar10 = 0;
    }
    else {
      puVar1 = (ulonglong *)(plVar6 + 1);
      uVar10 = uVar7;
      do {
        plVar6 = plVar6 + 2;
        if (*plVar6 != -2) break;
        uVar10 = uVar10 + 1;
      } while (uVar10 <= *puVar1);
    }
    do {
      uVar9 = uVar10;
      if (((plVar11 == (longlong *)0x0) || (lVar2 = *plVar11, lVar2 == 0)) ||
         (*(longlong *)(lVar2 + 8) < (longlong)uVar9)) goto LAB_1432df2a7;
      puVar3 = *(undefined8 **)(lVar2 + 0x18 + uVar9 * 0x10);
      iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(puVar3 + 1,0xffffffff);
      if (iVar5 == 1) {
        plVar6 = (longlong *)puVar3[2];
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 8))(plVar6,puVar3);
          puVar3[2] = 0;
        }
        (**(code **)*puVar3)(puVar3,1);
      }
      uVar4 = *(ulonglong *)(*plVar11 + 8);
      uVar10 = uVar9;
      if (((longlong)uVar9 <= (longlong)uVar4) && (uVar10 = uVar9 + 1, uVar10 <= uVar4)) {
        plVar6 = (longlong *)((uVar9 + 2) * 0x10 + *plVar11);
        do {
          if (*plVar6 != -2) break;
          uVar10 = uVar10 + 1;
          plVar6 = plVar6 + 2;
        } while (uVar10 <= uVar4);
      }
    } while( true );
  }
LAB_1432df306:
  Scaleform::Lock::DoLock(param_1 + 0x18);
  return;
LAB_1432df2a7:
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(lVar2 + 0x18) != 0) {
    lVar8 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 8) + 1;
    do {
      if (*(longlong *)(uVar7 + 0x10 + *(longlong *)(lVar2 + 0x18)) != -2) {
        *(undefined8 *)(uVar7 + 0x10 + *(longlong *)(lVar2 + 0x18)) = 0xfffffffffffffffe;
      }
      uVar7 = uVar7 + 0x10;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    if (*(longlong *)(lVar2 + 0x18) != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    *(undefined8 *)(lVar2 + 0x18) = 0;
  }
  goto LAB_1432df306;
}



// FUNCTION 1432df320 FUN_1432df320 body=447 status=ok
// SIG undefined FUN_1432df320(void)

void FUN_1432df320(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  int *piVar7;
  ulonglong uVar8;
  longlong *plVar9;
  
  plVar9 = (longlong *)(param_1 + 0x48);
  Scaleform::Lock::DoLock(param_1 + 0x18);
  lVar1 = *plVar9;
  uVar8 = 0;
  if (lVar1 == 0) {
    uVar8 = 0;
    plVar9 = (longlong *)0x0;
  }
  else {
    plVar6 = (longlong *)(lVar1 + 0x10);
    do {
      if (*plVar6 != -2) break;
      uVar8 = uVar8 + 1;
      plVar6 = plVar6 + 4;
    } while (uVar8 <= *(ulonglong *)(lVar1 + 8));
  }
  do {
    do {
      if (((plVar9 == (longlong *)0x0) || (lVar1 = *plVar9, lVar1 == 0)) ||
         (*(longlong *)(lVar1 + 8) < (longlong)uVar8)) {
        Scaleform::Lock::DoLock(param_1 + 0x18);
        return;
      }
      piVar7 = (int *)((uVar8 + 1) * 0x20 + lVar1);
      if (*piVar7 == 0) {
        lVar1 = *(longlong *)(piVar7 + 2);
        iVar5 = *(int *)(lVar1 + 8);
        while (iVar5 != 0) {
          cVar4 = Scaleform::AtomicOpsRaw_4ByteImpl::CompareAndSet_NoSync(lVar1 + 8,iVar5,iVar5 + 1)
          ;
          if (cVar4 != '\0') {
            puVar2 = *(undefined8 **)(piVar7 + 2);
            FUN_1432e0170(param_2,param_2,param_2[1] + 1);
            plVar6 = (longlong *)(*param_2 + (param_2[1] + -1) * 8);
            if (plVar6 != (longlong *)0x0) {
              if (puVar2 != (undefined8 *)0x0) {
                Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(puVar2 + 1,1);
              }
              *plVar6 = (longlong)puVar2;
            }
            if ((puVar2 != (undefined8 *)0x0) &&
               (iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(puVar2 + 1,0xffffffff)
               , iVar5 == 1)) {
              plVar6 = (longlong *)puVar2[2];
              if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 8))(plVar6,puVar2);
                puVar2[2] = 0;
              }
              (**(code **)*puVar2)(puVar2,1);
            }
            break;
          }
          iVar5 = *(int *)(lVar1 + 8);
        }
      }
      uVar3 = *(ulonglong *)(*plVar9 + 8);
    } while (((longlong)uVar3 < (longlong)uVar8) || (uVar8 = uVar8 + 1, uVar3 < uVar8));
    plVar6 = (longlong *)(*plVar9 + 0x10 + uVar8 * 0x20);
    do {
      if (*plVar6 != -2) break;
      uVar8 = uVar8 + 1;
      plVar6 = plVar6 + 4;
    } while (uVar8 <= uVar3);
  } while( true );
}



// FUNCTION 1432df4f0 FUN_1432df4f0 body=250 status=ok
// SIG undefined FUN_1432df4f0(void)

void FUN_1432df4f0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 uVar6;
  int *piVar7;
  longlong *local_18;
  undefined8 local_10;
  
  plVar1 = (longlong *)(param_1 + 0x48);
  Scaleform::Lock::DoLock(param_1 + 0x18);
  plVar3 = (longlong *)(**(code **)(*param_2 + 8))(param_2,&local_18);
  piVar7 = (int *)0x0;
  if (*plVar1 != 0) {
    plVar2 = (longlong *)*plVar3;
    piVar4 = piVar7;
    if (plVar2 != (longlong *)0x0) {
      piVar4 = (int *)(**(code **)(*plVar2 + 0x20))(plVar2,plVar3[1]);
    }
    lVar5 = FUN_1432dfb90(plVar1,plVar3,*(ulonglong *)(*plVar1 + 8) & (ulonglong)piVar4);
    if (-1 < lVar5) {
      piVar7 = (int *)((lVar5 + 1) * 0x20 + *plVar1);
    }
  }
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x10))(local_18,local_10);
  }
  if (((piVar7 != (int *)0x0) && (*piVar7 == 0)) && (*(longlong **)(piVar7 + 2) == param_2)) {
    uVar6 = (**(code **)(*param_2 + 8))(param_2,&local_18);
    FUN_1432df710(plVar1,uVar6);
    if (local_18 != (longlong *)0x0) {
      (**(code **)(*local_18 + 0x10))(local_18,local_10);
    }
  }
  Scaleform::Lock::DoLock(param_1 + 0x18);
  return;
}



// FUNCTION 1432df5f0 FUN_1432df5f0 body=278 status=ok
// SIG undefined FUN_1432df5f0(void)

ulonglong FUN_1432df5f0(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong in_RAX;
  ulonglong *puVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar2 = *param_2;
  uVar3 = *(ulonglong *)(lVar1 + 8);
  uVar7 = (uVar2 >> 6 ^ uVar2) & uVar3;
  puVar5 = (ulonglong *)((uVar7 + 1) * 0x10 + lVar1);
  if ((*puVar5 != 0xfffffffffffffffe) && (((puVar5[1] >> 6 ^ puVar5[1]) & uVar3) == uVar7)) {
    uVar4 = uVar7;
    uVar9 = 0xffffffffffffffff;
    while ((uVar8 = uVar4, uVar4 = puVar5[1], ((uVar4 >> 6 ^ uVar4) & uVar3) != uVar7 ||
           (uVar4 != uVar2))) {
      uVar4 = *puVar5;
      if (uVar4 == 0xffffffffffffffff) {
        return (ulonglong)puVar5 & 0xffffffffffffff00;
      }
      puVar5 = (ulonglong *)((uVar4 + 1) * 0x10 + lVar1);
      uVar9 = uVar8;
    }
    if (uVar7 == uVar8) {
      uVar2 = *puVar5;
      if (uVar2 != 0xffffffffffffffff) {
        *puVar5 = 0xfffffffffffffffe;
        puVar6 = (ulonglong *)((uVar2 + 1) * 0x10 + lVar1);
        *puVar5 = *puVar6;
        puVar5[1] = puVar6[1];
        puVar5 = puVar6;
      }
    }
    else {
      *(ulonglong *)(lVar1 + (uVar9 + 1) * 0x10) = *puVar5;
    }
    *puVar5 = 0xfffffffffffffffe;
    param_1 = (longlong *)*param_1;
    *param_1 = *param_1 + -1;
    return CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  }
  return (ulonglong)puVar5 & 0xffffffffffffff00;
}



// FUNCTION 1432df710 FUN_1432df710 body=324 status=ok
// SIG undefined FUN_1432df710(void)

ulonglong FUN_1432df710(ulonglong *param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if (*param_1 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,param_2[1]);
  }
  uVar3 = *(ulonglong *)(*param_1 + 8) & uVar3;
  uVar4 = uVar3 * 0x20;
  puVar6 = (ulonglong *)(*param_1 + 0x10 + uVar4);
  if ((*puVar6 != 0xfffffffffffffffe) && (puVar6[1] == uVar3)) {
    uVar7 = 0xffffffffffffffff;
    uVar8 = uVar3;
    while ((puVar6[1] != uVar3 || (uVar4 = FUN_1432dfcc0(puVar6 + 2,param_2), (char)uVar4 == '\0')))
    {
      uVar2 = *puVar6;
      if (uVar2 == 0xffffffffffffffff) {
        return uVar4 & 0xffffffffffffff00;
      }
      uVar4 = *param_1;
      puVar6 = (ulonglong *)(uVar4 + 0x10 + uVar2 * 0x20);
      uVar7 = uVar8;
      uVar8 = uVar2;
    }
    if (uVar3 == uVar8) {
      if (*puVar6 != 0xffffffffffffffff) {
        lVar5 = *puVar6 * 0x20 + *param_1;
        *puVar6 = 0xfffffffffffffffe;
        *puVar6 = *(ulonglong *)(lVar5 + 0x10);
        puVar6[1] = *(ulonglong *)(lVar5 + 0x18);
        uVar3 = *(ulonglong *)(lVar5 + 0x28);
        puVar6[2] = *(ulonglong *)(lVar5 + 0x20);
        puVar6[3] = uVar3;
        puVar6 = (ulonglong *)(lVar5 + 0x10);
      }
    }
    else {
      *(ulonglong *)(*param_1 + 0x10 + uVar7 * 0x20) = *puVar6;
    }
    *puVar6 = 0xfffffffffffffffe;
    plVar1 = (longlong *)*param_1;
    *plVar1 = *plVar1 + -1;
    return CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
  }
  return ((uVar3 & 0x7ffffffffffffff) >> 3) << 8;
}



// FUNCTION 1432df860 FUN_1432df860 body=327 status=ok
// SIG undefined FUN_1432df860(void)

ulonglong * FUN_1432df860(longlong *param_1,undefined8 param_2,ulonglong *param_3,ulonglong param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    lVar6 = 8;
  }
  else {
    if ((ulonglong)(*plVar1 * 5) <= plVar1[1] * 4 + 4U) goto LAB_1432df8b9;
    lVar6 = plVar1[1] * 2 + 2;
  }
  FUN_1432e0210(param_1,param_2,lVar6);
LAB_1432df8b9:
  plVar1 = (longlong *)*param_1;
  uVar5 = plVar1[1];
  *plVar1 = *plVar1 + 1;
  lVar6 = *param_1;
  param_4 = uVar5 & param_4;
  puVar8 = (ulonglong *)((param_4 + 1) * 0x10 + lVar6);
  uVar2 = *puVar8;
  uVar7 = param_4;
  if (uVar2 == 0xfffffffffffffffe) {
    *puVar8 = 0xffffffffffffffff;
    puVar8[1] = *param_3;
  }
  else {
    do {
      uVar7 = uVar7 + 1 & uVar5;
      puVar4 = (ulonglong *)((uVar7 + 1) * 0x10 + lVar6);
    } while (*puVar4 != 0xfffffffffffffffe);
    uVar5 = (puVar8[1] >> 6 ^ puVar8[1]) & uVar5;
    if (uVar5 == param_4) {
      *puVar4 = uVar2;
      puVar4[1] = puVar8[1];
      puVar8[1] = *param_3;
      *puVar8 = uVar7;
    }
    else {
      puVar3 = (ulonglong *)((uVar5 + 1) * 0x10 + lVar6);
      uVar5 = *puVar3;
      while (uVar5 != param_4) {
        puVar3 = (ulonglong *)((*puVar3 + 1) * 0x10 + lVar6);
        uVar5 = *puVar3;
      }
      *puVar4 = uVar2;
      puVar4[1] = puVar8[1];
      *puVar3 = uVar7;
      puVar8[1] = *param_3;
      *puVar8 = 0xffffffffffffffff;
    }
  }
  return puVar8 + 1;
}



// FUNCTION 1432df9b0 FUN_1432df9b0 body=321 status=ok
// SIG undefined FUN_1432df9b0(void)

void FUN_1432df9b0(longlong *param_1,undefined8 param_2,undefined4 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    lVar7 = 8;
  }
  else {
    if ((ulonglong)(*plVar1 * 5) <= plVar1[1] * 4 + 4U) goto LAB_1432dfa04;
    lVar7 = plVar1[1] * 2 + 2;
  }
  FUN_1432e0340(param_1,param_2,lVar7);
LAB_1432dfa04:
  plVar1 = (longlong *)*param_1;
  *plVar1 = *plVar1 + 1;
  param_4 = param_4 & plVar1[1];
  lVar7 = *param_1;
  lVar8 = param_4 * 0x20 + lVar7;
  lVar2 = *(longlong *)(lVar8 + 0x10);
  uVar5 = param_4;
  if (lVar2 == -2) {
    *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    uVar10 = *param_3;
    uVar11 = param_3[1];
    uVar12 = param_3[2];
    uVar13 = param_3[3];
  }
  else {
    do {
      uVar5 = uVar5 + 1 & plVar1[1];
      lVar9 = uVar5 * 0x20 + lVar7;
    } while (*(longlong *)(lVar9 + 0x10) != -2);
    if (*(ulonglong *)(lVar8 + 0x18) == param_4) {
      *(longlong *)(lVar9 + 0x10) = lVar2;
      *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
      uVar4 = *(undefined8 *)(lVar8 + 0x28);
      *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar8 + 0x20);
      *(undefined8 *)(lVar9 + 0x28) = uVar4;
      uVar10 = *param_3;
      uVar11 = param_3[1];
      uVar12 = param_3[2];
      uVar13 = param_3[3];
      *(ulonglong *)(lVar8 + 0x10) = uVar5;
    }
    else {
      puVar6 = (ulonglong *)(lVar7 + 0x10 + *(ulonglong *)(lVar8 + 0x18) * 0x20);
      uVar3 = *puVar6;
      while (uVar3 != param_4) {
        puVar6 = (ulonglong *)(lVar7 + 0x10 + *puVar6 * 0x20);
        uVar3 = *puVar6;
      }
      *(longlong *)(lVar9 + 0x10) = lVar2;
      *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
      uVar4 = *(undefined8 *)(lVar8 + 0x28);
      *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar8 + 0x20);
      *(undefined8 *)(lVar9 + 0x28) = uVar4;
      *puVar6 = uVar5;
      uVar10 = *param_3;
      uVar11 = param_3[1];
      uVar12 = param_3[2];
      uVar13 = param_3[3];
      *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar8 + 0x18) = param_4;
  *(undefined4 *)(lVar8 + 0x20) = uVar10;
  *(undefined4 *)(lVar8 + 0x24) = uVar11;
  *(undefined4 *)(lVar8 + 0x28) = uVar12;
  *(undefined4 *)(lVar8 + 0x2c) = uVar13;
  return;
}



// FUNCTION 1432dfb00 FUN_1432dfb00 body=134 status=ok
// SIG undefined FUN_1432dfb00(void)

ulonglong FUN_1432dfb00(longlong *param_1,ulonglong *param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  puVar2 = (ulonglong *)((param_3 + 1) * 0x10 + lVar1);
  if ((*puVar2 != 0xfffffffffffffffe) &&
     (uVar3 = param_3, ((puVar2[1] >> 6 ^ puVar2[1]) & *(ulonglong *)(lVar1 + 8)) == param_3)) {
    while( true ) {
      if ((((puVar2[1] >> 6 ^ puVar2[1]) & *(ulonglong *)(lVar1 + 8)) == param_3) &&
         (puVar2[1] == *param_2)) {
        return uVar3;
      }
      uVar3 = *puVar2;
      if (uVar3 == 0xffffffffffffffff) break;
      puVar2 = (ulonglong *)((uVar3 + 1) * 0x10 + lVar1);
    }
  }
  return 0xffffffffffffffff;
}



// FUNCTION 1432dfb90 FUN_1432dfb90 body=290 status=ok
// SIG undefined FUN_1432dfb90(void)

longlong FUN_1432dfb90(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *local_28;
  undefined8 local_20;
  
  plVar4 = (longlong *)(*param_1 + 0x10 + param_3 * 0x20);
  if ((*plVar4 != -2) && (lVar5 = param_3, plVar4[1] == param_3)) {
    while( true ) {
      if (plVar4[1] == param_3) {
        if ((int)plVar4[2] == 0) {
          plVar3 = (longlong *)
                   (**(code **)(*(longlong *)plVar4[3] + 8))((longlong *)plVar4[3],&local_28);
          plVar1 = (longlong *)*plVar3;
          if ((plVar1 == (longlong *)0x0) || (*param_2 == 0)) {
            cVar2 = '\0';
          }
          else {
            cVar2 = (**(code **)(*plVar1 + 0x28))(plVar1,plVar3[1],param_2);
          }
          if (local_28 != (longlong *)0x0) {
            (**(code **)(*local_28 + 0x10))(local_28,local_20);
          }
        }
        else {
          plVar1 = *(longlong **)(plVar4[3] + 0x28);
          if ((plVar1 == (longlong *)0x0) || (*param_2 == 0)) {
            cVar2 = '\0';
          }
          else {
            cVar2 = (**(code **)(*plVar1 + 0x28))(plVar1,*(undefined8 *)(plVar4[3] + 0x30),param_2);
          }
        }
        if (cVar2 != '\0') {
          return lVar5;
        }
      }
      lVar5 = *plVar4;
      if (lVar5 == -1) break;
      plVar4 = (longlong *)(*param_1 + 0x10 + lVar5 * 0x20);
    }
  }
  return -1;
}



// FUNCTION 1432dfcc0 FUN_1432dfcc0 body=140 status=ok
// SIG undefined FUN_1432dfcc0(void)

ulonglong FUN_1432dfcc0(int *param_1,longlong *param_2)

{
  longlong *plVar1;
  byte bVar2;
  ulonglong in_RAX;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *local_18;
  undefined8 local_10;
  
  if (*param_1 == 0) {
    plVar3 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 2) + 8))(*(longlong **)(param_1 + 2),&local_18);
    plVar1 = (longlong *)*plVar3;
    if ((plVar1 == (longlong *)0x0) || (*param_2 == 0)) {
      bVar2 = 0;
    }
    else {
      bVar2 = (**(code **)(*plVar1 + 0x28))(plVar1,plVar3[1],param_2);
    }
    if (local_18 != (longlong *)0x0) {
      (**(code **)(*local_18 + 0x10))(local_18,local_10);
    }
    return (ulonglong)bVar2;
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 2) + 0x28);
  if ((plVar1 != (longlong *)0x0) && (*param_2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001432dfd40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*plVar1 + 0x28))
                      (plVar1,*(undefined8 *)(*(longlong *)(param_1 + 2) + 0x30),param_2);
    return uVar4;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1432dfd50 FUN_1432dfd50 body=260 status=ok
// SIG undefined FUN_1432dfd50(void)

undefined8 FUN_1432dfd50(undefined8 param_1,int *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  longlong *plVar6;
  longlong **pplVar7;
  undefined8 uVar8;
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  if (*param_2 == 0) {
    pplVar7 = (longlong **)
              (**(code **)(**(longlong **)(param_2 + 2) + 8))(*(longlong **)(param_2 + 2),&local_28)
    ;
    bVar5 = true;
    bVar4 = false;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 2);
    plVar2 = *(longlong **)(lVar1 + 0x28);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))(plVar2,*(undefined8 *)(lVar1 + 0x30));
    }
    pplVar7 = &local_38;
    bVar5 = false;
    bVar4 = true;
    local_38 = *(longlong **)(lVar1 + 0x28);
    local_30 = *(undefined8 *)(lVar1 + 0x30);
  }
  uVar8 = local_30;
  plVar6 = local_38;
  plVar2 = *pplVar7;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2,pplVar7[1]);
  }
  plVar2 = *pplVar7;
  plVar3 = pplVar7[1];
  if ((bVar4) && (plVar6 != (longlong *)0x0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6,uVar8);
  }
  if ((bVar5) && (local_28 != (longlong *)0x0)) {
    (**(code **)(*local_28 + 0x10))(local_28,local_20);
  }
  if (plVar2 != (longlong *)0x0) {
    uVar8 = (**(code **)(*plVar2 + 0x20))(plVar2,plVar3);
    (**(code **)(*plVar2 + 0x10))(plVar2,plVar3);
    return uVar8;
  }
  return 0;
}



// FUNCTION 1432dfe60 FUN_1432dfe60 body=148 status=ok
// SIG undefined FUN_1432dfe60(void)

RefCountNTSImplCore * FUN_1432dfe60(RefCountNTSImplCore *param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = *(ulonglong *)(param_1 + 0x20);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1432dff00 FUN_1432dff00 body=89 status=ok
// SIG undefined FUN_1432dff00(void)

undefined8 FUN_1432dff00(undefined8 param_1,ulonglong param_2)

{
  FUN_1432de5c0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1432dff60 FUN_1432dff60 body=89 status=ok
// SIG undefined FUN_1432dff60(void)

undefined8 FUN_1432dff60(undefined8 param_1,ulonglong param_2)

{
  FUN_1432de730();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 1432dffc0 FUN_1432dffc0 body=89 status=ok
// SIG undefined FUN_1432dffc0(void)

undefined8 FUN_1432dffc0(undefined8 param_1,ulonglong param_2)

{
  FUN_1432debf0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1432e0020 FUN_1432e0020 body=96 status=ok
// SIG undefined FUN_1432e0020(void)

void FUN_1432e0020(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_1 != 0) {
    lVar1 = 0;
    lVar2 = *(longlong *)(*param_1 + 8) + 1;
    do {
      if (*(longlong *)(lVar1 + 0x10 + *param_1) != -2) {
        *(undefined8 *)(lVar1 + 0x10 + *param_1) = 0xfffffffffffffffe;
      }
      lVar1 = lVar1 + 0x10;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    if (*param_1 != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    *param_1 = 0;
  }
  return;
}



// FUNCTION 1432e0080 FUN_1432e0080 body=96 status=ok
// SIG undefined FUN_1432e0080(void)

void FUN_1432e0080(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_1 != 0) {
    lVar1 = 0;
    lVar2 = *(longlong *)(*param_1 + 8) + 1;
    do {
      if (*(longlong *)(lVar1 + 0x10 + *param_1) != -2) {
        *(undefined8 *)(lVar1 + 0x10 + *param_1) = 0xfffffffffffffffe;
      }
      lVar1 = lVar1 + 0x20;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    if (*param_1 != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    *param_1 = 0;
  }
  return;
}



// FUNCTION 1432e00e0 FUN_1432e00e0 body=129 status=ok
// SIG undefined FUN_1432e00e0(void)

void FUN_1432e00e0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + -8 + param_2 * 8);
    do {
      puVar1 = (undefined8 *)*plVar4;
      if ((puVar1 != (undefined8 *)0x0) &&
         (iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(puVar1 + 1,0xffffffff),
         iVar3 == 1)) {
        plVar2 = (longlong *)puVar1[2];
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 8))(plVar2,puVar1);
          puVar1[2] = 0;
        }
        (**(code **)*puVar1)(puVar1);
      }
      plVar4 = plVar4 + -1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1432e0170 FUN_1432e0170 body=155 status=ok
// SIG undefined FUN_1432e0170(void)

void FUN_1432e0170(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  if (param_3 < (ulonglong)param_1[1]) {
    FUN_1432e00e0(*param_1 + param_3 * 8,param_1[1] - param_3);
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1432bc070(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
    return;
  }
  if ((ulonglong)param_1[2] < param_3) {
    FUN_1432bc070(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
    return;
  }
  param_1[1] = param_3;
  return;
}



// FUNCTION 1432e0210 FUN_1432e0210 body=304 status=ok
// SIG undefined FUN_1432e0210(void)

void FUN_1432e0210(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong *puVar5;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_1432e0020();
    return;
  }
  if (param_3 < 8) {
    lVar4 = 8;
  }
  else {
    cVar2 = FUN_14207c6a0(param_3 - 1);
    lVar4 = 1L << (cVar2 + 1U & 0x3f);
  }
  local_res18[0] = 2;
  lVar3 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,(lVar4 + 1) * 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar4 + -1;
  lVar1 = lVar3;
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    lVar1 = lVar1 + 0x10;
    *(undefined8 *)(lVar1 + (longlong)local_res20) = 0xfffffffffffffffe;
  }
  if (*param_1 != 0) {
    lVar4 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar1 = *param_1;
      if (*(longlong *)(lVar1 + 0x10 + lVar3) != -2) {
        puVar5 = (ulonglong *)(lVar1 + 0x18 + lVar3);
        FUN_1432df860(&local_res20,param_2,puVar5,*puVar5 >> 6 ^ *puVar5);
        *(undefined8 *)(lVar1 + 0x10 + lVar3) = 0xfffffffffffffffe;
      }
      lVar3 = lVar3 + 0x10;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    if (*param_1 != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 1432e0340 FUN_1432e0340 body=327 status=ok
// SIG undefined FUN_1432e0340(void)

void FUN_1432e0340(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  lVar5 = 0;
  local_res18[0] = 0;
  if (param_3 == 0) {
    FUN_1432e0080();
    return;
  }
  if (param_3 < 8) {
    lVar3 = 8;
  }
  else {
    cVar1 = FUN_14207c6a0(param_3 - 1);
    lVar3 = 1L << (cVar1 + 1U & 0x3f);
  }
  local_res20 = (undefined8 *)0x0;
  local_res18[0] = 2;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,lVar3 * 0x20 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar3 + -1;
  lVar4 = lVar5;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)(lVar4 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar4 = lVar4 + 0x20;
  }
  if (*param_1 != 0) {
    lVar3 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar4 = *param_1 + lVar5;
      if (*(longlong *)(lVar4 + 0x10) != -2) {
        uVar2 = FUN_1432dfd50(local_res18,lVar4 + 0x20);
        FUN_1432df9b0(&local_res20,param_2,lVar4 + 0x20,uVar2);
        *(undefined8 *)(lVar4 + 0x10) = 0xfffffffffffffffe;
      }
      lVar5 = lVar5 + 0x20;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    if (*param_1 != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 1432e0490 FUN_1432e0490 body=190 status=ok
// SIG undefined FUN_1432e0490(void)

undefined8 FUN_1432e0490(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  SysFile *this;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uVar2 = 0;
  local_18 = 0;
  this = (SysFile *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x18,0);
  if (this != (SysFile *)0x0) {
    FUN_1432c2fb0(&local_18,param_2);
    uVar2 = Scaleform::SysFile::SysFile(this,(String *)&local_18,param_3,param_4);
    uVar3 = CONCAT44(uStack_14,local_18) & 0xfffffffffffffffc;
    iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar3 + 8,0xffffffff);
    if (iVar1 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar3);
    }
  }
  return uVar2;
}



// FUNCTION 1432e0560 FUN_1432e0560 body=117 status=ok
// SIG undefined FUN_1432e0560(void)

undefined8 FUN_1432e0560(void)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong local_res18 [2];
  undefined8 local_28 [4];
  
  FUN_1432c2fb0(local_res18);
  bVar1 = Scaleform::SysFile::GetFileStat((FileStat *)local_28,(String *)local_res18);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res18[0] & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res18[0] & 0xfffffffffffffffc);
  }
  uVar3 = 0xffffffffffffffff;
  if (bVar1) {
    uVar3 = local_28[0];
  }
  return uVar3;
}



// FUNCTION 1432e05e0 FUN_1432e05e0 body=133 status=ok
// SIG undefined FUN_1432e05e0(void)

RefCountImpl *
FUN_1432e05e0(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
             undefined4 param_5)

{
  int iVar1;
  RefCountImpl *this;
  
  this = (RefCountImpl *)(**(code **)(*param_1 + 8))(param_1,param_2,param_4,param_5);
  if (this != (RefCountImpl *)0x0) {
    iVar1 = (**(code **)(*(longlong *)this + 0x40))(this);
    if (iVar1 == 0) {
      return this;
    }
  }
  if (param_3 != 0) {
    FUN_1432bbf90(param_3,"Loader failed to open \'%s\'",param_2);
  }
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
  }
  return (RefCountImpl *)0x0;
}



// FUNCTION 1432e0670 FUN_1432e0670 body=72 status=ok
// SIG undefined FUN_1432e0670(void)

void FUN_1432e0670(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 2;
  lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x18,local_res18);
  if (lVar1 != 0) {
    FUN_143359c60(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 1432e06c0 FUN_1432e06c0 body=100 status=ok
// SIG undefined FUN_1432e06c0(void)

void FUN_1432e06c0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  RefCountImpl *this;
  
  lVar1 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x28);
  if (lVar1 == 0) {
    this = (RefCountImpl *)0x0;
  }
  else {
    this = (RefCountImpl *)FUN_1432e0d30(lVar1,param_2);
  }
  (**(code **)(*param_1 + 0x10))(param_1,2,this);
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
  }
  return;
}



// FUNCTION 1432e0730 GetLog body=92 status=ok
// SIG undefined GetLog(void)

longlong * Scaleform::GFx::StateBag::GetLog(longlong *param_1,longlong *param_2)

{
  RefCountImpl *this;
  RefCountImpl *this_00;
  
  this = (RefCountImpl *)(**(code **)(*param_1 + 0x18))(param_1,2);
  this_00 = *(RefCountImpl **)(this + 0x20);
  if (this_00 == (RefCountImpl *)0x0) {
    this_00 = (RefCountImpl *)Log::GetGlobalLog();
    if (this_00 == (RefCountImpl *)0x0) goto LAB_1432e076e;
  }
  RefCountImpl::AddRef(this_00);
LAB_1432e076e:
  *param_2 = (longlong)this_00;
  RefCountImpl::Release(this);
  return param_2;
}



// FUNCTION 1432e07c0 GetLogState body=32 status=ok
// SIG undefined GetLogState(void)

undefined8 * Scaleform::GFx::StateBag::GetLogState(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x18))(param_1,2);
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 1432e07f0 FUN_1432e07f0 body=85 status=ok
// SIG undefined FUN_1432e07f0(void)

void FUN_1432e07f0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined4 local_res8 [2];
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  if ((plVar1 == (longlong *)0x0) &&
     (plVar1 = (longlong *)Scaleform::Log::GetGlobalLog(), plVar1 == (longlong *)0x0)) {
    return;
  }
  local_res8[0] = *param_2;
  (**(code **)(*plVar1 + 8))(plVar1,local_res8,param_3,param_4);
  return;
}



// FUNCTION 1432e0850 FUN_1432e0850 body=41 status=ok
// SIG undefined FUN_1432e0850(void)

void FUN_1432e0850(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res20;
  undefined4 local_18 [6];
  
  local_18[0] = *param_2;
  local_res20 = param_4;
  (**(code **)(*param_1 + 8))(param_1,local_18,param_3,&local_res20);
  return;
}



// FUNCTION 1432e0880 FUN_1432e0880 body=240 status=ok
// SIG undefined FUN_1432e0880(void)

undefined8 FUN_1432e0880(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  float local_res8 [2];
  float local_res10 [2];
  undefined4 local_428 [2];
  undefined8 local_420;
  undefined8 local_418;
  undefined1 local_408 [1024];
  
  local_res10[0] = *(float *)(param_3 + 0x1c) * 0.05;
  local_428[0] = 2;
  local_res8[0] = *(float *)(param_3 + 0xc) * 0.05;
  local_420 = param_1;
  local_418 = param_2;
  FUN_1433561d0(local_408,local_428);
  FUN_1433563e0(local_408,"| {0:4.4} {1:4.4} {2:4.4} |\n| {3:4.4} {4:4.4} {5:4.4} |\n");
  FUN_1432e0c30(local_408,param_3);
  FUN_1432e0c30(local_408,param_3 + 4);
  FUN_1432e0c30(local_408,local_res8);
  FUN_1432e0c30(local_408,param_3 + 0x10);
  FUN_1432e0c30(local_408,param_3 + 0x14);
  FUN_1432e0c30(local_408,local_res10);
  Scaleform::MsgFormat::FinishFormatD(local_408);
  FUN_1433562f0(local_408);
  return param_1;
}



// FUNCTION 1432e0980 FUN_1432e0980 body=220 status=ok
// SIG undefined FUN_1432e0980(void)

undefined8 FUN_1432e0980(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined4 local_428 [2];
  undefined8 local_420;
  undefined8 local_418;
  undefined1 local_408 [1024];
  
  local_428[0] = 2;
  local_420 = param_1;
  local_418 = param_2;
  FUN_1433561d0(local_408,local_428);
  FUN_1433563e0(local_408,
                "    *         +\n| {0:4.4} {1:4.4}|\n| {2:4.4} {3:4.4}|\n| {4:4.4} {5:4.4}|\n| {6:4.4} {7:4.4}|\n"
               );
  FUN_1432e0c30(local_408,param_3);
  FUN_1432e0c30(local_408,param_3 + 0x10);
  FUN_1432e0c30(local_408,param_3 + 4);
  FUN_1432e0c30(local_408,param_3 + 0x14);
  FUN_1432e0c30(local_408,param_3 + 8);
  FUN_1432e0c30(local_408,param_3 + 0x18);
  FUN_1432e0c30(local_408,param_3 + 0xc);
  FUN_1432e0c30(local_408,param_3 + 0x1c);
  Scaleform::MsgFormat::FinishFormatD(local_408);
  FUN_1433562f0(local_408);
  return param_1;
}



// FUNCTION 1432e0a70 FUN_1432e0a70 body=203 status=ok
// SIG undefined FUN_1432e0a70(void)

undefined8 FUN_1432e0a70(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  uint local_res8 [2];
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  undefined4 local_428 [2];
  undefined8 local_420;
  undefined8 local_418;
  undefined1 local_408 [1024];
  
  local_res20[0] = (uint)param_3[3];
  local_res18[0] = (uint)*param_3;
  local_res10[0] = (uint)param_3[1];
  local_res8[0] = (uint)param_3[2];
  local_428[0] = 2;
  local_420 = param_1;
  local_418 = param_2;
  FUN_1433561d0(local_408,local_428);
  FUN_1433563e0(local_408,"RGBA: {0} {1} {2} {3}\n");
  FUN_1432e0b40(local_408,local_res8);
  FUN_1432e0b40(local_408,local_res10);
  FUN_1432e0b40(local_408,local_res18);
  FUN_1432e0b40(local_408,local_res20);
  Scaleform::MsgFormat::FinishFormatD(local_408);
  FUN_1433562f0(local_408);
  return param_1;
}



// FUNCTION 1432e0b40 FUN_1432e0b40 body=232 status=ok
// SIG undefined FUN_1432e0b40(void)

void FUN_1432e0b40(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  cVar1 = FUN_143356fb0();
  if (cVar1 != '\0') {
    do {
      if (*(ulonglong *)(param_1 + 0x3f0) < 0x60) {
        plVar5 = *(longlong **)(param_1 + 0x1e0);
        if (plVar5 == (longlong *)0x0) {
          plVar5 = DAT_146b62f28;
        }
        lVar2 = (**(code **)(*plVar5 + 0x48))(plVar5,0x60,8);
      }
      else {
        lVar2 = *(longlong *)(param_1 + 1000);
        lVar3 = (lVar2 + 0x5fU & 0xfffffffffffffff8) + 8;
        *(longlong *)(param_1 + 1000) = lVar3;
        uVar4 = (lVar3 - (longlong)(param_1 + 0x1e0)) - 8;
        lVar3 = 0x200 - uVar4;
        if (0x1ff < uVar4) {
          lVar3 = 0;
        }
        *(longlong *)(param_1 + 0x3f0) = lVar3;
      }
      lVar3 = 0;
      if (lVar2 != 0) {
        lVar3 = FUN_143354cd0(lVar2,param_1,*param_2);
      }
      FUN_143357040(param_1,lVar3,1);
      cVar1 = FUN_143356fb0(param_1);
    } while (cVar1 != '\0');
  }
  *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
  return;
}



// FUNCTION 1432e0c30 FUN_1432e0c30 body=243 status=ok
// SIG undefined FUN_1432e0c30(void)

void FUN_1432e0c30(longlong param_1,float *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  cVar1 = FUN_143356fb0();
  if (cVar1 != '\0') {
    do {
      if (*(ulonglong *)(param_1 + 0x3f0) < 0x1a8) {
        plVar5 = *(longlong **)(param_1 + 0x1e0);
        if (plVar5 == (longlong *)0x0) {
          plVar5 = DAT_146b62f28;
        }
        lVar2 = (**(code **)(*plVar5 + 0x48))(plVar5,0x1a8,8);
      }
      else {
        lVar2 = *(longlong *)(param_1 + 1000);
        lVar3 = (lVar2 + 0x1a7U & 0xfffffffffffffff8) + 8;
        *(longlong *)(param_1 + 1000) = lVar3;
        uVar4 = (lVar3 - (longlong)(param_1 + 0x1e0)) - 8;
        lVar3 = 0x200 - uVar4;
        if (0x1ff < uVar4) {
          lVar3 = 0;
        }
        *(longlong *)(param_1 + 0x3f0) = lVar3;
      }
      lVar3 = 0;
      if (lVar2 != 0) {
        lVar3 = FUN_1433557b0(lVar2,param_1,(double)*param_2);
      }
      FUN_143357040(param_1,lVar3,1);
      cVar1 = FUN_143356fb0(param_1);
    } while (cVar1 != '\0');
  }
  *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
  return;
}



// FUNCTION 1432e0d30 FUN_1432e0d30 body=116 status=ok
// SIG undefined FUN_1432e0d30(void)

undefined8 * FUN_1432e0d30(undefined8 *param_1,RefCountImpl *param_2)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145af8d00;
  param_1[3] = &PTR_LAB_145af8d10;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined4 *)(param_1 + 2) = 2;
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
    param_1[4] = param_2;
    return param_1;
  }
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 1432e0db0 FUN_1432e0db0 body=43 status=ok
// SIG undefined FUN_1432e0db0(void)

undefined8 * FUN_1432e0db0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145af8cf0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1432e0de0 FUN_1432e0de0 body=148 status=ok
// SIG undefined FUN_1432e0de0(void)

RefCountImplCore * FUN_1432e0de0(RefCountImplCore *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_145af8d00;
  *(undefined ***)(param_1 + 0x18) = &PTR_LAB_145af8d10;
  if (*(RefCountImpl **)(param_1 + 0x20) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x20));
  }
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_145af8cf0;
  *(undefined ***)param_1 = &PTR_FUN_144f70c80;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1432e0e80 FUN_1432e0e80 body=105 status=ok
// SIG undefined FUN_1432e0e80(void)

undefined8 * FUN_1432e0e80(undefined8 *param_1,RefCountImpl *param_2)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145af8e88;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined4 *)(param_1 + 2) = 0xe;
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
    param_1[3] = param_2;
    return param_1;
  }
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 1432e0f00 FUN_1432e0f00 body=931 status=ok
// SIG undefined FUN_1432e0f00(void)

undefined8 FUN_1432e0f00(longlong *param_1,longlong param_2,ulonglong *param_3)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  RefCountImpl *this;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong local_res10;
  ulonglong local_res20;
  undefined8 in_stack_ffffffffffffff58;
  uint uVar10;
  longlong *local_88;
  longlong local_80;
  ulonglong local_78;
  undefined8 local_70;
  FileStat local_68 [24];
  undefined4 local_50 [2];
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
  undefined4 local_30;
  
  uVar10 = (uint)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  lVar1 = *(longlong *)(param_2 + 0x28);
  if ((lVar1 == 0) || (*(longlong *)(param_2 + 0x20) == 0)) {
    return 0;
  }
  FUN_1432c31e0(&local_res10,param_3);
  cVar2 = FUN_143307640((*param_3 & 0xfffffffffffffffc) + 0xc);
  if (cVar2 == '\0') {
    if ((longlong *)param_1[3] != (longlong *)0x0) {
      uVar4 = (**(code **)(*(longlong *)param_1[3] + 0x18))();
      if ((uVar4 & 1) != 0) {
        uVar6 = FUN_1432c50d0(param_3,&local_res20,&DAT_145af8ed0);
        FUN_1432c4d80(&local_res10,uVar6);
        uVar9 = local_res20 & 0xfffffffffffffffc;
        iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar9 + 8,0xffffffff);
        if (iVar5 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar9);
        }
        bVar3 = Scaleform::SysFile::GetFileStat(local_68,(String *)&local_res10);
        if (bVar3) goto LAB_1432e10e3;
      }
      if ((uVar4 & 0x10) != 0) {
        uVar6 = FUN_1432c50d0(param_3,&local_res20,&DAT_145af8ed8);
        FUN_1432c4d80(&local_res10,uVar6);
        uVar9 = local_res20 & 0xfffffffffffffffc;
        iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar9 + 8,0xffffffff);
        if (iVar5 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar9);
        }
        bVar3 = Scaleform::SysFile::GetFileStat(local_68,(String *)&local_res10);
        if (bVar3) goto LAB_1432e10e3;
      }
      if ((uVar4 & 8) != 0) {
        uVar6 = FUN_1432c50d0(param_3,&local_res20,&DAT_145af8ee0);
        FUN_1432c4d80(&local_res10,uVar6);
        uVar9 = local_res20 & 0xfffffffffffffffc;
        iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar9 + 8,0xffffffff);
        if (iVar5 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar9);
        }
        bVar3 = Scaleform::SysFile::GetFileStat(local_68,(String *)&local_res10);
        if (bVar3) goto LAB_1432e10e3;
      }
    }
    uVar6 = FUN_1432c50d0(param_3,&local_res20,&DAT_145af8ee8);
    FUN_1432c4d80(&local_res10,uVar6);
    iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res20 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar5 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res20 & 0xfffffffffffffffc);
    }
  }
LAB_1432e10e3:
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  cVar2 = FUN_1432badc0(&local_res10);
  if (cVar2 == '\0') {
    this = (RefCountImpl *)
           (**(code **)(**(longlong **)(param_2 + 0x20) + 8))
                     (*(longlong **)(param_2 + 0x20),(local_res10 & 0xfffffffffffffffc) + 0xc,0x21,
                      0x1b6);
  }
  else {
    cVar2 = FUN_1432bae80(&local_80,&local_res10,1,0,(ulonglong)uVar10 << 0x20,0,0);
    this = (RefCountImpl *)0x0;
    if (((cVar2 != '\0') && (this = (RefCountImpl *)0x0, local_78 != 0)) &&
       (lVar7 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x30,0), lVar7 != 0)) {
      this = (RefCountImpl *)FUN_1432e1570(lVar7,&local_res10,local_80,local_78 & 0xffffffff);
    }
  }
  local_50[0] = 0;
  local_38 = 0;
  local_30 = 0;
  local_48 = 0;
  lStack_40 = 0;
  iVar5 = FUN_14335ab00(lVar1 + 0x18,&local_88,this,0,0);
  if (iVar5 != 1) {
    local_48 = *(undefined8 *)(param_2 + 8);
    local_50[0] = *(undefined4 *)(param_2 + 0x10);
    lStack_40 = param_1[3];
    if (*(int *)(param_2 + 0x14) == 3) {
      local_30 = 9;
    }
    plVar8 = (longlong *)(**(code **)(*local_88 + 0x28))(local_88,this,local_50);
    if (plVar8 != (longlong *)0x0) {
      uVar6 = (**(code **)(*param_1 + 0x20))(param_1,param_2,plVar8);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      goto LAB_1432e1221;
    }
  }
  uVar6 = (**(code **)(*(longlong *)(lVar1 + 0x18) + 8))(lVar1 + 0x18,this,local_50);
LAB_1432e1221:
  if (local_80 != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
  }
  iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res10 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar5 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res10 & 0xfffffffffffffffc);
  }
  return uVar6;
}



// FUNCTION 1432e12b0 FUN_1432e12b0 body=393 status=ok
// SIG undefined FUN_1432e12b0(void)

longlong FUN_1432e12b0(longlong *param_1,undefined8 param_2,ulonglong *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  bool bVar9;
  ulonglong local_res8;
  ulonglong local_res20;
  
  lVar4 = (**(code **)(*param_1 + 0x10))();
  if (lVar4 == 0) {
    cVar2 = FUN_143307640((*param_3 & 0xfffffffffffffffc) + 0xc);
    if (cVar2 == '\0') {
      return 0;
    }
    uVar5 = FUN_143307880(param_3,&local_res20);
    puVar6 = (ulonglong *)FUN_1432c4000(uVar5,&local_res8);
    lVar1 = 0;
    do {
      lVar7 = lVar1;
      cVar2 = *(char *)((*puVar6 & 0xfffffffffffffffc) + 0xc + lVar7);
      bVar9 = cVar2 == (&DAT_145af8ed0)[lVar7];
      if (!bVar9) goto LAB_1432e134a;
      lVar1 = lVar7 + 1;
    } while (lVar7 + 1 != 5);
    bVar9 = cVar2 == (&DAT_145af8ed0)[lVar7];
LAB_1432e134a:
    uVar8 = local_res8 & 0xfffffffffffffffc;
    iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar8 + 8,0xffffffff);
    if (iVar3 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar8);
    }
    iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res20 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar3 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res20 & 0xfffffffffffffffc);
    }
    if (!bVar9) {
      FUN_1432c31e0(&local_res8,param_3);
      FUN_143307960(&local_res8);
      FUN_1432c3950(&local_res8,&DAT_145af8ed0,0xffffffffffffffff);
      lVar4 = (**(code **)(*param_1 + 0x10))(param_1,param_2,&local_res8);
      iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                        ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
      if (iVar3 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
      }
    }
  }
  return lVar4;
}



// FUNCTION 1432e1440 FUN_1432e1440 body=74 status=ok
// SIG undefined FUN_1432e1440(void)

void FUN_1432e1440(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  local_30 = *(undefined8 *)(param_2 + 8);
  local_18 = 0;
  local_38[0] = *(undefined4 *)(param_2 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x18);
  local_20 = 0;
  if (*(int *)(param_2 + 0x14) == 3) {
    local_18 = 9;
  }
  (**(code **)(*param_3 + 0x60))(param_3,local_38);
  return;
}



// FUNCTION 1432e1490 FUN_1432e1490 body=196 status=ok
// SIG undefined FUN_1432e1490(void)

undefined8 * FUN_1432e1490(undefined8 *param_1,int param_2)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xf;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_144f70c80;
  FUN_14335a850(param_1 + 3,0);
  *param_1 = &PTR_FUN_145af8eb8;
  param_1[3] = &PTR_LAB_145af8ec0;
  if (param_2 == 1) {
    FUN_14335a930(param_1 + 3,&PTR_PTR_1467ce378);
    FUN_14335a930(param_1 + 3,&PTR_PTR_1467ce368);
    FUN_14335a930(param_1 + 3,&PTR_PTR_1467ce370);
    FUN_14335a930(param_1 + 3,&PTR_PTR_1467ce380);
    FUN_14335a930(param_1 + 3,&PTR_PTR_1467ce390);
  }
  return param_1;
}



// FUNCTION 1432e1570 FUN_1432e1570 body=153 status=ok
// SIG undefined FUN_1432e1570(void)

undefined8 * FUN_1432e1570(undefined8 *param_1,ulonglong *param_2,longlong param_3,int param_4)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145af8dd8;
  FUN_1432c31e0(param_1 + 2);
  param_1[3] = param_3;
  *(int *)(param_1 + 4) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  if ((((*(ulonglong *)(*param_2 & 0xfffffffffffffffc) & 0x7fffffffffffffff) == 0) || (param_3 == 0)
      ) || (param_4 < 1)) {
    *(undefined1 *)(param_1 + 5) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 5) = 1;
  }
  return param_1;
}



// FUNCTION 1432e1620 FUN_1432e1620 body=135 status=ok
// SIG undefined FUN_1432e1620(void)

RefCountImplCore * FUN_1432e1620(RefCountImplCore *param_1,uint param_2)

{
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_145af8e78;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  *(undefined ***)param_1 = &PTR_FUN_144f70c80;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1432e16b0 FUN_1432e16b0 body=80 status=ok
// SIG undefined FUN_1432e16b0(void)

undefined8 * FUN_1432e16b0(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_145af8e78;
  if (param_1[1] != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1432e1700 FUN_1432e1700 body=148 status=ok
// SIG undefined FUN_1432e1700(void)

RefCountImplCore * FUN_1432e1700(RefCountImplCore *param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1432e1800 FUN_1432e1800 body=78 status=ok
// SIG undefined FUN_1432e1800(void)

int FUN_1432e1800(longlong param_1,void *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (*(int *)(param_1 + 0x20) < iVar1 + param_3) {
    param_3 = *(int *)(param_1 + 0x20) - iVar1;
  }
  if (0 < param_3) {
    _guard_xfg_dispatch_icall_nop
              (param_2,(void *)((longlong)iVar1 + *(longlong *)(param_1 + 0x18)),(longlong)param_3);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + param_3;
  }
  return param_3;
}



// FUNCTION 1432e18b0 FUN_1432e18b0 body=679 status=ok
// SIG undefined FUN_1432e18b0(void)

undefined8 FUN_1432e18b0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  ulonglong local_res8;
  undefined1 local_48 [64];
  
  FUN_1432c2f70(param_2);
  switch(*(uint *)(param_1 + 0x18) & 0x8f) {
  case 0:
    uVar2 = FUN_1432c2fb0(&local_res8,"undefined");
    goto LAB_1432e1903;
  case 1:
    uVar2 = FUN_1432c2fb0(&local_res8,&DAT_145af9634);
    FUN_1432c4d80(param_2,uVar2);
    iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar1 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
      return param_2;
    }
    break;
  case 2:
    pcVar3 = "false";
    if (*(char *)(param_1 + 0x20) != '\0') {
      pcVar3 = "true";
    }
    uVar2 = FUN_1432c2fb0(&local_res8,pcVar3);
    FUN_1432c4d80(param_2,uVar2);
    iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar1 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
      return param_2;
    }
    break;
  case 3:
    puVar5 = &DAT_145af963c;
    goto LAB_1432e1a7d;
  case 4:
    puVar5 = &DAT_145af3910;
LAB_1432e1a7d:
    FUN_1432f2bf0(local_48,0x20,puVar5,*(undefined4 *)(param_1 + 0x20));
    puVar4 = local_48;
LAB_1432e1a95:
    uVar2 = FUN_1432c2fb0(&local_res8,puVar4);
    FUN_1432c4d80(param_2,uVar2);
    iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar1 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
      return param_2;
    }
    break;
  case 5:
    uVar2 = FUN_143364c20(*(undefined8 *)(param_1 + 0x20),local_48,0x40);
    uVar2 = FUN_1432c2fb0(&local_res8,uVar2);
    FUN_1432c4d80(param_2,uVar2);
    iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar1 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
      return param_2;
    }
    break;
  case 6:
    if ((*(uint *)(param_1 + 0x18) >> 6 & 1) == 0) {
      puVar4 = *(undefined1 **)(param_1 + 0x20);
    }
    else {
      puVar4 = (undefined1 *)**(longlong **)(param_1 + 0x20);
    }
    goto LAB_1432e1a95;
  case 7:
    uVar2 = FUN_1432c3480(&local_res8,*(undefined8 *)(param_1 + 0x20));
LAB_1432e1903:
    FUN_1432c4d80(param_2,uVar2);
    iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar1 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
      return param_2;
    }
    break;
  case 8:
  case 9:
  case 10:
  case 0xb:
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x158))
              (*(longlong **)(param_1 + 0x10),param_2,param_1);
    return param_2;
  default:
    Scaleform::String::operator=(param_2,"<bad type>");
  }
  return param_2;
}



// FUNCTION 1432e1b90 FUN_1432e1b90 body=149 status=ok
// SIG undefined FUN_1432e1b90(void)

undefined8 FUN_1432e1b90(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulonglong *puVar2;
  ulonglong local_res8;
  
  if (((byte)*(undefined4 *)(param_1 + 0x18) & 0x8f) == 7) {
    FUN_14331b320(param_2,param_3,*(undefined8 *)(param_1 + 0x20));
  }
  else {
    puVar2 = (ulonglong *)FUN_1432e18b0(param_1,&local_res8);
    FUN_143306bc0(param_2,param_3,(*puVar2 & 0xfffffffffffffffc) + 0xc,0xffffffffffffffff);
    iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar1 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 1432e1c30 SetLastObjectValue body=13 status=ok
// SIG undefined SetLastObjectValue(void)

void Scaleform::GFx::ASUserData::SetLastObjectValue
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined1 *)(param_1 + 0x20) = param_4;
  return;
}



// FUNCTION 1432e1ce0 FUN_1432e1ce0 body=68 status=ok
// SIG undefined FUN_1432e1ce0(void)

void FUN_1432e1ce0(RefCountImplCore *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_145af8ff8;
  *(undefined ***)(param_1 + 0x10) = &PTR_GetPoolName_145af9218;
  if (*(RefCountImpl **)(param_1 + 0x18) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x18));
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_GetPoolName_145af7910;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 1432e1d30 GetAVMVersion body=9 status=ok
// SIG undefined GetAVMVersion(void)

undefined1 Scaleform::GFx::Movie::GetAVMVersion(longlong param_1)

{
  return *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x20);
}



// FUNCTION 1432e1da0 CreateObject body=14 status=ok
// SIG undefined CreateObject(void)

void Scaleform::GFx::Movie::CreateObject(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001432e1da7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x170))();
  return;
}



// FUNCTION 1432e1dc0 CreateDirectoryTree body=14 status=ok
// SIG undefined CreateDirectoryTree(void)

void FNetworkPlatformFile::CreateDirectoryTree(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001432e1dc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x178))();
  return;
}



// FUNCTION 1432e1e00 FUN_1432e1e00 body=14 status=ok
// SIG undefined FUN_1432e1e00(void)

void FUN_1432e1e00(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001432e1e07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x188))();
  return;
}



// FUNCTION 1432e1e20 GetVariable body=14 status=ok
// SIG undefined GetVariable(void)

void Scaleform::GFx::Movie::GetVariable(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001432e1e27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x18) + 400))();
  return;
}



// FUNCTION 1432e1ec0 Invoke body=14 status=ok
// SIG undefined Invoke(void)

void Scaleform::GFx::Movie::Invoke(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001432e1ec7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1c8))();
  return;
}



// FUNCTION 1432e1ee0 FUN_1432e1ee0 body=37 status=ok
// SIG undefined FUN_1432e1ee0(void)

void FUN_1432e1ee0(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1d0))();
  return;
}



// FUNCTION 1432e1f30 FUN_1432e1f30 body=14 status=ok
// SIG undefined FUN_1432e1f30(void)

void FUN_1432e1f30(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001432e1f37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x148))();
  return;
}



// FUNCTION 1432e1f50 FUN_1432e1f50 body=98 status=ok
// SIG undefined FUN_1432e1f50(void)

void FUN_1432e1f50(undefined8 *param_1)

{
  int iVar1;
  RefCountImpl *this;
  
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(param_1 + 1,0xffffffff);
  if (iVar1 == 1) {
    this = (RefCountImpl *)(**(code **)(*(longlong *)param_1[3] + 0x1d8))();
    if (this != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(this);
    }
    (**(code **)*param_1)(param_1,1);
    if (this != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(this);
    }
  }
  return;
}



// FUNCTION 1432e1fc0 FUN_1432e1fc0 body=56 status=ok
// SIG undefined FUN_1432e1fc0(void)

RefCountNTSImpl * FUN_1432e1fc0(longlong param_1)

{
  RefCountNTSImpl *this;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    this = (RefCountNTSImpl *)Scaleform::GFx::CharacterHandle::ResolveCharacter();
    if (this != (RefCountNTSImpl *)0x0) {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      Scaleform::RefCountNTSImpl::Release(this);
      return this;
    }
  }
  return (RefCountNTSImpl *)0x0;
}



// FUNCTION 1432e2000 FUN_1432e2000 body=72 status=ok
// SIG undefined FUN_1432e2000(void)

void FUN_1432e2000(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  param_1 = param_1 + 0x2400;
  lVar1 = 6;
  do {
    FStringTable::SetOwnerAsset(param_1,param_2);
    param_1 = param_1 + 0x688;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1432e2050 FUN_1432e2050 body=446 status=ok
// SIG undefined FUN_1432e2050(void)

void FUN_1432e2050(longlong *param_1,char param_2,uint param_3)

{
  float fVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float local_88;
  float fStack_84;
  undefined4 uStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  undefined4 uStack_70;
  float fStack_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined4 local_50;
  float local_4c;
  
  *(uint *)((longlong)param_1 + 0x2c) = param_3;
  *(char *)(param_1 + 2) = param_2;
  if (param_2 == '\0') {
    plVar2 = (longlong *)*param_1;
    plVar3 = (longlong *)plVar2[7];
    local_88 = 1.0;
    fStack_84 = 0.0;
    uStack_80 = 0;
    fStack_7c = 0.0;
    local_78 = 0.0;
    fStack_74 = 1.0;
    uStack_70 = 0;
    fStack_6c = 0.0;
    if (plVar3 != (longlong *)0x0) {
      local_88 = 1.0;
      fStack_84 = 0.0;
      uStack_80 = 0;
      fStack_7c = 0.0;
      local_78 = 0.0;
      fStack_74 = 1.0;
      uStack_70 = 0;
      fStack_6c = 0.0;
      (**(code **)(*plVar3 + 0x1e8))(plVar3,&local_88);
    }
    if (param_3 < 6) {
      lVar4 = ((ulonglong)param_3 + 0x6d) * 0x50 + *(longlong *)(plVar2[4] + 0x10);
    }
    else {
      lVar4 = 0;
    }
    fVar1 = *(float *)(lVar4 + 0x38);
    fVar5 = *(float *)(lVar4 + 0x3c);
    local_68 = local_88;
    local_64 = fStack_84;
    local_60 = uStack_80;
    local_5c = fStack_7c;
    local_58 = local_78;
    local_54 = fStack_74;
    local_50 = uStack_70;
    local_4c = fStack_6c;
    Scaleform::Render::Matrix2x4<float>::SetInverse
              ((Matrix2x4<float> *)&local_88,(Matrix2x4<float> *)&local_68);
    fVar6 = fStack_84 * fVar5 + local_88 * fVar1 + fStack_7c;
    fVar5 = fStack_74 * fVar5 + local_78 * fVar1 + fStack_6c;
    lVar4 = (**(code **)(*plVar2 + 0x10))(plVar2);
    fVar1 = *(float *)(lVar4 + 0x1c);
    *(float *)((longlong)param_1 + 0x24) = *(float *)(lVar4 + 0xc) - fVar6;
    *(float *)(param_1 + 5) = fVar1 - fVar5;
  }
  return;
}



// FUNCTION 1432e2220 FUN_1432e2220 body=1784 status=ok
// SIG undefined FUN_1432e2220(void)

undefined8 * FUN_1432e2220(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  byte *pbVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  RefCountImpl *local_res8;
  
  puVar12 = (undefined8 *)0x0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_145af9350;
  param_1[2] = &PTR_LAB_145af9588;
  *(undefined4 *)(param_1 + 4) = param_3;
  param_1[7] = 0;
  param_1[9] = param_2;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = param_1 + 0xe;
  param_1[0x10] = param_1 + 0xe;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 1;
  *(undefined4 *)(param_1 + 0x17) = 1;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x3f800000;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0x3f800000;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  FUN_1432ef720(param_1 + 0x28);
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  Scaleform::GFx::InputEventsQueue::InputEventsQueue(param_1 + 0x50);
  lVar10 = 6;
  *(undefined2 *)((longlong)param_1 + 0x2209) = 0;
  lVar11 = 6;
  *(undefined1 *)(param_1 + 0x441) = 0;
  *(undefined1 *)((longlong)param_1 + 0x220b) = 0xff;
  puVar7 = param_1 + 0x442;
  do {
    FUN_14338a530(puVar7);
    puVar7 = puVar7 + 10;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  *(undefined4 *)(param_1 + 0x47e) = 1;
  puVar7 = param_1 + 0x480;
  *(undefined4 *)((longlong)param_1 + 0x23f4) = 1;
  lVar11 = 6;
  param_1[0x47f] = 0;
  do {
    FUN_14335f4a0(puVar7);
    puVar7 = puVar7 + 0xd1;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  puVar6 = param_1 + 0x968;
  puVar7 = param_1 + 0x96c;
  do {
    *puVar6 = 0;
    puVar6 = puVar6 + 6;
    puVar7[-3] = 0;
    *(undefined2 *)(puVar7 + -2) = 0;
    *(undefined8 *)((longlong)puVar7 + -0xc) = 0;
    *(undefined8 *)((longlong)puVar7 + -4) = 0;
    *(undefined8 *)((longlong)puVar7 + 4) = 0;
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0xffffffff;
    puVar7 = puVar7 + 6;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  param_1[0x98c] = 0;
  puVar6 = param_1 + 0x998;
  param_1[0x98d] = 0;
  puVar7 = param_1 + 0x99b;
  param_1[0x98e] = 0;
  lVar10 = 0x10;
  param_1[0x98f] = 0;
  param_1[0x992] = 0;
  param_1[0x993] = 0;
  param_1[0x994] = 0;
  param_1[0x996] = 0;
  do {
    *puVar6 = 0;
    uVar5 = (**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,puVar6);
    puVar7[-2] = 0;
    puVar6 = puVar6 + 0xc;
    puVar7[-1] = 0;
    *puVar7 = 0;
    puVar7[1] = uVar5;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *(undefined4 *)(puVar7 + 4) = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    *(undefined2 *)(puVar7 + 7) = 0;
    puVar7 = puVar7 + 0xc;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  param_1[0xa5e] = 0;
  param_1[0xa61] = 0;
  puVar7 = param_1 + 0xa6a;
  param_1[0xa62] = 0;
  param_1[0xa63] = 0;
  param_1[0xa64] = param_1 + 0xa62;
  param_1[0xa65] = param_1 + 0xa62;
  param_1[0xa66] = 0;
  param_1[0xa67] = 0;
  param_1[0xa68] = 0;
  param_1[0xa69] = 0;
  FUN_1432cdbc0(puVar7,DAT_146b62f28);
  param_1[0xa8e] = 0;
  param_1[0xa8f] = 0;
  param_1[0xa90] = 0;
  param_1[0xa92] = 0;
  param_1[0xa94] = 0;
  param_1[0xa95] = 0;
  param_1[0xa96] = 0;
  lVar10 = (**(code **)(*(longlong *)*puVar7 + 0x50))((longlong *)*puVar7,0xd0,0);
  if (lVar10 != 0) {
    FUN_1432ef640(lVar10);
  }
  uVar5 = FUN_1432ceba0(puVar7,lVar10);
  if (param_1[0x12] != 0) {
    plVar1 = (longlong *)(param_1[0x12] + 0x18);
    *plVar1 = *plVar1 + -1;
    if (*plVar1 == 0) {
      FUN_1432ccf00();
    }
  }
  param_1[0x12] = uVar5;
  FUN_1432cccc0(&local_res8,uVar5);
  if (local_res8 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(local_res8);
  }
  if ((RefCountImpl *)param_1[0x13] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0x13]);
  }
  param_1[0x13] = local_res8;
  FUN_1432ccda0(&local_res8);
  puVar6 = (undefined8 *)(**(code **)(*(longlong *)*puVar7 + 0x50))((longlong *)*puVar7,0xa0,0);
  if (puVar6 != (undefined8 *)0x0) {
    FUN_1432ef4d0(puVar6,2);
    *puVar6 = &PTR_FUN_145af8f68;
    puVar6[0x13] = 0;
    puVar6[0x12] = 0;
  }
  uVar5 = FUN_1432ceba0(puVar7,puVar6);
  if (param_1[0x14] != 0) {
    plVar1 = (longlong *)(param_1[0x14] + 0x18);
    *plVar1 = *plVar1 + -1;
    if (*plVar1 == 0) {
      FUN_1432ccf00();
    }
  }
  param_1[0x14] = uVar5;
  uVar2 = param_1[0x12];
  lVar10 = FUN_1432cd1e0(uVar2);
  uVar8 = *(ulonglong *)(lVar10 + 0x90);
  puVar6 = puVar12;
  if (uVar8 != 0) {
    if ((uVar8 & 1) == 0) {
      puVar6 = (undefined8 *)((ulonglong)(*(longlong *)(lVar10 + 0x98) != 0) + 1);
    }
    else {
      puVar6 = *(undefined8 **)((uVar8 & 0xfffffffffffffffe) + 8);
    }
  }
  FUN_143364100(uVar2,puVar6,uVar5);
  FUN_1432cdfe0(puVar7);
  param_1[0xb] = 0;
  *(uint *)(param_1 + 0xa5e) = *(uint *)(param_1 + 0xa5e) | 0x40180;
  param_1[0xa5c] = 0;
  param_1[0xa5b] = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x274) = 0x3daaaaab;
  param_1[5] = 0;
  param_1[0xa60] = 0;
  puVar6 = (undefined8 *)(**(code **)(*(longlong *)param_1[9] + 0x50))((longlong *)param_1[9],0x60);
  puVar7 = puVar12;
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = 0;
    *puVar6 = &PTR_FUN_144f70a50;
    *puVar6 = &PTR_FUN_145af9240;
    puVar6[2] = &PTR_GetPoolName_145af9248;
    puVar6[3] = &PTR_LAB_145af9270;
    *(undefined4 *)(puVar6 + 1) = 1;
    puVar6[4] = 0;
    puVar6[5] = 0;
    FUN_1432bdc50(puVar6 + 6,0);
    if ((RefCountImpl *)puVar6[4] != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release((RefCountImpl *)puVar6[4]);
    }
    puVar6[4] = 0;
    puVar7 = puVar6;
  }
  if ((RefCountImpl *)param_1[0x11] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0x11]);
  }
  param_1[0x11] = puVar7;
  pbVar9 = (byte *)((longlong)param_1 + 0x2a64);
  bVar4 = 0;
  do {
    *pbVar9 = bVar4;
    pbVar9 = pbVar9 + 0x688;
    bVar4 = bVar4 + 1;
  } while (bVar4 < 6);
  param_1[0x966] = 0;
  puVar7 = (undefined8 *)(**(code **)(*(longlong *)param_1[9] + 0x50))((longlong *)param_1[9],0x40);
  if (puVar7 != (undefined8 *)0x0) {
    lVar10 = param_1[0x11];
    puVar7[1] = 0;
    *(undefined4 *)(puVar7 + 1) = 1;
    *puVar7 = &PTR_FUN_145af9320;
    puVar7[2] = &PTR_GetInstance_145af9328;
    puVar7[3] = 0;
    puVar6 = (undefined8 *)(lVar10 + 0x10);
    if (lVar10 == 0) {
      puVar6 = puVar12;
    }
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = puVar6;
    puVar12 = puVar7;
  }
  if ((RefCountNTSImpl *)param_1[0x4b] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[0x4b]);
  }
  param_1[0x4b] = puVar12;
  *(undefined4 *)(param_1 + 0x967) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1e] = 1;
  *(undefined4 *)(param_1 + 0xa58) = 1;
  *(undefined8 *)((longlong)param_1 + 0x52c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x52cc) = 0;
  *(undefined4 *)(param_1 + 0x995) = 0;
  param_1[0xa5f] = 0;
  uVar8 = Scaleform::Timer::GetTicks();
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar8;
  lVar10 = SUB168(ZEXT816(0x624dd2f1a9fbe77) * auVar3,8);
  param_1[0x991] = 0;
  param_1[0x990] = (uVar8 - lVar10 >> 1) + lVar10 >> 9;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[0xa5d] = 0;
  *(undefined4 *)(param_1 + 0xa91) = 0;
  *(undefined1 *)((longlong)param_1 + 0x52d4) = 1;
  *(undefined1 *)(param_1 + 0xa8d) = 0;
  return param_1;
}



// FUNCTION 1432e2920 FUN_1432e2920 body=2407 status=ok
// SIG undefined FUN_1432e2920(void)

void FUN_1432e2920(RefCountImplCore *param_1)

{
  int *piVar1;
  RefCountImplCore *pRVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  RefCountImplCore *pRVar6;
  uint uVar7;
  RefCountImplCore *pRVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  uint uVar14;
  RefCountImplCore *pRVar15;
  RefCountImplCore *pRVar16;
  ulonglong local_res8;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_48;
  uint local_40;
  undefined8 *local_38;
  
  *(undefined ***)param_1 = &PTR_FUN_145af9350;
  pRVar15 = (RefCountImplCore *)0x0;
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_145af9588;
  if (*(longlong *)(param_1 + 0x4cb0) != 0) {
    lVar5 = FUN_1432cd1e0();
    pRVar16 = pRVar15;
    if (*(ulonglong *)(lVar5 + 0x90) != 0) {
      if ((*(byte *)(lVar5 + 0x90) & 1) == 0) {
        pRVar16 = (RefCountImplCore *)((ulonglong)(*(longlong *)(lVar5 + 0x98) != 0) + 1);
      }
      else {
        pRVar16 = *(RefCountImplCore **)((*(ulonglong *)(lVar5 + 0x90) & 0xfffffffffffffffe) + 8);
      }
    }
    FUN_143364170(*(undefined8 *)(param_1 + 0x4cb0),0,pRVar16);
    pRVar16 = pRVar15;
    if (*(int *)(param_1 + 0x52c0) != 0) {
      do {
        if (*(longlong *)(param_1 + (longlong)pRVar16 * 0x60 + 0x4cc0) != 0) {
          plVar11 = (longlong *)(*(longlong *)(param_1 + (longlong)pRVar16 * 0x60 + 0x4cc0) + 0x18);
          *plVar11 = *plVar11 + -1;
          if (*plVar11 == 0) {
            FUN_1432ccf00();
          }
        }
        uVar7 = (int)pRVar16 + 1;
        *(undefined8 *)(param_1 + (longlong)pRVar16 * 0x60 + 0x4cc0) = 0;
        pRVar16 = (RefCountImplCore *)(ulonglong)uVar7;
      } while (uVar7 < *(uint *)(param_1 + 0x52c0));
    }
    if (*(longlong *)(param_1 + 0x4cb0) != 0) {
      plVar11 = (longlong *)(*(longlong *)(param_1 + 0x4cb0) + 0x18);
      *plVar11 = *plVar11 + -1;
      if (*plVar11 == 0) {
        FUN_1432ccf00();
      }
    }
    *(undefined8 *)(param_1 + 0x4cb0) = 0;
  }
  pRVar16 = param_1 + 0x5320;
  pRVar8 = *(RefCountImplCore **)(param_1 + 0x5328);
  pRVar6 = param_1 + 0x5310;
  if (pRVar16 == (RefCountImplCore *)0x0) {
    pRVar6 = pRVar15;
  }
  while (pRVar8 != pRVar6) {
    pRVar2 = *(RefCountImplCore **)(pRVar8 + 0x18);
    *(undefined8 *)(pRVar8 + 0x18) = 0;
    *(undefined8 *)(pRVar8 + 0x10) = 0;
    pRVar8 = pRVar2;
  }
  pRVar8 = param_1 + 0x5310;
  if (pRVar16 == (RefCountImplCore *)0x0) {
    pRVar8 = pRVar15;
  }
  *(RefCountImplCore **)pRVar16 = pRVar8;
  *(RefCountImplCore **)(param_1 + 0x5328) = pRVar8;
  FUN_1432e64b0(param_1);
  if (*(longlong *)(param_1 + 0x90) != 0) {
    plVar11 = (longlong *)(*(longlong *)(param_1 + 0x90) + 0x18);
    *plVar11 = *plVar11 + -1;
    if (*plVar11 == 0) {
      FUN_1432ccf00();
    }
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (*(RefCountNTSImpl **)(param_1 + 600) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 600));
  }
  *(undefined8 *)(param_1 + 600) = 0;
  pRVar16 = *(RefCountImplCore **)(param_1 + 0x4c98);
  pRVar8 = pRVar15;
  if (pRVar16 != (RefCountImplCore *)0x0) {
    do {
      (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x4c90) + (longlong)pRVar8 * 8) + 0x20))
                ();
      pRVar8 = pRVar8 + 1;
    } while (pRVar8 < pRVar16);
  }
  FUN_1432f29e0(param_1 + 0x4c90,param_1 + 0x4c90,0);
  *(uint *)(param_1 + 0x52f0) = *(uint *)(param_1 + 0x52f0) | 0x80000;
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))();
  FUN_1432eda00(param_1);
  FUN_1432e78c0(param_1);
  pRVar16 = param_1 + 0x4b30;
  plVar11 = *(longlong **)pRVar16;
  if (plVar11 != (longlong *)0x0) {
    if (*plVar11 != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    piVar1 = (int *)(plVar11[5] + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    lVar5 = plVar11[3];
    plVar9 = (longlong *)(plVar11[2] + (lVar5 + -1) * 8);
    for (; lVar5 != 0; lVar5 = lVar5 + -1) {
      piVar1 = (int *)(*plVar9 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      plVar9 = plVar9 + -1;
    }
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,plVar11[2]);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,plVar11);
  }
  lVar5 = *(longlong *)(param_1 + 0x5300);
  pRVar8 = pRVar15;
  if (lVar5 != 0) {
    do {
      uVar7 = (int)pRVar8 + 1;
      Scaleform::GFx::LoadQueueEntryMT::Cancel(lVar5);
      lVar5 = *(longlong *)(lVar5 + 8);
      pRVar8 = (RefCountImplCore *)(ulonglong)uVar7;
    } while (lVar5 != 0);
    if (uVar7 != 0) {
      do {
        uVar14 = 0;
        pRVar8 = pRVar15;
        for (plVar11 = *(longlong **)(param_1 + 0x5300); plVar11 != (longlong *)0x0;
            plVar11 = (longlong *)plVar11[1]) {
          cVar3 = (**(code **)(*plVar11 + 8))(plVar11);
          if (cVar3 != '\0') {
            pRVar8 = (RefCountImplCore *)(ulonglong)((int)pRVar8 + 1);
          }
          uVar14 = (uint)pRVar8;
        }
      } while (uVar14 < uVar7);
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x28);
  while (lVar5 != 0) {
    puVar12 = *(undefined8 **)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = puVar12[1];
    (**(code **)*puVar12)(puVar12,1);
    lVar5 = *(longlong *)(param_1 + 0x28);
  }
  lVar5 = *(longlong *)(param_1 + 0x5300);
  while (lVar5 != 0) {
    puVar12 = *(undefined8 **)(param_1 + 0x5300);
    *(undefined8 *)(param_1 + 0x5300) = puVar12[1];
    (**(code **)*puVar12)(puVar12,1);
    lVar5 = *(longlong *)(param_1 + 0x5300);
  }
  lVar5 = *(longlong *)(param_1 + 0x40);
  if (((lVar5 != 0) && (*(longlong *)(lVar5 + 0x18) != lVar5 + 0x10)) &&
     (lVar13 = *(longlong *)(lVar5 + 0x18), lVar13 != lVar5 + 0x10)) {
    do {
      FUN_1432c2fb0(&local_res8,&DAT_145af3922);
      uVar7 = *(uint *)(lVar13 + 0x18) & 0x8f;
      if ((uVar7 != 9) && (uVar7 == 10)) {
        local_58 = 0xffffffffffffffff;
        uStack_50 = 0xffffffffffffffff;
        local_48 = (longlong *)0x0;
        local_40 = 0;
        (**(code **)(**(longlong **)(lVar13 + 0x10) + 0x20))
                  (*(longlong **)(lVar13 + 0x10),*(undefined8 *)(lVar13 + 0x20),&DAT_145af95b0,
                   &local_58,1);
        puVar12 = local_38;
        if ((local_40 >> 6 & 1) != 0) {
          puVar12 = (undefined8 *)*local_38;
        }
        Scaleform::String::operator=(&local_res8,puVar12);
        if ((local_40 >> 6 & 1) != 0) {
          (**(code **)(*local_48 + 0x10))(local_48,&local_58,local_38);
        }
      }
      lVar13 = *(longlong *)(lVar13 + 8);
      uVar10 = local_res8 & 0xfffffffffffffffc;
      iVar4 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar10 + 8,0xffffffff);
      if (iVar4 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar10);
      }
    } while (lVar13 != *(longlong *)(param_1 + 0x40) + 0x10);
  }
  lVar5 = *(longlong *)(param_1 + 0x40);
  if (((lVar5 != 0) && (*(longlong *)(lVar5 + 0x18) != lVar5 + 0x10)) &&
     (lVar13 = *(longlong *)(lVar5 + 0x18), lVar13 != lVar5 + 0x10)) {
    do {
      lVar5 = *(longlong *)(lVar13 + 8);
      if ((*(uint *)(lVar13 + 0x18) >> 6 & 1) != 0) {
        (**(code **)(**(longlong **)(lVar13 + 0x10) + 0x10))
                  (*(longlong **)(lVar13 + 0x10),lVar13,*(undefined8 *)(lVar13 + 0x20));
        *(undefined8 *)(lVar13 + 0x10) = 0;
      }
      *(undefined4 *)(lVar13 + 0x18) = 0x20;
      lVar13 = lVar5;
    } while (lVar5 != *(longlong *)(param_1 + 0x40) + 0x10);
  }
  FUN_1432f2b40(param_1 + 0x4c68,param_1 + 0x4c68,0);
  puVar12 = *(undefined8 **)(param_1 + 0x40);
  if (puVar12 != (undefined8 *)0x0) {
    (**(code **)*puVar12)(puVar12,1);
  }
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x158))();
  if (*(RefCountImpl **)(param_1 + 0x18) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    plVar11 = (longlong *)(*(longlong *)(param_1 + 0xa0) + 0x18);
    *plVar11 = *plVar11 + -1;
    if (*plVar11 == 0) {
      FUN_1432ccf00();
    }
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (*(RefCountImpl **)(param_1 + 0x5470) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x5470));
  }
  *(undefined8 *)(param_1 + 0x5470) = 0;
  FUN_1432ce2c0(param_1 + 0x5350,1);
  if (*(RefCountImpl **)(param_1 + 0x98) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x98));
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  FUN_1432ef8d0(param_1 + 0x54a0);
  if (*(RefCountNTSImpl **)(param_1 + 0x5490) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x5490));
  }
  if (*(RefCountImpl **)(param_1 + 0x5480) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x5480));
  }
  if (*(RefCountImpl **)(param_1 + 0x5470) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x5470));
  }
  FUN_1432cde30(param_1 + 0x5350);
  if (*(RefCountImpl **)(param_1 + 0x5348) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x5348));
  }
  lVar5 = *(longlong *)(param_1 + 0x5338);
  if (lVar5 != 0) {
    plVar11 = (longlong *)(*(longlong *)(param_1 + 0x5330) + -8 + lVar5 * 0x10);
    do {
      if (*plVar11 != 0) {
        FUN_1432de450();
      }
      plVar11 = plVar11 + -2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (*(longlong *)(param_1 + 0x5330) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  lVar5 = *(longlong *)(param_1 + 0x5310);
  plVar11 = (longlong *)(*(longlong *)(param_1 + 0x5308) + -0x10 + lVar5 * 0x10);
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    if (plVar11[1] != 0) {
      FUN_1432de450();
    }
    if (*plVar11 != 0) {
      FUN_1432de450();
    }
    plVar11 = plVar11 + -2;
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x5308));
  lVar5 = 0x10;
  pRVar15 = param_1 + 0x52c0;
  do {
    pRVar15 = pRVar15 + -0x60;
    FUN_1432efa70(pRVar15);
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  if (*(longlong *)(param_1 + 0x4cb0) != 0) {
    plVar11 = (longlong *)(*(longlong *)(param_1 + 0x4cb0) + 0x18);
    *plVar11 = *plVar11 + -1;
    if (*plVar11 == 0) {
      FUN_1432ccf00();
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x4c98);
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x4c90) + (lVar5 + -1) * 8);
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    if ((RefCountImpl *)*puVar12 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar12);
    }
    puVar12 = puVar12 + -1;
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x4c90));
  lVar5 = *(longlong *)(param_1 + 0x4c70);
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x4c68) + (lVar5 + -1) * 8);
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    if ((RefCountNTSImpl *)*puVar12 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*puVar12);
    }
    puVar12 = puVar12 + -1;
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x4c68));
  FUN_1432ef9e0(param_1 + 0x4c60);
  lVar13 = 6;
  lVar5 = 6;
  do {
    pRVar16 = pRVar16 + -0x688;
    Scaleform::RefCountImplCore::~RefCountImplCore(pRVar16);
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  pRVar15 = param_1 + 0x23f0;
  do {
    lVar5 = *(longlong *)(pRVar15 + -0x30);
    lVar13 = lVar13 + -1;
    puVar12 = (undefined8 *)(*(longlong *)(pRVar15 + -0x38) + (lVar5 + -1) * 8);
    for (; lVar5 != 0; lVar5 = lVar5 + -1) {
      piVar1 = (int *)*puVar12;
      if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 == 0)) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      puVar12 = puVar12 + -1;
    }
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(pRVar15 + -0x38));
    piVar1 = *(int **)(pRVar15 + -0x40);
    if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 == 0)) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    piVar1 = *(int **)(pRVar15 + -0x48);
    if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 == 0)) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    piVar1 = *(int **)(pRVar15 + -0x50);
    if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 == 0)) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    pRVar15 = pRVar15 + -0x50;
  } while (lVar13 != 0);
  if (*(RefCountNTSImpl **)(param_1 + 600) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 600));
  }
  if (*(RefCountImpl **)(param_1 + 0x250) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x250));
  }
  if (*(RefCountImpl **)(param_1 + 0x248) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x248));
  }
  if (*(RefCountImpl **)(param_1 + 0x240) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x240));
  }
  if (*(RefCountImpl **)(param_1 + 0x238) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x238));
  }
  if (*(RefCountImpl **)(param_1 + 0x230) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x230));
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    plVar11 = (longlong *)(*(longlong *)(param_1 + 0xa0) + 0x18);
    *plVar11 = *plVar11 + -1;
    if (*plVar11 == 0) {
      FUN_1432ccf00();
    }
  }
  FUN_1432ccda0(param_1 + 0x98);
  if (*(longlong *)(param_1 + 0x90) != 0) {
    plVar11 = (longlong *)(*(longlong *)(param_1 + 0x90) + 0x18);
    *plVar11 = *plVar11 + -1;
    if (*plVar11 == 0) {
      FUN_1432ccf00();
    }
  }
  if (*(RefCountImpl **)(param_1 + 0x88) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x88));
  }
  lVar5 = *(longlong *)(param_1 + 0x68);
  if (lVar5 != 0) {
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x60) + -8 + lVar5 * 0x10);
    do {
      if ((RefCountNTSImpl *)*puVar12 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*puVar12);
      }
      puVar12 = puVar12 + -2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x60));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1432de450();
  }
  if (*(RefCountImpl **)(param_1 + 0x38) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x38));
  }
  *(undefined ***)param_1 = &PTR_FUN_145af8ff8;
  *(undefined ***)(param_1 + 0x10) = &PTR_GetPoolName_145af9218;
  if (*(RefCountImpl **)(param_1 + 0x18) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x18));
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_GetPoolName_145af7910;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 1432e3290 SetASMovieRoot body=102 status=ok
// SIG undefined SetASMovieRoot(void)

void Scaleform::GFx::MovieImpl::SetASMovieRoot(longlong param_1,RefCountImpl *param_2)

{
  if (param_2 != (RefCountImpl *)0x0) {
    RefCountImpl::AddRef(param_2);
  }
  if (*(RefCountImpl **)(param_1 + 0x5348) != (RefCountImpl *)0x0) {
    RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x5348));
  }
  *(RefCountImpl **)(param_1 + 0x5348) = param_2;
  if (param_2 != (RefCountImpl *)0x0) {
    RefCountImpl::AddRef(param_2);
  }
  if (*(RefCountImpl **)(param_1 + 0x18) != (RefCountImpl *)0x0) {
    RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x5348);
  return;
}



// FUNCTION 1432e3300 FUN_1432e3300 body=684 status=ok
// SIG undefined FUN_1432e3300(void)

undefined8 FUN_1432e3300(longlong *param_1,int param_2,RefCountNTSImpl *param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  RefCountImpl *this;
  RefCountImpl *this_00;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  uint uVar6;
  void *_Src;
  longlong lVar8;
  ulonglong uVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int local_68;
  int local_64;
  undefined8 local_60;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  ulonglong uVar7;
  
  uVar7 = 0;
  uVar6 = 0;
  if (param_1[0xd] != 0) {
    do {
      uVar6 = (uint)uVar7;
      if (param_2 <= *(int *)(param_1[0xc] + uVar7 * 0x10)) {
        if (*(int *)(uVar7 * 0x10 + param_1[0xc]) == param_2) {
          return 0;
        }
        break;
      }
      uVar6 = uVar6 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar7 < (ulonglong)param_1[0xd]);
  }
  *(uint *)(param_1 + 0xa5e) = *(uint *)(param_1 + 0xa5e) | 0x100;
  if (param_3 != (RefCountNTSImpl *)0x0) {
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
  }
  uVar1 = param_1[0xd];
  uVar9 = (ulonglong)uVar6;
  uVar7 = uVar1 + 1;
  FUN_1432f2860(param_1 + 0xc,param_1 + 0xc,uVar7);
  if (uVar1 < uVar7) {
    lVar3 = uVar1 * 0x10 + param_1[0xc];
    for (lVar8 = uVar7 - uVar1; lVar8 != 0; lVar8 = lVar8 + -1) {
      if (lVar3 != 0) {
        *(undefined8 *)(lVar3 + 8) = 0;
      }
      lVar3 = lVar3 + 0x10;
    }
  }
  if (uVar9 < param_1[0xd] - 1U) {
    _Src = (void *)(uVar9 * 0x10 + param_1[0xc]);
    memmove((void *)((longlong)_Src + 0x10),_Src,(param_1[0xd] - uVar9) * 0x10 - 0x10);
  }
  piVar10 = (int *)(uVar9 * 0x10 + param_1[0xc]);
  if (piVar10 != (int *)0x0) {
    *piVar10 = param_2;
    if (param_3 != (RefCountNTSImpl *)0x0) {
      *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
    }
    *(RefCountNTSImpl **)(piVar10 + 2) = param_3;
  }
  (**(code **)(*(longlong *)param_3 + 0x3d8))(param_3,param_2);
  if (param_2 == 0) {
    param_1[0xb] = (longlong)param_3;
    plVar4 = (longlong *)(**(code **)(*(longlong *)param_3 + 0x218))(param_3);
    if (plVar4 != (longlong *)0x0) {
      Scaleform::GFx::Resource::AddRef(plVar4);
    }
    if (param_1[10] != 0) {
      FUN_1432de450();
    }
    param_1[10] = (longlong)plVar4;
    if ((plVar4 != (longlong *)0x0) && (plVar2 = (longlong *)param_1[7], plVar2 != (longlong *)0x0))
    {
      lVar3 = *plVar2;
      uVar5 = (**(code **)(*plVar4 + 0x60))();
      (**(code **)(lVar3 + 0x38))(plVar2,uVar5);
    }
    lVar3 = param_1[0x11];
    this = *(RefCountImpl **)(param_1[10] + 0x20);
    if (this != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(this);
    }
    this_00 = *(RefCountImpl **)(lVar3 + 0x20);
    if (this_00 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(this_00);
    }
    *(RefCountImpl **)(lVar3 + 0x20) = this;
    plVar4 = (longlong *)(**(code **)(*param_1 + 8))(param_1);
    fVar11 = (float)(**(code **)(*plVar4 + 0x48))(plVar4);
    *(float *)((longlong)param_1 + 0x274) = 1.0 / fVar11;
    if ((*(byte *)(param_1 + 0xa5e) & 1) == 0) {
      plVar4 = (longlong *)(**(code **)(*(longlong *)param_3 + 0x218))(param_3);
      fVar11 = (float)(**(code **)(*plVar4 + 0x38))(plVar4);
      fVar12 = (float)(**(code **)(*plVar4 + 0x30))(plVar4);
      fVar13 = (float)(**(code **)(*plVar4 + 0x38))(plVar4);
      fVar14 = (float)(**(code **)(*plVar4 + 0x30))(plVar4);
      local_68 = (int)fVar14;
      local_60 = 0;
      local_44 = 0;
      local_4c = 0;
      local_50 = 0;
      local_38 = 0x3f800000;
      local_3c = 0x3f800000;
      local_64 = (int)fVar13;
      local_58 = (int)fVar12;
      local_54 = (int)fVar11;
      (**(code **)(*param_1 + 0x60))(param_1,&local_68);
    }
  }
  *(uint *)(param_1 + 0xa5e) = *(uint *)(param_1 + 0xa5e) | 0x80;
  Scaleform::RefCountNTSImpl::Release(param_3);
  return 1;
}



// FUNCTION 1432e35c0 FUN_1432e35c0 body=738 status=ok
// SIG undefined FUN_1432e35c0(void)

undefined8 FUN_1432e35c0(longlong param_1,int param_2)

{
  int *piVar1;
  ulonglong uVar2;
  longlong *plVar3;
  RefCountNTSImpl *this;
  undefined8 uVar4;
  void *_Dst;
  ulonglong uVar5;
  longlong lVar6;
  RefCountNTSImpl *pRVar7;
  longlong lVar8;
  
  uVar5 = 0;
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x4b40) = 0;
    *(undefined8 *)(param_1 + 0x4b48) = 0;
    *(undefined4 *)(param_1 + 0x4b6c) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x4b70) = 0;
    *(undefined8 *)(param_1 + 0x4b78) = 0;
    *(undefined4 *)(param_1 + 0x4b9c) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x4ba0) = 0;
    *(undefined8 *)(param_1 + 0x4ba8) = 0;
    *(undefined4 *)(param_1 + 0x4bcc) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x4bd0) = 0;
    *(undefined8 *)(param_1 + 0x4bd8) = 0;
    *(undefined4 *)(param_1 + 0x4bfc) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x4c00) = 0;
    *(undefined8 *)(param_1 + 0x4c08) = 0;
    *(undefined4 *)(param_1 + 0x4c2c) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x4c30) = 0;
    *(undefined8 *)(param_1 + 0x4c38) = 0;
    *(undefined4 *)(param_1 + 0x4c5c) = 0xffffffff;
    uVar2 = *(ulonglong *)(param_1 + 0x4c98);
    if (uVar2 != 0) {
      do {
        (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x4c90) + uVar5 * 8) + 0x20))();
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar2);
    }
    FUN_1432f29e0(param_1 + 0x4c90,param_1 + 0x4c90,0);
    if (*(longlong *)(param_1 + 0x68) == 0) {
      pRVar7 = (RefCountNTSImpl *)0x0;
    }
    else {
      pRVar7 = *(RefCountNTSImpl **)(*(longlong *)(param_1 + 0x60) + 8);
      if (pRVar7 != (RefCountNTSImpl *)0x0) {
        *(int *)(pRVar7 + 8) = *(int *)(pRVar7 + 8) + 1;
      }
    }
    lVar8 = *(longlong *)(param_1 + 0x68);
    while (lVar8 != 0) {
      plVar3 = *(longlong **)
                (*(longlong *)(param_1 + 0x60) + -8 + *(longlong *)(param_1 + 0x68) * 0x10);
      (**(code **)(*plVar3 + 0x260))(plVar3);
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))();
      (**(code **)(*plVar3 + 0x1e0))(plVar3);
      lVar8 = *(longlong *)(param_1 + 0x68) + -1;
      if (*(longlong *)(param_1 + 0x68) == 1) {
        FUN_1432f2860(param_1 + 0x60,param_1 + 0x60,0);
      }
      else {
        lVar6 = lVar8 * 0x10;
        this = *(RefCountNTSImpl **)(lVar6 + 8 + *(longlong *)(param_1 + 0x60));
        if (this != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(this);
        }
        _Dst = (void *)(*(longlong *)(param_1 + 0x60) + lVar6);
        memmove(_Dst,(void *)((longlong)_Dst + 0x10),
                (*(longlong *)(param_1 + 0x68) - lVar8) * 0x10 - 0x10);
        *(longlong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) + -1;
      }
      lVar8 = *(longlong *)(param_1 + 0x68);
    }
    lVar8 = FUN_14336b350(pRVar7);
    if ((lVar8 != 0) && (lVar8 = *(longlong *)(lVar8 + 0x30), lVar8 != 0)) {
      uVar4 = FUN_1432f0f80(lVar8);
      FUN_143364170(lVar8,0,uVar4);
    }
    if (pRVar7 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(pRVar7);
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x274) = 0x3daaaaab;
    *(uint *)(param_1 + 0x52f0) = *(uint *)(param_1 + 0x52f0) | 0x100;
    return 1;
  }
  if (*(ulonglong *)(param_1 + 0x68) != 0) {
    lVar8 = *(longlong *)(param_1 + 0x60);
    do {
      if (*(int *)(lVar8 + uVar5 * 0x10) == param_2) {
        lVar6 = *(longlong *)(lVar8 + 8 + uVar5 * 0x10);
        if (lVar6 != 0) {
          piVar1 = (int *)(lVar6 + 8);
          *piVar1 = *piVar1 + 1;
        }
        pRVar7 = *(RefCountNTSImpl **)(lVar8 + 8 + uVar5 * 0x10);
        (**(code **)(*(longlong *)pRVar7 + 0x260))(pRVar7);
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))();
        (**(code **)(*(longlong *)pRVar7 + 0x1e0))(pRVar7);
        FUN_1432f21c0(param_1 + 0x60,uVar5);
        *(uint *)(param_1 + 0x52f0) = *(uint *)(param_1 + 0x52f0) | 0x100;
        lVar8 = FUN_14336b350(pRVar7);
        if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0x30) != 0)) {
          FUN_143364170(*(longlong *)(lVar8 + 0x30),uVar5,1);
        }
        Scaleform::RefCountNTSImpl::Release(pRVar7);
        return 1;
      }
      uVar5 = (ulonglong)((int)uVar5 + 1);
    } while (uVar5 < *(ulonglong *)(param_1 + 0x68));
  }
  return 0;
}



// FUNCTION 1432e38b0 ClearPlayList body=74 status=ok
// SIG undefined ClearPlayList(void)

void Scaleform::GFx::MovieImpl::ClearPlayList(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x52d8);
  while (lVar2 != 0) {
    lVar1 = *(longlong *)(lVar2 + 0x98);
    *(undefined8 *)(lVar2 + 0xa8) = 0;
    *(undefined8 *)(lVar2 + 0xa0) = 0;
    *(undefined8 *)(lVar2 + 0x90) = 0;
    *(undefined8 *)(lVar2 + 0x98) = 0;
    lVar2 = lVar1;
  }
  *(undefined8 *)(param_1 + 0x52d8) = 0;
  *(undefined8 *)(param_1 + 0x52e0) = 0;
  return;
}



// FUNCTION 1432e3900 FUN_1432e3900 body=183 status=ok
// SIG undefined FUN_1432e3900(void)

void FUN_1432e3900(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = 0;
  lVar2 = lVar5;
  for (lVar4 = param_2; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x38)) {
    lVar2 = lVar4;
  }
  lVar4 = *(longlong *)(param_1 + 0x52d8);
  if (lVar4 != 0) {
    do {
      lVar1 = *(longlong *)(lVar4 + 0x98);
      lVar3 = lVar4;
      do {
        if ((lVar3 == param_2) || (lVar3 == lVar2)) {
          FUN_14336ead0(lVar4);
          if (lVar5 == 0) {
            Scaleform::GFx::InteractiveObject::AddToPlayList();
            lVar5 = lVar4;
          }
          else {
            Scaleform::GFx::InteractiveObject::InsertToPlayListAfter(lVar4,lVar5);
            lVar5 = lVar4;
          }
          break;
        }
        lVar3 = *(longlong *)(lVar3 + 0x38);
      } while (lVar3 != 0);
      lVar4 = lVar1;
    } while (lVar1 != 0);
    if (lVar5 != 0) {
      *(uint *)(param_1 + 0x52f0) = *(uint *)(param_1 + 0x52f0) | 0x80000;
    }
  }
  return;
}



// FUNCTION 1432e39c0 FUN_1432e39c0 body=147 status=ok
// SIG undefined FUN_1432e39c0(void)

void FUN_1432e39c0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*(uint *)((longlong)param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x4b40 + uVar2 * 0x30) = *param_2;
  *(undefined8 *)(param_1 + 0x4b48 + uVar2 * 0x30) = param_2[1];
  *(undefined1 *)(param_1 + 0x4b50 + uVar2 * 0x30) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)(param_1 + 0x4b51 + uVar2 * 0x30) = *(undefined1 *)((longlong)param_2 + 0x11);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x4b58 + uVar2 * 0x30) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)(param_1 + 0x4b54 + uVar2 * 0x30) = uVar1;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x4b60 + uVar2 * 0x30) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x4b5c + uVar2 * 0x30) = uVar1;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x4b68 + uVar2 * 0x30) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)(param_1 + 0x4b64 + uVar2 * 0x30) = uVar1;
  *(undefined4 *)(param_1 + 0x4b6c + uVar2 * 0x30) = *(undefined4 *)((longlong)param_2 + 0x2c);
  return;
}



// FUNCTION 1432e3a60 FUN_1432e3a60 body=146 status=ok
// SIG undefined FUN_1432e3a60(void)

void FUN_1432e3a60(longlong param_1,ulonglong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  
  param_2 = param_2 & 0xffffffff;
  *param_3 = *(undefined8 *)(param_1 + 0x4b40 + param_2 * 0x30);
  param_3[1] = *(undefined8 *)(param_1 + 0x4b48 + param_2 * 0x30);
  *(undefined1 *)(param_3 + 2) = *(undefined1 *)(param_1 + 0x4b50 + param_2 * 0x30);
  *(undefined1 *)((longlong)param_3 + 0x11) = *(undefined1 *)(param_1 + 0x4b51 + param_2 * 0x30);
  uVar1 = *(undefined4 *)(param_1 + 0x4b54 + param_2 * 0x30);
  *(undefined4 *)(param_3 + 3) = *(undefined4 *)(param_1 + 0x4b58 + param_2 * 0x30);
  *(undefined4 *)((longlong)param_3 + 0x14) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x4b5c + param_2 * 0x30);
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 0x4b60 + param_2 * 0x30);
  *(undefined4 *)((longlong)param_3 + 0x1c) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x4b64 + param_2 * 0x30);
  *(undefined4 *)(param_3 + 5) = *(undefined4 *)(param_1 + 0x4b68 + param_2 * 0x30);
  *(undefined4 *)((longlong)param_3 + 0x24) = uVar1;
  *(undefined4 *)((longlong)param_3 + 0x2c) = *(undefined4 *)(param_1 + 0x4b6c + param_2 * 0x30);
  return;
}



// FUNCTION 1432e3ba0 FUN_1432e3ba0 body=39 status=ok
// SIG undefined FUN_1432e3ba0(void)

void FUN_1432e3ba0(longlong param_1,ulonglong param_2)

{
  param_2 = param_2 & 0xffffffff;
  *(undefined8 *)(param_1 + 0x4b40 + param_2 * 0x30) = 0;
  *(undefined8 *)(param_1 + 0x4b48 + param_2 * 0x30) = 0;
  *(undefined4 *)(param_1 + 0x4b6c + param_2 * 0x30) = 0xffffffff;
  return;
}



// FUNCTION 1432e3bd0 FUN_1432e3bd0 body=22 status=ok
// SIG undefined FUN_1432e3bd0(void)

undefined8 FUN_1432e3bd0(longlong param_1,ulonglong param_2)

{
  return CONCAT71((int7)((param_2 & 0xffffffff) >> 8),
                  *(longlong *)(param_1 + 0x4b40 + (param_2 & 0xffffffff) * 0x30) != 0);
}



// FUNCTION 1432e3bf0 FUN_1432e3bf0 body=201 status=ok
// SIG undefined FUN_1432e3bf0(void)

void FUN_1432e3bf0(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x4b40) == param_2) {
    *(undefined8 *)(param_1 + 0x4b40) = 0;
    *(undefined8 *)(param_1 + 0x4b48) = 0;
    *(undefined4 *)(param_1 + 0x4b6c) = 0xffffffff;
  }
  if (*(longlong *)(param_1 + 0x4b70) == param_2) {
    *(undefined8 *)(param_1 + 0x4b70) = 0;
    *(undefined8 *)(param_1 + 0x4b78) = 0;
    *(undefined4 *)(param_1 + 0x4b9c) = 0xffffffff;
  }
  if (*(longlong *)(param_1 + 0x4ba0) == param_2) {
    *(undefined8 *)(param_1 + 0x4ba0) = 0;
    *(undefined8 *)(param_1 + 0x4ba8) = 0;
    *(undefined4 *)(param_1 + 0x4bcc) = 0xffffffff;
  }
  if (*(longlong *)(param_1 + 0x4bd0) == param_2) {
    *(undefined8 *)(param_1 + 0x4bd0) = 0;
    *(undefined8 *)(param_1 + 0x4bd8) = 0;
    *(undefined4 *)(param_1 + 0x4bfc) = 0xffffffff;
  }
  if (*(longlong *)(param_1 + 0x4c00) == param_2) {
    *(undefined8 *)(param_1 + 0x4c00) = 0;
    *(undefined8 *)(param_1 + 0x4c08) = 0;
    *(undefined4 *)(param_1 + 0x4c2c) = 0xffffffff;
  }
  if (*(longlong *)(param_1 + 0x4c30) == param_2) {
    *(undefined8 *)(param_1 + 0x4c30) = 0;
    *(undefined8 *)(param_1 + 0x4c38) = 0;
    *(undefined4 *)(param_1 + 0x4c5c) = 0xffffffff;
  }
  return;
}



// FUNCTION 1432e3ce0 FUN_1432e3ce0 body=18 status=ok
// SIG undefined FUN_1432e3ce0(void)

void FUN_1432e3ce0(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x4b48 + (param_2 & 0xffffffff) * 0x30) = param_3;
  return;
}



// FUNCTION 1432e3d00 FUN_1432e3d00 body=109 status=ok
// SIG undefined FUN_1432e3d00(void)

void FUN_1432e3d00(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x5328);
  lVar2 = param_1 + 0x5310;
  if (param_1 == -0x5320) {
    lVar2 = 0;
  }
  for (; lVar1 != lVar2; lVar1 = *(longlong *)(lVar1 + 0x18)) {
    if (0x7f < *(byte *)(lVar1 + 0xd0)) {
      FUN_14337f400(lVar1);
    }
  }
  if (*(char *)(param_1 + 0x52d4) != '\0') {
    FUN_1432ea070(param_1);
  }
  return;
}



// FUNCTION 1432e3e10 FUN_1432e3e10 body=384 status=ok
// SIG undefined FUN_1432e3e10(void)

ulonglong FUN_1432e3e10(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  RefCountImpl *this;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong local_res8;
  undefined1 local_68 [24];
  undefined **local_50;
  undefined8 local_40;
  
  this = (RefCountImpl *)(**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))(param_1 + 0x10,0x23);
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
    if (*(int *)(this + 0x18) == 0) {
      uVar4 = Scaleform::Timer::GetTicks();
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      lVar5 = SUB168(ZEXT816(0x624dd2f1a9fbe77) * auVar1,8);
      uVar4 = ((uVar4 - lVar5 >> 1) + lVar5 >> 9) - *(longlong *)(param_1 + 0x4c80);
      FUN_143354c50(local_68,uVar4);
      FUN_143355390(local_68);
      (**(code **)(*(longlong *)this + 0x10))(this,"timer",local_40);
      local_50 = &PTR_FUN_145af1858;
      FUN_143353a80(local_68);
    }
    else {
      FUN_1432c2f70(&local_res8);
      (**(code **)(*(longlong *)this + 8))(this,"timer",&local_res8);
      uVar4 = _strtoui64((char *)((local_res8 & 0xfffffffffffffffc) + 0xc),(char **)0x0,10);
      iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                        ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
      if (iVar3 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
      }
    }
    return uVar4;
  }
  uVar4 = Scaleform::Timer::GetTicks();
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  lVar5 = SUB168(ZEXT816(0x624dd2f1a9fbe77) * auVar2,8);
  return (lVar5 + (uVar4 - lVar5 >> 1) >> 9) - *(longlong *)(param_1 + 0x4c80);
}



// FUNCTION 1432e3fb0 FUN_1432e3fb0 body=214 status=ok
// SIG undefined FUN_1432e3fb0(void)

longlong * FUN_1432e3fb0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 local_458 [2];
  undefined8 *local_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined1 local_408 [1024];
  
  *(int *)(param_1 + 0x4b38) = *(int *)(param_1 + 0x4b38) + 1;
  local_440 = 0;
  local_438 = 0;
  local_430 = 0;
  local_428 = 0;
  local_420 = 0;
  local_418 = 0;
  local_450 = &local_440;
  local_458[0] = 2;
  local_448 = 0x30;
  FUN_1433561d0(local_408,local_458);
  FUN_1433563e0(local_408,"instance{0}");
  FUN_1432edfd0(local_408,param_1 + 0x4b38);
  Scaleform::MsgFormat::FinishFormatD(local_408);
  FUN_1433562f0(local_408);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1e0))();
  lVar2 = FUN_143360a60(uVar1,&local_440);
  *param_2 = lVar2;
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  return param_2;
}



// FUNCTION 1432e4090 FUN_1432e4090 body=53 status=ok
// SIG undefined FUN_1432e4090(void)

void FUN_1432e4090(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x30);
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
      lVar1 = *(longlong *)(lVar1 + 8);
      lVar2 = *(longlong *)(lVar1 + 8);
    }
    *(longlong *)(lVar1 + 8) = param_2;
    return;
  }
  *(longlong *)(param_1 + 0x28) = param_2;
  return;
}



// FUNCTION 1432e40d0 FUN_1432e40d0 body=71 status=ok
// SIG undefined FUN_1432e40d0(void)

void FUN_1432e40d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  *(undefined4 *)(*(longlong *)(param_2 + 0x20) + 0x20) = *(undefined4 *)(param_1 + 0x30);
  lVar1 = *(longlong *)(param_1 + 0x5300);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
      lVar1 = *(longlong *)(lVar1 + 8);
      lVar2 = *(longlong *)(lVar1 + 8);
    }
    *(longlong *)(lVar1 + 8) = param_2;
    *(longlong *)(param_2 + 0x10) = lVar1;
    return;
  }
  *(longlong *)(param_1 + 0x5300) = param_2;
  return;
}



// FUNCTION 1432e4120 FUN_1432e4120 body=360 status=ok
// SIG undefined FUN_1432e4120(void)

void FUN_1432e4120(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  RefCountImpl *pRVar7;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    do {
      puVar2 = *(undefined8 **)(param_1 + 0x28);
      if (uVar1 < *(uint *)(puVar2 + 4)) break;
      *(undefined8 *)(param_1 + 0x28) = puVar2[1];
      lVar6 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x98,0);
      pRVar7 = (RefCountImpl *)0x0;
      if (lVar6 != 0) {
        pRVar7 = (RefCountImpl *)(*(longlong *)(param_1 + 0x88) + 0x10);
        if (*(longlong *)(param_1 + 0x88) == 0) {
          pRVar7 = (RefCountImpl *)0x0;
        }
        pRVar7 = (RefCountImpl *)
                 FUN_143318b20(lVar6,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x28),pRVar7,0)
        ;
      }
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x120))(*(longlong **)(param_1 + 0x18),puVar2);
      (**(code **)*puVar2)(puVar2,1);
      if (pRVar7 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(pRVar7);
      }
    } while (*(longlong *)(param_1 + 0x28) != 0);
  }
  plVar3 = *(longlong **)(param_1 + 0x5300);
  while( true ) {
    if (plVar3 == (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x5300);
      while (plVar3 != (longlong *)0x0) {
        cVar5 = (**(code **)(*plVar3 + 8))(plVar3);
        if (cVar5 == '\0') {
          plVar3 = (longlong *)plVar3[1];
        }
        else {
          plVar4 = (longlong *)plVar3[1];
          if (plVar4 != (longlong *)0x0) {
            plVar4[2] = plVar3[2];
          }
          if (plVar3[2] != 0) {
            *(longlong **)(plVar3[2] + 8) = plVar4;
          }
          if (*(longlong **)(param_1 + 0x5300) == plVar3) {
            *(longlong **)(param_1 + 0x5300) = plVar4;
          }
          (**(code **)*plVar3)(plVar3,1);
          plVar3 = plVar4;
        }
      }
      return;
    }
    cVar5 = (**(code **)(*plVar3 + 0x10))(plVar3);
    if (cVar5 == '\0') break;
    plVar3 = (longlong *)plVar3[1];
  }
  return;
}



// FUNCTION 1432e4290 FUN_1432e4290 body=557 status=ok
// SIG undefined FUN_1432e4290(void)

RefCountImpl *
FUN_1432e4290(longlong param_1,longlong param_2,undefined1 param_3,undefined8 param_4,
             RefCountImpl *param_5)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  RefCountImpl *pRVar4;
  ulonglong uVar5;
  RefCountImpl *this;
  longlong lVar6;
  RefCountImpl *pRVar7;
  longlong *plVar8;
  ulonglong in_stack_ffffffffffffff90;
  longlong *local_48;
  undefined8 local_40;
  
  pRVar7 = (RefCountImpl *)0x0;
  pRVar4 = pRVar7;
  if ((param_5 == (RefCountImpl *)0x0) &&
     (lVar3 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x98,0), param_5 = pRVar7,
     lVar3 != 0)) {
    pRVar4 = (RefCountImpl *)(*(longlong *)(param_1 + 0x88) + 0x10);
    if (*(longlong *)(param_1 + 0x88) == 0) {
      pRVar4 = pRVar7;
    }
    pRVar4 = (RefCountImpl *)
             FUN_143318b20(lVar3,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x28),pRVar4,0);
    param_5 = pRVar4;
  }
  if (param_2 != 0) {
    FUN_14330f6a0(&local_48,param_4,0,0,0);
    plVar1 = *(longlong **)(param_1 + 0x48);
    plVar8 = DAT_146b62f28;
    if (plVar1 != (longlong *)0x0) {
      plVar8 = plVar1;
    }
    lVar3 = (**(code **)(*plVar8 + 0x50))(plVar8,0x48);
    if (lVar3 != 0) {
      lVar3 = FUN_14330f260(lVar3,&local_48,2,param_4,plVar1,
                            in_stack_ffffffffffffff90 & 0xffffffffffffff00,0);
      if (lVar3 != 0) {
        if (*(longlong *)(param_5 + 0x18) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(ulonglong *)(*(longlong *)(param_5 + 0x18) + 0x20);
          if (uVar5 == 0) {
            uVar5 = Scaleform::Log::GetGlobalLog();
          }
        }
        this = (RefCountImpl *)
               (**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))(param_1 + 0x10,0xe);
        cVar2 = FUN_14330db00(*(undefined8 *)(lVar3 + 0x40),0,param_2,this,uVar5,param_3);
        if (this != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(this);
        }
        if (cVar2 != '\0') {
          FUN_1433190c0(param_5,lVar3);
          lVar6 = (**(code **)(*plVar1 + 0x50))(plVar1,0x78);
          if (lVar6 != 0) {
            pRVar7 = (RefCountImpl *)
                     FUN_143310770(lVar6,lVar3,*(undefined8 *)(param_5 + 0x10),
                                   *(undefined8 *)(param_5 + 0x68),uVar5 & 0xffffffff00000000,
                                   *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x20),plVar1,1,0)
            ;
          }
        }
        FUN_1432de450(lVar3);
      }
    }
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x10))(local_48,local_40);
    }
  }
  if (pRVar4 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(pRVar4);
  }
  return pRVar7;
}



// FUNCTION 1432e44d0 FUN_1432e44d0 body=775 status=ok
// SIG undefined FUN_1432e44d0(void)

longlong * FUN_1432e44d0(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  RefCountImpl *this;
  RefCountImpl *this_00;
  RefCountImpl *this_01;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  RefCountImpl *local_res18;
  undefined8 local_res20;
  longlong *local_88;
  undefined8 uStack_80;
  undefined4 local_78 [2];
  longlong *local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  RefCountImpl *pRStack_58;
  RefCountImpl *local_50;
  longlong lStack_48;
  
  plVar9 = (longlong *)0x0;
  local_res20 = param_4;
  if (param_3 != 0) {
    uVar5 = FUN_1432c2fb0(&local_res18,param_4);
    cVar2 = FUN_1432ff890(uVar5,0,0);
    uVar10 = (ulonglong)local_res18 & 0xfffffffffffffffc;
    iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar10 + 8,0xffffffff);
    if (iVar3 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar10);
    }
    if (cVar2 == '\0') {
      local_88 = (longlong *)0x0;
      uStack_80 = 0;
      FUN_1432c2fb0(&local_res18,param_4);
      cVar2 = FUN_143311e60(param_3,&local_88,&local_res18,0);
      if (cVar2 == '\0') {
        plVar7 = *(longlong **)(param_1 + 0x80);
        lVar8 = param_3;
        plVar11 = (longlong *)(param_1 + 0x70);
        if (param_1 == -0x78) {
          plVar11 = plVar9;
        }
        for (; plVar7 != plVar11; plVar7 = (longlong *)plVar7[2]) {
          if ((plVar7[4] != param_3) && (cVar2 = FUN_143312430(plVar7[4],lVar8), cVar2 != '\0')) {
            cVar2 = FUN_143311e60(plVar7[4],&local_88,&local_res18,0);
            if (cVar2 != '\0') goto LAB_1432e46d3;
            lVar8 = plVar7[4];
          }
        }
        bVar1 = false;
      }
      else {
LAB_1432e46d3:
        bVar1 = true;
      }
      iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                        (((ulonglong)local_res18 & 0xfffffffffffffffc) + 8,0xffffffff);
      if (iVar3 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))
                  (DAT_146b62f28,(ulonglong)local_res18 & 0xfffffffffffffffc);
      }
      if (!bVar1) {
        *param_2 = 0;
        plVar9 = local_88;
        goto joined_r0x0001432e47b2;
      }
      uVar4 = (**(code **)(*local_88 + 0x10))();
      plVar7 = local_88;
      if ((uVar4 & 0xff00) == 0x100) {
        plVar9 = local_88;
        if (local_88 == (longlong *)0x0) goto LAB_1432e479e;
        Scaleform::GFx::Resource::AddRef();
        plVar9 = plVar7;
      }
      if (local_88 != (longlong *)0x0) {
        FUN_1432de450();
      }
LAB_1432e479e:
      if (plVar9 != (longlong *)0x0) {
        Scaleform::GFx::Resource::AddRef(plVar9);
      }
    }
    else {
      plVar7 = *(longlong **)(param_1 + 0x48);
      plVar11 = (longlong *)(*(longlong *)(param_1 + 0x88) + 0x10);
      if (*(longlong *)(param_1 + 0x88) == 0) {
        plVar11 = plVar9;
      }
      local_88 = plVar7;
      this = (RefCountImpl *)(**(code **)(*plVar11 + 0x18))(plVar11,0xe);
      if (this != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(this);
        local_78[0] = 0;
        local_68 = 1;
        local_64 = 1;
        local_60 = 0;
        pRStack_58 = (RefCountImpl *)0x0;
        local_50 = (RefCountImpl *)0x0;
        lStack_48 = 0;
        local_70 = plVar7;
        this_00 = (RefCountImpl *)(**(code **)(*plVar11 + 0x18))(plVar11,0xf);
        this_01 = (RefCountImpl *)(**(code **)(*plVar11 + 0x18))(plVar11,0xc);
        puVar6 = (undefined8 *)Scaleform::GFx::StateBag::GetLog(plVar11,&local_res18);
        local_60 = *puVar6;
        pRStack_58 = this_01;
        local_50 = this_00;
        if (local_res18 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(local_res18);
        }
        if (this_01 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(this_01);
        }
        if (this_00 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(this_00);
        }
        lStack_48 = param_1;
        FUN_1432c2fb0(&local_res18,local_res20);
        plVar7 = (longlong *)(**(code **)(*(longlong *)this + 8))(this,local_78,&local_res18);
        iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                          (((ulonglong)local_res18 & 0xfffffffffffffffc) + 8,0xffffffff);
        if (iVar3 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))
                    (DAT_146b62f28,(ulonglong)local_res18 & 0xfffffffffffffffc);
        }
        if (plVar7 != (longlong *)0x0) {
          lVar8 = (**(code **)(*local_88 + 0x50))(local_88,0x68);
          if (lVar8 != 0) {
            plVar9 = (longlong *)FUN_1432ef310(lVar8,plVar7,1);
          }
          (**(code **)(*plVar7 + 0x10))(plVar7);
          goto LAB_1432e479e;
        }
      }
    }
  }
  *param_2 = (longlong)plVar9;
joined_r0x0001432e47b2:
  if (plVar9 != (longlong *)0x0) {
    FUN_1432de450(plVar9);
  }
  return param_2;
}



// FUNCTION 1432e47e0 FUN_1432e47e0 body=73 status=ok
// SIG undefined FUN_1432e47e0(void)

undefined8 FUN_1432e47e0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x58) != 0) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x60))();
    Scaleform::String::operator=(param_2,uVar2);
    cVar1 = FUN_1432bad10(param_2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  FUN_1432c3510(param_2);
  return 0;
}



// FUNCTION 1432e4830 FUN_1432e4830 body=571 status=ok
// SIG undefined FUN_1432e4830(void)

void FUN_1432e4830(longlong param_1,undefined8 *param_2)

{
  undefined8 *_Buf2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  longlong lVar15;
  
  _Buf2 = (undefined8 *)(param_1 + 0xa8);
  iVar14 = _guard_xfg_dispatch_icall_nop(param_2,_Buf2,0x34);
  if (iVar14 != 0) {
    iVar14 = *(int *)(param_1 + 0xbc);
    iVar7 = *(int *)(param_1 + 0xb0);
    iVar8 = *(int *)(param_1 + 0xb8);
    iVar9 = *(int *)(param_1 + 0xb4);
    fVar1 = *(float *)(param_1 + 0xd8);
    fVar2 = *(float *)(param_1 + 0xd4);
    *(uint *)(param_1 + 0x52f0) = *(uint *)(param_1 + 0x52f0) | 1;
    uVar10 = param_2[1];
    *_Buf2 = *param_2;
    *(undefined8 *)(param_1 + 0xb0) = uVar10;
    uVar11 = *(undefined4 *)((longlong)param_2 + 0x14);
    uVar12 = *(undefined4 *)(param_2 + 3);
    uVar13 = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)(param_1 + 0xbc) = uVar11;
    *(undefined4 *)(param_1 + 0xc0) = uVar12;
    *(undefined4 *)(param_1 + 0xc4) = uVar13;
    uVar11 = *(undefined4 *)((longlong)param_2 + 0x24);
    uVar12 = *(undefined4 *)(param_2 + 5);
    uVar13 = *(undefined4 *)((longlong)param_2 + 0x2c);
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 0xcc) = uVar11;
    *(undefined4 *)(param_1 + 0xd0) = uVar12;
    *(undefined4 *)(param_1 + 0xd4) = uVar13;
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 6);
    fVar3 = *(float *)(param_1 + 0x100);
    fVar4 = *(float *)(param_1 + 0x104);
    fVar5 = *(float *)(param_1 + 0x108);
    fVar6 = *(float *)(param_1 + 0x10c);
    FUN_1432e4c60(param_1);
    if ((((((fVar3 != *(float *)(param_1 + 0x100)) || (fVar5 != *(float *)(param_1 + 0x108))) ||
          (fVar4 != *(float *)(param_1 + 0x104))) || (fVar6 != *(float *)(param_1 + 0x10c))) ||
        ((*(int *)(param_1 + 0xf0) == 0 &&
         ((((iVar8 != *(int *)(param_1 + 0xb8) || (iVar14 != *(int *)(param_1 + 0xbc))) ||
           ((iVar7 != *(int *)(param_1 + 0xb0) ||
            ((iVar9 != *(int *)(param_1 + 0xb4) || (fVar2 != *(float *)(param_1 + 0xd4))))))) ||
          (fVar1 != *(float *)(param_1 + 0xd8))))))) ||
       ((*(int *)(param_1 + 0xf0) != 2 &&
        (((iVar8 != *(int *)(param_1 + 0xb8) || (iVar14 != *(int *)(param_1 + 0xbc))) ||
         (fVar1 != *(float *)(param_1 + 0xd8))))))) {
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x98))();
    }
    FUN_143364250(*(undefined8 *)(param_1 + 0x90),_Buf2);
    uVar10 = *(undefined8 *)(param_1 + 0x90);
    iVar14 = *(int *)(param_1 + 0x2208);
    lVar15 = FUN_1432cd1e0(uVar10);
    if (*(int *)(lVar15 + 0xcc) != iVar14) {
      lVar15 = FUN_1432cd080(uVar10,0x1000);
      *(undefined4 *)(lVar15 + 0xcc) = *(undefined4 *)(param_1 + 0x2208);
    }
    FUN_1433625b0(*(undefined8 *)(param_1 + 0x90),param_1 + 0x120);
  }
  return;
}



// FUNCTION 1432e4ab0 FUN_1432e4ab0 body=237 status=ok
// SIG undefined FUN_1432e4ab0(void)

void FUN_1432e4ab0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int local_res8;
  undefined1 local_resc;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  plVar1 = (longlong *)param_1[0x47];
  if (plVar1 != (longlong *)0x0) {
    local_resc = 0;
    local_res8 = 0x19 - (uint)(param_2 != 0);
    (**(code **)(*plVar1 + 8))(plVar1,param_1,&local_res8);
  }
  *(int *)(param_1 + 0x1e) = param_2;
  local_48 = (undefined4)param_1[0x15];
  local_1c = *(undefined4 *)((longlong)param_1 + 0xd4);
  local_18 = (undefined4)param_1[0x1b];
  local_44 = *(undefined4 *)((longlong)param_1 + 0xac);
  local_40 = (undefined4)param_1[0x16];
  local_3c = *(undefined4 *)((longlong)param_1 + 0xb4);
  local_38 = (undefined4)param_1[0x17];
  local_34 = *(undefined4 *)((longlong)param_1 + 0xbc);
  local_20 = (undefined4)param_1[0x1a];
  local_30 = (undefined4)param_1[0x18];
  local_2c = *(undefined4 *)((longlong)param_1 + 0xc4);
  local_28 = (undefined4)param_1[0x19];
  local_24 = *(undefined4 *)((longlong)param_1 + 0xcc);
  *(int *)(param_1 + 0x1a) = (int)param_1[0x1a] + 1;
  (**(code **)(*param_1 + 0x60))(param_1,&local_48);
  return;
}



// FUNCTION 1432e4bb0 FUN_1432e4bb0 body=170 status=ok
// SIG undefined FUN_1432e4bb0(void)

void FUN_1432e4bb0(longlong *param_1,undefined4 param_2)

{
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  *(undefined4 *)((longlong)param_1 + 0xf4) = param_2;
  local_48 = (undefined4)param_1[0x15];
  local_1c = *(undefined4 *)((longlong)param_1 + 0xd4);
  local_18 = (undefined4)param_1[0x1b];
  local_44 = *(undefined4 *)((longlong)param_1 + 0xac);
  local_40 = (undefined4)param_1[0x16];
  local_3c = *(undefined4 *)((longlong)param_1 + 0xb4);
  local_38 = (undefined4)param_1[0x17];
  local_34 = *(undefined4 *)((longlong)param_1 + 0xbc);
  local_20 = (undefined4)param_1[0x1a];
  local_30 = (undefined4)param_1[0x18];
  local_2c = *(undefined4 *)((longlong)param_1 + 0xc4);
  local_28 = (undefined4)param_1[0x19];
  local_24 = *(undefined4 *)((longlong)param_1 + 0xcc);
  *(int *)(param_1 + 0x1a) = (int)param_1[0x1a] + 1;
  (**(code **)(*param_1 + 0x60))(local_1c,&local_48);
  return;
}



// FUNCTION 1432e4c60 FUN_1432e4c60 body=1745 status=ok
// SIG undefined FUN_1432e4c60(void)

void FUN_1432e4c60(longlong param_1)

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
  int iVar10;
  longlong lVar11;
  undefined1 auVar12 [12];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar1 = *(float *)(param_1 + 0xec);
  fVar2 = *(float *)(param_1 + 0xe0);
  fVar3 = *(float *)(param_1 + 0x108);
  fVar4 = *(float *)(param_1 + 0x104);
  fVar5 = *(float *)(param_1 + 0x10c);
  fVar6 = *(float *)(param_1 + 0xdc);
  fVar7 = *(float *)(param_1 + 0xe8);
  fVar8 = *(float *)(param_1 + 0xe4);
  fVar9 = *(float *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x50) == 0) {
    *(undefined4 *)(param_1 + 0xe4) = 0x3f800000;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xdc) = 0x3f800000;
    goto LAB_1432e5277;
  }
  iVar10 = *(int *)(param_1 + 0xf0);
  lVar11 = *(longlong *)
            (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x18) + 0x40);
  fVar15 = (float)(*(int *)(param_1 + 0xb8) + *(int *)(param_1 + 0xb0)) * 20.0 -
           (float)*(int *)(param_1 + 0xb0) * 20.0;
  fVar13 = *(float *)(lVar11 + 0x68) - *(float *)(lVar11 + 0x60);
  fVar14 = *(float *)(lVar11 + 0x6c) - *(float *)(lVar11 + 100);
  fVar17 = (float)(*(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xb4)) * 20.0 -
           (float)*(int *)(param_1 + 0xb4) * 20.0;
  if (iVar10 != 0) {
    if (iVar10 == 1) {
LAB_1432e4db2:
      fVar16 = fVar15 * *(float *)(param_1 + 0xd8);
      if (((iVar10 == 1) && (fVar16 / fVar13 < fVar17 / fVar14)) ||
         ((iVar10 == 3 && (fVar17 / fVar14 < fVar16 / fVar13)))) {
        *(undefined4 *)(param_1 + 0x100) = 0;
        fVar16 = (fVar13 * fVar17) / fVar16;
        *(float *)(param_1 + 0x104) = fVar14 * 0.5 - fVar16 * 0.5;
        *(float *)(param_1 + 0x108) = fVar13 + *(float *)(param_1 + 0x100);
        *(float *)(param_1 + 0x10c) = fVar16 + *(float *)(param_1 + 0x104);
        *(undefined4 *)(param_1 + 0xe8) = 0;
        *(float *)(param_1 + 0xec) = *(float *)(param_1 + 0x104) * 0.05;
        if (fVar15 == 0.0) {
          fVar13 = 0.0;
        }
        else {
          fVar13 = fVar13 / fVar15;
        }
        *(float *)(param_1 + 0xe0) = fVar13;
        *(float *)(param_1 + 0xe4) = fVar13 / *(float *)(param_1 + 0xd8);
      }
      else {
        *(undefined4 *)(param_1 + 0x104) = 0;
        fVar16 = (fVar16 * fVar14) / fVar17;
        fVar15 = fVar13 * 0.5 - fVar16 * 0.5;
        *(float *)(param_1 + 0x100) = fVar15;
        *(float *)(param_1 + 0x108) = fVar16 + fVar15;
        *(float *)(param_1 + 0x10c) = fVar14 + *(float *)(param_1 + 0x104);
        *(undefined4 *)(param_1 + 0xec) = 0;
        *(float *)(param_1 + 0xe8) = *(float *)(param_1 + 0x100) * 0.05;
        if (fVar17 == 0.0) {
          fVar14 = 0.0;
        }
        else {
          fVar14 = fVar14 / fVar17;
        }
        *(float *)(param_1 + 0xe4) = fVar14;
        *(float *)(param_1 + 0xe0) = fVar14 * *(float *)(param_1 + 0xd8);
      }
    }
    else if (iVar10 == 2) {
      *(undefined8 *)(param_1 + 0x100) = 0;
      fVar13 = fVar13 + *(float *)(param_1 + 0x100);
      *(float *)(param_1 + 0x108) = fVar13;
      fVar14 = fVar14 + *(float *)(param_1 + 0x104);
      *(float *)(param_1 + 0x10c) = fVar14;
      *(undefined8 *)(param_1 + 0xe8) = 0;
      if (fVar15 == 0.0) {
        fVar15 = 0.0;
      }
      else {
        fVar15 = (fVar13 - *(float *)(param_1 + 0x100)) / fVar15;
      }
      *(float *)(param_1 + 0xe0) = fVar15;
      if (fVar17 == 0.0) {
        *(undefined4 *)(param_1 + 0xe4) = 0;
      }
      else {
        *(float *)(param_1 + 0xe4) = (fVar14 - *(float *)(param_1 + 0x104)) / fVar17;
      }
    }
    else if (iVar10 == 3) goto LAB_1432e4db2;
    goto LAB_1432e51ed;
  }
  fVar15 = fVar15 * *(float *)(param_1 + 0xd8) * *(float *)(param_1 + 0xd4);
  fVar17 = *(float *)(param_1 + 0xd4) * fVar17;
  switch(*(undefined4 *)(param_1 + 0xf4)) {
  case 0:
    *(float *)(param_1 + 0x100) = (float)((int)((fVar13 * 0.5 - fVar15 * 0.5) * 0.05) * 0x14);
    fVar13 = fVar14 * 0.5 - fVar17 * 0.5;
    goto LAB_1432e515c;
  case 1:
    *(undefined4 *)(param_1 + 0x104) = 0;
    *(float *)(param_1 + 0x100) = (float)((int)((fVar13 * 0.5 - fVar15 * 0.5) * 0.05) * 0x14);
    break;
  case 2:
    *(float *)(param_1 + 0x104) = fVar14 - fVar17;
    *(float *)(param_1 + 0x100) = (float)((int)((fVar13 * 0.5 - fVar15 * 0.5) * 0.05) * 0x14);
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x100) = 0;
    goto LAB_1432e5145;
  case 4:
    *(float *)(param_1 + 0x100) = fVar13 - fVar15;
LAB_1432e5145:
    fVar13 = fVar14 * 0.5 - fVar17 * 0.5;
LAB_1432e515c:
    *(float *)(param_1 + 0x104) = (float)((int)(fVar13 * 0.05) * 0x14);
    break;
  case 5:
    *(undefined8 *)(param_1 + 0x100) = 0;
    break;
  case 6:
    *(undefined4 *)(param_1 + 0x104) = 0;
    *(float *)(param_1 + 0x100) = fVar13 - fVar15;
    break;
  case 7:
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(float *)(param_1 + 0x104) = fVar14 - fVar17;
    break;
  case 8:
    *(float *)(param_1 + 0x100) = fVar13 - fVar15;
    *(float *)(param_1 + 0x104) = fVar14 - fVar17;
  }
  *(float *)(param_1 + 0x108) = fVar15 + *(float *)(param_1 + 0x100);
  *(float *)(param_1 + 0x10c) = fVar17 + *(float *)(param_1 + 0x104);
  *(float *)(param_1 + 0xe8) = *(float *)(param_1 + 0x100) * 0.05;
  *(float *)(param_1 + 0xec) = *(float *)(param_1 + 0x104) * 0.05;
  *(float *)(param_1 + 0xe4) = *(float *)(param_1 + 0xd4);
  *(float *)(param_1 + 0xe0) = *(float *)(param_1 + 0xd4) * *(float *)(param_1 + 0xd8);
LAB_1432e51ed:
  auVar12 = ZEXT812(0x3ba3d70a);
  if (*(float *)(param_1 + 0xe4) == 0.0) {
    fVar15 = 0.005;
  }
  else {
    fVar15 = 1.0 / *(float *)(param_1 + 0xe4);
  }
  if (*(float *)(param_1 + 0xe0) != 0.0) {
    auVar12._4_8_ = 0;
    auVar12._0_4_ = 1.0 / *(float *)(param_1 + 0xe0);
  }
  if (auVar12._0_4_ <= fVar15) {
    auVar12._4_8_ = auVar12._4_8_;
    auVar12._0_4_ = fVar15;
  }
  *(int *)(param_1 + 0xdc) = auVar12._0_4_;
LAB_1432e5277:
  FUN_1432e83f0(param_1);
  if (((((fVar9 != *(float *)(param_1 + 0x100)) || (fVar3 != *(float *)(param_1 + 0x108))) ||
       (fVar4 != *(float *)(param_1 + 0x104))) ||
      ((fVar5 != *(float *)(param_1 + 0x10c) || (fVar7 != *(float *)(param_1 + 0xe8))))) ||
     (((fVar1 != *(float *)(param_1 + 0xec) ||
       ((fVar2 != *(float *)(param_1 + 0xe0) || (fVar8 != *(float *)(param_1 + 0xe4))))) ||
      (fVar6 != *(float *)(param_1 + 0xdc))))) {
    FUN_1432ece10(param_1);
  }
  return;
}



// FUNCTION 1432e5360 FUN_1432e5360 body=92 status=ok
// SIG undefined FUN_1432e5360(void)

void FUN_1432e5360(longlong param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  iVar1 = *param_2;
  *(int *)(param_1 + 0x2208) = iVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  lVar3 = FUN_1432cd1e0(uVar2);
  if (*(int *)(lVar3 + 0xcc) != iVar1) {
    lVar3 = FUN_1432cd080(uVar2,0x1000);
    *(undefined4 *)(lVar3 + 0xcc) = *(undefined4 *)(param_1 + 0x2208);
  }
  return;
}



// FUNCTION 1432e53d0 FUN_1432e53d0 body=124 status=ok
// SIG undefined FUN_1432e53d0(void)

void FUN_1432e53d0(longlong param_1,float param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  cVar4 = (char)(longlong)(param_2 * 255.0);
  cVar5 = -1;
  if (cVar4 != -1) {
    cVar5 = cVar4;
  }
  *(char *)(param_1 + 0x220b) = cVar5;
  iVar1 = *(int *)(param_1 + 0x2208);
  lVar3 = FUN_1432cd1e0(uVar2);
  if (*(int *)(lVar3 + 0xcc) != iVar1) {
    lVar3 = FUN_1432cd080(uVar2,0x1000);
    *(undefined4 *)(lVar3 + 0xcc) = *(undefined4 *)(param_1 + 0x2208);
  }
  return;
}



// FUNCTION 1432e5460 FUN_1432e5460 body=1921 status=ok
// SIG undefined FUN_1432e5460(void)

float FUN_1432e5460(longlong param_1,float param_2,int param_3,char param_4)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  undefined8 uVar4;
  RefCountImpl *this;
  RefCountImpl *this_00;
  RefCountImpl *this_01;
  char cVar5;
  byte bVar6;
  byte bVar7;
  undefined4 uVar8;
  int iVar9;
  RefCountImpl *pRVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 uVar14;
  uint uVar15;
  RefCountImpl *pRVar16;
  ulonglong uVar17;
  RefCountImpl *pRVar18;
  RefCountImpl *pRVar19;
  float fVar20;
  float fVar21;
  RefCountImpl *local_res8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  RefCountImpl *pRStack_a0;
  RefCountImpl *local_98;
  RefCountImpl *pRStack_90;
  RefCountImpl *local_88;
  RefCountImpl *pRStack_80;
  RefCountImpl *local_78;
  undefined8 uStack_70;
  
  if ((*(uint *)(param_1 + 0x52f0) >> 0x14 & 1) != 0) {
    if (param_4 != '\0') {
      FUN_1432e5bf0(param_1,1);
    }
    return 0.05;
  }
  if (*(longlong *)(param_1 + 0x58) == 0) {
    if (param_4 != '\0') {
      FUN_1432e5bf0(param_1,1);
    }
    if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
      fVar20 = (float)(**(code **)(**(longlong **)(param_1 + 0x50) + 0x48))();
      return 1.0 / fVar20;
    }
    return 0.0;
  }
  FUN_1432ec8d0();
  *(uint *)(param_1 + 0x52f0) = *(uint *)(param_1 + 0x52f0) | 0x200;
  plVar12 = (longlong *)(*(longlong *)(param_1 + 0x88) + 0x10);
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  pRStack_a0 = (RefCountImpl *)0x0;
  local_98 = (RefCountImpl *)0x0;
  pRStack_90 = (RefCountImpl *)0x0;
  local_88 = (RefCountImpl *)0x0;
  pRStack_80 = (RefCountImpl *)0x0;
  fVar20 = 0.0;
  if (0.0 <= param_2) {
    fVar20 = param_2;
  }
  local_78 = (RefCountImpl *)0x0;
  uStack_70 = 0;
  (**(code **)(*plVar12 + 0x20))(plVar12,&local_b8,&DAT_145af95b8,9);
  uVar14 = local_b8;
  if (*(RefCountImpl **)(param_1 + 0x238) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x238));
  }
  uVar4 = uStack_b0;
  *(undefined8 *)(param_1 + 0x238) = uVar14;
  if (*(RefCountImpl **)(param_1 + 0x240) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x240));
  }
  uVar14 = local_a8;
  *(undefined8 *)(param_1 + 0x240) = uVar4;
  if (*(RefCountImpl **)(param_1 + 0x248) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x248));
  }
  this = local_98;
  pRVar19 = (RefCountImpl *)0x0;
  *(undefined8 *)(param_1 + 0x248) = uVar14;
  local_res8 = pRStack_a0;
  pRVar10 = pRVar19;
  if (local_98 == (RefCountImpl *)0x0) {
LAB_1432e5644:
    if (pRVar10 != (RefCountImpl *)0x0) goto LAB_1432e5649;
  }
  else {
    pRVar10 = *(RefCountImpl **)(local_98 + 0x20);
    if (pRVar10 == (RefCountImpl *)0x0) {
      pRVar10 = (RefCountImpl *)Scaleform::Log::GetGlobalLog();
      goto LAB_1432e5644;
    }
LAB_1432e5649:
    Scaleform::RefCountImpl::AddRef(pRVar10);
  }
  if (*(RefCountImpl **)(param_1 + 0x230) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x230));
  }
  this_01 = local_78;
  this_00 = pRStack_80;
  pRVar18 = local_88;
  pRVar16 = pRStack_90;
  *(RefCountImpl **)(param_1 + 0x230) = pRVar10;
  cVar5 = FUN_143385280(*(undefined8 *)(param_1 + 600),pRStack_90,local_88,pRStack_80,local_78);
  if (this_01 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this_01);
  }
  if (this_00 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this_00);
  }
  if (pRVar18 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(pRVar18);
  }
  if (pRVar16 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(pRVar16);
  }
  pRVar10 = local_res8;
  *(uint *)(param_1 + 0x52f0) = *(uint *)(param_1 + 0x52f0) | 2;
  bVar7 = 0;
  bVar6 = bVar7;
  if (local_res8 != (RefCountImpl *)0x0) {
    bVar6 = (byte)*(undefined4 *)(local_res8 + 0x18) & 1;
  }
  if (bVar6 == 0) {
    *(uint *)(param_1 + 0x52f0) = *(uint *)(param_1 + 0x52f0) & 0xfffffffb;
  }
  else {
    *(uint *)(param_1 + 0x52f0) = *(uint *)(param_1 + 0x52f0) | 4;
  }
  bVar6 = bVar7;
  if (local_res8 != (RefCountImpl *)0x0) {
    bVar6 = (byte)(*(uint *)(local_res8 + 0x18) >> 1) & 1;
  }
  if (bVar6 == 0) {
    *(uint *)(param_1 + 0x52f0) = *(uint *)(param_1 + 0x52f0) & 0xffffffbf;
  }
  else {
    *(uint *)(param_1 + 0x52f0) = *(uint *)(param_1 + 0x52f0) | 0x40;
  }
  bVar6 = bVar7;
  if (local_res8 != (RefCountImpl *)0x0) {
    bVar6 = (byte)(*(uint *)(local_res8 + 0x18) >> 2) & 1;
  }
  if (bVar6 == 0) {
    *(uint *)(param_1 + 0x52f0) = *(uint *)(param_1 + 0x52f0) & 0xfffffff7;
  }
  else {
    *(uint *)(param_1 + 0x52f0) = *(uint *)(param_1 + 0x52f0) | 8;
  }
  bVar6 = bVar7;
  if (local_res8 != (RefCountImpl *)0x0) {
    bVar6 = (byte)(*(uint *)(local_res8 + 0x18) >> 4) & 1;
  }
  if (bVar6 == 0) {
    *(uint *)(param_1 + 0x52f0) = *(uint *)(param_1 + 0x52f0) & 0xffffffdf;
  }
  else {
    *(uint *)(param_1 + 0x52f0) = *(uint *)(param_1 + 0x52f0) | 0x20;
  }
  if (local_res8 != (RefCountImpl *)0x0) {
    bVar7 = (byte)(*(uint *)(local_res8 + 0x18) >> 3) & 1;
  }
  if (bVar7 == 0) {
    *(uint *)(param_1 + 0x52f0) = *(uint *)(param_1 + 0x52f0) & 0xffffffef;
  }
  else {
    *(uint *)(param_1 + 0x52f0) = *(uint *)(param_1 + 0x52f0) | 0x10;
  }
  pRVar16 = *(RefCountImpl **)(param_1 + 0x80);
  pRVar18 = (RefCountImpl *)(param_1 + 0x70);
  if (param_1 == -0x78) {
    pRVar18 = pRVar19;
  }
  for (; pRVar16 != pRVar18; pRVar16 = *(RefCountImpl **)(pRVar16 + 0x10)) {
    if (pRVar16[0x30] == (RefCountImpl)0x0) {
      *(undefined4 *)(pRVar16 + 0x2c) =
           *(undefined4 *)(*(longlong *)(*(longlong *)(pRVar16 + 0x20) + 0x70) + 0x104);
      uVar8 = (**(code **)(**(longlong **)(pRVar16 + 0x20) + 0x28))();
      *(undefined4 *)(pRVar16 + 0x28) = uVar8;
    }
    if (cVar5 != '\0') {
      (**(code **)(**(longlong **)(pRVar16 + 0x38) + 0x18))();
    }
  }
  iVar9 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x28))();
  if (iVar9 != 0) {
    if (((cVar5 != '\0') || ((*(uint *)(param_1 + 0x52f4) >> 1 & 1) != 0)) &&
       (*(longlong *)(param_1 + 0x68) != 0)) {
      do {
        plVar12 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 8 + (longlong)pRVar19 * 0x10);
        (**(code **)(*plVar12 + 0x280))(plVar12,cVar5);
        pRVar19 = (RefCountImpl *)(ulonglong)((int)pRVar19 + 1);
      } while (pRVar19 < *(RefCountImpl **)(param_1 + 0x68));
    }
    iVar9 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x380))();
    if (iVar9 != 0) {
      if (((*(uint *)(param_1 + 0x52f0) >> 8 & 1) != 0) &&
         (iVar9 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x380))(), iVar9 != 0)) {
        *(uint *)(param_1 + 0x52f0) = *(uint *)(param_1 + 0x52f0) & 0xfffffeff;
        uVar15 = *(uint *)(param_1 + 0x68);
        uVar17 = (ulonglong)uVar15;
        while (uVar15 != 0) {
          uVar15 = (int)uVar17 - 1;
          uVar17 = (ulonglong)uVar15;
          (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x60) + 8 + uVar17 * 0x10) + 0x388))
                    ();
        }
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))();
        FUN_1432e64b0(param_1);
        FUN_1432e4120();
      }
      fVar21 = fVar20 * 1e+06;
      lVar13 = 0;
      if ((9.223372e+18 <= fVar21) && (fVar21 = fVar21 - 9.223372e+18, fVar21 < 9.223372e+18)) {
        lVar13 = -0x8000000000000000;
      }
      *(float *)(param_1 + 0x270) = fVar20 + *(float *)(param_1 + 0x270);
      *(longlong *)(param_1 + 0x268) = *(longlong *)(param_1 + 0x268) + (longlong)fVar21 + lVar13;
      lVar13 = Scaleform::Timer::GetRawTicks();
      local_res8 = (RefCountImpl *)CONCAT44(local_res8._4_4_,*(undefined4 *)(param_1 + 0x274));
      FUN_1432ea7f0(param_1,&local_res8);
      FUN_1432e9580(param_1);
      if (*(float *)(param_1 + 0x270) < *(float *)(param_1 + 0x274)) {
        FUN_1432e61e0(param_1,0,*(float *)(param_1 + 0x270) / *(float *)(param_1 + 0x274));
        fVar20 = _guard_xfg_dispatch_icall_nop
                           (*(float *)(param_1 + 0x270),*(float *)(param_1 + 0x274));
        *(float *)(param_1 + 0x270) = fVar20;
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))();
        FUN_1432e64b0(param_1);
        FUN_1432e4120(param_1);
        uVar14 = 0;
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))();
        if ((param_3 == 0) && (*(int *)(param_1 + 0x278) == 0)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        do {
          fVar20 = *(float *)(param_1 + 0x274);
          if (bVar3) {
            fVar21 = *(float *)(param_1 + 0x270) - fVar20;
          }
          else {
            fVar21 = _guard_xfg_dispatch_icall_nop(*(float *)(param_1 + 0x270),fVar20);
          }
          *(float *)(param_1 + 0x270) = fVar21;
          if (fVar21 < fVar20) {
            fVar21 = fVar21 / fVar20;
          }
          else {
            fVar21 = 0.0;
          }
          FUN_1432e61e0(param_1,1,fVar21);
          (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))();
          FUN_1432e64b0(param_1);
          FUN_1432e4120(param_1);
          if (*(int *)(param_1 + 0x278) != 0) {
            *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + -1;
          }
          iVar9 = param_3 + -1;
        } while (((param_3 != 0) &&
                 (param_3 = iVar9, *(float *)(param_1 + 0x274) <= *(float *)(param_1 + 0x270))) ||
                (param_3 = iVar9, *(int *)(param_1 + 0x278) != 0));
        *(uint *)(param_1 + 0x52f0) = *(uint *)(param_1 + 0x52f0) | 0x80;
        uVar14 = 1;
      }
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(*(longlong **)(param_1 + 0x18),uVar14);
      FUN_1432e3d00(param_1);
      FUN_1432eb310(param_1);
      *(uint *)(param_1 + 0x52f0) = *(uint *)(param_1 + 0x52f0) & 0xfffffffd;
      lVar11 = Scaleform::Timer::GetRawTicks();
      dVar2 = (double)(lVar11 - lVar13);
      if (lVar11 - lVar13 < 0) {
        dVar2 = dVar2 + 1.8446744073709552e+19;
      }
      lVar13 = Scaleform::Timer::GetRawFrequency();
      dVar1 = (double)lVar13;
      if (lVar13 < 0) {
        dVar1 = dVar1 + 1.8446744073709552e+19;
      }
      fVar20 = local_res8._0_4_ - (float)(dVar2 / dVar1);
      if (fVar20 < 0.0) {
        fVar20 = 0.0;
      }
      if (param_4 != '\0') {
        FUN_1432e5bf0(param_1,1);
      }
      fVar21 = *(float *)(param_1 + 0x274) - *(float *)(param_1 + 0x270);
      if (fVar21 <= fVar20) {
        fVar20 = fVar21;
      }
      goto LAB_1432e5889;
    }
    if (param_4 != '\0') {
      FUN_1432e5bf0(param_1,1);
    }
    *(uint *)(param_1 + 0x52f0) = *(uint *)(param_1 + 0x52f0) & 0xfffffffd;
  }
  fVar20 = 0.0;
LAB_1432e5889:
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
  }
  if (pRVar10 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(pRVar10);
  }
  return fVar20;
}



// FUNCTION 1432e5bf0 FUN_1432e5bf0 body=1503 status=ok
// SIG undefined FUN_1432e5bf0(void)

undefined8 FUN_1432e5bf0(longlong param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  Matrix2x4<float> *pMVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float local_1e8;
  float fStack_1e4;
  undefined4 uStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  float local_188;
  undefined8 local_184;
  undefined8 uStack_17c;
  float local_174;
  undefined4 local_170;
  undefined4 local_16c;
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
  longlong lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  uVar3 = FUN_1432ce8e0(param_1 + 0x5350);
  if (((param_2 == '\0') || (cVar2 = FUN_1432cdfa0(param_1 + 0x5350), cVar2 != '\0')) ||
     (*(longlong *)(param_1 + 0x5338) != 0)) {
    lVar9 = *(longlong *)(param_1 + 0x54a8);
    if (lVar9 != 0) {
      lVar10 = 0;
      do {
        lVar1 = *(longlong *)(param_1 + 0x54a0);
        lVar4 = FUN_14336b350(*(undefined8 *)(lVar10 + 8 + lVar1));
        if (*(longlong *)(lVar4 + 0x10) == 0) {
          bVar11 = false;
LAB_1432e5d12:
          lVar5 = *(longlong *)(lVar10 + lVar1);
          iVar8 = 0;
          if (lVar5 != 0) {
            do {
              if (lVar5 == *(longlong *)(param_1 + 0x90)) break;
              if ((*(longlong *)(lVar5 + 0x10) != 0) &&
                 ((*(uint *)(*(longlong *)(lVar5 + 0x10) + 0x18) & 0x80040181) != 0)) {
                bVar11 = true;
                break;
              }
              lVar5 = *(longlong *)(lVar5 + 0x30);
              iVar8 = iVar8 + 1;
            } while (lVar5 != 0);
          }
          if (iVar8 == *(int *)(lVar10 + 0x18 + lVar1)) {
            if (bVar11) goto LAB_1432e5d6c;
            lVar5 = *(longlong *)(lVar4 + 0x30);
            bVar11 = false;
            if (lVar5 != 0) {
              do {
                if (lVar5 == *(longlong *)(param_1 + 0x90)) break;
                if ((*(longlong *)(lVar5 + 0x10) != 0) &&
                   ((*(uint *)(*(longlong *)(lVar5 + 0x10) + 0x18) & 0x80040181) != 0))
                goto LAB_1432e5d60;
                lVar5 = *(longlong *)(lVar5 + 0x30);
              } while (lVar5 != 0);
            }
          }
          else {
            *(int *)(lVar10 + 0x18 + lVar1) = iVar8;
LAB_1432e5d60:
            bVar11 = true;
          }
          if (bVar11) goto LAB_1432e5d6c;
        }
        else {
          bVar11 = (*(uint *)(*(longlong *)(lVar4 + 0x10) + 0x18) & 0x80040181) != 0;
          if (!bVar11) goto LAB_1432e5d12;
LAB_1432e5d6c:
          puVar7 = *(undefined8 **)(*(longlong *)(lVar10 + 8 + lVar1) + 0x60);
          local_1b8 = *puVar7;
          uStack_1b0 = puVar7[1];
          local_1a8 = puVar7[2];
          uStack_1a0 = puVar7[3];
          local_198 = puVar7[4];
          uStack_190 = puVar7[5];
          cVar2 = *(char *)(puVar7 + 6);
          for (lVar1 = *(longlong *)(lVar10 + lVar1);
              (lVar1 != 0 && (lVar1 != *(longlong *)(param_1 + 0x90)));
              lVar1 = *(longlong *)(lVar1 + 0x30)) {
            lVar5 = FUN_1432cd1e0(lVar1);
            if ((*(ushort *)(lVar5 + 10) >> 9 & 1) == 0) {
              uVar3 = FUN_1432cd1e0(lVar1);
              pMVar6 = (Matrix2x4<float> *)FUN_1433620e0(uVar3);
              local_128 = local_1b8;
              uStack_120 = uStack_1b0;
              local_108 = local_198;
              uStack_100 = uStack_190;
              local_118 = local_1a8;
              uStack_110 = uStack_1a0;
              Scaleform::Render::Matrix3x4<float>::MultiplyMatrix
                        ((Matrix3x4<float> *)&local_1b8,pMVar6,(Matrix3x4<float> *)&local_128);
            }
            else {
              lVar5 = FUN_1432cd1e0(lVar1);
              local_158 = local_1b8;
              uStack_150 = uStack_1b0;
              local_138 = local_198;
              uStack_130 = uStack_190;
              local_148 = local_1a8;
              uStack_140 = uStack_1a0;
              Scaleform::Render::Matrix3x4<float>::MultiplyMatrix
                        ((Matrix3x4<float> *)&local_1b8,(Matrix3x4<float> *)(lVar5 + 0x10),
                         (Matrix3x4<float> *)&local_158);
              cVar2 = '\x01';
            }
          }
          lVar1 = *(longlong *)(lVar4 + 0x30);
          fStack_1e4 = 0.0;
          local_1d8 = 0.0;
          local_1e8 = 1.0;
          fStack_1d4 = 1.0;
          uStack_1c0 = 0x3f800000;
          uStack_1e0 = 0;
          fStack_1dc = 0.0;
          uStack_1d0 = 0;
          local_1c8 = 0;
          uVar3 = uStack_1d0;
          for (; (uStack_1d0 = uVar3, lVar1 != 0 && (lVar1 != *(longlong *)(param_1 + 0x90)));
              lVar1 = *(longlong *)(lVar1 + 0x30)) {
            lVar5 = FUN_1432cd1e0(lVar1);
            if ((*(ushort *)(lVar5 + 10) >> 9 & 1) == 0) {
              uVar3 = FUN_1432cd1e0(lVar1);
              pMVar6 = (Matrix2x4<float> *)FUN_1433620e0(uVar3);
              local_c8 = CONCAT44(fStack_1e4,local_1e8);
              uStack_c0 = CONCAT44(fStack_1dc,uStack_1e0);
              local_b8 = CONCAT44(fStack_1d4,local_1d8);
              local_a8 = local_1c8;
              uStack_a0 = uStack_1c0;
              uStack_b0 = uStack_1d0;
              Scaleform::Render::Matrix3x4<float>::MultiplyMatrix
                        ((Matrix3x4<float> *)&local_1e8,pMVar6,(Matrix3x4<float> *)&local_c8);
            }
            else {
              lVar5 = FUN_1432cd1e0(lVar1);
              local_f8 = CONCAT44(fStack_1e4,local_1e8);
              uStack_f0 = CONCAT44(fStack_1dc,uStack_1e0);
              local_e8 = CONCAT44(fStack_1d4,local_1d8);
              local_d8 = local_1c8;
              uStack_d0 = uStack_1c0;
              uStack_e0 = uStack_1d0;
              Scaleform::Render::Matrix3x4<float>::MultiplyMatrix
                        ((Matrix3x4<float> *)&local_1e8,(Matrix3x4<float> *)(lVar5 + 0x10),
                         (Matrix3x4<float> *)&local_f8);
              cVar2 = '\x01';
            }
            uVar3 = uStack_1d0;
          }
          if (cVar2 == '\0') {
            uStack_1d0._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
            local_184 = CONCAT44(uStack_1e0,fStack_1e4);
            uStack_17c = CONCAT44(local_1d8,fStack_1dc);
            uStack_1d0._0_4_ = (undefined4)uVar3;
            local_170 = (undefined4)uStack_1d0;
            local_16c = uStack_1d0._4_4_;
            local_188 = local_1e8;
            local_174 = fStack_1d4;
            Scaleform::Render::Matrix2x4<float>::SetInverse
                      ((Matrix2x4<float> *)&local_1e8,(Matrix2x4<float> *)&local_188);
            uStack_1e0 = 0;
            fVar13 = local_1b8._4_4_ * local_1d8;
            fVar12 = local_1b8._4_4_ * local_1e8;
            fStack_1dc = fStack_1dc + uStack_1b0._4_4_ * local_1e8 + uStack_1a0._4_4_ * fStack_1e4;
            uStack_1d0 = (ulonglong)
                         (uint)((float)((ulonglong)uStack_1d0 >> 0x20) +
                               uStack_1b0._4_4_ * local_1d8 + uStack_1a0._4_4_ * fStack_1d4) << 0x20
            ;
            local_1e8 = (float)local_1b8 * local_1e8 + fStack_1e4 * (float)local_1a8;
            fStack_1e4 = fVar12 + local_1a8._4_4_ * fStack_1e4;
            local_1d8 = (float)local_1b8 * local_1d8 + (float)local_1a8 * fStack_1d4;
            fStack_1d4 = fVar13 + local_1a8._4_4_ * fStack_1d4;
            FUN_1433625b0(lVar4);
          }
          else {
            puVar7 = (undefined8 *)FUN_1432f0a30((Matrix2x4<float> *)&local_1e8,&local_188);
            local_98 = *puVar7;
            uStack_90 = puVar7[1];
            local_1e8 = (float)local_98;
            fStack_1e4 = (float)((ulonglong)local_98 >> 0x20);
            uStack_1e0 = (undefined4)uStack_90;
            fStack_1dc = (float)((ulonglong)uStack_90 >> 0x20);
            local_88 = puVar7[2];
            uStack_1d0 = puVar7[3];
            local_1d8 = (float)local_88;
            fStack_1d4 = (float)((ulonglong)local_88 >> 0x20);
            local_1c8 = puVar7[4];
            uStack_1c0 = puVar7[5];
            lStack_80 = uStack_1d0;
            local_78 = local_1c8;
            uStack_70 = uStack_1c0;
            Scaleform::Render::Matrix3x4<float>::MultiplyMatrix
                      ((Matrix3x4<float> *)&local_1e8,(Matrix3x4<float> *)&local_98,
                       (Matrix3x4<float> *)&local_1b8);
            FUN_143362630(lVar4);
          }
        }
        lVar10 = lVar10 + 0x20;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    if (((*(uint *)(param_1 + 0x52f0) >> 10 & 1) == 0) &&
       (cVar2 = FUN_1432cdfa0(param_1 + 0x5350), cVar2 == '\0')) {
      *(uint *)(param_1 + 0x52f0) = *(uint *)(param_1 + 0x52f0) & 0xfffffbff;
    }
    else {
      *(uint *)(param_1 + 0x52f0) = *(uint *)(param_1 + 0x52f0) | 0x400;
    }
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x58))(*(longlong **)(param_1 + 0x18),1);
    uVar3 = FUN_1432cdfe0(param_1 + 0x5350);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x58))(*(longlong **)(param_1 + 0x18),0);
    *(undefined1 *)(param_1 + 0x5468) = 1;
  }
  else {
    if (*(char *)(param_1 + 0x5468) < '\x01') {
      return uVar3;
    }
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x58))(*(longlong **)(param_1 + 0x18),1);
    uVar3 = FUN_1432cdfe0(param_1 + 0x5350);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x58))(*(longlong **)(param_1 + 0x18),0);
    *(char *)(param_1 + 0x5468) = *(char *)(param_1 + 0x5468) + -1;
  }
  return uVar3;
}



// FUNCTION 1432e61e0 FUN_1432e61e0 body=710 status=ok
// SIG undefined FUN_1432e61e0(void)

void FUN_1432e61e0(longlong param_1,char param_2,undefined4 param_3)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  byte bVar6;
  
  if (param_2 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0xe0))();
  }
  if ((*(uint *)(param_1 + 0x52f0) >> 0x13 & 1) == 0) {
    plVar5 = *(longlong **)(param_1 + 0x52e0);
    while (plVar1 = plVar5, plVar1 != (longlong *)0x0) {
      plVar5 = (longlong *)plVar1[0x14];
      bVar6 = (byte)*(undefined2 *)((longlong)plVar1 + 0x6a);
      if (((bVar6 >> 4 & 1) == 0) && (uVar3 = *(uint *)(plVar1 + 0x17), (uVar3 >> 0x15 & 1) != 0)) {
        if ((uVar3 >> 0x16 & 1) == 0) {
          if (((~(bVar6 >> 6) & 1) != 0) &&
             (((param_2 != '\0' || ((uVar3 >> 0x14 & 1) != 0)) &&
              ((*(byte *)(plVar1 + 0x11) >> 5 & 1) == 0)))) {
            (**(code **)(*plVar1 + 0x240))(plVar1,param_2,param_3);
          }
        }
        else {
          FUN_14336ebe0();
        }
      }
    }
    *(uint *)(param_1 + 0x52f4) = *(uint *)(param_1 + 0x52f4) & 0xfffffffd;
    return;
  }
  plVar5 = *(longlong **)(param_1 + 0x52d8);
  *(undefined8 *)(param_1 + 0x52e0) = 0;
  *(uint *)(param_1 + 0x52f0) = *(uint *)(param_1 + 0x52f0) & 0xfff7ffff;
  bVar6 = ~(byte)(*(uint *)(param_1 + 0x52f4) >> 3) & 1;
  if (bVar6 == 0) {
    *(uint *)(param_1 + 0x52f4) = *(uint *)(param_1 + 0x52f4) & 0xfffffff7;
  }
  else {
    *(uint *)(param_1 + 0x52f4) = *(uint *)(param_1 + 0x52f4) | 8;
  }
  if (plVar5 == (longlong *)0x0) {
    *(uint *)(param_1 + 0x52f4) = *(uint *)(param_1 + 0x52f4) & 0xfffffffd;
  }
  else {
    do {
      plVar1 = (longlong *)plVar5[0x13];
      cVar2 = FUN_14336e270(plVar5,param_1);
      if (cVar2 == '\0') {
        *(uint *)(plVar5 + 0x17) = *(uint *)(plVar5 + 0x17) & 0xffdfffff;
        if (bVar6 == 0) {
          uVar3 = *(uint *)(plVar5 + 0x17) & 0xff7fffff;
        }
        else {
          uVar3 = *(uint *)(plVar5 + 0x17) | 0x800000;
        }
        *(uint *)(plVar5 + 0x17) = uVar3;
        plVar5[0x15] = 0;
        plVar5[0x14] = 0;
      }
      if (((~(*(byte *)((longlong)plVar5 + 0x6a) >> 6) & 1) != 0) &&
         ((*(byte *)(plVar5 + 0x11) >> 5 & 1) == 0)) {
        cVar2 = FUN_14336e270(plVar5,param_1);
        if ((cVar2 == '\0') && (iVar4 = (**(code **)(*plVar5 + 0x340))(plVar5,0), iVar4 == 1)) {
          FUN_14336e960(plVar5);
        }
        if ((param_2 != '\0') || ((*(uint *)(plVar5 + 0x17) >> 0x14 & 1) != 0)) {
          (**(code **)(*plVar5 + 0x240))(plVar5,param_2,param_3);
        }
      }
      plVar5 = plVar1;
    } while (plVar1 != (longlong *)0x0);
    *(uint *)(param_1 + 0x52f4) = *(uint *)(param_1 + 0x52f4) & 0xfffffffd;
  }
  return;
}



// FUNCTION 1432e64b0 FUN_1432e64b0 body=139 status=ok
// SIG undefined FUN_1432e64b0(void)

void FUN_1432e64b0(longlong param_1)

{
  RefCountNTSImpl *pRVar1;
  longlong *plVar2;
  RefCountNTSImpl *this;
  
  this = *(RefCountNTSImpl **)(param_1 + 0x52e8);
  if (this != (RefCountNTSImpl *)0x0) {
    do {
      pRVar1 = *(RefCountNTSImpl **)(this + 0xa0);
      *(undefined8 *)(this + 0xa0) = 0;
      (**(code **)(*(longlong *)this + 0x260))(this);
      plVar2 = *(longlong **)(this + 0x38);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x3b0))(plVar2,this);
      }
      Scaleform::RefCountNTSImpl::Release(this);
      this = pRVar1;
    } while (pRVar1 != (RefCountNTSImpl *)0x0);
    *(undefined8 *)(param_1 + 0x52e8) = 0;
  }
  return;
}



// FUNCTION 1432e6560 FUN_1432e6560 body=1653 status=ok
// SIG undefined FUN_1432e6560(void)

undefined8 FUN_1432e6560(longlong *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  int local_res8;
  int local_resc;
  Point<float> local_res18 [16];
  ulonglong in_stack_ffffffffffffffa8;
  undefined7 uVar10;
  ulonglong uVar9;
  uint7 uVar11;
  
  cVar3 = (**(code **)(*param_1 + 0x148))();
  if (cVar3 == '\0') {
    if (*param_2 != 8) {
      return 0;
    }
LAB_1432e6595:
    uVar7 = 0;
    lVar6 = 0;
    plVar8 = param_1 + 0x480;
    do {
      bVar1 = *(byte *)((longlong)param_2 + lVar6 + 8);
      if (bVar1 != 0) {
        plVar5 = (longlong *)0x0;
        if (uVar7 < 6) {
          plVar5 = plVar8;
        }
        FUN_14335f5d0(plVar5,0x90,bVar1 >> 4 & 1);
        FUN_14335f5d0(plVar5,0x14,*(byte *)((longlong)param_2 + lVar6 + 8) >> 3 & 1);
        FUN_14335f5d0(plVar5,0x91,*(byte *)((longlong)param_2 + lVar6 + 8) >> 5 & 1);
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 1;
      plVar8 = plVar8 + 0xd1;
    } while (uVar7 < 6);
    *(uint *)(param_1 + 0xa5e) = *(uint *)(param_1 + 0xa5e) | 0x40000;
    (**(code **)(*(longlong *)param_1[3] + 0xd8))((longlong *)param_1[3],1);
    return 1;
  }
  if (*param_2 == 8) goto LAB_1432e6595;
  if ((((*param_2 - 5U < 2) && (*(byte *)(param_2 + 5) < 6)) &&
      (plVar8 = param_1 + (ulonglong)*(byte *)(param_2 + 5) * 0xd1 + 0x480,
      plVar8 != (longlong *)0x0)) && (*(byte *)(param_2 + 1) != 0)) {
    FUN_14335f5d0(plVar8,0x90,*(byte *)(param_2 + 1) >> 4 & 1);
    FUN_14335f5d0(plVar8,0x14,*(byte *)(param_2 + 1) >> 3 & 1);
    FUN_14335f5d0(plVar8,0x91,*(byte *)(param_2 + 1) >> 5 & 1);
  }
  uVar10 = (undefined7)(in_stack_ffffffffffffffa8 >> 8);
  switch(*param_2) {
  case 1:
    uVar7 = param_2[6];
    if (uVar7 < *(uint *)(param_1 + 0x47e)) {
      local_res8 = param_2[2];
      local_resc = param_2[3];
      Scaleform::Render::Matrix2x4<float>::TransformByInverse
                ((Matrix2x4<float> *)(param_1 + 0x24),local_res18,(Point<float> *)&local_res8);
      FUN_14338a1f0(param_1 + 0x50,uVar7,local_res18);
      return 3;
    }
    break;
  case 2:
    uVar7 = param_2[6];
    if (*(uint *)(param_1 + 0x47e) <= uVar7) {
      return 0;
    }
    local_res8 = param_2[2];
    local_resc = param_2[3];
    Scaleform::Render::Matrix2x4<float>::TransformByInverse
              ((Matrix2x4<float> *)(param_1 + 0x24),local_res18,(Point<float> *)&local_res8);
    uVar4 = 0;
    goto LAB_1432e67b0;
  case 3:
    uVar7 = param_2[6];
    if (*(uint *)(param_1 + 0x47e) <= uVar7) {
      return 0;
    }
    local_res8 = param_2[2];
    local_resc = param_2[3];
    Scaleform::Render::Matrix2x4<float>::TransformByInverse
              ((Matrix2x4<float> *)(param_1 + 0x24),local_res18,(Point<float> *)&local_res8);
    uVar4 = 0x80;
LAB_1432e67b0:
    FUN_14338a230(param_1 + 0x50,uVar7,local_res18,1 << ((byte)param_2[5] & 0x1f),uVar4);
    return 3;
  case 4:
    uVar7 = param_2[6];
    if (uVar7 < *(uint *)(param_1 + 0x47e)) {
      local_res8 = param_2[2];
      local_resc = param_2[3];
      Scaleform::Render::Matrix2x4<float>::TransformByInverse
                ((Matrix2x4<float> *)(param_1 + 0x24),local_res18,(Point<float> *)&local_res8);
      FUN_14338a2b0(param_1 + 0x50,uVar7,local_res18,(int)(float)param_2[4]);
      return 3;
    }
    break;
  case 5:
    if ((*(byte *)(param_2 + 5) < 6) &&
       (plVar8 = param_1 + (ulonglong)*(byte *)(param_2 + 5) * 0xd1 + 0x480,
       plVar8 != (longlong *)0x0)) {
      uVar9 = CONCAT71(uVar10,1);
      FUN_14335f600(plVar8,param_2[2],(char)param_2[3],(char)param_2[1],uVar9);
      iVar2 = param_2[2];
      uVar11 = (uint7)(uVar9 >> 8);
      if (iVar2 == 0x10) {
        uVar9 = (ulonglong)uVar11 << 8;
        uVar4 = 0xa0;
        if ((*(byte *)(param_2 + 1) & 0x40) != 0) {
          uVar4 = 0xa1;
        }
      }
      else if (iVar2 == 0x11) {
        uVar9 = (ulonglong)uVar11 << 8;
        if ((*(byte *)(param_2 + 1) & 0x40) == 0) {
          uVar4 = 0xa2;
        }
        else {
          uVar4 = 0xa3;
        }
      }
      else {
        if (iVar2 != 0x12) goto LAB_1432e6957;
        uVar9 = uVar9 & 0xffffffffffffff00;
        if ((*(byte *)(param_2 + 1) & 0x40) == 0) {
          uVar4 = 0xa4;
        }
        else {
          uVar4 = 0xa5;
        }
      }
      FUN_14335f600(plVar8,uVar4,0,0x80,uVar9);
    }
LAB_1432e6957:
    Scaleform::GFx::InputEventsQueue::AddKeyEvent
              (param_1 + 0x50,param_2[2],(char)param_2[3],0,1,(char)param_2[1],(char)param_2[5]);
    uVar7 = param_2[4];
    if (uVar7 != 0xd) {
      if (uVar7 < 0x20) {
        return 3;
      }
      if (uVar7 == 0x7f) {
        return 3;
      }
    }
    Scaleform::GFx::InputEventsQueue::AddKeyEvent(param_1 + 0x50,0,0,uVar7,1,0x80,(char)param_2[5]);
    return 3;
  case 6:
    if ((*(byte *)(param_2 + 5) < 6) &&
       (plVar8 = param_1 + (ulonglong)*(byte *)(param_2 + 5) * 0xd1 + 0x480,
       plVar8 != (longlong *)0x0)) {
      in_stack_ffffffffffffffa8 = CONCAT71(uVar10,1);
      FUN_14335f670(plVar8,param_2[2],(char)param_2[3],(char)param_2[1],in_stack_ffffffffffffffa8);
      iVar2 = param_2[2];
      uVar11 = (uint7)(in_stack_ffffffffffffffa8 >> 8);
      if (iVar2 == 0x10) {
        in_stack_ffffffffffffffa8 = (ulonglong)uVar11 << 8;
        uVar4 = 0xa0;
        if ((*(byte *)(param_2 + 1) & 0x40) != 0) {
          uVar4 = 0xa1;
        }
      }
      else if (iVar2 == 0x11) {
        in_stack_ffffffffffffffa8 = (ulonglong)uVar11 << 8;
        if ((*(byte *)(param_2 + 1) & 0x40) == 0) {
          uVar4 = 0xa2;
        }
        else {
          uVar4 = 0xa3;
        }
      }
      else {
        if (iVar2 != 0x12) goto LAB_1432e6a88;
        in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffa8 & 0xffffffffffffff00;
        if ((*(byte *)(param_2 + 1) & 0x40) == 0) {
          uVar4 = 0xa4;
        }
        else {
          uVar4 = 0xa5;
        }
      }
      FUN_14335f670(plVar8,uVar4,0,0x80,in_stack_ffffffffffffffa8);
    }
LAB_1432e6a88:
    Scaleform::GFx::InputEventsQueue::AddKeyEvent
              (param_1 + 0x50,param_2[2],(char)param_2[3],0,
               in_stack_ffffffffffffffa8 & 0xffffffffffffff00,(char)param_2[1],(char)param_2[5]);
    return 3;
  case 9:
    FUN_1432e7d70(param_1,0);
    return 0;
  case 0x12:
    FUN_14338a390(param_1 + 0x50,param_2[2],param_2[4],param_2[5],(char)param_2[3]);
    return 3;
  case 0x1a:
    FUN_14338a3e0(param_1 + 0x50,param_2[2],*(undefined8 *)(param_2 + 4),
                  *(undefined8 *)(param_2 + 6),*(undefined8 *)(param_2 + 8),param_2[10]);
    return 3;
  case 0x1b:
    FUN_14338a440(param_1 + 0x50,param_2[2],*(undefined8 *)(param_2 + 4),
                  *(undefined8 *)(param_2 + 6),*(undefined8 *)(param_2 + 8),param_2[10],
                  *(undefined8 *)(param_2 + 0xc),*(undefined8 *)(param_2 + 0xe),
                  *(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x12));
    return 3;
  case 0x1c:
    Scaleform::GFx::InputEventsQueue::AddStatusEvent
              (param_1 + 0x50,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4),
               *(undefined8 *)(param_2 + 6),*(undefined8 *)(param_2 + 8));
    return 3;
  case 0x1d:
    Scaleform::GFx::InputEventsQueue::AddKeyEvent
              (param_1 + 0x50,0,0,param_2[2],CONCAT71(uVar10,1),0x80,(char)param_2[3]);
    return 3;
  }
  return 0;
}



// FUNCTION 1432e6c60 FUN_1432e6c60 body=241 status=ok
// SIG undefined FUN_1432e6c60(void)

void FUN_1432e6c60(longlong param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  Point<float> local_res8 [8];
  undefined4 uVar6;
  undefined4 local_38;
  undefined4 local_34;
  
  local_38 = param_2;
  local_34 = param_3;
  Scaleform::Render::Matrix2x4<float>::TransformByInverse
            ((Matrix2x4<float> *)(param_1 + 0x120),local_res8,(Point<float> *)&local_38);
  if (param_5 < *(uint *)(param_1 + 0x23f0)) {
    FUN_14338a1f0(param_1 + 0x280,param_5,local_res8);
    uVar1 = *(uint *)(param_1 + 0x2240 + (ulonglong)param_5 * 0x50);
    uVar3 = 1;
    lVar4 = 0x10;
    do {
      uVar2 = uVar3 & param_4;
      if ((uVar2 == 0) || ((uVar1 & uVar3) != 0)) {
        uVar5 = uVar3 & uVar1;
        if ((uVar5 != 0) && (uVar2 == 0)) {
          uVar6 = 0x80;
          goto LAB_1432e6d1a;
        }
      }
      else {
        uVar6 = 0;
        uVar5 = uVar2;
LAB_1432e6d1a:
        FUN_14338a230(param_1 + 0x280,(ulonglong)param_5,local_res8,uVar5,uVar6);
      }
      uVar3 = uVar3 * 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 1432e6d60 FUN_1432e6d60 body=613 status=ok
// SIG undefined FUN_1432e6d60(void)

undefined8
FUN_1432e6d60(longlong param_1,float param_2,float param_3,int param_4,undefined4 param_5)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float local_res8;
  float local_resc;
  float local_78;
  float local_74;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined1 local_34;
  
  local_res8 = param_2;
  local_resc = param_3;
  Scaleform::Render::Matrix2x4<float>::TransformByInverse
            ((Matrix2x4<float> *)(param_1 + 0x120),(Point<float> *)&local_78,
             (Point<float> *)&local_res8);
  fVar9 = (local_74 - *(float *)(param_1 + 0xec) * 20.0) /
          (*(float *)(param_1 + 0x10c) - *(float *)(param_1 + 0x104));
  fVar8 = (local_78 - *(float *)(param_1 + 0xe8) * 20.0) /
          (*(float *)(param_1 + 0x108) - *(float *)(param_1 + 0x100));
  *(float *)(param_1 + 0x144) = -((fVar9 + fVar9) - 1.0);
  *(float *)(param_1 + 0x140) = (fVar8 + fVar8) - 1.0;
  uVar6 = *(uint *)(param_1 + 0x68);
  do {
    while( true ) {
      do {
        if (uVar6 == 0) {
          return 0;
        }
        uVar6 = uVar6 - 1;
        local_58 = 0x3f800000;
        uStack_54 = 0;
        uStack_50 = 0;
        uStack_4c = 0;
        local_48 = 0x3f80000000000000;
        uStack_40 = 0;
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 8 + (ulonglong)uVar6 * 0x10);
        (**(code **)(*plVar5 + 0x1f0))(plVar5,&local_68,&local_58);
        FUN_14336b000(plVar5,&local_res8,&local_78,0,0);
      } while (((((local_60 < local_res8) || (local_res8 < local_68)) || (local_5c < local_resc)) ||
               (local_resc < local_64)) &&
              (cVar3 = (**(code **)(*plVar5 + 0x70))(plVar5), cVar3 == '\0'));
      if (param_4 != 0) break;
      uVar7 = 0;
LAB_1432e6f8b:
      cVar3 = (**(code **)(*plVar5 + 0x200))(plVar5,&local_res8,uVar7);
      if (cVar3 != '\0') {
        return 1;
      }
    }
    if (param_4 == 1) {
      uVar7 = 1;
      goto LAB_1432e6f8b;
    }
    if (param_4 == 2) {
      local_34 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_38 = param_5;
      if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x20) == '\x01') {
        iVar4 = (**(code **)(*plVar5 + 0x208))();
        if (iVar4 == 1) {
          return 1;
        }
      }
      else {
        local_34 = 1;
        iVar4 = (**(code **)(*plVar5 + 0x208))(plVar5,&local_res8,&local_58);
        if (iVar4 == 1) {
          for (lVar2 = CONCAT44(uStack_54,local_58); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x38)
              ) {
            bVar1 = *(byte *)(lVar2 + 0x6d);
            if (bVar1 != 0) {
              plVar5 = (longlong *)
                       (**(code **)(*(longlong *)(lVar2 + (ulonglong)bVar1 * 4) + 8))
                                 (lVar2 + (ulonglong)bVar1 * 4);
              cVar3 = (**(code **)(*plVar5 + 0x60))(plVar5);
              if (cVar3 != '\0') {
                return 1;
              }
            }
          }
        }
      }
    }
    else if (param_4 == 3) {
      uVar7 = 3;
      goto LAB_1432e6f8b;
    }
  } while( true );
}



// FUNCTION 1432e6fd0 FUN_1432e6fd0 body=146 status=ok
// SIG undefined FUN_1432e6fd0(void)

undefined4 FUN_1432e6fd0(longlong param_1,RefCountImpl *param_2)

{
  undefined8 *puVar1;
  
  *(int *)(param_1 + 0x4ca8) = *(int *)(param_1 + 0x4ca8) + 1;
  (**(code **)(*(longlong *)param_2 + 0x38))(param_2,*(undefined4 *)(param_1 + 0x4ca8));
  Scaleform::RefCountImpl::AddRef(param_2);
  FUN_1432f29e0(param_1 + 0x4c90,param_1 + 0x4c90,*(longlong *)(param_1 + 0x4c98) + 1);
  puVar1 = (undefined8 *)
           (*(longlong *)(param_1 + 0x4c90) + (*(longlong *)(param_1 + 0x4c98) + -1) * 8);
  if (puVar1 != (undefined8 *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
    *puVar1 = param_2;
  }
  Scaleform::RefCountImpl::Release(param_2);
  return *(undefined4 *)(param_1 + 0x4ca8);
}



// FUNCTION 1432e7070 FUN_1432e7070 body=122 status=ok
// SIG undefined FUN_1432e7070(void)

void FUN_1432e7070(longlong param_1,int param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar1 = *(ulonglong *)(param_1 + 0x4c98);
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x4c90) + uVar4 * 8);
      if ((plVar2 != (longlong *)0x0) && (iVar3 = (**(code **)(*plVar2 + 0x40))(), iVar3 == param_2)
         ) {
        (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x4c90) + uVar4 * 8) + 0x20))();
        return;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return;
}


