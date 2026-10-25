// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14374a9e0 FUN_14374a9e0 body=82 status=ok
// SIG undefined FUN_14374a9e0(void)

ulonglong FUN_14374a9e0(ulonglong *param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar2 = *param_1 >> 0x1c;
  uVar1 = (uint)uVar2 & 0xf;
  uVar4 = (uint)(*param_1 >> 0x10);
  if ((uVar2 & 0xf) == 0) {
    return (ulonglong)(uVar4 & 0xfff);
  }
  uVar2 = (ulonglong)(uVar4 & 0xfff);
  if (uVar1 != 0xf) {
    uVar3 = (ulonglong)(1 << (sbyte)uVar1);
    if (uVar3 < uVar2) {
      uVar3 = uVar2;
    }
    return uVar3;
  }
  uVar3 = (longlong)(param_2 * 4);
  if ((ulonglong)(longlong)(param_2 * 4) < uVar2) {
    uVar3 = uVar2;
  }
  return uVar3;
}



// FUNCTION 14374aa40 FUN_14374aa40 body=527 status=ok
// SIG undefined FUN_14374aa40(void)

void FUN_14374aa40(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  byte bVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined1 local_48 [16];
  ulonglong local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  
  FUN_143748d80(&local_30,param_1);
  if (((local_30 != (undefined8 *)0x0) || (local_28 != (undefined8 *)0x0)) ||
     (local_20 != (undefined8 *)0x0)) {
    iVar9 = *(uint *)(param_2 + 1) - 1;
    if (-1 < iVar9) {
      lVar7 = (longlong)iVar9;
      plVar4 = (longlong *)(*param_2 + lVar7 * 8);
      do {
        if (*plVar4 == param_1) {
          if (iVar9 != -1) {
            return;
          }
          break;
        }
        iVar9 = iVar9 + -1;
        plVar4 = plVar4 + -1;
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
    }
    if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
      FUN_14370c460(&PTR_vftable_1467f0638,param_2,8);
    }
    *(longlong *)(*param_2 + (longlong)(int)param_2[1] * 8) = param_1;
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    plVar4 = (longlong *)FUN_1437149e0(param_1,local_48,&DAT_1467ddab0);
    puVar6 = (undefined8 *)*plVar4;
    if ((local_38 & 1) != 0) {
      FUN_143733a60(local_38 & 0xfffffffffffffffe);
    }
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)FUN_143714490(param_1,1);
      lVar7 = 0;
      if (puVar6 == (undefined8 *)0x0) {
        bVar3 = 0;
      }
      else {
        bVar3 = (byte)*puVar6;
      }
      lVar8 = lVar7;
      if ((bVar3 & 0xf) == 7) {
        lVar8 = param_1;
      }
      if (lVar8 == 0) {
        if (local_30 != (undefined8 *)0x0) {
          *local_30 = 0;
        }
        if (local_28 != (undefined8 *)0x0) {
          *local_28 = 0;
        }
        if (local_20 != (undefined8 *)0x0) {
          *local_20 = 0;
        }
      }
      else {
        lVar1 = *(longlong *)(lVar8 + 8);
        if (lVar1 != 0) {
          FUN_14374aa40(lVar1,param_2);
          FUN_14374ae10(&local_30,lVar1);
        }
        plVar4 = (longlong *)FUN_143714d80(lVar8,local_48);
        lVar8 = *plVar4;
        iVar9 = (int)(plVar4[1] - lVar8 >> 3);
        if (0 < iVar9) {
          do {
            FUN_14374aa40(*(undefined8 *)(lVar8 + lVar7 * 8),param_2);
            FUN_14374ae10(&local_30,*(undefined8 *)(lVar8 + lVar7 * 8));
            lVar7 = lVar7 + 1;
          } while (lVar7 < iVar9);
        }
      }
    }
    else {
      puVar5 = (undefined8 *)FUN_143715320();
      iVar9 = 0;
      puVar2 = puVar5;
      if (*(short *)(puVar5 + 1) != 0) {
        do {
          if (*(char *)puVar2[3] == 't') {
            FUN_14374aa40(puVar2[2],param_2);
          }
          iVar9 = iVar9 + 1;
          puVar2 = puVar2 + 2;
        } while (iVar9 < (int)(uint)*(ushort *)(puVar5 + 1));
      }
      (*(code *)*puVar6)(param_1);
    }
    *(int *)(param_2 + 1) = (int)param_2[1] + -1;
  }
  return;
}



// FUNCTION 14374ac50 FUN_14374ac50 body=228 status=ok
// SIG undefined FUN_14374ac50(void)

void FUN_14374ac50(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  undefined1 local_res8 [8];
  
  do {
    if (param_1 == 0) {
      return;
    }
    puVar2 = (undefined8 *)FUN_143714420(param_1,0x4000000);
    if (puVar2 == (undefined8 *)0x0) {
      psVar6 = (short *)0x0;
    }
    else {
      psVar6 = (short *)*puVar2;
    }
    iVar5 = 0;
    iVar7 = (int)((longlong)((int)*psVar6 + (int)psVar6[1]) * 8 >> 3);
    if (0 < iVar7) {
      do {
        FUN_143714060(local_res8,*(undefined8 *)(psVar6 + (longlong)iVar5 * 4 + 4));
        lVar3 = FUN_1437151c0(local_res8);
        if (lVar3 != 0) {
          uVar4 = FUN_1437151c0(local_res8);
          iVar1 = hkString::strCmp(uVar4,param_2);
          if (iVar1 == 0) {
            *(undefined8 *)(psVar6 + (longlong)iVar5 * 4 + 4) = param_3;
            return;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar7);
    }
    param_1 = *(longlong *)(param_1 + 8);
  } while( true );
}



// FUNCTION 14374ad40 skipDecorators body=27 status=ok
// SIG undefined skipDecorators(void)

byte * hkReflect::TypeDetail::skipDecorators(byte *param_1)

{
  for (; (param_1 != (byte *)0x0 && ((~*param_1 & 1) != 0)); param_1 = *(byte **)(param_1 + 8)) {
  }
  return param_1;
}



// FUNCTION 14374ad60 FUN_14374ad60 body=172 status=ok
// SIG undefined FUN_14374ad60(void)

void FUN_14374ad60(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_res8 [3];
  ulonglong local_res20;
  ulonglong local_58;
  undefined8 **local_50;
  undefined1 *local_48;
  undefined8 *local_40;
  undefined *local_38;
  ulonglong *local_30;
  undefined *local_28;
  ulonglong *local_20;
  undefined *local_18;
  undefined1 local_10 [8];
  
  local_58 = (ulonglong)((uint)(*(ulonglong *)*param_1 >> 0x10) & 0xfff);
  local_res20 = *(ulonglong *)*param_1 & 0xffff;
  local_res8[0] = FUN_1437151f0(param_1[1]);
  local_40 = local_res8;
  local_28 = &DAT_1467f0320;
  local_18 = &DAT_1467f0320;
  local_38 = &DAT_1467f04a0;
  local_30 = &local_res20;
  local_20 = &local_58;
  local_50 = &local_40;
  local_48 = local_10;
  ATTLCharacterCommon::MulticastPlayOuterEmote_Implementation
            (param_2,"{}{{ size={} align={} }}",&local_50);
  return;
}



// FUNCTION 14374ae10 FUN_14374ae10 body=252 status=ok
// SIG undefined FUN_14374ae10(void)

void FUN_14374ae10(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  if (((longlong *)*param_1 != (longlong *)0x0) && (*(longlong *)*param_1 != 0)) {
    plVar1 = (longlong *)FUN_143714420(param_2,0x40);
    if ((plVar1 == (longlong *)0x0) || (*plVar1 == 0)) {
      *(undefined8 *)*param_1 = 0;
    }
    else if (*plVar1 != *(longlong *)*param_1) {
      *(longlong *)*param_1 = (longlong)FUN_14373dca0;
    }
  }
  if (((longlong *)param_1[1] != (longlong *)0x0) && (*(longlong *)param_1[1] != 0)) {
    plVar1 = (longlong *)FUN_143714420(param_2,0x80);
    if ((plVar1 == (longlong *)0x0) || (*plVar1 == 0)) {
      *(undefined8 *)param_1[1] = 0;
    }
    else if (*plVar1 != *(longlong *)param_1[1]) {
      *(longlong *)param_1[1] = (longlong)FUN_14373e020;
    }
  }
  if (((longlong *)param_1[2] != (longlong *)0x0) && (*(longlong *)param_1[2] != 0)) {
    plVar1 = (longlong *)FUN_143714420(param_2,0x400);
    if ((plVar1 == (longlong *)0x0) || (*plVar1 == 0)) {
      *(undefined8 *)param_1[2] = 0;
    }
    else if (*plVar1 != *(longlong *)param_1[2]) {
      *(longlong *)param_1[2] = (longlong)FUN_14373ddc0;
      return;
    }
  }
  return;
}



// FUNCTION 14374af10 FUN_14374af10 body=148 status=ok
// SIG undefined FUN_14374af10(void)

undefined4 *
FUN_14374af10(longlong *param_1,undefined4 *param_2,int *param_3,longlong param_4,uint param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  
  lVar1 = *param_1 + (longlong)*param_3 * 0x18;
  if (0 < (int)param_5) {
    iVar3 = *(int *)(lVar1 + 0x10);
    uVar5 = (ulonglong)param_5;
    do {
      iVar4 = 0;
      if (0 < iVar3) {
        lVar2 = 0;
        do {
          iVar4 = iVar4 + 1;
          *(undefined8 *)(param_4 + *(longlong *)(lVar2 + *(longlong *)(lVar1 + 8))) =
               *(undefined8 *)(lVar2 + 8 + *(longlong *)(lVar1 + 8));
          iVar3 = *(int *)(lVar1 + 0x10);
          lVar2 = lVar2 + 0x10;
        } while (iVar4 < iVar3);
      }
      param_4 = param_4 + param_3[1];
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14374afb0 FUN_14374afb0 body=388 status=ok
// SIG undefined FUN_14374afb0(void)

int * FUN_14374afb0(longlong *param_1,int *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  longlong lVar6;
  int *piVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int iVar10;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  undefined8 local_48;
  int local_40;
  uint local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_res18 = param_3;
  puVar5 = (uint *)FUN_143715390(param_3,local_res20);
  if ((*puVar5 >> 1 & 1) == 0) {
    lVar6 = FUN_14371b650(param_1,&local_res18);
    if ((lVar6 == 0) || (iVar10 = *(int *)(lVar6 + 4), iVar10 < 0)) {
      local_3c = 0x80000000;
      local_48 = 0;
      local_40 = 0;
      FUN_143749600(param_1,param_3,&local_48,0);
      if ((local_40 != 0) &&
         (piVar7 = (int *)FUN_14374a6d0(param_1,local_res20,param_3,&local_48), *piVar7 < 0)) {
        local_40 = 0;
      }
      local_38 = 0;
      local_30 = 0;
      local_2c = 0x80000000;
      puVar8 = (undefined8 *)FUN_143748a00(param_1,local_res20,&local_res18,&local_38);
      local_res18 = *puVar8;
      FUN_143703a50();
      iVar10 = (int)local_res18;
      lVar6 = *param_1 + (longlong)(int)local_res18 * 0x18;
      uVar9 = *(undefined8 *)(lVar6 + 8);
      *(undefined8 *)(lVar6 + 8) = local_48;
      uVar1 = *(undefined4 *)(lVar6 + 0x10);
      *(int *)(lVar6 + 0x10) = local_40;
      uVar2 = *(uint *)(lVar6 + 0x14);
      *(uint *)(lVar6 + 0x14) = local_3c;
      local_48 = uVar9;
      local_40 = uVar1;
      local_3c = uVar2;
      uVar9 = FUN_143703a50();
      local_40 = 0;
      if (-1 < (int)local_3c) {
        FUN_143702e10(uVar9,local_48,0x10,local_3c & 0x3fffffff);
      }
      local_48 = 0;
      local_3c = 0x80000000;
    }
    iVar3 = *(int *)(*param_1 + 0x10 + (longlong)iVar10 * 0x18);
    iVar4 = FUN_1437152f0();
    param_2[1] = iVar4;
    iVar4 = -1;
    if (iVar3 != 0) {
      iVar4 = iVar10;
    }
    *param_2 = iVar4;
    return param_2;
  }
  *param_2 = -1;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14374b140 FUN_14374b140 body=42 status=ok
// SIG undefined FUN_14374b140(void)

undefined8 * FUN_14374b140(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_143734b10(param_1 + 2);
  return param_1;
}



// FUNCTION 14374b170 FUN_14374b170 body=58 status=ok
// SIG undefined FUN_14374b170(void)

undefined8 * FUN_14374b170(undefined8 *param_1,undefined8 param_2)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_143734b10(param_1 + 2);
  param_1[4] = param_2;
  return param_1;
}



// FUNCTION 14374b1b0 FUN_14374b1b0 body=83 status=ok
// SIG undefined FUN_14374b1b0(void)

void FUN_14374b1b0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  thunk_FUN_143734820(param_1 + 2);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xc)) {
    FUN_143702e10(uVar1,*param_1,0x10,*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff);
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  return;
}



// FUNCTION 14374b210 FUN_14374b210 body=46 status=ok
// SIG undefined FUN_14374b210(void)

void FUN_14374b210(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_14370c910(param_2);
  FUN_14376fb90(param_1,param_2,(longlong)iVar1);
  return;
}



// FUNCTION 14374b240 FUN_14374b240 body=721 status=ok
// SIG undefined FUN_14374b240(void)

ulonglong FUN_14374b240(longlong param_1,uint param_2,ulonglong *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong local_res8;
  undefined1 local_res10 [8];
  undefined8 *local_48;
  undefined8 *local_40;
  
  uVar11 = (ulonglong)param_2;
  uVar16 = *(ulonglong *)(param_1 + 0x20) & *param_3;
  if (((((uVar16 >> 0x11 & 1) != 0) && ((*param_3 >> 0x11 & 1) != 0)) &&
      (plVar6 = (longlong *)FUN_1437143d0(param_3,0x20000), plVar6 != (longlong *)0x0)) &&
     (plVar6 = (longlong *)*plVar6, plVar6 != (longlong *)0x0)) {
    plVar15 = plVar6 + 1;
    iVar2 = (int)((*plVar6 << 4) >> 4);
    lVar13 = (longlong)iVar2;
    if (0 < iVar2) {
      do {
        uVar3 = FUN_14374b520(uVar11,*plVar15);
        uVar4 = FUN_14374b610(uVar3,(int)plVar15[1]);
        plVar15 = plVar15 + 2;
        uVar11 = (ulonglong)uVar4;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
  }
  uVar14 = 0;
  if ((uVar16 & 1) != 0) {
    uVar12 = uVar14;
    if (((*param_3 & 1) != 0) &&
       (puVar7 = (ulonglong *)FUN_1437143d0(param_3,1), puVar7 != (ulonglong *)0x0)) {
      uVar12 = *puVar7;
    }
    uVar4 = FUN_14374b610(uVar11,uVar12 & 0xffffffff);
    uVar11 = (ulonglong)uVar4;
    if ((((byte)uVar12 & 0xf) == 8) && (((uint)(uVar12 >> 5) & 3) == 1)) {
      uVar12 = uVar14;
      if (((*param_3 & 2) != 0) &&
         (puVar7 = (ulonglong *)FUN_1437143d0(param_3,2), puVar7 != (ulonglong *)0x0)) {
        uVar12 = *puVar7;
      }
      uVar3 = FUN_14374b760(param_1,uVar12);
      uVar4 = FUN_14374b610(uVar11,uVar3);
      uVar11 = (ulonglong)uVar4;
    }
  }
  if ((uVar16 & 8) != 0) {
    uVar4 = FUN_14374b520(uVar11,param_3);
    uVar11 = (ulonglong)uVar4;
  }
  if ((uVar16 >> 0x12 & 1) != 0) {
    uVar4 = FUN_14374b560(uVar11,param_3);
    uVar11 = (ulonglong)uVar4;
  }
  uVar3 = 0;
  if ((uVar16 & 0x10) != 0) {
    uVar5 = uVar3;
    if (((*param_3 & 0x10) != 0) &&
       (puVar8 = (undefined8 *)FUN_1437143d0(param_3,0x10), puVar8 != (undefined8 *)0x0)) {
      uVar5 = (int)*puVar8;
    }
    uVar4 = FUN_14374b610(uVar11,uVar5);
    uVar11 = (ulonglong)uVar4;
  }
  if ((uVar16 >> 0x17 & 1) != 0) {
    uVar5 = uVar3;
    if ((((uint)*param_3 >> 0x17 & 1) != 0) &&
       (puVar8 = (undefined8 *)FUN_1437143d0(param_3,0x800000), puVar8 != (undefined8 *)0x0)) {
      uVar5 = (int)*puVar8;
    }
    uVar4 = FUN_14374b610(uVar11,uVar5);
    uVar11 = (ulonglong)uVar4;
  }
  if ((uVar16 >> 0x18 & 1) != 0) {
    if ((((uint)*param_3 >> 0x18 & 1) != 0) &&
       (puVar8 = (undefined8 *)FUN_1437143d0(param_3,0x1000000), puVar8 != (undefined8 *)0x0)) {
      uVar3 = (undefined4)*puVar8;
    }
    uVar4 = FUN_14374b610(uVar11,uVar3);
    uVar11 = (ulonglong)uVar4;
  }
  if ((uVar16 >> 0x1a & 1) != 0) {
    hkReflect::DeclIterAll::DeclIterAll(&local_48,param_3,0);
    while ((puVar8 = local_48 + 1, local_48 + 1 < local_40 ||
           (cVar1 = FUN_1437144f0(&local_48), puVar8 = local_48, cVar1 != '\0'))) {
      local_48 = puVar8;
      pbVar9 = (byte *)FUN_143714f30(local_48,local_res10);
      if ((*pbVar9 & 0x20) != 0) {
        FUN_143714060(&local_res8,*local_48);
        uVar10 = FUN_1437151c0(&local_res8);
        uVar3 = FUN_14374b210(uVar11,uVar10);
        uVar5 = FUN_143715270(&local_res8);
        uVar3 = FUN_14374b610(uVar3,uVar5);
        uVar5 = FUN_14374b760(param_1,*(undefined8 *)(local_res8 + 8));
        uVar4 = FUN_14374b610(uVar3,uVar5);
        uVar11 = (ulonglong)uVar4;
      }
    }
  }
  if ((uVar16 >> 0x1c & 1) == 0) {
    return uVar11;
  }
  if ((((uint)*param_3 >> 0x1c & 1) != 0) &&
     (puVar7 = (ulonglong *)FUN_1437143d0(param_3,0x10000000), puVar7 != (ulonglong *)0x0)) {
    uVar14 = *puVar7;
  }
  uVar11 = FUN_14374b210(uVar11,uVar14);
  return uVar11;
}



// FUNCTION 14374b520 FUN_14374b520 body=62 status=ok
// SIG undefined FUN_14374b520(void)

ulonglong FUN_14374b520(uint param_1,byte *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  if ((*param_2 & 8) != 0) {
    plVar1 = (longlong *)FUN_1437143d0(param_2,8);
    if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
      uVar2 = FUN_14374b210((ulonglong)param_1);
      return uVar2;
    }
  }
  return (ulonglong)param_1;
}



// FUNCTION 14374b560 FUN_14374b560 body=172 status=ok
// SIG undefined FUN_14374b560(void)

undefined4 FUN_14374b560(undefined4 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  
  puVar3 = (undefined8 *)FUN_143715320(param_2);
  if ((puVar3 != (undefined8 *)0x0) && ((*(uint *)(puVar3 + 1) & 0xffff) != 0)) {
    iVar5 = 0;
    puVar1 = puVar3;
    if ((*(uint *)(puVar3 + 1) & 0xffff) == 0) {
      return param_1;
    }
    do {
      puVar4 = puVar1 + 2;
      if (*(char *)puVar1[3] == 't') {
        uVar2 = FUN_14374b520(param_1,*puVar4);
        param_1 = FUN_14374b560(uVar2,*puVar4);
      }
      else {
        param_1 = FUN_14374b610(param_1,*(undefined4 *)puVar4);
      }
      iVar5 = iVar5 + 1;
      puVar1 = puVar4;
    } while (iVar5 < (int)(uint)*(ushort *)(puVar3 + 1));
    return param_1;
  }
  return param_1;
}



// FUNCTION 14374b610 FUN_14374b610 body=29 status=ok
// SIG undefined FUN_14374b610(void)

void FUN_14374b610(undefined8 param_1,undefined4 param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  FUN_14376fb90(param_1,local_res10,4);
  return;
}



// FUNCTION 14374b630 FindMorphTarget body=19 status=ok
// SIG undefined FindMorphTarget(void)

void USkeletalMesh::FindMorphTarget(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_res18 [16];
  
  FUN_14374b650(param_1,param_2,local_res18);
  return;
}



// FUNCTION 14374b650 FUN_14374b650 body=270 status=ok
// SIG undefined FUN_14374b650(void)

int FUN_14374b650(longlong *param_1,uint *param_2,undefined1 *param_3)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int *piVar7;
  int iVar8;
  uint *local_res10;
  int local_res18 [2];
  
  *param_3 = 0;
  if (param_2 != (uint *)0x0) {
    iVar3 = 0;
    local_res18[0] = 0;
    local_res10 = param_2;
    lVar4 = FUN_1436e53e0(param_1,&local_res10);
    if (lVar4 == 0) {
      piVar7 = local_res18;
    }
    else {
      piVar7 = (int *)(*param_1 + 8 + (longlong)*(int *)(lVar4 + 4) * 0x10);
    }
    iVar2 = *piVar7;
    if (*piVar7 == 0) {
      local_res18[0] = 0;
      if ((((*param_2 >> 0x1a & 1) == 0) ||
          (puVar5 = (undefined8 *)FUN_1437143d0(param_2,0x4000000), puVar5 == (undefined8 *)0x0)) ||
         (psVar1 = (short *)*puVar5, psVar1 == (short *)0x0)) {
        iVar3 = 0;
        iVar2 = local_res18[0];
        if (*(longlong *)(param_2 + 2) != 0) {
          iVar3 = USkeletalMesh::FindMorphTarget(param_1);
          iVar2 = iVar3;
        }
      }
      else {
        iVar8 = (int)*psVar1;
        iVar2 = local_res18[0];
        if (iVar8 < psVar1[2]) {
          do {
            uVar6 = FUN_1437151c0(psVar1 + ((longlong)iVar8 + 1) * 4);
            iVar3 = FUN_14374b210(iVar3,uVar6);
            iVar8 = iVar8 + 1;
            iVar2 = iVar3;
          } while (iVar8 < psVar1[2]);
        }
      }
      local_res18[0] = iVar2;
      FUN_1436e7110(param_1,&local_res10,local_res18);
      *param_3 = 1;
      iVar2 = iVar3;
    }
    return iVar2;
  }
  return 0;
}



// FUNCTION 14374b760 FUN_14374b760 body=195 status=ok
// SIG undefined FUN_14374b760(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_14374b760(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong local_res10;
  ulonglong local_res18 [2];
  
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = 0;
  local_res18[1] = 0x100000000;
  local_res18[0] = 0;
  local_res10 = param_2;
  lVar3 = FUN_1436e53e0(param_1,&local_res10);
  if (lVar3 == 0) {
    puVar4 = local_res18;
  }
  else {
    puVar4 = (ulonglong *)(*param_1 + 8 + (longlong)*(int *)(lVar3 + 4) * 0x10);
  }
  uVar5 = *puVar4;
  if (uVar5 == 0) {
    FUN_14374b830(param_1,&local_res10,local_res18 + 1);
    if (*(longlong *)(param_2 + 8) != 0) {
      uVar1 = FUN_14374b760(param_1);
    }
    uVar2 = FUN_14374b240(param_1,uVar1,param_2);
    uVar5 = (ulonglong)uVar2;
    local_res18[0] = uVar5;
    FUN_14374b830(param_1,&local_res10,local_res18);
  }
  return uVar5;
}



// FUNCTION 14374b830 FUN_14374b830 body=313 status=ok
// SIG undefined FUN_14374b830(void)

ulonglong FUN_14374b830(longlong *param_1,longlong *param_2,ulonglong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(param_1 + 2);
  }
  lVar1 = *param_2;
  uVar9 = (int)lVar1 * -0x61c8864f;
  iVar3 = (int)((ulonglong)lVar1 >> 0x20);
  uVar8 = iVar3 * -0x61c8864f;
  uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | (int)lVar1 * -0x4f000000
  ;
  uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | iVar3 * -0x4f000000;
  uVar8 = uVar8 * 0x40 + uVar9 + (uVar9 >> 2) + 0x9e3779b9 ^ uVar8;
  uVar6 = (ulonglong)(*(uint *)(param_1 + 3) & uVar8);
  puVar4 = (uint *)(param_1[2] + uVar6 * 8);
  if (-1 < *(int *)(param_1[2] + 4 + uVar6 * 8)) {
    do {
      if (*(longlong *)(*param_1 + (longlong)(int)puVar4[1] * 0x10) == lVar1) {
        uVar6 = *param_3;
        *(ulonglong *)(*param_1 + 8 + (longlong)(int)puVar4[1] * 0x10) = uVar6;
        return uVar6 & 0xffffffffffffff00;
      }
      lVar2 = param_1[2];
      uVar6 = ((longlong)puVar4 - lVar2 >> 3) + 1U & (longlong)(int)param_1[3];
      puVar4 = (uint *)(lVar2 + uVar6 * 8);
    } while (-1 < *(int *)(lVar2 + 4 + uVar6 * 8));
  }
  uVar9 = *(uint *)(param_1 + 1);
  *puVar4 = uVar8;
  puVar4[1] = uVar9;
  uVar5 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar5,param_1,0x10);
  }
  plVar7 = (longlong *)((longlong)(int)param_1[1] * 0x10 + *param_1);
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  *plVar7 = *param_2;
  uVar6 = *param_3;
  plVar7[1] = uVar6;
  return CONCAT71((int7)(uVar6 >> 8),1);
}



// FUNCTION 14374b970 FUN_14374b970 body=136 status=ok
// SIG undefined FUN_14374b970(void)

undefined8 * FUN_14374b970(undefined8 *param_1,undefined8 param_2)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_143734b10(param_1 + 2);
  *(undefined1 *)(param_1 + 4) = 1;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x1fff;
  param_1[5] = 0x7ffffeff;
  param_1[6] = 1;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 1;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = param_1;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_14374bb50(param_1,param_2);
  return param_1;
}



// FUNCTION 14374ba00 FUN_14374ba00 body=117 status=ok
// SIG undefined FUN_14374ba00(void)

longlong FUN_14374ba00(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar1 = *param_2;
  uVar6 = (int)lVar1 * -0x61c8864f;
  iVar3 = (int)((ulonglong)lVar1 >> 0x20);
  uVar5 = iVar3 * -0x61c8864f;
  uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | (int)lVar1 * -0x4f000000
  ;
  uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | iVar3 * -0x4f000000;
  lVar2 = param_1[2];
  uVar4 = (ulonglong)
          ((uVar5 * 0x40 + uVar6 + (uVar6 >> 2) + 0x9e3779b9 ^ uVar5) & *(uint *)(param_1 + 3));
  iVar3 = *(int *)(lVar2 + 4 + uVar4 * 8);
  if (-1 < iVar3) {
    do {
      if (*(longlong *)(*param_1 + (longlong)iVar3 * 8) == lVar1) {
        return lVar2 + uVar4 * 8;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1U & *(uint *)(param_1 + 3));
      iVar3 = *(int *)(lVar2 + 4 + uVar4 * 8);
    } while (-1 < iVar3);
  }
  return 0;
}



// FUNCTION 14374ba80 FUN_14374ba80 body=30 status=ok
// SIG undefined FUN_14374ba80(void)

ulonglong FUN_14374ba80(longlong param_1,uint param_2)

{
  ulonglong in_RAX;
  
  if (((param_2 & 0x80000100) == 0) &&
     (in_RAX = *(ulonglong *)(param_1 + 0x28) & (ulonglong)param_2, in_RAX == param_2)) {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14374baa0 FUN_14374baa0 body=82 status=ok
// SIG undefined FUN_14374baa0(void)

undefined8 FUN_14374baa0(longlong param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  longlong lVar4;
  undefined1 local_res8 [32];
  
  puVar2 = (undefined8 *)FUN_143714490(param_1,1);
  bVar1 = 0;
  if (puVar2 != (undefined8 *)0x0) {
    bVar1 = (byte)*puVar2;
  }
  lVar4 = 0;
  if ((bVar1 & 0xf) == 1) {
    lVar4 = param_1;
  }
  if (lVar4 != 0) {
    pbVar3 = (byte *)FUN_143715390(param_1,local_res8);
    if ((~*pbVar3 & 1) == 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14374bb00 FUN_14374bb00 body=70 status=ok
// SIG undefined FUN_14374bb00(void)

bool FUN_14374bb00(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  lVar2 = FUN_14374ba00(*param_2,local_res8);
  if ((lVar2 != 0) && (-1 < *(int *)(lVar2 + 4))) {
    return true;
  }
  iVar1 = FUN_1436eed80(param_2 + 1,local_res8);
  return -1 < iVar1;
}



// FUNCTION 14374bb50 FUN_14374bb50 body=116 status=ok
// SIG undefined FUN_14374bb50(void)

void FUN_14374bb50(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  *(undefined8 *)(param_1 + 0x20) = *param_2;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  uVar4 = param_2[3];
  *(undefined8 *)(param_1 + 0x30) = param_2[2];
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 5);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  *(undefined8 *)(param_1 + 0x50) = param_2[6];
  if (param_2[2] == 1) {
    *(code **)(param_1 + 0x30) = FUN_14374bb00;
    *(longlong *)(param_1 + 0x38) = param_1 + 0x60;
  }
  if (0 < *(int *)(param_1 + 8)) {
    *(undefined4 *)(param_1 + 8) = 0;
    FUN_1437347e0(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x58) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}



// FUNCTION 14374bbd0 FUN_14374bbd0 body=256 status=ok
// SIG undefined FUN_14374bbd0(void)

ulonglong FUN_14374bbd0(ulonglong *param_1,undefined4 *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  bVar1 = (byte)*param_1;
  if (-1 < (char)bVar1) {
    *param_2 = 1;
    return (ulonglong)bVar1;
  }
  uVar2 = *param_1;
  uVar4 = (uVar2 & 0xff0000000000) >> 0x18;
  uVar5 = (uVar2 & 0xff00000000) >> 8;
  uVar6 = (uVar2 & 0xff000000) << 8;
  uVar7 = (uVar2 & 0xff0000) << 0x18;
  uVar8 = (uVar2 & 0xff00) << 0x28;
  uVar3 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8
  ;
  uVar10 = uVar3 | uVar2 << 0x38;
  uVar9 = (uint)(uVar10 >> 0x20);
  switch(bVar1 >> 3) {
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
    *param_2 = 2;
    return (ulonglong)((ushort)(uVar10 >> 0x30) & 0x3fff);
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
    *param_2 = 3;
    return (ulonglong)(uVar9 >> 8 & 0x1fffff);
  case 0x1c:
    *param_2 = 4;
    return (ulonglong)(uVar9 & 0x7ffffff);
  case 0x1d:
    *param_2 = 5;
    return uVar10 >> 0x18 & 0x7ffffffff;
  case 0x1e:
    *param_2 = 8;
    return uVar3 | uVar2 << 0x38 & 0x7ffffffffffffff;
  case 0x1f:
    if ((bVar1 & 7) == 0) {
      *param_2 = 6;
      return (uVar4 | uVar5 | uVar6 | uVar7 | uVar8) >> 0x10;
    }
    if ((bVar1 & 7) == 1) {
      uVar2 = *(ulonglong *)((longlong)param_1 + 1);
      *param_2 = 9;
      return uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18 |
             (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
             (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
    }
    *param_2 = 0;
  }
  return 0;
}



// FUNCTION 14374bd10 write body=379 status=ok
// SIG int write(int _Filehandle, void * _Buf, uint _MaxCharCount)

int __cdecl hkUintVle::write(int _Filehandle,void *_Buf,uint _MaxCharCount)

{
  ulonglong uVar1;
  undefined4 in_register_0000000c;
  
  uVar1 = *(ulonglong *)CONCAT44(in_register_0000000c,_Filehandle);
  if (uVar1 < 0x80) {
    *(char *)_Buf = (char)uVar1;
    return 1;
  }
  if (uVar1 < 0x4000) {
    *(byte *)_Buf = (byte)(uVar1 >> 8) | 0x80;
    *(undefined1 *)((longlong)_Buf + 1) = *(undefined1 *)CONCAT44(in_register_0000000c,_Filehandle);
    return 2;
  }
  if (uVar1 < 0x200000) {
    *(byte *)_Buf = (byte)(uVar1 >> 0x10) | 0xc0;
    *(undefined1 *)((longlong)_Buf + 1) =
         *(undefined1 *)(CONCAT44(in_register_0000000c,_Filehandle) + 1);
    *(undefined1 *)((longlong)_Buf + 2) = *(undefined1 *)CONCAT44(in_register_0000000c,_Filehandle);
    return 3;
  }
  if (uVar1 < 0x8000000) {
    *(byte *)_Buf = (byte)(uVar1 >> 0x18) | 0xe0;
    *(undefined1 *)((longlong)_Buf + 1) =
         *(undefined1 *)(CONCAT44(in_register_0000000c,_Filehandle) + 2);
    *(undefined1 *)((longlong)_Buf + 2) =
         *(undefined1 *)(CONCAT44(in_register_0000000c,_Filehandle) + 1);
    *(undefined1 *)((longlong)_Buf + 3) = *(undefined1 *)CONCAT44(in_register_0000000c,_Filehandle);
    return 4;
  }
  if (uVar1 < 0x800000000) {
    *(byte *)_Buf = (byte)(uVar1 >> 0x20) | 0xe8;
    *(undefined1 *)((longlong)_Buf + 1) =
         *(undefined1 *)(CONCAT44(in_register_0000000c,_Filehandle) + 3);
    *(undefined1 *)((longlong)_Buf + 2) =
         *(undefined1 *)(CONCAT44(in_register_0000000c,_Filehandle) + 2);
    *(undefined1 *)((longlong)_Buf + 3) =
         *(undefined1 *)(CONCAT44(in_register_0000000c,_Filehandle) + 1);
    *(undefined1 *)((longlong)_Buf + 4) = *(undefined1 *)CONCAT44(in_register_0000000c,_Filehandle);
    return 5;
  }
  if (uVar1 < 0x10000000000) {
    *(undefined1 *)_Buf = 0xf8;
    *(undefined1 *)((longlong)_Buf + 1) =
         *(undefined1 *)(CONCAT44(in_register_0000000c,_Filehandle) + 4);
    *(undefined1 *)((longlong)_Buf + 2) =
         *(undefined1 *)(CONCAT44(in_register_0000000c,_Filehandle) + 3);
    *(undefined1 *)((longlong)_Buf + 3) =
         *(undefined1 *)(CONCAT44(in_register_0000000c,_Filehandle) + 2);
    *(undefined1 *)((longlong)_Buf + 4) =
         *(undefined1 *)(CONCAT44(in_register_0000000c,_Filehandle) + 1);
    *(undefined1 *)((longlong)_Buf + 5) = *(undefined1 *)CONCAT44(in_register_0000000c,_Filehandle);
    return 6;
  }
  if (uVar1 < 0x800000000000000) {
    *(byte *)_Buf = (byte)(uVar1 >> 0x38) | 0xf0;
    *(undefined1 *)((longlong)_Buf + 1) =
         *(undefined1 *)(CONCAT44(in_register_0000000c,_Filehandle) + 6);
    *(undefined1 *)((longlong)_Buf + 2) =
         *(undefined1 *)(CONCAT44(in_register_0000000c,_Filehandle) + 5);
    *(undefined1 *)((longlong)_Buf + 3) =
         *(undefined1 *)(CONCAT44(in_register_0000000c,_Filehandle) + 4);
    *(undefined1 *)((longlong)_Buf + 4) =
         *(undefined1 *)(CONCAT44(in_register_0000000c,_Filehandle) + 3);
    *(undefined1 *)((longlong)_Buf + 5) =
         *(undefined1 *)(CONCAT44(in_register_0000000c,_Filehandle) + 2);
    *(undefined1 *)((longlong)_Buf + 6) =
         *(undefined1 *)(CONCAT44(in_register_0000000c,_Filehandle) + 1);
    *(undefined1 *)((longlong)_Buf + 7) = *(undefined1 *)CONCAT44(in_register_0000000c,_Filehandle);
    return 8;
  }
  *(undefined1 *)_Buf = 0xf9;
  *(undefined1 *)((longlong)_Buf + 1) =
       *(undefined1 *)(CONCAT44(in_register_0000000c,_Filehandle) + 7);
  *(undefined1 *)((longlong)_Buf + 2) =
       *(undefined1 *)(CONCAT44(in_register_0000000c,_Filehandle) + 6);
  *(undefined1 *)((longlong)_Buf + 3) =
       *(undefined1 *)(CONCAT44(in_register_0000000c,_Filehandle) + 5);
  *(undefined1 *)((longlong)_Buf + 4) =
       *(undefined1 *)(CONCAT44(in_register_0000000c,_Filehandle) + 4);
  *(undefined1 *)((longlong)_Buf + 5) =
       *(undefined1 *)(CONCAT44(in_register_0000000c,_Filehandle) + 3);
  *(undefined1 *)((longlong)_Buf + 6) =
       *(undefined1 *)(CONCAT44(in_register_0000000c,_Filehandle) + 2);
  *(undefined1 *)((longlong)_Buf + 7) =
       *(undefined1 *)(CONCAT44(in_register_0000000c,_Filehandle) + 1);
  *(undefined1 *)((longlong)_Buf + 8) = *(undefined1 *)CONCAT44(in_register_0000000c,_Filehandle);
  return 9;
}



// FUNCTION 14374be90 FUN_14374be90 body=59 status=ok
// SIG undefined FUN_14374be90(void)

ulonglong FUN_14374be90(ulonglong param_1,byte *param_2,longlong param_3)

{
  byte bVar1;
  
  param_1 = ~param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    bVar1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = *(ulonglong *)(&DAT_145b9a760 + (ulonglong)(byte)(bVar1 ^ (byte)param_1) * 8) ^
              param_1 >> 8;
  }
  return ~param_1;
}



// FUNCTION 14374bed0 FUN_14374bed0 body=827 status=ok
// SIG undefined FUN_14374bed0(void)

undefined8 * FUN_14374bed0(undefined8 *param_1)

{
  *param_1 = 0x2080000d;
  param_1[5] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0x2080000d;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0x13] = 0;
  param_1[0xe] = 0x2080000d;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x1a] = 0;
  param_1[0x15] = 0x2080000d;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x21] = 0;
  param_1[0x1c] = 0x2080000d;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  param_1[0x28] = 0;
  param_1[0x23] = 0x2080000d;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x29] = 0;
  param_1[0x2f] = 0;
  param_1[0x2a] = 0x2080000d;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x30] = 0;
  param_1[0x36] = 0;
  param_1[0x31] = 0x2080000d;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x37] = 0;
  param_1[0x3d] = 0;
  param_1[0x38] = 0x2080000d;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3e] = 0;
  param_1[0x44] = 0;
  param_1[0x3f] = 0x2080000d;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x45] = 0;
  param_1[0x4b] = 0;
  param_1[0x46] = 0x2080000d;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4c] = 0;
  param_1[0x52] = 0;
  param_1[0x4d] = 0x2080000d;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x53] = 0;
  param_1[0x59] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x5a] = 0;
  param_1[0x54] = 0x2080000d;
  param_1[0x60] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x61] = 0;
  param_1[0x5b] = 0x2080000d;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x62] = 0x20000008;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x66] = 0x20000008;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6a] = 0x20000008;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x6e] = 0x20000008;
  return param_1;
}



// FUNCTION 14374c210 FUN_14374c210 body=40 status=ok
// SIG undefined FUN_14374c210(void)

undefined8 FUN_14374c210(undefined8 param_1)

{
  FUN_14370c720(param_1,0xffffffff,0x2c);
  FUN_14374ddd0(param_1);
  return param_1;
}



// FUNCTION 14374c240 FUN_14374c240 body=2269 status=ok
// SIG undefined FUN_14374c240(void)

undefined4 * FUN_14374c240(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 *local_res8;
  char *local_res10;
  
  FUN_143735ac0(param_1 + 2);
  param_1[9] = 0xffffffff;
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x80000000;
  FUN_143734b10(param_1 + 0xe);
  uVar3 = FUN_143703a50();
  FUN_1437365b0(param_1 + 0x12,uVar3,0x4000);
  FUN_14374bed0(param_1 + 0x24);
  *param_1 = 0;
  *(bool *)(param_1 + 1) = param_2[8] != 0;
  *(bool *)((longlong)param_1 + 5) = param_2[7] != 0;
  iVar5 = param_2[1];
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  *(bool *)((longlong)param_1 + 6) = iVar5 != 0;
  param_1[2] = *param_2;
  iVar5 = 4;
  uVar2 = 4;
  if (param_2[9] != 0) {
    uVar2 = 8;
  }
  param_1[3] = uVar2;
  *(bool *)(param_1 + 4) = param_2[5] != 0;
  *(bool *)((longlong)param_1 + 0x11) = param_2[6] != 0;
  *(undefined **)(param_1 + 0x2c) = &DAT_145af4c58;
  *(undefined **)(param_1 + 0x3a) = &DAT_145af49f8;
  *(char **)(param_1 + 0x48) = "signed char";
  *(char **)(param_1 + 0x56) = "unsigned char";
  *(char **)(param_1 + 100) = "short";
  *(char **)(param_1 + 0x72) = "unsigned short";
  *(undefined1 **)(param_1 + 0x80) = &DAT_145af6ba4;
  *(char **)(param_1 + 0x8e) = "unsigned int";
  *(undefined **)(param_1 + 0x9c) = &DAT_145b8e0a0;
  *(char **)(param_1 + 0xaa) = "unsigned long";
  *(char **)(param_1 + 0xb8) = "long long";
  *(char **)(param_1 + 0xc6) = "unsigned long long";
  *(char **)(param_1 + 0xd4) = "float";
  *(char **)(param_1 + 0xe2) = "double";
  *(char **)(param_1 + 0xec) = "hkReal";
  *(char **)(param_1 + 0xf4) = "hkUlong";
  *(char **)(param_1 + 0xfc) = "hkLong";
  *(char **)(param_1 + 0x104) = "hkUintReal";
  if (param_2[4] != 0) {
    iVar5 = 8;
  }
  iVar1 = param_2[2];
  *(undefined **)(param_1 + 0x2a) = &DAT_146b82a80;
  *(undefined8 *)(param_1 + 0x28) = 0x2002;
  uVar7 = 0x100;
  if (iVar1 != 0) {
    uVar7 = 0;
  }
  *(undefined8 *)(param_1 + 0x2e) = 0x10001;
  *(undefined4 **)(param_1 + 0x30) = param_1;
  *(undefined8 *)(param_1 + 0x36) = 0x2004;
  *(undefined8 *)(param_1 + 0x3c) = 0x10001;
  *(undefined4 **)(param_1 + 0x3e) = param_1;
  *(undefined **)(param_1 + 0x38) = &DAT_146b829f0;
  *(undefined **)(param_1 + 0x46) = &DAT_146b829f0;
  *(undefined8 *)(param_1 + 0x44) = 0x2204;
  *(undefined8 *)(param_1 + 0x4a) = 0x10001;
  *(undefined4 **)(param_1 + 0x4c) = param_1;
  *(undefined **)(param_1 + 0x54) = &DAT_146b82a90;
  *(undefined8 *)(param_1 + 0x52) = 0x2004;
  *(undefined8 *)(param_1 + 0x58) = 0x10001;
  *(undefined4 **)(param_1 + 0x5a) = param_1;
  *(ulonglong *)(param_1 + 0x60) = uVar7 | 0x4204;
  *(undefined **)(param_1 + 0x62) = &DAT_146b82ab0;
  *(undefined8 *)(param_1 + 0x66) = 0x20002;
  *(undefined4 **)(param_1 + 0x68) = param_1;
  *(ulonglong *)(param_1 + 0x6e) = uVar7 | 0x4004;
  *(undefined **)(param_1 + 0x70) = &DAT_146b82ac0;
  *(undefined8 *)(param_1 + 0x74) = 0x20002;
  *(undefined4 **)(param_1 + 0x76) = param_1;
  *(ulonglong *)(param_1 + 0x7c) = uVar7 | 0x8204;
  *(undefined **)(param_1 + 0x7e) = &DAT_146b82ad0;
  *(undefined8 *)(param_1 + 0x82) = 0x40004;
  *(undefined4 **)(param_1 + 0x84) = param_1;
  *(ulonglong *)(param_1 + 0x8a) = uVar7 | 0x8004;
  *(undefined **)(param_1 + 0x8c) = &DAT_146b82ae0;
  *(undefined8 *)(param_1 + 0x90) = 0x40004;
  *(undefined4 **)(param_1 + 0x92) = param_1;
  *(ulonglong *)(param_1 + 0xb4) = uVar7 | 0x10204;
  *(undefined **)(param_1 + 0xb6) = &DAT_146b82b10;
  *(undefined4 **)(param_1 + 0xbc) = param_1;
  *(ulonglong *)(param_1 + 0xba) = (ulonglong)(uint)(iVar5 << 0x10) | 8;
  *(undefined **)(param_1 + 0xc4) = &DAT_146b82b20;
  *(ulonglong *)(param_1 + 0xc2) = uVar7 | 0x10004;
  *(undefined4 **)(param_1 + 0xca) = param_1;
  *(ulonglong *)(param_1 + 200) = (ulonglong)(uint)(iVar5 << 0x10) | 8;
  if ((param_2[1] == 0) && ((*param_2 != 8 || (param_2[3] == 0)))) {
    *(undefined **)(param_1 + 0x9a) = &DAT_146b82ad0;
    *(ulonglong *)(param_1 + 0x98) = uVar7 | 0x8204;
    *(undefined8 *)(param_1 + 0x9e) = 0x40004;
    *(undefined4 **)(param_1 + 0xa0) = param_1;
    *(ulonglong *)(param_1 + 0xa6) = uVar7 | 0x8004;
    *(undefined **)(param_1 + 0xa8) = &DAT_146b82ae0;
    *(undefined8 *)(param_1 + 0xac) = 0x40004;
  }
  else {
    *(undefined **)(param_1 + 0x9a) = &DAT_146b82b10;
    *(ulonglong *)(param_1 + 0x98) = uVar7 | 0x10204;
    *(undefined4 **)(param_1 + 0xa0) = param_1;
    *(ulonglong *)(param_1 + 0x9e) = (ulonglong)(uint)(iVar5 << 0x10) | 8;
    *(undefined **)(param_1 + 0xa8) = &DAT_146b82b20;
    *(ulonglong *)(param_1 + 0xa6) = uVar7 | 0x10004;
    *(ulonglong *)(param_1 + 0xac) = (ulonglong)(uint)(iVar5 << 0x10) | 8;
  }
  *(undefined4 **)(param_1 + 0xae) = param_1;
  *(undefined8 *)(param_1 + 0xd6) = 0x40004;
  *(undefined4 **)(param_1 + 0xd8) = param_1;
  *(ulonglong *)(param_1 + 0xd0) = uVar7 | 0x174605;
  *(undefined **)(param_1 + 0xd2) = &DAT_146b82b30;
  *(undefined4 **)(param_1 + 0xe6) = param_1;
  *(ulonglong *)(param_1 + 0xde) = uVar7 | 0x345e05;
  *(undefined **)(param_1 + 0xe0) = &DAT_146b82b40;
  lVar6 = 0x2f8;
  *(ulonglong *)(param_1 + 0xe4) = (ulonglong)(uint)(iVar5 << 0x10) | 8;
  lVar4 = 0x330;
  if (param_2[9] != 0) {
    lVar4 = 0x368;
  }
  *(longlong *)(param_1 + 0xea) = lVar4 + (longlong)param_1;
  *(undefined8 *)(param_1 + 0xee) = *(undefined8 *)(lVar4 + (longlong)param_1 + 0x30);
  lVar4 = 0x218;
  if (param_2[9] != 0) {
    lVar4 = 0x2f8;
  }
  *(longlong *)(param_1 + 0x102) = lVar4 + (longlong)param_1;
  *(undefined8 *)(param_1 + 0x106) = *(undefined8 *)(lVar4 + (longlong)param_1 + 0x30);
  if ((*param_2 == 8) || (lVar4 = 0x250, param_2[1] != 0)) {
    lVar4 = 0x2c0;
  }
  *(longlong *)(param_1 + 0xfa) = lVar4 + (longlong)param_1;
  *(undefined8 *)(param_1 + 0xfe) = *(undefined8 *)(lVar4 + (longlong)param_1 + 0x30);
  if ((*param_2 != 8) && (param_2[1] == 0)) {
    lVar6 = 0x288;
  }
  *(longlong *)(param_1 + 0xf2) = lVar6 + (longlong)param_1;
  *(undefined8 *)(param_1 + 0xf6) = *(undefined8 *)(lVar6 + (longlong)param_1 + 0x30);
  local_res8 = param_1 + 0x24;
  local_res10 = "bool";
  FUN_14374dbf0(param_1 + 10,&local_res10,&local_res8);
  local_res8 = param_1 + 0x32;
  local_res10 = "char";
  FUN_14374dbf0(param_1 + 10,&local_res10,&local_res8);
  local_res8 = param_1 + 0x40;
  local_res10 = "signed char";
  FUN_14374dbf0(param_1 + 10,&local_res10,&local_res8);
  local_res8 = param_1 + 0x4e;
  local_res10 = "unsigned char";
  FUN_14374dbf0(param_1 + 10,&local_res10,&local_res8);
  local_res8 = param_1 + 0x5c;
  local_res10 = "short";
  FUN_14374dbf0(param_1 + 10,&local_res10,&local_res8);
  local_res8 = param_1 + 0x6a;
  local_res10 = "unsigned short";
  FUN_14374dbf0(param_1 + 10,&local_res10,&local_res8);
  local_res8 = param_1 + 0x78;
  local_res10 = "int";
  FUN_14374dbf0(param_1 + 10,&local_res10,&local_res8);
  local_res8 = param_1 + 0x86;
  local_res10 = "unsigned int";
  FUN_14374dbf0(param_1 + 10,&local_res10,&local_res8);
  local_res10 = "long";
  local_res8 = param_1 + 0x94;
  FUN_14374dbf0(param_1 + 10,&local_res10,&local_res8);
  local_res10 = "unsigned long";
  local_res8 = param_1 + 0xa2;
  FUN_14374dbf0(param_1 + 10,&local_res10,&local_res8);
  local_res8 = param_1 + 0xb0;
  local_res10 = "long long";
  FUN_14374dbf0(param_1 + 10,&local_res10,&local_res8);
  local_res8 = param_1 + 0xbe;
  local_res10 = "unsigned long long";
  FUN_14374dbf0(param_1 + 10,&local_res10,&local_res8);
  local_res10 = "float";
  local_res8 = param_1 + 0xcc;
  FUN_14374dbf0(param_1 + 10,&local_res10,&local_res8);
  local_res8 = param_1 + 0xda;
  local_res10 = "double";
  FUN_14374dbf0(param_1 + 10,&local_res10,&local_res8);
  local_res8 = param_1 + 0xe8;
  local_res10 = "hkReal";
  FUN_14374dbf0(param_1 + 10,&local_res10,&local_res8);
  local_res10 = "hkUlong";
  local_res8 = param_1 + 0xf0;
  FUN_14374dbf0(param_1 + 10,&local_res10,&local_res8);
  local_res8 = param_1 + 0xf8;
  local_res10 = "hkLong";
  FUN_14374dbf0(param_1 + 10,&local_res10,&local_res8);
  local_res8 = param_1 + 0x100;
  local_res10 = "hkUintReal";
  FUN_14374dbf0(param_1 + 10,&local_res10,&local_res8);
  return param_1;
}



// FUNCTION 14374cb20 FUN_14374cb20 body=108 status=ok
// SIG undefined FUN_14374cb20(void)

undefined8 * FUN_14374cb20(undefined8 *param_1,undefined8 param_2)

{
  LPVOID pvVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x420);
  if (lVar2 != 0) {
    uVar3 = FUN_14374c240(lVar2,param_2);
    *param_1 = uVar3;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 14374cb90 FUN_14374cb90 body=119 status=ok
// SIG undefined FUN_14374cb90(void)

void FUN_14374cb90(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_143736600(param_1 + 0x48);
  thunk_FUN_143734820(param_1 + 0x38);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x34)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x28),0x10,*(uint *)(param_1 + 0x34) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  uVar1 = FUN_143703a50();
  FUN_143700a90(param_1 + 0x18,uVar1);
  AK::MemoryMgr::StartProfileThreadUsage((int)param_1 + 0x18);
  return;
}



// FUNCTION 14374cc10 FUN_14374cc10 body=76 status=ok
// SIG undefined FUN_14374cc10(void)

void FUN_14374cc10(longlong *param_1)

{
  longlong lVar1;
  LPVOID pvVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_14374cb90(lVar1);
    pvVar2 = TlsGetValue(DAT_146b7bf70);
    if (pvVar2 == (LPVOID)0x0) {
      pvVar2 = DAT_146b7bf68;
    }
                    /* WARNING: Could not recover jumptable at 0x00014374cc52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
              (*(longlong **)((longlong)pvVar2 + 0x58),lVar1,0x420);
    return;
  }
  return;
}



// FUNCTION 14374cc60 FUN_14374cc60 body=169 status=ok
// SIG undefined FUN_14374cc60(void)

longlong FUN_14374cc60(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  
  if (*param_2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = FUN_143740180();
  }
  uVar5 = (ulonglong)(*(uint *)(param_1 + 3) & uVar3);
  lVar1 = param_1[2] + uVar5 * 8;
  iVar4 = *(int *)(param_1[2] + 4 + uVar5 * 8);
  while( true ) {
    if (iVar4 < 0) {
      return 0;
    }
    lVar2 = *(longlong *)((longlong)iVar4 * 0x10 + *param_1);
    if (lVar2 == *param_2) break;
    if (((lVar2 != 0) && (*param_2 != 0)) && (iVar4 = hkString::strCmp(), iVar4 == 0)) {
      return lVar1;
    }
    uVar5 = (ulonglong)((int)uVar5 + 1U & *(uint *)(param_1 + 3));
    lVar1 = param_1[2] + uVar5 * 8;
    iVar4 = *(int *)(param_1[2] + 4 + uVar5 * 8);
  }
  return lVar1;
}



// FUNCTION 14374cd10 FUN_14374cd10 body=544 status=ok
// SIG undefined FUN_14374cd10(void)

undefined8 FUN_14374cd10(longlong param_1,ulonglong *param_2)

{
  char *pcVar1;
  byte bVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 local_1f8 [88];
  undefined8 local_1a0;
  ulonglong local_198;
  undefined8 local_178;
  ulonglong local_d0;
  
  puVar4 = (ulonglong *)FUN_143714490(param_2,1);
  uVar11 = 0;
  uVar9 = uVar11;
  if (puVar4 != (ulonglong *)0x0) {
    uVar9 = *puVar4;
  }
  bVar2 = 0;
  if ((uVar9 & 0xf) != 0) {
    puVar5 = (undefined8 *)FUN_143714490(param_2,1);
    if (puVar5 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar5;
    }
    if ((bVar2 & 0xf) != 1) {
      uVar3 = 0x1586001f;
      uVar10 = 0x1584001f;
      goto LAB_14374cd7c;
    }
  }
  uVar3 = 0x1586001b;
  uVar10 = 0x1584001b;
LAB_14374cd7c:
  if (*(char *)(param_1 + 6) == '\0') {
    uVar10 = uVar3;
  }
  FUN_143737060(local_1f8);
  FUN_143737b00(local_1f8,param_2,uVar10);
  FUN_143738110(local_1f8,param_1);
  local_1a0 = 0;
  if ((((*param_2 & 8) != 0) &&
      (plVar6 = (longlong *)FUN_1437143d0(param_2,8), plVar6 != (longlong *)0x0)) && (*plVar6 != 0))
  {
    local_178 = FUN_14370c890(*plVar6,param_1 + 0x48);
    local_198 = local_198 | 8;
  }
  if ((((uint)*param_2 >> 0x12 & 1) != 0) &&
     (lVar7 = FUN_143715320(param_2), *(short *)(lVar7 + 8) != 0)) {
    puVar5 = (undefined8 *)(lVar7 + 0x18);
    uVar9 = uVar11;
    do {
      pcVar1 = (char *)*puVar5;
      if (*pcVar1 == 't') {
        FUN_143737760(local_1f8,0,pcVar1 + 1);
      }
      else {
        FUN_143737860(local_1f8,puVar5[-1],pcVar1 + 1);
      }
      uVar12 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar12;
      puVar5 = puVar5 + 2;
    } while ((int)uVar12 < (int)(uint)*(ushort *)(lVar7 + 8));
  }
  if (((*(char *)(param_1 + 6) == '\0') && (((uint)*param_2 >> 0x11 & 1) != 0)) &&
     ((plVar6 = (longlong *)FUN_1437143d0(param_2,0x20000), plVar6 != (longlong *)0x0 &&
      (((longlong *)*plVar6 != (longlong *)0x0 &&
       (uVar9 = (*(longlong *)*plVar6 << 4) >> 4, 0 < (int)uVar9)))))) {
    uVar9 = uVar9 & 0xffffffff;
    do {
      FUN_143737570(local_1f8,0,0);
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if ((*(char *)(param_1 + 4) != '\0') && ((*param_2 >> 0x18 & 1) != 0)) {
    if (((*param_2 >> 0x18 & 1) != 0) &&
       (puVar4 = (ulonglong *)FUN_1437143d0(param_2,0x1000000), puVar4 != (ulonglong *)0x0)) {
      uVar11 = *puVar4;
    }
    local_198 = local_198 | 0x1000000;
    local_d0 = uVar11 & 0xffffffffffffff7f;
  }
  uVar8 = FUN_143737a80(local_1f8,param_1 + 0x48);
  FUN_143737160(local_1f8);
  return uVar8;
}



// FUNCTION 14374cf30 FUN_14374cf30 body=820 status=ok
// SIG undefined FUN_14374cf30(void)

byte * FUN_14374cf30(int *param_1,byte *param_2,longlong *param_3)

{
  int *piVar1;
  char cVar2;
  uint *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  byte *pbVar7;
  byte **ppbVar8;
  byte *local_res10 [2];
  byte *local_res20;
  byte *local_70;
  byte *local_68;
  byte *pbStack_60;
  undefined1 local_58 [64];
  
  if ((param_2 == (byte *)0x0) || (*param_1 < 0)) {
    return (byte *)0x0;
  }
  local_res10[0] = param_2;
  if ((*(char *)((longlong)param_1 + 6) == '\0') &&
     (puVar3 = (uint *)FUN_143715390(param_2,&local_res20), (~(byte)(*puVar3 >> 9) & 1) == 0)) {
    if (1 < DAT_146b832a8) {
      uVar4 = FUN_143714f80(local_res10[0],&local_68);
      FUN_14373a730(local_58,&DAT_146b832a0,2);
      lVar5 = FUN_14373bbd0(local_58,"Cannot copy {}@{}, it is not retargetable",&DAT_145b9b078,
                            uVar4,local_res10,0);
      *(char **)(lVar5 + 0x20) = "Reflect\\Builder\\hkTypeCopier.cpp";
      *(undefined8 *)(lVar5 + 0x28) = 0x141;
      FUN_14373a950(local_58);
    }
    *param_1 = -0x7ffbfe00;
    pbVar7 = (byte *)0x0;
  }
  else {
    piVar1 = param_1 + 6;
    local_res20 = (byte *)0x0;
    local_70 = local_res10[0];
    plVar6 = (longlong *)FUN_14372d420(piVar1,&local_70,&local_res20);
    pbVar7 = (byte *)*plVar6;
    if (pbVar7 == (byte *)0x0) {
      cVar2 = FUN_14374baa0(local_res10[0]);
      if (cVar2 == '\0') {
        local_70 = (byte *)0x0;
        if ((*local_res10[0] >> 3 & 1) != 0) {
          lVar5 = FUN_14374a2a0(local_res10[0]);
          if ((((lVar5 != 0) &&
               (puVar3 = (uint *)FUN_143715390(local_res10[0],&local_res20), (*puVar3 >> 5 & 1) == 0
               )) && (pbVar7 = (byte *)FUN_14371d670(local_res10[0]), pbVar7 != (byte *)0x0)) &&
             (pbVar7 != local_res10[0])) {
            local_res20 = (byte *)0x0;
            local_70 = pbVar7;
            plVar6 = (longlong *)FUN_14372d420(param_1 + 6,&local_70,&local_res20);
            local_68 = (byte *)*plVar6;
            if (local_68 != (byte *)0x0) {
              local_70 = local_res10[0];
              local_res20 = local_68;
              uVar4 = FUN_143703a50();
              FUN_14372d6e0(piVar1,uVar4,&local_70,&local_res20);
              return local_68;
            }
            local_70 = local_res10[0];
            local_res10[0] = pbVar7;
          }
          local_68 = (byte *)0x0;
          local_res20 = (byte *)FUN_1437151f0(local_res10[0]);
          lVar5 = FUN_14374cc60(param_1 + 10,&local_res20);
          if (lVar5 == 0) {
            ppbVar8 = &local_68;
          }
          else {
            ppbVar8 = (byte **)(*(longlong *)(param_1 + 10) + 8 +
                               (longlong)*(int *)(lVar5 + 4) * 0x10);
          }
          pbVar7 = *ppbVar8;
          if (pbVar7 != (byte *)0x0) {
            local_68 = local_res10[0];
            local_res20 = pbVar7;
            uVar4 = FUN_143703a50();
            FUN_14372d6e0(piVar1,uVar4,&local_68,&local_res20);
            pbStack_60 = local_res10[0];
            local_68 = pbVar7;
            uVar4 = FUN_143703a50();
            if (*(uint *)(param_3 + 1) == (*(uint *)((longlong)param_3 + 0xc) & 0x3fffffff)) {
              FUN_14370c460(uVar4,param_3,0x10);
            }
            plVar6 = (longlong *)((longlong)(int)param_3[1] * 0x10 + *param_3);
            if (plVar6 != (longlong *)0x0) {
              *plVar6 = (longlong)local_68;
              plVar6[1] = (longlong)pbStack_60;
            }
            *(int *)(param_3 + 1) = (int)param_3[1] + 1;
            return pbVar7;
          }
        }
        pbVar7 = (byte *)FUN_14374dd30(param_1,local_res10[0],local_70,param_3);
        pbStack_60 = local_res10[0];
        local_68 = pbVar7;
        uVar4 = FUN_143703a50();
        if (*(uint *)(param_3 + 1) == (*(uint *)((longlong)param_3 + 0xc) & 0x3fffffff)) {
          FUN_14370c460(uVar4,param_3,0x10);
        }
        plVar6 = (longlong *)((longlong)(int)param_3[1] * 0x10 + *param_3);
        if (plVar6 != (longlong *)0x0) {
          *plVar6 = (longlong)local_68;
          plVar6[1] = (longlong)pbStack_60;
        }
        *(int *)(param_3 + 1) = (int)param_3[1] + 1;
      }
      else {
        pbVar7 = (byte *)FUN_14374cf30(param_1,&DAT_1467df8b8,param_3);
      }
    }
  }
  return pbVar7;
}



// FUNCTION 14374d270 FUN_14374d270 body=8 status=ok
// SIG undefined FUN_14374d270(void)

void FUN_14374d270(undefined8 *param_1)

{
  FUN_14374d280(*param_1);
  return;
}



// FUNCTION 14374d280 FUN_14374d280 body=347 status=ok
// SIG undefined FUN_14374d280(void)

ulonglong FUN_14374d280(int *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  longlong local_28;
  int local_20;
  uint local_1c;
  ulonglong uVar15;
  
  uVar11 = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0x80000000;
  uVar7 = FUN_14374cf30(param_1,param_2,&local_28);
  if (*param_1 < 0) {
    *param_1 = 0;
    uVar7 = uVar11;
  }
  else {
    if (0 < local_20) {
      uVar15 = uVar11;
      do {
        FUN_143735e50(*(undefined8 *)(uVar11 + local_28),param_1 + 2);
        uVar11 = uVar11 + 0x10;
        uVar13 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar13;
      } while ((int)uVar13 < local_20);
    }
    iVar6 = local_20;
    lVar12 = local_28;
    if (param_3 != (longlong *)0x0) {
      uVar9 = FUN_143703a50();
      iVar14 = (int)param_3[1] + iVar6;
      uVar13 = *(uint *)((longlong)param_3 + 0xc) & 0x3fffffff;
      if (((int)uVar13 < iVar14) && ((int)uVar13 < iVar14)) {
        iVar2 = iVar14;
        if (iVar14 < (int)(uVar13 * 2)) {
          iVar2 = uVar13 * 2;
        }
        FUN_14370c310(uVar9,param_3,iVar2,0x10);
      }
      puVar8 = (undefined4 *)((longlong)(int)param_3[1] * 0x10 + *param_3);
      lVar10 = (longlong)iVar6;
      if (0 < iVar6) {
        lVar12 = lVar12 - (longlong)puVar8;
        do {
          if (puVar8 != (undefined4 *)0x0) {
            puVar1 = (undefined4 *)(lVar12 + (longlong)puVar8);
            uVar3 = puVar1[1];
            uVar4 = puVar1[2];
            uVar5 = puVar1[3];
            *puVar8 = *puVar1;
            puVar8[1] = uVar3;
            puVar8[2] = uVar4;
            puVar8[3] = uVar5;
          }
          puVar8 = puVar8 + 4;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      *(int *)(param_3 + 1) = iVar14;
    }
  }
  uVar9 = FUN_143703a50();
  local_20 = 0;
  if (-1 < (int)local_1c) {
    FUN_143702e10(uVar9,local_28,0x10,local_1c & 0x3fffffff);
  }
  return uVar7;
}



// FUNCTION 14374d3e0 FUN_14374d3e0 body=1992 status=ok
// SIG undefined FUN_14374d3e0(void)

void FUN_14374d3e0(longlong param_1,ulonglong *param_2,uint *param_3,undefined8 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong *puVar11;
  byte *pbVar12;
  uint *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  int iVar19;
  undefined *puVar20;
  longlong lVar21;
  longlong lVar22;
  longlong *plVar23;
  ulonglong uVar24;
  int local_res10;
  uint local_278 [2];
  uint *local_270;
  int local_268;
  ulonglong local_260;
  longlong *local_258;
  undefined8 *local_250;
  ulonglong local_248;
  ulonglong local_240;
  undefined1 local_238 [16];
  ulonglong local_228;
  undefined1 local_218 [96];
  ulonglong local_1b8;
  ulonglong local_f8;
  
  if (*(longlong *)(param_3 + 2) != 0) {
    uVar4 = FUN_14374cf30(param_1,*(longlong *)(param_3 + 2),param_4);
    param_2[1] = uVar4;
  }
  uVar4 = *param_2;
  puVar7 = (undefined *)0x0;
  local_260 = uVar4;
  if ((uVar4 & 4) != 0) {
    puVar20 = puVar7;
    if (((*param_3 & 1) != 0) &&
       (puVar5 = (undefined8 *)FUN_1437143d0(param_3,1), puVar5 != (undefined8 *)0x0)) {
      puVar20 = (undefined *)*puVar5;
    }
    puVar5 = (undefined8 *)FUN_143714490(param_3,1);
    if (puVar5 == (undefined8 *)0x0) {
      uVar16 = 0;
    }
    else {
      uVar16 = (uint)*puVar5;
    }
    if ((uVar16 & 0xf) == 2) {
      if (*(char *)(param_1 + 6) == '\0') goto LAB_14374d493;
      puVar5 = (undefined8 *)FUN_1437143d0(param_2,1);
      puVar7 = &DAT_146b82a50;
      *puVar5 = 0x2002;
    }
    else if ((uVar16 & 0xf) - 4 < 2) {
LAB_14374d493:
      uVar6 = FUN_143749330((ulonglong)puVar20 & 0xffffffff);
      puVar7 = (undefined *)FUN_1437151a0(uVar6);
    }
    puVar5 = (undefined8 *)FUN_1437143d0(param_2,4);
    *puVar5 = puVar7;
  }
  if ((uVar4 >> 0x12 & 1) != 0) {
    puVar5 = (undefined8 *)FUN_143715320(param_3);
    uVar16 = *(uint *)(puVar5 + 1) & 0xffff;
    if (uVar16 != 0) {
      if ((((uint)*param_2 >> 0x12 & 1) == 0) ||
         (plVar8 = (longlong *)FUN_1437143d0(param_2,0x40000), plVar8 == (longlong *)0x0)) {
        lVar22 = 0;
      }
      else {
        lVar22 = *plVar8;
      }
      lVar21 = (longlong)(int)uVar16;
      uVar4 = local_260;
      if (uVar16 != 0) {
        puVar14 = puVar5;
        do {
          puVar17 = puVar14 + 2;
          if (*(char *)puVar14[3] == 't') {
            uVar6 = FUN_14374cf30(param_1,*puVar17,param_4);
            *(undefined8 *)((lVar22 - (longlong)puVar5) + (longlong)puVar17) = uVar6;
          }
          lVar21 = lVar21 + -1;
          uVar4 = local_260;
          puVar14 = puVar17;
        } while (lVar21 != 0);
      }
    }
  }
  plVar8 = (longlong *)0x0;
  if ((uVar4 >> 0x11 & 1) != 0) {
    plVar23 = plVar8;
    if (((*param_3 >> 0x11 & 1) != 0) &&
       (puVar5 = (undefined8 *)FUN_1437143d0(param_3,0x20000), puVar5 != (undefined8 *)0x0)) {
      plVar23 = (longlong *)*puVar5;
    }
    iVar19 = (int)((*plVar23 << 4) >> 4);
    uVar4 = local_260;
    if (iVar19 != 0) {
      plVar18 = plVar8;
      if ((((uint)*param_2 >> 0x11 & 1) != 0) &&
         (puVar5 = (undefined8 *)FUN_1437143d0(param_2,0x20000), puVar5 != (undefined8 *)0x0)) {
        plVar18 = (longlong *)*puVar5;
      }
      plVar18 = plVar18 + 1;
      lVar22 = (longlong)iVar19;
      uVar4 = local_260;
      if (0 < lVar22) {
        lVar21 = 8 - (longlong)plVar18;
        do {
          lVar9 = FUN_14374cf30(param_1,*(undefined8 *)
                                         ((longlong)plVar23 + lVar21 + (longlong)plVar18),param_4);
          *plVar18 = lVar9;
          plVar18 = plVar18 + 2;
          lVar22 = lVar22 + -1;
          uVar4 = local_260;
        } while (lVar22 != 0);
      }
    }
  }
  if ((uVar4 >> 0x1a & 1) != 0) {
    puVar5 = (undefined8 *)FUN_143714490(param_3,0x4000000);
    plVar23 = plVar8;
    if (puVar5 != (undefined8 *)0x0) {
      plVar23 = (longlong *)*puVar5;
    }
    local_258 = plVar23;
    puVar5 = (undefined8 *)
             FUN_143714780(0,(int)(short)*plVar23,(int)*(short *)((longlong)plVar23 + 2),
                           param_1 + 0x48);
    local_268 = 0;
    plVar18 = plVar8;
    local_250 = puVar5;
    if (0 < *(short *)((longlong)plVar23 + 4)) {
      do {
        puVar5 = puVar5 + 1;
        FUN_143714060(&local_270,plVar23[(longlong)(int)plVar18 + 1]);
        lVar22 = FUN_1437151c0(&local_270);
        if (lVar22 != 0) {
          uVar6 = FUN_14374cf30(param_1,*(undefined8 *)(local_270 + 2),param_4);
          uVar10 = FUN_1437151c0(&local_270);
          local_248 = FUN_14370c890(uVar10,param_1 + 0x48);
          FUN_143737060(local_218);
          FUN_143738110(local_218,param_1);
          UMovieScenePropertyTrack::SetSectionToKey(local_218,uVar6);
          if ((((*local_270 >> 0x17 & 1) != 0) &&
              (puVar11 = (ulonglong *)FUN_1437143d0(local_270,0x800000), puVar11 != (ulonglong *)0x0
              )) && (*puVar11 != 0)) {
            local_1b8 = local_1b8 | 0x800000;
            local_f8 = (ulonglong)(uint)((int)((*puVar11 & 0xf0000000) >> 0x1c) << 0x1c);
          }
          FUN_143714f30(&local_270,local_278);
          if (*(char *)(param_1 + 4) != '\0') {
            pbVar12 = (byte *)FUN_143714f30(&local_270,&local_240);
            if ((~*pbVar12 & 1) == 0) {
              local_278[0] = local_278[0] & 0xffffffdf | 0x10;
            }
            else {
              local_268 = local_268 + 1;
              local_278[0] = local_278[0] & 0xffffffef | 0x20;
            }
          }
          FUN_1437380c0(local_218,local_248,0,local_278[0]);
          uVar6 = FUN_143737a80(local_218,param_1 + 0x48);
          *puVar5 = uVar6;
          FUN_143737160(local_218);
          plVar23 = local_258;
        }
        uVar16 = (int)plVar18 + 1;
        plVar18 = (longlong *)(ulonglong)uVar16;
      } while ((int)uVar16 < (int)*(short *)((longlong)plVar23 + 4));
    }
    puVar5 = local_250;
    if (*(char *)(param_1 + 4) != '\0') {
      puVar13 = (uint *)(longlong)*(short *)((longlong)local_250 + 4);
      local_270 = puVar13;
      if (0 < (longlong)puVar13) {
        local_res10 = -1;
        do {
          uVar6 = puVar5[(longlong)plVar8 + 1];
          plVar23 = plVar8;
          iVar19 = local_res10;
          while (((0 < (longlong)plVar23 &&
                  (FUN_143714040(&local_248,uVar6), puVar13 = local_270, 1 < local_248)) &&
                 (FUN_1437140c0(&local_240,puVar5[(longlong)iVar19 + 1]), puVar13 = local_270,
                 1 < local_240))) {
            iVar19 = iVar19 + -1;
            puVar5[(longlong)plVar23 + 1] = puVar5[(longlong)plVar23];
            plVar23 = (longlong *)((longlong)plVar23 + -1);
          }
          local_res10 = local_res10 + 1;
          puVar5[(longlong)plVar23 + 1] = uVar6;
          plVar8 = (longlong *)((longlong)plVar8 + 1);
          plVar23 = local_258;
        } while ((longlong)plVar8 < (longlong)puVar13);
      }
      puVar5 = local_250;
      hkReflect::Detail::DeclsArray::reset
                (local_250,local_268,*(short *)((longlong)plVar23 + 4) - local_268);
    }
    puVar14 = (undefined8 *)FUN_1437143d0(param_2,0x4000000);
    *puVar14 = puVar5;
    uVar4 = local_260;
  }
  uVar24 = 0;
  if (((byte)*param_2 >> 1 & 1) != 0) {
    uVar15 = uVar24;
    if (((*param_2 & 2) != 0) &&
       (puVar11 = (ulonglong *)FUN_1437143d0(param_2,2), puVar11 != (ulonglong *)0x0)) {
      uVar15 = *puVar11;
    }
    uVar6 = FUN_14374cf30(param_1,uVar15,param_4);
    puVar5 = (undefined8 *)FUN_1437143d0(param_2,2);
    *puVar5 = uVar6;
  }
  if ((~(byte)*param_2 & 1) != 0) goto switchD_14374da69_caseD_7;
  uVar15 = uVar24;
  if (((*param_3 >> 0x17 & 1) != 0) &&
     (puVar11 = (ulonglong *)FUN_1437143d0(param_3,0x800000), puVar11 != (ulonglong *)0x0)) {
    uVar15 = *puVar11;
  }
  puVar11 = (ulonglong *)FUN_1437143d0(param_2,0x800000);
  *puVar11 = (ulonglong)(uint)((int)((uVar15 & 0xf0000000) >> 0x1c) << 0x1c);
  plVar8 = (longlong *)FUN_1437149e0(param_3,local_238,&DAT_1467e47c0);
  puVar5 = (undefined8 *)*plVar8;
  if ((local_228 & 1) != 0) {
    FUN_143733a60(local_228 & 0xfffffffffffffffe);
  }
  if (puVar5 != (undefined8 *)0x0) {
    (*(code *)*puVar5)(param_2,param_3,param_1 + 8);
    goto switchD_14374da69_caseD_7;
  }
  puVar5 = (undefined8 *)FUN_143714490(param_3,1);
  uVar16 = 0;
  bVar1 = 0;
  if (puVar5 != (undefined8 *)0x0) {
    bVar1 = (byte)*puVar5;
  }
  if (((bVar1 & 0xf) == 7) ||
     ((*(char *)(param_1 + 4) == '\0' && (((uint)*param_2 >> 0x1a & 1) != 0))))
  goto switchD_14374da69_caseD_7;
  puVar5 = (undefined8 *)FUN_143714490(param_3,1);
  if (puVar5 != (undefined8 *)0x0) {
    uVar16 = (uint)*puVar5;
  }
  switch(uVar16 & 0xf) {
  case 2:
    if (*(char *)(param_1 + 6) == '\0') goto switchD_14374da69_caseD_4;
    uVar3 = 1;
    uVar2 = uVar3;
    break;
  case 3:
    uVar15 = uVar24;
    if (((*param_3 & 1) != 0) &&
       (puVar11 = (ulonglong *)FUN_1437143d0(param_3,1), puVar11 != (ulonglong *)0x0)) {
      uVar15 = *puVar11;
    }
    if ((((byte)uVar15 & 0xe0) == 0x20) && ((uint)uVar15 >> 0x10 != 0)) {
      uVar15 = uVar24;
      if (((*param_3 >> 0x17 & 1) != 0) &&
         (puVar11 = (ulonglong *)FUN_1437143d0(param_3,0x800000), puVar11 != (ulonglong *)0x0)) {
        uVar15 = *puVar11;
      }
      puVar11 = (ulonglong *)FUN_1437143d0(param_2,0x800000);
      *puVar11 = uVar15;
      goto switchD_14374da69_caseD_7;
    }
  case 6:
    uVar3 = *(undefined4 *)(param_1 + 8);
    uVar2 = uVar3;
    break;
  case 4:
  case 5:
switchD_14374da69_caseD_4:
    uVar2 = FUN_143714d40(param_3);
    uVar3 = FUN_1437152f0(param_3);
    break;
  default:
    goto switchD_14374da69_caseD_7;
  case 8:
    if (((((*param_3 & 1) == 0) ||
         (plVar8 = (longlong *)FUN_1437143d0(param_3,1), plVar8 == (longlong *)0x0)) ||
        (0xfe < *plVar8 - 1U)) || (*(char *)(param_1 + 4) == '\0')) goto switchD_14374da69_caseD_7;
    uVar3 = 4;
    uVar2 = uVar3;
  }
  FUN_14374a630(param_2,uVar3,uVar2);
switchD_14374da69_caseD_7:
  if ((uVar4 >> 0x1c & 1) != 0) {
    if (((*param_3 >> 0x1c & 1) != 0) &&
       (puVar11 = (ulonglong *)FUN_1437143d0(param_3,0x10000000), puVar11 != (ulonglong *)0x0)) {
      uVar24 = *puVar11;
    }
    uVar6 = FUN_14370c890(uVar24,param_1 + 0x48);
    puVar5 = (undefined8 *)FUN_1437143d0(param_2,0x10000000);
    *puVar5 = uVar6;
  }
  return;
}



// FUNCTION 14374dbd0 FUN_14374dbd0 body=7 status=ok
// SIG undefined FUN_14374dbd0(void)

undefined4 FUN_14374dbd0(longlong *param_1)

{
  return *(undefined4 *)(*param_1 + 8);
}



// FUNCTION 14374dbe0 EVP_CIPHER_CTX_iv_length body=7 status=ok
// SIG undefined EVP_CIPHER_CTX_iv_length(void)

undefined4 EVP_CIPHER_CTX_iv_length(longlong *param_1)

{
  return *(undefined4 *)(*param_1 + 0xc);
}



// FUNCTION 14374dbf0 FUN_14374dbf0 body=318 status=ok
// SIG undefined FUN_14374dbf0(void)

ulonglong FUN_14374dbf0(longlong *param_1,longlong *param_2,ulonglong *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(param_1 + 2);
  }
  if (*param_2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar3 = FUN_143740180();
    uVar8 = (ulonglong)uVar3;
  }
  iVar4 = *(int *)(param_1[2] + 4 + (*(uint *)(param_1 + 3) & uVar8) * 8);
  puVar1 = (undefined4 *)(param_1[2] + (*(uint *)(param_1 + 3) & uVar8) * 8);
  while( true ) {
    if (iVar4 < 0) {
      lVar2 = param_1[1];
      *puVar1 = (int)uVar8;
      puVar1[1] = (int)lVar2;
      uVar5 = FUN_143703a50();
      if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
        FUN_14370c460(uVar5,param_1,0x10);
      }
      plVar6 = (longlong *)((longlong)(int)param_1[1] * 0x10 + *param_1);
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      *plVar6 = *param_2;
      uVar8 = *param_3;
      plVar6[1] = uVar8;
      return CONCAT71((int7)(uVar8 >> 8),1);
    }
    lVar2 = *(longlong *)((longlong)(int)puVar1[1] * 0x10 + *param_1);
    if ((lVar2 == *param_2) ||
       (((lVar2 != 0 && (*param_2 != 0)) && (iVar4 = hkString::strCmp(), iVar4 == 0)))) break;
    lVar2 = param_1[2];
    uVar7 = ((longlong)puVar1 - lVar2 >> 3) + 1U & (longlong)(int)param_1[3];
    iVar4 = *(int *)(lVar2 + 4 + uVar7 * 8);
    puVar1 = (undefined4 *)(lVar2 + uVar7 * 8);
  }
  uVar8 = *param_3;
  *(ulonglong *)(*param_1 + 8 + (longlong)(int)puVar1[1] * 0x10) = uVar8;
  return uVar8 & 0xffffffffffffff00;
}



// FUNCTION 14374dd30 FUN_14374dd30 body=152 status=ok
// SIG undefined FUN_14374dd30(void)

undefined8 FUN_14374dd30(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  longlong local_res10;
  
  uVar1 = FUN_14374cd10();
  local_res8 = uVar1;
  local_res10 = param_2;
  uVar2 = FUN_143703a50();
  FUN_14372d6e0(param_1 + 0x18,uVar2,&local_res10,&local_res8);
  if (param_3 != 0) {
    local_res8 = uVar1;
    local_res10 = param_3;
    uVar2 = FUN_143703a50();
    FUN_14372d6e0(param_1 + 0x18,uVar2,&local_res10,&local_res8);
  }
  FUN_14374d3e0(param_1,uVar1,param_2,param_4);
  return uVar1;
}



// FUNCTION 14374ddd0 FUN_14374ddd0 body=63 status=ok
// SIG undefined FUN_14374ddd0(void)

undefined4 * FUN_14374ddd0(undefined4 *param_1)

{
  *param_1 = 4;
  param_1[4] = 0;
  param_1[1] = 1;
  *(undefined8 *)(param_1 + 2) = 1;
  param_1[5] = 1;
  param_1[6] = 1;
  param_1[7] = 1;
  *(undefined8 *)(param_1 + 8) = 1;
  *(undefined1 *)(param_1 + 10) = 1;
  return param_1;
}



// FUNCTION 14374de10 FUN_14374de10 body=83 status=ok
// SIG undefined FUN_14374de10(void)

void FUN_14374de10(ulonglong *param_1,uint *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint local_res8 [2];
  
  uVar1 = *param_2;
  uVar2 = *param_1;
  local_res8[0] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  if (uVar2 + 4 <= param_1[1]) {
    FGenericPlatformString::Memcpy();
    *param_1 = uVar2 + 4;
    return;
  }
  hkIo::WriteBuffer::implWriteRaw(param_1,local_res8,4);
  return;
}



// FUNCTION 14374de70 FUN_14374de70 body=84 status=ok
// SIG undefined FUN_14374de70(void)

void FUN_14374de70(longlong param_1,longlong param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  uint local_res8 [8];
  
  uVar1 = *param_3;
  lVar2 = param_2 - *(longlong *)(param_1 + 0x20);
  local_res8[0] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  if ((-1 < lVar2) &&
     (lVar2 = *(longlong *)(param_1 + 0x10) + lVar2, lVar2 + 4U <= *(ulonglong *)(param_1 + 8))) {
    FGenericPlatformString::Memcpy(lVar2,local_res8,4);
    return;
  }
  hkIo::WriteBuffer::implWriteRawAt(param_1,param_2,local_res8,4);
  return;
}



// FUNCTION 14374ded0 FUN_14374ded0 body=81 status=ok
// SIG undefined FUN_14374ded0(void)

void FUN_14374ded0(longlong *param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint local_res8 [8];
  
  iVar4 = (int)param_1[1] + -1;
  uVar1 = *(uint *)(*param_1 + (longlong)iVar4 * 4);
  *(int *)(param_1 + 1) = iVar4;
  piVar2 = (int *)param_1[10];
  uVar3 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
          uVar1 << 0x18 & 0x3fffffff;
  local_res8[0] = ((piVar2[8] - piVar2[4]) - uVar3) + *piVar2 | uVar1 << 0x18 & 0xc0000000;
  FUN_14374de70(piVar2,uVar3,local_res8);
  return;
}



// FUNCTION 14374df30 FUN_14374df30 body=141 status=ok
// SIG undefined FUN_14374df30(void)

void FUN_14374df30(longlong *param_1,int param_2,undefined4 param_3)

{
  uint *puVar1;
  int *piVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  
  piVar2 = (int *)param_1[10];
  uVar4 = (piVar2[8] - piVar2[4]) + *piVar2;
  local_res18[0] = param_3;
  uVar3 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar3,param_1,4);
  }
  puVar1 = (uint *)(*param_1 + (longlong)(int)param_1[1] * 4);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = (uVar4 | param_2 << 0x1e) >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
              uVar4 * 0x1000000;
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  local_res10[0] = 0xffffffff;
  FUN_14374de10(param_1[10],local_res10);
  FUN_14374de10(param_1[10],local_res18);
  return;
}



// FUNCTION 14374dfc0 FUN_14374dfc0 body=111 status=ok
// SIG undefined FUN_14374dfc0(void)

void FUN_14374dfc0(longlong param_1,undefined4 param_2,undefined8 param_3,int param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  FUN_14374df30(param_1,1,param_2);
  puVar1 = *(ulonglong **)(param_1 + 0x50);
  uVar2 = *puVar1;
  if (puVar1[1] < uVar2 + (longlong)param_4) {
    hkIo::WriteBuffer::implWriteRaw(puVar1,param_3);
  }
  else {
    FGenericPlatformString::Memcpy();
    *puVar1 = uVar2 + (longlong)param_4;
  }
  FUN_14374ded0(param_1);
  return;
}



// FUNCTION 14374e030 FUN_14374e030 body=133 status=ok
// SIG undefined FUN_14374e030(void)

undefined1 * FUN_14374e030(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  
  uVar2 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar2,param_1,0x30);
  }
  puVar3 = (undefined1 *)((longlong)(int)param_1[1] * 0x30 + *param_1);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 2) = 0;
    *(undefined8 *)(puVar3 + 8) = 0;
  }
  lVar1 = param_1[1];
  *(int *)(param_1 + 1) = (int)lVar1 + 1;
  puVar3 = (undefined1 *)((longlong)(int)lVar1 * 0x30 + *param_1);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 1;
    *(undefined4 *)(puVar3 + 2) = 0;
    *(undefined8 *)(puVar3 + 8) = 0;
    *(undefined8 *)(puVar3 + 0x10) = 0;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    *(undefined8 *)(puVar3 + 0x20) = 0;
    return puVar3;
  }
  return (undefined1 *)0x0;
}



// FUNCTION 14374e0c0 FUN_14374e0c0 body=128 status=ok
// SIG undefined FUN_14374e0c0(void)

undefined1 * FUN_14374e0c0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  
  uVar2 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar2,param_1,0x30);
  }
  puVar3 = (undefined1 *)((longlong)(int)param_1[1] * 0x30 + *param_1);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 2) = 0;
    *(undefined8 *)(puVar3 + 8) = 0;
  }
  lVar1 = param_1[1];
  *(int *)(param_1 + 1) = (int)lVar1 + 1;
  puVar3 = (undefined1 *)((longlong)(int)lVar1 * 0x30 + *param_1);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 2) = 0;
    *(undefined8 *)(puVar3 + 8) = 0;
    *(undefined8 *)(puVar3 + 0x10) = 0;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    return puVar3;
  }
  return (undefined1 *)0x0;
}



// FUNCTION 14374e140 FUN_14374e140 body=133 status=ok
// SIG undefined FUN_14374e140(void)

undefined1 * FUN_14374e140(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  
  uVar2 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar2,param_1,0x30);
  }
  puVar3 = (undefined1 *)((longlong)(int)param_1[1] * 0x30 + *param_1);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 2) = 0;
    *(undefined8 *)(puVar3 + 8) = 0;
  }
  lVar1 = param_1[1];
  *(int *)(param_1 + 1) = (int)lVar1 + 1;
  puVar3 = (undefined1 *)((longlong)(int)lVar1 * 0x30 + *param_1);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 6;
    *(undefined4 *)(puVar3 + 2) = 0;
    *(undefined8 *)(puVar3 + 8) = 0;
    *(undefined8 *)(puVar3 + 0x10) = 0;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    *(undefined8 *)(puVar3 + 0x20) = 0;
    return puVar3;
  }
  return (undefined1 *)0x0;
}



// FUNCTION 14374e1d0 FUN_14374e1d0 body=115 status=ok
// SIG undefined FUN_14374e1d0(void)

undefined4 *
FUN_14374e1d0(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined2 param_4,
             longlong param_5,undefined2 param_6)

{
  undefined1 *puVar1;
  
  if ((param_5 == 0) && (*(char *)(*param_1 + 1) == '\0')) {
    *param_2 = 0;
  }
  else {
    puVar1 = (undefined1 *)FUN_14374e0c0(param_1[1]);
    *param_2 = 0;
    *puVar1 = 2;
    *(undefined2 *)(puVar1 + 4) = param_4;
    *(undefined2 *)(puVar1 + 2) = param_6;
    *(longlong *)(puVar1 + 0x10) = param_5;
    *(undefined8 *)(puVar1 + 0x18) = param_3;
  }
  return param_2;
}



// FUNCTION 14374e250 FUN_14374e250 body=115 status=ok
// SIG undefined FUN_14374e250(void)

undefined4 *
FUN_14374e250(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined2 param_4,
             longlong param_5,undefined2 param_6)

{
  undefined1 *puVar1;
  
  if ((param_5 == 0) && (*(char *)(*param_1 + 1) == '\0')) {
    *param_2 = 0;
  }
  else {
    puVar1 = (undefined1 *)FUN_14374e0c0(param_1[1]);
    *param_2 = 0;
    *puVar1 = 4;
    *(undefined2 *)(puVar1 + 4) = param_4;
    *(undefined2 *)(puVar1 + 2) = param_6;
    *(longlong *)(puVar1 + 0x10) = param_5;
    *(undefined8 *)(puVar1 + 0x18) = param_3;
  }
  return param_2;
}



// FUNCTION 14374e2d0 FUN_14374e2d0 body=115 status=ok
// SIG undefined FUN_14374e2d0(void)

undefined4 *
FUN_14374e2d0(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined2 param_4,
             longlong param_5,undefined2 param_6)

{
  undefined1 *puVar1;
  
  if ((param_5 == 0) && (*(char *)(*param_1 + 1) == '\0')) {
    *param_2 = 0;
  }
  else {
    puVar1 = (undefined1 *)FUN_14374e0c0(param_1[1]);
    *param_2 = 0;
    *puVar1 = 3;
    *(undefined2 *)(puVar1 + 4) = param_4;
    *(undefined2 *)(puVar1 + 2) = param_6;
    *(longlong *)(puVar1 + 0x10) = param_5;
    *(undefined8 *)(puVar1 + 0x18) = param_3;
  }
  return param_2;
}



// FUNCTION 14374e350 FUN_14374e350 body=115 status=ok
// SIG undefined FUN_14374e350(void)

undefined4 *
FUN_14374e350(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined2 param_4,
             longlong param_5,undefined2 param_6)

{
  undefined1 *puVar1;
  
  if ((param_5 == 0) && (*(char *)(*param_1 + 1) == '\0')) {
    *param_2 = 0;
  }
  else {
    puVar1 = (undefined1 *)FUN_14374e0c0(param_1[1]);
    *param_2 = 0;
    *puVar1 = 5;
    *(undefined2 *)(puVar1 + 4) = param_4;
    *(undefined2 *)(puVar1 + 2) = param_6;
    *(longlong *)(puVar1 + 0x10) = param_5;
    *(undefined8 *)(puVar1 + 0x18) = param_3;
  }
  return param_2;
}



// FUNCTION 14374e3d0 FUN_14374e3d0 body=115 status=ok
// SIG undefined FUN_14374e3d0(void)

undefined4 *
FUN_14374e3d0(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined2 param_4,
             longlong param_5,undefined2 param_6)

{
  undefined1 *puVar1;
  
  if ((param_5 == 0) && (*(char *)(*param_1 + 1) == '\0')) {
    *param_2 = 0;
  }
  else {
    puVar1 = (undefined1 *)FUN_14374e0c0(param_1[1]);
    *param_2 = 0;
    *puVar1 = 7;
    *(undefined2 *)(puVar1 + 4) = param_4;
    *(undefined2 *)(puVar1 + 2) = param_6;
    *(longlong *)(puVar1 + 0x10) = param_5;
    *(undefined8 *)(puVar1 + 0x18) = param_3;
  }
  return param_2;
}



// FUNCTION 14374e450 FUN_14374e450 body=217 status=ok
// SIG undefined FUN_14374e450(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14374e450(undefined8 param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b83398) {
    _Init_thread_header(&DAT_146b83398);
    if (DAT_146b83398 == -1) {
      _DAT_146b833e0 = FUN_14374f880;
      _DAT_146b833d8 = FUN_14374fb80;
      _DAT_146b833d0 = FUN_14374e350;
      _DAT_146b833c8 = FUN_14374e250;
      _DAT_146b833c0 = FUN_14374e2d0;
      _DAT_146b833b8 = FUN_14374e3d0;
      _DAT_146b833b0 = FUN_14374e1d0;
      _DAT_146b833a8 = FUN_14374f9e0;
      DAT_146b833a0 = FUN_143750060;
      _Init_thread_footer(&DAT_146b83398);
    }
  }
  return param_1;
}



// FUNCTION 14374e530 FUN_14374e530 body=60 status=ok
// SIG undefined FUN_14374e530(void)

undefined4 * FUN_14374e530(undefined4 *param_1)

{
  *param_1 = 0x101;
  *(undefined2 *)(param_1 + 1) = 0x101;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  param_1[5] = 0x80000000;
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  param_1[9] = 0xffffffff;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x80000000;
  return param_1;
}



// FUNCTION 14374e570 FUN_14374e570 body=475 status=ok
// SIG undefined FUN_14374e570(void)

void FUN_14374e570(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar7;
  
  uVar9 = 0;
  uVar6 = 0;
  if (-1 < *(int *)(param_1 + 0x24)) {
    plVar4 = *(longlong **)(param_1 + 0x18);
    uVar5 = uVar9;
    uVar7 = uVar9;
    do {
      uVar6 = (uint)uVar7;
      if ((*plVar4 != -1) || (plVar4[1] != -1)) break;
      uVar6 = uVar6 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar5 = uVar5 + 1;
      plVar4 = plVar4 + 3;
    } while ((longlong)uVar5 <= (longlong)*(int *)(param_1 + 0x24));
  }
  if ((int)uVar6 <= *(int *)(param_1 + 0x24)) {
    do {
      puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + 0x10 + (longlong)(int)uVar6 * 0x18);
      if (puVar1 != (undefined8 *)0x0) {
        uVar2 = FUN_143703a50();
        *(undefined4 *)(puVar1 + 1) = 0;
        if (-1 < (int)*(uint *)((longlong)puVar1 + 0xc)) {
          FUN_143702e10(uVar2,*puVar1,0x30,*(uint *)((longlong)puVar1 + 0xc) & 0x3fffffff);
        }
        *puVar1 = 0;
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0x80000000;
        pvVar3 = TlsGetValue(DAT_146b7bf70);
        if (pvVar3 == (LPVOID)0x0) {
          pvVar3 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar3 + 0x58),puVar1,0x10);
      }
      uVar6 = uVar6 + 1;
      if ((int)uVar6 <= *(int *)(param_1 + 0x24)) {
        lVar8 = (longlong)(int)uVar6;
        plVar4 = (longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 0x18);
        do {
          if ((*plVar4 != -1) || (plVar4[1] != -1)) break;
          uVar6 = uVar6 + 1;
          lVar8 = lVar8 + 1;
          plVar4 = plVar4 + 3;
        } while (lVar8 <= *(int *)(param_1 + 0x24));
      }
    } while ((int)uVar6 <= *(int *)(param_1 + 0x24));
  }
  uVar5 = uVar9;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      puVar1 = *(undefined8 **)(uVar5 + *(longlong *)(param_1 + 8));
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      uVar6 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar6;
      uVar5 = uVar5 + 8;
    } while ((int)uVar6 < *(int *)(param_1 + 0x10));
  }
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x34)) {
    FUN_143702e10(uVar2,*(undefined8 *)(param_1 + 0x28),0x10,*(uint *)(param_1 + 0x34) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  uVar2 = FUN_143703a50();
  FUN_14374e910(param_1 + 0x18,uVar2);
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x14)) {
    FUN_143702e10(uVar2,*(undefined8 *)(param_1 + 8),8,*(uint *)(param_1 + 0x14) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  return;
}



// FUNCTION 14374e750 FUN_14374e750 body=275 status=ok
// SIG undefined FUN_14374e750(void)

void FUN_14374e750(longlong *param_1,undefined8 param_2,longlong *param_3,int *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  
  if (*(int *)((longlong)param_1 + 0xc) < (int)param_1[1] * 2) {
    FUN_14374f700(param_1,local_res8,param_2,*(int *)((longlong)param_1 + 0xc) * 2 + 2);
  }
  *param_4 = 1;
  lVar1 = *param_3;
  lVar2 = param_3[1];
  iVar4 = (int)((ulonglong)lVar1 >> 0x20);
  uVar6 = iVar4 * -0x61c8864f;
  uVar7 = (int)lVar1 * -0x61c8864f;
  uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | iVar4 * -0x4f000000;
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | (int)lVar1 * -0x4f000000
  ;
  iVar4 = (int)((ulonglong)lVar2 >> 0x20);
  uVar8 = iVar4 * -0x61c8864f;
  uVar6 = uVar6 * 0x40 + uVar7 + (uVar7 >> 2) + 0x9e3779b9 ^ uVar6;
  uVar7 = (int)lVar2 * -0x61c8864f;
  uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | iVar4 * -0x4f000000;
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | (int)lVar2 * -0x4f000000
  ;
  uVar8 = uVar7 + uVar8 * 0x40 + (uVar7 >> 2) + 0x9e3779b9 ^ uVar8;
  uVar6 = (uVar8 >> 2) + 0x9e3779b9 + uVar8 + uVar6 * 0x40 ^ uVar6;
  lVar3 = *param_1;
  while( true ) {
    uVar6 = uVar6 & *(uint *)((longlong)param_1 + 0xc);
    uVar5 = (ulonglong)uVar6;
    if ((*(longlong *)(lVar3 + uVar5 * 0x18) == -1) &&
       (*(longlong *)(lVar3 + 8 + uVar5 * 0x18) == -1)) goto LAB_14374e84e;
    if ((*(longlong *)(lVar3 + uVar5 * 0x18) == lVar1) &&
       (*(longlong *)(lVar3 + 8 + uVar5 * 0x18) == lVar2)) break;
    uVar6 = uVar6 + 1;
  }
  *param_4 = 0;
LAB_14374e84e:
  *(int *)(param_1 + 1) = (int)param_1[1] + *param_4;
  return;
}



// FUNCTION 14374e870 FUN_14374e870 body=78 status=ok
// SIG undefined FUN_14374e870(void)

void FUN_14374e870(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x10) == (*(uint *)(param_1 + 0x14) & 0x3fffffff)) {
    FUN_14370c460(uVar1,(longlong *)(param_1 + 8),8);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)*(int *)(param_1 + 0x10) * 8) = param_2;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}



// FUNCTION 14374e8c0 FUN_14374e8c0 body=71 status=ok
// SIG undefined FUN_14374e8c0(void)

void FUN_14374e8c0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(int *)((longlong)param_1 + 0xc) != 0) &&
     (iVar2 = *(int *)((longlong)param_1 + 0xc) + 1, lVar4 = (longlong)iVar2, 0 < iVar2)) {
    lVar3 = 0;
    do {
      lVar1 = *param_1;
      if ((*(longlong *)(lVar3 + lVar1) != -1) || (*(longlong *)(lVar3 + 8 + lVar1) != -1)) {
        *(undefined8 *)(lVar3 + lVar1) = 0xffffffffffffffff;
        *(undefined8 *)(lVar3 + 8 + lVar1) = 0xffffffffffffffff;
      }
      lVar3 = lVar3 + 0x18;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0x80000000;
  return;
}



// FUNCTION 14374e910 FUN_14374e910 body=84 status=ok
// SIG undefined FUN_14374e910(void)

void FUN_14374e910(longlong *param_1,longlong *param_2)

{
  FUN_14374e8c0();
  if ((*param_1 != 0) && (-1 < (int)param_1[1])) {
    (**(code **)(*param_2 + 0x10))(param_2,*param_1,(*(int *)((longlong)param_1 + 0xc) + 1) * 0x18);
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 14374e970 FUN_14374e970 body=268 status=ok
// SIG undefined FUN_14374e970(void)

void FUN_14374e970(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  LPVOID pvVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)(param_1 + 0x28);
  lVar5 = (longlong)*(int *)(param_1 + 0x30) * 0x10 + lVar6;
  if (lVar6 == lVar5) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    return;
  }
  do {
    uVar2 = FUN_14374f170(param_1 + 0x18,lVar6);
    puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + 0x10 + (longlong)(int)uVar2 * 0x18);
    if (puVar1 != (undefined8 *)0x0) {
      uVar3 = FUN_143703a50();
      *(undefined4 *)(puVar1 + 1) = 0;
      if (-1 < (int)*(uint *)((longlong)puVar1 + 0xc)) {
        FUN_143702e10(uVar3,*puVar1,0x30,*(uint *)((longlong)puVar1 + 0xc) & 0x3fffffff);
      }
      *puVar1 = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0x80000000;
      pvVar4 = TlsGetValue(DAT_146b7bf70);
      if (pvVar4 == (LPVOID)0x0) {
        pvVar4 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar4 + 0x58),puVar1,0x10);
    }
    FUN_14374f510(param_1 + 0x18,uVar2);
    lVar6 = lVar6 + 0x10;
  } while (lVar6 != lVar5);
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}



// FUNCTION 14374ea80 FUN_14374ea80 body=1133 status=ok
// SIG undefined FUN_14374ea80(void)

longlong *
FUN_14374ea80(undefined8 *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  bool bVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  LPVOID pvVar5;
  undefined8 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 *local_res8;
  undefined8 in_stack_ffffffffffffff50;
  uint uVar13;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  
  uVar13 = (uint)((ulonglong)in_stack_ffffffffffffff50 >> 0x20);
  puVar11 = (undefined8 *)0x0;
  local_res8 = (undefined8 *)0x0;
  local_88 = param_3;
  uStack_80 = param_4;
  plVar3 = (longlong *)FUN_14374f250(param_1 + 3,&local_88,&local_res8);
  local_78 = *plVar3;
  if (local_78 == 0) {
    pvVar5 = TlsGetValue(DAT_146b7bf70);
    if (pvVar5 == (LPVOID)0x0) {
      pvVar5 = DAT_146b7bf68;
    }
    puVar6 = (undefined8 *)
             (**(code **)(**(longlong **)((longlong)pvVar5 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar5 + 0x58),0x10);
    if (puVar6 != (undefined8 *)0x0) {
      puVar6[1] = 0;
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)((longlong)puVar6 + 0xc) = 0x80000000;
      puVar11 = puVar6;
    }
    puVar7 = (uint *)FUN_143715390(param_3,&local_res8);
    if (((*puVar7 >> 0xc & 1) == 0) &&
       (puVar7 = (uint *)FUN_143715390(param_4,&local_res8), (*puVar7 >> 0xc & 1) == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    local_res8 = puVar11;
    uVar8 = FUN_143703a50();
    FUN_14374f360(param_1 + 3,uVar8,&local_88,&local_res8);
    FUN_14374e450(&local_70);
    local_70 = param_1;
    local_68 = puVar11;
    local_60 = param_3;
    local_58 = param_4;
    if (*(char *)((longlong)param_1 + 2) != '\0') {
      FUN_143715390(param_4,&local_res8);
    }
    puVar6 = (undefined8 *)FUN_143714490(param_4,1);
    uVar2 = 0;
    if (puVar6 != (undefined8 *)0x0) {
      uVar2 = (uint)*puVar6;
    }
    piVar9 = (int *)(*(code *)(&DAT_146b833a0)[uVar2 & 0xf])
                              (&local_70,&local_98,param_4,0,param_3,(ulonglong)uVar13 << 0x20);
    if (*piVar9 < 0) {
      FUN_14374f4c0(param_1 + 3,&local_res8,&local_88);
LAB_14374ec98:
      *param_2 = 0;
      if (puVar11 != (undefined8 *)0x0) {
        uVar8 = FUN_143703a50();
        *(undefined4 *)(puVar11 + 1) = 0;
        if (-1 < (int)*(uint *)((longlong)puVar11 + 0xc)) {
          FUN_143702e10(uVar8,*puVar11,0x30,*(uint *)((longlong)puVar11 + 0xc) & 0x3fffffff);
        }
        *puVar11 = 0;
        *(undefined4 *)((longlong)puVar11 + 0xc) = 0x80000000;
        pvVar5 = TlsGetValue(DAT_146b7bf70);
        if (pvVar5 == (LPVOID)0x0) {
          pvVar5 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar5 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar5 + 0x58),puVar11,0x10);
      }
    }
    else {
      iVar12 = 0;
      if (0 < *(int *)(param_1 + 2)) {
        lVar4 = 0;
        do {
          piVar9 = (int *)(**(code **)(**(longlong **)(lVar4 + param_1[1]) + 8))
                                    (*(longlong **)(lVar4 + param_1[1]),&local_res8,puVar11,param_3,
                                     param_4);
          if (*piVar9 < 0) {
            FUN_14374f4c0(param_1 + 3,&local_res8,&local_88);
            if (1 < DAT_146b83328) {
              local_res8 = puVar11;
              local_98 = param_3;
              local_90 = param_4;
              local_88 = param_1;
              FUN_14373a730(&local_70,&DAT_146b83320,2);
              lVar4 = FUN_14373bbd0(&local_70,"{}, Compiler could not convert types {}->{}, p = {}",
                                    &DAT_145b9b0f8,&local_88,&local_98,&local_90,&local_res8,0);
              *(char **)(lVar4 + 0x20) = "Reflect\\TypeVm\\hkTypeVmCompiler.cpp";
              *(undefined8 *)(lVar4 + 0x28) = 0x17e;
              FUN_14373a950(&local_70);
            }
            goto LAB_14374ec98;
          }
          iVar12 = iVar12 + 1;
          lVar4 = lVar4 + 8;
        } while (iVar12 < *(int *)(param_1 + 2));
      }
      if (bVar1) {
        uVar8 = FUN_143703a50();
        if (*(uint *)(param_1 + 6) == (*(uint *)((longlong)param_1 + 0x34) & 0x3fffffff)) {
          FUN_14370c460(uVar8,param_1 + 5,0x10);
        }
        puVar10 = (undefined4 *)((longlong)*(int *)(param_1 + 6) * 0x10 + param_1[5]);
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = (undefined4)local_88;
          puVar10[1] = local_88._4_4_;
          puVar10[2] = (undefined4)uStack_80;
          puVar10[3] = uStack_80._4_4_;
        }
        *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
      }
      if (4 < DAT_146b83328) {
        local_res8 = puVar11;
        local_98 = param_1;
        local_90 = param_3;
        local_88 = param_4;
        FUN_14373a730(&local_70,&DAT_146b83320,5);
        lVar4 = FUN_14373bbd0(&local_70,"{} Type newly compiled {}->{}, p = {}",&DAT_145b9b0f8,
                              &local_98,&local_90,&local_88,&local_res8,0);
        *(char **)(lVar4 + 0x20) = "Reflect\\TypeVm\\hkTypeVmCompiler.cpp";
        *(undefined8 *)(lVar4 + 0x28) = 0x188;
        FUN_14373a950(&local_70);
      }
      *param_2 = (longlong)puVar11;
    }
  }
  else {
    if (4 < DAT_146b83328) {
      local_res8 = param_4;
      local_98 = param_3;
      local_90 = param_1;
      FUN_14373a730(&local_70,&DAT_146b83320,5);
      lVar4 = FUN_14373bbd0(&local_70,"{}, Type returned from cache from {}->{}, p = {}",
                            &DAT_145b9b0f8,&local_90,&local_98,&local_res8,&local_78,0);
      *(char **)(lVar4 + 0x20) = "Reflect\\TypeVm\\hkTypeVmCompiler.cpp";
      *(undefined8 *)(lVar4 + 0x28) = 0x168;
      FUN_14373a950(&local_70);
    }
    *param_2 = local_78;
  }
  return param_2;
}



// FUNCTION 14374eef0 FUN_14374eef0 body=628 status=ok
// SIG undefined FUN_14374eef0(void)

longlong * FUN_14374eef0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  uint uVar1;
  longlong *plVar2;
  LPVOID pvVar3;
  undefined8 *puVar4;
  uint *puVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *local_res8;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  puVar8 = (undefined8 *)0x0;
  local_res8 = (undefined8 *)0x0;
  local_68 = param_3;
  uStack_60 = param_3;
  plVar2 = (longlong *)FUN_14374f250(param_1 + 0x18,&local_68,&local_res8);
  if (*plVar2 != 0) {
    *param_2 = *plVar2;
    return param_2;
  }
  pvVar3 = TlsGetValue(DAT_146b7bf70);
  if (pvVar3 == (LPVOID)0x0) {
    pvVar3 = DAT_146b7bf68;
  }
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar3 + 0x58),0x10);
  uVar10 = 0;
  puVar9 = puVar8;
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = 0;
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 1) = 0;
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0x80000000;
    puVar9 = puVar4;
  }
  puVar5 = (uint *)FUN_143715390(param_3,&local_res8);
  uVar1 = *puVar5;
  local_res8 = puVar9;
  uVar6 = FUN_143703a50();
  FUN_14374f360(param_1 + 0x18,uVar6,&local_68,&local_res8);
  FUN_14374e450(&local_58);
  local_58 = param_1;
  local_50 = puVar9;
  local_48 = param_3;
  local_40 = param_3;
  if (*(char *)(param_1 + 2) != '\0') {
    FUN_143715390(param_3,&local_res8);
  }
  puVar4 = (undefined8 *)FUN_143714490(param_3,1);
  if (puVar4 != (undefined8 *)0x0) {
    uVar10 = (uint)*puVar4;
  }
  (*(code *)(&DAT_146b833a0)[uVar10 & 0xf])(&local_58,&local_res8,param_3,0,param_3,0);
  puVar4 = puVar8;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      plVar2 = *(longlong **)((longlong)puVar8 + *(longlong *)(param_1 + 8));
      piVar7 = (int *)(**(code **)(*plVar2 + 8))(plVar2,&local_res8,puVar9,param_3,param_3);
      if (*piVar7 < 0) {
        FUN_14374f4c0(param_1 + 0x18,&local_res8,&local_68);
        *param_2 = 0;
        if (puVar9 == (undefined8 *)0x0) {
          return param_2;
        }
        uVar6 = FUN_143703a50();
        *(undefined4 *)(puVar9 + 1) = 0;
        if (-1 < (int)*(uint *)((longlong)puVar9 + 0xc)) {
          FUN_143702e10(uVar6,*puVar9,0x30,*(uint *)((longlong)puVar9 + 0xc) & 0x3fffffff);
        }
        *puVar9 = 0;
        *(undefined4 *)((longlong)puVar9 + 0xc) = 0x80000000;
        pvVar3 = TlsGetValue(DAT_146b7bf70);
        if (pvVar3 == (LPVOID)0x0) {
          pvVar3 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar3 + 0x58),puVar9,0x10);
        return param_2;
      }
      uVar10 = (int)puVar4 + 1;
      puVar8 = puVar8 + 1;
      puVar4 = (undefined8 *)(ulonglong)uVar10;
    } while ((int)uVar10 < *(int *)(param_1 + 0x10));
  }
  if ((uVar1 >> 0xc & 1) != 0) {
    uVar6 = FUN_143703a50();
    if (*(uint *)(param_1 + 0x30) == (*(uint *)(param_1 + 0x34) & 0x3fffffff)) {
      FUN_14370c460(uVar6,param_1 + 0x28,0x10);
    }
    puVar8 = (undefined8 *)
             ((longlong)*(int *)(param_1 + 0x30) * 0x10 + *(longlong *)(param_1 + 0x28));
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = local_68;
      puVar8[1] = uStack_60;
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  }
  *param_2 = (longlong)puVar9;
  return param_2;
}



// FUNCTION 14374f170 FUN_14374f170 body=219 status=ok
// SIG undefined FUN_14374f170(void)

ulonglong FUN_14374f170(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)uVar1 < 1) {
LAB_14374f23a:
    uVar6 = (ulonglong)(int)(uVar1 + 1);
  }
  else {
    lVar2 = *param_2;
    lVar3 = param_2[1];
    iVar5 = (int)((ulonglong)lVar2 >> 0x20);
    uVar8 = iVar5 * -0x61c8864f;
    uVar9 = (int)lVar2 * -0x61c8864f;
    uVar7 = (int)lVar3 * -0x61c8864f;
    uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | iVar5 * -0x4f000000;
    uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
            (int)lVar2 * -0x4f000000;
    uVar8 = uVar9 + uVar8 * 0x40 + (uVar9 >> 2) + 0x9e3779b9 ^ uVar8;
    iVar5 = (int)((ulonglong)lVar3 >> 0x20);
    uVar9 = iVar5 * -0x61c8864f;
    uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
            (int)lVar3 * -0x4f000000;
    uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | iVar5 * -0x4f000000;
    uVar9 = uVar7 + uVar9 * 0x40 + (uVar7 >> 2) + 0x9e3779b9 ^ uVar9;
    lVar4 = *param_1;
    uVar8 = (uVar9 >> 2) + 0x9e3779b9 + uVar9 + uVar8 * 0x40 ^ uVar8;
    while( true ) {
      uVar6 = (ulonglong)(uVar8 & uVar1);
      if ((*(longlong *)(lVar4 + uVar6 * 0x18) == -1) &&
         (*(longlong *)(lVar4 + 8 + uVar6 * 0x18) == -1)) goto LAB_14374f23a;
      if ((*(longlong *)(lVar4 + uVar6 * 0x18) == lVar2) &&
         (*(longlong *)(lVar4 + 8 + uVar6 * 0x18) == lVar3)) break;
      uVar8 = (uVar8 & uVar1) + 1;
    }
  }
  return uVar6;
}



// FUNCTION 14374f250 FUN_14374f250 body=260 status=ok
// SIG undefined FUN_14374f250(void)

longlong FUN_14374f250(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (0 < (int)*(uint *)((longlong)param_1 + 0xc)) {
    lVar2 = *param_2;
    lVar3 = param_2[1];
    iVar5 = (int)((ulonglong)lVar2 >> 0x20);
    uVar7 = iVar5 * -0x61c8864f;
    uVar8 = (int)lVar2 * -0x61c8864f;
    uVar6 = (int)lVar3 * -0x61c8864f;
    uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | iVar5 * -0x4f000000;
    uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
            (int)lVar2 * -0x4f000000;
    uVar7 = uVar8 + uVar7 * 0x40 + (uVar8 >> 2) + 0x9e3779b9 ^ uVar7;
    iVar5 = (int)((ulonglong)lVar3 >> 0x20);
    uVar8 = iVar5 * -0x61c8864f;
    uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
            (int)lVar3 * -0x4f000000;
    uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | iVar5 * -0x4f000000;
    uVar8 = uVar6 + uVar8 * 0x40 + (uVar6 >> 2) + 0x9e3779b9 ^ uVar8;
    lVar4 = *param_1;
    uVar7 = (uVar8 >> 2) + 0x9e3779b9 + uVar8 + uVar7 * 0x40 ^ uVar7;
    while( true ) {
      uVar7 = uVar7 & *(uint *)((longlong)param_1 + 0xc);
      lVar1 = (ulonglong)uVar7 * 0x18;
      if ((*(longlong *)(lVar1 + lVar4) == -1) && (*(longlong *)(lVar1 + 8 + lVar4) == -1)) break;
      if ((*(longlong *)(lVar1 + lVar4) == lVar2) && (*(longlong *)(lVar1 + 8 + lVar4) == lVar3)) {
        return lVar4 + 0x10 + lVar1;
      }
      uVar7 = uVar7 + 1;
    }
  }
  return param_3;
}



// FUNCTION 14374f360 FUN_14374f360 body=94 status=ok
// SIG undefined FUN_14374f360(void)

undefined4
FUN_14374f360(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 local_res8 [2];
  
  iVar2 = FUN_14374e750(param_1,param_2,param_3,local_res8);
  puVar3 = (undefined8 *)(*param_1 + (longlong)iVar2 * 0x18);
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = param_3[1];
    *puVar3 = *param_3;
    puVar3[1] = uVar1;
  }
  *(undefined8 *)((longlong)iVar2 * 0x18 + 0x10 + *param_1) = *param_4;
  return local_res8[0];
}



// FUNCTION 14374f3c0 FUN_14374f3c0 body=252 status=ok
// SIG undefined FUN_14374f3c0(void)

void FUN_14374f3c0(longlong *param_1,longlong param_2,undefined8 *param_3,longlong param_4)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  iVar3 = *(int *)(param_3 + 1);
  iVar12 = *(int *)(param_4 + 8) - iVar3;
  iVar9 = *(int *)(param_2 + 8) + 1;
  lVar11 = *(longlong *)*param_3;
  uVar7 = FUN_143703a50();
  lVar5 = param_1[1];
  uVar6 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
  iVar1 = (int)lVar5 + iVar12;
  if (((int)uVar6 < iVar1) && ((int)uVar6 < iVar1)) {
    iVar4 = iVar1;
    if (iVar1 < (int)(uVar6 * 2)) {
      iVar4 = uVar6 * 2;
    }
    FUN_14370c310(uVar7,param_1,iVar4,0x30);
  }
  lVar13 = (longlong)iVar12;
  lVar10 = (longlong)iVar9 * 0x30;
  FUN_143732890((lVar13 + iVar9) * 0x30 + *param_1,*param_1 + lVar10,
                (longlong)((int)lVar5 - iVar9) * 0x30);
  puVar8 = (undefined8 *)(*param_1 + lVar10);
  if (0 < lVar13) {
    lVar11 = ((longlong)iVar3 * 0x30 + lVar11) - (longlong)puVar8;
    do {
      if (puVar8 != (undefined8 *)0x0) {
        uVar7 = ((undefined8 *)(lVar11 + (longlong)puVar8))[1];
        *puVar8 = *(undefined8 *)(lVar11 + (longlong)puVar8);
        puVar8[1] = uVar7;
        puVar2 = (undefined8 *)(lVar11 + 0x10 + (longlong)puVar8);
        uVar7 = puVar2[1];
        puVar8[2] = *puVar2;
        puVar8[3] = uVar7;
        puVar2 = (undefined8 *)(lVar11 + 0x20 + (longlong)puVar8);
        uVar7 = puVar2[1];
        puVar8[4] = *puVar2;
        puVar8[5] = uVar7;
      }
      puVar8 = puVar8 + 6;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  *(int *)(param_1 + 1) = iVar1;
  return;
}



// FUNCTION 14374f4c0 FUN_14374f4c0 body=80 status=ok
// SIG undefined FUN_14374f4c0(void)

undefined4 * FUN_14374f4c0(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14374f170(param_1,param_3);
  if ((int)uVar1 <= *(int *)(param_1 + 0xc)) {
    FUN_14374f510(param_1,uVar1);
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14374f510 FUN_14374f510 body=401 status=ok
// SIG undefined FUN_14374f510(void)

void FUN_14374f510(longlong *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + (param_2 & 0xffffffff) * 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(lVar2 + 8 + (param_2 & 0xffffffff) * 0x18) = 0xffffffffffffffff;
  uVar11 = *(uint *)((longlong)param_1 + 0xc);
  uVar7 = (uint)param_2;
  uVar8 = uVar7;
  do {
    do {
      uVar8 = uVar11 + uVar8 & uVar11;
    } while (*(longlong *)(*param_1 + (ulonglong)uVar8 * 0x18) != -1);
  } while (*(longlong *)(*param_1 + 8 + (ulonglong)uVar8 * 0x18) != -1);
  uVar8 = uVar8 + 1 & uVar11;
  while( true ) {
    lVar3 = *param_1;
    uVar7 = uVar7 + 1 & uVar11;
    lVar2 = (ulonglong)uVar7 * 0x18;
    puVar1 = (undefined8 *)(lVar3 + lVar2);
    if ((*(longlong *)(lVar3 + lVar2) == -1) && (puVar1[1] == -1)) break;
    iVar4 = (int)*puVar1;
    uVar9 = iVar4 * -0x61c8864f;
    iVar5 = (int)((ulonglong)*puVar1 >> 0x20);
    uVar6 = iVar5 * -0x61c8864f;
    uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | iVar4 * -0x4f000000;
    uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | iVar5 * -0x4f000000;
    uVar6 = uVar6 * 0x40 + uVar9 + (uVar9 >> 2) + 0x9e3779b9 ^ uVar6;
    iVar4 = (int)puVar1[1];
    uVar9 = iVar4 * -0x61c8864f;
    iVar5 = (int)((ulonglong)puVar1[1] >> 0x20);
    uVar10 = iVar5 * -0x61c8864f;
    uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | iVar4 * -0x4f000000;
    uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
             iVar5 * -0x4f000000;
    uVar10 = uVar9 + uVar10 * 0x40 + (uVar9 >> 2) + 0x9e3779b9 ^ uVar10;
    uVar11 = ((uVar10 >> 2) + 0x9e3779b9 + uVar10 + uVar6 * 0x40 ^ uVar6) & uVar11;
    uVar6 = (uint)param_2;
    if ((((uVar7 < uVar8) || (uVar11 <= uVar6)) &&
        ((uVar6 <= uVar7 || ((uVar11 <= uVar6 && (uVar7 < uVar11)))))) &&
       ((uVar11 <= uVar6 || (uVar8 <= uVar11)))) {
      FGenericPlatformString::Memcpy(lVar3 + (param_2 & 0xffffffff) * 0x18,puVar1,0x18);
      lVar3 = *param_1;
      *(undefined8 *)(lVar2 + lVar3) = 0xffffffffffffffff;
      *(undefined8 *)(lVar2 + 8 + lVar3) = 0xffffffffffffffff;
      param_2 = (ulonglong)uVar7;
    }
    uVar11 = *(uint *)((longlong)param_1 + 0xc);
  }
  return;
}



// FUNCTION 14374f6b0 FUN_14374f6b0 body=73 status=ok
// SIG undefined FUN_14374f6b0(void)

void FUN_14374f6b0(longlong *param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_2 + 8);
  uVar2 = 0;
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  lVar5 = (longlong)iVar1 * 0x30 + *param_1;
  lVar6 = (longlong)((int)param_1[1] - iVar1) * 0x30;
  uVar4 = uVar2;
  if (0 < lVar6) {
    do {
      uVar3 = (int)uVar4 + 8;
      *(undefined8 *)(uVar2 + lVar5) = *(undefined8 *)(uVar2 + 0x30 + lVar5);
      uVar2 = uVar2 + 8;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < lVar6);
  }
  return;
}



// FUNCTION 14374f700 FUN_14374f700 body=377 status=ok
// SIG undefined FUN_14374f700(void)

undefined4 * FUN_14374f700(longlong *param_1,undefined4 *param_2,longlong *param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  longlong *local_res18;
  int local_res20;
  
  local_res20 = (int)param_1[1];
  plVar1 = (longlong *)*param_1;
  iVar3 = 8;
  if (8 < param_4) {
    iVar3 = param_4;
  }
  iVar9 = *(int *)((longlong)param_1 + 0xc) + 1;
  local_res10 = param_2;
  local_res18 = plVar1;
  lVar4 = (**(code **)(*param_3 + 8))(param_3,iVar3 * 0x18);
  if (lVar4 != 0) {
    *param_1 = lVar4;
    lVar4 = (longlong)iVar3;
    if (0 < iVar3) {
      lVar5 = 0;
      do {
        lVar2 = *param_1;
        *(undefined8 *)(lVar5 + lVar2) = 0xffffffffffffffff;
        *(undefined8 *)(lVar5 + 8 + lVar2) = 0xffffffffffffffff;
        lVar4 = lVar4 + -1;
        lVar5 = lVar5 + 0x18;
      } while (lVar4 != 0);
    }
    iVar7 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    lVar4 = (longlong)iVar9;
    *(int *)((longlong)param_1 + 0xc) = iVar3 + -1;
    plVar6 = plVar1;
    plVar8 = plVar1;
    if (0 < iVar9) {
      do {
        if ((*plVar6 != -1) || (plVar6[1] != -1)) {
          iVar3 = FUN_14374e750(param_1,param_3,plVar1 + (longlong)iVar7 * 3,local_res8);
          FGenericPlatformString::Memcpy
                    (*param_1 + (longlong)iVar3 * 0x18,plVar1 + (longlong)iVar7 * 3,0x18);
        }
        iVar7 = iVar7 + 1;
        lVar4 = lVar4 + -1;
        plVar6 = plVar6 + 3;
        plVar8 = local_res18;
        param_2 = local_res10;
      } while (lVar4 != 0);
    }
    if (-1 < local_res20) {
      (**(code **)(*param_3 + 0x10))(param_3,plVar8,iVar9 * 0x18);
    }
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14374f880 FUN_14374f880 body=338 status=ok
// SIG undefined FUN_14374f880(void)

undefined4 *
FUN_14374f880(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined2 param_4,
             longlong param_5,undefined2 param_6)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  lVar1 = param_5;
  if (param_5 == 0) {
    if (*(char *)(*param_1 + 1) == '\0') {
      *param_2 = 0;
      return param_2;
    }
    lVar3 = FUN_14374e030(param_1[1]);
    *(undefined8 *)(lVar3 + 0x10) = 0;
    *(undefined8 *)(lVar3 + 0x20) = 0;
  }
  else {
    lVar3 = 0;
    puVar4 = (undefined8 *)FUN_143714490(param_5,1);
    bVar2 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar4;
    }
    lVar6 = 0;
    if ((bVar2 & 0xf) == 8) {
      lVar6 = lVar1;
    }
    lVar8 = lVar3;
    if ((((lVar6 != 0) && (plVar5 = (longlong *)FUN_143714420(param_3,2), plVar5 != (longlong *)0x0)
         ) && (*plVar5 != 0)) &&
       ((plVar5 = (longlong *)FUN_143714420(lVar6,2), lVar8 = 0, plVar5 != (longlong *)0x0 &&
        (*plVar5 != 0)))) {
      plVar5 = (longlong *)FUN_143714420(param_3,2);
      if (plVar5 != (longlong *)0x0) {
        lVar3 = *plVar5;
      }
      puVar4 = (undefined8 *)FUN_143714420(lVar6,2);
      if (puVar4 == (undefined8 *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *puVar4;
      }
      plVar5 = (longlong *)FUN_14374ea80(*param_1,&param_5,uVar7,lVar3);
      lVar8 = *plVar5;
      if (lVar8 == 0) {
        *param_2 = 0x80040200;
        return param_2;
      }
    }
    lVar3 = FUN_14374e030(param_1[1]);
    *(longlong *)(lVar3 + 0x10) = lVar1;
    *(longlong *)(lVar3 + 0x20) = lVar8;
  }
  *(undefined8 *)(lVar3 + 0x18) = param_3;
  *(undefined2 *)(lVar3 + 2) = param_6;
  *(undefined2 *)(lVar3 + 4) = param_4;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14374f9e0 FUN_14374f9e0 body=415 status=ok
// SIG undefined FUN_14374f9e0(void)

int * FUN_14374f9e0(longlong *param_1,int *param_2,longlong param_3,int param_4,longlong param_5,
                   int param_6)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined1 local_res8 [8];
  undefined1 local_58 [8];
  undefined8 *local_50;
  undefined8 *local_48;
  
  lVar1 = param_5;
  if (param_5 == param_1[2]) {
    if (*(char *)(*param_1 + 5) == '\0') {
      uVar10 = *(undefined8 *)(param_3 + 8);
    }
    else {
      uVar10 = 0;
    }
    hkReflect::DeclIterAll::DeclIterAll(&local_50,param_3,uVar10);
    iVar3 = param_6;
    do {
      do {
        puVar8 = local_50 + 1;
        if ((local_48 <= local_50 + 1) &&
           (cVar4 = FUN_1437144f0(&local_50), puVar8 = local_50, cVar4 == '\0')) goto LAB_14374fa61;
        local_50 = puVar8;
        pbVar7 = (byte *)FUN_143714f30(local_50,&param_5);
      } while ((*pbVar7 & 0x20) == 0);
      iVar5 = FUN_143715270(local_50);
      uVar10 = *local_50;
      if (*(char *)(*param_1 + 2) != '\0') {
        FUN_143715390(uVar10,local_res8);
      }
      puVar8 = (undefined8 *)FUN_143714490(uVar10,1);
      if (puVar8 == (undefined8 *)0x0) {
        uVar11 = 0;
      }
      else {
        uVar11 = (uint)*puVar8;
      }
      piVar9 = (int *)(*(code *)(&DAT_146b833a0)[uVar11 & 0xf])
                                (param_1,local_58,uVar10,iVar5 + param_4,uVar10,iVar5 + iVar3);
    } while (-1 < *piVar9);
    *param_2 = *piVar9;
  }
  else {
    FUN_14374ea80(*param_1,&param_5,param_5,param_3);
    lVar2 = param_5;
    if (param_5 == 0) {
      *param_2 = -0x7ffbfe00;
    }
    else {
      lVar6 = FUN_14374e140(param_1[1]);
      *(short *)(lVar6 + 4) = (short)param_4;
      *(undefined2 *)(lVar6 + 2) = (undefined2)param_6;
      *(longlong *)(lVar6 + 0x10) = lVar1;
      *(longlong *)(lVar6 + 0x18) = param_3;
      *(longlong *)(lVar6 + 0x20) = lVar2;
LAB_14374fa61:
      *param_2 = 0;
    }
  }
  return param_2;
}



// FUNCTION 14374fb80 FUN_14374fb80 body=1236 status=ok
// SIG undefined FUN_14374fb80(void)

int * FUN_14374fb80(longlong *param_1,int *param_2,longlong param_3,int param_4,longlong param_5,
                   int param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  byte *pbVar9;
  uint *puVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined8 uVar13;
  ulonglong *puVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [16];
  
  lVar1 = param_5;
  if ((param_5 == 0) && (*(char *)(*param_1 + 1) == '\0')) {
    *param_2 = 0;
    return param_2;
  }
  lVar15 = 0;
  if ((param_3 == param_1[3]) || (param_5 == param_1[2])) {
    if (param_5 != param_3) {
      uVar16 = 0;
      bVar4 = 0;
      lVar8 = lVar15;
      if (param_5 != 0) {
        puVar11 = (undefined8 *)FUN_143714490(param_5,1);
        if (puVar11 != (undefined8 *)0x0) {
          bVar4 = (byte)*puVar11;
        }
        if ((bVar4 & 0xf) == 7) {
          lVar8 = lVar1;
        }
        if (lVar1 != lVar8) {
          if (*(char *)(*param_1 + 2) != '\0') {
            FUN_143715390(param_3,&param_5);
          }
          puVar11 = (undefined8 *)FUN_143714490(param_3,1);
          if (puVar11 != (undefined8 *)0x0) {
            uVar16 = (uint)*puVar11;
          }
          piVar12 = (int *)(*(code *)(&DAT_146b833a0)[uVar16 & 0xf])
                                     (param_1,&param_5,param_3,param_4,0,0);
          if (*piVar12 < 0) {
            *param_2 = *piVar12;
            return param_2;
          }
          goto LAB_143750033;
        }
      }
      if (*(char *)(*param_1 + 5) == '\0') {
        lVar15 = *(longlong *)(param_3 + 8);
      }
      hkReflect::DeclIterAll::DeclIterAll(&local_90,param_3,lVar15);
      do {
        while( true ) {
          do {
            puVar11 = local_90 + 1;
            if ((local_88 <= local_90 + 1) &&
               (cVar3 = FUN_1437144f0(&local_90), puVar11 = local_90, cVar3 == '\0'))
            goto LAB_143750033;
            local_90 = puVar11;
            pbVar9 = (byte *)FUN_143714f30(local_90,&param_5);
          } while (((*pbVar9 & 0x30) == 0) ||
                  ((*(char *)(*param_1 + 2) != '\0' &&
                   (pbVar9 = (byte *)FUN_143714f30(local_90,local_64), (~*pbVar9 & 1) == 0))));
          if (lVar8 != 0) break;
LAB_14374ffba:
          uVar13 = *local_90;
          iVar6 = FUN_143715270();
          if (*(char *)(*param_1 + 2) != '\0') {
            FUN_143715390(uVar13,local_5c);
          }
          puVar11 = (undefined8 *)FUN_143714490(uVar13,1);
          uVar7 = uVar16;
          if (puVar11 != (undefined8 *)0x0) {
            uVar7 = (uint)*puVar11;
          }
          piVar12 = (int *)(*(code *)(&DAT_146b833a0)[uVar7 & 0xf])
                                     (param_1,local_58,uVar13,iVar6 + param_4,0,0);
          iVar6 = *piVar12;
          if (iVar6 < 0) goto LAB_143750024;
        }
        lVar1 = *param_1;
        local_98 = 0;
        if (*(char *)(lVar1 + 4) == '\0') {
          uVar13 = FUN_1437151c0(local_90);
          puVar14 = (ulonglong *)FUN_143714c60(lVar8,local_48,uVar13,*(undefined1 *)(lVar1 + 5));
        }
        else {
          uVar13 = FUN_1437151c0(local_90);
          puVar14 = (ulonglong *)FUN_143714b80(lVar8,local_50,uVar13,*(undefined1 *)(lVar1 + 5));
        }
        local_98 = *puVar14;
        if (((local_98 < 2) ||
            ((*(char *)(*param_1 + 2) != '\0' &&
             (pbVar9 = (byte *)FUN_143714f30(&local_98,local_68), (~*pbVar9 & 1) == 0)))) ||
           ((*(char *)(*param_1 + 3) != '\0' &&
            (puVar10 = (uint *)FUN_143715390(local_98,local_6c), (*puVar10 >> 3 & 1) != 0))))
        goto LAB_14374ffba;
        puVar11 = local_90;
        uVar2 = local_98;
        uVar13 = *local_90;
        iVar6 = FUN_143715270(&local_98);
        iVar6 = iVar6 + param_6;
        iVar5 = FUN_143715270(puVar11);
        if (*(char *)(*param_1 + 2) != '\0') {
          FUN_143715390(uVar13,local_70);
        }
        puVar11 = (undefined8 *)FUN_143714490(uVar13,1);
        uVar7 = uVar16;
        if (puVar11 != (undefined8 *)0x0) {
          uVar7 = (uint)*puVar11;
        }
        piVar12 = (int *)(*(code *)(&DAT_146b833a0)[uVar7 & 0xf])
                                   (param_1,local_60,uVar13,iVar5 + param_4,uVar2,iVar6);
        iVar6 = *piVar12;
      } while (-1 < iVar6);
LAB_143750024:
      *param_2 = iVar6;
      return param_2;
    }
    if (*(char *)(*param_1 + 5) == '\0') {
      lVar15 = *(longlong *)(param_3 + 8);
    }
    hkReflect::DeclIterAll::DeclIterAll(&local_90,param_3,lVar15);
    iVar6 = param_6;
    while ((puVar11 = local_90 + 1, local_90 + 1 < local_88 ||
           (cVar3 = FUN_1437144f0(&local_90), puVar11 = local_90, cVar3 != '\0'))) {
      local_90 = puVar11;
      pbVar9 = (byte *)FUN_143714f30(local_90,&param_5);
      if ((((*pbVar9 & 0x30) != 0) &&
          ((*(char *)(*param_1 + 2) == '\0' ||
           (pbVar9 = (byte *)FUN_143714f30(local_90,local_70), (~*pbVar9 & 1) != 0)))) &&
         ((*(char *)(*param_1 + 3) == '\0' ||
          (puVar10 = (uint *)FUN_143715390(*local_90,local_6c), (*puVar10 >> 3 & 1) == 0)))) {
        iVar5 = FUN_143715270(local_90);
        uVar13 = *local_90;
        if (*(char *)(*param_1 + 2) != '\0') {
          FUN_143715390(uVar13,local_68);
        }
        puVar11 = (undefined8 *)FUN_143714490(uVar13,1);
        uVar16 = 0;
        if (puVar11 != (undefined8 *)0x0) {
          uVar16 = (uint)*puVar11;
        }
        piVar12 = (int *)(*(code *)(&DAT_146b833a0)[uVar16 & 0xf])
                                   (param_1,local_64,uVar13,param_4 + iVar5,uVar13,iVar5 + iVar6);
        if (*piVar12 < 0) {
          *param_2 = *piVar12;
          return param_2;
        }
      }
    }
  }
  else {
    FUN_14374ea80(*param_1,&param_5,param_5,param_3);
    lVar15 = param_5;
    if (param_5 == 0) {
      *param_2 = -0x7ffbfe00;
      return param_2;
    }
    lVar8 = FUN_14374e140(param_1[1]);
    *(short *)(lVar8 + 4) = (short)param_4;
    *(undefined2 *)(lVar8 + 2) = (undefined2)param_6;
    *(longlong *)(lVar8 + 0x10) = lVar1;
    *(longlong *)(lVar8 + 0x18) = param_3;
    *(longlong *)(lVar8 + 0x20) = lVar15;
  }
LAB_143750033:
  *param_2 = 0;
  return param_2;
}



// FUNCTION 143750060 FUN_143750060 body=1 status=ok
// SIG undefined FUN_143750060(void)

void FUN_143750060(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 143750070 FUN_143750070 body=151 status=ok
// SIG undefined FUN_143750070(void)

void FUN_143750070(longlong *param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)((longlong)*(int *)(param_2 + 1) * 0x30 + *(longlong *)*param_2);
  if (puVar7 != (undefined8 *)0x0) {
    uVar1 = param_4[1];
    *puVar7 = *param_4;
    puVar7[1] = uVar1;
    puVar7[2] = param_4[2];
  }
  iVar2 = *(int *)(param_2 + 1);
  iVar4 = (*(int *)(param_3 + 8) - iVar2) + -1;
  if (iVar4 != 0) {
    *(int *)(param_1 + 1) = (int)param_1[1] - iVar4;
    iVar2 = iVar2 + 1;
    lVar6 = (longlong)((int)param_1[1] - iVar2) * 0x30;
    iVar3 = 0;
    puVar7 = (undefined8 *)((longlong)iVar2 * 0x30 + *param_1);
    if (0 < lVar6) {
      lVar5 = (((longlong)iVar4 + (longlong)iVar2) * 0x30 + *param_1) - (longlong)puVar7;
      do {
        iVar3 = iVar3 + 8;
        *puVar7 = *(undefined8 *)(lVar5 + (longlong)puVar7);
        puVar7 = puVar7 + 1;
      } while (iVar3 < lVar6);
    }
  }
  return;
}



// FUNCTION 143750110 FUN_143750110 body=99 status=ok
// SIG undefined FUN_143750110(void)

undefined8 * FUN_143750110(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkTypeVm::Pass::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x10);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 143750180 FUN_143750180 body=226 status=ok
// SIG undefined FUN_143750180(void)

void FUN_143750180(undefined8 param_1)

{
  LPVOID pvVar1;
  undefined8 *puVar2;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar1 + 0x58),8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = hkTypeVm::InlineFixedArrayPass::vftable;
  }
  FUN_14374e870(param_1,puVar2);
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar1 + 0x58),0x10);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar2 + 1) = 0;
    *puVar2 = hkTypeVm::InlineRecordPass::vftable;
  }
  FUN_14374e870(param_1,puVar2);
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar1 + 0x58),8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = hkTypeVm::BlockPass::vftable;
    FUN_14374e870(param_1,puVar2);
    return;
  }
  FUN_14374e870(param_1,0);
  return;
}



// FUNCTION 143750270 FUN_143750270 body=605 status=ok
// SIG undefined FUN_143750270(void)

undefined4 * FUN_143750270(undefined8 param_1,undefined4 *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  char *pcVar10;
  int iVar11;
  byte *pbVar12;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  longlong *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  longlong *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [2];
  undefined2 local_56;
  undefined2 local_54;
  undefined8 local_50;
  int local_48;
  
  iVar11 = 0;
  do {
    if (iVar11 == (int)param_3[1]) {
      iVar11 = 0;
      do {
        if (iVar11 == (int)param_3[1]) {
          *param_2 = 0;
          return param_2;
        }
        pcVar10 = (char *)((longlong)iVar11 * 0x30 + *param_3);
        if (*pcVar10 == '\b') {
          iVar1 = iVar11 + 1;
          while (iVar1 != (int)param_3[1]) {
            lVar8 = (longlong)iVar1;
            lVar7 = *param_3;
            if (*(char *)(lVar7 + lVar8 * 0x30) != '\b') break;
            iVar2 = *(int *)(pcVar10 + 0x10);
            if (((uint)*(ushort *)(pcVar10 + 2) + iVar2 !=
                 (uint)*(ushort *)(lVar7 + 2 + lVar8 * 0x30)) ||
               ((uint)*(ushort *)(pcVar10 + 4) + iVar2 !=
                (uint)*(ushort *)(lVar7 + 4 + lVar8 * 0x30))) break;
            *(int *)(pcVar10 + 0x10) = *(int *)(lVar7 + 0x10 + lVar8 * 0x30) + iVar2;
            uStack_6c = uStack_5c;
            local_78 = param_3;
            iStack_70 = iVar1;
            local_68 = param_3;
            iStack_60 = iVar1;
            FUN_14374f6b0(param_3,&local_78);
          }
        }
        iVar11 = iVar11 + 1;
      } while( true );
    }
    pbVar12 = (byte *)((longlong)iVar11 * 0x30 + *param_3);
    if (*pbVar12 - 2 < 3) {
      puVar4 = (uint *)FUN_143715390(*(undefined8 *)(pbVar12 + 0x18),local_res10);
      if (((*puVar4 >> 3 & 1) == 0) && (*(longlong *)(pbVar12 + 0x10) != 0)) {
        puVar4 = (uint *)FUN_143715390(*(longlong *)(pbVar12 + 0x10),local_res18);
        if (((*puVar4 >> 3 & 1) == 0) && (*(longlong *)(pbVar12 + 8) == 0)) {
          lVar7 = *(longlong *)(pbVar12 + 0x10);
          lVar8 = *(longlong *)(pbVar12 + 0x18);
          iVar1 = FUN_1437152f0(lVar7);
          iVar2 = FUN_1437152f0(lVar8);
          if (iVar2 == iVar1) {
            puVar5 = (undefined8 *)FUN_143714420(lVar7,1);
            if (puVar5 == (undefined8 *)0x0) {
              iVar1 = 0;
            }
            else {
              iVar1 = (int)*puVar5;
            }
            puVar5 = (undefined8 *)FUN_143714420(lVar8,1);
            iVar3 = 0;
            if (puVar5 != (undefined8 *)0x0) {
              iVar3 = (int)*puVar5;
            }
            if (iVar3 == iVar1) {
LAB_1437503b8:
              local_54 = *(undefined2 *)(pbVar12 + 4);
              local_56 = *(undefined2 *)(pbVar12 + 2);
              iStack_70 = iVar11 + 1;
              local_50 = 0;
              local_58[0] = 8;
              local_78 = param_3;
              local_68 = param_3;
              iStack_60 = iVar11;
              local_48 = iVar2;
              FUN_143750070(param_3,&local_68,&local_78,local_58);
            }
            else {
              puVar5 = (undefined8 *)FUN_143714490(lVar7,1);
              if (puVar5 == (undefined8 *)0x0) {
                bVar9 = 0;
              }
              else {
                bVar9 = (byte)*puVar5;
              }
              lVar6 = 0;
              if ((bVar9 & 0xf) == 4) {
                lVar6 = lVar7;
              }
              if (lVar6 != 0) {
                puVar5 = (undefined8 *)FUN_143714490(lVar8,1);
                if (puVar5 == (undefined8 *)0x0) {
                  bVar9 = 0;
                }
                else {
                  bVar9 = (byte)*puVar5;
                }
                lVar7 = 0;
                if ((bVar9 & 0xf) == 2) {
                  lVar7 = lVar8;
                }
                if (lVar7 != 0) goto LAB_1437503b8;
              }
            }
          }
        }
      }
    }
    iVar11 = iVar11 + 1;
  } while( true );
}



// FUNCTION 1437504d0 FUN_1437504d0 body=402 status=ok
// SIG undefined FUN_1437504d0(void)

undefined4 * FUN_1437504d0(undefined8 param_1,undefined4 *param_2,longlong *param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  undefined1 local_res18 [16];
  undefined1 local_88 [8];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [56];
  
  iVar10 = 0;
  do {
    if (iVar10 == (int)param_3[1]) {
      *param_2 = 0;
      return param_2;
    }
    pbVar3 = (byte *)((longlong)iVar10 * 0x30 + *param_3);
    bVar1 = *pbVar3;
    if ((bVar1 != 0) && ((bVar1 < 8 || (bVar1 - 9 < 2)))) {
      lVar9 = *(longlong *)(pbVar3 + 0x10);
      uVar6 = *(undefined8 *)(pbVar3 + 0x18);
      if (lVar9 != 0) {
        puVar4 = (undefined8 *)FUN_143714490(lVar9,1);
        if (puVar4 == (undefined8 *)0x0) {
          uVar11 = 0;
        }
        else {
          uVar11 = (uint)*puVar4;
        }
        puVar4 = (undefined8 *)FUN_143714490(uVar6,1);
        uVar2 = 0;
        if (puVar4 != (undefined8 *)0x0) {
          uVar2 = (uint)*puVar4;
        }
        if (((uVar2 ^ uVar11) & 0xf) != 0) {
          if (1 < DAT_146b833f8) {
            uVar5 = FUN_1437140a0(local_res18,uVar6);
            uVar6 = FUN_143714f80(uVar6,local_80);
            uVar7 = FUN_1437140a0(local_88,lVar9);
            uVar8 = FUN_143714f80(lVar9,local_70);
            FUN_14373a730(local_60,&DAT_146b833f0,2);
            lVar9 = FUN_14373bbd0(local_60,"Cannot convert {} (from {}) to {} (from {})",
                                  &DAT_145b9b238,uVar8,uVar7,uVar6,uVar5,0);
            *(char **)(lVar9 + 0x20) = "Reflect\\TypeVm\\hkTypeVmCompilerPasses.cpp";
            *(undefined8 *)(lVar9 + 0x28) = 0x1b3;
            FUN_14373a950(local_60);
          }
          *param_2 = 0x80040200;
          return param_2;
        }
      }
    }
    iVar10 = iVar10 + 1;
  } while( true );
}



// FUNCTION 143750670 FUN_143750670 body=742 status=ok
// SIG undefined FUN_143750670(void)

void FUN_143750670(undefined8 param_1,undefined4 *param_2,longlong *param_3)

{
  longlong *plVar1;
  short *psVar2;
  longlong lVar3;
  short sVar4;
  short sVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uchar *puVar8;
  undefined8 uVar9;
  uint *puVar10;
  ulonglong *puVar11;
  byte bVar12;
  short sVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  short sVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  undefined8 local_d8;
  longlong lStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined1 local_b0 [4];
  undefined1 local_ac [4];
  longlong local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong *local_68;
  int local_60;
  undefined8 local_58;
  int iStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined8 uStack_40;
  
  iVar20 = 0;
  iVar18 = 1;
  do {
    while( true ) {
      if (iVar20 == (int)param_3[1]) {
        *param_2 = 0;
        return;
      }
      lVar6 = (longlong)iVar20;
      lVar21 = *param_3;
      if (*(char *)(lVar21 + lVar6 * 0x30) == '\x01') break;
LAB_143750927:
      iVar20 = iVar20 + 1;
      iVar18 = iVar18 + 1;
    }
    puVar7 = (undefined8 *)(lVar21 + lVar6 * 0x30);
    local_d8 = *puVar7;
    lStack_d0 = puVar7[1];
    plVar1 = (longlong *)(lVar21 + 0x10 + lVar6 * 0x30);
    local_c8 = (undefined4)*plVar1;
    uStack_c4 = *(undefined4 *)((longlong)plVar1 + 4);
    lVar3 = *plVar1;
    uStack_c0 = (undefined4)plVar1[1];
    uStack_bc = *(undefined4 *)((longlong)plVar1 + 0xc);
    lVar21 = *(longlong *)(lVar21 + 0x20 + lVar6 * 0x30);
    if (lVar21 == 0) goto LAB_143750927;
    local_b8 = lVar21;
    puVar7 = (undefined8 *)FUN_143714490(lVar3,1);
    if (puVar7 == (undefined8 *)0x0) {
      bVar12 = 0;
    }
    else {
      bVar12 = (byte)*puVar7;
    }
    lVar6 = 0;
    if ((bVar12 & 0xf) == 8) {
      lVar6 = lVar3;
    }
    if ((lVar6 == 0) || (lStack_d0 != 0)) goto LAB_143750927;
    puVar8 = AK::WriteBytesMem::Bytes((WriteBytesMem *)&local_d8);
    uVar9 = FUniqueNetIdString::GetBytes(&local_d8);
    if ((puVar8 == (uchar *)0x0) ||
       (puVar10 = (uint *)FUN_143715390(puVar8,local_b0), (*puVar10 >> 3 & 1) != 0)) {
      uVar14 = 0;
    }
    else {
      puVar7 = (undefined8 *)FUN_143714420(puVar8,1);
      if (puVar7 == (undefined8 *)0x0) {
        uVar14 = 0;
      }
      else {
        uVar14 = (uint)((ulonglong)*puVar7 >> 8);
      }
    }
    puVar10 = (uint *)FUN_143715390(uVar9,local_ac);
    if ((*puVar10 >> 3 & 1) == 0) {
      puVar11 = (ulonglong *)FUN_143714420(uVar9,1);
      if (puVar11 == (ulonglong *)0x0) {
        uVar15 = 0;
      }
      else {
        uVar15 = *puVar11 >> 8;
      }
    }
    else {
      uVar15 = 0;
    }
    if (((int)uVar14 < 1) || ((int)uVar15 < 1)) goto LAB_143750927;
    if (*(int *)(lVar21 + 8) != 0) {
      if (puVar8 == (uchar *)0x0) {
        sVar4 = 0;
      }
      else {
        puVar7 = (undefined8 *)FUN_143714420(puVar8,2);
        if (puVar7 == (undefined8 *)0x0) {
          sVar4 = FUN_1437152f0(0);
        }
        else {
          sVar4 = FUN_1437152f0(*puVar7);
        }
      }
      puVar7 = (undefined8 *)FUN_143714420(uVar9,2);
      if (puVar7 == (undefined8 *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *puVar7;
      }
      sVar5 = FUN_1437152f0(uVar9);
      uVar16 = uVar15 & 0xffffffff;
      if ((int)uVar14 < (int)uVar15) {
        uVar16 = (ulonglong)uVar14;
      }
      uVar14 = *(uint *)(local_b8 + 8);
      if (0 < (int)uVar16) {
        lVar21 = (longlong)iVar18 * 0x30;
        local_a8 = (longlong)(int)uVar14 * 0x30;
        iVar19 = iVar20;
        sVar13 = local_d8._4_2_;
        sVar17 = local_d8._2_2_;
        do {
          uStack_80 = *(undefined4 *)(local_b8 + 8);
          local_88 = local_b8;
          local_78 = local_b8;
          lVar6 = local_78;
          uStack_40 = CONCAT44(uStack_7c,uStack_80);
          local_48 = local_b8;
          uStack_70 = 0;
          local_78._0_4_ = (undefined4)local_b8;
          local_78._4_4_ = (undefined4)((ulonglong)local_b8 >> 0x20);
          local_98 = (undefined4)local_78;
          uStack_94 = local_78._4_4_;
          iStack_90 = 0;
          uStack_8c = uStack_6c;
          local_78 = lVar6;
          local_68 = param_3;
          local_60 = iVar19;
          FUN_14374f3c0(param_3,&local_68,&local_98,&local_48);
          lVar6 = lVar21;
          uVar15 = (ulonglong)uVar14;
          if (0 < (int)uVar14) {
            do {
              lVar3 = *param_3;
              psVar2 = (short *)(lVar6 + 2 + lVar3);
              *psVar2 = *psVar2 + sVar17;
              psVar2 = (short *)(lVar6 + 4 + lVar3);
              *psVar2 = *psVar2 + sVar13;
              uVar15 = uVar15 - 1;
              lVar6 = lVar6 + 0x30;
            } while (uVar15 != 0);
          }
          lVar21 = lVar21 + local_a8;
          iVar19 = iVar19 + uVar14;
          sVar17 = sVar17 + sVar4;
          sVar13 = sVar13 + sVar5;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
    }
    local_58._0_4_ = SUB84(param_3,0);
    local_58._4_4_ = (undefined4)((ulonglong)param_3 >> 0x20);
    local_98 = (undefined4)local_58;
    uStack_94 = local_58._4_4_;
    uStack_8c = uStack_4c;
    iStack_90 = iVar20;
    local_58 = param_3;
    iStack_50 = iVar20;
    FUN_14374f6b0(param_3,&local_98);
  } while( true );
}



// FUNCTION 143750960 FUN_143750960 body=416 status=ok
// SIG undefined FUN_143750960(void)

undefined4 * FUN_143750960(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  ulonglong *puVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  byte bVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  int local_80;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  longlong lStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  longlong local_38;
  undefined8 uStack_30;
  
  uVar10 = 0;
  iVar4 = 0;
  do {
    iVar12 = iVar4 + 1;
    iVar11 = (int)uVar10;
    if (iVar11 == (int)param_3[1]) {
      *param_2 = 0;
      return param_2;
    }
    lVar5 = (longlong)iVar11;
    lVar8 = *param_3;
    if (*(char *)(lVar8 + lVar5 * 0x30) == '\x06') {
      puVar6 = (undefined8 *)(lVar8 + lVar5 * 0x30);
      local_68 = *puVar6;
      lStack_60 = puVar6[1];
      puVar1 = (ulonglong *)(lVar8 + 0x10 + lVar5 * 0x30);
      local_58 = (undefined4)*puVar1;
      uStack_54 = *(undefined4 *)((longlong)puVar1 + 4);
      uVar10 = *puVar1;
      uStack_50 = (undefined4)puVar1[1];
      uStack_4c = *(undefined4 *)((longlong)puVar1 + 0xc);
      local_48 = *(longlong *)(lVar8 + 0x20 + lVar5 * 0x30);
      if (lStack_60 == 0) {
        bVar9 = 0;
        if (*(char *)(param_1 + 8) != '\0') {
          puVar6 = (undefined8 *)FUN_143714490(uVar10,1);
          if (puVar6 != (undefined8 *)0x0) {
            bVar9 = (byte)*puVar6;
          }
          uVar7 = 0;
          if ((bVar9 & 0xf) == 7) {
            uVar7 = uVar10;
          }
          if (uVar7 == 0) goto LAB_143750aca;
        }
        if (local_48 != 0) {
          uVar3 = *(uint *)(local_48 + 8);
          if (uVar3 != 0) {
            local_a8 = local_48;
            local_98 = local_48;
            lVar8 = local_98;
            uStack_30 = CONCAT44(uStack_9c,uVar3);
            local_38 = local_48;
            uStack_90 = 0;
            local_98._0_4_ = (undefined4)local_48;
            local_98._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
            local_b8 = (undefined4)local_98;
            uStack_b4 = local_98._4_4_;
            iStack_b0 = 0;
            uStack_ac = uStack_8c;
            uStack_a0 = uVar3;
            local_98 = lVar8;
            local_88 = param_3;
            local_80 = iVar11;
            FUN_14374f3c0(param_3,&local_88,&local_b8,&local_38);
            if (0 < (int)uVar3) {
              uVar10 = (ulonglong)uVar3;
              lVar8 = (longlong)iVar12 * 0x30;
              do {
                lVar5 = *param_3;
                psVar2 = (short *)(lVar8 + 2 + lVar5);
                *psVar2 = *psVar2 + local_68._2_2_;
                psVar2 = (short *)(lVar8 + 4 + lVar5);
                *psVar2 = *psVar2 + local_68._4_2_;
                uVar10 = uVar10 - 1;
                lVar8 = lVar8 + 0x30;
              } while (uVar10 != 0);
            }
          }
          local_78._0_4_ = SUB84(param_3,0);
          local_78._4_4_ = (undefined4)((ulonglong)param_3 >> 0x20);
          local_b8 = (undefined4)local_78;
          uStack_b4 = local_78._4_4_;
          uStack_ac = uStack_6c;
          iStack_b0 = iVar11;
          local_78 = param_3;
          iStack_70 = iVar11;
          FUN_14374f6b0(param_3,&local_b8);
          iVar11 = iVar11 + -1;
          iVar12 = iVar4;
        }
      }
    }
LAB_143750aca:
    uVar10 = (ulonglong)(iVar11 + 1);
    iVar4 = iVar12;
  } while( true );
}



// FUNCTION 143750b00 FUN_143750b00 body=503 status=ok
// SIG undefined FUN_143750b00(void)

undefined4 *
FUN_143750b00(undefined8 param_1,undefined4 *param_2,longlong *param_3,longlong param_4,
             longlong param_5)

{
  char cVar1;
  WriteBytesMem WVar2;
  uint *puVar3;
  undefined8 *puVar4;
  uchar *puVar5;
  undefined8 uVar6;
  WriteBytesMem *this;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined1 local_38 [16];
  
  if ((param_4 == 0) || (param_4 == param_5)) {
    *param_2 = 0;
    return param_2;
  }
  puVar3 = (uint *)FUN_143715390(param_4,local_38);
  if ((*puVar3 >> 3 & 1) == 0) {
    puVar3 = (uint *)FUN_143715390(param_5,local_38);
    if ((*puVar3 >> 3 & 1) == 0) {
      iVar7 = 0;
LAB_143750b84:
      if (iVar7 == (int)param_3[1]) {
        *param_2 = 0;
        return param_2;
      }
      this = (WriteBytesMem *)(*param_3 + (longlong)iVar7 * 0x30);
      WVar2 = *this;
      if ((WVar2 != (WriteBytesMem)0x0) && (((byte)WVar2 < 8 || ((byte)WVar2 - 9 < 2)))) {
        puVar4 = (undefined8 *)FUN_143714420(*(undefined8 *)(this + 0x18),1);
        if (puVar4 == (undefined8 *)0x0) {
          uVar8 = 0;
        }
        else {
          uVar8 = (uint)*puVar4;
        }
        puVar4 = (undefined8 *)FUN_143714420(*(undefined8 *)(this + 0x10),1);
        if (puVar4 == (undefined8 *)0x0) {
          uVar9 = 0;
        }
        else {
          uVar9 = (uint)*puVar4;
        }
        if (uVar9 == uVar8) goto LAB_143750c98;
        cVar1 = *(char *)((longlong)iVar7 * 0x30 + *param_3);
        if (cVar1 == '\x02') {
          cVar1 = FUN_143750db0(*(undefined8 *)(this + 0x10));
          if (cVar1 != '\0') {
            cVar1 = FUN_143750db0(*(undefined8 *)(this + 0x18));
            if (cVar1 != '\0') {
              *this = (WriteBytesMem)0xb;
            }
          }
          goto LAB_143750c98;
        }
        if (cVar1 == '\x03') {
          cVar1 = FUN_143750db0(*(undefined8 *)(this + 0x10));
          if (cVar1 == '\0') goto LAB_143750c98;
          cVar1 = FUN_143750db0(*(undefined8 *)(this + 0x18));
          if (cVar1 == '\0') goto LAB_143750c98;
          WVar2 = (WriteBytesMem)0x9;
          if ((uVar9 & 0x1f) == 2) {
            WVar2 = (WriteBytesMem)0xb;
          }
          iVar7 = iVar7 + 1;
          *this = WVar2;
          goto LAB_143750b84;
        }
        if ((cVar1 == '\x04') && ((uVar9 & 0x1f) == 5)) {
          puVar5 = AK::WriteBytesMem::Bytes(this);
          cVar1 = FUN_143750d00(puVar5);
          if (cVar1 != '\0') {
            uVar6 = FUniqueNetIdString::GetBytes(this);
            cVar1 = FUN_143750d00(uVar6);
            if (cVar1 == '\0') goto LAB_143750c98;
            *this = (WriteBytesMem)0xa;
            iVar7 = iVar7 + 1;
            goto LAB_143750b84;
          }
        }
      }
LAB_143750c98:
      iVar7 = iVar7 + 1;
      goto LAB_143750b84;
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 143750d00 FUN_143750d00 body=164 status=ok
// SIG undefined FUN_143750d00(void)

undefined4 FUN_143750d00(undefined8 param_1)

{
  uint uVar1;
  ulonglong *puVar2;
  uint uVar3;
  ulonglong uVar4;
  
  puVar2 = (ulonglong *)FUN_143714420(param_1,1);
  if (puVar2 == (ulonglong *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar2;
  }
  uVar1 = FUN_1437152f0(param_1);
  uVar3 = (uint)uVar4;
  if ((((uint)(uVar4 >> 0xb) & 0x1f) + 7 +
       ((uint)(uVar4 >> 10) & 1) + ((uint)(uVar4 >> 0x10) & 0xff) >> 3 == uVar1) &&
     ((((uVar3 == 0x174605 || (uVar3 == 0x345e05)) || (uVar3 == 0x74605)) ||
      (((uVar3 = uVar3 ^ 0x100, uVar3 == 0x174605 || (uVar3 == 0x345e05)) || (uVar3 == 0x74605))))))
  {
    return 1;
  }
  return 0;
}



// FUNCTION 143750db0 FUN_143750db0 body=126 status=ok
// SIG undefined FUN_143750db0(void)

uint FUN_143750db0(undefined8 param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  puVar2 = (undefined8 *)FUN_143714420();
  if (puVar2 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (uint)*puVar2;
  }
  uVar1 = (uVar3 & 0x1f) - 2;
  if ((uVar1 & 0xfffffffd) == 0) {
    if ((((uVar3 >> 10 & 7) == 0) && (uVar3 = (uVar3 >> 10) + 7 >> 3, uVar3 - 1 < 8)) &&
       (uVar1 = FUN_1437152f0(param_1), uVar3 == uVar1)) {
      return 1;
    }
    return 0;
  }
  return uVar1 & 0xffffff00;
}



// FUNCTION 143750e30 FUN_143750e30 body=22 status=ok
// SIG undefined FUN_143750e30(void)

undefined4 *
FUN_143750e30(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  *param_2 = 0x80040200;
  *param_5 = 0;
  return param_2;
}



// FUNCTION 143750e50 FUN_143750e50 body=12 status=ok
// SIG undefined FUN_143750e50(void)

void FUN_143750e50(undefined8 param_1,undefined8 param_2)

{
  FUN_142b7ebc0(param_1,param_2,&DAT_1467e1390);
  return;
}



// FUNCTION 143750e60 FUN_143750e60 body=73 status=ok
// SIG undefined FUN_143750e60(void)

bool FUN_143750e60(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong local_18;
  longlong local_10;
  
  if ((int)param_1[1] - (int)*param_1 < param_2[2] - *param_2) {
    return false;
  }
  local_18 = *param_1;
  local_10 = (param_2[2] - *param_2) + local_18;
  iVar1 = FUN_143750f00(param_2,&local_18);
  return iVar1 == 0;
}



// FUNCTION 143750eb0 FUN_143750eb0 body=78 status=ok
// SIG undefined FUN_143750eb0(void)

void FUN_143750eb0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong local_18;
  longlong local_10;
  
  local_10 = 0;
  local_18 = param_2;
  if (param_2 != 0) {
    iVar1 = FUN_14370c910(param_2);
    local_10 = iVar1 + param_2;
  }
  FUN_143750e60(param_1,&local_18);
  return;
}



// FUNCTION 143750f00 FUN_143750f00 body=146 status=ok
// SIG undefined FUN_143750f00(void)

ulonglong FUN_143750f00(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  lVar1 = *param_1;
  lVar2 = *param_2;
  if (lVar1 != lVar2) {
    iVar6 = (int)param_1[1] - (int)lVar1;
    iVar7 = (int)param_2[1] - (int)lVar2;
    iVar3 = iVar7;
    if (iVar6 < iVar7) {
      iVar3 = iVar6;
    }
    uVar4 = FUN_1437326e0(lVar1,lVar2,(longlong)iVar3);
    if ((int)uVar4 == 0) {
      if (iVar6 == iVar7) {
        return uVar4;
      }
      uVar5 = 1;
      if (iVar6 < iVar7) {
        uVar5 = 0xffffffff;
      }
      uVar4 = (ulonglong)uVar5;
    }
    return uVar4;
  }
  lVar1 = param_1[1];
  lVar2 = param_2[1];
  if (lVar1 != lVar2) {
    uVar4 = 0xffffffff;
    if (lVar1 != lVar2 && -1 < lVar1 - lVar2) {
      uVar4 = 1;
    }
    return uVar4;
  }
  return 0;
}



// FUNCTION 143750fa0 FUN_143750fa0 body=78 status=ok
// SIG undefined FUN_143750fa0(void)

void FUN_143750fa0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong local_18;
  longlong local_10;
  
  local_10 = 0;
  local_18 = param_2;
  if (param_2 != 0) {
    iVar1 = FUN_14370c910(param_2);
    local_10 = iVar1 + param_2;
  }
  FUN_143750f00(param_1,&local_18);
  return;
}



// FUNCTION 143750ff0 FUN_143750ff0 body=35 status=ok
// SIG undefined FUN_143750ff0(void)

int FUN_143750ff0(int *param_1,char param_2)

{
  char *pcVar1;
  
  pcVar1 = *(char **)param_1;
  while( true ) {
    if (pcVar1 == *(char **)(param_1 + 2)) {
      return -1;
    }
    if (*pcVar1 == param_2) break;
    pcVar1 = pcVar1 + 1;
  }
  return (int)pcVar1 - *param_1;
}



// FUNCTION 143751020 FUN_143751020 body=93 status=ok
// SIG undefined FUN_143751020(void)

int FUN_143751020(longlong *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(param_1[1] + -1);
  if (pcVar3 != (char *)(*param_1 + -1)) {
    do {
      if (*param_2 != '\0') {
        pcVar2 = param_2;
        cVar1 = *param_2;
        do {
          if (*pcVar3 == cVar1) {
            return (int)pcVar3 - (int)*param_1;
          }
          cVar1 = pcVar2[1];
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
      }
      pcVar3 = pcVar3 + -1;
    } while (pcVar3 != (char *)(*param_1 + -1));
  }
  return -1;
}



// FUNCTION 143751080 FUN_143751080 body=156 status=ok
// SIG undefined FUN_143751080(void)

undefined8 * FUN_143751080(int *param_1,undefined8 *param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  iVar3 = param_3[2] - *param_3;
  if (iVar3 <= param_1[2] - *param_1) {
    if (iVar3 == 0) {
      uVar1 = *(undefined8 *)param_1;
      *param_2 = uVar1;
      param_2[1] = uVar1;
      return param_2;
    }
    pcVar5 = *(char **)param_1;
    do {
      pcVar2 = *(char **)param_3;
      pcVar4 = pcVar5;
      if (*pcVar5 == **(char **)param_3) {
        do {
          pcVar2 = pcVar2 + 1;
          pcVar4 = pcVar4 + 1;
          if (pcVar2 == *(char **)(param_3 + 2)) {
            *param_2 = pcVar5;
            param_2[1] = pcVar4;
            return param_2;
          }
        } while (*pcVar4 == *pcVar2);
      }
      pcVar5 = pcVar5 + 1;
    } while (pcVar5 < (char *)((*(longlong *)(param_1 + 2) - (longlong)iVar3) + 1));
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 143751120 FUN_143751120 body=44 status=ok
// SIG undefined FUN_143751120(void)

void FUN_143751120(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_143750e50(*param_1,param_1[1]);
  FUN_143746ca0(param_2,*(undefined8 *)piVar1,piVar1[2] - *piVar1);
  return;
}



// FUNCTION 143751150 _guard_xfg_dispatch_icall_nop body=5 status=ok
// SIG float _guard_xfg_dispatch_icall_nop(float _Y, float _X)

float __cdecl _guard_xfg_dispatch_icall_nop(float _Y,float _X)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0b12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = atan2f(_Y,_X);
  return fVar1;
}



// FUNCTION 143751160 FUN_143751160 body=311 status=ok
// SIG undefined FUN_143751160(void)

uint FUN_143751160(ulonglong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = (int)(param_1 >> 0x20);
  uVar1 = (ulonglong)(iVar5 >> 0x14 & 0x7ff);
  lVar2 = uVar1 - 0x3ff;
  param_1 = param_1 & 0xfffffffffffff;
  iVar5 = iVar5 >> 0x1f;
  if (lVar2 == 0x400) {
    return iVar5 << 0x1f ^ 0x7f800000U ^ ((uint)(param_1 != 0) << 0x16 | (uint)(param_1 >> 0x1d));
  }
  if (lVar2 == -0x3ff) {
    return iVar5 << 0x1f;
  }
  if (lVar2 < 0x80) {
    if (lVar2 < -0x7e) {
      lVar4 = 0;
      uVar3 = 0;
      if (-0x96 < lVar2) {
        return iVar5 << 0x1f ^
               (int)(((longlong)param_1 >> (0x9eU - (char)lVar2 & 0x3f)) + 1 >> 1) +
               (int)(1L << ((char)lVar2 + 0x95U & 0x3f));
      }
      if (lVar2 == -0x96) {
        return iVar5 << 0x1f ^ (uint)(param_1 != 0);
      }
      goto LAB_143751285;
    }
    lVar4 = uVar1 - 0x380;
    uVar3 = (uint)(param_1 >> 0x1d);
    if ((param_1 >> 0x1d != 0x7fffff) || ((param_1 >> 0x1c & 1) == 0)) goto LAB_143751285;
    lVar4 = uVar1 - 0x37f;
  }
  else {
    lVar4 = 0xff;
  }
  uVar3 = 0;
LAB_143751285:
  return (uint)(lVar4 << 0x17) ^ iVar5 << 0x1f ^ uVar3;
}



// FUNCTION 1437512a0 _guard_xfg_dispatch_icall_nop body=5 status=ok
// SIG float _guard_xfg_dispatch_icall_nop(float _X, float _Y)

float __cdecl _guard_xfg_dispatch_icall_nop(float _X,float _Y)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = powf(_X,_Y);
  return fVar1;
}



// FUNCTION 1437512b0 _guard_xfg_dispatch_icall_nop body=5 status=ok
// SIG double _guard_xfg_dispatch_icall_nop(double _X, double _Y)

double __cdecl _guard_xfg_dispatch_icall_nop(double _X,double _Y)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = pow(_X,_Y);
  return dVar1;
}



// FUNCTION 1437512c0 FUN_1437512c0 body=164 status=ok
// SIG undefined FUN_1437512c0(void)

/* WARNING: Removing unreachable block (ram,0x000143751323) */

undefined8 * FUN_1437512c0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkParserBuffer::vftable;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  param_1[7] = param_2;
  uVar1 = FUN_143703a50();
  if ((*(uint *)((longlong)param_1 + 0x34) & 0x3fffffff) == 0) {
    FUN_14370c310(uVar1,param_1 + 5,1,1);
  }
  *(undefined4 *)(param_1 + 6) = 1;
  *(undefined1 *)param_1[5] = 0;
  param_1[4] = param_1[5];
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[3] = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 143751370 FUN_143751370 body=93 status=ok
// SIG undefined FUN_143751370(void)

void FUN_143751370(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = hkParserBuffer::vftable;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 6) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x34)) {
    FUN_143702e10(uVar1,param_1[5],1,*(uint *)((longlong)param_1 + 0x34) & 0x3fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1437513d0 FUN_1437513d0 body=136 status=ok
// SIG undefined FUN_1437513d0(void)

longlong FUN_1437513d0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143751370();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x48;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 143751460 FUN_143751460 body=90 status=ok
// SIG undefined FUN_143751460(void)

void FUN_143751460(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x18) = iVar1;
  if (0x400 < iVar1) {
    hkString::strNcmp(*(longlong *)(param_1 + 0x28),*(longlong *)(param_1 + 0x28) + (longlong)iVar1,
                      *(int *)(param_1 + 0x30) - iVar1);
    iVar1 = *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0x30) = iVar1;
    *(undefined1 *)((longlong)iVar1 + *(longlong *)(param_1 + 0x28)) = 0;
    *(longlong *)(param_1 + 0x20) =
         *(longlong *)(param_1 + 0x20) - (longlong)*(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1437514c0 FUN_1437514c0 body=58 status=ok
// SIG undefined FUN_1437514c0(void)

void FUN_1437514c0(longlong param_1)

{
  char *pcVar1;
  
  for (pcVar1 = (char *)((longlong)*(int *)(param_1 + 0x1c) + *(longlong *)(param_1 + 0x28));
      pcVar1 < *(char **)(param_1 + 0x20); pcVar1 = pcVar1 + 1) {
    if ((*pcVar1 == '\r') || (*pcVar1 == '\n')) {
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
  }
  *(int *)(param_1 + 0x1c) = (int)*(char **)(param_1 + 0x20) - *(int *)(param_1 + 0x28);
  return;
}



// FUNCTION 143751500 FUN_143751500 body=120 status=ok
// SIG undefined FUN_143751500(void)

undefined1 * FUN_143751500(longlong param_1,undefined1 *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x20)) + *(int *)(param_1 + 0x28);
  if (iVar1 < param_4) {
    FUN_143751600(param_1,param_4 - iVar1);
    iVar1 = (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x20)) + *(int *)(param_1 + 0x28);
  }
  if (iVar1 < param_4) {
    *param_2 = 0;
  }
  else {
    iVar1 = hkString::strNcmp(*(undefined8 *)(param_1 + 0x20),param_3,param_4);
    *param_2 = iVar1 == 0;
  }
  return param_2;
}



// FUNCTION 143751580 matchAndConsume body=113 status=ok
// SIG undefined matchAndConsume(void)

undefined1 *
hkParserBuffer::matchAndConsume(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  int iVar1;
  char *pcVar2;
  undefined1 local_res20 [8];
  
  iVar1 = FUN_14370c910(param_3);
  pcVar2 = (char *)FUN_143751500(param_1,local_res20,param_3,iVar1);
  if (*pcVar2 == '\0') {
    *param_2 = 0;
  }
  else {
    if (iVar1 <= (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x20)) + *(int *)(param_1 + 0x28)) {
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + (longlong)iVar1;
    }
    *param_2 = 1;
  }
  return param_2;
}



// FUNCTION 143751600 FUN_143751600 body=234 status=ok
// SIG undefined FUN_143751600(void)

int FUN_143751600(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  
  lVar3 = *(longlong *)(param_1 + 0x28);
  iVar1 = *(int *)(param_1 + 0x30);
  iVar6 = 0x100;
  if (0xff < param_2) {
    iVar6 = param_2;
  }
  uVar7 = FUN_143703a50();
  iVar2 = *(int *)(param_1 + 0x30);
  uVar8 = *(uint *)(param_1 + 0x34) & 0x3fffffff;
  iVar10 = iVar2 + iVar6 + 1;
  if ((int)uVar8 < iVar10) {
    iVar5 = uVar8 * 2;
    if (iVar10 < iVar5) {
      iVar10 = iVar5;
    }
    FUN_14370c310(uVar7,param_1 + 0x28,iVar10,1);
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar6 + 1;
  plVar4 = *(longlong **)(param_1 + 0x38);
  lVar9 = (longlong)iVar6;
  if (plVar4[1] - *plVar4 < lVar9) {
    iVar6 = hkIo::ReadBuffer::implRead(plVar4,(longlong)iVar2 + *(longlong *)(param_1 + 0x28),lVar9)
    ;
  }
  else {
    FGenericPlatformString::Memcpy();
    *plVar4 = *plVar4 + lVar9;
  }
  iVar6 = iVar6 + iVar1;
  *(undefined1 *)((longlong)iVar6 + *(longlong *)(param_1 + 0x28)) = 0;
  *(int *)(param_1 + 0x30) = iVar6;
  if (*(longlong *)(param_1 + 0x28) != lVar3) {
    *(longlong *)(param_1 + 0x20) =
         *(longlong *)(param_1 + 0x20) + (*(longlong *)(param_1 + 0x28) - lVar3);
  }
  return iVar6 - iVar1;
}



// FUNCTION 1437516f0 FUN_1437516f0 body=150 status=ok
// SIG undefined FUN_1437516f0(void)

undefined8 * FUN_1437516f0(undefined8 *param_1,undefined8 param_2)

{
  undefined1 local_res8;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkXmlStreamParser::vftable;
  FUN_14373bf20(param_1 + 3,local_res8);
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  FUN_143782320(param_1 + 10,param_2);
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x19) = 6;
  return param_1;
}



// FUNCTION 143751790 FUN_143751790 body=136 status=ok
// SIG undefined FUN_143751790(void)

longlong FUN_143751790(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1436fc2e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0xd0;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 143751820 FUN_143751820 body=238 status=ok
// SIG undefined FUN_143751820(void)

undefined8 FUN_143751820(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 0x38) = 0;
  hkCachedHashMap<hkStringMapOperations,hkBuiltinContainerAllocator<0,0>_>::clear(param_1 + 0x18);
  FUN_143751460(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  uVar1 = hkXmlLexAnalyzer::advance(param_1 + 0x50);
  while (uVar1 < 6) {
    switch(IMAGE_DOS_HEADER_140000000.e_magic +
           (&switchD_14375187c::switchdataD_143751910)[(int)uVar1]) {
    case (char *)0x14375187e:
      uVar1 = hkXmlLexAnalyzer::advance(param_1 + 0x50);
      break;
    case (char *)0x1437518a1:
      uVar2 = FUN_143751aa0(param_1);
      return uVar2;
    case (char *)0x1437518b8:
      uVar2 = FUN_143751bc0(param_1);
      return uVar2;
    case (char *)0x1437518cf:
      return 4;
    case (char *)0x1437518e4:
      return 5;
    case (char *)0x1437518f9:
      return 7;
    }
  }
  return 6;
}



// FUNCTION 143751930 FUN_143751930 body=364 status=ok
// SIG undefined FUN_143751930(void)

void FUN_143751930(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  
  hkCachedHashMap<hkStringMapOperations,hkBuiltinContainerAllocator<0,0>_>::clear(param_1 + 0x18);
  iVar7 = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (1 < *(int *)(param_1 + 0xc0)) {
    piVar3 = (int *)(*(longlong *)(param_1 + 0xb8) + 8);
    uVar6 = (ulonglong)((*(int *)(param_1 + 0xc0) - 2U >> 1) + 1);
    do {
      piVar1 = piVar3 + 1;
      iVar8 = *piVar3;
      piVar3 = piVar3 + 4;
      iVar7 = iVar7 + 1 + (*piVar1 - iVar8);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar4 = FUN_143703a50();
  iVar8 = 1;
  uVar5 = *(uint *)(param_1 + 0x4c) & 0x3fffffff;
  if ((int)uVar5 < iVar7) {
    iVar2 = uVar5 * 2;
    iVar10 = iVar7;
    if (iVar7 < iVar2) {
      iVar10 = iVar2;
    }
    FUN_14370c310(uVar4,param_1 + 0x40,iVar10,1);
  }
  *(int *)(param_1 + 0x48) = iVar7;
  lVar9 = *(longlong *)(param_1 + 0x40);
  if (1 < *(int *)(param_1 + 0xc0)) {
    lVar11 = 8;
    do {
      iVar7 = *(int *)(lVar11 + *(longlong *)(param_1 + 0xb8));
      iVar10 = *(int *)(lVar11 + 4 + *(longlong *)(param_1 + 0xb8)) - iVar7;
      hkString::strNcpy(lVar9,(*(int *)(param_1 + 0x40) - (int)lVar9) + *(int *)(param_1 + 0x48),
                        (longlong)*(int *)(param_1 + 0x80) + (longlong)iVar7 +
                        *(longlong *)(param_1 + 0x90),iVar10);
      *(undefined1 *)(iVar10 + lVar9) = 0;
      uVar4 = FUN_143703a50();
      if (*(uint *)(param_1 + 0x38) == (*(uint *)(param_1 + 0x3c) & 0x3fffffff)) {
        FUN_14370c460(uVar4,param_1 + 0x30,8);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(param_1 + 0x38) * 8) = lVar9;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
      FUN_14373c2f0(param_1 + 0x18,lVar9,(longlong)(iVar8 + 1));
      iVar8 = iVar8 + 2;
      lVar11 = lVar11 + 0x10;
      lVar9 = lVar9 + (iVar10 + 1);
    } while (iVar8 < *(int *)(param_1 + 0xc0));
  }
  return;
}



// FUNCTION 143751aa0 FUN_143751aa0 body=276 status=ok
// SIG undefined FUN_143751aa0(void)

undefined4 FUN_143751aa0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = hkXmlLexAnalyzer::advance(param_1 + 0x50);
  if (iVar1 == 0xb) {
    iVar1 = hkXmlLexAnalyzer::advance(param_1 + 0x50);
    if (iVar1 == 8) {
      FUN_143751c50(param_1);
      iVar1 = hkXmlLexAnalyzer::advance(param_1 + 0x50);
      uVar2 = 6;
      if (iVar1 == 6) {
        uVar2 = 3;
      }
      return uVar2;
    }
  }
  else if (iVar1 == 8) {
    FUN_143751c50(param_1);
    iVar1 = hkXmlLexAnalyzer::advance(param_1 + 0x50);
    while( true ) {
      if (iVar1 == 6) {
        FUN_143751930(param_1);
        return 1;
      }
      if (iVar1 != 8) break;
      FUN_143751c50(param_1);
      iVar1 = hkXmlLexAnalyzer::advance(param_1 + 0x50);
      if (iVar1 != 9) {
        return 6;
      }
      iVar1 = hkXmlLexAnalyzer::advance(param_1 + 0x50);
      if (iVar1 != 10) {
        return 6;
      }
      FUN_143751c50(param_1);
      iVar1 = hkXmlLexAnalyzer::advance(param_1 + 0x50);
    }
    if (iVar1 == 0xb) {
      iVar1 = hkXmlLexAnalyzer::advance(param_1 + 0x50);
      FUN_143751930(param_1);
      uVar2 = 6;
      if (iVar1 == 6) {
        uVar2 = 2;
      }
      return uVar2;
    }
  }
  return 6;
}



// FUNCTION 143751bc0 FUN_143751bc0 body=143 status=ok
// SIG undefined FUN_143751bc0(void)

undefined8 FUN_143751bc0(longlong param_1)

{
  int iVar1;
  
  iVar1 = hkXmlLexAnalyzer::advance(param_1 + 0x50);
  if (iVar1 == 8) {
    while( true ) {
      FUN_143751c50(param_1);
      iVar1 = hkXmlLexAnalyzer::advance(param_1 + 0x50);
      if (iVar1 == 7) {
        FUN_143751930(param_1);
        return 0;
      }
      if (iVar1 != 8) break;
      FUN_143751c50(param_1);
      iVar1 = hkXmlLexAnalyzer::advance(param_1 + 0x50);
      if (iVar1 != 9) {
        return 6;
      }
      iVar1 = hkXmlLexAnalyzer::advance(param_1 + 0x50);
      if (iVar1 != 10) {
        return 6;
      }
    }
  }
  return 6;
}



// FUNCTION 143751c50 FUN_143751c50 body=121 status=ok
// SIG undefined FUN_143751c50(void)

void FUN_143751c50(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_143703a50();
  if (*(uint *)(param_1 + 0xc0) == (*(uint *)(param_1 + 0xc4) & 0x3fffffff)) {
    FUN_14370c460(uVar2,(longlong *)(param_1 + 0xb8),8);
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0xb8) + (longlong)*(int *)(param_1 + 0xc0) * 8);
  *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
  *piVar1 = *(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80);
  piVar1[1] = (*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x90)) - *(int *)(param_1 + 0x80);
  return;
}



// FUNCTION 143751cd0 FUN_143751cd0 body=26 status=ok
// SIG undefined FUN_143751cd0(void)

void FUN_143751cd0(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143751820();
  *(undefined4 *)(param_1 + 200) = uVar1;
  return;
}



// FUNCTION 143751cf0 FUN_143751cf0 body=606 status=ok
// SIG undefined FUN_143751cf0(void)

undefined8 FUN_143751cf0(undefined8 *param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  char acStack_1a [18];
  
  FUN_143745f20(param_2);
  pcVar2 = (char *)param_1[1];
  pcVar3 = (char *)*param_1;
joined_r0x000143751d22:
  do {
    while( true ) {
      if (pcVar2 <= pcVar3) {
        return 0;
      }
      iVar8 = (int)pcVar3;
      pcVar1 = pcVar3;
      if (*pcVar3 == '&') break;
      do {
        pcVar1 = pcVar1 + 1;
        if (pcVar2 <= pcVar1) break;
      } while (*pcVar1 != '&');
      FUN_143745710(param_2,pcVar3,(int)pcVar1 - iVar8);
      pcVar3 = pcVar1;
    }
    iVar6 = (int)pcVar2 - iVar8;
    if ((4 < iVar6) && (iVar4 = hkString::strNcmp(pcVar3 + 1,&DAT_145af7bb0,4), iVar4 == 0)) {
      FUN_143745710(param_2,&DAT_145b13204,1);
      pcVar3 = pcVar3 + 5;
      goto joined_r0x000143751d22;
    }
    if (iVar6 < 4) {
LAB_143751de9:
      if (5 < iVar6) {
        iVar4 = hkString::strNcmp(pcVar3 + 1,&DAT_145af7ba0,5);
        if (iVar4 == 0) {
          FUN_143745710(param_2,&DAT_145afa020,1);
          pcVar3 = pcVar3 + 6;
          goto joined_r0x000143751d22;
        }
        iVar4 = hkString::strNcmp(pcVar3 + 1,&DAT_145af7ba8,5);
        if (iVar4 == 0) {
          FUN_143745710(param_2,&DAT_145afba48,1);
          pcVar3 = pcVar3 + 6;
          goto joined_r0x000143751d22;
        }
      }
      if ((((pcVar3[1] == '#') && (pcVar1 = pcVar3 + 2, (byte)(pcVar3[2] - 0x30U) < 10)) &&
          (3 < iVar6)) && (pcVar7 = pcVar1, pcVar1 < pcVar2)) {
        while ((byte)(*pcVar7 - 0x30U) < 10) {
          pcVar7 = pcVar7 + 1;
          if (pcVar2 <= pcVar7) {
            return 0x80040200;
          }
        }
        if ((*pcVar7 == ';') && (iVar8 = (int)pcVar7 - iVar8, iVar8 < 0x11)) {
          hkString::strNcpy(acStack_1a + 2,0x10,pcVar1,iVar8 + -2);
          pcVar7[(longlong)(acStack_1a + -(longlong)pcVar3)] = '\0';
          uVar5 = hkString::atoi(acStack_1a + 2);
          if (uVar5 < 0x100) {
            acStack_1a[2] = (char)uVar5;
            acStack_1a[3] = 0;
            FUN_143745710(param_2,acStack_1a + 2,0xffffffff);
            pcVar3 = pcVar7 + 1;
            goto joined_r0x000143751d22;
          }
        }
      }
      return 0x80040200;
    }
    iVar4 = hkString::strNcmp(pcVar3 + 1,&DAT_145af7bb8,3);
    if (iVar4 == 0) {
      FUN_143745710(param_2,&DAT_145b1488c,1);
      pcVar3 = pcVar3 + 4;
    }
    else {
      iVar4 = hkString::strNcmp(pcVar3 + 1,&DAT_145af7bbc,3);
      if (iVar4 != 0) goto LAB_143751de9;
      FUN_143745710(param_2,&DAT_145b069a8,1);
      pcVar3 = pcVar3 + 4;
    }
  } while( true );
}



// FUNCTION 143751f50 FUN_143751f50 body=67 status=ok
// SIG undefined FUN_143751f50(void)

longlong * FUN_143751f50(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  if (0 < *(int *)(param_1 + 0xc0)) {
    piVar1 = *(int **)(param_1 + 0xb8);
    lVar2 = (longlong)*(int *)(param_1 + 0x80) + *(longlong *)(param_1 + 0x90);
    *param_2 = *piVar1 + lVar2;
    param_2[1] = piVar1[1] + lVar2;
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 143751fa0 FUN_143751fa0 body=148 status=ok
// SIG undefined FUN_143751fa0(void)

undefined4 *
FUN_143751fa0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int *piVar2;
  undefined8 local_28;
  char *local_20;
  char *pcStack_18;
  
  local_20 = (char *)0x0;
  pcStack_18 = (char *)0x0;
  piVar2 = (int *)FUN_143752040(0,&local_28,param_3,&local_20);
  if (((-1 < *piVar2) && (*local_20 == '\"')) &&
     (pcStack_18 = (char *)((longlong)pcStack_18 + -1), *pcStack_18 == '\"')) {
    local_20 = local_20 + 1;
    local_28 = 0;
    uVar1 = FUN_143752110(&local_20,&local_28);
    *param_2 = uVar1;
    *param_4 = (undefined4)local_28;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 143752040 FUN_143752040 body=156 status=ok
// SIG undefined FUN_143752040(void)

undefined4 *
FUN_143752040(longlong param_1,undefined4 *param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = FUN_14373c2c0(param_1 + 0x18,param_3,0xffffffffffffffff);
  if (iVar2 < 0) {
    *param_2 = 0x80040200;
    return param_2;
  }
  lVar3 = *(longlong *)(param_1 + 0xb8);
  *param_2 = 0;
  piVar1 = (int *)(lVar3 + (longlong)iVar2 * 8);
  lVar3 = (longlong)*(int *)(param_1 + 0x80) + *(longlong *)(param_1 + 0x90);
  iVar2 = piVar1[1];
  *param_4 = *piVar1 + lVar3;
  param_4[1] = iVar2 + lVar3;
  return param_2;
}



// FUNCTION 1437520e0 FUN_1437520e0 body=43 status=ok
// SIG undefined FUN_1437520e0(void)

byte * FUN_1437520e0(undefined8 param_1,byte *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined1 local_res10 [24];
  undefined1 local_18 [16];
  
  puVar1 = (undefined4 *)FUN_143752040(param_1,local_res10,param_3,local_18);
  *param_2 = (byte)((uint)*puVar1 >> 0x1f) ^ 1;
  return param_2;
}



// FUNCTION 143752110 FUN_143752110 body=187 status=ok
// SIG undefined FUN_143752110(void)

undefined8 FUN_143752110(int *param_1,undefined8 *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  char local_28 [32];
  
  if (param_1[2] - *param_1 < 1) {
    return 0x80040200;
  }
  pcVar2 = *(char **)(param_1 + 2);
  pcVar3 = *(char **)param_1;
  pcVar4 = pcVar3;
  if (*pcVar3 == '-') {
    pcVar4 = pcVar3 + 1;
  }
  if (pcVar4 < pcVar2) {
    cVar1 = *pcVar4;
    while ((byte)(cVar1 - 0x30U) < 10) {
      pcVar4 = pcVar4 + 1;
      if (pcVar2 <= pcVar4) {
        hkString::strNcpy(local_28,0x20,pcVar3,(int)pcVar2 - (int)pcVar3);
        pcVar2[(longlong)(local_28 + -(longlong)pcVar3)] = '\0';
        uVar5 = FUN_14370c5c0(local_28,0);
        *param_2 = uVar5;
        return 0;
      }
      cVar1 = *pcVar4;
    }
  }
  return 0x80040200;
}



// FUNCTION 1437521e0 FUN_1437521e0 body=120 status=ok
// SIG undefined FUN_1437521e0(void)

undefined8 FUN_1437521e0(longlong *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  
  if (*param_1 == 0) {
    pvVar1 = TlsGetValue(DAT_146b7bf70);
    if (pvVar1 == (LPVOID)0x0) {
      pvVar1 = DAT_146b7bf68;
    }
    lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar1 + 0x58),0x128);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_1437524a0(lVar2);
    }
    if (lVar2 != *param_1) {
      if (*param_1 != 0) {
        FUN_14370c150();
      }
      *param_1 = lVar2;
    }
    return 0;
  }
  return 0;
}



// FUNCTION 143752260 FUN_143752260 body=551 status=ok
// SIG undefined FUN_143752260(void)

void FUN_143752260(longlong param_1,uint param_2,int param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  uint uVar16;
  bool bVar17;
  uint local_res10;
  uint local_68;
  int local_64;
  ulonglong local_48;
  int iStack_30;
  
  uVar12 = (ulonglong)(int)param_2;
  uVar15 = uVar12;
  local_res10 = param_2;
LAB_143752287:
  local_48 = (ulonglong)param_3;
  local_68 = (uint)uVar12;
  uVar12 = uVar12 & 0xffffffff;
  plVar14 = (longlong *)(param_1 + ((longlong)(int)(local_68 + param_3) >> 1) * 0x10);
  lVar8 = *plVar14;
  iStack_30 = (int)plVar14[1];
  local_64 = param_3;
LAB_1437522d2:
  plVar14 = (longlong *)(uVar15 * 0x10 + param_1);
  do {
    iVar11 = hkReflect::Type::compareName(*(undefined8 *)(*plVar14 + 8),*(undefined8 *)(lVar8 + 8));
    bVar17 = iVar11 < 0;
    if (iVar11 == 0) {
      if ((int)plVar14[1] != iStack_30) {
        bVar17 = (int)plVar14[1] < iStack_30;
        goto LAB_143752303;
      }
      lVar4 = *(longlong *)(*plVar14 + 8);
      if ((lVar4 == *(longlong *)(lVar8 + 8)) ||
         (lVar13 = FUN_14374a300(), uVar16 = local_68, lVar4 != lVar13)) break;
    }
    else {
LAB_143752303:
      uVar16 = (uint)uVar12;
      if (!bVar17) break;
    }
    local_68 = uVar16 + 1;
    uVar12 = (ulonglong)local_68;
    uVar15 = uVar15 + 1;
    plVar14 = plVar14 + 2;
  } while( true );
  plVar14 = (longlong *)(local_48 * 0x10 + param_1);
  do {
    iVar11 = hkReflect::Type::compareName(*(undefined8 *)(lVar8 + 8),*(undefined8 *)(*plVar14 + 8));
    bVar17 = iVar11 < 0;
    if (iVar11 == 0) {
      if (iStack_30 != (int)plVar14[1]) {
        bVar17 = iStack_30 < (int)plVar14[1];
        goto LAB_14375238d;
      }
      lVar4 = *(longlong *)(lVar8 + 8);
      if ((lVar4 == *(longlong *)(*plVar14 + 8)) || (lVar13 = FUN_14374a300(), lVar4 != lVar13))
      break;
    }
    else {
LAB_14375238d:
      if (!bVar17) break;
    }
    local_64 = local_64 + -1;
    local_48 = local_48 - 1;
    plVar14 = plVar14 + -2;
  } while( true );
  if ((longlong)local_48 < (longlong)uVar15) goto LAB_143752443;
  if (local_48 != uVar15) {
    puVar1 = (undefined8 *)(param_1 + local_48 * 0x10);
    uVar9 = *puVar1;
    uVar10 = puVar1[1];
    puVar2 = (undefined4 *)(param_1 + uVar15 * 0x10);
    uVar5 = puVar2[1];
    uVar6 = puVar2[2];
    uVar7 = puVar2[3];
    puVar3 = (undefined4 *)(param_1 + local_48 * 0x10);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    puVar3[2] = uVar6;
    puVar3[3] = uVar7;
    puVar1 = (undefined8 *)(param_1 + uVar15 * 0x10);
    *puVar1 = uVar9;
    puVar1[1] = uVar10;
  }
  local_48 = local_48 - 1;
  local_64 = local_64 + -1;
  local_68 = local_68 + 1;
  uVar12 = (ulonglong)local_68;
  uVar15 = uVar15 + 1;
  if ((longlong)local_48 < (longlong)uVar15) goto LAB_143752443;
  goto LAB_1437522d2;
LAB_143752443:
  if ((int)local_res10 < local_64) {
    FUN_143752260(param_1,local_res10,local_64,param_4);
  }
  if (param_3 <= (int)local_68) {
    return;
  }
  uVar12 = (ulonglong)local_68;
  local_res10 = local_68;
  goto LAB_143752287;
}



// FUNCTION 1437524a0 FUN_1437524a0 body=2022 status=ok
// SIG undefined FUN_1437524a0(void)

undefined8 * FUN_1437524a0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined *local_res8;
  ulonglong local_res10;
  undefined1 local_98 [4];
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_60 [4];
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkReflect::Detail::BuiltinTypeReg::vftable;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar4 = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  FUN_14370d870(param_1 + 6,0);
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80000000;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80000000;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0xffffffff;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x80000000;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffffffffffff;
  local_98[0] = 1;
  local_94 = 0x1fff;
  local_90 = 0x7ffffeff;
  local_88 = 1;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 1;
  FUN_14374b970(param_1 + 0x16,local_98);
  local_res8 = &DAT_1467f5a60;
  puVar2 = (undefined8 *)FUN_143714420(&DAT_1467f5a60,1);
  uVar1 = uVar4;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = (uint)*puVar2;
  }
  local_res10 = (ulonglong)uVar1;
  uVar3 = FUN_143703a50();
  FUN_14372d6e0(param_1 + 0xf,uVar3,&local_res10,&local_res8);
  local_res8 = &DAT_1467f5be0;
  puVar2 = (undefined8 *)FUN_143714420(&DAT_1467f5be0,1);
  uVar1 = uVar4;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = (uint)*puVar2;
  }
  local_res10 = (ulonglong)uVar1;
  uVar3 = FUN_143703a50();
  FUN_14372d6e0(param_1 + 0xf,uVar3,&local_res10,&local_res8);
  local_res8 = &DAT_1467f5d60;
  puVar2 = (undefined8 *)FUN_143714420(&DAT_1467f5d60,1);
  if (puVar2 != (undefined8 *)0x0) {
    uVar4 = (uint)*puVar2;
  }
  local_res10 = (ulonglong)uVar4;
  uVar3 = FUN_143703a50();
  FUN_14372d6e0(param_1 + 0xf,uVar3,&local_res10,&local_res8);
  local_res8 = &DAT_1467f56a0;
  puVar2 = (undefined8 *)FUN_143714420(&DAT_1467f56a0,1);
  uVar4 = 0;
  uVar1 = uVar4;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = (uint)*puVar2;
  }
  local_res10 = (ulonglong)uVar1;
  uVar3 = FUN_143703a50();
  FUN_14372d6e0(param_1 + 0xf,uVar3,&local_res10,&local_res8);
  local_res8 = &DAT_1467f5b20;
  puVar2 = (undefined8 *)FUN_143714420(&DAT_1467f5b20,1);
  uVar1 = uVar4;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = (uint)*puVar2;
  }
  local_res10 = (ulonglong)uVar1;
  uVar3 = FUN_143703a50();
  FUN_14372d6e0(param_1 + 0xf,uVar3,&local_res10,&local_res8);
  local_res8 = &DAT_1467f5ca0;
  puVar2 = (undefined8 *)FUN_143714420(&DAT_1467f5ca0,1);
  uVar1 = uVar4;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = (uint)*puVar2;
  }
  local_res10 = (ulonglong)uVar1;
  uVar3 = FUN_143703a50();
  FUN_14372d6e0(param_1 + 0xf,uVar3,&local_res10,&local_res8);
  local_res8 = &DAT_1467f5e20;
  puVar2 = (undefined8 *)FUN_143714420(&DAT_1467f5e20,1);
  uVar1 = uVar4;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = (uint)*puVar2;
  }
  local_res10 = (ulonglong)uVar1;
  uVar3 = FUN_143703a50();
  FUN_14372d6e0(param_1 + 0xf,uVar3,&local_res10,&local_res8);
  local_res8 = &DAT_1467f5760;
  puVar2 = (undefined8 *)FUN_143714420(&DAT_1467f5760,1);
  uVar1 = uVar4;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = (uint)*puVar2;
  }
  local_res10 = (ulonglong)uVar1;
  uVar3 = FUN_143703a50();
  FUN_14372d6e0(param_1 + 0xf,uVar3,&local_res10,&local_res8);
  local_res8 = &DAT_1467f5ac0;
  puVar2 = (undefined8 *)FUN_143714420(&DAT_1467f5ac0,1);
  uVar1 = uVar4;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = (uint)*puVar2;
  }
  local_res10 = (ulonglong)uVar1;
  uVar3 = FUN_143703a50();
  FUN_14372d6e0(param_1 + 0xf,uVar3,&local_res10,&local_res8);
  local_res8 = &DAT_1467f5c40;
  puVar2 = (undefined8 *)FUN_143714420(&DAT_1467f5c40,1);
  uVar1 = uVar4;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = (uint)*puVar2;
  }
  local_res10 = (ulonglong)uVar1;
  uVar3 = FUN_143703a50();
  FUN_14372d6e0(param_1 + 0xf,uVar3,&local_res10,&local_res8);
  local_res8 = &DAT_1467f5dc0;
  puVar2 = (undefined8 *)FUN_143714420(&DAT_1467f5dc0,1);
  uVar1 = uVar4;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = (uint)*puVar2;
  }
  local_res10 = (ulonglong)uVar1;
  uVar3 = FUN_143703a50();
  FUN_14372d6e0(param_1 + 0xf,uVar3,&local_res10,&local_res8);
  local_res8 = &DAT_1467f5700;
  puVar2 = (undefined8 *)FUN_143714420(&DAT_1467f5700,1);
  uVar1 = uVar4;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = (uint)*puVar2;
  }
  local_res10 = (ulonglong)uVar1;
  uVar3 = FUN_143703a50();
  FUN_14372d6e0(param_1 + 0xf,uVar3,&local_res10,&local_res8);
  local_res8 = &DAT_1467f5b80;
  puVar2 = (undefined8 *)FUN_143714420(&DAT_1467f5b80,1);
  uVar1 = uVar4;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = (uint)*puVar2;
  }
  local_res10 = (ulonglong)uVar1;
  uVar3 = FUN_143703a50();
  FUN_14372d6e0(param_1 + 0xf,uVar3,&local_res10,&local_res8);
  local_res8 = &DAT_1467f5d00;
  puVar2 = (undefined8 *)FUN_143714420(&DAT_1467f5d00,1);
  uVar1 = uVar4;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = (uint)*puVar2;
  }
  local_res10 = (ulonglong)uVar1;
  uVar3 = FUN_143703a50();
  FUN_14372d6e0(param_1 + 0xf,uVar3,&local_res10,&local_res8);
  local_res8 = &DAT_1467f5e80;
  puVar2 = (undefined8 *)FUN_143714420(&DAT_1467f5e80,1);
  uVar1 = uVar4;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = (uint)*puVar2;
  }
  local_res10 = (ulonglong)uVar1;
  uVar3 = FUN_143703a50();
  FUN_14372d6e0(param_1 + 0xf,uVar3,&local_res10,&local_res8);
  local_res8 = &DAT_1467f57c0;
  puVar2 = (undefined8 *)FUN_143714420(&DAT_1467f57c0,1);
  uVar1 = uVar4;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = (uint)*puVar2;
  }
  local_res10 = (ulonglong)uVar1;
  uVar3 = FUN_143703a50();
  FUN_14372d6e0(param_1 + 0xf,uVar3,&local_res10,&local_res8);
  local_res8 = &DAT_1467f58e0;
  puVar2 = (undefined8 *)FUN_143714420(&DAT_1467f58e0,1);
  uVar1 = uVar4;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = (uint)*puVar2;
  }
  local_res10 = (ulonglong)uVar1;
  uVar3 = FUN_143703a50();
  FUN_14372d6e0(param_1 + 0xf,uVar3,&local_res10,&local_res8);
  local_res8 = &DAT_1467f59a0;
  puVar2 = (undefined8 *)FUN_143714420(&DAT_1467f59a0,1);
  uVar1 = uVar4;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = (uint)*puVar2;
  }
  local_res10 = (ulonglong)uVar1;
  uVar3 = FUN_143703a50();
  FUN_14372d6e0(param_1 + 0xf,uVar3,&local_res10,&local_res8);
  local_res8 = &DAT_1467f5940;
  puVar2 = (undefined8 *)FUN_143714420(&DAT_1467f5940,1);
  if (puVar2 != (undefined8 *)0x0) {
    uVar4 = (uint)*puVar2;
  }
  local_res10 = (ulonglong)uVar4;
  uVar3 = FUN_143703a50();
  FUN_14372d6e0(param_1 + 0xf,uVar3,&local_res10,&local_res8);
  local_res8 = &DAT_1467f5a00;
  puVar2 = (undefined8 *)FUN_143714420(&DAT_1467f5a00,1);
  uVar4 = 0;
  uVar1 = uVar4;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = (uint)*puVar2;
  }
  local_res10 = (ulonglong)uVar1;
  uVar3 = FUN_143703a50();
  FUN_14372d6e0(param_1 + 0xf,uVar3,&local_res10,&local_res8);
  local_res8 = &DAT_1467f5820;
  puVar2 = (undefined8 *)FUN_143714420(&DAT_1467f5820,1);
  uVar1 = uVar4;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = (uint)*puVar2;
  }
  local_res10 = (ulonglong)uVar1;
  uVar3 = FUN_143703a50();
  FUN_14372d6e0(param_1 + 0xf,uVar3,&local_res10,&local_res8);
  local_res8 = &DAT_1467f5880;
  puVar2 = (undefined8 *)FUN_143714420(&DAT_1467f5880,1);
  uVar1 = uVar4;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = (uint)*puVar2;
  }
  local_res10 = (ulonglong)uVar1;
  uVar3 = FUN_143703a50();
  FUN_14372d6e0(param_1 + 0xf,uVar3,&local_res10,&local_res8);
  local_res8 = &DAT_1467e01f0;
  puVar2 = (undefined8 *)FUN_143714420(&DAT_1467e01f0,1);
  uVar1 = uVar4;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = (uint)*puVar2;
  }
  local_res10 = (ulonglong)uVar1;
  uVar3 = FUN_143703a50();
  FUN_14372d6e0(param_1 + 0xf,uVar3,&local_res10,&local_res8);
  local_res8 = &DAT_1467e0db0;
  puVar2 = (undefined8 *)FUN_143714420(&DAT_1467e0db0,1);
  uVar1 = uVar4;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = (uint)*puVar2;
  }
  local_res10 = (ulonglong)uVar1;
  uVar3 = FUN_143703a50();
  FUN_14372d6e0(param_1 + 0xf,uVar3,&local_res10,&local_res8);
  local_res8 = &DAT_1467e1a10;
  puVar2 = (undefined8 *)FUN_143714420(&DAT_1467e1a10,1);
  uVar1 = uVar4;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = (uint)*puVar2;
  }
  local_res10 = (ulonglong)uVar1;
  uVar3 = FUN_143703a50();
  FUN_14372d6e0(param_1 + 0xf,uVar3,&local_res10,&local_res8);
  local_res8 = &DAT_1467e2360;
  puVar2 = (undefined8 *)FUN_143714420(&DAT_1467e2360,1);
  uVar1 = uVar4;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = (uint)*puVar2;
  }
  local_res10 = (ulonglong)uVar1;
  uVar3 = FUN_143703a50();
  FUN_14372d6e0(param_1 + 0xf,uVar3,&local_res10,&local_res8);
  local_res8 = &DAT_1467f0048;
  puVar2 = (undefined8 *)FUN_143714420(&DAT_1467f0048,1);
  if (puVar2 != (undefined8 *)0x0) {
    uVar4 = (uint)*puVar2;
  }
  local_res10 = (ulonglong)uVar4;
  uVar3 = FUN_143703a50();
  FUN_14372d6e0(param_1 + 0xf,uVar3,&local_res10,&local_res8);
  local_60[0] = 1;
  local_5c = 0x1fff;
  local_58 = 0x7ffffeff;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 1;
  local_50 = 0;
  FUN_14374bb50(param_1 + 0x16,local_60);
  return param_1;
}



// FUNCTION 143752c90 FUN_143752c90 body=424 status=ok
// SIG undefined FUN_143752c90(void)

void FUN_143752c90(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *param_1 = hkReflect::Detail::BuiltinTypeReg::vftable;
  lVar2 = (longlong)(*(int *)(param_1 + 0xe) + -1);
  if (-1 < *(int *)(param_1 + 0xe) + -1) {
    do {
      FUN_143744e50(*(undefined8 *)(param_1[0xd] + lVar2 * 8));
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  thunk_FUN_143734820(param_1 + 0x18);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xbc)) {
    FUN_143702e10(uVar1,param_1[0x16],8,*(uint *)((longlong)param_1 + 0xbc) & 0x3fffffff);
  }
  param_1[0x16] = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x80000000;
  uVar1 = FUN_143703a50();
  FUN_143700a90(param_1 + 0x13,uVar1);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x94)) {
    FUN_143702e10(uVar1,param_1[0x11],0x10,*(uint *)((longlong)param_1 + 0x94) & 0x3fffffff);
  }
  param_1[0x11] = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x80000000;
  uVar1 = FUN_143703a50();
  FUN_143700a90(param_1 + 0xf,uVar1);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x74)) {
    FUN_143702e10(uVar1,param_1[0xd],8,*(uint *)((longlong)param_1 + 0x74) & 0x3fffffff);
  }
  param_1[0xd] = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 100)) {
    FUN_143702e10(uVar1,param_1[0xb],8,*(uint *)((longlong)param_1 + 100) & 0x3fffffff);
  }
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80000000;
  FWindowsCriticalSection::~FWindowsCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 5) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) {
    FUN_143702e10(uVar1,param_1[4],8,*(uint *)((longlong)param_1 + 0x2c) & 0x3fffffff);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  FUN_14376fbe0(param_1);
  return;
}



// FUNCTION 143752e40 FUN_143752e40 body=139 status=ok
// SIG undefined FUN_143752e40(void)

longlong FUN_143752e40(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143752c90();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x128;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x128);
    }
  }
  return param_1;
}



// FUNCTION 143752ed0 FUN_143752ed0 body=169 status=ok
// SIG undefined FUN_143752ed0(void)

undefined8 * FUN_143752ed0(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  *param_1 = hkReflect::Detail::BuiltinTypeReg::SubscriptionImpl::vftable;
  if (param_1[3] != 0) {
    *(undefined8 *)(*(longlong *)(param_1[3] + 0x58) + (longlong)*(int *)(param_1 + 4) * 8) = 0;
  }
  FUN_14370c000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      sVar2 = 0x38;
      if (*(short *)(param_1 + 2) != -1) {
        sVar2 = *(short *)(param_1 + 2);
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 143752f80 FUN_143752f80 body=445 status=ok
// SIG undefined FUN_143752f80(void)

undefined4 * FUN_143752f80(longlong param_1,undefined4 *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong local_res18;
  longlong local_98;
  longlong local_90;
  longlong *local_88;
  undefined8 **ppuStack_80;
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
  
  local_res18 = param_3;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  lVar2 = FUN_143754c80(param_1,local_res18);
  if (lVar2 == 0) {
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x70)) {
      lVar2 = 0;
      do {
        if (local_res18 == *(longlong *)(*(longlong *)(param_1 + 0x68) + lVar2)) goto LAB_14375307d;
        iVar1 = hkReflect::Type::compareName(*(undefined8 *)(*(longlong *)(param_1 + 0x68) + lVar2))
        ;
        if (iVar1 == 0) {
          lVar2 = (longlong)iVar4 * 8;
          local_98 = *(longlong *)(lVar2 + *(longlong *)(param_1 + 0x68));
          local_90 = local_res18;
          local_88 = &local_98;
          ppuStack_80 = &local_88;
          local_78 = 0;
          uStack_70 = 0;
          local_68 = 0;
          uStack_60 = 0;
          local_58 = local_88;
          uStack_50 = ppuStack_80;
          FUN_143753b20(param_1,&local_78);
          FUN_143744e50(*(undefined8 *)(*(longlong *)(param_1 + 0x68) + lVar2));
          *(longlong *)(lVar2 + *(longlong *)(param_1 + 0x68)) = local_res18;
          goto LAB_14375307d;
        }
        iVar4 = iVar4 + 1;
        lVar2 = lVar2 + 8;
      } while (iVar4 < *(int *)(param_1 + 0x70));
    }
    uVar3 = FUN_143703a50();
    if (*(uint *)(param_1 + 0x70) == (*(uint *)(param_1 + 0x74) & 0x3fffffff)) {
      FUN_14370c460(uVar3,param_1 + 0x68,8);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x68) + (longlong)*(int *)(param_1 + 0x70) * 8) =
         local_res18;
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
    local_88 = &local_res18;
    ppuStack_80 = (undefined8 **)&stack0x00000020;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_48 = local_88;
    uStack_40 = ppuStack_80;
    FUN_143753b20(param_1,&local_48);
LAB_14375307d:
    *param_2 = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  }
  else {
    *param_2 = 0x80040200;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  }
  return param_2;
}



// FUNCTION 143753140 FUN_143753140 body=204 status=ok
// SIG undefined FUN_143753140(void)

void FUN_143753140(longlong param_1,longlong *param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  do {
    uVar2 = FUN_1437151f0(*(undefined8 *)(param_1 + 8));
    iVar1 = hkString::strCmp(uVar2,param_3);
    if (iVar1 == 0) {
      lVar3 = FUN_143715320(*(undefined8 *)(param_1 + 8));
      if ((lVar3 != 0) == (bool)param_4) {
        uVar2 = *(undefined8 *)(param_1 + 8);
        uVar4 = FUN_143703a50();
        if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
          FUN_14370c460(uVar4,param_2,8);
        }
        *(undefined8 *)(*param_2 + (longlong)(int)param_2[1] * 8) = uVar2;
        *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      }
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_143753140(*(longlong *)(param_1 + 0x18),param_2,param_3,param_4);
    }
    param_1 = *(longlong *)(param_1 + 0x10);
  } while (param_1 != 0);
  return;
}



// FUNCTION 143753210 FUN_143753210 body=437 status=ok
// SIG undefined FUN_143753210(void)

void FUN_143753210(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong local_58;
  uint local_50;
  uint local_4c;
  undefined8 local_48;
  longlong lStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  longlong lStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  uVar2 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x28) == (*(uint *)(param_1 + 0x2c) & 0x3fffffff)) {
    FUN_14370c460(uVar2,param_1 + 0x20,8);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)*(int *)(param_1 + 0x28) * 8) = param_2;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  for (lVar3 = param_2; lVar3 != 0; lVar3 = FUN_143744a90(lVar3)) {
    FUN_143754910(*(undefined8 *)(lVar3 + 8));
  }
  FUN_143753ef0(param_1);
  for (lVar3 = param_2; lVar3 != 0; lVar3 = FUN_143744a90(lVar3)) {
    FUN_14374a0d0(*(undefined8 *)(lVar3 + 8));
  }
  local_4c = 0x80000000;
  local_58 = 0;
  local_50 = 0;
  for (; param_2 != 0; param_2 = FUN_143744a90(param_2)) {
    cVar1 = FUN_143744b50(param_2);
    if (cVar1 == '\0') {
      uVar2 = *(undefined8 *)(param_2 + 8);
      uVar4 = FUN_143703a50();
      if (local_50 == (local_4c & 0x3fffffff)) {
        FUN_14370c460(uVar4,&local_58,8);
      }
      *(undefined8 *)(local_58 + (longlong)(int)local_50 * 8) = uVar2;
      local_50 = local_50 + 1;
    }
  }
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  lStack_40 = local_58 + (longlong)(int)local_50 * 8;
  local_48._0_4_ = (undefined4)local_58;
  local_48._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  local_38 = (undefined4)local_48;
  uStack_34 = local_48._4_4_;
  local_48 = local_58;
  lStack_30 = lStack_40;
  FUN_143753b20(param_1,&local_38);
  uVar2 = FUN_143703a50();
  local_50 = 0;
  if (-1 < (int)local_4c) {
    FUN_143702e10(uVar2,local_58,8,local_4c & 0x3fffffff);
  }
                    /* WARNING: Could not recover jumptable at 0x0001437533be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}



// FUNCTION 1437533d0 FUN_1437533d0 body=321 status=ok
// SIG undefined FUN_1437533d0(void)

int FUN_1437533d0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int *piVar5;
  undefined8 uVar6;
  longlong local_res18;
  longlong local_res20;
  longlong local_38;
  undefined8 local_30;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_res18 = FUN_14374a300();
  local_res20 = local_res18;
  plVar4 = (longlong *)FUN_14372d420(param_4,&local_res20,&local_res18);
  local_res20 = -1;
  lVar3 = *plVar4;
  local_38 = lVar3;
  piVar5 = (int *)FUN_14372d420(param_3,&local_38,&local_res20);
  iVar2 = *piVar5;
  if (iVar2 < 0) {
    iStack_28 = -1;
    if (*(longlong *)(lVar3 + 8) != 0) {
      uVar6 = hkReflect::TypeDetail::skipDecorators();
      iStack_28 = FUN_1437533d0(uVar6,param_2,param_3,param_4);
    }
    iVar2 = (int)param_2[1];
    uStack_24 = 0xffffffff;
    if (iStack_28 == -1) {
      local_20 = 0xffffffff;
    }
    else {
      local_20 = *(undefined4 *)(*param_2 + 0xc + (longlong)iStack_28 * 0x18);
      *(int *)(*param_2 + (longlong)iStack_28 * 0x18 + 0xc) = iVar2;
    }
    local_30 = lVar3;
    if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
      FUN_14370c460(&PTR_vftable_1467f0638,param_2,0x18);
    }
    puVar1 = (undefined4 *)(*param_2 + (longlong)(int)param_2[1] * 0x18);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = (undefined4)local_30;
      puVar1[1] = local_30._4_4_;
      puVar1[2] = iStack_28;
      puVar1[3] = uStack_24;
      *(ulonglong *)(puVar1 + 4) = CONCAT44(uStack_1c,local_20);
    }
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    local_res18 = (longlong)iVar2;
    local_res20 = lVar3;
    FUN_14372d6e0(param_3,&PTR_vftable_1467f0638,&local_res20,&local_res18);
  }
  return iVar2;
}



// FUNCTION 143753520 FUN_143753520 body=311 status=ok
// SIG undefined FUN_143753520(void)

void FUN_143753520(longlong param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar10 = 0;
    do {
      for (lVar4 = *(longlong *)(lVar10 + *(longlong *)(param_1 + 0x20)); lVar4 != 0;
          lVar4 = FUN_143744a90(lVar4)) {
        cVar2 = FUN_143744b50(lVar4);
        if (cVar2 == '\0') {
          uVar5 = *(undefined8 *)(lVar4 + 8);
          uVar3 = FUN_143703a50();
          if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
            FUN_14370c460(uVar3,param_2,8);
          }
          *(undefined8 *)(*param_2 + (longlong)(int)param_2[1] * 8) = uVar5;
          *(int *)(param_2 + 1) = (int)param_2[1] + 1;
        }
      }
      iVar8 = iVar8 + 1;
      lVar10 = lVar10 + 8;
    } while (iVar8 < *(int *)(param_1 + 0x28));
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  iVar8 = *(int *)(param_1 + 0x70);
  lVar4 = (longlong)iVar8;
  lVar10 = *(longlong *)(param_1 + 0x68);
  uVar5 = FUN_143703a50();
  uVar6 = *(uint *)((longlong)param_2 + 0xc) & 0x3fffffff;
  iVar9 = (int)param_2[1] + iVar8;
  if (((int)uVar6 < iVar9) && ((int)uVar6 < iVar9)) {
    iVar1 = iVar9;
    if (iVar9 < (int)(uVar6 * 2)) {
      iVar1 = uVar6 * 2;
    }
    FUN_14370c310(uVar5,param_2,iVar1,8);
  }
  puVar7 = (undefined8 *)(*param_2 + (longlong)(int)param_2[1] * 8);
  if (0 < iVar8) {
    lVar10 = lVar10 - (longlong)puVar7;
    do {
      *puVar7 = *(undefined8 *)(lVar10 + (longlong)puVar7);
      puVar7 = puVar7 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  *(int *)(param_2 + 1) = iVar9;
                    /* WARNING: Could not recover jumptable at 0x000143753650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}



// FUNCTION 143753660 FUN_143753660 body=168 status=ok
// SIG undefined FUN_143753660(void)

uint FUN_143753660(int param_1,longlong *param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  ulonglong *puVar4;
  
  puVar2 = *(uint **)(*param_2 + (longlong)param_1 * 0x18);
  uVar3 = param_3 + 1U;
  for (iVar1 = *(int *)(*param_2 + 0xc + (longlong)param_1 * 0x18); -1 < iVar1;
      iVar1 = *(int *)(*param_2 + 0x10 + (longlong)iVar1 * 0x18)) {
    uVar3 = FUN_143753660(iVar1,param_2,uVar3);
  }
  if (((*puVar2 >> 0xf & 1) != 0) &&
     (puVar4 = (ulonglong *)FUN_1437143d0(puVar2,0x8000), puVar4 != (ulonglong *)0x0)) {
    *puVar4 = (ulonglong)((param_3 + 1U) * 0x10000 | uVar3 & 0xffff);
  }
  return uVar3;
}



// FUNCTION 143753710 FUN_143753710 body=47 status=ok
// SIG undefined FUN_143753710(void)

undefined8 FUN_143753710(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined8 local_res8 [2];
  ulonglong local_res18 [2];
  
  local_res18[0] = param_2 & 0xffffffff;
  local_res8[0] = 0;
  puVar1 = (undefined8 *)FUN_14372d420(param_1 + 0x78,local_res18,local_res8);
  return *puVar1;
}



// FUNCTION 143753740 FUN_143753740 body=38 status=ok
// SIG undefined FUN_143753740(void)

void FUN_143753740(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  hkMapBase<unsigned___int64,unsigned___int64,hkMapOperations<unsigned___int64>_>::clear
            (param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  return;
}



// FUNCTION 143753770 FUN_143753770 body=131 status=ok
// SIG undefined FUN_143753770(void)

void FUN_143753770(char *param_1,char *param_2,longlong *param_3)

{
  char cVar1;
  
  cVar1 = *param_1;
  while ((cVar1 == ' ' && (param_1 < param_2))) {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  param_2 = param_2 + -1;
  cVar1 = *param_2;
  while( true ) {
    if (cVar1 != ' ') {
      if (param_1 <= param_2) {
        param_2[1] = '\0';
        if (*(uint *)(param_3 + 1) == (*(uint *)((longlong)param_3 + 0xc) & 0x3fffffff)) {
          FUN_14370c460(&PTR_vftable_1467f0638,param_3,8);
        }
        *(char **)(*param_3 + (longlong)(int)param_3[1] * 8) = param_1;
        *(int *)(param_3 + 1) = (int)param_3[1] + 1;
      }
      return;
    }
    if (param_2 < param_1) break;
    param_2 = param_2 + -1;
    cVar1 = *param_2;
  }
  return;
}



// FUNCTION 143753800 FUN_143753800 body=799 status=ok
// SIG undefined FUN_143753800(void)

undefined4 FUN_143753800(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 local_res8;
  undefined1 local_58 [64];
  
  local_res8 = param_1;
  FUN_1437455a0(param_3,param_1);
  iVar1 = FUN_143746140(param_3,0x3c,0,0x7fffffff);
  if (iVar1 == 0) {
    if (1 < DAT_146b83488) {
      FUN_14373a730(local_58,&DAT_146b83480,2);
      lVar3 = FUN_14373bbd0(local_58,"Invalid type name: \'{}\' (empty root)",&DAT_145b74470,
                            &local_res8,0);
      *(char **)(lVar3 + 0x20) = "Reflect\\TypeReg\\Detail\\hkTypeRegDetail.cpp";
      *(undefined8 *)(lVar3 + 0x28) = 0xf3;
      FUN_14373a950(local_58);
    }
  }
  else {
    iVar5 = 0;
    if (iVar1 < 0) {
      if ((int)param_3[1] == 1) {
        return 0;
      }
      if (*(char *)((longlong)((int)param_3[1] + -2) + *param_3) == '*') {
        FUN_143746ca0(param_2);
        FUN_143753770(*param_2,(longlong)((int)param_2[1] + -1) + *param_2,param_4);
        FUN_1437455a0(param_3,&DAT_145b7313c);
        return 0;
      }
      return 0;
    }
    FUN_143745460(param_2,param_3);
    FUN_143745e50(param_3,((int)param_3[1] - iVar1) + -1);
    iVar2 = FUN_1437462c0(param_2,&DAT_145b069a8,0,0x7fffffff);
    if (iVar1 <= iVar2) {
      FUN_143746da0(param_2,iVar1 + 1,(iVar2 - iVar1) + -1);
      lVar6 = *param_2;
      cVar4 = *(char *)(lVar6 + 1);
      lVar3 = lVar6 + 1;
      if (cVar4 != '\0') {
        do {
          if (cVar4 == '<') {
            iVar1 = iVar5 + 1;
          }
          else {
            iVar1 = iVar5;
            if (iVar5 == 0) {
              if (cVar4 == ',') {
                FUN_143753770(lVar6,lVar3,param_4);
                lVar3 = lVar3 + 1;
                lVar6 = lVar3;
              }
              else if (cVar4 == '>') {
                if (DAT_146b83488 < 2) {
                  return 0x80040200;
                }
                FUN_14373a730(local_58,&DAT_146b83480,2);
                lVar3 = FUN_14373bbd0(local_58,"Invalid type name: {} (invalid brackets nesting)",
                                      &DAT_145b74470,&local_res8,0);
                *(char **)(lVar3 + 0x20) = "Reflect\\TypeReg\\Detail\\hkTypeRegDetail.cpp";
                *(undefined8 *)(lVar3 + 0x28) = 0x129;
                FUN_14373a950(local_58);
                return 0x80040200;
              }
            }
            else {
              iVar1 = iVar5 + -1;
              if (cVar4 != '>') {
                iVar1 = iVar5;
              }
            }
          }
          iVar5 = iVar1;
          cVar4 = *(char *)(lVar3 + 1);
          lVar3 = lVar3 + 1;
        } while (cVar4 != '\0');
        if (iVar5 != 0) {
          if (DAT_146b83488 < 2) {
            return 0x80040200;
          }
          FUN_14373a730(local_58,&DAT_146b83480,2);
          lVar3 = FUN_14373bbd0(local_58,"Invalid type name: {} (invalid brackets nesting)",
                                &DAT_145b74470,&local_res8,0);
          *(char **)(lVar3 + 0x20) = "Reflect\\TypeReg\\Detail\\hkTypeRegDetail.cpp";
          *(undefined8 *)(lVar3 + 0x28) = 0x131;
          FUN_14373a950(local_58);
          return 0x80040200;
        }
      }
      FUN_143753770(lVar6,lVar3,param_4);
      return 0;
    }
    if (1 < DAT_146b83488) {
      FUN_14373a730(local_58,&DAT_146b83480,2);
      lVar3 = FUN_14373bbd0(local_58,"Invalid type name: \'{}\' (invalid arguments)",&DAT_145b74470,
                            &local_res8,0);
      *(char **)(lVar3 + 0x20) = "Reflect\\TypeReg\\Detail\\hkTypeRegDetail.cpp";
      *(undefined8 *)(lVar3 + 0x28) = 0x101;
      FUN_14373a950(local_58);
      return 0x80040200;
    }
  }
  return 0x80040200;
}



// FUNCTION 143753b20 FUN_143753b20 body=237 status=ok
// SIG undefined FUN_143753b20(void)

void FUN_143753b20(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong local_18;
  int local_10;
  uint local_c;
  
  iVar5 = *(int *)(param_1 + 0x60);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  local_18 = 0;
  local_10 = 0;
  local_c = 0x80000000;
  uVar2 = FUN_143703a50();
  if ((int)(local_c & 0x3fffffff) < iVar5) {
    FUN_14370c310(uVar2,&local_18,iVar5,8);
  }
  FUN_143738e40(local_18,uVar3,iVar5);
  iVar6 = 0;
  local_10 = iVar5;
  if (0 < iVar5) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(lVar4 + local_18);
      if (lVar1 != 0) {
        (**(code **)(lVar1 + 0x28))(param_2,*(undefined8 *)(lVar1 + 0x30));
        iVar5 = local_10;
      }
      iVar6 = iVar6 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar6 < iVar5);
  }
  uVar3 = FUN_143703a50();
  local_10 = 0;
  if (-1 < (int)local_c) {
    FUN_143702e10(uVar3,local_18,8,local_c & 0x3fffffff);
  }
  return;
}



// FUNCTION 143753c10 FUN_143753c10 body=102 status=ok
// SIG undefined FUN_143753c10(void)

ulonglong FUN_143753c10(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  iVar1 = (int)param_1[4];
  if (iVar1 != -1) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(*param_1 + 8 + (longlong)iVar1 * 0x10);
    return (longlong)iVar1;
  }
  uVar2 = *(uint *)(param_1 + 1);
  uVar3 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar3,param_1,0x10);
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return (ulonglong)uVar2;
}



// FUNCTION 143753c80 FUN_143753c80 body=42 status=ok
// SIG undefined FUN_143753c80(void)

longlong FUN_143753c80(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  iVar1 = 0;
  if (-1 < *(int *)(param_1 + 0x1c)) {
    plVar2 = *(longlong **)(param_1 + 0x10);
    lVar3 = 0;
    do {
      if (*plVar2 != -1) break;
      iVar1 = iVar1 + 1;
      lVar3 = lVar3 + 1;
      plVar2 = plVar2 + 2;
    } while (lVar3 <= *(int *)(param_1 + 0x1c));
  }
  return (longlong)iVar1;
}



// FUNCTION 143753cb0 FUN_143753cb0 body=15 status=ok
// SIG undefined FUN_143753cb0(void)

undefined8 FUN_143753cb0(longlong param_1,int param_2)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)param_2 * 0x10);
}



// FUNCTION 143753cc0 FUN_143753cc0 body=58 status=ok
// SIG undefined FUN_143753cc0(void)

longlong FUN_143753cc0(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  param_2 = param_2 + 1;
  if (param_2 <= *(int *)(param_1 + 0x1c)) {
    lVar2 = (longlong)param_2;
    plVar1 = (longlong *)(lVar2 * 0x10 + *(longlong *)(param_1 + 0x10));
    do {
      if (*plVar1 != -1) break;
      param_2 = param_2 + 1;
      lVar2 = lVar2 + 1;
      plVar1 = plVar1 + 2;
    } while (lVar2 <= *(int *)(param_1 + 0x1c));
  }
  return (longlong)param_2;
}



// FUNCTION 143753d00 FUN_143753d00 body=148 status=ok
// SIG undefined FUN_143753d00(void)

void FUN_143753d00(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong local_res8;
  undefined8 local_res10;
  
  local_res8 = -1;
  local_res10 = param_2;
  puVar3 = (undefined4 *)FUN_14372d420(param_1 + 2,&local_res10,&local_res8);
  uVar1 = *puVar3;
  iVar2 = FUN_143753c10(param_1);
  local_res8 = (longlong)iVar2;
  puVar5 = (undefined8 *)(local_res8 * 0x10 + *param_1);
  *puVar5 = *param_3;
  *(undefined4 *)(puVar5 + 1) = uVar1;
  local_res10 = param_2;
  uVar4 = FUN_143703a50();
  FUN_14372d6e0(param_1 + 2,uVar4,&local_res10,&local_res8);
  return;
}



// FUNCTION 143753da0 FUN_143753da0 body=51 status=ok
// SIG undefined FUN_143753da0(void)

bool FUN_143753da0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    plVar1 = *(longlong **)(param_1 + 0x20);
    uVar4 = uVar2;
    do {
      iVar3 = (int)uVar4;
      if (*plVar1 == param_2) goto LAB_143753dcb;
      uVar4 = (ulonglong)(iVar3 + 1);
      uVar2 = uVar2 + 1;
      plVar1 = plVar1 + 1;
    } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x28));
  }
  iVar3 = -1;
LAB_143753dcb:
  return iVar3 != -1;
}



// FUNCTION 143753de0 FUN_143753de0 body=13 status=ok
// SIG undefined FUN_143753de0(void)

undefined8 FUN_143753de0(longlong param_1,undefined8 param_2,int param_3)

{
  *(bool *)param_2 = param_3 <= *(int *)(param_1 + 0x1c);
  return param_2;
}



// FUNCTION 143753df0 FUN_143753df0 body=243 status=ok
// SIG undefined FUN_143753df0(void)

void FUN_143753df0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  uint *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 local_res8 [8];
  
  plVar1 = (longlong *)(param_1 + 0x88);
  uVar4 = FUN_143753c80(plVar1);
  pcVar5 = (char *)FUN_143753de0(plVar1,local_res8,uVar4);
  cVar2 = *pcVar5;
  while (cVar2 != '\0') {
    puVar6 = (uint *)FUN_143753cb0(plVar1,uVar4);
    if ((*puVar6 >> 0xf & 1) == 0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      puVar7 = (undefined8 *)FUN_1437143d0(puVar6,0x8000);
    }
    for (iVar3 = FUN_14371f190(plVar1,puVar6); iVar3 != -1;
        iVar3 = *(int *)(*plVar1 + 8 + (longlong)iVar3 * 0x10)) {
      puVar6 = *(uint **)(*plVar1 + (longlong)iVar3 * 0x10);
      if (((*puVar6 >> 0xf & 1) != 0) &&
         (puVar8 = (undefined8 *)FUN_1437143d0(puVar6,0x8000), puVar8 != (undefined8 *)0x0)) {
        *puVar8 = *puVar7;
      }
    }
    uVar4 = FUN_143753cc0(plVar1,uVar4);
    pcVar5 = (char *)FUN_143753de0(plVar1,local_res8,uVar4);
    cVar2 = *pcVar5;
  }
  return;
}



// FUNCTION 143753ef0 FUN_143753ef0 body=940 status=ok
// SIG undefined FUN_143753ef0(void)

void FUN_143753ef0(longlong *param_1)

{
  uint *puVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong local_res8;
  undefined8 local_res10;
  longlong local_88;
  uint local_80;
  uint local_7c;
  longlong *local_78;
  uint local_70;
  uint local_6c;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  FUN_143753740(param_1 + 0x11);
  uVar10 = 0;
  local_6c = 0x80000000;
  local_78 = (longlong *)0x0;
  local_70 = 0;
  uVar12 = uVar10;
  uVar14 = uVar10;
  uVar4 = 0;
  if (0 < (int)param_1[5]) {
    do {
      lVar9 = *(longlong *)(uVar12 + param_1[4]);
      if (lVar9 != 0) {
        do {
          if (*(longlong *)(lVar9 + 8) != 0) {
            local_68 = lVar9;
            iStack_60 = (int)uVar14;
            uVar6 = FUN_143703a50();
            if (local_70 == (local_6c & 0x3fffffff)) {
              FUN_14370c460(uVar6,&local_78,0x10);
            }
            plVar7 = local_78 + (longlong)(int)local_70 * 2;
            if (plVar7 != (longlong *)0x0) {
              *(undefined4 *)plVar7 = (undefined4)local_68;
              *(undefined4 *)((longlong)plVar7 + 4) = local_68._4_4_;
              *(int *)(plVar7 + 1) = iStack_60;
              *(undefined4 *)((longlong)plVar7 + 0xc) = uStack_5c;
            }
            local_70 = local_70 + 1;
            puVar1 = *(uint **)(lVar9 + 8);
            if (((byte)*puVar1 >> 3 & 1) == 0) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (((*puVar1 >> 0xf & 1) != 0) &&
               (puVar8 = (undefined8 *)FUN_1437143d0(puVar1,0x8000), puVar8 != (undefined8 *)0x0)) {
              *puVar8 = 0;
            }
          }
          lVar9 = FUN_143744a90(lVar9);
        } while (lVar9 != 0);
        uVar10 = (ulonglong)local_70;
      }
      uVar4 = (uint)uVar10;
      uVar13 = (int)uVar14 + 1;
      uVar12 = uVar12 + 8;
      uVar14 = (ulonglong)uVar13;
    } while ((int)uVar13 < (int)param_1[5]);
    if (1 < (int)uVar4) {
      FUN_143752260(local_78,0,uVar4 - 1,local_res8 & 0xff);
      uVar4 = local_70;
    }
  }
  local_88 = 0;
  local_80 = 0;
  local_7c = 0x80000000;
  if (0 < (int)uVar4) {
    if ((int)uVar4 < 0) {
      uVar4 = 0;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_88,uVar4,8);
    uVar4 = local_70;
  }
  local_58 = 0;
  local_50 = 0;
  local_4c = 0xffffffff;
  FUN_14372fea0(&local_58,&PTR_vftable_1467f0638,(int)uVar4 / 2);
  plVar7 = local_78;
  if (local_70 != 0) {
    uVar12 = *(ulonglong *)(*local_78 + 8);
    if (local_80 == (local_7c & 0x3fffffff)) {
      FUN_14370c460(&PTR_vftable_1467f0638,&local_88,8);
    }
    iVar11 = 1;
    *(longlong *)(local_88 + (longlong)(int)local_80 * 8) = *plVar7;
    local_80 = local_80 + 1;
    if (1 < (int)local_70) {
      lVar9 = 0x10;
      do {
        lVar2 = *(longlong *)(lVar9 + (longlong)local_78);
        iVar5 = hkReflect::Type::compareName(*(undefined8 *)(lVar2 + 8),uVar12);
        FUN_143744ae0(lVar2,iVar5 == 0);
        if (iVar5 == 0) {
          local_res8 = *(ulonglong *)(lVar2 + 8);
          FUN_143753d00(param_1 + 0x11,uVar12,&local_res8);
          local_res10 = *(undefined8 *)(lVar2 + 8);
          local_res8 = uVar12;
          FUN_14372d6e0(&local_58,&PTR_vftable_1467f0638,&local_res10,&local_res8);
        }
        else {
          if (local_80 == (local_7c & 0x3fffffff)) {
            FUN_14370c460(&PTR_vftable_1467f0638,&local_88,8);
          }
          *(longlong *)(local_88 + (longlong)(int)local_80 * 8) = lVar2;
          local_80 = local_80 + 1;
          uVar12 = *(ulonglong *)(lVar2 + 8);
        }
        iVar11 = iVar11 + 1;
        lVar9 = lVar9 + 0x10;
      } while (iVar11 < (int)local_70);
    }
  }
  lVar9 = FUN_143754660(&local_88,0,local_80 - 1);
  param_1[3] = lVar9;
  FUN_1437546f0(&local_88,&local_58);
  (**(code **)(*param_1 + 0x40))(param_1);
  FUN_143700a90(&local_58,&PTR_vftable_1467f0638);
  local_80 = 0;
  if (-1 < (int)local_7c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_88,8,local_7c & 0x3fffffff);
  }
  local_88 = 0;
  local_7c = 0x80000000;
  uVar6 = FUN_143703a50();
  local_70 = 0;
  if (-1 < (int)local_6c) {
    FUN_143702e10(uVar6,local_78,0x10,local_6c & 0x3fffffff);
  }
  local_78 = (longlong *)0x0;
  local_6c = 0x80000000;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  return;
}



// FUNCTION 1437542a0 FUN_1437542a0 body=238 status=ok
// SIG undefined FUN_1437542a0(void)

undefined4 * FUN_1437542a0(longlong param_1,undefined4 *param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong local_res18;
  undefined1 local_res20 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_res18 = param_3;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x70)) {
    plVar2 = *(longlong **)(param_1 + 0x68);
    lVar3 = 0;
    do {
      if (*plVar2 == local_res18) {
        if (-1 < iVar4) {
          iVar1 = *(int *)(param_1 + 0x70) + -1;
          *(int *)(param_1 + 0x70) = iVar1;
          if (iVar1 != iVar4) {
            *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar4 * 8) =
                 *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar1 * 8);
          }
          local_28 = &local_res18;
          uStack_20 = local_res20;
          local_38 = 0;
          uStack_30 = 0;
          local_18 = 0;
          uStack_10 = 0;
          FUN_143753b20(param_1,&local_38);
          *param_2 = 0;
          goto LAB_1437542fa;
        }
        break;
      }
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + 1;
      plVar2 = plVar2 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x70));
  }
  *param_2 = 0x80040200;
LAB_1437542fa:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return param_2;
}



// FUNCTION 143754390 FUN_143754390 body=716 status=ok
// SIG undefined FUN_143754390(void)

void FUN_143754390(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong local_b8;
  uint local_b0;
  uint local_ac;
  longlong local_a8;
  uint local_a0;
  uint local_9c;
  undefined8 local_98;
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  longlong lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uVar7 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    plVar3 = *(longlong **)(param_1 + 0x20);
    uVar9 = uVar7;
    uVar11 = uVar7;
    while (iVar10 = (int)uVar9, *plVar3 != param_2) {
      uVar9 = (ulonglong)(iVar10 + 1);
      uVar11 = uVar11 + 1;
      plVar3 = plVar3 + 1;
      if ((longlong)*(int *)(param_1 + 0x28) <= (longlong)uVar11) {
        return;
      }
    }
    if (-1 < iVar10) {
      local_a8 = 0;
      local_a0 = 0;
      local_9c = 0x80000000;
      local_b8 = 0;
      local_b0 = 0;
      local_ac = 0x80000000;
      for (lVar6 = *(longlong *)((longlong)iVar10 * 8 + *(longlong *)(param_1 + 0x20)); lVar6 != 0;
          lVar6 = FUN_143744a90(lVar6)) {
        cVar1 = FUN_143744b50(lVar6);
        if (cVar1 == '\0') {
          uVar5 = *(undefined8 *)(lVar6 + 8);
          uVar4 = FUN_143703a50();
          if (local_b0 == (local_ac & 0x3fffffff)) {
            FUN_14370c460(uVar4,&local_b8,8);
          }
          *(undefined8 *)(local_b8 + (longlong)(int)local_b0 * 8) = uVar5;
          local_b0 = local_b0 + 1;
          iVar2 = FUN_14371f190(param_1 + 0x88,*(undefined8 *)(lVar6 + 8));
          if (iVar2 != -1) {
            lVar12 = *(longlong *)(param_1 + 0x88);
            uVar5 = FUN_143703a50();
            if (local_a0 == (local_9c & 0x3fffffff)) {
              FUN_14370c460(uVar5,&local_a8,8);
            }
            *(undefined8 *)(local_a8 + (longlong)(int)local_a0 * 8) =
                 *(undefined8 *)((longlong)iVar2 * 0x10 + lVar12);
            local_a0 = local_a0 + 1;
          }
        }
      }
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
      lVar6 = *(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 8;
      lVar12 = (longlong)(*(int *)(param_1 + 0x28) - iVar10) * 8;
      uVar9 = uVar7;
      if (0 < lVar12) {
        do {
          uVar8 = (int)uVar9 + 8;
          *(undefined8 *)(uVar7 + lVar6) = *(undefined8 *)(uVar7 + 8 + lVar6);
          uVar7 = uVar7 + 8;
          uVar9 = (ulonglong)uVar8;
        } while ((int)uVar8 < lVar12);
      }
      local_68 = 0;
      uStack_60 = 0;
      lStack_80 = local_a8 + (longlong)(int)local_a0 * 8;
      lStack_90 = local_b8 + (longlong)(int)local_b0 * 8;
      local_98._0_4_ = (undefined4)local_b8;
      local_98._4_4_ = (undefined4)((ulonglong)local_b8 >> 0x20);
      local_78 = (undefined4)local_98;
      uStack_74 = local_98._4_4_;
      local_98 = local_b8;
      local_88 = local_a8;
      lStack_70 = lStack_90;
      FUN_143753b20(param_1,&local_88);
      FUN_143753ef0(param_1);
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      uStack_30 = 0;
      FUN_143753b20(param_1,&local_58);
      uVar5 = FUN_143703a50();
      local_b0 = 0;
      if (-1 < (int)local_ac) {
        FUN_143702e10(uVar5,local_b8,8,local_ac & 0x3fffffff);
      }
      local_b8 = 0;
      local_ac = 0x80000000;
      uVar5 = FUN_143703a50();
      local_a0 = 0;
      if (-1 < (int)local_9c) {
        FUN_143702e10(uVar5,local_a8,8,local_9c & 0x3fffffff);
      }
    }
  }
  return;
}



// FUNCTION 143754660 FUN_143754660 body=134 status=ok
// SIG undefined FUN_143754660(void)

undefined8 FUN_143754660(longlong *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_3 < param_2) {
    return 0;
  }
  iVar2 = (param_2 + param_3) / 2;
  uVar3 = FUN_143754660(param_1,param_2,iVar2 + -1);
  uVar4 = FUN_143754660(param_1,iVar2 + 1,param_3);
  uVar1 = *(undefined8 *)(*param_1 + (longlong)iVar2 * 8);
  FUN_143744b40(uVar1,uVar3,uVar4);
  return uVar1;
}



// FUNCTION 1437546f0 FUN_1437546f0 body=535 status=ok
// SIG undefined FUN_1437546f0(void)

void FUN_1437546f0(ulonglong *param_1,undefined8 param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 local_res8;
  undefined8 local_res18;
  longlong local_58;
  int local_50;
  uint local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  
  uVar10 = (uint)param_1[1];
  uVar11 = 0;
  local_58 = 0;
  local_50 = 0;
  local_4c = 0x80000000;
  if (0 < (int)uVar10) {
    uVar7 = (ulonglong)uVar10;
    if ((int)uVar10 < 0) {
      uVar7 = uVar11;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_58,uVar7,0x18);
  }
  local_48 = 0;
  local_40 = 0;
  local_3c = 0xffffffff;
  FUN_14372fea0(&local_48,&PTR_vftable_1467f0638,(int)param_1[1]);
  uVar7 = uVar11;
  uVar8 = uVar11;
  if (0 < (int)param_1[1]) {
    do {
      FUN_1437533d0(*(undefined8 *)(*(longlong *)(uVar7 + *param_1) + 8),&local_58,&local_48,param_2
                   );
      uVar10 = (int)uVar8 + 1;
      uVar7 = uVar7 + 8;
      uVar8 = (ulonglong)uVar10;
    } while ((int)uVar10 < (int)param_1[1]);
  }
  uVar7 = uVar11;
  uVar8 = uVar11;
  uVar5 = uVar11;
  iVar6 = local_50;
  if (0 < local_50) {
    do {
      if (*(int *)(uVar8 + 8 + local_58) == -1) {
        uVar10 = FUN_143753660(uVar7,&local_58,uVar5);
        uVar5 = (ulonglong)uVar10;
        iVar6 = local_50;
      }
      uVar10 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar10;
      uVar8 = uVar8 + 0x18;
    } while ((int)uVar10 < iVar6);
  }
  plVar9 = (longlong *)*param_1;
  uVar7 = (ulonglong)((longlong)(plVar9 + (int)param_1[1]) + (7 - (longlong)plVar9)) >> 3;
  if (plVar9 + (int)param_1[1] < plVar9) {
    uVar7 = uVar11;
  }
  uVar8 = uVar11;
  if (uVar7 != 0) {
    do {
      puVar1 = *(uint **)(*plVar9 + 8);
      if ((((*puVar1 >> 0xf & 1) != 0) &&
          (puVar2 = (ulonglong *)FUN_1437143d0(puVar1,0x8000), puVar2 != (ulonglong *)0x0)) &&
         (*puVar2 == 0)) {
        local_res8 = FUN_14374a300(puVar1);
        local_res18 = local_res8;
        puVar3 = (undefined8 *)FUN_14372d420(param_2,&local_res18,&local_res8);
        uVar5 = uVar11;
        if (((*(uint *)*puVar3 >> 0xf & 1) != 0) &&
           (puVar4 = (ulonglong *)FUN_1437143d0((uint *)*puVar3,0x8000), puVar4 != (ulonglong *)0x0)
           ) {
          uVar5 = *puVar4;
        }
        *puVar2 = uVar5;
      }
      plVar9 = plVar9 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar7);
  }
  FUN_143700a90(&local_48,&PTR_vftable_1467f0638);
  local_50 = 0;
  if (-1 < (int)local_4c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_58,0x18,local_4c & 0x3fffffff);
  }
  return;
}



// FUNCTION 143754910 FUN_143754910 body=379 status=ok
// SIG undefined FUN_143754910(void)

uint FUN_143754910(ulonglong *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  undefined8 *puVar7;
  ulonglong *puVar8;
  byte bVar9;
  uint uVar10;
  ulonglong *puVar11;
  undefined1 local_res8 [8];
  ulonglong *local_res10;
  
  while( true ) {
    if (param_1 == (ulonglong *)0x0) {
      return 1;
    }
    if (((uint)*param_1 >> 0x17 & 1) != 0) break;
    param_1 = (ulonglong *)param_1[1];
  }
  puVar11 = (ulonglong *)0x0;
  local_res10 = puVar11;
  if (((uint)*param_1 >> 0x17 & 1) != 0) {
    local_res10 = (ulonglong *)FUN_1437143d0(param_1,0x800000);
  }
  uVar1 = (uint)*local_res10;
  uVar10 = uVar1 >> 0x10;
  if ((uVar10 & 0xfff) == 0xfff) {
    iVar3 = FUN_143754910(param_1[1]);
    puVar6 = (uint *)FUN_143715390(param_1,local_res8);
    iVar5 = iVar3;
    if (((*puVar6 >> 7 & 1) != 0) && (iVar5 = 8, 8 < iVar3)) {
      iVar5 = iVar3;
    }
    puVar7 = (undefined8 *)FUN_143714490(param_1,1);
    if (puVar7 == (undefined8 *)0x0) {
      bVar9 = 0;
    }
    else {
      bVar9 = (byte)*puVar7;
    }
    puVar8 = puVar11;
    if ((bVar9 & 0xf) == 7) {
      puVar8 = param_1;
    }
    if ((puVar8 != (ulonglong *)0x0) && (iVar4 = FUN_143715210(puVar8), iVar3 = iVar5, 0 < iVar4)) {
      do {
        puVar7 = (undefined8 *)FUN_143714e90(puVar8,local_res8,puVar11);
        iVar5 = FUN_143714d40(*puVar7);
        if (iVar5 < iVar3) {
          iVar5 = iVar3;
        }
        uVar10 = (int)puVar11 + 1;
        puVar11 = (ulonglong *)(ulonglong)uVar10;
        iVar4 = FUN_143715210(puVar8);
        iVar3 = iVar5;
      } while ((int)uVar10 < iVar4);
    }
    uVar2 = uVar1 ^ (iVar5 << 0x10 ^ uVar1) & 0xfff0000;
    uVar10 = uVar2 >> 0x10;
    *local_res10 = (ulonglong)(((uVar1 >> 0x1c) << 0xc | uVar10 & 0xfff) << 0x10) |
                   (ulonglong)uVar2 & 0xffff;
  }
  return uVar10 & 0xfff;
}



// FUNCTION 143754a90 FUN_143754a90 body=481 status=ok
// SIG undefined FUN_143754a90(void)

undefined8 * FUN_143754a90(longlong *param_1,undefined8 *param_2,code *param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  longlong local_78;
  int local_70;
  uint local_6c;
  undefined8 local_68;
  longlong lStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  longlong lStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  iVar6 = 0;
  if (0 < (int)param_1[0xc]) {
    lVar5 = 0;
    plVar1 = (longlong *)param_1[0xb];
    do {
      if (*plVar1 == 0) {
        if (iVar6 != -1) goto LAB_143754b2f;
        break;
      }
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 1;
      plVar1 = plVar1 + 1;
    } while (lVar5 < (int)param_1[0xc]);
  }
  iVar6 = (int)param_1[0xc];
  uVar2 = FUN_143703a50();
  if (*(uint *)(param_1 + 0xc) == (*(uint *)((longlong)param_1 + 100) & 0x3fffffff)) {
    FUN_14370c460(uVar2,param_1 + 0xb,8);
  }
  *(undefined8 *)(param_1[0xb] + (longlong)(int)param_1[0xc] * 8) = 0;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
LAB_143754b2f:
  pvVar3 = TlsGetValue(DAT_146b7bf70);
  if (pvVar3 == (LPVOID)0x0) {
    pvVar3 = DAT_146b7bf68;
  }
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar3 + 0x58),0x38);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4[1] = 0;
    *(undefined4 *)(puVar4 + 2) = 0x1ffff;
    *puVar4 = hkReflect::Detail::BuiltinTypeReg::SubscriptionImpl::vftable;
    puVar4[3] = param_1;
    *(int *)(puVar4 + 4) = iVar6;
    puVar4[5] = param_3;
    puVar4[6] = param_4;
  }
  *(undefined8 **)(param_1[0xb] + (longlong)iVar6 * 8) = puVar4;
  local_78 = 0;
  local_70 = 0;
  local_6c = 0x80000000;
  (**(code **)(*param_1 + 0x48))(param_1,&local_78);
  local_68 = local_78;
  lVar5 = local_68;
  local_48 = 0;
  uStack_40 = 0;
  lStack_60 = local_78 + (longlong)local_70 * 8;
  local_68._0_4_ = (undefined4)local_78;
  local_68._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
  local_38 = 0;
  uStack_30 = 0;
  local_58 = (undefined4)local_68;
  uStack_54 = local_68._4_4_;
  local_68 = lVar5;
  lStack_50 = lStack_60;
  (*param_3)(&local_58,param_4);
  *param_2 = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_14370c030(puVar4);
  }
  FUN_14370c150(puVar4);
  uVar2 = FUN_143703a50();
  local_70 = 0;
  if (-1 < (int)local_6c) {
    FUN_143702e10(uVar2,local_78,8,local_6c & 0x3fffffff);
  }
  local_78 = 0;
  local_6c = 0x80000000;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  return param_2;
}



// FUNCTION 143754c80 FUN_143754c80 body=101 status=ok
// SIG undefined FUN_143754c80(void)

undefined8 FUN_143754c80(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    iVar2 = hkReflect::Type::compareName(*(undefined8 *)(lVar1 + 8),param_2);
    if (iVar2 == 0) break;
    if (iVar2 < 0) {
      lVar1 = *(longlong *)(lVar1 + 0x10);
    }
    else {
      lVar1 = *(longlong *)(lVar1 + 0x18);
    }
  }
  `FVulkanDeviceExtension::GetUESupportedDeviceExtensions'::`2'::<lambda_8>::<lambda_invoker_cdecl>
            (lVar1);
  return *(undefined8 *)(lVar1 + 8);
}



// FUNCTION 143754cf0 FUN_143754cf0 body=876 status=ok
// SIG undefined FUN_143754cf0(void)

ulonglong FUN_143754cf0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 *local_2a8;
  int local_2a0;
  uint local_29c;
  undefined1 local_298 [64];
  ulonglong *local_258;
  uint local_250;
  uint local_24c;
  ulonglong local_248 [32];
  undefined1 *local_148;
  undefined4 local_140;
  uint local_13c;
  undefined1 local_138 [128];
  undefined1 *local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined1 local_a8 [128];
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar8 = 0;
  local_ac = 0x80000080;
  local_b8 = local_a8;
  local_b0 = 1;
  local_148 = local_138;
  local_a8[0] = 0;
  local_2a8 = local_298;
  local_258 = local_248;
  local_13c = 0x80000080;
  local_140 = 1;
  local_138[0] = 0;
  local_2a0 = 0;
  local_29c = 0x80000008;
  local_250 = 0;
  local_24c = 0x80000020;
  iVar4 = FUN_143753800(param_2,&local_148,&local_b8,&local_2a8);
  puVar2 = local_b8;
  if (-1 < iVar4) {
    while (local_b8 = puVar2, lVar1 != 0) {
      uVar5 = FUN_1437151f0(*(undefined8 *)(lVar1 + 8));
      iVar4 = hkString::strCmp(uVar5,puVar2);
      if (iVar4 == 0) {
        `FVulkanDeviceExtension::GetUESupportedDeviceExtensions'::`2'::<lambda_8>::
        <lambda_invoker_cdecl>(lVar1);
        bVar11 = local_2a0 != 0;
        uVar5 = FUN_1437151f0(*(undefined8 *)(lVar1 + 8));
        FUN_143753140(lVar1,&local_258,uVar5,bVar11);
        break;
      }
      puVar2 = local_b8;
      if (iVar4 < 0) {
        lVar1 = *(longlong *)(lVar1 + 0x10);
      }
      else {
        lVar1 = *(longlong *)(lVar1 + 0x18);
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
    uVar7 = uVar8;
    uVar6 = uVar8;
    if (0 < *(int *)(param_1 + 0x70)) {
      do {
        puVar2 = local_b8;
        uVar10 = *(ulonglong *)(uVar7 + *(longlong *)(param_1 + 0x68));
        uVar5 = FUN_1437151f0(uVar10);
        iVar4 = hkString::strCmp(uVar5,puVar2);
        if (iVar4 == 0) {
          uVar5 = FUN_143703a50();
          if (local_250 == (local_24c & 0x3fffffff)) {
            FUN_14370c460(uVar5,&local_258,8);
          }
          local_258[(int)local_250] = uVar10;
          local_250 = local_250 + 1;
        }
        uVar9 = (int)uVar6 + 1;
        uVar7 = uVar7 + 8;
        uVar6 = (ulonglong)uVar9;
      } while ((int)uVar9 < *(int *)(param_1 + 0x70));
    }
    uVar7 = uVar8;
    if (local_2a0 < 1) {
      if (local_250 != 0) {
        uVar7 = *local_258;
      }
    }
    else {
      uVar6 = uVar8;
      uVar10 = uVar8;
      if (0 < (int)local_250) {
        do {
          uVar7 = *(ulonglong *)((longlong)local_258 + uVar10);
          cVar3 = FUN_143755100(uVar7,&local_2a8);
          if (cVar3 != '\0') break;
          uVar9 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar9;
          uVar7 = uVar8;
          uVar10 = uVar10 + 8;
        } while ((int)uVar9 < (int)local_250);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
    uVar8 = uVar7;
  }
  uVar5 = FUN_143703a50();
  local_250 = 0;
  if (-1 < (int)local_24c) {
    FUN_143702e10(uVar5,local_258,8,local_24c & 0x3fffffff);
  }
  local_258 = (ulonglong *)0x0;
  local_24c = 0x80000000;
  local_2a0 = 0;
  if (-1 < (int)local_29c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_2a8,8,local_29c & 0x3fffffff);
  }
  local_2a8 = (undefined1 *)0x0;
  local_29c = 0x80000000;
  local_140 = 0;
  if (-1 < (int)local_13c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_148,1,local_13c & 0x3fffffff);
  }
  local_148 = (undefined1 *)0x0;
  local_b0 = 0;
  local_13c = 0x80000000;
  if (-1 < (int)local_ac) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_b8,1,local_ac & 0x3fffffff);
  }
  return uVar8;
}



// FUNCTION 143755060 FUN_143755060 body=157 status=ok
// SIG undefined FUN_143755060(void)

longlong FUN_143755060(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar2 = FUN_143754c80();
  if (lVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x70)) {
      lVar4 = 0;
      do {
        lVar2 = *(longlong *)(lVar4 + *(longlong *)(param_1 + 0x68));
        iVar1 = hkReflect::Type::compareName(lVar2,param_2);
        if (iVar1 == 0) goto LAB_1437550d4;
        iVar3 = iVar3 + 1;
        lVar4 = lVar4 + 8;
      } while (iVar3 < *(int *)(param_1 + 0x70));
    }
    lVar2 = 0;
LAB_1437550d4:
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  }
  return lVar2;
}



// FUNCTION 143755100 FUN_143755100 body=209 status=ok
// SIG undefined FUN_143755100(void)

bool FUN_143755100(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  plVar3 = (longlong *)FUN_143715320();
  if (plVar3 == (longlong *)0x0) {
    return (int)param_2[1] == 0;
  }
  if ((*(uint *)(plVar3 + 1) & 0xffff) == *(uint *)(param_2 + 1)) {
    iVar6 = 0;
    if ((*(uint *)(plVar3 + 1) & 0xffff) != 0) {
      lVar7 = 0;
      plVar1 = plVar3;
      do {
        plVar5 = plVar1 + 2;
        if (*(char *)plVar1[3] == 't') {
          cVar2 = FUN_1437551e0(*plVar5);
          if (cVar2 == '\0') {
            return false;
          }
        }
        else {
          lVar4 = FUN_14370c5e0(*(undefined8 *)(lVar7 + *param_2),0);
          if (lVar4 != *plVar5) {
            return false;
          }
        }
        iVar6 = iVar6 + 1;
        lVar7 = lVar7 + 8;
        plVar1 = plVar5;
      } while (iVar6 < (int)(uint)*(ushort *)(plVar3 + 1));
    }
    return true;
  }
  return false;
}



// FUNCTION 1437551e0 FUN_1437551e0 body=379 status=ok
// SIG undefined FUN_1437551e0(void)

undefined1 FUN_1437551e0(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 *local_178;
  undefined4 local_170;
  uint local_16c;
  undefined1 local_168 [64];
  undefined1 *local_128;
  undefined4 local_120;
  uint local_11c;
  undefined1 local_118 [128];
  undefined1 *local_98;
  undefined4 local_90;
  uint local_8c;
  undefined1 local_88 [128];
  
  local_8c = 0x80000080;
  local_90 = 1;
  local_98 = local_88;
  local_88[0] = 0;
  local_128 = local_118;
  local_11c = 0x80000080;
  local_178 = local_168;
  local_120 = 1;
  local_118[0] = 0;
  local_170 = 0;
  local_16c = 0x80000008;
  iVar3 = FUN_143753800(param_2,&local_128,&local_98,&local_178);
  puVar1 = local_98;
  if (-1 < iVar3) {
    uVar4 = FUN_1437151f0(param_1);
    iVar3 = hkString::strCmp(uVar4,puVar1);
    if (iVar3 == 0) {
      uVar2 = FUN_143755100(param_1,&local_178);
      goto LAB_14375529c;
    }
  }
  uVar2 = 0;
LAB_14375529c:
  local_170 = 0;
  if (-1 < (int)local_16c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_178,8,local_16c & 0x3fffffff);
  }
  local_178 = (undefined1 *)0x0;
  local_16c = 0x80000000;
  local_120 = 0;
  if (-1 < (int)local_11c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_128,1,local_11c & 0x3fffffff);
  }
  local_128 = (undefined1 *)0x0;
  local_90 = 0;
  local_11c = 0x80000000;
  if (-1 < (int)local_8c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_98,1,local_8c & 0x3fffffff);
  }
  return uVar2;
}



// FUNCTION 143755360 FUN_143755360 body=302 status=ok
// SIG undefined FUN_143755360(void)

undefined1
FUN_143755360(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,longlong param_6,undefined8 param_7)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 *local_1d8 [2];
  undefined1 *local_1c8;
  undefined4 local_1c0;
  uint local_1bc;
  undefined1 local_1b8 [128];
  undefined1 *local_138;
  undefined1 *local_130;
  undefined1 local_128 [256];
  undefined1 local_28 [8];
  
  if (PTR_FUN_1467f5008 == (undefined *)0x0) {
    return 1;
  }
  local_138 = local_128;
  local_130 = local_28;
  local_1d8[0] = &stack0x00000040;
  uVar2 = FUN_1437810e0(&local_138,param_7,local_1d8);
  FUN_1437325e0(&local_138,uVar2);
  local_1c8 = local_1b8;
  local_1bc = 0x80000080;
  local_1c0 = 1;
  local_1b8[0] = 0;
  if (param_6 != 0) {
    ATTLCharacterCommon::MulticastPlayOuterEmote_Implementation(&local_1c8,param_6,&local_138);
  }
  uVar1 = (*(code *)PTR_FUN_1467f5008)(param_1,param_2,param_3,param_4,param_5,local_1c8);
  local_1c0 = 0;
  if (-1 < (int)local_1bc) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_1c8,1,local_1bc & 0x3fffffff);
  }
  return uVar1;
}



// FUNCTION 143755490 FUN_143755490 body=161 status=ok
// SIG undefined FUN_143755490(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_143755490(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined1 local_1008 [4088];
  ulonglong uStack_10;
  
  uStack_10 = 0x1437554aa;
  FDebug::AssertFailed
            (local_1008,0x1000,0x1000,"in \'%s\', condition: \'%s\'. %s",param_4,param_5,param_6);
  uStack_10 = uStack_10 & 0xffffffffffffff;
  iVar1 = FUN_143732280(param_1,local_1008,param_2,param_3);
  return iVar1 != 0;
}



// FUNCTION 143755550 FUN_143755550 body=91 status=ok
// SIG undefined FUN_143755550(void)

undefined8 * FUN_143755550(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkMemoryResourceContainer::vftable;
  FUN_143716620(param_1 + 3);
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  return param_1;
}



// FUNCTION 1437555b0 FUN_1437555b0 body=49 status=ok
// SIG undefined FUN_1437555b0(void)

undefined8 * FUN_1437555b0(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkMemoryResourceHandle::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  return param_1;
}



// FUNCTION 1437555f0 FUN_1437555f0 body=282 status=ok
// SIG undefined FUN_1437555f0(void)

void FUN_1437555f0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = hkMemoryResourceContainer::vftable;
  uVar2 = FUN_143703a50();
  lVar1 = param_1[7];
  lVar3 = (longlong)(*(int *)(param_1 + 8) + -1);
  if (-1 < *(int *)(param_1 + 8) + -1) {
    do {
      if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
        FUN_14370c150();
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x44)) {
    FUN_143702e10(uVar2,param_1[7],8,*(uint *)((longlong)param_1 + 0x44) & 0x3fffffff);
  }
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  uVar2 = FUN_143703a50();
  lVar1 = param_1[5];
  lVar3 = (longlong)(*(int *)(param_1 + 6) + -1);
  if (-1 < *(int *)(param_1 + 6) + -1) {
    do {
      if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
        FUN_14370c150();
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 6) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x34)) {
    FUN_143702e10(uVar2,param_1[5],8,*(uint *)((longlong)param_1 + 0x34) & 0x3fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  FUN_143716650(param_1 + 3);
  *param_1 = hkResourceContainer::vftable;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 143755710 FUN_143755710 body=199 status=ok
// SIG undefined FUN_143755710(void)

void FUN_143755710(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  
  *param_1 = hkMemoryResourceHandle::vftable;
  uVar1 = FUN_143703a50();
  iVar3 = *(int *)(param_1 + 6) + -1;
  if (-1 < iVar3) {
    lVar2 = (longlong)iVar3 * 0x10 + param_1[5];
    do {
      FUN_143716650(lVar2 + 8);
      FUN_143716650(lVar2);
      lVar2 = lVar2 + -0x10;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  *(undefined4 *)(param_1 + 6) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x34)) {
    FUN_143702e10(uVar1,param_1[5],0x10,*(uint *)((longlong)param_1 + 0x34) & 0x3fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  FUN_143716650(param_1 + 4);
  if (param_1[3] != 0) {
    FUN_14370c150();
  }
  *param_1 = hkResourceHandle::vftable;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1437557e0 FUN_1437557e0 body=150 status=ok
// SIG undefined FUN_1437557e0(void)

void FUN_1437557e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)(param_1 + 0x28);
  uVar2 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x30) == (*(uint *)(param_1 + 0x34) & 0x3fffffff)) {
    FUN_14370c460(uVar2,plVar1,0x10);
  }
  puVar3 = (undefined8 *)((longlong)*(int *)(param_1 + 0x30) * 0x10 + *plVar1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
  }
  lVar4 = (longlong)*(int *)(param_1 + 0x30) * 0x10 + *plVar1;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  FUN_1437166c0(lVar4,param_2);
  FUN_1437166c0(lVar4 + 8,param_3);
  return;
}



// FUNCTION 1437558b0 FUN_1437558b0 body=104 status=ok
// SIG undefined FUN_1437558b0(void)

void FUN_1437558b0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x30) + -1;
  if (-1 < iVar2) {
    lVar1 = (longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x28);
    do {
      FUN_143716650(lVar1 + 8);
      FUN_143716650(lVar1);
      lVar1 = lVar1 + -0x10;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    *(undefined4 *)(param_1 + 0x30) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}



// FUNCTION 143755920 FUN_143755920 body=230 status=ok
// SIG undefined FUN_143755920(void)

longlong FUN_143755920(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  LPVOID pvVar3;
  undefined8 uVar4;
  
  lVar2 = (**(code **)(*param_1 + 0x70))(param_1,param_2,0);
  if (lVar2 == 0) {
    pvVar3 = TlsGetValue(DAT_146b7bf70);
    if (pvVar3 == (LPVOID)0x0) {
      pvVar3 = DAT_146b7bf68;
    }
    lVar2 = (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar3 + 0x58),0x48);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_143755550(lVar2,param_2);
      if (lVar2 != 0) {
        FUN_14370c030(lVar2);
      }
    }
    uVar4 = FUN_143703a50();
    if (*(uint *)(param_1 + 8) == (*(uint *)((longlong)param_1 + 0x44) & 0x3fffffff)) {
      FUN_14370c460(uVar4,param_1 + 7,8);
    }
    plVar1 = (longlong *)(param_1[7] + (longlong)(int)param_1[8] * 8);
    if ((plVar1 != (longlong *)0x0) && (*plVar1 = lVar2, lVar2 != 0)) {
      FUN_14370c030(lVar2);
    }
    *(int *)(param_1 + 8) = (int)param_1[8] + 1;
    if (lVar2 != 0) {
      FUN_14370c150(lVar2);
    }
    *(longlong **)(lVar2 + 0x20) = param_1;
    FUN_14370c150(lVar2);
  }
  return lVar2;
}



// FUNCTION 143755a10 FUN_143755a10 body=248 status=ok
// SIG undefined FUN_143755a10(void)

longlong * FUN_143755a10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  LPVOID pvVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  pvVar2 = TlsGetValue(DAT_146b7bf70);
  if (pvVar2 == (LPVOID)0x0) {
    pvVar2 = DAT_146b7bf68;
  }
  lVar3 = (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar2 + 0x58),0x38);
  if (lVar3 == 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = (longlong *)FUN_1437555b0(lVar3);
  }
  (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  (**(code **)(*plVar4 + 0x40))(plVar4,param_3,param_4);
  FUN_14370c030(plVar4);
  uVar5 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x30) == (*(uint *)(param_1 + 0x34) & 0x3fffffff)) {
    FUN_14370c460(uVar5,param_1 + 0x28,8);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(param_1 + 0x30) * 8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = plVar4;
    FUN_14370c030(plVar4);
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  FUN_14370c150(plVar4);
  FUN_14370c150(plVar4);
  return plVar4;
}



// FUNCTION 143755b10 FUN_143755b10 body=161 status=ok
// SIG undefined FUN_143755b10(void)

void FUN_143755b10(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  
  if (param_2 != 0) {
    FUN_14370c030(param_2);
  }
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    plVar1 = *(longlong **)(param_1 + 0x38);
    uVar4 = uVar2;
    do {
      iVar3 = (int)uVar4;
      if (*plVar1 == param_2) goto LAB_143755b5b;
      uVar4 = (ulonglong)(iVar3 + 1);
      uVar2 = uVar2 + 1;
      plVar1 = plVar1 + 1;
    } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x40));
  }
  iVar3 = -1;
LAB_143755b5b:
  if (param_2 != 0) {
    FUN_14370c150(param_2);
  }
  if (-1 < iVar3) {
    if (*(longlong *)((longlong)iVar3 * 8 + *(longlong *)(param_1 + 0x38)) != 0) {
      FUN_14370c150();
    }
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
    if (*(int *)(param_1 + 0x40) != iVar3) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar3 * 8) =
           *(undefined8 *)(*(longlong *)(param_1 + 0x38) + (longlong)*(int *)(param_1 + 0x40) * 8);
    }
  }
  return;
}



// FUNCTION 143755bc0 FUN_143755bc0 body=221 status=ok
// SIG undefined FUN_143755bc0(void)

void FUN_143755bc0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if (param_2 != 0) {
    FUN_14370c030(param_2);
  }
  uVar3 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    plVar1 = *(longlong **)(param_1 + 0x28);
    uVar2 = uVar3;
    uVar7 = uVar3;
    do {
      iVar6 = (int)uVar7;
      if (*plVar1 == param_2) goto LAB_143755c16;
      uVar7 = (ulonglong)(iVar6 + 1);
      uVar2 = uVar2 + 1;
      plVar1 = plVar1 + 1;
    } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x30));
  }
  iVar6 = -1;
LAB_143755c16:
  if (param_2 != 0) {
    FUN_14370c150(param_2);
  }
  if (-1 < iVar6) {
    if (*(longlong *)((longlong)iVar6 * 8 + *(longlong *)(param_1 + 0x28)) != 0) {
      FUN_14370c150();
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    lVar4 = *(longlong *)(param_1 + 0x28) + (longlong)iVar6 * 8;
    lVar8 = (longlong)(*(int *)(param_1 + 0x30) - iVar6) * 8;
    uVar2 = uVar3;
    if (0 < lVar8) {
      do {
        uVar5 = (int)uVar2 + 8;
        *(undefined8 *)(uVar3 + lVar4) = *(undefined8 *)(uVar3 + 8 + lVar4);
        uVar3 = uVar3 + 8;
        uVar2 = (ulonglong)uVar5;
      } while ((int)uVar5 < lVar8);
    }
  }
  return;
}



// FUNCTION 143755ca0 FUN_143755ca0 body=203 status=ok
// SIG undefined FUN_143755ca0(void)

void FUN_143755ca0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  for (lVar1 = (**(code **)(*param_1 + 0x70))(param_1,0,0); lVar1 != 0;
      lVar1 = (**(code **)(*param_1 + 0x70))(param_1,0,lVar1)) {
    FUN_143755ca0(lVar1,param_2);
  }
  for (lVar1 = (**(code **)(*param_1 + 0x40))(param_1,0,0,0); lVar1 != 0;
      lVar1 = (**(code **)(*param_1 + 0x40))(param_1,0,0,lVar1)) {
    uVar2 = FUN_143703a50();
    if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
      FUN_14370c460(uVar2,param_2,8);
    }
    *(longlong *)(*param_2 + (longlong)(int)param_2[1] * 8) = lVar1;
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
  }
  return;
}



// FUNCTION 143755d70 FUN_143755d70 body=174 status=ok
// SIG undefined FUN_143755d70(void)

longlong FUN_143755d70(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = 0;
  lVar5 = 0;
  do {
    if ((param_3 == 0) || (*(int *)(param_1 + 0x40) <= iVar4)) break;
    iVar4 = iVar4 + 1;
    plVar3 = (longlong *)(*(longlong *)(param_1 + 0x38) + lVar5);
    lVar5 = lVar5 + 8;
  } while (*plVar3 != param_3);
  if (iVar4 < *(int *)(param_1 + 0x40)) {
    lVar5 = (longlong)iVar4 * 8;
    do {
      lVar1 = *(longlong *)(lVar5 + *(longlong *)(param_1 + 0x38));
      if (param_2 == 0) {
        return lVar1;
      }
      iVar2 = hkString::strCmp(param_2,*(ulonglong *)(lVar1 + 0x18) & 0xfffffffffffffffe);
      if (iVar2 == 0) {
        return lVar1;
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar4 < *(int *)(param_1 + 0x40));
  }
  return 0;
}



// FUNCTION 143755e20 FUN_143755e20 body=532 status=ok
// SIG undefined FUN_143755e20(void)

longlong * FUN_143755e20(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  undefined1 local_2d8 [32];
  undefined1 *local_2b8;
  undefined4 local_2b0;
  uint local_2ac;
  undefined1 local_2a8 [128];
  undefined1 local_228 [512];
  
  iVar8 = 0;
  lVar9 = 0;
  do {
    if ((param_4 == 0) || (*(int *)(param_1 + 0x30) <= iVar8)) break;
    iVar8 = iVar8 + 1;
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0x28) + lVar9);
    lVar9 = lVar9 + 8;
  } while (*plVar7 != param_4);
  if (iVar8 < *(int *)(param_1 + 0x30)) {
    lVar9 = (longlong)iVar8 * 8;
    do {
      plVar7 = *(longlong **)(lVar9 + *(longlong *)(param_1 + 0x28));
      if (param_2 == 0) {
LAB_143755f2f:
        if (param_3 == 0) {
          return plVar7;
        }
        lVar4 = (**(code **)(*plVar7 + 0x38))(plVar7);
        if ((lVar4 != 0) && (cVar1 = FUN_143714910(lVar4,param_3), cVar1 != '\0')) {
          return plVar7;
        }
        if (param_2 != 0) {
          FUN_1437134a0(local_2d8,local_228,0x200);
          uVar3 = FUN_1437151f0(lVar4);
          uVar5 = FUN_1437151f0(param_3);
          uVar6 = Electra::FHTTPResourceRequest::URL
                            (local_2d8,"Class mismatch, cannot resolve link: ");
          uVar5 = Electra::FHTTPResourceRequest::URL(uVar6,uVar5);
          uVar5 = Electra::FHTTPResourceRequest::URL(uVar5,&DAT_145b9b560);
          Electra::FHTTPResourceRequest::URL(uVar5,uVar3);
          FUN_143732520(0xf034ed22,local_228,"Serialize\\ResourceHandle\\hkResourceHandle.cpp",0x147
                       );
          FUN_143713520(local_2d8);
          return (longlong *)0x0;
        }
      }
      else {
        local_2b8 = local_2a8;
        local_2ac = 0x80000080;
        local_2b0 = 1;
        local_2a8[0] = 0;
        uVar3 = (**(code **)(*plVar7 + 0x20))(plVar7,&local_2b8);
        iVar2 = hkString::strCmp(param_2,uVar3);
        local_2b0 = 0;
        if (iVar2 == 0) {
          if (-1 < (int)local_2ac) {
            FUN_143702e10(&PTR_vftable_1467f0638,local_2b8,1,local_2ac & 0x3fffffff);
          }
          goto LAB_143755f2f;
        }
        if (-1 < (int)local_2ac) {
          FUN_143702e10(&PTR_vftable_1467f0638,local_2b8,1,local_2ac & 0x3fffffff);
        }
      }
      iVar8 = iVar8 + 1;
      lVar9 = lVar9 + 8;
    } while (iVar8 < *(int *)(param_1 + 0x30));
  }
  return (longlong *)0x0;
}



// FUNCTION 143756040 FUN_143756040 body=177 status=ok
// SIG undefined FUN_143756040(void)

longlong * FUN_143756040(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = 0;
  lVar5 = 0;
  do {
    if ((param_3 == 0) || (*(int *)(param_1 + 0x30) <= iVar4)) break;
    iVar4 = iVar4 + 1;
    plVar3 = (longlong *)(*(longlong *)(param_1 + 0x28) + lVar5);
    lVar5 = lVar5 + 8;
  } while (*plVar3 != param_3);
  if (iVar4 < *(int *)(param_1 + 0x30)) {
    lVar5 = (longlong)iVar4 * 8;
    do {
      plVar3 = *(longlong **)(lVar5 + *(longlong *)(param_1 + 0x28));
      lVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
      if ((lVar2 != 0) && (cVar1 = FUN_143714910(lVar2,param_2), cVar1 != '\0')) {
        return plVar3;
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar4 < *(int *)(param_1 + 0x30));
  }
  return (longlong *)0x0;
}



// FUNCTION 143756100 FUN_143756100 body=1364 status=ok
// SIG undefined FUN_143756100(void)

/* WARNING: Removing unreachable block (ram,0x0001437561f3) */

void FUN_143756100(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  longlong lVar8;
  byte bVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  char *_Str;
  int local_res10;
  longlong local_res18;
  longlong local_4a8;
  longlong lStack_4a0;
  ulonglong local_498;
  longlong local_490;
  longlong lStack_488;
  ulonglong local_480;
  longlong local_470;
  undefined8 uStack_468;
  longlong local_460;
  longlong lStack_458;
  undefined1 local_448 [16];
  undefined1 local_438 [512];
  undefined1 local_238 [512];
  
  iVar2 = (int)param_2[1] + -1;
  lVar14 = (longlong)iVar2;
  if (-1 < iVar2) {
    puVar12 = (ulonglong *)(*param_2 + lVar14 * 0x28 + 0x20);
    do {
      if ((*puVar12 & 1) != 0) {
        FUN_143733a60(*puVar12 & 0xfffffffffffffffe);
      }
      puVar12 = puVar12 + -5;
      lVar14 = lVar14 + -1;
    } while (-1 < lVar14);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  iVar2 = *(int *)(param_1 + 0x30);
  uVar3 = FUN_143703a50();
  uVar10 = *(uint *)((longlong)param_2 + 0xc) & 0x3fffffff;
  if ((int)uVar10 < iVar2) {
    iVar1 = uVar10 * 2;
    if (iVar2 < iVar1) {
      iVar2 = iVar1;
    }
    FUN_14370c310(uVar3,param_2,iVar2,0x28);
  }
  local_res10 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    local_res18 = 0;
    do {
      lVar14 = param_2[1];
      *(int *)(param_2 + 1) = (int)lVar14 + 1;
      lVar14 = (longlong)(int)lVar14 * 0x28;
      lVar11 = *param_2 + lVar14;
      if (lVar11 != 0) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        *(undefined8 *)(lVar11 + 0x18) = 0;
        *(undefined8 *)(lVar11 + 0x20) = 0;
      }
      puVar6 = *(undefined8 **)(param_1 + 0x18);
      plVar15 = (longlong *)(*param_2 + lVar14);
      _Str = (char *)(*(ulonglong *)(local_res18 + *(longlong *)(param_1 + 0x28)) &
                     0xfffffffffffffffe);
      if (puVar6 == (undefined8 *)0x0) {
        plVar4 = &local_470;
        local_470 = 0;
        uStack_468 = 0;
      }
      else {
        plVar4 = (longlong *)(**(code **)*puVar6)(puVar6,local_448);
      }
      local_490 = *plVar4;
      lVar14 = plVar4[1];
      lStack_488 = lVar14;
      if (lVar14 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(lVar14);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      local_498 = 0;
      local_4a8 = 0;
      lStack_4a0 = 0;
      uVar13 = local_498;
      if (lVar14 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(lVar14,1);
        bVar9 = 0;
        if (puVar6 != (undefined8 *)0x0) {
          bVar9 = (byte)*puVar6;
        }
        uVar13 = local_498;
        if ((bVar9 & 0xf) == 7) {
          local_4a8 = local_490;
          lStack_4a0 = lVar14;
          if ((uVar5 & 1) != 0) {
            FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
          }
          uVar13 = uVar5;
          if ((local_498 & 1) != 0) {
            FUN_143733a60(local_498 & 0xfffffffffffffffe);
          }
        }
      }
      local_498 = uVar13;
      if ((uVar5 & 1) != 0) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      uVar5 = 0;
      pcVar7 = strchr(_Str,0x2e);
      while (pcVar7 != (char *)0x0) {
        iVar2 = (int)pcVar7 - (int)_Str;
        FUN_14370c700(local_438,_Str,iVar2);
        local_438[iVar2] = 0;
        _Str = _Str + (iVar2 + 1);
        plVar4 = (longlong *)FUN_143741ed0(&local_4a8,&local_490,local_438);
        lVar14 = *plVar4;
        lVar11 = plVar4[1];
        if ((uVar5 & 1) != 0) {
          FUN_143733a60(uVar5 & 0xfffffffffffffffe);
        }
        uVar5 = plVar4[2];
        plVar4[2] = 0;
        if ((local_480 & 1) != 0) {
          FUN_143733a60(local_480 & 0xfffffffffffffffe);
        }
        if (lVar14 == 0) goto LAB_143756554;
        puVar6 = (undefined8 *)FUN_143714490(lVar11,1);
        if (puVar6 == (undefined8 *)0x0) {
          bVar9 = 0;
        }
        else {
          bVar9 = (byte)*puVar6;
        }
        lVar8 = 0;
        if ((bVar9 & 0xf) == 7) {
          lVar8 = lVar11;
        }
        if (lVar8 == 0) {
          FUN_1437134a0(&local_490,local_238,0x200);
          uVar3 = Electra::FHTTPResourceRequest::URL(&local_490,"Member is not a record : ");
          Electra::FHTTPResourceRequest::URL(uVar3,local_438);
          FUN_143732520(0xf032edfe,local_238,"Serialize\\ResourceHandle\\hkResourceHandle.cpp",0x93)
          ;
          FUN_143713520(&local_490);
          if ((uVar5 & 1) != 0) {
            FUN_143733a60(uVar5 & 0xfffffffffffffffe);
          }
          uVar5 = 0;
          goto LAB_143756554;
        }
        local_460 = 0;
        lStack_458 = 0;
        lVar8 = lStack_458;
        uVar13 = 0;
        lVar16 = local_460;
        if (lVar11 != 0) {
          puVar6 = (undefined8 *)FUN_143714490(lVar11,1);
          bVar9 = 0;
          if (puVar6 != (undefined8 *)0x0) {
            bVar9 = (byte)*puVar6;
          }
          lVar8 = lStack_458;
          lVar16 = local_460;
          if (((bVar9 & 0xf) == 7) &&
             (lVar8 = lVar11, uVar13 = uVar5, lVar16 = lVar14, (uVar5 & 1) != 0)) {
            FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
          }
        }
        local_4a8 = lVar16;
        lStack_4a0 = lVar8;
        if ((local_498 & 1) != 0) {
          FUN_143733a60(local_498 & 0xfffffffffffffffe);
        }
        local_498 = uVar13;
        pcVar7 = strchr(_Str,0x2e);
      }
      plVar4 = (longlong *)FUN_143741ed0(&local_4a8,&local_490,_Str);
      lVar14 = *plVar4;
      lVar11 = plVar4[1];
      if ((uVar5 & 1) != 0) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      uVar5 = plVar4[2];
      plVar4[2] = 0;
      if ((local_480 & 1) != 0) {
        FUN_143733a60(local_480 & 0xfffffffffffffffe);
      }
      if (lVar14 == 0) {
LAB_143756554:
        if ((*(byte *)(*param_2 + -8 + (longlong)(int)param_2[1] * 0x28) & 1) != 0) {
          FUN_143733a60(*(ulonglong *)(*param_2 + -8 + (longlong)(int)param_2[1] * 0x28) &
                        0xfffffffffffffffe);
        }
        *(int *)(param_2 + 1) = (int)param_2[1] + -1;
        FUN_1437134a0(&local_490,local_238,0x200);
        uVar3 = Electra::FHTTPResourceRequest::URL(&local_490,"Cannot find member : ");
        Electra::FHTTPResourceRequest::URL(uVar3,_Str);
        FUN_143732520(0xf032edf1,local_238,"Serialize\\ResourceHandle\\hkResourceHandle.cpp",0xa5);
        FUN_143713520(&local_490);
      }
      else {
        *plVar15 = (longlong)_Str;
        plVar15[2] = lVar14;
        plVar15[3] = lVar11;
        if ((uVar5 & 1) != 0) {
          FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
        }
        if ((*(byte *)(plVar15 + 4) & 1) != 0) {
          FUN_143733a60(plVar15[4] & 0xfffffffffffffffe);
        }
        plVar15[4] = uVar5;
        plVar15[1] = *(ulonglong *)(*(longlong *)(param_1 + 0x28) + 8 + local_res18) &
                     0xfffffffffffffffe;
      }
      if ((uVar5 & 1) != 0) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      if ((local_498 & 1) != 0) {
        FUN_143733a60(local_498 & 0xfffffffffffffffe);
      }
      local_res18 = local_res18 + 0x10;
      local_res10 = local_res10 + 1;
    } while (local_res10 < *(int *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 143756660 FUN_143756660 body=9 status=ok
// SIG undefined FUN_143756660(void)

ulonglong FUN_143756660(longlong param_1)

{
  return *(ulonglong *)(param_1 + 0x18) & 0xfffffffffffffffe;
}



// FUNCTION 143756670 FUN_143756670 body=18 status=ok
// SIG undefined FUN_143756670(void)

undefined * FUN_143756670(longlong param_1)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = &DAT_145af9634;
  }
  return puVar1;
}



// FUNCTION 143756690 FUN_143756690 body=9 status=ok
// SIG undefined FUN_143756690(void)

void FUN_143756690(longlong param_1)

{
  FUN_143716500(param_1 + 0x18);
  return;
}



// FUNCTION 1437566a0 FUN_1437566a0 body=532 status=ok
// SIG undefined FUN_1437566a0(void)

undefined4 * FUN_1437566a0(longlong *param_1,undefined4 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined1 local_238 [32];
  undefined1 local_218 [512];
  
  for (plVar1 = param_3; plVar1 != (longlong *)0x0;
      plVar1 = (longlong *)(**(code **)(*plVar1 + 0x50))(plVar1)) {
    if (plVar1 == param_1) {
      FUN_1437134a0(local_238,local_218,0x200);
      uVar3 = Electra::FHTTPResourceRequest::URL(local_238,"Cannot parent \'");
      uVar3 = FUN_143715a90(uVar3,param_1 + 3);
      uVar3 = Electra::FHTTPResourceRequest::URL(uVar3,"\' to \'");
      uVar3 = FUN_143715a90(uVar3,param_3 + 3);
      Electra::FHTTPResourceRequest::URL(uVar3,"\' as this would create a circular dependency ");
      FUN_143732520(0xabba4554,local_218,"Serialize\\ResourceHandle\\hkResourceHandle.cpp",0x1be);
      FUN_143713520(local_238);
      *param_2 = 0x80040200;
      return param_2;
    }
  }
  FUN_14370c030(param_1);
  if (param_1 != (longlong *)0x0) {
    FUN_14370c030(param_1);
  }
  iVar7 = 0;
  iVar6 = *(int *)(param_1[4] + 0x40);
  if (0 < iVar6) {
    puVar2 = *(undefined8 **)(param_1[4] + 0x38);
    lVar4 = 0;
    do {
      if ((longlong *)*puVar2 == param_1) goto LAB_14375672b;
      iVar7 = iVar7 + 1;
      lVar4 = lVar4 + 1;
      puVar2 = puVar2 + 1;
    } while (lVar4 < iVar6);
  }
  iVar7 = -1;
LAB_14375672b:
  FUN_14370c150(param_1);
  lVar4 = param_1[4];
  if (*(longlong *)((longlong)iVar7 * 8 + *(longlong *)(lVar4 + 0x38)) != 0) {
    FUN_14370c150();
  }
  *(int *)(lVar4 + 0x40) = *(int *)(lVar4 + 0x40) + -1;
  iVar6 = 0;
  lVar8 = *(longlong *)(lVar4 + 0x38) + (longlong)iVar7 * 8;
  lVar4 = (longlong)(*(int *)(lVar4 + 0x40) - iVar7) * 8;
  if (0 < lVar4) {
    lVar5 = 0;
    do {
      iVar6 = iVar6 + 8;
      *(undefined8 *)(lVar5 + lVar8) = *(undefined8 *)(lVar5 + 8 + lVar8);
      lVar5 = lVar5 + 8;
    } while (iVar6 < lVar4);
  }
  FUN_14370c030(param_1);
  uVar3 = FUN_143703a50();
  if (*(uint *)(param_3 + 8) == (*(uint *)((longlong)param_3 + 0x44) & 0x3fffffff)) {
    FUN_14370c460(uVar3,param_3 + 7,8);
  }
  puVar2 = (undefined8 *)(param_3[7] + (longlong)(int)param_3[8] * 8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = param_1;
    FUN_14370c030(param_1);
  }
  *(int *)(param_3 + 8) = (int)param_3[8] + 1;
  FUN_14370c150(param_1);
  param_1[4] = (longlong)param_3;
  FUN_14370c150(param_1);
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1437568c0 FUN_1437568c0 body=203 status=ok
// SIG undefined FUN_1437568c0(void)

void FUN_1437568c0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar3 = 0;
    do {
      iVar1 = hkString::strCmp(*(ulonglong *)(lVar3 + *(longlong *)(param_1 + 0x28)) &
                               0xfffffffffffffffe,param_2);
      if (iVar1 == 0) {
        lVar3 = *(longlong *)(param_1 + 0x28) + (longlong)iVar4 * 0x10;
        FUN_143716650(lVar3 + 8);
        FUN_143716650(lVar3);
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
        if (*(int *)(param_1 + 0x30) == iVar4) {
          return;
        }
        lVar3 = 2;
        puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar4 * 0x10);
        lVar5 = ((longlong)*(int *)(param_1 + 0x30) * 0x10 + *(longlong *)(param_1 + 0x28)) -
                (longlong)puVar2;
        do {
          *puVar2 = *(undefined8 *)(lVar5 + (longlong)puVar2);
          puVar2 = puVar2 + 1;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
        return;
      }
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + 0x10;
    } while (iVar4 < *(int *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 143756990 FUN_143756990 body=9 status=ok
// SIG undefined FUN_143756990(void)

void FUN_143756990(longlong param_1)

{
  FUN_1437166c0(param_1 + 0x20);
  return;
}



// FUNCTION 1437569a0 FUN_1437569a0 body=9 status=ok
// SIG undefined FUN_1437569a0(void)

void FUN_1437569a0(longlong param_1)

{
  FUN_143716530(param_1 + 0x18);
  return;
}



// FUNCTION 1437569b0 FUN_1437569b0 body=179 status=ok
// SIG undefined FUN_1437569b0(void)

void FUN_1437569b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong local_18;
  int local_10;
  uint local_c;
  
  local_18 = 0;
  local_10 = 0;
  local_c = 0x80000000;
  FUN_143755ca0(param_1,&local_18);
  iVar3 = 0;
  if (0 < local_10) {
    lVar2 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + local_18) + 0x68))
                (*(longlong **)(lVar2 + local_18),param_2);
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 8;
    } while (iVar3 < local_10);
  }
  uVar1 = FUN_143703a50();
  local_10 = 0;
  if (-1 < (int)local_c) {
    FUN_143702e10(uVar1,local_18,8,local_c & 0x3fffffff);
  }
  return;
}



// FUNCTION 143756a70 FUN_143756a70 body=899 status=ok
// SIG undefined FUN_143756a70(void)

void FUN_143756a70(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong *puVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong local_2c0;
  int local_2b8;
  uint local_2b4;
  longlong local_2b0;
  longlong local_2a8;
  longlong lStack_2a0;
  ulonglong local_298;
  longlong local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined1 local_270 [40];
  undefined1 local_248 [520];
  
  local_2c0 = 0;
  local_2b8 = 0;
  local_2b4 = 0x80000000;
  (**(code **)(*param_1 + 0x58))(param_1,&local_2c0);
  local_290 = (longlong)(local_2b8 + -1);
  if (-1 < local_2b8 + -1) {
    lVar11 = local_290 * 0x28;
    do {
      lVar1 = local_2c0;
      lVar4 = (**(code **)*param_2)(param_2,*(undefined8 *)(lVar11 + 8 + local_2c0),&local_2b0);
      if (lVar4 != 0) {
        lVar9 = *(longlong *)(lVar11 + 0x18 + lVar1);
        uVar13 = 0;
        local_288 = 0;
        uStack_280 = 0;
        uVar7 = uStack_280;
        uVar6 = local_288;
        if (lVar9 != 0) {
          puVar5 = (undefined8 *)FUN_143714490(lVar9,1);
          bVar2 = 0;
          if (puVar5 != (undefined8 *)0x0) {
            bVar2 = (byte)*puVar5;
          }
          uVar7 = uStack_280;
          uVar6 = local_288;
          if ((bVar2 & 0xf) == 6) {
            uVar6 = *(undefined8 *)(lVar11 + 0x10 + lVar1);
            uVar7 = *(undefined8 *)(lVar11 + 0x18 + lVar1);
            if ((*(byte *)(lVar11 + 0x20 + lVar1) & 1) != 0) {
              FUN_1437329e0(*(ulonglong *)(lVar11 + 0x20 + lVar1) & 0xfffffffffffffffe);
            }
            uVar13 = *(ulonglong *)(lVar11 + 0x20 + lVar1);
          }
        }
        local_298 = 0;
        local_2a8 = 0;
        lStack_2a0 = 0;
        plVar12 = (longlong *)(uVar13 & 0xfffffffffffffffe);
        (**(code **)(*plVar12 + 0x50))(plVar12,local_res18,uVar6,uVar7,&local_2a8);
        lVar9 = lStack_2a0;
        if ((local_298 & 1) != 0) {
          FUN_143733a60(local_298 & 0xfffffffffffffffe);
        }
        cVar3 = FUN_143714910(local_2b0,lVar9);
        if (cVar3 == '\0') {
          FUN_1437134a0(local_270,local_248,0x200);
          uVar6 = FUN_1437151f0(lVar9);
          uVar7 = FUN_1437151f0(local_2b0);
          uVar8 = Electra::FHTTPResourceRequest::URL
                            (local_270,"Class mismatch, cannot resolve link: ");
          uVar7 = Electra::FHTTPResourceRequest::URL(uVar8,uVar7);
          uVar7 = Electra::FHTTPResourceRequest::URL(uVar7,&DAT_145b9b560);
          Electra::FHTTPResourceRequest::URL(uVar7,uVar6);
          FUN_143732520(0xf034ed21,local_248,"Serialize\\ResourceHandle\\hkResourceHandle.cpp",199);
          FUN_143713520(local_270);
        }
        else {
          lVar9 = (**(code **)(*param_1 + 0x30))(param_1);
          if (lVar4 == lVar9) {
            if ((uVar13 & 1) != 0) {
              FUN_143733a60(uVar13 & 0xfffffffffffffffe);
            }
            break;
          }
          lStack_2a0 = local_2b0;
          local_2a8 = lVar4;
          if (local_2b0 == 0) {
            local_298 = 0;
          }
          else {
            local_298 = FUN_1437151a0();
          }
          if ((local_298 & 1) != 0) {
            FUN_1437329e0(local_298 & 0xfffffffffffffffe);
          }
          (**(code **)(*plVar12 + 0x48))(plVar12,local_res20,uVar6,uVar7,&local_2a8);
          if ((local_298 & 1) != 0) {
            FUN_143733a60(local_298 & 0xfffffffffffffffe);
          }
          (**(code **)(*param_1 + 0x50))(param_1,*(undefined8 *)(lVar11 + lVar1));
        }
        if ((uVar13 & 1) != 0) {
          FUN_143733a60(plVar12);
        }
      }
      lVar11 = lVar11 + -0x28;
      local_290 = local_290 + -1;
    } while (-1 < local_290);
  }
  uVar6 = FUN_143703a50();
  lVar11 = (longlong)(local_2b8 + -1);
  if (-1 < local_2b8 + -1) {
    puVar10 = (ulonglong *)(local_2c0 + lVar11 * 0x28 + 0x20);
    do {
      if ((*puVar10 & 1) != 0) {
        FUN_143733a60(*puVar10 & 0xfffffffffffffffe);
      }
      puVar10 = puVar10 + -5;
      lVar11 = lVar11 + -1;
    } while (-1 < lVar11);
  }
  local_2b8 = 0;
  if (-1 < (int)local_2b4) {
    FUN_143702e10(uVar6,local_2c0,0x28,local_2b4 & 0x3fffffff);
  }
  return;
}



// FUNCTION 143756e00 FUN_143756e00 body=139 status=ok
// SIG undefined FUN_143756e00(void)

longlong FUN_143756e00(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143756f20();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x38;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
    }
  }
  return param_1;
}



// FUNCTION 143756e90 FUN_143756e90 body=127 status=ok
// SIG undefined FUN_143756e90(void)

longlong FUN_143756e90(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong local_res18 [2];
  
  lVar1 = FUN_14371d670(param_2);
  if (lVar1 == 0) {
    local_res18[0] = param_2;
    lVar1 = FUN_1437576f0(param_1 + 0x18,local_res18);
    if ((lVar1 != 0) && (-1 < *(int *)(lVar1 + 4))) {
      return *(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(lVar1 + 4) * 8);
    }
    lVar1 = FUN_143762590(param_2);
    local_res18[0] = lVar1;
    FUN_1437577c0(param_1 + 0x18,local_res18);
  }
  return lVar1;
}



// FUNCTION 143756f10 FUN_143756f10 body=12 status=ok
// SIG undefined FUN_143756f10(void)

void FUN_143756f10(undefined8 param_1,undefined8 param_2)

{
  FUN_142b7ebc0(param_1,param_2,&DAT_1467f51a0);
  return;
}



// FUNCTION 143756f20 FUN_143756f20 body=169 status=ok
// SIG undefined FUN_143756f20(void)

void FUN_143756f20(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  *param_1 = _anon_A4181BB4::PlaceholderTypeReg::vftable;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_143744e50(*(undefined8 *)(param_1[3] + (longlong)iVar1 * 8));
  }
  thunk_FUN_143734820(param_1 + 5);
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 4) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    FUN_143702e10(uVar2,param_1[3],8,*(uint *)((longlong)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  FUN_14376fbe0(param_1);
  return;
}



// FUNCTION 143756fd0 SupportsConvertibleLaptops body=19 status=ok
// SIG undefined SupportsConvertibleLaptops(void)

bool UPlatformEventsComponent::SupportsConvertibleLaptops(void)

{
  int iVar1;
  
  iVar1 = hkReflect::Type::compareName();
  return iVar1 != 0;
}



// FUNCTION 143756ff0 FUN_143756ff0 body=220 status=ok
// SIG undefined FUN_143756ff0(void)

longlong * FUN_143756ff0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  longlong lVar4;
  int iVar5;
  
  uVar2 = FUN_143703a50();
  lVar1 = *param_1;
  iVar5 = (int)param_1[1] + -1;
  lVar4 = (longlong)iVar5;
  if (-1 < iVar5) {
    do {
      if (*(longlong *)(lVar1 + lVar4 * 8) != 0) {
        FUN_14370c150();
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xc)) {
    FUN_143702e10(uVar2,*param_1,8,*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar3 = TlsGetValue(DAT_146b7bf70);
      if (pvVar3 == (LPVOID)0x0) {
        pvVar3 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar3 + 0x58),param_1,0x10);
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
    }
  }
  return param_1;
}



// FUNCTION 1437570d0 FUN_1437570d0 body=1555 status=ok
// SIG undefined FUN_1437570d0(void)

undefined8 FUN_1437570d0(void)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  longlong local_158;
  undefined8 uStack_150;
  longlong local_148;
  int local_140;
  uint local_13c;
  undefined **local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_120;
  undefined8 local_118 [2];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  uint local_f0;
  uint local_ec;
  undefined **local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined **local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined **local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  ulonglong uStack_70;
  longlong local_68 [4];
  undefined1 local_48 [16];
  undefined1 local_38 [32];
  
  uVar6 = 0;
  local_13c = 0x80000000;
  local_148 = 0;
  local_c0 = UnitTest::InterfaceImpl0::vftable;
  local_140 = 0;
  local_a8 = UnitTest::InterfaceUnregistered0::vftable;
  local_b8 = 0;
  local_b0 = 0x1ffff;
  local_a0 = 0;
  local_98 = 0x1ffff;
  local_88 = 0;
  local_90 = 0x65;
  FUN_1437166c0(&local_88,"foofoo");
  local_d0 = 0;
  local_d8 = UnitTest::InterfaceImpl1::vftable;
  local_c8 = 0x1ffff;
  local_138 = UnitTest::InterfaceUnregistered1::vftable;
  local_130 = 0;
  local_128 = 0x1ffff;
  local_118[0] = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 0x80000000;
  local_120 = 0xca;
  FUN_1437166c0(local_118,"barbar");
  local_108 = 0x40800000;
  uStack_104 = 0x40a00000;
  uStack_100 = 0x40c00000;
  uStack_fc = 0;
  FUN_143716620(local_res8,"hello");
  uVar3 = FUN_143703a50();
  if (local_f0 == (local_ec & 0x3fffffff)) {
    FUN_14370c460(uVar3,&local_f8,8);
  }
  lVar4 = local_f8 + (longlong)(int)local_f0 * 8;
  if (lVar4 != 0) {
    FUN_1437165f0(lVar4,local_res8);
  }
  local_f0 = local_f0 + 1;
  FUN_143716650(local_res8);
  FUN_143716620(local_res8,"world");
  uVar3 = FUN_143703a50();
  if (local_f0 == (local_ec & 0x3fffffff)) {
    FUN_14370c460(uVar3,&local_f8,8);
  }
  lVar4 = local_f8 + (longlong)(int)local_f0 * 8;
  if (lVar4 != 0) {
    FUN_1437165f0(lVar4,local_res8);
  }
  local_f0 = local_f0 + 1;
  FUN_143716650(local_res8);
  local_158 = 0;
  uStack_150._0_4_ = 0;
  uStack_150._4_4_ = 0x80000000;
  FUN_14370c030(&local_c0);
  uVar3 = FUN_143703a50();
  if ((uint)uStack_150 == (uStack_150._4_4_ & 0x3fffffff)) {
    FUN_14370c460(uVar3,&local_158,8);
  }
  plVar1 = (longlong *)(local_158 + (longlong)(int)(uint)uStack_150 * 8);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&local_c0;
    FUN_14370c030(&local_c0);
  }
  uStack_150._0_4_ = (uint)uStack_150 + 1;
  FUN_14370c150(&local_c0);
  FUN_14370c030(&local_a8);
  uVar3 = FUN_143703a50();
  if ((uint)uStack_150 == (uStack_150._4_4_ & 0x3fffffff)) {
    FUN_14370c460(uVar3,&local_158,8);
  }
  plVar1 = (longlong *)(local_158 + (longlong)(int)(uint)uStack_150 * 8);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&local_a8;
    FUN_14370c030(&local_a8);
  }
  uStack_150._0_4_ = (uint)uStack_150 + 1;
  FUN_14370c150(&local_a8);
  FUN_14370c030(&local_d8);
  uVar3 = FUN_143703a50();
  if ((uint)uStack_150 == (uStack_150._4_4_ & 0x3fffffff)) {
    FUN_14370c460(uVar3,&local_158,8);
  }
  plVar1 = (longlong *)(local_158 + (longlong)(int)(uint)uStack_150 * 8);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&local_d8;
    FUN_14370c030(&local_d8);
  }
  uStack_150._0_4_ = (uint)uStack_150 + 1;
  FUN_14370c150(&local_d8);
  FUN_14370c030(&local_138);
  uVar3 = FUN_143703a50();
  if ((uint)uStack_150 == (uStack_150._4_4_ & 0x3fffffff)) {
    FUN_14370c460(uVar3,&local_158,8);
  }
  plVar1 = (longlong *)(local_158 + (longlong)(int)(uint)uStack_150 * 8);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&local_138;
    FUN_14370c030(&local_138);
  }
  uStack_150 = CONCAT44(uStack_150._4_4_,(uint)uStack_150 + 1);
  FUN_14370c150(&local_138);
  local_68[0] = 0;
  lVar4 = AActor::GetLevel(&local_148);
  if (lVar4 != 0) {
    FUN_14370c030(lVar4);
  }
  if (local_68[0] != 0) {
    FUN_14370c150();
  }
  local_68[3] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[0] = lVar4;
  uVar3 = FUN_1424b51c0(local_38);
  local_78 = 0;
  uStack_70 = 0;
  puVar5 = (undefined8 *)FUN_14371d5c0(local_48,&local_158,&DAT_1467f51a0);
  local_80 = *puVar5;
  local_78 = puVar5[1];
  if (local_78 != 0) {
    uVar6 = FUN_1437151a0();
  }
  if ((uVar6 & 1) != 0) {
    FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
  }
  if ((uStack_70 & 1) != 0) {
    FUN_143733a60(uStack_70 & 0xfffffffffffffffe);
  }
  uStack_70 = uVar6;
  FUN_14371c600(uVar3,local_res8,&local_80,local_68);
  if ((uStack_70 & 1) != 0) {
    FUN_143733a60(uStack_70 & 0xfffffffffffffffe);
  }
  FUN_14371b260(local_38);
  if (local_68[0] != 0) {
    FUN_14370c150();
  }
  uVar3 = FUN_143703a50();
  lVar4 = local_158;
  lVar8 = (longlong)(int)((uint)uStack_150 + -1);
  if (-1 < (int)((uint)uStack_150 + -1)) {
    do {
      if (*(longlong *)(lVar4 + lVar8 * 8) != 0) {
        FUN_14370c150();
      }
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
  }
  lVar4 = uStack_150;
  uVar2 = uStack_150._4_4_;
  uStack_150 = (ulonglong)uStack_150._4_4_ << 0x20;
  if (-1 < lVar4) {
    FUN_143702e10(uVar3,local_158,8,uVar2 & 0x3fffffff);
  }
  local_158 = 0;
  uStack_150 = CONCAT44(0x80000000,(uint)uStack_150);
  uVar3 = FUN_143703a50();
  iVar7 = local_f0 + -1;
  if (-1 < iVar7) {
    lVar4 = local_f8 + (longlong)iVar7 * 8;
    do {
      FUN_143716650(lVar4);
      lVar4 = lVar4 + -8;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  local_f0 = 0;
  if (-1 < (int)local_ec) {
    FUN_143702e10(uVar3,local_f8,8,local_ec & 0x3fffffff);
  }
  local_f8 = 0;
  local_ec = 0x80000000;
  FUN_143716650(local_118);
  FUN_14370c000(&local_138);
  FUN_14370c000(&local_d8);
  FUN_143716650(&local_88);
  FUN_14370c000(&local_a8);
  FUN_14370c000(&local_c0);
  uStack_150 = local_140 + local_148;
  local_158 = local_148;
  FUN_1437578d0(&local_158);
  uStack_150 = local_140 + local_148;
  local_158 = local_148;
  FUN_143757b10(&local_158);
  uVar3 = FUN_143703a50();
  local_140 = 0;
  if (-1 < (int)local_13c) {
    FUN_143702e10(uVar3,local_148,1,local_13c & 0x3fffffff);
  }
  return 0;
}



// FUNCTION 1437576f0 FUN_1437576f0 body=136 status=ok
// SIG undefined FUN_1437576f0(void)

longlong FUN_1437576f0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar4 = FUN_143757790(*param_2);
  uVar5 = (ulonglong)(*(uint *)(param_1 + 3) & uVar4);
  lVar1 = param_1[2] + uVar5 * 8;
  iVar2 = *(int *)(param_1[2] + 4 + uVar5 * 8);
  while( true ) {
    if (iVar2 < 0) {
      return 0;
    }
    cVar3 = UPlatformEventsComponent::SupportsConvertibleLaptops
                      (*(undefined8 *)(*param_1 + (longlong)iVar2 * 8),*param_2);
    if (cVar3 != '\0') break;
    uVar5 = (ulonglong)((int)uVar5 + 1U & *(uint *)(param_1 + 3));
    lVar1 = param_1[2] + uVar5 * 8;
    iVar2 = *(int *)(param_1[2] + 4 + uVar5 * 8);
  }
  return lVar1;
}



// FUNCTION 143757780 FUN_143757780 body=15 status=ok
// SIG undefined FUN_143757780(void)

longlong * FUN_143757780(longlong param_1,longlong *param_2)

{
  param_2[1] = *(longlong *)(param_1 + 0x18);
  *param_2 = param_1;
  return param_2;
}



// FUNCTION 143757790 FUN_143757790 body=36 status=ok
// SIG undefined FUN_143757790(void)

void FUN_143757790(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_14374b520(0,param_1);
  FUN_14374b560(uVar1,param_1);
  return;
}



// FUNCTION 1437577c0 FUN_1437577c0 body=260 status=ok
// SIG undefined FUN_1437577c0(void)

ulonglong FUN_1437577c0(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(param_1 + 2);
  }
  uVar5 = FUN_143757790(*param_2);
  iVar3 = *(int *)(param_1[2] + 4 + (ulonglong)(*(uint *)(param_1 + 3) & uVar5) * 8);
  puVar1 = (uint *)(param_1[2] + (ulonglong)(*(uint *)(param_1 + 3) & uVar5) * 8);
  while( true ) {
    if (iVar3 < 0) {
      uVar4 = *(uint *)(param_1 + 1);
      *puVar1 = uVar5;
      puVar1[1] = uVar4;
      uVar7 = FUN_143703a50();
      if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
        FUN_14370c460(uVar7,param_1,8);
      }
      lVar8 = *param_1;
      plVar2 = (longlong *)(lVar8 + (longlong)(int)param_1[1] * 8);
      if (plVar2 != (longlong *)0x0) {
        lVar8 = *param_2;
        *plVar2 = lVar8;
      }
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      return CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
    }
    uVar6 = UPlatformEventsComponent::SupportsConvertibleLaptops
                      (*(undefined8 *)(*param_1 + (longlong)(int)puVar1[1] * 8),*param_2);
    if ((char)uVar6 != '\0') break;
    lVar8 = param_1[2];
    uVar6 = ((longlong)puVar1 - lVar8 >> 3) + 1U & (longlong)(int)param_1[3];
    iVar3 = *(int *)(lVar8 + 4 + uVar6 * 8);
    puVar1 = (uint *)(lVar8 + uVar6 * 8);
  }
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 1437578d0 FUN_1437578d0 body=562 status=ok
// SIG undefined FUN_1437578d0(void)

void FUN_1437578d0(undefined8 *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  char *pcVar3;
  longlong *plVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 local_res8 [8];
  undefined8 *local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_50;
  undefined1 local_48 [64];
  
  local_70 = *param_1;
  pcVar6 = (code *)0x0;
  local_78 = (undefined8 *)0x0;
  local_68 = (longlong)(*(int *)(param_1 + 1) - (int)local_70);
  uVar1 = FUN_14371aeb0(local_48);
  uVar1 = FUN_14371d4f0(uVar1,1);
  FUN_14371d320(uVar1,&local_60,&local_78,0);
  FUN_14371b0d0(local_48);
  if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,1);
  }
  pcVar2 = pcVar6;
  if (local_60 != 0) {
    pcVar2 = AK::MemoryMgr::StartProfileThreadUsage;
  }
  pcVar3 = (char *)FUN_143762f50(local_res8,pcVar2 != (code *)0x0,&DAT_145b9b660,
                                 "UnitTest\\Serialize\\Unregistered\\UnregisteredType.cpp",0x52);
  if (*pcVar3 != '\0') {
    plVar4 = (longlong *)FUN_143756f10(local_60,local_58);
    pcVar3 = (char *)FUN_143762f50(local_res8,plVar4 != (longlong *)0x0,&DAT_145b9b664,
                                   "UnitTest\\Serialize\\Unregistered\\UnregisteredType.cpp",0x55);
    if (*pcVar3 != '\0') {
      FUN_143762f50(local_res8,*(longlong *)*plVar4 != 0,"(*arr)[0]",
                    "UnitTest\\Serialize\\Unregistered\\UnregisteredType.cpp",0x57);
      FUN_143762f50(local_res8,*(longlong *)(*plVar4 + 8) == 0,"(*arr)[1] == HK_NULL",
                    "UnitTest\\Serialize\\Unregistered\\UnregisteredType.cpp",0x58);
      FUN_143762f50(local_res8,*(longlong *)(*plVar4 + 0x10) != 0,"(*arr)[2]",
                    "UnitTest\\Serialize\\Unregistered\\UnregisteredType.cpp",0x59);
      FUN_143762f50(local_res8,*(longlong *)(*plVar4 + 0x18) == 0,"(*arr)[3] == HK_NULL",
                    "UnitTest\\Serialize\\Unregistered\\UnregisteredType.cpp",0x5a);
      pcVar2 = pcVar6;
      if (0 < (int)plVar4[1]) {
        do {
          if (*(longlong **)(pcVar2 + *plVar4) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(pcVar2 + *plVar4) + 0x18))();
          }
          uVar5 = (int)pcVar6 + 1;
          pcVar6 = (code *)(ulonglong)uVar5;
          pcVar2 = pcVar2 + 8;
        } while ((int)uVar5 < (int)plVar4[1]);
      }
    }
    if (plVar4 != (longlong *)0x0) {
      FUN_143756ff0(plVar4,1);
    }
  }
  if ((local_50 & 1) != 0) {
    FUN_143733a60(local_50 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 143757b10 FUN_143757b10 body=735 status=ok
// SIG undefined FUN_143757b10(void)

void FUN_143757b10(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  char *pcVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  code *pcVar8;
  uint uVar9;
  int local_res8;
  undefined4 uStackX_c;
  undefined8 local_res10;
  undefined4 uVar10;
  undefined **local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  longlong local_a0;
  int local_98;
  uint local_94;
  undefined1 local_90 [16];
  longlong local_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined1 local_68 [64];
  
  pcVar8 = (code *)0x0;
  local_b8 = _anon_A4181BB4::PlaceholderTypeReg::vftable;
  local_b0 = 0;
  local_a8 = 0x1ffff;
  local_a0 = 0;
  local_98 = 0;
  local_94 = 0x80000000;
  FUN_143734b10(local_90);
  iVar7 = param_1[2];
  iVar1 = *param_1;
  uVar6 = *(undefined8 *)param_1;
  uVar2 = FUN_14371aeb0(local_68);
  uVar2 = SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>(uVar2,&local_b8);
  uVar10 = 0;
  FUN_14371d3e0(uVar2,&local_80,uVar6,(longlong)(iVar7 - iVar1),0,0);
  FUN_14371b0d0(local_68);
  uVar6 = CONCAT44(uVar10,0x6e);
  pcVar3 = pcVar8;
  if (local_80 != 0) {
    pcVar3 = AK::MemoryMgr::StartProfileThreadUsage;
  }
  pcVar4 = (char *)FUN_143762f50(&local_res8,pcVar3 != (code *)0x0,&DAT_145b9b660,
                                 "UnitTest\\Serialize\\Unregistered\\UnregisteredType.cpp",uVar6);
  uVar10 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (*pcVar4 != '\0') {
    plVar5 = (longlong *)FUN_143756f10(local_80,local_78);
    pcVar4 = (char *)FUN_143762f50(&local_res8,plVar5 != (longlong *)0x0,&DAT_145b9b664,
                                   "UnitTest\\Serialize\\Unregistered\\UnregisteredType.cpp",
                                   CONCAT44(uVar10,0x71));
    if (*pcVar4 != '\0') {
      FUN_143762f50(&local_res8,*(longlong *)*plVar5 != 0,"(*arr)[0]",
                    "UnitTest\\Serialize\\Unregistered\\UnregisteredType.cpp",0x73);
      FUN_143762f50(&local_res8,*(longlong *)(*plVar5 + 8) != 0,"(*arr)[1]",
                    "UnitTest\\Serialize\\Unregistered\\UnregisteredType.cpp",0x74);
      FUN_143762f50(&local_res8,*(longlong *)(*plVar5 + 0x10) != 0,"(*arr)[2]",
                    "UnitTest\\Serialize\\Unregistered\\UnregisteredType.cpp",0x75);
      FUN_143762f50(&local_res8,*(longlong *)(*plVar5 + 0x18) != 0,"(*arr)[3]",
                    "UnitTest\\Serialize\\Unregistered\\UnregisteredType.cpp",0x76);
      pcVar3 = pcVar8;
      if (0 < (int)plVar5[1]) {
        do {
          if (*(longlong **)(pcVar8 + *plVar5) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(pcVar8 + *plVar5) + 0x18))();
          }
          uVar9 = (int)pcVar3 + 1;
          pcVar8 = pcVar8 + 8;
          pcVar3 = (code *)(ulonglong)uVar9;
        } while ((int)uVar9 < (int)plVar5[1]);
      }
    }
    if (plVar5 != (longlong *)0x0) {
      FUN_143756ff0(plVar5,1);
    }
  }
  if ((local_70 & 1) != 0) {
    FUN_143733a60(local_70 & 0xfffffffffffffffe);
  }
  iVar7 = local_98 + -1;
  local_b8 = _anon_A4181BB4::PlaceholderTypeReg::vftable;
  if (-1 < iVar7) {
    uStackX_c = 0xffffffff;
    do {
      FUN_143744e50(*(undefined8 *)(local_a0 + (longlong)iVar7 * 8));
      iVar7 = iVar7 + -1;
      local_res10 = CONCAT44(uStackX_c,iVar7);
      local_res8 = iVar7;
    } while (-1 < iVar7);
  }
  thunk_FUN_143734820(local_90);
  uVar6 = FUN_143703a50();
  local_98 = 0;
  if (-1 < (int)local_94) {
    FUN_143702e10(uVar6,local_a0,8,local_94 & 0x3fffffff);
  }
  local_a0 = 0;
  local_94 = 0x80000000;
  FUN_14376fbe0(&local_b8);
  return;
}



// FUNCTION 143757df0 FUN_143757df0 body=217 status=ok
// SIG undefined FUN_143757df0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_143757df0(undefined8 param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b835d0) {
    _Init_thread_header(&DAT_146b835d0);
    if (DAT_146b835d0 == -1) {
      _DAT_146b83670 = FUN_14375c660;
      _DAT_146b83668 = FUN_14375cb60;
      _DAT_146b83660 = FUN_14375ca60;
      _DAT_146b83658 = FUN_14375c860;
      _DAT_146b83650 = FUN_14375c960;
      _DAT_146b83648 = FUN_14375cc60;
      _DAT_146b83640 = FUN_14375c760;
      _DAT_146b83638 = FUN_14375c5c0;
      _DAT_146b83630 = FUN_143750060;
      _Init_thread_footer(&DAT_146b835d0);
    }
  }
  return param_1;
}



// FUNCTION 143757ed0 FUN_143757ed0 body=217 status=ok
// SIG undefined FUN_143757ed0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_143757ed0(undefined8 param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b835d4) {
    _Init_thread_header(&DAT_146b835d4);
    if (DAT_146b835d4 == -1) {
      _DAT_146b83620 = FUN_14375cd60;
      _DAT_146b83618 = FUN_14375d270;
      _DAT_146b83610 = FUN_14375d170;
      _DAT_146b83608 = FUN_14375cf70;
      _DAT_146b83600 = FUN_14375d070;
      _DAT_146b835f8 = FUN_14375d380;
      _DAT_146b835f0 = FUN_14375ce70;
      _DAT_146b835e8 = FUN_14375c610;
      _DAT_146b835e0 = FUN_143750060;
      _Init_thread_footer(&DAT_146b835d4);
    }
  }
  return param_1;
}



// FUNCTION 143757fb0 FUN_143757fb0 body=142 status=ok
// SIG undefined FUN_143757fb0(void)

longlong FUN_143757fb0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe);
  }
  FUN_143732980(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x30);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x30);
    }
  }
  return param_1;
}



// FUNCTION 143758040 FUN_143758040 body=142 status=ok
// SIG undefined FUN_143758040(void)

longlong FUN_143758040(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  FUN_143732980(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x20);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
    }
  }
  return param_1;
}



// FUNCTION 1437580d0 FUN_1437580d0 body=101 status=ok
// SIG undefined FUN_1437580d0(void)

void FUN_1437580d0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_3 + 8);
  puVar3 = (undefined8 *)FUN_143714490(uVar1,1);
  if (puVar3 == (undefined8 *)0x0) {
    bVar2 = 0;
  }
  else {
    bVar2 = (byte)*puVar3;
  }
  uVar5 = 0;
  if ((bVar2 & 0xf) == 8) {
    uVar5 = uVar1;
  }
  plVar4 = (longlong *)FUN_1437151a0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00014375812e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x88))(plVar4,param_2,uVar5);
  return;
}



// FUNCTION 143758140 FUN_143758140 body=87 status=ok
// SIG undefined FUN_143758140(void)

void FUN_143758140(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 local_res8;
  
  uVar1 = *param_3;
  FUN_143757ed0(&local_res8);
  local_res8 = param_1;
  puVar3 = (undefined8 *)FUN_143714490(uVar1,1);
  uVar2 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    uVar2 = (uint)*puVar3;
  }
  (**(code **)(&DAT_146b835e0 + (ulonglong)(uVar2 & 0xf) * 8))(&local_res8,uVar1);
  return;
}



// FUNCTION 1437581a0 FUN_1437581a0 body=87 status=ok
// SIG undefined FUN_1437581a0(void)

void FUN_1437581a0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 local_res8;
  
  uVar1 = *param_3;
  FUN_143757ed0(&local_res8);
  local_res8 = param_1;
  puVar3 = (undefined8 *)FUN_143714490(uVar1,1);
  uVar2 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    uVar2 = (uint)*puVar3;
  }
  (**(code **)(&DAT_146b835e0 + (ulonglong)(uVar2 & 0xf) * 8))(&local_res8,uVar1);
  return;
}



// FUNCTION 143758200 FUN_143758200 body=470 status=ok
// SIG undefined FUN_143758200(void)

undefined4 *
FUN_143758200(ulonglong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 local_res8 [8];
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58;
  undefined8 local_50;
  longlong lStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  plVar6 = (longlong *)FUN_1437151a0(param_4);
  uVar5 = 0;
  local_50 = 0;
  lStack_48 = 0;
  local_40 = 0;
  local_38 = 0;
  (**(code **)(*plVar6 + 0x68))(plVar6,local_res8,param_3,param_4,&local_50);
  local_58 = param_1 | 1;
  local_68 = param_3;
  local_60 = param_4;
  FUN_1437329e0(param_1 & 0xfffffffffffffffe);
  lVar2 = lStack_48;
  uVar1 = local_50;
  FUN_143757df0(&local_78);
  local_78 = &local_68;
  local_70 = uVar1;
  puVar7 = (undefined8 *)FUN_143714490(lVar2,1);
  uVar4 = uVar5;
  if (puVar7 != (undefined8 *)0x0) {
    uVar4 = (uint)*puVar7;
  }
  uVar8 = (**(code **)(&DAT_146b83630 + (ulonglong)(uVar4 & 0xf) * 8))(&local_78,lVar2);
  lVar2 = lStack_48;
  uVar1 = local_50;
  uVar9 = uVar8 | 1;
  uVar3 = (undefined4)local_40;
  FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
  if ((lVar2 != 0) && (uVar5 = FUN_1437152f0(lVar2), uVar8 == 0)) {
    uVar9 = FUN_1437151a0(lVar2);
    if ((uVar9 & 1) != 0) {
      FUN_1437329e0(uVar9 & 0xfffffffffffffffe);
    }
    FUN_143733a60(0);
  }
  *param_5 = uVar1;
  param_5[1] = lVar2;
  *(undefined4 *)(param_5 + 2) = uVar3;
  *(uint *)((longlong)param_5 + 0x14) = uVar5;
  if ((*(byte *)(param_5 + 3) & 1) != 0) {
    FUN_143733a60(param_5[3] & 0xfffffffffffffffe);
  }
  param_5[3] = uVar9;
  *param_2 = 0;
  if ((local_58 & 1) != 0) {
    FUN_143733a60(local_58 & 0xfffffffffffffffe);
  }
  if ((local_38 & 1) != 0) {
    FUN_143733a60(local_38 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 1437583e0 FUN_1437583e0 body=80 status=ok
// SIG undefined FUN_1437583e0(void)

undefined8
FUN_1437583e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1437151a0(param_4);
  (**(code **)(*plVar1 + 0x68))(plVar1,param_2,param_3,param_4,param_5);
  return param_2;
}



// FUNCTION 143758430 FUN_143758430 body=80 status=ok
// SIG undefined FUN_143758430(void)

undefined8
FUN_143758430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1437151a0(param_4);
  (**(code **)(*plVar1 + 0x38))(plVar1,param_2,param_3,param_4,param_5);
  return param_2;
}



// FUNCTION 143758480 FUN_143758480 body=80 status=ok
// SIG undefined FUN_143758480(void)

undefined8
FUN_143758480(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1437151a0(param_4);
  (**(code **)(*plVar1 + 0x50))(plVar1,param_2,param_3,param_4,param_5);
  return param_2;
}



// FUNCTION 1437584d0 FUN_1437584d0 body=137 status=ok
// SIG undefined FUN_1437584d0(void)

undefined8
FUN_1437584d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte *param_4,
             undefined8 param_5)

{
  byte *pbVar1;
  longlong *plVar2;
  
  pbVar1 = param_4;
  while ((pbVar1 != (byte *)0x0 &&
         ((((*pbVar1 & 4) == 0 ||
           (plVar2 = (longlong *)FUN_1437143d0(pbVar1,4), plVar2 == (longlong *)0x0)) ||
          (*plVar2 == 0))))) {
    pbVar1 = *(byte **)(pbVar1 + 8);
  }
  plVar2 = (longlong *)FUN_1437151a0(*(undefined8 *)(pbVar1 + 8));
  (**(code **)(*plVar2 + 0x38))(plVar2,param_2,param_3,param_4,param_5);
  return param_2;
}



// FUNCTION 143758560 FUN_143758560 body=137 status=ok
// SIG undefined FUN_143758560(void)

undefined8
FUN_143758560(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte *param_4,
             undefined8 param_5)

{
  byte *pbVar1;
  longlong *plVar2;
  
  pbVar1 = param_4;
  while ((pbVar1 != (byte *)0x0 &&
         ((((*pbVar1 & 4) == 0 ||
           (plVar2 = (longlong *)FUN_1437143d0(pbVar1,4), plVar2 == (longlong *)0x0)) ||
          (*plVar2 == 0))))) {
    pbVar1 = *(byte **)(pbVar1 + 8);
  }
  plVar2 = (longlong *)FUN_1437151a0(*(undefined8 *)(pbVar1 + 8));
  (**(code **)(*plVar2 + 0x50))(plVar2,param_2,param_3,param_4,param_5);
  return param_2;
}



// FUNCTION 1437585f0 FUN_1437585f0 body=621 status=ok
// SIG undefined FUN_1437585f0(void)

undefined4 *
FUN_1437585f0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,byte *param_4,
             undefined8 *param_5)

{
  byte *pbVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined4 local_res20 [2];
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  byte *local_60;
  ulonglong local_58;
  undefined8 local_50;
  longlong lStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  uVar7 = 0;
  uVar5 = 0;
  local_40 = 0;
  local_38 = 0;
  local_50 = 0;
  lStack_48 = 0;
  pbVar1 = param_4;
  while ((pbVar1 != (byte *)0x0 &&
         ((((*pbVar1 & 4) == 0 ||
           (plVar6 = (longlong *)FUN_1437143d0(pbVar1,4), plVar6 == (longlong *)0x0)) ||
          (*plVar6 == 0))))) {
    pbVar1 = *(byte **)(pbVar1 + 8);
  }
  plVar6 = (longlong *)FUN_1437151a0(*(undefined8 *)(pbVar1 + 8));
  (**(code **)(*plVar6 + 0x68))(plVar6,local_res20,param_3,param_4,&local_50);
  if ((int)local_40 == 0) {
    *param_5 = local_50;
    param_5[1] = lStack_48;
    *(undefined4 *)((longlong)param_5 + 0x14) = local_40._4_4_;
    *(undefined4 *)(param_5 + 2) = 0;
    if ((local_38 & 1) != 0) {
      FUN_1437329e0(local_38 & 0xfffffffffffffffe);
    }
    if ((*(byte *)(param_5 + 3) & 1) != 0) {
      FUN_143733a60(param_5[3] & 0xfffffffffffffffe);
    }
    param_5[3] = local_38;
    *param_2 = 0;
  }
  else {
    local_68 = param_3;
    local_60 = param_4;
    if (param_4 != (byte *)0x0) {
      uVar7 = FUN_1437151a0(param_4);
    }
    local_58 = uVar7;
    if ((uVar7 & 1) != 0) {
      FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
    }
    lVar3 = lStack_48;
    uVar2 = local_50;
    FUN_143757df0(&local_78);
    local_78 = &local_68;
    local_70 = uVar2;
    puVar8 = (undefined8 *)FUN_143714490(lVar3,1);
    uVar4 = uVar5;
    if (puVar8 != (undefined8 *)0x0) {
      uVar4 = (uint)*puVar8;
    }
    uVar7 = (**(code **)(&DAT_146b83630 + (ulonglong)(uVar4 & 0xf) * 8))(&local_78,lVar3);
    lVar3 = lStack_48;
    uVar2 = local_50;
    uVar9 = uVar7 | 1;
    local_res20[0] = (int)local_40;
    FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
    if ((lVar3 != 0) && (uVar5 = FUN_1437152f0(lVar3), uVar7 == 0)) {
      uVar9 = FUN_1437151a0(lVar3);
      if ((uVar9 & 1) != 0) {
        FUN_1437329e0(uVar9 & 0xfffffffffffffffe);
      }
      FUN_143733a60(0);
    }
    *param_5 = uVar2;
    param_5[1] = lVar3;
    *(undefined4 *)(param_5 + 2) = local_res20[0];
    *(uint *)((longlong)param_5 + 0x14) = uVar5;
    if ((*(byte *)(param_5 + 3) & 1) != 0) {
      FUN_143733a60(param_5[3] & 0xfffffffffffffffe);
    }
    param_5[3] = uVar9;
    *param_2 = 0;
    if ((local_58 & 1) != 0) {
      FUN_143733a60(local_58 & 0xfffffffffffffffe);
    }
  }
  if ((local_38 & 1) != 0) {
    FUN_143733a60(local_38 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 143758860 FUN_143758860 body=743 status=ok
// SIG undefined FUN_143758860(void)

int * FUN_143758860(longlong param_1,int *param_2,longlong param_3,undefined8 param_4,
                   undefined4 param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  byte bVar9;
  int local_res8 [2];
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  undefined8 local_88;
  undefined1 local_80;
  undefined1 local_68 [16];
  ulonglong local_58;
  undefined8 local_50;
  longlong lStack_48;
  ulonglong uVar10;
  
  local_a8 = *(undefined8 *)(param_1 + 0x10);
  local_98 = *(ulonglong *)(param_1 + 0x20);
  local_a0 = *(undefined8 *)(param_1 + 0x18);
  if ((local_98 & 1) != 0) {
    FUN_1437329e0(local_98 & 0xfffffffffffffffe);
  }
  uVar10 = 0;
  bVar9 = 0;
  local_88 = 0;
  local_80 = 0;
  FUN_143748760(&local_88,&local_a8);
  puVar4 = (undefined8 *)FUN_1437488d0(&local_88,local_68);
  lVar7 = *(longlong *)(param_1 + 0x28);
  puVar5 = (undefined8 *)FUN_1437429a0(param_1 + 0x10,local_res8);
  iVar3 = FUN_1437152f0(*puVar5);
  local_c8 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  bVar1 = 0;
  if (puVar4[1] != 0) {
    puVar5 = (undefined8 *)FUN_143714490(puVar4[1],1);
    bVar2 = bVar1;
    if (puVar5 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar5;
    }
    if ((bVar2 & 0xf) == 8) {
      local_d8 = *puVar4;
      uStack_d0 = puVar4[1];
      if ((*(byte *)(puVar4 + 2) & 1) != 0) {
        FUN_1437329e0(puVar4[2] & 0xfffffffffffffffe);
      }
      if ((local_c8 & 1) != 0) {
        FUN_143733a60(local_c8 & 0xfffffffffffffffe);
      }
      local_c8 = puVar4[2];
    }
  }
  FUN_143741d50(&local_d8,&local_c0,(param_3 - lVar7) / (longlong)iVar3 & 0xffffffff);
  if ((local_c8 & 1) != 0) {
    FUN_143733a60(local_c8 & 0xfffffffffffffffe);
  }
  local_50 = 0;
  lStack_48 = 0;
  lVar7 = lStack_48;
  uVar6 = local_50;
  if (local_b8 != 0) {
    puVar4 = (undefined8 *)FUN_143714490(local_b8,1);
    if (puVar4 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar4;
    }
    lVar7 = lStack_48;
    uVar6 = local_50;
    if (((bVar1 & 0xf) == 8) &&
       (lVar7 = local_b8, uVar6 = local_c0, uVar10 = local_b0, (local_b0 & 1) != 0)) {
      FUN_1437329e0(local_b0 & 0xfffffffffffffffe);
      uVar10 = local_b0;
    }
  }
  if ((local_b0 & 1) != 0) {
    FUN_143733a60(local_b0 & 0xfffffffffffffffe);
  }
  if ((local_58 & 1) != 0) {
    FUN_143733a60(local_58 & 0xfffffffffffffffe);
  }
  plVar8 = (longlong *)(uVar10 & 0xfffffffffffffffe);
  (**(code **)(*plVar8 + 0x70))(plVar8,local_res8,uVar6,lVar7,param_5);
  if (local_res8[0] < 0) {
    *param_2 = local_res8[0];
  }
  else {
    puVar4 = (undefined8 *)FUN_1437488d0(&local_88,local_68);
    local_c8 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    if (puVar4[1] != 0) {
      puVar5 = (undefined8 *)FUN_143714490(puVar4[1],1);
      if (puVar5 != (undefined8 *)0x0) {
        bVar9 = (byte)*puVar5;
      }
      if ((bVar9 & 0xf) == 8) {
        local_d8 = *puVar4;
        uStack_d0 = puVar4[1];
        if ((*(byte *)(puVar4 + 2) & 1) != 0) {
          FUN_1437329e0(puVar4[2] & 0xfffffffffffffffe);
        }
        if ((local_c8 & 1) != 0) {
          FUN_143733a60(local_c8 & 0xfffffffffffffffe);
        }
        local_c8 = puVar4[2];
      }
    }
    uVar6 = FUN_143742a00(&local_d8,&local_50);
    FUN_143742bd0(&local_a8,param_2,uVar6);
    if ((local_c8 & 1) != 0) {
      FUN_143733a60(local_c8 & 0xfffffffffffffffe);
    }
    if ((local_58 & 1) != 0) {
      FUN_143733a60(local_58 & 0xfffffffffffffffe);
    }
  }
  if ((uVar10 & 1) != 0) {
    FUN_143733a60(plVar8);
  }
  FUN_1437484d0(&local_88);
  if ((local_98 & 1) != 0) {
    FUN_143733a60(local_98 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 143758b50 FUN_143758b50 body=676 status=ok
// SIG undefined FUN_143758b50(void)

/* WARNING: Removing unreachable block (ram,0x000143758be9) */

int * FUN_143758b50(longlong param_1,int *param_2,longlong param_3,undefined8 param_4,
                   undefined4 param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong local_res18;
  undefined8 local_b8;
  longlong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  undefined8 local_88;
  longlong lStack_80;
  undefined8 local_68;
  undefined1 local_60;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  uVar11 = *(ulonglong *)(param_1 + 0x10);
  uVar8 = 0;
  uVar4 = uVar8;
  local_res18 = param_3;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    uVar4 = FUN_143714de0();
  }
  puVar5 = (undefined8 *)FUN_143714490(uVar4,1);
  bVar1 = 0;
  bVar2 = bVar1;
  if (puVar5 != (undefined8 *)0x0) {
    bVar2 = (byte)*puVar5;
  }
  uVar9 = uVar8;
  if ((bVar2 & 0xf) == 7) {
    uVar9 = uVar4;
  }
  iVar3 = FUN_143715270(param_1 + 0x18);
  local_a0 = -iVar3 + local_res18;
  local_68 = 0;
  local_60 = 0;
  local_98 = uVar9;
  local_90 = uVar11 & 0xfffffffffffffffe;
  FUN_143748760(&local_68,&local_a0);
  uVar6 = FUN_1437488d0(&local_68,local_48);
  FUN_143741f50(uVar6,&local_b8,*(undefined8 *)(param_1 + 0x18));
  local_88 = 0;
  lStack_80 = 0;
  uVar6 = local_88;
  lVar10 = lStack_80;
  uVar11 = uVar8;
  if (local_b0 != 0) {
    puVar5 = (undefined8 *)FUN_143714490(local_b0,1);
    bVar2 = bVar1;
    if (puVar5 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar5;
    }
    uVar6 = local_88;
    lVar10 = lStack_80;
    if (((bVar2 & 0xf) == 8) &&
       (uVar6 = local_b8, lVar10 = local_b0, uVar11 = local_a8, (local_a8 & 1) != 0)) {
      FUN_1437329e0(local_a8 & 0xfffffffffffffffe);
      uVar11 = local_a8;
    }
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  if ((local_38 & 1) != 0) {
    FUN_143733a60(local_38 & 0xfffffffffffffffe);
  }
  plVar12 = (longlong *)(uVar11 & 0xfffffffffffffffe);
  (**(code **)(*plVar12 + 0x70))(plVar12,&local_res18,uVar6,lVar10,param_5);
  if ((int)local_res18 < 0) {
    *param_2 = (int)local_res18;
  }
  else {
    puVar5 = (undefined8 *)FUN_1437488d0(&local_68,local_48);
    local_88 = 0;
    lStack_80 = 0;
    local_b0 = lStack_80;
    local_b8 = local_88;
    if (puVar5[1] != 0) {
      puVar7 = (undefined8 *)FUN_143714490(puVar5[1],1);
      if (puVar7 != (undefined8 *)0x0) {
        bVar1 = (byte)*puVar7;
      }
      local_b0 = lStack_80;
      local_b8 = local_88;
      if ((bVar1 & 0xf) == 7) {
        uVar6 = *puVar5;
        lVar10 = puVar5[1];
        if ((*(byte *)(puVar5 + 2) & 1) != 0) {
          FUN_1437329e0(puVar5[2] & 0xfffffffffffffffe);
        }
        uVar8 = puVar5[2];
        local_b0 = lVar10;
        local_b8 = uVar6;
      }
    }
    local_a8 = uVar8;
    if ((uVar8 & 1) != 0) {
      FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
    }
    FUN_143742c20(&local_a0,param_2,&local_b8);
    if ((local_a8 & 1) != 0) {
      FUN_143733a60(local_a8 & 0xfffffffffffffffe);
    }
    if ((uVar8 & 1) != 0) {
      FUN_143733a60(uVar8 & 0xfffffffffffffffe);
    }
    if ((local_38 & 1) != 0) {
      FUN_143733a60(local_38 & 0xfffffffffffffffe);
    }
  }
  if ((uVar11 & 1) != 0) {
    FUN_143733a60(plVar12);
  }
  FUN_1437484d0(&local_68);
  if ((local_90 & 1) != 0) {
    FUN_143733a60(local_90 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 143758e00 FUN_143758e00 body=371 status=ok
// SIG undefined FUN_143758e00(void)

undefined4 *
FUN_143758e00(longlong param_1,undefined4 *param_2,longlong param_3,byte *param_4,undefined4 param_5
             )

{
  ushort uVar1;
  byte *pbVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined1 local_res8 [8];
  longlong local_58;
  byte *local_50;
  ulonglong local_48;
  undefined8 local_38;
  undefined1 local_30;
  
  local_48 = 0;
  local_58 = param_3;
  local_50 = param_4;
  if (param_4 != (byte *)0x0) {
    local_48 = FUN_1437151a0(param_4);
  }
  if ((local_48 & 1) != 0) {
    FUN_1437329e0(local_48 & 0xfffffffffffffffe);
  }
  local_38 = 0;
  local_30 = 0;
  FUN_143748760(&local_38,&local_58);
  pbVar2 = param_4;
  if ((local_48 & 1) != 0) {
    FUN_143733a60(local_48 & 0xfffffffffffffffe);
  }
  while ((pbVar2 != (byte *)0x0 &&
         ((((*pbVar2 & 4) == 0 ||
           (plVar4 = (longlong *)FUN_1437143d0(pbVar2,4), plVar4 == (longlong *)0x0)) ||
          (*plVar4 == 0))))) {
    pbVar2 = *(byte **)(pbVar2 + 8);
  }
  plVar4 = (longlong *)FUN_1437151a0(*(undefined8 *)(pbVar2 + 8));
  puVar5 = (undefined8 *)FUN_1437488d0(&local_38,&local_58);
  (**(code **)(*plVar4 + 0x70))(plVar4,local_res8,*puVar5,param_4,param_5);
  if ((local_48 & 1) != 0) {
    FUN_143733a60(local_48 & 0xfffffffffffffffe);
  }
  uVar1 = *(ushort *)(param_1 + 0x18);
  puVar5 = (undefined8 *)FUN_1437488d0(&local_38,&local_58);
  cVar3 = (**(code **)(param_1 + 0x10))((int)-(uint)uVar1 + param_3,*puVar5);
  uVar6 = 0x80040200;
  if (cVar3 != '\0') {
    uVar6 = 0;
  }
  *param_2 = uVar6;
  if ((local_48 & 1) != 0) {
    FUN_143733a60(local_48 & 0xfffffffffffffffe);
  }
  FUN_1437484d0(&local_38);
  return param_2;
}



// FUNCTION 143758f80 FUN_143758f80 body=825 status=ok
// SIG undefined FUN_143758f80(void)

int * FUN_143758f80(longlong param_1,int *param_2,longlong param_3,undefined8 param_4,
                   undefined8 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  byte bVar8;
  undefined1 local_res8 [8];
  undefined8 local_c8;
  longlong lStack_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  longlong lStack_a8;
  ulonglong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  uint local_88;
  undefined4 uStack_84;
  ulonglong local_80;
  undefined8 local_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  undefined8 local_38;
  undefined1 local_30;
  
  local_78 = *(undefined8 *)(param_1 + 0x10);
  local_68 = *(ulonglong *)(param_1 + 0x20);
  local_70 = *(undefined8 *)(param_1 + 0x18);
  if ((local_68 & 1) != 0) {
    FUN_1437329e0(local_68 & 0xfffffffffffffffe);
  }
  local_38 = 0;
  local_30 = 0;
  FUN_143748760(&local_38,&local_78);
  puVar5 = (undefined8 *)FUN_1437488d0(&local_38,&local_98);
  lVar1 = *(longlong *)(param_1 + 0x28);
  puVar6 = (undefined8 *)FUN_1437429a0(param_1 + 0x10,local_res8);
  iVar4 = FUN_1437152f0(*puVar6);
  local_50 = 0;
  local_60 = 0;
  uStack_58 = 0;
  bVar8 = 0;
  if (puVar5[1] != 0) {
    puVar6 = (undefined8 *)FUN_143714490(puVar5[1],1);
    bVar3 = bVar8;
    if (puVar6 != (undefined8 *)0x0) {
      bVar3 = (byte)*puVar6;
    }
    if ((bVar3 & 0xf) == 8) {
      local_60 = *puVar5;
      uStack_58 = puVar5[1];
      if ((*(byte *)(puVar5 + 2) & 1) != 0) {
        FUN_1437329e0(puVar5[2] & 0xfffffffffffffffe);
      }
      if ((local_50 & 1) != 0) {
        FUN_143733a60(local_50 & 0xfffffffffffffffe);
      }
      local_50 = puVar5[2];
    }
  }
  FUN_143741d50(&local_60,&local_c8,(param_3 - lVar1) / (longlong)iVar4 & 0xffffffff);
  if ((local_50 & 1) != 0) {
    FUN_143733a60(local_50 & 0xfffffffffffffffe);
  }
  local_a0 = 0;
  local_b0 = 0;
  lStack_a8 = 0;
  uVar2 = local_a0;
  if (lStack_c0 != 0) {
    puVar5 = (undefined8 *)FUN_143714490(lStack_c0,1);
    bVar3 = bVar8;
    if (puVar5 != (undefined8 *)0x0) {
      bVar3 = (byte)*puVar5;
    }
    uVar2 = local_a0;
    if ((bVar3 & 0xf) == 8) {
      local_b0 = local_c8;
      lStack_a8 = lStack_c0;
      if ((local_b8 & 1) != 0) {
        FUN_1437329e0(local_b8 & 0xfffffffffffffffe);
      }
      uVar2 = local_b8;
      if ((local_a0 & 1) != 0) {
        FUN_143733a60(local_a0 & 0xfffffffffffffffe);
        uVar2 = local_b8;
      }
    }
  }
  local_a0 = uVar2;
  if ((local_b8 & 1) != 0) {
    FUN_143733a60(local_b8 & 0xfffffffffffffffe);
  }
  if ((local_88 & 1) != 0) {
    FUN_143733a60(CONCAT44(uStack_84,local_88) & 0xfffffffffffffffe);
  }
  puVar5 = (undefined8 *)CONCAT44(param_5._4_4_,(int)param_5);
  local_98 = *puVar5;
  local_90 = puVar5[1];
  local_88 = *(uint *)(puVar5 + 2);
  uStack_84 = *(undefined4 *)((longlong)puVar5 + 0x14);
  local_80 = puVar5[3];
  if ((local_80 & 1) != 0) {
    FUN_1437329e0(local_80 & 0xfffffffffffffffe);
  }
  FUN_143742bd0(&local_b0,&param_5,&local_98);
  if (-1 < (int)param_5) {
    puVar5 = (undefined8 *)FUN_1437488d0(&local_38,&local_98);
    local_b8 = 0;
    local_c8 = 0;
    lStack_c0 = 0;
    if (puVar5[1] != 0) {
      puVar6 = (undefined8 *)FUN_143714490(puVar5[1],1);
      if (puVar6 != (undefined8 *)0x0) {
        bVar8 = (byte)*puVar6;
      }
      if ((bVar8 & 0xf) == 8) {
        local_c8 = *puVar5;
        lStack_c0 = puVar5[1];
        if ((*(byte *)(puVar5 + 2) & 1) != 0) {
          FUN_1437329e0(puVar5[2] & 0xfffffffffffffffe);
        }
        if ((local_b8 & 1) != 0) {
          FUN_143733a60(local_b8 & 0xfffffffffffffffe);
        }
        local_b8 = puVar5[2];
      }
    }
    uVar7 = FUN_143742a00(&local_c8,&local_60);
    FUN_143742bd0(&local_78,&param_5,uVar7);
    if ((local_b8 & 1) != 0) {
      FUN_143733a60(local_b8 & 0xfffffffffffffffe);
    }
    if ((local_88 & 1) != 0) {
      FUN_143733a60(CONCAT44(uStack_84,local_88) & 0xfffffffffffffffe);
    }
    if (-1 < (int)param_5) {
      *param_2 = 0;
      goto LAB_143759270;
    }
  }
  *param_2 = (int)param_5;
LAB_143759270:
  if ((local_a0 & 1) != 0) {
    FUN_143733a60(local_a0 & 0xfffffffffffffffe);
  }
  FUN_1437484d0(&local_38);
  if ((local_68 & 1) != 0) {
    FUN_143733a60(local_68 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 1437592c0 FUN_1437592c0 body=755 status=ok
// SIG undefined FUN_1437592c0(void)

/* WARNING: Removing unreachable block (ram,0x00014375934d) */

int * FUN_1437592c0(longlong param_1,int *param_2,longlong param_3,undefined8 param_4,
                   undefined8 param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  byte bVar10;
  undefined8 local_d8;
  longlong local_d0;
  ulonglong local_c8;
  undefined8 local_c0;
  longlong lStack_b8;
  ulonglong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  undefined8 local_90;
  undefined8 local_88;
  uint local_80;
  undefined4 uStack_7c;
  ulonglong local_78;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_48;
  longlong lStack_40;
  ulonglong local_38;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_143714de0();
  }
  puVar6 = (undefined8 *)FUN_143714490(uVar5,1);
  bVar10 = 0;
  if (puVar6 != (undefined8 *)0x0) {
    bVar10 = (byte)*puVar6;
  }
  uVar8 = 0;
  if ((bVar10 & 0xf) == 7) {
    uVar8 = uVar5;
  }
  iVar4 = FUN_143715270(param_1 + 0x18);
  local_a8 = -iVar4 + param_3;
  uVar9 = 0;
  local_68 = 0;
  local_60 = 0;
  local_a0 = uVar8;
  local_98 = uVar1 & 0xfffffffffffffffe;
  FUN_143748760(&local_68,&local_a8);
  uVar5 = FUN_1437488d0(&local_68,&local_48);
  FUN_143741f50(uVar5,&local_d8,*(undefined8 *)(param_1 + 0x18));
  local_b0 = 0;
  local_c0 = 0;
  lStack_b8 = 0;
  bVar10 = 0;
  uVar1 = local_b0;
  if (local_d0 != 0) {
    puVar6 = (undefined8 *)FUN_143714490(local_d0,1);
    bVar3 = bVar10;
    if (puVar6 != (undefined8 *)0x0) {
      bVar3 = (byte)*puVar6;
    }
    uVar1 = local_b0;
    if ((bVar3 & 0xf) == 8) {
      local_c0 = local_d8;
      lStack_b8 = local_d0;
      if ((local_c8 & 1) != 0) {
        FUN_1437329e0(local_c8 & 0xfffffffffffffffe);
      }
      uVar1 = local_c8;
      if ((local_b0 & 1) != 0) {
        FUN_143733a60(local_b0 & 0xfffffffffffffffe);
        uVar1 = local_c8;
      }
    }
  }
  local_b0 = uVar1;
  if ((local_c8 & 1) != 0) {
    FUN_143733a60(local_c8 & 0xfffffffffffffffe);
  }
  if ((local_38 & 1) != 0) {
    FUN_143733a60(local_38 & 0xfffffffffffffffe);
  }
  puVar6 = (undefined8 *)CONCAT44(param_5._4_4_,(int)param_5);
  local_90 = *puVar6;
  local_88 = puVar6[1];
  local_80 = *(uint *)(puVar6 + 2);
  uStack_7c = *(undefined4 *)((longlong)puVar6 + 0x14);
  local_78 = puVar6[3];
  if ((local_78 & 1) != 0) {
    FUN_1437329e0(local_78 & 0xfffffffffffffffe);
  }
  FUN_143742bd0(&local_c0,&param_5,&local_90);
  if (-1 < (int)param_5) {
    puVar6 = (undefined8 *)FUN_1437488d0(&local_68,&local_90);
    local_48 = 0;
    lStack_40 = 0;
    local_d0 = lStack_40;
    local_d8 = local_48;
    if (puVar6[1] != 0) {
      puVar7 = (undefined8 *)FUN_143714490(puVar6[1],1);
      if (puVar7 != (undefined8 *)0x0) {
        bVar10 = (byte)*puVar7;
      }
      local_d0 = lStack_40;
      local_d8 = local_48;
      if ((bVar10 & 0xf) == 7) {
        uVar5 = *puVar6;
        lVar2 = puVar6[1];
        if ((*(byte *)(puVar6 + 2) & 1) != 0) {
          FUN_1437329e0(puVar6[2] & 0xfffffffffffffffe);
        }
        uVar9 = puVar6[2];
        local_d0 = lVar2;
        local_d8 = uVar5;
      }
    }
    local_c8 = uVar9;
    if ((uVar9 & 1) != 0) {
      FUN_1437329e0(uVar9 & 0xfffffffffffffffe);
    }
    FUN_143742c20(&local_a8,&param_5,&local_d8);
    if ((local_c8 & 1) != 0) {
      FUN_143733a60(local_c8 & 0xfffffffffffffffe);
    }
    if ((uVar9 & 1) != 0) {
      FUN_143733a60(uVar9 & 0xfffffffffffffffe);
    }
    if ((local_80 & 1) != 0) {
      FUN_143733a60(CONCAT44(uStack_7c,local_80) & 0xfffffffffffffffe);
    }
    if (-1 < (int)param_5) {
      *param_2 = 0;
      goto LAB_143759566;
    }
  }
  *param_2 = (int)param_5;
LAB_143759566:
  if ((local_b0 & 1) != 0) {
    FUN_143733a60(local_b0 & 0xfffffffffffffffe);
  }
  FUN_1437484d0(&local_68);
  if ((local_98 & 1) != 0) {
    FUN_143733a60(local_98 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 1437595c0 FUN_1437595c0 body=760 status=ok
// SIG undefined FUN_1437595c0(void)

int * FUN_1437595c0(longlong param_1,int *param_2,longlong param_3,undefined8 param_4,
                   undefined1 param_5)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  byte bVar8;
  ulonglong uVar9;
  int local_res8 [2];
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  ulonglong local_98;
  undefined8 local_88;
  undefined1 local_80;
  undefined1 local_68 [16];
  ulonglong local_58;
  undefined8 local_50;
  longlong lStack_48;
  
  local_c0 = *(undefined8 *)(param_1 + 0x10);
  local_b0 = *(ulonglong *)(param_1 + 0x20);
  local_b8 = *(undefined8 *)(param_1 + 0x18);
  if ((local_b0 & 1) != 0) {
    FUN_1437329e0(local_b0 & 0xfffffffffffffffe);
  }
  local_88 = 0;
  local_80 = 0;
  FUN_143748760(&local_88,&local_c0);
  puVar3 = (undefined8 *)FUN_1437488d0(&local_88,local_68);
  lVar6 = *(longlong *)(param_1 + 0x28);
  puVar4 = (undefined8 *)FUN_1437429a0(param_1 + 0x10,local_res8);
  iVar2 = FUN_1437152f0(*puVar4);
  local_c8 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  bVar8 = 0;
  if (puVar3[1] != 0) {
    puVar4 = (undefined8 *)FUN_143714490(puVar3[1],1);
    bVar1 = bVar8;
    if (puVar4 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar4;
    }
    if ((bVar1 & 0xf) == 8) {
      local_d8 = *puVar3;
      uStack_d0 = puVar3[1];
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
        FUN_1437329e0(puVar3[2] & 0xfffffffffffffffe);
      }
      if ((local_c8 & 1) != 0) {
        FUN_143733a60(local_c8 & 0xfffffffffffffffe);
      }
      local_c8 = puVar3[2];
    }
  }
  FUN_143741d50(&local_d8,&local_a8,(param_3 - lVar6) / (longlong)iVar2 & 0xffffffff);
  if ((local_c8 & 1) != 0) {
    FUN_143733a60(local_c8 & 0xfffffffffffffffe);
  }
  local_50 = 0;
  lStack_48 = 0;
  lVar6 = lStack_48;
  uVar9 = 0;
  uVar5 = local_50;
  if (local_a0 != 0) {
    puVar3 = (undefined8 *)FUN_143714490(local_a0,1);
    bVar1 = bVar8;
    if (puVar3 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar3;
    }
    lVar6 = lStack_48;
    uVar5 = local_50;
    if (((bVar1 & 0xf) == 2) &&
       (lVar6 = local_a0, uVar9 = local_98, uVar5 = local_a8, (local_98 & 1) != 0)) {
      FUN_1437329e0(local_98 & 0xfffffffffffffffe);
      uVar9 = local_98;
    }
  }
  if ((local_98 & 1) != 0) {
    FUN_143733a60(local_98 & 0xfffffffffffffffe);
  }
  if ((local_58 & 1) != 0) {
    FUN_143733a60(local_58 & 0xfffffffffffffffe);
  }
  plVar7 = (longlong *)(uVar9 & 0xfffffffffffffffe);
  (**(code **)(*plVar7 + 0x30))(plVar7,local_res8,uVar5,lVar6,param_5);
  if (-1 < local_res8[0]) {
    puVar3 = (undefined8 *)FUN_1437488d0(&local_88,local_68);
    local_c8 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    if (puVar3[1] != 0) {
      puVar4 = (undefined8 *)FUN_143714490(puVar3[1],1);
      if (puVar4 != (undefined8 *)0x0) {
        bVar8 = (byte)*puVar4;
      }
      if ((bVar8 & 0xf) == 8) {
        local_d8 = *puVar3;
        uStack_d0 = puVar3[1];
        if ((*(byte *)(puVar3 + 2) & 1) != 0) {
          FUN_1437329e0(puVar3[2] & 0xfffffffffffffffe);
        }
        if ((local_c8 & 1) != 0) {
          FUN_143733a60(local_c8 & 0xfffffffffffffffe);
        }
        local_c8 = puVar3[2];
      }
    }
    uVar5 = FUN_143742a00(&local_d8,&local_50);
    FUN_143742bd0(&local_c0,local_res8,uVar5);
    if ((local_c8 & 1) != 0) {
      FUN_143733a60(local_c8 & 0xfffffffffffffffe);
    }
    if ((local_58 & 1) != 0) {
      FUN_143733a60(local_58 & 0xfffffffffffffffe);
    }
    if (-1 < local_res8[0]) {
      *param_2 = 0;
      goto LAB_143759870;
    }
  }
  *param_2 = local_res8[0];
LAB_143759870:
  if ((uVar9 & 1) != 0) {
    FUN_143733a60(plVar7);
  }
  FUN_1437484d0(&local_88);
  if ((local_b0 & 1) != 0) {
    FUN_143733a60(local_b0 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 1437598c0 FUN_1437598c0 body=674 status=ok
// SIG undefined FUN_1437598c0(void)

/* WARNING: Removing unreachable block (ram,0x00014375994d) */

int * FUN_1437598c0(longlong param_1,int *param_2,longlong param_3,undefined8 param_4,
                   undefined1 param_5)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  int local_res8 [2];
  undefined8 local_b8;
  longlong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  undefined8 local_98;
  ulonglong local_90;
  undefined8 local_88;
  longlong lStack_80;
  undefined8 local_68;
  undefined1 local_60;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  uVar9 = *(ulonglong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_143714de0();
  }
  puVar4 = (undefined8 *)FUN_143714490(uVar3,1);
  bVar1 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    bVar1 = (byte)*puVar4;
  }
  uVar6 = 0;
  if ((bVar1 & 0xf) == 7) {
    uVar6 = uVar3;
  }
  iVar2 = FUN_143715270(param_1 + 0x18);
  local_a0 = -iVar2 + param_3;
  local_68 = 0;
  local_60 = 0;
  local_98 = uVar6;
  local_90 = uVar9 & 0xfffffffffffffffe;
  FUN_143748760(&local_68,&local_a0);
  uVar3 = FUN_1437488d0(&local_68,local_48);
  FUN_143741f50(uVar3,&local_b8,*(undefined8 *)(param_1 + 0x18));
  local_88 = 0;
  lStack_80 = 0;
  lVar7 = lStack_80;
  uVar3 = local_88;
  uVar9 = 0;
  if (local_b0 != 0) {
    puVar4 = (undefined8 *)FUN_143714490(local_b0,1);
    bVar1 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar4;
    }
    lVar7 = lStack_80;
    uVar3 = local_88;
    if (((bVar1 & 0xf) == 2) &&
       (lVar7 = local_b0, uVar3 = local_b8, uVar9 = local_a8, (local_a8 & 1) != 0)) {
      FUN_1437329e0(local_a8 & 0xfffffffffffffffe);
      uVar9 = local_a8;
    }
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  if ((local_38 & 1) != 0) {
    FUN_143733a60(local_38 & 0xfffffffffffffffe);
  }
  plVar10 = (longlong *)(uVar9 & 0xfffffffffffffffe);
  (**(code **)(*plVar10 + 0x30))(plVar10,local_res8,uVar3,lVar7,param_5);
  if (-1 < local_res8[0]) {
    puVar4 = (undefined8 *)FUN_1437488d0(&local_68,local_48);
    uVar8 = 0;
    local_88 = 0;
    lStack_80 = 0;
    local_b0 = lStack_80;
    local_b8 = local_88;
    if (puVar4[1] != 0) {
      puVar5 = (undefined8 *)FUN_143714490(puVar4[1],1);
      bVar1 = 0;
      if (puVar5 != (undefined8 *)0x0) {
        bVar1 = (byte)*puVar5;
      }
      local_b0 = lStack_80;
      local_b8 = local_88;
      if ((bVar1 & 0xf) == 7) {
        uVar3 = *puVar4;
        lVar7 = puVar4[1];
        if ((*(byte *)(puVar4 + 2) & 1) != 0) {
          FUN_1437329e0(puVar4[2] & 0xfffffffffffffffe);
        }
        uVar8 = puVar4[2];
        local_b0 = lVar7;
        local_b8 = uVar3;
      }
    }
    local_a8 = uVar8;
    if ((uVar8 & 1) != 0) {
      FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
    }
    FUN_143742c20(&local_a0,local_res8,&local_b8);
    if ((local_a8 & 1) != 0) {
      FUN_143733a60(local_a8 & 0xfffffffffffffffe);
    }
    if ((uVar8 & 1) != 0) {
      FUN_143733a60(uVar8 & 0xfffffffffffffffe);
    }
    if ((local_38 & 1) != 0) {
      FUN_143733a60(local_38 & 0xfffffffffffffffe);
    }
    if (-1 < local_res8[0]) {
      *param_2 = 0;
      goto LAB_143759b15;
    }
  }
  *param_2 = local_res8[0];
LAB_143759b15:
  if ((uVar9 & 1) != 0) {
    FUN_143733a60(plVar10);
  }
  FUN_1437484d0(&local_68);
  if ((local_90 & 1) != 0) {
    FUN_143733a60(local_90 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 143759b70 FUN_143759b70 body=762 status=ok
// SIG undefined FUN_143759b70(void)

int * FUN_143759b70(longlong param_1,int *param_2,longlong param_3,undefined8 param_4,
                   undefined8 param_5)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  byte bVar8;
  ulonglong uVar9;
  int local_res8 [2];
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  ulonglong local_98;
  undefined8 local_88;
  undefined1 local_80;
  undefined1 local_68 [16];
  ulonglong local_58;
  undefined8 local_50;
  longlong lStack_48;
  
  local_c0 = *(undefined8 *)(param_1 + 0x10);
  local_b0 = *(ulonglong *)(param_1 + 0x20);
  local_b8 = *(undefined8 *)(param_1 + 0x18);
  if ((local_b0 & 1) != 0) {
    FUN_1437329e0(local_b0 & 0xfffffffffffffffe);
  }
  local_88 = 0;
  local_80 = 0;
  FUN_143748760(&local_88,&local_c0);
  puVar3 = (undefined8 *)FUN_1437488d0(&local_88,local_68);
  lVar6 = *(longlong *)(param_1 + 0x28);
  puVar4 = (undefined8 *)FUN_1437429a0(param_1 + 0x10,local_res8);
  iVar2 = FUN_1437152f0(*puVar4);
  local_c8 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  bVar8 = 0;
  if (puVar3[1] != 0) {
    puVar4 = (undefined8 *)FUN_143714490(puVar3[1],1);
    bVar1 = bVar8;
    if (puVar4 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar4;
    }
    if ((bVar1 & 0xf) == 8) {
      local_d8 = *puVar3;
      uStack_d0 = puVar3[1];
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
        FUN_1437329e0(puVar3[2] & 0xfffffffffffffffe);
      }
      if ((local_c8 & 1) != 0) {
        FUN_143733a60(local_c8 & 0xfffffffffffffffe);
      }
      local_c8 = puVar3[2];
    }
  }
  FUN_143741d50(&local_d8,&local_a8,(param_3 - lVar6) / (longlong)iVar2 & 0xffffffff);
  if ((local_c8 & 1) != 0) {
    FUN_143733a60(local_c8 & 0xfffffffffffffffe);
  }
  local_50 = 0;
  lStack_48 = 0;
  lVar6 = lStack_48;
  uVar9 = 0;
  uVar5 = local_50;
  if (local_a0 != 0) {
    puVar3 = (undefined8 *)FUN_143714490(local_a0,1);
    bVar1 = bVar8;
    if (puVar3 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar3;
    }
    lVar6 = lStack_48;
    uVar5 = local_50;
    if (((bVar1 & 0xf) == 5) &&
       (lVar6 = local_a0, uVar9 = local_98, uVar5 = local_a8, (local_98 & 1) != 0)) {
      FUN_1437329e0(local_98 & 0xfffffffffffffffe);
      uVar9 = local_98;
    }
  }
  if ((local_98 & 1) != 0) {
    FUN_143733a60(local_98 & 0xfffffffffffffffe);
  }
  if ((local_58 & 1) != 0) {
    FUN_143733a60(local_58 & 0xfffffffffffffffe);
  }
  plVar7 = (longlong *)(uVar9 & 0xfffffffffffffffe);
  (**(code **)(*plVar7 + 0x30))(plVar7,local_res8,uVar5,lVar6,param_5);
  if (-1 < local_res8[0]) {
    puVar3 = (undefined8 *)FUN_1437488d0(&local_88,local_68);
    local_c8 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    if (puVar3[1] != 0) {
      puVar4 = (undefined8 *)FUN_143714490(puVar3[1],1);
      if (puVar4 != (undefined8 *)0x0) {
        bVar8 = (byte)*puVar4;
      }
      if ((bVar8 & 0xf) == 8) {
        local_d8 = *puVar3;
        uStack_d0 = puVar3[1];
        if ((*(byte *)(puVar3 + 2) & 1) != 0) {
          FUN_1437329e0(puVar3[2] & 0xfffffffffffffffe);
        }
        if ((local_c8 & 1) != 0) {
          FUN_143733a60(local_c8 & 0xfffffffffffffffe);
        }
        local_c8 = puVar3[2];
      }
    }
    uVar5 = FUN_143742a00(&local_d8,&local_50);
    FUN_143742bd0(&local_c0,local_res8,uVar5);
    if ((local_c8 & 1) != 0) {
      FUN_143733a60(local_c8 & 0xfffffffffffffffe);
    }
    if ((local_58 & 1) != 0) {
      FUN_143733a60(local_58 & 0xfffffffffffffffe);
    }
    if (-1 < local_res8[0]) {
      *param_2 = 0;
      goto LAB_143759e22;
    }
  }
  *param_2 = local_res8[0];
LAB_143759e22:
  if ((uVar9 & 1) != 0) {
    FUN_143733a60(plVar7);
  }
  FUN_1437484d0(&local_88);
  if ((local_b0 & 1) != 0) {
    FUN_143733a60(local_b0 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 143759e70 FUN_143759e70 body=676 status=ok
// SIG undefined FUN_143759e70(void)

/* WARNING: Removing unreachable block (ram,0x000143759efd) */

int * FUN_143759e70(longlong param_1,int *param_2,longlong param_3,undefined8 param_4,
                   undefined8 param_5)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  int local_res8 [2];
  undefined8 local_b8;
  longlong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  undefined8 local_98;
  ulonglong local_90;
  undefined8 local_88;
  longlong lStack_80;
  undefined8 local_68;
  undefined1 local_60;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  uVar9 = *(ulonglong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_143714de0();
  }
  puVar4 = (undefined8 *)FUN_143714490(uVar3,1);
  bVar1 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    bVar1 = (byte)*puVar4;
  }
  uVar6 = 0;
  if ((bVar1 & 0xf) == 7) {
    uVar6 = uVar3;
  }
  iVar2 = FUN_143715270(param_1 + 0x18);
  local_a0 = -iVar2 + param_3;
  local_68 = 0;
  local_60 = 0;
  local_98 = uVar6;
  local_90 = uVar9 & 0xfffffffffffffffe;
  FUN_143748760(&local_68,&local_a0);
  uVar3 = FUN_1437488d0(&local_68,local_48);
  FUN_143741f50(uVar3,&local_b8,*(undefined8 *)(param_1 + 0x18));
  local_88 = 0;
  lStack_80 = 0;
  lVar7 = lStack_80;
  uVar3 = local_88;
  uVar9 = 0;
  if (local_b0 != 0) {
    puVar4 = (undefined8 *)FUN_143714490(local_b0,1);
    bVar1 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar4;
    }
    lVar7 = lStack_80;
    uVar3 = local_88;
    if (((bVar1 & 0xf) == 5) &&
       (lVar7 = local_b0, uVar3 = local_b8, uVar9 = local_a8, (local_a8 & 1) != 0)) {
      FUN_1437329e0(local_a8 & 0xfffffffffffffffe);
      uVar9 = local_a8;
    }
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  if ((local_38 & 1) != 0) {
    FUN_143733a60(local_38 & 0xfffffffffffffffe);
  }
  plVar10 = (longlong *)(uVar9 & 0xfffffffffffffffe);
  (**(code **)(*plVar10 + 0x30))(plVar10,local_res8,uVar3,lVar7,param_5);
  if (-1 < local_res8[0]) {
    puVar4 = (undefined8 *)FUN_1437488d0(&local_68,local_48);
    uVar8 = 0;
    local_88 = 0;
    lStack_80 = 0;
    local_b0 = lStack_80;
    local_b8 = local_88;
    if (puVar4[1] != 0) {
      puVar5 = (undefined8 *)FUN_143714490(puVar4[1],1);
      bVar1 = 0;
      if (puVar5 != (undefined8 *)0x0) {
        bVar1 = (byte)*puVar5;
      }
      local_b0 = lStack_80;
      local_b8 = local_88;
      if ((bVar1 & 0xf) == 7) {
        uVar3 = *puVar4;
        lVar7 = puVar4[1];
        if ((*(byte *)(puVar4 + 2) & 1) != 0) {
          FUN_1437329e0(puVar4[2] & 0xfffffffffffffffe);
        }
        uVar8 = puVar4[2];
        local_b0 = lVar7;
        local_b8 = uVar3;
      }
    }
    local_a8 = uVar8;
    if ((uVar8 & 1) != 0) {
      FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
    }
    FUN_143742c20(&local_a0,local_res8,&local_b8);
    if ((local_a8 & 1) != 0) {
      FUN_143733a60(local_a8 & 0xfffffffffffffffe);
    }
    if ((uVar8 & 1) != 0) {
      FUN_143733a60(uVar8 & 0xfffffffffffffffe);
    }
    if ((local_38 & 1) != 0) {
      FUN_143733a60(local_38 & 0xfffffffffffffffe);
    }
    if (-1 < local_res8[0]) {
      *param_2 = 0;
      goto LAB_14375a0c7;
    }
  }
  *param_2 = local_res8[0];
LAB_14375a0c7:
  if ((uVar9 & 1) != 0) {
    FUN_143733a60(plVar10);
  }
  FUN_1437484d0(&local_68);
  if ((local_90 & 1) != 0) {
    FUN_143733a60(local_90 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 14375a120 FUN_14375a120 body=773 status=ok
// SIG undefined FUN_14375a120(void)

int * FUN_14375a120(longlong param_1,int *param_2,longlong param_3,undefined8 param_4,
                   undefined8 param_5)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  byte bVar8;
  ulonglong uVar9;
  undefined1 local_res8 [8];
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined8 local_a0;
  longlong local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined1 local_68 [16];
  ulonglong local_58;
  undefined8 local_50;
  longlong lStack_48;
  
  local_b8 = *(undefined8 *)(param_1 + 0x10);
  local_a8 = *(ulonglong *)(param_1 + 0x20);
  local_b0 = *(undefined8 *)(param_1 + 0x18);
  if ((local_a8 & 1) != 0) {
    FUN_1437329e0(local_a8 & 0xfffffffffffffffe);
  }
  local_88 = 0;
  local_80 = 0;
  FUN_143748760(&local_88,&local_b8);
  puVar3 = (undefined8 *)FUN_1437488d0(&local_88,local_68);
  lVar6 = *(longlong *)(param_1 + 0x28);
  puVar4 = (undefined8 *)FUN_1437429a0(param_1 + 0x10,local_res8);
  iVar2 = FUN_1437152f0(*puVar4);
  local_c8 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  bVar8 = 0;
  if (puVar3[1] != 0) {
    puVar4 = (undefined8 *)FUN_143714490(puVar3[1],1);
    bVar1 = bVar8;
    if (puVar4 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar4;
    }
    if ((bVar1 & 0xf) == 8) {
      local_d8 = *puVar3;
      uStack_d0 = puVar3[1];
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
        FUN_1437329e0(puVar3[2] & 0xfffffffffffffffe);
      }
      if ((local_c8 & 1) != 0) {
        FUN_143733a60(local_c8 & 0xfffffffffffffffe);
      }
      local_c8 = puVar3[2];
    }
  }
  FUN_143741d50(&local_d8,&local_a0,(param_3 - lVar6) / (longlong)iVar2 & 0xffffffff);
  if ((local_c8 & 1) != 0) {
    FUN_143733a60(local_c8 & 0xfffffffffffffffe);
  }
  local_50 = 0;
  lStack_48 = 0;
  lVar6 = lStack_48;
  uVar9 = 0;
  uVar5 = local_50;
  if (local_98 != 0) {
    puVar3 = (undefined8 *)FUN_143714490(local_98,1);
    bVar1 = bVar8;
    if (puVar3 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar3;
    }
    lVar6 = lStack_48;
    uVar5 = local_50;
    if (((bVar1 & 0xf) == 4) &&
       (lVar6 = local_98, uVar9 = local_90, uVar5 = local_a0, (local_90 & 1) != 0)) {
      FUN_1437329e0(local_90 & 0xfffffffffffffffe);
      uVar9 = local_90;
    }
  }
  if ((local_90 & 1) != 0) {
    FUN_143733a60(local_90 & 0xfffffffffffffffe);
  }
  if ((local_58 & 1) != 0) {
    FUN_143733a60(local_58 & 0xfffffffffffffffe);
  }
  plVar7 = (longlong *)(uVar9 & 0xfffffffffffffffe);
  local_d8 = *(undefined8 *)CONCAT44(param_5._4_4_,(int)param_5);
  uStack_d0 = ((undefined8 *)CONCAT44(param_5._4_4_,(int)param_5))[1];
  (**(code **)(*plVar7 + 0x30))(plVar7,&param_5,uVar5,lVar6,&local_d8);
  if (-1 < (int)param_5) {
    puVar3 = (undefined8 *)FUN_1437488d0(&local_88,local_68);
    local_c8 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    if (puVar3[1] != 0) {
      puVar4 = (undefined8 *)FUN_143714490(puVar3[1],1);
      if (puVar4 != (undefined8 *)0x0) {
        bVar8 = (byte)*puVar4;
      }
      if ((bVar8 & 0xf) == 8) {
        local_d8 = *puVar3;
        uStack_d0 = puVar3[1];
        if ((*(byte *)(puVar3 + 2) & 1) != 0) {
          FUN_1437329e0(puVar3[2] & 0xfffffffffffffffe);
        }
        if ((local_c8 & 1) != 0) {
          FUN_143733a60(local_c8 & 0xfffffffffffffffe);
        }
        local_c8 = puVar3[2];
      }
    }
    uVar5 = FUN_143742a00(&local_d8,&local_50);
    FUN_143742bd0(&local_b8,&param_5,uVar5);
    if ((local_c8 & 1) != 0) {
      FUN_143733a60(local_c8 & 0xfffffffffffffffe);
    }
    if ((local_58 & 1) != 0) {
      FUN_143733a60(local_58 & 0xfffffffffffffffe);
    }
    if (-1 < (int)param_5) {
      *param_2 = 0;
      goto LAB_14375a3dd;
    }
  }
  *param_2 = (int)param_5;
LAB_14375a3dd:
  if ((uVar9 & 1) != 0) {
    FUN_143733a60(plVar7);
  }
  FUN_1437484d0(&local_88);
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 14375a430 FUN_14375a430 body=685 status=ok
// SIG undefined FUN_14375a430(void)

/* WARNING: Removing unreachable block (ram,0x00014375a4bd) */

int * FUN_14375a430(longlong param_1,int *param_2,longlong param_3,undefined8 param_4,
                   undefined8 param_5)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined8 local_b8;
  longlong lStack_b0;
  ulonglong local_a8;
  longlong local_98;
  undefined8 local_90;
  ulonglong local_88;
  undefined8 local_80;
  longlong lStack_78;
  undefined8 local_68;
  undefined1 local_60;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  uVar9 = *(ulonglong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_143714de0();
  }
  puVar4 = (undefined8 *)FUN_143714490(uVar3,1);
  bVar1 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    bVar1 = (byte)*puVar4;
  }
  uVar6 = 0;
  if ((bVar1 & 0xf) == 7) {
    uVar6 = uVar3;
  }
  iVar2 = FUN_143715270(param_1 + 0x18);
  local_98 = -iVar2 + param_3;
  local_68 = 0;
  local_60 = 0;
  local_90 = uVar6;
  local_88 = uVar9 & 0xfffffffffffffffe;
  FUN_143748760(&local_68,&local_98);
  uVar3 = FUN_1437488d0(&local_68,local_48);
  FUN_143741f50(uVar3,&local_b8,*(undefined8 *)(param_1 + 0x18));
  local_80 = 0;
  lStack_78 = 0;
  lVar7 = lStack_78;
  uVar3 = local_80;
  uVar9 = 0;
  if (lStack_b0 != 0) {
    puVar4 = (undefined8 *)FUN_143714490(lStack_b0,1);
    bVar1 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar4;
    }
    lVar7 = lStack_78;
    uVar3 = local_80;
    if (((bVar1 & 0xf) == 4) &&
       (lVar7 = lStack_b0, uVar3 = local_b8, uVar9 = local_a8, (local_a8 & 1) != 0)) {
      FUN_1437329e0(local_a8 & 0xfffffffffffffffe);
      uVar9 = local_a8;
    }
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  if ((local_38 & 1) != 0) {
    FUN_143733a60(local_38 & 0xfffffffffffffffe);
  }
  plVar10 = (longlong *)(uVar9 & 0xfffffffffffffffe);
  local_b8 = *(undefined8 *)CONCAT44(param_5._4_4_,(int)param_5);
  lStack_b0 = ((undefined8 *)CONCAT44(param_5._4_4_,(int)param_5))[1];
  (**(code **)(*plVar10 + 0x30))(plVar10,&param_5,uVar3,lVar7,&local_b8);
  if (-1 < (int)param_5) {
    puVar4 = (undefined8 *)FUN_1437488d0(&local_68,local_48);
    uVar8 = 0;
    local_80 = 0;
    lStack_78 = 0;
    lVar7 = lStack_78;
    uVar3 = local_80;
    if (puVar4[1] != 0) {
      puVar5 = (undefined8 *)FUN_143714490(puVar4[1],1);
      bVar1 = 0;
      if (puVar5 != (undefined8 *)0x0) {
        bVar1 = (byte)*puVar5;
      }
      lVar7 = lStack_78;
      uVar3 = local_80;
      if ((bVar1 & 0xf) == 7) {
        uVar3 = *puVar4;
        lVar7 = puVar4[1];
        if ((*(byte *)(puVar4 + 2) & 1) != 0) {
          FUN_1437329e0(puVar4[2] & 0xfffffffffffffffe);
        }
        uVar8 = puVar4[2];
      }
    }
    local_b8 = uVar3;
    lStack_b0 = lVar7;
    local_a8 = uVar8;
    if ((uVar8 & 1) != 0) {
      FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
    }
    FUN_143742c20(&local_98,&param_5,&local_b8);
    if ((local_a8 & 1) != 0) {
      FUN_143733a60(local_a8 & 0xfffffffffffffffe);
    }
    if ((uVar8 & 1) != 0) {
      FUN_143733a60(uVar8 & 0xfffffffffffffffe);
    }
    if ((local_38 & 1) != 0) {
      FUN_143733a60(local_38 & 0xfffffffffffffffe);
    }
    if (-1 < (int)param_5) {
      *param_2 = 0;
      goto LAB_14375a690;
    }
  }
  *param_2 = (int)param_5;
LAB_14375a690:
  if ((uVar9 & 1) != 0) {
    FUN_143733a60(plVar10);
  }
  FUN_1437484d0(&local_68);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 14375a6e0 FUN_14375a6e0 body=761 status=ok
// SIG undefined FUN_14375a6e0(void)

int * FUN_14375a6e0(longlong param_1,int *param_2,longlong param_3,undefined8 param_4,
                   undefined8 param_5)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  byte bVar8;
  ulonglong uVar9;
  int local_res8 [2];
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  ulonglong local_98;
  undefined8 local_88;
  undefined1 local_80;
  undefined1 local_68 [16];
  ulonglong local_58;
  undefined8 local_50;
  longlong lStack_48;
  
  local_c0 = *(undefined8 *)(param_1 + 0x10);
  local_b0 = *(ulonglong *)(param_1 + 0x20);
  local_b8 = *(undefined8 *)(param_1 + 0x18);
  if ((local_b0 & 1) != 0) {
    FUN_1437329e0(local_b0 & 0xfffffffffffffffe);
  }
  local_88 = 0;
  local_80 = 0;
  FUN_143748760(&local_88,&local_c0);
  puVar3 = (undefined8 *)FUN_1437488d0(&local_88,local_68);
  lVar6 = *(longlong *)(param_1 + 0x28);
  puVar4 = (undefined8 *)FUN_1437429a0(param_1 + 0x10,local_res8);
  iVar2 = FUN_1437152f0(*puVar4);
  local_c8 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  bVar8 = 0;
  if (puVar3[1] != 0) {
    puVar4 = (undefined8 *)FUN_143714490(puVar3[1],1);
    bVar1 = bVar8;
    if (puVar4 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar4;
    }
    if ((bVar1 & 0xf) == 8) {
      local_d8 = *puVar3;
      uStack_d0 = puVar3[1];
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
        FUN_1437329e0(puVar3[2] & 0xfffffffffffffffe);
      }
      if ((local_c8 & 1) != 0) {
        FUN_143733a60(local_c8 & 0xfffffffffffffffe);
      }
      local_c8 = puVar3[2];
    }
  }
  FUN_143741d50(&local_d8,&local_a8,(param_3 - lVar6) / (longlong)iVar2 & 0xffffffff);
  if ((local_c8 & 1) != 0) {
    FUN_143733a60(local_c8 & 0xfffffffffffffffe);
  }
  local_50 = 0;
  lStack_48 = 0;
  lVar6 = lStack_48;
  uVar9 = 0;
  uVar5 = local_50;
  if (local_a0 != 0) {
    puVar3 = (undefined8 *)FUN_143714490(local_a0,1);
    bVar1 = bVar8;
    if (puVar3 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar3;
    }
    lVar6 = lStack_48;
    uVar5 = local_50;
    if (((bVar1 & 0xf) == 6) &&
       (lVar6 = local_a0, uVar9 = local_98, uVar5 = local_a8, (local_98 & 1) != 0)) {
      FUN_1437329e0(local_98 & 0xfffffffffffffffe);
      uVar9 = local_98;
    }
  }
  if ((local_98 & 1) != 0) {
    FUN_143733a60(local_98 & 0xfffffffffffffffe);
  }
  if ((local_58 & 1) != 0) {
    FUN_143733a60(local_58 & 0xfffffffffffffffe);
  }
  plVar7 = (longlong *)(uVar9 & 0xfffffffffffffffe);
  (**(code **)(*plVar7 + 0x48))(plVar7,local_res8,uVar5,lVar6,param_5);
  if (-1 < local_res8[0]) {
    puVar3 = (undefined8 *)FUN_1437488d0(&local_88,local_68);
    local_c8 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    if (puVar3[1] != 0) {
      puVar4 = (undefined8 *)FUN_143714490(puVar3[1],1);
      if (puVar4 != (undefined8 *)0x0) {
        bVar8 = (byte)*puVar4;
      }
      if ((bVar8 & 0xf) == 8) {
        local_d8 = *puVar3;
        uStack_d0 = puVar3[1];
        if ((*(byte *)(puVar3 + 2) & 1) != 0) {
          FUN_1437329e0(puVar3[2] & 0xfffffffffffffffe);
        }
        if ((local_c8 & 1) != 0) {
          FUN_143733a60(local_c8 & 0xfffffffffffffffe);
        }
        local_c8 = puVar3[2];
      }
    }
    uVar5 = FUN_143742a00(&local_d8,&local_50);
    FUN_143742bd0(&local_c0,local_res8,uVar5);
    if ((local_c8 & 1) != 0) {
      FUN_143733a60(local_c8 & 0xfffffffffffffffe);
    }
    if ((local_58 & 1) != 0) {
      FUN_143733a60(local_58 & 0xfffffffffffffffe);
    }
    if (-1 < local_res8[0]) {
      *param_2 = 0;
      goto LAB_14375a991;
    }
  }
  *param_2 = local_res8[0];
LAB_14375a991:
  if ((uVar9 & 1) != 0) {
    FUN_143733a60(plVar7);
  }
  FUN_1437484d0(&local_88);
  if ((local_b0 & 1) != 0) {
    FUN_143733a60(local_b0 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 14375a9e0 FUN_14375a9e0 body=675 status=ok
// SIG undefined FUN_14375a9e0(void)

/* WARNING: Removing unreachable block (ram,0x00014375aa6d) */

int * FUN_14375a9e0(longlong param_1,int *param_2,longlong param_3,undefined8 param_4,
                   undefined8 param_5)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  int local_res8 [2];
  undefined8 local_b8;
  longlong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  undefined8 local_98;
  ulonglong local_90;
  undefined8 local_88;
  longlong lStack_80;
  undefined8 local_68;
  undefined1 local_60;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  uVar9 = *(ulonglong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_143714de0();
  }
  puVar4 = (undefined8 *)FUN_143714490(uVar3,1);
  bVar1 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    bVar1 = (byte)*puVar4;
  }
  uVar6 = 0;
  if ((bVar1 & 0xf) == 7) {
    uVar6 = uVar3;
  }
  iVar2 = FUN_143715270(param_1 + 0x18);
  local_a0 = -iVar2 + param_3;
  local_68 = 0;
  local_60 = 0;
  local_98 = uVar6;
  local_90 = uVar9 & 0xfffffffffffffffe;
  FUN_143748760(&local_68,&local_a0);
  uVar3 = FUN_1437488d0(&local_68,local_48);
  FUN_143741f50(uVar3,&local_b8,*(undefined8 *)(param_1 + 0x18));
  local_88 = 0;
  lStack_80 = 0;
  lVar7 = lStack_80;
  uVar3 = local_88;
  uVar9 = 0;
  if (local_b0 != 0) {
    puVar4 = (undefined8 *)FUN_143714490(local_b0,1);
    bVar1 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar4;
    }
    lVar7 = lStack_80;
    uVar3 = local_88;
    if (((bVar1 & 0xf) == 6) &&
       (lVar7 = local_b0, uVar3 = local_b8, uVar9 = local_a8, (local_a8 & 1) != 0)) {
      FUN_1437329e0(local_a8 & 0xfffffffffffffffe);
      uVar9 = local_a8;
    }
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  if ((local_38 & 1) != 0) {
    FUN_143733a60(local_38 & 0xfffffffffffffffe);
  }
  plVar10 = (longlong *)(uVar9 & 0xfffffffffffffffe);
  (**(code **)(*plVar10 + 0x48))(plVar10,local_res8,uVar3,lVar7,param_5);
  if (-1 < local_res8[0]) {
    puVar4 = (undefined8 *)FUN_1437488d0(&local_68,local_48);
    uVar8 = 0;
    local_88 = 0;
    lStack_80 = 0;
    local_b0 = lStack_80;
    local_b8 = local_88;
    if (puVar4[1] != 0) {
      puVar5 = (undefined8 *)FUN_143714490(puVar4[1],1);
      bVar1 = 0;
      if (puVar5 != (undefined8 *)0x0) {
        bVar1 = (byte)*puVar5;
      }
      local_b0 = lStack_80;
      local_b8 = local_88;
      if ((bVar1 & 0xf) == 7) {
        uVar3 = *puVar4;
        lVar7 = puVar4[1];
        if ((*(byte *)(puVar4 + 2) & 1) != 0) {
          FUN_1437329e0(puVar4[2] & 0xfffffffffffffffe);
        }
        uVar8 = puVar4[2];
        local_b0 = lVar7;
        local_b8 = uVar3;
      }
    }
    local_a8 = uVar8;
    if ((uVar8 & 1) != 0) {
      FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
    }
    FUN_143742c20(&local_a0,local_res8,&local_b8);
    if ((local_a8 & 1) != 0) {
      FUN_143733a60(local_a8 & 0xfffffffffffffffe);
    }
    if ((uVar8 & 1) != 0) {
      FUN_143733a60(uVar8 & 0xfffffffffffffffe);
    }
    if ((local_38 & 1) != 0) {
      FUN_143733a60(local_38 & 0xfffffffffffffffe);
    }
    if (-1 < local_res8[0]) {
      *param_2 = 0;
      goto LAB_14375ac36;
    }
  }
  *param_2 = local_res8[0];
LAB_14375ac36:
  if ((uVar9 & 1) != 0) {
    FUN_143733a60(plVar10);
  }
  FUN_1437484d0(&local_68);
  if ((local_90 & 1) != 0) {
    FUN_143733a60(local_90 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 14375ac90 FUN_14375ac90 body=772 status=ok
// SIG undefined FUN_14375ac90(void)

int * FUN_14375ac90(longlong param_1,int *param_2,longlong param_3,undefined8 param_4,
                   undefined8 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  byte bVar8;
  int local_res8 [2];
  undefined8 local_c8;
  longlong lStack_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  longlong lStack_a8;
  ulonglong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  ulonglong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulonglong local_70;
  undefined8 local_58;
  undefined1 local_50;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_98 = *(undefined8 *)(param_1 + 0x10);
  local_88 = *(ulonglong *)(param_1 + 0x20);
  local_90 = *(undefined8 *)(param_1 + 0x18);
  if ((local_88 & 1) != 0) {
    FUN_1437329e0(local_88 & 0xfffffffffffffffe);
  }
  local_58 = 0;
  local_50 = 0;
  FUN_143748760(&local_58,&local_98);
  puVar5 = (undefined8 *)FUN_1437488d0(&local_58,local_38);
  lVar1 = *(longlong *)(param_1 + 0x28);
  puVar6 = (undefined8 *)FUN_1437429a0(param_1 + 0x10,local_res8);
  iVar4 = FUN_1437152f0(*puVar6);
  local_70 = 0;
  local_80 = 0;
  uStack_78 = 0;
  bVar8 = 0;
  if (puVar5[1] != 0) {
    puVar6 = (undefined8 *)FUN_143714490(puVar5[1],1);
    bVar3 = bVar8;
    if (puVar6 != (undefined8 *)0x0) {
      bVar3 = (byte)*puVar6;
    }
    if ((bVar3 & 0xf) == 8) {
      local_80 = *puVar5;
      uStack_78 = puVar5[1];
      if ((*(byte *)(puVar5 + 2) & 1) != 0) {
        FUN_1437329e0(puVar5[2] & 0xfffffffffffffffe);
      }
      if ((local_70 & 1) != 0) {
        FUN_143733a60(local_70 & 0xfffffffffffffffe);
      }
      local_70 = puVar5[2];
    }
  }
  FUN_143741d50(&local_80,&local_c8,(param_3 - lVar1) / (longlong)iVar4 & 0xffffffff);
  if ((local_70 & 1) != 0) {
    FUN_143733a60(local_70 & 0xfffffffffffffffe);
  }
  local_a0 = 0;
  local_b0 = 0;
  lStack_a8 = 0;
  uVar2 = local_a0;
  if (lStack_c0 != 0) {
    puVar5 = (undefined8 *)FUN_143714490(lStack_c0,1);
    bVar3 = bVar8;
    if (puVar5 != (undefined8 *)0x0) {
      bVar3 = (byte)*puVar5;
    }
    uVar2 = local_a0;
    if ((bVar3 & 0xf) == 7) {
      local_b0 = local_c8;
      lStack_a8 = lStack_c0;
      if ((local_b8 & 1) != 0) {
        FUN_1437329e0(local_b8 & 0xfffffffffffffffe);
      }
      uVar2 = local_b8;
      if ((local_a0 & 1) != 0) {
        FUN_143733a60(local_a0 & 0xfffffffffffffffe);
        uVar2 = local_b8;
      }
    }
  }
  local_a0 = uVar2;
  if ((local_b8 & 1) != 0) {
    FUN_143733a60(local_b8 & 0xfffffffffffffffe);
  }
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  FUN_143742c20(&local_b0,local_res8,param_5);
  if (-1 < local_res8[0]) {
    puVar5 = (undefined8 *)FUN_1437488d0(&local_58,local_38);
    local_b8 = 0;
    local_c8 = 0;
    lStack_c0 = 0;
    if (puVar5[1] != 0) {
      puVar6 = (undefined8 *)FUN_143714490(puVar5[1],1);
      if (puVar6 != (undefined8 *)0x0) {
        bVar8 = (byte)*puVar6;
      }
      if ((bVar8 & 0xf) == 8) {
        local_c8 = *puVar5;
        lStack_c0 = puVar5[1];
        if ((*(byte *)(puVar5 + 2) & 1) != 0) {
          FUN_1437329e0(puVar5[2] & 0xfffffffffffffffe);
        }
        if ((local_b8 & 1) != 0) {
          FUN_143733a60(local_b8 & 0xfffffffffffffffe);
        }
        local_b8 = puVar5[2];
      }
    }
    uVar7 = FUN_143742a00(&local_c8,&local_80);
    FUN_143742bd0(&local_98,local_res8,uVar7);
    if ((local_b8 & 1) != 0) {
      FUN_143733a60(local_b8 & 0xfffffffffffffffe);
    }
    if ((local_28 & 1) != 0) {
      FUN_143733a60(local_28 & 0xfffffffffffffffe);
    }
    if (-1 < local_res8[0]) {
      *param_2 = 0;
      goto LAB_14375af4b;
    }
  }
  *param_2 = local_res8[0];
LAB_14375af4b:
  if ((local_a0 & 1) != 0) {
    FUN_143733a60(local_a0 & 0xfffffffffffffffe);
  }
  FUN_1437484d0(&local_58);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 14375afa0 FUN_14375afa0 body=698 status=ok
// SIG undefined FUN_14375afa0(void)

/* WARNING: Removing unreachable block (ram,0x00014375b02d) */

int * FUN_14375afa0(longlong param_1,int *param_2,longlong param_3,undefined8 param_4,
                   undefined8 param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  byte bVar10;
  int local_res8 [2];
  undefined8 local_c8;
  longlong local_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  longlong lStack_a8;
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_90;
  ulonglong local_88;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_58;
  longlong lStack_50;
  ulonglong local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_143714de0();
  }
  puVar6 = (undefined8 *)FUN_143714490(uVar5,1);
  bVar10 = 0;
  if (puVar6 != (undefined8 *)0x0) {
    bVar10 = (byte)*puVar6;
  }
  uVar8 = 0;
  if ((bVar10 & 0xf) == 7) {
    uVar8 = uVar5;
  }
  iVar4 = FUN_143715270(param_1 + 0x18);
  local_98 = -iVar4 + param_3;
  uVar9 = 0;
  local_78 = 0;
  local_70 = 0;
  local_90 = uVar8;
  local_88 = uVar1 & 0xfffffffffffffffe;
  FUN_143748760(&local_78,&local_98);
  uVar5 = FUN_1437488d0(&local_78,&local_58);
  FUN_143741f50(uVar5,&local_c8,*(undefined8 *)(param_1 + 0x18));
  local_a0 = 0;
  local_b0 = 0;
  lStack_a8 = 0;
  bVar10 = 0;
  uVar1 = local_a0;
  if (local_c0 != 0) {
    puVar6 = (undefined8 *)FUN_143714490(local_c0,1);
    bVar3 = bVar10;
    if (puVar6 != (undefined8 *)0x0) {
      bVar3 = (byte)*puVar6;
    }
    uVar1 = local_a0;
    if ((bVar3 & 0xf) == 7) {
      local_b0 = local_c8;
      lStack_a8 = local_c0;
      if ((local_b8 & 1) != 0) {
        FUN_1437329e0(local_b8 & 0xfffffffffffffffe);
      }
      uVar1 = local_b8;
      if ((local_a0 & 1) != 0) {
        FUN_143733a60(local_a0 & 0xfffffffffffffffe);
        uVar1 = local_b8;
      }
    }
  }
  local_a0 = uVar1;
  if ((local_b8 & 1) != 0) {
    FUN_143733a60(local_b8 & 0xfffffffffffffffe);
  }
  if ((local_48 & 1) != 0) {
    FUN_143733a60(local_48 & 0xfffffffffffffffe);
  }
  FUN_143742c20(&local_b0,local_res8,param_5);
  if (-1 < local_res8[0]) {
    puVar6 = (undefined8 *)FUN_1437488d0(&local_78,local_40);
    local_58 = 0;
    lStack_50 = 0;
    local_c0 = lStack_50;
    local_c8 = local_58;
    if (puVar6[1] != 0) {
      puVar7 = (undefined8 *)FUN_143714490(puVar6[1],1);
      if (puVar7 != (undefined8 *)0x0) {
        bVar10 = (byte)*puVar7;
      }
      local_c0 = lStack_50;
      local_c8 = local_58;
      if ((bVar10 & 0xf) == 7) {
        uVar5 = *puVar6;
        lVar2 = puVar6[1];
        if ((*(byte *)(puVar6 + 2) & 1) != 0) {
          FUN_1437329e0(puVar6[2] & 0xfffffffffffffffe);
        }
        uVar9 = puVar6[2];
        local_c0 = lVar2;
        local_c8 = uVar5;
      }
    }
    local_b8 = uVar9;
    if ((uVar9 & 1) != 0) {
      FUN_1437329e0(uVar9 & 0xfffffffffffffffe);
    }
    FUN_143742c20(&local_98,local_res8,&local_c8);
    if ((local_b8 & 1) != 0) {
      FUN_143733a60(local_b8 & 0xfffffffffffffffe);
    }
    if ((uVar9 & 1) != 0) {
      FUN_143733a60(uVar9 & 0xfffffffffffffffe);
    }
    if ((local_30 & 1) != 0) {
      FUN_143733a60(local_30 & 0xfffffffffffffffe);
    }
    if (-1 < local_res8[0]) {
      *param_2 = 0;
      goto LAB_14375b20d;
    }
  }
  *param_2 = local_res8[0];
LAB_14375b20d:
  if ((local_a0 & 1) != 0) {
    FUN_143733a60(local_a0 & 0xfffffffffffffffe);
  }
  FUN_1437484d0(&local_78);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 14375b260 FUN_14375b260 body=761 status=ok
// SIG undefined FUN_14375b260(void)

int * FUN_14375b260(longlong param_1,int *param_2,longlong param_3,undefined8 param_4,
                   undefined8 param_5)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  byte bVar8;
  ulonglong uVar9;
  int local_res8 [2];
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  ulonglong local_98;
  undefined8 local_88;
  undefined1 local_80;
  undefined1 local_68 [16];
  ulonglong local_58;
  undefined8 local_50;
  longlong lStack_48;
  
  local_c0 = *(undefined8 *)(param_1 + 0x10);
  local_b0 = *(ulonglong *)(param_1 + 0x20);
  local_b8 = *(undefined8 *)(param_1 + 0x18);
  if ((local_b0 & 1) != 0) {
    FUN_1437329e0(local_b0 & 0xfffffffffffffffe);
  }
  local_88 = 0;
  local_80 = 0;
  FUN_143748760(&local_88,&local_c0);
  puVar3 = (undefined8 *)FUN_1437488d0(&local_88,local_68);
  lVar6 = *(longlong *)(param_1 + 0x28);
  puVar4 = (undefined8 *)FUN_1437429a0(param_1 + 0x10,local_res8);
  iVar2 = FUN_1437152f0(*puVar4);
  local_c8 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  bVar8 = 0;
  if (puVar3[1] != 0) {
    puVar4 = (undefined8 *)FUN_143714490(puVar3[1],1);
    bVar1 = bVar8;
    if (puVar4 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar4;
    }
    if ((bVar1 & 0xf) == 8) {
      local_d8 = *puVar3;
      uStack_d0 = puVar3[1];
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
        FUN_1437329e0(puVar3[2] & 0xfffffffffffffffe);
      }
      if ((local_c8 & 1) != 0) {
        FUN_143733a60(local_c8 & 0xfffffffffffffffe);
      }
      local_c8 = puVar3[2];
    }
  }
  FUN_143741d50(&local_d8,&local_a8,(param_3 - lVar6) / (longlong)iVar2 & 0xffffffff);
  if ((local_c8 & 1) != 0) {
    FUN_143733a60(local_c8 & 0xfffffffffffffffe);
  }
  local_50 = 0;
  lStack_48 = 0;
  lVar6 = lStack_48;
  uVar9 = 0;
  uVar5 = local_50;
  if (local_a0 != 0) {
    puVar3 = (undefined8 *)FUN_143714490(local_a0,1);
    bVar1 = bVar8;
    if (puVar3 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar3;
    }
    lVar6 = lStack_48;
    uVar5 = local_50;
    if (((bVar1 & 0xf) == 3) &&
       (lVar6 = local_a0, uVar9 = local_98, uVar5 = local_a8, (local_98 & 1) != 0)) {
      FUN_1437329e0(local_98 & 0xfffffffffffffffe);
      uVar9 = local_98;
    }
  }
  if ((local_98 & 1) != 0) {
    FUN_143733a60(local_98 & 0xfffffffffffffffe);
  }
  if ((local_58 & 1) != 0) {
    FUN_143733a60(local_58 & 0xfffffffffffffffe);
  }
  plVar7 = (longlong *)(uVar9 & 0xfffffffffffffffe);
  (**(code **)(*plVar7 + 0x30))(plVar7,local_res8,uVar5,lVar6,param_5);
  if (-1 < local_res8[0]) {
    puVar3 = (undefined8 *)FUN_1437488d0(&local_88,local_68);
    local_c8 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    if (puVar3[1] != 0) {
      puVar4 = (undefined8 *)FUN_143714490(puVar3[1],1);
      if (puVar4 != (undefined8 *)0x0) {
        bVar8 = (byte)*puVar4;
      }
      if ((bVar8 & 0xf) == 8) {
        local_d8 = *puVar3;
        uStack_d0 = puVar3[1];
        if ((*(byte *)(puVar3 + 2) & 1) != 0) {
          FUN_1437329e0(puVar3[2] & 0xfffffffffffffffe);
        }
        if ((local_c8 & 1) != 0) {
          FUN_143733a60(local_c8 & 0xfffffffffffffffe);
        }
        local_c8 = puVar3[2];
      }
    }
    uVar5 = FUN_143742a00(&local_d8,&local_50);
    FUN_143742bd0(&local_c0,local_res8,uVar5);
    if ((local_c8 & 1) != 0) {
      FUN_143733a60(local_c8 & 0xfffffffffffffffe);
    }
    if ((local_58 & 1) != 0) {
      FUN_143733a60(local_58 & 0xfffffffffffffffe);
    }
    if (-1 < local_res8[0]) {
      *param_2 = 0;
      goto LAB_14375b511;
    }
  }
  *param_2 = local_res8[0];
LAB_14375b511:
  if ((uVar9 & 1) != 0) {
    FUN_143733a60(plVar7);
  }
  FUN_1437484d0(&local_88);
  if ((local_b0 & 1) != 0) {
    FUN_143733a60(local_b0 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 14375b560 FUN_14375b560 body=675 status=ok
// SIG undefined FUN_14375b560(void)

/* WARNING: Removing unreachable block (ram,0x00014375b5ed) */

int * FUN_14375b560(longlong param_1,int *param_2,longlong param_3,undefined8 param_4,
                   undefined8 param_5)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  int local_res8 [2];
  undefined8 local_b8;
  longlong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  undefined8 local_98;
  ulonglong local_90;
  undefined8 local_88;
  longlong lStack_80;
  undefined8 local_68;
  undefined1 local_60;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  uVar9 = *(ulonglong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_143714de0();
  }
  puVar4 = (undefined8 *)FUN_143714490(uVar3,1);
  bVar1 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    bVar1 = (byte)*puVar4;
  }
  uVar6 = 0;
  if ((bVar1 & 0xf) == 7) {
    uVar6 = uVar3;
  }
  iVar2 = FUN_143715270(param_1 + 0x18);
  local_a0 = -iVar2 + param_3;
  local_68 = 0;
  local_60 = 0;
  local_98 = uVar6;
  local_90 = uVar9 & 0xfffffffffffffffe;
  FUN_143748760(&local_68,&local_a0);
  uVar3 = FUN_1437488d0(&local_68,local_48);
  FUN_143741f50(uVar3,&local_b8,*(undefined8 *)(param_1 + 0x18));
  local_88 = 0;
  lStack_80 = 0;
  lVar7 = lStack_80;
  uVar3 = local_88;
  uVar9 = 0;
  if (local_b0 != 0) {
    puVar4 = (undefined8 *)FUN_143714490(local_b0,1);
    bVar1 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar4;
    }
    lVar7 = lStack_80;
    uVar3 = local_88;
    if (((bVar1 & 0xf) == 3) &&
       (lVar7 = local_b0, uVar3 = local_b8, uVar9 = local_a8, (local_a8 & 1) != 0)) {
      FUN_1437329e0(local_a8 & 0xfffffffffffffffe);
      uVar9 = local_a8;
    }
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  if ((local_38 & 1) != 0) {
    FUN_143733a60(local_38 & 0xfffffffffffffffe);
  }
  plVar10 = (longlong *)(uVar9 & 0xfffffffffffffffe);
  (**(code **)(*plVar10 + 0x30))(plVar10,local_res8,uVar3,lVar7,param_5);
  if (-1 < local_res8[0]) {
    puVar4 = (undefined8 *)FUN_1437488d0(&local_68,local_48);
    uVar8 = 0;
    local_88 = 0;
    lStack_80 = 0;
    local_b0 = lStack_80;
    local_b8 = local_88;
    if (puVar4[1] != 0) {
      puVar5 = (undefined8 *)FUN_143714490(puVar4[1],1);
      bVar1 = 0;
      if (puVar5 != (undefined8 *)0x0) {
        bVar1 = (byte)*puVar5;
      }
      local_b0 = lStack_80;
      local_b8 = local_88;
      if ((bVar1 & 0xf) == 7) {
        uVar3 = *puVar4;
        lVar7 = puVar4[1];
        if ((*(byte *)(puVar4 + 2) & 1) != 0) {
          FUN_1437329e0(puVar4[2] & 0xfffffffffffffffe);
        }
        uVar8 = puVar4[2];
        local_b0 = lVar7;
        local_b8 = uVar3;
      }
    }
    local_a8 = uVar8;
    if ((uVar8 & 1) != 0) {
      FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
    }
    FUN_143742c20(&local_a0,local_res8,&local_b8);
    if ((local_a8 & 1) != 0) {
      FUN_143733a60(local_a8 & 0xfffffffffffffffe);
    }
    if ((uVar8 & 1) != 0) {
      FUN_143733a60(uVar8 & 0xfffffffffffffffe);
    }
    if ((local_38 & 1) != 0) {
      FUN_143733a60(local_38 & 0xfffffffffffffffe);
    }
    if (-1 < local_res8[0]) {
      *param_2 = 0;
      goto LAB_14375b7b6;
    }
  }
  *param_2 = local_res8[0];
LAB_14375b7b6:
  if ((uVar9 & 1) != 0) {
    FUN_143733a60(plVar10);
  }
  FUN_1437484d0(&local_68);
  if ((local_90 & 1) != 0) {
    FUN_143733a60(local_90 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 14375b810 FUN_14375b810 body=360 status=ok
// SIG undefined FUN_14375b810(void)

undefined4 *
FUN_14375b810(longlong param_1,undefined4 *param_2,longlong param_3,undefined8 param_4,
             undefined8 *param_5)

{
  byte bVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_68 [16];
  ulonglong local_58;
  undefined8 local_48;
  undefined1 local_40;
  
  uVar10 = 0;
  local_48 = 0;
  local_40 = 0;
  FUN_1437484d0(&local_48);
  local_48 = param_4;
  FUN_1437486c0(&local_48);
  puVar3 = (undefined8 *)FUN_1437488d0(&local_48,local_68);
  local_88 = 0;
  uStack_80 = 0;
  uVar6 = uStack_80;
  uVar7 = uVar10;
  uVar8 = local_88;
  if (puVar3[1] != 0) {
    puVar4 = (undefined8 *)FUN_143714490(puVar3[1],1);
    if (puVar4 == (undefined8 *)0x0) {
      bVar1 = 0;
    }
    else {
      bVar1 = (byte)*puVar4;
    }
    uVar6 = uStack_80;
    uVar8 = local_88;
    if ((bVar1 & 0xf) == 4) {
      uVar8 = *puVar3;
      uVar6 = puVar3[1];
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
        FUN_1437329e0(puVar3[2] & 0xfffffffffffffffe);
      }
      uVar7 = puVar3[2];
    }
  }
  if ((local_58 & 1) != 0) {
    FUN_143733a60(local_58 & 0xfffffffffffffffe);
  }
  plVar9 = (longlong *)(uVar7 & 0xfffffffffffffffe);
  local_88 = *param_5;
  uStack_80 = param_5[1];
  (**(code **)(*plVar9 + 0x30))(plVar9,&param_5,uVar8,uVar6,&local_88);
  cVar2 = (**(code **)(param_1 + 0x10))((int)-(uint)*(ushort *)(param_1 + 0x18) + param_3,uVar8);
  uVar5 = 0x80040200;
  if (cVar2 != '\0') {
    uVar5 = uVar10;
  }
  *param_2 = (int)uVar5;
  if ((uVar7 & 1) != 0) {
    FUN_143733a60(plVar9);
  }
  FUN_1437484d0(&local_48);
  return param_2;
}



// FUNCTION 14375b980 FUN_14375b980 body=348 status=ok
// SIG undefined FUN_14375b980(void)

undefined4 *
FUN_14375b980(longlong param_1,undefined4 *param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  byte bVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  undefined8 uStack_70;
  undefined1 local_60 [16];
  ulonglong local_50;
  undefined8 local_48;
  undefined1 local_40;
  
  local_48 = 0;
  local_40 = 0;
  FUN_1437484d0(&local_48);
  local_48 = param_4;
  FUN_1437486c0(&local_48);
  puVar3 = (undefined8 *)FUN_1437488d0(&local_48,local_60);
  uStack_70 = 0;
  if (puVar3[1] != 0) {
    puVar4 = (undefined8 *)FUN_143714490(puVar3[1],1);
    if (puVar4 == (undefined8 *)0x0) {
      bVar1 = 0;
    }
    else {
      bVar1 = (byte)*puVar4;
    }
    if ((bVar1 & 0xf) == 6) {
      uVar7 = *puVar3;
      uStack_70 = puVar3[1];
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
        FUN_1437329e0(puVar3[2] & 0xfffffffffffffffe);
      }
      uVar6 = puVar3[2];
      goto LAB_14375ba3f;
    }
  }
  uVar7 = 0;
  uVar6 = 0;
LAB_14375ba3f:
  if ((local_50 & 1) != 0) {
    FUN_143733a60(local_50 & 0xfffffffffffffffe);
  }
  plVar8 = (longlong *)(uVar6 & 0xfffffffffffffffe);
  (**(code **)(*plVar8 + 0x48))(plVar8,local_res8,uVar7,uStack_70,param_5);
  cVar2 = (**(code **)(param_1 + 0x10))((int)-(uint)*(ushort *)(param_1 + 0x18) + param_3,uVar7);
  uVar5 = 0x80040200;
  if (cVar2 != '\0') {
    uVar5 = 0;
  }
  *param_2 = (int)uVar5;
  if ((uVar6 & 1) != 0) {
    FUN_143733a60(plVar8);
  }
  FUN_1437484d0(&local_48);
  return param_2;
}



// FUNCTION 14375bae0 FUN_14375bae0 body=348 status=ok
// SIG undefined FUN_14375bae0(void)

undefined4 *
FUN_14375bae0(longlong param_1,undefined4 *param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  byte bVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  undefined8 uStack_70;
  undefined1 local_60 [16];
  ulonglong local_50;
  undefined8 local_48;
  undefined1 local_40;
  
  local_48 = 0;
  local_40 = 0;
  FUN_1437484d0(&local_48);
  local_48 = param_4;
  FUN_1437486c0(&local_48);
  puVar3 = (undefined8 *)FUN_1437488d0(&local_48,local_60);
  uStack_70 = 0;
  if (puVar3[1] != 0) {
    puVar4 = (undefined8 *)FUN_143714490(puVar3[1],1);
    if (puVar4 == (undefined8 *)0x0) {
      bVar1 = 0;
    }
    else {
      bVar1 = (byte)*puVar4;
    }
    if ((bVar1 & 0xf) == 3) {
      uVar7 = *puVar3;
      uStack_70 = puVar3[1];
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
        FUN_1437329e0(puVar3[2] & 0xfffffffffffffffe);
      }
      uVar6 = puVar3[2];
      goto LAB_14375bb9f;
    }
  }
  uVar7 = 0;
  uVar6 = 0;
LAB_14375bb9f:
  if ((local_50 & 1) != 0) {
    FUN_143733a60(local_50 & 0xfffffffffffffffe);
  }
  plVar8 = (longlong *)(uVar6 & 0xfffffffffffffffe);
  (**(code **)(*plVar8 + 0x30))(plVar8,local_res8,uVar7,uStack_70,param_5);
  cVar2 = (**(code **)(param_1 + 0x10))((int)-(uint)*(ushort *)(param_1 + 0x18) + param_3,uVar7);
  uVar5 = 0x80040200;
  if (cVar2 != '\0') {
    uVar5 = 0;
  }
  *param_2 = (int)uVar5;
  if ((uVar6 & 1) != 0) {
    FUN_143733a60(plVar8);
  }
  FUN_1437484d0(&local_48);
  return param_2;
}



// FUNCTION 14375bc40 FUN_14375bc40 body=480 status=ok
// SIG undefined FUN_14375bc40(void)

undefined4 *
FUN_14375bc40(longlong param_1,undefined4 *param_2,longlong param_3,undefined8 param_4,
             undefined8 *param_5)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 local_res8 [8];
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  undefined1 local_70 [16];
  ulonglong local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  param_3 = (int)-(uint)*(ushort *)(param_1 + 0x18) + param_3;
  puVar2 = (undefined8 *)FUN_143714420(param_4,1);
  iVar6 = 0;
  if (puVar2 != (undefined8 *)0x0) {
    iVar6 = (int)((ulonglong)*puVar2 >> 8);
  }
  uVar5 = 0;
  if (iVar6 == 0) {
    local_58 = 0;
    local_50 = 0;
    FUN_1437484d0(&local_58);
    local_58 = param_4;
    FUN_1437486c0(&local_58);
    local_38 = *param_5;
    local_30 = param_5[1];
    local_28 = *(undefined4 *)(param_5 + 2);
    local_24 = *(undefined4 *)((longlong)param_5 + 0x14);
    local_20 = param_5[3];
    if ((local_20 & 1) != 0) {
      FUN_1437329e0(local_20 & 0xfffffffffffffffe);
    }
    puVar2 = (undefined8 *)FUN_1437488d0(&local_58,local_70);
    local_78 = 0;
    local_88 = 0;
    uStack_80 = 0;
    if (puVar2[1] != 0) {
      puVar3 = (undefined8 *)FUN_143714490(puVar2[1],1);
      if (puVar3 != (undefined8 *)0x0) {
        uVar5 = (undefined4)*puVar3;
      }
      if (((byte)uVar5 & 0xf) == 8) {
        local_88 = *puVar2;
        uStack_80 = puVar2[1];
        if ((*(byte *)(puVar2 + 2) & 1) != 0) {
          FUN_1437329e0(puVar2[2] & 0xfffffffffffffffe);
        }
        if ((local_78 & 1) != 0) {
          FUN_143733a60(local_78 & 0xfffffffffffffffe);
        }
        local_78 = puVar2[2];
      }
    }
    FUN_143742bd0(&local_88,local_res8,&local_38);
    if ((local_78 & 1) != 0) {
      FUN_143733a60(local_78 & 0xfffffffffffffffe);
    }
    if ((local_60 & 1) != 0) {
      FUN_143733a60(local_60 & 0xfffffffffffffffe);
    }
    puVar2 = (undefined8 *)FUN_1437488d0(&local_58,local_70);
    cVar1 = (**(code **)(param_1 + 0x10))(param_3,*puVar2);
    uVar5 = 0x80040200;
    if (cVar1 != '\0') {
      uVar5 = 0;
    }
    *param_2 = uVar5;
    if ((local_60 & 1) != 0) {
      FUN_143733a60(local_60 & 0xfffffffffffffffe);
    }
    FUN_1437484d0(&local_58);
  }
  else {
    cVar1 = (**(code **)(param_1 + 0x10))(param_3,*param_5);
    uVar4 = 0x80040200;
    if (cVar1 != '\0') {
      uVar4 = uVar5;
    }
    *param_2 = uVar4;
  }
  return param_2;
}



// FUNCTION 14375be20 FUN_14375be20 body=59 status=ok
// SIG undefined FUN_14375be20(void)

undefined4 * FUN_14375be20(longlong param_1,undefined4 *param_2,longlong param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)(param_1 + 0x10))((int)-(uint)*(ushort *)(param_1 + 0x18) + param_3);
  uVar2 = 0x80040200;
  if (cVar1 != '\0') {
    uVar2 = 0;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14375be60 FUN_14375be60 body=769 status=ok
// SIG undefined FUN_14375be60(void)

int * FUN_14375be60(longlong param_1,int *param_2,longlong param_3,undefined8 param_4,
                   undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  byte bVar9;
  int local_res8 [2];
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  undefined8 local_88;
  undefined1 local_80;
  undefined1 local_68 [16];
  ulonglong local_58;
  undefined8 local_50;
  longlong lStack_48;
  ulonglong uVar10;
  
  local_a8 = *(undefined8 *)(param_1 + 0x10);
  local_98 = *(ulonglong *)(param_1 + 0x20);
  local_a0 = *(undefined8 *)(param_1 + 0x18);
  if ((local_98 & 1) != 0) {
    FUN_1437329e0(local_98 & 0xfffffffffffffffe);
  }
  uVar10 = 0;
  bVar9 = 0;
  local_88 = 0;
  local_80 = 0;
  FUN_143748760(&local_88,&local_a8);
  puVar4 = (undefined8 *)FUN_1437488d0(&local_88,local_68);
  lVar7 = *(longlong *)(param_1 + 0x28);
  puVar5 = (undefined8 *)FUN_1437429a0(param_1 + 0x10,local_res8);
  iVar3 = FUN_1437152f0(*puVar5);
  local_c8 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  bVar1 = 0;
  if (puVar4[1] != 0) {
    puVar5 = (undefined8 *)FUN_143714490(puVar4[1],1);
    bVar2 = bVar1;
    if (puVar5 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar5;
    }
    if ((bVar2 & 0xf) == 8) {
      local_d8 = *puVar4;
      uStack_d0 = puVar4[1];
      if ((*(byte *)(puVar4 + 2) & 1) != 0) {
        FUN_1437329e0(puVar4[2] & 0xfffffffffffffffe);
      }
      if ((local_c8 & 1) != 0) {
        FUN_143733a60(local_c8 & 0xfffffffffffffffe);
      }
      local_c8 = puVar4[2];
    }
  }
  FUN_143741d50(&local_d8,&local_c0,(param_3 - lVar7) / (longlong)iVar3 & 0xffffffff);
  if ((local_c8 & 1) != 0) {
    FUN_143733a60(local_c8 & 0xfffffffffffffffe);
  }
  local_50 = 0;
  lStack_48 = 0;
  lVar7 = lStack_48;
  uVar6 = local_50;
  if (local_b8 != 0) {
    puVar4 = (undefined8 *)FUN_143714490(local_b8,1);
    if (puVar4 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar4;
    }
    lVar7 = lStack_48;
    uVar6 = local_50;
    if (((bVar1 & 0xf) == 8) &&
       (lVar7 = local_b8, uVar6 = local_c0, uVar10 = local_b0, (local_b0 & 1) != 0)) {
      FUN_1437329e0(local_b0 & 0xfffffffffffffffe);
      uVar10 = local_b0;
    }
  }
  if ((local_b0 & 1) != 0) {
    FUN_143733a60(local_b0 & 0xfffffffffffffffe);
  }
  if ((local_58 & 1) != 0) {
    FUN_143733a60(local_58 & 0xfffffffffffffffe);
  }
  plVar8 = (longlong *)(uVar10 & 0xfffffffffffffffe);
  (**(code **)(*plVar8 + 0x78))(plVar8,local_res8,uVar6,lVar7,param_5,param_6,param_7);
  if (local_res8[0] < 0) {
    *param_2 = local_res8[0];
  }
  else {
    puVar4 = (undefined8 *)FUN_1437488d0(&local_88,local_68);
    local_c8 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    if (puVar4[1] != 0) {
      puVar5 = (undefined8 *)FUN_143714490(puVar4[1],1);
      if (puVar5 != (undefined8 *)0x0) {
        bVar9 = (byte)*puVar5;
      }
      if ((bVar9 & 0xf) == 8) {
        local_d8 = *puVar4;
        uStack_d0 = puVar4[1];
        if ((*(byte *)(puVar4 + 2) & 1) != 0) {
          FUN_1437329e0(puVar4[2] & 0xfffffffffffffffe);
        }
        if ((local_c8 & 1) != 0) {
          FUN_143733a60(local_c8 & 0xfffffffffffffffe);
        }
        local_c8 = puVar4[2];
      }
    }
    uVar6 = FUN_143742a00(&local_d8,&local_50);
    FUN_143742bd0(&local_a8,param_2,uVar6);
    if ((local_c8 & 1) != 0) {
      FUN_143733a60(local_c8 & 0xfffffffffffffffe);
    }
    if ((local_58 & 1) != 0) {
      FUN_143733a60(local_58 & 0xfffffffffffffffe);
    }
  }
  if ((uVar10 & 1) != 0) {
    FUN_143733a60(plVar8);
  }
  FUN_1437484d0(&local_88);
  if ((local_98 & 1) != 0) {
    FUN_143733a60(local_98 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 14375c170 FUN_14375c170 body=692 status=ok
// SIG undefined FUN_14375c170(void)

/* WARNING: Removing unreachable block (ram,0x00014375c209) */

int * FUN_14375c170(longlong param_1,int *param_2,longlong param_3,undefined8 param_4,
                   undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong local_res18;
  undefined8 local_b8;
  longlong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  undefined8 local_88;
  longlong lStack_80;
  undefined8 local_68;
  undefined1 local_60;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  uVar11 = *(ulonglong *)(param_1 + 0x10);
  uVar8 = 0;
  uVar4 = uVar8;
  local_res18 = param_3;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    uVar4 = FUN_143714de0();
  }
  puVar5 = (undefined8 *)FUN_143714490(uVar4,1);
  bVar1 = 0;
  bVar2 = bVar1;
  if (puVar5 != (undefined8 *)0x0) {
    bVar2 = (byte)*puVar5;
  }
  uVar9 = uVar8;
  if ((bVar2 & 0xf) == 7) {
    uVar9 = uVar4;
  }
  iVar3 = FUN_143715270(param_1 + 0x18);
  local_a0 = -iVar3 + local_res18;
  local_68 = 0;
  local_60 = 0;
  local_98 = uVar9;
  local_90 = uVar11 & 0xfffffffffffffffe;
  FUN_143748760(&local_68,&local_a0);
  uVar6 = FUN_1437488d0(&local_68,local_48);
  FUN_143741f50(uVar6,&local_b8,*(undefined8 *)(param_1 + 0x18));
  local_88 = 0;
  lStack_80 = 0;
  uVar6 = local_88;
  lVar10 = lStack_80;
  uVar11 = uVar8;
  if (local_b0 != 0) {
    puVar5 = (undefined8 *)FUN_143714490(local_b0,1);
    bVar2 = bVar1;
    if (puVar5 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar5;
    }
    uVar6 = local_88;
    lVar10 = lStack_80;
    if (((bVar2 & 0xf) == 8) &&
       (uVar6 = local_b8, lVar10 = local_b0, uVar11 = local_a8, (local_a8 & 1) != 0)) {
      FUN_1437329e0(local_a8 & 0xfffffffffffffffe);
      uVar11 = local_a8;
    }
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  if ((local_38 & 1) != 0) {
    FUN_143733a60(local_38 & 0xfffffffffffffffe);
  }
  plVar12 = (longlong *)(uVar11 & 0xfffffffffffffffe);
  (**(code **)(*plVar12 + 0x78))(plVar12,&local_res18,uVar6,lVar10,param_5,param_6,param_7);
  if ((int)local_res18 < 0) {
    *param_2 = (int)local_res18;
  }
  else {
    puVar5 = (undefined8 *)FUN_1437488d0(&local_68,local_48);
    local_88 = 0;
    lStack_80 = 0;
    local_b0 = lStack_80;
    local_b8 = local_88;
    if (puVar5[1] != 0) {
      puVar7 = (undefined8 *)FUN_143714490(puVar5[1],1);
      if (puVar7 != (undefined8 *)0x0) {
        bVar1 = (byte)*puVar7;
      }
      local_b0 = lStack_80;
      local_b8 = local_88;
      if ((bVar1 & 0xf) == 7) {
        uVar6 = *puVar5;
        lVar10 = puVar5[1];
        if ((*(byte *)(puVar5 + 2) & 1) != 0) {
          FUN_1437329e0(puVar5[2] & 0xfffffffffffffffe);
        }
        uVar8 = puVar5[2];
        local_b0 = lVar10;
        local_b8 = uVar6;
      }
    }
    local_a8 = uVar8;
    if ((uVar8 & 1) != 0) {
      FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
    }
    FUN_143742c20(&local_a0,param_2,&local_b8);
    if ((local_a8 & 1) != 0) {
      FUN_143733a60(local_a8 & 0xfffffffffffffffe);
    }
    if ((uVar8 & 1) != 0) {
      FUN_143733a60(uVar8 & 0xfffffffffffffffe);
    }
    if ((local_38 & 1) != 0) {
      FUN_143733a60(local_38 & 0xfffffffffffffffe);
    }
  }
  if ((uVar11 & 1) != 0) {
    FUN_143733a60(plVar12);
  }
  FUN_1437484d0(&local_68);
  if ((local_90 & 1) != 0) {
    FUN_143733a60(local_90 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 14375c430 FUN_14375c430 body=398 status=ok
// SIG undefined FUN_14375c430(void)

undefined4 *
FUN_14375c430(longlong param_1,undefined4 *param_2,longlong param_3,byte *param_4,undefined4 param_5
             ,undefined4 param_6,undefined8 param_7)

{
  ushort uVar1;
  byte *pbVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined1 local_res8 [8];
  longlong local_58;
  byte *local_50;
  ulonglong local_48;
  undefined8 local_38;
  undefined1 local_30;
  
  local_48 = 0;
  local_58 = param_3;
  local_50 = param_4;
  if (param_4 != (byte *)0x0) {
    local_48 = FUN_1437151a0(param_4);
  }
  if ((local_48 & 1) != 0) {
    FUN_1437329e0(local_48 & 0xfffffffffffffffe);
  }
  local_38 = 0;
  local_30 = 0;
  FUN_143748760(&local_38,&local_58);
  pbVar2 = param_4;
  if ((local_48 & 1) != 0) {
    FUN_143733a60(local_48 & 0xfffffffffffffffe);
  }
  while ((pbVar2 != (byte *)0x0 &&
         ((((*pbVar2 & 4) == 0 ||
           (plVar4 = (longlong *)FUN_1437143d0(pbVar2,4), plVar4 == (longlong *)0x0)) ||
          (*plVar4 == 0))))) {
    pbVar2 = *(byte **)(pbVar2 + 8);
  }
  plVar4 = (longlong *)FUN_1437151a0(*(undefined8 *)(pbVar2 + 8));
  puVar5 = (undefined8 *)FUN_1437488d0(&local_38,&local_58);
  (**(code **)(*plVar4 + 0x78))(plVar4,local_res8,*puVar5,param_4,param_5,param_6,param_7);
  if ((local_48 & 1) != 0) {
    FUN_143733a60(local_48 & 0xfffffffffffffffe);
  }
  uVar1 = *(ushort *)(param_1 + 0x18);
  puVar5 = (undefined8 *)FUN_1437488d0(&local_38,&local_58);
  cVar3 = (**(code **)(param_1 + 0x10))((int)-(uint)uVar1 + param_3,*puVar5);
  uVar6 = 0x80040200;
  if (cVar3 != '\0') {
    uVar6 = 0;
  }
  *param_2 = uVar6;
  if ((local_48 & 1) != 0) {
    FUN_143733a60(local_48 & 0xfffffffffffffffe);
  }
  FUN_1437484d0(&local_38);
  return param_2;
}



// FUNCTION 14375c5c0 FUN_14375c5c0 body=70 status=ok
// SIG undefined FUN_14375c5c0(void)

void FUN_14375c5c0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_143714490(param_2,1);
  uVar1 = 0;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = (uint)*puVar2;
  }
                    /* WARNING: Jumptable at 0x00014375c603 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&DAT_146b83630 + (ulonglong)(uVar1 & 0xf) * 8))(param_1,param_2);
  return;
}



// FUNCTION 14375c610 FUN_14375c610 body=70 status=ok
// SIG undefined FUN_14375c610(void)

void FUN_14375c610(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_143714490(param_2,1);
  uVar1 = 0;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = (uint)*puVar2;
  }
                    /* WARNING: Jumptable at 0x00014375c653 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&DAT_146b835e0 + (ulonglong)(uVar1 & 0xf) * 8))(param_1,param_2);
  return;
}



// FUNCTION 14375c660 FUN_14375c660 body=254 status=ok
// SIG undefined FUN_14375c660(void)

undefined8 * FUN_14375c660(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  LPVOID pvVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong local_28;
  
  puVar6 = (undefined8 *)0x0;
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  puVar5 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar4 + 0x58),0x30);
  puVar7 = puVar6;
  if (puVar5 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)*param_1;
    lVar1 = param_1[1];
    local_28 = puVar6[2];
    uVar2 = *puVar6;
    uVar3 = puVar6[1];
    if ((local_28 & 1) != 0) {
      FUN_1437329e0(local_28 & 0xfffffffffffffffe);
    }
    hkReflect::Detail::Impl::Impl(puVar5);
    *puVar5 = _anon_6595C8EB::ChildImpl<hkReflect::ArrayType,_anon_6595C8EB::ArrayParentRef>::
              vftable;
    puVar5[2] = uVar2;
    puVar5[3] = uVar3;
    puVar5[4] = local_28;
    if ((local_28 & 1) != 0) {
      FUN_1437329e0(local_28 & 0xfffffffffffffffe);
    }
    puVar5[5] = lVar1;
    *(undefined4 *)(puVar5 + 1) = 0;
    *puVar5 = _anon_6595C8EB::ChildArrayImpl<_anon_6595C8EB::ArrayParentRef>::vftable;
    puVar6 = puVar5;
    puVar7 = (undefined8 *)0x1;
  }
  if ((puVar7 != (undefined8 *)0x0) && ((local_28 & 1) != 0)) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  return puVar6;
}



// FUNCTION 14375c760 FUN_14375c760 body=244 status=ok
// SIG undefined FUN_14375c760(void)

undefined8 * FUN_14375c760(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  LPVOID pvVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong local_28;
  
  puVar6 = (undefined8 *)0x0;
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  puVar5 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar4 + 0x58),0x30);
  puVar7 = puVar6;
  if (puVar5 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)*param_1;
    lVar1 = param_1[1];
    local_28 = puVar6[2];
    uVar2 = *puVar6;
    uVar3 = puVar6[1];
    if ((local_28 & 1) != 0) {
      FUN_1437329e0(local_28 & 0xfffffffffffffffe);
    }
    hkReflect::Detail::Impl::Impl(puVar5);
    *puVar5 = _anon_6595C8EB::ChildImpl<hkReflect::BoolType,_anon_6595C8EB::ArrayParentRef>::vftable
    ;
    puVar5[2] = uVar2;
    puVar5[3] = uVar3;
    puVar5[4] = local_28;
    if ((local_28 & 1) != 0) {
      FUN_1437329e0(local_28 & 0xfffffffffffffffe);
    }
    puVar5[5] = lVar1;
    *(undefined4 *)(puVar5 + 1) = 0;
    puVar6 = puVar5;
    puVar7 = (undefined8 *)0x1;
  }
  if ((puVar7 != (undefined8 *)0x0) && ((local_28 & 1) != 0)) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  return puVar6;
}



// FUNCTION 14375c860 FUN_14375c860 body=244 status=ok
// SIG undefined FUN_14375c860(void)

undefined8 * FUN_14375c860(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  LPVOID pvVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong local_28;
  
  puVar6 = (undefined8 *)0x0;
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  puVar5 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar4 + 0x58),0x30);
  puVar7 = puVar6;
  if (puVar5 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)*param_1;
    lVar1 = param_1[1];
    local_28 = puVar6[2];
    uVar2 = *puVar6;
    uVar3 = puVar6[1];
    if ((local_28 & 1) != 0) {
      FUN_1437329e0(local_28 & 0xfffffffffffffffe);
    }
    hkReflect::Detail::Impl::Impl(puVar5);
    *puVar5 = _anon_6595C8EB::ChildImpl<hkReflect::FloatType,_anon_6595C8EB::ArrayParentRef>::
              vftable;
    puVar5[2] = uVar2;
    puVar5[3] = uVar3;
    puVar5[4] = local_28;
    if ((local_28 & 1) != 0) {
      FUN_1437329e0(local_28 & 0xfffffffffffffffe);
    }
    puVar5[5] = lVar1;
    *(undefined4 *)(puVar5 + 1) = 0;
    puVar6 = puVar5;
    puVar7 = (undefined8 *)0x1;
  }
  if ((puVar7 != (undefined8 *)0x0) && ((local_28 & 1) != 0)) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  return puVar6;
}



// FUNCTION 14375c960 FUN_14375c960 body=244 status=ok
// SIG undefined FUN_14375c960(void)

undefined8 * FUN_14375c960(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  LPVOID pvVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong local_28;
  
  puVar6 = (undefined8 *)0x0;
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  puVar5 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar4 + 0x58),0x30);
  puVar7 = puVar6;
  if (puVar5 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)*param_1;
    lVar1 = param_1[1];
    local_28 = puVar6[2];
    uVar2 = *puVar6;
    uVar3 = puVar6[1];
    if ((local_28 & 1) != 0) {
      FUN_1437329e0(local_28 & 0xfffffffffffffffe);
    }
    hkReflect::Detail::Impl::Impl(puVar5);
    *puVar5 = _anon_6595C8EB::ChildImpl<hkReflect::IntType,_anon_6595C8EB::ArrayParentRef>::vftable;
    puVar5[2] = uVar2;
    puVar5[3] = uVar3;
    puVar5[4] = local_28;
    if ((local_28 & 1) != 0) {
      FUN_1437329e0(local_28 & 0xfffffffffffffffe);
    }
    puVar5[5] = lVar1;
    *(undefined4 *)(puVar5 + 1) = 0;
    puVar6 = puVar5;
    puVar7 = (undefined8 *)0x1;
  }
  if ((puVar7 != (undefined8 *)0x0) && ((local_28 & 1) != 0)) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  return puVar6;
}



// FUNCTION 14375ca60 FUN_14375ca60 body=244 status=ok
// SIG undefined FUN_14375ca60(void)

undefined8 * FUN_14375ca60(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  LPVOID pvVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong local_28;
  
  puVar6 = (undefined8 *)0x0;
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  puVar5 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar4 + 0x58),0x30);
  puVar7 = puVar6;
  if (puVar5 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)*param_1;
    lVar1 = param_1[1];
    local_28 = puVar6[2];
    uVar2 = *puVar6;
    uVar3 = puVar6[1];
    if ((local_28 & 1) != 0) {
      FUN_1437329e0(local_28 & 0xfffffffffffffffe);
    }
    hkReflect::Detail::Impl::Impl(puVar5);
    *puVar5 = _anon_6595C8EB::ChildImpl<hkReflect::PointerType,_anon_6595C8EB::ArrayParentRef>::
              vftable;
    puVar5[2] = uVar2;
    puVar5[3] = uVar3;
    puVar5[4] = local_28;
    if ((local_28 & 1) != 0) {
      FUN_1437329e0(local_28 & 0xfffffffffffffffe);
    }
    puVar5[5] = lVar1;
    *(undefined4 *)(puVar5 + 1) = 0;
    puVar6 = puVar5;
    puVar7 = (undefined8 *)0x1;
  }
  if ((puVar7 != (undefined8 *)0x0) && ((local_28 & 1) != 0)) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  return puVar6;
}



// FUNCTION 14375cb60 FUN_14375cb60 body=254 status=ok
// SIG undefined FUN_14375cb60(void)

undefined8 * FUN_14375cb60(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  LPVOID pvVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong local_28;
  
  puVar6 = (undefined8 *)0x0;
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  puVar5 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar4 + 0x58),0x30);
  puVar7 = puVar6;
  if (puVar5 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)*param_1;
    lVar1 = param_1[1];
    local_28 = puVar6[2];
    uVar2 = *puVar6;
    uVar3 = puVar6[1];
    if ((local_28 & 1) != 0) {
      FUN_1437329e0(local_28 & 0xfffffffffffffffe);
    }
    hkReflect::Detail::Impl::Impl(puVar5);
    *puVar5 = _anon_6595C8EB::ChildImpl<hkReflect::RecordType,_anon_6595C8EB::ArrayParentRef>::
              vftable;
    puVar5[2] = uVar2;
    puVar5[3] = uVar3;
    puVar5[4] = local_28;
    if ((local_28 & 1) != 0) {
      FUN_1437329e0(local_28 & 0xfffffffffffffffe);
    }
    puVar5[5] = lVar1;
    *(undefined4 *)(puVar5 + 1) = 0;
    *puVar5 = _anon_6595C8EB::ChildRecordImpl<_anon_6595C8EB::ArrayParentRef>::vftable;
    puVar6 = puVar5;
    puVar7 = (undefined8 *)0x1;
  }
  if ((puVar7 != (undefined8 *)0x0) && ((local_28 & 1) != 0)) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  return puVar6;
}


