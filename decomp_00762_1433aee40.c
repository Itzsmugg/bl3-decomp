// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1433aee40 FUN_1433aee40 body=721 status=ok
// SIG undefined FUN_1433aee40(void)

void FUN_1433aee40(longlong *param_1,longlong param_2,int param_3)

{
  byte bVar1;
  RefCountImpl *pRVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  longlong lVar8;
  float fVar9;
  undefined4 *local_res8;
  undefined4 local_res18 [2];
  undefined4 local_48 [2];
  RefCountImpl *local_40;
  
  lVar8 = *(longlong *)(param_2 + 0x418);
  if (lVar8 == 0) {
    lVar8 = param_2 + 0x50;
  }
  *(undefined1 *)(lVar8 + 0x29) = 0;
  if (*(int *)(lVar8 + 0x50) - *(int *)(lVar8 + 0x4c) < 2) {
    FUN_143396c40(lVar8,2);
  }
  uVar5 = *(uint *)(lVar8 + 0x4c);
  uVar7 = 0;
  fVar9 = 3.0;
  uVar3 = CONCAT11(*(undefined1 *)((ulonglong)(uVar5 + 1) + *(longlong *)(lVar8 + 0x60)),
                   *(undefined1 *)((ulonglong)uVar5 + *(longlong *)(lVar8 + 0x60)));
  *(uint *)(lVar8 + 0x4c) = uVar5 + 2;
  if (param_3 == 0x53) {
    lVar8 = *(longlong *)(param_2 + 0x418);
    if (lVar8 == 0) {
      lVar8 = param_2 + 0x50;
    }
    *(undefined1 *)(lVar8 + 0x29) = 0;
    if (*(int *)(lVar8 + 0x50) - *(int *)(lVar8 + 0x4c) < 2) {
      FUN_143396c40(lVar8,2);
    }
    uVar5 = *(uint *)(lVar8 + 0x4c);
    bVar1 = *(byte *)((ulonglong)uVar5 + *(longlong *)(lVar8 + 0x60));
    uVar7 = CONCAT11(*(undefined1 *)((ulonglong)(uVar5 + 1) + *(longlong *)(lVar8 + 0x60)),bVar1);
    *(uint *)(lVar8 + 0x4c) = uVar5 + 2;
    if ((bVar1 & 0x20) != 0) {
      uVar4 = FUN_1433af650(param_2);
      fVar9 = (float)uVar4 * 0.00390625;
    }
  }
  uVar5 = uVar7 & 1 | 2;
  if ((uVar7 & 2) == 0) {
    uVar5 = uVar7 & 1;
  }
  uVar6 = uVar5 | 4;
  if ((uVar7 & 4) == 0) {
    uVar6 = uVar5;
  }
  if (((byte)uVar7 & 6) == 6) {
    uVar6 = 6;
  }
  uVar5 = uVar6 | 0x10;
  if ((uVar7 & 0x10) == 0) {
    uVar5 = uVar6;
  }
  uVar6 = uVar5 | 0x20;
  if ((uVar7 & 0x20) == 0) {
    uVar6 = uVar5;
  }
  uVar5 = uVar6 | 0x40;
  if ((uVar7 & 0x40) == 0) {
    uVar5 = uVar6;
  }
  uVar6 = uVar5 | 0x80;
  if ((uVar7 & 0x80) == 0) {
    uVar6 = uVar5;
  }
  uVar5 = uVar6 | 0x100;
  if ((uVar7 & 0x100) == 0) {
    uVar5 = uVar6;
  }
  uVar6 = uVar5 | 0x200;
  if ((uVar7 & 0x200) == 0) {
    uVar6 = uVar5;
  }
  uVar5 = uVar6 | 8;
  if ((uVar7 & 8) == 0) {
    uVar5 = uVar6;
  }
  if ((uVar5 & 8) == 0) {
    Scaleform::GFx::LoadProcess::ReadRgbaTag(param_2,local_res18,param_3);
    *(undefined4 *)(*param_1 + 0x10) = local_res18[0];
    *(float *)(*param_1 + 0xc) = fVar9;
    lVar8 = *param_1;
    pRVar2 = *(RefCountImpl **)(lVar8 + 0x18);
    if (pRVar2 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(pRVar2);
    }
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(float *)*param_1 = (float)uVar3;
    goto LAB_1433af0e2;
  }
  local_res8 = local_48;
  local_40 = (RefCountImpl *)0x0;
  FUN_1433ae630(&local_res8,param_2);
  *(undefined4 *)(*param_1 + 0x10) = local_48[0];
  *(float *)(*param_1 + 0xc) = fVar9;
  *(float *)*param_1 = (float)uVar3;
  lVar8 = *param_1;
  if (local_40 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(local_40);
  }
  pRVar2 = *(RefCountImpl **)(lVar8 + 0x18);
  if (pRVar2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(pRVar2);
  }
  *(RefCountImpl **)(lVar8 + 0x18) = local_40;
  if (local_40 == (RefCountImpl *)0x0) {
LAB_1433af07f:
    *(undefined4 *)(*param_1 + 0x10) = local_48[0];
  }
  else {
    lVar8 = *(longlong *)(local_40 + 0x18);
    if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1c) != 0)) {
      local_48[0] = *(undefined4 *)(*(longlong *)(lVar8 + 0x20) + 4);
      goto LAB_1433af07f;
    }
  }
  if (local_40 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_40);
  }
LAB_1433af0e2:
  *(undefined4 *)(*param_1 + 4) = 0x3d4ccccd;
  *(uint *)(*param_1 + 8) = uVar5;
  return;
}



// FUNCTION 1433af120 FUN_1433af120 body=649 status=ok
// SIG undefined FUN_1433af120(void)

undefined8 FUN_1433af120(longlong *param_1,int *param_2)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  
  *(int *)(param_1 + 3) = (int)param_1[3] + 1;
  uVar5 = 0;
  if (7 < *(uint *)(param_1 + 3)) {
    param_1[2] = param_1[2] + 1;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  lVar2 = param_1[3];
  bVar1 = *(byte *)(*param_1 + param_1[2]);
  uVar3 = (int)lVar2 + 1;
  *(uint *)(param_1 + 3) = uVar3;
  if (7 < uVar3) {
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[2] = param_1[2] + 1;
  }
  if ((1 << (7U - (char)(int)lVar2 & 0x1f) & (uint)bVar1) == 0) {
    iVar4 = FUN_1433af6b0(param_1);
    iVar4 = iVar4 + 2;
    uVar5 = FUN_143396d70(param_1,iVar4);
    bVar1 = (byte)iVar4;
    uVar3 = 1 << (bVar1 - 1 & 0x1f);
    if ((uVar5 & uVar3) != 0) {
      uVar5 = uVar5 | -1 << (bVar1 & 0x1f);
    }
    uVar6 = FUN_143396d70(param_1,iVar4);
    if ((uVar6 & uVar3) != 0) {
      uVar6 = uVar6 | -1 << (bVar1 & 0x1f);
    }
    uVar7 = FUN_143396d70(param_1,iVar4);
    if ((uVar7 & uVar3) != 0) {
      uVar7 = uVar7 | -1 << (bVar1 & 0x1f);
    }
    uVar8 = FUN_143396d70(param_1,iVar4);
    if ((uVar8 & uVar3) != 0) {
      uVar8 = uVar8 | -1 << (bVar1 & 0x1f);
    }
    *param_2 = *(int *)(param_1[4] + 0xc) + uVar5;
    param_2[1] = *(int *)(param_1[4] + 0x10) + uVar6;
    *(int *)(param_1[4] + 0xc) = *(int *)(param_1[4] + 0xc) + uVar7 + uVar5;
    *(int *)(param_1[4] + 0x10) = *(int *)(param_1[4] + 0x10) + uVar8 + uVar6;
    param_2[2] = *(int *)(param_1[4] + 0xc);
    param_2[3] = *(int *)(param_1[4] + 0x10);
    *(undefined1 *)(param_2 + 4) = 1;
    return 2;
  }
  iVar4 = FUN_1433af6b0(param_1);
  lVar2 = param_1[3];
  iVar10 = iVar4 + 2;
  bVar1 = *(byte *)(param_1[2] + *param_1);
  uVar3 = (int)lVar2 + 1;
  *(uint *)(param_1 + 3) = uVar3;
  if (7 < uVar3) {
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[2] = param_1[2] + 1;
  }
  *(undefined1 *)(param_2 + 4) = 0;
  bVar9 = (byte)iVar10;
  if ((1 << (7U - (char)(int)lVar2 & 0x1f) & (uint)bVar1) == 0) {
    lVar2 = param_1[3];
    bVar1 = *(byte *)(param_1[2] + *param_1);
    uVar3 = (int)lVar2 + 1;
    *(uint *)(param_1 + 3) = uVar3;
    if (7 < uVar3) {
      *(undefined4 *)(param_1 + 3) = 0;
      param_1[2] = param_1[2] + 1;
    }
    if ((1 << (7U - (char)(int)lVar2 & 0x1f) & (uint)bVar1) == 0) {
      uVar6 = FUN_143396d70(param_1,iVar10);
      if ((uVar6 >> (iVar4 + 1U & 0x1f) & 1) != 0) {
        uVar6 = uVar6 | -1 << (bVar9 & 0x1f);
      }
      goto LAB_1433af361;
    }
    uVar7 = FUN_143396d70(param_1,iVar10);
    uVar3 = uVar7 >> (iVar4 + 1U & 0x1f) & 1;
    uVar6 = uVar5;
    uVar5 = uVar7;
  }
  else {
    uVar6 = FUN_143396d70(param_1,iVar10);
    uVar3 = 1 << (bVar9 - 1 & 0x1f);
    if ((uVar6 & uVar3) != 0) {
      uVar6 = uVar6 | -1 << (bVar9 & 0x1f);
    }
    uVar5 = FUN_143396d70(param_1,iVar10);
    uVar3 = uVar5 & uVar3;
  }
  if (uVar3 != 0) {
    uVar5 = uVar5 | -1 << (bVar9 & 0x1f);
  }
LAB_1433af361:
  param_2[2] = *(int *)(param_1[4] + 0xc) + uVar6;
  param_2[3] = *(int *)(param_1[4] + 0x10) + uVar5;
  *(int *)(param_1[4] + 0xc) = *(int *)(param_1[4] + 0xc) + uVar6;
  *(int *)(param_1[4] + 0x10) = *(int *)(param_1[4] + 0x10) + uVar5;
  return 1;
}



// FUNCTION 1433af3b0 FUN_1433af3b0 body=665 status=ok
// SIG undefined FUN_1433af3b0(void)

/* WARNING: Removing unreachable block (ram,0x0001433af541) */

undefined4 FUN_1433af3b0(longlong *param_1,undefined4 param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  *(int *)(param_1 + 3) = (int)param_1[3] + 1;
  if (7 < *(uint *)(param_1 + 3)) {
    param_1[2] = param_1[2] + 1;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  uVar6 = FUN_1433af830();
  if (uVar6 == 0) {
    return 0;
  }
  if ((uVar6 & 1) != 0) {
    uVar7 = FUN_1433af830(param_1);
    uVar8 = FUN_143396d70(param_1,uVar7);
    bVar1 = (byte)uVar7;
    uVar10 = 1 << (bVar1 - 1 & 0x1f);
    if ((uVar8 & uVar10) != 0) {
      uVar8 = uVar8 | -1 << (bVar1 & 0x1f);
    }
    *(uint *)(param_1[4] + 0xc) = uVar8;
    uVar8 = FUN_143396d70(param_1,uVar7);
    if ((uVar8 & uVar10) != 0) {
      uVar8 = uVar8 | -1 << (bVar1 & 0x1f);
    }
    *(uint *)(param_1[4] + 0x10) = uVar8;
  }
  if (((uVar6 & 2) != 0) && (*(int *)(param_1[4] + 0x1c) != 0)) {
    iVar9 = FUN_143396d70(param_1);
    if (iVar9 != 0) {
      iVar9 = iVar9 + *(int *)(param_1[4] + 0x14);
    }
    *(int *)(param_1[4] + 0x24) = iVar9;
  }
  if (((uVar6 & 4) != 0) && (*(int *)(param_1[4] + 0x1c) != 0)) {
    iVar9 = FUN_143396d70(param_1);
    if (0 < iVar9) {
      iVar9 = iVar9 + *(int *)(param_1[4] + 0x14);
    }
    *(int *)(param_1[4] + 0x28) = iVar9;
  }
  if (((uVar6 & 8) != 0) && (*(int *)(param_1[4] + 0x20) != 0)) {
    iVar9 = FUN_143396d70(param_1);
    if (0 < iVar9) {
      iVar9 = iVar9 + *(int *)(param_1[4] + 0x18);
    }
    *(int *)(param_1[4] + 0x2c) = iVar9;
  }
  if ((uVar6 & 0x10) == 0) {
    return param_2;
  }
  *(undefined4 *)(param_1[4] + 0x2c) = 0;
  *(undefined4 *)(param_1[4] + 0x28) = 0;
  *(undefined4 *)(param_1[4] + 0x24) = 0;
  if ((int)param_1[3] != 0) {
    param_1[2] = param_1[2] + 1;
  }
  *(undefined4 *)(param_1 + 3) = 0;
  lVar4 = *param_1;
  bVar1 = *(byte *)(lVar4 + param_1[2]);
  param_1[2] = param_1[2] + 1;
  uVar6 = (uint)bVar1;
  if (bVar1 != 0) {
    lVar5 = param_1[2];
    *(undefined4 *)(param_1 + 3) = 0;
    bVar1 = *(byte *)(lVar4 + lVar5);
    param_1[2] = lVar5 + 1;
    *(undefined4 *)(param_1 + 3) = 0;
    bVar2 = *(byte *)(lVar4 + lVar5 + 1);
    param_1[2] = lVar5 + 2;
    *(undefined4 *)(param_1 + 3) = 0;
    bVar3 = *(byte *)(lVar4 + lVar5 + 2);
    param_1[2] = lVar5 + 3;
    uVar6 = (uint)bVar1 << 0x10 | (uint)bVar2 << 8 | (uint)bVar3;
  }
  if ((int)param_1[3] != 0) {
    param_1[2] = param_1[2] + 1;
  }
  lVar5 = param_1[2];
  *(undefined4 *)(param_1 + 3) = 0;
  bVar1 = *(byte *)(lVar4 + lVar5);
  param_1[2] = lVar5 + 1;
  uVar8 = (uint)bVar1;
  if (uVar8 == 0xff) {
    *(undefined4 *)(param_1 + 3) = 0;
    bVar1 = *(byte *)(lVar4 + lVar5 + 1);
    param_1[2] = lVar5 + 2;
    *(undefined4 *)(param_1 + 3) = 0;
    bVar2 = *(byte *)(lVar4 + lVar5 + 2);
    param_1[2] = lVar5 + 3;
    *(undefined4 *)(param_1 + 3) = 0;
    bVar3 = *(byte *)(lVar4 + lVar5 + 3);
    param_1[2] = lVar5 + 4;
    uVar8 = (uint)bVar1 << 0x10 | (uint)bVar2 << 8 | (uint)bVar3;
  }
  *(uint *)(param_1[4] + 0x14) = uVar6;
  *(uint *)(param_1[4] + 0x18) = uVar8;
  uVar7 = FUN_1433af6b0(param_1);
  *(undefined4 *)(param_1[4] + 0x1c) = uVar7;
  uVar7 = FUN_1433af6b0(param_1);
  *(undefined4 *)(param_1[4] + 0x20) = uVar7;
  return 2;
}



// FUNCTION 1433af650 FUN_1433af650 body=91 status=ok
// SIG undefined FUN_1433af650(void)

undefined2 FUN_1433af650(longlong param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x418);
  if (lVar4 == 0) {
    lVar4 = param_1 + 0x50;
  }
  *(undefined1 *)(lVar4 + 0x29) = 0;
  if (*(int *)(lVar4 + 0x50) - *(int *)(lVar4 + 0x4c) < 2) {
    FUN_143396c40(lVar4,2);
  }
  uVar3 = *(uint *)(lVar4 + 0x4c);
  uVar1 = *(undefined1 *)((ulonglong)(uVar3 + 1) + *(longlong *)(lVar4 + 0x60));
  uVar2 = *(undefined1 *)((ulonglong)uVar3 + *(longlong *)(lVar4 + 0x60));
  *(uint *)(lVar4 + 0x4c) = uVar3 + 2;
  return CONCAT11(uVar1,uVar2);
}



// FUNCTION 1433af6b0 FUN_1433af6b0 body=352 status=ok
// SIG undefined FUN_1433af6b0(void)

byte FUN_1433af6b0(longlong *param_1)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  
  switch((int)param_1[3]) {
  case 0:
    bVar1 = *(byte *)(param_1[2] + *param_1);
    *(undefined4 *)(param_1 + 3) = 4;
    return bVar1 >> 4;
  case 1:
    bVar1 = *(byte *)(param_1[2] + *param_1);
    *(undefined4 *)(param_1 + 3) = 5;
    return bVar1 >> 3 & 0xf;
  case 2:
    bVar1 = *(byte *)(param_1[2] + *param_1);
    *(undefined4 *)(param_1 + 3) = 6;
    return bVar1 >> 2 & 0xf;
  case 3:
    bVar1 = *(byte *)(param_1[2] + *param_1);
    *(undefined4 *)(param_1 + 3) = 7;
    return bVar1 >> 1 & 0xf;
  case 4:
    bVar1 = *(byte *)(param_1[2] + *param_1);
    param_1[2] = param_1[2] + 1;
    *(undefined4 *)(param_1 + 3) = 0;
    return bVar1 & 0xf;
  case 5:
    lVar3 = param_1[2];
    bVar1 = *(byte *)(lVar3 + *param_1);
    bVar2 = *(byte *)(lVar3 + 1 + *param_1);
    *(undefined4 *)(param_1 + 3) = 1;
    param_1[2] = lVar3 + 1;
    return (bVar1 & 7) * '\x02' | bVar2 >> 7;
  case 6:
    lVar3 = param_1[2];
    bVar1 = *(byte *)(lVar3 + *param_1);
    bVar2 = *(byte *)(lVar3 + 1 + *param_1);
    *(undefined4 *)(param_1 + 3) = 2;
    param_1[2] = lVar3 + 1;
    return (bVar1 & 3) << 2 | bVar2 >> 6;
  case 7:
    lVar3 = param_1[2];
    bVar1 = *(byte *)(lVar3 + *param_1);
    bVar2 = *(byte *)(lVar3 + 1 + *param_1);
    *(undefined4 *)(param_1 + 3) = 3;
    param_1[2] = lVar3 + 1;
    return (bVar1 & 1) << 3 | bVar2 >> 5;
  default:
    return 0;
  }
}



// FUNCTION 1433af830 FUN_1433af830 body=371 status=ok
// SIG undefined FUN_1433af830(void)

byte FUN_1433af830(longlong *param_1)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  
  switch((int)param_1[3]) {
  case 0:
    bVar1 = *(byte *)(param_1[2] + *param_1);
    *(undefined4 *)(param_1 + 3) = 5;
    return bVar1 >> 3;
  case 1:
    bVar1 = *(byte *)(param_1[2] + *param_1);
    *(undefined4 *)(param_1 + 3) = 6;
    return bVar1 >> 2 & 0x1f;
  case 2:
    bVar1 = *(byte *)(param_1[2] + *param_1);
    *(undefined4 *)(param_1 + 3) = 7;
    return bVar1 >> 1 & 0x1f;
  case 3:
    bVar1 = *(byte *)(param_1[2] + *param_1);
    param_1[2] = param_1[2] + 1;
    *(undefined4 *)(param_1 + 3) = 0;
    return bVar1 & 0x1f;
  case 4:
    lVar3 = param_1[2];
    bVar1 = *(byte *)(lVar3 + *param_1);
    bVar2 = *(byte *)(lVar3 + 1 + *param_1);
    *(undefined4 *)(param_1 + 3) = 1;
    param_1[2] = lVar3 + 1;
    return (bVar1 & 0xf) * '\x02' | bVar2 >> 7;
  case 5:
    lVar3 = param_1[2];
    bVar1 = *(byte *)(lVar3 + *param_1);
    bVar2 = *(byte *)(lVar3 + 1 + *param_1);
    *(undefined4 *)(param_1 + 3) = 2;
    param_1[2] = lVar3 + 1;
    return (bVar1 & 7) << 2 | bVar2 >> 6;
  case 6:
    lVar3 = param_1[2];
    bVar1 = *(byte *)(lVar3 + *param_1);
    bVar2 = *(byte *)(lVar3 + 1 + *param_1);
    *(undefined4 *)(param_1 + 3) = 3;
    param_1[2] = lVar3 + 1;
    return (bVar1 & 3) << 3 | bVar2 >> 5;
  case 7:
    lVar3 = param_1[2];
    bVar1 = *(byte *)(lVar3 + *param_1);
    bVar2 = *(byte *)(lVar3 + 1 + *param_1);
    *(undefined4 *)(param_1 + 3) = 4;
    param_1[2] = lVar3 + 1;
    return (bVar1 & 1) << 4 | bVar2 >> 4;
  default:
    return 0;
  }
}



// FUNCTION 1433af9d0 FUN_1433af9d0 body=165 status=ok
// SIG undefined FUN_1433af9d0(void)

void FUN_1433af9d0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if (param_3 != param_1[2]) {
    lVar1 = *param_1;
    if (param_3 == 0) {
      uVar2 = 0;
      if (lVar1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
        param_1[2] = 0;
        return;
      }
    }
    else {
      uVar2 = param_3 + 3U & 0xfffffffffffffffc;
      if (lVar1 != 0) {
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,lVar1,uVar2 << 4);
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 0x103;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,uVar2 << 4,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 1433afa80 FUN_1433afa80 body=167 status=ok
// SIG undefined FUN_1433afa80(void)

void FUN_1433afa80(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if (param_3 != param_1[2]) {
    lVar1 = *param_1;
    if (param_3 == 0) {
      uVar2 = 0;
      if (lVar1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
        param_1[2] = 0;
        return;
      }
    }
    else {
      uVar2 = param_3 + 3U & 0xfffffffffffffffc;
      if (lVar1 != 0) {
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,lVar1,uVar2 * 0x28);
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 0x103;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,uVar2 * 0x28,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 1433afb30 FUN_1433afb30 body=99 status=ok
// SIG undefined FUN_1433afb30(void)

void FUN_1433afb30(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = param_1[1];
  FUN_1433afba0(param_1,param_1,param_2);
  if (uVar1 < param_2) {
    lVar2 = uVar1 * 0x10 + *param_1;
    for (lVar3 = param_2 - uVar1; lVar3 != 0; lVar3 = lVar3 + -1) {
      if (lVar2 != 0) {
        *(undefined8 *)(lVar2 + 8) = 0;
      }
      lVar2 = lVar2 + 0x10;
    }
  }
  return;
}



// FUNCTION 1433afba0 FUN_1433afba0 body=180 status=ok
// SIG undefined FUN_1433afba0(void)

void FUN_1433afba0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    if (lVar2 != 0) {
      puVar1 = (undefined8 *)(*param_1 + -8 + (lVar2 + param_3) * 0x10);
      do {
        if ((RefCountImpl *)*puVar1 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar1);
        }
        puVar1 = puVar1 + -2;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1433af9d0(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_1433af9d0(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 1433afc60 FUN_1433afc60 body=192 status=ok
// SIG undefined FUN_1433afc60(void)

void FUN_1433afc60(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    if (lVar2 != 0) {
      puVar1 = (undefined8 *)(*param_1 + -0x10 + (lVar2 + param_3) * 0x28);
      do {
        if ((RefCountImpl *)puVar1[1] != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release((RefCountImpl *)puVar1[1]);
        }
        if ((RefCountImpl *)*puVar1 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar1);
        }
        puVar1 = puVar1 + -5;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1433afa80(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_1433afa80(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 1433afd20 FUN_1433afd20 body=327 status=ok
// SIG undefined FUN_1433afd20(void)

void FUN_1433afd20(longlong *param_1,undefined8 param_2,ulonglong param_3)

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
        uVar2 = Scaleform::FixedSizeHash<unsigned_int>::operator()(local_res18,lVar4 + 0x20);
        FUN_1433ae050(&local_res20,param_2,lVar4 + 0x20,uVar2);
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



// FUNCTION 1433afe70 FUN_1433afe70 body=762 status=ok
// SIG undefined FUN_1433afe70(void)

undefined8 FUN_1433afe70(longlong param_1,longlong param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  RefCountImpl *this;
  byte bVar8;
  longlong lVar9;
  uint uVar10;
  
  lVar9 = *(longlong *)(param_2 + 0x418);
  if (lVar9 == 0) {
    lVar9 = param_2 + 0x50;
  }
  *(undefined1 *)(lVar9 + 0x29) = 0;
  if (*(int *)(lVar9 + 0x50) - *(int *)(lVar9 + 0x4c) < 1) {
    FUN_143396d60(lVar9);
  }
  bVar8 = *(byte *)((ulonglong)*(uint *)(lVar9 + 0x4c) + *(longlong *)(lVar9 + 0x60));
  *(uint *)(lVar9 + 0x4c) = *(uint *)(lVar9 + 0x4c) + 1;
  if (bVar8 == 0) {
    uVar6 = 0;
  }
  else {
    lVar9 = *(longlong *)(param_2 + 0x418);
    if (lVar9 == 0) {
      lVar9 = param_2 + 0x50;
    }
    FUN_143300df0(lVar9,"-- action record:  ");
    *(undefined1 *)(param_1 + 0x54) = 0;
    if ((bVar8 & 8) != 0) {
      *(undefined1 *)(param_1 + 0x54) = 1;
      FUN_143300df0(lVar9,"HitTest ");
    }
    if ((bVar8 & 4) != 0) {
      *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) | 2;
      FUN_143300df0(lVar9,"Down ");
    }
    if ((bVar8 & 2) != 0) {
      *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) | 4;
      FUN_143300df0(lVar9,"Over ");
    }
    if ((bVar8 & 1) != 0) {
      *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) | 8;
      FUN_143300df0(lVar9,&DAT_145b05904);
    }
    FUN_143300df0(lVar9,&DAT_145af0af0);
    lVar7 = *(longlong *)(param_2 + 0x418);
    if (lVar7 == 0) {
      lVar7 = param_2 + 0x50;
    }
    *(undefined1 *)(lVar7 + 0x29) = 0;
    if (*(int *)(lVar7 + 0x50) - *(int *)(lVar7 + 0x4c) < 2) {
      FUN_143396c40(lVar7,2);
    }
    uVar3 = *(uint *)(lVar7 + 0x4c);
    uVar10 = (uint)CONCAT11(*(undefined1 *)((ulonglong)(uVar3 + 1) + *(longlong *)(lVar7 + 0x60)),
                            *(undefined1 *)((ulonglong)uVar3 + *(longlong *)(lVar7 + 0x60)));
    *(uint *)(lVar7 + 0x4c) = uVar3 + 2;
    *(uint *)(param_1 + 0x48) = uVar10;
    lVar7 = *(longlong *)(param_2 + 0x418);
    if (lVar7 == 0) {
      lVar7 = param_2 + 0x50;
    }
    *(undefined1 *)(lVar7 + 0x29) = 0;
    if (*(int *)(lVar7 + 0x50) - *(int *)(lVar7 + 0x4c) < 2) {
      FUN_143396c40(lVar7,2);
    }
    uVar3 = *(uint *)(lVar7 + 0x4c);
    uVar1 = *(undefined1 *)((ulonglong)(uVar3 + 1) + *(longlong *)(lVar7 + 0x60));
    uVar2 = *(undefined1 *)((ulonglong)uVar3 + *(longlong *)(lVar7 + 0x60));
    *(uint *)(lVar7 + 0x4c) = uVar3 + 2;
    *(ushort *)(param_1 + 0x4c) = CONCAT11(uVar1,uVar2);
    FUN_143396390(lVar9,param_1);
    FUN_143300df0(lVar9,"   CharId = %d, Depth = %d\n",uVar10,*(undefined2 *)(param_1 + 0x4c));
    FUN_143300df0(lVar9,"   mat:\n");
    if (param_3 == 0x22) {
      FUN_143396700(lVar9,param_1 + 0x20);
      FUN_143300df0(lVar9,"   cxform:\n");
    }
    if ((bVar8 & 0x10) != 0) {
      FUN_143300df0(lVar9,"   HasFilters\n");
      plVar4 = *(longlong **)(*(longlong *)(param_2 + 0x38) + 0x38);
      lVar7 = (**(code **)(*plVar4 + 0x50))(plVar4,0x38);
      if (lVar7 == 0) {
        this = (RefCountImpl *)0x0;
      }
      else {
        this = (RefCountImpl *)FUN_1432d0ca0(lVar7,0);
      }
      iVar5 = FUN_1433f7480(lVar9,this);
      if (iVar5 != 0) {
        if (this != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::AddRef(this);
        }
        if (*(RefCountImpl **)(param_1 + 0x40) != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x40));
        }
        *(RefCountImpl **)(param_1 + 0x40) = this;
      }
      if (this != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(this);
      }
    }
    if ((bVar8 & 0x20) == 0) {
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
    else {
      *(undefined1 *)(lVar9 + 0x29) = 0;
      if (*(int *)(lVar9 + 0x50) - *(int *)(lVar9 + 0x4c) < 1) {
        FUN_143396d60(lVar9);
      }
      bVar8 = *(byte *)((ulonglong)*(uint *)(lVar9 + 0x4c) + *(longlong *)(lVar9 + 0x60));
      *(uint *)(lVar9 + 0x4c) = *(uint *)(lVar9 + 0x4c) + 1;
      if (0xd < (byte)(bVar8 - 1)) {
        bVar8 = 1;
      }
      *(uint *)(param_1 + 0x50) = (uint)bVar8;
      FUN_143300df0(lVar9,"   HasBlending, %d\n");
    }
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 1433b0170 FUN_1433b0170 body=75 status=ok
// SIG undefined FUN_1433b0170(void)

undefined8 * FUN_1433b0170(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_144f8bf30;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0x40000;
  *param_1 = &PTR_FUN_145b05880;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  return param_1;
}



// FUNCTION 1433b01d0 FUN_1433b01d0 body=141 status=ok
// SIG undefined FUN_1433b01d0(void)

void FUN_1433b01d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_145b05880;
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[10]);
  lVar2 = param_1[8];
  puVar1 = (undefined8 *)(param_1[7] + (lVar2 + -1) * 8);
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    if ((RefCountImpl *)*puVar1 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar1);
    }
    puVar1 = puVar1 + -1;
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[7]);
  FUN_1433b08f0(param_1 + 4);
  *param_1 = &PTR_FUN_144f8bf30;
  return;
}



// FUNCTION 1433b0270 FUN_1433b0270 body=1475 status=ok
// SIG undefined FUN_1433b0270(void)

void FUN_1433b0270(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  char cVar6;
  ushort uVar7;
  uint uVar8;
  void *pvVar10;
  char *pcVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  RefCountImpl *local_58;
  undefined4 local_50;
  ushort local_4c;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong uVar9;
  
  if (param_3 == 7) {
    local_98 = 0x3f800000;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    local_88 = 0;
    uStack_84 = 0x3f800000;
    uStack_80 = 0;
    uStack_7c = 0;
    FUN_1432bfaf0(&local_78);
    local_50 = 0x40000;
    local_58 = (RefCountImpl *)0x0;
    local_44 = 0;
    cVar6 = FUN_1433afe70(&local_98,param_2,7);
    if (cVar6 != '\0') {
      plVar1 = (longlong *)(param_1 + 0x20);
      do {
        uVar8 = 0;
        if (*(ulonglong *)(param_1 + 0x28) != 0) {
          uVar9 = 0;
          do {
            uVar8 = (uint)uVar9;
            if (local_4c < *(ushort *)(uVar9 * 0x60 + 0x4c + *plVar1)) break;
            uVar8 = uVar8 + 1;
            uVar9 = (ulonglong)uVar8;
          } while (uVar9 < *(ulonglong *)(param_1 + 0x28));
        }
        uVar5 = *(ulonglong *)(param_1 + 0x28);
        uVar15 = (ulonglong)uVar8;
        uVar9 = uVar5 + 1;
        FUN_1433b0b20(plVar1,plVar1,uVar9);
        if (uVar5 < uVar9) {
          puVar12 = (undefined8 *)(uVar5 * 0x60 + *plVar1);
          for (lVar14 = uVar9 - uVar5; lVar14 != 0; lVar14 = lVar14 + -1) {
            if (puVar12 != (undefined8 *)0x0) {
              *puVar12 = 0x3f800000;
              puVar12[1] = 0;
              *(undefined4 *)(puVar12 + 2) = 0;
              *(undefined8 *)((longlong)puVar12 + 0x14) = 0x3f800000;
              *(undefined4 *)((longlong)puVar12 + 0x1c) = 0;
              FUN_1432bfaf0(puVar12 + 4);
              puVar12[8] = 0;
              *(undefined4 *)(puVar12 + 9) = 0x40000;
              *(undefined1 *)((longlong)puVar12 + 0x54) = 0;
            }
            puVar12 = puVar12 + 0xc;
          }
        }
        if (uVar15 < *(longlong *)(param_1 + 0x28) - 1U) {
          pvVar10 = (void *)(uVar15 * 0x60 + *plVar1);
          memmove((void *)((longlong)pvVar10 + 0x60),pvVar10,
                  (*(longlong *)(param_1 + 0x28) - uVar15) * 0x60 - 0x60);
        }
        puVar13 = (undefined4 *)(uVar15 * 0x60 + *plVar1);
        if (puVar13 != (undefined4 *)0x0) {
          *puVar13 = local_98;
          puVar13[1] = uStack_94;
          puVar13[2] = uStack_90;
          puVar13[3] = uStack_8c;
          puVar13[4] = local_88;
          puVar13[5] = uStack_84;
          puVar13[6] = uStack_80;
          puVar13[7] = uStack_7c;
          *(undefined8 *)(puVar13 + 8) = local_78;
          *(undefined8 *)(puVar13 + 10) = uStack_70;
          *(undefined8 *)(puVar13 + 0xc) = local_68;
          *(undefined8 *)(puVar13 + 0xe) = uStack_60;
          if (local_58 != (RefCountImpl *)0x0) {
            Scaleform::RefCountImpl::AddRef(local_58);
          }
          *(RefCountImpl **)(puVar13 + 0x10) = local_58;
          puVar13[0x12] = local_50;
          *(ushort *)(puVar13 + 0x13) = local_4c;
          puVar13[0x14] = local_48;
          *(undefined1 *)(puVar13 + 0x15) = local_44;
        }
        if (local_58 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(local_58);
        }
        local_98 = 0x3f800000;
        uStack_94 = 0;
        uStack_90 = 0;
        uStack_8c = 0;
        local_88 = 0;
        uStack_84 = 0x3f800000;
        uStack_80 = 0;
        uStack_7c = 0;
        FUN_1432bfaf0(&local_78);
        local_58 = (RefCountImpl *)0x0;
        local_50 = 0x40000;
        local_44 = 0;
        cVar6 = FUN_1433afe70(&local_98,param_2,7);
      } while (cVar6 != '\0');
    }
    if (local_58 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(local_58);
    }
    if ((*(byte *)(*(longlong *)(param_2 + 0x38) + 0xd0) & 8) == 0) {
      plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x18) + 0x50);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x68))(plVar1,param_2,param_1,7);
        return;
      }
LAB_1433b0509:
      pcVar11 = "GFx_ButtonLoader - AS2 support is not installed. Actions are skipped.";
      goto LAB_1433b080f;
    }
  }
  else {
    if (param_3 == 0x11) {
      FUN_1433b0be0(param_2);
      return;
    }
    if (param_3 != 0x22) {
      return;
    }
    cVar6 = FUN_14330c340(param_2);
    *(bool *)(param_1 + 0x58) = cVar6 != '\0';
    uVar7 = FUN_1433af650(param_2);
    lVar14 = *(longlong *)(param_2 + 0x418);
    if (lVar14 == 0) {
      lVar14 = param_2 + 0x50;
    }
    iVar2 = *(int *)(lVar14 + 0x54);
    iVar3 = *(int *)(lVar14 + 0x50);
    iVar4 = *(int *)(lVar14 + 0x4c);
    local_98 = 0x3f800000;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    local_88 = 0;
    uStack_84 = 0x3f800000;
    uStack_80 = 0;
    uStack_7c = 0;
    FUN_1432bfaf0(&local_78);
    local_50 = 0x40000;
    local_58 = (RefCountImpl *)0x0;
    local_44 = 0;
    cVar6 = FUN_1433afe70(&local_98,param_2,0x22);
    if (cVar6 != '\0') {
      plVar1 = (longlong *)(param_1 + 0x20);
      do {
        uVar8 = 0;
        if (*(ulonglong *)(param_1 + 0x28) != 0) {
          uVar9 = 0;
          do {
            uVar8 = (uint)uVar9;
            if (local_4c < *(ushort *)(uVar9 * 0x60 + 0x4c + *plVar1)) break;
            uVar8 = uVar8 + 1;
            uVar9 = (ulonglong)uVar8;
          } while (uVar9 < *(ulonglong *)(param_1 + 0x28));
        }
        uVar5 = *(ulonglong *)(param_1 + 0x28);
        uVar15 = (ulonglong)uVar8;
        uVar9 = uVar5 + 1;
        FUN_1433b0b20(plVar1,plVar1,uVar9);
        if (uVar5 < uVar9) {
          puVar12 = (undefined8 *)(uVar5 * 0x60 + *plVar1);
          for (lVar14 = uVar9 - uVar5; lVar14 != 0; lVar14 = lVar14 + -1) {
            if (puVar12 != (undefined8 *)0x0) {
              *puVar12 = 0x3f800000;
              puVar12[1] = 0;
              *(undefined4 *)(puVar12 + 2) = 0;
              *(undefined8 *)((longlong)puVar12 + 0x14) = 0x3f800000;
              *(undefined4 *)((longlong)puVar12 + 0x1c) = 0;
              FUN_1432bfaf0(puVar12 + 4);
              puVar12[8] = 0;
              *(undefined4 *)(puVar12 + 9) = 0x40000;
              *(undefined1 *)((longlong)puVar12 + 0x54) = 0;
            }
            puVar12 = puVar12 + 0xc;
          }
        }
        if (uVar15 < *(longlong *)(param_1 + 0x28) - 1U) {
          pvVar10 = (void *)(uVar15 * 0x60 + *plVar1);
          memmove((void *)((longlong)pvVar10 + 0x60),pvVar10,
                  (*(longlong *)(param_1 + 0x28) - uVar15) * 0x60 - 0x60);
        }
        puVar13 = (undefined4 *)(uVar15 * 0x60 + *plVar1);
        if (puVar13 != (undefined4 *)0x0) {
          *puVar13 = local_98;
          puVar13[1] = uStack_94;
          puVar13[2] = uStack_90;
          puVar13[3] = uStack_8c;
          puVar13[4] = local_88;
          puVar13[5] = uStack_84;
          puVar13[6] = uStack_80;
          puVar13[7] = uStack_7c;
          *(undefined8 *)(puVar13 + 8) = local_78;
          *(undefined8 *)(puVar13 + 10) = uStack_70;
          *(undefined8 *)(puVar13 + 0xc) = local_68;
          *(undefined8 *)(puVar13 + 0xe) = uStack_60;
          if (local_58 != (RefCountImpl *)0x0) {
            Scaleform::RefCountImpl::AddRef(local_58);
          }
          *(RefCountImpl **)(puVar13 + 0x10) = local_58;
          puVar13[0x12] = local_50;
          *(ushort *)(puVar13 + 0x13) = local_4c;
          puVar13[0x14] = local_48;
          *(undefined1 *)(puVar13 + 0x15) = local_44;
        }
        if (local_58 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(local_58);
        }
        local_98 = 0x3f800000;
        uStack_94 = 0;
        uStack_90 = 0;
        uStack_8c = 0;
        local_88 = 0;
        uStack_84 = 0x3f800000;
        uStack_80 = 0;
        uStack_7c = 0;
        FUN_1432bfaf0(&local_78);
        local_58 = (RefCountImpl *)0x0;
        local_50 = 0x40000;
        local_44 = 0;
        cVar6 = FUN_1433afe70(&local_98,param_2,0x22);
      } while (cVar6 != '\0');
    }
    if (local_58 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(local_58);
    }
    if (uVar7 == 0) {
      return;
    }
    if ((*(byte *)(*(longlong *)(param_2 + 0x38) + 0xd0) & 8) == 0) {
      if (*(longlong *)(*(longlong *)(param_2 + 0x18) + 0x50) != 0) {
        lVar14 = *(longlong *)(param_2 + 0x418);
        if (lVar14 == 0) {
          lVar14 = param_2 + 0x50;
        }
        FUN_143395c80(lVar14,(uVar7 - 2) + (iVar2 - iVar3) + iVar4);
        plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x18) + 0x50);
        (**(code **)(*plVar1 + 0x70))(plVar1,param_2,param_1,0x22);
        return;
      }
      goto LAB_1433b0509;
    }
  }
  pcVar11 = "GFx_ButtonLoader - AS3 Button shouldn\'t have AS2 actions. Skipped.";
LAB_1433b080f:
  FUN_14330c260(param_2 + 0x20,pcVar11);
  return;
}



// FUNCTION 1433b0880 FUN_1433b0880 body=110 status=ok
// SIG undefined FUN_1433b0880(void)

void FUN_1433b0880(longlong param_1,RefCountImpl *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
  }
  FUN_1433b0a70(param_1 + 0x38,param_1 + 0x38,*(longlong *)(param_1 + 0x40) + 1);
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x38) + (*(longlong *)(param_1 + 0x40) + -1) * 8);
  if (puVar1 != (undefined8 *)0x0) {
    if (param_2 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(param_2);
    }
    *puVar1 = param_2;
  }
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(param_2);
  }
  return;
}



// FUNCTION 1433b08f0 FUN_1433b08f0 body=103 status=ok
// SIG undefined FUN_1433b08f0(void)

void FUN_1433b08f0(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    puVar1 = (undefined8 *)(*param_1 + -0x20 + lVar2 * 0x60);
    do {
      if ((RefCountImpl *)*puVar1 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar1);
      }
      puVar1 = puVar1 + -0xc;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001433b0953. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  return;
}



// FUNCTION 1433b0960 FUN_1433b0960 body=89 status=ok
// SIG undefined FUN_1433b0960(void)

undefined8 FUN_1433b0960(undefined8 param_1,ulonglong param_2)

{
  FUN_1433b01d0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1433b09c0 FUN_1433b09c0 body=165 status=ok
// SIG undefined FUN_1433b09c0(void)

void FUN_1433b09c0(longlong *param_1,undefined8 param_2,longlong param_3)

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
      local_res8[0] = 0x102;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 * 0x60,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 1433b0a70 FUN_1433b0a70 body=174 status=ok
// SIG undefined FUN_1433b0a70(void)

void FUN_1433b0a70(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    puVar1 = (undefined8 *)(*param_1 + ((param_3 - 1) + lVar2) * 8);
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      if ((RefCountImpl *)*puVar1 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar1);
      }
      puVar1 = puVar1 + -1;
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1433a6460(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_1433a6460(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 1433b0b20 FUN_1433b0b20 body=190 status=ok
// SIG undefined FUN_1433b0b20(void)

void FUN_1433b0b20(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    if (lVar2 != 0) {
      puVar1 = (undefined8 *)(*param_1 + -0x20 + (lVar2 + param_3) * 0x60);
      do {
        if ((RefCountImpl *)*puVar1 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar1);
        }
        puVar1 = puVar1 + -0xc;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1433b09c0(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_1433b09c0(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 1433b0be0 FUN_1433b0be0 body=553 status=ok
// SIG undefined FUN_1433b0be0(void)

void FUN_1433b0be0(longlong param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  lVar9 = *(longlong *)(param_1 + 0x418);
  if (lVar9 == 0) {
    lVar9 = param_1 + 0x50;
  }
  lVar12 = 4;
  do {
    lVar10 = *(longlong *)(param_1 + 0x418);
    if (lVar10 == 0) {
      lVar10 = param_1 + 0x50;
    }
    *(undefined1 *)(lVar10 + 0x29) = 0;
    if (*(int *)(lVar10 + 0x50) - *(int *)(lVar10 + 0x4c) < 2) {
      FUN_143396c40(lVar10,2);
    }
    uVar4 = *(uint *)(lVar10 + 0x4c);
    uVar1 = *(undefined1 *)((ulonglong)(uVar4 + 1) + *(longlong *)(lVar10 + 0x60));
    uVar2 = *(undefined1 *)((ulonglong)uVar4 + *(longlong *)(lVar10 + 0x60));
    *(uint *)(lVar10 + 0x4c) = uVar4 + 2;
    if (CONCAT11(uVar1,uVar2) != 0) {
      FUN_1433958f0(lVar9,2);
      FUN_1433958f0(lVar9,1);
      FUN_1433958f0(lVar9,1);
      iVar5 = FUN_1433958f0(lVar9,1);
      iVar6 = FUN_1433958f0(lVar9,1);
      iVar7 = FUN_1433958f0(lVar9,1);
      iVar8 = FUN_1433958f0(lVar9,1);
      if (iVar8 != 0) {
        *(undefined1 *)(lVar9 + 0x29) = 0;
        if (*(int *)(lVar9 + 0x50) - *(int *)(lVar9 + 0x4c) < 4) {
          FUN_143396c40(lVar9,4);
        }
        *(int *)(lVar9 + 0x4c) = *(int *)(lVar9 + 0x4c) + 4;
      }
      if (iVar7 != 0) {
        *(undefined1 *)(lVar9 + 0x29) = 0;
        if (*(int *)(lVar9 + 0x50) - *(int *)(lVar9 + 0x4c) < 4) {
          FUN_143396c40(lVar9,4);
        }
        *(int *)(lVar9 + 0x4c) = *(int *)(lVar9 + 0x4c) + 4;
      }
      if (iVar6 != 0) {
        *(undefined1 *)(lVar9 + 0x29) = 0;
        if (*(int *)(lVar9 + 0x50) - *(int *)(lVar9 + 0x4c) < 2) {
          FUN_143396c40(lVar9,2);
        }
        *(int *)(lVar9 + 0x4c) = *(int *)(lVar9 + 0x4c) + 2;
      }
      if (iVar5 != 0) {
        *(undefined1 *)(lVar9 + 0x29) = 0;
        if (*(int *)(lVar9 + 0x50) - *(int *)(lVar9 + 0x4c) < 1) {
          FUN_143396d60(lVar9);
        }
        bVar3 = *(byte *)((ulonglong)*(uint *)(lVar9 + 0x4c) + *(longlong *)(lVar9 + 0x60));
        *(uint *)(lVar9 + 0x4c) = *(uint *)(lVar9 + 0x4c) + 1;
        if (bVar3 != 0) {
          uVar11 = (ulonglong)bVar3;
          do {
            *(undefined1 *)(lVar9 + 0x29) = 0;
            if (*(int *)(lVar9 + 0x50) - *(int *)(lVar9 + 0x4c) < 4) {
              FUN_143396c40(lVar9,4);
            }
            *(int *)(lVar9 + 0x4c) = *(int *)(lVar9 + 0x4c) + 4;
            *(undefined1 *)(lVar9 + 0x29) = 0;
            if (*(int *)(lVar9 + 0x50) - *(int *)(lVar9 + 0x4c) < 2) {
              FUN_143396c40(lVar9,2);
            }
            *(int *)(lVar9 + 0x4c) = *(int *)(lVar9 + 0x4c) + 2;
            *(undefined1 *)(lVar9 + 0x29) = 0;
            if (*(int *)(lVar9 + 0x50) - *(int *)(lVar9 + 0x4c) < 2) {
              FUN_143396c40(lVar9,2);
            }
            *(int *)(lVar9 + 0x4c) = *(int *)(lVar9 + 0x4c) + 2;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
      }
    }
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  return;
}



// FUNCTION 1433b0e10 FUN_1433b0e10 body=56 status=ok
// SIG undefined FUN_1433b0e10(void)

undefined8 * FUN_1433b0e10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_144f8bf30;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0x40000;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_145b05a08;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 1433b0e50 FUN_1433b0e50 body=87 status=ok
// SIG undefined FUN_1433b0e50(void)

void FUN_1433b0e50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145b05a08;
  if ((RefCountImpl *)param_1[6] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[6]);
  }
  if ((RefCountImpl *)param_1[5] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[5]);
  }
  *param_1 = &PTR_FUN_145b05368;
  if ((RefCountImpl *)param_1[4] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[4]);
  }
  *param_1 = &PTR_FUN_144f8bf30;
  return;
}



// FUNCTION 1433b0eb0 FUN_1433b0eb0 body=2762 status=ok
// SIG undefined FUN_1433b0eb0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1433b0eb0(longlong param_1,longlong param_2,int *param_3)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  RefCountImpl *pRVar5;
  int *piVar6;
  char cVar7;
  RefCountImpl *pRVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined4 *puVar15;
  longlong *plVar16;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  uint *puVar22;
  longlong lVar23;
  float fVar24;
  longlong local_res8;
  longlong local_res10;
  int *local_res18;
  uint *in_stack_fffffffffffffe68;
  ulonglong uVar25;
  char local_188;
  char local_187;
  uint local_184;
  int local_180;
  int local_17c;
  ulonglong local_178;
  uint local_170;
  longlong local_168;
  undefined4 local_160;
  uint local_15c [3];
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong *local_138;
  longlong *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  longlong local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88 [2];
  RefCountImpl *local_80;
  uint local_78 [2];
  RefCountImpl *local_70;
  undefined4 local_68 [2];
  RefCountImpl *local_60;
  uint local_58 [2];
  RefCountImpl *local_50;
  
  uVar19 = *(longlong *)(param_2 + 0x418);
  if (uVar19 == 0) {
    uVar19 = param_2 + 0x50;
  }
  local_128 = 0;
  uStack_120 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_178 = uVar19;
  FUN_143396900(uVar19,&local_128);
  FUN_143396900(uVar19,&local_108);
  if (*param_3 == 0x54) {
    FUN_143396900(uVar19,&local_118);
    FUN_143396900(uVar19,&local_f8);
    *(undefined1 *)(uVar19 + 0x29) = 0;
    if (*(int *)(uVar19 + 0x50) - *(int *)(uVar19 + 0x4c) < 1) {
      FUN_143396d60(uVar19);
    }
    *(int *)(uVar19 + 0x4c) = *(int *)(uVar19 + 0x4c) + 1;
  }
  else {
    local_118 = local_128;
    uStack_110 = uStack_120;
    local_f8 = local_108;
    uStack_f0 = uStack_100;
  }
  plVar11 = (longlong *)0x0;
  local_168 = 0;
  local_e8 = 0;
  local_130 = (longlong *)0x0;
  local_e0 = (longlong *)0x0;
  local_d8 = 0;
  local_148 = 0;
  local_d0 = 0;
  local_138 = (longlong *)0x0;
  local_c8 = (longlong *)0x0;
  local_c0 = 0;
  local_17c = FUN_143300e60(uVar19);
  local_180 = (*(int *)(uVar19 + 0x4c) - *(int *)(uVar19 + 0x50)) + *(int *)(uVar19 + 0x54);
  local_170 = FUN_1433b29f0(uVar19);
  local_187 = '\0';
  local_188 = '\0';
  if (local_170 != 0) {
    uVar19 = (ulonglong)local_170;
    plVar16 = plVar11;
    plVar9 = plVar11;
    do {
      in_stack_fffffffffffffe68 = local_78;
      local_80 = (RefCountImpl *)0x0;
      local_70 = (RefCountImpl *)0x0;
      FUN_1433b1c40(param_1,local_res10,*param_3,local_88,in_stack_fffffffffffffe68,&local_188);
      FUN_1433b2b20(&local_e8,&local_e8,(longlong)plVar9 + 1);
      pRVar8 = local_80;
      local_130 = local_e0;
      local_168 = local_e8;
      puVar15 = (undefined4 *)(local_e8 + -0x10 + (longlong)local_e0 * 0x10);
      if (puVar15 != (undefined4 *)0x0) {
        *puVar15 = local_88[0];
        if (local_80 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::AddRef(local_80);
        }
        *(RefCountImpl **)(puVar15 + 2) = pRVar8;
      }
      FUN_1433b2b20(&local_d0,&local_d0,(longlong)plVar16 + 1);
      pRVar5 = local_70;
      plVar16 = local_c8;
      local_148 = local_d0;
      puVar22 = (uint *)(local_d0 + -0x10 + (longlong)local_c8 * 0x10);
      if (puVar22 != (uint *)0x0) {
        *puVar22 = local_78[0];
        if (local_70 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::AddRef(local_70);
        }
        *(RefCountImpl **)(puVar22 + 2) = pRVar5;
      }
      if (pRVar5 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(pRVar5);
      }
      if (pRVar8 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(pRVar8);
      }
      uVar19 = uVar19 - 1;
      plVar9 = local_130;
      param_3 = local_res18;
    } while (uVar19 != 0);
    local_138 = plVar16;
    local_187 = local_188;
    uVar19 = local_178;
  }
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  *(undefined1 *)(uVar19 + 0x29) = 0;
  local_188 = local_187;
  if (*(int *)(uVar19 + 0x50) - *(int *)(uVar19 + 0x4c) < 1) {
    FUN_143396d60(uVar19);
  }
  iVar18 = *(uint *)(uVar19 + 0x4c) + 1;
  bVar2 = *(byte *)((ulonglong)*(uint *)(uVar19 + 0x4c) + *(longlong *)(uVar19 + 0x60));
  *(int *)(uVar19 + 0x4c) = iVar18;
  uVar14 = (uint)bVar2;
  if (bVar2 == 0xff) {
    *(undefined1 *)(uVar19 + 0x29) = 0;
    if (*(int *)(uVar19 + 0x50) - iVar18 < 2) {
      local_184 = uVar14;
      FUN_143396c40(uVar19,2);
    }
    uVar14 = (uint)CONCAT11(*(undefined1 *)
                             ((ulonglong)(*(int *)(uVar19 + 0x4c) + 1) +
                             *(longlong *)(uVar19 + 0x60)),
                            *(undefined1 *)
                             ((ulonglong)*(uint *)(uVar19 + 0x4c) + *(longlong *)(uVar19 + 0x60)));
    *(uint *)(uVar19 + 0x4c) = *(uint *)(uVar19 + 0x4c) + 2;
  }
  uVar20 = (ulonglong)uVar14;
  local_184 = uVar14;
  FUN_1433b2be0(&local_a0,&local_a0,uVar14);
  uVar25 = local_a0;
  local_178 = local_a0;
  if (uVar14 != 0) {
    puVar13 = (undefined8 *)(local_a0 + 0x20);
    uVar12 = uVar20;
    do {
      if (puVar13 != (undefined8 *)&DAT_00000020) {
        puVar13[-1] = 0;
        *puVar13 = 0;
      }
      puVar13 = puVar13 + 5;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  FUN_1433b2be0(&local_b8,&local_b8,uVar20);
  local_140 = local_b8;
  if (uVar14 != 0) {
    puVar13 = (undefined8 *)(local_b8 + 0x20);
    uVar12 = uVar20;
    do {
      if (puVar13 != (undefined8 *)&DAT_00000020) {
        puVar13[-1] = 0;
        *puVar13 = 0;
      }
      puVar13 = puVar13 + 5;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    if (uVar14 != 0) {
      puVar22 = (uint *)(local_b8 + 8);
      local_150 = local_b8 - uVar25;
      lVar23 = uVar25 - local_b8;
      do {
        lVar17 = local_150;
        *(undefined1 *)(uVar19 + 0x29) = 0;
        if (*(int *)(uVar19 + 0x50) - *(int *)(uVar19 + 0x4c) < 2) {
          FUN_143396c40(uVar19,2);
        }
        uVar3 = *(undefined1 *)
                 ((ulonglong)(*(int *)(uVar19 + 0x4c) + 1) + *(longlong *)(uVar19 + 0x60));
        uVar4 = *(undefined1 *)((ulonglong)*(uint *)(uVar19 + 0x4c) + *(longlong *)(uVar19 + 0x60));
        *(uint *)(uVar19 + 0x4c) = *(uint *)(uVar19 + 0x4c) + 2;
        *(float *)(lVar23 + -8 + (longlong)puVar22) = (float)CONCAT11(uVar3,uVar4);
        *(undefined1 *)(uVar19 + 0x29) = 0;
        if (*(int *)(uVar19 + 0x50) - *(int *)(uVar19 + 0x4c) < 2) {
          FUN_143396c40(uVar19,2);
        }
        piVar6 = local_res18;
        uVar3 = *(undefined1 *)
                 ((ulonglong)(*(int *)(uVar19 + 0x4c) + 1) + *(longlong *)(uVar19 + 0x60));
        uVar4 = *(undefined1 *)((ulonglong)*(uint *)(uVar19 + 0x4c) + *(longlong *)(uVar19 + 0x60));
        *(uint *)(uVar19 + 0x4c) = *(uint *)(uVar19 + 0x4c) + 2;
        *puVar22 = 0;
        puVar22[-2] = (uint)(float)CONCAT11(uVar3,uVar4);
        *(undefined4 *)(lVar23 + (longlong)puVar22) = 0;
        *(undefined4 *)((longlong)puVar22 + lVar17 + lVar23 + -4) = 0x3d4ccccd;
        *(undefined4 *)((longlong)puVar22 + lVar23 + -4) = 0x3d4ccccd;
        puVar22[1] = 0x40400000;
        *(undefined4 *)(lVar23 + 4 + (longlong)puVar22) = 0x40400000;
        if (*local_res18 == 0x54) {
          *(undefined1 *)(uVar19 + 0x29) = 0;
          if (*(int *)(uVar19 + 0x50) - *(int *)(uVar19 + 0x4c) < 2) {
            FUN_143396c40(uVar19,2);
          }
          uVar3 = *(undefined1 *)
                   ((ulonglong)(*(int *)(uVar19 + 0x4c) + 1) + *(longlong *)(uVar19 + 0x60));
          uVar4 = *(undefined1 *)
                   ((ulonglong)*(uint *)(uVar19 + 0x4c) + *(longlong *)(uVar19 + 0x60));
          *(uint *)(uVar19 + 0x4c) = *(uint *)(uVar19 + 0x4c) + 2;
          uVar14 = FUN_1433aba80(CONCAT11(uVar3,uVar4));
          *puVar22 = uVar14;
          *(uint *)(lVar23 + (longlong)puVar22) = uVar14;
          if ((uVar14 & 0x20) != 0) {
            *(undefined1 *)(uVar19 + 0x29) = 0;
            if (*(int *)(uVar19 + 0x50) - *(int *)(uVar19 + 0x4c) < 2) {
              FUN_143396c40(uVar19,2);
            }
            uVar3 = *(undefined1 *)
                     ((ulonglong)(*(int *)(uVar19 + 0x4c) + 1) + *(longlong *)(uVar19 + 0x60));
            uVar4 = *(undefined1 *)
                     ((ulonglong)*(uint *)(uVar19 + 0x4c) + *(longlong *)(uVar19 + 0x60));
            *(uint *)(uVar19 + 0x4c) = *(uint *)(uVar19 + 0x4c) + 2;
            fVar24 = (float)CONCAT11(uVar3,uVar4) * 0.00390625;
            puVar22[1] = (uint)fVar24;
            *(float *)(lVar23 + 4 + (longlong)puVar22) = fVar24;
          }
        }
        iVar18 = *piVar6;
        if ((*(byte *)(lVar23 + (longlong)puVar22) & 8) == 0) {
          Scaleform::GFx::LoadProcess::ReadRgbaTag(local_res10,&local_160,iVar18);
          Scaleform::GFx::LoadProcess::ReadRgbaTag(local_res10,local_15c,*piVar6);
          *(undefined4 *)(lVar23 + 8 + (longlong)puVar22) = local_160;
          puVar22[2] = local_15c[0];
        }
        else {
          in_stack_fffffffffffffe68 = local_58;
          local_60 = (RefCountImpl *)0x0;
          local_50 = (RefCountImpl *)0x0;
          FUN_1433b1c40(param_1,local_res10,iVar18,local_68,in_stack_fffffffffffffe68,&local_188);
          pRVar8 = local_60;
          *(undefined4 *)(lVar23 + 8 + (longlong)puVar22) = local_68[0];
          if (local_60 != (RefCountImpl *)0x0) {
            Scaleform::RefCountImpl::AddRef(local_60);
          }
          pRVar5 = *(RefCountImpl **)(lVar23 + 0x10 + (longlong)puVar22);
          if (pRVar5 != (RefCountImpl *)0x0) {
            Scaleform::RefCountImpl::Release(pRVar5);
          }
          pRVar5 = local_50;
          *(RefCountImpl **)(lVar23 + 0x10 + (longlong)puVar22) = pRVar8;
          puVar22[2] = local_58[0];
          if (local_50 != (RefCountImpl *)0x0) {
            Scaleform::RefCountImpl::AddRef(local_50);
          }
          if (*(RefCountImpl **)(puVar22 + 4) != (RefCountImpl *)0x0) {
            Scaleform::RefCountImpl::Release(*(RefCountImpl **)(puVar22 + 4));
          }
          *(RefCountImpl **)(puVar22 + 4) = pRVar5;
          lVar17 = *(longlong *)(pRVar8 + 0x18);
          if ((lVar17 != 0) && (*(short *)(lVar17 + 0x1c) != 0)) {
            *(undefined4 *)(lVar23 + 8 + (longlong)puVar22) =
                 *(undefined4 *)(*(longlong *)(lVar17 + 0x20) + 4);
          }
          lVar17 = *(longlong *)(pRVar5 + 0x18);
          if ((lVar17 != 0) && (*(short *)(lVar17 + 0x1c) != 0)) {
            puVar22[2] = *(uint *)(*(longlong *)(lVar17 + 0x20) + 4);
          }
          Scaleform::RefCountImpl::Release(pRVar5);
          Scaleform::RefCountImpl::Release(pRVar8);
          param_1 = local_res8;
        }
        puVar22 = puVar22 + 10;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
      local_187 = local_188;
    }
  }
  uVar21 = (*(int *)(uVar19 + 0x4c) - *(int *)(uVar19 + 0x50)) + *(int *)(uVar19 + 0x54);
  uVar14 = local_180 + local_17c;
  if (uVar14 < uVar21) {
    local_180 = 0x47;
    plVar9 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x50,&local_180)
    ;
    plVar16 = plVar11;
    if (plVar9 != (longlong *)0x0) {
      FUN_1433abb30(plVar9,0);
      *plVar9 = (longlong)&PTR_FUN_145afa670;
      plVar9[4] = 0;
      plVar9[5] = 0;
      plVar9[6] = 0;
      plVar9[7] = 0;
      plVar9[8] = 0;
      plVar9[9] = 0;
      plVar16 = plVar9;
    }
    if (*(RefCountImpl **)(param_1 + 0x28) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x28));
    }
    *(longlong **)(param_1 + 0x28) = plVar16;
    local_15c[1] = 0x47;
    plVar9 = (longlong *)
             (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x50,local_15c + 1);
    plVar16 = plVar11;
    if (plVar9 != (longlong *)0x0) {
      FUN_1433abb30(plVar9,0);
      *plVar9 = (longlong)&PTR_FUN_145afa670;
      plVar9[4] = 0;
      plVar9[5] = 0;
      plVar9[6] = 0;
      plVar9[7] = 0;
      plVar9[8] = 0;
      plVar9[9] = 0;
      plVar16 = plVar9;
    }
    if (*(RefCountImpl **)(param_1 + 0x30) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x30));
    }
    *(longlong **)(param_1 + 0x30) = plVar16;
    lVar23 = local_148;
    lVar17 = local_140;
  }
  else {
    FUN_143300df0(uVar19,"MorphCharacterDef, first shape:\n");
    local_res8 = CONCAT44(local_res8._4_4_,0x47);
    plVar9 = (longlong *)
             (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x50,&local_res8);
    plVar16 = plVar11;
    if (plVar9 != (longlong *)0x0) {
      plVar9[1] = 0;
      *plVar9 = (longlong)&PTR_FUN_144f70a50;
      *(undefined4 *)(plVar9 + 1) = 1;
      *plVar9 = (longlong)&PTR_FUN_145afa670;
      plVar9[2] = 0;
      *(undefined1 *)(plVar9 + 3) = 0;
      plVar9[4] = 0;
      plVar9[5] = 0;
      plVar9[6] = 0;
      plVar9[7] = 0;
      plVar9[8] = 0;
      plVar9[9] = 0;
      plVar16 = plVar9;
    }
    if (*(RefCountImpl **)(param_1 + 0x28) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x28));
    }
    piVar6 = local_res18;
    *(longlong **)(param_1 + 0x28) = plVar16;
    (**(code **)(*plVar16 + 0x78))
              (plVar16,local_res10,*local_res18,uVar14 - uVar21,
               (ulonglong)in_stack_fffffffffffffe68 & 0xffffffffffffff00);
    uVar25 = local_178;
    FUN_1433ac5c0(*(undefined8 *)(param_1 + 0x28),local_170,local_168,local_184,local_178);
    cVar7 = local_187;
    if (local_187 != '\0') {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x28) + 0x18);
      *pbVar1 = *pbVar1 | 4;
    }
    FUN_143300df0(uVar19,"MorphCharacterDef, second shape:\n");
    FUN_143395c80(uVar19,uVar14);
    local_17c = 0x47;
    plVar9 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x50,&local_17c)
    ;
    plVar16 = plVar11;
    if (plVar9 != (longlong *)0x0) {
      plVar9[1] = 0;
      *plVar9 = (longlong)&PTR_FUN_144f70a50;
      *(undefined4 *)(plVar9 + 1) = 1;
      *plVar9 = (longlong)&PTR_FUN_145afa670;
      plVar9[2] = 0;
      *(undefined1 *)(plVar9 + 3) = 0;
      plVar9[4] = 0;
      plVar9[5] = 0;
      plVar9[6] = 0;
      plVar9[7] = 0;
      plVar9[8] = 0;
      plVar9[9] = 0;
      plVar16 = plVar9;
    }
    if (*(RefCountImpl **)(param_1 + 0x30) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x30));
    }
    *(longlong **)(param_1 + 0x30) = plVar16;
    (**(code **)(*plVar16 + 0x78))
              (plVar16,local_res10,*piVar6,(piVar6[3] + piVar6[2]) - uVar14,
               uVar25 & 0xffffffffffffff00);
    lVar17 = local_140;
    lVar23 = local_148;
    FUN_1433ac5c0(*(undefined8 *)(param_1 + 0x30),local_170,local_148,local_184,local_140);
    if (cVar7 != '\0') {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x30) + 0x18);
      *pbVar1 = *pbVar1 | 4;
    }
  }
  local_150 = CONCAT44(local_150._4_4_,2);
  lVar10 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x90,&local_150);
  if (lVar10 != 0) {
    plVar11 = (longlong *)
              FUN_143371000(lVar10,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  }
  if (*(RefCountImpl **)(param_1 + 0x20) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x20));
  }
  *(longlong **)(param_1 + 0x20) = plVar11;
  if (local_b0 != 0) {
    puVar13 = (undefined8 *)(lVar17 + local_b0 * 0x28 + -0x10);
    lVar10 = local_b0;
    do {
      if ((RefCountImpl *)puVar13[1] != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)puVar13[1]);
      }
      if ((RefCountImpl *)*puVar13 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar13);
      }
      puVar13 = puVar13 + -5;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  if (lVar17 != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar17);
  }
  if (local_98 != 0) {
    puVar13 = (undefined8 *)((local_178 - 0x10) + local_98 * 0x28);
    lVar17 = local_98;
    do {
      if ((RefCountImpl *)puVar13[1] != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)puVar13[1]);
      }
      if ((RefCountImpl *)*puVar13 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar13);
      }
      puVar13 = puVar13 + -5;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  if (local_178 != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  if (local_138 != (longlong *)0x0) {
    puVar13 = (undefined8 *)((longlong)local_138 * 0x10 + -8 + lVar23);
    plVar11 = local_138;
    do {
      if ((RefCountImpl *)*puVar13 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar13);
      }
      puVar13 = puVar13 + -2;
      plVar11 = (longlong *)((longlong)plVar11 + -1);
    } while (plVar11 != (longlong *)0x0);
  }
  if (lVar23 != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar23);
  }
  if (local_130 != (longlong *)0x0) {
    puVar13 = (undefined8 *)(local_168 + -8 + (longlong)local_130 * 0x10);
    plVar11 = local_130;
    do {
      if ((RefCountImpl *)*puVar13 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar13);
      }
      puVar13 = puVar13 + -2;
      plVar11 = (longlong *)((longlong)plVar11 + -1);
    } while (plVar11 != (longlong *)0x0);
  }
  if (local_168 != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  return;
}



// FUNCTION 1433b1980 FUN_1433b1980 body=79 status=ok
// SIG undefined FUN_1433b1980(void)

undefined8 FUN_1433b1980(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
  local_28 = 0x3f800000;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  local_18 = 0;
  uStack_14 = 0x3f800000;
  uStack_10 = 0;
  uStack_c = 0;
  (**(code **)(*plVar1 + 0x38))(plVar1,param_2,&local_28,param_3,0,0);
  return param_2;
}



// FUNCTION 1433b19e0 FUN_1433b19e0 body=350 status=ok
// SIG undefined FUN_1433b19e0(void)

undefined1 FUN_1433b19e0(longlong param_1,float *param_2,char param_3,longlong *param_4)

{
  undefined8 uVar1;
  RefCountImpl *this;
  float *pfVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar6;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  this = (RefCountImpl *)0x0;
  if ((param_4 != (longlong *)0x0) &&
     (this = (RefCountImpl *)0x0, (*(byte *)((longlong)param_4 + 0x6a) & 1) != 0)) {
    this = (RefCountImpl *)FUN_143367e10(param_4);
  }
  local_38 = 0x3f800000;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  local_28 = 0;
  uStack_24 = 0x3f800000;
  uStack_20 = 0;
  uStack_1c = 0;
  if (param_3 == '\0') {
    plVar3 = (longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
    (**(code **)(*plVar3 + 0x38))(plVar3,&local_48,&local_38,0,0,0);
    if (this != (RefCountImpl *)0x0) {
      pfVar2 = (float *)FUN_1433d0060(this,&local_38,&local_48);
      local_3c = pfVar2[3];
      local_40 = pfVar2[2];
      local_44 = pfVar2[1];
      local_48 = *pfVar2;
    }
    if ((((local_40 < *param_2) || (*param_2 < local_48)) || (local_3c < param_2[1])) ||
       (param_2[1] < local_44)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = (**(code **)(*param_4 + 0x88))(param_4);
    uVar4 = FUN_1433719a0(uVar1,&local_38,*param_2,param_2[1],CONCAT44(uVar6,uVar5),0,0,this);
  }
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
  }
  return uVar4;
}



// FUNCTION 1433b1b50 FUN_1433b1b50 body=38 status=ok
// SIG undefined FUN_1433b1b50(void)

undefined1 FUN_1433b1b50(void)

{
  return 0;
}



// FUNCTION 1433b1b80 FUN_1433b1b80 body=184 status=ok
// SIG undefined FUN_1433b1b80(void)

undefined8 * FUN_1433b1b80(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  RefCountImpl *this;
  RefCountImpl *this_00;
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res8 [2];
  
  this = (RefCountImpl *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0x80))();
  this_00 = (RefCountImpl *)(**(code **)(**(longlong **)(param_1 + 0x30) + 0x80))();
  (**(code **)(*(longlong *)this + 0x88))(this,param_3);
  (**(code **)(*(longlong *)this_00 + 0x88))(this_00,param_3);
  local_res8[0] = 2;
  lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x90,local_res8);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_143371000(lVar1,this,this_00);
  }
  *param_2 = uVar2;
  Scaleform::RefCountImpl::Release(this_00);
  Scaleform::RefCountImpl::Release(this);
  return param_2;
}



// FUNCTION 1433b1c40 FUN_1433b1c40 body=3204 status=ok
// SIG undefined FUN_1433b1c40(void)

void FUN_1433b1c40(undefined8 param_1,longlong param_2,int param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined1 *param_6)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  RefCountImpl *pRVar4;
  ulonglong uVar5;
  char cVar6;
  ushort uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  byte bVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 local_res10;
  byte local_2d8;
  undefined4 local_2d4;
  ulonglong local_2d0;
  int local_2c8 [2];
  longlong *local_2c0;
  undefined4 local_2b8;
  undefined4 local_2b4 [3];
  float local_2a8;
  float local_298;
  float local_288;
  float local_278;
  float local_274;
  uint local_270 [2];
  longlong local_268;
  longlong local_258;
  longlong lStack_250;
  longlong local_248;
  longlong lStack_240;
  longlong local_238;
  longlong lStack_230;
  longlong local_228;
  longlong lStack_220;
  float local_218 [8];
  float local_1f8 [9];
  float local_1d4;
  undefined4 local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  undefined4 local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  undefined4 local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  undefined4 local_1a0;
  float local_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined8 local_184;
  float local_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined8 local_164;
  float local_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  
  lVar14 = *(longlong *)(param_2 + 0x418);
  if (lVar14 == 0) {
    lVar14 = param_2 + 0x50;
  }
  *(undefined1 *)(lVar14 + 0x29) = 0;
  local_268 = lVar14;
  if (*(int *)(lVar14 + 0x50) - *(int *)(lVar14 + 0x4c) < 1) {
    FUN_143396d60(lVar14);
  }
  bVar1 = *(byte *)((ulonglong)*(uint *)(lVar14 + 0x4c) + *(longlong *)(lVar14 + 0x60));
  *(uint *)(lVar14 + 0x4c) = *(uint *)(lVar14 + 0x4c) + 1;
  FUN_143300df0(lVar14,"morph fill style type = 0x%X\n");
  if (bVar1 == 0) {
    FUN_143396ac0(lVar14,&local_2b8);
    FUN_143396ac0(lVar14,local_2b4);
    *param_4 = local_2b8;
    *param_5 = local_2b4[0];
    FUN_143300df0(lVar14,"morph fill style begin color: ");
    FUN_143300df0(lVar14,"morph fill style end color: ");
  }
  else if ((bVar1 & 0x10) == 0) {
    if ((bVar1 & 0x40) != 0) {
      uVar7 = FUN_143300e10(lVar14);
      uVar8 = (uint)uVar7;
      FUN_143300df0(lVar14,"morph fsr BitmapChar = %d\n",uVar8);
      local_118 = 0x3f800000;
      uStack_110 = 0;
      local_108 = 0;
      uStack_104 = 0x3f800000;
      uStack_100 = 0;
      uStack_fc = 0;
      local_f8 = 0x3f800000;
      uStack_f0 = 0;
      local_e8 = 0;
      uStack_e4 = 0x3f800000;
      uStack_e0 = 0;
      uStack_dc = 0;
      FUN_143396390(lVar14,&local_118);
      FUN_143396390(lVar14,&local_f8);
      plVar17 = (longlong *)0x0;
      local_258 = 0x3f800000;
      lStack_250 = 0;
      local_248 = 0x3f80000000000000;
      lStack_240 = 0;
      local_2c8[0] = 0;
      local_2c0 = (longlong *)0x0;
      Scaleform::Render::Matrix2x4<float>::SetInverse
                ((Matrix2x4<float> *)&local_258,(Matrix2x4<float> *)&local_118);
      local_238 = 0x3f800000;
      lStack_230 = 0;
      local_228 = 0x3f80000000000000;
      lStack_220 = 0;
      Scaleform::Render::Matrix2x4<float>::SetInverse
                ((Matrix2x4<float> *)&local_238,(Matrix2x4<float> *)&local_f8);
      plVar12 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x50,0);
      plVar13 = plVar17;
      if (plVar12 != (longlong *)0x0) {
        plVar12[1] = 0;
        *plVar12 = (longlong)&PTR_FUN_144f70a50;
        *(undefined4 *)(plVar12 + 1) = 1;
        *plVar12 = (longlong)&PTR_FUN_145affbc0;
        plVar12[2] = 0;
        plVar12[3] = 0;
        plVar12[4] = 0x3f800000;
        plVar12[5] = 0;
        *(undefined4 *)(plVar12 + 6) = 0;
        *(undefined8 *)((longlong)plVar12 + 0x34) = 0x3f800000;
        *(undefined4 *)((longlong)plVar12 + 0x3c) = 0;
        *(undefined2 *)(plVar12 + 8) = 0;
        *(undefined4 *)((longlong)plVar12 + 0x44) = 0xffffffff;
        plVar13 = plVar12;
      }
      if (*(RefCountImpl **)(param_4 + 2) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_4 + 2));
      }
      *(longlong **)(param_4 + 2) = plVar13;
      plVar13[4] = local_258;
      plVar13[5] = lStack_250;
      plVar13[6] = local_248;
      plVar13[7] = lStack_240;
      if (bVar1 == 0x40) {
        *(undefined2 *)(*(longlong *)(param_4 + 2) + 0x40) = 0x100;
      }
      else if (bVar1 == 0x41) {
        *(undefined2 *)(*(longlong *)(param_4 + 2) + 0x40) = 0x101;
      }
      else if (bVar1 == 0x42) {
        *(undefined2 *)(*(longlong *)(param_4 + 2) + 0x40) = 0;
      }
      else if (bVar1 == 0x43) {
        *(undefined2 *)(*(longlong *)(param_4 + 2) + 0x40) = 1;
      }
      plVar12 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x50);
      plVar13 = plVar17;
      if (plVar12 != (longlong *)0x0) {
        plVar12[1] = 0;
        *plVar12 = (longlong)&PTR_FUN_144f70a50;
        *plVar12 = (longlong)&PTR_FUN_145affbc0;
        *(undefined4 *)(plVar12 + 1) = 1;
        plVar12[2] = 0;
        plVar12[3] = 0;
        plVar12[4] = 0x3f800000;
        plVar12[5] = 0;
        *(undefined4 *)(plVar12 + 6) = 0;
        *(undefined8 *)((longlong)plVar12 + 0x34) = 0x3f800000;
        *(undefined4 *)((longlong)plVar12 + 0x3c) = 0;
        *(undefined2 *)(plVar12 + 8) = 0;
        *(undefined4 *)((longlong)plVar12 + 0x44) = 0xffffffff;
        plVar13 = plVar12;
      }
      if (*(RefCountImpl **)(param_5 + 2) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_5 + 2));
      }
      *(longlong **)(param_5 + 2) = plVar13;
      plVar13[4] = local_238;
      plVar13[5] = lStack_230;
      plVar13[6] = local_228;
      plVar13[7] = lStack_220;
      *(undefined2 *)(*(longlong *)(param_5 + 2) + 0x40) =
           *(undefined2 *)(*(longlong *)(param_4 + 2) + 0x40);
      local_270[0] = uVar8;
      cVar6 = FUN_14330e8c0(*(undefined8 *)(param_2 + 0x38),local_2c8,local_270);
      if (((cVar6 == '\0') || (local_2c8[0] != 0)) || (local_2c0 == (longlong *)0x0)) {
        *param_5 = 0xffa7dd39;
        *param_4 = 0xffa7dd39;
        if (local_2c8[0] == 1) {
          *(undefined4 *)(*(longlong *)(param_4 + 2) + 0x44) = local_2c0._0_4_;
          *(undefined4 *)(*(longlong *)(param_5 + 2) + 0x44) = local_2c0._0_4_;
          *param_6 = 1;
        }
        else {
          if (*(RefCountImpl **)(param_5 + 2) != (RefCountImpl *)0x0) {
            Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_5 + 2));
          }
          *(undefined8 *)(param_5 + 2) = 0;
          FUN_1433b28d0(param_4 + 2,param_5 + 2);
          if (uVar8 != 0xffff) {
            local_2d0 = CONCAT44(local_2d0._4_4_,0x21000);
            FUN_1433db230(&local_2d0,"An image with resource id %d is not found in resource table.",
                          uVar8);
          }
        }
      }
      else {
        uVar8 = (**(code **)(*local_2c0 + 0x10))();
        if ((uVar8 & 0xff00) == 0x100) {
          if (local_2c8[0] == 0) {
            plVar17 = local_2c0;
          }
          lVar14 = plVar17[3];
          FUN_143320580(*(longlong *)(param_4 + 2) + 0x10,lVar14);
          FUN_143320580(*(longlong *)(param_5 + 2) + 0x10,lVar14);
        }
      }
      if ((local_2c8[0] == 0) && (local_2c0 != (longlong *)0x0)) {
        FUN_1432de450();
      }
    }
  }
  else {
    local_158 = 0x3f800000;
    uStack_150 = 0;
    local_148 = 0;
    uStack_144 = 0x3f800000;
    uStack_140 = 0;
    uStack_13c = 0;
    local_138 = 0x3f800000;
    uStack_130 = 0;
    local_128 = 0;
    uStack_124 = 0x3f800000;
    uStack_120 = 0;
    uStack_11c = 0;
    FUN_143396390(lVar14,&local_158);
    FUN_143396390(lVar14,&local_138);
    if (bVar1 == 0x10) {
      fVar18 = 0.0;
      fVar20 = 0.0;
    }
    else {
      fVar18 = 0.5;
      fVar20 = 0.5;
    }
    local_218[0] = 1.0;
    local_218[1] = 0.0;
    local_218[2] = 0.0;
    local_218[3] = 0.0;
    local_218[4] = 0.0;
    local_218[5] = 1.0;
    local_218[6] = 0.0;
    local_218[7] = 0.0;
    Scaleform::Render::Matrix2x4<float>::SetInverse
              ((Matrix2x4<float> *)local_218,(Matrix2x4<float> *)&local_158);
    local_198 = 0x38000000;
    uStack_190 = 0x3f00000000000000;
    local_188 = 0;
    local_184 = 0x38000000;
    local_1c0 = 0;
    local_2a8 = local_218[4] * 0.0 + local_218[0] * 3.0517578e-05;
    local_1d0 = 0;
    fVar23 = local_218[4] * 3.0517578e-05 + local_218[0] * 0.0;
    local_298 = local_218[5] * 0.0 + local_218[1] * 3.0517578e-05;
    fVar24 = local_218[5] * 3.0517578e-05 + local_218[1] * 0.0;
    local_1f8[0] = 1.0;
    local_1f8[1] = 0.0;
    local_1f8[2] = 0.0;
    local_1f8[3] = 0.0;
    local_1f8[4] = 0.0;
    local_1f8[5] = 1.0;
    local_1f8[6] = 0.0;
    local_1f8[7] = 0.0;
    fVar21 = local_218[7] * 0.0 + local_218[3] * 3.0517578e-05 + 0.5;
    fVar19 = fVar18 + local_218[7] * 3.0517578e-05 + local_218[3] * 0.0;
    local_1f8[8] = local_2a8;
    local_1d4 = local_298;
    local_1cc = fVar21;
    local_1c8 = fVar23;
    local_1c4 = fVar24;
    local_1bc = fVar19;
    local_17c = fVar18;
    Scaleform::Render::Matrix2x4<float>::SetInverse
              ((Matrix2x4<float> *)local_1f8,(Matrix2x4<float> *)&local_138);
    local_178 = 0x38000000;
    uStack_170 = 0x3f00000000000000;
    local_168 = 0;
    local_164 = 0x38000000;
    local_288 = local_1f8[4] * 0.0 + local_1f8[0] * 3.0517578e-05;
    fVar25 = local_1f8[4] * 3.0517578e-05 + local_1f8[0] * 0.0;
    local_1a0 = 0;
    local_1b0 = 0;
    *(undefined1 *)(lVar14 + 0x29) = 0;
    local_274 = local_1f8[5] * 3.0517578e-05 + local_1f8[1] * 0.0;
    local_278 = local_1f8[5] * 0.0 + local_1f8[1] * 3.0517578e-05;
    fVar22 = local_1f8[7] * 0.0 + local_1f8[3] * 3.0517578e-05 + 0.5;
    fVar18 = fVar20 + local_1f8[7] * 3.0517578e-05 + local_1f8[3] * 0.0;
    local_1b8 = local_288;
    local_1b4 = local_278;
    local_1ac = fVar22;
    local_1a8 = fVar25;
    local_1a4 = local_274;
    local_19c = fVar18;
    local_15c = fVar20;
    if (*(int *)(lVar14 + 0x50) - *(int *)(lVar14 + 0x4c) < 1) {
      FUN_143396d60(lVar14);
    }
    bVar15 = 0;
    local_2d8 = *(byte *)((ulonglong)*(uint *)(lVar14 + 0x4c) + *(longlong *)(lVar14 + 0x60));
    *(uint *)(lVar14 + 0x4c) = *(uint *)(lVar14 + 0x4c) + 1;
    if ((param_3 == 0x54) || (bVar1 == 0x13)) {
      bVar15 = local_2d8 >> 4;
      local_2d8 = local_2d8 & 0xf;
      bVar15 = bVar15 & 1;
    }
    puVar9 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x50))();
    if (puVar9 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      puVar9[1] = 0;
      *puVar9 = &PTR_FUN_144f70a50;
      *(undefined4 *)(puVar9 + 1) = 1;
      *puVar9 = &PTR_FUN_145affbc0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[4] = 0x3f800000;
      puVar9[5] = 0;
      *(undefined4 *)(puVar9 + 6) = 0;
      *(undefined8 *)((longlong)puVar9 + 0x34) = 0x3f800000;
      *(undefined4 *)((longlong)puVar9 + 0x3c) = 0;
      *(undefined2 *)(puVar9 + 8) = 0;
      *(undefined4 *)((longlong)puVar9 + 0x44) = 0xffffffff;
    }
    puVar16 = (undefined8 *)0x0;
    if (*(RefCountImpl **)(param_4 + 2) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_4 + 2));
    }
    *(undefined8 **)(param_4 + 2) = puVar9;
    puVar10 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x50);
    puVar9 = puVar16;
    if (puVar10 != (undefined8 *)0x0) {
      puVar10[1] = 0;
      *puVar10 = &PTR_FUN_144f70a50;
      *puVar10 = &PTR_FUN_145affbc0;
      *(undefined4 *)(puVar10 + 1) = 1;
      puVar10[2] = 0;
      puVar10[3] = 0;
      puVar10[4] = 0x3f800000;
      puVar10[5] = 0;
      *(undefined4 *)(puVar10 + 6) = 0;
      *(undefined8 *)((longlong)puVar10 + 0x34) = 0x3f800000;
      *(undefined4 *)((longlong)puVar10 + 0x3c) = 0;
      *(undefined2 *)(puVar10 + 8) = 0;
      *(undefined4 *)((longlong)puVar10 + 0x44) = 0xffffffff;
      puVar9 = puVar10;
    }
    if (*(RefCountImpl **)(param_5 + 2) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_5 + 2));
    }
    *(undefined8 **)(param_5 + 2) = puVar9;
    if ((bVar1 == 0x10) ||
       ((puVar9 = (undefined8 *)0x1, bVar1 != 0x12 && (puVar9 = (undefined8 *)0x2, bVar1 != 0x13))))
    {
      puVar9 = puVar16;
    }
    lVar11 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x38);
    if (lVar11 == 0) {
      local_2d0 = 0;
    }
    else {
      local_2d0 = FUN_143321870(lVar11,puVar9,local_2d8,bVar15);
    }
    lVar11 = *(longlong *)(param_4 + 2);
    pRVar4 = *(RefCountImpl **)(lVar11 + 0x18);
    if (pRVar4 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(pRVar4);
    }
    *(ulonglong *)(lVar11 + 0x18) = local_2d0;
    lVar11 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x38);
    if (lVar11 == 0) {
      local_res10 = 0;
    }
    else {
      local_res10 = FUN_143321870(lVar11,puVar9,(ulonglong)local_2d8,bVar15);
    }
    lVar11 = *(longlong *)(param_5 + 2);
    pRVar4 = *(RefCountImpl **)(lVar11 + 0x18);
    if (pRVar4 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(pRVar4);
    }
    *(undefined8 *)(lVar11 + 0x18) = local_res10;
    uVar5 = (ulonglong)local_2d8;
    if (local_2d8 != 0) {
      do {
        local_2d0 = uVar5;
        lVar14 = *(longlong *)(param_2 + 0x418);
        if (lVar14 == 0) {
          lVar14 = param_2 + 0x50;
        }
        *(undefined1 *)(lVar14 + 0x29) = 0;
        if (*(int *)(lVar14 + 0x50) - *(int *)(lVar14 + 0x4c) < 1) {
          FUN_143396d60(lVar14);
        }
        uVar2 = *(undefined1 *)((ulonglong)*(uint *)(lVar14 + 0x4c) + *(longlong *)(lVar14 + 0x60));
        *(uint *)(lVar14 + 0x4c) = *(uint *)(lVar14 + 0x4c) + 1;
        Scaleform::GFx::LoadProcess::ReadRgbaTag(param_2,&local_2d4,param_3);
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(*(longlong *)(param_4 + 2) + 0x18) + 0x20) + 4 +
         (longlong)puVar16) = local_2d4;
        *(undefined1 *)
         ((longlong)puVar16 + *(longlong *)(*(longlong *)(*(longlong *)(param_4 + 2) + 0x18) + 0x20)
         ) = uVar2;
        lVar14 = *(longlong *)(param_2 + 0x418);
        if (lVar14 == 0) {
          lVar14 = param_2 + 0x50;
        }
        *(undefined1 *)(lVar14 + 0x29) = 0;
        if (*(int *)(lVar14 + 0x50) - *(int *)(lVar14 + 0x4c) < 1) {
          FUN_143396d60(lVar14);
        }
        uVar2 = *(undefined1 *)((ulonglong)*(uint *)(lVar14 + 0x4c) + *(longlong *)(lVar14 + 0x60));
        *(uint *)(lVar14 + 0x4c) = *(uint *)(lVar14 + 0x4c) + 1;
        Scaleform::GFx::LoadProcess::ReadRgbaTag(param_2,&local_2d4,param_3);
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(*(longlong *)(param_5 + 2) + 0x18) + 0x20) + 4 +
         (longlong)puVar16) = local_2d4;
        *(undefined1 *)
         ((longlong)puVar16 + *(longlong *)(*(longlong *)(*(longlong *)(param_5 + 2) + 0x18) + 0x20)
         ) = uVar2;
        puVar16 = puVar16 + 1;
        uVar5 = local_2d0 - 1;
      } while (local_2d0 - 1 != 0);
      local_2d0 = 0;
      lVar14 = local_268;
    }
    FUN_143300df0(lVar14,"morph fsr: numGradients = %d\n",local_2d8);
    if (bVar1 == 0x13) {
      *(undefined1 *)(lVar14 + 0x29) = 0;
      if (*(int *)(lVar14 + 0x50) - *(int *)(lVar14 + 0x4c) < 2) {
        FUN_143396c40(lVar14,2);
      }
      uVar8 = *(uint *)(lVar14 + 0x4c);
      uVar2 = *(undefined1 *)((ulonglong)(uVar8 + 1) + *(longlong *)(lVar14 + 0x60));
      uVar3 = *(undefined1 *)((ulonglong)uVar8 + *(longlong *)(lVar14 + 0x60));
      *(uint *)(lVar14 + 0x4c) = uVar8 + 2;
      *(float *)(*(longlong *)(*(longlong *)(param_4 + 2) + 0x18) + 0x28) =
           (float)(int)CONCAT11(uVar2,uVar3) * 0.00390625;
      *(undefined1 *)(lVar14 + 0x29) = 0;
      if (*(int *)(lVar14 + 0x50) - *(int *)(lVar14 + 0x4c) < 2) {
        FUN_143396c40(lVar14,2);
      }
      uVar8 = *(uint *)(lVar14 + 0x4c);
      uVar2 = *(undefined1 *)((ulonglong)(uVar8 + 1) + *(longlong *)(lVar14 + 0x60));
      uVar3 = *(undefined1 *)((ulonglong)uVar8 + *(longlong *)(lVar14 + 0x60));
      *(uint *)(lVar14 + 0x4c) = uVar8 + 2;
      *(float *)(*(longlong *)(*(longlong *)(param_5 + 2) + 0x18) + 0x28) =
           (float)(int)CONCAT11(uVar2,uVar3) * 0.00390625;
    }
    lVar14 = *(longlong *)(param_4 + 2);
    *(float *)(lVar14 + 0x20) = local_2a8;
    *(float *)(lVar14 + 0x24) = local_298;
    *(undefined4 *)(lVar14 + 0x28) = 0;
    *(float *)(lVar14 + 0x2c) = fVar21;
    *(float *)(lVar14 + 0x30) = fVar23;
    *(float *)(lVar14 + 0x34) = fVar24;
    *(undefined4 *)(lVar14 + 0x38) = 0;
    *(float *)(lVar14 + 0x3c) = fVar19;
    lVar14 = *(longlong *)(param_5 + 2);
    *(float *)(lVar14 + 0x20) = local_288;
    *(float *)(lVar14 + 0x24) = local_278;
    *(undefined4 *)(lVar14 + 0x28) = 0;
    *(float *)(lVar14 + 0x2c) = fVar22;
    *(float *)(lVar14 + 0x30) = fVar25;
    *(float *)(lVar14 + 0x34) = local_274;
    *(undefined4 *)(lVar14 + 0x38) = 0;
    *(float *)(lVar14 + 0x3c) = fVar18;
  }
  return;
}



// FUNCTION 1433b28d0 FUN_1433b28d0 body=62 status=ok
// SIG undefined FUN_1433b28d0(void)

undefined8 * FUN_1433b28d0(undefined8 *param_1,undefined8 *param_2)

{
  if ((RefCountImpl *)*param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef((RefCountImpl *)*param_2);
  }
  if ((RefCountImpl *)*param_1 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)*param_1);
  }
  *param_1 = *param_2;
  return param_1;
}



// FUNCTION 1433b2910 FUN_1433b2910 body=156 status=ok
// SIG undefined FUN_1433b2910(void)

undefined8 * FUN_1433b2910(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_145b05a08;
  if ((RefCountImpl *)param_1[6] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[6]);
  }
  if ((RefCountImpl *)param_1[5] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[5]);
  }
  *param_1 = &PTR_FUN_145b05368;
  if ((RefCountImpl *)param_1[4] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[4]);
  }
  *param_1 = &PTR_FUN_144f8bf30;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1433b29b0 FUN_1433b29b0 body=24 status=ok
// SIG undefined FUN_1433b29b0(void)

undefined8 FUN_1433b29b0(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x38))();
  return param_2;
}



// FUNCTION 1433b29f0 FUN_1433b29f0 body=128 status=ok
// SIG undefined FUN_1433b29f0(void)

ushort FUN_1433b29f0(longlong param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  ushort uVar4;
  int iVar5;
  
  *(undefined1 *)(param_1 + 0x29) = 0;
  if (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) < 1) {
    FUN_143396d60();
  }
  iVar5 = *(uint *)(param_1 + 0x4c) + 1;
  bVar1 = *(byte *)((ulonglong)*(uint *)(param_1 + 0x4c) + *(longlong *)(param_1 + 0x60));
  uVar4 = (ushort)bVar1;
  *(int *)(param_1 + 0x4c) = iVar5;
  if (bVar1 == 0xff) {
    *(undefined1 *)(param_1 + 0x29) = 0;
    if (*(int *)(param_1 + 0x50) - iVar5 < 2) {
      FUN_143396c40(param_1,2);
    }
    uVar2 = *(undefined1 *)
             ((ulonglong)(*(int *)(param_1 + 0x4c) + 1) + *(longlong *)(param_1 + 0x60));
    uVar3 = *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x4c) + *(longlong *)(param_1 + 0x60));
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) + 2;
    uVar4 = CONCAT11(uVar2,uVar3);
  }
  return uVar4;
}



// FUNCTION 1433b2a70 FUN_1433b2a70 body=167 status=ok
// SIG undefined FUN_1433b2a70(void)

void FUN_1433b2a70(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if (param_3 != param_1[2]) {
    lVar1 = *param_1;
    if (param_3 == 0) {
      uVar2 = 0;
      if (lVar1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
        param_1[2] = 0;
        return;
      }
    }
    else {
      uVar2 = param_3 + 3U & 0xfffffffffffffffc;
      if (lVar1 != 0) {
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,lVar1,uVar2 * 0x28);
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 2;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,uVar2 * 0x28,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 1433b2b20 FUN_1433b2b20 body=180 status=ok
// SIG undefined FUN_1433b2b20(void)

void FUN_1433b2b20(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    if (lVar2 != 0) {
      puVar1 = (undefined8 *)(*param_1 + -8 + (lVar2 + param_3) * 0x10);
      do {
        if ((RefCountImpl *)*puVar1 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar1);
        }
        puVar1 = puVar1 + -2;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1433954d0(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_1433954d0(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 1433b2be0 FUN_1433b2be0 body=192 status=ok
// SIG undefined FUN_1433b2be0(void)

void FUN_1433b2be0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    if (lVar2 != 0) {
      puVar1 = (undefined8 *)(*param_1 + -0x10 + (lVar2 + param_3) * 0x28);
      do {
        if ((RefCountImpl *)puVar1[1] != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release((RefCountImpl *)puVar1[1]);
        }
        if ((RefCountImpl *)*puVar1 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar1);
        }
        puVar1 = puVar1 + -5;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1433b2a70(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_1433b2a70(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 1433b2cb0 FUN_1433b2cb0 body=99 status=ok
// SIG undefined FUN_1433b2cb0(void)

void FUN_1433b2cb0(longlong *param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if ((int)param_1[1] == 0) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  do {
    puVar1 = *(undefined8 **)(*param_1 + uVar2 * 8);
    (**(code **)*puVar1)(puVar1,0);
    uVar3 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar3;
  } while (uVar3 < *(uint *)(param_1 + 1));
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 1433b2d20 PathAllocator body=21 status=ok
// SIG undefined PathAllocator(void)

undefined8 * Scaleform::GFx::PathAllocator::PathAllocator(undefined8 *param_1,undefined2 param_2)

{
  *(undefined2 *)((longlong)param_1 + 0x12) = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  return param_1;
}



// FUNCTION 1433b2d40 ~PathAllocator body=80 status=ok
// SIG undefined ~PathAllocator(void)

void Scaleform::GFx::PathAllocator::~PathAllocator(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar1;
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  return;
}



// FUNCTION 1433b2da0 ~PathAllocator body=80 status=ok
// SIG undefined ~PathAllocator(void)

void Scaleform::GFx::PathAllocator::~PathAllocator(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar1;
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  return;
}



// FUNCTION 1433b2e00 FUN_1433b2e00 body=213 status=ok
// SIG undefined FUN_1433b2e00(void)

void FUN_1433b2e00(longlong param_1,int param_2,uint param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar2 = param_3 * 3;
  uVar5 = param_2 + 1 + iVar2;
  uVar3 = uVar5;
  if (param_2 != 0) {
    iVar6 = 0;
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 != 0) {
      uVar4 = (int)lVar1 + 0xd + (*(int *)(lVar1 + 8) - (uint)*(ushort *)(param_1 + 0x10));
      uVar3 = param_3 - 1 & uVar4;
      iVar6 = ((param_3 - 1) + uVar3 & ~(param_3 - 1)) - uVar3;
      uVar3 = uVar4 + iVar2 + iVar6 & param_4 - 1U;
      iVar6 = iVar6 + ((param_4 + -1 + uVar3 & ~(param_4 - 1U)) - uVar3);
    }
    uVar3 = iVar6 + uVar5;
    if ((lVar1 == 0) || (*(ushort *)(param_1 + 0x10) < uVar3)) {
      iVar6 = ((param_4 + -1 + (~(param_3 - 1) & param_3) + iVar2 & ~(param_4 - 1U)) - uVar5) +
              param_2;
    }
    uVar5 = uVar5 + iVar6;
  }
  FUN_1433b2ef0(param_1,uVar3,uVar5);
  return;
}



// FUNCTION 1433b2ee0 FUN_1433b2ee0 body=8 status=ok
// SIG undefined FUN_1433b2ee0(void)

void FUN_1433b2ee0(undefined8 param_1,undefined4 param_2)

{
  FUN_1433b2ef0(param_1,param_2,param_2);
  return;
}



// FUNCTION 1433b2ef0 FUN_1433b2ef0 body=189 status=ok
// SIG undefined FUN_1433b2ef0(void)

longlong FUN_1433b2ef0(longlong *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  uVar3 = (uint)*(ushort *)(param_1 + 2);
  if ((param_1[1] == 0) || (*(ushort *)(param_1 + 2) < param_2)) {
    uVar3 = (uint)*(ushort *)((longlong)param_1 + 0x12);
    if (*(ushort *)((longlong)param_1 + 0x12) < param_3) {
      uVar3 = param_3;
    }
    puVar2 = (undefined8 *)
             (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,(ulonglong)uVar3 + 0x10,0);
    if (puVar2 == (undefined8 *)0x0) {
      return 0;
    }
    *puVar2 = 0;
    *(uint *)(puVar2 + 1) = uVar3;
    if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
      *(undefined8 *)param_1[1] = puVar2;
      *(int *)(param_1[1] + 8) = *(int *)(param_1[1] + 8) - (uint)*(ushort *)(param_1 + 2);
    }
    param_1[1] = (longlong)puVar2;
    param_2 = param_3;
    if (*param_1 == 0) {
      *param_1 = (longlong)puVar2;
    }
  }
  uVar1 = *(uint *)(param_1[1] + 8);
  *(short *)(param_1 + 2) = (short)uVar3 - (short)param_2;
  return param_1[1] + 0xc + ((ulonglong)uVar1 - (ulonglong)uVar3);
}



// FUNCTION 1433b2fc0 FUN_1433b2fc0 body=128 status=ok
// SIG undefined FUN_1433b2fc0(void)

ulonglong FUN_1433b2fc0(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (((param_4 < param_3) && (lVar1 = *(longlong *)(param_1 + 8), lVar1 != 0)) &&
     (in_RAX = (ulonglong)*(int *)(lVar1 + 8), (param_2 - lVar1) + -0xc < (longlong)in_RAX)) {
    lVar4 = (param_2 - lVar1) + -0xc;
    in_RAX = (ulonglong)*(ushort *)(param_1 + 0x10);
    if (((ulonglong)*(uint *)(lVar1 + 8) - (ulonglong)param_3) - lVar4 == in_RAX) {
      uVar2 = (ulonglong)(uint3)(param_4 >> 8) << 8;
      uVar3 = ((ulonglong)*(uint *)(lVar1 + 8) - (ulonglong)param_4) - lVar4;
      if (0xffff < uVar3) {
        return uVar2;
      }
      *(short *)(param_1 + 0x10) = (short)uVar3;
      return uVar2;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1433b3090 FUN_1433b3090 body=51 status=ok
// SIG undefined FUN_1433b3090(void)

undefined8 * FUN_1433b3090(longlong param_1,undefined8 *param_2)

{
  if (*(RefCountImpl **)(param_1 + 0x20) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_1 + 0x20));
  }
  *param_2 = *(undefined8 *)(param_1 + 0x20);
  return param_2;
}



// FUNCTION 1433b30d0 FUN_1433b30d0 body=342 status=ok
// SIG undefined FUN_1433b30d0(void)

longlong * FUN_1433b30d0(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong param_4)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  RefCountImpl *local_res8;
  RefCountImpl *local_res10;
  
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)*param_3 + 0x50))((longlong *)*param_3,0xa0,0);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_1432ef4d0(puVar2,3);
    *puVar2 = &PTR_FUN_145af92d8;
    puVar2[0x12] = 0;
    *(undefined4 *)(puVar2 + 0x13) = 0;
  }
  lVar3 = FUN_1432ceba0(param_3,puVar2);
  cVar1 = (**(code **)(*param_1 + 0x70))(param_1);
  if (cVar1 == '\0') {
    FUN_1432f2e20(lVar3,param_1[4]);
  }
  else {
    FUN_1433105c0(*(undefined8 *)(param_4 + 0x70),&local_res8,param_1[4]);
    if (local_res8 == (RefCountImpl *)0x0) {
      plVar4 = (longlong *)
               (**(code **)(*param_1 + 0x68))
                         (param_1,&local_res10,*(longlong *)(param_4 + 0x70) + 0x30);
      if ((RefCountImpl *)*plVar4 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef((RefCountImpl *)*plVar4);
      }
      if (local_res8 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(local_res8);
      }
      local_res8 = (RefCountImpl *)*plVar4;
      if (local_res10 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(local_res10);
      }
      FUN_1433106d0(*(undefined8 *)(param_4 + 0x70),param_1[4],local_res8);
    }
    FUN_1432f2e20(lVar3,local_res8);
    if (local_res8 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(local_res8);
    }
  }
  if (lVar3 != 0) {
    *(longlong *)(lVar3 + 0x18) = *(longlong *)(lVar3 + 0x18) + 1;
  }
  *param_2 = lVar3;
  if (lVar3 != 0) {
    plVar4 = (longlong *)(lVar3 + 0x18);
    *plVar4 = *plVar4 + -1;
    if (*plVar4 == 0) {
      FUN_1432ccf00(lVar3);
    }
  }
  return param_2;
}



// FUNCTION 1433b32b0 FUN_1433b32b0 body=470 status=ok
// SIG undefined FUN_1433b32b0(void)

bool FUN_1433b32b0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  ulonglong local_d8;
  int local_d0;
  ulonglong local_c8;
  int local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_84;
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48 [3];
  ulonglong local_30 [3];
  
  cVar1 = (**(code **)(*param_1 + 8))();
  cVar2 = (**(code **)(*param_2 + 8))(param_2);
  if ((cVar1 == '\0') && (cVar2 == '\0')) {
    uVar3 = (**(code **)(*param_1 + 0x30))(param_1);
    local_80 = (**(code **)(*param_2 + 0x30))();
    local_b4 = 0;
    local_ac = 0;
    bVar7 = true;
    local_a4 = 0;
    local_9c = 0;
    local_94 = 0;
    local_8c = 0;
    local_84 = 0;
    local_7c = 0;
    local_74 = 0;
    local_6c = 0;
    local_64 = 0;
    local_5c = 0;
    local_54 = 0;
    local_4c = 0;
    local_88 = 0x3f800000;
    local_50 = 0x3f800000;
    local_b8 = uVar3;
    iVar4 = (**(code **)(*param_1 + 0x40))(param_1,&local_b8,local_48,&local_d8);
    iVar5 = (**(code **)(*param_2 + 0x40))(param_2,&local_80,local_30,&local_c8);
    if (iVar4 == iVar5) {
      while( true ) {
        if (iVar4 == 0) {
          return true;
        }
        if ((iVar4 == 2) || (bVar7)) {
          bVar7 = false;
        }
        if (((local_d8 != local_c8) || (local_d0 != local_c0)) || (local_48[0] != local_30[0]))
        break;
        while( true ) {
          iVar5 = (**(code **)(*param_1 + 0x48))(param_1,&local_b8,local_48);
          iVar4 = (**(code **)(*param_2 + 0x48))(param_2,&local_80,local_30);
          if (iVar5 != iVar4) goto LAB_1433b3420;
          if (iVar5 == 0) break;
          lVar6 = 2;
          if (iVar5 == 2) {
            lVar6 = 4;
          }
          iVar5 = _guard_xfg_dispatch_icall_nop(local_48,local_30,lVar6 << 2);
          if (iVar5 != 0) goto LAB_1433b3420;
        }
        iVar4 = (**(code **)(*param_1 + 0x40))(param_1,&local_b8,local_48,&local_d8);
        iVar5 = (**(code **)(*param_2 + 0x40))(param_2,&local_80,local_30,&local_c8);
        if (iVar4 != iVar5) break;
      }
    }
LAB_1433b3420:
    bVar7 = false;
  }
  else {
    bVar7 = cVar1 == cVar2;
  }
  return bVar7;
}



// FUNCTION 1433b3490 FUN_1433b3490 body=455 status=ok
// SIG undefined FUN_1433b3490(void)

uint FUN_1433b3490(longlong *param_1)

{
  byte *pbVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  int local_68;
  int local_64;
  byte local_5d [5];
  undefined1 local_58 [7];
  byte local_51 [8];
  byte local_49 [9];
  undefined4 local_40;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  cVar3 = (**(code **)(*param_1 + 8))();
  if (cVar3 == '\0') {
    uVar6 = 0x1505;
    local_40 = (**(code **)(*param_1 + 0x30))(param_1);
    local_10 = 0x3f800000;
    local_3c = 0;
    local_34 = 0;
    local_2c = 0;
    bVar2 = true;
    local_24 = 0;
    local_1c = 0;
    local_14 = 0;
    local_c = 0;
    iVar4 = (**(code **)(*param_1 + 0x40))(param_1,&local_40,local_58,&local_68);
    while ((iVar4 != 0 && ((bVar2 || (iVar4 != 2))))) {
      bVar2 = false;
      pbVar5 = local_5d + 1;
      iVar4 = 0xc;
      do {
        pbVar1 = pbVar5 + -1;
        pbVar5 = pbVar5 + -1;
        uVar6 = uVar6 * 0x21 ^ (uint)*pbVar1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      if (local_68 == local_64) {
        (**(code **)(*param_1 + 0x50))(param_1,&local_40);
      }
      else {
        iVar4 = 8;
        pbVar5 = local_51 + 1;
        do {
          pbVar1 = pbVar5 + -1;
          pbVar5 = pbVar5 + -1;
          uVar6 = uVar6 * 0x21 ^ (uint)*pbVar1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        iVar4 = (**(code **)(*param_1 + 0x48))(param_1,&local_40,local_58);
        while (iVar4 != 0) {
          if (iVar4 == 1) {
            iVar4 = 8;
            pbVar5 = local_51 + 1;
            do {
              pbVar1 = pbVar5 + -1;
              pbVar5 = pbVar5 + -1;
              uVar6 = uVar6 * 0x21 ^ (uint)*pbVar1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          else {
            iVar4 = 0x10;
            pbVar5 = local_49 + 1;
            do {
              pbVar1 = pbVar5 + -1;
              pbVar5 = pbVar5 + -1;
              uVar6 = uVar6 * 0x21 ^ (uint)*pbVar1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          iVar4 = (**(code **)(*param_1 + 0x48))(param_1,&local_40,local_58);
        }
      }
      iVar4 = (**(code **)(*param_1 + 0x40))(param_1,&local_40,local_58,&local_68);
    }
    return uVar6;
  }
  return 0;
}



// FUNCTION 1433b3660 FUN_1433b3660 body=229 status=ok
// SIG undefined FUN_1433b3660(void)

undefined8 *
FUN_1433b3660(undefined8 *param_1,undefined8 param_2,RefCountImpl *param_3,RefCountImpl *param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_145b05b70;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 3) = 0x30;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 3;
  *(undefined4 *)(param_1 + 4) = 0x400;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x400;
  param_1[5] = param_5;
  if (param_3 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_3);
  }
  param_1[6] = param_3;
  if (param_4 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_4);
  }
  param_1[7] = param_4;
  param_1[8] = param_6;
  Scaleform::Render::RectPacker::RectPacker(param_1 + 9);
  FUN_1433ca810(param_1 + 0x25,DAT_146b62f28);
  param_1[0x7f] = 0;
  *(undefined1 *)(param_1 + 0x80) = param_7;
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    param_1[3] = *(undefined8 *)(lVar1 + 0x18);
    param_1[4] = uVar2;
  }
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_1 + 0x24);
  return param_1;
}



// FUNCTION 1433b3750 FUN_1433b3750 body=237 status=ok
// SIG undefined FUN_1433b3750(void)

void FUN_1433b3750(RefCountNTSImplCore *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_145b05b70;
  if (*(longlong *)(param_1 + 0x3f8) != 0) {
    lVar1 = 0;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x3f8) + 8) + 1;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x3f8) + 0x10 + lVar1) != -2) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x3f8) + 0x10 + lVar1) = 0xfffffffffffffffe;
      }
      lVar1 = lVar1 + 0x30;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x3f8));
    *(undefined8 *)(param_1 + 0x3f8) = 0;
  }
  Scaleform::Render::LinearHeap::ClearAndRelease(param_1 + 0x130);
  *(undefined ***)(param_1 + 0x128) = &PTR_FUN_145af86a8;
  Scaleform::ArrayPagedBase<unsigned_int,6,64,Scaleform::AllocatorPagedLH_POD<unsigned_int,2>_>::
  ClearAndRelease(param_1 + 0x100);
  Scaleform::ArrayPagedBase<unsigned_int,6,64,Scaleform::AllocatorPagedLH_POD<unsigned_int,2>_>::
  ClearAndRelease(param_1 + 0xd8);
  Scaleform::ArrayPagedBase<unsigned_int,6,64,Scaleform::AllocatorPagedLH_POD<unsigned_int,2>_>::
  ClearAndRelease(param_1 + 0xb0);
  Scaleform::ArrayPagedBase<unsigned_int,6,64,Scaleform::AllocatorPagedLH_POD<unsigned_int,2>_>::
  ClearAndRelease(param_1 + 0x88);
  Scaleform::ArrayPagedBase<unsigned_int,6,64,Scaleform::AllocatorPagedLH_POD<unsigned_int,2>_>::
  ClearAndRelease(param_1 + 0x60);
  if (*(RefCountImpl **)(param_1 + 0x38) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x38));
  }
  if (*(RefCountImpl **)(param_1 + 0x30) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x30));
  }
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(param_1);
  return;
}



// FUNCTION 1433b3850 FUN_1433b3850 body=518 status=ok
// SIG undefined FUN_1433b3850(void)

void FUN_1433b3850(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong local_38 [4];
  
  uVar7 = 0;
  uVar5 = uVar7;
  uVar8 = uVar7;
  if (param_2[1] != 0) {
    do {
      lVar6 = uVar5 * 8;
      lVar4 = (**(code **)(**(longlong **)(*(longlong *)(lVar6 + *param_2) + 0x18) + 0x58))();
      if ((lVar4 == 0) &&
         ((iVar2 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x2c), iVar2 == 0 ||
          (iVar1 = (**(code **)(**(longlong **)(*(longlong *)(lVar6 + *param_2) + 0x18) + 0x90))(),
          iVar1 <= iVar2)))) {
        iVar2 = (**(code **)(**(longlong **)(*(longlong *)(lVar6 + *param_2) + 0x18) + 0x90))();
        uVar8 = (ulonglong)(uint)((int)uVar8 + iVar2);
      }
      uVar5 = (ulonglong)((int)uVar5 + 1);
    } while (uVar5 < (ulonglong)param_2[1]);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  if (uVar8 != 0) {
    FUN_14330c500(local_38,local_38);
  }
  lVar6 = local_38[0];
  if (*(longlong *)(param_1 + 0x3f8) != 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x3f8) + 8) + 1;
    uVar5 = uVar7;
    do {
      if (*(longlong *)(uVar5 + 0x10 + *(longlong *)(param_1 + 0x3f8)) != -2) {
        *(undefined8 *)(uVar5 + 0x10 + *(longlong *)(param_1 + 0x3f8)) = 0xfffffffffffffffe;
      }
      uVar5 = uVar5 + 0x30;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x3f8));
    *(undefined8 *)(param_1 + 0x3f8) = 0;
  }
  if (param_2[1] != 0) {
    do {
      lVar6 = uVar7 * 8;
      lVar4 = (**(code **)(**(longlong **)(*(longlong *)(lVar6 + *param_2) + 0x18) + 0x58))();
      if ((lVar4 == 0) &&
         ((iVar2 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x2c), iVar2 == 0 ||
          (iVar1 = (**(code **)(**(longlong **)(*(longlong *)(lVar6 + *param_2) + 0x18) + 0x90))(),
          iVar1 <= iVar2)))) {
        FUN_1433b3a60(param_1,local_38,*(undefined8 *)(lVar6 + *param_2));
      }
      uVar7 = (ulonglong)((int)uVar7 + 1);
      lVar6 = local_38[0];
    } while (uVar7 < (ulonglong)param_2[1]);
  }
  uVar3 = FUN_1433b40b0(param_1,local_38);
  FUN_1433b47e0(param_1,local_38,uVar3);
  if (lVar6 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001433b3a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar6);
  return;
}



// FUNCTION 1433b3a60 FUN_1433b3a60 body=938 status=ok
// SIG undefined FUN_1433b3a60(void)

void FUN_1433b3a60(longlong param_1,longlong param_2,ulonglong param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  RefCountNTSImpl *this;
  longlong *plVar8;
  undefined4 *puVar9;
  uint uVar10;
  RefCountNTSImpl *pRVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 local_res18 [2];
  undefined8 local_108;
  undefined8 uStack_100;
  uint local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 local_c4;
  float local_bc;
  undefined8 local_b8;
  int local_a8;
  int local_a4;
  undefined8 *local_98;
  undefined4 *local_90;
  undefined1 local_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  iVar4 = (**(code **)(**(longlong **)(param_3 + 0x18) + 0x90))();
  if (iVar4 != 0) {
    lVar7 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x50))
                      (*(longlong **)(param_1 + 0x40),0x48);
    pRVar11 = (RefCountNTSImpl *)0x0;
    this = pRVar11;
    if (lVar7 != 0) {
      uVar5 = (**(code **)(**(longlong **)(param_3 + 0x18) + 0x90))();
      this = (RefCountNTSImpl *)FUN_1433b51c0(lVar7,uVar5,0);
    }
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(this + 0x18) = uVar1;
    (**(code **)(**(longlong **)(param_3 + 0x18) + 0x60))(*(longlong **)(param_3 + 0x18),this);
    fVar15 = (float)*(int *)(param_1 + 0x18) / 1536.0;
    uVar6 = (**(code **)(**(longlong **)(param_3 + 0x18) + 0x90))();
    if (uVar6 != 0) {
      do {
        lVar7 = FUN_143397d90(this,pRVar11);
        uVar2 = local_108;
        plVar3 = uStack_100;
        if ((*(longlong *)(lVar7 + 0x10) == 0) &&
           (plVar8 = (longlong *)
                     (**(code **)(**(longlong **)(param_3 + 0x18) + 0x70))
                               (*(longlong **)(param_3 + 0x18),pRVar11), uVar2 = local_108,
           plVar3 = uStack_100, plVar8 != (longlong *)0x0)) {
          local_68 = 0x3f800000;
          uStack_60 = 0;
          local_108 = 0x7149f2ca7149f2ca;
          uStack_100 = (longlong *)0xf149f2caf149f2ca;
          local_58 = 0;
          uStack_54 = 0x3f800000;
          uStack_50 = 0;
          uStack_4c = 0;
          local_e8 = (**(code **)(*plVar8 + 0x30))(plVar8);
          uStack_e4 = 0;
          iStack_e0 = 0;
          local_dc = 0;
          local_d4 = 0;
          local_cc = 0;
          local_c4 = 0;
          local_bc = 0.0;
          local_b8 = CONCAT35(local_b8._5_3_,0x3f800000);
          iVar4 = (**(code **)(*plVar8 + 0x40))(plVar8,&local_e8,local_88,&local_a8);
          uVar2 = local_108;
          plVar3 = uStack_100;
          while (local_108 = uVar2, uStack_100 = plVar3, iVar4 != 0) {
            if (local_a8 == local_a4) {
              (**(code **)(*plVar8 + 0x50))(plVar8,&local_e8);
            }
            else {
              FUN_14332fd60(plVar8,&local_68,&local_e8,local_88,&local_108);
            }
            iVar4 = (**(code **)(*plVar8 + 0x40))(plVar8,&local_e8,local_88,&local_a8);
            uVar2 = local_108;
            plVar3 = uStack_100;
          }
          uStack_100._0_4_ = SUB84(plVar3,0);
          local_108._0_4_ = (float)uVar2;
          if (0.0 < (float)uStack_100 - (float)local_108) {
            uStack_100._4_4_ = (float)((ulonglong)plVar3 >> 0x20);
            local_108._4_4_ = (float)(uVar2 >> 0x20);
            if (0.0 < uStack_100._4_4_ - local_108._4_4_) {
              local_bc = (float)*(int *)(param_1 + 0x1c);
              local_b8 = 0;
              fVar13 = (float)uStack_100 * fVar15 + local_bc;
              fVar14 = (float)local_108 * fVar15 - local_bc;
              fVar12 = local_108._4_4_ * fVar15 - local_bc;
              local_bc = uStack_100._4_4_ * fVar15 + local_bc;
              local_cc = CONCAT44(fVar14,(undefined4)local_cc);
              local_c4 = CONCAT44(fVar13,fVar12);
              if ((0.0 < fVar13 - fVar14) && (0.0 < local_bc - fVar12)) {
                local_e8 = (undefined4)param_3;
                uStack_e4 = (undefined4)(param_3 >> 0x20);
                local_dc = 0xffffffffffffffff;
                iStack_e0 = (int)pRVar11;
                local_f8 = FUN_1433b3490(plVar8);
                local_108 = param_3;
                uStack_100 = plVar8;
                if ((*(longlong *)(param_1 + 0x3f8) == 0) ||
                   (lVar7 = FUN_1433b5110(param_1 + 0x3f8,&local_108), lVar7 < 0)) {
                  lVar7 = 0;
                }
                else {
                  lVar7 = *(longlong *)(param_1 + 0x3f8) + 0x20 + lVar7 * 0x30;
                }
                puVar9 = (undefined4 *)(lVar7 + 0x18);
                if (lVar7 == 0) {
                  puVar9 = (undefined4 *)0x0;
                }
                if (puVar9 == (undefined4 *)0x0) {
                  local_res18[0] = *(undefined4 *)(param_2 + 8);
                  local_98 = &local_108;
                  local_90 = local_res18;
                  FUN_1433b4f40(param_1 + 0x3f8,param_1 + 0x3f8,&local_98,
                                local_108 >> 6 ^ (ulonglong)local_f8 ^ local_108);
                }
                else {
                  local_dc = CONCAT44(local_dc._4_4_,*puVar9);
                }
                FUN_1433b5400(param_2,&local_e8);
                uVar2 = local_108;
                plVar3 = uStack_100;
              }
            }
          }
        }
        uStack_100 = plVar3;
        local_108 = uVar2;
        uVar10 = (int)pRVar11 + 1;
        pRVar11 = (RefCountNTSImpl *)(ulonglong)uVar10;
      } while (uVar10 < uVar6);
    }
    Scaleform::RefCountNTSImpl::Release(this);
  }
  return;
}



// FUNCTION 1433b3e10 FUN_1433b3e10 body=658 status=ok
// SIG undefined FUN_1433b3e10(void)

int FUN_1433b3e10(longlong param_1,longlong *param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 local_res18;
  ulonglong uVar8;
  
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  if (param_3 < param_4) {
    lVar6 = (ulonglong)param_3 << 6;
    do {
      lVar2 = *param_2;
      if (*(int *)(lVar6 + 0xc + lVar2) == -1) {
        fVar9 = _guard_xfg_dispatch_icall_nop(*(float *)(lVar6 + 0x2c + lVar2));
        fVar10 = _guard_xfg_dispatch_icall_nop(*(float *)(lVar6 + 0x24 + lVar2));
        fVar11 = _guard_xfg_dispatch_icall_nop(*(float *)(lVar6 + 0x28 + lVar2));
        fVar12 = _guard_xfg_dispatch_icall_nop(*(float *)(lVar6 + 0x20 + lVar2));
        FUN_1433b5290(param_1 + 0x48,(int)(fVar11 - fVar12),(int)(fVar9 - fVar10),param_3);
      }
      param_3 = param_3 + 1;
      lVar6 = lVar6 + 0x40;
    } while (param_3 < param_4);
  }
  FUN_1433f8610(param_1 + 0x48);
  uVar4 = 0;
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    do {
      uVar7 = (uint)uVar4;
      uVar8 = (ulonglong)(uVar7 & 0xf);
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xd0) + (uVar4 >> 4) * 8);
      local_res18 = 0;
      if (*(int *)(lVar6 + 4 + uVar8 * 8) != 0) {
        do {
          uVar3 = *(int *)(lVar6 + uVar8 * 8) + local_res18;
          uVar4 = (ulonglong)(uVar3 & 0xff);
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + (ulonglong)(uVar3 >> 8) * 8);
          lVar5 = (ulonglong)*(uint *)(lVar2 + 8 + uVar4 * 0xc) * 0x40 + *param_2;
          fVar9 = *(float *)(lVar5 + 0x20);
          fVar11 = _guard_xfg_dispatch_icall_nop(*(float *)(lVar5 + 0x28));
          fVar12 = _guard_xfg_dispatch_icall_nop(fVar9);
          fVar10 = *(float *)(lVar5 + 0x24);
          fVar13 = _guard_xfg_dispatch_icall_nop(*(float *)(lVar5 + 0x2c));
          fVar14 = _guard_xfg_dispatch_icall_nop(fVar10);
          *(float *)(lVar5 + 0x30) = (float)*(uint *)(lVar2 + uVar4 * 0xc) - fVar9;
          *(float *)(lVar5 + 0x34) = (float)*(uint *)(lVar2 + 4 + uVar4 * 0xc) - fVar10;
          *(float *)(lVar5 + 0x20) = (float)*(uint *)(lVar2 + uVar4 * 0xc);
          *(float *)(lVar5 + 0x24) = (float)*(uint *)(lVar2 + 4 + uVar4 * 0xc);
          *(float *)(lVar5 + 0x28) =
               (float)(uint)(*(int *)(lVar2 + uVar4 * 0xc) + (int)(longlong)(fVar11 - fVar12));
          iVar1 = *(int *)(lVar2 + 4 + uVar4 * 0xc);
          local_res18 = local_res18 + 1;
          *(uint *)(lVar5 + 0x10) = param_5 + uVar7;
          *(float *)(lVar5 + 0x2c) = (float)(uint)(iVar1 + (int)(longlong)(fVar13 - fVar14));
        } while (local_res18 < *(uint *)(lVar6 + 4 + uVar8 * 8));
      }
      uVar4 = (ulonglong)(uVar7 + 1);
    } while (uVar4 < *(ulonglong *)(param_1 + 0xb8));
  }
  return *(int *)(param_1 + 0xb8) + param_5;
}



// FUNCTION 1433b40b0 FUN_1433b40b0 body=868 status=ok
// SIG undefined FUN_1433b40b0(void)

void FUN_1433b40b0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int local_res8;
  uint local_res18;
  ulonglong local_res20;
  
  iVar7 = 0;
  local_res8 = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x28) == '\0') {
    FUN_1433b3e10(param_1,param_2,0,(int)param_2[1],0);
    return;
  }
  uVar5 = 0;
  local_res20 = 1;
  if (1 < (ulonglong)param_2[1]) {
    do {
      uVar2 = (uint)local_res20;
      if (*(longlong *)((ulonglong)(uVar2 - 1) * 0x40 + *param_2) !=
          *(longlong *)(local_res20 * 0x40 + *param_2)) {
        *(undefined8 *)(param_1 + 0x68) = 0;
        *(undefined8 *)(param_1 + 0x90) = 0;
        *(undefined8 *)(param_1 + 0xb8) = 0;
        *(undefined8 *)(param_1 + 0xe0) = 0;
        *(undefined8 *)(param_1 + 0x108) = 0;
        if (uVar5 < uVar2) {
          lVar8 = (ulonglong)uVar5 << 6;
          do {
            lVar1 = *param_2;
            if (*(int *)(lVar8 + 0xc + lVar1) == -1) {
              fVar10 = _guard_xfg_dispatch_icall_nop(*(float *)(lVar8 + 0x2c + lVar1));
              fVar11 = _guard_xfg_dispatch_icall_nop(*(float *)(lVar8 + 0x24 + lVar1));
              fVar12 = _guard_xfg_dispatch_icall_nop(*(float *)(lVar8 + 0x28 + lVar1));
              fVar13 = _guard_xfg_dispatch_icall_nop(*(float *)(lVar8 + 0x20 + lVar1));
              FUN_1433b5290(param_1 + 0x48,(int)(fVar12 - fVar13),(int)(fVar10 - fVar11),uVar5);
            }
            uVar5 = uVar5 + 1;
            lVar8 = lVar8 + 0x40;
            iVar7 = local_res8;
          } while (uVar5 < uVar2);
        }
        FUN_1433f8610(param_1 + 0x48);
        uVar4 = 0;
        if (*(longlong *)(param_1 + 0xb8) != 0) {
          do {
            uVar5 = (uint)uVar4;
            uVar9 = (ulonglong)(uVar5 & 0xf);
            lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xd0) + (uVar4 >> 4) * 8);
            local_res18 = 0;
            if (*(int *)(lVar8 + 4 + uVar9 * 8) != 0) {
              do {
                uVar3 = *(int *)(lVar8 + uVar9 * 8) + local_res18;
                uVar4 = (ulonglong)(uVar3 & 0xff);
                lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + (ulonglong)(uVar3 >> 8) * 8);
                lVar6 = (ulonglong)*(uint *)(lVar1 + 8 + uVar4 * 0xc) * 0x40 + *param_2;
                fVar10 = *(float *)(lVar6 + 0x20);
                fVar12 = _guard_xfg_dispatch_icall_nop(*(float *)(lVar6 + 0x28));
                fVar13 = _guard_xfg_dispatch_icall_nop(fVar10);
                fVar11 = *(float *)(lVar6 + 0x24);
                fVar14 = _guard_xfg_dispatch_icall_nop(*(float *)(lVar6 + 0x2c));
                fVar15 = _guard_xfg_dispatch_icall_nop(fVar11);
                *(float *)(lVar6 + 0x30) = (float)*(uint *)(lVar1 + uVar4 * 0xc) - fVar10;
                *(float *)(lVar6 + 0x34) = (float)*(uint *)(lVar1 + 4 + uVar4 * 0xc) - fVar11;
                *(float *)(lVar6 + 0x20) = (float)*(uint *)(lVar1 + uVar4 * 0xc);
                *(float *)(lVar6 + 0x24) = (float)*(uint *)(lVar1 + 4 + uVar4 * 0xc);
                *(float *)(lVar6 + 0x28) =
                     (float)(uint)(*(int *)(lVar1 + uVar4 * 0xc) + (int)(longlong)(fVar12 - fVar13))
                ;
                iVar7 = *(int *)(lVar1 + 4 + uVar4 * 0xc);
                local_res18 = local_res18 + 1;
                *(uint *)(lVar6 + 0x10) = uVar5 + local_res8;
                *(float *)(lVar6 + 0x2c) = (float)(uint)(iVar7 + (int)(longlong)(fVar14 - fVar15));
                iVar7 = local_res8;
              } while (local_res18 < *(uint *)(lVar8 + 4 + uVar9 * 8));
            }
            uVar4 = (ulonglong)(uVar5 + 1);
          } while (uVar4 < *(ulonglong *)(param_1 + 0xb8));
        }
        iVar7 = iVar7 + *(int *)(param_1 + 0xb8);
        uVar5 = uVar2;
        local_res8 = iVar7;
      }
      local_res20 = (ulonglong)(uVar2 + 1);
    } while (local_res20 < (ulonglong)param_2[1]);
  }
  FUN_1433b3e10(param_1,param_2,uVar5,(int)param_2[1],iVar7);
  return;
}



// FUNCTION 1433b4420 FUN_1433b4420 body=943 status=ok
// SIG undefined FUN_1433b4420(void)

void FUN_1433b4420(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  int local_120;
  int local_11c;
  undefined4 local_110;
  undefined8 local_10c;
  undefined8 local_104;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined1 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 *local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  
  plVar6 = (longlong *)
           (**(code **)(**(longlong **)(*param_3 + 0x18) + 0x70))
                     (*(longlong **)(*param_3 + 0x18),(int)param_3[1]);
  if ((plVar6 != (longlong *)0x0) && (cVar4 = (**(code **)(*plVar6 + 8))(plVar6), cVar4 == '\0')) {
    local_50 = 0xc;
    local_98 = 0x3f8000003727c5ac;
    uStack_90 = 0x3a83126f3f800000;
    fVar10 = (float)*(int *)(param_1 + 0x18) / 1536.0;
    local_88 = 0x3fb504813f350481;
    uStack_80 = 0x400000003f000000;
    local_78 = 0x3f8147ae3f7d70a4;
    uStack_70 = 0x3f8020c53f7fbe77;
    local_68 = 0x3f80a3d73f7eb852;
    uStack_60 = 0x38d1b7173f733333;
    local_58 = 0x3a83126f;
    local_54 = 0x3d4ccccd;
    local_110 = (**(code **)(*plVar6 + 0x30))(plVar6);
    plVar1 = (longlong *)(param_1 + 0x128);
    local_e0 = 0x3f800000;
    bVar2 = true;
    local_10c = 0;
    local_104 = 0;
    local_fc = 0;
    local_f4 = 0;
    local_ec = 0;
    local_e4 = 0;
    local_dc = 0;
    (**(code **)(*plVar1 + 8))(plVar1);
    iVar5 = (**(code **)(*plVar6 + 0x40))(plVar6,&local_110,&local_138,&local_120);
    while ((iVar5 != 0 && ((bVar2 || (iVar5 != 2))))) {
      bVar2 = false;
      if (local_120 == local_11c) {
        (**(code **)(*plVar6 + 0x50))(plVar6,&local_110);
      }
      else {
        local_138 = local_138 * fVar10;
        fStack_134 = fStack_134 * fVar10;
        Scaleform::Render::Rasterizer::MoveTo(plVar1);
        iVar5 = (**(code **)(*plVar6 + 0x48))(plVar6,&local_110,&local_138);
        while (iVar5 != 0) {
          if (iVar5 == 1) {
            local_138 = local_138 * fVar10;
            fStack_134 = fStack_134 * fVar10;
            FUN_1433caad0();
          }
          else {
            local_138 = local_138 * fVar10;
            fStack_134 = fStack_134 * fVar10;
            fStack_130 = fStack_130 * fVar10;
            fStack_12c = fStack_12c * fVar10;
            FUN_1433bd900(plVar1,&local_98,local_138,fStack_134,fStack_130,fStack_12c);
          }
          iVar5 = (**(code **)(*plVar6 + 0x48))(plVar6,&local_110,&local_138);
        }
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
      iVar5 = (**(code **)(*plVar6 + 0x40))(plVar6,&local_110,&local_138,&local_120);
    }
    cVar4 = FUN_1433cabc0(plVar1);
    if (cVar4 != '\0') {
      local_c8 = &local_b8;
      local_d8 = 0;
      local_d0 = 0x10000;
      local_c0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_a0 = 0;
      Scaleform::Render::RawImage::GetImageData(param_2,&local_d8);
      iVar8 = *(int *)(param_1 + 0x3dc) - *(int *)(param_1 + 0x3d4);
      iVar5 = *(int *)(param_1 + 0x1c);
      fVar10 = _guard_xfg_dispatch_icall_nop(*(float *)(param_3 + 4));
      fVar9 = _guard_xfg_dispatch_icall_nop(*(float *)((longlong)param_3 + 0x24));
      uVar7 = 0;
      if (iVar8 != -1) {
        do {
          FUN_1433cae10(plVar1,uVar7,
                        (ulonglong)(uVar7 + (int)fVar9 + iVar5) * local_c8[1] + local_c8[3] +
                        (longlong)((int)fVar10 + iVar5),1,0);
          uVar7 = uVar7 + 1;
        } while (uVar7 < iVar8 + 1U);
      }
      Scaleform::Render::ImageData::freePlanes(&local_d8);
      lVar3 = local_c0;
      if ((local_c0 != 0) &&
         (iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(local_c0,0xffffffff),
         iVar5 == 1)) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar3);
      }
    }
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  return;
}



// FUNCTION 1433b47e0 FUN_1433b47e0 body=1340 status=ok
// SIG undefined FUN_1433b47e0(void)

void FUN_1433b47e0(longlong param_1,longlong *param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int local_res20 [2];
  longlong local_1a8;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  uint local_194;
  undefined **local_188;
  undefined8 local_180;
  longlong *local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  float local_158;
  float local_154;
  undefined4 local_150;
  longlong local_148;
  undefined4 local_140;
  uint local_13c;
  uint local_138;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 *local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  
  if (param_3 != 0) {
    uVar13 = 0;
    do {
      uVar12 = param_2[1];
      uVar10 = 0;
      uVar14 = 0;
      uVar11 = 0;
      if (uVar12 != 0) {
        uVar8 = 0;
        do {
          lVar9 = uVar8 * 0x40 + *param_2;
          if (*(uint *)(lVar9 + 0x10) == uVar13) {
            fVar15 = _guard_xfg_dispatch_icall_nop(*(float *)(lVar9 + 0x28));
            if ((int)uVar10 < (int)fVar15) {
              uVar10 = (int)fVar15;
            }
            fVar15 = _guard_xfg_dispatch_icall_nop(*(float *)(lVar9 + 0x2c));
            if ((int)uVar14 < (int)fVar15) {
              uVar14 = (int)fVar15;
            }
          }
          uVar11 = uVar11 + 1;
          uVar8 = (ulonglong)uVar11;
        } while (uVar8 < uVar12);
      }
      uVar7 = 1;
      uVar11 = *(uint *)(param_1 + 0x20);
      if ((uVar10 <= *(uint *)(param_1 + 0x20) >> 1) && (uVar11 = uVar7, 1 < uVar10)) {
        do {
          uVar11 = uVar11 * 2;
        } while (uVar11 < uVar10);
      }
      uVar10 = *(uint *)(param_1 + 0x24);
      if ((uVar14 <= *(uint *)(param_1 + 0x24) >> 1) && (uVar10 = uVar7, 1 < uVar14)) {
        do {
          uVar10 = uVar10 * 2;
        } while (uVar10 < uVar14);
      }
      uVar8 = 0;
      local_1a0 = uVar11;
      local_19c = uVar10;
      plVar3 = (longlong *)FUN_1432cb620(9,1,&local_1a0,2,*(undefined8 *)(param_1 + 0x40),0);
      local_108 = 0;
      local_f8 = &local_e8;
      local_100 = 0x10000;
      local_f0 = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_d8 = 0;
      local_d0 = 0;
      Scaleform::Render::RawImage::GetImageData(plVar3);
      _guard_xfg_dispatch_icall_nop((void *)local_f8[3],0,(ulonglong)(uVar10 * uVar11));
      uVar12 = uVar8;
      if (param_2[1] != 0) {
        do {
          lVar9 = uVar12 * 0x40 + *param_2;
          if (*(uint *)(lVar9 + 0x10) == uVar13) {
            FUN_1433b4420(param_1,plVar3,lVar9);
          }
          uVar12 = (ulonglong)((int)uVar12 + 1);
        } while (uVar12 < (ulonglong)param_2[1]);
      }
      (**(code **)(*plVar3 + 0x28))(plVar3,&local_198);
      iVar2 = **(int **)(param_1 + 0x28);
      fVar15 = 1.0 / (float)local_198;
      **(int **)(param_1 + 0x28) = iVar2 + 1;
      fVar22 = 1.0 / (float)local_194;
      lVar9 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x50))
                        (*(longlong **)(param_1 + 0x40),0x68);
      if (lVar9 == 0) {
        local_1a8 = 0;
      }
      else {
        local_1a8 = FUN_1432ef310(lVar9,plVar3,3);
      }
      if (param_2[1] != 0) {
        do {
          plVar4 = (longlong *)(uVar8 * 0x40 + *param_2);
          local_13c = *(uint *)((longlong)plVar4 + 0xc);
          lVar9 = *plVar4;
          fVar16 = *(float *)(plVar4 + 4);
          fVar17 = *(float *)((longlong)plVar4 + 0x24);
          fVar18 = *(float *)(plVar4 + 5);
          fVar19 = *(float *)((longlong)plVar4 + 0x2c);
          fVar20 = *(float *)(plVar4 + 6);
          fVar21 = *(float *)((longlong)plVar4 + 0x34);
          uVar1 = (undefined4)plVar4[1];
          local_138 = *(uint *)(plVar4 + 2);
          if (local_13c != 0xffffffff) {
            lVar5 = (ulonglong)local_13c * 0x40 + *param_2;
            fVar16 = *(float *)(lVar5 + 0x20);
            fVar17 = *(float *)(lVar5 + 0x24);
            fVar18 = *(float *)(lVar5 + 0x28);
            fVar19 = *(float *)(lVar5 + 0x2c);
            fVar20 = *(float *)(lVar5 + 0x30);
            fVar21 = *(float *)(lVar5 + 0x34);
            local_138 = *(uint *)(lVar5 + 0x10);
          }
          local_148 = lVar9;
          local_140 = uVar1;
          local_128 = fVar16;
          local_124 = fVar17;
          local_120 = fVar18;
          local_11c = fVar19;
          local_118 = fVar20;
          local_114 = fVar21;
          if (local_138 == uVar13) {
            local_178 = (longlong *)0x0;
            local_168 = 0;
            uStack_160 = 0;
            local_150 = 0xffffffff;
            local_180 = 1;
            local_188 = &PTR_FUN_145afa260;
            (**(code **)(*plVar3 + 8))(plVar3);
            if (local_178 != (longlong *)0x0) {
              (**(code **)(*local_178 + 0x10))();
            }
            local_150 = 0xffffffff;
            local_168 = CONCAT44(fVar17 * fVar22,fVar16 * fVar15);
            local_158 = fVar20 * fVar15;
            uStack_160 = CONCAT44(fVar19 * fVar22,fVar18 * fVar15);
            local_154 = fVar21 * fVar22;
            local_178 = plVar3;
            uVar6 = (**(code **)(**(longlong **)(lVar9 + 0x18) + 0x58))();
            Scaleform::GFx::TextureGlyphData::AddTextureGlyph(uVar6,uVar1,&local_188);
            local_res20[0] = iVar2;
            FUN_143397fc0(uVar6,local_res20,local_1a8);
            if (local_178 != (longlong *)0x0) {
              (**(code **)(*local_178 + 0x10))();
            }
            Scaleform::RefCountImplCore::~RefCountImplCore((RefCountImplCore *)&local_188);
          }
          uVar8 = (ulonglong)((int)uVar8 + 1);
        } while (uVar8 < (ulonglong)param_2[1]);
      }
      if (local_1a8 != 0) {
        FUN_1432de450(local_1a8);
      }
      Scaleform::Render::ImageData::freePlanes(&local_108);
      lVar9 = local_f0;
      if ((local_f0 != 0) &&
         (iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(local_f0,0xffffffff),
         iVar2 == 1)) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar9);
      }
      (**(code **)(*plVar3 + 0x10))(plVar3);
      uVar13 = uVar13 + 1;
    } while (uVar13 < param_3);
  }
  return;
}



// FUNCTION 1433b4d30 FUN_1433b4d30 body=173 status=ok
// SIG undefined FUN_1433b4d30(void)

void FUN_1433b4d30(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  longlong lVar1;
  RefCountNTSImpl *this;
  
  if ((param_1 != 0) && (param_3 != 0)) {
    lVar1 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x408,0);
    if (lVar1 == 0) {
      this = (RefCountNTSImpl *)0x0;
    }
    else {
      this = (RefCountNTSImpl *)FUN_1433b3660(lVar1,param_1,param_3,param_4,param_5,param_6,param_7)
      ;
    }
    FUN_1433b3850(this,param_2);
    if (this != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this);
    }
  }
  return;
}



// FUNCTION 1433b4de0 FUN_1433b4de0 body=350 status=ok
// SIG undefined FUN_1433b4de0(void)

void FUN_1433b4de0(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  FUN_1433b5350();
  plVar1 = (longlong *)*param_1;
  *plVar1 = *plVar1 + 1;
  param_4 = param_4 & plVar1[1];
  lVar2 = *param_1;
  lVar9 = param_4 * 0x30 + lVar2;
  lVar3 = *(longlong *)(lVar9 + 0x10);
  uVar6 = param_4;
  if (lVar3 == -2) {
    *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar9 + 0x18) = 0;
    uVar5 = param_3[1];
    *(undefined8 *)(lVar9 + 0x20) = *param_3;
    *(undefined8 *)(lVar9 + 0x28) = uVar5;
    *(undefined8 *)(lVar9 + 0x30) = param_3[2];
    *(undefined4 *)(lVar9 + 0x38) = *(undefined4 *)(param_3 + 3);
  }
  else {
    do {
      uVar6 = uVar6 + 1 & plVar1[1];
      lVar8 = uVar6 * 0x30 + lVar2;
    } while (*(longlong *)(lVar8 + 0x10) != -2);
    if (*(ulonglong *)(lVar9 + 0x18) == param_4) {
      *(longlong *)(lVar8 + 0x10) = lVar3;
      *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(lVar9 + 0x18);
      uVar5 = *(undefined8 *)(lVar9 + 0x28);
      *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)(lVar9 + 0x20);
      *(undefined8 *)(lVar8 + 0x28) = uVar5;
      *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)(lVar9 + 0x30);
      *(undefined4 *)(lVar8 + 0x38) = *(undefined4 *)(lVar9 + 0x38);
      uVar5 = param_3[1];
      *(undefined8 *)(lVar9 + 0x20) = *param_3;
      *(undefined8 *)(lVar9 + 0x28) = uVar5;
      uVar10 = *(undefined4 *)(param_3 + 2);
      uVar11 = *(undefined4 *)((longlong)param_3 + 0x14);
      uVar12 = *(undefined4 *)(param_3 + 3);
      uVar13 = *(undefined4 *)((longlong)param_3 + 0x1c);
      *(ulonglong *)(lVar9 + 0x10) = uVar6;
    }
    else {
      puVar7 = (ulonglong *)(lVar2 + 0x10 + *(ulonglong *)(lVar9 + 0x18) * 0x30);
      uVar4 = *puVar7;
      while (uVar4 != param_4) {
        puVar7 = (ulonglong *)(lVar2 + 0x10 + *puVar7 * 0x30);
        uVar4 = *puVar7;
      }
      *(longlong *)(lVar8 + 0x10) = lVar3;
      *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(lVar9 + 0x18);
      uVar5 = *(undefined8 *)(lVar9 + 0x28);
      *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)(lVar9 + 0x20);
      *(undefined8 *)(lVar8 + 0x28) = uVar5;
      *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)(lVar9 + 0x30);
      *(undefined4 *)(lVar8 + 0x38) = *(undefined4 *)(lVar9 + 0x38);
      *puVar7 = uVar6;
      uVar5 = param_3[1];
      *(undefined8 *)(lVar9 + 0x20) = *param_3;
      *(undefined8 *)(lVar9 + 0x28) = uVar5;
      uVar10 = *(undefined4 *)(param_3 + 2);
      uVar11 = *(undefined4 *)((longlong)param_3 + 0x14);
      uVar12 = *(undefined4 *)(param_3 + 3);
      uVar13 = *(undefined4 *)((longlong)param_3 + 0x1c);
      *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    }
    *(undefined4 *)(lVar9 + 0x30) = uVar10;
    *(undefined4 *)(lVar9 + 0x34) = uVar11;
    *(undefined4 *)(lVar9 + 0x38) = uVar12;
    *(undefined4 *)(lVar9 + 0x3c) = uVar13;
  }
  *(ulonglong *)(lVar9 + 0x18) = param_4;
  return;
}



// FUNCTION 1433b4f40 FUN_1433b4f40 body=452 status=ok
// SIG undefined FUN_1433b4f40(void)

longlong FUN_1433b4f40(longlong *param_1,undefined8 param_2,longlong *param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    lVar8 = 8;
  }
  else {
    if ((ulonglong)(*plVar1 * 5) <= plVar1[1] * 4 + 4U) goto LAB_1433b4f94;
    lVar8 = plVar1[1] * 2 + 2;
  }
  FUN_1433b5600(param_1,param_2,lVar8);
LAB_1433b4f94:
  plVar1 = (longlong *)*param_1;
  *plVar1 = *plVar1 + 1;
  param_4 = param_4 & plVar1[1];
  lVar8 = *param_1;
  lVar10 = param_4 * 0x30 + lVar8;
  lVar2 = *(longlong *)(lVar10 + 0x10);
  uVar6 = param_4;
  if (lVar2 == -2) {
    *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    puVar3 = (undefined8 *)*param_3;
    uVar5 = puVar3[1];
    *(undefined8 *)(lVar10 + 0x20) = *puVar3;
    *(undefined8 *)(lVar10 + 0x28) = uVar5;
    *(undefined8 *)(lVar10 + 0x30) = puVar3[2];
    *(undefined4 *)(lVar10 + 0x38) = *(undefined4 *)param_3[1];
  }
  else {
    do {
      uVar6 = uVar6 + 1 & plVar1[1];
      lVar9 = uVar6 * 0x30 + lVar8;
    } while (*(longlong *)(lVar9 + 0x10) != -2);
    if (*(ulonglong *)(lVar10 + 0x18) == param_4) {
      *(longlong *)(lVar9 + 0x10) = lVar2;
      *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
      uVar5 = *(undefined8 *)(lVar10 + 0x28);
      *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar10 + 0x20);
      *(undefined8 *)(lVar9 + 0x28) = uVar5;
      *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)(lVar10 + 0x30);
      *(undefined4 *)(lVar9 + 0x38) = *(undefined4 *)(lVar10 + 0x38);
      puVar3 = (undefined8 *)*param_3;
      uVar5 = puVar3[1];
      *(undefined8 *)(lVar10 + 0x20) = *puVar3;
      *(undefined8 *)(lVar10 + 0x28) = uVar5;
      *(undefined8 *)(lVar10 + 0x30) = puVar3[2];
      *(undefined4 *)(lVar10 + 0x38) = *(undefined4 *)param_3[1];
      *(ulonglong *)(lVar10 + 0x10) = uVar6;
    }
    else {
      puVar7 = (ulonglong *)(lVar8 + 0x10 + *(ulonglong *)(lVar10 + 0x18) * 0x30);
      uVar4 = *puVar7;
      while (uVar4 != param_4) {
        puVar7 = (ulonglong *)(*puVar7 * 0x30 + 0x10 + lVar8);
        uVar4 = *puVar7;
      }
      *(longlong *)(lVar9 + 0x10) = lVar2;
      *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
      uVar5 = *(undefined8 *)(lVar10 + 0x28);
      *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar10 + 0x20);
      *(undefined8 *)(lVar9 + 0x28) = uVar5;
      *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)(lVar10 + 0x30);
      *(undefined4 *)(lVar9 + 0x38) = *(undefined4 *)(lVar10 + 0x38);
      *puVar7 = uVar6;
      puVar3 = (undefined8 *)*param_3;
      uVar5 = puVar3[1];
      *(undefined8 *)(lVar10 + 0x20) = *puVar3;
      *(undefined8 *)(lVar10 + 0x28) = uVar5;
      *(undefined8 *)(lVar10 + 0x30) = puVar3[2];
      *(undefined4 *)(lVar10 + 0x38) = *(undefined4 *)param_3[1];
      *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar10 + 0x18) = param_4;
  return lVar10 + 0x20;
}



// FUNCTION 1433b5110 FUN_1433b5110 body=165 status=ok
// SIG undefined FUN_1433b5110(void)

longlong FUN_1433b5110(longlong *param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)(*param_1 + 0x10 + param_3 * 0x30);
  if ((*plVar2 != -2) && (lVar3 = param_3, plVar2[1] == param_3)) {
    while( true ) {
      if ((plVar2[1] == param_3) &&
         ((plVar2[2] == *param_2 && (cVar1 = FUN_1433b32b0(plVar2[3],param_2[1]), cVar1 != '\0'))))
      {
        return lVar3;
      }
      lVar3 = *plVar2;
      if (lVar3 == -1) break;
      plVar2 = (longlong *)(*param_1 + 0x10 + lVar3 * 0x30);
    }
  }
  return -1;
}



// FUNCTION 1433b51c0 FUN_1433b51c0 body=101 status=ok
// SIG undefined FUN_1433b51c0(void)

undefined8 * FUN_1433b51c0(undefined8 *param_1,undefined4 param_2,undefined1 param_3)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145afa268;
  *(undefined4 *)(param_1 + 2) = 0x30;
  *(undefined4 *)((longlong)param_1 + 0x14) = 3;
  *(undefined4 *)(param_1 + 3) = 0x400;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x400;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = param_3;
  FUN_143302e40(param_1 + 4,param_2);
  return param_1;
}



// FUNCTION 1433b5230 FUN_1433b5230 body=89 status=ok
// SIG undefined FUN_1433b5230(void)

undefined8 FUN_1433b5230(undefined8 param_1,ulonglong param_2)

{
  FUN_1433b3750();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x408);
  }
  return param_1;
}



// FUNCTION 1433b5290 FUN_1433b5290 body=177 status=ok
// SIG undefined FUN_1433b5290(void)

void FUN_1433b5290(uint *param_1,uint param_2,uint param_3,undefined4 param_4)

{
  longlong lVar1;
  uint uVar2;
  uint *puVar3;
  ulonglong uVar4;
  
  if ((((param_2 == 0) || (param_3 == 0)) || (*param_1 < param_2)) || (param_1[1] < param_3)) {
    puVar3 = param_1 + 0x2e;
    uVar4 = *(ulonglong *)(param_1 + 0x30) >> 6;
    if (*(ulonglong *)(param_1 + 0x32) <= uVar4) {
      FUN_1433b54c0(puVar3,uVar4);
    }
    *(undefined4 *)
     (*(longlong *)(*(longlong *)(param_1 + 0x36) + uVar4 * 8) +
     (ulonglong)(param_1[0x30] & 0x3f) * 4) = param_4;
  }
  else {
    puVar3 = param_1 + 6;
    uVar4 = *(ulonglong *)(param_1 + 8) >> 8;
    if (*(ulonglong *)(param_1 + 10) <= uVar4) {
      FUN_1433b5560(puVar3,uVar4);
    }
    uVar2 = param_1[8];
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xe) + uVar4 * 8);
    *(ulonglong *)(lVar1 + (ulonglong)(byte)uVar2 * 0xc) = CONCAT44(param_3,param_2);
    *(undefined4 *)(lVar1 + 8 + (ulonglong)(byte)uVar2 * 0xc) = param_4;
  }
  *(longlong *)(puVar3 + 2) = *(longlong *)(puVar3 + 2) + 1;
  return;
}



// FUNCTION 1433b5350 FUN_1433b5350 body=67 status=ok
// SIG undefined FUN_1433b5350(void)

void FUN_1433b5350(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_1433b5600(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_1433b5600(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 1433b53a0 FUN_1433b53a0 body=91 status=ok
// SIG undefined FUN_1433b53a0(void)

void FUN_1433b53a0(longlong *param_1)

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
      lVar1 = lVar1 + 0x30;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 1433b5400 FUN_1433b5400 body=187 status=ok
// SIG undefined FUN_1433b5400(void)

void FUN_1433b5400(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = param_1[1] + 1;
  if (uVar5 < (ulonglong)param_1[1]) {
    uVar6 = uVar5;
    if ((ulonglong)param_1[2] >> 1 <= uVar5) goto LAB_1433b544b;
  }
  else {
    if (uVar5 <= (ulonglong)param_1[2]) goto LAB_1433b544b;
    uVar6 = (uVar5 >> 2) + uVar5;
  }
  FUN_14330c500(param_1,param_1,uVar6);
LAB_1433b544b:
  param_1[1] = uVar5;
  puVar4 = (undefined8 *)(*param_1 + -0x40 + uVar5 * 0x40);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = *param_2;
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((longlong)puVar4 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_2 + 2);
    uVar3 = *(undefined4 *)(param_2 + 4);
    uVar1 = *(undefined4 *)((longlong)param_2 + 0x2c);
    uVar2 = *(undefined4 *)(param_2 + 5);
    *(undefined4 *)((longlong)puVar4 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
    *(undefined4 *)(puVar4 + 5) = uVar2;
    *(undefined4 *)((longlong)puVar4 + 0x2c) = uVar1;
    *(undefined4 *)(puVar4 + 4) = uVar3;
    uVar1 = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)puVar4 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    *(undefined4 *)(puVar4 + 6) = uVar1;
  }
  return;
}



// FUNCTION 1433b54c0 FUN_1433b54c0 body=152 status=ok
// SIG undefined FUN_1433b54c0(void)

void FUN_1433b54c0(longlong param_1,ulonglong param_2)

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
  uVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x100,local_res8);
  *(undefined8 *)(*(longlong *)(param_1 + 0x20) + param_2 * 8) = uVar1;
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
  return;
}



// FUNCTION 1433b5560 FUN_1433b5560 body=152 status=ok
// SIG undefined FUN_1433b5560(void)

void FUN_1433b5560(longlong param_1,ulonglong param_2)

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
  uVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0xc00,local_res8);
  *(undefined8 *)(*(longlong *)(param_1 + 0x20) + param_2 * 8) = uVar1;
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
  return;
}



// FUNCTION 1433b5600 FUN_1433b5600 body=309 status=ok
// SIG undefined FUN_1433b5600(void)

void FUN_1433b5600(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong *puVar5;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_1433b53a0();
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
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,lVar4 * 0x30 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar4 + -1;
  lVar1 = lVar3;
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined8 *)(lVar1 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar1 = lVar1 + 0x30;
  }
  if (*param_1 != 0) {
    lVar4 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar1 = *param_1;
      if (*(longlong *)(lVar1 + 0x10 + lVar3) != -2) {
        puVar5 = (ulonglong *)(lVar1 + 0x20 + lVar3);
        FUN_1433b4de0(&local_res20,param_2,puVar5,
                      (ulonglong)(uint)puVar5[2] ^ *puVar5 >> 6 ^ *puVar5);
        *(undefined8 *)(lVar1 + 0x10 + lVar3) = 0xfffffffffffffffe;
      }
      lVar3 = lVar3 + 0x30;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 1433b5740 FUN_1433b5740 body=165 status=ok
// SIG undefined FUN_1433b5740(void)

undefined8
FUN_1433b5740(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong lVar1;
  RefCountImpl *this;
  longlong *plVar2;
  
  plVar2 = DAT_146b62f28;
  if (param_5 != (longlong *)0x0) {
    plVar2 = param_5;
  }
  lVar1 = (**(code **)(*plVar2 + 0x50))(plVar2,0x30);
  if (lVar1 == 0) {
    this = (RefCountImpl *)0x0;
  }
  else {
    this = (RefCountImpl *)FUN_1433b5920(lVar1,param_2,param_3,param_4,param_5);
  }
  FUN_1432de330(param_1,&PTR_PTR_1467ce5f8,this);
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
  }
  return param_1;
}



// FUNCTION 1433b5820 GetHashCode body=77 status=ok
// SIG undefined GetHashCode(void)

ulonglong Scaleform::GFx::ImageFileKeyInterface::GetHashCode(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(ulonglong *)(param_2 + 0x10);
  uVar2 = *(ulonglong *)(param_2 + 0x18);
  uVar3 = *(ulonglong *)(param_2 + 0x20);
  uVar4 = FUN_1432de2c0(*(undefined8 *)(param_2 + 0x28));
  return uVar4 ^ (uVar3 ^ uVar2 ^ uVar1) >> 7 ^ uVar3 ^ uVar2 ^ uVar1;
}



// FUNCTION 1433b5920 FUN_1433b5920 body=200 status=ok
// SIG undefined FUN_1433b5920(void)

undefined8 *
FUN_1433b5920(undefined8 *param_1,longlong param_2,RefCountImpl *param_3,RefCountImpl *param_4,
             undefined8 param_5)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145b05bf8;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  if ((RefCountNTSImpl *)param_1[5] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[5]);
  }
  param_1[5] = param_2;
  if (param_3 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_3);
  }
  if ((RefCountImpl *)param_1[2] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[2]);
  }
  param_1[2] = param_3;
  if (param_4 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_4);
  }
  if ((RefCountImpl *)param_1[3] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[3]);
  }
  param_1[3] = param_4;
  param_1[4] = param_5;
  return param_1;
}



// FUNCTION 1433b59f0 FUN_1433b59f0 body=134 status=ok
// SIG undefined FUN_1433b59f0(void)

RefCountImplCore * FUN_1433b59f0(RefCountImplCore *param_1,uint param_2)

{
  if (*(RefCountNTSImpl **)(param_1 + 0x28) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x28));
  }
  if (*(RefCountImpl **)(param_1 + 0x18) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x18));
  }
  if (*(RefCountImpl **)(param_1 + 0x10) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x10));
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



// FUNCTION 1433b5a80 FUN_1433b5a80 body=130 status=ok
// SIG undefined FUN_1433b5a80(void)

uint FUN_1433b5a80(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  undefined8 local_28;
  longlong *plStack_20;
  undefined4 local_18;
  
  uVar3 = (**(code **)(*param_1 + 0x10))();
  if (((param_1[1] != 0) && (lVar1 = *(longlong *)(param_1[1] + 0xb8), lVar1 != 0)) &&
     (plVar2 = *(longlong **)(lVar1 + 0x148), plVar2 != (longlong *)0x0)) {
    local_18 = 0;
    local_28 = 0;
    plStack_20 = (longlong *)0x0;
    (**(code **)(*plVar2 + 0x10))(plVar2,&local_28);
    if (plStack_20 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plStack_20 + 0x1f0))(plStack_20,param_1);
      return uVar4 | uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 1433b5b10 FUN_1433b5b10 body=241 status=ok
// SIG undefined FUN_1433b5b10(void)

void FUN_1433b5b10(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 local_18;
  undefined8 local_10;
  
  bVar2 = (**(code **)(*param_1 + 0x18))();
  if ((bVar2 & 5) == 1) {
    FUN_1433b7450();
    local_18 = 0;
    local_10 = 0;
    uVar4 = (**(code **)(*param_1 + 0x28))(param_1,&local_18);
    cVar3 = Scaleform::Render::DrawableImage::isMapped(param_1[1]);
    if (cVar3 == '\0') {
      lVar1 = param_1[1];
      uVar5 = (**(code **)(*param_1 + 0x18))(param_1);
      cVar3 = FUN_14331ed70(lVar1,(byte)(uVar5 >> 5) & 1);
      if (cVar3 == '\0') {
        return;
      }
    }
    FUN_1433b5df0(param_1,param_2,param_1[1],&local_18,uVar4);
  }
  else {
    FUN_1433b7360(*(undefined8 *)(param_1[1] + 0x58));
    lVar1 = param_1[1];
    FUN_14331ee50(lVar1);
    (**(code **)(*param_1 + 0x30))(param_1,param_2);
    bVar2 = (**(code **)(*param_1 + 0x18))(param_1);
    if ((bVar2 & 10) == 2) {
      FUN_14331f240(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1433b5c10 FUN_1433b5c10 body=464 status=ok
// SIG undefined FUN_1433b5c10(void)

ulonglong FUN_1433b5c10(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 local_res8;
  longlong local_58 [4];
  undefined4 local_38;
  
  uVar6 = (**(code **)(*param_1 + 0x18))();
  if ((uVar6 & 1) == 0) {
    return uVar6 & 0xffffffffffffff00;
  }
  local_58[0] = 0;
  local_58[1] = 0;
  uVar4 = (**(code **)(*param_1 + 0x28))(param_1,local_58);
  lVar1 = *(longlong *)(param_2 + 0x58);
  Scaleform::Lock::DoLock(lVar1 + 0x70);
  cVar3 = Scaleform::Render::DrawableImage::isMapped(param_2);
  if ((cVar3 == '\0') || (2 < *(int *)(param_2 + 8))) {
LAB_1433b5da3:
    uVar6 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_2 + 0x38);
    if ((lVar2 != 0) && ((*(char *)(lVar2 + 0x18) != '\0' && (*(longlong *)(lVar2 + 0x10) != 0)))) {
      cVar3 = FUN_1432c1c90(*(longlong *)(lVar2 + 0x10),1);
      if (cVar3 != '\0') goto LAB_1433b5da3;
    }
    uVar7 = 0;
    plVar8 = local_58;
    do {
      if ((longlong *)*plVar8 != (longlong *)0x0) {
        iVar5 = (**(code **)(*(longlong *)*plVar8 + 0x18))();
        if (iVar5 == 6) {
          lVar2 = *plVar8;
          cVar3 = Scaleform::Render::DrawableImage::isMapped(lVar2);
          if ((cVar3 == '\0') || (2 < *(int *)(lVar2 + 8))) goto LAB_1433b5da3;
          lVar2 = *(longlong *)(lVar2 + 0x38);
          if ((lVar2 != 0) &&
             ((*(char *)(lVar2 + 0x18) != '\0' && (*(longlong *)(lVar2 + 0x10) != 0)))) {
            cVar3 = FUN_1432c1c90(*(longlong *)(lVar2 + 0x10),1);
            if (cVar3 != '\0') goto LAB_1433b5da3;
          }
        }
      }
      uVar7 = uVar7 + 1;
      plVar8 = plVar8 + 1;
    } while (uVar7 < 2);
    local_58[2] = 0;
    local_58[3] = 0;
    local_38 = 0;
    plVar8 = *(longlong **)(*(longlong *)(param_2 + 0xb8) + 0x148);
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,local_58 + 2);
      local_res8 = local_58[3];
    }
    FUN_1433b5df0(param_1,&local_res8,param_2,local_58,uVar4);
    if ((uVar6 & 0x20) == 0) {
      FUN_14331f180(param_2);
    }
    uVar6 = 1;
  }
  Scaleform::Lock::DoLock(lVar1 + 0x70);
  return uVar6;
}



// FUNCTION 1433b5df0 FUN_1433b5df0 body=453 status=ok
// SIG undefined FUN_1433b5df0(void)

undefined8
FUN_1433b5df0(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,int param_5)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 *local_a8;
  undefined1 *puStack_a0;
  undefined1 local_98 [40];
  undefined8 local_70 [3];
  undefined1 local_58 [64];
  
  uVar4 = FUN_14331f100();
  if (param_5 == 0) {
    (**(code **)(*param_1 + 0x38))(param_1,param_2,uVar4,0);
  }
  else {
    lVar6 = 2;
    puVar8 = local_70;
    lVar9 = 2;
    do {
      puVar8[-5] = 0;
      puVar1 = puVar8 + -1;
      puVar8[-3] = puVar1;
      *(undefined4 *)(puVar8 + -4) = 0x10000;
      puVar8[-2] = 0;
      *(undefined4 *)((longlong)puVar8 + -4) = 0;
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8 = puVar8 + 8;
      *(undefined4 *)puVar1 = 0;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    local_a8 = (undefined1 *)0x0;
    puStack_a0 = (undefined1 *)0x0;
    if (((*param_4 != 0) && (cVar2 = FUN_14331c020(local_98), cVar2 == '\0')) ||
       ((local_a8 = local_98, param_4[1] != 0 && (cVar2 = FUN_14331c020(local_58), cVar2 == '\0'))))
    {
      do {
        lVar6 = lVar6 + -1;
        Scaleform::Render::ImageData::freePlanes((longlong *)((longlong)register0x00000020 + -0x58))
        ;
        lVar9 = *(longlong *)((longlong)register0x00000020 + -0x40);
        if ((lVar9 != 0) &&
           (iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(lVar9,0xffffffff),
           iVar3 == 1)) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -0x40);
      } while (lVar6 != 0);
      return 0;
    }
    puStack_a0 = local_58;
    (**(code **)(*param_1 + 0x38))(param_1,param_2,uVar4,&local_a8);
    plVar7 = (longlong *)register0x00000020;
    do {
      lVar6 = lVar6 + -1;
      Scaleform::Render::ImageData::freePlanes(plVar7 + -0xb);
      lVar9 = plVar7[-8];
      if ((lVar9 != 0) &&
         (iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(lVar9,0xffffffff),
         iVar3 == 1)) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      plVar7 = plVar7 + -8;
    } while (lVar6 != 0);
  }
  uVar5 = (**(code **)(*param_1 + 0x18))(param_1);
  if ((uVar5 & 0x20) == 0) {
    FUN_14331f180(param_3);
  }
  return 1;
}



// FUNCTION 1433b5fc0 FUN_1433b5fc0 body=85 status=ok
// SIG undefined FUN_1433b5fc0(void)

undefined8 FUN_1433b5fc0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  
  FUN_14331ee50(param_3);
  (**(code **)(*param_1 + 0x30))(param_1,param_2);
  bVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if ((bVar1 & 10) == 2) {
    FUN_14331f240(param_3);
  }
  return 1;
}



// FUNCTION 1433b6020 FUN_1433b6020 body=2108 status=ok
// SIG undefined FUN_1433b6020(void)

void FUN_1433b6020(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  longlong *plVar12;
  uint *puVar13;
  undefined4 *puVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined8 uVar17;
  longlong *plVar18;
  int iVar19;
  byte bVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  longlong *local_118;
  undefined8 local_108;
  float local_100;
  float local_fc;
  undefined8 local_f8;
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [24];
  
  plVar1 = (longlong *)*param_2;
  bVar7 = false;
  bVar8 = true;
  plVar12 = param_1 + 1;
  bVar5 = false;
  bVar3 = false;
  bVar6 = false;
  local_d8 = plVar12;
  bVar4 = false;
  bVar9 = true;
  if ((longlong *)param_1[2] != plVar12) {
    do {
      bVar8 = bVar9;
      bVar7 = bVar4;
      plVar15 = (longlong *)0x0;
      plVar2 = (longlong *)param_1[2];
      *(longlong *)(*plVar2 + 8) = plVar2[1];
      *(longlong *)plVar2[1] = *plVar2;
      *plVar2 = -1;
      local_118 = plVar2 + 2;
      if ((int)plVar2[0x40] == 0) {
        local_118 = plVar15;
      }
      plVar2[1] = -1;
      bVar4 = false;
      bVar9 = false;
      if (local_118 != (longlong *)0x0) {
        do {
          if (!bVar3) {
            plVar12 = (longlong *)(**(code **)(*plVar1 + 0x118))(plVar1);
            (**(code **)(*plVar12 + 8))(plVar12,0x10,"Scaleform::Render::DrawableImage");
            bVar3 = true;
          }
          plVar12 = (longlong *)local_118[1];
          if (plVar12 != (longlong *)0x0) {
            (**(code **)(*plVar12 + 8))(plVar12);
          }
          uVar11 = (**(code **)(*local_118 + 0x18))(local_118);
          if (((plVar15 == plVar12) && (plVar15 != (longlong *)0x0)) && (bVar4)) {
            bVar20 = (byte)(uVar11 >> 1) & 1;
            if ((uVar11 >> 1 & 1) == 0) goto LAB_1433b6215;
LAB_1433b6154:
            if (plVar12[0x18] != 0) goto LAB_1433b6215;
            if (!bVar5) {
              if ((*(uint *)(plVar1 + 0xb) & 4) != 0) {
                bVar7 = true;
                (**(code **)(*plVar1 + 0x80))(plVar1);
              }
              if ((*(uint *)(plVar1 + 0xb) & 2) == 0) {
                (**(code **)(*plVar1 + 0x58))(plVar1);
                bVar8 = false;
              }
              bVar5 = true;
              bVar6 = true;
            }
            (**(code **)(*plVar1 + 0xb8))(plVar1);
            (**(code **)(*plVar1 + 0xb8))(plVar1);
            cVar10 = FUN_14331f300(plVar12);
            if (cVar10 != '\0') goto LAB_1433b6215;
            uVar11 = (**(code **)(*local_118 + 0x20))(local_118);
            plVar18 = (longlong *)0x0;
            if ((longlong *)((ulonglong)uVar11 + (longlong)local_118) <
                (longlong *)((longlong)plVar2 + (ulonglong)*(uint *)(plVar2 + 0x40) + 0x10)) {
              plVar18 = (longlong *)((ulonglong)uVar11 + (longlong)local_118);
            }
            (**(code **)*local_118)(local_118,0);
            (**(code **)(*plVar12 + 0x10))(plVar12);
            bVar5 = bVar6;
          }
          else {
            if ((((byte)uVar11 & 5) != 1) && ((uVar11 & 8) == 0)) {
              bVar20 = 1;
              goto LAB_1433b6154;
            }
            bVar20 = 0;
LAB_1433b6215:
            if (((plVar15 != (longlong *)0x0) && (bVar4)) || (bVar20 == 0)) {
              if (plVar15 != plVar12) {
                if (bVar4) {
                  if (plVar12 != (longlong *)0x0) {
                    (**(code **)(*plVar12 + 8))(plVar12);
                  }
                  if (plVar15 != (longlong *)0x0) {
                    (**(code **)(*plVar15 + 0x10))(plVar15);
                  }
                  FUN_1432d9e40(plVar1);
                  (**(code **)(*plVar1 + 0x80))(plVar1);
                  FUN_1433b7360(*param_1);
                  (**(code **)(*plVar1 + 0x28))(plVar1,2);
                  lVar16 = (**(code **)(*(longlong *)*param_2 + 0xd0))();
                  if (lVar16 != 0) {
                    uVar17 = (**(code **)(*(longlong *)*param_2 + 0xd0))();
                    plVar15 = (longlong *)FUN_1432c2370(uVar17);
                    if (plVar15 != (longlong *)0x0) {
                      (**(code **)(*plVar15 + 8))(plVar15);
                    }
                    if ((longlong *)plVar12[7] != (longlong *)0x0) {
                      (**(code **)(*(longlong *)plVar12[7] + 0x10))();
                    }
                    plVar12[7] = (longlong)plVar15;
                  }
                  bVar9 = false;
                  plVar15 = plVar12;
                }
                plVar18 = (longlong *)(**(code **)(*plVar1 + 0x118))(plVar1);
                (**(code **)(*plVar18 + 0x10))(plVar18,0x10);
                plVar18 = (longlong *)(**(code **)(*plVar1 + 0x118))(plVar1);
                (**(code **)(*plVar18 + 8))(plVar18,0x10,"Scaleform::Render::DrawableImage");
                if (bVar20 != 0) {
                  if (!bVar5) {
                    if ((*(uint *)(plVar1 + 0xb) & 4) != 0) {
                      bVar7 = true;
                      (**(code **)(*plVar1 + 0x80))(plVar1);
                    }
                    if ((*(uint *)(plVar1 + 0xb) & 2) == 0) {
                      (**(code **)(*plVar1 + 0x58))(plVar1);
                      bVar8 = false;
                    }
                    bVar6 = true;
                  }
                  (**(code **)(*plVar1 + 0xb8))(plVar1);
                  (**(code **)(*plVar1 + 0xb8))(plVar1);
                  puVar13 = (uint *)(**(code **)(*plVar15 + 0x28))(plVar15,local_60);
                  lVar16 = *plVar1;
                  local_e0 = 0;
                  local_f8 = 0;
                  local_ec = (float)puVar13[1];
                  local_f0 = (float)*puVar13;
                  uVar17 = (**(code **)(*plVar15 + 0xd0))(plVar15);
                  (**(code **)(lVar16 + 0x20))(plVar1,uVar17,0xb,&local_f8,&local_e0);
                  (**(code **)(*plVar1 + 0x78))(plVar1);
                  iVar19 = (int)(float)local_f8;
                  iVar23 = (int)local_f8._4_4_;
                  iVar21 = (int)local_f0;
                  iVar22 = (int)local_ec;
                  puVar14 = (undefined4 *)(**(code **)(*plVar15 + 0x28))(plVar15,local_58);
                  local_90 = iVar21 - iVar19;
                  local_8c = iVar22 - iVar23;
                  local_a0 = *puVar14;
                  local_9c = puVar14[1];
                  local_7c = 0;
                  local_84 = 0;
                  local_88 = 0;
                  local_dc = 0;
                  local_98 = iVar19;
                  local_94 = iVar23;
                  FUN_1432d9c70(plVar1,&local_dc,&local_a0,0,&DAT_14621c810);
                  bVar9 = true;
                }
              }
            }
            else {
              if (!bVar5) {
                if ((*(uint *)(plVar1 + 0xb) & 4) != 0) {
                  bVar7 = true;
                  (**(code **)(*plVar1 + 0x80))(plVar1);
                }
                if ((*(uint *)(plVar1 + 0xb) & 2) == 0) {
                  (**(code **)(*plVar1 + 0x58))(plVar1);
                  bVar8 = false;
                }
                bVar6 = true;
              }
              (**(code **)(*plVar1 + 0xb8))(plVar1);
              (**(code **)(*plVar1 + 0xb8))(plVar1);
              if (plVar12 != (longlong *)0x0) {
                (**(code **)(*plVar12 + 8))(plVar12);
              }
              if (plVar15 != (longlong *)0x0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
              }
              puVar13 = (uint *)(**(code **)(*plVar12 + 0x28))(plVar12,local_70);
              lVar16 = *plVar1;
              local_e8 = 0;
              local_108 = 0;
              local_fc = (float)puVar13[1];
              local_100 = (float)*puVar13;
              uVar17 = (**(code **)(*plVar12 + 0xd0))(plVar12);
              (**(code **)(lVar16 + 0x20))(plVar1,uVar17,0xb,&local_108,&local_e8);
              (**(code **)(*plVar1 + 0x78))(plVar1);
              iVar19 = (int)(float)local_108;
              iVar23 = (int)local_108._4_4_;
              iVar21 = (int)local_100;
              iVar22 = (int)local_fc;
              puVar14 = (undefined4 *)(**(code **)(*plVar12 + 0x28))(plVar12,local_68);
              local_c0 = iVar21 - iVar19;
              local_bc = iVar22 - iVar23;
              local_d0 = *puVar14;
              local_cc = puVar14[1];
              local_b0 = 0;
              local_b8 = 0;
              local_e4 = 0;
              local_a8 = 1;
              local_c8 = iVar19;
              local_c4 = iVar23;
              FUN_1432d9c70(plVar1,&local_e4,&local_d0,0,&DAT_14621c810);
              plVar15 = plVar12;
              bVar9 = true;
            }
            bVar5 = bVar6;
            bVar4 = bVar9;
            FUN_1433b5b10(local_118,param_2);
            uVar11 = (**(code **)(*local_118 + 0x20))(local_118);
            plVar18 = (longlong *)0x0;
            if ((longlong *)((ulonglong)uVar11 + (longlong)local_118) <
                (longlong *)((longlong)plVar2 + (ulonglong)*(uint *)(plVar2 + 0x40) + 0x10)) {
              plVar18 = (longlong *)((ulonglong)uVar11 + (longlong)local_118);
            }
            (**(code **)*local_118)(local_118,0);
            bVar9 = bVar4;
            if (plVar12 != (longlong *)0x0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
          local_118 = plVar18;
          bVar6 = bVar5;
        } while (plVar18 != (longlong *)0x0);
        plVar12 = local_d8;
        if ((plVar15 != (longlong *)0x0) && (bVar4)) {
          FUN_1432d9e40(plVar1);
          (**(code **)(*plVar1 + 0x80))(plVar1);
          FUN_1433b7360(*param_1);
          (**(code **)(*plVar1 + 0x28))(plVar1,2);
          lVar16 = (**(code **)(*(longlong *)*param_2 + 0xd0))();
          if (lVar16 != 0) {
            uVar17 = (**(code **)(*(longlong *)*param_2 + 0xd0))();
            plVar12 = (longlong *)FUN_1432c2370(uVar17);
            if (plVar12 != (longlong *)0x0) {
              (**(code **)(*plVar12 + 8))(plVar12);
            }
            if ((longlong *)plVar15[7] != (longlong *)0x0) {
              (**(code **)(*(longlong *)plVar15[7] + 0x10))();
            }
            plVar15[7] = (longlong)plVar12;
          }
          plVar12 = param_1 + 1;
        }
      }
      if (bVar3) {
        plVar18 = (longlong *)(**(code **)(*plVar1 + 0x118))(plVar1);
        (**(code **)(*plVar18 + 0x10))(plVar18,0x10);
        bVar3 = false;
      }
      lVar16 = *param_1;
      if (*(uint *)(lVar16 + 0xec) < 3) {
        *(undefined4 *)(plVar2 + 0x40) = 0;
        plVar18 = (longlong *)(lVar16 + 0xd8);
        *plVar2 = *plVar18;
        plVar2[1] = (longlong)plVar18;
        *(longlong **)(*plVar18 + 8) = plVar2;
        *plVar18 = (longlong)plVar2;
        *(int *)(lVar16 + 0xec) = *(int *)(lVar16 + 0xec) + 1;
      }
      else {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,plVar2);
      }
      if (plVar15 != (longlong *)0x0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
      bVar4 = bVar7;
      bVar9 = bVar8;
    } while ((longlong *)plVar12[1] != plVar12);
  }
  *plVar12 = (longlong)plVar12;
  plVar12[1] = (longlong)plVar12;
  FUN_1433b7360(*param_1);
  FUN_1433b7450(*param_1);
  (**(code **)(*plVar1 + 0xb8))(plVar1);
  if (bVar5) {
    if ((!bVar7) && (lVar16 = (**(code **)(*plVar1 + 0xd0))(plVar1), lVar16 != 0)) {
      uVar17 = (**(code **)(*plVar1 + 0xd0))(plVar1);
      FUN_1432c25b0(uVar17,2);
    }
    if (!bVar8) {
      (**(code **)(*plVar1 + 0x60))(plVar1);
    }
    if (bVar7) {
      (**(code **)(*plVar1 + 0x78))(plVar1);
    }
  }
  return;
}



// FUNCTION 1433b6870 FUN_1433b6870 body=294 status=ok
// SIG undefined FUN_1433b6870(void)

undefined8 * FUN_1433b6870(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = 0xffffffffffffffff;
  param_1[3] = 0xffffffffffffffff;
  *param_1 = &PTR_FUN_145b05c10;
  Scaleform::Mutex::Mutex((Mutex *)(param_1 + 4),true,false);
  Scaleform::WaitCondition::WaitCondition((WaitCondition *)(param_1 + 9));
  puVar2 = (undefined8 *)0x0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = *(undefined8 *)(param_2 + 0x148);
  FUN_1432bdc50(param_1 + 0xe,0);
  puVar1 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x50))();
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &PTR_FUN_144f70a50;
    *puVar1 = &PTR_FUN_145b05c00;
    *(undefined4 *)(puVar1 + 1) = 1;
    puVar1[2] = param_1;
    Scaleform::Event::Event((Event *)(puVar1 + 3),false,false);
    puVar2 = puVar1;
  }
  param_1[0x14] = puVar2;
  puVar2 = param_1 + 0x15;
  lVar3 = 4;
  do {
    *puVar2 = puVar2;
    puVar2[1] = puVar2;
    puVar2 = puVar2 + 2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  return param_1;
}



// FUNCTION 1433b69a0 FUN_1433b69a0 body=218 status=ok
// SIG undefined FUN_1433b69a0(void)

void FUN_1433b69a0(RefCountImplCore *param_1)

{
  RefCountImplCore *pRVar1;
  longlong *plVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_145b05c10;
  Scaleform::Lock::DoLock(param_1 + 0x70);
  pRVar1 = *(RefCountImplCore **)(param_1 + 0xe0);
  while (pRVar1 != param_1 + 0xd8) {
    plVar2 = *(longlong **)(param_1 + 0xe0);
    *(longlong *)(*plVar2 + 8) = plVar2[1];
    *(longlong *)plVar2[1] = *plVar2;
    *plVar2 = -1;
    plVar2[1] = -1;
    (**(code **)(*DAT_146b62f28 + 0x60))();
    pRVar1 = *(RefCountImplCore **)(param_1 + 0xe0);
  }
  Scaleform::Lock::DoLock(param_1 + 0x70);
  if (*(RefCountImpl **)(param_1 + 0xa0) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0xa0));
  }
  Scaleform::Lock::~Lock(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x10))();
  }
  Scaleform::WaitCondition::~WaitCondition((WaitCondition *)(param_1 + 0x48));
  Scaleform::Mutex::~Mutex((Mutex *)(param_1 + 0x20));
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 1433b6a80 FUN_1433b6a80 body=167 status=ok
// SIG undefined FUN_1433b6a80(void)

void FUN_1433b6a80(longlong param_1)

{
  Mutex *this;
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  this = (Mutex *)(param_1 + 0x20);
  Scaleform::Mutex::DoLock(this);
  lVar2 = *(longlong *)(param_1 + 0x50);
  while (lVar2 != 0) {
    Scaleform::WaitCondition::Wait((WaitCondition *)(param_1 + 0x48),this,0xffffffff);
    lVar2 = *(longlong *)(param_1 + 0x50);
  }
  Scaleform::Lock::DoLock(param_1 + 0x70);
  plVar1 = (longlong *)(param_1 + 0xa8);
  plVar4 = (longlong *)(param_1 + 0xb8);
  plVar3 = *(longlong **)(param_1 + 0xb0);
  if (plVar3 != plVar1) {
    lVar2 = *plVar1;
    *plVar1 = (longlong)plVar1;
    *(longlong **)(param_1 + 0xb0) = plVar1;
    *(longlong **)(lVar2 + 8) = plVar4;
    *plVar3 = *plVar4;
    *(longlong **)(*plVar4 + 8) = plVar3;
    *plVar4 = lVar2;
  }
  Scaleform::Lock::DoLock(param_1 + 0x70);
  Scaleform::Mutex::Unlock(this);
  return;
}



// FUNCTION 1433b6b30 OnNextCapture body=58 status=ok
// SIG undefined OnNextCapture(void)

void Scaleform::Render::DICommandQueue::OnNextCapture(RefCountImpl *param_1,undefined8 param_2)

{
  RefCountImpl::AddRef(param_1);
  FUN_1433b7360(param_1);
  FUN_1433b6b80(param_1,param_2);
  RefCountImpl::Release(param_1);
  return;
}



// FUNCTION 1433b6b80 FUN_1433b6b80 body=359 status=ok
// SIG undefined FUN_1433b6b80(void)

void FUN_1433b6b80(longlong param_1,longlong *param_2)

{
  undefined8 **ppuVar1;
  undefined8 ****ppppuVar2;
  longlong *plVar3;
  undefined8 **ppuVar4;
  undefined8 ***pppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 *****pppppuVar7;
  undefined8 uVar8;
  undefined8 local_res8;
  longlong local_38;
  undefined8 ****local_30;
  undefined8 ****local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  
  if ((*(longlong *)(param_1 + 0x68) == 0) && (param_2 != (longlong *)0x0)) {
    uVar8 = (**(code **)(*param_2 + 0x20))(param_2);
    *(undefined8 *)(param_1 + 0x68) = uVar8;
  }
  plVar3 = *(longlong **)(param_1 + 0x68);
  local_10 = 0;
  local_20 = 0;
  uStack_18 = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x10))(plVar3,&local_20);
    local_res8 = uStack_18;
  }
  local_30 = &local_30;
  local_28 = &local_30;
  local_38 = param_1;
  Scaleform::Mutex::DoLock((Mutex *)(param_1 + 0x20));
  Scaleform::Lock::DoLock(param_1 + 0x70);
  ppuVar1 = (undefined8 **)(param_1 + 0xb8);
  ppuVar4 = *(undefined8 ***)(param_1 + 0xc0);
  ppppuVar2 = (undefined8 ****)(param_1 + 200);
  if (ppuVar4 != ppuVar1) {
    pppuVar5 = (undefined8 ***)*ppuVar1;
    *ppuVar1 = ppuVar1;
    *(undefined8 ***)(param_1 + 0xc0) = ppuVar1;
    pppuVar5[1] = ppppuVar2;
    *ppuVar4 = *ppppuVar2;
    (*ppppuVar2)[1] = ppuVar4;
    *ppppuVar2 = pppuVar5;
  }
  Scaleform::Mutex::DoLock((Mutex *)(param_1 + 0x20));
  ppppuVar6 = *(undefined8 *****)(param_1 + 0xd0);
  if (ppppuVar6 != ppppuVar2) {
    pppppuVar7 = (undefined8 *****)*ppppuVar2;
    *ppppuVar2 = ppppuVar2;
    *(undefined8 *****)(param_1 + 0xd0) = ppppuVar2;
    pppppuVar7[1] = &local_30;
    *ppppuVar6 = local_30;
    local_30[1] = ppppuVar6;
    local_30 = pppppuVar7;
  }
  Scaleform::Mutex::Unlock((Mutex *)(param_1 + 0x20));
  *(longlong **)(param_1 + 0x50) = &local_38;
  Scaleform::Lock::DoLock(param_1 + 0x70);
  Scaleform::Mutex::Unlock((Mutex *)(param_1 + 0x20));
  FUN_1433b6020(&local_38,&local_res8);
  Scaleform::Mutex::DoLock((Mutex *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x50) = 0;
  Scaleform::WaitCondition::NotifyAll((WaitCondition *)(param_1 + 0x48));
  Scaleform::Mutex::Unlock((Mutex *)(param_1 + 0x20));
  return;
}



// FUNCTION 1433b6cf0 ExecuteCommandsAndWait body=76 status=ok
// SIG undefined ExecuteCommandsAndWait(void)

void Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(RefCountImpl *param_1)

{
  longlong lVar1;
  
  RefCountImpl::AddRef(param_1);
  RefCountImpl::AddRef(*(RefCountImpl **)(param_1 + 0xa0));
  (**(code **)(**(longlong **)(param_1 + 0x68) + 8))();
  lVar1 = *(longlong *)(param_1 + 0xa0);
  Event::Wait((Event *)(lVar1 + 0x18),0xffffffff);
  _ResetEvent_Event_Scaleform__QEAAXXZ((HANDLE)(lVar1 + 0x18));
  return;
}



// FUNCTION 1433b6d50 FUN_1433b6d50 body=432 status=ok
// SIG undefined FUN_1433b6d50(void)

void FUN_1433b6d50(longlong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  uint uVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  undefined8 ***local_20;
  undefined8 ***local_18;
  
  local_20 = &local_20;
  local_18 = &local_20;
  Scaleform::Mutex::DoLock((Mutex *)(param_1 + 0x20));
  pppuVar1 = (undefined8 ***)(param_1 + 200);
  pppuVar2 = *(undefined8 ****)(param_1 + 0xd0);
  if (pppuVar2 != pppuVar1) {
    ppppuVar4 = (undefined8 ****)*pppuVar1;
    *pppuVar1 = pppuVar1;
    *(undefined8 ****)(param_1 + 0xd0) = pppuVar1;
    ppppuVar4[1] = &local_20;
    *pppuVar2 = local_20;
    local_20[1] = pppuVar2;
    local_20 = ppppuVar4;
  }
  pppuVar1 = (undefined8 ***)(param_1 + 0xb8);
  pppuVar2 = *(undefined8 ****)(param_1 + 0xc0);
  if (pppuVar2 != pppuVar1) {
    ppppuVar4 = (undefined8 ****)*pppuVar1;
    *pppuVar1 = pppuVar1;
    *(undefined8 ****)(param_1 + 0xc0) = pppuVar1;
    ppppuVar4[1] = &local_20;
    *pppuVar2 = local_20;
    local_20[1] = pppuVar2;
    local_20 = ppppuVar4;
  }
  pppuVar1 = (undefined8 ***)(param_1 + 0xa8);
  pppuVar2 = *(undefined8 ****)(param_1 + 0xb0);
  if (pppuVar2 != pppuVar1) {
    ppppuVar4 = (undefined8 ****)*pppuVar1;
    *pppuVar1 = pppuVar1;
    *(undefined8 ****)(param_1 + 0xb0) = pppuVar1;
    ppppuVar4[1] = &local_20;
    *pppuVar2 = local_20;
    local_20[1] = pppuVar2;
    local_20 = ppppuVar4;
  }
  Scaleform::Mutex::Unlock((Mutex *)(param_1 + 0x20));
  if ((undefined8 ****)local_18 != &local_20) {
    do {
      pppuVar1 = local_18;
      (*local_18)[1] = local_18[1];
      *local_18[1] = *local_18;
      *local_18 = (undefined8 ***)0xffffffffffffffff;
      ppppuVar4 = (undefined8 ****)(local_18 + 2);
      if (*(int *)(local_18 + 0x40) == 0) {
        ppppuVar4 = (undefined8 ****)0x0;
      }
      local_18[1] = (undefined8 ***)0xffffffffffffffff;
      while (ppppuVar4 != (undefined8 ****)0x0) {
        (*(code *)(*ppppuVar4)[8])(ppppuVar4);
        uVar3 = (*(code *)(*ppppuVar4)[4])(ppppuVar4);
        ppppuVar5 = (undefined8 ****)0x0;
        if ((undefined8 ****)((ulonglong)uVar3 + (longlong)ppppuVar4) <
            (undefined8 ****)((ulonglong)*(uint *)(pppuVar1 + 0x40) + 0x10 + (longlong)pppuVar1)) {
          ppppuVar5 = (undefined8 ****)((ulonglong)uVar3 + (longlong)ppppuVar4);
        }
        (*(code *)**ppppuVar4)(ppppuVar4,0);
        ppppuVar4 = ppppuVar5;
      }
      (**(code **)(*DAT_146b62f28 + 0x60))();
    } while ((undefined8 ****)local_18 != &local_20);
  }
  return;
}



// FUNCTION 1433b6f10 FUN_1433b6f10 body=392 status=ok
// SIG undefined FUN_1433b6f10(void)

void FUN_1433b6f10(RefCountImpl *param_1)

{
  undefined8 **ppuVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 **ppuVar4;
  undefined8 ***pppuVar5;
  undefined8 local_res8;
  longlong local_38;
  undefined8 **local_30;
  undefined8 **local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  
  local_10 = 0;
  local_20 = 0;
  uStack_18 = 0;
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x68);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,&local_20);
    local_res8 = uStack_18;
  }
  lVar3 = *(longlong *)(param_1 + 0x10);
  local_30 = &local_30;
  local_28 = &local_30;
  local_38 = lVar3;
  Scaleform::Mutex::DoLock((Mutex *)(lVar3 + 0x20));
  ppuVar1 = (undefined8 **)(lVar3 + 200);
  ppuVar4 = *(undefined8 ***)(lVar3 + 0xd0);
  if (ppuVar4 != ppuVar1) {
    pppuVar5 = (undefined8 ***)*ppuVar1;
    *ppuVar1 = ppuVar1;
    *(undefined8 ***)(lVar3 + 0xd0) = ppuVar1;
    pppuVar5[1] = &local_30;
    *ppuVar4 = local_30;
    local_30[1] = ppuVar4;
    local_30 = pppuVar5;
  }
  ppuVar1 = (undefined8 **)(lVar3 + 0xb8);
  ppuVar4 = *(undefined8 ***)(lVar3 + 0xc0);
  if (ppuVar4 != ppuVar1) {
    pppuVar5 = (undefined8 ***)*ppuVar1;
    *ppuVar1 = ppuVar1;
    *(undefined8 ***)(lVar3 + 0xc0) = ppuVar1;
    pppuVar5[1] = &local_30;
    *ppuVar4 = local_30;
    local_30[1] = ppuVar4;
    local_30 = pppuVar5;
  }
  ppuVar1 = (undefined8 **)(lVar3 + 0xa8);
  ppuVar4 = *(undefined8 ***)(lVar3 + 0xb0);
  if (ppuVar4 != ppuVar1) {
    pppuVar5 = (undefined8 ***)*ppuVar1;
    *ppuVar1 = ppuVar1;
    *(undefined8 ***)(lVar3 + 0xb0) = ppuVar1;
    pppuVar5[1] = &local_30;
    *ppuVar4 = local_30;
    local_30[1] = ppuVar4;
    local_30 = pppuVar5;
  }
  Scaleform::Mutex::Unlock((Mutex *)(lVar3 + 0x20));
  *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x50) = &local_38;
  FUN_1433b6020(&local_38,&local_res8);
  lVar3 = *(longlong *)(param_1 + 0x10);
  Scaleform::Mutex::DoLock((Mutex *)(lVar3 + 0x20));
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x50) = 0;
  Scaleform::WaitCondition::NotifyAll((WaitCondition *)(*(longlong *)(param_1 + 0x10) + 0x48));
  Scaleform::Mutex::Unlock((Mutex *)(lVar3 + 0x20));
  Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x10));
  Scaleform::Event::SetEvent((Event *)(param_1 + 0x18));
  Scaleform::RefCountImpl::Release(param_1);
  return;
}



// FUNCTION 1433b70a0 FUN_1433b70a0 body=173 status=ok
// SIG undefined FUN_1433b70a0(void)

longlong FUN_1433b70a0(longlong param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0xa8);
  if ((plVar2 == (longlong *)(param_1 + 0xa8)) || (0x1f0U - *(int *)(plVar2 + 0x40) < param_2)) {
    if ((*(int *)(param_1 + 0xec) == 0) && (0xf < *(uint *)(param_1 + 0xf0))) {
      Scaleform::Lock::DoLock(param_3);
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(param_1);
      Scaleform::Lock::DoLock(param_3);
    }
    plVar2 = (longlong *)FUN_1433b7160(param_1);
  }
  if (plVar2 != (longlong *)0x0) {
    uVar1 = *(uint *)((longlong)plVar2 + 0x200);
    if (param_2 <= 0x1f0 - uVar1) {
      *(uint *)((longlong)plVar2 + 0x200) = uVar1 + param_2;
      return (ulonglong)uVar1 + 0x10 + (longlong)plVar2;
    }
  }
  return 0;
}



// FUNCTION 1433b7160 FUN_1433b7160 body=189 status=ok
// SIG undefined FUN_1433b7160(void)

longlong * FUN_1433b7160(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 local_res8 [8];
  
  if (*(longlong *)(param_1 + 0xe0) == param_1 + 0xd8) {
    local_res8[0] = 2;
    plVar2 = (longlong *)
             (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x208,local_res8);
    if (plVar2 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
    *plVar2 = -1;
    plVar2[1] = -1;
    plVar2[0x40] = 0;
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0xe0);
    *(longlong *)(*plVar2 + 8) = plVar2[1];
    *(longlong *)plVar2[1] = *plVar2;
    *plVar2 = -1;
    plVar2[1] = -1;
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + -1;
  }
  if (plVar2 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  plVar1 = (longlong *)(param_1 + 0xa8);
  *plVar2 = *plVar1;
  plVar2[1] = (longlong)plVar1;
  *(longlong **)(*plVar1 + 8) = plVar2;
  *plVar1 = (longlong)plVar2;
  return plVar2;
}



// FUNCTION 1433b7280 FUN_1433b7280 body=213 status=ok
// SIG undefined FUN_1433b7280(void)

void FUN_1433b7280(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  Scaleform::Mutex::DoLock((Mutex *)(param_1 + 0x20));
  plVar1 = (longlong *)(param_1 + 200);
  plVar4 = (longlong *)(param_2 + 8);
  plVar2 = *(longlong **)(param_1 + 0xd0);
  if (plVar2 != plVar1) {
    lVar3 = *plVar1;
    *plVar1 = (longlong)plVar1;
    *(longlong **)(param_1 + 0xd0) = plVar1;
    *(longlong **)(lVar3 + 8) = plVar4;
    *plVar2 = *plVar4;
    *(longlong **)(*plVar4 + 8) = plVar2;
    *plVar4 = lVar3;
  }
  if (param_3 == 0) {
    plVar1 = (longlong *)(param_1 + 0xb8);
    plVar2 = *(longlong **)(param_1 + 0xc0);
    if (plVar2 != plVar1) {
      lVar3 = *plVar1;
      *plVar1 = (longlong)plVar1;
      *(longlong **)(param_1 + 0xc0) = plVar1;
      *(longlong **)(lVar3 + 8) = plVar4;
      *plVar2 = *plVar4;
      *(longlong **)(*plVar4 + 8) = plVar2;
      *plVar4 = lVar3;
    }
    plVar1 = (longlong *)(param_1 + 0xa8);
    plVar2 = *(longlong **)(param_1 + 0xb0);
    if (plVar2 != plVar1) {
      lVar3 = *plVar1;
      *plVar1 = (longlong)plVar1;
      *(longlong **)(param_1 + 0xb0) = plVar1;
      *(longlong **)(lVar3 + 8) = plVar4;
      *plVar2 = *plVar4;
      *(longlong **)(*plVar4 + 8) = plVar2;
      *plVar4 = lVar3;
    }
  }
  Scaleform::Mutex::Unlock((Mutex *)(param_1 + 0x20));
  return;
}



// FUNCTION 1433b7360 FUN_1433b7360 body=224 status=ok
// SIG undefined FUN_1433b7360(void)

void FUN_1433b7360(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  Scaleform::Lock::DoLock(param_1 + 0x70);
  plVar3 = (longlong *)0x0;
  if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x58) + 8))();
  }
  plVar1 = *(longlong **)(param_1 + 0x58);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (plVar1 != (longlong *)0x0) {
    do {
      plVar2 = plVar1;
      (**(code **)(*plVar2 + 8))(plVar2);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
      FUN_14331eeb0(plVar2);
      plVar3 = plVar2 + 0x14;
      if ((longlong *)*plVar3 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar3 + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
      plVar1 = (longlong *)*plVar3;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
      *plVar3 = 0;
      *(uint *)((longlong)plVar2 + 0x4c) = *(uint *)((longlong)plVar2 + 0x4c) & 0xfffffff7;
      plVar3 = plVar2;
    } while (plVar1 != (longlong *)0x0);
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  Scaleform::Lock::DoLock(param_1 + 0x70);
  return;
}



// FUNCTION 1433b7450 FUN_1433b7450 body=224 status=ok
// SIG undefined FUN_1433b7450(void)

void FUN_1433b7450(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  Scaleform::Lock::DoLock(param_1 + 0x70);
  plVar3 = (longlong *)0x0;
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x60) + 8))();
  }
  plVar1 = *(longlong **)(param_1 + 0x60);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (plVar1 != (longlong *)0x0) {
    do {
      plVar2 = plVar1;
      (**(code **)(*plVar2 + 8))(plVar2);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
      FUN_14331efc0(plVar2);
      plVar3 = plVar2 + 0x15;
      if ((longlong *)*plVar3 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar3 + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
      plVar1 = (longlong *)*plVar3;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
      *plVar3 = 0;
      *(uint *)((longlong)plVar2 + 0x4c) = *(uint *)((longlong)plVar2 + 0x4c) & 0xffffffef;
      plVar3 = plVar2;
    } while (plVar1 != (longlong *)0x0);
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  Scaleform::Lock::DoLock(param_1 + 0x70);
  return;
}



// FUNCTION 1433b7540 FUN_1433b7540 body=75 status=ok
// SIG undefined FUN_1433b7540(void)

void FUN_1433b7540(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  Scaleform::Mutex::DoLock((Mutex *)(param_1 + 0x20));
  lVar1 = *param_2;
  while (lVar1 != 0) {
    Scaleform::WaitCondition::Wait
              ((WaitCondition *)(param_1 + 0x48),(Mutex *)(param_1 + 0x20),0xffffffff);
    lVar1 = *param_2;
  }
  return;
}



// FUNCTION 1433b75b0 FUN_1433b75b0 body=70 status=ok
// SIG undefined FUN_1433b75b0(void)

void FUN_1433b75b0(longlong param_1,undefined8 *param_2)

{
  Scaleform::Mutex::DoLock((Mutex *)(param_1 + 0x20));
  *param_2 = 0;
  Scaleform::WaitCondition::NotifyAll((WaitCondition *)(param_1 + 0x48));
  Scaleform::Mutex::Unlock((Mutex *)(param_1 + 0x20));
  return;
}



// FUNCTION 1433b7600 FUN_1433b7600 body=89 status=ok
// SIG undefined FUN_1433b7600(void)

undefined8 FUN_1433b7600(undefined8 param_1,ulonglong param_2)

{
  FUN_1433b69a0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 1433b7660 FUN_1433b7660 body=101 status=ok
// SIG undefined FUN_1433b7660(void)

RefCountImplCore * FUN_1433b7660(RefCountImplCore *param_1,uint param_2)

{
  Scaleform::Event::~Event((Event *)(param_1 + 0x18));
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1433b76d0 FUN_1433b76d0 body=53 status=ok
// SIG undefined FUN_1433b76d0(void)

void FUN_1433b76d0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*(longlong *)*param_2 + 0x128))();
  FUN_14331ec10(*(undefined8 *)(param_1 + 8),*param_2,uVar1);
  return;
}



// FUNCTION 1433b7710 FUN_1433b7710 body=172 status=ok
// SIG undefined FUN_1433b7710(void)

void FUN_1433b7710(longlong param_1,undefined8 *param_2)

{
  uint *puVar1;
  undefined4 local_res8 [2];
  undefined8 local_18;
  int local_10;
  int local_c;
  
  FUN_1432dafc0(*param_2,0x10,1);
  puVar1 = (uint *)(**(code **)(**(longlong **)(param_1 + 8) + 0x28))
                             (*(longlong **)(param_1 + 8),local_res8);
  local_18 = 0xffffffffffffffff;
  local_10 = (int)((float)*puVar1 + 1.0);
  local_c = (int)((float)puVar1[1] + 1.0);
  local_res8[0] = *(undefined4 *)(param_1 + 0x10);
  (**(code **)(*(longlong *)*param_2 + 0x90))((longlong *)*param_2,&local_18,local_res8,0);
  FUN_1432dafc0(*param_2,0,0,0);
  return;
}



// FUNCTION 1433b7820 FUN_1433b7820 body=1468 status=ok
// SIG undefined FUN_1433b7820(void)

void FUN_1433b7820(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  RefCountImpl *this;
  undefined8 uVar3;
  RefCountImpl *this_00;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined **local_res8;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  longlong lStack_d0;
  RefCountImpl local_c8 [176];
  
  local_128 = 0x3f80000000000000;
  uStack_120 = 0;
  local_d8 = 0x3f80000000000000;
  lStack_d0 = 0;
  local_138 = 0x3f800000;
  uStack_130 = 0;
  local_e8 = 0x3f800000;
  uStack_e0 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_f8 = (int)((float)*(int *)(param_1 + 0x18) * 20.0);
  local_f4 = (int)((float)*(int *)(param_1 + 0x1c) * 20.0);
  local_f0 = (int)((float)*(int *)(param_1 + 0x20) * 20.0);
  local_ec = (int)((float)*(int *)(param_1 + 0x24) * 20.0);
  FUN_14331c2d0(&local_148,&local_f8,*(undefined8 *)(param_1 + 0x30));
  fVar5 = _guard_xfg_dispatch_icall_nop((float)local_148 - 10.0);
  fVar6 = _guard_xfg_dispatch_icall_nop(local_148._4_4_ - 10.0);
  fVar7 = _guard_xfg_dispatch_icall_nop((float)uStack_140 + 10.0);
  fVar8 = _guard_xfg_dispatch_icall_nop(uStack_140._4_4_ + 10.0);
  iVar2 = (int)(fVar5 * 0.05);
  iVar4 = (int)(fVar6 * 0.05);
  local_148 = CONCAT44(fVar6 * 0.05,fVar5 * 0.05);
  uStack_140 = CONCAT44(fVar8 * 0.05,fVar7 * 0.05);
  fVar5 = (float)(int)((((int)(fVar7 * 0.05) - iVar2) + 0x1fU & 0xffffffe0) + iVar2) - (float)iVar2;
  local_138 = CONCAT44(local_138._4_4_ * fVar5,(float)local_138 * fVar5);
  fVar6 = (float)(int)((((int)(fVar8 * 0.05) - iVar4) + 0x1fU & 0xffffffe0) + iVar4) - (float)iVar4;
  local_128 = CONCAT44(local_128._4_4_ * fVar6,(float)local_128 * fVar6);
  uStack_130 = CONCAT44(uStack_130._4_4_ * fVar5 + (float)iVar2,(float)uStack_130 * fVar5);
  uStack_120 = CONCAT44(uStack_120._4_4_ * fVar6 + (float)iVar4,(float)uStack_120 * fVar6);
  FUN_1432d0ca0(local_c8,*(undefined8 *)(param_1 + 0x30));
  this = (RefCountImpl *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x50);
  if (this == (RefCountImpl *)0x0) {
    this = (RefCountImpl *)0x0;
  }
  else {
    FUN_1432d3e60(this);
    *(undefined ***)this = &PTR_FUN_145b05c40;
    *(undefined ***)(this + 0x10) = &PTR_LAB_145b05c58;
    Scaleform::RefCountImpl::AddRef(local_c8);
    *(RefCountImpl **)(this + 0x48) = local_c8;
  }
  uVar3 = (**(code **)(*(longlong *)*param_2 + 0x100))();
  FUN_1432c0ac0(uVar3,&local_res8,&local_138,0);
  FUN_1432c0490(&local_res8,&local_138);
  CAkParameterNodeBase::SetRTPC(this,0,&local_res8);
  this_00 = (RefCountImpl *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x50);
  if (this_00 == (RefCountImpl *)0x0) {
    this_00 = (RefCountImpl *)0x0;
  }
  else {
    FUN_1432d3e60(this_00);
    *(undefined4 *)(this_00 + 0x48) = 0x10;
    *(undefined ***)this_00 = &PTR_FUN_145b05c78;
    *(undefined ***)(this_00 + 0x10) = &PTR_LAB_145b05c90;
  }
  (**(code **)(*(longlong *)*param_2 + 0x1b8))((longlong *)*param_2,this_00);
  (**(code **)(*(longlong *)*param_2 + 0x1d0))((longlong *)*param_2,this);
  fVar5 = (float)(**(code **)(*(longlong *)*param_2 + 0x140))();
  fVar5 = fVar5 * 2.0;
  lVar1 = *(longlong *)(param_3 + 8);
  fVar7 = ((float)uStack_140 - (float)local_148) * 0.0;
  local_e8 = 0x40000000;
  uStack_e0 = 0xbf80000000000000;
  fVar6 = (uStack_140._4_4_ - local_148._4_4_) * 0.0;
  lStack_d0 = (ulonglong)(uint)((-0.0 - fVar5 * 0.5) + 0.0) << 0x20;
  local_d8 = CONCAT44(fVar5 + 0.0,fVar5 * 0.0 + 0.0);
  local_10c = 1.0 / (float)*(uint *)(lVar1 + 0x38);
  local_fc = 1.0 / (float)*(uint *)(lVar1 + 0x3c);
  local_118 = ((float)uStack_140 - (float)local_148) * local_10c;
  local_108 = fVar6 * local_fc;
  local_104 = (uStack_140._4_4_ - local_148._4_4_) * local_fc;
  local_100 = fVar6 * local_fc;
  local_fc = (fVar6 + local_148._4_4_) * local_fc;
  local_114 = fVar7 * local_10c;
  local_110 = fVar7 * local_10c;
  local_10c = (fVar7 + (float)local_148) * local_10c;
  (**(code **)(*(longlong *)*param_2 + 0x228))
            ((longlong *)*param_2,lVar1,&local_e8,&local_118,0xffffffff);
  fVar5 = (uStack_140._4_4_ - local_148._4_4_) * 0.0;
  fVar6 = ((float)uStack_140 - (float)local_148) * 0.0;
  local_128 = CONCAT44(uStack_140._4_4_ - local_148._4_4_,fVar5);
  local_138 = CONCAT44(fVar6,(float)uStack_140 - (float)local_148);
  uStack_120 = CONCAT44(fVar5 + local_148._4_4_,fVar5);
  uStack_130 = CONCAT44(fVar6 + (float)local_148,fVar6);
  FUN_1432c0490(&local_res8,&local_138);
  (**(code **)(*(longlong *)*param_2 + 0x1d8))();
  (**(code **)(*(longlong *)*param_2 + 0x1c0))();
  if (this_00 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this_00);
  }
  if (local_res8 != &PTR_LOOP_1467cd040) {
    FUN_1432c03a0(*local_res8);
  }
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
  }
  FUN_1432d0d00(local_c8);
  return;
}



// FUNCTION 1433b7df0 FUN_1433b7df0 body=306 status=ok
// SIG undefined FUN_1433b7df0(void)

void FUN_1433b7df0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  bool bVar5;
  undefined4 local_res8 [2];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 0xb8);
  lVar2 = *plVar1;
  uVar3 = (**(code **)(*(longlong *)*param_2 + 0x98))();
  (**(code **)(lVar2 + 0x28))(plVar1,uVar3);
  puVar4 = (undefined4 *)(**(code **)(*(longlong *)*param_2 + 0x148))();
  local_38 = *puVar4;
  local_34 = puVar4[1];
  local_30 = puVar4[2];
  local_2c = puVar4[3];
  local_28 = puVar4[4];
  local_24 = puVar4[5];
  local_10 = puVar4[10];
  local_20 = puVar4[6];
  local_1c = puVar4[7];
  local_18 = puVar4[8];
  local_14 = puVar4[9];
  bVar5 = (*(uint *)(*param_2 + 0x58) & 8) != 0;
  if (bVar5) {
    FUN_1432d9e40(*param_2);
  }
  (**(code **)(*(longlong *)*param_2 + 0x68))();
  FUN_1432dafc0(*param_2,1,1);
  FUN_1432d9ea0(*param_2,*(undefined8 *)(param_1 + 0x10));
  (**(code **)(*(longlong *)*param_2 + 0x68))();
  if (bVar5) {
    local_res8[0] = 0;
    FUN_1432d9c70(*param_2,local_res8,&local_38,0,&DAT_14621c810);
  }
  FUN_14331b8c0(plVar1,*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 1433b7f50 FUN_1433b7f50 body=145 status=ok
// SIG undefined FUN_1433b7f50(void)

void FUN_1433b7f50(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  RefCountImpl *this;
  RefCountImpl *pRVar2;
  undefined8 uVar3;
  
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
    this = (RefCountImpl *)(**(code **)(*plVar1 + 0xa8))(plVar1,0);
    if (this != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(this);
    }
    *(uint *)(*(longlong *)(param_1 + 8) + 0x4c) =
         *(uint *)(*(longlong *)(param_1 + 8) + 0x4c) | 0x20;
    if (this != (RefCountImpl *)0x0) {
      if (*(longlong *)(this + 0x28) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(*(longlong *)(this + 0x28) + 0x10);
      }
      pRVar2 = (RefCountImpl *)FUN_1432ca370(uVar3);
      if (this != pRVar2) {
        (**(code **)(*(longlong *)this + 0x58))(this);
        FUN_1432da1e0(*param_2,0);
      }
      Scaleform::RefCountImpl::Release(this);
    }
  }
  return;
}



// FUNCTION 1433b7ff0 FUN_1433b7ff0 body=403 status=ok
// SIG undefined FUN_1433b7ff0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1433b7ff0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 local_88 [5];
  undefined4 auStack_74 [5];
  undefined8 local_60 [3];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  puVar3 = local_60;
  lVar5 = 2;
  do {
    puVar3[-5] = 0;
    puVar3[-4] = 0;
    puVar3[-3] = 0;
    puVar3[-2] = 0;
    puVar3[-1] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *(undefined4 *)(puVar3 + -5) = 0x3f800000;
    *(undefined4 *)((longlong)puVar3 + -0x14) = 0x3f800000;
    *(undefined4 *)puVar3 = 0x3f800000;
    *(undefined4 *)((longlong)puVar3 + 0x14) = 0x3f800000;
    puVar3 = puVar3 + 8;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  iVar1 = *(int *)(param_1 + 0x34);
  uVar4 = 0;
  bVar2 = true;
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      uVar4 = 1;
    }
    else if (iVar1 == 4) {
      uVar4 = 2;
    }
    else if (iVar1 == 8) {
      uVar4 = 3;
    }
    else {
      bVar2 = false;
    }
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      puVar3 = (undefined8 *)((longlong)local_48 + 4);
      goto LAB_1433b80c8;
    }
    if (iVar1 == 4) {
      puVar3 = (undefined8 *)local_40;
      goto LAB_1433b80c8;
    }
    if (iVar1 == 8) {
      puVar3 = (undefined8 *)((longlong)local_40 + 4);
      goto LAB_1433b80c8;
    }
    bVar2 = false;
  }
  puVar3 = (undefined8 *)local_48;
LAB_1433b80c8:
  local_88[(ulonglong)uVar4 * 5] = 0;
  local_48 = (undefined1  [8])0x0;
  local_40 = (undefined1  [8])0x0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  if (bVar2) {
    *(undefined4 *)(puVar3 + (ulonglong)uVar4 * 2) = 0x3f800000;
  }
  FUN_1432dafc0(*param_2,(*(char *)(*(longlong *)(param_1 + 8) + 0x50) != '\0') + '\x0f',1);
  (**(code **)(*(longlong *)*param_2 + 0x208))((longlong *)*param_2,param_3,param_4,local_88);
  return;
}



// FUNCTION 1433b8190 FUN_1433b8190 body=290 status=ok
// SIG undefined FUN_1433b8190(void)

void FUN_1433b8190(longlong param_1,undefined8 *param_2,float *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *param_2 = *(undefined8 *)(param_1 + 8);
  iVar5 = param_4[1];
  iVar2 = *param_4;
  param_2[1] = *(undefined8 *)(param_1 + 0x10);
  param_3[1] = (float)iVar5;
  *param_3 = (float)iVar2;
  iVar5 = -*(int *)(param_1 + 0x38);
  iVar2 = -*(int *)(param_1 + 0x3c);
  iVar4 = -*(int *)(param_1 + 0x28);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  iVar3 = -*(int *)(param_1 + 0x2c);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  if (0 < iVar4) {
    iVar5 = iVar5 - iVar4;
  }
  if (0 < iVar3) {
    iVar2 = iVar2 - iVar3;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  iVar2 = iVar3 + *(int *)(param_1 + 0x1c) + iVar2;
  param_2[2] = *(undefined8 *)(param_1 + 0x30);
  iVar5 = iVar4 + iVar1 + iVar5;
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  param_3[2] = (float)iVar5;
  param_3[3] = (float)iVar2;
  iVar5 = -iVar4 - *(int *)(param_1 + 0x18);
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  iVar2 = -iVar3 - *(int *)(param_1 + 0x1c);
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  iVar5 = iVar5 + *(int *)(param_1 + 0x38) + iVar4;
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  iVar2 = iVar2 + *(int *)(param_1 + 0x3c) + iVar3;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  param_3[4] = (float)iVar5;
  param_3[5] = (float)iVar2;
  return;
}



// FUNCTION 1433b82c0 FUN_1433b82c0 body=151 status=ok
// SIG undefined FUN_1433b82c0(void)

void FUN_1433b82c0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_28 = 0x40000000;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0xbf800000;
  local_18 = 0;
  uStack_14 = 0xc0000000;
  uStack_10 = 0;
  uStack_c = 0x3f800000;
  FUN_1432dafc0(*param_2,(*(char *)(*(longlong *)(param_1 + 8) + 0x50) != '\0') + '\x0f',1);
  (**(code **)(*(longlong *)*param_2 + 0x218))
            ((longlong *)*param_2,param_3,param_4,&local_28,*(undefined1 *)(param_1 + 0x40),
             *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x50));
  return;
}



// FUNCTION 1433b8360 FUN_1433b8360 body=477 status=ok
// SIG undefined FUN_1433b8360(void)

ulonglong FUN_1433b8360(longlong param_1,undefined4 *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  ulonglong uVar7;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int local_res8 [2];
  undefined1 local_48 [16];
  ulonglong uVar8;
  
  uVar7 = 0;
  uVar11 = 0;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
    local_res8[0] = 0;
    local_res8[1] = 0;
    piVar6 = local_res8;
  }
  else {
    piVar6 = (int *)(**(code **)(*plVar3 + 0x28))(plVar3,local_res8);
  }
  plVar3 = *(longlong **)(param_1 + 8);
  iVar10 = *piVar6;
  uVar15 = piVar6[1];
  if (plVar3 == (longlong *)0x0) {
    local_res8[0] = 0;
    local_res8[1] = 0;
    piVar6 = local_res8;
  }
  else {
    piVar6 = (int *)(**(code **)(*plVar3 + 0x28))(plVar3,local_res8);
  }
  iVar1 = *piVar6;
  local_res8[0] = piVar6[1];
  if (*(longlong *)(param_1 + 0x30) == 0) {
    uVar7 = FUN_1433b92e0(param_1,param_2,param_3);
    return uVar7;
  }
  iVar12 = *(int *)(param_1 + 0x2c);
  iVar2 = *(int *)(param_1 + 0x1c);
  uVar4 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x18);
  uVar8 = (ulonglong)uVar4;
  *param_3 = uVar4;
  param_3[1] = iVar12 - iVar2;
  uVar4 = *(uint *)(param_1 + 0x1c);
  if ((int)uVar4 <= (int)uVar15) {
    uVar5 = *(uint *)(param_1 + 0x24);
    uVar8 = (ulonglong)uVar5;
    if (((-1 < (int)uVar5) && (iVar12 = *(int *)(param_1 + 0x20), -1 < iVar12)) &&
       (uVar14 = *(uint *)(param_1 + 0x18), (int)uVar14 <= iVar10)) {
      if ((int)uVar14 < 0) {
        uVar14 = uVar11;
      }
      if (iVar12 < iVar10) {
        iVar10 = iVar12;
      }
      if ((int)uVar4 < 0) {
        uVar4 = uVar11;
      }
      if ((int)uVar5 < (int)uVar15) {
        uVar15 = uVar5;
      }
      piVar6 = (int *)(**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))
                                (*(longlong **)(param_1 + 0x30),local_48);
      uVar13 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x3c);
      uVar9 = piVar6[1] + uVar13;
      uVar5 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x38);
      uVar8 = (ulonglong)uVar5;
      iVar12 = *piVar6 + uVar5;
      if ((((int)uVar13 <= (int)uVar15) && ((int)uVar4 <= (int)uVar9)) &&
         (((int)uVar14 <= iVar12 && ((int)uVar5 <= iVar10)))) {
        if ((int)uVar14 <= (int)uVar5) {
          uVar14 = uVar5;
        }
        if (iVar12 < iVar10) {
          iVar10 = iVar12;
        }
        if ((int)uVar4 <= (int)uVar13) {
          uVar4 = uVar13;
        }
        if ((int)uVar9 < (int)uVar15) {
          uVar15 = uVar9;
        }
        uVar5 = *param_3;
        uVar8 = (ulonglong)uVar5;
        iVar12 = uVar15 + param_3[1];
        uVar14 = uVar5 + uVar14;
        iVar10 = iVar10 + uVar5;
        uVar4 = uVar4 + param_3[1];
        if (((-1 < iVar12) && ((int)uVar4 <= local_res8[0])) &&
           (((int)uVar14 <= iVar1 && (-1 < iVar10)))) {
          if (0 < (int)uVar14) {
            uVar7 = (ulonglong)uVar14;
          }
          *param_2 = (int)uVar7;
          if (iVar1 < iVar10) {
            iVar10 = iVar1;
          }
          param_2[2] = iVar10;
          if (0 < (int)uVar4) {
            uVar11 = uVar4;
          }
          param_2[1] = uVar11;
          if (local_res8[0] < iVar12) {
            iVar12 = local_res8[0];
          }
          param_2[3] = iVar12;
          return CONCAT71((int7)(uVar7 >> 8),1);
        }
      }
    }
  }
  return uVar8 & 0xffffffffffffff00;
}



// FUNCTION 1433b8550 FUN_1433b8550 body=281 status=ok
// SIG undefined FUN_1433b8550(void)

void FUN_1433b8550(longlong param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  FUN_1432dafc0(*param_2,(*(char *)(*(longlong *)(param_1 + 8) + 0x50) != '\0') + '\x0f',1);
  FUN_1432bfaf0(&local_28);
  local_28 = *(float *)(param_1 + 0x30);
  fStack_24 = *(float *)(param_1 + 0x34);
  fStack_20 = *(float *)(param_1 + 0x38);
  fStack_1c = *(float *)(param_1 + 0x3c);
  local_18 = *(float *)(param_1 + 0x40);
  fStack_14 = *(float *)(param_1 + 0x44);
  fStack_10 = *(float *)(param_1 + 0x48);
  fStack_c = *(float *)(param_1 + 0x4c);
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x50) == '\0') {
    fStack_1c = fStack_1c + fStack_c;
    local_28 = local_28 * fStack_1c;
    local_18 = local_18 * fStack_1c;
    fStack_24 = fStack_24 * fStack_1c;
    fStack_14 = fStack_14 * fStack_1c;
    fStack_20 = fStack_20 * fStack_1c;
    fStack_10 = fStack_10 * fStack_1c;
    fStack_1c = 1.0;
    fStack_c = 0.0;
  }
  (**(code **)(*(longlong *)*param_2 + 0x1f8))
            ((longlong *)*param_2,param_3 + 8,param_4 + 0x20,&local_28);
  return;
}



// FUNCTION 1433b86b0 FUN_1433b86b0 body=143 status=ok
// SIG undefined FUN_1433b86b0(void)

void FUN_1433b86b0(longlong param_1,undefined8 *param_2)

{
  undefined3 local_res8;
  undefined1 uStackX_b;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_1432dafc0(*param_2,0x10,1);
  uStackX_b = (undefined1)((uint)*(undefined4 *)(param_1 + 0x20) >> 0x18);
  local_18 = *(undefined4 *)(param_1 + 0x10);
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x50) == '\0') {
    uStackX_b = 0xff;
  }
  local_14 = *(undefined4 *)(param_1 + 0x14);
  local_10 = *(undefined4 *)(param_1 + 0x18);
  local_res8 = (undefined3)*(undefined4 *)(param_1 + 0x20);
  local_c = *(undefined4 *)(param_1 + 0x1c);
  (**(code **)(*(longlong *)*param_2 + 0x90))((longlong *)*param_2,&local_18,&local_res8,0);
  return;
}



// FUNCTION 1433b8750 FUN_1433b8750 body=384 status=ok
// SIG undefined FUN_1433b8750(void)

void FUN_1433b8750(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  uint uVar4;
  longlong lVar5;
  float local_88 [5];
  float fStack_74;
  float local_60 [5];
  float fStack_4c;
  float local_48;
  float local_34;
  float local_20;
  float local_c;
  
  pfVar3 = local_60;
  lVar5 = 2;
  do {
    pfVar3[-10] = 0.0;
    pfVar3[-9] = 0.0;
    pfVar3[-8] = 0.0;
    pfVar3[-7] = 0.0;
    pfVar3[-6] = 0.0;
    pfVar3[-5] = 0.0;
    pfVar3[-4] = 0.0;
    pfVar3[-3] = 0.0;
    pfVar3[-2] = 0.0;
    pfVar3[-1] = 0.0;
    pfVar3[0] = 0.0;
    pfVar3[1] = 0.0;
    pfVar3[2] = 0.0;
    pfVar3[3] = 0.0;
    pfVar3[4] = 0.0;
    pfVar3[5] = 0.0;
    pfVar3[-10] = 1.0;
    pfVar3[-5] = 1.0;
    *pfVar3 = 1.0;
    pfVar3[5] = 1.0;
    pfVar3 = pfVar3 + 0x10;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  uVar4 = 0x100;
  if (*(uint *)(param_1 + 0x30) < 0x100) {
    uVar4 = *(uint *)(param_1 + 0x30);
  }
  uVar1 = 0x100;
  if (*(uint *)(param_1 + 0x34) < 0x100) {
    uVar1 = *(uint *)(param_1 + 0x34);
  }
  uVar2 = 0x100;
  if (*(uint *)(param_1 + 0x38) < 0x100) {
    uVar2 = *(uint *)(param_1 + 0x38);
  }
  local_48 = (float)uVar4 * 0.00390625;
  uVar4 = 0x100;
  if (*(uint *)(param_1 + 0x3c) < 0x100) {
    uVar4 = *(uint *)(param_1 + 0x3c);
  }
  local_34 = (float)uVar1 * 0.00390625;
  local_20 = (float)uVar2 * 0.00390625;
  local_c = (float)uVar4 * 0.00390625;
  local_88[0] = 1.0 - local_48;
  fStack_74 = 1.0 - local_34;
  local_60[0] = 1.0 - local_20;
  fStack_4c = 1.0 - local_c;
  FUN_1432dafc0(*param_2,(*(char *)(*(longlong *)(param_1 + 8) + 0x50) != '\0') + '\x0f',1);
  (**(code **)(*(longlong *)*param_2 + 0x210))((longlong *)*param_2,param_3,param_4,local_88);
  return;
}



// FUNCTION 1433b88e0 FUN_1433b88e0 body=517 status=ok
// SIG undefined FUN_1433b88e0(void)

void FUN_1433b88e0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint *puVar4;
  float fVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_58 = 0x3f800000;
  uStack_50 = 0;
  local_48 = 0x3f80000000000000;
  uStack_40 = 0;
  cVar3 = (**(code **)(*param_1 + 0x60))();
  if (cVar3 == '\0') {
    puVar4 = (uint *)(**(code **)(*(longlong *)param_1[1] + 0x28))
                               ((longlong *)param_1[1],local_res8);
    fVar5 = (float)((int)param_1[4] - (int)param_1[3]) / (float)*puVar4;
    local_58._0_4_ = (float)local_58 * fVar5;
    local_58._4_4_ = local_58._4_4_ * fVar5;
    uStack_50._0_4_ = (float)uStack_50 * fVar5;
    uStack_50._4_4_ = uStack_50._4_4_ * fVar5;
    fVar5 = (float)(*(int *)((longlong)param_1 + 0x24) - *(int *)((longlong)param_1 + 0x1c)) /
            (float)puVar4[1];
    local_48._0_4_ = (float)local_48 * fVar5;
    local_48._4_4_ = local_48._4_4_ * fVar5;
    uStack_40._0_4_ = (float)uStack_40 * fVar5;
    uStack_40._4_4_ = uStack_40._4_4_ * fVar5;
    puVar4 = (uint *)(**(code **)(*(longlong *)param_1[1] + 0x28))
                               ((longlong *)param_1[1],local_res8);
    uVar1 = *puVar4;
    uVar2 = puVar4[1];
    puVar4 = (uint *)(**(code **)(*(longlong *)param_1[1] + 0x28))
                               ((longlong *)param_1[1],local_res10);
    uStack_50._4_4_ =
         uStack_50._4_4_ + ((float)(int)param_1[5] - (float)*puVar4 * 0.5) / (float)uVar1;
    local_58 = CONCAT44(local_58._4_4_ + local_58._4_4_,(float)local_58 + (float)local_58);
    uStack_50 = CONCAT44(uStack_50._4_4_ + uStack_50._4_4_,(float)uStack_50 + (float)uStack_50);
    local_48 = CONCAT44(local_48._4_4_ * -2.0,(float)local_48 * -2.0);
    uStack_40 = CONCAT44((uStack_40._4_4_ +
                         ((float)*(int *)((longlong)param_1 + 0x2c) - (float)puVar4[1] * 0.5) /
                         (float)uVar2) * -2.0,(float)uStack_40 * -2.0);
  }
  else {
    local_58 = 0x40000000;
    uStack_50 = 0xbf80000000000000;
    local_48 = 0xc000000000000000;
    uStack_40 = 0x3f80000000000000;
  }
  (**(code **)(*(longlong *)*param_2 + 0x220))
            ((longlong *)*param_2,param_3,param_4,&local_58,(int)param_1[7],param_1[6]);
  return;
}



// FUNCTION 1433b8af0 FUN_1433b8af0 body=220 status=ok
// SIG undefined FUN_1433b8af0(void)

void FUN_1433b8af0(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  float fVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  float local_c;
  
  fVar1 = (float)(**(code **)(*(longlong *)*param_2 + 0x140))();
  fVar1 = fVar1 * 2.0;
  local_10 = 0;
  local_14 = fVar1 + 0.0;
  local_18 = fVar1 * 0.0 + 0.0;
  local_28 = 0x40000000;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0xbf800000;
  local_c = (-0.0 - fVar1 * 0.5) + 0.0;
  FUN_1432dafc0(*param_2,(*(char *)(*(longlong *)(param_1 + 8) + 0x50) != '\0') + '\x0f',1);
  (**(code **)(*(longlong *)*param_2 + 0x228))
            ((longlong *)*param_2,*param_3,&local_28,param_4 + 0x20,0xffffffff);
  return;
}



// FUNCTION 1433b8c00 FUN_1433b8c00 body=89 status=ok
// SIG undefined FUN_1433b8c00(void)

undefined8 FUN_1433b8c00(undefined8 param_1,ulonglong param_2)

{
  FUN_1432d3f10();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1433b8c60 FUN_1433b8c60 body=106 status=ok
// SIG undefined FUN_1433b8c60(void)

longlong FUN_1433b8c60(longlong param_1,uint param_2)

{
  if (*(RefCountImpl **)(param_1 + 0x48) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x48));
  }
  FUN_1432d3f10(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1433b8cd0 FUN_1433b8cd0 body=1322 status=ok
// SIG undefined FUN_1433b8cd0(void)

void FUN_1433b8cd0(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  float *pfVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  undefined4 local_res8 [2];
  int local_res10;
  int local_res14;
  undefined1 local_res18 [8];
  undefined8 in_stack_fffffffffffffea8;
  undefined4 *puVar14;
  undefined4 uVar15;
  undefined8 local_148;
  float local_140;
  float local_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  float local_118;
  longlong local_114;
  longlong local_10c;
  float local_104;
  longlong local_100;
  longlong local_f8 [3];
  float local_e0 [6];
  longlong local_c8 [4];
  float local_a8 [2];
  undefined8 uStack_a0;
  float local_98;
  undefined8 uStack_94;
  float afStack_8c [21];
  
  uVar4 = (**(code **)(*(longlong *)*param_2 + 0x128))();
  local_128 = 0;
  uStack_120 = 0;
  (**(code **)(*param_1 + 0x48))(param_1,&local_128,local_res18);
  if (((int)uStack_120 - (int)local_128) * (uStack_120._4_4_ - local_128._4_4_) != 0) {
    local_f8[0] = 0;
    local_f8[1] = 0;
    local_f8[2] = 0;
    (**(code **)(*param_1 + 0x50))(param_1,local_f8,local_e0,&local_128);
    plVar10 = (longlong *)0x0;
    lVar9 = 3;
    lVar11 = 3;
    plVar6 = plVar10;
    do {
      plVar2 = *(longlong **)((longlong)local_f8 + (longlong)plVar6);
      plVar5 = plVar10;
      if (plVar2 != (longlong *)0x0) {
        plVar5 = (longlong *)(**(code **)(*plVar2 + 0xa8))(plVar2,uVar4);
      }
      uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffffea8 >> 0x20);
      *(longlong **)((longlong)local_c8 + (longlong)plVar6) = plVar5;
      plVar6 = plVar6 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    cVar3 = (**(code **)(*param_1 + 0x60))(param_1);
    plVar6 = plVar10;
    if (cVar3 != '\0') {
      local_res10 = (int)uStack_120 - (int)local_128;
      local_res14 = uStack_120._4_4_ - local_128._4_4_;
      plVar6 = (longlong *)
               (**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,&local_res10,0);
      puVar14 = local_res8;
      local_148 = 0;
      local_140 = (float)local_res10;
      local_res8[0] = 0;
      local_13c = (float)local_res14;
      (**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,plVar6,10,&local_148,puVar14)
      ;
      uVar15 = (undefined4)((ulonglong)puVar14 >> 0x20);
    }
    lVar11 = 3;
    puVar7 = &uStack_a0;
    do {
      puVar7[-1] = 0x3f800000;
      *puVar7 = 0;
      *(undefined4 *)(puVar7 + 1) = 0;
      *(undefined8 *)((longlong)puVar7 + 0xc) = 0x3f800000;
      *(undefined4 *)((longlong)puVar7 + 0x14) = 0;
      puVar7 = puVar7 + 4;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    pfVar8 = (float *)((longlong)&uStack_a0 + 4);
    do {
      lVar11 = *(longlong *)((longlong)local_c8 + (longlong)plVar10);
      if (lVar11 != 0) {
        fVar12 = (float)((int)uStack_120 - (int)local_128) / (float)*(uint *)(lVar11 + 0x38);
        fVar13 = (float)(uStack_120._4_4_ - local_128._4_4_) / (float)*(uint *)(lVar11 + 0x3c);
        pfVar8[-3] = fVar12 * pfVar8[-3];
        pfVar8[-2] = fVar12 * pfVar8[-2];
        pfVar8[-1] = fVar12 * pfVar8[-1];
        *pfVar8 = fVar12 * *pfVar8;
        fVar12 = *(float *)((longlong)local_e0 + (longlong)plVar10);
        pfVar8[1] = fVar13 * pfVar8[1];
        pfVar8[2] = fVar13 * pfVar8[2];
        pfVar8[3] = fVar13 * pfVar8[3];
        pfVar8[4] = fVar13 * pfVar8[4];
        uVar1 = *(uint *)(lVar11 + 0x3c);
        fVar13 = *(float *)((longlong)(local_e0 + 1) + (longlong)plVar10);
        *pfVar8 = fVar12 / (float)*(uint *)(lVar11 + 0x38) + *pfVar8;
        pfVar8[4] = fVar13 / (float)uVar1 + pfVar8[4];
      }
      plVar10 = plVar10 + 1;
      pfVar8 = pfVar8 + 8;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    (**(code **)(*param_1 + 0x58))(param_1,param_2,local_c8,local_a8);
    if (cVar3 != '\0') {
      (**(code **)(*(longlong *)*param_2 + 0x28))((longlong *)*param_2,2);
      local_118 = (float)(uint)((int)plVar6[7] - (int)plVar6[6]) / (float)*(uint *)(plVar6 + 5);
      local_104 = (float)(uint)(*(int *)((longlong)plVar6 + 0x3c) -
                               *(int *)((longlong)plVar6 + 0x34)) /
                  (float)*(uint *)((longlong)plVar6 + 0x2c);
      fStack_134 = (float)(uStack_120._4_4_ - local_128._4_4_);
      local_148._0_4_ = (float)((int)uStack_120 - (int)local_128);
      local_140 = (float)local_148 * 0.0;
      local_138 = fStack_134 * 0.0;
      local_13c = local_140 + (float)(int)local_128;
      fStack_12c = local_138 + (float)local_128._4_4_;
      fStack_130 = local_138;
      local_114 = lVar9;
      local_10c = lVar9;
      local_100 = lVar9;
      local_148._4_4_ = local_140;
      lVar9 = (**(code **)(*(longlong *)*param_2 + 0x148))();
      fVar12 = 1.0 / (float)*(int *)(lVar9 + 0x10);
      fVar13 = 1.0 / (float)*(int *)(lVar9 + 0x14);
      local_148._0_4_ = (float)local_148 * fVar12;
      local_148._4_4_ = local_148._4_4_ * fVar12;
      local_140 = local_140 * fVar12;
      local_138 = local_138 * fVar13;
      fStack_134 = fStack_134 * fVar13;
      local_13c = local_13c * fVar12 + -0.5;
      fStack_130 = fStack_130 * fVar13;
      fStack_12c = fStack_12c * fVar13 + -0.5;
      fVar12 = (float)(**(code **)(*(longlong *)*param_2 + 0x140))();
      plVar10 = (longlong *)*param_2;
      fVar12 = fVar12 * 2.0;
      local_148 = CONCAT44(local_148._4_4_ + local_148._4_4_,(float)local_148 + (float)local_148);
      local_140 = local_140 + local_140;
      local_13c = local_13c + local_13c;
      local_138 = local_138 * fVar12;
      fStack_134 = fStack_134 * fVar12;
      fStack_130 = fStack_130 * fVar12;
      fStack_12c = fStack_12c * fVar12;
      lVar9 = *plVar10;
      uVar4 = (**(code **)(*plVar6 + 0x18))(plVar6);
      (**(code **)(lVar9 + 0x228))(plVar10,uVar4,&local_148,&local_118,CONCAT44(uVar15,0xffffffff));
      (**(code **)(*plVar6 + 0x28))(plVar6,0);
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  return;
}



// FUNCTION 1433b9200 FUN_1433b9200 body=214 status=ok
// SIG undefined FUN_1433b9200(void)

void FUN_1433b9200(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  uint local_res8;
  uint local_resc;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  plVar2 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x128))();
  local_38 = (longlong *)(**(code **)(*plVar2 + 0x88))(plVar2);
  local_30 = 0;
  local_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  local_28 = param_3;
  (**(code **)(*local_38 + 8))(local_38,&local_38);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8),&local_res8);
  uVar4 = 0;
  if (local_resc != 0) {
    do {
      (**(code **)(*local_38 + 0x10))(local_38,&local_38,uVar4);
      uVar3 = 0;
      if (local_res8 != 0) {
        do {
          (**(code **)(*local_38 + 0x18))(local_38,&local_38,uVar3,uVar1);
          uVar3 = uVar3 + 1;
        } while (uVar3 < local_res8);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < local_resc);
  }
  return;
}



// FUNCTION 1433b92e0 FUN_1433b92e0 body=304 status=ok
// SIG undefined FUN_1433b92e0(void)

longlong FUN_1433b92e0(longlong param_1,undefined4 *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  int *piVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int local_res8 [2];
  
  uVar10 = 0;
  iVar14 = 0;
  plVar7 = *(longlong **)(param_1 + 0x10);
  if (plVar7 == (longlong *)0x0) {
    local_res8[0] = 0;
    local_res8[1] = 0;
    piVar9 = local_res8;
  }
  else {
    piVar9 = (int *)(**(code **)(*plVar7 + 0x28))(plVar7,local_res8);
  }
  plVar7 = *(longlong **)(param_1 + 8);
  iVar2 = *piVar9;
  iVar13 = piVar9[1];
  if (plVar7 == (longlong *)0x0) {
    local_res8[0] = 0;
    local_res8[1] = 0;
    piVar9 = local_res8;
  }
  else {
    piVar9 = (int *)(**(code **)(*plVar7 + 0x28))(plVar7,local_res8);
  }
  iVar3 = *piVar9;
  iVar4 = piVar9[1];
  iVar8 = *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x1c);
  iVar11 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x18);
  param_3[1] = iVar8;
  *param_3 = iVar11;
  iVar15 = *(int *)(param_1 + 0x1c);
  if ((((iVar15 <= iVar13) && (iVar5 = *(int *)(param_1 + 0x24), -1 < iVar5)) &&
      (iVar6 = *(int *)(param_1 + 0x20), -1 < iVar6)) &&
     (iVar12 = *(int *)(param_1 + 0x18), iVar12 <= iVar2)) {
    if (iVar12 < 0) {
      iVar12 = iVar14;
    }
    if (iVar6 < iVar2) {
      iVar2 = iVar6;
    }
    if (iVar15 < 0) {
      iVar15 = iVar14;
    }
    if (iVar5 < iVar13) {
      iVar13 = iVar5;
    }
    uVar1 = iVar11 + iVar12;
    iVar11 = iVar11 + iVar2;
    iVar15 = iVar15 + iVar8;
    iVar13 = iVar13 + iVar8;
    if (((-1 < iVar13) && (iVar15 <= iVar4)) && (((int)uVar1 <= iVar3 && (-1 < iVar11)))) {
      if (0 < (int)uVar1) {
        uVar10 = (ulonglong)uVar1;
      }
      *param_2 = (int)uVar10;
      if (iVar3 < iVar11) {
        iVar11 = iVar3;
      }
      param_2[2] = iVar11;
      if (0 < iVar15) {
        iVar14 = iVar15;
      }
      param_2[1] = iVar14;
      if (iVar4 < iVar13) {
        iVar13 = iVar4;
      }
      param_2[3] = iVar13;
      return CONCAT71((int7)(uVar10 >> 8),1);
    }
  }
  return (ulonglong)(uint3)((uint)iVar8 >> 8) << 8;
}



// FUNCTION 1433b9420 FUN_1433b9420 body=763 status=ok
// SIG undefined FUN_1433b9420(void)

void FUN_1433b9420(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  undefined4 local_res20;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  int local_e8;
  int local_e4;
  longlong *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  uVar1 = *param_4;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  FUN_1432c7ad0(param_3,0,&local_80);
  FUN_1432c7ad0(uVar1,0,&local_60);
  local_f8 = 0;
  uStack_f0 = 0;
  cVar2 = (**(code **)(*param_1 + 0x48))(param_1,&local_f8,&local_e8);
  if (cVar2 != '\0') {
    if ((int)param_1[6] < 9) {
      bVar8 = (&DAT_1467ce600)[(int)param_1[6]];
    }
    else {
      bVar8 = 0xff;
    }
    if (*(int *)((longlong)param_1 + 0x34) < 9) {
      bVar7 = (&DAT_1467ce600)[*(int *)((longlong)param_1 + 0x34)];
    }
    else {
      bVar7 = 0xff;
    }
    if ((bVar8 != 0xff) && (bVar7 != 0xff)) {
      plVar3 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x128))();
      local_e0 = (longlong *)(**(code **)(*plVar3 + 0x88))(plVar3);
      local_d8 = 0;
      local_c8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = param_3;
      (**(code **)(*local_e0 + 8))(local_e0,&local_e0);
      plVar3 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x128))();
      uVar1 = *param_4;
      local_b0 = (longlong *)(**(code **)(*plVar3 + 0x88))(plVar3);
      local_a8 = 0;
      local_98 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = uVar1;
      (**(code **)(*local_b0 + 8))(local_b0,&local_b0);
      iVar5 = local_f8._4_4_;
      if (local_f8._4_4_ < uStack_f0._4_4_) {
        do {
          (**(code **)(*local_e0 + 0x10))(local_e0,&local_e0,iVar5);
          (**(code **)(*local_b0 + 0x10))(local_b0,&local_b0,iVar5 - local_e4);
          if ((int)local_f8 < (int)uStack_f0) {
            iVar6 = (int)local_f8;
            do {
              (**(code **)(*local_e0 + 0x28))(local_e0,&local_res20,&local_e0,iVar6);
              (**(code **)(*local_b0 + 0x28))(local_b0,local_108 + 4,&local_b0,iVar6 - local_e8);
              local_108[0] = local_res20._2_1_;
              local_108[1] = local_res20._1_1_;
              local_108[2] = (undefined1)local_res20;
              local_108[3] = local_res20._3_1_;
              local_108[8] = local_108[6];
              local_108[9] = local_108[5];
              local_108[10] = local_108[4];
              local_108[0xb] = local_108[7];
              if (*(char *)(param_1[2] + 0x50) == '\0') {
                local_108[0xb] = 0xff;
              }
              local_108[bVar7] = local_108[(ulonglong)bVar8 + 8];
              uVar4 = local_108[3];
              if (*(char *)(param_1[1] + 0x50) == '\0') {
                uVar4 = 0xff;
              }
              local_res20 = CONCAT31(CONCAT21(CONCAT11(uVar4,local_108[0]),local_108[1]),
                                     local_108[2]);
              (**(code **)(*local_e0 + 0x18))(local_e0,&local_e0,iVar6,local_res20);
              iVar6 = iVar6 + 1;
            } while (iVar6 < (int)uStack_f0);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < uStack_f0._4_4_);
      }
    }
  }
  return;
}



// FUNCTION 1433b9730 FUN_1433b9730 body=975 status=ok
// SIG undefined FUN_1433b9730(void)

void FUN_1433b9730(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  undefined8 local_res8;
  undefined4 local_108;
  int local_100;
  int iStack_fc;
  int local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_e8 = 0;
  uStack_e0 = 0;
  cVar4 = (**(code **)(*param_1 + 0x48))(param_1,&local_e8,&local_100);
  if (cVar4 != '\0') {
    lVar1 = param_1[6];
    plVar6 = param_4 + 1;
    if (lVar1 == 0) {
      plVar6 = param_4;
    }
    lVar15 = *plVar6;
    if (lVar1 == 0) {
      local_res8 = CONCAT44(iStack_fc,local_100);
      local_f8 = local_100;
      iVar14 = iStack_fc;
    }
    else {
      local_f8 = (local_100 - (int)param_1[7]) + (int)param_1[3];
      iVar14 = (iStack_fc - *(int *)((longlong)param_1 + 0x3c)) + *(int *)((longlong)param_1 + 0x1c)
      ;
    }
    plVar6 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x128))();
    local_70 = (longlong *)(**(code **)(*plVar6 + 0x88))();
    local_68 = 0;
    local_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_60 = param_3;
    (**(code **)(*local_70 + 8))(local_70,&local_70);
    plVar6 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x128))();
    lVar2 = *param_4;
    local_d0 = (longlong *)(**(code **)(*plVar6 + 0x88))(plVar6);
    local_c8 = 0;
    local_b8 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = lVar2;
    (**(code **)(*local_d0 + 8))(local_d0,&local_d0);
    if (lVar1 == 0) {
      lVar15 = *param_4;
    }
    plVar6 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x128))();
    local_a0 = (longlong *)(**(code **)(*plVar6 + 0x88))(plVar6);
    local_98 = 0;
    local_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = lVar15;
    (**(code **)(*local_a0 + 8))(local_a0,&local_a0);
    if (local_e8._4_4_ < uStack_e0._4_4_) {
      iVar13 = local_e8._4_4_;
      do {
        if ((-1 < iVar13 - iStack_fc) &&
           (iVar13 - iStack_fc < *(int *)(*(longlong *)(local_c0 + 0x10) + 4))) {
          (**(code **)(*local_70 + 0x10))(local_70,&local_70,iVar13);
          (**(code **)(*local_d0 + 0x10))(local_d0,&local_d0,iVar13 - iStack_fc);
          if (lVar1 != 0) {
            if ((iVar13 - iVar14 < 0) ||
               (*(int *)(*(longlong *)(local_90 + 0x10) + 4) <= iVar13 - iVar14))
            goto LAB_1433b9ac4;
            (**(code **)(*local_a0 + 0x10))(local_a0,&local_a0);
          }
          iVar3 = local_f8;
          if ((int)local_e8 < (int)uStack_e0) {
            iVar12 = (int)local_e8;
            do {
              if ((-1 < iVar12 - local_100) && (iVar12 - local_100 < **(int **)(local_c0 + 0x10))) {
                (**(code **)(*local_d0 + 0x28))(local_d0,&local_res8,&local_d0);
                uVar8 = local_res8._3_1_;
                if (*(char *)(param_1[2] + 0x50) == '\0') {
                  uVar8 = 0xff;
                }
                local_res8._0_4_ = CONCAT13(uVar8,(undefined3)local_res8);
                local_108 = (uint)local_res8;
                if (lVar1 != 0) {
                  if ((iVar12 - iVar3 < 0) || (**(int **)(local_90 + 0x10) <= iVar12 - iVar3))
                  goto LAB_1433b9ab8;
                  (**(code **)(*local_a0 + 0x28))(local_a0,&local_f0,&local_a0);
                  local_108 = local_f0;
                }
                (**(code **)(*local_70 + 0x28))(local_70,&local_f4,&local_70,iVar12);
                if (lVar1 == 0) {
                  iVar5 = 0x100;
                }
                else {
                  iVar5 = (local_108 >> 0x18) + 1;
                }
                uVar10 = (uint)local_res8._3_1_ * iVar5 >> 8;
                bVar11 = (byte)((uint)local_res8._3_1_ * iVar5 >> 8);
                if ((char)param_1[8] != '\0') {
                  uVar9 = uVar10 & 0xff;
                  bVar11 = (byte)(longlong)
                                 ((float)(int)(0xff - uVar9) * ((float)(local_f4 >> 0x18) / 255.0) +
                                 (float)uVar9);
                }
                if (*(char *)(param_1[1] + 0x50) == '\0') {
                  bVar11 = 0xff;
                }
                local_108 = (uint)local_res8;
                local_ec = local_f4;
                puVar7 = (undefined4 *)
                         Scaleform::Render::Color::Blend
                                   (local_d8,&local_ec,&local_108,
                                    (float)(uVar10 & 0xff) / (float)bVar11);
                local_108 = CONCAT13(bVar11,(int3)*puVar7);
                (**(code **)(*local_70 + 0x18))(local_70,&local_70,iVar12,local_108);
              }
LAB_1433b9ab8:
              iVar12 = iVar12 + 1;
            } while (iVar12 < (int)uStack_e0);
          }
        }
LAB_1433b9ac4:
        iVar13 = iVar13 + 1;
      } while (iVar13 < uStack_e0._4_4_);
    }
  }
  return;
}



// FUNCTION 1433b9b10 FUN_1433b9b10 body=926 status=ok
// SIG undefined FUN_1433b9b10(void)

void FUN_1433b9b10(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  char cVar6;
  undefined1 uVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  byte local_res8;
  byte local_res9;
  byte local_resa;
  byte local_resb;
  undefined4 local_res20;
  undefined8 local_128;
  undefined8 uStack_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  int local_f8;
  int local_f4;
  longlong *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  uVar1 = *param_4;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  FUN_1432c7ad0(param_3,0,&local_90);
  FUN_1432c7ad0(uVar1,0,&local_70);
  local_108 = 0;
  uStack_100 = 0;
  cVar6 = (**(code **)(*param_1 + 0x48))(param_1,&local_108,&local_f8);
  if (cVar6 != '\0') {
    FUN_1432bfaf0(&local_128);
    local_128 = param_1[6];
    lVar5 = param_1[7];
    local_118 = *(float *)(param_1 + 8);
    fStack_114 = *(float *)((longlong)param_1 + 0x44);
    fStack_110 = *(float *)(param_1 + 9);
    fStack_10c = *(float *)((longlong)param_1 + 0x4c);
    uStack_120 = lVar5;
    if (*(char *)(param_1[1] + 0x50) == '\0') {
      uStack_120._4_4_ = (float)((ulonglong)lVar5 >> 0x20);
      uStack_120._4_4_ = uStack_120._4_4_ + fStack_10c;
      fStack_10c = 0.0;
      local_118 = local_118 * uStack_120._4_4_;
      local_128._4_4_ = (float)((ulonglong)local_128 >> 0x20);
      fStack_114 = fStack_114 * uStack_120._4_4_;
      local_128 = CONCAT44(local_128._4_4_ * uStack_120._4_4_,(float)local_128 * uStack_120._4_4_);
      uStack_120._0_4_ = (float)lVar5;
      fStack_110 = fStack_110 * uStack_120._4_4_;
      uStack_120 = CONCAT44(0x3f800000,(float)uStack_120 * uStack_120._4_4_);
    }
    plVar8 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x128))();
    local_c0 = (longlong *)(**(code **)(*plVar8 + 0x88))(plVar8);
    local_b8 = 0;
    local_a8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = param_3;
    (**(code **)(*local_c0 + 8))(local_c0,&local_c0);
    plVar8 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x128))();
    uVar1 = *param_4;
    local_f0 = (longlong *)(**(code **)(*plVar8 + 0x88))(plVar8);
    local_e8 = 0;
    local_d8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = uVar1;
    (**(code **)(*local_f0 + 8))(local_f0,&local_f0);
    if (local_108._4_4_ < uStack_100._4_4_) {
      iVar9 = local_108._4_4_;
      do {
        (**(code **)(*local_c0 + 0x10))(local_c0,&local_c0,iVar9);
        (**(code **)(*local_f0 + 0x10))(local_f0,&local_f0,iVar9 - local_f4);
        iVar10 = (int)local_108;
        if ((int)local_108 < (int)uStack_100) {
          do {
            (**(code **)(*local_f0 + 0x28))(local_f0,&local_res8,&local_f0,iVar10 - local_f8);
            if (*(char *)(param_1[2] + 0x50) == '\0') {
              local_resb = 0xff;
            }
            fVar12 = (local_118 + ((float)local_resa / 255.0) * (float)local_128) * 256.0;
            if (255.0 <= fVar12) {
              fVar12 = 255.0;
            }
            fVar2 = 0.0;
            if (0.0 <= fVar12) {
              fVar2 = fVar12;
            }
            fVar12 = (fStack_114 + ((float)local_res9 / 255.0) * local_128._4_4_) * 256.0;
            if (255.0 <= fVar12) {
              fVar12 = 255.0;
            }
            fVar3 = 0.0;
            if (0.0 <= fVar12) {
              fVar3 = fVar12;
            }
            fVar12 = (fStack_110 + ((float)local_res8 / 255.0) * (float)uStack_120) * 256.0;
            if (255.0 <= fVar12) {
              fVar12 = 255.0;
            }
            fVar4 = 0.0;
            if (0.0 <= fVar12) {
              fVar4 = fVar12;
            }
            fVar12 = (fStack_10c + ((float)local_resb / 255.0) * uStack_120._4_4_) * 256.0;
            if (255.0 <= fVar12) {
              fVar12 = 255.0;
            }
            fVar11 = 0.0;
            if (0.0 <= fVar12) {
              fVar11 = fVar12;
            }
            uVar7 = (undefined1)(longlong)fVar11;
            if (*(char *)(param_1[1] + 0x50) == '\0') {
              uVar7 = 0xff;
            }
            local_res20 = CONCAT13(uVar7,CONCAT21(CONCAT11((char)(longlong)fVar2,
                                                           (char)(longlong)fVar3),
                                                  (char)(longlong)fVar4));
            (**(code **)(*local_c0 + 0x18))(local_c0,&local_c0,iVar10,local_res20);
            iVar10 = iVar10 + 1;
          } while (iVar10 < (int)uStack_100);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < uStack_100._4_4_);
    }
  }
  return;
}



// FUNCTION 1433b9ec0 FUN_1433b9ec0 body=681 status=ok
// SIG undefined FUN_1433b9ec0(void)

void FUN_1433b9ec0(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  longlong lVar11;
  char local_res10;
  char local_res11;
  char local_res12;
  char local_res13;
  char local_res18;
  char local_res19;
  char local_res1a;
  char local_res1b;
  undefined1 local_res20 [3];
  char cStackX_23;
  longlong *local_128;
  undefined8 local_120;
  longlong local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78 [4];
  undefined1 local_58 [32];
  
  lVar1 = *param_4;
  puVar4 = local_78 + 1;
  lVar2 = param_4[1];
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  lVar11 = 2;
  local_80 = 0;
  do {
    puVar4[-1] = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4 = puVar4 + 4;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  FUN_1432c7ad0(param_3,0,&local_98);
  FUN_1432c7ad0(lVar1,0,local_78);
  FUN_1432c7ad0(lVar2,0,local_58);
  plVar5 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x128))();
  local_c8 = (longlong *)(**(code **)(*plVar5 + 0x88))(plVar5);
  local_c0 = 0;
  local_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = param_3;
  (**(code **)(*local_c8 + 8))(local_c8,&local_c8);
  plVar5 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x128))();
  lVar2 = *param_4;
  local_128 = (longlong *)(**(code **)(*plVar5 + 0x88))(plVar5);
  local_120 = 0;
  local_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = lVar2;
  (**(code **)(*local_128 + 8))(local_128,&local_128);
  plVar5 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x128))();
  lVar2 = param_4[1];
  local_f8 = (longlong *)(**(code **)(*plVar5 + 0x88))(plVar5);
  local_f0 = 0;
  local_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = lVar2;
  (**(code **)(*local_f8 + 8))(local_f8,&local_f8);
  uVar9 = 0;
  if (*(int *)(*(longlong *)(lVar1 + 0x10) + 4) != 0) {
    do {
      (**(code **)(*local_c8 + 0x10))(local_c8,&local_c8,uVar9);
      (**(code **)(*local_128 + 0x10))(local_128,&local_128,uVar9);
      (**(code **)(*local_f8 + 0x10))(local_f8,&local_f8,uVar9);
      uVar8 = 0;
      if (**(int **)(lVar1 + 0x10) != 0) {
        do {
          (**(code **)(*local_128 + 0x28))(local_128,&local_res10,&local_128,uVar8);
          (**(code **)(*local_f8 + 0x28))(local_f8,&local_res18,&local_f8,uVar8);
          cVar3 = -1;
          if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x50) != '\0') {
            cVar3 = local_res13;
          }
          cVar7 = -1;
          if (*(char *)(*(longlong *)(param_1 + 0x30) + 0x50) != '\0') {
            cVar7 = local_res1b;
          }
          bVar6 = local_res11 - local_res19;
          cVar3 = cVar3 - cVar7;
          cVar7 = local_res10 - local_res18;
          cVar10 = local_res12 - local_res1a;
          if ((((cVar10 == '\0') && (bVar6 == 0)) && (cVar7 == '\0')) && (cVar3 != '\0')) {
            cVar10 = -1;
            bVar6 = 0xff;
            cVar7 = -1;
          }
          else {
            cVar3 = -1;
          }
          local_res20 = (undefined1  [3])((uint3)bVar6 << 8);
          _local_res20 = CONCAT13(cVar3,local_res20);
          _local_res20 = CONCAT31(stack0x00000021,cVar7);
          local_res20 = (undefined1  [3])CONCAT12(cVar10,local_res20._0_2_);
          _local_res20 = CONCAT13(cVar3,local_res20);
          (**(code **)(*local_c8 + 0x18))(local_c8,&local_c8,uVar8,_local_res20);
          uVar8 = uVar8 + 1;
        } while (uVar8 < **(uint **)(lVar1 + 0x10));
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(*(longlong *)(lVar1 + 0x10) + 4));
  }
  return;
}



// FUNCTION 1433ba170 FUN_1433ba170 body=317 status=ok
// SIG undefined FUN_1433ba170(void)

void FUN_1433ba170(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_res8;
  int iStackX_c;
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  plVar2 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x128))();
  local_48 = (longlong *)(**(code **)(*plVar2 + 0x88))(plVar2);
  local_40 = 0;
  local_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = param_3;
  (**(code **)(*local_48 + 8))(local_48,&local_48);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8),&local_res8);
  iVar5 = *(int *)(param_1 + 0x14);
  if ((((iVar5 <= iStackX_c) && (iVar6 = *(int *)(param_1 + 0x1c), -1 < iVar6)) &&
      (iVar1 = *(int *)(param_1 + 0x18), -1 < iVar1)) &&
     (iVar7 = *(int *)(param_1 + 0x10), iVar7 <= local_res8)) {
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    iVar3 = local_res8;
    if (iVar1 < local_res8) {
      iVar3 = iVar1;
    }
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    uVar4 = *(uint *)(param_1 + 0x20);
    iVar1 = iStackX_c;
    if (iVar6 < iStackX_c) {
      iVar1 = iVar6;
    }
    if (*(char *)(*(longlong *)(param_1 + 8) + 0x50) == '\0') {
      uVar4 = uVar4 | 0xff000000;
    }
    for (; iVar5 < iVar1; iVar5 = iVar5 + 1) {
      (**(code **)(*local_48 + 0x10))(local_48,&local_48,iVar5);
      for (iVar6 = iVar7; iVar6 < iVar3; iVar6 = iVar6 + 1) {
        (**(code **)(*local_48 + 0x18))(local_48,&local_48,iVar6,uVar4);
      }
    }
  }
  return;
}



// FUNCTION 1433ba2c0 FUN_1433ba2c0 body=1060 status=ok
// SIG undefined FUN_1433ba2c0(void)

void FUN_1433ba2c0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined4 *local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  uint local_b0;
  int local_ac;
  int local_a8 [2];
  int local_a0;
  int iStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8),&local_a0);
  if ((((*(int *)(param_1 + 0x10) <= local_a0) && (-1 < *(int *)(param_1 + 0x10))) &&
      (*(int *)(param_1 + 0x14) <= iStack_9c)) && (-1 < *(int *)(param_1 + 0x14))) {
    local_b0 = *(uint *)(param_1 + 0x18);
    if (*(char *)(*(longlong *)(param_1 + 8) + 0x50) == '\0') {
      local_b0 = local_b0 | 0xff000000;
    }
    plVar8 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x128))();
    local_58 = (longlong *)(**(code **)(*plVar8 + 0x88))(plVar8);
    local_50 = 0;
    local_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_48 = param_3;
    (**(code **)(*local_58 + 8))(local_58,&local_58);
    plVar8 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x128))();
    local_88 = (longlong *)(**(code **)(*plVar8 + 0x88))(plVar8);
    local_80 = 0;
    local_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = param_3;
    (**(code **)(*local_88 + 8))(local_88,&local_88);
    (**(code **)(*local_88 + 0x10))(local_88,&local_88,*(undefined4 *)(param_1 + 0x14));
    (**(code **)(*local_88 + 0x28))(local_88,&local_ac,&local_88,*(undefined4 *)(param_1 + 0x10));
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = *(undefined4 *)(param_1 + 0x14);
    local_c8 = (undefined4 *)0x0;
    local_c0 = 0;
    local_b8 = 0;
    FUN_1432bc070(&local_c8,&local_c8,1);
    local_c0 = 1;
    uVar11 = 1;
    if (local_c8 != (undefined4 *)0x0) {
      *local_c8 = uVar3;
      local_c8[1] = uVar4;
    }
    do {
      uVar12 = uVar11 - 1;
      iVar5 = local_c8[uVar11 * 2 + -2];
      iVar6 = local_c8[uVar11 * 2 + -1];
      if (uVar12 < uVar11) {
        uVar14 = uVar12;
        if (uVar12 < local_b8 >> 1) {
LAB_1433ba468:
          FUN_1432bc070(&local_c8,&local_c8,uVar14);
        }
      }
      else if (local_b8 < uVar12) {
        uVar14 = (uVar12 >> 2) + uVar12;
        goto LAB_1433ba468;
      }
      iVar13 = iVar5 + 1;
      iVar1 = iVar6 + 1;
      local_98 = 0;
      uStack_90 = 0;
      if (((iStack_9c < iVar6) || (iVar1 < 0)) || ((iVar13 < 0 || (local_a0 < iVar5)))) {
        uStack_90._4_4_ = 0;
        uStack_90._0_4_ = 0;
        local_98._4_4_ = 0;
        local_98._0_4_ = 0;
        iVar7 = uStack_90._4_4_;
        iVar13 = local_98._4_4_;
        iVar9 = (int)uStack_90;
        iVar10 = (int)local_98;
      }
      else {
        iVar10 = iVar5;
        if (iVar5 < 0) {
          iVar10 = 0;
        }
        iVar9 = local_a0;
        if (iVar13 < local_a0) {
          iVar9 = iVar13;
        }
        iVar13 = iVar6;
        if (iVar6 < 0) {
          iVar13 = 0;
        }
        iVar7 = iStack_9c;
        if (iVar1 < iStack_9c) {
          iVar7 = iVar1;
        }
      }
      local_c0 = uVar12;
      if (0 < (iVar7 - iVar13) * (iVar9 - iVar10)) {
        (**(code **)(*local_88 + 0x10))(local_88,&local_88,iVar6);
        iVar13 = local_ac;
        (**(code **)(*local_88 + 0x28))(local_88,local_a8,&local_88,iVar5);
        if (local_a8[0] == iVar13) {
          (**(code **)(*local_58 + 0x10))(local_58,&local_58,iVar6);
          (**(code **)(*local_58 + 0x18))(local_58,&local_58,iVar5,local_b0);
          if (uVar11 < uVar12) {
            uVar12 = uVar11;
            if (uVar11 < local_b8 >> 1) {
LAB_1433ba56e:
              FUN_1432bc070(&local_c8,&local_c8,uVar12);
            }
          }
          else if (local_b8 < uVar11) {
            uVar12 = (uVar11 >> 2) + uVar11;
            goto LAB_1433ba56e;
          }
          piVar2 = local_c8 + uVar11 * 2 + -2;
          if (piVar2 != (int *)0x0) {
            *piVar2 = iVar5 + -1;
            piVar2[1] = iVar6;
          }
          uVar12 = uVar11 + 1;
          if (uVar12 < uVar11) {
            uVar14 = uVar12;
            if (uVar12 < local_b8 >> 1) {
LAB_1433ba5c4:
              local_c0 = uVar11;
              FUN_1432bc070(&local_c8,&local_c8,uVar14);
            }
          }
          else if (local_b8 < uVar12) {
            uVar14 = (uVar12 >> 2) + uVar12;
            goto LAB_1433ba5c4;
          }
          piVar2 = local_c8 + uVar12 * 2 + -2;
          if (piVar2 != (int *)0x0) {
            *piVar2 = iVar5;
            piVar2[1] = iVar6 + -1;
          }
          uVar14 = uVar11 + 2;
          if (uVar14 < uVar12) {
            uVar15 = uVar14;
            if (uVar14 < local_b8 >> 1) {
LAB_1433ba617:
              local_c0 = uVar12;
              FUN_1432bc070(&local_c8,&local_c8,uVar15);
            }
          }
          else if (local_b8 < uVar14) {
            uVar15 = (uVar14 >> 2) + uVar14;
            goto LAB_1433ba617;
          }
          piVar2 = local_c8 + uVar14 * 2 + -2;
          if (piVar2 != (int *)0x0) {
            *piVar2 = iVar5;
            piVar2[1] = iVar1;
          }
          uVar12 = uVar11 + 3;
          if (uVar12 < uVar14) {
            uVar11 = uVar12;
            if (uVar12 < local_b8 >> 1) {
LAB_1433ba66a:
              local_c0 = uVar14;
              FUN_1432bc070(&local_c8,&local_c8,uVar11);
            }
          }
          else if (local_b8 < uVar12) {
            uVar11 = (uVar12 >> 2) + uVar12;
            goto LAB_1433ba66a;
          }
          piVar2 = local_c8 + uVar12 * 2 + -2;
          local_c0 = uVar12;
          if (piVar2 != (int *)0x0) {
            piVar2[1] = iVar6;
            *piVar2 = iVar5 + 1;
          }
        }
      }
      uVar11 = uVar12;
    } while (uVar12 != 0);
    if (local_c8 != (undefined4 *)0x0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
  }
  return;
}



// FUNCTION 1433ba6f0 FUN_1433ba6f0 body=392 status=ok
// SIG undefined FUN_1433ba6f0(void)

void FUN_1433ba6f0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint local_res8 [2];
  uint local_res10;
  uint local_res14;
  longlong *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  plVar6 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x128))();
  local_68 = (longlong *)(**(code **)(*plVar6 + 0x88))(plVar6);
  local_60 = 0;
  local_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = param_3;
  (**(code **)(*local_68 + 8))(local_68,&local_68);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8),&local_res10);
  bVar2 = false;
  uVar12 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = local_res14;
  uVar11 = local_res10;
  bVar4 = false;
  if (local_res14 != 0) {
    do {
      bVar2 = bVar4;
      (**(code **)(*local_68 + 0x10))(local_68,&local_68,uVar9);
      uVar7 = 0;
      if (local_res10 != 0) {
        do {
          (**(code **)(*local_68 + 0x28))(local_68,local_res8,&local_68,uVar7);
          uVar5 = *(uint *)(param_1 + 0x10) & local_res8[0];
          uVar3 = uVar10;
          if (*(char *)(param_1 + 0x18) == '\0') {
            if (uVar5 != *(uint *)(param_1 + 0x14)) goto LAB_1433ba7e7;
          }
          else if (uVar5 == *(uint *)(param_1 + 0x14)) {
LAB_1433ba7e7:
            bVar2 = true;
            uVar3 = uVar7;
            if ((int)uVar11 < (int)uVar7) {
              uVar3 = uVar11;
            }
            uVar11 = uVar3;
            uVar3 = uVar9;
            if ((int)uVar8 < (int)uVar9) {
              uVar3 = uVar8;
            }
            uVar8 = uVar3;
            uVar3 = uVar7 + 1;
            if ((int)(uVar7 + 1) < (int)uVar12) {
              uVar3 = uVar12;
            }
            uVar12 = uVar3;
            uVar3 = uVar9 + 1;
            if ((int)(uVar9 + 1) < (int)uVar10) {
              uVar3 = uVar10;
            }
          }
          uVar10 = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar7 < local_res10);
      }
      uVar9 = uVar9 + 1;
      bVar4 = bVar2;
    } while (uVar9 < local_res14);
  }
  puVar1 = *(uint **)(param_1 + 0x20);
  if (puVar1 != (uint *)0x0) {
    if (bVar2) {
      *puVar1 = uVar11;
      puVar1[1] = uVar8;
      puVar1[2] = uVar12;
      puVar1[3] = uVar10;
    }
    else {
      puVar1[0] = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
    }
  }
  return;
}



// FUNCTION 1433ba880 FUN_1433ba880 body=158 status=ok
// SIG undefined FUN_1433ba880(void)

void FUN_1433ba880(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined4 local_res8 [2];
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  plVar1 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x128))();
  local_38 = (longlong *)(**(code **)(*plVar1 + 0x88))();
  local_30 = 0;
  local_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  local_28 = param_3;
  (**(code **)(*local_38 + 8))(local_38,&local_38);
  (**(code **)(*local_38 + 0x10))(local_38,&local_38,*(undefined4 *)(param_1 + 0x14));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (**(code **)(*local_38 + 0x28))(local_38,local_res8,&local_38,*(undefined4 *)(param_1 + 0x10));
    **(undefined4 **)(param_1 + 0x18) = local_res8[0];
  }
  return;
}



// FUNCTION 1433ba930 FUN_1433ba930 body=212 status=ok
// SIG undefined FUN_1433ba930(void)

void FUN_1433ba930(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined4 local_res8 [2];
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  plVar1 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x128))();
  local_38 = (longlong *)(**(code **)(*plVar1 + 0x88))();
  local_30 = 0;
  local_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  local_28 = param_3;
  (**(code **)(*local_38 + 8))(local_38,&local_38);
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 < *(int *)(param_1 + 0x1c)) {
    do {
      (**(code **)(*local_38 + 0x10))(local_38,&local_38,iVar3);
      iVar2 = *(int *)(param_1 + 0x10);
      if (iVar2 < *(int *)(param_1 + 0x18)) {
        do {
          (**(code **)(*local_38 + 0x28))(local_38,local_res8,&local_38,iVar2);
          (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))
                    (*(longlong **)(param_1 + 0x20),local_res8[0]);
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(param_1 + 0x18));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x1c));
  }
  return;
}



// FUNCTION 1433baa10 FUN_1433baa10 body=332 status=ok
// SIG undefined FUN_1433baa10(void)

void FUN_1433baa10(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint local_res8 [2];
  longlong *local_48;
  undefined8 local_40;
  longlong local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  plVar2 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x128))();
  local_48 = (longlong *)(**(code **)(*plVar2 + 0x88))(plVar2);
  local_40 = 0;
  local_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = param_3;
  (**(code **)(*local_48 + 8))(local_48,&local_48);
  iVar5 = *(int *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x14) < 0) {
    iVar5 = 0;
  }
  iVar4 = *(int *)(param_1 + 0x1c);
  if (*(int *)(*(longlong *)(param_3 + 0x10) + 4) < *(int *)(param_1 + 0x1c)) {
    iVar4 = *(int *)(*(longlong *)(param_3 + 0x10) + 4);
  }
  if (iVar5 < iVar4) {
    do {
      (**(code **)(*local_48 + 0x10))(local_48,&local_48,iVar5);
      iVar4 = *(int *)(param_1 + 0x10);
      if (*(int *)(param_1 + 0x10) < 0) {
        iVar4 = 0;
      }
      iVar3 = *(int *)(param_1 + 0x18);
      if (**(int **)(param_3 + 0x10) < *(int *)(param_1 + 0x18)) {
        iVar3 = **(int **)(param_3 + 0x10);
      }
      if (iVar4 < iVar3) {
        do {
          (**(code **)(*local_48 + 0x28))(local_48,local_res8,&local_48,iVar4);
          iVar4 = iVar4 + 1;
          piVar1 = (int *)(*(longlong *)(param_1 + 0x20) +
                          (ulonglong)((local_res8[0] & 0xff) + 0x200) * 4);
          *piVar1 = *piVar1 + 1;
          piVar1 = (int *)(*(longlong *)(param_1 + 0x20) +
                          (ulonglong)((local_res8[0] >> 8 & 0xff) + 0x100) * 4);
          *piVar1 = *piVar1 + 1;
          piVar1 = (int *)(*(longlong *)(param_1 + 0x20) +
                          (ulonglong)(local_res8[0] >> 0x10 & 0xff) * 4);
          *piVar1 = *piVar1 + 1;
          piVar1 = (int *)(*(longlong *)(param_1 + 0x20) +
                          (ulonglong)((local_res8[0] >> 0x18) + 0x300) * 4);
          *piVar1 = *piVar1 + 1;
          iVar3 = *(int *)(param_1 + 0x18);
          if (**(int **)(param_3 + 0x10) < *(int *)(param_1 + 0x18)) {
            iVar3 = **(int **)(param_3 + 0x10);
          }
        } while (iVar4 < iVar3);
      }
      iVar5 = iVar5 + 1;
      iVar4 = *(int *)(param_1 + 0x1c);
      if (*(int *)(*(longlong *)(param_3 + 0x10) + 4) < *(int *)(param_1 + 0x1c)) {
        iVar4 = *(int *)(*(longlong *)(param_3 + 0x10) + 4);
      }
    } while (iVar5 < iVar4);
  }
  return;
}



// FUNCTION 1433bab70 FUN_1433bab70 body=869 status=ok
// SIG undefined FUN_1433bab70(void)

void FUN_1433bab70(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined1 local_res8 [3];
  byte local_resb;
  uint local_a8;
  uint uStack_a4;
  uint local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [3];
  byte local_65;
  longlong *local_60;
  undefined8 local_58;
  longlong local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8),&local_a8);
  local_88 = param_3;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    plVar5 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x128))();
    local_98 = (longlong *)(**(code **)(*plVar5 + 0x88))(plVar5);
    local_90 = 0;
    local_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    (**(code **)(*local_98 + 8))(local_98,&local_98);
    uVar10 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x1c);
    uVar9 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18);
    if ((int)local_a8 < (int)uVar9) {
      uVar9 = local_a8;
    }
    if ((int)uStack_a4 < (int)uVar10) {
      uVar10 = uStack_a4;
    }
    iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x2c);
    iVar8 = iVar1;
    if (iVar1 < 0) {
      iVar8 = 0;
    }
    if (iVar8 < (int)(iVar1 + uVar10)) {
      do {
        if ((iVar8 < 0) || ((int)uStack_a4 <= iVar8)) break;
        (**(code **)(*local_98 + 0x10))(local_98,&local_98,iVar8);
        iVar2 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x28);
        iVar1 = iVar2;
        if (iVar2 < 0) {
          iVar1 = 0;
        }
        if (iVar1 < (int)(iVar2 + uVar9)) {
          do {
            if ((iVar1 < 0) || ((int)local_a8 <= iVar1)) break;
            (**(code **)(*local_98 + 0x28))(local_98,local_res8,&local_98,iVar1);
            if (*(uint *)(param_1 + 0x38) <= (uint)local_resb) {
LAB_1433bacc1:
              if (*(undefined1 **)(param_1 + 0x40) == (undefined1 *)0x0) {
                return;
              }
              **(undefined1 **)(param_1 + 0x40) = 1;
              return;
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 < (int)((*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x28)) + uVar9));
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x2c)) + uVar10));
    }
  }
  else {
    plVar5 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x128))();
    local_98 = (longlong *)(**(code **)(*plVar5 + 0x88))(plVar5);
    local_90 = 0;
    local_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    (**(code **)(*local_98 + 8))(local_98,&local_98);
    plVar5 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x128))();
    lVar6 = *param_4;
    local_60 = (longlong *)(**(code **)(*plVar5 + 0x88))(plVar5);
    local_58 = 0;
    local_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_50 = lVar6;
    (**(code **)(*local_60 + 8))(local_60,&local_60);
    plVar5 = *(longlong **)(param_1 + 0x10);
    lVar6 = (**(code **)(*plVar5 + 0x28))(plVar5,local_res8);
    uVar10 = *(uint *)(lVar6 + 4);
    if (uStack_a4 < *(uint *)(lVar6 + 4)) {
      uVar10 = uStack_a4;
    }
    local_a0 = uVar10;
    puVar7 = (uint *)(**(code **)(*plVar5 + 0x28))(plVar5,local_68);
    iVar8 = *(int *)(param_1 + 0x34);
    iVar1 = *(int *)(param_1 + 0x2c);
    uVar9 = *puVar7;
    if (local_a8 < *puVar7) {
      uVar9 = local_a8;
    }
    iVar3 = iVar8 - iVar1;
    iVar2 = iVar3;
    if (iVar3 < 0) {
      iVar2 = 0;
    }
    if (iVar2 < (int)(iVar3 + uVar10)) {
      do {
        iVar8 = (iVar1 - iVar8) + iVar2;
        if ((((iVar2 < 0) || ((int)uStack_a4 <= iVar2)) || (iVar8 < 0)) ||
           (*(int *)(*(longlong *)(*param_4 + 0x10) + 4) <= iVar8)) break;
        (**(code **)(*local_98 + 0x10))(local_98,&local_98,iVar2);
        (**(code **)(*local_60 + 0x10))(local_60,&local_60,iVar8);
        iVar8 = *(int *)(param_1 + 0x30);
        iVar1 = *(int *)(param_1 + 0x28);
        iVar4 = iVar8 - iVar1;
        iVar3 = iVar4;
        if (iVar4 < 0) {
          iVar3 = 0;
        }
        if (iVar3 < (int)(iVar4 + uVar9)) {
          do {
            iVar8 = (iVar1 - iVar8) + iVar3;
            if (((iVar3 < 0) || ((int)local_a8 <= iVar3)) ||
               ((iVar8 < 0 || (**(int **)(*param_4 + 0x10) <= iVar8)))) break;
            (**(code **)(*local_98 + 0x28))(local_98,local_res8,&local_98,iVar3);
            if ((*(uint *)(param_1 + 0x38) <= (uint)local_resb) &&
               ((**(code **)(*local_60 + 0x28))(local_60,local_68,&local_60,iVar8),
               *(uint *)(param_1 + 0x3c) <= (uint)local_65)) goto LAB_1433bacc1;
            iVar8 = *(int *)(param_1 + 0x30);
            iVar3 = iVar3 + 1;
            iVar1 = *(int *)(param_1 + 0x28);
          } while (iVar3 < (int)((iVar8 - iVar1) + uVar9));
        }
        iVar8 = *(int *)(param_1 + 0x34);
        iVar2 = iVar2 + 1;
        iVar1 = *(int *)(param_1 + 0x2c);
      } while (iVar2 < (int)((iVar8 - iVar1) + local_a0));
    }
  }
  if (*(undefined1 **)(param_1 + 0x40) != (undefined1 *)0x0) {
    **(undefined1 **)(param_1 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1433baee0 FUN_1433baee0 body=840 status=ok
// SIG undefined FUN_1433baee0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433baee0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined1 auVar7 [12];
  int iVar8;
  char cVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 uVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  longlong lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined4 local_res8;
  byte local_res20;
  byte local_res21;
  byte local_res22;
  byte local_res23;
  byte local_128;
  byte local_127;
  byte local_126;
  byte local_125;
  int3 local_124;
  undefined1 uStack_121;
  undefined8 local_120;
  undefined8 uStack_118;
  int local_110;
  int local_10c;
  int local_108 [4];
  uint local_f8 [4];
  uint local_e8 [4];
  longlong *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  uVar2 = *param_4;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  FUN_1432c7ad0(param_3,0,&local_78);
  FUN_1432c7ad0(uVar2,0,&local_58);
  local_120 = 0;
  uStack_118 = 0;
  cVar9 = (**(code **)(*param_1 + 0x48))(param_1,&local_120,&local_110);
  if (cVar9 != '\0') {
    plVar10 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x128))();
    local_d8 = (longlong *)(**(code **)(*plVar10 + 0x88))(plVar10);
    local_d0 = 0;
    local_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = param_3;
    (**(code **)(*local_d8 + 8))(local_d8,&local_d8);
    plVar10 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x128))();
    uVar2 = *param_4;
    local_a8 = (longlong *)(**(code **)(*plVar10 + 0x88))(plVar10);
    local_a0 = 0;
    local_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = uVar2;
    (**(code **)(*local_a8 + 8))(local_a8,&local_a8);
    iVar8 = DAT_1468387b0;
    iVar14 = local_120._4_4_;
    if (local_120._4_4_ < uStack_118._4_4_) {
      do {
        (**(code **)(*local_d8 + 0x10))(local_d8,&local_d8,iVar14);
        (**(code **)(*local_a8 + 0x10))(local_a8,&local_a8,iVar14 - local_10c);
        iVar13 = (int)local_120;
        if ((int)local_120 < (int)uStack_118) {
          do {
            (**(code **)(*local_d8 + 0x28))(local_d8,&local_128,&local_d8,iVar13);
            (**(code **)(*local_a8 + 0x28))(local_a8,&local_res20,&local_a8,iVar13 - local_110);
            pauVar1 = (undefined1 (*) [16])(param_1 + 6);
            local_f8[3] = (uint)local_125;
            local_108[0] = (int)*(longlong *)*pauVar1;
            local_108[1] = *(undefined4 *)((longlong)param_1 + 0x34);
            auVar7 = *(undefined1 (*) [12])*pauVar1;
            local_108[2] = (int)param_1[7];
            local_108[3] = *(int *)((longlong)param_1 + 0x3c);
            local_e8[0] = CONCAT31(0,local_res22);
            local_e8[1] = (uint)local_res21;
            local_e8[2] = (uint)local_res20;
            local_f8[0] = CONCAT31(0,local_126);
            local_f8[1] = (uint)local_127;
            local_f8[2] = (uint)local_128;
            local_e8[3] = (uint)local_res23;
            if (*(char *)(param_1[2] + 0x50) == '\0') {
              local_e8[3] = 0xff;
            }
            cVar9 = *(char *)(param_1[1] + 0x50);
            if (cVar9 == '\0') {
              local_f8[3] = 0xff;
            }
            if (iVar8 < 2) {
              lVar16 = 4;
              lVar11 = 0;
              puVar15 = &local_res8;
              do {
                *(char *)puVar15 =
                     (char)((uint)(*(int *)((longlong)local_f8 + lVar11) *
                                   (0x100 - *(int *)((longlong)local_108 + lVar11)) +
                                  *(int *)((longlong)local_e8 + lVar11) *
                                  *(int *)((longlong)local_108 + lVar11)) >> 8);
                lVar16 = lVar16 + -1;
                lVar11 = lVar11 + 4;
                puVar15 = (undefined4 *)((longlong)puVar15 + 1);
              } while (lVar16 != 0);
            }
            else {
              auVar20[4] = local_127;
              auVar20._0_4_ = CONCAT31(0,local_126);
              auVar20._5_3_ = 0;
              auVar20[8] = local_128;
              auVar20._9_3_ = 0;
              auVar20._12_4_ = local_f8[3];
              auVar17[4] = local_res21;
              auVar17._0_4_ = CONCAT31(0,local_res22);
              auVar17._5_3_ = 0;
              auVar17[8] = local_res20;
              auVar17._9_3_ = 0;
              auVar17._12_4_ = local_e8[3];
              auVar19._0_4_ = 0x100 - auVar7._0_4_;
              auVar19._4_4_ = 0x100 - auVar7._4_4_;
              auVar19._8_4_ = 0x100 - auVar7._8_4_;
              auVar19._12_4_ = 0x100 - *(int *)((longlong)param_1 + 0x3c);
              auVar17 = pmulld(auVar17,*pauVar1);
              auVar20 = pmulld(auVar19,auVar20);
              auVar21._0_4_ = (uint)(auVar20._0_4_ + auVar17._0_4_) >> 8;
              auVar21._4_4_ = (uint)(auVar20._4_4_ + auVar17._4_4_) >> 8;
              auVar21._8_4_ = (uint)(auVar20._8_4_ + auVar17._8_4_) >> 8;
              auVar21._12_4_ = (uint)(auVar20._12_4_ + auVar17._12_4_) >> 8;
              auVar20 = pshuflw(ZEXT416(8),auVar21,0xd8);
              auVar20 = pshufhw(auVar17,auVar20,0xd8);
              auVar18._4_4_ = auVar20._8_4_;
              auVar18._0_4_ = auVar20._0_4_;
              auVar18._8_4_ = auVar20._4_4_;
              auVar18._12_4_ = auVar20._12_4_;
              auVar18 = auVar18 & _DAT_145b05da0;
              sVar3 = auVar18._0_2_;
              sVar4 = auVar18._2_2_;
              sVar5 = auVar18._4_2_;
              sVar6 = auVar18._6_2_;
              local_res8 = CONCAT13((0 < sVar6) * (sVar6 < 0x100) * auVar18[6] - (0xff < sVar6),
                                    CONCAT12((0 < sVar5) * (sVar5 < 0x100) * auVar18[4] -
                                             (0xff < sVar5),
                                             CONCAT11((0 < sVar4) * (sVar4 < 0x100) * auVar18[2] -
                                                      (0xff < sVar4),
                                                      (0 < sVar3) * (sVar3 < 0x100) * auVar18[0] -
                                                      (0xff < sVar3))));
            }
            uVar12 = local_res8._3_1_;
            if (cVar9 == '\0') {
              uVar12 = 0xff;
            }
            _local_124 = CONCAT13(uVar12,CONCAT21((short)local_res8,local_res8._1_1_) << 8);
            _local_124 = CONCAT31(stack0xfffffffffffffedd,local_res8._2_1_);
            local_res8 = CONCAT13(uVar12,(undefined3)local_res8);
            (**(code **)(*local_d8 + 0x18))(local_d8,&local_d8,iVar13,_local_124);
            iVar13 = iVar13 + 1;
          } while (iVar13 < (int)uStack_118);
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < uStack_118._4_4_);
    }
  }
  return;
}



// FUNCTION 1433bb230 FUN_1433bb230 body=718 status=ok
// SIG undefined FUN_1433bb230(void)

void FUN_1433bb230(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  longlong *plVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  undefined4 local_res8;
  uint local_res10;
  uint uStackX_14;
  undefined1 local_c8 [40];
  longlong *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  FUN_1433f9320(local_c8);
  Scaleform::Alg::Random::Generator::SeedRandom(local_c8,*(undefined4 *)(param_1 + 0x10));
  plVar3 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x128))();
  local_a0 = (longlong *)(**(code **)(*plVar3 + 0x88))(plVar3);
  local_98 = 0;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = param_3;
  (**(code **)(*local_a0 + 8))(local_a0,&local_a0);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8),&local_res10);
  iVar6 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14);
  if (local_res10 != 0) {
    uVar5 = uStackX_14;
    uVar8 = 0;
    uVar2 = local_res10;
    do {
      uVar7 = 0;
      if (uVar5 != 0) {
        do {
          (**(code **)(*local_a0 + 0x10))(local_a0,&local_a0,uVar7);
          local_res8 = 0;
          if (*(char *)(param_1 + 0x20) == '\0') {
            if ((*(byte *)(param_1 + 0x1c) & 1) != 0) {
              fVar9 = (float)Scaleform::Alg::Random::Generator::GetUnitFloat(local_c8);
              local_res8 = (uint)(byte)(longlong)
                                       ((float)*(uint *)(param_1 + 0x14) + fVar9 * (float)iVar6) <<
                           0x10;
            }
            if ((*(byte *)(param_1 + 0x1c) & 2) != 0) {
              fVar9 = (float)Scaleform::Alg::Random::Generator::GetUnitFloat(local_c8);
              local_res8 = (uint)CONCAT21(local_res8._2_2_,
                                          (char)(longlong)
                                                ((float)*(uint *)(param_1 + 0x14) +
                                                fVar9 * (float)iVar6)) << 8;
            }
            if ((*(byte *)(param_1 + 0x1c) & 4) != 0) {
              fVar9 = (float)Scaleform::Alg::Random::Generator::GetUnitFloat(local_c8);
              local_res8 = CONCAT31(local_res8._1_3_,
                                    (char)(longlong)
                                          ((float)*(uint *)(param_1 + 0x14) + fVar9 * (float)iVar6))
              ;
            }
            if ((*(byte *)(param_1 + 0x1c) & 8) == 0) {
              uVar4 = 0xff;
            }
            else {
              fVar9 = (float)Scaleform::Alg::Random::Generator::GetUnitFloat(local_c8);
              uVar4 = (undefined1)
                      (longlong)((float)*(uint *)(param_1 + 0x14) + fVar9 * (float)iVar6);
            }
          }
          else {
            fVar9 = (float)Scaleform::Alg::Random::Generator::GetUnitFloat(local_c8);
            uVar5 = *(uint *)(param_1 + 0x14);
            if ((*(byte *)(param_1 + 0x1c) & 8) == 0) {
              fVar10 = 1.0;
            }
            else {
              fVar10 = (float)Scaleform::Alg::Random::Generator::GetUnitFloat(local_c8);
              fVar10 = ((float)*(uint *)(param_1 + 0x14) + fVar10 * (float)iVar6) / 255.0;
            }
            uVar4 = (undefined1)(longlong)(fVar10 * 255.0);
            uVar1 = (undefined1)(longlong)((((float)uVar5 + fVar9 * (float)iVar6) / 255.0) * 255.0);
            local_res8 = (uint)CONCAT21(CONCAT11(uVar1,uVar1),uVar1);
          }
          if (*(char *)(*(longlong *)(param_1 + 8) + 0x50) == '\0') {
            uVar4 = 0xff;
          }
          local_res8 = CONCAT13(uVar4,(undefined3)local_res8);
          (**(code **)(*local_a0 + 0x18))(local_a0,&local_a0,uVar8,local_res8);
          uVar7 = uVar7 + 1;
          uVar5 = uStackX_14;
          uVar2 = local_res10;
        } while (uVar7 < uStackX_14);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar2);
  }
  return;
}



// FUNCTION 1433bb510 FUN_1433bb510 body=653 status=ok
// SIG undefined FUN_1433bb510(void)

void FUN_1433bb510(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  ulonglong uVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar12;
  int iVar13;
  byte local_res8;
  byte local_res9;
  byte local_resa;
  byte local_resb;
  byte local_res20 [8];
  undefined8 local_108;
  undefined8 uStack_100;
  int local_f8;
  int local_f4;
  int local_f0 [4];
  longlong *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong uVar11;
  
  uVar2 = *param_4;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  FUN_1432c7ad0(param_3,0,&local_80);
  FUN_1432c7ad0(uVar2,0,&local_60);
  local_108 = 0;
  uStack_100 = 0;
  cVar3 = (**(code **)(*param_1 + 0x48))(param_1,&local_108,&local_f8);
  if (cVar3 != '\0') {
    plVar5 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x128))();
    local_b0 = (longlong *)(**(code **)(*plVar5 + 0x88))(plVar5);
    local_a8 = 0;
    local_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = param_3;
    (**(code **)(*local_b0 + 8))(local_b0,&local_b0);
    plVar5 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x128))();
    uVar2 = *param_4;
    local_e0 = (longlong *)(**(code **)(*plVar5 + 0x88))(plVar5);
    local_d8 = 0;
    local_c8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = uVar2;
    (**(code **)(*local_e0 + 8))(local_e0,&local_e0);
    if (local_108._4_4_ < uStack_100._4_4_) {
      iVar13 = local_108._4_4_;
      do {
        (**(code **)(*local_b0 + 0x10))(local_b0,&local_b0,iVar13);
        (**(code **)(*local_e0 + 0x10))(local_e0,&local_e0,iVar13 - local_f4);
        iVar12 = (int)local_108;
        if ((int)local_108 < (int)uStack_100) {
          do {
            (**(code **)(*local_e0 + 0x28))(local_e0,&local_res8,&local_e0,iVar12 - local_f8);
            pbVar9 = local_res20;
            uVar1 = *(uint *)(param_1 + 7);
            if (*(char *)(param_1[2] + 0x50) == '\0') {
              local_resb = 0xff;
            }
            local_f0[3] = (uint)local_resb << 0x18;
            local_f0[0] = (uint)local_resa << 0x10;
            local_f0[1] = (uint)local_res9 << 8;
            uVar4 = 1;
            local_res20[2] = local_res8;
            local_res20[3] = local_resb;
            local_f0[2] = (uint)local_res8;
            lVar6 = 4;
            local_res20[0] = local_resa;
            piVar7 = local_f0;
            local_res20[1] = local_res9;
            uVar8 = 0;
            uVar11 = 0;
            do {
              if ((uVar4 & uVar1) != 0) {
                *piVar7 = *(int *)(param_1[6] + (*pbVar9 + uVar8) * 4);
              }
              uVar10 = (int)uVar11 + *piVar7;
              uVar11 = (ulonglong)uVar10;
              pbVar9 = pbVar9 + 1;
              piVar7 = piVar7 + 1;
              uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
              uVar8 = uVar8 + 0x100;
              lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
            uVar1 = uVar10 | 0xff000000;
            if (*(char *)(param_1[1] + 0x50) != '\0') {
              uVar1 = uVar10;
            }
            (**(code **)(*local_b0 + 0x18))(local_b0,&local_b0,iVar12,uVar1);
            iVar12 = iVar12 + 1;
          } while (iVar12 < (int)uStack_100);
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < uStack_100._4_4_);
    }
  }
  return;
}



// FUNCTION 1433bb7b0 FUN_1433bb7b0 body=963 status=ok
// SIG undefined FUN_1433bb7b0(void)

void FUN_1433bb7b0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  byte bVar6;
  undefined1 uVar7;
  longlong *plVar8;
  uint uVar9;
  float *pfVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 local_res10;
  uint local_148;
  longlong local_140;
  uint local_138;
  uint local_130;
  uint local_12c;
  uint local_128;
  longlong *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  
  uVar12 = *(uint *)(param_1 + 0x24);
  if (*(char *)(param_1 + 0x28) != '\0') {
    uVar12 = uVar12 & 0xfffffff9 | 1;
  }
  plVar8 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x128))();
  local_120 = (longlong *)(**(code **)(*plVar8 + 0x88))(plVar8);
  local_118 = 0;
  local_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = param_3;
  (**(code **)(*local_120 + 8))(local_120,&local_120);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8),&local_130);
  local_148 = 0;
  if (local_12c != 0) {
    do {
      (**(code **)(*local_120 + 0x10))(local_120,&local_120,local_148);
      local_138 = 0;
      if (local_130 != 0) {
        do {
          local_res10 = 0;
          uVar14 = 1;
          cVar2 = *(char *)(*(longlong *)(param_1 + 8) + 0x50);
          local_140 = 0xff;
          uVar9 = (cVar2 != '\0') + 3;
          uVar11 = 0;
          local_128 = uVar9;
          do {
            lVar5 = local_140;
            if ((uVar12 & uVar14) != 0) {
              fVar18 = 2.0 / *(float *)(param_1 + 0x10);
              uVar13 = 0;
              fVar19 = 2.0 / *(float *)(param_1 + 0x14);
              fVar20 = 1.0;
              fVar17 = 0.0;
              lVar1 = (ulonglong)((*(int *)(param_1 + 0x1c) + uVar11) * -3 & 7) * 0x10;
              local_f0 = *(undefined4 *)(&DAT_145b05cb0 + lVar1);
              uStack_ec = *(undefined4 *)(&UNK_145b05cb4 + lVar1);
              uStack_e8 = *(undefined4 *)(&UNK_145b05cb8 + lVar1);
              uStack_e4 = *(undefined4 *)(&UNK_145b05cbc + lVar1);
              uVar3 = *(uint *)(param_1 + 0x18);
              fVar21 = 0.0;
              if (uVar3 != 0) {
                uVar4 = *(uint *)(param_1 + 0xac);
                pfVar10 = (float *)(param_1 + 0x2c);
                do {
                  fVar15 = (float)local_138 * fVar18;
                  fVar16 = (float)local_148 * fVar19;
                  if (uVar13 < uVar4) {
                    fVar15 = fVar15 + *pfVar10;
                    fVar16 = fVar16 + pfVar10[1];
                  }
                  fVar15 = (float)FUN_1433bc650(&local_f0,fVar15,fVar16);
                  uVar13 = uVar13 + 1;
                  pfVar10 = pfVar10 + 2;
                  fVar21 = fVar21 + fVar20;
                  fVar18 = fVar18 + fVar18;
                  fVar19 = fVar19 + fVar19;
                  fVar15 = (fVar15 + 1.0) * 0.5 * fVar20;
                  fVar20 = fVar20 * 0.5;
                  fVar17 = fVar17 + fVar15;
                  uVar9 = local_128;
                } while (uVar13 < uVar3);
              }
              if ((*(char *)(param_1 + 0x28) == '\0') || (uVar11 == 3)) {
                fVar17 = (fVar17 / fVar21) * 255.0;
                if (uVar11 != 1) {
                  if (uVar11 == 2) {
                    local_res10 = CONCAT31(local_res10._1_3_,(char)(longlong)fVar17);
                  }
                  else {
                    lVar5 = (longlong)fVar17;
                    if (uVar11 != 3) {
                      local_res10._0_3_ = CONCAT12((char)(longlong)fVar17,(undefined2)local_res10);
                      local_res10 = (uint)(uint3)local_res10;
                      lVar5 = local_140;
                    }
                  }
                  goto LAB_1433bba9d;
                }
                bVar6 = (byte)(longlong)fVar17;
              }
              else {
                bVar6 = (byte)(longlong)((fVar17 / fVar21) * 255.0);
                local_res10 = (uint)bVar6 << 0x10;
                local_res10 = CONCAT31(local_res10._1_3_,bVar6);
              }
              local_res10._0_2_ = CONCAT11(bVar6,(undefined1)local_res10);
            }
LAB_1433bba9d:
            local_140 = lVar5;
            uVar11 = uVar11 + 1;
            uVar14 = uVar14 << 1 | (uint)((int)uVar14 < 0);
          } while (uVar11 < uVar9);
          uVar7 = (char)local_140;
          if (cVar2 == '\0') {
            uVar7 = 0xff;
          }
          local_res10 = CONCAT13(uVar7,(uint3)local_res10);
          (**(code **)(*local_120 + 0x18))(local_120,&local_120,local_138,local_res10);
          local_138 = local_138 + 1;
        } while (local_138 < local_130);
      }
      local_148 = local_148 + 1;
    } while (local_148 < local_12c);
  }
  return;
}



// FUNCTION 1433bbb80 FUN_1433bbb80 body=881 status=ok
// SIG undefined FUN_1433bbb80(void)

void FUN_1433bbb80(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined4 local_res8 [2];
  uint local_res10;
  int local_res18;
  int iStackX_1c;
  longlong *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong uVar11;
  
  plVar7 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x128))();
  local_98 = (longlong *)(**(code **)(*plVar7 + 0x88))(plVar7);
  uVar14 = 0;
  local_90 = 0;
  local_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = param_3;
  (**(code **)(*local_98 + 8))(local_98,&local_98);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8),&local_res18);
  if (*(longlong *)(param_1 + 8) == *(longlong *)(param_1 + 0x10)) {
    iVar5 = *(int *)(param_1 + 0x1c);
    if (((iVar5 <= iStackX_1c) && (iVar6 = *(int *)(param_1 + 0x24), -1 < iVar6)) &&
       ((iVar1 = *(int *)(param_1 + 0x20), -1 < iVar1 &&
        (iVar8 = *(int *)(param_1 + 0x18), iVar8 <= local_res18)))) {
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      if (iVar1 < local_res18) {
        local_res18 = iVar1;
      }
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      if (iVar6 < iStackX_1c) {
        iStackX_1c = iVar6;
      }
      uVar12 = local_res18 - iVar8;
      uVar15 = (iStackX_1c - iVar5) * uVar12;
      uVar11 = uVar14;
      if (1 < uVar15) {
        do {
          uVar9 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar9;
        } while ((uint)(1 << ((byte)uVar9 & 0x1f)) < uVar15);
      }
      uVar9 = *(uint *)(param_1 + 0x30);
      if (*(int *)(param_1 + 0x34) != 0) {
        do {
          do {
            uVar9 = -(uVar9 & 1) & *(uint *)(&DAT_145b05d30 + uVar11 * 4) ^ (int)uVar9 >> 1;
          } while (uVar15 < uVar9);
          (**(code **)(*local_98 + 0x10))
                    (local_98,&local_98,(ulonglong)(uVar9 - 1) / (ulonglong)uVar12);
          (**(code **)(*local_98 + 0x18))
                    (local_98,&local_98,(ulonglong)(uVar9 - 1) % (ulonglong)uVar12,
                     *(undefined4 *)(param_1 + 0x38));
          uVar13 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar13;
        } while (uVar13 < *(uint *)(param_1 + 0x34));
      }
      if (*(uint **)(param_1 + 0x40) == (uint *)0x0) {
        return;
      }
      **(uint **)(param_1 + 0x40) = uVar9;
      return;
    }
  }
  else {
    plVar7 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x128))();
    lVar4 = *param_4;
    local_68 = (longlong *)(**(code **)(*plVar7 + 0x88))(plVar7);
    local_60 = 0;
    local_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = lVar4;
    (**(code **)(*local_68 + 8))(local_68,&local_68);
    iStackX_1c = iStackX_1c + *(int *)(param_1 + 0x2c) * -2;
    local_res10 = (local_res18 - *(int *)(param_1 + 0x28)) - *(int *)(param_1 + 0x28);
    if ((0 < (int)local_res10) && (0 < iStackX_1c)) {
      iVar5 = *(int *)(param_1 + 0x24);
      iVar6 = **(int **)(*param_4 + 0x10);
      iVar1 = (*(int **)(*param_4 + 0x10))[1];
      if ((-1 < iVar5) &&
         (((iVar8 = *(int *)(param_1 + 0x1c), iVar8 <= iVar1 &&
           (iVar2 = *(int *)(param_1 + 0x18), iVar2 <= iVar6)) &&
          (iVar3 = *(int *)(param_1 + 0x20), -1 < iVar3)))) {
        iVar10 = 0;
        if (0 < iVar2) {
          iVar10 = iVar2;
        }
        if (iVar6 < iVar3) {
          iVar3 = iVar6;
        }
        iVar6 = 0;
        if (0 < iVar8) {
          iVar6 = iVar8;
        }
        if (iVar1 < iVar5) {
          iVar5 = iVar1;
        }
        if (iVar3 - iVar10 < (int)local_res10) {
          local_res10 = iVar3 - iVar10;
        }
        if (iVar5 - iVar6 < iStackX_1c) {
          iStackX_1c = iVar5 - iVar6;
        }
        uVar12 = iStackX_1c * local_res10;
        uVar11 = uVar14;
        if (1 < uVar12) {
          do {
            uVar15 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar15;
          } while ((uint)(1 << ((byte)uVar15 & 0x1f)) < uVar12);
        }
        uVar15 = *(uint *)(param_1 + 0x30);
        if (*(int *)(param_1 + 0x34) != 0) {
          do {
            do {
              uVar15 = -(uVar15 & 1) & *(uint *)(&DAT_145b05d30 + uVar11 * 4) ^ (int)uVar15 >> 1;
            } while (uVar12 < uVar15);
            uVar9 = (uVar15 - 1) / local_res10;
            uVar13 = (uVar15 - 1) % local_res10;
            (**(code **)(*local_68 + 0x10))(local_68,&local_68,*(int *)(param_1 + 0x1c) + uVar9);
            (**(code **)(*local_68 + 0x28))
                      (local_68,local_res8,&local_68,*(int *)(param_1 + 0x18) + uVar13);
            (**(code **)(*local_98 + 0x10))(local_98,&local_98,*(int *)(param_1 + 0x2c) + uVar9);
            (**(code **)(*local_98 + 0x18))
                      (local_98,&local_98,*(int *)(param_1 + 0x28) + uVar13,local_res8[0]);
            uVar9 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar9;
          } while (uVar9 < *(uint *)(param_1 + 0x34));
        }
        if (*(uint **)(param_1 + 0x40) == (uint *)0x0) {
          return;
        }
        **(uint **)(param_1 + 0x40) = uVar15;
        return;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



// FUNCTION 1433bbf00 FUN_1433bbf00 body=190 status=ok
// SIG undefined FUN_1433bbf00(void)

void FUN_1433bbf00(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined4 local_res8;
  undefined1 local_res10 [3];
  undefined1 local_res13;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  plVar1 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x128))();
  local_38 = (longlong *)(**(code **)(*plVar1 + 0x88))();
  local_30 = 0;
  local_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  local_28 = param_3;
  (**(code **)(*local_38 + 8))(local_38,&local_38);
  (**(code **)(*local_38 + 0x10))(local_38,&local_38,*(undefined4 *)(param_1 + 0x14));
  local_res8 = *(undefined4 *)(param_1 + 0x18);
  if (*(char *)(param_1 + 0x1c) == '\0') {
    (**(code **)(*local_38 + 0x28))(local_38,local_res10,&local_38,*(undefined4 *)(param_1 + 0x10));
    local_res8 = CONCAT13(local_res13,(undefined3)local_res8);
  }
  (**(code **)(*local_38 + 0x18))(local_38,&local_38,*(undefined4 *)(param_1 + 0x10),local_res8);
  return;
}



// FUNCTION 1433bbfd0 FUN_1433bbfd0 body=257 status=ok
// SIG undefined FUN_1433bbfd0(void)

void FUN_1433bbfd0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  plVar2 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x128))();
  local_38 = (longlong *)(**(code **)(*plVar2 + 0x88))(plVar2);
  uVar5 = 0;
  local_30 = 0;
  local_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  local_28 = param_3;
  (**(code **)(*local_38 + 8))(local_38,&local_38);
  iVar4 = *(int *)(param_1 + 0x14);
  if (iVar4 < *(int *)(param_1 + 0x1c)) {
    do {
      (**(code **)(*local_38 + 0x10))(local_38,&local_38,iVar4);
      iVar6 = *(int *)(param_1 + 0x10);
      if (iVar6 < *(int *)(param_1 + 0x18)) {
        do {
          uVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 8))();
          if (uVar3 <= uVar5) {
            if (*(undefined1 **)(param_1 + 0x28) == (undefined1 *)0x0) {
              return;
            }
            **(undefined1 **)(param_1 + 0x28) = 0;
            return;
          }
          uVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
          (**(code **)(*local_38 + 0x18))(local_38,&local_38,iVar6,uVar1);
          iVar6 = iVar6 + 1;
          uVar5 = (ulonglong)((int)uVar5 + 1);
        } while (iVar6 < *(int *)(param_1 + 0x18));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x1c));
  }
  if (*(undefined1 **)(param_1 + 0x28) != (undefined1 *)0x0) {
    **(undefined1 **)(param_1 + 0x28) = 1;
  }
  return;
}



// FUNCTION 1433bc0e0 FUN_1433bc0e0 body=692 status=ok
// SIG undefined FUN_1433bc0e0(void)

void FUN_1433bc0e0(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 local_res20;
  int local_f0;
  int iStack_ec;
  longlong *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  
  lVar1 = *param_4;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_res20 = param_4;
  FUN_1432c7ad0(param_3,0,&local_88);
  FUN_1432c7ad0(lVar1,0,&local_68);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8),&local_f0);
  piVar2 = *(int **)(lVar1 + 0x10);
  iVar9 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x18);
  iVar6 = *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x1c);
  iVar11 = piVar2[1];
  iVar8 = *(int *)(param_1 + 0x1c);
  iVar5 = *piVar2;
  if ((((iVar8 <= iVar11) && (iVar10 = *(int *)(param_1 + 0x24), -1 < iVar10)) &&
      (iVar3 = *(int *)(param_1 + 0x20), -1 < iVar3)) &&
     (iVar7 = *(int *)(param_1 + 0x18), iVar7 <= iVar5)) {
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    if (iVar3 < iVar5) {
      iVar5 = iVar3;
    }
    if (iVar8 < 0) {
      iVar8 = 0;
    }
    iVar7 = iVar7 + iVar9;
    iVar5 = iVar5 + iVar9;
    if (iVar10 < iVar11) {
      iVar11 = iVar10;
    }
    iVar8 = iVar8 + iVar6;
    iVar11 = iVar11 + iVar6;
    if (((-1 < iVar11) && (iVar8 <= iStack_ec)) && ((iVar7 <= local_f0 && (-1 < iVar5)))) {
      iVar10 = 0;
      if (0 < iVar7) {
        iVar10 = iVar7;
      }
      if (local_f0 < iVar5) {
        iVar5 = local_f0;
      }
      iVar3 = 0;
      if (0 < iVar8) {
        iVar3 = iVar8;
      }
      if (iStack_ec < iVar11) {
        iVar11 = iStack_ec;
      }
      plVar4 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x128))();
      local_b8 = (longlong *)(**(code **)(*plVar4 + 0x88))(plVar4);
      local_b0 = 0;
      local_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = param_3;
      (**(code **)(*local_b8 + 8))(local_b8,&local_b8);
      plVar4 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x128))();
      lVar1 = *local_res20;
      local_e8 = (longlong *)(**(code **)(*plVar4 + 0x88))();
      local_e0 = 0;
      local_d0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = lVar1;
      (**(code **)(*local_e8 + 8))(local_e8,&local_e8);
      iVar11 = iVar11 + -1;
      if (iVar3 <= iVar11) {
        iVar5 = iVar5 + -1;
        iVar6 = iVar11 - iVar6;
        do {
          (**(code **)(*local_b8 + 0x10))(local_b8,&local_b8,iVar11);
          (**(code **)(*local_e8 + 0x10))(local_e8,&local_e8,iVar6);
          if (iVar10 <= iVar5) {
            iVar7 = iVar5 - iVar9;
            iVar8 = iVar5;
            do {
              (**(code **)(*local_e8 + 0x28))(local_e8,&local_res20,&local_e8,iVar7);
              if ((*(char *)(*(longlong *)(param_1 + 0x10) + 0x50) == '\0') ||
                 (*(char *)(*(longlong *)(param_1 + 8) + 0x50) == '\0')) {
                local_res20._0_4_ = CONCAT13(0xff,(undefined3)local_res20);
              }
              (**(code **)(*local_b8 + 0x18))
                        (local_b8,&local_b8,iVar8,(ulonglong)local_res20 & 0xffffffff);
              iVar8 = iVar8 + -1;
              iVar7 = iVar7 + -1;
            } while (iVar10 <= iVar8);
          }
          iVar11 = iVar11 + -1;
          iVar6 = iVar6 + -1;
        } while (iVar3 <= iVar11);
      }
    }
  }
  return;
}



// FUNCTION 1433bc3a0 FUN_1433bc3a0 body=620 status=ok
// SIG undefined FUN_1433bc3a0(void)

void FUN_1433bc3a0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined4 local_res8;
  int local_res20;
  int local_res24;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  uVar1 = *param_4;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  FUN_1432c7ad0(param_3,0,&local_68);
  FUN_1432c7ad0(uVar1,0,&local_48);
  local_d8 = 0;
  uStack_d0 = 0;
  *(undefined4 *)param_1[9] = 0;
  cVar2 = (**(code **)(*param_1 + 0x48))(param_1,&local_d8,&local_res20);
  if (cVar2 != '\0') {
    plVar3 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x128))();
    local_98 = (longlong *)(**(code **)(*plVar3 + 0x88))(plVar3);
    local_90 = 0;
    local_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = param_3;
    (**(code **)(*local_98 + 8))(local_98,&local_98);
    plVar3 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x128))();
    uVar1 = *param_4;
    local_c8 = (longlong *)(**(code **)(*plVar3 + 0x88))(plVar3);
    local_c0 = 0;
    local_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = uVar1;
    (**(code **)(*local_c8 + 8))(local_c8,&local_c8);
    if (local_d8._4_4_ < uStack_d0._4_4_) {
      iVar5 = local_d8._4_4_;
      do {
        (**(code **)(*local_98 + 0x10))(local_98,&local_98,iVar5);
        (**(code **)(*local_c8 + 0x10))(local_c8,&local_c8,iVar5 - local_res24);
        iVar6 = (int)local_d8;
        if ((int)local_d8 < (int)uStack_d0) {
          do {
            (**(code **)(*local_c8 + 0x28))(local_c8,&local_res8,&local_c8,iVar6 - local_res20);
            bVar9 = false;
            uVar8 = *(uint *)((longlong)param_1 + 0x34) & *(uint *)((longlong)param_1 + 0x3c);
            uVar7 = *(uint *)((longlong)param_1 + 0x3c) & local_res8;
            switch((int)param_1[6]) {
            case 0:
              bVar9 = uVar7 < uVar8;
              break;
            case 1:
              bVar9 = uVar7 <= uVar8;
              break;
            case 2:
              bVar9 = uVar8 < uVar7;
              break;
            case 3:
              bVar9 = uVar8 <= uVar7;
              break;
            case 4:
              bVar9 = uVar7 == uVar8;
              break;
            case 5:
              bVar9 = uVar7 != uVar8;
            }
            uVar4 = local_res8._3_1_;
            if (*(char *)(param_1[2] + 0x50) == '\0') {
              uVar4 = 0xff;
            }
            local_res8 = CONCAT13(uVar4,(undefined3)local_res8);
            uVar7 = local_res8;
            if (bVar9) {
              uVar7 = *(uint *)(param_1 + 7);
            }
            uVar8 = uVar7 | 0xff000000;
            if (*(char *)(param_1[1] + 0x50) != '\0') {
              uVar8 = uVar7;
            }
            if ((char)param_1[8] == '\0') {
              if (bVar9) {
LAB_1433bc5c3:
                *(int *)param_1[9] = *(int *)param_1[9] + 1;
                goto LAB_1433bc5c9;
              }
            }
            else {
              if (bVar9) goto LAB_1433bc5c3;
LAB_1433bc5c9:
              (**(code **)(*local_98 + 0x18))(local_98,&local_98,iVar6,uVar8);
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)uStack_d0);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < uStack_d0._4_4_);
    }
  }
  return;
}



// FUNCTION 1433bc650 FUN_1433bc650 body=355 status=ok
// SIG undefined FUN_1433bc650(void)

void FUN_1433bc650(undefined8 param_1,float param_2,float param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)param_2;
  iVar2 = (int)param_3;
  _guard_xfg_dispatch_icall_nop((param_2 - (float)iVar1) * 3.1415927);
  _guard_xfg_dispatch_icall_nop((param_3 - (float)iVar2) * 3.1415927);
  FUN_1433bc7c0(param_1,iVar1,iVar2);
  FUN_1433bc7c0(param_1,iVar1 + 1,iVar2);
  FUN_1433bc7c0(param_1,iVar1 + 1,iVar2 + 1);
  FUN_1433bc7c0(param_1,iVar1,iVar2 + 1);
  return;
}



// FUNCTION 1433bc7c0 FUN_1433bc7c0 body=640 status=ok
// SIG undefined FUN_1433bc7c0(void)

float FUN_1433bc7c0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  uVar10 = (param_3 + -1) * iVar1 + param_2;
  uVar6 = (param_3 + 1) * iVar1 + param_2;
  uVar11 = iVar1 * param_3 + param_2;
  uVar8 = uVar10 - 1 ^ (uVar10 - 1) * 0x2000;
  iVar1 = param_1[3];
  uVar9 = uVar10 + 1 ^ (uVar10 + 1) * 0x2000;
  uVar7 = uVar6 - 1 ^ (uVar6 - 1) * 0x2000;
  uVar12 = uVar6 + 1 ^ (uVar6 + 1) * 0x2000;
  uVar5 = uVar11 - 1 ^ (uVar11 - 1) * 0x2000;
  uVar4 = uVar11 + 1 ^ (uVar11 + 1) * 0x2000;
  uVar10 = uVar10 ^ uVar10 * 0x2000;
  uVar6 = uVar6 ^ uVar6 * 0x2000;
  uVar11 = uVar11 ^ uVar11 * 0x2000;
  return ((1.0 - (float)((iVar2 * uVar4 * uVar4 + iVar3) * uVar4 + iVar1 & 0x7fffffff) *
                 9.313226e-10) +
          (1.0 - (float)((iVar2 * uVar5 * uVar5 + iVar3) * uVar5 + iVar1 & 0x7fffffff) *
                 9.313226e-10) +
          (1.0 - (float)((iVar2 * uVar10 * uVar10 + iVar3) * uVar10 + iVar1 & 0x7fffffff) *
                 9.313226e-10) +
         (1.0 - (float)((iVar2 * uVar6 * uVar6 + iVar3) * uVar6 + iVar1 & 0x7fffffff) * 9.313226e-10
         )) * 0.125 +
         ((1.0 - (float)((iVar2 * uVar9 * uVar9 + iVar3) * uVar9 + iVar1 & 0x7fffffff) *
                 9.313226e-10) +
          (1.0 - (float)((iVar2 * uVar8 * uVar8 + iVar3) * uVar8 + iVar1 & 0x7fffffff) *
                 9.313226e-10) +
          (1.0 - (float)((iVar2 * uVar7 * uVar7 + iVar3) * uVar7 + iVar1 & 0x7fffffff) *
                 9.313226e-10) +
         (1.0 - (float)((iVar2 * uVar12 * uVar12 + iVar3) * uVar12 + iVar1 & 0x7fffffff) *
                9.313226e-10)) * 0.0625 +
         (1.0 - (float)((iVar3 + iVar2 * uVar11 * uVar11) * uVar11 + iVar1 & 0x7fffffff) *
                9.313226e-10) * 0.25;
}



// FUNCTION 1433bca40 FUN_1433bca40 body=331 status=ok
// SIG undefined FUN_1433bca40(void)

undefined8 * FUN_1433bca40(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 local_res8 [2];
  
  puVar2 = (undefined8 *)0x0;
  local_res8[0] = 0x47;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145b00760;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = &PTR_LAB_145b00768;
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
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *param_1 = &PTR_FUN_145b05db0;
  param_1[2] = &PTR_LAB_145b05db8;
  *(undefined2 *)(param_1 + 0x10) = 0;
  param_1[0x12] = 0;
  puVar1 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x80,local_res8)
  ;
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &PTR_FUN_144f70a50;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = puVar1 + 0xd;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    *puVar1 = &PTR_FUN_145af9280;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar2 = puVar1;
  }
  if ((RefCountImpl *)param_1[0x12] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0x12]);
  }
  param_1[0x12] = puVar2;
  return param_1;
}



// FUNCTION 1433bcba0 FUN_1433bcba0 body=44 status=ok
// SIG undefined FUN_1433bcba0(void)

void FUN_1433bcba0(longlong param_1)

{
  FUN_1432f0900(*(undefined8 *)(param_1 + 0x90));
  FUN_1433711a0(param_1,*(undefined8 *)(param_1 + 0x90),0);
  return;
}



// FUNCTION 1433bcbe0 FUN_1433bcbe0 body=109 status=ok
// SIG undefined FUN_1433bcbe0(void)

longlong FUN_1433bcbe0(longlong param_1,uint param_2)

{
  if (*(RefCountImpl **)(param_1 + 0x90) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x90));
  }
  FUN_143371120(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 1433bcc50 Blend body=209 status=ok
// SIG Color Blend(Color param_1, Color param_2, float param_3)

/* public: static class Scaleform::Render::Color __cdecl Scaleform::Render::Color::Blend(class
   Scaleform::Render::Color,class Scaleform::Render::Color,float) */

undefined1 * __cdecl
Scaleform::Render::Color::Blend(undefined1 *param_1,byte *param_2,byte *param_3,float param_4)

{
                    /* 0x33bcc50  70  ?Blend@Color@Render@Scaleform@@SA?AV123@V123@0M@Z */
  param_1[2] = (char)(longlong)
                     (((float)param_3[2] - (float)param_2[2]) * param_4 + (float)param_2[2] + 0.5);
  param_1[1] = (char)(longlong)
                     (((float)param_3[1] - (float)param_2[1]) * param_4 + (float)param_2[1] + 0.5);
  *param_1 = (char)(longlong)(((float)*param_3 - (float)*param_2) * param_4 + (float)*param_2 + 0.5)
  ;
  param_1[3] = (char)(longlong)
                     (((float)param_3[3] - (float)param_2[3]) * param_4 + (float)param_2[3] + 0.5);
  return param_1;
}



// FUNCTION 1433bcd30 SetHSV body=323 status=ok
// SIG void SetHSV(Color * this, int param_1, int param_2, int param_3)

/* public: void __cdecl Scaleform::Render::Color::SetHSV(int,int,int) __ptr64 */

void __thiscall Scaleform::Render::Color::SetHSV(Color *this,int param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  Color CVar6;
  Color CVar7;
  uint uVar8;
  uint uVar9;
  
                    /* 0x33bcd30  408  ?SetHSV@Color@Render@Scaleform@@QEAAXHHH@Z */
  CVar6 = SUB41(param_3,0);
  uVar9 = param_3;
  CVar7 = CVar6;
  if ((param_2 == 0) || (param_1 < 0)) goto LAB_1433bce5d;
  if (0x167 < param_1) {
    iVar3 = (int)((ulonglong)((longlong)param_1 * 0x49f49f49) >> 0x20) - param_1;
    param_1 = param_1 + ((iVar3 >> 8) - (iVar3 >> 0x1f)) * 0x168;
  }
  uVar2 = param_1 / 0x3c;
  uVar5 = ((0xff - param_2) * param_3 * 2 + 0xffU) / 0x1fe;
  if ((uVar2 & 1) == 0) {
    uVar1 = (ulonglong)((((param_1 % 0x3c) * 2 + -0x78) * param_2 + 0x7788) * param_3 + 0x3bc4) /
            0x7788;
    CVar7 = SUB81(uVar1,0);
    uVar4 = (uint)uVar1;
    uVar8 = uVar5;
    if (uVar2 != 0) {
      uVar9 = uVar5;
      if ((uVar2 != 2) && (uVar9 = param_3, CVar7 = CVar6, uVar2 == 4)) {
        uVar9 = uVar4;
        param_3 = uVar5;
      }
      goto LAB_1433bce5d;
    }
  }
  else {
    uVar1 = (ulonglong)((0x3bc4 - (param_1 % 0x3c) * param_2) * param_3 * 2 + 0x3bc4) / 0x7788;
    uVar4 = (uint)uVar1;
    if (uVar2 == 1) {
      uVar9 = uVar4;
      CVar7 = SUB41(uVar5,0);
      goto LAB_1433bce5d;
    }
    uVar9 = uVar5;
    uVar8 = param_3;
    if (uVar2 != 3) {
      uVar9 = param_3;
      if (uVar2 == 5) {
        param_3 = uVar5;
        CVar7 = SUB81(uVar1,0);
      }
      goto LAB_1433bce5d;
    }
  }
  param_3 = uVar4;
  CVar7 = SUB41(uVar8,0);
LAB_1433bce5d:
  this[1] = SUB41(param_3,0);
  this[2] = SUB41(uVar9,0);
  *this = CVar7;
  return;
}



// FUNCTION 1433bce80 GetHSV body=328 status=ok
// SIG void GetHSV(Color * this, int * param_1, int * param_2, int * param_3)

/* public: void __cdecl Scaleform::Render::Color::GetHSV(int * __ptr64,int * __ptr64,int *
   __ptr64)const __ptr64 */

void __thiscall Scaleform::Render::Color::GetHSV(Color *this,int *param_1,int *param_2,int *param_3)

{
  Color CVar1;
  Color CVar2;
  Color CVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
                    /* 0x33bce80  167  ?GetHSV@Color@Render@Scaleform@@QEBAXPEAH00@Z */
  CVar1 = this[2];
  CVar2 = this[1];
  CVar3 = *this;
  uVar5 = (uint)(byte)CVar1;
  if ((uint)(byte)CVar1 < (uint)(byte)CVar2) {
    uVar5 = (uint)(byte)CVar2;
  }
  uVar6 = (uint)(byte)CVar1;
  cVar8 = uVar6 < (byte)CVar2;
  uVar9 = (uint)(byte)CVar3;
  if (uVar5 < (byte)CVar3) {
    cVar8 = '\x02';
    uVar5 = uVar9;
  }
  *param_3 = uVar5;
  uVar11 = (uint)(byte)CVar2;
  uVar4 = uVar6;
  if ((byte)CVar2 < uVar6) {
    uVar4 = (uint)(byte)CVar2;
  }
  uVar10 = (uint)(byte)CVar3;
  if (uVar9 < uVar4) {
    uVar4 = (uint)(byte)CVar3;
  }
  iVar7 = uVar5 - uVar4;
  if (uVar5 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (iVar7 * 0x1fe + uVar5) / (uVar5 * 2);
  }
  *param_2 = uVar5;
  if (uVar5 == 0) {
    *param_1 = 0;
  }
  else {
    if (cVar8 == '\0') {
      if (uVar11 < uVar10) {
        iVar7 = (int)(iVar7 * 0x79 + uVar9 * -0x78 + uVar11 * 0x78) / (iVar7 * 2) + 300;
      }
      else {
        iVar7 = (int)((uVar11 - uVar9) * 0x78 + iVar7) / (iVar7 * 2);
      }
    }
    else {
      uVar5 = (uint)(byte)CVar1;
      if (cVar8 == '\x01') {
        if (uVar6 < uVar10) {
          iVar7 = (int)((uVar10 - uVar5) * 0x78 + iVar7) / (iVar7 * 2) + 0x78;
        }
        else {
          iVar7 = (int)(iVar7 * 0x79 + uVar5 * -0x78 + uVar10 * 0x78) / (iVar7 * 2) + 0x3c;
        }
      }
      else {
        if (cVar8 != '\x02') {
          return;
        }
        if (uVar11 < uVar5) {
          iVar7 = (int)((uVar5 - uVar11) * 0x78 + iVar7) / (iVar7 * 2) + 0xf0;
        }
        else {
          iVar7 = (int)(iVar7 * 0x79 + uVar11 * -0x78 + uVar5 * 0x78) / (iVar7 * 2) + 0xb4;
        }
      }
    }
    *param_1 = iVar7;
  }
  return;
}



// FUNCTION 1433bcfd0 SetHSV body=267 status=ok
// SIG void SetHSV(Color * this, float param_1, float param_2, float param_3)

/* public: void __cdecl Scaleform::Render::Color::SetHSV(float,float,float) __ptr64 */

void __thiscall
Scaleform::Render::Color::SetHSV(Color *this,float param_1,float param_2,float param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
                    /* 0x33bcfd0  409  ?SetHSV@Color@Render@Scaleform@@QEAAXMMM@Z */
  fVar7 = 0.0;
  fVar2 = param_3;
  fVar3 = param_3;
  fVar4 = param_3;
  if (param_2 != 0.0) {
    if (param_1 != 1.0) {
      fVar7 = param_1 * 6.0;
    }
    iVar1 = (int)fVar7;
    fVar5 = (1.0 - param_2) * param_3;
    fVar6 = (1.0 - (fVar7 - (float)iVar1) * param_2) * param_3;
    fVar7 = (1.0 - (1.0 - (fVar7 - (float)iVar1)) * param_2) * param_3;
    fVar2 = fVar7;
    fVar4 = fVar5;
    if ((((iVar1 != 0) && (fVar2 = param_3, fVar3 = fVar6, iVar1 != 1)) &&
        (fVar3 = fVar5, fVar4 = fVar7, iVar1 != 2)) &&
       ((fVar2 = fVar6, fVar4 = param_3, iVar1 != 3 && (fVar2 = fVar5, fVar3 = fVar7, iVar1 != 4))))
    {
      fVar3 = param_3;
      fVar4 = fVar6;
    }
  }
  this[2] = SUB81((longlong)(fVar3 * 255.0),0);
  this[1] = SUB81((longlong)(fVar2 * 255.0),0);
  *this = SUB81((longlong)(fVar4 * 255.0),0);
  return;
}



// FUNCTION 1433bd0f0 GetHSV body=352 status=ok
// SIG void GetHSV(Color * this, float * param_1, float * param_2, float * param_3)

/* public: void __cdecl Scaleform::Render::Color::GetHSV(float * __ptr64,float * __ptr64,float *
   __ptr64)const __ptr64 */

void __thiscall
Scaleform::Render::Color::GetHSV(Color *this,float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
                    /* 0x33bd0f0  168  ?GetHSV@Color@Render@Scaleform@@QEBAXPEAM00@Z */
  if (this[2] == (Color)0x0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = (float)(byte)this[2] / 255.0;
  }
  if (this[1] == (Color)0x0) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = (float)(byte)this[1] / 255.0;
  }
  if (*this == (Color)0x0) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = (float)(byte)*this / 255.0;
  }
  fVar2 = fVar5;
  if (fVar5 <= fVar4) {
    fVar2 = fVar4;
  }
  fVar1 = fVar5;
  if (fVar4 <= fVar5) {
    fVar1 = fVar4;
  }
  fVar6 = fVar3;
  if (fVar3 <= fVar2) {
    fVar6 = fVar2;
  }
  fVar2 = fVar3;
  if (fVar1 <= fVar3) {
    fVar2 = fVar1;
  }
  *param_3 = fVar6;
  fVar2 = fVar6 - fVar2;
  if (fVar6 != 0.0) {
    *param_2 = fVar2 / fVar6;
    if (fVar2 / fVar6 != 0.0) {
      if (fVar3 == fVar6) {
        *param_1 = (fVar5 - fVar4) / fVar2;
      }
      else if (fVar5 == fVar6) {
        *param_1 = (fVar4 - fVar3) / fVar2 + 2.0;
      }
      else {
        *param_1 = (fVar3 - fVar5) / fVar2 + 4.0;
      }
      fVar3 = *param_1 / 6.0;
      *param_1 = fVar3;
      if (fVar3 < 0.0) {
        *param_1 = fVar3 + 1.0;
      }
      if (1.0 < *param_1) {
        *param_1 = *param_1 - 1.0;
      }
      return;
    }
    *param_1 = 0.0;
    return;
  }
  *param_2 = 0.0;
  *param_1 = 0.0;
  return;
}



// FUNCTION 1433bd260 SetHSI body=52 status=ok
// SIG void SetHSI(Color * this, int param_1, int param_2, int param_3)

/* public: void __cdecl Scaleform::Render::Color::SetHSI(int,int,int) __ptr64 */

void __thiscall Scaleform::Render::Color::SetHSI(Color *this,int param_1,int param_2,int param_3)

{
                    /* 0x33bd260  406  ?SetHSI@Color@Render@Scaleform@@QEAAXHHH@Z */
  SetHSI(this,(float)param_1 / 360.0,(float)param_2 / 255.0,(float)param_3 / 255.0);
  return;
}



// FUNCTION 1433bd2a0 GetHSI body=105 status=ok
// SIG void GetHSI(Color * this, int * param_1, int * param_2, int * param_3)

/* public: void __cdecl Scaleform::Render::Color::GetHSI(int * __ptr64,int * __ptr64,int *
   __ptr64)const __ptr64 */

void __thiscall Scaleform::Render::Color::GetHSI(Color *this,int *param_1,int *param_2,int *param_3)

{
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  
                    /* 0x33bd2a0  165  ?GetHSI@Color@Render@Scaleform@@QEBAXPEAH00@Z */
  GetHSI(this,local_res10,local_res18,local_res20);
  *param_1 = (int)(local_res10[0] * 360.0);
  *param_2 = (int)(local_res18[0] * 255.0);
  *param_3 = (int)(local_res20[0] * 255.0);
  return;
}



// FUNCTION 1433bd310 SetHSI body=145 status=ok
// SIG void SetHSI(Color * this, float param_1, float param_2, float param_3)

/* public: void __cdecl Scaleform::Render::Color::SetHSI(float,float,float) __ptr64 */

void __thiscall
Scaleform::Render::Color::SetHSI(Color *this,float param_1,float param_2,float param_3)

{
  double local_res8 [4];
  double local_18;
  double local_10;
  
                    /* 0x33bd310  407  ?SetHSI@Color@Render@Scaleform@@QEAAXMMM@Z */
  ConvertHSIToRGB((double)param_1,(double)param_2,(double)param_3,local_res8,&local_18,&local_10);
  this[2] = SUB81((longlong)((float)local_res8[0] * 255.0),0);
  this[1] = SUB81((longlong)((float)local_18 * 255.0),0);
  *this = SUB81((longlong)((float)local_10 * 255.0),0);
  return;
}



// FUNCTION 1433bd3b0 GetHSI body=408 status=ok
// SIG void GetHSI(Color * this, float * param_1, float * param_2, float * param_3)

/* public: void __cdecl Scaleform::Render::Color::GetHSI(float * __ptr64,float * __ptr64,float *
   __ptr64)const __ptr64 */

void __thiscall
Scaleform::Render::Color::GetHSI(Color *this,float *param_1,float *param_2,float *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  
                    /* 0x33bd3b0  166  ?GetHSI@Color@Render@Scaleform@@QEBAXPEAM00@Z */
  fVar4 = 0.0;
  if (this[2] == (Color)0x0) {
    fVar7 = 0.0;
  }
  else {
    fVar7 = (float)(byte)this[2] / 255.0;
  }
  if (this[1] == (Color)0x0) {
    fVar8 = 0.0;
  }
  else {
    fVar8 = (float)(byte)this[1] / 255.0;
  }
  if (*this != (Color)0x0) {
    fVar4 = (float)(byte)*this / 255.0;
  }
  dVar10 = (double)fVar7;
  dVar2 = (double)fVar8;
  dVar6 = 0.0;
  dVar3 = (double)fVar4;
  dVar1 = (dVar10 + dVar2 + dVar3) / 3.0;
  if (dVar1 == 0.0) {
    dVar5 = 1.0;
  }
  else {
    dVar5 = dVar10;
    if (dVar2 <= dVar10) {
      dVar5 = dVar2;
    }
    if (dVar3 <= dVar5) {
      dVar5 = dVar3;
    }
    dVar5 = 1.0 - dVar5 / dVar1;
  }
  if ((dVar10 != dVar2) || (dVar2 != dVar3)) {
    dVar9 = dVar10 - dVar2;
    dVar6 = ::_guard_xfg_dispatch_icall_nop((dVar2 - dVar3) * (dVar10 - dVar3) + dVar9 * dVar9);
    dVar6 = ::_guard_xfg_dispatch_icall_nop((((dVar9 + dVar10) - dVar3) * 0.5) / dVar6);
    if (dVar2 <= dVar3) {
      dVar6 = 0.6366197723675814 - dVar6;
    }
  }
  *param_1 = (float)dVar6;
  *param_2 = (float)dVar5;
  *param_3 = (float)dVar1;
  return;
}



// FUNCTION 1433bd550 ConvertHSIToRGB body=626 status=ok
// SIG void ConvertHSIToRGB(double param_1, double param_2, double param_3, double * param_4, double * param_5, double * param_6)

/* public: static void __cdecl Scaleform::Render::Color::ConvertHSIToRGB(double,double,double,double
   * __ptr64,double * __ptr64,double * __ptr64) */

void __cdecl
Scaleform::Render::Color::ConvertHSIToRGB
          (double param_1,double param_2,double param_3,double *param_4,double *param_5,
          double *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
                    /* 0x33bd550  96  ?ConvertHSIToRGB@Color@Render@Scaleform@@SAXNNNPEAN00@Z */
  dVar1 = param_3;
  dVar3 = param_3;
  if (param_1 != 0.0) {
    if ((param_1 <= 0.0) || (2.0943951023931957 <= param_1)) {
      if ((param_1 < 2.0943951023931957) || (4.188790204786391 <= param_1)) {
        dVar1 = (1.0 - param_2) * param_3;
        dVar3 = ::_guard_xfg_dispatch_icall_nop(param_1 - 5.235987755982989);
        dVar4 = ::_guard_xfg_dispatch_icall_nop(3.0);
        dVar3 = dVar3 * (1.0 / dVar4) * 1.5;
        dVar3 = (dVar3 + 1.5) * param_3 - (dVar3 + 0.5) * dVar1;
        param_3 = (param_3 * 3.0 - dVar3) - dVar1;
      }
      else {
        dVar3 = (1.0 - param_2) * param_3;
        dVar1 = ::_guard_xfg_dispatch_icall_nop(param_1 - 3.141592653589793);
        dVar2 = ::_guard_xfg_dispatch_icall_nop(3.0);
        dVar4 = param_3 * 3.0;
        dVar1 = dVar1 * (1.0 / dVar2) * 1.5;
        param_3 = (dVar1 + 1.5) * param_3 - (dVar1 + 0.5) * dVar3;
        dVar1 = (dVar4 - param_3) - dVar3;
      }
    }
    else {
      dVar3 = (1.0 - param_2) * param_3;
      dVar1 = ::_guard_xfg_dispatch_icall_nop(param_1 - 1.0471975511965979);
      dVar2 = ::_guard_xfg_dispatch_icall_nop(3.0);
      dVar4 = param_3 * 3.0;
      dVar1 = dVar1 * (1.0 / dVar2) * 1.5;
      dVar1 = (dVar1 + 1.5) * param_3 - (dVar1 + 0.5) * dVar3;
      param_3 = dVar3;
      dVar3 = (dVar4 - dVar1) - dVar3;
    }
  }
  *param_4 = dVar3;
  *param_5 = dVar1;
  *param_6 = param_3;
  return;
}



// FUNCTION 1433bd7d0 ConvertRGBToHSI body=294 status=ok
// SIG void ConvertRGBToHSI(double param_1, double param_2, double param_3, double * param_4, double * param_5, double * param_6)

/* public: static void __cdecl Scaleform::Render::Color::ConvertRGBToHSI(double,double,double,double
   * __ptr64,double * __ptr64,double * __ptr64) */

void __cdecl
Scaleform::Render::Color::ConvertRGBToHSI
          (double param_1,double param_2,double param_3,double *param_4,double *param_5,
          double *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
                    /* 0x33bd7d0  97  ?ConvertRGBToHSI@Color@Render@Scaleform@@SAXNNNPEAN00@Z */
  dVar3 = 0.0;
  dVar1 = (param_1 + param_2 + param_3) / 3.0;
  if (dVar1 == 0.0) {
    dVar2 = 1.0;
  }
  else {
    dVar2 = param_1;
    if (param_2 <= param_1) {
      dVar2 = param_2;
    }
    if (param_3 <= dVar2) {
      dVar2 = param_3;
    }
    dVar2 = 1.0 - dVar2 / dVar1;
  }
  if ((param_1 != param_2) || (param_2 != param_3)) {
    dVar4 = param_1 - param_2;
    dVar3 = ::_guard_xfg_dispatch_icall_nop
                      ((param_2 - param_3) * (param_1 - param_3) + dVar4 * dVar4);
    dVar3 = ::_guard_xfg_dispatch_icall_nop((((dVar4 + param_1) - param_3) * 0.5) / dVar3);
    if (param_2 <= param_3) {
      dVar3 = 0.6366197723675814 - dVar3;
    }
  }
  *param_4 = dVar3;
  *param_5 = dVar2;
  *param_6 = dVar1;
  return;
}



// FUNCTION 1433bd900 FUN_1433bd900 body=266 status=ok
// SIG undefined FUN_1433bd900(void)

void FUN_1433bd900(longlong *param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  
  uVar2 = (**(code **)(*param_1 + 0x10))();
  uVar3 = (**(code **)(*param_1 + 0x18))(param_1);
  cVar1 = FUN_1433bdaf0(param_1,param_2,uVar2,uVar3,param_3,param_4,param_5,param_6);
  if (cVar1 == '\0') {
    fVar4 = *(float *)(param_2 + 4) * 0.25;
    FUN_1433bdd50(param_1,param_2,fVar4 * fVar4,uVar2,uVar3,param_3,param_4,param_5,param_6,0);
  }
  return;
}



// FUNCTION 1433bda10 FUN_1433bda10 body=209 status=ok
// SIG undefined FUN_1433bda10(void)

void FUN_1433bda10(longlong *param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  
  uVar1 = (**(code **)(*param_1 + 0x10))();
  uVar2 = (**(code **)(*param_1 + 0x18))(param_1);
  fVar3 = *(float *)(param_2 + 4) * 0.25;
  FUN_1433bdfb0(param_1,param_2,fVar3 * fVar3,uVar1,uVar2,param_3,param_4,param_5,param_6,param_7,
                param_8,0);
  return;
}



// FUNCTION 1433bdaf0 FUN_1433bdaf0 body=600 status=ok
// SIG undefined FUN_1433bdaf0(void)

undefined8
FUN_1433bdaf0(longlong *param_1,longlong param_2,float param_3,float param_4,float param_5,
             float param_6,float param_7,float param_8)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar1 = 0;
  fVar5 = param_7 - param_3;
  fVar6 = param_8 - param_4;
  fVar4 = fVar6 * fVar6 + fVar5 * fVar5;
  fVar2 = *(float *)(param_2 + 8) * 0.25;
  fVar3 = ABS((param_5 - param_7) * fVar6 - (param_6 - param_8) * fVar5);
  if (fVar3 * fVar3 <= fVar2 * fVar2 * fVar4) {
    if (((fVar4 == 0.0) ||
        (fVar4 = ((param_6 - param_4) * fVar6 + (param_5 - param_3) * fVar5) / fVar4, fVar4 < 0.0))
       || (1.0 < fVar4)) {
      fVar6 = param_5 - param_3;
      fVar7 = param_6 - param_4;
      fVar2 = _guard_xfg_dispatch_icall_nop(fVar7 * fVar7 + fVar6 * fVar6);
      fVar4 = param_7 - param_5;
      fVar5 = param_8 - param_6;
      fVar3 = _guard_xfg_dispatch_icall_nop(fVar5 * fVar5 + fVar4 * fVar4);
      if (fVar3 + fVar2 != 0.0) {
        fVar2 = fVar2 / (fVar3 + fVar2);
        param_3 = fVar6 * fVar2 + param_3;
        param_4 = fVar7 * fVar2 + param_4;
        (**(code **)(*param_1 + 0x20))
                  (param_1,((fVar4 * fVar2 + param_5) - param_3) * fVar2 + param_3,
                   ((fVar5 * fVar2 + param_6) - param_4) * fVar2 + param_4);
      }
    }
    (**(code **)(*param_1 + 0x20))(param_1,param_7,param_8);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 1433bdd50 FUN_1433bdd50 body=591 status=ok
// SIG undefined FUN_1433bdd50(void)

void FUN_1433bdd50(longlong *param_1,longlong param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,float param_8,float param_9,int param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (param_9 - param_5) * (param_6 - param_8) - (param_8 - param_4) * (param_7 - param_9);
  while (((fVar2 = ABS(fVar2), fVar2 != 0.0 &&
          (((param_9 - param_5) * (param_9 - param_5) + (param_8 - param_4) * (param_8 - param_4)) *
           param_3 < fVar2 * fVar2)) && (param_10 < *(int *)(param_2 + 0x48)))) {
    param_10 = param_10 + 1;
    fVar2 = (param_5 + param_7) * 0.5;
    fVar1 = (param_4 + param_6) * 0.5;
    param_7 = (param_7 + param_9) * 0.5;
    param_6 = (param_6 + param_8) * 0.5;
    fVar3 = (param_7 + fVar2) * 0.5;
    fVar4 = (param_6 + fVar1) * 0.5;
    FUN_1433bdd50(param_1,param_2,param_3,param_4,param_5,fVar1,fVar2,fVar4,fVar3,param_10);
    fVar2 = (param_9 - fVar3) * (param_6 - param_8) - (param_8 - fVar4) * (param_7 - param_9);
    param_4 = fVar4;
    param_5 = fVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x0001433bdf9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,param_8,param_9);
  return;
}



// FUNCTION 1433bdfb0 FUN_1433bdfb0 body=1857 status=ok
// SIG undefined FUN_1433bdfb0(void)

void FUN_1433bdfb0(longlong *param_1,longlong param_2,undefined8 param_3,float param_4,float param_5
                  ,float param_6,float param_7,float param_8,float param_9,float param_10,
                  float param_11,int param_12)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
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
  
  fVar9 = (float)param_3;
  if (param_12 <= *(int *)(param_2 + 0x48)) {
    do {
      fVar4 = (param_6 + param_8) * 0.5;
      fVar8 = (param_7 + param_9) * 0.5;
      fVar18 = (param_8 + param_10) * 0.5;
      fVar15 = (param_5 + param_7) * 0.5;
      fVar11 = (param_4 + param_6) * 0.5;
      fVar20 = (param_9 + param_11) * 0.5;
      fVar12 = (fVar4 + fVar11) * 0.5;
      fVar21 = param_8 - param_10;
      fVar14 = (fVar8 + fVar15) * 0.5;
      fVar16 = (fVar18 + fVar4) * 0.5;
      fVar19 = (fVar20 + fVar8) * 0.5;
      fVar17 = param_10 - param_4;
      fVar13 = param_11 - param_5;
      fVar5 = (fVar16 + fVar12) * 0.5;
      fVar6 = (fVar19 + fVar14) * 0.5;
      fVar10 = param_9 - param_11;
      fVar4 = ABS((param_6 - param_10) * fVar13 - (param_7 - param_11) * fVar17);
      fVar8 = ABS(fVar21 * fVar13 - fVar10 * fVar17);
      cVar1 = '\0';
      if (1e-10 < fVar4) {
        cVar1 = '\x02';
      }
      cVar1 = (1e-10 < fVar8) + cVar1;
      if (cVar1 == '\0') {
        fVar4 = fVar13 * fVar13 + fVar17 * fVar17;
        if (fVar4 == 0.0) {
          fVar4 = fVar10 * fVar10 + fVar21 * fVar21;
          fVar8 = (param_7 - param_5) * (param_7 - param_5) +
                  (param_6 - param_4) * (param_6 - param_4);
        }
        else {
          fVar4 = 1.0 / fVar4;
          fVar8 = ((param_6 - param_4) * fVar17 + (param_7 - param_5) * fVar13) * fVar4;
          fVar4 = ((param_8 - param_4) * fVar17 + (param_9 - param_5) * fVar13) * fVar4;
          if ((((0.0 < fVar8) && (fVar8 < 1.0)) && (0.0 < fVar4)) && (fVar4 < 1.0))
          goto LAB_1433be38a;
          if (0.0 < fVar8) {
            if (fVar8 < 1.0) {
              param_7 = (fVar8 * fVar13 + param_5) - param_7;
              param_6 = (fVar8 * fVar17 + param_4) - param_6;
              fVar8 = param_7 * param_7 + param_6 * param_6;
            }
            else {
              fVar8 = (param_11 - param_7) * (param_11 - param_7) +
                      (param_10 - param_6) * (param_10 - param_6);
            }
          }
          else {
            fVar8 = (param_5 - param_7) * (param_5 - param_7) +
                    (param_4 - param_6) * (param_4 - param_6);
          }
          fVar10 = param_5;
          fVar21 = param_4;
          if ((0.0 < fVar4) && (fVar10 = param_11, fVar21 = param_10, fVar4 < 1.0)) {
            fVar10 = fVar4 * fVar13 + param_5;
            fVar21 = fVar4 * fVar17 + param_4;
          }
          fVar4 = (fVar10 - param_9) * (fVar10 - param_9) + (fVar21 - param_8) * (fVar21 - param_8);
        }
        if (fVar8 < fVar9) goto LAB_1433be38a;
        bVar3 = fVar9 == fVar4;
        bVar2 = fVar9 < fVar4;
LAB_1433be64a:
        if (!bVar2 && !bVar3) {
LAB_1433be38a:
          (**(code **)(*param_1 + 0x20))(param_1,param_10,param_11);
          return;
        }
      }
      else if (cVar1 == '\x01') {
        if (fVar8 * fVar8 <= (fVar13 * fVar13 + fVar17 * fVar17) * fVar9) {
          fVar4 = _guard_xfg_dispatch_icall_nop(param_11 - param_9,param_10 - param_8);
          fVar8 = _guard_xfg_dispatch_icall_nop(param_9 - param_7,param_8 - param_6);
          fVar4 = ABS(fVar4 - fVar8);
          if (3.1415927 <= fVar4) {
            fVar4 = 6.2831855 - fVar4;
          }
          bVar3 = fVar4 == 0.25;
          bVar2 = 0.25 < fVar4;
          goto LAB_1433be64a;
        }
      }
      else if (cVar1 == '\x02') {
        if (fVar4 * fVar4 <= (fVar13 * fVar13 + fVar17 * fVar17) * fVar9) {
          fVar4 = _guard_xfg_dispatch_icall_nop(param_9 - param_7,param_8 - param_6);
          fVar8 = _guard_xfg_dispatch_icall_nop(param_7 - param_5,param_6 - param_4);
          fVar4 = ABS(fVar4 - fVar8);
          if (3.1415927 <= fVar4) {
            fVar4 = 6.2831855 - fVar4;
          }
          if (fVar4 < 0.25) goto LAB_1433be38a;
        }
      }
      else if ((cVar1 == '\x03') &&
              ((fVar8 + fVar4) * (fVar8 + fVar4) <= (fVar13 * fVar13 + fVar17 * fVar17) * fVar9)) {
        fVar8 = _guard_xfg_dispatch_icall_nop(param_9 - param_7,param_8 - param_6);
        dVar7 = _guard_xfg_dispatch_icall_nop
                          ((double)(param_7 - param_5),(double)(param_6 - param_4));
        fVar4 = ABS((float)((double)fVar8 - dVar7));
        dVar7 = _guard_xfg_dispatch_icall_nop
                          ((double)(param_11 - param_9),(double)(param_10 - param_8));
        fVar8 = ABS((float)(dVar7 - (double)fVar8));
        if (3.1415927 <= fVar4) {
          fVar4 = 6.2831855 - fVar4;
        }
        if (3.1415927 <= fVar8) {
          fVar8 = 6.2831855 - fVar8;
        }
        bVar3 = fVar8 + fVar4 == 0.25;
        bVar2 = 0.25 < fVar8 + fVar4;
        goto LAB_1433be64a;
      }
      param_12 = param_12 + 1;
      FUN_1433bdfb0(param_1,param_2,param_3,param_4,param_5,fVar11,fVar15,fVar12,fVar14,fVar5,fVar6,
                    param_12);
      param_7 = fVar19;
      param_6 = fVar16;
      param_9 = fVar20;
      param_8 = fVar18;
      param_4 = fVar5;
      param_5 = fVar6;
    } while (param_12 <= *(int *)(param_2 + 0x48));
  }
  return;
}



// FUNCTION 1433be740 FUN_1433be740 body=77 status=ok
// SIG undefined FUN_1433be740(void)

longlong FUN_1433be740(longlong *param_1)

{
  int iVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  iVar1 = (**(code **)(*param_1 + 0x10))();
  if (iVar1 != -1) {
    (**(code **)(*param_1 + 0x38))(param_1,iVar1,&local_18);
    return (longlong)-local_18._4_4_;
  }
  return 0;
}



// FUNCTION 1433be7a0 FUN_1433be7a0 body=438 status=ok
// SIG undefined FUN_1433be7a0(void)

void FUN_1433be7a0(longlong *param_1,longlong param_2)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  float fVar9;
  undefined4 local_res8;
  undefined2 local_resc;
  undefined8 local_38;
  undefined2 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if (((short)param_1[4] == 0) && (*(short *)((longlong)param_1 + 0x22) == 0)) {
    puVar5 = &local_38;
    local_30 = 0x5a;
    local_38 = 0x5857565554464548;
    local_38._0_1_ = 'H';
    local_res8 = 0x7776787a;
    local_resc = 0x79;
    cVar4 = (char)local_38;
    do {
      local_28 = 0;
      uStack_20 = 0;
      iVar2 = (**(code **)(*param_1 + 0x10))(param_1,cVar4);
      if (iVar2 != -1) {
        (**(code **)(*param_1 + 0x38))(param_1,iVar2,&local_28);
        fVar9 = -local_28._4_4_;
        if ((short)(longlong)fVar9 != 0) {
          puVar7 = &local_res8;
          cVar4 = (char)local_res8;
          goto joined_r0x0001433be8f4;
        }
      }
      cVar4 = *(char *)((longlong)puVar5 + 1);
      puVar5 = (undefined8 *)((longlong)puVar5 + 1);
    } while (cVar4 != '\0');
  }
LAB_1433be86c:
  if (param_2 != 0) {
    pcVar8 = "";
    pcVar6 = "";
    if ((*(byte *)((longlong)param_1 + 0x1c) & 1) != 0) {
      pcVar6 = " Italic";
    }
    if ((*(uint *)((longlong)param_1 + 0x1c) >> 1 & 1) != 0) {
      pcVar8 = " Bold";
    }
    uVar3 = (**(code **)(*param_1 + 8))(param_1);
    FUN_14332bf30(param_2,
                  "Font \'%s%s%s\': No hinting chars (any of \'HEFTUVWXZ\' and \'zxvwy\'). Auto-Hinting disabled."
                  ,uVar3,pcVar8,pcVar6);
  }
  sVar1 = -1;
  *(undefined2 *)((longlong)param_1 + 0x22) = 0xffff;
LAB_1433be8c9:
  *(short *)(param_1 + 4) = sVar1;
  return;
joined_r0x0001433be8f4:
  if (cVar4 == '\0') goto LAB_1433be86c;
  local_28 = 0;
  uStack_20 = 0;
  iVar2 = (**(code **)(*param_1 + 0x10))(param_1,cVar4);
  if (iVar2 != -1) {
    (**(code **)(*param_1 + 0x38))(param_1,iVar2,&local_28);
    sVar1 = (short)(longlong)-local_28._4_4_;
    if (sVar1 != 0) {
      *(short *)((longlong)param_1 + 0x22) = (short)(longlong)fVar9;
      goto LAB_1433be8c9;
    }
  }
  cVar4 = *(char *)((longlong)puVar7 + 1);
  puVar7 = (undefined4 *)((longlong)puVar7 + 1);
  goto joined_r0x0001433be8f4;
}



// FUNCTION 1433be960 FUN_1433be960 body=76 status=ok
// SIG undefined FUN_1433be960(void)

void FUN_1433be960(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145b009f8;
  param_1[2] = &PTR_LAB_145b00a00;
  FUN_143325230();
  if ((RefCountNTSImpl *)param_1[10] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[10]);
  }
  if ((RefCountImpl *)param_1[9] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[9]);
  }
  FUN_143325290(param_1);
  return;
}



// FUNCTION 1433be9d0 FUN_1433be9d0 body=2145 status=ok
// SIG undefined FUN_1433be9d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1433be9d0(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4,
                       byte param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  bool bVar6;
  undefined4 uVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined4 *puVar14;
  longlong *plVar15;
  float *pfVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float in_stack_ffffffffffffead8;
  float local_1508;
  float local_1504;
  float local_1500;
  float local_14fc;
  float local_14f8;
  float local_14f4;
  int local_14f0;
  int local_14ec;
  undefined4 local_14e0;
  int local_14dc;
  undefined *local_14d8;
  undefined8 local_14d0;
  undefined8 local_14c8;
  undefined4 local_14c0;
  undefined8 local_14bc;
  undefined8 local_14b4;
  undefined8 local_14ac;
  undefined8 local_14a4;
  undefined8 local_149c;
  undefined4 local_1494;
  undefined4 local_1490;
  undefined1 local_148c;
  undefined4 local_1488;
  float fStack_1484;
  float fStack_1480;
  undefined4 uStack_147c;
  undefined8 local_1478;
  undefined8 uStack_1470;
  undefined8 local_1468;
  undefined8 uStack_1460;
  undefined8 local_1458;
  undefined8 uStack_1450;
  undefined8 local_1448;
  undefined4 local_1440;
  undefined8 local_1438;
  undefined8 uStack_1430;
  undefined8 local_1428;
  undefined8 uStack_1420;
  undefined1 local_1418 [32];
  undefined1 local_13f8 [32];
  undefined1 local_13d8 [768];
  undefined1 local_10d8 [4];
  undefined4 local_10d4 [383];
  undefined1 local_ad8 [4];
  float local_ad4 [679];
  
  cVar8 = (**(code **)(**(longlong **)(param_1 + 0x38) + 8))();
  if (cVar8 != '\0') {
    uVar12 = FUN_1433bf380(param_1 + -0x10,param_4);
    return uVar12;
  }
  lVar13 = (**(code **)(*param_2 + 0xf0))(param_2);
  Scaleform::Render::MeshGenerator::Clear(lVar13);
  puVar14 = (undefined4 *)FUN_1432d8640(param_2);
  local_1488 = *puVar14;
  uStack_147c = puVar14[3];
  local_1478 = *(undefined8 *)(puVar14 + 4);
  uStack_1470 = *(undefined8 *)(puVar14 + 6);
  fStack_1484 = (float)puVar14[1] * 2.0;
  local_1468 = *(undefined8 *)(puVar14 + 8);
  uStack_1460 = *(undefined8 *)(puVar14 + 10);
  local_1458 = *(undefined8 *)(puVar14 + 0xc);
  uStack_1450 = *(undefined8 *)(puVar14 + 0xe);
  local_1448 = *(undefined8 *)(puVar14 + 0x10);
  fStack_1480 = (float)puVar14[2] * 2.0;
  local_1440 = puVar14[0x12];
  if ((param_5 & 3) == 1) {
    fVar21 = (float)uStack_1450 * 0.5;
  }
  else {
    fVar21 = 0.0;
  }
  plVar15 = (longlong *)(lVar13 + 0xa0);
  Scaleform::Render::Tessellator::SetEdgeAAWidth(plVar15,fVar21);
  Scaleform::Render::Tessellator::SetFillRule(plVar15,0);
  local_14c0 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x30))();
  fVar21 = *(float *)(param_3 + 0x60);
  fVar20 = *(float *)(param_3 + 100);
  uVar18 = 0;
  fVar1 = *(float *)(param_3 + 0x6c);
  bVar6 = true;
  fVar2 = *(float *)(param_3 + 0x70);
  fVar3 = *(float *)(param_3 + 0x74);
  local_1490 = 0x3f800000;
  fVar4 = *(float *)(param_3 + 0x7c);
  local_14bc = 0;
  local_14b4 = 0;
  local_14ac = 0;
  local_14a4 = 0;
  local_149c = 0;
  local_1494 = 0;
  local_148c = 0;
  iVar10 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x40))
                     (*(longlong **)(param_1 + 0x38),&local_14c0,&local_1508,&local_14f0);
  while ((iVar10 != 0 && ((bVar6 || (iVar10 != 2))))) {
    bVar6 = false;
    if (local_14f0 == local_14ec) {
      (**(code **)(**(longlong **)(param_1 + 0x38) + 0x50))
                (*(longlong **)(param_1 + 0x38),&local_14c0);
    }
    else {
      fVar19 = fVar2 * local_1508;
      local_1508 = fVar20 * local_1504 + fVar21 * local_1508 + fVar1;
      local_1504 = fVar3 * local_1504 + fVar19 + fVar4;
      (**(code **)(*plVar15 + 0x20))(plVar15);
      iVar10 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x48))
                         (*(longlong **)(param_1 + 0x38),&local_14c0,&local_1508);
      fVar19 = local_1508;
      while (local_1508 = fVar19, iVar10 != 0) {
        if (iVar10 == 1) {
          local_1508 = fVar20 * local_1504 + fVar21 * fVar19 + fVar1;
          local_1504 = fVar3 * local_1504 + fVar2 * fVar19 + fVar4;
          (**(code **)(*plVar15 + 0x20))(plVar15);
        }
        else if (iVar10 == 2) {
          local_1508 = fVar20 * local_1504 + fVar21 * fVar19 + fVar1;
          local_1504 = fVar3 * local_1504 + fVar2 * fVar19 + fVar4;
          in_stack_ffffffffffffead8 = fVar20 * local_14fc + fVar21 * local_1500 + fVar1;
          local_14fc = fVar3 * local_14fc + fVar2 * local_1500 + fVar4;
          local_1500 = in_stack_ffffffffffffead8;
          FUN_1433bd900(plVar15,&local_1488,local_1508,local_1504,in_stack_ffffffffffffead8,
                        local_14fc);
        }
        else if (iVar10 == 3) {
          local_1508 = fVar20 * local_1504 + fVar21 * fVar19 + fVar1;
          local_1504 = fVar3 * local_1504 + fVar2 * fVar19 + fVar4;
          in_stack_ffffffffffffead8 = fVar20 * local_14fc + fVar21 * local_1500 + fVar1;
          fVar19 = fVar2 * local_14f8;
          local_14fc = fVar3 * local_14fc + fVar2 * local_1500 + fVar4;
          local_14f8 = fVar20 * local_14f4 + fVar21 * local_14f8 + fVar1;
          local_14f4 = fVar3 * local_14f4 + fVar19 + fVar4;
          local_1500 = in_stack_ffffffffffffead8;
          FUN_1433bda10(plVar15,&local_1488,local_1508,local_1504,in_stack_ffffffffffffead8,
                        local_14fc,local_14f8,local_14f4);
        }
        iVar10 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x48))
                           (*(longlong **)(param_1 + 0x38),&local_14c0,&local_1508);
        fVar19 = local_1508;
      }
      in_stack_ffffffffffffead8 = (float)((uint)in_stack_ffffffffffffead8 & 0xffffff00);
      (**(code **)(*plVar15 + 0x30))(plVar15,1,0,0,in_stack_ffffffffffffead8);
    }
    iVar10 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x40))
                       (*(longlong **)(param_1 + 0x38),&local_14c0,&local_1508);
  }
  FUN_143336f70(plVar15,0);
  iVar10 = (**(code **)(*plVar15 + 0x50))(plVar15);
  if ((iVar10 == 0) || (iVar10 = (**(code **)(*plVar15 + 0x48))(plVar15), iVar10 == 0)) {
    bVar9 = FUN_1433bf380(param_1 + -0x10,param_4);
  }
  else {
    local_1438 = 0x3f800000;
    uStack_1430 = 0;
    local_1428 = 0x3f80000000000000;
    uStack_1420 = 0;
    Scaleform::Render::Matrix2x4<float>::SetInverse
              ((Matrix2x4<float> *)&local_1438,(Matrix2x4<float> *)(param_3 + 0x60));
    (**(code **)(*plVar15 + 0x38))(plVar15,&local_1438);
    (**(code **)(*plVar15 + 0x40))(plVar15,local_13f8,0xc6fff800,0xc6fff800,0x46fff800,0x46fff800);
    local_14e0 = (**(code **)(*plVar15 + 0x58))(plVar15,0);
    local_14dc = (**(code **)(*plVar15 + 0x60))(plVar15,0);
    local_14d0 = 0;
    local_14c8 = 0;
    local_14dc = local_14dc * 3;
    local_14d8 = &DAT_1467cdbb8;
    bVar9 = (**(code **)(*param_4 + 8))(param_4,&local_14e0,1,local_13f8);
    if (bVar9 != 0) {
      (**(code **)(*plVar15 + 0x68))(plVar15,0,local_1418);
      uVar11 = (**(code **)(*plVar15 + 0x70))(plVar15,local_1418,local_ad8,0x80);
      uVar17 = uVar18;
      while (uVar11 != 0) {
        uVar12 = (ulonglong)uVar11;
        if (uVar11 != 0) {
          puVar14 = local_10d4;
          pfVar16 = local_ad4;
          do {
            fVar21 = pfVar16[-1];
            if (0.0 <= fVar21) {
              fVar21 = fVar21 + 0.5;
            }
            else {
              fVar21 = fVar21 - 0.5;
            }
            fVar20 = _guard_xfg_dispatch_icall_nop(fVar21);
            fVar21 = *pfVar16;
            *(short *)(puVar14 + -1) = (short)(int)fVar20;
            if (0.0 <= fVar21) {
              fVar21 = fVar21 + 0.5;
            }
            else {
              fVar21 = fVar21 - 0.5;
            }
            fVar21 = _guard_xfg_dispatch_icall_nop(fVar21);
            uVar5 = *(ushort *)(pfVar16 + 3);
            *puVar14 = 0xffffffff;
            pfVar16 = pfVar16 + 5;
            *(short *)((longlong)puVar14 + -2) = (short)(int)fVar21;
            *(undefined *)(puVar14 + 1) = (&DAT_145b02d20)[uVar5 & 3];
            *(undefined *)((longlong)puVar14 + 5) = (&DAT_145b02d20)[uVar5 >> 2 & 3];
            puVar14 = puVar14 + 3;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        (**(code **)(*param_4 + 0x18))(param_4,0,uVar17,local_10d8,uVar11);
        uVar17 = uVar17 + uVar11;
        uVar11 = (**(code **)(*plVar15 + 0x70))(plVar15,local_1418,local_ad8,0x80);
      }
      local_14c8._4_4_ = (undefined4)((ulonglong)local_14c8 >> 0x20);
      uVar7 = local_14c8._4_4_;
      uVar11 = (**(code **)(*plVar15 + 0x60))(plVar15,uVar7);
      if (uVar11 != 0) {
        do {
          iVar10 = 0x80;
          if ((uVar11 < uVar18 + 0x80) && (iVar10 = uVar11 - uVar18, iVar10 == 0)) break;
          (**(code **)(*plVar15 + 0x78))(plVar15,local_14c8._4_4_,local_13d8,uVar18,iVar10);
          (**(code **)(*param_4 + 0x20))(param_4,0,uVar18 * 3,local_13d8,iVar10 * 3);
          uVar18 = uVar18 + iVar10;
        } while (uVar18 < uVar11);
      }
      (**(code **)(*param_4 + 0x10))(param_4);
    }
  }
  Scaleform::Render::MeshGenerator::Clear(lVar13);
  return (ulonglong)bVar9;
}



// FUNCTION 1433bf300 FUN_1433bf300 body=62 status=ok
// SIG undefined FUN_1433bf300(void)

void FUN_1433bf300(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_28 [32];
  
  puVar2 = (undefined8 *)FUN_1432d1f70(local_28,3);
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  uVar1 = puVar2[3];
  param_2[2] = puVar2[2];
  param_2[3] = uVar1;
  *(undefined4 *)(param_2 + 2) = 3;
  param_2[3] = &DAT_1467cdbb8;
  return;
}



// FUNCTION 1433bf380 FUN_1433bf380 body=174 status=ok
// SIG undefined FUN_1433bf380(void)

undefined1 FUN_1433bf380(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined2 local_res10;
  undefined4 local_res12;
  undefined8 local_38;
  undefined2 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = 1;
  local_38 = 0;
  local_30 = 0;
  local_20 = &DAT_1467cdbb8;
  local_res12 = 0;
  local_res10 = 0;
  local_18 = 0;
  local_10 = 0;
  local_24 = 3;
  cVar1 = (**(code **)(*param_2 + 8))(param_2,&local_28,1,&DAT_14621c810);
  if (cVar1 == '\0') {
    return 0;
  }
  (**(code **)(*param_2 + 0x18))(param_2,0,0,&local_38,1);
  (**(code **)(*param_2 + 0x20))(param_2,0,0,&local_res10,3);
  (**(code **)(*param_2 + 0x10))(param_2);
  return 1;
}



// FUNCTION 1433bf440 FUN_1433bf440 body=230 status=ok
// SIG undefined FUN_1433bf440(void)

undefined8 * FUN_1433bf440(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  param_1[1] = 0xffffffffffffffff;
  param_1[2] = 0xffffffffffffffff;
  *param_1 = &PTR__scalar_deleting_destructor__145b05ed0;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  uVar1 = DAT_146b62f28;
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x58);
  }
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = uVar1;
  uVar1 = DAT_146b62f28;
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x58);
  }
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = uVar1;
  uVar1 = DAT_146b62f28;
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x58);
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = uVar1;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = &PTR_LOOP_1467cd040;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  return param_1;
}



// FUNCTION 1433bf530 ~TextMeshProvider body=123 status=ok
// SIG undefined ~TextMeshProvider(void)

void Scaleform::Render::TextMeshProvider::~TextMeshProvider(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__145b05ed0;
  Clear();
  if ((undefined **)param_1[0x1c] != &PTR_LOOP_1467cd040) {
    FUN_1432c03a0(*(undefined **)param_1[0x1c]);
  }
  FUN_1433c6650(param_1[0xd],param_1[0xe]);
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[0xd]);
  FUN_1433c6520(param_1 + 9);
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[5]);
  *param_1 = &PTR_FUN_145b006e0;
  return;
}



// FUNCTION 1433bf5c0 Clear body=199 status=ok
// SIG undefined Clear(void)

void Scaleform::Render::TextMeshProvider::Clear(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if ((uVar1 & 6) != 0) {
    *(uint *)(param_1 + 0x20) = uVar1 & 0xfffffffd;
    if (((byte)(uVar1 & 0xfffffffd) & 6) == 4) {
      *(uint *)(param_1 + 0x20) = uVar1 & 0xfffffff9;
      FUN_1433bf880(param_1);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1433fa130(*(longlong *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98));
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  FUN_1433bf690(param_1);
  FUN_1433c65d0(param_1 + 0x48);
  FUN_1433c6650(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70));
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x68));
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  return;
}



// FUNCTION 1433bf690 FUN_1433bf690 body=279 status=ok
// SIG undefined FUN_1433bf690(void)

void FUN_1433bf690(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  
  uVar1 = 0;
  uVar3 = uVar1;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    do {
      Scaleform::Render::GlyphQueue::RemoveNotifier
                (*(longlong *)(param_1 + 0x18) + 0xe98,
                 *(undefined8 *)(*(longlong *)(param_1 + 0x28) + uVar3 * 8));
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ulonglong *)(param_1 + 0x30));
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  uVar3 = uVar1;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    do {
      if ((*(short *)(*(longlong *)(param_1 + 0x48) + uVar1) - 8U & 0xfffb) == 0) {
        Scaleform::RefCountImpl::Release
                  (*(RefCountImpl **)(*(longlong *)(param_1 + 0x48) + 0x10 + uVar1));
      }
      uVar3 = uVar3 + 1;
      uVar1 = uVar1 + 0x28;
    } while (uVar3 < *(ulonglong *)(param_1 + 0x50));
  }
  lVar2 = *(longlong *)(param_1 + 0x50);
  if (lVar2 != 0) {
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x48) + -0x20 + lVar2 * 0x28);
    do {
      if ((RefCountNTSImpl *)*puVar4 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*puVar4);
      }
      puVar4 = puVar4 + -5;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x48));
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffe1f;
  return;
}



// FUNCTION 1433bf7b0 FUN_1433bf7b0 body=122 status=ok
// SIG undefined FUN_1433bf7b0(void)

void FUN_1433bf7b0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    return;
  }
  uVar1 = *(longlong *)(param_1 + 0x30) + 1;
  if (uVar1 < *(ulonglong *)(param_1 + 0x30)) {
    uVar2 = uVar1;
    if (*(ulonglong *)(param_1 + 0x38) >> 1 <= uVar1) goto LAB_1433bf805;
  }
  else {
    if (uVar1 <= *(ulonglong *)(param_1 + 0x38)) goto LAB_1433bf805;
    uVar2 = (uVar1 >> 2) + uVar1;
  }
  FUN_1432f2240((longlong *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x40),uVar2);
LAB_1433bf805:
  *(ulonglong *)(param_1 + 0x30) = uVar1;
  *(longlong *)(*(longlong *)(param_1 + 0x28) + -8 + uVar1 * 8) = param_2;
  Scaleform::Render::GlyphQueue::PinSlot(*(undefined8 *)(param_2 + 0x18));
  return;
}



// FUNCTION 1433bf830 PinSlots body=69 status=ok
// SIG undefined PinSlots(void)

void Scaleform::Render::TextMeshProvider::PinSlots(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    do {
      GlyphQueue::PinSlot(*(undefined8 *)
                           (*(longlong *)(*(longlong *)(param_1 + 0x28) + uVar1 * 8) + 0x18));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ulonglong *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 1433bf880 FUN_1433bf880 body=107 status=ok
// SIG undefined FUN_1433bf880(void)

void FUN_1433bf880(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  plVar1 = (longlong *)FUN_1433bf950();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  uVar2 = 0;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    do {
      FUN_1433c6f60(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + uVar2 * 8) + 0x18)
                    ,plVar1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ulonglong *)(param_1 + 0x30));
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}



// FUNCTION 1433bf910 AddToInUseList body=58 status=ok
// SIG undefined AddToInUseList(void)

void Scaleform::Render::TextMeshProvider::AddToInUseList(longlong param_1)

{
  longlong lVar1;
  
  if ((*(uint *)(param_1 + 0x20) & 6) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 2;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar1 + 0x1040);
    *(longlong *)(param_1 + 0x10) = lVar1 + 0x1038;
    *(longlong *)(*(longlong *)(lVar1 + 0x1040) + 0x10) = param_1;
    *(longlong *)(lVar1 + 0x1040) = param_1;
  }
  return;
}



// FUNCTION 1433bf950 FUN_1433bf950 body=336 status=ok
// SIG undefined FUN_1433bf950(void)

longlong * FUN_1433bf950(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  plVar4 = (longlong *)0x0;
  uVar7 = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    lVar8 = 0;
    do {
      lVar1 = *(longlong *)(lVar8 + 0x10 + *(longlong *)(param_1 + 0x68));
      if ((lVar1 != 0) && (uVar6 = 0, plVar5 = plVar4, *(longlong *)(lVar1 + 0x90) != 0)) {
        do {
          if (*(ulonglong *)(lVar1 + 0x90) < 3) {
            lVar3 = lVar1 + 0x98;
          }
          else {
            lVar3 = *(longlong *)(lVar1 + 0x98);
          }
          plVar4 = plVar5;
          if (*(longlong *)(*(longlong *)(lVar3 + uVar6 * 8) + 0x18) != 0) {
            if (plVar5 != (longlong *)0x0) {
              if (*(ulonglong *)(lVar1 + 0x90) < 3) {
                lVar3 = lVar1 + 0x98;
              }
              else {
                lVar3 = *(longlong *)(lVar1 + 0x98);
              }
              if ((*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + uVar6 * 8) + 0x18) + 0x10) == 0
                  ) || ((plVar5[2] != 0 && (cVar2 = FUN_1432c1d50(), cVar2 == '\0'))))
              goto LAB_1433bfa50;
            }
            if (*(ulonglong *)(lVar1 + 0x90) < 3) {
              lVar3 = lVar1 + 0x98;
            }
            else {
              lVar3 = *(longlong *)(lVar1 + 0x98);
            }
            plVar4 = *(longlong **)(*(longlong *)(lVar3 + uVar6 * 8) + 0x18);
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 8))(plVar4);
            }
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
LAB_1433bfa50:
          uVar6 = uVar6 + 1;
          plVar5 = plVar4;
        } while (uVar6 < *(ulonglong *)(lVar1 + 0x90));
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x40;
    } while (uVar7 < *(ulonglong *)(param_1 + 0x70));
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  return plVar4;
}



// FUNCTION 1433bfab0 NeedsUpdate body=101 status=ok
// SIG undefined NeedsUpdate(void)

undefined8
Scaleform::Render::TextMeshProvider::NeedsUpdate
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          longlong param_5)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_1433c28b0(param_2,param_3,param_4);
  fVar2 = 0.85;
  if ((*(byte *)(param_5 + 0xc) & 1) != 0) {
    fVar2 = 0.99;
  }
  if ((*(float *)(param_1 + 0xa0) * fVar2 <= fVar1) && (fVar1 <= *(float *)(param_1 + 0xa0) / fVar2)
     ) {
    return 0;
  }
  return 1;
}



// FUNCTION 1433bfb20 FUN_1433bfb20 body=3112 status=ok
// SIG undefined FUN_1433bfb20(void)

undefined8
FUN_1433bfb20(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  short sVar4;
  undefined4 uVar5;
  RefCountImpl *this;
  bool bVar6;
  float *pfVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  short *psVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  char cVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 *local_res20;
  float in_stack_fffffffffffffd50;
  uint in_stack_fffffffffffffd58;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined4 local_258;
  undefined4 uStack_254;
  float fStack_250;
  undefined4 uStack_24c;
  longlong local_248;
  longlong *plStack_240;
  undefined8 uStack_238;
  float fStack_230;
  undefined4 uStack_22c;
  longlong *local_228;
  undefined8 local_220;
  longlong local_218;
  undefined8 uStack_210;
  longlong local_208;
  longlong **local_200;
  ulonglong local_1f8;
  ulonglong local_1f0;
  undefined8 local_1e8;
  longlong local_1e0;
  longlong **local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1a8;
  ulonglong uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  ulonglong local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  longlong *local_168;
  ulonglong uStack_160;
  longlong *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  float local_130;
  float fStack_12c;
  float local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  float local_108;
  float fStack_104;
  undefined4 uStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  undefined4 uStack_f0;
  float fStack_ec;
  ulonglong local_e8;
  longlong *plStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  
  local_228 = DAT_146b62f28;
  lVar9 = 0;
  local_220 = 0x2000;
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffff1f;
  plVar10 = (longlong *)*param_4;
  local_200 = &local_228;
  local_1d8 = &local_228;
  pfVar7 = (float *)(((ulonglong)
                      (byte)(&DAT_1467ccff4)[(ulonglong)(*(byte *)(*plVar10 + 0xf) & 0xf) * 5] + 1)
                     * 0x10 + *plVar10);
  local_a8 = *pfVar7;
  local_a4 = pfVar7[1];
  local_a0 = pfVar7[2];
  local_9c = pfVar7[3];
  local_98 = pfVar7[4];
  local_94 = pfVar7[5];
  local_90 = pfVar7[6];
  local_8c = pfVar7[7];
  if (((*(byte *)(*plVar10 + 0xf) & 0x10) != 0) ||
     ((1e-06 < ABS(local_a4 * 0.0 + local_a8 + 0.0) &&
      (1e-06 < ABS(local_94 * 0.0 + local_98 + 0.0))))) {
    cVar16 = '\0';
  }
  else {
    cVar16 = '\x01';
  }
  local_e8 = 0x3f800000;
  plStack_e0 = (longlong *)0x0;
  local_1a8 = *(undefined8 *)(param_3 + 0x10);
  uStack_1a0 = *(ulonglong *)(param_3 + 0x18);
  local_148 = 0;
  local_d8 = 0x3f80000000000000;
  uStack_d0 = 0;
  local_198 = *(undefined8 *)(param_3 + 0x20);
  uStack_190 = *(undefined8 *)(param_3 + 0x28);
  local_140 = 0;
  local_188 = *(ulonglong *)(param_3 + 0x30);
  uStack_180 = *(undefined8 *)(param_3 + 0x38);
  local_138 = 0;
  local_178 = *(undefined8 *)(param_3 + 0x40);
  uStack_170 = *(undefined8 *)(param_3 + 0x48);
  local_130 = 0.0;
  fStack_12c = 0.0;
  local_168 = *(longlong **)(param_3 + 0x50);
  uStack_160 = *(ulonglong *)(param_3 + 0x58);
  local_128 = 0.0;
  local_158 = (longlong *)0x0;
  uStack_150 = 0;
  local_118 = 0;
  uStack_110 = 0;
  lVar11 = *plVar10;
  lVar8 = (ulonglong)(byte)(&DAT_1467ccff4)[(ulonglong)(*(byte *)(lVar11 + 0xf) & 0xf) * 5] + 1;
  _local_108 = CONCAT44(*(undefined4 *)(lVar11 + 4 + lVar8 * 0x10),
                        *(undefined4 *)(lVar11 + lVar8 * 0x10));
  _uStack_100 = CONCAT44(*(undefined4 *)(lVar11 + 0xc + lVar8 * 0x10),
                         *(undefined4 *)(lVar11 + 8 + lVar8 * 0x10));
  _local_f8 = CONCAT44(*(undefined4 *)(lVar11 + 0x14 + lVar8 * 0x10),
                       *(undefined4 *)(lVar11 + 0x10 + lVar8 * 0x10));
  _uStack_f0 = CONCAT44(*(undefined4 *)(lVar11 + 0x1c + lVar8 * 0x10),
                        *(undefined4 *)(lVar11 + 0x18 + lVar8 * 0x10));
  local_268 = 0x3f80000000000000;
  uStack_260 = 0;
  local_278 = 0x3f800000;
  uStack_270 = (longlong *)0x0;
  local_res20 = param_4;
  Scaleform::Render::Matrix2x4<float>::SetInverse
            ((Matrix2x4<float> *)&local_278,(Matrix2x4<float> *)&local_108);
  local_e8 = local_278;
  plStack_e0 = uStack_270;
  local_d8 = local_268;
  uStack_d0 = uStack_260;
  local_c8 = FUN_1433c28b0(param_4,param_5,param_6);
  *(undefined4 *)(param_1 + 0xa0) = local_c8;
  local_c4 = 0;
  if ((*(byte *)(*(longlong *)*param_4 + 0xf) & 0x10) != 0) {
    uStack_1a0 = uStack_1a0 & 0xfffffffcffffffff;
    local_188 = local_188 & 0xfffffffcffffffff;
  }
  uVar17 = *(undefined4 *)(param_3 + 0x5c);
  uVar3 = *(undefined4 *)(param_3 + 0x58);
  uVar5 = *(undefined4 *)(param_3 + 0x50);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_3 + 0x54);
  *(undefined4 *)(param_1 + 0xd8) = uVar3;
  *(undefined4 *)(param_1 + 0xdc) = uVar17;
  *(undefined4 *)(param_1 + 0xd0) = uVar5;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffff7;
  fVar18 = *(float *)(param_3 + 0x68);
  fVar20 = *(float *)(param_3 + 0x6c);
  uVar17 = *(undefined4 *)(param_3 + 0x60);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_3 + 100);
  *(float *)(param_1 + 0xb8) = fVar18;
  *(float *)(param_1 + 0xbc) = fVar20;
  *(undefined4 *)(param_1 + 0xb0) = uVar17;
  if ((*(float *)(param_1 + 0xb0) < fVar18) && (*(float *)(param_1 + 0xb4) < fVar20)) {
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 8;
  }
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x10;
switchD_1433bff67_default:
  lVar9 = FUN_1433f0620(param_3,lVar9,&local_278);
  plVar10 = uStack_270;
  puVar1 = local_res20;
  if (lVar9 == 0) goto LAB_1433c0303;
  fVar18 = local_278._4_4_;
  fVar20 = (float)uStack_270;
  switch(local_278 & 0xff) {
  case 0:
    if ((local_278 & 0x100) == 0) {
      in_stack_fffffffffffffd58 =
           CONCAT31((int3)(in_stack_fffffffffffffd58 >> 8),local_278._1_1_ >> 2) & 0xffffff01;
      in_stack_fffffffffffffd50 =
           (float)(CONCAT31((int3)((uint)in_stack_fffffffffffffd50 >> 8),local_278._1_1_ >> 1) &
                  0xffffff01);
      FUN_1433c2aa0(param_1,param_2,&local_228,&local_1a8,local_278._2_2_,in_stack_fffffffffffffd50,
                    in_stack_fffffffffffffd58,cVar16,param_7);
    }
    fStack_12c = fStack_12c + local_278._4_4_;
    goto switchD_1433bff67_default;
  case 1:
    local_130 = local_278._4_4_;
    goto switchD_1433bff67_default;
  case 2:
    uStack_254 = (undefined4)local_1f8;
    fStack_250 = local_278._4_4_;
    local_258 = 0;
    local_248 = FUN_14332b280(*(undefined8 *)(param_1 + 0x18),0,0);
    fStack_230 = fVar20;
    *(int *)(local_248 + 8) = *(int *)(local_248 + 8) + 1;
    plStack_240 = local_168;
    uStack_238 = uStack_160;
    goto LAB_1433c000a;
  case 3:
    fStack_12c = local_278._4_4_;
    local_128 = (float)uStack_270;
    if ((cVar16 != '\0') &&
       (((local_158 != (longlong *)0x0 && ((*(uint *)((longlong)local_158 + 0x1c) >> 7 & 1) != 0))
        || ((uStack_1a0 & 0x100000000) != 0)))) {
      fVar19 = _guard_xfg_dispatch_icall_nop
                         (fStack_f4 * (float)uStack_270 + local_f8 * local_278._4_4_ + fStack_ec +
                          0.5);
      local_128 = fVar19 * local_d8._4_4_ +
                  (fStack_104 * fVar20 + local_108 * fVar18 + fStack_fc) * (float)local_d8 +
                  uStack_d0._4_4_;
    }
    goto switchD_1433bff67_default;
  case 4:
    local_158 = uStack_270;
    uStack_150 = Scaleform::Render::GlyphCache::RegisterFont
                           (*(undefined8 *)(param_1 + 0x18),uStack_270);
    local_148 = CONCAT44(local_148._4_4_,local_278._4_4_);
    uVar17 = (**(code **)(*plVar10 + 0x68))(plVar10);
    local_138 = CONCAT44(uVar17,(undefined4)local_138);
    if (((cVar16 != '\0') && (local_158 != (longlong *)0x0)) &&
       ((*(uint *)((longlong)local_158 + 0x1c) >> 7 & 1) != 0)) {
      fVar18 = _guard_xfg_dispatch_icall_nop
                         (fStack_f4 * local_128 + local_f8 * fStack_12c + fStack_ec + 0.5);
      local_128 = fVar18 * local_d8._4_4_ +
                  (fStack_104 * local_128 + local_108 * fStack_12c + fStack_fc) * (float)local_d8 +
                  uStack_d0._4_4_;
    }
    goto switchD_1433bff67_default;
  case 5:
    local_258 = 1;
    break;
  case 6:
    in_stack_fffffffffffffd50 = (float)uStack_270;
    in_stack_fffffffffffffd58 = uStack_270._4_4_;
    FUN_1433c2160(param_1,&local_228,local_268 & 0xffffffff,local_278._2_2_,local_278._4_4_,
                  (float)uStack_270,uStack_270._4_4_);
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x80;
    goto switchD_1433bff67_default;
  case 7:
    local_258 = 10;
    break;
  case 8:
    in_stack_fffffffffffffd50 = local_268._4_4_;
    in_stack_fffffffffffffd58 = (uint)uStack_260;
    FUN_1433c2230(param_1,&local_228,&local_1a8,uStack_270,(undefined4)local_268,local_268._4_4_,
                  (uint)uStack_260,cVar16);
    fStack_12c = fStack_12c + uStack_260._4_4_;
  default:
    goto switchD_1433bff67_default;
  }
  uVar15 = local_268;
  uStack_254 = (undefined4)local_1f8;
  fStack_250 = local_278._4_4_;
  local_248 = FUN_14332b280(*(undefined8 *)(param_1 + 0x18),local_258,0);
  *(int *)(local_248 + 8) = *(int *)(local_248 + 8) + 1;
  plStack_240 = plVar10;
  uStack_238 = uVar15;
LAB_1433c000a:
  uVar15 = local_1f8 >> 6;
  if (local_1f0 <= uVar15) {
    FUN_1433c6af0(&local_200,uVar15);
  }
  uVar14 = (ulonglong)((uint)local_1f8 & 0x3f);
  lVar11 = *(longlong *)(local_1e0 + uVar15 * 8);
  puVar1 = (undefined8 *)(lVar11 + uVar14 * 0x30);
  *puVar1 = CONCAT44(uStack_254,local_258);
  puVar1[1] = CONCAT44(uStack_24c,fStack_250);
  plVar10 = (longlong *)(lVar11 + 0x10 + uVar14 * 0x30);
  *plVar10 = local_248;
  plVar10[1] = (longlong)plStack_240;
  puVar2 = (undefined4 *)(lVar11 + 0x20 + uVar14 * 0x30);
  *puVar2 = (undefined4)uStack_238;
  puVar2[1] = uStack_238._4_4_;
  puVar2[2] = fStack_230;
  puVar2[3] = uStack_22c;
  local_1f8 = local_1f8 + 1;
  goto switchD_1433bff67_default;
LAB_1433c0303:
  if ((*(uint *)(param_1 + 0x20) & 8) != 0 && (*(uint *)(param_1 + 0x20) & 0xc0) != 0) {
    FUN_1433c2510(param_1,&local_228);
    uVar15 = 0;
    bVar6 = true;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    if (local_1f8 != 0) {
      do {
        psVar13 = (short *)((ulonglong)((uint)uVar15 & 0x3f) * 0x30 +
                           *(longlong *)(local_1e0 + (uVar15 >> 6) * 8));
        local_288 = 0;
        uStack_280 = 0;
        sVar4 = *psVar13;
        if (((sVar4 == 4) || (sVar4 == 5)) || (sVar4 == 7)) {
          fVar18 = *(float *)(psVar13 + 0xc);
          fVar20 = *(float *)(psVar13 + 0xe);
          local_288 = *(undefined8 *)(psVar13 + 0xc);
          fVar19 = *(float *)(psVar13 + 0x10);
          fVar22 = *(float *)(psVar13 + 0x12);
          uStack_280 = *(undefined8 *)(psVar13 + 0x10);
LAB_1433c0481:
          if ((fVar18 < fVar19) && (fVar20 < fVar22)) {
            if (bVar6) {
              *(float *)(param_1 + 200) = fVar19;
              *(float *)(param_1 + 0xcc) = fVar22;
            }
            else {
              if (*(float *)(param_1 + 0xc0) <= fVar18) {
                fVar18 = *(float *)(param_1 + 0xc0);
              }
              if (*(float *)(param_1 + 0xc4) <= fVar20) {
                fVar20 = *(float *)(param_1 + 0xc4);
              }
              fVar21 = *(float *)(param_1 + 200);
              if (*(float *)(param_1 + 200) <= fVar19) {
                fVar21 = fVar19;
              }
              fVar19 = *(float *)(param_1 + 0xcc);
              if (*(float *)(param_1 + 0xcc) <= fVar22) {
                fVar19 = fVar22;
              }
              *(float *)(param_1 + 200) = fVar21;
              *(float *)(param_1 + 0xcc) = fVar19;
            }
            *(float *)(param_1 + 0xc4) = fVar20;
            bVar6 = false;
            *(float *)(param_1 + 0xc0) = fVar18;
          }
        }
        else if (sVar4 == 8) {
          fVar22 = *(float *)(psVar13 + 0x12);
          fVar18 = (float)(**(code **)(**(longlong **)(psVar13 + 0xc) + 0xb0))();
          fVar22 = fVar22 / fVar18;
          (**(code **)(**(longlong **)(psVar13 + 0xc) + 0x38))
                    (*(longlong **)(psVar13 + 0xc),psVar13[0x10],&local_288);
          fVar18 = fVar22 * (float)local_288 + *(float *)(psVar13 + 0x14);
          fVar20 = fVar22 * local_288._4_4_ + *(float *)(psVar13 + 0x16);
          local_288 = CONCAT44(fVar20,fVar18);
          fVar19 = fVar22 * (float)uStack_280 + *(float *)(psVar13 + 0x14);
          fVar22 = fVar22 * uStack_280._4_4_ + *(float *)(psVar13 + 0x16);
          uStack_280 = CONCAT44(fVar22,fVar19);
          *psVar13 = 0xc;
          goto LAB_1433c0481;
        }
        if (*psVar13 == 9) {
          *psVar13 = 0xd;
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < local_1f8);
    }
    fVar18 = 1.0 / *(float *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x100;
    *(float *)(param_1 + 0xc0) = *(float *)(param_1 + 0xc0) - fVar18;
    *(float *)(param_1 + 0xc4) = *(float *)(param_1 + 0xc4) - fVar18;
    *(float *)(param_1 + 200) = fVar18 + *(float *)(param_1 + 200);
    *(float *)(param_1 + 0xcc) = fVar18 + *(float *)(param_1 + 0xcc);
  }
  uVar15 = 0;
  plVar10 = (longlong *)FUN_1433bf950(param_1);
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 8))(plVar10);
  }
  uVar14 = uVar15;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    do {
      FUN_1433c6f60(*(undefined8 *)
                     (*(longlong *)(*(longlong *)(param_1 + 0x28) + uVar14 * 8) + 0x18),plVar10);
      uVar14 = uVar14 + 1;
    } while (uVar14 < *(ulonglong *)(param_1 + 0x30));
  }
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffffef;
  FUN_1433c25c0(param_1,&local_228);
  uVar14 = uVar15;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    do {
      uVar12 = 0;
      lVar9 = *(longlong *)(param_1 + 0x68);
      if ((*(int *)(uVar15 + lVar9) - 8U & 0xfffffffb) == 0) {
        FUN_1433c31e0(param_1,param_2,uVar14 & 0xffffffff,puVar1,param_7);
        *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x40;
      }
      else {
        FUN_1432c03f0(lVar9 + 0x28 + uVar15,puVar1);
        local_res20 = (undefined8 *)CONCAT44(local_res20._4_4_,0x44);
        lVar11 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0xe0,&local_res20);
        if (lVar11 != 0) {
          uVar12 = Scaleform::Render::Mesh::Mesh(lVar11,param_1,&local_a8,0,(int)uVar14,param_7);
        }
        this = *(RefCountImpl **)(uVar15 + 0x10 + lVar9);
        if (this != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(this);
        }
        *(undefined8 *)(uVar15 + 0x10 + lVar9) = uVar12;
      }
      uVar14 = uVar14 + 1;
      uVar15 = uVar15 + 0x40;
    } while (uVar14 < *(ulonglong *)(param_1 + 0x70));
  }
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x20;
  if (local_208 != 0) {
    plVar10 = (longlong *)(local_218 + (local_208 + -1) * 0x18);
    do {
      local_208 = local_208 + -1;
      if (*plVar10 != 0) {
        (**(code **)(*local_228 + 0x60))();
      }
      plVar10 = plVar10 + -3;
    } while (local_208 != 0);
    local_208 = 0xffffffffffffffff;
    (**(code **)(*local_228 + 0x60))(local_228,local_218);
  }
  return 1;
}



// FUNCTION 1433c0780 FUN_1433c0780 body=369 status=ok
// SIG undefined FUN_1433c0780(void)

longlong FUN_1433c0780(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                      undefined4 param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_28;
  undefined8 local_24;
  undefined8 local_1c;
  undefined4 local_14;
  undefined8 local_10;
  
  local_28 = *(undefined4 *)(param_1 + 0xa0);
  lVar2 = *(longlong *)(param_1 + 0x48);
  puVar3 = (undefined4 *)
           ((ulonglong)*(uint *)(param_3 + 0x84) * 0x40 + *(longlong *)(param_1 + 0x68));
  local_24 = 0;
  uVar1 = (ulonglong)(uint)puVar3[1];
  local_1c = 0;
  local_10 = 0;
  local_14 = local_28;
  switch(*puVar3) {
  case 0:
    uVar4 = *(undefined4 *)(lVar2 + 0x20 + uVar1 * 0x28);
    break;
  case 1:
    lVar2 = FUN_1433c3e20(param_1,local_28,param_4,puVar3,&local_28,param_5);
    return lVar2;
  case 2:
  case 3:
  case 4:
    lVar2 = FUN_1433c4740(param_1,param_4);
    return lVar2;
  case 5:
  case 6:
    lVar2 = FUN_1433c4b50(param_1,param_4);
    return lVar2;
  case 7:
    lVar2 = FUN_1433c5020(param_1,param_4);
    return lVar2;
  default:
    return (ulonglong)(uint7)(int7)(int3)((uint)*puVar3 >> 8) << 8;
  case 9:
  case 0xd:
    lVar2 = FUN_1433c5310(param_1,local_28,param_4,puVar3,&local_28,param_5);
    return lVar2;
  case 10:
    uVar4 = 0;
    break;
  case 0xb:
    lVar2 = FUN_1433c5bb0(param_1,param_4);
    return lVar2;
  }
  lVar2 = FUN_1433c3840(param_1,local_28,param_4,&local_28,lVar2 + 0x10 + uVar1 * 0x28,
                        *(undefined4 *)(lVar2 + 4 + uVar1 * 0x28),uVar4,param_5);
  return lVar2;
}



// FUNCTION 1433c0940 FUN_1433c0940 body=491 status=ok
// SIG undefined FUN_1433c0940(void)

void FUN_1433c0940(longlong param_1,undefined8 *param_2,ulonglong param_3,undefined8 param_4,
                  ushort param_5)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined1 local_28 [32];
  
  if ((param_5 & 2) == 0) {
    puVar8 = (undefined4 *)((param_3 & 0xffffffff) * 0x40 + *(longlong *)(param_1 + 0x68));
    switch(*puVar8) {
    case 0:
    case 1:
    case 8:
    case 9:
    case 10:
    case 0xc:
    case 0xd:
      puVar7 = (undefined8 *)FUN_1432d1f70(local_28,3);
      uVar6 = puVar7[1];
      *param_2 = *puVar7;
      param_2[1] = uVar6;
      uVar6 = puVar7[3];
      param_2[2] = puVar7[2];
      param_2[3] = uVar6;
      *(undefined4 *)(param_2 + 2) = 3;
      param_2[3] = &DAT_1467cdbb8;
      return;
    case 2:
    case 3:
    case 4:
      uVar6 = FUN_14332b300(*(undefined8 *)(param_1 + 0x18),
                            *(undefined2 *)
                             (*(longlong *)(param_1 + 0x48) + 2 + (ulonglong)(uint)puVar8[1] * 0x28)
                           );
      puVar7 = (undefined8 *)FUN_1432d1fe0(local_28,uVar6,0x101);
      uVar6 = puVar7[1];
      *param_2 = *puVar7;
      param_2[1] = uVar6;
      uVar6 = puVar7[3];
      param_2[2] = puVar7[2];
      param_2[3] = uVar6;
      break;
    case 5:
      plVar1 = *(longlong **)
                (*(longlong *)
                  (*(longlong *)(param_1 + 0x48) + 0x20 + (ulonglong)(uint)puVar8[1] * 0x28) + 0x10)
      ;
      puVar8 = (undefined4 *)FUN_1432d1fe0(local_28,plVar1,0x101);
      uVar2 = puVar8[1];
      uVar3 = puVar8[2];
      uVar4 = puVar8[3];
      *(undefined4 *)param_2 = *puVar8;
      *(undefined4 *)((longlong)param_2 + 4) = uVar2;
      *(undefined4 *)(param_2 + 1) = uVar3;
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
      uVar2 = puVar8[5];
      uVar3 = puVar8[6];
      uVar4 = puVar8[7];
      *(undefined4 *)(param_2 + 2) = puVar8[4];
      *(undefined4 *)((longlong)param_2 + 0x14) = uVar2;
      *(undefined4 *)(param_2 + 3) = uVar3;
      *(undefined4 *)((longlong)param_2 + 0x1c) = uVar4;
      iVar5 = (**(code **)(*plVar1 + 0x20))(plVar1);
      if (iVar5 != 9) goto LAB_1433c0af0;
      break;
    case 6:
      puVar7 = (undefined8 *)
               FUN_1432d1fe0(local_28,*(undefined8 *)
                                       (*(longlong *)
                                         (*(longlong *)(param_1 + 0x48) + 0x20 +
                                         (ulonglong)(uint)puVar8[1] * 0x28) + 0x10),0x101);
      uVar6 = puVar7[1];
      *param_2 = *puVar7;
      param_2[1] = uVar6;
      uVar6 = puVar7[3];
      param_2[2] = puVar7[2];
      param_2[3] = uVar6;
      *(undefined4 *)(param_2 + 2) = 0xd;
      param_2[3] = &DAT_1467ce2d0;
      return;
    case 7:
      puVar7 = (undefined8 *)
               FUN_1432d1fe0(local_28,*(undefined8 *)
                                       (*(longlong *)(param_1 + 0x48) + 0x20 +
                                       (ulonglong)(uint)puVar8[1] * 0x28),0x101);
      uVar6 = puVar7[1];
      *param_2 = *puVar7;
      param_2[1] = uVar6;
      uVar6 = puVar7[3];
      param_2[2] = puVar7[2];
      param_2[3] = uVar6;
LAB_1433c0af0:
      *(undefined4 *)(param_2 + 2) = 0xb;
      param_2[3] = &DAT_1467ce628;
      return;
    case 0xb:
      goto switchD_1433c0980_caseD_b;
    default:
      return;
    }
    *(undefined4 *)(param_2 + 2) = 0xc;
    param_2[3] = &DAT_1467ce2d0;
    return;
  }
switchD_1433c0980_caseD_b:
  puVar7 = (undefined8 *)FUN_1432d1f70(local_28,1);
  uVar6 = puVar7[1];
  *param_2 = *puVar7;
  param_2[1] = uVar6;
  uVar6 = puVar7[3];
  param_2[2] = puVar7[2];
  param_2[3] = uVar6;
  return;
}



// FUNCTION 1433c0b70 FUN_1433c0b70 body=142 status=ok
// SIG undefined FUN_1433c0b70(void)

ulonglong FUN_1433c0b70(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  if (param_1[0x11] != 0) {
    return 5;
  }
  iVar1 = (**(code **)(*param_1 + 0x48))();
  uVar5 = uVar4;
  if (iVar1 != 0) {
    do {
      piVar3 = (int *)((uVar5 & 0xffffffff) * 0x40 + param_1[0xd]);
      iVar1 = *piVar3;
      if (4 < iVar1) {
        return uVar4;
      }
      if (((1 < iVar1) && (*(longlong *)(piVar3 + 4) != 0)) &&
         (uVar2 = FUN_1432d1de0(), (int)uVar4 < (int)uVar2)) {
        uVar4 = (ulonglong)uVar2;
      }
      uVar5 = uVar5 + 1;
      uVar2 = (**(code **)(*param_1 + 0x48))(param_1);
    } while (uVar5 < uVar2);
  }
  return uVar4;
}



// FUNCTION 1433c0c10 FUN_1433c0c10 body=516 status=ok
// SIG undefined FUN_1433c0c10(void)

longlong * FUN_1433c0c10(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined **local_res8;
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
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_68 = 0x3f800000;
  uStack_60 = 0;
  local_48 = 0;
  uStack_40 = 0x3f800000;
  local_88 = *(undefined8 *)(param_1 + 200);
  local_58 = 0x3f80000000000000;
  uStack_50 = 0;
  local_98 = *(undefined8 *)(param_1 + 0xc0);
  uStack_90 = CONCAT44(*(undefined4 *)(param_1 + 0xc4),*(undefined4 *)(param_1 + 200));
  local_38 = 0x3f8000003f800000;
  FUN_143326520(&local_68,&local_48,&local_98);
  lVar1 = *(longlong *)*param_4;
  if ((*(byte *)(lVar1 + 0xf) & 0x10) == 0) {
    Scaleform::Render::Matrix2x4<float>::Append
              ((Matrix2x4<float> *)&local_68,
               (Matrix2x4<float> *)
               (((ulonglong)(byte)(&DAT_1467ccff4)[(ulonglong)(*(byte *)(lVar1 + 0xf) & 0xf) * 5] +
                1) * 0x10 + lVar1));
    if (*(undefined ***)(param_1 + 0xe0) != &PTR_LOOP_1467cd040) {
      FUN_1432c0490((longlong *)(param_1 + 0xe0),&local_68);
      goto LAB_1433c0dd3;
    }
    uVar4 = (**(code **)(*param_3 + 0x100))(param_3);
    uVar4 = FUN_1432c0ac0(uVar4,&local_res8,&local_68,0);
  }
  else {
    puVar3 = (undefined8 *)FUN_1432c08b0(param_4);
    local_98 = *puVar3;
    uStack_90 = puVar3[1];
    local_88 = puVar3[2];
    uStack_80 = puVar3[3];
    local_78 = puVar3[4];
    uStack_70 = puVar3[5];
    local_48 = local_98;
    uStack_40 = uStack_90;
    local_38 = local_88;
    uStack_30 = uStack_80;
    local_28 = local_78;
    uStack_20 = uStack_70;
    Scaleform::Render::Matrix3x4<float>::MultiplyMatrix
              ((Matrix3x4<float> *)&local_48,(Matrix3x4<float> *)&local_98,
               (Matrix2x4<float> *)&local_68);
    if (*(undefined ***)(param_1 + 0xe0) != &PTR_LOOP_1467cd040) {
      FUN_1432c0740((longlong *)(param_1 + 0xe0),&local_48);
      goto LAB_1433c0dd3;
    }
    uVar4 = (**(code **)(*param_3 + 0x100))(param_3);
    uVar4 = FUN_1432c0af0(uVar4,&local_res8,&local_48,0x10);
  }
  FUN_1432c03f0(param_1 + 0xe0,uVar4);
  if (local_res8 != &PTR_LOOP_1467cd040) {
    FUN_1432c03a0(*local_res8);
  }
LAB_1433c0dd3:
  ppuVar2 = *(undefined ***)(param_1 + 0xe0);
  *param_2 = (longlong)ppuVar2;
  if (ppuVar2 != &PTR_LOOP_1467cd040) {
    *(int *)(*ppuVar2 + 8) = *(int *)(*ppuVar2 + 8) + 1;
  }
  if ((undefined **)*param_4 != &PTR_LOOP_1467cd040) {
    FUN_1432c03a0(*(undefined **)*param_4);
  }
  return param_2;
}



// FUNCTION 1433c0e20 GetMaskClearBounds body=32 status=ok
// SIG undefined GetMaskClearBounds(void)

longlong *
Scaleform::Render::TextMeshProvider::GetMaskClearBounds(longlong param_1,longlong *param_2)

{
  undefined **ppuVar1;
  
  ppuVar1 = *(undefined ***)(param_1 + 0xe0);
  *param_2 = (longlong)ppuVar1;
  if (ppuVar1 != &PTR_LOOP_1467cd040) {
    *(int *)(*ppuVar1 + 8) = *(int *)(*ppuVar1 + 8) + 1;
  }
  return param_2;
}



// FUNCTION 1433c0e50 FUN_1433c0e50 body=1104 status=ok
// SIG undefined FUN_1433c0e50(void)

uint FUN_1433c0e50(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  float param_5,undefined8 *param_6,uint param_7,longlong param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined *puVar14;
  uint uVar15;
  float local_118;
  ulonglong local_114;
  float local_10c;
  float local_108;
  float local_104;
  undefined4 local_100;
  float local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
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
  
  puVar7 = param_6;
  lVar5 = *(longlong *)*param_6;
  if ((*(byte *)(lVar5 + 0xf) & 0x10) == 0) {
    lVar13 = (ulonglong)(byte)(&DAT_1467ccff4)[(ulonglong)(*(byte *)(lVar5 + 0xf) & 0xf) * 5] + 1;
    fVar1 = *(float *)(lVar5 + lVar13 * 0x10);
    fVar2 = *(float *)(lVar5 + 4 + lVar13 * 0x10);
    fVar3 = *(float *)(lVar5 + 0x10 + lVar13 * 0x10);
    fVar4 = *(float *)(lVar5 + 0x14 + lVar13 * 0x10);
    local_100 = 0;
    local_118 = fVar1 * param_5 + fVar2 * 0.0;
    local_104 = fVar4 * param_5 + fVar3 * 0.0;
    local_114 = (ulonglong)(uint)(fVar2 * param_5 + fVar1 * 0.0);
    local_10c = *(float *)(lVar5 + 0xc + lVar13 * 0x10) +
                fVar1 * *(float *)(param_3 + 0x20) + fVar2 * *(float *)(param_3 + 0x24) +
                fVar1 * 0.0 + fVar2 * 0.0;
    local_108 = fVar3 * param_5 + fVar4 * 0.0;
    local_fc = *(float *)(lVar5 + 0x1c + lVar13 * 0x10) +
               fVar4 * *(float *)(param_3 + 0x24) + fVar3 * *(float *)(param_3 + 0x20) +
               fVar3 * 0.0 + fVar4 * 0.0;
    if (*(undefined ***)(param_2 + 0x28) != &PTR_LOOP_1467cd040) {
      FUN_1432c0490((longlong *)(param_2 + 0x28),&local_118);
      goto LAB_1433c116e;
    }
    uVar12 = (**(code **)(*param_1 + 0x100))(param_1);
    uVar12 = FUN_1432c0ac0(uVar12,&param_6,&local_118,0);
  }
  else {
    local_118 = param_5;
    local_fc = *(float *)(param_3 + 0x24) + 0.0;
    local_104 = param_5;
    local_10c = *(float *)(param_3 + 0x20) + 0.0;
    local_114 = 0;
    local_108 = 0.0;
    local_100 = 0;
    puVar11 = (undefined8 *)FUN_1432c08b0(param_6);
    local_d8 = *puVar11;
    uStack_d0 = puVar11[1];
    local_c8 = puVar11[2];
    uStack_c0 = puVar11[3];
    local_b8 = puVar11[4];
    uStack_b0 = puVar11[5];
    local_a8 = local_d8;
    uStack_a0 = uStack_d0;
    local_98 = local_c8;
    uStack_90 = uStack_c0;
    local_88 = local_b8;
    uStack_80 = uStack_b0;
    Scaleform::Render::Matrix3x4<float>::MultiplyMatrix
              ((Matrix3x4<float> *)&local_d8,(Matrix3x4<float> *)&local_a8,
               (Matrix2x4<float> *)&local_118);
    if (*(undefined ***)(param_2 + 0x28) != &PTR_LOOP_1467cd040) {
      FUN_1432c0740((longlong *)(param_2 + 0x28),&local_d8);
      goto LAB_1433c116e;
    }
    uVar12 = (**(code **)(*param_1 + 0x100))(param_1);
    uVar12 = FUN_1432c0af0(uVar12,&param_6,&local_d8,0x10);
  }
  FUN_1432c03f0(param_2 + 0x28,uVar12);
  ppuVar6 = (undefined **)
            CONCAT44(param_6._4_4_,
                     CONCAT13(param_6._3_1_,
                              CONCAT12(param_6._2_1_,CONCAT11(param_6._1_1_,param_6._0_1_))));
  if (ppuVar6 != &PTR_LOOP_1467cd040) {
    FUN_1432c03a0(*ppuVar6);
  }
LAB_1433c116e:
  uVar15 = *(uint *)(param_3 + 4);
  local_f8 = 0;
  uStack_f0 = 0;
  param_6._0_1_ = (undefined1)uVar15;
  param_6._1_1_ = (byte)(uVar15 >> 8);
  param_6._2_1_ = (byte)(uVar15 >> 0x10);
  param_6._3_1_ = (byte)(uVar15 >> 0x18);
  local_e8 = (float)param_6._2_1_ / 255.0;
  local_e4 = (float)param_6._1_1_ / 255.0;
  local_dc = (float)param_6._3_1_ / 255.0;
  local_e0 = (float)(uVar15 & 0xff) / 255.0;
  lVar5 = *(longlong *)*puVar7;
  if ((*(byte *)(lVar5 + 0xf) & 1) == 0) {
    puVar14 = &DAT_1467ccfd0;
  }
  else {
    puVar14 = (undefined *)
              (((ulonglong)(byte)(&DAT_1467ccff0)[(ulonglong)(*(byte *)(lVar5 + 0xf) & 0xf) * 5] + 1
               ) * 0x10 + lVar5);
  }
  FUN_1432bfb20(&local_f8,puVar14);
  FUN_1432c0590(param_2 + 0x28,&local_f8);
  lVar5 = param_8;
  uVar9 = (param_7 & 1) * 0x40 + 1;
  uVar15 = uVar9 | 0x80;
  if ((param_7 & 2) == 0) {
    uVar15 = uVar9;
  }
  cVar8 = FUN_143324990(param_4,param_8,0);
  iVar10 = FUN_143324970(uVar15);
  *(undefined4 *)(lVar5 + (ulonglong)(iVar10 - 1) * 4) = 0;
  if (cVar8 == '\0') {
    uVar15 = uVar15 | 0x8000;
  }
  return uVar15;
}



// FUNCTION 1433c12e0 FUN_1433c12e0 body=222 status=ok
// SIG undefined FUN_1433c12e0(void)

void FUN_1433c12e0(undefined8 param_1,longlong param_2,undefined4 param_3,uint param_4,uint param_5)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined4 uStack_2c;
  
  do {
    uVar5 = 0x3ffe;
    if (param_5 < 0x3ffe) {
      uVar5 = param_5;
    }
    uVar6 = *(ulonglong *)(param_2 + 0x58) >> 4;
    uVar2 = *(undefined8 *)
             (*(longlong *)(*(longlong *)(param_2 + 0x48) + (ulonglong)(param_4 >> 6) * 8) + 0x10 +
             (ulonglong)(param_4 & 0x3f) * 0x30);
    if (*(ulonglong *)(param_2 + 0x60) <= uVar6) {
      FUN_1433c6b90(param_2 + 0x50,uVar6);
    }
    uVar4 = (ulonglong)(*(uint *)(param_2 + 0x58) & 0xf);
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x70) + uVar6 * 8);
    puVar1 = (undefined4 *)(lVar3 + uVar4 * 0x18);
    *puVar1 = param_3;
    puVar1[1] = param_4;
    puVar1[2] = uVar5;
    puVar1[3] = uStack_2c;
    *(undefined8 *)(lVar3 + 0x10 + uVar4 * 0x18) = uVar2;
    *(longlong *)(param_2 + 0x58) = *(longlong *)(param_2 + 0x58) + 1;
    param_5 = param_5 - uVar5;
    param_4 = param_4 + uVar5;
  } while (param_5 != 0);
  return;
}



// FUNCTION 1433c13d0 FUN_1433c13d0 body=739 status=ok
// SIG undefined FUN_1433c13d0(void)

void FUN_1433c13d0(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  short sVar4;
  ushort uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  short *psVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uStack_4c;
  
  lVar3 = (param_3 >> 6) * 8;
  uVar11 = (uint)param_3;
  lVar8 = (ulonglong)(uVar11 & 0x3f) * 0x30;
  psVar9 = (short *)(*(longlong *)(*(longlong *)(param_2 + 0x48) + lVar3) + lVar8);
  sVar4 = *psVar9;
  if ((((sVar4 == 4) && (*(longlong *)(param_1 + 0x70) != 0)) &&
      (lVar13 = *(longlong *)(param_1 + 0x70) * 0x40 + *(longlong *)(param_1 + 0x68),
      *(int *)(lVar13 + -0x40) - 2U < 2)) &&
     (*(longlong *)(psVar9 + 8) ==
      *(longlong *)
       (*(longlong *)
         (*(longlong *)(param_2 + 0x48) + (ulonglong)(*(uint *)(lVar13 + -0x3c) >> 6) * 8) + 0x10 +
       (ulonglong)(*(uint *)(lVar13 + -0x3c) & 0x3f) * 0x30))) {
    *(undefined4 *)(lVar13 + -0x40) = 3;
    *(int *)(lVar13 + -0x38) = *(int *)(lVar13 + -0x38) + ((int)param_4 - uVar11);
    return;
  }
  if ((sVar4 - 8U & 0xfffb) == 0) {
    for (; param_3 < param_4; param_3 = param_3 + 1) {
      uVar11 = 1;
      uVar15 = param_3 & 0xffffffff;
      uVar5 = *(ushort *)(*(longlong *)(lVar3 + *(longlong *)(param_2 + 0x48)) + lVar8);
      do {
        uVar14 = (uint)uVar15;
        uVar10 = 0x3ffe;
        if (uVar11 < 0x3ffe) {
          uVar10 = uVar11;
        }
        uVar12 = *(ulonglong *)(param_2 + 0x58) >> 4;
        uVar6 = *(undefined8 *)
                 (*(longlong *)(*(longlong *)(param_2 + 0x48) + (uVar15 >> 6) * 8) + 0x10 +
                 (ulonglong)(uVar14 & 0x3f) * 0x30);
        if (*(ulonglong *)(param_2 + 0x60) <= uVar12) {
          FUN_1433c6b90(param_2 + 0x50,uVar12);
        }
        uVar15 = (ulonglong)(uVar14 + uVar10);
        uVar7 = (ulonglong)(*(uint *)(param_2 + 0x58) & 0xf);
        lVar13 = *(longlong *)(*(longlong *)(param_2 + 0x70) + uVar12 * 8);
        puVar2 = (uint *)(lVar13 + uVar7 * 0x18);
        *puVar2 = (uint)uVar5;
        puVar2[1] = uVar14;
        puVar2[2] = uVar10;
        puVar2[3] = uStack_4c;
        *(undefined8 *)(lVar13 + 0x10 + uVar7 * 0x18) = uVar6;
        *(longlong *)(param_2 + 0x58) = *(longlong *)(param_2 + 0x58) + 1;
        uVar11 = uVar11 - uVar10;
      } while (uVar11 != 0);
    }
  }
  else if (sVar4 == 7) {
    for (; param_3 < param_4; param_3 = param_3 + 1) {
      uVar11 = 1;
      uVar15 = param_3 & 0xffffffff;
      do {
        uVar14 = (uint)uVar15;
        uVar10 = 0x3ffe;
        if (uVar11 < 0x3ffe) {
          uVar10 = uVar11;
        }
        uVar12 = *(ulonglong *)(param_2 + 0x58) >> 4;
        uVar6 = *(undefined8 *)
                 (*(longlong *)(*(longlong *)(param_2 + 0x48) + (uVar15 >> 6) * 8) + 0x10 +
                 (ulonglong)(uVar14 & 0x3f) * 0x30);
        if (*(ulonglong *)(param_2 + 0x60) <= uVar12) {
          FUN_1433c6b90(param_2 + 0x50,uVar12);
        }
        uVar15 = (ulonglong)(uVar14 + uVar10);
        uVar7 = (ulonglong)(*(uint *)(param_2 + 0x58) & 0xf);
        lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x70) + uVar12 * 8);
        puVar1 = (undefined4 *)(lVar3 + uVar7 * 0x18);
        *puVar1 = 7;
        puVar1[1] = uVar14;
        puVar1[2] = uVar10;
        puVar1[3] = uStack_4c;
        *(undefined8 *)(lVar3 + 0x10 + uVar7 * 0x18) = uVar6;
        *(longlong *)(param_2 + 0x58) = *(longlong *)(param_2 + 0x58) + 1;
        uVar11 = uVar11 - uVar10;
      } while (uVar11 != 0);
    }
  }
  else {
    FUN_1433c12e0(param_1,param_2,sVar4,param_3 & 0xffffffff,(int)param_4 - uVar11);
  }
  return;
}



// FUNCTION 1433c16c0 FUN_1433c16c0 body=237 status=ok
// SIG undefined FUN_1433c16c0(void)

void FUN_1433c16c0(longlong param_1,longlong param_2,undefined4 param_3,longlong param_4,
                  undefined2 param_5,undefined2 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 uStack_2c;
  
  uVar3 = *(undefined4 *)(param_2 + 0x30);
  lVar6 = FUN_14332b280(*(undefined8 *)(param_1 + 0x18),8,0);
  *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
  Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_4 + 0x18));
  lVar4 = *(longlong *)(param_4 + 0x18);
  uVar8 = *(ulonglong *)(param_2 + 0x30) >> 6;
  if (*(ulonglong *)(param_2 + 0x38) <= uVar8) {
    FUN_1433c6af0(param_2 + 0x28,uVar8);
  }
  uVar7 = (ulonglong)(*(uint *)(param_2 + 0x30) & 0x3f);
  lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x48) + uVar8 * 8);
  puVar1 = (undefined8 *)(lVar5 + uVar7 * 0x30);
  *puVar1 = CONCAT44(uVar3,8);
  puVar1[1] = CONCAT44(uStack_2c,param_3);
  plVar2 = (longlong *)(lVar5 + 0x10 + uVar7 * 0x30);
  *plVar2 = lVar6;
  plVar2[1] = lVar4;
  puVar1 = (undefined8 *)(lVar5 + 0x20 + uVar7 * 0x30);
  *puVar1 = CONCAT44(param_7,CONCAT22(param_6,param_5));
  puVar1[1] = CONCAT44(param_9,param_8);
  *(longlong *)(param_2 + 0x30) = *(longlong *)(param_2 + 0x30) + 1;
  return;
}



// FUNCTION 1433c17c0 FUN_1433c17c0 body=747 status=ok
// SIG undefined FUN_1433c17c0(void)

void FUN_1433c17c0(longlong param_1,longlong param_2,int param_3,longlong param_4,undefined4 param_5
                  ,longlong param_6,float param_7,char param_8,float param_9)

{
  ulonglong *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uStack_6c;
  
  fVar15 = *(float *)(param_4 + 0x7c);
  if ((param_8 != '\0') &&
     (((*(uint *)(*(longlong *)(param_4 + 0x50) + 0x1c) >> 7 & 1) != 0 ||
      (((*(byte *)(param_6 + 0xc) & 1) != 0 && ((*(byte *)(param_6 + 0xc) & 4) == 0)))))) {
    fVar13 = *(float *)(param_4 + 0x80);
    fVar12 = _guard_xfg_dispatch_icall_nop
                       (fVar13 * *(float *)(param_4 + 0xa4) + fVar15 * *(float *)(param_4 + 0xa0) +
                        *(float *)(param_4 + 0xac) + 0.5);
    fVar15 = fVar12 * *(float *)(param_4 + 0xc0) +
             (fVar13 * *(float *)(param_4 + 0xb4) + fVar15 * *(float *)(param_4 + 0xb0) +
             *(float *)(param_4 + 0xbc)) * *(float *)(param_4 + 0xc4) + *(float *)(param_4 + 0xcc);
  }
  uVar4 = *(ushort *)(param_6 + 0x34);
  uVar5 = *(ushort *)(*(longlong *)(param_6 + 0x18) + 0x40);
  if ((1 < uVar4) && (uVar6 = *(ushort *)(param_6 + 0x36), 1 < uVar6)) {
    fVar16 = (float)(int)*(short *)(param_6 + 0x38) * 0.0625 + 1.0;
    fVar17 = (float)(int)*(short *)(param_6 + 0x3a) * 0.0625 + 1.0;
    fVar12 = (float)*(ushort *)(param_6 + 10) * 0.0625;
    fVar13 = 1e-05;
    if (1e-05 <= fVar12) {
      fVar13 = fVar12;
    }
    fVar12 = 0.0;
    fVar14 = ((param_7 * *(float *)(param_6 + 0x3c)) / fVar13) / *(float *)(param_4 + 0xe0);
    fVar13 = 0.0;
    if (param_3 == 2) {
      fVar12 = *(float *)(param_4 + 0x34);
      fVar13 = *(float *)(param_4 + 0x38);
    }
    fVar13 = fVar13 + *(float *)(param_4 + 0x80);
    uVar7 = *(undefined4 *)(param_2 + 0x30);
    lVar9 = FUN_14332b280(*(undefined8 *)(param_1 + 0x18),param_3,uVar5 & 0x7fff);
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    uVar11 = *(ulonglong *)(param_2 + 0x30) >> 6;
    if (*(ulonglong *)(param_2 + 0x38) <= uVar11) {
      FUN_1433c6af0(param_2 + 0x28,uVar11);
    }
    uVar10 = (ulonglong)(*(uint *)(param_2 + 0x30) & 0x3f);
    lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x48) + uVar11 * 8);
    puVar1 = (ulonglong *)(lVar8 + uVar10 * 0x30);
    *puVar1 = CONCAT44(uVar7,CONCAT22(uVar5,(short)param_3)) & 0xffffffff7fffffff;
    puVar1[1] = CONCAT44(uStack_6c,param_5);
    plVar2 = (longlong *)(lVar8 + 0x10 + uVar10 * 0x30);
    *plVar2 = lVar9;
    plVar2[1] = CONCAT44(fVar17 * fVar14 + fVar13,fVar16 * (fVar14 / param_9) + fVar12 + fVar15);
    puVar3 = (undefined8 *)(lVar8 + 0x20 + uVar10 * 0x30);
    *puVar3 = CONCAT44((((float)uVar6 + fVar17) - 2.0) * fVar14 + fVar13,
                       (((float)uVar4 + fVar16) - 2.0) * (fVar14 / param_9) + fVar12 + fVar15);
    puVar3[1] = param_6;
    *(longlong *)(param_2 + 0x30) = *(longlong *)(param_2 + 0x30) + 1;
  }
  return;
}



// FUNCTION 1433c1ac0 FUN_1433c1ac0 body=1153 status=ok
// SIG undefined FUN_1433c1ac0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1433c1ac0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined4 param_5)

{
  RefCountImpl **ppRVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int iVar4;
  RefCountImpl *pRVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  longlong lVar8;
  longlong lVar9;
  RefCountImpl **ppRVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint local_res18;
  uint local_res1c;
  undefined8 local_c8;
  undefined2 local_c0 [4];
  RefCountImpl *local_b8;
  RefCountImpl *local_b0 [2];
  undefined2 local_a0;
  undefined2 uStack_9e;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  longlong lStack_78;
  
  fVar15 = *(float *)(param_4 + 0x7c);
  (**(code **)(**(longlong **)(param_3 + 0x10) + 0x28))(*(longlong **)(param_3 + 0x10),&local_res18)
  ;
  fVar12 = *(float *)(param_4 + 0x60) / *(float *)(param_4 + 0x74);
  plVar3 = *(longlong **)(param_3 + 0x10);
  local_a0 = 5;
  uStack_9e = 0;
  uStack_9c = *(undefined4 *)(param_2 + 0x30);
  uStack_98 = param_5;
  fVar13 = (float)local_res18 * fVar12;
  fVar12 = (float)local_res1c * fVar12;
  fVar14 = (*(float *)(param_3 + 0x20) - *(float *)(param_3 + 0x30)) * fVar13 + fVar15;
  fVar15 = (*(float *)(param_3 + 0x28) - *(float *)(param_3 + 0x30)) * fVar13 + fVar15;
  fVar13 = (*(float *)(param_3 + 0x24) - *(float *)(param_3 + 0x34)) * fVar12 +
           *(float *)(param_4 + 0x80);
  fVar12 = (*(float *)(param_3 + 0x2c) - *(float *)(param_3 + 0x34)) * fVar12 +
           *(float *)(param_4 + 0x80);
  if ((*(uint *)(*(longlong *)(param_4 + 0x50) + 0x1c) & 0x10000) == 0) {
    iVar4 = (**(code **)(*plVar3 + 0x20))();
    lVar8 = **(longlong **)(param_3 + 0x10);
    if (iVar4 == 9) {
      pRVar5 = (RefCountImpl *)(**(code **)(lVar8 + 0xa8))();
      lVar9 = 2;
      local_c8 = 0xc;
      puVar7 = local_c0;
      lVar8 = 2;
      do {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      local_b0[1] = (RefCountImpl *)&DAT_1467ce2d0;
      local_c0[0] = 0x101;
      local_c0[1] = 0;
      local_b8 = (RefCountImpl *)0x0;
      local_b0[0] = (RefCountImpl *)0x0;
      if (pRVar5 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(pRVar5);
      }
      if (local_b8 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(local_b8);
      }
      local_b8 = pRVar5;
      if (local_b0[0] != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(local_b0[0]);
      }
      local_b0[0] = (RefCountImpl *)0x0;
      local_90 = FUN_1432d2110(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x68),&local_c8);
      ppRVar10 = local_b0 + 1;
      do {
        ppRVar1 = ppRVar10 + 0xffffffffffffffff;
        ppRVar10 = ppRVar10 + 0xffffffffffffffff;
        lVar9 = lVar9 + -1;
        if (*ppRVar1 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(*ppRVar1);
        }
      } while (lVar9 != 0);
    }
    else {
      pRVar5 = (RefCountImpl *)
               (**(code **)(lVar8 + 0xa8))
                         (*(longlong **)(param_3 + 0x10),
                          *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x70));
      lVar9 = 2;
      local_c8 = 0xb;
      puVar7 = local_c0;
      lVar8 = 2;
      do {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      local_b0[1] = (RefCountImpl *)&DAT_1467ce628;
      local_c0[0] = 0x101;
      local_c0[1] = 0;
      local_b8 = (RefCountImpl *)0x0;
      local_b0[0] = (RefCountImpl *)0x0;
      if (pRVar5 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(pRVar5);
      }
      if (local_b8 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(local_b8);
      }
      local_b8 = pRVar5;
      if (local_b0[0] != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(local_b0[0]);
      }
      local_b0[0] = (RefCountImpl *)0x0;
      local_90 = FUN_1432d2110(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x68),&local_c8);
      ppRVar10 = local_b0 + 1;
      do {
        ppRVar1 = ppRVar10 + 0xffffffffffffffff;
        ppRVar10 = ppRVar10 + 0xffffffffffffffff;
        lVar9 = lVar9 + -1;
        if (*ppRVar1 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(*ppRVar1);
        }
      } while (lVar9 != 0);
    }
  }
  else {
    pRVar5 = (RefCountImpl *)
             (**(code **)(*plVar3 + 0xa8))
                       (plVar3,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x70));
    lVar9 = 2;
    local_c8 = 0xd;
    puVar7 = local_c0;
    lVar8 = 2;
    do {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    local_b0[1] = (RefCountImpl *)&DAT_1467ce2d0;
    local_c0[0] = 0x101;
    local_c0[1] = 0;
    local_b8 = (RefCountImpl *)0x0;
    local_b0[0] = (RefCountImpl *)0x0;
    if (pRVar5 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(pRVar5);
    }
    if (local_b8 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(local_b8);
    }
    local_b8 = pRVar5;
    if (local_b0[0] != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(local_b0[0]);
    }
    local_b0[0] = (RefCountImpl *)0x0;
    local_90 = FUN_1432d2110(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x68),&local_c8);
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x200;
    ppRVar10 = local_b0 + 1;
    local_a0 = 6;
    do {
      ppRVar1 = ppRVar10 + 0xffffffffffffffff;
      ppRVar10 = ppRVar10 + 0xffffffffffffffff;
      lVar9 = lVar9 + -1;
      if (*ppRVar1 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*ppRVar1);
      }
    } while (lVar9 != 0);
  }
  uVar11 = *(ulonglong *)(param_2 + 0x30) >> 6;
  fStack_88 = fVar14;
  fStack_84 = fVar13;
  local_80 = fVar15;
  fStack_7c = fVar12;
  lStack_78 = param_3;
  if (*(ulonglong *)(param_2 + 0x38) <= uVar11) {
    FUN_1433c6af0(param_2 + 0x28,uVar11);
  }
  uVar6 = (ulonglong)(*(uint *)(param_2 + 0x30) & 0x3f);
  lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x48) + uVar11 * 8);
  puVar2 = (undefined8 *)(lVar8 + uVar6 * 0x30);
  *puVar2 = CONCAT44(uStack_9c,CONCAT22(uStack_9e,local_a0));
  puVar2[1] = CONCAT44(uStack_94,uStack_98);
  puVar2 = (undefined8 *)(lVar8 + 0x10 + uVar6 * 0x30);
  *puVar2 = local_90;
  puVar2[1] = CONCAT44(fStack_84,fStack_88);
  puVar2 = (undefined8 *)(lVar8 + 0x20 + uVar6 * 0x30);
  *puVar2 = CONCAT44(fStack_7c,local_80);
  puVar2[1] = lStack_78;
  *(longlong *)(param_2 + 0x30) = *(longlong *)(param_2 + 0x30) + 1;
  return;
}



// FUNCTION 1433c1f50 FUN_1433c1f50 body=167 status=ok
// SIG undefined FUN_1433c1f50(void)

void FUN_1433c1f50(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 uStack_2c;
  undefined4 uStack_c;
  
  uVar2 = *(uint *)(param_2 + 0x30);
  lVar6 = FUN_14332b280(*(undefined8 *)(param_1 + 0x18),0,0);
  *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
  uVar8 = *(ulonglong *)(param_2 + 0x30) >> 6;
  lVar4 = *param_5;
  lVar5 = param_5[1];
  if (*(ulonglong *)(param_2 + 0x38) <= uVar8) {
    FUN_1433c6af0(param_2 + 0x28,uVar8);
  }
  uVar7 = (ulonglong)(*(uint *)(param_2 + 0x30) & 0x3f);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x48) + uVar8 * 8);
  plVar1 = (longlong *)(lVar3 + uVar7 * 0x30);
  *plVar1 = (ulonglong)uVar2 << 0x20;
  plVar1[1] = CONCAT44(uStack_2c,param_3);
  plVar1 = (longlong *)(lVar3 + 0x10 + uVar7 * 0x30);
  *plVar1 = lVar6;
  plVar1[1] = lVar4;
  plVar1 = (longlong *)(lVar3 + 0x20 + uVar7 * 0x30);
  *plVar1 = lVar5;
  plVar1[1] = CONCAT44(uStack_c,param_4);
  *(longlong *)(param_2 + 0x30) = *(longlong *)(param_2 + 0x30) + 1;
  return;
}



// FUNCTION 1433c2000 FUN_1433c2000 body=156 status=ok
// SIG undefined FUN_1433c2000(void)

void FUN_1433c2000(longlong param_1,longlong param_2,undefined4 param_3,longlong *param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 uStack_2c;
  longlong lStack_10;
  
  uVar3 = *(undefined4 *)(param_2 + 0x30);
  lVar7 = FUN_14332b280(*(undefined8 *)(param_1 + 0x18),1,0);
  *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
  lVar5 = *param_4;
  lVar6 = param_4[1];
  uVar9 = *(ulonglong *)(param_2 + 0x30) >> 6;
  if (*(ulonglong *)(param_2 + 0x38) <= uVar9) {
    FUN_1433c6af0(param_2 + 0x28,uVar9);
  }
  uVar8 = (ulonglong)(*(uint *)(param_2 + 0x30) & 0x3f);
  lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x48) + uVar9 * 8);
  puVar1 = (undefined8 *)(lVar4 + uVar8 * 0x30);
  *puVar1 = CONCAT44(uVar3,1);
  puVar1[1] = CONCAT44(uStack_2c,param_3);
  plVar2 = (longlong *)(lVar4 + 0x10 + uVar8 * 0x30);
  *plVar2 = lVar7;
  plVar2[1] = lVar5;
  plVar2 = (longlong *)(lVar4 + 0x20 + uVar8 * 0x30);
  *plVar2 = lVar6;
  plVar2[1] = lStack_10;
  *(longlong *)(param_2 + 0x30) = *(longlong *)(param_2 + 0x30) + 1;
  return;
}



// FUNCTION 1433c20b0 FUN_1433c20b0 body=156 status=ok
// SIG undefined FUN_1433c20b0(void)

void FUN_1433c20b0(longlong param_1,longlong param_2,undefined4 param_3,longlong *param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 uStack_2c;
  longlong lStack_10;
  
  uVar3 = *(undefined4 *)(param_2 + 0x30);
  lVar7 = FUN_14332b280(*(undefined8 *)(param_1 + 0x18),10,0);
  *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
  lVar5 = *param_4;
  lVar6 = param_4[1];
  uVar9 = *(ulonglong *)(param_2 + 0x30) >> 6;
  if (*(ulonglong *)(param_2 + 0x38) <= uVar9) {
    FUN_1433c6af0(param_2 + 0x28,uVar9);
  }
  uVar8 = (ulonglong)(*(uint *)(param_2 + 0x30) & 0x3f);
  lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x48) + uVar9 * 8);
  puVar1 = (undefined8 *)(lVar4 + uVar8 * 0x30);
  *puVar1 = CONCAT44(uVar3,10);
  puVar1[1] = CONCAT44(uStack_2c,param_3);
  plVar2 = (longlong *)(lVar4 + 0x10 + uVar8 * 0x30);
  *plVar2 = lVar7;
  plVar2[1] = lVar5;
  plVar2 = (longlong *)(lVar4 + 0x20 + uVar8 * 0x30);
  *plVar2 = lVar6;
  plVar2[1] = lStack_10;
  *(longlong *)(param_2 + 0x30) = *(longlong *)(param_2 + 0x30) + 1;
  return;
}



// FUNCTION 1433c2160 FUN_1433c2160 body=197 status=ok
// SIG undefined FUN_1433c2160(void)

void FUN_1433c2160(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 uStack_2c;
  undefined8 uStack_10;
  
  uVar3 = *(undefined4 *)(param_2 + 0x30);
  lVar5 = FUN_14332b280(*(undefined8 *)(param_1 + 0x18),9,0);
  *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
  uVar7 = *(ulonglong *)(param_2 + 0x30) >> 6;
  if (*(ulonglong *)(param_2 + 0x38) <= uVar7) {
    FUN_1433c6af0(param_2 + 0x28,uVar7);
  }
  uVar6 = (ulonglong)(*(uint *)(param_2 + 0x30) & 0x3f);
  lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x48) + uVar7 * 8);
  puVar1 = (undefined8 *)(lVar4 + uVar6 * 0x30);
  *puVar1 = CONCAT44(uVar3,9);
  puVar1[1] = CONCAT44(uStack_2c,param_3);
  plVar2 = (longlong *)(lVar4 + 0x10 + uVar6 * 0x30);
  *plVar2 = lVar5;
  plVar2[1] = CONCAT44(param_5,param_4);
  puVar1 = (undefined8 *)(lVar4 + 0x20 + uVar6 * 0x30);
  *puVar1 = CONCAT44(param_7,param_6);
  puVar1[1] = uStack_10;
  *(longlong *)(param_2 + 0x30) = *(longlong *)(param_2 + 0x30) + 1;
  return;
}



// FUNCTION 1433c2230 FUN_1433c2230 body=725 status=ok
// SIG undefined FUN_1433c2230(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1433c2230(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                  float param_5,float param_6,float param_7,char param_8)

{
  RefCountImpl **ppRVar1;
  undefined8 *puVar2;
  float fVar3;
  RefCountImpl *this;
  uint *puVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  longlong lVar7;
  RefCountImpl **ppRVar8;
  ulonglong uVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 local_res8 [8];
  undefined8 local_c8;
  undefined2 local_c0 [4];
  RefCountImpl *local_b8;
  RefCountImpl *local_b0 [2];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 local_90;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  longlong *plStack_78;
  
  fVar3 = *(float *)(param_3 + 0x80);
  fVar12 = *(float *)(param_3 + 0x7c);
  fVar13 = fVar3 - param_6 * param_7;
  if (param_8 != '\0') {
    fVar11 = _guard_xfg_dispatch_icall_nop
                       (fVar3 * *(float *)(param_3 + 0xa4) + fVar12 * *(float *)(param_3 + 0xa0) +
                        *(float *)(param_3 + 0xac) + 0.5);
    fVar12 = fVar11 * *(float *)(param_3 + 0xc0) +
             (fVar3 * *(float *)(param_3 + 0xb4) + fVar12 * *(float *)(param_3 + 0xb0) +
             *(float *)(param_3 + 0xbc)) * *(float *)(param_3 + 0xc4) + *(float *)(param_3 + 0xcc);
  }
  uStack_9c = *(undefined4 *)(param_2 + 0x30);
  local_a0 = 7;
  this = (RefCountImpl *)
         (**(code **)(*param_4 + 0xa8))
                   (param_4,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x70));
  puVar6 = local_c0;
  lVar10 = 2;
  local_c8 = 0xb;
  lVar7 = 2;
  do {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  local_b0[1] = (RefCountImpl *)&DAT_1467ce628;
  local_c0[0] = 0x101;
  local_c0[1] = 0;
  local_b8 = (RefCountImpl *)0x0;
  local_b0[0] = (RefCountImpl *)0x0;
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(this);
  }
  if (local_b8 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_b8);
  }
  local_b8 = this;
  if (local_b0[0] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_b0[0]);
  }
  local_b0[0] = (RefCountImpl *)0x0;
  local_90 = FUN_1432d2110(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x68),&local_c8);
  fStack_88 = fVar12;
  fStack_84 = fVar13;
  puVar4 = (uint *)(**(code **)(*param_4 + 0x28))(param_4,local_res8);
  local_80 = (float)*puVar4 * param_5 + fVar12;
  lVar7 = (**(code **)(*param_4 + 0x28))(param_4,local_res8);
  uVar9 = *(ulonglong *)(param_2 + 0x30) >> 6;
  fStack_7c = (float)*(uint *)(lVar7 + 4) * param_6 + fVar13;
  plStack_78 = param_4;
  if (*(ulonglong *)(param_2 + 0x38) <= uVar9) {
    FUN_1433c6af0(param_2 + 0x28,uVar9);
  }
  uVar5 = (ulonglong)(*(uint *)(param_2 + 0x30) & 0x3f);
  lVar7 = *(longlong *)(*(longlong *)(param_2 + 0x48) + uVar9 * 8);
  puVar2 = (undefined8 *)(lVar7 + uVar5 * 0x30);
  *puVar2 = CONCAT44(uStack_9c,local_a0);
  puVar2[1] = uStack_98;
  puVar2 = (undefined8 *)(lVar7 + 0x10 + uVar5 * 0x30);
  *puVar2 = local_90;
  puVar2[1] = CONCAT44(fStack_84,fStack_88);
  puVar2 = (undefined8 *)(lVar7 + 0x20 + uVar5 * 0x30);
  *puVar2 = CONCAT44(fStack_7c,local_80);
  puVar2[1] = plStack_78;
  *(longlong *)(param_2 + 0x30) = *(longlong *)(param_2 + 0x30) + 1;
  ppRVar8 = local_b0 + 1;
  do {
    ppRVar1 = ppRVar8 + 0xffffffffffffffff;
    ppRVar8 = ppRVar8 + 0xffffffffffffffff;
    lVar10 = lVar10 + -1;
    if (*ppRVar1 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*ppRVar1);
    }
  } while (lVar10 != 0);
  return;
}



// FUNCTION 1433c2510 FUN_1433c2510 body=161 status=ok
// SIG undefined FUN_1433c2510(void)

void FUN_1433c2510(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uStack_2c;
  undefined8 uStack_10;
  
  uVar3 = *(undefined4 *)(param_2 + 0x30);
  lVar7 = FUN_14332b280(*(undefined8 *)(param_1 + 0x18),0xb,0);
  *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
  lVar5 = *(longlong *)(param_1 + 0xb0);
  uVar6 = *(undefined8 *)(param_1 + 0xb8);
  uVar9 = *(ulonglong *)(param_2 + 0x30) >> 6;
  if (*(ulonglong *)(param_2 + 0x38) <= uVar9) {
    FUN_1433c6af0(param_2 + 0x28,uVar9);
  }
  uVar8 = (ulonglong)(*(uint *)(param_2 + 0x30) & 0x3f);
  lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x48) + uVar9 * 8);
  puVar1 = (undefined8 *)(lVar4 + uVar8 * 0x30);
  *puVar1 = CONCAT44(uVar3,0xb);
  puVar1[1] = (ulonglong)uStack_2c << 0x20;
  plVar2 = (longlong *)(lVar4 + 0x10 + uVar8 * 0x30);
  *plVar2 = lVar7;
  plVar2[1] = lVar5;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + uVar8 * 0x30);
  *puVar1 = uVar6;
  puVar1[1] = uStack_10;
  *(longlong *)(param_2 + 0x30) = *(longlong *)(param_2 + 0x30) + 1;
  return;
}



// FUNCTION 1433c25c0 FUN_1433c25c0 body=742 status=ok
// SIG undefined FUN_1433c25c0(void)

void FUN_1433c25c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  RefCountNTSImpl *pRVar4;
  undefined8 uVar5;
  RefCountImpl *this;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined2 *puVar13;
  undefined **local_res8;
  
  uVar11 = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  FUN_1433c5e50(param_2 + 0x28,0,*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_1 + 0x18));
  uVar9 = uVar11;
  uVar12 = uVar11;
  if (*(longlong *)(param_2 + 0x30) != 0) {
    do {
      uVar6 = (ulonglong)((uint)uVar9 & 0x3f);
      lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x48) + (uVar9 >> 6) * 8);
      uVar7 = (ulonglong)((uint)uVar12 & 0x3f);
      lVar10 = *(longlong *)(*(longlong *)(param_2 + 0x48) + (uVar12 >> 6) * 8);
      if (((*(short *)(lVar10 + uVar7 * 0x30) != *(short *)(lVar8 + uVar6 * 0x30)) ||
          (*(longlong *)(lVar10 + 0x10 + uVar7 * 0x30) != *(longlong *)(lVar8 + 0x10 + uVar6 * 0x30)
          )) && (uVar12 < uVar9)) {
        FUN_1433c13d0(param_1,param_2,uVar12,uVar9);
        uVar12 = uVar9;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(ulonglong *)(param_2 + 0x30));
    if (uVar12 < uVar9) {
      FUN_1433c13d0(param_1,param_2,uVar12,uVar9);
    }
  }
  uVar9 = *(ulonglong *)(param_2 + 0x30);
  plVar1 = (longlong *)(param_1 + 0x48);
  uVar12 = *(ulonglong *)(param_1 + 0x50);
  FUN_1433c6990(plVar1,*(undefined8 *)(param_1 + 0x60),uVar9);
  if (uVar12 < uVar9) {
    lVar8 = *plVar1 + uVar12 * 0x28;
    for (lVar10 = uVar9 - uVar12; lVar10 != 0; lVar10 = lVar10 + -1) {
      if (lVar8 != 0) {
        *(undefined8 *)(lVar8 + 8) = 0;
      }
      lVar8 = lVar8 + 0x28;
    }
  }
  uVar9 = *(ulonglong *)(param_2 + 0x58);
  plVar2 = (longlong *)(param_1 + 0x68);
  uVar12 = *(ulonglong *)(param_1 + 0x70);
  FUN_1433c6a50(plVar2,*(undefined8 *)(param_1 + 0x80),uVar9);
  if (uVar12 < uVar9) {
    lVar8 = uVar12 * 0x40 + *plVar2;
    for (lVar10 = uVar9 - uVar12; lVar10 != 0; lVar10 = lVar10 + -1) {
      if (lVar8 != 0) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
        *(undefined8 *)(lVar8 + 0x18) = 0;
        *(undefined8 *)(lVar8 + 0x20) = 0;
        *(undefined ***)(lVar8 + 0x28) = &PTR_LOOP_1467cd040;
        *(undefined8 *)(lVar8 + 0x30) = 0;
      }
      lVar8 = lVar8 + 0x40;
    }
  }
  uVar9 = uVar11;
  if (*(longlong *)(param_2 + 0x30) != 0) {
    do {
      lVar8 = *plVar1;
      puVar13 = (undefined2 *)
                ((ulonglong)((uint)uVar9 & 0x3f) * 0x30 +
                *(longlong *)(*(longlong *)(param_2 + 0x48) + (uVar9 >> 6) * 8));
      *(undefined2 *)(uVar11 + lVar8) = *puVar13;
      *(undefined2 *)(uVar11 + 2 + lVar8) = puVar13[1];
      *(undefined4 *)(uVar11 + 4 + lVar8) = *(undefined4 *)(puVar13 + 4);
      pRVar4 = *(RefCountNTSImpl **)(uVar11 + 8 + lVar8);
      uVar5 = *(undefined8 *)(puVar13 + 8);
      if (pRVar4 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(pRVar4);
      }
      *(undefined8 *)(uVar11 + 8 + lVar8) = uVar5;
      uVar9 = uVar9 + 1;
      uVar5 = *(undefined8 *)(puVar13 + 0x10);
      puVar3 = (undefined8 *)(uVar11 + 0x10 + lVar8);
      *puVar3 = *(undefined8 *)(puVar13 + 0xc);
      puVar3[1] = uVar5;
      *(undefined8 *)(uVar11 + 0x20 + lVar8) = *(undefined8 *)(puVar13 + 0x14);
      uVar11 = uVar11 + 0x28;
    } while (uVar9 < *(ulonglong *)(param_2 + 0x30));
  }
  uVar12 = 0;
  uVar9 = uVar12;
  if (*(longlong *)(param_2 + 0x58) != 0) {
    do {
      lVar8 = *plVar2;
      uVar11 = (ulonglong)((uint)uVar9 & 0xf);
      lVar10 = *(longlong *)(*(longlong *)(param_2 + 0x70) + (uVar9 >> 4) * 8);
      *(undefined4 *)(uVar12 + lVar8) = *(undefined4 *)(lVar10 + uVar11 * 0x18);
      *(undefined4 *)(uVar12 + 4 + lVar8) = *(undefined4 *)(lVar10 + 4 + uVar11 * 0x18);
      *(undefined4 *)(uVar12 + 8 + lVar8) = *(undefined4 *)(lVar10 + 8 + uVar11 * 0x18);
      this = *(RefCountImpl **)(uVar12 + 0x10 + lVar8);
      if (this != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(this);
      }
      *(undefined8 *)(uVar12 + 0x10 + lVar8) = 0;
      local_res8 = &PTR_LOOP_1467cd040;
      FUN_1432c03f0(lVar8 + 0x28 + uVar12,&local_res8);
      if (local_res8 != &PTR_LOOP_1467cd040) {
        FUN_1432c03a0(*local_res8);
      }
      lVar10 = *(longlong *)(lVar10 + 0x10 + uVar11 * 0x18);
      if (lVar10 != 0) {
        *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
      }
      pRVar4 = *(RefCountNTSImpl **)(uVar12 + 0x30 + lVar8);
      if (pRVar4 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(pRVar4);
      }
      *(longlong *)(uVar12 + 0x30 + lVar8) = lVar10;
      uVar9 = uVar9 + 1;
      *(undefined4 *)(uVar12 + 0x38 + lVar8) = 0x3f800000;
      uVar12 = uVar12 + 0x40;
    } while (uVar9 < *(ulonglong *)(param_2 + 0x58));
  }
  return;
}



// FUNCTION 1433c28b0 FUN_1433c28b0 body=487 status=ok
// SIG undefined FUN_1433c28b0(void)

float FUN_1433c28b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  float local_58;
  float local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [56];
  
  lVar1 = *(longlong *)*param_1;
  lVar2 = (ulonglong)(byte)(&DAT_1467ccff4)[(ulonglong)(*(byte *)(lVar1 + 0xf) & 0xf) * 5] + 1;
  local_58 = *(float *)(lVar1 + lVar2 * 0x10);
  local_54 = *(float *)(lVar1 + 4 + lVar2 * 0x10);
  local_50 = *(undefined4 *)(lVar1 + 8 + lVar2 * 0x10);
  local_4c = *(undefined4 *)(lVar1 + 0xc + lVar2 * 0x10);
  local_48 = *(float *)(lVar1 + 0x10 + lVar2 * 0x10);
  local_44 = *(float *)(lVar1 + 0x14 + lVar2 * 0x10);
  local_40 = *(undefined4 *)(lVar1 + 0x18 + lVar2 * 0x10);
  local_3c = *(undefined4 *)(lVar1 + 0x1c + lVar2 * 0x10);
  if ((*(byte *)(*(longlong *)*param_1 + 0xf) & 0x10) != 0) {
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0x3f800000;
    uStack_7c = 0x3f800000;
    FUN_1432bf230(param_2,&local_88,param_3,lVar1,local_38);
    local_68 = 0x3f800000;
    local_64 = 0x3f800000;
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0x3f800000;
    uStack_6c = 0;
    FUN_143326520(&local_58,&local_78,local_38);
    fVar3 = local_58 * local_58 + local_48 * local_48;
    fVar4 = local_54 * local_54 + local_44 * local_44;
    if (fVar3 <= fVar4) {
      fVar3 = fVar4;
    }
    fVar3 = _guard_xfg_dispatch_icall_nop(fVar3);
    if (10.0 <= fVar3) {
      fVar3 = 10.0;
    }
    fVar4 = 1e-05;
    if (1e-05 <= fVar3) {
      fVar4 = fVar3;
    }
    return fVar4;
  }
  fVar3 = (float)FUN_143343950(lVar2 * 2,0,local_54 * 0.0 + local_58,local_44 * 0.0 + local_48,
                               local_58 * 0.0 + local_54,local_48 * 0.0 + local_44);
  fVar3 = ABS(fVar3);
  if (10.0 <= fVar3) {
    fVar3 = 10.0;
  }
  fVar4 = 1e-08;
  if (1e-08 <= fVar3) {
    fVar4 = fVar3;
  }
  return fVar4;
}



// FUNCTION 1433c2aa0 FUN_1433c2aa0 body=1837 status=ok
// SIG undefined FUN_1433c2aa0(void)

undefined8
FUN_1433c2aa0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined4 param_5,char param_6,char param_7,char param_8,byte param_9)

{
  int iVar1;
  longlong *plVar2;
  uint6 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  undefined8 uVar9;
  RefCountImpl *this;
  longlong lVar10;
  byte bVar11;
  ushort uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined2 uVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  undefined4 uVar19;
  float fVar20;
  undefined8 in_stack_ffffffffffffff28;
  undefined4 uVar22;
  longlong *plVar21;
  undefined4 uVar23;
  undefined8 in_stack_ffffffffffffff30;
  undefined8 uVar24;
  undefined8 in_stack_ffffffffffffff38;
  undefined8 uVar25;
  uint in_stack_ffffffffffffff48;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  uVar22 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
  bVar6 = false;
  fVar20 = *(float *)(param_4 + 0xe0) * *(float *)(param_4 + 0x60);
  bVar4 = true;
  lVar8 = (**(code **)(**(longlong **)(param_4 + 0x50) + 0x50))
                    (*(longlong **)(param_4 + 0x50),param_5);
  if (lVar8 != 0) {
    if (((*(uint *)(*(longlong *)(param_4 + 0x50) + 0x1c) >> 0xc & 1) != 0) ||
       (fVar20 <= *(float *)(*(longlong *)(param_1 + 0x18) + 0x3c) * *(float *)(param_4 + 0x74))) {
      if (*(longlong *)(lVar8 + 0x10) != 0) {
        FUN_1433c1ac0(param_1,param_3,lVar8,param_4,CONCAT44(uVar22,*(undefined4 *)(param_4 + 0x78))
                     );
      }
      return 1;
    }
    bVar6 = true;
    bVar4 = false;
  }
  uVar12 = *(ushort *)(param_4 + 0xc);
  if ((param_9 & 2) != 0) {
    bVar6 = true;
  }
  bVar11 = (byte)uVar12;
  if (((bVar11 >> 4 & 1) == 0) && (param_7 == '\0')) {
    uVar14 = 0;
  }
  else {
    uVar14 = 1;
  }
  if (((bVar11 >> 3 & 1) == 0) && (param_6 == '\0')) {
    uVar13 = 0;
  }
  else {
    uVar13 = 1;
  }
  uVar9 = FUN_1432d8640(param_2);
  uVar24 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff38 >> 8),uVar14);
  lVar8 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff30 >> 8),uVar13);
  plVar21 = (longlong *)CONCAT44(uVar22,fVar20);
  this = (RefCountImpl *)
         FUN_14332bfd0(*(undefined8 *)(param_1 + 0x18),param_4,uVar9,param_5,plVar21,lVar8,uVar24,
                       uVar12 >> 0xc,in_stack_ffffffffffffff48 & 0xffffff00);
  uVar22 = (undefined4)((ulonglong)uVar24 >> 0x20);
  uVar9 = *(undefined8 *)(param_4 + 8);
  local_88 = *(longlong *)(param_4 + 0x58);
  local_78 = *(undefined8 *)(param_4 + 0x10);
  bVar11 = (byte)*(ushort *)(param_4 + 0xc);
  uVar15 = (undefined2)param_5;
  uStack_80 = CONCAT62((int6)((ulonglong)uVar9 >> 0x10),uVar15);
  uVar24 = uStack_80;
  uStack_80._4_2_ = (ushort)((ulonglong)uVar9 >> 0x20);
  if (((bVar11 >> 3 & 1) == 0) && (param_6 == '\0')) {
    uStack_80._4_2_ = uStack_80._4_2_ & 0xfff7;
  }
  else {
    uStack_80._4_2_ = uStack_80._4_2_ | 8;
  }
  if (((bVar11 >> 4 & 1) == 0) && (param_7 == '\0')) {
    uStack_80._4_2_ = uStack_80._4_2_ & 0xffef;
  }
  else {
    uStack_80._4_2_ = uStack_80._4_2_ | 0x10;
  }
  uVar12 = uStack_80._4_2_ & 0xfbff;
  if ((*(ushort *)(param_4 + 0xc) >> 10 & 1) != 0) {
    uVar12 = uStack_80._4_2_ | 0x400;
  }
  uStack_80._6_2_ = (ushort)((ulonglong)uVar9 >> 0x30);
  uStack_80._0_4_ = (undefined4)uVar24;
  uStack_80._0_6_ = CONCAT24(uVar12,(undefined4)uStack_80);
  fVar16 = (float)FUN_14332b3a0(*(undefined8 *)(param_1 + 0x18),&local_88,0xfbff,
                                *(longlong *)(param_4 + 0xf0) != 0);
  dVar18 = _guard_xfg_dispatch_icall_nop((double)fVar16 * 16.0);
  uVar9 = uStack_80;
  uStack_80._0_4_ = CONCAT22((short)(longlong)dVar18,(undefined2)uStack_80);
  uVar12 = uStack_80._4_2_ & 0xfdff;
  if (*(int *)(param_4 + 0x68) != 0) {
    uVar12 = uStack_80._4_2_ | 0x200;
  }
  uStack_80._6_2_ = SUB82(uVar9,6);
  uVar3 = CONCAT24(uVar12,(undefined4)uStack_80);
  uStack_80 = CONCAT26(uStack_80._6_2_,uVar3) & 0xfffffffbffffffff;
  bVar5 = true;
  if (((byte)(uVar12 >> 10) & 1) == 0) {
    bVar5 = bVar6;
  }
  if ((((((uVar12 & 1) != 0) && ((uVar12 >> 8 & 1) == 0)) && (*(int *)(param_4 + 100) == 0)) &&
      ((*(int *)(param_4 + 0x68) == 0 &&
       (plVar2 = *(longlong **)(local_88 + 0x18), (*(uint *)((longlong)plVar2 + 0x1c) >> 7 & 1) == 0
       )))) && (((float)uStack_80._6_2_ * 0.0625 == 0.0 && ((float)(ushort)local_78 * 0.0625 == 0.0)
                ))) {
    fVar16 = (float)(**(code **)(*plVar2 + 0x28))(plVar2,(ulonglong)uVar3 & 0xffff);
    fVar17 = (float)(**(code **)(**(longlong **)(local_88 + 0x18) + 0xb0))();
    if (((fVar16 * fVar20) / fVar17) * 3.0 < (float)*(uint *)(*(longlong *)(param_1 + 0x18) + 0xeac)
       ) {
      uStack_80 = uStack_80 | 0x400000000;
    }
  }
  lVar10 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18) + 0x10))();
  uVar23 = (undefined4)((ulonglong)plVar21 >> 0x20);
  if ((((*(char *)(lVar10 + 0x34) == '\0') || (param_8 == '\0')) ||
      (((uStack_80 & 0xf00000000000) != 0 ||
       ((((uStack_80 & 0x100000000) == 0 || (((byte)(uStack_80 >> 0x20) >> 1 & 1) == 0)) ||
        (fVar20 <= 6.0)))))) || ((*(uint *)(*(longlong *)(local_88 + 0x18) + 0x1c) & 0x2010) == 0))
  {
    uVar12 = uStack_80._4_2_ & 0xfffd;
  }
  else {
    uVar12 = uStack_80._4_2_ | 2;
  }
  uStack_80._0_6_ = CONCAT24(uVar12,(undefined4)uStack_80);
  if (((*(byte *)(param_4 + 0x24) >> 5 & 1) != 0) || (bVar5)) {
LAB_1433c3019:
    uVar23 = (undefined4)((ulonglong)plVar21 >> 0x20);
    uVar19 = (undefined4)((ulonglong)lVar8 >> 0x20);
    if (bVar5) {
LAB_1433c301d:
      uVar23 = (undefined4)((ulonglong)plVar21 >> 0x20);
      uVar19 = (undefined4)((ulonglong)lVar8 >> 0x20);
      if (*(longlong **)(param_4 + 0xe8) != (longlong *)0x0) {
        cVar7 = (**(code **)(**(longlong **)(param_4 + 0xe8) + 8))();
        uVar23 = (undefined4)((ulonglong)plVar21 >> 0x20);
        uVar19 = (undefined4)((ulonglong)lVar8 >> 0x20);
        if (cVar7 == '\0') {
          uVar25 = CONCAT44(uVar22,*(undefined4 *)(param_4 + 0x60));
          uVar24 = CONCAT62((int6)((ulonglong)lVar8 >> 0x10),uStack_80._4_2_);
          uVar9 = CONCAT62((int6)((ulonglong)plVar21 >> 0x10),uVar15);
          FUN_1433c16c0(param_1,param_3,*(undefined4 *)(param_4 + 0x78),
                        *(undefined8 *)(param_4 + 0x58),uVar9,uVar24,uVar25,
                        *(undefined4 *)(param_4 + 0x7c),*(undefined4 *)(param_4 + 0x80));
          uVar23 = (undefined4)((ulonglong)uVar9 >> 0x20);
          uVar19 = (undefined4)((ulonglong)uVar24 >> 0x20);
          uVar22 = (undefined4)((ulonglong)uVar25 >> 0x20);
          *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x40;
        }
      }
    }
    iVar1 = *(int *)(param_4 + 0x30);
    if ((iVar1 != 0) && (bVar4)) {
      local_78 = *(undefined8 *)(param_4 + 0x28);
      local_88 = *(longlong *)(param_4 + 0x58);
      bVar11 = (byte)*(undefined2 *)(param_4 + 0xc);
      if (((bVar11 >> 3 & 1) == 0) && (param_6 == '\0')) {
        uVar12 = *(ushort *)(param_4 + 0x24) & 0xfff4;
      }
      else {
        uVar12 = *(ushort *)(param_4 + 0x24) & 0xfffc | 8;
      }
      if (((bVar11 >> 4 & 1) == 0) && (param_7 == '\0')) {
        uVar12 = uVar12 & 0xffef;
      }
      else {
        uVar12 = uVar12 | 0x10;
      }
      uStack_80._0_6_ = CONCAT24(uVar12,*(undefined4 *)(param_4 + 0x20));
      uStack_80 = CONCAT26(*(undefined2 *)(param_4 + 0x26),(undefined6)uStack_80);
      fVar16 = (float)FUN_14332b450(*(undefined8 *)(param_1 + 0x18),fVar20,
                                    *(undefined8 *)(param_4 + 0xf0));
      dVar18 = _guard_xfg_dispatch_icall_nop((double)fVar16 * 16.0);
      uStack_80._0_4_ = CONCAT22((short)(longlong)dVar18,uVar15);
      lVar8 = FUN_14332b4d0(*(undefined8 *)(param_1 + 0x18),param_1,&local_88);
      if (lVar8 == 0) {
        uVar9 = *(undefined8 *)(param_4 + 0xf0);
        plVar21 = &local_88;
        lVar8 = FUN_14332b9a0(*(undefined8 *)(param_1 + 0x18),param_2,param_4,param_1,plVar21,
                              CONCAT44(uVar19,fVar20),uVar9);
        uVar23 = (undefined4)((ulonglong)plVar21 >> 0x20);
        uVar22 = (undefined4)((ulonglong)uVar9 >> 0x20);
        if (lVar8 == 0) {
          if (*(int *)(*(longlong *)(param_1 + 0x18) + 0x11b0) == 5) {
            uVar9 = 0;
            goto LAB_1433c2f9d;
          }
          goto LAB_1433c2f9a;
        }
      }
      FUN_1433c17c0(param_1,param_3,2,param_4,CONCAT44(uVar23,iVar1),lVar8,CONCAT44(uVar22,fVar20),
                    param_8,0x3f800000);
    }
  }
  else {
    if ((uVar12 & 4) == 0) {
      uVar19 = 0x3f800000;
    }
    else {
      uVar19 = 0x40200000;
    }
    lVar10 = FUN_14332b4d0(*(undefined8 *)(param_1 + 0x18),param_1,&local_88);
    if (lVar10 != 0) {
LAB_1433c2ecd:
      uVar9 = CONCAT44(uVar22,fVar20);
      plVar21 = (longlong *)CONCAT44(uVar23,*(undefined4 *)(param_4 + 0x78));
      FUN_1433c17c0(param_1,param_3,4,param_4,plVar21,lVar10,uVar9,param_8,uVar19);
      uVar22 = (undefined4)((ulonglong)uVar9 >> 0x20);
      lVar8 = lVar10;
      goto LAB_1433c3019;
    }
    if ((uStack_80._6_2_ == 0) && ((ushort)local_78 == 0)) {
      plVar21 = &local_88;
      lVar10 = FUN_14332b530(*(undefined8 *)(param_1 + 0x18),param_2,param_4,param_1,plVar21);
    }
    else {
      uVar9 = *(undefined8 *)(param_4 + 0xf0);
      plVar21 = &local_88;
      lVar8 = CONCAT44((int)((ulonglong)lVar8 >> 0x20),fVar20);
      lVar10 = FUN_14332b9a0(*(undefined8 *)(param_1 + 0x18),param_2,param_4,param_1,plVar21,lVar8,
                             uVar9);
      uVar22 = (undefined4)((ulonglong)uVar9 >> 0x20);
    }
    uVar23 = (undefined4)((ulonglong)plVar21 >> 0x20);
    if (lVar10 != 0) goto LAB_1433c2ecd;
    lVar10 = *(longlong *)(param_1 + 0x18);
    iVar1 = *(int *)(lVar10 + 0x11b0);
    if (iVar1 != 2) {
      if (iVar1 == 1) goto LAB_1433c2f9a;
      if (iVar1 == 5) {
        lVar10 = (**(code **)(*(longlong *)(lVar10 + 0x18) + 0x10))(lVar10 + 0x18);
        if (*(char *)(lVar10 + 0x35) == '\0') {
          uVar9 = 0;
          goto LAB_1433c2f9d;
        }
      }
      else if (1 < iVar1 - 3U) goto LAB_1433c3019;
      goto LAB_1433c301d;
    }
    fVar16 = *(float *)(param_4 + 0x60) * 0.25;
    fVar20 = *(float *)(param_4 + 0x60) * 0.5;
    local_90 = fVar16 * 0.5;
    local_94 = fVar20 * 0.25;
    local_98 = *(float *)(param_4 + 0x7c) + local_90;
    local_90 = *(float *)(param_4 + 0x7c) + fVar16 + local_90;
    local_8c = *(float *)(param_4 + 0x80) - local_94;
    local_94 = (*(float *)(param_4 + 0x80) - fVar20) - local_94;
    FUN_1433c2000(param_1,param_3,*(undefined4 *)(param_4 + 0x78),&local_98);
  }
LAB_1433c2f9a:
  uVar9 = 1;
LAB_1433c2f9d:
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
  }
  return uVar9;
}



// FUNCTION 1433c31e0 FUN_1433c31e0 body=824 status=ok
// SIG undefined FUN_1433c31e0(void)

void FUN_1433c31e0(longlong param_1,longlong *param_2,ulonglong param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined2 uVar1;
  RefCountImpl *pRVar2;
  ushort uVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  RefCountImpl *this;
  undefined8 uVar8;
  longlong lVar9;
  float fVar10;
  undefined4 local_res18 [2];
  undefined8 in_stack_fffffffffffffde8;
  uint uVar12;
  undefined1 *puVar11;
  undefined8 in_stack_fffffffffffffdf0;
  undefined4 in_stack_fffffffffffffdf8;
  undefined8 in_stack_fffffffffffffe00;
  float local_1e8 [6];
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  float local_168;
  undefined8 local_164;
  undefined8 local_15c;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  ushort local_bc;
  undefined1 local_a8 [112];
  
  uVar12 = (uint)((ulonglong)in_stack_fffffffffffffde8 >> 0x20);
  uVar5 = (undefined4)((ulonglong)in_stack_fffffffffffffe00 >> 0x20);
  lVar6 = (param_3 & 0xffffffff) * 0x40 + *(longlong *)(param_1 + 0x68);
  local_188 = 0;
  uStack_180 = 0;
  local_138 = 0;
  uStack_130 = 0;
  lVar9 = *(longlong *)(param_1 + 0x48) + (ulonglong)*(uint *)(lVar6 + 4) * 0x28;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = 0x100000;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0x100000;
  local_198 = 0;
  local_190 = 0;
  local_128 = 0x3f800000;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_11c = 0;
  local_118 = 0;
  uStack_114 = 0x3f800000;
  uStack_110 = 0;
  uStack_10c = 0;
  local_108 = 0x3f800000;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  local_f8 = 0;
  uStack_f4 = 0x3f800000;
  uStack_f0 = 0;
  uStack_ec = 0;
  local_178 = *(undefined8 *)(lVar9 + 0x10);
  local_170 = Scaleform::Render::GlyphCache::RegisterFont(*(undefined8 *)(param_1 + 0x18));
  local_168 = *(float *)(lVar9 + 0x1c);
  local_164 = 0;
  local_15c = 0;
  local_154 = 0;
  local_150 = *(undefined4 *)(lVar9 + 4);
  local_14c = *(undefined4 *)(lVar9 + 0x20);
  local_148 = *(undefined4 *)(lVar9 + 0x24);
  local_e8 = *(undefined4 *)(param_1 + 0xa0);
  local_138 = 0;
  uStack_130 = 0;
  local_e4 = 0;
  local_bc = *(ushort *)(lVar9 + 0x1a);
  uVar1 = *(undefined2 *)(lVar9 + 0x18);
  bVar4 = (byte)local_bc;
  uVar3 = local_bc >> 0xc;
  uVar7 = FUN_1432d8640(param_2);
  this = (RefCountImpl *)
         FUN_14332bfd0(*(undefined8 *)(param_1 + 0x18),&local_1c8,uVar7,uVar1,
                       (ulonglong)uVar12 << 0x20,
                       CONCAT71((int7)((ulonglong)in_stack_fffffffffffffdf0 >> 8),bVar4 >> 3) &
                       0xffffffffffffff01,
                       CONCAT31((int3)((uint)in_stack_fffffffffffffdf8 >> 8),bVar4 >> 4) &
                       0xffffff01,CONCAT44(uVar5,(uint)uVar3),1);
  local_e4 = *(undefined4 *)(*(longlong *)(this + 0x48) + 0x78);
  fVar10 = local_168 / local_15c._4_4_;
  local_1e8[1] = 0.0;
  local_1e8[2] = 0.0;
  local_1e8[3] = 0.0;
  local_1e8[4] = 0.0;
  local_1d0 = 0;
  local_1e8[0] = fVar10 * *(float *)(param_1 + 0xa0);
  local_1e8[5] = local_1e8[0];
  uVar5 = FUN_1433c0e50(param_2,lVar6,lVar9,local_1e8,fVar10,param_4,param_5,local_a8);
  uVar7 = FUN_1432d8640(param_2);
  uVar8 = (**(code **)(*param_2 + 0xe8))(param_2);
  puVar11 = local_a8;
  uVar8 = FUN_143325c50(uVar8,this,0,uVar5,puVar11,uVar7);
  uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (*(longlong *)(lVar6 + 0x18) != 0) {
    FUN_143325070();
  }
  *(undefined8 *)(lVar6 + 0x18) = uVar8;
  Scaleform::RefCountImpl::AddRef(this);
  if (*(RefCountImpl **)(lVar6 + 0x20) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar6 + 0x20));
  }
  *(RefCountImpl **)(lVar6 + 0x20) = this;
  *(float *)(lVar6 + 0x38) = fVar10;
  if (*(longlong *)(*(longlong *)(lVar6 + 0x18) + 0x20) == 0) {
    local_res18[0] = 0x44;
    lVar9 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0xe0,local_res18);
    uVar7 = 0;
    if (lVar9 != 0) {
      uVar7 = Scaleform::Render::Mesh::Mesh
                        (lVar9,*(undefined8 *)(*(longlong *)(lVar6 + 0x18) + 0x18),local_1e8,0,
                         (ulonglong)puVar11 & 0xffffffff00000000,CONCAT44(uVar5,param_5));
    }
    lVar9 = *(longlong *)(lVar6 + 0x18);
    pRVar2 = *(RefCountImpl **)(lVar9 + 0x20);
    if (pRVar2 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(pRVar2);
    }
    *(undefined8 *)(lVar9 + 0x20) = uVar7;
  }
  pRVar2 = *(RefCountImpl **)(*(longlong *)(lVar6 + 0x18) + 0x20);
  if (pRVar2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(pRVar2);
  }
  if (*(RefCountImpl **)(lVar6 + 0x10) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar6 + 0x10));
  }
  *(RefCountImpl **)(lVar6 + 0x10) = pRVar2;
  Scaleform::RefCountImpl::Release(this);
  return;
}



// FUNCTION 1433c3520 FUN_1433c3520 body=590 status=ok
// SIG undefined FUN_1433c3520(void)

void FUN_1433c3520(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  int *param_5)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  ulonglong uVar5;
  uint uVar6;
  uint *puVar7;
  float fVar8;
  float fVar9;
  undefined1 local_9e8 [32];
  undefined1 local_9c8 [384];
  undefined1 local_848 [4];
  uint local_844 [191];
  undefined1 local_548 [4];
  float local_544 [327];
  
  (**(code **)(*param_2 + 0x68))(param_2,0,local_9e8);
  uVar2 = (**(code **)(*param_2 + 0x70))(param_2,local_9e8,local_548,0x40);
  while (uVar2 != 0) {
    uVar5 = (ulonglong)uVar2;
    if (uVar2 != 0) {
      puVar7 = local_844;
      pfVar4 = local_544;
      do {
        fVar8 = pfVar4[-1];
        if (0.0 <= fVar8) {
          fVar8 = fVar8 + 0.5;
        }
        else {
          fVar8 = fVar8 - 0.5;
        }
        fVar9 = _guard_xfg_dispatch_icall_nop(fVar8);
        fVar8 = *pfVar4;
        *(short *)(puVar7 + -1) = (short)(int)fVar9;
        if (0.0 <= fVar8) {
          fVar8 = fVar8 + 0.5;
        }
        else {
          fVar8 = fVar8 - 0.5;
        }
        fVar8 = _guard_xfg_dispatch_icall_nop(fVar8);
        uVar1 = *(ushort *)(pfVar4 + 3);
        *(short *)((longlong)puVar7 + -2) = (short)(int)fVar8;
        if ((uVar1 & 0x10) == 0) {
          *puVar7 = *(uint *)(param_4 +
                             (longlong)
                             (int)(*(ushort *)
                                    ((longlong)pfVar4 + (ulonglong)(uVar1 >> 5 & 1) * 2 + 8) - 1) *
                             4);
        }
        else {
          *puVar7 = (*(uint *)(param_4 + (longlong)(int)(*(ushort *)((longlong)pfVar4 + 10) - 1) * 4
                              ) |
                    *(uint *)(param_4 + (longlong)(int)(*(ushort *)(pfVar4 + 2) - 1) * 4)) >> 1 &
                    0x7f7f7f7f;
        }
        pfVar4 = pfVar4 + 5;
        *(undefined *)(puVar7 + 1) = (&DAT_145b02d20)[uVar1 & 3];
        *(undefined *)((longlong)puVar7 + 5) = (&DAT_145b02d20)[uVar1 >> 2 & 3];
        puVar7 = puVar7 + 3;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    (**(code **)(*param_3 + 0x18))(param_3,0,*param_5,local_848,uVar2);
    *param_5 = *param_5 + uVar2;
    uVar2 = (**(code **)(*param_2 + 0x70))(param_2,local_9e8,local_548,0x40);
  }
  uVar6 = 0;
  uVar2 = (**(code **)(*param_2 + 0x60))(param_2,0);
  if (uVar2 != 0) {
    do {
      iVar3 = 0x40;
      if ((uVar2 < uVar6 + 0x40) && (iVar3 = uVar2 - uVar6, iVar3 == 0)) {
        return;
      }
      (**(code **)(*param_2 + 0x78))(param_2,0,local_9c8,uVar6,iVar3);
      (**(code **)(*param_3 + 0x20))(param_3,0,param_5[1] * 3,local_9c8,iVar3 * 3);
      param_5[1] = param_5[1] + iVar3;
      uVar6 = uVar6 + iVar3;
    } while (uVar6 < uVar2);
  }
  return;
}



// FUNCTION 1433c3780 FUN_1433c3780 body=174 status=ok
// SIG undefined FUN_1433c3780(void)

undefined1 FUN_1433c3780(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined2 local_res10;
  undefined4 local_res12;
  undefined8 local_38;
  undefined2 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = 1;
  local_38 = 0;
  local_30 = 0;
  local_20 = &DAT_1467cdbb8;
  local_res12 = 0;
  local_res10 = 0;
  local_18 = 0;
  local_10 = 0;
  local_24 = 3;
  cVar1 = (**(code **)(*param_2 + 8))(param_2,&local_28,1,&DAT_14621c810);
  if (cVar1 == '\0') {
    return 0;
  }
  (**(code **)(*param_2 + 0x18))(param_2,0,0,&local_38,1);
  (**(code **)(*param_2 + 0x20))(param_2,0,0,&local_res10,3);
  (**(code **)(*param_2 + 0x10))(param_2);
  return 1;
}



// FUNCTION 1433c3840 FUN_1433c3840 body=1483 status=ok
// SIG undefined FUN_1433c3840(void)

ulonglong FUN_1433c3840(undefined8 param_1,longlong *param_2,longlong *param_3,
                       Matrix2x4<float> *param_4,float *param_5,int param_6,float param_7,
                       float param_8)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  byte bVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int local_res10;
  int local_res14;
  ulonglong in_stack_fffffffffffffec8;
  undefined4 *puVar21;
  undefined4 uVar22;
  undefined8 in_stack_fffffffffffffed0;
  undefined4 *puVar23;
  undefined4 uVar24;
  int local_128;
  int local_124;
  undefined *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [192];
  
  iVar8 = (int)param_7;
  uVar24 = (undefined4)((ulonglong)in_stack_fffffffffffffed0 >> 0x20);
  local_res10 = param_6;
  local_res14 = (int)param_7;
  lVar10 = (**(code **)(*param_2 + 0xf0))(param_2);
  Scaleform::Render::MeshGenerator::Clear(lVar10);
  plVar1 = (longlong *)(lVar10 + 0xa0);
  Scaleform::Render::Tessellator::SetFillRule(plVar1,0);
  lVar11 = FUN_1432d8640(param_2);
  Scaleform::Render::Tessellator::SetToleranceParam(plVar1,lVar11);
  if ((SUB41(param_8,0) & 3) == 1) {
    fVar13 = *(float *)(lVar11 + 0x38) * 0.5;
  }
  else {
    fVar13 = 0.0;
  }
  Scaleform::Render::Tessellator::SetEdgeAAWidth(plVar1,fVar13);
  fVar13 = *(float *)(param_4 + 4);
  fVar2 = *(float *)param_4;
  fVar3 = *(float *)(param_4 + 0x14);
  fVar15 = param_5[1];
  fVar4 = *param_5;
  fVar5 = *(float *)(param_4 + 0x10);
  fVar6 = param_5[2];
  fVar7 = param_5[3];
  fVar14 = *(float *)(param_4 + 0xc);
  fVar16 = *(float *)(param_4 + 0x1c);
  fVar17 = fVar2 * fVar4 + fVar13 * fVar15 + fVar14;
  fVar18 = fVar3 * fVar15 + fVar5 * fVar4 + fVar16;
  fVar19 = fVar2 * fVar6 + fVar13 * fVar15 + fVar14;
  fVar20 = fVar3 * fVar15 + fVar5 * fVar6 + fVar16;
  fVar15 = fVar2 * fVar6 + fVar13 * fVar7 + fVar14;
  fVar14 = fVar2 * fVar4 + fVar13 * fVar7 + fVar14;
  fVar13 = fVar5 * fVar6 + fVar3 * fVar7 + fVar16;
  fVar16 = fVar5 * fVar4 + fVar3 * fVar7 + fVar16;
  param_7 = fVar13;
  param_8 = fVar15;
  if (param_6 != 0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,fVar17,fVar18);
    (**(code **)(*plVar1 + 0x20))(plVar1,fVar19,fVar20);
    fVar13 = param_7;
    (**(code **)(*plVar1 + 0x20))(plVar1,fVar15,param_7);
    (**(code **)(*plVar1 + 0x20))(plVar1,fVar14,fVar16);
    (**(code **)(*plVar1 + 0x28))(plVar1);
    in_stack_fffffffffffffec8 = in_stack_fffffffffffffec8 & 0xffffffffffffff00;
    (**(code **)(*plVar1 + 0x30))(plVar1,0,1,0,in_stack_fffffffffffffec8);
  }
  if (iVar8 != 0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,fVar17,fVar18);
    (**(code **)(*plVar1 + 0x20))(plVar1,fVar19,fVar20);
    (**(code **)(*plVar1 + 0x20))(plVar1,fVar15,fVar13);
    (**(code **)(*plVar1 + 0x20))(plVar1,fVar14,fVar16);
    (**(code **)(*plVar1 + 0x28))(plVar1);
    (**(code **)(*plVar1 + 0x30))(plVar1,0,2,0,in_stack_fffffffffffffec8 & 0xffffffffffffff00);
    FUN_1433c6360(CONCAT44(fVar20,fVar19),CONCAT44(fVar18,fVar17),CONCAT44(fVar16,fVar14),0x3f800000
                  ,&param_7,&param_6);
    (**(code **)(*plVar1 + 0x20))(plVar1,param_7,param_6);
    fVar2 = param_8;
    FUN_1433c6360(CONCAT44(fVar18,fVar17),CONCAT44(fVar16,fVar14),CONCAT44(fVar13,param_8),
                  0x3f800000,&param_7,&param_6);
    (**(code **)(*plVar1 + 0x20))(plVar1,param_7,param_6);
    FUN_1433c6360(CONCAT44(fVar16,fVar14),CONCAT44(fVar13,fVar2),CONCAT44(fVar20,fVar19),0x3f800000,
                  &param_7,&param_6);
    (**(code **)(*plVar1 + 0x20))(plVar1,param_7,param_6);
    puVar23 = &param_6;
    puVar21 = &param_7;
    FUN_1433c6360(CONCAT44(fVar13,fVar2),CONCAT44(fVar20,fVar19),CONCAT44(fVar18,fVar17),0x3f800000,
                  puVar21,puVar23);
    uVar24 = (undefined4)((ulonglong)puVar23 >> 0x20);
    (**(code **)(*plVar1 + 0x20))(plVar1,param_7,param_6);
    (**(code **)(*plVar1 + 0x28))(plVar1);
    in_stack_fffffffffffffec8 = (ulonglong)puVar21 & 0xffffffffffffff00;
    (**(code **)(*plVar1 + 0x30))(plVar1,0,2,0,in_stack_fffffffffffffec8);
  }
  uVar22 = (undefined4)(in_stack_fffffffffffffec8 >> 0x20);
  FUN_143336f70(plVar1,0);
  local_108 = 0x3f800000;
  uStack_100 = 0;
  local_f8 = 0x3f80000000000000;
  uStack_f0 = 0;
  Scaleform::Render::Matrix2x4<float>::SetInverse((Matrix2x4<float> *)&local_108,param_4);
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_108);
  (**(code **)(*plVar1 + 0x40))
            (plVar1,local_e8,0xc6fff800,0xc6fff800,CONCAT44(uVar22,0x46fff800),
             CONCAT44(uVar24,0x46fff800));
  local_128 = (**(code **)(*plVar1 + 0x58))(plVar1,0);
  local_124 = (**(code **)(*plVar1 + 0x60))(plVar1,0);
  local_118 = 0;
  local_110 = 0;
  local_124 = local_124 * 3;
  local_120 = &DAT_1467cdbb8;
  if (local_128 == 0) {
    uVar12 = FUN_1433c3780(param_1,param_3);
  }
  else {
    bVar9 = (**(code **)(*param_3 + 8))(param_3,&local_128,1,local_e8);
    if (bVar9 != 0) {
      param_5 = (float *)0x0;
      FUN_1433c3520(param_1,plVar1,param_3,&local_res10,&param_5);
      (**(code **)(*param_3 + 0x10))(param_3);
    }
    Scaleform::Render::MeshGenerator::Clear(lVar10);
    uVar12 = (ulonglong)bVar9;
  }
  return uVar12;
}



// FUNCTION 1433c3e20 FUN_1433c3e20 body=1685 status=ok
// SIG undefined FUN_1433c3e20(void)

char FUN_1433c3e20(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  Matrix2x4<float> *param_5,byte param_6)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 *local_res10;
  longlong *local_res18;
  ulonglong in_stack_fffffffffffffe68;
  undefined4 uVar18;
  undefined4 local_188;
  int local_184;
  undefined *local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  longlong *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 local_130 [64];
  undefined1 *local_f0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_98 [96];
  
  local_res18 = param_3;
  puVar4 = (undefined8 *)(**(code **)(*param_2 + 0xf0))(param_2);
  local_res10 = puVar4;
  Scaleform::Render::MeshGenerator::Clear(puVar4);
  plVar8 = puVar4 + 0x14;
  Scaleform::Render::Tessellator::SetFillRule(plVar8,0);
  uVar5 = FUN_1432d8640(param_2);
  Scaleform::Render::Tessellator::SetToleranceParam(plVar8,uVar5);
  local_f0 = local_130;
  local_148 = DAT_146b62f28;
  local_140 = 0;
  local_138 = 0x10;
  lVar6 = FUN_1432d8640(param_2);
  local_b8 = *(undefined8 *)(lVar6 + 0x30);
  uStack_b0 = *(undefined8 *)(lVar6 + 0x38);
  if ((param_6 & 3) == 1) {
    fVar11 = (float)uStack_b0 * 0.5;
  }
  else {
    fVar11 = 0.0;
  }
  Scaleform::Render::Tessellator::SetEdgeAAWidth(plVar8,fVar11);
  uVar9 = 0;
  if (*(int *)(param_4 + 8) != 0) {
    do {
      lVar6 = *(longlong *)(param_1 + 0x48);
      uVar7 = (ulonglong)(*(int *)(param_4 + 4) + uVar9);
      fVar11 = *(float *)(lVar6 + 0x10 + uVar7 * 0x28);
      fVar16 = *(float *)(lVar6 + 0x14 + uVar7 * 0x28);
      fVar17 = *(float *)(lVar6 + 0x18 + uVar7 * 0x28);
      fVar15 = *(float *)(lVar6 + 0x1c + uVar7 * 0x28);
      if ((*(byte *)(param_1 + 0x20) & 8) == 0) {
        fVar10 = *(float *)(param_1 + 0xd0);
        fVar14 = *(float *)(param_1 + 0xd4);
        fVar12 = *(float *)(param_1 + 0xd8);
        fVar13 = *(float *)(param_1 + 0xdc);
      }
      else {
        fVar10 = *(float *)(param_1 + 0xb0);
        fVar14 = *(float *)(param_1 + 0xb4);
        fVar12 = *(float *)(param_1 + 0xb8);
        fVar13 = *(float *)(param_1 + 0xbc);
      }
      if ((((fVar14 <= fVar15) && (fVar16 <= fVar13)) && (fVar11 <= fVar12)) && (fVar10 <= fVar17))
      {
        if (fVar11 <= fVar10) {
          fVar11 = fVar10;
        }
        if (fVar12 < fVar17) {
          fVar17 = fVar12;
        }
        if (fVar16 <= fVar14) {
          fVar16 = fVar14;
        }
        if (fVar13 < fVar15) {
          fVar15 = fVar13;
        }
        if ((fVar11 < fVar17) && (fVar16 < fVar15)) {
          (**(code **)(*plVar8 + 0x20))
                    (plVar8,fVar16 * *(float *)(param_5 + 4) + fVar11 * *(float *)param_5 +
                            *(float *)(param_5 + 0xc),
                     fVar16 * *(float *)(param_5 + 0x14) + fVar11 * *(float *)(param_5 + 0x10) +
                     *(float *)(param_5 + 0x1c));
          (**(code **)(*plVar8 + 0x20))
                    (plVar8,fVar16 * *(float *)(param_5 + 4) + fVar17 * *(float *)param_5 +
                            *(float *)(param_5 + 0xc),
                     fVar17 * *(float *)(param_5 + 0x10) + fVar16 * *(float *)(param_5 + 0x14) +
                     *(float *)(param_5 + 0x1c));
          (**(code **)(*plVar8 + 0x20))
                    (plVar8,fVar15 * *(float *)(param_5 + 4) + fVar17 * *(float *)param_5 +
                            *(float *)(param_5 + 0xc),
                     fVar15 * *(float *)(param_5 + 0x14) + fVar17 * *(float *)(param_5 + 0x10) +
                     *(float *)(param_5 + 0x1c));
          (**(code **)(*plVar8 + 0x20))
                    (plVar8,fVar15 * *(float *)(param_5 + 4) + fVar11 * *(float *)param_5 +
                            *(float *)(param_5 + 0xc),
                     fVar15 * *(float *)(param_5 + 0x14) + fVar11 * *(float *)(param_5 + 0x10) +
                     *(float *)(param_5 + 0x1c));
        }
      }
      FUN_1433c6750(&local_148,lVar6 + 4 + uVar7 * 0x28);
      (**(code **)(*plVar8 + 0x28))(plVar8);
      uVar9 = uVar9 + 1;
      in_stack_fffffffffffffe68 = in_stack_fffffffffffffe68 & 0xffffffffffffff00;
      (**(code **)(*plVar8 + 0x30))(plVar8,0,uVar9,0,in_stack_fffffffffffffe68);
      puVar4 = local_res10;
      param_3 = local_res18;
    } while (uVar9 < *(uint *)(param_4 + 8));
  }
  uVar18 = (undefined4)(in_stack_fffffffffffffe68 >> 0x20);
  FUN_143336f70(plVar8,0);
  iVar3 = (**(code **)(*plVar8 + 0x50))(plVar8);
  if ((iVar3 == 0) || (iVar3 = (**(code **)(*plVar8 + 0x48))(plVar8), iVar3 == 0)) {
    cVar2 = FUN_1433c3780(param_1,param_3);
  }
  else {
    local_168 = 0x3f800000;
    uStack_160 = 0;
    local_158 = 0x3f80000000000000;
    uStack_150 = 0;
    Scaleform::Render::Matrix2x4<float>::SetInverse((Matrix2x4<float> *)&local_168,param_5);
    (**(code **)(*plVar8 + 0x38))(plVar8,&local_168);
    (**(code **)(*plVar8 + 0x40))
              (plVar8,local_98,0xc6fff800,0xc6fff800,CONCAT44(uVar18,0x46fff800),0x46fff800);
    local_188 = (**(code **)(*plVar8 + 0x58))(plVar8,0);
    local_184 = (**(code **)(*plVar8 + 0x60))(plVar8,0);
    plVar1 = local_res18;
    local_178 = 0;
    local_184 = local_184 * 3;
    local_170 = 0;
    local_180 = &DAT_1467cdbb8;
    cVar2 = (**(code **)(*local_res18 + 8))(local_res18,&local_188,1,local_98);
    if (cVar2 != '\0') {
      local_res10 = (undefined8 *)0x0;
      FUN_1433c3520(param_1,plVar8,plVar1,local_f0,&local_res10);
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
  }
  (**(code **)(*plVar8 + 8))(plVar8);
  (**(code **)(puVar4[0xc1] + 8))();
  (**(code **)(puVar4[0xcc] + 8))();
  (**(code **)(puVar4[0xe6] + 8))();
  (**(code **)(puVar4[0x13a] + 8))();
  if (puVar4[4] != 0) {
    plVar8 = (longlong *)(puVar4[2] + (puVar4[4] * 3 + -3) * 8);
    do {
      puVar4[4] = puVar4[4] + -1;
      if (*plVar8 != 0) {
        (**(code **)(*(longlong *)*puVar4 + 0x60))();
      }
      plVar8 = plVar8 + -3;
    } while (puVar4[4] != 0);
    puVar4[4] = puVar4[4] + -1;
    (**(code **)(*(longlong *)*puVar4 + 0x60))((longlong *)*puVar4,puVar4[2]);
  }
  puVar4[3] = 0;
  puVar4[2] = 0;
  puVar4[4] = 0;
  if (puVar4[9] != 0) {
    plVar8 = (longlong *)(puVar4[7] + (puVar4[9] * 3 + -3) * 8);
    do {
      puVar4[9] = puVar4[9] + -1;
      if (*plVar8 != 0) {
        (**(code **)(*(longlong *)puVar4[5] + 0x60))();
      }
      plVar8 = plVar8 + -3;
    } while (puVar4[9] != 0);
    puVar4[9] = puVar4[9] + -1;
    (**(code **)(*(longlong *)puVar4[5] + 0x60))((longlong *)puVar4[5],puVar4[7]);
  }
  puVar4[8] = 0;
  puVar4[7] = 0;
  puVar4[9] = 0;
  if (puVar4[0xe] != 0) {
    plVar8 = (longlong *)(puVar4[0xc] + (puVar4[0xe] * 3 + -3) * 8);
    do {
      puVar4[0xe] = puVar4[0xe] + -1;
      if (*plVar8 != 0) {
        (**(code **)(*(longlong *)puVar4[10] + 0x60))();
      }
      plVar8 = plVar8 + -3;
    } while (puVar4[0xe] != 0);
    puVar4[0xe] = puVar4[0xe] + -1;
    (**(code **)(*(longlong *)puVar4[10] + 0x60))((longlong *)puVar4[10],puVar4[0xc]);
  }
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  puVar4[0xe] = 0;
  if (puVar4[0x13] != 0) {
    plVar8 = (longlong *)(puVar4[0x11] + (puVar4[0x13] * 3 + -3) * 8);
    do {
      puVar4[0x13] = puVar4[0x13] + -1;
      if (*plVar8 != 0) {
        (**(code **)(*(longlong *)puVar4[0xf] + 0x60))();
      }
      plVar8 = plVar8 + -3;
    } while (puVar4[0x13] != 0);
    puVar4[0x13] = puVar4[0x13] + -1;
    (**(code **)(*(longlong *)puVar4[0xf] + 0x60))((longlong *)puVar4[0xf],puVar4[0x11]);
  }
  puVar4[0x12] = 0;
  puVar4[0x11] = 0;
  puVar4[0x13] = 0;
  if (local_f0 != local_130) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  return cVar2;
}



// FUNCTION 1433c44c0 FUN_1433c44c0 body=628 status=ok
// SIG undefined FUN_1433c44c0(void)

undefined8 FUN_1433c44c0(longlong param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if ((*(byte *)(param_1 + 0x20) & 8) == 0) {
LAB_1433c46df:
    uVar7 = 1;
  }
  else {
    fVar1 = param_2[3];
    fVar12 = *(float *)(param_1 + 0xb4);
    fVar2 = *param_2;
    fVar3 = param_2[1];
    fVar4 = param_2[2];
    fVar10 = *(float *)(param_1 + 0xb0);
    fVar9 = *(float *)(param_1 + 0xb8);
    fVar15 = *(float *)(param_1 + 0xbc);
    if ((((fVar12 <= fVar1) && (fVar3 <= fVar15)) && (fVar2 <= fVar9)) && (fVar10 <= fVar4)) {
      fVar11 = fVar2;
      if (fVar2 <= fVar10) {
        fVar11 = fVar10;
      }
      fVar10 = fVar4;
      if (fVar9 < fVar4) {
        fVar10 = fVar9;
      }
      fVar9 = fVar3;
      if (fVar3 <= fVar12) {
        fVar9 = fVar12;
      }
      fVar8 = fVar1;
      if (fVar15 < fVar1) {
        fVar8 = fVar15;
      }
      if ((fVar11 < fVar10) && (fVar9 < fVar8)) {
        if (((fVar11 != fVar2) || ((fVar10 != fVar4 || (fVar9 != fVar3)))) || (fVar8 != fVar1)) {
          fVar12 = param_3[3];
          fVar15 = param_3[2];
          fVar5 = *param_3;
          fVar6 = param_3[1];
          fVar13 = fVar5;
          if (fVar2 != fVar11) {
            fVar13 = ((fVar15 - fVar5) * (fVar11 - fVar2)) / (fVar4 - fVar2) + fVar5;
          }
          fVar14 = fVar6;
          if (fVar3 != fVar9) {
            fVar14 = ((fVar12 - fVar6) * (fVar9 - fVar3)) / (fVar1 - fVar3) + fVar6;
          }
          if (fVar4 != fVar10) {
            fVar15 = fVar15 - ((fVar4 - fVar10) * (fVar15 - fVar5)) / (fVar4 - fVar2);
          }
          if (fVar1 != fVar8) {
            fVar12 = fVar12 - ((fVar1 - fVar8) * (fVar12 - fVar6)) / (fVar1 - fVar3);
          }
          *param_2 = fVar11;
          param_2[1] = fVar9;
          param_2[2] = fVar10;
          param_2[3] = fVar8;
          param_3[1] = fVar14;
          param_3[2] = fVar15;
          *param_3 = fVar13;
          param_3[3] = fVar12;
        }
        goto LAB_1433c46df;
      }
    }
    fVar1 = *(float *)(param_1 + 0xb0);
    *param_2 = fVar1;
    param_2[2] = fVar1;
    param_2[1] = fVar12;
    param_2[3] = fVar12;
    param_3[2] = *param_3;
    param_3[3] = param_3[1];
    uVar7 = 0;
  }
  return uVar7;
}



// FUNCTION 1433c4740 FUN_1433c4740 body=1021 status=ok
// SIG undefined FUN_1433c4740(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1 FUN_1433c4740(longlong param_1,longlong *param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint uVar5;
  char cVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  short sVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint local_res10;
  undefined8 local_17b8;
  undefined8 uStack_17b0;
  float local_17a8;
  float local_17a4;
  float local_17a0;
  float local_179c;
  uint local_1798;
  int local_1790;
  int local_178c;
  undefined *local_1788;
  undefined8 local_1780;
  undefined8 local_1778;
  short local_1768 [384];
  undefined4 local_1468 [2];
  undefined8 local_1460;
  float local_1458 [1286];
  ulonglong uVar12;
  
  puVar8 = &local_1460;
  lVar10 = 0x100;
  uVar14 = 0;
  do {
    puVar8[-1] = 0;
    *puVar8 = 0;
    *(undefined4 *)(puVar8 + 1) = 0;
    puVar8 = (undefined8 *)((longlong)puVar8 + 0x14);
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  uVar15 = *(uint *)(param_3 + 8);
  local_1780 = 0;
  local_1778 = 0;
  local_1790 = uVar15 * 4;
  local_178c = uVar15 * 6;
  local_1788 = &DAT_1467ce2d0;
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x18) + 0x8c);
  fVar2 = *(float *)(*(longlong *)(param_1 + 0x18) + 0x90);
  local_1798 = uVar15;
  cVar6 = (**(code **)(*param_2 + 8))(param_2,&local_1790,1,&DAT_14621c810);
  uVar7 = 0;
  if (cVar6 != '\0') {
    local_res10 = 0;
    if (uVar15 != 0) {
      sVar13 = 0;
      uVar15 = uVar14;
      uVar16 = uVar14;
      do {
        if (0x3f < uVar14) {
          (**(code **)(*param_2 + 0x18))(param_2,0,uVar16 * 4,local_1468,0x100);
          (**(code **)(*param_2 + 0x20))(param_2,0,uVar15,local_1768,0x180);
          uVar14 = 0;
          uVar16 = uVar16 + 0x40;
          uVar15 = uVar15 + 0x180;
        }
        uVar9 = (ulonglong)(*(int *)(param_3 + 4) + local_res10);
        uVar5 = uVar14 * 6;
        uVar11 = uVar14 * 4;
        uVar12 = (ulonglong)uVar11;
        lVar10 = *(longlong *)(param_1 + 0x48);
        puVar8 = (undefined8 *)(lVar10 + 0x10 + uVar9 * 0x28);
        local_17b8 = *puVar8;
        uStack_17b0 = puVar8[1];
        lVar4 = *(longlong *)(lVar10 + 0x20 + uVar9 * 0x28);
        uVar3 = *(undefined4 *)(lVar10 + 4 + uVar9 * 0x28);
        local_17a8 = (float)(*(ushort *)(lVar4 + 0x30) + 1) * fVar1;
        local_17a4 = (float)(*(ushort *)(lVar4 + 0x32) + 1) * fVar2;
        local_17a0 = (float)(int)(*(ushort *)(lVar4 + 0x34) - 2) * fVar1 + local_17a8;
        local_179c = (float)(int)(*(ushort *)(lVar4 + 0x36) - 2) * fVar2 + local_17a4;
        FUN_1433c44c0(param_1,&local_17b8,&local_17a8);
        uVar9 = (ulonglong)(uVar11 + 1);
        local_1468[uVar12 * 5 + 1] = local_17b8._4_4_;
        local_1458[uVar12 * 5] = local_17a4;
        local_1468[uVar12 * 5] = (undefined4)local_17b8;
        local_1458[uVar12 * 5 + -1] = local_17a8;
        *(undefined4 *)((longlong)&local_1460 + uVar12 * 0x14) = uVar3;
        local_1468[uVar9 * 5 + 1] = local_17b8._4_4_;
        local_1468[uVar9 * 5] = (undefined4)uStack_17b0;
        local_1458[uVar9 * 5] = local_17a4;
        local_1458[uVar9 * 5 + -1] = local_17a0;
        *(undefined4 *)((longlong)&local_1460 + uVar9 * 0x14) = uVar3;
        uVar9 = (ulonglong)(uVar11 + 2);
        local_1768[uVar5] = sVar13;
        local_1468[uVar9 * 5] = (undefined4)uStack_17b0;
        local_1458[uVar9 * 5] = local_179c;
        local_1468[uVar9 * 5 + 1] = uStack_17b0._4_4_;
        local_1458[uVar9 * 5 + -1] = local_17a0;
        *(undefined4 *)((longlong)&local_1460 + uVar9 * 0x14) = uVar3;
        uVar9 = (ulonglong)(uVar11 + 3);
        local_1468[uVar9 * 5] = (undefined4)local_17b8;
        local_1468[uVar9 * 5 + 1] = uStack_17b0._4_4_;
        local_1458[uVar9 * 5 + -1] = local_17a8;
        local_1458[uVar9 * 5] = local_179c;
        *(undefined4 *)((longlong)&local_1460 + uVar9 * 0x14) = uVar3;
        local_1768[uVar5 + 1] = sVar13 + 1;
        uVar14 = uVar14 + 1;
        local_1768[uVar5 + 2] = sVar13 + 2;
        local_1768[uVar5 + 3] = sVar13 + 2;
        local_1768[uVar5 + 4] = sVar13 + 3;
        local_1768[uVar5 + 5] = sVar13;
        sVar13 = sVar13 + 4;
        local_res10 = local_res10 + 1;
      } while (local_res10 < local_1798);
      if (uVar14 != 0) {
        (**(code **)(*param_2 + 0x18))(param_2,0,uVar16 * 4,local_1468,uVar14 * 4);
        (**(code **)(*param_2 + 0x20))(param_2,0,uVar16 * 6,local_1768,uVar14 * 6);
        (**(code **)(*param_2 + 0x10))(param_2);
        return 1;
      }
    }
    uVar7 = FUN_1433c3780(param_1,param_2);
  }
  return uVar7;
}



// FUNCTION 1433c4b50 FUN_1433c4b50 body=1210 status=ok
// SIG undefined FUN_1433c4b50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1 FUN_1433c4b50(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  uint uVar11;
  short sVar13;
  uint uVar14;
  bool bVar15;
  uint local_res20;
  undefined4 local_27b8;
  undefined4 uStack_27b4;
  undefined4 uStack_27b0;
  undefined4 uStack_27ac;
  undefined8 local_27a8;
  undefined8 uStack_27a0;
  undefined4 local_2798;
  uint local_2794;
  int local_2790;
  int local_278c;
  undefined *local_2788;
  undefined8 local_2780;
  undefined8 local_2778;
  int local_2770;
  int local_276c;
  undefined *local_2768;
  undefined8 local_2760;
  undefined8 local_2758;
  short local_2748 [384];
  undefined4 local_2448 [1026];
  undefined8 local_1440;
  undefined4 local_1438 [1278];
  ulonglong uVar12;
  
  puVar6 = &local_1440;
  lVar9 = 0x100;
  uVar8 = 0;
  do {
    puVar6[-1] = 0;
    *puVar6 = 0;
    *(undefined4 *)(puVar6 + 1) = 0;
    puVar6 = (undefined8 *)((longlong)puVar6 + 0x14);
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  uVar14 = *(uint *)(param_3 + 8);
  local_2788 = &DAT_1467ce2d0;
  local_2780 = 0;
  local_2778 = 0;
  local_2760 = 0;
  local_2790 = uVar14 * 4;
  local_278c = uVar14 * 6;
  local_2768 = &DAT_1467ce628;
  local_2758 = 0;
  local_2794 = uVar14;
  local_2770 = local_2790;
  local_276c = local_278c;
  iVar5 = (**(code **)(**(longlong **)
                         (*(longlong *)
                           (*(longlong *)(param_1 + 0x48) + 0x20 +
                           (ulonglong)*(uint *)(param_3 + 4) * 0x28) + 0x10) + 0x20))();
  bVar15 = iVar5 != 9;
  puVar2 = &stack0x00000028;
  if (bVar15) {
    puVar2 = &stack0x00000048;
  }
  cVar4 = (**(code **)(*param_2 + 8))(param_2,puVar2 + -0x27b8,1,&DAT_14621c810);
  if (cVar4 == '\0') {
    return 0;
  }
  local_res20 = 0;
  if (uVar14 != 0) {
    sVar13 = 0;
    iVar5 = 0;
    uVar14 = uVar8;
    do {
      if (0x3f < uVar8) {
        puVar10 = local_2448 + 0x400;
        if (bVar15) {
          puVar10 = local_2448;
        }
        (**(code **)(*param_2 + 0x18))(param_2,0,uVar14 * 4,puVar10,0x100);
        (**(code **)(*param_2 + 0x20))(param_2,0,iVar5,local_2748,0x180);
        uVar8 = 0;
        uVar14 = uVar14 + 0x40;
        iVar5 = iVar5 + 0x180;
      }
      uVar11 = uVar8 * 4;
      uVar12 = (ulonglong)uVar11;
      lVar9 = *(longlong *)(param_1 + 0x48);
      uVar7 = (ulonglong)(*(int *)(param_3 + 4) + local_res20);
      uVar3 = uVar8 * 6;
      lVar1 = *(longlong *)(lVar9 + 0x20 + uVar7 * 0x28);
      local_27a8 = *(undefined8 *)(lVar1 + 0x20);
      uStack_27a0 = *(undefined8 *)(lVar1 + 0x28);
      local_2798 = *(undefined4 *)(lVar9 + 4 + uVar7 * 0x28);
      puVar10 = (undefined4 *)(lVar9 + 0x10 + uVar7 * 0x28);
      local_27b8 = *puVar10;
      uStack_27b4 = puVar10[1];
      uStack_27b0 = puVar10[2];
      uStack_27ac = puVar10[3];
      FUN_1433c44c0(param_1,&local_27b8,&local_27a8);
      if (bVar15) {
        uVar7 = (ulonglong)(uVar11 + 1);
        local_2448[uVar12 * 4 + 1] = uStack_27b4;
        local_2448[uVar12 * 4 + 3] = local_27a8._4_4_;
        local_2448[uVar12 * 4] = local_27b8;
        local_2448[uVar12 * 4 + 2] = (undefined4)local_27a8;
        local_2448[uVar7 * 4 + 1] = uStack_27b4;
        local_2448[uVar7 * 4] = uStack_27b0;
        local_2448[uVar7 * 4 + 3] = local_27a8._4_4_;
        local_2448[uVar7 * 4 + 2] = (undefined4)uStack_27a0;
        uVar7 = (ulonglong)(uVar11 + 2);
        local_2448[uVar7 * 4] = uStack_27b0;
        local_2448[uVar7 * 4 + 3] = uStack_27a0._4_4_;
        local_2448[uVar7 * 4 + 1] = uStack_27ac;
        local_2448[uVar7 * 4 + 2] = (undefined4)uStack_27a0;
        uVar7 = (ulonglong)(uVar11 + 3);
        local_2448[uVar7 * 4] = local_27b8;
        local_2448[uVar7 * 4 + 1] = uStack_27ac;
        local_2448[uVar7 * 4 + 2] = (undefined4)local_27a8;
        local_2448[uVar7 * 4 + 3] = uStack_27a0._4_4_;
      }
      else {
        uVar7 = (ulonglong)(uVar11 + 1);
        local_2448[uVar12 * 5 + 0x401] = uStack_27b4;
        local_1438[uVar12 * 5] = local_27a8._4_4_;
        local_2448[uVar12 * 5 + 0x400] = local_27b8;
        local_1438[uVar12 * 5 + -1] = (undefined4)local_27a8;
        *(undefined4 *)((longlong)&local_1440 + uVar12 * 0x14) = local_2798;
        local_2448[uVar7 * 5 + 0x401] = uStack_27b4;
        local_2448[uVar7 * 5 + 0x400] = uStack_27b0;
        local_1438[uVar7 * 5] = local_27a8._4_4_;
        local_1438[uVar7 * 5 + -1] = (undefined4)uStack_27a0;
        *(undefined4 *)((longlong)&local_1440 + uVar7 * 0x14) = local_2798;
        uVar7 = (ulonglong)(uVar11 + 2);
        local_2448[uVar7 * 5 + 0x400] = uStack_27b0;
        local_1438[uVar7 * 5] = uStack_27a0._4_4_;
        local_2448[uVar7 * 5 + 0x401] = uStack_27ac;
        local_1438[uVar7 * 5 + -1] = (undefined4)uStack_27a0;
        *(undefined4 *)((longlong)&local_1440 + uVar7 * 0x14) = local_2798;
        uVar7 = (ulonglong)(uVar11 + 3);
        local_2448[uVar7 * 5 + 0x400] = local_27b8;
        local_2448[uVar7 * 5 + 0x401] = uStack_27ac;
        local_1438[uVar7 * 5 + -1] = (undefined4)local_27a8;
        local_1438[uVar7 * 5] = uStack_27a0._4_4_;
        *(undefined4 *)((longlong)&local_1440 + uVar7 * 0x14) = local_2798;
      }
      local_2748[uVar3] = sVar13;
      uVar8 = uVar8 + 1;
      local_2748[uVar3 + 1] = sVar13 + 1;
      local_2748[uVar3 + 2] = sVar13 + 2;
      local_2748[uVar3 + 3] = sVar13 + 2;
      local_2748[uVar3 + 4] = sVar13 + 3;
      local_res20 = local_res20 + 1;
      local_2748[uVar3 + 5] = sVar13;
      sVar13 = sVar13 + 4;
    } while (local_res20 < local_2794);
    if (uVar8 != 0) {
      puVar10 = local_2448 + 0x400;
      if (bVar15) {
        puVar10 = local_2448;
      }
      (**(code **)(*param_2 + 0x18))(param_2,0,uVar14 * 4,puVar10,uVar8 * 4);
      (**(code **)(*param_2 + 0x20))(param_2,0,uVar14 * 6,local_2748,uVar8 * 6);
      goto LAB_1433c4fe9;
    }
  }
  FUN_1433c3780(param_1,param_2);
LAB_1433c4fe9:
  (**(code **)(*param_2 + 0x10))(param_2);
  return 1;
}



// FUNCTION 1433c5020 FUN_1433c5020 body=731 status=ok
// SIG undefined FUN_1433c5020(void)

undefined8 FUN_1433c5020(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  local_128 = 0x10000;
  local_d0 = &DAT_1467ce628;
  uVar3 = (ulonglong)*(uint *)(param_3 + 4);
  local_124 = 2;
  local_120 = 0x30002;
  local_d8 = 4;
  local_d4 = 6;
  local_c8 = 0;
  local_c0 = 0;
  plVar2 = *(longlong **)(lVar1 + 0x20 + uVar3 * 0x28);
  (**(code **)(*plVar2 + 0xb8))
            (plVar2,&local_f8,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x70));
  fVar6 = *(float *)(lVar1 + 0x18 + uVar3 * 0x28) - *(float *)(lVar1 + 0x10 + uVar3 * 0x28);
  fVar5 = *(float *)(lVar1 + 0x1c + uVar3 * 0x28) - *(float *)(lVar1 + 0x14 + uVar3 * 0x28);
  local_108 = local_f8 * 0.0 + local_f4 * 0.0 + local_ec;
  local_118 = local_108 + *(float *)(lVar1 + 0x10 + uVar3 * 0x28);
  local_104 = local_e8 * 0.0 + local_e4 * 0.0 + local_dc;
  local_fc = local_e8 + local_e4 + local_dc;
  local_114 = local_104 + *(float *)(lVar1 + 0x14 + uVar3 * 0x28);
  local_110 = local_f4 * fVar5 + local_f8 * fVar6 + local_ec +
              *(float *)(lVar1 + 0x10 + uVar3 * 0x28);
  local_100 = local_f8 + local_f4 + local_ec;
  local_10c = local_e8 * fVar6 + local_e4 * fVar5 + local_dc +
              *(float *)(lVar1 + 0x14 + uVar3 * 0x28);
  FUN_1433c44c0(param_1,&local_118,&local_108);
  local_b4 = local_114;
  local_ac = local_104;
  local_a8 = local_110;
  local_a4 = local_114;
  local_9c = local_104;
  local_98 = local_110;
  local_a0 = local_100;
  local_94 = local_10c;
  local_90 = local_100;
  local_8c = local_fc;
  local_84 = local_10c;
  local_7c = local_fc;
  local_b8 = local_118;
  local_b0 = local_108;
  local_88 = local_118;
  local_80 = local_108;
  uVar4 = (**(code **)(*param_2 + 8))(param_2,&local_d8,1,&DAT_14621c810);
  if ((char)uVar4 != '\0') {
    (**(code **)(*param_2 + 0x18))(param_2,0,0,&local_b8,4);
    (**(code **)(*param_2 + 0x20))(param_2,0,0,&local_128,6);
    (**(code **)(*param_2 + 0x10))(param_2);
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 1433c5310 FUN_1433c5310 body=2193 status=ok
// SIG undefined FUN_1433c5310(void)

undefined8
FUN_1433c5310(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
             Matrix2x4<float> *param_5,uint param_6)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_res10;
  longlong *local_res18;
  ulonglong in_stack_fffffffffffffe58;
  undefined4 uVar17;
  undefined4 local_198;
  int local_194;
  undefined *local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  longlong *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 local_140 [64];
  undefined1 *local_100;
  undefined1 local_f8 [192];
  
  uVar9 = 0;
  local_158 = DAT_146b62f28;
  local_100 = local_140;
  local_150 = 0;
  local_148 = 0x10;
  local_res18 = param_3;
  puVar6 = (undefined8 *)(**(code **)(*param_2 + 0xf0))(param_2);
  Scaleform::Render::MeshGenerator::Clear(puVar6);
  plVar8 = puVar6 + 0x13a;
  *(undefined8 *)((longlong)puVar6 + 0x9dc) = 0;
  *(undefined4 *)(puVar6 + 0x13b) = 0;
  if ((param_6 & 3) == 1) {
    puVar6[0x13e] = 0;
    *(undefined4 *)((longlong)puVar6 + 0x9fc) = 0x3f75c28f;
    *(undefined4 *)(puVar6 + 0x13f) = 0x3f75c28f;
  }
  else {
    *(undefined4 *)((longlong)puVar6 + 0x9f4) = 0x3f000000;
    *(undefined4 *)(puVar6 + 0x13e) = 0x3f000000;
    puVar6[0x13f] = 0;
  }
  if (*(int *)(param_4 + 8) != 0) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x48);
      uVar7 = (ulonglong)(*(int *)(param_4 + 4) + uVar9);
      uVar4 = *(int *)(lVar1 + 0x10 + uVar7 * 0x28) - 1;
      if ((param_6 & 3) == 1) {
        if ((uVar4 & 0xfffffffd) == 0) {
          *(undefined4 *)((longlong)puVar6 + 0x9f4) = 0x3f800000;
          *(undefined4 *)(puVar6 + 0x13e) = 0x3f800000;
        }
        else {
          puVar6[0x13e] = 0;
        }
        if (*(int *)(lVar1 + 0x10 + uVar7 * 0x28) == 5) {
          *(undefined4 *)((longlong)puVar6 + 0x9f4) = 0x3e800000;
          *(undefined4 *)(puVar6 + 0x13e) = 0x3e800000;
        }
        if (*(int *)(lVar1 + 0x10 + uVar7 * 0x28) == 4) {
          *(undefined4 *)((longlong)puVar6 + 0x9fc) = 0x3f000000;
          *(undefined4 *)(puVar6 + 0x13f) = 0x3f000000;
        }
        else {
          *(undefined4 *)((longlong)puVar6 + 0x9fc) = 0x3f75c28f;
          *(undefined4 *)(puVar6 + 0x13f) = 0x3f75c28f;
        }
      }
      else {
        if ((uVar4 & 0xfffffffd) == 0) {
          *(undefined4 *)((longlong)puVar6 + 0x9f4) = 0x3f800000;
          *(undefined4 *)(puVar6 + 0x13e) = 0x3f800000;
        }
        else {
          *(undefined4 *)((longlong)puVar6 + 0x9f4) = 0x3f000000;
          *(undefined4 *)(puVar6 + 0x13e) = 0x3f000000;
        }
        if (*(int *)(lVar1 + 0x10 + uVar7 * 0x28) == 5) {
          *(undefined4 *)((longlong)puVar6 + 0x9f4) = 0x3f400000;
          *(undefined4 *)(puVar6 + 0x13e) = 0x3f400000;
        }
        puVar6[0x13f] = 0;
      }
      uVar9 = uVar9 + 1;
      *(uint *)(puVar6 + 0x13d) = uVar9;
      *(uint *)((longlong)puVar6 + 0x9ec) = uVar9;
      FUN_1433c6750(&local_158,uVar7 * 0x28 + 4 + lVar1);
      fVar16 = *(float *)(lVar1 + 0x14 + uVar7 * 0x28);
      fVar13 = *(float *)(lVar1 + 0x18 + uVar7 * 0x28);
      fVar14 = fVar16 + *(float *)(lVar1 + 0x1c + uVar7 * 0x28);
      fVar12 = fVar13 * *(float *)(param_5 + 4);
      fVar13 = fVar13 * *(float *)(param_5 + 0x14);
      fVar15 = fVar16 * *(float *)param_5 + fVar12 + *(float *)(param_5 + 0xc);
      fVar12 = fVar14 * *(float *)param_5 + fVar12 + *(float *)(param_5 + 0xc);
      fVar16 = fVar16 * *(float *)(param_5 + 0x10) + fVar13 + *(float *)(param_5 + 0x1c);
      fVar13 = fVar14 * *(float *)(param_5 + 0x10) + fVar13 + *(float *)(param_5 + 0x1c);
      if (*(uint *)(lVar1 + 0x10 + uVar7 * 0x28) < 2) {
        lVar2 = *plVar8;
        fVar14 = _guard_xfg_dispatch_icall_nop(fVar16);
        (**(code **)(lVar2 + 0x20))(plVar8,fVar15,fVar14 + 0.5);
        lVar2 = *plVar8;
        fVar14 = _guard_xfg_dispatch_icall_nop(fVar13);
        (**(code **)(lVar2 + 0x20))(plVar8,fVar12,fVar14 + 0.5);
        in_stack_fffffffffffffe58 = in_stack_fffffffffffffe58 & 0xffffffffffffff00;
        (**(code **)(*plVar8 + 0x30))(plVar8,0,0,0,in_stack_fffffffffffffe58);
      }
      if (*(int *)(lVar1 + 0x10 + uVar7 * 0x28) - 2U < 2) {
        fVar15 = _guard_xfg_dispatch_icall_nop(fVar15);
        fVar15 = fVar15 - 0.5;
        fVar12 = _guard_xfg_dispatch_icall_nop(fVar12);
        fVar12 = fVar12 + 0.5;
        fVar16 = _guard_xfg_dispatch_icall_nop(fVar16);
        fVar16 = fVar16 + 0.5;
        fVar13 = _guard_xfg_dispatch_icall_nop(fVar13);
        fVar13 = fVar13 + 0.5;
        if (fVar15 <= fVar12) {
          fVar10 = _guard_xfg_dispatch_icall_nop(fVar16);
          fVar11 = _guard_xfg_dispatch_icall_nop(fVar13);
          fVar14 = fVar15;
          do {
            (**(code **)(*plVar8 + 0x20))(plVar8,fVar14,fVar10 + 0.5);
            (**(code **)(*plVar8 + 0x20))(plVar8,fVar14 + 2.0,fVar11 + 0.5);
            in_stack_fffffffffffffe58 = in_stack_fffffffffffffe58 & 0xffffffffffffff00;
            (**(code **)(*plVar8 + 0x30))(plVar8,0,0,0,in_stack_fffffffffffffe58);
            fVar14 = fVar14 + 5.0;
          } while (fVar14 <= fVar12);
        }
      }
      iVar5 = *(int *)(lVar1 + 0x10 + uVar7 * 0x28);
      if (iVar5 - 4U < 2) {
        fVar15 = _guard_xfg_dispatch_icall_nop(fVar15);
        fVar12 = _guard_xfg_dispatch_icall_nop(fVar12);
        fVar16 = _guard_xfg_dispatch_icall_nop(fVar16);
        fVar13 = _guard_xfg_dispatch_icall_nop(fVar13);
        fVar10 = 4.0;
        fVar14 = 0.75;
        if (iVar5 == 5) {
          fVar10 = 6.0;
          fVar14 = 1.25;
        }
        if (fVar15 <= fVar12 + 1.0) {
          fVar16 = _guard_xfg_dispatch_icall_nop(fVar16 + 0.5);
          fVar13 = _guard_xfg_dispatch_icall_nop(fVar13 + 0.5);
          do {
            (**(code **)(*plVar8 + 0x20))(plVar8,fVar15,fVar16 + fVar14);
            (**(code **)(*plVar8 + 0x20))(plVar8,fVar10 * 0.5 + fVar15,fVar13 - fVar14);
            fVar15 = fVar15 + fVar10;
          } while (fVar15 <= fVar12 + 1.0);
        }
        in_stack_fffffffffffffe58 = in_stack_fffffffffffffe58 & 0xffffffffffffff00;
        (**(code **)(*plVar8 + 0x30))(plVar8,0,0,0,in_stack_fffffffffffffe58);
      }
      param_3 = local_res18;
    } while (uVar9 < *(uint *)(param_4 + 8));
  }
  uVar17 = (undefined4)(in_stack_fffffffffffffe58 >> 0x20);
  iVar5 = (**(code **)(*plVar8 + 0x48))(plVar8);
  if (iVar5 == 0) {
    FUN_1433c3780(param_1,param_3);
  }
  else {
    local_178 = 0x3f800000;
    uStack_170 = 0;
    local_168 = 0x3f80000000000000;
    uStack_160 = 0;
    Scaleform::Render::Matrix2x4<float>::SetInverse((Matrix2x4<float> *)&local_178,param_5);
    (**(code **)(*plVar8 + 0x38))(plVar8,&local_178);
    (**(code **)(*plVar8 + 0x40))
              (plVar8,local_f8,0xc6fff800,0xc6fff800,CONCAT44(uVar17,0x46fff800),0x46fff800);
    local_198 = (**(code **)(*plVar8 + 0x58))(plVar8,0);
    local_194 = (**(code **)(*plVar8 + 0x60))(plVar8,0);
    local_188 = 0;
    local_180 = 0;
    local_194 = local_194 * 3;
    local_190 = &DAT_1467cdbb8;
    cVar3 = (**(code **)(*param_3 + 8))(param_3,&local_198,1,local_f8);
    if (cVar3 != '\0') {
      local_res10 = 0;
      FUN_1433c3520(param_1,plVar8,param_3,local_100,&local_res10);
      (**(code **)(*param_3 + 0x10))(param_3);
    }
  }
  *(undefined4 *)(puVar6 + 0x13d) = 1;
  *(undefined4 *)((longlong)puVar6 + 0x9ec) = 1;
  (**(code **)(puVar6[0x14] + 8))();
  (**(code **)(puVar6[0xc1] + 8))();
  (**(code **)(puVar6[0xcc] + 8))();
  (**(code **)(puVar6[0xe6] + 8))();
  (**(code **)(*plVar8 + 8))(plVar8);
  if (puVar6[4] != 0) {
    plVar8 = (longlong *)(puVar6[2] + (puVar6[4] * 3 + -3) * 8);
    do {
      puVar6[4] = puVar6[4] + -1;
      if (*plVar8 != 0) {
        (**(code **)(*(longlong *)*puVar6 + 0x60))();
      }
      plVar8 = plVar8 + -3;
    } while (puVar6[4] != 0);
    puVar6[4] = puVar6[4] + -1;
    (**(code **)(*(longlong *)*puVar6 + 0x60))((longlong *)*puVar6,puVar6[2]);
  }
  puVar6[3] = 0;
  puVar6[2] = 0;
  puVar6[4] = 0;
  if (puVar6[9] != 0) {
    plVar8 = (longlong *)(puVar6[7] + (puVar6[9] * 3 + -3) * 8);
    do {
      puVar6[9] = puVar6[9] + -1;
      if (*plVar8 != 0) {
        (**(code **)(*(longlong *)puVar6[5] + 0x60))();
      }
      plVar8 = plVar8 + -3;
    } while (puVar6[9] != 0);
    puVar6[9] = puVar6[9] + -1;
    (**(code **)(*(longlong *)puVar6[5] + 0x60))((longlong *)puVar6[5],puVar6[7]);
  }
  puVar6[8] = 0;
  puVar6[7] = 0;
  puVar6[9] = 0;
  if (puVar6[0xe] != 0) {
    plVar8 = (longlong *)(puVar6[0xc] + (puVar6[0xe] * 3 + -3) * 8);
    do {
      puVar6[0xe] = puVar6[0xe] + -1;
      if (*plVar8 != 0) {
        (**(code **)(*(longlong *)puVar6[10] + 0x60))();
      }
      plVar8 = plVar8 + -3;
    } while (puVar6[0xe] != 0);
    puVar6[0xe] = puVar6[0xe] + -1;
    (**(code **)(*(longlong *)puVar6[10] + 0x60))((longlong *)puVar6[10],puVar6[0xc]);
  }
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  puVar6[0xe] = 0;
  if (puVar6[0x13] != 0) {
    plVar8 = (longlong *)(puVar6[0x11] + (puVar6[0x13] * 3 + -3) * 8);
    do {
      puVar6[0x13] = puVar6[0x13] + -1;
      if (*plVar8 != 0) {
        (**(code **)(*(longlong *)puVar6[0xf] + 0x60))();
      }
      plVar8 = plVar8 + -3;
    } while (puVar6[0x13] != 0);
    puVar6[0x13] = puVar6[0x13] + -1;
    (**(code **)(*(longlong *)puVar6[0xf] + 0x60))((longlong *)puVar6[0xf],puVar6[0x11]);
  }
  puVar6[0x12] = 0;
  puVar6[0x11] = 0;
  puVar6[0x13] = 0;
  if (local_100 != local_140) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  return 1;
}



// FUNCTION 1433c5bb0 FUN_1433c5bb0 body=346 status=ok
// SIG undefined FUN_1433c5bb0(void)

undefined1 FUN_1433c5bb0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uVar3 = (ulonglong)*(uint *)(param_3 + 4);
  local_28 = 0x3f800000;
  uStack_20 = 0;
  lVar1 = *(longlong *)(param_1 + 0x48);
  local_18 = 0x3f80000000000000;
  uStack_10 = 0;
  local_50 = 0xc6fff800c6fff800;
  uStack_48 = 0xc6fff80046fff800;
  local_40 = 0x46fff800;
  local_80 = *(undefined4 *)(lVar1 + 0x18 + uVar3 * 0x28);
  local_84 = *(undefined4 *)(lVar1 + 0x14 + uVar3 * 0x28);
  local_88 = *(undefined4 *)(lVar1 + 0x10 + uVar3 * 0x28);
  local_74 = *(undefined4 *)(lVar1 + 0x1c + uVar3 * 0x28);
  local_3c = 0x46fff800;
  local_7c = local_84;
  local_78 = local_80;
  FUN_143326520(&local_28,&local_50,&local_88);
  local_68 = &DAT_1467cdb40;
  local_60 = 0;
  local_58 = 0;
  local_98 = 0x10000;
  local_94 = 2;
  local_38 = 0x80047ffc80048004;
  uStack_30 = 0x7ffc80047ffc7ffc;
  local_90 = 0x30002;
  local_70 = 4;
  local_6c = 6;
  cVar2 = (**(code **)(*param_2 + 8))(param_2,&local_70,1,&local_28);
  if (cVar2 == '\0') {
    return 0;
  }
  (**(code **)(*param_2 + 0x18))(param_2,0,0,&local_38,4);
  (**(code **)(*param_2 + 0x20))(param_2,0,0,&local_98,6);
  (**(code **)(*param_2 + 0x10))(param_2);
  return 1;
}



// FUNCTION 1433c5d10 FUN_1433c5d10 body=151 status=ok
// SIG undefined FUN_1433c5d10(void)

float FUN_1433c5d10(undefined8 param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_2 + 0x7c);
  fVar2 = *(float *)(param_2 + 0x80);
  fVar3 = _guard_xfg_dispatch_icall_nop
                    (fVar2 * *(float *)(param_2 + 0xa4) + fVar1 * *(float *)(param_2 + 0xa0) +
                     *(float *)(param_2 + 0xac) + 0.5);
  return fVar3 * *(float *)(param_2 + 0xc0) +
         (fVar2 * *(float *)(param_2 + 0xb4) + fVar1 * *(float *)(param_2 + 0xb0) +
         *(float *)(param_2 + 0xbc)) * *(float *)(param_2 + 0xc4) + *(float *)(param_2 + 0xcc);
}



// FUNCTION 1433c5db0 FUN_1433c5db0 body=151 status=ok
// SIG undefined FUN_1433c5db0(void)

float FUN_1433c5db0(undefined8 param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_2 + 0x7c);
  fVar2 = *(float *)(param_2 + 0x80);
  fVar3 = _guard_xfg_dispatch_icall_nop
                    (fVar2 * *(float *)(param_2 + 0xb4) + fVar1 * *(float *)(param_2 + 0xb0) +
                     *(float *)(param_2 + 0xbc) + 0.5);
  return fVar3 * *(float *)(param_2 + 0xd4) +
         (fVar2 * *(float *)(param_2 + 0xa4) + fVar1 * *(float *)(param_2 + 0xa0) +
         *(float *)(param_2 + 0xac)) * *(float *)(param_2 + 0xd0) + *(float *)(param_2 + 0xdc);
}



// FUNCTION 1433c5e50 FUN_1433c5e50 body=1282 status=ok
// SIG undefined FUN_1433c5e50(void)

void FUN_1433c5e50(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  ushort *puVar14;
  longlong lVar15;
  ulonglong *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ushort *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  bool bVar23;
  ulonglong local_2a8 [80];
  
  puVar16 = local_2a8;
  if (1 < param_3 - param_2) {
LAB_1433c5e90:
    while (uVar21 = param_2, 9 < (longlong)(param_3 - param_2)) {
      uVar21 = param_2 + 1;
      uVar20 = param_3 - 1;
      uVar13 = (longlong)(param_3 - param_2) / 2 + param_2;
      puVar17 = (undefined8 *)
                ((ulonglong)((uint)uVar13 & 0x3f) * 0x30 +
                *(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar13 >> 6) * 8));
      lVar1 = (param_2 >> 6) * 8;
      uVar6 = puVar17[1];
      lVar4 = *(longlong *)(lVar1 + *(longlong *)(param_1 + 0x20));
      lVar15 = (ulonglong)((uint)param_2 & 0x3f) * 0x30;
      uVar7 = *(undefined8 *)(lVar15 + lVar4);
      uVar8 = ((undefined8 *)(lVar15 + lVar4))[1];
      puVar18 = (undefined8 *)(lVar15 + 0x10 + lVar4);
      uVar9 = *puVar18;
      uVar10 = puVar18[1];
      puVar18 = (undefined8 *)(lVar15 + 0x20 + lVar4);
      uVar11 = *puVar18;
      uVar12 = puVar18[1];
      *(undefined8 *)(lVar15 + lVar4) = *puVar17;
      ((undefined8 *)(lVar15 + lVar4))[1] = uVar6;
      uVar6 = puVar17[3];
      puVar18 = (undefined8 *)(lVar15 + 0x10 + lVar4);
      *puVar18 = puVar17[2];
      puVar18[1] = uVar6;
      uVar6 = puVar17[5];
      puVar18 = (undefined8 *)(lVar15 + 0x20 + lVar4);
      *puVar18 = puVar17[4];
      puVar18[1] = uVar6;
      *puVar17 = uVar7;
      puVar17[1] = uVar8;
      puVar17[2] = uVar9;
      puVar17[3] = uVar10;
      lVar4 = (uVar21 >> 6) * 8;
      puVar17[4] = uVar11;
      puVar17[5] = uVar12;
      lVar22 = (ulonglong)((uint)uVar21 & 0x3f) * 0x30;
      puVar14 = (ushort *)(*(longlong *)(lVar4 + *(longlong *)(param_1 + 0x20)) + lVar22);
      lVar2 = (uVar20 >> 6) * 8;
      uVar13 = (ulonglong)((uint)uVar20 & 0x3f);
      lVar5 = *(longlong *)(lVar2 + *(longlong *)(param_1 + 0x20));
      puVar18 = (undefined8 *)(lVar5 + uVar13 * 0x30);
      uVar3 = *(ushort *)(lVar5 + uVar13 * 0x30);
      bVar23 = uVar3 < *puVar14;
      if ((uVar3 == *puVar14) &&
         (bVar23 = (ulonglong)puVar18[2] < *(ulonglong *)(puVar14 + 8),
         puVar18[2] == *(ulonglong *)(puVar14 + 8))) {
        bVar23 = *(uint *)((longlong)puVar18 + 4) < *(uint *)(puVar14 + 2);
      }
      if (bVar23) {
        uVar6 = *(undefined8 *)(puVar14 + 4);
        uVar7 = *puVar18;
        uVar8 = puVar18[1];
        uVar9 = puVar18[2];
        uVar10 = puVar18[3];
        uVar11 = puVar18[4];
        uVar12 = puVar18[5];
        *puVar18 = *(undefined8 *)puVar14;
        puVar18[1] = uVar6;
        uVar6 = *(undefined8 *)(puVar14 + 0xc);
        puVar18[2] = *(undefined8 *)(puVar14 + 8);
        puVar18[3] = uVar6;
        uVar6 = *(undefined8 *)(puVar14 + 0x14);
        puVar18[4] = *(undefined8 *)(puVar14 + 0x10);
        puVar18[5] = uVar6;
        *(undefined8 *)puVar14 = uVar7;
        *(undefined8 *)(puVar14 + 4) = uVar8;
        *(undefined8 *)(puVar14 + 8) = uVar9;
        *(undefined8 *)(puVar14 + 0xc) = uVar10;
        *(undefined8 *)(puVar14 + 0x10) = uVar11;
        *(undefined8 *)(puVar14 + 0x14) = uVar12;
      }
      lVar5 = *(longlong *)(lVar1 + *(longlong *)(param_1 + 0x20));
      puVar14 = (ushort *)(*(longlong *)(lVar4 + *(longlong *)(param_1 + 0x20)) + lVar22);
      puVar18 = (undefined8 *)(lVar5 + lVar15);
      uVar3 = *(ushort *)(lVar5 + lVar15);
      bVar23 = uVar3 < *puVar14;
      if ((uVar3 == *puVar14) &&
         (bVar23 = (ulonglong)puVar18[2] < *(ulonglong *)(puVar14 + 8),
         puVar18[2] == *(ulonglong *)(puVar14 + 8))) {
        bVar23 = *(uint *)((longlong)puVar18 + 4) < *(uint *)(puVar14 + 2);
      }
      if (bVar23) {
        uVar6 = *(undefined8 *)(puVar14 + 4);
        uVar7 = *puVar18;
        uVar8 = puVar18[1];
        uVar9 = puVar18[2];
        uVar10 = puVar18[3];
        uVar11 = puVar18[4];
        uVar12 = puVar18[5];
        *puVar18 = *(undefined8 *)puVar14;
        puVar18[1] = uVar6;
        uVar6 = *(undefined8 *)(puVar14 + 0xc);
        puVar18[2] = *(undefined8 *)(puVar14 + 8);
        puVar18[3] = uVar6;
        uVar6 = *(undefined8 *)(puVar14 + 0x14);
        puVar18[4] = *(undefined8 *)(puVar14 + 0x10);
        puVar18[5] = uVar6;
        *(undefined8 *)puVar14 = uVar7;
        *(undefined8 *)(puVar14 + 4) = uVar8;
        *(undefined8 *)(puVar14 + 8) = uVar9;
        *(undefined8 *)(puVar14 + 0xc) = uVar10;
        *(undefined8 *)(puVar14 + 0x10) = uVar11;
        *(undefined8 *)(puVar14 + 0x14) = uVar12;
      }
      lVar4 = *(longlong *)(lVar2 + *(longlong *)(param_1 + 0x20));
      puVar14 = (ushort *)(*(longlong *)(lVar1 + *(longlong *)(param_1 + 0x20)) + lVar15);
      puVar18 = (undefined8 *)(lVar4 + uVar13 * 0x30);
      uVar3 = *(ushort *)(lVar4 + uVar13 * 0x30);
      bVar23 = uVar3 < *puVar14;
      if ((uVar3 == *puVar14) &&
         (bVar23 = (ulonglong)puVar18[2] < *(ulonglong *)(puVar14 + 8),
         puVar18[2] == *(ulonglong *)(puVar14 + 8))) {
        bVar23 = *(uint *)((longlong)puVar18 + 4) < *(uint *)(puVar14 + 2);
      }
      if (bVar23) {
        uVar6 = *(undefined8 *)(puVar14 + 4);
        uVar7 = *puVar18;
        uVar8 = puVar18[1];
        uVar9 = puVar18[2];
        uVar10 = puVar18[3];
        uVar11 = puVar18[4];
        uVar12 = puVar18[5];
        *puVar18 = *(undefined8 *)puVar14;
        puVar18[1] = uVar6;
        uVar6 = *(undefined8 *)(puVar14 + 0xc);
        puVar18[2] = *(undefined8 *)(puVar14 + 8);
        puVar18[3] = uVar6;
        uVar6 = *(undefined8 *)(puVar14 + 0x14);
        puVar18[4] = *(undefined8 *)(puVar14 + 0x10);
        puVar18[5] = uVar6;
        *(undefined8 *)puVar14 = uVar7;
        *(undefined8 *)(puVar14 + 4) = uVar8;
        *(undefined8 *)(puVar14 + 8) = uVar9;
        *(undefined8 *)(puVar14 + 0xc) = uVar10;
        *(undefined8 *)(puVar14 + 0x10) = uVar11;
        *(undefined8 *)(puVar14 + 0x14) = uVar12;
      }
      while( true ) {
        lVar4 = *(longlong *)(param_1 + 0x20);
        lVar2 = *(longlong *)(lVar1 + lVar4);
        do {
          uVar21 = uVar21 + 1;
          puVar14 = (ushort *)
                    ((ulonglong)((uint)uVar21 & 0x3f) * 0x30 +
                    *(longlong *)(lVar4 + (uVar21 >> 6) * 8));
          bVar23 = *puVar14 < *(ushort *)(lVar2 + lVar15);
          if ((*puVar14 == *(ushort *)(lVar2 + lVar15)) &&
             (uVar13 = *(ulonglong *)(lVar2 + 0x10 + lVar15),
             bVar23 = *(ulonglong *)(puVar14 + 8) < uVar13, *(ulonglong *)(puVar14 + 8) == uVar13))
          {
            bVar23 = *(uint *)(puVar14 + 2) < *(uint *)(lVar2 + 4 + lVar15);
          }
        } while (bVar23);
        do {
          uVar20 = uVar20 - 1;
          puVar14 = (ushort *)
                    ((ulonglong)((uint)uVar20 & 0x3f) * 0x30 +
                    *(longlong *)(lVar4 + (uVar20 >> 6) * 8));
          bVar23 = *(ushort *)(lVar2 + lVar15) < *puVar14;
          if ((*(ushort *)(lVar2 + lVar15) == *puVar14) &&
             (uVar13 = *(ulonglong *)(lVar2 + 0x10 + lVar15),
             bVar23 = uVar13 < *(ulonglong *)(puVar14 + 8), uVar13 == *(ulonglong *)(puVar14 + 8)))
          {
            bVar23 = *(uint *)(lVar2 + 4 + lVar15) < *(uint *)(puVar14 + 2);
          }
        } while (bVar23);
        puVar18 = (undefined8 *)
                  ((ulonglong)((uint)uVar20 & 0x3f) * 0x30 +
                  *(longlong *)(lVar4 + (uVar20 >> 6) * 8));
        uVar6 = puVar18[1];
        if ((longlong)uVar20 < (longlong)uVar21) break;
        puVar17 = (undefined8 *)
                  ((ulonglong)((uint)uVar21 & 0x3f) * 0x30 +
                  *(longlong *)(lVar4 + (uVar21 >> 6) * 8));
        uVar7 = *puVar17;
        uVar8 = puVar17[1];
        uVar9 = puVar17[2];
        uVar10 = puVar17[3];
        uVar11 = puVar17[4];
        uVar12 = puVar17[5];
        *puVar17 = *puVar18;
        puVar17[1] = uVar6;
        uVar6 = puVar18[3];
        puVar17[2] = puVar18[2];
        puVar17[3] = uVar6;
        uVar6 = puVar18[5];
        puVar17[4] = puVar18[4];
        puVar17[5] = uVar6;
        *puVar18 = uVar7;
        puVar18[1] = uVar8;
        puVar18[2] = uVar9;
        puVar18[3] = uVar10;
        puVar18[4] = uVar11;
        puVar18[5] = uVar12;
      }
      lVar1 = *(longlong *)(lVar1 + lVar4);
      uVar7 = *(undefined8 *)(lVar15 + lVar1);
      uVar8 = ((undefined8 *)(lVar15 + lVar1))[1];
      puVar17 = (undefined8 *)(lVar15 + 0x10 + lVar1);
      uVar9 = *puVar17;
      uVar10 = puVar17[1];
      puVar17 = (undefined8 *)(lVar15 + 0x20 + lVar1);
      uVar11 = *puVar17;
      uVar12 = puVar17[1];
      *(undefined8 *)(lVar15 + lVar1) = *puVar18;
      ((undefined8 *)(lVar15 + lVar1))[1] = uVar6;
      uVar6 = puVar18[3];
      puVar17 = (undefined8 *)(lVar15 + 0x10 + lVar1);
      *puVar17 = puVar18[2];
      puVar17[1] = uVar6;
      uVar6 = puVar18[5];
      puVar17 = (undefined8 *)(lVar15 + 0x20 + lVar1);
      *puVar17 = puVar18[4];
      puVar17[1] = uVar6;
      *puVar18 = uVar7;
      puVar18[1] = uVar8;
      puVar18[2] = uVar9;
      puVar18[3] = uVar10;
      puVar18[4] = uVar11;
      puVar18[5] = uVar12;
      if ((longlong)(param_3 - uVar21) < (longlong)(uVar20 - param_2)) {
        *puVar16 = param_2;
        puVar16[1] = uVar20;
        puVar16 = puVar16 + 2;
        param_2 = uVar21;
      }
      else {
        puVar16[1] = param_3;
        *puVar16 = uVar21;
        param_3 = uVar20;
        puVar16 = puVar16 + 2;
      }
    }
joined_r0x0001433c6238:
    uVar20 = uVar21;
    uVar21 = uVar20 + 1;
    if ((longlong)uVar21 < (longlong)param_3) {
      while( true ) {
        lVar1 = *(longlong *)(param_1 + 0x20);
        uVar13 = uVar20 + 1;
        puVar14 = (ushort *)
                  (*(longlong *)(lVar1 + (uVar20 >> 6) * 8) +
                  (ulonglong)((uint)uVar20 & 0x3f) * 0x30);
        puVar19 = (ushort *)
                  ((ulonglong)((uint)uVar13 & 0x3f) * 0x30 +
                  *(longlong *)(lVar1 + (uVar13 >> 6) * 8));
        bVar23 = *puVar19 < *puVar14;
        if ((*puVar19 == *puVar14) &&
           (bVar23 = *(ulonglong *)(puVar19 + 8) < *(ulonglong *)(puVar14 + 8),
           *(ulonglong *)(puVar19 + 8) == *(ulonglong *)(puVar14 + 8))) {
          bVar23 = *(uint *)(puVar19 + 2) < *(uint *)(puVar14 + 2);
        }
        if (!bVar23) break;
        uVar6 = *(undefined8 *)(puVar14 + 4);
        puVar18 = (undefined8 *)
                  ((ulonglong)((uint)uVar13 & 0x3f) * 0x30 +
                  *(longlong *)(lVar1 + (uVar13 >> 6) * 8));
        uVar7 = *puVar18;
        uVar8 = puVar18[1];
        uVar9 = puVar18[2];
        uVar10 = puVar18[3];
        uVar11 = puVar18[4];
        uVar12 = puVar18[5];
        *puVar18 = *(undefined8 *)puVar14;
        puVar18[1] = uVar6;
        uVar6 = *(undefined8 *)(puVar14 + 0xc);
        puVar18[2] = *(undefined8 *)(puVar14 + 8);
        puVar18[3] = uVar6;
        uVar6 = *(undefined8 *)(puVar14 + 0x14);
        puVar18[4] = *(undefined8 *)(puVar14 + 0x10);
        puVar18[5] = uVar6;
        *(undefined8 *)puVar14 = uVar7;
        *(undefined8 *)(puVar14 + 4) = uVar8;
        *(undefined8 *)(puVar14 + 8) = uVar9;
        *(undefined8 *)(puVar14 + 0xc) = uVar10;
        *(undefined8 *)(puVar14 + 0x10) = uVar11;
        *(undefined8 *)(puVar14 + 0x14) = uVar12;
        if (uVar20 == param_2) break;
        uVar20 = uVar20 - 1;
      }
      goto joined_r0x0001433c6238;
    }
    if (local_2a8 < puVar16) {
      param_2 = puVar16[-2];
      param_3 = puVar16[-1];
      puVar16 = puVar16 + -2;
      goto LAB_1433c5e90;
    }
  }
  return;
}



// FUNCTION 1433c6360 FUN_1433c6360 body=435 status=ok
// SIG undefined FUN_1433c6360(void)

void FUN_1433c6360(undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4,
                  float *param_5,float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  
  uStack_94 = (float)((ulonglong)param_2 >> 0x20);
  local_98 = (float)param_2;
  uStack_9c = (float)((ulonglong)param_1 >> 0x20);
  fVar5 = uStack_94 - uStack_9c;
  local_a0 = (float)param_1;
  fVar1 = _guard_xfg_dispatch_icall_nop
                    (fVar5 * fVar5 + (local_98 - local_a0) * (local_98 - local_a0));
  uStack_a4 = (float)((ulonglong)param_3 >> 0x20);
  local_a8 = (float)param_3;
  fVar4 = uStack_a4 - uStack_94;
  fVar2 = _guard_xfg_dispatch_icall_nop
                    (fVar4 * fVar4 + (local_a8 - local_98) * (local_a8 - local_98));
  fVar3 = ((local_a0 - local_98) * param_4) / fVar1;
  fVar4 = (fVar4 * param_4) / fVar2;
  *param_5 = local_98;
  *param_6 = uStack_94;
  fVar1 = (fVar5 * param_4) / fVar1;
  fVar2 = ((local_98 - local_a8) * param_4) / fVar2;
  FUN_1433490c0(local_a0 + fVar1,fVar3 + uStack_9c,local_98 + fVar1,fVar3 + uStack_94,
                fVar4 + local_98,fVar2 + uStack_94,local_a8 + fVar4,fVar2 + uStack_a4,param_5,
                param_6,0x3a83126f);
  return;
}



// FUNCTION 1433c6520 FUN_1433c6520 body=103 status=ok
// SIG undefined FUN_1433c6520(void)

void FUN_1433c6520(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    puVar1 = (undefined8 *)(*param_1 + -0x20 + lVar2 * 0x28);
    do {
      if ((RefCountNTSImpl *)*puVar1 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*puVar1);
      }
      puVar1 = puVar1 + -5;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001433c6583. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  return;
}



// FUNCTION 1433c6590 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 CAkSequenceCtx::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  Scaleform::Render::TextMeshProvider::~TextMeshProvider();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 1433c65d0 FUN_1433c65d0 body=116 status=ok
// SIG undefined FUN_1433c65d0(void)

void FUN_1433c65d0(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    puVar1 = (undefined8 *)(*param_1 + -0x20 + lVar2 * 0x28);
    do {
      if ((RefCountNTSImpl *)*puVar1 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*puVar1);
      }
      puVar1 = puVar1 + -5;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 1433c6650 FUN_1433c6650 body=146 status=ok
// SIG undefined FUN_1433c6650(void)

void FUN_1433c6650(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + -0x18 + param_2 * 0x40);
    do {
      if ((RefCountNTSImpl *)plVar1[1] != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)plVar1[1]);
      }
      if ((undefined **)*plVar1 != &PTR_LOOP_1467cd040) {
        FUN_1432c03a0(*(undefined **)*plVar1);
      }
      if ((RefCountImpl *)plVar1[-1] != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)plVar1[-1]);
      }
      if (plVar1[-2] != 0) {
        FUN_143325070();
      }
      if ((RefCountImpl *)plVar1[-3] != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)plVar1[-3]);
      }
      plVar1 = plVar1 + -8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1433c6710 GetMaxScale body=52 status=ok
// SIG float GetMaxScale(Matrix2x4<float> * this)

/* public: float __cdecl Scaleform::Render::Matrix2x4<float>::GetMaxScale(void)const __ptr64 */

float __thiscall Scaleform::Render::Matrix2x4<float>::GetMaxScale(Matrix2x4<float> *this)

{
  float fVar1;
  float fVar2;
  
                    /* 0x33c6710  179  ?GetMaxScale@?$Matrix2x4@M@Render@Scaleform@@QEBAMXZ */
  fVar1 = *(float *)this * *(float *)this + *(float *)(this + 0x10) * *(float *)(this + 0x10);
  fVar2 = *(float *)(this + 4) * *(float *)(this + 4) +
          *(float *)(this + 0x14) * *(float *)(this + 0x14);
  if (fVar1 <= fVar2) {
    fVar1 = fVar2;
  }
  fVar1 = ::_guard_xfg_dispatch_icall_nop(fVar1);
  return fVar1;
}



// FUNCTION 1433c6750 FUN_1433c6750 body=220 status=ok
// SIG undefined FUN_1433c6750(void)

void FUN_1433c6750(longlong *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  uVar1 = param_1[1];
  if (uVar1 < 0x10) {
    *(undefined4 *)((longlong)param_1 + uVar1 * 4 + 0x18) = *param_2;
    param_1[1] = param_1[1] + 1;
    return;
  }
  uVar2 = param_1[2];
  if (uVar1 == 0x10) {
    plVar3 = (longlong *)*param_1;
    param_1[2] = uVar2 * 2;
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,uVar2 << 3,0);
    }
    else {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,uVar2 << 3,0);
    }
    lVar4 = param_1[4];
    param_1[0xb] = (longlong)plVar3;
    *plVar3 = param_1[3];
    plVar3[1] = lVar4;
    lVar4 = param_1[6];
    plVar3[2] = param_1[5];
    plVar3[3] = lVar4;
    lVar4 = param_1[8];
    plVar3[4] = param_1[7];
    plVar3[5] = lVar4;
    lVar4 = param_1[10];
    plVar3[6] = param_1[9];
    plVar3[7] = lVar4;
  }
  else if (uVar2 <= uVar1) {
    param_1[2] = uVar2 * 2;
    lVar4 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,param_1[0xb],uVar2 << 3);
    param_1[0xb] = lVar4;
  }
  *(undefined4 *)(param_1[0xb] + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}



// FUNCTION 1433c6830 FUN_1433c6830 body=173 status=ok
// SIG undefined FUN_1433c6830(void)

void FUN_1433c6830(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if (param_3 != param_1[2]) {
    lVar1 = *param_1;
    if (param_3 == 0) {
      uVar2 = 0;
      if (lVar1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
        param_1[2] = 0;
        return;
      }
    }
    else {
      uVar2 = param_3 + 3U & 0xfffffffffffffffc;
      if (lVar1 != 0) {
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,lVar1,uVar2 * 0x28);
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 2;
      lVar1 = (**(code **)(*param_2 + 0x50))(param_2,uVar2 * 0x28,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 1433c68e0 FUN_1433c68e0 body=171 status=ok
// SIG undefined FUN_1433c68e0(void)

void FUN_1433c68e0(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if (param_3 != param_1[2]) {
    lVar1 = *param_1;
    if (param_3 == 0) {
      uVar2 = 0;
      if (lVar1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
        param_1[2] = 0;
        return;
      }
    }
    else {
      uVar2 = param_3 + 3U & 0xfffffffffffffffc;
      if (lVar1 != 0) {
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,lVar1,uVar2 << 6);
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 2;
      lVar1 = (**(code **)(*param_2 + 0x50))(param_2,uVar2 << 6,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 1433c6990 FUN_1433c6990 body=178 status=ok
// SIG undefined FUN_1433c6990(void)

void FUN_1433c6990(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    if (lVar2 != 0) {
      puVar1 = (undefined8 *)(*param_1 + -0x20 + (lVar2 + param_3) * 0x28);
      do {
        if ((RefCountNTSImpl *)*puVar1 != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*puVar1);
        }
        puVar1 = puVar1 + -5;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1433c6830(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_1433c6830(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 1433c6a50 FUN_1433c6a50 body=158 status=ok
// SIG undefined FUN_1433c6a50(void)

void FUN_1433c6a50(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  if (param_3 < (ulonglong)param_1[1]) {
    FUN_1433c6650(param_3 * 0x40 + *param_1,param_1[1] - param_3);
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1433c68e0(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
    return;
  }
  if ((ulonglong)param_1[2] < param_3) {
    FUN_1433c68e0(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
    return;
  }
  param_1[1] = param_3;
  return;
}



// FUNCTION 1433c6af0 FUN_1433c6af0 body=155 status=ok
// SIG undefined FUN_1433c6af0(void)

void FUN_1433c6af0(undefined8 *param_1,ulonglong param_2)

{
  void *_Dst;
  undefined8 uVar1;
  
  if ((ulonglong)param_1[3] <= param_2) {
    if (param_1[4] == 0) {
      param_1[3] = 4;
      uVar1 = FUN_1433245e0(*param_1,0x20);
      param_1[4] = uVar1;
    }
    else {
      _Dst = (void *)FUN_1433245e0(*param_1,param_1[3] << 4);
      _guard_xfg_dispatch_icall_nop(_Dst,(void *)param_1[4],param_1[2] << 3);
      param_1[4] = _Dst;
      param_1[3] = param_1[3] * 2;
    }
  }
  uVar1 = FUN_1433245e0(*param_1,0xc00);
  *(undefined8 *)(param_1[4] + param_2 * 8) = uVar1;
  param_1[2] = param_1[2] + 1;
  return;
}



// FUNCTION 1433c6b90 FUN_1433c6b90 body=155 status=ok
// SIG undefined FUN_1433c6b90(void)

void FUN_1433c6b90(undefined8 *param_1,ulonglong param_2)

{
  void *_Dst;
  undefined8 uVar1;
  
  if ((ulonglong)param_1[3] <= param_2) {
    if (param_1[4] == 0) {
      param_1[3] = 4;
      uVar1 = FUN_1433245e0(*param_1,0x20);
      param_1[4] = uVar1;
    }
    else {
      _Dst = (void *)FUN_1433245e0(*param_1,param_1[3] << 4);
      _guard_xfg_dispatch_icall_nop(_Dst,(void *)param_1[4],param_1[2] << 3);
      param_1[4] = _Dst;
      param_1[3] = param_1[3] * 2;
    }
  }
  uVar1 = FUN_1433245e0(*param_1,0x180);
  *(undefined8 *)(param_1[4] + param_2 * 8) = uVar1;
  param_1[2] = param_1[2] + 1;
  return;
}



// FUNCTION 1433c6c30 FUN_1433c6c30 body=216 status=ok
// SIG undefined FUN_1433c6c30(void)

undefined8 * FUN_1433c6c30(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = 10;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0x7f;
  param_1[7] = 0;
  param_1[8] = param_1 + 4;
  puVar1 = param_1 + 9;
  *puVar1 = puVar1;
  param_1[10] = puVar1;
  *(undefined4 *)(param_1 + 0xb) = 0;
  puVar2 = param_1 + 0xc;
  *puVar2 = 0xffffffffffffffff;
  puVar1 = param_1 + 0x16;
  param_1[0xd] = 0xffffffffffffffff;
  *puVar1 = puVar1;
  param_1[0x17] = puVar1;
  param_1[0x18] = 0;
  param_1[0x11] = puVar2;
  param_1[0x12] = puVar2;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0x7f;
  param_1[0x1c] = 0;
  param_1[0x1d] = param_1 + 0x19;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0x7f;
  param_1[0x26] = 0;
  param_1[0x27] = param_1 + 0x23;
  param_1[0x28] = 0;
  return param_1;
}



// FUNCTION 1433c6d10 FUN_1433c6d10 body=410 status=ok
// SIG undefined FUN_1433c6d10(void)

void FUN_1433c6d10(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  
  lVar3 = param_1 + 0x48;
  for (lVar4 = *(longlong *)(param_1 + 0x50); lVar4 != lVar3; lVar4 = *(longlong *)(lVar4 + 8)) {
    lVar1 = *(longlong *)(lVar4 + 0x58);
    while (lVar1 != lVar4 + 0x50) {
      (**(code **)(**(longlong **)(param_1 + 0x140) + 8))
                (*(longlong **)(param_1 + 0x140),*(undefined8 *)(*(longlong *)(lVar4 + 0x58) + 0x10)
                );
      lVar1 = *(longlong *)(lVar4 + 0x58);
    }
  }
  uVar5 = 0;
  if (*(longlong *)(param_1 + 0x108) != 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x108) + 8) + 1;
    uVar2 = uVar5;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x108) + 0x10 + uVar2) != -2) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x108) + 0x10 + uVar2) = 0xfffffffffffffffe;
      }
      uVar2 = uVar2 + 0x20;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x108));
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(param_1 + 0x50) = lVar3;
  *(longlong *)(param_1 + 0x88) = param_1 + 0x60;
  *(longlong *)(param_1 + 0x90) = param_1 + 0x60;
  if (*(int *)(param_1 + 0x110) != 0) {
    do {
      lVar3 = uVar5 * 0x70;
      uVar6 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar6;
      lVar3 = *(longlong *)(param_1 + 0xf0) + 8 + lVar3;
      *(longlong *)(lVar3 + 0x18) = lVar3;
      *(longlong *)(lVar3 + 0x20) = lVar3;
    } while (uVar6 < *(uint *)(param_1 + 0x110));
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  while (lVar3 != 0) {
    lVar3 = *(longlong *)(lVar3 + 0x3398);
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x7f;
  *(undefined8 *)(param_1 + 0x38) = 0;
  lVar3 = *(longlong *)(param_1 + 200);
  while (lVar3 != 0) {
    lVar3 = *(longlong *)(lVar3 + 0x1fc0);
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0x7f;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  return;
}



// FUNCTION 1433c6eb0 FUN_1433c6eb0 body=139 status=ok
// SIG undefined FUN_1433c6eb0(void)

void FUN_1433c6eb0(longlong param_1,undefined8 param_2,undefined4 param_3,int param_4,
                  undefined4 param_5,uint param_6,uint param_7,undefined1 param_8)

{
  uint uVar1;
  
  FUN_1433c6d10();
  *(undefined4 *)(param_1 + 0xc) = param_5;
  *(uint *)(param_1 + 0x10) = param_6;
  *(uint *)(param_1 + 0x14) = param_7;
  *(uint *)(param_1 + 0x18) = param_6 / param_7;
  uVar1 = (param_6 / param_7) * param_4;
  *(undefined1 *)(param_1 + 0x1c) = param_8;
  *(int *)(param_1 + 8) = param_4;
  *(undefined4 *)(param_1 + 4) = param_3;
  FUN_1433c9360(param_1 + 0xf0,uVar1,0);
  *(ulonglong *)(param_1 + 0xf8) = (ulonglong)uVar1;
  *(undefined8 *)(param_1 + 0x140) = param_2;
  return;
}



// FUNCTION 1433c6f50 PinSlot body=4 status=ok
// SIG undefined PinSlot(void)

void Scaleform::Render::GlyphQueue::PinSlot(longlong param_1)

{
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  return;
}



// FUNCTION 1433c6f60 FUN_1433c6f60 body=128 status=ok
// SIG undefined FUN_1433c6f60(void)

void FUN_1433c6f60(longlong param_1,longlong *param_2)

{
  char cVar1;
  
  if (((param_2 != (longlong *)0x0) && ((char)param_2[3] != '\0')) && (param_2[2] != 0)) {
    cVar1 = FUN_1432c1c90(param_2[2],1);
    if (cVar1 != '\0') {
      if (*(longlong *)(param_1 + 0x60) != 0) {
        if (param_2[2] == 0) goto LAB_1433c6fd2;
        if (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x10) != 0) {
          cVar1 = FUN_1432c1d50();
          if (cVar1 == '\0') goto LAB_1433c6fd2;
        }
      }
      (**(code **)(*param_2 + 8))(param_2);
      if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x60) + 0x10))();
      }
      *(longlong **)(param_1 + 0x60) = param_2;
    }
  }
LAB_1433c6fd2:
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
  return;
}



// FUNCTION 1433c6ff0 CreateNotifier body=115 status=ok
// SIG undefined CreateNotifier(void)

longlong *
Scaleform::Render::GlyphQueue::CreateNotifier(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *(longlong *)(param_2 + 0x18);
  plVar1 = (longlong *)(lVar2 + 0x50);
  if ((*(longlong **)(lVar2 + 0x50) != plVar1) && (param_3 == (*(longlong **)(lVar2 + 0x50))[2])) {
    return (longlong *)0x0;
  }
  plVar3 = (longlong *)FUN_1433c9590(param_1 + 0x118);
  plVar3[3] = lVar2;
  plVar3[2] = param_3;
  lVar2 = *plVar1;
  plVar3[1] = (longlong)plVar1;
  *plVar3 = lVar2;
  *(longlong **)(*plVar1 + 8) = plVar3;
  *plVar1 = (longlong)plVar3;
  return plVar3;
}



// FUNCTION 1433c7070 RemoveNotifier body=54 status=ok
// SIG undefined RemoveNotifier(void)

void Scaleform::Render::GlyphQueue::RemoveNotifier(longlong param_1,longlong *param_2)

{
  *(longlong *)(*param_2 + 8) = param_2[1];
  *(longlong *)param_2[1] = *param_2;
  *param_2 = -1;
  param_2[1] = -1;
  *param_2 = *(longlong *)(param_1 + 0x130);
  *(longlong **)(param_1 + 0x130) = param_2;
  return;
}



// FUNCTION 1433c70b0 FUN_1433c70b0 body=155 status=ok
// SIG undefined FUN_1433c70b0(void)

void FUN_1433c70b0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  
  for (lVar1 = *(longlong *)(param_1 + 0x50); lVar1 != param_1 + 0x48;
      lVar1 = *(longlong *)(lVar1 + 8)) {
    lVar2 = *(longlong *)(lVar1 + 0x60);
    *(undefined4 *)(lVar1 + 0x48) = 0;
    if ((((lVar2 != 0) &&
         (((*(char *)(lVar2 + 0x18) == '\0' || (*(longlong *)(lVar2 + 0x10) == 0)) ||
          (cVar3 = FUN_1432c1cc0(*(longlong *)(lVar2 + 0x10),1), cVar3 != '\0')))) ||
        (((lVar2 = *(longlong *)(lVar1 + 0x60), lVar2 == 0 || (*(char *)(lVar2 + 0x18) == '\0')) ||
         (*(longlong *)(lVar2 + 0x10) == 0)))) ||
       (cVar3 = FUN_1432c1c90(*(longlong *)(lVar2 + 0x10),1), cVar3 == '\0')) {
      if (*(longlong **)(lVar1 + 0x60) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar1 + 0x60) + 0x10))();
      }
      *(undefined8 *)(lVar1 + 0x60) = 0;
    }
  }
  return;
}



// FUNCTION 1433c7160 FUN_1433c7160 body=176 status=ok
// SIG undefined FUN_1433c7160(void)

void FUN_1433c7160(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x50);
  while (plVar2 = plVar1, plVar2 != (longlong *)(param_1 + 0x48)) {
    plVar1 = (longlong *)plVar2[1];
    if ((*(ushort *)(plVar2 + 8) & 0xffff7fff) == param_2) {
      FUN_1433c89f0(param_1,plVar2);
      *(longlong *)(*plVar2 + 8) = plVar2[1];
      *(longlong *)plVar2[1] = *plVar2;
      *plVar2 = -1;
      plVar2[1] = -1;
      plVar2[1] = *(longlong *)(param_1 + 0x50);
      *plVar2 = param_1 + 0x48;
      **(undefined8 **)(param_1 + 0x50) = plVar2;
      *(longlong **)(param_1 + 0x50) = plVar2;
    }
  }
  FUN_1433c7380(param_1);
  return;
}



// FUNCTION 1433c7220 FUN_1433c7220 body=339 status=ok
// SIG undefined FUN_1433c7220(void)

void FUN_1433c7220(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  
  plVar2 = *(longlong **)(param_1 + 0x50);
  while (plVar4 = plVar2, plVar4 != (longlong *)(param_1 + 0x48)) {
    plVar1 = (longlong *)plVar4[2];
    plVar2 = (longlong *)plVar4[1];
    if (plVar1 != (longlong *)0x0) {
      plVar6 = plVar1;
      if ((*plVar1 != param_2) &&
         (plVar6 = (longlong *)Scaleform::Render::GlyphQueue::findFontInSlot(plVar1[4],param_2),
         plVar6 == (longlong *)0x0)) {
        plVar6 = (longlong *)Scaleform::Render::GlyphQueue::findFontInSlot(plVar1[5],param_2);
      }
      if (plVar6 != (longlong *)0x0) {
        if (((int)plVar4[9] == 0) &&
           ((((lVar3 = plVar4[0xc], lVar3 != 0 &&
              (((*(char *)(lVar3 + 0x18) == '\0' || (*(longlong *)(lVar3 + 0x10) == 0)) ||
               (cVar5 = FUN_1432c1cc0(*(longlong *)(lVar3 + 0x10),1), cVar5 != '\0')))) ||
             (((lVar3 = plVar4[0xc], lVar3 == 0 || (*(char *)(lVar3 + 0x18) == '\0')) ||
              (*(longlong *)(lVar3 + 0x10) == 0)))) ||
            (cVar5 = FUN_1432c1c90(*(longlong *)(lVar3 + 0x10),1), cVar5 == '\0')))) {
          if ((longlong *)plVar4[0xc] != (longlong *)0x0) {
            (**(code **)(*(longlong *)plVar4[0xc] + 0x10))();
          }
          plVar4[0xc] = 0;
        }
        FUN_1433c89f0(param_1,plVar4);
        *(longlong *)(*plVar4 + 8) = plVar4[1];
        *(longlong *)plVar4[1] = *plVar4;
        *plVar4 = -1;
        plVar4[1] = -1;
        plVar4[1] = *(longlong *)(param_1 + 0x50);
        *plVar4 = param_1 + 0x48;
        **(undefined8 **)(param_1 + 0x50) = plVar4;
        *(longlong **)(param_1 + 0x50) = plVar4;
      }
    }
  }
  return;
}



// FUNCTION 1433c7380 FUN_1433c7380 body=479 status=ok
// SIG undefined FUN_1433c7380(void)

void FUN_1433c7380(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  short sVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar6 = 0;
  uVar7 = uVar6;
  if (*(int *)(param_1 + 0x110) != 0) {
    do {
      plVar5 = (longlong *)(*(longlong *)(param_1 + 0xf0) + 8 + uVar7);
      plVar1 = *(longlong **)(uVar7 + 0x28 + *(longlong *)(param_1 + 0xf0));
      while ((plVar3 = plVar1, plVar3 != plVar5 &&
             (plVar1 = (longlong *)plVar3[4], plVar1 != plVar5))) {
        if (((*(longlong *)(plVar3[2] + 0x28) == 0 && *(longlong *)(plVar3[2] + 0x20) == 0) &&
            *(longlong *)(plVar1[2] + 0x28) == 0) && *(longlong *)(plVar1[2] + 0x20) == 0) {
          FUN_1433c89f0(param_1,plVar3);
          FUN_1433c89f0(param_1,plVar1);
          puVar2 = (undefined8 *)plVar1[2];
          sVar4 = *(short *)((longlong)plVar1 + 0x44) + *(short *)((longlong)plVar3 + 0x44);
          *puVar2 = *(undefined8 *)(param_1 + 0xe0);
          *(undefined8 **)(param_1 + 0xe0) = puVar2;
          *(longlong *)(*plVar1 + 8) = plVar1[1];
          *(longlong *)plVar1[1] = *plVar1;
          *plVar1 = -1;
          plVar1[1] = -1;
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -1;
          if (-1 < (short)plVar1[8]) {
            *(longlong *)(plVar1[5] + 0x30) = plVar1[6];
            *(longlong *)(plVar1[6] + 0x28) = plVar1[5];
          }
          *(longlong *)(plVar1[3] + 0x20) = plVar1[4];
          *(longlong *)(plVar1[4] + 0x18) = plVar1[3];
          *plVar1 = *(longlong *)(param_1 + 0x38);
          *(longlong **)(param_1 + 0x38) = plVar1;
          *(short *)((longlong)plVar3 + 0x44) = sVar4;
          *(undefined2 *)(plVar3[2] + 0x30) = *(undefined2 *)((longlong)plVar3 + 0x42);
          *(undefined2 *)(plVar3[2] + 0x32) = *(undefined2 *)(plVar3[7] + 2);
          *(short *)(plVar3[2] + 0x34) = sVar4;
          *(undefined2 *)(plVar3[2] + 0x36) = *(undefined2 *)(plVar3[7] + 4);
          *(longlong *)(*plVar3 + 8) = plVar3[1];
          *(longlong *)plVar3[1] = *plVar3;
          *plVar3 = -1;
          plVar3[1] = -1;
          plVar3[1] = *(longlong *)(param_1 + 0x50);
          *plVar3 = param_1 + 0x48;
          **(undefined8 **)(param_1 + 0x50) = plVar3;
          *(longlong **)(param_1 + 0x50) = plVar3;
          plVar1 = plVar3;
        }
      }
      uVar6 = uVar6 + 1;
      uVar7 = uVar7 + 0x70;
    } while (uVar6 < *(uint *)(param_1 + 0x110));
  }
  return;
}



// FUNCTION 1433c7570 FUN_1433c7570 body=247 status=ok
// SIG undefined FUN_1433c7570(void)

longlong FUN_1433c7570(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong *local_res8;
  
  plVar5 = (longlong *)0x0;
  lVar1 = *(longlong *)(param_1 + 0x108);
  plVar3 = plVar5;
  if ((lVar1 != 0) &&
     (local_res8 = param_2,
     lVar2 = FUN_1433c9160((longlong *)(param_1 + 0x108),&local_res8,
                           ((ulonglong)(ushort)param_2[2] * 2 ^
                            (ulonglong)*(ushort *)((longlong)param_2 + 0x12) ^
                            (ulonglong)*(ushort *)((longlong)param_2 + 0xe) ^
                            (ulonglong)*(ushort *)((longlong)param_2 + 0xc) ^
                            (ulonglong)*(ushort *)((longlong)param_2 + 10) ^
                            (ulonglong)(ushort)param_2[1] ^ *param_2 >> 6 ^ *param_2) &
                           *(ulonglong *)(lVar1 + 8)), -1 < lVar2)) {
    plVar3 = (longlong *)((lVar2 + 1) * 0x20 + lVar1);
  }
  plVar4 = plVar3 + 1;
  if (plVar3 == (longlong *)0x0) {
    plVar4 = plVar5;
  }
  if (plVar4 == (longlong *)0x0) {
    return 0;
  }
  lVar1 = *plVar4;
  plVar3 = (longlong *)(param_1 + 0x48);
  plVar5 = *(longlong **)(lVar1 + 0x18);
  *(longlong *)(*plVar5 + 8) = plVar5[1];
  *(longlong *)plVar5[1] = *plVar5;
  *plVar5 = -1;
  plVar5[1] = -1;
  *plVar5 = *plVar3;
  plVar5[1] = (longlong)plVar3;
  *(longlong **)(*plVar3 + 8) = plVar5;
  *plVar3 = (longlong)plVar5;
  return lVar1;
}



// FUNCTION 1433c7670 FUN_1433c7670 body=478 status=ok
// SIG undefined FUN_1433c7670(void)

ulonglong * FUN_1433c7670(uint *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong *puVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong *local_res8;
  ulonglong *local_28;
  ulonglong **local_20;
  ulonglong **local_18;
  
  if (param_4 < *param_1) {
    *param_1 = param_4;
  }
  if (param_3 < *param_1) {
    *param_1 = param_3;
  }
  local_res8 = (ulonglong *)FUN_1433c7d80(param_1,param_3,param_4);
  if (((local_res8 != (ulonglong *)0x0) ||
      (local_res8 = (ulonglong *)FUN_1433c7fc0(param_1,param_3,param_4),
      local_res8 != (ulonglong *)0x0)) ||
     (local_res8 = (ulonglong *)FUN_1433c8910(param_1,param_3,param_4), puVar8 = local_res8,
     local_res8 != (ulonglong *)0x0)) {
    puVar8 = local_res8;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    puVar1 = param_1 + 0x12;
    param_1 = param_1 + 0x42;
    *(undefined4 *)local_res8 = *param_2;
    *(undefined4 *)((longlong)local_res8 + 4) = uVar3;
    *(undefined4 *)(local_res8 + 1) = uVar4;
    *(undefined4 *)((longlong)local_res8 + 0xc) = uVar5;
    lVar10 = 0;
    local_res8[2] = *(ulonglong *)(param_2 + 4);
    *(undefined2 *)(local_res8 + 7) = 0;
    *(undefined2 *)((longlong)local_res8 + 0x3a) = 0;
    plVar2 = (longlong *)local_res8[3];
    *(longlong *)(*plVar2 + 8) = plVar2[1];
    *(longlong *)plVar2[1] = *plVar2;
    *plVar2 = -1;
    plVar2[1] = -1;
    *plVar2 = *(longlong *)puVar1;
    plVar2[1] = (longlong)puVar1;
    *(longlong **)(*(longlong *)puVar1 + 8) = plVar2;
    *(longlong **)puVar1 = plVar2;
    lVar7 = *(longlong *)param_1;
    local_28 = local_res8;
    lVar9 = lVar10;
    if ((lVar7 != 0) &&
       (lVar6 = FUN_1433c9160(param_1,&local_28,
                              ((ulonglong)(ushort)local_res8[2] * 2 ^
                               (ulonglong)*(ushort *)((longlong)local_res8 + 0x12) ^
                               (ulonglong)*(ushort *)((longlong)local_res8 + 0xe) ^
                               (ulonglong)*(ushort *)((longlong)local_res8 + 0xc) ^
                               (ulonglong)*(ushort *)((longlong)local_res8 + 10) ^
                               (ulonglong)(ushort)local_res8[1] ^ *local_res8 >> 6 ^ *local_res8) &
                              *(ulonglong *)(lVar7 + 8)), -1 < lVar6)) {
      lVar9 = (lVar6 + 1) * 0x20 + lVar7;
    }
    lVar7 = lVar9 + 8;
    if (lVar9 == 0) {
      lVar7 = lVar10;
    }
    if (lVar7 == 0) {
      local_20 = &local_28;
      local_18 = &local_res8;
      FUN_1433c8fd0(param_1,param_1,&local_20,
                    (ulonglong)(ushort)puVar8[2] * 2 ^
                    (ulonglong)*(ushort *)((longlong)puVar8 + 0x12) ^
                    (ulonglong)*(ushort *)((longlong)puVar8 + 0xe) ^
                    (ulonglong)*(ushort *)((longlong)puVar8 + 0xc) ^
                    (ulonglong)*(ushort *)((longlong)puVar8 + 10) ^ (ulonglong)(ushort)puVar8[1] ^
                    *puVar8 >> 6 ^ *puVar8);
      puVar8 = local_res8;
    }
  }
  return puVar8;
}



// FUNCTION 1433c7860 FUN_1433c7860 body=153 status=ok
// SIG undefined FUN_1433c7860(void)

int FUN_1433c7860(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int local_res8 [2];
  
  iVar4 = 0;
  for (lVar1 = *(longlong *)(param_1 + 0x50); lVar1 != param_1 + 0x48;
      lVar1 = *(longlong *)(lVar1 + 8)) {
    local_res8[0] = 0;
    plVar2 = *(longlong **)(lVar1 + 0x10);
    iVar3 = 0;
    if (plVar2 != (longlong *)0x0) {
      if (*plVar2 != 0) {
        local_res8[0] =
             (uint)*(ushort *)((longlong)plVar2 + 0x36) * (uint)*(ushort *)((longlong)plVar2 + 0x34)
        ;
      }
      FUN_1433c8c60(param_1,plVar2[4],local_res8);
      FUN_1433c8c60(param_1,plVar2[5],local_res8);
      iVar3 = local_res8[0];
    }
    iVar4 = iVar4 + iVar3;
  }
  return iVar4;
}



// FUNCTION 1433c7900 FUN_1433c7900 body=534 status=ok
// SIG undefined FUN_1433c7900(void)

void FUN_1433c7900(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  longlong *local_18;
  ulonglong uStack_10;
  
  uVar3 = 0;
  for (lVar1 = *(longlong *)(param_1 + 0x50); lVar1 != param_1 + 0x48;
      lVar1 = *(longlong *)(lVar1 + 8)) {
    _local_28 = CONCAT44((float)*(ushort *)(*(longlong *)(lVar1 + 0x38) + 2),
                         (float)*(ushort *)(lVar1 + 0x42));
    _fStack_20 = CONCAT44((float)((uint)*(ushort *)(*(longlong *)(lVar1 + 0x38) + 4) +
                                 (uint)*(ushort *)(*(longlong *)(lVar1 + 0x38) + 2)),
                          (float)((uint)*(ushort *)(lVar1 + 0x44) + (uint)*(ushort *)(lVar1 + 0x42))
                         );
    if ((*(int *)(lVar1 + 0x48) != 0) || (uVar4 = uVar3, *(longlong *)(lVar1 + 0x60) != 0)) {
      uVar4 = 1;
    }
    (**(code **)(*param_2 + 8))(param_2,0,&local_28,uVar4);
  }
  local_18 = (longlong *)(param_1 + 0x108);
  lVar1 = *local_18;
  if (lVar1 == 0) {
    local_18 = (longlong *)0x0;
    uVar3 = 0;
    uStack_10 = uVar3;
    plVar5 = local_18;
  }
  else {
    plVar2 = (longlong *)(lVar1 + 0x10);
    do {
      uStack_10 = uVar3;
      plVar5 = local_18;
      if (*plVar2 != -2) break;
      uVar3 = uVar3 + 1;
      plVar2 = plVar2 + 4;
      uStack_10 = uVar3;
    } while (uVar3 <= *(ulonglong *)(lVar1 + 8));
  }
  do {
    do {
      if (((plVar5 == (longlong *)0x0) || (lVar1 = *plVar5, lVar1 == 0)) ||
         (*(longlong *)(lVar1 + 8) < (longlong)uVar3)) {
        return;
      }
      lVar1 = *(longlong *)(uVar3 * 0x20 + 0x28 + lVar1);
      _local_28 = CONCAT44((float)*(ushort *)(lVar1 + 0x32),(float)*(ushort *)(lVar1 + 0x30));
      _fStack_20 = CONCAT44((float)((uint)*(ushort *)(lVar1 + 0x36) +
                                   (uint)*(ushort *)(lVar1 + 0x32)),
                            (float)((uint)*(ushort *)(lVar1 + 0x34) +
                                   (uint)*(ushort *)(lVar1 + 0x30)));
      (**(code **)(*param_2 + 8))
                (param_2,*(undefined8 *)(uVar3 * 0x20 + 0x20 + *plVar5),&local_28,2);
      uVar4 = *(ulonglong *)(*plVar5 + 8);
    } while (((longlong)uVar4 < (longlong)uVar3) || (uVar3 = uVar3 + 1, uVar4 < uVar3));
    plVar2 = (longlong *)(*plVar5 + 0x10 + uVar3 * 0x20);
    do {
      if (*plVar2 != -2) break;
      uVar3 = uVar3 + 1;
      plVar2 = plVar2 + 4;
    } while (uVar3 <= uVar4);
  } while( true );
}



// FUNCTION 1433c7bc0 FUN_1433c7bc0 body=427 status=ok
// SIG undefined FUN_1433c7bc0(void)

longlong * FUN_1433c7bc0(uint *param_1,uint param_2,uint param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  short sVar4;
  uint uVar6;
  short sVar5;
  
  if (*param_4 == 0) {
    if ((param_2 <= *(ushort *)((longlong)param_4 + 0x34)) &&
       (param_3 <= *(ushort *)((longlong)param_4 + 0x36))) {
      uVar6 = *(ushort *)((longlong)param_4 + 0x36) - param_3;
      uVar3 = *(ushort *)((longlong)param_4 + 0x34) - param_2;
      sVar4 = (short)param_2;
      sVar5 = (short)param_3;
      if ((*param_1 <= uVar3) || (*param_1 <= uVar6)) {
        lVar2 = Scaleform::
                ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75>_>
                ::Alloc(param_1 + 0x32,param_4);
        param_4[4] = lVar2;
        if (uVar6 < uVar3) {
          *(short *)(lVar2 + 0x30) = (short)param_4[6] + sVar4;
          *(short *)(param_4[4] + 0x34) = (short)uVar3;
          if (*param_1 <= uVar6) {
            lVar2 = Scaleform::
                    ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75>_>
                    ::Alloc(param_1 + 0x32,param_4);
            param_4[5] = lVar2;
            *(undefined8 *)(lVar2 + 0x20) = 0;
            *(short *)(param_4[5] + 0x32) = *(short *)((longlong)param_4 + 0x32) + sVar5;
            *(short *)(param_4[5] + 0x36) = (short)uVar6;
            *(short *)(param_4[5] + 0x34) = sVar4;
            *(short *)((longlong)param_4 + 0x34) = sVar4;
            *(short *)((longlong)param_4 + 0x36) = sVar5;
            return param_4;
          }
        }
        else {
          *(short *)(lVar2 + 0x32) = *(short *)((longlong)param_4 + 0x32) + sVar5;
          *(short *)(param_4[4] + 0x36) = (short)uVar6;
          if (*param_1 <= uVar3) {
            lVar2 = Scaleform::
                    ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75>_>
                    ::Alloc(param_1 + 0x32,param_4);
            param_4[5] = lVar2;
            *(undefined8 *)(lVar2 + 0x20) = 0;
            *(short *)(param_4[5] + 0x30) = (short)param_4[6] + sVar4;
            *(short *)(param_4[5] + 0x34) = (short)uVar3;
            *(short *)(param_4[5] + 0x36) = sVar5;
          }
        }
      }
      *(short *)((longlong)param_4 + 0x34) = sVar4;
      *(short *)((longlong)param_4 + 0x36) = sVar5;
      return param_4;
    }
    plVar1 = (longlong *)0x0;
  }
  else if ((param_4[4] == 0) || (plVar1 = (longlong *)FUN_1433c7bc0(), plVar1 == (longlong *)0x0)) {
    plVar1 = (longlong *)0x0;
    if (param_4[5] != 0) {
      plVar1 = (longlong *)FUN_1433c7bc0(param_1,param_2,param_3);
    }
    return plVar1;
  }
  return plVar1;
}



// FUNCTION 1433c7d80 FUN_1433c7d80 body=341 status=ok
// SIG undefined FUN_1433c7d80(void)

longlong FUN_1433c7d80(longlong param_1,uint param_2,undefined4 param_3)

{
  ushort uVar1;
  ushort uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x90);
joined_r0x0001433c7db4:
  do {
    lVar5 = lVar4;
    if (lVar5 == param_1 + 0x60) {
      return 0;
    }
    plVar3 = *(longlong **)(lVar5 + 0x10);
    lVar4 = *(longlong *)(lVar5 + 0x30);
    if ((*plVar3 == 0) && (param_2 * 2 < (uint)*(ushort *)(lVar5 + 0x44))) {
      if (plVar3[4] == 0) {
        if (plVar3[5] == 0) {
          FUN_1433c8140(param_1,lVar5,param_2);
        }
      }
      else if ((((plVar3[5] == 0) &&
                (*(short *)((longlong)plVar3 + 0x36) == *(short *)(*(longlong *)(lVar5 + 0x38) + 4))
                ) && (param_2 < *(ushort *)((longlong)plVar3 + 0x34))) &&
              (uVar2 = *(ushort *)(plVar3 + 6), uVar1 = *(ushort *)(lVar5 + 0x42),
              (uVar2 == uVar1) !=
              ((uint)uVar2 + (uint)*(ushort *)((longlong)plVar3 + 0x34) ==
              (uint)uVar1 + (uint)*(ushort *)(lVar5 + 0x44)))) {
        FUN_1433c81f0(param_1,lVar5,uVar2 == uVar1,param_2);
      }
    }
    lVar6 = FUN_1433c7bc0(param_1,param_2,param_3,*(undefined8 *)(lVar5 + 0x10));
    if (lVar6 == 0) {
      *(short *)(lVar5 + 0x46) = *(short *)(lVar5 + 0x46) + 1;
    }
    uVar2 = *(ushort *)(lVar5 + 0x46);
    if (uVar2 < 0x11) {
      if (uVar2 != 0) {
        if (lVar6 == 0) goto joined_r0x0001433c7db4;
        *(ushort *)(lVar5 + 0x46) = uVar2 - 1;
      }
    }
    else {
      *(undefined8 *)(*(longlong *)(lVar5 + 0x28) + 0x30) = *(undefined8 *)(lVar5 + 0x30);
      *(undefined8 *)(*(longlong *)(lVar5 + 0x30) + 0x28) = *(undefined8 *)(lVar5 + 0x28);
      *(ushort *)(lVar5 + 0x40) = *(ushort *)(lVar5 + 0x40) | 0x8000;
    }
    if (lVar6 != 0) {
      return lVar6;
    }
  } while( true );
}



// FUNCTION 1433c7ee0 FUN_1433c7ee0 body=211 status=ok
// SIG undefined FUN_1433c7ee0(void)

longlong FUN_1433c7ee0(longlong param_1,undefined2 *param_2,undefined2 param_3,undefined2 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = FUN_1433c94d0(param_1 + 0x20);
  puVar3 = (undefined8 *)FUN_1433c9410(param_1 + 200);
  *(undefined8 **)(lVar2 + 0x10) = puVar3;
  *(undefined2 **)(lVar2 + 0x38) = param_2;
  *(undefined2 *)(lVar2 + 0x40) = *param_2;
  lVar1 = lVar2 + 0x50;
  *(undefined2 *)(lVar2 + 0x42) = param_3;
  *(undefined2 *)(lVar2 + 0x44) = param_4;
  *(undefined2 *)(lVar2 + 0x46) = 0;
  *(undefined4 *)(lVar2 + 0x48) = 0;
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar2 + 0x58) = lVar1;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined2 *)(puVar3 + 2) = 0;
  *(undefined2 *)((longlong)puVar3 + 0x12) = 0x10;
  puVar3[3] = lVar2;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = CONCAT26(param_2[2],
                       CONCAT24(*(undefined2 *)(lVar2 + 0x44),
                                CONCAT22(param_2[1],*(undefined2 *)(lVar2 + 0x42))));
  *(undefined4 *)(puVar3 + 7) = 0;
  return lVar2;
}



// FUNCTION 1433c7fc0 FUN_1433c7fc0 body=367 status=ok
// SIG undefined FUN_1433c7fc0(void)

undefined8 FUN_1433c7fc0(longlong param_1,uint param_2,undefined4 param_3)

{
  longlong *plVar1;
  ushort uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  short sVar7;
  ulonglong uVar8;
  longlong lVar9;
  short *psVar10;
  
  uVar3 = *(uint *)(param_1 + 0x110);
  uVar8 = (ulonglong)uVar3;
  if (((uVar3 == 0) ||
      (*(ushort *)((ulonglong)(uVar3 - 1) * 0x70 + 6 + *(longlong *)(param_1 + 0xf0)) < param_2)) &&
     (uVar8 < *(ulonglong *)(param_1 + 0xf8))) {
    uVar4 = uVar8 % (ulonglong)*(uint *)(param_1 + 0x18);
    psVar10 = (short *)(uVar8 * 0x70 + *(longlong *)(param_1 + 0xf0));
    *psVar10 = *(short *)(param_1 + 4) + (short)(uVar3 / *(uint *)(param_1 + 0x18));
    sVar7 = *(short *)(param_1 + 0x14) * (short)uVar4;
    psVar10[1] = sVar7;
    if ((int)uVar4 + 1 == *(int *)(param_1 + 0x18)) {
      sVar7 = (short)*(undefined4 *)(param_1 + 0x10) - sVar7;
    }
    else {
      sVar7 = (short)*(undefined4 *)(param_1 + 0x14);
    }
    psVar10[2] = sVar7;
    psVar10[3] = *(short *)(param_1 + 0xc);
    *(short **)(psVar10 + 0x10) = psVar10 + 4;
    *(short **)(psVar10 + 0x14) = psVar10 + 4;
    *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 1;
  }
  lVar9 = (ulonglong)(*(int *)(param_1 + 0x110) - 1) * 0x70 + *(longlong *)(param_1 + 0xf0);
  uVar2 = *(ushort *)(lVar9 + 6);
  if (uVar2 < param_2) {
    uVar6 = 0;
  }
  else {
    uVar3 = param_2;
    if (uVar2 - param_2 < param_2) {
      uVar3 = (uint)uVar2;
    }
    plVar5 = (longlong *)FUN_1433c7ee0(param_1,lVar9,*(int *)(param_1 + 0xc) - (uint)uVar2,uVar3);
    plVar1 = (longlong *)(param_1 + 0x48);
    *(short *)(lVar9 + 6) = *(short *)(lVar9 + 6) - *(short *)((longlong)plVar5 + 0x44);
    *plVar5 = *plVar1;
    plVar5[1] = (longlong)plVar1;
    *(longlong **)(*plVar1 + 8) = plVar5;
    *plVar1 = (longlong)plVar5;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
    plVar5[3] = *(longlong *)(lVar9 + 0x20);
    plVar5[4] = lVar9 + 8;
    *(longlong **)(*(longlong *)(lVar9 + 0x20) + 0x20) = plVar5;
    *(longlong **)(lVar9 + 0x20) = plVar5;
    lVar9 = *(longlong *)(param_1 + 0x90);
    plVar5[5] = param_1 + 0x60;
    plVar5[6] = lVar9;
    *(longlong **)(*(longlong *)(param_1 + 0x90) + 0x28) = plVar5;
    *(longlong **)(param_1 + 0x90) = plVar5;
    uVar6 = FUN_1433c9650(param_1,param_2,param_3);
  }
  return uVar6;
}



// FUNCTION 1433c8140 FUN_1433c8140 body=157 status=ok
// SIG undefined FUN_1433c8140(void)

void FUN_1433c8140(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)
           FUN_1433c7ee0(param_1,*(undefined8 *)(param_2 + 0x38),
                         (uint)*(ushort *)(param_2 + 0x42) + param_3,
                         (uint)*(ushort *)(param_2 + 0x44) - param_3);
  *(short *)(param_2 + 0x44) = (short)param_3;
  *(short *)(*(longlong *)(param_2 + 0x10) + 0x34) = (short)param_3;
  plVar2[1] = *(longlong *)(param_1 + 0x50);
  *plVar2 = param_1 + 0x48;
  **(undefined8 **)(param_1 + 0x50) = plVar2;
  *(longlong **)(param_1 + 0x50) = plVar2;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  lVar1 = *(longlong *)(param_2 + 0x20);
  plVar2[3] = param_2;
  plVar2[4] = lVar1;
  *(longlong **)(lVar1 + 0x18) = plVar2;
  *(longlong **)(param_2 + 0x20) = plVar2;
  plVar2[6] = *(longlong *)(param_1 + 0x90);
  plVar2[5] = param_1 + 0x60;
  *(longlong **)(*(longlong *)(param_1 + 0x90) + 0x28) = plVar2;
  *(longlong **)(param_1 + 0x90) = plVar2;
  return;
}



// FUNCTION 1433c81f0 FUN_1433c81f0 body=229 status=ok
// SIG undefined FUN_1433c81f0(void)

void FUN_1433c81f0(longlong param_1,longlong param_2,char param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  iVar4 = (uint)*(ushort *)(lVar1 + 0x34) - param_4;
  if (param_3 == '\0') {
    plVar3 = (longlong *)
             FUN_1433c7ee0(param_1,*(undefined8 *)(param_2 + 0x38),
                           (uint)*(ushort *)(lVar1 + 0x30) + param_4,iVar4);
    lVar2 = *(longlong *)(param_2 + 0x20);
    plVar3[3] = param_2;
    plVar3[4] = lVar2;
    *(longlong **)(lVar2 + 0x18) = plVar3;
    *(longlong **)(param_2 + 0x20) = plVar3;
  }
  else {
    plVar3 = (longlong *)
             FUN_1433c7ee0(param_1,*(undefined8 *)(param_2 + 0x38),*(ushort *)(lVar1 + 0x30),iVar4);
    lVar2 = *(longlong *)(param_2 + 0x18);
    plVar3[4] = param_2;
    plVar3[3] = lVar2;
    *(longlong **)(lVar2 + 0x20) = plVar3;
    *(short *)(param_2 + 0x42) = *(short *)(param_2 + 0x42) + (short)iVar4;
    *(longlong **)(param_2 + 0x18) = plVar3;
    *(undefined2 *)(lVar1 + 0x30) = *(undefined2 *)(param_2 + 0x42);
  }
  *(short *)(lVar1 + 0x34) = (short)param_4;
  *(short *)(param_2 + 0x44) = *(short *)(param_2 + 0x44) - (short)iVar4;
  lVar1 = *(longlong *)(param_1 + 0x50);
  *plVar3 = param_1 + 0x48;
  plVar3[1] = lVar1;
  **(undefined8 **)(param_1 + 0x50) = plVar3;
  *(longlong **)(param_1 + 0x50) = plVar3;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  plVar3[6] = *(longlong *)(param_1 + 0x90);
  plVar3[5] = param_1 + 0x60;
  *(longlong **)(*(longlong *)(param_1 + 0x90) + 0x28) = plVar3;
  *(longlong **)(param_1 + 0x90) = plVar3;
  return;
}



// FUNCTION 1433c8310 FUN_1433c8310 body=459 status=ok
// SIG undefined FUN_1433c8310(void)

longlong FUN_1433c8310(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  bool bVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar3 = param_2[7];
  lVar7 = param_2[4];
  bVar6 = true;
  if (lVar7 == lVar3 + 8) {
    lVar7 = param_2[3];
    bVar6 = false;
    if (lVar7 == lVar3 + 8) {
      return 0;
    }
  }
  if (*(ushort *)((longlong)param_2 + 0x44) < *(ushort *)(lVar7 + 0x44)) {
    return 0;
  }
  plVar4 = *(longlong **)(lVar7 + 0x10);
  puVar5 = (undefined8 *)param_2[2];
  FUN_1433c89f0();
  uVar1 = *(ushort *)((longlong)param_2 + 0x42);
  uVar2 = *(ushort *)((longlong)param_2 + 0x44);
  *(longlong *)(*param_2 + 8) = param_2[1];
  *(longlong *)param_2[1] = *param_2;
  *param_2 = -1;
  param_2[1] = -1;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -1;
  if (-1 < (short)param_2[8]) {
    *(longlong *)(param_2[5] + 0x30) = param_2[6];
    *(longlong *)(param_2[6] + 0x28) = param_2[5];
  }
  *(longlong *)(param_2[3] + 0x20) = param_2[4];
  *(longlong *)(param_2[4] + 0x18) = param_2[3];
  *param_2 = *(longlong *)(param_1 + 0x38);
  *(longlong **)(param_1 + 0x38) = param_2;
  if (((*plVar4 == 0) && (plVar4[5] == 0)) &&
     (*(short *)((longlong)plVar4 + 0x36) == *(short *)(lVar3 + 4))) {
    if (bVar6) {
      bVar8 = (uint)uVar2 + (uint)uVar1 == (uint)*(ushort *)(plVar4 + 6);
    }
    else {
      bVar8 = (uint)*(ushort *)((longlong)plVar4 + 0x34) + (uint)*(ushort *)(plVar4 + 6) ==
              (uint)uVar1;
    }
    if (bVar8) {
      *puVar5 = *(undefined8 *)(param_1 + 0xe0);
      *(undefined8 **)(param_1 + 0xe0) = puVar5;
      if (bVar6) {
        *(ushort *)(plVar4 + 6) = uVar1;
      }
      *(short *)((longlong)plVar4 + 0x34) = *(short *)((longlong)plVar4 + 0x34) + uVar2;
      goto LAB_1433c8470;
    }
  }
  puVar5[4] = plVar4;
  puVar5[5] = 0;
  puVar5[3] = lVar7;
  puVar5[6] = CONCAT26(*(undefined2 *)(lVar3 + 4),
                       CONCAT24(uVar2,CONCAT22(*(undefined2 *)(lVar3 + 2),uVar1)));
  *(undefined8 **)(lVar7 + 0x10) = puVar5;
LAB_1433c8470:
  if (bVar6) {
    *(ushort *)(lVar7 + 0x42) = uVar1;
  }
  *(short *)(lVar7 + 0x44) = *(short *)(lVar7 + 0x44) + uVar2;
  if ((short)*(ushort *)(lVar7 + 0x40) < 0) {
    *(undefined2 *)(lVar7 + 0x46) = 0;
    *(ushort *)(lVar7 + 0x40) = *(ushort *)(lVar7 + 0x40) & 0x7fff;
    *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)(param_1 + 0x90);
    *(longlong *)(lVar7 + 0x28) = param_1 + 0x60;
    *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x28) = lVar7;
    *(longlong *)(param_1 + 0x90) = lVar7;
  }
  return lVar7;
}



// FUNCTION 1433c84f0 FUN_1433c84f0 body=308 status=ok
// SIG undefined FUN_1433c84f0(void)

void FUN_1433c84f0(longlong param_1,longlong *param_2,longlong *param_3,undefined2 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  bool bVar4;
  
  plVar3 = param_2;
  do {
    plVar1 = (longlong *)plVar3[4];
    FUN_1433c89f0(param_1,plVar3);
    if (plVar3 != param_2) {
      puVar2 = (undefined8 *)plVar3[2];
      *puVar2 = *(undefined8 *)(param_1 + 0xe0);
      *(undefined8 **)(param_1 + 0xe0) = puVar2;
      *(longlong *)(*plVar3 + 8) = plVar3[1];
      *(longlong *)plVar3[1] = *plVar3;
      *plVar3 = -1;
      plVar3[1] = -1;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -1;
      if (-1 < (short)plVar3[8]) {
        *(longlong *)(plVar3[5] + 0x30) = plVar3[6];
        *(longlong *)(plVar3[6] + 0x28) = plVar3[5];
      }
      *(longlong *)(plVar3[3] + 0x20) = plVar3[4];
      *(longlong *)(plVar3[4] + 0x18) = plVar3[3];
      *plVar3 = *(longlong *)(param_1 + 0x38);
      *(longlong **)(param_1 + 0x38) = plVar3;
    }
    bVar4 = plVar3 != param_3;
    plVar3 = plVar1;
  } while (bVar4);
  *(undefined2 *)((longlong)param_2 + 0x44) = param_4;
  *(undefined2 *)(param_2[2] + 0x34) = param_4;
  *(longlong *)(*param_2 + 8) = param_2[1];
  *(longlong *)param_2[1] = *param_2;
  *param_2 = -1;
  param_2[1] = -1;
  param_2[1] = *(longlong *)(param_1 + 0x50);
  *param_2 = param_1 + 0x48;
  **(undefined8 **)(param_1 + 0x50) = param_2;
  *(longlong **)(param_1 + 0x50) = param_2;
  return;
}



// FUNCTION 1433c8630 FUN_1433c8630 body=724 status=ok
// SIG undefined FUN_1433c8630(void)

undefined8 FUN_1433c8630(longlong param_1,uint param_2,undefined4 param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char cVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  
  puVar10 = *(undefined8 **)(param_1 + 0x50);
  uVar11 = *(uint *)(param_1 + 0x58);
  if (param_4 == 0) {
    uVar11 = uVar11 >> 1;
  }
  uVar12 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x48);
  do {
    if (puVar10 == puVar1) break;
    cVar7 = FUN_1433c92d0(puVar10);
    if (cVar7 == '\0') {
      if (param_2 <= *(ushort *)((longlong)puVar10 + 0x44)) {
        FUN_1433c89f0(param_1);
        uVar9 = FUN_1433c9650(param_1,param_2,param_3,puVar10);
        return uVar9;
      }
      lVar8 = FUN_1433c8310();
      if (lVar8 != 0) {
        if (param_2 <= *(ushort *)(*(longlong *)(lVar8 + 0x10) + 0x34)) {
          uVar9 = FUN_1433c9650(param_1,param_2,param_3,lVar8);
          return uVar9;
        }
        break;
      }
    }
    puVar10 = (undefined8 *)puVar10[1];
    uVar12 = uVar12 + 1;
  } while (uVar12 <= uVar11);
  puVar10 = *(undefined8 **)(param_1 + 0x50);
  do {
    if (puVar10 == puVar1) {
      return 0;
    }
    if ((*(int *)(puVar10 + 9) == 0) &&
       ((((*(char *)(param_1 + 0x1c) != '\0' && (lVar8 = puVar10[0xc], lVar8 != 0)) &&
         ((*(char *)(lVar8 + 0x18) == '\0' ||
          ((*(longlong *)(lVar8 + 0x10) == 0 || (cVar7 = FUN_1432c1cc0(), cVar7 != '\0')))))) ||
        ((lVar8 = puVar10[0xc], lVar8 == 0 ||
         (((*(char *)(lVar8 + 0x18) == '\0' || (*(longlong *)(lVar8 + 0x10) == 0)) ||
          (cVar7 = FUN_1432c1c90(), cVar7 == '\0')))))))) {
      if ((longlong *)puVar10[0xc] != (longlong *)0x0) {
        (**(code **)(*(longlong *)puVar10[0xc] + 0x10))();
      }
      uVar11 = 0;
      puVar10[0xc] = 0;
      lVar8 = puVar10[7];
      puVar3 = puVar10;
      while (((puVar3 != (undefined8 *)(lVar8 + 8) && (*(int *)(puVar3 + 9) == 0)) &&
             ((((*(char *)(param_1 + 0x1c) != '\0' && (lVar2 = puVar3[0xc], lVar2 != 0)) &&
               (((*(char *)(lVar2 + 0x18) == '\0' || (*(longlong *)(lVar2 + 0x10) == 0)) ||
                (cVar7 = FUN_1432c1cc0(), cVar7 != '\0')))) ||
              ((((lVar2 = puVar3[0xc], lVar2 == 0 || (*(char *)(lVar2 + 0x18) == '\0')) ||
                (*(longlong *)(lVar2 + 0x10) == 0)) || (cVar7 = FUN_1432c1c90(), cVar7 == '\0'))))))
            ) {
        if ((longlong *)puVar3[0xc] != (longlong *)0x0) {
          (**(code **)(*(longlong *)puVar3[0xc] + 0x10))();
        }
        puVar3[0xc] = 0;
        puVar5 = puVar3;
        puVar6 = puVar3;
        if (param_4 == 0) {
          for (; puVar6 != puVar1; puVar6 = (undefined8 *)*puVar6) {
            if (puVar5 == puVar1) {
              bVar4 = false;
              goto LAB_1433c87ee;
            }
            puVar5 = (undefined8 *)puVar5[1];
          }
        }
        bVar4 = true;
LAB_1433c87ee:
        if ((puVar3 != puVar10) && (!bVar4)) break;
        if (param_2 <= *(ushort *)((longlong)puVar3 + 0x44)) {
          FUN_1433c89f0(param_1,puVar3);
          uVar9 = FUN_1433c9650(param_1,param_2,param_3,puVar3);
          return uVar9;
        }
        uVar11 = uVar11 + *(ushort *)((longlong)puVar3 + 0x44);
        if (((*(ushort *)(lVar8 + 6) != 0) && (puVar3 == *(undefined8 **)(lVar8 + 0x20))) &&
           (uVar12 = *(ushort *)(lVar8 + 6) + uVar11, param_2 <= uVar12)) {
          *(undefined2 *)(lVar8 + 6) = 0;
          uVar11 = uVar12;
        }
        if (param_2 <= uVar11) {
          FUN_1433c84f0(param_1,puVar10,puVar3,uVar11);
          uVar9 = FUN_1433c9650(param_1,param_2,param_3,puVar10);
          return uVar9;
        }
        puVar3 = (undefined8 *)puVar3[4];
      }
    }
    puVar10 = (undefined8 *)puVar10[1];
  } while( true );
}



// FUNCTION 1433c8910 FUN_1433c8910 body=105 status=ok
// SIG undefined FUN_1433c8910(void)

void FUN_1433c8910(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  (**(code **)(**(longlong **)(param_1 + 0x140) + 0x10))();
  lVar1 = FUN_1433c8630(param_1,param_2,param_3,0);
  if (lVar1 == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x140) + 0x18))();
    FUN_1433c8630(param_1,param_2,param_3,1);
  }
  return;
}



// FUNCTION 1433c8980 FUN_1433c8980 body=105 status=ok
// SIG undefined FUN_1433c8980(void)

void FUN_1433c8980(longlong param_1,longlong *param_2)

{
  longlong *local_res10 [3];
  
  if (param_2 != (longlong *)0x0) {
    FUN_1433c8980(param_1,param_2[4]);
    FUN_1433c8980(param_1,param_2[5]);
    if (*param_2 != 0) {
      local_res10[0] = param_2;
      FUN_1433c8d20(param_1 + 0x108,local_res10);
    }
    *param_2 = 0;
    *param_2 = *(longlong *)(param_1 + 0xe0);
    *(longlong **)(param_1 + 0xe0) = param_2;
  }
  return;
}



// FUNCTION 1433c89f0 FUN_1433c89f0 body=606 status=ok
// SIG undefined FUN_1433c89f0(void)

void FUN_1433c89f0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined8 local_res10;
  
  if (*(int *)(param_2 + 0x48) == 0) {
    lVar2 = *(longlong *)(param_2 + 0x60);
    if (((lVar2 == 0) ||
        (((*(char *)(lVar2 + 0x18) != '\0' && (*(longlong *)(lVar2 + 0x10) != 0)) &&
         (cVar3 = FUN_1432c1cc0(*(longlong *)(lVar2 + 0x10),1), cVar3 == '\0')))) &&
       ((((lVar2 = *(longlong *)(param_2 + 0x60), lVar2 != 0 && (*(char *)(lVar2 + 0x18) != '\0'))
         && (*(longlong *)(lVar2 + 0x10) != 0)) &&
        (cVar3 = FUN_1432c1c90(*(longlong *)(lVar2 + 0x10),1), cVar3 != '\0')))) {
      cVar3 = '\x01';
    }
    else {
      if (*(longlong **)(param_2 + 0x60) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_2 + 0x60) + 0x10))();
      }
      *(undefined8 *)(param_2 + 0x60) = 0;
      cVar3 = '\0';
    }
  }
  else {
    cVar3 = '\x01';
  }
  if (DAT_146b74545 == '\0') {
    DAT_146b74545 = cVar3;
  }
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x10) + 0x20);
  if (plVar1 != (longlong *)0x0) {
    FUN_1433c8980(param_1,plVar1[4]);
    FUN_1433c8980(param_1,plVar1[5]);
    if (*plVar1 != 0) {
      local_res10 = plVar1;
      FUN_1433c8d20(param_1 + 0x108,&local_res10);
    }
    *plVar1 = 0;
    *plVar1 = *(longlong *)(param_1 + 0xe0);
    *(longlong **)(param_1 + 0xe0) = plVar1;
  }
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x10) + 0x28);
  if (plVar1 != (longlong *)0x0) {
    FUN_1433c8980(param_1,plVar1[4]);
    FUN_1433c8980(param_1,plVar1[5]);
    if (*plVar1 != 0) {
      local_res10 = plVar1;
      FUN_1433c8d20(param_1 + 0x108,&local_res10);
    }
    *plVar1 = 0;
    *plVar1 = *(longlong *)(param_1 + 0xe0);
    *(longlong **)(param_1 + 0xe0) = plVar1;
  }
  lVar2 = *(longlong *)(param_2 + 0x58);
  while (lVar2 != param_2 + 0x50) {
    (**(code **)(**(longlong **)(param_1 + 0x140) + 8))
              (*(longlong **)(param_1 + 0x140),*(undefined8 *)(*(longlong *)(param_2 + 0x58) + 0x10)
              );
    lVar2 = *(longlong *)(param_2 + 0x58);
  }
  local_res10 = *(longlong **)(param_2 + 0x10);
  if (*local_res10 != 0) {
    FUN_1433c8d20(param_1 + 0x108,&local_res10);
  }
  lVar2 = *(longlong *)(param_2 + 0x38);
  if ((*(short *)(lVar2 + 6) != 0) && (param_2 == *(longlong *)(lVar2 + 0x20))) {
    *(short *)(param_2 + 0x44) = *(short *)(param_2 + 0x44) + *(short *)(lVar2 + 6);
    *(undefined2 *)(lVar2 + 6) = 0;
  }
  **(undefined8 **)(param_2 + 0x10) = 0;
  local_res10 = (longlong *)
                CONCAT26(*(undefined2 *)(*(longlong *)(param_2 + 0x38) + 4),
                         CONCAT24(*(undefined2 *)(param_2 + 0x44),
                                  CONCAT22(*(undefined2 *)(*(longlong *)(param_2 + 0x38) + 2),
                                           *(undefined2 *)(param_2 + 0x42))));
  *(longlong **)(*(longlong *)(param_2 + 0x10) + 0x30) = local_res10;
  *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x20) = 0;
  *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x28) = 0;
  *(undefined2 *)(param_2 + 0x46) = 0;
  if (*(longlong **)(param_2 + 0x60) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x60) + 0x10))();
  }
  *(undefined8 *)(param_2 + 0x60) = 0;
  if ((short)*(ushort *)(param_2 + 0x40) < 0) {
    *(ushort *)(param_2 + 0x40) = *(ushort *)(param_2 + 0x40) & 0x7fff;
    *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_1 + 0x90);
    *(longlong *)(param_2 + 0x28) = param_1 + 0x60;
    *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x28) = param_2;
    *(longlong *)(param_1 + 0x90) = param_2;
  }
  return;
}



// FUNCTION 1433c8c60 FUN_1433c8c60 body=91 status=ok
// SIG undefined FUN_1433c8c60(void)

void FUN_1433c8c60(undefined8 param_1,longlong *param_2,int *param_3)

{
  for (; param_2 != (longlong *)0x0; param_2 = (longlong *)param_2[5]) {
    if (*param_2 != 0) {
      *param_3 = *param_3 +
                 (uint)*(ushort *)((longlong)param_2 + 0x36) *
                 (uint)*(ushort *)((longlong)param_2 + 0x34);
    }
    FUN_1433c8c60(param_1,param_2[4],param_3);
  }
  return;
}


