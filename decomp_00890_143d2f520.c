// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143d2f520 equal_email body=193 status=ok
// SIG undefined equal_email(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool equal_email(void *param_1,size_t param_2,void *param_3,size_t param_4)

{
  char *pcVar1;
  int iVar2;
  size_t _Size;
  char *pcVar3;
  bool bVar4;
  
  if (param_2 == param_4) {
    _Size = param_2;
    if (param_2 != 0) {
      pcVar3 = (char *)((longlong)param_3 + param_2);
      do {
        pcVar3 = pcVar3 + -1;
        _Size = _Size - 1;
        pcVar1 = pcVar3 + ((longlong)param_1 - (longlong)param_3);
        if (pcVar3[(longlong)param_1 - (longlong)param_3] == '@') {
          pcVar3 = (char *)(_Size + (longlong)param_3);
LAB_143d2f592:
          iVar2 = equal_nocase(pcVar1,param_2 - _Size,pcVar3,param_2 - _Size,0,0x143d2f540);
          if (iVar2 == 0) goto LAB_143d2f5c4;
          break;
        }
        if (*pcVar3 == '@') goto LAB_143d2f592;
      } while (_Size != 0);
    }
    if (_Size == 0) {
      _Size = param_2;
    }
    iVar2 = _guard_xfg_dispatch_icall_nop(param_1,param_3,_Size);
    bVar4 = iVar2 == 0;
  }
  else {
LAB_143d2f5c4:
    bVar4 = false;
  }
  return bVar4;
}



// FUNCTION 143d2f5f0 equal_nocase body=189 status=ok
// SIG undefined equal_nocase(void)

undefined8
equal_nocase(char *param_1,ulonglong param_2,char *param_3,ulonglong param_4,uint param_5)

{
  char cVar1;
  ulonglong uVar2;
  char *pcVar3;
  char cVar4;
  longlong lVar5;
  char cVar6;
  
  uVar2 = param_2;
  pcVar3 = param_1;
  if ((param_5 >> 0xf & 1) != 0) {
    for (; ((param_4 < uVar2 && (*pcVar3 != '\0')) && (((param_5 & 0x10) == 0 || (*pcVar3 != '.'))))
        ; pcVar3 = pcVar3 + 1) {
      uVar2 = uVar2 - 1;
    }
    if (uVar2 == param_4) {
      param_1 = pcVar3;
      param_2 = uVar2;
    }
  }
  if (param_2 != param_4) {
    return 0;
  }
  if (param_2 != 0) {
    lVar5 = (longlong)param_1 - (longlong)param_3;
    do {
      cVar1 = param_3[lVar5];
      cVar4 = *param_3;
      if (cVar1 == '\0') {
        return 0;
      }
      if (cVar1 != cVar4) {
        cVar6 = cVar4 + ' ';
        if (0x19 < (byte)(cVar4 + 0xbfU)) {
          cVar6 = cVar4;
        }
        cVar4 = cVar1 + ' ';
        if (0x19 < (byte)(cVar1 + 0xbfU)) {
          cVar4 = cVar1;
        }
        if (cVar4 != cVar6) {
          return 0;
        }
      }
      param_3 = param_3 + 1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return 1;
}



// FUNCTION 143d2f6b0 equal_wildcard body=717 status=ok
// SIG undefined equal_wildcard(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 equal_wildcard(longlong param_1,char *param_2,char *param_3,char *param_4,uint param_5)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  longlong lVar9;
  undefined8 uVar10;
  
  uVar10 = 0x143d2f6d4;
  if ((param_4 < (char *)0x2) || (*param_3 != '.')) {
    pcVar5 = (char *)0x0;
    uVar4 = 1;
    bVar2 = false;
    pcVar6 = pcVar5;
    pcVar7 = pcVar5;
    pcVar8 = pcVar5;
    iVar3 = 0;
    if (param_2 != (char *)0x0) {
      do {
        cVar1 = pcVar6[param_1];
        if (cVar1 == '*') {
          if ((pcVar6 == param_2 + -1) || (iVar3 = 0, pcVar6[param_1 + 1] == '.')) {
            iVar3 = 1;
          }
          if (((((pcVar8 != (char *)0x0) || (bVar2)) || ((int)pcVar7 != 0)) ||
              (((param_5 & 4) != 0 && (((uVar4 & 1) == 0 || (iVar3 == 0)))))) ||
             (((uVar4 & 1) == 0 && (iVar3 == 0)))) goto LAB_143d2f955;
          uVar4 = uVar4 & 0xfffffffe;
          pcVar8 = pcVar6 + param_1;
        }
        else if ((((byte)(cVar1 + 0x9fU) < 0x1a) || ((byte)(cVar1 + 0xbfU) < 0x1a)) ||
                ((byte)(cVar1 - 0x30U) < 10)) {
          if ((((uVar4 & 1) != 0) && (3 < (ulonglong)((longlong)param_2 - (longlong)pcVar6))) &&
             (iVar3 = _strnicmp(pcVar6 + param_1,"xn--",4), iVar3 == 0)) {
            bVar2 = true;
          }
          uVar4 = 0;
        }
        else if (cVar1 == '.') {
          if (uVar4 != 0) goto LAB_143d2f955;
          uVar4 = 1;
          bVar2 = false;
          pcVar7 = (char *)(ulonglong)((int)pcVar7 + 1);
        }
        else {
          if ((cVar1 != '-') || ((uVar4 & 1) != 0)) goto LAB_143d2f955;
          uVar4 = uVar4 | 4;
        }
        iVar3 = (int)pcVar7;
        pcVar6 = pcVar6 + 1;
      } while (pcVar6 < param_2);
    }
    if (((uVar4 == 0) && (1 < iVar3)) && (pcVar8 != (char *)0x0)) {
      lVar9 = (longlong)pcVar8 - param_1;
      param_2 = param_2 + (param_1 - (longlong)pcVar8) + -1;
      if (param_4 < param_2 + lVar9) {
        return 0;
      }
      iVar3 = equal_nocase(param_1,lVar9,param_3,lVar9,param_5,uVar10);
      if (iVar3 == 0) {
        return 0;
      }
      pcVar7 = param_4 + ((longlong)param_3 - (longlong)param_2);
      pcVar6 = param_3 + lVar9;
      iVar3 = equal_nocase(pcVar7,param_2,pcVar8 + 1,param_2,param_5,uVar10);
      if (iVar3 == 0) {
        return 0;
      }
      if ((lVar9 == 0) && (pcVar8[1] == '.')) {
        if (pcVar6 == pcVar7) {
          return 0;
        }
        if ((param_5 & 8) != 0) {
          pcVar5 = (char *)0x1;
        }
      }
      else {
        pcVar5 = (char *)0x0;
        if (((char *)0x3 < param_4) && (iVar3 = _strnicmp(param_3,"xn--",4), iVar3 == 0)) {
          return 0;
        }
      }
      if ((pcVar7 != pcVar6 + 1) || (*pcVar6 != '*')) {
        for (; pcVar6 != pcVar7; pcVar6 = pcVar6 + 1) {
          cVar1 = *pcVar6;
          if (((0x2d < (byte)(cVar1 - 0x2dU)) ||
              ((0x3ffffff01ff9U >> ((ulonglong)(byte)(cVar1 - 0x2dU) & 0x3f) & 1) == 0)) &&
             (0x19 < (byte)(cVar1 + 0x9fU))) {
            if (pcVar5 == (char *)0x0) {
              return 0;
            }
            if (cVar1 != '.') {
              return 0;
            }
          }
        }
      }
      return 1;
    }
  }
LAB_143d2f955:
  uVar10 = equal_nocase(param_1,param_2,param_3,param_4,param_5,uVar10);
  return uVar10;
}



// FUNCTION 143d2f980 i2s_ASN1_ENUMERATED body=124 status=ok
// SIG undefined i2s_ASN1_ENUMERATED(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong i2s_ASN1_ENUMERATED(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143d2f98c;
  lVar2 = 0;
  if (param_2 == 0) {
    return 0;
  }
  lVar1 = ASN1_ENUMERATED_to_BN(param_2,0);
  if (lVar1 != 0) {
    lVar2 = bignum_to_string(lVar1);
    if (lVar2 != 0) goto LAB_143d2f9e6;
  }
  ERR_put_error(0x22,0x79,0x41,"crypto\\x509v3\\v3_utl.c",0x96,uVar3);
LAB_143d2f9e6:
  BN_free(lVar1);
  return lVar2;
}



// FUNCTION 143d2fa00 i2s_ASN1_INTEGER body=124 status=ok
// SIG undefined i2s_ASN1_INTEGER(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong i2s_ASN1_INTEGER(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143d2fa0c;
  lVar2 = 0;
  if (param_2 == 0) {
    return 0;
  }
  lVar1 = ASN1_INTEGER_to_BN(param_2,0);
  if (lVar1 != 0) {
    lVar2 = bignum_to_string(lVar1);
    if (lVar2 != 0) goto LAB_143d2fa66;
  }
  ERR_put_error(0x22,0x78,0x41,"crypto\\x509v3\\v3_utl.c",0xa4,uVar3);
LAB_143d2fa66:
  BN_free(lVar1);
  return lVar2;
}



// FUNCTION 143d2fa80 ipv4_from_asc body=151 status=ok
// SIG undefined ipv4_from_asc(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ipv4_from_asc(undefined1 *param_1,undefined8 param_2)

{
  int iVar1;
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_18;
  uint local_14 [3];
  
  local_14[1] = 0x43d2fa8c;
  local_14[2] = 1;
  iVar1 = FUN_143662c40(param_2,"%d.%d.%d.%d",local_res18,local_res20,&local_18,local_14);
  if ((((iVar1 == 4) && (local_res18[0] < 0x100)) && (local_res20[0] < 0x100)) &&
     ((local_18 < 0x100 && (local_14[0] < 0x100)))) {
    *param_1 = (char)local_res18[0];
    param_1[1] = (char)local_res20[0];
    param_1[2] = (char)local_18;
    param_1[3] = (char)local_14[0];
    return 1;
  }
  return 0;
}



// FUNCTION 143d2fb20 ipv6_cb body=243 status=ok
// SIG undefined ipv6_cb(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ipv6_cb(undefined1 *param_1,int param_2,longlong param_3)

{
  undefined1 uVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  iVar3 = *(int *)(param_3 + 0x10);
  lVar4 = (longlong)iVar3;
  if (iVar3 != 0x10) {
    if (param_2 == 0) {
      if (*(int *)(param_3 + 0x14) == -1) {
        *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 1;
        *(int *)(param_3 + 0x14) = iVar3;
        return 1;
      }
      if (*(int *)(param_3 + 0x14) == iVar3) {
        *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 1;
        return 1;
      }
    }
    else if (param_2 < 5) {
      uVar5 = 0;
      uVar2 = (longlong)param_2;
      while( true ) {
        uVar7 = uVar2;
        uVar1 = *param_1;
        param_1 = param_1 + 1;
        uVar6 = (int)uVar7 - 1;
        iVar3 = FUN_143cf2b10(uVar1);
        if (iVar3 < 0) break;
        uVar5 = uVar5 << 4 | (int)(char)iVar3;
        uVar2 = (ulonglong)uVar6;
        if (uVar6 == 0) {
          *(char *)(lVar4 + 1 + param_3) = (char)uVar5;
          *(char *)(lVar4 + param_3) = (char)(uVar5 >> 8);
          *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 2;
          return uVar7 & 0xffffffff;
        }
      }
    }
    else if (((iVar3 < 0xd) && (param_1[param_2] == '\0')) &&
            (iVar3 = ipv4_from_asc(lVar4 + param_3,param_1), iVar3 != 0)) {
      *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 4;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143d2fc20 name_cmp body=110 status=ok
// SIG undefined name_cmp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int name_cmp(char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  
  cVar1 = *param_2;
  pcVar4 = param_2;
  for (uVar2 = 0; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  iVar3 = strncmp(param_1,param_2,(ulonglong)(uVar2 & 0x7fffffff));
  if (iVar3 == 0) {
    if ((param_1[uVar2 & 0x7fffffff] != '\0') && (param_1[uVar2 & 0x7fffffff] != '.')) {
      return 1;
    }
    iVar3 = 0;
  }
  return iVar3;
}



// FUNCTION 143d2fc90 s2i_ASN1_INTEGER body=383 status=ok
// SIG undefined s2i_ASN1_INTEGER(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong s2i_ASN1_INTEGER(undefined8 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  char *pcVar5;
  undefined4 uVar6;
  bool bVar7;
  longlong local_res10;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x143d2fca0;
  local_res10 = 0;
  if (param_2 == (char *)0x0) {
    ERR_put_error(0x22,0x6c,0x6d,"crypto\\x509v3\\v3_utl.c",0xb0,0x143d2fca0);
    return 0;
  }
  local_res10 = BN_new();
  if (local_res10 != 0) {
    cVar1 = *param_2;
    bVar7 = cVar1 == '-';
    cVar4 = cVar1;
    if (bVar7) {
      cVar4 = param_2[1];
    }
    pcVar5 = param_2 + 1;
    if (cVar1 != '-') {
      pcVar5 = param_2;
    }
    if ((cVar4 == '0') && ((pcVar5[1] + 0xa8U & 0xdf) == 0)) {
      pcVar5 = pcVar5 + 2;
      iVar2 = BN_hex2bn(&local_res10,pcVar5);
    }
    else {
      iVar2 = BN_dec2bn(&local_res10,pcVar5);
    }
    if ((iVar2 == 0) || (pcVar5[iVar2] != '\0')) {
      BN_free(local_res10);
      uVar6 = 100;
      uVar8 = 0xcb;
    }
    else {
      if ((bVar7) && (iVar2 = BN_is_zero(local_res10), iVar2 != 0)) {
        bVar7 = false;
      }
      lVar3 = BN_to_ASN1_INTEGER(local_res10,0);
      BN_free(local_res10);
      if (lVar3 != 0) {
        if (!bVar7) {
          return lVar3;
        }
        *(uint *)(lVar3 + 4) = *(uint *)(lVar3 + 4) | 0x100;
        return lVar3;
      }
      uVar8 = 0xd6;
      uVar6 = 0x65;
    }
    ERR_put_error(0x22,0x6c,uVar6,"crypto\\x509v3\\v3_utl.c",uVar8);
    return 0;
  }
  ERR_put_error(0x22,0x6c,0x41,"crypto\\x509v3\\v3_utl.c",0xb5,uVar9);
  return 0;
}



// FUNCTION 143d2fe10 strip_spaces body=183 status=ok
// SIG undefined strip_spaces(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char * strip_spaces(char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  cVar1 = *param_1;
  if (cVar1 == '\0') {
LAB_143d2fe54:
    if (*param_1 != '\0') {
      uVar3 = 0;
      pcVar4 = param_1;
      do {
        if (0x7fffffff < uVar3) break;
        pcVar4 = pcVar4 + 1;
        uVar3 = uVar3 + 1;
      } while (*pcVar4 != '\0');
      for (pcVar4 = param_1 + ((ulonglong)(uVar3 & 0x7fffffff) - 1); pcVar4 != param_1;
          pcVar4 = pcVar4 + -1) {
        iVar2 = ossl_ctype_check((int)*pcVar4,8);
        if (iVar2 == 0) {
          if (param_1 != pcVar4) {
            pcVar4[1] = '\0';
          }
          break;
        }
      }
      if (*param_1 != '\0') {
        return param_1;
      }
    }
  }
  else {
    do {
      iVar2 = ossl_ctype_check((int)cVar1,8);
      if (iVar2 == 0) goto LAB_143d2fe54;
      cVar1 = param_1[1];
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
  }
  return (char *)0x0;
}



// FUNCTION 143d2ff10 i2r_ASIdentifiers body=123 status=ok
// SIG undefined i2r_ASIdentifiers(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
i2r_ASIdentifiers(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = i2r_ASIdentifierChoice(param_3,*param_2,param_4,"Autonomous System Numbers");
  if (iVar1 != 0) {
    iVar1 = i2r_ASIdentifierChoice(param_3,param_2[1],param_4,"Routing Domain Identifiers");
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143d2ff90 v2i_ASIdentifiers body=1441 status=ok
// SIG undefined v2i_ASIdentifiers(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * v2i_ASIdentifiers(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int extraout_EAX;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar8;
  undefined4 *puVar9;
  char *_Str;
  longlong *plVar10;
  int iVar11;
  undefined8 uVar12;
  int iVar13;
  longlong local_res20;
  undefined8 uVar14;
  size_t sVar7;
  
  iVar13 = 0;
  local_res20 = 0;
  plVar2 = (longlong *)ASN1_item_new(&DAT_145d81470);
  if (plVar2 == (longlong *)0x0) {
    ERR_put_error(0x22,0xa3,0x41,"crypto\\x509v3\\v3_asid.c",0x200);
    return (longlong *)0x0;
  }
  iVar1 = OPENSSL_sk_num(param_3);
  if (0 < iVar1) {
    do {
      puVar3 = (undefined8 *)OPENSSL_sk_value(param_3,iVar13);
      iVar1 = name_cmp(puVar3[1],&DAT_145d8159c);
      lVar5 = 0;
      if (iVar1 != 0) {
        iVar1 = name_cmp(puVar3[1],&DAT_145d815a0);
        if (iVar1 == 0) {
          lVar5 = 1;
          goto LAB_143d3006f;
        }
        uVar14 = 0x211;
        uVar12 = 0x73;
LAB_143d300f8:
        ERR_put_error(0x22,0xa3,uVar12,"crypto\\x509v3\\v3_asid.c",uVar14);
        ERR_add_error_data(6,"section:",*puVar3,",name:",puVar3[1],",value:",puVar3[2]);
        goto LAB_143d30147;
      }
LAB_143d3006f:
      lVar8 = 0;
      do {
        lVar4 = lVar8 + 1;
        iVar1 = (int)lVar5;
        if (((char *)puVar3[2])[lVar8] != "inherit"[lVar8]) {
          sVar7 = strspn((char *)puVar3[2],"0123456789");
          extraout_EAX = (int)sVar7;
          _Str = (char *)(puVar3[2] + (longlong)extraout_EAX);
          if (*_Str != '\0') {
            sVar7 = strspn(_Str," \t");
            iVar11 = (int)sVar7 + extraout_EAX;
            if (*(char *)((longlong)iVar11 + puVar3[2]) == '-') {
              sVar7 = strspn((char *)(puVar3[2] + (longlong)iVar11 + 1)," \t");
              iVar11 = (int)sVar7 + iVar11;
              lVar5 = (longlong)iVar11 + 1;
              sVar7 = strspn((char *)(puVar3[2] + lVar5),"0123456789");
              if (*(char *)((longlong)((int)sVar7 + iVar11) + 1 + puVar3[2]) == '\0') {
                lVar8 = CRYPTO_strdup(puVar3[2],"crypto\\x509v3\\v3_asid.c",0x245);
                if (lVar8 == 0) {
                  uVar12 = 0x247;
                  goto LAB_143d304fd;
                }
                *(undefined1 *)(extraout_EAX + lVar8) = 0;
                local_res20 = s2i_ASN1_INTEGER(0,lVar8);
                lVar5 = s2i_ASN1_INTEGER(0,lVar5 + lVar8);
                CRYPTO_free(lVar8,"crypto\\x509v3\\v3_asid.c",0x24d);
                if ((local_res20 == 0) || (lVar5 == 0)) {
                  uVar12 = 0x24f;
                  goto LAB_143d30439;
                }
                iVar11 = ASN1_INTEGER_cmp(local_res20,lVar5);
                if (iVar11 < 1) goto LAB_143d302d2;
                ERR_put_error(0x22,0xa3,0x74,"crypto\\x509v3\\v3_asid.c",0x254);
                goto LAB_143d3014a;
              }
              uVar14 = 0x236;
              uVar12 = 0xa3;
            }
            else {
              uVar14 = 0x22d;
              uVar12 = 0xa2;
            }
            ERR_put_error(0x22,0xa3,uVar12,"crypto\\x509v3\\v3_asid.c",uVar14);
            ERR_add_error_data(6,"section:",*puVar3,",name:",puVar3[1],",value:",puVar3[2]);
            lVar5 = 0;
            goto LAB_143d3014a;
          }
          iVar11 = X509V3_get_value_int(puVar3,&local_res20);
          if (iVar11 == 0) {
            uVar12 = 0x241;
LAB_143d304fd:
            ERR_put_error(0x22,0xa3,0x41,"crypto\\x509v3\\v3_asid.c",uVar12);
            lVar5 = 0;
            goto LAB_143d3014a;
          }
          lVar5 = 0;
LAB_143d302d2:
          lVar8 = local_res20;
          plVar10 = plVar2;
          if (iVar1 == 0) {
LAB_143d302f1:
            if ((int *)*plVar10 == (int *)0x0) {
              lVar4 = ASN1_item_new(&DAT_145d81400);
              *plVar10 = lVar4;
              if (lVar4 != 0) {
                uVar12 = OPENSSL_sk_new(ASIdOrRange_cmp);
                *(undefined8 *)(*plVar10 + 8) = uVar12;
                if (*(longlong *)((undefined4 *)*plVar10 + 2) != 0) {
                  *(undefined4 *)*plVar10 = 1;
                  goto LAB_143d30343;
                }
              }
            }
            else if (*(int *)*plVar10 != 0) {
LAB_143d30343:
              puVar9 = (undefined4 *)ASN1_item_new(&DAT_145d81390);
              if (puVar9 != (undefined4 *)0x0) {
                if (lVar5 == 0) {
                  *puVar9 = 0;
                  *(longlong *)(puVar9 + 2) = lVar8;
LAB_143d303ac:
                  iVar1 = OPENSSL_sk_push(*(undefined8 *)(*plVar10 + 8),puVar9);
                  if (iVar1 != 0) {
                    local_res20 = 0;
                    goto LAB_143d303cb;
                  }
                }
                else {
                  *puVar9 = 1;
                  puVar3 = (undefined8 *)ASN1_item_new(&DAT_145d81320);
                  *(undefined8 **)(puVar9 + 2) = puVar3;
                  if (puVar3 != (undefined8 *)0x0) {
                    ASN1_BIT_STRING_free(*puVar3);
                    **(longlong **)(puVar9 + 2) = lVar8;
                    ASN1_BIT_STRING_free(*(undefined8 *)(*(longlong *)(puVar9 + 2) + 8));
                    *(longlong *)(*(longlong *)(puVar9 + 2) + 8) = lVar5;
                    goto LAB_143d303ac;
                  }
                }
                ASN1_item_free(puVar9,&DAT_145d81390);
              }
            }
          }
          else if (iVar1 == 1) {
            plVar10 = plVar2 + 1;
            goto LAB_143d302f1;
          }
          uVar12 = 0x259;
LAB_143d30439:
          ERR_put_error(0x22,0xa3,0x41,"crypto\\x509v3\\v3_asid.c",uVar12);
          goto LAB_143d3014a;
        }
        lVar8 = lVar4;
      } while (lVar4 != 8);
      plVar10 = plVar2;
      if (iVar1 != 0) {
        if (iVar1 == 1) {
          plVar10 = plVar2 + 1;
          goto LAB_143d300ab;
        }
LAB_143d300ea:
        uVar14 = 0x21d;
        uVar12 = 0xa5;
        goto LAB_143d300f8;
      }
LAB_143d300ab:
      piVar6 = (int *)*plVar10;
      if (piVar6 == (int *)0x0) {
        lVar5 = ASN1_item_new(&DAT_145d81400);
        *plVar10 = lVar5;
        if (lVar5 != 0) {
          lVar5 = ASN1_NULL_new();
          *(longlong *)(*plVar10 + 8) = lVar5;
          if (lVar5 != 0) {
            *(undefined4 *)*plVar10 = 0;
            piVar6 = (int *)*plVar10;
            goto LAB_143d300e1;
          }
        }
        goto LAB_143d300ea;
      }
LAB_143d300e1:
      if (*piVar6 != 0) goto LAB_143d300ea;
LAB_143d303cb:
      iVar13 = iVar13 + 1;
      iVar1 = OPENSSL_sk_num(param_3);
    } while (iVar13 < iVar1);
  }
  iVar13 = ASIdentifierChoice_canonize(*plVar2);
  if ((iVar13 == 0) || (iVar13 = ASIdentifierChoice_canonize(plVar2[1]), iVar13 == 0)) {
LAB_143d30147:
    lVar5 = 0;
LAB_143d3014a:
    ASN1_item_free(plVar2,&DAT_145d81470);
    ASN1_BIT_STRING_free(local_res20);
    ASN1_BIT_STRING_free(lVar5);
    plVar2 = (longlong *)0x0;
  }
  return plVar2;
}



// FUNCTION 143d30540 ASIdOrRange_cmp body=170 status=ok
// SIG undefined ASIdOrRange_cmp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASIdOrRange_cmp(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  piVar2 = (int *)*param_2;
  iVar3 = *piVar1;
  if (iVar3 == 0) {
    if (*piVar2 == 0) {
      ASN1_INTEGER_cmp(*(undefined8 *)(piVar1 + 2),*(undefined8 *)(piVar2 + 2));
      return;
    }
  }
  else if ((iVar3 == 1) && (*piVar2 == 1)) {
    iVar3 = ASN1_INTEGER_cmp(**(undefined8 **)(piVar1 + 2),**(undefined8 **)(piVar2 + 2));
    if (iVar3 != 0) {
      return;
    }
    ASN1_INTEGER_cmp(*(undefined8 *)(*(longlong *)(piVar1 + 2) + 8),
                     *(undefined8 *)(*(longlong *)(piVar2 + 2) + 8));
    return;
  }
  if (iVar3 != 0) {
    ASN1_INTEGER_cmp(**(undefined8 **)(piVar1 + 2));
    return;
  }
  ASN1_INTEGER_cmp(*(undefined8 **)(piVar1 + 2),**(undefined8 **)(piVar2 + 2));
  return;
}



// FUNCTION 143d305f0 ASIdentifierChoice_canonize body=1013 status=ok
// SIG undefined ASIdentifierChoice_canonize(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool ASIdentifierChoice_canonize(int *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  int local_res8;
  ulonglong local_res10;
  longlong local_res18;
  undefined4 uVar15;
  
  uVar8 = 0;
  bVar14 = false;
  local_res18 = 0;
  local_res10 = 0;
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return true;
  }
  if ((*param_1 != 1) || (iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 2)), iVar2 == 0)) {
    ERR_put_error(0x22,0xa1,0x74,"crypto\\x509v3\\v3_asid.c",0x171);
    return false;
  }
  OPENSSL_sk_sort(*(undefined8 *)(param_1 + 2));
  iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 2));
  uVar1 = uVar8;
  if (0 < iVar2 + -1) {
    local_res8 = 1;
    do {
      iVar2 = (int)uVar8;
      piVar4 = (int *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 2),uVar8);
      piVar5 = (int *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 2),local_res8);
      if (piVar4 == (int *)0x0) goto LAB_143d30951;
      if (*piVar4 == 0) {
        uVar9 = *(undefined8 *)(piVar4 + 2);
        uVar12 = uVar9;
      }
      else {
        if (*piVar4 != 1) goto LAB_143d30951;
        uVar9 = (*(undefined8 **)(piVar4 + 2))[1];
        uVar12 = **(undefined8 **)(piVar4 + 2);
      }
      if (piVar5 == (int *)0x0) goto LAB_143d30951;
      if (*piVar5 == 0) {
        uVar10 = *(undefined8 *)(piVar5 + 2);
        uVar13 = uVar10;
      }
      else {
        if (*piVar5 != 1) goto LAB_143d30951;
        uVar10 = **(undefined8 **)(piVar5 + 2);
        uVar13 = (*(undefined8 **)(piVar5 + 2))[1];
      }
      iVar3 = ASN1_INTEGER_cmp(uVar12,uVar10);
      if (((0 < iVar3) || (iVar3 = ASN1_INTEGER_cmp(uVar12,uVar9), 0 < iVar3)) ||
         (iVar3 = ASN1_INTEGER_cmp(uVar10,uVar13), 0 < iVar3)) goto LAB_143d30951;
      iVar3 = ASN1_INTEGER_cmp(uVar9,uVar10);
      if (-1 < iVar3) {
        uVar15 = 0x19a;
        uVar11 = 0x74;
LAB_143d30944:
        ERR_put_error(0x22,0xa1,uVar11,"crypto\\x509v3\\v3_asid.c",uVar15);
        goto LAB_143d30951;
      }
      if (((local_res10 == 0) && (local_res10 = BN_new(), local_res10 == 0)) ||
         ((lVar6 = ASN1_INTEGER_to_BN(uVar9,local_res10), lVar6 == 0 ||
          ((iVar3 = BN_add_word(local_res10,1), iVar3 == 0 ||
           (local_res18 = BN_to_ASN1_INTEGER(local_res10,local_res18), local_res18 == 0)))))) {
        uVar15 = 0x1a7;
        uVar11 = 0x41;
        goto LAB_143d30944;
      }
      iVar3 = ASN1_INTEGER_cmp(local_res18,uVar10);
      if (iVar3 == 0) {
        if (*piVar4 == 0) {
          puVar7 = (undefined8 *)CRYPTO_malloc(0x10,"crypto\\x509v3\\v3_asid.c",0x1b2);
          if (puVar7 == (undefined8 *)0x0) {
            ERR_put_error(0x22,0xa1,0x41,"crypto\\x509v3\\v3_asid.c",0x1b4);
            goto LAB_143d30951;
          }
          *puVar7 = uVar12;
          puVar7[1] = uVar13;
          *piVar4 = 1;
          *(undefined8 **)(piVar4 + 2) = puVar7;
        }
        else if (*piVar4 == 1) {
          ASN1_BIT_STRING_free(*(undefined8 *)(*(longlong *)(piVar4 + 2) + 8));
          *(undefined8 *)(*(longlong *)(piVar4 + 2) + 8) = uVar13;
        }
        if (*piVar5 == 0) {
          piVar5[2] = 0;
          piVar5[3] = 0;
        }
        else if (*piVar5 == 1) {
          *(undefined8 *)(*(longlong *)(piVar5 + 2) + 8) = 0;
        }
        ASN1_item_free(piVar5,&DAT_145d81390);
        OPENSSL_sk_delete(*(undefined8 *)(param_1 + 2),local_res8);
        iVar2 = iVar2 + -1;
        local_res8 = local_res8 + -1;
      }
      local_res8 = local_res8 + 1;
      uVar8 = (ulonglong)(iVar2 + 1U);
      iVar3 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 2));
      uVar1 = local_res10;
    } while ((int)(iVar2 + 1U) < iVar3 + -1);
  }
  local_res10 = uVar1;
  iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 2));
  piVar4 = (int *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 2),iVar2 + -1);
  if (((piVar4 == (int *)0x0) || (*piVar4 != 1)) ||
     (iVar2 = ASN1_INTEGER_cmp(**(undefined8 **)(piVar4 + 2),(*(undefined8 **)(piVar4 + 2))[1]),
     iVar2 < 1)) {
    iVar2 = ASIdentifierChoice_is_canonical(param_1);
    bVar14 = iVar2 != 0;
  }
LAB_143d30951:
  ASN1_BIT_STRING_free(local_res18);
  BN_free(local_res10);
  return bVar14;
}



// FUNCTION 143d309f0 ASIdentifierChoice_is_canonical body=601 status=ok
// SIG undefined ASIdentifierChoice_is_canonical(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 ASIdentifierChoice_is_canonical(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 local_res8;
  
  uVar6 = 0;
  local_res8 = 0;
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return 1;
  }
  if ((*param_1 != 1) || (iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 2)), iVar1 == 0)) {
    return 0;
  }
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 2));
  uVar4 = uVar6;
  uVar10 = uVar6;
  if (0 < iVar1 + -1) {
    do {
      piVar2 = (int *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 2),uVar10);
      uVar9 = (int)uVar10 + 1;
      piVar3 = (int *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 2),(ulonglong)uVar9);
      if (piVar2 == (int *)0x0) goto LAB_143d30bd8;
      if (*piVar2 == 0) {
        uVar8 = *(undefined8 *)(piVar2 + 2);
        uVar11 = uVar8;
      }
      else {
        if (*piVar2 != 1) goto LAB_143d30bd8;
        uVar8 = **(undefined8 **)(piVar2 + 2);
        uVar11 = (*(undefined8 **)(piVar2 + 2))[1];
      }
      if (piVar3 == (int *)0x0) goto LAB_143d30bd8;
      if (*piVar3 == 0) {
        uVar7 = *(undefined8 *)(piVar3 + 2);
        uVar12 = uVar7;
      }
      else {
        if (*piVar3 != 1) goto LAB_143d30bd8;
        uVar7 = **(undefined8 **)(piVar3 + 2);
        uVar12 = (*(undefined8 **)(piVar3 + 2))[1];
      }
      iVar1 = ASN1_INTEGER_cmp(uVar8,uVar7);
      if (((-1 < iVar1) || (iVar1 = ASN1_INTEGER_cmp(uVar8,uVar11), 0 < iVar1)) ||
         (iVar1 = ASN1_INTEGER_cmp(uVar7,uVar12), 0 < iVar1)) goto LAB_143d30bd8;
      if (((uVar4 == 0) && (uVar4 = BN_new(), uVar4 == 0)) ||
         ((lVar5 = ASN1_INTEGER_to_BN(uVar11,uVar4), lVar5 == 0 ||
          ((iVar1 = BN_add_word(uVar4,1), iVar1 == 0 ||
           (uVar6 = BN_to_ASN1_INTEGER(uVar4,uVar6), uVar6 == 0)))))) {
        ERR_put_error(0x22,0xa2,0x41,"crypto\\x509v3\\v3_asid.c",0x131);
        goto LAB_143d30bd8;
      }
      iVar1 = ASN1_INTEGER_cmp(uVar6,uVar7);
      if (-1 < iVar1) goto LAB_143d30bd8;
      iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 2));
      uVar10 = (ulonglong)uVar9;
    } while ((int)uVar9 < iVar1 + -1);
  }
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 2));
  piVar2 = (int *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 2),iVar1 + -1);
  if (((piVar2 == (int *)0x0) || (*piVar2 != 1)) ||
     (iVar1 = ASN1_INTEGER_cmp(**(undefined8 **)(piVar2 + 2),(*(undefined8 **)(piVar2 + 2))[1]),
     iVar1 < 1)) {
    local_res8 = 1;
  }
LAB_143d30bd8:
  ASN1_BIT_STRING_free(uVar6);
  BN_free(uVar4);
  return local_res8;
}



// FUNCTION 143d30c50 FUN_143d30c50 body=29 status=ok
// SIG undefined FUN_143d30c50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d30c50(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_145d81470);
  return;
}



// FUNCTION 143d30c70 X509v3_asid_is_canonical body=67 status=ok
// SIG undefined X509v3_asid_is_canonical(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509v3_asid_is_canonical(undefined8 *param_1)

{
  int iVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return 1;
  }
  iVar1 = ASIdentifierChoice_is_canonical(*param_1);
  if ((iVar1 != 0) && (iVar1 = ASIdentifierChoice_is_canonical(param_1[1]), iVar1 != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 143d30cc0 X509v3_asid_validate_path body=87 status=ok
// SIG undefined X509v3_asid_validate_path(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509v3_asid_validate_path(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x98) != 0) {
    iVar1 = OPENSSL_sk_num();
    if ((iVar1 != 0) && (*(longlong *)(param_1 + 0x38) != 0)) {
      uVar2 = asid_validate_path_internal(param_1,*(undefined8 *)(param_1 + 0x98),0);
      return uVar2;
    }
  }
  *(undefined4 *)(param_1 + 0xb0) = 1;
  return 0;
}



// FUNCTION 143d30d20 asid_contains body=304 status=ok
// SIG undefined asid_contains(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 asid_contains(longlong param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  
  if ((param_2 != 0) && (param_1 != param_2)) {
    if (param_1 == 0) {
      return 0;
    }
    iVar4 = 0;
    iVar7 = 0;
    iVar1 = OPENSSL_sk_num(param_2);
    if (0 < iVar1) {
      do {
        piVar2 = (int *)OPENSSL_sk_value(param_2,iVar7);
        if (piVar2 == (int *)0x0) {
          return 0;
        }
        if (*piVar2 == 0) {
          uVar5 = *(undefined8 *)(piVar2 + 2);
          uVar8 = uVar5;
        }
        else {
          if (*piVar2 != 1) {
            return 0;
          }
          uVar5 = (*(undefined8 **)(piVar2 + 2))[1];
          uVar8 = **(undefined8 **)(piVar2 + 2);
        }
        while( true ) {
          iVar1 = OPENSSL_sk_num(param_1);
          if (iVar1 <= iVar4) {
            return 0;
          }
          piVar2 = (int *)OPENSSL_sk_value(param_1,iVar4);
          if (piVar2 == (int *)0x0) {
            return 0;
          }
          if (*piVar2 == 0) {
            uVar3 = *(undefined8 *)(piVar2 + 2);
            uVar6 = uVar3;
          }
          else {
            if (*piVar2 != 1) {
              return 0;
            }
            uVar3 = (*(undefined8 **)(piVar2 + 2))[1];
            uVar6 = **(undefined8 **)(piVar2 + 2);
          }
          iVar1 = ASN1_INTEGER_cmp(uVar3,uVar5);
          if (-1 < iVar1) break;
          iVar4 = iVar4 + 1;
        }
        iVar1 = ASN1_INTEGER_cmp(uVar6,uVar8);
        if (0 < iVar1) {
          return 0;
        }
        iVar7 = iVar7 + 1;
        iVar1 = OPENSSL_sk_num(param_2);
      } while (iVar7 < iVar1);
    }
  }
  return 1;
}



// FUNCTION 143d30e50 asid_validate_path_internal body=1080 status=ok
// SIG undefined asid_validate_path_internal(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong asid_validate_path_internal(longlong param_1,longlong param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int *piVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  
  uVar5 = 1;
  bVar2 = false;
  if ((param_2 == 0) || (iVar3 = OPENSSL_sk_num(param_2), iVar3 < 1)) {
LAB_143d31266:
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0xb0) = 1;
    }
LAB_143d31271:
    uVar8 = 0;
  }
  else {
    if (param_1 == 0) {
      if (param_3 == (undefined8 *)0x0) goto LAB_143d31271;
    }
    else if (*(longlong *)(param_1 + 0x38) == 0) goto LAB_143d31266;
    if (param_3 == (undefined8 *)0x0) {
      iVar3 = 0;
      lVar6 = OPENSSL_sk_value(param_2,0);
      param_3 = *(undefined8 **)(lVar6 + 0x118);
      if (param_3 != (undefined8 *)0x0) goto LAB_143d30ef0;
    }
    else {
      iVar3 = -1;
      lVar6 = 0;
LAB_143d30ef0:
      iVar4 = X509v3_asid_is_canonical(param_3);
      uVar5 = 1;
      if (iVar4 == 0) {
        if (param_1 != 0) {
          *(undefined4 *)(param_1 + 0xb0) = 0x29;
          *(int *)(param_1 + 0xac) = iVar3;
          *(longlong *)(param_1 + 0xb8) = lVar6;
          uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
          if (uVar5 == 0) goto LAB_143d31262;
          goto LAB_143d30f2e;
        }
LAB_143d31260:
        uVar5 = 0;
      }
      else {
LAB_143d30f2e:
        piVar7 = (int *)*param_3;
        lVar10 = 0;
        if (piVar7 != (int *)0x0) {
          if (*piVar7 == 0) {
            bVar2 = true;
            lVar10 = 0;
          }
          else if (*piVar7 == 1) {
            lVar10 = *(longlong *)(piVar7 + 2);
          }
        }
        piVar7 = (int *)param_3[1];
        lVar11 = 0;
        bVar1 = false;
        if (piVar7 != (int *)0x0) {
          if (*piVar7 == 0) {
            bVar1 = true;
            lVar11 = 0;
          }
          else {
            bVar1 = false;
            if (*piVar7 == 1) {
              lVar11 = *(longlong *)(piVar7 + 2);
            }
          }
        }
        iVar3 = iVar3 + 1;
        iVar4 = OPENSSL_sk_num(param_2);
        if (iVar3 < iVar4) {
          do {
            lVar6 = OPENSSL_sk_value(param_2,iVar3);
            if (lVar6 == 0) goto LAB_143d311c8;
            if (*(longlong *)(lVar6 + 0x118) == 0) {
              if ((lVar10 != 0) || (lVar11 != 0)) {
                if (param_1 == 0) goto LAB_143d31260;
                *(undefined4 *)(param_1 + 0xb0) = 0x2e;
                *(int *)(param_1 + 0xac) = iVar3;
                *(longlong *)(param_1 + 0xb8) = lVar6;
                uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
joined_r0x000143d31192:
                if (uVar5 == 0) goto LAB_143d31262;
              }
            }
            else {
              iVar4 = X509v3_asid_is_canonical();
              if (iVar4 == 0) {
                if (param_1 == 0) goto LAB_143d31260;
                *(undefined4 *)(param_1 + 0xb0) = 0x29;
                *(int *)(param_1 + 0xac) = iVar3;
                *(longlong *)(param_1 + 0xb8) = lVar6;
                uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
                if (uVar5 == 0) goto LAB_143d31262;
              }
              plVar9 = *(longlong **)(lVar6 + 0x118);
              piVar7 = (int *)*plVar9;
              if ((piVar7 == (int *)0x0) && (lVar10 != 0)) {
                if (param_1 == 0) goto LAB_143d31260;
                *(undefined4 *)(param_1 + 0xb0) = 0x2e;
                *(int *)(param_1 + 0xac) = iVar3;
                *(longlong *)(param_1 + 0xb8) = lVar6;
                uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
                if (uVar5 == 0) goto LAB_143d31262;
                plVar9 = *(longlong **)(lVar6 + 0x118);
                lVar10 = 0;
                bVar2 = false;
                piVar7 = (int *)*plVar9;
              }
              if ((piVar7 != (int *)0x0) && (*piVar7 == 1)) {
                if ((bVar2) ||
                   (iVar4 = asid_contains(*(undefined8 *)(piVar7 + 2),lVar10), iVar4 != 0)) {
                  plVar9 = *(longlong **)(lVar6 + 0x118);
                  lVar10 = *(longlong *)(*plVar9 + 8);
                  bVar2 = false;
                }
                else {
                  if (param_1 == 0) goto LAB_143d31260;
                  *(undefined4 *)(param_1 + 0xb0) = 0x2e;
                  *(int *)(param_1 + 0xac) = iVar3;
                  *(longlong *)(param_1 + 0xb8) = lVar6;
                  uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
                  if (uVar5 == 0) goto LAB_143d31262;
                  plVar9 = *(longlong **)(lVar6 + 0x118);
                }
              }
              if ((plVar9[1] == 0) && (lVar11 != 0)) {
                if (param_1 == 0) goto LAB_143d31260;
                *(undefined4 *)(param_1 + 0xb0) = 0x2e;
                *(int *)(param_1 + 0xac) = iVar3;
                *(longlong *)(param_1 + 0xb8) = lVar6;
                uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
                if (uVar5 == 0) goto LAB_143d31262;
                plVar9 = *(longlong **)(lVar6 + 0x118);
                lVar11 = 0;
                bVar1 = false;
              }
              piVar7 = (int *)plVar9[1];
              if ((piVar7 != (int *)0x0) && (*piVar7 == 1)) {
                if ((!bVar1) &&
                   (iVar4 = asid_contains(*(undefined8 *)(piVar7 + 2),lVar11), iVar4 == 0)) {
                  if (param_1 != 0) {
                    *(undefined4 *)(param_1 + 0xb0) = 0x2e;
                    *(int *)(param_1 + 0xac) = iVar3;
                    *(longlong *)(param_1 + 0xb8) = lVar6;
                    uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
                    goto joined_r0x000143d31192;
                  }
                  goto LAB_143d31260;
                }
                bVar1 = false;
                lVar11 = *(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x118) + 8) + 8);
              }
            }
            iVar3 = iVar3 + 1;
            iVar4 = OPENSSL_sk_num(param_2);
          } while (iVar3 < iVar4);
        }
        if (lVar6 == 0) {
LAB_143d311c8:
          if (param_1 != 0) {
            *(undefined4 *)(param_1 + 0xb0) = 1;
          }
          goto LAB_143d31271;
        }
        if (*(undefined8 **)(lVar6 + 0x118) != (undefined8 *)0x0) {
          piVar7 = (int *)**(undefined8 **)(lVar6 + 0x118);
          if ((piVar7 != (int *)0x0) && (*piVar7 == 0)) {
            if (param_1 == 0) goto LAB_143d31260;
            *(undefined4 *)(param_1 + 0xb0) = 0x2e;
            *(int *)(param_1 + 0xac) = iVar3;
            *(longlong *)(param_1 + 0xb8) = lVar6;
            uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (uVar5 == 0) goto LAB_143d31262;
          }
          piVar7 = *(int **)(*(longlong *)(lVar6 + 0x118) + 8);
          if ((piVar7 != (int *)0x0) && (*piVar7 == 0)) {
            if (param_1 != 0) {
              *(undefined4 *)(param_1 + 0xb0) = 0x2e;
              *(int *)(param_1 + 0xac) = iVar3;
              *(longlong *)(param_1 + 0xb8) = lVar6;
              uVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
              return uVar8;
            }
            goto LAB_143d31260;
          }
        }
      }
    }
LAB_143d31262:
    uVar8 = (ulonglong)uVar5;
  }
  return uVar8;
}



// FUNCTION 143d31290 i2r_ASIdentifierChoice body=441 status=ok
// SIG undefined i2r_ASIdentifierChoice(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
i2r_ASIdentifierChoice(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143d312ae;
  if (param_2 != (int *)0x0) {
    BIO_printf(param_1,"%*s%s:\n",param_3,&DAT_143f3f584,param_4,0x143d312ae);
    if (*param_2 == 0) {
      BIO_printf(param_1,"%*sinherit\n",(int)param_3 + 2,&DAT_143f3f584,param_4,uVar6);
    }
    else {
      if (*param_2 != 1) {
        return 0;
      }
      iVar5 = 0;
      iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_2 + 2));
      if (0 < iVar1) {
        iVar1 = (int)param_3 + 2;
        do {
          piVar3 = (int *)OPENSSL_sk_value(*(undefined8 *)(param_2 + 2),iVar5);
          if (*piVar3 == 0) {
            lVar4 = i2s_ASN1_INTEGER(0,*(undefined8 *)(piVar3 + 2));
            if (lVar4 == 0) {
              return 0;
            }
            BIO_printf(param_1,"%*s%s\n",iVar1,&DAT_143f3f584,lVar4);
            uVar6 = 0x53;
          }
          else {
            if (*piVar3 != 1) {
              return 0;
            }
            lVar4 = i2s_ASN1_INTEGER(0,**(undefined8 **)(piVar3 + 2));
            if (lVar4 == 0) {
              return 0;
            }
            BIO_printf(param_1,"%*s%s-",iVar1,&DAT_143f3f584,lVar4);
            CRYPTO_free(lVar4,"crypto\\x509v3\\v3_asid.c",0x59);
            lVar4 = i2s_ASN1_INTEGER(0,*(undefined8 *)(*(longlong *)(piVar3 + 2) + 8));
            if (lVar4 == 0) {
              return 0;
            }
            BIO_printf(param_1,&DAT_145d81558,lVar4);
            uVar6 = 0x5d;
          }
          CRYPTO_free(lVar4,"crypto\\x509v3\\v3_asid.c",uVar6);
          iVar5 = iVar5 + 1;
          iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_2 + 2));
        } while (iVar5 < iVar2);
      }
    }
  }
  return 1;
}



// FUNCTION 143d314a0 FUN_143d314a0 body=788 status=ok
// SIG undefined FUN_143d314a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_143d314a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  char *pcVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  
  uVar10 = 0x143d314c7;
  iVar9 = 0;
  iVar3 = OPENSSL_sk_num(param_2);
  if (0 < iVar3) {
    do {
      puVar4 = (undefined8 *)OPENSSL_sk_value(param_2,iVar9);
      if ((((puVar4 == (undefined8 *)0x0) || (piVar5 = (int *)*puVar4, piVar5 == (int *)0x0)) ||
          (puVar1 = *(undefined1 **)(piVar5 + 2), puVar1 == (undefined1 *)0x0)) || (*piVar5 < 2)) {
        sVar7 = 0;
      }
      else {
        sVar7 = CONCAT11(*puVar1,puVar1[1]);
      }
      if (sVar7 == 1) {
        pcVar6 = "%*sIPv4";
LAB_143d31564:
        BIO_printf(param_3,pcVar6,param_4,&DAT_143f3f584);
      }
      else {
        if (sVar7 == 2) {
          pcVar6 = "%*sIPv6";
          goto LAB_143d31564;
        }
        BIO_printf(param_3,"%*sUnknown AFI %u",param_4,&DAT_143f3f584,sVar7,uVar10);
      }
      if (2 < *(int *)*puVar4) {
        switch(*(undefined1 *)(*(longlong *)((int *)*puVar4 + 2) + 2)) {
        case 1:
          BIO_puts(param_3," (Unicast)");
          break;
        case 2:
          BIO_puts(param_3," (Multicast)");
          break;
        case 3:
          BIO_puts(param_3," (Unicast/Multicast)");
          break;
        case 4:
          BIO_puts(param_3," (MPLS)");
          break;
        default:
          BIO_printf(param_3," (Unknown SAFI %u)");
          break;
        case 0x40:
          BIO_puts(param_3," (Tunnel)");
          break;
        case 0x41:
          BIO_puts(param_3," (VPLS)");
          break;
        case 0x42:
          BIO_puts(param_3," (BGP MDT)");
          break;
        case 0x80:
          BIO_puts(param_3," (MPLS-labeled VPN)");
        }
      }
      if (*(int *)puVar4[1] == 0) {
        BIO_puts(param_3,": inherit\n");
      }
      else if (*(int *)puVar4[1] == 1) {
        BIO_puts(param_3,&DAT_145d819fc);
        iVar8 = 0;
        uVar2 = *(undefined8 *)(puVar4[1] + 8);
        iVar3 = OPENSSL_sk_num(uVar2);
        if (0 < iVar3) {
          do {
            piVar5 = (int *)OPENSSL_sk_value(uVar2,iVar8);
            BIO_printf(param_3,&DAT_145d811b8,param_4 + 2,&DAT_143f3f584);
            if (*piVar5 == 0) {
              iVar3 = i2r_address(param_3,sVar7,0,*(undefined8 *)(piVar5 + 2));
              if (iVar3 == 0) {
                return 0;
              }
              BIO_printf(param_3,&DAT_145d81928,
                         **(int **)(piVar5 + 2) * 8 - ((*(int **)(piVar5 + 2))[4] & 7U));
            }
            else if (*piVar5 == 1) {
              iVar3 = i2r_address(param_3,sVar7,0,**(undefined8 **)(piVar5 + 2));
              if (iVar3 == 0) {
                return 0;
              }
              BIO_puts(param_3,&DAT_145cc6554);
              iVar3 = i2r_address(param_3,sVar7,0xff,*(undefined8 *)(*(longlong *)(piVar5 + 2) + 8))
              ;
              if (iVar3 == 0) {
                return 0;
              }
              BIO_puts(param_3,&DAT_143fc48d8);
            }
            iVar8 = iVar8 + 1;
            iVar3 = OPENSSL_sk_num(uVar2);
          } while (iVar8 < iVar3);
        }
      }
      iVar9 = iVar9 + 1;
      iVar3 = OPENSSL_sk_num(param_2);
    } while (iVar9 < iVar3);
  }
  return 1;
}



// FUNCTION 143d31860 v2i_IPAddrBlocks body=1956 status=ok
// SIG undefined v2i_IPAddrBlocks(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong v2i_IPAddrBlocks(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  ulong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  size_t sVar8;
  longlong lVar9;
  size_t sVar10;
  char *pcVar11;
  longlong lVar12;
  undefined2 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  char *_Control;
  undefined8 uVar17;
  ulong *puVar18;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  char *local_a0;
  undefined8 local_98;
  char *local_88;
  longlong local_80;
  int local_78;
  ulong local_74;
  char *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_58 = param_3;
  lVar6 = OPENSSL_sk_new(IPAddressFamily_cmp);
  local_80 = lVar6;
  if (lVar6 == 0) {
    local_a8 = CONCAT44(local_a8._4_4_,0x382);
    ERR_put_error(0x22,0x9f,0x41,"crypto\\x509v3\\v3_addr.c");
    lVar9 = 0;
  }
  else {
    iVar14 = 0;
    local_78 = 0;
    iVar4 = OPENSSL_sk_num(param_3);
    lVar9 = lVar6;
    if (0 < iVar4) {
      do {
        puVar7 = (undefined8 *)OPENSSL_sk_value(param_3,iVar14);
        _Control = (char *)0x0;
        local_70 = (char *)0x0;
        puVar18 = (ulong *)0x0;
        iVar4 = name_cmp(puVar7[1],&DAT_145d81a18);
        if (iVar4 != 0) {
          iVar4 = name_cmp(puVar7[1],&DAT_145d81a20);
          if (iVar4 == 0) {
LAB_143d31993:
            iVar4 = 2;
            goto LAB_143d31998;
          }
          iVar4 = name_cmp(puVar7[1],"IPv4-SAFI");
          if (iVar4 == 0) {
            iVar4 = 1;
            puVar18 = &local_74;
            goto LAB_143d31998;
          }
          iVar4 = name_cmp(puVar7[1],"IPv6-SAFI");
          if (iVar4 == 0) {
            puVar18 = &local_74;
            goto LAB_143d31993;
          }
          local_a8 = CONCAT44(local_a8._4_4_,0x399);
          uVar17 = 0x73;
LAB_143d31dd9:
          ERR_put_error(0x22,0x9f,uVar17,"crypto\\x509v3\\v3_addr.c");
          local_98 = puVar7[2];
          local_a0 = ",value:";
          local_a8 = puVar7[1];
          ERR_add_error_data(6,"section:",*puVar7,",name:");
          goto LAB_143d31f89;
        }
        iVar4 = 1;
LAB_143d31998:
        if (iVar4 == 1) {
          _Control = "0123456789.";
          local_70 = _Control;
        }
        else if (iVar4 == 2) {
          _Control = "0123456789.:abcdefABCDEF";
          local_70 = _Control;
        }
        if (iVar4 == 1) {
          iVar14 = 4;
        }
        else if (iVar4 == 2) {
          iVar14 = 0x10;
        }
        else {
          iVar14 = 0;
        }
        pcVar11 = (char *)puVar7[2];
        if (puVar18 != (ulong *)0x0) {
          uVar5 = strtoul(pcVar11,&local_88,0);
          *puVar18 = uVar5;
          sVar8 = strspn(local_88," \t");
          local_88 = local_88 + sVar8;
          if ((0xff < uVar5) || (cVar1 = *local_88, local_88 = local_88 + 1, cVar1 != ':')) {
            local_a8 = CONCAT44(local_a8._4_4_,0x3b1);
            uVar17 = 0xa4;
            goto LAB_143d31dd9;
          }
          sVar8 = strspn(local_88," \t");
          pcVar11 = local_88 + sVar8;
          local_88 = pcVar11;
        }
        pcVar11 = (char *)CRYPTO_strdup(pcVar11,"crypto\\x509v3\\v3_addr.c");
        if (pcVar11 == (char *)0x0) {
          local_a8 = CONCAT44(local_a8._4_4_,0x3bb);
LAB_143d31f18:
          ERR_put_error(0x22,0x9f,0x41,"crypto\\x509v3\\v3_addr.c");
          goto LAB_143d31f8c;
        }
        lVar9 = 0;
        do {
          lVar12 = lVar9 + 1;
          if (pcVar11[lVar9] != "inherit"[lVar9]) {
            sVar8 = strspn(pcVar11,_Control);
            sVar10 = strspn(pcVar11 + (int)sVar8," \t");
            iVar15 = (int)sVar8 + (int)sVar10;
            iVar16 = iVar15 + 1;
            cVar1 = pcVar11[iVar15];
            pcVar11[(int)sVar8] = '\0';
            iVar15 = a2i_ipadd(local_50,pcVar11);
            if (iVar15 != iVar14) {
              local_a8 = CONCAT44(local_a8._4_4_,0x3d5);
              uVar17 = 0xa6;
              goto LAB_143d31e39;
            }
            if (cVar1 == '\0') {
              lVar6 = make_prefix_or_range(local_80,iVar4,puVar18);
              if ((lVar6 != 0) &&
                 (iVar4 = make_addressPrefix(&local_60,local_50,iVar14 * 8), uVar17 = local_60,
                 iVar4 != 0)) {
                iVar4 = OPENSSL_sk_push(lVar6,local_60);
                lVar6 = local_80;
                if (iVar4 != 0) goto LAB_143d31d37;
                ASN1_item_free(uVar17,&DAT_145d816d0);
              }
              local_a8 = CONCAT44(local_a8._4_4_,0x404);
              goto LAB_143d31f18;
            }
            if (cVar1 != '-') {
              if (cVar1 != '/') {
                local_a8 = CONCAT44(local_a8._4_4_,0x40a);
                uVar17 = 0x74;
                goto LAB_143d31e39;
              }
              uVar5 = strtoul(pcVar11 + iVar16,&local_88,10);
              if ((local_88 == pcVar11 + iVar16) || (*local_88 != '\0')) {
                local_a8 = CONCAT44(local_a8._4_4_,0x3df);
                uVar17 = 0x74;
                goto LAB_143d31e39;
              }
              local_a8 = CONCAT44(local_a8._4_4_,uVar5);
              iVar4 = X509v3_addr_add_prefix(local_80,iVar4,puVar18);
              lVar6 = local_80;
              if (iVar4 != 0) goto LAB_143d31d37;
              local_a8 = CONCAT44(local_a8._4_4_,0x3e4);
              goto LAB_143d31f18;
            }
            sVar8 = strspn(pcVar11 + iVar16," \t");
            iVar16 = (int)sVar8 + iVar16;
            sVar8 = strspn(pcVar11 + iVar16,local_70);
            iVar15 = (int)sVar8 + iVar16;
            if ((iVar16 == iVar15) || (pcVar11[iVar15] != '\0')) {
              local_a8 = CONCAT44(local_a8._4_4_,0x3ed);
              uVar17 = 0x74;
              goto LAB_143d31e39;
            }
            iVar15 = a2i_ipadd(local_40,pcVar11 + iVar16);
            if (iVar15 != iVar14) {
              local_a8 = CONCAT44(local_a8._4_4_,0x3f3);
              uVar17 = 0xa6;
              goto LAB_143d31e39;
            }
            if (iVar4 == 1) {
              sVar8 = 4;
            }
            else if (iVar4 == 2) {
              sVar8 = 0x10;
            }
            else {
              sVar8 = 0;
            }
            iVar14 = _guard_xfg_dispatch_icall_nop(local_50,local_40,sVar8);
            if (0 < iVar14) {
              local_a8 = CONCAT44(local_a8._4_4_,0x3f9);
              uVar17 = 0x74;
              goto LAB_143d31e39;
            }
            lVar6 = make_prefix_or_range(local_80,iVar4,puVar18);
            if (iVar4 == 1) {
              uVar17 = 4;
            }
            else if (iVar4 == 2) {
              uVar17 = 0x10;
            }
            else {
              uVar17 = 0;
            }
            if ((lVar6 != 0) &&
               (iVar4 = make_addressRange(&local_68,local_50,local_40,uVar17), uVar17 = local_68,
               iVar4 != 0)) {
              iVar4 = OPENSSL_sk_push(lVar6,local_68);
              lVar6 = local_80;
              if (iVar4 != 0) goto LAB_143d31d37;
              ASN1_item_free(uVar17,&DAT_145d816d0);
            }
            local_a8 = CONCAT44(local_a8._4_4_,0x3fe);
            goto LAB_143d31f18;
          }
          lVar9 = lVar12;
        } while (lVar12 != 8);
        lVar9 = make_IPAddressFamily(lVar6,iVar4,puVar18);
        if (((lVar9 == 0) || (piVar2 = *(int **)(lVar9 + 8), piVar2 == (int *)0x0)) ||
           ((*piVar2 == 1 && (*(longlong *)(piVar2 + 2) != 0)))) {
LAB_143d31e2b:
          local_a8 = CONCAT44(local_a8._4_4_,0x3c6);
          uVar17 = 0xa5;
LAB_143d31e39:
          ERR_put_error(0x22,0x9f,uVar17,"crypto\\x509v3\\v3_addr.c");
          local_98 = puVar7[2];
          local_a0 = ",value:";
          local_a8 = puVar7[1];
          ERR_add_error_data(6,"section:",*puVar7,",name:");
          goto LAB_143d31f8c;
        }
        if ((*piVar2 != 0) || (*(longlong *)(piVar2 + 2) == 0)) {
          if (*(longlong *)(piVar2 + 2) == 0) {
            lVar12 = ASN1_NULL_new();
            *(longlong *)(*(longlong *)(lVar9 + 8) + 8) = lVar12;
            if (lVar12 == 0) goto LAB_143d31e2b;
          }
          **(undefined4 **)(lVar9 + 8) = 0;
        }
LAB_143d31d37:
        CRYPTO_free(pcVar11,"crypto\\x509v3\\v3_addr.c");
        param_3 = local_58;
        iVar14 = local_78 + 1;
        local_78 = iVar14;
        iVar4 = OPENSSL_sk_num(local_58);
        lVar9 = local_80;
      } while (iVar14 < iVar4);
    }
    iVar14 = 0;
    iVar4 = OPENSSL_sk_num(lVar9);
    if (0 < iVar4) {
      do {
        puVar7 = (undefined8 *)OPENSSL_sk_value(lVar9,iVar14);
        if (*(int *)puVar7[1] == 1) {
          piVar2 = (int *)*puVar7;
          if (((piVar2 == (int *)0x0) ||
              (puVar3 = *(undefined1 **)(piVar2 + 2), puVar3 == (undefined1 *)0x0)) || (*piVar2 < 2)
             ) {
            uVar13 = 0;
          }
          else {
            uVar13 = CONCAT11(*puVar3,puVar3[1]);
          }
          iVar4 = IPAddressOrRanges_canonize(*(undefined8 *)((int *)puVar7[1] + 2),uVar13);
          if (iVar4 == 0) goto LAB_143d31f89;
        }
        iVar14 = iVar14 + 1;
        iVar4 = OPENSSL_sk_num(lVar9);
      } while (iVar14 < iVar4);
    }
    OPENSSL_sk_set_cmp_func(lVar9,IPAddressFamily_cmp);
    OPENSSL_sk_sort(lVar9);
    iVar4 = X509v3_addr_is_canonical(lVar9);
    if (iVar4 == 0) {
LAB_143d31f89:
      pcVar11 = (char *)0x0;
LAB_143d31f8c:
      CRYPTO_free(pcVar11,"crypto\\x509v3\\v3_addr.c",0x41b);
      OPENSSL_sk_pop_free(local_80,FUN_143d32060);
      lVar9 = 0;
    }
  }
  return lVar9;
}



// FUNCTION 143d32010 IPAddressFamily_cmp body=77 status=ok
// SIG undefined IPAddressFamily_cmp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int IPAddressFamily_cmp(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = **(int **)*param_1;
  iVar2 = **(int **)*param_2;
  iVar3 = iVar1;
  if (iVar2 < iVar1) {
    iVar3 = iVar2;
  }
  iVar3 = _guard_xfg_dispatch_icall_nop
                    (*(void **)(*(int **)*param_1 + 2),*(void **)(*(int **)*param_2 + 2),
                     (longlong)iVar3);
  if (iVar3 == 0) {
    iVar3 = iVar1 - iVar2;
  }
  return iVar3;
}



// FUNCTION 143d32060 FUN_143d32060 body=29 status=ok
// SIG undefined FUN_143d32060(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d32060(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_145d817b0);
  return;
}



// FUNCTION 143d32080 IPAddressOrRange_cmp body=587 status=ok
// SIG undefined IPAddressOrRange_cmp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int IPAddressOrRange_cmp(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  int iVar5;
  undefined1 auStack_88 [31];
  byte abStack_69 [16];
  byte abStack_59 [17];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143d3209a;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  iVar3 = 0;
  iVar5 = 0;
  if (*param_1 == 0) {
    piVar1 = *(int **)(param_1 + 2);
    iVar3 = *piVar1;
    sVar4 = (size_t)iVar3;
    if ((-1 < iVar3) && (iVar3 <= param_3)) {
      if (0 < iVar3) {
        _guard_xfg_dispatch_icall_nop(abStack_59 + 1,*(void **)(piVar1 + 2),sVar4);
        if ((piVar1[4] & 7U) != 0) {
          abStack_59[sVar4] =
               abStack_59[sVar4] & ~(byte)(0xff >> (8U - (char)(piVar1[4] & 7U) & 0x1f));
        }
      }
      _guard_xfg_dispatch_icall_nop(abStack_59 + sVar4 + 1,0,(longlong)(param_3 - iVar3));
      iVar3 = iVar3 * 8 - (piVar1[4] & 7U);
      goto LAB_143d321a5;
    }
LAB_143d322a1:
    iVar2 = -1;
  }
  else {
    if (*param_1 == 1) {
      piVar1 = (int *)**(undefined8 **)(param_1 + 2);
      iVar3 = *piVar1;
      sVar4 = (size_t)iVar3;
      if ((iVar3 < 0) || (param_3 < iVar3)) goto LAB_143d322a1;
      if (0 < iVar3) {
        _guard_xfg_dispatch_icall_nop(abStack_59 + 1,*(void **)(piVar1 + 2),sVar4);
        if ((piVar1[4] & 7U) != 0) {
          abStack_59[sVar4] =
               abStack_59[sVar4] & ~(byte)(0xff >> (8U - (char)(piVar1[4] & 7U) & 0x1f));
        }
      }
      _guard_xfg_dispatch_icall_nop(abStack_59 + sVar4 + 1,0,(longlong)(param_3 - iVar3));
      iVar3 = param_3 * 8;
    }
LAB_143d321a5:
    if (*param_2 == 0) {
      piVar1 = *(int **)(param_2 + 2);
      iVar5 = *piVar1;
      sVar4 = (size_t)iVar5;
      if ((iVar5 < 0) || (param_3 < iVar5)) goto LAB_143d322a1;
      if (0 < iVar5) {
        _guard_xfg_dispatch_icall_nop(abStack_69 + 1,*(void **)(piVar1 + 2),sVar4);
        if ((piVar1[4] & 7U) != 0) {
          abStack_69[sVar4] =
               abStack_69[sVar4] & ~(byte)(0xff >> (8U - (char)(piVar1[4] & 7U) & 0x1f));
        }
      }
      _guard_xfg_dispatch_icall_nop(abStack_69 + sVar4 + 1,0,(longlong)(param_3 - iVar5));
      iVar5 = iVar5 * 8 - (piVar1[4] & 7U);
    }
    else if (*param_2 == 1) {
      piVar1 = (int *)**(undefined8 **)(param_2 + 2);
      iVar5 = *piVar1;
      sVar4 = (size_t)iVar5;
      if ((iVar5 < 0) || (param_3 < iVar5)) goto LAB_143d322a1;
      if (0 < iVar5) {
        _guard_xfg_dispatch_icall_nop(abStack_69 + 1,*(void **)(piVar1 + 2),sVar4);
        if ((piVar1[4] & 7U) != 0) {
          abStack_69[sVar4] =
               abStack_69[sVar4] & ~(byte)(0xff >> (8U - (char)(piVar1[4] & 7U) & 0x1f));
        }
      }
      _guard_xfg_dispatch_icall_nop(abStack_69 + sVar4 + 1,0,(longlong)(param_3 - iVar5));
      iVar5 = param_3 * 8;
    }
    iVar2 = _guard_xfg_dispatch_icall_nop(abStack_59 + 1,abStack_69 + 1,(longlong)param_3);
    if (iVar2 == 0) {
      iVar2 = iVar3 - iVar5;
    }
  }
  return iVar2;
}



// FUNCTION 143d322d0 IPAddressOrRanges_canonize body=803 status=ok
// SIG undefined IPAddressOrRanges_canonize(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 IPAddressOrRanges_canonize(undefined8 param_1,int param_2)

{
  char cVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  ulonglong _Size;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  char local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  iVar9 = 0;
  if (param_2 == 1) {
    uVar8 = 4;
  }
  else if (param_2 == 2) {
    uVar8 = 0x10;
  }
  else {
    uVar8 = 0;
  }
  OPENSSL_sk_sort();
  iVar3 = OPENSSL_sk_num(param_1);
  if (0 < iVar3 + -1) {
    _Size = (ulonglong)uVar8;
    iVar3 = 1;
    do {
      piVar5 = (int *)OPENSSL_sk_value(param_1,iVar9);
      piVar6 = (int *)OPENSSL_sk_value(param_1,iVar3);
      if (piVar5 == (int *)0x0) {
        return 0;
      }
      if (*piVar5 == 0) {
        iVar4 = addr_expand(local_50,*(undefined8 *)(piVar5 + 2),uVar8,0);
        if (iVar4 == 0) {
          return 0;
        }
        uVar7 = *(undefined8 *)(piVar5 + 2);
      }
      else {
        if (*piVar5 != 1) {
          return 0;
        }
        iVar4 = addr_expand(local_50,**(undefined8 **)(piVar5 + 2),uVar8,0);
        if (iVar4 == 0) {
          return 0;
        }
        uVar7 = *(undefined8 *)(*(longlong *)(piVar5 + 2) + 8);
      }
      iVar4 = addr_expand(local_40,uVar7,uVar8,0xff);
      if (iVar4 == 0) {
        return 0;
      }
      if (piVar6 == (int *)0x0) {
        return 0;
      }
      if (*piVar6 == 0) {
        iVar4 = addr_expand(local_70,*(undefined8 *)(piVar6 + 2),uVar8,0);
        if (iVar4 == 0) {
          return 0;
        }
        uVar7 = *(undefined8 *)(piVar6 + 2);
      }
      else {
        if (*piVar6 != 1) {
          return 0;
        }
        iVar4 = addr_expand(local_70,**(undefined8 **)(piVar6 + 2),uVar8,0);
        if (iVar4 == 0) {
          return 0;
        }
        uVar7 = *(undefined8 *)(*(longlong *)(piVar6 + 2) + 8);
      }
      iVar4 = addr_expand(local_60,uVar7,uVar8,0xff);
      if (iVar4 == 0) {
        return 0;
      }
      iVar4 = _guard_xfg_dispatch_icall_nop(local_50,local_40,_Size);
      if (0 < iVar4) {
        return 0;
      }
      iVar4 = _guard_xfg_dispatch_icall_nop(local_70,local_60,_Size);
      if (0 < iVar4) {
        return 0;
      }
      iVar4 = _guard_xfg_dispatch_icall_nop(local_40,local_70,_Size);
      uVar2 = _Size;
      if (-1 < iVar4) {
        return 0;
      }
      do {
        if ((longlong)(uVar2 - 1) < 0) break;
        cVar1 = local_70[uVar2 - 1];
        local_70[uVar2 - 1] = cVar1 + -1;
        uVar2 = uVar2 - 1;
      } while (cVar1 == '\0');
      iVar4 = _guard_xfg_dispatch_icall_nop(local_40,local_70,_Size);
      if (iVar4 == 0) {
        iVar4 = make_addressRange(&local_78,local_50,local_60);
        if (iVar4 == 0) {
          return 0;
        }
        OPENSSL_sk_set(param_1,iVar9,local_78);
        OPENSSL_sk_delete(param_1,iVar3);
        ASN1_item_free(piVar5,&DAT_145d816d0);
        ASN1_item_free(piVar6,&DAT_145d816d0);
        iVar9 = iVar9 + -1;
        iVar3 = iVar3 + -1;
      }
      iVar9 = iVar9 + 1;
      iVar3 = iVar3 + 1;
      iVar4 = OPENSSL_sk_num(param_1);
    } while (iVar9 < iVar4 + -1);
  }
  iVar9 = OPENSSL_sk_num(param_1);
  piVar5 = (int *)OPENSSL_sk_value(param_1,iVar9 + -1);
  if (((piVar5 != (int *)0x0) && (*piVar5 == 1)) &&
     ((iVar9 = addr_expand(local_60,**(undefined8 **)(piVar5 + 2),uVar8,0), iVar9 == 0 ||
      ((iVar9 = addr_expand(local_50,*(undefined8 *)(*(longlong *)(piVar5 + 2) + 8),uVar8,0xff),
       iVar9 == 0 ||
       (iVar9 = _guard_xfg_dispatch_icall_nop(local_60,local_50,(ulonglong)uVar8), 0 < iVar9)))))) {
    return 0;
  }
  return 1;
}



// FUNCTION 143d32600 X509v3_addr_add_prefix body=121 status=ok
// SIG undefined X509v3_addr_add_prefix(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509v3_addr_add_prefix(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 in_R9;
  undefined4 in_stack_00000028;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143d32610;
  lVar2 = make_prefix_or_range();
  if (lVar2 != 0) {
    iVar1 = make_addressPrefix(&local_18,in_R9,in_stack_00000028);
    if (iVar1 != 0) {
      iVar1 = OPENSSL_sk_push(lVar2,local_18);
      if (iVar1 != 0) {
        return 1;
      }
      ASN1_item_free(local_18,&DAT_145d816d0);
    }
  }
  return 0;
}



// FUNCTION 143d32680 X509v3_addr_get_afi body=43 status=ok
// SIG undefined X509v3_addr_get_afi(void)

undefined2 X509v3_addr_get_afi(undefined8 *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  
  if ((((param_1 != (undefined8 *)0x0) && (piVar1 = (int *)*param_1, piVar1 != (int *)0x0)) &&
      (puVar2 = *(undefined1 **)(piVar1 + 2), puVar2 != (undefined1 *)0x0)) && (1 < *piVar1)) {
    return CONCAT11(*puVar2,puVar2[1]);
  }
  return 0;
}



// FUNCTION 143d326b0 X509v3_addr_is_canonical body=1018 status=ok
// SIG undefined X509v3_addr_is_canonical(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 X509v3_addr_is_canonical(longlong param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int *piVar9;
  int *piVar10;
  short sVar11;
  undefined8 uVar12;
  int iVar13;
  size_t _Size;
  longlong lVar14;
  int iVar15;
  undefined1 auStack_98 [32];
  int local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  char local_50 [16];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (param_1 != 0) {
    iVar13 = 0;
    iVar5 = OPENSSL_sk_num();
    if (0 < iVar5 + -1) {
      do {
        puVar7 = (undefined8 *)OPENSSL_sk_value(param_1,iVar13);
        iVar13 = iVar13 + 1;
        puVar8 = (undefined8 *)OPENSSL_sk_value(param_1,iVar13);
        iVar5 = *(int *)*puVar7;
        iVar15 = *(int *)*puVar8;
        iVar6 = iVar5;
        if (iVar15 < iVar5) {
          iVar6 = iVar15;
        }
        iVar6 = _guard_xfg_dispatch_icall_nop
                          (*(void **)((int *)*puVar7 + 2),*(void **)((int *)*puVar8 + 2),
                           (longlong)iVar6);
        if (iVar6 == 0) {
          iVar6 = iVar5 - iVar15;
        }
        if (-1 < iVar6) {
          return 0;
        }
        iVar5 = OPENSSL_sk_num(param_1);
      } while (iVar13 < iVar5 + -1);
    }
    iVar5 = 0;
    local_78 = 0;
    iVar13 = OPENSSL_sk_num(param_1);
    if (0 < iVar13) {
      do {
        puVar7 = (undefined8 *)OPENSSL_sk_value(param_1,iVar5);
        if ((((puVar7 == (undefined8 *)0x0) || (piVar9 = (int *)*puVar7, piVar9 == (int *)0x0)) ||
            (puVar2 = *(undefined1 **)(piVar9 + 2), puVar2 == (undefined1 *)0x0)) || (*piVar9 < 2))
        {
          sVar11 = 0;
        }
        else {
          sVar11 = CONCAT11(*puVar2,puVar2[1]);
        }
        if (sVar11 == 1) {
          _Size = 4;
          lVar14 = 3;
        }
        else if (sVar11 == 2) {
          _Size = 0x10;
          lVar14 = 0xf;
        }
        else {
          _Size = 0;
          lVar14 = -1;
        }
        if (puVar7 == (undefined8 *)0x0) {
          return 0;
        }
        piVar9 = (int *)puVar7[1];
        if (piVar9 == (int *)0x0) {
          return 0;
        }
        if (*piVar9 != 0) {
          if (*piVar9 != 1) {
            return 0;
          }
          uVar3 = *(undefined8 *)(piVar9 + 2);
          iVar13 = OPENSSL_sk_num(uVar3);
          if (iVar13 == 0) {
            return 0;
          }
          iVar15 = 0;
          iVar13 = OPENSSL_sk_num(uVar3);
          if (0 < iVar13 + -1) {
            do {
              piVar9 = (int *)OPENSSL_sk_value(uVar3,iVar15);
              iVar15 = iVar15 + 1;
              piVar10 = (int *)OPENSSL_sk_value(uVar3,iVar15);
              if (piVar9 == (int *)0x0) {
                return 0;
              }
              if (*piVar9 == 0) {
                iVar5 = addr_expand(local_60,*(undefined8 *)(piVar9 + 2),_Size,0);
                if (iVar5 == 0) {
                  return 0;
                }
                uVar12 = *(undefined8 *)(piVar9 + 2);
              }
              else {
                if (*piVar9 != 1) {
                  return 0;
                }
                iVar5 = addr_expand(local_60,**(undefined8 **)(piVar9 + 2),_Size,0);
                if (iVar5 == 0) {
                  return 0;
                }
                uVar12 = *(undefined8 *)(*(longlong *)(piVar9 + 2) + 8);
              }
              iVar5 = addr_expand(local_70,uVar12,_Size,0xff);
              if (iVar5 == 0) {
                return 0;
              }
              if (piVar10 == (int *)0x0) {
                return 0;
              }
              if (*piVar10 == 0) {
                iVar5 = addr_expand(local_50,*(undefined8 *)(piVar10 + 2),_Size,0);
                if (iVar5 == 0) {
                  return 0;
                }
                uVar12 = *(undefined8 *)(piVar10 + 2);
              }
              else {
                if (*piVar10 != 1) {
                  return 0;
                }
                iVar5 = addr_expand(local_50,**(undefined8 **)(piVar10 + 2),_Size,0);
                if (iVar5 == 0) {
                  return 0;
                }
                uVar12 = *(undefined8 *)(*(longlong *)(piVar10 + 2) + 8);
              }
              iVar5 = addr_expand(local_40,uVar12,_Size,0xff);
              if (iVar5 == 0) {
                return 0;
              }
              iVar5 = _guard_xfg_dispatch_icall_nop(local_60,local_50,_Size);
              if (-1 < iVar5) {
                return 0;
              }
              iVar5 = _guard_xfg_dispatch_icall_nop(local_60,local_70,_Size);
              if (0 < iVar5) {
                return 0;
              }
              iVar5 = _guard_xfg_dispatch_icall_nop(local_50,local_40,_Size);
              lVar4 = lVar14;
              if (0 < iVar5) {
                return 0;
              }
              for (; (-1 < lVar4 &&
                     (cVar1 = local_50[lVar4], local_50[lVar4] = cVar1 + -1, cVar1 == '\0'));
                  lVar4 = lVar4 + -1) {
              }
              iVar5 = _guard_xfg_dispatch_icall_nop(local_70,local_50,_Size);
              if (-1 < iVar5) {
                return 0;
              }
              if ((*piVar9 == 1) && (iVar5 = FUN_143d33930(local_60,local_70,_Size), -1 < iVar5)) {
                return 0;
              }
              iVar13 = OPENSSL_sk_num(uVar3);
              iVar5 = local_78;
            } while (iVar15 < iVar13 + -1);
          }
          iVar13 = OPENSSL_sk_num(uVar3);
          piVar9 = (int *)OPENSSL_sk_value(uVar3,iVar13 + -1);
          if ((piVar9 != (int *)0x0) && (*piVar9 == 1)) {
            iVar13 = addr_expand(local_60,**(undefined8 **)(piVar9 + 2),_Size,0);
            if (iVar13 == 0) {
              return 0;
            }
            iVar13 = addr_expand(local_70,*(undefined8 *)(*(longlong *)(piVar9 + 2) + 8),_Size,0xff)
            ;
            if (iVar13 == 0) {
              return 0;
            }
            iVar13 = _guard_xfg_dispatch_icall_nop(local_60,local_70,_Size);
            if (0 < iVar13) {
              return 0;
            }
            iVar13 = FUN_143d33930(local_60,local_70,_Size);
            if (-1 < iVar13) {
              return 0;
            }
          }
        }
        iVar5 = iVar5 + 1;
        local_78 = iVar5;
        iVar13 = OPENSSL_sk_num(param_1);
      } while (iVar5 < iVar13);
    }
  }
  return 1;
}



// FUNCTION 143d32ab0 X509v3_addr_validate_path body=87 status=ok
// SIG undefined X509v3_addr_validate_path(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509v3_addr_validate_path(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x98) != 0) {
    iVar1 = OPENSSL_sk_num();
    if ((iVar1 != 0) && (*(longlong *)(param_1 + 0x38) != 0)) {
      uVar2 = addr_validate_path_internal(param_1,*(undefined8 *)(param_1 + 0x98),0);
      return uVar2;
    }
  }
  *(undefined4 *)(param_1 + 0xb0) = 1;
  return 0;
}



// FUNCTION 143d32b10 addr_contains body=498 status=ok
// SIG undefined addr_contains(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 addr_contains(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x143d32b26;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if ((param_2 != 0) && (param_1 != param_2)) {
    if (param_1 == 0) {
      return 0;
    }
    iVar4 = 0;
    iVar5 = 0;
    iVar1 = OPENSSL_sk_num(param_2);
    if (0 < iVar1) {
      do {
        piVar2 = (int *)OPENSSL_sk_value(param_2,iVar5);
        if (piVar2 == (int *)0x0) {
          return 0xffffffff;
        }
        if (*piVar2 == 0) {
          iVar1 = addr_expand(local_58,*(undefined8 *)(piVar2 + 2),param_3,0);
          if (iVar1 == 0) {
            return 0xffffffff;
          }
          uVar3 = *(undefined8 *)(piVar2 + 2);
        }
        else {
          if (*piVar2 != 1) {
            return 0xffffffff;
          }
          iVar1 = addr_expand(local_58,**(undefined8 **)(piVar2 + 2),param_3,0);
          if (iVar1 == 0) {
            return 0xffffffff;
          }
          uVar3 = *(undefined8 *)(*(longlong *)(piVar2 + 2) + 8);
        }
        iVar1 = addr_expand(local_78,uVar3,param_3,0xff);
        if (iVar1 == 0) {
          return 0xffffffff;
        }
        while( true ) {
          iVar1 = OPENSSL_sk_num(param_1);
          if (iVar1 <= iVar4) {
            return 0;
          }
          piVar2 = (int *)OPENSSL_sk_value(param_1,iVar4);
          if (piVar2 == (int *)0x0) {
            return 0;
          }
          if (*piVar2 == 0) {
            iVar1 = addr_expand(local_48,*(undefined8 *)(piVar2 + 2),param_3,0);
            if (iVar1 == 0) {
              return 0;
            }
            uVar3 = *(undefined8 *)(piVar2 + 2);
          }
          else {
            if (*piVar2 != 1) {
              return 0;
            }
            iVar1 = addr_expand(local_48,**(undefined8 **)(piVar2 + 2),param_3,0);
            if (iVar1 == 0) {
              return 0;
            }
            uVar3 = *(undefined8 *)(*(longlong *)(piVar2 + 2) + 8);
          }
          iVar1 = addr_expand(local_68,uVar3,param_3,0xff);
          if (iVar1 == 0) {
            return 0;
          }
          iVar1 = _guard_xfg_dispatch_icall_nop(local_68,local_78,(longlong)param_3);
          if (-1 < iVar1) break;
          iVar4 = iVar4 + 1;
        }
        iVar1 = _guard_xfg_dispatch_icall_nop(local_48,local_58,(longlong)param_3);
        if (0 < iVar1) {
          return 0;
        }
        iVar5 = iVar5 + 1;
        iVar1 = OPENSSL_sk_num(param_2);
      } while (iVar5 < iVar1);
    }
  }
  return 1;
}



// FUNCTION 143d32d10 addr_expand body=177 status=ok
// SIG undefined addr_expand(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 addr_expand(void *param_1,int *param_2,int param_3,byte param_4)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte bVar5;
  
  iVar2 = *param_2;
  if ((iVar2 < 0) || (param_3 < iVar2)) {
    uVar4 = 0;
  }
  else {
    if (0 < iVar2) {
      _guard_xfg_dispatch_icall_nop(param_1,*(void **)(param_2 + 2),(longlong)iVar2);
      if ((param_2[4] & 7U) != 0) {
        lVar3 = (longlong)*param_2;
        bVar1 = *(byte *)(lVar3 + -1 + (longlong)param_1);
        bVar5 = (byte)(0xff >> (8U - (char)(param_2[4] & 7U) & 0x1f));
        if (param_4 == 0) {
          *(byte *)((longlong)param_1 + lVar3 + -1) = ~bVar5 & bVar1;
        }
        else {
          *(byte *)((longlong)param_1 + lVar3 + -1) = bVar1 | bVar5;
        }
      }
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)param_1 + (longlong)*param_2),(uint)param_4,
               (longlong)(param_3 - *param_2));
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 143d32dd0 addr_validate_path_internal body=1131 status=ok
// SIG undefined addr_validate_path_internal(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int addr_validate_path_internal(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  int local_res20;
  
  lVar5 = 0;
  iVar9 = 1;
  if ((param_2 == 0) || (iVar3 = OPENSSL_sk_num(param_2), iVar3 < 1)) {
LAB_143d33223:
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0xb0) = 1;
    }
    return 0;
  }
  if (param_1 == 0) {
    if (param_3 == 0) {
      return 0;
    }
  }
  else if (*(longlong *)(param_1 + 0x38) == 0) goto LAB_143d33223;
  if (param_3 == 0) {
    local_res20 = 0;
    lVar6 = OPENSSL_sk_value(param_2,0);
    param_3 = *(longlong *)(lVar6 + 0x110);
    if (param_3 == 0) goto LAB_143d33201;
  }
  else {
    local_res20 = -1;
    lVar6 = 0;
  }
  iVar3 = X509v3_addr_is_canonical(param_3);
  if (iVar3 == 0) {
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0x29;
      *(int *)(param_1 + 0xac) = local_res20;
      *(longlong *)(param_1 + 0xb8) = lVar6;
      iVar9 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar9 == 0) goto LAB_143d33201;
      goto LAB_143d32ea4;
    }
  }
  else {
LAB_143d32ea4:
    OPENSSL_sk_set_cmp_func(param_3,IPAddressFamily_cmp);
    lVar5 = OPENSSL_sk_dup(param_3);
    if (lVar5 != 0) {
      local_res20 = local_res20 + 1;
      iVar3 = OPENSSL_sk_num(param_2);
      if (local_res20 < iVar3) {
        do {
          lVar6 = OPENSSL_sk_value(param_2,local_res20);
          iVar3 = X509v3_addr_is_canonical(*(undefined8 *)(lVar6 + 0x110));
          if (iVar3 == 0) {
            if (param_1 == 0) goto LAB_143d331fa;
            *(undefined4 *)(param_1 + 0xb0) = 0x29;
            *(int *)(param_1 + 0xac) = local_res20;
            *(longlong *)(param_1 + 0xb8) = lVar6;
            iVar9 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (iVar9 == 0) goto LAB_143d33201;
          }
          if (*(longlong *)(lVar6 + 0x110) == 0) {
            iVar10 = 0;
            iVar3 = OPENSSL_sk_num(lVar5);
            if (0 < iVar3) {
LAB_143d32f90:
              lVar7 = OPENSSL_sk_value(lVar5,iVar10);
              if (**(int **)(lVar7 + 8) == 0) goto code_r0x000143d32fa3;
              if (param_1 != 0) {
                *(undefined4 *)(param_1 + 0xb0) = 0x2e;
                *(int *)(param_1 + 0xac) = local_res20;
                *(longlong *)(param_1 + 0xb8) = lVar6;
                iVar9 = (**(code **)(param_1 + 0x38))(0,param_1);
joined_r0x000143d33085:
                if (iVar9 == 0) goto LAB_143d33201;
                goto LAB_143d33093;
              }
              goto LAB_143d331fa;
            }
          }
          else {
            OPENSSL_sk_set_cmp_func(*(longlong *)(lVar6 + 0x110),IPAddressFamily_cmp);
            iVar10 = 0;
            iVar3 = OPENSSL_sk_num(lVar5);
            if (0 < iVar3) {
              do {
                lVar7 = OPENSSL_sk_value(lVar5,iVar10);
                uVar4 = OPENSSL_sk_find(*(undefined8 *)(lVar6 + 0x110),lVar7);
                lVar8 = OPENSSL_sk_value(*(undefined8 *)(lVar6 + 0x110),uVar4);
                if (lVar8 == 0) {
                  if (**(int **)(lVar7 + 8) == 1) {
                    if (param_1 == 0) goto LAB_143d331fa;
                    *(undefined4 *)(param_1 + 0xb0) = 0x2e;
                    *(int *)(param_1 + 0xac) = local_res20;
                    *(longlong *)(param_1 + 0xb8) = lVar6;
                    iVar9 = (**(code **)(param_1 + 0x38))(0,param_1);
                    goto joined_r0x000143d33085;
                  }
                }
                else {
                  piVar1 = *(int **)(lVar8 + 8);
                  if (*piVar1 == 1) {
                    piVar2 = *(int **)(lVar7 + 8);
                    if (*piVar2 != 0) {
                      iVar3 = X509v3_addr_get_afi(lVar7);
                      if (iVar3 == 1) {
                        uVar11 = 4;
                      }
                      else if (iVar3 == 2) {
                        uVar11 = 0x10;
                      }
                      else {
                        uVar11 = 0;
                      }
                      iVar3 = addr_contains(*(undefined8 *)(piVar1 + 2),*(undefined8 *)(piVar2 + 2),
                                            uVar11);
                      if (iVar3 == 0) {
                        if (param_1 != 0) {
                          *(int *)(param_1 + 0xac) = local_res20;
                          *(undefined4 *)(param_1 + 0xb0) = 0x2e;
                          *(longlong *)(param_1 + 0xb8) = lVar6;
                          iVar9 = (**(code **)(param_1 + 0x38))(0,param_1);
                          if (iVar9 != 0) goto LAB_143d331e1;
                          goto LAB_143d33201;
                        }
                        goto LAB_143d331fa;
                      }
                    }
                    OPENSSL_sk_set(lVar5,iVar10);
                  }
                }
LAB_143d331e1:
                iVar10 = iVar10 + 1;
                iVar3 = OPENSSL_sk_num(lVar5);
              } while (iVar10 < iVar3);
            }
          }
LAB_143d33093:
          local_res20 = local_res20 + 1;
          iVar3 = OPENSSL_sk_num(param_2);
        } while (local_res20 < iVar3);
      }
      if (*(longlong *)(lVar6 + 0x110) != 0) {
        iVar10 = 0;
        iVar3 = OPENSSL_sk_num();
        if (0 < iVar3) {
          do {
            lVar7 = OPENSSL_sk_value(*(undefined8 *)(lVar6 + 0x110),iVar10);
            if ((**(int **)(lVar7 + 8) == 0) && (iVar3 = OPENSSL_sk_find(lVar5,lVar7), -1 < iVar3))
            {
              if (param_1 == 0) goto LAB_143d331fa;
              *(undefined4 *)(param_1 + 0xb0) = 0x2e;
              *(int *)(param_1 + 0xac) = local_res20;
              *(longlong *)(param_1 + 0xb8) = lVar6;
              iVar9 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar9 == 0) break;
            }
            iVar10 = iVar10 + 1;
            iVar3 = OPENSSL_sk_num(*(undefined8 *)(lVar6 + 0x110));
          } while (iVar10 < iVar3);
        }
      }
      goto LAB_143d33201;
    }
    ERR_put_error(0x22,0xa6,0x41,"crypto\\x509v3\\v3_addr.c",0x4bc);
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0x11;
    }
  }
  iVar9 = 0;
LAB_143d33201:
  OPENSSL_sk_free(lVar5);
  return iVar9;
code_r0x000143d32fa3:
  iVar10 = iVar10 + 1;
  iVar3 = OPENSSL_sk_num(lVar5);
  if (iVar3 <= iVar10) goto LAB_143d33093;
  goto LAB_143d32f90;
LAB_143d331fa:
  iVar9 = 0;
  goto LAB_143d33201;
}



// FUNCTION 143d33240 i2r_address body=443 status=ok
// SIG undefined i2r_address(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 i2r_address(undefined8 param_1,int param_2,undefined1 param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined1 auStack_78 [32];
  uint local_58;
  uint local_50;
  char acStack_4a [18];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x143d33251;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  if (*param_4 < 0) {
    return 0;
  }
  if (param_2 == 1) {
    iVar2 = addr_expand(acStack_4a + 2,param_4,4,param_3);
    if (iVar2 != 0) {
      local_50 = (uint)(byte)acStack_4a[5];
      local_58 = (uint)(byte)acStack_4a[4];
      BIO_printf(param_1,"%d.%d.%d.%d",acStack_4a[2],acStack_4a[3]);
      return 1;
    }
    return 0;
  }
  if (param_2 != 2) {
    iVar2 = 0;
    if (0 < *param_4) {
      lVar1 = 0;
      do {
        puVar4 = (undefined2 *)&DAT_143f3f584;
        if (0 < iVar2) {
          puVar4 = &DAT_145cc3708;
        }
        BIO_printf(param_1,"%s%02x",puVar4,*(undefined1 *)(lVar1 + *(longlong *)(param_4 + 2)));
        iVar2 = iVar2 + 1;
        lVar1 = lVar1 + 1;
      } while (iVar2 < *param_4);
    }
    BIO_printf(param_1,&DAT_145d81920,param_4[4] & 7);
    return 1;
  }
  iVar3 = 0x10;
  iVar2 = addr_expand(acStack_4a + 2,param_4,0x10,param_3);
  if (iVar2 == 0) {
    return 0;
  }
  lVar1 = 0x10;
  do {
    if ((acStack_4a[lVar1 + 1] != '\0') || (acStack_4a[lVar1] != '\0')) break;
    iVar3 = iVar3 + -2;
    lVar1 = lVar1 + -2;
  } while (1 < lVar1);
  iVar2 = 0;
  if (0 < (longlong)iVar3) {
    lVar1 = 0;
    do {
      puVar4 = (undefined2 *)&DAT_143f3f584;
      if (iVar2 < 0xe) {
        puVar4 = &DAT_145cc3708;
      }
      BIO_printf(param_1,&DAT_145d81910,CONCAT11(acStack_4a[lVar1 + 2],acStack_4a[lVar1 + 3]),puVar4
                );
      iVar2 = iVar2 + 2;
      lVar1 = lVar1 + 2;
    } while (lVar1 < iVar3);
    if (0xf < iVar2) goto LAB_143d3337e;
  }
  BIO_puts(param_1,&DAT_145cc3708);
LAB_143d3337e:
  if (iVar2 != 0) {
    return 1;
  }
  BIO_puts(param_1,&DAT_145cc3708);
  return 1;
}



// FUNCTION 143d33400 make_IPAddressFamily body=288 status=ok
// SIG undefined make_IPAddressFamily(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * make_IPAddressFamily(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  undefined1 local_res10;
  undefined1 local_res11;
  undefined1 local_res12;
  
  local_res11 = (undefined1)param_2;
  local_res10 = (undefined1)((ulonglong)param_2 >> 8);
  if (param_3 != (undefined1 *)0x0) {
    local_res12 = *param_3;
  }
  iVar4 = 0;
  uVar5 = (param_3 != (undefined1 *)0x0) + 2;
  iVar1 = OPENSSL_sk_num();
  if (0 < iVar1) {
    do {
      plVar2 = (longlong *)OPENSSL_sk_value(param_1,iVar4);
      if ((*(uint *)*plVar2 == uVar5) &&
         (iVar1 = _guard_xfg_dispatch_icall_nop
                            (*(void **)((uint *)*plVar2 + 2),&local_res10,(ulonglong)uVar5),
         iVar1 == 0)) {
        return plVar2;
      }
      iVar4 = iVar4 + 1;
      iVar1 = OPENSSL_sk_num(param_1);
    } while (iVar4 < iVar1);
  }
  plVar2 = (longlong *)ASN1_item_new(&DAT_145d817b0);
  if (plVar2 != (longlong *)0x0) {
    if (plVar2[1] == 0) {
      lVar3 = ASN1_item_new(&DAT_145d81740);
      plVar2[1] = lVar3;
      if (lVar3 == 0) goto LAB_143d334fa;
    }
    lVar3 = *plVar2;
    if (lVar3 == 0) {
      lVar3 = ASN1_OCTET_STRING_new();
      *plVar2 = lVar3;
      if (lVar3 == 0) goto LAB_143d334fa;
    }
    iVar1 = ASN1_OCTET_STRING_set(lVar3,&local_res10,uVar5);
    if ((iVar1 != 0) && (iVar1 = OPENSSL_sk_push(param_1,plVar2), iVar1 != 0)) {
      return plVar2;
    }
  }
LAB_143d334fa:
  ASN1_item_free(plVar2,&DAT_145d817b0);
  return (longlong *)0x0;
}



// FUNCTION 143d33520 make_addressPrefix body=253 status=ok
// SIG undefined make_addressPrefix(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 make_addressPrefix(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  iVar2 = (int)(param_3 + 7 + ((int)(param_3 + 7) >> 0x1f & 7U)) >> 3;
  param_3 = param_3 & 0x80000007;
  if ((int)param_3 < 0) {
    param_3 = (param_3 - 1 | 0xfffffff8) + 1;
  }
  puVar4 = (undefined4 *)ASN1_item_new(&DAT_145d816d0);
  if (puVar4 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar4 = 0;
  lVar5 = *(longlong *)(puVar4 + 2);
  if (lVar5 == 0) {
    lVar5 = ASN1_BIT_STRING_new();
    *(longlong *)(puVar4 + 2) = lVar5;
    if (lVar5 == 0) goto LAB_143d335ae;
  }
  iVar3 = ASN1_OCTET_STRING_set(lVar5,param_2,iVar2);
  if (iVar3 != 0) {
    *(uint *)(*(longlong *)(puVar4 + 2) + 0x10) =
         *(uint *)(*(longlong *)(puVar4 + 2) + 0x10) & 0xfffffff8;
    *(uint *)(*(longlong *)(puVar4 + 2) + 0x10) = *(uint *)(*(longlong *)(puVar4 + 2) + 0x10) | 8;
    if (0 < (int)param_3) {
      pbVar1 = (byte *)(*(longlong *)(*(longlong *)(puVar4 + 2) + 8) + -1 + (longlong)iVar2);
      *pbVar1 = *pbVar1 & ~(byte)(0xff >> ((byte)param_3 & 0x1f));
      *(uint *)(*(longlong *)(puVar4 + 2) + 0x10) =
           *(uint *)(*(longlong *)(puVar4 + 2) + 0x10) | 8 - param_3;
    }
    *param_1 = puVar4;
    return 1;
  }
LAB_143d335ae:
  ASN1_item_free(puVar4,&DAT_145d816d0);
  return 0;
}



// FUNCTION 143d33620 make_addressRange body=577 status=ok
// SIG undefined make_addressRange(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
make_addressRange(undefined8 *param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  uVar10 = (uint)param_4;
  uVar11 = (ulonglong)(int)uVar10;
  iVar3 = FUN_143d33930(param_2,param_3,param_4 & 0xffffffff,param_4,0x143d33632);
  if (-1 < iVar3) {
    uVar4 = make_addressPrefix(param_1,param_2,iVar3);
    return uVar4;
  }
  puVar5 = (undefined4 *)ASN1_item_new(&DAT_145d816d0);
  if (puVar5 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar5 = 1;
  plVar6 = (longlong *)ASN1_item_new(&DAT_145d81660);
  *(longlong **)(puVar5 + 2) = plVar6;
  if (plVar6 != (longlong *)0x0) {
    if (*plVar6 == 0) {
      lVar7 = ASN1_BIT_STRING_new();
      **(longlong **)(puVar5 + 2) = lVar7;
      if (lVar7 == 0) goto LAB_143d33830;
    }
    if (*(longlong *)(*(longlong *)(puVar5 + 2) + 8) == 0) {
      lVar7 = ASN1_BIT_STRING_new();
      *(longlong *)(*(longlong *)(puVar5 + 2) + 8) = lVar7;
      if (lVar7 == 0) goto LAB_143d33830;
    }
    param_4 = param_4 & 0xffffffff;
    uVar8 = uVar11;
    uVar9 = uVar10;
    if (0 < (int)uVar10) {
      do {
        uVar9 = (uint)param_4;
        if (*(char *)(param_2 + -1 + uVar8) != '\0') break;
        uVar9 = uVar9 - 1;
        param_4 = (ulonglong)uVar9;
        uVar8 = uVar8 - 1;
      } while (0 < (longlong)uVar8);
    }
    iVar3 = ASN1_OCTET_STRING_set(**(undefined8 **)(puVar5 + 2),param_2,uVar9);
    if (iVar3 != 0) {
      *(uint *)(**(longlong **)(puVar5 + 2) + 0x10) =
           *(uint *)(**(longlong **)(puVar5 + 2) + 0x10) & 0xfffffff8;
      *(uint *)(**(longlong **)(puVar5 + 2) + 0x10) =
           *(uint *)(**(longlong **)(puVar5 + 2) + 0x10) | 8;
      if (0 < (int)uVar9) {
        iVar3 = 1;
        bVar2 = *(byte *)((longlong)(int)uVar9 + -1 + param_2);
        if ((bVar2 & 0x7f) != 0) {
          do {
            iVar3 = iVar3 + 1;
          } while (((uint)bVar2 & 0xffU >> ((byte)iVar3 & 0x1f)) != 0);
        }
        *(uint *)(**(longlong **)(puVar5 + 2) + 0x10) =
             *(uint *)(**(longlong **)(puVar5 + 2) + 0x10) | 8U - iVar3;
      }
      uVar8 = uVar11;
      if (0 < (int)uVar10) {
        do {
          uVar10 = (uint)uVar8;
          if (*(char *)(param_3 + -1 + uVar11) != -1) break;
          uVar10 = uVar10 - 1;
          uVar8 = (ulonglong)uVar10;
          uVar11 = uVar11 - 1;
        } while (0 < (longlong)uVar11);
      }
      iVar3 = ASN1_OCTET_STRING_set(*(undefined8 *)(*(longlong *)(puVar5 + 2) + 8),param_3,uVar10);
      if (iVar3 != 0) {
        puVar1 = (uint *)(*(longlong *)(*(longlong *)(puVar5 + 2) + 8) + 0x10);
        *puVar1 = *puVar1 & 0xfffffff8;
        puVar1 = (uint *)(*(longlong *)(*(longlong *)(puVar5 + 2) + 8) + 0x10);
        *puVar1 = *puVar1 | 8;
        if (0 < (int)uVar10) {
          iVar3 = 1;
          bVar2 = *(byte *)((longlong)(int)uVar10 + -1 + param_3);
          if ((bVar2 & 0x7f) != 0x7f) {
            do {
              iVar3 = iVar3 + 1;
              uVar10 = 0xff >> ((byte)iVar3 & 0x1f);
            } while ((bVar2 & uVar10) != uVar10);
          }
          puVar1 = (uint *)(*(longlong *)(*(longlong *)(puVar5 + 2) + 8) + 0x10);
          *puVar1 = *puVar1 | 8U - iVar3;
        }
        *param_1 = puVar5;
        return 1;
      }
    }
  }
LAB_143d33830:
  ASN1_item_free(puVar5,&DAT_145d816d0);
  return 0;
}



// FUNCTION 143d33870 make_prefix_or_range body=177 status=ok
// SIG undefined make_prefix_or_range(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong make_prefix_or_range(undefined8 param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  
  lVar2 = make_IPAddressFamily();
  if (((lVar2 == 0) || (piVar1 = *(int **)(lVar2 + 8), piVar1 == (int *)0x0)) ||
     ((*piVar1 == 0 && (*(longlong *)(piVar1 + 2) != 0)))) {
    return 0;
  }
  if ((*piVar1 == 1) && (*(longlong *)(piVar1 + 2) != 0)) {
    return *(longlong *)(piVar1 + 2);
  }
  lVar3 = OPENSSL_sk_new_null();
  if (lVar3 == 0) {
    return 0;
  }
  if (param_2 == 1) {
    pcVar4 = v4IPAddressOrRange_cmp;
  }
  else {
    if (param_2 != 2) goto LAB_143d338ea;
    pcVar4 = v6IPAddressOrRange_cmp;
  }
  OPENSSL_sk_set_cmp_func(lVar3,pcVar4);
LAB_143d338ea:
  **(undefined4 **)(lVar2 + 8) = 1;
  *(longlong *)(*(longlong *)(lVar2 + 8) + 8) = lVar3;
  return lVar3;
}



// FUNCTION 143d33930 FUN_143d33930 body=312 status=ok
// SIG undefined FUN_143d33930(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_143d33930(void *param_1,char *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  
  iVar2 = _guard_xfg_dispatch_icall_nop(param_1,param_2,(longlong)param_3);
  if (0 < iVar2) {
    iVar2 = 0;
    if (0 < param_3) {
      pcVar4 = param_2;
      do {
        if (pcVar4[(longlong)param_1 - (longlong)param_2] != *pcVar4) break;
        pcVar4 = pcVar4 + 1;
        iVar2 = iVar2 + 1;
      } while ((longlong)pcVar4 - (longlong)param_2 < (longlong)param_3);
    }
    param_3 = param_3 + -1;
    if (-1 < param_3) {
      pcVar4 = param_2 + param_3;
      do {
        if ((pcVar4[(longlong)param_1 - (longlong)param_2] != '\0') || (*pcVar4 != -1)) break;
        param_3 = param_3 + -1;
        pcVar4 = pcVar4 + -1;
      } while (-1 < (longlong)pcVar4 - (longlong)param_2);
    }
    if (param_3 <= iVar2) {
      if (param_3 < iVar2) {
        return iVar2 * 8;
      }
      bVar1 = *(byte *)((longlong)iVar2 + (longlong)param_1);
      bVar5 = param_2[iVar2] ^ bVar1;
      switch(bVar5) {
      case 1:
        iVar3 = 7;
        break;
      default:
        goto LAB_143d33a53;
      case 3:
        iVar3 = 6;
        break;
      case 7:
        iVar3 = 5;
        break;
      case 0xf:
        iVar3 = 4;
        break;
      case 0x1f:
        iVar3 = 3;
        break;
      case 0x3f:
        iVar3 = 2;
        break;
      case 0x7f:
        iVar3 = 1;
      }
      if (((bVar5 & bVar1) == 0) && ((param_2[iVar2] & bVar5) == bVar5)) {
        return iVar3 + iVar2 * 8;
      }
    }
  }
LAB_143d33a53:
  return -1;
}



// FUNCTION 143d33b10 v4IPAddressOrRange_cmp body=32 status=ok
// SIG undefined v4IPAddressOrRange_cmp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void v4IPAddressOrRange_cmp(undefined8 *param_1,undefined8 *param_2)

{
  IPAddressOrRange_cmp(*param_1,*param_2,4);
  return;
}



// FUNCTION 143d33b30 v6IPAddressOrRange_cmp body=32 status=ok
// SIG undefined v6IPAddressOrRange_cmp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void v6IPAddressOrRange_cmp(undefined8 *param_1,undefined8 *param_2)

{
  IPAddressOrRange_cmp(*param_1,*param_2,0x10);
  return;
}



// FUNCTION 143d33b50 X509_ALGOR_it body=8 status=ok
// SIG undefined X509_ALGOR_it(void)

undefined * X509_ALGOR_it(void)

{
  return &DAT_145d81a90;
}



// FUNCTION 143d33b60 X509_ALGOR_cmp body=86 status=ok
// SIG undefined X509_ALGOR_cmp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_ALGOR_cmp(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = OBJ_cmp(*param_1,*param_2);
  if (iVar1 == 0) {
    if ((param_1[1] == 0) && (param_2[1] == 0)) {
      return;
    }
    ASN1_TYPE_cmp(param_1[1],param_2[1]);
  }
  return;
}



// FUNCTION 143d33bc0 X509_ALGOR_free body=29 status=ok
// SIG undefined X509_ALGOR_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_ALGOR_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_145d81a90);
  return;
}



// FUNCTION 143d33be0 X509_ALGOR_get0 body=53 status=ok
// SIG undefined X509_ALGOR_get0(void)

void X509_ALGOR_get0(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4
                    )

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = *param_4;
  }
  if (param_2 != (undefined4 *)0x0) {
    if ((undefined4 *)param_4[1] == (undefined4 *)0x0) {
      *param_2 = 0xffffffff;
      return;
    }
    *param_2 = *(undefined4 *)param_4[1];
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *(undefined8 *)(param_4[1] + 8);
    }
  }
  return;
}



// FUNCTION 143d33c20 X509_ALGOR_new body=29 status=ok
// SIG undefined X509_ALGOR_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_ALGOR_new(void)

{
  ASN1_item_new(&DAT_145d81a90);
  return;
}



// FUNCTION 143d33c40 X509_ALGOR_set0 body=157 status=ok
// SIG undefined X509_ALGOR_set0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 X509_ALGOR_set0(undefined8 *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_1 == (undefined8 *)0x0) {
LAB_143d33cc6:
    uVar1 = 0;
  }
  else {
    if ((param_3 != -1) && (param_1[1] == 0)) {
      lVar2 = ASN1_TYPE_new();
      param_1[1] = lVar2;
      if (lVar2 == 0) goto LAB_143d33cc6;
    }
    ASN1_OBJECT_free(*param_1);
    *param_1 = param_2;
    if (param_3 != 0) {
      if (param_3 == -1) {
        ASN1_TYPE_free();
        param_1[1] = 0;
        return 1;
      }
      ASN1_TYPE_set(param_1[1],param_3,param_4);
    }
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 143d33ce0 X509_ALGOR_set_md body=166 status=ok
// SIG undefined X509_ALGOR_set_md(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_ALGOR_set_md(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_2 + 0xc) & 8;
  uVar4 = 0xffffffff;
  if (uVar5 == 0) {
    uVar4 = 5;
  }
  uVar1 = FRollingHash::GetWindowSize(param_2);
  uVar2 = OBJ_nid2obj(uVar1);
  if (param_1 != (undefined8 *)0x0) {
    if ((uVar5 == 0) && (param_1[1] == 0)) {
      lVar3 = ASN1_TYPE_new();
      param_1[1] = lVar3;
      if (lVar3 == 0) {
        return;
      }
    }
    ASN1_OBJECT_free(*param_1);
    *param_1 = uVar2;
    if (uVar5 == 0) {
      ASN1_TYPE_set(param_1[1],uVar4,0);
    }
    else {
      ASN1_TYPE_free();
      param_1[1] = 0;
    }
  }
  return;
}



// FUNCTION 143d33d90 X509_ALGOR_free body=29 status=ok
// SIG undefined X509_ALGOR_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_ALGOR_free(void)

{
  ASN1_item_d2i();
  return;
}



// FUNCTION 143d33db0 FUN_143d33db0 body=29 status=ok
// SIG undefined FUN_143d33db0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d33db0(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_145d81a90);
  return;
}



// FUNCTION 143d33dd0 FUN_143d33dd0 body=25 status=ok
// SIG undefined FUN_143d33dd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d33dd0(undefined8 param_1,undefined8 param_2)

{
  FUN_143d33e30(param_1,param_2,0);
  return;
}



// FUNCTION 143d33df0 ASN1_item_new body=55 status=ok
// SIG undefined ASN1_item_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASN1_item_new(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = 0;
  iVar1 = FUN_143d33e30(local_res10,param_1,0);
  uVar2 = 0;
  if (0 < iVar1) {
    uVar2 = local_res10[0];
  }
  return uVar2;
}



// FUNCTION 143d33e30 FUN_143d33e30 body=670 status=ok
// SIG undefined FUN_143d33e30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_143d33e30(longlong *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  code *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  
  uVar7 = 0x143d33e49;
  pcVar5 = (code *)0x0;
  lVar3 = *(longlong *)(param_2 + 0x18);
  if ((lVar3 == 0) || (pcVar6 = *(code **)(lVar3 + 0x18), *(code **)(lVar3 + 0x18) == (code *)0x0))
  {
    pcVar6 = pcVar5;
  }
  switch(*param_2) {
  case 0:
    if (*(longlong *)(param_2 + 8) == 0) goto LAB_143d33ebf;
    iVar1 = asn1_template_new();
    break;
  case 1:
  case 6:
    if (pcVar6 != (code *)0x0) {
      iVar1 = (*pcVar6)(0,param_1,param_2,0);
      if (iVar1 == 0) goto LAB_143d34094;
      if (iVar1 == 2) {
        return 1;
      }
    }
    if (param_3 == 0) {
      lVar3 = CRYPTO_zalloc((longlong)*(int *)(param_2 + 0x20),"crypto\\asn1\\tasn_new.c",0x7a);
      *param_1 = lVar3;
      if (lVar3 == 0) goto LAB_143d34005;
    }
    else {
      _guard_xfg_dispatch_icall_nop((void *)*param_1,0,(longlong)*(int *)(param_2 + 0x20));
    }
    iVar1 = asn1_do_lock(param_1,0,param_2);
    if (iVar1 < 0) {
      if (param_3 == 0) {
        CRYPTO_free(*param_1,"crypto\\asn1\\tasn_new.c",0x81);
        *param_1 = 0;
      }
      goto LAB_143d34005;
    }
    FUN_143d6cc60(param_1,param_2);
    lVar3 = *(longlong *)(param_2 + 8);
    if (0 < *(int *)(param_2 + 0x10)) {
      do {
        uVar2 = FUN_143d6ce50(param_1,lVar3);
        iVar1 = asn1_template_new(uVar2,lVar3);
        if (iVar1 == 0) {
          FUN_143d1a780(param_1,param_2,param_3);
          goto LAB_143d34005;
        }
        lVar3 = lVar3 + 0x20;
        uVar4 = (int)pcVar5 + 1;
        pcVar5 = (code *)(ulonglong)uVar4;
      } while ((int)uVar4 < *(int *)(param_2 + 0x10));
    }
    if (pcVar6 == (code *)0x0) {
      return 1;
    }
    iVar1 = (*pcVar6)(1,param_1,param_2);
    goto joined_r0x000143d33f76;
  case 2:
    if (pcVar6 != (code *)0x0) {
      iVar1 = (*pcVar6)(0,param_1,param_2,0);
      if (iVar1 == 0) goto LAB_143d34094;
      if (iVar1 == 2) {
        return 1;
      }
    }
    if (param_3 == 0) {
      lVar3 = CRYPTO_zalloc((longlong)*(int *)(param_2 + 0x20),"crypto\\asn1\\tasn_new.c",0x61);
      *param_1 = lVar3;
      if (lVar3 == 0) goto LAB_143d34005;
    }
    else {
      _guard_xfg_dispatch_icall_nop((void *)*param_1,0,(longlong)*(int *)(param_2 + 0x20));
    }
    FUN_143d6ce60(param_1,0xffffffff,param_2);
    if (pcVar6 == (code *)0x0) {
      return 1;
    }
    iVar1 = (*pcVar6)(1,param_1,param_2);
joined_r0x000143d33f76:
    if (iVar1 != 0) {
      return 1;
    }
    FUN_143d1a780(param_1,param_2,param_3);
LAB_143d34094:
    ERR_put_error(0xd,0x79,100,"crypto\\asn1\\tasn_new.c",0xa1);
    return 0;
  default:
    goto LAB_143d33ed1;
  case 4:
    if (lVar3 == 0) {
      return 1;
    }
    if (*(code **)(lVar3 + 8) == (code *)0x0) {
      return 1;
    }
    iVar1 = (**(code **)(lVar3 + 8))(param_1,param_2);
    break;
  case 5:
LAB_143d33ebf:
    iVar1 = asn1_primitive_new(param_1,param_2,param_3);
  }
  if (iVar1 == 0) {
LAB_143d34005:
    ERR_put_error(0xd,0x79,0x41,"crypto\\asn1\\tasn_new.c",0x98,uVar7);
    return 0;
  }
LAB_143d33ed1:
  return 1;
}



// FUNCTION 143d340f0 asn1_primitive_clear body=76 status=ok
// SIG undefined asn1_primitive_clear(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void asn1_primitive_clear(undefined8 *param_1,char *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_2 != (char *)0x0) {
    if (*(longlong *)(param_2 + 0x18) == 0) {
      if ((*param_2 != '\x05') && (*(int *)(param_2 + 4) == 1)) {
        *(undefined4 *)param_1 = *(undefined4 *)(param_2 + 0x20);
        return;
      }
    }
    else {
      UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 0x18) + 0x20);
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d34118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
    }
  }
  *param_1 = 0;
  return;
}



// FUNCTION 143d34140 asn1_primitive_new body=402 status=ok
// SIG undefined asn1_primitive_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 asn1_primitive_new(longlong *param_1,char *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  lVar4 = *(longlong *)(param_2 + 0x18);
  if (lVar4 != 0) {
    if (param_3 == 0) {
      if (*(code **)(lVar4 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d341a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(lVar4 + 0x10))();
        return uVar2;
      }
    }
    else if (*(code **)(lVar4 + 0x20) != (code *)0x0) {
      (**(code **)(lVar4 + 0x20))();
      return 1;
    }
  }
  if (*param_2 == '\x05') {
    iVar1 = -1;
  }
  else {
    iVar1 = *(int *)(param_2 + 4);
    if (iVar1 == -4) {
      puVar5 = (undefined4 *)CRYPTO_malloc(0x10,"crypto\\asn1\\tasn_new.c",0x12e);
      if (puVar5 == (undefined4 *)0x0) {
        ERR_put_error(0xd,0x77,0x41,"crypto\\asn1\\tasn_new.c",0x12f);
        return 0;
      }
      *(undefined8 *)(puVar5 + 2) = 0;
      *puVar5 = 0xffffffff;
      *param_1 = (longlong)puVar5;
      goto LAB_143d342bb;
    }
    if (iVar1 == 1) {
      *(undefined4 *)param_1 = *(undefined4 *)(param_2 + 0x20);
      return 1;
    }
    if (iVar1 == 5) {
      *param_1 = 1;
      return 1;
    }
    if (iVar1 == 6) {
      lVar4 = OBJ_nid2obj(0);
      *param_1 = lVar4;
      return 1;
    }
  }
  if (param_3 == 0) {
    puVar3 = (undefined8 *)ASN1_STRING_type_new(iVar1);
    *param_1 = (longlong)puVar3;
  }
  else {
    puVar3 = (undefined8 *)*param_1;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *(int *)((longlong)puVar3 + 4) = iVar1;
    *(undefined4 *)(puVar3 + 2) = 0x80;
  }
  if ((*param_2 == '\x05') && (puVar3 != (undefined8 *)0x0)) {
    *(uint *)(puVar3 + 2) = *(uint *)(puVar3 + 2) | 0x40;
  }
LAB_143d342bb:
  if (*param_1 == 0) {
    return 0;
  }
  return 1;
}



// FUNCTION 143d342e0 FUN_143d342e0 body=154 status=ok
// SIG undefined FUN_143d342e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d342e0(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 *puVar2;
  
  uVar1 = *param_2;
  while ((uVar1 & 0x306) == 0) {
    puVar2 = (undefined1 *)(**(code **)(param_2 + 6))();
    switch(*puVar2) {
    case 0:
      param_2 = *(uint **)(puVar2 + 8);
      if (param_2 == (uint *)0x0) goto switchD_143d3431b_caseD_5;
      uVar1 = *param_2;
      break;
    case 1:
    case 2:
    case 6:
      goto switchD_143d3431b_caseD_1;
    default:
      goto switchD_143d3431b_caseD_3;
    case 4:
      if ((*(longlong *)(puVar2 + 0x18) != 0) &&
         (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(puVar2 + 0x18) + 0x18),
         UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000143d34362. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(param_1,puVar2);
        return;
      }
      goto switchD_143d3431b_caseD_1;
    case 5:
switchD_143d3431b_caseD_5:
      asn1_primitive_clear(param_1,puVar2);
      return;
    }
  }
switchD_143d3431b_caseD_1:
  *param_1 = 0;
switchD_143d3431b_caseD_3:
  return;
}



// FUNCTION 143d343a0 asn1_template_new body=195 status=ok
// SIG undefined asn1_template_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 asn1_template_new(longlong ***param_1,uint *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong **pplVar3;
  longlong ***ppplVar4;
  longlong **local_res10 [3];
  undefined8 uVar5;
  
  uVar5 = 0x143d343b0;
  uVar2 = (**(code **)(param_2 + 6))();
  uVar1 = *param_2;
  ppplVar4 = param_1;
  if ((uVar1 & 0x1000) != 0) {
    ppplVar4 = local_res10;
    local_res10[0] = (longlong **)param_1;
  }
  if ((uVar1 & 1) != 0) {
    FUN_143d342e0(ppplVar4,param_2);
    return 1;
  }
  if ((uVar1 & 0x300) == 0) {
    if ((uVar1 & 6) == 0) {
      uVar2 = FUN_143d33e30(ppplVar4,uVar2);
      return uVar2;
    }
    pplVar3 = (longlong **)OPENSSL_sk_new_null();
    if (pplVar3 == (longlong **)0x0) {
      ERR_put_error(0xd,0x85,0x41,"crypto\\asn1\\tasn_new.c",0xe7,uVar5);
      return 0;
    }
  }
  else {
    pplVar3 = (longlong **)0x0;
  }
  *ppplVar4 = pplVar3;
  return 1;
}



// FUNCTION 143d34470 PKCS12_decrypt_skey body=26 status=ok
// SIG undefined PKCS12_decrypt_skey(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS12_decrypt_skey(longlong param_1)

{
  BN_num_bits(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 143d34490 DSA_dup_DH body=397 status=ok
// SIG undefined DSA_dup_DH(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong DSA_dup_DH(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  lVar2 = 0;
  lVar3 = 0;
  lVar8 = 0;
  lVar5 = 0;
  lVar10 = 0;
  lVar4 = 0;
  lVar9 = 0;
  lVar6 = 0;
  lVar11 = 0;
  lVar7 = 0;
  lVar12 = 0;
  lVar13 = lVar7;
  if ((param_1 == 0) || (lVar2 = DH_new(), lVar2 == 0)) goto LAB_143d344f7;
  lVar13 = lVar12;
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar13 = lVar7;
    if ((*(longlong *)(param_1 + 0x18) != 0) ||
       (lVar3 = lVar8, lVar4 = lVar9, lVar5 = lVar10, lVar6 = lVar11, lVar13 = lVar12,
       *(longlong *)(param_1 + 0x10) != 0)) goto LAB_143d344f7;
  }
  else {
    lVar3 = lVar8;
    lVar4 = lVar9;
    lVar5 = lVar10;
    lVar6 = lVar11;
    if ((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x10) == 0))
    goto LAB_143d344f7;
    lVar3 = BN_dup();
    lVar4 = BN_dup(*(undefined8 *)(param_1 + 0x18));
    lVar5 = BN_dup(*(undefined8 *)(param_1 + 0x10));
    if ((lVar3 == 0) ||
       (((lVar4 == 0 || (lVar5 == 0)) || (iVar1 = DH_set0_pqg(lVar2,lVar3,lVar5,lVar4), iVar1 == 0))
       )) goto LAB_143d344f7;
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar3 = 0;
    lVar4 = 0;
    lVar5 = 0;
    lVar6 = lVar11;
    lVar13 = lVar12;
    if (*(longlong *)(param_1 + 0x28) == 0) {
      return lVar2;
    }
  }
  else {
    lVar6 = BN_dup();
    lVar3 = 0;
    lVar4 = 0;
    lVar5 = 0;
    lVar13 = lVar12;
    if ((lVar6 != 0) &&
       ((*(longlong *)(param_1 + 0x28) == 0 ||
        (lVar7 = BN_dup(), lVar3 = 0, lVar4 = 0, lVar5 = 0, lVar13 = lVar7, lVar7 != 0)))) {
      iVar1 = DH_set0_key(lVar2,lVar6,lVar7);
      lVar3 = 0;
      lVar4 = 0;
      lVar5 = 0;
      lVar13 = lVar7;
      if (iVar1 != 0) {
        return lVar2;
      }
    }
  }
LAB_143d344f7:
  BN_free(lVar3);
  BN_free(lVar4);
  BN_free(lVar5);
  BN_free(lVar6);
  BN_free(lVar13);
  DH_free(lVar2);
  return 0;
}



// FUNCTION 143d34620 DSA_free body=168 status=ok
// SIG undefined DSA_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DSA_free(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x40);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 2) {
      if ((*(longlong *)(param_1 + 0x50) != 0) &&
         (pcVar3 = *(code **)(*(longlong *)(param_1 + 0x50) + 0x38), pcVar3 != (code *)0x0)) {
        (*pcVar3)();
      }
      ENGINE_finish(*(undefined8 *)(param_1 + 0x58));
      CRYPTO_free_ex_data(7,param_1,param_1 + 0x48);
      CRYPTO_THREAD_lock_free(*(undefined8 *)(param_1 + 0x60));
      BN_clear_free(*(undefined8 *)(param_1 + 8));
      BN_clear_free(*(undefined8 *)(param_1 + 0x10));
      BN_clear_free(*(undefined8 *)(param_1 + 0x18));
      BN_clear_free(*(undefined8 *)(param_1 + 0x20));
      BN_clear_free(*(undefined8 *)(param_1 + 0x28));
      CRYPTO_free(param_1,"crypto\\dsa\\dsa_lib.c",0x83);
    }
  }
  return;
}



// FUNCTION 143d346d0 DSA_get_ex_data body=26 status=ok
// SIG undefined DSA_get_ex_data(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DSA_get_ex_data(longlong param_1)

{
  CRYPTO_get_ex_data(param_1 + 0x48);
  return;
}



// FUNCTION 143d346f0 DSA_new body=24 status=ok
// SIG undefined DSA_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DSA_new(void)

{
  DSA_new_method(0);
  return;
}



// FUNCTION 143d34710 DSA_new_method body=523 status=ok
// SIG undefined DSA_new_method(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong DSA_new_method(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0x143d34720;
  lVar4 = CRYPTO_zalloc(0x68,"crypto\\dsa\\dsa_lib.c",0x33);
  if (lVar4 == 0) {
    ERR_put_error(10,0x67,0x41,"crypto\\dsa\\dsa_lib.c",0x36,uVar8);
    return 0;
  }
  *(undefined4 *)(lVar4 + 0x40) = 1;
  lVar5 = CRYPTO_THREAD_lock_new();
  *(longlong *)(lVar4 + 0x60) = lVar5;
  if (lVar5 == 0) {
    ERR_put_error(10,0x67,0x41,"crypto\\dsa\\dsa_lib.c",0x3d,uVar8);
    uVar8 = 0x3e;
    goto LAB_143d34874;
  }
  lVar5 = DSA_get_default_method();
  *(longlong *)(lVar4 + 0x50) = lVar5;
  *(uint *)(lVar4 + 0x30) = *(uint *)(lVar5 + 0x40) & 0xfffffbff;
  if (param_1 == 0) {
    param_1 = FUN_143d731c0();
LAB_143d34898:
    *(longlong *)(lVar4 + 0x58) = param_1;
    if (param_1 != 0) {
      lVar5 = FUniqueNetIdString::GetBytes(param_1);
      *(longlong *)(lVar4 + 0x50) = lVar5;
      if (lVar5 == 0) {
        uVar7 = 0x50;
        goto LAB_143d347de;
      }
    }
    *(uint *)(lVar4 + 0x30) = *(uint *)(*(longlong *)(lVar4 + 0x50) + 0x40) & 0xfffffbff;
    iVar3 = CRYPTO_new_ex_data(7,lVar4,lVar4 + 0x48);
    if (iVar3 != 0) {
      pcVar2 = *(code **)(*(longlong *)(lVar4 + 0x50) + 0x30);
      if (pcVar2 == (code *)0x0) {
        return lVar4;
      }
      iVar3 = (*pcVar2)(lVar4);
      if (iVar3 != 0) {
        return lVar4;
      }
      uVar7 = 0x5c;
      uVar6 = 0x46;
      goto LAB_143d347e4;
    }
  }
  else {
    iVar3 = ENGINE_init(param_1);
    if (iVar3 != 0) goto LAB_143d34898;
    uVar7 = 0x47;
LAB_143d347de:
    uVar6 = 0x26;
LAB_143d347e4:
    ERR_put_error(10,0x67,uVar6,"crypto\\dsa\\dsa_lib.c",uVar7);
  }
  LOCK();
  piVar1 = (int *)(lVar4 + 0x40);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (1 < iVar3) {
    return 0;
  }
  if ((*(longlong *)(lVar4 + 0x50) != 0) &&
     (pcVar2 = *(code **)(*(longlong *)(lVar4 + 0x50) + 0x38), pcVar2 != (code *)0x0)) {
    (*pcVar2)(lVar4);
  }
  ENGINE_finish(*(undefined8 *)(lVar4 + 0x58));
  CRYPTO_free_ex_data(7,lVar4,lVar4 + 0x48);
  CRYPTO_THREAD_lock_free(*(undefined8 *)(lVar4 + 0x60));
  BN_clear_free(*(undefined8 *)(lVar4 + 8));
  BN_clear_free(*(undefined8 *)(lVar4 + 0x10));
  BN_clear_free(*(undefined8 *)(lVar4 + 0x18));
  BN_clear_free(*(undefined8 *)(lVar4 + 0x20));
  BN_clear_free(*(undefined8 *)(lVar4 + 0x28));
  uVar8 = 0x83;
LAB_143d34874:
  CRYPTO_free(lVar4,"crypto\\dsa\\dsa_lib.c",uVar8);
  return 0;
}



// FUNCTION 143d34920 DSA_security_bits body=85 status=ok
// SIG undefined DSA_security_bits(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 DSA_security_bits(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if ((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
    uVar1 = BN_num_bits();
    uVar2 = BN_num_bits(*(undefined8 *)(param_1 + 8));
    uVar3 = FUN_143d0f270(uVar2,uVar1);
    return uVar3;
  }
  return 0xffffffff;
}



// FUNCTION 143d34980 DSA_set0_key body=118 status=ok
// SIG undefined DSA_set0_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 DSA_set0_key(longlong param_1,longlong param_2,longlong param_3)

{
  if (*(longlong *)(param_1 + 0x20) == 0) {
    if (param_2 == 0) {
      return 0;
    }
  }
  else if (param_2 == 0) goto LAB_143d349cf;
  BN_free();
  *(longlong *)(param_1 + 0x20) = param_2;
LAB_143d349cf:
  if (param_3 != 0) {
    BN_free(*(undefined8 *)(param_1 + 0x28));
    *(longlong *)(param_1 + 0x28) = param_3;
  }
  return 1;
}



// FUNCTION 143d34a00 DSA_set0_pqg body=159 status=ok
// SIG undefined DSA_set0_pqg(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 DSA_set0_pqg(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  
  if ((((*(longlong *)(param_1 + 8) == 0) && (param_2 == 0)) ||
      ((*(longlong *)(param_1 + 0x10) == 0 && (param_3 == 0)))) ||
     ((*(longlong *)(param_1 + 0x18) == 0 && (param_4 == 0)))) {
    uVar1 = 0;
  }
  else {
    if (param_2 != 0) {
      BN_free();
      *(longlong *)(param_1 + 8) = param_2;
    }
    if (param_3 != 0) {
      BN_free(*(undefined8 *)(param_1 + 0x10));
      *(longlong *)(param_1 + 0x10) = param_3;
    }
    if (param_4 != 0) {
      BN_free(*(undefined8 *)(param_1 + 0x18));
      *(longlong *)(param_1 + 0x18) = param_4;
    }
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 143d34aa0 DSA_set_ex_data body=26 status=ok
// SIG undefined DSA_set_ex_data(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DSA_set_ex_data(longlong param_1)

{
  CRYPTO_set_ex_data(param_1 + 0x48);
  return;
}



// FUNCTION 143d34ac0 DSA_size body=95 status=ok
// SIG undefined DSA_size(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DSA_size(longlong param_1)

{
  int iVar1;
  undefined1 local_res8 [32];
  int local_28 [2];
  undefined1 *local_20;
  undefined8 uStack_8;
  
  uStack_8 = 0x143d34aca;
  iVar1 = BN_num_bits(*(undefined8 *)(param_1 + 0x10));
  local_28[1] = 2;
  local_res8[0] = 0xff;
  local_28[0] = (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
  local_20 = local_res8;
  iVar1 = i2d_ASN1_INTEGER(local_28,0);
  ASN1_object_size(1,iVar1 * 2,0x10);
  return;
}



// FUNCTION 143d34b30 ASN1_item_dup body=161 status=ok
// SIG undefined ASN1_item_dup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASN1_item_dup(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong local_res10;
  longlong local_res18 [2];
  undefined8 uVar2;
  
  uVar2 = 0x143d34b3c;
  local_res10 = 0;
  if (param_2 != 0) {
    uVar1 = ASN1_item_i2d(param_2,&local_res10,param_1);
    if (local_res10 != 0) {
      local_res18[0] = local_res10;
      uVar2 = ASN1_item_d2i(0,local_res18,uVar1,param_1);
      CRYPTO_free(local_res10,"crypto\\asn1\\a_dup.c",0x42);
      return uVar2;
    }
    ERR_put_error(0xd,0xbf,0x41,"crypto\\asn1\\a_dup.c",0x3d,uVar2);
  }
  return 0;
}



// FUNCTION 143d34be0 FUN_143d34be0 body=29 status=ok
// SIG undefined FUN_143d34be0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d34be0(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_145d81ce0);
  return;
}



// FUNCTION 143d34c00 X509_alias_get0 body=50 status=ok
// SIG undefined X509_alias_get0(void)

undefined8 X509_alias_get0(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x138);
  if ((lVar1 != 0) && (*(undefined4 **)(lVar1 + 0x10) != (undefined4 *)0x0)) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = **(undefined4 **)(lVar1 + 0x10);
      lVar1 = *(longlong *)(param_1 + 0x138);
    }
    return *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 8);
  }
  return 0;
}



// FUNCTION 143d34c40 X509_alias_set1 body=212 status=ok
// SIG undefined X509_alias_set1(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_alias_set1(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    if (((param_1 != 0) && (*(longlong *)(param_1 + 0x138) != 0)) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x10) != 0)) {
      ASN1_BIT_STRING_free();
      *(undefined8 *)(*(longlong *)(param_1 + 0x138) + 0x10) = 0;
    }
    return 1;
  }
  if (param_1 == 0) {
LAB_143d34cfd:
    uVar3 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x138);
    if (lVar1 == 0) {
      lVar1 = ASN1_item_new(&DAT_145d81ce0);
      *(longlong *)(param_1 + 0x138) = lVar1;
      if (lVar1 == 0) goto LAB_143d34cfd;
    }
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (lVar2 == 0) {
      lVar2 = ASN1_UTF8STRING_new();
      *(longlong *)(lVar1 + 0x10) = lVar2;
      if (lVar2 == 0) goto LAB_143d34cfd;
    }
    uVar3 = ASN1_STRING_set(lVar2,param_2,param_3);
  }
  return uVar3;
}



// FUNCTION 143d34d20 X509_get0_reject_objects body=18 status=ok
// SIG undefined X509_get0_reject_objects(void)

undefined8 X509_get0_reject_objects(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x138) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x138) + 8);
  }
  return 0;
}



// FUNCTION 143d34d40 X509_get0_trust_objects body=17 status=ok
// SIG undefined X509_get0_trust_objects(void)

undefined8 X509_get0_trust_objects(longlong param_1)

{
  if (*(undefined8 **)(param_1 + 0x138) != (undefined8 *)0x0) {
    return **(undefined8 **)(param_1 + 0x138);
  }
  return 0;
}



// FUNCTION 143d34d60 X509_keyid_get0 body=50 status=ok
// SIG undefined X509_keyid_get0(void)

undefined8 X509_keyid_get0(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x138);
  if ((lVar1 != 0) && (*(undefined4 **)(lVar1 + 0x18) != (undefined4 *)0x0)) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = **(undefined4 **)(lVar1 + 0x18);
      lVar1 = *(longlong *)(param_1 + 0x138);
    }
    return *(undefined8 *)(*(longlong *)(lVar1 + 0x18) + 8);
  }
  return 0;
}



// FUNCTION 143d34da0 X509_keyid_set1 body=212 status=ok
// SIG undefined X509_keyid_set1(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_keyid_set1(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    if (((param_1 != 0) && (*(longlong *)(param_1 + 0x138) != 0)) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x18) != 0)) {
      ASN1_BIT_STRING_free();
      *(undefined8 *)(*(longlong *)(param_1 + 0x138) + 0x18) = 0;
    }
    return 1;
  }
  if (param_1 == 0) {
LAB_143d34e5d:
    uVar3 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x138);
    if (lVar1 == 0) {
      lVar1 = ASN1_item_new(&DAT_145d81ce0);
      *(longlong *)(param_1 + 0x138) = lVar1;
      if (lVar1 == 0) goto LAB_143d34e5d;
    }
    lVar2 = *(longlong *)(lVar1 + 0x18);
    if (lVar2 == 0) {
      lVar2 = ASN1_OCTET_STRING_new();
      *(longlong *)(lVar1 + 0x18) = lVar2;
      if (lVar2 == 0) goto LAB_143d34e5d;
    }
    uVar3 = ASN1_STRING_set(lVar2,param_2,param_3);
  }
  return uVar3;
}



// FUNCTION 143d34e80 X509_trusted body=13 status=ok
// SIG undefined X509_trusted(void)

bool X509_trusted(longlong param_1)

{
  return *(longlong *)(param_1 + 0x138) != 0;
}



// FUNCTION 143d34e90 d2i_X509_CERT_AUX body=29 status=ok
// SIG undefined d2i_X509_CERT_AUX(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_X509_CERT_AUX(void)

{
  ASN1_item_d2i();
  return;
}



// FUNCTION 143d34eb0 AUTHORITY_KEYID_free body=29 status=ok
// SIG undefined AUTHORITY_KEYID_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void AUTHORITY_KEYID_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_145d81db0);
  return;
}



// FUNCTION 143d34ee0 FUN_143d34ee0 body=29 status=ok
// SIG undefined FUN_143d34ee0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d34ee0(void)

{
  ASN1_item_new(&DAT_145d81db0);
  return;
}



// FUNCTION 143d34f40 v2i_crld body=626 status=ok
// SIG undefined v2i_crld(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong v2i_crld(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined8 uVar13;
  
  uVar13 = 0x143d34f64;
  lVar5 = 0;
  lVar4 = 0;
  iVar1 = OPENSSL_sk_num(param_3);
  lVar3 = OPENSSL_sk_new_reserve(0,iVar1);
  if (lVar3 == 0) {
LAB_143d3515c:
    ERR_put_error(0x22,0x86,0x41,"crypto\\x509v3\\v3_crld.c",0x11d,uVar13);
LAB_143d3517c:
    GENERAL_NAME_free(lVar4);
    GENERAL_NAMES_free(lVar5);
    OPENSSL_sk_pop_free(lVar3,FUN_143d35650);
    lVar3 = 0;
  }
  else {
    iVar11 = 0;
    if (0 < iVar1) {
      do {
        lVar4 = OPENSSL_sk_value(param_3,iVar11);
        if (*(longlong *)(lVar4 + 0x10) == 0) {
          lVar4 = X509V3_get_section(param_2,*(undefined8 *)(lVar4 + 8));
          if (lVar4 != 0) {
            lVar5 = ASN1_item_new(&DAT_145d82130);
            if (lVar5 == 0) {
LAB_143d35091:
              ASN1_item_free(lVar5,&DAT_145d82130);
              lVar5 = 0;
            }
            else {
              iVar10 = 0;
              iVar2 = OPENSSL_sk_num(lVar4);
              if (0 < iVar2) {
                do {
                  lVar6 = OPENSSL_sk_value(lVar4,iVar10);
                  iVar2 = set_dist_point_name(lVar5,param_2,lVar6);
                  if (iVar2 < 1) {
                    if (iVar2 < 0) goto LAB_143d35091;
                    lVar7 = 0;
                    do {
                      lVar8 = lVar7 + 1;
                      if ((*(char **)(lVar6 + 8))[lVar7] != "reasons"[lVar7]) {
                        iVar2 = _guard_xfg_dispatch_icall_nop(*(char **)(lVar6 + 8),"CRLissuer");
                        if (iVar2 != 0) goto LAB_143d3507d;
                        lVar6 = gnames_from_sectname(param_2,*(undefined8 *)(lVar6 + 0x10));
                        *(longlong *)(lVar5 + 0x10) = lVar6;
                        bVar12 = lVar6 == 0;
                        goto LAB_143d3507b;
                      }
                      lVar7 = lVar8;
                    } while (lVar8 != 8);
                    iVar2 = set_reasons(lVar5 + 8,*(undefined8 *)(lVar6 + 0x10));
                    bVar12 = iVar2 == 0;
LAB_143d3507b:
                    if (bVar12) goto LAB_143d35091;
                  }
LAB_143d3507d:
                  iVar10 = iVar10 + 1;
                  iVar2 = OPENSSL_sk_num(lVar4);
                } while (iVar10 < iVar2);
              }
            }
            X509V3_section_free(param_2,lVar4);
            if (lVar5 != 0) {
              OPENSSL_sk_push(lVar3,lVar5);
              goto LAB_143d35138;
            }
          }
          lVar5 = 0;
          lVar4 = 0;
          goto LAB_143d3517c;
        }
        lVar4 = v2i_GENERAL_NAME(param_1,param_2,lVar4);
        if (lVar4 == 0) {
          lVar5 = 0;
          goto LAB_143d3517c;
        }
        lVar5 = GENERAL_NAMES_new();
        if ((lVar5 == 0) || (iVar2 = OPENSSL_sk_push(lVar5,lVar4), iVar2 == 0)) goto LAB_143d3515c;
        lVar4 = 0;
        plVar9 = (longlong *)ASN1_item_new(&DAT_145d82130);
        if (plVar9 == (longlong *)0x0) goto LAB_143d3515c;
        OPENSSL_sk_push(lVar3,plVar9);
        lVar6 = ASN1_item_new(&DAT_145d820a0);
        *plVar9 = lVar6;
        if (lVar6 == 0) goto LAB_143d3515c;
        *(longlong *)(lVar6 + 8) = lVar5;
        *(undefined4 *)*plVar9 = 0;
LAB_143d35138:
        iVar11 = iVar11 + 1;
      } while (iVar11 < iVar1);
    }
  }
  return lVar3;
}



// FUNCTION 143d351c0 i2r_crldp body=235 status=ok
// SIG undefined i2r_crldp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 i2r_crldp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = OPENSSL_sk_num(param_2);
  if (0 < iVar1) {
    do {
      BIO_puts(param_3,&DAT_143fc48d8);
      plVar2 = (longlong *)OPENSSL_sk_value(param_2,iVar3);
      if (*plVar2 != 0) {
        print_distpoint(param_3,*plVar2,param_4);
      }
      if (plVar2[1] != 0) {
        print_reasons(param_3,"Reasons",plVar2[1],param_4);
      }
      if (plVar2[2] != 0) {
        BIO_printf(param_3,"%*sCRL Issuer:\n",param_4,&DAT_143f3f584);
        print_gens(param_3,plVar2[2],param_4);
      }
      iVar3 = iVar3 + 1;
      iVar1 = OPENSSL_sk_num(param_2);
    } while (iVar3 < iVar1);
  }
  return 1;
}



// FUNCTION 143d352b0 dpn_cb body=63 status=ok
// SIG undefined dpn_cb(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dpn_cb(int param_1,longlong *param_2)

{
  if (param_1 == 1) {
    *(undefined8 *)(*param_2 + 0x10) = 0;
  }
  else if (param_1 == 3) {
    X509_NAME_free(*(undefined8 *)(*param_2 + 0x10));
    return 1;
  }
  return 1;
}



// FUNCTION 143d352f0 i2r_idp body=286 status=ok
// SIG undefined i2r_idp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 i2r_idp(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  if (*param_2 != 0) {
    print_distpoint(param_3,*param_2,param_4);
  }
  if (0 < (int)param_2[1]) {
    BIO_printf(param_3,"%*sOnly User Certificates\n",param_4,&DAT_143f3f584);
  }
  if (0 < *(int *)((longlong)param_2 + 0xc)) {
    BIO_printf(param_3,"%*sOnly CA Certificates\n",param_4,&DAT_143f3f584);
  }
  if (0 < (int)param_2[3]) {
    BIO_printf(param_3,"%*sIndirect CRL\n",param_4,&DAT_143f3f584);
  }
  if (param_2[2] != 0) {
    print_reasons(param_3,"Only Some Reasons",param_2[2],param_4);
  }
  if (0 < *(int *)((longlong)param_2 + 0x1c)) {
    BIO_printf(param_3,"%*sOnly Attribute Certificates\n",param_4,&DAT_143f3f584);
  }
  if ((((*param_2 == 0) && ((int)param_2[1] < 1)) && (*(int *)((longlong)param_2 + 0xc) < 1)) &&
     ((((int)param_2[3] < 1 && (param_2[2] == 0)) && (*(int *)((longlong)param_2 + 0x1c) < 1)))) {
    BIO_printf(param_3,"%*s<EMPTY>\n",param_4,&DAT_143f3f584);
  }
  return 1;
}



// FUNCTION 143d35410 v2i_idp body=541 status=ok
// SIG undefined v2i_idp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong v2i_idp(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *_Str1;
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar8;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  lVar3 = ASN1_item_new(&DAT_145d82270);
  if (lVar3 == 0) {
    ERR_put_error(0x22,0x9d,0x41,"crypto\\x509v3\\v3_crld.c",CONCAT44(uVar8,0x193));
LAB_143d35617:
    ASN1_item_free(lVar3,&DAT_145d82270);
    lVar3 = 0;
  }
  else {
    iVar7 = 0;
    iVar2 = OPENSSL_sk_num(param_3);
    if (0 < iVar2) {
LAB_143d35490:
      puVar4 = (undefined8 *)OPENSSL_sk_value(param_3,iVar7);
      _Str1 = (char *)puVar4[1];
      uVar1 = puVar4[2];
      iVar2 = set_dist_point_name(lVar3,param_2,puVar4);
      if (0 < iVar2) goto LAB_143d35589;
      if (-1 < iVar2) {
        iVar2 = _guard_xfg_dispatch_icall_nop(_Str1,"onlyuser");
        if (iVar2 == 0) {
          iVar2 = X509V3_get_value_bool(puVar4,lVar3 + 8);
        }
        else {
          lVar5 = 0;
          do {
            lVar6 = lVar5 + 1;
            if (_Str1[lVar5] != (&DAT_145d8248c)[lVar5]) {
              lVar5 = 0;
              goto LAB_143d35520;
            }
            lVar5 = lVar6;
          } while (lVar6 != 7);
          iVar2 = X509V3_get_value_bool(puVar4,lVar3 + 0xc);
        }
        goto LAB_143d35581;
      }
      goto LAB_143d35617;
    }
  }
  return lVar3;
  while (lVar5 = lVar6, lVar6 != 7) {
LAB_143d35520:
    lVar6 = lVar5 + 1;
    if (_Str1[lVar5] != (&DAT_145d82534)[lVar5]) {
      iVar2 = _guard_xfg_dispatch_icall_nop(_Str1,"indirectCRL");
      if (iVar2 == 0) {
        iVar2 = X509V3_get_value_bool(puVar4,lVar3 + 0x18);
        goto LAB_143d35581;
      }
      iVar2 = _guard_xfg_dispatch_icall_nop(_Str1,"onlysomereasons");
      if (iVar2 == 0) {
        iVar2 = set_reasons(lVar3 + 0x10,uVar1);
        goto LAB_143d35581;
      }
      ERR_put_error(0x22,0x9d,0x6a,"crypto\\x509v3\\v3_crld.c",0x18b);
      ERR_add_error_data(6,"section:",*puVar4,",name:",puVar4[1],",value:",puVar4[2]);
      goto LAB_143d35617;
    }
  }
  iVar2 = X509V3_get_value_bool(puVar4,lVar3 + 0x1c);
LAB_143d35581:
  if (iVar2 == 0) goto LAB_143d35617;
LAB_143d35589:
  iVar7 = iVar7 + 1;
  iVar2 = OPENSSL_sk_num(param_3);
  if (iVar2 <= iVar7) {
    return lVar3;
  }
  goto LAB_143d35490;
}



// FUNCTION 143d35630 FUN_143d35630 body=29 status=ok
// SIG undefined FUN_143d35630(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d35630(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_145d82180);
  return;
}



// FUNCTION 143d35650 FUN_143d35650 body=29 status=ok
// SIG undefined FUN_143d35650(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d35650(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_145d82130);
  return;
}



// FUNCTION 143d35670 DIST_POINT_set_dpname body=206 status=ok
// SIG undefined DIST_POINT_set_dpname(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 DIST_POINT_set_dpname(int *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 1)) {
    return 1;
  }
  uVar1 = *(undefined8 *)(param_1 + 2);
  lVar3 = X509_NAME_dup(param_2);
  *(longlong *)(param_1 + 4) = lVar3;
  if (lVar3 != 0) {
    iVar5 = 0;
    iVar2 = OPENSSL_sk_num(uVar1);
    if (0 < iVar2) {
      do {
        uVar4 = OPENSSL_sk_value(uVar1,iVar5);
        iVar2 = X509_NAME_add_entry(*(undefined8 *)(param_1 + 4),uVar4,0xffffffff,iVar5 == 0);
        if (iVar2 == 0) goto LAB_143d3571b;
        iVar5 = iVar5 + 1;
        iVar2 = OPENSSL_sk_num(uVar1);
      } while (iVar5 < iVar2);
    }
    iVar2 = i2d_X509_NAME(*(undefined8 *)(param_1 + 4),0);
    if (-1 < iVar2) {
      return 1;
    }
LAB_143d3571b:
    X509_NAME_free(*(undefined8 *)(param_1 + 4));
    param_1[4] = 0;
    param_1[5] = 0;
  }
  return 0;
}



// FUNCTION 143d35740 AUTHORITY_KEYID_free body=29 status=ok
// SIG undefined AUTHORITY_KEYID_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void AUTHORITY_KEYID_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_145d82270);
  return;
}



// FUNCTION 143d35760 gnames_from_sectname body=189 status=ok
// SIG undefined gnames_from_sectname(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 gnames_from_sectname(undefined8 param_1,char *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143d35775;
  if (*param_2 == '@') {
    lVar1 = X509V3_get_section(param_1,param_2 + 1);
  }
  else {
    lVar1 = X509V3_parse_list(param_2);
  }
  if (lVar1 == 0) {
    ERR_put_error(0x22,0x9c,0x96,"crypto\\x509v3\\v3_crld.c",0x37,uVar2);
    return 0;
  }
  uVar2 = v2i_GENERAL_NAMES(0,param_1,lVar1);
  if (*param_2 == '@') {
    X509V3_section_free(param_1,lVar1);
  }
  else {
    OPENSSL_sk_pop_free(lVar1,X509V3_conf_free);
  }
  return uVar2;
}



// FUNCTION 143d35820 print_distpoint body=166 status=ok
// SIG undefined print_distpoint(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 print_distpoint(undefined8 param_1,int *param_2,ulonglong param_3)

{
  undefined8 local_38 [5];
  undefined8 uStack_10;
  
  uStack_10 = 0x143d35835;
  if (*param_2 == 0) {
    BIO_printf(param_1,"%*sFull Name:\n");
    print_gens(param_1,*(undefined8 *)(param_2 + 2),param_3 & 0xffffffff);
  }
  else {
    local_38[0] = *(undefined8 *)(param_2 + 2);
    BIO_printf(param_1,"%*sRelative Name:\n%*s",param_3,&DAT_143f3f584,(int)param_3 + 2,
               &DAT_143f3f584);
    X509_NAME_print_ex(param_1,local_38,0,0x82031f);
    BIO_puts(param_1,&DAT_143fc48d8);
  }
  return 1;
}



// FUNCTION 143d358d0 print_gens body=166 status=ok
// SIG undefined print_gens(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 print_gens(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = OPENSSL_sk_num(param_2);
  if (0 < iVar1) {
    do {
      BIO_printf(param_1,&DAT_145d811b8,param_3 + 2,&DAT_143f3f584);
      uVar2 = OPENSSL_sk_value(param_2,iVar3);
      FUN_143d784e0(param_1,uVar2);
      BIO_puts(param_1,&DAT_143fc48d8);
      iVar3 = iVar3 + 1;
      iVar1 = OPENSSL_sk_num(param_2);
    } while (iVar3 < iVar1);
  }
  return 1;
}



// FUNCTION 143d35980 print_reasons body=211 status=ok
// SIG undefined print_reasons(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 print_reasons(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  undefined **ppuVar4;
  
  bVar1 = true;
  BIO_printf(param_1,"%*s%s:\n%*s",param_4,&DAT_143f3f584,param_2,param_4 + 2,&DAT_143f3f584,
             0x143d35995);
  ppuVar4 = &PTR_s_Unused_145d81f78;
  do {
    iVar2 = ASN1_BIT_STRING_get_bit(param_3,*(undefined4 *)(ppuVar4 + -1));
    if (iVar2 != 0) {
      if (bVar1) {
        bVar1 = false;
      }
      else {
        BIO_puts(param_1,&DAT_145cbbc74);
      }
      BIO_puts(param_1,*ppuVar4);
    }
    ppuVar4 = ppuVar4 + 3;
  } while (*ppuVar4 != (undefined *)0x0);
  pcVar3 = "<EMPTY>\n";
  if (!bVar1) {
    pcVar3 = "\n";
  }
  BIO_puts(param_1,pcVar3);
  return 1;
}



// FUNCTION 143d35a60 set_dist_point_name body=496 status=ok
// SIG undefined set_dist_point_name(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 set_dist_point_name(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x143d35a7e;
  lVar2 = 0;
  uVar6 = 0;
  iVar1 = strncmp(*(char **)(param_3 + 8),"fullname",9);
  if (iVar1 == 0) {
    lVar2 = gnames_from_sectname(param_2,*(undefined8 *)(param_3 + 0x10));
    if (lVar2 == 0) goto LAB_143d35ae5;
LAB_143d35abb:
    if (*param_1 == 0) {
      puVar5 = (undefined4 *)ASN1_item_new(&DAT_145d820a0);
      *param_1 = (longlong)puVar5;
      if (puVar5 != (undefined4 *)0x0) {
        if (lVar2 != 0) {
          *puVar5 = 0;
          *(longlong *)(*param_1 + 8) = lVar2;
          return 1;
        }
        *puVar5 = 1;
        *(undefined8 *)(*param_1 + 8) = uVar6;
        return 1;
      }
      goto LAB_143d35ae5;
    }
    uVar8 = 0x6e;
    uVar7 = 0xa0;
  }
  else {
    iVar1 = _guard_xfg_dispatch_icall_nop(*(char **)(param_3 + 8),"relativename");
    if (iVar1 != 0) {
      return 0;
    }
    puVar3 = (undefined8 *)X509_NAME_free();
    if (puVar3 == (undefined8 *)0x0) {
      return 0xffffffff;
    }
    lVar4 = X509V3_get_section(param_2,*(undefined8 *)(param_3 + 0x10));
    if (lVar4 == 0) {
      ERR_put_error(0x22,0x9e,0x96,"crypto\\x509v3\\v3_crld.c",0x56,uVar9);
      return 0xffffffff;
    }
    iVar1 = X509V3_NAME_from_section(puVar3,lVar4,0x1001);
    X509V3_section_free(param_2,lVar4);
    uVar6 = *puVar3;
    *puVar3 = 0;
    X509_NAME_free(puVar3);
    if ((iVar1 == 0) || (iVar1 = OPENSSL_sk_num(uVar6), iVar1 < 1)) goto LAB_143d35ae5;
    iVar1 = OPENSSL_sk_num(uVar6);
    lVar4 = OPENSSL_sk_value(uVar6,iVar1 + -1);
    if (*(int *)(lVar4 + 0x10) == 0) goto LAB_143d35abb;
    uVar8 = 0x66;
    uVar7 = 0xa1;
  }
  ERR_put_error(0x22,0x9e,uVar7,"crypto\\x509v3\\v3_crld.c",uVar8,uVar9);
LAB_143d35ae5:
  OPENSSL_sk_pop_free(lVar2,GENERAL_NAME_free);
  OPENSSL_sk_pop_free(uVar6,X509_NAME_ENTRY_free);
  return 0xffffffff;
}



// FUNCTION 143d35c50 set_reasons body=309 status=ok
// SIG undefined set_reasons(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int set_reasons(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  
  iVar12 = 0;
  lVar5 = X509V3_parse_list(param_2);
  if (lVar5 == 0) {
    return 0;
  }
  if (*param_1 == 0) {
    iVar4 = OPENSSL_sk_num(lVar5);
    iVar11 = iVar12;
    if (0 < iVar4) {
      do {
        lVar6 = OPENSSL_sk_value(lVar5,iVar11);
        lVar6 = *(longlong *)(lVar6 + 8);
        if (*param_1 == 0) {
          lVar7 = ASN1_BIT_STRING_new();
          *param_1 = lVar7;
          if (lVar7 == 0) goto LAB_143d35d69;
        }
        puVar9 = &DAT_145d81f70;
        do {
          pcVar8 = *(char **)(puVar9 + 4);
          lVar7 = lVar6 - (longlong)pcVar8;
          do {
            cVar2 = *pcVar8;
            cVar3 = pcVar8[lVar7];
            if (cVar2 != cVar3) break;
            pcVar8 = pcVar8 + 1;
          } while (cVar3 != '\0');
          if (cVar2 == cVar3) {
            iVar4 = ASN1_BIT_STRING_set_bit(*param_1,*puVar9,1);
            puVar10 = puVar9;
            if (iVar4 == 0) goto LAB_143d35d69;
            break;
          }
          puVar10 = puVar9 + 6;
          plVar1 = (longlong *)(puVar9 + 8);
          puVar9 = puVar10;
        } while (*plVar1 != 0);
        if (*(longlong *)(puVar10 + 2) == 0) goto LAB_143d35d69;
        iVar11 = iVar11 + 1;
        iVar4 = OPENSSL_sk_num(lVar5);
      } while (iVar11 < iVar4);
    }
    iVar12 = 1;
  }
LAB_143d35d69:
  OPENSSL_sk_pop_free(lVar5,X509V3_conf_free);
  return iVar12;
}



// FUNCTION 143d35d90 policy_cache_find_data body=54 status=ok
// SIG undefined policy_cache_find_data(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void policy_cache_find_data(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined8 uStack_10;
  
  uStack_10 = 0x143d35d9c;
  local_20 = param_2;
  uVar1 = OPENSSL_sk_find(*(undefined8 *)(param_1 + 8),local_28);
  OPENSSL_sk_value(*(undefined8 *)(param_1 + 8),uVar1);
  return;
}



// FUNCTION 143d35dd0 policy_cache_free body=73 status=ok
// SIG undefined policy_cache_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void policy_cache_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    policy_data_free(*param_1);
    OPENSSL_sk_pop_free(param_1[1],policy_data_free);
    CRYPTO_free(param_1,"crypto\\x509v3\\pcy_cache.c",0xb8);
  }
  return;
}



// FUNCTION 143d35e20 policy_cache_new body=902 status=ok
// SIG undefined policy_cache_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int policy_cache_new(longlong param_1)

{
  ulonglong *puVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar11;
  ulonglong uVar12;
  int local_res8 [2];
  int local_res10;
  undefined8 *local_res18;
  longlong *local_res20;
  undefined4 uVar14;
  ulonglong uVar10;
  ulonglong uVar13;
  
  uVar13 = 0;
  uVar12 = 0;
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    return 1;
  }
  puVar4 = (undefined8 *)CRYPTO_malloc(0x20,"crypto\\x509v3\\pcy_cache.c",0x5c);
  if (puVar4 == (undefined8 *)0x0) {
    ERR_put_error(0x22,0xaa,0x41,"crypto\\x509v3\\pcy_cache.c",0x5e);
    return 0;
  }
  local_res18 = puVar4 + 2;
  *puVar4 = 0;
  *(undefined4 *)local_res18 = 0xffffffff;
  puVar4[1] = 0;
  *(undefined4 *)((longlong)puVar4 + 0x14) = 0xffffffff;
  *(undefined4 *)(puVar4 + 3) = 0xffffffff;
  *(undefined8 **)(param_1 + 0xf0) = puVar4;
  plVar5 = (longlong *)X509_get_ext_d2i(param_1,0x191,local_res8,0);
  uVar7 = uVar12;
  local_res20 = plVar5;
  if (plVar5 == (longlong *)0x0) {
    uVar7 = uVar13;
    if (local_res8[0] == -1) {
LAB_143d35f36:
      lVar6 = X509_get_ext_d2i(param_1,0x59,local_res8);
      if (lVar6 == 0) {
        uVar7 = uVar13;
        if (local_res8[0] == -1) {
          return 1;
        }
      }
      else {
        puVar1 = *(ulonglong **)(param_1 + 0xf0);
        iVar11 = 0;
        local_res10 = local_res8[0];
        iVar2 = OPENSSL_sk_num(lVar6);
        uVar7 = uVar13;
        iVar3 = 0;
        if (iVar2 < 1) {
LAB_143d3605a:
          iVar11 = iVar3;
          policy_data_free(uVar7);
        }
        else {
          uVar7 = OPENSSL_sk_new(policy_data_cmp);
          puVar1[1] = uVar7;
          if (uVar7 != 0) {
            uVar10 = uVar13;
            if (0 < iVar2) {
              do {
                uVar8 = OPENSSL_sk_value(lVar6,uVar10);
                uVar7 = policy_data_new(uVar8,0,local_res10);
                if (uVar7 == 0) {
                  uVar14 = 0x2d;
                  goto LAB_143d35fb8;
                }
                iVar3 = OBJ_obj2nid(*(undefined8 *)(uVar7 + 8));
                if (iVar3 == 0x2ea) {
                  if (*puVar1 != 0) {
LAB_143d360d2:
                    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x800;
                    iVar3 = -1;
                    goto LAB_143d3605a;
                  }
                  *puVar1 = uVar7;
                }
                else {
                  iVar3 = OPENSSL_sk_find(puVar1[1],uVar7);
                  if (-1 < iVar3) goto LAB_143d360d2;
                  iVar3 = OPENSSL_sk_push(puVar1[1],uVar7);
                  if (iVar3 == 0) {
                    ERR_put_error(0x22,0xa9,0x41,"crypto\\x509v3\\pcy_cache.c",0x3d);
                    iVar3 = 0;
                    goto LAB_143d3605a;
                  }
                }
                uVar9 = (int)uVar10 + 1;
                uVar10 = (ulonglong)uVar9;
              } while ((int)uVar9 < iVar2);
            }
            uVar7 = uVar13;
            iVar3 = 1;
            goto LAB_143d3605a;
          }
          uVar14 = 0x26;
LAB_143d35fb8:
          ERR_put_error(0x22,0xa9,0x41,"crypto\\x509v3\\pcy_cache.c",uVar14);
        }
        OPENSSL_sk_pop_free(lVar6,FUN_143d79a10);
        if (iVar11 < 1) {
          OPENSSL_sk_pop_free(puVar1[1],policy_data_free);
          puVar1[1] = 0;
          return iVar11;
        }
        local_res8[0] = iVar11;
        lVar6 = X509_get_ext_d2i(param_1,0x2eb,local_res8,0);
        if (lVar6 == 0) {
          uVar7 = uVar13;
          if (local_res8[0] == -1) {
LAB_143d36133:
            uVar7 = X509_get_ext_d2i(param_1,0x2ec,local_res8,0);
            if (uVar7 == 0) {
              if (local_res8[0] == -1) goto LAB_143d3617d;
            }
            else {
              iVar3 = policy_cache_set_int(local_res18,uVar7);
              if (iVar3 != 0) goto LAB_143d3617d;
            }
          }
        }
        else {
          local_res8[0] = policy_cache_set_mapping(param_1,lVar6);
          uVar7 = uVar12;
          if (0 < local_res8[0]) goto LAB_143d36133;
        }
      }
    }
  }
  else if ((((*plVar5 != 0) || (plVar5[1] != 0)) &&
           (iVar3 = policy_cache_set_int((undefined4 *)((longlong)puVar4 + 0x14)), iVar3 != 0)) &&
          (iVar3 = policy_cache_set_int(puVar4 + 3,plVar5[1]), iVar3 != 0)) goto LAB_143d35f36;
  *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x800;
LAB_143d3617d:
  POLICY_CONSTRAINTS_free(local_res20);
  ASN1_BIT_STRING_free(uVar7);
  return 1;
}



// FUNCTION 143d361b0 policy_cache_set body=75 status=ok
// SIG undefined policy_cache_set(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong policy_cache_set(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xf0);
  if (lVar1 == 0) {
    CRYPTO_THREAD_read_lock(*(undefined8 *)(param_1 + 0x140));
    policy_cache_new(param_1);
    CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x140));
    lVar1 = *(longlong *)(param_1 + 0xf0);
  }
  return lVar1;
}



// FUNCTION 143d36200 policy_cache_set_int body=61 status=ok
// SIG undefined policy_cache_set_int(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 policy_cache_set_int(undefined4 *param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    if (*(int *)(param_2 + 4) == 0x102) {
      return 0;
    }
    uVar1 = ASN1_INTEGER_get(param_2);
    *param_1 = uVar1;
  }
  return 1;
}



// FUNCTION 143d36240 policy_data_cmp body=36 status=ok
// SIG undefined policy_data_cmp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void policy_data_cmp(longlong *param_1,longlong *param_2)

{
  OBJ_cmp(*(undefined8 *)(*param_1 + 8),*(undefined8 *)(*param_2 + 8));
  return;
}



// FUNCTION 143d36270 ASN1_OBJECT_free body=165 status=ok
// SIG undefined ASN1_OBJECT_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_OBJECT_free(undefined8 *param_1)

{
  uint uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *(uint *)(param_1 + 4);
    if ((uVar1 & 4) != 0) {
      CRYPTO_free(*param_1,"crypto\\asn1\\a_object.c",0x164);
      CRYPTO_free(param_1[1],"crypto\\asn1\\a_object.c",0x165);
      uVar1 = *(uint *)(param_1 + 4);
      param_1[1] = 0;
      *param_1 = 0;
    }
    if ((uVar1 & 8) != 0) {
      CRYPTO_free(param_1[3],"crypto\\asn1\\a_object.c",0x16a);
      uVar1 = *(uint *)(param_1 + 4);
      param_1[3] = 0;
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    }
    if ((uVar1 & 1) != 0) {
      CRYPTO_free(param_1,"crypto\\asn1\\a_object.c",0x16f);
    }
  }
  return;
}



// FUNCTION 143d36320 ASN1_OBJECT_new body=88 status=ok
// SIG undefined ASN1_OBJECT_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ASN1_OBJECT_new(void)

{
  longlong lVar1;
  
  lVar1 = CRYPTO_zalloc(0x28,"crypto\\asn1\\a_object.c",0x153);
  if (lVar1 == 0) {
    ERR_put_error(0xd,0x7b,0x41,"crypto\\asn1\\a_object.c",0x155);
    return 0;
  }
  *(undefined4 *)(lVar1 + 0x20) = 1;
  return lVar1;
}



// FUNCTION 143d36380 a2d_ASN1_OBJECT body=1076 status=ok
// SIG undefined a2d_ASN1_OBJECT(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int a2d_ASN1_OBJECT(longlong param_1,int param_2,char *param_3,uint param_4)

{
  byte *pbVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong lVar7;
  byte *pbVar8;
  longlong lVar9;
  byte bVar10;
  uint uVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  int local_78;
  uint local_74;
  int local_70;
  int local_6c;
  char *local_68;
  longlong local_60;
  undefined1 local_58 [24];
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  puVar6 = local_58;
  lVar5 = 0;
  local_78 = 0;
  local_70 = 0x18;
  uVar15 = (ulonglong)param_4;
  if (param_4 == 0) {
    return 0;
  }
  if (param_4 == 0xffffffff) {
    uVar15 = 0xffffffffffffffff;
    do {
      uVar15 = uVar15 + 1;
    } while (param_3[uVar15] != '\0');
  }
  local_74 = (int)*param_3 - 0x30;
  local_6c = param_2;
  local_60 = param_1;
  if (local_74 < 3) {
    if (0 < (int)uVar15 + -1) {
      iVar13 = (int)param_3[1];
      iVar14 = (int)uVar15 + -2;
      local_68 = param_3 + 2;
      if (0 < iVar14) {
        do {
          if ((iVar13 != 0x2e) && (iVar13 != 0x20)) {
            local_88 = 0x57;
            uVar12 = 0x83;
LAB_143d366f3:
            ERR_put_error(0xd,100,uVar12,"crypto\\asn1\\a_object.c");
LAB_143d36707:
            if (puVar6 != local_58) {
              CRYPTO_free(puVar6,"crypto\\asn1\\a_object.c",0xaf);
            }
            goto LAB_143d36777;
          }
          uVar15 = 0;
          bVar2 = false;
          while (uVar11 = (uint)uVar15, 0 < iVar14) {
            iVar13 = (int)*local_68;
            iVar14 = iVar14 + -1;
            local_68 = local_68 + 1;
            if ((iVar13 == 0x20) || (iVar13 == 0x2e)) break;
            iVar3 = ossl_ctype_check(iVar13,4);
            if (iVar3 == 0) {
              local_88 = 100;
              uVar12 = 0x82;
              goto LAB_143d366f3;
            }
            if (bVar2) {
LAB_143d364f7:
              iVar3 = BN_mul_word(lVar5,10);
              if ((iVar3 == 0) ||
                 (iVar3 = BN_add_word(lVar5,(longlong)(iVar13 + -0x30)), iVar3 == 0))
              goto LAB_143d36707;
            }
            else {
              if (0x19999990 < uVar11) {
                bVar2 = true;
                if (((lVar5 != 0) || (lVar5 = BN_new(), lVar5 != 0)) &&
                   (iVar3 = BN_set_word(lVar5,uVar15), iVar3 != 0)) goto LAB_143d364f7;
                goto LAB_143d36707;
              }
              uVar15 = (ulonglong)(iVar13 + (uVar11 * 5 + -0x18) * 2);
            }
          }
          if (local_78 != 0) goto LAB_143d3657d;
          if (((int)local_74 < 2) && (0x27 < uVar11)) {
            local_88 = 0x78;
            uVar12 = 0x93;
            goto LAB_143d366f3;
          }
          if (bVar2) {
            iVar3 = BN_add_word(lVar5,(longlong)(int)(local_74 * 0x28));
            if (iVar3 != 0) goto LAB_143d3657d;
            goto LAB_143d36707;
          }
          uVar15 = (ulonglong)(uVar11 + local_74 * 0x28);
LAB_143d3657d:
          iVar3 = 0;
          lVar9 = 0;
          if (bVar2) {
            iVar4 = BN_num_bits(lVar5);
            iVar4 = (iVar4 + 6) / 7;
            if (local_70 < iVar4) {
              if (puVar6 != local_58) {
                CRYPTO_free(puVar6,"crypto\\asn1\\a_object.c",0x88);
              }
              local_70 = iVar4 + 0x20;
              puVar6 = (undefined1 *)
                       CRYPTO_malloc((longlong)local_70,"crypto\\asn1\\a_object.c",0x8a);
              if (puVar6 == (undefined1 *)0x0) goto LAB_143d36707;
            }
            while (iVar4 != 0) {
              iVar4 = iVar4 + -1;
              lVar7 = BN_div_word(lVar5,0x80);
              if (lVar7 == -1) goto LAB_143d36707;
              puVar6[lVar9] = (char)lVar7;
              iVar3 = iVar3 + 1;
              lVar9 = lVar9 + 1;
            }
          }
          else {
            do {
              bVar10 = (byte)uVar15;
              iVar3 = iVar3 + 1;
              uVar15 = uVar15 >> 7;
              puVar6[lVar9] = bVar10 & 0x7f;
              lVar9 = lVar9 + 1;
            } while ((int)uVar15 != 0);
          }
          iVar3 = iVar3 + local_78;
          if (local_60 != 0) {
            if (local_6c < iVar3) {
              local_88 = 0xa0;
              uVar12 = 0x6b;
              goto LAB_143d366f3;
            }
            lVar9 = lVar9 + -1;
            if (0 < lVar9) {
              lVar7 = (longlong)local_78;
              local_78 = local_78 + (int)lVar9;
              pbVar8 = (byte *)(lVar7 + local_60);
              do {
                pbVar1 = puVar6 + lVar9;
                lVar9 = lVar9 + -1;
                *pbVar8 = *pbVar1 | 0x80;
                pbVar8 = pbVar8 + 1;
              } while (0 < lVar9);
            }
            iVar3 = local_78 + 1;
            *(undefined1 *)(local_78 + local_60) = *puVar6;
          }
          local_78 = iVar3;
        } while (0 < iVar14);
        if (puVar6 != local_58) {
          CRYPTO_free(puVar6,"crypto\\asn1\\a_object.c",0xaa);
        }
      }
      BN_free(lVar5);
      return local_78;
    }
    local_88 = 0x4e;
    uVar12 = 0x8a;
  }
  else {
    local_88 = 0x49;
    uVar12 = 0x7a;
  }
  ERR_put_error(0xd,100,uVar12,"crypto\\asn1\\a_object.c");
LAB_143d36777:
  BN_free(lVar5);
  return 0;
}



// FUNCTION 143d367c0 c2i_ASN1_OBJECT body=603 status=ok
// SIG undefined c2i_ASN1_OBJECT(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * c2i_ASN1_OBJECT(undefined8 *param_1,longlong *param_2,int param_3)

{
  void *_Src;
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  void *_Dst;
  char *pcVar4;
  size_t _Size;
  undefined1 local_58 [16];
  undefined4 local_48;
  int local_44;
  char *local_40;
  undefined4 local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x143d367d2;
  _Size = (size_t)param_3;
  if ((((param_3 < 1) || (param_2 == (longlong *)0x0)) ||
      (pcVar4 = (char *)*param_2, pcVar4 == (char *)0x0)) || (pcVar4[_Size - 1] < '\0')) {
    ERR_put_error(0xd,0xc4,0xd8,"crypto\\asn1\\a_object.c",0xfe);
    return (undefined8 *)0x0;
  }
  iVar2 = 0;
  local_48 = 0;
  local_38 = 0;
  local_44 = param_3;
  local_40 = pcVar4;
  iVar1 = OBJ_obj2nid(local_58);
  if (iVar1 == 0) {
    if (0 < param_3) {
      do {
        if ((*pcVar4 == -0x80) && ((iVar2 == 0 || (-1 < pcVar4[-1])))) {
          ERR_put_error(0xd,0xc4,0xd8,"crypto\\asn1\\a_object.c",0x11c);
          return (undefined8 *)0x0;
        }
        iVar2 = iVar2 + 1;
        pcVar4 = pcVar4 + 1;
      } while (iVar2 < param_3);
    }
    if (((param_1 == (undefined8 *)0x0) ||
        (puVar3 = (undefined8 *)*param_1, puVar3 == (undefined8 *)0x0)) ||
       ((*(byte *)(puVar3 + 4) & 1) == 0)) {
      puVar3 = (undefined8 *)CRYPTO_zalloc(0x28,"crypto\\asn1\\a_object.c",0x153);
      if (puVar3 == (undefined8 *)0x0) {
        ERR_put_error(0xd,0x7b,0x41,"crypto\\asn1\\a_object.c",0x155);
        return (undefined8 *)0x0;
      }
      *(undefined4 *)(puVar3 + 4) = 1;
    }
    _Src = (void *)*param_2;
    _Dst = (void *)puVar3[3];
    puVar3[3] = 0;
    if ((_Dst == (void *)0x0) || (*(int *)((longlong)puVar3 + 0x14) < param_3)) {
      *(undefined4 *)((longlong)puVar3 + 0x14) = 0;
      CRYPTO_free(_Dst,"crypto\\asn1\\a_object.c",0x133);
      _Dst = (void *)CRYPTO_malloc(_Size,"crypto\\asn1\\a_object.c",0x134);
      if (_Dst == (void *)0x0) {
        ERR_put_error(0xd,0xc4,0x41,"crypto\\asn1\\a_object.c",0x149);
        if ((param_1 == (undefined8 *)0x0) || ((undefined8 *)*param_1 != puVar3)) {
          ASN1_OBJECT_free(puVar3);
        }
        return (undefined8 *)0x0;
      }
      *(uint *)(puVar3 + 4) = *(uint *)(puVar3 + 4) | 8;
    }
    _guard_xfg_dispatch_icall_nop(_Dst,_Src,_Size);
    puVar3[3] = _Dst;
    *(int *)((longlong)puVar3 + 0x14) = param_3;
    *puVar3 = 0;
    puVar3[1] = 0;
    if (param_1 != (undefined8 *)0x0) {
      *param_1 = puVar3;
    }
    *param_2 = (longlong)_Src + _Size;
  }
  else {
    puVar3 = (undefined8 *)OBJ_nid2obj(iVar1);
    if (param_1 != (undefined8 *)0x0) {
      ASN1_OBJECT_free(*param_1);
      *param_1 = puVar3;
    }
    *param_2 = *param_2 + _Size;
  }
  return puVar3;
}



// FUNCTION 143d36a20 d2i_ASN1_OBJECT body=173 status=ok
// SIG undefined d2i_ASN1_OBJECT(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong d2i_ASN1_OBJECT(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  int local_res10 [4];
  undefined4 local_res20 [2];
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = *param_2;
  cVar1 = ASN1_get_object(&local_10,local_res20,local_res10,local_18,param_3);
  if (cVar1 < '\0') {
    uVar3 = 0x66;
  }
  else {
    if (local_res10[0] == 6) {
      lVar2 = c2i_ASN1_OBJECT(param_1,&local_10,local_res20[0]);
      if (lVar2 != 0) {
        *param_2 = local_10;
      }
      return lVar2;
    }
    uVar3 = 0x74;
  }
  ERR_put_error(0xd,0x93,uVar3,"crypto\\asn1\\a_object.c",0xeb);
  return 0;
}



// FUNCTION 143d36ad0 i2a_ASN1_OBJECT body=354 status=ok
// SIG undefined i2a_ASN1_OBJECT(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong i2a_ASN1_OBJECT(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [80];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x143d36ade;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  puVar4 = local_78;
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x18) == 0)) {
    uVar5 = BIO_write(param_1,&DAT_145d4a5b8,4);
  }
  else {
    uVar1 = OBJ_obj2txt(local_78,0x50,param_2);
    if (0x4f < (int)uVar1) {
      puVar4 = (undefined1 *)
               CRYPTO_malloc((longlong)(int)(uVar1 + 1),"crypto\\asn1\\a_object.c",0xc2);
      if (puVar4 == (undefined1 *)0x0) {
        local_88 = 0xc3;
        ERR_put_error(0xd,0x7e,0x41,"crypto\\asn1\\a_object.c");
        return 0xffffffff;
      }
      OBJ_obj2txt(puVar4,uVar1 + 1,param_2,0);
    }
    if ((int)uVar1 < 1) {
      iVar2 = BIO_write(param_1,"<INVALID>",9);
      iVar3 = BIO_dump(param_1,*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x14));
      uVar5 = (ulonglong)(uint)(iVar3 + iVar2);
    }
    else {
      BIO_write(param_1,puVar4,uVar1);
      if (puVar4 != local_78) {
        CRYPTO_free(puVar4,"crypto\\asn1\\a_object.c",0xcf);
      }
      uVar5 = (ulonglong)uVar1;
    }
  }
  return uVar5;
}



// FUNCTION 143d36c40 i2t_ASN1_OBJECT body=25 status=ok
// SIG undefined i2t_ASN1_OBJECT(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2t_ASN1_OBJECT(void)

{
  OBJ_obj2txt();
  return;
}



// FUNCTION 143d36c60 ASN1_STRING_clear_free body=59 status=ok
// SIG undefined ASN1_STRING_clear_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_STRING_clear_free(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if ((*(longlong *)(param_1 + 2) != 0) && ((*(byte *)(param_1 + 4) & 0x10) == 0)) {
      FUN_14004ff40(*(longlong *)(param_1 + 2),(longlong)*param_1);
    }
    ASN1_STRING_free(param_1);
  }
  return;
}



// FUNCTION 143d36ca0 ASN1_STRING_cmp body=71 status=ok
// SIG undefined ASN1_STRING_cmp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int ASN1_STRING_cmp(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1 - *param_2;
  if (iVar1 == 0) {
    iVar1 = _guard_xfg_dispatch_icall_nop
                      (*(void **)(param_1 + 2),*(void **)(param_2 + 2),(longlong)*param_1);
    if (iVar1 == 0) {
      iVar1 = param_1[1] - param_2[1];
    }
  }
  return iVar1;
}



// FUNCTION 143d36cf0 ASN1_STRING_copy body=269 status=ok
// SIG undefined ASN1_STRING_copy(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASN1_STRING_copy(int *param_1,uint *param_2)

{
  longlong *plVar1;
  void *_Src;
  longlong lVar2;
  void *_Dst;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143d36d14;
  if (param_2 == (uint *)0x0) {
LAB_143d36da4:
    uVar5 = 0;
  }
  else {
    param_1[1] = param_2[1];
    uVar4 = (ulonglong)*param_2;
    _Src = *(void **)(param_2 + 2);
    if ((int)*param_2 < 0) {
      if (_Src == (void *)0x0) goto LAB_143d36da4;
      uVar4 = 0xffffffffffffffff;
      do {
        uVar4 = uVar4 + 1;
      } while (*(char *)((longlong)_Src + uVar4) != '\0');
    }
    plVar1 = (longlong *)(param_1 + 2);
    iVar3 = (int)uVar4;
    if ((*param_1 <= iVar3) || (_Dst = (void *)*plVar1, _Dst == (void *)0x0)) {
      lVar2 = *plVar1;
      _Dst = (void *)CRYPTO_realloc(lVar2,(longlong)(iVar3 + 1),"crypto\\asn1\\asn1_lib.c",0x11c);
      *plVar1 = (longlong)_Dst;
      if (_Dst == (void *)0x0) {
        ERR_put_error(0xd,0xba,0x41,"crypto\\asn1\\asn1_lib.c",0x11e,uVar5);
        *plVar1 = lVar2;
        goto LAB_143d36da4;
      }
    }
    *param_1 = iVar3;
    if (_Src != (void *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar3);
      *(undefined1 *)((longlong)iVar3 + *plVar1) = 0;
    }
    param_1[4] = param_1[4] & 0x80;
    param_1[4] = param_1[4] | param_2[4] & 0xffffff7f;
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 143d36e00 ASN1_STRING_dup body=355 status=ok
// SIG undefined ASN1_STRING_dup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * ASN1_STRING_dup(uint *param_1)

{
  longlong *plVar1;
  void *_Src;
  longlong lVar2;
  int *piVar3;
  void *_Dst;
  int iVar4;
  ulonglong uVar5;
  
  if (param_1 == (uint *)0x0) {
    return (int *)0x0;
  }
  piVar3 = (int *)CRYPTO_zalloc(0x18,"crypto\\asn1\\asn1_lib.c",0x13c);
  if (piVar3 == (int *)0x0) {
    ERR_put_error(0xd,0x82,0x41,"crypto\\asn1\\asn1_lib.c",0x13e);
    return (int *)0x0;
  }
  piVar3[1] = 4;
  piVar3[1] = param_1[1];
  uVar5 = (ulonglong)*param_1;
  _Src = *(void **)(param_1 + 2);
  if ((int)*param_1 < 0) {
    if (_Src != (void *)0x0) {
      uVar5 = 0xffffffffffffffff;
      do {
        uVar5 = uVar5 + 1;
      } while (*(char *)((longlong)_Src + uVar5) != '\0');
      goto LAB_143d36ea9;
    }
LAB_143d36f02:
    ASN1_STRING_free(piVar3);
    piVar3 = (int *)0x0;
  }
  else {
LAB_143d36ea9:
    plVar1 = (longlong *)(piVar3 + 2);
    iVar4 = (int)uVar5;
    if ((*piVar3 <= iVar4) || (_Dst = (void *)*plVar1, _Dst == (void *)0x0)) {
      lVar2 = *plVar1;
      _Dst = (void *)CRYPTO_realloc(lVar2,(longlong)(iVar4 + 1),"crypto\\asn1\\asn1_lib.c",0x11c);
      *plVar1 = (longlong)_Dst;
      if (_Dst == (void *)0x0) {
        ERR_put_error(0xd,0xba,0x41,"crypto\\asn1\\asn1_lib.c",0x11e);
        *plVar1 = lVar2;
        goto LAB_143d36f02;
      }
    }
    *piVar3 = iVar4;
    if (_Src != (void *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar4);
      *(undefined1 *)((longlong)iVar4 + *plVar1) = 0;
    }
    piVar3[4] = piVar3[4] & 0x80;
    piVar3[4] = piVar3[4] | param_1[4] & 0xffffff7f;
  }
  return piVar3;
}



// FUNCTION 143d36f70 ASN1_STRING_free body=100 status=ok
// SIG undefined ASN1_STRING_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_STRING_free(longlong param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0x10);
    if ((uVar1 & 0x10) == 0) {
      CRYPTO_free(*(undefined8 *)(param_1 + 8),"crypto\\asn1\\asn1_lib.c",0x14a);
    }
    if ((uVar1 & 0x80) == 0) {
      CRYPTO_free(param_1,"crypto\\asn1\\asn1_lib.c",0x14c);
    }
  }
  return;
}



// FUNCTION 143d36fe0 ASN1_STRING_new body=90 status=ok
// SIG undefined ASN1_STRING_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ASN1_STRING_new(void)

{
  longlong lVar1;
  
  lVar1 = CRYPTO_zalloc(0x18,"crypto\\asn1\\asn1_lib.c",0x13c);
  if (lVar1 == 0) {
    ERR_put_error(0xd,0x82,0x41,"crypto\\asn1\\asn1_lib.c",0x13e);
    return 0;
  }
  *(undefined4 *)(lVar1 + 4) = 4;
  return lVar1;
}



// FUNCTION 143d37040 ASN1_STRING_set body=233 status=ok
// SIG undefined ASN1_STRING_set(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASN1_STRING_set(int *param_1,void *param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  void *_Dst;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143d3704f;
  uVar4 = param_3 & 0xffffffff;
  if ((int)param_3 < 0) {
    if (param_2 == (void *)0x0) {
      return 0;
    }
    uVar4 = 0xffffffffffffffff;
    do {
      uVar4 = uVar4 + 1;
    } while (*(char *)((longlong)param_2 + uVar4) != '\0');
  }
  plVar1 = (longlong *)(param_1 + 2);
  iVar3 = (int)uVar4;
  if ((*param_1 <= iVar3) || (_Dst = (void *)*plVar1, _Dst == (void *)0x0)) {
    lVar2 = *plVar1;
    _Dst = (void *)CRYPTO_realloc(lVar2,(longlong)(iVar3 + 1),"crypto\\asn1\\asn1_lib.c",0x11c);
    *plVar1 = (longlong)_Dst;
    if (_Dst == (void *)0x0) {
      ERR_put_error(0xd,0xba,0x41,"crypto\\asn1\\asn1_lib.c",0x11e,uVar5);
      *plVar1 = lVar2;
      return 0;
    }
  }
  *param_1 = iVar3;
  if (param_2 != (void *)0x0) {
    _guard_xfg_dispatch_icall_nop(_Dst,param_2,(longlong)iVar3);
    *(undefined1 *)((longlong)iVar3 + *plVar1) = 0;
  }
  return 1;
}



// FUNCTION 143d37130 ASN1_STRING_set0 body=77 status=ok
// SIG undefined ASN1_STRING_set0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_STRING_set0(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  CRYPTO_free(*(undefined8 *)(param_1 + 2),"crypto\\asn1\\asn1_lib.c",0x12e);
  *(undefined8 *)(param_1 + 2) = param_2;
  *param_1 = param_3;
  return;
}



// FUNCTION 143d37180 ASN1_STRING_type_new body=92 status=ok
// SIG undefined ASN1_STRING_type_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ASN1_STRING_type_new(undefined4 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143d3718c;
  lVar1 = CRYPTO_zalloc(0x18,"crypto\\asn1\\asn1_lib.c",0x13c);
  if (lVar1 == 0) {
    ERR_put_error(0xd,0x82,0x41,"crypto\\asn1\\asn1_lib.c",0x13e,uVar2);
    return 0;
  }
  *(undefined4 *)(lVar1 + 4) = param_1;
  return lVar1;
}



// FUNCTION 143d371e0 ASN1_get_object body=454 status=ok
// SIG undefined ASN1_get_object(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint ASN1_get_object(longlong *param_1,uint *param_2,uint *param_3,uint *param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  if (param_5 != 0) {
    bVar1 = *(byte *)*param_1;
    iVar9 = param_5 + -1;
    uVar6 = bVar1 & 0x20;
    uVar3 = bVar1 & 0x1f;
    uVar8 = 0;
    pbVar5 = (byte *)*param_1 + 1;
    if (uVar3 == 0x1f) {
      if (iVar9 == 0) goto LAB_143d3731c;
      uVar3 = 0;
      bVar2 = *pbVar5;
      while ((char)bVar2 < '\0') {
        pbVar5 = pbVar5 + 1;
        uVar3 = bVar2 & 0x7f | uVar3 << 7;
        iVar9 = iVar9 + -1;
        if ((iVar9 == 0) || (0xffffff < (int)uVar3)) goto LAB_143d3731c;
        bVar2 = *pbVar5;
      }
      pbVar5 = pbVar5 + 1;
      uVar3 = bVar2 & 0x7f | uVar3 << 7;
      iVar9 = iVar9 + -1;
    }
    if (iVar9 != 0) {
      *param_3 = uVar3;
      *param_4 = bVar1 & 0xc0;
      if (0 < iVar9) {
        bVar2 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        if (bVar2 == 0x80) {
          uVar3 = uVar8;
          uVar7 = 1;
        }
        else {
          uVar7 = 0;
          uVar3 = bVar2 & 0x7f;
          if ((char)bVar2 < '\0') {
            if (iVar9 + -1 < (int)(uVar3 + 1)) goto LAB_143d3731c;
            uVar4 = uVar3;
            if ((bVar2 & 0x7f) != 0) {
              do {
                uVar4 = uVar3;
                if (*pbVar5 != 0) break;
                pbVar5 = pbVar5 + 1;
                uVar3 = uVar3 - 1;
                uVar4 = uVar3;
              } while (0 < (int)uVar3);
            }
            if (4 < (int)uVar4) goto LAB_143d3731c;
            uVar3 = 0;
            uVar7 = 0;
            if (0 < (int)uVar4) {
              do {
                bVar2 = *pbVar5;
                uVar4 = uVar4 - 1;
                pbVar5 = pbVar5 + 1;
                uVar8 = uVar8 << 8 | (uint)bVar2;
              } while (0 < (int)uVar4);
              uVar3 = uVar8;
              uVar7 = 0;
              if (0x7fffffff < uVar8) goto LAB_143d3731c;
            }
          }
        }
        *param_2 = uVar3;
        if ((uVar7 == 0) || ((bVar1 & 0x20) != 0)) {
          if (((longlong)param_5 - (longlong)pbVar5) + *param_1 < (longlong)(int)uVar3) {
            ERR_put_error(0xd,0x72,0x9b,"crypto\\asn1\\asn1_lib.c",0x5b,0x143d371fe);
            uVar6 = uVar6 | 0x80;
          }
          *param_1 = (longlong)pbVar5;
          return uVar7 | uVar6;
        }
      }
    }
  }
LAB_143d3731c:
  ERR_put_error(0xd,0x72,0x7b,"crypto\\asn1\\asn1_lib.c",0x65,0x143d371fe);
  return 0x80;
}



// FUNCTION 143d373b0 ASN1_object_size body=79 status=ok
// SIG undefined ASN1_object_size(void)

int ASN1_object_size(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  if (-1 < param_2) {
    if (0x1e < param_3) {
      do {
        param_3 = param_3 >> 7;
        iVar2 = iVar2 + 1;
      } while (0 < param_3);
    }
    if (param_1 == 2) {
      iVar2 = iVar2 + 3;
    }
    else {
      iVar2 = iVar2 + 1;
      iVar1 = param_2;
      if (0x7f < param_2) {
        for (; 0 < iVar1; iVar1 = iVar1 >> 8) {
          iVar2 = iVar2 + 1;
        }
      }
    }
    if (iVar2 < 0x7fffffff - param_2) {
      return iVar2 + param_2;
    }
  }
  return -1;
}



// FUNCTION 143d37400 ASN1_put_eoc body=21 status=ok
// SIG undefined ASN1_put_eoc(void)

undefined8 ASN1_put_eoc(undefined8 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)*param_1;
  *puVar1 = 0;
  *param_1 = puVar1 + 1;
  return 2;
}



// FUNCTION 143d37420 ASN1_put_object body=302 status=ok
// SIG undefined ASN1_put_object(void)

void ASN1_put_object(longlong *param_1,int param_2,int param_3,int param_4,byte param_5)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  
  pbVar2 = (byte *)*param_1;
  pbVar7 = pbVar2 + 1;
  iVar6 = 0;
  bVar5 = -(param_2 != 0) & 0x20U | param_5 & 0xc0;
  if (param_4 < 0x1f) {
    *pbVar2 = (byte)param_4 & 0x1f | bVar5;
  }
  else {
    *pbVar2 = bVar5 | 0x1f;
    iVar1 = iVar6;
    for (iVar3 = param_4; 0 < iVar3; iVar3 = iVar3 >> 7) {
      iVar1 = iVar1 + 1;
    }
    lVar4 = (longlong)iVar1;
    if (0 < iVar1) {
      iVar3 = iVar1 + -1;
      pbVar2 = pbVar7 + iVar1;
      do {
        pbVar2 = pbVar2 + -1;
        bVar5 = (byte)param_4 & 0x7f;
        iVar1 = iVar1 + -1;
        *pbVar2 = bVar5;
        if (iVar1 != iVar3) {
          *pbVar2 = bVar5 | 0x80;
        }
        param_4 = param_4 >> 7;
      } while (0 < iVar1);
    }
    pbVar7 = pbVar7 + lVar4;
  }
  if (param_2 == 2) {
    *pbVar7 = 0x80;
    pbVar7 = pbVar7 + 1;
  }
  else {
    iVar1 = param_3;
    if (param_3 < 0x80) {
      *pbVar7 = (byte)param_3;
      pbVar7 = pbVar7 + 1;
    }
    else {
      for (; 0 < iVar1; iVar1 = iVar1 >> 8) {
        iVar6 = iVar6 + 1;
      }
      lVar4 = (longlong)iVar6;
      *pbVar7 = (byte)iVar6 | 0x80;
      if (0 < iVar6) {
        pbVar2 = pbVar7 + (longlong)iVar6 + 1;
        do {
          pbVar2 = pbVar2 + -1;
          iVar6 = iVar6 + -1;
          *pbVar2 = (byte)param_3;
          param_3 = param_3 >> 8;
        } while (0 < iVar6);
      }
      pbVar7 = pbVar7 + lVar4 + 1;
    }
  }
  *param_1 = (longlong)pbVar7;
  return;
}



// FUNCTION 143d37550 asn1_string_embed_free body=93 status=ok
// SIG undefined asn1_string_embed_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void asn1_string_embed_free(longlong param_1,int param_2)

{
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + 0x10) & 0x10) == 0) {
      CRYPTO_free(*(undefined8 *)(param_1 + 8),"crypto\\asn1\\asn1_lib.c",0x14a);
    }
    if (param_2 == 0) {
      CRYPTO_free(param_1,"crypto\\asn1\\asn1_lib.c",0x14c);
    }
  }
  return;
}



// FUNCTION 143d375b0 OBJ_find_sigid_algs body=184 status=ok
// SIG undefined OBJ_find_sigid_algs(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 OBJ_find_sigid_algs(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined4 local_28 [4];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143d375c0;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  local_28[0] = param_1;
  if (DAT_146bcb8e0 != 0) {
    uVar1 = OPENSSL_sk_find(DAT_146bcb8e0,local_28);
    lVar2 = OPENSSL_sk_value(DAT_146bcb8e0,uVar1);
    if (lVar2 != 0) goto LAB_143d37637;
  }
  local_38 = &LAB_1431fadb0;
  lVar2 = OBJ_bsearch_(local_28,&DAT_145d82680,0x30);
  if (lVar2 == 0) {
    return 0;
  }
LAB_143d37637:
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(lVar2 + 4);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(lVar2 + 8);
  }
  return 1;
}



// FUNCTION 143d37670 OBJ_find_sigid_by_algs body=201 status=ok
// SIG undefined OBJ_find_sigid_by_algs(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 OBJ_find_sigid_by_algs(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 **ppuVar2;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined1 *local_28;
  undefined1 local_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  local_28 = local_20;
  local_1c = param_2;
  local_18 = param_3;
  if (DAT_146bcb8e8 != 0) {
    iVar1 = OPENSSL_sk_find(DAT_146bcb8e8,local_20);
    if (-1 < iVar1) {
      local_28 = (undefined1 *)OPENSSL_sk_value(DAT_146bcb8e8,iVar1);
      ppuVar2 = &local_28;
      goto LAB_143d376d6;
    }
  }
  local_38 = &LAB_143d377c0;
  ppuVar2 = (undefined1 **)OBJ_bsearch_(&local_28,&PTR_DAT_145d828c0,0x2b);
  if (ppuVar2 == (undefined1 **)0x0) {
    return 0;
  }
LAB_143d376d6:
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)*ppuVar2;
  }
  return 1;
}



// FUNCTION 143d37740 OBJ_sigid_free body=71 status=ok
// SIG undefined OBJ_sigid_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OBJ_sigid_free(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  OPENSSL_sk_pop_free(DAT_146bcb8e0,sid_free,param_3,param_4,0x143d3774a);
  DAT_146bcb8e0 = 0;
  OPENSSL_sk_free(DAT_146bcb8e8);
  DAT_146bcb8e8 = 0;
  return;
}



// FUNCTION 143d37790 sid_free body=33 status=ok
// SIG undefined sid_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void sid_free(undefined8 param_1)

{
  CRYPTO_free(param_1,"crypto\\objects\\obj_xref.c",0x82);
  return;
}



// FUNCTION 143d377e0 CONF_free body=74 status=ok
// SIG undefined CONF_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CONF_free(undefined8 param_1)

{
  longlong local_28 [2];
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143d377ec;
  if (DAT_146bcb8f0 == 0) {
    DAT_146bcb8f0 = NCONF_default();
  }
  (**(code **)(DAT_146bcb8f0 + 0x10))(local_28);
  local_18 = param_1;
  (**(code **)(local_28[0] + 0x20))(local_28);
  return;
}



// FUNCTION 143d37830 CONF_get_section body=139 status=ok
// SIG undefined CONF_get_section(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CONF_get_section(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 local_28 [16];
  longlong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143d37840;
  if (param_1 != 0) {
    if (DAT_146bcb8f0 == 0) {
      DAT_146bcb8f0 = NCONF_default();
    }
    (**(code **)(DAT_146bcb8f0 + 0x10))(local_28);
    local_18 = param_1;
    if (param_2 != 0) {
      uVar1 = _CONF_get_section_values(local_28,param_2);
      return uVar1;
    }
    ERR_put_error(0xe,0x6c,0x6b,"crypto\\conf\\conf_lib.c",0xfa);
  }
  return 0;
}



// FUNCTION 143d378c0 CONF_get_string body=238 status=ok
// SIG undefined CONF_get_string(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong CONF_get_string(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar2;
  undefined1 local_28 [16];
  longlong local_18;
  undefined8 uStack_10;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uStack_10 = 0x143d378d5;
  if (param_1 == 0) {
    lVar1 = _CONF_get_string();
    if (lVar1 == 0) {
      ERR_put_error(0xe,0x6d,0x6a,"crypto\\conf\\conf_lib.c",CONCAT44(uVar2,0x10e));
      return 0;
    }
  }
  else {
    if (DAT_146bcb8f0 == 0) {
      DAT_146bcb8f0 = NCONF_default();
    }
    (**(code **)(DAT_146bcb8f0 + 0x10))(local_28);
    local_18 = param_1;
    lVar1 = _CONF_get_string(local_28,param_2,param_3);
    if (lVar1 == 0) {
      ERR_put_error(0xe,0x6d,0x6c,"crypto\\conf\\conf_lib.c",CONCAT44(uVar2,0x111));
      ERR_add_error_data(4,"group=",param_2," name=",param_3);
      lVar1 = 0;
    }
  }
  return lVar1;
}



// FUNCTION 143d379b0 NCONF_free body=29 status=ok
// SIG undefined NCONF_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void NCONF_free(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x18))();
  }
  return;
}



// FUNCTION 143d379d0 NCONF_get_number_e body=294 status=ok
// SIG undefined NCONF_get_number_e(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 NCONF_get_number_e(longlong *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  int iVar7;
  code *pcVar8;
  undefined8 uVar9;
  
  uVar9 = 0x143d379e4;
  pcVar6 = default_is_number;
  if (param_4 == (int *)0x0) {
    ERR_put_error(0xe,0x70,0x43,"crypto\\conf\\conf_lib.c",0x129,0x143d379e4);
    return 0;
  }
  puVar4 = (undefined1 *)NCONF_get_string();
  uVar5 = 0;
  if (puVar4 != (undefined1 *)0x0) {
    pcVar8 = (code *)&LAB_143d37ce0;
    if (param_1 != (longlong *)0x0) {
      pcVar2 = *(code **)(*param_1 + 0x38);
      if (pcVar2 != (code *)0x0) {
        pcVar6 = pcVar2;
      }
      pcVar2 = *(code **)(*param_1 + 0x40);
      if (pcVar2 != (code *)0x0) {
        pcVar8 = pcVar2;
      }
    }
    iVar7 = 0;
    iVar3 = (*pcVar6)(param_1,*puVar4);
    while (iVar3 != 0) {
      iVar3 = (*pcVar8)(param_1,*puVar4);
      if ((0x7fffffff - iVar3) / 10 < iVar7) {
        ERR_put_error(0xe,0x70,0x79,"crypto\\conf\\conf_lib.c",0x13c,uVar9);
        return 0;
      }
      puVar1 = puVar4 + 1;
      puVar4 = puVar4 + 1;
      iVar7 = iVar3 + iVar7 * 10;
      iVar3 = (*pcVar6)(param_1,*puVar1);
    }
    *param_4 = iVar7;
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 143d37b00 NCONF_get_section body=108 status=ok
// SIG undefined NCONF_get_section(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 NCONF_get_section(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    ERR_put_error(0xe,0x6c,0x69,"crypto\\conf\\conf_lib.c",0xf5);
    return 0;
  }
  if (param_2 == 0) {
    ERR_put_error(0xe,0x6c,0x6b,"crypto\\conf\\conf_lib.c",0xfa);
    return 0;
  }
  uVar1 = _CONF_get_section_values();
  return uVar1;
}



// FUNCTION 143d37b70 NCONF_get_string body=165 status=ok
// SIG undefined NCONF_get_string(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong NCONF_get_string(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar3 = 0x143d37b85;
  lVar1 = _CONF_get_string();
  if (lVar1 == 0) {
    if (param_1 == 0) {
      ERR_put_error(0xe,0x6d,0x6a,"crypto\\conf\\conf_lib.c",CONCAT44(uVar2,0x10e),uVar3);
      return 0;
    }
    ERR_put_error(0xe,0x6d,0x6c,"crypto\\conf\\conf_lib.c",CONCAT44(uVar2,0x111),uVar3);
    ERR_add_error_data(4,"group=",param_2," name=",param_3);
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 143d37c20 NCONF_load body=66 status=ok
// SIG undefined NCONF_load(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 NCONF_load(longlong *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (longlong *)0x0) {
    ERR_put_error(0xe,0x71,0x69,"crypto\\conf\\conf_lib.c",0xd2);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000143d37c5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x48))();
  return uVar1;
}



// FUNCTION 143d37c70 NCONF_new body=74 status=ok
// SIG undefined NCONF_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong NCONF_new(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    param_1 = NCONF_default();
  }
  lVar1 = (**(code **)(param_1 + 8))(param_1);
  if (lVar1 == 0) {
    ERR_put_error(0xe,0x6f,0x41,"crypto\\conf\\conf_lib.c",0xba);
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 143d37cc0 default_is_number body=28 status=ok
// SIG undefined default_is_number(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void default_is_number(undefined8 param_1,char param_2)

{
  ossl_ctype_check((int)param_2,4);
  return;
}



// FUNCTION 143d37cf0 DSO_bind_func body=118 status=ok
// SIG undefined DSO_bind_func(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong DSO_bind_func(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((param_1 == (longlong *)0x0) || (param_2 == 0)) {
    uVar3 = 0xb2;
    uVar2 = 0x43;
  }
  else if (*(code **)(*param_1 + 0x18) == (code *)0x0) {
    uVar3 = 0xb6;
    uVar2 = 0x6c;
  }
  else {
    lVar1 = (**(code **)(*param_1 + 0x18))();
    if (lVar1 != 0) {
      return lVar1;
    }
    uVar3 = 0xba;
    uVar2 = 0x6a;
  }
  ERR_put_error(0x25,0x6c,uVar2,"crypto\\dso\\dso_lib.c",uVar3);
  return 0;
}



// FUNCTION 143d37d70 DSO_convert_filename body=176 status=ok
// SIG undefined DSO_convert_filename(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong DSO_convert_filename(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143d37d7c;
  if (param_1 == (longlong *)0x0) {
    uVar3 = 0x11d;
    uVar2 = 0x43;
    goto LAB_143d37e04;
  }
  if ((param_2 == 0) && (param_2 = param_1[6], param_2 == 0)) {
    uVar3 = 0x123;
    uVar2 = 0x6f;
    goto LAB_143d37e04;
  }
  if ((*(byte *)((longlong)param_1 + 0x14) & 1) == 0) {
    if ((code *)param_1[4] == (code *)0x0) {
      if (*(code **)(*param_1 + 0x28) == (code *)0x0) goto LAB_143d37dde;
      lVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_2);
    }
    else {
      lVar1 = (*(code *)param_1[4])(param_1,param_2);
    }
    if (lVar1 != 0) {
      return lVar1;
    }
  }
LAB_143d37dde:
  lVar1 = CRYPTO_strdup(param_2,"crypto\\dso\\dso_lib.c",0x12d);
  if (lVar1 != 0) {
    return lVar1;
  }
  uVar3 = 0x12f;
  uVar2 = 0x41;
LAB_143d37e04:
  ERR_put_error(0x25,0x7e,uVar2,"crypto\\dso\\dso_lib.c",uVar3,uVar4);
  return 0;
}



// FUNCTION 143d37e20 DSO_ctrl body=175 status=ok
// SIG undefined DSO_ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong DSO_ctrl(longlong *param_1,int param_2,uint param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar1;
  
  if (param_1 == (longlong *)0x0) {
    ERR_put_error(0x25,0x6e,0x43,"crypto\\dso\\dso_lib.c",0xcd);
    return 0xffffffff;
  }
  if (param_2 == 1) {
    return (ulonglong)*(uint *)((longlong)param_1 + 0x14);
  }
  if (param_2 == 2) {
    *(uint *)((longlong)param_1 + 0x14) = param_3;
    return 0;
  }
  if (param_2 != 3) {
    if ((*param_1 != 0) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x20), UNRECOVERED_JUMPTABLE != (code *)0x0))
    {
                    /* WARNING: Could not recover jumptable at 0x000143d37e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return uVar1;
    }
    ERR_put_error(0x25,0x6e,0x6c,"crypto\\dso\\dso_lib.c",0xe1);
    return 0xffffffff;
  }
  *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | param_3;
  return 0;
}



// FUNCTION 143d37ed0 DSO_free body=261 status=ok
// SIG undefined DSO_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 DSO_free(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143d37edc;
  if (param_1 != (longlong *)0x0) {
    LOCK();
    plVar1 = param_1 + 2;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 < 2) {
      if (((*(byte *)((longlong)param_1 + 0x14) & 4) == 0) &&
         (*(code **)(*param_1 + 0x10) != (code *)0x0)) {
        iVar3 = (**(code **)(*param_1 + 0x10))();
        if (iVar3 == 0) {
          ERR_put_error(0x25,0x6f,0x6b,"crypto\\dso\\dso_lib.c",0x4f,uVar4);
          return 0;
        }
      }
      if (*(code **)(*param_1 + 0x40) != (code *)0x0) {
        iVar3 = (**(code **)(*param_1 + 0x40))(param_1);
        if (iVar3 == 0) {
          ERR_put_error(0x25,0x6f,0x66,"crypto\\dso\\dso_lib.c",0x55,uVar4);
          return 0;
        }
      }
      OPENSSL_sk_free(param_1[1]);
      CRYPTO_free(param_1[6],"crypto\\dso\\dso_lib.c",0x5a);
      CRYPTO_free(param_1[7],"crypto\\dso\\dso_lib.c",0x5b);
      CRYPTO_THREAD_lock_free(param_1[8]);
      CRYPTO_free(param_1,"crypto\\dso\\dso_lib.c",0x5d);
    }
  }
  return 1;
}



// FUNCTION 143d37fe0 DSO_load body=349 status=ok
// SIG undefined DSO_load(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * DSO_load(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143d37ffa;
  bVar1 = false;
  if (param_1 == (longlong *)0x0) {
    param_1 = (longlong *)DSO_new_method(param_3);
    if (param_1 == (longlong *)0x0) {
      uVar2 = 0x7f;
      uVar5 = 0x41;
      goto LAB_143d380fd;
    }
    bVar1 = true;
    *(undefined4 *)((longlong)param_1 + 0x14) = param_4;
  }
  if (param_1[6] != 0) {
    uVar2 = 0x8c;
    uVar5 = 0x6e;
    goto LAB_143d380fd;
  }
  lVar4 = 0;
  if (param_2 == 0) {
LAB_143d380c4:
    if (lVar4 == 0) {
      uVar2 = 0x9a;
      uVar5 = 0x6f;
    }
    else if (*(code **)(*param_1 + 8) == (code *)0x0) {
      uVar2 = 0x9e;
      uVar5 = 0x6c;
    }
    else {
      iVar3 = (**(code **)(*param_1 + 8))(param_1);
      if (iVar3 != 0) {
        return param_1;
      }
      uVar2 = 0xa2;
      uVar5 = 0x67;
    }
  }
  else {
    if (param_1[7] == 0) {
      lVar4 = CRYPTO_strdup(param_2,"crypto\\dso\\dso_lib.c",0xfd);
      if (lVar4 != 0) {
        CRYPTO_free(param_1[6],"crypto\\dso\\dso_lib.c",0x102);
        param_1[6] = lVar4;
        goto LAB_143d380c4;
      }
      uVar2 = 0xff;
      uVar5 = 0x41;
    }
    else {
      uVar2 = 0xf9;
      uVar5 = 0x6e;
    }
    ERR_put_error(0x25,0x81,uVar5,"crypto\\dso\\dso_lib.c",uVar2,uVar6);
    uVar2 = 0x95;
    uVar5 = 0x70;
  }
LAB_143d380fd:
  ERR_put_error(0x25,0x70,uVar5,"crypto\\dso\\dso_lib.c",uVar2,uVar6);
  if (bVar1) {
    DSO_free(param_1);
  }
  return (longlong *)0x0;
}



// FUNCTION 143d38140 DSO_merge body=116 status=ok
// SIG undefined DSO_merge(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 DSO_merge(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_1 != (longlong *)0x0) && (param_2 != 0)) {
    if ((*(byte *)((longlong)param_1 + 0x14) & 1) == 0) {
      if ((code *)param_1[5] != (code *)0x0) {
        uVar1 = (*(code *)param_1[5])();
        return uVar1;
      }
      if (*(code **)(*param_1 + 0x30) != (code *)0x0) {
        uVar1 = (**(code **)(*param_1 + 0x30))();
      }
    }
    return uVar1;
  }
  ERR_put_error(0x25,0x84,0x43,"crypto\\dso\\dso_lib.c",0x10c);
  return 0;
}



// FUNCTION 143d381c0 DSO_new body=24 status=ok
// SIG undefined DSO_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DSO_new(void)

{
  DSO_new_method(0);
  return;
}



// FUNCTION 143d381e0 DSO_new_method body=296 status=ok
// SIG undefined DSO_new_method(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * DSO_new_method(void)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143d381ec;
  if (DAT_146bcb8f8 == 0) {
    DAT_146bcb8f8 = DSO_METHOD_openssl();
  }
  plVar2 = (longlong *)CRYPTO_zalloc(0x48,"crypto\\dso\\dso_lib.c");
  if (plVar2 == (longlong *)0x0) {
    ERR_put_error(0x25,0x71,0x41,"crypto\\dso\\dso_lib.c",0x1d,uVar4);
    return (longlong *)0x0;
  }
  lVar3 = OPENSSL_sk_new_null();
  plVar2[1] = lVar3;
  if (lVar3 == 0) {
    ERR_put_error(0x25,0x71,0x41,"crypto\\dso\\dso_lib.c",0x23,uVar4);
    uVar4 = 0x24;
  }
  else {
    *plVar2 = DAT_146bcb8f8;
    *(undefined4 *)(plVar2 + 2) = 1;
    lVar3 = CRYPTO_THREAD_lock_new();
    plVar2[8] = lVar3;
    if (lVar3 != 0) {
      if (*(code **)(*plVar2 + 0x38) != (code *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x38))(plVar2);
        if (iVar1 == 0) {
          DSO_free(plVar2);
          plVar2 = (longlong *)0x0;
        }
      }
      return plVar2;
    }
    ERR_put_error(0x25,0x71,0x41,"crypto\\dso\\dso_lib.c",0x2b,uVar4);
    OPENSSL_sk_free(plVar2[1]);
    uVar4 = 0x2d;
  }
  CRYPTO_free(plVar2,"crypto\\dso\\dso_lib.c",uVar4);
  return (longlong *)0x0;
}



// FUNCTION 143d38310 X509_get_default_cert_area body=8 status=ok
// SIG undefined X509_get_default_cert_area(void)

char * X509_get_default_cert_area(void)

{
  return "C:\\Windows";
}



// FUNCTION 143d38320 X509_get_default_cert_dir body=8 status=ok
// SIG undefined X509_get_default_cert_dir(void)

char * X509_get_default_cert_dir(void)

{
  return "C:\\Windows/certs";
}



// FUNCTION 143d38330 X509_get_default_cert_dir_env body=8 status=ok
// SIG undefined X509_get_default_cert_dir_env(void)

char * X509_get_default_cert_dir_env(void)

{
  return "SSL_CERT_DIR";
}



// FUNCTION 143d38340 X509_get_default_cert_file body=8 status=ok
// SIG undefined X509_get_default_cert_file(void)

char * X509_get_default_cert_file(void)

{
  return "C:\\Windows/cert.pem";
}



// FUNCTION 143d38350 X509_get_default_cert_file_env body=8 status=ok
// SIG undefined X509_get_default_cert_file_env(void)

char * X509_get_default_cert_file_env(void)

{
  return "SSL_CERT_FILE";
}



// FUNCTION 143d38360 ASN1_add_oid_module body=43 status=ok
// SIG undefined ASN1_add_oid_module(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_add_oid_module(void)

{
  CONF_module_add("oid_section",oid_module_init,AK::MemoryMgr::StartProfileThreadUsage);
  return;
}



// FUNCTION 143d38390 oid_module_init body=573 status=ok
// SIG undefined oid_module_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 oid_module_init(WriteBytesMem *param_1,undefined8 param_2)

{
  char *pcVar1;
  void *pvVar2;
  char *pcVar3;
  int iVar4;
  uchar *puVar5;
  longlong lVar6;
  longlong lVar7;
  char *pcVar8;
  void *_Dst;
  char *_Str;
  void *pvVar9;
  int iVar10;
  
  puVar5 = AK::WriteBytesMem::Bytes(param_1);
  lVar6 = NCONF_get_section(param_2,puVar5);
  if (lVar6 == 0) {
    ERR_put_error(0xd,0xae,0xac,"crypto\\asn1\\asn_moid.c",0x20);
    return 0;
  }
  iVar10 = 0;
  iVar4 = OPENSSL_sk_num(lVar6);
  if (0 < iVar4) {
    do {
      lVar7 = OPENSSL_sk_value(lVar6,iVar10);
      _Dst = (void *)0x0;
      _Str = *(char **)(lVar7 + 0x10);
      pvVar2 = *(void **)(lVar7 + 8);
      pcVar8 = _guard_xfg_dispatch_icall_nop(_Str,0x2c);
      pvVar9 = pvVar2;
      if (pcVar8 != (char *)0x0) {
        if (pcVar8[1] == '\0') goto LAB_143d385a7;
        iVar4 = ossl_ctype_check((int)pcVar8[1],8);
        pcVar3 = pcVar8;
        while (pcVar3 = pcVar3 + 1, iVar4 != 0) {
          iVar4 = ossl_ctype_check((int)pcVar3[1],8);
        }
        iVar4 = ossl_ctype_check((int)*_Str,8);
        while (iVar4 != 0) {
          pcVar1 = _Str + 1;
          _Str = _Str + 1;
          iVar4 = ossl_ctype_check((int)*pcVar1,8);
        }
        iVar4 = ossl_ctype_check((int)pcVar8[-1],8);
        while (pcVar8 = pcVar8 + -1, iVar4 != 0) {
          if (pcVar8 == _Str) goto LAB_143d385a7;
          iVar4 = ossl_ctype_check((int)pcVar8[-1],8);
        }
        pcVar8 = pcVar8 + (1 - (longlong)_Str);
        _Dst = (void *)CRYPTO_malloc(pcVar8 + 1,"crypto\\asn1\\asn_moid.c",0x56);
        if (_Dst == (void *)0x0) {
          ERR_put_error(0xd,0x7c,0x41,"crypto\\asn1\\asn_moid.c",0x57);
          goto LAB_143d385a7;
        }
        _guard_xfg_dispatch_icall_nop(_Dst,_Str,(size_t)pcVar8);
        pcVar8[(longlong)_Dst] = '\0';
        _Str = pcVar3;
        pvVar9 = _Dst;
      }
      iVar4 = OBJ_create(_Str,pvVar2,pvVar9);
      CRYPTO_free(_Dst,"crypto\\asn1\\asn_moid.c",0x61);
      if (iVar4 == 0) {
LAB_143d385a7:
        ERR_put_error(0xd,0xae,0xab,"crypto\\asn1\\asn_moid.c",0x26);
        return 0;
      }
      iVar10 = iVar10 + 1;
      iVar4 = OPENSSL_sk_num(lVar6);
    } while (iVar10 < iVar4);
  }
  return 1;
}



// FUNCTION 143d385d0 ASN1_add_stable_module body=43 status=ok
// SIG undefined ASN1_add_stable_module(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_add_stable_module(void)

{
  CONF_module_add("stbl_section",stbl_module_init,FUN_143d38600);
  return;
}



// FUNCTION 143d38600 FUN_143d38600 body=22 status=ok
// SIG undefined FUN_143d38600(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d38600(void)

{
  ASN1_STRING_TABLE_cleanup();
  return;
}



// FUNCTION 143d38620 stbl_module_init body=983 status=ok
// SIG undefined stbl_module_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 stbl_module_init(WriteBytesMem *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  uchar *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  char *pcVar11;
  ulonglong uVar12;
  int iVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  int local_res18 [2];
  int local_res20;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar17;
  int local_58;
  char *local_48;
  longlong local_40;
  
  puVar5 = AK::WriteBytesMem::Bytes(param_1);
  lVar6 = NCONF_get_section(param_2,puVar5);
  local_40 = lVar6;
  if (lVar6 == 0) {
    ERR_put_error(0xd,0xdf,0xac,"crypto\\asn1\\asn_mstbl.c",0x1d);
    return 0;
  }
  local_58 = 0;
  iVar1 = OPENSSL_sk_num(lVar6);
  if (0 < iVar1) {
    do {
      uVar12 = 0;
      lVar6 = OPENSSL_sk_value(lVar6,local_58);
      uVar3 = 0xffffffff;
      uVar15 = 0;
      local_res20 = 0;
      uVar4 = 0xffffffff;
      local_res18[0] = 0;
      uVar16 = *(undefined8 *)(lVar6 + 8);
      uVar14 = *(undefined8 *)(lVar6 + 0x10);
      iVar1 = OBJ_sn2nid(uVar16);
      uVar8 = uVar12;
      if (((iVar1 == 0) && (iVar1 = OBJ_ln2nid(uVar16), uVar7 = uVar12, iVar1 == 0)) ||
         (uVar7 = X509V3_parse_list(uVar14), uVar7 == 0)) {
LAB_143d3878c:
        ERR_put_error(0xd,0xde,0xda,"crypto\\asn1\\asn_mstbl.c",99);
        if (uVar8 == 0) {
          pcVar11 = "name=";
        }
        else {
          uVar16 = *(undefined8 *)(uVar8 + 8);
          pcVar11 = "field=";
          uVar14 = *(undefined8 *)(uVar8 + 0x10);
        }
        ERR_add_error_data(4,pcVar11,uVar16,", value=",uVar14);
      }
      else {
        iVar13 = 0;
        iVar2 = OPENSSL_sk_num(uVar7);
        uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
        if (0 < iVar2) {
LAB_143d38731:
          uVar8 = OPENSSL_sk_value(uVar7);
          lVar6 = *(longlong *)(uVar8 + 8);
          lVar9 = 0;
          do {
            lVar10 = lVar9 + 1;
            if (*(char *)(lVar6 + lVar9) != (&DAT_145d814a0)[lVar9]) {
              lVar9 = 0;
              goto LAB_143d387e0;
            }
            lVar9 = lVar10;
          } while (lVar10 != 4);
          uVar3 = strtoul(*(char **)(uVar8 + 0x10),&local_48,0);
          if (*local_48 == '\0') goto LAB_143d388ed;
          goto LAB_143d3878c;
        }
LAB_143d388ff:
        uVar14 = CONCAT44(uVar17,uVar15);
        local_res20 = ASN1_STRING_TABLE_add(iVar1,uVar3,uVar4,local_res18[0],uVar14);
        if (local_res20 == 0) {
          uVar14 = CONCAT44((int)((ulonglong)uVar14 >> 0x20),0x6d);
          ERR_put_error(0xd,0xde,0x41,"crypto\\asn1\\asn_mstbl.c",uVar14);
        }
      }
      OPENSSL_sk_pop_free(uVar7,X509V3_conf_free);
      lVar6 = local_40;
      if (local_res20 == 0) {
        ERR_put_error(0xd,0xdf,0xdb,"crypto\\asn1\\asn_mstbl.c",0x23);
        return 0;
      }
      local_58 = local_58 + 1;
      iVar1 = OPENSSL_sk_num(local_40);
      in_stack_ffffffffffffff98 = uVar14;
    } while (local_58 < iVar1);
  }
  return 1;
  while (lVar9 = lVar10, lVar10 != 4) {
LAB_143d387e0:
    lVar10 = lVar9 + 1;
    if (*(char *)(lVar6 + lVar9) != (&DAT_145d814a4)[lVar9]) {
      lVar9 = 0;
      goto LAB_143d38830;
    }
  }
  uVar4 = strtoul(*(char **)(uVar8 + 0x10),&local_48,0);
  if (*local_48 != '\0') goto LAB_143d3878c;
LAB_143d388ed:
  uVar15 = (undefined4)uVar12;
  iVar13 = iVar13 + 1;
  iVar2 = OPENSSL_sk_num(uVar7);
  uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  if (iVar2 <= iVar13) goto LAB_143d388ff;
  goto LAB_143d38731;
  while (lVar9 = lVar10, lVar10 != 5) {
LAB_143d38830:
    lVar10 = lVar9 + 1;
    if (*(char *)(lVar6 + lVar9) != (&DAT_145d82b28)[lVar9]) {
      lVar9 = 0;
      goto LAB_143d38880;
    }
  }
  iVar2 = ASN1_str2mask(*(undefined8 *)(uVar8 + 0x10),local_res18);
  if ((iVar2 == 0) || (local_res18[0] == 0)) goto LAB_143d3878c;
  goto LAB_143d388ed;
  while (lVar9 = lVar10, lVar10 != 6) {
LAB_143d38880:
    lVar10 = lVar9 + 1;
    if (*(char *)(lVar6 + lVar9) != "flags"[lVar9]) goto LAB_143d3878c;
  }
  lVar6 = 0;
  do {
    lVar9 = lVar6;
    if (*(char *)(*(longlong *)(uVar8 + 0x10) + lVar9) != "nomask"[lVar9]) {
      lVar6 = 0;
      goto LAB_143d388d2;
    }
    lVar6 = lVar9 + 1;
  } while (lVar9 + 1 != 7);
  uVar12 = (ulonglong)((int)lVar9 - 4);
  goto LAB_143d388ed;
  while (lVar6 = lVar9 + 1, lVar9 + 1 != 5) {
LAB_143d388d2:
    lVar9 = lVar6;
    if (*(char *)(*(longlong *)(uVar8 + 0x10) + lVar9) != (&DAT_145d82b38)[lVar9])
    goto LAB_143d3878c;
  }
  uVar12 = (ulonglong)((int)lVar9 - 3);
  goto LAB_143d388ed;
}



// FUNCTION 143d38a00 EVP_add_alg_module body=39 status=ok
// SIG undefined EVP_add_alg_module(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_add_alg_module(void)

{
  CONF_module_add("alg_section",alg_module_init,0);
  return;
}



// FUNCTION 143d38a30 alg_module_init body=389 status=ok
// SIG undefined alg_module_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 alg_module_init(WriteBytesMem *param_1,undefined8 param_2)

{
  int iVar1;
  uchar *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int local_res18 [4];
  undefined8 uVar6;
  
  uVar6 = 0x143d38a40;
  puVar2 = AK::WriteBytesMem::Bytes(param_1);
  lVar3 = NCONF_get_section(param_2,puVar2);
  if (lVar3 == 0) {
    ERR_put_error(6,0xb1,0xa5,"crypto\\evp\\evp_cnf.c",0x1c,uVar6);
    return 0;
  }
  iVar5 = 0;
  iVar1 = OPENSSL_sk_num(lVar3);
  if (0 < iVar1) {
    do {
      lVar4 = OPENSSL_sk_value(lVar3,iVar5);
      iVar1 = _guard_xfg_dispatch_icall_nop(*(char **)(lVar4 + 8),"fips_mode");
      if (iVar1 == 0) {
        iVar1 = X509V3_get_value_bool(lVar4,local_res18);
        if (iVar1 == 0) {
          ERR_put_error(6,0xb1,0xa8,"crypto\\evp\\evp_cnf.c",0x24);
          return 0;
        }
        if (0 < local_res18[0]) {
          ERR_put_error(6,0xb1,0xa7,"crypto\\evp\\evp_cnf.c",0x28);
          return 0;
        }
      }
      else {
        ERR_put_error(6,0xb1,0xa9,"crypto\\evp\\evp_cnf.c",0x2c);
        ERR_add_error_data(4,"name=",*(undefined8 *)(lVar4 + 8),", value=",
                           *(undefined8 *)(lVar4 + 0x10));
      }
      iVar5 = iVar5 + 1;
      iVar1 = OPENSSL_sk_num(lVar3);
    } while (iVar5 < iVar1);
  }
  return 1;
}



// FUNCTION 143d38bc0 ENGINE_add_conf_module body=43 status=ok
// SIG undefined ENGINE_add_conf_module(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ENGINE_add_conf_module(void)

{
  CONF_module_add("engines",int_engine_module_init,int_engine_module_finish);
  return;
}



// FUNCTION 143d38bf0 int_engine_configure body=917 status=ok
// SIG undefined int_engine_configure(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x000143d38e37) */

char * int_engine_configure(char *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *_Str;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  bool bVar12;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar14;
  undefined8 uVar13;
  
  pcVar11 = (char *)0x0;
  bVar1 = false;
  pcVar3 = _guard_xfg_dispatch_icall_nop(param_1,0x2e);
  if (pcVar3 != (char *)0x0) {
    param_1 = pcVar3 + 1;
  }
  lVar4 = NCONF_get_section(param_3,param_2);
  if (lVar4 == 0) {
    ERR_put_error(0x26,0xbc,0x95,"crypto\\engine\\eng_cnf.c",0x3d);
    return (char *)0x0;
  }
  iVar2 = OPENSSL_sk_num(lVar4);
  pcVar3 = pcVar11;
  pcVar10 = pcVar11;
  if (0 < iVar2) {
    do {
      pcVar5 = (char *)OPENSSL_sk_value(lVar4,pcVar10);
      _Str = *(char **)(pcVar5 + 8);
      pcVar6 = _guard_xfg_dispatch_icall_nop(_Str,0x2e);
      if (pcVar6 != (char *)0x0) {
        _Str = pcVar6 + 1;
      }
      pcVar6 = *(char **)(pcVar5 + 0x10);
      iVar2 = _guard_xfg_dispatch_icall_nop(_Str,"engine_id");
      if (iVar2 != 0) {
        iVar2 = _guard_xfg_dispatch_icall_nop(_Str,"soft_load");
        if (iVar2 == 0) {
          bVar1 = true;
          pcVar6 = param_1;
        }
        else {
          iVar2 = _guard_xfg_dispatch_icall_nop(_Str,"dynamic_path");
          if (iVar2 == 0) {
            pcVar3 = (char *)ENGINE_by_id("dynamic");
            uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
            if (pcVar3 == (char *)0x0) goto LAB_143d38ee1;
            iVar2 = ENGINE_ctrl_cmd_string(pcVar3,"SO_PATH",pcVar6,0);
            uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
            if (iVar2 == 0) goto LAB_143d38ee1;
            iVar2 = ENGINE_ctrl_cmd_string(pcVar3,"LIST_ADD",&DAT_145d82bc8,0);
            uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
            if (iVar2 == 0) goto LAB_143d38ee1;
            iVar2 = ENGINE_ctrl_cmd_string(pcVar3,&DAT_145d7f4dc,0,0);
            uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
          }
          else {
            if (pcVar3 == (char *)0x0) {
              pcVar3 = (char *)ENGINE_by_id(param_1);
              uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
              if (pcVar3 == (char *)0x0) {
                if (bVar1) {
                  ERR_clear_error();
                  return (char *)0x1;
                }
                goto LAB_143d38ee1;
              }
            }
            uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
            pcVar7 = pcVar11;
            do {
              pcVar8 = pcVar7;
              bVar12 = pcVar6[(longlong)pcVar8] == pcVar8[0x145d82bcc];
              if (!bVar12) goto LAB_143d38dd8;
              pcVar7 = pcVar8 + 1;
            } while (pcVar8 + 1 != &DAT_00000006);
            bVar12 = pcVar6[(longlong)pcVar8] == pcVar8[0x145d82bcc];
LAB_143d38dd8:
            pcVar7 = pcVar11;
            pcVar8 = pcVar11;
            if (!bVar12) {
              pcVar8 = pcVar6;
            }
            while (pcVar6 = pcVar7 + 1, _Str[(longlong)pcVar7] == pcVar7[0x145d82bd4]) {
              pcVar7 = pcVar6;
              if (pcVar6 == (char *)0x5) {
                iVar2 = NCONF_get_number_e(param_3,param_2,&DAT_145d82bd4);
                if (iVar2 != 0) {
                  uVar13 = CONCAT44(uVar14,0x7a);
                  ERR_put_error(0x26,0xbc,0x97,"crypto\\engine\\eng_cnf.c",uVar13);
                  uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
                }
                goto LAB_143d38ee1;
              }
            }
            iVar2 = _guard_xfg_dispatch_icall_nop(_Str,"default_algorithms");
            if (iVar2 == 0) {
              iVar2 = ENGINE_set_default_string(pcVar3,pcVar8);
            }
            else {
              iVar2 = ENGINE_ctrl_cmd_string(pcVar3,_Str,pcVar8,0);
            }
            uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
          }
          pcVar6 = param_1;
          if (iVar2 == 0) goto LAB_143d38ee1;
        }
      }
      uVar9 = (int)pcVar10 + 1;
      iVar2 = OPENSSL_sk_num(lVar4);
      uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
      pcVar10 = (char *)(ulonglong)uVar9;
      param_1 = pcVar6;
    } while ((int)uVar9 < iVar2);
    if ((pcVar3 != (char *)0x0) && (iVar2 = int_engine_init(pcVar3), pcVar5 = pcVar11, iVar2 == 0))
    {
LAB_143d38ee1:
      ERR_put_error(0x26,0xbc,0x66,"crypto\\engine\\eng_cnf.c",CONCAT44(uVar14,0x8d));
      if (pcVar5 != (char *)0x0) {
        ERR_add_error_data(6,"section=",*(undefined8 *)pcVar5,", name=",*(undefined8 *)(pcVar5 + 8),
                           ", value=",*(undefined8 *)(pcVar5 + 0x10));
      }
      goto LAB_143d38f5c;
    }
  }
  pcVar11 = (char *)0x1;
LAB_143d38f5c:
  ENGINE_free(pcVar3);
  return pcVar11;
}



// FUNCTION 143d38f90 int_engine_init body=98 status=ok
// SIG undefined int_engine_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 int_engine_init(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = ENGINE_init();
  if (iVar1 == 0) {
    return 0;
  }
  if (((DAT_146bcb900 != 0) || (DAT_146bcb900 = OPENSSL_sk_new_null(), DAT_146bcb900 != 0)) &&
     (iVar1 = OPENSSL_sk_push(DAT_146bcb900,param_1), iVar1 != 0)) {
    return 1;
  }
  ENGINE_finish(param_1);
  return 0;
}



// FUNCTION 143d39000 int_engine_module_finish body=85 status=ok
// SIG undefined int_engine_module_finish(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void int_engine_module_finish(void)

{
  longlong lVar1;
  
  lVar1 = OPENSSL_sk_pop(DAT_146bcb900);
  while (lVar1 != 0) {
    ENGINE_finish(lVar1);
    lVar1 = OPENSSL_sk_pop(DAT_146bcb900);
  }
  OPENSSL_sk_free(DAT_146bcb900);
  DAT_146bcb900 = 0;
  return;
}



// FUNCTION 143d39060 int_engine_module_init body=195 status=ok
// SIG undefined int_engine_module_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 int_engine_module_init(WriteBytesMem *param_1,undefined8 param_2)

{
  int iVar1;
  uchar *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143d39070;
  puVar2 = AK::WriteBytesMem::Bytes(param_1);
  lVar3 = NCONF_get_section(param_2,puVar2);
  if (lVar3 == 0) {
    ERR_put_error(0x26,0xbb,0x94,"crypto\\engine\\eng_cnf.c",0xa5,uVar6);
    return 0;
  }
  iVar5 = 0;
  iVar1 = OPENSSL_sk_num(lVar3);
  if (0 < iVar1) {
    do {
      lVar4 = OPENSSL_sk_value(lVar3,iVar5);
      iVar1 = int_engine_configure(*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10),param_2)
      ;
      if (iVar1 == 0) {
        return 0;
      }
      iVar5 = iVar5 + 1;
      iVar1 = OPENSSL_sk_num(lVar3);
    } while (iVar5 < iVar1);
  }
  return 1;
}



// FUNCTION 143d39130 BIO_closesocket body=36 status=ok
// SIG undefined BIO_closesocket(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool BIO_closesocket(int param_1)

{
  int iVar1;
  
  iVar1 = Ordinal_3((longlong)param_1);
  return -1 < iVar1;
}



// FUNCTION 143d39160 BN_add_word body=447 status=ok
// SIG undefined BN_add_word(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong BN_add_word(longlong *param_1,ulonglong param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  if (param_2 == 0) {
    return 1;
  }
  iVar2 = BN_is_zero();
  if (iVar2 != 0) {
    uVar5 = BN_set_word(param_1,param_2);
    return uVar5;
  }
  uVar5 = 0;
  uVar10 = uVar5;
  if ((int)param_1[2] == 0) {
    do {
      uVar3 = (uint)uVar5;
      uVar6 = param_2;
      if ((int)param_1[1] <= (int)uVar3) break;
      uVar9 = *(longlong *)(*param_1 + uVar10) + param_2;
      *(ulonglong *)(*param_1 + uVar10) = uVar9;
      uVar6 = (ulonglong)(uVar9 < param_2);
      uVar3 = uVar3 + 1;
      uVar5 = (ulonglong)uVar3;
      bVar1 = uVar9 < param_2;
      param_2 = uVar6;
      uVar10 = uVar10 + 8;
    } while (bVar1);
    if (uVar6 == 0) {
      return 1;
    }
    if (uVar3 != *(uint *)(param_1 + 1)) {
      return 1;
    }
    lVar7 = bn_wexpand(param_1,*(uint *)(param_1 + 1) + 1);
    if (lVar7 != 0) {
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      *(ulonglong *)(*param_1 + (longlong)(int)uVar3 * 8) = uVar6;
      return 1;
    }
    return 0;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  iVar2 = BN_is_zero(param_1);
  if (iVar2 != 0) {
    uVar3 = BN_set_word(param_1,param_2);
    uVar5 = (ulonglong)uVar3;
    if (uVar3 != 0) {
      BN_set_negative(param_1,1);
    }
    goto LAB_143d3928e;
  }
  uVar3 = 0;
  if ((int)param_1[2] != 0) {
    *(undefined4 *)(param_1 + 2) = 0;
    uVar3 = BN_add_word(param_1,param_2);
    uVar5 = (ulonglong)uVar3;
    *(undefined4 *)(param_1 + 2) = 1;
    goto LAB_143d3928e;
  }
  if ((int)param_1[1] == 1) {
    uVar10 = *(ulonglong *)*param_1;
    if (param_2 <= uVar10) goto LAB_143d39225;
    *(ulonglong *)*param_1 = param_2 - uVar10;
    *(undefined4 *)(param_1 + 2) = 1;
  }
  else {
LAB_143d39225:
    puVar8 = (ulonglong *)*param_1;
    uVar10 = uVar5;
    uVar6 = uVar5;
    if (*puVar8 < param_2) {
      do {
        uVar5 = uVar5 + 1;
        uVar3 = (int)uVar10 + 1;
        *(longlong *)(uVar6 + *param_1) = *(longlong *)(uVar6 + *param_1) - param_2;
        param_2 = 1;
        puVar8 = (ulonglong *)*param_1;
        uVar10 = (ulonglong)uVar3;
        uVar6 = uVar5 * 8;
      } while (puVar8[uVar5] == 0);
    }
    puVar8[(int)uVar3] = puVar8[(int)uVar3] - param_2;
    if ((*(longlong *)((longlong)(int)uVar3 * 8 + *param_1) == 0) &&
       (uVar4 = (int)param_1[1] - 1, uVar3 == uVar4)) {
      *(uint *)(param_1 + 1) = uVar4;
    }
  }
  uVar5 = 1;
LAB_143d3928e:
  iVar2 = BN_is_zero(param_1);
  if (iVar2 == 0) {
    *(uint *)(param_1 + 2) = (uint)((int)param_1[2] == 0);
  }
  return uVar5;
}



// FUNCTION 143d39320 BN_div_word body=273 status=ok
// SIG undefined BN_div_word(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong BN_div_word(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (param_2 != 0) {
    if ((int)param_1[1] == 0) {
      return 0;
    }
    cVar2 = BN_num_bits_word(param_2);
    param_2 = param_2 << (0x40U - cVar2 & 0x3f);
    iVar3 = BN_lshift(param_1,param_1);
    if (iVar3 != 0) {
      iVar3 = (int)param_1[1];
      lVar6 = (longlong)(iVar3 + -1);
      if (-1 < iVar3 + -1) {
        do {
          lVar1 = *(longlong *)(*param_1 + lVar6 * 8);
          lVar4 = bn_div_words(uVar5,lVar1,param_2);
          uVar5 = lVar1 - lVar4 * param_2;
          *(longlong *)(*param_1 + lVar6 * 8) = lVar4;
          lVar6 = lVar6 + -1;
        } while (-1 < lVar6);
        iVar3 = (int)param_1[1];
      }
      if ((0 < iVar3) && (*(longlong *)(*param_1 + -8 + (longlong)iVar3 * 8) == 0)) {
        *(int *)(param_1 + 1) = iVar3 + -1;
        iVar3 = iVar3 + -1;
      }
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 2) = 0;
      }
      return uVar5 >> (0x40U - cVar2 & 0x3f);
    }
  }
  return 0xffffffffffffffff;
}



// FUNCTION 143d39440 BN_mod_word body=414 status=ok
// SIG undefined BN_mod_word(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong BN_mod_word(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  uVar9 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x100000001) {
      iVar4 = (int)param_1[1] + -1;
      if (-1 < iVar4) {
        puVar8 = (ulonglong *)(*param_1 + (longlong)iVar4 * 8);
        do {
          uVar2 = *puVar8;
          puVar8 = puVar8 + -1;
          uVar9 = ((uVar2 >> 0x20 | uVar9 << 0x20) % param_2 << 0x20 | uVar2 & 0xffffffff) % param_2
          ;
          iVar4 = iVar4 + -1;
        } while (-1 < iVar4);
      }
      return uVar9;
    }
    plVar5 = (longlong *)BN_dup();
    if (plVar5 != (longlong *)0x0) {
      if ((int)plVar5[1] != 0) {
        cVar3 = BN_num_bits_word(param_2);
        lVar7 = param_2 << (0x40U - cVar3 & 0x3f);
        iVar4 = BN_lshift(plVar5,plVar5);
        if (iVar4 == 0) {
          uVar9 = 0xffffffffffffffff;
        }
        else {
          iVar4 = (int)plVar5[1];
          lVar10 = (longlong)(iVar4 + -1);
          if (-1 < iVar4 + -1) {
            do {
              lVar1 = *(longlong *)(*plVar5 + lVar10 * 8);
              lVar6 = bn_div_words(uVar9,lVar1,lVar7);
              *(longlong *)(*plVar5 + lVar10 * 8) = lVar6;
              uVar9 = lVar1 - lVar6 * lVar7;
              lVar10 = lVar10 + -1;
            } while (-1 < lVar10);
            iVar4 = (int)plVar5[1];
          }
          if ((0 < iVar4) && (*(longlong *)(*plVar5 + -8 + (longlong)iVar4 * 8) == 0)) {
            *(int *)(plVar5 + 1) = iVar4 + -1;
            iVar4 = iVar4 + -1;
          }
          uVar9 = uVar9 >> (0x40U - cVar3 & 0x3f);
          if (iVar4 == 0) {
            *(undefined4 *)(plVar5 + 2) = 0;
          }
        }
      }
      BN_free(plVar5);
      return uVar9;
    }
  }
  return 0xffffffffffffffff;
}



// FUNCTION 143d395e0 BN_mul_word body=138 status=ok
// SIG undefined BN_mul_word(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_mul_word(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((int)param_1[1] != 0) {
    if (param_2 == 0) {
      BN_set_word();
      return 1;
    }
    lVar1 = bn_mul_words(*param_1,*param_1,(int)param_1[1],param_2);
    if (lVar1 != 0) {
      lVar2 = bn_wexpand(param_1,(int)param_1[1] + 1);
      if (lVar2 == 0) {
        return 0;
      }
      *(longlong *)(*param_1 + (longlong)(int)param_1[1] * 8) = lVar1;
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    }
  }
  return 1;
}



// FUNCTION 143d39670 BN_sub_word body=280 status=ok
// SIG undefined BN_sub_word(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong BN_sub_word(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  
  if (param_2 != 0) {
    iVar1 = BN_is_zero();
    if (iVar1 != 0) {
      uVar2 = BN_set_word(param_1,param_2);
      if (uVar2 != 0) {
        BN_set_negative(param_1,1);
      }
      return (ulonglong)uVar2;
    }
    if ((int)param_1[2] != 0) {
      *(undefined4 *)(param_1 + 2) = 0;
      uVar4 = BN_add_word(param_1,param_2);
      *(undefined4 *)(param_1 + 2) = 1;
      return uVar4;
    }
    if ((int)param_1[1] == 1) {
      uVar4 = *(ulonglong *)*param_1;
      if (uVar4 < param_2) {
        *(ulonglong *)*param_1 = param_2 - uVar4;
        *(undefined4 *)(param_1 + 2) = 1;
        return 1;
      }
    }
    puVar6 = (ulonglong *)*param_1;
    uVar4 = 0;
    uVar2 = 0;
    uVar5 = uVar4;
    uVar7 = uVar4;
    if (*puVar6 < param_2) {
      do {
        uVar4 = uVar4 + 1;
        uVar2 = (int)uVar5 + 1;
        *(longlong *)(uVar7 + *param_1) = *(longlong *)(uVar7 + *param_1) - param_2;
        param_2 = 1;
        puVar6 = (ulonglong *)*param_1;
        uVar5 = (ulonglong)uVar2;
        uVar7 = uVar4 * 8;
      } while (puVar6[uVar4] == 0);
    }
    puVar6[(int)uVar2] = puVar6[(int)uVar2] - param_2;
    if ((*(longlong *)((longlong)(int)uVar2 * 8 + *param_1) == 0) &&
       (uVar3 = (int)param_1[1] - 1, uVar2 == uVar3)) {
      *(uint *)(param_1 + 1) = uVar3;
    }
  }
  return 1;
}



// FUNCTION 143d39790 BN_lshift body=400 status=ok
// SIG undefined BN_lshift(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_lshift(undefined8 *param_1,longlong *param_2,int param_3)

{
  void *_Dst;
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  
  if (param_3 < 0) {
    ERR_put_error(3,0x91,0x77,"crypto\\bn\\bn_shift.c",0x5d);
    return 0;
  }
  uVar10 = param_3 >> 0x1f & 0x3f;
  uVar3 = param_3 + uVar10;
  iVar4 = (uVar3 & 0x3f) - uVar10;
  iVar11 = (int)uVar3 >> 6;
  lVar6 = bn_wexpand();
  if (lVar6 != 0) {
    *(int *)(param_1 + 2) = (int)param_2[2];
    lVar6 = *param_2;
    bVar2 = (byte)iVar4;
    _Dst = (void *)*param_1;
    *(undefined8 *)((longlong)_Dst + (longlong)((int)param_2[1] + iVar11) * 8) = 0;
    iVar5 = (int)param_2[1] + -1;
    lVar12 = (longlong)iVar5;
    if (iVar4 == 0) {
      if (-1 < iVar5) {
        puVar9 = (undefined8 *)(lVar6 + lVar12 * 8);
        do {
          lVar12 = lVar12 + -1;
          *(undefined8 *)(((longlong)iVar11 * 8 - lVar6) + (longlong)_Dst + (longlong)puVar9) =
               *puVar9;
          puVar9 = puVar9 + -1;
        } while (-1 < lVar12);
      }
    }
    else if (-1 < iVar5) {
      lVar7 = lVar12 + 1 + (longlong)iVar11;
      uVar14 = *(ulonglong *)((longlong)_Dst + lVar7 * 8);
      puVar13 = (ulonglong *)((longlong)_Dst + lVar7 * 8);
      do {
        uVar1 = *(ulonglong *)
                 (((lVar6 - ((longlong)iVar11 * 8 + 8)) - (longlong)_Dst) + (longlong)puVar13);
        uVar8 = uVar1 >> (0x40 - bVar2 & 0x3f) | uVar14;
        uVar14 = uVar1 << (bVar2 & 0x3f);
        lVar12 = lVar12 + -1;
        puVar13[-1] = uVar14;
        *puVar13 = uVar8;
        puVar13 = puVar13 + -1;
      } while (-1 < lVar12);
    }
    _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)iVar11 * 8);
    *(int *)(param_1 + 1) = (int)param_2[1] + 1 + iVar11;
    bn_correct_top(param_1);
    return 1;
  }
  return 0;
}



// FUNCTION 143d39920 BN_lshift1 body=177 status=ok
// SIG undefined BN_lshift1(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_lshift1(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  uint uVar7;
  ulonglong uVar8;
  
  if (param_1 == param_2) {
    lVar3 = bn_wexpand(param_1,*(int *)(param_2 + 1) + 1);
    if (lVar3 == 0) {
      return 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    lVar3 = bn_wexpand(param_1,*(int *)(param_2 + 1) + 1);
    if (lVar3 == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  }
  puVar6 = (ulonglong *)*param_2;
  uVar4 = 0;
  puVar5 = (ulonglong *)*param_1;
  uVar8 = uVar4;
  if (0 < *(int *)(param_2 + 1)) {
    do {
      uVar2 = *puVar6;
      puVar6 = puVar6 + 1;
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      puVar1 = puVar5 + 1;
      *puVar5 = uVar2 * 2 | uVar4;
      uVar4 = uVar2 >> 0x3f;
      puVar5 = puVar1;
    } while ((int)uVar7 < *(int *)(param_2 + 1));
    if ((longlong)uVar2 < 0) {
      *puVar1 = 1;
      *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    }
  }
  return 1;
}



// FUNCTION 143d399e0 BN_rshift body=414 status=ok
// SIG undefined BN_rshift(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_rshift(longlong *param_1,longlong *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  
  if (param_3 < 0) {
    ERR_put_error(3,0x92,0x77,"crypto\\bn\\bn_shift.c",0x84,0x143d399ee);
    return 0;
  }
  uVar6 = param_3 >> 0x1f & 0x3f;
  uVar2 = param_3 + uVar6;
  iVar3 = (uVar2 & 0x3f) - uVar6;
  iVar11 = (int)uVar2 >> 6;
  bVar1 = (byte)iVar3;
  if ((iVar11 < (int)param_2[1]) && ((int)param_2[1] != 0)) {
    iVar4 = BN_num_bits(param_2);
    iVar4 = iVar4 + (0x3f - param_3);
    iVar4 = (int)((iVar4 >> 0x1f & 0x3fU) + iVar4) >> 6;
    if (param_1 == param_2) {
      if (param_3 == 0) {
        return 1;
      }
    }
    else {
      lVar5 = bn_wexpand(param_1,iVar4);
      if (lVar5 == 0) {
        return 0;
      }
      *(int *)(param_1 + 2) = (int)param_2[2];
    }
    puVar8 = (ulonglong *)*param_1;
    puVar7 = (ulonglong *)(*param_2 + (longlong)iVar11 * 8);
    iVar11 = (int)param_2[1] - iVar11;
    *(int *)(param_1 + 1) = iVar4;
    if (iVar3 == 0) {
      for (; iVar11 != 0; iVar11 = iVar11 + -1) {
        uVar10 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar8 = uVar10;
        puVar8 = puVar8 + 1;
      }
    }
    else {
      uVar10 = *puVar7;
      while (iVar11 = iVar11 + -1, iVar11 != 0) {
        puVar7 = puVar7 + 1;
        uVar9 = uVar10 >> (bVar1 & 0x3f);
        uVar10 = *puVar7;
        *puVar8 = uVar10 << (0x40 - bVar1 & 0x3f) | uVar9;
        puVar8 = puVar8 + 1;
      }
      uVar10 = uVar10 >> (bVar1 & 0x3f);
      if (uVar10 != 0) {
        *puVar8 = uVar10;
      }
    }
    if ((int)param_1[1] == 0) {
      *(undefined4 *)(param_1 + 2) = 0;
    }
    return 1;
  }
  BN_set_word(param_1,0);
  return 1;
}



// FUNCTION 143d39b80 BN_rshift1 body=263 status=ok
// SIG undefined BN_rshift1(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_rshift1(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong *puVar7;
  
  iVar2 = BN_is_zero(param_2);
  if (iVar2 != 0) {
    BN_set_word(param_1,0);
    return 1;
  }
  lVar1 = *param_2;
  lVar6 = (longlong)((int)param_2[1] + -1);
  uVar4 = *(ulonglong *)(lVar1 + lVar6 * 8);
  iVar2 = (int)param_2[1] - (uint)(uVar4 == 1);
  if (param_2 != param_1) {
    lVar3 = bn_wexpand(param_1,iVar2);
    if (lVar3 == 0) {
      return 0;
    }
    *(int *)(param_1 + 2) = (int)param_2[2];
    uVar4 = *(ulonglong *)(lVar1 + lVar6 * 8);
  }
  lVar3 = *param_1;
  puVar7 = (ulonglong *)(lVar3 + lVar6 * 8);
  if (uVar4 >> 1 != 0) {
    *puVar7 = uVar4 >> 1;
  }
  if (0 < lVar6) {
    do {
      uVar5 = uVar4 ^ 1;
      uVar4 = *(ulonglong *)((lVar1 - lVar3) + -8 + (longlong)puVar7);
      puVar7 = puVar7 + -1;
      lVar6 = lVar6 + -1;
      *puVar7 = uVar4 >> 1 | -(uVar5 + 1) << 0x3f;
    } while (0 < lVar6);
  }
  *(int *)(param_1 + 1) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return 1;
}



// FUNCTION 143d39c90 BN_asc2bn body=137 status=ok
// SIG undefined BN_asc2bn(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_asc2bn(longlong *param_1,char *param_2)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  cVar1 = *param_2;
  pcVar3 = param_2;
  if (cVar1 == '-') {
    cVar1 = param_2[1];
    pcVar3 = param_2 + 1;
  }
  if ((cVar1 == '0') && ((pcVar3[1] + 0xa8U & 0xdf) == 0)) {
    uVar2 = BN_hex2bn(param_1,pcVar3 + 2);
  }
  else {
    uVar2 = BN_dec2bn(param_1);
  }
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  if ((*param_2 == '-') && (*(int *)(*param_1 + 8) != 0)) {
    *(undefined4 *)(*param_1 + 0x10) = 1;
  }
  return 1;
}



// FUNCTION 143d39d20 BN_bn2dec body=609 status=ok
// SIG undefined BN_bn2dec(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined2 * BN_bn2dec(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined1 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  
  uVar13 = 0x143d39d42;
  bVar2 = false;
  lVar8 = 0;
  iVar3 = BN_num_bits();
  iVar3 = (iVar3 * 3) / 10 + (iVar3 * 3) / 1000;
  lVar11 = (longlong)((iVar3 + 2) / 0x13 + 1);
  plVar4 = (longlong *)CRYPTO_malloc(lVar11 * 8,"crypto\\bn\\bn_print.c",0x48);
  lVar12 = (longlong)iVar3 + 5;
  puVar5 = (undefined2 *)CRYPTO_malloc(lVar12,"crypto\\bn\\bn_print.c",0x49);
  if ((puVar5 == (undefined2 *)0x0) || (plVar4 == (longlong *)0x0)) {
    ERR_put_error(3,0x68,0x41,"crypto\\bn\\bn_print.c",0x4b,uVar13);
    bVar1 = bVar2;
  }
  else {
    lVar8 = BN_dup(param_1);
    bVar1 = false;
    if (lVar8 != 0) {
      iVar3 = BN_is_zero(lVar8);
      if (iVar3 == 0) {
        iVar3 = BN_is_negative(lVar8);
        puVar9 = puVar5;
        if (iVar3 != 0) {
          *(undefined1 *)puVar5 = 0x2d;
          puVar9 = (undefined2 *)((longlong)puVar5 + 1);
        }
        iVar3 = BN_is_zero(lVar8);
        plVar7 = plVar4;
        while (iVar3 == 0) {
          bVar1 = bVar2;
          if (lVar11 <= (longlong)plVar7 - (longlong)plVar4 >> 3) goto LAB_143d39f26;
          lVar6 = BN_div_word(lVar8,10000000000000000000);
          *plVar7 = lVar6;
          if (lVar6 == -1) goto LAB_143d39f26;
          plVar7 = plVar7 + 1;
          iVar3 = BN_is_zero(lVar8);
        }
        iVar3 = BIO_snprintf(puVar9,(undefined1 *)((lVar12 - (longlong)puVar9) + (longlong)puVar5),
                             &DAT_145d82c50,plVar7[-1]);
        bVar1 = bVar2;
        if (-1 < iVar3) {
          puVar10 = (undefined1 *)((longlong)puVar9 + (longlong)iVar3);
          while (plVar7 = plVar7 + -1, plVar7 != plVar4) {
            iVar3 = BIO_snprintf(puVar10,(undefined1 *)
                                         ((lVar12 - (longlong)puVar10) + (longlong)puVar5),"%019llu"
                                 ,plVar7[-1]);
            if (iVar3 < 0) goto LAB_143d39f26;
            puVar10 = puVar10 + iVar3;
          }
          bVar1 = true;
        }
      }
      else {
        *puVar5 = 0x30;
        bVar1 = true;
      }
    }
  }
LAB_143d39f26:
  CRYPTO_free(plVar4,"crypto\\bn\\bn_print.c",0x76);
  BN_free(lVar8);
  if (!bVar1) {
    CRYPTO_free(puVar5,"crypto\\bn\\bn_print.c",0x7a);
    puVar5 = (undefined2 *)0x0;
  }
  return puVar5;
}



// FUNCTION 143d39f90 BN_bn2hex body=654 status=ok
// SIG undefined BN_bn2hex(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char * BN_bn2hex(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  longlong lVar5;
  byte bVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  
  uVar9 = 0x143d39fa0;
  bVar1 = false;
  iVar2 = BN_is_zero();
  if (iVar2 != 0) {
    pcVar3 = (char *)CRYPTO_strdup(&DAT_145cc5568,"crypto\\bn\\bn_print.c",0x1b);
    return pcVar3;
  }
  pcVar3 = (char *)CRYPTO_malloc((longlong)((int)param_1[1] << 4) + 2,"crypto\\bn\\bn_print.c",0x1c)
  ;
  if (pcVar3 != (char *)0x0) {
    pcVar4 = pcVar3;
    if ((int)param_1[2] != 0) {
      *pcVar3 = '-';
      pcVar4 = pcVar3 + 1;
    }
    iVar2 = (int)param_1[1] + -1;
    lVar8 = (longlong)iVar2;
    if (-1 < iVar2) {
      do {
        lVar5 = *param_1;
        bVar6 = *(byte *)(lVar5 + 7 + lVar8 * 8);
        if ((bVar1) || (bVar6 != 0)) {
          bVar1 = true;
          *pcVar4 = "0123456789ABCDEF"[bVar6 >> 4];
          pcVar4[1] = "0123456789ABCDEF"[bVar6 & 0xf];
          pcVar4 = pcVar4 + 2;
          lVar5 = *param_1;
        }
        bVar6 = (byte)*(undefined2 *)(lVar5 + 6 + lVar8 * 8);
        if ((bVar1) || (bVar6 != 0)) {
          bVar1 = true;
          *pcVar4 = "0123456789ABCDEF"[bVar6 >> 4];
          pcVar4[1] = "0123456789ABCDEF"[bVar6 & 0xf];
          pcVar4 = pcVar4 + 2;
          lVar5 = *param_1;
        }
        uVar7 = *(ulonglong *)(lVar5 + lVar8 * 8);
        if ((bVar1) || ((char)(uVar7 >> 0x28) != '\0')) {
          uVar7 = uVar7 >> 0x28 & 0xff;
          bVar1 = true;
          *pcVar4 = "0123456789ABCDEF"[uVar7 >> 4];
          pcVar4[1] = "0123456789ABCDEF"[(uint)uVar7 & 0xf];
          pcVar4 = pcVar4 + 2;
          lVar5 = *param_1;
        }
        uVar7 = *(ulonglong *)(lVar5 + lVar8 * 8);
        if ((bVar1) || ((char)(uVar7 >> 0x20) != '\0')) {
          uVar7 = uVar7 >> 0x20 & 0xff;
          bVar1 = true;
          *pcVar4 = "0123456789ABCDEF"[uVar7 >> 4];
          pcVar4[1] = "0123456789ABCDEF"[(uint)uVar7 & 0xf];
          pcVar4 = pcVar4 + 2;
          lVar5 = *param_1;
        }
        uVar7 = *(ulonglong *)(lVar5 + lVar8 * 8);
        if ((bVar1) || ((char)(uVar7 >> 0x18) != '\0')) {
          uVar7 = uVar7 >> 0x18 & 0xff;
          bVar1 = true;
          *pcVar4 = "0123456789ABCDEF"[uVar7 >> 4];
          pcVar4[1] = "0123456789ABCDEF"[(uint)uVar7 & 0xf];
          pcVar4 = pcVar4 + 2;
          lVar5 = *param_1;
        }
        uVar7 = *(ulonglong *)(lVar5 + lVar8 * 8);
        if ((bVar1) || ((char)(uVar7 >> 0x10) != '\0')) {
          uVar7 = uVar7 >> 0x10 & 0xff;
          bVar1 = true;
          *pcVar4 = "0123456789ABCDEF"[uVar7 >> 4];
          pcVar4[1] = "0123456789ABCDEF"[(uint)uVar7 & 0xf];
          pcVar4 = pcVar4 + 2;
          lVar5 = *param_1;
        }
        uVar7 = *(ulonglong *)(lVar5 + lVar8 * 8);
        if ((bVar1) || ((char)(uVar7 >> 8) != '\0')) {
          uVar7 = uVar7 >> 8 & 0xff;
          bVar1 = true;
          *pcVar4 = "0123456789ABCDEF"[uVar7 >> 4];
          pcVar4[1] = "0123456789ABCDEF"[(uint)uVar7 & 0xf];
          pcVar4 = pcVar4 + 2;
          lVar5 = *param_1;
        }
        uVar7 = *(ulonglong *)(lVar5 + lVar8 * 8);
        if ((bVar1) || ((char)uVar7 != '\0')) {
          uVar7 = uVar7 & 0xff;
          bVar1 = true;
          *pcVar4 = "0123456789ABCDEF"[uVar7 >> 4];
          pcVar4[1] = "0123456789ABCDEF"[(uint)uVar7 & 0xf];
          pcVar4 = pcVar4 + 2;
        }
        lVar8 = lVar8 + -1;
      } while (-1 < lVar8);
    }
    *pcVar4 = '\0';
    return pcVar3;
  }
  ERR_put_error(3,0x69,0x41,"crypto\\bn\\bn_print.c",0x1e,uVar9);
  return (char *)0x0;
}



// FUNCTION 143d3a220 BN_dec2bn body=459 status=ok
// SIG undefined BN_dec2bn(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int BN_dec2bn(longlong *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  char *pcVar6;
  longlong lVar7;
  int iVar8;
  
  lVar4 = 0;
  if ((param_2 != (char *)0x0) && (cVar1 = *param_2, cVar1 != '\0')) {
    pcVar6 = param_2 + 1;
    if (cVar1 != '-') {
      pcVar6 = param_2;
    }
    iVar8 = 0;
    lVar7 = 0;
    do {
      iVar2 = ossl_ctype_check((int)pcVar6[lVar7],4);
      if (iVar2 == 0) break;
      iVar8 = iVar8 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < 0x20000000);
    if ((iVar8 != 0) && (iVar8 < 0x20000000)) {
      iVar2 = (uint)(cVar1 == '-') + iVar8;
      if (param_1 == (longlong *)0x0) {
        return iVar2;
      }
      lVar4 = *param_1;
      if (lVar4 == 0) {
        lVar4 = BN_new();
        if (lVar4 == 0) {
          return 0;
        }
      }
      else {
        BN_set_word(lVar4,0);
      }
      if (iVar8 * 4 < 0x7fffffc1) {
        iVar3 = iVar8 * 4 + 0x3f;
        iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 0x3fU)) >> 6;
        lVar7 = lVar4;
        if (*(int *)(lVar4 + 0xc) < iVar3) {
          lVar7 = bn_expand2(lVar4,iVar3);
        }
        if (lVar7 != 0) {
          iVar3 = (iVar8 / 0x13) * 0x13 - iVar8;
          iVar8 = iVar8 + -1;
          if (-1 < iVar8) {
            iVar5 = 0;
            if (iVar3 != 0) {
              iVar5 = iVar3 + 0x13;
            }
            do {
              iVar5 = iVar5 + 1;
              if (iVar5 == 0x13) {
                iVar3 = BN_mul_word(lVar4,10000000000000000000);
                if ((iVar3 == 0) || (iVar3 = BN_add_word(lVar4), iVar3 == 0)) goto LAB_143d3a3be;
                iVar5 = 0;
              }
              iVar8 = iVar8 + -1;
            } while (-1 < iVar8);
          }
          bn_correct_top(lVar4);
          *param_1 = lVar4;
          if (*(int *)(lVar4 + 8) != 0) {
            *(uint *)(lVar4 + 0x10) = (uint)(cVar1 == '-');
            return iVar2;
          }
          return iVar2;
        }
      }
    }
LAB_143d3a3be:
    if (*param_1 == 0) {
      BN_free(lVar4);
    }
  }
  return 0;
}



// FUNCTION 143d3a3f0 BN_hex2bn body=502 status=ok
// SIG undefined BN_hex2bn(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int BN_hex2bn(longlong *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  char *pcVar10;
  longlong *plVar11;
  bool bVar12;
  
  plVar11 = (longlong *)0x0;
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    bVar12 = *param_2 == '-';
    iVar9 = 0;
    lVar6 = 0;
    pcVar10 = param_2 + 1;
    if (!bVar12) {
      pcVar10 = param_2;
    }
    do {
      iVar1 = ossl_ctype_check((int)pcVar10[lVar6],0x10);
      if (iVar1 == 0) break;
      iVar9 = iVar9 + 1;
      lVar6 = lVar6 + 1;
    } while (lVar6 < 0x20000000);
    plVar4 = plVar11;
    if ((iVar9 != 0) && (iVar9 < 0x20000000)) {
      iVar1 = (uint)bVar12 + iVar9;
      if (param_1 == (longlong *)0x0) {
        return iVar1;
      }
      plVar4 = (longlong *)*param_1;
      if (plVar4 == (longlong *)0x0) {
        plVar4 = (longlong *)BN_new();
        if (plVar4 == (longlong *)0x0) {
          return 0;
        }
      }
      else {
        BN_set_word(plVar4,0);
      }
      if (iVar9 * 4 < 0x7fffffc1) {
        iVar2 = iVar9 * 4 + 0x3f;
        iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 0x3fU)) >> 6;
        plVar5 = plVar4;
        if (*(int *)((longlong)plVar4 + 0xc) < iVar2) {
          plVar5 = (longlong *)bn_expand2(plVar4,iVar2);
        }
        if (plVar5 != (longlong *)0x0) {
          iVar2 = 0;
          for (; 0 < iVar9; iVar9 = iVar9 + -0x10) {
            uVar7 = 0;
            iVar3 = iVar9;
            if (0xf < iVar9) {
              iVar3 = 0x10;
            }
            lVar8 = (longlong)iVar3;
            lVar6 = iVar9 - lVar8;
            do {
              iVar3 = FUN_143cf2b10(pcVar10[lVar6]);
              lVar6 = lVar6 + 1;
              if (iVar3 < 0) {
                iVar3 = 0;
              }
              lVar8 = lVar8 + -1;
              uVar7 = uVar7 << 4 | (longlong)iVar3;
            } while (0 < lVar8);
            iVar2 = iVar2 + 1;
            *(ulonglong *)((longlong)plVar11 + *plVar4) = uVar7;
            plVar11 = plVar11 + 1;
          }
          *(int *)(plVar4 + 1) = iVar2;
          bn_correct_top(plVar4);
          *param_1 = (longlong)plVar4;
          if ((int)plVar4[1] == 0) {
            return iVar1;
          }
          *(uint *)(plVar4 + 2) = (uint)bVar12;
          return iVar1;
        }
      }
    }
    if (*param_1 == 0) {
      BN_free(plVar4);
    }
  }
  return 0;
}



// FUNCTION 143d3a5f0 BN_print body=275 status=ok
// SIG undefined BN_print(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_print(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  bVar1 = false;
  if ((((int)param_2[2] == 0) || (iVar2 = BIO_write(param_1,&DAT_145cc6554,1), iVar2 == 1)) &&
     ((iVar2 = BN_is_zero(param_2), iVar2 == 0 ||
      (iVar2 = BIO_write(param_1,&DAT_145cc5568,1), iVar2 == 1)))) {
    iVar2 = (int)param_2[1] + -1;
    lVar5 = (longlong)iVar2;
    if (-1 < iVar2) {
      do {
        iVar2 = 0x3c;
        do {
          uVar4 = *(ulonglong *)(*param_2 + lVar5 * 8) >> ((byte)iVar2 & 0x3f);
          if ((bVar1) || ((uVar4 & 0xf) != 0)) {
            iVar3 = BIO_write(param_1,"0123456789ABCDEF" + ((uint)uVar4 & 0xf),1);
            if (iVar3 != 1) {
              return 0;
            }
            bVar1 = true;
          }
          iVar2 = iVar2 + -4;
        } while (-1 < iVar2);
        lVar5 = lVar5 + -1;
      } while (-1 < lVar5);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 143d3a710 OBJ_cmp body=47 status=ok
// SIG undefined OBJ_cmp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OBJ_cmp(longlong param_1,longlong param_2)

{
  if (*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14)) {
    _guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 0x18),*(void **)(param_2 + 0x18),
               (longlong)*(int *)(param_1 + 0x14));
    return;
  }
  return;
}



// FUNCTION 143d3a740 OBJ_dup body=307 status=ok
// SIG undefined OBJ_dup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * OBJ_dup(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143d3a74c;
  if (param_1 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    return param_1;
  }
  plVar1 = (longlong *)ASN1_OBJECT_new();
  if (plVar1 == (longlong *)0x0) {
    ERR_put_error(8,0x65,0xd,"crypto\\objects\\obj_lib.c",0x1c,uVar3);
    return (longlong *)0x0;
  }
  *(uint *)(plVar1 + 4) = *(uint *)(param_1 + 4) | 0xd;
  if (0 < *(int *)((longlong)param_1 + 0x14)) {
    lVar2 = CRYPTO_memdup(param_1[3],(longlong)*(int *)((longlong)param_1 + 0x14),
                          "crypto\\objects\\obj_lib.c",0x26);
    plVar1[3] = lVar2;
    if (lVar2 == 0) goto LAB_143d3a830;
  }
  *(undefined4 *)((longlong)plVar1 + 0x14) = *(undefined4 *)((longlong)param_1 + 0x14);
  *(int *)(plVar1 + 2) = (int)param_1[2];
  if (param_1[1] != 0) {
    lVar2 = CRYPTO_strdup(param_1[1],"crypto\\objects\\obj_lib.c",0x2c);
    plVar1[1] = lVar2;
    if (lVar2 == 0) goto LAB_143d3a830;
  }
  if (*param_1 != 0) {
    lVar2 = CRYPTO_strdup(*param_1,"crypto\\objects\\obj_lib.c",0x2f);
    *plVar1 = lVar2;
    if (lVar2 == 0) {
LAB_143d3a830:
      ASN1_OBJECT_free(plVar1);
      ERR_put_error(8,0x65,0x41,"crypto\\objects\\obj_lib.c",0x35,uVar3);
      return (longlong *)0x0;
    }
  }
  return plVar1;
}



// FUNCTION 143d3a880 ASN1_TYPE_cmp body=103 status=ok
// SIG undefined ASN1_TYPE_cmp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ASN1_TYPE_cmp(int *param_1,int *param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  if (((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) || (iVar1 = *param_1, iVar1 != *param_2))
  {
    return 0xffffffff;
  }
  if (iVar1 == 1) {
    return (ulonglong)(uint)(param_1[2] - param_2[2]);
  }
  if (iVar1 != 5) {
    if (iVar1 != 6) {
      uVar2 = ASN1_STRING_cmp();
      return uVar2;
    }
    uVar2 = OBJ_cmp(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
    return uVar2;
  }
  return 0;
}



// FUNCTION 143d3a8f0 ASN1_TYPE_get body=18 status=ok
// SIG undefined ASN1_TYPE_get(void)

int ASN1_TYPE_get(int *param_1)

{
  if ((*(longlong *)(param_1 + 2) == 0) && (*param_1 != 5)) {
    return 0;
  }
  return *param_1;
}



// FUNCTION 143d3a910 ASN1_TYPE_pack_sequence body=192 status=ok
// SIG undefined ASN1_TYPE_pack_sequence(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * ASN1_TYPE_pack_sequence(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *local_res20;
  
  lVar1 = ASN1_item_pack(param_2,param_1,0);
  if (lVar1 == 0) {
    return (undefined4 *)0x0;
  }
  if ((param_3 == (undefined8 *)0x0) ||
     (puVar2 = (undefined4 *)*param_3, puVar2 == (undefined4 *)0x0)) {
    puVar2 = (undefined4 *)ASN1_TYPE_new();
    if (puVar2 == (undefined4 *)0x0) {
      ASN1_BIT_STRING_free(lVar1);
      return (undefined4 *)0x0;
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = puVar2;
    }
  }
  local_res20 = puVar2;
  if (*(longlong *)(puVar2 + 2) != 0) {
    asn1_primitive_free(&local_res20,0,0);
  }
  *local_res20 = 0x10;
  *(longlong *)(local_res20 + 2) = lVar1;
  return puVar2;
}



// FUNCTION 143d3a9d0 ASN1_TYPE_set body=105 status=ok
// SIG undefined ASN1_TYPE_set(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_TYPE_set(int *param_1,int param_2,longlong param_3)

{
  int *local_res8;
  
  local_res8 = param_1;
  if (*(longlong *)(param_1 + 2) != 0) {
    asn1_primitive_free(&local_res8,0,0);
  }
  *local_res8 = param_2;
  if (param_2 == 1) {
    local_res8[2] = -(uint)(param_3 != 0) & 0xff;
    return;
  }
  *(longlong *)(local_res8 + 2) = param_3;
  return;
}



// FUNCTION 143d3aa40 ASN1_TYPE_set1 body=107 status=ok
// SIG undefined ASN1_TYPE_set1(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASN1_TYPE_set1(undefined8 param_1,int param_2,longlong param_3)

{
  if ((param_3 != 0) && (param_2 != 1)) {
    if (param_2 == 6) {
      param_3 = OBJ_dup();
    }
    else {
      param_3 = ASN1_STRING_dup(param_3);
    }
    if (param_3 == 0) {
      return 0;
    }
  }
  ASN1_TYPE_set(param_1,param_2,param_3);
  return 1;
}



// FUNCTION 143d3aab0 ASN1_TYPE_unpack_sequence body=54 status=ok
// SIG undefined ASN1_TYPE_unpack_sequence(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASN1_TYPE_unpack_sequence(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  
  if (((param_2 != (int *)0x0) && (*param_2 == 0x10)) && (*(longlong *)(param_2 + 2) != 0)) {
    uVar1 = ASN1_item_unpack(*(longlong *)(param_2 + 2),param_1);
    return uVar1;
  }
  return 0;
}



// FUNCTION 143d3aaf0 ASN1_TYPE_get_int_octetstring body=220 status=ok
// SIG undefined ASN1_TYPE_get_int_octetstring(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int ASN1_TYPE_get_int_octetstring(int *param_1,undefined4 *param_2,void *param_3,int param_4)

{
  undefined4 *puVar1;
  void *_Src;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143d3ab10;
  puVar1 = (undefined4 *)0x0;
  iVar2 = -1;
  if ((*param_1 == 0x10) && (*(longlong *)(param_1 + 2) != 0)) {
    puVar1 = (undefined4 *)ASN1_TYPE_unpack_sequence(&DAT_145d82cc0,param_1);
    if (puVar1 != (undefined4 *)0x0) {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = *puVar1;
      }
      iVar2 = FRollingHash::GetWindowSize(*(undefined8 *)(puVar1 + 2));
      if (iVar2 < param_4) {
        param_4 = iVar2;
      }
      if (param_3 != (void *)0x0) {
        _Src = (void *)TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
                       ::GetBoundProgramCounterForTimerManager(*(undefined8 *)(puVar1 + 2));
        _guard_xfg_dispatch_icall_nop(param_3,_Src,(longlong)param_4);
      }
      if (iVar2 != -1) goto LAB_143d3aba0;
    }
  }
  ERR_put_error(0xd,0x86,0x6d,"crypto\\asn1\\evp_asn1.c",0x6f,uVar3);
LAB_143d3aba0:
  ASN1_item_free(puVar1,&DAT_145d82cc0);
  return iVar2;
}



// FUNCTION 143d3abd0 ASN1_TYPE_get_octetstring body=166 status=ok
// SIG undefined ASN1_TYPE_get_octetstring(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int ASN1_TYPE_get_octetstring(int *param_1,void *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  
  if ((*param_1 == 4) && (*(longlong *)(param_1 + 2) != 0)) {
    _Src = (void *)TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
                   ::GetBoundProgramCounterForTimerManager();
    iVar1 = FRollingHash::GetWindowSize(*(undefined8 *)(param_1 + 2));
    if (iVar1 < param_3) {
      param_3 = iVar1;
    }
    _guard_xfg_dispatch_icall_nop(param_2,_Src,(longlong)param_3);
    return iVar1;
  }
  ERR_put_error(0xd,0x87,0x6d,"crypto\\asn1\\evp_asn1.c",0x24,0x143d3abe5);
  return -1;
}



// FUNCTION 143d3ac80 ASN1_TYPE_set_int_octetstring body=93 status=ok
// SIG undefined ASN1_TYPE_set_int_octetstring(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool ASN1_TYPE_set_int_octetstring
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 local_res8 [4];
  undefined4 local_38 [2];
  undefined4 *local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143d3ac90;
  local_30 = &local_28;
  local_18 = 0;
  local_24 = 4;
  local_res8[0] = param_1;
  local_38[0] = param_2;
  local_28 = param_4;
  local_20 = param_3;
  lVar1 = ASN1_TYPE_pack_sequence(&DAT_145d82cc0,local_38,local_res8);
  return lVar1 != 0;
}



// FUNCTION 143d3ace0 ASN1_TYPE_set_octetstring body=123 status=ok
// SIG undefined ASN1_TYPE_set_octetstring(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASN1_TYPE_set_octetstring(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = ASN1_OCTET_STRING_new();
  if (lVar2 != 0) {
    iVar1 = ASN1_OCTET_STRING_set(lVar2,param_2,param_3);
    if (iVar1 != 0) {
      ASN1_TYPE_set(param_1,4,lVar2);
      return 1;
    }
    ASN1_BIT_STRING_free(lVar2);
  }
  return 0;
}



// FUNCTION 143d3ad60 ENGINE_get_digest body=89 status=ok
// SIG undefined ENGINE_get_digest(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_get_digest(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 local_res8 [4];
  
  if (*(code **)(param_1 + 0x40) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x40))(param_1,local_res8,0,param_2);
    if (iVar1 != 0) {
      return local_res8[0];
    }
  }
  ERR_put_error(0x26,0xba,0x93,"crypto\\engine\\tb_digest.c",0x4a);
  return 0;
}



// FUNCTION 143d3adc0 ENGINE_get_digest_engine body=31 status=ok
// SIG undefined ENGINE_get_digest_engine(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ENGINE_get_digest_engine(undefined4 param_1)

{
  engine_table_select(&DAT_146bcb920,param_1);
  return;
}



// FUNCTION 143d3ade0 ENGINE_register_digests body=99 status=ok
// SIG undefined ENGINE_register_digests(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_register_digests(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  ulonglong uVar3;
  
  uVar3 = 0x143d3adec;
  if (*(code **)(param_1 + 0x40) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x40))(param_1,0,local_res8,0);
    if (0 < iVar1) {
      uVar2 = engine_table_register
                        (&DAT_146bcb920,FUN_143d3aed0,param_1,local_res8[0],iVar1,
                         uVar3 & 0xffffffff00000000);
      return uVar2;
    }
  }
  return 1;
}



// FUNCTION 143d3ae50 ENGINE_set_default_digests body=99 status=ok
// SIG undefined ENGINE_set_default_digests(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_set_default_digests(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  undefined4 uVar3;
  
  uVar3 = 1;
  if (*(code **)(param_1 + 0x40) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x40))(param_1,0,local_res8,0);
    if (0 < iVar1) {
      uVar2 = engine_table_register
                        (&DAT_146bcb920,FUN_143d3aed0,param_1,local_res8[0],iVar1,CONCAT44(uVar3,1))
      ;
      return uVar2;
    }
  }
  return 1;
}



// FUNCTION 143d3aec0 ENGINE_set_digests body=10 status=ok
// SIG undefined ENGINE_set_digests(void)

undefined8 ENGINE_set_digests(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  return 1;
}



// FUNCTION 143d3aed0 FUN_143d3aed0 body=29 status=ok
// SIG undefined FUN_143d3aed0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d3aed0(void)

{
  engine_table_cleanup(&DAT_146bcb920);
  return;
}



// FUNCTION 143d3aef0 ENGINE_get_cipher body=89 status=ok
// SIG undefined ENGINE_get_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_get_cipher(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 local_res8 [4];
  
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x38))(param_1,local_res8,0,param_2);
    if (iVar1 != 0) {
      return local_res8[0];
    }
  }
  ERR_put_error(0x26,0xb9,0x92,"crypto\\engine\\tb_cipher.c",0x4a);
  return 0;
}



// FUNCTION 143d3af50 FUN_143d3af50 body=31 status=ok
// SIG undefined FUN_143d3af50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d3af50(undefined4 param_1)

{
  engine_table_select(&DAT_146bcb928,param_1);
  return;
}



// FUNCTION 143d3af70 ENGINE_register_ciphers body=99 status=ok
// SIG undefined ENGINE_register_ciphers(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_register_ciphers(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  ulonglong uVar3;
  
  uVar3 = 0x143d3af7c;
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x38))(param_1,0,local_res8,0);
    if (0 < iVar1) {
      uVar2 = engine_table_register
                        (&DAT_146bcb928,FUN_143d3b060,param_1,local_res8[0],iVar1,
                         uVar3 & 0xffffffff00000000);
      return uVar2;
    }
  }
  return 1;
}



// FUNCTION 143d3afe0 ENGINE_set_ciphers body=10 status=ok
// SIG undefined ENGINE_set_ciphers(void)

undefined8 ENGINE_set_ciphers(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return 1;
}



// FUNCTION 143d3aff0 ENGINE_set_default_ciphers body=99 status=ok
// SIG undefined ENGINE_set_default_ciphers(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_set_default_ciphers(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  undefined4 uVar3;
  
  uVar3 = 1;
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x38))(param_1,0,local_res8,0);
    if (0 < iVar1) {
      uVar2 = engine_table_register
                        (&DAT_146bcb928,FUN_143d3b060,param_1,local_res8[0],iVar1,CONCAT44(uVar3,1))
      ;
      return uVar2;
    }
  }
  return 1;
}



// FUNCTION 143d3b060 FUN_143d3b060 body=29 status=ok
// SIG undefined FUN_143d3b060(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d3b060(void)

{
  engine_table_cleanup(&DAT_146bcb928);
  return;
}



// FUNCTION 143d3b080 EVP_PBE_CipherInit body=593 status=ok
// SIG undefined EVP_PBE_CipherInit(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
EVP_PBE_CipherInit(longlong param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  ulonglong local_e0;
  undefined4 local_d8;
  undefined4 local_c8;
  int local_c4;
  undefined1 local_a8 [80];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  iVar2 = OBJ_obj2nid();
  if (iVar2 == 0) goto LAB_143d3b26b;
  uVar6 = 0;
  local_c8 = 0;
  local_c4 = iVar2;
  if (DAT_146bcb930 == 0) {
LAB_143d3b0fc:
    local_e8 = &LAB_143d3b410;
    lVar4 = OBJ_bsearch_(&local_c8,&DAT_145d82d60,0x1d);
    if (lVar4 == 0) {
LAB_143d3b26b:
      local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,0x5f);
      ERR_put_error(6,0x74,0x79,"crypto\\evp\\evp_pbe.c");
      if (param_1 == 0) {
        OPENSSL_strlcpy(local_a8,&DAT_145d4a5b8,0x50);
      }
      else {
        i2t_ASN1_OBJECT(local_a8,0x50,param_1);
      }
      ERR_add_error_data(2,"TYPE=",local_a8);
      return 0;
    }
  }
  else {
    uVar3 = OPENSSL_sk_find(DAT_146bcb930,&local_c8);
    lVar4 = OPENSSL_sk_value(DAT_146bcb930,uVar3);
    if (lVar4 == 0) goto LAB_143d3b0fc;
  }
  iVar2 = *(int *)(lVar4 + 0xc);
  pcVar1 = *(code **)(lVar4 + 0x10);
  uVar8 = uVar6;
  if ((param_2 != 0) && (uVar8 = param_3 & 0xffffffff, (int)param_3 == -1)) {
    uVar8 = 0xffffffffffffffff;
    do {
      uVar8 = uVar8 + 1;
    } while (*(char *)(uVar8 + param_2) != '\0');
  }
  uVar7 = uVar6;
  if (*(int *)(lVar4 + 8) != -1) {
    uVar5 = OBJ_nid2sn();
    uVar7 = EVP_get_cipherbyname(uVar5);
    if (uVar7 == 0) {
      local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,0x72);
      uVar3 = 0xa0;
      goto LAB_143d3b1b0;
    }
  }
  if (iVar2 != -1) {
    uVar5 = OBJ_nid2sn(iVar2);
    uVar6 = EVP_get_digestbyname(uVar5);
    if (uVar6 == 0) {
      local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,0x7c);
      uVar3 = 0xa1;
      goto LAB_143d3b1b0;
    }
  }
  local_d8 = param_6;
  local_e8 = (undefined1 *)uVar7;
  local_e0 = uVar6;
  iVar2 = (*pcVar1)(param_5,param_2,uVar8 & 0xffffffff,param_4);
  if (iVar2 != 0) {
    return 1;
  }
  local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,0x82);
  uVar3 = 0x78;
LAB_143d3b1b0:
  ERR_put_error(6,0x74,uVar3,"crypto\\evp\\evp_pbe.c");
  return 0;
}



// FUNCTION 143d3b2e0 EVP_PBE_cleanup body=48 status=ok
// SIG undefined EVP_PBE_cleanup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_PBE_cleanup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  OPENSSL_sk_pop_free(DAT_146bcb930,free_evp_pbe_ctl,param_3,param_4,0x143d3b2ea);
  DAT_146bcb930 = 0;
  return;
}



// FUNCTION 143d3b310 EVP_PBE_find body=201 status=ok
// SIG undefined EVP_PBE_find(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
EVP_PBE_find(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
            undefined8 *param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 local_28;
  int local_24;
  undefined8 uStack_10;
  
  uStack_10 = 0x143d3b320;
  if (param_2 != 0) {
    local_28 = param_1;
    local_24 = param_2;
    if (DAT_146bcb930 != 0) {
      uVar1 = OPENSSL_sk_find(DAT_146bcb930,&local_28);
      lVar2 = OPENSSL_sk_value(DAT_146bcb930,uVar1);
      if (lVar2 != 0) goto LAB_143d3b394;
    }
    lVar2 = OBJ_bsearch_(&local_28,&DAT_145d82d60,0x1d,0x18,&LAB_143d3b410);
    if (lVar2 != 0) {
LAB_143d3b394:
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(lVar2 + 8);
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = *(undefined4 *)(lVar2 + 0xc);
      }
      if (param_5 != (undefined8 *)0x0) {
        *param_5 = *(undefined8 *)(lVar2 + 0x10);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143d3b3e0 free_evp_pbe_ctl body=35 status=ok
// SIG undefined free_evp_pbe_ctl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void free_evp_pbe_ctl(undefined8 param_1)

{
  CRYPTO_free(param_1,"crypto\\evp\\evp_pbe.c",0xf0);
  return;
}



// FUNCTION 143d3b420 X509_ATTRIBUTE_create body=159 status=ok
// SIG undefined X509_ATTRIBUTE_create(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * X509_ATTRIBUTE_create(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  puVar2 = (undefined8 *)ASN1_item_new(&DAT_145d83080);
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = OBJ_nid2obj(param_1);
    *puVar2 = uVar3;
    lVar4 = ASN1_TYPE_new();
    if ((lVar4 != 0) && (iVar1 = OPENSSL_sk_push(puVar2[1],lVar4), iVar1 != 0)) {
      ASN1_TYPE_set(lVar4,param_2,param_3);
      return puVar2;
    }
    ASN1_item_free(puVar2,&DAT_145d83080);
    ASN1_TYPE_free(lVar4);
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143d3b4c0 X509_ATTRIBUTE_dup body=32 status=ok
// SIG undefined X509_ATTRIBUTE_dup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_ATTRIBUTE_dup(undefined8 param_1)

{
  ASN1_item_dup(&DAT_145d83080,param_1);
  return;
}



// FUNCTION 143d3b4e0 X509_ATTRIBUTE_free body=29 status=ok
// SIG undefined X509_ATTRIBUTE_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_ATTRIBUTE_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_145d83080);
  return;
}



// FUNCTION 143d3b510 FUN_143d3b510 body=29 status=ok
// SIG undefined FUN_143d3b510(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d3b510(void)

{
  ASN1_item_new(&DAT_145d83080);
  return;
}



// FUNCTION 143d3b530 CMAC_CTX_copy body=179 status=ok
// SIG undefined CMAC_CTX_copy(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CMAC_CTX_copy(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  size_t _Size;
  
  if (*(int *)(param_2 + 0x11) != -1) {
    iVar1 = EVP_CIPHER_CTX_copy(*param_1,*param_2);
    if (iVar1 != 0) {
      iVar1 = EVP_CIPHER_CTX_block_size(*param_2);
      _Size = (size_t)iVar1;
      _guard_xfg_dispatch_icall_nop(param_1 + 1,param_2 + 1,_Size);
      _guard_xfg_dispatch_icall_nop(param_1 + 5,param_2 + 5,_Size);
      _guard_xfg_dispatch_icall_nop(param_1 + 9,param_2 + 9,_Size);
      _guard_xfg_dispatch_icall_nop(param_1 + 0xd,param_2 + 0xd,_Size);
      *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143d3b5f0 CMAC_CTX_free body=131 status=ok
// SIG undefined CMAC_CTX_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CMAC_CTX_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    EVP_CIPHER_CTX_reset(*param_1);
    FUN_14004ff40(param_1 + 9,0x20);
    FUN_14004ff40(param_1 + 1,0x20);
    FUN_14004ff40(param_1 + 5,0x20);
    FUN_14004ff40(param_1 + 0xd,0x20);
    *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
    EVP_CIPHER_CTX_free(*param_1);
    CRYPTO_free(param_1,"crypto\\cmac\\cmac.c",0x54);
  }
  return;
}



// FUNCTION 143d3b680 CMAC_CTX_new body=139 status=ok
// SIG undefined CMAC_CTX_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * CMAC_CTX_new(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143d3b68c;
  plVar1 = (longlong *)CRYPTO_malloc(0x90,"crypto\\cmac\\cmac.c",0x32);
  if (plVar1 == (longlong *)0x0) {
    ERR_put_error(0xf,0x78,0x41,"crypto\\cmac\\cmac.c",0x33,uVar3);
    return (longlong *)0x0;
  }
  lVar2 = EVP_CIPHER_CTX_new();
  *plVar1 = lVar2;
  if (lVar2 == 0) {
    CRYPTO_free(plVar1,"crypto\\cmac\\cmac.c",0x38);
    return (longlong *)0x0;
  }
  *(undefined4 *)(plVar1 + 0x11) = 0xffffffff;
  return plVar1;
}



// FUNCTION 143d3b710 CMAC_Final body=296 status=ok
// SIG undefined CMAC_Final(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CMAC_Final(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(int *)(param_1 + 0x11) == -1) {
    return 0;
  }
  iVar2 = EVP_CIPHER_CTX_block_size(*param_1);
  lVar5 = (longlong)iVar2;
  *param_3 = lVar5;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x11);
    if (iVar1 == iVar2) {
      if (0 < iVar2) {
        pbVar3 = (byte *)(param_1 + 1);
        lVar4 = lVar5;
        do {
          pbVar3[(param_2 - (longlong)param_1) + -8] = pbVar3[0x60] ^ *pbVar3;
          pbVar3 = pbVar3 + 1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
    }
    else {
      *(undefined1 *)((longlong)iVar1 + 0x68 + (longlong)param_1) = 0x80;
      if (1 < iVar2 - iVar1) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar1 + 0x69 + (longlong)param_1),0,
                   (longlong)((iVar2 - iVar1) + -1));
      }
      if (0 < iVar2) {
        pbVar3 = (byte *)(param_1 + 5);
        lVar4 = lVar5;
        do {
          pbVar3[(param_2 - (longlong)param_1) + -0x28] = pbVar3[0x40] ^ *pbVar3;
          pbVar3 = pbVar3 + 1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
    }
    iVar2 = EVP_Cipher(*param_1,param_2,param_2,iVar2);
    if (iVar2 == 0) {
      FUN_14004ff40(param_2,lVar5);
      return 0;
    }
  }
  return 1;
}



// FUNCTION 143d3b840 CMAC_Init body=410 status=ok
// SIG undefined CMAC_Init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
CMAC_Init(undefined8 *param_1,longlong param_2,ulonglong param_3,longlong param_4,longlong param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143d3b860;
  if (param_2 == 0) {
    if (param_4 == 0) {
      if (param_5 != 0) {
        return 1;
      }
      if (param_3 != 0) {
        return 1;
      }
      if (*(int *)(param_1 + 0x11) == -1) {
        return 0;
      }
      iVar1 = EVP_EncryptInit_ex(*param_1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = EVP_CIPHER_CTX_block_size(*param_1);
      goto LAB_143d3b8bf;
    }
LAB_143d3b8f3:
    iVar1 = EVP_EncryptInit_ex(*param_1,param_4,param_5,0,0,0x143d3b860);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else if (param_4 != 0) goto LAB_143d3b8f3;
  if (param_2 == 0) {
    return 1;
  }
  lVar3 = FHardwareCursor::GetHandle(*param_1);
  if (((lVar3 == 0) ||
      (iVar1 = EVP_CIPHER_CTX_set_key_length(*param_1,param_3 & 0xffffffff), iVar1 == 0)) ||
     (iVar1 = EVP_EncryptInit_ex(*param_1,0,0,param_2,&DAT_145d830c8,uVar4), iVar1 == 0)) {
    return 0;
  }
  iVar1 = EVP_CIPHER_CTX_block_size(*param_1);
  iVar2 = EVP_Cipher(*param_1,param_1 + 9,&DAT_145d830c8,iVar1);
  if (iVar2 == 0) {
    return 0;
  }
  make_kn(param_1 + 1,param_1 + 9,iVar1);
  make_kn(param_1 + 5,param_1 + 1,iVar1);
  FUN_14004ff40(param_1 + 9);
  iVar2 = EVP_EncryptInit_ex(*param_1,0,0,0,&DAT_145d830c8);
  if (iVar2 == 0) {
    return 0;
  }
LAB_143d3b8bf:
  _guard_xfg_dispatch_icall_nop(param_1 + 9,0,(longlong)iVar1);
  *(undefined4 *)(param_1 + 0x11) = 0;
  return 1;
}



// FUNCTION 143d3b9e0 CMAC_Update body=257 status=ok
// SIG undefined CMAC_Update(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CMAC_Update(undefined8 *param_1,void *param_2,ulonglong param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong _Size;
  
  if (*(int *)(param_1 + 0x11) == -1) {
    return 0;
  }
  if (param_3 != 0) {
    iVar1 = EVP_CIPHER_CTX_block_size(*param_1);
    uVar4 = (ulonglong)iVar1;
    iVar2 = *(int *)(param_1 + 0x11);
    if (0 < iVar2) {
      uVar3 = uVar4 - (longlong)iVar2;
      _Size = param_3;
      if (uVar3 <= param_3) {
        _Size = uVar3;
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar2 + 0x68 + (longlong)param_1),param_2,_Size);
      *(int *)(param_1 + 0x11) = *(int *)(param_1 + 0x11) + (int)_Size;
      param_3 = param_3 - _Size;
      if (param_3 == 0) {
        return 1;
      }
      param_2 = (void *)((longlong)param_2 + _Size);
      iVar2 = EVP_Cipher(*param_1,param_1 + 9,param_1 + 0xd,iVar1);
      if (iVar2 == 0) {
        return 0;
      }
    }
    for (; uVar4 < param_3; param_3 = param_3 - uVar4) {
      iVar2 = EVP_Cipher(*param_1,param_1 + 9,param_2,iVar1);
      if (iVar2 == 0) {
        return 0;
      }
      param_2 = (void *)((longlong)param_2 + uVar4);
    }
    _guard_xfg_dispatch_icall_nop(param_1 + 0xd,param_2,param_3);
    *(int *)(param_1 + 0x11) = (int)param_3;
  }
  return 1;
}



// FUNCTION 143d3baf0 make_kn body=150 status=ok
// SIG undefined make_kn(void)

void make_kn(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  longlong lVar7;
  
  bVar6 = *param_2;
  iVar2 = param_3 + -1;
  lVar7 = (longlong)iVar2;
  bVar1 = (char)bVar6 >> 7;
  iVar3 = 0;
  if (0 < iVar2) {
    pbVar4 = param_1;
    bVar5 = bVar6;
    do {
      bVar6 = pbVar4[(longlong)(param_2 + (1 - (longlong)param_1))];
      *pbVar4 = bVar6 >> 7 | bVar5 * '\x02';
      lVar7 = lVar7 + -1;
      pbVar4 = pbVar4 + 1;
      bVar5 = bVar6;
      iVar3 = iVar2;
    } while (lVar7 != 0);
  }
  bVar5 = 0x1b;
  if (param_3 == 0x10) {
    bVar5 = 0x87;
  }
  param_1[iVar3] = bVar5 & bVar1 ^ bVar6 * '\x02';
  return;
}



// FUNCTION 143d3bb90 ENGINE_get_pkey_meth body=89 status=ok
// SIG undefined ENGINE_get_pkey_meth(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_get_pkey_meth(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 local_res8 [4];
  
  if (*(code **)(param_1 + 0x48) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x48))(param_1,local_res8,0,param_2);
    if (iVar1 != 0) {
      return local_res8[0];
    }
  }
  ERR_put_error(0x26,0xc0,0x65,"crypto\\engine\\tb_pkmeth.c",0x4c);
  return 0;
}



// FUNCTION 143d3bbf0 ENGINE_get_pkey_meth_engine body=31 status=ok
// SIG undefined ENGINE_get_pkey_meth_engine(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ENGINE_get_pkey_meth_engine(undefined4 param_1)

{
  engine_table_select(&DAT_146bcb938,param_1);
  return;
}



// FUNCTION 143d3bc10 ENGINE_register_pkey_meths body=99 status=ok
// SIG undefined ENGINE_register_pkey_meths(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_register_pkey_meths(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  ulonglong uVar3;
  
  uVar3 = 0x143d3bc1c;
  if (*(code **)(param_1 + 0x48) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x48))(param_1,0,local_res8,0);
    if (0 < iVar1) {
      uVar2 = engine_table_register
                        (&DAT_146bcb938,FUN_143d3bd70,param_1,local_res8[0],iVar1,
                         uVar3 & 0xffffffff00000000);
      return uVar2;
    }
  }
  return 1;
}



// FUNCTION 143d3bc80 ENGINE_set_default_pkey_meths body=99 status=ok
// SIG undefined ENGINE_set_default_pkey_meths(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_set_default_pkey_meths(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  undefined4 uVar3;
  
  uVar3 = 1;
  if (*(code **)(param_1 + 0x48) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x48))(param_1,0,local_res8,0);
    if (0 < iVar1) {
      uVar2 = engine_table_register
                        (&DAT_146bcb938,FUN_143d3bd70,param_1,local_res8[0],iVar1,CONCAT44(uVar3,1))
      ;
      return uVar2;
    }
  }
  return 1;
}



// FUNCTION 143d3bcf0 engine_pkey_meths_free body=125 status=ok
// SIG undefined engine_pkey_meths_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void engine_pkey_meths_free(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong local_res8;
  undefined8 local_res10;
  
  if (*(code **)(param_1 + 0x48) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x48))(param_1,0,&local_res8,0);
    if (0 < iVar1) {
      lVar3 = 0;
      do {
        iVar2 = (**(code **)(param_1 + 0x48))
                          (param_1,&local_res10,0,*(undefined4 *)(local_res8 + lVar3 * 4));
        if (iVar2 != 0) {
          EVP_PKEY_meth_free(local_res10);
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar1);
    }
  }
  return;
}



// FUNCTION 143d3bd70 FUN_143d3bd70 body=29 status=ok
// SIG undefined FUN_143d3bd70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d3bd70(void)

{
  engine_table_cleanup(&DAT_146bcb938);
  return;
}



// FUNCTION 143d3bd90 X509_INFO_free body=97 status=ok
// SIG undefined X509_INFO_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_INFO_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    X509_free(*param_1);
    X509_CRL_free(param_1[1]);
    X509_PKEY_free(param_1[2]);
    CRYPTO_free(param_1[7],"crypto\\asn1\\x_info.c",0x25);
    CRYPTO_free(param_1,"crypto\\asn1\\x_info.c",0x26);
  }
  return;
}



// FUNCTION 143d3be00 X509_INFO_new body=76 status=ok
// SIG undefined X509_INFO_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong X509_INFO_new(void)

{
  longlong lVar1;
  
  lVar1 = CRYPTO_zalloc(0x40,"crypto\\asn1\\x_info.c",0x14);
  if (lVar1 == 0) {
    ERR_put_error(0xd,0xaa,0x41,"crypto\\asn1\\x_info.c",0x16);
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 143d3be50 PEM_X509_INFO_read_bio body=1312 status=ok
// SIG undefined PEM_X509_INFO_read_bio(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong PEM_X509_INFO_read_bio
                    (undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined4 *param_4)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  code *pcVar13;
  char *_Str1;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  undefined4 local_a8 [2];
  longlong local_a0;
  longlong local_98;
  char *local_90;
  longlong local_88;
  undefined4 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [24];
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  plVar9 = (longlong *)0x0;
  plVar14 = (longlong *)0x0;
  local_90 = (char *)0x0;
  local_a0 = 0;
  local_98 = 0;
  uVar3 = param_2;
  local_80 = param_4;
  local_78 = param_3;
  local_70 = param_1;
  if ((param_2 == 0) && (uVar3 = OPENSSL_sk_new_null(), uVar3 == 0)) {
    local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,0x36);
    ERR_put_error(9,0x74,0x41,"crypto\\pem\\pem_info.c");
    plVar4 = plVar9;
    plVar15 = plVar9;
  }
  else {
    plVar4 = (longlong *)X509_INFO_new();
    plVar15 = plVar14;
    if (plVar4 != (longlong *)0x0) {
      local_b8 = local_a8;
      iVar2 = PEM_read_bio(param_1,&local_90,&local_a0,&local_98);
      while (iVar2 != 0) {
LAB_143d3bf30:
        _Str1 = local_90;
        iVar11 = 0;
        iVar2 = _guard_xfg_dispatch_icall_nop(local_90,"CERTIFICATE");
        bVar1 = false;
        if ((iVar2 == 0) ||
           (iVar2 = _guard_xfg_dispatch_icall_nop(_Str1,"X509 CERTIFICATE"), iVar2 == 0)) {
          pcVar13 = d2i_X509;
LAB_143d3bf7c:
          plVar16 = plVar4;
          if (*plVar4 == 0) goto LAB_143d3c114;
LAB_143d3bf85:
          iVar2 = OPENSSL_sk_push(uVar3,plVar4);
          plVar15 = plVar9;
          if ((iVar2 == 0) ||
             (plVar4 = (longlong *)X509_INFO_new(), plVar15 = plVar14, plVar4 == (longlong *)0x0))
          goto LAB_143d3c2ad;
          goto LAB_143d3bf30;
        }
        iVar2 = _guard_xfg_dispatch_icall_nop(_Str1,"TRUSTED CERTIFICATE");
        if (iVar2 == 0) {
          pcVar13 = d2i_X509_AUX;
          goto LAB_143d3bf7c;
        }
        iVar2 = _guard_xfg_dispatch_icall_nop(_Str1,"X509 CRL");
        if (iVar2 == 0) {
          pcVar13 = X509_CRL_free;
          if (plVar4[1] == 0) {
            plVar16 = plVar4 + 1;
            goto LAB_143d3c114;
          }
          goto LAB_143d3bf85;
        }
        iVar2 = _guard_xfg_dispatch_icall_nop(_Str1,"RSA PRIVATE KEY");
        if (iVar2 == 0) {
          pcVar13 = d2i_RSAPrivateKey;
          if (plVar4[2] == 0) {
            plVar4[7] = 0;
            *(undefined4 *)(plVar4 + 6) = 0;
            lVar6 = X509_PKEY_new();
            plVar4[2] = lVar6;
            plVar15 = plVar14;
            if (lVar6 != 0) {
              lVar5 = -1;
              iVar11 = 6;
              do {
                lVar5 = lVar5 + 1;
              } while (*(char *)(local_a0 + lVar5) != '\0');
              bVar1 = 10 < (int)lVar5;
              plVar16 = (longlong *)(lVar6 + 0x18);
              goto LAB_143d3c114;
            }
            goto LAB_143d3c2ad;
          }
          goto LAB_143d3bf85;
        }
        iVar2 = _guard_xfg_dispatch_icall_nop(_Str1,"DSA PRIVATE KEY");
        if (iVar2 == 0) {
          pcVar13 = d2i_DSAPrivateKey;
          if (plVar4[2] != 0) goto LAB_143d3bf85;
          plVar4[7] = 0;
          *(undefined4 *)(plVar4 + 6) = 0;
          lVar6 = X509_PKEY_new();
          plVar4[2] = lVar6;
          plVar15 = plVar14;
          if (lVar6 == 0) goto LAB_143d3c2ad;
          lVar5 = -1;
          iVar11 = 0x74;
          do {
            lVar5 = lVar5 + 1;
          } while (*(char *)(local_a0 + lVar5) != '\0');
          bVar1 = 10 < (int)lVar5;
          plVar16 = (longlong *)(lVar6 + 0x18);
        }
        else {
          iVar2 = _guard_xfg_dispatch_icall_nop(_Str1,"EC PRIVATE KEY");
          if (iVar2 != 0) goto LAB_143d3c1c1;
          pcVar13 = d2i_ECPrivateKey;
          if (plVar4[2] != 0) goto LAB_143d3bf85;
          plVar4[7] = 0;
          *(undefined4 *)(plVar4 + 6) = 0;
          lVar6 = X509_PKEY_new();
          plVar4[2] = lVar6;
          plVar15 = plVar14;
          if (lVar6 == 0) goto LAB_143d3c2ad;
          lVar5 = -1;
          iVar11 = 0x198;
          do {
            lVar5 = lVar5 + 1;
          } while (*(char *)(local_a0 + lVar5) != '\0');
          bVar1 = 10 < (int)lVar5;
          plVar16 = (longlong *)(lVar6 + 0x18);
        }
LAB_143d3c114:
        if (bVar1) {
          iVar2 = PEM_get_EVP_CIPHER_INFO(local_a0,plVar4 + 3);
          plVar15 = plVar14;
          if (iVar2 == 0) goto LAB_143d3c2ad;
          plVar4[7] = local_98;
          *(undefined4 *)(plVar4 + 6) = local_a8[0];
          local_98 = 0;
          _Str1 = local_90;
          goto LAB_143d3c1c1;
        }
        iVar2 = PEM_get_EVP_CIPHER_INFO(local_a0,local_68);
        plVar15 = plVar14;
        if (iVar2 == 0) goto LAB_143d3c2ad;
        local_b8 = local_80;
        iVar2 = PEM_do_header(local_68,local_98,local_a8,local_78);
        if (iVar2 == 0) goto LAB_143d3c2ad;
        local_88 = local_98;
        if (iVar11 == 0) {
          lVar6 = (*pcVar13)(plVar16,&local_88,local_a8[0]);
          _Str1 = local_90;
          if (lVar6 == 0) {
            local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,0xc4);
            goto LAB_143d3c28b;
          }
        }
        else {
          lVar6 = d2i_PrivateKey(iVar11,plVar16,&local_88,local_a8[0]);
          _Str1 = local_90;
          if (lVar6 == 0) {
            local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,0xc0);
LAB_143d3c28b:
            ERR_put_error(9,0x74,0xd,"crypto\\pem\\pem_info.c");
            goto LAB_143d3c2ad;
          }
        }
LAB_143d3c1c1:
        CRYPTO_free(_Str1,"crypto\\pem\\pem_info.c",0xd1);
        local_90 = (char *)0x0;
        CRYPTO_free(local_a0,"crypto\\pem\\pem_info.c",0xd3);
        local_a0 = 0;
        CRYPTO_free(local_98,"crypto\\pem\\pem_info.c",0xd5);
        local_b8 = local_a8;
        local_98 = 0;
        iVar2 = PEM_read_bio(local_70,&local_90,&local_a0,&local_98);
      }
      uVar8 = ERR_peek_last_error();
      plVar15 = plVar14;
      if (((uVar8 & 0xfff) == 0x6c) &&
         (((((ERR_clear_error(), *plVar4 == 0 && (plVar4[1] == 0)) && (plVar4[2] == 0)) &&
           (plVar9 = plVar4, plVar4[7] == 0)) ||
          (iVar2 = OPENSSL_sk_push(uVar3,plVar4), plVar9 = (longlong *)0x0, iVar2 != 0)))) {
        plVar4 = plVar9;
        plVar15 = (longlong *)0x1;
      }
    }
  }
LAB_143d3c2ad:
  uVar12 = 0;
  X509_INFO_free(plVar4);
  uVar10 = uVar3;
  if ((int)plVar15 == 0) {
    iVar2 = OPENSSL_sk_num(uVar3);
    uVar10 = uVar12;
    if (0 < iVar2) {
      do {
        uVar7 = OPENSSL_sk_value(uVar3,uVar10);
        X509_INFO_free(uVar7);
        uVar8 = (int)uVar10 + 1;
        iVar2 = OPENSSL_sk_num(uVar3);
        uVar10 = (ulonglong)uVar8;
      } while ((int)uVar8 < iVar2);
    }
    uVar10 = uVar12;
    if (uVar3 != param_2) {
      OPENSSL_sk_free(uVar3);
    }
  }
  CRYPTO_free(local_90,"crypto\\pem\\pem_info.c",0xf0);
  CRYPTO_free(local_a0,"crypto\\pem\\pem_info.c",0xf1);
  CRYPTO_free(local_98,"crypto\\pem\\pem_info.c",0xf2);
  return uVar10;
}



// FUNCTION 143d3c370 ASN1_STRING_to_UTF8 body=138 status=ok
// SIG undefined ASN1_STRING_to_UTF8(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ASN1_STRING_to_UTF8(undefined8 *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  uint *local_res10 [3];
  uint local_28 [2];
  undefined8 local_20;
  undefined4 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143d3c37c;
  local_res10[0] = local_28;
  if (((param_2 == (undefined4 *)0x0) || (0x1e < (uint)param_2[1])) ||
     ((int)(char)(&DAT_145d83268)[(int)param_2[1]] == 0xffffffff)) {
    uVar1 = 0xffffffff;
  }
  else {
    local_20 = 0;
    local_28[0] = 0;
    local_18 = 0;
    uVar1 = ASN1_mbstring_copy(local_res10,*(undefined8 *)(param_2 + 2),*param_2,
                               (int)(char)(&DAT_145d83268)[(int)param_2[1]] | 0x1000,0x2000);
    if (-1 < (int)uVar1) {
      *param_1 = local_20;
      return (ulonglong)local_28[0];
    }
  }
  return uVar1;
}



// FUNCTION 143d3c400 X509_NAME_print_ex body=58 status=ok
// SIG undefined X509_NAME_print_ex(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_NAME_print_ex(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  if (param_4 == 0) {
    X509_NAME_print();
    return;
  }
  do_name_ex(send_bio_chars,param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 143d3c440 do_buf body=668 status=ok
// SIG undefined do_buf(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int do_buf(byte *param_1,uint param_2,uint param_3,ushort param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  ushort uVar7;
  ulonglong uVar8;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  uint local_78;
  ushort local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  byte *local_60;
  byte *local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  iVar6 = 0;
  uVar8 = (ulonglong)(int)param_2;
  local_60 = param_1 + uVar8;
  local_68 = param_3 & 7;
  local_74 = param_4;
  local_70 = param_2;
  local_6c = param_3;
  local_58 = param_1;
  if (local_68 == 2) {
    if ((param_2 & 1) != 0) {
      local_88 = CONCAT44(local_88._4_4_,0xa1);
      ERR_put_error(0xd,0x8e,0x81,"crypto\\asn1\\a_strex.c");
      return -1;
    }
  }
  else if ((local_68 == 4) && ((param_2 & 3) != 0)) {
    local_88 = CONCAT44(local_88._4_4_,0x9b);
    ERR_put_error(0xd,0x8e,0x85,"crypto\\asn1\\a_strex.c");
    return -1;
  }
  if (param_1 != local_60) {
    do {
      uVar2 = local_74 & 1;
      if ((param_1 == local_58) && ((local_74 & 1) != 0)) {
        uVar7 = 0x20;
      }
      else {
        uVar7 = 0;
      }
      if (local_68 == 0) {
        iVar3 = UTF8_getc(param_1,uVar8 & 0xffffffff,&local_78);
        if (iVar3 < 0) {
          return -1;
        }
        local_70 = (int)uVar8 - iVar3;
        uVar8 = (ulonglong)local_70;
        param_1 = param_1 + iVar3;
      }
      else if (local_68 == 1) {
        bVar1 = *param_1;
        param_1 = param_1 + 1;
        local_78 = (uint)bVar1;
      }
      else if (local_68 == 2) {
        local_78 = (uint)CONCAT11(*param_1,param_1[1]);
        param_1 = param_1 + 2;
      }
      else {
        if (local_68 != 4) {
          return -1;
        }
        local_78 = (uint)param_1[3] |
                   (uint)param_1[2] << 8 | (uint)param_1[1] << 0x10 | (uint)*param_1 << 0x18;
        param_1 = param_1 + 4;
      }
      if ((param_1 == local_60) && (uVar2 != 0)) {
        uVar7 = 0x40;
      }
      if ((local_6c & 8) == 0) {
        local_88 = param_7;
        iVar3 = do_esc_char(local_78,uVar7 | local_74,param_5,param_6);
        if (iVar3 < 0) {
          return -1;
        }
        iVar6 = iVar6 + iVar3;
      }
      else {
        lVar5 = 0;
        iVar3 = UTF8_putc(local_50,6,local_78);
        if (0 < iVar3) {
          uVar7 = uVar7 | local_74;
          do {
            local_88 = param_7;
            iVar4 = do_esc_char(local_50[lVar5],uVar7,param_5,param_6);
            if (iVar4 < 0) {
              return -1;
            }
            iVar6 = iVar6 + iVar4;
            lVar5 = lVar5 + 1;
          } while (lVar5 < iVar3);
        }
        uVar8 = (ulonglong)local_70;
      }
    } while (param_1 != local_60);
  }
  return iVar6;
}



// FUNCTION 143d3c6e0 do_esc_char body=456 status=ok
// SIG undefined do_esc_char(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
do_esc_char(uint param_1,ushort param_2,undefined1 *param_3,code *param_4,undefined8 param_5)

{
  ushort uVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  byte local_28 [8];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  if (param_1 < 0x10000) {
    if (param_1 < 0x100) {
      local_28[0] = (byte)param_1;
      if (local_28[0] < 0x80) {
        uVar1 = *(ushort *)(&DAT_145d83150 + (ulonglong)(param_1 & 0xff) * 2);
      }
      else {
        uVar1 = 4;
      }
      uVar1 = uVar1 & param_2;
      if ((uVar1 & 0x61) == 0) {
        if ((uVar1 & 0x406) != 0) {
          BIO_snprintf(local_20,0xb,"\\%02X",param_1 & 0xff);
          iVar2 = (*param_4)(param_5,local_20,3);
          if (iVar2 == 0) {
            return 0xffffffff;
          }
          return 3;
        }
        if ((local_28[0] == 0x5c) && ((param_2 & 0x40f) != 0)) {
          iVar2 = (*param_4)(param_5,&DAT_145d832a4,2);
          if (iVar2 == 0) {
            return 0xffffffff;
          }
          return 2;
        }
      }
      else {
        if ((uVar1 & 8) == 0) {
          iVar2 = (*param_4)(param_5,&DAT_145d83298,1);
          if (iVar2 == 0) {
            return 0xffffffff;
          }
          iVar2 = (*param_4)(param_5,local_28,1);
          if (iVar2 != 0) {
            return 2;
          }
          return 0xffffffff;
        }
        if (param_3 != (undefined1 *)0x0) {
          *param_3 = 1;
        }
      }
      iVar2 = (*param_4)(param_5,local_28,1);
      if (iVar2 != 0) {
        return 1;
      }
    }
    else {
      BIO_snprintf(local_20,0xb,"\\U%04lX",param_1);
      iVar2 = (*param_4)(param_5,local_20,6);
      if (iVar2 != 0) {
        return 6;
      }
    }
  }
  else {
    BIO_snprintf(local_20,0xb,"\\W%08lX",param_1);
    iVar2 = (*param_4)(param_5,local_20,10);
    if (iVar2 != 0) {
      return 10;
    }
  }
  return 0xffffffff;
}



// FUNCTION 143d3c8b0 do_hex_dump body=174 status=ok
// SIG undefined do_hex_dump(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int do_hex_dump(code *param_1,longlong param_2,byte *param_3,int param_4)

{
  byte *pbVar1;
  int iVar2;
  char local_res10;
  char local_res11;
  
  if (param_2 != 0) {
    pbVar1 = param_3 + param_4;
    for (; param_3 != pbVar1; param_3 = param_3 + 1) {
      local_res10 = "0123456789ABCDEF"[*param_3 >> 4];
      local_res11 = "0123456789ABCDEF"[*param_3 & 0xf];
      iVar2 = (*param_1)(param_2,&local_res10,2);
      if (iVar2 == 0) {
        return -1;
      }
    }
  }
  return param_4 * 2;
}



// FUNCTION 143d3c960 do_indent body=106 status=ok
// SIG undefined do_indent(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 do_indent(code *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_3) {
    do {
      iVar1 = (*param_1)(param_2,&DAT_145cc13b4,1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
  }
  return 1;
}



// FUNCTION 143d3c9d0 do_name_ex body=908 status=ok
// SIG undefined do_name_ex(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int do_name_ex(code *param_1,undefined8 param_2,undefined8 param_3,int param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  undefined *puVar12;
  undefined1 auStack_108 [32];
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  uint local_c0;
  int local_bc;
  int local_b8;
  uint local_b4;
  undefined *local_b0;
  undefined8 local_a8;
  undefined1 local_98 [80];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143d3c9ea;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_e0 = -1;
  iVar10 = 0;
  if (-1 < param_4) {
    iVar10 = param_4;
  }
  local_c8 = param_3;
  iVar1 = do_indent(param_1,param_2,iVar10);
  if (iVar1 == 0) {
    return -1;
  }
  uVar2 = param_5 & 0xf0000;
  local_bc = 3;
  if (uVar2 == 0x10000) {
    local_e4 = 1;
    local_d0 = &DAT_145cc0f84;
    puVar12 = &DAT_145d832c8;
    iVar1 = 1;
    local_e8 = 0;
LAB_143d3cadc:
    iVar11 = 1;
  }
  else {
    param_3 = local_c8;
    iVar1 = local_bc;
    if (uVar2 == 0x20000) {
      local_d0 = &DAT_145cbbc74;
    }
    else {
      if (uVar2 != 0x30000) {
        if (uVar2 != 0x40000) {
          return -1;
        }
        local_e4 = 3;
        local_d0 = &DAT_143fc48d8;
        puVar12 = &DAT_145d832c4;
        local_e8 = iVar10;
        goto LAB_143d3cadc;
      }
      local_d0 = &DAT_145cc3190;
    }
    puVar12 = &DAT_145d832c4;
    local_e8 = 0;
    iVar11 = 2;
    local_e4 = 3;
  }
  if ((param_5 & 0x800000) == 0) {
    local_bc = 1;
  }
  local_b0 = &DAT_145cc1084;
  if ((param_5 & 0x800000) == 0) {
    local_b0 = &DAT_145d832cc;
  }
  local_c0 = param_5 & 0x600000;
  local_b8 = X509_NAME_entry_count(param_3);
  local_dc = 0;
  if (0 < local_b8) {
    local_b4 = param_5 & 0x100000;
    local_d8 = local_b8;
    do {
      local_d8 = local_d8 + -1;
      iVar4 = local_d8;
      if (local_b4 == 0) {
        iVar4 = local_dc;
      }
      uVar5 = X509_NAME_get_entry(param_3,iVar4);
      iVar4 = local_e0;
      if (local_e0 != -1) {
        iVar3 = TResourceArray<unsigned_char,0>::GetResourceDataSize(uVar5);
        if (iVar4 == iVar3) {
          iVar4 = (*param_1)(param_2,puVar12,iVar1);
          if (iVar4 == 0) {
            return -1;
          }
          iVar10 = iVar10 + iVar1;
        }
        else {
          iVar4 = (*param_1)(param_2,local_d0,iVar11);
          iVar1 = local_e8;
          if (iVar4 == 0) {
            return -1;
          }
          iVar4 = do_indent(param_1,param_2,local_e8);
          if (iVar4 == 0) {
            return -1;
          }
          iVar10 = iVar10 + iVar11 + iVar1;
        }
      }
      local_e0 = TResourceArray<unsigned_char,0>::GetResourceDataSize(uVar5);
      uVar6 = EVP_MD_CTX_md(uVar5);
      uVar5 = X509_NAME_ENTRY_get_data(uVar5);
      local_a8 = uVar5;
      iVar1 = OBJ_obj2nid(uVar6);
      if (local_c0 != 0x600000) {
        if ((local_c0 == 0x400000) || (iVar1 == 0)) {
          OBJ_obj2txt(local_98,0x50,uVar6);
          puVar7 = local_98;
LAB_143d3cc58:
          iVar4 = 0;
        }
        else if (local_c0 == 0) {
          iVar4 = 10;
          puVar7 = (undefined1 *)OBJ_nid2sn(iVar1);
        }
        else {
          if (local_c0 != 0x200000) {
            puVar7 = &DAT_143f3f584;
            goto LAB_143d3cc58;
          }
          iVar4 = 0x19;
          puVar7 = (undefined1 *)OBJ_nid2ln(iVar1);
        }
        uVar9 = 0xffffffffffffffff;
        do {
          uVar9 = uVar9 + 1;
        } while (puVar7[uVar9] != '\0');
        iVar8 = (int)uVar9;
        iVar3 = (*param_1)(param_2,puVar7,uVar9 & 0xffffffff);
        if (iVar3 == 0) {
          return -1;
        }
        if ((iVar8 < iVar4) && ((param_5 & 0x2000000) != 0)) {
          iVar3 = do_indent(param_1,param_2,iVar4 - iVar8);
          if (iVar3 == 0) {
            return -1;
          }
          iVar10 = iVar10 + (iVar4 - iVar8);
        }
        iVar4 = local_bc;
        iVar3 = (*param_1)(param_2,local_b0,local_bc);
        if (iVar3 == 0) {
          return -1;
        }
        iVar10 = iVar10 + iVar4 + iVar8;
        uVar5 = local_a8;
      }
      if ((iVar1 == 0) && ((param_5 >> 0x18 & 1) != 0)) {
        uVar2 = 0x80;
      }
      else {
        uVar2 = 0;
      }
      iVar1 = do_print_ex(param_1,param_2,uVar2 | param_5,uVar5);
      if (iVar1 < 0) {
        return -1;
      }
      iVar10 = iVar10 + iVar1;
      local_dc = local_dc + 1;
      param_3 = local_c8;
      iVar1 = local_e4;
    } while (local_dc < local_b8);
  }
  return iVar10;
}



// FUNCTION 143d3cd60 do_print_ex body=676 status=ok
// SIG undefined do_print_ex(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int do_print_ex(code *param_1,longlong param_2,uint param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ushort uVar7;
  char local_res18 [8];
  longlong local_res20;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar8;
  undefined4 local_38 [2];
  undefined4 *local_30;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  local_30 = (undefined4 *)0x143d3cd7c;
  iVar3 = param_4[1];
  local_res18[0] = '\0';
  uVar7 = (ushort)param_3 & 0x40f;
  iVar2 = 0;
  if ((param_3 & 0x40) != 0) {
    lVar4 = ASN1_tag2str(iVar3);
    uVar5 = 0xffffffffffffffff;
    do {
      uVar5 = uVar5 + 1;
    } while (*(char *)(lVar4 + uVar5) != '\0');
    iVar2 = (*param_1)(param_2,lVar4,uVar5 & 0xffffffff);
    if (iVar2 == 0) {
      return -1;
    }
    iVar2 = (*param_1)(param_2,&DAT_145cc3708,1);
    if (iVar2 == 0) {
      return -1;
    }
    iVar2 = (int)uVar5 + 1;
  }
  if ((char)param_3 < '\0') {
LAB_143d3cf06:
    iVar3 = (*param_1)(param_2,&DAT_145d832c0,1);
    if (iVar3 == 0) {
      return -1;
    }
    if ((param_3 >> 9 & 1) == 0) {
      iVar3 = do_hex_dump(param_1,param_2,*(undefined8 *)(param_4 + 2),*param_4);
    }
    else {
      local_38[0] = param_4[1];
      local_30 = param_4;
      iVar3 = i2d_ASN1_TYPE(local_38,0);
      lVar4 = CRYPTO_malloc((longlong)iVar3,"crypto\\asn1\\a_strex.c",0x11b);
      if (lVar4 == 0) {
        ERR_put_error(0xd,0x7d,0x41,"crypto\\asn1\\a_strex.c",CONCAT44(uVar8,0x11c));
        return -1;
      }
      local_res20 = lVar4;
      i2d_ASN1_TYPE(local_38,&local_res20);
      iVar3 = do_hex_dump(param_1,param_2,lVar4,iVar3);
      CRYPTO_free(lVar4,"crypto\\asn1\\a_strex.c",0x122);
    }
    if (iVar3 < 0) {
      return -1;
    }
    if (iVar3 + 1 < 0) {
      return -1;
    }
    return iVar3 + 1 + iVar2;
  }
  if ((param_3 & 0x20) == 0) {
    if ((iVar3 - 1U < 0x1e) && (uVar6 = (uint)(char)(&DAT_145d83268)[iVar3], uVar6 != 0xffffffff))
    goto LAB_143d3ce30;
    if ((param_3 >> 8 & 1) != 0) goto LAB_143d3cf06;
  }
  uVar6 = 1;
LAB_143d3ce30:
  if ((param_3 & 0x10) != 0) {
    if (uVar6 == 0) {
      uVar6 = 1;
    }
    else {
      uVar6 = uVar6 | 8;
    }
  }
  iVar3 = do_buf(*(undefined8 *)(param_4 + 2),*param_4,uVar6,uVar7,local_res18,param_1,0);
  cVar1 = local_res18[0];
  if (-1 < iVar3) {
    iVar2 = iVar2 + iVar3;
    if (local_res18[0] != '\0') {
      iVar2 = iVar2 + 2;
    }
    if (param_2 == 0) {
      return iVar2;
    }
    if (((local_res18[0] == '\0') || (iVar3 = (*param_1)(param_2,&DAT_145cc1014,1), iVar3 != 0)) &&
       (iVar3 = do_buf(*(undefined8 *)(param_4 + 2),*param_4,uVar6,uVar7,0,param_1,param_2),
       -1 < iVar3)) {
      if (cVar1 == '\0') {
        return iVar2;
      }
      iVar3 = (*param_1)(param_2,&DAT_145cc1014,1);
      if (iVar3 != 0) {
        return iVar2;
      }
    }
  }
  return -1;
}



// FUNCTION 143d3d010 send_bio_chars body=51 status=ok
// SIG undefined send_bio_chars(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 send_bio_chars(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = BIO_write();
    if (iVar1 != param_3) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 143d3d050 X509V3_EXT_d2i body=165 status=ok
// SIG undefined X509V3_EXT_d2i(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509V3_EXT_d2i(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_res10 [3];
  
  uVar3 = EVP_MD_CTX_md();
  iVar1 = OBJ_obj2nid(uVar3);
  if (iVar1 != 0) {
    lVar4 = X509V3_EXT_get_nid(iVar1);
    if (lVar4 != 0) {
      uVar3 = X509_EXTENSION_get_data(param_1);
      local_res10[0] =
           TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
           ::GetBoundProgramCounterForTimerManager(uVar3);
      uVar2 = FRollingHash::GetWindowSize(uVar3);
      if (*(code **)(lVar4 + 8) != (code *)0x0) {
        uVar3 = (**(code **)(lVar4 + 8))();
        uVar3 = ASN1_item_d2i(0,local_res10,uVar2,uVar3);
        return uVar3;
      }
      uVar3 = (**(code **)(lVar4 + 0x20))(0,local_res10,uVar2);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 143d3d100 X509V3_EXT_get body=48 status=ok
// SIG undefined X509V3_EXT_get(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509V3_EXT_get(void)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = EVP_MD_CTX_md();
  iVar1 = OBJ_obj2nid(uVar2);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = X509V3_EXT_get_nid(iVar1);
  return uVar2;
}



// FUNCTION 143d3d130 X509V3_EXT_get_nid body=146 status=ok
// SIG undefined X509V3_EXT_get_nid(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509V3_EXT_get_nid(int param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int *local_res10 [3];
  int local_78 [28];
  undefined8 uStack_8;
  
  uStack_8 = 0x143d3d13a;
  local_res10[0] = local_78;
  if (-1 < param_1) {
    local_78[0] = param_1;
    puVar2 = (undefined8 *)OBJ_bsearch_(local_res10,&PTR_DAT_146837860,0x2f,8,&LAB_143cae300);
    if (puVar2 != (undefined8 *)0x0) {
      return *puVar2;
    }
    if (DAT_146bcb940 != 0) {
      uVar1 = OPENSSL_sk_find(DAT_146bcb940,local_78);
      uVar3 = OPENSSL_sk_value(DAT_146bcb940,uVar1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 143d3d1d0 X509V3_get_d2i body=421 status=ok
// SIG undefined X509V3_get_d2i(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509V3_get_d2i(longlong param_1,int param_2,undefined4 *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined8 local_res8;
  
  uVar8 = 0;
  uVar1 = 0;
  if (param_1 == 0) {
    if (param_4 != (int *)0x0) {
      *param_4 = -1;
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0xffffffff;
    }
  }
  else {
    if (param_4 != (int *)0x0) {
      uVar1 = *param_4 + 1;
    }
    uVar7 = uVar8;
    if (-1 < (int)uVar1) {
      uVar7 = (ulonglong)uVar1;
    }
    iVar2 = OPENSSL_sk_num();
    if ((int)uVar7 < iVar2) {
      do {
        uVar4 = OPENSSL_sk_value(param_1,uVar7);
        uVar5 = EVP_MD_CTX_md(uVar4);
        iVar2 = OBJ_obj2nid(uVar5);
        if (iVar2 == param_2) {
          if (param_4 != (int *)0x0) {
            *param_4 = (int)uVar7;
            uVar8 = uVar4;
            break;
          }
          bVar9 = uVar8 != 0;
          uVar8 = uVar4;
          if (bVar9) {
            if (param_3 == (undefined4 *)0x0) {
              return 0;
            }
            *param_3 = 0xfffffffe;
            return 0;
          }
        }
        uVar1 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar1;
        iVar2 = OPENSSL_sk_num(param_1);
      } while ((int)uVar1 < iVar2);
      if (uVar8 != 0) {
        if (param_3 != (undefined4 *)0x0) {
          uVar3 = X509_EXTENSION_get_critical(uVar8);
          *param_3 = uVar3;
        }
        uVar5 = EVP_MD_CTX_md(uVar8);
        iVar2 = OBJ_obj2nid(uVar5);
        if (iVar2 == 0) {
          return 0;
        }
        lVar6 = X509V3_EXT_get_nid(iVar2);
        if (lVar6 == 0) {
          return 0;
        }
        uVar5 = X509_EXTENSION_get_data(uVar8);
        local_res8 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
                     ::GetBoundProgramCounterForTimerManager(uVar5);
        uVar3 = FRollingHash::GetWindowSize(uVar5);
        if (*(code **)(lVar6 + 8) != (code *)0x0) {
          uVar5 = (**(code **)(lVar6 + 8))();
          uVar5 = ASN1_item_d2i(0,&local_res8,uVar3,uVar5);
          return uVar5;
        }
        uVar5 = (**(code **)(lVar6 + 0x20))(0,&local_res8,uVar3);
        return uVar5;
      }
    }
    if (param_4 != (int *)0x0) {
      *param_4 = -1;
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0xffffffff;
    }
  }
  return 0;
}



// FUNCTION 143d3d380 async_fibre_init_dispatcher body=78 status=ok
// SIG undefined async_fibre_init_dispatcher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 async_fibre_init_dispatcher(undefined8 *param_1)

{
  void *pvVar1;
  LPVOID pvVar2;
  
  pvVar2 = ConvertThreadToFiber((LPVOID)0x0);
  *param_1 = pvVar2;
  if (pvVar2 == (LPVOID)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    pvVar1 = FiberData;
    *param_1 = FiberData;
    if (pvVar1 == (void *)0x0) {
      return 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 1) = 1;
  }
  return 1;
}



// FUNCTION 143d3d3d0 async_local_cleanup body=59 status=ok
// SIG undefined async_local_cleanup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void async_local_cleanup(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)async_get_ctx();
  if (((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) && ((int)plVar1[1] != 0)) {
    ConvertFiberToThread();
    *plVar1 = 0;
  }
  return;
}



// FUNCTION 143d3d410 FUN_143d3d410 body=22 status=ok
// SIG undefined FUN_143d3d410(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d3d410(void)

{
  async_start_func();
  return;
}



// FUNCTION 143d3d430 SCT_CTX_free body=149 status=ok
// SIG undefined SCT_CTX_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SCT_CTX_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    EVP_PKEY_free(*param_1);
    CRYPTO_free(param_1[1],"crypto\\ct\\ct_sct_ctx.c",0x26);
    CRYPTO_free(param_1[3],"crypto\\ct\\ct_sct_ctx.c",0x27);
    CRYPTO_free(param_1[5],"crypto\\ct\\ct_sct_ctx.c",0x28);
    CRYPTO_free(param_1[7],"crypto\\ct\\ct_sct_ctx.c",0x29);
    CRYPTO_free(param_1,"crypto\\ct\\ct_sct_ctx.c",0x2a);
  }
  return;
}



// FUNCTION 143d3d4d0 SCT_CTX_new body=81 status=ok
// SIG undefined SCT_CTX_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong SCT_CTX_new(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143d3d4dc;
  lVar1 = CRYPTO_zalloc(0x50,"crypto\\ct\\ct_sct_ctx.c",0x19);
  if (lVar1 == 0) {
    ERR_put_error(0x32,0x7e,0x41,"crypto\\ct\\ct_sct_ctx.c",0x1c,uVar2);
  }
  return lVar1;
}



// FUNCTION 143d3d530 SCT_CTX_set1_cert body=754 status=ok
// SIG undefined SCT_CTX_set1_cert(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SCT_CTX_set1_cert(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 local_res20;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x143d3d54d;
  local_res20 = 0;
  local_38 = 0;
  iVar7 = 0;
  lVar11 = 0;
  iVar6 = 0;
  iVar1 = X509_get_ext_d2i(param_2,0x3b8,0xffffffff);
  if (iVar1 < 0) {
LAB_143d3d599:
    iVar3 = iVar7;
  }
  else {
    iVar2 = X509_get_ext_d2i(param_2,0x3b8,iVar1);
    iVar3 = 1;
    if (iVar2 < 0) goto LAB_143d3d599;
  }
  lVar8 = 0;
  if ((iVar3 != 0) ||
     ((iVar3 = iVar6, lVar8 = lVar11, iVar1 == -1 &&
      ((param_3 != 0 || (iVar3 = i2d_X509(param_2,&local_res20), iVar3 < 0)))))) goto LAB_143d3d7cd;
  iVar2 = X509_get_ext_d2i(param_2,0x3b7,0xffffffff);
  if (iVar2 < 0) {
LAB_143d3d601:
    iVar5 = iVar6;
  }
  else {
    iVar4 = X509_get_ext_d2i(param_2,0x3b7,iVar2);
    iVar5 = 1;
    if (iVar4 < 0) goto LAB_143d3d601;
  }
  if ((iVar5 != 0) || ((-1 < iVar2 && (-1 < iVar1)))) goto LAB_143d3d7cd;
  if (iVar2 == -1) {
    iVar2 = iVar1;
  }
  lVar8 = 0;
  if (iVar2 < 0) goto LAB_143d3d772;
  lVar8 = X509_dup(param_2);
  if (lVar8 == 0) goto LAB_143d3d7cd;
  uVar9 = X509_get_ext_d2i(lVar8,iVar2);
  FUN_143cfb600(uVar9);
  if (param_3 != 0) {
    iVar1 = X509_get_ext_d2i(param_3,0x5a,0xffffffff);
    if (iVar1 < 0) {
LAB_143d3d687:
      iVar2 = iVar6;
    }
    else {
      iVar5 = X509_get_ext_d2i(param_3,0x5a,iVar1);
      iVar2 = 1;
      if (iVar5 < 0) goto LAB_143d3d687;
    }
    iVar6 = X509_get_ext_d2i(lVar8,0x5a,0xffffffff);
    if ((-1 < iVar6) && (iVar5 = X509_get_ext_d2i(lVar8,0x5a,iVar6), -1 < iVar5)) {
      iVar7 = 1;
    }
    if (((((iVar1 < -1) || (iVar6 < -1)) || (iVar2 != 0)) || (iVar7 != 0)) ||
       (((-1 < iVar1 && (iVar6 == -1)) || ((iVar1 == -1 && (-1 < iVar6)))))) goto LAB_143d3d7cd;
    uVar9 = FVoicePacketImpl::GetSampleCounter(param_3);
    iVar7 = X509_set_issuer_name(lVar8,uVar9);
    if (iVar7 == 0) goto LAB_143d3d7cd;
    if (iVar1 != -1) {
      lVar11 = X509_get_ext_d2i(param_3,iVar1);
      lVar10 = X509_get_ext_d2i(lVar8,iVar6);
      if (((lVar11 == 0) || (lVar10 == 0)) ||
         ((lVar11 = X509_EXTENSION_get_data(lVar11), lVar11 == 0 ||
          (iVar1 = X509_EXTENSION_set_data(lVar10,lVar11), iVar1 == 0)))) goto LAB_143d3d7cd;
    }
  }
  iVar7 = i2d_re_X509_tbs(lVar8,&local_38);
  if (0 < iVar7) {
LAB_143d3d772:
    X509_free(lVar8);
    CRYPTO_free(*(undefined8 *)(param_1 + 0x28),"crypto\\ct\\ct_sct_ctx.c",0xb2);
    *(undefined8 *)(param_1 + 0x28) = local_res20;
    *(longlong *)(param_1 + 0x30) = (longlong)iVar3;
    CRYPTO_free(*(undefined8 *)(param_1 + 0x38),"crypto\\ct\\ct_sct_ctx.c",0xb6);
    *(undefined8 *)(param_1 + 0x38) = local_38;
    *(longlong *)(param_1 + 0x40) = (longlong)iVar7;
    return 1;
  }
LAB_143d3d7cd:
  CRYPTO_free(local_res20,"crypto\\ct\\ct_sct_ctx.c",0xbc);
  CRYPTO_free(local_38,"crypto\\ct\\ct_sct_ctx.c",0xbd);
  X509_free(lVar8);
  return 0;
}



// FUNCTION 143d3d830 SCT_CTX_set1_issuer_pubkey body=36 status=ok
// SIG undefined SCT_CTX_set1_issuer_pubkey(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SCT_CTX_set1_issuer_pubkey(longlong param_1,undefined8 param_2)

{
  ct_public_key_hash(param_2,param_1 + 0x18,param_1 + 0x20);
  return;
}



// FUNCTION 143d3d860 SCT_CTX_set1_pubkey body=124 status=ok
// SIG undefined SCT_CTX_set1_pubkey(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SCT_CTX_set1_pubkey(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = X509_PUBKEY_get(param_2);
  if (lVar2 != 0) {
    iVar1 = ct_public_key_hash(param_2,param_1 + 1,param_1 + 2);
    if (iVar1 != 0) {
      EVP_PKEY_free(*param_1);
      *param_1 = lVar2;
      return 1;
    }
    EVP_PKEY_free(lVar2);
  }
  return 0;
}



// FUNCTION 143d3d8e0 SCT_CTX_set_time body=5 status=ok
// SIG undefined SCT_CTX_set_time(void)

void SCT_CTX_set_time(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x48) = param_2;
  return;
}



// FUNCTION 143d3d8f0 ct_public_key_hash body=257 status=ok
// SIG undefined ct_public_key_hash(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ct_public_key_hash(undefined8 param_1,longlong *param_2,ulonglong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res10 [8];
  undefined8 local_res20;
  
  lVar2 = *param_2;
  lVar4 = 0;
  local_res20 = 0;
  lVar5 = lVar4;
  if ((lVar2 == 0) || (*param_3 < 0x20)) {
    lVar2 = CRYPTO_malloc(0x20,"crypto\\ct\\ct_sct_ctx.c",0xce);
    if (lVar2 == 0) goto LAB_143d3d9b0;
  }
  iVar1 = i2d_X509_PUBKEY(param_1,&local_res20);
  if (0 < iVar1) {
    uVar3 = EVP_sha256();
    iVar1 = EVP_Digest(local_res20,(longlong)iVar1,lVar2,local_res10,uVar3,0);
    if (iVar1 != 0) {
      if (lVar2 != *param_2) {
        CRYPTO_free(*param_2,"crypto\\ct\\ct_sct_ctx.c",0xdc);
        *param_2 = lVar2;
        *param_3 = 0x20;
      }
      lVar5 = 1;
      lVar2 = lVar4;
    }
  }
LAB_143d3d9b0:
  CRYPTO_free(lVar2,"crypto\\ct\\ct_sct_ctx.c",0xe4);
  CRYPTO_free(local_res20,"crypto\\ct\\ct_sct_ctx.c",0xe5);
  return lVar5;
}



// FUNCTION 143d3da00 SCT_CTX_verify body=746 status=ok
// SIG undefined SCT_CTX_verify(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int SCT_CTX_verify(longlong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x143d3da0f;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  iVar3 = 0;
  iVar8 = 0;
  iVar1 = SCT_is_complete(param_2);
  if ((((iVar1 == 0) || (*param_1 == 0)) || (param_2[0x16] == -1)) ||
     ((param_2[0x16] == 1 && (param_1[3] == 0)))) {
    local_48 = CONCAT44(local_48._4_4_,0x68);
    uVar7 = 0x6a;
  }
  else if (*param_2 == 0) {
    if ((*(size_t *)(param_2 + 8) == param_1[2]) &&
       (iVar1 = _guard_xfg_dispatch_icall_nop(*(void **)(param_2 + 6),(void *)param_1[1],param_1[2])
       , iVar1 == 0)) {
      if (*(ulonglong *)(param_2 + 10) <= (ulonglong)param_1[9]) {
        lVar4 = EVP_MD_CTX_new();
        iVar1 = iVar3;
        if (lVar4 != 0) {
          uVar7 = EVP_sha256();
          local_48 = *param_1;
          iVar2 = EVP_DigestVerifyInit(lVar4,0,uVar7,0);
          if (((iVar2 != 0) && (iVar2 = param_2[0x16], iVar2 != -1)) &&
             ((iVar1 = iVar8, iVar2 != 1 || (param_1[3] != 0)))) {
            local_38 = (undefined1)*param_2;
            local_36 = *(undefined1 *)((longlong)param_2 + 0x2f);
            local_35 = *(undefined1 *)((longlong)param_2 + 0x2e);
            local_34 = *(undefined1 *)((longlong)param_2 + 0x2d);
            local_33 = (undefined1)param_2[0xb];
            local_32 = *(undefined1 *)((longlong)param_2 + 0x2b);
            local_31 = *(undefined1 *)((longlong)param_2 + 0x2a);
            local_30 = *(undefined1 *)((longlong)param_2 + 0x29);
            local_2f = (undefined1)param_2[10];
            local_2d = (undefined1)iVar2;
            local_2e = (undefined1)((uint)iVar2 >> 8);
            local_37 = 0;
            iVar2 = EVP_DigestUpdate(lVar4,&local_38,0xc);
            if (iVar2 != 0) {
              if (param_2[0x16] == 0) {
                lVar5 = param_1[5];
                lVar6 = param_1[6];
              }
              else {
                iVar2 = EVP_DigestUpdate(lVar4,param_1[3],param_1[4]);
                if (iVar2 == 0) goto LAB_143d3dc8b;
                lVar5 = param_1[7];
                lVar6 = param_1[8];
              }
              iVar1 = iVar3;
              if (lVar5 != 0) {
                local_36 = (undefined1)lVar6;
                local_38 = (undefined1)((ulonglong)lVar6 >> 0x10);
                local_37 = (undefined1)((ulonglong)lVar6 >> 8);
                iVar2 = EVP_DigestUpdate(lVar4,&local_38,3);
                if ((iVar2 != 0) && (iVar2 = EVP_DigestUpdate(lVar4,lVar5,lVar6), iVar2 != 0)) {
                  local_38 = *(undefined1 *)((longlong)param_2 + 0x39);
                  local_37 = (undefined1)param_2[0xe];
                  iVar3 = EVP_DigestUpdate(lVar4,&local_38,2);
                  iVar1 = iVar8;
                  if ((iVar3 != 0) &&
                     (((*(longlong *)(param_2 + 0xe) == 0 ||
                       (iVar3 = EVP_DigestUpdate(lVar4,*(undefined8 *)(param_2 + 0xc)), iVar3 != 0))
                      && (iVar1 = EVP_DigestVerifyFinal
                                            (lVar4,*(undefined8 *)(param_2 + 0x12),
                                             *(undefined8 *)(param_2 + 0x14)), iVar1 == 0)))) {
                    local_48 = CONCAT44(local_48._4_4_,0x87);
                    ERR_put_error(0x32,0x80,0x6b,"crypto\\ct\\ct_vfy.c");
                  }
                }
              }
            }
          }
        }
LAB_143d3dc8b:
        EVP_MD_CTX_free(lVar4);
        return iVar1;
      }
      local_48 = CONCAT44(local_48._4_4_,0x75);
      uVar7 = 0x74;
    }
    else {
      local_48 = CONCAT44(local_48._4_4_,0x71);
      uVar7 = 0x72;
    }
  }
  else {
    local_48 = CONCAT44(local_48._4_4_,0x6c);
    uVar7 = 0x73;
  }
  ERR_put_error(0x32,0x80,uVar7,"crypto\\ct\\ct_vfy.c");
  return 0;
}


