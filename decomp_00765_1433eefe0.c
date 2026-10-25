// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1433eefe0 FUN_1433eefe0 body=360 status=ok
// SIG undefined FUN_1433eefe0(void)

undefined8 FUN_1433eefe0(longlong *param_1,int param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar5 = *param_1;
  bVar3 = (char)param_2 << 4;
  uVar4 = *(ulonglong *)(lVar5 + 8) >> 0xc;
  uVar2 = (undefined1)(param_2 >> 4);
  if (param_2 + 0x800U < 0x1000) {
    if (*(ulonglong *)(lVar5 + 0x10) <= uVar4) {
      FUN_1433ef150(lVar5,uVar4);
    }
    *(byte *)((ulonglong)(*(uint *)(lVar5 + 8) & 0xfff) +
             *(longlong *)(*(longlong *)(lVar5 + 0x20) + uVar4 * 8)) = bVar3 | 2;
    *(longlong *)(lVar5 + 8) = *(longlong *)(lVar5 + 8) + 1;
    lVar5 = *param_1;
    uVar4 = *(ulonglong *)(lVar5 + 8) >> 0xc;
    if (*(ulonglong *)(lVar5 + 0x10) <= uVar4) {
      FUN_1433ef150(lVar5,uVar4);
    }
    *(undefined1 *)
     ((ulonglong)(*(uint *)(lVar5 + 8) & 0xfff) +
     *(longlong *)(*(longlong *)(lVar5 + 0x20) + uVar4 * 8)) = uVar2;
    uVar1 = 2;
  }
  else {
    if (*(ulonglong *)(lVar5 + 0x10) <= uVar4) {
      FUN_1433ef150(lVar5,uVar4);
    }
    *(byte *)((ulonglong)(*(uint *)(lVar5 + 8) & 0xfff) +
             *(longlong *)(*(longlong *)(lVar5 + 0x20) + uVar4 * 8)) = bVar3 | 3;
    *(longlong *)(lVar5 + 8) = *(longlong *)(lVar5 + 8) + 1;
    lVar5 = *param_1;
    uVar4 = *(ulonglong *)(lVar5 + 8) >> 0xc;
    if (*(ulonglong *)(lVar5 + 0x10) <= uVar4) {
      FUN_1433ef150(lVar5,uVar4);
    }
    *(undefined1 *)
     ((ulonglong)(*(uint *)(lVar5 + 8) & 0xfff) +
     *(longlong *)(*(longlong *)(lVar5 + 0x20) + uVar4 * 8)) = uVar2;
    *(longlong *)(lVar5 + 8) = *(longlong *)(lVar5 + 8) + 1;
    lVar5 = *param_1;
    uVar4 = *(ulonglong *)(lVar5 + 8) >> 0xc;
    if (*(ulonglong *)(lVar5 + 0x10) <= uVar4) {
      FUN_1433ef150(lVar5,uVar4);
    }
    *(char *)((ulonglong)(*(uint *)(lVar5 + 8) & 0xfff) +
             *(longlong *)(*(longlong *)(lVar5 + 0x20) + uVar4 * 8)) = (char)(param_2 >> 0xc);
    uVar1 = 3;
  }
  *(longlong *)(lVar5 + 8) = *(longlong *)(lVar5 + 8) + 1;
  return uVar1;
}



// FUNCTION 1433ef150 FUN_1433ef150 body=155 status=ok
// SIG undefined FUN_1433ef150(void)

void FUN_1433ef150(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  undefined4 local_res8 [2];
  
  if (*(ulonglong *)(param_1 + 0x18) <= param_2) {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      local_res8[0] = 0x105;
      uVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x800,local_res8);
    }
    else {
      uVar1 = (**(code **)(*DAT_146b62f28 + 0x58))
                        (DAT_146b62f28,*(longlong *)(param_1 + 0x20),
                         *(ulonglong *)(param_1 + 0x18) * 8 + 0x800);
    }
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 0x100;
    *(undefined8 *)(param_1 + 0x20) = uVar1;
  }
  local_res8[0] = 0x105;
  uVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x1000,local_res8);
  *(undefined8 *)(*(longlong *)(param_1 + 0x20) + param_2 * 8) = uVar1;
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
  return;
}



// FUNCTION 1433ef1f0 FUN_1433ef1f0 body=144 status=ok
// SIG undefined FUN_1433ef1f0(void)

void FUN_1433ef1f0(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  undefined4 local_res8 [2];
  
  if (*(ulonglong *)(param_1 + 0x18) <= param_2) {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      local_res8[0] = 0x105;
      uVar1 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x200,local_res8);
    }
    else {
      uVar1 = (**(code **)(*DAT_146b62f28 + 0x58))
                        (DAT_146b62f28,*(longlong *)(param_1 + 0x20),
                         *(ulonglong *)(param_1 + 0x18) * 8 + 0x200);
    }
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 0x40;
    *(undefined8 *)(param_1 + 0x20) = uVar1;
  }
  local_res8[0] = 0x105;
  uVar1 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x200,local_res8);
  *(undefined8 *)(*(longlong *)(param_1 + 0x20) + param_2 * 8) = uVar1;
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
  return;
}



// FUNCTION 1433ef280 FUN_1433ef280 body=144 status=ok
// SIG undefined FUN_1433ef280(void)

void FUN_1433ef280(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  undefined4 local_res8 [2];
  
  if (*(ulonglong *)(param_1 + 0x18) <= param_2) {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      local_res8[0] = 0x105;
      uVar1 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x200,local_res8);
    }
    else {
      uVar1 = (**(code **)(*DAT_146b62f28 + 0x58))
                        (DAT_146b62f28,*(longlong *)(param_1 + 0x20),
                         *(ulonglong *)(param_1 + 0x18) * 8 + 0x200);
    }
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 0x40;
    *(undefined8 *)(param_1 + 0x20) = uVar1;
  }
  local_res8[0] = 0x105;
  uVar1 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x100,local_res8);
  *(undefined8 *)(*(longlong *)(param_1 + 0x20) + param_2 * 8) = uVar1;
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
  return;
}



// FUNCTION 1433ef330 FUN_1433ef330 body=331 status=ok
// SIG undefined FUN_1433ef330(void)

void FUN_1433ef330(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_1432ba7a0();
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
                (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,lVar3 * 0x18 + 0x10,local_res18);
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
        uVar2 = Scaleform::FixedSizeHash<unsigned_short>::operator()(local_res18,lVar4 + 0x20);
        FUN_1433ed0c0(&local_res20,param_2,lVar4 + 0x20,uVar2);
        *(undefined8 *)(lVar4 + 0x10) = 0xfffffffffffffffe;
      }
      lVar5 = lVar5 + 0x18;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    if (*param_1 != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 1433ef480 FUN_1433ef480 body=298 status=ok
// SIG undefined FUN_1433ef480(void)

void FUN_1433ef480(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_1432e0080();
    return;
  }
  if (param_3 < 8) {
    lVar4 = 8;
  }
  else {
    cVar2 = FUN_14207c6a0(param_3 - 1);
    lVar4 = 1L << (cVar2 + 1U & 0x3f);
  }
  local_res18[0] = 0x105;
  lVar3 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,lVar4 * 0x20 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar4 + -1;
  lVar1 = lVar3;
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined8 *)(lVar1 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar1 = lVar1 + 0x20;
  }
  if (*param_1 != 0) {
    lVar4 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar1 = *param_1;
      if (*(longlong *)(lVar1 + 0x10 + lVar3) != -2) {
        lVar5 = lVar1 + 0x20 + lVar3;
        FUN_1433ed220(&local_res20,param_2,lVar5,*(undefined4 *)(lVar5 + 8));
        *(undefined8 *)(lVar1 + 0x10 + lVar3) = 0xfffffffffffffffe;
      }
      lVar3 = lVar3 + 0x20;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    if (*param_1 != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 1433ef5b0 FUN_1433ef5b0 body=42 status=ok
// SIG undefined FUN_1433ef5b0(void)

undefined8 * FUN_1433ef5b0(undefined8 *param_1)

{
  *param_1 = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 1,0,0x200);
  return param_1;
}



// FUNCTION 1433ef600 FUN_1433ef600 body=144 status=ok
// SIG undefined FUN_1433ef600(void)

void FUN_1433ef600(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = (ulonglong)((uint)param_2[1] & 0xf);
  uVar3 = (ulonglong)((uint)*param_2 & 0xf);
  uVar1 = (uVar4 << 4 | uVar3) - 1;
  uVar5 = 0x3f;
  if (uVar1 < 0x3f) {
    uVar5 = uVar1;
  }
  uVar1 = param_1[uVar5 + 1];
  if (uVar1 != 0) {
    *param_2 = uVar3 | uVar1;
    param_2[1] = *(ulonglong *)(uVar1 + 8) & 0xfffffffffffffff0 | uVar4;
    puVar2 = (ulonglong *)(*(ulonglong *)(uVar1 + 8) & 0xfffffffffffffff0);
    *puVar2 = *puVar2 & 0xf;
    *puVar2 = *puVar2 | (ulonglong)param_2;
    *(ulonglong *)(uVar1 + 8) = *(ulonglong *)(uVar1 + 8) & 0xf;
    *(ulonglong *)(uVar1 + 8) = *(ulonglong *)(uVar1 + 8) | (ulonglong)param_2;
    param_1[uVar5 + 1] = (ulonglong)param_2;
    *param_1 = *param_1 | 1L << (uVar5 & 0x3f);
    return;
  }
  *param_2 = uVar3 | (ulonglong)param_2;
  param_2[1] = uVar4 | (ulonglong)param_2;
  param_1[uVar5 + 1] = (ulonglong)param_2;
  *param_1 = *param_1 | 1L << (uVar5 & 0x3f);
  return;
}



// FUNCTION 1433ef6a0 FUN_1433ef6a0 body=46 status=ok
// SIG undefined FUN_1433ef6a0(void)

void FUN_1433ef6a0(undefined8 param_1,uint *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = ((ulonglong)(param_2[2] & 0xf) << 4 | (ulonglong)(*param_2 & 0xf)) - 1;
  uVar1 = 0x3f;
  if (uVar2 < 0x3f) {
    uVar1 = uVar2;
  }
  FUN_1433efb80(param_1,uVar1,param_2);
  return;
}



// FUNCTION 1433ef6e0 FUN_1433ef6e0 body=97 status=ok
// SIG undefined FUN_1433ef6e0(void)

ulonglong FUN_1433ef6e0(ulonglong *param_1,longlong param_2)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0x3f;
  if (param_2 - 1U < 0x3f) {
    uVar3 = param_2 - 1U;
  }
  uVar2 = *param_1 >> ((byte)uVar3 & 0x3f);
  if (uVar2 != 0) {
    bVar1 = Scaleform::Alg::LowerBit(uVar2);
    uVar2 = param_1[bVar1 + uVar3 + 1];
    FUN_1433efb80(param_1,bVar1 + uVar3,uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1433ef750 FUN_1433ef750 body=353 status=ok
// SIG undefined FUN_1433ef750(void)

ulonglong * FUN_1433ef750(ulonglong *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  
  uVar6 = 0x3f;
  if (param_2 - 1U < 0x3f) {
    uVar6 = param_2 - 1U;
  }
  uVar3 = *param_1 >> ((byte)uVar6 & 0x3f);
  if (uVar3 != 0) {
    bVar2 = Scaleform::Alg::LowerBit(uVar3);
    uVar6 = bVar2 + uVar6;
    puVar5 = param_1 + uVar6 + 1;
    do {
      puVar1 = (ulonglong *)*puVar5;
      if (puVar1 != (ulonglong *)0x0) {
        puVar4 = puVar1;
        do {
          uVar3 = puVar4[1];
          if ((ulonglong *)(((longlong)puVar4 + param_3 & ~param_3) + param_2 * 0x10) <=
              puVar4 + ((ulonglong)((uint)uVar3 & 0xf) << 4 | (ulonglong)((uint)*puVar4 & 0xf)) * 2)
          {
            puVar5 = (ulonglong *)param_1[uVar6 + 1];
            if (puVar4 == puVar5) {
              if (puVar5 == (ulonglong *)(puVar5[1] & 0xfffffffffffffff0)) {
                param_1[uVar6 + 1] = 0;
                *param_1 = *param_1 & ~(1L << (uVar6 & 0x3f));
                return puVar4;
              }
              param_1[uVar6 + 1] = puVar5[1] & 0xfffffffffffffff0;
              uVar6 = *puVar4 & 0xfffffffffffffff0;
              uVar3 = (ulonglong)(((uint)puVar4[1] ^ *(uint *)(uVar6 + 8)) & 0xf) ^ puVar4[1];
            }
            else {
              uVar6 = *puVar4 & 0xfffffffffffffff0;
              uVar3 = ((uint)uVar3 ^ *(uint *)(uVar6 + 8)) & 0xf ^ uVar3;
            }
            *(ulonglong *)(uVar6 + 8) = uVar3;
            *(ulonglong *)(puVar4[1] & 0xfffffffffffffff0) =
                 (ulonglong)
                 (((uint)*puVar4 ^ (uint)*(ulonglong *)(puVar4[1] & 0xfffffffffffffff0)) & 0xf) ^
                 *puVar4;
            return puVar4;
          }
          puVar4 = (ulonglong *)(uVar3 & 0xfffffffffffffff0);
        } while (puVar4 != puVar1);
      }
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar6 < 0x40);
  }
  return (ulonglong *)0x0;
}



// FUNCTION 1433ef8c0 FUN_1433ef8c0 body=495 status=ok
// SIG undefined FUN_1433ef8c0(void)

void FUN_1433ef8c0(ulonglong *param_1,ulonglong *param_2,ulonglong param_3,char param_4,char param_5
                  ,ulonglong param_6)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = param_3 >> 4;
  *param_2 = *param_2 ^ (ulonglong)(((uint)*param_2 ^ (uint)uVar6) & 0xf);
  param_2[uVar6 * 2 + -2] = *param_2;
  uVar2 = param_2[1] & 0xfffffffffffffff0 | param_3 >> 8;
  param_2[1] = uVar2;
  param_2[uVar6 * 2 + -1] = uVar2;
  puVar4 = param_2;
  if (param_4 != '\0') {
    puVar4 = param_2 + ((ulonglong)((uint)param_2[-1] & 0xf) << 4 |
                       (ulonglong)((uint)param_2[-2] & 0xf)) * -2;
    uVar2 = (ulonglong)((uint)puVar4[1] & 0xf) << 4 | (ulonglong)((uint)*puVar4 & 0xf);
    uVar6 = uVar6 + uVar2;
    uVar2 = uVar2 - 1;
    uVar3 = 0x3f;
    if (uVar2 < 0x3f) {
      uVar3 = uVar2;
    }
    FUN_1433efb80(param_1,uVar3,puVar4);
  }
  puVar1 = puVar4 + 1;
  if (param_5 != '\0') {
    uVar2 = (ulonglong)
            ((uint)(param_2 +
                   ((ulonglong)((uint)param_2[1] & 0xf) << 4 | (ulonglong)((uint)*param_2 & 0xf)) *
                   2)[1] & 0xf) << 4 |
            (ulonglong)
            ((uint)param_2[((ulonglong)((uint)param_2[1] & 0xf) << 4 |
                           (ulonglong)((uint)*param_2 & 0xf)) * 2] & 0xf);
    uVar6 = uVar6 + uVar2;
    uVar2 = uVar2 - 1;
    uVar3 = 0x3f;
    if (uVar2 < 0x3f) {
      uVar3 = uVar2;
    }
    FUN_1433efb80(param_1,uVar3);
  }
  *puVar4 = *puVar4 ^ (ulonglong)(((uint)*puVar4 ^ (uint)uVar6) & 0xf);
  puVar4[uVar6 * 2 + -2] = *puVar4;
  uVar2 = uVar6 >> 4 | *puVar1 & 0xfffffffffffffff0;
  *puVar1 = uVar2;
  puVar4[uVar6 * 2 + -1] = uVar2;
  uVar3 = (ulonglong)((uint)*puVar1 & 0xf);
  uVar2 = (ulonglong)((uint)*puVar4 & 0xf);
  if (2 < (uVar3 << 4 | uVar2)) {
    puVar4[2] = param_6;
  }
  uVar5 = 0x3f;
  if (uVar6 - 1 < 0x3f) {
    uVar5 = uVar6 - 1;
  }
  uVar6 = param_1[uVar5 + 1];
  if (uVar6 == 0) {
    *puVar4 = uVar2 | (ulonglong)puVar4;
    *puVar1 = uVar3 | (ulonglong)puVar4;
  }
  else {
    *puVar4 = uVar2 | uVar6;
    *puVar1 = *(ulonglong *)(uVar6 + 8) & 0xfffffffffffffff0 | uVar3;
    puVar1 = (ulonglong *)(*(ulonglong *)(uVar6 + 8) & 0xfffffffffffffff0);
    *puVar1 = *puVar1 & 0xf;
    *puVar1 = *puVar1 | (ulonglong)puVar4;
    *(ulonglong *)(uVar6 + 8) = *(ulonglong *)(uVar6 + 8) & 0xf;
    *(ulonglong *)(uVar6 + 8) = *(ulonglong *)(uVar6 + 8) | (ulonglong)puVar4;
  }
  param_1[uVar5 + 1] = (ulonglong)puVar4;
  *param_1 = *param_1 | 1L << (uVar5 & 0x3f);
  return;
}



// FUNCTION 1433efac0 GetAlignedPtr body=11 status=ok
// SIG undefined GetAlignedPtr(void)

ulonglong Scaleform::HeapMH::ListBinMH::GetAlignedPtr(longlong param_1,ulonglong param_2)

{
  return param_1 + param_2 & ~param_2;
}



// FUNCTION 1433efb20 FUN_1433efb20 body=96 status=ok
// SIG undefined FUN_1433efb20(void)

uint * FUN_1433efb20(undefined8 param_1,uint *param_2,longlong param_3,ulonglong param_4)

{
  uint *puVar1;
  
  if (param_2 != (uint *)0x0) {
    puVar1 = param_2;
    do {
      if ((uint *)(((longlong)puVar1 + param_4 & ~param_4) + param_3 * 0x10) <=
          puVar1 + ((ulonglong)((uint)*(ulonglong *)(puVar1 + 2) & 0xf) << 4 |
                   (ulonglong)(*puVar1 & 0xf)) * 4) {
        return puVar1;
      }
      puVar1 = (uint *)(*(ulonglong *)(puVar1 + 2) & 0xfffffffffffffff0);
    } while (puVar1 != param_2);
  }
  return (uint *)0x0;
}



// FUNCTION 1433efb80 FUN_1433efb80 body=114 status=ok
// SIG undefined FUN_1433efb80(void)

void FUN_1433efb80(ulonglong *param_1,ulonglong param_2,ulonglong *param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  ulonglong uVar3;
  
  puVar1 = (ulonglong *)param_1[param_2 + 1];
  if (param_3 == puVar1) {
    if (puVar1 == (ulonglong *)(puVar1[1] & 0xfffffffffffffff0)) {
      param_1[param_2 + 1] = 0;
      *param_1 = *param_1 & ~(1L << (param_2 & 0x3f));
      return;
    }
    param_1[param_2 + 1] = puVar1[1] & 0xfffffffffffffff0;
    uVar3 = *param_3 & 0xfffffffffffffff0;
    uVar2 = *(uint *)(uVar3 + 8) ^ (uint)param_3[1];
  }
  else {
    uVar3 = *param_3 & 0xfffffffffffffff0;
    uVar2 = (uint)param_3[1] ^ *(uint *)(uVar3 + 8);
  }
  *(ulonglong *)(uVar3 + 8) = (ulonglong)(uVar2 & 0xf) ^ param_3[1];
  *(ulonglong *)(param_3[1] & 0xfffffffffffffff0) =
       (ulonglong)(((uint)*(ulonglong *)(param_3[1] & 0xfffffffffffffff0) ^ (uint)*param_3) & 0xf) ^
       *param_3;
  return;
}



// FUNCTION 1433efc00 FUN_1433efc00 body=221 status=ok
// SIG undefined FUN_1433efc00(void)

undefined8 * FUN_1433efc00(undefined8 *param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 2) = 0x100000;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0x100000;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x8f] = param_1 + 0xf;
  param_1[0xc] = param_2;
  param_1[0xd] = 0;
  param_1[0xe] = 0x400;
  param_1[0xb3] = param_1 + 0x93;
  param_1[0x90] = param_2;
  param_1[0x91] = 0;
  param_1[0x92] = 0x20;
  param_1[0xd7] = param_1 + 0xb7;
  param_1[0xb4] = param_2;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0x20;
  param_1[0xfb] = param_1 + 0xdb;
  param_1[0xd8] = param_2;
  param_1[0xd9] = 0;
  param_1[0xda] = 0x20;
  param_1[0xfc] = 0;
  *(undefined4 *)(param_1 + 0xfd) = 0x3f800000;
  return param_1;
}



// FUNCTION 1433efcf0 FUN_1433efcf0 body=97 status=ok
// SIG undefined FUN_1433efcf0(void)

void FUN_1433efcf0(undefined8 param_1,undefined2 param_2,undefined4 param_3,char param_4,
                  char param_5,char param_6)

{
  byte bVar1;
  undefined1 local_18;
  byte local_17;
  undefined2 local_16;
  undefined4 local_14;
  
  local_18 = 0;
  bVar1 = param_4 != '\0' | 2;
  if (param_5 == '\0') {
    bVar1 = param_4 != '\0';
  }
  local_17 = bVar1 | 4;
  if (param_6 == '\0') {
    local_17 = bVar1;
  }
  local_16 = param_2;
  local_14 = param_3;
  FUN_1433f0960(param_1,&local_18);
  return;
}



// FUNCTION 1433efd60 FUN_1433efd60 body=119 status=ok
// SIG undefined FUN_1433efd60(void)

void FUN_1433efd60(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 local_res10;
  undefined2 local_res18;
  undefined2 local_res1a;
  float local_res1c;
  
  local_res10 = param_2;
  while( true ) {
    uVar1 = FUN_143307250(&local_res10);
    if (uVar1 == 0) break;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x7e0) + 0x10))
                      (*(longlong **)(param_1 + 0x7e0),uVar1 & 0xffff);
    local_res1c = (float)(**(code **)(**(longlong **)(param_1 + 0x7e0) + 0x18))
                                   (*(longlong **)(param_1 + 0x7e0),uVar2);
    local_res18 = 0;
    local_res1c = local_res1c * *(float *)(param_1 + 0x7e8);
    local_res1a = (undefined2)uVar2;
    FUN_1433f0960(param_1,&local_res18);
  }
  return;
}



// FUNCTION 1433efde0 FUN_1433efde0 body=149 status=ok
// SIG undefined FUN_1433efde0(void)

void FUN_1433efde0(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong local_res10;
  undefined4 local_28 [2];
  longlong local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  uVar2 = 0;
  local_10 = param_5;
  local_c = param_6;
  local_28[0] = 8;
  local_res10 = param_2;
  local_20 = param_2;
  local_18 = param_3;
  local_14 = param_4;
  FUN_1433f0960(param_5,local_28);
  if (*(ulonglong *)(param_1 + 0x5a8) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x6b8);
    do {
      if (param_2 == *plVar1) {
        return;
      }
      uVar2 = uVar2 + 1;
      plVar1 = plVar1 + 1;
    } while (uVar2 < *(ulonglong *)(param_1 + 0x5a8));
  }
  FUN_1433f0700(param_1 + 0x5a0,&local_res10);
  return;
}



// FUNCTION 1433efe80 FUN_1433efe80 body=40 status=ok
// SIG undefined FUN_1433efe80(void)

void FUN_1433efe80(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_20 = *param_2;
  uStack_1c = param_2[1];
  uStack_18 = param_2[2];
  uStack_14 = param_2[3];
  local_28 = 5;
  local_24 = param_3;
  FUN_1433f0960(local_20,&local_28);
  return;
}



// FUNCTION 1433efeb0 FUN_1433efeb0 body=62 status=ok
// SIG undefined FUN_1433efeb0(void)

void FUN_1433efeb0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined2 param_5,undefined4 param_6)

{
  undefined2 local_28;
  undefined2 local_26;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_26 = param_5;
  local_18 = param_6;
  local_28 = 6;
  local_24 = param_2;
  local_20 = param_3;
  local_1c = param_4;
  FUN_1433f0960(param_1,&local_28);
  return;
}



// FUNCTION 1433eff00 FUN_1433eff00 body=40 status=ok
// SIG undefined FUN_1433eff00(void)

void FUN_1433eff00(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_20 = *param_2;
  uStack_1c = param_2[1];
  uStack_18 = param_2[2];
  uStack_14 = param_2[3];
  local_28 = 7;
  local_24 = param_3;
  FUN_1433f0960(local_20,&local_28);
  return;
}



// FUNCTION 1433eff30 FUN_1433eff30 body=110 status=ok
// SIG undefined FUN_1433eff30(void)

void FUN_1433eff30(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong local_res10 [3];
  undefined2 local_18 [4];
  longlong local_10;
  
  local_18[0] = 9;
  local_res10[0] = param_2;
  local_10 = param_2;
  FUN_1433f0960(param_1,local_18);
  uVar2 = 0;
  if (*(ulonglong *)(param_1 + 0x6c8) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x7d8);
    do {
      if (param_2 == *plVar1) {
        return;
      }
      uVar2 = uVar2 + 1;
      plVar1 = plVar1 + 1;
    } while (uVar2 < *(ulonglong *)(param_1 + 0x6c8));
  }
  FUN_1433f0700(param_1 + 0x6c0,local_res10);
  return;
}



// FUNCTION 1433effb0 FUN_1433effb0 body=31 status=ok
// SIG undefined FUN_1433effb0(void)

void FUN_1433effb0(undefined8 param_1,undefined4 param_2)

{
  undefined4 local_res18;
  undefined4 local_res1c;
  
  local_res18 = 1;
  local_res1c = param_2;
  FUN_1433f0960(param_1,&local_res18);
  return;
}



// FUNCTION 1433effe0 FUN_1433effe0 body=36 status=ok
// SIG undefined FUN_1433effe0(void)

void FUN_1433effe0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_18 = 2;
  local_14 = param_2;
  local_10 = param_3;
  FUN_1433f0960(param_1,&local_18);
  return;
}



// FUNCTION 1433f0010 FUN_1433f0010 body=167 status=ok
// SIG undefined FUN_1433f0010(void)

void FUN_1433f0010(longlong param_1,longlong *param_2,float param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  float fVar3;
  longlong *local_res10;
  undefined4 local_28;
  float local_24;
  longlong *local_20;
  
  local_28 = 4;
  uVar2 = 0;
  local_res10 = param_2;
  local_24 = param_3;
  local_20 = param_2;
  FUN_1433f0960(param_1,&local_28);
  *(longlong **)(param_1 + 0x7e0) = param_2;
  fVar3 = (float)(**(code **)(*param_2 + 0xb0))(param_2);
  *(float *)(param_1 + 0x7e8) = param_3 / fVar3;
  if (*(ulonglong *)(param_1 + 0x488) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x598);
    do {
      if (param_2 == (longlong *)*puVar1) {
        return;
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar2 < *(ulonglong *)(param_1 + 0x488));
  }
  FUN_1433f0700(param_1 + 0x480,&local_res10);
  return;
}



// FUNCTION 1433f00c0 FUN_1433f00c0 body=39 status=ok
// SIG undefined FUN_1433f00c0(void)

void FUN_1433f00c0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_18 = 3;
  local_14 = param_2;
  local_10 = param_3;
  FUN_1433f0960(param_1,&local_18);
  return;
}



// FUNCTION 1433f01a0 FUN_1433f01a0 body=171 status=ok
// SIG undefined FUN_1433f01a0(void)

undefined8 * FUN_1433f01a0(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145b069f8;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0x100000;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0x100000;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  FUN_1433f0380(param_1);
  return param_1;
}



// FUNCTION 1433f0260 FUN_1433f0260 body=54 status=ok
// SIG undefined FUN_1433f0260(void)

void FUN_1433f0260(RefCountImplCore *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_145b069f8;
  FUN_1433f02a0();
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x70));
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 1433f02a0 FUN_1433f02a0 body=211 status=ok
// SIG undefined FUN_1433f02a0(void)

void FUN_1433f02a0(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    do {
      Scaleform::RefCountImpl::Release
                (*(RefCountImpl **)(*(longlong *)(param_1 + 0x90) + uVar1 * 8));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ulonglong *)(param_1 + 0x98));
  }
  uVar1 = 0;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    do {
      (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xa0) + uVar1 * 8) + 0x10))();
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ulonglong *)(param_1 + 0xa8));
  }
  uVar1 = 0;
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    do {
      Scaleform::RefCountImpl::Release
                (*(RefCountImpl **)(*(longlong *)(param_1 + 0xb0) + uVar1 * 8));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ulonglong *)(param_1 + 0xb8));
  }
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     ((*(ulonglong *)(param_1 + 0x80) & 0xfffffffffffffffe) != 0)) {
    FUN_1433f0840(param_1 + 0x70,param_1 + 0x70,0);
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  return;
}



// FUNCTION 1433f0380 FUN_1433f0380 body=663 status=ok
// SIG undefined FUN_1433f0380(void)

void FUN_1433f0380(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar6 = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  uVar3 = *(undefined4 *)(param_2 + 8);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x4c);
  uVar2 = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  uVar1 = *(undefined4 *)(param_2 + 0xb);
  uVar3 = *(undefined4 *)(param_2 + 10);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x5c);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)((longlong)param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  uVar5 = param_2[1];
  *(undefined8 *)(param_1 + 0x10) = *param_2;
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  uVar5 = param_2[3];
  *(undefined8 *)(param_1 + 0x20) = param_2[2];
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 5);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 7);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  lVar4 = param_2[0xd];
  *(longlong *)(param_1 + 0x88) = lVar4;
  uVar7 = lVar4 + 7U & 0xfffffffffffffff8;
  FUN_1433f08e0(param_1 + 0x70,uVar7 + (param_2[0xd9] + param_2[0x91] + param_2[0xb5]) * 8);
  if (param_2[0x91] != 0) {
    *(ulonglong *)(param_1 + 0x90) = *(longlong *)(param_1 + 0x70) + uVar7;
    lVar4 = param_2[0x91];
    *(longlong *)(param_1 + 0x98) = lVar4;
    uVar7 = uVar7 + lVar4 * 8;
  }
  if (param_2[0xb5] != 0) {
    *(ulonglong *)(param_1 + 0xa0) = *(longlong *)(param_1 + 0x70) + uVar7;
    lVar4 = param_2[0xb5];
    *(longlong *)(param_1 + 0xa8) = lVar4;
    uVar7 = uVar7 + lVar4 * 8;
  }
  if (param_2[0xd9] != 0) {
    *(ulonglong *)(param_1 + 0xb0) = *(longlong *)(param_1 + 0x70) + uVar7;
    *(undefined8 *)(param_1 + 0xb8) = param_2[0xd9];
  }
  if (param_2[0xd] != 0) {
    _guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 0x70),(void *)param_2[0x8f],*(size_t *)(param_1 + 0x88));
  }
  if (*(void **)(param_1 + 0x90) != (void *)0x0) {
    _guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 0x90),(void *)param_2[0xb3],*(longlong *)(param_1 + 0x98) << 3);
  }
  if (*(void **)(param_1 + 0xa0) != (void *)0x0) {
    _guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 0xa0),(void *)param_2[0xd7],*(longlong *)(param_1 + 0xa8) << 3);
  }
  if (*(void **)(param_1 + 0xb0) != (void *)0x0) {
    _guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 0xb0),(void *)param_2[0xfb],*(longlong *)(param_1 + 0xb8) << 3);
  }
  uVar7 = uVar6;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    do {
      Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(*(longlong *)(param_1 + 0x90) + uVar7 * 8))
      ;
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(ulonglong *)(param_1 + 0x98));
  }
  uVar7 = uVar6;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    do {
      (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xa0) + uVar7 * 8) + 8))();
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(ulonglong *)(param_1 + 0xa8));
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    do {
      Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(*(longlong *)(param_1 + 0xb0) + uVar6 * 8))
      ;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(ulonglong *)(param_1 + 0xb8));
  }
  return;
}



// FUNCTION 1433f0620 FUN_1433f0620 body=93 status=ok
// SIG undefined FUN_1433f0620(void)

ulonglong FUN_1433f0620(longlong param_1,ulonglong param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  
  if (*(ulonglong *)(param_1 + 0x88) <= param_2) {
    return 0;
  }
  bVar1 = *(byte *)(param_2 + *(longlong *)(param_1 + 0x70));
  *param_3 = bVar1;
  iVar2 = *(int *)(&DAT_145b06a00 + (ulonglong)bVar1 * 4);
  while( true ) {
    iVar2 = iVar2 + -1;
    param_2 = param_2 + 1;
    if (iVar2 == 0) break;
    param_3 = param_3 + 1;
    *param_3 = *(byte *)(param_2 + *(longlong *)(param_1 + 0x70));
  }
  return param_2;
}



// FUNCTION 1433f0680 FUN_1433f0680 body=124 status=ok
// SIG undefined FUN_1433f0680(void)

RefCountImplCore * FUN_1433f0680(RefCountImplCore *param_1,ulonglong param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_145b069f8;
  FUN_1433f02a0();
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x70));
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 1433f0700 FUN_1433f0700 body=309 status=ok
// SIG undefined FUN_1433f0700(void)

void FUN_1433f0700(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  uVar1 = param_1[1];
  if (0x1f < uVar1) {
    uVar2 = param_1[2];
    if (uVar1 == 0x20) {
      plVar4 = (longlong *)*param_1;
      param_1[2] = uVar2 * 2;
      if (plVar4 == (longlong *)0x0) {
        plVar4 = (longlong *)
                 (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,uVar2 << 4,0);
      }
      else {
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x50))(plVar4,uVar2 << 4,0);
      }
      param_1[0x23] = (longlong)plVar4;
      lVar6 = 2;
      plVar5 = param_1 + 3;
      do {
        lVar3 = plVar5[1];
        *plVar4 = *plVar5;
        plVar4[1] = lVar3;
        lVar3 = plVar5[3];
        plVar4[2] = plVar5[2];
        plVar4[3] = lVar3;
        lVar3 = plVar5[5];
        plVar4[4] = plVar5[4];
        plVar4[5] = lVar3;
        lVar3 = plVar5[7];
        plVar4[6] = plVar5[6];
        plVar4[7] = lVar3;
        lVar3 = plVar5[9];
        plVar4[8] = plVar5[8];
        plVar4[9] = lVar3;
        lVar3 = plVar5[0xb];
        plVar4[10] = plVar5[10];
        plVar4[0xb] = lVar3;
        lVar3 = plVar5[0xd];
        plVar4[0xc] = plVar5[0xc];
        plVar4[0xd] = lVar3;
        lVar3 = plVar5[0xf];
        plVar4[0xe] = plVar5[0xe];
        plVar4[0xf] = lVar3;
        lVar6 = lVar6 + -1;
        plVar4 = plVar4 + 0x10;
        plVar5 = plVar5 + 0x10;
      } while (lVar6 != 0);
    }
    else if (uVar2 <= uVar1) {
      param_1[2] = uVar2 * 2;
      lVar6 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,param_1[0x23],uVar2 << 4);
      param_1[0x23] = lVar6;
    }
    *(longlong *)(param_1[0x23] + param_1[1] * 8) = *param_2;
    param_1[1] = param_1[1] + 1;
    return;
  }
  param_1[uVar1 + 3] = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}



// FUNCTION 1433f0840 FUN_1433f0840 body=160 status=ok
// SIG undefined FUN_1433f0840(void)

void FUN_1433f0840(longlong *param_1,undefined8 param_2,longlong param_3)

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
      local_res8[0] = 0x4a;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 1433f08e0 FUN_1433f08e0 body=114 status=ok
// SIG undefined FUN_1433f08e0(void)

void FUN_1433f08e0(longlong param_1,ulonglong param_2)

{
  if (param_2 < *(ulonglong *)(param_1 + 8)) {
    if (param_2 < *(ulonglong *)(param_1 + 0x10) >> 1) {
      FUN_1433f0840(param_1,param_1,param_2);
      *(ulonglong *)(param_1 + 8) = param_2;
      return;
    }
  }
  else if (*(ulonglong *)(param_1 + 0x10) < param_2) {
    FUN_1433f0840(param_1,param_1,(param_2 >> 2) + param_2);
    *(ulonglong *)(param_1 + 8) = param_2;
    return;
  }
  *(ulonglong *)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 1433f0960 FUN_1433f0960 body=325 status=ok
// SIG undefined FUN_1433f0960(void)

void FUN_1433f0960(longlong param_1,byte *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  
  iVar11 = *(int *)(&DAT_145b06a00 + (ulonglong)*param_2 * 4);
  if (iVar11 != 0) {
    plVar1 = (longlong *)(param_1 + 0x60);
    do {
      uVar2 = *(ulonglong *)(param_1 + 0x68);
      iVar11 = iVar11 + -1;
      if (uVar2 < 0x400) {
        *(byte *)(uVar2 + 0x18 + (longlong)plVar1) = *param_2;
      }
      else {
        if (uVar2 == 0x400) {
          plVar3 = (longlong *)*plVar1;
          lVar10 = *(longlong *)(param_1 + 0x70) * 2;
          *(longlong *)(param_1 + 0x70) = lVar10;
          if (plVar3 == (longlong *)0x0) {
            puVar7 = (undefined8 *)
                     (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,plVar1,lVar10,0);
          }
          else {
            puVar7 = (undefined8 *)(**(code **)(*plVar3 + 0x50))(plVar3,lVar10,0);
          }
          *(undefined8 **)(param_1 + 0x478) = puVar7;
          lVar10 = 8;
          puVar9 = (undefined8 *)(param_1 + 0x78);
          do {
            uVar8 = puVar9[1];
            *puVar7 = *puVar9;
            puVar7[1] = uVar8;
            uVar8 = puVar9[3];
            puVar7[2] = puVar9[2];
            puVar7[3] = uVar8;
            uVar8 = puVar9[5];
            puVar7[4] = puVar9[4];
            puVar7[5] = uVar8;
            uVar8 = puVar9[7];
            puVar7[6] = puVar9[6];
            puVar7[7] = uVar8;
            uVar8 = puVar9[9];
            puVar7[8] = puVar9[8];
            puVar7[9] = uVar8;
            uVar8 = puVar9[0xb];
            puVar7[10] = puVar9[10];
            puVar7[0xb] = uVar8;
            uVar4 = *(undefined4 *)((longlong)puVar9 + 100);
            uVar5 = *(undefined4 *)(puVar9 + 0xd);
            uVar6 = *(undefined4 *)((longlong)puVar9 + 0x6c);
            *(undefined4 *)(puVar7 + 0xc) = *(undefined4 *)(puVar9 + 0xc);
            *(undefined4 *)((longlong)puVar7 + 100) = uVar4;
            *(undefined4 *)(puVar7 + 0xd) = uVar5;
            *(undefined4 *)((longlong)puVar7 + 0x6c) = uVar6;
            uVar8 = puVar9[0xf];
            puVar7[0xe] = puVar9[0xe];
            puVar7[0xf] = uVar8;
            lVar10 = lVar10 + -1;
            puVar7 = puVar7 + 0x10;
            puVar9 = puVar9 + 0x10;
          } while (lVar10 != 0);
        }
        else if (*(ulonglong *)(param_1 + 0x70) <= uVar2) {
          *(ulonglong *)(param_1 + 0x70) = *(ulonglong *)(param_1 + 0x70) * 2;
          uVar8 = (**(code **)(*DAT_146b62f28 + 0x58))
                            (DAT_146b62f28,*(undefined8 *)(param_1 + 0x478));
          *(undefined8 *)(param_1 + 0x478) = uVar8;
        }
        *(byte *)(*(longlong *)(param_1 + 0x478) + *(longlong *)(param_1 + 0x68)) = *param_2;
      }
      *(longlong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) + 1;
      param_2 = param_2 + 1;
    } while (iVar11 != 0);
  }
  return;
}



// FUNCTION 1433f0b90 FUN_1433f0b90 body=310 status=ok
// SIG undefined FUN_1433f0b90(void)

undefined8 FUN_1433f0b90(int *param_1,int *param_2,ulonglong param_3)

{
  int iVar1;
  int local_res18;
  
  if (((param_3 & 7) != 0) && (((*(byte *)(param_2 + 3) ^ *(byte *)(param_1 + 3)) & 7) != 0)) {
    return 0;
  }
  if ((param_3 & 8) != 0) {
    if (((*(byte *)(param_1 + 3) ^ *(byte *)(param_2 + 3)) & 8) != 0) {
      return 0;
    }
    if ((*(byte *)(param_2 + 3) & 8) == 0) {
      local_res18 = 0;
      iVar1 = local_res18;
    }
    else {
      iVar1 = *param_2;
    }
    if ((*(byte *)(param_1 + 3) & 8) == 0) {
      local_res18 = 0;
    }
    else {
      local_res18 = *param_1;
    }
    if (local_res18 != iVar1) {
      return 0;
    }
  }
  if ((param_3 & 0x10) != 0) {
    if (((*(byte *)(param_1 + 3) ^ *(byte *)(param_2 + 3)) & 0x10) != 0) {
      return 0;
    }
    if ((*(byte *)(param_2 + 3) & 0x10) == 0) {
      local_res18 = 0;
      iVar1 = local_res18;
    }
    else {
      iVar1 = param_2[1];
    }
    if ((*(byte *)(param_1 + 3) & 0x10) == 0) {
      local_res18 = 0;
    }
    else {
      local_res18 = param_1[1];
    }
    if (local_res18 != iVar1) {
      return 0;
    }
  }
  if ((param_3 & 0x20) == 0) {
    return 1;
  }
  if (((*(byte *)(param_1 + 3) ^ *(byte *)(param_2 + 3)) & 0x20) == 0) {
    if ((*(byte *)(param_2 + 3) & 0x20) == 0) {
      local_res18 = 0;
      iVar1 = local_res18;
    }
    else {
      iVar1 = param_2[2];
    }
    if ((*(byte *)(param_1 + 3) & 0x20) == 0) {
      local_res18 = 0;
    }
    else {
      local_res18 = param_1[2];
    }
    if (local_res18 == iVar1) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1433f0cd0 FUN_1433f0cd0 body=258 status=ok
// SIG undefined FUN_1433f0cd0(void)

void FUN_1433f0cd0(longlong *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  byte *pbVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  
  uVar2 = param_1[1];
  uVar7 = 0;
  uVar8 = 0;
  if (uVar2 < (ulonglong)param_1[2]) {
    bVar4 = 0;
    lVar9 = ((longlong *)*param_1)[1];
    uVar5 = uVar8;
    uVar6 = uVar8;
    if (lVar9 != 0) {
      pbVar3 = (byte *)(*(longlong *)*param_1 + 0x38);
      uVar8 = uVar7;
      uVar5 = uVar7;
      uVar6 = uVar7;
      do {
        if (((*(longlong *)(pbVar3 + -0x18) != 0) && (*(ulonglong *)(pbVar3 + -0x20) <= uVar2)) &&
           (uVar2 < *(longlong *)(pbVar3 + -0x18) + *(ulonglong *)(pbVar3 + -0x20))) {
          bVar1 = *pbVar3;
          if ((bVar1 & 7) != 0) {
            bVar4 = bVar4 & 0xf8 | bVar1 & 7;
          }
          if ((bVar1 & 8) != 0) {
            uVar8 = *(undefined4 *)(pbVar3 + -0xc);
            bVar4 = bVar4 | 8;
          }
          if ((bVar1 & 0x10) != 0) {
            uVar5 = *(undefined4 *)(pbVar3 + -8);
            bVar4 = bVar4 | 0x10;
          }
          if ((bVar1 & 0x20) != 0) {
            uVar6 = *(undefined4 *)(pbVar3 + -4);
            bVar4 = bVar4 | 0x20;
          }
        }
        pbVar3 = pbVar3 + 0x40;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    param_1[3] = -1;
    param_1[4] = 0;
    param_1[5] = -1;
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)((longlong)param_1 + 0x44) = uVar8;
    *(undefined4 *)(param_1 + 9) = uVar5;
    *(undefined4 *)((longlong)param_1 + 0x4c) = uVar6;
    *(byte *)(param_1 + 10) = bVar4;
    param_1[7] = 1;
    param_1[6] = uVar2;
    *(undefined4 *)(param_1 + 8) = 0;
    return;
  }
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[7] = 0;
  param_1[6] = uVar2;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 1433f0de0 FUN_1433f0de0 body=75 status=ok
// SIG undefined FUN_1433f0de0(void)

undefined8 *
FUN_1433f0de0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[3] = 0xffffffffffffffff;
  param_1[5] = 0xffffffffffffffff;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  FUN_1433f0cd0();
  return param_1;
}



// FUNCTION 1433f0e60 operator+= body=28 status=ok
// SIG undefined operator+=(void)

void Scaleform::Render::Text::HighlighterPosIterator::operator+=(longlong param_1,longlong param_2)

{
  if ((*(ulonglong *)(param_1 + 8) < *(ulonglong *)(param_1 + 0x10)) && (param_2 != 0)) {
    *(ulonglong *)(param_1 + 8) = *(ulonglong *)(param_1 + 8) + param_2;
    FUN_1433f0cd0();
    return;
  }
  return;
}



// FUNCTION 1433f0e90 FUN_1433f0e90 body=12 status=ok
// SIG undefined FUN_1433f0e90(void)

undefined8 FUN_1433f0e90(longlong param_1)

{
  return CONCAT71((int7)(*(ulonglong *)(param_1 + 0x10) >> 8),
                  *(ulonglong *)(param_1 + 0x10) <= *(ulonglong *)(param_1 + 8));
}



// FUNCTION 1433f0eb0 FUN_1433f0eb0 body=529 status=ok
// SIG undefined FUN_1433f0eb0(void)

void FUN_1433f0eb0(longlong *param_1)

{
  ulonglong uVar1;
  byte bVar2;
  byte *pbVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte bVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint local_res8;
  uint local_res10;
  uint local_res18;
  uint local_res20;
  longlong local_58;
  longlong local_50;
  
  uVar4 = 0;
  lVar12 = -1;
  lVar13 = -1;
  local_58 = -1;
  local_50 = -1;
  local_res20 = 0;
  local_res10 = 0;
  local_res18 = 0;
  bVar11 = 0;
  local_res8 = 0;
  uVar5 = uVar4;
  uVar7 = uVar4;
  uVar6 = uVar4;
  uVar8 = uVar4;
  uVar9 = uVar4;
  uVar16 = uVar4;
  do {
    uVar10 = 0xffffffffffffffff;
    lVar15 = ((undefined8 *)*param_1)[1];
    if (lVar15 != 0) {
      plVar14 = *(longlong **)*param_1;
      pbVar3 = (byte *)(plVar14 + 7);
      do {
        bVar2 = *pbVar3;
        if (((uint)bVar2 & *(uint *)(param_1 + 0xb)) == 0) {
          uVar6 = (ulonglong)local_res8;
        }
        else {
          lVar12 = *(longlong *)(pbVar3 + -0x18);
          uVar8 = param_1[1];
          uVar4 = uVar10;
          if (((lVar12 == 0) || (uVar6 = *(ulonglong *)(pbVar3 + -0x20), uVar8 < uVar6)) ||
             (uVar1 = uVar6 + lVar12, uVar1 <= uVar8)) {
LAB_1433f101d:
            uVar7 = (ulonglong)local_res10;
          }
          else if (uVar16 == 0) {
            local_58 = *plVar14;
            local_res20 = *(uint *)(pbVar3 + -0x10);
            local_res8 = *(uint *)(pbVar3 + -0xc);
            local_res18 = *(uint *)(pbVar3 + -8);
            uVar16 = *(ulonglong *)(pbVar3 + -0x30);
            local_50 = *(longlong *)(pbVar3 + -0x28);
            local_res10 = *(uint *)(pbVar3 + -4);
            uVar7 = (ulonglong)local_res10;
            uVar5 = lVar12 + (uVar6 - uVar8);
            uVar9 = uVar8;
            bVar11 = bVar2;
            if (uVar10 < uVar5 + uVar8) {
              uVar5 = uVar10 - uVar8;
              uVar4 = uVar5 + uVar8;
            }
          }
          else {
            if (((uint)bVar2 & *(uint *)(param_1 + 0xb)) == *(uint *)(param_1 + 0xb))
            goto LAB_1433f101d;
            if ((bVar2 & 7) != 0) {
              bVar11 = bVar11 & 0xf8 | bVar2 & 7;
            }
            if ((bVar2 & 8) != 0) {
              local_res8 = *(uint *)(pbVar3 + -0xc);
              bVar11 = bVar11 | 8;
            }
            if ((bVar2 & 0x10) != 0) {
              local_res18 = *(uint *)(pbVar3 + -8);
              bVar11 = bVar11 | 0x10;
            }
            if ((bVar2 & 0x20) != 0) {
              local_res10 = *(uint *)(pbVar3 + -4);
              bVar11 = bVar11 | 0x20;
            }
            uVar7 = (ulonglong)local_res10;
            uVar6 = uVar5 + uVar9;
            if (uVar1 < uVar5 + uVar9) {
              uVar6 = uVar1;
            }
            uVar5 = uVar6 - uVar9;
            uVar4 = uVar5 + uVar9;
          }
          uVar6 = (ulonglong)local_res8;
          uVar1 = *(ulonglong *)(pbVar3 + -0x20);
          uVar10 = uVar4;
          if (uVar8 < uVar1) {
            uVar10 = uVar1;
            if (uVar4 < uVar1) {
              uVar10 = uVar4;
            }
            if ((uVar16 != 0) && (uVar10 < uVar5 + uVar9)) {
              uVar5 = uVar10 - uVar9;
            }
          }
        }
        plVar14 = plVar14 + 8;
        pbVar3 = pbVar3 + 0x40;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      uVar4 = (ulonglong)local_res18;
      uVar8 = (ulonglong)local_res20;
      lVar12 = local_58;
      lVar13 = local_50;
    }
    param_1[3] = lVar12;
    param_1[4] = uVar16;
    param_1[5] = lVar13;
    param_1[6] = uVar9;
    param_1[7] = uVar5;
    *(int *)(param_1 + 8) = (int)uVar8;
    *(int *)((longlong)param_1 + 0x44) = (int)uVar6;
    *(int *)(param_1 + 9) = (int)uVar4;
    *(int *)((longlong)param_1 + 0x4c) = (int)uVar7;
    *(byte *)(param_1 + 10) = bVar11;
    param_1[1] = uVar10;
    if ((uVar16 != 0) || (uVar10 == 0xffffffffffffffff)) {
      return;
    }
  } while( true );
}



// FUNCTION 1433f10d0 FUN_1433f10d0 body=79 status=ok
// SIG undefined FUN_1433f10d0(void)

undefined8 *
FUN_1433f10d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[1] = param_3;
  param_1[3] = 0xffffffffffffffff;
  param_1[4] = 0;
  param_1[5] = 0xffffffffffffffff;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xb) = param_4;
  FUN_1433f0eb0();
  return param_1;
}



// FUNCTION 1433f1130 operator* body=74 status=ok
// SIG undefined operator*(void)

undefined8 *
Scaleform::Render::Text::HighlighterRangeIterator::operator*(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x18);
  param_2[1] = *(undefined8 *)(param_1 + 0x20);
  param_2[2] = *(undefined8 *)(param_1 + 0x28);
  param_2[3] = *(undefined8 *)(param_1 + 0x30);
  param_2[4] = *(undefined8 *)(param_1 + 0x38);
  *(undefined4 *)(param_2 + 5) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)((longlong)param_2 + 0x2c) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((longlong)param_2 + 0x34) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined1 *)(param_2 + 7) = *(undefined1 *)(param_1 + 0x50);
  return param_2;
}



// FUNCTION 1433f1180 FUN_1433f1180 body=25 status=ok
// SIG undefined FUN_1433f1180(void)

void FUN_1433f1180(longlong *param_1)

{
  ulonglong uVar1;
  byte bVar2;
  byte *pbVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte bVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uStackX_8;
  uint uStackX_10;
  uint uStackX_18;
  uint uStackX_20;
  longlong lStack_58;
  longlong lStack_50;
  
  if ((*(ulonglong *)(*param_1 + 8) <= (ulonglong)param_1[2]) || (param_1[7] == 0)) {
    return;
  }
  uVar4 = 0;
  lVar12 = -1;
  lVar13 = -1;
  lStack_58 = -1;
  lStack_50 = -1;
  uStackX_20 = 0;
  uStackX_10 = 0;
  uStackX_18 = 0;
  bVar11 = 0;
  uStackX_8 = 0;
  uVar5 = uVar4;
  uVar7 = uVar4;
  uVar6 = uVar4;
  uVar8 = uVar4;
  uVar9 = uVar4;
  uVar16 = uVar4;
  do {
    uVar10 = 0xffffffffffffffff;
    lVar15 = ((undefined8 *)*param_1)[1];
    if (lVar15 != 0) {
      plVar14 = *(longlong **)*param_1;
      pbVar3 = (byte *)(plVar14 + 7);
      do {
        bVar2 = *pbVar3;
        if (((uint)bVar2 & *(uint *)(param_1 + 0xb)) == 0) {
          uVar6 = (ulonglong)uStackX_8;
        }
        else {
          lVar12 = *(longlong *)(pbVar3 + -0x18);
          uVar8 = param_1[1];
          uVar4 = uVar10;
          if (((lVar12 == 0) || (uVar6 = *(ulonglong *)(pbVar3 + -0x20), uVar8 < uVar6)) ||
             (uVar1 = uVar6 + lVar12, uVar1 <= uVar8)) {
LAB_1433f101d:
            uVar7 = (ulonglong)uStackX_10;
          }
          else if (uVar16 == 0) {
            lStack_58 = *plVar14;
            uStackX_20 = *(uint *)(pbVar3 + -0x10);
            uStackX_8 = *(uint *)(pbVar3 + -0xc);
            uStackX_18 = *(uint *)(pbVar3 + -8);
            uVar16 = *(ulonglong *)(pbVar3 + -0x30);
            lStack_50 = *(longlong *)(pbVar3 + -0x28);
            uStackX_10 = *(uint *)(pbVar3 + -4);
            uVar7 = (ulonglong)uStackX_10;
            uVar5 = lVar12 + (uVar6 - uVar8);
            uVar9 = uVar8;
            bVar11 = bVar2;
            if (uVar10 < uVar5 + uVar8) {
              uVar5 = uVar10 - uVar8;
              uVar4 = uVar5 + uVar8;
            }
          }
          else {
            if (((uint)bVar2 & *(uint *)(param_1 + 0xb)) == *(uint *)(param_1 + 0xb))
            goto LAB_1433f101d;
            if ((bVar2 & 7) != 0) {
              bVar11 = bVar11 & 0xf8 | bVar2 & 7;
            }
            if ((bVar2 & 8) != 0) {
              uStackX_8 = *(uint *)(pbVar3 + -0xc);
              bVar11 = bVar11 | 8;
            }
            if ((bVar2 & 0x10) != 0) {
              uStackX_18 = *(uint *)(pbVar3 + -8);
              bVar11 = bVar11 | 0x10;
            }
            if ((bVar2 & 0x20) != 0) {
              uStackX_10 = *(uint *)(pbVar3 + -4);
              bVar11 = bVar11 | 0x20;
            }
            uVar7 = (ulonglong)uStackX_10;
            uVar6 = uVar5 + uVar9;
            if (uVar1 < uVar5 + uVar9) {
              uVar6 = uVar1;
            }
            uVar5 = uVar6 - uVar9;
            uVar4 = uVar5 + uVar9;
          }
          uVar6 = (ulonglong)uStackX_8;
          uVar1 = *(ulonglong *)(pbVar3 + -0x20);
          uVar10 = uVar4;
          if (uVar8 < uVar1) {
            uVar10 = uVar1;
            if (uVar4 < uVar1) {
              uVar10 = uVar4;
            }
            if ((uVar16 != 0) && (uVar10 < uVar5 + uVar9)) {
              uVar5 = uVar10 - uVar9;
            }
          }
        }
        plVar14 = plVar14 + 8;
        pbVar3 = pbVar3 + 0x40;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      uVar4 = (ulonglong)uStackX_18;
      uVar8 = (ulonglong)uStackX_20;
      lVar12 = lStack_58;
      lVar13 = lStack_50;
    }
    param_1[3] = lVar12;
    param_1[4] = uVar16;
    param_1[5] = lVar13;
    param_1[6] = uVar9;
    param_1[7] = uVar5;
    *(int *)(param_1 + 8) = (int)uVar8;
    *(int *)((longlong)param_1 + 0x44) = (int)uVar6;
    *(int *)(param_1 + 9) = (int)uVar4;
    *(int *)((longlong)param_1 + 0x4c) = (int)uVar7;
    *(byte *)(param_1 + 10) = bVar11;
    param_1[1] = uVar10;
    if ((uVar16 != 0) || (uVar10 == 0xffffffffffffffff)) {
      return;
    }
  } while( true );
}



// FUNCTION 1433f11a0 IsFinished body=26 status=ok
// SIG undefined IsFinished(void)

longlong Scaleform::Render::Text::HighlighterRangeIterator::IsFinished(longlong *param_1)

{
  uint7 uVar1;
  
  uVar1 = (uint7)((ulonglong)*param_1 >> 8);
  if (((ulonglong)param_1[2] < *(ulonglong *)(*param_1 + 8)) && (param_1[7] != 0)) {
    return (ulonglong)uVar1 << 8;
  }
  return CONCAT71(uVar1,1);
}



// FUNCTION 1433f11c0 Highlighter body=32 status=ok
// SIG undefined Highlighter(void)

undefined8 * Scaleform::Render::Text::Highlighter::Highlighter(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 1433f11f0 FUN_1433f11f0 body=272 status=ok
// SIG undefined FUN_1433f11f0(void)

longlong FUN_1433f11f0(longlong *param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = param_1[1];
  *(undefined2 *)(param_1 + 6) = 0;
  uVar7 = 0;
  do {
    *(int *)(param_1 + 3) = (int)param_1[3] + 1;
    iVar1 = (int)param_1[3];
    uVar8 = uVar7;
    if (0 < (longlong)uVar2) {
      uVar3 = uVar2;
      do {
        uVar5 = (longlong)uVar3 >> 1;
        if (*(int *)((uVar5 + uVar8) * 0x40 + 0x28 + *param_1) - iVar1 < 0) {
          uVar8 = uVar5 + uVar8 + 1;
          uVar5 = uVar3 + (-1 - uVar5);
        }
        uVar3 = uVar5;
      } while (0 < (longlong)uVar5);
    }
  } while (((uVar8 < uVar2) && (lVar4 = *param_1 + uVar8 * 0x40, *(int *)(lVar4 + 0x28) == iVar1))
          && (lVar4 != 0));
  *(int *)(param_2 + 0x28) = iVar1;
  if (0 < param_1[1]) {
    lVar4 = param_1[1];
    do {
      lVar6 = lVar4 >> 1;
      if (*(int *)((lVar6 + uVar7) * 0x40 + 0x28 + *param_1) - iVar1 < 0) {
        uVar7 = lVar6 + uVar7 + 1;
        lVar6 = lVar4 + (-1 - lVar6);
      }
      lVar4 = lVar6;
    } while (0 < lVar6);
  }
  FUN_1433f1bb0(param_1,uVar7,param_2);
  return uVar7 * 0x40 + *param_1;
}



// FUNCTION 1433f1310 FUN_1433f1310 body=177 status=ok
// SIG undefined FUN_1433f1310(void)

longlong FUN_1433f1310(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(undefined2 *)(param_1 + 6) = 0;
  iVar1 = *(int *)(param_2 + 0x28);
  lVar2 = Scaleform::Render::Text::Highlighter::GetHighlighterPtr(param_1,iVar1);
  if (lVar2 != 0) {
    return 0;
  }
  lVar2 = 0;
  if (0 < param_1[1]) {
    lVar4 = param_1[1];
    do {
      lVar3 = lVar4 >> 1;
      if (*(int *)((lVar3 + lVar2) * 0x40 + 0x28 + *param_1) - iVar1 < 0) {
        lVar2 = lVar3 + lVar2 + 1;
        lVar3 = lVar4 + (-1 - lVar3);
      }
      lVar4 = lVar3;
    } while (0 < lVar3);
  }
  FUN_1433f1bb0(param_1,lVar2,param_2);
  return lVar2 * 0x40 + *param_1;
}



// FUNCTION 1433f13d0 FUN_1433f13d0 body=239 status=ok
// SIG undefined FUN_1433f13d0(void)

undefined8 * FUN_1433f13d0(longlong *param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = 0;
  if (0 < param_1[1]) {
    lVar4 = param_1[1];
    do {
      lVar3 = lVar4 >> 1;
      if (*(int *)((lVar3 + uVar2) * 0x40 + 0x28 + *param_1) - param_3 < 0) {
        uVar2 = lVar3 + uVar2 + 1;
        lVar3 = lVar4 + (-1 - lVar3);
      }
      lVar4 = lVar3;
    } while (0 < lVar3);
  }
  if ((uVar2 < (ulonglong)param_1[1]) &&
     (puVar1 = (undefined8 *)(*param_1 + uVar2 * 0x40), *(int *)(puVar1 + 5) == param_3)) {
    *param_2 = *puVar1;
    param_2[1] = puVar1[1];
    param_2[2] = puVar1[2];
    param_2[3] = puVar1[3];
    param_2[4] = puVar1[4];
    *(undefined4 *)(param_2 + 5) = *(undefined4 *)(puVar1 + 5);
    *(undefined4 *)((longlong)param_2 + 0x2c) = *(undefined4 *)((longlong)puVar1 + 0x2c);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(puVar1 + 6);
    *(undefined4 *)((longlong)param_2 + 0x34) = *(undefined4 *)((longlong)puVar1 + 0x34);
    *(undefined1 *)(param_2 + 7) = *(undefined1 *)(puVar1 + 7);
    return param_2;
  }
  param_2[1] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *param_2 = 0xffffffffffffffff;
  param_2[2] = 0xffffffffffffffff;
  param_2[6] = 0;
  *(undefined1 *)(param_2 + 7) = 0;
  return param_2;
}



// FUNCTION 1433f14d0 GetHighlighterPtr body=115 status=ok
// SIG undefined GetHighlighterPtr(void)

longlong Scaleform::Render::Text::Highlighter::GetHighlighterPtr(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (0 < param_1[1]) {
    lVar1 = param_1[1];
    do {
      lVar2 = lVar1 >> 1;
      if (*(int *)((lVar2 + uVar3) * 0x40 + 0x28 + *param_1) - param_2 < 0) {
        uVar3 = lVar2 + uVar3 + 1;
        lVar2 = lVar1 + (-1 - lVar2);
      }
      lVar1 = lVar2;
    } while (0 < lVar2);
  }
  if (((ulonglong)param_1[1] <= uVar3) ||
     (lVar1 = *param_1 + uVar3 * 0x40, *(int *)(lVar1 + 0x28) != param_2)) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 1433f1550 FUN_1433f1550 body=80 status=ok
// SIG undefined FUN_1433f1550(void)

undefined1 FUN_1433f1550(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  
  lVar1 = Scaleform::Render::Text::Highlighter::GetHighlighterPtr();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x2c) = *param_3;
    *(undefined4 *)(lVar1 + 0x30) = param_3[1];
    *(undefined4 *)(lVar1 + 0x34) = param_3[2];
    *(undefined1 *)(lVar1 + 0x38) = *(undefined1 *)(param_3 + 3);
    *(undefined2 *)(param_1 + 0x30) = 0;
    return 1;
  }
  return 0;
}



// FUNCTION 1433f15b0 FUN_1433f15b0 body=191 status=ok
// SIG undefined FUN_1433f15b0(void)

undefined8 FUN_1433f15b0(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  void *_Dst;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = param_1[1];
  uVar4 = 0;
  if (0 < (longlong)uVar1) {
    uVar3 = uVar1;
    do {
      uVar2 = (longlong)uVar3 >> 1;
      if (*(int *)((uVar2 + uVar4) * 0x40 + 0x28 + *param_1) - param_2 < 0) {
        uVar4 = uVar2 + uVar4 + 1;
        uVar2 = uVar3 + (-1 - uVar2);
      }
      uVar3 = uVar2;
    } while (0 < (longlong)uVar2);
  }
  if ((uVar4 < uVar1) &&
     (_Dst = (void *)(uVar4 * 0x40 + *param_1), *(int *)((longlong)_Dst + 0x28) == param_2)) {
    if (uVar1 != 1) {
      memmove(_Dst,(void *)((longlong)_Dst + 0x40),(uVar1 - uVar4) * 0x40 - 0x40);
      param_1[1] = param_1[1] + -1;
      *(undefined2 *)(param_1 + 6) = 0;
      return 1;
    }
    FUN_1433f1dd0(param_1,0);
    *(undefined2 *)(param_1 + 6) = 0;
    return 1;
  }
  return 0;
}



// FUNCTION 1433f1680 FUN_1433f1680 body=78 status=ok
// SIG undefined FUN_1433f1680(void)

undefined8 *
FUN_1433f1680(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  *param_2 = param_1;
  param_2[1] = param_3;
  param_2[2] = param_4;
  param_2[4] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[3] = 0xffffffffffffffff;
  param_2[5] = 0xffffffffffffffff;
  param_2[9] = 0;
  *(undefined1 *)(param_2 + 10) = 0;
  FUN_1433f0cd0(param_2);
  return param_2;
}



// FUNCTION 1433f16e0 FUN_1433f16e0 body=82 status=ok
// SIG undefined FUN_1433f16e0(void)

undefined8 *
FUN_1433f16e0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  *param_2 = param_1;
  param_2[2] = 0;
  param_2[1] = param_3;
  param_2[3] = 0xffffffffffffffff;
  param_2[4] = 0;
  param_2[5] = 0xffffffffffffffff;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined1 *)(param_2 + 10) = 0;
  *(undefined4 *)(param_2 + 0xb) = param_4;
  FUN_1433f0eb0(param_2);
  return param_2;
}



// FUNCTION 1433f1740 FUN_1433f1740 body=146 status=ok
// SIG undefined FUN_1433f1740(void)

void FUN_1433f1740(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar7 = param_1[1];
  lVar8 = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  do {
    if (lVar7 == 0) {
      return;
    }
    lVar1 = *param_1;
    uVar2 = *(ulonglong *)(lVar8 + lVar1);
    lVar3 = *(longlong *)(lVar8 + 8 + lVar1);
    *(ulonglong *)(lVar8 + 0x18 + lVar1) = uVar2;
    *(longlong *)(lVar8 + 0x20 + lVar1) = lVar3;
    lVar4 = param_1[5];
    if (lVar4 != 0) {
      uVar5 = param_1[4];
      lVar6 = lVar4;
      if (lVar3 == 0) {
LAB_1433f17b3:
        if (uVar2 <= uVar5) goto LAB_1433f17c1;
      }
      else if (uVar2 <= uVar5) {
        if (lVar3 + uVar2 <= uVar5) goto LAB_1433f17b3;
        lVar6 = *(longlong *)(lVar8 + 0x10 + lVar1);
        if (lVar6 < 0) {
          *(longlong *)(lVar8 + 0x20 + lVar1) = lVar4 + lVar3;
          goto LAB_1433f17c1;
        }
      }
      *(ulonglong *)(lVar8 + 0x18 + lVar1) = lVar6 + uVar2;
    }
LAB_1433f17c1:
    lVar8 = lVar8 + 0x40;
    lVar7 = lVar7 + -1;
  } while( true );
}



// FUNCTION 1433f17e0 FUN_1433f17e0 body=69 status=ok
// SIG undefined FUN_1433f17e0(void)

bool FUN_1433f17e0(longlong *param_1)

{
  byte *pbVar1;
  ulonglong uVar2;
  
  if (*(char *)((longlong)param_1 + 0x31) == '\0') {
    uVar2 = 0;
    *(undefined1 *)((longlong)param_1 + 0x31) = 0xff;
    if (param_1[1] != 0) {
      pbVar1 = (byte *)(*param_1 + 0x38);
      while ((*pbVar1 & 7) == 0) {
        uVar2 = uVar2 + 1;
        pbVar1 = pbVar1 + 0x40;
        if ((ulonglong)param_1[1] <= uVar2) {
          return *(char *)((longlong)param_1 + 0x31) == '\x01';
        }
      }
      *(undefined1 *)((longlong)param_1 + 0x31) = 1;
    }
  }
  return *(char *)((longlong)param_1 + 0x31) == '\x01';
}



// FUNCTION 1433f1830 FUN_1433f1830 body=237 status=ok
// SIG undefined FUN_1433f1830(void)

void FUN_1433f1830(longlong *param_1,ulonglong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  bVar5 = false;
  uVar8 = param_2[1] + *param_2;
  lVar6 = param_1[1];
  if (lVar6 != 0) {
    lVar9 = 0;
    do {
      lVar2 = *param_1;
      uVar3 = *param_2;
      uVar4 = *(ulonglong *)(lVar9 + lVar2);
      uVar7 = *(longlong *)(lVar9 + 8 + lVar2) + uVar4;
      if (uVar3 < uVar4) {
LAB_1433f18a7:
        if (uVar4 < uVar8) {
          bVar5 = true;
          *(longlong *)(lVar9 + lVar2) = *(longlong *)(lVar9 + lVar2) - (uVar4 - uVar3);
          plVar1 = (longlong *)(lVar9 + 8 + lVar2);
          *plVar1 = *plVar1 + (uVar4 - uVar3);
          *(undefined8 *)(lVar9 + 0x18 + lVar2) = *(undefined8 *)(lVar9 + lVar2);
          *(undefined8 *)(lVar9 + 0x20 + lVar2) = *(undefined8 *)(lVar9 + 8 + lVar2);
          *(undefined2 *)(param_1 + 6) = 0;
          if (uVar7 <= uVar8) {
            plVar1 = (longlong *)(lVar9 + 8 + lVar2);
            *plVar1 = *plVar1 + (uVar8 - uVar7);
            *(undefined8 *)(lVar9 + 0x20 + lVar2) = *(undefined8 *)(lVar9 + 8 + lVar2);
          }
        }
      }
      else if (uVar7 < uVar3) {
        if (uVar3 < uVar4) goto LAB_1433f18a7;
      }
      else if (uVar7 < uVar8) {
        bVar5 = true;
        plVar1 = (longlong *)(lVar9 + 8 + lVar2);
        *plVar1 = *plVar1 + (uVar8 - uVar7);
        *(undefined8 *)(lVar9 + 0x20 + lVar2) = *(undefined8 *)(lVar9 + 8 + lVar2);
        *(undefined2 *)(param_1 + 6) = 0;
      }
      lVar9 = lVar9 + 0x40;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    if (bVar5) {
      return;
    }
  }
  FUN_1433f11f0(param_1,param_2);
  return;
}



// FUNCTION 1433f1930 FUN_1433f1930 body=459 status=ok
// SIG undefined FUN_1433f1930(void)

void FUN_1433f1930(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong *_Dst;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_58;
  longlong local_50;
  ulonglong local_48;
  ulonglong local_40;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  
  uVar9 = 0;
  uVar8 = param_2[1] + *param_2;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  uVar10 = uVar9;
  lVar3 = local_78;
  lVar4 = local_78;
  lVar5 = local_70;
  if (param_1[1] != 0) {
    do {
      uVar1 = *param_2;
      _Dst = (ulonglong *)(*param_1 + uVar9);
      uVar2 = *_Dst;
      uVar7 = _Dst[1] + uVar2;
      if (uVar2 < uVar1) {
        if (uVar1 < uVar7) {
          if (uVar7 <= uVar8) {
            _Dst[1] = _Dst[1] + (uVar1 - uVar7);
            goto LAB_1433f1a70;
          }
          _Dst[1] = uVar1 - uVar2;
          local_50 = uVar7 - uVar8;
          _Dst[4] = uVar1 - uVar2;
          local_48 = _Dst[2];
          local_30 = (undefined4)_Dst[5];
          local_2c = *(undefined4 *)((longlong)_Dst + 0x2c);
          local_28 = (undefined4)_Dst[6];
          local_24 = *(undefined4 *)((longlong)_Dst + 0x34);
          local_20 = (undefined1)_Dst[7];
          local_58 = uVar8;
          local_40 = uVar8;
          local_38 = local_50;
          FUN_1433f1c60(&local_78,&local_58);
          goto LAB_1433f1a78;
        }
        if (uVar1 <= uVar2) goto LAB_1433f1a10;
      }
      else {
LAB_1433f1a10:
        if (uVar2 < uVar8) {
          if (uVar8 < uVar7) {
            *_Dst = *_Dst + (uVar8 - uVar2);
            _Dst[1] = _Dst[1] - (uVar8 - uVar2);
            _Dst[3] = *_Dst;
LAB_1433f1a70:
            _Dst[4] = _Dst[1];
          }
          else if (param_1[1] == 1) {
            FUN_1433f1dd0(param_1,0);
            uVar10 = uVar10 - 1;
            uVar9 = uVar9 - 0x40;
          }
          else {
            memmove(_Dst,_Dst + 8,(param_1[1] - uVar10) * 0x40 - 0x40);
            param_1[1] = param_1[1] + -1;
            uVar10 = uVar10 - 1;
            uVar9 = uVar9 - 0x40;
          }
LAB_1433f1a78:
          *(undefined2 *)(param_1 + 6) = 0;
        }
      }
      uVar10 = uVar10 + 1;
      uVar9 = uVar9 + 0x40;
      lVar3 = local_78;
      lVar4 = local_78;
      lVar5 = local_70;
    } while (uVar10 < (ulonglong)param_1[1]);
  }
  for (; lVar6 = local_78, lVar5 != 0; lVar5 = lVar5 + -1) {
    local_78 = lVar4;
    FUN_1433f11f0(param_1,lVar3);
    lVar3 = lVar3 + 0x40;
    lVar4 = local_78;
    local_78 = lVar6;
  }
  if (local_78 != 0) {
    local_78 = lVar4;
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar6);
  }
  return;
}



// FUNCTION 1433f1b10 FUN_1433f1b10 body=43 status=ok
// SIG undefined FUN_1433f1b10(void)

void FUN_1433f1b10(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    lVar1 = 0;
    do {
      *(undefined4 *)(lVar1 + 0x2c + *param_1) = *param_2;
      lVar2 = lVar2 + -1;
      lVar1 = lVar1 + 0x40;
    } while (lVar2 != 0);
  }
  *(undefined2 *)(param_1 + 6) = 0;
  return;
}



// FUNCTION 1433f1b50 IsAnyCharSelected body=81 status=ok
// SIG undefined IsAnyCharSelected(void)

ulonglong Scaleform::Render::Text::Highlighter::IsAnyCharSelected
                    (undefined8 *param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong in_RAX;
  ulonglong *puVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_1[1] != 0) {
    puVar1 = (ulonglong *)*param_1;
    do {
      in_RAX = *puVar1;
      if (param_2 < in_RAX) {
LAB_1433f1b80:
        if (in_RAX < param_3) {
LAB_1433f1b99:
          return CONCAT71((int7)(in_RAX >> 8),1);
        }
      }
      else {
        if (param_2 < puVar1[1] + in_RAX) goto LAB_1433f1b99;
        if (param_2 <= in_RAX) goto LAB_1433f1b80;
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 8;
    } while (uVar2 < (ulonglong)param_1[1]);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1433f1bb0 FUN_1433f1bb0 body=174 status=ok
// SIG undefined FUN_1433f1bb0(void)

void FUN_1433f1bb0(longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  void *_Src;
  undefined8 *puVar1;
  
  FUN_1433f1dd0(param_1,param_1[1] + 1);
  if (param_2 < param_1[1] - 1U) {
    _Src = (void *)(param_2 * 0x40 + *param_1);
    memmove((void *)((longlong)_Src + 0x40),_Src,(param_1[1] - param_2) * 0x40 - 0x40);
  }
  puVar1 = (undefined8 *)(param_2 * 0x40 + *param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_3;
    puVar1[1] = param_3[1];
    puVar1[2] = param_3[2];
    puVar1[3] = param_3[3];
    puVar1[4] = param_3[4];
    *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_3 + 5);
    *(undefined4 *)((longlong)puVar1 + 0x2c) = *(undefined4 *)((longlong)param_3 + 0x2c);
    *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_3 + 6);
    *(undefined4 *)((longlong)puVar1 + 0x34) = *(undefined4 *)((longlong)param_3 + 0x34);
    *(undefined1 *)(puVar1 + 7) = *(undefined1 *)(param_3 + 7);
  }
  return;
}



// FUNCTION 1433f1c60 FUN_1433f1c60 body=180 status=ok
// SIG undefined FUN_1433f1c60(void)

void FUN_1433f1c60(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = param_1[1] + 1;
  if (uVar2 < (ulonglong)param_1[1]) {
    uVar3 = uVar2;
    if ((ulonglong)param_1[2] >> 1 <= uVar2) goto LAB_1433f1cab;
  }
  else {
    if (uVar2 <= (ulonglong)param_1[2]) goto LAB_1433f1cab;
    uVar3 = (uVar2 >> 2) + uVar2;
  }
  FUN_14330c500(param_1,param_1,uVar3);
LAB_1433f1cab:
  param_1[1] = uVar2;
  puVar1 = (undefined8 *)(*param_1 + -0x40 + uVar2 * 0x40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    puVar1[3] = param_2[3];
    puVar1[4] = param_2[4];
    *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_2 + 5);
    *(undefined4 *)((longlong)puVar1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)puVar1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    *(undefined1 *)(puVar1 + 7) = *(undefined1 *)(param_2 + 7);
  }
  return;
}



// FUNCTION 1433f1d20 FUN_1433f1d20 body=164 status=ok
// SIG undefined FUN_1433f1d20(void)

void FUN_1433f1d20(longlong *param_1,undefined8 param_2,longlong param_3)

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
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 << 6,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 1433f1dd0 FUN_1433f1dd0 body=173 status=ok
// SIG undefined FUN_1433f1dd0(void)

void FUN_1433f1dd0(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = param_1[1];
  if (param_2 < uVar1) {
    uVar5 = param_2;
    if ((ulonglong)param_1[2] >> 1 <= param_2) goto LAB_1433f1e17;
  }
  else {
    if (param_2 <= (ulonglong)param_1[2]) goto LAB_1433f1e17;
    uVar5 = (param_2 >> 2) + param_2;
  }
  FUN_1433f1d20(param_1,param_1,uVar5);
LAB_1433f1e17:
  param_1[1] = param_2;
  if (uVar1 < param_2) {
    puVar3 = (undefined8 *)(uVar1 * 0x40 + *param_1);
    lVar4 = param_2 - uVar1;
    if (lVar4 != 0) {
      puVar2 = puVar3 + 6;
      do {
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = 0xffffffffffffffff;
          puVar2[-5] = 0;
          puVar2[-4] = 0xffffffffffffffff;
          puVar2[-3] = 0;
          puVar2[-2] = 0;
          puVar2[-1] = 0;
          *puVar2 = 0;
          *(undefined1 *)(puVar2 + 1) = 0;
        }
        puVar3 = puVar3 + 8;
        puVar2 = puVar2 + 8;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  return;
}



// FUNCTION 1433f1e80 FUN_1433f1e80 body=138 status=ok
// SIG undefined FUN_1433f1e80(void)

void FUN_1433f1e80(longlong param_1)

{
  float fVar1;
  float fVar2;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x38) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x50) = 0x80;
  *(undefined1 *)(param_1 + 0x5c) = 0xff;
  *(undefined4 *)(param_1 + 0x54) = 0x3f490fdb;
  *(undefined4 *)(param_1 + 0x58) = 0x40800000;
  fVar1 = _guard_xfg_dispatch_icall_nop(0.7853982);
  fVar2 = _guard_xfg_dispatch_icall_nop(0.7853982);
  *(float *)(param_1 + 0x30) = fVar1 * 4.0;
  *(float *)(param_1 + 0x34) = fVar2 * 4.0;
  return;
}



// FUNCTION 1433f1f10 FUN_1433f1f10 body=258 status=ok
// SIG undefined FUN_1433f1f10(void)

void FUN_1433f1f10(longlong param_1,longlong param_2)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  if (*(int *)(param_2 + 0x10) != 0) {
    if ((*(int *)(param_2 + 0x10) - 1U < 2) &&
       ((*(int *)(param_1 + 0x3c) == 0 || (*(float *)(param_1 + 0x58) == 0.0)))) {
      *(undefined4 *)(param_1 + 0x50) = 0;
      uVar2 = 0;
      if ((*(byte *)(param_2 + 0x18) & 0x10) != 0) {
        uVar2 = 0x20;
      }
      *(undefined4 *)(param_1 + 0x50) = uVar2;
      if ((*(byte *)(param_2 + 0x18) & 0x40) != 0) {
        *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 0x40;
      }
      if (*(int *)(param_2 + 0x1c) != 0) {
        *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 0x80;
      }
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x20);
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x24);
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x30);
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x34);
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x38);
      *(undefined1 *)(param_1 + 0x5c) = *(undefined1 *)(param_1 + 0x3f);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x4c);
      fVar1 = *(float *)(param_2 + 0x48);
      *(float *)(param_1 + 0x58) = fVar1;
      fVar3 = _guard_xfg_dispatch_icall_nop(*(float *)(param_1 + 0x54));
      fVar4 = _guard_xfg_dispatch_icall_nop(*(float *)(param_1 + 0x54));
      *(float *)(param_1 + 0x30) = fVar3 * fVar1;
      *(float *)(param_1 + 0x34) = fVar4 * fVar1;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x30);
  return;
}



// FUNCTION 1433f2020 FUN_1433f2020 body=455 status=ok
// SIG undefined FUN_1433f2020(void)

void FUN_1433f2020(ulonglong *param_1)

{
  ulonglong uVar1;
  RefCountImpl *this;
  char cVar2;
  undefined4 uVar3;
  
  if ((RefCountNTSImpl *)param_1[0x11] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[0x11]);
  }
  param_1[0x11] = 0;
  uVar1 = *param_1;
  if ((uVar1 != 0) && (uVar1 < param_1[1])) {
    if ((*(ushort *)(uVar1 + 6) >> 0xe & 1) != 0) {
      if ((*(ushort *)(uVar1 + 6) >> 0xd & 1) != 0) {
        this = *(RefCountImpl **)param_1[2];
        if (this != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::AddRef(this);
        }
        if ((RefCountImpl *)param_1[0x10] != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0x10]);
        }
        param_1[0x10] = (ulonglong)this;
        param_1[2] = param_1[2] + 8;
      }
      if ((*(ushort *)(*param_1 + 6) >> 0xc & 1) != 0) {
        uVar3 = *(undefined4 *)param_1[2];
        *(undefined4 *)(param_1 + 0xe) = uVar3;
        *(undefined4 *)((longlong)param_1 + 0x74) = uVar3;
        param_1[2] = (ulonglong)((undefined4 *)param_1[2] + 2);
      }
      if ((*(ushort *)(*param_1 + 6) >> 0xb & 1) != 0) {
        uVar1 = *(ulonglong *)param_1[2];
        if (uVar1 != 0) {
          *(int *)(uVar1 + 8) = *(int *)(uVar1 + 8) + 1;
        }
        if ((RefCountNTSImpl *)param_1[0x11] != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[0x11]);
        }
        param_1[0x11] = uVar1;
        param_1[2] = param_1[2] + 8;
      }
    }
    if ((*(ushort *)(*param_1 + 6) >> 10 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x12) = 0;
    }
    else {
      *(int *)(param_1 + 0xf) = (int)param_1[0xe];
      *(undefined4 *)(param_1 + 0x12) = 1;
    }
    cVar2 = FUN_1433f0e90(param_1 + 3);
    if (cVar2 == '\0') {
      *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)((longlong)param_1 + 0x74);
      if (((*(ushort *)(*param_1 + 4) & 0xf000) != 0) || ((*(byte *)(*param_1 + 6) >> 3 & 1) != 0))
      {
        if ((param_1[0xd] & 0x10) != 0) {
          *(int *)(param_1 + 0xe) = (int)param_1[0xc];
        }
        if (((byte)param_1[0xd] & 7) != 0) {
          *(uint *)(param_1 + 0x12) = (byte)param_1[0xd] & 7;
        }
        if ((param_1[0xd] & 0x20) == 0) {
          uVar3 = (undefined4)param_1[0xe];
        }
        else {
          uVar3 = *(undefined4 *)((longlong)param_1 + 100);
        }
        *(undefined4 *)(param_1 + 0xf) = uVar3;
        if ((param_1[0xd] & 8) == 0) {
          *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
          return;
        }
        *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_1 + 0x5c);
        return;
      }
    }
    else {
      *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
      if ((*(ushort *)(*param_1 + 6) >> 10 & 1) != 0) {
        *(int *)(param_1 + 0xf) = (int)param_1[0xe];
        *(undefined4 *)(param_1 + 0x12) = 1;
      }
    }
  }
  return;
}



// FUNCTION 1433f21f0 operator++ body=139 status=ok
// SIG undefined operator++(void)

void Scaleform::Render::Text::LineBuffer::GlyphIterator::operator++(ulonglong *param_1)

{
  ulonglong uVar1;
  char cVar2;
  
  uVar1 = *param_1;
  if ((uVar1 != 0) && (uVar1 < param_1[1])) {
    if (*(int *)((longlong)param_1 + 0x94) == 0) {
      *(uint *)((longlong)param_1 + 0x94) = (uint)(*(ushort *)(uVar1 + 4) >> 0xc);
    }
    *param_1 = uVar1 + 8;
    if ((((*(ushort *)(uVar1 + 0xc) & 0xf000) != 0) && (*(int *)((longlong)param_1 + 0x94) != 0)) &&
       (cVar2 = FUN_1433f0e90(param_1 + 3), cVar2 == '\0')) {
      HighlighterPosIterator::operator+=(param_1 + 3,*(undefined4 *)((longlong)param_1 + 0x94));
      *(undefined4 *)((longlong)param_1 + 0x94) = 0;
    }
    FUN_1433f2020(param_1);
    return;
  }
  return;
}



// FUNCTION 1433f2290 FUN_1433f2290 body=101 status=ok
// SIG undefined FUN_1433f2290(void)

void FUN_1433f2290(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 2);
  if ((uVar1 < *(uint *)(param_1 + 2)) && (*(int *)((longlong)param_1 + 0x14) != 0)) {
    FUN_1433f2440(*param_2 + (ulonglong)uVar1 * 8,*(uint *)(param_1 + 2) - uVar1,
                  param_2[1] + (ulonglong)*(uint *)(param_2 + 3) * 8);
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(int *)(param_1 + 2) = (int)param_2[2];
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(int *)(param_1 + 3) = (int)param_2[3];
  return;
}



// FUNCTION 1433f2300 FUN_1433f2300 body=139 status=ok
// SIG undefined FUN_1433f2300(void)

void FUN_1433f2300(uint *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar1 = *param_1;
  if ((uVar1 >> 0x1e & 1) != 0) {
    lVar5 = 0x2a;
    if ((int)uVar1 < 0) {
      lVar5 = 0x1e;
    }
    if ((int)uVar1 < 0) {
      uVar4 = (uint)(byte)param_1[7];
    }
    else {
      uVar4 = param_1[1];
    }
    lVar3 = 0x31;
    if ((int)uVar1 < 0) {
      lVar3 = 0x25;
      uVar2 = (ulonglong)(byte)param_1[7];
    }
    else {
      uVar2 = (ulonglong)param_1[1];
    }
    FUN_1433f2440(lVar5 + (longlong)param_1,uVar4,
                  lVar3 + uVar2 * 8 + (longlong)param_1 & 0xfffffffffffffff8);
    if ((int)*param_1 < 0) {
      *(undefined1 *)(param_1 + 7) = 0;
      return;
    }
    param_1[1] = 0;
  }
  return;
}



// FUNCTION 1433f23a0 FUN_1433f23a0 body=57 status=ok
// SIG undefined FUN_1433f23a0(void)

ulonglong FUN_1433f23a0(int *param_1)

{
  if (-1 < *param_1) {
    return (ulonglong)(uint)param_1[1] * 8 + 0x31 + (longlong)param_1 & 0xfffffffffffffff8;
  }
  return (ulonglong)*(byte *)(param_1 + 7) * 8 + 0x25 + (longlong)param_1 & 0xfffffffffffffff8;
}



// FUNCTION 1433f23e0 FUN_1433f23e0 body=82 status=ok
// SIG undefined FUN_1433f23e0(void)

byte FUN_1433f23e0(int *param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  
  bVar1 = (byte)((uint)*param_1 >> 0x18);
  if (*param_1 < 0) {
    uVar3 = (uint)*(byte *)(param_1 + 7);
  }
  else {
    uVar3 = param_1[1];
  }
  bVar2 = -((char)bVar1 >> 7);
  if (uVar3 == 0) {
    return bVar1 >> 7 ^ bVar2;
  }
  lVar4 = 0x2a;
  if (bVar2 != 0) {
    lVar4 = 0x1e;
  }
  lVar4 = lVar4 + (ulonglong)(uVar3 - 1) * 8;
  if (((*(byte *)(lVar4 + 7 + (longlong)param_1) & 1) != 0) &&
     (0xfff < *(ushort *)(lVar4 + 4 + (longlong)param_1))) {
    return 1;
  }
  return 0;
}



// FUNCTION 1433f2440 FUN_1433f2440 body=137 status=ok
// SIG undefined FUN_1433f2440(void)

void FUN_1433f2440(longlong param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ushort *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (ushort *)(param_1 + 6);
    uVar2 = (ulonglong)param_2;
    do {
      if ((*puVar3 >> 0xe & 1) != 0) {
        puVar1 = param_3;
        if ((*puVar3 >> 0xd & 1) != 0) {
          Scaleform::RefCountImpl::Release((RefCountImpl *)*param_3);
          puVar1 = param_3 + 1;
        }
        param_3 = puVar1 + 1;
        if ((*puVar3 >> 0xc & 1) == 0) {
          param_3 = puVar1;
        }
        if ((*puVar3 >> 0xb & 1) != 0) {
          Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*param_3);
          param_3 = param_3 + 1;
        }
      }
      puVar3 = puVar3 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 1433f24d0 FUN_1433f24d0 body=45 status=ok
// SIG undefined FUN_1433f24d0(void)

undefined8 * FUN_1433f24d0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0xffffffff;
  return param_1;
}



// FUNCTION 1433f2510 FUN_1433f2510 body=46 status=ok
// SIG undefined FUN_1433f2510(void)

void FUN_1433f2510(undefined8 *param_1)

{
  *(byte *)((longlong)param_1 + 0x44) = *(byte *)((longlong)param_1 + 0x44) | 1;
  FUN_1433f3720(param_1,0,*(undefined4 *)(param_1 + 1));
                    /* WARNING: Could not recover jumptable at 0x0001433f253a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  return;
}



// FUNCTION 1433f2550 FUN_1433f2550 body=3021 status=ok
// SIG undefined FUN_1433f2550(void)

void FUN_1433f2550(longlong *param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  int *piVar5;
  bool bVar6;
  undefined8 uVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  char cVar11;
  ushort uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  ushort *puVar16;
  int iVar17;
  uint uVar18;
  undefined8 *puVar19;
  uint uVar20;
  ulonglong uVar21;
  RefCountNTSImpl *pRVar22;
  int iVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  int local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  float local_1e8;
  uint local_1e4;
  uint local_1e0;
  float local_1dc;
  longlong *local_1d8;
  int *local_1d0;
  ushort *local_1c8;
  longlong *local_1c0;
  ulonglong local_1b8;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  ushort *local_198;
  ushort *local_190;
  undefined1 local_180 [88];
  int local_128;
  int local_120;
  int local_11c;
  RefCountImpl *local_118;
  RefCountNTSImpl *local_110;
  int local_108;
  uint local_104;
  undefined8 local_f8;
  undefined8 uStack_f0;
  
  local_1e0 = *(uint *)(param_1 + 4);
  uVar21 = (ulonglong)local_1e0;
  uVar18 = 0;
  puVar19 = param_4;
  uVar20 = 0;
  if (local_1e0 != 0) {
    puVar19 = (undefined8 *)(ulonglong)local_1e0;
    uVar20 = uVar18;
    if (((uVar21 < (ulonglong)param_1[1]) && (-1 < (int)local_1e0)) && (param_1[1] != 0)) {
      uVar20 = *(int *)(((longlong *)*param_1)[uVar21] + 0x10) -
               *(int *)(*(longlong *)*param_1 + 0x10);
    }
  }
  bVar4 = *(byte *)((longlong)param_1 + 0x44);
  local_f8 = 0;
  uStack_f0 = 0;
  fVar28 = -(float)uVar20;
  local_1dc = fVar28;
  if (param_3 != 0) {
    FUN_1433f17e0(param_3,param_2,param_3,puVar19);
  }
  iVar13 = 0;
  fVar27 = 0.0;
  local_1c0 = (longlong *)0x0;
  if (((*(byte *)((longlong)param_1 + 0x44) & 0x24) == 0) &&
     (cVar11 = FUN_1433f3960(), cVar11 != '\0')) {
    uVar1 = *(undefined4 *)((longlong)param_1 + 0x3c);
    lVar15 = param_1[7];
    lVar9 = param_1[6];
    *(undefined4 *)((longlong)param_2 + 0x54) = *(undefined4 *)((longlong)param_1 + 0x34);
    *(int *)(param_2 + 0xb) = (int)lVar15;
    *(undefined4 *)((longlong)param_2 + 0x5c) = uVar1;
    *(int *)(param_2 + 10) = (int)lVar9;
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  do {
    fVar25 = 0.0;
    uVar20 = (uint)uVar21;
    if ((uVar21 < (ulonglong)param_1[1]) && (-1 < (int)uVar20)) {
      if ((bVar4 >> 2 & 1) == 0) {
        piVar5 = *(int **)(*param_1 + uVar21 * 8);
        if (uVar20 == *(uint *)(param_1 + 4)) {
          bVar6 = (float)piVar5[4] + fVar28 <=
                  (*(float *)((longlong)param_1 + 0x3c) - *(float *)((longlong)param_1 + 0x34)) +
                  20.0;
        }
        else {
          if (*(uint *)(param_1 + 4) < uVar20) {
            if (*piVar5 < 0) {
              uVar20 = (uint)*(ushort *)((longlong)piVar5 + 0x16);
            }
            else {
              uVar20 = piVar5[6];
            }
            if ((float)(int)(uVar20 + piVar5[4]) + fVar28 <=
                (*(float *)((longlong)param_1 + 0x3c) - *(float *)((longlong)param_1 + 0x34)) + 20.0
               ) {
              bVar6 = true;
              goto LAB_1433f2755;
            }
          }
          bVar6 = false;
        }
      }
      else {
        bVar6 = true;
      }
    }
    else {
      bVar6 = false;
    }
LAB_1433f2755:
    if (!bVar6) {
      uVar7 = param_4[1];
      *param_2 = *param_4;
      param_2[1] = uVar7;
      uVar7 = param_4[3];
      param_2[2] = param_4[2];
      param_2[3] = uVar7;
      uVar7 = param_4[5];
      param_2[4] = param_4[4];
      param_2[5] = uVar7;
      uVar7 = param_4[7];
      param_2[6] = param_4[6];
      param_2[7] = uVar7;
      return;
    }
    piVar5 = *(int **)(*param_1 + uVar21 * 8);
    fVar31 = (float)piVar5[3] + *(float *)(param_1 + 6);
    if (*piVar5 < 0) {
      uVar12 = *(ushort *)((longlong)piVar5 + 0x1a);
    }
    else {
      uVar12 = *(ushort *)((longlong)piVar5 + 0x26);
    }
    fVar32 = (float)piVar5[4] + *(float *)((longlong)param_1 + 0x34) + (float)uVar12 + fVar28;
    local_1d0 = piVar5;
    local_1b8 = uVar21;
    FUN_1433f4420(piVar5,&local_198,param_3);
    iVar17 = 0;
    fVar28 = 0.0;
    local_1e8 = 0.0;
    local_200 = 0;
    bVar6 = true;
    local_1f8 = 0;
    uStack_1f0 = 0;
    iVar23 = 0;
    iVar14 = 0;
    if (*piVar5 < 0) {
      uVar20 = (uint)*(ushort *)((longlong)piVar5 + 0x16);
      uVar12 = *(ushort *)((longlong)piVar5 + 0x1a);
    }
    else {
      uVar20 = piVar5[6];
      uVar12 = *(ushort *)((longlong)piVar5 + 0x26);
    }
    puVar16 = local_198;
    while ((iVar10 = local_11c, fVar29 = 0.0, puVar16 != (ushort *)0x0 && (puVar16 < local_190))) {
      local_1c8 = puVar16 + 3;
      uVar18 = (uint)puVar16[1];
      if (((byte)puVar16[3] >> 6 & 1) != 0) {
        uVar18 = -(uint)puVar16[1];
      }
      if (*puVar16 < 0xffff) {
        local_1e4 = (uint)*puVar16;
      }
      else {
        local_1e4 = 0xffffffff;
      }
      fVar30 = -1.0;
      pRVar22 = (RefCountNTSImpl *)0x0;
      local_1d8 = (longlong *)0x0;
      if (local_110 == (RefCountNTSImpl *)0x0) {
        fVar30 = (float)(puVar16[2] & 0xfff);
        if ((puVar16[3] & 0x10) != 0) {
          fVar30 = fVar30 * 0.0625;
        }
        fVar30 = fVar30 * 20.0;
        if (local_118 == (RefCountImpl *)0x0) {
          local_1d8 = (longlong *)0x0;
        }
        else {
          local_1d8 = *(longlong **)(local_118 + 0x30);
        }
        if ((*(byte *)((longlong)param_1 + 0x44) & 4) == 0) {
          if (local_1e4 == 0xffffffff) {
            fVar29 = (float)(int)uVar18 * fVar30 * 0.0009765625;
          }
          else {
            lVar15 = (**(code **)(*local_1d8 + 0x38))(local_1d8,local_1e4,&local_f8);
            fVar29 = *(float *)(lVar15 + 8) * fVar30 * 0.0009765625;
            puVar16 = local_198;
          }
        }
      }
      else {
        fVar29 = *(float *)(local_110 + 0x20);
        pRVar22 = local_110;
      }
      fVar26 = fVar31 - (float)*(uint *)(param_1 + 8);
      if ((*(byte *)((longlong)param_1 + 0x44) & 4) == 0) {
        if (*(float *)(param_1 + 6) < fVar26 + fVar29) {
          if ((int)fVar26 < (int)*(float *)(param_1 + 7)) goto LAB_1433f2987;
          break;
        }
      }
      else {
LAB_1433f2987:
        bVar24 = local_108 != 0;
        if (bVar6) {
          FUN_1433f00c0();
          bVar6 = false;
        }
        iVar17 = local_128;
        if (((((*local_1c8 >> 9 & 1) == 0) && (!bVar8)) &&
            ((*(byte *)((longlong)param_1 + 0x44) & 0x24) == 0)) &&
           (((fVar2 = *(float *)(param_1 + 6), fVar26 < fVar2 && (fVar2 < fVar26 + fVar29)) ||
            ((fVar26 < *(float *)(param_1 + 7) && (*(float *)(param_1 + 7) < fVar26 + fVar29)))))) {
          fVar29 = *(float *)(param_1 + 7);
          fVar26 = *(float *)((longlong)param_1 + 0x34);
          fVar3 = *(float *)((longlong)param_1 + 0x3c);
          bVar8 = true;
          *(float *)(param_2 + 10) = fVar2 + 0.0;
          *(float *)(param_2 + 0xb) = fVar29 + 0.0;
          *(float *)((longlong)param_2 + 0x54) = fVar26 + -40.0;
          *(float *)((longlong)param_2 + 0x5c) = fVar3 + 40.0;
        }
        if (pRVar22 == (RefCountNTSImpl *)0x0) {
          if (local_128 != iVar13) {
            FUN_1433effb0();
          }
          if ((local_1d8 != local_1c0) || (fVar30 != fVar27)) {
            FUN_1433f0010(param_2,local_1d8);
            FUN_1433eff30();
          }
          if ((*local_1c8 & 0x100) == 0) {
            if (((iVar14 != local_120) || (fVar27 = local_1e8, local_200 != local_108)) &&
               (fVar28 = fVar31, fVar27 = fVar32, iVar14 != 0)) {
              switch(local_200) {
              default:
                break;
              case 2:
                break;
              case 3:
                break;
              case 4:
                break;
              case 5:
                break;
              case 6:
              }
              FUN_1433efeb0();
            }
          }
          else {
            if (iVar14 != 0) {
              switch(local_200) {
              default:
                break;
              case 2:
                break;
              case 3:
                break;
              case 4:
                break;
              case 5:
                break;
              case 6:
              }
              FUN_1433efeb0(param_2,fVar28 - (float)*(uint *)(param_1 + 8),
                            ((float)(int)uVar20 - (float)uVar12) * 0.5 + fVar25);
            }
            bVar24 = false;
            fVar27 = local_1e8;
          }
          local_1e8 = fVar27;
          if ((local_11c != 0) || (iVar23 != 0)) {
            iVar13 = Scaleform::Render::Text::LineBuffer::Line::GetHeight(local_1d0);
            iVar14 = Scaleform::Render::Text::LineBuffer::Line::GetNonNegLeading(local_1d0);
            fVar25 = (float)FUN_1433f4550();
            fVar29 = (float)(int)uVar18 + fVar31;
            fVar27 = fVar31 + 0.0;
            fVar26 = (float)(iVar13 + iVar14) + (fVar32 - fVar25);
            fVar25 = (fVar32 - fVar25) + 0.0;
            if (iVar10 == iVar23) {
              if (iVar10 == 0) goto LAB_1433f2ea8;
              if ((float)uStack_1f0 <= fVar29) {
                uStack_1f0._0_4_ = fVar29;
              }
              if ((float)local_1f8 <= fVar27) {
                fVar27 = (float)local_1f8;
              }
              if (local_1f8._4_4_ <= fVar25) {
                fVar25 = local_1f8._4_4_;
              }
              if (uStack_1f0._4_4_ <= fVar26) {
                uStack_1f0._4_4_ = fVar26;
              }
            }
            else {
              if (iVar23 != 0) {
                local_1a8 = -(float)*(uint *)(param_1 + 8) + (float)local_1f8;
                local_1a0 = -(float)*(uint *)(param_1 + 8) + (float)uStack_1f0;
                local_1a4 = local_1f8._4_4_ + -0.0;
                local_19c = uStack_1f0._4_4_ + -0.0;
                FUN_1433efe80(param_2,&local_1a8,iVar23);
              }
              uStack_1f0 = CONCAT44(fVar26,fVar29);
            }
            local_1f8 = CONCAT44(fVar25,fVar27);
          }
LAB_1433f2ea8:
          FUN_1433efcf0(param_2,local_1e4);
          local_1c0 = local_1d8;
          puVar16 = local_198;
          fVar27 = fVar30;
          iVar13 = iVar17;
          fVar25 = local_1e8;
          iVar23 = iVar10;
          if (bVar24) {
            local_200 = local_108;
            iVar17 = local_108;
            iVar14 = local_120;
          }
          else {
            iVar14 = 0;
            local_200 = 0;
            iVar17 = 0;
          }
        }
        else {
          lVar15 = *(longlong *)(pRVar22 + 0x10);
          iVar17 = local_200;
          if (lVar15 == 0) {
            local_1e4 = 0x21000;
            FUN_1433db230(&local_1e4,"An image in TextLayout is NULL");
            puVar16 = local_198;
          }
          else {
            fVar25 = *(float *)(pRVar22 + 0x40);
            fVar29 = *(float *)(pRVar22 + 0x30);
            _guard_xfg_dispatch_icall_nop
                      (*(float *)(pRVar22 + 0x34) * *(float *)(pRVar22 + 0x34) +
                       *(float *)(pRVar22 + 0x44) * *(float *)(pRVar22 + 0x44));
            _guard_xfg_dispatch_icall_nop(fVar29 * fVar29 + fVar25 * fVar25);
            FUN_1433efde0(param_2,lVar15);
            puVar16 = local_198;
            fVar25 = local_1e8;
          }
        }
      }
      if ((puVar16 != (ushort *)0x0) && (puVar16 < local_190)) {
        if (local_104 == 0) {
          local_104 = (uint)(puVar16[2] >> 0xc);
        }
        local_198 = puVar16 + 4;
        if ((((puVar16[6] & 0xf000) != 0) && (local_104 != 0)) &&
           (cVar11 = FUN_1433f0e90(local_180), cVar11 == '\0')) {
          Scaleform::Render::Text::HighlighterPosIterator::operator+=(local_180,local_104);
          local_104 = 0;
        }
        FUN_1433f2020(&local_198);
        puVar16 = local_198;
      }
      fVar31 = fVar31 + (float)(int)uVar18;
    }
    if (iVar14 != 0) {
      switch(iVar17) {
      default:
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
        break;
      case 5:
        break;
      case 6:
      }
      FUN_1433efeb0(param_2);
    }
    if (iVar23 != 0) {
      local_1f8 = CONCAT44(local_1f8._4_4_ + -0.0,(float)local_1f8 + -(float)*(uint *)(param_1 + 8))
      ;
      uStack_1f0 = CONCAT44(uStack_1f0._4_4_ + -0.0,
                            (float)uStack_1f0 + -(float)*(uint *)(param_1 + 8));
      FUN_1433efe80(param_2,&local_1f8,iVar23);
    }
    if (local_110 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(local_110);
    }
    if (local_118 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(local_118);
    }
    uVar21 = (ulonglong)local_1e0;
    fVar28 = local_1dc;
    if (local_1b8 < (ulonglong)param_1[1]) {
      local_1e0 = local_1e0 + 1;
      uVar21 = (ulonglong)local_1e0;
    }
  } while( true );
}



// FUNCTION 1433f3180 FUN_1433f3180 body=321 status=ok
// SIG undefined FUN_1433f3180(void)

undefined8 * FUN_1433f3180(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar8 = 0;
  if (param_1[1] != 0) {
    if (0 < param_1[1]) {
      lVar6 = param_1[1];
      do {
        lVar7 = lVar6 >> 1;
        piVar2 = *(int **)(*param_1 + (lVar7 + uVar8) * 8);
        uVar3 = piVar2[2];
        if ((*piVar2 < 0) && (uVar3 = uVar3 & 0xffffff, uVar3 == 0xffffff)) {
          uVar3 = 0xffffffff;
        }
        iVar4 = (int)param_3;
        if (iVar4 < (int)uVar3) {
LAB_1433f320a:
          if ((int)(uVar3 - iVar4) < 0) {
            uVar8 = lVar7 + uVar8 + 1;
            lVar7 = lVar6 + (-1 - lVar7);
          }
        }
        else {
          if (*piVar2 < 0) {
            uVar5 = (uint)*(byte *)((longlong)piVar2 + 0xb);
          }
          else {
            uVar5 = piVar2[8];
          }
          if ((int)(uVar5 + uVar3) <= iVar4) goto LAB_1433f320a;
        }
        lVar6 = lVar7;
      } while (0 < lVar7);
    }
    if (uVar8 == param_1[1]) {
      uVar8 = uVar8 - 1;
    }
    piVar2 = *(int **)(*param_1 + (uVar8 & 0xffffffff) * 8);
    uVar3 = piVar2[2];
    if ((*piVar2 < 0) && (uVar3 = uVar3 & 0xffffff, uVar3 == 0xffffff)) {
      uVar3 = 0xffffffff;
    }
    if (uVar3 <= param_3) {
      if (*piVar2 < 0) {
        uVar5 = (uint)*(byte *)((longlong)piVar2 + 0xb);
      }
      else {
        uVar5 = piVar2[8];
      }
      if (param_3 <= uVar3 + uVar5) {
        bVar1 = *(byte *)((longlong)param_1 + 0x44);
        *param_2 = param_1;
        *(byte *)(param_2 + 3) = bVar1 >> 2 & 1;
        *(int *)(param_2 + 2) = (int)uVar8;
        *(undefined4 *)((longlong)param_2 + 0x14) = 0;
        param_2[1] = 0;
        return param_2;
      }
    }
  }
  *param_2 = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1433f32d0 FUN_1433f32d0 body=351 status=ok
// SIG undefined FUN_1433f32d0(void)

undefined8 * FUN_1433f32d0(longlong *param_1,undefined8 *param_2,float param_3)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  float fVar8;
  
  uVar7 = 0;
  if (param_1[1] != 0) {
    if (0 < param_1[1]) {
      lVar5 = param_1[1];
      do {
        lVar6 = lVar5 >> 1;
        piVar2 = *(int **)(*param_1 + (lVar6 + uVar7) * 8);
        fVar8 = (float)piVar2[4];
        if (param_3 < fVar8) {
LAB_1433f336a:
          if ((int)(fVar8 - param_3) < 0) {
            uVar7 = lVar6 + uVar7 + 1;
            lVar6 = lVar5 + (-1 - lVar6);
          }
        }
        else {
          if (*piVar2 < 0) {
            uVar4 = (uint)*(ushort *)((longlong)piVar2 + 0x16);
            iVar3 = (int)*(char *)((longlong)piVar2 + 0x1d);
          }
          else {
            uVar4 = piVar2[6];
            iVar3 = (int)(short)piVar2[10];
          }
          if ((float)(int)uVar4 + fVar8 + (float)iVar3 <= param_3) goto LAB_1433f336a;
        }
        lVar5 = lVar6;
      } while (0 < lVar6);
    }
    if (uVar7 == param_1[1]) {
      uVar7 = uVar7 - 1;
    }
    piVar2 = *(int **)(*param_1 + (uVar7 & 0xffffffff) * 8);
    if ((float)piVar2[4] <= param_3) {
      if (*piVar2 < 0) {
        uVar4 = (uint)*(ushort *)((longlong)piVar2 + 0x16);
        iVar3 = (int)*(char *)((longlong)piVar2 + 0x1d);
      }
      else {
        uVar4 = piVar2[6];
        iVar3 = (int)(short)piVar2[10];
      }
      if (param_3 < (float)(int)(iVar3 + piVar2[4] + uVar4)) {
        bVar1 = *(byte *)((longlong)param_1 + 0x44);
        *param_2 = param_1;
        *(byte *)(param_2 + 3) = bVar1 >> 2 & 1;
        *(int *)(param_2 + 2) = (int)uVar7;
        *(undefined4 *)((longlong)param_2 + 0x14) = 0;
        param_2[1] = 0;
        return param_2;
      }
    }
  }
  *param_2 = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1433f3440 FUN_1433f3440 body=455 status=ok
// SIG undefined FUN_1433f3440(void)

undefined8 * FUN_1433f3440(longlong *param_1,undefined8 *param_2,float *param_3)

{
  float fVar1;
  byte bVar2;
  ulonglong uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float fVar11;
  
  uVar3 = param_1[1];
  uVar9 = 0;
  if (uVar3 != 0) {
    if (0 < (longlong)uVar3) {
      fVar1 = param_3[1];
      uVar10 = uVar3;
      do {
        uVar8 = (longlong)uVar10 >> 1;
        piVar4 = *(int **)(*param_1 + (uVar8 + uVar9) * 8);
        fVar11 = (float)piVar4[4];
        if (fVar1 < fVar11) {
LAB_1433f34ea:
          if ((int)(fVar11 - fVar1) < 0) {
            uVar9 = uVar8 + uVar9 + 1;
            uVar8 = uVar10 + (-1 - uVar8);
          }
        }
        else {
          if (*piVar4 < 0) {
            uVar5 = (uint)*(ushort *)((longlong)piVar4 + 0x16);
            iVar6 = (int)*(char *)((longlong)piVar4 + 0x1d);
          }
          else {
            uVar5 = piVar4[6];
            iVar6 = (int)(short)piVar4[10];
          }
          if ((float)(int)uVar5 + fVar11 + (float)iVar6 <= fVar1) goto LAB_1433f34ea;
        }
        uVar10 = uVar8;
      } while (0 < (longlong)uVar8);
    }
    if (uVar9 == uVar3) {
      uVar9 = uVar9 - 1;
    }
    piVar7 = *(int **)(*param_1 + (uVar9 & 0xffffffff) * 8);
    piVar4 = piVar7 + 4;
    if (piVar7 != (int *)0x0) {
      while ((float)piVar7[4] <= param_3[1]) {
        if (*piVar7 < 0) {
          uVar5 = (uint)*(ushort *)((longlong)piVar7 + 0x16);
          iVar6 = (int)*(char *)((longlong)piVar7 + 0x1d);
        }
        else {
          uVar5 = piVar7[6];
          iVar6 = (int)(short)piVar7[10];
        }
        if ((float)(int)(iVar6 + piVar7[4] + uVar5) <= param_3[1]) break;
        if ((float)piVar7[3] <= *param_3) {
          if (*piVar7 < 0) {
            uVar5 = (uint)*(ushort *)(piVar7 + 5);
          }
          else {
            uVar5 = piVar7[5];
          }
          if (*param_3 < (float)(int)(uVar5 + piVar7[3])) {
            bVar2 = *(byte *)((longlong)param_1 + 0x44);
            *param_2 = param_1;
            *(byte *)(param_2 + 3) = bVar2 >> 2 & 1;
            *(int *)(param_2 + 2) = (int)uVar9;
            *(undefined4 *)((longlong)param_2 + 0x14) = 0;
            goto LAB_1433f35cc;
          }
        }
        uVar9 = uVar9 + 1;
        if ((uVar9 == uVar3) ||
           (piVar7 = *(int **)(*param_1 + (uVar9 & 0xffffffff) * 8), piVar7[4] != *piVar4)) break;
      }
    }
  }
  *param_2 = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
LAB_1433f35cc:
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1433f3630 GetLine body=20 status=ok
// SIG undefined GetLine(void)

undefined8 Scaleform::Render::Text::LineBuffer::GetLine(longlong *param_1,uint param_2)

{
  if ((ulonglong)param_1[1] <= (ulonglong)param_2) {
    return 0;
  }
  return *(undefined8 *)(*param_1 + (ulonglong)param_2 * 8);
}



// FUNCTION 1433f3650 FUN_1433f3650 body=189 status=ok
// SIG undefined FUN_1433f3650(void)

int * FUN_1433f3650(longlong *param_1,uint param_2,int param_3,int param_4,int param_5)

{
  void *_Src;
  undefined8 *puVar1;
  int iVar2;
  int *piVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_2;
  iVar2 = 0x25;
  if (param_5 != 0) {
    iVar2 = 0x31;
  }
  piVar3 = (int *)FUN_1433f4000(param_1 + 10,(iVar2 + param_3 * 8 & 0xfffffff8U) + param_4 * 8);
  if (piVar3 != (int *)0x0) {
    if (*piVar3 < 0) {
      *(char *)(piVar3 + 7) = (char)param_3;
    }
    else {
      piVar3[1] = param_3;
    }
    FUN_1433cc430(param_1,param_1[1] + 1);
    if (uVar4 < param_1[1] - 1U) {
      _Src = (void *)(*param_1 + uVar4 * 8);
      memmove((void *)((longlong)_Src + 8),_Src,(param_1[1] - uVar4) * 8 - 8);
    }
    puVar1 = (undefined8 *)(*param_1 + uVar4 * 8);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = piVar3;
    }
  }
  return piVar3;
}



// FUNCTION 1433f3720 FUN_1433f3720 body=281 status=ok
// SIG undefined FUN_1433f3720(void)

void FUN_1433f3720(longlong *param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar2 = 0;
  uVar3 = (ulonglong)param_2;
  uVar5 = (ulonglong)param_3;
  uVar4 = (ulonglong)param_2;
  if (param_3 != 0) {
    do {
      if (((param_1 == (longlong *)0x0) || ((ulonglong)param_1[1] <= uVar3)) || ((int)uVar3 < 0))
      break;
      lVar1 = *(longlong *)(*param_1 + uVar3 * 8);
      if (lVar1 != 0) {
        FUN_1433f2300(lVar1);
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
      }
      if (uVar3 < (ulonglong)param_1[1]) {
        uVar3 = (ulonglong)((int)uVar3 + 1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_3);
  }
  uVar3 = param_1[1];
  if (uVar3 != uVar5) {
    memmove((void *)(*param_1 + uVar4 * 8),(void *)(*param_1 + (uVar4 + uVar5) * 8),
            ((uVar3 - uVar4) - uVar5) * 8);
    param_1[1] = param_1[1] - uVar5;
    return;
  }
  if (((uVar3 != 0) && ((param_1[2] & 0xfffffffffffffffeU) != 0)) && (param_1[2] != 0)) {
    if (*param_1 != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
      *param_1 = 0;
    }
    param_1[2] = 0;
  }
  param_1[1] = 0;
  return;
}



// FUNCTION 1433f3840 FUN_1433f3840 body=28 status=ok
// SIG undefined FUN_1433f3840(void)

int FUN_1433f3840(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0x25;
  if (param_3 != 0) {
    iVar1 = 0x31;
  }
  return (iVar1 + param_1 * 8 & 0xfffffff8U) + param_2 * 8;
}



// FUNCTION 1433f3870 SetFirstVisibleLine body=8 status=ok
// SIG undefined SetFirstVisibleLine(void)

void Scaleform::Render::Text::LineBuffer::SetFirstVisibleLine(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x44) | 1;
  return;
}



// FUNCTION 1433f3880 FUN_1433f3880 body=47 status=ok
// SIG undefined FUN_1433f3880(void)

int FUN_1433f3880(longlong *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((((uVar1 != 0) && ((ulonglong)uVar1 < (ulonglong)param_1[1])) && (-1 < (int)uVar1)) &&
     (param_1[1] != 0)) {
    return *(int *)(((longlong *)*param_1)[uVar1] + 0x10) - *(int *)(*(longlong *)*param_1 + 0x10);
  }
  return 0;
}



// FUNCTION 1433f38c0 SetHScrollOffset body=4 status=ok
// SIG undefined SetHScrollOffset(void)

void Scaleform::Render::Text::LineBuffer::SetHScrollOffset(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  return;
}



// FUNCTION 1433f38d0 FUN_1433f38d0 body=129 status=ok
// SIG undefined FUN_1433f38d0(void)

bool FUN_1433f38d0(longlong *param_1,uint param_2,float param_3)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = *(int **)(*param_1 + (ulonglong)param_2 * 8);
  if (param_2 == *(uint *)(param_1 + 4)) {
    return (float)piVar1[4] + param_3 <=
           (*(float *)((longlong)param_1 + 0x3c) - *(float *)((longlong)param_1 + 0x34)) + 20.0;
  }
  if (*(uint *)(param_1 + 4) < param_2) {
    if (*piVar1 < 0) {
      uVar2 = (uint)*(ushort *)((longlong)piVar1 + 0x16);
    }
    else {
      uVar2 = piVar1[6];
    }
    if ((float)(int)(uVar2 + piVar1[4]) + param_3 <=
        (*(float *)((longlong)param_1 + 0x3c) - *(float *)((longlong)param_1 + 0x34)) + 20.0) {
      return true;
    }
  }
  return false;
}



// FUNCTION 1433f3960 FUN_1433f3960 body=137 status=ok
// SIG undefined FUN_1433f3960(void)

ulonglong FUN_1433f3960(longlong *param_1,float param_2)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  float fVar6;
  
  uVar4 = *(uint *)(param_1 + 4);
  uVar5 = (ulonglong)uVar4;
  if (uVar4 < *(uint *)(param_1 + 1)) {
    piVar1 = *(int **)(*param_1 + (ulonglong)uVar4 * 8);
    uVar4 = -(*piVar1 >> 0x1f);
    bVar2 = (byte)((uint)*piVar1 >> 0x18);
    uVar5 = (ulonglong)uVar4;
    if (uVar4 == 0) {
      uVar4 = piVar1[5];
    }
    else {
      uVar4 = (uint)*(ushort *)(piVar1 + 5);
    }
    if (uVar4 != 0) {
      bVar3 = -((char)bVar2 >> 7);
      if ((bVar2 >> 7 & bVar3) == 0) {
        uVar4 = piVar1[6];
      }
      else {
        uVar4 = (uint)*(ushort *)((longlong)piVar1 + 0x16);
      }
      if (uVar4 != 0) {
        if (bVar3 == 0) {
          uVar5 = (ulonglong)(uint)piVar1[6];
        }
        else {
          uVar5 = (ulonglong)*(ushort *)((longlong)piVar1 + 0x16);
        }
        fVar6 = (*(float *)((longlong)param_1 + 0x3c) - *(float *)((longlong)param_1 + 0x34)) + 20.0
        ;
        if (((float)piVar1[4] + param_2 <= fVar6) &&
           (fVar6 < (float)piVar1[4] + param_2 + (float)(int)uVar5)) {
          return CONCAT71((int7)(uVar5 >> 8),1);
        }
      }
    }
  }
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 1433f39f0 FUN_1433f39f0 body=945 status=ok
// SIG undefined FUN_1433f39f0(void)

void FUN_1433f39f0(longlong *param_1,float param_2)

{
  ushort *puVar1;
  int iVar2;
  int *piVar3;
  byte bVar4;
  bool bVar5;
  char cVar6;
  ushort uVar7;
  undefined2 uVar8;
  ushort uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  byte bVar13;
  ushort uVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  float fVar18;
  ulonglong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  
  uVar17 = 0;
  do {
    bVar5 = false;
    if (((param_1 == (longlong *)0x0) || ((ulonglong)param_1[1] <= uVar17)) || ((int)uVar17 < 0)) {
      bVar5 = true;
    }
    if (bVar5) {
      *(byte *)((longlong)param_1 + 0x44) = *(byte *)((longlong)param_1 + 0x44) | 1;
      return;
    }
    piVar3 = *(int **)(*param_1 + uVar17 * 8);
    iVar2 = *piVar3;
    if (iVar2 < 0) {
      iVar15 = (int)*(char *)((longlong)piVar3 + 0x1d);
    }
    else {
      iVar15 = (int)(short)piVar3[10];
    }
    if (iVar2 < 0) {
      uVar10 = (uint)*(ushort *)(piVar3 + 5);
    }
    else {
      uVar10 = piVar3[5];
    }
    if (iVar2 < 0) {
      uVar16 = (uint)*(ushort *)((longlong)piVar3 + 0x16);
    }
    else {
      uVar16 = piVar3[6];
    }
    if (iVar2 < 0) {
      *(char *)((longlong)piVar3 + 0x1d) = (char)(int)((float)iVar15 * param_2);
    }
    else {
      *(short *)(piVar3 + 10) = (short)(int)((float)iVar15 * param_2);
    }
    if (iVar2 < 0) {
      *(short *)(piVar3 + 5) = (short)(int)((float)(int)uVar10 * param_2);
      *(short *)((longlong)piVar3 + 0x16) = (short)(int)((float)(int)uVar16 * param_2);
    }
    else {
      piVar3[5] = (int)((float)(int)uVar10 * param_2);
      piVar3[6] = (int)((float)(int)uVar16 * param_2);
    }
    bVar4 = (byte)((uint)*piVar3 >> 0x18);
    if (*piVar3 < 0) {
      uVar7 = *(ushort *)((longlong)piVar3 + 0x1a);
    }
    else {
      uVar7 = *(ushort *)((longlong)piVar3 + 0x26);
    }
    bVar13 = -((char)bVar4 >> 7);
    uVar8 = (undefined2)(longlong)((float)uVar7 * param_2);
    if ((bVar4 >> 7 & bVar13) == 0) {
      *(undefined2 *)((longlong)piVar3 + 0x26) = uVar8;
    }
    else {
      *(undefined2 *)((longlong)piVar3 + 0x1a) = uVar8;
    }
    lVar11 = 0x2a;
    if (bVar13 != 0) {
      lVar11 = 0x1e;
    }
    piVar3[3] = (int)((float)piVar3[3] * param_2);
    piVar3[4] = (int)((float)piVar3[4] * param_2);
    if (bVar13 == 0) {
      uVar12 = (ulonglong)(uint)piVar3[1];
    }
    else {
      uVar12 = (ulonglong)*(byte *)(piVar3 + 7);
    }
    local_f8 = (longlong)piVar3 + uVar12 * 8 + 7 + lVar11 & 0xfffffffffffffff8;
    if (bVar13 == 0) {
      uVar12 = (ulonglong)(uint)piVar3[1];
    }
    else {
      uVar12 = (ulonglong)*(byte *)(piVar3 + 7);
    }
    local_f0 = 0;
    local_88 = ZEXT416(0);
    local_e8 = 0;
    local_e0 = 0;
    lVar11 = 0x2a;
    if (bVar13 != 0) {
      lVar11 = 0x1e;
    }
    local_d8 = 0xffffffffffffffff;
    local_108 = (longlong)piVar3 + lVar11;
    local_d0 = 0;
    local_c8 = 0xffffffffffffffff;
    local_c0 = 0;
    local_b8 = 0;
    local_100 = local_108 + uVar12 * 8;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_78 = 0;
    FUN_1433f2020(&local_108);
    while ((local_108 != 0 && (local_108 < local_100))) {
      uVar10 = (uint)*(ushort *)(local_108 + 2);
      if ((*(byte *)(local_108 + 6) >> 6 & 1) != 0) {
        uVar10 = -(uint)*(ushort *)(local_108 + 2);
      }
      uVar10 = (uint)((float)(int)uVar10 * param_2);
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f);
        *(ushort *)(local_108 + 6) = *(ushort *)(local_108 + 6) | 0x40;
      }
      else {
        *(ushort *)(local_108 + 6) = *(ushort *)(local_108 + 6) & 0xffbf;
      }
      uVar7 = *(ushort *)(local_108 + 4);
      uVar14 = *(ushort *)(local_108 + 6);
      *(short *)(local_108 + 2) = (short)uVar10;
      fVar18 = (float)(uVar7 & 0xfff);
      if ((uVar14 & 0x10) != 0) {
        fVar18 = fVar18 * 0.0625;
      }
      fVar18 = fVar18 * param_2;
      if ((256.0 <= fVar18) ||
         (uVar9 = (ushort)(longlong)(fVar18 * 16.0), ((longlong)(fVar18 * 16.0) & 0xfU) == 0)) {
        uVar14 = uVar14 & 0xffef;
        uVar9 = (ushort)(longlong)fVar18;
      }
      else {
        uVar14 = uVar14 | 0x10;
      }
      *(ushort *)(local_108 + 6) = uVar14;
      *(ushort *)(local_108 + 4) = (uVar9 ^ uVar7) & 0xfff ^ uVar7;
      if (local_108 == 0) break;
      if (local_108 < local_100) {
        uVar10 = local_78._4_4_;
        if (local_78._4_4_ == 0) {
          uVar7 = *(ushort *)(local_108 + 4) >> 0xc;
          uVar10 = (uint)uVar7;
          local_78 = (ulonglong)CONCAT24(uVar7,(undefined4)local_78);
        }
        uVar12 = local_108 + 8;
        puVar1 = (ushort *)(local_108 + 0xc);
        local_108 = uVar12;
        if ((((*puVar1 & 0xf000) != 0) && (uVar10 != 0)) &&
           (cVar6 = FUN_1433f0e90(&local_f0), cVar6 == '\0')) {
          Scaleform::Render::Text::HighlighterPosIterator::operator+=(&local_f0,local_78._4_4_);
          local_78 = local_78 & 0xffffffff;
        }
        FUN_1433f2020(&local_108);
      }
    }
    if ((RefCountNTSImpl *)local_88._8_8_ != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)local_88._8_8_);
    }
    if ((RefCountImpl *)local_88._0_8_ != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release((RefCountImpl *)local_88._0_8_);
    }
    if (uVar17 < (ulonglong)param_1[1]) {
      uVar17 = (ulonglong)((int)uVar17 + 1);
    }
  } while( true );
}



// FUNCTION 1433f3db0 FUN_1433f3db0 body=90 status=ok
// SIG undefined FUN_1433f3db0(void)

uint FUN_1433f3db0(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  
  if ((int)param_1[1] != 0) {
    uVar4 = 0;
    uVar2 = 0x7fffffff;
    while ((uVar5 = uVar2, iVar3 = (int)uVar4, uVar4 < (ulonglong)param_1[1] && (-1 < iVar3))) {
      piVar1 = *(int **)(*param_1 + uVar4 * 8);
      if (*piVar1 < 0) {
        uVar4 = (ulonglong)(iVar3 + 1);
        uVar2 = (uint)*(ushort *)((longlong)piVar1 + 0x16);
        if ((int)uVar5 <= (int)(uint)*(ushort *)((longlong)piVar1 + 0x16)) {
          uVar2 = uVar5;
        }
      }
      else {
        uVar4 = (ulonglong)(iVar3 + 1);
        uVar2 = piVar1[6];
        if ((int)uVar5 <= piVar1[6]) {
          uVar2 = uVar5;
        }
      }
    }
    return uVar5;
  }
  return 0;
}



// FUNCTION 1433f3e10 FUN_1433f3e10 body=478 status=ok
// SIG undefined FUN_1433f3e10(void)

RefCountImpl * FUN_1433f3e10(longlong *param_1)

{
  ushort *puVar1;
  int iVar2;
  ulonglong uVar3;
  int *piVar4;
  RefCountImpl *pRVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
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
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_40;
  RefCountImpl *local_38;
  RefCountNTSImpl *pRStack_30;
  undefined4 local_28;
  uint uStack_24;
  
  uVar3 = param_1[1];
  uVar9 = 0;
  if (uVar3 != 0) {
    do {
      piVar4 = *(int **)(*param_1 + uVar9 * 8);
      iVar2 = *piVar4;
      lVar7 = 0x2a;
      if (iVar2 < 0) {
        lVar7 = 0x1e;
      }
      if (iVar2 < 0) {
        uVar8 = (ulonglong)*(byte *)(piVar4 + 7);
      }
      else {
        uVar8 = (ulonglong)(uint)piVar4[1];
      }
      local_a8 = (longlong)piVar4 + uVar8 * 8 + lVar7 + 7 & 0xfffffffffffffff8;
      if (iVar2 < 0) {
        uVar10 = (uint)*(byte *)(piVar4 + 7);
      }
      else {
        uVar10 = piVar4[1];
      }
      local_a0 = 0;
      local_98 = 0;
      lVar7 = 0x2a;
      if (iVar2 < 0) {
        lVar7 = 0x1e;
      }
      local_90 = 0;
      local_88 = 0xffffffffffffffff;
      local_80 = 0;
      local_78 = 0xffffffffffffffff;
      local_b0 = (longlong)piVar4 + lVar7 + (ulonglong)uVar10 * 8;
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      local_38 = (RefCountImpl *)0x0;
      pRStack_30 = (RefCountNTSImpl *)0x0;
      local_28 = 0;
      uStack_24 = 0;
      local_b8 = (longlong)piVar4 + lVar7;
      while ((FUN_1433f2020(&local_b8), pRVar5 = local_38, local_b8 != 0 && (local_b8 < local_b0)))
      {
        if ((*(ushort *)(local_b8 + 6) >> 0xd & 1) != 0) {
          if (pRStack_30 != (RefCountNTSImpl *)0x0) {
            Scaleform::RefCountNTSImpl::Release(pRStack_30);
          }
          if (local_38 == (RefCountImpl *)0x0) {
            return pRVar5;
          }
          Scaleform::RefCountImpl::Release(local_38);
          return pRVar5;
        }
        if (uStack_24 == 0) {
          uStack_24 = (uint)(*(ushort *)(local_b8 + 4) >> 0xc);
        }
        uVar8 = local_b8 + 8;
        puVar1 = (ushort *)(local_b8 + 0xc);
        local_b8 = uVar8;
        if ((((*puVar1 & 0xf000) != 0) && (uStack_24 != 0)) &&
           (cVar6 = FUN_1433f0e90(&local_a0), cVar6 == '\0')) {
          Scaleform::Render::Text::HighlighterPosIterator::operator+=(&local_a0,uStack_24);
          uStack_24 = 0;
        }
      }
      if (pRStack_30 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(pRStack_30);
      }
      if (local_38 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(local_38);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar3);
  }
  return (RefCountImpl *)0x0;
}



// FUNCTION 1433f4000 FUN_1433f4000 body=132 status=ok
// SIG undefined FUN_1433f4000(void)

void FUN_1433f4000(undefined8 param_1,uint param_2,int param_3)

{
  uint *puVar1;
  
  puVar1 = (uint *)(**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,param_2,0);
  *puVar1 = *puVar1 & 0xf8000000;
  *puVar1 = *puVar1 | param_2 & 0x7ffffff;
  if (param_3 == 0) {
    *puVar1 = *puVar1 & 0x7ffffff | 0xc0000000;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1a) = 0;
    return;
  }
  *puVar1 = *puVar1 & 0x7ffffff | 0x40000000;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined4 *)((longlong)puVar1 + 0x26) = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[8] = 0;
  return;
}



// FUNCTION 1433f4090 FreeLine body=43 status=ok
// SIG undefined FreeLine(void)

void Scaleform::Render::Text::LineBuffer::TextLineAllocator::FreeLine
               (undefined8 param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_1433f2300(param_2);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_2);
  }
  return;
}



// FUNCTION 1433f40d0 LoadTextFieldParamFromTextFilter body=200 status=ok
// SIG undefined LoadTextFieldParamFromTextFilter(void)

void Scaleform::Render::Text::LoadTextFieldParamFromTextFilter(longlong param_1,longlong param_2)

{
  *(short *)(param_1 + 0xe) = (short)(longlong)(*(float *)(param_2 + 0x10) * 16.0 + 0.5);
  *(short *)(param_1 + 0x10) = (short)(longlong)(*(float *)(param_2 + 0x14) * 16.0 + 0.5);
  *(undefined2 *)(param_1 + 0xc) = 0x80;
  *(short *)(param_1 + 0x12) = (short)(longlong)(*(float *)(param_2 + 0x18) * 16.0 + 0.5);
  if ((*(byte *)(param_2 + 0x50) & 1) == 0) {
    *(ushort *)(param_1 + 0x24) = *(ushort *)(param_2 + 0x50) & 0xfffe;
    *(short *)(param_1 + 0x26) = (short)(longlong)(*(float *)(param_2 + 0x28) * 16.0 + 0.5);
    *(short *)(param_1 + 0x28) = (short)(longlong)(*(float *)(param_2 + 0x28) * 16.0 + 0.5);
    *(short *)(param_1 + 0x2a) = (short)(longlong)(*(float *)(param_2 + 0x38) * 16.0 + 0.5);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x3c);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x34);
  }
  return;
}



// FUNCTION 1433f41a0 FUN_1433f41a0 body=196 status=ok
// SIG undefined FUN_1433f41a0(void)

void FUN_1433f41a0(float *param_1,float *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = param_2[1];
  fVar4 = *param_2;
  fVar2 = 1.0;
  param_1[3] = fVar5 * param_1[1] + fVar4 * *param_1 + param_1[3];
  fVar1 = 1.0;
  param_1[7] = fVar4 * param_1[4] + fVar5 * param_1[5] + param_1[7];
  fVar4 = param_2[2] - *param_2;
  fVar5 = fVar4;
  if (32767.0 < fVar4) {
    fVar5 = 32767.0;
    fVar1 = fVar4 / 32767.0;
  }
  fVar3 = param_2[3] - param_2[1];
  fVar4 = fVar3;
  if (32767.0 < fVar3) {
    fVar4 = 32767.0;
    fVar2 = fVar3 / 32767.0;
  }
  FUN_1432cc8f0(0x46fffe00,fVar1,fVar2);
  *param_3 = 0;
  *(float *)(param_3 + 1) = fVar5 + 0.0;
  *(float *)((longlong)param_3 + 0xc) = fVar4 + 0.0;
  return;
}



// FUNCTION 1433f4270 FUN_1433f4270 body=126 status=ok
// SIG undefined FUN_1433f4270(void)

longlong * FUN_1433f4270(longlong *param_1,longlong param_2,uint param_3,longlong param_4)

{
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[6] = -1;
  param_1[8] = -1;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *param_1 = param_2;
  param_1[2] = param_4;
  param_1[1] = param_2 + (ulonglong)param_3 * 8;
  FUN_1433f2020(param_1);
  return param_1;
}



// FUNCTION 1433f42f0 FUN_1433f42f0 body=302 status=ok
// SIG undefined FUN_1433f42f0(void)

longlong *
FUN_1433f42f0(longlong *param_1,longlong param_2,ulonglong param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  undefined1 local_68 [96];
  
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = -1;
  param_1[7] = 0;
  param_1[8] = -1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  plVar1 = (longlong *)FUN_1433f1680(param_5,local_68,param_6,0xffffffffffffffff);
  param_1[3] = *plVar1;
  param_1[4] = plVar1[1];
  param_1[5] = plVar1[2];
  param_1[6] = plVar1[3];
  param_1[7] = plVar1[4];
  param_1[8] = plVar1[5];
  param_1[9] = plVar1[6];
  param_1[10] = plVar1[7];
  *(int *)(param_1 + 0xb) = (int)plVar1[8];
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)plVar1 + 0x44);
  *(int *)(param_1 + 0xc) = (int)plVar1[9];
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)plVar1 + 0x4c);
  *(char *)(param_1 + 0xd) = (char)plVar1[10];
  param_1[1] = param_2 + (param_3 & 0xffffffff) * 8;
  *param_1 = param_2;
  param_1[2] = param_4;
  FUN_1433f2020(param_1);
  return param_1;
}



// FUNCTION 1433f4420 FUN_1433f4420 body=299 status=ok
// SIG undefined FUN_1433f4420(void)

undefined8 FUN_1433f4420(int *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_3 == 0) {
    iVar1 = *param_1;
    lVar3 = 0x31;
    if (iVar1 < 0) {
      lVar3 = 0x25;
    }
    if (iVar1 < 0) {
      uVar2 = (ulonglong)*(byte *)(param_1 + 7);
    }
    else {
      uVar2 = (ulonglong)(uint)param_1[1];
    }
    if (iVar1 < 0) {
      uVar5 = (uint)*(byte *)(param_1 + 7);
    }
    else {
      uVar5 = param_1[1];
    }
    lVar4 = 0x2a;
    if (iVar1 < 0) {
      lVar4 = 0x1e;
    }
    FUN_1433f4270(param_2,lVar4 + (longlong)param_1,uVar5,
                  lVar3 + uVar2 * 8 + (longlong)param_1 & 0xfffffffffffffff8);
    return param_2;
  }
  iVar1 = *param_1;
  uVar5 = param_1[2];
  if ((iVar1 < 0) && (uVar5 = uVar5 & 0xffffff, uVar5 == 0xffffff)) {
    uVar5 = 0xffffffff;
  }
  lVar3 = 0x31;
  if (iVar1 < 0) {
    lVar3 = 0x25;
    uVar2 = (ulonglong)*(byte *)(param_1 + 7);
  }
  else {
    uVar2 = (ulonglong)(uint)param_1[1];
  }
  if (iVar1 < 0) {
    uVar6 = (uint)*(byte *)(param_1 + 7);
  }
  else {
    uVar6 = param_1[1];
  }
  lVar4 = 0x2a;
  if (iVar1 < 0) {
    lVar4 = 0x1e;
  }
  FUN_1433f42f0(param_2,lVar4 + (longlong)param_1,uVar6,
                lVar3 + uVar2 * 8 + (longlong)param_1 & 0xfffffffffffffff8,param_3,uVar5);
  return param_2;
}



// FUNCTION 1433f4550 FUN_1433f4550 body=39 status=ok
// SIG undefined FUN_1433f4550(void)

void FUN_1433f4550(int *param_1)

{
  if (*param_1 < 0) {
    return;
  }
  return;
}



// FUNCTION 1433f4580 GetHeight body=18 status=ok
// SIG undefined GetHeight(void)

uint Scaleform::Render::Text::LineBuffer::Line::GetHeight(int *param_1)

{
  if (*param_1 < 0) {
    return (uint)*(ushort *)((longlong)param_1 + 0x16);
  }
  return param_1[6];
}



// FUNCTION 1433f45a0 GetNonNegLeading body=35 status=ok
// SIG undefined GetNonNegLeading(void)

int Scaleform::Render::Text::LineBuffer::Line::GetNonNegLeading(int *param_1)

{
  if (*param_1 < 0) {
    if ('\0' < *(char *)((longlong)param_1 + 0x1d)) {
      return (int)*(char *)((longlong)param_1 + 0x1d);
    }
  }
  else if (0 < (short)param_1[10]) {
    return (int)(short)param_1[10];
  }
  return 0;
}



// FUNCTION 1433f45d0 NodeData body=60 status=ok
// SIG undefined NodeData(void)

undefined8 * Scaleform::Render::TreeText::NodeData::NodeData(undefined8 *param_1)

{
  FUN_1432ef4d0(param_1,5);
  *param_1 = &PTR_FUN_145b06a50;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  return param_1;
}



// FUNCTION 1433f4620 FUN_1433f4620 body=135 status=ok
// SIG undefined FUN_1433f4620(void)

undefined8 * FUN_1433f4620(undefined8 *param_1,longlong param_2)

{
  RefCountImpl *pRVar1;
  
  FUN_143364310();
  *param_1 = &PTR_FUN_145b06a50;
  pRVar1 = *(RefCountImpl **)(param_2 + 0x90);
  if (pRVar1 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(pRVar1);
  }
  param_1[0x12] = *(undefined8 *)(param_2 + 0x90);
  pRVar1 = *(RefCountImpl **)(param_2 + 0x98);
  if (pRVar1 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(pRVar1);
  }
  param_1[0x13] = *(undefined8 *)(param_2 + 0x98);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0xa0);
  return param_1;
}



// FUNCTION 1433f46b0 FUN_1433f46b0 body=82 status=ok
// SIG undefined FUN_1433f46b0(void)

void FUN_1433f46b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145b06a50;
  if ((RefCountImpl *)param_1[0x13] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0x13]);
  }
  if ((RefCountImpl *)param_1[0x12] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0x12]);
  }
  if (param_1[8] != 0) {
    FUN_143320fc0(param_1 + 8);
  }
  FUN_1432cd280(param_1);
  return;
}



// FUNCTION 1433f4710 FUN_1433f4710 body=624 status=ok
// SIG undefined FUN_1433f4710(void)

ulonglong FUN_1433f4710(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  Matrix2x4<float> *this;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong uVar4;
  undefined4 local_res8 [2];
  undefined8 local_838;
  undefined8 uStack_830;
  float local_828 [4];
  undefined8 local_818;
  undefined8 uStack_810;
  undefined1 local_808 [2032];
  
  local_838 = 0;
  uStack_830 = 0;
  local_828[0] = 0.0;
  local_828[1] = 0.0;
  local_828[2] = 0.0;
  local_828[3] = 0.0;
  local_818 = 0;
  uStack_810 = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    if ((*(byte *)(*(longlong *)(param_1 + 0x90) + 0x15b) & 3) != 0) {
      FUN_1433fcba0();
    }
    if ((*(byte *)(param_1 + 0xa0) & 1) != 0) {
      FUN_1433efc00(local_808,DAT_146b62f28);
      FUN_1433fdd50(*(undefined8 *)(param_1 + 0x90),local_808);
      lVar1 = FUN_1432cd080(param_2,0x400);
      local_res8[0] = 0x4a;
      lVar2 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0xc0,local_res8);
      if (lVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_1433f01a0(lVar2,local_808);
      }
      if (*(RefCountImpl **)(lVar1 + 0x98) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar1 + 0x98));
      }
      *(undefined8 *)(lVar1 + 0x98) = uVar3;
      *(byte *)(lVar1 + 0xa0) = *(byte *)(lVar1 + 0xa0) & 0xfe;
      FUN_1433a5df0(local_808);
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x98);
  uVar4 = 0;
  if (lVar1 != 0) {
    uStack_810 = *(undefined8 *)(lVar1 + 0x58);
    uStack_830 = *(undefined8 *)(lVar1 + 0x58);
    local_818 = *(undefined8 *)(lVar1 + 0x50);
    local_838 = *(undefined8 *)(lVar1 + 0x50);
    FUN_143361900(param_1,&local_838,0);
    if ((*(ushort *)(param_1 + 10) >> 9 & 1) == 0) {
      this = (Matrix2x4<float> *)FUN_1433620e0(param_1);
      Scaleform::Render::Matrix2x4<float>::EncloseTransform
                (this,(Rect<float> *)local_828,(Rect<float> *)&local_838);
      uVar4 = extraout_RAX;
    }
    else {
      Scaleform::Render::Matrix3x4<float>::EncloseTransform
                ((Matrix3x4<float> *)(param_1 + 0x10),(Rect<float> *)local_828,
                 (Rect<float> *)&local_838);
      uVar4 = extraout_RAX_00;
    }
  }
  if ((((((float)local_838 == *(float *)(param_1 + 0x70)) &&
        ((float)uStack_830 == *(float *)(param_1 + 0x78))) &&
       (local_838._4_4_ == *(float *)(param_1 + 0x74))) &&
      ((uStack_830._4_4_ == *(float *)(param_1 + 0x7c) && (local_828[0] == (float)local_838)))) &&
     ((local_828[2] == (float)uStack_830 &&
      ((local_828[1] == local_838._4_4_ && (local_828[3] == uStack_830._4_4_)))))) {
    return uVar4 & 0xffffffffffffff00;
  }
  lVar1 = FUN_1432cd080(param_2,8);
  *(undefined8 *)(lVar1 + 0x70) = local_838;
  *(undefined8 *)(lVar1 + 0x78) = uStack_830;
  *(float *)(lVar1 + 0x80) = local_828[0];
  *(float *)(lVar1 + 0x84) = local_828[1];
  *(float *)(lVar1 + 0x88) = local_828[2];
  *(float *)(lVar1 + 0x8c) = local_828[3];
  FUN_143361f40(lVar1,&local_818);
  return (ulonglong)(*(byte *)(param_1 + 10) & 1);
}



// FUNCTION 1433f4990 FUN_1433f4990 body=303 status=ok
// SIG undefined FUN_1433f4990(void)

longlong FUN_1433f4990(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                      longlong param_5,undefined2 param_6)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  char cVar7;
  ushort uVar8;
  
  lVar3 = param_5;
  lVar5 = *(longlong *)(param_5 + 0x28);
  if (lVar5 == 0) {
    uVar1 = *(ushort *)(param_1 + 10);
    uVar2 = *(ushort *)(param_3 + 0x4a);
    uVar8 = 0;
    lVar5 = param_3;
    do {
      cVar7 = (char)uVar8;
      if (cVar7 != '\0') break;
      lVar4 = FUN_1432cd220(*(undefined8 *)(lVar5 + 0x28));
      lVar5 = *(longlong *)(lVar5 + 0x30);
      uVar8 = *(ushort *)(lVar4 + 10) >> 9 & 0xff01;
      cVar7 = (char)uVar8;
    } while (lVar5 != 0);
    param_5._0_4_ = 0x47;
    lVar5 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_3,0x1c0,&param_5);
    if (lVar5 != 0) {
      uVar6 = (**(code **)(*param_2 + 0xe0))(param_2);
      lVar5 = FUN_143404870(lVar5,lVar3,uVar6,
                            -(ushort)(cVar7 != '\0') & 0x200 |
                            (uVar1 & 0x20) * 2 | uVar2 & 0xc0 | uVar1 & 0x21);
      if (lVar5 != 0) {
        *(longlong *)(lVar3 + 0x28) = lVar5;
        goto LAB_1433f4a78;
      }
    }
    lVar5 = 0;
  }
  else {
LAB_1433f4a78:
    FUN_14334e060(lVar5,param_2,param_3,param_4,param_1,param_6);
  }
  return lVar5;
}



// FUNCTION 1433f4ad0 FUN_1433f4ad0 body=83 status=ok
// SIG undefined FUN_1433f4ad0(void)

void FUN_1433f4ad0(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)*param_2 + 0x50))((longlong *)*param_2,0xb0,0);
  if (lVar1 != 0) {
    FUN_1433f4620(lVar1,param_1);
  }
  FUN_1432ceba0(param_2,lVar1);
  return;
}



// FUNCTION 1433f4b30 FUN_1433f4b30 body=148 status=ok
// SIG undefined FUN_1433f4b30(void)

void FUN_1433f4b30(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_res8 [2];
  
  lVar1 = FUN_1432cd080(param_1,0x400);
  local_res8[0] = 0x4a;
  lVar2 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0xc0,local_res8);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_1433f01a0(lVar2,param_2);
  }
  if (*(RefCountImpl **)(lVar1 + 0x98) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar1 + 0x98));
  }
  *(undefined8 *)(lVar1 + 0x98) = uVar3;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_1432ccff0(param_1);
  }
  return;
}



// FUNCTION 1433f4bd0 FUN_1433f4bd0 body=21 status=ok
// SIG undefined FUN_1433f4bd0(void)

undefined8 FUN_1433f4bd0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1432cd1e0();
  return *(undefined8 *)(lVar1 + 0x90);
}



// FUNCTION 1433f4bf0 FUN_1433f4bf0 body=394 status=ok
// SIG undefined FUN_1433f4bf0(void)

void FUN_1433f4bf0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68 [80];
  
  lVar2 = FUN_1432cd080(param_1,0x400);
  if (*(longlong *)(lVar2 + 0x90) == 0) {
    local_98[0] = 0x4a;
    lVar3 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x160,local_98);
    uVar4 = 0;
    if (lVar3 != 0) {
      uVar4 = FUN_1433fbc20(lVar3,param_2,param_3,param_4);
    }
    if (*(RefCountImpl **)(lVar2 + 0x90) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar2 + 0x90));
    }
    *(undefined8 *)(lVar2 + 0x90) = uVar4;
    uVar4 = (**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
    FUN_1433dd540(local_68,uVar4);
    FUN_1433debc0(local_68);
    FUN_1433e69f0(*(undefined8 *)(*(longlong *)(lVar2 + 0x90) + 0x10),local_68);
    local_90 = 0;
    local_88 = 1;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    FUN_1433df690(&local_90);
    FUN_1433e6ac0(*(undefined8 *)(*(longlong *)(lVar2 + 0x90) + 0x10),&local_90);
    lVar2 = FUN_1432cd1e0(param_1);
    if (*(longlong *)(lVar2 + 0x90) != 0) {
      pbVar1 = (byte *)(*(longlong *)(lVar2 + 0x90) + 0x158);
      *pbVar1 = *pbVar1 & 0xbf;
    }
    lVar2 = FUN_1432cd080(param_1,0x400);
    *(byte *)(lVar2 + 0xa0) = *(byte *)(lVar2 + 0xa0) | 1;
    if (*(longlong *)(param_1 + 0x38) == 0) {
      FUN_1432ccff0(param_1);
    }
    FUN_1433dedf0(&local_90);
    FUN_1433dd700(local_68);
  }
  return;
}



// FUNCTION 1433f4d80 Init body=74 status=ok
// SIG undefined Init(void)

void Scaleform::Render::TreeText::Init(undefined8 param_1,RefCountImpl *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1432cd080(param_1,0x400);
  if (param_2 != (RefCountImpl *)0x0) {
    RefCountImpl::AddRef(param_2);
  }
  if (*(RefCountImpl **)(lVar1 + 0x90) != (RefCountImpl *)0x0) {
    RefCountImpl::Release(*(RefCountImpl **)(lVar1 + 0x90));
  }
  *(RefCountImpl **)(lVar1 + 0x90) = param_2;
  return;
}



// FUNCTION 1433f4dd0 FUN_1433f4dd0 body=93 status=ok
// SIG undefined FUN_1433f4dd0(void)

void FUN_1433f4dd0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1432cd1e0();
  if (*(longlong *)(lVar1 + 0x90) != 0) {
    FUN_1433fb830(*(longlong *)(lVar1 + 0x90),param_2,1);
  }
  lVar1 = FUN_1432cd080(param_1,0x400);
  *(byte *)(lVar1 + 0xa0) = *(byte *)(lVar1 + 0xa0) | 1;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_1432ccff0(param_1);
  }
  return;
}



// FUNCTION 1433f4e40 FUN_1433f4e40 body=80 status=ok
// SIG undefined FUN_1433f4e40(void)

undefined8 * FUN_1433f4e40(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  
  lVar2 = FUN_1432cd1e0();
  if (*(longlong *)(lVar2 + 0x90) != 0) {
    puVar3 = (undefined4 *)Scaleform::Render::Text::DocView::GetViewRect();
    *(undefined4 *)param_2 = *puVar3;
    *(undefined4 *)((longlong)param_2 + 4) = puVar3[1];
    uVar1 = puVar3[2];
    *(undefined4 *)((longlong)param_2 + 0xc) = puVar3[3];
    *(undefined4 *)(param_2 + 1) = uVar1;
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1433f4ea0 FUN_1433f4ea0 body=84 status=ok
// SIG undefined FUN_1433f4ea0(void)

void FUN_1433f4ea0(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  uVar1 = *param_2;
  lVar2 = FUN_1432cd1e0();
  if (*(longlong *)(lVar2 + 0x90) != 0) {
    *(undefined4 *)(*(longlong *)(lVar2 + 0x90) + 0x148) = uVar1;
  }
  lVar2 = FUN_1432cd080(param_1,0x400);
  *(byte *)(lVar2 + 0xa0) = *(byte *)(lVar2 + 0xa0) | 1;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_1432ccff0(param_1);
  }
  return;
}



// FUNCTION 1433f4f00 FUN_1433f4f00 body=84 status=ok
// SIG undefined FUN_1433f4f00(void)

void FUN_1433f4f00(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1432cd1e0();
  if (*(longlong *)(lVar1 + 0x90) != 0) {
    *(undefined4 *)(*(longlong *)(lVar1 + 0x90) + 0x148) = param_2;
  }
  lVar1 = FUN_1432cd080(param_1,0x400);
  *(byte *)(lVar1 + 0xa0) = *(byte *)(lVar1 + 0xa0) | 1;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_1432ccff0(param_1);
  }
  return;
}



// FUNCTION 1433f4f60 FUN_1433f4f60 body=58 status=ok
// SIG undefined FUN_1433f4f60(void)

undefined4 * FUN_1433f4f60(undefined8 param_1,undefined4 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1432cd1e0();
  if (*(longlong *)(lVar1 + 0x90) != 0) {
    *param_2 = *(undefined4 *)(*(longlong *)(lVar1 + 0x90) + 0x148);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1433f4fa0 FUN_1433f4fa0 body=84 status=ok
// SIG undefined FUN_1433f4fa0(void)

void FUN_1433f4fa0(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  uVar1 = *param_2;
  lVar2 = FUN_1432cd1e0();
  if (*(longlong *)(lVar2 + 0x90) != 0) {
    *(undefined4 *)(*(longlong *)(lVar2 + 0x90) + 0x14c) = uVar1;
  }
  lVar2 = FUN_1432cd080(param_1,0x400);
  *(byte *)(lVar2 + 0xa0) = *(byte *)(lVar2 + 0xa0) | 1;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_1432ccff0(param_1);
  }
  return;
}



// FUNCTION 1433f5000 FUN_1433f5000 body=84 status=ok
// SIG undefined FUN_1433f5000(void)

void FUN_1433f5000(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1432cd1e0();
  if (*(longlong *)(lVar1 + 0x90) != 0) {
    *(undefined4 *)(*(longlong *)(lVar1 + 0x90) + 0x14c) = param_2;
  }
  lVar1 = FUN_1432cd080(param_1,0x400);
  *(byte *)(lVar1 + 0xa0) = *(byte *)(lVar1 + 0xa0) | 1;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_1432ccff0(param_1);
  }
  return;
}



// FUNCTION 1433f5060 FUN_1433f5060 body=58 status=ok
// SIG undefined FUN_1433f5060(void)

undefined4 * FUN_1433f5060(undefined8 param_1,undefined4 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1432cd1e0();
  if (*(longlong *)(lVar1 + 0x90) != 0) {
    *param_2 = *(undefined4 *)(*(longlong *)(lVar1 + 0x90) + 0x14c);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1433f50a0 FUN_1433f50a0 body=261 status=ok
// SIG undefined FUN_1433f50a0(void)

void FUN_1433f50a0(longlong param_1,int param_2)

{
  short sVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined2 local_38;
  ushort local_36;
  undefined1 local_30 [40];
  
  lVar2 = FUN_1432cd1e0();
  if (*(longlong *)(lVar2 + 0x90) != 0) {
    sVar1 = 0;
    if (param_2 == 1) {
      sVar1 = 1;
    }
    else if (param_2 == 2) {
      sVar1 = 3;
    }
    else if (param_2 == 3) {
      sVar1 = 2;
    }
    local_58 = 0;
    local_36 = sVar1 << 9 | 1;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_50 = 1;
    Scaleform::Render::Text::DocView::SetParagraphFormat
              (*(longlong *)(lVar2 + 0x90),&local_58,0,0xffffffffffffffff);
    lVar2 = *(longlong *)(lVar2 + 0x90);
    uVar3 = FUN_1433deff0(*(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 0x30),local_30,&local_58);
    FUN_1433e6ac0(*(undefined8 *)(lVar2 + 0x10),uVar3);
    FUN_1433dedf0(local_30);
    FUN_1433dedf0(&local_58);
  }
  lVar2 = FUN_1432cd080(param_1,0x400);
  *(byte *)(lVar2 + 0xa0) = *(byte *)(lVar2 + 0xa0) | 1;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_1432ccff0(param_1);
  }
  return;
}



// FUNCTION 1433f51b0 FUN_1433f51b0 body=170 status=ok
// SIG undefined FUN_1433f51b0(void)

undefined4 FUN_1433f51b0(void)

{
  longlong lVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  lVar1 = FUN_1432cd1e0();
  if (*(longlong *)(lVar1 + 0x90) != 0) {
    local_30 = 1;
    local_38 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    FUN_1433e6310(*(undefined8 *)(*(longlong *)(lVar1 + 0x90) + 0x10),0,&local_38,0,
                  0xffffffffffffffff);
    uVar3 = 0;
    if ((local_18 & 0x10000) != 0) {
      uVar2 = local_18._2_2_ >> 9 & 3;
      uVar3 = 1;
      if (uVar2 != 1) {
        if (uVar2 == 2) {
          uVar3 = 3;
        }
        else {
          uVar3 = 0;
          if (uVar2 == 3) {
            uVar3 = 2;
          }
        }
      }
    }
    FUN_1433dedf0(&local_38);
    return uVar3;
  }
  return 0;
}



// FUNCTION 1433f5260 FUN_1433f5260 body=132 status=ok
// SIG undefined FUN_1433f5260(void)

void FUN_1433f5260(longlong param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_1432cd1e0();
  lVar2 = *(longlong *)(lVar2 + 0x90);
  if (lVar2 != 0) {
    if (param_2 == 1) {
      cVar1 = '\x03';
    }
    else if (param_2 == 2) {
      cVar1 = '\x02';
    }
    else {
      cVar1 = '\x01';
    }
    *(byte *)(lVar2 + 0x159) = *(byte *)(lVar2 + 0x159) & 0xf3;
    *(byte *)(lVar2 + 0x159) = *(byte *)(lVar2 + 0x159) | cVar1 << 2;
    *(byte *)(lVar2 + 0x15b) = *(byte *)(lVar2 + 0x15b) | 1;
  }
  lVar2 = FUN_1432cd080(param_1,0x400);
  *(byte *)(lVar2 + 0xa0) = *(byte *)(lVar2 + 0xa0) | 1;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_1432ccff0(param_1);
  }
  return;
}



// FUNCTION 1433f52f0 FUN_1433f52f0 body=68 status=ok
// SIG undefined FUN_1433f52f0(void)

undefined8 FUN_1433f52f0(void)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = FUN_1432cd1e0();
  if (*(longlong *)(lVar1 + 0x90) != 0) {
    bVar2 = *(byte *)(*(longlong *)(lVar1 + 0x90) + 0x159) >> 2 & 3;
    if (bVar2 == 2) {
      return 2;
    }
    if (bVar2 == 3) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1433f5340 FUN_1433f5340 body=103 status=ok
// SIG undefined FUN_1433f5340(void)

void FUN_1433f5340(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1432cd1e0();
  if (*(longlong *)(lVar1 + 0x90) != 0) {
    Scaleform::Render::Text::DocView::SetText(*(longlong *)(lVar1 + 0x90),param_2,param_3);
  }
  lVar1 = FUN_1432cd080(param_1,0x400);
  *(byte *)(lVar1 + 0xa0) = *(byte *)(lVar1 + 0xa0) | 1;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_1432ccff0(param_1);
  }
  return;
}



// FUNCTION 1433f53b0 FUN_1433f53b0 body=103 status=ok
// SIG undefined FUN_1433f53b0(void)

void FUN_1433f53b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1432cd1e0();
  if (*(longlong *)(lVar1 + 0x90) != 0) {
    Scaleform::Render::Text::DocView::SetText(*(longlong *)(lVar1 + 0x90),param_2,param_3);
  }
  lVar1 = FUN_1432cd080(param_1,0x400);
  *(byte *)(lVar1 + 0xa0) = *(byte *)(lVar1 + 0xa0) | 1;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_1432ccff0(param_1);
  }
  return;
}



// FUNCTION 1433f5420 FUN_1433f5420 body=135 status=ok
// SIG undefined FUN_1433f5420(void)

void FUN_1433f5420(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_1432cd1e0();
  lVar2 = *(longlong *)(lVar2 + 0x90);
  if (lVar2 != 0) {
    uVar1 = *param_2;
    uVar3 = FUN_1432c3580(param_2);
    Scaleform::Render::Text::DocView::SetText(lVar2,(uVar1 & 0xfffffffffffffffc) + 0xc,uVar3);
  }
  lVar2 = FUN_1432cd080(param_1,0x400);
  *(byte *)(lVar2 + 0xa0) = *(byte *)(lVar2 + 0xa0) | 1;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_1432ccff0(param_1);
    return;
  }
  return;
}



// FUNCTION 1433f54b0 FUN_1433f54b0 body=67 status=ok
// SIG undefined FUN_1433f54b0(void)

undefined8 FUN_1433f54b0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1432cd1e0();
  if (*(longlong *)(lVar1 + 0x90) != 0) {
    FBaseCompactPose<TMemStackAllocator<0>_>::GetParentBoneIndex
              (*(longlong *)(lVar1 + 0x90),param_2);
    return param_2;
  }
  FUN_1432c2fb0(param_2,&DAT_145af3922);
  return param_2;
}



// FUNCTION 1433f5500 FUN_1433f5500 body=141 status=ok
// SIG undefined FUN_1433f5500(void)

void FUN_1433f5500(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_1432cd1e0();
  if (*(longlong *)(lVar1 + 0x90) != 0) {
    FUN_1433fbfb0(*(longlong *)(lVar1 + 0x90),param_2,param_3,0,param_4,0,0,0);
  }
  lVar1 = FUN_1432cd080(param_1,0x400);
  *(byte *)(lVar1 + 0xa0) = *(byte *)(lVar1 + 0xa0) | 1;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_1432ccff0(param_1);
  }
  return;
}



// FUNCTION 1433f55a0 FUN_1433f55a0 body=141 status=ok
// SIG undefined FUN_1433f55a0(void)

void FUN_1433f55a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_1432cd1e0();
  if (*(longlong *)(lVar1 + 0x90) != 0) {
    FUN_1433fc070(*(longlong *)(lVar1 + 0x90),param_2,param_3,0,param_4,0,0,0);
  }
  lVar1 = FUN_1432cd080(param_1,0x400);
  *(byte *)(lVar1 + 0xa0) = *(byte *)(lVar1 + 0xa0) | 1;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_1432ccff0(param_1);
  }
  return;
}



// FUNCTION 1433f5640 FUN_1433f5640 body=173 status=ok
// SIG undefined FUN_1433f5640(void)

void FUN_1433f5640(longlong param_1,ulonglong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_1432cd1e0();
  lVar2 = *(longlong *)(lVar2 + 0x90);
  if (lVar2 != 0) {
    uVar1 = *param_2;
    uVar3 = FUN_1432c3580(param_2);
    FUN_1433fbfb0(lVar2,(uVar1 & 0xfffffffffffffffc) + 0xc,uVar3,0,param_3,0,0,0);
  }
  lVar2 = FUN_1432cd080(param_1,0x400);
  *(byte *)(lVar2 + 0xa0) = *(byte *)(lVar2 + 0xa0) | 1;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_1432ccff0(param_1);
    return;
  }
  return;
}



// FUNCTION 1433f5700 FUN_1433f5700 body=67 status=ok
// SIG undefined FUN_1433f5700(void)

undefined8 FUN_1433f5700(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1432cd1e0();
  if (*(longlong *)(lVar1 + 0x90) != 0) {
    FBaseCompactPose<TMemStackAllocator<0>_>::GetParentBoneIndex
              (*(longlong *)(lVar1 + 0x90),param_2);
    return param_2;
  }
  FUN_1432c2fb0(param_2,&DAT_145af3922);
  return param_2;
}



// FUNCTION 1433f5750 FUN_1433f5750 body=274 status=ok
// SIG undefined FUN_1433f5750(void)

void FUN_1433f5750(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_a8 [64];
  undefined4 local_68;
  ushort local_5c;
  undefined1 local_58 [80];
  
  lVar2 = FUN_1432cd1e0();
  if (*(longlong *)(lVar2 + 0x90) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x90) + 0x10) + 0x10);
    if (lVar1 == 0) {
      uVar3 = (**(code **)(*DAT_146b62f28 + 0x78))();
    }
    else {
      uVar3 = *(undefined8 *)(lVar1 + 0x30);
    }
    FUN_1433dd540(local_a8,uVar3);
    local_68 = *param_2;
    local_5c = local_5c | 1;
    Scaleform::Render::Text::DocView::SetTextFormat
              (*(undefined8 *)(lVar2 + 0x90),local_a8,param_3,param_4);
    lVar2 = *(longlong *)(lVar2 + 0x90);
    uVar3 = FUN_1433ddf20(*(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 0x38),local_58,local_a8);
    FUN_1433e69f0(*(undefined8 *)(lVar2 + 0x10),uVar3);
    FUN_1433dd700(local_58);
    FUN_1433dd700(local_a8);
  }
  lVar2 = FUN_1432cd080(param_1,0x400);
  *(byte *)(lVar2 + 0xa0) = *(byte *)(lVar2 + 0xa0) | 1;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_1432ccff0(param_1);
  }
  return;
}



// FUNCTION 1433f5870 FUN_1433f5870 body=278 status=ok
// SIG undefined FUN_1433f5870(void)

void FUN_1433f5870(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_a8 [80];
  undefined1 local_58 [80];
  
  lVar2 = FUN_1432cd1e0();
  if (*(longlong *)(lVar2 + 0x90) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x90) + 0x10) + 0x10);
    if (lVar1 == 0) {
      uVar3 = (**(code **)(*DAT_146b62f28 + 0x78))();
    }
    else {
      uVar3 = *(undefined8 *)(lVar1 + 0x30);
    }
    FUN_1433dd540(local_a8,uVar3);
    Scaleform::Render::Text::TextFormat::SetFontName(local_a8,param_2,0xffffffffffffffff);
    Scaleform::Render::Text::DocView::SetTextFormat
              (*(undefined8 *)(lVar2 + 0x90),local_a8,param_3,param_4);
    lVar2 = *(longlong *)(lVar2 + 0x90);
    uVar3 = FUN_1433ddf20(*(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 0x38),local_58,local_a8);
    FUN_1433e69f0(*(undefined8 *)(lVar2 + 0x10),uVar3);
    FUN_1433dd700(local_58);
    FUN_1433dd700(local_a8);
  }
  lVar2 = FUN_1432cd080(param_1,0x400);
  *(byte *)(lVar2 + 0xa0) = *(byte *)(lVar2 + 0xa0) | 1;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_1432ccff0(param_1);
  }
  return;
}



// FUNCTION 1433f5990 FUN_1433f5990 body=303 status=ok
// SIG undefined FUN_1433f5990(void)

void FUN_1433f5990(longlong param_1,float param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_b8 [72];
  undefined2 local_70;
  ushort local_6c;
  undefined1 local_68 [96];
  
  lVar2 = FUN_1432cd1e0();
  if (*(longlong *)(lVar2 + 0x90) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x90) + 0x10) + 0x10);
    if (lVar1 == 0) {
      uVar3 = (**(code **)(*DAT_146b62f28 + 0x78))();
    }
    else {
      uVar3 = *(undefined8 *)(lVar1 + 0x30);
    }
    FUN_1433dd540(local_b8,uVar3);
    if (3276.8 <= param_2) {
      local_70 = 0xffff;
    }
    else {
      local_70 = (undefined2)(longlong)(param_2 * 20.0);
    }
    local_6c = local_6c | 8;
    Scaleform::Render::Text::DocView::SetTextFormat
              (*(undefined8 *)(lVar2 + 0x90),local_b8,param_3,param_4);
    lVar2 = *(longlong *)(lVar2 + 0x90);
    uVar3 = FUN_1433ddf20(*(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 0x38),local_68,local_b8);
    FUN_1433e69f0(*(undefined8 *)(lVar2 + 0x10),uVar3);
    FUN_1433dd700(local_68);
    FUN_1433dd700(local_b8);
  }
  lVar2 = FUN_1432cd080(param_1,0x400);
  *(byte *)(lVar2 + 0xa0) = *(byte *)(lVar2 + 0xa0) | 1;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_1432ccff0(param_1);
  }
  return;
}



// FUNCTION 1433f5ad0 FUN_1433f5ad0 body=279 status=ok
// SIG undefined FUN_1433f5ad0(void)

void FUN_1433f5ad0(longlong param_1,float param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_b8 [68];
  float local_74;
  ushort local_6c;
  undefined1 local_68 [96];
  
  lVar2 = FUN_1432cd1e0();
  if (*(longlong *)(lVar2 + 0x90) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x90) + 0x10) + 0x10);
    if (lVar1 == 0) {
      uVar3 = (**(code **)(*DAT_146b62f28 + 0x78))();
    }
    else {
      uVar3 = *(undefined8 *)(lVar1 + 0x30);
    }
    FUN_1433dd540(local_b8,uVar3);
    local_74 = param_2 * 20.0;
    local_6c = local_6c | 2;
    Scaleform::Render::Text::DocView::SetTextFormat
              (*(undefined8 *)(lVar2 + 0x90),local_b8,param_3,param_4);
    lVar2 = *(longlong *)(lVar2 + 0x90);
    uVar3 = FUN_1433ddf20(*(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 0x38),local_68,local_b8);
    FUN_1433e69f0(*(undefined8 *)(lVar2 + 0x10),uVar3);
    FUN_1433dd700(local_68);
    FUN_1433dd700(local_b8);
  }
  lVar2 = FUN_1432cd080(param_1,0x400);
  *(byte *)(lVar2 + 0xa0) = *(byte *)(lVar2 + 0xa0) | 1;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_1432ccff0(param_1);
  }
  return;
}



// FUNCTION 1433f5bf0 FUN_1433f5bf0 body=341 status=ok
// SIG undefined FUN_1433f5bf0(void)

void FUN_1433f5bf0(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_a8 [80];
  undefined1 local_58 [80];
  
  lVar2 = FUN_1432cd1e0();
  if (*(longlong *)(lVar2 + 0x90) == 0) goto LAB_1433f5d04;
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x90) + 0x10) + 0x10);
  if (lVar1 == 0) {
    uVar3 = (**(code **)(*DAT_146b62f28 + 0x78))();
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + 0x30);
  }
  FUN_1433dd540(local_a8,uVar3);
  if (param_2 == 0) {
    uVar3 = 0;
LAB_1433f5c99:
    FUN_1433dd860(local_a8,uVar3);
    uVar3 = 0;
LAB_1433f5ca5:
    FUN_1433dd8e0(local_a8,uVar3);
  }
  else {
    if (param_2 == 1) {
      uVar3 = 1;
      goto LAB_1433f5c99;
    }
    if (param_2 == 2) {
      FUN_1433dd860(local_a8,0);
      uVar3 = 1;
      goto LAB_1433f5ca5;
    }
    if (param_2 == 3) {
      FUN_1433dd860(local_a8,1);
      uVar3 = 1;
      goto LAB_1433f5ca5;
    }
  }
  Scaleform::Render::Text::DocView::SetTextFormat
            (*(undefined8 *)(lVar2 + 0x90),local_a8,param_3,param_4);
  lVar2 = *(longlong *)(lVar2 + 0x90);
  uVar3 = FUN_1433ddf20(*(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 0x38),local_58,local_a8);
  FUN_1433e69f0(*(undefined8 *)(lVar2 + 0x10),uVar3);
  FUN_1433dd700(local_58);
  FUN_1433dd700(local_a8);
LAB_1433f5d04:
  lVar2 = FUN_1432cd080(param_1,0x400);
  *(byte *)(lVar2 + 0xa0) = *(byte *)(lVar2 + 0xa0) | 1;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_1432ccff0(param_1);
  }
  return;
}



// FUNCTION 1433f5d50 FUN_1433f5d50 body=276 status=ok
// SIG undefined FUN_1433f5d50(void)

void FUN_1433f5d50(longlong param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_a8 [80];
  undefined1 local_58 [80];
  
  lVar2 = FUN_1432cd1e0();
  if (*(longlong *)(lVar2 + 0x90) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x90) + 0x10) + 0x10);
    if (lVar1 == 0) {
      uVar3 = (**(code **)(*DAT_146b62f28 + 0x78))();
    }
    else {
      uVar3 = *(undefined8 *)(lVar1 + 0x30);
    }
    FUN_1433dd540(local_a8,uVar3);
    Scaleform::Render::Text::TextFormat::SetUnderline(local_a8,param_2);
    Scaleform::Render::Text::DocView::SetTextFormat
              (*(undefined8 *)(lVar2 + 0x90),local_a8,param_3,param_4);
    lVar2 = *(longlong *)(lVar2 + 0x90);
    uVar3 = FUN_1433ddf20(*(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 0x38),local_58,local_a8);
    FUN_1433e69f0(*(undefined8 *)(lVar2 + 0x10),uVar3);
    FUN_1433dd700(local_58);
    FUN_1433dd700(local_a8);
  }
  lVar2 = FUN_1432cd080(param_1,0x400);
  *(byte *)(lVar2 + 0xa0) = *(byte *)(lVar2 + 0xa0) | 1;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_1432ccff0(param_1);
  }
  return;
}



// FUNCTION 1433f5e70 FUN_1433f5e70 body=102 status=ok
// SIG undefined FUN_1433f5e70(void)

void FUN_1433f5e70(longlong param_1,char param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1432cd1e0();
  lVar1 = *(longlong *)(lVar1 + 0x90);
  if (lVar1 != 0) {
    if (param_2 == '\0') {
      *(byte *)(lVar1 + 0x158) = *(byte *)(lVar1 + 0x158) & 0xfb;
    }
    else {
      *(byte *)(lVar1 + 0x158) = *(byte *)(lVar1 + 0x158) | 4;
    }
  }
  lVar1 = FUN_1432cd080(param_1,0x400);
  *(byte *)(lVar1 + 0xa0) = *(byte *)(lVar1 + 0xa0) | 1;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_1432ccff0(param_1);
  }
  return;
}



// FUNCTION 1433f5ee0 FUN_1433f5ee0 body=46 status=ok
// SIG undefined FUN_1433f5ee0(void)

ulonglong FUN_1433f5ee0(void)

{
  ulonglong uVar1;
  
  uVar1 = FUN_1432cd1e0();
  if (*(longlong *)(uVar1 + 0x90) != 0) {
    return (ulonglong)(*(byte *)(*(longlong *)(uVar1 + 0x90) + 0x158) >> 2 & 1);
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1433f5f20 FUN_1433f5f20 body=96 status=ok
// SIG undefined FUN_1433f5f20(void)

void FUN_1433f5f20(longlong param_1,char param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1432cd1e0();
  if (*(longlong *)(lVar1 + 0x90) != 0) {
    if (param_2 == '\0') {
      Scaleform::Render::Text::DocView::ClearWordWrap();
    }
    else {
      Scaleform::Render::Text::DocView::SetWordWrap();
    }
  }
  lVar1 = FUN_1432cd080(param_1,0x400);
  *(byte *)(lVar1 + 0xa0) = *(byte *)(lVar1 + 0xa0) | 1;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_1432ccff0(param_1);
  }
  return;
}



// FUNCTION 1433f5f90 FUN_1433f5f90 body=46 status=ok
// SIG undefined FUN_1433f5f90(void)

ulonglong FUN_1433f5f90(void)

{
  ulonglong uVar1;
  
  uVar1 = FUN_1432cd1e0();
  if (*(longlong *)(uVar1 + 0x90) != 0) {
    return (ulonglong)(*(byte *)(*(longlong *)(uVar1 + 0x90) + 0x158) >> 3 & 1);
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1433f5fd0 FUN_1433f5fd0 body=101 status=ok
// SIG undefined FUN_1433f5fd0(void)

void FUN_1433f5fd0(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1432cd1e0();
  lVar1 = *(longlong *)(lVar1 + 0x90);
  if (lVar1 != 0) {
    if (param_2 == 1) {
      *(byte *)(lVar1 + 0x158) = *(byte *)(lVar1 + 0x158) | 0x40;
    }
    else {
      *(byte *)(lVar1 + 0x158) = *(byte *)(lVar1 + 0x158) & 0xbf;
    }
  }
  lVar1 = FUN_1432cd080(param_1,0x400);
  *(byte *)(lVar1 + 0xa0) = *(byte *)(lVar1 + 0xa0) | 1;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_1432ccff0(param_1);
  }
  return;
}



// FUNCTION 1433f6040 FUN_1433f6040 body=46 status=ok
// SIG undefined FUN_1433f6040(void)

byte FUN_1433f6040(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1432cd1e0();
  if (*(longlong *)(lVar1 + 0x90) != 0) {
    return *(byte *)(*(longlong *)(lVar1 + 0x90) + 0x158) >> 6 & 1;
  }
  return 0;
}



// FUNCTION 1433f6080 FUN_1433f6080 body=259 status=ok
// SIG undefined FUN_1433f6080(void)

void FUN_1433f6080(longlong param_1)

{
  undefined **local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  undefined1 uStack_28;
  undefined2 local_27;
  undefined1 local_25;
  RefCountImpl *local_20;
  byte local_18;
  float local_14;
  float local_10;
  byte local_c;
  
  local_30 = 0x3f800000;
  local_68 = &PTR_FUN_145b047e0;
  local_60 = 1;
  local_48 = 0;
  local_34 = 0;
  local_20 = (RefCountImpl *)0x0;
  local_27 = 0;
  local_25 = 0;
  local_44 = 1;
  local_40 = 0x42c80000;
  local_3c = 0x42c80000;
  local_2c = 0xff000000;
  uStack_28 = 0;
  FUN_1433f1e80(&local_68);
  *(undefined4 *)(param_1 + 4) = local_58;
  *(byte *)(param_1 + 0x14) = local_18 | 0x80;
  *(float *)(param_1 + 0xc) = local_50 * 100.0;
  *(uint *)(param_1 + 0x10) = (uint)local_c << 0x18 | local_2c & 0xffffff;
  *(undefined4 *)(param_1 + 8) = local_54;
  *(float *)(param_1 + 0x18) = local_14 / 10.0;
  *(float *)(param_1 + 0x1c) = local_10 * 0.05;
  if (local_20 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_20);
  }
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore((RefCountNTSImplCore *)&local_68);
  return;
}



// FUNCTION 1433f6190 FUN_1433f6190 body=1048 status=ok
// SIG undefined FUN_1433f6190(void)

void FUN_1433f6190(longlong param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  undefined **local_e8;
  undefined8 local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  float local_c0;
  undefined8 local_bc;
  float local_b4;
  float local_b0;
  float local_ac;
  undefined1 uStack_a8;
  undefined2 local_a7;
  undefined1 local_a5;
  RefCountImpl *local_a0;
  uint local_98;
  undefined8 local_94;
  char local_8c;
  
  lVar3 = FUN_1432cd1e0();
  if (*(longlong *)(lVar3 + 0x90) != 0) {
    local_e8 = &PTR_FUN_145b047e0;
    local_c8 = 0;
    local_b4 = 0.0;
    local_a0 = (RefCountImpl *)0x0;
    local_a7 = 0;
    local_a5 = 0;
    local_b0 = 1.0;
    local_e0 = 1;
    local_c4 = 1;
    local_c0 = 100.0;
    local_bc = 0x42c80000;
    local_ac = -1.7014118e+38;
    uStack_a8 = 0;
    FUN_1433f1e80(&local_e8);
    if (param_3 != 0) {
      pfVar4 = (float *)(param_2 + 4);
      do {
        fVar1 = pfVar4[-1];
        if (fVar1 == 1.4013e-45) {
          local_c0 = *pfVar4 * 20.0;
          local_98 = (uint)*(byte *)(pfVar4 + 4);
          local_ac = pfVar4[3];
          local_b0 = pfVar4[2] / 100.0;
          local_8c = (char)((uint)local_ac >> 0x18);
          local_bc = CONCAT44(local_bc._4_4_,pfVar4[1] * 20.0);
          fVar1 = (pfVar4[5] * 3.1415927) / 180.0;
          fVar6 = (float)(int)(short)(int)(pfVar4[6] * 20.0);
          local_94 = CONCAT44(fVar6,fVar1);
          fVar5 = _guard_xfg_dispatch_icall_nop(fVar1);
          fVar5 = fVar5 * fVar6;
          local_b4 = _guard_xfg_dispatch_icall_nop(fVar1);
          local_b4 = local_b4 * fVar6;
LAB_1433f6400:
          local_bc = CONCAT44(fVar5,(undefined4)local_bc);
        }
        else if (fVar1 == 2.8026e-45) {
          local_d8 = *pfVar4 * 20.0;
          local_d4 = pfVar4[1] * 20.0;
          local_d0 = pfVar4[2] / 100.0;
        }
        else if (fVar1 == 4.2039e-45) {
          local_c0 = *pfVar4 * 20.0;
          local_98 = (uint)*(byte *)(pfVar4 + 4);
          local_ac = pfVar4[3];
          local_b0 = pfVar4[2] / 100.0;
          local_8c = (char)((uint)local_ac >> 0x18);
          local_94 = 0;
          local_bc = CONCAT44(local_bc._4_4_,pfVar4[1] * 20.0);
          fVar5 = _guard_xfg_dispatch_icall_nop(0.0);
          fVar5 = fVar5 * 0.0;
          local_b4 = _guard_xfg_dispatch_icall_nop(0.0);
          local_b4 = local_b4 * 0.0;
          goto LAB_1433f6400;
        }
        pfVar4 = pfVar4 + 8;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    lVar3 = *(longlong *)(lVar3 + 0x90);
    if (((((*(float *)(lVar3 + 0xf0) != local_d8) || (*(float *)(lVar3 + 0xf4) != local_d4)) ||
         (*(float *)(lVar3 + 0xf8) != local_d0)) ||
        ((cVar2 = Scaleform::Render::BlurFilterParams::EqualsAll(lVar3 + 0x100,&local_c8),
         cVar2 == '\0' || (*(uint *)(lVar3 + 0x130) != local_98)))) ||
       ((*(float *)(lVar3 + 0x134) != (float)local_94 ||
        ((*(float *)(lVar3 + 0x138) != local_94._4_4_ || (*(char *)(lVar3 + 0x13c) != local_8c))))))
    {
      *(float *)(lVar3 + 0xf0) = local_d8;
      *(float *)(lVar3 + 0xf4) = local_d4;
      *(float *)(lVar3 + 0xf8) = local_d0;
      FUN_1433a5ed0(lVar3 + 0x100,&local_c8);
      *(uint *)(lVar3 + 0x130) = local_98;
      *(float *)(lVar3 + 0x134) = (float)local_94;
      *(float *)(lVar3 + 0x138) = local_94._4_4_;
      *(char *)(lVar3 + 0x13c) = local_8c;
    }
    if (local_a0 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(local_a0);
    }
    Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore((RefCountNTSImplCore *)&local_e8);
  }
  lVar3 = FUN_1432cd080(param_1,0x400);
  *(byte *)(lVar3 + 0xa0) = *(byte *)(lVar3 + 0xa0) | 1;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_1432ccff0(param_1);
  }
  return;
}



// FUNCTION 1433f65b0 FUN_1433f65b0 body=592 status=ok
// SIG undefined FUN_1433f65b0(void)

ulonglong FUN_1433f65b0(undefined8 param_1,undefined4 *param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  lVar1 = FUN_1432cd1e0();
  lVar1 = *(longlong *)(lVar1 + 0x90);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = 0;
  if (((*(float *)(lVar1 + 0xf0) != 0.0) || (*(float *)(lVar1 + 0xf4) != 0.0)) && (param_3 != 0)) {
    *param_2 = 2;
    uVar2 = 1;
    param_2[1] = *(float *)(lVar1 + 0xf0) * 0.05;
    param_2[2] = *(float *)(lVar1 + 0xf4) * 0.05;
    param_2[3] = *(float *)(lVar1 + 0xf8) * 100.0;
  }
  uVar3 = uVar2;
  if (((*(float *)(lVar1 + 0x108) != 0.0) || (*(float *)(lVar1 + 0x10c) != 0.0)) &&
     (uVar2 < param_3)) {
    if ((*(float *)(lVar1 + 0x134) == 0.0) && (*(float *)(lVar1 + 0x138) == 0.0)) {
      param_2[uVar2 * 8] = 3;
      *(undefined1 *)(param_2 + uVar2 * 8 + 5) = *(undefined1 *)(lVar1 + 0x130);
      param_2[uVar2 * 8 + 1] = *(float *)(lVar1 + 0x108) * 0.05;
      param_2[uVar2 * 8 + 2] = *(float *)(lVar1 + 0x10c) * 0.05;
      param_2[uVar2 * 8 + 3] = *(float *)(lVar1 + 0x118) * 100.0;
      param_2[uVar2 * 8 + 4] =
           (uint)*(byte *)(lVar1 + 0x13c) << 0x18 | *(uint *)(lVar1 + 0x11c) & 0xffffff;
      return uVar2 + 1;
    }
    param_2[uVar2 * 8] = 1;
    *(undefined1 *)(param_2 + uVar2 * 8 + 5) = *(undefined1 *)(lVar1 + 0x130);
    param_2[uVar2 * 8 + 1] = *(float *)(lVar1 + 0x108) * 0.05;
    param_2[uVar2 * 8 + 2] = *(float *)(lVar1 + 0x10c) * 0.05;
    param_2[uVar2 * 8 + 3] = *(float *)(lVar1 + 0x118) * 100.0;
    param_2[uVar2 * 8 + 4] =
         (uint)*(byte *)(lVar1 + 0x13c) << 0x18 | *(uint *)(lVar1 + 0x11c) & 0xffffff;
    uVar3 = uVar2 + 1;
    param_2[uVar2 * 8 + 6] = (*(float *)(lVar1 + 0x134) * 180.0) / 3.1415927;
    param_2[uVar2 * 8 + 7] = *(float *)(lVar1 + 0x138) * 0.05;
  }
  return uVar3;
}



// FUNCTION 1433f6810 FUN_1433f6810 body=52 status=ok
// SIG undefined FUN_1433f6810(void)

void FUN_1433f6810(undefined8 param_1)

{
  undefined4 local_28 [8];
  
  local_28[0] = 0;
  FUN_1433f6080(local_28);
  FUN_1433f6190(param_1,local_28,1);
  return;
}



// FUNCTION 1433f6850 FUN_1433f6850 body=117 status=ok
// SIG undefined FUN_1433f6850(void)

float * FUN_1433f6850(undefined8 param_1,float *param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_1432cd1e0();
  lVar1 = *(longlong *)(lVar1 + 0x90);
  if (lVar1 != 0) {
    fVar2 = (float)Scaleform::Render::Text::DocView::GetTextHeight(lVar1);
    fVar3 = (float)Scaleform::Render::Text::DocView::GetTextWidth(lVar1);
    param_2[1] = fVar2 + 80.0;
    *param_2 = fVar3 + 80.0;
    return param_2;
  }
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  return param_2;
}



// FUNCTION 1433f68d0 FUN_1433f68d0 body=52 status=ok
// SIG undefined FUN_1433f68d0(void)

void FUN_1433f68d0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1432cd080(param_1,0x400);
  *(byte *)(lVar1 + 0xa0) = *(byte *)(lVar1 + 0xa0) | 1;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_1432ccff0(param_1);
    return;
  }
  return;
}



// FUNCTION 1433f6910 FUN_1433f6910 body=55 status=ok
// SIG undefined FUN_1433f6910(void)

void FUN_1433f6910(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 local_58 [80];
  
  uVar1 = FUN_1433ddf20(*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x38),local_58);
  FUN_1433e69f0(*(undefined8 *)(param_2 + 0x10),uVar1);
  FUN_1433dd700(local_58);
  return;
}



// FUNCTION 1433f6950 FUN_1433f6950 body=55 status=ok
// SIG undefined FUN_1433f6950(void)

void FUN_1433f6950(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 local_38 [48];
  
  uVar1 = FUN_1433deff0(*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x30),local_38);
  FUN_1433e6ac0(*(undefined8 *)(param_2 + 0x10),uVar1);
  FUN_1433dedf0(local_38);
  return;
}



// FUNCTION 1433f6990 NodeData body=120 status=ok
// SIG undefined NodeData(void)

undefined8 * Scaleform::Render::TreeText::NodeData::NodeData(undefined8 *param_1,longlong param_2)

{
  FUN_1432ef3f0();
  *param_1 = &PTR_FUN_145b06a50;
  if (*(RefCountImpl **)(param_2 + 0x90) != (RefCountImpl *)0x0) {
    RefCountImpl::AddRef(*(RefCountImpl **)(param_2 + 0x90));
  }
  param_1[0x12] = *(undefined8 *)(param_2 + 0x90);
  if (*(RefCountImpl **)(param_2 + 0x98) != (RefCountImpl *)0x0) {
    RefCountImpl::AddRef(*(RefCountImpl **)(param_2 + 0x98));
  }
  param_1[0x13] = *(undefined8 *)(param_2 + 0x98);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0xa0);
  return param_1;
}



// FUNCTION 1433f6a10 FUN_1433f6a10 body=116 status=ok
// SIG undefined FUN_1433f6a10(void)

undefined8 * FUN_1433f6a10(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_145b06a50;
  if ((RefCountImpl *)param_1[0x13] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0x13]);
  }
  if ((RefCountImpl *)param_1[0x12] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0x12]);
  }
  if (param_1[8] != 0) {
    FUN_143320fc0(param_1 + 8);
  }
  FUN_1432cd280(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 1433f6a90 FUN_1433f6a90 body=56 status=ok
// SIG undefined FUN_1433f6a90(void)

void FUN_1433f6a90(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_2 + 0x50))(param_2,0xb0,0);
  if (lVar1 != 0) {
    Scaleform::Render::TreeText::NodeData::NodeData(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 1433f6ad0 EqualsAll body=101 status=ok
// SIG undefined EqualsAll(void)

ulonglong Scaleform::Render::BlurFilterParams::EqualsAll(uint *param_1,uint *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*param_2;
  if (((((*param_1 == *param_2) && ((float)param_1[2] == (float)param_2[2])) &&
       ((float)param_1[3] == (float)param_2[3])) &&
      ((uVar2 = (ulonglong)param_2[1], param_1[1] == param_2[1] &&
       ((float)param_1[4] == (float)param_2[4])))) &&
     (((float)param_1[5] == (float)param_2[5] &&
      (((float)param_1[6] == (float)param_2[6] &&
       (uVar2 = (ulonglong)param_2[7], param_1[7] == param_2[7])))))) {
    uVar1 = param_2[8];
    uVar2 = (ulonglong)uVar1;
    if (param_1[8] == uVar1) {
      return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1433f6b40 FUN_1433f6b40 body=2331 status=ok
// SIG undefined FUN_1433f6b40(void)

int FUN_1433f6b40(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  longlong lVar8;
  longlong lVar9;
  RefCountImpl *this;
  longlong lVar10;
  int iVar11;
  undefined4 *puVar12;
  char cVar13;
  longlong *plVar14;
  byte *pbVar15;
  int iVar16;
  uint uVar17;
  RefCountImpl *pRVar18;
  char cVar20;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  longlong *local_res20;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined1 local_6c [5];
  undefined2 local_67;
  undefined1 local_65;
  RefCountImpl *local_60;
  RefCountImpl *pRVar19;
  
  if ((int)param_1[3] != 0) {
    param_1[2] = param_1[2] + 1;
  }
  iVar16 = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  local_res18[0] = 0;
  cVar20 = *(char *)(param_1[2] + *param_1);
  param_1[2] = param_1[2] + 1;
  local_res10[0] = 0;
  plVar14 = DAT_146b62f28;
  local_res20 = DAT_146b62f28;
  if (param_2 != 0) {
    local_res20 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_2);
    plVar14 = local_res20;
  }
  do {
    if (cVar20 == '\0') {
      return iVar16;
    }
    cVar20 = cVar20 + -1;
    if ((int)param_1[3] != 0) {
      param_1[2] = param_1[2] + 1;
    }
    lVar10 = param_1[2];
    pRVar18 = (RefCountImpl *)0x0;
    lVar8 = *param_1;
    *(undefined4 *)(param_1 + 3) = 0;
    cVar13 = *(char *)(lVar8 + lVar10);
    param_1[2] = lVar10 + 1;
    local_88 = 0;
    local_84 = 1;
    local_70 = 0x3f800000;
    local_60 = (RefCountImpl *)0x0;
    local_6c._1_4_ = 0xff0000;
    local_6c[0] = 0;
    local_67 = 0;
    local_65 = 0;
    local_80 = 0x42c80000;
    uStack_7c = 0x42c80000;
    uStack_78 = 0;
    uStack_74 = 0;
    this = (RefCountImpl *)0x0;
    pRVar19 = (RefCountImpl *)0x0;
    switch(cVar13) {
    case '\0':
      FUN_1433f7ab0(param_1,&local_88,local_res18,local_res10,0xd,1,0x1f);
      lVar10 = (**(code **)(*plVar14 + 0x50))(plVar14,0x50);
      if (lVar10 == 0) {
LAB_1433f6cc9:
        this = (RefCountImpl *)0x0;
        pRVar19 = pRVar18;
      }
      else {
        this = (RefCountImpl *)FUN_1432d16c0(lVar10,&local_88,local_res18[0],local_res10[0]);
        pRVar19 = pRVar18;
      }
      break;
    case '\x01':
      FUN_1433f7ab0(param_1,&local_88,0,0,0,0,0xf8);
      this = (RefCountImpl *)(**(code **)(*plVar14 + 0x50))(plVar14,0x50);
      if (this == (RefCountImpl *)0x0) goto LAB_1433f6cc9;
      *(undefined8 *)(this + 8) = 0;
      puVar12 = (undefined4 *)local_6c;
      *(undefined ***)this = &PTR_FUN_144f70a50;
      *(undefined ***)this = &PTR_FUN_145af82a0;
      *(undefined4 *)(this + 8) = 1;
      *(undefined4 *)(this + 0x10) = 0;
      lVar10 = 2;
      this[0x14] = (RefCountImpl)0x0;
      *(undefined4 *)(this + 0x18) = local_88;
      *(undefined4 *)(this + 0x1c) = local_84;
      *(undefined4 *)(this + 0x20) = local_80;
      *(undefined4 *)(this + 0x24) = uStack_7c;
      *(undefined4 *)(this + 0x28) = uStack_78;
      *(undefined4 *)(this + 0x2c) = uStack_74;
      *(undefined4 *)(this + 0x30) = local_70;
      do {
        *(undefined4 *)(this + (0x34 - (longlong)local_6c) + (longlong)puVar12) = *puVar12;
        puVar12 = puVar12 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      if (local_60 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(local_60);
      }
      *(RefCountImpl **)(this + 0x40) = local_60;
      *(undefined ***)this = &PTR_FUN_145af82c0;
      *(undefined8 *)(this + 0x48) = 0;
      plVar14 = local_res20;
      pRVar19 = pRVar18;
      break;
    case '\x02':
      FUN_1433f7ab0(param_1,&local_88,0,0,9,2,0x1f);
      this = (RefCountImpl *)(**(code **)(*plVar14 + 0x50))(plVar14,0x50);
      if (this == (RefCountImpl *)0x0) goto LAB_1433f6cc9;
      *(undefined8 *)(this + 8) = 0;
      puVar12 = (undefined4 *)local_6c;
      *(undefined4 *)(this + 0x10) = 2;
      *(undefined ***)this = &PTR_FUN_144f70a50;
      lVar10 = 2;
      *(undefined4 *)(this + 8) = 1;
      *(undefined ***)this = &PTR_FUN_145af82a0;
      this[0x14] = (RefCountImpl)0x0;
      *(undefined4 *)(this + 0x18) = local_88;
      *(undefined4 *)(this + 0x1c) = local_84;
      *(undefined4 *)(this + 0x20) = local_80;
      *(undefined4 *)(this + 0x24) = uStack_7c;
      *(undefined4 *)(this + 0x28) = uStack_78;
      *(undefined4 *)(this + 0x2c) = uStack_74;
      *(undefined4 *)(this + 0x30) = local_70;
      do {
        *(undefined4 *)(this + (0x34 - (longlong)local_6c) + (longlong)puVar12) = *puVar12;
        puVar12 = puVar12 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      if (local_60 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(local_60);
      }
      *(RefCountImpl **)(this + 0x40) = local_60;
      *(undefined ***)this = &PTR_FUN_145af8300;
      *(undefined8 *)(this + 0x48) = 0;
      plVar14 = local_res20;
      pRVar19 = pRVar18;
      break;
    case '\x03':
      FUN_1433f7ab0(param_1,&local_88,local_res18,local_res10,0xf,3,0xf);
      lVar10 = (**(code **)(*plVar14 + 0x50))(plVar14,0x50);
      if (lVar10 == 0) goto LAB_1433f6cc9;
      this = (RefCountImpl *)FUN_1432d1570(lVar10,&local_88,local_res18[0],local_res10[0]);
      pRVar19 = pRVar18;
      break;
    case '\x04':
    case '\a':
      cVar13 = (cVar13 != '\x04') + '\x04';
      FUN_1433f7ab0(param_1,&local_88,local_res18,local_res10,0x1c,cVar13,0xf);
      lVar10 = (**(code **)(*plVar14 + 0x50))(plVar14,0x58);
      if (lVar10 == 0) goto LAB_1433f6cc9;
      this = (RefCountImpl *)FUN_1432d0740(lVar10,cVar13,&local_88,local_res18[0],local_res10[0]);
      pRVar19 = pRVar18;
      break;
    case '\x05':
      *(undefined4 *)(param_1 + 3) = 0;
      bVar2 = *(byte *)(lVar8 + lVar10 + 1);
      param_1[2] = lVar10 + 2;
      *(undefined4 *)(param_1 + 3) = 0;
      bVar3 = *(byte *)(lVar10 + 2 + lVar8);
      param_1[2] = lVar10 + 3;
      this = (RefCountImpl *)0x0;
      pRVar19 = (RefCountImpl *)(ulonglong)((uint)bVar3 * (uint)bVar2 * 4 + 0xd);
      break;
    case '\x06':
      lVar10 = (**(code **)(*plVar14 + 0x50))(plVar14,0x68);
      if (lVar10 == 0) {
        this = (RefCountImpl *)0x0;
      }
      else {
        this = (RefCountImpl *)FUN_1432d0910(lVar10);
        if (this != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::AddRef(this);
        }
      }
      pbVar15 = &DAT_145b06ab1;
      lVar10 = 2;
      do {
        if ((int)param_1[3] != 0) {
          param_1[2] = param_1[2] + 1;
        }
        lVar8 = param_1[2];
        lVar9 = *param_1;
        *(undefined4 *)(param_1 + 3) = 0;
        uVar4 = *(undefined1 *)(lVar8 + 2 + lVar9);
        uVar5 = *(undefined1 *)(lVar8 + 3 + lVar9);
        uVar6 = *(undefined1 *)(lVar8 + 1 + lVar9);
        uVar7 = *(undefined1 *)(lVar8 + lVar9);
        param_1[2] = lVar8 + 4;
        *(uint *)(this + (ulonglong)pbVar15[-1] * 4 + 0x18) =
             CONCAT31(CONCAT21(CONCAT11(uVar5,uVar4),uVar6),uVar7);
        if ((int)param_1[3] != 0) {
          param_1[2] = param_1[2] + 1;
        }
        lVar8 = param_1[2];
        lVar9 = *param_1;
        *(undefined4 *)(param_1 + 3) = 0;
        uVar4 = *(undefined1 *)(lVar8 + 2 + lVar9);
        uVar5 = *(undefined1 *)(lVar8 + 3 + lVar9);
        uVar6 = *(undefined1 *)(lVar8 + 1 + lVar9);
        uVar7 = *(undefined1 *)(lVar8 + lVar9);
        param_1[2] = lVar8 + 4;
        *(uint *)(this + (ulonglong)*pbVar15 * 4 + 0x18) =
             CONCAT31(CONCAT21(CONCAT11(uVar5,uVar4),uVar6),uVar7);
        if ((int)param_1[3] != 0) {
          param_1[2] = param_1[2] + 1;
        }
        lVar8 = param_1[2];
        lVar9 = *param_1;
        *(undefined4 *)(param_1 + 3) = 0;
        uVar4 = *(undefined1 *)(lVar8 + 2 + lVar9);
        uVar5 = *(undefined1 *)(lVar8 + 3 + lVar9);
        uVar6 = *(undefined1 *)(lVar8 + 1 + lVar9);
        uVar7 = *(undefined1 *)(lVar8 + lVar9);
        param_1[2] = lVar8 + 4;
        *(uint *)(this + (ulonglong)pbVar15[1] * 4 + 0x18) =
             CONCAT31(CONCAT21(CONCAT11(uVar5,uVar4),uVar6),uVar7);
        if ((int)param_1[3] != 0) {
          param_1[2] = param_1[2] + 1;
        }
        lVar8 = param_1[2];
        lVar9 = *param_1;
        *(undefined4 *)(param_1 + 3) = 0;
        uVar4 = *(undefined1 *)(lVar8 + 2 + lVar9);
        uVar5 = *(undefined1 *)(lVar8 + 3 + lVar9);
        uVar6 = *(undefined1 *)(lVar8 + 1 + lVar9);
        uVar7 = *(undefined1 *)(lVar8 + lVar9);
        param_1[2] = lVar8 + 4;
        *(uint *)(this + (ulonglong)pbVar15[2] * 4 + 0x18) =
             CONCAT31(CONCAT21(CONCAT11(uVar5,uVar4),uVar6),uVar7);
        if ((int)param_1[3] != 0) {
          param_1[2] = param_1[2] + 1;
        }
        lVar8 = param_1[2];
        lVar9 = *param_1;
        *(undefined4 *)(param_1 + 3) = 0;
        uVar4 = *(undefined1 *)(lVar8 + 2 + lVar9);
        uVar5 = *(undefined1 *)(lVar8 + 3 + lVar9);
        uVar6 = *(undefined1 *)(lVar8 + 1 + lVar9);
        uVar7 = *(undefined1 *)(lVar8 + lVar9);
        param_1[2] = lVar8 + 4;
        *(uint *)(this + (ulonglong)pbVar15[3] * 4 + 0x18) =
             CONCAT31(CONCAT21(CONCAT11(uVar5,uVar4),uVar6),uVar7);
        if ((int)param_1[3] != 0) {
          param_1[2] = param_1[2] + 1;
        }
        lVar8 = param_1[2];
        lVar9 = *param_1;
        *(undefined4 *)(param_1 + 3) = 0;
        uVar4 = *(undefined1 *)(lVar8 + 2 + lVar9);
        uVar5 = *(undefined1 *)(lVar8 + 3 + lVar9);
        uVar6 = *(undefined1 *)(lVar8 + 1 + lVar9);
        uVar7 = *(undefined1 *)(lVar8 + lVar9);
        param_1[2] = lVar8 + 4;
        *(uint *)(this + (ulonglong)pbVar15[4] * 4 + 0x18) =
             CONCAT31(CONCAT21(CONCAT11(uVar5,uVar4),uVar6),uVar7);
        if ((int)param_1[3] != 0) {
          param_1[2] = param_1[2] + 1;
        }
        lVar8 = param_1[2];
        lVar9 = *param_1;
        *(undefined4 *)(param_1 + 3) = 0;
        uVar4 = *(undefined1 *)(lVar8 + 2 + lVar9);
        uVar5 = *(undefined1 *)(lVar8 + 3 + lVar9);
        uVar6 = *(undefined1 *)(lVar8 + 1 + lVar9);
        uVar7 = *(undefined1 *)(lVar8 + lVar9);
        param_1[2] = lVar8 + 4;
        *(uint *)(this + (ulonglong)pbVar15[5] * 4 + 0x18) =
             CONCAT31(CONCAT21(CONCAT11(uVar5,uVar4),uVar6),uVar7);
        if ((int)param_1[3] != 0) {
          param_1[2] = param_1[2] + 1;
        }
        lVar8 = param_1[2];
        lVar9 = *param_1;
        *(undefined4 *)(param_1 + 3) = 0;
        uVar4 = *(undefined1 *)(lVar8 + 2 + lVar9);
        uVar5 = *(undefined1 *)(lVar8 + 3 + lVar9);
        uVar6 = *(undefined1 *)(lVar8 + 1 + lVar9);
        uVar7 = *(undefined1 *)(lVar8 + lVar9);
        param_1[2] = lVar8 + 4;
        *(uint *)(this + (ulonglong)pbVar15[6] * 4 + 0x18) =
             CONCAT31(CONCAT21(CONCAT11(uVar5,uVar4),uVar6),uVar7);
        if ((int)param_1[3] != 0) {
          param_1[2] = param_1[2] + 1;
        }
        lVar8 = param_1[2];
        lVar9 = *param_1;
        *(undefined4 *)(param_1 + 3) = 0;
        uVar4 = *(undefined1 *)(lVar8 + 2 + lVar9);
        uVar5 = *(undefined1 *)(lVar8 + 3 + lVar9);
        uVar6 = *(undefined1 *)(lVar8 + 1 + lVar9);
        uVar7 = *(undefined1 *)(lVar8 + lVar9);
        param_1[2] = lVar8 + 4;
        *(uint *)(this + (ulonglong)pbVar15[7] * 4 + 0x18) =
             CONCAT31(CONCAT21(CONCAT11(uVar5,uVar4),uVar6),uVar7);
        if ((int)param_1[3] != 0) {
          param_1[2] = param_1[2] + 1;
        }
        lVar8 = param_1[2];
        lVar9 = *param_1;
        *(undefined4 *)(param_1 + 3) = 0;
        uVar4 = *(undefined1 *)(lVar8 + 2 + lVar9);
        uVar5 = *(undefined1 *)(lVar8 + 3 + lVar9);
        uVar6 = *(undefined1 *)(lVar8 + 1 + lVar9);
        uVar7 = *(undefined1 *)(lVar8 + lVar9);
        param_1[2] = lVar8 + 4;
        pbVar1 = pbVar15 + 8;
        pbVar15 = pbVar15 + 10;
        *(uint *)(this + (ulonglong)*pbVar1 * 4 + 0x18) =
             CONCAT31(CONCAT21(CONCAT11(uVar5,uVar4),uVar6),uVar7);
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      iVar16 = iVar16 + 1;
      *(float *)(this + 0x58) = *(float *)(this + 0x58) * 0.003921569;
      *(float *)(this + 0x5c) = *(float *)(this + 0x5c) * 0.003921569;
      *(float *)(this + 0x60) = *(float *)(this + 0x60) * 0.003921569;
      *(float *)(this + 100) = *(float *)(this + 100) * 0.003921569;
      Scaleform::RefCountImpl::Release(this);
      pRVar19 = pRVar18;
    }
    if ((param_2 != 0) && (this != (RefCountImpl *)0x0)) {
      FUN_1432d0e40(param_2,this);
      iVar16 = iVar16 + 1;
    }
    if ((int)pRVar19 != 0) {
      iVar11 = (int)param_1[3];
      lVar10 = param_1[2];
      do {
        uVar17 = (int)pRVar19 - 1;
        pRVar19 = (RefCountImpl *)(ulonglong)uVar17;
        if (iVar11 != 0) {
          lVar10 = lVar10 + 1;
        }
        iVar11 = 0;
        lVar10 = lVar10 + 1;
      } while (uVar17 != 0);
      *(undefined4 *)(param_1 + 3) = 0;
      param_1[2] = lVar10;
    }
    if (local_60 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(local_60);
    }
    if (this != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(this);
    }
  } while( true );
}



// FUNCTION 1433f7480 FUN_1433f7480 body=1538 status=ok
// SIG undefined FUN_1433f7480(void)

int FUN_1433f7480(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  RefCountImpl *this;
  undefined4 *puVar5;
  char cVar6;
  RefCountImpl *pRVar7;
  int iVar8;
  int iVar9;
  char cVar10;
  byte *pbVar11;
  uint uVar12;
  RefCountImpl *pRVar13;
  undefined4 uVar15;
  undefined4 local_res8 [2];
  longlong local_res10;
  undefined4 local_res18 [2];
  int local_res20;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined1 local_74;
  undefined4 uStack_73;
  undefined2 local_6f;
  undefined1 local_6d;
  RefCountImpl *local_68;
  RefCountImpl *pRVar14;
  
  *(undefined1 *)(param_1 + 0x29) = 0;
  local_res10 = param_2;
  if (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) < 1) {
    FUN_143396d60();
  }
  iVar8 = 0;
  local_res20 = 0;
  local_res18[0] = 0;
  cVar10 = *(char *)((ulonglong)*(uint *)(param_1 + 0x4c) + *(longlong *)(param_1 + 0x60));
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) + 1;
  local_res8[0] = 0;
  plVar3 = DAT_146b62f28;
  if (param_2 != 0) {
    plVar3 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_2);
  }
  do {
    if (cVar10 == '\0') {
      return iVar8;
    }
    cVar10 = cVar10 + -1;
    *(undefined1 *)(param_1 + 0x29) = 0;
    if (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) < 1) {
      FUN_143396d60(param_1);
    }
    this = (RefCountImpl *)0x0;
    pRVar7 = (RefCountImpl *)0x0;
    pRVar13 = (RefCountImpl *)0x0;
    iVar9 = *(uint *)(param_1 + 0x4c) + 1;
    cVar6 = *(char *)((ulonglong)*(uint *)(param_1 + 0x4c) + *(longlong *)(param_1 + 0x60));
    *(int *)(param_1 + 0x4c) = iVar9;
    local_90 = 0;
    local_8c = 1;
    local_78 = 0x3f800000;
    local_68 = (RefCountImpl *)0x0;
    uStack_73 = 0xff0000;
    local_74 = 0;
    local_6f = 0;
    local_6d = 0;
    local_88 = 0x42c80000;
    uStack_84 = 0x42c80000;
    uStack_80 = 0;
    uStack_7c = 0;
    pRVar14 = this;
    switch(cVar6) {
    case '\0':
      FUN_1433f7fd0(param_1,&local_90,local_res18,local_res8,0xd,1,0x1f);
      lVar4 = (**(code **)(*plVar3 + 0x50))(plVar3,0x50);
      this = pRVar7;
      pRVar14 = pRVar13;
      if (lVar4 != 0) {
        this = (RefCountImpl *)FUN_1432d16c0(lVar4,&local_90,local_res18[0],local_res8[0]);
      }
      break;
    case '\x01':
      FUN_1433f7fd0(param_1,&local_90,0,0,0,0,0xf8);
      this = (RefCountImpl *)(**(code **)(*plVar3 + 0x50))(plVar3,0x50);
      if (this == (RefCountImpl *)0x0) {
LAB_1433f7720:
        this = (RefCountImpl *)0x0;
        pRVar14 = pRVar13;
      }
      else {
        *(undefined8 *)(this + 8) = 0;
        puVar5 = (undefined4 *)&local_74;
        *(undefined ***)this = &PTR_FUN_144f70a50;
        *(undefined ***)this = &PTR_FUN_145af82a0;
        *(undefined4 *)(this + 8) = 1;
        *(undefined4 *)(this + 0x10) = 0;
        lVar4 = 2;
        this[0x14] = (RefCountImpl)0x0;
        *(undefined4 *)(this + 0x18) = local_90;
        *(undefined4 *)(this + 0x1c) = local_8c;
        *(undefined4 *)(this + 0x20) = local_88;
        *(undefined4 *)(this + 0x24) = uStack_84;
        *(undefined4 *)(this + 0x28) = uStack_80;
        *(undefined4 *)(this + 0x2c) = uStack_7c;
        *(undefined4 *)(this + 0x30) = local_78;
        do {
          *(undefined4 *)(this + (0x34 - (longlong)&local_74) + (longlong)puVar5) = *puVar5;
          puVar5 = puVar5 + 1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        if (local_68 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::AddRef(local_68);
        }
        *(RefCountImpl **)(this + 0x40) = local_68;
        *(undefined ***)this = &PTR_FUN_145af82c0;
        *(undefined8 *)(this + 0x48) = 0;
        pRVar14 = pRVar13;
        iVar8 = local_res20;
      }
      break;
    case '\x02':
      FUN_1433f7fd0(param_1,&local_90,0,0,9,2,0x1f);
      this = (RefCountImpl *)(**(code **)(*plVar3 + 0x50))(plVar3,0x50);
      if (this == (RefCountImpl *)0x0) goto LAB_1433f7720;
      *(undefined8 *)(this + 8) = 0;
      puVar5 = (undefined4 *)&local_74;
      *(undefined4 *)(this + 0x10) = 2;
      *(undefined ***)this = &PTR_FUN_144f70a50;
      lVar4 = 2;
      *(undefined4 *)(this + 8) = 1;
      *(undefined ***)this = &PTR_FUN_145af82a0;
      this[0x14] = (RefCountImpl)0x0;
      *(undefined4 *)(this + 0x18) = local_90;
      *(undefined4 *)(this + 0x1c) = local_8c;
      *(undefined4 *)(this + 0x20) = local_88;
      *(undefined4 *)(this + 0x24) = uStack_84;
      *(undefined4 *)(this + 0x28) = uStack_80;
      *(undefined4 *)(this + 0x2c) = uStack_7c;
      *(undefined4 *)(this + 0x30) = local_78;
      do {
        *(undefined4 *)(this + (0x34 - (longlong)&local_74) + (longlong)puVar5) = *puVar5;
        puVar5 = puVar5 + 1;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      if (local_68 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(local_68);
      }
      *(RefCountImpl **)(this + 0x40) = local_68;
      *(undefined ***)this = &PTR_FUN_145af8300;
      *(undefined8 *)(this + 0x48) = 0;
      pRVar14 = pRVar13;
      iVar8 = local_res20;
      break;
    case '\x03':
      FUN_1433f7fd0(param_1,&local_90,local_res18,local_res8,0xf,3,0xf);
      lVar4 = (**(code **)(*plVar3 + 0x50))(plVar3,0x50);
      this = pRVar7;
      pRVar14 = pRVar13;
      if (lVar4 != 0) {
        this = (RefCountImpl *)FUN_1432d1570(lVar4,&local_90,local_res18[0],local_res8[0]);
      }
      break;
    case '\x04':
    case '\a':
      cVar6 = (cVar6 != '\x04') + '\x04';
      FUN_1433f7fd0(param_1,&local_90,local_res18,local_res8,0x1c,cVar6,0xf);
      lVar4 = (**(code **)(*plVar3 + 0x50))(plVar3,0x58);
      if (lVar4 == 0) goto LAB_1433f7720;
      this = (RefCountImpl *)FUN_1432d0740(lVar4,cVar6,&local_90,local_res18[0],local_res8[0]);
      pRVar14 = pRVar13;
      break;
    case '\x05':
      *(undefined1 *)(param_1 + 0x29) = 0;
      if (*(int *)(param_1 + 0x50) - iVar9 < 1) {
        FUN_143396d60(param_1);
      }
      iVar8 = *(uint *)(param_1 + 0x4c) + 1;
      bVar2 = *(byte *)((ulonglong)*(uint *)(param_1 + 0x4c) + *(longlong *)(param_1 + 0x60));
      *(int *)(param_1 + 0x4c) = iVar8;
      *(undefined1 *)(param_1 + 0x29) = 0;
      if (*(int *)(param_1 + 0x50) - iVar8 < 1) {
        FUN_143396d60(param_1);
      }
      bVar1 = *(byte *)((ulonglong)*(uint *)(param_1 + 0x4c) + *(longlong *)(param_1 + 0x60));
      *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) + 1;
      this = pRVar7;
      pRVar14 = (RefCountImpl *)(ulonglong)((uint)bVar1 * (uint)bVar2 * 4 + 0xd);
      iVar8 = local_res20;
      break;
    case '\x06':
      lVar4 = (**(code **)(*plVar3 + 0x50))(plVar3,0x68);
      if ((lVar4 != 0) && (this = (RefCountImpl *)FUN_1432d0910(lVar4), this != (RefCountImpl *)0x0)
         ) {
        Scaleform::RefCountImpl::AddRef(this);
      }
      pbVar11 = &DAT_145b06a98;
      lVar4 = 0x14;
      do {
        bVar2 = *pbVar11;
        uVar15 = FUN_143395450(param_1);
        *(undefined4 *)(this + (ulonglong)bVar2 * 4 + 0x18) = uVar15;
        pbVar11 = pbVar11 + 1;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      iVar8 = local_res20 + 1;
      *(float *)(this + 0x58) = *(float *)(this + 0x58) * 0.003921569;
      *(float *)(this + 0x5c) = *(float *)(this + 0x5c) * 0.003921569;
      *(float *)(this + 0x60) = *(float *)(this + 0x60) * 0.003921569;
      *(float *)(this + 100) = *(float *)(this + 100) * 0.003921569;
      local_res20 = iVar8;
      Scaleform::RefCountImpl::Release(this);
      param_2 = local_res10;
      pRVar14 = pRVar13;
    }
    if ((param_2 != 0) && (this != (RefCountImpl *)0x0)) {
      FUN_1432d0e40(param_2,this);
      iVar8 = iVar8 + 1;
      local_res20 = iVar8;
    }
    uVar12 = (uint)pRVar14;
    while (uVar12 != 0) {
      uVar12 = (int)pRVar14 - 1;
      pRVar14 = (RefCountImpl *)(ulonglong)uVar12;
      *(undefined1 *)(param_1 + 0x29) = 0;
      if (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) < 1) {
        FUN_143396d60(param_1);
      }
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    }
    if (local_68 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(local_68);
    }
    if (this != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(this);
    }
  } while( true );
}



// FUNCTION 1433f7ab0 FUN_1433f7ab0 body=1299 status=ok
// SIG undefined FUN_1433f7ab0(void)

void FUN_1433f7ab0(longlong *param_1,uint *param_2,float *param_3,float *param_4,uint param_5,
                  uint param_6,uint param_7)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  RefCountImpl RVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  RefCountImpl *this;
  uint uVar11;
  RefCountImpl *pRVar12;
  ulonglong uVar13;
  RefCountImpl *pRVar14;
  ulonglong uVar15;
  
  pRVar12 = (RefCountImpl *)0x0;
  if ((param_5 & 0x10) != 0) {
    if ((int)param_1[3] != 0) {
      param_1[2] = param_1[2] + 1;
    }
    *(undefined4 *)(param_1 + 3) = 0;
    bVar1 = *(byte *)(param_1[2] + *param_1);
    uVar13 = (ulonglong)bVar1;
    param_1[2] = param_1[2] + 1;
    lVar10 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x38);
    this = pRVar12;
    if (lVar10 != 0) {
      this = (RefCountImpl *)FUN_143321870(lVar10,0,uVar13,0);
    }
    pRVar14 = pRVar12;
    uVar15 = uVar13;
    if (bVar1 != 0) {
      do {
        lVar10 = *(longlong *)(this + 0x20);
        if ((int)param_1[3] != 0) {
          param_1[2] = param_1[2] + 1;
        }
        lVar7 = param_1[2];
        lVar8 = *param_1;
        *(undefined4 *)(param_1 + 3) = 0;
        uVar2 = *(undefined1 *)(lVar8 + lVar7);
        param_1[2] = lVar7 + 1;
        *(undefined4 *)(param_1 + 3) = 0;
        uVar3 = *(undefined1 *)(lVar8 + lVar7 + 1);
        param_1[2] = lVar7 + 2;
        *(undefined4 *)(param_1 + 3) = 0;
        uVar4 = *(undefined1 *)(lVar7 + 2 + lVar8);
        param_1[2] = lVar7 + 3;
        *(undefined4 *)(param_1 + 3) = 0;
        uVar5 = *(undefined1 *)(lVar7 + 3 + lVar8);
        param_1[2] = lVar7 + 4;
        *(uint *)(pRVar14 + lVar10 + 4) = CONCAT13(uVar5,CONCAT21(CONCAT11(uVar2,uVar3),uVar4));
        uVar15 = uVar15 - 1;
        pRVar14 = pRVar14 + 8;
      } while (uVar15 != 0);
    }
    if (bVar1 != 0) {
      do {
        if ((int)param_1[3] != 0) {
          param_1[2] = param_1[2] + 1;
        }
        *(undefined4 *)(param_1 + 3) = 0;
        RVar6 = *(RefCountImpl *)(param_1[2] + *param_1);
        param_1[2] = param_1[2] + 1;
        pRVar12[*(longlong *)(this + 0x20)] = RVar6;
        pRVar12 = pRVar12 + 8;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    if (this != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(this);
    }
    if (*(RefCountImpl **)(param_2 + 10) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_2 + 10));
    }
    *(RefCountImpl **)(param_2 + 10) = this;
    if (this != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(this);
    }
  }
  if ((param_5 & 1) != 0) {
    if ((int)param_1[3] != 0) {
      param_1[2] = param_1[2] + 1;
    }
    *(undefined4 *)(param_1 + 3) = 0;
    uVar2 = *(undefined1 *)(param_1[2] + *param_1);
    param_1[2] = param_1[2] + 1;
    *(undefined1 *)((longlong)param_2 + 0x1e) = uVar2;
    if ((int)param_1[3] != 0) {
      param_1[2] = param_1[2] + 1;
    }
    *(undefined4 *)(param_1 + 3) = 0;
    uVar2 = *(undefined1 *)(param_1[2] + *param_1);
    param_1[2] = param_1[2] + 1;
    *(undefined1 *)((longlong)param_2 + 0x1d) = uVar2;
    if ((int)param_1[3] != 0) {
      param_1[2] = param_1[2] + 1;
    }
    *(undefined4 *)(param_1 + 3) = 0;
    uVar2 = *(undefined1 *)(param_1[2] + *param_1);
    param_1[2] = param_1[2] + 1;
    *(undefined1 *)(param_2 + 7) = uVar2;
    *(undefined1 *)((longlong)param_2 + 0x1f) = 0xff;
    if ((int)param_1[3] != 0) {
      param_1[2] = param_1[2] + 1;
    }
    *(undefined4 *)(param_1 + 3) = 0;
    uVar2 = *(undefined1 *)(param_1[2] + *param_1);
    param_1[2] = param_1[2] + 1;
    *(undefined1 *)((longlong)param_2 + 0x1f) = uVar2;
    if ((param_5 & 2) != 0) {
      if ((int)param_1[3] != 0) {
        param_1[2] = param_1[2] + 1;
      }
      *(undefined4 *)(param_1 + 3) = 0;
      uVar2 = *(undefined1 *)(param_1[2] + *param_1);
      param_1[2] = param_1[2] + 1;
      *(undefined1 *)((longlong)param_2 + 0x22) = uVar2;
      if ((int)param_1[3] != 0) {
        param_1[2] = param_1[2] + 1;
      }
      *(undefined4 *)(param_1 + 3) = 0;
      uVar2 = *(undefined1 *)(param_1[2] + *param_1);
      param_1[2] = param_1[2] + 1;
      *(undefined1 *)((longlong)param_2 + 0x21) = uVar2;
      if ((int)param_1[3] != 0) {
        param_1[2] = param_1[2] + 1;
      }
      *(undefined4 *)(param_1 + 3) = 0;
      uVar2 = *(undefined1 *)(param_1[2] + *param_1);
      param_1[2] = param_1[2] + 1;
      *(undefined1 *)(param_2 + 8) = uVar2;
      *(undefined1 *)((longlong)param_2 + 0x23) = 0xff;
      if ((int)param_1[3] != 0) {
        param_1[2] = param_1[2] + 1;
      }
      *(undefined4 *)(param_1 + 3) = 0;
      uVar2 = *(undefined1 *)(param_1[2] + *param_1);
      param_1[2] = param_1[2] + 1;
      *(undefined1 *)((longlong)param_2 + 0x23) = uVar2;
    }
  }
  if ((int)param_1[3] != 0) {
    param_1[2] = param_1[2] + 1;
  }
  lVar10 = param_1[2];
  lVar7 = *param_1;
  *(undefined4 *)(param_1 + 3) = 0;
  uVar2 = *(undefined1 *)(lVar7 + 2 + lVar10);
  uVar3 = *(undefined1 *)(lVar7 + 3 + lVar10);
  uVar4 = *(undefined1 *)(lVar7 + 1 + lVar10);
  uVar5 = *(undefined1 *)(lVar7 + lVar10);
  param_1[2] = lVar10 + 4;
  param_2[2] = (uint)((float)CONCAT31(CONCAT21(CONCAT11(uVar3,uVar2),uVar4),uVar5) * 1.5258789e-05 *
                     20.0);
  if ((int)param_1[3] != 0) {
    param_1[2] = param_1[2] + 1;
  }
  lVar10 = param_1[2];
  lVar7 = *param_1;
  *(undefined4 *)(param_1 + 3) = 0;
  uVar2 = *(undefined1 *)(lVar7 + 2 + lVar10);
  uVar3 = *(undefined1 *)(lVar7 + 3 + lVar10);
  uVar4 = *(undefined1 *)(lVar7 + 1 + lVar10);
  uVar5 = *(undefined1 *)(lVar7 + lVar10);
  param_1[2] = lVar10 + 4;
  param_2[3] = (uint)((float)CONCAT31(CONCAT21(CONCAT11(uVar3,uVar2),uVar4),uVar5) * 1.5258789e-05 *
                     20.0);
  if ((param_5 & 4) != 0) {
    if ((int)param_1[3] != 0) {
      param_1[2] = param_1[2] + 1;
    }
    lVar10 = param_1[2];
    lVar7 = *param_1;
    *(undefined4 *)(param_1 + 3) = 0;
    uVar2 = *(undefined1 *)(lVar7 + 2 + lVar10);
    uVar3 = *(undefined1 *)(lVar7 + 3 + lVar10);
    uVar4 = *(undefined1 *)(lVar7 + 1 + lVar10);
    uVar5 = *(undefined1 *)(lVar7 + lVar10);
    param_1[2] = lVar10 + 4;
    *param_3 = (float)CONCAT31(CONCAT21(CONCAT11(uVar3,uVar2),uVar4),uVar5) * 1.5258789e-05;
    if ((int)param_1[3] != 0) {
      param_1[2] = param_1[2] + 1;
    }
    lVar10 = param_1[2];
    lVar7 = *param_1;
    *(undefined4 *)(param_1 + 3) = 0;
    uVar2 = *(undefined1 *)(lVar7 + 2 + lVar10);
    uVar3 = *(undefined1 *)(lVar7 + 3 + lVar10);
    uVar4 = *(undefined1 *)(lVar7 + 1 + lVar10);
    uVar5 = *(undefined1 *)(lVar7 + lVar10);
    param_1[2] = lVar10 + 4;
    *param_4 = (float)CONCAT31(CONCAT21(CONCAT11(uVar3,uVar2),uVar4),uVar5) * 1.5258789e-05;
  }
  if ((param_5 & 8) != 0) {
    if ((int)param_1[3] != 0) {
      param_1[2] = param_1[2] + 1;
    }
    lVar10 = param_1[2];
    *(undefined4 *)(param_1 + 3) = 0;
    uVar2 = *(undefined1 *)(*param_1 + 1 + lVar10);
    uVar3 = *(undefined1 *)(*param_1 + lVar10);
    param_1[2] = lVar10 + 2;
    param_2[6] = (uint)((float)CONCAT11(uVar2,uVar3) * 0.00390625);
  }
  if ((int)param_1[3] != 0) {
    param_1[2] = param_1[2] + 1;
  }
  *(undefined4 *)(param_1 + 3) = 0;
  bVar1 = *(byte *)(param_1[2] + *param_1);
  param_1[2] = param_1[2] + 1;
  if (param_7 != 0xf8) {
    uVar11 = bVar1 >> 2 & 0x20;
    uVar9 = uVar11 | 0x10;
    if ((bVar1 & 0x40) == 0) {
      uVar9 = uVar11;
    }
    uVar11 = uVar9 | 0x40;
    if ((bVar1 & 0x20) != 0) {
      uVar11 = uVar9;
    }
    if ((param_7 < 0x10) && ((bVar1 & 0x10) != 0)) {
      uVar11 = uVar11 | 0x80;
    }
    *param_2 = uVar11 | param_6;
    param_2[1] = bVar1 & param_7;
    return;
  }
  *param_2 = param_6;
  param_2[1] = (uint)(bVar1 >> 3);
  return;
}



// FUNCTION 1433f7fd0 FUN_1433f7fd0 body=1357 status=ok
// SIG undefined FUN_1433f7fd0(void)

void FUN_1433f7fd0(longlong param_1,uint *param_2,float *param_3,float *param_4,uint param_5,
                  uint param_6,uint param_7)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  RefCountImpl RVar6;
  uint uVar7;
  longlong lVar8;
  RefCountImpl *this;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  RefCountImpl *pRVar12;
  RefCountImpl *pRVar13;
  int iVar14;
  undefined4 local_res8;
  
  pRVar13 = (RefCountImpl *)0x0;
  if ((param_5 & 0x10) != 0) {
    *(undefined1 *)(param_1 + 0x29) = 0;
    if (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) < 1) {
      FUN_143396d60();
    }
    bVar1 = *(byte *)((ulonglong)*(uint *)(param_1 + 0x4c) + *(longlong *)(param_1 + 0x60));
    uVar11 = (ulonglong)bVar1;
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) + 1;
    lVar8 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x38);
    this = pRVar13;
    if (lVar8 != 0) {
      this = (RefCountImpl *)FUN_143321870(lVar8,0,bVar1,0);
    }
    uVar10 = uVar11;
    pRVar12 = pRVar13;
    if (bVar1 != 0) {
      do {
        lVar8 = *(longlong *)(this + 0x20);
        *(undefined1 *)(param_1 + 0x29) = 0;
        if (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) < 1) {
          FUN_143396d60(param_1);
        }
        iVar14 = *(uint *)(param_1 + 0x4c) + 1;
        uVar2 = *(undefined1 *)
                 ((ulonglong)*(uint *)(param_1 + 0x4c) + *(longlong *)(param_1 + 0x60));
        *(int *)(param_1 + 0x4c) = iVar14;
        *(undefined1 *)(param_1 + 0x29) = 0;
        if (*(int *)(param_1 + 0x50) - iVar14 < 1) {
          FUN_143396d60(param_1);
        }
        iVar14 = *(uint *)(param_1 + 0x4c) + 1;
        uVar3 = *(undefined1 *)
                 ((ulonglong)*(uint *)(param_1 + 0x4c) + *(longlong *)(param_1 + 0x60));
        *(int *)(param_1 + 0x4c) = iVar14;
        *(undefined1 *)(param_1 + 0x29) = 0;
        if (*(int *)(param_1 + 0x50) - iVar14 < 1) {
          FUN_143396d60(param_1);
        }
        iVar14 = *(uint *)(param_1 + 0x4c) + 1;
        uVar4 = *(undefined1 *)
                 ((ulonglong)*(uint *)(param_1 + 0x4c) + *(longlong *)(param_1 + 0x60));
        *(int *)(param_1 + 0x4c) = iVar14;
        *(undefined1 *)(param_1 + 0x29) = 0;
        if (*(int *)(param_1 + 0x50) - iVar14 < 1) {
          FUN_143396d60(param_1);
        }
        uVar5 = *(undefined1 *)
                 ((ulonglong)*(uint *)(param_1 + 0x4c) + *(longlong *)(param_1 + 0x60));
        *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) + 1;
        local_res8 = CONCAT13(uVar5,CONCAT21(CONCAT11(uVar2,uVar3),uVar4));
        *(undefined4 *)(pRVar12 + lVar8 + 4) = local_res8;
        uVar10 = uVar10 - 1;
        pRVar12 = pRVar12 + 8;
      } while (uVar10 != 0);
    }
    if (bVar1 != 0) {
      do {
        *(undefined1 *)(param_1 + 0x29) = 0;
        if (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) < 1) {
          FUN_143396d60(param_1);
        }
        RVar6 = *(RefCountImpl *)
                 ((ulonglong)*(uint *)(param_1 + 0x4c) + *(longlong *)(param_1 + 0x60));
        *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) + 1;
        pRVar13[*(longlong *)(this + 0x20)] = RVar6;
        pRVar13 = pRVar13 + 8;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (this != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(this);
    }
    if (*(RefCountImpl **)(param_2 + 10) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_2 + 10));
    }
    *(RefCountImpl **)(param_2 + 10) = this;
    if (this != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(this);
    }
  }
  if (((param_5 & 1) != 0) && (FUN_143396ac0(param_1,param_2 + 7), (param_5 & 2) != 0)) {
    FUN_143396ac0(param_1,param_2 + 8);
  }
  *(undefined1 *)(param_1 + 0x29) = 0;
  if (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) < 4) {
    FUN_143396c40(param_1,4);
  }
  uVar7 = *(uint *)(param_1 + 0x4c);
  lVar8 = *(longlong *)(param_1 + 0x60);
  uVar2 = *(undefined1 *)((ulonglong)(uVar7 + 3) + lVar8);
  uVar3 = *(undefined1 *)((ulonglong)(uVar7 + 2) + lVar8);
  uVar4 = *(undefined1 *)((ulonglong)(uVar7 + 1) + lVar8);
  uVar5 = *(undefined1 *)((ulonglong)uVar7 + lVar8);
  *(uint *)(param_1 + 0x4c) = uVar7 + 4;
  param_2[2] = (uint)((float)CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),uVar5) * 1.5258789e-05 *
                     20.0);
  *(undefined1 *)(param_1 + 0x29) = 0;
  if (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) < 4) {
    FUN_143396c40(param_1,4);
  }
  uVar7 = *(uint *)(param_1 + 0x4c);
  lVar8 = *(longlong *)(param_1 + 0x60);
  uVar2 = *(undefined1 *)((ulonglong)(uVar7 + 3) + lVar8);
  uVar3 = *(undefined1 *)((ulonglong)(uVar7 + 2) + lVar8);
  uVar4 = *(undefined1 *)((ulonglong)(uVar7 + 1) + lVar8);
  uVar5 = *(undefined1 *)((ulonglong)uVar7 + lVar8);
  *(uint *)(param_1 + 0x4c) = uVar7 + 4;
  param_2[3] = (uint)((float)CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),uVar5) * 1.5258789e-05 *
                     20.0);
  if ((param_5 & 4) != 0) {
    *(undefined1 *)(param_1 + 0x29) = 0;
    if (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) < 4) {
      FUN_143396c40(param_1,4);
    }
    uVar7 = *(uint *)(param_1 + 0x4c);
    lVar8 = *(longlong *)(param_1 + 0x60);
    uVar2 = *(undefined1 *)((ulonglong)(uVar7 + 3) + lVar8);
    uVar3 = *(undefined1 *)((ulonglong)(uVar7 + 2) + lVar8);
    uVar4 = *(undefined1 *)((ulonglong)(uVar7 + 1) + lVar8);
    uVar5 = *(undefined1 *)((ulonglong)uVar7 + lVar8);
    *(uint *)(param_1 + 0x4c) = uVar7 + 4;
    *param_3 = (float)CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),uVar5) * 1.5258789e-05;
    *(undefined1 *)(param_1 + 0x29) = 0;
    if (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) < 4) {
      FUN_143396c40(param_1,4);
    }
    uVar7 = *(uint *)(param_1 + 0x4c);
    lVar8 = *(longlong *)(param_1 + 0x60);
    uVar2 = *(undefined1 *)((ulonglong)(uVar7 + 3) + lVar8);
    uVar3 = *(undefined1 *)((ulonglong)(uVar7 + 2) + lVar8);
    uVar4 = *(undefined1 *)((ulonglong)(uVar7 + 1) + lVar8);
    uVar5 = *(undefined1 *)((ulonglong)uVar7 + lVar8);
    *(uint *)(param_1 + 0x4c) = uVar7 + 4;
    *param_4 = (float)CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),uVar5) * 1.5258789e-05;
  }
  if ((param_5 & 8) != 0) {
    *(undefined1 *)(param_1 + 0x29) = 0;
    if (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) < 2) {
      FUN_143396c40(param_1,2);
    }
    uVar2 = *(undefined1 *)
             ((ulonglong)(*(int *)(param_1 + 0x4c) + 1) + *(longlong *)(param_1 + 0x60));
    uVar3 = *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x4c) + *(longlong *)(param_1 + 0x60));
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) + 2;
    param_2[6] = (uint)((float)CONCAT11(uVar2,uVar3) * 0.00390625);
  }
  *(undefined1 *)(param_1 + 0x29) = 0;
  if (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) < 1) {
    FUN_143396d60(param_1);
  }
  bVar1 = *(byte *)((ulonglong)*(uint *)(param_1 + 0x4c) + *(longlong *)(param_1 + 0x60));
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) + 1;
  if (param_7 != 0xf8) {
    uVar9 = bVar1 >> 2 & 0x20;
    uVar7 = uVar9 | 0x10;
    if ((bVar1 & 0x40) == 0) {
      uVar7 = uVar9;
    }
    uVar9 = uVar7 | 0x40;
    if ((bVar1 & 0x20) != 0) {
      uVar9 = uVar7;
    }
    if ((param_7 < 0x10) && ((bVar1 & 0x10) != 0)) {
      uVar9 = uVar9 | 0x80;
    }
    *param_2 = uVar9 | param_6;
    param_2[1] = bVar1 & param_7;
    return;
  }
  *param_2 = param_6;
  param_2[1] = (uint)(bVar1 >> 3);
  return;
}



// FUNCTION 1433f8520 RectPacker body=129 status=ok
// SIG undefined RectPacker(void)

undefined4 * Scaleform::Render::RectPacker::RectPacker(undefined4 *param_1)

{
  *param_1 = 0x400;
  param_1[1] = 0x400;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  return param_1;
}



// FUNCTION 1433f8610 FUN_1433f8610 body=592 status=ok
// SIG undefined FUN_1433f8610(void)

void FUN_1433f8610(undefined4 *param_1)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  int local_res18;
  int iStackX_1c;
  
  uVar11 = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1433f8be0(param_1 + 6,0,*(undefined8 *)(param_1 + 8),&LAB_1433f9200);
    uVar7 = *(ulonglong *)(param_1 + 8);
    lVar8 = *(longlong *)(param_1 + 0xe);
    uVar1 = uVar7 - 1;
    uVar12 = *(uint *)(*(longlong *)(lVar8 + (uVar1 >> 8) * 8) + (uVar1 & 0xff) * 0xc);
    param_1[3] = uVar12;
    param_1[4] = *(undefined4 *)(*(longlong *)(lVar8 + (uVar1 >> 8) * 8) + 4 + (uVar1 & 0xff) * 0xc)
    ;
    if (uVar7 != 0) {
      do {
        uVar3 = *(uint *)(*(longlong *)(lVar8 + (uVar11 >> 8) * 8) + (uVar11 & 0xff) * 0xc);
        if (uVar3 < uVar12) {
          param_1[3] = uVar3;
          uVar12 = uVar3;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar7);
    }
    param_1[2] = 0;
    do {
      uVar4 = *param_1;
      uVar12 = param_1[2];
      *(undefined8 *)(param_1 + 0x26) = 0;
      uVar11 = *(ulonglong *)(param_1 + 0x26) >> 8;
      uVar5 = param_1[1];
      if (*(ulonglong *)(param_1 + 0x28) <= uVar11) {
        if (*(ulonglong *)(param_1 + 0x2a) <= uVar11) {
          if (*(longlong *)(param_1 + 0x2c) == 0) {
            local_res8[0] = 2;
            uVar9 = (**(code **)(*DAT_146b62f28 + 0x70))
                              (DAT_146b62f28,param_1 + 0x24,0x200,local_res8);
          }
          else {
            uVar9 = (**(code **)(*DAT_146b62f28 + 0x58))
                              (DAT_146b62f28,*(longlong *)(param_1 + 0x2c),
                               *(ulonglong *)(param_1 + 0x2a) * 8 + 0x200);
          }
          *(longlong *)(param_1 + 0x2a) = *(longlong *)(param_1 + 0x2a) + 0x40;
          *(undefined8 *)(param_1 + 0x2c) = uVar9;
        }
        local_res10[0] = 2;
        uVar9 = (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_1 + 0x24,0x1c00,local_res10);
        *(undefined8 *)(*(longlong *)(param_1 + 0x2c) + uVar11 * 8) = uVar9;
        *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 1;
      }
      lVar10 = (ulonglong)*(byte *)(param_1 + 0x26) * 0x1c;
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x2c) + uVar11 * 8);
      puVar2 = (undefined4 *)(lVar8 + lVar10);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      *(undefined8 *)(lVar8 + 0x10 + lVar10) = 0xffffffffffffffff;
      *(undefined4 *)(lVar8 + 0x18 + lVar10) = 0xffffffff;
      *(longlong *)(param_1 + 0x26) = *(longlong *)(param_1 + 0x26) + 1;
      FUN_1433f8870(param_1,0,0);
      if (uVar12 < (uint)param_1[2]) {
        iVar6 = param_1[0x12];
        local_res18 = iVar6;
        FUN_1433f8b10(param_1);
        iStackX_1c = param_1[0x12] - iVar6;
        uVar11 = *(ulonglong *)(param_1 + 0x1c) >> 4;
        if (*(ulonglong *)(param_1 + 0x1e) <= uVar11) {
          FUN_1433f9160(param_1 + 0x1a,uVar11);
        }
        *(ulonglong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x22) + uVar11 * 8) +
         (ulonglong)(param_1[0x1c] & 0xf) * 8) = CONCAT44(iStackX_1c,local_res18);
        *(longlong *)(param_1 + 0x1c) = *(longlong *)(param_1 + 0x1c) + 1;
      }
    } while ((ulonglong)(uint)param_1[2] < *(ulonglong *)(param_1 + 8));
  }
  return;
}



// FUNCTION 1433f8870 FUN_1433f8870 body=267 status=ok
// SIG undefined FUN_1433f8870(void)

void FUN_1433f8870(longlong param_1,uint param_2,ulonglong param_3)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint local_res10;
  
  param_3 = param_3 & 0xffffffff;
  lVar3 = (ulonglong)(param_2 & 0xff) * 0x1c +
          *(longlong *)(*(longlong *)(param_1 + 0xb0) + (ulonglong)(param_2 >> 8) * 8);
  uVar4 = *(uint *)(lVar3 + 8);
  local_res10 = param_2;
  if (*(uint *)(param_1 + 0xc) <= uVar4) {
    while (*(uint *)(param_1 + 0x10) <= *(uint *)(lVar3 + 0xc)) {
      param_3 = param_3 & 0xffffffff;
      while( true ) {
        if (*(ulonglong *)(param_1 + 0x20) <= param_3) {
          return;
        }
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x38) + (param_3 >> 8) * 8);
        puVar1 = (uint *)(lVar2 + (param_3 & 0xff) * 0xc);
        if (((-1 < *(int *)(lVar2 + 8 + (param_3 & 0xff) * 0xc)) && (*puVar1 <= uVar4)) &&
           (puVar1[1] <= *(uint *)(lVar3 + 0xc))) break;
        param_3 = param_3 + 1;
      }
      FUN_1433f8990(param_1,local_res10,puVar1);
      puVar1[2] = puVar1[2] | 0x80000000;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      FUN_1433f8870(param_1,*(undefined4 *)(lVar3 + 0x14),param_3 & 0xffffffff);
      local_res10 = *(uint *)(lVar3 + 0x18);
      lVar3 = (ulonglong)(local_res10 & 0xff) * 0x1c +
              *(longlong *)(*(longlong *)(param_1 + 0xb0) + (ulonglong)(local_res10 >> 8) * 8);
      uVar4 = *(uint *)(lVar3 + 8);
      if (uVar4 < *(uint *)(param_1 + 0xc)) {
        return;
      }
    }
  }
  return;
}



// FUNCTION 1433f8990 FUN_1433f8990 body=370 status=ok
// SIG undefined FUN_1433f8990(void)

void FUN_1433f8990(longlong param_1,uint param_2,int *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int *piVar12;
  ulonglong uVar13;
  
  piVar12 = (int *)((ulonglong)(param_2 & 0xff) * 0x1c +
                   *(longlong *)(*(longlong *)(param_1 + 0xb0) + (ulonglong)(param_2 >> 8) * 8));
  iVar7 = *piVar12;
  iVar8 = piVar12[1];
  iVar9 = piVar12[2];
  iVar10 = piVar12[3];
  uVar2 = *(undefined8 *)(piVar12 + 4);
  iVar3 = piVar12[6];
  iVar4 = param_3[1];
  iVar5 = *param_3;
  uVar13 = *(ulonglong *)(param_1 + 0x98) >> 8;
  if (*(ulonglong *)(param_1 + 0xa0) <= uVar13) {
    FUN_1433f90c0(param_1 + 0x90,uVar13);
  }
  lVar11 = (ulonglong)*(byte *)(param_1 + 0x98) * 0x1c;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + uVar13 * 8);
  piVar1 = (int *)(lVar6 + lVar11);
  *piVar1 = iVar7 + iVar5;
  piVar1[1] = iVar8;
  piVar1[2] = iVar9 - iVar5;
  piVar1[3] = iVar4;
  *(undefined8 *)(lVar6 + 0x10 + lVar11) = uVar2;
  *(int *)(lVar6 + 0x18 + lVar11) = iVar3;
  *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + 1;
  uVar13 = *(ulonglong *)(param_1 + 0x98) >> 8;
  if (*(ulonglong *)(param_1 + 0xa0) <= uVar13) {
    FUN_1433f90c0(param_1 + 0x90,uVar13);
  }
  lVar11 = (ulonglong)*(byte *)(param_1 + 0x98) * 0x1c;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + uVar13 * 8);
  *(undefined8 *)(lVar6 + lVar11) = CONCAT44(iVar8 + iVar4,iVar7);
  ((undefined8 *)(lVar6 + lVar11))[1] = CONCAT44(iVar10 - iVar4,iVar9);
  *(undefined8 *)(lVar6 + 0x10 + lVar11) = uVar2;
  *(int *)(lVar6 + 0x18 + lVar11) = iVar3;
  *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + 1;
  piVar12[2] = *param_3;
  piVar12[3] = param_3[1];
  piVar12[4] = param_3[2];
  piVar12[5] = *(int *)(param_1 + 0x98) + -2;
  piVar12[6] = *(int *)(param_1 + 0x98) + -1;
  return;
}



// FUNCTION 1433f8b10 FUN_1433f8b10 body=196 status=ok
// SIG undefined FUN_1433f8b10(void)

void FUN_1433f8b10(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar6 = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    do {
      puVar5 = (undefined8 *)
               ((uVar6 & 0xff) * 0x1c +
               *(longlong *)(*(longlong *)(param_1 + 0xb0) + (uVar6 >> 8) * 8));
      iVar2 = *(int *)(puVar5 + 2);
      if (iVar2 != -1) {
        uVar7 = *(ulonglong *)(param_1 + 0x48) >> 8;
        uVar4 = *puVar5;
        if (*(ulonglong *)(param_1 + 0x50) <= uVar7) {
          FUN_1433b5560(param_1 + 0x40,uVar7);
        }
        bVar1 = *(byte *)(param_1 + 0x48);
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x60) + uVar7 * 8);
        *(undefined8 *)(lVar3 + (ulonglong)bVar1 * 0xc) = uVar4;
        *(int *)(lVar3 + 8 + (ulonglong)bVar1 * 0xc) = iVar2;
        *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(ulonglong *)(param_1 + 0x98));
  }
  return;
}



// FUNCTION 1433f8be0 FUN_1433f8be0 body=1238 status=ok
// SIG undefined FUN_1433f8be0(void)

void FUN_1433f8be0(longlong param_1,ulonglong param_2,ulonglong param_3,code *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  char cVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  ulonglong local_res10;
  ulonglong local_2b8 [80];
  
  if (1 < param_3 - param_2) {
    puVar17 = local_2b8;
    local_res10 = param_3;
LAB_1433f8c2b:
    while (uVar14 = param_2, 9 < (longlong)(local_res10 - param_2)) {
      uVar14 = local_res10 - 1;
      uVar16 = param_2 + 1;
      uVar11 = (longlong)(local_res10 - param_2) / 2 + param_2;
      uVar15 = uVar11 & 0xff;
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar11 >> 8) * 8);
      puVar13 = (undefined8 *)(lVar9 + uVar15 * 0xc);
      lVar1 = (param_2 >> 8) * 8;
      lVar2 = (param_2 & 0xff) * 0xc;
      puVar12 = (undefined8 *)(*(longlong *)(lVar1 + *(longlong *)(param_1 + 0x20)) + lVar2);
      uVar8 = *(undefined4 *)(puVar12 + 1);
      uVar6 = *puVar12;
      *puVar12 = *(undefined8 *)(lVar9 + uVar15 * 0xc);
      *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar13 + 1);
      *puVar13 = uVar6;
      *(undefined4 *)(puVar13 + 1) = uVar8;
      lVar9 = (uVar16 >> 8) * 8;
      lVar3 = (uVar16 & 0xff) * 0xc;
      lVar4 = (uVar14 >> 8) * 8;
      lVar5 = (uVar14 & 0xff) * 0xc;
      cVar10 = (*param_4)(lVar5 + *(longlong *)(lVar4 + *(longlong *)(param_1 + 0x20)),
                          *(longlong *)(lVar9 + *(longlong *)(param_1 + 0x20)) + lVar3);
      if (cVar10 != '\0') {
        puVar12 = (undefined8 *)(*(longlong *)(lVar9 + *(longlong *)(param_1 + 0x20)) + lVar3);
        puVar13 = (undefined8 *)(lVar5 + *(longlong *)(lVar4 + *(longlong *)(param_1 + 0x20)));
        uVar6 = *puVar13;
        uVar8 = *(undefined4 *)(puVar13 + 1);
        *puVar13 = *puVar12;
        *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar12 + 1);
        *puVar12 = uVar6;
        *(undefined4 *)(puVar12 + 1) = uVar8;
      }
      cVar10 = (*param_4)(*(longlong *)(lVar1 + *(longlong *)(param_1 + 0x20)) + lVar2,
                          *(longlong *)(lVar9 + *(longlong *)(param_1 + 0x20)) + lVar3);
      if (cVar10 != '\0') {
        puVar12 = (undefined8 *)(lVar3 + *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar9));
        puVar13 = (undefined8 *)(*(longlong *)(lVar1 + *(longlong *)(param_1 + 0x20)) + lVar2);
        uVar6 = *puVar13;
        uVar8 = *(undefined4 *)(puVar13 + 1);
        *puVar13 = *puVar12;
        *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar12 + 1);
        *puVar12 = uVar6;
        *(undefined4 *)(puVar12 + 1) = uVar8;
      }
      cVar10 = (*param_4)(lVar5 + *(longlong *)(lVar4 + *(longlong *)(param_1 + 0x20)),
                          *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar1) + lVar2);
      if (cVar10 != '\0') {
        puVar12 = (undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar1) + lVar2);
        puVar13 = (undefined8 *)(lVar5 + *(longlong *)(lVar4 + *(longlong *)(param_1 + 0x20)));
        uVar6 = *puVar13;
        uVar8 = *(undefined4 *)(puVar13 + 1);
        *puVar13 = *puVar12;
        *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar12 + 1);
        *puVar12 = uVar6;
        *(undefined4 *)(puVar12 + 1) = uVar8;
      }
      while( true ) {
        do {
          uVar16 = uVar16 + 1;
          cVar10 = (*param_4)(*(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar16 >> 8) * 8) +
                              (uVar16 & 0xff) * 0xc,
                              *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar1) + lVar2);
        } while (cVar10 != '\0');
        do {
          uVar14 = uVar14 - 1;
          cVar10 = (*param_4)(*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar1) + lVar2,
                              *(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar14 >> 8) * 8) +
                              (uVar14 & 0xff) * 0xc);
        } while (cVar10 != '\0');
        lVar9 = *(longlong *)(param_1 + 0x20);
        lVar3 = *(longlong *)(lVar9 + (uVar14 >> 8) * 8);
        uVar6 = *(undefined8 *)(lVar3 + (uVar14 & 0xff) * 0xc);
        puVar13 = (undefined8 *)(lVar3 + (uVar14 & 0xff) * 0xc);
        if ((longlong)uVar14 < (longlong)uVar16) break;
        uVar11 = uVar16 & 0xff;
        lVar9 = *(longlong *)(lVar9 + (uVar16 >> 8) * 8);
        uVar7 = *(undefined8 *)(lVar9 + uVar11 * 0xc);
        puVar12 = (undefined8 *)(lVar9 + uVar11 * 0xc);
        uVar8 = *(undefined4 *)(lVar9 + 8 + uVar11 * 0xc);
        *puVar12 = uVar6;
        *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar13 + 1);
        *puVar13 = uVar7;
        *(undefined4 *)(puVar13 + 1) = uVar8;
      }
      puVar12 = (undefined8 *)(*(longlong *)(lVar9 + lVar1) + lVar2);
      uVar7 = *puVar12;
      uVar8 = *(undefined4 *)(puVar12 + 1);
      *puVar12 = uVar6;
      *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar13 + 1);
      *puVar13 = uVar7;
      *(undefined4 *)(puVar13 + 1) = uVar8;
      if ((longlong)(local_res10 - uVar16) < (longlong)(uVar14 - param_2)) {
        *puVar17 = param_2;
        puVar17[1] = uVar14;
        puVar17 = puVar17 + 2;
        param_2 = uVar16;
      }
      else {
        puVar17[1] = local_res10;
        *puVar17 = uVar16;
        puVar17 = puVar17 + 2;
        local_res10 = uVar14;
      }
    }
joined_r0x0001433f8f4e:
    uVar16 = uVar14 + 1;
    if ((longlong)uVar16 < (longlong)local_res10) {
      lVar1 = (uVar14 >> 8) * 8;
      lVar2 = (uVar14 & 0xff) * 0xc;
      uVar11 = uVar14 + 1;
      cVar10 = (*param_4)(*(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar11 >> 8) * 8) +
                          (uVar11 & 0xff) * 0xc,
                          *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar1) + lVar2);
      while (uVar14 = uVar16, cVar10 != '\0') {
        puVar12 = (undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar1) + lVar2);
        uVar15 = uVar11 - 1;
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar11 >> 8) * 8);
        uVar6 = *(undefined8 *)(lVar1 + (uVar11 & 0xff) * 0xc);
        puVar13 = (undefined8 *)(lVar1 + (uVar11 & 0xff) * 0xc);
        uVar8 = *(undefined4 *)(puVar13 + 1);
        *puVar13 = *puVar12;
        *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar12 + 1);
        *puVar12 = uVar6;
        *(undefined4 *)(puVar12 + 1) = uVar8;
        if (uVar15 == param_2) break;
        lVar1 = (uVar11 - 2 >> 8) * 8;
        lVar2 = (uVar11 - 2 & 0xff) * 0xc;
        cVar10 = (*param_4)(*(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar15 >> 8) * 8) +
                            (uVar15 & 0xff) * 0xc,
                            *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar1) + lVar2);
        uVar11 = uVar15;
      }
      goto joined_r0x0001433f8f4e;
    }
    if (local_2b8 < puVar17) {
      local_res10 = puVar17[-1];
      puVar17 = puVar17 + -2;
      param_2 = *puVar17;
      goto LAB_1433f8c2b;
    }
  }
  return;
}



// FUNCTION 1433f90c0 FUN_1433f90c0 body=152 status=ok
// SIG undefined FUN_1433f90c0(void)

void FUN_1433f90c0(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  undefined4 local_res8 [2];
  
  if (*(ulonglong *)(param_1 + 0x18) <= param_2) {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      local_res8[0] = 2;
      uVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x200,local_res8);
    }
    else {
      uVar1 = (**(code **)(*DAT_146b62f28 + 0x58))
                        (DAT_146b62f28,*(longlong *)(param_1 + 0x20),
                         *(ulonglong *)(param_1 + 0x18) * 8 + 0x200);
    }
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 0x40;
    *(undefined8 *)(param_1 + 0x20) = uVar1;
  }
  local_res8[0] = 2;
  uVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x1c00,local_res8);
  *(undefined8 *)(*(longlong *)(param_1 + 0x20) + param_2 * 8) = uVar1;
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
  return;
}



// FUNCTION 1433f9160 FUN_1433f9160 body=152 status=ok
// SIG undefined FUN_1433f9160(void)

void FUN_1433f9160(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  undefined4 local_res8 [2];
  
  if (*(ulonglong *)(param_1 + 0x18) <= param_2) {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      local_res8[0] = 2;
      uVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x80,local_res8);
    }
    else {
      uVar1 = (**(code **)(*DAT_146b62f28 + 0x58))
                        (DAT_146b62f28,*(longlong *)(param_1 + 0x20),
                         *(ulonglong *)(param_1 + 0x18) * 8 + 0x80);
    }
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 0x10;
    *(undefined8 *)(param_1 + 0x20) = uVar1;
  }
  local_res8[0] = 2;
  uVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x80,local_res8);
  *(undefined8 *)(*(longlong *)(param_1 + 0x20) + param_2 * 8) = uVar1;
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
  return;
}



// FUNCTION 1433f9220 NextRandom body=88 status=ok
// SIG undefined NextRandom(void)

void Scaleform::Alg::Random::NextRandom(void)

{
  longlong lVar1;
  uint uVar2;
  
  DAT_1467ce834 = DAT_1467ce834 + 1 & 7;
  lVar1 = (ulonglong)(uint)(&DAT_1467ce810)[DAT_1467ce834] * 0x2ab5245e + (ulonglong)DAT_1467ce830;
  DAT_1467ce830 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar2 = DAT_1467ce830 + (int)lVar1;
  if (uVar2 < DAT_1467ce830) {
    uVar2 = uVar2 + 1;
    DAT_1467ce830 = DAT_1467ce830 + 1;
  }
  (&DAT_1467ce810)[DAT_1467ce834] = -2 - uVar2;
  return;
}



// FUNCTION 1433f9320 FUN_1433f9320 body=47 status=ok
// SIG undefined FUN_1433f9320(void)

longlong FUN_1433f9320(longlong param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x20) = 0x587c4;
  *(undefined4 *)(param_1 + 0x24) = 7;
  uVar1 = Scaleform::Timer::GetTicksMs();
  Scaleform::Alg::Random::Generator::SeedRandom(param_1,uVar1);
  return param_1;
}



// FUNCTION 1433f9360 SeedRandom body=262 status=ok
// SIG undefined SeedRandom(void)

void Scaleform::Alg::Random::Generator::SeedRandom(uint *param_1,uint param_2)

{
  param_2 = param_2 << 0xd ^ param_2;
  param_2 = param_2 ^ param_2 >> 0x11;
  param_2 = param_2 ^ param_2 << 5;
  *param_1 = param_2;
  param_2 = param_2 ^ param_2 << 0xd;
  param_2 = param_2 ^ param_2 >> 0x11;
  param_2 = param_2 ^ param_2 << 5;
  param_1[1] = param_2;
  param_2 = param_2 ^ param_2 << 0xd;
  param_2 = param_2 ^ param_2 >> 0x11;
  param_2 = param_2 ^ param_2 << 5;
  param_1[2] = param_2;
  param_2 = param_2 ^ param_2 << 0xd;
  param_2 = param_2 ^ param_2 >> 0x11;
  param_2 = param_2 ^ param_2 << 5;
  param_1[3] = param_2;
  param_2 = param_2 ^ param_2 << 0xd;
  param_2 = param_2 ^ param_2 >> 0x11;
  param_2 = param_2 ^ param_2 << 5;
  param_1[4] = param_2;
  param_2 = param_2 ^ param_2 << 0xd;
  param_2 = param_2 ^ param_2 >> 0x11;
  param_2 = param_2 ^ param_2 << 5;
  param_1[5] = param_2;
  param_2 = param_2 ^ param_2 << 0xd;
  param_2 = param_2 ^ param_2 >> 0x11;
  param_2 = param_2 ^ param_2 << 5;
  param_1[6] = param_2;
  param_2 = param_2 ^ param_2 << 0xd;
  param_2 = param_2 ^ param_2 >> 0x11;
  param_1[7] = param_2 << 5 ^ param_2;
  param_1[8] = 0x587c4;
  param_1[9] = 7;
  return;
}



// FUNCTION 1433f94c0 GetUnitFloat body=90 status=ok
// SIG undefined GetUnitFloat(void)

float Scaleform::Alg::Random::Generator::GetUnitFloat(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  uVar1 = *(int *)(param_1 + 0x24) + 1U & 7;
  *(uint *)(param_1 + 0x24) = uVar1;
  lVar3 = (ulonglong)*(uint *)(param_1 + (ulonglong)uVar1 * 4) * 0x2ab5245e +
          (ulonglong)*(uint *)(param_1 + 0x20);
  uVar2 = (uint)((ulonglong)lVar3 >> 0x20);
  *(uint *)(param_1 + 0x20) = uVar2;
  uVar4 = uVar2 + (int)lVar3;
  if (uVar4 < uVar2) {
    uVar4 = uVar4 + 1;
    *(uint *)(param_1 + 0x20) = uVar2 + 1;
  }
  *(uint *)(param_1 + (ulonglong)uVar1 * 4) = -uVar4 - 2;
  return (float)(-uVar4 - 2 >> 8) / 16777215.0;
}



// FUNCTION 1433f9520 FUN_1433f9520 body=129 status=ok
// SIG undefined FUN_1433f9520(void)

bool FUN_1433f9520(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  RefCountNTSImpl *this;
  undefined4 local_res20 [2];
  
  if (*(longlong *)(param_4 + 0x28) == 0) {
    local_res20[0] = 0x43;
    lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_5,0x60,local_res20);
    if (lVar1 == 0) {
      this = (RefCountNTSImpl *)0x0;
    }
    else {
      this = (RefCountNTSImpl *)FUN_1433f98a0(lVar1,param_2);
    }
    FUN_1433cc4b0(param_4,this,0);
    if (this != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this);
    }
  }
  return *(longlong *)(param_4 + 0x28) != 0;
}



// FUNCTION 1433f95e0 FUN_1433f95e0 body=82 status=ok
// SIG undefined FUN_1433f95e0(void)

undefined8 * FUN_1433f95e0(undefined8 *param_1,undefined8 param_2,char param_3)

{
  param_1[1] = 0;
  if (param_3 == '\0') {
    *param_1 = &PTR_PTR_1467ce838;
    (**(code **)(PTR_PTR_1467ce838 + 8))();
    return param_1;
  }
  *param_1 = &PTR_PTR_1467ce848;
  (**(code **)(PTR_PTR_1467ce848 + 8))(&PTR_PTR_1467ce848,0);
  return param_1;
}



// FUNCTION 1433f9640 FUN_1433f9640 body=158 status=ok
// SIG undefined FUN_1433f9640(void)

ulonglong FUN_1433f9640(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  uVar4 = FUN_1432d2cc0(param_1,param_2,*(undefined4 *)(param_1 + 0x40),param_4,param_5);
  if ((char)uVar4 == '\0') {
    return uVar4 & 0xffffffffffffff00;
  }
  plVar5 = (longlong *)(param_1 + 0x60);
  lVar2 = *(longlong *)(param_1 + 0x68);
  uVar4 = lVar2 + 1;
  if (uVar4 < *(ulonglong *)(param_1 + 0x68)) {
    uVar6 = uVar4;
    if (*(ulonglong *)(param_1 + 0x70) >> 1 <= uVar4) goto LAB_1433f96a9;
  }
  else {
    if (uVar4 <= *(ulonglong *)(param_1 + 0x70)) goto LAB_1433f96a9;
    uVar6 = (uVar4 >> 2) + uVar4;
  }
  FUN_1432cfd30(plVar5,plVar5,uVar6);
LAB_1433f96a9:
  lVar3 = *plVar5;
  *(ulonglong *)(param_1 + 0x68) = uVar4;
  puVar1 = (undefined8 *)(lVar3 + lVar2 * 8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_3;
  }
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 1433f96f0 FUN_1433f96f0 body=205 status=ok
// SIG undefined FUN_1433f96f0(void)

ulonglong FUN_1433f96f0(longlong param_1,longlong param_2)

{
  void *_Dst;
  ulonglong in_RAX;
  ulonglong uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    do {
      in_RAX = *(ulonglong *)(param_1 + 0x60);
      if (*(longlong *)(in_RAX + uVar1 * 8) == param_2) {
        if (*(longlong *)(param_1 + 0x68) == 1) {
          if (((*(ulonglong *)(param_1 + 0x70) & 0xfffffffffffffffe) != 0) &&
             (*(ulonglong *)(param_1 + 0x70) != 0)) {
            if (*(longlong *)(param_1 + 0x60) != 0) {
              (**(code **)(*DAT_146b62f28 + 0x60))();
              *(undefined8 *)(param_1 + 0x60) = 0;
            }
            *(undefined8 *)(param_1 + 0x70) = 0;
          }
          *(undefined8 *)(param_1 + 0x68) = 0;
        }
        else {
          _Dst = (void *)(in_RAX + uVar1 * 8);
          memmove(_Dst,(void *)((longlong)_Dst + 8),(*(longlong *)(param_1 + 0x68) - uVar1) * 8 - 8)
          ;
          *(longlong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) + -1;
        }
        in_RAX = FUN_1432d2ea0(param_1,uVar1 & 0xffffffff,1);
        uVar1 = uVar1 - 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ulonglong *)(param_1 + 0x68));
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1433f97d0 FUN_1433f97d0 body=76 status=ok
// SIG undefined FUN_1433f97d0(void)

void FUN_1433f97d0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    do {
      lVar1 = FUN_143405270(*(undefined8 *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x60) + uVar2 * 8) + 0x38));
      uVar2 = uVar2 + 1;
      *(longlong *)(lVar1 + 0x88) = *(longlong *)(lVar1 + 0x88) + 1;
    } while (uVar2 < *(ulonglong *)(param_1 + 0x68));
  }
  return;
}



// FUNCTION 1433f9830 FUN_1433f9830 body=76 status=ok
// SIG undefined FUN_1433f9830(void)

void FUN_1433f9830(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    do {
      lVar1 = FUN_143405270(*(undefined8 *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x60) + uVar2 * 8) + 0x38));
      uVar2 = uVar2 + 1;
      *(longlong *)(lVar1 + 0x88) = *(longlong *)(lVar1 + 0x88) + -1;
    } while (uVar2 < *(ulonglong *)(param_1 + 0x68));
  }
  return;
}



// FUNCTION 1433f98a0 FUN_1433f98a0 body=112 status=ok
// SIG undefined FUN_1433f98a0(void)

undefined8 * FUN_1433f98a0(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145b06570;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  FUN_1433cc0f0(param_1,param_2,0);
  *(undefined1 *)(param_1 + 6) = 1;
  *param_1 = &PTR_FUN_145b06b38;
  param_1[7] = &PTR_LAB_145b06b58;
  param_1[8] = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 1433f9920 ~TextPrimitiveBundle body=104 status=ok
// SIG undefined ~TextPrimitiveBundle(void)

void Scaleform::Render::TextPrimitiveBundle::~TextPrimitiveBundle(RefCountNTSImplCore *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_145b06b38;
  *(undefined ***)(param_1 + 0x38) = &PTR_LAB_145b06b58;
  if (*(RefCountImpl **)(param_1 + 0x58) != (RefCountImpl *)0x0) {
    RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x58));
  }
  FUN_1433fa690(param_1 + 0x40);
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_145af8468;
  *(undefined ***)param_1 = &PTR_FUN_145b06570;
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x10));
  RefCountNTSImplCore::~RefCountNTSImplCore(param_1);
  return;
}



// FUNCTION 1433f9990 FUN_1433f9990 body=109 status=ok
// SIG undefined FUN_1433f9990(void)

void FUN_1433f9990(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 local_res20 [8];
  
  cVar2 = Scaleform::Render::Bundle::findEntryIndex(param_1,local_res20);
  if (cVar2 != '\0') {
    lVar1 = *(longlong *)(param_3 + 0x38);
    lVar3 = FUN_143405270(lVar1);
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x90) != 0)) {
      FUN_1433fa130(param_1,lVar1 + 0x70);
      *(undefined8 *)(lVar3 + 0x90) = 0;
      *(undefined8 *)(lVar3 + 0x98) = 0;
    }
  }
  return;
}



// FUNCTION 1433f9a20 FUN_1433f9a20 body=453 status=ok
// SIG undefined FUN_1433f9a20(void)

void FUN_1433f9a20(longlong param_1,ulonglong param_2,longlong param_3)

{
  RefCountImpl *this;
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined **local_res20;
  
  uVar5 = param_2;
  do {
    if (param_3 + param_2 <= uVar5) {
      FUN_1433cc280(param_1,param_2,param_3);
      return;
    }
    uVar4 = 0;
    lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + uVar5 * 8) + 0x38);
    lVar1 = FUN_143405270(lVar3);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x90) != 0)) {
      if (*(longlong *)(param_1 + 0x40) != 0) {
        do {
          if (*(ulonglong *)(param_1 + 0x40) < 3) {
            lVar2 = param_1 + 0x48;
          }
          else {
            lVar2 = *(longlong *)(param_1 + 0x48);
          }
          FUN_1433f96f0(*(undefined8 *)(lVar2 + uVar4 * 8),lVar3 + 0x70);
          if (*(ulonglong *)(param_1 + 0x40) < 3) {
            lVar2 = param_1 + 0x48;
          }
          else {
            lVar2 = *(longlong *)(param_1 + 0x48);
          }
          if (*(int *)(*(longlong *)(lVar2 + uVar4 * 8) + 0x40) == 0) {
            FUN_1433fa800(param_1 + 0x40,uVar4);
            uVar4 = uVar4 - 1;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(ulonglong *)(param_1 + 0x40));
      }
      if (*(longlong *)(param_1 + 0x58) != 0) {
        lVar3 = FUN_143405270(*(undefined8 *)(lVar3 + 0xa8));
        if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x20) >> 8 & 1) != 0)) {
          Scaleform::Render::TextMeshProvider::GetMaskClearBounds(lVar3);
          lVar3 = *(longlong *)(param_1 + 0x58);
          uVar4 = 0;
          if (*(ulonglong *)(lVar3 + 0x20) != 0) {
            do {
              if (*(undefined ***)(*(longlong *)(lVar3 + 0x18) + uVar4 * 8) == local_res20) {
                Scaleform::Render::MaskPrimitive::Remove(lVar3,uVar4,1);
                break;
              }
              uVar4 = uVar4 + 1;
            } while (uVar4 < *(ulonglong *)(lVar3 + 0x20));
          }
          if (local_res20 != &PTR_LOOP_1467cd040) {
            FUN_1432c03a0(*local_res20);
          }
        }
        this = *(RefCountImpl **)(param_1 + 0x58);
        if (*(longlong *)(this + 0x20) == 0) {
          if (this != (RefCountImpl *)0x0) {
            Scaleform::RefCountImpl::Release(this);
          }
          *(undefined8 *)(param_1 + 0x58) = 0;
        }
      }
      *(undefined8 *)(lVar1 + 0x90) = 0;
      *(undefined8 *)(lVar1 + 0x98) = 0;
    }
    uVar5 = uVar5 + 1;
  } while( true );
}



// FUNCTION 1433f9bf0 FUN_1433f9bf0 body=77 status=ok
// SIG undefined FUN_1433f9bf0(void)

undefined8 FUN_1433f9bf0(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  undefined8 uVar1;
  
  if (*(int *)(param_3 + 0x2c) != 0) {
    return 0;
  }
  if (param_2 != *(longlong *)(param_3 + 0x48)) {
    FUN_1433f9ca0(param_1 + -0x38,param_2,param_3 + 0x48,param_3);
  }
  uVar1 = FUN_1433fa2e0(param_3 + 0x48,param_4);
  return uVar1;
}



// FUNCTION 1433f9ca0 FUN_1433f9ca0 body=232 status=ok
// SIG undefined FUN_1433f9ca0(void)

void FUN_1433f9ca0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = 0;
  uVar4 = 0;
  lVar6 = lVar5;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    do {
      lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + uVar4 * 8) + 0x38);
      lVar2 = FUN_143405270(lVar6);
      if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0x90) != param_1)) {
        *(longlong *)(lVar6 + 0xc0) = lVar5;
      }
      else {
        Scaleform::Render::TextMeshProvider::AddToInUseList(lVar2);
        lVar6 = lVar5;
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar6;
    } while (uVar4 < *(ulonglong *)(param_1 + 0x18));
  }
  plVar1 = (longlong *)*param_4;
  *param_3 = param_2;
  param_3[1] = param_4 + 0x21;
  param_3[2] = plVar1;
  uVar3 = (**(code **)(*plVar1 + 0x130))();
  param_3[4] = param_1;
  param_3[3] = uVar3;
  param_3[7] = lVar6;
  param_3[5] = 0;
  *(undefined2 *)(param_3 + 6) = 0;
  param_3[8] = 0;
  FUN_1433fa3e0(param_3,1);
  return;
}



// FUNCTION 1433f9d90 FUN_1433f9d90 body=696 status=ok
// SIG undefined FUN_1433f9d90(void)

undefined8 FUN_1433f9d90(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  RefCountImpl *this;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  int *piVar11;
  longlong local_res18;
  undefined8 local_res20;
  undefined4 local_48 [2];
  uint local_40;
  undefined4 uStack_3c;
  
  local_res18 = param_3;
  local_40 = (**(code **)(*param_4 + 0x48))(param_4);
  uVar9 = 0;
  local_res20 = (undefined **)((ulonglong)local_res20._4_4_ << 0x20);
  if (local_40 != 0) {
    lVar10 = 0;
    do {
      uVar3 = *(ulonglong *)(param_1 + 0x40);
      piVar11 = (int *)(param_4[0xd] + lVar10);
      if (uVar9 < uVar3) {
        iVar1 = *piVar11;
        do {
          if (uVar3 < 3) {
            lVar8 = param_1 + 0x48;
          }
          else {
            lVar8 = *(longlong *)(param_1 + 0x48);
          }
          this = *(RefCountImpl **)(lVar8 + uVar9 * 8);
          iVar2 = *(int *)(this + 0x58);
          if (iVar1 <= iVar2) {
            if ((iVar2 == iVar1) && (*(longlong *)(this + 0x18) == *(longlong *)(piVar11 + 0xc)))
            goto LAB_1433f9ed7;
            if ((iVar1 < iVar2) || (*(ulonglong *)(piVar11 + 0xc) < *(ulonglong *)(this + 0x18)))
            break;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar3);
      }
      local_48[0] = 0x43;
      this = (RefCountImpl *)
             (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x78,local_48);
      if (this == (RefCountImpl *)0x0) {
        return 0;
      }
      iVar1 = *piVar11;
      FUN_1432d2b40(this,*(undefined8 *)(piVar11 + 0xc));
      *(int *)(this + 0x58) = iVar1;
      *(undefined ***)this = &PTR_FUN_145b06b10;
      *(undefined ***)(this + 0x10) = &PTR_LAB_145b06b18;
      *(undefined8 *)(this + 0x60) = 0;
      *(undefined8 *)(this + 0x68) = 0;
      *(undefined8 *)(this + 0x70) = 0;
      Scaleform::RefCountImpl::AddRef(this);
      puVar5 = (undefined8 *)FUN_1432f7e60(param_1 + 0x40,uVar9);
      if (puVar5 != (undefined8 *)0x0) {
        Scaleform::RefCountImpl::AddRef(this);
        *puVar5 = this;
      }
      Scaleform::RefCountImpl::Release(this);
      Scaleform::RefCountImpl::Release(this);
      param_3 = local_res18;
LAB_1433f9ed7:
      FUN_1433f9640(this,param_2,param_3 + 0x70,*(undefined8 *)(piVar11 + 4),piVar11 + 10);
      lVar10 = lVar10 + 0x40;
      param_4[0x11] = param_4[0x11] + 1;
      uVar7 = (int)local_res20 + 1;
      local_res20 = (undefined **)CONCAT44(local_res20._4_4_,uVar7);
    } while (uVar7 < local_40);
  }
  if ((*(uint *)(param_4 + 4) >> 8 & 1) != 0) {
    if (*(longlong *)(param_1 + 0x58) == 0) {
      local_res18 = CONCAT44(local_res18._4_4_,0x43);
      puVar5 = (undefined8 *)
               (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x38,&local_res18);
      if (puVar5 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)0x0;
      }
      else {
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_144f70a50;
        *puVar5 = &PTR_FUN_145b06590;
        puVar5[2] = &PTR_LAB_145b06598;
        *(undefined4 *)(puVar5 + 1) = 1;
        puVar5[3] = 0;
        puVar5[4] = 0;
        puVar5[5] = 0;
        *(undefined1 *)(puVar5 + 6) = 0;
      }
      if (*(RefCountImpl **)(param_1 + 0x58) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x58));
      }
      *(undefined8 **)(param_1 + 0x58) = puVar5;
      if (puVar5 == (undefined8 *)0x0) {
        return 1;
      }
    }
    local_res20 = *(undefined ***)(param_3 + 0xb0);
    if (local_res20 != &PTR_LOOP_1467cd040) {
      *(int *)(*local_res20 + 8) = *(int *)(*local_res20 + 8) + 1;
    }
    lVar10 = *(longlong *)(param_1 + 0x58);
    uVar4 = *(undefined8 *)(lVar10 + 0x20);
    uVar6 = FUN_1433c0c10(param_4,&local_40,param_2,&local_res20);
    FUN_1432d3e10(lVar10,uVar4,uVar6);
    if ((undefined **)CONCAT44(uStack_3c,local_40) != &PTR_LOOP_1467cd040) {
      FUN_1432c03a0(*(undefined **)CONCAT44(uStack_3c,local_40));
    }
  }
  return 1;
}



// FUNCTION 1433fa050 FUN_1433fa050 body=206 status=ok
// SIG undefined FUN_1433fa050(void)

void FUN_1433fa050(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    do {
      lVar3 = FUN_143405270(*(undefined8 *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x10) + uVar4 * 8) + 0x38));
      if (lVar3 != 0) {
        *(undefined8 *)(lVar3 + 0x90) = 0;
        *(undefined8 *)(lVar3 + 0x98) = 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ulonglong *)(param_1 + 0x18));
  }
  uVar4 = *(ulonglong *)(param_1 + 0x40);
  puVar1 = (undefined8 *)(param_1 + 0x48);
  puVar2 = puVar1;
  if (2 < uVar4) {
    puVar2 = (undefined8 *)*puVar1;
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    if ((RefCountImpl *)*puVar2 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar2);
    }
    puVar2 = puVar2 + 1;
  }
  if (2 < *(ulonglong *)(param_1 + 0x40)) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*puVar1);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (*(RefCountImpl **)(param_1 + 0x58) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x58));
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}



// FUNCTION 1433fa130 FUN_1433fa130 body=300 status=ok
// SIG undefined FUN_1433fa130(void)

void FUN_1433fa130(longlong param_1,longlong param_2)

{
  RefCountImpl *this;
  longlong lVar1;
  ulonglong uVar2;
  undefined **local_res8;
  
  uVar2 = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    do {
      if (*(ulonglong *)(param_1 + 0x40) < 3) {
        lVar1 = param_1 + 0x48;
      }
      else {
        lVar1 = *(longlong *)(param_1 + 0x48);
      }
      FUN_1433f96f0(*(undefined8 *)(lVar1 + uVar2 * 8),param_2);
      if (*(ulonglong *)(param_1 + 0x40) < 3) {
        lVar1 = param_1 + 0x48;
      }
      else {
        lVar1 = *(longlong *)(param_1 + 0x48);
      }
      if (*(int *)(*(longlong *)(lVar1 + uVar2 * 8) + 0x40) == 0) {
        FUN_1433fa800(param_1 + 0x40,uVar2);
        uVar2 = uVar2 - 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ulonglong *)(param_1 + 0x40));
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    lVar1 = FUN_143405270(*(undefined8 *)(param_2 + 0x38));
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x20) >> 8 & 1) != 0)) {
      Scaleform::Render::TextMeshProvider::GetMaskClearBounds(lVar1);
      lVar1 = *(longlong *)(param_1 + 0x58);
      uVar2 = 0;
      if (*(ulonglong *)(lVar1 + 0x20) != 0) {
        do {
          if (*(undefined ***)(*(longlong *)(lVar1 + 0x18) + uVar2 * 8) == local_res8) {
            Scaleform::Render::MaskPrimitive::Remove(lVar1,uVar2,1);
            break;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(ulonglong *)(lVar1 + 0x20));
      }
      if (local_res8 != &PTR_LOOP_1467cd040) {
        FUN_1432c03a0(*local_res8);
      }
    }
    this = *(RefCountImpl **)(param_1 + 0x58);
    if (*(longlong *)(this + 0x20) == 0) {
      if (this != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(this);
      }
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
  }
  return;
}



// FUNCTION 1433fa270 FUN_1433fa270 body=95 status=ok
// SIG undefined FUN_1433fa270(void)

void FUN_1433fa270(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  param_1[1] = param_6;
  *param_1 = param_3;
  param_1[2] = param_2;
  uVar1 = (**(code **)(*param_2 + 0x130))(param_2);
  param_1[4] = param_4;
  param_1[3] = uVar1;
  param_1[7] = param_5;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  FUN_1433fa3e0(param_1,1);
  return;
}



// FUNCTION 1433fa2e0 FUN_1433fa2e0 body=244 status=ok
// SIG undefined FUN_1433fa2e0(void)

undefined8 FUN_1433fa2e0(longlong param_1,undefined1 param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x31) != '\0') {
    *(undefined8 *)(param_1 + 0x40) = 0;
    FUN_1433fa050(*(undefined8 *)(param_1 + 0x20));
    FUN_1433fa3e0(param_1,0);
    *(undefined1 *)(param_1 + 0x31) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  if (*(ulonglong *)(param_1 + 0x28) < *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x40)) {
    do {
      lVar3 = *(longlong *)(param_1 + 0x20);
      if (*(ulonglong *)(lVar3 + 0x40) < 3) {
        lVar3 = lVar3 + 0x48;
      }
      else {
        lVar3 = *(longlong *)(lVar3 + 0x48);
      }
      uVar1 = *(undefined8 *)(lVar3 + *(longlong *)(param_1 + 0x28) * 8);
      iVar2 = FUN_143323170(uVar1,*(undefined8 *)(param_1 + 0x10),uVar1,param_1 + 0x40,
                            *(longlong *)(param_1 + 8) + 0x20,*(undefined8 *)(param_1 + 0x18),
                            param_2);
      if (iVar2 == 1) {
        return 1;
      }
      *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 1;
    } while (*(ulonglong *)(param_1 + 0x28) < *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x40));
  }
  if (*(char *)(param_1 + 0x30) != '\0') {
    Scaleform::Render::TextPrimitiveBundle::unpinLayerBatches(*(undefined8 *)(param_1 + 0x20));
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    *(undefined1 *)(param_1 + 0x31) = 1;
    return 1;
  }
  return 0;
}



// FUNCTION 1433fa3e0 FUN_1433fa3e0 body=357 status=ok
// SIG undefined FUN_1433fa3e0(void)

void FUN_1433fa3e0(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  lVar2 = lVar1;
  while (lVar2 != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0xc0);
    if (*(char *)(param_1 + 0x30) == '\0') {
      lVar6 = *(longlong *)(param_1 + 0x20);
      uVar8 = 0;
      if (*(longlong *)(lVar6 + 0x40) != 0) {
        do {
          if (*(ulonglong *)(lVar6 + 0x40) < 3) {
            lVar9 = lVar6 + 0x48;
          }
          else {
            lVar9 = *(longlong *)(lVar6 + 0x48);
          }
          lVar9 = *(longlong *)(lVar9 + uVar8 * 8);
          uVar7 = 0;
          if (*(longlong *)(lVar9 + 0x68) != 0) {
            do {
              lVar5 = FUN_143405270(*(undefined8 *)
                                     (*(longlong *)(*(longlong *)(lVar9 + 0x60) + uVar7 * 8) + 0x38)
                                   );
              uVar7 = uVar7 + 1;
              *(longlong *)(lVar5 + 0x88) = *(longlong *)(lVar5 + 0x88) + 1;
            } while (uVar7 < *(ulonglong *)(lVar9 + 0x68));
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(ulonglong *)(lVar6 + 0x40));
      }
      *(undefined1 *)(param_1 + 0x30) = 1;
    }
    lVar6 = FUN_143405270(*(undefined8 *)(param_1 + 0x38));
    if ((lVar6 == 0) &&
       (lVar6 = FUN_1434052a0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x10)),
       lVar6 == 0)) break;
    Scaleform::Render::TextMeshProvider::AddToInUseList(lVar6);
    cVar4 = FUN_1433f9d90(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x10),
                          *(undefined8 *)(param_1 + 0x38),lVar6);
    if (cVar4 != '\0') {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      *(longlong *)(lVar6 + 0x98) = *(longlong *)(param_1 + 0x38) + 0x70;
      *(undefined8 *)(lVar6 + 0x90) = uVar3;
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0xc0) = 0;
    *(longlong *)(param_1 + 0x38) = lVar2;
  }
  if ((param_2 == '\0') && (lVar1 == *(longlong *)(param_1 + 0x38))) {
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1433fa550 FUN_1433fa550 body=305 status=ok
// SIG undefined FUN_1433fa550(void)

void FUN_1433fa550(longlong *param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  bVar3 = true;
  if (*param_1 == *param_3) {
    uVar5 = param_3[5];
    uVar1 = *(ulonglong *)(param_1[1] + 0x40);
    bVar3 = uVar1 <= uVar5;
    if (!bVar3) {
      uVar5 = uVar5 + 1;
    }
    if (uVar1 < uVar5) {
      uVar5 = uVar1;
    }
  }
  else {
    uVar5 = *(ulonglong *)(param_1[1] + 0x40);
  }
  if ((ulonglong)param_1[2] < uVar5) {
    do {
      lVar2 = param_1[1];
      if (*(ulonglong *)(lVar2 + 0x40) < 3) {
        lVar4 = lVar2 + 0x48;
      }
      else {
        lVar4 = *(longlong *)(lVar2 + 0x48);
      }
      lVar4 = *(longlong *)(lVar4 + param_1[2] * 8);
      if (10 < *(int *)(lVar4 + 0x58)) {
        if (*(int *)(lVar4 + 0x58) == 0xb) {
          if (((int)param_1[3] == 0) && (*(longlong *)(lVar2 + 0x58) != 0)) {
            (**(code **)(*param_2 + 0x1a0))(param_2);
            *(undefined4 *)(param_1 + 3) = 1;
          }
        }
        else if ((int)param_1[3] == 1) {
          (**(code **)(*param_2 + 0x1a8))(param_2);
          *(undefined4 *)(param_1 + 3) = 2;
        }
      }
      FUN_1433231c0(lVar4,param_2,lVar4,param_3 + 8,param_1 + 4);
      param_1[2] = param_1[2] + 1;
    } while ((ulonglong)param_1[2] < uVar5);
  }
  if (!bVar3) {
    param_1[2] = param_1[2] + -1;
    return;
  }
  if ((int)param_1[3] != 0) {
    (**(code **)(*param_2 + 0x1b0))(param_2);
    *(undefined4 *)(param_1 + 3) = 0;
  }
  *param_1 = 0;
  return;
}



// FUNCTION 1433fa690 FUN_1433fa690 body=124 status=ok
// SIG undefined FUN_1433fa690(void)

void FUN_1433fa690(ulonglong *param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  
  puVar1 = param_1 + 1;
  uVar3 = *param_1;
  puVar2 = puVar1;
  if (2 < uVar3) {
    puVar2 = (ulonglong *)*puVar1;
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    if ((RefCountImpl *)*puVar2 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar2);
    }
    puVar2 = puVar2 + 1;
  }
  if (2 < *param_1) {
                    /* WARNING: Could not recover jumptable at 0x0001433fa701. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*puVar1);
    return;
  }
  return;
}



// FUNCTION 1433fa730 FUN_1433fa730 body=109 status=ok
// SIG undefined FUN_1433fa730(void)

longlong FUN_1433fa730(longlong param_1,uint param_2)

{
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x60));
  FUN_1432d2bd0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 1433fa7a0 FUN_1433fa7a0 body=89 status=ok
// SIG undefined FUN_1433fa7a0(void)

undefined8 FUN_1433fa7a0(undefined8 param_1,ulonglong param_2)

{
  Scaleform::Render::TextPrimitiveBundle::~TextPrimitiveBundle();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1433fa800 FUN_1433fa800 body=148 status=ok
// SIG undefined FUN_1433fa800(void)

void FUN_1433fa800(ulonglong *param_1,longlong param_2)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  
  puVar1 = param_1 + 1;
  puVar6 = puVar1;
  if (2 < *param_1) {
    puVar6 = (ulonglong *)*puVar1;
  }
  if ((RefCountImpl *)puVar6[param_2] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)puVar6[param_2]);
  }
  memmove(puVar6 + param_2,puVar6 + param_2 + 1,(*param_1 - param_2) * 8 - 8);
  *param_1 = *param_1 - 1;
  if (*param_1 != 2) {
    return;
  }
  puVar2 = (undefined4 *)*puVar1;
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  *(undefined4 *)puVar1 = *puVar2;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 2) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x0001433fa88a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))();
  return;
}



// FUNCTION 1433fa8a0 unpinLayerBatches body=127 status=ok
// SIG undefined unpinLayerBatches(void)

void Scaleform::Render::TextPrimitiveBundle::unpinLayerBatches(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    do {
      if (*(ulonglong *)(param_1 + 0x40) < 3) {
        lVar4 = param_1 + 0x48;
      }
      else {
        lVar4 = *(longlong *)(param_1 + 0x48);
      }
      lVar4 = *(longlong *)(lVar4 + uVar3 * 8);
      uVar2 = 0;
      if (*(longlong *)(lVar4 + 0x68) != 0) {
        do {
          lVar1 = FUN_143405270(*(undefined8 *)
                                 (*(longlong *)(*(longlong *)(lVar4 + 0x60) + uVar2 * 8) + 0x38));
          uVar2 = uVar2 + 1;
          *(longlong *)(lVar1 + 0x88) = *(longlong *)(lVar1 + 0x88) + -1;
        } while (uVar2 < *(ulonglong *)(lVar4 + 0x68));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ulonglong *)(param_1 + 0x40));
  }
  return;
}



// FUNCTION 1433fa920 FUN_1433fa920 body=48 status=ok
// SIG undefined FUN_1433fa920(void)

undefined8 * FUN_1433fa920(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[1] = (1L << ((byte)param_2 & 0x3f)) + -1;
  FUN_14338e8a0(param_1 + 2);
  return param_1;
}



// FUNCTION 1433fa960 FUN_1433fa960 body=133 status=ok
// SIG undefined FUN_1433fa960(void)

void FUN_1433fa960(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *param_1;
  *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
  uVar5 = *(ulonglong *)(param_2 + 0x30) >> ((byte)uVar1 & 0x3f);
  uVar3 = uVar5 - 1 >> 5;
  *(uint *)(param_2 + uVar3 * 4 + 0x40) =
       *(uint *)(param_2 + 0x40 + uVar3 * 4) & ~(1 << ((uint)(uVar5 - 1) & 0x1f));
  lVar2 = *(longlong *)(param_2 + 0x38);
  lVar4 = uVar5 << ((byte)*param_1 & 0x3f);
  if (uVar5 < 0x41) {
    *(int *)(lVar4 + -4 + lVar2) = (int)uVar5;
    *(int *)(lVar2 + 0x18) = (int)uVar5;
    *(longlong *)(lVar2 + 0x10) = param_2;
    FUN_14338ec00(param_1 + 2);
    return;
  }
  *(undefined4 *)(lVar4 + -4 + lVar2) = 0x41;
  *(undefined4 *)(lVar2 + 0x18) = 0x41;
  *(ulonglong *)(lVar4 + -0x10 + lVar2) = uVar5;
  *(ulonglong *)(lVar2 + 0x20) = uVar5;
  *(longlong *)(lVar2 + 0x10) = param_2;
  FUN_14338ec00(param_1 + 2);
  return;
}



// FUNCTION 1433fa9f0 FUN_1433fa9f0 body=13 status=ok
// SIG undefined FUN_1433fa9f0(void)

void FUN_1433fa9f0(longlong param_1,longlong param_2)

{
  FUN_14338ecd0(param_1 + 0x10,*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 1433faa10 FUN_1433faa10 body=359 status=ok
// SIG undefined FUN_1433faa10(void)

longlong FUN_1433faa10(undefined8 *param_1,ulonglong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  bVar4 = (byte)*param_1;
  uVar6 = param_2 >> (bVar4 & 0x3f);
  lVar3 = FUN_14338e9a0(param_1 + 2,uVar6);
  if (lVar3 != 0) {
    uVar5 = (ulonglong)*(uint *)(lVar3 + 0x18);
    lVar2 = *(longlong *)(lVar3 + 0x10);
    if (0x40 < uVar5) {
      uVar5 = *(ulonglong *)(lVar3 + 0x20);
    }
    uVar5 = uVar5 - uVar6;
    uVar6 = uVar5 << (bVar4 & 0x3f);
    if (uVar6 < 0x20) {
      param_2 = param_2 + uVar6;
    }
    else {
      lVar1 = lVar3 + param_2;
      if (uVar5 < 0x41) {
        *(int *)((uVar6 - 4) + lVar1) = (int)uVar5;
        *(int *)(lVar1 + 0x18) = (int)uVar5;
      }
      else {
        *(undefined4 *)((uVar6 - 4) + lVar1) = 0x41;
        *(undefined4 *)(lVar1 + 0x18) = 0x41;
        *(ulonglong *)((uVar6 - 0x10) + lVar1) = uVar5;
        *(ulonglong *)(lVar1 + 0x20) = uVar5;
      }
      *(longlong *)(lVar1 + 0x10) = lVar2;
      FUN_14338ec00(param_1 + 2);
      uVar6 = (lVar3 - *(longlong *)(lVar2 + 0x38)) + param_2 >> (bVar4 & 0x3f);
      *(uint *)(lVar2 + (uVar6 >> 5) * 4 + 0x40) =
           *(uint *)(lVar2 + 0x40 + (uVar6 >> 5) * 4) & ~(1 << ((uint)uVar6 & 0x1f));
      uVar5 = (uVar6 - 1) + uVar5;
      uVar6 = uVar5 >> 5;
      *(uint *)(lVar2 + uVar6 * 4 + 0x40) =
           *(uint *)(lVar2 + 0x40 + uVar6 * 4) & ~(1 << ((uint)uVar5 & 0x1f));
    }
    uVar6 = lVar3 - *(longlong *)(lVar2 + 0x38) >> (bVar4 & 0x3f);
    *(uint *)(lVar2 + (uVar6 >> 5) * 4 + 0x40) =
         *(uint *)(lVar2 + 0x40 + (uVar6 >> 5) * 4) | 1 << ((uint)uVar6 & 0x1f);
    uVar5 = (uVar6 - 1) + (param_2 >> (bVar4 & 0x3f));
    uVar6 = uVar5 >> 5;
    *(uint *)(lVar2 + uVar6 * 4 + 0x40) =
         *(uint *)(lVar2 + 0x40 + uVar6 * 4) | 1 << ((uint)uVar5 & 0x1f);
    *param_3 = lVar2;
  }
  return lVar3;
}



// FUNCTION 1433fab80 FUN_1433fab80 body=315 status=ok
// SIG undefined FUN_1433fab80(void)

void FUN_1433fab80(undefined8 *param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  char cVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  char cVar9;
  
  lVar2 = *(longlong *)(param_2 + 0x30);
  lVar3 = *(longlong *)(param_2 + 0x38);
  uVar7 = param_3 - *(longlong *)(param_2 + 0x38) >> ((byte)*param_1 & 0x3f);
  uVar8 = param_4 >> ((byte)*param_1 & 0x3f);
  lVar5 = param_2 + (uVar7 >> 5) * 4;
  *(uint *)(lVar5 + 0x40) = *(uint *)(lVar5 + 0x40) & ~(1 << ((uint)uVar7 & 0x1f));
  uVar1 = uVar8 + uVar7;
  uVar4 = uVar1 - 1 >> 5;
  *(uint *)(param_2 + uVar4 * 4 + 0x40) =
       *(uint *)(param_2 + 0x40 + uVar4 * 4) & ~(1 << ((uint)(uVar1 - 1) & 0x1f));
  if ((uVar7 == 0) ||
     ((*(uint *)(param_2 + 0x40 + (uVar7 - 1 >> 5) * 4) >> ((byte)(uVar7 - 1) & 0x1f) & 1) != 0)) {
    cVar9 = '\0';
  }
  else {
    cVar9 = '\x01';
  }
  if ((param_3 + param_4 < (ulonglong)(lVar2 + lVar3)) &&
     ((*(uint *)(param_2 + 0x40 + (uVar1 >> 5) * 4) >> ((byte)uVar1 & 0x1f) & 1) == 0)) {
    cVar6 = '\x01';
  }
  else {
    cVar6 = '\0';
  }
  lVar5 = uVar8 << ((byte)*param_1 & 0x3f);
  if (uVar8 < 0x41) {
    *(int *)(lVar5 + -4 + param_3) = (int)uVar8;
    *(int *)(param_3 + 0x18) = (int)uVar8;
  }
  else {
    *(undefined4 *)(lVar5 + -4 + param_3) = 0x41;
    *(undefined4 *)(param_3 + 0x18) = 0x41;
    *(ulonglong *)(lVar5 + -0x10 + param_3) = uVar8;
    *(ulonglong *)(param_3 + 0x20) = uVar8;
  }
  *(longlong *)(param_3 + 0x10) = param_2;
  if (cVar6 == '\0' && cVar9 == '\0') {
    FUN_14338ec00(param_1 + 2,param_3);
  }
  else {
    FUN_14338ed90(param_1 + 2,param_3,*param_1,cVar9,cVar6);
  }
  return;
}



// FUNCTION 1433facc0 FUN_1433facc0 body=687 status=ok
// SIG undefined FUN_1433facc0(void)

undefined8
FUN_1433facc0(longlong *param_1,longlong param_2,longlong param_3,ulonglong *param_4,char param_5)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ushort *puVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  
  uVar7 = 0;
  iVar11 = (int)param_3;
  if (param_5 == '\0') {
    if (0 < param_1[1]) {
      lVar16 = param_1[1];
      do {
        lVar13 = lVar16 >> 1;
        puVar6 = (ushort *)((lVar13 + uVar7) * 0x38 + *param_1);
        bVar1 = (byte)puVar6[0x18];
        uVar8 = (ulonglong)bVar1;
        if (param_3 == 0) {
          iVar5 = -(uint)bVar1;
        }
        else {
          lVar15 = param_2 - (longlong)puVar6;
          lVar10 = param_3;
          do {
            uVar2 = *(ushort *)(lVar15 + (longlong)puVar6);
            uVar3 = *puVar6;
            puVar6 = puVar6 + 1;
            lVar10 = lVar10 + -1;
            uVar4 = (uint)uVar2;
            uVar12 = (uint)uVar3;
            if ((lVar10 == 0) || (uVar2 == 0)) break;
            if (uVar4 != uVar12) goto LAB_1433fad72;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
          if ((uVar4 == uVar12) && (uVar8 != 0)) {
            iVar5 = iVar11 - (uint)bVar1;
          }
          else {
LAB_1433fad72:
            iVar5 = uVar4 - uVar12;
          }
        }
        if (-iVar5 < 0) {
          uVar7 = lVar13 + uVar7 + 1;
          lVar13 = lVar16 + (-1 - lVar13);
        }
        lVar16 = lVar13;
      } while (0 < lVar13);
    }
    if ((ulonglong)param_1[1] <= uVar7) {
      return 0;
    }
    lVar16 = uVar7 * 0x38;
    puVar6 = (ushort *)(*param_1 + lVar16);
    bVar1 = (byte)puVar6[0x18];
    uVar7 = (ulonglong)bVar1;
    if (param_3 == 0) {
LAB_1433fae11:
      iVar11 = -(uint)bVar1;
      goto LAB_1433fae15;
    }
    puVar9 = puVar6;
    do {
      uVar2 = *(ushort *)((longlong)puVar9 + (param_2 - (longlong)puVar6));
      uVar3 = *puVar9;
      puVar9 = puVar9 + 1;
      param_3 = param_3 + -1;
      uVar4 = (uint)uVar2;
      uVar12 = (uint)uVar3;
      if ((param_3 == 0) || (uVar2 == 0)) break;
      if (uVar4 != uVar12) goto LAB_1433fae05;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    if ((uVar4 == uVar12) && (uVar7 != 0)) {
      iVar11 = iVar11 - (uint)bVar1;
      goto LAB_1433fae15;
    }
  }
  else {
    if (0 < param_1[1]) {
      lVar16 = param_1[1];
      do {
        lVar10 = lVar16 >> 1;
        lVar13 = (lVar10 + uVar7) * 0x38 + *param_1;
        bVar1 = *(byte *)(lVar13 + 0x30);
        uVar8 = (ulonglong)bVar1;
        if (param_3 == 0) {
          iVar5 = -(uint)bVar1;
        }
        else {
          lVar13 = lVar13 + uVar8 * 2;
          lVar15 = param_2;
          lVar14 = param_3;
          do {
            puVar6 = (ushort *)(lVar15 + -2);
            lVar15 = lVar15 + -2;
            puVar9 = (ushort *)(lVar13 + -2);
            lVar13 = lVar13 + -2;
            lVar14 = lVar14 + -1;
            uVar4 = (uint)*puVar6;
            uVar12 = (uint)*puVar9;
            if ((lVar14 == 0) || (*puVar6 == 0)) break;
            if (uVar4 != uVar12) goto LAB_1433faeb7;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
          if ((uVar4 == uVar12) && (uVar8 != 0)) {
            iVar5 = iVar11 - (uint)bVar1;
          }
          else {
LAB_1433faeb7:
            iVar5 = uVar4 - uVar12;
          }
        }
        if (-iVar5 < 0) {
          uVar7 = lVar10 + uVar7 + 1;
          lVar10 = lVar16 + (-1 - lVar10);
        }
        lVar16 = lVar10;
      } while (0 < lVar10);
    }
    if ((ulonglong)param_1[1] <= uVar7) {
      return 0;
    }
    lVar16 = uVar7 * 0x38;
    puVar6 = (ushort *)(*param_1 + lVar16);
    bVar1 = (byte)puVar6[0x18];
    uVar7 = (ulonglong)bVar1;
    if (param_3 == 0) goto LAB_1433fae11;
    puVar9 = puVar6 + uVar7;
    do {
      uVar2 = *(ushort *)(param_2 + -2);
      uVar4 = (uint)uVar2;
      param_2 = param_2 + -2;
      uVar3 = puVar9[-1];
      uVar12 = (uint)uVar3;
      puVar9 = puVar9 + -1;
      param_3 = param_3 + -1;
      if ((param_3 == 0) || (uVar2 == 0)) break;
      if (uVar2 != uVar3) goto LAB_1433fae05;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    if ((uVar2 == uVar3) && (uVar7 != 0)) {
      iVar11 = iVar11 - (uint)bVar1;
      goto LAB_1433fae15;
    }
  }
LAB_1433fae05:
  iVar11 = uVar4 - uVar12;
LAB_1433fae15:
  if (iVar11 != 0) {
    return 0;
  }
  if (param_4 != (ulonglong *)0x0) {
    *param_4 = (ulonglong)(byte)puVar6[0x18];
  }
  return *(undefined8 *)(lVar16 + 0x28 + *param_1);
}



// FUNCTION 1433faf80 FUN_1433faf80 body=293 status=ok
// SIG undefined FUN_1433faf80(void)

void FUN_1433faf80(longlong *param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ushort *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  
  lVar7 = FUN_1433facc0(param_1,param_2,*(undefined1 *)(param_2 + 0x30),0,0);
  if (lVar7 == 0) {
    lVar7 = 0;
    bVar1 = *(byte *)(param_2 + 0x30);
    if (0 < param_1[1]) {
      lVar12 = param_1[1];
      do {
        lVar13 = lVar12 >> 1;
        puVar8 = (ushort *)((lVar13 + lVar7) * 0x38 + *param_1);
        bVar2 = (byte)puVar8[0x18];
        uVar9 = (ulonglong)bVar2;
        if ((ulonglong)bVar1 == 0) {
          iVar6 = -(uint)bVar2;
        }
        else {
          lVar10 = param_2 - (longlong)puVar8;
          uVar14 = (ulonglong)bVar1;
          do {
            uVar3 = *(ushort *)(lVar10 + (longlong)puVar8);
            uVar4 = *puVar8;
            puVar8 = puVar8 + 1;
            uVar14 = uVar14 - 1;
            uVar5 = (uint)uVar3;
            uVar11 = (uint)uVar4;
            if ((uVar14 == 0) || (uVar3 == 0)) break;
            if (uVar5 != uVar11) goto LAB_1433fb047;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
          if (((uVar5 == uVar11) && (uVar9 != 0)) && (uVar14 != 0)) {
            iVar6 = (uint)bVar1 - (uint)bVar2;
          }
          else {
LAB_1433fb047:
            iVar6 = uVar5 - uVar11;
          }
        }
        if (-iVar6 < 0) {
          lVar7 = lVar13 + lVar7 + 1;
          lVar13 = lVar12 + (-1 - lVar13);
        }
        lVar12 = lVar13;
      } while (0 < lVar13);
    }
    FUN_143404480(param_1,lVar7,param_2);
  }
  return;
}



// FUNCTION 1433fb0b0 FUN_1433fb0b0 body=155 status=ok
// SIG undefined FUN_1433fb0b0(void)

void FUN_1433fb0b0(longlong *param_1,longlong param_2)

{
  RefCountNTSImpl *this;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  uVar2 = uVar1;
  if (param_1[1] != 0) {
    do {
      if (*(longlong *)(*param_1 + 0x28 + uVar1) == param_2) {
        if (param_1[1] == 1) {
          FUN_143404570(param_1,param_1,0);
        }
        else {
          this = *(RefCountNTSImpl **)(*param_1 + 0x28 + uVar1);
          if (this != (RefCountNTSImpl *)0x0) {
            Scaleform::RefCountNTSImpl::Release(this);
          }
          memmove((void *)(*param_1 + uVar1),(void *)((longlong)(*param_1 + uVar1) + 0x38),
                  (param_1[1] - uVar2) * 0x38 - 0x38);
          param_1[1] = param_1[1] + -1;
        }
      }
      else {
        uVar2 = uVar2 + 1;
        uVar1 = uVar1 + 0x38;
      }
    } while (uVar2 < (ulonglong)param_1[1]);
  }
  return;
}



// FUNCTION 1433fb160 FUN_1433fb160 body=1203 status=ok
// SIG undefined FUN_1433fb160(void)

longlong FUN_1433fb160(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  undefined2 uVar7;
  char cVar8;
  int iVar9;
  RefCountImpl *pRVar10;
  ulonglong *puVar11;
  longlong lVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong *plVar16;
  ulonglong uVar17;
  longlong *plVar18;
  undefined1 *puVar19;
  ulonglong uVar20;
  bool bVar21;
  ulonglong local_res10;
  char local_res18;
  longlong *local_res20;
  ulonglong local_88;
  ulonglong *local_80;
  longlong *local_78;
  undefined4 local_70 [2];
  undefined1 *local_68 [6];
  
  plVar1 = param_2 + 3;
  plVar18 = (longlong *)0x0;
  local_res10 = local_res10 & 0xffffffff00000000;
  local_res18 = param_3;
  if (((*plVar1 == 0) || (param_2[2] == 0)) || (cVar8 = FUN_1433dea10(param_2[1]), cVar8 == '\0')) {
    if ((longlong *)*param_2 != (longlong *)0x0) {
      lVar12 = *(longlong *)*param_2;
      plVar15 = plVar18;
      if (lVar12 != 0) {
        uVar17 = *(ulonglong *)(lVar12 + 8);
        uVar20 = uVar17 & param_2[1];
        lVar3 = uVar20 * 3 + 2;
        puVar11 = (ulonglong *)(lVar12 + lVar3 * 8);
        if ((*(longlong *)(lVar12 + lVar3 * 8) != -2) &&
           (uVar14 = uVar20, (puVar11[1] & uVar17) == uVar20)) {
          while (((puVar11[1] & uVar17) != uVar20 || (puVar11[1] != param_2[1]))) {
            uVar14 = *puVar11;
            if (uVar14 == 0xffffffffffffffff) goto LAB_1433fb240;
            puVar11 = (ulonglong *)(lVar12 + uVar14 * 0x18 + 0x10);
          }
          if (-1 < (longlong)uVar14) {
            plVar15 = (longlong *)(lVar12 + (uVar14 + 1) * 0x18);
          }
        }
      }
LAB_1433fb240:
      plVar16 = plVar15 + 1;
      if (plVar15 == (longlong *)0x0) {
        plVar16 = plVar18;
      }
      if (plVar16 != (longlong *)0x0) {
        if ((RefCountImpl *)*plVar16 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::AddRef((RefCountImpl *)*plVar16);
        }
        if ((RefCountImpl *)*plVar1 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release((RefCountImpl *)*plVar1);
        }
        *plVar1 = *plVar16;
        goto LAB_1433fb5af;
      }
    }
    uVar6 = *(ushort *)(param_2[1] + 0x4c);
    if ((uVar6 >> 0xb & 1) == 0) {
      plVar18 = *(longlong **)(param_1 + 0x18);
      local_res20 = plVar18;
      if (((byte)uVar6 >> 2 & 1) != 0) {
        bVar4 = *(byte *)(param_2[1] + 0x4a);
        bVar5 = *(byte *)(param_1 + 0x158);
        puVar11 = (ulonglong *)FUN_1433ddd30();
        lVar12 = (**(code **)(*plVar18 + 8))
                           (plVar18,(*puVar11 & 0xfffffffffffffffc) + 0xc,
                            (bVar5 & 0x20 | bVar4 & 2) >> 1 | -(uint)((bVar4 & 1) != 0) & 2,
                            ~(byte)(uVar6 >> 0xc) & 1,0);
        if ((RefCountImpl *)*plVar1 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release((RefCountImpl *)*plVar1);
        }
        *plVar1 = lVar12;
        param_3 = local_res18;
      }
      if (*plVar1 == 0) {
        if (((param_3 == '\0') && ((*(byte *)(param_1 + 0x15b) & 0x10) == 0)) &&
           (*(longlong *)(param_1 + 0x140) != 0)) {
          local_70[0] = 1;
          FUN_1432c5960(local_68,DAT_146b62f28);
          bVar4 = *(byte *)(param_1 + 0x158);
          uVar7 = *(undefined2 *)(param_2[1] + 0x4c);
          bVar5 = *(byte *)(param_2[1] + 0x4a);
          puVar11 = (ulonglong *)FUN_1433ddd30();
          pRVar10 = (RefCountImpl *)
                    (**(code **)(*local_res20 + 8))
                              (local_res20,(*puVar11 & 0xfffffffffffffffc) + 0xc,
                               (bVar4 & 0x20 | bVar5 & 2) >> 1 | -(uint)((bVar5 & 1) != 0) & 2,
                               (byte)((ushort)uVar7 >> 0xc) & 1 ^ 1,local_70);
          plVar18 = *(longlong **)(param_1 + 0x20);
          bVar21 = plVar18 == (longlong *)0x0;
          if (bVar21) {
            uVar13 = FUN_1432c2f70(&local_88);
          }
          else {
            uVar13 = (**(code **)(*plVar18 + 0x70))(plVar18,&local_80);
          }
          FUN_1432c31e0(&local_res10,uVar13);
          if (bVar21) {
            iVar9 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                              ((local_88 & 0xfffffffffffffffc) + 8,0xffffffff);
            if (iVar9 == 1) {
              (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_88 & 0xfffffffffffffffc);
            }
          }
          if (!bVar21) {
            uVar17 = (ulonglong)local_80 & 0xfffffffffffffffc;
            iVar9 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar17 + 8,0xffffffff);
            if (iVar9 == 1) {
              (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar17);
            }
          }
          puVar19 = &DAT_145af3922;
          if (local_68[0] != (undefined1 *)0x0) {
            puVar19 = local_68[0];
          }
          uVar17 = local_res10 & 0xfffffffffffffffc;
          puVar11 = (ulonglong *)FUN_1433ddd30(param_2[1]);
          FUN_1432bbf90(*(undefined8 *)(param_1 + 0x140),
                        "Missing font \"%s\" in \"%s\". Search log:\n%s",
                        (*puVar11 & 0xfffffffffffffffc) + 0xc,uVar17 + 0xc,puVar19);
          *(byte *)(param_1 + 0x15b) = *(byte *)(param_1 + 0x15b) | 0x10;
          uVar17 = local_res10 & 0xfffffffffffffffc;
          iVar9 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar17 + 8,0xffffffff);
          if (iVar9 == 1) {
            (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar17);
          }
          if (pRVar10 != (RefCountImpl *)0x0) {
            Scaleform::RefCountImpl::Release(pRVar10);
          }
          Scaleform::StringBuffer::~StringBuffer(local_68);
          plVar18 = local_res20;
        }
        lVar12 = (**(code **)(*plVar18 + 0x10))(plVar18);
        if ((RefCountImpl *)*plVar1 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release((RefCountImpl *)*plVar1);
        }
        *plVar1 = lVar12;
      }
    }
    else {
      pRVar10 = (RefCountImpl *)FUN_1433e0b90();
      if (pRVar10 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(pRVar10);
      }
      if ((RefCountImpl *)*plVar1 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)*plVar1);
      }
      *plVar1 = (longlong)pRVar10;
    }
    lVar12 = *param_2;
    if (lVar12 != 0) {
      local_res10 = param_2[1];
      local_80 = &local_res10;
      local_78 = plVar1;
      FUN_143403740(lVar12,*(undefined8 *)(lVar12 + 8),&local_80);
    }
  }
LAB_1433fb5af:
  if (param_2[1] != 0) {
    piVar2 = (int *)(param_2[1] + 8);
    *piVar2 = *piVar2 + 1;
  }
  lVar12 = param_2[2];
  if (lVar12 != 0) {
    piVar2 = (int *)(lVar12 + 8);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_1433dd700(lVar12);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar12);
    }
  }
  param_2[2] = param_2[1];
  return *plVar1;
}



// FUNCTION 1433fb620 FUN_1433fb620 body=518 status=ok
// SIG undefined FUN_1433fb620(void)

ulonglong FUN_1433fb620(longlong param_1,uint param_2,float param_3)

{
  int *piVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  float fVar7;
  ulonglong local_b8;
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
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_40;
  RefCountImpl *local_38;
  RefCountNTSImpl *pRStack_30;
  undefined8 local_28;
  
  if (*(uint *)(param_1 + 0x58) <= param_2) {
    return 0xffffffffffffffff;
  }
  uVar4 = 0;
  piVar1 = *(int **)(*(longlong *)(param_1 + 0x50) + (ulonglong)param_2 * 8);
  fVar7 = (param_3 - (float)piVar1[3]) + (float)*(uint *)(param_1 + 0x90);
  if (*piVar1 < 0) {
    uVar2 = (uint)*(byte *)(piVar1 + 7);
  }
  else {
    uVar2 = piVar1[1];
  }
  lVar5 = 0x2a;
  if (*piVar1 < 0) {
    lVar5 = 0x1e;
  }
  local_a8 = FUN_1433f23a0(piVar1);
  local_a0 = 0;
  local_b8 = lVar5 + (longlong)piVar1;
  local_98 = 0;
  local_90 = 0;
  local_b0 = local_b8 + (ulonglong)uVar2 * 8;
  local_88 = 0xffffffffffffffff;
  local_80 = 0;
  local_78 = 0xffffffffffffffff;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = (RefCountImpl *)0x0;
  pRStack_30 = (RefCountNTSImpl *)0x0;
  local_28 = 0;
  FUN_1433f2020(&local_b8);
  uVar2 = uVar4;
  while( true ) {
    if ((local_b8 == 0) || (local_b0 <= local_b8)) goto LAB_1433fb7c0;
    uVar3 = (ulonglong)*(ushort *)(local_b8 + 2);
    if (((byte)*(ushort *)(local_b8 + 6) >> 6 & 1) != 0) {
      uVar3 = (ulonglong)-(uint)*(ushort *)(local_b8 + 2);
    }
    uVar6 = (int)uVar3 + uVar2;
    if (fVar7 < (float)uVar6) break;
    if ((*(ushort *)(local_b8 + 6) >> 8 & 1) == 0) {
      uVar4 = uVar4 + (*(ushort *)(local_b8 + 4) >> 0xc);
    }
    Scaleform::Render::Text::LineBuffer::GlyphIterator::operator++(&local_b8);
    uVar2 = uVar6;
  }
  if ((float)(uVar3 >> 1) < fVar7 - (float)(int)uVar2) {
    uVar4 = uVar4 + (*(ushort *)(local_b8 + 4) >> 0xc);
  }
LAB_1433fb7c0:
  uVar2 = piVar1[2];
  if ((*piVar1 < 0) && (uVar2 = uVar2 & 0xffffff, uVar2 == 0xffffff)) {
    uVar2 = 0xffffffff;
  }
  if (pRStack_30 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(pRStack_30);
  }
  if (local_38 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_38);
  }
  return (ulonglong)(uVar4 + uVar2);
}



// FUNCTION 1433fb830 FUN_1433fb830 body=532 status=ok
// SIG undefined FUN_1433fb830(void)

void FUN_1433fb830(longlong param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  byte bVar8;
  longlong *plVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  
  fVar1 = *param_2;
  if ((((fVar1 != *(float *)(param_1 + 0xb0)) || (param_2[2] != *(float *)(param_1 + 0xb8))) ||
      (param_2[1] != *(float *)(param_1 + 0xb4))) || (param_2[3] != *(float *)(param_1 + 0xbc))) {
    fVar2 = *(float *)(param_1 + 0xb8);
    fVar3 = param_2[2];
    fVar4 = *(float *)(param_1 + 0xb0);
    fVar5 = *(float *)(param_1 + 0xbc);
    fVar6 = *(float *)(param_1 + 0xb4);
    fVar7 = param_2[1];
    *(float *)(param_1 + 0xbc) = param_2[3];
    *(float *)(param_1 + 0xb0) = fVar1;
    *(float *)(param_1 + 0xb4) = fVar7;
    *(float *)(param_1 + 0xb8) = fVar3;
    *(float *)(param_1 + 0x88) = fVar3 + -40.0;
    *(float *)(param_1 + 0x8c) = *(float *)(param_1 + 0xbc) + -40.0;
    *(float *)(param_1 + 0x80) = fVar1 + 40.0;
    *(float *)(param_1 + 0x84) = fVar7 + 40.0;
    if (param_3 == 1) {
      bVar8 = *(byte *)(param_1 + 0x159);
      fVar1 = *(float *)(param_1 + 0xbc);
      fVar7 = *(float *)(param_1 + 0xb4);
      if ((bVar8 & 0x30) == 0) {
        uVar11 = (uint)(longlong)(fVar3 - *(float *)(param_1 + 0xb0));
        uVar12 = (uint)(longlong)(fVar2 - fVar4);
        if (((uVar12 == uVar11) ||
            ((((*(byte *)(param_1 + 0x158) & 8) == 0 &&
              ((uVar12 <= uVar11 || ((*(byte *)(param_1 + 0x94) & 0x20) == 0)))) &&
             (((bVar8 & 3) == 0 && (cVar10 = FUN_1433fbbd0(param_1), cVar10 == '\0')))))) &&
           ((((uint)(longlong)(fVar5 - fVar6) <= (uint)(longlong)(fVar1 - fVar7) ||
             ((*(byte *)(param_1 + 0x94) & 0x20) == 0)) && ((bVar8 & 8) == 0)))) {
          *(short *)(param_1 + 0x150) = *(short *)(param_1 + 0x150) + 1;
          uVar11 = FUN_1433fe2c0(param_1);
          if (uVar11 < *(uint *)(param_1 + 0x90)) {
            Scaleform::Render::Text::DocView::SetHScrollOffset(param_1,uVar11);
          }
          uVar11 = FUN_1433fe300(param_1);
          if (uVar11 < *(uint *)(param_1 + 0x70)) {
            uVar12 = FUN_1433fe300(param_1);
            if (uVar12 < uVar11) {
              uVar11 = uVar12;
            }
            if (*(uint *)(param_1 + 0x70) != uVar11) {
              Scaleform::Render::Text::LineBuffer::SetFirstVisibleLine(param_1 + 0x50,uVar11);
              plVar9 = *(longlong **)(param_1 + 0x20);
              if (plVar9 != (longlong *)0x0) {
                (**(code **)(*plVar9 + 0x20))(plVar9,param_1,uVar11);
              }
            }
          }
          *(byte *)(param_1 + 0x94) = *(byte *)(param_1 + 0x94) | 1;
          return;
        }
      }
      *(byte *)(param_1 + 0x15b) = *(byte *)(param_1 + 0x15b) | 2;
    }
  }
  return;
}



// FUNCTION 1433fba50 FUN_1433fba50 body=136 status=ok
// SIG undefined FUN_1433fba50(void)

undefined8 FUN_1433fba50(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res8 [2];
  
  if ((*(byte *)(param_1 + 0x15b) & 0x40) == 0) {
    if (*(longlong *)(param_1 + 0x28) == 0) {
      local_res8[0] = 0x4a;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x48,local_res8);
      if (lVar1 != 0) {
        Scaleform::Render::Text::Highlighter::Highlighter(lVar1);
        *(undefined4 *)(lVar1 + 0x38) = 0xbf800000;
        *(undefined2 *)(lVar1 + 0x40) = 0;
        *(undefined4 *)(lVar1 + 0x3c) = 0xbf800000;
      }
      *(longlong *)(param_1 + 0x28) = lVar1;
    }
    uVar2 = Scaleform::Render::Text::DocView::GetSelectionHighlighterDesc(param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1433fbae0 GetSelectionHighlighterDesc body=125 status=ok
// SIG undefined GetSelectionHighlighterDesc(void)

longlong Scaleform::Render::Text::DocView::GetSelectionHighlighterDesc(longlong param_1)

{
  longlong lVar1;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  undefined4 local_20;
  undefined8 local_1c;
  undefined4 local_14;
  undefined1 local_10;
  
  if ((*(longlong *)(param_1 + 0x28) == 0) || ((*(byte *)(param_1 + 0x15b) & 0x40) != 0)) {
    local_48 = 0;
  }
  else {
    local_48 = Highlighter::GetHighlighterPtr(*(longlong *)(param_1 + 0x28),0x7fffffff);
    if (local_48 == 0) {
      local_38 = 0xffffffffffffffff;
      local_14 = 0;
      local_20 = 0x7fffffff;
      local_1c = 0xffffffffff000000;
      local_10 = 0x18;
      local_40 = local_48;
      local_30 = local_48;
      local_28 = local_48;
      lVar1 = FUN_1433f1310(*(undefined8 *)(param_1 + 0x28),&local_48);
      return lVar1;
    }
  }
  return local_48;
}



// FUNCTION 1433fbbd0 FUN_1433fbbd0 body=73 status=ok
// SIG undefined FUN_1433fbbd0(void)

ulonglong FUN_1433fbbd0(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  uVar3 = 0;
  if (*(uint *)(lVar1 + 0x20) != 0) {
    do {
      if ((uint)uVar3 < (uint)*(undefined8 *)(lVar1 + 0x20)) {
        lVar4 = *(longlong *)(*(longlong *)(lVar1 + 0x18) + uVar3 * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(ushort *)(*(longlong *)(lVar4 + 0x18) + 0x22) & 0x600) != 0) {
        return CONCAT71((int7)(uVar3 >> 8),1);
      }
      uVar2 = (uint)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(lVar1 + 0x20));
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1433fbc20 FUN_1433fbc20 body=403 status=ok
// SIG undefined FUN_1433fbc20(void)

undefined8 *
FUN_1433fbc20(undefined8 *param_1,undefined8 param_2,RefCountImpl *param_3,RefCountImpl *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 local_res8 [2];
  
  puVar2 = (undefined8 *)0x0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145b06bb0;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  if (param_3 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_3);
  }
  param_1[3] = param_3;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1433f24d0(param_1 + 10);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  FUN_1433a5d80(param_1 + 0x1c);
  if (param_4 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_4);
  }
  param_1[0x28] = param_4;
  param_1[0x29] = 0;
  local_res8[0] = 0x4a;
  puVar1 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x50,local_res8)
  ;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1433e3c10(puVar1,param_2);
    puVar1[9] = param_1;
    *puVar1 = &PTR_FUN_145b06b78;
    puVar2 = puVar1;
  }
  if ((RefCountNTSImpl *)param_1[2] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[2]);
  }
  param_1[2] = puVar2;
  *(byte *)((longlong)param_1 + 0x159) = *(byte *)((longlong)param_1 + 0x159) & 0xc0;
  *(undefined2 *)((longlong)param_1 + 0x15a) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x2a] = 0x140001;
  param_1[8] = 0xffffffffffffffff;
  param_1[7] = 0xffffffffffffffff;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(byte *)((longlong)param_1 + 0x15b) = *(byte *)((longlong)param_1 + 0x15b) & 0xfb;
  *(byte *)(param_1 + 0x2b) = *(byte *)(param_1 + 0x2b) | 0x80;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  FUN_1433f1e80(param_1 + 0x1c);
  param_1[0x18] = 0;
  return param_1;
}



// FUNCTION 1433fbdc0 ~DocView body=242 status=ok
// SIG undefined ~DocView(void)

void Scaleform::Render::Text::DocView::~DocView(RefCountImplCore *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_145b06bb0;
  FUN_1433fca60();
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (lVar1 != 0) {
    FUN_143403e20(lVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
  }
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*puVar2);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar2);
  }
  if (*(RefCountImpl **)(param_1 + 0x140) != (RefCountImpl *)0x0) {
    RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x140));
  }
  if (*(RefCountImpl **)(param_1 + 0x128) != (RefCountImpl *)0x0) {
    RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x128));
  }
  RefCountNTSImplCore::~RefCountNTSImplCore((RefCountNTSImplCore *)(param_1 + 0xe0));
  if (*(RefCountImpl **)(param_1 + 0xd8) != (RefCountImpl *)0x0) {
    RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0xd8));
  }
  FUN_1433f2510(param_1 + 0x50);
  if (*(RefCountNTSImpl **)(param_1 + 0x20) != (RefCountNTSImpl *)0x0) {
    RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x20));
  }
  if (*(RefCountImpl **)(param_1 + 0x18) != (RefCountImpl *)0x0) {
    RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x18));
  }
  if (*(RefCountNTSImpl **)(param_1 + 0x10) != (RefCountNTSImpl *)0x0) {
    RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x10));
  }
  RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 1433fbec0 GetParentBoneIndex body=27 status=ok
// SIG undefined GetParentBoneIndex(void)

undefined8
FBaseCompactPose<TMemStackAllocator<0>_>::GetParentBoneIndex(longlong param_1,undefined8 param_2)

{
  FUN_1433e3f90(*(undefined8 *)(param_1 + 0x10));
  return param_2;
}



// FUNCTION 1433fbef0 FUN_1433fbef0 body=9 status=ok
// SIG undefined FUN_1433fbef0(void)

void FUN_1433fbef0(longlong param_1)

{
  FUN_1433e3fd0(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 1433fbf00 GetParentBoneIndex body=27 status=ok
// SIG undefined GetParentBoneIndex(void)

undefined8
FBaseCompactPose<TMemStackAllocator<0>_>::GetParentBoneIndex(longlong param_1,undefined8 param_2)

{
  FUN_1433e45e0(*(undefined8 *)(param_1 + 0x10));
  return param_2;
}



// FUNCTION 1433fbf50 SetText body=38 status=ok
// SIG undefined SetText(void)

void Scaleform::Render::Text::DocView::SetText(longlong *param_1)

{
  FUN_1433e3ed0(param_1[2]);
                    /* WARNING: Could not recover jumptable at 0x0001433fbf72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,0x106);
  return;
}



// FUNCTION 1433fbf80 SetText body=38 status=ok
// SIG undefined SetText(void)

void Scaleform::Render::Text::DocView::SetText(longlong *param_1)

{
  FUN_1433e3f30(param_1[2]);
                    /* WARNING: Could not recover jumptable at 0x0001433fbfa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,0x106);
  return;
}



// FUNCTION 1433fbfb0 FUN_1433fbfb0 body=179 status=ok
// SIG undefined FUN_1433fbfb0(void)

void FUN_1433fbfb0(longlong *param_1,longlong param_2,longlong param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  FUN_1433e3d20(param_1[2]);
  if (param_3 == -1) {
    param_3 = -1;
    do {
      param_3 = param_3 + 1;
    } while (*(char *)(param_2 + param_3) != '\0');
  }
  FUN_143405a10(param_1[2],param_2,param_3,param_5,*(byte *)(param_1 + 0x2b) >> 2 & 1,param_4,
                param_6,param_7,param_8);
                    /* WARNING: Could not recover jumptable at 0x0001433fc05f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,0x106);
  return;
}



// FUNCTION 1433fc070 FUN_1433fc070 body=182 status=ok
// SIG undefined FUN_1433fc070(void)

void FUN_1433fc070(longlong *param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  FUN_1433e3d20(param_1[2]);
  if (param_3 == -1) {
    param_3 = Scaleform::SFwcslen(param_2);
  }
  FUN_143405af0(param_1[2],param_2,param_3,param_5,*(byte *)(param_1 + 0x2b) >> 2 & 1,param_4,
                param_6,param_7,param_8);
                    /* WARNING: Could not recover jumptable at 0x0001433fc122. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,0x106);
  return;
}



// FUNCTION 1433fc130 SetTextFormat body=45 status=ok
// SIG undefined SetTextFormat(void)

void Scaleform::Render::Text::DocView::SetTextFormat(longlong *param_1)

{
  *(byte *)((longlong)param_1 + 0x15b) = *(byte *)((longlong)param_1 + 0x15b) & 0xef;
  FUN_1433e6650(param_1[2]);
                    /* WARNING: Could not recover jumptable at 0x0001433fc159. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,1);
  return;
}



// FUNCTION 1433fc170 SetParagraphFormat body=38 status=ok
// SIG undefined SetParagraphFormat(void)

void Scaleform::Render::Text::DocView::SetParagraphFormat(longlong *param_1)

{
  FUN_1433e67a0(param_1[2]);
                    /* WARNING: Could not recover jumptable at 0x0001433fc192. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,1);
  return;
}



// FUNCTION 1433fc1a0 FUN_1433fc1a0 body=185 status=ok
// SIG undefined FUN_1433fc1a0(void)

void FUN_1433fc1a0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 local_res8;
  undefined8 local_res20;
  
  lVar2 = Scaleform::Render::Text::StyledText::GetLength(param_1[2]);
  if (lVar2 != 0) {
    cVar1 = FUN_1433e6590(param_1[2],&local_res20,&local_res8,lVar2 + -1);
    if (cVar1 != '\0') {
      FUN_1433e6f50(param_1[2],param_2,param_3,~(*(byte *)((longlong)param_1 + 0x15b) >> 3) & 1,
                    local_res20,local_res8);
      goto LAB_1433fc23b;
    }
  }
  Scaleform::Render::Text::StyledText::AppendString
            (param_1[2],param_2,param_3,~(*(byte *)((longlong)param_1 + 0x15b) >> 3) & 1);
LAB_1433fc23b:
  (**(code **)(*param_1 + 8))(param_1,6);
  return;
}



// FUNCTION 1433fc260 FUN_1433fc260 body=185 status=ok
// SIG undefined FUN_1433fc260(void)

void FUN_1433fc260(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 local_res8;
  undefined8 local_res20;
  
  lVar2 = Scaleform::Render::Text::StyledText::GetLength(param_1[2]);
  if (lVar2 != 0) {
    cVar1 = FUN_1433e6590(param_1[2],&local_res20,&local_res8,lVar2 + -1);
    if (cVar1 != '\0') {
      FUN_1433e6b70(param_1[2],param_2,param_3,~(*(byte *)((longlong)param_1 + 0x15b) >> 3) & 1,
                    local_res20,local_res8);
      goto LAB_1433fc2fb;
    }
  }
  Scaleform::Render::Text::StyledText::AppendString
            (param_1[2],param_2,param_3,~(*(byte *)((longlong)param_1 + 0x15b) >> 3) & 1);
LAB_1433fc2fb:
  (**(code **)(*param_1 + 8))(param_1,6);
  return;
}



// FUNCTION 1433fc320 FUN_1433fc320 body=130 status=ok
// SIG undefined FUN_1433fc320(void)

void FUN_1433fc320(longlong *param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                  undefined8 param_5)

{
  if (param_3 == -1) {
    param_3 = Scaleform::SFwcslen();
  }
  FUN_143405af0(param_1[2],param_2,param_3,param_5,*(byte *)(param_1 + 0x2b) >> 2 & 1,param_4,0,0,0)
  ;
                    /* WARNING: Could not recover jumptable at 0x0001433fc39e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,6);
  return;
}



// FUNCTION 1433fc3b0 AppendHtml body=103 status=ok
// SIG undefined AppendHtml(void)

void Scaleform::Render::Text::DocView::AppendHtml
               (longlong *param_1,longlong param_2,longlong param_3,undefined1 param_4,
               undefined8 param_5)

{
  if (param_3 == -1) {
    param_3 = -1;
    do {
      param_3 = param_3 + 1;
    } while (*(char *)(param_2 + param_3) != '\0');
  }
  FUN_143405a10(param_1[2],param_2,param_3,param_5,*(byte *)(param_1 + 0x2b) >> 2 & 1,param_4,0,0,0)
  ;
                    /* WARNING: Could not recover jumptable at 0x0001433fc413. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,6);
  return;
}



// FUNCTION 1433fc420 FUN_1433fc420 body=26 status=ok
// SIG undefined FUN_1433fc420(void)

void FUN_1433fc420(longlong param_1)

{
  Scaleform::Render::Text::StyledText::InsertString(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 1433fc440 FUN_1433fc440 body=94 status=ok
// SIG undefined FUN_1433fc440(void)

void FUN_1433fc440(longlong param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  
  lVar1 = param_4 - param_3;
  if (param_4 < param_3) {
    lVar1 = 0;
  }
  FUN_1433e7f80(*(undefined8 *)(param_1 + 0x10),param_3,lVar1);
  Scaleform::Render::Text::StyledText::InsertString
            (*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_5);
  return;
}



// FUNCTION 1433fc4b0 FUN_1433fc4b0 body=1405 status=ok
// SIG undefined FUN_1433fc4b0(void)

longlong FUN_1433fc4b0(longlong *param_1,undefined4 param_2,ulonglong *param_3)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong local_res20;
  longlong *local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  ushort local_36;
  
  lVar13 = 0;
  switch(param_2) {
  case 0:
    if (((int)param_1[0x19] != 0) &&
       (lVar13 = Scaleform::Render::Text::StyledText::GetLength(param_1[2]),
       (ulonglong)*(uint *)(param_1 + 0x19) < lVar13 + 1U)) {
      return 0;
    }
    lVar13 = Scaleform::Render::Text::StyledText::InsertString(param_1[2],param_3 + 1,*param_3,1,1);
    (**(code **)(*param_1 + 8))(param_1,2);
    return lVar13;
  case 1:
    uVar5 = param_3[2];
    lVar13 = Scaleform::Render::Text::StyledText::GetLength(param_1[2]);
    uVar2 = *(uint *)(param_1 + 0x19);
    if ((uVar2 != 0) && ((ulonglong)uVar2 < lVar13 + uVar5)) {
      uVar5 = (ulonglong)uVar2 - lVar13;
    }
    lVar13 = Scaleform::Render::Text::StyledText::InsertString
                       (param_1[2],param_3[1],*param_3,uVar5,
                        (byte)~*(byte *)(param_1 + 0x2b) >> 1 & 2);
    break;
  case 2:
    lVar13 = -1;
    if ((int)param_1[0x19] != 0) {
      lVar8 = Scaleform::Render::Text::StyledText::GetLength(param_1[2]);
      lVar14 = Scaleform::Render::Text::StyledText::GetLength(param_3[1]);
      if ((ulonglong)*(uint *)(param_1 + 0x19) < (ulonglong)(lVar14 + lVar8)) {
        lVar13 = (ulonglong)*(uint *)(param_1 + 0x19) - lVar8;
      }
    }
    lVar13 = FUN_1433e79f0(param_1[2],param_3[1],*param_3,lVar13);
    break;
  case 3:
    uVar5 = *param_3;
    lVar8 = (uVar5 + 1) - uVar5;
    if (uVar5 + 1 < uVar5) {
      lVar8 = lVar13;
    }
    FUN_1433e7f80(param_1[2],uVar5,lVar8);
    lVar13 = 1;
    break;
  case 4:
    uVar5 = *param_3;
    puVar6 = param_3 + 1;
    if (*param_3 <= param_3[1]) {
      uVar5 = param_3[1];
      puVar6 = param_3;
    }
    uVar11 = *puVar6;
    lVar14 = uVar5 - uVar11;
    lVar8 = lVar14;
    goto LAB_1433fc9f1;
  case 5:
    puVar6 = param_3 + 1;
    uVar5 = *param_3;
    if (*param_3 <= param_3[1]) {
      puVar6 = param_3;
      uVar5 = param_3[1];
    }
    uVar11 = *puVar6;
    if ((int)param_1[0x19] != 0) {
      uVar7 = Scaleform::Render::Text::StyledText::GetLength(param_1[2]);
      uVar12 = uVar7;
      if (uVar11 < uVar7) {
        uVar12 = uVar11;
      }
      uVar4 = uVar7;
      if (uVar5 < uVar7) {
        uVar4 = uVar5;
      }
      if ((ulonglong)*(uint *)(param_1 + 0x19) < uVar7 + 1 + (uVar12 - uVar4)) {
        return 0;
      }
    }
    lVar14 = Scaleform::Render::Text::StyledText::InsertString
                       (param_1[2],param_3 + 2,uVar11,1,(byte)~*(byte *)(param_1 + 0x2b) >> 1 & 2);
    uVar11 = uVar11 + 1;
    uVar5 = uVar5 + 1;
    lVar8 = uVar5 - uVar11;
    goto LAB_1433fc9f1;
  case 6:
    puVar6 = param_3 + 1;
    uVar5 = *param_3;
    if (*param_3 <= param_3[1]) {
      puVar6 = param_3;
      uVar5 = param_3[1];
    }
    uVar11 = *puVar6;
    uVar12 = param_3[3];
    if ((int)param_1[0x19] != 0) {
      uVar4 = Scaleform::Render::Text::StyledText::GetLength(param_1[2]);
      uVar7 = uVar4;
      if (uVar11 < uVar4) {
        uVar7 = uVar11;
      }
      uVar10 = uVar4;
      if (uVar5 < uVar4) {
        uVar10 = uVar5;
      }
      lVar8 = uVar4 + (uVar7 - uVar10);
      if ((ulonglong)*(uint *)(param_1 + 0x19) < param_3[3] + lVar8) {
        uVar12 = (ulonglong)*(uint *)(param_1 + 0x19) - lVar8;
      }
    }
    lVar14 = Scaleform::Render::Text::StyledText::InsertString
                       (param_1[2],param_3[2],uVar11,uVar12,
                        (byte)~*(byte *)(param_1 + 0x2b) >> 1 & 2);
    uVar5 = lVar14 + uVar5;
    uVar11 = uVar11 + lVar14;
    lVar8 = uVar5 - uVar11;
LAB_1433fc9f1:
    if (uVar5 < uVar11) {
      lVar8 = lVar13;
    }
    FUN_1433e7f80(param_1[2],uVar11,lVar8);
    lVar13 = lVar14;
    break;
  case 7:
    puVar6 = param_3 + 1;
    uVar5 = *param_3;
    if (*param_3 <= param_3[1]) {
      puVar6 = param_3;
      uVar5 = param_3[1];
    }
    uVar11 = *puVar6;
    lVar13 = -1;
    if ((int)param_1[0x19] != 0) {
      uVar7 = Scaleform::Render::Text::StyledText::GetLength(param_1[2]);
      uVar2 = *(uint *)(param_1 + 0x19);
      uVar12 = uVar7;
      if (uVar11 < uVar7) {
        uVar12 = uVar11;
      }
      uVar4 = uVar7;
      if (uVar5 < uVar7) {
        uVar4 = uVar5;
      }
      lVar14 = (uVar12 - uVar4) + uVar7;
      lVar8 = Scaleform::Render::Text::StyledText::GetLength(param_3[2]);
      if ((ulonglong)uVar2 < (ulonglong)(lVar8 + lVar14)) {
        lVar13 = (ulonglong)*(uint *)(param_1 + 0x19) - lVar14;
      }
    }
    lVar13 = FUN_1433e79f0(param_1[2],param_3[2],uVar11,lVar13);
    uVar11 = lVar13 + uVar11;
    lVar8 = (lVar13 + uVar5) - uVar11;
    if (lVar13 + uVar5 < uVar11) {
      lVar8 = 0;
    }
    FUN_1433e7f80(param_1[2],uVar11,lVar8);
    (**(code **)(*param_1 + 8))(param_1,2);
    return lVar13;
  case 8:
    local_res20 = 0;
    bVar3 = false;
    FUN_1433e8370(param_1[2],&local_68,*param_3,&local_res20);
    if ((((local_68 == (longlong *)0x0) || (local_60 < 0)) || ((int)local_68[1] <= local_60)) ||
       (local_res20 != 0)) {
LAB_1433fc987:
      uVar5 = *param_3;
      if (uVar5 != 0) {
        uVar11 = uVar5 - 1;
        lVar8 = uVar5 - uVar11;
        if (uVar5 < uVar11) {
          lVar8 = lVar13;
        }
        FUN_1433e7f80(param_1[2],uVar11,lVar8);
        return 1;
      }
    }
    else {
      lVar8 = *(longlong *)(*local_68 + local_60 * 8);
      lVar14 = *(longlong *)(lVar8 + 0x18);
      if (lVar14 == 0) goto LAB_1433fc987;
      uVar1 = *(ushort *)(lVar14 + 0x22);
      if ((uVar1 & 0x8080) == 0x8080) {
        local_40 = *(undefined4 *)(lVar14 + 0x18);
        local_3c = *(undefined2 *)(lVar14 + 0x1c);
        local_3a = *(undefined2 *)(lVar14 + 0x1e);
        local_38 = *(undefined2 *)(lVar14 + 0x20);
        local_58 = 0;
        local_50 = 1;
        local_48 = 0;
        local_36 = uVar1;
        FUN_1433df7d0(&local_58,*(undefined8 *)(lVar14 + 0x10));
        local_36 = local_36 & 0x7fff | 0x80;
        uVar9 = FUN_1433e9900(param_1[2]);
        FUN_1433e3210(lVar8,uVar9,&local_58);
        FUN_1433dedf0(&local_58);
        break;
      }
      if ((*(short *)(lVar14 + 0x1a) == 0) && (*(short *)(lVar14 + 0x18) == 0)) goto LAB_1433fc987;
      local_3c = *(undefined2 *)(lVar14 + 0x1c);
      local_3a = *(undefined2 *)(lVar14 + 0x1e);
      local_38 = *(undefined2 *)(lVar14 + 0x20);
      local_58 = 0;
      local_50 = 1;
      local_48 = 0;
      local_40 = CONCAT22(*(short *)(lVar14 + 0x1a),*(undefined2 *)(lVar14 + 0x18));
      local_36 = uVar1;
      FUN_1433df7d0(&local_58,*(undefined8 *)(lVar14 + 0x10));
      local_36 = local_36 | 6;
      local_40 = 0;
      uVar9 = FUN_1433e9900(param_1[2]);
      FUN_1433e3210(lVar8,uVar9,&local_58);
      bVar3 = true;
      FUN_1433dedf0(&local_58);
    }
    if (!bVar3) {
      return 0;
    }
    break;
  default:
    goto switchD_1433fc4f1_default;
  }
  (**(code **)(*param_1 + 8))(param_1,2);
switchD_1433fc4f1_default:
  return lVar13;
}



// FUNCTION 1433fca60 FUN_1433fca60 body=118 status=ok
// SIG undefined FUN_1433fca60(void)

void FUN_1433fca60(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    if (*(RefCountNTSImpl **)(param_1 + 0x10) != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x10));
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    if (*(RefCountNTSImpl **)(param_1 + 0x20) != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x20));
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (*(RefCountImpl **)(param_1 + 0xd8) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0xd8));
    }
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(byte *)(param_1 + 0x94) = *(byte *)(param_1 + 0x94) | 1;
    FUN_1433f3720(param_1 + 0x50,0,*(undefined4 *)(param_1 + 0x58));
    return;
  }
  return;
}



// FUNCTION 1433fcb00 FUN_1433fcb00 body=141 status=ok
// SIG undefined FUN_1433fcb00(void)

void FUN_1433fcb00(longlong param_1,longlong param_2)

{
  int *piVar1;
  bool bVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar3 = 0;
  bVar2 = false;
  while ((((longlong *)(param_1 + 0x50) != (longlong *)0x0 &&
          (uVar3 < *(ulonglong *)(param_1 + 0x58))) && (-1 < (int)uVar3))) {
    piVar1 = *(int **)(*(longlong *)(param_1 + 0x50) + uVar3 * 8);
    if (*piVar1 < 0) {
      iVar4 = piVar1[1];
    }
    else {
      iVar4 = piVar1[7];
    }
    if (*(int *)(param_2 + 0x40) == iVar4) {
      bVar2 = true;
      if (*piVar1 < 0) {
        piVar1[2] = piVar1[2] | 0xffffff;
      }
      else {
        piVar1[2] = -1;
      }
    }
    else if (bVar2) break;
    if (uVar3 < *(ulonglong *)(param_1 + 0x58)) {
      uVar3 = (ulonglong)((int)uVar3 + 1);
    }
  }
  *(byte *)(param_1 + 0x15b) = *(byte *)(param_1 + 0x15b) | 1;
  return;
}



// FUNCTION 1433fcba0 FUN_1433fcba0 body=4508 status=ok
// SIG undefined FUN_1433fcba0(void)

void FUN_1433fcba0(longlong param_1)

{
  byte bVar1;
  int *piVar2;
  uint *puVar3;
  RefCountImpl *this;
  byte bVar4;
  bool bVar5;
  char cVar6;
  short sVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong lVar16;
  byte bVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong *plVar24;
  bool bVar25;
  bool bVar26;
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
  uint local_res18;
  uint local_res20;
  longlong *local_dc8;
  undefined8 uStack_dc0;
  uint local_db8;
  undefined4 uStack_db4;
  byte bStack_db0;
  undefined7 uStack_daf;
  uint local_da8;
  uint local_da4;
  uint local_da0;
  ulonglong local_d98;
  longlong local_d90;
  longlong *local_d88;
  longlong *local_d80;
  undefined8 uStack_d78;
  undefined1 local_d70 [16];
  longlong *local_d60;
  undefined8 uStack_d58;
  undefined1 local_d50 [16];
  longlong local_d38 [4];
  undefined1 local_d18 [344];
  longlong local_bc0;
  longlong local_ba8;
  longlong local_ba0;
  RefCountImpl *local_b98;
  undefined1 local_b90 [344];
  undefined1 local_a38 [344];
  undefined1 local_8e0 [912];
  undefined8 local_550;
  undefined8 local_548;
  undefined8 local_540;
  RefCountImpl *local_530;
  longlong **local_500;
  longlong local_f8;
  uint local_f0;
  uint local_ec;
  uint local_e0;
  int local_dc;
  char local_d4;
  char local_d3;
  
  lVar16 = *(longlong *)(param_1 + 0x10);
  *(float *)(param_1 + 0x80) = *(float *)(param_1 + 0xb0) + 40.0;
  *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0xb4) + 40.0;
  *(float *)(param_1 + 0x88) = *(float *)(param_1 + 0xb8) + -40.0;
  *(float *)(param_1 + 0x8c) = *(float *)(param_1 + 0xbc) + -40.0;
  if (lVar16 == 0) {
    return;
  }
  local_da0 = FUN_143400120();
  local_da4 = *(uint *)(param_1 + 0xcc);
  if ((*(byte *)(param_1 + 0x159) & 0x30) != 0) {
    *(byte *)(param_1 + 0x15b) = *(byte *)(param_1 + 0x15b) | 2;
  }
  local_dc8 = (longlong *)(param_1 + 0x50);
  bStack_db0 = *(byte *)(param_1 + 0x94) >> 2 & 1;
  uVar21 = 0;
  local_d98 = 0;
  uStack_dc0 = 0;
  local_db8 = 0;
  uStack_db4 = 0;
  local_d88 = local_dc8;
  FUN_143402130(local_d38,param_1,*(undefined8 *)(param_1 + 0x140));
  local_res20 = 0;
  local_res18 = 0;
  uVar22 = uVar21;
  do {
    uVar23 = (ulonglong)local_db8;
    plVar24 = local_dc8;
LAB_1433fccf5:
    do {
      iVar8 = (int)uVar23;
      if ((((longlong *)(lVar16 + 0x18) == (longlong *)0x0) || ((longlong)uVar22 < 0)) ||
         ((longlong)*(int *)(lVar16 + 0x20) <= (longlong)uVar22)) {
        if (((plVar24 != (longlong *)0x0) && (uVar23 < (ulonglong)plVar24[1])) && (-1 < iVar8)) {
          FUN_1433f3720(plVar24,uVar23,(int)*(undefined8 *)(param_1 + 0x58) - iVar8);
          *(byte *)(param_1 + 0x94) = *(byte *)(param_1 + 0x94) | 1;
        }
        *(short *)(param_1 + 0x150) = *(short *)(param_1 + 0x150) + 1;
        *(byte *)(param_1 + 0x15b) = *(byte *)(param_1 + 0x15b) & 0xfc;
        bVar1 = *(byte *)(param_1 + 0x158);
        bVar4 = *(byte *)(param_1 + 0x159) >> 2;
        uVar9 = bVar4 & 3;
        *(uint *)(param_1 + 0xc0) = local_res20;
        iVar8 = (int)uVar21;
        *(int *)(param_1 + 0xc4) = iVar8;
        bVar5 = false;
        if (((bVar1 & 3) != 0) || (local_d3 != '\0')) {
          fVar27 = *(float *)(param_1 + 0xb0);
          fVar30 = *(float *)(param_1 + 0xb4);
          fVar32 = *(float *)(param_1 + 0xb8);
          fVar29 = *(float *)(param_1 + 0xbc);
          if ((bVar1 & 1) != 0) {
            bVar17 = *(byte *)(param_1 + 0x159) & 3;
            fVar34 = (float)local_res20 + 80.0;
            if (bVar17 == 1) {
              fVar27 = fVar32 - fVar34;
            }
            else if (bVar17 == 2) {
              fVar27 = fVar27 + ((fVar32 - fVar27) * 0.5 - fVar34 * 0.5);
            }
            fVar32 = fVar27 + fVar34;
          }
          if (((bVar1 & 2) != 0) || (local_d3 != '\0')) {
            fVar34 = (float)uVar21 + 80.0;
            if ((bVar4 & 3) == 0) {
              if (local_d3 != '\0') {
LAB_1433fd30d:
                fVar30 = fVar30 + ((fVar29 - fVar30) * 0.5 - fVar34 * 0.5);
              }
            }
            else {
              if (uVar9 == 3) goto LAB_1433fd30d;
              if (uVar9 == 2) {
                fVar30 = fVar29 - fVar34;
              }
            }
            bVar5 = true;
            fVar29 = fVar30 + fVar34;
          }
          bVar26 = NAN(*(float *)(param_1 + 0xb0));
          bVar25 = NAN(fVar27) || bVar26;
          if (!NAN(fVar27) && !bVar26) {
            bVar26 = false;
            if (fVar27 == *(float *)(param_1 + 0xb0)) {
              if (((fVar32 == *(float *)(param_1 + 0xb8)) && (fVar30 == *(float *)(param_1 + 0xb4)))
                 && (fVar29 == *(float *)(param_1 + 0xbc))) goto LAB_1433fd400;
              bVar25 = NAN(fVar27) || NAN(*(float *)(param_1 + 0xb0));
              bVar26 = fVar27 == *(float *)(param_1 + 0xb0);
            }
            if (((!bVar25) && (bVar26)) &&
               ((fVar32 == *(float *)(param_1 + 0xb8) &&
                ((fVar30 == *(float *)(param_1 + 0xb4) && (fVar29 == *(float *)(param_1 + 0xbc))))))
               ) goto LAB_1433fd400;
          }
          *(float *)(param_1 + 0xbc) = fVar29;
          *(float *)(param_1 + 0xb8) = fVar32;
          *(float *)(param_1 + 0xb0) = fVar27;
          *(float *)(param_1 + 0xb4) = fVar30;
          *(float *)(param_1 + 0x80) = fVar27 + 40.0;
          *(float *)(param_1 + 0x88) = fVar32 + -40.0;
          *(float *)(param_1 + 0x84) = fVar30 + 40.0;
          *(float *)(param_1 + 0x8c) = *(float *)(param_1 + 0xbc) + -40.0;
        }
LAB_1433fd400:
        bVar1 = *(byte *)(param_1 + 0x159) >> 4;
        bVar17 = bVar1 & 3;
        if ((bVar1 & 3) != 0) {
          fVar32 = *(float *)(param_1 + 0xb0) + 40.0;
          fVar29 = *(float *)(param_1 + 0xb4) + 40.0;
          fVar27 = *(float *)(param_1 + 0xb8) + -40.0;
          fVar30 = *(float *)(param_1 + 0xbc) + -40.0;
          if (((*(byte *)(param_1 + 0x158) & 4) == 0) && ((bVar4 & 3) == 0)) {
            uVar9 = 3;
          }
          fVar33 = 1.0;
          fVar34 = 1.0;
          if (bVar17 == 1) {
            fVar27 = fVar27 - fVar32;
            if (fVar27 < (float)(int)local_res20) {
              fVar33 = fVar27 / (float)(int)local_res20;
            }
            fVar30 = fVar30 - fVar29;
            if (fVar30 < (float)iVar8) {
              fVar34 = fVar30 / (float)iVar8;
            }
            if (fVar33 <= fVar34) {
              fVar34 = fVar33;
            }
LAB_1433fd4fc:
            if (fVar34 != 1.0) {
              iVar10 = FUN_1433f3db0(param_1 + 0x50);
              if ((0 < iVar10) && ((float)iVar10 * fVar34 < 120.0)) {
                fVar34 = 120.0 / (float)iVar10;
              }
              *(int *)(param_1 + 0xc0) = (int)(longlong)((float)(int)local_res20 * fVar34);
              *(int *)(param_1 + 0xc4) = (int)(longlong)((float)iVar8 * fVar34);
              FUN_1433f39f0(param_1 + 0x50);
            }
          }
          else if (bVar17 == 2) {
            fVar34 = 3.4028235e+38;
            fVar33 = 3.4028235e+38;
            if (0x13 < (int)local_res20) {
              fVar33 = (fVar27 - fVar32) / (float)(int)local_res20;
            }
            if (0x13 < iVar8) {
              fVar34 = (fVar30 - fVar29) / (float)iVar8;
            }
            if (fVar33 <= fVar34) {
              fVar34 = fVar33;
            }
            if (fVar34 != 3.4028235e+38) goto LAB_1433fd4fc;
          }
        }
        bVar26 = false;
        uVar12 = FUN_1433fe300(param_1);
        if (uVar12 < *(uint *)(param_1 + 0x70)) {
          uVar19 = FUN_1433fe300(param_1);
          if (uVar19 < uVar12) {
            uVar12 = uVar19;
          }
          if (*(uint *)(param_1 + 0x70) != uVar12) {
            Scaleform::Render::Text::LineBuffer::SetFirstVisibleLine(param_1 + 0x50,uVar12);
            plVar24 = *(longlong **)(param_1 + 0x20);
            if (plVar24 != (longlong *)0x0) {
              (**(code **)(*plVar24 + 0x20))(plVar24,param_1,uVar12);
            }
          }
        }
        else {
          bVar26 = uVar12 != local_da4;
        }
        if (((bVar5) || (uVar9 == 0)) || ((*(byte *)(param_1 + 0x158) & 2) != 0))
        goto LAB_1433fd7fc;
        fVar29 = *(float *)(param_1 + 0xbc) + -40.0;
        fVar27 = *(float *)(param_1 + 0x80);
        fVar30 = *(float *)(param_1 + 0x88);
        fVar32 = *(float *)(param_1 + 0x8c);
        fVar36 = *(float *)(param_1 + 0xb4) + 40.0;
        fVar33 = *(float *)(param_1 + 0xb0) + 40.0;
        fVar31 = (float)*(uint *)(param_1 + 0xc4);
        fVar35 = fVar29 - fVar36;
        fVar34 = *(float *)(param_1 + 0xb8) + -40.0;
        if (fVar35 <= fVar31) {
          if (1 < uVar9 - 2) goto LAB_1433fd7b4;
          uVar12 = FUN_1433ffa20(param_1);
          iVar8 = 0;
          fVar27 = 0.0;
          goto LAB_1433fd721;
        }
        fVar28 = fVar36;
        if (uVar9 != 1) {
          fVar34 = fVar30;
          fVar33 = fVar27;
          if (uVar9 == 2) {
            fVar28 = fVar29 - fVar31;
            fVar29 = fVar32;
          }
          else {
            fVar29 = fVar32;
            fVar28 = *(float *)(param_1 + 0x84);
            if (uVar9 == 3) {
              fVar28 = (fVar35 * 0.5 - fVar31 * 0.5) + fVar36;
            }
          }
        }
        *(float *)(param_1 + 0x80) = fVar33;
        *(float *)(param_1 + 0x84) = fVar28;
        *(float *)(param_1 + 0x88) = fVar34;
        *(float *)(param_1 + 0x8c) = fVar29;
        goto LAB_1433fd7fc;
      }
      lVar14 = *(longlong *)(*(longlong *)(lVar16 + 0x18) + uVar22 * 8);
      if (((plVar24 == (longlong *)0x0) || ((ulonglong)plVar24[1] <= uVar23)) || (iVar8 < 0)) {
LAB_1433fd14c:
        local_500 = &local_dc8;
        local_ec = local_f0;
        FUN_143402380(local_d38,lVar14);
        *(byte *)(param_1 + 0x94) = *(byte *)(param_1 + 0x94) | 1;
        uVar9 = local_e0;
        if ((int)local_e0 < (int)local_res20) {
          uVar9 = local_res20;
        }
        lVar14 = Scaleform::Render::Text::Paragraph::GetLength(lVar14);
        if ((lVar14 != 0) ||
           ((*(longlong **)(param_1 + 0xd8) != (longlong *)0x0 &&
            (cVar6 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x10))(), cVar6 == '\0')))) {
          local_res18 = local_dc + local_ec;
          uVar21 = (ulonglong)local_res18;
        }
        uVar23 = (ulonglong)local_db8;
        plVar24 = local_dc8;
        local_res20 = uVar9;
        if ((longlong)uVar22 < *(longlong *)(lVar16 + 0x20)) {
          uVar22 = uVar22 + 1;
          local_d98 = uVar22;
        }
        goto LAB_1433fccf5;
      }
      piVar2 = *(int **)(*plVar24 + uVar23 * 8);
      if ((*(byte *)(param_1 + 0x15b) & 2) == 0) {
        if (*piVar2 < 0) {
          iVar8 = piVar2[1];
        }
        else {
          iVar8 = piVar2[7];
        }
        if (*(int *)(lVar14 + 0x40) == iVar8) {
          if (*piVar2 < 0) {
            sVar7 = (short)piVar2[6];
          }
          else {
            sVar7 = (short)piVar2[9];
          }
          if (*(short *)(lVar14 + 0x44) == sVar7) {
            lVar13 = *(longlong *)(lVar14 + 0x38);
            if (*(longlong **)(param_1 + 0xd8) != (longlong *)0x0) {
              lVar13 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x20))();
              uVar23 = (ulonglong)local_db8;
              plVar24 = local_dc8;
            }
            while (((plVar24 != (longlong *)0x0 && (uVar23 < (ulonglong)plVar24[1])) &&
                   (-1 < (int)uVar23))) {
              puVar3 = *(uint **)(*plVar24 + uVar23 * 8);
              if ((int)*puVar3 < 0) {
                uVar9 = puVar3[1];
              }
              else {
                uVar9 = puVar3[7];
              }
              if (*(uint *)(lVar14 + 0x40) != uVar9) break;
              if ((int)*puVar3 < 0) {
                puVar3[2] = puVar3[2] & 0xff000000;
                puVar3[2] = puVar3[2] | (uint)lVar13 & 0xffffff;
              }
              else {
                puVar3[2] = (uint)lVar13;
              }
              local_da8 = puVar3[4];
              uVar9 = puVar3[3];
              if ((int)*puVar3 < 0) {
                uVar22 = (ulonglong)*(byte *)((longlong)puVar3 + 0xb);
              }
              else {
                uVar22 = (ulonglong)puVar3[8];
              }
              local_d90 = lVar13 + uVar22;
              puVar3[4] = local_f0;
              if ((int)*puVar3 < 0) {
                uVar12 = (uint)(ushort)puVar3[5];
              }
              else {
                uVar12 = puVar3[5];
              }
              if ((int)uVar12 < (int)local_res20) {
                uVar12 = local_res20;
              }
              lVar13 = Scaleform::Render::Text::Paragraph::GetLength(lVar14);
              if ((lVar13 != 0) ||
                 ((*(longlong **)(param_1 + 0xd8) != (longlong *)0x0 &&
                  (cVar6 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x10))(), cVar6 == '\0')))
                 ) {
                if ((int)*puVar3 < 0) {
                  local_res18 = (uint)*(ushort *)((longlong)puVar3 + 0x16);
                }
                else {
                  local_res18 = puVar3[6];
                }
                local_res18 = local_f0 + local_res18;
              }
              if ((int)*puVar3 < 0) {
                uVar19 = (uint)*(ushort *)((longlong)puVar3 + 0x16);
                iVar8 = (int)*(char *)((longlong)puVar3 + 0x1d);
              }
              else {
                uVar19 = puVar3[6];
                iVar8 = (int)(short)puVar3[10];
              }
              local_f0 = local_f0 + iVar8 + uVar19;
              if ((*(byte *)(param_1 + 0x158) & 1) != 0) {
                uVar19 = *puVar3;
                uVar18 = uVar19 >> 0x1b & 3;
                if (uVar18 == 1) {
                  fVar27 = *(float *)(param_1 + 0x88) - *(float *)(param_1 + 0x80);
                  if (fVar27 <= 0.0) {
                    fVar27 = fVar27 - 0.5;
                  }
                  else {
                    fVar27 = fVar27 + 0.5;
                  }
                  if ((int)uVar19 < 0) {
                    uVar19 = (uint)(ushort)puVar3[5];
                  }
                  else {
                    uVar19 = puVar3[5];
                  }
                  uVar19 = (int)fVar27 - uVar19;
                  if ((int)uVar19 < 0) {
                    uVar19 = 0;
                  }
                  puVar3[3] = uVar19;
                }
                else {
                  if (uVar18 != 2) goto LAB_1433fcf8a;
                  fVar27 = (*(float *)(param_1 + 0x88) - *(float *)(param_1 + 0x80)) * 0.5;
                  if (fVar27 <= 0.0) {
                    fVar27 = fVar27 - 0.5;
                  }
                  else {
                    fVar27 = fVar27 + 0.5;
                  }
                  if ((int)uVar19 < 0) {
                    uVar19 = (uint)(ushort)puVar3[5];
                  }
                  else {
                    uVar19 = puVar3[5];
                  }
                  uVar19 = (int)fVar27 - (int)uVar19 / 2;
                  if ((int)uVar19 < 0) {
                    uVar19 = 0;
                  }
                  puVar3[3] = uVar19;
                }
                local_d4 = '\x01';
              }
LAB_1433fcf8a:
              if ((uVar9 != puVar3[3]) || (local_da8 != puVar3[4])) {
                *(byte *)(param_1 + 0x94) = *(byte *)(param_1 + 0x94) | 1;
              }
              uVar23 = (ulonglong)local_db8;
              lVar13 = local_d90;
              plVar24 = local_dc8;
              local_res20 = uVar12;
              if (uVar23 < (ulonglong)local_dc8[1]) {
                local_db8 = local_db8 + 1;
                uVar23 = (ulonglong)local_db8;
              }
            }
            uVar21 = (ulonglong)local_res18;
            uVar22 = local_d98;
            if ((longlong)local_d98 < *(longlong *)(lVar16 + 0x20)) {
              uVar22 = local_d98 + 1;
              local_d98 = uVar22;
            }
            goto LAB_1433fccf5;
          }
        }
      }
      iVar8 = *piVar2;
      uVar9 = piVar2[2];
      if ((iVar8 < 0) && (uVar9 = uVar9 & 0xffffff, uVar9 == 0xffffff)) {
        uVar9 = 0xffffffff;
      }
      if (uVar9 != 0xffffffff) {
        if (iVar8 < 0) {
          iVar10 = piVar2[1];
        }
        else {
          iVar10 = piVar2[7];
        }
        if (*(int *)(lVar14 + 0x40) == iVar10) {
          if (iVar8 < 0) {
            sVar7 = (short)piVar2[6];
          }
          else {
            sVar7 = (short)piVar2[9];
          }
          if (*(short *)(lVar14 + 0x44) != sVar7) {
            local_d50._4_4_ = uStack_db4;
            local_d50._0_4_ = local_db8;
            local_d50[8] = bStack_db0;
            local_d50._9_7_ = uStack_daf;
            iVar8 = 0;
            local_d60 = local_dc8;
            uStack_d58 = uStack_dc0;
            for (uVar9 = local_db8;
                ((local_dc8 != (longlong *)0x0 && ((ulonglong)uVar9 < (ulonglong)local_dc8[1])) &&
                (-1 < (int)uVar9)); uVar9 = uVar9 + 1) {
              piVar2 = *(int **)(*local_dc8 + (ulonglong)uVar9 * 8);
              if (*piVar2 < 0) {
                iVar10 = piVar2[1];
              }
              else {
                iVar10 = piVar2[7];
              }
              if (iVar10 != *(int *)(lVar14 + 0x40)) break;
              iVar8 = iVar8 + 1;
            }
            FUN_1433f3720(plVar24,uVar23,iVar8);
            *(byte *)(param_1 + 0x94) = *(byte *)(param_1 + 0x94) | 1;
          }
        }
        uVar21 = (ulonglong)local_res18;
        goto LAB_1433fd14c;
      }
      iVar10 = 0;
      if (iVar8 < 0) {
        iVar8 = piVar2[1];
      }
      else {
        iVar8 = piVar2[7];
      }
      local_d80 = local_dc8;
      uStack_d78 = uStack_dc0;
      local_d70._4_4_ = uStack_db4;
      local_d70._0_4_ = local_db8;
      local_d70[8] = bStack_db0;
      local_d70._9_7_ = uStack_daf;
      for (uVar9 = local_db8;
          ((local_dc8 != (longlong *)0x0 && ((ulonglong)uVar9 < (ulonglong)local_dc8[1])) &&
          (-1 < (int)uVar9)); uVar9 = uVar9 + 1) {
        piVar2 = *(int **)(*local_dc8 + (ulonglong)uVar9 * 8);
        if (*piVar2 < 0) {
          iVar11 = piVar2[1];
        }
        else {
          iVar11 = piVar2[7];
        }
        if (iVar11 != iVar8) break;
        iVar10 = iVar10 + 1;
      }
      uVar21 = (ulonglong)local_res18;
    } while (iVar10 == 0);
    FUN_1433f3720(plVar24,uVar23,iVar10);
    *(byte *)(param_1 + 0x94) = *(byte *)(param_1 + 0x94) | 1;
  } while( true );
LAB_1433fd721:
  if (((local_d88 == (longlong *)0x0) || ((ulonglong)local_d88[1] <= (ulonglong)uVar12)) ||
     ((int)uVar12 < 0)) goto LAB_1433fd780;
  piVar2 = *(int **)(*local_d88 + (ulonglong)uVar12 * 8);
  if (*piVar2 < 0) {
    uVar19 = (uint)*(ushort *)((longlong)piVar2 + 0x16);
  }
  else {
    uVar19 = piVar2[6];
  }
  if (iVar8 != 0) {
    if (*piVar2 < 0) {
      iVar10 = (int)*(char *)((longlong)piVar2 + 0x1d);
    }
    else {
      iVar10 = (int)(short)piVar2[10];
    }
    uVar19 = uVar19 + iVar10;
  }
  if (fVar35 < (float)(int)uVar19 + fVar27) goto LAB_1433fd780;
  uVar12 = uVar12 - 1;
  iVar8 = iVar8 + 1;
  fVar27 = (float)(int)uVar19 + fVar27;
  goto LAB_1433fd721;
LAB_1433fd780:
  if (uVar9 == 2) {
    fVar36 = fVar29 - fVar27;
  }
  else {
    fVar36 = (fVar35 * 0.5 - fVar27 * 0.5) + fVar36;
  }
LAB_1433fd7b4:
  *(float *)(param_1 + 0x8c) = fVar29;
  *(float *)(param_1 + 0x80) = fVar33;
  *(float *)(param_1 + 0x84) = fVar36;
  *(float *)(param_1 + 0x88) = fVar34;
LAB_1433fd7fc:
  uVar9 = 0;
  uVar12 = 0;
  if (local_d4 != '\0') {
    uVar19 = uVar9;
    while ((((longlong *)(param_1 + 0x50) != (longlong *)0x0 &&
            (uVar22 = (ulonglong)uVar19, uVar22 < *(ulonglong *)(param_1 + 0x58))) &&
           (-1 < (int)uVar19))) {
      puVar3 = *(uint **)(*(longlong *)(param_1 + 0x50) + uVar22 * 8);
      uVar18 = *puVar3;
      uVar20 = uVar18 >> 0x1b & 3;
      if (uVar20 == 1) {
        fVar27 = *(float *)(param_1 + 0x88) - *(float *)(param_1 + 0x80);
        if (fVar27 <= 0.0) {
          fVar27 = fVar27 - 0.5;
        }
        else {
          fVar27 = fVar27 + 0.5;
        }
        if ((int)uVar18 < 0) {
          uVar18 = (uint)(ushort)puVar3[5];
        }
        else {
          uVar18 = puVar3[5];
        }
        uVar20 = (int)fVar27 - uVar18;
        if ((int)((int)fVar27 - uVar18) < 0) {
          uVar20 = uVar9;
        }
        puVar3[3] = uVar20;
      }
      else if (uVar20 == 2) {
        fVar27 = (*(float *)(param_1 + 0x88) - *(float *)(param_1 + 0x80)) * 0.5;
        if (fVar27 <= 0.0) {
          fVar27 = fVar27 - 0.5;
        }
        else {
          fVar27 = fVar27 + 0.5;
        }
        if ((int)uVar18 < 0) {
          uVar18 = (uint)(ushort)puVar3[5];
        }
        else {
          uVar18 = puVar3[5];
        }
        uVar18 = (int)fVar27 - (int)uVar18 / 2;
        if ((int)uVar18 < 0) {
          uVar18 = uVar9;
        }
        puVar3[3] = uVar18;
      }
      if (uVar22 < *(ulonglong *)(param_1 + 0x58)) {
        uVar19 = uVar19 + 1;
      }
    }
  }
  if ((*(byte *)(param_1 + 0x15b) & 3) != 0) {
    FUN_1433fcba0(param_1);
    *(byte *)(param_1 + 0x15b) = *(byte *)(param_1 + 0x15b) & 0xfc;
  }
  iVar8 = 0x4b0;
  if ((*(byte *)(param_1 + 0x158) & 8) != 0) goto LAB_1433fd9a2;
  if (*(longlong **)(param_1 + 0xd8) == (longlong *)0x0) {
LAB_1433fd95c:
    uVar12 = uVar9;
  }
  else {
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x10))();
    uVar12 = 0x4b0;
    if (cVar6 != '\0') goto LAB_1433fd95c;
  }
  if (*(uint *)(param_1 + 0xc0) == 0) {
    fVar27 = 0.0;
  }
  else {
    fVar27 = (float)*(uint *)(param_1 + 0xc0);
  }
  fVar30 = (fVar27 - (*(float *)(param_1 + 0x88) - *(float *)(param_1 + 0x80))) + (float)uVar12;
  fVar27 = 0.0;
  if (0.0 <= fVar30) {
    fVar27 = fVar30;
  }
  uVar12 = (uint)(longlong)fVar27;
LAB_1433fd9a2:
  if (uVar12 < *(uint *)(param_1 + 0x90)) {
    if ((*(byte *)(param_1 + 0x15b) & 3) != 0) {
      FUN_1433fcba0(param_1);
      *(byte *)(param_1 + 0x15b) = *(byte *)(param_1 + 0x15b) & 0xfc;
    }
    if ((*(byte *)(param_1 + 0x158) & 8) == 0) {
      if ((*(longlong **)(param_1 + 0xd8) == (longlong *)0x0) ||
         (cVar6 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x10))(), cVar6 != '\0')) {
        iVar8 = 0;
      }
      if (*(uint *)(param_1 + 0xc0) == 0) {
        fVar27 = 0.0;
      }
      else {
        fVar27 = (float)*(uint *)(param_1 + 0xc0);
      }
      fVar30 = (fVar27 - (*(float *)(param_1 + 0x88) - *(float *)(param_1 + 0x80))) + (float)iVar8;
      fVar27 = 0.0;
      if (0.0 <= fVar30) {
        fVar27 = fVar30;
      }
      uVar9 = (uint)(longlong)fVar27;
    }
    else {
      uVar9 = 0;
    }
    if (uVar12 <= uVar9) {
      uVar9 = uVar12;
    }
    if (*(uint *)(param_1 + 0x90) != uVar9) {
      Scaleform::Render::Text::LineBuffer::SetHScrollOffset(param_1 + 0x50,uVar9);
      plVar24 = *(longlong **)(param_1 + 0x20);
      if (plVar24 != (longlong *)0x0) {
        (**(code **)(*plVar24 + 0x18))(plVar24,param_1,uVar9);
      }
    }
  }
  else if (uVar12 != local_da0) {
    bVar26 = true;
  }
  plVar24 = *(longlong **)(param_1 + 0x20);
  if (plVar24 != (longlong *)0x0) {
    if ((bVar26) && ((*(byte *)(plVar24 + 2) & 4) != 0)) {
      (**(code **)(*plVar24 + 0x28))(plVar24,param_1);
    }
    plVar24 = *(longlong **)(param_1 + 0x20);
    if ((*(byte *)(plVar24 + 2) & 8) != 0) {
      (**(code **)(*plVar24 + 0x30))(plVar24,param_1);
    }
  }
  if ((((*(longlong **)(param_1 + 0xd8) != (longlong *)0x0) &&
       (cVar6 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x10))(), cVar6 == '\0')) ||
      (*(float *)(param_1 + 0xb8) - *(float *)(param_1 + 0xb0) < (float)*(uint *)(param_1 + 0xc0)))
     || ((*(float *)(param_1 + 0xbc) - *(float *)(param_1 + 0xb4) < (float)*(uint *)(param_1 + 0xc4)
         || (*(int *)(param_1 + 0x90) != 0)))) {
    *(byte *)(param_1 + 0x94) = *(byte *)(param_1 + 0x94) & 0xdf;
  }
  else {
    *(byte *)(param_1 + 0x94) = *(byte *)(param_1 + 0x94) | 0x20;
  }
  if (*(longlong **)(param_1 + 0xd8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x38))();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    if (*(longlong **)(param_1 + 0xd8) == (longlong *)0x0) {
      uVar15 = 0;
    }
    else {
      uVar15 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x38))();
    }
    FUN_1433f1740(*(undefined8 *)(param_1 + 0x28),uVar15);
  }
  *(byte *)(param_1 + 0x15b) = *(byte *)(param_1 + 0x15b) & 0xdf;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    piVar2 = (int *)**(undefined8 **)(param_1 + 0x50);
    if (*piVar2 < 0) {
      uVar9 = (uint)*(byte *)(piVar2 + 7);
    }
    else {
      uVar9 = piVar2[1];
    }
    if (((uVar9 != 0) && (lVar16 = FUN_1433f3e10((undefined8 *)(param_1 + 0x50)), lVar16 != 0)) &&
       ((*(uint *)(*(longlong *)(lVar16 + 0x30) + 0x1c) >> 0xf & 1) != 0)) {
      *(byte *)(param_1 + 0x15b) = *(byte *)(param_1 + 0x15b) | 0x20;
    }
  }
  if (local_f8 != 0) {
    Scaleform::Render::Text::LineBuffer::TextLineAllocator::FreeLine(local_d38[0] + 0xa0);
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_550);
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_548);
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_540);
  if (local_530 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_530);
  }
  FUN_143403f10(local_8e0);
  FUN_143403f10(local_a38);
  FUN_143403f10(local_b90);
  if (local_b98 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_b98);
  }
  if (local_ba0 != 0) {
    piVar2 = (int *)(local_ba0 + 8);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_1433dd700(local_ba0);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_ba0);
    }
  }
  if (local_ba8 != 0) {
    piVar2 = (int *)(local_ba8 + 8);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_1433dd700(local_ba8);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_ba8);
    }
  }
  if (local_bc0 != 0) {
    lVar14 = 0;
    lVar13 = *(longlong *)(local_bc0 + 8) + 1;
    lVar16 = local_bc0;
    do {
      if (*(longlong *)(lVar16 + 0x10 + lVar14) != -2) {
        this = *(RefCountImpl **)(lVar16 + 0x20 + lVar14);
        if (this != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(this);
        }
        *(undefined8 *)(lVar16 + 0x10 + lVar14) = 0xfffffffffffffffe;
        lVar16 = local_bc0;
      }
      lVar14 = lVar14 + 0x18;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar16);
    local_bc0 = 0;
  }
  FUN_143403f10(local_d18);
  return;
}



// FUNCTION 1433fdd50 FUN_1433fdd50 body=573 status=ok
// SIG undefined FUN_1433fdd50(void)

void FUN_1433fdd50(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  ushort uVar6;
  longlong lVar7;
  ushort uVar8;
  ushort uVar9;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if ((((*(byte *)(param_1 + 0x15b) & 0x40) == 0) && (*(longlong *)(param_1 + 0x28) != 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0x28) + 0x30) == '\0')) {
    lVar7 = 0;
    if (*(longlong **)(param_1 + 0xd8) != (longlong *)0x0) {
      lVar7 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x38))();
    }
    FUN_1433f1740(*(undefined8 *)(param_1 + 0x28),lVar7);
    *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0x30) = 1;
  }
  local_48 = 0;
  local_40 = 0;
  local_38 = 0x100000;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0x100000;
  local_18 = 0;
  local_10 = 0;
  Scaleform::Render::Text::LoadTextFieldParamFromTextFilter(&local_48,param_1 + 0xe0);
  uVar9 = local_40._4_2_;
  uVar6 = local_28._4_2_;
  if ((*(byte *)(param_1 + 0x158) & 0x40) != 0) {
    uVar9 = local_40._4_2_ | 1;
    uVar6 = local_28._4_2_ | 1;
    local_28 = local_28 | 0x100000000;
  }
  if (0x7f < *(byte *)(param_1 + 0x158)) {
    uVar9 = uVar9 | 2;
    local_28 = CONCAT26(local_28._6_2_,CONCAT24(uVar6,(undefined4)local_28)) | 0x200000000;
  }
  if ((*(byte *)(param_1 + 0x15b) & 0x20) == 0) {
    uVar6 = 0xfeff;
  }
  else {
    uVar9 = uVar9 & 0xfffd | 0x101;
    uVar6 = 0xfffb;
  }
  bVar3 = *(byte *)(param_1 + 0x15a);
  uVar8 = uVar9 & uVar6 & 0xfff7;
  if ((bVar3 & 1) != 0) {
    uVar8 = uVar9 & uVar6 | 8;
  }
  uVar9 = uVar8 & 0xffef;
  if ((bVar3 & 2) != 0) {
    uVar9 = uVar8 | 0x10;
  }
  uVar8 = (short)(longlong)*(float *)(param_1 + 0x154) << 0xc;
  uVar6 = uVar8 | uVar9 & 0xbff;
  if ((bVar3 & 8) != 0) {
    uVar6 = uVar8 | uVar9 & 0xfff | 0x400;
  }
  local_40._0_6_ = CONCAT24(uVar6,(undefined4)local_40);
  if ((*(longlong *)(param_1 + 0x28) == 0) ||
     (lVar7 = *(longlong *)(param_1 + 0x28), (*(byte *)(param_1 + 0x15b) & 0x40) != 0)) {
    lVar7 = 0;
  }
  FUN_1433f2550(param_1 + 0x50,param_2,lVar7,&local_48);
  if (((char)((uint)*(undefined4 *)(param_1 + 0x148) >> 0x18) != '\0') ||
     ((char)((uint)*(undefined4 *)(param_1 + 0x14c) >> 0x18) != '\0')) {
    FUN_1433effe0(param_2,*(undefined4 *)(param_1 + 0x14c));
  }
  plVar5 = *(longlong **)(param_1 + 0xd8);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 8))(plVar5,param_2);
  }
  if ((*(byte *)(param_1 + 0x15b) & 3) != 0) {
    FUN_1433fcba0(param_1);
    *(byte *)(param_1 + 0x15b) = *(byte *)(param_1 + 0x15b) & 0xfc;
  }
  uVar1 = *(undefined4 *)(param_1 + 0xbc);
  uVar2 = *(undefined4 *)(param_1 + 0xb8);
  uVar4 = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(param_2 + 0x48) = uVar2;
  *(undefined4 *)(param_2 + 0x4c) = uVar1;
  *(undefined4 *)(param_2 + 0x40) = uVar4;
  return;
}



// FUNCTION 1433fdfa0 SetAutoSizeX body=27 status=ok
// SIG undefined SetAutoSizeX(void)

void Scaleform::Render::Text::DocView::SetAutoSizeX(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x158) & 1) == 0) {
    *(byte *)(param_1 + 0x15b) = *(byte *)(param_1 + 0x15b) | 2;
    *(byte *)(param_1 + 0x158) = *(byte *)(param_1 + 0x158) | 1;
  }
  return;
}



// FUNCTION 1433fdfd0 SetAutoSizeY body=27 status=ok
// SIG undefined SetAutoSizeY(void)

void Scaleform::Render::Text::DocView::SetAutoSizeY(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x158) & 2) == 0) {
    *(byte *)(param_1 + 0x15b) = *(byte *)(param_1 + 0x15b) | 2;
    *(byte *)(param_1 + 0x158) = *(byte *)(param_1 + 0x158) | 2;
  }
  return;
}



// FUNCTION 1433fe000 SetWordWrap body=27 status=ok
// SIG undefined SetWordWrap(void)

void Scaleform::Render::Text::DocView::SetWordWrap(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x158) & 8) == 0) {
    *(byte *)(param_1 + 0x15b) = *(byte *)(param_1 + 0x15b) | 2;
    *(byte *)(param_1 + 0x158) = *(byte *)(param_1 + 0x158) | 8;
  }
  return;
}



// FUNCTION 1433fe030 ClearWordWrap body=27 status=ok
// SIG undefined ClearWordWrap(void)

void Scaleform::Render::Text::DocView::ClearWordWrap(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x158) & 8) != 0) {
    *(byte *)(param_1 + 0x15b) = *(byte *)(param_1 + 0x15b) | 2;
    *(byte *)(param_1 + 0x158) = *(byte *)(param_1 + 0x158) & 0xf7;
  }
  return;
}



// FUNCTION 1433fe060 GetViewRect body=56 status=ok
// SIG undefined GetViewRect(void)

longlong Scaleform::Render::Text::DocView::GetViewRect(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x15b) & 3) != 0) {
    FUN_1433fcba0();
    *(byte *)(param_1 + 0x15b) = *(byte *)(param_1 + 0x15b) & 0xfc;
    return param_1 + 0xb0;
  }
  return param_1 + 0xb0;
}



// FUNCTION 1433fe0a0 SetHScrollOffset body=115 status=ok
// SIG undefined SetHScrollOffset(void)

undefined8 Scaleform::Render::Text::DocView::SetHScrollOffset(longlong param_1,uint param_2)

{
  longlong *plVar1;
  uint uVar2;
  
  if ((*(byte *)(param_1 + 0x15b) & 3) != 0) {
    FUN_1433fcba0();
    *(byte *)(param_1 + 0x15b) = *(byte *)(param_1 + 0x15b) & 0xfc;
  }
  uVar2 = FUN_143400120(param_1);
  if (uVar2 < param_2) {
    param_2 = uVar2;
  }
  if (*(uint *)(param_1 + 0x90) != param_2) {
    LineBuffer::SetHScrollOffset(param_1 + 0x50,param_2);
    plVar1 = *(longlong **)(param_1 + 0x20);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_1,param_2);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1433fe120 SetVScrollOffset body=88 status=ok
// SIG undefined SetVScrollOffset(void)

undefined8 Scaleform::Render::Text::DocView::SetVScrollOffset(longlong param_1,uint param_2)

{
  longlong *plVar1;
  uint uVar2;
  
  uVar2 = FUN_1433fe300();
  if (uVar2 < param_2) {
    param_2 = uVar2;
  }
  if (*(uint *)(param_1 + 0x70) != param_2) {
    LineBuffer::SetFirstVisibleLine(param_1 + 0x50,param_2);
    plVar1 = *(longlong **)(param_1 + 0x20);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1,param_1,param_2);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1433fe180 GetHScrollOffset body=54 status=ok
// SIG undefined GetHScrollOffset(void)

undefined4 Scaleform::Render::Text::DocView::GetHScrollOffset(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x15b) & 3) != 0) {
    FUN_1433fcba0();
    *(byte *)(param_1 + 0x15b) = *(byte *)(param_1 + 0x15b) & 0xfc;
    return *(undefined4 *)(param_1 + 0x90);
  }
  return *(undefined4 *)(param_1 + 0x90);
}



// FUNCTION 1433fe1c0 GetVScrollOffset body=48 status=ok
// SIG undefined GetVScrollOffset(void)

undefined4 Scaleform::Render::Text::DocView::GetVScrollOffset(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x15b) & 3) != 0) {
    FUN_1433fcba0();
    *(byte *)(param_1 + 0x15b) = *(byte *)(param_1 + 0x15b) & 0xfc;
    return *(undefined4 *)(param_1 + 0x70);
  }
  return *(undefined4 *)(param_1 + 0x70);
}



// FUNCTION 1433fe200 GetTextWidth body=54 status=ok
// SIG undefined GetTextWidth(void)

float Scaleform::Render::Text::DocView::GetTextWidth(longlong param_1)

{
  float fVar1;
  
  if ((*(byte *)(param_1 + 0x15b) & 3) != 0) {
    FUN_1433fcba0();
    *(byte *)(param_1 + 0x15b) = *(byte *)(param_1 + 0x15b) & 0xfc;
  }
  fVar1 = 0.0;
  if (*(uint *)(param_1 + 0xc0) != 0) {
    fVar1 = (float)*(uint *)(param_1 + 0xc0);
  }
  return fVar1;
}



// FUNCTION 1433fe240 GetTextHeight body=54 status=ok
// SIG undefined GetTextHeight(void)

float Scaleform::Render::Text::DocView::GetTextHeight(longlong param_1)

{
  float fVar1;
  
  if ((*(byte *)(param_1 + 0x15b) & 3) != 0) {
    FUN_1433fcba0();
    *(byte *)(param_1 + 0x15b) = *(byte *)(param_1 + 0x15b) & 0xfc;
  }
  fVar1 = 0.0;
  if (*(uint *)(param_1 + 0xc4) != 0) {
    fVar1 = (float)*(uint *)(param_1 + 0xc4);
  }
  return fVar1;
}



// FUNCTION 1433fe280 GetLinesCount body=48 status=ok
// SIG undefined GetLinesCount(void)

undefined4 Scaleform::Render::Text::DocView::GetLinesCount(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x15b) & 3) != 0) {
    FUN_1433fcba0();
    *(byte *)(param_1 + 0x15b) = *(byte *)(param_1 + 0x15b) & 0xfc;
    return *(undefined4 *)(param_1 + 0x58);
  }
  return *(undefined4 *)(param_1 + 0x58);
}



// FUNCTION 1433fe2c0 FUN_1433fe2c0 body=43 status=ok
// SIG undefined FUN_1433fe2c0(void)

void FUN_1433fe2c0(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x15b) & 3) != 0) {
    FUN_1433fcba0();
    *(byte *)(param_1 + 0x15b) = *(byte *)(param_1 + 0x15b) & 0xfc;
  }
  FUN_143400120(param_1);
  return;
}



// FUNCTION 1433fe300 FUN_1433fe300 body=380 status=ok
// SIG undefined FUN_1433fe300(void)

int FUN_1433fe300(longlong param_1)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  
  if ((*(byte *)(param_1 + 0x15b) & 3) != 0) {
    FUN_1433fcba0();
    *(byte *)(param_1 + 0x15b) = *(byte *)(param_1 + 0x15b) & 0xfc;
  }
  if (*(short *)(param_1 + 0xd0) == *(short *)(param_1 + 0x150)) {
LAB_1433fe345:
    return *(int *)(param_1 + 0xcc);
  }
  if (*(int *)(param_1 + 0x58) == 0) {
    *(undefined4 *)(param_1 + 0xcc) = 0;
    *(short *)(param_1 + 0xd0) = *(short *)(param_1 + 0x150);
    goto LAB_1433fe345;
  }
  iVar1 = *(int *)(param_1 + 0x58);
  uVar7 = iVar1 - 1;
  uVar8 = (ulonglong)uVar7;
  piVar2 = *(int **)(*(longlong *)(param_1 + 0x50) + uVar8 * 8);
  if (*(longlong **)(param_1 + 0xd8) != (longlong *)0x0) {
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x10))();
    iVar6 = 0;
    if (cVar4 == '\0') goto LAB_1433fe3a9;
  }
  if (*piVar2 < 0) {
    uVar5 = (uint)*(byte *)((longlong)piVar2 + 0xb);
  }
  else {
    uVar5 = piVar2[8];
  }
  iVar6 = 0;
  if (uVar5 == 0) {
    if (-1 < (int)uVar7) {
      uVar8 = (ulonglong)(iVar1 - 2);
    }
    iVar6 = 1;
  }
LAB_1433fe3a9:
  uVar3 = *(ulonglong *)(param_1 + 0x58);
  if ((uVar8 < uVar3) && (-1 < (int)uVar8)) {
    piVar2 = *(int **)(*(longlong *)(param_1 + 0x50) + uVar8 * 8);
    if (*piVar2 < 0) {
      uVar7 = (uint)*(ushort *)((longlong)piVar2 + 0x16);
    }
    else {
      uVar7 = piVar2[6];
    }
    while (((uVar8 < uVar3 && (-1 < (int)uVar8)) &&
           ((iVar6 == 0 ||
            (((float)(int)(piVar2[4] + uVar7) - *(float *)(param_1 + 0x8c)) +
             *(float *)(param_1 + 0x84) <=
             (float)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + uVar8 * 8) + 0x10)))))) {
      uVar8 = (ulonglong)((int)uVar8 - 1);
      iVar6 = iVar6 + 1;
    }
    iVar6 = (int)uVar3 - iVar6;
    *(int *)(param_1 + 0xcc) = iVar6;
    *(undefined2 *)(param_1 + 0xd0) = *(undefined2 *)(param_1 + 0x150);
    return iVar6;
  }
  *(undefined2 *)(param_1 + 0xd0) = *(undefined2 *)(param_1 + 0x150);
  *(undefined4 *)(param_1 + 0xcc) = 0;
  return *(int *)(param_1 + 0xcc);
}



// FUNCTION 1433fe490 ForceReformat body=46 status=ok
// SIG undefined ForceReformat(void)

undefined1 Scaleform::Render::Text::DocView::ForceReformat(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x15b) & 3) != 0) {
    FUN_1433fcba0();
    *(byte *)(param_1 + 0x15b) = *(byte *)(param_1 + 0x15b) & 0xfc;
    return 1;
  }
  return 0;
}



// FUNCTION 1433fe4d0 FUN_1433fe4d0 body=1085 status=ok
// SIG undefined FUN_1433fe4d0(void)

char FUN_1433fe4d0(longlong param_1,float param_2,float param_3,ulonglong *param_4)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  char *pcVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  char cVar12;
  float fVar13;
  longlong local_res8;
  ulonglong local_1b8;
  ulonglong local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150;
  undefined8 local_148;
  undefined8 local_140;
  RefCountImpl *local_138;
  RefCountNTSImpl *pRStack_130;
  undefined8 local_128;
  longlong *local_118;
  longlong local_110;
  undefined1 local_108 [24];
  longlong local_f0;
  longlong local_d0;
  ulonglong local_c8;
  longlong *local_b8 [2];
  uint local_a8;
  undefined1 local_98 [32];
  ulonglong local_78;
  
  if ((*(byte *)(param_1 + 0x15b) & 3) != 0) {
    FUN_1433fcba0();
    *(byte *)(param_1 + 0x15b) = *(byte *)(param_1 + 0x15b) & 0xfc;
  }
  param_2 = param_2 - *(float *)(param_1 + 0x80);
  fVar13 = *(float *)(param_1 + 0x84);
  uVar4 = FUN_1433f3880(param_1 + 0x50);
  FUN_1433f32d0(param_1 + 0x50,local_b8,(float)uVar4 + (param_3 - fVar13));
  cVar12 = '\0';
  if (local_b8[0] == (longlong *)0x0) {
    return '\0';
  }
  if ((ulonglong)local_b8[0][1] <= (ulonglong)local_a8) {
    return '\0';
  }
  if ((int)local_a8 < 0) {
    return '\0';
  }
  piVar3 = *(int **)(*local_b8[0] + (ulonglong)local_a8 * 8);
  fVar13 = (float)piVar3[3];
  if (param_2 < fVar13) {
    return '\0';
  }
  iVar8 = *piVar3;
  if (iVar8 < 0) {
    uVar4 = (uint)*(ushort *)(piVar3 + 5);
  }
  else {
    uVar4 = piVar3[5];
  }
  if ((float)(int)uVar4 + fVar13 < param_2) {
    return '\0';
  }
  uVar4 = *(uint *)(param_1 + 0x90);
  uVar11 = 0;
  if (iVar8 < 0) {
    uVar5 = (uint)*(byte *)(piVar3 + 7);
  }
  else {
    uVar5 = piVar3[1];
  }
  lVar9 = 0x2a;
  if (iVar8 < 0) {
    lVar9 = 0x1e;
  }
  local_1a8 = FUN_1433f23a0(piVar3);
  local_188 = 0xffffffffffffffff;
  local_178 = 0xffffffffffffffff;
  local_1a0 = 0;
  local_1b8 = lVar9 + (longlong)piVar3;
  local_198 = 0;
  local_190 = 0;
  local_180 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_128 = 0;
  local_138 = (RefCountImpl *)0x0;
  pRStack_130 = (RefCountNTSImpl *)0x0;
  local_1b0 = local_1b8 + (ulonglong)uVar5 * 8;
  FUN_1433f2020(&local_1b8);
  iVar8 = 0;
  while( true ) {
    if ((local_1b8 == 0) || (local_1b0 <= local_1b8)) goto LAB_1433fe8b8;
    uVar5 = (uint)*(ushort *)(local_1b8 + 2);
    if ((*(byte *)(local_1b8 + 6) >> 6 & 1) != 0) {
      uVar5 = -(uint)*(ushort *)(local_1b8 + 2);
    }
    uVar11 = uVar11 + uVar5;
    if ((param_2 - fVar13) + (float)uVar4 < (float)uVar11) break;
    iVar8 = iVar8 + (uint)(*(ushort *)(local_1b8 + 4) >> 0xc);
    Scaleform::Render::Text::LineBuffer::GlyphIterator::operator++(&local_1b8);
  }
  cVar12 = -(*(char *)(local_1b8 + 6) >> 7);
  if ((cVar12 != '\0') && (param_4 != (ulonglong *)0x0)) {
    *param_4 = 0;
    param_4[1] = 0;
    uVar4 = piVar3[2];
    if ((*piVar3 < 0) && (uVar4 = uVar4 & 0xffffff, uVar4 == 0xffffff)) {
      uVar4 = 0xffffffff;
    }
    uVar4 = uVar4 + iVar8;
    local_res8 = 0;
    FUN_1433e8370(*(undefined8 *)(param_1 + 0x10),&local_118,uVar4,&local_res8);
    if (((local_118 != (longlong *)0x0) && (-1 < local_110)) && (local_110 < (int)local_118[1])) {
      lVar9 = *(longlong *)(*local_118 + local_110 * 8);
      FUN_1433e2c50(lVar9,local_98,local_res8,local_res8 + 1);
      FUN_1433e2290(lVar9,local_108);
      if (*(ulonglong *)(local_d0 + 8) <= local_c8) goto LAB_1433fe888;
      goto LAB_1433fe7b0;
    }
  }
  goto LAB_1433fe8b8;
LAB_1433fe7b0:
  do {
    lVar6 = FUN_1433e1b30(local_108);
    uVar10 = *(longlong *)(lVar6 + 8) + *(longlong *)(lVar9 + 0x38);
    lVar6 = FUN_1433e1b30(local_108);
    if (((*(ushort *)(*(longlong *)(lVar6 + 0x18) + 0x4c) & 0x100) == 0) ||
       (lVar6 = FUN_1432c3580(*(longlong *)(lVar6 + 0x18) + 0x20), lVar6 == 0)) {
LAB_1433fe861:
      if (uVar4 < uVar10) break;
      *param_4 = 0;
      param_4[1] = 0;
    }
    else {
      lVar6 = FUN_1433e1b30(local_108);
      pcVar7 = (char *)((*(ulonglong *)(*(longlong *)(lVar6 + 0x18) + 0x20) & 0xfffffffffffffffc) +
                       0xc);
      lVar6 = ((local_78 & 0xfffffffffffffffc) + 0xc) - (longlong)pcVar7;
      do {
        cVar1 = *pcVar7;
        cVar2 = pcVar7[lVar6];
        if (cVar1 != cVar2) break;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      if (cVar1 != cVar2) goto LAB_1433fe861;
      if (param_4[1] + *param_4 < uVar10) {
        if (uVar4 < uVar10) break;
        *param_4 = uVar10;
        lVar6 = FUN_1433e1b30(local_108);
        param_4[1] = *(ulonglong *)(lVar6 + 0x10);
      }
      else {
        lVar6 = FUN_1433e1b30(local_108);
        param_4[1] = param_4[1] + *(longlong *)(lVar6 + 0x10);
      }
    }
    Scaleform::Render::Text::Paragraph::FormatRunIterator::operator++(local_108);
  } while (local_c8 < *(ulonglong *)(local_d0 + 8));
LAB_1433fe888:
  if (local_f0 != 0) {
    piVar3 = (int *)(local_f0 + 8);
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      FUN_1433dd700(local_f0);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_f0);
    }
  }
  FUN_1433dd700(local_98);
LAB_1433fe8b8:
  if (pRStack_130 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(pRStack_130);
  }
  if (local_138 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_138);
  }
  return cVar12;
}



// FUNCTION 1433fe920 FUN_1433fe920 body=38 status=ok
// SIG undefined FUN_1433fe920(void)

undefined1 FUN_1433fe920(longlong param_1)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0xd8) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x10))();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}


