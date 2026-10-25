// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143364ba0 NaN body=19 status=ok
// SIG undefined NaN(void)

undefined8 Scaleform::GFx::NumberUtil::NaN(void)

{
  return 0;
}



// FUNCTION 143364be0 FUN_143364be0 body=22 status=ok
// SIG undefined FUN_143364be0(void)

bool FUN_143364be0(longlong param_1)

{
  return param_1 == 0;
}



// FUNCTION 143364c00 FUN_143364c00 body=22 status=ok
// SIG undefined FUN_143364c00(void)

bool FUN_143364c00(longlong param_1)

{
  return param_1 == -0x8000000000000000;
}



// FUNCTION 143364c20 FUN_143364c20 body=381 status=ok
// SIG undefined FUN_143364c20(void)

char * FUN_143364c20(double param_1,char *param_2,rsize_t param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = "%.14g";
  if (param_4 < 1) {
    if (param_4 < -0xe) {
      iVar2 = 0xe;
    }
    else {
      iVar2 = -param_4;
    }
    param_4 = 10;
    pcVar1 = (&PTR_DAT_145b01e20)[iVar2 + -1];
  }
  if (((ulonglong)param_1 & 0x7ff0000000000000) == 0x7ff0000000000000) {
    if ((((ulonglong)param_1 & 0x7ff0000000000000) == 0x7ff0000000000000) &&
       (((ulonglong)param_1 & 0xfffffffffffff) != 0)) {
      strcpy_s(param_2,param_3,"NaN");
      return param_2;
    }
    if (param_1 == INFINITY) {
      strcpy_s(param_2,param_3,"Infinity");
      return param_2;
    }
    if (param_1 == -INFINITY) {
      strcpy_s(param_2,param_3,"-Infinity");
      return param_2;
    }
  }
  else {
    iVar2 = (int)param_1;
    if (param_4 != 10) {
      pcVar1 = (char *)FUN_143364db0(iVar2,param_2,param_3);
      return pcVar1;
    }
    if ((double)iVar2 == param_1) {
      pcVar1 = (char *)FUN_143364ed0(iVar2,param_2,param_3);
      return pcVar1;
    }
    FUN_1432f2bf0(param_2,param_3,pcVar1,param_1);
    pcVar1 = param_2;
    if (*param_2 != '\0') {
      while ((*pcVar1 - 0x2cU & 0xfd) != 0) {
        pcVar1 = pcVar1 + 1;
        if (*pcVar1 == '\0') {
          return param_2;
        }
      }
      *pcVar1 = '.';
    }
  }
  return param_2;
}



// FUNCTION 143364db0 FUN_143364db0 body=274 status=ok
// SIG undefined FUN_143364db0(void)

char * FUN_143364db0(uint param_1,longlong param_2,longlong param_3,int param_4)

{
  uint uVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  ulonglong uVar10;
  char *pcVar9;
  
  pcVar3 = (char *)(param_3 + -1);
  pcVar3[param_2] = '\0';
  pcVar4 = pcVar3 + param_2;
  uVar10 = (ulonglong)param_1;
  if (param_4 == 2) {
    pcVar7 = (char *)0x0;
    uVar6 = 1;
    pcVar9 = pcVar7;
    do {
      if (pcVar3 <= pcVar9) break;
      pcVar4 = pcVar4 + -1;
      if ((param_1 & uVar6) == 0) {
        *pcVar4 = '0';
      }
      else {
        *pcVar4 = '1';
        pcVar7 = pcVar4;
      }
      uVar1 = uVar6 * 2;
      uVar8 = (int)pcVar9 + 1;
      pcVar9 = (char *)(ulonglong)uVar8;
      uVar6 = 1;
      if (uVar1 != 0) {
        uVar6 = uVar1;
      }
    } while (uVar8 < 0x20);
    pcVar4 = pcVar7;
    if (pcVar4 == (char *)0x0) {
      return (char *)(param_3 + -2 + param_2);
    }
  }
  else if (param_4 == 8) {
    uVar6 = 0;
    if (pcVar3 != (char *)0x0) {
      while( true ) {
        bVar5 = (byte)uVar10;
        pcVar4 = pcVar4 + -1;
        uVar10 = uVar10 >> 3;
        *pcVar4 = (bVar5 & 7) + 0x30;
        if ((int)uVar10 == 0) break;
        uVar6 = uVar6 + 1;
        if (pcVar3 <= (char *)(ulonglong)uVar6) {
          return pcVar4;
        }
      }
    }
  }
  else {
    if (param_4 != 0x10) {
      pcVar3 = (char *)FUN_143364ed0();
      return pcVar3;
    }
    uVar6 = 0;
    if (pcVar3 != (char *)0x0) {
      while( true ) {
        pcVar4 = pcVar4 + -1;
        bVar5 = (byte)uVar10 & 0xf;
        if (bVar5 < 10) {
          cVar2 = '0';
        }
        else {
          cVar2 = 'W';
        }
        uVar10 = uVar10 >> 4;
        *pcVar4 = bVar5 + cVar2;
        if ((int)uVar10 == 0) break;
        uVar6 = uVar6 + 1;
        if (pcVar3 <= (char *)(ulonglong)uVar6) {
          return pcVar4;
        }
      }
    }
  }
  return pcVar4;
}



// FUNCTION 143364ed0 FUN_143364ed0 body=137 status=ok
// SIG undefined FUN_143364ed0(void)

char * FUN_143364ed0(uint param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  
  uVar1 = param_3 - 1;
  pcVar3 = (char *)(uVar1 + param_2);
  *pcVar3 = '\0';
  uVar2 = 0;
  uVar4 = (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
  if (uVar1 != 0) {
    do {
      pcVar3 = pcVar3 + -1;
      *pcVar3 = (char)uVar4 + (char)((ulonglong)uVar4 / 10) * -10 + '0';
      uVar4 = (uint)((ulonglong)uVar4 / 10);
      if (uVar4 == 0) break;
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  if ((uVar2 < uVar1) && ((int)param_1 < 0)) {
    pcVar3[-1] = '-';
    return pcVar3 + -1;
  }
  return pcVar3;
}



// FUNCTION 143364f60 FUN_143364f60 body=1294 status=ok
// SIG undefined FUN_143364f60(void)

double FUN_143364f60(longlong param_1,uint param_2,uint param_3,uint *param_4)

{
  char cVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  ulonglong uVar8;
  byte bVar9;
  bool bVar10;
  bool bVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int local_res18;
  ulonglong local_res20;
  
  local_res18 = 1;
  *param_4 = 0;
  bVar11 = true;
  if (param_3 == 0) {
    param_3 = 10;
  }
  else {
    if (0x22 < param_3 - 2) {
      return -NAN;
    }
    bVar11 = true;
    if (param_3 != 0x10) {
      bVar11 = false;
    }
  }
  FUN_1432c2fb0(&local_res20,param_1);
  uVar7 = 0;
  uVar4 = FUN_1432c3580(&local_res20);
  if (uVar4 != 0) {
    do {
      iVar5 = FUN_1432c35f0(&local_res20,uVar7);
      if ((((iVar5 != 0x20) && (4 < iVar5 - 9U)) &&
          ((0x29 < iVar5 - 0x2000U ||
           ((0x30000000fffU >> ((ulonglong)(iVar5 - 0x2000U) & 0x3f) & 1) == 0)))) &&
         ((iVar5 != 0x205f && (iVar5 != 0x3000)))) break;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
  }
  uVar4 = FUN_1433062a0(uVar7,param_1);
  *param_4 = uVar4;
  iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res20 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar5 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res20 & 0xfffffffffffffffc);
  }
  uVar4 = *param_4;
  if (uVar4 == param_2) {
    return 0.0;
  }
  if (*(char *)((ulonglong)uVar4 + param_1) == '-') {
    local_res18 = -1;
LAB_1433650b0:
    *param_4 = uVar4 + 1;
  }
  else if (*(char *)((ulonglong)uVar4 + param_1) == '+') goto LAB_1433650b0;
  if (bVar11) {
    uVar4 = *param_4;
    if (((1 < param_2 - uVar4) && (*(char *)((ulonglong)uVar4 + param_1) == '0')) &&
       ((*(char *)((ulonglong)(uVar4 + 1) + param_1) + 0xa8U & 0xdf) == 0)) {
      param_3 = 0x10;
      *param_4 = uVar4 + 2;
      if (param_2 == uVar4 + 2) {
        return -NAN;
      }
    }
  }
  uVar4 = *param_4;
  uVar8 = (ulonglong)uVar4;
  iVar5 = 0;
  uVar15 = 0;
  dVar2 = 0.0;
  uVar7 = uVar4;
  while (uVar7 < param_2) {
    cVar1 = *(char *)((ulonglong)*param_4 + param_1);
    if ((byte)(cVar1 - 0x30U) < 10) {
      iVar5 = cVar1 + -0x30;
    }
    else if ((byte)(cVar1 + 0x9fU) < 0x1a) {
      iVar5 = cVar1 + -0x57;
    }
    else if ((byte)(cVar1 + 0xbfU) < 0x1a) {
      iVar5 = cVar1 + -0x37;
    }
    else {
      iVar5 = -1;
    }
    if (((int)param_3 <= iVar5) || (iVar5 < 0)) break;
    uVar7 = *param_4 + 1;
    *param_4 = uVar7;
    dVar2 = (double)(int)param_3 * dVar2 + (double)iVar5;
  }
  if (*param_4 == uVar4) {
    return -NAN;
  }
  if (((dVar2 < 9007199254740992.0) || (0x10 < param_3)) ||
     ((0x10104U >> (param_3 & 0x1f) & 1) == 0)) goto LAB_143365431;
  iVar14 = 1;
  if (param_3 == 8) {
    iVar14 = 3;
  }
  else if (param_3 == 0x10) {
    iVar14 = 4;
  }
  if (uVar4 < param_2) {
    pcVar6 = (char *)(uVar8 + param_1);
    do {
      if (*pcVar6 != '0') break;
      uVar4 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar4;
      pcVar6 = pcVar6 + 1;
    } while (uVar4 < param_2);
  }
  iVar13 = 0;
  dVar3 = 0.0;
  dVar2 = 0.0;
  if ((uint)uVar8 < param_2) {
    uVar4 = 0;
    do {
      dVar2 = dVar3;
      if (0x34 < uVar4) break;
      cVar1 = *(char *)(uVar8 + param_1);
      if ((byte)(cVar1 - 0x30U) < 10) {
        iVar5 = cVar1 + -0x30;
      }
      else if ((byte)(cVar1 + 0x9fU) < 0x1a) {
        iVar5 = cVar1 + -0x57;
      }
      else if ((byte)(cVar1 + 0xbfU) < 0x1a) {
        iVar5 = cVar1 + -0x37;
      }
      else {
        iVar5 = -1;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      if (((int)param_3 <= iVar5) || (iVar5 < 0)) {
        iVar5 = 0;
        break;
      }
      iVar13 = iVar13 + 1;
      uVar4 = uVar4 + iVar14;
      dVar3 = (double)(int)param_3 * dVar3 + (double)iVar5;
      dVar2 = dVar3;
    } while (uVar7 < param_2);
  }
  if ((uint)(iVar13 * iVar14) < 0x35) goto LAB_143365431;
  bVar11 = false;
  bVar9 = 0;
  uVar4 = (uint)uVar8;
  iVar13 = iVar14;
  if (param_3 == 2) {
    bVar10 = (bool)((byte)iVar5 & 1);
    if (uVar4 < param_2) {
      cVar1 = *(char *)(uVar8 + param_1);
      if ((byte)(cVar1 - 0x30U) < 10) {
        iVar5 = cVar1 + -0x30;
      }
      else if ((byte)(cVar1 + 0x9fU) < 0x1a) {
        iVar5 = cVar1 + -0x57;
      }
      else {
        if (0x19 < (byte)(cVar1 + 0xbfU)) goto LAB_14336538e;
        iVar5 = cVar1 + -0x37;
      }
      if ((iVar5 == -1) || (1 < iVar5)) goto LAB_14336538e;
    }
    else {
LAB_14336538e:
      iVar5 = 0;
    }
    bVar9 = (byte)iVar5 & 1;
  }
  else if (param_3 == 8) {
    if (((param_2 <= uVar4) ||
        (uVar7 = __crt_strtox::parse_digit(*(char *)(uVar8 + param_1)), uVar7 == 0xffffffff)) ||
       (7 < (int)uVar7)) {
      uVar7 = 0;
    }
    bVar10 = (bool)((byte)(uVar7 >> 1) & 1);
    bVar9 = (byte)uVar7 & 1;
  }
  else {
    bVar10 = bVar11;
    if (((param_3 == 0x10) && (bVar10 = (bool)((byte)iVar5 & 1), uVar4 < param_2)) &&
       ((uVar7 = __crt_strtox::parse_digit(*(char *)(uVar8 + param_1)), uVar7 != 0xffffffff &&
        ((int)uVar7 < 0x10)))) {
      bVar9 = (byte)(uVar7 >> 3) & 1;
      bVar11 = (uVar7 & 3) != 0;
    }
    else {
      bVar11 = bVar10;
      iVar13 = 0;
    }
  }
  bVar12 = (byte)iVar13;
  uVar4 = uVar4 + 1;
  if (uVar4 < param_2) {
    pcVar6 = (char *)((ulonglong)uVar4 + param_1);
    do {
      bVar12 = (byte)iVar13;
      cVar1 = *pcVar6;
      if ((byte)(cVar1 - 0x30U) < 10) {
        iVar5 = cVar1 + -0x30;
      }
      else if ((byte)(cVar1 + 0x9fU) < 0x1a) {
        iVar5 = cVar1 + -0x57;
      }
      else {
        if (0x19 < (byte)(cVar1 + 0xbfU)) break;
        iVar5 = cVar1 + -0x37;
      }
      if ((iVar5 == -1) || ((int)param_3 <= iVar5)) break;
      iVar13 = iVar13 + iVar14;
      bVar12 = (byte)iVar13;
      bVar11 = (bool)(bVar11 | iVar5 != 0);
      uVar4 = uVar4 + 1;
      pcVar6 = pcVar6 + 1;
      if (param_2 <= uVar4) break;
    } while( true );
  }
  if ((bVar9 != 0) && ((bVar10 != false || (bVar11 != false)))) {
    uVar15 = 0x3ff00000;
  }
  dVar2 = ((double)((ulonglong)uVar15 << 0x20) + dVar2) * (double)(1 << (bVar12 & 0x1f));
LAB_143365431:
  return (double)local_res18 * dVar2;
}



// FUNCTION 143365480 FUN_143365480 body=593 status=ok
// SIG undefined FUN_143365480(void)

undefined8 FUN_143365480(longlong param_1,uint param_2,uint *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *_Str2;
  uint uVar4;
  char *_Str1;
  undefined8 uVar5;
  ulonglong local_res18;
  char *local_res20;
  
  *param_3 = 0;
  FUN_1432c2fb0(&local_res18,param_1);
  uVar4 = 0;
  uVar2 = FUN_1432c3580(&local_res18);
  if (uVar2 != 0) {
    do {
      iVar3 = FUN_1432c35f0(&local_res18,uVar4);
      if ((((iVar3 != 0x20) && (4 < iVar3 - 9U)) &&
          ((0x29 < iVar3 - 0x2000U ||
           ((0x30000000fffU >> ((ulonglong)(iVar3 - 0x2000U) & 0x3f) & 1) == 0)))) &&
         ((iVar3 != 0x205f && (iVar3 != 0x3000)))) break;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  uVar2 = FUN_1433062a0(uVar4,param_1,param_2);
  *param_3 = uVar2;
  iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res18 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar3 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res18 & 0xfffffffffffffffc);
  }
  uVar2 = *param_3;
  if (param_2 == uVar2) {
    return 0xfff8000000000000;
  }
  _Str1 = (char *)(param_1 + (ulonglong)uVar2);
  local_res20 = (char *)0x0;
  if (1 < param_2 - uVar2) {
    cVar1 = *_Str1;
    if (cVar1 == '+') {
      iVar3 = strncmp(_Str1,"+Infinity",9);
      if (iVar3 == 0) {
        *param_3 = *param_3 + 9;
        return 0x7ff0000000000000;
      }
      _Str2 = "+infinity";
    }
    else {
      if (cVar1 != '-') {
        if (cVar1 == 'I') {
          iVar3 = strncmp(_Str1,"Infinity",8);
          if (iVar3 == 0) {
            *param_3 = *param_3 + 8;
            return 0x7ff0000000000000;
          }
          iVar3 = strncmp(_Str1,"infinity",8);
          if (iVar3 == 0) {
            return 0xfff8000000000000;
          }
        }
        goto LAB_143365699;
      }
      iVar3 = strncmp(_Str1,"-Infinity",9);
      if (iVar3 == 0) {
        *param_3 = *param_3 + 9;
        return 0xfff0000000000000;
      }
      _Str2 = "-infinity";
    }
    iVar3 = strncmp(_Str1,_Str2,9);
    if (iVar3 == 0) {
      return 0xfff8000000000000;
    }
  }
LAB_143365699:
  uVar5 = FUN_14331b260(_Str1,&local_res20);
  *param_3 = *param_3 + ((int)local_res20 - (int)_Str1);
  if (local_res20 == _Str1) {
    uVar5 = 0xfff8000000000000;
  }
  return uVar5;
}



// FUNCTION 1433656e0 FUN_1433656e0 body=379 status=ok
// SIG undefined FUN_1433656e0(void)

void FUN_1433656e0(byte *param_1,longlong param_2,undefined8 param_3,longlong param_4,char param_5)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  byte bVar7;
  byte *pbVar8;
  byte *local_res8;
  
  pbVar1 = param_1;
  do {
    while( true ) {
      pbVar8 = pbVar1;
      if (param_1 + param_2 <= pbVar8) {
        return;
      }
      local_res8 = pbVar8;
      uVar5 = FUN_143307250(&local_res8);
      uVar4 = (uint)uVar5;
      bVar7 = (byte)(uVar5 & 0xffffffff);
      if (0x7f < (int)uVar4) break;
      uVar6 = uVar4 & 0x1f;
      if ((int)uVar4 < 0) {
        uVar4 = uVar4 + 0x1f;
        uVar6 = uVar6 - 0x20;
      }
      if ((*(uint *)(param_4 + (longlong)((int)uVar4 >> 5) * 4) >> (uVar6 & 0x1f) & 1) == 0) break;
      uVar4 = (uint)(char)bVar7;
LAB_143365830:
      FUN_1432c5df0(param_3,uVar4);
      pbVar1 = local_res8;
    }
    if ((uVar5 & 0xff00) == 0) {
      FUN_1432c5df0(param_3,0x25);
      bVar2 = (byte)((uVar5 & 0xffffffff) >> 4) & 0xf;
      if (bVar2 < 10) {
        cVar3 = bVar2 + 0x30;
      }
      else {
        cVar3 = bVar2 + 0x37;
      }
      FUN_1432c5df0(param_3,cVar3);
      bVar7 = bVar7 & 0xf;
      if (bVar7 < 10) {
        bVar7 = bVar7 + 0x30;
      }
      else {
        bVar7 = bVar7 + 0x37;
      }
      uVar4 = (uint)bVar7;
      goto LAB_143365830;
    }
    if (param_5 == '\0') {
      FUN_1432c5df0(param_3,0x25);
      FUN_1432c5df0(param_3,0x75);
      FUN_143365fe0(param_3,uVar5 & 0xffff);
      pbVar1 = local_res8;
    }
    else {
      pbVar1 = local_res8;
      if (pbVar8 < local_res8) {
        do {
          FUN_1432c5df0(param_3,0x25);
          bVar7 = *pbVar8;
          bVar2 = bVar7 >> 4;
          if (bVar2 < 10) {
            cVar3 = bVar2 + 0x30;
          }
          else {
            cVar3 = bVar2 + 0x37;
          }
          FUN_1432c5df0(param_3,cVar3);
          bVar7 = bVar7 & 0xf;
          if (bVar7 < 10) {
            cVar3 = bVar7 + 0x30;
          }
          else {
            cVar3 = bVar7 + 0x37;
          }
          FUN_1432c5df0(param_3,cVar3);
          pbVar8 = pbVar8 + 1;
          pbVar1 = local_res8;
        } while (pbVar8 < local_res8);
      }
    }
  } while( true );
}



// FUNCTION 143365870 FUN_143365870 body=466 status=ok
// SIG undefined FUN_143365870(void)

undefined8 FUN_143365870(ulonglong param_1,longlong param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  byte bVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong local_res8;
  byte local_res10 [8];
  longlong local_48 [2];
  
  local_res8 = param_1;
  lVar7 = FUN_143305cd0(param_1,0xffffffffffffffff);
  lVar1 = 0;
  do {
    while( true ) {
      if (param_1 + param_2 <= local_res8) {
        return 1;
      }
      uVar4 = FUN_143307250(&local_res8);
      lVar10 = lVar1 + 1;
      if (0x7f < (int)uVar4) break;
      uVar8 = uVar4 & 0x1f;
      uVar5 = uVar4;
      if ((int)uVar4 < 0) {
        uVar5 = uVar4 + 0x1f;
        uVar8 = uVar8 - 0x20;
      }
      if ((*(uint *)(&DAT_1467ce398 + (longlong)((int)uVar5 >> 5) * 4) >> (uVar8 & 0x1f) & 1) == 0)
      break;
LAB_143365925:
      FUN_1432c5df0(param_3,(int)(char)uVar4);
      lVar1 = lVar10;
    }
    if ((param_4 == '\0') && ((int)uVar4 < 0x80)) {
      uVar8 = uVar4 & 0x1f;
      uVar5 = uVar4;
      if ((int)uVar4 < 0) {
        uVar5 = uVar4 + 0x1f;
        uVar8 = uVar8 - 0x20;
      }
      if ((*(uint *)(&DAT_1467ce3a8 + (longlong)((int)uVar5 >> 5) * 4) >> (uVar8 & 0x1f) & 1) != 0)
      goto LAB_143365925;
    }
    if (uVar4 - 0xdc00 < 0x400) {
      return 0;
    }
    if (uVar4 - 0xd800 < 0x400) {
      lVar10 = lVar1 + 2;
      if (lVar10 == lVar7) {
        return 0;
      }
      iVar6 = FUN_143307250(&local_res8);
      if (0x3ff < iVar6 - 0xdc00U) {
        return 0;
      }
      uVar4 = (uVar4 - 0xd7f7) * 0x400 + iVar6;
    }
    local_48[0] = 0;
    FUN_143307100(local_res10,6,local_48,uVar4);
    if (local_48[0] == 0) {
      return 0;
    }
    lVar11 = 0;
    lVar1 = lVar10;
    if (0 < local_48[0]) {
      do {
        bVar9 = local_res10[lVar11];
        FUN_1432c5df0(param_3,0x25);
        bVar2 = bVar9 >> 4;
        if (bVar2 < 10) {
          cVar3 = bVar2 + 0x30;
        }
        else {
          cVar3 = bVar2 + 0x37;
        }
        FUN_1432c5df0(param_3,cVar3);
        bVar9 = bVar9 & 0xf;
        if (bVar9 < 10) {
          cVar3 = bVar9 + 0x30;
        }
        else {
          cVar3 = bVar9 + 0x37;
        }
        FUN_1432c5df0(param_3,cVar3);
        lVar11 = lVar11 + 1;
      } while (lVar11 < local_48[0]);
    }
  } while( true );
}



// FUNCTION 143365a50 FUN_143365a50 body=316 status=ok
// SIG undefined FUN_143365a50(void)

undefined8 FUN_143365a50(char *param_1,longlong param_2,undefined8 param_3,char param_4)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  ushort uVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  char *local_res8;
  
  pcVar1 = param_1 + param_2;
  if (param_1 < pcVar1) {
    do {
      uVar5 = (uint)*param_1;
      param_1 = param_1 + 1;
      local_res8 = param_1;
      if (uVar5 == 0x25) {
        if ((param_4 == '\0') || (*param_1 == 'u')) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (*param_1 == 'u') {
          uVar6 = 0;
          pcVar8 = param_1;
          iVar9 = 0;
          do {
            if ((pcVar1 <= pcVar8) ||
               (((cVar2 = *pcVar8, 9 < (byte)(cVar2 - 0x30U) && (5 < (byte)(cVar2 + 0xbfU))) &&
                (5 < (byte)(cVar2 + 0x9fU))))) break;
            pcVar7 = pcVar8 + 1;
            if ((byte)(cVar2 - 0x30U) < 10) {
              bVar4 = cVar2 - 0x30;
              pcVar8 = pcVar7;
            }
            else if ((byte)(cVar2 + 0xbfU) < 6) {
              bVar4 = cVar2 - 0x37;
              pcVar8 = pcVar7;
            }
            else if ((byte)(cVar2 + 0x9fU) < 6) {
              bVar4 = cVar2 + 0xa9;
              pcVar8 = pcVar7;
            }
            else {
              bVar4 = 0;
            }
            iVar9 = iVar9 + 1;
            uVar6 = uVar6 << 4 | (ushort)bVar4;
          } while (iVar9 < 4);
          uVar5 = (uint)uVar6;
          if ((longlong)pcVar8 - (longlong)param_1 < 4) {
            pcVar8 = param_1;
          }
        }
        else {
          uVar5 = FUN_143365f20(&local_res8,pcVar1,2);
          uVar5 = uVar5 & 0xffff;
          pcVar8 = local_res8;
        }
        if (pcVar8 == param_1) {
          return 0;
        }
        param_1 = pcVar8;
        if (bVar3) {
          uVar5 = (uint)(char)uVar5;
        }
      }
      FUN_1432c5df0(param_3,uVar5);
    } while (param_1 < pcVar1);
  }
  return 1;
}



// FUNCTION 143365ba0 FUN_143365ba0 body=757 status=ok
// SIG undefined FUN_143365ba0(void)

undefined8 FUN_143365ba0(char *param_1,ulonglong param_2,undefined8 param_3,char param_4)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  byte local_res8 [8];
  byte *local_res10;
  int iVar10;
  
  pcVar1 = param_1 + param_2;
  uVar15 = 0;
  bVar7 = local_res8[0];
  do {
    if (pcVar1 <= param_1) {
      return 1;
    }
    uVar3 = (uint)*param_1;
    pcVar11 = param_1 + 1;
    uVar14 = uVar15;
    local_res8[0] = bVar7;
    if (uVar3 == 0x25) {
      if (pcVar11 < pcVar1) {
        cVar5 = *pcVar11;
        param_1 = param_1 + 2;
        if ((byte)(cVar5 - 0x30U) < 10) {
          cVar5 = cVar5 + -0x30;
        }
        else if ((byte)(cVar5 + 0xbfU) < 6) {
          cVar5 = cVar5 + -0x37;
        }
        else {
          if (5 < (byte)(cVar5 + 0x9fU)) goto LAB_143365c27;
          cVar5 = cVar5 + -0x57;
        }
      }
      else {
LAB_143365c27:
        cVar5 = '\0';
        param_1 = pcVar11;
      }
      if (param_1 == pcVar11) {
        return 0;
      }
      if (param_1 < pcVar1) {
        cVar2 = *param_1;
        pcVar11 = param_1 + 1;
        if ((byte)(cVar2 - 0x30U) < 10) {
          bVar6 = cVar2 - 0x30;
        }
        else if ((byte)(cVar2 + 0xbfU) < 6) {
          bVar6 = cVar2 - 0x37;
        }
        else {
          if (5 < (byte)(cVar2 + 0x9fU)) goto LAB_143365c6e;
          bVar6 = cVar2 + 0xa9;
        }
      }
      else {
LAB_143365c6e:
        bVar6 = 0;
        pcVar11 = param_1;
      }
      if (pcVar11 == param_1) {
        return 0;
      }
      uVar14 = uVar15 + 2;
      local_res8[0] = cVar5 << 4 | bVar6;
      if ((char)local_res8[0] < '\0') {
        iVar9 = 1;
        if ((local_res8[0] & 0x40) == 0) {
          return 0;
        }
        do {
          iVar10 = iVar9;
          iVar9 = iVar10 + 1;
        } while ((char)(local_res8[0] << ((byte)iVar9 & 0x1f)) < '\0');
        if (iVar9 == 1) {
          return 0;
        }
        if (4 < iVar9) {
          return 0;
        }
        if (param_2 <= (longlong)(iVar10 * 3) + uVar14) {
          return 0;
        }
        lVar16 = 1;
        if (1 < (longlong)iVar9) {
          do {
            pcVar12 = pcVar11 + 1;
            if (*pcVar11 != '%') {
              return 0;
            }
            if (pcVar12 < pcVar1) {
              cVar5 = *pcVar12;
              pcVar13 = pcVar11 + 2;
              if ((byte)(cVar5 - 0x30U) < 10) {
                cVar5 = cVar5 + -0x30;
              }
              else if ((byte)(cVar5 + 0xbfU) < 6) {
                cVar5 = cVar5 + -0x37;
              }
              else {
                if (5 < (byte)(cVar5 + 0x9fU)) goto LAB_143365d34;
                cVar5 = cVar5 + -0x57;
              }
            }
            else {
LAB_143365d34:
              cVar5 = '\0';
              pcVar13 = pcVar12;
            }
            if (pcVar13 == pcVar12) {
              return 0;
            }
            if (pcVar13 < pcVar1) {
              cVar2 = *pcVar13;
              pcVar11 = pcVar13 + 1;
              if ((byte)(cVar2 - 0x30U) < 10) {
                bVar7 = cVar2 - 0x30;
              }
              else if ((byte)(cVar2 + 0xbfU) < 6) {
                bVar7 = cVar2 - 0x37;
              }
              else {
                if (5 < (byte)(cVar2 + 0x9fU)) goto LAB_143365d7a;
                bVar7 = cVar2 + 0xa9;
              }
            }
            else {
LAB_143365d7a:
              bVar7 = 0;
              pcVar11 = pcVar13;
            }
            if (pcVar11 == pcVar13) {
              return 0;
            }
            bVar7 = cVar5 << 4 | bVar7;
            if ((bVar7 & 0xc0) != 0x80) {
              return 0;
            }
            local_res8[lVar16] = bVar7;
            uVar14 = uVar14 + 3;
            lVar16 = lVar16 + 1;
          } while (lVar16 < iVar9);
        }
        local_res10 = local_res8;
        uVar3 = FUN_143307250(&local_res10);
        if (uVar3 == 0xfffd) {
          return 0;
        }
      }
      else {
        uVar3 = (uint)local_res8[0];
        local_res8[0] = bVar7;
      }
      if (0xffff < uVar3) {
        if (0x10ffff < uVar3) {
          return 0;
        }
        FUN_1432c5df0(param_3,(uVar3 - 0x10000 >> 10 & 0x3ff) + 0xd800);
        uVar3 = (uVar3 & 0x3ff) + 0xdc00;
        goto LAB_143365e5f;
      }
      if ((param_4 != '\0') || (0x7f < (int)uVar3)) goto LAB_143365e5f;
      uVar8 = uVar3 & 0x1f;
      uVar4 = uVar3;
      if ((int)uVar3 < 0) {
        uVar4 = uVar3 + 0x1f;
        uVar8 = uVar8 - 0x20;
      }
      if ((*(uint *)(&DAT_1467ce3a8 + (longlong)((int)uVar4 >> 5) * 4) >> (uVar8 & 0x1f) & 1) == 0)
      goto LAB_143365e5f;
      for (; uVar15 <= uVar14; uVar15 = uVar15 + 1) {
        FUN_1432c5df0(param_3,(int)pcVar11[uVar15]);
      }
    }
    else {
LAB_143365e5f:
      FUN_1432c5df0(param_3,uVar3);
    }
    uVar15 = uVar14 + 1;
    param_1 = pcVar11;
    bVar7 = local_res8[0];
  } while( true );
}



// FUNCTION 143365f20 FUN_143365f20 body=183 status=ok
// SIG undefined FUN_143365f20(void)

uint FUN_143365f20(longlong *param_1,char *param_2,byte param_3)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = *param_1;
  uVar6 = 0;
  uVar5 = uVar6;
  if (param_3 != 0) {
    do {
      pcVar3 = (char *)*param_1;
      if ((param_2 <= pcVar3) ||
         (((cVar1 = *pcVar3, 9 < (byte)(cVar1 - 0x30U) && (5 < (byte)(cVar1 + 0xbfU))) &&
          (5 < (byte)(cVar1 + 0x9fU))))) break;
      *param_1 = (longlong)(pcVar3 + 1);
      if ((byte)(cVar1 - 0x30U) < 10) {
        bVar4 = cVar1 - 0x30;
      }
      else if ((byte)(cVar1 + 0xbfU) < 6) {
        bVar4 = cVar1 - 0x37;
      }
      else if ((byte)(cVar1 + 0x9fU) < 6) {
        bVar4 = cVar1 + 0xa9;
      }
      else {
        *param_1 = (longlong)pcVar3;
        bVar4 = 0;
      }
      uVar6 = uVar6 + 1;
      uVar5 = (uint)(ushort)((short)uVar5 << 4 | (ushort)bVar4);
    } while ((int)uVar6 < (int)(uint)param_3);
  }
  if (*param_1 - lVar2 < (longlong)(ulonglong)(uint)param_3) {
    *param_1 = lVar2;
  }
  return uVar5;
}



// FUNCTION 143365fe0 FUN_143365fe0 body=154 status=ok
// SIG undefined FUN_143365fe0(void)

void FUN_143365fe0(undefined8 param_1,undefined2 param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  
  bVar3 = (byte)((ushort)param_2 >> 8);
  bVar1 = bVar3 >> 4;
  if (bVar1 < 10) {
    cVar2 = bVar1 + 0x30;
  }
  else {
    cVar2 = bVar1 + 0x37;
  }
  FUN_1432c5df0(param_1,cVar2);
  bVar3 = bVar3 & 0xf;
  if (bVar3 < 10) {
    cVar2 = bVar3 + 0x30;
  }
  else {
    cVar2 = bVar3 + 0x37;
  }
  FUN_1432c5df0(param_1,cVar2);
  bVar1 = (byte)param_2 >> 4;
  if (bVar1 < 10) {
    cVar2 = bVar1 + 0x30;
  }
  else {
    cVar2 = bVar1 + 0x37;
  }
  FUN_1432c5df0(param_1,cVar2);
  bVar1 = (byte)param_2 & 0xf;
  if (bVar1 < 10) {
    cVar2 = bVar1 + 0x30;
  }
  else {
    cVar2 = bVar1 + 0x37;
  }
  FUN_1432c5df0(param_1,cVar2);
  return;
}



// FUNCTION 143366080 parse_digit body=46 status=ok
// SIG uint parse_digit(char param_1)

/* Library Function - Single Match
    unsigned int __cdecl __crt_strtox::parse_digit(char)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

uint __cdecl __crt_strtox::parse_digit(char param_1)

{
  if ((byte)(param_1 - 0x30U) < 10) {
    return (int)param_1 - 0x30;
  }
  if ((byte)(param_1 + 0x9fU) < 0x1a) {
    return (int)param_1 - 0x57;
  }
  if ((byte)(param_1 + 0xbfU) < 0x1a) {
    return (int)param_1 - 0x37;
  }
  return 0xffffffff;
}



// FUNCTION 1433660b0 FUN_1433660b0 body=68 status=ok
// SIG undefined FUN_1433660b0(void)

void FUN_1433660b0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  
  if (param_2 == '\0') {
    *(ushort *)(param_1 + 0x6a) = *(ushort *)(param_1 + 0x6a) & 0xbfff;
    uVar1 = FUN_14336b350();
    FUN_143362a30(uVar1,0);
    return;
  }
  *(ushort *)(param_1 + 0x6a) = *(ushort *)(param_1 + 0x6a) | 0x4000;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_143362a30();
    return;
  }
  return;
}



// FUNCTION 143366100 FUN_143366100 body=1247 status=ok
// SIG undefined FUN_143366100(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_143366100(longlong *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  undefined8 local_a8;
  undefined8 uStack_a0;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
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
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  if (param_1[9] == 0) {
    FUN_14336b350();
  }
  lVar10 = *(longlong *)(param_1[9] + 0x30);
  lVar8 = *(longlong *)(param_1[4] + 0x10);
  plVar1 = *(longlong **)(lVar8 + 0x5350);
  puVar7 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xa0,0);
  uVar16 = 0;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_1432ef4d0(puVar7,2);
    *puVar7 = &PTR_FUN_145af8f68;
    puVar7[0x13] = 0;
    puVar7[0x12] = 0;
  }
  lVar8 = FUN_1432ceba0(lVar8 + 0x5350,puVar7);
  if (lVar10 != 0) {
    lVar9 = FUN_1432cd1e0(param_1[9]);
    if ((*(byte *)(lVar9 + 10) >> 5 & 1) == 0) {
      lVar9 = FUN_1432cd1e0();
      uVar12 = *(ulonglong *)(lVar9 + 0x90);
      uVar14 = uVar16;
      if (uVar12 != 0) {
        if ((uVar12 & 1) == 0) {
          uVar12 = (ulonglong)(*(longlong *)(lVar9 + 0x98) != 0) + 1;
        }
        else {
          uVar12 = *(ulonglong *)((uVar12 & 0xfffffffffffffffe) + 8);
        }
        if (uVar12 != 0) {
          do {
            lVar9 = FUN_1432cd1e0(lVar10);
            puVar13 = (ulonglong *)(lVar9 + 0x90);
            if ((*(byte *)puVar13 & 1) != 0) {
              puVar13 = (ulonglong *)((*puVar13 & 0xfffffffffffffffe) + 0x10);
            }
          } while ((puVar13[uVar14] != param_1[9]) && (uVar14 = uVar14 + 1, uVar14 < uVar12));
        }
      }
      FUN_143364170(lVar10,uVar14,1);
      FUN_143364100(lVar10,uVar14,lVar8);
    }
    else {
      FUN_143362c90(lVar10,0);
      FUN_143362c90(lVar10,lVar8);
    }
  }
  if ((param_1[9] == 0) || (lVar10 = FUN_1432cd1e0(), (*(ushort *)(lVar10 + 10) >> 9 & 1) == 0)) {
    uVar11 = (**(code **)(*param_1 + 0x10))(param_1);
    FUN_1433625b0(lVar8,uVar11);
    FUN_1433625b0(param_1[9],&DAT_14621c810);
  }
  else {
    uVar11 = (**(code **)(*param_1 + 0x20))(param_1);
    FUN_143362630(lVar8,uVar11);
    local_50 = 0;
    local_40 = 0;
    local_38 = 0;
    local_28 = 0;
    local_58 = 0x3f800000;
    local_48 = 0x3f80000000000000;
    local_30 = 0x3f800000;
    local_20 = 0x3f80000000000000;
    cVar5 = (**(code **)(*param_1 + 0x30))(param_1,&local_58,0);
    if (cVar5 != '\0') {
      FUN_143362850(lVar8,&local_58);
    }
    local_80 = 0;
    local_70 = 0;
    local_68 = 0;
    local_88 = 0x3f800000;
    local_78 = 0x3f80000000000000;
    local_60 = 0x3f800000;
    cVar5 = (**(code **)(*param_1 + 0x48))(param_1,&local_88,0);
    if (cVar5 != '\0') {
      FUN_143362710(lVar8,&local_88);
    }
    FUN_143362630(param_1[9],&DAT_146b63020);
  }
  if (param_1[9] == 0) {
    puVar15 = (undefined4 *)&DAT_1467ccfd0;
  }
  else {
    lVar10 = FUN_1432cd1e0();
    puVar15 = (undefined4 *)(lVar10 + 0x50);
  }
  lVar10 = FUN_1432cd080(lVar8,2);
  uVar2 = puVar15[1];
  uVar3 = puVar15[2];
  uVar4 = puVar15[3];
  *(undefined4 *)(lVar10 + 0x50) = *puVar15;
  *(undefined4 *)(lVar10 + 0x54) = uVar2;
  *(undefined4 *)(lVar10 + 0x58) = uVar3;
  *(undefined4 *)(lVar10 + 0x5c) = uVar4;
  uVar2 = puVar15[5];
  uVar3 = puVar15[6];
  uVar4 = puVar15[7];
  *(undefined4 *)(lVar10 + 0x60) = puVar15[4];
  *(undefined4 *)(lVar10 + 100) = uVar2;
  *(undefined4 *)(lVar10 + 0x68) = uVar3;
  *(undefined4 *)(lVar10 + 0x6c) = uVar4;
  lVar10 = FUN_1432cd080(param_1[9],2);
  uVar4 = DAT_1467ccfdc;
  uVar3 = uRam00000001467ccfd8;
  uVar2 = uRam00000001467ccfd4;
  *(undefined4 *)(lVar10 + 0x50) = _DAT_1467ccfd0;
  *(undefined4 *)(lVar10 + 0x54) = uVar2;
  *(undefined4 *)(lVar10 + 0x58) = uVar3;
  *(undefined4 *)(lVar10 + 0x5c) = uVar4;
  uVar4 = uRam00000001467ccfec;
  uVar3 = uRam00000001467ccfe8;
  uVar2 = uRam00000001467ccfe4;
  *(undefined4 *)(lVar10 + 0x60) = _DAT_1467ccfe0;
  *(undefined4 *)(lVar10 + 100) = uVar2;
  *(undefined4 *)(lVar10 + 0x68) = uVar3;
  *(undefined4 *)(lVar10 + 0x6c) = uVar4;
  uVar6 = (**(code **)(*param_1 + 0x1d8))(param_1);
  FUN_143362a30(lVar8,uVar6);
  FUN_143362a30(param_1[9],1);
  lVar10 = FUN_143362af0(param_1[9],1);
  uVar12 = uVar16;
  if (lVar10 != 0) {
    uVar12 = (ulonglong)*(uint *)(lVar10 + 8);
  }
  FUN_143362c30(lVar8,uVar12);
  FUN_143362c30(param_1[9],0);
  lVar10 = FUN_143362af0(param_1[9],2);
  if (lVar10 == 0) {
    local_98 = 0.0;
    local_94 = 0.0;
    local_90 = 0.0;
    local_8c = 0.0;
  }
  else {
    lVar10 = *(longlong *)(lVar10 + 8);
    local_98 = *(float *)(lVar10 + 0x10);
    local_94 = *(float *)(lVar10 + 0x14);
    local_90 = *(float *)(lVar10 + 0x18);
    local_8c = *(float *)(lVar10 + 0x1c);
  }
  local_a8 = CONCAT44(local_94,local_98);
  uStack_a0 = CONCAT44(local_8c,local_90);
  if ((local_98 < local_90) && (local_94 < local_8c)) {
    FUN_143362b20(lVar8,&local_98);
    local_a8 = 0;
    uStack_a0 = 0;
    FUN_143362b20(param_1[9],&local_a8);
  }
  lVar10 = FUN_1432cd1e0(param_1[9]);
  if ((*(byte *)(lVar10 + 10) >> 4 & 1) != 0) {
    lVar10 = FUN_143362af0(param_1[9],4);
    if (lVar10 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = *(longlong *)(lVar10 + 8);
      if (lVar10 != 0) {
        *(longlong *)(lVar10 + 0x18) = *(longlong *)(lVar10 + 0x18) + 1;
      }
    }
    FUN_143362c90(param_1[9],0);
    FUN_143362c90(lVar8,lVar10);
    if (lVar10 != 0) {
      plVar1 = (longlong *)(lVar10 + 0x18);
      *plVar1 = *plVar1 + -1;
      if (*plVar1 == 0) {
        FUN_1432ccf00(lVar10);
      }
    }
  }
  lVar10 = FUN_143362af0(param_1[9],3);
  uVar12 = uVar16;
  if (lVar10 != 0) {
    uVar12 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FInputDeviceModule>,IModuleInterface_*___ptr64___cdecl(void)>
             ::GetRawUserObject(lVar10);
  }
  FUN_143362e10(lVar8,uVar12);
  lVar10 = param_1[9];
  lVar9 = FUN_1432cd1e0(lVar8);
  uVar12 = *(ulonglong *)(lVar9 + 0x90);
  if (uVar12 != 0) {
    if ((uVar12 & 1) == 0) {
      uVar16 = (ulonglong)(*(longlong *)(lVar9 + 0x98) != 0) + 1;
    }
    else {
      uVar16 = *(ulonglong *)((uVar12 & 0xfffffffffffffffe) + 8);
    }
  }
  FUN_143364100(lVar8,uVar16,lVar10);
  if (lVar8 != 0) {
    *(longlong *)(lVar8 + 0x18) = *(longlong *)(lVar8 + 0x18) + 1;
  }
  if (param_1[9] != 0) {
    plVar1 = (longlong *)(param_1[9] + 0x18);
    *plVar1 = *plVar1 + -1;
    if (*plVar1 == 0) {
      FUN_1432ccf00();
    }
  }
  param_1[9] = lVar8;
  if (lVar8 != 0) {
    plVar1 = (longlong *)(lVar8 + 0x18);
    *plVar1 = *plVar1 + -1;
    if (*plVar1 == 0) {
      FUN_1432ccf00(lVar8);
    }
  }
  return lVar8;
}



// FUNCTION 1433665f0 FUN_1433665f0 body=407 status=ok
// SIG undefined FUN_1433665f0(void)

longlong * FUN_1433665f0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 local_res18 [2];
  
  lVar6 = FUN_14336b350();
  if (lVar6 != 0) {
    *(longlong *)(lVar6 + 0x18) = *(longlong *)(lVar6 + 0x18) + 1;
  }
  uVar2 = *(undefined8 *)(lVar6 + 0x30);
  FUN_143362ef0(lVar6,uVar2);
  do {
    if (param_3 == 0) {
      lVar9 = *(longlong *)(param_1 + 0x38);
      lVar10 = 0;
      if (lVar9 != 0) {
        if ((*(ushort *)(lVar9 + 0x6a) >> 9 & 1) != 0) {
          lVar10 = lVar9;
        }
        if (lVar10 != 0) {
          uVar7 = Scaleform::GFx::DisplayList::FindDisplayIndex(lVar10 + 0xd8,param_1);
          FUN_1433d3fb0(lVar10 + 0xd8,lVar10,uVar7);
        }
      }
      FUN_1432ed7f0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10),lVar10,uVar2,param_1);
      if (*(longlong *)(param_1 + 0x60) == 0) {
        local_res18[0] = 0x142;
        puVar8 = (undefined8 *)
                 (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x40,local_res18);
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[2] = 0;
          puVar8[3] = 0;
          puVar8[4] = 0;
          puVar8[5] = 0;
          *(undefined4 *)puVar8 = 0x3f800000;
          *(undefined4 *)((longlong)puVar8 + 0x14) = 0x3f800000;
          *(undefined4 *)(puVar8 + 5) = 0x3f800000;
        }
        *(undefined8 **)(param_1 + 0x60) = puVar8;
      }
      lVar9 = FUN_1432cd1e0(lVar6);
      puVar8 = *(undefined8 **)(param_1 + 0x60);
      uVar2 = *(undefined8 *)(lVar9 + 0x18);
      *puVar8 = *(undefined8 *)(lVar9 + 0x10);
      puVar8[1] = uVar2;
      uVar3 = *(undefined4 *)(lVar9 + 0x24);
      uVar4 = *(undefined4 *)(lVar9 + 0x28);
      uVar5 = *(undefined4 *)(lVar9 + 0x2c);
      *(undefined4 *)(puVar8 + 2) = *(undefined4 *)(lVar9 + 0x20);
      *(undefined4 *)((longlong)puVar8 + 0x14) = uVar3;
      *(undefined4 *)(puVar8 + 3) = uVar4;
      *(undefined4 *)((longlong)puVar8 + 0x1c) = uVar5;
      uVar3 = *(undefined4 *)(lVar9 + 0x34);
      uVar4 = *(undefined4 *)(lVar9 + 0x38);
      uVar5 = *(undefined4 *)(lVar9 + 0x3c);
      *(undefined4 *)(puVar8 + 4) = *(undefined4 *)(lVar9 + 0x30);
      *(undefined4 *)((longlong)puVar8 + 0x24) = uVar3;
      *(undefined4 *)(puVar8 + 5) = uVar4;
      *(undefined4 *)((longlong)puVar8 + 0x2c) = uVar5;
      lVar9 = FUN_1432cd1e0(lVar6);
      *param_2 = lVar6;
      *(byte *)(*(longlong *)(param_1 + 0x60) + 0x30) =
           (byte)((ushort)*(undefined2 *)(lVar9 + 10) >> 9) & 1;
      *(ushort *)(param_1 + 0x6a) = *(ushort *)(param_1 + 0x6a) | 0x8000;
      lVar9 = *(longlong *)(lVar6 + 0x18);
      *(longlong *)(lVar6 + 0x18) = lVar9;
LAB_143366766:
      if (lVar9 == 0) {
        FUN_1432ccf00(lVar6);
      }
      return param_2;
    }
    if (param_3 == lVar6) {
      plVar1 = (longlong *)(lVar6 + 0x18);
      *plVar1 = *plVar1 + -1;
      lVar9 = *plVar1;
      *param_2 = 0;
      goto LAB_143366766;
    }
    param_3 = *(longlong *)(param_3 + 0x30);
  } while( true );
}



// FUNCTION 143366790 FUN_143366790 body=299 status=ok
// SIG undefined FUN_143366790(void)

void FUN_143366790(longlong param_1,char param_2)

{
  longlong *plVar1;
  RefCountNTSImpl *pRVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_28;
  RefCountNTSImpl *local_20;
  RefCountNTSImpl *local_18;
  
  if (*(short *)(param_1 + 0x6a) < 0) {
    lVar3 = FUN_14336b350();
    if (lVar3 != 0) {
      *(longlong *)(lVar3 + 0x18) = *(longlong *)(lVar3 + 0x18) + 1;
    }
    if (*(char *)(*(longlong *)(param_1 + 0x60) + 0x30) == '\0') {
      FUN_143362f70();
      FUN_1433625b0(lVar3,*(undefined8 *)(param_1 + 0x60));
    }
    else {
      FUN_143362630(lVar3);
    }
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x60));
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(ushort *)(param_1 + 0x6a) = *(ushort *)(param_1 + 0x6a) & 0x7fff;
    FUN_1432ed8d0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10),&local_28,param_1);
    if ((param_2 != '\0') && (local_18 != (RefCountNTSImpl *)0x0)) {
      pRVar2 = local_18 + 0xd8;
      lVar4 = Scaleform::GFx::DisplayList::FindDisplayIndex(pRVar2,param_1);
      if (lVar4 != -1) {
        FUN_1433d3ab0(pRVar2,local_18,lVar4);
      }
    }
    FUN_143362ef0(lVar3,0);
    if (local_18 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(local_18);
    }
    if (local_20 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(local_20);
    }
    if (local_28 != 0) {
      plVar1 = (longlong *)(local_28 + 0x18);
      *plVar1 = *plVar1 + -1;
      if (*plVar1 == 0) {
        FUN_1432ccf00();
      }
    }
    if (lVar3 != 0) {
      plVar1 = (longlong *)(lVar3 + 0x18);
      *plVar1 = *plVar1 + -1;
      if (*plVar1 == 0) {
        FUN_1432ccf00(lVar3);
      }
    }
  }
  return;
}



// FUNCTION 1433668d0 FUN_1433668d0 body=125 status=ok
// SIG undefined FUN_1433668d0(void)

/* WARNING: Removing unreachable block (ram,0x00014336693d) */

undefined8 *
FUN_1433668d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_145b01f70;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[3] = &PTR_LAB_145b02208;
  param_1[2] = 0;
  param_1[4] = param_2;
  *(undefined4 *)(param_1 + 5) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = param_3;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x40000000;
  *(undefined2 *)((longlong)param_1 + 0x6c) = 0;
  return param_1;
}



// FUNCTION 143366960 FUN_143366960 body=164 status=ok
// SIG undefined FUN_143366960(void)

void FUN_143366960(RefCountWeakSupportImpl *param_1)

{
  longlong *plVar1;
  RefCountWeakSupportImpl RVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_145b01f70;
  *(undefined ***)(param_1 + 0x18) = &PTR_LAB_145b02208;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  RVar2 = param_1[0x6d];
  if (RVar2 != (RefCountWeakSupportImpl)0x0) {
    (*(code *)**(undefined8 **)(param_1 + (ulonglong)(byte)RVar2 * 4))
              (param_1 + (ulonglong)(byte)RVar2 * 4,0);
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x48) + 0x18);
    *plVar1 = *plVar1 + -1;
    if (*plVar1 == 0) {
      FUN_1432ccf00();
    }
  }
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_145af8cf0;
  Scaleform::RefCountWeakSupportImpl::~RefCountWeakSupportImpl(param_1);
  return;
}



// FUNCTION 143366a10 BindAvmObj body=15 status=ok
// SIG undefined BindAvmObj(void)

void Scaleform::GFx::DisplayObjectBase::BindAvmObj(longlong param_1,longlong param_2)

{
  *(char *)(param_1 + 0x6d) = (char)((param_2 - param_1) + 3U >> 2);
  return;
}



// FUNCTION 143366a30 FUN_143366a30 body=51 status=ok
// SIG undefined FUN_143366a30(void)

undefined4 * FUN_143366a30(longlong param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x60);
  if (puVar2 == (undefined4 *)0x0) {
    if (*(longlong *)(param_1 + 0x48) != 0) {
      uVar1 = FUN_1432cd1e0();
      puVar2 = (undefined4 *)FUN_1433620e0(uVar1);
      return puVar2;
    }
    puVar2 = &DAT_14621c810;
  }
  return puVar2;
}



// FUNCTION 143366a70 FUN_143366a70 body=140 status=ok
// SIG undefined FUN_143366a70(void)

void FUN_143366a70(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  puVar1 = *(undefined8 **)(param_1 + 0x60);
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = FUN_14336b350();
    FUN_1433625b0(uVar2,param_2);
    FUN_1433670e0(param_1);
    return;
  }
  uVar2 = param_2[1];
  local_28 = (undefined4)param_2[2];
  uStack_24 = (undefined4)((ulonglong)param_2[2] >> 0x20);
  uStack_20 = (undefined4)param_2[3];
  uStack_1c = (undefined4)((ulonglong)param_2[3] >> 0x20);
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  *(undefined4 *)(puVar1 + 2) = local_28;
  *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_24;
  *(undefined4 *)(puVar1 + 3) = uStack_20;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = uStack_1c;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x24) = 0;
  *(undefined4 *)(puVar1 + 5) = 0x3f800000;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = 0;
  uVar2 = FUN_14336b350();
  FUN_1432cd080(uVar2,1);
  FUN_1433670e0(param_1);
  return;
}



// FUNCTION 143366b10 FUN_143366b10 body=48 status=ok
// SIG undefined FUN_143366b10(void)

undefined * FUN_143366b10(longlong param_1)

{
  longlong lVar1;
  undefined *puVar2;
  
  puVar2 = *(undefined **)(param_1 + 0x60);
  if (puVar2 == (undefined *)0x0) {
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar1 = FUN_1432cd1e0();
      return (undefined *)(lVar1 + 0x10);
    }
    puVar2 = &DAT_146b63020;
  }
  return puVar2;
}



// FUNCTION 143366b50 FUN_143366b50 body=125 status=ok
// SIG undefined FUN_143366b50(void)

void FUN_143366b50(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  puVar1 = *(undefined8 **)(param_1 + 0x60);
  if (puVar1 == (undefined8 *)0x0) {
    uVar5 = FUN_14336b350();
    FUN_143362630(uVar5,param_2);
    FUN_1433670e0(param_1);
    return;
  }
  uVar5 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar5;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 3);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)puVar1 + 0x14) = uVar2;
  *(undefined4 *)(puVar1 + 3) = uVar3;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = uVar4;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar3 = *(undefined4 *)(param_2 + 5);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)puVar1 + 0x24) = uVar2;
  *(undefined4 *)(puVar1 + 5) = uVar3;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = uVar4;
  *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0x30) = 1;
  uVar5 = FUN_14336b350();
  FUN_1432cd080(uVar5,1);
  FUN_1433670e0(param_1);
  return;
}



// FUNCTION 143366be0 FUN_143366be0 body=209 status=ok
// SIG undefined FUN_143366be0(void)

ulonglong FUN_143366be0(longlong param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong in_RAX;
  longlong lVar9;
  ulonglong uVar10;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar9 = FUN_143362af0(*(longlong *)(param_1 + 0x48),6);
    in_RAX = 0;
    if (lVar9 != 0) {
      lVar9 = *(longlong *)(lVar9 + 8);
      uVar2 = *(undefined8 *)(lVar9 + 0x18);
      uVar3 = *(undefined8 *)(lVar9 + 0x20);
      uVar4 = *(undefined8 *)(lVar9 + 0x28);
      uVar5 = *(undefined8 *)(lVar9 + 0x30);
      uVar6 = *(undefined8 *)(lVar9 + 0x38);
      uVar7 = *(undefined8 *)(lVar9 + 0x40);
      uVar8 = *(undefined8 *)(lVar9 + 0x48);
      *param_2 = *(undefined8 *)(lVar9 + 0x10);
      param_2[1] = uVar2;
      param_2[2] = uVar3;
      param_2[3] = uVar4;
      param_2[4] = uVar5;
      param_2[5] = uVar6;
      param_2[6] = uVar7;
      param_2[7] = uVar8;
      return CONCAT71((int7)((ulonglong)(lVar9 + 0x10) >> 8),1);
    }
  }
  if (param_3 != '\0') {
    plVar1 = *(longlong **)(param_1 + 0x38);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143366cad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar10 = (**(code **)(*plVar1 + 0x30))(plVar1,param_2,param_3);
      return uVar10;
    }
    in_RAX = *(ulonglong *)(param_1 + 0x20);
    if (*(longlong *)(in_RAX + 0x10) != 0) {
      uVar10 = FUN_14336dd70(*(undefined8 *)(*(longlong *)(in_RAX + 0x10) + 0x90),param_2);
      return uVar10;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 143366cc0 FUN_143366cc0 body=199 status=ok
// SIG undefined FUN_143366cc0(void)

void FUN_143366cc0(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((*(longlong *)(param_1 + 0x48) == 0) ||
     (lVar2 = FUN_1432cd1e0(), (*(ushort *)(lVar2 + 10) >> 0xc & 1) == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((((*(longlong *)(param_1 + 0x38) != 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x48) != 0)) &&
      (lVar2 = FUN_1432cd1e0(), (*(ushort *)(lVar2 + 10) >> 9 & 1) != 0)) &&
     ((*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x58) == 0 && (!bVar1)))) {
    return;
  }
  uVar3 = FUN_14336b350(param_1);
  FUN_143362850(uVar3,param_2);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
  if ((lVar2 != 0) && (*(longlong *)(*(longlong *)(lVar2 + 0x60) + 8) == param_1)) {
    FUN_143362850(*(undefined8 *)(lVar2 + 0x90),param_2);
    FUN_143362850(*(undefined8 *)(lVar2 + 0xa0),param_2);
  }
  return;
}



// FUNCTION 143366d90 FUN_143366d90 body=21 status=ok
// SIG undefined FUN_143366d90(void)

void FUN_143366d90(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14336b350();
  FUN_143362960(uVar1);
  return;
}



// FUNCTION 143366db0 FUN_143366db0 body=207 status=ok
// SIG undefined FUN_143366db0(void)

ulonglong FUN_143366db0(longlong param_1,undefined8 *param_2,char param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    in_RAX = FUN_1432cd1e0();
    if ((*(ushort *)(in_RAX + 10) >> 0xb & 1) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x58);
      uVar3 = *(undefined8 *)(lVar1 + 0x28);
      *param_2 = *(undefined8 *)(lVar1 + 0x20);
      param_2[1] = uVar3;
      uVar3 = *(undefined8 *)(lVar1 + 0x38);
      param_2[2] = *(undefined8 *)(lVar1 + 0x30);
      param_2[3] = uVar3;
      uVar3 = *(undefined8 *)(lVar1 + 0x48);
      param_2[4] = *(undefined8 *)(lVar1 + 0x40);
      param_2[5] = uVar3;
      return CONCAT71((int7)((ulonglong)(lVar1 + 0x20) >> 8),1);
    }
  }
  if (param_3 != '\0') {
    plVar2 = *(longlong **)(param_1 + 0x38);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143366e7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar2 + 0x48))(plVar2,param_2,param_3);
      return uVar4;
    }
    in_RAX = *(ulonglong *)(param_1 + 0x20);
    if (*(longlong *)(in_RAX + 0x10) != 0) {
      uVar4 = FUN_14336dde0(*(undefined8 *)(*(longlong *)(in_RAX + 0x10) + 0x90),param_2);
      return uVar4;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 143366e90 FUN_143366e90 body=552 status=ok
// SIG undefined FUN_143366e90(void)

void FUN_143366e90(longlong param_1,Matrix3x4<float> *param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_res8 [2];
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  ulonglong local_98 [3];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  Matrix3x4<float> local_68 [48];
  Matrix3x4<float> local_38 [48];
  
  if ((*(longlong *)(param_1 + 0x48) == 0) ||
     (lVar2 = FUN_1432cd1e0(), (*(ushort *)(lVar2 + 10) >> 0xb & 1) == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((((*(longlong *)(param_1 + 0x38) != 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x48) != 0)) &&
      (lVar2 = FUN_1432cd1e0(), (*(ushort *)(lVar2 + 10) >> 9 & 1) != 0)) &&
     ((*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x58) == 0 && (!bVar1)))) {
    return;
  }
  if (*(longlong *)(param_1 + 0x58) == 0) {
    local_res8[0] = 0x142;
    lVar2 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x50,local_res8);
    uVar3 = 0;
    if (lVar2 != 0) {
      uVar3 = Scaleform::GFx::DisplayObjectBase::PerspectiveDataType::PerspectiveDataType(lVar2);
    }
    *(undefined8 *)(param_1 + 0x58) = uVar3;
  }
  lVar2 = *(longlong *)(param_1 + 0x58);
  uVar3 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)param_2;
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(lVar2 + 0x38) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
  if (lVar2 != 0) {
    local_98[1] = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0x3f800000;
    local_a8 = 0;
    local_c8 = 0x3f800000;
    local_b8 = 0x3f80000000000000;
    local_98[0] = (ulonglong)
                  (uint)(1.0 / ((float)*(int *)(lVar2 + 0xb8) /
                               (*(float *)(lVar2 + 0x108) - *(float *)(lVar2 + 0x100))));
    local_c0 = (ulonglong)*(uint *)(lVar2 + 0x100) << 0x20;
    local_98[2] = (ulonglong)
                  (uint)(1.0 / ((float)*(int *)(lVar2 + 0xbc) /
                               (*(float *)(lVar2 + 0x10c) - *(float *)(lVar2 + 0x104)))) << 0x20;
    local_b0 = (ulonglong)*(uint *)(lVar2 + 0x104) << 0x20;
    local_a0 = 0x3f800000;
    Scaleform::Render::Matrix3x4<float>::MultiplyMatrix
              (local_38,(Matrix3x4<float> *)&local_c8,(Matrix3x4<float> *)local_98);
    Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(local_68,param_2,local_38);
    uVar3 = FUN_14336b350(param_1);
    FUN_143362710(uVar3,local_68);
    if (*(longlong *)(*(longlong *)(lVar2 + 0x60) + 8) == param_1) {
      FUN_143362710(*(undefined8 *)(lVar2 + 0x90),local_68);
      FUN_143362710(*(undefined8 *)(lVar2 + 0xa0),local_68);
    }
  }
  return;
}



// FUNCTION 1433670c0 FUN_1433670c0 body=21 status=ok
// SIG undefined FUN_1433670c0(void)

void FUN_1433670c0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14336b350();
  FUN_143362810(uVar1);
  return;
}



// FUNCTION 1433670e0 FUN_1433670e0 body=771 status=ok
// SIG undefined FUN_1433670e0(void)

void FUN_1433670e0(longlong *param_1)

{
  double dVar1;
  undefined2 uVar2;
  longlong lVar3;
  double *pdVar4;
  bool bVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float local_res8;
  float local_resc;
  float local_e8;
  float fStack_e4;
  undefined4 uStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  undefined4 uStack_d0;
  float fStack_cc;
  undefined8 local_b8;
  undefined8 local_b0;
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
  
  lVar3 = *(longlong *)(param_1[4] + 0x10);
  if (((lVar3 != 0) && (pdVar4 = (double *)param_1[0xb], pdVar4 != (double *)0x0)) &&
     ((*pdVar4 != 0.0 || (pdVar4[1] != 0.0)))) {
    fVar9 = *(float *)(lVar3 + 0x108);
    fVar10 = *(float *)(lVar3 + 0x100);
    if ((fVar9 != fVar10) || (*(float *)(lVar3 + 0x10c) != *(float *)(lVar3 + 0x104))) {
      local_b0 = 0;
      local_a0 = 0;
      local_98 = 0;
      local_80 = 0;
      local_70 = 0;
      local_68 = 0;
      local_58 = 0;
      local_b8 = 0x3f800000;
      local_a8 = 0x3f80000000000000;
      local_90 = 0x3f800000;
      local_88 = 0x3f800000;
      local_78 = 0x3f80000000000000;
      local_60 = 0x3f800000;
      local_50 = 0x3f80000000000000;
      cVar6 = Scaleform::GFx::NumberUtil::IsNaN(SUB84((double)*(float *)(pdVar4 + 2),0));
      if ((cVar6 == '\0') &&
         (cVar6 = Scaleform::GFx::NumberUtil::IsNaN
                            (SUB84((double)*(float *)((longlong)pdVar4 + 0x14),0)), cVar6 == '\0'))
      {
        local_resc = *(float *)((longlong)pdVar4 + 0x14);
        local_res8 = *(float *)(pdVar4 + 2);
        uVar7 = FUN_14336b350(param_1);
        lVar8 = FUN_1432cd1e0(uVar7);
        uVar2 = *(undefined2 *)(lVar8 + 10);
        bVar5 = false;
        if ((param_1[7] != 0) && (lVar8 = *(longlong *)(param_1[7] + 0x58), lVar8 != 0)) {
          cVar6 = Scaleform::GFx::NumberUtil::IsNaN(SUB84((double)*(float *)(lVar8 + 0x10),0));
          if ((cVar6 == '\0') &&
             (cVar6 = Scaleform::GFx::NumberUtil::IsNaN(SUB84((double)*(float *)(lVar8 + 0x14),0)),
             cVar6 == '\0')) {
            bVar5 = true;
          }
          else {
            bVar5 = false;
          }
        }
        if ((param_1[10] != 0) && ((((byte)((ushort)uVar2 >> 9) & 1) == 0 || (bVar5)))) {
          local_e8 = 1.0;
          fStack_e4 = 0.0;
          uStack_e0 = 0;
          fStack_dc = 0.0;
          local_d8 = 0.0;
          fStack_d4 = 1.0;
          uStack_d0 = 0;
          fStack_cc = 0.0;
          (**(code **)(*param_1 + 0x1e8))(param_1,&local_e8);
          fVar9 = fStack_e4 * local_resc;
          local_resc = fStack_d4 * local_resc + local_d8 * local_res8 + fStack_cc;
          local_res8 = fVar9 + local_e8 * local_res8 + fStack_dc;
        }
      }
      else {
        local_res8 = (fVar10 + fVar9) * 0.5;
        local_resc = (*(float *)(lVar3 + 0x10c) + *(float *)(lVar3 + 0x104)) * 0.5;
      }
      dVar1 = *(double *)param_1[0xb];
      if (dVar1 == 0.0) {
        fVar9 = 55.0;
      }
      else {
        fVar9 = (float)dVar1;
      }
      dVar1 = ((double *)param_1[0xb])[1];
      if (dVar1 == 0.0) {
        fVar10 = 0.0;
      }
      else {
        fVar10 = (float)dVar1;
      }
      FUN_1432ed360(&local_b8,&local_88,(float *)(lVar3 + 0x100),&local_res8,fVar9,fVar10,0);
      (**(code **)(*param_1 + 0x50))(param_1,&local_b8);
      (**(code **)(*param_1 + 0x38))(param_1,&local_88);
    }
  }
  return;
}



// FUNCTION 1433673f0 FUN_1433673f0 body=1111 status=ok
// SIG undefined FUN_1433673f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433673f0(longlong *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined4 uVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulonglong local_218;
  ulonglong uStack_210;
  float local_208;
  float fStack_204;
  float fStack_200;
  undefined4 uStack_1fc;
  ulonglong local_1f8;
  undefined8 uStack_1f0;
  ulonglong local_1e8 [3];
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  ulonglong uStack_1c0;
  ulonglong local_1b8;
  ulonglong uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  ulonglong local_198;
  undefined8 uStack_190;
  ulonglong local_188;
  ulonglong uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  ulonglong local_168;
  undefined8 uStack_160;
  ulonglong local_158;
  ulonglong uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  ulonglong local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  longlong lStack_120;
  undefined8 local_118;
  longlong lStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  Matrix3x4<float> local_f8 [48];
  Matrix3x4<float> local_c8 [48];
  Matrix3x4<float> local_98 [144];
  
  uVar5 = _DAT_146b63048;
  uVar4 = _DAT_146b63040;
  uVar3 = _DAT_146b63028;
  uVar2 = _DAT_146b63020;
  piVar1 = (int *)param_1[10];
  uStack_210 = (ulonglong)(uint)(float)*piVar1 << 0x20;
  local_128 = 0x3f800000;
  lStack_120 = uStack_210;
  uStack_1f0 = CONCAT44((float)*(double *)(piVar1 + 0x10),0x3f800000);
  local_118 = 0x3f80000000000000;
  lStack_110 = (ulonglong)(uint)(float)piVar1[1] << 0x20;
  local_108 = 0;
  uStack_100 = uStack_1f0;
  local_218 = (ulonglong)(uint)((float)*(double *)(piVar1 + 2) / 100.0);
  local_1e8[0] = local_218;
  local_1e8[1] = 0;
  uStack_1f0 = (ulonglong)(uint)((float)*(double *)(piVar1 + 0x12) / 100.0);
  local_1e8[2] = (ulonglong)(uint)((float)*(double *)(piVar1 + 4) / 100.0) << 0x20;
  uStack_1d0 = 0;
  local_1c8 = 0;
  uStack_1c0 = uStack_1f0;
  local_208 = (float)_DAT_146b63030;
  fVar10 = local_208;
  fStack_204 = (float)((ulonglong)_DAT_146b63030 >> 0x20);
  fVar12 = fStack_204;
  fStack_200 = (float)_DAT_146b63038;
  fVar6 = fStack_200;
  uStack_1fc = (undefined4)((ulonglong)_DAT_146b63038 >> 0x20);
  uVar7 = uStack_1fc;
  if (*(double *)(piVar1 + 0x14) == 0.0) {
    local_218 = _DAT_146b63020;
    uStack_210 = _DAT_146b63028;
    local_1f8 = _DAT_146b63040;
    uStack_1f0 = _DAT_146b63048;
  }
  else {
    uStack_210 = 0;
    local_208 = 0.0;
    fStack_204 = 0.0;
    fStack_200 = 0.0;
    uStack_1fc = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    fVar11 = (float)((*(double *)(piVar1 + 0x14) * 3.141592653589793) / 180.0);
    fVar9 = _guard_xfg_dispatch_icall_nop(fVar11);
    fVar11 = _guard_xfg_dispatch_icall_nop(fVar11);
    fStack_200 = -fVar11;
    uStack_1f0 = CONCAT44(uStack_1f0._4_4_,fVar9);
    local_218 = 0x3f800000;
    local_208 = 0.0;
    local_1f8 = (ulonglong)(uint)fVar11 << 0x20;
    uStack_210 = uStack_210 & 0xffffffff00000000;
    fStack_204 = fVar9;
  }
  local_1a8 = CONCAT44(fStack_204,local_208);
  uStack_1a0 = CONCAT44(uStack_1fc,fStack_200);
  local_1b8 = local_218;
  uStack_1b0 = uStack_210;
  local_198 = local_1f8;
  uStack_190 = uStack_1f0;
  if (*(double *)(piVar1 + 0x16) == 0.0) {
    local_218 = uVar2;
    uStack_210 = uVar3;
    local_1f8 = uVar4;
    uStack_1f0 = uVar5;
    local_208 = fVar10;
    fStack_204 = fVar12;
    fStack_200 = fVar6;
    uStack_1fc = uVar7;
  }
  else {
    local_218 = 0;
    uStack_210 = 0;
    local_208 = 0.0;
    fStack_204 = 0.0;
    fStack_200 = 0.0;
    uStack_1fc = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    fVar11 = (float)((*(double *)(piVar1 + 0x16) * 3.141592653589793) / 180.0);
    fVar9 = _guard_xfg_dispatch_icall_nop(fVar11);
    fVar11 = _guard_xfg_dispatch_icall_nop(fVar11);
    uStack_210 = CONCAT44(uStack_210._4_4_,fVar11);
    uStack_1f0 = CONCAT44(uStack_1f0._4_4_,fVar9);
    local_208 = 0.0;
    local_218 = (ulonglong)(uint)fVar9;
    fStack_204 = 1.0;
    fStack_200 = 0.0;
    local_1f8 = (ulonglong)(uint)-fVar11;
  }
  local_178 = CONCAT44(fStack_204,local_208);
  uStack_170 = CONCAT44(uStack_1fc,fStack_200);
  local_188 = local_218;
  uStack_180 = uStack_210;
  local_168 = local_1f8;
  uStack_160 = uStack_1f0;
  if (*(double *)(piVar1 + 6) == 0.0) {
    local_218 = uVar2;
    uStack_210 = uVar3;
    local_1f8 = uVar4;
    uStack_1f0 = uVar5;
    local_208 = fVar10;
    fStack_204 = fVar12;
    fStack_200 = fVar6;
    uStack_1fc = uVar7;
  }
  else {
    local_218 = 0;
    uStack_210 = 0;
    local_208 = 0.0;
    fStack_204 = 0.0;
    fStack_200 = 0.0;
    uStack_1fc = 0;
    uStack_1f0 = 0;
    fVar12 = (float)((*(double *)(piVar1 + 6) * 3.141592653589793) / 180.0);
    fVar10 = _guard_xfg_dispatch_icall_nop(fVar12);
    local_208 = _guard_xfg_dispatch_icall_nop(fVar12);
    local_218 = CONCAT44(local_208,fVar10) ^ 0x8000000000000000;
    local_1f8 = 0;
    uStack_210 = uStack_210 & 0xffffffff00000000;
    fStack_200 = 0.0;
    uStack_1f0 = CONCAT44(uStack_1f0._4_4_,0x3f800000);
    fStack_204 = fVar10;
  }
  local_148 = CONCAT44(fStack_204,local_208);
  uStack_140 = CONCAT44(uStack_1fc,fStack_200);
  local_158 = local_218;
  uStack_150 = uStack_210;
  local_138 = local_1f8;
  uStack_130 = uStack_1f0;
  Scaleform::Render::Matrix3x4<float>::MultiplyMatrix
            (local_f8,(Matrix3x4<float> *)&local_1b8,(Matrix3x4<float> *)local_1e8);
  Scaleform::Render::Matrix3x4<float>::MultiplyMatrix
            (local_c8,(Matrix3x4<float> *)&local_158,(Matrix3x4<float> *)&local_188);
  Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(local_98,local_c8,local_f8);
  Scaleform::Render::Matrix3x4<float>::MultiplyMatrix
            ((Matrix3x4<float> *)&local_218,(Matrix3x4<float> *)&local_128,local_98);
  bVar8 = Scaleform::Render::Matrix3x4<float>::IsValid((Matrix3x4<float> *)&local_218);
  if (bVar8) {
    (**(code **)(*param_1 + 0x28))(param_1,&local_218);
  }
  return;
}



// FUNCTION 143367850 FUN_143367850 body=45 status=ok
// SIG undefined FUN_143367850(void)

undefined1 FUN_143367850(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar1 = FUN_1432cd1e0();
    if ((*(ushort *)(lVar1 + 10) >> 9 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143367890 FUN_143367890 body=91 status=ok
// SIG undefined FUN_143367890(void)

char FUN_143367890(longlong param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  
  do {
    if ((*(longlong *)(param_1 + 0x48) == 0) ||
       (lVar1 = FUN_1432cd1e0(), (*(ushort *)(lVar1 + 10) >> 9 & 1) == 0)) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
    if (param_2 == '\0') {
      return cVar2;
    }
    if (cVar2 != '\0') {
      return '\x01';
    }
    param_1 = *(longlong *)(param_1 + 0x38);
  } while (param_1 != 0);
  return '\0';
}



// FUNCTION 143367900 FUN_143367900 body=152 status=ok
// SIG undefined FUN_143367900(void)

void FUN_143367900(longlong *param_1,char param_2)

{
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if ((param_2 != '\0') && (param_1[7] != 0)) {
    FUN_143367900();
  }
  local_60 = 0x4059000000000000;
  local_58 = 0x4059000000000000;
  uStack_50 = 0;
  local_48 = 0x3f800000;
  uStack_40 = 0;
  local_38 = 0x3f80000000000000;
  uStack_30 = 0;
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0x40590000;
  local_18 = 0;
  uStack_10 = 0;
  local_68 = 0;
  FUN_14336b830(param_1,&local_68);
  if (param_1[9] != 0) {
    FUN_143362f70();
  }
                    /* WARNING: Could not recover jumptable at 0x000143367994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x60))(param_1);
  return;
}



// FUNCTION 1433679a0 FUN_1433679a0 body=39 status=ok
// SIG undefined FUN_1433679a0(void)

undefined * FUN_1433679a0(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar1 = FUN_1432cd1e0();
    return (undefined *)(lVar1 + 0x50);
  }
  return &DAT_1467ccfd0;
}



// FUNCTION 1433679d0 FUN_1433679d0 body=48 status=ok
// SIG undefined FUN_1433679d0(void)

void FUN_1433679d0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_14336b350();
  lVar2 = FUN_1432cd080(uVar1,2);
  uVar1 = param_2[1];
  *(undefined8 *)(lVar2 + 0x50) = *param_2;
  *(undefined8 *)(lVar2 + 0x58) = uVar1;
  uVar1 = param_2[3];
  *(undefined8 *)(lVar2 + 0x60) = param_2[2];
  *(undefined8 *)(lVar2 + 0x68) = uVar1;
  return;
}



// FUNCTION 143367a10 FUN_143367a10 body=123 status=ok
// SIG undefined FUN_143367a10(void)

void FUN_143367a10(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    puVar2 = (undefined4 *)&DAT_1467ccfd0;
  }
  else {
    lVar1 = FUN_1432cd1e0();
    puVar2 = (undefined4 *)(lVar1 + 0x50);
  }
  local_28 = *puVar2;
  uStack_24 = puVar2[1];
  uStack_20 = puVar2[2];
  uStack_1c = puVar2[3];
  local_18 = puVar2[4];
  uStack_14 = puVar2[5];
  uStack_10 = puVar2[6];
  uStack_c = puVar2[7];
  FUN_1432bfbe0(&local_28,param_2);
  uVar3 = FUN_14336b350(param_1);
  lVar1 = FUN_1432cd080(uVar3,2);
  *(ulonglong *)(lVar1 + 0x50) = CONCAT44(uStack_24,local_28);
  *(ulonglong *)(lVar1 + 0x58) = CONCAT44(uStack_1c,uStack_20);
  *(ulonglong *)(lVar1 + 0x60) = CONCAT44(uStack_14,local_18);
  *(ulonglong *)(lVar1 + 0x68) = CONCAT44(uStack_c,uStack_10);
  return;
}



// FUNCTION 143367aa0 FUN_143367aa0 body=503 status=ok
// SIG undefined FUN_143367aa0(void)

void FUN_143367aa0(longlong *param_1,Matrix2x4<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  undefined8 *puVar6;
  float *pfVar7;
  undefined8 local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  longlong lStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  if ((param_1[9] != 0) && (lVar5 = FUN_1432cd1e0(), (*(ushort *)(lVar5 + 10) >> 9 & 1) != 0)) {
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x20))(param_1);
    local_a8 = *puVar6;
    lStack_a0 = puVar6[1];
    local_98 = puVar6[2];
    lStack_90 = puVar6[3];
    local_88 = puVar6[4];
    uStack_80 = puVar6[5];
    local_78 = local_a8;
    uStack_70 = lStack_a0;
    local_68 = local_98;
    uStack_60 = lStack_90;
    local_58 = local_88;
    uStack_50 = uStack_80;
    Scaleform::Render::Matrix3x4<float>::MultiplyMatrix
              ((Matrix3x4<float> *)&local_a8,(Matrix3x4<float> *)&local_78,param_2);
    (**(code **)(*param_1 + 0x28))(param_1,&local_a8);
    return;
  }
  pfVar7 = (float *)(**(code **)(*param_1 + 0x10))(param_1);
  fVar1 = *pfVar7;
  fVar2 = pfVar7[1];
  fVar3 = pfVar7[4];
  fVar4 = pfVar7[5];
  local_98 = CONCAT44(*(float *)(param_2 + 0x14) * fVar4 + *(float *)(param_2 + 4) * fVar3,
                      *(float *)(param_2 + 0x10) * fVar4 + *(float *)param_2 * fVar3);
  local_a8 = CONCAT44(*(float *)(param_2 + 0x14) * fVar2 + *(float *)(param_2 + 4) * fVar1,
                      *(float *)(param_2 + 0x10) * fVar2 + *(float *)param_2 * fVar1);
  lStack_a0 = (ulonglong)
              (uint)(pfVar7[3] +
                    *(float *)(param_2 + 0x1c) * fVar2 + *(float *)(param_2 + 0xc) * fVar1) << 0x20;
  lStack_90 = (ulonglong)
              (uint)(pfVar7[7] +
                    *(float *)(param_2 + 0x1c) * fVar4 + *(float *)(param_2 + 0xc) * fVar3) << 0x20;
  (**(code **)(*param_1 + 0x18))(param_1,&local_a8);
  return;
}



// FUNCTION 143367ca0 GetBlendMode body=70 status=ok
// SIG undefined GetBlendMode(void)

uint Scaleform::GFx::DisplayObjectBase::GetBlendMode(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14336b350();
  if (lVar1 == 0) {
    return (uint)*(byte *)(param_1 + 0x6c);
  }
  uVar2 = FUN_14336b350(param_1);
  lVar1 = FUN_143362af0(uVar2,1);
  if (lVar1 != 0) {
    return *(uint *)(lVar1 + 8);
  }
  return 0;
}



// FUNCTION 143367cf0 FUN_143367cf0 body=65 status=ok
// SIG undefined FUN_143367cf0(void)

void FUN_143367cf0(longlong param_1,int param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = (undefined1)param_2;
  if (param_2 == 1) {
    param_2 = 0;
  }
  uVar2 = FUN_14336b350();
  FUN_143362c30(uVar2,param_2);
  *(undefined1 *)(param_1 + 0x6c) = uVar1;
  return;
}



// FUNCTION 143367d50 IsAncestor body=36 status=ok
// SIG undefined IsAncestor(void)

undefined8 Scaleform::GFx::DisplayObjectBase::IsAncestor(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x38);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (lVar1 == param_1) break;
    lVar1 = *(longlong *)(lVar1 + 0x38);
  }
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}



// FUNCTION 143367d80 FUN_143367d80 body=30 status=ok
// SIG undefined FUN_143367d80(void)

void FUN_143367d80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14336b350();
  FUN_143362b20(uVar1,param_2);
  return;
}



// FUNCTION 143367db0 FUN_143367db0 body=86 status=ok
// SIG undefined FUN_143367db0(void)

undefined4 * FUN_143367db0(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar1 = FUN_14336b350();
  lVar2 = FUN_143362af0(uVar1,2);
  if (lVar2 == 0) {
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar2 + 8);
    uVar3 = *(undefined4 *)(lVar2 + 0x10);
    uVar4 = *(undefined4 *)(lVar2 + 0x14);
    uVar5 = *(undefined4 *)(lVar2 + 0x18);
    uVar6 = *(undefined4 *)(lVar2 + 0x1c);
  }
  *param_2 = uVar3;
  param_2[1] = uVar4;
  param_2[2] = uVar5;
  param_2[3] = uVar6;
  return param_2;
}



// FUNCTION 143367e10 FUN_143367e10 body=451 status=ok
// SIG undefined FUN_143367e10(void)

undefined8 FUN_143367e10(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  float *pfVar6;
  Matrix2x4<float> *pMVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 local_res8 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  plVar1 = (longlong *)param_1[7];
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))();
  local_48 = *puVar3;
  local_44 = puVar3[1];
  local_40 = puVar3[2];
  local_3c = puVar3[3];
  local_38 = puVar3[4];
  local_34 = puVar3[5];
  local_30 = puVar3[6];
  local_2c = puVar3[7];
  while( true ) {
    if (plVar1 == (longlong *)0x0) {
      return 0;
    }
    uVar4 = FUN_14336b350(plVar1);
    lVar5 = FUN_143362af0(uVar4,2);
    if (lVar5 == 0) {
      pfVar6 = (float *)&local_68;
      local_68 = 0;
      uStack_60 = 0;
    }
    else {
      pfVar6 = (float *)&local_78;
      local_78 = *(undefined8 *)(*(longlong *)(lVar5 + 8) + 0x10);
      uStack_70 = *(undefined8 *)(*(longlong *)(lVar5 + 8) + 0x18);
    }
    if ((pfVar6[2] <= *pfVar6) || (bVar2 = false, pfVar6[3] <= pfVar6[1])) {
      bVar2 = true;
    }
    if (!bVar2) break;
    pMVar7 = (Matrix2x4<float> *)(**(code **)(*plVar1 + 0x10))();
    Scaleform::Render::Matrix2x4<float>::Append((Matrix2x4<float> *)&local_48,pMVar7);
    plVar1 = (longlong *)plVar1[7];
  }
  local_28 = 0x3f800000;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  local_18 = 0;
  uStack_14 = 0x3f800000;
  uStack_10 = 0;
  uStack_c = 0;
  (**(code **)(*plVar1 + 0x1f8))(plVar1,local_58,&local_28);
  local_res8[0] = 0x47;
  lVar5 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x1c0,local_res8);
  if (lVar5 == 0) {
    return 0;
  }
  uVar4 = FUN_14336b350(plVar1);
  lVar8 = FUN_143362af0(uVar4,2);
  if (lVar8 == 0) {
    uVar9 = 0;
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = 0;
  }
  else {
    lVar8 = *(longlong *)(lVar8 + 8);
    uVar9 = *(undefined4 *)(lVar8 + 0x10);
    uVar10 = *(undefined4 *)(lVar8 + 0x14);
    uVar11 = *(undefined4 *)(lVar8 + 0x18);
    uVar12 = *(undefined4 *)(lVar8 + 0x1c);
  }
  local_78 = CONCAT44(uVar10,uVar9);
  uStack_70 = CONCAT44(uVar12,uVar11);
  local_68 = CONCAT44(uVar10,uVar9);
  uStack_60 = CONCAT44(uVar12,uVar11);
  uVar4 = (**(code **)(*plVar1 + 0x10))(plVar1);
  uVar4 = FUN_1433cf880(lVar5,&local_68,uVar4,&local_48,local_58);
  return uVar4;
}



// FUNCTION 143367fe0 FUN_143367fe0 body=427 status=ok
// SIG undefined FUN_143367fe0(void)

void FUN_143367fe0(longlong *param_1,ulonglong param_2)

{
  float *pfVar1;
  double dVar2;
  undefined4 uVar3;
  uint uVar4;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  uVar4 = (uint)(param_2 >> 0x20);
  uVar3 = (undefined4)param_2;
  if (((uVar4 & 0x7ff00000) != 0x7ff00000) || ((param_2 & 0xfffffffffffff) == 0)) {
    if ((param_2 == 0xfff0000000000000) || (param_2 == 0x7ff0000000000000)) {
      uVar3 = 0;
      uVar4 = 0;
    }
    (**(code **)(*param_1 + 0x1a8))(param_1,0);
    pfVar1 = (float *)(**(code **)(*param_1 + 0x10))(param_1);
    local_38 = *pfVar1;
    local_34 = pfVar1[1];
    local_30 = pfVar1[2];
    local_2c = pfVar1[3];
    local_28 = pfVar1[4];
    local_24 = pfVar1[5];
    local_20 = pfVar1[6];
    local_1c = pfVar1[7];
    dVar2 = _guard_xfg_dispatch_icall_nop((double)CONCAT44(uVar4,uVar3) * 20.0);
    *(int *)param_1[10] = (int)dVar2;
    local_2c = (float)*(int *)param_1[10];
    if (((((-3.4028235e+38 <= local_38) && (local_38 <= 3.4028235e+38)) &&
         (-3.4028235e+38 <= local_34)) &&
        ((((local_34 <= 3.4028235e+38 && (-3.4028235e+38 <= local_30)) &&
          ((local_30 <= 3.4028235e+38 &&
           ((-3.4028235e+38 <= local_2c && (local_2c <= 3.4028235e+38)))))) &&
         (-3.4028235e+38 <= local_28)))) &&
       (((((local_28 <= 3.4028235e+38 && (-3.4028235e+38 <= local_24)) &&
          (local_24 <= 3.4028235e+38)) &&
         ((-3.4028235e+38 <= local_20 && (local_20 <= 3.4028235e+38)))) &&
        ((-3.4028235e+38 <= local_1c && (local_1c <= 3.4028235e+38)))))) {
      (**(code **)(*param_1 + 0x18))(param_1,&local_38);
    }
  }
  return;
}



// FUNCTION 1433681a0 FUN_1433681a0 body=118 status=ok
// SIG undefined FUN_1433681a0(void)

double FUN_1433681a0(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_14336b690();
  return (double)*piVar1 * 0.05;
}



// FUNCTION 143368220 FUN_143368220 body=429 status=ok
// SIG undefined FUN_143368220(void)

void FUN_143368220(longlong *param_1,ulonglong param_2)

{
  float *pfVar1;
  double dVar2;
  undefined4 uVar3;
  uint uVar4;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  uVar4 = (uint)(param_2 >> 0x20);
  uVar3 = (undefined4)param_2;
  if (((uVar4 & 0x7ff00000) != 0x7ff00000) || ((param_2 & 0xfffffffffffff) == 0)) {
    if ((param_2 == 0xfff0000000000000) || (param_2 == 0x7ff0000000000000)) {
      uVar3 = 0;
      uVar4 = 0;
    }
    (**(code **)(*param_1 + 0x1a8))(param_1,0);
    pfVar1 = (float *)(**(code **)(*param_1 + 0x10))(param_1);
    local_38 = *pfVar1;
    local_34 = pfVar1[1];
    local_30 = pfVar1[2];
    local_2c = pfVar1[3];
    local_28 = pfVar1[4];
    local_24 = pfVar1[5];
    local_20 = pfVar1[6];
    local_1c = pfVar1[7];
    dVar2 = _guard_xfg_dispatch_icall_nop((double)CONCAT44(uVar4,uVar3) * 20.0);
    *(int *)(param_1[10] + 4) = (int)dVar2;
    local_1c = (float)*(int *)(param_1[10] + 4);
    if (((((-3.4028235e+38 <= local_38) && (local_38 <= 3.4028235e+38)) &&
         (-3.4028235e+38 <= local_34)) &&
        ((((local_34 <= 3.4028235e+38 && (-3.4028235e+38 <= local_30)) &&
          ((local_30 <= 3.4028235e+38 &&
           ((-3.4028235e+38 <= local_2c && (local_2c <= 3.4028235e+38)))))) &&
         (-3.4028235e+38 <= local_28)))) &&
       (((((local_28 <= 3.4028235e+38 && (-3.4028235e+38 <= local_24)) &&
          (local_24 <= 3.4028235e+38)) &&
         ((-3.4028235e+38 <= local_20 && (local_20 <= 3.4028235e+38)))) &&
        ((-3.4028235e+38 <= local_1c && (local_1c <= 3.4028235e+38)))))) {
      (**(code **)(*param_1 + 0x18))(param_1,&local_38);
    }
  }
  return;
}



// FUNCTION 1433683e0 FUN_1433683e0 body=119 status=ok
// SIG undefined FUN_1433683e0(void)

double FUN_1433683e0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14336b690();
  return (double)*(int *)(lVar1 + 4) * 0.05;
}



// FUNCTION 143368460 FUN_143368460 body=182 status=ok
// SIG undefined FUN_143368460(void)

void FUN_143368460(longlong *param_1,ulonglong param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = (uint)(param_2 >> 0x20);
  uVar2 = (undefined4)param_2;
  if (((uVar3 & 0x7ff00000) == 0x7ff00000) && ((param_2 & 0xfffffffffffff) != 0)) {
    return;
  }
  if ((param_2 == 0xfff0000000000000) || (param_2 == 0x7ff0000000000000)) {
    uVar2 = 0;
    uVar3 = 0;
  }
  if ((param_1[4] == 0) ||
     (cVar1 = (**(code **)(**(longlong **)(param_1[4] + 0x10) + 0x230))(), cVar1 == '\0')) {
    (**(code **)(*param_1 + 0x1a8))(param_1,0);
  }
  else {
    FUN_14336b4f0(param_1);
  }
  *(ulonglong *)(param_1[10] + 0x40) = CONCAT44(uVar3,uVar2);
  (**(code **)(*param_1 + 0x68))(param_1);
  return;
}



// FUNCTION 143368520 FUN_143368520 body=107 status=ok
// SIG undefined FUN_143368520(void)

undefined8 FUN_143368520(void)

{
  longlong lVar1;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_60 = 0x4059000000000000;
  local_58 = 0x4059000000000000;
  uStack_50 = 0;
  local_48 = 0x3f800000;
  uStack_40 = 0;
  local_38 = 0x3f80000000000000;
  uStack_30 = 0;
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0x40590000;
  local_18 = 0;
  uStack_10 = 0;
  local_68 = 0;
  lVar1 = FUN_14336b690(0,&local_68);
  return *(undefined8 *)(lVar1 + 0x40);
}



// FUNCTION 1433685a0 FUN_1433685a0 body=679 status=ok
// SIG undefined FUN_1433685a0(void)

void FUN_1433685a0(longlong *param_1,double param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  double dVar10;
  undefined4 uVar13;
  double dVar11;
  double dVar12;
  undefined4 uVar14;
  undefined4 uVar15;
  float local_98;
  float local_94;
  undefined4 local_90;
  undefined4 local_8c;
  float local_88;
  float local_84;
  undefined4 local_80;
  undefined4 local_7c;
  
  uVar15 = (undefined4)((ulonglong)param_2 >> 0x20);
  if ((((((ulonglong)param_2 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
       (((ulonglong)param_2 & 0xfffffffffffff) == 0)) && (param_2 != -INFINITY)) &&
     (param_2 != INFINITY)) {
    (**(code **)(*param_1 + 0x1a8))(param_1,0);
    *(double *)(param_1[10] + 8) = param_2;
    if ((param_1[9] != 0) && (lVar7 = FUN_1432cd1e0(), (*(ushort *)(lVar7 + 10) >> 9 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000143368670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x68))(param_1);
      return;
    }
    lVar8 = (**(code **)(*param_1 + 0x10))(param_1);
    lVar7 = param_1[10];
    fVar1 = *(float *)(lVar7 + 0x20);
    fVar2 = *(float *)(lVar7 + 0x24);
    local_90 = *(undefined4 *)(lVar7 + 0x28);
    fVar3 = *(float *)(lVar7 + 0x30);
    fVar4 = *(float *)(lVar7 + 0x34);
    local_80 = *(undefined4 *)(lVar7 + 0x38);
    local_8c = *(undefined4 *)(lVar8 + 0xc);
    local_7c = *(undefined4 *)(lVar8 + 0x1c);
    local_98 = fVar1;
    local_94 = fVar2;
    local_88 = fVar3;
    local_84 = fVar4;
    dVar10 = _guard_xfg_dispatch_icall_nop
                       ((double)fVar3 * (double)fVar3 + (double)fVar1 * (double)fVar1);
    uVar9 = SUB84(dVar10,0);
    uVar13 = (undefined4)((ulonglong)dVar10 >> 0x20);
    if ((dVar10 == 0.0) || (uVar14 = SUB84(param_2,0), 1e+16 < param_2)) {
      uVar9 = 0;
      uVar13 = 0x3ff00000;
      uVar15 = 0;
      uVar14 = 0;
    }
    dVar12 = (double)fVar2;
    dVar10 = *(double *)(lVar7 + 0x18);
    dVar5 = (double)fVar4;
    dVar11 = _guard_xfg_dispatch_icall_nop((double)fVar3,(double)fVar1);
    dVar12 = _guard_xfg_dispatch_icall_nop(dVar5 * dVar5 + dVar12 * dVar12);
    FUN_14336d9c0(&local_98,
                  (float)((double)CONCAT44(uVar15,uVar14) / ((double)CONCAT44(uVar13,uVar9) * 100.0)
                         ),(float)(*(double *)(lVar7 + 0x10) / (dVar12 * 100.0)),
                  (float)((dVar10 * 3.141592653589793) / 180.0 - dVar11));
    bVar6 = Scaleform::Render::Matrix2x4<float>::IsValid((Matrix2x4<float> *)&local_98);
    if (bVar6) {
      (**(code **)(*param_1 + 0x18))(param_1,&local_98);
    }
  }
  return;
}



// FUNCTION 143368850 FUN_143368850 body=107 status=ok
// SIG undefined FUN_143368850(void)

undefined8 FUN_143368850(void)

{
  longlong lVar1;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_60 = 0x4059000000000000;
  local_58 = 0x4059000000000000;
  uStack_50 = 0;
  local_48 = 0x3f800000;
  uStack_40 = 0;
  local_38 = 0x3f80000000000000;
  uStack_30 = 0;
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0x40590000;
  local_18 = 0;
  uStack_10 = 0;
  local_68 = 0;
  lVar1 = FUN_14336b690(0,&local_68);
  return *(undefined8 *)(lVar1 + 8);
}



// FUNCTION 1433688d0 FUN_1433688d0 body=674 status=ok
// SIG undefined FUN_1433688d0(void)

void FUN_1433688d0(longlong *param_1,double param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  double dVar8;
  undefined4 uVar11;
  double dVar9;
  double dVar10;
  undefined4 uVar12;
  undefined4 uVar13;
  float local_98;
  float local_94;
  undefined4 local_90;
  undefined4 local_8c;
  float local_88;
  float local_84;
  undefined4 local_80;
  undefined4 local_7c;
  
  uVar13 = (undefined4)((ulonglong)param_2 >> 0x20);
  if ((((((ulonglong)param_2 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
       (((ulonglong)param_2 & 0xfffffffffffff) == 0)) && (param_2 != -INFINITY)) &&
     (param_2 != INFINITY)) {
    (**(code **)(*param_1 + 0x1a8))(param_1,0);
    *(double *)(param_1[10] + 0x10) = param_2;
    if ((param_1[9] != 0) && (lVar5 = FUN_1432cd1e0(), (*(ushort *)(lVar5 + 10) >> 9 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001433689a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x68))(param_1);
      return;
    }
    lVar6 = (**(code **)(*param_1 + 0x10))(param_1);
    lVar5 = param_1[10];
    fVar1 = *(float *)(lVar5 + 0x20);
    local_94 = *(float *)(lVar5 + 0x24);
    local_90 = *(undefined4 *)(lVar5 + 0x28);
    fVar2 = *(float *)(lVar5 + 0x30);
    local_84 = *(float *)(lVar5 + 0x34);
    local_80 = *(undefined4 *)(lVar5 + 0x38);
    local_8c = *(undefined4 *)(lVar6 + 0xc);
    local_7c = *(undefined4 *)(lVar6 + 0x1c);
    local_98 = fVar1;
    local_88 = fVar2;
    dVar8 = _guard_xfg_dispatch_icall_nop
                      ((double)local_84 * (double)local_84 + (double)local_94 * (double)local_94);
    uVar7 = SUB84(dVar8,0);
    uVar11 = (undefined4)((ulonglong)dVar8 >> 0x20);
    if ((dVar8 == 0.0) || (uVar12 = SUB84(param_2,0), 1e+16 < param_2)) {
      uVar7 = 0;
      uVar11 = 0x3ff00000;
      uVar13 = 0;
      uVar12 = 0;
    }
    dVar8 = *(double *)(lVar5 + 0x18);
    dVar9 = _guard_xfg_dispatch_icall_nop((double)fVar2,(double)fVar1);
    dVar3 = (double)CONCAT44(uVar13,uVar12) / ((double)CONCAT44(uVar11,uVar7) * 100.0);
    dVar10 = _guard_xfg_dispatch_icall_nop
                       ((double)fVar1 * (double)fVar1 + (double)fVar2 * (double)fVar2);
    FUN_14336d9c0(&local_98,(float)(*(double *)(lVar5 + 8) / (dVar10 * 100.0)),
                  CONCAT44((int)((ulonglong)dVar3 >> 0x20),(float)dVar3),
                  (float)((dVar8 * 3.141592653589793) / 180.0 - dVar9));
    bVar4 = Scaleform::Render::Matrix2x4<float>::IsValid((Matrix2x4<float> *)&local_98);
    if (bVar4) {
      (**(code **)(*param_1 + 0x18))(param_1,&local_98);
    }
  }
  return;
}



// FUNCTION 143368b80 FUN_143368b80 body=107 status=ok
// SIG undefined FUN_143368b80(void)

undefined8 FUN_143368b80(void)

{
  longlong lVar1;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_60 = 0x4059000000000000;
  local_58 = 0x4059000000000000;
  uStack_50 = 0;
  local_48 = 0x3f800000;
  uStack_40 = 0;
  local_38 = 0x3f80000000000000;
  uStack_30 = 0;
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0x40590000;
  local_18 = 0;
  uStack_10 = 0;
  local_68 = 0;
  lVar1 = FUN_14336b690(0,&local_68);
  return *(undefined8 *)(lVar1 + 0x10);
}



// FUNCTION 143368c00 FUN_143368c00 body=179 status=ok
// SIG undefined FUN_143368c00(void)

void FUN_143368c00(longlong *param_1,ulonglong param_2)

{
  char cVar1;
  
  if ((((uint)(param_2 >> 0x20) & 0x7ff00000) == 0x7ff00000) && ((param_2 & 0xfffffffffffff) != 0))
  {
    return;
  }
  if (param_2 == 0xfff0000000000000) {
    return;
  }
  if (param_2 != 0x7ff0000000000000) {
    if ((param_1[4] == 0) ||
       (cVar1 = (**(code **)(**(longlong **)(param_1[4] + 0x10) + 0x230))(), cVar1 == '\0')) {
      (**(code **)(*param_1 + 0x1a8))(param_1,0);
    }
    else {
      FUN_14336b4f0(param_1);
    }
    *(ulonglong *)(param_1[10] + 0x48) = param_2;
    (**(code **)(*param_1 + 0x68))(param_1);
    return;
  }
  return;
}



// FUNCTION 143368cc0 FUN_143368cc0 body=107 status=ok
// SIG undefined FUN_143368cc0(void)

undefined8 FUN_143368cc0(void)

{
  longlong lVar1;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_60 = 0x4059000000000000;
  local_58 = 0x4059000000000000;
  uStack_50 = 0;
  local_48 = 0x3f800000;
  uStack_40 = 0;
  local_38 = 0x3f80000000000000;
  uStack_30 = 0;
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0x40590000;
  local_18 = 0;
  uStack_10 = 0;
  local_68 = 0;
  lVar1 = FUN_14336b690(0,&local_68);
  return *(undefined8 *)(lVar1 + 0x48);
}



// FUNCTION 143368d40 FUN_143368d40 body=746 status=ok
// SIG undefined FUN_143368d40(void)

void FUN_143368d40(longlong *param_1,double param_2)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  
  if ((((ulonglong)param_2 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
     (((ulonglong)param_2 & 0xfffffffffffff) == 0)) {
    (**(code **)(*param_1 + 0x1a8))(param_1,0);
    dVar5 = _guard_xfg_dispatch_icall_nop(param_2,360.0);
    if (dVar5 <= 180.0) {
      if (dVar5 < -180.0) {
        dVar5 = dVar5 + 360.0;
      }
    }
    else {
      dVar5 = dVar5 + -360.0;
    }
    if (*(char *)(param_1[4] + 0x20) == '\x01') {
      *(double *)(param_1[10] + 0x18) = dVar5;
    }
    else {
      *(double *)(param_1[10] + 0x18) = param_2;
    }
    if ((param_1[9] == 0) || (lVar3 = FUN_1432cd1e0(), (*(ushort *)(lVar3 + 10) >> 9 & 1) == 0)) {
      lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
      lVar3 = param_1[10];
      local_78 = *(float *)(lVar3 + 0x20);
      local_74 = *(float *)(lVar3 + 0x24);
      local_70 = *(float *)(lVar3 + 0x28);
      local_68 = *(float *)(lVar3 + 0x30);
      local_64 = *(float *)(lVar3 + 0x34);
      local_60 = *(float *)(lVar3 + 0x38);
      local_6c = *(float *)(lVar4 + 0xc);
      local_5c = *(float *)(lVar4 + 0x1c);
      dVar1 = (double)local_74;
      dVar7 = (double)local_64;
      dVar2 = (double)local_78;
      dVar8 = (double)local_68;
      dVar6 = _guard_xfg_dispatch_icall_nop((double)local_68,(double)local_78);
      dVar7 = _guard_xfg_dispatch_icall_nop(dVar7 * dVar7 + dVar1 * dVar1);
      dVar1 = *(double *)(lVar3 + 0x10);
      dVar8 = _guard_xfg_dispatch_icall_nop(dVar2 * dVar2 + dVar8 * dVar8);
      FUN_14336d9c0(&local_78,(float)(*(double *)(lVar3 + 8) / (dVar8 * 100.0)),
                    (float)(dVar1 / (dVar7 * 100.0)),
                    (float)((dVar5 * 3.141592653589793) / 180.0 - dVar6));
      if (((-3.4028235e+38 <= local_78) &&
          (((local_78 <= 3.4028235e+38 && (-3.4028235e+38 <= local_74)) &&
           (local_74 <= 3.4028235e+38)))) &&
         ((((-3.4028235e+38 <= local_70 && (local_70 <= 3.4028235e+38)) &&
           (-3.4028235e+38 <= local_6c)) &&
          (((local_6c <= 3.4028235e+38 && (-3.4028235e+38 <= local_68)) &&
           (((local_68 <= 3.4028235e+38 &&
             ((((-3.4028235e+38 <= local_64 && (local_64 <= 3.4028235e+38)) &&
               (-3.4028235e+38 <= local_60)) &&
              ((local_60 <= 3.4028235e+38 && (-3.4028235e+38 <= local_5c)))))) &&
            (local_5c <= 3.4028235e+38)))))))) {
        (**(code **)(*param_1 + 0x18))(param_1,&local_78);
      }
    }
    else {
      (**(code **)(*param_1 + 0x68))(param_1);
    }
  }
  return;
}



// FUNCTION 143369030 FUN_143369030 body=107 status=ok
// SIG undefined FUN_143369030(void)

undefined8 FUN_143369030(void)

{
  longlong lVar1;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_60 = 0x4059000000000000;
  local_58 = 0x4059000000000000;
  uStack_50 = 0;
  local_48 = 0x3f800000;
  uStack_40 = 0;
  local_38 = 0x3f80000000000000;
  uStack_30 = 0;
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0x40590000;
  local_18 = 0;
  uStack_10 = 0;
  local_68 = 0;
  lVar1 = FUN_14336b690(0,&local_68);
  return *(undefined8 *)(lVar1 + 0x18);
}



// FUNCTION 1433690b0 FUN_1433690b0 body=238 status=ok
// SIG undefined FUN_1433690b0(void)

void FUN_1433690b0(longlong *param_1,double param_2)

{
  char cVar1;
  double dVar2;
  
  if ((((ulonglong)param_2 & 0x7ff0000000000000) == 0x7ff0000000000000) &&
     (((ulonglong)param_2 & 0xfffffffffffff) != 0)) {
    return;
  }
  if ((param_1[4] == 0) ||
     (cVar1 = (**(code **)(**(longlong **)(param_1[4] + 0x10) + 0x230))(), cVar1 == '\0')) {
    (**(code **)(*param_1 + 0x1a8))(param_1,0);
  }
  else {
    FUN_14336b4f0(param_1);
  }
  if (*(char *)(param_1[4] + 0x20) == '\x01') {
    dVar2 = _guard_xfg_dispatch_icall_nop(param_2,360.0);
    if (dVar2 <= 180.0) {
      if (dVar2 < -180.0) {
        dVar2 = dVar2 + 360.0;
      }
      *(double *)(param_1[10] + 0x50) = dVar2;
    }
    else {
      *(double *)(param_1[10] + 0x50) = dVar2 + -360.0;
    }
  }
  else {
    *(double *)(param_1[10] + 0x50) = param_2;
  }
  (**(code **)(*param_1 + 0x68))(param_1);
  return;
}



// FUNCTION 1433691b0 FUN_1433691b0 body=107 status=ok
// SIG undefined FUN_1433691b0(void)

undefined8 FUN_1433691b0(void)

{
  longlong lVar1;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_60 = 0x4059000000000000;
  local_58 = 0x4059000000000000;
  uStack_50 = 0;
  local_48 = 0x3f800000;
  uStack_40 = 0;
  local_38 = 0x3f80000000000000;
  uStack_30 = 0;
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0x40590000;
  local_18 = 0;
  uStack_10 = 0;
  local_68 = 0;
  lVar1 = FUN_14336b690(0,&local_68);
  return *(undefined8 *)(lVar1 + 0x50);
}



// FUNCTION 143369230 FUN_143369230 body=238 status=ok
// SIG undefined FUN_143369230(void)

void FUN_143369230(longlong *param_1,double param_2)

{
  char cVar1;
  double dVar2;
  
  if ((((ulonglong)param_2 & 0x7ff0000000000000) == 0x7ff0000000000000) &&
     (((ulonglong)param_2 & 0xfffffffffffff) != 0)) {
    return;
  }
  if ((param_1[4] == 0) ||
     (cVar1 = (**(code **)(**(longlong **)(param_1[4] + 0x10) + 0x230))(), cVar1 == '\0')) {
    (**(code **)(*param_1 + 0x1a8))(param_1,0);
  }
  else {
    FUN_14336b4f0(param_1);
  }
  if (*(char *)(param_1[4] + 0x20) == '\x01') {
    dVar2 = _guard_xfg_dispatch_icall_nop(param_2,360.0);
    if (dVar2 <= 180.0) {
      if (dVar2 < -180.0) {
        dVar2 = dVar2 + 360.0;
      }
      *(double *)(param_1[10] + 0x58) = dVar2;
    }
    else {
      *(double *)(param_1[10] + 0x58) = dVar2 + -360.0;
    }
  }
  else {
    *(double *)(param_1[10] + 0x58) = param_2;
  }
  (**(code **)(*param_1 + 0x68))(param_1);
  return;
}



// FUNCTION 143369330 FUN_143369330 body=107 status=ok
// SIG undefined FUN_143369330(void)

undefined8 FUN_143369330(void)

{
  longlong lVar1;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_60 = 0x4059000000000000;
  local_58 = 0x4059000000000000;
  uStack_50 = 0;
  local_48 = 0x3f800000;
  uStack_40 = 0;
  local_38 = 0x3f80000000000000;
  uStack_30 = 0;
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0x40590000;
  local_18 = 0;
  uStack_10 = 0;
  local_68 = 0;
  lVar1 = FUN_14336b690(0,&local_68);
  return *(undefined8 *)(lVar1 + 0x58);
}



// FUNCTION 1433693b0 FUN_1433693b0 body=201 status=ok
// SIG undefined FUN_1433693b0(void)

void FUN_1433693b0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 local_res10;
  
  uVar3 = (uint)(param_2 >> 0x20);
  uVar4 = (undefined4)param_2;
  if (((uVar3 & 0x7ff00000) != 0x7ff00000) || ((param_2 & 0xfffffffffffff) == 0)) {
    if ((param_2 == 0xfff0000000000000) || (uVar5 = uVar3, param_2 == 0x7ff0000000000000)) {
      uVar4 = 0;
      uVar5 = 0;
    }
    local_res10 = param_2;
    if (*(longlong *)(param_1 + 0x58) == 0) {
      local_res10 = CONCAT44(uVar3,0x142);
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x50,&local_res10);
      uVar2 = 0;
      if (lVar1 != 0) {
        uVar2 = Scaleform::GFx::DisplayObjectBase::PerspectiveDataType::PerspectiveDataType(lVar1);
      }
      *(undefined8 *)(param_1 + 0x58) = uVar2;
    }
    if (**(double **)(param_1 + 0x58) != (double)CONCAT44(uVar5,uVar4)) {
      **(double **)(param_1 + 0x58) = (double)CONCAT44(uVar5,uVar4);
      FUN_1433670e0(param_1);
    }
  }
  return;
}



// FUNCTION 1433694a0 FUN_1433694a0 body=207 status=ok
// SIG undefined FUN_1433694a0(void)

void FUN_1433694a0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 local_res10;
  
  uVar3 = (uint)(param_2 >> 0x20);
  uVar4 = (undefined4)param_2;
  if (((uVar3 & 0x7ff00000) != 0x7ff00000) || ((param_2 & 0xfffffffffffff) == 0)) {
    if ((param_2 == 0xfff0000000000000) || (uVar5 = uVar3, param_2 == 0x7ff0000000000000)) {
      uVar4 = 0;
      uVar5 = 0;
    }
    local_res10 = param_2;
    if (*(longlong *)(param_1 + 0x58) == 0) {
      local_res10 = CONCAT44(uVar3,0x142);
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x50,&local_res10);
      uVar2 = 0;
      if (lVar1 != 0) {
        uVar2 = Scaleform::GFx::DisplayObjectBase::PerspectiveDataType::PerspectiveDataType(lVar1);
      }
      *(undefined8 *)(param_1 + 0x58) = uVar2;
    }
    if (*(double *)(*(longlong *)(param_1 + 0x58) + 8) != (double)CONCAT44(uVar5,uVar4)) {
      *(ulonglong *)(*(longlong *)(param_1 + 0x58) + 8) = CONCAT44(uVar5,uVar4);
      FUN_1433670e0(param_1);
    }
  }
  return;
}



// FUNCTION 1433695a0 FUN_1433695a0 body=332 status=ok
// SIG undefined FUN_1433695a0(void)

void FUN_1433695a0(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  undefined8 uVar4;
  double local_res10;
  
  fVar1 = *param_2;
  if ((((ulonglong)(double)fVar1 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
     (((ulonglong)(double)fVar1 & 0xfffffffffffff) == 0)) {
    fVar2 = param_2[1];
    if ((((ulonglong)(double)fVar2 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
       (((ulonglong)(double)fVar2 & 0xfffffffffffff) == 0)) {
      uVar4 = 0;
      if (((double)fVar1 == -INFINITY) || ((double)fVar1 == INFINITY)) {
        *param_2 = 0.0;
      }
      if (((double)fVar2 == -INFINITY) || ((double)fVar2 == INFINITY)) {
        param_2[1] = 0.0;
      }
      local_res10 = (double)fVar2;
      if (*(longlong *)(param_1 + 0x58) == 0) {
        local_res10 = (double)CONCAT44(local_res10._4_4_,0x142);
        lVar3 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x50,&local_res10);
        if (lVar3 != 0) {
          uVar4 = Scaleform::GFx::DisplayObjectBase::PerspectiveDataType::PerspectiveDataType(lVar3)
          ;
        }
        *(undefined8 *)(param_1 + 0x58) = uVar4;
      }
      lVar3 = *(longlong *)(param_1 + 0x58);
      fVar1 = *param_2;
      if ((*(float *)(lVar3 + 0x10) != fVar1) || (*(float *)(lVar3 + 0x14) != param_2[1])) {
        *(float *)(lVar3 + 0x14) = param_2[1];
        *(float *)(lVar3 + 0x10) = fVar1;
        FUN_1433670e0(param_1);
      }
    }
  }
  return;
}



// FUNCTION 143369750 FUN_143369750 body=1097 status=ok
// SIG undefined FUN_143369750(void)

void FUN_143369750(longlong *param_1,ulonglong param_2)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  float *pfVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float local_d8;
  float local_d4;
  undefined8 local_d0;
  float local_c8;
  float local_c4;
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
  
  uVar10 = (undefined4)param_2;
  uVar11 = (undefined4)(param_2 >> 0x20);
  if ((((param_2 & 0x7ff0000000000000) != 0x7ff0000000000000) || ((param_2 & 0xfffffffffffff) == 0))
     && (param_2 != 0xfff0000000000000)) {
    if (param_2 == 0x7ff0000000000000) {
      uVar10 = 0;
      uVar11 = 0;
    }
    (**(code **)(*param_1 + 0x1a8))(param_1,0);
    lVar3 = param_1[10];
    local_b8 = *(float *)(lVar3 + 0x20);
    local_b4 = *(float *)(lVar3 + 0x24);
    local_b0 = *(float *)(lVar3 + 0x28);
    local_ac = *(float *)(lVar3 + 0x2c);
    local_a8 = *(float *)(lVar3 + 0x30);
    local_a4 = *(float *)(lVar3 + 0x34);
    local_a0 = *(float *)(lVar3 + 0x38);
    local_9c = *(float *)(lVar3 + 0x3c);
    lVar3 = (**(code **)(*param_1 + 0x10))(param_1);
    local_ac = *(float *)(lVar3 + 0xc);
    local_9c = *(float *)(lVar3 + 0x1c);
    local_94 = local_b4;
    local_90 = local_b0;
    local_84 = local_a4;
    local_80 = local_a0;
    local_98 = local_b8;
    local_88 = local_a8;
    dVar1 = *(double *)(param_1[10] + 0x18);
    local_8c = local_ac;
    local_7c = local_9c;
    dVar6 = _guard_xfg_dispatch_icall_nop((double)local_a8,(double)local_b8);
    fVar9 = (float)((dVar1 * 3.141592653589793) / 180.0 - dVar6);
    fVar5 = _guard_xfg_dispatch_icall_nop(fVar9);
    local_c8 = _guard_xfg_dispatch_icall_nop(fVar9);
    local_d4 = -local_c8;
    fVar9 = 0.0;
    local_d0 = 0;
    local_c0 = 0;
    local_d8 = fVar5;
    local_c4 = fVar5;
    Scaleform::Render::Matrix2x4<float>::Append
              ((Matrix2x4<float> *)&local_98,(Matrix2x4<float> *)&local_d8);
    pfVar4 = (float *)(**(code **)(*param_1 + 0x1f0))(param_1,&local_d8,&local_98);
    if (1e-06 < ABS(pfVar4[2] - *pfVar4)) {
      fVar9 = (float)((double)CONCAT44(uVar11,uVar10) * 20.0) / (pfVar4[2] - *pfVar4);
    }
    dVar6 = _guard_xfg_dispatch_icall_nop
                      ((double)local_b8 * (double)local_b8 + (double)local_a8 * (double)local_a8);
    uVar10 = SUB84(dVar6,0);
    uVar11 = (undefined4)((ulonglong)dVar6 >> 0x20);
    dVar1 = (double)fVar9 * dVar6 * 100.0;
    *(double *)(param_1[10] + 8) = dVar1;
    if (dVar6 == 0.0) {
      uVar10 = 0;
      uVar11 = 0x3ff00000;
      dVar1 = 0.0;
    }
    lVar3 = param_1[10];
    dVar6 = *(double *)(lVar3 + 0x18);
    dVar8 = (double)local_b4;
    dVar2 = (double)local_a4;
    dVar7 = _guard_xfg_dispatch_icall_nop((double)local_a8,(double)local_b8);
    dVar8 = _guard_xfg_dispatch_icall_nop(dVar2 * dVar2 + dVar8 * dVar8);
    FUN_14336d9c0(&local_b8,(float)ABS(dVar1 / ((double)CONCAT44(uVar11,uVar10) * 100.0)),
                  (float)ABS(*(double *)(lVar3 + 0x10) / (dVar8 * 100.0)),
                  (float)((dVar6 * 3.141592653589793) / 180.0 - dVar7));
    *(ulonglong *)(lVar3 + 8) = *(ulonglong *)(lVar3 + 8) & 0x7fffffffffffffff;
    *(ulonglong *)(param_1[10] + 0x10) = *(ulonglong *)(param_1[10] + 0x10) & 0x7fffffffffffffff;
    if (((((-3.4028235e+38 <= local_b8) && (local_b8 <= 3.4028235e+38)) &&
         ((-3.4028235e+38 <= local_b4 &&
          ((local_b4 <= 3.4028235e+38 && (-3.4028235e+38 <= local_b0)))))) &&
        ((local_b0 <= 3.4028235e+38 &&
         ((((((-3.4028235e+38 <= local_ac && (local_ac <= 3.4028235e+38)) &&
             (-3.4028235e+38 <= local_a8)) &&
            ((local_a8 <= 3.4028235e+38 && (-3.4028235e+38 <= local_a4)))) &&
           ((local_a4 <= 3.4028235e+38 &&
            ((-3.4028235e+38 <= local_a0 && (local_a0 <= 3.4028235e+38)))))) &&
          (-3.4028235e+38 <= local_9c)))))) && (local_9c <= 3.4028235e+38)) {
      (**(code **)(*param_1 + 0x18))(param_1,&local_b8);
    }
  }
  return;
}



// FUNCTION 143369ba0 FUN_143369ba0 body=130 status=ok
// SIG undefined FUN_143369ba0(void)

double FUN_143369ba0(longlong *param_1)

{
  longlong lVar1;
  float *pfVar2;
  undefined8 uVar3;
  double dVar4;
  undefined1 local_18 [16];
  
  if (param_1[9] != 0) {
    lVar1 = FUN_1432cd1e0();
    if ((*(ushort *)(lVar1 + 10) >> 9 & 1) != 0) {
      pfVar2 = (float *)FUN_14336acb0(param_1,local_18);
      goto LAB_143369bf7;
    }
  }
  lVar1 = *param_1;
  uVar3 = (**(code **)(lVar1 + 0x10))(param_1);
  pfVar2 = (float *)(**(code **)(lVar1 + 0x1f0))(param_1,local_18,uVar3);
LAB_143369bf7:
  dVar4 = _guard_xfg_dispatch_icall_nop((double)(pfVar2[2] - *pfVar2) + 0.5);
  return dVar4 * 0.05;
}



// FUNCTION 143369c30 FUN_143369c30 body=1092 status=ok
// SIG undefined FUN_143369c30(void)

void FUN_143369c30(longlong *param_1,ulonglong param_2)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float local_d8;
  float local_d4;
  undefined8 local_d0;
  float local_c8;
  float local_c4;
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
  
  uVar9 = (undefined4)param_2;
  uVar10 = (undefined4)(param_2 >> 0x20);
  if ((((param_2 & 0x7ff0000000000000) != 0x7ff0000000000000) || ((param_2 & 0xfffffffffffff) == 0))
     && (param_2 != 0xfff0000000000000)) {
    if (param_2 == 0x7ff0000000000000) {
      uVar9 = 0;
      uVar10 = 0;
    }
    (**(code **)(*param_1 + 0x1a8))(param_1,0);
    lVar3 = param_1[10];
    local_b8 = *(float *)(lVar3 + 0x20);
    local_b4 = *(float *)(lVar3 + 0x24);
    local_b0 = *(float *)(lVar3 + 0x28);
    local_ac = *(float *)(lVar3 + 0x2c);
    local_a8 = *(float *)(lVar3 + 0x30);
    local_a4 = *(float *)(lVar3 + 0x34);
    local_a0 = *(float *)(lVar3 + 0x38);
    local_9c = *(float *)(lVar3 + 0x3c);
    lVar3 = (**(code **)(*param_1 + 0x10))(param_1);
    local_ac = *(float *)(lVar3 + 0xc);
    local_9c = *(float *)(lVar3 + 0x1c);
    local_94 = local_b4;
    local_90 = local_b0;
    local_84 = local_a4;
    local_80 = local_a0;
    local_98 = local_b8;
    local_88 = local_a8;
    dVar1 = *(double *)(param_1[10] + 0x18);
    local_8c = local_ac;
    local_7c = local_9c;
    dVar5 = _guard_xfg_dispatch_icall_nop((double)local_a8,(double)local_b8);
    fVar8 = (float)((dVar1 * 3.141592653589793) / 180.0 - dVar5);
    fVar4 = _guard_xfg_dispatch_icall_nop(fVar8);
    local_c8 = _guard_xfg_dispatch_icall_nop(fVar8);
    local_d4 = -local_c8;
    fVar8 = 0.0;
    local_d0 = 0;
    local_c0 = 0;
    local_d8 = fVar4;
    local_c4 = fVar4;
    Scaleform::Render::Matrix2x4<float>::Append
              ((Matrix2x4<float> *)&local_98,(Matrix2x4<float> *)&local_d8);
    lVar3 = (**(code **)(*param_1 + 0x1f0))(param_1,&local_d8,&local_98);
    fVar4 = *(float *)(lVar3 + 0xc) - *(float *)(lVar3 + 4);
    if (1e-06 < ABS(fVar4)) {
      fVar8 = (float)((double)CONCAT44(uVar10,uVar9) * 20.0) / fVar4;
    }
    dVar5 = _guard_xfg_dispatch_icall_nop
                      ((double)local_a4 * (double)local_a4 + (double)local_b4 * (double)local_b4);
    uVar9 = SUB84(dVar5,0);
    uVar10 = (undefined4)((ulonglong)dVar5 >> 0x20);
    dVar1 = (double)fVar8 * dVar5 * 100.0;
    *(double *)(param_1[10] + 0x10) = dVar1;
    if (dVar5 == 0.0) {
      uVar9 = 0;
      uVar10 = 0x3ff00000;
      dVar1 = 0.0;
    }
    lVar3 = param_1[10];
    dVar2 = (double)local_a8;
    dVar5 = *(double *)(lVar3 + 0x18);
    dVar7 = (double)local_b8;
    dVar6 = _guard_xfg_dispatch_icall_nop((double)local_a8,(double)local_b8);
    dVar7 = _guard_xfg_dispatch_icall_nop(dVar7 * dVar7 + dVar2 * dVar2);
    FUN_14336d9c0(&local_b8,(float)ABS(*(double *)(lVar3 + 8) / (dVar7 * 100.0)),
                  (float)ABS(dVar1 / ((double)CONCAT44(uVar10,uVar9) * 100.0)),
                  (float)((dVar5 * 3.141592653589793) / 180.0 - dVar6));
    *(ulonglong *)(lVar3 + 8) = *(ulonglong *)(lVar3 + 8) & 0x7fffffffffffffff;
    *(ulonglong *)(param_1[10] + 0x10) = *(ulonglong *)(param_1[10] + 0x10) & 0x7fffffffffffffff;
    if (((((-3.4028235e+38 <= local_b8) && (local_b8 <= 3.4028235e+38)) &&
         ((-3.4028235e+38 <= local_b4 &&
          ((local_b4 <= 3.4028235e+38 && (-3.4028235e+38 <= local_b0)))))) &&
        ((local_b0 <= 3.4028235e+38 &&
         ((((((-3.4028235e+38 <= local_ac && (local_ac <= 3.4028235e+38)) &&
             (-3.4028235e+38 <= local_a8)) &&
            ((local_a8 <= 3.4028235e+38 && (-3.4028235e+38 <= local_a4)))) &&
           ((local_a4 <= 3.4028235e+38 &&
            ((-3.4028235e+38 <= local_a0 && (local_a0 <= 3.4028235e+38)))))) &&
          (-3.4028235e+38 <= local_9c)))))) && (local_9c <= 3.4028235e+38)) {
      (**(code **)(*param_1 + 0x18))(param_1,&local_b8);
    }
  }
  return;
}



// FUNCTION 14336a080 FUN_14336a080 body=131 status=ok
// SIG undefined FUN_14336a080(void)

double FUN_14336a080(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 local_18 [16];
  
  if (param_1[9] != 0) {
    lVar1 = FUN_1432cd1e0();
    if ((*(ushort *)(lVar1 + 10) >> 9 & 1) != 0) {
      lVar1 = FUN_14336acb0(param_1,local_18);
      goto LAB_14336a0d7;
    }
  }
  lVar1 = *param_1;
  uVar2 = (**(code **)(lVar1 + 0x10))(param_1);
  lVar1 = (**(code **)(lVar1 + 0x1f0))(param_1,local_18,uVar2);
LAB_14336a0d7:
  dVar3 = _guard_xfg_dispatch_icall_nop
                    ((double)(*(float *)(lVar1 + 0xc) - *(float *)(lVar1 + 4)) + 0.5);
  return dVar3 * 0.05;
}



// FUNCTION 14336a110 FUN_14336a110 body=193 status=ok
// SIG undefined FUN_14336a110(void)

void FUN_14336a110(longlong *param_1,double param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  if ((((uint)((ulonglong)param_2 >> 0x20) & 0x7ff00000) != 0x7ff00000) ||
     (((ulonglong)param_2 & 0xfffffffffffff) == 0)) {
    if (param_1[9] == 0) {
      puVar5 = (undefined8 *)&DAT_1467ccfd0;
    }
    else {
      lVar4 = FUN_1432cd1e0();
      puVar5 = (undefined8 *)(lVar4 + 0x50);
    }
    uVar1 = *puVar5;
    uVar2 = puVar5[2];
    uVar3 = puVar5[3];
    uStack_40 = (undefined4)puVar5[1];
    uVar6 = FUN_14336b350(param_1);
    lVar4 = FUN_1432cd080(uVar6,2);
    local_48 = (undefined4)uVar1;
    uStack_44 = (undefined4)((ulonglong)uVar1 >> 0x20);
    *(undefined4 *)(lVar4 + 0x50) = local_48;
    *(undefined4 *)(lVar4 + 0x54) = uStack_44;
    *(undefined4 *)(lVar4 + 0x58) = uStack_40;
    *(float *)(lVar4 + 0x5c) = (float)(param_2 / 100.0);
    *(undefined8 *)(lVar4 + 0x60) = uVar2;
    *(undefined8 *)(lVar4 + 0x68) = uVar3;
    (**(code **)(*param_1 + 0x1a8))(param_1,0);
  }
  return;
}



// FUNCTION 14336a1e0 FUN_14336a1e0 body=52 status=ok
// SIG undefined FUN_14336a1e0(void)

double FUN_14336a1e0(longlong param_1)

{
  longlong lVar1;
  undefined *puVar2;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    puVar2 = &DAT_1467ccfd0;
  }
  else {
    lVar1 = FUN_1432cd1e0();
    puVar2 = (undefined *)(lVar1 + 0x50);
  }
  return (double)(*(float *)(puVar2 + 0xc) * 100.0);
}



// FUNCTION 14336a260 GetCacheAsBitmap body=79 status=ok
// SIG undefined GetCacheAsBitmap(void)

undefined1 Scaleform::GFx::DisplayObjectBase::GetCacheAsBitmap(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = FUN_14336b350();
  if (lVar3 != 0) {
    uVar1 = FUN_14336b350(param_1);
    lVar3 = FUN_143362af0(uVar1,3);
    if (lVar3 != 0) {
      lVar3 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FInputDeviceModule>,IModuleInterface_*___ptr64___cdecl(void)>
              ::GetRawUserObject(lVar3);
      if (lVar3 != 0) {
        uVar2 = UGameUserSettings::IsDynamicResolutionEnabled(lVar3);
        return uVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 14336a2c0 FUN_14336a2c0 body=216 status=ok
// SIG undefined FUN_14336a2c0(void)

void FUN_14336a2c0(longlong *param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  RefCountImpl *this;
  
  lVar2 = FUN_14336b350();
  if (lVar2 != 0) {
    uVar3 = FUN_14336b350(param_1);
    lVar2 = FUN_143362af0(uVar3,3);
    if ((lVar2 == 0) ||
       (lVar2 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FInputDeviceModule>,IModuleInterface_*___ptr64___cdecl(void)>
                ::GetRawUserObject(lVar2), lVar2 == 0)) {
      if (param_2 == '\0') {
        return;
      }
      lVar2 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x38);
      if (lVar2 == 0) {
        this = (RefCountImpl *)0x0;
      }
      else {
        this = (RefCountImpl *)FUN_1432d0ca0(lVar2,0);
      }
      param_2 = '\x01';
    }
    else {
      cVar1 = UGameUserSettings::IsDynamicResolutionEnabled(lVar2);
      if (param_2 == cVar1) {
        return;
      }
      this = (RefCountImpl *)FUN_1432d1340(lVar2,0,0);
    }
    FUN_1432d1270(this,param_2);
    (**(code **)(*param_1 + 0x1c0))(param_1,this);
    if (this != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(this);
    }
  }
  return;
}



// FUNCTION 14336a3a0 FUN_14336a3a0 body=56 status=ok
// SIG undefined FUN_14336a3a0(void)

void FUN_14336a3a0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14336b350();
  if (lVar1 != 0) {
    uVar2 = FUN_14336b350(param_1);
    FUN_143362e10(uVar2,param_2);
  }
  return;
}



// FUNCTION 14336a3e0 GetFilters body=66 status=ok
// SIG undefined GetFilters(void)

undefined8 Scaleform::GFx::DisplayObjectBase::GetFilters(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14336b350();
  if (lVar1 != 0) {
    uVar2 = FUN_14336b350(param_1);
    lVar1 = FUN_143362af0(uVar2,3);
    if (lVar1 != 0) {
      uVar2 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FInputDeviceModule>,IModuleInterface_*___ptr64___cdecl(void)>
              ::GetRawUserObject(lVar1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 14336a430 FUN_14336a430 body=68 status=ok
// SIG undefined FUN_14336a430(void)

void FUN_14336a430(longlong param_1,char param_2)

{
  undefined8 uVar1;
  
  if (param_2 == '\0') {
    *(ushort *)(param_1 + 0x6a) = *(ushort *)(param_1 + 0x6a) & 0xbfff;
    uVar1 = FUN_14336b350();
    FUN_143362a30(uVar1,0);
    return;
  }
  *(ushort *)(param_1 + 0x6a) = *(ushort *)(param_1 + 0x6a) | 0x4000;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_143362a30();
    return;
  }
  return;
}



// FUNCTION 14336a500 InvalidateHitResult body=10 status=ok
// SIG undefined InvalidateHitResult(void)

void Scaleform::GFx::DisplayObjectBase::InvalidateHitResult(longlong param_1)

{
  *(ushort *)(param_1 + 0x6a) = *(ushort *)(param_1 + 0x6a) & 0xfff3;
  return;
}



// FUNCTION 14336a510 FUN_14336a510 body=130 status=ok
// SIG undefined FUN_14336a510(void)

void FUN_14336a510(longlong *param_1,Matrix2x4<float> *param_2)

{
  Matrix2x4<float> *pMVar1;
  undefined4 *puVar2;
  
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x1e8))();
    pMVar1 = (Matrix2x4<float> *)(**(code **)(*param_1 + 0x10))(param_1);
    Scaleform::Render::Matrix2x4<float>::Prepend(param_2,pMVar1);
    return;
  }
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1);
  *(undefined4 *)param_2 = *puVar2;
  *(undefined4 *)(param_2 + 4) = puVar2[1];
  *(undefined4 *)(param_2 + 8) = puVar2[2];
  *(undefined4 *)(param_2 + 0xc) = puVar2[3];
  *(undefined4 *)(param_2 + 0x10) = puVar2[4];
  *(undefined4 *)(param_2 + 0x14) = puVar2[5];
  *(undefined4 *)(param_2 + 0x18) = puVar2[6];
  *(undefined4 *)(param_2 + 0x1c) = puVar2[7];
  return;
}



// FUNCTION 14336a5a0 FUN_14336a5a0 body=134 status=ok
// SIG undefined FUN_14336a5a0(void)

void FUN_14336a5a0(longlong *param_1,Matrix3x4<float> *param_2)

{
  undefined8 uVar1;
  Matrix3x4<float> *pMVar2;
  undefined8 *puVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (param_1[7] != 0) {
    FUN_14336a5a0();
    pMVar2 = (Matrix3x4<float> *)(**(code **)(*param_1 + 0x20))(param_1);
    local_38 = *(undefined8 *)param_2;
    uStack_30 = *(undefined8 *)(param_2 + 8);
    local_28 = *(undefined8 *)(param_2 + 0x10);
    uStack_20 = *(undefined8 *)(param_2 + 0x18);
    local_18 = *(undefined8 *)(param_2 + 0x20);
    uStack_10 = *(undefined8 *)(param_2 + 0x28);
    Scaleform::Render::Matrix3x4<float>::MultiplyMatrix
              (param_2,(Matrix3x4<float> *)&local_38,pMVar2);
    return;
  }
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x20))(param_1);
  uVar1 = puVar3[1];
  *(undefined8 *)param_2 = *puVar3;
  *(undefined8 *)(param_2 + 8) = uVar1;
  uVar1 = puVar3[3];
  *(undefined8 *)(param_2 + 0x10) = puVar3[2];
  *(undefined8 *)(param_2 + 0x18) = uVar1;
  uVar1 = puVar3[5];
  *(undefined8 *)(param_2 + 0x20) = puVar3[4];
  *(undefined8 *)(param_2 + 0x28) = uVar1;
  return;
}



// FUNCTION 14336a630 FUN_14336a630 body=149 status=ok
// SIG undefined FUN_14336a630(void)

void FUN_14336a630(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if (*(longlong *)(param_1 + 0x38) == 0) {
    if (*(longlong *)(param_1 + 0x48) == 0) {
      puVar3 = (undefined8 *)&DAT_1467ccfd0;
    }
    else {
      lVar2 = FUN_1432cd1e0();
      puVar3 = (undefined8 *)(lVar2 + 0x50);
    }
    uVar1 = puVar3[1];
    *param_2 = *puVar3;
    param_2[1] = uVar1;
    uVar1 = puVar3[3];
    param_2[2] = puVar3[2];
    param_2[3] = uVar1;
    return;
  }
  FUN_14336a630();
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar2 = FUN_1432cd1e0();
    FUN_1432bfbe0(param_2,lVar2 + 0x50);
    return;
  }
  FUN_1432bfbe0(param_2,&DAT_1467ccfd0);
  return;
}



// FUNCTION 14336a6d0 FUN_14336a6d0 body=98 status=ok
// SIG undefined FUN_14336a6d0(void)

void FUN_14336a6d0(longlong *param_1,Matrix2x4<float> *param_2)

{
  Matrix2x4<float> *pMVar1;
  
  if (param_1[7] != 0) {
    FUN_14336a6d0();
    pMVar1 = (Matrix2x4<float> *)(**(code **)(*param_1 + 0x10))(param_1);
    Scaleform::Render::Matrix2x4<float>::Prepend(param_2,pMVar1);
    return;
  }
  *(undefined8 *)param_2 = 0x3f800000;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  return;
}



// FUNCTION 14336a740 FUN_14336a740 body=1017 status=ok
// SIG undefined FUN_14336a740(void)

float * FUN_14336a740(longlong *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  longlong lVar5;
  Matrix3x4<float> *pMVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  int local_148;
  int local_144;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  float local_118 [12];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  if (((param_1[9] == 0) || (lVar5 = FUN_1432cd1e0(), (*(ushort *)(lVar5 + 10) >> 9 & 1) == 0)) &&
     ((param_1[7] == 0 || (cVar4 = FUN_143367890(param_1[7],1), cVar4 == '\0')))) {
    fVar1 = *param_3;
    fVar2 = param_3[1];
    local_188 = 0x3f800000;
    uStack_180 = 0;
    local_178._0_4_ = 0.0;
    local_178._4_4_ = 1.0;
    uStack_170 = 0;
    (**(code **)(*param_1 + 0x1e8))(param_1,&local_188);
    *param_2 = local_188._4_4_ * fVar2 + (float)local_188 * fVar1 + uStack_180._4_4_;
    uStack_170._4_4_ = local_178._4_4_ * fVar2 + (float)local_178 * fVar1 + uStack_170._4_4_;
  }
  else {
    local_118[2] = 0.0;
    local_118[3] = 0.0;
    local_118[6] = 0.0;
    local_118[7] = 0.0;
    local_118[8] = 0.0;
    local_118[9] = 0.0;
    local_118[0] = 1.0;
    local_118[1] = 0.0;
    local_118[4] = 0.0;
    local_118[5] = 1.0;
    local_118[10] = 1.0;
    local_118[0xb] = 0.0;
    (**(code **)(*param_1 + 0x48))(param_1,local_118,1);
    local_e0 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_b8 = 0;
    local_e8 = 0x3f800000;
    local_d8 = 0x3f80000000000000;
    local_c0 = 0x3f800000;
    local_b0 = 0x3f80000000000000;
    (**(code **)(*param_1 + 0x30))(param_1,&local_e8,1);
    local_188 = 0x3f800000;
    local_178 = 0x3f80000000000000;
    uStack_160 = 0x3f800000;
    uStack_180 = 0;
    uStack_170 = 0;
    local_168 = 0;
    if (param_1[7] == 0) {
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x20))(param_1);
      local_188 = *puVar7;
      uStack_180 = puVar7[1];
      local_178 = puVar7[2];
      uStack_170 = puVar7[3];
      local_168 = puVar7[4];
      uStack_160 = puVar7[5];
    }
    else {
      FUN_14336a5a0(param_1[7],&local_188);
      pMVar6 = (Matrix3x4<float> *)(**(code **)(*param_1 + 0x20))(param_1);
      local_68 = local_188;
      uStack_60 = uStack_180;
      local_48 = local_168;
      uStack_40 = uStack_160;
      local_58 = local_178;
      uStack_50 = uStack_170;
      Scaleform::Render::Matrix3x4<float>::MultiplyMatrix
                ((Matrix3x4<float> *)&local_188,(Matrix3x4<float> *)&local_68,pMVar6);
    }
    Scaleform::Render::Matrix4x4<float>::MultiplyMatrix
              ((Matrix4x4<float> *)&local_68,(Matrix4x4<float> *)&local_e8,
               (Matrix3x4<float> *)local_118);
    Scaleform::Render::Matrix4x4<float>::MultiplyMatrix
              ((Matrix4x4<float> *)&local_a8,(Matrix4x4<float> *)&local_68,
               (Matrix3x4<float> *)&local_188);
    fVar1 = param_3[1];
    fVar2 = *param_3;
    fVar3 = param_3[2];
    local_158 = 0;
    local_150 = 0;
    local_138 = 0;
    local_140 = 0;
    local_130 = 0;
    local_144 = 1;
    local_148 = 1;
    local_128 = 0x3f800000;
    local_12c = 0x3f800000;
    fVar8 = fVar2 * local_78 + fVar1 * local_74 + fVar3 * local_70 + local_6c;
    (**(code **)(**(longlong **)(param_1[4] + 0x10) + 0x68))
              (*(longlong **)(param_1[4] + 0x10),&local_158);
    lVar5 = *(longlong *)(param_1[4] + 0x10);
    fVar9 = ((fVar2 * local_a8 + fVar1 * local_a4 + fVar3 * local_a0 + local_9c) / fVar8 + 1.0) *
            (float)local_148 * 0.5;
    uStack_170._4_4_ =
         (1.0 - (fVar2 * local_98 + fVar1 * local_94 + fVar3 * local_90 + local_8c) / fVar8) *
         (float)local_144 * 0.5;
    if (lVar5 != 0) {
      if (local_118[0] == 1.0) {
        uStack_170._4_4_ =
             (uStack_170._4_4_ * *(float *)(lVar5 + 0xe4) + *(float *)(lVar5 + 0xec)) * 20.0;
        *param_2 = (fVar9 * *(float *)(lVar5 + 0xe0) + *(float *)(lVar5 + 0xe8)) * 20.0;
        goto LAB_14336ab0e;
      }
      fVar9 = fVar9 * *(float *)(lVar5 + 0xe0) + *(float *)(lVar5 + 0xe8) * 20.0;
      uStack_170._4_4_ =
           uStack_170._4_4_ * *(float *)(lVar5 + 0xe4) + *(float *)(lVar5 + 0xec) * 20.0;
    }
    *param_2 = fVar9;
  }
LAB_14336ab0e:
  param_2[1] = uStack_170._4_4_;
  return param_2;
}



// FUNCTION 14336ab40 FUN_14336ab40 body=198 status=ok
// SIG undefined FUN_14336ab40(void)

undefined8 FUN_14336ab40(longlong param_1,undefined8 param_2,float *param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
  if (lVar1 != 0) {
    fVar3 = (param_3[1] - *(float *)(lVar1 + 0xec) * 20.0) /
            (*(float *)(lVar1 + 0x10c) - *(float *)(lVar1 + 0x104));
    fVar2 = (*param_3 - *(float *)(lVar1 + 0xe8) * 20.0) /
            (*(float *)(lVar1 + 0x108) - *(float *)(lVar1 + 0x100));
    *(float *)(lVar1 + 0x144) = -((fVar3 + fVar3) - 1.0);
    *(float *)(lVar1 + 0x140) = (fVar2 + fVar2) - 1.0;
    FUN_14336b000();
  }
  return param_2;
}



// FUNCTION 14336ac10 FUN_14336ac10 body=56 status=ok
// SIG undefined FUN_14336ac10(void)

undefined4 * FUN_14336ac10(undefined4 param_1,undefined4 *param_2)

{
  undefined4 local_res10;
  undefined4 local_res14;
  
  FUN_14336ab40(param_1,&local_res10);
  *param_2 = local_res10;
  param_2[1] = local_res14;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 14336ac50 FUN_14336ac50 body=45 status=ok
// SIG undefined FUN_14336ac50(void)

undefined8 FUN_14336ac50(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  while ((param_1 != (longlong *)0x0 &&
         (uVar1 = (**(code **)(*param_1 + 0x78))(param_1), (int)uVar1 < 3))) {
    param_1 = (longlong *)param_1[7];
  }
  return uVar1;
}



// FUNCTION 14336acb0 FUN_14336acb0 body=750 status=ok
// SIG undefined FUN_14336acb0(void)

float * FUN_14336acb0(longlong *param_1,float *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float local_res8;
  float local_resc;
  float local_98;
  float local_94;
  undefined4 local_90;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78 [24];
  
  (**(code **)(*param_1 + 0x1f0))(param_1,&local_88,&DAT_14621c810);
  lVar3 = 0;
  local_78[1] = local_84;
  local_78[3] = local_84;
  local_78[5] = local_7c;
  local_78[7] = local_7c;
  local_90 = 0;
  local_78[0] = local_88;
  local_78[2] = local_80;
  local_78[4] = local_88;
  local_78[6] = local_80;
  do {
    local_98 = local_78[lVar3 * 2];
    local_94 = local_78[lVar3 * 2 + 1];
    FUN_14336a740(param_1,&local_res8,&local_98);
    local_78[lVar3 * 2] = local_res8;
    local_78[lVar3 * 2 + 1] = local_resc;
    lVar3 = lVar3 + 1;
  } while (lVar3 < 4);
  if (param_1[7] != 0) {
    pfVar4 = local_78;
    lVar3 = 4;
    do {
      lVar1 = param_1[7];
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x20) + 0x10);
      if (lVar2 != 0) {
        fVar6 = (pfVar4[1] - *(float *)(lVar2 + 0xec) * 20.0) /
                (*(float *)(lVar2 + 0x10c) - *(float *)(lVar2 + 0x104));
        fVar5 = (*pfVar4 - *(float *)(lVar2 + 0xe8) * 20.0) /
                (*(float *)(lVar2 + 0x108) - *(float *)(lVar2 + 0x100));
        *(float *)(lVar2 + 0x144) = -((fVar6 + fVar6) - 1.0);
        *(float *)(lVar2 + 0x140) = (fVar5 + fVar5) - 1.0;
        FUN_14336b000(lVar1,&local_res8,pfVar4,0,0);
      }
      *pfVar4 = local_res8;
      pfVar4[1] = local_resc;
      pfVar4 = pfVar4 + 2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  fVar5 = local_78[0];
  if (local_78[0] <= local_78[2]) {
    fVar5 = local_78[2];
  }
  fVar6 = local_78[1];
  if (local_78[1] <= local_78[3]) {
    fVar6 = local_78[3];
  }
  if (local_78[2] <= local_78[0]) {
    local_78[0] = local_78[2];
  }
  if (local_78[3] <= local_78[1]) {
    local_78[1] = local_78[3];
  }
  if (fVar5 <= local_78[4]) {
    fVar5 = local_78[4];
  }
  if (fVar6 <= local_78[5]) {
    fVar6 = local_78[5];
  }
  if (local_78[4] <= local_78[0]) {
    local_78[0] = local_78[4];
  }
  if (local_78[5] <= local_78[1]) {
    local_78[1] = local_78[5];
  }
  if (fVar5 <= local_78[6]) {
    fVar5 = local_78[6];
  }
  if (fVar6 <= local_78[7]) {
    fVar6 = local_78[7];
  }
  if (local_78[6] <= local_78[0]) {
    local_78[0] = local_78[6];
  }
  if (local_78[7] <= local_78[1]) {
    local_78[1] = local_78[7];
  }
  *param_2 = local_78[0];
  param_2[1] = fVar6;
  param_2[3] = (fVar6 - local_78[1]) + fVar6;
  param_2[2] = (fVar5 - local_78[0]) + local_78[0];
  return param_2;
}



// FUNCTION 14336b000 FUN_14336b000 body=648 status=ok
// SIG undefined FUN_14336b000(void)

void FUN_14336b000(longlong *param_1,Point<float> *param_2,Point<float> *param_3,char param_4,
                  Matrix2x4<float> *param_5)

{
  char cVar1;
  longlong lVar2;
  Matrix3x4<float> *pMVar3;
  undefined8 *puVar4;
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
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (param_4 == '\0') {
    if (((param_1[9] != 0) && (lVar2 = FUN_1432cd1e0(), (*(ushort *)(lVar2 + 10) >> 9 & 1) != 0)) ||
       ((param_1[7] != 0 && (cVar1 = FUN_143367890(param_1[7],1), cVar1 != '\0'))))
    goto LAB_14336b096;
    local_d8 = 0x3f800000;
    uStack_d0 = 0;
    local_c8 = 0x3f80000000000000;
    uStack_c0 = 0;
    (**(code **)(*param_1 + 0x1e8))(param_1,&local_d8);
    param_5 = (Matrix2x4<float> *)&local_d8;
  }
  else {
    if ((param_1[9] != 0) && (lVar2 = FUN_1432cd1e0(), (*(ushort *)(lVar2 + 10) >> 9 & 1) != 0)) {
LAB_14336b096:
      local_a8 = 0x3f800000;
      local_98 = 0x3f80000000000000;
      uStack_80 = 0x3f800000;
      local_78 = 0x3f800000;
      local_68 = 0x3f80000000000000;
      uStack_50 = 0x3f800000;
      uStack_40 = 0x3f80000000000000;
      local_d8 = 0x3f800000;
      local_c8 = 0x3f80000000000000;
      uStack_b0 = 0x3f800000;
      uStack_a0 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_70 = 0;
      uStack_60 = 0;
      local_58 = 0;
      local_48 = 0;
      uStack_d0 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      if (param_1[7] == 0) {
        puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x20))(param_1);
        local_d8 = *puVar4;
        uStack_d0 = puVar4[1];
        local_c8 = puVar4[2];
        uStack_c0 = puVar4[3];
        local_b8 = puVar4[4];
        uStack_b0 = puVar4[5];
      }
      else {
        FUN_14336a5a0(param_1[7],&local_d8);
        pMVar3 = (Matrix3x4<float> *)(**(code **)(*param_1 + 0x20))(param_1);
        local_38 = local_d8;
        uStack_30 = uStack_d0;
        local_18 = local_b8;
        uStack_10 = uStack_b0;
        local_28 = local_c8;
        uStack_20 = uStack_c0;
        Scaleform::Render::Matrix3x4<float>::MultiplyMatrix
                  ((Matrix3x4<float> *)&local_d8,(Matrix3x4<float> *)&local_38,pMVar3);
      }
      lVar2 = *(longlong *)(param_1[4] + 0x10);
      cVar1 = (**(code **)(*param_1 + 0x30))(param_1,&local_78,1);
      if (cVar1 != '\0') {
        *(undefined8 *)(lVar2 + 0x150) = local_78;
        *(undefined8 *)(lVar2 + 0x158) = uStack_70;
        *(undefined8 *)(lVar2 + 0x160) = local_68;
        *(undefined8 *)(lVar2 + 0x168) = uStack_60;
        *(undefined4 *)(lVar2 + 0x170) = (undefined4)local_58;
        *(undefined4 *)(lVar2 + 0x174) = local_58._4_4_;
        *(undefined4 *)(lVar2 + 0x178) = (undefined4)uStack_50;
        *(undefined4 *)(lVar2 + 0x17c) = uStack_50._4_4_;
        *(undefined8 *)(lVar2 + 0x180) = local_48;
        *(undefined8 *)(lVar2 + 0x188) = uStack_40;
      }
      cVar1 = (**(code **)(*param_1 + 0x48))(param_1,&local_a8,1);
      if (cVar1 != '\0') {
        *(undefined8 *)(lVar2 + 400) = local_a8;
        *(undefined8 *)(lVar2 + 0x198) = uStack_a0;
        *(undefined8 *)(lVar2 + 0x1a0) = local_98;
        *(undefined8 *)(lVar2 + 0x1a8) = uStack_90;
        *(undefined8 *)(lVar2 + 0x1b0) = local_88;
        *(undefined8 *)(lVar2 + 0x1b8) = uStack_80;
      }
      *(undefined8 *)(lVar2 + 0x1c0) = local_d8;
      *(undefined8 *)(lVar2 + 0x1c8) = uStack_d0;
      *(undefined4 *)(lVar2 + 0x1d0) = (undefined4)local_c8;
      *(undefined4 *)(lVar2 + 0x1d4) = local_c8._4_4_;
      *(undefined4 *)(lVar2 + 0x1d8) = (undefined4)uStack_c0;
      *(undefined4 *)(lVar2 + 0x1dc) = uStack_c0._4_4_;
      *(undefined4 *)(lVar2 + 0x1e0) = (undefined4)local_b8;
      *(undefined4 *)(lVar2 + 0x1e4) = local_b8._4_4_;
      *(undefined4 *)(lVar2 + 0x1e8) = (undefined4)uStack_b0;
      *(undefined4 *)(lVar2 + 0x1ec) = uStack_b0._4_4_;
      Scaleform::Render::ScreenToWorld::GetWorldPoint(lVar2 + 0x140,param_2);
      return;
    }
    if (param_5 == (Matrix2x4<float> *)0x0) {
      param_5 = (Matrix2x4<float> *)(**(code **)(*param_1 + 0x10))(param_1);
    }
  }
  Scaleform::Render::Matrix2x4<float>::TransformByInverse(param_5,param_2,param_3);
  return;
}



// FUNCTION 14336b290 FindMovieImpl body=37 status=ok
// SIG undefined FindMovieImpl(void)

undefined8 Scaleform::GFx::DisplayObjectBase::FindMovieImpl(longlong param_1)

{
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    if (*(char *)(param_1 + 0x6a) < '\0') break;
    param_1 = *(longlong *)(param_1 + 0x38);
  }
  return *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10);
}



// FUNCTION 14336b320 FUN_14336b320 body=27 status=ok
// SIG undefined FUN_14336b320(void)

void FUN_14336b320(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x218))();
                    /* WARNING: Could not recover jumptable at 0x00014336b337. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return;
}



// FUNCTION 14336b350 FUN_14336b350 body=161 status=ok
// SIG undefined FUN_14336b350(void)

longlong FUN_14336b350(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong local_res8;
  
  if (param_1[9] == 0) {
    plVar2 = (longlong *)
             (**(code **)(*param_1 + 8))
                       (param_1,&local_res8,*(longlong *)(param_1[4] + 0x10) + 0x5350);
    if (*plVar2 != 0) {
      plVar1 = (longlong *)(*plVar2 + 0x18);
      *plVar1 = *plVar1 + 1;
    }
    if (param_1[9] != 0) {
      plVar1 = (longlong *)(param_1[9] + 0x18);
      *plVar1 = *plVar1 + -1;
      if (*plVar1 == 0) {
        FUN_1432ccf00();
      }
    }
    param_1[9] = *plVar2;
    if (local_res8 != 0) {
      plVar2 = (longlong *)(local_res8 + 0x18);
      *plVar2 = *plVar2 + -1;
      if (*plVar2 == 0) {
        FUN_1432ccf00();
      }
    }
    FUN_143362a30(param_1[9],(byte)((ushort)*(undefined2 *)((longlong)param_1 + 0x6a) >> 0xe) & 1);
    return param_1[9];
  }
  return param_1[9];
}



// FUNCTION 14336b410 GetRenderContext body=15 status=ok
// SIG undefined GetRenderContext(void)

longlong Scaleform::GFx::DisplayObjectBase::GetRenderContext(longlong param_1)

{
  return *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0x5350;
}



// FUNCTION 14336b450 FUN_14336b450 body=141 status=ok
// SIG undefined FUN_14336b450(void)

void FUN_14336b450(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_18;
  
  *(ushort *)((longlong)param_1 + 0x6a) = *(ushort *)((longlong)param_1 + 0x6a) | 0x1000;
  plVar3 = param_1;
  if (((byte)*(undefined2 *)((longlong)param_1 + 0x6a) >> 1 & 1) != 0) {
    do {
      if (*(char *)((longlong)plVar3 + 0x6a) < '\0') {
        uVar2 = *(undefined8 *)(plVar3[4] + 0x10);
        goto LAB_14336b490;
      }
      plVar1 = plVar3 + 7;
      plVar3 = (longlong *)*plVar1;
    } while ((longlong *)*plVar1 != (longlong *)0x0);
    uVar2 = 0;
LAB_14336b490:
    FUN_1432eba30(uVar2,param_1);
  }
  if ((*(byte *)((longlong)param_1 + 0x6a) >> 4 & 1) == 0) {
    local_28 = 4;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0xff00;
    (**(code **)(*param_1 + 0x248))(param_1,&local_28);
    *(ushort *)((longlong)param_1 + 0x6a) = *(ushort *)((longlong)param_1 + 0x6a) | 0x10;
  }
  return;
}



// FUNCTION 14336b4f0 FUN_14336b4f0 body=126 status=ok
// SIG undefined FUN_14336b4f0(void)

void FUN_14336b4f0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    local_60 = 0x4059000000000000;
    local_58 = 0x4059000000000000;
    uStack_50 = 0;
    local_48 = 0x3f800000;
    uStack_40 = 0;
    local_38 = 0x3f80000000000000;
    uStack_30 = 0;
    local_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0x40590000;
    local_18 = 0;
    uStack_10 = 0;
    local_68 = 0;
    uVar1 = FUN_14336b690(0,&local_68);
    FUN_14336b830(param_1,uVar1);
  }
  return;
}



// FUNCTION 14336b580 GetLog body=45 status=ok
// SIG undefined GetLog(void)

void Scaleform::GFx::DisplayObjectBase::GetLog(longlong param_1)

{
  while( true ) {
    if (param_1 == 0) {
      FUN_14336dce0(0);
      return;
    }
    if (*(char *)(param_1 + 0x6a) < '\0') break;
    param_1 = *(longlong *)(param_1 + 0x38);
  }
  FUN_14336dce0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10));
  return;
}



// FUNCTION 14336b690 FUN_14336b690 body=400 status=ok
// SIG undefined FUN_14336b690(void)

int * FUN_14336b690(longlong *param_1,int *param_2)

{
  float *pfVar1;
  int *piVar2;
  double dVar3;
  
  piVar2 = (int *)param_1[10];
  if (piVar2 == (int *)0x0) {
    pfVar1 = (float *)(**(code **)(*param_1 + 0x10))();
    *param_2 = (int)pfVar1[3];
    param_2[1] = (int)pfVar1[7];
    dVar3 = _guard_xfg_dispatch_icall_nop
                      ((double)*pfVar1 * (double)*pfVar1 + (double)pfVar1[4] * (double)pfVar1[4]);
    *(double *)(param_2 + 2) = dVar3 * 100.0;
    dVar3 = _guard_xfg_dispatch_icall_nop
                      ((double)pfVar1[1] * (double)pfVar1[1] + (double)pfVar1[5] * (double)pfVar1[5]
                      );
    *(double *)(param_2 + 4) = dVar3 * 100.0;
    dVar3 = _guard_xfg_dispatch_icall_nop((double)pfVar1[4],(double)*pfVar1);
    *(double *)(param_2 + 6) = (dVar3 * 180.0) / 3.141592653589793;
    piVar2 = (int *)(**(code **)(*param_1 + 0x10))(param_1);
    param_2[8] = *piVar2;
    param_2[9] = piVar2[1];
    param_2[10] = piVar2[2];
    param_2[0xb] = piVar2[3];
    param_2[0xc] = piVar2[4];
    param_2[0xd] = piVar2[5];
    param_2[0xe] = piVar2[6];
    param_2[0xf] = piVar2[7];
    return param_2;
  }
  *param_2 = *piVar2;
  param_2[1] = piVar2[1];
  *(undefined8 *)(param_2 + 2) = *(undefined8 *)(piVar2 + 2);
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(piVar2 + 4);
  *(undefined8 *)(param_2 + 6) = *(undefined8 *)(piVar2 + 6);
  param_2[8] = piVar2[8];
  param_2[9] = piVar2[9];
  param_2[10] = piVar2[10];
  param_2[0xb] = piVar2[0xb];
  param_2[0xc] = piVar2[0xc];
  param_2[0xd] = piVar2[0xd];
  param_2[0xe] = piVar2[0xe];
  param_2[0xf] = piVar2[0xf];
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(piVar2 + 0x10);
  *(undefined8 *)(param_2 + 0x12) = *(undefined8 *)(piVar2 + 0x12);
  *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(piVar2 + 0x14);
  *(undefined8 *)(param_2 + 0x16) = *(undefined8 *)(piVar2 + 0x16);
  return param_2;
}



// FUNCTION 14336b830 FUN_14336b830 body=343 status=ok
// SIG undefined FUN_14336b830(void)

void FUN_14336b830(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 local_res8 [2];
  
  puVar1 = *(undefined4 **)(param_1 + 0x50);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    *(undefined8 *)(puVar1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(puVar1 + 6) = *(undefined8 *)(param_2 + 6);
    puVar1[8] = param_2[8];
    puVar1[9] = param_2[9];
    puVar1[10] = param_2[10];
    puVar1[0xb] = param_2[0xb];
    puVar1[0xc] = param_2[0xc];
    puVar1[0xd] = param_2[0xd];
    puVar1[0xe] = param_2[0xe];
    puVar1[0xf] = param_2[0xf];
    *(undefined8 *)(puVar1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(puVar1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
    *(undefined8 *)(puVar1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(puVar1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
    return;
  }
  local_res8[0] = 0x142;
  puVar1 = (undefined4 *)(**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x60,local_res8)
  ;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    *(undefined8 *)(puVar1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(puVar1 + 6) = *(undefined8 *)(param_2 + 6);
    puVar1[8] = param_2[8];
    puVar1[9] = param_2[9];
    puVar1[10] = param_2[10];
    puVar1[0xb] = param_2[0xb];
    puVar1[0xc] = param_2[0xc];
    puVar1[0xd] = param_2[0xd];
    puVar1[0xe] = param_2[0xe];
    puVar1[0xf] = param_2[0xf];
    *(undefined8 *)(puVar1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(puVar1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
    *(undefined8 *)(puVar1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(puVar1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
    *(undefined4 **)(param_1 + 0x50) = puVar1;
    return;
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



// FUNCTION 14336b9a0 FUN_14336b9a0 body=310 status=ok
// SIG undefined FUN_14336b9a0(void)

longlong *
FUN_14336b9a0(longlong *param_1,longlong *param_2,undefined8 param_3,char param_4,longlong *param_5)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  cVar3 = (**(code **)(*param_1 + 0x1d8))();
  if (((cVar3 != '\0') && (FUN_14336b000(param_1,local_res8,param_3,1,0), (short)param_1[0xd] == 0))
     && (cVar3 = (**(code **)(*param_2 + 0x30))(param_2,local_res8,1,param_1), cVar3 != '\0')) {
    plVar2 = (longlong *)param_1[7];
    while ((plVar2 != (longlong *)0x0 && ((*(ushort *)((longlong)plVar2 + 0x6a) >> 10 & 1) != 0))) {
      if (param_4 == '\0') {
        bVar1 = *(byte *)((longlong)plVar2 + 0x6d);
        if (bVar1 != 0) {
          plVar4 = (longlong *)
                   (**(code **)(*(longlong *)((longlong)plVar2 + (ulonglong)bVar1 * 4) + 8))
                             ((longlong)plVar2 + (ulonglong)bVar1 * 4);
          cVar3 = (**(code **)(*plVar4 + 0x60))(plVar4);
          if (cVar3 != '\0') goto LAB_14336baa3;
        }
        lVar5 = (**(code **)(*plVar2 + 0x3d0))(plVar2);
        if (lVar5 != 0) {
          lVar5 = (**(code **)(*plVar2 + 0x3d0))(plVar2);
          if (*(byte *)(lVar5 + 0x6d) != 0) {
            plVar4 = (longlong *)
                     (**(code **)(*(longlong *)(lVar5 + (ulonglong)*(byte *)(lVar5 + 0x6d) * 4) + 8)
                     )();
            cVar3 = (**(code **)(*plVar4 + 0x60))(plVar4);
            if (cVar3 != '\0') goto LAB_14336baa3;
          }
        }
      }
      else {
LAB_14336baa3:
        if (param_5 == (longlong *)0x0) {
          return plVar2;
        }
        if (param_5 != plVar2) {
          return plVar2;
        }
      }
      plVar2 = (longlong *)plVar2[7];
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 14336bae0 ShutdownModule body=3 status=ok
// SIG undefined ShutdownModule(void)

void FSettingsModule::ShutdownModule(void)

{
  return;
}



// FUNCTION 14336baf0 FUN_14336baf0 body=72 status=ok
// SIG undefined FUN_14336baf0(void)

void FUN_14336baf0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = FUN_14336b350();
  if (lVar2 != 0) {
    *(longlong *)(lVar2 + 0x18) = *(longlong *)(lVar2 + 0x18) + 1;
  }
  FUN_143362fd0(lVar2,param_2);
  if (lVar2 != 0) {
    plVar1 = (longlong *)(lVar2 + 0x18);
    *plVar1 = *plVar1 + -1;
    if (*plVar1 == 0) {
      FUN_1432ccf00(lVar2);
    }
  }
  return;
}



// FUNCTION 14336bb40 FUN_14336bb40 body=72 status=ok
// SIG undefined FUN_14336bb40(void)

undefined8 FUN_14336bb40(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_14336b350();
  if (lVar2 != 0) {
    *(longlong *)(lVar2 + 0x18) = *(longlong *)(lVar2 + 0x18) + 1;
  }
  uVar3 = FUN_1433630d0(lVar2);
  if (lVar2 != 0) {
    plVar1 = (longlong *)(lVar2 + 0x18);
    *plVar1 = *plVar1 + -1;
    if (*plVar1 == 0) {
      FUN_1432ccf00(lVar2);
    }
  }
  return uVar3;
}



// FUNCTION 14336bb90 FUN_14336bb90 body=73 status=ok
// SIG undefined FUN_14336bb90(void)

void FUN_14336bb90(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = FUN_14336b350();
  if (lVar2 != 0) {
    *(longlong *)(lVar2 + 0x18) = *(longlong *)(lVar2 + 0x18) + 1;
  }
  FUN_143363110(lVar2,param_2);
  if (lVar2 != 0) {
    plVar1 = (longlong *)(lVar2 + 0x18);
    *plVar1 = *plVar1 + -1;
    if (*plVar1 == 0) {
      FUN_1432ccf00(lVar2);
    }
  }
  return;
}



// FUNCTION 14336bbe0 FUN_14336bbe0 body=73 status=ok
// SIG undefined FUN_14336bbe0(void)

undefined8 FUN_14336bbe0(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_14336b350();
  if (lVar2 != 0) {
    *(longlong *)(lVar2 + 0x18) = *(longlong *)(lVar2 + 0x18) + 1;
  }
  uVar3 = FUN_143363210(lVar2);
  if (lVar2 != 0) {
    plVar1 = (longlong *)(lVar2 + 0x18);
    *plVar1 = *plVar1 + -1;
    if (*plVar1 == 0) {
      FUN_1432ccf00(lVar2);
    }
  }
  return uVar3;
}



// FUNCTION 14336bc30 FUN_14336bc30 body=73 status=ok
// SIG undefined FUN_14336bc30(void)

void FUN_14336bc30(undefined8 param_1,undefined1 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = FUN_14336b350();
  if (lVar2 != 0) {
    *(longlong *)(lVar2 + 0x18) = *(longlong *)(lVar2 + 0x18) + 1;
  }
  FUN_143363250(lVar2,param_2);
  if (lVar2 != 0) {
    plVar1 = (longlong *)(lVar2 + 0x18);
    *plVar1 = *plVar1 + -1;
    if (*plVar1 == 0) {
      FUN_1432ccf00(lVar2);
    }
  }
  return;
}



// FUNCTION 14336bc80 FUN_14336bc80 body=73 status=ok
// SIG undefined FUN_14336bc80(void)

undefined1 FUN_14336bc80(void)

{
  longlong *plVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = FUN_14336b350();
  if (lVar3 != 0) {
    *(longlong *)(lVar3 + 0x18) = *(longlong *)(lVar3 + 0x18) + 1;
  }
  uVar2 = FUN_143363350(lVar3);
  if (lVar3 != 0) {
    plVar1 = (longlong *)(lVar3 + 0x18);
    *plVar1 = *plVar1 + -1;
    if (*plVar1 == 0) {
      FUN_1432ccf00(lVar3);
    }
  }
  return uVar2;
}



// FUNCTION 14336bcd0 FUN_14336bcd0 body=73 status=ok
// SIG undefined FUN_14336bcd0(void)

void FUN_14336bcd0(undefined8 param_1,undefined1 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = FUN_14336b350();
  if (lVar2 != 0) {
    *(longlong *)(lVar2 + 0x18) = *(longlong *)(lVar2 + 0x18) + 1;
  }
  FUN_143362d90(lVar2,param_2);
  if (lVar2 != 0) {
    plVar1 = (longlong *)(lVar2 + 0x18);
    *plVar1 = *plVar1 + -1;
    if (*plVar1 == 0) {
      FUN_1432ccf00(lVar2);
    }
  }
  return;
}



// FUNCTION 14336bd20 FUN_14336bd20 body=73 status=ok
// SIG undefined FUN_14336bd20(void)

undefined1 FUN_14336bd20(void)

{
  longlong *plVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = FUN_14336b350();
  if (lVar3 != 0) {
    *(longlong *)(lVar3 + 0x18) = *(longlong *)(lVar3 + 0x18) + 1;
  }
  uVar2 = FUN_143362df0(lVar3);
  if (lVar3 != 0) {
    plVar1 = (longlong *)(lVar3 + 0x18);
    *plVar1 = *plVar1 + -1;
    if (*plVar1 == 0) {
      FUN_1432ccf00(lVar3);
    }
  }
  return uVar2;
}



// FUNCTION 14336bd80 FUN_14336bd80 body=325 status=ok
// SIG undefined FUN_14336bd80(void)

undefined4 * FUN_14336bd80(undefined4 *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  ulonglong local_res8;
  
  lVar4 = *param_2;
  *(longlong *)(param_1 + 4) = lVar4;
  piVar1 = (int *)(lVar4 + 0x18);
  *piVar1 = *piVar1 + 1;
  lVar4 = *(longlong *)(*param_2 + 8);
  *(longlong *)(param_1 + 6) = lVar4 + 0x48;
  piVar1 = (int *)(lVar4 + 0x60);
  *piVar1 = *piVar1 + 1;
  lVar4 = *param_2;
  *(longlong *)(param_1 + 8) = lVar4;
  piVar1 = (int *)(lVar4 + 0x18);
  *piVar1 = *piVar1 + 1;
  *param_1 = 1;
  *(longlong *)(param_1 + 2) = param_4;
  if ((param_4 != 0) && (*(char *)(*(longlong *)(param_4 + 0x20) + 0x20) == '\x01')) {
    FUN_1432c2f70(&local_res8);
    if (param_3 != 0) {
      bVar2 = *(byte *)(param_3 + 0x6d);
      if (bVar2 != 0) {
        (**(code **)(*(longlong *)(param_3 + (ulonglong)bVar2 * 4) + 0x30))
                  (param_3 + (ulonglong)bVar2 * 4,&local_res8);
      }
      FUN_1432c3950(&local_res8,&DAT_145af796c,0xffffffffffffffff);
    }
    FUN_1432c3950(&local_res8,**(undefined8 **)(param_1 + 4),0xffffffffffffffff);
    lVar4 = FUN_143360a90(*(undefined8 *)(*param_2 + 8),
                          (longlong)(local_res8 & 0xfffffffffffffffc) + 0xc,
                          *(ulonglong *)(local_res8 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
    *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 2;
    piVar1 = (int *)(*(longlong *)(param_1 + 6) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *(longlong *)(param_1 + 6) = lVar4;
    piVar1 = (int *)(lVar4 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar4);
    }
    iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar3 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
    }
  }
  return param_1;
}



// FUNCTION 14336bed0 FUN_14336bed0 body=65 status=ok
// SIG undefined FUN_14336bed0(void)

void FUN_14336bed0(longlong param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)(param_1 + 0x20) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x18) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
    return;
  }
  return;
}



// FUNCTION 14336bf20 ResolveCharacter body=31 status=ok
// SIG undefined ResolveCharacter(void)

void Scaleform::GFx::CharacterHandle::ResolveCharacter(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 8) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014336bf3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_2 + 0x18) + 0x40))
              (*(longlong **)(param_2 + 0x18),param_1 + 0x18);
    return;
  }
  return;
}



// FUNCTION 14336bf50 ForceResolveCharacter body=18 status=ok
// SIG undefined ForceResolveCharacter(void)

void Scaleform::GFx::CharacterHandle::ForceResolveCharacter(longlong param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014336bf5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_2 + 0x18) + 0x40))
            (*(longlong **)(param_2 + 0x18),param_1 + 0x18);
  return;
}



// FUNCTION 14336bf70 FUN_14336bf70 body=302 status=ok
// SIG undefined FUN_14336bf70(void)

void FUN_14336bf70(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  ulonglong local_res8;
  
  lVar4 = *param_2;
  piVar1 = (int *)(lVar4 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *(longlong *)(param_1 + 0x10) = lVar4;
  if ((param_3 != 0) && (*(char *)(*(longlong *)(param_3 + 0x20) + 0x20) == '\x01')) {
    FUN_1432c2f70(&local_res8);
    bVar2 = *(byte *)(param_3 + 0x6d);
    if (bVar2 != 0) {
      (**(code **)(*(longlong *)(param_3 + (ulonglong)bVar2 * 4) + 0x30))
                (param_3 + (ulonglong)bVar2 * 4,&local_res8);
    }
    FUN_1432c3950(&local_res8,&DAT_145af796c,0xffffffffffffffff);
    FUN_1432c3950(&local_res8,**(undefined8 **)(param_1 + 0x10),0xffffffffffffffff);
    lVar4 = FUN_143360a90(*(undefined8 *)(*param_2 + 8),
                          (longlong)(local_res8 & 0xfffffffffffffffc) + 0xc,
                          *(ulonglong *)(local_res8 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
    *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 2;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x18) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *(longlong *)(param_1 + 0x18) = lVar4;
    piVar1 = (int *)(lVar4 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar4);
    }
    iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar3 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
    }
  }
  return;
}



// FUNCTION 14336c0b0 FUN_14336c0b0 body=93 status=ok
// SIG undefined FUN_14336c0b0(void)

void FUN_14336c0b0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  
  *(int *)(param_2 + 0x60) = *(int *)(param_2 + 0x60) + 1;
  *(int *)(param_2 + 0x60) = *(int *)(param_2 + 0x60) + 1;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *(longlong *)(param_1 + 0x10) = param_2 + 0x48;
  piVar1 = (int *)(param_2 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(param_2 + 0x48);
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x18) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *(longlong *)(param_1 + 0x18) = lVar2;
  return;
}



// FUNCTION 14336c120 FUN_14336c120 body=61 status=ok
// SIG undefined FUN_14336c120(void)

longlong * FUN_14336c120(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong local_res8 [4];
  
  plVar3 = (longlong *)
           FUN_1432e3fb0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10),local_res8);
  lVar2 = *plVar3;
  *param_2 = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(local_res8[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return param_2;
}



// FUNCTION 14336c170 FUN_14336c170 body=296 status=ok
// SIG undefined FUN_14336c170(void)

longlong FUN_14336c170(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined4 local_res8;
  undefined4 uStackX_c;
  
  puVar8 = (undefined4 *)0x0;
  plVar1 = param_1 + 0xe;
  local_res8 = 0;
  if (*plVar1 == 0) {
    lVar7 = *(longlong *)(param_1[4] + 0x10);
    if ((*(byte *)((longlong)param_1 + 0x6a) >> 4 & 1) == 0) {
      (**(code **)(*param_1 + 0x298))(param_1,&local_res8);
      lVar7 = (**(code **)(**(longlong **)(lVar7 + 0x48) + 0x50))(*(longlong **)(lVar7 + 0x48),0x28)
      ;
      if (lVar7 != 0) {
        puVar8 = (undefined4 *)FUN_14336bd80(lVar7,&local_res8,param_1[7],param_1);
      }
      FUN_14336db70(plVar1,puVar8);
      lVar7 = CONCAT44(uStackX_c,local_res8);
      piVar2 = (int *)(lVar7 + 0x18);
      *piVar2 = *piVar2 + -1;
      iVar3 = *piVar2;
    }
    else {
      puVar5 = (undefined4 *)
               (**(code **)(**(longlong **)(lVar7 + 0x48) + 0x50))
                         (*(longlong **)(lVar7 + 0x48),0x28,0);
      if (puVar5 == (undefined4 *)0x0) {
        lVar7 = CONCAT44(uStackX_c,local_res8);
      }
      else {
        lVar6 = (**(code **)(**(longlong **)(lVar7 + 0x18) + 0x1e0))();
        *(int *)(lVar6 + 0x60) = *(int *)(lVar6 + 0x60) + 1;
        lVar7 = lVar6 + 0x48;
        *(longlong *)(puVar5 + 4) = lVar7;
        *(int *)(lVar6 + 0x60) = *(int *)(lVar6 + 0x60) + 1;
        lVar4 = *(longlong *)(lVar6 + 0x50);
        *(longlong *)(puVar5 + 6) = lVar4 + 0x48;
        piVar2 = (int *)(lVar4 + 0x60);
        *piVar2 = *piVar2 + 1;
        *(longlong *)(puVar5 + 8) = lVar7;
        *(int *)(lVar6 + 0x60) = *(int *)(lVar6 + 0x60) + 1;
        *(undefined8 *)(puVar5 + 2) = 0;
        *puVar5 = 1;
        puVar8 = puVar5;
      }
      FUN_14336db70(plVar1,puVar8);
      if (puVar5 == (undefined4 *)0x0) goto LAB_14336c288;
      piVar2 = (int *)(lVar7 + 0x18);
      *piVar2 = *piVar2 + -1;
      iVar3 = *piVar2;
    }
    if (iVar3 == 0) {
      FUN_14335f920(lVar7);
    }
  }
LAB_14336c288:
  return *plVar1;
}



// FUNCTION 14336c2a0 FUN_14336c2a0 body=179 status=ok
// SIG undefined FUN_14336c2a0(void)

void FUN_14336c2a0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(short *)(param_1 + 0x68) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x38);
    if (lVar1 != 0) {
      lVar3 = 0;
      if ((*(ushort *)(lVar1 + 0x6a) >> 9 & 1) != 0) {
        lVar3 = lVar1;
      }
      if (lVar3 != 0) {
        uVar2 = Scaleform::GFx::DisplayList::FindDisplayIndex(lVar3 + 0xd8,param_1);
        FUN_1433d3fb0(lVar3 + 0xd8,lVar3,uVar2);
        *(undefined2 *)(param_1 + 0x68) = 0;
        FUN_1433d3ab0(lVar3 + 0xd8,lVar3,uVar2);
        return;
      }
    }
    *(undefined2 *)(param_1 + 0x68) = 0;
  }
  return;
}



// FUNCTION 14336c360 FUN_14336c360 body=94 status=ok
// SIG undefined FUN_14336c360(void)

undefined8 * FUN_14336c360(undefined8 *param_1)

{
  FUN_1433668d0();
  *param_1 = &PTR_FUN_145b02218;
  param_1[3] = &PTR_LAB_145b024c8;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  *(ushort *)((longlong)param_1 + 0x6a) = *(ushort *)((longlong)param_1 + 0x6a) | 0x100;
  *(undefined2 *)(param_1 + 0x11) = 10;
  return param_1;
}



// FUNCTION 14336c3d0 FUN_14336c3d0 body=279 status=ok
// SIG undefined FUN_14336c3d0(void)

void FUN_14336c3d0(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  char cVar4;
  
  lVar2 = param_1[0x10];
  *param_1 = (longlong)&PTR_FUN_145b02218;
  param_1[3] = (longlong)&PTR_LAB_145b024c8;
  if (lVar2 != 0) {
    if (*(RefCountNTSImpl **)(lVar2 + 0x20) != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar2 + 0x20));
    }
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
  }
  if (param_1[0xf] != 0) {
    cVar4 = (**(code **)(*param_1 + 0x278))(param_1);
    if (cVar4 == '\0') {
      if (param_1[0xf] == 0) goto LAB_14336c477;
      FUN_14336cc90(param_1,0,(short)param_1[0xd] != 0);
    }
    if (param_1[0xf] != 0) {
      cVar4 = (**(code **)(*param_1 + 0x278))(param_1);
      if ((cVar4 != '\0') && (param_1[0xf] != 0)) {
        FUN_14336cc90(param_1[0xf],0,1);
      }
    }
  }
LAB_14336c477:
  if (param_1[0xe] != 0) {
    *(undefined8 *)(param_1[0xe] + 8) = 0;
  }
  piVar3 = (int *)param_1[0xe];
  if ((piVar3 != (int *)0x0) && (*piVar3 = *piVar3 + -1, *piVar3 < 1)) {
    piVar1 = (int *)(*(longlong *)(piVar3 + 8) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    piVar1 = (int *)(*(longlong *)(piVar3 + 6) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    piVar1 = (int *)(*(longlong *)(piVar3 + 4) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar3);
  }
  FUN_143366960(param_1);
  return;
}



// FUNCTION 14336c500 FUN_14336c500 body=72 status=ok
// SIG undefined FUN_14336c500(void)

undefined4 * FUN_14336c500(longlong param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    puVar2 = *(undefined4 **)(param_1 + 0x60);
    if (puVar2 == (undefined4 *)0x0) {
      if (*(longlong *)(param_1 + 0x48) != 0) {
        uVar1 = FUN_1432cd1e0();
        puVar2 = (undefined4 *)FUN_1433620e0(uVar1);
        return puVar2;
      }
      return &DAT_14621c810;
    }
  }
  else {
    puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x30);
  }
  return puVar2;
}



// FUNCTION 14336c550 FUN_14336c550 body=475 status=ok
// SIG undefined FUN_14336c550(void)

void FUN_14336c550(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  double *pdVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float local_b8;
  float local_b4;
  undefined4 local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  undefined4 local_a0;
  float local_9c;
  undefined8 local_98;
  longlong lStack_90;
  undefined8 local_88;
  longlong lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (lVar1 == 0) {
    FUN_143366a70();
    return;
  }
  local_78 = *param_2;
  uStack_70 = param_2[1];
  uVar4 = param_2[2];
  uVar3 = param_2[3];
  local_68._0_4_ = (undefined4)uVar4;
  local_68._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_60._0_4_ = (undefined4)uVar3;
  uStack_60._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  *(undefined8 *)(lVar1 + 0x30) = local_78;
  *(undefined8 *)(lVar1 + 0x38) = uStack_70;
  *(undefined4 *)(lVar1 + 0x40) = (undefined4)local_68;
  *(undefined4 *)(lVar1 + 0x44) = local_68._4_4_;
  *(undefined4 *)(lVar1 + 0x48) = (undefined4)uStack_60;
  *(undefined4 *)(lVar1 + 0x4c) = uStack_60._4_4_;
  *(undefined8 *)(lVar1 + 0x50) = 0;
  *(undefined8 *)(lVar1 + 0x58) = 0x3f800000;
  pdVar2 = *(double **)(param_1 + 0x80);
  local_b8 = *(float *)(pdVar2 + 6);
  local_b4 = *(float *)((longlong)pdVar2 + 0x34);
  local_b0 = *(undefined4 *)(pdVar2 + 7);
  local_a8 = *(float *)(pdVar2 + 8);
  local_a4 = *(float *)((longlong)pdVar2 + 0x44);
  local_a0 = *(undefined4 *)(pdVar2 + 9);
  local_ac = *(float *)((longlong)pdVar2 + 0x3c) +
             local_b4 * (float)-pdVar2[1] + local_b8 * (float)-*pdVar2;
  local_9c = *(float *)((longlong)pdVar2 + 0x4c) +
             local_a4 * (float)-pdVar2[1] + local_a8 * (float)-*pdVar2;
  local_68 = uVar4;
  uStack_60 = uVar3;
  uVar4 = FUN_14336b350();
  FUN_1433625b0(uVar4,&local_b8);
  pdVar2 = *(double **)(param_1 + 0x80);
  local_98 = 0x3f800000;
  local_88 = 0x3f80000000000000;
  lStack_90 = (ulonglong)(uint)((float)pdVar2[1] * 0.0 + (float)*pdVar2 + 0.0) << 0x20;
  lStack_80 = (ulonglong)(uint)((float)*pdVar2 * 0.0 + (float)pdVar2[1] + 0.0) << 0x20;
  FUN_1433625b0(*(undefined8 *)((longlong)pdVar2[4] + 0x20),&local_98);
  return;
}



// FUNCTION 14336c740 FUN_14336c740 body=69 status=ok
// SIG undefined FUN_14336c740(void)

undefined * FUN_14336c740(longlong param_1)

{
  longlong lVar1;
  undefined *puVar2;
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    puVar2 = *(undefined **)(param_1 + 0x60);
    if (puVar2 == (undefined *)0x0) {
      if (*(longlong *)(param_1 + 0x48) != 0) {
        lVar1 = FUN_1432cd1e0();
        return (undefined *)(lVar1 + 0x10);
      }
      return &DAT_146b63020;
    }
  }
  else {
    puVar2 = (undefined *)(*(longlong *)(param_1 + 0x80) + 0x30);
  }
  return puVar2;
}



// FUNCTION 14336c790 FUN_14336c790 body=507 status=ok
// SIG undefined FUN_14336c790(void)

void FUN_14336c790(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  double *pdVar2;
  undefined8 uVar3;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (lVar1 == 0) {
    FUN_143366b50();
    return;
  }
  uVar3 = param_2[1];
  *(undefined8 *)(lVar1 + 0x30) = *param_2;
  *(undefined8 *)(lVar1 + 0x38) = uVar3;
  uVar3 = param_2[3];
  *(undefined8 *)(lVar1 + 0x40) = param_2[2];
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  uVar3 = param_2[5];
  *(undefined8 *)(lVar1 + 0x50) = param_2[4];
  *(undefined8 *)(lVar1 + 0x58) = uVar3;
  *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x60) = 1;
  pdVar2 = *(double **)(param_1 + 0x80);
  local_78 = pdVar2[6];
  dStack_70 = pdVar2[7];
  local_68 = pdVar2[8];
  dStack_60 = pdVar2[9];
  local_58 = pdVar2[10];
  dStack_50 = pdVar2[0xb];
  local_b8 = 0;
  local_d8 = 0x3f800000;
  local_c8 = 0x3f80000000000000;
  local_b0 = 0x3f800000;
  local_c0 = (ulonglong)(uint)(float)-pdVar2[1] << 0x20;
  local_d0 = (ulonglong)(uint)(float)-*pdVar2 << 0x20;
  local_48 = local_78;
  dStack_40 = dStack_70;
  local_38 = local_68;
  dStack_30 = dStack_60;
  local_28 = local_58;
  dStack_20 = dStack_50;
  Scaleform::Render::Matrix3x4<float>::MultiplyMatrix
            ((Matrix3x4<float> *)&local_48,(Matrix3x4<float> *)&local_78,
             (Matrix3x4<float> *)&local_d8);
  uVar3 = FUN_14336b350(param_1);
  FUN_143362630(uVar3,&local_48);
  uStack_100 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  local_108 = 0x3f800000;
  local_f8 = 0x3f80000000000000;
  uStack_e0 = 0x3f800000;
  local_88 = 0;
  local_a8 = 0x3f800000;
  local_98 = 0x3f80000000000000;
  local_80 = 0x3f800000;
  local_a0 = (ulonglong)(uint)(float)**(double **)(param_1 + 0x80) << 0x20;
  local_78 = 5.26354424712089e-315;
  dStack_70 = 0.0;
  local_90 = (ulonglong)(uint)(float)(*(double **)(param_1 + 0x80))[1] << 0x20;
  local_58 = 0.0;
  dStack_50 = 5.26354424712089e-315;
  local_68 = 0.0078125;
  dStack_60 = 0.0;
  Scaleform::Render::Matrix3x4<float>::MultiplyMatrix
            ((Matrix3x4<float> *)&local_108,(Matrix3x4<float> *)&local_78,
             (Matrix3x4<float> *)&local_a8);
  FUN_143362630(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20) + 0x20),
                &local_108);
  return;
}



// FUNCTION 14336c9b0 FUN_14336c9b0 body=221 status=ok
// SIG undefined FUN_14336c9b0(void)

void FUN_14336c9b0(longlong param_1,Matrix2x4<float> *param_2)

{
  undefined8 uVar1;
  Matrix2x4<float> *pMVar2;
  undefined4 *puVar3;
  
  if (*(longlong *)(param_1 + 0x38) == 0) {
    puVar3 = *(undefined4 **)(param_1 + 0x60);
    if (puVar3 == (undefined4 *)0x0) {
      if (*(longlong *)(param_1 + 0x48) == 0) {
        puVar3 = &DAT_14621c810;
      }
      else {
        uVar1 = FUN_1432cd1e0();
        puVar3 = (undefined4 *)FUN_1433620e0(uVar1);
      }
    }
    *(undefined4 *)param_2 = *puVar3;
    *(undefined4 *)(param_2 + 4) = puVar3[1];
    *(undefined4 *)(param_2 + 8) = puVar3[2];
    *(undefined4 *)(param_2 + 0xc) = puVar3[3];
    *(undefined4 *)(param_2 + 0x10) = puVar3[4];
    *(undefined4 *)(param_2 + 0x14) = puVar3[5];
    *(undefined4 *)(param_2 + 0x18) = puVar3[6];
    *(undefined4 *)(param_2 + 0x1c) = puVar3[7];
    return;
  }
  FUN_14336c9b0();
  pMVar2 = *(Matrix2x4<float> **)(param_1 + 0x60);
  if (pMVar2 == (Matrix2x4<float> *)0x0) {
    if (*(longlong *)(param_1 + 0x48) != 0) {
      uVar1 = FUN_1432cd1e0();
      pMVar2 = (Matrix2x4<float> *)FUN_1433620e0(uVar1);
      Scaleform::Render::Matrix2x4<float>::Prepend(param_2,pMVar2);
      return;
    }
    pMVar2 = (Matrix2x4<float> *)&DAT_14621c810;
  }
  Scaleform::Render::Matrix2x4<float>::Prepend(param_2,pMVar2);
  return;
}



// FUNCTION 14336caa0 GetAbsolutePath body=30 status=ok
// SIG undefined GetAbsolutePath(void)

undefined1 * Scaleform::GFx::DisplayObject::GetAbsolutePath(longlong param_1)

{
  undefined1 *puVar1;
  
  if (*(byte *)(param_1 + 0x6d) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014336cab2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined1 *)
             (**(code **)(*(longlong *)(param_1 + (ulonglong)*(byte *)(param_1 + 0x6d) * 4) + 0x30))
                       ();
    return puVar1;
  }
  return &DAT_145af3922;
}



// FUNCTION 14336caf0 HasEventHandler body=25 status=ok
// SIG undefined HasEventHandler(void)

undefined8 Scaleform::GFx::DisplayObject::HasEventHandler(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(byte *)(param_1 + 0x6d) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014336cb02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)(param_1 + (ulonglong)*(byte *)(param_1 + 0x6d) * 4) + 0x38))
                      ();
    return uVar1;
  }
  return 0;
}



// FUNCTION 14336cb10 FUN_14336cb10 body=32 status=ok
// SIG undefined FUN_14336cb10(void)

void FUN_14336cb10(longlong param_1)

{
  *(ushort *)(param_1 + 0x6a) = *(ushort *)(param_1 + 0x6a) | 0x2000;
  if (*(byte *)(param_1 + 0x6d) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014336cb2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + (ulonglong)*(byte *)(param_1 + 0x6d) * 4) + 0x48))();
    return;
  }
  return;
}



// FUNCTION 14336cb40 OnEventUnload body=65 status=ok
// SIG undefined OnEventUnload(void)

void Scaleform::GFx::DisplayObject::OnEventUnload(longlong param_1)

{
  byte bVar1;
  
  FUN_14336b450();
  if (*(longlong *)(param_1 + 0x70) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 8) = 0;
  }
  bVar1 = *(byte *)(param_1 + 0x6d);
  if (bVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014336cb77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + (ulonglong)bVar1 * 4) + 0x50))
              (param_1 + (ulonglong)bVar1 * 4);
    return;
  }
  return;
}



// FUNCTION 14336cbb0 FUN_14336cbb0 body=86 status=ok
// SIG undefined FUN_14336cbb0(void)

void FUN_14336cbb0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  
  if (param_2 == '\0') {
    *(ushort *)(param_1 + 0x6a) = *(ushort *)(param_1 + 0x6a) & 0xbfff;
    uVar1 = FUN_14336b350();
    FUN_143362a30(uVar1,0);
  }
  else {
    *(ushort *)(param_1 + 0x6a) = *(ushort *)(param_1 + 0x6a) | 0x4000;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      FUN_143362a30();
      FUN_14336d8b0(param_1);
      return;
    }
  }
  FUN_14336d8b0(param_1);
  return;
}



// FUNCTION 14336cc10 FUN_14336cc10 body=47 status=ok
// SIG undefined FUN_14336cc10(void)

longlong FUN_14336cc10(longlong *param_1)

{
  char cVar1;
  
  if (param_1[0xf] != 0) {
    cVar1 = (**(code **)(*param_1 + 0x278))();
    if (cVar1 == '\0') {
      return param_1[0xf];
    }
  }
  return 0;
}



// FUNCTION 14336cc50 FUN_14336cc50 body=47 status=ok
// SIG undefined FUN_14336cc50(void)

longlong FUN_14336cc50(longlong *param_1)

{
  char cVar1;
  
  if (param_1[0xf] != 0) {
    cVar1 = (**(code **)(*param_1 + 0x278))();
    if (cVar1 != '\0') {
      return param_1[0xf];
    }
  }
  return 0;
}



// FUNCTION 14336cc90 FUN_14336cc90 body=517 status=ok
// SIG undefined FUN_14336cc90(void)

void FUN_14336cc90(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_res8;
  
  lVar3 = FUN_14336b350();
  if (lVar3 != 0) {
    *(longlong *)(lVar3 + 0x18) = *(longlong *)(lVar3 + 0x18) + 1;
  }
  FUN_14336c2a0(param_1);
  if (param_2 != (longlong *)0x0) {
    if (param_1[0x10] != 0) {
      FUN_14336cf20(param_1,0);
    }
    FUN_14336c2a0(param_2);
  }
  if (param_1[0xf] != 0) {
    cVar2 = (**(code **)(*param_1 + 0x278))(param_1);
    if ((cVar2 == '\0') && (plVar4 = (longlong *)param_1[0xf], plVar4 != (longlong *)0x0)) {
      if (plVar4[0xf] != 0) {
        cVar2 = (**(code **)(*plVar4 + 0x278))(plVar4);
        if ((cVar2 == '\0') && (plVar4[0xf] != 0)) {
          FUN_14336cc90(plVar4,0,1);
        }
      }
      plVar4[0xf] = 0;
      *(ushort *)(plVar4 + 0x11) = *(ushort *)(plVar4 + 0x11) & 0xfffb;
      FUN_143362c90(lVar3,0);
      FUN_143366790(plVar4,param_3);
    }
    if (param_1[0xf] != 0) {
      cVar2 = (**(code **)(*param_1 + 0x278))(param_1);
      if ((cVar2 != '\0') && (param_1[0xf] != 0)) {
        FUN_14336cc90(param_1[0xf],0,1);
      }
    }
  }
  if ((param_2 != (longlong *)0x0) && (param_2[0xf] != 0)) {
    cVar2 = (**(code **)(*param_2 + 0x278))(param_2);
    if ((cVar2 != '\0') && (param_2[0xf] != 0)) {
      cVar2 = (**(code **)(*param_2 + 0x278))(param_2);
      if (cVar2 == '\0') {
        lVar5 = 0;
      }
      else {
        lVar5 = param_2[0xf];
      }
      FUN_14336cc90(lVar5,0,1);
    }
  }
  if (param_1[0xf] != 0) {
    cVar2 = (**(code **)(*param_1 + 0x278))(param_1);
    if (cVar2 == '\0') {
      Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[0xf]);
    }
  }
  lVar5 = 0;
  if (param_2 != (longlong *)0x0) {
    plVar4 = (longlong *)FUN_1433665f0(param_2,&local_res8,lVar3);
    if (*plVar4 != 0) {
      plVar1 = (longlong *)(*plVar4 + 0x18);
      *plVar1 = *plVar1 + 1;
    }
    lVar5 = *plVar4;
    if (local_res8 != 0) {
      plVar4 = (longlong *)(local_res8 + 0x18);
      *plVar4 = *plVar4 + -1;
      if (*plVar4 == 0) {
        FUN_1432ccf00();
      }
    }
  }
  FUN_143362c90(lVar3,lVar5);
  *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) & 0xfffb;
  if (lVar5 == 0) {
    param_1[0xf] = 0;
  }
  else {
    param_1[0xf] = (longlong)param_2;
    if (param_2 != (longlong *)0x0) {
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      FUN_14336cea0(param_2,param_1);
    }
    plVar4 = (longlong *)(lVar5 + 0x18);
    *plVar4 = *plVar4 + -1;
    if (*plVar4 == 0) {
      FUN_1432ccf00(lVar5);
    }
  }
  if (lVar3 != 0) {
    plVar4 = (longlong *)(lVar3 + 0x18);
    *plVar4 = *plVar4 + -1;
    if (*plVar4 == 0) {
      FUN_1432ccf00(lVar3);
    }
  }
  return;
}



// FUNCTION 14336cea0 FUN_14336cea0 body=107 status=ok
// SIG undefined FUN_14336cea0(void)

void FUN_14336cea0(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  if (param_1[0xf] != 0) {
    cVar1 = (**(code **)(*param_1 + 0x278))();
    if ((cVar1 == '\0') && (param_1[0xf] != 0)) {
      FUN_14336cc90(param_1,0,1);
    }
  }
  param_1[0xf] = param_2;
  if (param_2 != 0) {
    *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) | 4;
    return;
  }
  *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) & 0xfffb;
  return;
}



// FUNCTION 14336cf20 FUN_14336cf20 body=930 status=ok
// SIG undefined FUN_14336cf20(void)

void FUN_14336cf20(longlong *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  double dVar5;
  RefCountNTSImpl *this;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined4 local_res10 [2];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  if (param_2 != (double *)0x0) {
    if (((param_1[0xf] != 0) && (cVar10 = (**(code **)(*param_1 + 0x278))(), cVar10 == '\0')) &&
       (param_1[0xf] != 0)) {
      FUN_14336cc90(param_1,0,1);
    }
    if (*(short *)((longlong)param_1 + 0x6a) < 0) {
      return;
    }
  }
  uVar11 = FUN_14336b350();
  if (param_1[0x10] != 0) {
    FUN_143362c90(uVar11,0);
    lVar12 = param_1[0x10];
    if (*(char *)(lVar12 + 0x60) == '\0') {
      local_58 = *(undefined4 *)(lVar12 + 0x30);
      local_54 = *(undefined4 *)(lVar12 + 0x34);
      local_50 = *(undefined4 *)(lVar12 + 0x38);
      local_4c = *(undefined4 *)(lVar12 + 0x3c);
      local_48 = *(undefined4 *)(lVar12 + 0x40);
      local_44 = *(undefined4 *)(lVar12 + 0x44);
      local_40 = *(undefined4 *)(lVar12 + 0x48);
      local_3c = *(undefined4 *)(lVar12 + 0x4c);
      FUN_1433625b0(uVar11,&local_58);
    }
    else {
      FUN_143362630(uVar11,lVar12 + 0x30);
    }
  }
  if (param_2 != (double *)0x0) {
    lVar12 = FUN_1432cd1e0(uVar11);
    if ((*(byte *)(lVar12 + 10) >> 4 & 1) != 0) {
      FUN_143362c90(uVar11,0);
    }
    if (param_1[0x10] == 0) {
      local_res10[0] = 0x142;
      puVar13 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x70,local_res10);
      puVar14 = (undefined8 *)0x0;
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = 0;
        puVar13[1] = 0;
        puVar13[2] = 0;
        puVar13[3] = 0;
        puVar13[4] = 0;
        puVar13[6] = 0;
        puVar13[7] = 0;
        puVar13[8] = 0;
        puVar13[9] = 0;
        puVar13[10] = 0;
        puVar13[0xb] = 0;
        *(undefined4 *)(puVar13 + 6) = 0x3f800000;
        *(undefined4 *)((longlong)puVar13 + 0x44) = 0x3f800000;
        *(undefined4 *)(puVar13 + 0xb) = 0x3f800000;
        puVar14 = puVar13;
      }
      param_1[0x10] = (longlong)puVar14;
    }
    pdVar4 = (double *)param_1[0x10];
    uVar6 = *(undefined4 *)(param_2 + 1);
    uVar7 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar8 = *(undefined4 *)(param_2 + 2);
    uVar9 = *(undefined4 *)((longlong)param_2 + 0x14);
    dVar5 = *param_2;
    pdVar4[3] = param_2[3];
    *pdVar4 = dVar5;
    *(undefined4 *)(pdVar4 + 1) = uVar6;
    *(undefined4 *)((longlong)pdVar4 + 0xc) = uVar7;
    *(undefined4 *)(pdVar4 + 2) = uVar8;
    *(undefined4 *)((longlong)pdVar4 + 0x14) = uVar9;
    lVar15 = FUN_1432cd1e0(uVar11);
    lVar12 = param_1[0x10];
    uVar16 = *(undefined8 *)(lVar15 + 0x18);
    *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)(lVar15 + 0x10);
    *(undefined8 *)(lVar12 + 0x38) = uVar16;
    uVar6 = *(undefined4 *)(lVar15 + 0x24);
    uVar7 = *(undefined4 *)(lVar15 + 0x28);
    uVar8 = *(undefined4 *)(lVar15 + 0x2c);
    *(undefined4 *)(lVar12 + 0x40) = *(undefined4 *)(lVar15 + 0x20);
    *(undefined4 *)(lVar12 + 0x44) = uVar6;
    *(undefined4 *)(lVar12 + 0x48) = uVar7;
    *(undefined4 *)(lVar12 + 0x4c) = uVar8;
    uVar6 = *(undefined4 *)(lVar15 + 0x34);
    uVar7 = *(undefined4 *)(lVar15 + 0x38);
    uVar8 = *(undefined4 *)(lVar15 + 0x3c);
    *(undefined4 *)(lVar12 + 0x50) = *(undefined4 *)(lVar15 + 0x30);
    *(undefined4 *)(lVar12 + 0x54) = uVar6;
    *(undefined4 *)(lVar12 + 0x58) = uVar7;
    *(undefined4 *)(lVar12 + 0x5c) = uVar8;
    lVar12 = FUN_1432cd1e0(uVar11);
    *(byte *)(param_1[0x10] + 0x60) = (byte)((ushort)*(undefined2 *)(lVar12 + 10) >> 9) & 1;
    uVar16 = FUN_1432ec700(*(undefined8 *)(param_1[4] + 0x10));
    lVar12 = param_1[0x10];
    this = *(RefCountNTSImpl **)(lVar12 + 0x20);
    if (this != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this);
    }
    *(undefined8 *)(lVar12 + 0x20) = uVar16;
    FUN_14337e3d0(*(undefined8 *)(param_1[0x10] + 0x20),0xffffffff);
    dVar5 = param_2[3];
    dVar1 = param_2[1];
    dVar2 = param_2[2];
    dVar3 = *param_2;
    FUN_14337ee50(*(undefined8 *)(param_1[0x10] + 0x20),0,0);
    FUN_14337ef60(*(undefined8 *)(param_1[0x10] + 0x20),(float)(dVar2 - dVar3),0);
    FUN_14337ef60(*(undefined8 *)(param_1[0x10] + 0x20),(float)(dVar2 - dVar3),
                  (float)(dVar5 - dVar1));
    FUN_14337ef60(*(undefined8 *)(param_1[0x10] + 0x20),0,(float)(dVar5 - dVar1));
    FUN_14337ee10(*(undefined8 *)(param_1[0x10] + 0x20));
    FUN_14337f400(*(undefined8 *)(param_1[0x10] + 0x20));
    if (*(char *)(param_1[0x10] + 0x60) == '\0') {
      uVar16 = FUN_1432cd1e0(uVar11);
      uVar16 = FUN_1433620e0(uVar16);
      (**(code **)(*param_1 + 0x18))(param_1,uVar16);
    }
    else {
      lVar12 = FUN_1432cd1e0(uVar11);
      (**(code **)(*param_1 + 0x28))(param_1,lVar12 + 0x10);
    }
    FUN_143362c90(uVar11,*(undefined8 *)(*(longlong *)(param_1[0x10] + 0x20) + 0x20));
    return;
  }
  lVar12 = param_1[0x10];
  if (lVar12 != 0) {
    if (*(RefCountNTSImpl **)(lVar12 + 0x20) != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar12 + 0x20));
    }
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar12);
  }
  param_1[0x10] = 0;
  return;
}



// FUNCTION 14336d2d0 FUN_14336d2d0 body=229 status=ok
// SIG undefined FUN_14336d2d0(void)

double FUN_14336d2d0(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float local_res8;
  float local_resc;
  float local_res10 [6];
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
  local_resc = *(float *)(lVar1 + 0x224c);
  local_res8 = *(float *)(lVar1 + 0x2248);
  fVar5 = (local_resc - *(float *)(lVar1 + 0xec) * 20.0) /
          (*(float *)(lVar1 + 0x10c) - *(float *)(lVar1 + 0x104));
  fVar2 = *(float *)(lVar1 + 0xe8) * 20.0;
  fVar4 = (local_res8 - fVar2) / (*(float *)(lVar1 + 0x108) - *(float *)(lVar1 + 0x100));
  *(float *)(lVar1 + 0x144) = -((fVar5 + fVar5) - 1.0);
  *(float *)(lVar1 + 0x140) = (fVar4 + fVar4) - 1.0;
  FUN_14336b000(fVar2,local_res10,&local_res8,0,0);
  dVar3 = _guard_xfg_dispatch_icall_nop((double)local_res10[0] + 0.5);
  return dVar3 * 0.05;
}



// FUNCTION 14336d3c0 FUN_14336d3c0 body=229 status=ok
// SIG undefined FUN_14336d3c0(void)

double FUN_14336d3c0(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float local_res8;
  float local_resc;
  undefined1 local_res10 [4];
  float local_res14;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
  local_resc = *(float *)(lVar1 + 0x224c);
  local_res8 = *(float *)(lVar1 + 0x2248);
  fVar5 = (local_resc - *(float *)(lVar1 + 0xec) * 20.0) /
          (*(float *)(lVar1 + 0x10c) - *(float *)(lVar1 + 0x104));
  fVar2 = *(float *)(lVar1 + 0xe8) * 20.0;
  fVar4 = (local_res8 - fVar2) / (*(float *)(lVar1 + 0x108) - *(float *)(lVar1 + 0x100));
  *(float *)(lVar1 + 0x144) = -((fVar5 + fVar5) - 1.0);
  *(float *)(lVar1 + 0x140) = (fVar4 + fVar4) - 1.0;
  FUN_14336b000(fVar2,local_res10,&local_res8,0,0);
  dVar3 = _guard_xfg_dispatch_icall_nop((double)local_res14 + 0.5);
  return dVar3 * 0.05;
}



// FUNCTION 14336d4b0 FUN_14336d4b0 body=160 status=ok
// SIG undefined FUN_14336d4b0(void)

void FUN_14336d4b0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res8 [2];
  
  if (*(int *)(*param_2 + 0x20) != 0) {
    *(ushort *)(param_1 + 0x88) = *(ushort *)(param_1 + 0x88) & 0xfffd;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_14336bf70(*(longlong *)(param_1 + 0x70),param_2,*(undefined8 *)(param_1 + 0x38));
    return;
  }
  local_res8[0] = 0x142;
  lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x28,local_res8);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_14336bd80(lVar1,param_2,*(undefined8 *)(param_1 + 0x38),param_1);
  }
  FUN_14336db70(param_1 + 0x70,uVar2);
  return;
}



// FUNCTION 14336d560 FUN_14336d560 body=92 status=ok
// SIG undefined FUN_14336d560(void)

void FUN_14336d560(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_14336d4b0();
  lVar3 = *(longlong *)(param_1 + 0x70);
  if ((lVar3 == 0) && (lVar3 = FUN_14336c170(param_1), lVar3 == 0)) {
    return;
  }
  lVar2 = *param_2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*(longlong *)(lVar3 + 0x20) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *(longlong *)(lVar3 + 0x20) = lVar2;
  return;
}



// FUNCTION 14336d5d0 GetName body=86 status=ok
// SIG undefined GetName(void)

longlong * Scaleform::GFx::DisplayObject::GetName(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  if (lVar1 == 0) {
    lVar1 = FUN_14336c170();
    if (lVar1 == 0) {
      lVar1 = (**(code **)(**(longlong **)
                             (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0x18) + 0x1e0))
                        ();
      lVar1 = lVar1 + 0x48;
      goto LAB_14336d612;
    }
  }
  lVar1 = *(longlong *)(lVar1 + 0x10);
LAB_14336d612:
  *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1;
  *param_2 = lVar1;
  return param_2;
}



// FUNCTION 14336d630 GetOriginalName body=114 status=ok
// SIG undefined GetOriginalName(void)

longlong * Scaleform::GFx::DisplayObject::GetOriginalName(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  if (lVar1 == 0) {
    lVar1 = FUN_14336c170();
    if (lVar1 == 0) {
      lVar1 = *(longlong *)(param_1 + 0x70);
      if (lVar1 == 0) {
        lVar1 = FUN_14336c170(param_1);
        if (lVar1 == 0) {
          lVar1 = (**(code **)(**(longlong **)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0x18) +
                              0x1e0))();
          lVar1 = lVar1 + 0x48;
          goto LAB_14336d68e;
        }
      }
      lVar1 = *(longlong *)(lVar1 + 0x10);
      goto LAB_14336d68e;
    }
  }
  lVar1 = *(longlong *)(lVar1 + 0x20);
LAB_14336d68e:
  *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1;
  *param_2 = lVar1;
  return param_2;
}



// FUNCTION 14336d6d0 FUN_14336d6d0 body=256 status=ok
// SIG undefined FUN_14336d6d0(void)

void FUN_14336d6d0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    local_60 = 0x4059000000000000;
    local_58 = 0x4059000000000000;
    uStack_50 = 0;
    local_48 = 0x3f800000;
    uStack_40 = 0;
    local_38 = 0x3f80000000000000;
    uStack_30 = 0;
    local_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0x40590000;
    local_18 = 0;
    uStack_10 = 0;
    local_68 = 0;
    uVar1 = FUN_14336b690(0,&local_68);
    FUN_14336b830(param_1,uVar1);
  }
  if (param_2 == '\0') {
    *(ushort *)(param_1 + 0x88) = *(ushort *)(param_1 + 0x88) & 0xfff7;
  }
  else {
    *(ushort *)(param_1 + 0x88) = *(ushort *)(param_1 + 0x88) | 8;
  }
  if ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0x52f0) >> 0xd & 1) == 0) {
    *(ushort *)(param_1 + 0x88) = *(ushort *)(param_1 + 0x88) & 0xffef;
  }
  else {
    *(ushort *)(param_1 + 0x88) = *(ushort *)(param_1 + 0x88) | 0x10;
  }
  if (((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0x52f0) >> 0xd & 1) != 0) &&
     (param_2 != '\0')) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x50));
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  return;
}



// FUNCTION 14336d7e0 FUN_14336d7e0 body=200 status=ok
// SIG undefined FUN_14336d7e0(void)

undefined8
FUN_14336d7e0(longlong param_1,float *param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5)

{
  double dVar1;
  double *pdVar2;
  float local_res8;
  float local_resc;
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    FUN_14336b000(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    FUN_14336b000(param_1,&local_res8,param_3,param_4,param_5);
    *param_2 = local_res8;
    param_2[1] = local_resc;
    dVar1 = (*(double **)(param_1 + 0x80))[1];
    *param_2 = (float)**(double **)(param_1 + 0x80) + local_res8;
    param_2[1] = (float)dVar1 + local_resc;
    if ((((local_res8 < 0.0) || (local_resc < 0.0)) ||
        (pdVar2 = *(double **)(param_1 + 0x80), pdVar2[2] - *pdVar2 < (double)local_res8)) ||
       (pdVar2[3] - pdVar2[1] < (double)local_resc)) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 14336d8b0 FUN_14336d8b0 body=255 status=ok
// SIG undefined FUN_14336d8b0(void)

void FUN_14336d8b0(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  
  if ((*(uint *)(*(longlong *)(param_1[4] + 0x10) + 0x52f0) >> 0xb & 1) != 0) {
    cVar2 = (**(code **)(*param_1 + 0x1d8))();
    plVar7 = param_1;
    if (cVar2 != '\0') {
      do {
        cVar3 = (**(code **)(*plVar7 + 0x1d8))(plVar7);
        if (cVar3 == '\0') {
          cVar2 = '\0';
          break;
        }
        plVar1 = plVar7 + 7;
        plVar7 = (longlong *)*plVar1;
      } while ((longlong *)*plVar1 != (longlong *)0x0);
    }
    plVar7 = (longlong *)0x0;
    if (*(char *)((longlong)param_1 + 0x6a) < '\0') {
      plVar7 = param_1;
    }
    if ((plVar7 != (longlong *)0x0) &&
       (uVar5 = *(uint *)(plVar7 + 0x17), (cVar2 == '\0') != (bool)((byte)(uVar5 >> 3) & 1))) {
      if (cVar2 == '\0') {
        uVar5 = uVar5 | 8;
      }
      else {
        uVar5 = uVar5 & 0xfffffff7;
      }
      *(uint *)(plVar7 + 0x17) = uVar5;
      if (((uVar5 >> 0x15 & 1) == 0) || ((uVar5 >> 0x16 & 1) != 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = CONCAT71((uint7)(uint3)(uVar5 >> 8),1);
      }
      iVar4 = (**(code **)(*plVar7 + 0x340))(plVar7,uVar6);
      if (iVar4 == -1) {
        *(uint *)(plVar7 + 0x17) = *(uint *)(plVar7 + 0x17) | 0x400000;
      }
      else if (iVar4 == 1) {
        FUN_14336e960(plVar7);
      }
      (**(code **)(*plVar7 + 0x348))(plVar7);
    }
  }
  return;
}



// FUNCTION 14336d9c0 FUN_14336d9c0 body=227 status=ok
// SIG undefined FUN_14336d9c0(void)

void FUN_14336d9c0(float *param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = _guard_xfg_dispatch_icall_nop(param_4);
  fVar4 = _guard_xfg_dispatch_icall_nop(param_4);
  fVar1 = *param_1;
  fVar2 = param_1[5];
  param_1[5] = (param_1[1] * fVar4 + fVar2 * fVar3) * param_3;
  param_1[1] = (param_1[1] * fVar3 - fVar2 * fVar4) * param_3;
  *param_1 = (fVar1 * fVar3 - param_1[4] * fVar4) * param_2;
  param_1[4] = (fVar1 * fVar4 + param_1[4] * fVar3) * param_2;
  return;
}



// FUNCTION 14336dab0 FUN_14336dab0 body=72 status=ok
// SIG undefined FUN_14336dab0(void)

ulonglong FUN_14336dab0(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x38);
  if ((uVar1 != 0) && (*(longlong *)(uVar1 + 0x48) != 0)) {
    uVar1 = FUN_1432cd1e0();
    if (((*(ushort *)(uVar1 + 10) >> 9 & 1) != 0) &&
       (uVar1 = *(ulonglong *)(param_1 + 0x38), *(longlong *)(uVar1 + 0x58) == 0)) {
      return CONCAT71((int7)(uVar1 >> 8),1);
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 14336db00 PerspectiveDataType body=106 status=ok
// SIG undefined PerspectiveDataType(void)

undefined8 *
Scaleform::GFx::DisplayObjectBase::PerspectiveDataType::PerspectiveDataType(undefined8 *param_1)

{
  double dVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  dVar1 = (double)NumberUtil::NaN();
  *(float *)(param_1 + 2) = (float)dVar1;
  dVar1 = (double)NumberUtil::NaN();
  *(float *)((longlong)param_1 + 0x14) = (float)dVar1;
  return param_1;
}



// FUNCTION 14336db70 FUN_14336db70 body=141 status=ok
// SIG undefined FUN_14336db70(void)

undefined8 * FUN_14336db70(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  if ((piVar2 != (int *)0x0) && (*piVar2 = *piVar2 + -1, *piVar2 < 1)) {
    piVar1 = (int *)(*(longlong *)(piVar2 + 8) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    piVar1 = (int *)(*(longlong *)(piVar2 + 6) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    piVar1 = (int *)(*(longlong *)(piVar2 + 4) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar2);
    *param_1 = param_2;
    return param_1;
  }
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 14336dc20 FUN_14336dc20 body=89 status=ok
// SIG undefined FUN_14336dc20(void)

undefined8 FUN_14336dc20(undefined8 param_1,ulonglong param_2)

{
  FUN_14336c3d0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 14336dc80 FUN_14336dc80 body=89 status=ok
// SIG undefined FUN_14336dc80(void)

undefined8 FUN_14336dc80(undefined8 param_1,ulonglong param_2)

{
  FUN_143366960();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 14336dce0 FUN_14336dce0 body=129 status=ok
// SIG undefined FUN_14336dce0(void)

undefined8 FUN_14336dce0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  RefCountImpl *local_res8;
  
  if ((*(uint *)(param_1 + 0x52f0) >> 1 & 1) == 0) {
    puVar1 = (undefined8 *)Scaleform::GFx::StateBag::GetLog(param_1 + 0x10,&local_res8);
    if ((RefCountImpl *)*puVar1 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef((RefCountImpl *)*puVar1);
    }
    if (*(RefCountImpl **)(param_1 + 0x230) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x230));
    }
    uVar2 = *puVar1;
    *(undefined8 *)(param_1 + 0x230) = uVar2;
    if (local_res8 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(local_res8);
      return *(undefined8 *)(param_1 + 0x230);
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x230);
  }
  return uVar2;
}



// FUNCTION 14336dd70 FUN_14336dd70 body=76 status=ok
// SIG undefined FUN_14336dd70(void)

undefined8 FUN_14336dd70(undefined4 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  lVar8 = FUN_143362af0(param_1,6);
  if (lVar8 == 0) {
    return 0;
  }
  lVar8 = *(longlong *)(lVar8 + 8);
  uVar1 = *(undefined8 *)(lVar8 + 0x18);
  uVar2 = *(undefined8 *)(lVar8 + 0x20);
  uVar3 = *(undefined8 *)(lVar8 + 0x28);
  uVar4 = *(undefined8 *)(lVar8 + 0x30);
  uVar5 = *(undefined8 *)(lVar8 + 0x38);
  uVar6 = *(undefined8 *)(lVar8 + 0x40);
  uVar7 = *(undefined8 *)(lVar8 + 0x48);
  *param_2 = *(undefined8 *)(lVar8 + 0x10);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  param_2[4] = uVar4;
  param_2[5] = uVar5;
  param_2[6] = uVar6;
  param_2[7] = uVar7;
  return CONCAT71((int7)((ulonglong)(lVar8 + 0x10) >> 8),1);
}



// FUNCTION 14336ddc0 GetRotationDouble body=20 status=ok
// SIG double GetRotationDouble(Matrix2x4<float> * this)

/* public: double __cdecl Scaleform::Render::Matrix2x4<float>::GetRotationDouble(void)const __ptr64
    */

double __thiscall Scaleform::Render::Matrix2x4<float>::GetRotationDouble(Matrix2x4<float> *this)

{
  double dVar1;
  
                    /* 0x336ddc0  202  ?GetRotationDouble@?$Matrix2x4@M@Render@Scaleform@@QEBANXZ */
  dVar1 = ::_guard_xfg_dispatch_icall_nop((double)*(float *)(this + 0x10),(double)*(float *)this);
  return dVar1;
}



// FUNCTION 14336dde0 FUN_14336dde0 body=68 status=ok
// SIG undefined FUN_14336dde0(void)

undefined8 FUN_14336dde0(undefined4 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar6 = FUN_143362af0(param_1,5);
  if (lVar6 == 0) {
    return 0;
  }
  lVar6 = *(longlong *)(lVar6 + 8);
  uVar1 = *(undefined8 *)(lVar6 + 0x18);
  uVar2 = *(undefined8 *)(lVar6 + 0x20);
  uVar3 = *(undefined8 *)(lVar6 + 0x28);
  uVar4 = *(undefined8 *)(lVar6 + 0x30);
  uVar5 = *(undefined8 *)(lVar6 + 0x38);
  *param_2 = *(undefined8 *)(lVar6 + 0x10);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  param_2[4] = uVar4;
  param_2[5] = uVar5;
  return CONCAT71((int7)((ulonglong)(lVar6 + 0x10) >> 8),1);
}



// FUNCTION 14336de30 GetXScaleDouble body=32 status=ok
// SIG double GetXScaleDouble(Matrix2x4<float> * this)

/* public: double __cdecl Scaleform::Render::Matrix2x4<float>::GetXScaleDouble(void)const __ptr64 */

double __thiscall Scaleform::Render::Matrix2x4<float>::GetXScaleDouble(Matrix2x4<float> *this)

{
  double dVar1;
  
                    /* 0x336de30  220  ?GetXScaleDouble@?$Matrix2x4@M@Render@Scaleform@@QEBANXZ */
  dVar1 = ::_guard_xfg_dispatch_icall_nop
                    ((double)*(float *)this * (double)*(float *)this +
                     (double)*(float *)(this + 0x10) * (double)*(float *)(this + 0x10));
  return dVar1;
}



// FUNCTION 14336de50 GetYScaleDouble body=33 status=ok
// SIG double GetYScaleDouble(Matrix2x4<float> * this)

/* public: double __cdecl Scaleform::Render::Matrix2x4<float>::GetYScaleDouble(void)const __ptr64 */

double __thiscall Scaleform::Render::Matrix2x4<float>::GetYScaleDouble(Matrix2x4<float> *this)

{
  double dVar1;
  
                    /* 0x336de50  222  ?GetYScaleDouble@?$Matrix2x4@M@Render@Scaleform@@QEBANXZ */
  dVar1 = ::_guard_xfg_dispatch_icall_nop
                    ((double)*(float *)(this + 4) * (double)*(float *)(this + 4) +
                     (double)*(float *)(this + 0x14) * (double)*(float *)(this + 0x14));
  return dVar1;
}



// FUNCTION 14336de80 IsNaN body=53 status=ok
// SIG undefined IsNaN(void)

undefined8 Scaleform::GFx::NumberUtil::IsNaN(ulonglong param_1)

{
  if (((param_1 & 0x7ff0000000000000) == 0x7ff0000000000000) && ((param_1 & 0xfffffffffffff) != 0))
  {
    return 1;
  }
  return 0;
}



// FUNCTION 14336dec0 FUN_14336dec0 body=14 status=ok
// SIG undefined FUN_14336dec0(void)

ushort FUN_14336dec0(longlong param_1)

{
  return *(ushort *)(param_1 + 0x88) >> 2 & 1;
}



// FUNCTION 14336ded0 IsValid body=141 status=ok
// SIG bool IsValid(Matrix2x4<float> * this)

/* public: bool __cdecl Scaleform::Render::Matrix2x4<float>::IsValid(void)const __ptr64 */

bool __thiscall Scaleform::Render::Matrix2x4<float>::IsValid(Matrix2x4<float> *this)

{
                    /* 0x336ded0  245  ?IsValid@?$Matrix2x4@M@Render@Scaleform@@QEBA_NXZ */
  if (((((-3.4028235e+38 <= *(float *)this) && (*(float *)this <= 3.4028235e+38)) &&
       (-3.4028235e+38 <= *(float *)(this + 4))) &&
      (((*(float *)(this + 4) <= 3.4028235e+38 && (-3.4028235e+38 <= *(float *)(this + 8))) &&
       ((*(float *)(this + 8) <= 3.4028235e+38 &&
        ((-3.4028235e+38 <= *(float *)(this + 0xc) && (*(float *)(this + 0xc) <= 3.4028235e+38))))))
      )) && ((-3.4028235e+38 <= *(float *)(this + 0x10) &&
             (((((*(float *)(this + 0x10) <= 3.4028235e+38 &&
                 (-3.4028235e+38 <= *(float *)(this + 0x14))) &&
                (*(float *)(this + 0x14) <= 3.4028235e+38)) &&
               ((-3.4028235e+38 <= *(float *)(this + 0x18) &&
                (*(float *)(this + 0x18) <= 3.4028235e+38)))) &&
              ((-3.4028235e+38 <= *(float *)(this + 0x1c) &&
               (*(float *)(this + 0x1c) <= 3.4028235e+38)))))))) {
    return true;
  }
  return false;
}



// FUNCTION 14336df60 IsValid body=229 status=ok
// SIG bool IsValid(Matrix3x4<float> * this)

/* public: bool __cdecl Scaleform::Render::Matrix3x4<float>::IsValid(void)const __ptr64 */

bool __thiscall Scaleform::Render::Matrix3x4<float>::IsValid(Matrix3x4<float> *this)

{
                    /* 0x336df60  246  ?IsValid@?$Matrix3x4@M@Render@Scaleform@@QEBA_NXZ */
  if ((((((-3.4028235e+38 <= *(float *)this) && (*(float *)this <= 3.4028235e+38)) &&
        (-3.4028235e+38 <= *(float *)(this + 4))) &&
       (((*(float *)(this + 4) <= 3.4028235e+38 && (-3.4028235e+38 <= *(float *)(this + 8))) &&
        ((*(float *)(this + 8) <= 3.4028235e+38 &&
         ((-3.4028235e+38 <= *(float *)(this + 0xc) && (*(float *)(this + 0xc) <= 3.4028235e+38)))))
        ))) && (((-3.4028235e+38 <= *(float *)(this + 0x10) &&
                 ((((((*(float *)(this + 0x10) <= 3.4028235e+38 &&
                      (-3.4028235e+38 <= *(float *)(this + 0x14))) &&
                     (*(float *)(this + 0x14) <= 3.4028235e+38)) &&
                    ((-3.4028235e+38 <= *(float *)(this + 0x18) &&
                     (*(float *)(this + 0x18) <= 3.4028235e+38)))) &&
                   ((-3.4028235e+38 <= *(float *)(this + 0x1c) &&
                    ((*(float *)(this + 0x1c) <= 3.4028235e+38 &&
                     (-3.4028235e+38 <= *(float *)(this + 0x20))))))) &&
                  (*(float *)(this + 0x20) <= 3.4028235e+38)))) &&
                (((-3.4028235e+38 <= *(float *)(this + 0x24) &&
                  (*(float *)(this + 0x24) <= 3.4028235e+38)) &&
                 (-3.4028235e+38 <= *(float *)(this + 0x28))))))) &&
     (((*(float *)(this + 0x28) <= 3.4028235e+38 && (-3.4028235e+38 <= *(float *)(this + 0x2c))) &&
      (*(float *)(this + 0x2c) <= 3.4028235e+38)))) {
    return true;
  }
  return false;
}



// FUNCTION 14336e060 FUN_14336e060 body=147 status=ok
// SIG undefined FUN_14336e060(void)

longlong * FUN_14336e060(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)*param_3 + 0x50))((longlong *)*param_3,0xa0,0);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_1432ef4d0(puVar2,2);
    *puVar2 = &PTR_FUN_145af8f68;
    puVar2[0x13] = 0;
    puVar2[0x12] = 0;
  }
  lVar3 = FUN_1432ceba0(param_3,puVar2);
  if (lVar3 != 0) {
    *(longlong *)(lVar3 + 0x18) = *(longlong *)(lVar3 + 0x18) + 1;
  }
  *param_2 = lVar3;
  if (lVar3 != 0) {
    plVar1 = (longlong *)(lVar3 + 0x18);
    *plVar1 = *plVar1 + -1;
    if (*plVar1 == 0) {
      FUN_1432ccf00(lVar3);
    }
  }
  return param_2;
}



// FUNCTION 14336e100 FUN_14336e100 body=72 status=ok
// SIG undefined FUN_14336e100(void)

short FUN_14336e100(longlong param_1)

{
  short sVar1;
  longlong lVar2;
  undefined2 uVar3;
  
  sVar1 = *(short *)(param_1 + 0xbe);
  if (sVar1 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    if ((*(short *)(lVar2 + 0xbe) == 0) && (*(longlong *)(lVar2 + 0x38) != 0)) {
      uVar3 = Scaleform::GFx::InteractiveObject::GetFocusGroupMask();
      *(undefined2 *)(lVar2 + 0xbe) = uVar3;
    }
    sVar1 = *(short *)(lVar2 + 0xbe);
  }
  return sVar1;
}



// FUNCTION 14336e150 GetFocusGroupMask body=66 status=ok
// SIG undefined GetFocusGroupMask(void)

undefined2 Scaleform::GFx::InteractiveObject::GetFocusGroupMask(longlong param_1)

{
  undefined2 uVar1;
  
  if (*(short *)(param_1 + 0xbe) == 0) {
    if (*(longlong *)(param_1 + 0x38) != 0) {
      uVar1 = GetFocusGroupMask();
      *(undefined2 *)(param_1 + 0xbe) = uVar1;
    }
    return *(undefined2 *)(param_1 + 0xbe);
  }
  return *(undefined2 *)(param_1 + 0xbe);
}



// FUNCTION 14336e1a0 FUN_14336e1a0 body=95 status=ok
// SIG undefined FUN_14336e1a0(void)

undefined2 FUN_14336e1a0(longlong param_1,longlong param_2,uint param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined2 uVar3;
  ushort uVar4;
  
  bVar1 = *(byte *)((ulonglong)param_3 + 0x52c4 + param_2);
  uVar4 = *(ushort *)(param_1 + 0xbe);
  if (uVar4 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    if ((*(short *)(lVar2 + 0xbe) == 0) && (*(longlong *)(lVar2 + 0x38) != 0)) {
      uVar3 = Scaleform::GFx::InteractiveObject::GetFocusGroupMask();
      *(undefined2 *)(lVar2 + 0xbe) = uVar3;
    }
    uVar4 = *(ushort *)(lVar2 + 0xbe);
  }
  return CONCAT11((char)(uVar4 >> 8),(uVar4 >> (bVar1 & 0x1f) & 1) != 0);
}



// FUNCTION 14336e210 FUN_14336e210 body=79 status=ok
// SIG undefined FUN_14336e210(void)

undefined2 FUN_14336e210(longlong param_1,longlong param_2,uint param_3)

{
  byte bVar1;
  undefined2 uVar2;
  
  bVar1 = *(byte *)((ulonglong)param_3 + 0x52c4 + param_2);
  if ((*(short *)(param_1 + 0xbe) == 0) && (*(longlong *)(param_1 + 0x38) != 0)) {
    uVar2 = Scaleform::GFx::InteractiveObject::GetFocusGroupMask();
    *(undefined2 *)(param_1 + 0xbe) = uVar2;
  }
  return CONCAT11((char)(*(ushort *)(param_1 + 0xbe) >> 8),
                  (*(ushort *)(param_1 + 0xbe) >> (bVar1 & 0x1f) & 1) != 0);
}



// FUNCTION 14336e270 FUN_14336e270 body=43 status=ok
// SIG undefined FUN_14336e270(void)

longlong FUN_14336e270(longlong param_1,longlong param_2)

{
  uint3 uVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0xb8) >> 0x15;
  if ((uVar3 & 1) != 0) {
    uVar1 = (uint3)(*(uint *)(param_2 + 0x52f4) >> 0xb);
    bVar2 = (byte)(*(uint *)(param_2 + 0x52f4) >> 3) ^ (byte)(*(uint *)(param_1 + 0xb8) >> 0x17);
    uVar3 = CONCAT31(uVar1,bVar2);
    if ((bVar2 & 1) == 0) {
      return CONCAT71((uint7)uVar1,1);
    }
  }
  return (ulonglong)(uVar3 >> 8) << 8;
}



// FUNCTION 14336e2b0 FUN_14336e2b0 body=186 status=ok
// SIG undefined FUN_14336e2b0(void)

undefined8 *
FUN_14336e2b0(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  param_5._0_4_ = *param_5;
  FUN_14336c360(param_1,param_3,param_4,&param_5);
  *param_1 = &PTR_FUN_145b02510;
  param_1[3] = &PTR_LAB_145b028c8;
  if (param_2 != 0) {
    Scaleform::GFx::Resource::AddRef();
  }
  param_1[0x16] = param_2;
  *(ushort *)((longlong)param_1 + 0x6a) = *(ushort *)((longlong)param_1 + 0x6a) | 0x80;
  param_1[0x17] = 0x10;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  return param_1;
}



// FUNCTION 14336e370 ~InteractiveObject body=65 status=ok
// SIG undefined ~InteractiveObject(void)

void Scaleform::GFx::InteractiveObject::~InteractiveObject(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145b02510;
  param_1[3] = &PTR_LAB_145b028c8;
  FUN_14336ead0();
  if (param_1[0x16] != 0) {
    FUN_1432de450();
  }
  FUN_14336c3d0(param_1);
  return;
}



// FUNCTION 14336e3d0 thunk_FUN_14336b350 body=5 status=ok
// SIG undefined thunk_FUN_14336b350(void)

longlong thunk_FUN_14336b350(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lStackX_8;
  
  if (param_1[9] == 0) {
    plVar2 = (longlong *)
             (**(code **)(*param_1 + 8))
                       (param_1,&lStackX_8,*(longlong *)(param_1[4] + 0x10) + 0x5350);
    if (*plVar2 != 0) {
      plVar1 = (longlong *)(*plVar2 + 0x18);
      *plVar1 = *plVar1 + 1;
    }
    if (param_1[9] != 0) {
      plVar1 = (longlong *)(param_1[9] + 0x18);
      *plVar1 = *plVar1 + -1;
      if (*plVar1 == 0) {
        FUN_1432ccf00();
      }
    }
    param_1[9] = *plVar2;
    if (lStackX_8 != 0) {
      plVar2 = (longlong *)(lStackX_8 + 0x18);
      *plVar2 = *plVar2 + -1;
      if (*plVar2 == 0) {
        FUN_1432ccf00();
      }
    }
    FUN_143362a30(param_1[9],(byte)((ushort)*(undefined2 *)((longlong)param_1 + 0x6a) >> 0xe) & 1);
    return param_1[9];
  }
  return param_1[9];
}



// FUNCTION 14336e3e0 FUN_14336e3e0 body=49 status=ok
// SIG undefined FUN_14336e3e0(void)

undefined8 FUN_14336e3e0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(byte *)(param_1 + 0x6d) != 0) {
    plVar1 = (longlong *)
             (**(code **)(*(longlong *)(param_1 + (ulonglong)*(byte *)(param_1 + 0x6d) * 4) + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014336e403. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0xa8))(plVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14336e420 FUN_14336e420 body=83 status=ok
// SIG undefined FUN_14336e420(void)

bool FUN_14336e420(longlong *param_1)

{
  undefined1 uVar1;
  longlong *plVar2;
  
  if ((*(uint *)(param_1 + 0x17) & 0x180) != 0) {
    return (*(uint *)(param_1 + 0x17) & 0x180) == 0x180;
  }
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x228))(param_1,1);
  if ((plVar2 != (longlong *)0x0) && (plVar2 != param_1)) {
                    /* WARNING: Could not recover jumptable at 0x00014336e464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*plVar2 + 0x2c8))(plVar2);
    return (bool)uVar1;
  }
  return true;
}



// FUNCTION 14336e480 FUN_14336e480 body=57 status=ok
// SIG undefined FUN_14336e480(void)

undefined8 FUN_14336e480(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(byte *)(param_1 + 0x6d) != 0) {
    plVar1 = (longlong *)
             (**(code **)(*(longlong *)(param_1 + (ulonglong)*(byte *)(param_1 + 0x6d) * 4) + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014336e4aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0xa0))(plVar1,param_2);
    return uVar2;
  }
  return 1;
}



// FUNCTION 14336e4c0 thunk_FUN_14336cb10 body=5 status=ok
// SIG undefined thunk_FUN_14336cb10(void)

void thunk_FUN_14336cb10(longlong param_1)

{
  *(ushort *)(param_1 + 0x6a) = *(ushort *)(param_1 + 0x6a) | 0x2000;
  if (*(byte *)(param_1 + 0x6d) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014336cb2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + (ulonglong)*(byte *)(param_1 + 0x6d) * 4) + 0x48))();
    return;
  }
  return;
}



// FUNCTION 14336e4d0 FUN_14336e4d0 body=80 status=ok
// SIG undefined FUN_14336e4d0(void)

void FUN_14336e4d0(longlong param_1)

{
  longlong lVar1;
  
  *(ushort *)(param_1 + 0x6a) = *(ushort *)(param_1 + 0x6a) | 0x1000;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
  FUN_14336ead0();
  if (lVar1 != 0) {
    FUN_1432e3bf0(lVar1,param_1);
    FUN_1432ead40(lVar1,param_1);
  }
  Scaleform::GFx::DisplayObject::OnEventUnload(param_1);
  return;
}



// FUNCTION 14336e540 FUN_14336e540 body=89 status=ok
// SIG undefined FUN_14336e540(void)

void FUN_14336e540(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  
  if (*(byte *)(param_1 + 0x6d) != 0) {
    plVar1 = (longlong *)
             (**(code **)(*(longlong *)(param_1 + (ulonglong)*(byte *)(param_1 + 0x6d) * 4) + 8))();
    (**(code **)(*plVar1 + 0x80))(plVar1,param_2,param_3,param_4,param_5);
  }
  return;
}



// FUNCTION 14336e5a0 FUN_14336e5a0 body=76 status=ok
// SIG undefined FUN_14336e5a0(void)

void FUN_14336e5a0(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_2 + 0x50) != 0) {
    FUN_14336b830();
  }
  bVar1 = *(byte *)(param_1 + 0x6d);
  if (bVar1 != 0) {
    plVar2 = (longlong *)
             (**(code **)(*(longlong *)(param_1 + (ulonglong)bVar1 * 4) + 8))
                       (param_1 + (ulonglong)bVar1 * 4);
    (**(code **)(*plVar2 + 0x70))(plVar2,param_2);
  }
  return;
}



// FUNCTION 14336e600 FUN_14336e600 body=598 status=ok
// SIG undefined FUN_14336e600(void)

void FUN_14336e600(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_b8;
  float fStack_b4;
  undefined4 uStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  undefined4 uStack_a0;
  float fStack_9c;
  float local_98;
  float local_94;
  undefined4 local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined4 local_80;
  float local_7c;
  longlong *local_78;
  undefined8 uStack_70;
  undefined2 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined4 local_4c;
  
  local_68 = 0;
  local_78 = (longlong *)0x0;
  uStack_70 = 0;
  local_64 = 0;
  local_5c = 0;
  local_54 = 0;
  local_4c = 0xffffffff;
  lVar2 = *(longlong *)(param_1[4] + 0x10);
  FUN_1432e3a60(lVar2,param_2,&local_78);
  if (param_1 == local_78) {
    if ((uint)param_2 < 6) {
      lVar2 = ((param_2 & 0xffffffff) + 0x6d) * 0x50 + lVar2;
    }
    else {
      lVar2 = 0;
    }
    plVar1 = (longlong *)param_1[7];
    fVar5 = *(float *)(lVar2 + 0x38);
    fVar4 = *(float *)(lVar2 + 0x3c);
    local_b8 = 1.0;
    fStack_b4 = 0.0;
    uStack_b0 = 0;
    fStack_ac = 0.0;
    local_a8 = 0.0;
    fStack_a4 = 1.0;
    uStack_a0 = 0;
    fStack_9c = 0.0;
    if (plVar1 != (longlong *)0x0) {
      local_b8 = 1.0;
      fStack_b4 = 0.0;
      uStack_b0 = 0;
      fStack_ac = 0.0;
      local_a8 = 0.0;
      fStack_a4 = 1.0;
      uStack_a0 = 0;
      fStack_9c = 0.0;
      (**(code **)(*plVar1 + 0x1e8))(plVar1,&local_b8);
    }
    local_98 = local_b8;
    local_94 = fStack_b4;
    local_90 = uStack_b0;
    local_8c = fStack_ac;
    local_88 = local_a8;
    local_84 = fStack_a4;
    local_80 = uStack_a0;
    local_7c = fStack_9c;
    Scaleform::Render::Matrix2x4<float>::SetInverse
              ((Matrix2x4<float> *)&local_b8,(Matrix2x4<float> *)&local_98);
    fVar3 = fStack_b4 * fVar4 + local_b8 * fVar5 + fStack_ac + (float)local_54;
    fVar5 = fStack_a4 * fVar4 + local_a8 * fVar5 + fStack_9c + local_54._4_4_;
    if (local_68._1_1_ != '\0') {
      fVar4 = fVar3;
      if ((float)local_5c <= fVar3) {
        fVar4 = (float)local_5c;
      }
      fVar3 = (float)local_64;
      if ((float)local_64 <= fVar4) {
        fVar3 = fVar4;
      }
      fVar4 = fVar5;
      if (local_5c._4_4_ <= fVar5) {
        fVar4 = local_5c._4_4_;
      }
      fVar5 = local_64._4_4_;
      if (local_64._4_4_ <= fVar4) {
        fVar5 = fVar4;
      }
    }
    (**(code **)(*param_1 + 0x1a8))(param_1,0);
    (**(code **)(*param_1 + 0xa8))(param_1,SUB84((double)fVar3 * 0.05,0));
    (**(code **)(*param_1 + 0xb8))(param_1,SUB84((double)fVar5 * 0.05,0));
  }
  return;
}



// FUNCTION 14336e860 AddToPlayList body=79 status=ok
// SIG undefined AddToPlayList(void)

void Scaleform::GFx::InteractiveObject::AddToPlayList(longlong param_1)

{
  longlong lVar1;
  
  if (((((byte)*(ushort *)(param_1 + 0x6a) >> 4 & 1) == 0) &&
      ((*(ushort *)(param_1 + 0x6a) & 0x1000) == 0)) && (-2 < *(int *)(param_1 + 0x2c))) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
    if (*(longlong *)(lVar1 + 0x52d8) != 0) {
      *(longlong *)(*(longlong *)(lVar1 + 0x52d8) + 0x90) = param_1;
      *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(lVar1 + 0x52d8);
    }
    *(longlong *)(lVar1 + 0x52d8) = param_1;
  }
  return;
}



// FUNCTION 14336e8c0 InsertToPlayListAfter body=81 status=ok
// SIG undefined InsertToPlayListAfter(void)

void Scaleform::GFx::InteractiveObject::InsertToPlayListAfter(longlong param_1,longlong param_2)

{
  if (((((byte)*(ushort *)(param_1 + 0x6a) >> 4 & 1) == 0) &&
      ((*(ushort *)(param_1 + 0x6a) & 0x1000) == 0)) && (-2 < *(int *)(param_1 + 0x2c))) {
    *(longlong *)(param_1 + 0x90) = param_2;
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
    *(longlong *)(param_2 + 0x98) = param_1;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x90) = param_1;
    }
  }
  return;
}



// FUNCTION 14336e920 IsInPlayList body=43 status=ok
// SIG undefined IsInPlayList(void)

undefined8 Scaleform::GFx::InteractiveObject::IsInPlayList(longlong param_1)

{
  if (((*(longlong *)(param_1 + 0x98) == 0) && (*(longlong *)(param_1 + 0x90) == 0)) &&
     (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0x52d8) != param_1)) {
    return 0;
  }
  return 1;
}



// FUNCTION 14336e960 FUN_14336e960 body=347 status=ok
// SIG undefined FUN_14336e960(void)

void FUN_14336e960(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
  if (((*(uint *)(param_1 + 0xb8) >> 0x15 & 1) == 0) &&
     ((*(uint *)(lVar1 + 0x52f0) >> 0x13 & 1) == 0)) {
    if ((((((byte)*(ushort *)(param_1 + 0x6a) >> 4 & 1) == 0) &&
         ((*(ushort *)(param_1 + 0x6a) & 0x1000) == 0)) && (-2 < *(int *)(param_1 + 0x2c))) &&
       (cVar4 = Scaleform::GFx::InteractiveObject::IsInPlayList(param_1), cVar4 != '\0')) {
      lVar2 = *(longlong *)(param_1 + 0x90);
      do {
        if (lVar2 == 0) {
          lVar2 = *(longlong *)(lVar1 + 0x52e0);
          *(longlong *)(param_1 + 0xa0) = lVar2;
          *(undefined8 *)(param_1 + 0xa8) = 0;
          if (lVar2 != 0) {
            *(longlong *)(lVar2 + 0xa8) = param_1;
          }
          *(longlong *)(lVar1 + 0x52e0) = param_1;
LAB_14336ea3a:
          *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) | 0x200000;
          if ((*(uint *)(lVar1 + 0x52f4) >> 3 & 1) == 0) {
            uVar5 = *(uint *)(param_1 + 0xb8) & 0xff7fffff;
          }
          else {
            uVar5 = *(uint *)(param_1 + 0xb8) | 0x800000;
          }
          *(uint *)(param_1 + 0xb8) = uVar5;
          *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) & 0xffbfffff;
          return;
        }
        if (((*(uint *)(lVar2 + 0xb8) >> 0x15 & 1) != 0) &&
           ((((byte)(*(uint *)(lVar2 + 0xb8) >> 0x17) ^ (byte)(*(uint *)(lVar1 + 0x52f4) >> 3)) & 1)
            == 0)) {
          lVar3 = *(longlong *)(lVar2 + 0xa0);
          *(longlong *)(param_1 + 0xa0) = lVar3;
          *(longlong *)(param_1 + 0xa8) = lVar2;
          if (lVar3 != 0) {
            *(longlong *)(lVar3 + 0xa8) = param_1;
          }
          *(longlong *)(lVar2 + 0xa0) = param_1;
          goto LAB_14336ea3a;
        }
        lVar2 = *(longlong *)(lVar2 + 0x90);
      } while( true );
    }
  }
  else {
    *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) & 0xffbfffff;
  }
  return;
}



// FUNCTION 14336ead0 FUN_14336ead0 body=251 status=ok
// SIG undefined FUN_14336ead0(void)

void FUN_14336ead0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
  if ((*(uint *)(param_1 + 0xb8) >> 0x15 & 1) != 0) {
    if (((*(uint *)(lVar1 + 0x52f0) >> 0x13 & 1) == 0) &&
       ((((byte)(*(uint *)(lVar1 + 0x52f4) >> 3) ^ (byte)(*(uint *)(param_1 + 0xb8) >> 0x17)) & 1)
        == 0)) {
      if (*(longlong *)(param_1 + 0xa8) == 0) {
        *(undefined8 *)(lVar1 + 0x52e0) = *(undefined8 *)(param_1 + 0xa0);
      }
      else {
        *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xa0) = *(undefined8 *)(param_1 + 0xa0);
      }
      if (*(longlong *)(param_1 + 0xa0) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0xa8) = *(undefined8 *)(param_1 + 0xa8);
      }
    }
    *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) & 0xff9fffff;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x90) = *(undefined8 *)(param_1 + 0x90);
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x98) = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    return;
  }
  if (*(longlong *)(lVar1 + 0x52d8) == param_1) {
    *(undefined8 *)(lVar1 + 0x52d8) = *(undefined8 *)(param_1 + 0x98);
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  return;
}



// FUNCTION 14336ebe0 FUN_14336ebe0 body=144 status=ok
// SIG undefined FUN_14336ebe0(void)

void FUN_14336ebe0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
  if ((*(uint *)(param_1 + 0xb8) >> 0x15 & 1) != 0) {
    if (((*(uint *)(lVar1 + 0x52f0) >> 0x13 & 1) == 0) &&
       ((((byte)(*(uint *)(lVar1 + 0x52f4) >> 3) ^ (byte)(*(uint *)(param_1 + 0xb8) >> 0x17)) & 1)
        == 0)) {
      if (*(longlong *)(param_1 + 0xa8) == 0) {
        *(undefined8 *)(lVar1 + 0x52e0) = *(undefined8 *)(param_1 + 0xa0);
      }
      else {
        *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xa0) = *(undefined8 *)(param_1 + 0xa0);
      }
      if (*(longlong *)(param_1 + 0xa0) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0xa8) = *(undefined8 *)(param_1 + 0xa8);
      }
    }
    *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) & 0xff9fffff;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 14336ec80 FUN_14336ec80 body=218 status=ok
// SIG undefined FUN_14336ec80(void)

void FUN_14336ec80(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar2 = FUN_1433679a0(param_2);
  FUN_1433679d0(param_1,uVar2);
  if (param_1[9] != 0) {
    lVar3 = FUN_1432cd1e0();
    if ((*(ushort *)(lVar3 + 10) >> 9 & 1) != 0) {
      lVar3 = *param_1;
      uVar2 = (**(code **)(*param_2 + 0x20))(param_2);
      (**(code **)(lVar3 + 0x28))(param_1,uVar2);
      goto LAB_14336ecf5;
    }
  }
  lVar3 = *param_1;
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2);
  (**(code **)(lVar3 + 0x18))(param_1,uVar2);
LAB_14336ecf5:
  if (param_2[10] != 0) {
    FUN_14336b830(param_1);
  }
  lVar3 = (**(code **)(*param_2 + 0x1c8))(param_2);
  if (lVar3 != 0) {
    (**(code **)(*param_1 + 0x1c0))(param_1,lVar3);
  }
  bVar1 = *(byte *)((longlong)param_1 + 0x6d);
  if (bVar1 != 0) {
    plVar4 = (longlong *)
             (**(code **)(*(longlong *)((longlong)param_1 + (ulonglong)bVar1 * 4) + 8))
                       ((longlong)param_1 + (ulonglong)bVar1 * 4);
    (**(code **)(*plVar4 + 0x78))(plVar4,param_2);
  }
  return;
}



// FUNCTION 14336ed60 MoveNameHandle body=157 status=ok
// SIG undefined MoveNameHandle(void)

void Scaleform::GFx::InteractiveObject::MoveNameHandle(longlong param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x70);
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  piVar1 = *(int **)(param_1 + 0x70);
  if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 < 1)) {
    FUN_14336bed0(piVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar1);
  }
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  piVar1 = *(int **)(param_2 + 0x70);
  if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 < 1)) {
    FUN_14336bed0(piVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar1);
  }
  *(undefined8 *)(param_2 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    *(longlong *)(*(longlong *)(param_1 + 0x70) + 8) = param_1;
  }
  return;
}



// FUNCTION 14336ee10 FUN_14336ee10 body=46 status=ok
// SIG undefined FUN_14336ee10(void)

undefined8 FUN_14336ee10(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(byte *)(param_1 + 0x6d) != 0) {
    plVar1 = (longlong *)
             (**(code **)(*(longlong *)(param_1 + (ulonglong)*(byte *)(param_1 + 0x6d) * 4) + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014336ee33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x68))(plVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14336ee50 GetStringManager body=22 status=ok
// SIG undefined GetStringManager(void)

void Scaleform::GFx::InteractiveObject::GetStringManager(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014336ee5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0x18) + 0x1e0))
            ();
  return;
}



// FUNCTION 14336ee70 FUN_14336ee70 body=66 status=ok
// SIG undefined FUN_14336ee70(void)

void FUN_14336ee70(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 local_res8 [8];
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    lVar2 = 0;
    if ((*(ushort *)(lVar1 + 0x6a) >> 9 & 1) != 0) {
      lVar2 = lVar1;
    }
    if (lVar2 != 0) {
      local_res8[0] = *(undefined4 *)(param_1 + 0x28);
      FUN_143370350(lVar2,*(undefined4 *)(param_1 + 0x2c),local_res8);
    }
  }
  return;
}



// FUNCTION 14336eec0 SetNextUnloaded body=13 status=ok
// SIG undefined SetNextUnloaded(void)

void Scaleform::GFx::InteractiveObject::SetNextUnloaded(longlong param_1,undefined8 param_2)

{
  *(ushort *)(param_1 + 0x6a) = *(ushort *)(param_1 + 0x6a) | 0x10;
  *(undefined8 *)(param_1 + 0xa0) = param_2;
  return;
}



// FUNCTION 14336eee0 FUN_14336eee0 body=135 status=ok
// SIG undefined FUN_14336eee0(void)

undefined8 * FUN_14336eee0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145b02510;
  param_1[3] = &PTR_LAB_145b028c8;
  FUN_14336ead0();
  if (param_1[0x16] != 0) {
    FUN_1432de450();
  }
  FUN_14336c3d0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 14336ef90 FUN_14336ef90 body=56 status=ok
// SIG undefined FUN_14336ef90(void)

undefined8 FUN_14336ef90(longlong *param_1,undefined8 param_2)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_28 = 0x3f800000;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  local_18 = 0;
  uStack_14 = 0x3f800000;
  uStack_10 = 0;
  uStack_c = 0;
  (**(code **)(*param_1 + 0x1f0))(0x3f800000,0,&local_28);
  return param_2;
}



// FUNCTION 14336f000 FUN_14336f000 body=27 status=ok
// SIG undefined FUN_14336f000(void)

void FUN_14336f000(undefined8 param_1)

{
  FUN_143367cf0();
  FSettingsModule::ShutdownModule(param_1);
  return;
}



// FUNCTION 14336f060 FUN_14336f060 body=99 status=ok
// SIG undefined FUN_14336f060(void)

undefined8 * FUN_14336f060(undefined8 *param_1)

{
  FUN_14336e2b0();
  *param_1 = &PTR_FUN_145b028e0;
  param_1[3] = &PTR_LAB_145b02cc8;
  FObjectThumbnail::FObjectThumbnail(param_1 + 0x1b);
  param_1[0x21] = 0;
  *(ushort *)((longlong)param_1 + 0x6a) = *(ushort *)((longlong)param_1 + 0x6a) | 0x200;
  return param_1;
}



// FUNCTION 14336f0d0 FUN_14336f0d0 body=231 status=ok
// SIG undefined FUN_14336f0d0(void)

void FUN_14336f0d0(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_145b028e0;
  param_1[3] = &PTR_LAB_145b02cc8;
  if (param_1[0x21] != 0) {
    piVar1 = (int *)(param_1[0x21] + 0x18);
    *piVar1 = *piVar1 + -1;
    lVar2 = param_1[0x21];
    if (*(int *)(lVar2 + 0x18) == 0) {
      *(undefined8 *)(*(longlong *)(lVar2 + 8) + 0x10) = *(undefined8 *)(lVar2 + 0x10);
      *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 8) = *(undefined8 *)(lVar2 + 8);
      *(undefined8 *)(lVar2 + 8) = 0xffffffffffffffff;
      *(undefined8 *)(lVar2 + 0x10) = 0xffffffffffffffff;
      puVar3 = (undefined8 *)param_1[0x21];
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  FUN_1433d4de0(param_1 + 0x1b,param_1);
  FSettingsModule::ShutdownModule(param_1);
  puVar3 = (undefined8 *)param_1[0x1e];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*puVar3);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar3);
  }
  FUN_143370c10(param_1 + 0x1b);
  Scaleform::GFx::InteractiveObject::~InteractiveObject(param_1);
  return;
}



// FUNCTION 14336f1c0 FUN_14336f1c0 body=191 status=ok
// SIG undefined FUN_14336f1c0(void)

void FUN_14336f1c0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  float *pfVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_18 [16];
  
  pfVar3 = (float *)FUN_143367db0(param_1,local_18);
  lVar4 = 0;
  if ((pfVar3[2] <= *pfVar3) || (bVar2 = false, pfVar3[3] <= pfVar3[1])) {
    bVar2 = true;
  }
  if (((*(byte *)(param_1 + 0x6a) & 1) != 0) || (bVar2)) {
    for (lVar5 = *(longlong *)(param_1 + 0xe0); lVar5 != 0; lVar5 = lVar5 + -1) {
      plVar1 = *(longlong **)(lVar4 + *(longlong *)(param_1 + 0xd8));
      if (((*(byte *)(param_1 + 0x6a) & 1) != 0) || (!bVar2)) {
        *(ushort *)((longlong)plVar1 + 0x6a) = *(ushort *)((longlong)plVar1 + 0x6a) | 1;
      }
      else {
        *(ushort *)((longlong)plVar1 + 0x6a) = *(ushort *)((longlong)plVar1 + 0x6a) & 0xfffe;
      }
      (**(code **)(*plVar1 + 0xa0))();
      lVar4 = lVar4 + 0x10;
    }
  }
  return;
}



// FUNCTION 14336f290 FUN_14336f290 body=170 status=ok
// SIG undefined FUN_14336f290(void)

void FUN_14336f290(longlong *param_1,float *param_2)

{
  bool bVar1;
  float *pfVar2;
  undefined1 local_18 [16];
  
  pfVar2 = (float *)FUN_143367db0(param_1,local_18);
  if ((((*param_2 == *pfVar2) && (param_2[2] == pfVar2[2])) && (param_2[1] == pfVar2[1])) &&
     (param_2[3] == pfVar2[3])) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  FUN_143367d80(param_1,param_2);
  if ((param_2[2] <= *param_2) || (param_2[3] <= param_2[1])) {
    *(ushort *)((longlong)param_1 + 0x6a) = *(ushort *)((longlong)param_1 + 0x6a) & 0xfffe;
  }
  else {
    *(ushort *)((longlong)param_1 + 0x6a) = *(ushort *)((longlong)param_1 + 0x6a) | 1;
  }
  if (bVar1) {
    (**(code **)(*param_1 + 0xa0))(param_1);
  }
  return;
}



// FUNCTION 14336f370 FUN_14336f370 body=119 status=ok
// SIG undefined FUN_14336f370(void)

void FUN_14336f370(longlong param_1,byte param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) & 0xfff0ffff;
  lVar3 = *(longlong *)(param_1 + 0xe0);
  *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) | (param_2 & 0xf) << 0x10;
  if (lVar3 != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(lVar2 + *(longlong *)(param_1 + 0xd8));
      (**(code **)(*plVar1 + 0x280))(plVar1,(uint)param_2);
      lVar2 = lVar2 + 0x10;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 14336f3f0 FUN_14336f3f0 body=170 status=ok
// SIG undefined FUN_14336f3f0(void)

undefined8 FUN_14336f3f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if ((param_1 == param_2) || ((param_2 != 0 && (*(longlong *)(param_2 + 0x38) == param_1)))) {
    return 1;
  }
  uVar4 = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(lVar5 + *(longlong *)(param_1 + 0xd8));
      lVar3 = 0;
      if ((*(ushort *)(lVar1 + 0x6a) >> 9 & 1) != 0) {
        lVar3 = lVar1;
      }
      if ((lVar3 != 0) && (cVar2 = FUN_14336f3f0(lVar3,param_2), cVar2 != '\0')) {
        return 1;
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x10;
    } while (uVar4 < *(ulonglong *)(param_1 + 0xe0));
  }
  return 0;
}



// FUNCTION 14336f4a0 ForceShutdown body=15 status=ok
// SIG undefined ForceShutdown(void)

void Scaleform::GFx::DisplayObjContainer::ForceShutdown(longlong param_1)

{
  FUN_1433d4de0(param_1 + 0xd8,param_1);
  return;
}



// FUNCTION 14336f4c0 GetCharacterAtDepth body=54 status=ok
// SIG undefined GetCharacterAtDepth(void)

undefined8 Scaleform::GFx::DisplayObjContainer::GetCharacterAtDepth(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = DisplayList::GetDisplayIndex((longlong *)(param_1 + 0xd8));
  if (lVar1 == -1) {
    return 0;
  }
  return *(undefined8 *)(*(longlong *)(param_1 + 0xd8) + lVar1 * 0x10);
}



// FUNCTION 14336f500 GetChildAt body=30 status=ok
// SIG undefined GetChildAt(void)

undefined8 Scaleform::GFx::DisplayObjContainer::GetChildAt(longlong param_1,uint param_2)

{
  if (*(ulonglong *)(param_1 + 0xe0) <= (ulonglong)param_2) {
    return 0;
  }
  return *(undefined8 *)(*(longlong *)(param_1 + 0xd8) + (ulonglong)param_2 * 0x10);
}



// FUNCTION 14336f530 FUN_14336f530 body=91 status=ok
// SIG undefined FUN_14336f530(void)

undefined4 * FUN_14336f530(longlong param_1,undefined4 *param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = Scaleform::GFx::DisplayList::GetDisplayIndex((longlong *)(param_1 + 0xd8),param_3);
  if ((lVar1 != -1) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xd8) + lVar1 * 0x10), lVar1 != 0)) {
    *param_2 = *(undefined4 *)(lVar1 + 0x28);
    return param_2;
  }
  *param_2 = 0x40000;
  return param_2;
}



// FUNCTION 14336f5a0 FUN_14336f5a0 body=1173 status=ok
// SIG undefined FUN_14336f5a0(void)

undefined4 FUN_14336f5a0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  float local_res8;
  float local_resc;
  float local_res20;
  float local_res24;
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
  longlong local_88 [12];
  
  lVar4 = (**(code **)(*param_1 + 0x3d0))();
  if (((*(uint *)(param_1 + 0x17) >> 0xb & 1) == 0) &&
     ((((cVar2 = (**(code **)(*param_1 + 0x1d8))(param_1), cVar2 != '\0' || (lVar4 != 0)) &&
       (cVar2 = (**(code **)(*param_1 + 0x278))(param_1), cVar2 == '\0')) &&
      (((longlong *)param_3[2] != param_1 &&
       (cVar2 = (**(code **)(*param_1 + 0x2b0))
                          (param_1,*(undefined8 *)(param_1[4] + 0x10),*(undefined4 *)(param_3 + 4)),
       cVar2 != '\0')))))) {
    cVar2 = FUN_14336d7e0(param_1,&local_res8,param_2,1,0);
    if (cVar2 == '\0') {
      return 2;
    }
    plVar5 = (longlong *)FUN_14336cc10(param_1);
    if (((plVar5 != (longlong *)0x0) &&
        (cVar2 = (**(code **)(*plVar5 + 0x278))(plVar5), cVar2 != '\0')) &&
       ((*(byte *)((longlong)plVar5 + 0x6a) >> 4 & 1) == 0)) {
      cVar2 = FUN_143370e20(plVar5);
      if (cVar2 == '\0') {
        local_f8 = 0x3f800000;
        uStack_f0 = 0;
        local_e8 = 0x3f80000000000000;
        uStack_e0 = 0;
        local_128 = 0x3f800000;
        uStack_120 = 0;
        local_118 = 0x3f80000000000000;
        uStack_110 = 0;
        (**(code **)(*plVar5 + 0x1e8))(plVar5,&local_128);
        Scaleform::Render::Matrix2x4<float>::SetInverse
                  ((Matrix2x4<float> *)&local_f8,(Matrix2x4<float> *)&local_128);
        local_128 = 0x3f800000;
        uStack_120 = 0;
        local_118 = 0x3f80000000000000;
        uStack_110 = 0;
        (**(code **)(*param_1 + 0x1e8))(param_1,&local_128);
        local_res20 = ((float)local_118 * local_f8._4_4_ + (float)local_128 * (float)local_f8) *
                      local_res8 +
                      (local_118._4_4_ * local_f8._4_4_ + (float)local_f8 * local_128._4_4_) *
                      local_resc +
                      uStack_f0._4_4_ +
                      local_f8._4_4_ * uStack_110._4_4_ + (float)local_f8 * uStack_120._4_4_;
        local_res24 = ((float)local_118 * local_e8._4_4_ + (float)local_128 * (float)local_e8) *
                      local_res8 +
                      (local_118._4_4_ * local_e8._4_4_ + (float)local_e8 * local_128._4_4_) *
                      local_resc +
                      uStack_e0._4_4_ +
                      local_e8._4_4_ * uStack_110._4_4_ + (float)local_e8 * uStack_120._4_4_;
      }
      else {
        local_f8 = 0x3f800000;
        local_e8 = 0x3f80000000000000;
        uStack_d0 = 0x3f800000;
        local_c8 = 0x3f800000;
        local_b8 = 0x3f80000000000000;
        uStack_a0 = 0x3f800000;
        uStack_90 = 0x3f80000000000000;
        local_128 = 0x3f800000;
        local_118 = 0x3f80000000000000;
        uStack_100 = 0x3f800000;
        uStack_f0 = 0;
        uStack_e0 = 0;
        local_d8 = 0;
        uStack_c0 = 0;
        uStack_b0 = 0;
        local_a8 = 0;
        local_98 = 0;
        uStack_120 = 0;
        uStack_110 = 0;
        local_108 = 0;
        FUN_14336a5a0(plVar5,&local_128);
        lVar4 = *(longlong *)(param_1[4] + 0x10);
        cVar2 = (**(code **)(*plVar5 + 0x30))(plVar5,&local_c8,0);
        if (cVar2 != '\0') {
          *(undefined8 *)(lVar4 + 0x150) = local_c8;
          *(undefined8 *)(lVar4 + 0x158) = uStack_c0;
          *(undefined8 *)(lVar4 + 0x160) = local_b8;
          *(undefined8 *)(lVar4 + 0x168) = uStack_b0;
          *(undefined4 *)(lVar4 + 0x170) = (undefined4)local_a8;
          *(undefined4 *)(lVar4 + 0x174) = local_a8._4_4_;
          *(undefined4 *)(lVar4 + 0x178) = (undefined4)uStack_a0;
          *(undefined4 *)(lVar4 + 0x17c) = uStack_a0._4_4_;
          *(undefined8 *)(lVar4 + 0x180) = local_98;
          *(undefined8 *)(lVar4 + 0x188) = uStack_90;
        }
        cVar2 = (**(code **)(*plVar5 + 0x48))(plVar5,&local_f8,0);
        if (cVar2 != '\0') {
          *(undefined8 *)(lVar4 + 400) = local_f8;
          *(undefined8 *)(lVar4 + 0x198) = uStack_f0;
          *(undefined8 *)(lVar4 + 0x1a0) = local_e8;
          *(undefined8 *)(lVar4 + 0x1a8) = uStack_e0;
          *(undefined8 *)(lVar4 + 0x1b0) = local_d8;
          *(undefined8 *)(lVar4 + 0x1b8) = uStack_d0;
        }
        *(undefined8 *)(lVar4 + 0x1c0) = local_128;
        *(undefined8 *)(lVar4 + 0x1c8) = uStack_120;
        *(float *)(lVar4 + 0x1d0) = (float)local_118;
        *(float *)(lVar4 + 0x1d4) = local_118._4_4_;
        *(undefined4 *)(lVar4 + 0x1d8) = (undefined4)uStack_110;
        *(float *)(lVar4 + 0x1dc) = uStack_110._4_4_;
        *(undefined4 *)(lVar4 + 0x1e0) = (undefined4)local_108;
        *(undefined4 *)(lVar4 + 0x1e4) = local_108._4_4_;
        *(undefined4 *)(lVar4 + 0x1e8) = (undefined4)uStack_100;
        *(undefined4 *)(lVar4 + 0x1ec) = uStack_100._4_4_;
        Scaleform::Render::ScreenToWorld::GetWorldPoint(lVar4 + 0x140,&local_res20);
      }
      cVar2 = (**(code **)(*plVar5 + 0x200))(plVar5,&local_res20,1);
      if (cVar2 == '\0') goto LAB_14336fa16;
    }
    local_88[0] = 0;
    local_88[1] = 0;
    local_88[2] = 0;
    FUN_1433705e0(param_1,local_88,&local_res8,1);
    bVar1 = *(byte *)((longlong)param_1 + 0x6d);
    if (bVar1 == 0) {
      uVar3 = 2;
    }
    else {
      plVar5 = (longlong *)
               (**(code **)(*(longlong *)((longlong)param_1 + (ulonglong)bVar1 * 4) + 0x28))
                         ((longlong)param_1 + (ulonglong)bVar1 * 4);
      uVar3 = (**(code **)(*plVar5 + 0xb0))(plVar5,&local_res8,param_3,local_88);
    }
    if (local_88[0] != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
      return uVar3;
    }
    return uVar3;
  }
LAB_14336fa16:
  *param_3 = 0;
  return 2;
}



// FUNCTION 14336fa40 FUN_14336fa40 body=202 status=ok
// SIG undefined FUN_14336fa40(void)

void FUN_14336fa40(longlong *param_1,int param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x17) = *(uint *)(param_1 + 0x17) | 0x180;
  }
  else if ((0 < param_2) &&
          (plVar1 = *(longlong **)(*(longlong *)(param_1[4] + 0x10) + 0x58),
          plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x2c8))();
    if (cVar2 == '\0') {
      *(uint *)(param_1 + 0x17) = *(uint *)(param_1 + 0x17) & 0xffffff7f;
      *(uint *)(param_1 + 0x17) = *(uint *)(param_1 + 0x17) | 0x100;
    }
    else {
      *(uint *)(param_1 + 0x17) = *(uint *)(param_1 + 0x17) | 0x180;
    }
  }
  Scaleform::GFx::InteractiveObject::AddToPlayList(param_1);
  if (((*(uint *)(param_1 + 0x17) >> 0x15 & 1) == 0) ||
     ((*(uint *)(param_1 + 0x17) >> 0x16 & 1) != 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  iVar3 = (**(code **)(*param_1 + 0x340))(param_1,uVar4);
  if (iVar3 == -1) {
    *(uint *)(param_1 + 0x17) = *(uint *)(param_1 + 0x17) | 0x400000;
  }
  else if (iVar3 == 1) {
    FUN_14336e960(param_1);
    *(undefined2 *)((longlong)param_1 + 0xbe) = 0xffff;
    return;
  }
  *(undefined2 *)((longlong)param_1 + 0xbe) = 0xffff;
  return;
}



// FUNCTION 14336fb10 FUN_14336fb10 body=40 status=ok
// SIG undefined FUN_14336fb10(void)

void FUN_14336fb10(longlong param_1,undefined8 param_2)

{
  FUN_1433d4830(param_1 + 0xd8,param_1,param_2);
  FSettingsModule::ShutdownModule(param_1);
  return;
}



// FUNCTION 14336fb40 FUN_14336fb40 body=404 status=ok
// SIG undefined FUN_14336fb40(void)

void FUN_14336fb40(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  byte bVar1;
  RefCountNTSImpl *this;
  RefCountNTSImpl *this_00;
  longlong *plVar2;
  RefCountNTSImpl *pRVar3;
  uint uVar4;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  longlong local_58 [4];
  
  local_res8[0] = *(undefined4 *)(param_2 + 0x50);
  FUN_143310f20(*(undefined8 *)(param_1 + 0xb0),local_58,local_res8);
  if (local_58[0] == 0) {
    FUN_143370e50(param_1 + 0x18,"DisplayObjContainer::ReplaceDisplayObject() - unknown cid = %d",
                  *(undefined2 *)(param_2 + 0x50));
    return;
  }
  local_res8[0] = *(undefined4 *)(param_2 + 0x50);
  this = (RefCountNTSImpl *)
         Scaleform::GFx::DisplayList::GetCharacterAtDepth
                   (param_1 + 0xd8,*(undefined4 *)(param_2 + 0x4c),local_res8,0);
  if (this != (RefCountNTSImpl *)0x0) {
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
  }
  uVar4 = 0xffffffff;
  if ((this != (RefCountNTSImpl *)0x0) && (uVar4 = 0xffffffff, -2 < *(int *)(this + 0x2c))) {
    bVar1 = (**(code **)(*(longlong *)this + 0x1d8))(this);
    uVar4 = (uint)bVar1;
  }
  local_res10[0] = *(undefined4 *)(param_2 + 0x50);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x18);
  this_00 = (RefCountNTSImpl *)
            (**(code **)(*plVar2 + 0x20))
                      (plVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10),local_58,param_1
                       ,local_res10,0);
  plVar2 = (longlong *)
           (**(code **)(*(longlong *)(param_1 + (ulonglong)*(byte *)(param_1 + 0x6d) * 4) + 0x28))
                     (param_1 + (ulonglong)*(byte *)(param_1 + 0x6d) * 4);
  (**(code **)(*plVar2 + 0xc0))(plVar2,this_00);
  FUN_1433702b0(param_1,param_2,this_00,param_3);
  if (-1 < (int)uVar4) {
    (**(code **)(*(longlong *)this_00 + 0x1d0))(this_00,uVar4 != 0);
  }
  if (param_4 != (undefined8 *)0x0) {
    pRVar3 = (RefCountNTSImpl *)0x0;
    if (1 < *(int *)(this_00 + 8)) {
      pRVar3 = this_00;
    }
    *param_4 = pRVar3;
  }
  if (this_00 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this_00);
  }
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
  }
  return;
}



// FUNCTION 14336fce0 FUN_14336fce0 body=1064 status=ok
// SIG undefined FUN_14336fce0(void)

ulonglong FUN_14336fce0(longlong *param_1,Point<float> *param_2,byte param_3)

{
  longlong lVar1;
  char cVar2;
  float *pfVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  float local_res8;
  float local_resc;
  float local_res20;
  float local_res24;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  float fStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  
  pfVar3 = (float *)(ulonglong)(*(uint *)(param_1 + 0x17) >> 0xb);
  if ((*(uint *)(param_1 + 0x17) >> 0xb & 1) == 0) {
    if ((*(byte *)((longlong)param_1 + 0x6a) & 1) == 0) {
      local_b8 = 0x3f800000;
      uStack_b0 = 0;
      local_a8 = 0x3f80000000000000;
      uStack_a0 = 0;
      pfVar3 = (float *)(**(code **)(*param_1 + 0x1f0))(0x3f800000,&local_d8,&local_b8);
      if ((((pfVar3[2] < *(float *)param_2) || (*(float *)param_2 < *pfVar3)) ||
          (pfVar3[3] < *(float *)(param_2 + 4))) || (*(float *)(param_2 + 4) < pfVar3[1]))
      goto LAB_14336fd0e;
    }
    if (((param_3 & 2) == 0) ||
       (uVar4 = (**(code **)(*param_1 + 0x1d8))(param_1), (char)uVar4 != '\0')) {
      lVar8 = param_1[0x1c];
      plVar5 = (longlong *)FUN_14336cc10(param_1);
      if ((plVar5 != (longlong *)0x0) &&
         ((cVar2 = (**(code **)(*plVar5 + 0x278))(plVar5), cVar2 != '\0' &&
          ((*(byte *)((longlong)plVar5 + 0x6a) >> 4 & 1) == 0)))) {
        local_d8 = 0x3f800000;
        uStack_d0 = 0;
        local_c8._0_4_ = 0.0;
        local_c8._4_4_ = 1.0;
        uStack_c0 = 0;
        fStack_bc = 0.0;
        local_b8 = 0x3f800000;
        uStack_b0 = 0;
        local_a8 = 0x3f80000000000000;
        uStack_a0 = 0;
        (**(code **)(*plVar5 + 0x1e8))(plVar5,&local_b8);
        Scaleform::Render::Matrix2x4<float>::SetInverse
                  ((Matrix2x4<float> *)&local_d8,(Matrix2x4<float> *)&local_b8);
        local_b8 = 0x3f800000;
        uStack_b0 = 0;
        local_a8 = 0x3f80000000000000;
        uStack_a0 = 0;
        (**(code **)(*param_1 + 0x1e8))(param_1,&local_b8);
        local_res20 = *(float *)param_2 *
                      ((float)local_a8 * local_d8._4_4_ + (float)local_b8 * (float)local_d8) +
                      *(float *)(param_2 + 4) *
                      (local_a8._4_4_ * local_d8._4_4_ + (float)local_d8 * local_b8._4_4_) +
                      uStack_d0._4_4_ +
                      local_d8._4_4_ * uStack_a0._4_4_ + (float)local_d8 * uStack_b0._4_4_;
        local_res24 = ((float)local_a8 * local_c8._4_4_ + (float)local_b8 * (float)local_c8) *
                      *(float *)param_2 +
                      ((float)local_c8 * local_b8._4_4_ + local_a8._4_4_ * local_c8._4_4_) *
                      *(float *)(param_2 + 4) +
                      fStack_bc +
                      local_c8._4_4_ * uStack_a0._4_4_ + (float)local_c8 * uStack_b0._4_4_;
        uVar4 = (**(code **)(*plVar5 + 0x200))(plVar5,&local_res20,param_3);
        if ((char)uVar4 == '\0') {
          return uVar4;
        }
      }
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0;
      FUN_1433705e0(param_1,&local_d8,param_2,param_3 & 1);
      lVar1 = local_d8;
      lVar8 = lVar8 + -1;
      local_b8 = 0x3f800000;
      uStack_b0 = 0;
      local_res8 = *(float *)param_2;
      local_a8 = 0x3f80000000000000;
      uStack_a0 = 0;
      local_resc = *(float *)(param_2 + 4);
      if (-1 < lVar8) {
        lVar7 = lVar8 * 0x10;
        do {
          plVar5 = *(longlong **)(lVar7 + param_1[0x1b]);
          if ((((param_3 & 2) == 0) ||
              (cVar2 = (**(code **)(*plVar5 + 0x1d8))(plVar5), cVar2 != '\0')) &&
             ((uStack_d0 == 0 || ((*(char *)(lVar1 + lVar8) != '\0' && ((short)plVar5[0xd] == 0)))))
             ) {
            puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5);
            local_b8 = *puVar6;
            uStack_b0 = puVar6[1];
            local_a8 = puVar6[2];
            uStack_a0 = puVar6[3];
            Scaleform::Render::Matrix2x4<float>::TransformByInverse
                      ((Matrix2x4<float> *)&local_b8,(Point<float> *)&local_res20,param_2);
            local_res8 = local_res20;
            local_resc = local_res24;
            cVar2 = (**(code **)(*plVar5 + 0x200))(plVar5,&local_res8,param_3);
            if (cVar2 != '\0') {
              uVar4 = 1;
              goto LAB_1433700bd;
            }
          }
          lVar7 = lVar7 + -0x10;
          lVar8 = lVar8 + -1;
        } while (-1 < lVar8);
      }
      uVar4 = 0;
LAB_1433700bd:
      if (lVar1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
      }
    }
    return uVar4;
  }
LAB_14336fd0e:
  return (ulonglong)pfVar3 & 0xffffffffffffff00;
}



// FUNCTION 143370110 FUN_143370110 body=140 status=ok
// SIG undefined FUN_143370110(void)

void FUN_143370110(RefCountNTSImpl *param_1,int *param_2)

{
  RefCountNTSImpl RVar1;
  char cVar2;
  longlong *plVar3;
  
  if (param_1 != (RefCountNTSImpl *)0x0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  if ((*param_2 == 8) &&
     (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0x23f0) != 0)) {
    FUN_14336e600(param_1,(int)*(char *)((longlong)param_2 + 0x11));
  }
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x1d8))(param_1);
  if (cVar2 != '\0') {
    FUN_1433d5390(param_1 + 0xd8,param_2);
    RVar1 = param_1[0x6d];
    if (RVar1 != (RefCountNTSImpl)0x0) {
      plVar3 = (longlong *)
               (**(code **)(*(longlong *)(param_1 + (ulonglong)(byte)RVar1 * 4) + 0x28))
                         (param_1 + (ulonglong)(byte)RVar1 * 4);
      (**(code **)(*plVar3 + 0x40))(plVar3,param_2);
    }
  }
  Scaleform::RefCountNTSImpl::Release(param_1);
  return;
}



// FUNCTION 1433701b0 FUN_1433701b0 body=104 status=ok
// SIG undefined FUN_1433701b0(void)

void FUN_1433701b0(RefCountNTSImpl *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  if (param_1 != (RefCountNTSImpl *)0x0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  cVar1 = (**(code **)(*(longlong *)param_1 + 0x1d8))();
  if (cVar1 != '\0') {
    FUN_1433d5430(param_1 + 0xd8,param_2,param_3);
    (**(code **)(*(longlong *)param_1 + 0x308))(param_1,param_2,param_3);
  }
  Scaleform::RefCountNTSImpl::Release(param_1);
  return;
}



// FUNCTION 143370220 FUN_143370220 body=131 status=ok
// SIG undefined FUN_143370220(void)

void FUN_143370220(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0xe0);
  *(short *)(param_1 + 0xbe) = (short)param_2;
  if (lVar4 != 0) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0xd8));
      plVar2 = (longlong *)0x0;
      if (*(char *)((longlong)plVar1 + 0x6a) < '\0') {
        plVar2 = plVar1;
      }
      if (plVar2 != (longlong *)0x0) {
        *(short *)((longlong)plVar2 + 0xbe) = (short)param_2;
        (**(code **)(*plVar2 + 0x358))(plVar2,param_2);
      }
      lVar3 = lVar3 + 0x10;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 1433702b0 FUN_1433702b0 body=143 status=ok
// SIG undefined FUN_1433702b0(void)

void FUN_1433702b0(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  if ((*(int *)(*param_4 + 0x20) != 0) && ((*(byte *)(param_1 + 0x6b) & 1) != 0)) {
    FUN_14336d4b0(param_3,param_4);
  }
  FUN_1433d4990(param_1 + 0xd8,param_1,param_2,param_3);
  if ((*(int *)(*param_4 + 0x20) != 0) && (*(char *)(param_3 + 0x6a) < '\0')) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x140))(*(longlong **)(param_1 + 0x20),param_3);
  }
  FSettingsModule::ShutdownModule(param_1);
  return;
}



// FUNCTION 143370350 FUN_143370350 body=52 status=ok
// SIG undefined FUN_143370350(void)

void FUN_143370350(longlong param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 local_res8 [8];
  
  local_res8[0] = *param_3;
  Scaleform::GFx::DisplayList::RemoveDisplayObject(param_1 + 0xd8,param_1,param_2,local_res8);
  FSettingsModule::ShutdownModule(param_1);
  return;
}



// FUNCTION 143370390 FUN_143370390 body=59 status=ok
// SIG undefined FUN_143370390(void)

void FUN_143370390(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = Scaleform::GFx::DisplayList::FindDisplayIndex(param_1 + 0xd8);
  if (-1 < lVar1) {
    Scaleform::GFx::DisplayList::RemoveEntryAtIndex(param_1 + 0xd8,param_1,lVar1);
  }
  return;
}



// FUNCTION 1433703e0 FUN_1433703e0 body=428 status=ok
// SIG undefined FUN_1433703e0(void)

void FUN_1433703e0(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  RefCountImpl *this;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong local_res20;
  longlong local_28;
  longlong *local_20;
  
  uVar6 = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    local_20 = (longlong *)(param_2 + 0x18);
    local_res20 = 0;
    do {
      plVar3 = local_20;
      lVar2 = *(longlong *)(local_res20 + *(longlong *)(param_1 + 0xd8));
      this = (RefCountImpl *)(**(code **)(*param_3 + 0x50))(param_3,0x30);
      if (this != (RefCountImpl *)0x0) {
        *(undefined8 *)(this + 8) = 0;
        *(undefined8 *)(this + 0x10) = 0;
        *(undefined8 *)(this + 0x18) = 0;
        *(undefined8 *)(this + 0x20) = 0;
        *(undefined8 *)(this + 0x28) = 0;
        *(undefined ***)this = &PTR_FUN_144f70a50;
        *(undefined ***)this = &PTR_FUN_145b028d8;
        *(undefined4 *)(this + 8) = 1;
        FUN_1432c5250(this + 0x10);
        *(undefined8 *)(this + 0x18) = 0;
        *(undefined8 *)(this + 0x20) = 0;
        *(undefined8 *)(this + 0x28) = 0;
      }
      lVar5 = 0;
      if ((*(byte *)(lVar2 + 0x6b) & 1) != 0) {
        lVar5 = lVar2;
      }
      if (lVar5 == 0) {
        Scaleform::String::operator=(this + 0x10,"Unnamed");
      }
      else {
        puVar4 = (undefined8 *)Scaleform::GFx::DisplayObject::GetName(lVar5,&local_28);
        Scaleform::String::operator=(this + 0x10,*(undefined8 *)*puVar4);
        piVar1 = (int *)(local_28 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      FUN_1432cfe60(plVar3,plVar3);
      puVar4 = (undefined8 *)(*plVar3 + (plVar3[1] + -1) * 8);
      if (puVar4 != (undefined8 *)0x0) {
        if (this != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::AddRef(this);
        }
        *puVar4 = this;
      }
      if (this != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(this);
      }
      if ((*(ushort *)(lVar2 + 0x6a) >> 9 & 1) != 0) {
        FUN_1433703e0(lVar2,this);
      }
      uVar6 = uVar6 + 1;
      local_res20 = local_res20 + 0x10;
    } while (uVar6 < *(ulonglong *)(param_1 + 0xe0));
  }
  return;
}



// FUNCTION 1433705a0 FUN_1433705a0 body=57 status=ok
// SIG undefined FUN_1433705a0(void)

void FUN_1433705a0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  if (*(byte *)(param_1 + 0x6d) != 0) {
    plVar1 = (longlong *)
             (**(code **)(*(longlong *)(param_1 + (ulonglong)*(byte *)(param_1 + 0x6d) * 4) + 0x28))
                       ();
                    /* WARNING: Could not recover jumptable at 0x0001433705cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xb8))(plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 1433705e0 FUN_1433705e0 body=329 status=ok
// SIG undefined FUN_1433705e0(void)

void FUN_1433705e0(longlong param_1,longlong *param_2,Point<float> *param_3)

{
  ulonglong _Size;
  longlong *plVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  Point<float> local_res8 [8];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  _Size = *(ulonglong *)(param_1 + 0xe0);
  uVar6 = 0;
  if (_Size != 0) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xd8) + uVar6 * 0x10);
      if ((short)plVar1[0xd] != 0) {
        if (param_2[1] == 0) {
          if ((ulonglong)param_2[2] < _Size) {
            FUN_1432bbfd0(param_2,param_2,(_Size >> 2) + _Size);
          }
          param_2[1] = _Size;
          _guard_xfg_dispatch_icall_nop((void *)*param_2,1,_Size);
        }
        puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x10))(plVar1);
        local_48 = *puVar4;
        uStack_40 = puVar4[1];
        local_38 = puVar4[2];
        uStack_30 = puVar4[3];
        Scaleform::Render::Matrix2x4<float>::TransformByInverse
                  ((Matrix2x4<float> *)&local_48,local_res8,param_3);
        lVar7 = *param_2;
        uVar3 = (**(code **)(*plVar1 + 0x200))(plVar1,local_res8,1);
        uVar5 = uVar6 + 1;
        *(undefined1 *)(uVar6 + lVar7) = uVar3;
        if (uVar5 < _Size) {
          lVar7 = uVar5 * 0x10;
          do {
            lVar2 = *(longlong *)(lVar7 + *(longlong *)(param_1 + 0xd8));
            if ((lVar2 != 0) && ((int)(uint)*(ushort *)(plVar1 + 0xd) < *(int *)(lVar2 + 0x2c)))
            break;
            lVar7 = lVar7 + 0x10;
            *(undefined1 *)(*param_2 + uVar5) = *(undefined1 *)(*param_2 + uVar6);
            uVar5 = uVar5 + 1;
          } while (uVar5 < _Size);
        }
        uVar6 = uVar5 - 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < _Size);
  }
  return;
}



// FUNCTION 143370730 FindRootNode body=58 status=ok
// SIG undefined FindRootNode(void)

undefined8 Scaleform::GFx::DisplayObjContainer::FindRootNode(longlong param_1)

{
  longlong lVar1;
  
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    lVar1 = 0;
    if ((*(ushort *)(param_1 + 0x6a) >> 9 & 1) != 0) {
      lVar1 = param_1;
    }
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x108) != 0)) break;
    param_1 = *(longlong *)(param_1 + 0x38);
  }
  return *(undefined8 *)(lVar1 + 0x108);
}



// FUNCTION 143370770 FUN_143370770 body=129 status=ok
// SIG undefined FUN_143370770(void)

undefined8 FUN_143370770(longlong param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  cVar3 = FUN_143367850();
  if (cVar3 != '\0') {
    return 1;
  }
  uVar4 = 0;
  uVar1 = *(ulonglong *)(param_1 + 0xe0);
  uVar5 = uVar4;
  if (uVar1 != 0) {
    do {
      plVar2 = *(longlong **)(uVar5 + *(longlong *)(param_1 + 0xd8));
      if ((plVar2 != (longlong *)0x0) && (cVar3 = (**(code **)(*plVar2 + 0x70))(), cVar3 != '\0')) {
        return 1;
      }
      uVar4 = uVar4 + 1;
      uVar5 = uVar5 + 0x10;
    } while (uVar4 < uVar1);
  }
  return 0;
}



// FUNCTION 143370800 FUN_143370800 body=96 status=ok
// SIG undefined FUN_143370800(void)

void FUN_143370800(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1433670e0();
  lVar3 = *(longlong *)(param_1 + 0xe0);
  if (lVar3 != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(lVar2 + *(longlong *)(param_1 + 0xd8));
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x60))();
      }
      lVar2 = lVar2 + 0x10;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 143370870 FUN_143370870 body=372 status=ok
// SIG undefined FUN_143370870(void)

void FUN_143370870(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  RefCountImpl *this;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (*(longlong *)(param_1 + 0x108) == 0) {
    lVar7 = 0;
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
    lVar4 = *(longlong *)(lVar6 + 0x80);
    lVar8 = lVar6 + 0x70;
    if (lVar6 == -0x78) {
      lVar8 = lVar7;
    }
    for (; lVar4 != lVar8; lVar4 = *(longlong *)(lVar4 + 0x10)) {
      if ((*(longlong *)(lVar4 + 0x20) == *(longlong *)(param_1 + 0xb0)) &&
         (*(char *)(lVar4 + 0x30) == param_2)) {
        *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
        *(longlong *)(param_1 + 0x108) = lVar4;
        break;
      }
    }
    if (*(longlong *)(param_1 + 0x108) == 0) {
      plVar1 = *(longlong **)(param_1 + 0x20);
      plVar2 = *(longlong **)(plVar1[2] + 0x48);
      uVar5 = (**(code **)(*plVar1 + 0x30))(plVar1,plVar2,*(undefined8 *)(param_1 + 0xb0),param_2);
      *(undefined8 *)(param_1 + 0x108) = uVar5;
      *(undefined4 *)(*(longlong *)(param_1 + 0x108) + 0x2c) =
           *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x70) + 0x104);
      if (param_2 == '\0') {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x28))();
      }
      else {
        uVar3 = 0;
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x108) + 0x28) = uVar3;
      lVar6 = (**(code **)(*plVar2 + 0x50))(plVar2,0x70);
      if (lVar6 != 0) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
        lVar7 = FUN_143386870(lVar6,lVar4,*(undefined8 *)(param_1 + 0xb0),
                              *(undefined8 *)(lVar4 + 600));
      }
      lVar6 = *(longlong *)(param_1 + 0x108);
      this = *(RefCountImpl **)(lVar6 + 0x38);
      if (this != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(this);
      }
      *(longlong *)(lVar6 + 0x38) = lVar7;
      lVar6 = *(longlong *)(param_1 + 0x108);
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
      *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar4 + 0x80);
      *(longlong *)(lVar6 + 8) = lVar4 + 0x70;
      *(longlong *)(*(longlong *)(lVar4 + 0x80) + 8) = lVar6;
      *(longlong *)(lVar4 + 0x80) = lVar6;
    }
  }
  return;
}



// FUNCTION 1433709f0 FUN_1433709f0 body=257 status=ok
// SIG undefined FUN_1433709f0(void)

void FUN_1433709f0(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  uVar1 = *(uint *)(param_1 + 0xb8);
  lVar6 = *(longlong *)(param_1 + 0xe0);
  if (lVar6 != 0) {
    lVar7 = 0;
    do {
      plVar2 = *(longlong **)(lVar7 + *(longlong *)(param_1 + 0xd8));
      plVar5 = (longlong *)0x0;
      if (*(char *)((longlong)plVar2 + 0x6a) < '\0') {
        plVar5 = plVar2;
      }
      if (plVar5 != (longlong *)0x0) {
        if (((*(uint *)(param_1 + 0xb8) >> 3 & 1) == 0) && ((uVar1 >> 3 & 1) == 0)) {
          *(uint *)(plVar5 + 0x17) = *(uint *)(plVar5 + 0x17) & 0xfffffff7;
        }
        else {
          *(uint *)(plVar5 + 0x17) = *(uint *)(plVar5 + 0x17) | 8;
        }
        (**(code **)(*plVar5 + 0x348))(plVar5);
        if (((*(uint *)(plVar5 + 0x17) >> 0x15 & 1) == 0) ||
           ((*(uint *)(plVar5 + 0x17) >> 0x16 & 1) != 0)) {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
        }
        iVar3 = (**(code **)(*plVar5 + 0x340))(plVar5,uVar4);
        if (iVar3 == -1) {
          *(uint *)(plVar5 + 0x17) = *(uint *)(plVar5 + 0x17) | 0x400000;
        }
        else if (iVar3 == 1) {
          FUN_14336e960(plVar5);
        }
      }
      lVar7 = lVar7 + 0x10;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 143370b00 FUN_143370b00 body=257 status=ok
// SIG undefined FUN_143370b00(void)

void FUN_143370b00(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  uVar1 = *(uint *)(param_1 + 0xb8);
  lVar6 = *(longlong *)(param_1 + 0xe0);
  if (lVar6 != 0) {
    lVar7 = 0;
    do {
      plVar2 = *(longlong **)(lVar7 + *(longlong *)(param_1 + 0xd8));
      plVar5 = (longlong *)0x0;
      if (*(char *)((longlong)plVar2 + 0x6a) < '\0') {
        plVar5 = plVar2;
      }
      if (plVar5 != (longlong *)0x0) {
        if (((*(uint *)(param_1 + 0xb8) >> 2 & 1) == 0) && ((uVar1 >> 2 & 1) == 0)) {
          *(uint *)(plVar5 + 0x17) = *(uint *)(plVar5 + 0x17) & 0xfffffffb;
        }
        else {
          *(uint *)(plVar5 + 0x17) = *(uint *)(plVar5 + 0x17) | 4;
        }
        (**(code **)(*plVar5 + 0x350))(plVar5);
        if (((*(uint *)(plVar5 + 0x17) >> 0x15 & 1) == 0) ||
           ((*(uint *)(plVar5 + 0x17) >> 0x16 & 1) != 0)) {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
        }
        iVar3 = (**(code **)(*plVar5 + 0x340))(plVar5,uVar4);
        if (iVar3 == -1) {
          *(uint *)(plVar5 + 0x17) = *(uint *)(plVar5 + 0x17) | 0x400000;
        }
        else if (iVar3 == 1) {
          FUN_14336e960(plVar5);
        }
      }
      lVar7 = lVar7 + 0x10;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 143370c10 FUN_143370c10 body=103 status=ok
// SIG undefined FUN_143370c10(void)

void FUN_143370c10(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = param_1[1];
  puVar1 = (undefined8 *)(*param_1 + -0x10 + lVar2 * 0x10);
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    if ((RefCountNTSImpl *)*puVar1 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*puVar1);
    }
    puVar1 = puVar1 + -2;
  }
                    /* WARNING: Could not recover jumptable at 0x000143370c73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  return;
}



// FUNCTION 143370c80 FUN_143370c80 body=143 status=ok
// SIG undefined FUN_143370c80(void)

void FUN_143370c80(RefCountImplCore *param_1)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x20);
  puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + (lVar4 + -1) * 8);
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    if ((RefCountImpl *)*puVar3 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar3);
    }
    puVar3 = puVar3 + -1;
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 143370d20 FUN_143370d20 body=89 status=ok
// SIG undefined FUN_143370d20(void)

undefined8 FUN_143370d20(undefined8 param_1,ulonglong param_2)

{
  FUN_143370c80();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 143370d80 FUN_143370d80 body=89 status=ok
// SIG undefined FUN_143370d80(void)

undefined8 FUN_143370d80(undefined8 param_1,ulonglong param_2)

{
  FUN_14336f0d0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 143370de0 Eval body=30 status=ok
// SIG undefined Eval(void)

undefined8 UMovieSceneStringSection::Eval(longlong param_1,undefined8 param_2)

{
  FUN_1433d5fd0(param_1 + 0xd8);
  return param_2;
}



// FUNCTION 143370e00 Eval body=30 status=ok
// SIG undefined Eval(void)

undefined8 UMovieSceneStringSection::Eval(longlong param_1,undefined8 param_2)

{
  FUN_1433d6200(param_1 + 0xd8);
  return param_2;
}



// FUNCTION 143370e20 FUN_143370e20 body=45 status=ok
// SIG undefined FUN_143370e20(void)

undefined1 FUN_143370e20(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar1 = FUN_1432cd1e0();
    if ((*(ushort *)(lVar1 + 10) >> 9 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143370e50 FUN_143370e50 body=92 status=ok
// SIG undefined FUN_143370e50(void)

void FUN_143370e50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_18 [4];
  
  plVar1 = (longlong *)(param_1 + -0x18);
  if (param_1 == 0) {
    plVar1 = (longlong *)0x0;
  }
  local_res18 = param_3;
  local_res20 = param_4;
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x268))();
  if (plVar1 != (longlong *)0x0) {
    local_18[0] = 0x31000;
    (**(code **)(*plVar1 + 8))(plVar1,local_18,param_2,&local_res18);
  }
  return;
}



// FUNCTION 143370eb0 FUN_143370eb0 body=323 status=ok
// SIG undefined FUN_143370eb0(void)

undefined8 * FUN_143370eb0(undefined8 *param_1,RefCountImpl *param_2)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145b02d80;
  *(undefined4 *)(param_1 + 1) = 1;
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
  }
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[9] = &PTR_FUN_144f70a50;
  param_1[9] = &PTR_FUN_145b02d28;
  *(undefined4 *)(param_1 + 10) = 1;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = param_1 + 3;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x17] = 0;
  param_1[0x16] = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 0x17) = 1;
  param_1[0x16] = &PTR_FUN_145b02d28;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = param_1 + 6;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  return param_1;
}



// FUNCTION 143371000 FUN_143371000 body=281 status=ok
// SIG undefined FUN_143371000(void)

undefined8 * FUN_143371000(undefined8 *param_1,RefCountImpl *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res8 [2];
  
  uVar2 = 0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145b00760;
  param_1[2] = &PTR_LAB_145b00768;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_145b02d88;
  param_1[2] = &PTR_LAB_145b02d90;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
  }
  param_1[0xb] = param_2;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  if (param_3 != 0) {
    local_res8[0] = 0x47;
    lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x118,local_res8);
    if (lVar1 != 0) {
      uVar2 = FUN_143370eb0(lVar1,param_3);
    }
    if ((RefCountImpl *)param_1[0xc] != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0xc]);
    }
    param_1[0xc] = uVar2;
    FUN_1433720d0(param_1);
  }
  FUN_1433730a0(param_1);
  return param_1;
}



// FUNCTION 143371120 FUN_143371120 body=110 status=ok
// SIG undefined FUN_143371120(void)

void FUN_143371120(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145b02d88;
  param_1[2] = &PTR_LAB_145b02d90;
  FUN_143325230();
  if ((RefCountImpl *)param_1[0xc] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0xc]);
  }
  if ((RefCountImpl *)param_1[0xb] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0xb]);
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[8]);
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[5]);
  FUN_143325290(param_1);
  return;
}



// FUNCTION 1433711a0 FUN_1433711a0 body=167 status=ok
// SIG undefined FUN_1433711a0(void)

void FUN_1433711a0(longlong param_1,RefCountImpl *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res8 [2];
  
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
  }
  if (*(RefCountImpl **)(param_1 + 0x58) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x58));
  }
  *(RefCountImpl **)(param_1 + 0x58) = param_2;
  if (param_3 != 0) {
    local_res8[0] = 0x47;
    lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x118,local_res8);
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_143370eb0(lVar1,param_3);
    }
    if (*(RefCountImpl **)(param_1 + 0x60) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x60));
    }
    *(undefined8 *)(param_1 + 0x60) = uVar2;
    FUN_1433720d0(param_1);
  }
  FUN_1433730a0(param_1);
  return;
}



// FUNCTION 143371250 FUN_143371250 body=348 status=ok
// SIG undefined FUN_143371250(void)

undefined1
FUN_143371250(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  longlong lVar4;
  RefCountImpl *this;
  ulonglong uVar5;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar6;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  uVar1 = *(uint *)(param_3 + 0x84);
  uVar5 = (ulonglong)uVar1;
  this = (RefCountImpl *)0x0;
  if (*(longlong *)(param_3 + 0x58) != 0) {
    if (*(int *)(*(longlong *)(param_1 + 0x18) + 0x10 + uVar5 * 0x14) != 0) {
      lVar4 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x1c0,0);
      if (lVar4 != 0) {
        local_38 = 0x3f800000;
        uStack_34 = 0;
        uStack_30 = 0;
        uStack_2c = 0;
        local_28 = 0;
        uStack_24 = 0x3f800000;
        uStack_20 = 0;
        uStack_1c = 0;
        this = (RefCountImpl *)FUN_1433cf640(lVar4,*(undefined8 *)(param_3 + 0x58),&local_38);
      }
      uVar3 = FUN_143374220(param_1 + -0x10,param_2,this,param_4,CONCAT44(uVar6,uVar1));
      goto LAB_14337137e;
    }
    if (*(longlong *)(param_3 + 0x58) != 0) {
      lVar4 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x1c0,0);
      if (lVar4 != 0) {
        this = (RefCountImpl *)
               FUN_1433cf640(lVar4,*(longlong *)(param_3 + 0x58),
                             *(longlong *)(param_3 + 0x58) + 0x70);
      }
    }
  }
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + 0xc + uVar5 * 0x14);
  if (iVar2 == 0) {
    uVar3 = FUN_143374500(param_1 + -0x10,param_2,this,uVar5,param_3,param_4,param_5);
  }
  else {
    uVar3 = FUN_143374d60(param_1 + -0x10,param_2,this,iVar2,CONCAT44(uVar6,uVar1),param_3,param_4,
                          param_5);
  }
LAB_14337137e:
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
  }
  return uVar3;
}



// FUNCTION 1433713c0 FUN_1433713c0 body=605 status=ok
// SIG undefined FUN_1433713c0(void)

float * FUN_1433713c0(longlong param_1,float *param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  int local_b8;
  int local_b4;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_74;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined1 local_38 [32];
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    FUN_1433779b0(param_2,*(undefined8 *)(param_1 + 0x48),param_3,0);
  }
  else {
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0x50) + 0x48);
    local_68 = 1e+30;
    fStack_64 = 1e+30;
    fStack_60 = -1e+30;
    fStack_5c = -1e+30;
    local_a8 = (**(code **)(*plVar2 + 0x30))(plVar2);
    local_78 = 0x3f800000;
    local_a4 = 0;
    local_9c = 0;
    local_94 = 0;
    local_8c = 0;
    local_84 = 0;
    local_7c = 0;
    local_74 = 0;
    iVar1 = (**(code **)(*plVar2 + 0x40))(plVar2,&local_a8,&local_58,&local_b8);
    while (iVar1 != 0) {
      if ((local_b8 == 0) == (local_b4 == 0)) {
        (**(code **)(*plVar2 + 0x50))(plVar2,&local_a8);
      }
      else {
        FUN_14332fd60(plVar2,param_3,&local_a8,&local_58,&local_68);
      }
      iVar1 = (**(code **)(*plVar2 + 0x40))(plVar2,&local_a8,&local_58,&local_b8);
    }
    iVar1 = (**(code **)(*plVar2 + 0x18))(plVar2);
    if (iVar1 != 0) {
      (**(code **)(*plVar2 + 0x38))(plVar2);
      FUN_143379040(plVar2,param_3,&local_68);
    }
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0x50) + 0xb0);
    local_58 = 1e+30;
    fStack_54 = 1e+30;
    fStack_50 = -1e+30;
    fStack_4c = -1e+30;
    local_a8 = (**(code **)(*plVar2 + 0x30))(plVar2);
    local_a4 = 0;
    local_9c = 0;
    local_94 = 0;
    local_8c = 0;
    local_84 = 0;
    local_7c = 0;
    local_78 = 0x3f800000;
    local_74 = 0;
    iVar1 = (**(code **)(*plVar2 + 0x40))(plVar2,&local_a8,local_38,&local_b8);
    while (iVar1 != 0) {
      if ((local_b8 == 0) == (local_b4 == 0)) {
        (**(code **)(*plVar2 + 0x50))(plVar2,&local_a8);
      }
      else {
        FUN_14332fd60(plVar2,param_3,&local_a8,local_38,&local_58);
      }
      iVar1 = (**(code **)(*plVar2 + 0x40))(plVar2,&local_a8,local_38,&local_b8);
    }
    iVar1 = (**(code **)(*plVar2 + 0x18))(plVar2);
    if (iVar1 != 0) {
      (**(code **)(*plVar2 + 0x38))(plVar2);
      FUN_143379040(plVar2,param_3,&local_58);
    }
    if (local_68 <= local_58) {
      local_58 = local_68;
    }
    if (fStack_60 <= fStack_50) {
      fStack_60 = fStack_50;
    }
    if (fStack_64 <= fStack_54) {
      fStack_54 = fStack_64;
    }
    if (fStack_5c <= fStack_4c) {
      fStack_5c = fStack_4c;
    }
    *param_2 = local_58;
    param_2[2] = fStack_60;
    param_2[1] = fStack_54;
    param_2[3] = fStack_5c;
  }
  return param_2;
}



// FUNCTION 143371630 FUN_143371630 body=865 status=ok
// SIG undefined FUN_143371630(void)

undefined4 *
FUN_143371630(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4,
             longlong param_5,undefined8 param_6)

{
  RefCountImpl *this;
  undefined4 uVar1;
  int iVar2;
  int local_1c8;
  int local_1c4;
  int local_1b8;
  int local_1b4;
  undefined **local_1a8;
  undefined8 local_1a0;
  RefCountImpl *local_198;
  RefCountImpl *local_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 local_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 local_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined8 local_154;
  undefined4 local_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined8 local_11c;
  undefined4 local_108;
  undefined8 local_104;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined1 local_d4;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined4 local_98;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined4 local_6c;
  undefined4 local_68;
  uint uStack_64;
  undefined1 local_60 [24];
  undefined1 local_48 [48];
  
  local_98 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x30))();
  this = *(RefCountImpl **)(param_1 + 0x50);
  local_198 = *(RefCountImpl **)(param_1 + 0x48);
  local_1a8 = &PTR_FUN_145b02e00;
  uStack_84 = 0;
  uStack_7c = 0;
  uStack_74 = 0;
  local_6c = 0;
  local_68 = 0x3f800000;
  uStack_64 = uStack_64 & 0xffffff00;
  local_1a0 = 1;
  uStack_94 = 0;
  uStack_8c = 0;
  if (local_198 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(local_198);
  }
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(this);
  }
  *param_2 = 0x7149f2ca;
  local_154 = CONCAT44(uStack_64,local_68);
  local_184 = local_98;
  uStack_180 = (undefined4)uStack_94;
  uStack_17c = uStack_94._4_4_;
  uStack_178 = (undefined4)uStack_8c;
  param_2[1] = 0x7149f2ca;
  local_174 = uStack_8c._4_4_;
  uStack_170 = (undefined4)uStack_84;
  uStack_16c = uStack_84._4_4_;
  uStack_168 = (undefined4)uStack_7c;
  param_2[2] = 0xf149f2ca;
  local_164 = uStack_7c._4_4_;
  uStack_160 = (undefined4)uStack_74;
  uStack_15c = uStack_74._4_4_;
  uStack_158 = local_6c;
  param_2[3] = 0xf149f2ca;
  local_14c = local_98;
  uStack_148 = (undefined4)uStack_94;
  uStack_144 = uStack_94._4_4_;
  uStack_140 = (undefined4)uStack_8c;
  local_13c = uStack_8c._4_4_;
  uStack_138 = (undefined4)uStack_84;
  uStack_134 = uStack_84._4_4_;
  uStack_130 = (undefined4)uStack_7c;
  local_12c = uStack_7c._4_4_;
  uStack_128 = (undefined4)uStack_74;
  uStack_124 = uStack_74._4_4_;
  uStack_120 = local_6c;
  local_190 = this;
  local_188 = param_4;
  local_11c = local_154;
  uVar1 = (*(code *)local_1a8[6])(&local_1a8);
  if (param_5 == 0) {
    local_cc = 0;
    local_c4 = 0;
    local_bc = 0;
    local_b4 = 0;
    local_ac = 0;
    local_a4 = 0;
    local_a0 = 0x3f800000;
    local_9c = 0;
    local_d0 = uVar1;
    iVar2 = (*(code *)local_1a8[8])(&local_1a8,&local_d0,local_48,&local_1b8);
    while (iVar2 != 0) {
      if ((local_1b8 == 0) == (local_1b4 == 0)) {
        (*(code *)local_1a8[10])(&local_1a8,&local_d0);
      }
      else {
        FUN_14332fd60(&local_1a8,param_3,&local_d0,local_48,param_2);
      }
      iVar2 = (*(code *)local_1a8[8])(&local_1a8,&local_d0,local_48,&local_1b8);
    }
    iVar2 = (*(code *)local_1a8[3])(&local_1a8);
    if (iVar2 != 0) {
      (*(code *)local_1a8[7])(&local_1a8);
      FUN_143379040(&local_1a8,param_3,param_2);
    }
  }
  else {
    local_104 = 0;
    local_fc = 0;
    local_f4 = 0;
    local_ec = 0;
    local_e4 = 0;
    local_dc = 0;
    local_d8 = 0x3f800000;
    local_d4 = 0;
    local_108 = uVar1;
    iVar2 = (*(code *)local_1a8[8])(&local_1a8,&local_108,local_60,&local_1c8);
    while (iVar2 != 0) {
      if ((local_1c8 == 0) == (local_1c4 == 0)) {
        (*(code *)local_1a8[10])(&local_1a8,&local_108);
      }
      else {
        FUN_14332fd60(&local_1a8,param_3,&local_108,local_60,param_2);
      }
      iVar2 = (*(code *)local_1a8[8])(&local_1a8,&local_108,local_60,&local_1c8);
    }
    iVar2 = (*(code *)local_1a8[3])(&local_1a8);
    if (iVar2 != 0) {
      (*(code *)local_1a8[7])(&local_1a8);
      FUN_143378f00(&local_1a8,param_3,param_5,param_6,param_2);
    }
  }
  if (local_190 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_190);
  }
  if (local_198 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_198);
  }
  Scaleform::RefCountImplCore::~RefCountImplCore((RefCountImplCore *)&local_1a8);
  return param_2;
}



// FUNCTION 1433719a0 FUN_1433719a0 body=545 status=ok
// SIG undefined FUN_1433719a0(void)

undefined1
FUN_1433719a0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,longlong param_6,undefined8 param_7,longlong param_8)

{
  RefCountImpl *this;
  undefined8 uVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined ***pppuVar5;
  undefined **local_128;
  longlong local_120;
  undefined **local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined8 uStack_e4;
  undefined4 local_dc;
  undefined4 local_d8;
  uint uStack_d4;
  undefined **local_c8;
  undefined8 local_c0;
  RefCountImpl *local_b8;
  RefCountImpl *local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 local_3c;
  
  local_108 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x30))();
  this = *(RefCountImpl **)(param_1 + 0x60);
  local_b8 = *(RefCountImpl **)(param_1 + 0x58);
  local_c8 = &PTR_FUN_145b02e00;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = uStack_d4 & 0xffffff00;
  local_c0 = 1;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_f8 = 0;
  local_d8 = 0x3f800000;
  if (local_b8 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(local_b8);
  }
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(this);
  }
  local_a4 = CONCAT44(uStack_104,local_108);
  uStack_9c = CONCAT44(uStack_fc,uStack_100);
  local_118 = &PTR_FUN_145b02eb8;
  local_94 = CONCAT44(uStack_f4,uStack_f8);
  uStack_8c = CONCAT44(uStack_ec,uStack_f0);
  local_128 = &PTR_FUN_145b02ee0;
  local_a8 = param_5;
  local_74 = CONCAT44(uStack_d4,local_d8);
  local_110 = 0;
  local_120 = 0;
  local_84 = uStack_e8;
  uStack_80 = (undefined4)uStack_e4;
  uStack_7c = uStack_e4._4_4_;
  uStack_78 = local_dc;
  local_4c = uStack_e8;
  uStack_48 = (undefined4)uStack_e4;
  uStack_44 = uStack_e4._4_4_;
  uStack_40 = local_dc;
  pppuVar5 = &local_118;
  uVar1 = param_2;
  if (param_8 != 0) {
    pppuVar5 = &local_128;
    local_120 = param_8;
    uVar1 = local_110;
  }
  local_110 = uVar1;
  local_b0 = this;
  local_6c = local_a4;
  uStack_64 = uStack_9c;
  local_5c = local_94;
  uStack_54 = uStack_8c;
  local_3c = local_74;
  if (param_6 == 0) {
    uVar3 = FUN_143379190(&local_c8,param_2,param_3,param_4);
  }
  else {
    cVar2 = FUN_143379690(&local_c8,pppuVar5);
    if (cVar2 == '\0') {
      iVar4 = (*(code *)local_c8[3])(&local_c8);
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        (*(code *)local_c8[7])(&local_c8);
        uVar3 = FUN_143379f60(&local_c8,pppuVar5,param_3,param_4,param_6,param_7);
      }
    }
    else {
      uVar3 = 1;
    }
  }
  local_128 = &PTR_FUN_145af97b8;
  local_118 = &PTR_FUN_145af97b8;
  if (local_b0 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_b0);
  }
  if (local_b8 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_b8);
  }
  Scaleform::RefCountImplCore::~RefCountImplCore((RefCountImplCore *)&local_c8);
  return uVar3;
}



// FUNCTION 143371bf0 FUN_143371bf0 body=285 status=ok
// SIG undefined FUN_143371bf0(void)

void FUN_143371bf0(longlong param_1,undefined8 *param_2,ulonglong param_3,undefined4 param_4,
                  byte param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_28 [32];
  
  if ((param_5 & 2) != 0) {
    puVar1 = (undefined8 *)FUN_1432d1f70(local_28,1);
    uVar3 = puVar1[1];
    *param_2 = *puVar1;
    param_2[1] = uVar3;
    uVar3 = puVar1[3];
    param_2[2] = puVar1[2];
    param_2[3] = uVar3;
    param_2[3] = &DAT_1467cdbb8;
    return;
  }
  lVar2 = FUN_143373ff0(param_1 + -0x10,param_3 & 0xffffffff,param_4,0);
  if (lVar2 == 0) {
    puVar1 = (undefined8 *)FUN_1432d1f70(local_28,3);
  }
  else {
    if (*(longlong *)(lVar2 + 0x18) == 0) {
      uVar3 = (**(code **)(**(longlong **)(lVar2 + 0x10) + 0x48))();
      puVar1 = (undefined8 *)FUN_1432d1fe0(local_28,uVar3,*(undefined2 *)(lVar2 + 0x40));
      uVar3 = puVar1[1];
      *param_2 = *puVar1;
      param_2[1] = uVar3;
      uVar3 = puVar1[3];
      param_2[2] = puVar1[2];
      param_2[3] = uVar3;
      if (*(int *)(*(longlong *)(param_1 + 0x18) + 0x10 + (param_3 & 0xffffffff) * 0x14) == 0) {
        return;
      }
      if ((param_5 & 8) == 0) {
        return;
      }
      *(undefined4 *)(param_2 + 2) = 0xb;
      param_2[3] = &DAT_1467ce6c8;
      return;
    }
    puVar1 = (undefined8 *)FUN_1432d2010(local_28);
  }
  uVar3 = puVar1[1];
  *param_2 = *puVar1;
  param_2[1] = uVar3;
  uVar3 = puVar1[3];
  param_2[2] = puVar1[2];
  param_2[3] = uVar3;
  return;
}



// FUNCTION 143371d20 FUN_143371d20 body=528 status=ok
// SIG undefined FUN_143371d20(void)

void FUN_143371d20(longlong param_1,longlong *param_2,longlong param_3,Matrix2x4<float> *param_4,
                  undefined4 param_5,undefined4 param_6)

{
  float fVar1;
  longlong lVar2;
  Matrix2x4<float> *pMVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  longlong *local_res10;
  float local_78 [8];
  float local_58 [12];
  
  local_res8[0] = 0;
  local_res10 = param_2;
  lVar2 = FUN_143373ff0(param_1 + -0x10,param_5,param_6,local_res8);
  if (lVar2 == 0) {
    *(undefined8 *)param_4 = 0x3f800000;
    *(undefined8 *)(param_4 + 8) = 0;
    *(undefined4 *)(param_4 + 0x10) = 0;
    *(undefined8 *)(param_4 + 0x14) = 0x3f800000;
    *(undefined4 *)(param_4 + 0x1c) = 0;
  }
  else {
    *(undefined4 *)param_4 = *(undefined4 *)(lVar2 + 0x20);
    *(undefined4 *)(param_4 + 4) = *(undefined4 *)(lVar2 + 0x24);
    *(undefined4 *)(param_4 + 8) = *(undefined4 *)(lVar2 + 0x28);
    *(undefined4 *)(param_4 + 0xc) = *(undefined4 *)(lVar2 + 0x2c);
    *(undefined4 *)(param_4 + 0x10) = *(undefined4 *)(lVar2 + 0x30);
    *(undefined4 *)(param_4 + 0x14) = *(undefined4 *)(lVar2 + 0x34);
    *(undefined4 *)(param_4 + 0x18) = *(undefined4 *)(lVar2 + 0x38);
    *(undefined4 *)(param_4 + 0x1c) = *(undefined4 *)(lVar2 + 0x3c);
    if (param_3 != 0) {
      if ((*(longlong *)(param_1 + 0x50) != 0) && (fVar1 = *(float *)(param_3 + 0x80), fVar1 != 0.0)
         ) {
        pMVar3 = (Matrix2x4<float> *)FUN_1433740e0(param_1 + -0x10,local_58,param_5,param_6);
        local_78[0] = 1.0;
        local_78[1] = 0.0;
        local_78[2] = 0.0;
        local_78[3] = 0.0;
        local_78[4] = 0.0;
        local_78[5] = 1.0;
        local_78[6] = 0.0;
        local_78[7] = 0.0;
        Scaleform::Render::Matrix2x4<float>::SetInverse((Matrix2x4<float> *)local_78,pMVar3);
        local_58[0] = 1.0;
        local_58[1] = 0.0;
        local_58[2] = 0.0;
        local_58[3] = 0.0;
        local_58[4] = 0.0;
        local_58[5] = 1.0;
        local_58[6] = 0.0;
        local_58[7] = 0.0;
        Scaleform::Render::Matrix2x4<float>::SetInverse
                  ((Matrix2x4<float> *)local_58,(Matrix2x4<float> *)(lVar2 + 0x20));
        *(float *)param_4 = (local_78[0] - local_58[0]) * fVar1 + local_58[0];
        *(float *)(param_4 + 4) = (local_78[1] - local_58[1]) * fVar1 + local_58[1];
        *(float *)(param_4 + 8) = (local_78[2] - local_58[2]) * fVar1 + local_58[2];
        *(float *)(param_4 + 0xc) = (local_78[3] - local_58[3]) * fVar1 + local_58[3];
        *(float *)(param_4 + 0x10) = (local_78[4] - local_58[4]) * fVar1 + local_58[4];
        *(float *)(param_4 + 0x14) = (local_78[5] - local_58[5]) * fVar1 + local_58[5];
        *(float *)(param_4 + 0x18) = (local_78[6] - local_58[6]) * fVar1 + local_58[6];
        *(float *)(param_4 + 0x1c) = (local_78[7] - local_58[7]) * fVar1 + local_58[7];
        FUN_14337ace0(param_4);
      }
      if (*(longlong *)(param_3 + 0x58) != 0) {
        local_58[0] = 1.0;
        local_58[1] = 0.0;
        local_58[2] = 0.0;
        local_58[3] = 0.0;
        local_58[4] = 0.0;
        local_58[5] = 1.0;
        local_58[6] = 0.0;
        local_58[7] = 0.0;
        FUN_143375440(param_1 + -0x10,*(longlong *)(param_3 + 0x58),param_5,local_res8[0],local_58);
        local_78[0] = 1.0;
        local_78[1] = 0.0;
        local_78[2] = 0.0;
        local_78[3] = 0.0;
        local_78[4] = 0.0;
        local_78[5] = 1.0;
        local_78[6] = 0.0;
        local_78[7] = 0.0;
        Scaleform::Render::Matrix2x4<float>::SetInverse
                  ((Matrix2x4<float> *)local_78,(Matrix2x4<float> *)local_58);
        Scaleform::Render::Matrix2x4<float>::Prepend(param_4,(Matrix2x4<float> *)local_78);
      }
    }
    if (*(longlong *)(lVar2 + 0x10) != 0) {
      uVar4 = (**(code **)(*local_res10 + 0x128))();
      (**(code **)(**(longlong **)(lVar2 + 0x10) + 0xb0))
                (*(longlong **)(lVar2 + 0x10),local_58,uVar4);
      Scaleform::Render::Matrix2x4<float>::Append(param_4,(Matrix2x4<float> *)local_58);
    }
  }
  return;
}



// FUNCTION 143371f40 FUN_143371f40 body=170 status=ok
// SIG undefined FUN_143371f40(void)

void FUN_143371f40(longlong param_1,undefined4 param_2,undefined4 *param_3,float param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 local_res8 [2];
  undefined4 local_38;
  undefined1 local_34 [4];
  undefined4 local_30 [2];
  RefCountImpl *local_28;
  
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))();
  if ((*(longlong *)(param_1 + 0x60) != 0) && (param_4 != 0.0)) {
    local_28 = (RefCountImpl *)0x0;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 0x10);
    (**(code **)(*plVar1 + 0x20))(plVar1,param_2,local_30);
    if (*(longlong *)(param_3 + 2) == 0) {
      local_res8[0] = local_30[0];
      local_38 = *param_3;
      puVar2 = (undefined4 *)Scaleform::Render::Color::Blend(local_34,&local_38,local_res8,param_4);
      *param_3 = *puVar2;
    }
    if (local_28 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(local_28);
    }
  }
  return;
}



// FUNCTION 143371ff0 FUN_143371ff0 body=213 status=ok
// SIG undefined FUN_143371ff0(void)

void FUN_143371ff0(longlong param_1,undefined4 param_2,float *param_3,float param_4)

{
  longlong *plVar1;
  float *pfVar2;
  undefined4 local_res8 [2];
  float local_48;
  undefined1 local_44 [4];
  float local_40 [4];
  undefined4 local_30;
  RefCountImpl *local_28;
  RefCountImpl *pRStack_20;
  
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x28))();
  if ((*(longlong *)(param_1 + 0x60) != 0) && (param_4 != 0.0)) {
    local_28 = (RefCountImpl *)0x0;
    pRStack_20 = (RefCountImpl *)0x0;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 0x10);
    (**(code **)(*plVar1 + 0x28))(plVar1,param_2,local_40);
    *param_3 = (local_40[0] - *param_3) * param_4 + *param_3;
    if (*(longlong *)(param_3 + 6) == 0) {
      local_res8[0] = local_30;
      local_48 = param_3[4];
      pfVar2 = (float *)Scaleform::Render::Color::Blend(local_44,&local_48,local_res8,param_4);
      param_3[4] = *pfVar2;
    }
    if (pRStack_20 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(pRStack_20);
    }
    if (local_28 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(local_28);
    }
  }
  return;
}



// FUNCTION 1433720d0 FUN_1433720d0 body=4037 status=ok
// SIG undefined FUN_1433720d0(void)

void FUN_1433720d0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
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
  undefined8 uVar25;
  char cVar26;
  int iVar27;
  uint uVar28;
  undefined4 uVar29;
  int iVar30;
  uint uVar31;
  ulonglong uVar32;
  longlong lVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  bool bVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  undefined1 local_1b8 [8];
  RefCountImpl *local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 local_16c;
  undefined5 local_168;
  undefined3 uStack_163;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined5 local_130;
  undefined3 uStack_12b;
  undefined1 local_128 [24];
  RefCountImpl *local_110;
  RefCountImpl *pRStack_108;
  undefined1 local_100 [16];
  undefined1 local_f0 [24];
  RefCountImpl *local_d8;
  RefCountImpl *pRStack_d0;
  
  plVar1 = *(longlong **)(param_1 + 0x58);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 0x10);
  iVar27 = (**(code **)(*plVar1 + 0x10))(plVar1);
  if (iVar27 != 0) {
    uVar31 = 1;
    do {
      local_1b0 = (RefCountImpl *)0x0;
      (**(code **)(*plVar1 + 0x20))(plVar1,uVar31,local_1b8);
      if (local_1b0 != (RefCountImpl *)0x0) {
        if (*(longlong *)(local_1b0 + 0x18) != 0) {
          uStack_1a0 = (RefCountImpl *)0x0;
          (**(code **)(*plVar2 + 0x20))(plVar2,uVar31,&local_1a8);
          cVar26 = FUN_1433220c0(*(undefined8 *)(local_1b0 + 0x18),
                                 *(undefined8 *)(uStack_1a0 + 0x18));
          if (cVar26 == '\0') {
            *(undefined8 *)(*(longlong *)(local_1b0 + 0x18) + 0x30) =
                 *(undefined8 *)(uStack_1a0 + 0x18);
            *(undefined1 *)(param_1 + 0x80) = 1;
          }
          if (uStack_1a0 != (RefCountImpl *)0x0) {
            Scaleform::RefCountImpl::Release(uStack_1a0);
          }
        }
        if (local_1b0 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(local_1b0);
        }
      }
      uVar28 = (**(code **)(*plVar1 + 0x10))(plVar1);
      bVar36 = uVar31 < uVar28;
      uVar31 = uVar31 + 1;
    } while (bVar36);
  }
  iVar27 = (**(code **)(*plVar1 + 0x18))(plVar1);
  if (iVar27 != 0) {
    uVar31 = 1;
    do {
      local_110 = (RefCountImpl *)0x0;
      pRStack_108 = (RefCountImpl *)0x0;
      (**(code **)(*plVar1 + 0x28))(plVar1,uVar31,local_128);
      if ((local_110 != (RefCountImpl *)0x0) && (*(longlong *)(local_110 + 0x18) != 0)) {
        local_d8 = (RefCountImpl *)0x0;
        pRStack_d0 = (RefCountImpl *)0x0;
        (**(code **)(*plVar2 + 0x28))(plVar2,uVar31,local_f0);
        cVar26 = FUN_1433220c0(*(undefined8 *)(local_110 + 0x18),*(undefined8 *)(local_d8 + 0x18));
        if (cVar26 == '\0') {
          *(undefined8 *)(*(longlong *)(local_110 + 0x18) + 0x30) = *(undefined8 *)(local_d8 + 0x18)
          ;
          *(undefined1 *)(param_1 + 0x80) = 1;
        }
        if (pRStack_d0 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(pRStack_d0);
        }
        if (local_d8 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(local_d8);
        }
      }
      if (pRStack_108 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(pRStack_108);
      }
      if (local_110 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(local_110);
      }
      uVar28 = (**(code **)(*plVar1 + 0x18))(plVar1);
      bVar36 = uVar31 < uVar28;
      uVar31 = uVar31 + 1;
    } while (bVar36);
  }
  uVar29 = (**(code **)(*plVar1 + 0x30))(plVar1);
  local_160 = (**(code **)(*plVar2 + 0x30))(plVar2);
  lVar33 = *(longlong *)(param_1 + 0x60);
  uStack_194 = 0;
  uStack_190 = 0;
  uStack_18c = 0;
  uStack_188 = 0;
  uStack_184 = 0;
  uStack_180 = 0;
  uStack_17c = 0;
  uStack_178 = 0;
  uStack_174 = 0;
  uStack_170 = 0;
  local_16c = 0;
  _local_168 = CONCAT35(uStack_163,0x3f800000);
  uStack_15c = 0;
  uStack_158 = 0;
  uStack_154 = 0;
  uStack_150 = 0;
  uStack_14c = 0;
  uStack_148 = 0;
  uStack_144 = 0;
  uStack_140 = 0;
  uStack_13c = 0;
  uStack_138 = 0;
  local_134 = 0;
  _local_130 = CONCAT35(uStack_12b,0x3f800000);
  *(undefined4 *)(lVar33 + 0x58) = 0;
  local_198 = uVar29;
  FUN_1432f2630(lVar33 + 0x60,lVar33 + 0x60,0);
  FUN_14337b630(lVar33 + 0x78,lVar33 + 0x78,0);
  lVar3 = *(longlong *)(lVar33 + 0x90);
  if ((*(longlong *)(lVar3 + 8) != 0) && ((*(ulonglong *)(lVar3 + 0x10) & 0xfffffffffffffffe) != 0))
  {
    FUN_143333390(lVar3,lVar3,0);
  }
  *(undefined8 *)(lVar3 + 8) = 0;
  *(undefined8 *)(lVar33 + 0x9c) = 0;
  *(undefined8 *)(lVar33 + 0xa4) = 0;
  lVar33 = *(longlong *)(param_1 + 0x60);
  *(undefined4 *)(lVar33 + 0xc0) = 0;
  FUN_1432f2630(lVar33 + 200,lVar33 + 200,0);
  FUN_14337b630(lVar33 + 0xe0,lVar33 + 0xe0,0);
  lVar3 = *(longlong *)(lVar33 + 0xf8);
  if ((*(longlong *)(lVar3 + 8) != 0) && ((*(ulonglong *)(lVar3 + 0x10) & 0xfffffffffffffffe) != 0))
  {
    FUN_143333390(lVar3,lVar3,0);
  }
  *(undefined8 *)(lVar3 + 8) = 0;
  bVar36 = true;
  *(undefined8 *)(lVar33 + 0x104) = 0;
  *(undefined8 *)(lVar33 + 0x10c) = 0;
  while( true ) {
    iVar27 = (**(code **)(*plVar1 + 0x40))(plVar1,&local_198,&local_1e8,&local_1f8);
    iVar30 = (**(code **)(*plVar2 + 0x40))(plVar2,&local_160,&local_1d0,local_100);
    if ((iVar27 == 0) || (iVar30 == 0)) break;
    if ((iVar27 == 2) || (bVar36)) {
      lVar33 = *(longlong *)(param_1 + 0x60);
      plVar4 = *(longlong **)(lVar33 + 0x90);
      uVar32 = plVar4[1] + 1;
      if (uVar32 < (ulonglong)plVar4[1]) {
        uVar34 = uVar32;
        if (uVar32 < (ulonglong)plVar4[2] >> 1) {
LAB_143372488:
          FUN_143333390(plVar4,plVar4,uVar34);
        }
      }
      else if ((ulonglong)plVar4[2] < uVar32) {
        uVar34 = (uVar32 >> 2) + uVar32;
        goto LAB_143372488;
      }
      plVar4[1] = uVar32;
      *(undefined1 *)(*plVar4 + -1 + uVar32) = 0;
      *(undefined4 *)(lVar33 + 0x58) = 1;
      lVar33 = *(longlong *)(param_1 + 0x60);
      plVar4 = *(longlong **)(lVar33 + 0xf8);
      lVar3 = plVar4[1];
      uVar32 = lVar3 + 1;
      if (uVar32 < (ulonglong)plVar4[1]) {
        uVar34 = uVar32;
        if (uVar32 < (ulonglong)plVar4[2] >> 1) {
LAB_1433724e0:
          FUN_143333390(plVar4,plVar4,uVar34);
        }
      }
      else if ((ulonglong)plVar4[2] < uVar32) {
        uVar34 = (uVar32 >> 2) + uVar32;
        goto LAB_1433724e0;
      }
      bVar36 = false;
      plVar4[1] = uVar32;
      *(undefined1 *)(lVar3 + *plVar4) = 0;
      *(undefined4 *)(lVar33 + 0xc0) = 1;
    }
    FUN_14337b8c0(*(longlong *)(param_1 + 0x60) + 0x48,local_1f8,local_1f4,local_1f0);
    FUN_14337b8c0(*(longlong *)(param_1 + 0x60) + 0xb0,local_1f8,local_1f4,local_1f0);
    FUN_14337ae70(*(longlong *)(param_1 + 0x60) + 0x48,local_1e8,local_1e4);
    FUN_14337ae70(*(longlong *)(param_1 + 0x60) + 0xb0,local_1d0,local_1cc);
    fVar37 = local_1e8;
    fVar38 = local_1e4;
    fVar39 = local_1d0;
    fVar40 = local_1cc;
LAB_143372590:
    uVar25 = _local_130;
    uVar24 = local_134;
    uVar23 = uStack_138;
    uVar22 = uStack_13c;
    uVar21 = uStack_140;
    uVar20 = uStack_144;
    uVar19 = uStack_148;
    uVar18 = uStack_14c;
    uVar17 = uStack_150;
    uVar16 = uStack_154;
    uVar15 = uStack_158;
    uVar14 = uStack_15c;
    uVar13 = local_160;
    uVar12 = _local_168;
    uVar11 = uStack_17c;
    uVar10 = uStack_180;
    uVar9 = uStack_184;
    uVar8 = uStack_188;
    uVar7 = uStack_18c;
    uVar6 = uStack_190;
    uVar5 = uStack_194;
    uVar29 = local_198;
    local_1a8 = CONCAT44(uStack_174,uStack_178);
    uStack_1a0 = (RefCountImpl *)CONCAT44(local_16c,uStack_170);
    iVar27 = (**(code **)(*plVar1 + 0x48))(plVar1,&local_198,&local_1e8);
    iVar30 = (**(code **)(*plVar2 + 0x48))(plVar2,&local_160,&local_1d0);
    if (iVar27 != 0) {
      if (iVar30 != 0) {
        if (iVar27 == iVar30) {
LAB_14337296f:
          if (iVar27 == 1) {
LAB_143372974:
            FUN_14337ad70(*(longlong *)(param_1 + 0x60) + 0x48,local_1e8,local_1e4);
            FUN_14337ad70(*(longlong *)(param_1 + 0x60) + 0xb0,local_1d0,local_1cc);
            fVar37 = local_1e8;
            fVar38 = local_1e4;
            fVar39 = local_1d0;
            fVar40 = local_1cc;
            goto LAB_143372590;
          }
          if (iVar27 != 2) {
            if (iVar27 == 3) {
              FUN_14337a8a0(*(longlong *)(param_1 + 0x60) + 0x48,local_1e8,local_1e4,local_1e0,
                            local_1dc,local_1d8,local_1d4);
              FUN_14337a8a0(*(longlong *)(param_1 + 0x60) + 0xb0,local_1d0,local_1cc,local_1c8,
                            local_1c4,local_1c0,local_1bc);
              fVar37 = local_1d8;
              fVar38 = local_1d4;
              fVar39 = local_1c0;
              fVar40 = local_1bc;
            }
            goto LAB_143372590;
          }
        }
        else if (iVar27 == 1) {
          if (iVar30 != 2) goto LAB_143372974;
          local_1e0 = local_1e8;
          local_1dc = local_1e4;
          local_1e8 = (fVar37 + local_1e8) * 0.5;
          local_1e4 = (fVar38 + local_1e4) * 0.5;
        }
        else {
          if (iVar27 != 2) goto LAB_14337296f;
          if (iVar30 == 1) {
            local_1c8 = local_1d0;
            local_1c4 = local_1cc;
            local_1d0 = (fVar39 + local_1d0) * 0.5;
            local_1cc = (fVar40 + local_1cc) * 0.5;
          }
        }
        FUN_14337b1e0(*(longlong *)(param_1 + 0x60) + 0x48,local_1e8,local_1e4,local_1e0,local_1dc);
        FUN_14337b1e0(*(longlong *)(param_1 + 0x60) + 0xb0,local_1d0,local_1cc,local_1c8,local_1c4);
        fVar37 = local_1e0;
        fVar38 = local_1dc;
        fVar39 = local_1c8;
        fVar40 = local_1c4;
        goto LAB_143372590;
      }
      lVar33 = *(longlong *)(param_1 + 0x60);
      uStack_178 = (undefined4)local_1a8;
      uStack_174 = local_1a8._4_4_;
      uStack_170 = (undefined4)uStack_1a0;
      local_16c = uStack_1a0._4_4_;
      plVar4 = *(longlong **)(lVar33 + 0x90);
      uVar32 = plVar4[1] + 1;
      local_198 = uVar29;
      uStack_194 = uVar5;
      uStack_190 = uVar6;
      uStack_18c = uVar7;
      uStack_188 = uVar8;
      uStack_184 = uVar9;
      uStack_180 = uVar10;
      uStack_17c = uVar11;
      _local_168 = uVar12;
      if (uVar32 < (ulonglong)plVar4[1]) {
        uVar34 = uVar32;
        if (uVar32 < (ulonglong)plVar4[2] >> 1) {
LAB_1433727b2:
          FUN_143333390(plVar4,plVar4,uVar34);
        }
      }
      else if ((ulonglong)plVar4[2] < uVar32) {
        uVar34 = (uVar32 >> 2) + uVar32;
        goto LAB_1433727b2;
      }
      plVar4[1] = uVar32;
      *(undefined1 *)(*plVar4 + -1 + uVar32) = 6;
      *(undefined4 *)(lVar33 + 0x58) = 5;
      lVar33 = *(longlong *)(param_1 + 0x60);
      plVar4 = *(longlong **)(lVar33 + 0xf8);
      uVar32 = plVar4[1] + 1;
      if (uVar32 < (ulonglong)plVar4[1]) {
        uVar34 = uVar32;
        if (uVar32 < (ulonglong)plVar4[2] >> 1) {
LAB_14337280a:
          FUN_143333390(plVar4,plVar4,uVar34);
        }
      }
      else if ((ulonglong)plVar4[2] < uVar32) {
        uVar34 = (uVar32 >> 2) + uVar32;
        goto LAB_14337280a;
      }
      plVar4[1] = uVar32;
      *(undefined1 *)(*plVar4 + -1 + uVar32) = 6;
      *(undefined4 *)(lVar33 + 0xc0) = 5;
      iVar27 = (**(code **)(*plVar2 + 0x40))(plVar2,&local_160,&local_1d0,local_100);
      if (iVar27 == 0) {
        lVar33 = *(longlong *)(param_1 + 0x60);
        iVar27 = *(int *)(lVar33 + 0x58);
        if ((iVar27 != 6) && (iVar27 != 0)) {
          if (iVar27 != 5) {
            plVar1 = *(longlong **)(lVar33 + 0x90);
            uVar32 = plVar1[1] + 1;
            if (uVar32 < (ulonglong)plVar1[1]) {
              uVar34 = uVar32;
              if (uVar32 < (ulonglong)plVar1[2] >> 1) {
LAB_143372d70:
                FUN_143333390(plVar1,plVar1,uVar34);
              }
            }
            else if ((ulonglong)plVar1[2] < uVar32) {
              uVar34 = (uVar32 >> 2) + uVar32;
              goto LAB_143372d70;
            }
            plVar1[1] = uVar32;
            *(undefined1 *)(*plVar1 + -1 + uVar32) = 6;
            *(undefined4 *)(lVar33 + 0x58) = 5;
          }
          plVar1 = *(longlong **)(lVar33 + 0x90);
          uVar32 = plVar1[1] + 1;
          if (uVar32 < (ulonglong)plVar1[1]) {
            uVar34 = uVar32;
            if (uVar32 < (ulonglong)plVar1[2] >> 1) {
LAB_143372dc4:
              FUN_143333390(plVar1,plVar1,uVar34);
            }
          }
          else if ((ulonglong)plVar1[2] < uVar32) {
            uVar34 = (uVar32 >> 2) + uVar32;
            goto LAB_143372dc4;
          }
          plVar1[1] = uVar32;
          *(undefined1 *)(*plVar1 + -1 + uVar32) = 7;
          *(undefined4 *)(lVar33 + 0x58) = 6;
        }
        lVar33 = *(longlong *)(param_1 + 0x60);
        iVar27 = *(int *)(lVar33 + 0xc0);
        if (iVar27 == 6) {
          return;
        }
        if (iVar27 == 0) {
          return;
        }
        if (iVar27 != 5) {
          plVar1 = *(longlong **)(lVar33 + 0xf8);
          uVar32 = plVar1[1] + 1;
          if (uVar32 < (ulonglong)plVar1[1]) {
            uVar34 = uVar32;
            if (uVar32 < (ulonglong)plVar1[2] >> 1) {
LAB_143372e38:
              FUN_143333390(plVar1,plVar1,uVar34);
            }
          }
          else if ((ulonglong)plVar1[2] < uVar32) {
            uVar34 = (uVar32 >> 2) + uVar32;
            goto LAB_143372e38;
          }
          plVar1[1] = uVar32;
          *(undefined1 *)(*plVar1 + -1 + uVar32) = 6;
          *(undefined4 *)(lVar33 + 0xc0) = 5;
        }
        plVar1 = *(longlong **)(lVar33 + 0xf8);
        uVar32 = plVar1[1] + 1;
        if (uVar32 < (ulonglong)plVar1[1]) {
          uVar34 = uVar32;
          if (uVar32 < (ulonglong)plVar1[2] >> 1) {
LAB_143372e8e:
            FUN_143333390(plVar1,plVar1,uVar34);
          }
        }
        else if ((ulonglong)plVar1[2] < uVar32) {
          uVar34 = (uVar32 >> 2) + uVar32;
          goto LAB_143372e8e;
        }
        plVar1[1] = uVar32;
        *(undefined1 *)(*plVar1 + -1 + uVar32) = 7;
        goto LAB_143373032;
      }
      FUN_14337b8c0(*(longlong *)(param_1 + 0x60) + 0x48,local_1f8,local_1f4,local_1f0);
      FUN_14337b8c0(*(longlong *)(param_1 + 0x60) + 0xb0,local_1f8,local_1f4,local_1f0);
      FUN_14337ae70(*(longlong *)(param_1 + 0x60) + 0x48,fVar37,fVar38);
      FUN_14337ae70(*(longlong *)(param_1 + 0x60) + 0xb0,local_1d0,local_1cc);
      fVar39 = local_1d0;
      fVar40 = local_1cc;
      goto LAB_143372590;
    }
    lVar33 = *(longlong *)(param_1 + 0x60);
    if (iVar30 != 0) {
      plVar4 = *(longlong **)(lVar33 + 0x90);
      lVar3 = plVar4[1];
      uVar32 = lVar3 + 1;
      local_160 = uVar13;
      uStack_15c = uVar14;
      uStack_158 = uVar15;
      uStack_154 = uVar16;
      uStack_150 = uVar17;
      uStack_14c = uVar18;
      uStack_148 = uVar19;
      uStack_144 = uVar20;
      uStack_140 = uVar21;
      uStack_13c = uVar22;
      uStack_138 = uVar23;
      local_134 = uVar24;
      _local_130 = uVar25;
      if (uVar32 < (ulonglong)plVar4[1]) {
        uVar34 = uVar32;
        if (uVar32 < (ulonglong)plVar4[2] >> 1) {
LAB_14337264a:
          FUN_143333390(plVar4,plVar4,uVar34);
        }
      }
      else if ((ulonglong)plVar4[2] < uVar32) {
        uVar34 = (uVar32 >> 2) + uVar32;
        goto LAB_14337264a;
      }
      plVar4[1] = uVar32;
      *(undefined1 *)(lVar3 + *plVar4) = 6;
      *(undefined4 *)(lVar33 + 0x58) = 5;
      lVar33 = *(longlong *)(param_1 + 0x60);
      plVar4 = *(longlong **)(lVar33 + 0xf8);
      uVar32 = plVar4[1] + 1;
      if (uVar32 < (ulonglong)plVar4[1]) {
        uVar34 = uVar32;
        if (uVar32 < (ulonglong)plVar4[2] >> 1) {
LAB_1433726a2:
          FUN_143333390(plVar4,plVar4,uVar34);
        }
      }
      else if ((ulonglong)plVar4[2] < uVar32) {
        uVar34 = (uVar32 >> 2) + uVar32;
        goto LAB_1433726a2;
      }
      plVar4[1] = uVar32;
      *(undefined1 *)(*plVar4 + -1 + uVar32) = 6;
      *(undefined4 *)(lVar33 + 0xc0) = 5;
      iVar27 = (**(code **)(*plVar1 + 0x40))(plVar1,&local_198,&local_1e8,&local_1f8);
      if (iVar27 == 0) {
        lVar33 = *(longlong *)(param_1 + 0x60);
        iVar27 = *(int *)(lVar33 + 0x58);
        if ((iVar27 != 6) && (iVar27 != 0)) {
          if (iVar27 != 5) {
            plVar1 = *(longlong **)(lVar33 + 0x90);
            lVar3 = plVar1[1];
            uVar32 = lVar3 + 1;
            if (uVar32 < (ulonglong)plVar1[1]) {
              uVar34 = uVar32;
              if (uVar32 < (ulonglong)plVar1[2] >> 1) {
LAB_143372be3:
                FUN_143333390(plVar1,plVar1,uVar34);
              }
            }
            else if ((ulonglong)plVar1[2] < uVar32) {
              uVar34 = (uVar32 >> 2) + uVar32;
              goto LAB_143372be3;
            }
            plVar1[1] = uVar32;
            *(undefined1 *)(lVar3 + *plVar1) = 6;
            *(undefined4 *)(lVar33 + 0x58) = 5;
          }
          plVar1 = *(longlong **)(lVar33 + 0x90);
          lVar3 = plVar1[1];
          uVar32 = lVar3 + 1;
          if (uVar32 < (ulonglong)plVar1[1]) {
            uVar34 = uVar32;
            if (uVar32 < (ulonglong)plVar1[2] >> 1) {
LAB_143372c37:
              FUN_143333390(plVar1,plVar1,uVar34);
            }
          }
          else if ((ulonglong)plVar1[2] < uVar32) {
            uVar34 = (uVar32 >> 2) + uVar32;
            goto LAB_143372c37;
          }
          plVar1[1] = uVar32;
          *(undefined1 *)(lVar3 + *plVar1) = 7;
          *(undefined4 *)(lVar33 + 0x58) = 6;
        }
        lVar33 = *(longlong *)(param_1 + 0x60);
        iVar27 = *(int *)(lVar33 + 0xc0);
        if (iVar27 == 6) {
          return;
        }
        if (iVar27 == 0) {
          return;
        }
        if (iVar27 != 5) {
          plVar1 = *(longlong **)(lVar33 + 0xf8);
          lVar3 = plVar1[1];
          uVar32 = lVar3 + 1;
          if (uVar32 < (ulonglong)plVar1[1]) {
            uVar34 = uVar32;
            if (uVar32 < (ulonglong)plVar1[2] >> 1) {
LAB_143372cab:
              FUN_143333390(plVar1,plVar1,uVar34);
            }
          }
          else if ((ulonglong)plVar1[2] < uVar32) {
            uVar34 = (uVar32 >> 2) + uVar32;
            goto LAB_143372cab;
          }
          plVar1[1] = uVar32;
          *(undefined1 *)(lVar3 + *plVar1) = 6;
          *(undefined4 *)(lVar33 + 0xc0) = 5;
        }
        plVar1 = *(longlong **)(lVar33 + 0xf8);
        lVar3 = plVar1[1];
        uVar32 = lVar3 + 1;
        if (uVar32 < (ulonglong)plVar1[1]) {
          uVar34 = uVar32;
          if (uVar32 < (ulonglong)plVar1[2] >> 1) {
LAB_143372d01:
            FUN_143333390(plVar1,plVar1,uVar34);
          }
        }
        else if ((ulonglong)plVar1[2] < uVar32) {
          uVar34 = (uVar32 >> 2) + uVar32;
          goto LAB_143372d01;
        }
        plVar1[1] = uVar32;
        *(undefined1 *)(lVar3 + *plVar1) = 7;
        goto LAB_143373032;
      }
      FUN_14337b8c0(*(longlong *)(param_1 + 0x60) + 0x48,local_1f8,local_1f4,local_1f0);
      FUN_14337b8c0(*(longlong *)(param_1 + 0x60) + 0xb0,local_1f8,local_1f4,local_1f0);
      FUN_14337ae70(*(longlong *)(param_1 + 0x60) + 0x48,local_1e8,local_1e4);
      FUN_14337ae70(*(longlong *)(param_1 + 0x60) + 0xb0,fVar39,fVar40);
      fVar37 = local_1e8;
      fVar38 = local_1e4;
      goto LAB_143372590;
    }
    plVar4 = *(longlong **)(lVar33 + 0x90);
    lVar3 = plVar4[1];
    uVar32 = lVar3 + 1;
    if (uVar32 < (ulonglong)plVar4[1]) {
      uVar34 = uVar32;
      if (uVar32 < (ulonglong)plVar4[2] >> 1) {
LAB_143372b11:
        FUN_143333390(plVar4,plVar4,uVar34);
      }
    }
    else if ((ulonglong)plVar4[2] < uVar32) {
      uVar34 = (uVar32 >> 2) + uVar32;
      goto LAB_143372b11;
    }
    plVar4[1] = uVar32;
    *(undefined1 *)(lVar3 + *plVar4) = 6;
    *(undefined4 *)(lVar33 + 0x58) = 5;
    lVar33 = *(longlong *)(param_1 + 0x60);
    plVar4 = *(longlong **)(lVar33 + 0xf8);
    uVar32 = plVar4[1] + 1;
    if (uVar32 < (ulonglong)plVar4[1]) {
      uVar34 = uVar32;
      if (uVar32 < (ulonglong)plVar4[2] >> 1) {
LAB_143372b69:
        FUN_143333390(plVar4,plVar4,uVar34);
      }
    }
    else if ((ulonglong)plVar4[2] < uVar32) {
      uVar34 = (uVar32 >> 2) + uVar32;
      goto LAB_143372b69;
    }
    plVar4[1] = uVar32;
    *(undefined1 *)(*plVar4 + -1 + uVar32) = 6;
    *(undefined4 *)(lVar33 + 0xc0) = 5;
  }
  lVar33 = *(longlong *)(param_1 + 0x60);
  iVar27 = *(int *)(lVar33 + 0x58);
  if ((iVar27 != 6) && (iVar27 != 0)) {
    if (iVar27 != 5) {
      plVar1 = *(longlong **)(lVar33 + 0x90);
      uVar32 = plVar1[1] + 1;
      if (uVar32 < (ulonglong)plVar1[1]) {
        uVar34 = uVar32;
        if (uVar32 < (ulonglong)plVar1[2] >> 1) {
LAB_143372efd:
          FUN_143333390(plVar1,plVar1,uVar34);
        }
      }
      else if ((ulonglong)plVar1[2] < uVar32) {
        uVar34 = (uVar32 >> 2) + uVar32;
        goto LAB_143372efd;
      }
      plVar1[1] = uVar32;
      *(undefined1 *)(*plVar1 + -1 + uVar32) = 6;
      *(undefined4 *)(lVar33 + 0x58) = 5;
    }
    plVar1 = *(longlong **)(lVar33 + 0x90);
    uVar34 = plVar1[1];
    uVar32 = uVar34 + 1;
    if (uVar32 < uVar34) {
      uVar35 = uVar32;
      if (uVar32 < (ulonglong)plVar1[2] >> 1) {
LAB_143372f51:
        FUN_143333390(plVar1,plVar1,uVar35);
      }
    }
    else if ((ulonglong)plVar1[2] < uVar32) {
      uVar35 = (uVar32 >> 2) + uVar32;
      goto LAB_143372f51;
    }
    plVar1[1] = uVar32;
    *(undefined1 *)(uVar34 + *plVar1) = 7;
    *(undefined4 *)(lVar33 + 0x58) = 6;
  }
  lVar33 = *(longlong *)(param_1 + 0x60);
  iVar27 = *(int *)(lVar33 + 0xc0);
  if (iVar27 == 6) {
    return;
  }
  if (iVar27 == 0) {
    return;
  }
  if (iVar27 != 5) {
    plVar1 = *(longlong **)(lVar33 + 0xf8);
    uVar34 = plVar1[1];
    uVar32 = uVar34 + 1;
    if (uVar32 < uVar34) {
      uVar35 = uVar32;
      if (uVar32 < (ulonglong)plVar1[2] >> 1) {
LAB_143372fc5:
        FUN_143333390(plVar1,plVar1,uVar35);
      }
    }
    else if ((ulonglong)plVar1[2] < uVar32) {
      uVar35 = (uVar32 >> 2) + uVar32;
      goto LAB_143372fc5;
    }
    plVar1[1] = uVar32;
    *(undefined1 *)(uVar34 + *plVar1) = 6;
    *(undefined4 *)(lVar33 + 0xc0) = 5;
  }
  plVar1 = *(longlong **)(lVar33 + 0xf8);
  uVar34 = plVar1[1];
  uVar32 = uVar34 + 1;
  if (uVar32 < uVar34) {
    uVar35 = uVar32;
    if ((ulonglong)plVar1[2] >> 1 <= uVar32) goto LAB_143373026;
  }
  else {
    if (uVar32 <= (ulonglong)plVar1[2]) goto LAB_143373026;
    uVar35 = (uVar32 >> 2) + uVar32;
  }
  FUN_143333390(plVar1,plVar1,uVar35);
LAB_143373026:
  plVar1[1] = uVar32;
  *(undefined1 *)(uVar34 + *plVar1) = 7;
LAB_143373032:
  *(undefined4 *)(lVar33 + 0xc0) = 6;
  return;
}



// FUNCTION 1433730a0 FUN_1433730a0 body=985 status=ok
// SIG undefined FUN_1433730a0(void)

void FUN_1433730a0(longlong param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  bool bVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined4 local_res8 [2];
  int local_3f8;
  int local_3f4;
  int local_3f0;
  undefined4 local_3e8;
  undefined4 local_3e4;
  uint local_3d4;
  undefined4 local_3c8;
  undefined8 local_3c4;
  undefined8 uStack_3bc;
  undefined8 local_3b4;
  undefined8 local_3ac;
  undefined8 local_3a4;
  undefined4 local_39c;
  undefined4 local_398;
  undefined1 local_394;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined1 local_368 [32];
  longlong *local_348;
  ulonglong local_340;
  undefined8 local_338;
  undefined1 local_330 [768];
  undefined1 *local_30;
  
  if (*(longlong *)(param_1 + 0x60) == 0) {
    plVar12 = *(longlong **)(param_1 + 0x58);
  }
  else {
    plVar12 = (longlong *)(*(longlong *)(param_1 + 0x60) + 0x48);
  }
  uVar6 = (**(code **)(*plVar12 + 0x30))(plVar12);
  uVar13 = 0;
  local_338 = 0x20;
  local_348 = DAT_146b62f28;
  local_3c4 = 0;
  uStack_3bc = 0;
  local_30 = local_330;
  local_3b4 = 0;
  local_398 = 0x3f800000;
  local_3ac = 0;
  bVar4 = true;
  local_3a4 = 0;
  local_39c = 0;
  local_394 = 0;
  local_340 = 0;
  *(undefined1 *)(param_1 + 0x81) = 0;
  local_3c8 = uVar6;
  iVar7 = (**(code **)(*plVar12 + 0x40))(plVar12,&local_3c8,local_368,&local_3f8);
  uVar11 = uVar13;
  uVar3 = local_3e4;
  while (local_3e4 = uVar6, iVar7 != 0) {
    if ((iVar7 == 2) && (!bVar4)) {
      uVar11 = (ulonglong)((int)uVar11 + 1);
    }
    uVar14 = 0;
    local_3e8 = (undefined4)uVar11;
    iVar7 = (**(code **)(*plVar12 + 0x48))(plVar12,&local_3c8,&local_388);
    uVar15 = uVar13;
    while (iVar7 != 0) {
      uVar14 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar14;
      iVar7 = (**(code **)(*plVar12 + 0x48))(plVar12,&local_3c8,&local_388);
    }
    local_3d4 = uVar14;
    if ((uVar14 != 0) && (((local_3f8 != 0 || (local_3f4 != 0)) || (local_3f0 != 0)))) {
      FUN_14337b080(&local_348,&local_3e8);
      bVar4 = false;
    }
    uVar6 = local_3c8;
    iVar7 = (**(code **)(*plVar12 + 0x40))(plVar12,&local_3c8,local_368,&local_3f8);
    uVar3 = local_3e4;
  }
  local_3e4 = uVar3;
  if (((*(longlong *)(param_1 + 0x30) != 0) &&
      ((*(ulonglong *)(param_1 + 0x38) & 0xfffffffffffffffe) != 0)) &&
     (*(ulonglong *)(param_1 + 0x38) != 0)) {
    if (*(longlong *)(param_1 + 0x28) != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (((*(longlong *)(param_1 + 0x48) != 0) &&
      ((*(ulonglong *)(param_1 + 0x50) & 0xfffffffffffffffe) != 0)) &&
     (*(ulonglong *)(param_1 + 0x50) != 0)) {
    if (*(longlong *)(param_1 + 0x40) != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  puVar8 = local_30;
  uVar11 = uVar13;
  uVar15 = uVar13;
  uVar17 = uVar13;
  uVar18 = local_340;
  uVar19 = uVar13;
  if (local_340 != 0) {
    do {
      if ((int)uVar11 != *(int *)(puVar8 + uVar19)) {
        FUN_1433737e0(param_1,&local_348,uVar17,uVar15);
        uVar11 = (ulonglong)*(uint *)(local_30 + uVar19);
        puVar8 = local_30;
        uVar17 = uVar15;
        uVar18 = local_340;
      }
      uVar15 = uVar15 + 1;
      uVar19 = uVar19 + 0x18;
    } while (uVar15 < uVar18);
  }
  FUN_1433737e0(param_1,&local_348,uVar17);
  local_388 = 0x3f800000;
  uStack_384 = 0;
  uStack_380 = 0;
  uStack_37c = 0;
  local_378 = 0;
  uStack_374 = 0x3f800000;
  uStack_370 = 0;
  uStack_36c = 0;
  puVar9 = (undefined4 *)
           (**(code **)(*(longlong *)(param_1 + 0x10) + 0x30))
                     ((longlong *)(param_1 + 0x10),&local_3e8,&local_388);
  fVar1 = (float)puVar9[2];
  fVar2 = (float)puVar9[3];
  uVar3 = *puVar9;
  *(undefined4 *)(param_1 + 0x74) = puVar9[1];
  *(float *)(param_1 + 0x78) = fVar1;
  *(float *)(param_1 + 0x7c) = fVar2;
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  if ((fVar1 <= *(float *)(param_1 + 0x70)) || (fVar2 <= *(float *)(param_1 + 0x74))) {
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  cVar5 = FUN_143373c20(param_1);
  if (cVar5 == '\0') {
    uVar11 = uVar13;
    if (*(longlong *)(param_1 + 0x30) != 0) {
      do {
        lVar16 = *(longlong *)(param_1 + 0x28) + uVar11;
        if ((*(int *)(lVar16 + 0xc) == 0) && (cVar5 = FUN_143373cf0(param_1,lVar16), cVar5 != '\0'))
        {
          *(undefined4 *)(lVar16 + 0x10) = 1;
        }
        uVar13 = uVar13 + 1;
        uVar11 = uVar11 + 0x14;
      } while (uVar13 < *(ulonglong *)(param_1 + 0x30));
    }
  }
  else {
    if (*(ulonglong *)(param_1 + 0x30) < 2) {
      if (*(longlong *)(param_1 + 0x38) == 0) {
        FUN_14337b4d0(param_1 + 0x28,param_1 + 0x28,1);
      }
    }
    else if ((2 < (*(ulonglong *)(param_1 + 0x38) & 0xfffffffffffffffe)) &&
            (*(ulonglong *)(param_1 + 0x38) != 1)) {
      if (*(longlong *)(param_1 + 0x28) == 0) {
        local_res8[0] = 2;
        uVar10 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1 + 0x28,0x50,local_res8);
        *(undefined8 *)(param_1 + 0x28) = uVar10;
        *(undefined8 *)(param_1 + 0x38) = 4;
      }
      else {
        uVar10 = (**(code **)(*DAT_146b62f28 + 0x58))();
        *(undefined8 *)(param_1 + 0x28) = uVar10;
        *(undefined8 *)(param_1 + 0x38) = 4;
      }
    }
    *(undefined8 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x10) = 2;
  }
  if (local_30 != local_330) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  return;
}



// FUNCTION 143373480 FUN_143373480 body=851 status=ok
// SIG undefined FUN_143373480(void)

void FUN_143373480(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
                  longlong param_5)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_58 [8];
  RefCountImpl *local_50;
  undefined8 local_48;
  undefined4 *local_40;
  longlong *local_38;
  
  local_40 = (undefined4 *)((longlong)&local_48 + 4);
  local_38 = DAT_146b62f28;
  *(undefined4 *)(param_5 + 4) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_5 + 8) = 0;
  local_48 = 0x20;
  if (param_3 < param_4) {
    lVar8 = param_3 * 0x18;
    lVar7 = param_4 - param_3;
    do {
      uVar3 = *(uint *)(lVar8 + 8 + *(longlong *)(param_2 + 0x318));
      if (uVar3 != *(uint *)(lVar8 + 0xc + *(longlong *)(param_2 + 0x318))) {
        local_50 = (RefCountImpl *)0x0;
        if (uVar3 != 0) {
          (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))
                    (*(longlong **)(param_1 + 0x58),uVar3,local_58);
          uVar4 = 0;
          if (local_50 != (RefCountImpl *)0x0) {
            uVar4 = (ulonglong)uVar3;
          }
          uVar3 = (uint)uVar4;
          if (((uint)local_48 <= uVar3) || ((1 << ((byte)uVar4 & 0x1f) & local_40[uVar4 >> 5]) == 0)
             ) {
            uVar2 = *(longlong *)(param_1 + 0x48) + 1;
            if (uVar2 < *(ulonglong *)(param_1 + 0x48)) {
              uVar6 = uVar2;
              if (uVar2 < *(ulonglong *)(param_1 + 0x50) >> 1) {
LAB_143373584:
                FUN_143333430(param_1 + 0x40,param_1 + 0x40,uVar6);
              }
            }
            else if (*(ulonglong *)(param_1 + 0x50) < uVar2) {
              uVar6 = (uVar2 >> 2) + uVar2;
              goto LAB_143373584;
            }
            *(ulonglong *)(param_1 + 0x48) = uVar2;
            *(uint *)(*(longlong *)(param_1 + 0x40) + -4 + uVar2 * 4) = uVar3;
            *(int *)(param_5 + 8) = *(int *)(param_5 + 8) + 1;
            if ((uint)local_48 <= uVar3) {
              uVar5 = (uint)local_48 + 0x1f >> 5;
              uVar1 = uVar3 + 0x20 >> 5;
              uVar3 = uVar5 * 2;
              if (uVar5 * 2 <= uVar1) {
                uVar3 = uVar1;
              }
              if (uVar5 < uVar3) {
                if (local_40 == (undefined4 *)((longlong)&local_48 + 4)) {
                  local_40 = (undefined4 *)
                             (**(code **)(*local_38 + 0x50))(local_38,(ulonglong)uVar3 << 2,0);
                  *local_40 = local_48._4_4_;
                }
                else {
                  local_40 = (undefined4 *)
                             (**(code **)(*local_38 + 0x58))
                                       (local_38,local_40,(ulonglong)uVar3 << 2);
                }
                _guard_xfg_dispatch_icall_nop(local_40 + uVar5,0,(ulonglong)(uVar3 - uVar5) << 2);
                local_48 = CONCAT44(local_48._4_4_,uVar3 << 5);
              }
            }
            local_40[uVar4 >> 5] = local_40[uVar4 >> 5] | 1 << ((byte)uVar4 & 0x1f);
          }
        }
        uVar3 = *(uint *)(lVar8 + 0xc + *(longlong *)(param_2 + 0x318));
        if (uVar3 != 0) {
          (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))
                    (*(longlong **)(param_1 + 0x58),uVar3,local_58);
          uVar4 = 0;
          if (local_50 != (RefCountImpl *)0x0) {
            uVar4 = (ulonglong)uVar3;
          }
          uVar3 = (uint)uVar4;
          if (((uint)local_48 <= uVar3) || ((1 << ((byte)uVar4 & 0x1f) & local_40[uVar4 >> 5]) == 0)
             ) {
            uVar2 = *(longlong *)(param_1 + 0x48) + 1;
            if (uVar2 < *(ulonglong *)(param_1 + 0x48)) {
              uVar6 = uVar2;
              if (uVar2 < *(ulonglong *)(param_1 + 0x50) >> 1) {
LAB_1433736c1:
                FUN_143333430(param_1 + 0x40,param_1 + 0x40,uVar6);
              }
            }
            else if (*(ulonglong *)(param_1 + 0x50) < uVar2) {
              uVar6 = (uVar2 >> 2) + uVar2;
              goto LAB_1433736c1;
            }
            *(ulonglong *)(param_1 + 0x48) = uVar2;
            *(uint *)(*(longlong *)(param_1 + 0x40) + -4 + uVar2 * 4) = uVar3;
            *(int *)(param_5 + 8) = *(int *)(param_5 + 8) + 1;
            if ((uint)local_48 <= uVar3) {
              uVar5 = (uint)local_48 + 0x1f >> 5;
              uVar1 = uVar3 + 0x20 >> 5;
              uVar3 = uVar5 * 2;
              if (uVar5 * 2 <= uVar1) {
                uVar3 = uVar1;
              }
              if (uVar5 < uVar3) {
                if (local_40 == (undefined4 *)((longlong)&local_48 + 4)) {
                  local_40 = (undefined4 *)
                             (**(code **)(*local_38 + 0x50))(local_38,(ulonglong)uVar3 << 2,0);
                  *local_40 = local_48._4_4_;
                }
                else {
                  local_40 = (undefined4 *)
                             (**(code **)(*local_38 + 0x58))
                                       (local_38,local_40,(ulonglong)uVar3 << 2);
                }
                _guard_xfg_dispatch_icall_nop(local_40 + uVar5,0,(ulonglong)(uVar3 - uVar5) << 2);
                local_48 = CONCAT44(local_48._4_4_,uVar3 << 5);
              }
            }
            local_40[uVar4 >> 5] = local_40[uVar4 >> 5] | 1 << ((byte)uVar4 & 0x1f);
          }
        }
        if (local_50 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(local_50);
        }
      }
      lVar8 = lVar8 + 0x18;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    if (local_40 != (undefined4 *)((longlong)&local_48 + 4)) {
      (**(code **)(*local_38 + 0x60))();
    }
  }
  return;
}



// FUNCTION 1433737e0 FUN_1433737e0 body=1079 status=ok
// SIG undefined FUN_1433737e0(void)

/* WARNING: Removing unreachable block (ram,0x00014337392c) */

void FUN_1433737e0(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint *puVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  undefined8 local_68;
  uint *local_60;
  longlong *local_58;
  
  if (param_3 < param_4) {
    puVar6 = (uint *)((longlong)&local_68 + 4);
    local_60 = puVar6;
    lVar14 = param_3 * 0x18;
    uVar9 = 0x20;
    local_68 = 0x20;
    local_58 = DAT_146b62f28;
    uVar2 = *(undefined4 *)(*(longlong *)(param_2 + 0x318) + 4 + lVar14);
    plVar12 = DAT_146b62f28;
    if (param_3 < param_4) {
      lVar13 = param_4 - param_3;
      lVar15 = lVar14;
      do {
        if ((*(int *)(*(longlong *)(param_2 + 0x318) + 8 + lVar15) !=
             *(int *)(*(longlong *)(param_2 + 0x318) + 0xc + lVar15)) &&
           ((uVar9 == 0 || ((*puVar6 & 1) == 0)))) {
          FUN_143373480(param_1,param_2,param_3,param_4,&local_80);
          plVar12 = (longlong *)(param_1 + 0x28);
          uStack_74 = 0;
          uVar7 = *(longlong *)(param_1 + 0x30) + 1;
          if (uVar7 < *(ulonglong *)(param_1 + 0x30)) {
            uVar11 = uVar7;
            local_80 = uVar2;
            if (uVar7 < *(ulonglong *)(param_1 + 0x38) >> 1) {
LAB_1433738ec:
              local_80 = uVar2;
              FUN_14337b4d0(plVar12,plVar12,uVar11);
            }
          }
          else {
            local_80 = uVar2;
            if (*(ulonglong *)(param_1 + 0x38) < uVar7) {
              uVar11 = (uVar7 >> 2) + uVar7;
              goto LAB_1433738ec;
            }
          }
          lVar4 = *plVar12;
          *(ulonglong *)(param_1 + 0x30) = uVar7;
          puVar1 = (undefined4 *)(lVar4 + -0x14 + uVar7 * 0x14);
          *puVar1 = local_80;
          puVar1[1] = uStack_7c;
          puVar1[2] = uStack_78;
          puVar1[3] = (undefined4)uStack_74;
          *(undefined4 *)(lVar4 + -4 + uVar7 * 0x14) = 0;
          if ((uint)local_68 == 0) {
            if (local_60 == (uint *)((longlong)&local_68 + 4)) {
              local_60 = (uint *)(**(code **)(*local_58 + 0x50))(local_58,4,0);
              *local_60 = local_68._4_4_;
            }
            else {
              local_60 = (uint *)(**(code **)(*local_58 + 0x58))(local_58,local_60,4);
            }
            _guard_xfg_dispatch_icall_nop(local_60,0,4);
            local_68 = CONCAT44(local_68._4_4_,0x20);
          }
          *local_60 = *local_60 | 1;
          puVar6 = local_60;
          plVar12 = local_58;
          uVar9 = (uint)local_68;
        }
        uVar3 = *(uint *)(lVar15 + 0x10 + *(longlong *)(param_2 + 0x318));
        if (uVar3 != 0) {
          if (uVar9 <= uVar3) {
            uVar8 = uVar9 + 0x1f >> 5;
            uVar5 = uVar3 + 0x20 >> 5;
            uVar9 = uVar8 * 2;
            if (uVar8 * 2 <= uVar5) {
              uVar9 = uVar5;
            }
            if (uVar8 < uVar9) {
              if (puVar6 == (uint *)((longlong)&local_68 + 4)) {
                local_60 = (uint *)(**(code **)(*plVar12 + 0x50))(plVar12,(ulonglong)uVar9 << 2,0);
                *local_60 = local_68._4_4_;
              }
              else {
                local_60 = (uint *)(**(code **)(*plVar12 + 0x58))
                                             (plVar12,puVar6,(ulonglong)uVar9 << 2);
              }
              _guard_xfg_dispatch_icall_nop(local_60 + uVar8,0,(ulonglong)(uVar9 - uVar8) << 2);
              local_68 = CONCAT44(local_68._4_4_,uVar9 << 5);
              puVar6 = local_60;
            }
          }
          puVar6[uVar3 >> 5] = puVar6[uVar3 >> 5] | 1 << ((byte)uVar3 & 0x1f);
          puVar6 = local_60;
          plVar12 = local_58;
          uVar9 = (uint)local_68;
        }
        lVar15 = lVar15 + 0x18;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      if (param_3 < param_4) {
        lVar15 = param_4 - param_3;
        do {
          uVar3 = *(uint *)(*(longlong *)(param_2 + 0x318) + 0x10 + lVar14);
          if ((uVar3 != 0) && (uVar3 < uVar9)) {
            uVar5 = 1 << ((byte)uVar3 & 0x1f);
            if ((puVar6[uVar3 >> 5] & uVar5) != 0) {
              plVar12 = (longlong *)(param_1 + 0x28);
              uVar7 = *(longlong *)(param_1 + 0x30) + 1;
              uStack_78 = 1;
              uStack_7c = 0;
              uStack_74 = CONCAT44(uStack_74._4_4_,uVar3);
              if (uVar7 < *(ulonglong *)(param_1 + 0x30)) {
                uVar11 = uVar7;
                local_80 = uVar2;
                if (uVar7 < *(ulonglong *)(param_1 + 0x38) >> 1) {
LAB_143373b0c:
                  local_80 = uVar2;
                  FUN_14337b4d0(plVar12,plVar12,uVar11);
                }
              }
              else {
                local_80 = uVar2;
                if (*(ulonglong *)(param_1 + 0x38) < uVar7) {
                  uVar11 = (uVar7 >> 2) + uVar7;
                  goto LAB_143373b0c;
                }
              }
              lVar13 = *plVar12;
              *(ulonglong *)(param_1 + 0x30) = uVar7;
              puVar1 = (undefined4 *)(lVar13 + -0x14 + uVar7 * 0x14);
              *puVar1 = local_80;
              puVar1[1] = uStack_7c;
              puVar1[2] = uStack_78;
              puVar1[3] = (undefined4)uStack_74;
              *(undefined4 *)(lVar13 + -4 + uVar7 * 0x14) = 0;
              if ((uint)local_68 <= uVar3) {
                uVar10 = (uint)local_68 + 0x1f >> 5;
                uVar8 = uVar3 + 0x20 >> 5;
                uVar9 = uVar10 * 2;
                if (uVar10 * 2 <= uVar8) {
                  uVar9 = uVar8;
                }
                if (uVar10 < uVar9) {
                  if (local_60 == (uint *)((longlong)&local_68 + 4)) {
                    local_60 = (uint *)(**(code **)(*local_58 + 0x50))
                                                 (local_58,(ulonglong)uVar9 << 2,0);
                    *local_60 = local_68._4_4_;
                  }
                  else {
                    local_60 = (uint *)(**(code **)(*local_58 + 0x58))
                                                 (local_58,local_60,(ulonglong)uVar9 << 2);
                  }
                  _guard_xfg_dispatch_icall_nop
                            (local_60 + uVar10,0,(ulonglong)(uVar9 - uVar10) << 2);
                  local_68 = CONCAT44(local_68._4_4_,uVar9 << 5);
                }
              }
              local_60[uVar3 >> 5] = local_60[uVar3 >> 5] & ~uVar5;
              *(undefined1 *)(param_1 + 0x81) = 1;
              puVar6 = local_60;
              plVar12 = local_58;
              uVar9 = (uint)local_68;
            }
          }
          lVar14 = lVar14 + 0x18;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
    }
    if (puVar6 != (uint *)((longlong)&local_68 + 4)) {
      (**(code **)(*plVar12 + 0x60))(plVar12);
    }
  }
  return;
}



// FUNCTION 143373c20 FUN_143373c20 body=201 status=ok
// SIG undefined FUN_143373c20(void)

undefined8 FUN_143373c20(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 local_18 [8];
  RefCountImpl *local_10;
  
  if (*(longlong *)(param_1 + 0x60) != 0) {
    return 0;
  }
  uVar2 = 0;
  if (((*(longlong *)(param_1 + 0x30) == 9) &&
      (iVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x10))(), iVar1 == 9)) &&
     (iVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x18))(), uVar4 = uVar2, uVar5 = uVar2,
     iVar1 == 0)) {
    do {
      local_10 = (RefCountImpl *)0x0;
      uVar3 = (int)uVar4 + 1;
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))
                (*(longlong **)(param_1 + 0x58),(ulonglong)uVar3,local_18);
      if (local_10 == (RefCountImpl *)0x0) {
        return 0;
      }
      uVar4 = *(ulonglong *)(local_10 + 0x10);
      if ((uVar4 != 0) && ((uVar2 == 0 || (uVar2 == uVar4)))) {
        uVar5 = (ulonglong)((int)uVar5 + 1);
      }
      Scaleform::RefCountImpl::Release(local_10);
      uVar2 = uVar4;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < 9);
    if ((int)uVar5 == 9) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143373cf0 FUN_143373cf0 body=346 status=ok
// SIG undefined FUN_143373cf0(void)

undefined8 FUN_143373cf0(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  RefCountImpl *this;
  int local_78;
  int local_74;
  int local_70;
  undefined1 local_68 [8];
  RefCountImpl *local_60;
  undefined1 local_58 [24];
  undefined4 local_40;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  if (*(longlong *)(param_1 + 0x60) != 0) {
    return 0;
  }
  local_40 = *param_2;
  local_10 = 0x3f800000;
  local_3c = 0;
  local_34 = 0;
  local_2c = 0;
  local_24 = 0;
  local_1c = 0;
  local_14 = 0;
  local_c = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x40))
                    (*(longlong **)(param_1 + 0x58),&local_40,local_58,&local_78);
  if (((iVar2 - 1U < 2) && ((local_78 == 0) != (local_74 == 0))) && (local_70 == 0)) {
    local_60 = (RefCountImpl *)0x0;
    if (local_78 != 0) {
      local_74 = local_78;
    }
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))
              (*(longlong **)(param_1 + 0x58),local_74,local_68);
    this = local_60;
    if (local_60 != (RefCountImpl *)0x0) {
      if (((*(longlong *)(local_60 + 0x10) != 0) &&
          (cVar1 = FUN_14337ad10(local_60 + 0x20,0x358637bd), cVar1 == '\0')) &&
         (this[0x40] == (RefCountImpl)0x1)) {
        (**(code **)(**(longlong **)(param_1 + 0x58) + 0x50))
                  (*(longlong **)(param_1 + 0x58),&local_40);
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x40))
                          (*(longlong **)(param_1 + 0x58),&local_40,local_58,&local_78);
        this = local_60;
        if ((uVar3 & 0xfffffffd) == 0) {
          if (local_60 != (RefCountImpl *)0x0) {
            Scaleform::RefCountImpl::Release(local_60);
          }
          return 1;
        }
      }
      if (this != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(this);
      }
    }
  }
  return 0;
}



// FUNCTION 143373e50 FUN_143373e50 body=102 status=ok
// SIG undefined FUN_143373e50(void)

void FUN_143373e50(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar2 = 0;
  uVar3 = uVar2;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    do {
      lVar4 = *(longlong *)(param_1 + 0x28) + uVar3;
      if ((*(int *)(lVar4 + 0xc) == 0) && (cVar1 = FUN_143373cf0(param_1,lVar4), cVar1 != '\0')) {
        *(undefined4 *)(lVar4 + 0x10) = 1;
      }
      uVar2 = uVar2 + 1;
      uVar3 = uVar3 + 0x14;
    } while (uVar2 < *(ulonglong *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 143373ec0 FUN_143373ec0 body=297 status=ok
// SIG undefined FUN_143373ec0(void)

undefined4 * FUN_143373ec0(longlong param_1,undefined4 *param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  int local_88;
  int local_84;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined1 local_40 [24];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  bVar3 = true;
  local_18 = 0;
  uStack_14 = 0x3f800000;
  uStack_10 = 0;
  uStack_c = 0;
  plVar1 = *(longlong **)(param_1 + 0x58);
  local_78 = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + (param_3 & 0xffffffff) * 0x14);
  local_48 = 0x3f800000;
  local_74 = 0;
  local_6c = 0;
  local_64 = 0;
  local_5c = 0;
  local_54 = 0;
  local_4c = 0;
  local_44 = 0;
  lVar2 = *plVar1;
  *param_2 = 0x7149f2ca;
  param_2[1] = 0x7149f2ca;
  param_2[2] = 0xf149f2ca;
  param_2[3] = 0xf149f2ca;
  local_28 = 0x3f800000;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  iVar4 = (**(code **)(lVar2 + 0x40))(plVar1,&local_78,local_40,&local_88);
  while ((iVar4 != 0 && ((bVar3 || (iVar4 != 2))))) {
    bVar3 = false;
    if ((local_88 == 0) && (local_84 == 0)) {
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x50))
                (*(longlong **)(param_1 + 0x58),&local_78);
    }
    else {
      FUN_14332fd60(*(undefined8 *)(param_1 + 0x58),&local_28,&local_78,local_40,param_2);
    }
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x40))
                      (*(longlong **)(param_1 + 0x58),&local_78,local_40,&local_88);
  }
  return param_2;
}


