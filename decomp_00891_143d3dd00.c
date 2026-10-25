// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143d3dd00 FUN_143d3dd00 body=29 status=ok
// SIG undefined FUN_143d3dd00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d3dd00(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_145d833b0);
  return;
}



// FUNCTION 143d3dd30 FUN_143d3dd30 body=29 status=ok
// SIG undefined FUN_143d3dd30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d3dd30(void)

{
  ASN1_item_new(&DAT_145d833b0);
  return;
}



// FUNCTION 143d3dd60 i2v_BASIC_CONSTRAINTS body=73 status=ok
// SIG undefined i2v_BASIC_CONSTRAINTS(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 i2v_BASIC_CONSTRAINTS(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  X509V3_add_value_bool(&DAT_145d83554,*param_2,local_res18);
  X509V3_add_value_int("pathlen",*(undefined8 *)(param_2 + 2),local_res18);
  return local_res18[0];
}



// FUNCTION 143d3ddb0 v2i_BASIC_CONSTRAINTS body=406 status=ok
// SIG undefined v2i_BASIC_CONSTRAINTS(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong v2i_BASIC_CONSTRAINTS(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  lVar3 = ASN1_item_new(&DAT_145d83500);
  if (lVar3 == 0) {
    ERR_put_error(0x22,0x66,0x41,"crypto\\x509v3\\v3_bcons.c",0x3f);
    return 0;
  }
  iVar7 = 0;
  iVar2 = OPENSSL_sk_num(param_3);
  if (0 < iVar2) {
    do {
      puVar4 = (undefined8 *)OPENSSL_sk_value(param_3,iVar7);
      pcVar1 = (char *)puVar4[1];
      if (((*pcVar1 == 'C') && (pcVar1[1] == 'A')) && (pcVar1[2] == '\0')) {
        iVar2 = X509V3_get_value_bool(puVar4,lVar3);
      }
      else {
        lVar5 = 0;
        do {
          lVar6 = lVar5 + 1;
          if (pcVar1[lVar5] != "pathlen"[lVar5]) {
            ERR_put_error(0x22,0x66,0x6a,"crypto\\x509v3\\v3_bcons.c",0x4b);
            ERR_add_error_data(6,"section:",*puVar4,",name:",puVar4[1],",value:",puVar4[2]);
            goto LAB_143d3df30;
          }
          lVar5 = lVar6;
        } while (lVar6 != 8);
        iVar2 = X509V3_get_value_int(puVar4,lVar3 + 8);
      }
      if (iVar2 == 0) {
LAB_143d3df30:
        ASN1_item_free(lVar3,&DAT_145d83500);
        return 0;
      }
      iVar7 = iVar7 + 1;
      iVar2 = OPENSSL_sk_num(param_3);
    } while (iVar7 < iVar2);
  }
  return lVar3;
}



// FUNCTION 143d3df50 FUN_143d3df50 body=29 status=ok
// SIG undefined FUN_143d3df50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d3df50(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_145d83500);
  return;
}



// FUNCTION 143d3df70 rand_pool_acquire_entropy body=135 status=ok
// SIG undefined rand_pool_acquire_entropy(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void rand_pool_acquire_entropy(undefined8 param_1)

{
  NTSTATUS NVar1;
  longlong lVar2;
  PUCHAR pbBuffer;
  longlong lVar3;
  
  lVar2 = rand_pool_bytes_needed(param_1,1);
  pbBuffer = (PUCHAR)rand_pool_add_begin(param_1,lVar2);
  if (pbBuffer != (PUCHAR)0x0) {
    NVar1 = _guard_xfg_dispatch_icall_nop((BCRYPT_ALG_HANDLE)0x0,pbBuffer,(ULONG)lVar2,2);
    lVar3 = 0;
    if (NVar1 == 0) {
      lVar3 = lVar2;
    }
    rand_pool_add_end(param_1,lVar3,lVar3 * 8);
    lVar2 = rand_pool_entropy_available(param_1);
    if (lVar2 != 0) {
      return;
    }
  }
  rand_pool_entropy_available(param_1);
  return;
}



// FUNCTION 143d3e000 rand_pool_add_additional_data body=105 status=ok
// SIG undefined rand_pool_add_additional_data(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void rand_pool_add_additional_data(undefined8 param_1)

{
  DWORD DVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  LARGE_INTEGER local_20;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143d3e00c;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  local_28 = 0;
  local_20.QuadPart = 0;
  DVar1 = GetCurrentThreadId();
  local_28 = CONCAT44(local_28._4_4_,DVar1);
  QueryPerformanceCounter(&local_20);
  rand_pool_add(param_1,&local_28,0x10);
  return;
}



// FUNCTION 143d3e070 rand_pool_add_nonce_data body=115 status=ok
// SIG undefined rand_pool_add_nonce_data(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void rand_pool_add_nonce_data(undefined8 param_1)

{
  DWORD DVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  _FILETIME local_20;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143d3e07c;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  local_28 = 0;
  local_20.dwLowDateTime = 0;
  local_20.dwHighDateTime = 0;
  DVar1 = GetCurrentProcessId();
  local_28 = CONCAT44(local_28._4_4_,DVar1);
  DVar1 = GetCurrentThreadId();
  local_28 = CONCAT44(DVar1,(undefined4)local_28);
  GetSystemTimeAsFileTime(&local_20);
  rand_pool_add(param_1,&local_28,0x10);
  return;
}



// FUNCTION 143d3e0f0 ENGINE_get_default_RAND body=32 status=ok
// SIG undefined ENGINE_get_default_RAND(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ENGINE_get_default_RAND(void)

{
  engine_table_select(&DAT_146bcb948,1);
  return;
}



// FUNCTION 143d3e110 ENGINE_register_RAND body=80 status=ok
// SIG undefined ENGINE_register_RAND(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_register_RAND(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    uVar1 = engine_table_register
                      (&DAT_146bcb948,FUN_143d3e1c0,param_1,&DAT_145d83574,1,0,0x143d3e11a);
    return uVar1;
  }
  return 1;
}



// FUNCTION 143d3e160 ENGINE_set_RAND body=10 status=ok
// SIG undefined ENGINE_set_RAND(void)

undefined8 ENGINE_set_RAND(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return 1;
}



// FUNCTION 143d3e170 ENGINE_set_default_RAND body=80 status=ok
// SIG undefined ENGINE_set_default_RAND(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_set_default_RAND(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    uVar1 = engine_table_register
                      (&DAT_146bcb948,FUN_143d3e1c0,param_1,&DAT_145d83574,1,1,0x143d3e17a);
    return uVar1;
  }
  return 1;
}



// FUNCTION 143d3e1c0 FUN_143d3e1c0 body=29 status=ok
// SIG undefined FUN_143d3e1c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d3e1c0(void)

{
  engine_table_cleanup(&DAT_146bcb948);
  return;
}



// FUNCTION 143d3e200 i2v_AUTHORITY_INFO_ACCESS body=429 status=ok
// SIG undefined i2v_AUTHORITY_INFO_ACCESS(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong i2v_AUTHORITY_INFO_ACCESS(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  char local_98 [80];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143d3e21a;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  iVar8 = 0;
  iVar1 = OPENSSL_sk_num(param_2);
  lVar7 = param_3;
  lVar3 = param_3;
  if (0 < iVar1) {
    do {
      puVar2 = (undefined8 *)OPENSSL_sk_value(param_2,iVar8);
      lVar3 = FUN_143d78c60(param_1,puVar2[1],lVar7);
      if (lVar3 == 0) {
LAB_143d3e342:
        local_a8 = CONCAT44(local_a8._4_4_,0x5e);
        ERR_put_error(0x22,0x8a,0x41,"crypto\\x509v3\\v3_info.c");
        if ((param_3 == 0) && (lVar7 != 0)) {
          OPENSSL_sk_pop_free(lVar7,X509V3_conf_free);
        }
        return 0;
      }
      lVar4 = OPENSSL_sk_value(lVar3,iVar8);
      i2t_ASN1_OBJECT(local_98,0x50,*puVar2);
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while (*(char *)(*(longlong *)(lVar4 + 8) + lVar7) != '\0');
      lVar6 = -1;
      do {
        lVar5 = lVar6 + 1;
        lVar9 = lVar6 + 1;
        lVar6 = lVar5;
      } while (local_98[lVar9] != '\0');
      lVar9 = (longlong)((int)lVar7 + (int)lVar5 + 4);
      lVar6 = CRYPTO_malloc(lVar9,"crypto\\x509v3\\v3_info.c",0x52);
      lVar7 = lVar3;
      if (lVar6 == 0) goto LAB_143d3e342;
      local_a8 = *(undefined8 *)(lVar4 + 8);
      BIO_snprintf(lVar6,lVar9,"%s - %s",local_98);
      CRYPTO_free(*(undefined8 *)(lVar4 + 8),"crypto\\x509v3\\v3_info.c",0x56);
      *(longlong *)(lVar4 + 8) = lVar6;
      iVar8 = iVar8 + 1;
      iVar1 = OPENSSL_sk_num(param_2);
    } while (iVar8 < iVar1);
  }
  if ((param_3 == 0) && (lVar3 == 0)) {
    lVar3 = OPENSSL_sk_new_null();
  }
  return lVar3;
}



// FUNCTION 143d3e3b0 v2i_AUTHORITY_INFO_ACCESS body=571 status=ok
// SIG undefined v2i_AUTHORITY_INFO_ACCESS(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong v2i_AUTHORITY_INFO_ACCESS(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char *pcVar6;
  longlong lVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined1 local_48 [8];
  char *local_40;
  undefined8 local_38;
  
  iVar2 = OPENSSL_sk_num(param_3);
  lVar3 = OPENSSL_sk_new_reserve(0,iVar2);
  if (lVar3 == 0) {
    ERR_put_error(0x22,0x8b,0x41,"crypto\\x509v3\\v3_info.c",0x72);
    return 0;
  }
  iVar8 = 0;
  if (0 < iVar2) {
    do {
      lVar4 = OPENSSL_sk_value(param_3,iVar8);
      plVar5 = (longlong *)ASN1_item_new(&DAT_145d836a0);
      if (plVar5 == (longlong *)0x0) {
        uVar10 = 0x79;
LAB_143d3e5bb:
        uVar9 = 0x41;
LAB_143d3e5c1:
        ERR_put_error(0x22,0x8b,uVar9,"crypto\\x509v3\\v3_info.c",uVar10);
LAB_143d3e5d5:
        OPENSSL_sk_pop_free(lVar3,FUN_143d3e5f0);
        return 0;
      }
      OPENSSL_sk_push(lVar3,plVar5);
      pcVar6 = _guard_xfg_dispatch_icall_nop(*(char **)(lVar4 + 8),0x3b);
      if (pcVar6 == (char *)0x0) {
        uVar10 = 0x80;
        uVar9 = 0x8f;
        goto LAB_143d3e5c1;
      }
      iVar1 = *(int *)(lVar4 + 8);
      local_40 = pcVar6 + 1;
      local_38 = *(undefined8 *)(lVar4 + 0x10);
      lVar7 = v2i_GENERAL_NAME_ex(plVar5[1],param_1,param_2,local_48,0);
      if (lVar7 == 0) goto LAB_143d3e5d5;
      lVar4 = CRYPTO_strndup(*(undefined8 *)(lVar4 + 8),(longlong)((int)pcVar6 - iVar1),
                             "crypto\\x509v3\\v3_info.c",0x88);
      if (lVar4 == 0) {
        uVar10 = 0x8a;
        goto LAB_143d3e5bb;
      }
      lVar7 = OBJ_txt2obj(lVar4,0);
      *plVar5 = lVar7;
      if (lVar7 == 0) {
        ERR_put_error(0x22,0x8b,0x77,"crypto\\x509v3\\v3_info.c",0x90);
        ERR_add_error_data(2,"value=",lVar4);
        CRYPTO_free(lVar4,"crypto\\x509v3\\v3_info.c",0x92);
        goto LAB_143d3e5d5;
      }
      CRYPTO_free(lVar4,"crypto\\x509v3\\v3_info.c",0x95);
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar2);
  }
  return lVar3;
}



// FUNCTION 143d3e5f0 FUN_143d3e5f0 body=29 status=ok
// SIG undefined FUN_143d3e5f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d3e5f0(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_145d836a0);
  return;
}



// FUNCTION 143d3e610 ASN1_item_pack body=280 status=ok
// SIG undefined ASN1_item_pack(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * ASN1_item_pack(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143d3e62b;
  if (((param_3 == (longlong *)0x0) || (piVar3 = (int *)*param_3, piVar3 == (int *)0x0)) &&
     (piVar3 = (int *)ASN1_STRING_new(), piVar3 == (int *)0x0)) {
    ERR_put_error(0xd,0xc6,0x41,"crypto\\asn1\\asn_pack.c",0x16,uVar5);
  }
  else {
    CRYPTO_free(*(undefined8 *)(piVar3 + 2),"crypto\\asn1\\asn_pack.c",0x1d);
    piVar3[2] = 0;
    piVar3[3] = 0;
    iVar1 = ASN1_item_i2d(param_1,piVar3 + 2,param_2);
    *piVar3 = iVar1;
    if (iVar1 == 0) {
      uVar2 = 0x21;
      uVar4 = 0x70;
    }
    else {
      if (*(longlong *)(piVar3 + 2) != 0) {
        if (param_3 == (longlong *)0x0) {
          return piVar3;
        }
        if (*param_3 == 0) {
          *param_3 = (longlong)piVar3;
          return piVar3;
        }
        return piVar3;
      }
      uVar2 = 0x25;
      uVar4 = 0x41;
    }
    ERR_put_error(0xd,0xc6,uVar4,"crypto\\asn1\\asn_pack.c",uVar2,uVar5);
    if ((param_3 == (longlong *)0x0) || (*param_3 == 0)) {
      ASN1_STRING_free(piVar3);
    }
  }
  return (int *)0x0;
}



// FUNCTION 143d3e730 ASN1_item_unpack body=91 status=ok
// SIG undefined ASN1_item_unpack(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ASN1_item_unpack(undefined4 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res8 [4];
  undefined8 uVar2;
  
  uVar2 = 0x143d3e73c;
  local_res8[0] = *(undefined8 *)(param_1 + 2);
  lVar1 = ASN1_item_d2i(0,local_res8,*param_1,param_2);
  if (lVar1 == 0) {
    ERR_put_error(0xd,199,0x6e,"crypto\\asn1\\asn_pack.c",0x3c,uVar2);
  }
  return lVar1;
}



// FUNCTION 143d3e790 FUN_143d3e790 body=22 status=ok
// SIG undefined FUN_143d3e790(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d3e790(void)

{
  CONF_get_string();
  return;
}



// FUNCTION 143d3e7b0 FUN_143d3e7b0 body=22 status=ok
// SIG undefined FUN_143d3e7b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d3e7b0(void)

{
  CONF_get_section();
  return;
}



// FUNCTION 143d3e7d0 FUN_143d3e7d0 body=22 status=ok
// SIG undefined FUN_143d3e7d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d3e7d0(void)

{
  NCONF_get_string();
  return;
}



// FUNCTION 143d3e7f0 FUN_143d3e7f0 body=22 status=ok
// SIG undefined FUN_143d3e7f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d3e7f0(void)

{
  NCONF_get_section();
  return;
}



// FUNCTION 143d3e810 X509V3_get_section body=89 status=ok
// SIG undefined X509V3_get_section(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509V3_get_section(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x30) != 0) && (*(longlong *)(param_1 + 0x28) != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 0x28) + 8),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000143d3e83f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(*(longlong *)(param_1 + 0x30));
    return uVar1;
  }
  ERR_put_error(0x22,0x8e,0x94,"crypto\\x509v3\\v3_conf.c",0x181);
  return 0;
}



// FUNCTION 143d3e870 X509V3_section_free body=43 status=ok
// SIG undefined X509V3_section_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509V3_section_free(longlong param_1,longlong param_2)

{
  code *pcVar1;
  
  if ((param_2 != 0) &&
     (pcVar1 = *(code **)(*(longlong *)(param_1 + 0x28) + 0x18), pcVar1 != (code *)0x0)) {
    (*pcVar1)(*(undefined8 *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 143d3e8a0 DES_decrypt3 body=344 status=ok
// SIG undefined DES_decrypt3(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DES_decrypt3(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (param_1[1] >> 4 ^ *param_1) & 0xf0f0f0f;
  uVar2 = *param_1 ^ uVar1;
  uVar3 = param_1[1] ^ uVar1 << 4;
  uVar1 = uVar2 >> 0x10 ^ uVar3;
  uVar3 = uVar3 ^ uVar1 & 0xffff;
  uVar2 = uVar2 ^ uVar1 << 0x10;
  uVar1 = (uVar3 >> 2 ^ uVar2) & 0x33333333;
  uVar2 = uVar2 ^ uVar1;
  uVar3 = uVar3 ^ uVar1 * 4;
  uVar1 = (uVar2 >> 8 ^ uVar3) & 0xff00ff;
  uVar3 = uVar3 ^ uVar1;
  uVar2 = uVar2 ^ uVar1 << 8;
  uVar1 = (uVar3 >> 1 ^ uVar2) & 0x55555555;
  *param_1 = uVar1 ^ uVar2;
  param_1[1] = uVar1 * 2 ^ uVar3;
  DES_encrypt2(param_1,param_4,0);
  DES_encrypt2(param_1,param_3,1);
  DES_encrypt2(param_1,param_2,0);
  uVar1 = (param_1[1] >> 1 ^ *param_1) & 0x55555555;
  uVar2 = *param_1 ^ uVar1;
  uVar3 = param_1[1] ^ uVar1 * 2;
  uVar1 = (uVar2 >> 8 ^ uVar3) & 0xff00ff;
  uVar3 = uVar3 ^ uVar1;
  uVar2 = uVar2 ^ uVar1 << 8;
  uVar1 = (uVar3 >> 2 ^ uVar2) & 0x33333333;
  uVar2 = uVar2 ^ uVar1;
  uVar3 = uVar3 ^ uVar1 * 4;
  uVar1 = uVar2 >> 0x10 ^ uVar3;
  uVar3 = uVar3 ^ uVar1 & 0xffff;
  uVar2 = uVar2 ^ uVar1 << 0x10;
  uVar1 = (uVar3 >> 4 ^ uVar2) & 0xf0f0f0f;
  *param_1 = uVar1 ^ uVar2;
  param_1[1] = uVar1 << 4 ^ uVar3;
  return;
}



// FUNCTION 143d3ea00 FUN_143d3ea00 body=1260 status=ok
// SIG undefined FUN_143d3ea00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d3ea00(uint *param_1,undefined1 *param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint *param_7,int param_8)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint local_res8;
  uint local_resc;
  
  iVar7 = param_3 - 8;
  uVar3 = *param_7;
  uVar4 = param_7[1];
  if (param_8 == 0) {
    if (-1 < iVar7) {
      uVar6 = (ulonglong)(param_3 >> 3);
      iVar7 = iVar7 + (param_3 >> 3) * -8;
      uVar8 = uVar3;
      uVar9 = uVar4;
      do {
        uVar3 = *param_1;
        uVar4 = param_1[1];
        param_1 = param_1 + 2;
        local_res8 = uVar3;
        local_resc = uVar4;
        DES_decrypt3(&local_res8,param_4,param_5,param_6);
        local_resc = local_resc ^ uVar9;
        local_res8 = local_res8 ^ uVar8;
        *param_2 = (char)local_res8;
        param_2[1] = (char)(local_res8 >> 8);
        param_2[2] = (char)(local_res8 >> 0x10);
        param_2[3] = (char)(local_res8 >> 0x18);
        param_2[4] = (char)local_resc;
        param_2[5] = (char)(local_resc >> 8);
        param_2[6] = (char)(local_resc >> 0x10);
        param_2[7] = (char)(local_resc >> 0x18);
        param_2 = param_2 + 8;
        uVar6 = uVar6 - 1;
        uVar8 = uVar3;
        uVar9 = uVar4;
      } while (uVar6 != 0);
    }
    uVar8 = uVar3;
    uVar9 = uVar4;
    if (iVar7 != -8) {
      uVar8 = *param_1;
      uVar9 = param_1[1];
      local_res8 = uVar8;
      local_resc = uVar9;
      DES_decrypt3(&local_res8,param_4,param_5,param_6);
      local_res8 = local_res8 ^ uVar3;
      local_resc = local_resc ^ uVar4;
      param_2 = param_2 + (iVar7 + 8);
      switch(iVar7) {
      case 0:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_resc >> 0x18);
      case -1:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_resc >> 0x10);
      case -2:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_resc >> 8);
      case -3:
        param_2 = param_2 + -1;
        *param_2 = (char)local_resc;
      case -4:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_res8 >> 0x18);
      case -5:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_res8 >> 0x10);
      case -6:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_res8 >> 8);
      case -7:
        param_2[-1] = (char)local_res8;
      }
    }
  }
  else {
    local_res8 = uVar3;
    local_resc = uVar4;
    if (-1 < iVar7) {
      uVar6 = (ulonglong)(param_3 >> 3);
      iVar7 = iVar7 + (param_3 >> 3) * -8;
      do {
        puVar1 = param_1 + 1;
        local_res8 = *param_1 ^ local_res8;
        param_1 = param_1 + 2;
        local_resc = *puVar1 ^ local_resc;
        DES_encrypt3(&local_res8,param_4,param_5,param_6);
        *param_2 = (char)local_res8;
        param_2[1] = (char)(local_res8 >> 8);
        param_2[2] = (char)(local_res8 >> 0x10);
        param_2[3] = (char)(local_res8 >> 0x18);
        param_2[4] = (char)local_resc;
        param_2[5] = (char)(local_resc >> 8);
        param_2[6] = (char)(local_resc >> 0x10);
        param_2[7] = (char)(local_resc >> 0x18);
        param_2 = param_2 + 8;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    uVar8 = local_res8;
    uVar9 = local_resc;
    if (iVar7 != -8) {
      lVar5 = (longlong)param_1 + (longlong)(iVar7 + 8);
      uVar3 = 0;
      uVar4 = 0;
      switch(iVar7) {
      case 0:
        pbVar2 = (byte *)(lVar5 + -1);
        lVar5 = lVar5 + -1;
        uVar3 = (uint)*pbVar2 << 0x18;
      case -1:
        pbVar2 = (byte *)(lVar5 + -1);
        lVar5 = lVar5 + -1;
        uVar3 = uVar3 | (uint)*pbVar2 << 0x10;
      case -2:
        pbVar2 = (byte *)(lVar5 + -1);
        lVar5 = lVar5 + -1;
        uVar3 = uVar3 | (uint)*pbVar2 << 8;
      case -3:
        pbVar2 = (byte *)(lVar5 + -1);
        lVar5 = lVar5 + -1;
        uVar3 = uVar3 | *pbVar2;
      case -4:
        pbVar2 = (byte *)(lVar5 + -1);
        lVar5 = lVar5 + -1;
        uVar4 = (uint)*pbVar2 << 0x18;
      case -5:
        pbVar2 = (byte *)(lVar5 + -1);
        lVar5 = lVar5 + -1;
        uVar4 = uVar4 | (uint)*pbVar2 << 0x10;
      case -6:
        pbVar2 = (byte *)(lVar5 + -1);
        lVar5 = lVar5 + -1;
        uVar4 = uVar4 | (uint)*pbVar2 << 8;
      case -7:
        uVar4 = uVar4 | *(byte *)(lVar5 + -1);
      default:
        local_res8 = uVar4 ^ local_res8;
        local_resc = uVar3 ^ local_resc;
        DES_encrypt3(&local_res8,param_4,param_5,param_6);
        *param_2 = (char)local_res8;
        param_2[1] = (char)(local_res8 >> 8);
        param_2[2] = (char)(local_res8 >> 0x10);
        param_2[3] = (char)(local_res8 >> 0x18);
        param_2[4] = (char)local_resc;
        param_2[5] = (char)(local_resc >> 8);
        param_2[6] = (char)(local_resc >> 0x10);
        param_2[7] = (char)(local_resc >> 0x18);
        uVar8 = local_res8;
        uVar9 = local_resc;
      }
    }
  }
  *(char *)param_7 = (char)uVar8;
  *(char *)((longlong)param_7 + 1) = (char)(uVar8 >> 8);
  *(char *)((longlong)param_7 + 2) = (char)(uVar8 >> 0x10);
  *(char *)((longlong)param_7 + 3) = (char)(uVar8 >> 0x18);
  *(char *)(param_7 + 1) = (char)uVar9;
  *(char *)((longlong)param_7 + 5) = (char)(uVar9 >> 8);
  *(char *)((longlong)param_7 + 6) = (char)(uVar9 >> 0x10);
  *(char *)((longlong)param_7 + 7) = (char)(uVar9 >> 0x18);
  return;
}



// FUNCTION 143d3ef30 DES_encrypt1 body=4891 status=ok
// SIG undefined DES_encrypt1(void)

void DES_encrypt1(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = (param_1[1] >> 4 ^ *param_1) & 0xf0f0f0f;
  uVar4 = *param_1 ^ uVar1;
  uVar5 = param_1[1] ^ uVar1 << 4;
  uVar1 = uVar4 >> 0x10 ^ uVar5;
  uVar5 = uVar5 ^ uVar1 & 0xffff;
  uVar4 = uVar4 ^ uVar1 << 0x10;
  uVar1 = (uVar5 >> 2 ^ uVar4) & 0x33333333;
  uVar4 = uVar4 ^ uVar1;
  uVar5 = uVar5 ^ uVar1 * 4;
  uVar1 = (uVar4 >> 8 ^ uVar5) & 0xff00ff;
  uVar5 = uVar5 ^ uVar1;
  uVar4 = uVar4 ^ uVar1 << 8;
  uVar1 = (uVar5 >> 1 ^ uVar4) & 0x55555555;
  uVar4 = uVar1 ^ uVar4;
  uVar4 = uVar4 >> 0x1d | uVar4 << 3;
  uVar5 = uVar1 * 2 ^ uVar5;
  uVar1 = uVar5 >> 0x1d | uVar5 << 3;
  if (param_3 == 0) {
    uVar5 = (param_2[0x1f] ^ uVar4) >> 4;
    uVar2 = param_2[0x1e] ^ uVar4;
    uVar1 = uVar1 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar5 | (param_2[0x1f] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar5 = (param_2[0x1d] ^ uVar1) >> 4;
    uVar2 = param_2[0x1c] ^ uVar1;
    uVar4 = uVar4 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar5 | (param_2[0x1d] ^ uVar1) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0x1a] ^ uVar4;
    uVar5 = (param_2[0x1b] ^ uVar4) >> 4;
    uVar1 = uVar1 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar5 | (param_2[0x1b] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0x18] ^ uVar1;
    uVar5 = (param_2[0x19] ^ uVar1) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar5 | (param_2[0x19] ^ uVar1) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0x16] ^ uVar4;
    uVar5 = (param_2[0x17] ^ uVar4) >> 4;
    uVar1 = uVar1 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar5 | (param_2[0x17] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0x14] ^ uVar1;
    uVar5 = (param_2[0x15] ^ uVar1) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar5 | (param_2[0x15] ^ uVar1) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0x12] ^ uVar4;
    uVar5 = (param_2[0x13] ^ uVar4) >> 4;
    uVar1 = uVar1 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar5 | (param_2[0x13] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0x10] ^ uVar1;
    uVar5 = (param_2[0x11] ^ uVar1) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar5 | (param_2[0x11] ^ uVar1) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0xe] ^ uVar4;
    uVar5 = (param_2[0xf] ^ uVar4) >> 4;
    uVar1 = uVar1 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar5 | (param_2[0xf] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0xc] ^ uVar1;
    uVar5 = (param_2[0xd] ^ uVar1) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar5 | (param_2[0xd] ^ uVar1) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[10] ^ uVar4;
    uVar5 = (param_2[0xb] ^ uVar4) >> 4;
    uVar1 = uVar1 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar5 | (param_2[0xb] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[8] ^ uVar1;
    uVar5 = (param_2[9] ^ uVar1) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar5 | (param_2[9] ^ uVar1) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[6] ^ uVar4;
    uVar5 = (param_2[7] ^ uVar4) >> 4;
    uVar1 = uVar1 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar5 | (param_2[7] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[4] ^ uVar1;
    uVar5 = (param_2[5] ^ uVar1) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar5 | (param_2[5] ^ uVar1) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[2] ^ uVar4;
    uVar2 = (param_2[3] ^ uVar4) >> 4;
    uVar5 = *param_2;
    uVar3 = *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&DAT_145d83ec0 +
                     (ulonglong)((uVar2 | (param_2[3] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[1];
  }
  else {
    uVar5 = (param_2[1] ^ uVar4) >> 4;
    uVar2 = uVar4 ^ *param_2;
    uVar1 = uVar1 ^ *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar5 | (param_2[1] ^ uVar4) << 0x1c) >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar2 >> 0x1a) * 4);
    uVar5 = (param_2[3] ^ uVar1) >> 4;
    uVar2 = param_2[2] ^ uVar1;
    uVar4 = uVar4 ^ *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar5 | (param_2[3] ^ uVar1) << 0x1c) >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar2 >> 0x1a) * 4);
    uVar2 = param_2[4] ^ uVar4;
    uVar5 = (param_2[5] ^ uVar4) >> 4;
    uVar1 = uVar1 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar5 | (param_2[5] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[6] ^ uVar1;
    uVar5 = (param_2[7] ^ uVar1) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar5 | (param_2[7] ^ uVar1) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[8] ^ uVar4;
    uVar5 = (param_2[9] ^ uVar4) >> 4;
    uVar1 = uVar1 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar5 | (param_2[9] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[10] ^ uVar1;
    uVar5 = (param_2[0xb] ^ uVar1) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar5 | (param_2[0xb] ^ uVar1) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0xc] ^ uVar4;
    uVar5 = (param_2[0xd] ^ uVar4) >> 4;
    uVar1 = uVar1 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar5 | (param_2[0xd] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0xe] ^ uVar1;
    uVar5 = (param_2[0xf] ^ uVar1) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar5 | (param_2[0xf] ^ uVar1) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0x10] ^ uVar4;
    uVar5 = (param_2[0x11] ^ uVar4) >> 4;
    uVar1 = uVar1 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar5 | (param_2[0x11] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0x12] ^ uVar1;
    uVar5 = (param_2[0x13] ^ uVar1) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar5 | (param_2[0x13] ^ uVar1) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0x14] ^ uVar4;
    uVar5 = (param_2[0x15] ^ uVar4) >> 4;
    uVar1 = uVar1 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar5 | (param_2[0x15] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0x16] ^ uVar1;
    uVar5 = (param_2[0x17] ^ uVar1) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar5 | (param_2[0x17] ^ uVar1) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0x18] ^ uVar4;
    uVar5 = (param_2[0x19] ^ uVar4) >> 4;
    uVar1 = uVar1 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar5 | (param_2[0x19] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0x1a] ^ uVar1;
    uVar5 = (param_2[0x1b] ^ uVar1) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar5 | (param_2[0x1b] ^ uVar1) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[0x1c] ^ uVar4;
    uVar2 = (param_2[0x1d] ^ uVar4) >> 4;
    uVar5 = param_2[0x1e];
    uVar3 = *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&DAT_145d83ec0 +
                     (ulonglong)((uVar2 | (param_2[0x1d] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0x1f];
  }
  uVar1 = uVar1 ^ uVar3;
  uVar5 = uVar5 ^ uVar1;
  uVar3 = (uVar2 ^ uVar1) >> 4;
  uVar6 = uVar1 >> 3 | uVar1 << 0x1d;
  uVar4 = uVar4 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar5 >> 0x12 & 0x3f) * 4) ^
                  *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar5 >> 10 & 0x3f) * 4) ^
                  *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar5 >> 2 & 0x3f) * 4) ^
                  *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                  *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                  *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                  *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar5 >> 0x1a) * 4) ^
                  *(uint *)(&DAT_145d83ec0 +
                           (ulonglong)((uVar3 | (uVar2 ^ uVar1) << 0x1c) >> 0x1a) * 4);
  uVar4 = uVar4 >> 3 | uVar4 << 0x1d;
  uVar1 = (uVar4 >> 1 ^ uVar6) & 0x55555555;
  uVar6 = uVar6 ^ uVar1;
  uVar4 = uVar4 ^ uVar1 * 2;
  uVar1 = (uVar6 >> 8 ^ uVar4) & 0xff00ff;
  uVar4 = uVar4 ^ uVar1;
  uVar6 = uVar6 ^ uVar1 << 8;
  uVar1 = (uVar4 >> 2 ^ uVar6) & 0x33333333;
  uVar6 = uVar6 ^ uVar1;
  uVar4 = uVar4 ^ uVar1 * 4;
  uVar1 = uVar6 >> 0x10 ^ uVar4;
  uVar4 = uVar4 ^ uVar1 & 0xffff;
  uVar6 = uVar6 ^ uVar1 << 0x10;
  uVar1 = (uVar4 >> 4 ^ uVar6) & 0xf0f0f0f;
  param_1[1] = uVar1 << 4 ^ uVar4;
  *param_1 = uVar1 ^ uVar6;
  return;
}



// FUNCTION 143d40250 DES_encrypt2 body=4512 status=ok
// SIG undefined DES_encrypt2(void)

void DES_encrypt2(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *param_1 >> 0x1d | *param_1 << 3;
  uVar5 = param_1[1] >> 0x1d | param_1[1] << 3;
  if (param_3 == 0) {
    uVar3 = (param_2[0x1f] ^ uVar4) >> 4;
    uVar1 = param_2[0x1e] ^ uVar4;
    uVar5 = uVar5 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar3 | (param_2[0x1f] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar3 = (param_2[0x1d] ^ uVar5) >> 4;
    uVar1 = param_2[0x1c] ^ uVar5;
    uVar4 = uVar4 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar3 | (param_2[0x1d] ^ uVar5) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[0x1a] ^ uVar4;
    uVar3 = (param_2[0x1b] ^ uVar4) >> 4;
    uVar5 = uVar5 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar3 | (param_2[0x1b] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[0x18] ^ uVar5;
    uVar3 = (param_2[0x19] ^ uVar5) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar3 | (param_2[0x19] ^ uVar5) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[0x16] ^ uVar4;
    uVar3 = (param_2[0x17] ^ uVar4) >> 4;
    uVar5 = uVar5 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar3 | (param_2[0x17] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[0x14] ^ uVar5;
    uVar3 = (param_2[0x15] ^ uVar5) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar3 | (param_2[0x15] ^ uVar5) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[0x12] ^ uVar4;
    uVar3 = (param_2[0x13] ^ uVar4) >> 4;
    uVar5 = uVar5 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar3 | (param_2[0x13] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[0x10] ^ uVar5;
    uVar3 = (param_2[0x11] ^ uVar5) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar3 | (param_2[0x11] ^ uVar5) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[0xe] ^ uVar4;
    uVar3 = (param_2[0xf] ^ uVar4) >> 4;
    uVar5 = uVar5 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar3 | (param_2[0xf] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[0xc] ^ uVar5;
    uVar3 = (param_2[0xd] ^ uVar5) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar3 | (param_2[0xd] ^ uVar5) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[10] ^ uVar4;
    uVar3 = (param_2[0xb] ^ uVar4) >> 4;
    uVar5 = uVar5 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar3 | (param_2[0xb] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[8] ^ uVar5;
    uVar3 = (param_2[9] ^ uVar5) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar3 | (param_2[9] ^ uVar5) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[6] ^ uVar4;
    uVar3 = (param_2[7] ^ uVar4) >> 4;
    uVar5 = uVar5 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar3 | (param_2[7] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[4] ^ uVar5;
    uVar3 = (param_2[5] ^ uVar5) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar3 | (param_2[5] ^ uVar5) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[2] ^ uVar4;
    uVar1 = (param_2[3] ^ uVar4) >> 4;
    uVar3 = *param_2;
    uVar2 = *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
            *(uint *)(&DAT_145d83ec0 +
                     (ulonglong)((uVar1 | (param_2[3] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[1];
  }
  else {
    uVar3 = (param_2[1] ^ uVar4) >> 4;
    uVar1 = uVar4 ^ *param_2;
    uVar5 = uVar5 ^ *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar3 | (param_2[1] ^ uVar4) << 0x1c) >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = (param_2[3] ^ uVar5) >> 4;
    uVar1 = param_2[2] ^ uVar5;
    uVar4 = uVar4 ^ *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar3 | (param_2[3] ^ uVar5) << 0x1c) >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar1 = param_2[4] ^ uVar4;
    uVar3 = (param_2[5] ^ uVar4) >> 4;
    uVar5 = uVar5 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar3 | (param_2[5] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[6] ^ uVar5;
    uVar3 = (param_2[7] ^ uVar5) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar3 | (param_2[7] ^ uVar5) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[8] ^ uVar4;
    uVar3 = (param_2[9] ^ uVar4) >> 4;
    uVar5 = uVar5 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar3 | (param_2[9] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[10] ^ uVar5;
    uVar3 = (param_2[0xb] ^ uVar5) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar3 | (param_2[0xb] ^ uVar5) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[0xc] ^ uVar4;
    uVar3 = (param_2[0xd] ^ uVar4) >> 4;
    uVar5 = uVar5 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar3 | (param_2[0xd] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[0xe] ^ uVar5;
    uVar3 = (param_2[0xf] ^ uVar5) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar3 | (param_2[0xf] ^ uVar5) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[0x10] ^ uVar4;
    uVar3 = (param_2[0x11] ^ uVar4) >> 4;
    uVar5 = uVar5 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar3 | (param_2[0x11] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[0x12] ^ uVar5;
    uVar3 = (param_2[0x13] ^ uVar5) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar3 | (param_2[0x13] ^ uVar5) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[0x14] ^ uVar4;
    uVar3 = (param_2[0x15] ^ uVar4) >> 4;
    uVar5 = uVar5 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar3 | (param_2[0x15] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[0x16] ^ uVar5;
    uVar3 = (param_2[0x17] ^ uVar5) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar3 | (param_2[0x17] ^ uVar5) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[0x18] ^ uVar4;
    uVar3 = (param_2[0x19] ^ uVar4) >> 4;
    uVar5 = uVar5 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar3 | (param_2[0x19] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[0x1a] ^ uVar5;
    uVar3 = (param_2[0x1b] ^ uVar5) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_145d83ec0 +
                             (ulonglong)((uVar3 | (param_2[0x1b] ^ uVar5) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0x1c] ^ uVar4;
    uVar1 = (param_2[0x1d] ^ uVar4) >> 4;
    uVar3 = param_2[0x1e];
    uVar2 = *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
            *(uint *)(&DAT_145d83ec0 +
                     (ulonglong)((uVar1 | (param_2[0x1d] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[0x1f];
  }
  uVar5 = uVar5 ^ uVar2;
  uVar3 = uVar3 ^ uVar5;
  uVar2 = (uVar1 ^ uVar5) >> 4;
  uVar4 = uVar4 ^ *(uint *)(&DAT_145d83bc0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                  *(uint *)(&DAT_145d839c0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                  *(uint *)(&DAT_145d837c0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                  *(uint *)(&DAT_145d83cc0 + (ulonglong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
                  *(uint *)(&DAT_145d83ac0 + (ulonglong)((uVar2 & 0xfc00) >> 10) * 4) ^
                  *(uint *)(&DAT_145d838c0 + (ulonglong)((uVar2 & 0xfc) >> 2) * 4) ^
                  *(uint *)(&DAT_145d83dc0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                  *(uint *)(&DAT_145d83ec0 +
                           (ulonglong)((uVar2 | (uVar1 ^ uVar5) << 0x1c) >> 0x1a) * 4);
  param_1[1] = uVar4 >> 3 | uVar4 << 0x1d;
  *param_1 = uVar5 >> 3 | uVar5 << 0x1d;
  return;
}



// FUNCTION 143d413f0 DES_encrypt3 body=344 status=ok
// SIG undefined DES_encrypt3(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DES_encrypt3(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (param_1[1] >> 4 ^ *param_1) & 0xf0f0f0f;
  uVar2 = *param_1 ^ uVar1;
  uVar3 = param_1[1] ^ uVar1 << 4;
  uVar1 = uVar2 >> 0x10 ^ uVar3;
  uVar3 = uVar3 ^ uVar1 & 0xffff;
  uVar2 = uVar2 ^ uVar1 << 0x10;
  uVar1 = (uVar3 >> 2 ^ uVar2) & 0x33333333;
  uVar2 = uVar2 ^ uVar1;
  uVar3 = uVar3 ^ uVar1 * 4;
  uVar1 = (uVar2 >> 8 ^ uVar3) & 0xff00ff;
  uVar3 = uVar3 ^ uVar1;
  uVar2 = uVar2 ^ uVar1 << 8;
  uVar1 = (uVar3 >> 1 ^ uVar2) & 0x55555555;
  *param_1 = uVar1 ^ uVar2;
  param_1[1] = uVar1 * 2 ^ uVar3;
  DES_encrypt2(param_1,param_2,1);
  DES_encrypt2(param_1,param_3,0);
  DES_encrypt2(param_1,param_4,1);
  uVar1 = (param_1[1] >> 1 ^ *param_1) & 0x55555555;
  uVar2 = *param_1 ^ uVar1;
  uVar3 = param_1[1] ^ uVar1 * 2;
  uVar1 = (uVar2 >> 8 ^ uVar3) & 0xff00ff;
  uVar3 = uVar3 ^ uVar1;
  uVar2 = uVar2 ^ uVar1 << 8;
  uVar1 = (uVar3 >> 2 ^ uVar2) & 0x33333333;
  uVar2 = uVar2 ^ uVar1;
  uVar3 = uVar3 ^ uVar1 * 4;
  uVar1 = uVar2 >> 0x10 ^ uVar3;
  uVar3 = uVar3 ^ uVar1 & 0xffff;
  uVar2 = uVar2 ^ uVar1 << 0x10;
  uVar1 = (uVar3 >> 4 ^ uVar2) & 0xf0f0f0f;
  *param_1 = uVar1 ^ uVar2;
  param_1[1] = uVar1 << 4 ^ uVar3;
  return;
}



// FUNCTION 143d41550 FUN_143d41550 body=1203 status=ok
// SIG undefined FUN_143d41550(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d41550(uint *param_1,undefined1 *param_2,uint param_3,undefined8 param_4,uint *param_5,
                  int param_6)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint local_38;
  uint local_34;
  undefined8 uStack_30;
  
  uStack_30 = 0x143d41571;
  iVar7 = param_3 - 8;
  uVar3 = *param_5;
  uVar4 = param_5[1];
  if (param_6 == 0) {
    if (-1 < iVar7) {
      uVar6 = (ulonglong)(param_3 >> 3);
      iVar7 = iVar7 + (param_3 >> 3) * -8;
      uVar8 = uVar3;
      uVar9 = uVar4;
      do {
        uVar3 = *param_1;
        uVar4 = param_1[1];
        param_1 = param_1 + 2;
        local_38 = uVar3;
        local_34 = uVar4;
        DES_encrypt1(&local_38,param_4,0);
        local_38 = local_38 ^ uVar8;
        *param_2 = (char)local_38;
        local_34 = local_34 ^ uVar9;
        param_2[1] = (char)(local_38 >> 8);
        param_2[2] = (char)(local_38 >> 0x10);
        param_2[3] = (char)(local_38 >> 0x18);
        param_2[4] = (char)local_34;
        param_2[5] = (char)(local_34 >> 8);
        param_2[6] = (char)(local_34 >> 0x10);
        param_2[7] = (char)(local_34 >> 0x18);
        param_2 = param_2 + 8;
        uVar6 = uVar6 - 1;
        uVar8 = uVar3;
        uVar9 = uVar4;
      } while (uVar6 != 0);
    }
    uVar8 = uVar3;
    uVar9 = uVar4;
    if (iVar7 != -8) {
      uVar8 = *param_1;
      uVar9 = param_1[1];
      local_38 = uVar8;
      local_34 = uVar9;
      DES_encrypt1(&local_38,param_4,0);
      local_38 = local_38 ^ uVar3;
      local_34 = local_34 ^ uVar4;
      param_2 = param_2 + (iVar7 + 8);
      switch(iVar7) {
      case 0:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_34 >> 0x18);
      case -1:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_34 >> 0x10);
      case -2:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_34 >> 8);
      case -3:
        param_2 = param_2 + -1;
        *param_2 = (char)local_34;
      case -4:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_38 >> 0x18);
      case -5:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_38 >> 0x10);
      case -6:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_38 >> 8);
      case -7:
        param_2[-1] = (char)local_38;
      }
    }
  }
  else {
    local_38 = uVar3;
    local_34 = uVar4;
    if (-1 < iVar7) {
      uVar6 = (ulonglong)(param_3 >> 3);
      iVar7 = iVar7 + (param_3 >> 3) * -8;
      do {
        puVar1 = param_1 + 1;
        local_38 = *param_1 ^ local_38;
        param_1 = param_1 + 2;
        local_34 = *puVar1 ^ local_34;
        DES_encrypt1(&local_38,param_4,1);
        *param_2 = (char)local_38;
        param_2[1] = (char)(local_38 >> 8);
        param_2[2] = (char)(local_38 >> 0x10);
        param_2[3] = (char)(local_38 >> 0x18);
        param_2[4] = (char)local_34;
        param_2[5] = (char)(local_34 >> 8);
        param_2[6] = (char)(local_34 >> 0x10);
        param_2[7] = (char)(local_34 >> 0x18);
        param_2 = param_2 + 8;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    uVar8 = local_38;
    uVar9 = local_34;
    if (iVar7 != -8) {
      lVar5 = (longlong)param_1 + (longlong)(iVar7 + 8);
      uVar3 = 0;
      uVar4 = 0;
      switch(iVar7) {
      case 0:
        pbVar2 = (byte *)(lVar5 + -1);
        lVar5 = lVar5 + -1;
        uVar3 = (uint)*pbVar2 << 0x18;
      case -1:
        pbVar2 = (byte *)(lVar5 + -1);
        lVar5 = lVar5 + -1;
        uVar3 = uVar3 | (uint)*pbVar2 << 0x10;
      case -2:
        pbVar2 = (byte *)(lVar5 + -1);
        lVar5 = lVar5 + -1;
        uVar3 = uVar3 | (uint)*pbVar2 << 8;
      case -3:
        pbVar2 = (byte *)(lVar5 + -1);
        lVar5 = lVar5 + -1;
        uVar3 = uVar3 | *pbVar2;
      case -4:
        pbVar2 = (byte *)(lVar5 + -1);
        lVar5 = lVar5 + -1;
        uVar4 = (uint)*pbVar2 << 0x18;
      case -5:
        pbVar2 = (byte *)(lVar5 + -1);
        lVar5 = lVar5 + -1;
        uVar4 = uVar4 | (uint)*pbVar2 << 0x10;
      case -6:
        pbVar2 = (byte *)(lVar5 + -1);
        lVar5 = lVar5 + -1;
        uVar4 = uVar4 | (uint)*pbVar2 << 8;
      case -7:
        uVar4 = uVar4 | *(byte *)(lVar5 + -1);
      default:
        local_38 = uVar4 ^ local_38;
        local_34 = uVar3 ^ local_34;
        DES_encrypt1(&local_38,param_4,1);
        *param_2 = (char)local_38;
        param_2[1] = (char)(local_38 >> 8);
        param_2[2] = (char)(local_38 >> 0x10);
        param_2[3] = (char)(local_38 >> 0x18);
        param_2[4] = (char)local_34;
        param_2[5] = (char)(local_34 >> 8);
        param_2[6] = (char)(local_34 >> 0x10);
        param_2[7] = (char)(local_34 >> 0x18);
        uVar8 = local_38;
        uVar9 = local_34;
      }
    }
  }
  *(char *)param_5 = (char)uVar8;
  *(char *)((longlong)param_5 + 1) = (char)(uVar8 >> 8);
  *(char *)((longlong)param_5 + 2) = (char)(uVar8 >> 0x10);
  *(char *)((longlong)param_5 + 3) = (char)(uVar8 >> 0x18);
  *(char *)(param_5 + 1) = (char)uVar9;
  *(char *)((longlong)param_5 + 5) = (char)(uVar9 >> 8);
  *(char *)((longlong)param_5 + 6) = (char)(uVar9 >> 0x10);
  *(char *)((longlong)param_5 + 7) = (char)(uVar9 >> 0x18);
  return;
}



// FUNCTION 143d41a50 FUN_143d41a50 body=1603 status=ok
// SIG undefined FUN_143d41a50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143d41a50(longlong param_1,undefined1 *param_2,int param_3,uint param_4,undefined8 param_5,
                  uint *param_6,int param_7)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStack_b8 [32];
  int local_98;
  uint local_90;
  uint local_8c;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  uint local_74;
  undefined8 local_70;
  undefined1 *local_68;
  uint *local_60;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  uVar7 = param_3 >> 0x1f & 7;
  local_70 = param_5;
  uVar3 = param_3 + uVar7;
  local_60 = param_6;
  local_80 = (int)uVar3 >> 3;
  local_7c = (uVar3 & 7) - uVar7;
  uVar3 = (int)(param_3 + 7 + (param_3 + 7 >> 0x1f & 7U)) >> 3;
  uVar12 = (ulonglong)(int)uVar3;
  if (param_3 - 1U < 0x40) {
    local_68 = (undefined1 *)((longlong)param_6 + 1);
    uVar7 = *param_6;
    uVar9 = param_6[1];
    if (uVar3 <= param_4) {
      local_98 = 8 - local_7c;
      uVar13 = uVar12;
      local_84 = param_3;
      if (param_7 == 0) {
        iVar2 = uVar3 - 1;
        local_78 = local_98;
        do {
          local_98 = iVar2;
          local_74 = param_4 - (int)uVar13;
          local_90 = uVar7;
          local_8c = uVar9;
          DES_encrypt1(&local_90,local_70,1);
          param_1 = param_1 + uVar12;
          uVar14 = 0;
          uVar15 = 0;
          uVar8 = 0;
          switch(local_98) {
          case 7:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar14 = (uint)*pbVar1 << 0x18;
          case 6:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar14 = uVar14 | (uint)*pbVar1 << 0x10;
          case 5:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar14 = uVar14 | (uint)*pbVar1 << 8;
          case 4:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar14 = uVar14 | *pbVar1;
          case 3:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar8 = (uint)*pbVar1 << 0x18;
          case 2:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar8 = uVar8 | (uint)*pbVar1 << 0x10;
          case 1:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar8 = uVar8 | (uint)*pbVar1 << 8;
          case 0:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar15 = uVar8 | *pbVar1;
          default:
            param_1 = param_1 + uVar12;
            uVar8 = uVar9;
            uVar10 = uVar15;
            if ((local_84 != 0x20) && (uVar8 = uVar15, uVar10 = uVar14, local_84 != 0x40)) {
              lVar11 = (longlong)local_80;
              local_58 = uVar7;
              local_54 = uVar9;
              local_50 = uVar15;
              local_4c = uVar14;
              if (local_7c == 0) {
                _guard_xfg_dispatch_icall_nop(&local_58,(char *)((longlong)&local_58 + lVar11),8);
                uVar8 = local_58;
                uVar10 = local_54;
              }
              else {
                bVar4 = (byte)local_7c;
                bVar5 = (byte)local_78;
                bVar6 = *(char *)((longlong)&local_58 + lVar11) << (bVar4 & 0x1f) |
                        *(byte *)((longlong)&local_58 + lVar11 + 1) >> (bVar5 & 0x1f);
                local_58._1_3_ = (undefined3)(uVar7 >> 8);
                local_58 = CONCAT31(local_58._1_3_,bVar6);
                local_58._2_2_ = (undefined2)(uVar7 >> 0x10);
                local_58._0_2_ =
                     CONCAT11(*(byte *)((longlong)&local_58 + lVar11 + 2) >> (bVar5 & 0x1f) |
                              *(char *)((longlong)&local_58 + lVar11 + 1) << (bVar4 & 0x1f),bVar6);
                local_58._3_1_ = (undefined1)(uVar7 >> 0x18);
                local_58._0_3_ =
                     CONCAT12(*(char *)((longlong)&local_58 + lVar11 + 2) << (bVar4 & 0x1f) |
                              *(byte *)((longlong)&local_58 + lVar11 + 3) >> (bVar5 & 0x1f),
                              (undefined2)local_58);
                local_58 = CONCAT13(*(byte *)((longlong)&local_54 + lVar11) >> (bVar5 & 0x1f) |
                                    *(char *)((longlong)&local_58 + lVar11 + 3) << (bVar4 & 0x1f),
                                    (undefined3)local_58);
                bVar6 = *(char *)((longlong)&local_54 + lVar11) << (bVar4 & 0x1f) |
                        *(byte *)((longlong)&local_54 + lVar11 + 1) >> (bVar5 & 0x1f);
                local_54._1_3_ = (undefined3)(uVar9 >> 8);
                local_54 = CONCAT31(local_54._1_3_,bVar6);
                local_54._2_2_ = (undefined2)(uVar9 >> 0x10);
                local_54._0_2_ =
                     CONCAT11(*(byte *)((longlong)&local_54 + lVar11 + 2) >> (bVar5 & 0x1f) |
                              *(char *)((longlong)&local_54 + lVar11 + 1) << (bVar4 & 0x1f),bVar6);
                local_54._3_1_ = (undefined1)(uVar9 >> 0x18);
                local_54._0_3_ =
                     CONCAT12(*(char *)((longlong)&local_54 + lVar11 + 2) << (bVar4 & 0x1f) |
                              *(byte *)((longlong)&local_54 + lVar11 + 3) >> (bVar5 & 0x1f),
                              (undefined2)local_54);
                local_54 = CONCAT13(*(byte *)((longlong)&local_50 + lVar11) >> (bVar5 & 0x1f) |
                                    *(char *)((longlong)&local_54 + lVar11 + 3) << (bVar4 & 0x1f),
                                    (undefined3)local_54);
                uVar8 = local_58;
                uVar10 = local_54;
              }
            }
          }
          uVar9 = uVar10;
          uVar7 = uVar8;
          uVar15 = uVar15 ^ local_90;
          param_2 = param_2 + uVar12;
          uVar14 = uVar14 ^ local_8c;
          switch(local_98) {
          case 7:
            param_2 = param_2 + -1;
            *param_2 = (char)(uVar14 >> 0x18);
          case 6:
            param_2 = param_2 + -1;
            *param_2 = (char)(uVar14 >> 0x10);
          case 5:
            param_2 = param_2 + -1;
            *param_2 = (char)(uVar14 >> 8);
          case 4:
            param_2 = param_2 + -1;
            *param_2 = (char)uVar14;
          case 3:
            param_2 = param_2 + -1;
            *param_2 = (char)(uVar15 >> 0x18);
          case 2:
            param_2 = param_2 + -1;
            *param_2 = (char)(uVar15 >> 0x10);
          case 1:
            param_2 = param_2 + -1;
            *param_2 = (char)(uVar15 >> 8);
          case 0:
            param_2 = param_2 + -1;
            *param_2 = (char)uVar15;
          }
          param_2 = param_2 + uVar12;
          uVar13 = (ulonglong)uVar3;
          iVar2 = local_98;
          param_4 = local_74;
        } while (uVar3 <= local_74);
      }
      else {
        do {
          param_4 = param_4 - (int)uVar13;
          local_90 = uVar7;
          local_8c = uVar9;
          DES_encrypt1(&local_90);
          uVar10 = 0;
          uVar15 = 0;
          uVar8 = 0;
          uVar14 = 0;
          param_1 = param_1 + uVar12;
          switch(uVar3 - 1) {
          case 7:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar15 = (uint)*pbVar1 << 0x18;
          case 6:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar10 = uVar15 | (uint)*pbVar1 << 0x10;
          case 5:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar10 = uVar10 | (uint)*pbVar1 << 8;
          case 4:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar10 = uVar10 | *pbVar1;
          case 3:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar14 = (uint)*pbVar1 << 0x18;
          case 2:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar8 = uVar14 | (uint)*pbVar1 << 0x10;
          case 1:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar8 = uVar8 | (uint)*pbVar1 << 8;
          case 0:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar8 = uVar8 | *pbVar1;
          }
          uVar8 = uVar8 ^ local_90;
          param_1 = param_1 + uVar12;
          uVar10 = uVar10 ^ local_8c;
          param_2 = param_2 + uVar12;
          switch(uVar3 - 1) {
          case 7:
            param_2 = param_2 + -1;
            *param_2 = (char)(uVar10 >> 0x18);
          case 6:
            param_2 = param_2 + -1;
            *param_2 = (char)(uVar10 >> 0x10);
          case 5:
            param_2 = param_2 + -1;
            *param_2 = (char)(uVar10 >> 8);
          case 4:
            param_2 = param_2 + -1;
            *param_2 = (char)uVar10;
          case 3:
            param_2 = param_2 + -1;
            *param_2 = (char)(uVar8 >> 0x18);
          case 2:
            param_2 = param_2 + -1;
            *param_2 = (char)(uVar8 >> 0x10);
          case 1:
            param_2 = param_2 + -1;
            *param_2 = (char)(uVar8 >> 8);
          case 0:
            param_2 = param_2 + -1;
            *param_2 = (char)uVar8;
          }
          param_2 = param_2 + uVar12;
          uVar14 = uVar9;
          uVar15 = uVar8;
          if ((local_84 != 0x20) && (uVar14 = uVar8, uVar15 = uVar10, local_84 != 0x40)) {
            lVar11 = (longlong)local_80;
            local_4c = uVar10;
            local_58 = uVar7;
            local_54 = uVar9;
            local_50 = uVar8;
            if (local_7c == 0) {
              _guard_xfg_dispatch_icall_nop(&local_58,(char *)((longlong)&local_58 + lVar11),8);
              uVar14 = local_58;
              uVar15 = local_54;
            }
            else {
              bVar4 = (byte)local_98;
              bVar5 = (byte)local_7c;
              bVar6 = *(byte *)((longlong)&local_58 + lVar11 + 1) >> (bVar4 & 0x1f) |
                      *(char *)((longlong)&local_58 + lVar11) << (bVar5 & 0x1f);
              local_58._1_3_ = (undefined3)(uVar7 >> 8);
              local_58 = CONCAT31(local_58._1_3_,bVar6);
              local_58._2_2_ = (undefined2)(uVar7 >> 0x10);
              local_58._0_2_ =
                   CONCAT11(*(byte *)((longlong)&local_58 + lVar11 + 2) >> (bVar4 & 0x1f) |
                            *(char *)((longlong)&local_58 + lVar11 + 1) << (bVar5 & 0x1f),bVar6);
              local_58._3_1_ = (undefined1)(uVar7 >> 0x18);
              local_58._0_3_ =
                   CONCAT12(*(char *)((longlong)&local_58 + lVar11 + 2) << (bVar5 & 0x1f) |
                            *(byte *)((longlong)&local_58 + lVar11 + 3) >> (bVar4 & 0x1f),
                            (undefined2)local_58);
              local_58 = CONCAT13(*(byte *)((longlong)&local_54 + lVar11) >> (bVar4 & 0x1f) |
                                  *(char *)((longlong)&local_58 + lVar11 + 3) << (bVar5 & 0x1f),
                                  (undefined3)local_58);
              bVar6 = *(char *)((longlong)&local_54 + lVar11) << (bVar5 & 0x1f) |
                      *(byte *)((longlong)&local_54 + lVar11 + 1) >> (bVar4 & 0x1f);
              local_54._1_3_ = (undefined3)(uVar9 >> 8);
              local_54 = CONCAT31(local_54._1_3_,bVar6);
              local_54._2_2_ = (undefined2)(uVar9 >> 0x10);
              local_54._0_2_ =
                   CONCAT11(*(byte *)((longlong)&local_54 + lVar11 + 2) >> (bVar4 & 0x1f) |
                            *(char *)((longlong)&local_54 + lVar11 + 1) << (bVar5 & 0x1f),bVar6);
              local_54._3_1_ = (undefined1)(uVar9 >> 0x18);
              local_54._0_3_ =
                   CONCAT12(*(char *)((longlong)&local_54 + lVar11 + 2) << (bVar5 & 0x1f) |
                            *(byte *)((longlong)&local_54 + lVar11 + 3) >> (bVar4 & 0x1f),
                            (undefined2)local_54);
              local_54 = CONCAT13(*(byte *)((longlong)&local_50 + lVar11) >> (bVar4 & 0x1f) |
                                  *(char *)((longlong)&local_54 + lVar11 + 3) << (bVar5 & 0x1f),
                                  (undefined3)local_54);
              uVar14 = local_58;
              uVar15 = local_54;
            }
          }
          uVar9 = uVar15;
          uVar7 = uVar14;
          uVar13 = (ulonglong)uVar3;
        } while (uVar3 <= param_4);
      }
    }
    *(char *)local_60 = (char)uVar7;
    *local_68 = (char)(uVar7 >> 8);
    local_68[1] = (char)(uVar7 >> 0x10);
    local_68[2] = (char)(uVar7 >> 0x18);
    local_68[3] = (char)uVar9;
    local_68[4] = (char)(uVar9 >> 8);
    local_68[5] = (char)(uVar9 >> 0x10);
    local_68[6] = (char)(uVar9 >> 0x18);
  }
  return;
}



// FUNCTION 143d42120 DES_ecb_encrypt body=202 status=ok
// SIG undefined DES_ecb_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DES_ecb_encrypt(undefined4 *param_1,undefined1 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  local_res8 = *param_1;
  local_resc = param_1[1];
  DES_encrypt1(&local_res8,param_3,param_4);
  *param_2 = (undefined1)local_res8;
  param_2[1] = (char)((uint)local_res8 >> 8);
  param_2[2] = (char)((uint)local_res8 >> 0x10);
  param_2[3] = (char)((uint)local_res8 >> 0x18);
  param_2[4] = (undefined1)local_resc;
  param_2[5] = (char)((uint)local_resc >> 8);
  param_2[6] = (char)((uint)local_resc >> 0x10);
  param_2[7] = (char)((uint)local_resc >> 0x18);
  return;
}



// FUNCTION 143d421f0 DES_set_key_unchecked body=1620 status=ok
// SIG undefined DES_set_key_unchecked(void)

void DES_set_key_unchecked(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  piVar4 = &DAT_145d84948;
  uVar3 = (param_1[1] >> 4 ^ *param_1) & 0xf0f0f0f;
  uVar2 = *param_1 ^ uVar3;
  uVar7 = param_1[1] ^ uVar3 << 4;
  uVar3 = (uVar2 << 0x12 ^ uVar2) & 0xcccc0000;
  uVar2 = uVar2 ^ uVar3 >> 0x12 ^ uVar3;
  uVar3 = (uVar7 << 0x12 ^ uVar7) & 0xcccc0000;
  uVar7 = uVar7 ^ uVar3 >> 0x12 ^ uVar3;
  uVar3 = (uVar7 >> 1 ^ uVar2) & 0x55555555;
  uVar2 = uVar2 ^ uVar3;
  uVar7 = uVar7 ^ uVar3 * 2;
  uVar3 = (uVar2 >> 8 ^ uVar7) & 0xff00ff;
  uVar7 = uVar7 ^ uVar3;
  uVar2 = uVar2 ^ uVar3 << 8;
  uVar3 = (uVar7 >> 1 ^ uVar2) & 0x55555555;
  uVar2 = uVar2 ^ uVar3;
  uVar7 = uVar7 ^ uVar3 * 2;
  uVar3 = (uVar7 >> 0xc & 0xff0 | uVar2 & 0xf000000f) >> 4 | (uVar7 & 0xff) << 0x10 | uVar7 & 0xff00
  ;
  uVar2 = uVar2 & 0xfffffff;
  do {
    if (piVar4[-2] == 0) {
      uVar8 = uVar2 << 0x1b;
      uVar2 = uVar2 >> 1;
      uVar7 = uVar3 << 0x1b;
      uVar3 = uVar3 >> 1;
    }
    else {
      uVar8 = uVar2 << 0x1a;
      uVar2 = uVar2 >> 2;
      uVar7 = uVar3 << 0x1a;
      uVar3 = uVar3 >> 2;
    }
    uVar9 = uVar8 & 0xfffffff | uVar2;
    uVar5 = uVar7 & 0xfffffff | uVar3;
    uVar8 = *(uint *)(&DAT_145d84440 +
                     (ulonglong)
                     (((uVar2 & 0xc00000 | (uVar8 & 0xfffffff | uVar2 & 0xe000000) >> 1) >> 1 |
                      uVar2 & 0x100000) >> 0x14) * 4) |
            *(uint *)(&DAT_145d84240 + (ulonglong)(((uVar2 & 0x1e00) >> 1 | uVar2 & 0xc0) >> 6) * 4)
            | *(uint *)(&DAT_145d84340 +
                       (ulonglong)((uVar2 & 0x1e000 | (uVar2 & 0xc0000) >> 1) >> 0xd) * 4) |
            *(uint *)(&DAT_145d84140 + (ulonglong)(uVar2 & 0x3f) * 4);
    uVar7 = *(uint *)(&DAT_145d84640 + (ulonglong)((uVar3 & 0x180 | (uVar3 & 0x3c00) >> 1) >> 7) * 4
                     ) |
            *(uint *)(&DAT_145d84840 +
                     (ulonglong)
                     ((uVar3 & 0x1e00000 | (uVar7 & 0xfffffff | uVar3 & 0xc000000) >> 1) >> 0x15) *
                     4) | *(uint *)(&DAT_145d84740 + (ulonglong)((uVar3 & 0x1f8000) >> 0xf) * 4) |
            *(uint *)(&DAT_145d84540 + (ulonglong)(uVar3 & 0x3f) * 4);
    iVar1 = piVar4[-1];
    *param_2 = (uVar7 & 0xffff) >> 0xe | (uVar8 & 0xffff | uVar7 << 0x10) << 2;
    param_2[1] = uVar7 >> 0x1a | (uVar8 >> 0x10 | uVar7 & 0xffff0000) << 6;
    if (iVar1 == 0) {
      uVar2 = uVar2 << 0x1b | uVar9 >> 1;
      uVar3 = uVar3 << 0x1b;
      uVar5 = uVar5 >> 1;
    }
    else {
      uVar2 = uVar2 << 0x1a | uVar9 >> 2;
      uVar3 = uVar3 << 0x1a;
      uVar5 = uVar5 >> 2;
    }
    uVar8 = uVar2 & 0xfffffff;
    uVar9 = uVar3 & 0xfffffff | uVar5;
    uVar7 = uVar8 >> 1;
    uVar7 = *(uint *)(&DAT_145d84440 +
                     (ulonglong)
                     (((uVar2 & 0xc00000 | uVar7 & 0x7000000) >> 1 | uVar2 & 0x100000) >> 0x14) * 4)
            | *(uint *)(&DAT_145d84240 + (ulonglong)((uVar7 & 0xf00 | uVar2 & 0xc0) >> 6) * 4) |
            *(uint *)(&DAT_145d84340 + (ulonglong)((uVar2 & 0x1e000 | uVar7 & 0x60000) >> 0xd) * 4)
            | *(uint *)(&DAT_145d84140 + (ulonglong)(uVar2 & 0x3f) * 4);
    uVar3 = *(uint *)(&DAT_145d84840 +
                     (ulonglong)
                     ((uVar5 & 0x1e00000 | (uVar3 & 0xfffffff | uVar5 & 0xc000000) >> 1) >> 0x15) *
                     4) |
            *(uint *)(&DAT_145d84640 + (ulonglong)((uVar5 & 0x180 | (uVar5 & 0x3c00) >> 1) >> 7) * 4
                     ) | *(uint *)(&DAT_145d84740 + (ulonglong)((uVar5 & 0x1f8000) >> 0xf) * 4) |
            *(uint *)(&DAT_145d84540 + (ulonglong)(uVar5 & 0x3f) * 4);
    iVar1 = *piVar4;
    param_2[2] = (uVar3 & 0xffff) >> 0xe | (uVar7 & 0xffff | uVar3 << 0x10) << 2;
    param_2[3] = uVar3 >> 0x1a | (uVar7 >> 0x10 | uVar3 & 0xffff0000) << 6;
    if (iVar1 == 0) {
      uVar2 = uVar2 << 0x1b;
      uVar8 = uVar8 >> 1;
      uVar5 = uVar5 << 0x1b;
      uVar9 = uVar9 >> 1;
    }
    else {
      uVar2 = uVar2 << 0x1a;
      uVar8 = uVar8 >> 2;
      uVar5 = uVar5 << 0x1a;
      uVar9 = uVar9 >> 2;
    }
    uVar6 = uVar2 & 0xfffffff | uVar8;
    uVar7 = uVar5 & 0xfffffff | uVar9;
    uVar3 = *(uint *)(&DAT_145d84440 +
                     (ulonglong)
                     (((uVar8 & 0xc00000 | (uVar2 & 0xfffffff | uVar8 & 0xe000000) >> 1) >> 1 |
                      uVar8 & 0x100000) >> 0x14) * 4) |
            *(uint *)(&DAT_145d84240 + (ulonglong)(((uVar8 & 0x1e00) >> 1 | uVar8 & 0xc0) >> 6) * 4)
            | *(uint *)(&DAT_145d84340 +
                       (ulonglong)((uVar8 & 0x1e000 | (uVar8 & 0xc0000) >> 1) >> 0xd) * 4) |
            *(uint *)(&DAT_145d84140 + (ulonglong)(uVar8 & 0x3f) * 4);
    uVar2 = *(uint *)(&DAT_145d84840 +
                     (ulonglong)
                     ((uVar9 & 0x1e00000 | (uVar5 & 0xfffffff | uVar9 & 0xc000000) >> 1) >> 0x15) *
                     4) |
            *(uint *)(&DAT_145d84640 + (ulonglong)((uVar9 & 0x180 | (uVar9 & 0x3c00) >> 1) >> 7) * 4
                     ) | *(uint *)(&DAT_145d84740 + (ulonglong)((uVar9 & 0x1f8000) >> 0xf) * 4) |
            *(uint *)(&DAT_145d84540 + (ulonglong)(uVar9 & 0x3f) * 4);
    iVar1 = piVar4[1];
    param_2[4] = (uVar2 & 0xffff) >> 0xe | (uVar3 & 0xffff | uVar2 << 0x10) << 2;
    param_2[5] = uVar2 >> 0x1a | (uVar3 >> 0x10 | uVar2 & 0xffff0000) << 6;
    if (iVar1 == 0) {
      uVar8 = uVar8 << 0x1b;
      uVar6 = uVar6 >> 1;
      uVar9 = uVar9 << 0x1b;
      uVar7 = uVar7 >> 1;
    }
    else {
      uVar8 = uVar8 << 0x1a;
      uVar6 = uVar6 >> 2;
      uVar9 = uVar9 << 0x1a;
      uVar7 = uVar7 >> 2;
    }
    uVar2 = uVar8 & 0xfffffff | uVar6;
    uVar3 = uVar9 & 0xfffffff | uVar7;
    piVar4 = piVar4 + 4;
    uVar8 = *(uint *)(&DAT_145d84440 +
                     (ulonglong)
                     (((uVar6 & 0xc00000 | (uVar8 & 0xfffffff | uVar6 & 0xe000000) >> 1) >> 1 |
                      uVar6 & 0x100000) >> 0x14) * 4) |
            *(uint *)(&DAT_145d84240 + (ulonglong)(((uVar6 & 0x1e00) >> 1 | uVar6 & 0xc0) >> 6) * 4)
            | *(uint *)(&DAT_145d84340 +
                       (ulonglong)((uVar6 & 0x1e000 | (uVar6 & 0xc0000) >> 1) >> 0xd) * 4) |
            *(uint *)(&DAT_145d84140 + (ulonglong)(uVar6 & 0x3f) * 4);
    uVar7 = *(uint *)(&DAT_145d84640 + (ulonglong)(((uVar7 & 0x3c00) >> 1 | uVar7 & 0x180) >> 7) * 4
                     ) |
            *(uint *)(&DAT_145d84840 +
                     (ulonglong)
                     (((uVar9 & 0xfffffff | uVar7 & 0xc000000) >> 1 | uVar7 & 0x1e00000) >> 0x15) *
                     4) | *(uint *)(&DAT_145d84740 + (ulonglong)((uVar7 & 0x1f8000) >> 0xf) * 4) |
            *(uint *)(&DAT_145d84540 + (ulonglong)(uVar7 & 0x3f) * 4);
    param_2[6] = (uVar7 & 0xffff) >> 0xe | (uVar8 & 0xffff | uVar7 << 0x10) << 2;
    param_2[7] = uVar7 >> 0x1a | (uVar8 >> 0x10 | uVar7 & 0xffff0000) << 6;
    param_2 = param_2 + 8;
  } while ((longlong)piVar4 < 0x145d84988);
  return;
}



// FUNCTION 143d42850 DES_set_odd_parity body=94 status=ok
// SIG undefined DES_set_odd_parity(void)

void DES_set_odd_parity(byte *param_1)

{
  *param_1 = (&DAT_145d83fc0)[*param_1];
  param_1[1] = (&DAT_145d83fc0)[param_1[1]];
  param_1[2] = (&DAT_145d83fc0)[param_1[2]];
  param_1[3] = (&DAT_145d83fc0)[param_1[3]];
  param_1[4] = (&DAT_145d83fc0)[param_1[4]];
  param_1[5] = (&DAT_145d83fc0)[param_1[5]];
  param_1[6] = (&DAT_145d83fc0)[param_1[6]];
  param_1[7] = (&DAT_145d83fc0)[param_1[7]];
  return;
}



// FUNCTION 143d428b0 DES_cfb64_encrypt body=554 status=ok
// SIG undefined DES_cfb64_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DES_cfb64_encrypt(byte *param_1,byte *param_2,int param_3,undefined8 param_4,
                      undefined4 *param_5,uint *param_6,int param_7)

{
  byte bVar1;
  undefined4 *puVar2;
  uint *puVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  
  puVar3 = param_6;
  puVar2 = param_5;
  uVar5 = *param_6;
  if (param_3 != 0) {
    if (param_7 == 0) {
      do {
        if (uVar5 == 0) {
          param_5._0_4_ = *puVar2;
          param_5._4_4_ = puVar2[1];
          DES_encrypt1(&param_5,param_4,1);
          *(undefined1 *)puVar2 = param_5._0_1_;
          *(char *)((longlong)puVar2 + 1) = (char)((uint)param_5._0_4_ >> 8);
          *(char *)((longlong)puVar2 + 2) = (char)((uint)param_5._0_4_ >> 0x10);
          *(char *)((longlong)puVar2 + 3) = (char)((uint)param_5._0_4_ >> 0x18);
          *(undefined1 *)(puVar2 + 1) = param_5._4_1_;
          *(char *)((longlong)puVar2 + 5) = (char)((uint)param_5._4_4_ >> 8);
          *(char *)((longlong)puVar2 + 6) = (char)((uint)param_5._4_4_ >> 0x10);
          *(char *)((longlong)puVar2 + 7) = (char)((uint)param_5._4_4_ >> 0x18);
        }
        bVar4 = *param_1;
        param_1 = param_1 + 1;
        bVar1 = *(byte *)((longlong)(int)uVar5 + (longlong)puVar2);
        *(byte *)((longlong)(int)uVar5 + (longlong)puVar2) = bVar4;
        *param_2 = bVar4 ^ bVar1;
        param_2 = param_2 + 1;
        uVar5 = uVar5 + 1 & 7;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    else {
      lVar6 = (longlong)param_1 - (longlong)param_2;
      do {
        if (uVar5 == 0) {
          param_5._0_4_ = *puVar2;
          param_5._4_4_ = puVar2[1];
          DES_encrypt1(&param_5,param_4,1);
          *(undefined1 *)puVar2 = param_5._0_1_;
          *(char *)((longlong)puVar2 + 1) = (char)((uint)param_5._0_4_ >> 8);
          *(char *)((longlong)puVar2 + 2) = (char)((uint)param_5._0_4_ >> 0x10);
          *(char *)((longlong)puVar2 + 3) = (char)((uint)param_5._0_4_ >> 0x18);
          *(undefined1 *)(puVar2 + 1) = param_5._4_1_;
          *(char *)((longlong)puVar2 + 5) = (char)((uint)param_5._4_4_ >> 8);
          *(char *)((longlong)puVar2 + 6) = (char)((uint)param_5._4_4_ >> 0x10);
          *(char *)((longlong)puVar2 + 7) = (char)((uint)param_5._4_4_ >> 0x18);
        }
        bVar4 = param_2[lVar6] ^ *(byte *)((longlong)(int)uVar5 + (longlong)puVar2);
        *param_2 = bVar4;
        param_2 = param_2 + 1;
        *(byte *)((longlong)(int)uVar5 + (longlong)puVar2) = bVar4;
        uVar5 = uVar5 + 1 & 7;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  *puVar3 = uVar5;
  return;
}



// FUNCTION 143d42ae0 DES_ofb64_encrypt body=483 status=ok
// SIG undefined DES_ofb64_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void DES_ofb64_encrypt(byte *param_1,longlong param_2,int param_3,undefined8 param_4,uint *param_5,
                      uint *param_6)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_88 [32];
  uint local_68;
  uint local_64;
  undefined8 local_60;
  uint *local_58;
  uint *local_50;
  byte local_48 [4];
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  puVar1 = param_5 + 1;
  uVar3 = *param_6;
  iVar7 = 0;
  local_50 = param_5;
  uVar6 = *param_5;
  local_58 = param_6;
  uVar2 = *puVar1;
  local_48[0] = (byte)*param_5;
  local_48[1] = *(undefined1 *)((longlong)param_5 + 1);
  local_48[2] = *(undefined1 *)((longlong)param_5 + 2);
  local_48[3] = *(undefined1 *)((longlong)param_5 + 3);
  local_43 = *(undefined1 *)((longlong)param_5 + 5);
  local_42 = *(undefined1 *)((longlong)param_5 + 6);
  local_44 = (char)*puVar1;
  local_41 = *(undefined1 *)((longlong)param_5 + 7);
  if (param_3 != 0) {
    param_2 = param_2 - (longlong)param_1;
    uVar4 = (ushort)*puVar1 & 0xff;
    uVar5 = (uint3)*param_5 & 0xff;
    local_68 = uVar6;
    local_64 = uVar2;
    local_60 = param_4;
    do {
      param_3 = param_3 + -1;
      if (uVar3 == 0) {
        DES_encrypt1(&local_68,param_4,1);
        uVar5 = local_68 & 0xff;
        uVar4 = local_64 & 0xff;
        local_48[1] = (char)(local_68 >> 8);
        local_48[2] = (char)(local_68 >> 0x10);
        local_48[3] = (char)(local_68 >> 0x18);
        local_43 = (char)(local_64 >> 8);
        local_42 = (char)(local_64 >> 0x10);
        local_41 = (char)(local_64 >> 0x18);
        iVar7 = iVar7 + 1;
        local_48[0] = (byte)local_68;
        local_44 = (undefined1)local_64;
        uVar6 = local_68;
        uVar2 = local_64;
      }
      param_1[param_2] = local_48[(int)uVar3] ^ *param_1;
      param_1 = param_1 + 1;
      uVar3 = uVar3 + 1 & 7;
    } while (param_3 != 0);
    param_6 = local_58;
    if (iVar7 != 0) {
      *(char *)local_50 = (char)uVar5;
      *(undefined1 *)((longlong)param_5 + 1) = (char)(uVar6 >> 8);
      *(char *)((longlong)param_5 + 2) = (char)(uVar6 >> 0x10);
      *(char *)((longlong)param_5 + 3) = (char)(uVar6 >> 0x18);
      *(char *)(param_5 + 1) = (char)uVar4;
      *(char *)((longlong)param_5 + 5) = (char)(uVar2 >> 8);
      *(char *)((longlong)param_5 + 6) = (char)(uVar2 >> 0x10);
      *(char *)((longlong)param_5 + 7) = (char)(uVar2 >> 0x18);
    }
  }
  *param_6 = uVar3;
  return;
}



// FUNCTION 143d42cd0 DES_ecb3_encrypt body=234 status=ok
// SIG undefined DES_ecb3_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DES_ecb3_encrypt(undefined4 *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,int param_6)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  local_res8 = *param_1;
  local_resc = param_1[1];
  if (param_6 == 0) {
    DES_decrypt3(&local_res8,param_3,param_4,param_5);
  }
  else {
    DES_encrypt3();
  }
  *param_2 = (undefined1)local_res8;
  param_2[1] = (char)((uint)local_res8 >> 8);
  param_2[2] = (char)((uint)local_res8 >> 0x10);
  param_2[3] = (char)((uint)local_res8 >> 0x18);
  param_2[4] = (undefined1)local_resc;
  param_2[5] = (char)((uint)local_resc >> 8);
  param_2[6] = (char)((uint)local_resc >> 0x10);
  param_2[7] = (char)((uint)local_resc >> 0x18);
  return;
}



// FUNCTION 143d42dc0 DES_ede3_cfb64_encrypt body=635 status=ok
// SIG undefined DES_ede3_cfb64_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DES_ede3_cfb64_encrypt
               (byte *param_1,byte *param_2,int param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined4 *param_7,uint *param_8,int param_9)

{
  byte bVar1;
  undefined4 *puVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  
  puVar2 = param_7;
  uVar4 = *param_8;
  if (param_3 != 0) {
    if (param_9 == 0) {
      do {
        if (uVar4 == 0) {
          param_7._0_4_ = *puVar2;
          param_7._4_4_ = puVar2[1];
          DES_encrypt3(&param_7,param_4,param_5,param_6);
          *(undefined1 *)puVar2 = param_7._0_1_;
          *(char *)((longlong)puVar2 + 1) = (char)((uint)param_7._0_4_ >> 8);
          *(char *)((longlong)puVar2 + 2) = (char)((uint)param_7._0_4_ >> 0x10);
          *(char *)((longlong)puVar2 + 3) = (char)((uint)param_7._0_4_ >> 0x18);
          *(undefined1 *)(puVar2 + 1) = param_7._4_1_;
          *(char *)((longlong)puVar2 + 5) = (char)((uint)param_7._4_4_ >> 8);
          *(char *)((longlong)puVar2 + 6) = (char)((uint)param_7._4_4_ >> 0x10);
          *(char *)((longlong)puVar2 + 7) = (char)((uint)param_7._4_4_ >> 0x18);
        }
        bVar3 = *param_1;
        param_1 = param_1 + 1;
        bVar1 = *(byte *)((longlong)(int)uVar4 + (longlong)puVar2);
        *(byte *)((longlong)(int)uVar4 + (longlong)puVar2) = bVar3;
        *param_2 = bVar3 ^ bVar1;
        param_2 = param_2 + 1;
        uVar4 = uVar4 + 1 & 7;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    else {
      lVar5 = (longlong)param_1 - (longlong)param_2;
      do {
        if (uVar4 == 0) {
          param_7._0_4_ = *puVar2;
          param_7._4_4_ = puVar2[1];
          DES_encrypt3(&param_7,param_4,param_5,param_6);
          *(undefined1 *)puVar2 = param_7._0_1_;
          *(char *)((longlong)puVar2 + 1) = (char)((uint)param_7._0_4_ >> 8);
          *(char *)((longlong)puVar2 + 2) = (char)((uint)param_7._0_4_ >> 0x10);
          *(char *)((longlong)puVar2 + 3) = (char)((uint)param_7._0_4_ >> 0x18);
          *(undefined1 *)(puVar2 + 1) = param_7._4_1_;
          *(char *)((longlong)puVar2 + 5) = (char)((uint)param_7._4_4_ >> 8);
          *(char *)((longlong)puVar2 + 6) = (char)((uint)param_7._4_4_ >> 0x10);
          *(char *)((longlong)puVar2 + 7) = (char)((uint)param_7._4_4_ >> 0x18);
        }
        bVar3 = param_2[lVar5] ^ *(byte *)((longlong)(int)uVar4 + (longlong)puVar2);
        *param_2 = bVar3;
        param_2 = param_2 + 1;
        *(byte *)((longlong)(int)uVar4 + (longlong)puVar2) = bVar3;
        uVar4 = uVar4 + 1 & 7;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  *param_8 = uVar4;
  return;
}



// FUNCTION 143d43040 FUN_143d43040 body=1961 status=ok
// SIG undefined FUN_143d43040(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143d43040(longlong param_1,byte *param_2,int param_3,uint param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,uint *param_8,int param_9)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  byte bVar16;
  uint uVar17;
  undefined1 auStack_c8 [32];
  byte local_a8;
  byte local_a7;
  byte local_a6;
  int local_a4;
  int local_a0;
  int local_9c;
  uint local_98;
  uint local_94;
  int local_90;
  int local_8c;
  uint local_88;
  uint local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 *local_68;
  ulonglong local_60;
  uint *local_58;
  byte local_50 [4];
  byte local_4c;
  byte local_4b;
  byte local_4a;
  byte local_49;
  byte local_48;
  byte local_47;
  byte local_46;
  byte local_45;
  byte local_44;
  byte local_43;
  byte local_42;
  byte local_41;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  uVar17 = param_3 + 7U >> 3;
  local_80 = param_7;
  local_58 = param_8;
  local_78 = param_5;
  local_70 = param_6;
  if (param_3 < 0x41) {
    local_68 = (undefined1 *)((longlong)param_8 + 1);
    uVar11 = *param_8;
    uVar10 = param_8[1];
    if (uVar17 <= param_4) {
      uVar7 = param_3 >> 0x1f & 7;
      uVar3 = param_3 + uVar7;
      local_a0 = (uVar3 & 7) - uVar7;
      local_9c = (int)uVar3 >> 3;
      local_90 = param_3;
      local_84 = uVar17;
      if (param_9 == 0) {
        local_a4 = 8 - local_a0;
        local_60 = (ulonglong)uVar17;
        iVar2 = uVar17 - 1;
        local_8c = local_9c;
        do {
          local_9c = iVar2;
          uVar17 = local_84;
          local_88 = param_4 - local_84;
          local_98 = uVar11;
          local_94 = uVar10;
          DES_encrypt3(&local_98,local_78,local_70,local_80);
          iVar2 = local_a0;
          uVar3 = 0;
          uVar8 = (ulonglong)uVar17;
          uVar17 = 0;
          param_1 = param_1 + uVar8;
          switch(local_9c) {
          case 7:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar17 = (uint)*pbVar1 << 0x18;
          case 6:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar17 = uVar17 | (uint)*pbVar1 << 0x10;
          case 5:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar17 = uVar17 | (uint)*pbVar1 << 8;
          case 4:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar17 = uVar17 | *pbVar1;
          case 3:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar3 = (uint)*pbVar1 << 0x18;
          case 2:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar3 = uVar3 | (uint)*pbVar1 << 0x10;
          case 1:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar3 = uVar3 | (uint)*pbVar1 << 8;
          case 0:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar3 = uVar3 | *pbVar1;
          default:
            param_1 = param_1 + uVar8;
            uVar7 = uVar10;
            uVar13 = uVar3;
            if ((local_90 != 0x20) && (uVar7 = uVar3, uVar13 = uVar17, local_90 != 0x40)) {
              local_50[0] = (byte)uVar11;
              local_50[1] = (byte)(uVar11 >> 8);
              local_4c = (byte)uVar10;
              local_50[2] = (byte)(uVar11 >> 0x10);
              local_4b = (byte)(uVar10 >> 8);
              local_4a = (byte)(uVar10 >> 0x10);
              local_47 = (byte)(uVar3 >> 8);
              local_46 = (byte)(uVar3 >> 0x10);
              local_45 = (byte)(uVar3 >> 0x18);
              local_43 = (byte)(uVar17 >> 8);
              local_42 = (byte)(uVar17 >> 0x10);
              local_50[3] = (byte)(uVar11 >> 0x18);
              local_41 = (byte)(uVar17 >> 0x18);
              local_49 = (byte)(uVar10 >> 0x18);
              local_48 = (byte)uVar3;
              local_44 = (byte)uVar17;
              _guard_xfg_dispatch_icall_nop
                        (local_50,local_50 + local_8c,(ulonglong)(local_a0 != 0) + 8);
              if (iVar2 == 0) {
                local_a8 = local_50[0];
                bVar6 = local_50[1];
                bVar15 = local_50[3];
                bVar16 = local_4c;
                bVar12 = local_50[2];
                bVar5 = local_4b;
                bVar9 = local_49;
                bVar4 = local_4a;
              }
              else {
                bVar4 = (byte)iVar2;
                bVar5 = (byte)local_a4;
                local_a8 = local_50[0] << (bVar4 & 0x1f) | local_50[1] >> (bVar5 & 0x1f);
                local_a6 = local_4a << (bVar4 & 0x1f) | local_49 >> (bVar5 & 0x1f);
                local_a7 = local_49 << ((byte)local_a0 & 0x1f) | local_48 >> (bVar5 & 0x1f);
                bVar6 = local_50[1] << (bVar4 & 0x1f) | local_50[2] >> (bVar5 & 0x1f);
                bVar15 = local_50[3] << (bVar4 & 0x1f) | local_4c >> (bVar5 & 0x1f);
                bVar16 = local_4c << (bVar4 & 0x1f) | local_4b >> (bVar5 & 0x1f);
                bVar12 = local_50[2] << (bVar4 & 0x1f) | local_50[3] >> (bVar5 & 0x1f);
                bVar5 = local_4b << (bVar4 & 0x1f) | local_4a >> (bVar5 & 0x1f);
                bVar9 = local_a7;
                bVar4 = local_a6;
              }
              uVar8 = local_60;
              uVar7 = CONCAT31(CONCAT21(CONCAT11(bVar15,bVar12),bVar6),local_a8);
              uVar13 = CONCAT31(CONCAT21(CONCAT11(bVar9,bVar4),bVar5),bVar16);
            }
          }
          uVar10 = uVar13;
          uVar11 = uVar7;
          uVar3 = uVar3 ^ local_98;
          param_2 = param_2 + uVar8;
          uVar17 = uVar17 ^ local_94;
          switch(local_9c) {
          case 7:
            param_2 = param_2 + -1;
            *param_2 = (byte)(uVar17 >> 0x18);
          case 6:
            param_2 = param_2 + -1;
            *param_2 = (byte)(uVar17 >> 0x10);
          case 5:
            param_2 = param_2 + -1;
            *param_2 = (byte)(uVar17 >> 8);
          case 4:
            param_2 = param_2 + -1;
            *param_2 = (byte)uVar17;
          case 3:
            param_2 = param_2 + -1;
            *param_2 = (byte)(uVar3 >> 0x18);
          case 2:
            param_2 = param_2 + -1;
            *param_2 = (byte)(uVar3 >> 0x10);
          case 1:
            param_2 = param_2 + -1;
            *param_2 = (byte)(uVar3 >> 8);
          case 0:
            param_2 = param_2 + -1;
            *param_2 = (byte)uVar3;
          }
          param_2 = param_2 + uVar8;
          iVar2 = local_9c;
          param_4 = local_88;
        } while (local_84 <= local_88);
      }
      else {
        local_a4 = 8 - local_a0;
        do {
          param_4 = param_4 - uVar17;
          local_98 = uVar11;
          local_94 = uVar10;
          DES_encrypt3(&local_98,local_78,local_70,local_80);
          iVar2 = local_a0;
          uVar8 = (ulonglong)uVar17;
          param_1 = param_1 + uVar8;
          uVar14 = 0;
          uVar13 = 0;
          uVar7 = 0;
          uVar3 = 0;
          switch(uVar17 - 1) {
          case 7:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar13 = (uint)*pbVar1 << 0x18;
          case 6:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar14 = uVar13 | (uint)*pbVar1 << 0x10;
          case 5:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar14 = uVar14 | (uint)*pbVar1 << 8;
          case 4:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar14 = uVar14 | *pbVar1;
          case 3:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar3 = (uint)*pbVar1 << 0x18;
          case 2:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar7 = uVar3 | (uint)*pbVar1 << 0x10;
          case 1:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar7 = uVar7 | (uint)*pbVar1 << 8;
          case 0:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar7 = uVar7 | *pbVar1;
          }
          uVar7 = uVar7 ^ local_98;
          param_1 = param_1 + uVar8;
          uVar14 = uVar14 ^ local_94;
          param_2 = param_2 + uVar8;
          bVar4 = (byte)(uVar14 >> 8);
          bVar6 = (byte)(uVar14 >> 0x10);
          bVar15 = (byte)(uVar14 >> 0x18);
          bVar16 = (byte)(uVar7 >> 8);
          bVar12 = (byte)(uVar7 >> 0x10);
          bVar5 = (byte)(uVar7 >> 0x18);
          switch(uVar17 - 1) {
          case 7:
            param_2 = param_2 + -1;
            *param_2 = bVar15;
          case 6:
            param_2 = param_2 + -1;
            *param_2 = bVar6;
          case 5:
            param_2 = param_2 + -1;
            *param_2 = bVar4;
          case 4:
            param_2 = param_2 + -1;
            *param_2 = (byte)uVar14;
          case 3:
            param_2 = param_2 + -1;
            *param_2 = bVar5;
          case 2:
            param_2 = param_2 + -1;
            *param_2 = bVar12;
          case 1:
            param_2 = param_2 + -1;
            *param_2 = bVar16;
          case 0:
            param_2 = param_2 + -1;
            *param_2 = (byte)uVar7;
          }
          param_2 = param_2 + uVar8;
          uVar3 = uVar10;
          uVar13 = uVar7;
          if ((local_90 != 0x20) && (uVar3 = uVar7, uVar13 = uVar14, local_90 != 0x40)) {
            local_50[1] = (byte)(uVar11 >> 8);
            local_50[2] = (byte)(uVar11 >> 0x10);
            local_4b = (byte)(uVar10 >> 8);
            local_4a = (byte)(uVar10 >> 0x10);
            local_50[0] = (byte)uVar11;
            local_4c = (byte)uVar10;
            local_50[3] = (byte)(uVar11 >> 0x18);
            local_49 = (byte)(uVar10 >> 0x18);
            local_48 = (byte)uVar7;
            local_47 = bVar16;
            local_46 = bVar12;
            local_45 = bVar5;
            local_44 = (byte)uVar14;
            local_43 = bVar4;
            local_42 = bVar6;
            local_41 = bVar15;
            _guard_xfg_dispatch_icall_nop
                      (local_50,local_50 + local_9c,(ulonglong)(local_a0 != 0) + 8);
            if (iVar2 == 0) {
              local_a8 = local_50[0];
              bVar6 = local_50[1];
              bVar15 = local_50[3];
              bVar16 = local_4c;
              bVar12 = local_50[2];
              bVar5 = local_4b;
              bVar9 = local_49;
              bVar4 = local_4a;
            }
            else {
              bVar4 = (byte)iVar2;
              bVar5 = (byte)local_a4;
              local_a8 = local_50[0] << (bVar4 & 0x1f) | local_50[1] >> (bVar5 & 0x1f);
              local_a7 = local_4a << (bVar4 & 0x1f) | local_49 >> (bVar5 & 0x1f);
              local_a6 = local_49 << ((byte)local_a0 & 0x1f) | local_48 >> (bVar5 & 0x1f);
              bVar6 = local_50[1] << (bVar4 & 0x1f) | local_50[2] >> (bVar5 & 0x1f);
              bVar15 = local_50[3] << (bVar4 & 0x1f) | local_4c >> (bVar5 & 0x1f);
              bVar16 = local_4c << (bVar4 & 0x1f) | local_4b >> (bVar5 & 0x1f);
              bVar12 = local_50[2] << (bVar4 & 0x1f) | local_50[3] >> (bVar5 & 0x1f);
              bVar5 = local_4b << (bVar4 & 0x1f) | local_4a >> (bVar5 & 0x1f);
              bVar9 = local_a6;
              bVar4 = local_a7;
            }
            uVar3 = CONCAT31(CONCAT21(CONCAT11(bVar15,bVar12),bVar6),local_a8);
            uVar13 = CONCAT31(CONCAT21(CONCAT11(bVar9,bVar4),bVar5),bVar16);
          }
          uVar10 = uVar13;
          uVar11 = uVar3;
        } while (uVar17 <= param_4);
      }
    }
    *(char *)local_58 = (char)uVar11;
    *local_68 = (char)(uVar11 >> 8);
    local_68[1] = (char)(uVar11 >> 0x10);
    local_68[2] = (char)(uVar11 >> 0x18);
    local_68[3] = (char)uVar10;
    local_68[4] = (char)(uVar10 >> 8);
    local_68[5] = (char)(uVar10 >> 0x10);
    local_68[6] = (char)(uVar10 >> 0x18);
  }
  return;
}



// FUNCTION 143d43870 DES_ede3_ofb64_encrypt body=549 status=ok
// SIG undefined DES_ede3_ofb64_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void DES_ede3_ofb64_encrypt
               (byte *param_1,longlong param_2,int param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined4 *param_7,uint *param_8)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  uint *local_58;
  undefined4 *local_50;
  byte local_48 [4];
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_70 = param_5;
  iVar4 = 0;
  local_60 = (undefined1 *)((longlong)param_7 + 1);
  uVar1 = *param_8;
  local_50 = param_7;
  local_68 = param_6;
  uVar3 = *param_7;
  local_58 = param_8;
  uVar2 = param_7[1];
  local_48[1] = (char)((ushort)*(undefined2 *)param_7 >> 8);
  local_48[2] = *(undefined1 *)((longlong)param_7 + 2);
  local_48[3] = *(undefined1 *)((longlong)param_7 + 3);
  local_43 = *(undefined1 *)((longlong)param_7 + 5);
  local_42 = *(undefined1 *)((longlong)param_7 + 6);
  local_48[0] = (byte)*(undefined2 *)param_7;
  local_44 = *(undefined1 *)(param_7 + 1);
  local_41 = *(undefined1 *)((longlong)param_7 + 7);
  if (param_3 != 0) {
    param_2 = param_2 - (longlong)param_1;
    local_78 = uVar3;
    local_74 = uVar2;
    do {
      param_3 = param_3 + -1;
      if (uVar1 == 0) {
        DES_encrypt3(&local_78,param_4,param_5,param_6);
        local_48[1] = (char)((uint)local_78 >> 8);
        local_48[2] = (char)((uint)local_78 >> 0x10);
        local_48[3] = (char)((uint)local_78 >> 0x18);
        local_43 = (char)((uint)local_74 >> 8);
        local_42 = (char)((uint)local_74 >> 0x10);
        local_41 = (char)((uint)local_74 >> 0x18);
        iVar4 = iVar4 + 1;
        local_48[0] = (byte)local_78;
        local_44 = (char)local_74;
        uVar3 = local_78;
        uVar2 = local_74;
      }
      param_1[param_2] = local_48[(int)uVar1] ^ *param_1;
      param_1 = param_1 + 1;
      uVar1 = uVar1 + 1 & 7;
    } while (param_3 != 0);
    param_8 = local_58;
    if (iVar4 != 0) {
      *(char *)local_50 = (char)uVar3;
      *local_60 = (char)((uint)uVar3 >> 8);
      local_60[1] = (char)((uint)uVar3 >> 0x10);
      local_60[2] = (char)((uint)uVar3 >> 0x18);
      local_60[3] = (char)uVar2;
      local_60[4] = (char)((uint)uVar2 >> 8);
      local_60[5] = (char)((uint)uVar2 >> 0x10);
      local_60[6] = (char)((uint)uVar2 >> 0x18);
    }
  }
  *param_8 = uVar1;
  return;
}



// FUNCTION 143d43aa0 SHA1 body=147 status=ok
// SIG undefined SHA1(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined * SHA1(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [96];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x143d43aae;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  puVar2 = &DAT_146bcb960;
  if (param_3 != (undefined *)0x0) {
    puVar2 = param_3;
  }
  iVar1 = SHA1_Init(local_88);
  if (iVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    SHA1_Update(local_88,param_1,param_2);
    SHA1_Final(puVar2,local_88);
    FUN_14004ff40(local_88,0x60);
  }
  return puVar2;
}



// FUNCTION 143d43b40 IDEA_ecb_encrypt body=183 status=ok
// SIG undefined IDEA_ecb_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void IDEA_ecb_encrypt(byte *param_1,undefined1 *param_2,undefined8 param_3)

{
  uint local_res8;
  uint local_resc;
  
  local_res8 = (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 |
               (uint)param_1[3];
  local_resc = (uint)CONCAT11(param_1[6],param_1[7]) |
               (uint)param_1[4] << 0x18 | (uint)param_1[5] << 0x10;
  IDEA_encrypt(&local_res8,param_3);
  *param_2 = (char)(local_res8 >> 0x18);
  param_2[1] = (char)(local_res8 >> 0x10);
  param_2[2] = (char)(local_res8 >> 8);
  param_2[3] = (undefined1)local_res8;
  param_2[4] = (char)(local_resc >> 0x18);
  param_2[5] = (char)(local_resc >> 0x10);
  param_2[6] = (char)(local_resc >> 8);
  param_2[7] = (undefined1)local_resc;
  return;
}



// FUNCTION 143d43c00 IDEA_set_decrypt_key body=335 status=ok
// SIG undefined IDEA_set_decrypt_key(void)

void IDEA_set_decrypt_key(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar4 = 0;
  piVar3 = (int *)(param_1 + 0xc0);
  piVar6 = param_2;
  do {
    if (*piVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar3;
      iVar1 = 1;
      iVar9 = 0x10001;
      iVar5 = 0;
      while( true ) {
        iVar7 = iVar1;
        iVar8 = iVar2;
        iVar2 = iVar9 % iVar8;
        if (iVar2 == 0) break;
        iVar1 = iVar5 - ((iVar9 - iVar2) / iVar8) * iVar7;
        iVar9 = iVar8;
        iVar5 = iVar7;
      }
      iVar2 = iVar7 + 0x10001;
      if (-1 < iVar7) {
        iVar2 = iVar7;
      }
    }
    *piVar6 = iVar2;
    piVar6[1] = -piVar3[2] & 0xffff;
    piVar6[2] = -piVar3[1] & 0xffff;
    if (piVar3[3] == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = piVar3[3];
      iVar1 = 1;
      iVar9 = 0x10001;
      iVar5 = 0;
      while( true ) {
        iVar7 = iVar1;
        iVar8 = iVar2;
        iVar2 = iVar9 % iVar8;
        if (iVar2 == 0) break;
        iVar1 = iVar5 - ((iVar9 - iVar2) / iVar8) * iVar7;
        iVar9 = iVar8;
        iVar5 = iVar7;
      }
      iVar2 = iVar7 + 0x10001;
      if (-1 < iVar7) {
        iVar2 = iVar7;
      }
    }
    piVar6[3] = iVar2;
    if (iVar4 == 8) break;
    piVar6[4] = piVar3[-2];
    iVar4 = iVar4 + 1;
    piVar6[5] = piVar3[-1];
    piVar6 = piVar6 + 6;
    piVar3 = piVar3 + -6;
  } while (iVar4 < 9);
  iVar4 = param_2[1];
  param_2[1] = param_2[2];
  param_2[2] = iVar4;
  iVar4 = param_2[0x31];
  param_2[0x31] = param_2[0x32];
  param_2[0x32] = iVar4;
  return;
}



// FUNCTION 143d43d50 IDEA_set_encrypt_key body=398 status=ok
// SIG undefined IDEA_set_encrypt_key(void)

void IDEA_set_encrypt_key(byte *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  
  bVar1 = *param_1;
  puVar6 = param_2 + 2;
  *param_2 = (uint)bVar1 << 8;
  *param_2 = (uint)CONCAT11(bVar1,param_1[1]);
  bVar1 = param_1[2];
  param_2[1] = (uint)bVar1 << 8;
  param_2[1] = (uint)CONCAT11(bVar1,param_1[3]);
  bVar1 = param_1[4];
  *puVar6 = (uint)bVar1 << 8;
  *puVar6 = (uint)CONCAT11(bVar1,param_1[5]);
  bVar1 = param_1[6];
  param_2[3] = (uint)bVar1 << 8;
  param_2[3] = (uint)CONCAT11(bVar1,param_1[7]);
  bVar1 = param_1[8];
  param_2[4] = (uint)bVar1 << 8;
  param_2[4] = (uint)CONCAT11(bVar1,param_1[9]);
  bVar1 = param_1[10];
  param_2[5] = (uint)bVar1 << 8;
  param_2[5] = (uint)CONCAT11(bVar1,param_1[0xb]);
  bVar1 = param_1[0xc];
  param_2[6] = (uint)bVar1 << 8;
  param_2[6] = (uint)CONCAT11(bVar1,param_1[0xd]);
  bVar1 = param_1[0xe];
  param_2[7] = (uint)bVar1 << 8;
  param_2[7] = (uint)CONCAT11(bVar1,param_1[0xf]);
  iVar5 = 0;
  do {
    uVar2 = *puVar6;
    uVar3 = puVar6[-1];
    param_2[8] = (uVar2 >> 7 | uVar3 << 9) & 0xffff;
    uVar4 = puVar6[1];
    param_2[9] = (uVar4 >> 7 | uVar2 << 9) & 0xffff;
    uVar2 = puVar6[2];
    param_2[10] = (uVar4 << 9 | uVar2 >> 7) & 0xffff;
    uVar4 = puVar6[3];
    param_2[0xb] = (uVar4 >> 7 | uVar2 << 9) & 0xffff;
    uVar2 = puVar6[4];
    param_2[0xc] = (uVar4 << 9 | uVar2 >> 7) & 0xffff;
    uVar4 = puVar6[5];
    param_2[0xd] = (uVar4 >> 7 | uVar2 << 9) & 0xffff;
    if (4 < iVar5) {
      return;
    }
    uVar2 = puVar6[-2];
    iVar5 = iVar5 + 1;
    puVar6 = puVar6 + 8;
    param_2[0xe] = (uVar4 << 9 | uVar2 >> 7) & 0xffff;
    param_2[0xf] = (uVar2 << 9 | uVar3 >> 7) & 0xffff;
    param_2 = param_2 + 8;
  } while (iVar5 < 6);
  return;
}



// FUNCTION 143d43ee0 FUN_143d43ee0 body=1243 status=ok
// SIG undefined FUN_143d43ee0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d43ee0(byte *param_1,undefined1 *param_2,uint param_3,undefined8 param_4,
                  undefined1 *param_5,int param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  uint local_38;
  uint local_34;
  undefined1 *local_30;
  
  local_30 = (undefined1 *)0x143d43f07;
  uVar11 = (uint)CONCAT11(*param_5,param_5[1]) << 0x10 | (uint)(byte)param_5[2] << 8 |
           (uint)(byte)param_5[3];
  uVar10 = (uint)(byte)param_5[4] << 0x18 | (uint)(byte)param_5[5] << 0x10 |
           (uint)(byte)param_5[6] << 8 | (uint)(byte)param_5[7];
  if (param_6 == 0) {
    iVar5 = param_3 - 8;
    local_30 = param_5;
    if (-1 < iVar5) {
      uVar8 = (ulonglong)(param_3 >> 3);
      iVar5 = iVar5 + (param_3 >> 3) * -8;
      uVar6 = uVar11;
      uVar7 = uVar10;
      do {
        uVar11 = (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 |
                 (uint)param_1[3];
        uVar10 = (uint)param_1[4] << 0x18 | (uint)param_1[5] << 0x10 | (uint)param_1[6] << 8 |
                 (uint)param_1[7];
        param_1 = param_1 + 8;
        local_38 = uVar11;
        local_34 = uVar10;
        IDEA_encrypt(&local_38,param_4);
        local_38 = local_38 ^ uVar6;
        local_34 = local_34 ^ uVar7;
        *param_2 = (char)(local_38 >> 0x18);
        param_2[1] = (char)(local_38 >> 0x10);
        param_2[2] = (char)(local_38 >> 8);
        param_2[3] = (char)local_38;
        param_2[4] = (char)(local_34 >> 0x18);
        param_2[5] = (char)(local_34 >> 0x10);
        param_2[6] = (char)(local_34 >> 8);
        param_2[7] = (char)local_34;
        param_2 = param_2 + 8;
        uVar8 = uVar8 - 1;
        uVar6 = uVar11;
        uVar7 = uVar10;
      } while (uVar8 != 0);
    }
    param_5 = local_30;
    puVar9 = local_30;
    local_38 = uVar11;
    local_34 = uVar10;
    if (iVar5 != -8) {
      uVar7 = (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 |
              (uint)param_1[3];
      uVar6 = (uint)param_1[4] << 0x18 | (uint)param_1[5] << 0x10 |
              (uint)CONCAT11(param_1[6],param_1[7]);
      local_38 = uVar7;
      local_34 = uVar6;
      IDEA_encrypt(&local_38,param_4);
      uVar11 = local_38 ^ uVar11;
      uVar10 = local_34 ^ uVar10;
      param_2 = param_2 + (iVar5 + 8);
      puVar9 = local_30;
      local_38 = uVar7;
      local_34 = uVar6;
      switch(iVar5) {
      case 0:
        param_2 = param_2 + -1;
        *param_2 = (char)uVar10;
      case -1:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar10 >> 8);
      case -2:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar10 >> 0x10);
      case -3:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar10 >> 0x18);
      case -4:
        param_2 = param_2 + -1;
        *param_2 = (char)uVar11;
      case -5:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar11 >> 8);
      case -6:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar11 >> 0x10);
      case -7:
        param_2[-1] = (char)(uVar11 >> 0x18);
      }
    }
  }
  else {
    iVar5 = param_3 - 8;
    local_38 = uVar11;
    local_34 = uVar10;
    if (-1 < iVar5) {
      uVar8 = (ulonglong)(param_3 >> 3);
      iVar5 = iVar5 + (param_3 >> 3) * -8;
      do {
        pbVar1 = param_1 + 4;
        pbVar2 = param_1 + 5;
        local_38 = ((uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 |
                   (uint)param_1[3]) ^ local_38;
        pbVar3 = param_1 + 6;
        pbVar4 = param_1 + 7;
        param_1 = param_1 + 8;
        local_34 = ((uint)*pbVar1 << 0x18 | (uint)*pbVar2 << 0x10 | (uint)*pbVar3 << 8 |
                   (uint)*pbVar4) ^ local_34;
        IDEA_encrypt(&local_38,param_4);
        *param_2 = (char)(local_38 >> 0x18);
        param_2[1] = (char)(local_38 >> 0x10);
        param_2[2] = (char)(local_38 >> 8);
        param_2[3] = (char)local_38;
        param_2[4] = (char)(local_34 >> 0x18);
        param_2[5] = (char)(local_34 >> 0x10);
        param_2[6] = (char)(local_34 >> 8);
        param_2[7] = (char)local_34;
        param_2 = param_2 + 8;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    puVar9 = param_5;
    if (iVar5 != -8) {
      param_1 = param_1 + (iVar5 + 8);
      uVar11 = 0;
      uVar10 = 0;
      switch(iVar5) {
      case 0:
        uVar11 = (uint)param_1[-1];
        param_1 = param_1 + -1;
      case -1:
        pbVar1 = param_1 + -1;
        param_1 = param_1 + -1;
        uVar11 = uVar11 | (uint)*pbVar1 << 8;
      case -2:
        pbVar1 = param_1 + -1;
        param_1 = param_1 + -1;
        uVar11 = uVar11 | (uint)*pbVar1 << 0x10;
      case -3:
        pbVar1 = param_1 + -1;
        param_1 = param_1 + -1;
        uVar11 = uVar11 | (uint)*pbVar1 << 0x18;
      case -4:
        uVar10 = (uint)param_1[-1];
        param_1 = param_1 + -1;
      case -5:
        pbVar1 = param_1 + -1;
        param_1 = param_1 + -1;
        uVar10 = uVar10 | (uint)*pbVar1 << 8;
      case -6:
        pbVar1 = param_1 + -1;
        param_1 = param_1 + -1;
        uVar10 = uVar10 | (uint)*pbVar1 << 0x10;
      case -7:
        uVar10 = uVar10 | (uint)param_1[-1] << 0x18;
      default:
        local_38 = uVar10 ^ local_38;
        local_34 = uVar11 ^ local_34;
        IDEA_encrypt(&local_38,param_4);
        *param_2 = (char)(local_38 >> 0x18);
        param_2[1] = (char)(local_38 >> 0x10);
        param_2[2] = (char)(local_38 >> 8);
        param_2[3] = (char)local_38;
        param_2[4] = (char)(local_34 >> 0x18);
        param_2[5] = (char)(local_34 >> 0x10);
        param_2[6] = (char)(local_34 >> 8);
        param_2[7] = (char)local_34;
      }
    }
  }
  *puVar9 = (char)(local_38 >> 0x18);
  param_5[1] = (char)(local_38 >> 0x10);
  param_5[2] = (char)(local_38 >> 8);
  param_5[3] = (char)local_38;
  param_5[4] = (char)(local_34 >> 0x18);
  param_5[5] = (char)(local_34 >> 0x10);
  param_5[6] = (char)(local_34 >> 8);
  param_5[7] = (char)local_34;
  return;
}



// FUNCTION 143d44400 IDEA_encrypt body=2038 status=ok
// SIG undefined IDEA_encrypt(void)

void IDEA_encrypt(uint *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  uVar1 = *param_1 >> 0x10;
  uVar7 = *param_2 * uVar1;
  if (uVar7 == 0) {
    uVar7 = 1 - *param_2;
  }
  else {
    uVar7 = (uVar7 & 0xffff) - (uVar7 >> 0x10);
    uVar1 = uVar7 >> 0x10;
  }
  uVar6 = *param_1 + param_2[1];
  uVar4 = (param_1[1] >> 0x10) + param_2[2];
  uVar2 = param_1[1] & 0xffff;
  uVar8 = param_2[3] * uVar2;
  if (uVar8 == 0) {
    uVar8 = 1 - param_2[3];
  }
  else {
    uVar8 = (uVar8 & 0xffff) - (uVar8 >> 0x10);
    uVar2 = uVar8 >> 0x10;
  }
  uVar11 = (uVar4 ^ uVar7 - uVar1) & 0xffff;
  uVar9 = param_2[4] * uVar11;
  if (uVar9 == 0) {
    iVar10 = (1 - param_2[4]) - uVar11;
  }
  else {
    uVar9 = (uVar9 & 0xffff) - (uVar9 >> 0x10);
    iVar10 = uVar9 - (uVar9 >> 0x10);
  }
  uVar9 = (uVar8 - uVar2 ^ uVar6) + iVar10 & 0xffff;
  uVar11 = param_2[5] * uVar9;
  if (uVar11 == 0) {
    uVar11 = 1 - param_2[5];
  }
  else {
    uVar11 = (uVar11 & 0xffff) - (uVar11 >> 0x10);
    uVar9 = uVar11 >> 0x10;
  }
  uVar11 = uVar11 - uVar9;
  uVar1 = (uVar11 ^ uVar7 - uVar1) & 0xffff;
  uVar7 = param_2[6] * uVar1;
  if (uVar7 == 0) {
    uVar7 = 1 - param_2[6];
  }
  else {
    uVar7 = (uVar7 & 0xffff) - (uVar7 >> 0x10);
    uVar1 = uVar7 >> 0x10;
  }
  uVar4 = (uVar11 ^ uVar4) + param_2[7];
  uVar6 = (iVar10 + uVar11 ^ uVar6) + param_2[8];
  uVar2 = (uVar8 - uVar2 ^ iVar10 + uVar11) & 0xffff;
  uVar8 = param_2[9] * uVar2;
  if (uVar8 == 0) {
    uVar8 = 1 - param_2[9];
  }
  else {
    uVar8 = (uVar8 & 0xffff) - (uVar8 >> 0x10);
    uVar2 = uVar8 >> 0x10;
  }
  uVar9 = (uVar6 ^ uVar7 - uVar1) & 0xffff;
  uVar11 = param_2[10] * uVar9;
  if (uVar11 == 0) {
    uVar11 = 1 - param_2[10];
  }
  else {
    uVar11 = (uVar11 & 0xffff) - (uVar11 >> 0x10);
    uVar9 = uVar11 >> 0x10;
  }
  uVar3 = (uVar8 - uVar2 ^ uVar4) + (uVar11 - uVar9) & 0xffff;
  uVar5 = param_2[0xb] * uVar3;
  if (uVar5 == 0) {
    uVar5 = 1 - param_2[0xb];
  }
  else {
    uVar5 = (uVar5 & 0xffff) - (uVar5 >> 0x10);
    uVar3 = uVar5 >> 0x10;
  }
  uVar5 = uVar5 - uVar3;
  uVar9 = (uVar11 - uVar9) + uVar5;
  uVar1 = (uVar5 ^ uVar7 - uVar1) & 0xffff;
  uVar7 = param_2[0xc] * uVar1;
  if (uVar7 == 0) {
    uVar7 = 1 - param_2[0xc];
  }
  else {
    uVar7 = (uVar7 & 0xffff) - (uVar7 >> 0x10);
    uVar1 = uVar7 >> 0x10;
  }
  uVar6 = (uVar5 ^ uVar6) + param_2[0xd];
  uVar11 = (uVar9 ^ uVar4) + param_2[0xe];
  uVar2 = (uVar8 - uVar2 ^ uVar9) & 0xffff;
  uVar4 = param_2[0xf] * uVar2;
  if (uVar4 == 0) {
    uVar4 = 1 - param_2[0xf];
  }
  else {
    uVar4 = (uVar4 & 0xffff) - (uVar4 >> 0x10);
    uVar2 = uVar4 >> 0x10;
  }
  uVar8 = (uVar11 ^ uVar7 - uVar1) & 0xffff;
  uVar9 = param_2[0x10] * uVar8;
  if (uVar9 == 0) {
    uVar9 = 1 - param_2[0x10];
  }
  else {
    uVar9 = (uVar9 & 0xffff) - (uVar9 >> 0x10);
    uVar8 = uVar9 >> 0x10;
  }
  uVar3 = (uVar4 - uVar2 ^ uVar6) + (uVar9 - uVar8) & 0xffff;
  uVar5 = param_2[0x11] * uVar3;
  if (uVar5 == 0) {
    uVar5 = 1 - param_2[0x11];
  }
  else {
    uVar5 = (uVar5 & 0xffff) - (uVar5 >> 0x10);
    uVar3 = uVar5 >> 0x10;
  }
  uVar5 = uVar5 - uVar3;
  uVar8 = (uVar9 - uVar8) + uVar5;
  uVar1 = (uVar5 ^ uVar7 - uVar1) & 0xffff;
  uVar7 = param_2[0x12] * uVar1;
  if (uVar7 == 0) {
    uVar7 = 1 - param_2[0x12];
  }
  else {
    uVar7 = (uVar7 & 0xffff) - (uVar7 >> 0x10);
    uVar1 = uVar7 >> 0x10;
  }
  uVar9 = (uVar5 ^ uVar11) + param_2[0x13];
  uVar6 = (uVar8 ^ uVar6) + param_2[0x14];
  uVar2 = (uVar4 - uVar2 ^ uVar8) & 0xffff;
  uVar4 = param_2[0x15] * uVar2;
  if (uVar4 == 0) {
    uVar4 = 1 - param_2[0x15];
  }
  else {
    uVar4 = (uVar4 & 0xffff) - (uVar4 >> 0x10);
    uVar2 = uVar4 >> 0x10;
  }
  uVar8 = (uVar6 ^ uVar7 - uVar1) & 0xffff;
  uVar11 = param_2[0x16] * uVar8;
  if (uVar11 == 0) {
    uVar11 = 1 - param_2[0x16];
  }
  else {
    uVar11 = (uVar11 & 0xffff) - (uVar11 >> 0x10);
    uVar8 = uVar11 >> 0x10;
  }
  uVar3 = (uVar4 - uVar2 ^ uVar9) + (uVar11 - uVar8) & 0xffff;
  uVar5 = param_2[0x17] * uVar3;
  if (uVar5 == 0) {
    uVar5 = 1 - param_2[0x17];
  }
  else {
    uVar5 = (uVar5 & 0xffff) - (uVar5 >> 0x10);
    uVar3 = uVar5 >> 0x10;
  }
  uVar5 = uVar5 - uVar3;
  uVar8 = (uVar11 - uVar8) + uVar5;
  uVar1 = (uVar5 ^ uVar7 - uVar1) & 0xffff;
  uVar7 = param_2[0x18] * uVar1;
  if (uVar7 == 0) {
    uVar7 = 1 - param_2[0x18];
  }
  else {
    uVar7 = (uVar7 & 0xffff) - (uVar7 >> 0x10);
    uVar1 = uVar7 >> 0x10;
  }
  uVar6 = (uVar5 ^ uVar6) + param_2[0x19];
  uVar9 = (uVar8 ^ uVar9) + param_2[0x1a];
  uVar2 = (uVar4 - uVar2 ^ uVar8) & 0xffff;
  uVar4 = param_2[0x1b] * uVar2;
  if (uVar4 == 0) {
    uVar4 = 1 - param_2[0x1b];
  }
  else {
    uVar4 = (uVar4 & 0xffff) - (uVar4 >> 0x10);
    uVar2 = uVar4 >> 0x10;
  }
  uVar8 = (uVar9 ^ uVar7 - uVar1) & 0xffff;
  uVar11 = param_2[0x1c] * uVar8;
  if (uVar11 == 0) {
    uVar11 = 1 - param_2[0x1c];
  }
  else {
    uVar11 = (uVar11 & 0xffff) - (uVar11 >> 0x10);
    uVar8 = uVar11 >> 0x10;
  }
  uVar3 = (uVar4 - uVar2 ^ uVar6) + (uVar11 - uVar8) & 0xffff;
  uVar5 = param_2[0x1d] * uVar3;
  if (uVar5 == 0) {
    uVar5 = 1 - param_2[0x1d];
  }
  else {
    uVar5 = (uVar5 & 0xffff) - (uVar5 >> 0x10);
    uVar3 = uVar5 >> 0x10;
  }
  uVar5 = uVar5 - uVar3;
  uVar8 = (uVar11 - uVar8) + uVar5;
  uVar1 = (uVar5 ^ uVar7 - uVar1) & 0xffff;
  uVar7 = param_2[0x1e] * uVar1;
  if (uVar7 == 0) {
    uVar7 = 1 - param_2[0x1e];
  }
  else {
    uVar7 = (uVar7 & 0xffff) - (uVar7 >> 0x10);
    uVar1 = uVar7 >> 0x10;
  }
  uVar9 = (uVar5 ^ uVar9) + param_2[0x1f];
  uVar6 = (uVar8 ^ uVar6) + param_2[0x20];
  uVar2 = (uVar4 - uVar2 ^ uVar8) & 0xffff;
  uVar4 = param_2[0x21] * uVar2;
  if (uVar4 == 0) {
    uVar4 = 1 - param_2[0x21];
  }
  else {
    uVar4 = (uVar4 & 0xffff) - (uVar4 >> 0x10);
    uVar2 = uVar4 >> 0x10;
  }
  uVar8 = (uVar6 ^ uVar7 - uVar1) & 0xffff;
  uVar11 = param_2[0x22] * uVar8;
  if (uVar11 == 0) {
    uVar11 = 1 - param_2[0x22];
  }
  else {
    uVar11 = (uVar11 & 0xffff) - (uVar11 >> 0x10);
    uVar8 = uVar11 >> 0x10;
  }
  uVar3 = (uVar4 - uVar2 ^ uVar9) + (uVar11 - uVar8) & 0xffff;
  uVar5 = param_2[0x23] * uVar3;
  if (uVar5 == 0) {
    uVar5 = 1 - param_2[0x23];
  }
  else {
    uVar5 = (uVar5 & 0xffff) - (uVar5 >> 0x10);
    uVar3 = uVar5 >> 0x10;
  }
  uVar5 = uVar5 - uVar3;
  uVar8 = (uVar11 - uVar8) + uVar5;
  uVar1 = (uVar5 ^ uVar7 - uVar1) & 0xffff;
  uVar7 = param_2[0x24] * uVar1;
  if (uVar7 == 0) {
    uVar7 = 1 - param_2[0x24];
  }
  else {
    uVar7 = (uVar7 & 0xffff) - (uVar7 >> 0x10);
    uVar1 = uVar7 >> 0x10;
  }
  uVar6 = (uVar5 ^ uVar6) + param_2[0x25];
  uVar9 = (uVar8 ^ uVar9) + param_2[0x26];
  uVar2 = (uVar4 - uVar2 ^ uVar8) & 0xffff;
  uVar4 = param_2[0x27] * uVar2;
  if (uVar4 == 0) {
    uVar4 = 1 - param_2[0x27];
  }
  else {
    uVar4 = (uVar4 & 0xffff) - (uVar4 >> 0x10);
    uVar2 = uVar4 >> 0x10;
  }
  uVar8 = (uVar9 ^ uVar7 - uVar1) & 0xffff;
  uVar11 = param_2[0x28] * uVar8;
  if (uVar11 == 0) {
    uVar11 = 1 - param_2[0x28];
  }
  else {
    uVar11 = (uVar11 & 0xffff) - (uVar11 >> 0x10);
    uVar8 = uVar11 >> 0x10;
  }
  uVar3 = (uVar4 - uVar2 ^ uVar6) + (uVar11 - uVar8) & 0xffff;
  uVar5 = param_2[0x29] * uVar3;
  if (uVar5 == 0) {
    uVar5 = 1 - param_2[0x29];
  }
  else {
    uVar5 = (uVar5 & 0xffff) - (uVar5 >> 0x10);
    uVar3 = uVar5 >> 0x10;
  }
  uVar5 = uVar5 - uVar3;
  uVar8 = (uVar11 - uVar8) + uVar5;
  uVar1 = (uVar5 ^ uVar7 - uVar1) & 0xffff;
  uVar7 = param_2[0x2a] * uVar1;
  if (uVar7 == 0) {
    uVar7 = 1 - param_2[0x2a];
  }
  else {
    uVar7 = (uVar7 & 0xffff) - (uVar7 >> 0x10);
    uVar1 = uVar7 >> 0x10;
  }
  uVar9 = (uVar5 ^ uVar9) + param_2[0x2b];
  uVar6 = (uVar8 ^ uVar6) + param_2[0x2c];
  uVar2 = (uVar4 - uVar2 ^ uVar8) & 0xffff;
  uVar4 = param_2[0x2d] * uVar2;
  if (uVar4 == 0) {
    uVar4 = 1 - param_2[0x2d];
  }
  else {
    uVar4 = (uVar4 & 0xffff) - (uVar4 >> 0x10);
    uVar2 = uVar4 >> 0x10;
  }
  uVar8 = (uVar6 ^ uVar7 - uVar1) & 0xffff;
  uVar11 = param_2[0x2e] * uVar8;
  if (uVar11 == 0) {
    uVar11 = 1 - param_2[0x2e];
  }
  else {
    uVar11 = (uVar11 & 0xffff) - (uVar11 >> 0x10);
    uVar8 = uVar11 >> 0x10;
  }
  uVar3 = (uVar4 - uVar2 ^ uVar9) + (uVar11 - uVar8) & 0xffff;
  uVar5 = param_2[0x2f] * uVar3;
  if (uVar5 == 0) {
    uVar5 = 1 - param_2[0x2f];
  }
  else {
    uVar5 = (uVar5 & 0xffff) - (uVar5 >> 0x10);
    uVar3 = uVar5 >> 0x10;
  }
  uVar5 = uVar5 - uVar3;
  uVar8 = (uVar11 - uVar8) + uVar5;
  uVar1 = (uVar5 ^ uVar7 - uVar1) & 0xffff;
  uVar7 = param_2[0x30] * uVar1;
  if (uVar7 == 0) {
    uVar7 = 1 - param_2[0x30];
  }
  else {
    uVar7 = (uVar7 & 0xffff) - (uVar7 >> 0x10);
    uVar1 = uVar7 >> 0x10;
  }
  uVar2 = (uVar4 - uVar2 ^ uVar8) & 0xffff;
  iVar10 = param_2[0x32];
  uVar4 = param_2[0x33] * uVar2;
  if (uVar4 == 0) {
    uVar4 = 1 - param_2[0x33];
  }
  else {
    uVar4 = (uVar4 & 0xffff) - (uVar4 >> 0x10);
    uVar2 = uVar4 >> 0x10;
  }
  *param_1 = param_2[0x31] + (uVar8 ^ uVar9) & 0xffff | (uVar7 - uVar1) * 0x10000;
  param_1[1] = (iVar10 + (uVar5 ^ uVar6)) * 0x10000 | uVar4 - uVar2 & 0xffff;
  return;
}



// FUNCTION 143d44c00 IDEA_cfb64_encrypt body=546 status=ok
// SIG undefined IDEA_cfb64_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void IDEA_cfb64_encrypt(byte *param_1,byte *param_2,int param_3,undefined8 param_4,
                       undefined1 *param_5,uint *param_6,int param_7)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  uint *puVar4;
  uint uVar5;
  longlong lVar6;
  
  puVar4 = param_6;
  puVar3 = param_5;
  uVar5 = *param_6;
  if (param_3 != 0) {
    if (param_7 == 0) {
      do {
        if (uVar5 == 0) {
          param_5._0_4_ =
               (uint)CONCAT11(*puVar3,puVar3[1]) << 0x10 | (uint)(byte)puVar3[2] << 8 |
               (uint)(byte)puVar3[3];
          param_5._4_4_ =
               (uint)CONCAT11(puVar3[6],puVar3[7]) |
               (uint)(byte)puVar3[4] << 0x18 | (uint)(byte)puVar3[5] << 0x10;
          IDEA_encrypt(&param_5,param_4);
          *puVar3 = (char)((uint)param_5 >> 0x18);
          puVar3[1] = (char)((uint)param_5 >> 0x10);
          puVar3[2] = (char)((uint)param_5 >> 8);
          puVar3[3] = param_5._0_1_;
          puVar3[4] = (char)(param_5._4_4_ >> 0x18);
          puVar3[5] = (char)(param_5._4_4_ >> 0x10);
          puVar3[6] = (char)(param_5._4_4_ >> 8);
          puVar3[7] = param_5._4_1_;
        }
        bVar1 = *param_1;
        param_1 = param_1 + 1;
        bVar2 = puVar3[(int)uVar5];
        puVar3[(int)uVar5] = bVar1;
        *param_2 = bVar1 ^ bVar2;
        param_2 = param_2 + 1;
        uVar5 = uVar5 + 1 & 7;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    else {
      lVar6 = (longlong)param_1 - (longlong)param_2;
      do {
        if (uVar5 == 0) {
          param_5._0_4_ =
               (uint)CONCAT11(*puVar3,puVar3[1]) << 0x10 | (uint)(byte)puVar3[2] << 8 |
               (uint)(byte)puVar3[3];
          param_5._4_4_ =
               (uint)CONCAT11(puVar3[6],puVar3[7]) |
               (uint)(byte)puVar3[4] << 0x18 | (uint)(byte)puVar3[5] << 0x10;
          IDEA_encrypt(&param_5,param_4);
          *puVar3 = (char)((uint)param_5 >> 0x18);
          puVar3[1] = (char)((uint)param_5 >> 0x10);
          puVar3[2] = (char)((uint)param_5 >> 8);
          puVar3[3] = param_5._0_1_;
          puVar3[4] = (char)(param_5._4_4_ >> 0x18);
          puVar3[5] = (char)(param_5._4_4_ >> 0x10);
          puVar3[6] = (char)(param_5._4_4_ >> 8);
          puVar3[7] = param_5._4_1_;
        }
        bVar1 = param_2[lVar6];
        bVar2 = puVar3[(int)uVar5];
        *param_2 = bVar1 ^ bVar2;
        param_2 = param_2 + 1;
        puVar3[(int)uVar5] = bVar1 ^ bVar2;
        uVar5 = uVar5 + 1 & 7;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  *puVar4 = uVar5;
  return;
}



// FUNCTION 143d44e30 IDEA_ofb64_encrypt body=492 status=ok
// SIG undefined IDEA_ofb64_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void IDEA_ofb64_encrypt(byte *param_1,longlong param_2,int param_3,undefined8 param_4,byte *param_5,
                       uint *param_6)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_88 [32];
  uint local_68;
  uint local_64;
  undefined8 local_60;
  uint *local_58;
  byte *local_50;
  byte local_48 [4];
  byte local_44;
  byte local_43;
  byte local_42;
  byte local_41;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_50 = param_5;
  iVar6 = 0;
  local_48[1] = param_5[1];
  uVar2 = *param_6;
  uVar4 = (uint)param_5[3];
  uVar5 = (uint)*param_5 << 0x18 | (uint)local_48[1] << 0x10 | (uint)param_5[2] << 8 | uVar4;
  local_58 = param_6;
  uVar1 = (uint)CONCAT11(param_5[6],param_5[7]);
  local_64 = (uint)param_5[4] << 0x18 | (uint)param_5[5] << 0x10 | uVar1;
  uVar3 = (ulonglong)local_64;
  local_48[3] = param_5[3];
  local_48[0] = *param_5;
  local_48[2] = param_5[2];
  local_44 = param_5[4];
  local_43 = param_5[5];
  local_42 = param_5[6];
  local_41 = param_5[7];
  if (param_3 != 0) {
    param_2 = param_2 - (longlong)param_1;
    uVar1 = uVar1 & 0xff;
    local_68 = uVar5;
    local_60 = param_4;
    do {
      param_3 = param_3 + -1;
      if (uVar2 == 0) {
        IDEA_encrypt(&local_68,param_4);
        uVar3 = (ulonglong)local_64;
        uVar4 = local_68 & 0xff;
        uVar1 = local_64 & 0xff;
        local_48[0] = (byte)(local_68 >> 0x18);
        local_48[1] = (byte)(local_68 >> 0x10);
        local_48[2] = (byte)(local_68 >> 8);
        local_44 = (byte)(local_64 >> 0x18);
        local_43 = (byte)(local_64 >> 0x10);
        local_42 = (byte)(local_64 >> 8);
        iVar6 = iVar6 + 1;
        local_48[3] = (byte)local_68;
        local_41 = (byte)local_64;
        uVar5 = local_68;
      }
      param_1[param_2] = local_48[(int)uVar2] ^ *param_1;
      param_1 = param_1 + 1;
      uVar2 = uVar2 + 1 & 7;
    } while (param_3 != 0);
    param_6 = local_58;
    if (iVar6 != 0) {
      *local_50 = (byte)(uVar5 >> 0x18);
      param_5[1] = (byte)(uVar5 >> 0x10);
      param_5[2] = (byte)(uVar5 >> 8);
      param_5[3] = (byte)uVar4;
      param_5[4] = (byte)(uVar3 >> 0x18);
      param_5[5] = (byte)(uVar3 >> 0x10);
      param_5[6] = (byte)(uVar3 >> 8);
      param_5[7] = (byte)uVar1;
    }
  }
  *param_6 = uVar2;
  return;
}



// FUNCTION 143d45020 RC2_set_key body=875 status=ok
// SIG undefined RC2_set_key(void)

void RC2_set_key(char *param_1,int param_2,longlong param_3,int param_4)

{
  byte *pbVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  char *pcVar6;
  byte *pbVar7;
  uint *puVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  ushort *puVar12;
  int iVar13;
  
  *param_1 = '\0';
  iVar13 = 0x80;
  if (param_2 < 0x81) {
    iVar13 = param_2;
  }
  lVar5 = (longlong)iVar13;
  iVar13 = 0x400;
  if (0 < param_4) {
    iVar13 = param_4;
  }
  if (0x400 < iVar13) {
    iVar13 = 0x400;
  }
  if (0 < lVar5) {
    pcVar6 = param_1;
    lVar10 = lVar5;
    do {
      *pcVar6 = pcVar6[param_3 - (longlong)param_1];
      pcVar6 = pcVar6 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  cVar2 = param_1[lVar5 + -1];
  pcVar6 = param_1;
  for (; lVar5 < 0x80; lVar5 = lVar5 + 1) {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    cVar2 = (&DAT_145d84980)[(byte)(cVar3 + cVar2)];
    param_1[lVar5] = cVar2;
  }
  iVar11 = iVar13 + 7 >> 3;
  iVar9 = 0x80 - iVar11;
  lVar5 = (longlong)iVar9;
  pbVar7 = (byte *)(param_1 + lVar5);
  bVar4 = (&DAT_145d84980)[(ulonglong)(uint)(0xff >> (-(char)iVar13 & 7U)) & (ulonglong)*pbVar7];
  *pbVar7 = bVar4;
  if (iVar9 != 0) {
    do {
      pbVar1 = pbVar7 + (longlong)iVar11 + -1;
      pbVar7 = pbVar7 + -1;
      bVar4 = (&DAT_145d84980)[*pbVar1 ^ bVar4];
      *pbVar7 = bVar4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  lVar5 = 2;
  puVar8 = (uint *)(param_1 + 0xfc);
  puVar12 = (ushort *)(param_1 + 0x7e);
  do {
    *puVar8 = (uint)*puVar12;
    puVar8[-1] = (uint)puVar12[-1];
    puVar8[-2] = (uint)puVar12[-2];
    puVar8[-3] = (uint)puVar12[-3];
    puVar8[-4] = (uint)puVar12[-4];
    puVar8[-5] = (uint)puVar12[-5];
    puVar8[-6] = (uint)puVar12[-6];
    puVar8[-7] = (uint)puVar12[-7];
    puVar8[-8] = (uint)puVar12[-8];
    puVar8[-9] = (uint)puVar12[-9];
    puVar8[-10] = (uint)puVar12[-10];
    puVar8[-0xb] = (uint)puVar12[-0xb];
    puVar8[-0xc] = (uint)puVar12[-0xc];
    puVar8[-0xd] = (uint)puVar12[-0xd];
    puVar8[-0xe] = (uint)puVar12[-0xe];
    puVar8[-0xf] = (uint)puVar12[-0xf];
    puVar8[-0x10] = (uint)puVar12[-0x10];
    puVar8[-0x11] = (uint)puVar12[-0x11];
    puVar8[-0x12] = (uint)puVar12[-0x12];
    puVar8[-0x13] = (uint)puVar12[-0x13];
    puVar8[-0x14] = (uint)puVar12[-0x14];
    puVar8[-0x15] = (uint)puVar12[-0x15];
    puVar8[-0x16] = (uint)puVar12[-0x16];
    puVar8[-0x17] = (uint)puVar12[-0x17];
    puVar8[-0x18] = (uint)puVar12[-0x18];
    puVar8[-0x19] = (uint)puVar12[-0x19];
    puVar8[-0x1a] = (uint)puVar12[-0x1a];
    puVar8[-0x1b] = (uint)puVar12[-0x1b];
    puVar8[-0x1c] = (uint)puVar12[-0x1c];
    puVar8[-0x1d] = (uint)puVar12[-0x1d];
    puVar8[-0x1e] = (uint)puVar12[-0x1e];
    puVar8[-0x1f] = (uint)puVar12[-0x1f];
    lVar5 = lVar5 + -1;
    puVar8 = puVar8 + -0x20;
    puVar12 = puVar12 + -0x20;
  } while (lVar5 != 0);
  return;
}



// FUNCTION 143d45390 RC2_ecb_encrypt body=194 status=ok
// SIG undefined RC2_ecb_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RC2_ecb_encrypt(undefined4 *param_1,undefined1 *param_2,undefined8 param_3,int param_4)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  local_res8 = *param_1;
  local_resc = param_1[1];
  if (param_4 == 0) {
    RC2_decrypt(&local_res8,param_3);
  }
  else {
    RC2_encrypt();
  }
  *param_2 = (undefined1)local_res8;
  param_2[1] = (char)((uint)local_res8 >> 8);
  param_2[2] = (char)((uint)local_res8 >> 0x10);
  param_2[3] = (char)((uint)local_res8 >> 0x18);
  param_2[4] = (undefined1)local_resc;
  param_2[5] = (char)((uint)local_resc >> 8);
  param_2[6] = (char)((uint)local_resc >> 0x10);
  param_2[7] = (char)((uint)local_resc >> 0x18);
  return;
}



// FUNCTION 143d45460 FUN_143d45460 body=1243 status=ok
// SIG undefined FUN_143d45460(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d45460(uint *param_1,undefined1 *param_2,uint param_3,undefined8 param_4,uint *param_5,
                  int param_6)

{
  byte *pbVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint local_38;
  uint local_34;
  uint *local_30;
  
  local_30 = (uint *)0x143d45487;
  uVar2 = *param_5;
  uVar5 = param_5[1];
  if (param_6 == 0) {
    iVar4 = param_3 - 8;
    local_30 = param_5;
    if (-1 < iVar4) {
      uVar6 = (ulonglong)(param_3 >> 3);
      iVar4 = iVar4 + (param_3 >> 3) * -8;
      uVar8 = uVar2;
      uVar9 = uVar5;
      do {
        uVar2 = *param_1;
        uVar5 = param_1[1];
        param_1 = param_1 + 2;
        local_38 = uVar2;
        local_34 = uVar5;
        RC2_decrypt(&local_38,param_4);
        local_38 = local_38 ^ uVar8;
        *param_2 = (char)local_38;
        local_34 = local_34 ^ uVar9;
        param_2[1] = (char)(local_38 >> 8);
        param_2[2] = (char)(local_38 >> 0x10);
        param_2[3] = (char)(local_38 >> 0x18);
        param_2[4] = (char)local_34;
        param_2[5] = (char)(local_34 >> 8);
        param_2[6] = (char)(local_34 >> 0x10);
        param_2[7] = (char)(local_34 >> 0x18);
        param_2 = param_2 + 8;
        uVar6 = uVar6 - 1;
        uVar8 = uVar2;
        uVar9 = uVar5;
      } while (uVar6 != 0);
    }
    param_5 = local_30;
    puVar7 = local_30;
    local_38 = uVar2;
    local_34 = uVar5;
    if (iVar4 != -8) {
      uVar8 = *param_1;
      uVar9 = param_1[1];
      local_38 = uVar8;
      local_34 = uVar9;
      RC2_decrypt(&local_38,param_4);
      uVar2 = local_38 ^ uVar2;
      uVar5 = local_34 ^ uVar5;
      param_2 = param_2 + (iVar4 + 8);
      puVar7 = local_30;
      local_38 = uVar8;
      local_34 = uVar9;
      switch(iVar4) {
      case 0:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar5 >> 0x18);
      case -1:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar5 >> 0x10);
      case -2:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar5 >> 8);
      case -3:
        param_2 = param_2 + -1;
        *param_2 = (char)uVar5;
      case -4:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar2 >> 0x18);
      case -5:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar2 >> 0x10);
      case -6:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar2 >> 8);
      case -7:
        param_2[-1] = (char)uVar2;
      }
    }
  }
  else {
    iVar4 = param_3 - 8;
    local_38 = uVar2;
    local_34 = uVar5;
    if (-1 < iVar4) {
      uVar6 = (ulonglong)(param_3 >> 3);
      iVar4 = iVar4 + (param_3 >> 3) * -8;
      do {
        puVar7 = param_1 + 1;
        local_38 = *param_1 ^ local_38;
        param_1 = param_1 + 2;
        local_34 = *puVar7 ^ local_34;
        RC2_encrypt(&local_38,param_4);
        *param_2 = (char)local_38;
        param_2[1] = (char)(local_38 >> 8);
        param_2[2] = (char)(local_38 >> 0x10);
        param_2[3] = (char)(local_38 >> 0x18);
        param_2[4] = (char)local_34;
        param_2[5] = (char)(local_34 >> 8);
        param_2[6] = (char)(local_34 >> 0x10);
        param_2[7] = (char)(local_34 >> 0x18);
        param_2 = param_2 + 8;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    puVar7 = param_5;
    if (iVar4 != -8) {
      lVar3 = (longlong)param_1 + (longlong)(iVar4 + 8);
      uVar2 = 0;
      uVar5 = 0;
      switch(iVar4) {
      case 0:
        pbVar1 = (byte *)(lVar3 + -1);
        lVar3 = lVar3 + -1;
        uVar2 = (uint)*pbVar1 << 0x18;
      case -1:
        pbVar1 = (byte *)(lVar3 + -1);
        lVar3 = lVar3 + -1;
        uVar2 = uVar2 | (uint)*pbVar1 << 0x10;
      case -2:
        pbVar1 = (byte *)(lVar3 + -1);
        lVar3 = lVar3 + -1;
        uVar2 = uVar2 | (uint)*pbVar1 << 8;
      case -3:
        pbVar1 = (byte *)(lVar3 + -1);
        lVar3 = lVar3 + -1;
        uVar2 = uVar2 | *pbVar1;
      case -4:
        pbVar1 = (byte *)(lVar3 + -1);
        lVar3 = lVar3 + -1;
        uVar5 = (uint)*pbVar1 << 0x18;
      case -5:
        pbVar1 = (byte *)(lVar3 + -1);
        lVar3 = lVar3 + -1;
        uVar5 = uVar5 | (uint)*pbVar1 << 0x10;
      case -6:
        pbVar1 = (byte *)(lVar3 + -1);
        lVar3 = lVar3 + -1;
        uVar5 = uVar5 | (uint)*pbVar1 << 8;
      case -7:
        uVar5 = uVar5 | *(byte *)(lVar3 + -1);
      default:
        local_38 = uVar5 ^ local_38;
        local_34 = uVar2 ^ local_34;
        RC2_encrypt(&local_38,param_4);
        *param_2 = (char)local_38;
        param_2[1] = (char)(local_38 >> 8);
        param_2[2] = (char)(local_38 >> 0x10);
        param_2[3] = (char)(local_38 >> 0x18);
        param_2[4] = (char)local_34;
        param_2[5] = (char)(local_34 >> 8);
        param_2[6] = (char)(local_34 >> 0x10);
        param_2[7] = (char)(local_34 >> 0x18);
      }
    }
  }
  *(char *)puVar7 = (char)local_38;
  *(char *)((longlong)param_5 + 1) = (char)(local_38 >> 8);
  *(char *)((longlong)param_5 + 2) = (char)(local_38 >> 0x10);
  *(char *)((longlong)param_5 + 3) = (char)(local_38 >> 0x18);
  *(char *)(param_5 + 1) = (char)local_34;
  *(char *)((longlong)param_5 + 5) = (char)(local_34 >> 8);
  *(char *)((longlong)param_5 + 6) = (char)(local_34 >> 0x10);
  *(char *)((longlong)param_5 + 7) = (char)(local_34 >> 0x18);
  return;
}



// FUNCTION 143d45980 RC2_decrypt body=336 status=ok
// SIG undefined RC2_decrypt(void)

void RC2_decrypt(uint *param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  iVar8 = 3;
  uVar10 = *param_1 & 0xffff;
  uVar9 = *param_1 >> 0x10;
  uVar11 = param_1[1] & 0xffff;
  iVar12 = 5;
  uVar2 = param_1[1] >> 0x10;
  piVar7 = (int *)(param_2 + 0xfc);
  while( true ) {
    do {
      piVar1 = piVar7 + -4;
      uVar3 = (((uVar2 << 0xb | uVar2 >> 5) - (~uVar11 & uVar10)) - (uVar11 & uVar9)) - *piVar7;
      uVar2 = uVar3 & 0xffff;
      uVar4 = (((uVar11 << 0xd | uVar11 >> 3) - (~uVar9 & uVar2)) - (uVar9 & uVar10)) - piVar7[-1];
      uVar11 = uVar4 & 0xffff;
      uVar5 = (((uVar9 << 0xe | uVar9 >> 2) - (~uVar10 & uVar11)) - (uVar2 & uVar10)) - piVar7[-2];
      uVar9 = uVar5 & 0xffff;
      uVar6 = (((uVar10 << 0xf | uVar10 >> 1) - (~uVar2 & uVar9)) - (uVar2 & uVar11)) - piVar7[-3];
      uVar10 = uVar6 & 0xffff;
      iVar12 = iVar12 + -1;
      piVar7 = piVar1;
    } while (iVar12 != 0);
    iVar8 = iVar8 + -1;
    if (iVar8 == 0) break;
    iVar12 = (iVar8 == 2) + 5;
    uVar3 = uVar2 - *(int *)(param_2 + (ulonglong)(uVar4 & 0x3f) * 4);
    uVar2 = uVar3 & 0xffff;
    uVar11 = uVar11 - *(int *)(param_2 + (ulonglong)(uVar5 & 0x3f) * 4) & 0xffff;
    uVar9 = uVar9 - *(int *)(param_2 + (ulonglong)(uVar6 & 0x3f) * 4) & 0xffff;
    uVar10 = uVar10 - *(int *)(param_2 + (ulonglong)(uVar3 & 0x3f) * 4) & 0xffff;
  }
  *param_1 = uVar5 * 0x10000 | uVar10;
  param_1[1] = uVar3 * 0x10000 | uVar11;
  return;
}



// FUNCTION 143d45ad0 RC2_encrypt body=336 status=ok
// SIG undefined RC2_encrypt(void)

void RC2_encrypt(uint *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  
  uVar11 = *param_1;
  iVar9 = 3;
  uVar13 = param_1[1];
  uVar10 = uVar11 >> 0x10;
  uVar3 = uVar13 >> 0x10;
  iVar14 = 5;
  piVar8 = param_2;
  while( true ) {
    do {
      piVar1 = piVar8 + 4;
      uVar4 = (~uVar3 & uVar10) + (uVar3 & uVar13) + *piVar8 + uVar11 & 0xffff;
      uVar2 = uVar4 * 2;
      uVar4 = uVar4 >> 0xf;
      uVar11 = uVar4 | uVar2;
      uVar10 = (~uVar11 & uVar13) + (uVar3 & uVar11) + piVar8[1] + uVar10 & 0xffff;
      uVar10 = uVar10 >> 0xe | uVar10 * 4;
      uVar5 = (~uVar10 & uVar3) + (uVar10 & uVar11) + piVar8[2] + uVar13 & 0xffff;
      uVar12 = uVar5 >> 0xd;
      uVar5 = uVar5 * 8;
      uVar13 = uVar12 | uVar5;
      uVar6 = (~uVar13 & uVar11) + (uVar13 & uVar10) + piVar8[3] + uVar3 & 0xffff;
      uVar7 = uVar6 << 5;
      uVar6 = uVar6 >> 0xb;
      uVar3 = uVar6 | uVar7;
      iVar14 = iVar14 + -1;
      piVar8 = piVar1;
    } while (iVar14 != 0);
    iVar9 = iVar9 + -1;
    if (iVar9 == 0) break;
    iVar14 = (iVar9 == 2) + 5;
    uVar11 = uVar11 + param_2[uVar6 | uVar7 & 0x3f];
    uVar10 = uVar10 + param_2[uVar11 & 0x3f];
    uVar13 = uVar13 + param_2[uVar10 & 0x3f];
    uVar3 = uVar3 + param_2[uVar13 & 0x3f];
  }
  *param_1 = uVar10 << 0x10 | uVar4 | uVar2 & 0xffff;
  param_1[1] = uVar3 << 0x10 | uVar12 | uVar5 & 0xffff;
  return;
}



// FUNCTION 143d45c20 RC2_cfb64_encrypt body=546 status=ok
// SIG undefined RC2_cfb64_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RC2_cfb64_encrypt(byte *param_1,byte *param_2,int param_3,undefined8 param_4,
                      undefined4 *param_5,uint *param_6,int param_7)

{
  byte bVar1;
  undefined4 *puVar2;
  uint *puVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  
  puVar3 = param_6;
  puVar2 = param_5;
  uVar5 = *param_6;
  if (param_3 != 0) {
    if (param_7 == 0) {
      do {
        if (uVar5 == 0) {
          param_5._0_4_ = *puVar2;
          param_5._4_4_ = puVar2[1];
          RC2_encrypt(&param_5,param_4);
          *(undefined1 *)puVar2 = param_5._0_1_;
          *(char *)((longlong)puVar2 + 1) = (char)((uint)param_5._0_4_ >> 8);
          *(char *)((longlong)puVar2 + 2) = (char)((uint)param_5._0_4_ >> 0x10);
          *(char *)((longlong)puVar2 + 3) = (char)((uint)param_5._0_4_ >> 0x18);
          *(undefined1 *)(puVar2 + 1) = param_5._4_1_;
          *(char *)((longlong)puVar2 + 5) = (char)((uint)param_5._4_4_ >> 8);
          *(char *)((longlong)puVar2 + 6) = (char)((uint)param_5._4_4_ >> 0x10);
          *(char *)((longlong)puVar2 + 7) = (char)((uint)param_5._4_4_ >> 0x18);
        }
        bVar4 = *param_1;
        param_1 = param_1 + 1;
        bVar1 = *(byte *)((longlong)(int)uVar5 + (longlong)puVar2);
        *(byte *)((longlong)(int)uVar5 + (longlong)puVar2) = bVar4;
        *param_2 = bVar4 ^ bVar1;
        param_2 = param_2 + 1;
        uVar5 = uVar5 + 1 & 7;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    else {
      lVar6 = (longlong)param_1 - (longlong)param_2;
      do {
        if (uVar5 == 0) {
          param_5._0_4_ = *puVar2;
          param_5._4_4_ = puVar2[1];
          RC2_encrypt(&param_5,param_4);
          *(undefined1 *)puVar2 = param_5._0_1_;
          *(char *)((longlong)puVar2 + 1) = (char)((uint)param_5._0_4_ >> 8);
          *(char *)((longlong)puVar2 + 2) = (char)((uint)param_5._0_4_ >> 0x10);
          *(char *)((longlong)puVar2 + 3) = (char)((uint)param_5._0_4_ >> 0x18);
          *(undefined1 *)(puVar2 + 1) = param_5._4_1_;
          *(char *)((longlong)puVar2 + 5) = (char)((uint)param_5._4_4_ >> 8);
          *(char *)((longlong)puVar2 + 6) = (char)((uint)param_5._4_4_ >> 0x10);
          *(char *)((longlong)puVar2 + 7) = (char)((uint)param_5._4_4_ >> 0x18);
        }
        bVar4 = param_2[lVar6] ^ *(byte *)((longlong)(int)uVar5 + (longlong)puVar2);
        *param_2 = bVar4;
        param_2 = param_2 + 1;
        *(byte *)((longlong)(int)uVar5 + (longlong)puVar2) = bVar4;
        uVar5 = uVar5 + 1 & 7;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  *puVar3 = uVar5;
  return;
}



// FUNCTION 143d45e50 RC2_ofb64_encrypt body=475 status=ok
// SIG undefined RC2_ofb64_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void RC2_ofb64_encrypt(byte *param_1,longlong param_2,int param_3,undefined8 param_4,uint *param_5,
                      uint *param_6)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_88 [32];
  uint local_68;
  uint local_64;
  undefined8 local_60;
  uint *local_58;
  uint *local_50;
  byte local_48 [4];
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  puVar1 = param_5 + 1;
  uVar3 = *param_6;
  iVar7 = 0;
  local_50 = param_5;
  uVar6 = *param_5;
  local_58 = param_6;
  uVar2 = *puVar1;
  local_48[0] = (byte)*param_5;
  local_48[1] = *(undefined1 *)((longlong)param_5 + 1);
  local_48[2] = *(undefined1 *)((longlong)param_5 + 2);
  local_48[3] = *(undefined1 *)((longlong)param_5 + 3);
  local_43 = *(undefined1 *)((longlong)param_5 + 5);
  local_42 = *(undefined1 *)((longlong)param_5 + 6);
  local_44 = (char)*puVar1;
  local_41 = *(undefined1 *)((longlong)param_5 + 7);
  if (param_3 != 0) {
    param_2 = param_2 - (longlong)param_1;
    uVar4 = (ushort)*puVar1 & 0xff;
    uVar5 = (uint3)*param_5 & 0xff;
    local_68 = uVar6;
    local_64 = uVar2;
    local_60 = param_4;
    do {
      param_3 = param_3 + -1;
      if (uVar3 == 0) {
        RC2_encrypt(&local_68,param_4);
        uVar5 = local_68 & 0xff;
        uVar4 = local_64 & 0xff;
        local_48[1] = (char)(local_68 >> 8);
        local_48[2] = (char)(local_68 >> 0x10);
        local_48[3] = (char)(local_68 >> 0x18);
        local_43 = (char)(local_64 >> 8);
        local_42 = (char)(local_64 >> 0x10);
        local_41 = (char)(local_64 >> 0x18);
        iVar7 = iVar7 + 1;
        local_48[0] = (byte)local_68;
        local_44 = (undefined1)local_64;
        uVar6 = local_68;
        uVar2 = local_64;
      }
      param_1[param_2] = local_48[(int)uVar3] ^ *param_1;
      param_1 = param_1 + 1;
      uVar3 = uVar3 + 1 & 7;
    } while (param_3 != 0);
    param_6 = local_58;
    if (iVar7 != 0) {
      *(char *)local_50 = (char)uVar5;
      *(undefined1 *)((longlong)param_5 + 1) = (char)(uVar6 >> 8);
      *(char *)((longlong)param_5 + 2) = (char)(uVar6 >> 0x10);
      *(char *)((longlong)param_5 + 3) = (char)(uVar6 >> 0x18);
      *(char *)(param_5 + 1) = (char)uVar4;
      *(char *)((longlong)param_5 + 5) = (char)(uVar2 >> 8);
      *(char *)((longlong)param_5 + 6) = (char)(uVar2 >> 0x10);
      *(char *)((longlong)param_5 + 7) = (char)(uVar2 >> 0x18);
    }
  }
  *param_6 = uVar3;
  return;
}



// FUNCTION 143d46030 CRYPTO_cbc128_decrypt body=680 status=ok
// SIG undefined CRYPTO_cbc128_decrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void CRYPTO_cbc128_decrypt
               (ulonglong *param_1,ulonglong *param_2,byte *param_3,undefined8 param_4,
               ulonglong *param_5,code *param_6)

{
  byte bVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  longlong lVar7;
  byte *pbVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  if (param_3 != (byte *)0x0) {
    local_40 = DAT_1468387a8 ^ (ulonglong)auStack_88;
    if (param_1 == param_2) {
      if ((byte *)0xf < param_3) {
        uVar6 = (ulonglong)param_3 >> 4;
        param_3 = param_3 + uVar6 * -0x10;
        do {
          (*param_6)(param_1,&local_50,param_4);
          uVar2 = *param_1;
          *param_2 = *param_5 ^ local_50;
          *param_5 = uVar2;
          uVar2 = param_1[1];
          param_1 = param_1 + 2;
          param_2[1] = param_5[1] ^ local_48;
          param_2 = param_2 + 2;
          param_5[1] = uVar2;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
    }
    else {
      puVar10 = param_5;
      if ((byte *)0xf < param_3) {
        uVar6 = (ulonglong)param_3 >> 4;
        param_3 = param_3 + uVar6 * -0x10;
        puVar9 = param_5;
        do {
          puVar10 = param_1;
          (*param_6)(puVar10,param_2,param_4);
          *param_2 = *param_2 ^ *puVar9;
          param_2[1] = param_2[1] ^ puVar9[1];
          param_1 = puVar10 + 2;
          param_2 = param_2 + 2;
          uVar6 = uVar6 - 1;
          puVar9 = puVar10;
        } while (uVar6 != 0);
      }
      uVar3 = *(undefined4 *)((longlong)puVar10 + 4);
      uVar6 = puVar10[1];
      uVar4 = *(undefined4 *)((longlong)puVar10 + 0xc);
      *(int *)param_5 = (int)*puVar10;
      *(undefined4 *)((longlong)param_5 + 4) = uVar3;
      *(int *)(param_5 + 1) = (int)uVar6;
      *(undefined4 *)((longlong)param_5 + 0xc) = uVar4;
    }
    if (param_3 != (byte *)0x0) {
      local_68 = (longlong)param_5 - (longlong)&local_50;
      local_60 = 1 - (longlong)&local_50;
      local_58 = 2 - (longlong)&local_50;
      lVar7 = (longlong)param_2 + 1;
      do {
        (*param_6)(param_1,&local_50,param_4);
        pbVar5 = (byte *)0x0;
        do {
          if (param_3 <= pbVar5) break;
          pbVar8 = (byte *)((longlong)&local_50 + (longlong)pbVar5);
          bVar1 = (pbVar8 + (longlong)param_1)[-((longlong)&local_50 + 1) + 1];
          pbVar8[-((longlong)&local_50 + 1) + lVar7] = *pbVar8 ^ pbVar8[local_68];
          pbVar8[local_68] = bVar1;
          if (param_3 <= pbVar8 + local_60) {
            pbVar5 = pbVar5 + 1;
            break;
          }
          bVar1 = (pbVar5 + 1)[(longlong)param_1];
          pbVar5[lVar7] = pbVar5[(longlong)&local_50 + 1] ^ pbVar5[(longlong)param_5 + 1];
          pbVar5[(longlong)param_5 + 1] = bVar1;
          if (param_3 <= pbVar8 + local_58) {
            pbVar5 = pbVar5 + 2;
            break;
          }
          bVar1 = pbVar5[(longlong)param_1 + 2];
          pbVar5[lVar7 + 1] = pbVar5[(longlong)&local_50 + 2] ^ pbVar5[(longlong)param_5 + 2];
          pbVar5[(longlong)param_5 + 2] = bVar1;
          if (param_3 <= pbVar8 + (3 - (longlong)&local_50)) {
            pbVar5 = pbVar5 + 3;
            break;
          }
          bVar1 = pbVar5[(longlong)param_1 + 3];
          pbVar5[lVar7 + 2] = pbVar5[(longlong)&local_50 + 3] ^ pbVar5[(longlong)param_5 + 3];
          pbVar5[(longlong)param_5 + 3] = bVar1;
          pbVar5 = pbVar5 + 4;
        } while (pbVar5 < &DAT_00000010);
        if (param_3 < &DAT_00000011) {
          if (&DAT_00000010 <= pbVar5) {
            return;
          }
          pbVar8 = (byte *)((longlong)param_5 + (longlong)pbVar5);
          lVar7 = 0x10 - (longlong)pbVar5;
          do {
            *pbVar8 = pbVar8[(longlong)param_1 - (longlong)param_5];
            pbVar8 = pbVar8 + 1;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
          return;
        }
        param_1 = param_1 + 2;
        lVar7 = lVar7 + 0x10;
        param_3 = param_3 + -0x10;
      } while (param_3 != (byte *)0x0);
    }
  }
  return;
}



// FUNCTION 143d462e0 CRYPTO_cbc128_encrypt body=458 status=ok
// SIG undefined CRYPTO_cbc128_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRYPTO_cbc128_encrypt
               (ulonglong *param_1,undefined8 *param_2,byte *param_3,undefined8 param_4,
               undefined8 *param_5,code *param_6)

{
  undefined8 uVar1;
  byte *pbVar2;
  ulonglong *puVar3;
  byte *pbVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  if (param_3 != (byte *)0x0) {
    puVar8 = param_5;
    if ((byte *)0xf < param_3) {
      uVar6 = (ulonglong)param_3 >> 4;
      param_3 = param_3 + uVar6 * -0x10;
      puVar7 = param_5;
      do {
        puVar8 = param_2;
        lVar5 = 2;
        puVar3 = param_1;
        do {
          *(ulonglong *)(((longlong)puVar8 - (longlong)param_1) + (longlong)puVar3) =
               *(ulonglong *)(((longlong)puVar7 - (longlong)param_1) + (longlong)puVar3) ^ *puVar3;
          puVar3 = puVar3 + 1;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
        (*param_6)(puVar8,puVar8,param_4);
        param_1 = param_1 + 2;
        uVar6 = uVar6 - 1;
        param_2 = puVar8 + 2;
        puVar7 = puVar8;
      } while (uVar6 != 0);
    }
    for (; param_3 != (byte *)0x0; param_3 = param_3 + -0x10) {
      pbVar2 = (byte *)0x0;
      do {
        if (param_3 <= pbVar2) {
LAB_143d46434:
          if (pbVar2 < &DAT_00000010) {
            pbVar4 = pbVar2 + (longlong)param_2;
            lVar5 = 0x10 - (longlong)pbVar2;
            do {
              *pbVar4 = pbVar4[(longlong)puVar8 - (longlong)param_2];
              pbVar4 = pbVar4 + 1;
              lVar5 = lVar5 + -1;
            } while (lVar5 != 0);
          }
          break;
        }
        pbVar4 = pbVar2 + (longlong)param_1;
        pbVar4[(longlong)param_2 - (longlong)param_1] =
             pbVar4[(longlong)puVar8 - (longlong)param_1] ^ *pbVar4;
        if (param_3 <= pbVar4 + (1 - (longlong)param_1)) {
          pbVar2 = pbVar2 + 1;
          goto LAB_143d46434;
        }
        pbVar2[(longlong)param_2 + 1] =
             pbVar2[(longlong)param_1 + 1] ^ (pbVar2 + 1)[(longlong)puVar8];
        if (param_3 <= pbVar4 + (2 - (longlong)param_1)) {
          pbVar2 = pbVar2 + 2;
          goto LAB_143d46434;
        }
        pbVar2[(longlong)param_2 + 2] =
             pbVar2[(longlong)param_1 + 2] ^ (pbVar2 + 2)[(longlong)puVar8];
        if (param_3 <= pbVar4 + (3 - (longlong)param_1)) {
          pbVar2 = pbVar2 + 3;
          goto LAB_143d46434;
        }
        pbVar2[(longlong)param_2 + 3] =
             pbVar2[(longlong)param_1 + 3] ^ (pbVar2 + 3)[(longlong)puVar8];
        pbVar2 = pbVar2 + 4;
      } while (pbVar2 < &DAT_00000010);
      (*param_6)(param_2,param_2,param_4);
      puVar8 = param_2;
      if (param_3 < &DAT_00000011) break;
      param_1 = param_1 + 2;
      param_2 = param_2 + 2;
    }
    uVar1 = puVar8[1];
    *param_5 = *puVar8;
    param_5[1] = uVar1;
  }
  return;
}



// FUNCTION 143d464b0 CRYPTO_ctr128_encrypt body=373 status=ok
// SIG undefined CRYPTO_ctr128_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRYPTO_ctr128_encrypt
               (byte *param_1,byte *param_2,ulonglong param_3,undefined8 param_4,undefined8 param_5,
               ulonglong *param_6,uint *param_7,code *param_8)

{
  byte bVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint local_res18;
  
  local_res18 = *param_7;
  for (; (local_res18 != 0 && (param_3 != 0)); param_3 = param_3 - 1) {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    *param_2 = *(byte *)((ulonglong)local_res18 + (longlong)param_6) ^ bVar1;
    param_2 = param_2 + 1;
    local_res18 = local_res18 + 1 & 0xf;
  }
  if (0xf < param_3) {
    uVar5 = param_3 >> 4;
    local_res18 = 0;
    param_3 = param_3 + uVar5 * -0x10;
    lVar4 = (longlong)param_2 - (longlong)param_6;
    lVar6 = (longlong)param_1 - (longlong)param_6;
    param_2 = param_2 + uVar5 * 0x10;
    param_1 = param_1 + uVar5 * 0x10;
    do {
      (*param_8)(param_5,param_6,param_4);
      ctr128_inc(param_5);
      lVar3 = 2;
      puVar2 = param_6;
      do {
        *(ulonglong *)(lVar4 + (longlong)puVar2) =
             *(ulonglong *)(lVar6 + (longlong)puVar2) ^ *puVar2;
        puVar2 = puVar2 + 1;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      lVar4 = lVar4 + 0x10;
      lVar6 = lVar6 + 0x10;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (param_3 != 0) {
    (*param_8)(param_5,param_6,param_4);
    ctr128_inc(param_5);
    do {
      uVar5 = (ulonglong)local_res18;
      local_res18 = local_res18 + 1;
      param_2[uVar5] = param_1[uVar5] ^ *(byte *)(uVar5 + (longlong)param_6);
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  *param_7 = local_res18;
  return;
}



// FUNCTION 143d46630 CRYPTO_ctr128_encrypt_ctr32 body=572 status=ok
// SIG undefined CRYPTO_ctr128_encrypt_ctr32(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRYPTO_ctr128_encrypt_ctr32
               (byte *param_1,byte *param_2,ulonglong param_3,undefined8 param_4,longlong param_5,
               undefined8 *param_6,uint *param_7,code *param_8)

{
  byte *pbVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  uint *puVar13;
  
  uVar7 = *param_7;
  for (; (uVar7 != 0 && (param_3 != 0)); param_3 = param_3 - 1) {
    bVar2 = *param_1;
    param_1 = param_1 + 1;
    *param_2 = *(byte *)((ulonglong)uVar7 + (longlong)param_6) ^ bVar2;
    param_2 = param_2 + 1;
    uVar7 = uVar7 + 1 & 0xf;
  }
  uVar6 = 1;
  uVar8 = *(uint *)(param_5 + 0xc);
  puVar13 = (uint *)(param_5 + 0xc);
  iVar12 = 0xc;
  uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
  for (; 0xf < param_3; param_3 = param_3 + uVar11 * -0x10) {
    uVar4 = param_3 >> 4;
    if (0x10000000 < uVar4) {
      uVar4 = 0x10000000;
    }
    uVar9 = uVar8 + (int)uVar4;
    uVar3 = (ulonglong)uVar9;
    uVar11 = uVar4 - uVar3;
    if (uVar4 <= uVar3) {
      uVar11 = uVar4;
    }
    uVar8 = 0;
    if (uVar4 <= uVar3) {
      uVar8 = uVar9;
    }
    (*param_8)(param_1,param_2,uVar11,param_4,param_5);
    *puVar13 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
    if (uVar8 == 0) {
      uVar9 = 1;
      puVar5 = puVar13;
      iVar10 = iVar12;
      do {
        pbVar1 = (byte *)((longlong)puVar5 + -1);
        puVar5 = (uint *)((longlong)puVar5 + -1);
        uVar9 = uVar9 + *pbVar1;
        *(char *)puVar5 = (char)uVar9;
        uVar9 = uVar9 >> 8;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    param_2 = param_2 + uVar11 * 0x10;
    param_1 = param_1 + uVar11 * 0x10;
  }
  if (param_3 == 0) {
    *param_7 = uVar7;
  }
  else {
    *param_6 = 0;
    param_6[1] = 0;
    (*param_8)(param_6,param_6,1,param_4,param_5);
    uVar8 = uVar8 + 1;
    *puVar13 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 * 0x1000000;
    if (uVar8 == 0) {
      do {
        pbVar1 = (byte *)((longlong)puVar13 + -1);
        puVar13 = (uint *)((longlong)puVar13 + -1);
        uVar6 = uVar6 + *pbVar1;
        *(char *)puVar13 = (char)uVar6;
        uVar6 = uVar6 >> 8;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
    do {
      uVar4 = (ulonglong)uVar7;
      uVar7 = uVar7 + 1;
      param_2[uVar4] = param_1[uVar4] ^ *(byte *)(uVar4 + (longlong)param_6);
      param_3 = param_3 - 1;
    } while (param_3 != 0);
    *param_7 = uVar7;
  }
  return;
}



// FUNCTION 143d46870 ctr128_inc body=183 status=ok
// SIG undefined ctr128_inc(void)

void ctr128_inc(char *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  bVar1 = param_1[0xf];
  param_1[0xf] = (char)(bVar1 + 1);
  uVar2 = (bVar1 + 1 >> 8) + (uint)(byte)param_1[0xe];
  param_1[0xe] = (char)uVar2;
  uVar2 = (uVar2 >> 8) + (uint)(byte)param_1[0xd];
  param_1[0xd] = (char)uVar2;
  uVar2 = (uVar2 >> 8) + (uint)(byte)param_1[0xc];
  param_1[0xc] = (char)uVar2;
  uVar2 = (uVar2 >> 8) + (uint)(byte)param_1[0xb];
  param_1[0xb] = (char)uVar2;
  uVar2 = (uVar2 >> 8) + (uint)(byte)param_1[10];
  param_1[10] = (char)uVar2;
  uVar2 = (uVar2 >> 8) + (uint)(byte)param_1[9];
  param_1[9] = (char)uVar2;
  uVar2 = (uVar2 >> 8) + (uint)(byte)param_1[8];
  param_1[8] = (char)uVar2;
  uVar2 = (uVar2 >> 8) + (uint)(byte)param_1[7];
  param_1[7] = (char)uVar2;
  uVar2 = (uVar2 >> 8) + (uint)(byte)param_1[6];
  param_1[6] = (char)uVar2;
  uVar2 = (uVar2 >> 8) + (uint)(byte)param_1[5];
  param_1[5] = (char)uVar2;
  uVar2 = (uVar2 >> 8) + (uint)(byte)param_1[4];
  param_1[4] = (char)uVar2;
  uVar2 = (uVar2 >> 8) + (uint)(byte)param_1[3];
  param_1[3] = (char)uVar2;
  uVar2 = (uVar2 >> 8) + (uint)(byte)param_1[2];
  param_1[2] = (char)uVar2;
  iVar3 = (uVar2 >> 8) + (uint)(byte)param_1[1];
  param_1[1] = (char)iVar3;
  *param_1 = *param_1 + (char)((uint)iVar3 >> 8);
  return;
}



// FUNCTION 143d46930 CRYPTO_ofb128_encrypt body=357 status=ok
// SIG undefined CRYPTO_ofb128_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRYPTO_ofb128_encrypt
               (byte *param_1,byte *param_2,ulonglong param_3,undefined8 param_4,longlong param_5,
               uint *param_6,code *param_7)

{
  byte bVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar4 = *param_6;
  for (; (uVar4 != 0 && (param_3 != 0)); param_3 = param_3 - 1) {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    *param_2 = *(byte *)((ulonglong)uVar4 + param_5) ^ bVar1;
    param_2 = param_2 + 1;
    uVar4 = uVar4 + 1 & 0xf;
  }
  if (0xf < param_3) {
    uVar6 = param_3 >> 4;
    lVar5 = (longlong)param_2 - param_5;
    lVar7 = (longlong)param_1 - param_5;
    param_3 = param_3 + uVar6 * -0x10;
    param_2 = param_2 + uVar6 * 0x10;
    param_1 = param_1 + uVar6 * 0x10;
    do {
      (*param_7)(param_5,param_5,param_4);
      if (uVar4 < 0x10) {
        puVar2 = (ulonglong *)((ulonglong)uVar4 + param_5);
        uVar3 = (ulonglong)((0xf - uVar4 >> 3) + 1);
        do {
          *(ulonglong *)(lVar5 + (longlong)puVar2) =
               *(ulonglong *)(lVar7 + (longlong)puVar2) ^ *puVar2;
          puVar2 = puVar2 + 1;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      lVar5 = lVar5 + 0x10;
      lVar7 = lVar7 + 0x10;
      uVar4 = 0;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (param_3 != 0) {
    (*param_7)(param_5,param_5,param_4);
    do {
      uVar6 = (ulonglong)uVar4;
      uVar4 = uVar4 + 1;
      param_2[uVar6] = param_1[uVar6] ^ *(byte *)(uVar6 + param_5);
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  *param_6 = uVar4;
  return;
}



// FUNCTION 143d46aa0 CRYPTO_cfb128_1_encrypt body=277 status=ok
// SIG undefined CRYPTO_cfb128_1_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRYPTO_cfb128_1_encrypt
               (longlong param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  byte local_res18 [16];
  byte local_48 [16];
  
  if (param_3 != 0) {
    uVar4 = 0;
    do {
      bVar2 = (byte)uVar4;
      uVar1 = uVar4 >> 3;
      local_res18[0] =
           -(((byte)(1 << (7 - (bVar2 & 7) & 0x1f)) & *(byte *)(uVar1 + param_1)) != 0) & 0x80;
      cfbr_encrypt_block(local_res18,local_48,1,param_4,param_5,param_7,param_8);
      uVar3 = (uint)uVar4;
      uVar4 = uVar4 + 1;
      *(byte *)(uVar1 + param_2) =
           *(byte *)(uVar1 + param_2) & ~(byte)(1 << (7 - (uVar3 & 7) & 0x1f)) |
           (local_48[0] & 0x80) >> (bVar2 & 7);
    } while (uVar4 < param_3);
  }
  return;
}



// FUNCTION 143d46bc0 CRYPTO_cfb128_8_encrypt body=169 status=ok
// SIG undefined CRYPTO_cfb128_8_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRYPTO_cfb128_8_encrypt
               (longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = 0x143d46bdb;
    param_2 = param_2 - param_1;
    do {
      cfbr_encrypt_block(param_1,param_2 + param_1,8,param_4,param_5,param_7,param_8,uVar1);
      param_1 = param_1 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 143d46c70 CRYPTO_cfb128_encrypt body=643 status=ok
// SIG undefined CRYPTO_cfb128_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRYPTO_cfb128_encrypt
               (byte *param_1,byte *param_2,ulonglong param_3,undefined8 param_4,longlong param_5,
               uint *param_6,int param_7,code *param_8)

{
  byte *pbVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  uVar6 = *param_6;
  if (param_7 == 0) {
    for (; (uVar6 != 0 && (param_3 != 0)); param_3 = param_3 - 1) {
      bVar2 = *param_1;
      param_1 = param_1 + 1;
      *param_2 = *(byte *)((ulonglong)uVar6 + param_5) ^ bVar2;
      param_2 = param_2 + 1;
      *(byte *)((ulonglong)uVar6 + param_5) = bVar2;
      uVar6 = uVar6 + 1 & 0xf;
    }
    if (0xf < param_3) {
      uVar8 = param_3 >> 4;
      lVar7 = (longlong)param_2 - param_5;
      param_3 = param_3 + uVar8 * -0x10;
      do {
        (*param_8)(param_5,param_5,param_4);
        if (uVar6 < 0x10) {
          uVar5 = (ulonglong)((0xf - uVar6 >> 3) + 1);
          puVar4 = (ulonglong *)((ulonglong)uVar6 + param_5);
          do {
            uVar3 = *(ulonglong *)
                     (lVar7 + (longlong)puVar4 + ((longlong)param_1 - (longlong)param_2));
            *(ulonglong *)(lVar7 + (longlong)puVar4) = *puVar4 ^ uVar3;
            *puVar4 = uVar3;
            uVar5 = uVar5 - 1;
            puVar4 = puVar4 + 1;
          } while (uVar5 != 0);
        }
        param_2 = param_2 + 0x10;
        lVar7 = lVar7 + 0x10;
        param_1 = param_1 + 0x10;
        uVar6 = 0;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    if (param_3 != 0) {
      (*param_8)(param_5,param_5,param_4);
      do {
        uVar8 = (ulonglong)uVar6;
        uVar6 = uVar6 + 1;
        bVar2 = param_1[uVar8];
        param_2[uVar8] = *(byte *)(uVar8 + param_5) ^ bVar2;
        *(byte *)(uVar8 + param_5) = bVar2;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
  }
  else {
    for (; (uVar6 != 0 && (param_3 != 0)); param_3 = param_3 - 1) {
      bVar2 = *param_1;
      param_1 = param_1 + 1;
      pbVar1 = (byte *)((ulonglong)uVar6 + param_5);
      *pbVar1 = *pbVar1 ^ bVar2;
      *param_2 = *(byte *)((ulonglong)uVar6 + param_5);
      param_2 = param_2 + 1;
      uVar6 = uVar6 + 1 & 0xf;
    }
    if (0xf < param_3) {
      uVar8 = param_3 >> 4;
      lVar9 = (longlong)param_2 - param_5;
      lVar7 = (longlong)param_1 - param_5;
      param_3 = param_3 + uVar8 * -0x10;
      param_2 = param_2 + uVar8 * 0x10;
      param_1 = param_1 + uVar8 * 0x10;
      do {
        (*param_8)(param_5,param_5,param_4);
        if (uVar6 < 0x10) {
          puVar4 = (ulonglong *)((ulonglong)uVar6 + param_5);
          uVar5 = (ulonglong)((0xf - uVar6 >> 3) + 1);
          do {
            *puVar4 = *puVar4 ^ *(ulonglong *)(lVar7 + (longlong)puVar4);
            *(ulonglong *)(lVar9 + (longlong)puVar4) = *puVar4;
            puVar4 = puVar4 + 1;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        lVar9 = lVar9 + 0x10;
        lVar7 = lVar7 + 0x10;
        uVar6 = 0;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    if (param_3 != 0) {
      (*param_8)(param_5,param_5,param_4);
      do {
        uVar8 = (ulonglong)uVar6;
        uVar6 = uVar6 + 1;
        *(byte *)(uVar8 + param_5) = *(byte *)(uVar8 + param_5) ^ param_1[uVar8];
        param_2[uVar8] = *(byte *)(uVar8 + param_5);
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
  }
  *param_6 = uVar6;
  return;
}



// FUNCTION 143d46f00 cfbr_encrypt_block body=978 status=ok
// SIG undefined cfbr_encrypt_block(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void cfbr_encrypt_block(ulonglong *param_1,ulonglong *param_2,int param_3,undefined8 param_4,
                       ulonglong *param_5,int param_6,code *param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulonglong *puVar12;
  byte bVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  byte *pbVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  byte bVar22;
  longlong lVar23;
  ulonglong *puVar24;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48 [4];
  
  local_48[3] = DAT_1468387a8 ^ (ulonglong)auStack_78;
  if (param_3 - 1U < 0x80) {
    local_58 = *param_5;
    uStack_50 = param_5[1];
    (*param_7)(param_5,param_5);
    uVar9 = (int)(param_3 + 7 + (param_3 + 7 >> 0x1f & 7U)) >> 3;
    lVar23 = (longlong)(int)uVar9;
    if (param_6 == 0) {
      uVar19 = 0;
      uVar10 = 0;
      uVar15 = 0;
      if ((0 < (int)uVar9) && (0xf < uVar9)) {
        puVar24 = (ulonglong *)((longlong)&local_58 + (longlong)(int)(uVar9 + 0xf));
        lVar14 = (longlong)(int)(uVar9 - 1);
        if ((((((ulonglong *)((longlong)param_5 + lVar14) < local_48) || (puVar24 < param_5)) &&
             ((puVar12 = (ulonglong *)((longlong)param_2 + lVar14), uVar15 = uVar10,
              puVar12 < local_48 || (puVar24 < param_2)))) &&
            (((ulonglong *)((longlong)param_5 + lVar14) < param_2 || (puVar12 < param_5)))) &&
           (((ulonglong *)((longlong)param_1 + lVar14) < param_2 || (puVar12 < param_1)))) {
          uVar10 = uVar9 & 0x8000000f;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xfffffff0) + 1;
          }
          uVar20 = uVar19;
          do {
            uVar15 = (int)uVar19 + 0x10;
            uVar19 = (ulonglong)uVar15;
            puVar12 = (ulonglong *)((longlong)local_48 + uVar20);
            uVar21 = uVar20 + 0x10;
            puVar24 = (ulonglong *)((longlong)puVar12 + ((longlong)param_1 - (longlong)local_48));
            uVar4 = *puVar24;
            uVar5 = puVar24[1];
            puVar24 = (ulonglong *)((longlong)puVar12 + ((longlong)param_5 - (longlong)local_48));
            uVar6 = *puVar24;
            uVar7 = puVar24[1];
            *puVar12 = uVar4;
            *(ulonglong *)((longlong)local_48 + uVar20 + 8) = uVar5;
            puVar12 = (ulonglong *)((longlong)puVar12 + ((longlong)param_2 - (longlong)local_48));
            *puVar12 = uVar6 ^ uVar4;
            puVar12[1] = uVar7 ^ uVar5;
            uVar20 = uVar21;
          } while ((longlong)uVar21 < (longlong)(int)(uVar9 - uVar10));
        }
      }
      lVar14 = (longlong)(int)uVar15;
      if (lVar14 < lVar23) {
        do {
          pbVar17 = (byte *)((longlong)local_48 + lVar14);
          lVar14 = lVar14 + 1;
          bVar8 = pbVar17[(longlong)param_1 - (longlong)local_48];
          bVar1 = pbVar17[(longlong)param_5 - (longlong)local_48];
          *pbVar17 = bVar8;
          pbVar17[(longlong)param_2 - (longlong)local_48] = bVar1 ^ bVar8;
        } while (lVar14 < lVar23);
      }
    }
    else if (0 < (int)uVar9) {
      lVar14 = (longlong)param_5 - (longlong)param_1;
      lVar16 = (longlong)local_48 - (longlong)param_1;
      lVar18 = (longlong)param_2 - (longlong)param_1;
      do {
        bVar8 = *(byte *)((longlong)param_1 + lVar14) ^ (byte)*param_1;
        *(byte *)((longlong)param_1 + lVar16) = bVar8;
        *(byte *)((longlong)param_1 + lVar18) = bVar8;
        param_1 = (ulonglong *)((longlong)param_1 + 1);
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
    }
    uVar15 = param_3 >> 0x1f & 7;
    uVar9 = param_3 + uVar15;
    iVar11 = (uVar9 & 7) - uVar15;
    lVar23 = (longlong)((int)uVar9 >> 3);
    if (iVar11 == 0) {
      uVar19 = *(ulonglong *)((longlong)&uStack_50 + lVar23);
      *param_5 = *(ulonglong *)((longlong)&local_58 + lVar23);
      param_5[1] = uVar19;
    }
    else {
      bVar8 = *(byte *)((longlong)&local_58 + lVar23 + 1);
      bVar1 = *(byte *)((longlong)&local_58 + lVar23 + 4);
      bVar13 = (byte)iVar11;
      bVar22 = 8 - bVar13;
      *(byte *)param_5 =
           *(char *)((longlong)&local_58 + lVar23) << (bVar13 & 0x1f) | bVar8 >> (bVar22 & 0x1f);
      bVar2 = *(byte *)((longlong)&local_58 + lVar23 + 2);
      *(byte *)((longlong)param_5 + 1) = bVar8 << (bVar13 & 0x1f) | bVar2 >> (bVar22 & 0x1f);
      bVar8 = *(byte *)((longlong)&local_58 + lVar23 + 3);
      bVar3 = *(byte *)((longlong)&local_58 + lVar23 + 5);
      *(byte *)((longlong)param_5 + 2) = bVar8 >> (bVar22 & 0x1f) | bVar2 << (bVar13 & 0x1f);
      bVar2 = *(byte *)((longlong)&local_58 + lVar23 + 6);
      *(byte *)((longlong)param_5 + 3) = bVar1 >> (bVar22 & 0x1f) | bVar8 << (bVar13 & 0x1f);
      bVar8 = *(byte *)((longlong)&local_58 + lVar23 + 7);
      *(byte *)((longlong)param_5 + 5) = bVar2 >> (bVar22 & 0x1f) | bVar3 << (bVar13 & 0x1f);
      *(byte *)((longlong)param_5 + 6) = bVar2 << (bVar13 & 0x1f) | bVar8 >> (bVar22 & 0x1f);
      bVar2 = *(byte *)((longlong)&uStack_50 + lVar23);
      *(byte *)((longlong)param_5 + 4) = bVar1 << (bVar13 & 0x1f) | bVar3 >> (bVar22 & 0x1f);
      *(byte *)((longlong)param_5 + 7) = bVar8 << (bVar13 & 0x1f) | bVar2 >> (bVar22 & 0x1f);
      bVar8 = *(byte *)((longlong)&uStack_50 + lVar23 + 1);
      *(byte *)(param_5 + 1) = bVar2 << (bVar13 & 0x1f) | bVar8 >> (bVar22 & 0x1f);
      bVar1 = *(byte *)((longlong)&uStack_50 + lVar23 + 2);
      *(byte *)((longlong)param_5 + 9) = bVar8 << (bVar13 & 0x1f) | bVar1 >> (bVar22 & 0x1f);
      bVar8 = *(byte *)((longlong)&uStack_50 + lVar23 + 3);
      *(byte *)((longlong)param_5 + 10) = bVar1 << (bVar13 & 0x1f) | bVar8 >> (bVar22 & 0x1f);
      bVar1 = *(byte *)((longlong)&uStack_50 + lVar23 + 4);
      *(byte *)((longlong)param_5 + 0xb) = bVar8 << (bVar13 & 0x1f) | bVar1 >> (bVar22 & 0x1f);
      bVar8 = *(byte *)((longlong)&uStack_50 + lVar23 + 5);
      *(byte *)((longlong)param_5 + 0xc) = bVar1 << (bVar13 & 0x1f) | bVar8 >> (bVar22 & 0x1f);
      bVar1 = *(byte *)((longlong)&uStack_50 + lVar23 + 6);
      *(byte *)((longlong)param_5 + 0xd) = bVar8 << (bVar13 & 0x1f) | bVar1 >> (bVar22 & 0x1f);
      bVar8 = *(byte *)((longlong)&uStack_50 + lVar23 + 7);
      bVar2 = *(byte *)((longlong)local_48 + lVar23);
      *(byte *)((longlong)param_5 + 0xe) = bVar1 << (bVar13 & 0x1f) | bVar8 >> (bVar22 & 0x1f);
      *(byte *)((longlong)param_5 + 0xf) = bVar2 >> (bVar22 & 0x1f) | bVar8 << (bVar13 & 0x1f);
    }
  }
  return;
}



// FUNCTION 143d472e0 CRYPTO_gcm128_aad body=324 status=ok
// SIG undefined CRYPTO_gcm128_aad(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CRYPTO_gcm128_aad(longlong param_1,byte *param_2,ulonglong param_3,undefined8 param_4)

{
  byte bVar1;
  code *pcVar2;
  code *pcVar3;
  ulonglong uVar4;
  byte *pbVar5;
  uint uVar6;
  
  pcVar2 = *(code **)(param_1 + 0x160);
  pcVar3 = *(code **)(param_1 + 0x168);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    return 0xfffffffe;
  }
  uVar4 = *(longlong *)(param_1 + 0x30) + param_3;
  if ((0x2000000000000000 < uVar4) || (uVar4 < param_3)) {
    return 0xffffffff;
  }
  uVar6 = *(uint *)(param_1 + 0x174);
  *(ulonglong *)(param_1 + 0x30) = uVar4;
  if (uVar6 != 0) {
    do {
      if (param_3 == 0) {
        if (uVar6 != 0) goto LAB_143d473f2;
        (*pcVar2)(param_1 + 0x40,param_1 + 0x60,pcVar2,param_4,0x143d472f1);
        param_3 = 0;
        goto LAB_143d473ab;
      }
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 - 1;
      pbVar5 = (byte *)((ulonglong)uVar6 + param_1 + 0x40);
      *pbVar5 = *pbVar5 ^ bVar1;
      uVar6 = uVar6 + 1 & 0xf;
    } while (uVar6 != 0);
    (*pcVar2)(param_1 + 0x40,param_1 + 0x60,pcVar2,param_4,0x143d472f1);
  }
LAB_143d473ab:
  pbVar5 = (byte *)(param_1 + 0x40);
  uVar4 = param_3 & 0xfffffffffffffff0;
  if (uVar4 != 0) {
    (*pcVar3)(pbVar5,param_1 + 0x60,param_2,uVar4);
    param_2 = param_2 + uVar4;
    param_3 = param_3 - uVar4;
  }
  if (param_3 != 0) {
    uVar6 = (uint)param_3;
    do {
      *pbVar5 = *pbVar5 ^ pbVar5[(longlong)(param_2 + (-0x40 - param_1))];
      pbVar5 = pbVar5 + 1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
LAB_143d473f2:
  *(uint *)(param_1 + 0x174) = uVar6;
  return 0;
}



// FUNCTION 143d47430 CRYPTO_gcm128_decrypt body=878 status=ok
// SIG undefined CRYPTO_gcm128_decrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
CRYPTO_gcm128_decrypt(longlong param_1,ulonglong *param_2,ulonglong *param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  byte bVar3;
  code *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  uint local_res8;
  uint local_68;
  ulonglong local_40;
  
  pcVar4 = *(code **)(param_1 + 0x178);
  pcVar5 = *(code **)(param_1 + 0x168);
  uVar6 = *(undefined8 *)(param_1 + 0x180);
  uVar9 = *(longlong *)(param_1 + 0x38) + param_4;
  if ((0xfffffffe0 < uVar9) || (uVar9 < param_4)) {
    return 0xffffffff;
  }
  puVar1 = (undefined8 *)(param_1 + 0x40);
  local_res8 = *(uint *)(param_1 + 0x170);
  *(ulonglong *)(param_1 + 0x38) = uVar9;
  if (*(int *)(param_1 + 0x174) != 0) {
    if (param_4 == 0) {
      (**(code **)(param_1 + 0x160))(puVar1,param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x174) = 0;
      return 0;
    }
    local_res8 = 0x10;
    *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)puVar1;
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x4c);
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x174) = 0;
  }
  local_68 = local_res8 & 0xf;
  uVar9 = (ulonglong)local_68;
  uVar10 = *(uint *)(param_1 + 0xc);
  uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
  if (local_68 != 0) {
    do {
      if (param_4 == 0) {
        param_4 = 0;
        if ((int)uVar9 != 0) goto LAB_143d47765;
        break;
      }
      uVar8 = *param_2;
      param_4 = param_4 - 1;
      uVar7 = (ulonglong)local_res8;
      param_2 = (ulonglong *)((longlong)param_2 + 1);
      local_res8 = local_res8 + 1;
      *(byte *)(uVar7 + 0x188 + param_1) = (byte)uVar8;
      *(byte *)param_3 = *(byte *)(uVar9 + 0x10 + param_1) ^ (byte)uVar8;
      param_3 = (ulonglong *)((longlong)param_3 + 1);
      local_68 = (int)uVar9 + 1U & 0xf;
      uVar9 = (ulonglong)local_68;
    } while (local_68 != 0);
    (*pcVar5)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188,local_res8);
    local_res8 = 0;
  }
  if ((0xf < param_4) && (local_res8 != 0)) {
    (*pcVar5)(puVar1,param_1 + 0x60,param_1 + 0x188,local_res8);
    local_res8 = 0;
  }
  if (0xbff < param_4) {
    local_40 = param_4 / 0xc00;
    param_4 = param_4 % 0xc00;
    do {
      (*pcVar5)(puVar1,param_1 + 0x60,param_2,0xc00);
      lVar11 = 0xc0;
      do {
        (*pcVar4)(param_1,param_1 + 0x10,uVar6);
        uVar10 = uVar10 + 1;
        *(uint *)(param_1 + 0xc) =
             uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 * 0x1000000
        ;
        *param_3 = *(ulonglong *)(param_1 + 0x10) ^ *param_2;
        puVar2 = param_2 + 1;
        param_2 = param_2 + 2;
        param_3[1] = *puVar2 ^ *(ulonglong *)(param_1 + 0x18);
        param_3 = param_3 + 2;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      local_40 = local_40 - 1;
    } while (local_40 != 0);
    uVar9 = (ulonglong)local_68;
  }
  if (((param_4 & 0xfffffffffffffff0) != 0) &&
     ((*pcVar5)(puVar1,param_1 + 0x60,param_2), 0xf < param_4)) {
    uVar9 = param_4 >> 4;
    param_4 = param_4 + uVar9 * -0x10;
    do {
      (*pcVar4)(param_1,param_1 + 0x10,uVar6);
      uVar10 = uVar10 + 1;
      *(uint *)(param_1 + 0xc) =
           uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 * 0x1000000;
      *param_3 = *(ulonglong *)(param_1 + 0x10) ^ *param_2;
      puVar2 = param_2 + 1;
      param_2 = param_2 + 2;
      param_3[1] = *puVar2 ^ *(ulonglong *)(param_1 + 0x18);
      param_3 = param_3 + 2;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    uVar9 = (ulonglong)local_68;
  }
  if (param_4 != 0) {
    (*pcVar4)(param_1,param_1 + 0x10,uVar6);
    uVar10 = uVar10 + 1;
    *(uint *)(param_1 + 0xc) =
         uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 * 0x1000000;
    do {
      uVar8 = (ulonglong)local_res8;
      local_res8 = local_res8 + 1;
      bVar3 = *(byte *)(uVar9 + (longlong)param_2);
      *(byte *)(uVar8 + 0x188 + param_1) = bVar3;
      *(byte *)(uVar9 + (longlong)param_3) = *(byte *)(uVar9 + 0x10 + param_1) ^ bVar3;
      param_4 = param_4 - 1;
      uVar9 = (ulonglong)((int)uVar9 + 1);
    } while (param_4 != 0);
  }
LAB_143d47765:
  *(uint *)(param_1 + 0x170) = local_res8;
  return 0;
}



// FUNCTION 143d477a0 CRYPTO_gcm128_decrypt_ctr32 body=771 status=ok
// SIG undefined CRYPTO_gcm128_decrypt_ctr32(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
CRYPTO_gcm128_decrypt_ctr32
          (longlong param_1,byte *param_2,byte *param_3,ulonglong param_4,code *param_5)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint local_res8;
  uint local_58;
  
  uVar3 = *(undefined8 *)(param_1 + 0x180);
  pcVar4 = *(code **)(param_1 + 0x168);
  uVar6 = *(longlong *)(param_1 + 0x38) + param_4;
  if ((0xfffffffe0 < uVar6) || (uVar6 < param_4)) {
    return 0xffffffff;
  }
  puVar1 = (undefined8 *)(param_1 + 0x40);
  local_res8 = *(uint *)(param_1 + 0x170);
  *(ulonglong *)(param_1 + 0x38) = uVar6;
  if (*(int *)(param_1 + 0x174) != 0) {
    if (param_4 == 0) {
      (**(code **)(param_1 + 0x160))(puVar1,param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x174) = 0;
      return 0;
    }
    local_res8 = 0x10;
    *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)puVar1;
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x4c);
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x174) = 0;
  }
  local_58 = local_res8 & 0xf;
  uVar6 = (ulonglong)local_58;
  uVar7 = *(uint *)(param_1 + 0xc);
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
  if (local_58 != 0) {
    do {
      if (param_4 == 0) {
        param_4 = 0;
        if ((int)uVar6 != 0) goto LAB_143d47a68;
        break;
      }
      bVar2 = *param_2;
      param_4 = param_4 - 1;
      uVar5 = (ulonglong)local_res8;
      param_2 = param_2 + 1;
      local_res8 = local_res8 + 1;
      *(byte *)(uVar5 + 0x188 + param_1) = bVar2;
      *param_3 = *(byte *)(uVar6 + 0x10 + param_1) ^ bVar2;
      param_3 = param_3 + 1;
      local_58 = (int)uVar6 + 1U & 0xf;
      uVar6 = (ulonglong)local_58;
    } while (local_58 != 0);
    (*pcVar4)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188,local_res8);
    local_res8 = 0;
  }
  if ((0xf < param_4) && (local_res8 != 0)) {
    (*pcVar4)(puVar1,param_1 + 0x60,param_1 + 0x188,local_res8);
    local_res8 = 0;
  }
  if (0xbff < param_4) {
    uVar6 = param_4 / 0xc00;
    param_4 = param_4 % 0xc00;
    do {
      (*pcVar4)(puVar1,param_1 + 0x60,param_2,0xc00);
      (*param_5)(param_2,param_3,0xc0,uVar3,param_1);
      uVar7 = uVar7 + 0xc0;
      param_3 = param_3 + 0xc00;
      param_2 = param_2 + 0xc00;
      *(uint *)(param_1 + 0xc) =
           uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 * 0x1000000;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    uVar6 = (ulonglong)local_58;
  }
  uVar5 = param_4 & 0xfffffffffffffff0;
  if (uVar5 != 0) {
    (*pcVar4)(puVar1,param_1 + 0x60,param_2,uVar5);
    (*param_5)(param_2,param_3,param_4 >> 4,uVar3,param_1);
    uVar7 = uVar7 + (int)(param_4 >> 4);
    *(uint *)(param_1 + 0xc) =
         uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 * 0x1000000;
    param_3 = param_3 + uVar5;
    param_2 = param_2 + uVar5;
    param_4 = param_4 - uVar5;
  }
  if (param_4 != 0) {
    (**(code **)(param_1 + 0x178))(param_1,param_1 + 0x10,uVar3);
    uVar7 = uVar7 + 1;
    *(uint *)(param_1 + 0xc) =
         uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 * 0x1000000;
    do {
      uVar5 = (ulonglong)local_res8;
      local_res8 = local_res8 + 1;
      bVar2 = param_2[uVar6];
      *(byte *)(uVar5 + 0x188 + param_1) = bVar2;
      param_3[uVar6] = *(byte *)(uVar6 + 0x10 + param_1) ^ bVar2;
      param_4 = param_4 - 1;
      uVar6 = (ulonglong)((int)uVar6 + 1);
    } while (param_4 != 0);
  }
LAB_143d47a68:
  *(uint *)(param_1 + 0x170) = local_res8;
  return 0;
}



// FUNCTION 143d47ab0 CRYPTO_gcm128_encrypt body=906 status=ok
// SIG undefined CRYPTO_gcm128_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
CRYPTO_gcm128_encrypt(longlong param_1,ulonglong *param_2,ulonglong *param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  byte bVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  uint uVar10;
  longlong lVar11;
  uint local_res8;
  uint local_68;
  ulonglong local_40;
  
  pcVar3 = *(code **)(param_1 + 0x178);
  pcVar4 = *(code **)(param_1 + 0x168);
  uVar5 = *(undefined8 *)(param_1 + 0x180);
  uVar8 = *(longlong *)(param_1 + 0x38) + param_4;
  if ((0xfffffffe0 < uVar8) || (uVar8 < param_4)) {
    return 0xffffffff;
  }
  puVar1 = (undefined8 *)(param_1 + 0x40);
  local_res8 = *(uint *)(param_1 + 0x170);
  *(ulonglong *)(param_1 + 0x38) = uVar8;
  if (*(int *)(param_1 + 0x174) != 0) {
    if (param_4 == 0) {
      (**(code **)(param_1 + 0x160))(puVar1,param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x174) = 0;
      return 0;
    }
    local_res8 = 0x10;
    *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)puVar1;
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x4c);
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x174) = 0;
  }
  uVar10 = *(uint *)(param_1 + 0xc);
  local_68 = local_res8 & 0xf;
  uVar8 = (ulonglong)local_68;
  uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
  if (local_68 != 0) {
    do {
      if (param_4 == 0) {
        param_4 = 0;
        if ((int)uVar8 != 0) goto LAB_143d47e02;
        break;
      }
      param_4 = param_4 - 1;
      bVar7 = *(byte *)(uVar8 + 0x10 + param_1) ^ (byte)*param_2;
      param_2 = (ulonglong *)((longlong)param_2 + 1);
      *(byte *)param_3 = bVar7;
      param_3 = (ulonglong *)((longlong)param_3 + 1);
      uVar6 = (ulonglong)local_res8;
      local_res8 = local_res8 + 1;
      local_68 = (int)uVar8 + 1U & 0xf;
      uVar8 = (ulonglong)local_68;
      *(byte *)(uVar6 + 0x188 + param_1) = bVar7;
    } while (local_68 != 0);
    (*pcVar4)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188,local_res8);
    local_res8 = 0;
  }
  if ((0xf < param_4) && (local_res8 != 0)) {
    (*pcVar4)(puVar1,param_1 + 0x60,param_1 + 0x188,local_res8);
    local_res8 = 0;
  }
  if (0xbff < param_4) {
    local_40 = param_4 / 0xc00;
    param_4 = param_4 % 0xc00;
    do {
      lVar11 = 0xc0;
      do {
        puVar9 = param_3;
        (*pcVar3)(param_1,param_1 + 0x10,uVar5);
        uVar10 = uVar10 + 1;
        *(uint *)(param_1 + 0xc) =
             uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 * 0x1000000
        ;
        *puVar9 = *(ulonglong *)(param_1 + 0x10) ^ *param_2;
        puVar2 = param_2 + 1;
        param_2 = param_2 + 2;
        puVar9[1] = *puVar2 ^ *(ulonglong *)(param_1 + 0x18);
        param_3 = puVar9 + 2;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      (*pcVar4)(puVar1,param_1 + 0x60,puVar9 + -0x17e,0xc00);
      local_40 = local_40 - 1;
    } while (local_40 != 0);
    uVar8 = (ulonglong)local_68;
  }
  uVar6 = param_4 & 0xfffffffffffffff0;
  if (uVar6 != 0) {
    if (0xf < param_4) {
      uVar8 = param_4 >> 4;
      param_4 = param_4 + uVar8 * -0x10;
      do {
        (*pcVar3)(param_1,param_1 + 0x10,uVar5);
        uVar10 = uVar10 + 1;
        *(uint *)(param_1 + 0xc) =
             uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 * 0x1000000
        ;
        *param_3 = *(ulonglong *)(param_1 + 0x10) ^ *param_2;
        puVar2 = param_2 + 1;
        param_2 = param_2 + 2;
        param_3[1] = *puVar2 ^ *(ulonglong *)(param_1 + 0x18);
        param_3 = param_3 + 2;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      uVar8 = (ulonglong)local_68;
    }
    (*pcVar4)(puVar1,param_1 + 0x60,(longlong)param_3 - uVar6,uVar6);
  }
  if (param_4 != 0) {
    (*pcVar3)(param_1,param_1 + 0x10,uVar5);
    uVar10 = uVar10 + 1;
    *(uint *)(param_1 + 0xc) =
         uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 * 0x1000000;
    do {
      bVar7 = *(byte *)(uVar8 + 0x10 + param_1) ^ *(byte *)(uVar8 + (longlong)param_2);
      *(byte *)(uVar8 + (longlong)param_3) = bVar7;
      uVar6 = (ulonglong)local_res8;
      local_res8 = local_res8 + 1;
      *(byte *)(uVar6 + 0x188 + param_1) = bVar7;
      param_4 = param_4 - 1;
      uVar8 = (ulonglong)((int)uVar8 + 1);
    } while (param_4 != 0);
  }
LAB_143d47e02:
  *(uint *)(param_1 + 0x170) = local_res8;
  return 0;
}



// FUNCTION 143d47e40 CRYPTO_gcm128_encrypt_ctr32 body=782 status=ok
// SIG undefined CRYPTO_gcm128_encrypt_ctr32(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
CRYPTO_gcm128_encrypt_ctr32
          (longlong param_1,byte *param_2,byte *param_3,ulonglong param_4,code *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulonglong uVar4;
  byte bVar5;
  ulonglong uVar6;
  uint uVar7;
  uint local_res8;
  uint local_58;
  
  uVar2 = *(undefined8 *)(param_1 + 0x180);
  pcVar3 = *(code **)(param_1 + 0x168);
  uVar6 = *(longlong *)(param_1 + 0x38) + param_4;
  if ((0xfffffffe0 < uVar6) || (uVar6 < param_4)) {
    return 0xffffffff;
  }
  puVar1 = (undefined8 *)(param_1 + 0x40);
  local_res8 = *(uint *)(param_1 + 0x170);
  *(ulonglong *)(param_1 + 0x38) = uVar6;
  if (*(int *)(param_1 + 0x174) != 0) {
    if (param_4 == 0) {
      (**(code **)(param_1 + 0x160))(puVar1,param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x174) = 0;
      return 0;
    }
    local_res8 = 0x10;
    *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)puVar1;
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x4c);
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x174) = 0;
  }
  uVar7 = *(uint *)(param_1 + 0xc);
  local_58 = local_res8 & 0xf;
  uVar6 = (ulonglong)local_58;
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
  if (local_58 != 0) {
    do {
      if (param_4 == 0) {
        param_4 = 0;
        if ((int)uVar6 != 0) goto LAB_143d48114;
        break;
      }
      param_4 = param_4 - 1;
      bVar5 = *(byte *)(uVar6 + 0x10 + param_1) ^ *param_2;
      param_2 = param_2 + 1;
      *param_3 = bVar5;
      param_3 = param_3 + 1;
      uVar4 = (ulonglong)local_res8;
      local_res8 = local_res8 + 1;
      local_58 = (int)uVar6 + 1U & 0xf;
      uVar6 = (ulonglong)local_58;
      *(byte *)(uVar4 + 0x188 + param_1) = bVar5;
    } while (local_58 != 0);
    (*pcVar3)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188,local_res8);
    local_res8 = 0;
  }
  if ((0xf < param_4) && (local_res8 != 0)) {
    (*pcVar3)(puVar1,param_1 + 0x60,param_1 + 0x188,local_res8);
    local_res8 = 0;
  }
  if (0xbff < param_4) {
    uVar6 = param_4 / 0xc00;
    param_4 = param_4 % 0xc00;
    do {
      (*param_5)(param_2,param_3,0xc0,uVar2,param_1);
      uVar7 = uVar7 + 0xc0;
      *(uint *)(param_1 + 0xc) =
           uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 * 0x1000000;
      (*pcVar3)(puVar1,param_1 + 0x60,param_3,0xc00);
      param_3 = param_3 + 0xc00;
      param_2 = param_2 + 0xc00;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    uVar6 = (ulonglong)local_58;
  }
  uVar4 = param_4 & 0xfffffffffffffff0;
  if (uVar4 != 0) {
    (*param_5)(param_2,param_3,param_4 >> 4,uVar2,param_1);
    uVar7 = uVar7 + (int)(param_4 >> 4);
    *(uint *)(param_1 + 0xc) =
         uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 * 0x1000000;
    param_2 = param_2 + uVar4;
    param_4 = param_4 - uVar4;
    (*pcVar3)(puVar1,param_1 + 0x60,param_3,uVar4);
    param_3 = param_3 + uVar4;
  }
  if (param_4 != 0) {
    (**(code **)(param_1 + 0x178))(param_1,param_1 + 0x10,uVar2);
    uVar7 = uVar7 + 1;
    *(uint *)(param_1 + 0xc) =
         uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 * 0x1000000;
    do {
      bVar5 = *(byte *)(uVar6 + 0x10 + param_1) ^ param_2[uVar6];
      param_3[uVar6] = bVar5;
      uVar4 = (ulonglong)local_res8;
      local_res8 = local_res8 + 1;
      *(byte *)(uVar4 + 0x188 + param_1) = bVar5;
      param_4 = param_4 - 1;
      uVar6 = (ulonglong)((int)uVar6 + 1);
    } while (param_4 != 0);
  }
LAB_143d48114:
  *(uint *)(param_1 + 0x170) = local_res8;
  return 0;
}



// FUNCTION 143d48150 CRYPTO_gcm128_finish body=297 status=ok
// SIG undefined CRYPTO_gcm128_finish(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CRYPTO_gcm128_finish(longlong param_1,longlong param_2,ulonglong param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  lVar3 = *(longlong *)(param_1 + 0x30);
  lVar4 = *(longlong *)(param_1 + 0x38);
  uVar2 = *(uint *)(param_1 + 0x170);
  pcVar5 = *(code **)(param_1 + 0x168);
  uVar9 = lVar3 << 3;
  uVar10 = lVar4 << 3;
  if (uVar2 == 0) {
    uVar8 = 0;
    if (*(int *)(param_1 + 0x174) != 0) {
      (**(code **)(param_1 + 0x160))(param_1 + 0x40,param_1 + 0x60);
    }
  }
  else {
    uVar7 = uVar2 + 0xf & 0xfffffff0;
    _guard_xfg_dispatch_icall_nop
              ((void *)(param_1 + 0x188 + (ulonglong)uVar2),0,(ulonglong)(uVar7 - uVar2));
    uVar8 = (ulonglong)uVar7;
    if (uVar7 == 0x30) {
      (*pcVar5)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188,0x30);
      uVar8 = 0;
    }
  }
  uVar7 = (uint)(uVar9 >> 0x18);
  uVar2 = (uint)(uVar9 >> 8);
  local_38 = ((uint)((ulonglong)lVar3 >> 0x20) & 0x1fffffff) >> 0x15 |
             ((uint)(uVar9 >> 0x20) & 0xff0000) >> 8 | uVar7 & 0xff0000 | uVar2 & 0xff000000;
  uStack_34 = uVar7 & 0xff | uVar2 & 0xff00 | (uint)(((uVar9 & 0xff00) << 0x28) >> 0x20) |
              (uint)((ulonglong)(lVar3 << 0x3b) >> 0x20);
  uVar7 = (uint)(uVar10 >> 0x18);
  uVar2 = (uint)(uVar10 >> 8);
  uStack_30 = ((uint)((ulonglong)lVar4 >> 0x20) & 0x1fffffff) >> 0x15 |
              ((uint)(uVar10 >> 0x20) & 0xff0000) >> 8 | uVar7 & 0xff0000 | uVar2 & 0xff000000;
  uStack_2c = uVar7 & 0xff | uVar2 & 0xff00 | (uint)(((uVar10 & 0xff00) << 0x28) >> 0x20) |
              (uint)((ulonglong)(lVar4 << 0x3b) >> 0x20);
  puVar1 = (uint *)(uVar8 + 0x188 + param_1);
  *puVar1 = local_38;
  puVar1[1] = uStack_34;
  puVar1[2] = uStack_30;
  puVar1[3] = uStack_2c;
  (*pcVar5)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188,(int)uVar8 + 0x10);
  *(ulonglong *)(param_1 + 0x40) = *(ulonglong *)(param_1 + 0x40) ^ *(ulonglong *)(param_1 + 0x20);
  *(ulonglong *)(param_1 + 0x48) = *(ulonglong *)(param_1 + 0x48) ^ *(ulonglong *)(param_1 + 0x28);
  if ((param_2 == 0) || (0x10 < param_3)) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = FUN_14004ffa0(param_1 + 0x40,param_2,param_3);
  }
  return uVar6;
}



// FUNCTION 143d48280 CRYPTO_gcm128_init body=256 status=ok
// SIG undefined CRYPTO_gcm128_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRYPTO_gcm128_init(void *param_1,undefined8 param_2,code *param_3)

{
  ulonglong uVar1;
  
  _guard_xfg_dispatch_icall_nop(param_1,0,0x1b8);
  *(code **)((longlong)param_1 + 0x178) = param_3;
  *(undefined8 *)((longlong)param_1 + 0x180) = param_2;
  (*param_3)((longlong)param_1 + 0x50,(longlong)param_1 + 0x50,param_2);
  uVar1 = *(ulonglong *)((longlong)param_1 + 0x50);
  *(ulonglong *)((longlong)param_1 + 0x50) =
       uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
       (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
       (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
  uVar1 = *(ulonglong *)((longlong)param_1 + 0x58);
  *(ulonglong *)((longlong)param_1 + 0x58) =
       uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
       (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
       (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
  if ((DAT_146bcd584 & 2) == 0) {
    gcm_init_4bit((longlong)param_1 + 0x60,(longlong)param_1 + 0x50);
    *(code **)((longlong)param_1 + 0x160) = FUN_140063a00;
    *(code **)((longlong)param_1 + 0x168) = FUN_140063b40;
  }
  else if ((DAT_146bcd584 & 0x10400000) == 0x10400000) {
    FUN_140064d80();
    *(undefined **)((longlong)param_1 + 0x160) = &DAT_140064f40;
    *(undefined **)((longlong)param_1 + 0x168) = &DAT_140064f60;
  }
  else {
    gcm_init_clmul();
    *(undefined1 **)((longlong)param_1 + 0x160) = &LAB_1400645e0;
    *(undefined **)((longlong)param_1 + 0x168) = &DAT_1400646a0;
  }
  return;
}



// FUNCTION 143d48380 CRYPTO_gcm128_setiv body=447 status=ok
// SIG undefined CRYPTO_gcm128_setiv(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRYPTO_gcm128_setiv(undefined8 *param_1,byte *param_2,ulonglong param_3)

{
  code *pcVar1;
  byte *pbVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  pcVar1 = (code *)param_1[0x2c];
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x2e] = 0;
  if (param_3 == 0xc) {
    uVar3 = 1;
    *param_1 = *(undefined8 *)param_2;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x1000000;
  }
  else {
    param_1[8] = 0;
    param_1[9] = 0;
    uVar4 = param_3;
    if (0xf < param_3) {
      uVar5 = param_3 >> 4;
      uVar4 = param_3 + uVar5 * -0x10;
      do {
        *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) ^ *param_2;
        *(byte *)((longlong)param_1 + 0x41) = *(byte *)((longlong)param_1 + 0x41) ^ param_2[1];
        *(byte *)((longlong)param_1 + 0x42) = *(byte *)((longlong)param_1 + 0x42) ^ param_2[2];
        *(byte *)((longlong)param_1 + 0x43) = *(byte *)((longlong)param_1 + 0x43) ^ param_2[3];
        *(byte *)((longlong)param_1 + 0x44) = *(byte *)((longlong)param_1 + 0x44) ^ param_2[4];
        *(byte *)((longlong)param_1 + 0x45) = *(byte *)((longlong)param_1 + 0x45) ^ param_2[5];
        *(byte *)((longlong)param_1 + 0x46) = *(byte *)((longlong)param_1 + 0x46) ^ param_2[6];
        *(byte *)((longlong)param_1 + 0x47) = *(byte *)((longlong)param_1 + 0x47) ^ param_2[7];
        *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) ^ param_2[8];
        *(byte *)((longlong)param_1 + 0x49) = *(byte *)((longlong)param_1 + 0x49) ^ param_2[9];
        *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) ^ param_2[10];
        *(byte *)((longlong)param_1 + 0x4b) = *(byte *)((longlong)param_1 + 0x4b) ^ param_2[0xb];
        *(byte *)((longlong)param_1 + 0x4c) = *(byte *)((longlong)param_1 + 0x4c) ^ param_2[0xc];
        *(byte *)((longlong)param_1 + 0x4d) = *(byte *)((longlong)param_1 + 0x4d) ^ param_2[0xd];
        *(byte *)((longlong)param_1 + 0x4e) = *(byte *)((longlong)param_1 + 0x4e) ^ param_2[0xe];
        *(byte *)((longlong)param_1 + 0x4f) = *(byte *)((longlong)param_1 + 0x4f) ^ param_2[0xf];
        (*pcVar1)(param_1 + 8,param_1 + 0xc);
        param_2 = param_2 + 0x10;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if (uVar4 != 0) {
      pbVar2 = (byte *)(param_1 + 8);
      do {
        *pbVar2 = *pbVar2 ^ pbVar2[(longlong)(param_2 + (-0x40 - (longlong)param_1))];
        pbVar2 = pbVar2 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      (*pcVar1)(param_1 + 8,param_1 + 0xc);
    }
    uVar4 = param_3 << 3;
    param_1[9] = param_1[9] ^
                 ((param_3 & 0x1fffffffffffffff) >> 0x35 | (uVar4 & 0xff000000000000) >> 0x28 |
                  (uVar4 & 0xff0000000000) >> 0x18 | (uVar4 & 0xff00000000) >> 8 |
                  (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 | (uVar4 & 0xff00) << 0x28
                 | param_3 << 0x3b);
    (*pcVar1)(param_1 + 8,param_1 + 0xc);
    uVar3 = *(uint *)((longlong)param_1 + 0x4c);
    *param_1 = param_1[8];
    param_1[1] = param_1[9];
    uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  }
  param_1[8] = 0;
  param_1[9] = 0;
  (*(code *)param_1[0x2f])(param_1,param_1 + 4,param_1[0x30]);
  uVar3 = uVar3 + 1;
  *(uint *)((longlong)param_1 + 0xc) =
       uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 * 0x1000000;
  return;
}



// FUNCTION 143d48540 CRYPTO_gcm128_tag body=288 status=ok
// SIG undefined CRYPTO_gcm128_tag(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRYPTO_gcm128_tag(longlong param_1,void *param_2,ulonglong param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  size_t _Size;
  ulonglong uVar9;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  lVar3 = *(longlong *)(param_1 + 0x30);
  lVar4 = *(longlong *)(param_1 + 0x38);
  uVar2 = *(uint *)(param_1 + 0x170);
  pcVar5 = *(code **)(param_1 + 0x168);
  uVar7 = lVar3 << 3;
  uVar9 = lVar4 << 3;
  if (uVar2 == 0) {
    uVar8 = 0;
    if (*(int *)(param_1 + 0x174) != 0) {
      (**(code **)(param_1 + 0x160))(param_1 + 0x40,param_1 + 0x60);
    }
  }
  else {
    uVar6 = uVar2 + 0xf & 0xfffffff0;
    _guard_xfg_dispatch_icall_nop
              ((void *)(param_1 + 0x188 + (ulonglong)uVar2),0,(ulonglong)(uVar6 - uVar2));
    uVar8 = (ulonglong)uVar6;
    if (uVar6 == 0x30) {
      (*pcVar5)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188,0x30);
      uVar8 = 0;
    }
  }
  uVar6 = (uint)(uVar7 >> 0x18);
  uVar2 = (uint)(uVar7 >> 8);
  local_38 = ((uint)((ulonglong)lVar3 >> 0x20) & 0x1fffffff) >> 0x15 |
             ((uint)(uVar7 >> 0x20) & 0xff0000) >> 8 | uVar6 & 0xff0000 | uVar2 & 0xff000000;
  uStack_34 = uVar6 & 0xff | uVar2 & 0xff00 | (uint)(((uVar7 & 0xff00) << 0x28) >> 0x20) |
              (uint)((ulonglong)(lVar3 << 0x3b) >> 0x20);
  uVar6 = (uint)(uVar9 >> 0x18);
  uVar2 = (uint)(uVar9 >> 8);
  uStack_30 = ((uint)((ulonglong)lVar4 >> 0x20) & 0x1fffffff) >> 0x15 |
              ((uint)(uVar9 >> 0x20) & 0xff0000) >> 8 | uVar6 & 0xff0000 | uVar2 & 0xff000000;
  uStack_2c = uVar6 & 0xff | uVar2 & 0xff00 | (uint)(((uVar9 & 0xff00) << 0x28) >> 0x20) |
              (uint)((ulonglong)(lVar4 << 0x3b) >> 0x20);
  puVar1 = (uint *)(uVar8 + 0x188 + param_1);
  *puVar1 = local_38;
  puVar1[1] = uStack_34;
  puVar1[2] = uStack_30;
  puVar1[3] = uStack_2c;
  (*pcVar5)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188,(int)uVar8 + 0x10);
  *(ulonglong *)(param_1 + 0x40) = *(ulonglong *)(param_1 + 0x40) ^ *(ulonglong *)(param_1 + 0x20);
  *(ulonglong *)(param_1 + 0x48) = *(ulonglong *)(param_1 + 0x48) ^ *(ulonglong *)(param_1 + 0x28);
  _Size = 0x10;
  if (param_3 < 0x11) {
    _Size = param_3;
  }
  _guard_xfg_dispatch_icall_nop(param_2,(void *)(param_1 + 0x40),_Size);
  return;
}



// FUNCTION 143d48660 gcm_init_4bit body=545 status=ok
// SIG undefined gcm_init_4bit(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void gcm_init_4bit(undefined8 *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = param_2[1];
  uVar2 = *param_2;
  uVar3 = uVar1 >> 1 | uVar2 << 0x3f;
  uVar5 = -(ulonglong)((uint)uVar1 & 1) & 0xe100000000000000 ^ uVar2 >> 1;
  uVar8 = uVar3 >> 1 | (uVar2 >> 1) << 0x3f;
  uVar4 = -(ulonglong)((uint)(uVar1 >> 1) & 1) & 0xe100000000000000 ^ uVar5 >> 1;
  uVar6 = (uVar5 >> 1) << 0x3f | uVar8 >> 1;
  uVar9 = -(ulonglong)((uint)(uVar3 >> 1) & 1) & 0xe100000000000000 ^ uVar4 >> 1;
  param_1[4] = uVar4;
  param_1[5] = uVar8;
  uVar4 = param_1[4];
  uVar8 = param_1[5];
  param_1[8] = uVar5;
  param_1[9] = uVar3;
  uVar10 = uVar9 ^ uVar4;
  uVar7 = uVar6 ^ uVar8;
  param_1[6] = uVar10;
  param_1[7] = uVar7;
  param_1[2] = uVar9;
  param_1[3] = uVar6;
  param_1[0xc] = uVar4 ^ uVar5;
  uVar9 = param_1[2] ^ uVar5;
  param_1[0xe] = uVar10 ^ uVar5;
  param_1[10] = uVar9;
  uVar6 = param_1[3] ^ uVar3;
  param_1[0xb] = uVar6;
  param_1[0xd] = uVar8 ^ uVar3;
  param_1[0xf] = uVar7 ^ uVar3;
  param_1[0x10] = uVar2;
  param_1[0x11] = uVar1;
  param_1[0x12] = param_1[2] ^ uVar2;
  param_1[0x14] = uVar4 ^ uVar2;
  param_1[0x16] = uVar10 ^ uVar2;
  param_1[0x15] = uVar8 ^ uVar1;
  param_1[0x1b] = uVar6 ^ uVar1;
  param_1[0x13] = param_1[3] ^ uVar1;
  param_1[0x17] = uVar7 ^ uVar1;
  param_1[0x1d] = uVar8 ^ uVar3 ^ uVar1;
  param_1[0x18] = param_1[8] ^ uVar2;
  param_1[0x1a] = uVar9 ^ uVar2;
  param_1[0x19] = param_1[9] ^ uVar1;
  param_1[0x1f] = uVar7 ^ uVar3 ^ uVar1;
  param_1[0x1c] = uVar4 ^ uVar5 ^ uVar2;
  param_1[0x1e] = uVar10 ^ uVar5 ^ uVar2;
  return;
}



// FUNCTION 143d48890 CRYPTO_ccm128_aad body=397 status=ok
// SIG undefined CRYPTO_ccm128_aad(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRYPTO_ccm128_aad(byte *param_1,byte *param_2,ulonglong param_3)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  byte bVar9;
  byte bVar4;
  
  if (param_3 != 0) {
    pcVar1 = *(code **)(param_1 + 0x28);
    *param_1 = *param_1 | 0x40;
    (*pcVar1)(param_1,param_1 + 0x10,*(undefined8 *)(param_1 + 0x30));
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
    bVar6 = param_1[0x11];
    bVar9 = (byte)param_3;
    bVar2 = (byte)(param_3 >> 8);
    if (param_3 < 0xff00) {
      uVar8 = 2;
      param_1[0x10] = bVar2 ^ param_1[0x10];
      bVar6 = bVar6 ^ bVar9;
    }
    else {
      param_1[0x10] = ~param_1[0x10];
      bVar3 = (byte)(param_3 >> 0x10);
      bVar4 = (byte)(param_3 >> 0x18);
      if (param_3 < 0x100000000) {
        bVar6 = bVar6 ^ 0xfe;
        uVar8 = 6;
        param_1[0x12] = bVar4 ^ param_1[0x12];
        param_1[0x13] = bVar3 ^ param_1[0x13];
        param_1[0x14] = bVar2 ^ param_1[0x14];
        param_1[0x15] = param_1[0x15] ^ bVar9;
      }
      else {
        bVar6 = ~bVar6;
        uVar8 = 10;
        param_1[0x12] = (byte)(param_3 >> 0x38) ^ param_1[0x12];
        param_1[0x13] = (byte)(param_3 >> 0x30) ^ param_1[0x13];
        param_1[0x14] = (byte)(param_3 >> 0x28) ^ param_1[0x14];
        param_1[0x15] = (byte)(param_3 >> 0x20) ^ param_1[0x15];
        param_1[0x16] = param_1[0x16] ^ bVar4;
        param_1[0x17] = param_1[0x17] ^ bVar3;
        param_1[0x18] = param_1[0x18] ^ bVar2;
        param_1[0x19] = param_1[0x19] ^ bVar9;
      }
    }
    param_1[0x11] = bVar6;
    do {
      pbVar5 = param_1 + uVar8 + 0x10;
      do {
        if (param_3 == 0) break;
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        *pbVar5 = *pbVar5 ^ *param_2;
        param_2 = param_2 + 1;
        pbVar5 = pbVar5 + 1;
        param_3 = param_3 - 1;
      } while (uVar7 < 0x10);
      (*pcVar1)(param_1 + 0x10,param_1 + 0x10,*(undefined8 *)(param_1 + 0x30));
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
      uVar8 = 0;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 143d48a20 CRYPTO_ccm128_decrypt body=479 status=ok
// SIG undefined CRYPTO_ccm128_decrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
CRYPTO_ccm128_decrypt(byte *param_1,ulonglong *param_2,ulonglong *param_3,ulonglong param_4)

{
  code *pcVar1;
  byte bVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  byte *pbVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [32];
  byte local_58;
  uint local_54;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  bVar2 = *param_1;
  pcVar1 = *(code **)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  local_58 = bVar2;
  if ((bVar2 & 0x40) == 0) {
    (*pcVar1)(param_1,param_1 + 0x10,uVar3);
  }
  uVar4 = 0;
  uVar6 = bVar2 & 7;
  uVar7 = (ulonglong)uVar6;
  local_54 = 0xf - uVar6;
  *param_1 = (byte)uVar6;
  if (local_54 < 0xf) {
    pbVar5 = param_1 + local_54;
    do {
      bVar2 = *pbVar5;
      *pbVar5 = 0;
      pbVar5 = pbVar5 + 1;
      uVar4 = (uVar4 | bVar2) << 8;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  bVar2 = param_1[0xf];
  param_1[0xf] = 1;
  if ((uVar4 | bVar2) == param_4) {
    if (0xf < param_4) {
      uVar4 = param_4 >> 4;
      param_4 = param_4 + uVar4 * -0x10;
      do {
        (*pcVar1)(param_1,&local_50,uVar3);
        uVar7 = 8;
        do {
          uVar6 = (int)uVar7 - 1;
          uVar7 = (ulonglong)uVar6;
          pbVar5 = param_1 + uVar7 + 8;
          *pbVar5 = *pbVar5 + 1;
          if (*pbVar5 != 0) break;
        } while (uVar6 != 0);
        uVar7 = *param_2;
        *param_3 = uVar7 ^ local_50;
        *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) ^ uVar7 ^ local_50;
        uVar7 = param_2[1];
        param_3[1] = uVar7 ^ local_48;
        *(ulonglong *)(param_1 + 0x18) = *(ulonglong *)(param_1 + 0x18) ^ uVar7 ^ local_48;
        (*pcVar1)(param_1 + 0x10,param_1 + 0x10,uVar3);
        param_2 = param_2 + 2;
        param_3 = param_3 + 2;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    uVar4 = 0;
    if (param_4 != 0) {
      (*pcVar1)(param_1,&local_50,uVar3);
      if (param_4 != 0) {
        do {
          uVar7 = (ulonglong)((int)uVar4 + 1);
          bVar2 = *(byte *)(uVar4 + (longlong)param_2) ^ *(byte *)((longlong)&local_50 + uVar4);
          *(byte *)(uVar4 + (longlong)param_3) = bVar2;
          param_1[uVar4 + 0x10] = param_1[uVar4 + 0x10] ^ bVar2;
          uVar4 = uVar7;
        } while (uVar7 < param_4);
      }
      (*pcVar1)(param_1 + 0x10,param_1 + 0x10,uVar3);
    }
    if (local_54 < 0x10) {
      pbVar5 = param_1 + local_54;
      for (uVar4 = (ulonglong)(0x10 - local_54); uVar4 != 0; uVar4 = uVar4 - 1) {
        *pbVar5 = 0;
        pbVar5 = pbVar5 + 1;
      }
    }
    (*pcVar1)(param_1,&local_50,uVar3);
    *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) ^ local_50;
    *(ulonglong *)(param_1 + 0x18) = *(ulonglong *)(param_1 + 0x18) ^ local_48;
    *param_1 = local_58;
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



// FUNCTION 143d48c00 CRYPTO_ccm128_decrypt_ccm64 body=454 status=ok
// SIG undefined CRYPTO_ccm128_decrypt_ccm64(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
CRYPTO_ccm128_decrypt_ccm64
          (byte *param_1,longlong param_2,longlong param_3,ulonglong param_4,code *param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  byte bVar3;
  ulonglong uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 auStack_a8 [32];
  byte *local_88;
  byte *local_80;
  byte local_78;
  code *local_70;
  code *local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  undefined8 uStack_48;
  
  uStack_48 = 0x143d48c17;
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  bVar3 = *param_1;
  local_70 = *(code **)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  local_68 = param_5;
  local_78 = bVar3;
  if ((bVar3 & 0x40) == 0) {
    (*local_70)(param_1,param_1 + 0x10,uVar1);
  }
  uVar6 = 0;
  uVar7 = bVar3 & 7;
  uVar8 = (ulonglong)uVar7;
  uVar9 = 0xf - uVar7;
  *param_1 = (byte)uVar7;
  uVar4 = uVar6;
  if (uVar9 < 0xf) {
    pbVar5 = param_1 + uVar9;
    do {
      bVar3 = *pbVar5;
      *pbVar5 = 0;
      pbVar5 = pbVar5 + 1;
      uVar4 = (uVar4 | bVar3) << 8;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  bVar3 = param_1[0xf];
  param_1[0xf] = 1;
  if ((uVar4 | bVar3) != param_4) {
    return 0xffffffff;
  }
  uVar4 = param_4 >> 4;
  if (uVar4 != 0) {
    local_88 = param_1;
    local_80 = param_1 + 0x10;
    (*local_68)(param_2,param_3,uVar4,uVar1);
    param_2 = param_2 + uVar4 * 0x10;
    param_3 = param_3 + uVar4 * 0x10;
    param_4 = param_4 + uVar4 * -0x10;
    if (param_4 == 0) goto LAB_143d48d66;
    ctr64_add(param_1,uVar4);
  }
  pcVar2 = local_70;
  if (param_4 != 0) {
    (*local_70)(param_1,&local_60,uVar1);
    if (param_4 != 0) {
      do {
        uVar4 = (ulonglong)((int)uVar6 + 1);
        bVar3 = *(byte *)(uVar6 + param_2) ^ *(byte *)((longlong)&local_60 + uVar6);
        *(byte *)(uVar6 + param_3) = bVar3;
        param_1[uVar6 + 0x10] = param_1[uVar6 + 0x10] ^ bVar3;
        uVar6 = uVar4;
      } while (uVar4 < param_4);
    }
    (*pcVar2)(param_1 + 0x10,param_1 + 0x10,uVar1);
  }
LAB_143d48d66:
  if (uVar9 < 0x10) {
    pbVar5 = param_1 + uVar9;
    for (uVar4 = (ulonglong)(0x10 - uVar9); uVar4 != 0; uVar4 = uVar4 - 1) {
      *pbVar5 = 0;
      pbVar5 = pbVar5 + 1;
    }
  }
  (*local_70)(param_1,&local_60,uVar1);
  *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) ^ local_60;
  *(ulonglong *)(param_1 + 0x18) = *(ulonglong *)(param_1 + 0x18) ^ local_58;
  *param_1 = local_78;
  return 0;
}



// FUNCTION 143d48dd0 CRYPTO_ccm128_encrypt body=778 status=ok
// SIG undefined CRYPTO_ccm128_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
CRYPTO_ccm128_encrypt(byte *param_1,ulonglong *param_2,ulonglong *param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  byte bVar2;
  code *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_78 [32];
  byte local_58;
  uint local_54;
  ulonglong local_50 [3];
  
  local_50[2] = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_58 = *param_1;
  uVar13 = (uint)local_58;
  pcVar3 = *(code **)(param_1 + 0x28);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  if ((local_58 & 0x40) == 0) {
    (*pcVar3)(param_1,param_1 + 0x10,uVar7);
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
  }
  uVar13 = uVar13 & 7;
  uVar14 = (ulonglong)uVar13;
  uVar15 = 0;
  local_54 = 0xf - uVar13;
  *param_1 = (byte)uVar13;
  uVar10 = uVar15;
  if (local_54 < 0xf) {
    pbVar12 = param_1 + local_54;
    do {
      bVar2 = *pbVar12;
      *pbVar12 = 0;
      pbVar12 = pbVar12 + 1;
      uVar10 = (uVar10 | bVar2) << 8;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  bVar2 = param_1[0xf];
  param_1[0xf] = 1;
  if ((uVar10 | bVar2) == param_4) {
    *(ulonglong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + ((param_4 + 0xf | 8) >> 3);
    if (*(ulonglong *)(param_1 + 0x20) < 0x2000000000000001) {
      if (0xf < param_4) {
        uVar10 = param_4 >> 4;
        param_4 = param_4 + uVar10 * -0x10;
        do {
          *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) ^ *param_2;
          *(ulonglong *)(param_1 + 0x18) = *(ulonglong *)(param_1 + 0x18) ^ param_2[1];
          (*pcVar3)(param_1 + 0x10,param_1 + 0x10,uVar7);
          (*pcVar3)(param_1,local_50,uVar7);
          uVar14 = 8;
          do {
            uVar13 = (int)uVar14 - 1;
            uVar14 = (ulonglong)uVar13;
            pbVar12 = param_1 + uVar14 + 8;
            *pbVar12 = *pbVar12 + 1;
            if (*pbVar12 != 0) break;
          } while (uVar13 != 0);
          *param_3 = *param_2 ^ local_50[0];
          puVar1 = param_2 + 1;
          param_2 = param_2 + 2;
          param_3[1] = local_50[1] ^ *puVar1;
          param_3 = param_3 + 2;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      uVar13 = local_54;
      uVar10 = uVar15;
      if (param_4 != 0) {
        do {
          uVar14 = (ulonglong)((int)uVar10 + 1);
          param_1[uVar10 + 0x10] = param_1[uVar10 + 0x10] ^ *(byte *)(uVar10 + (longlong)param_2);
          uVar10 = uVar14;
        } while (uVar14 < param_4);
        (*pcVar3)(param_1 + 0x10,param_1 + 0x10,uVar7);
        (*pcVar3)(param_1,local_50,uVar7);
        uVar10 = uVar15;
        if (0x3f < param_4) {
          uVar6 = (int)param_4 - 1;
          uVar10 = 0;
          if ((((ulonglong *)((longlong)local_50 + (ulonglong)uVar6) < param_3) ||
              ((ulonglong *)((ulonglong)uVar6 + (longlong)param_3) < local_50)) &&
             (((ulonglong *)((ulonglong)uVar6 + (longlong)param_2) < param_3 ||
              ((ulonglong *)((ulonglong)uVar6 + (longlong)param_3) < param_2)))) {
            uVar6 = 0x20;
            do {
              uVar14 = *(ulonglong *)((longlong)local_50 + uVar15 + 8);
              uVar8 = (ulonglong)(uVar6 - 0x10);
              uVar11 = (int)uVar15 + 0x40;
              uVar10 = (ulonglong)uVar11;
              uVar4 = ((ulonglong *)(uVar15 + (longlong)param_2))[1];
              uVar9 = *(ulonglong *)((longlong)local_50 + uVar8);
              uVar5 = *(ulonglong *)((longlong)local_50 + uVar8 + 8);
              *(ulonglong *)(uVar15 + (longlong)param_3) =
                   *(ulonglong *)(uVar15 + (longlong)param_2) ^
                   *(ulonglong *)((longlong)local_50 + uVar15);
              ((ulonglong *)(uVar15 + (longlong)param_3))[1] = uVar4 ^ uVar14;
              uVar15 = (ulonglong)uVar11;
              uVar14 = ((ulonglong *)(uVar8 + (longlong)param_2))[1];
              *(ulonglong *)(uVar8 + (longlong)param_3) =
                   *(ulonglong *)(uVar8 + (longlong)param_2) ^ uVar9;
              ((ulonglong *)(uVar8 + (longlong)param_3))[1] = uVar14 ^ uVar5;
              uVar9 = (ulonglong)uVar6;
              uVar14 = *(ulonglong *)((longlong)local_50 + uVar9 + 8);
              uVar4 = ((ulonglong *)(uVar9 + (longlong)param_2))[1];
              *(ulonglong *)(uVar9 + (longlong)param_3) =
                   *(ulonglong *)(uVar9 + (longlong)param_2) ^
                   *(ulonglong *)((longlong)local_50 + uVar9);
              ((ulonglong *)(uVar9 + (longlong)param_3))[1] = uVar4 ^ uVar14;
              uVar9 = (ulonglong)(uVar6 + 0x10);
              uVar6 = uVar6 + 0x40;
              uVar14 = ((ulonglong *)(uVar9 + (longlong)param_2))[1];
              uVar4 = *(ulonglong *)((longlong)local_50 + uVar9 + 8);
              *(ulonglong *)(uVar9 + (longlong)param_3) =
                   *(ulonglong *)(uVar9 + (longlong)param_2) ^
                   *(ulonglong *)((longlong)local_50 + uVar9);
              ((ulonglong *)(uVar9 + (longlong)param_3))[1] = uVar14 ^ uVar4;
            } while (uVar15 < (param_4 & 0xffffffffffffffc0));
          }
        }
        for (; uVar10 < param_4; uVar10 = (ulonglong)((int)uVar10 + 1)) {
          *(byte *)(uVar10 + (longlong)param_3) =
               *(byte *)(uVar10 + (longlong)param_2) ^ *(byte *)((longlong)local_50 + uVar10);
        }
      }
      if (uVar13 < 0x10) {
        pbVar12 = param_1 + uVar13;
        for (uVar10 = (ulonglong)(0x10 - uVar13); uVar10 != 0; uVar10 = uVar10 - 1) {
          *pbVar12 = 0;
          pbVar12 = pbVar12 + 1;
        }
      }
      (*pcVar3)(param_1,local_50,uVar7);
      *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) ^ local_50[0];
      *(ulonglong *)(param_1 + 0x18) = *(ulonglong *)(param_1 + 0x18) ^ local_50[1];
      *param_1 = local_58;
      uVar7 = 0;
    }
    else {
      uVar7 = 0xfffffffe;
    }
  }
  else {
    uVar7 = 0xffffffff;
  }
  return uVar7;
}



// FUNCTION 143d490e0 CRYPTO_ccm128_encrypt_ccm64 body=730 status=ok
// SIG undefined CRYPTO_ccm128_encrypt_ccm64(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
CRYPTO_ccm128_encrypt_ccm64
          (byte *param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4,code *param_5)

{
  byte bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  byte *pbVar9;
  code *pcVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 auStack_a8 [32];
  byte *local_88;
  byte *local_80;
  byte local_78;
  code *local_70;
  code *local_68;
  ulonglong local_60 [4];
  
  local_60[3] = 0x143d490f7;
  local_60[2] = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  bVar1 = *param_1;
  local_70 = *(code **)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  local_68 = param_5;
  local_78 = bVar1;
  if ((bVar1 & 0x40) == 0) {
    (*local_70)(param_1,param_1 + 0x10,uVar2);
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
  }
  uVar14 = 0;
  uVar11 = bVar1 & 7;
  uVar12 = (ulonglong)uVar11;
  uVar13 = 0xf - uVar11;
  *param_1 = (byte)uVar11;
  uVar7 = uVar14;
  if (uVar13 < 0xf) {
    pbVar9 = param_1 + uVar13;
    do {
      bVar1 = *pbVar9;
      *pbVar9 = 0;
      pbVar9 = pbVar9 + 1;
      uVar7 = (uVar7 | bVar1) << 8;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  bVar1 = param_1[0xf];
  param_1[0xf] = 1;
  if ((uVar7 | bVar1) != param_4) {
    return 0xffffffff;
  }
  *(ulonglong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + ((param_4 + 0xf | 8) >> 3);
  if (0x2000000000000000 < *(ulonglong *)(param_1 + 0x20)) {
    return 0xfffffffe;
  }
  uVar7 = param_4 >> 4;
  if (uVar7 != 0) {
    local_80 = param_1 + 0x10;
    local_88 = param_1;
    (*local_68)(param_2,param_3,uVar7,uVar2);
    param_2 = param_2 + uVar7 * 2;
    param_3 = param_3 + uVar7 * 0x10;
    param_4 = param_4 + uVar7 * -0x10;
    pcVar10 = local_70;
    if (param_4 == 0) goto LAB_143d4935c;
    ctr64_add(param_1,uVar7);
  }
  pcVar10 = local_70;
  uVar7 = uVar14;
  if (param_4 != 0) {
    do {
      uVar12 = (ulonglong)((int)uVar7 + 1);
      param_1[uVar7 + 0x10] = param_1[uVar7 + 0x10] ^ *(byte *)(uVar7 + (longlong)param_2);
      uVar7 = uVar12;
    } while (uVar12 < param_4);
    (*local_70)(param_1 + 0x10,param_1 + 0x10,uVar2);
    (*pcVar10)(param_1,local_60,uVar2);
    uVar7 = uVar14;
    if (0x3f < param_4) {
      uVar11 = (int)param_4 - 1;
      uVar7 = 0;
      if ((((longlong)local_60 + (ulonglong)uVar11 < param_3) ||
          ((ulonglong *)(uVar11 + param_3) < local_60)) &&
         (((ulonglong)uVar11 + (longlong)param_2 < param_3 ||
          ((ulonglong *)(uVar11 + param_3) < param_2)))) {
        uVar11 = 0x20;
        do {
          uVar12 = *(ulonglong *)((longlong)local_60 + uVar14 + 8);
          uVar5 = (ulonglong)(uVar11 - 0x10);
          uVar8 = (int)uVar14 + 0x40;
          uVar7 = (ulonglong)uVar8;
          uVar3 = ((ulonglong *)(uVar14 + (longlong)param_2))[1];
          uVar6 = *(ulonglong *)((longlong)local_60 + uVar5);
          uVar4 = *(ulonglong *)((longlong)local_60 + uVar5 + 8);
          *(ulonglong *)(uVar14 + param_3) =
               *(ulonglong *)(uVar14 + (longlong)param_2) ^
               *(ulonglong *)((longlong)local_60 + uVar14);
          ((ulonglong *)(uVar14 + param_3))[1] = uVar3 ^ uVar12;
          uVar14 = (ulonglong)uVar8;
          uVar12 = ((ulonglong *)(uVar5 + (longlong)param_2))[1];
          *(ulonglong *)(uVar5 + param_3) = *(ulonglong *)(uVar5 + (longlong)param_2) ^ uVar6;
          ((ulonglong *)(uVar5 + param_3))[1] = uVar12 ^ uVar4;
          uVar6 = (ulonglong)uVar11;
          uVar12 = *(ulonglong *)((longlong)local_60 + uVar6 + 8);
          uVar3 = ((ulonglong *)(uVar6 + (longlong)param_2))[1];
          *(ulonglong *)(uVar6 + param_3) =
               *(ulonglong *)(uVar6 + (longlong)param_2) ^
               *(ulonglong *)((longlong)local_60 + uVar6);
          ((ulonglong *)(uVar6 + param_3))[1] = uVar3 ^ uVar12;
          uVar6 = (ulonglong)(uVar11 + 0x10);
          uVar11 = uVar11 + 0x40;
          uVar12 = ((ulonglong *)(uVar6 + (longlong)param_2))[1];
          uVar3 = *(ulonglong *)((longlong)local_60 + uVar6 + 8);
          *(ulonglong *)(uVar6 + param_3) =
               *(ulonglong *)(uVar6 + (longlong)param_2) ^
               *(ulonglong *)((longlong)local_60 + uVar6);
          ((ulonglong *)(uVar6 + param_3))[1] = uVar12 ^ uVar3;
        } while (uVar14 < (param_4 & 0xffffffffffffffc0));
      }
    }
    for (; uVar7 < param_4; uVar7 = (ulonglong)((int)uVar7 + 1)) {
      *(byte *)(uVar7 + param_3) =
           *(byte *)(uVar7 + (longlong)param_2) ^ *(byte *)((longlong)local_60 + uVar7);
    }
  }
LAB_143d4935c:
  if (uVar13 < 0x10) {
    pbVar9 = param_1 + uVar13;
    for (uVar7 = (ulonglong)(0x10 - uVar13); uVar7 != 0; uVar7 = uVar7 - 1) {
      *pbVar9 = 0;
      pbVar9 = pbVar9 + 1;
    }
  }
  (*pcVar10)(param_1,local_60,uVar2);
  *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) ^ local_60[0];
  *(ulonglong *)(param_1 + 0x18) = *(ulonglong *)(param_1 + 0x18) ^ local_60[1];
  *param_1 = local_78;
  return 0;
}



// FUNCTION 143d493c0 CRYPTO_ccm128_init body=50 status=ok
// SIG undefined CRYPTO_ccm128_init(void)

void CRYPTO_ccm128_init(byte *param_1,int param_2,char param_3,undefined8 param_4,undefined8 param_5
                       )

{
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
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
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined8 *)(param_1 + 0x28) = param_5;
  *param_1 = ((byte)(param_2 - 2U >> 1) & 7) << 3 | param_3 - 1U & 7;
  *(undefined8 *)(param_1 + 0x30) = param_4;
  return;
}



// FUNCTION 143d49400 CRYPTO_ccm128_setiv body=166 status=ok
// SIG undefined CRYPTO_ccm128_setiv(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CRYPTO_ccm128_setiv(byte *param_1,void *param_2,ulonglong param_3,undefined8 param_4)

{
  ulonglong _Size;
  uint uVar1;
  
  uVar1 = *param_1 & 7;
  _Size = (ulonglong)(0xe - uVar1);
  if (param_3 < _Size) {
    return 0xffffffff;
  }
  if (uVar1 < 3) {
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  else {
    param_1[8] = (byte)((ulonglong)param_4 >> 0x38);
    param_1[9] = (byte)((ulonglong)param_4 >> 0x30);
    param_1[10] = (byte)((ulonglong)param_4 >> 0x28);
    param_1[0xb] = (byte)((ulonglong)param_4 >> 0x20);
  }
  param_1[0xf] = (byte)param_4;
  *param_1 = *param_1 & 0xbf;
  param_1[0xc] = (byte)((ulonglong)param_4 >> 0x18);
  param_1[0xd] = (byte)((ulonglong)param_4 >> 0x10);
  param_1[0xe] = (byte)((ulonglong)param_4 >> 8);
  _guard_xfg_dispatch_icall_nop(param_1 + 1,param_2,_Size);
  return 0;
}



// FUNCTION 143d494b0 CRYPTO_ccm128_tag body=71 status=ok
// SIG undefined CRYPTO_ccm128_tag(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong CRYPTO_ccm128_tag(byte *param_1,void *param_2,ulonglong param_3)

{
  ulonglong _Size;
  
  _Size = (ulonglong)((*param_1 >> 3 & 7) * 2 + 2);
  if (param_3 < _Size) {
    return 0;
  }
  _guard_xfg_dispatch_icall_nop(param_2,param_1 + 0x10,_Size);
  return _Size;
}



// FUNCTION 143d49500 ctr64_add body=96 status=ok
// SIG undefined ctr64_add(void)

void ctr64_add(longlong param_1,ulonglong param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  bool bVar6;
  
  uVar3 = 0;
  puVar4 = (undefined1 *)(param_1 + 0x10);
  do {
    pbVar1 = puVar4 + -1;
    puVar4 = puVar4 + -1;
    uVar2 = uVar3 + *pbVar1 + (param_2 & 0xff);
    *puVar4 = (char)uVar2;
    uVar3 = uVar2 >> 8;
    uVar5 = param_2 >> 8;
    if (puVar4 + (-8 - param_1) == (undefined1 *)0x0) {
      return;
    }
    bVar6 = 0xff < param_2;
    param_2 = uVar5;
  } while ((bVar6) || (0xff < uVar2));
  return;
}



// FUNCTION 143d49560 CRYPTO_xts128_encrypt body=605 status=ok
// SIG undefined CRYPTO_xts128_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
CRYPTO_xts128_encrypt
          (undefined8 *param_1,ulonglong *param_2,ulonglong *param_3,ulonglong *param_4,
          ulonglong param_5,int param_6)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x143d49574;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  if (param_5 < 0x10) {
    uVar4 = 0xffffffff;
  }
  else {
    local_58 = *param_2;
    uStack_50 = param_2[1];
    (*(code *)param_1[3])(&local_58,&local_58,param_1[1]);
    if ((param_6 == 0) && ((param_5 & 0xf) != 0)) {
      param_5 = param_5 - 0x10;
    }
    while (0xf < param_5) {
      local_68 = *param_3 ^ local_58;
      uStack_60 = param_3[1] ^ uStack_50;
      (*(code *)param_1[2])(&local_68,&local_68,*param_1);
      param_3 = param_3 + 2;
      *param_4 = local_68 ^ local_58;
      local_68 = local_68 ^ local_58;
      param_4[1] = uStack_60 ^ uStack_50;
      param_4 = param_4 + 2;
      uStack_60 = uStack_60 ^ uStack_50;
      param_5 = param_5 - 0x10;
      if (param_5 == 0) goto LAB_143d497a4;
      uVar5 = local_58 >> 0x3f;
      local_58 = (ulonglong)(uStack_50._4_4_ >> 0x1f & 0x87) ^ local_58 * 2;
      uStack_50 = uStack_50 * 2 | uVar5;
    }
    if (param_6 == 0) {
      local_48 = (ulonglong)((uint)((longlong)uStack_50 >> 0x3f) & 0x87) ^ local_58 * 2;
      uStack_40 = uStack_50 * 2 | local_58 >> 0x3f;
      uStack_60 = param_3[1] ^ uStack_40;
      local_68 = local_48 ^ *param_3;
      (*(code *)param_1[2])(&local_68,&local_68,*param_1);
      uVar3 = 0;
      local_68 = local_48 ^ local_68;
      uStack_60 = uStack_40 ^ uStack_60;
      if (param_5 != 0) {
        uVar5 = 0;
        do {
          uVar1 = uVar3 + 0x10;
          uVar3 = uVar3 + 1;
          uVar2 = *(undefined1 *)((longlong)&local_68 + uVar5);
          *(undefined1 *)((longlong)&local_68 + uVar5) =
               *(undefined1 *)((ulonglong)uVar1 + (longlong)param_3);
          uVar5 = (ulonglong)uVar3;
          *(undefined1 *)((ulonglong)uVar1 + (longlong)param_4) = uVar2;
        } while (uVar5 < param_5);
      }
      local_68 = local_58 ^ local_68;
      uStack_60 = uStack_50 ^ uStack_60;
      (*(code *)param_1[2])(&local_68,&local_68,*param_1);
      *param_4 = local_58 ^ local_68;
      param_4[1] = uStack_50 ^ uStack_60;
    }
    else {
      uVar3 = 0;
      if (param_5 != 0) {
        uVar5 = 0;
        do {
          uVar2 = *(undefined1 *)(uVar5 + (longlong)param_3);
          uVar3 = uVar3 + 1;
          *(undefined1 *)(uVar5 + (longlong)param_4) = *(undefined1 *)((longlong)&local_68 + uVar5);
          *(undefined1 *)((longlong)&local_68 + uVar5) = uVar2;
          uVar5 = (ulonglong)uVar3;
        } while (uVar5 < param_5);
      }
      local_68 = local_58 ^ local_68;
      uStack_60 = uStack_50 ^ uStack_60;
      (*(code *)param_1[2])(&local_68,&local_68,*param_1);
      param_4[-2] = local_58 ^ local_68;
      param_4[-1] = uStack_50 ^ uStack_60;
    }
LAB_143d497a4:
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 143d497c0 CRYPTO_128_unwrap body=155 status=ok
// SIG undefined CRYPTO_128_unwrap(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong CRYPTO_128_unwrap(undefined8 param_1,undefined8 *param_2,undefined8 param_3,
                          undefined8 param_4,undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  local_30 = param_6;
  local_38 = param_5;
  lVar2 = crypto_128_unwrap_raw(param_1,local_28);
  if (lVar2 != 0) {
    puVar3 = &DAT_145d84a80;
    if (param_2 != (undefined8 *)0x0) {
      puVar3 = param_2;
    }
    iVar1 = FUN_14004ffa0(local_28,puVar3,8);
    if (iVar1 == 0) {
      return lVar2;
    }
    FUN_14004ff40(param_3,lVar2);
  }
  return 0;
}



// FUNCTION 143d49860 CRYPTO_128_unwrap_pad body=346 status=ok
// SIG undefined CRYPTO_128_unwrap_pad(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong CRYPTO_128_unwrap_pad
                    (undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
                    ulonglong param_5,code *param_6)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  code *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  if (((param_5 & 7) != 0) || (0x7fffffef < param_5 - 0x10)) {
    return 0;
  }
  if (param_5 == 0x10) {
    (*param_6)(param_4,&local_40,param_1);
    local_48 = local_40;
    lVar5 = 8;
    *param_3 = local_38;
    FUN_14004ff40(&local_40,0x10);
  }
  else {
    local_50 = param_6;
    local_58 = param_5;
    lVar5 = param_5 - 8;
    lVar2 = crypto_128_unwrap_raw(param_1,&local_48);
    if (lVar5 != lVar2) goto LAB_143d499a7;
  }
  puVar3 = &DAT_145d84a88;
  if (param_2 != (undefined4 *)0x0) {
    puVar3 = param_2;
  }
  iVar1 = FUN_14004ffa0(&local_48,puVar3,4);
  if (iVar1 == 0) {
    uVar4 = (ulonglong)
            CONCAT31(CONCAT21(CONCAT11(local_48._4_1_,local_48._5_1_),local_48._6_1_),local_48._7_1_
                    );
    if ((((param_5 & 0xfffffffffffffff8) - 0x10 < uVar4) &&
        (uVar4 <= (param_5 & 0xfffffffffffffff8) - 8)) &&
       (iVar1 = FUN_14004ffa0((longlong)param_3 + uVar4,&DAT_146bcb978,lVar5 - uVar4), iVar1 == 0))
    {
      return uVar4;
    }
  }
LAB_143d499a7:
  FUN_14004ff40(param_3,param_5);
  return 0;
}



// FUNCTION 143d499c0 CRYPTO_128_wrap body=361 status=ok
// SIG undefined CRYPTO_128_wrap(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong CRYPTO_128_wrap(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,void *param_4,
                        ulonglong param_5,code *param_6)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  if (((param_5 & 7) == 0) && (param_5 - 0x10 < 0x7ffffff1)) {
    uVar4 = 1;
    local_58 = param_3;
    _guard_xfg_dispatch_icall_nop(param_3 + 1,param_4,param_5);
    lVar6 = 6;
    puVar3 = &DAT_145d84a80;
    if (param_2 != (undefined8 *)0x0) {
      puVar3 = param_2;
    }
    local_50 = *puVar3;
    do {
      if (param_5 != 0) {
        lVar5 = (param_5 - 1 >> 3) + 1;
        puVar3 = param_3 + 1;
        do {
          local_48 = *puVar3;
          (*param_6)(&local_50,&local_50,param_1);
          uVar2 = local_50;
          bVar1 = local_50._7_1_ ^ (byte)uVar4;
          local_50 = CONCAT17(bVar1,(undefined7)local_50);
          if (0xff < uVar4) {
            local_50._6_1_ = SUB81(uVar2,6);
            local_50._5_1_ = SUB81(uVar2,5);
            local_50._4_1_ = SUB81(uVar2,4);
            local_50._4_1_ = local_50._4_1_ ^ (byte)(uVar4 >> 0x18);
            local_50._0_4_ = (undefined4)uVar2;
            local_50 = CONCAT35(CONCAT21(CONCAT11(bVar1,local_50._6_1_ ^ (byte)(uVar4 >> 8)),
                                         local_50._5_1_ ^ (byte)(uVar4 >> 0x10)),
                                CONCAT14(local_50._4_1_,(undefined4)local_50));
          }
          uVar4 = uVar4 + 1;
          *puVar3 = local_48;
          puVar3 = puVar3 + 1;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    *local_58 = local_50;
    lVar6 = param_5 + 8;
  }
  else {
    lVar6 = 0;
  }
  return lVar6;
}



// FUNCTION 143d49b30 CRYPTO_128_wrap_pad body=532 status=ok
// SIG undefined CRYPTO_128_wrap_pad(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong CRYPTO_128_wrap_pad(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,
                            void *param_4,size_t param_5,code *param_6)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong _Size;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined4 local_70;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  _Size = param_5 + 7 & 0xfffffffffffffff8;
  if (param_5 - 1 < 0x7fffffff) {
    local_70 = 0xa65959a6;
    if (param_2 != (undefined4 *)0x0) {
      local_70 = *param_2;
    }
    uStack_69 = (undefined1)param_5;
    uStack_6c = (undefined1)(param_5 >> 0x18);
    uStack_6b = (undefined1)(param_5 >> 0x10);
    uStack_6a = (undefined1)(param_5 >> 8);
    local_78 = param_3;
    if (_Size == 8) {
      _guard_xfg_dispatch_icall_nop(param_3 + 1,param_4,param_5);
      *param_3 = CONCAT17(uStack_69,
                          CONCAT16(uStack_6a,CONCAT15(uStack_6b,CONCAT14(uStack_6c,local_70))));
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)(param_5 + (longlong)param_3) + 8),0,_Size - param_5);
      (*param_6)(param_3,param_3,param_1);
      lVar3 = 0x10;
    }
    else {
      _guard_xfg_dispatch_icall_nop(param_3,param_4,param_5);
      _guard_xfg_dispatch_icall_nop((void *)(param_5 + (longlong)param_3),0,_Size - param_5);
      if (_Size - 0x10 < 0x7ffffff1) {
        uVar4 = 1;
        _guard_xfg_dispatch_icall_nop(param_3 + 1,param_3,_Size);
        local_68 = CONCAT17(uStack_69,
                            CONCAT16(uStack_6a,CONCAT15(uStack_6b,CONCAT14(uStack_6c,local_70))));
        lVar3 = 6;
        do {
          if (_Size != 0) {
            lVar5 = (_Size - 1 >> 3) + 1;
            puVar6 = param_3 + 1;
            do {
              local_60 = *puVar6;
              (*param_6)(&local_68,&local_68,param_1);
              uVar2 = local_68;
              bVar1 = local_68._7_1_ ^ (byte)uVar4;
              local_68 = CONCAT17(bVar1,(undefined7)local_68);
              if (0xff < uVar4) {
                local_68._6_1_ = SUB81(uVar2,6);
                local_68._5_1_ = SUB81(uVar2,5);
                local_68._4_1_ = SUB81(uVar2,4);
                local_68._4_1_ = local_68._4_1_ ^ (byte)(uVar4 >> 0x18);
                local_68._0_4_ = (undefined4)uVar2;
                local_68 = CONCAT35(CONCAT21(CONCAT11(bVar1,local_68._6_1_ ^ (byte)(uVar4 >> 8)),
                                             local_68._5_1_ ^ (byte)(uVar4 >> 0x10)),
                                    CONCAT14(local_68._4_1_,(undefined4)local_68));
              }
              uVar4 = uVar4 + 1;
              *puVar6 = local_60;
              puVar6 = puVar6 + 1;
              lVar5 = lVar5 + -1;
            } while (lVar5 != 0);
          }
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
        *local_78 = local_68;
        lVar3 = (longlong)((int)_Size + 8);
      }
      else {
        lVar3 = 0;
      }
    }
  }
  else {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 143d49d50 crypto_128_unwrap_raw body=357 status=ok
// SIG undefined crypto_128_unwrap_raw(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong crypto_128_unwrap_raw
                    (undefined8 param_1,undefined8 *param_2,void *param_3,undefined8 *param_4,
                    longlong param_5,code *param_6)

{
  byte bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong _Size;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  _Size = param_5 - 8;
  if (((_Size & 7) == 0) && (param_5 - 0x18U < 0x7ffffff1)) {
    local_60 = *param_4;
    uVar3 = (_Size >> 3) * 6;
    local_68 = param_2;
    _guard_xfg_dispatch_icall_nop(param_3,param_4 + 1,_Size);
    lVar6 = 6;
    do {
      puVar5 = (undefined8 *)((longlong)param_3 + param_5 + -0x10);
      if (_Size != 0) {
        lVar4 = (param_5 - 9U >> 3) + 1;
        do {
          uVar2 = local_60;
          bVar1 = local_60._7_1_ ^ (byte)uVar3;
          local_60 = CONCAT17(bVar1,(undefined7)local_60);
          if (0xff < uVar3) {
            local_60._6_1_ = SUB81(uVar2,6);
            local_60._5_1_ = SUB81(uVar2,5);
            local_60._4_1_ = SUB81(uVar2,4);
            local_60._4_1_ = local_60._4_1_ ^ (byte)(uVar3 >> 0x18);
            local_60._0_4_ = (undefined4)uVar2;
            local_60 = CONCAT35(CONCAT21(CONCAT11(bVar1,local_60._6_1_ ^ (byte)(uVar3 >> 8)),
                                         local_60._5_1_ ^ (byte)(uVar3 >> 0x10)),
                                CONCAT14(local_60._4_1_,(undefined4)local_60));
          }
          local_58 = *puVar5;
          (*param_6)(&local_60,&local_60,param_1);
          uVar3 = uVar3 - 1;
          *puVar5 = local_58;
          puVar5 = puVar5 + -1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    *local_68 = local_60;
  }
  else {
    _Size = 0;
  }
  return _Size;
}



// FUNCTION 143d49ec0 CRYPTO_ocb128_aad body=393 status=ok
// SIG undefined CRYPTO_ocb128_aad(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 CRYPTO_ocb128_aad(undefined8 *param_1,uint *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  uint *puVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x143d49ed2;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  uVar1 = param_1[0xc];
  uVar7 = (param_3 >> 4) + uVar1;
  while( true ) {
    uVar1 = uVar1 + 1;
    if (uVar7 < uVar1) {
      uVar8 = (uint)param_3 & 0xf;
      if ((param_3 & 0xf) != 0) {
        param_1[0xe] = param_1[0xe] ^ param_1[7];
        param_1[0xf] = param_1[0xf] ^ param_1[8];
        uVar1 = param_1[0xf];
        uVar4 = param_1[0xe];
        local_48 = 0;
        uStack_40 = 0;
        _guard_xfg_dispatch_icall_nop(&local_48,param_2,(ulonglong)uVar8);
        uVar2 = param_1[2];
        *(undefined1 *)((longlong)&local_48 + (ulonglong)uVar8) = 0x80;
        local_48 = local_48 ^ uVar4;
        uStack_40 = uStack_40 ^ uVar1;
        (*(code *)*param_1)(&local_48,&local_48,uVar2);
        param_1[0x10] = param_1[0x10] ^ local_48;
        param_1[0x11] = param_1[0x11] ^ uStack_40;
      }
      param_1[0xc] = uVar7;
      return 1;
    }
    iVar6 = 0;
    for (uVar4 = uVar1; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1) {
      iVar6 = iVar6 + 1;
    }
    puVar5 = (ulonglong *)ocb_lookup_l(param_1,iVar6);
    if (puVar5 == (ulonglong *)0x0) break;
    param_1[0xe] = param_1[0xe] ^ *puVar5;
    param_1[0xf] = param_1[0xf] ^ puVar5[1];
    uVar8 = *param_2;
    puVar3 = param_2 + 1;
    puVar5 = (ulonglong *)(param_2 + 2);
    param_2 = param_2 + 4;
    uStack_40 = *puVar5 ^ param_1[0xf];
    local_48 = CONCAT44(*puVar3 ^ *(uint *)((longlong)param_1 + 0x74),
                        uVar8 ^ *(uint *)(param_1 + 0xe));
    (*(code *)*param_1)(&local_48,&local_48,param_1[2]);
    param_1[0x10] = param_1[0x10] ^ local_48;
    param_1[0x11] = param_1[0x11] ^ uStack_40;
  }
  return 0;
}



// FUNCTION 143d4a050 CRYPTO_ocb128_cleanup body=71 status=ok
// SIG undefined CRYPTO_ocb128_cleanup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRYPTO_ocb128_cleanup(longlong param_1)

{
  if (param_1 != 0) {
    CRYPTO_clear_free(*(undefined8 *)(param_1 + 0x58),*(longlong *)(param_1 + 0x30) << 4,
                      "crypto\\modes\\ocb128.c",0x22d);
    FUN_14004ff40(param_1,0xb0);
  }
  return;
}



// FUNCTION 143d4a0a0 CRYPTO_ocb128_copy_ctx body=271 status=ok
// SIG undefined CRYPTO_ocb128_copy_ctx(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
CRYPTO_ocb128_copy_ctx(undefined8 *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  void *_Dst;
  undefined8 uVar5;
  
  uVar5 = 0x143d4a0b0;
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  uVar4 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar4;
  uVar4 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar4;
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  uVar4 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar4;
  uVar4 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar4;
  uVar4 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar4;
  uVar4 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar4;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x94);
  uVar2 = *(undefined4 *)(param_2 + 0x13);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar1;
  *(undefined4 *)(param_1 + 0x13) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar3;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xa4);
  uVar2 = *(undefined4 *)(param_2 + 0x15);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xac);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar1;
  *(undefined4 *)(param_1 + 0x15) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar3;
  if (param_3 != 0) {
    param_1[2] = param_3;
  }
  if (param_4 != 0) {
    param_1[3] = param_4;
  }
  if (param_2[0xb] != 0) {
    _Dst = (void *)CRYPTO_malloc(param_2[6] << 4,"crypto\\modes\\ocb128.c",0xcd);
    param_1[0xb] = _Dst;
    if (_Dst == (void *)0x0) {
      ERR_put_error(0xf,0x79,0x41,"crypto\\modes\\ocb128.c",0xce,uVar5);
      return 0;
    }
    _guard_xfg_dispatch_icall_nop(_Dst,(void *)param_2[0xb],(param_2[5] + 1) * 0x10);
  }
  return 1;
}



// FUNCTION 143d4a1b0 CRYPTO_ocb128_decrypt body=562 status=ok
// SIG undefined CRYPTO_ocb128_decrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
CRYPTO_ocb128_decrypt(undefined8 *param_1,uint *param_2,undefined4 *param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint *puVar3;
  ulonglong *puVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143d4a1c5;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  uVar2 = param_1[0xd];
  uVar7 = param_4 >> 4;
  uVar1 = uVar2 + uVar7;
  if ((uVar7 == 0) || (param_1[4] == 0)) {
    while (uVar2 = uVar2 + 1, uVar2 <= uVar1) {
      iVar5 = 0;
      for (uVar7 = uVar2; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1) {
        iVar5 = iVar5 + 1;
      }
      puVar4 = (ulonglong *)ocb_lookup_l(param_1,iVar5);
      if (puVar4 == (ulonglong *)0x0) {
        return 0;
      }
      param_1[0x12] = param_1[0x12] ^ *puVar4;
      param_1[0x13] = param_1[0x13] ^ puVar4[1];
      uVar9 = *param_2;
      puVar3 = param_2 + 1;
      puVar4 = (ulonglong *)(param_2 + 2);
      param_2 = param_2 + 4;
      uStack_50 = *puVar4 ^ param_1[0x13];
      local_58 = CONCAT44(*puVar3 ^ *(uint *)((longlong)param_1 + 0x94),
                          uVar9 ^ *(uint *)(param_1 + 0x12));
      (*(code *)param_1[1])(&local_58,&local_58,param_1[3]);
      uVar6 = local_58 ^ param_1[0x12];
      uVar7 = uStack_50 ^ param_1[0x13];
      param_1[0x14] = param_1[0x14] ^ uVar6;
      param_1[0x15] = param_1[0x15] ^ uVar7;
      local_58._0_4_ = (undefined4)uVar6;
      local_58._4_4_ = (undefined4)(uVar6 >> 0x20);
      uStack_50._0_4_ = (undefined4)uVar7;
      uStack_50._4_4_ = (undefined4)(uVar7 >> 0x20);
      *param_3 = (undefined4)local_58;
      param_3[1] = local_58._4_4_;
      param_3[2] = (undefined4)uStack_50;
      param_3[3] = uStack_50._4_4_;
      param_3 = param_3 + 4;
      local_58 = uVar6;
      uStack_50 = uVar7;
    }
  }
  else {
    lVar8 = 0;
    uVar2 = uVar1;
    while (uVar2 = uVar2 >> 1, uVar2 != 0) {
      lVar8 = lVar8 + 1;
    }
    lVar8 = ocb_lookup_l(param_1,lVar8);
    if (lVar8 == 0) {
      return 0;
    }
    local_60 = param_1 + 0x14;
    local_70 = param_1 + 0x12;
    local_78 = param_1[0xd] + 1;
    local_68 = param_1[0xb];
    (*(code *)param_1[4])(param_2,param_3,uVar7,param_1[3]);
  }
  uVar9 = (uint)param_4 & 0xf;
  if ((param_4 & 0xf) != 0) {
    puVar4 = param_1 + 0x12;
    *puVar4 = *puVar4 ^ param_1[7];
    param_1[0x13] = param_1[0x13] ^ param_1[8];
    (*(code *)*param_1)(puVar4,&local_58,param_1[2]);
    ocb_block_xor(param_2,&local_58,uVar9,param_3);
    local_58 = 0;
    uStack_50 = 0;
    _guard_xfg_dispatch_icall_nop(&local_58,param_3,(ulonglong)uVar9);
    *(undefined1 *)((longlong)&local_58 + (ulonglong)uVar9) = 0x80;
    param_1[0x14] = param_1[0x14] ^ local_58;
    param_1[0x15] = param_1[0x15] ^ uStack_50;
  }
  param_1[0xd] = uVar1;
  return 1;
}



// FUNCTION 143d4a3f0 CRYPTO_ocb128_encrypt body=561 status=ok
// SIG undefined CRYPTO_ocb128_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
CRYPTO_ocb128_encrypt(undefined8 *param_1,ulonglong *param_2,ulonglong *param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143d4a405;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  uVar2 = param_1[0xd];
  uVar5 = param_4 >> 4;
  uVar1 = uVar2 + uVar5;
  if ((uVar5 == 0) || (param_1[4] == 0)) {
    while (uVar2 = uVar2 + 1, uVar2 <= uVar1) {
      iVar4 = 0;
      for (uVar5 = uVar2; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1) {
        iVar4 = iVar4 + 1;
      }
      puVar3 = (ulonglong *)ocb_lookup_l(param_1,iVar4);
      if (puVar3 == (ulonglong *)0x0) {
        return 0;
      }
      param_1[0x12] = param_1[0x12] ^ *puVar3;
      param_1[0x13] = param_1[0x13] ^ puVar3[1];
      local_58 = *param_2;
      uStack_50 = param_2[1];
      param_2 = param_2 + 2;
      param_1[0x14] = param_1[0x14] ^ local_58;
      param_1[0x15] = param_1[0x15] ^ uStack_50;
      local_58 = local_58 ^ param_1[0x12];
      uStack_50 = uStack_50 ^ param_1[0x13];
      (*(code *)*param_1)(&local_58,&local_58,param_1[2]);
      local_58 = local_58 ^ param_1[0x12];
      uStack_50 = uStack_50 ^ param_1[0x13];
      *param_3 = local_58;
      param_3[1] = uStack_50;
      param_3 = param_3 + 2;
    }
  }
  else {
    lVar6 = 0;
    uVar2 = uVar1;
    while (uVar2 = uVar2 >> 1, uVar2 != 0) {
      lVar6 = lVar6 + 1;
    }
    lVar6 = ocb_lookup_l(param_1,lVar6);
    if (lVar6 == 0) {
      return 0;
    }
    local_60 = param_1 + 0x14;
    local_70 = param_1 + 0x12;
    local_78 = param_1[0xd] + 1;
    local_68 = param_1[0xb];
    (*(code *)param_1[4])(param_2,param_3,uVar5,param_1[2]);
  }
  uVar7 = (uint)param_4 & 0xf;
  if ((param_4 & 0xf) != 0) {
    puVar3 = param_1 + 0x12;
    *puVar3 = *puVar3 ^ param_1[7];
    param_1[0x13] = param_1[0x13] ^ param_1[8];
    (*(code *)*param_1)(puVar3,&local_58,param_1[2]);
    ocb_block_xor(param_2,&local_58,uVar7,param_3);
    local_58 = 0;
    uStack_50 = 0;
    _guard_xfg_dispatch_icall_nop(&local_58,param_2,(ulonglong)uVar7);
    *(undefined1 *)((longlong)&local_58 + (ulonglong)uVar7) = 0x80;
    param_1[0x14] = param_1[0x14] ^ local_58;
    param_1[0x15] = param_1[0x15] ^ uStack_50;
  }
  param_1[0xd] = uVar1;
  return 1;
}



// FUNCTION 143d4a630 CRYPTO_ocb128_finish body=25 status=ok
// SIG undefined CRYPTO_ocb128_finish(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRYPTO_ocb128_finish(void)

{
  ocb_finish();
  return;
}



// FUNCTION 143d4a650 CRYPTO_ocb128_init body=435 status=ok
// SIG undefined CRYPTO_ocb128_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool CRYPTO_ocb128_init(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                       undefined8 param_5,undefined8 param_6)

{
  byte *pbVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143d4a66b;
  _guard_xfg_dispatch_icall_nop(param_1,0,0xb0);
  param_1[6] = 5;
  lVar5 = CRYPTO_malloc(0x50,"crypto\\modes\\ocb128.c");
  param_1[0xb] = lVar5;
  if (lVar5 != 0) {
    param_1[1] = param_5;
    param_1[4] = param_6;
    *param_1 = param_4;
    param_1[2] = param_2;
    param_1[3] = param_3;
    (*param_4)(param_1 + 7,param_1 + 7,param_2);
    cVar2 = *(char *)(param_1 + 7);
    ocb_block_lshift(param_1 + 7,1,param_1 + 9);
    *(byte *)((longlong)param_1 + 0x57) = *(byte *)((longlong)param_1 + 0x57) ^ cVar2 >> 7 & 0x87U;
    cVar2 = *(char *)(param_1 + 9);
    lVar3 = param_1[0xb];
    ocb_block_lshift(param_1 + 9,1,lVar3);
    pbVar1 = (byte *)(lVar3 + 0xf);
    *pbVar1 = *pbVar1 ^ cVar2 >> 7 & 0x87U;
    pcVar4 = (char *)param_1[0xb];
    cVar2 = *pcVar4;
    ocb_block_lshift(pcVar4,1,pcVar4 + 0x10);
    pcVar4[0x1f] = pcVar4[0x1f] ^ cVar2 >> 7 & 0x87U;
    lVar3 = param_1[0xb];
    cVar2 = *(char *)(lVar3 + 0x10);
    ocb_block_lshift(lVar3 + 0x10,1,lVar3 + 0x20);
    *(byte *)(lVar3 + 0x2f) = *(byte *)(lVar3 + 0x2f) ^ cVar2 >> 7 & 0x87U;
    lVar3 = param_1[0xb];
    cVar2 = *(char *)(lVar3 + 0x20);
    ocb_block_lshift(lVar3 + 0x20,1,lVar3 + 0x30);
    *(byte *)(lVar3 + 0x3f) = *(byte *)(lVar3 + 0x3f) ^ cVar2 >> 7 & 0x87U;
    lVar3 = param_1[0xb];
    cVar2 = *(char *)(lVar3 + 0x30);
    ocb_block_lshift(lVar3 + 0x30,1,lVar3 + 0x40);
    *(byte *)(lVar3 + 0x4f) = *(byte *)(lVar3 + 0x4f) ^ cVar2 >> 7 & 0x87U;
    param_1[5] = 4;
  }
  else {
    ERR_put_error(0xf,0x7a,0x41,"crypto\\modes\\ocb128.c",0x9f,uVar6);
  }
  return lVar5 != 0;
}



// FUNCTION 143d4a810 CRYPTO_ocb128_setiv body=463 status=ok
// SIG undefined CRYPTO_ocb128_setiv(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 CRYPTO_ocb128_setiv(undefined8 *param_1,void *param_2,size_t param_3,longlong param_4)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_98 [32];
  byte local_78;
  undefined8 uStack_77;
  undefined4 uStack_6f;
  undefined2 uStack_6b;
  byte abStack_69 [17];
  byte local_58 [4];
  byte local_54;
  byte local_53;
  byte local_52;
  byte local_51;
  undefined1 local_48 [15];
  byte bStack_39;
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x143d4a824;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if ((param_3 - 1 < 0xf) && (param_4 - 1U < 0x10)) {
    _guard_xfg_dispatch_icall_nop(param_1 + 0xc,0,0x50);
    local_78 = (char)param_4 << 4;
    uStack_77 = 0;
    uStack_6f = 0;
    uStack_6b = 0;
    abStack_69[0] = 0;
    _guard_xfg_dispatch_icall_nop(abStack_69 + (1 - param_3),param_2,param_3);
    uVar1 = param_1[2];
    abStack_69[-param_3] = abStack_69[-param_3] | 1;
    local_48._1_8_ = uStack_77;
    local_48[0] = local_78;
    local_48._9_4_ = uStack_6f;
    local_48._13_2_ = uStack_6b;
    bStack_39 = abStack_69[0] & 0xc0;
    (*(code *)*param_1)(local_48,abStack_69 + 1,uVar1);
    local_58[0] = abStack_69[1] ^ abStack_69[2];
    local_58[1] = abStack_69[3] ^ abStack_69[2];
    local_58[2] = abStack_69[4] ^ abStack_69[3];
    local_58[3] = abStack_69[5] ^ abStack_69[4];
    local_54 = abStack_69[6] ^ abStack_69[5];
    local_53 = abStack_69[7] ^ abStack_69[6];
    local_52 = abStack_69[8] ^ abStack_69[7];
    local_51 = abStack_69[9] ^ abStack_69[8];
    uVar3 = abStack_69[0] & 7;
    uVar4 = (ulonglong)((abStack_69[0] & 0x3f) >> 3);
    ocb_block_lshift(abStack_69 + uVar4 + 1,uVar3,param_1 + 0x12);
    uVar1 = 1;
    cVar2 = (char)uVar3;
    *(byte *)((longlong)param_1 + 0x9f) =
         *(byte *)((longlong)param_1 + 0x9f) |
         (-1 << (8U - cVar2 & 0x1f) & local_58[uVar4]) >> (8U - cVar2 & 0x1f);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 143d4a9e0 CRYPTO_ocb128_tag body=26 status=ok
// SIG undefined CRYPTO_ocb128_tag(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRYPTO_ocb128_tag(void)

{
  ocb_finish();
  return;
}



// FUNCTION 143d4aa00 ocb_block_lshift body=422 status=ok
// SIG undefined ocb_block_lshift(void)

void ocb_block_lshift(char *param_1,byte param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  bVar1 = param_1[0xf];
  param_3[0xf] = bVar1 << (param_2 & 0x1f);
  bVar3 = 8 - param_2;
  bVar2 = param_1[0xe];
  param_3[0xe] = bVar2 << (param_2 & 0x1f) | bVar1 >> (bVar3 & 0x1f);
  bVar1 = param_1[0xd];
  param_3[0xd] = bVar1 << (param_2 & 0x1f) | bVar2 >> (bVar3 & 0x1f);
  bVar2 = param_1[0xc];
  param_3[0xc] = bVar2 << (param_2 & 0x1f) | bVar1 >> (bVar3 & 0x1f);
  bVar1 = param_1[0xb];
  param_3[0xb] = bVar1 << (param_2 & 0x1f) | bVar2 >> (bVar3 & 0x1f);
  bVar2 = param_1[10];
  param_3[10] = bVar2 << (param_2 & 0x1f) | bVar1 >> (bVar3 & 0x1f);
  bVar1 = param_1[9];
  param_3[9] = bVar1 << (param_2 & 0x1f) | bVar2 >> (bVar3 & 0x1f);
  bVar2 = param_1[8];
  param_3[8] = bVar2 << (param_2 & 0x1f) | bVar1 >> (bVar3 & 0x1f);
  bVar1 = param_1[7];
  param_3[7] = bVar1 << (param_2 & 0x1f) | bVar2 >> (bVar3 & 0x1f);
  bVar2 = param_1[6];
  param_3[6] = bVar2 << (param_2 & 0x1f) | bVar1 >> (bVar3 & 0x1f);
  bVar1 = param_1[5];
  param_3[5] = bVar1 << (param_2 & 0x1f) | bVar2 >> (bVar3 & 0x1f);
  bVar2 = param_1[4];
  param_3[4] = bVar2 << (param_2 & 0x1f) | bVar1 >> (bVar3 & 0x1f);
  bVar1 = param_1[3];
  param_3[3] = bVar1 << (param_2 & 0x1f) | bVar2 >> (bVar3 & 0x1f);
  bVar2 = param_1[2];
  param_3[2] = bVar2 << (param_2 & 0x1f) | bVar1 >> (bVar3 & 0x1f);
  bVar1 = param_1[1];
  param_3[1] = bVar2 >> (bVar3 & 0x1f) | bVar1 << (param_2 & 0x1f);
  *param_3 = *param_1 << (param_2 & 0x1f) | bVar1 >> (bVar3 & 0x1f);
  return;
}



// FUNCTION 143d4abb0 ocb_block_xor body=282 status=ok
// SIG undefined ocb_block_xor(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ocb_block_xor(ulonglong *param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte *pbVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong *puVar14;
  longlong lVar15;
  
  if (param_3 != 0) {
    uVar12 = 0;
    if (((0x3f < param_3) &&
        ((puVar14 = (ulonglong *)((param_4 - 1) + param_3),
         (longlong)param_2 + (param_3 - 1) < param_4 || (puVar14 < param_2)))) &&
       (((param_3 - 1) + (longlong)param_1 < param_4 || (puVar14 < param_1)))) {
      lVar15 = (longlong)param_1 - (longlong)param_2;
      lVar13 = param_4 - (longlong)param_2;
      puVar14 = param_2;
      do {
        uVar3 = puVar14[1];
        uVar12 = uVar12 + 0x40;
        uVar4 = ((ulonglong *)(lVar15 + (longlong)puVar14))[1];
        puVar1 = (ulonglong *)(lVar15 + 0x10 + (longlong)puVar14);
        uVar5 = *puVar1;
        uVar6 = puVar1[1];
        puVar1 = puVar14 + 8;
        uVar7 = puVar14[2];
        uVar8 = puVar14[3];
        puVar2 = (ulonglong *)(lVar13 + -0x40 + (longlong)puVar1);
        *puVar2 = *(ulonglong *)(lVar15 + (longlong)puVar14) ^ *puVar14;
        puVar2[1] = uVar4 ^ uVar3;
        uVar3 = puVar14[4];
        uVar4 = puVar14[5];
        puVar2 = (ulonglong *)(lVar15 + -0x20 + (longlong)puVar1);
        uVar9 = *puVar2;
        uVar10 = puVar2[1];
        puVar2 = (ulonglong *)(lVar13 + -0x30 + (longlong)puVar1);
        *puVar2 = uVar5 ^ uVar7;
        puVar2[1] = uVar6 ^ uVar8;
        uVar5 = puVar14[6];
        uVar6 = puVar14[7];
        puVar14 = (ulonglong *)(lVar15 + -0x10 + (longlong)puVar1);
        uVar7 = *puVar14;
        uVar8 = puVar14[1];
        puVar14 = (ulonglong *)(lVar13 + -0x20 + (longlong)puVar1);
        *puVar14 = uVar9 ^ uVar3;
        puVar14[1] = uVar10 ^ uVar4;
        puVar14 = (ulonglong *)(lVar13 + -0x10 + (longlong)puVar1);
        *puVar14 = uVar7 ^ uVar5;
        puVar14[1] = uVar8 ^ uVar6;
        puVar14 = puVar1;
      } while (uVar12 < (param_3 & 0xffffffffffffffc0));
    }
    if (uVar12 < param_3) {
      pbVar11 = (byte *)(uVar12 + (longlong)param_2);
      lVar13 = param_3 - uVar12;
      do {
        pbVar11[param_4 - (longlong)param_2] =
             pbVar11[(longlong)param_1 - (longlong)param_2] ^ *pbVar11;
        pbVar11 = pbVar11 + 1;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
  }
  return;
}



// FUNCTION 143d4acd0 ocb_finish body=221 status=ok
// SIG undefined ocb_finish(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 ocb_finish(undefined8 *param_1,void *param_2,size_t param_3,int param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x143d4ace2;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  if (param_3 - 1 < 0x10) {
    local_38 = param_1[0x14] ^ param_1[0x12] ^ param_1[9];
    local_30 = param_1[0x15] ^ param_1[0x13] ^ param_1[10];
    (*(code *)*param_1)(&local_38,&local_38,param_1[2]);
    local_38 = local_38 ^ param_1[0x10];
    local_30 = local_30 ^ param_1[0x11];
    if (param_4 == 0) {
      uVar1 = FUN_14004ffa0(&local_38,param_2);
    }
    else {
      _guard_xfg_dispatch_icall_nop(param_2,&local_38,param_3);
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 143d4adb0 ocb_lookup_l body=272 status=ok
// SIG undefined ocb_lookup_l(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ocb_lookup_l(longlong param_1,ulonglong param_2)

{
  char cVar1;
  ulonglong uVar2;
  char *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar5 = *(ulonglong *)(param_1 + 0x28);
  if (param_2 <= uVar5) {
    return param_2 * 0x10 + *(longlong *)(param_1 + 0x58);
  }
  uVar2 = *(ulonglong *)(param_1 + 0x30);
  if (uVar2 <= param_2) {
    lVar4 = ((param_2 - uVar2) + 4 & 0xfffffffffffffffc) + uVar2;
    *(longlong *)(param_1 + 0x30) = lVar4;
    lVar4 = CRYPTO_realloc(*(undefined8 *)(param_1 + 0x58),lVar4 * 0x10,"crypto\\modes\\ocb128.c",
                           0x71);
    if (lVar4 == 0) {
      return 0;
    }
    *(longlong *)(param_1 + 0x58) = lVar4;
  }
  if (uVar5 < param_2) {
    lVar6 = uVar5 << 4;
    lVar4 = param_2 - uVar5;
    do {
      pcVar3 = (char *)(*(longlong *)(param_1 + 0x58) + lVar6);
      cVar1 = *pcVar3;
      ocb_block_lshift(pcVar3,1,pcVar3 + 0x10);
      pcVar3[0x1f] = pcVar3[0x1f] ^ cVar1 >> 7 & 0x87U;
      lVar6 = lVar6 + 0x10;
      lVar4 = lVar4 + -1;
      uVar5 = param_2;
    } while (lVar4 != 0);
  }
  *(ulonglong *)(param_1 + 0x28) = uVar5;
  return param_2 * 0x10 + *(longlong *)(param_1 + 0x58);
}



// FUNCTION 143d4aec0 FUN_143d4aec0 body=1859 status=ok
// SIG undefined FUN_143d4aec0(void)

void FUN_143d4aec0(undefined1 *param_1,undefined1 *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if ((((param_1 != (undefined1 *)0x0) && (param_2 != (undefined1 *)0x0)) &&
      (param_3 != (uint *)0x0)) &&
     ((uVar2 = param_3[0x44], (uVar2 - 0xc & 0xfffffff9) == 0 && (uVar2 != 0x12)))) {
    uVar3 = CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]) ^ *param_3;
    uVar8 = CONCAT31(CONCAT21(CONCAT11(param_1[4],param_1[5]),param_1[6]),param_1[7]) ^ param_3[1];
    uVar4 = CONCAT31(CONCAT21(CONCAT11(param_1[8],param_1[9]),param_1[10]),param_1[0xb]) ^
            param_3[2];
    uVar5 = CONCAT31(CONCAT21(CONCAT11(param_1[0xc],param_1[0xd]),param_1[0xe]),param_1[0xf]) ^
            param_3[3];
    uVar4 = *(uint *)(&DAT_145d84b00 + (ulonglong)(uVar4 >> 0x18) * 4) ^
            *(uint *)(&DAT_145d84f00 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_145d85300 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_145d85700 + (ulonglong)(uVar4 & 0xff) * 4);
    uVar5 = *(uint *)(&DAT_145d84b00 + (ulonglong)(uVar5 >> 0x18) * 4) ^
            *(uint *)(&DAT_145d84f00 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_145d85300 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_145d85700 + (ulonglong)(uVar5 & 0xff) * 4);
    uVar8 = *(uint *)(&DAT_145d84b00 + (ulonglong)(uVar8 >> 0x18) * 4) ^
            *(uint *)(&DAT_145d84f00 + (ulonglong)(uVar8 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_145d85300 + (ulonglong)(uVar8 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_145d85700 + (ulonglong)(uVar8 & 0xff) * 4) ^ uVar4;
    uVar6 = uVar5 ^ uVar8;
    uVar3 = *(uint *)(&DAT_145d84b00 + (ulonglong)(uVar3 >> 0x18) * 4) ^
            *(uint *)(&DAT_145d84f00 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_145d85300 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_145d85700 + (ulonglong)(uVar3 & 0xff) * 4) ^ uVar8;
    uVar4 = uVar4 ^ uVar5 ^ uVar3;
    uVar8 = uVar8 ^ uVar4;
    uVar5 = uVar4 << 0x10 | uVar4 >> 0x10;
    uVar6 = (uVar6 & 0xff0000 ^ uVar6 >> 0x10) >> 8 ^ (uVar6 & 0xff00 ^ uVar6 << 0x10) << 8;
    uVar8 = (uVar8 >> 8 ^ uVar8 << 8) & 0xff00ff ^ uVar8 << 8 ^ uVar5;
    uVar3 = uVar3 ^ uVar8;
    uVar4 = uVar6 ^ uVar8 ^ param_3[7];
    uVar6 = uVar5 ^ uVar6 ^ uVar3;
    uVar3 = uVar3 ^ param_3[4];
    uVar5 = uVar6 ^ param_3[6];
    uVar8 = uVar8 ^ param_3[5] ^ uVar6;
    while( true ) {
      uVar2 = uVar2 - 2;
      puVar1 = param_3 + 8;
      if (uVar2 == 0) break;
      uVar7 = *(uint *)(&DAT_145d85300 + (ulonglong)(uVar5 >> 0x18) * 4) ^
              *(uint *)(&DAT_145d85700 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_145d84b00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_145d84f00 + (ulonglong)(uVar5 & 0xff) * 4);
      uVar6 = *(uint *)(&DAT_145d85300 + (ulonglong)(uVar4 >> 0x18) * 4) ^
              *(uint *)(&DAT_145d85700 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_145d84b00 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_145d84f00 + (ulonglong)(uVar4 & 0xff) * 4);
      uVar5 = *(uint *)(&DAT_145d85300 + (ulonglong)(uVar8 >> 0x18) * 4) ^
              *(uint *)(&DAT_145d85700 + (ulonglong)(uVar8 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_145d84b00 + (ulonglong)(uVar8 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_145d84f00 + (ulonglong)(uVar8 & 0xff) * 4) ^ uVar7;
      uVar8 = uVar6 ^ uVar5;
      uVar4 = *(uint *)(&DAT_145d85300 + (ulonglong)(uVar3 >> 0x18) * 4) ^
              *(uint *)(&DAT_145d85700 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_145d84b00 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_145d84f00 + (ulonglong)(uVar3 & 0xff) * 4) ^ uVar5;
      uVar6 = uVar7 ^ uVar6 ^ uVar4;
      uVar5 = uVar5 ^ uVar6;
      uVar8 = (uVar8 >> 8 ^ uVar8 << 8) & 0xff00ff ^ uVar8 << 8;
      uVar3 = (uVar5 & 0xff0000 ^ uVar5 >> 0x10) >> 8 ^ (uVar5 & 0xff00 ^ uVar5 << 0x10) << 8 ^
              uVar6;
      uVar5 = (uVar4 << 0x10 | uVar4 >> 0x10) ^ uVar3;
      uVar4 = uVar6 ^ uVar8 ^ uVar5;
      uVar6 = uVar8 ^ uVar3 ^ param_3[0xb];
      uVar8 = uVar4 ^ param_3[10];
      uVar3 = uVar3 ^ param_3[9] ^ uVar4;
      uVar5 = uVar5 ^ *puVar1;
      uVar4 = *(uint *)(&DAT_145d84b00 + (ulonglong)(uVar8 >> 0x18) * 4) ^
              *(uint *)(&DAT_145d84f00 + (ulonglong)(uVar8 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_145d85300 + (ulonglong)(uVar8 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_145d85700 + (ulonglong)(uVar8 & 0xff) * 4);
      uVar6 = *(uint *)(&DAT_145d84b00 + (ulonglong)(uVar6 >> 0x18) * 4) ^
              *(uint *)(&DAT_145d84f00 + (ulonglong)(uVar6 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_145d85300 + (ulonglong)(uVar6 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_145d85700 + (ulonglong)(uVar6 & 0xff) * 4);
      uVar8 = *(uint *)(&DAT_145d84b00 + (ulonglong)(uVar3 >> 0x18) * 4) ^
              *(uint *)(&DAT_145d84f00 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_145d85300 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_145d85700 + (ulonglong)(uVar3 & 0xff) * 4) ^ uVar4;
      uVar7 = uVar6 ^ uVar8;
      uVar3 = *(uint *)(&DAT_145d84b00 + (ulonglong)(uVar5 >> 0x18) * 4) ^
              *(uint *)(&DAT_145d84f00 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_145d85300 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_145d85700 + (ulonglong)(uVar5 & 0xff) * 4) ^ uVar8;
      uVar4 = uVar4 ^ uVar6 ^ uVar3;
      uVar8 = uVar8 ^ uVar4;
      uVar5 = uVar4 << 0x10 | uVar4 >> 0x10;
      uVar6 = (uVar7 & 0xff0000 ^ uVar7 >> 0x10) >> 8 ^ (uVar7 & 0xff00 ^ uVar7 << 0x10) << 8;
      uVar8 = (uVar8 >> 8 ^ uVar8 << 8) & 0xff00ff ^ uVar8 << 8 ^ uVar5;
      uVar3 = uVar3 ^ uVar8;
      uVar4 = uVar6 ^ uVar8 ^ param_3[0xf];
      uVar6 = uVar5 ^ uVar6 ^ uVar3;
      uVar3 = uVar3 ^ param_3[0xc];
      uVar5 = uVar6 ^ param_3[0xe];
      uVar8 = uVar8 ^ param_3[0xd] ^ uVar6;
      param_3 = puVar1;
    }
    uVar6 = (((*(uint *)(&DAT_145d85700 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 & 0xff |
              (uint)(byte)(&DAT_145d85300)[(ulonglong)(uVar3 >> 0x18) * 4] << 8) << 8 |
             (uint)(byte)(&DAT_145d84b00)[(ulonglong)(uVar3 >> 8 & 0xff) * 4]) << 8 |
            (uint)(byte)(&DAT_145d84f00)[(ulonglong)(uVar3 & 0xff) * 4]) ^ *puVar1;
    uVar8 = (((*(uint *)(&DAT_145d85700 + (ulonglong)(uVar8 >> 0x10 & 0xff) * 4) >> 8 & 0xff |
              (uint)(byte)(&DAT_145d85300)[(ulonglong)(uVar8 >> 0x18) * 4] << 8) << 8 |
             (uint)(byte)(&DAT_145d84b00)[(ulonglong)(uVar8 >> 8 & 0xff) * 4]) << 8 |
            (uint)(byte)(&DAT_145d84f00)[(ulonglong)(uVar8 & 0xff) * 4]) ^ param_3[9];
    uVar3 = (((*(uint *)(&DAT_145d85700 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) >> 8 & 0xff |
              (uint)(byte)(&DAT_145d85300)[(ulonglong)(uVar5 >> 0x18) * 4] << 8) << 8 |
             (uint)(byte)(&DAT_145d84b00)[(ulonglong)(uVar5 >> 8 & 0xff) * 4]) << 8 |
            (uint)(byte)(&DAT_145d84f00)[(ulonglong)(uVar5 & 0xff) * 4]) ^ param_3[10];
    uVar2 = (((*(uint *)(&DAT_145d85700 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) >> 8 & 0xff |
              (uint)(byte)(&DAT_145d85300)[(ulonglong)(uVar4 >> 0x18) * 4] << 8) << 8 |
             (uint)(byte)(&DAT_145d84b00)[(ulonglong)(uVar4 >> 8 & 0xff) * 4]) << 8 |
            (uint)(byte)(&DAT_145d84f00)[(ulonglong)(uVar4 & 0xff) * 4]) ^ param_3[0xb];
    *param_2 = (char)(uVar6 >> 0x18);
    param_2[1] = (char)(uVar6 >> 0x10);
    param_2[2] = (char)(uVar6 >> 8);
    param_2[4] = (char)(uVar8 >> 0x18);
    param_2[5] = (char)(uVar8 >> 0x10);
    param_2[6] = (char)(uVar8 >> 8);
    param_2[8] = (char)(uVar3 >> 0x18);
    param_2[9] = (char)(uVar3 >> 0x10);
    param_2[10] = (char)(uVar3 >> 8);
    param_2[0xc] = (char)(uVar2 >> 0x18);
    param_2[0xd] = (char)(uVar2 >> 0x10);
    param_2[0xe] = (char)(uVar2 >> 8);
    param_2[3] = (char)uVar6;
    param_2[7] = (char)uVar8;
    param_2[0xb] = (char)uVar3;
    param_2[0xf] = (char)uVar2;
  }
  return;
}



// FUNCTION 143d4b610 aria_set_decrypt_key body=800 status=ok
// SIG undefined aria_set_decrypt_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 aria_set_decrypt_key(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  
  uVar5 = FUN_143d4b930();
  if ((int)uVar5 == 0) {
    uVar1 = *(undefined4 *)param_3;
    uVar2 = *(undefined4 *)((longlong)param_3 + 4);
    uVar3 = *(undefined4 *)(param_3 + 1);
    uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
    puVar6 = param_3 + (ulonglong)*(uint *)(param_3 + 0x22) * 2;
    puVar19 = (uint *)(param_3 + 2);
    uVar5 = puVar6[1];
    *param_3 = *puVar6;
    param_3[1] = uVar5;
    *(undefined4 *)puVar6 = uVar1;
    *(undefined4 *)((longlong)puVar6 + 4) = uVar2;
    *(undefined4 *)(puVar6 + 1) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0xc) = uVar4;
    puVar7 = (uint *)(puVar6 + -2);
    if (puVar19 < puVar7) {
      do {
        uVar8 = *puVar19 >> 8 | *puVar19 << 0x18;
        uVar17 = uVar8 ^ *puVar19;
        uVar9 = puVar19[1] >> 8 | puVar19[1] << 0x18;
        uVar15 = uVar9 ^ puVar19[1];
        uVar10 = puVar19[2] >> 8 | puVar19[2] << 0x18;
        uVar14 = uVar10 ^ puVar19[2];
        uVar10 = (uVar14 << 0x10 | uVar14 >> 0x10) ^ uVar10;
        uVar14 = puVar19[3] >> 8 | puVar19[3] << 0x18;
        uVar15 = (uVar15 << 0x10 | uVar15 >> 0x10) ^ uVar9 ^ uVar10;
        uVar18 = (uVar17 << 0x10 | uVar17 >> 0x10) ^ uVar8 ^ uVar15;
        uVar8 = uVar14 ^ puVar19[3];
        uVar14 = (uVar8 << 0x10 | uVar8 >> 0x10) ^ uVar14;
        uVar8 = uVar14 ^ uVar15;
        uVar9 = uVar10 ^ uVar14 ^ uVar18;
        uVar15 = uVar15 ^ uVar9;
        uVar9 = uVar9 << 0x10 | uVar9 >> 0x10;
        uVar11 = (uVar8 & 0xff0000 ^ uVar8 >> 0x10) >> 8 ^ (uVar8 & 0xff00 ^ uVar8 << 0x10) << 8;
        uVar8 = (uVar15 >> 8 ^ uVar15 << 8) & 0xff00ff ^ uVar15 << 8 ^ uVar9;
        uVar18 = uVar18 ^ uVar8;
        uVar12 = uVar11 ^ uVar9 ^ uVar18;
        uVar9 = *puVar7 >> 8 | *puVar7 << 0x18;
        uVar17 = uVar9 ^ *puVar7;
        uVar10 = puVar7[1] >> 8 | puVar7[1] << 0x18;
        uVar16 = uVar10 ^ puVar7[1];
        uVar14 = puVar7[2] >> 8 | puVar7[2] << 0x18;
        uVar15 = uVar14 ^ puVar7[2];
        uVar14 = (uVar15 << 0x10 | uVar15 >> 0x10) ^ uVar14;
        uVar15 = puVar7[3] >> 8 | puVar7[3] << 0x18;
        uVar13 = uVar15 ^ puVar7[3];
        uVar16 = (uVar16 << 0x10 | uVar16 >> 0x10) ^ uVar10 ^ uVar14;
        uVar15 = (uVar13 << 0x10 | uVar13 >> 0x10) ^ uVar15;
        uVar9 = (uVar17 << 0x10 | uVar17 >> 0x10) ^ uVar9 ^ uVar16;
        uVar10 = uVar15 ^ uVar16;
        uVar15 = uVar14 ^ uVar15 ^ uVar9;
        uVar16 = uVar16 ^ uVar15;
        uVar14 = (uVar10 & 0xff0000 ^ uVar10 >> 0x10) >> 8 ^ (uVar10 & 0xff00 ^ uVar10 << 0x10) << 8
        ;
        uVar15 = uVar15 << 0x10 | uVar15 >> 0x10;
        uVar10 = (uVar16 >> 8 ^ uVar16 << 8) & 0xff00ff ^ uVar16 << 8 ^ uVar15;
        uVar9 = uVar9 ^ uVar10;
        *puVar19 = uVar9;
        uVar9 = uVar14 ^ uVar15 ^ uVar9;
        puVar19[2] = uVar9;
        puVar19[3] = uVar14 ^ uVar10;
        puVar19[1] = uVar9 ^ uVar10;
        puVar19 = puVar19 + 4;
        *puVar7 = uVar18;
        puVar7[1] = uVar12 ^ uVar8;
        puVar7[2] = uVar12;
        puVar7[3] = uVar11 ^ uVar8;
        puVar7 = puVar7 + -4;
      } while (puVar19 < puVar7);
    }
    uVar8 = *puVar19 >> 8 | *puVar19 << 0x18;
    uVar14 = uVar8 ^ *puVar19;
    uVar9 = puVar19[1] >> 8 | puVar19[1] << 0x18;
    uVar17 = uVar9 ^ puVar19[1];
    uVar10 = puVar19[2] >> 8 | puVar19[2] << 0x18;
    uVar15 = uVar10 ^ puVar19[2];
    uVar10 = (uVar15 << 0x10 | uVar15 >> 0x10) ^ uVar10;
    uVar15 = (uVar17 << 0x10 | uVar17 >> 0x10) ^ uVar9 ^ uVar10;
    uVar9 = puVar19[3] >> 8 | puVar19[3] << 0x18;
    uVar14 = (uVar14 << 0x10 | uVar14 >> 0x10) ^ uVar8 ^ uVar15;
    uVar8 = uVar9 ^ puVar19[3];
    uVar9 = (uVar8 << 0x10 | uVar8 >> 0x10) ^ uVar9;
    uVar8 = uVar9 ^ uVar15;
    uVar9 = uVar10 ^ uVar9 ^ uVar14;
    uVar15 = uVar15 ^ uVar9;
    uVar10 = (uVar8 & 0xff0000 ^ uVar8 >> 0x10) >> 8 ^ (uVar8 & 0xff00 ^ uVar8 << 0x10) << 8;
    uVar8 = uVar9 << 0x10 | uVar9 >> 0x10;
    uVar9 = (uVar15 >> 8 ^ uVar15 << 8) & 0xff00ff ^ uVar15 << 8 ^ uVar8;
    uVar14 = uVar14 ^ uVar9;
    uVar8 = uVar10 ^ uVar8 ^ uVar14;
    *puVar7 = uVar14;
    puVar7[2] = uVar8;
    puVar7[3] = uVar10 ^ uVar9;
    puVar7[1] = uVar8 ^ uVar9;
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 143d4b930 FUN_143d4b930 body=3405 status=ok
// SIG undefined FUN_143d4b930(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_143d4b930(byte *param_1,int param_2,uint *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  longlong lVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  
  if ((param_1 == (byte *)0x0) || (param_3 == (uint *)0x0)) {
    return 0xffffffff;
  }
  if (((param_2 - 0x80U & 0xffffff3f) != 0) || (param_2 == 0x140)) {
    return 0xfffffffe;
  }
  param_3[0x44] = (int)(param_2 + 0x100 + (param_2 + 0x100 >> 0x1f & 0x1fU)) >> 5;
  bVar1 = *param_1;
  bVar2 = param_1[0xc];
  bVar3 = param_1[4];
  bVar4 = param_1[8];
  lVar10 = (longlong)((int)(param_2 + -0x80 + (param_2 + -0x80 >> 0x1f & 0x3fU)) >> 6) * 0x10;
  uVar5 = CONCAT11(bVar1,param_1[1]);
  uVar13 = CONCAT31(CONCAT21(uVar5,param_1[2]),param_1[3]);
  uVar6 = CONCAT11(bVar3,param_1[5]);
  uVar12 = *(uint *)(&DAT_145d84ab0 + lVar10) ^ uVar13;
  uVar27 = CONCAT31(CONCAT21(uVar6,param_1[6]),param_1[7]);
  uVar7 = CONCAT11(bVar4,param_1[9]);
  uVar18 = *(uint *)(&DAT_145d84ab4 + lVar10) ^ uVar27;
  uVar28 = CONCAT31(CONCAT21(uVar7,param_1[10]),param_1[0xb]);
  uVar8 = CONCAT11(bVar2,param_1[0xd]);
  uVar14 = *(uint *)(&DAT_145d84ab8 + lVar10) ^ uVar28;
  uVar25 = CONCAT31(CONCAT21(uVar8,param_1[0xe]),param_1[0xf]);
  uVar15 = *(uint *)(&DAT_145d84abc + lVar10) ^ uVar25;
  uVar14 = *(uint *)(&DAT_145d84b00 + (ulonglong)(uVar14 >> 0x18) * 4) ^
           *(uint *)(&DAT_145d84f00 + (ulonglong)(uVar14 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_145d85300 + (ulonglong)(uVar14 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_145d85700 + (ulonglong)(uVar14 & 0xff) * 4);
  uVar20 = *(uint *)(&DAT_145d84b00 + (ulonglong)(uVar15 >> 0x18) * 4) ^
           *(uint *)(&DAT_145d84f00 + (ulonglong)(uVar15 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_145d85300 + (ulonglong)(uVar15 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_145d85700 + (ulonglong)(uVar15 & 0xff) * 4);
  uVar15 = *(uint *)(&DAT_145d84b00 + (ulonglong)(uVar18 >> 0x18) * 4) ^
           *(uint *)(&DAT_145d84f00 + (ulonglong)(uVar18 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_145d85300 + (ulonglong)(uVar18 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_145d85700 + (ulonglong)(uVar18 & 0xff) * 4) ^ uVar14;
  uVar21 = uVar20 ^ uVar15;
  uVar18 = *(uint *)(&DAT_145d84b00 + (ulonglong)(uVar12 >> 0x18) * 4) ^
           *(uint *)(&DAT_145d84f00 + (ulonglong)(uVar12 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_145d85300 + (ulonglong)(uVar12 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_145d85700 + (ulonglong)(uVar12 & 0xff) * 4) ^ uVar15;
  uVar12 = uVar14 ^ uVar20 ^ uVar18;
  uVar15 = uVar15 ^ uVar12;
  uVar14 = uVar12 << 0x10 | uVar12 >> 0x10;
  uVar12 = (uVar21 & 0xff0000 ^ uVar21 >> 0x10) >> 8 ^ (uVar21 & 0xff00 ^ uVar21 << 0x10) << 8;
  uVar15 = (uVar15 >> 8 ^ uVar15 << 8) & 0xff00ff ^ uVar15 << 8 ^ uVar14;
  uVar18 = uVar18 ^ uVar15;
  uVar14 = uVar14 ^ uVar12 ^ uVar18;
  if (param_2 < 0x81) {
    uVar20 = 0;
    uVar21 = 0;
  }
  else {
    uVar21 = CONCAT31(CONCAT21(CONCAT11(param_1[0x10],param_1[0x11]),param_1[0x12]),param_1[0x13]);
    uVar20 = CONCAT31(CONCAT21(CONCAT11(param_1[0x14],param_1[0x15]),param_1[0x16]),param_1[0x17]);
    if (0xc0 < param_2) {
      uVar26 = CONCAT31(CONCAT21(CONCAT11(param_1[0x18],param_1[0x19]),param_1[0x1a]),param_1[0x1b])
      ;
      uVar9 = CONCAT31(CONCAT21(CONCAT11(param_1[0x1c],param_1[0x1d]),param_1[0x1e]),param_1[0x1f]);
      goto LAB_143d4bcb8;
    }
  }
  uVar26 = 0;
  uVar9 = 0;
LAB_143d4bcb8:
  uVar20 = uVar20 ^ uVar15 ^ uVar14;
  uVar9 = uVar9 ^ uVar12 ^ uVar15;
  uVar21 = uVar21 ^ uVar18;
  uVar26 = uVar26 ^ uVar14;
  uVar12 = *(uint *)(&DAT_145d84ac0 + lVar10) ^ uVar21;
  uVar18 = *(uint *)(&DAT_145d84ac4 + lVar10) ^ uVar20;
  uVar14 = *(uint *)(&DAT_145d84ac8 + lVar10) ^ uVar26;
  uVar15 = *(uint *)(&DAT_145d84acc + lVar10) ^ uVar9;
  uVar14 = *(uint *)(&DAT_145d85300 + (ulonglong)(uVar14 >> 0x18) * 4) ^
           *(uint *)(&DAT_145d85700 + (ulonglong)(uVar14 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_145d84b00 + (ulonglong)(uVar14 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_145d84f00 + (ulonglong)(uVar14 & 0xff) * 4);
  uVar22 = *(uint *)(&DAT_145d85300 + (ulonglong)(uVar15 >> 0x18) * 4) ^
           *(uint *)(&DAT_145d85700 + (ulonglong)(uVar15 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_145d84b00 + (ulonglong)(uVar15 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_145d84f00 + (ulonglong)(uVar15 & 0xff) * 4);
  uVar15 = *(uint *)(&DAT_145d85300 + (ulonglong)(uVar18 >> 0x18) * 4) ^
           *(uint *)(&DAT_145d85700 + (ulonglong)(uVar18 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_145d84b00 + (ulonglong)(uVar18 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_145d84f00 + (ulonglong)(uVar18 & 0xff) * 4) ^ uVar14;
  uVar18 = uVar22 ^ uVar15;
  uVar12 = *(uint *)(&DAT_145d85300 + (ulonglong)(uVar12 >> 0x18) * 4) ^
           *(uint *)(&DAT_145d85700 + (ulonglong)(uVar12 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_145d84b00 + (ulonglong)(uVar12 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_145d84f00 + (ulonglong)(uVar12 & 0xff) * 4) ^ uVar15;
  uVar14 = uVar14 ^ uVar22 ^ uVar12;
  uVar15 = uVar15 ^ uVar14;
  uVar22 = (uVar18 >> 8 ^ uVar18 << 8) & 0xff00ff ^ uVar18 << 8;
  uVar23 = (uVar15 & 0xff0000 ^ uVar15 >> 0x10) >> 8 ^ (uVar15 & 0xff00 ^ uVar15 << 0x10) << 8 ^
           uVar14;
  uVar18 = (uVar12 << 0x10 | uVar12 >> 0x10) ^ uVar23;
  uVar16 = uVar22 ^ uVar23 ^ uVar25;
  uVar22 = uVar14 ^ uVar22 ^ uVar18;
  uVar23 = uVar23 ^ uVar27 ^ uVar22;
  uVar22 = uVar22 ^ uVar28;
  uVar18 = uVar18 ^ uVar13;
  uVar15 = uVar16 ^ *(uint *)(&DAT_145d84adc + lVar10);
  uVar12 = uVar22 ^ *(uint *)(&DAT_145d84ad8 + lVar10);
  uVar14 = uVar18 ^ *(uint *)(&DAT_145d84ad0 + lVar10);
  uVar24 = uVar23 ^ *(uint *)(&DAT_145d84ad4 + lVar10);
  uVar12 = *(uint *)(&DAT_145d84b00 + (ulonglong)(uVar12 >> 0x18) * 4) ^
           *(uint *)(&DAT_145d84f00 + (ulonglong)(uVar12 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_145d85300 + (ulonglong)(uVar12 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_145d85700 + (ulonglong)(uVar12 & 0xff) * 4);
  uVar15 = *(uint *)(&DAT_145d84b00 + (ulonglong)(uVar15 >> 0x18) * 4) ^
           *(uint *)(&DAT_145d84f00 + (ulonglong)(uVar15 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_145d85300 + (ulonglong)(uVar15 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_145d85700 + (ulonglong)(uVar15 & 0xff) * 4);
  uVar17 = *(uint *)(&DAT_145d84b00 + (ulonglong)(uVar24 >> 0x18) * 4) ^
           *(uint *)(&DAT_145d84f00 + (ulonglong)(uVar24 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_145d85300 + (ulonglong)(uVar24 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_145d85700 + (ulonglong)(uVar24 & 0xff) * 4) ^ uVar12;
  uVar19 = uVar15 ^ uVar17;
  uVar24 = *(uint *)(&DAT_145d84b00 + (ulonglong)(uVar14 >> 0x18) * 4) ^
           *(uint *)(&DAT_145d84f00 + (ulonglong)(uVar14 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_145d85300 + (ulonglong)(uVar14 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_145d85700 + (ulonglong)(uVar14 & 0xff) * 4) ^ uVar17;
  uVar12 = uVar12 ^ uVar15 ^ uVar24;
  uVar17 = uVar17 ^ uVar12;
  uVar12 = uVar12 << 0x10 | uVar12 >> 0x10;
  uVar15 = (uVar19 & 0xff0000 ^ uVar19 >> 0x10) >> 8 ^ (uVar19 & 0xff00 ^ uVar19 << 0x10) << 8;
  uVar14 = (uVar17 >> 8 ^ uVar17 << 8) & 0xff00ff ^ uVar17 << 8 ^ uVar12;
  uVar24 = uVar24 ^ uVar14;
  uVar12 = uVar15 ^ uVar12 ^ uVar24;
  uVar24 = uVar21 ^ uVar24;
  uVar17 = uVar20 ^ uVar12 ^ uVar14;
  uVar12 = uVar26 ^ uVar12;
  uVar14 = uVar9 ^ uVar15 ^ uVar14;
  *param_3 = uVar9 << 0xd ^ uVar21 >> 0x13 ^ uVar13;
  param_3[1] = uVar21 << 0xd ^ uVar20 >> 0x13 ^ uVar27;
  param_3[2] = uVar20 << 0xd ^ uVar26 >> 0x13 ^ uVar28;
  param_3[3] = uVar9 >> 0x13 ^ uVar26 << 0xd ^ uVar25;
  param_3[4] = uVar16 << 0xd ^ uVar18 >> 0x13 ^ uVar21;
  param_3[5] = uVar23 >> 0x13 ^ uVar18 << 0xd ^ uVar20;
  param_3[6] = uVar22 >> 0x13 ^ uVar23 << 0xd ^ uVar26;
  param_3[7] = uVar16 >> 0x13 ^ uVar22 << 0xd ^ uVar9;
  param_3[8] = uVar14 << 0xd ^ uVar24 >> 0x13 ^ uVar18;
  param_3[9] = uVar17 >> 0x13 ^ uVar24 << 0xd ^ uVar23;
  param_3[10] = uVar12 >> 0x13 ^ uVar17 << 0xd ^ uVar22;
  param_3[0xb] = uVar14 >> 0x13 ^ uVar12 << 0xd ^ uVar16;
  param_3[0xc] = (uint)(uVar5 >> 3) ^ uVar25 << 0xd ^ uVar24;
  param_3[0xd] = uVar13 << 0xd ^ (uint)(uVar6 >> 3) ^ uVar17;
  param_3[0xe] = uVar27 << 0xd ^ (uint)(uVar7 >> 3) ^ uVar12;
  param_3[0xf] = uVar28 << 0xd ^ (uint)(uVar8 >> 3) ^ uVar14;
  param_3[0x10] = uVar9 * 2 ^ uVar21 >> 0x1f ^ uVar13;
  param_3[0x11] = uVar20 >> 0x1f ^ uVar21 * 2 ^ uVar27;
  param_3[0x12] = uVar20 * 2 ^ uVar26 >> 0x1f ^ uVar28;
  param_3[0x13] = uVar9 >> 0x1f ^ uVar26 * 2 ^ uVar25;
  param_3[0x14] = uVar16 * 2 ^ uVar18 >> 0x1f ^ uVar21;
  param_3[0x15] = uVar23 >> 0x1f ^ uVar18 * 2 ^ uVar20;
  param_3[0x16] = uVar22 >> 0x1f ^ uVar23 * 2 ^ uVar26;
  param_3[0x17] = uVar16 >> 0x1f ^ uVar22 * 2 ^ uVar9;
  param_3[0x18] = uVar14 * 2 ^ uVar24 >> 0x1f ^ uVar18;
  param_3[0x19] = uVar17 >> 0x1f ^ uVar24 * 2 ^ uVar23;
  param_3[0x1a] = uVar12 >> 0x1f ^ uVar17 * 2 ^ uVar22;
  param_3[0x1b] = uVar14 >> 0x1f ^ uVar12 * 2 ^ uVar16;
  param_3[0x1c] = (uint)(bVar1 >> 7) ^ uVar25 * 2 ^ uVar24;
  param_3[0x1d] = (uint)(bVar3 >> 7) ^ uVar13 * 2 ^ uVar17;
  param_3[0x1e] = (uint)(bVar4 >> 7) ^ uVar27 * 2 ^ uVar12;
  param_3[0x1f] = (uint)(bVar2 >> 7) ^ uVar28 * 2 ^ uVar14;
  param_3[0x20] = uVar20 << 0x1d ^ uVar26 >> 3 ^ uVar13;
  param_3[0x21] = uVar9 >> 3 ^ uVar26 << 0x1d ^ uVar27;
  param_3[0x22] = uVar9 << 0x1d ^ uVar21 >> 3 ^ uVar28;
  param_3[0x23] = uVar21 << 0x1d ^ uVar20 >> 3 ^ uVar25;
  param_3[0x24] = uVar23 << 0x1d ^ uVar22 >> 3 ^ uVar21;
  param_3[0x25] = uVar22 << 0x1d ^ uVar16 >> 3 ^ uVar20;
  param_3[0x26] = uVar16 << 0x1d ^ uVar18 >> 3 ^ uVar26;
  param_3[0x27] = uVar18 << 0x1d ^ uVar23 >> 3 ^ uVar9;
  param_3[0x28] = uVar17 << 0x1d ^ uVar12 >> 3 ^ uVar18;
  param_3[0x29] = uVar12 << 0x1d ^ uVar14 >> 3 ^ uVar23;
  param_3[0x2a] = uVar14 << 0x1d ^ uVar24 >> 3 ^ uVar22;
  param_3[0x2b] = uVar24 << 0x1d ^ uVar17 >> 3 ^ uVar16;
  param_3[0x2c] = uVar27 << 0x1d ^ uVar28 >> 3 ^ uVar24;
  param_3[0x2d] = uVar28 << 0x1d ^ uVar25 >> 3 ^ uVar17;
  param_3[0x2e] = uVar13 >> 3 ^ uVar25 << 0x1d ^ uVar12;
  param_3[0x2f] = uVar13 << 0x1d ^ uVar27 >> 3 ^ uVar14;
  puVar11 = param_3 + 0x30;
  *puVar11 = uVar21 << 0x1f ^ uVar20 >> 1 ^ uVar13;
  param_3[0x31] = uVar20 << 0x1f ^ uVar26 >> 1 ^ uVar27;
  param_3[0x32] = uVar9 >> 1 ^ uVar26 << 0x1f ^ uVar28;
  param_3[0x33] = uVar9 << 0x1f ^ uVar21 >> 1 ^ uVar25;
  if (0x80 < param_2) {
    param_3[0x34] = uVar18 << 0x1f ^ uVar23 >> 1 ^ uVar21;
    param_3[0x35] = uVar22 >> 1 ^ uVar23 << 0x1f ^ uVar20;
    param_3[0x36] = uVar16 >> 1 ^ uVar22 << 0x1f ^ uVar26;
    param_3[0x37] = uVar18 >> 1 ^ uVar16 << 0x1f ^ uVar9;
    puVar11 = param_3 + 0x38;
    *puVar11 = uVar24 << 0x1f ^ uVar17 >> 1 ^ uVar18;
    param_3[0x39] = uVar12 >> 1 ^ uVar17 << 0x1f ^ uVar23;
    param_3[0x3a] = uVar14 >> 1 ^ uVar12 << 0x1f ^ uVar22;
    param_3[0x3b] = uVar14 << 0x1f ^ uVar24 >> 1 ^ uVar16;
  }
  if (0xc0 < param_2) {
    puVar11[4] = uVar13 << 0x1f ^ uVar27 >> 1 ^ uVar24;
    puVar11[5] = uVar27 << 0x1f ^ uVar28 >> 1 ^ uVar17;
    puVar11[6] = uVar28 << 0x1f ^ uVar25 >> 1 ^ uVar12;
    puVar11[7] = uVar13 >> 1 ^ uVar25 << 0x1f ^ uVar14;
    puVar11[8] = uVar20 >> 0xd ^ uVar21 << 0x13 ^ uVar13;
    puVar11[9] = uVar20 << 0x13 ^ uVar26 >> 0xd ^ uVar27;
    puVar11[10] = uVar9 >> 0xd ^ uVar26 << 0x13 ^ uVar28;
    puVar11[0xb] = uVar9 << 0x13 ^ uVar21 >> 0xd ^ uVar25;
  }
  return 0;
}



// FUNCTION 143d4c680 FUN_143d4c680 body=35 status=ok
// SIG undefined FUN_143d4c680(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d4c680(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_140083cf0(*(undefined4 *)(param_3 + 0x110),param_1,param_3,param_2);
  return;
}



// FUNCTION 143d4c6b0 FUN_143d4c6b0 body=35 status=ok
// SIG undefined FUN_143d4c6b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d4c6b0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_140083960(*(undefined4 *)(param_3 + 0x110),param_1,param_3,param_2);
  return;
}



// FUNCTION 143d4c6e0 Camellia_set_key body=96 status=ok
// SIG undefined Camellia_set_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 Camellia_set_key(longlong param_1,int param_2,longlong param_3)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || (param_3 == 0)) {
    return 0xffffffff;
  }
  if (((param_2 - 0x80U & 0xffffff3f) == 0) && (param_2 != 0x140)) {
    uVar1 = FUN_140084060(param_2,param_1);
    *(undefined4 *)(param_3 + 0x110) = uVar1;
    return 0;
  }
  return 0xfffffffe;
}



// FUNCTION 143d4c740 Poly1305_Final body=168 status=ok
// SIG undefined Poly1305_Final(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void Poly1305_Final(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  
  lVar4 = *(longlong *)(param_1 + 0xe0);
  pcVar1 = *(code **)(param_1 + 0xe8);
  pcVar2 = *(code **)(param_1 + 0xf0);
  if (lVar4 != 0) {
    *(undefined1 *)(lVar4 + 0xd0 + param_1) = 1;
    uVar3 = lVar4 + 1;
    if (uVar3 < 0x10) {
      puVar5 = (undefined1 *)(param_1 + 0xd0 + uVar3);
      for (lVar4 = 0x10 - uVar3; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
    }
    (*pcVar1)(param_1,param_1 + 0xd0,0x10);
  }
  (*pcVar2)(param_1,param_2,param_1 + 0xc0);
  FUN_14004ff40(param_1,0xf8);
  return;
}



// FUNCTION 143d4c7f0 Poly1305_Init body=247 status=ok
// SIG undefined Poly1305_Init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void Poly1305_Init(longlong param_1,longlong param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0x1c);
  iVar1 = FUN_14008a2c0(param_1,param_2,param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  if (iVar1 == 0) {
    *(code **)(param_1 + 0xe8) = FUN_14008a380;
    *(code **)(param_1 + 0xf0) = FUN_14008a4a0;
  }
  return;
}



// FUNCTION 143d4c8f0 Poly1305_Update body=251 status=ok
// SIG undefined Poly1305_Update(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void Poly1305_Update(longlong param_1,void *param_2,size_t param_3)

{
  longlong lVar1;
  code *pcVar2;
  void *_Dst;
  ulonglong uVar3;
  ulonglong _Size;
  size_t _Size_00;
  
  lVar1 = *(longlong *)(param_1 + 0xe0);
  pcVar2 = *(code **)(param_1 + 0xe8);
  if (lVar1 != 0) {
    _Size_00 = 0x10 - lVar1;
    _Dst = (void *)(param_1 + 0xd0 + lVar1);
    if (param_3 < _Size_00) {
      _guard_xfg_dispatch_icall_nop(_Dst,param_2,param_3);
      *(size_t *)(param_1 + 0xe0) = lVar1 + param_3;
      return;
    }
    _guard_xfg_dispatch_icall_nop(_Dst,param_2,_Size_00);
    (*pcVar2)(param_1,param_1 + 0xd0,0x10);
    param_2 = (void *)((longlong)param_2 + _Size_00);
    param_3 = param_3 - _Size_00;
  }
  _Size = (ulonglong)((uint)param_3 & 0xf);
  uVar3 = param_3 - _Size;
  if (0xf < uVar3) {
    (*pcVar2)(param_1,param_2,uVar3,1);
    param_2 = (void *)((longlong)param_2 + uVar3);
  }
  if (_Size != 0) {
    _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0xd0),param_2,_Size);
  }
  *(ulonglong *)(param_1 + 0xe0) = _Size;
  return;
}



// FUNCTION 143d4c9f0 SEED_decrypt body=3648 status=ok
// SIG undefined SEED_decrypt(void)

void SEED_decrypt(undefined1 *param_1,undefined1 *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = CONCAT31(CONCAT21(CONCAT11(param_1[8],param_1[9]),param_1[10]),param_1[0xb]);
  uVar3 = param_3[0x1e] ^ uVar7;
  uVar1 = CONCAT31(CONCAT21(CONCAT11(param_1[0xc],param_1[0xd]),param_1[0xe]),param_1[0xf]);
  uVar2 = param_3[0x1f] ^ uVar3 ^ uVar1;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar2 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar2 & 0xff) * 4);
  uVar3 = uVar3 + uVar5;
  uVar2 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar3 & 0xff) * 4);
  uVar5 = uVar5 + uVar2;
  uVar3 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar2 = CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]) ^ uVar3 + uVar2;
  uVar4 = param_3[0x1c] ^ uVar2;
  uVar3 = CONCAT31(CONCAT21(CONCAT11(param_1[4],param_1[5]),param_1[6]),param_1[7]) ^ uVar3;
  uVar5 = param_3[0x1d] ^ uVar4 ^ uVar3;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar5;
  uVar7 = uVar7 ^ uVar5 + uVar4;
  uVar4 = param_3[0x1a] ^ uVar7;
  uVar5 = param_3[0x1b] ^ uVar4 ^ uVar1;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar5;
  uVar2 = uVar2 ^ uVar5 + uVar4;
  uVar4 = param_3[0x18] ^ uVar2;
  uVar5 = param_3[0x19] ^ uVar4 ^ uVar3;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar5;
  uVar7 = uVar7 ^ uVar5 + uVar4;
  uVar4 = param_3[0x16] ^ uVar7;
  uVar5 = param_3[0x17] ^ uVar4 ^ uVar1;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar5;
  uVar2 = uVar2 ^ uVar5 + uVar4;
  uVar4 = param_3[0x14] ^ uVar2;
  uVar5 = param_3[0x15] ^ uVar4 ^ uVar3;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar5;
  uVar7 = uVar7 ^ uVar5 + uVar4;
  uVar4 = param_3[0x12] ^ uVar7;
  uVar5 = param_3[0x13] ^ uVar4 ^ uVar1;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar5;
  uVar2 = uVar2 ^ uVar5 + uVar4;
  uVar4 = param_3[0x10] ^ uVar2;
  uVar5 = param_3[0x11] ^ uVar4 ^ uVar3;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar5;
  uVar7 = uVar7 ^ uVar5 + uVar4;
  uVar4 = param_3[0xe] ^ uVar7;
  uVar5 = param_3[0xf] ^ uVar4 ^ uVar1;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar2 = uVar2 ^ uVar5 + uVar4;
  uVar3 = uVar3 ^ uVar5;
  uVar4 = param_3[0xc] ^ uVar2;
  uVar5 = param_3[0xd] ^ uVar4 ^ uVar3;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar5;
  uVar7 = uVar7 ^ uVar5 + uVar4;
  uVar4 = param_3[10] ^ uVar7;
  uVar5 = param_3[0xb] ^ uVar4 ^ uVar1;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar5;
  uVar2 = uVar2 ^ uVar5 + uVar4;
  uVar4 = param_3[8] ^ uVar2;
  uVar5 = param_3[9] ^ uVar4 ^ uVar3;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar5;
  uVar7 = uVar7 ^ uVar5 + uVar4;
  uVar4 = param_3[6] ^ uVar7;
  uVar5 = param_3[7] ^ uVar4 ^ uVar1;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar5;
  uVar2 = uVar2 ^ uVar5 + uVar4;
  uVar4 = param_3[4] ^ uVar2;
  uVar5 = param_3[5] ^ uVar4 ^ uVar3;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar7 = uVar7 ^ uVar5 + uVar4;
  uVar1 = uVar1 ^ uVar5;
  uVar4 = param_3[2] ^ uVar7;
  uVar5 = param_3[3] ^ uVar4 ^ uVar1;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar5;
  uVar2 = uVar2 ^ uVar5 + uVar4;
  uVar5 = param_3[1] ^ *param_3 ^ uVar2 ^ uVar3;
  uVar6 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar5 = (*param_3 ^ uVar2) + uVar6;
  uVar4 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar6 = uVar6 + uVar4;
  param_2[0xb] = (char)uVar2;
  param_2[0xf] = (char)uVar3;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar6 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar5;
  param_2[7] = (char)uVar1;
  uVar7 = uVar7 ^ uVar5 + uVar4;
  param_2[3] = (char)uVar7;
  *param_2 = (char)(uVar7 >> 0x18);
  param_2[1] = (char)(uVar7 >> 0x10);
  param_2[2] = (char)(uVar7 >> 8);
  param_2[4] = (char)(uVar1 >> 0x18);
  param_2[5] = (char)(uVar1 >> 0x10);
  param_2[6] = (char)(uVar1 >> 8);
  param_2[8] = (char)(uVar2 >> 0x18);
  param_2[9] = (char)(uVar2 >> 0x10);
  param_2[10] = (char)(uVar2 >> 8);
  param_2[0xc] = (char)(uVar3 >> 0x18);
  param_2[0xd] = (char)(uVar3 >> 0x10);
  param_2[0xe] = (char)(uVar3 >> 8);
  return;
}



// FUNCTION 143d4d830 SEED_encrypt body=3648 status=ok
// SIG undefined SEED_encrypt(void)

void SEED_encrypt(undefined1 *param_1,undefined1 *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = CONCAT31(CONCAT21(CONCAT11(param_1[8],param_1[9]),param_1[10]),param_1[0xb]);
  uVar3 = *param_3 ^ uVar7;
  uVar1 = CONCAT31(CONCAT21(CONCAT11(param_1[0xc],param_1[0xd]),param_1[0xe]),param_1[0xf]);
  uVar2 = param_3[1] ^ uVar3 ^ uVar1;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar2 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar2 & 0xff) * 4);
  uVar3 = uVar3 + uVar5;
  uVar2 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar3 & 0xff) * 4);
  uVar5 = uVar5 + uVar2;
  uVar3 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar2 = CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]) ^ uVar3 + uVar2;
  uVar4 = param_3[2] ^ uVar2;
  uVar3 = CONCAT31(CONCAT21(CONCAT11(param_1[4],param_1[5]),param_1[6]),param_1[7]) ^ uVar3;
  uVar5 = param_3[3] ^ uVar4 ^ uVar3;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar5;
  uVar7 = uVar7 ^ uVar5 + uVar4;
  uVar4 = param_3[4] ^ uVar7;
  uVar5 = param_3[5] ^ uVar4 ^ uVar1;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar5;
  uVar2 = uVar2 ^ uVar5 + uVar4;
  uVar4 = param_3[6] ^ uVar2;
  uVar5 = param_3[7] ^ uVar4 ^ uVar3;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar5;
  uVar7 = uVar7 ^ uVar5 + uVar4;
  uVar4 = param_3[8] ^ uVar7;
  uVar5 = param_3[9] ^ uVar4 ^ uVar1;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar5;
  uVar2 = uVar2 ^ uVar5 + uVar4;
  uVar4 = param_3[10] ^ uVar2;
  uVar5 = param_3[0xb] ^ uVar4 ^ uVar3;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar5;
  uVar7 = uVar7 ^ uVar5 + uVar4;
  uVar4 = param_3[0xc] ^ uVar7;
  uVar5 = param_3[0xd] ^ uVar4 ^ uVar1;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar5;
  uVar2 = uVar2 ^ uVar5 + uVar4;
  uVar4 = param_3[0xe] ^ uVar2;
  uVar5 = param_3[0xf] ^ uVar4 ^ uVar3;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar5;
  uVar7 = uVar7 ^ uVar5 + uVar4;
  uVar4 = param_3[0x10] ^ uVar7;
  uVar5 = param_3[0x11] ^ uVar4 ^ uVar1;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar2 = uVar2 ^ uVar5 + uVar4;
  uVar3 = uVar3 ^ uVar5;
  uVar4 = param_3[0x12] ^ uVar2;
  uVar5 = param_3[0x13] ^ uVar4 ^ uVar3;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar5;
  uVar7 = uVar7 ^ uVar5 + uVar4;
  uVar4 = param_3[0x14] ^ uVar7;
  uVar5 = param_3[0x15] ^ uVar4 ^ uVar1;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar5;
  uVar2 = uVar2 ^ uVar5 + uVar4;
  uVar4 = param_3[0x16] ^ uVar2;
  uVar5 = param_3[0x17] ^ uVar4 ^ uVar3;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar5;
  uVar7 = uVar7 ^ uVar5 + uVar4;
  uVar4 = param_3[0x18] ^ uVar7;
  uVar5 = param_3[0x19] ^ uVar4 ^ uVar1;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar5;
  uVar2 = uVar2 ^ uVar5 + uVar4;
  uVar4 = param_3[0x1a] ^ uVar2;
  uVar5 = param_3[0x1b] ^ uVar4 ^ uVar3;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar7 = uVar7 ^ uVar5 + uVar4;
  uVar1 = uVar1 ^ uVar5;
  uVar4 = param_3[0x1c] ^ uVar7;
  uVar5 = param_3[0x1d] ^ uVar4 ^ uVar1;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar5;
  uVar2 = uVar2 ^ uVar5 + uVar4;
  uVar5 = param_3[0x1f] ^ param_3[0x1e] ^ uVar2 ^ uVar3;
  uVar6 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar5 = (param_3[0x1e] ^ uVar2) + uVar6;
  uVar4 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar6 = uVar6 + uVar4;
  param_2[0xb] = (char)uVar2;
  param_2[0xf] = (char)uVar3;
  uVar5 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_145d86300 + (ulonglong)(uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar6 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar5;
  param_2[7] = (char)uVar1;
  uVar7 = uVar7 ^ uVar5 + uVar4;
  param_2[3] = (char)uVar7;
  *param_2 = (char)(uVar7 >> 0x18);
  param_2[1] = (char)(uVar7 >> 0x10);
  param_2[2] = (char)(uVar7 >> 8);
  param_2[4] = (char)(uVar1 >> 0x18);
  param_2[5] = (char)(uVar1 >> 0x10);
  param_2[6] = (char)(uVar1 >> 8);
  param_2[8] = (char)(uVar2 >> 0x18);
  param_2[9] = (char)(uVar2 >> 0x10);
  param_2[10] = (char)(uVar2 >> 8);
  param_2[0xc] = (char)(uVar3 >> 0x18);
  param_2[0xd] = (char)(uVar3 >> 0x10);
  param_2[0xe] = (char)(uVar3 >> 8);
  return;
}



// FUNCTION 143d4e670 SEED_set_key body=2838 status=ok
// SIG undefined SEED_set_key(void)

void SEED_set_key(undefined1 *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint3 uVar5;
  uint3 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  bVar1 = param_1[8];
  bVar2 = param_1[0xc];
  uVar5 = CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]);
  uVar3 = param_1[3];
  uVar6 = CONCAT21(CONCAT11(param_1[4],param_1[5]),param_1[6]);
  uVar4 = param_1[7];
  uVar8 = CONCAT31(CONCAT21(CONCAT11(bVar1,param_1[9]),param_1[10]),param_1[0xb]);
  uVar11 = CONCAT31(uVar5,uVar3) + 0x61c88647 + uVar8;
  uVar7 = CONCAT31(CONCAT21(CONCAT11(bVar2,param_1[0xd]),param_1[0xe]),param_1[0xf]);
  uVar13 = (CONCAT31(uVar6,uVar4) - uVar7) + 0x9e3779b9;
  *param_2 = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar11 >> 0x18) * 4) ^
             *(uint *)(&DAT_145d86300 + (ulonglong)(uVar11 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar11 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar11 & 0xff) * 4);
  uVar9 = CONCAT31(uVar6,uVar4) << 0x18 ^ (uint)uVar5;
  param_2[1] = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar13 >> 0x18) * 4) ^
               *(uint *)(&DAT_145d86300 + (ulonglong)(uVar13 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar13 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar13 & 0xff) * 4);
  uVar11 = uVar9 + 0xc3910c8d + uVar8;
  uVar10 = CONCAT31(uVar5,uVar3) << 0x18 ^ (uint)uVar6;
  uVar13 = (uVar10 - uVar7) + 0x3c6ef373;
  param_2[2] = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar11 >> 0x18) * 4) ^
               *(uint *)(&DAT_145d86300 + (ulonglong)(uVar11 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar11 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar11 & 0xff) * 4);
  uVar16 = (uint)bVar2 ^ uVar8 << 8;
  param_2[3] = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar13 >> 0x18) * 4) ^
               *(uint *)(&DAT_145d86300 + (ulonglong)(uVar13 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar13 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar13 & 0xff) * 4);
  uVar11 = uVar9 + 0x8722191a + uVar16;
  uVar13 = (uint)bVar1 ^ uVar7 << 8;
  uVar14 = (uVar10 - uVar13) + 0x78dde6e6;
  param_2[4] = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar11 >> 0x18) * 4) ^
               *(uint *)(&DAT_145d86300 + (ulonglong)(uVar11 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar11 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar11 & 0xff) * 4);
  uVar11 = (uint)uVar6 << 0x18 ^ uVar9 >> 8;
  param_2[5] = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar14 >> 0x18) * 4) ^
               *(uint *)(&DAT_145d86300 + (ulonglong)(uVar14 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar14 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar14 & 0xff) * 4);
  uVar12 = uVar11 + 0xe443234 + uVar16;
  uVar14 = (uint)uVar5 << 0x18 ^ uVar10 >> 8;
  uVar15 = (uVar14 - uVar13) + 0xf1bbcdcc;
  param_2[6] = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar12 >> 0x18) * 4) ^
               *(uint *)(&DAT_145d86300 + (ulonglong)(uVar12 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar12 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar12 & 0xff) * 4);
  uVar12 = (uVar7 & 0xffffff) >> 0x10 ^ uVar16 << 8;
  param_2[7] = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar15 >> 0x18) * 4) ^
               *(uint *)(&DAT_145d86300 + (ulonglong)(uVar15 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar15 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar15 & 0xff) * 4);
  uVar7 = uVar11 + 0x1c886467 + uVar12;
  uVar17 = (uVar8 & 0xffffff) >> 0x10 ^ uVar13 << 8;
  uVar8 = (uVar14 - uVar17) + 0xe3779b99;
  param_2[8] = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar7 >> 0x18) * 4) ^
               *(uint *)(&DAT_145d86300 + (ulonglong)(uVar7 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar7 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar7 & 0xff) * 4);
  param_2[9] = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar8 >> 0x18) * 4) ^
               *(uint *)(&DAT_145d86300 + (ulonglong)(uVar8 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar8 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar8 & 0xff) * 4);
  uVar8 = (uVar10 >> 8) << 0x18 ^ uVar11 >> 8;
  uVar7 = (uVar9 >> 8) << 0x18 ^ uVar14 >> 8;
  uVar9 = uVar8 + 0x3910c8cd + uVar12;
  uVar10 = (uVar7 - uVar17) + 0xc6ef3733;
  param_2[10] = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar9 >> 0x18) * 4) ^
                *(uint *)(&DAT_145d86300 + (ulonglong)(uVar9 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar9 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar9 & 0xff) * 4);
  uVar9 = (uVar13 & 0xffffff) >> 0x10 ^ uVar12 << 8;
  param_2[0xb] = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar10 >> 0x18) * 4) ^
                 *(uint *)(&DAT_145d86300 + (ulonglong)(uVar10 >> 0x10 & 0xff) * 4) ^
                 *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar10 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar10 & 0xff) * 4);
  uVar13 = uVar8 + 0x72219199 + uVar9;
  uVar10 = (uVar16 & 0xffffff) >> 0x10 ^ uVar17 << 8;
  uVar15 = (uVar7 - uVar10) + 0x8dde6e67;
  param_2[0xc] = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar13 >> 0x18) * 4) ^
                 *(uint *)(&DAT_145d86300 + (ulonglong)(uVar13 >> 0x10 & 0xff) * 4) ^
                 *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar13 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar13 & 0xff) * 4);
  param_2[0xd] = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar15 >> 0x18) * 4) ^
                 *(uint *)(&DAT_145d86300 + (ulonglong)(uVar15 >> 0x10 & 0xff) * 4) ^
                 *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar15 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar15 & 0xff) * 4);
  uVar16 = (uVar14 >> 8) << 0x18 ^ uVar8 >> 8;
  uVar13 = (uVar11 >> 8) << 0x18 ^ uVar7 >> 8;
  uVar11 = uVar16 + 0xe4432331 + uVar9;
  uVar14 = (uVar13 - uVar10) + 0x1bbcdccf;
  param_2[0xe] = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar11 >> 0x18) * 4) ^
                 *(uint *)(&DAT_145d86300 + (ulonglong)(uVar11 >> 0x10 & 0xff) * 4) ^
                 *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar11 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar11 & 0xff) * 4);
  uVar11 = (uVar17 & 0xffffff) >> 0x10 ^ uVar9 << 8;
  param_2[0xf] = *(uint *)(&DAT_145d86700 + (ulonglong)(uVar14 >> 0x18) * 4) ^
                 *(uint *)(&DAT_145d86300 + (ulonglong)(uVar14 >> 0x10 & 0xff) * 4) ^
                 *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar14 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar14 & 0xff) * 4);
  uVar15 = uVar16 + 0xc8864662 + uVar11;
  uVar14 = (uVar12 & 0xffffff) >> 0x10 ^ uVar10 << 8;
  uVar12 = (uVar13 - uVar14) + 0x3779b99e;
  param_2[0x10] =
       *(uint *)(&DAT_145d86700 + (ulonglong)(uVar15 >> 0x18) * 4) ^
       *(uint *)(&DAT_145d86300 + (ulonglong)(uVar15 >> 0x10 & 0xff) * 4) ^
       *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar15 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar15 & 0xff) * 4);
  param_2[0x11] =
       *(uint *)(&DAT_145d86700 + (ulonglong)(uVar12 >> 0x18) * 4) ^
       *(uint *)(&DAT_145d86300 + (ulonglong)(uVar12 >> 0x10 & 0xff) * 4) ^
       *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar12 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar12 & 0xff) * 4);
  uVar17 = (uVar7 >> 8) << 0x18 ^ uVar16 >> 8;
  uVar15 = (uVar8 >> 8) << 0x18 ^ uVar13 >> 8;
  uVar12 = (uVar15 - uVar14) + 0x6ef3733c;
  uVar7 = uVar17 + 0x910c8cc4 + uVar11;
  param_2[0x12] =
       *(uint *)(&DAT_145d86700 + (ulonglong)(uVar7 >> 0x18) * 4) ^
       *(uint *)(&DAT_145d86300 + (ulonglong)(uVar7 >> 0x10 & 0xff) * 4) ^
       *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar7 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar7 & 0xff) * 4);
  uVar8 = (uVar10 & 0xffffff) >> 0x10 ^ uVar11 << 8;
  param_2[0x13] =
       *(uint *)(&DAT_145d86700 + (ulonglong)(uVar12 >> 0x18) * 4) ^
       *(uint *)(&DAT_145d86300 + (ulonglong)(uVar12 >> 0x10 & 0xff) * 4) ^
       *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar12 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar12 & 0xff) * 4);
  uVar10 = uVar17 + 0x22191988 + uVar8;
  uVar7 = (uVar9 & 0xffffff) >> 0x10 ^ uVar14 << 8;
  uVar9 = (uVar15 - uVar7) + 0xdde6e678;
  param_2[0x14] =
       *(uint *)(&DAT_145d86700 + (ulonglong)(uVar10 >> 0x18) * 4) ^
       *(uint *)(&DAT_145d86300 + (ulonglong)(uVar10 >> 0x10 & 0xff) * 4) ^
       *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar10 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar10 & 0xff) * 4);
  param_2[0x15] =
       *(uint *)(&DAT_145d86700 + (ulonglong)(uVar9 >> 0x18) * 4) ^
       *(uint *)(&DAT_145d86300 + (ulonglong)(uVar9 >> 0x10 & 0xff) * 4) ^
       *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar9 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar9 & 0xff) * 4);
  uVar9 = (uVar13 >> 8) << 0x18 ^ uVar17 >> 8;
  uVar16 = (uVar16 >> 8) << 0x18 ^ uVar15 >> 8;
  uVar13 = uVar9 + 0x4432330f + uVar8;
  uVar12 = (uVar16 - uVar7) + 0xbbcdccf1;
  param_2[0x16] =
       *(uint *)(&DAT_145d86700 + (ulonglong)(uVar13 >> 0x18) * 4) ^
       *(uint *)(&DAT_145d86300 + (ulonglong)(uVar13 >> 0x10 & 0xff) * 4) ^
       *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar13 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar13 & 0xff) * 4);
  uVar10 = (uVar14 & 0xffffff) >> 0x10 ^ uVar8 << 8;
  param_2[0x17] =
       *(uint *)(&DAT_145d86700 + (ulonglong)(uVar12 >> 0x18) * 4) ^
       *(uint *)(&DAT_145d86300 + (ulonglong)(uVar12 >> 0x10 & 0xff) * 4) ^
       *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar12 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar12 & 0xff) * 4);
  uVar14 = uVar9 + 0x8864661d + uVar10;
  uVar13 = (uVar11 & 0xffffff) >> 0x10 ^ uVar7 << 8;
  uVar11 = (uVar16 - uVar13) + 0x779b99e3;
  param_2[0x18] =
       *(uint *)(&DAT_145d86700 + (ulonglong)(uVar14 >> 0x18) * 4) ^
       *(uint *)(&DAT_145d86300 + (ulonglong)(uVar14 >> 0x10 & 0xff) * 4) ^
       *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar14 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar14 & 0xff) * 4);
  param_2[0x19] =
       *(uint *)(&DAT_145d86700 + (ulonglong)(uVar11 >> 0x18) * 4) ^
       *(uint *)(&DAT_145d86300 + (ulonglong)(uVar11 >> 0x10 & 0xff) * 4) ^
       *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar11 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar11 & 0xff) * 4);
  uVar11 = (uVar15 >> 8) << 0x18 ^ uVar9 >> 8;
  uVar14 = (uVar17 >> 8) << 0x18 ^ uVar16 >> 8;
  uVar12 = uVar11 + 0x10c8cc3a + uVar10;
  uVar15 = (uVar14 - uVar13) + 0xef3733c6;
  param_2[0x1a] =
       *(uint *)(&DAT_145d86700 + (ulonglong)(uVar12 >> 0x18) * 4) ^
       *(uint *)(&DAT_145d86300 + (ulonglong)(uVar12 >> 0x10 & 0xff) * 4) ^
       *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar12 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar12 & 0xff) * 4);
  uVar12 = (uVar7 & 0xffffff) >> 0x10 ^ uVar10 << 8;
  param_2[0x1b] =
       *(uint *)(&DAT_145d86700 + (ulonglong)(uVar15 >> 0x18) * 4) ^
       *(uint *)(&DAT_145d86300 + (ulonglong)(uVar15 >> 0x10 & 0xff) * 4) ^
       *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar15 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar15 & 0xff) * 4);
  uVar10 = uVar11 + 0x21919873 + uVar12;
  uVar7 = (uVar8 & 0xffffff) >> 0x10 ^ uVar13 << 8;
  uVar8 = (uVar14 - uVar7) + 0xde6e678d;
  param_2[0x1c] =
       *(uint *)(&DAT_145d86700 + (ulonglong)(uVar10 >> 0x18) * 4) ^
       *(uint *)(&DAT_145d86300 + (ulonglong)(uVar10 >> 0x10 & 0xff) * 4) ^
       *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar10 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar10 & 0xff) * 4);
  param_2[0x1d] =
       *(uint *)(&DAT_145d86700 + (ulonglong)(uVar8 >> 0x18) * 4) ^
       *(uint *)(&DAT_145d86300 + (ulonglong)(uVar8 >> 0x10 & 0xff) * 4) ^
       *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar8 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar8 & 0xff) * 4);
  uVar12 = ((uVar16 >> 8) << 0x18 ^ uVar11 >> 8) + 0x432330e5 + uVar12;
  uVar7 = (((uVar9 >> 8) << 0x18 ^ uVar14 >> 8) - uVar7) + 0xbcdccf1b;
  param_2[0x1e] =
       *(uint *)(&DAT_145d86700 + (ulonglong)(uVar12 >> 0x18) * 4) ^
       *(uint *)(&DAT_145d86300 + (ulonglong)(uVar12 >> 0x10 & 0xff) * 4) ^
       *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar12 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar12 & 0xff) * 4);
  param_2[0x1f] =
       *(uint *)(&DAT_145d86700 + (ulonglong)(uVar7 >> 0x18) * 4) ^
       *(uint *)(&DAT_145d86300 + (ulonglong)(uVar7 >> 0x10 & 0xff) * 4) ^
       *(uint *)(&DAT_145d85f00 + (ulonglong)(uVar7 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_145d85b00 + (ulonglong)(uVar7 & 0xff) * 4);
  return;
}



// FUNCTION 143d4f190 SEED_ecb_encrypt body=36 status=ok
// SIG undefined SEED_ecb_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SEED_ecb_encrypt(void)

{
  int in_R9D;
  
  if (in_R9D != 0) {
    SEED_encrypt();
    return;
  }
  SEED_decrypt();
  return;
}



// FUNCTION 143d4f1c0 SEED_cbc_encrypt body=62 status=ok
// SIG undefined SEED_cbc_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SEED_cbc_encrypt(void)

{
  int in_stack_00000030;
  
  if (in_stack_00000030 != 0) {
    CRYPTO_cbc128_encrypt();
    return;
  }
  CRYPTO_cbc128_decrypt();
  return;
}



// FUNCTION 143d4f200 SEED_cfb128_encrypt body=66 status=ok
// SIG undefined SEED_cfb128_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SEED_cfb128_encrypt(void)

{
  CRYPTO_cfb128_encrypt();
  return;
}



// FUNCTION 143d4f250 SEED_ofb128_encrypt body=55 status=ok
// SIG undefined SEED_ofb128_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SEED_ofb128_encrypt(void)

{
  CRYPTO_ofb128_encrypt();
  return;
}



// FUNCTION 143d4f290 openssl_fopen body=431 status=ok
// SIG undefined openssl_fopen(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FILE * openssl_fopen(LPCSTR param_1,LPCSTR param_2)

{
  longlong lVar1;
  int iVar2;
  DWORD DVar3;
  FILE *pFVar4;
  int *piVar5;
  ulonglong uVar6;
  int cbMultiByte;
  longlong lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  undefined8 uStackY_90;
  undefined1 auStackY_88 [32];
  wchar_t local_58 [8];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143d4f2a6;
  local_48 = DAT_1468387a8 ^ (ulonglong)local_58;
  lVar10 = -1;
  lVar7 = -1;
  pFVar4 = (FILE *)0x0;
  do {
    lVar7 = lVar7 + 1;
  } while (param_1[lVar7] != '\0');
  cbMultiByte = (int)lVar7 + 1;
  uStackY_90 = 0x143d4f302;
  iVar2 = MultiByteToWideChar(0xfde9,8,param_1,cbMultiByte,(LPWSTR)0x0,0);
  DVar3 = 8;
  if (iVar2 < 1) {
    uStackY_90 = 0x143d4f30e;
    DVar3 = GetLastError();
    if (DVar3 == 0x3ec) {
      uStackY_90 = 0x143d4f335;
      iVar2 = MultiByteToWideChar(0xfde9,0,param_1,cbMultiByte,(LPWSTR)0x0,0);
      DVar3 = 0;
      if (0 < iVar2) goto LAB_143d4f35d;
    }
    uStackY_90 = 0x143d4f341;
    DVar3 = GetLastError();
    puVar8 = auStackY_88;
    puVar9 = auStackY_88;
    if (DVar3 != 0x459) goto LAB_143d4f41f;
  }
  else {
LAB_143d4f35d:
    uVar6 = (longlong)iVar2 * 2 + 0xf;
    if (uVar6 <= (ulonglong)((longlong)iVar2 * 2)) {
      uVar6 = 0xffffffffffffff0;
    }
    uStackY_90 = 0x143d4f382;
    lVar7 = -(uVar6 & 0xfffffffffffffff0);
    *(int *)(&stack0xffffffffffffffa0 + lVar7) = iVar2;
    *(wchar_t **)(&stack0xffffffffffffff98 + lVar7) = (wchar_t *)((longlong)local_58 + lVar7);
    *(undefined8 *)(auStackY_88 + lVar7 + -8) = 0x143d4f3a7;
    iVar2 = MultiByteToWideChar(0xfde9,DVar3,param_1,cbMultiByte,
                                *(LPWSTR *)(&stack0xffffffffffffff98 + lVar7),
                                *(int *)(&stack0xffffffffffffffa0 + lVar7));
    puVar9 = auStackY_88 + lVar7;
    if (iVar2 == 0) goto LAB_143d4f41f;
    do {
      lVar1 = lVar10 + 1;
      lVar10 = lVar10 + 1;
    } while (param_2[lVar1] != '\0');
    *(undefined4 *)(&stack0xffffffffffffffa0 + lVar7) = 8;
    *(wchar_t **)(&stack0xffffffffffffff98 + lVar7) = local_58;
    *(undefined8 *)(auStackY_88 + lVar7 + -8) = 0x143d4f3e0;
    iVar2 = MultiByteToWideChar(0xfde9,0,param_2,(int)lVar10 + 1,
                                *(LPWSTR *)(&stack0xffffffffffffff98 + lVar7),
                                *(int *)(&stack0xffffffffffffffa0 + lVar7));
    puVar9 = auStackY_88 + lVar7;
    if (iVar2 == 0) goto LAB_143d4f41f;
    *(undefined8 *)(auStackY_88 + lVar7 + -8) = 0x143d4f3f1;
    pFVar4 = _wfopen((wchar_t *)((longlong)local_58 + lVar7),local_58);
    puVar9 = auStackY_88 + lVar7;
    if (pFVar4 != (FILE *)0x0) goto LAB_143d4f41f;
    *(undefined8 *)(auStackY_88 + lVar7 + -8) = 0x143d4f3ff;
    piVar5 = _errno();
    puVar8 = auStackY_88 + lVar7;
    if (*piVar5 != 2) {
      *(undefined8 *)(auStackY_88 + lVar7 + -8) = 0x143d4f40e;
      piVar5 = _errno();
      puVar8 = auStackY_88 + lVar7;
      puVar9 = auStackY_88 + lVar7;
      if (*piVar5 != 9) goto LAB_143d4f41f;
    }
  }
  *(undefined8 *)(puVar8 + -8) = 0x143d4f358;
  pFVar4 = fopen(param_1,param_2);
  puVar9 = puVar8;
LAB_143d4f41f:
  *(undefined8 *)(puVar9 + -8) = 0x143d4f42b;
  return pFVar4;
}



// FUNCTION 143d4f440 BN_MONT_CTX_copy body=131 status=ok
// SIG undefined BN_MONT_CTX_copy(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * BN_MONT_CTX_copy(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar1 = BN_copy(param_1 + 2,param_2 + 2);
  if (((lVar1 != 0) && (lVar1 = BN_copy(param_1 + 8,param_2 + 8), lVar1 != 0)) &&
     (lVar1 = BN_copy(param_1 + 0xe,param_2 + 0xe), lVar1 != 0)) {
    *param_1 = *param_2;
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
    return param_1;
  }
  return (undefined4 *)0x0;
}



// FUNCTION 143d4f4d0 BN_MONT_CTX_free body=82 status=ok
// SIG undefined BN_MONT_CTX_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_MONT_CTX_free(longlong param_1)

{
  if (param_1 != 0) {
    BN_clear_free(param_1 + 8);
    BN_clear_free(param_1 + 0x20);
    BN_clear_free(param_1 + 0x38);
    if ((*(byte *)(param_1 + 0x60) & 1) != 0) {
      CRYPTO_free(param_1,"crypto\\bn\\bn_mont.c",0x104);
    }
  }
  return;
}



// FUNCTION 143d4f530 BN_MONT_CTX_new body=149 status=ok
// SIG undefined BN_MONT_CTX_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * BN_MONT_CTX_new(void)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143d4f53c;
  puVar1 = (undefined4 *)CRYPTO_malloc(0x68,"crypto\\bn\\bn_mont.c",0xe8);
  if (puVar1 == (undefined4 *)0x0) {
    ERR_put_error(3,0x95,0x41,"crypto\\bn\\bn_mont.c",0xe9,uVar2);
    return (undefined4 *)0x0;
  }
  *puVar1 = 0;
  bn_init(puVar1 + 2);
  bn_init(puVar1 + 8);
  bn_init(puVar1 + 0xe);
  *(undefined8 *)(puVar1 + 0x16) = 0;
  *(undefined8 *)(puVar1 + 0x14) = 0;
  puVar1[0x18] = 1;
  return puVar1;
}



// FUNCTION 143d4f5d0 BN_MONT_CTX_set body=653 status=ok
// SIG undefined BN_MONT_CTX_set(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_MONT_CTX_set(uint *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong local_48 [2];
  longlong *local_38;
  uint local_30;
  undefined8 local_2c;
  undefined8 uStack_20;
  
  uStack_20 = 0x143d4f5e4;
  uVar5 = 0;
  uVar6 = 0;
  iVar2 = BN_is_zero(param_2);
  if (iVar2 != 0) {
    return 0;
  }
  BN_CTX_start(param_3);
  puVar3 = (undefined8 *)BN_CTX_get(param_3);
  uVar7 = uVar5;
  if ((puVar3 != (undefined8 *)0x0) && (lVar4 = BN_copy(param_1 + 8,param_2), lVar4 != 0)) {
    iVar2 = BN_get_flags(param_2,4);
    if (iVar2 != 0) {
      BN_set_flags(param_1 + 8,4);
    }
    param_1[0xc] = 0;
    bn_init(&local_38);
    local_38 = local_48;
    local_2c = 2;
    iVar2 = BN_get_flags(param_2,4);
    if (iVar2 != 0) {
      BN_set_flags(&local_38,4);
    }
    iVar2 = BN_num_bits(param_2);
    *param_1 = iVar2 + 0x3f + (iVar2 + 0x3f >> 0x1f & 0x3fU) & 0xffffffc0;
    BN_set_word(param_1 + 2,0);
    iVar2 = BN_set_bit(param_1 + 2,0x40);
    if (iVar2 != 0) {
      local_48[0] = *(longlong *)*param_2;
      local_48[1] = 0;
      local_30 = (uint)(local_48[0] != 0);
      iVar2 = BN_is_one(&local_38);
      if (iVar2 == 0) {
        lVar4 = BN_mod_inverse(puVar3,param_1 + 2,&local_38,param_3);
        uVar7 = uVar6;
        if (lVar4 == 0) goto LAB_143d4f839;
      }
      else {
        BN_set_word(puVar3,0);
      }
      iVar2 = BN_lshift(puVar3,puVar3,0x40);
      uVar7 = uVar5;
      if (iVar2 != 0) {
        iVar2 = BN_is_zero(puVar3);
        if (iVar2 == 0) {
          iVar2 = BN_sub_word(puVar3,1);
        }
        else {
          iVar2 = BN_set_word(puVar3,0xffffffffffffffff);
        }
        uVar7 = uVar6;
        if ((iVar2 != 0) && (iVar2 = BN_div(puVar3,0,puVar3,&local_38,param_3), iVar2 != 0)) {
          if (0 < *(int *)(puVar3 + 1)) {
            uVar5 = *(undefined8 *)*puVar3;
          }
          *(undefined8 *)(param_1 + 0x14) = uVar5;
          param_1[0x16] = 0;
          param_1[0x17] = 0;
          BN_set_word(param_1 + 2,0);
          iVar2 = BN_set_bit(param_1 + 2,*param_1 * 2);
          if ((iVar2 != 0) &&
             (iVar2 = BN_div(0,param_1 + 2,param_1 + 2,param_1 + 8,param_3), iVar2 != 0)) {
            uVar1 = param_1[10];
            for (lVar4 = (longlong)(int)param_1[4]; lVar4 < (int)uVar1; lVar4 = lVar4 + 1) {
              *(undefined8 *)(*(longlong *)(param_1 + 2) + lVar4 * 8) = 0;
            }
            param_1[4] = uVar1;
            uVar7 = 1;
          }
        }
      }
    }
  }
LAB_143d4f839:
  BN_CTX_end(param_3);
  return uVar7;
}



// FUNCTION 143d4f860 BN_MONT_CTX_set_locked body=294 status=ok
// SIG undefined BN_MONT_CTX_set_locked(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 *
BN_MONT_CTX_set_locked(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143d4f880;
  CRYPTO_THREAD_read_lock(param_2);
  puVar2 = (undefined4 *)*param_1;
  CRYPTO_THREAD_unlock(param_2);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)CRYPTO_malloc(0x68,"crypto\\bn\\bn_mont.c",0xe8);
    if (puVar2 == (undefined4 *)0x0) {
      ERR_put_error(3,0x95,0x41,"crypto\\bn\\bn_mont.c",0xe9,uVar3);
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0;
      bn_init(puVar2 + 2);
      bn_init(puVar2 + 8);
      bn_init(puVar2 + 0xe);
      *(undefined8 *)(puVar2 + 0x16) = 0;
      *(undefined8 *)(puVar2 + 0x14) = 0;
      puVar2[0x18] = 1;
      iVar1 = BN_MONT_CTX_set(puVar2,param_3,param_4);
      if (iVar1 == 0) {
        BN_MONT_CTX_free(puVar2);
        puVar2 = (undefined4 *)0x0;
      }
      else {
        CRYPTO_THREAD_read_lock(param_2);
        if (*param_1 == 0) {
          *param_1 = (longlong)puVar2;
        }
        else {
          BN_MONT_CTX_free(puVar2);
          puVar2 = (undefined4 *)*param_1;
        }
        CRYPTO_THREAD_unlock(param_2);
      }
    }
  }
  return puVar2;
}



// FUNCTION 143d4f990 BN_from_montgomery body=146 status=ok
// SIG undefined BN_from_montgomery(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
BN_from_montgomery(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = 0;
  BN_CTX_start(param_4);
  lVar2 = BN_CTX_get(param_4);
  if (lVar2 != 0) {
    lVar3 = BN_copy(lVar2,param_2);
    if (lVar3 != 0) {
      uVar1 = bn_from_montgomery_word(param_1,lVar2,param_3);
    }
  }
  BN_CTX_end(param_4);
  bn_correct_top(param_1);
  return uVar1;
}



// FUNCTION 143d4fa30 BN_mod_mul_montgomery body=60 status=ok
// SIG undefined BN_mod_mul_montgomery(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 BN_mod_mul_montgomery(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = bn_mul_mont_fixed_top();
  bn_correct_top(param_1);
  return uVar1;
}



// FUNCTION 143d4fa70 bn_from_mont_fixed_top body=138 status=ok
// SIG undefined bn_from_mont_fixed_top(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
bn_from_mont_fixed_top(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = 0;
  BN_CTX_start(param_4);
  lVar2 = BN_CTX_get(param_4);
  if (lVar2 != 0) {
    lVar3 = BN_copy(lVar2,param_2);
    if (lVar3 != 0) {
      uVar1 = bn_from_montgomery_word(param_1,lVar2,param_3);
    }
  }
  BN_CTX_end(param_4);
  return uVar1;
}



// FUNCTION 143d4fb00 bn_from_montgomery_word body=1107 status=ok
// SIG undefined bn_from_montgomery_word(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 bn_from_montgomery_word(ulonglong *param_1,longlong *param_2,longlong param_3)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  uint uVar17;
  ulonglong uVar19;
  longlong *plVar20;
  int iVar21;
  int iVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar18;
  
  uVar3 = *(uint *)(param_3 + 0x28);
  if (uVar3 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    return 1;
  }
  uVar17 = uVar3 * 2;
  lVar13 = bn_wexpand(param_2,uVar17);
  if (lVar13 != 0) {
    uVar18 = 0;
    *(uint *)(param_2 + 2) = *(uint *)(param_2 + 2) ^ *(uint *)(param_3 + 0x30);
    iVar4 = (int)param_2[1];
    uVar5 = *(undefined8 *)(param_3 + 0x20);
    plVar20 = (longlong *)*param_2;
    uVar19 = uVar18;
    if ((0 < (int)uVar17) && (uVar19 = 0, 7 < uVar17)) {
      uVar12 = uVar17 & 0x80000007;
      if ((int)uVar12 < 0) {
        uVar12 = (uVar12 - 1 | 0xfffffff8) + 1;
      }
      puVar16 = (ulonglong *)(plVar20 + 4);
      uVar19 = uVar18;
      iVar22 = 4;
      do {
        iVar21 = (int)uVar19;
        uVar19 = (ulonglong)(iVar21 + 8U);
        puVar16[-4] = -(ulonglong)((uint)(iVar21 - iVar4) >> 0x1f) & puVar16[-4];
        puVar16[-3] = -(ulonglong)((uint)((iVar21 + 1) - iVar4) >> 0x1f) & puVar16[-3];
        puVar16[-2] = -(ulonglong)((uint)((iVar22 + -2) - iVar4) >> 0x1f) & puVar16[-2];
        puVar16[-1] = -(ulonglong)((uint)((iVar22 + -1) - iVar4) >> 0x1f) & puVar16[-1];
        *puVar16 = -(ulonglong)((uint)(iVar22 - iVar4) >> 0x1f) & *puVar16;
        puVar16[1] = -(ulonglong)((uint)((iVar22 + 1) - iVar4) >> 0x1f) & puVar16[1];
        puVar16[2] = -(ulonglong)((uint)((iVar22 + 2) - iVar4) >> 0x1f) & puVar16[2];
        puVar16[3] = -(ulonglong)((uint)((iVar22 + 3) - iVar4) >> 0x1f) & puVar16[3];
        puVar16 = puVar16 + 8;
        iVar22 = iVar22 + 8;
      } while ((int)(iVar21 + 8U) < (int)(uVar17 - uVar12));
    }
    for (lVar13 = (longlong)(int)uVar19; lVar13 < (int)uVar17; lVar13 = lVar13 + 1) {
      iVar22 = (int)uVar19;
      uVar19 = (ulonglong)(iVar22 + 1);
      plVar20[lVar13] = plVar20[lVar13] & -(ulonglong)((uint)(iVar22 - iVar4) >> 0x1f);
    }
    *(uint *)(param_2 + 1) = uVar17;
    lVar13 = *(longlong *)(param_3 + 0x50);
    lVar24 = (longlong)(int)uVar3;
    uVar19 = uVar18;
    uVar25 = (ulonglong)uVar3;
    if (0 < (int)uVar3) {
      do {
        lVar14 = bn_mul_add_words(plVar20,uVar5,uVar3,lVar13 * *plVar20);
        uVar6 = plVar20[lVar24];
        uVar15 = lVar14 + uVar6 + uVar19;
        plVar20[lVar24] = uVar15;
        if (uVar15 != uVar6) {
          uVar19 = 1;
        }
        uVar19 = uVar19 & uVar15 <= uVar6;
        plVar20 = plVar20 + 1;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
    lVar13 = bn_wexpand(param_1,(ulonglong)uVar3);
    if (lVar13 != 0) {
      uVar6 = *param_1;
      *(uint *)(param_1 + 1) = uVar3;
      *(int *)(param_1 + 2) = (int)param_2[2];
      uVar25 = *param_2 + lVar24 * 8;
      lVar13 = bn_sub_words(uVar6,uVar25,uVar5,uVar3);
      uVar19 = uVar19 - lVar13;
      uVar17 = 0;
      if (((0 < (int)uVar3) && (7 < uVar3)) &&
         ((uVar6 + (longlong)(int)(uVar3 - 1) * 8 < uVar25 ||
          (uVar25 + (longlong)(int)(uVar3 - 1) * 8 < uVar6)))) {
        uVar12 = uVar3 & 0x80000007;
        if ((int)uVar12 < 0) {
          uVar12 = (uVar12 - 1 | 0xfffffff8) + 1;
        }
        uVar15 = ~uVar19;
        uVar7 = ~uVar19;
        lVar13 = uVar6 - uVar25;
        puVar16 = (ulonglong *)(uVar25 + 0x10);
        uVar23 = uVar18;
        do {
          puVar1 = (ulonglong *)(lVar13 + -0x10 + (longlong)puVar16);
          uVar8 = *puVar1;
          uVar9 = puVar1[1];
          puVar1 = puVar16 + 8;
          uVar17 = (int)uVar18 + 8;
          uVar18 = (ulonglong)uVar17;
          uVar23 = uVar23 + 8;
          uVar10 = puVar16[-2];
          uVar11 = puVar16[-1];
          puVar16[-2] = 0;
          puVar16[-1] = 0;
          puVar2 = (ulonglong *)(lVar13 + -0x50 + (longlong)puVar1);
          *puVar2 = uVar15 & uVar8 | uVar10 & uVar19;
          puVar2[1] = uVar7 & uVar9 | uVar11 & uVar19;
          puVar2 = (ulonglong *)(lVar13 + -0x40 + (longlong)puVar1);
          uVar8 = *puVar2;
          uVar9 = puVar2[1];
          uVar10 = *puVar16;
          uVar11 = puVar16[1];
          *puVar16 = 0;
          puVar16[1] = 0;
          puVar2 = (ulonglong *)(lVar13 + -0x40 + (longlong)puVar1);
          *puVar2 = uVar15 & uVar8 | uVar10 & uVar19;
          puVar2[1] = uVar7 & uVar9 | uVar11 & uVar19;
          puVar2 = (ulonglong *)(lVar13 + -0x30 + (longlong)puVar1);
          uVar8 = *puVar2;
          uVar9 = puVar2[1];
          uVar10 = puVar16[2];
          uVar11 = puVar16[3];
          puVar16[2] = 0;
          puVar16[3] = 0;
          puVar2 = (ulonglong *)(lVar13 + -0x30 + (longlong)puVar1);
          *puVar2 = uVar15 & uVar8 | uVar10 & uVar19;
          puVar2[1] = uVar7 & uVar9 | uVar11 & uVar19;
          puVar2 = (ulonglong *)(lVar13 + -0x20 + (longlong)puVar1);
          uVar8 = *puVar2;
          uVar9 = puVar2[1];
          uVar10 = puVar16[4];
          uVar11 = puVar16[5];
          puVar16[4] = 0;
          puVar16[5] = 0;
          puVar16 = (ulonglong *)(lVar13 + -0x20 + (longlong)puVar1);
          *puVar16 = uVar15 & uVar8 | uVar10 & uVar19;
          puVar16[1] = uVar7 & uVar9 | uVar11 & uVar19;
          puVar16 = puVar1;
        } while ((longlong)uVar23 < (longlong)(int)(uVar3 - uVar12));
      }
      lVar13 = (longlong)(int)uVar17;
      if (lVar13 < lVar24) {
        lVar24 = lVar24 - lVar13;
        puVar16 = (ulonglong *)(uVar25 + lVar13 * 8);
        do {
          *(ulonglong *)((longlong)puVar16 + (uVar6 - uVar25)) =
               ~uVar19 & *(ulonglong *)((longlong)puVar16 + (uVar6 - uVar25)) | *puVar16 & uVar19;
          *puVar16 = 0;
          lVar24 = lVar24 + -1;
          puVar16 = puVar16 + 1;
        } while (lVar24 != 0);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143d4ff60 bn_mul_mont_fixed_top body=293 status=ok
// SIG undefined bn_mul_mont_fixed_top(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
bn_mul_mont_fixed_top
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
          undefined8 param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  iVar2 = *(int *)(param_4 + 0x28);
  if (((1 < iVar2) && (*(int *)(param_2 + 1) == iVar2)) && (*(int *)(param_3 + 1) == iVar2)) {
    lVar3 = bn_wexpand(param_1,iVar2);
    if (lVar3 == 0) {
      return 0;
    }
    iVar1 = FUN_1400948c0(*param_1,*param_2,*param_3,*(undefined8 *)(param_4 + 0x20),param_4 + 0x50,
                          CONCAT44(uVar4,iVar2));
    if (iVar1 != 0) {
      *(uint *)(param_1 + 2) = *(uint *)(param_2 + 2) ^ *(uint *)(param_3 + 2);
      *(int *)(param_1 + 1) = iVar2;
      return 1;
    }
  }
  if (iVar2 * 2 < *(int *)(param_2 + 1) + *(int *)(param_3 + 1)) {
    return 0;
  }
  BN_CTX_start(param_5);
  lVar3 = BN_CTX_get(param_5);
  uVar4 = 0;
  if (lVar3 != 0) {
    if (param_2 == param_3) {
      iVar2 = bn_sqr_fixed_top(lVar3,param_2,param_5);
    }
    else {
      iVar2 = bn_mul_fixed_top(lVar3,param_2,param_3,param_5);
    }
    uVar4 = 0;
    if (iVar2 != 0) {
      iVar2 = bn_from_montgomery_word(param_1,lVar3,param_4);
      uVar4 = 0;
      if (iVar2 != 0) {
        uVar4 = 1;
      }
    }
  }
  BN_CTX_end(param_5);
  return uVar4;
}



// FUNCTION 143d50090 bn_to_mont_fixed_top body=38 status=ok
// SIG undefined bn_to_mont_fixed_top(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void bn_to_mont_fixed_top(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  bn_mul_mont_fixed_top(param_1,param_2,param_3 + 8,param_3,param_4);
  return;
}



// FUNCTION 143d500c0 BN_CTX_end body=113 status=ok
// SIG undefined BN_CTX_end(void)

void BN_CTX_end(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x34) != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
    return;
  }
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x20) + (ulonglong)*(uint *)(param_1 + 0x28) * 4);
  if (uVar1 < *(uint *)(param_1 + 0x30)) {
    iVar3 = *(uint *)(param_1 + 0x30) - uVar1;
    uVar2 = *(int *)(param_1 + 0x18) - 1U & 0xf;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - iVar3;
    while (iVar3 != 0) {
      iVar3 = iVar3 + -1;
      if (uVar2 == 0) {
        uVar2 = 0xf;
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x180);
      }
      else {
        uVar2 = uVar2 - 1;
      }
    }
  }
  *(uint *)(param_1 + 0x30) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 143d50140 BN_CTX_free body=190 status=ok
// SIG undefined BN_CTX_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_CTX_free(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_1 != (longlong *)0x0) {
    CRYPTO_free(param_1[4],"crypto\\bn\\bn_ctx.c",0xf7);
    param_1[4] = 0;
    plVar1 = (longlong *)*param_1;
    while (plVar1 != (longlong *)0x0) {
      lVar2 = 0x10;
      do {
        if (*plVar1 != 0) {
          BN_clear_free(plVar1);
        }
        plVar1 = plVar1 + 3;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
      param_1[1] = *(longlong *)(*param_1 + 0x188);
      CRYPTO_free(*param_1,"crypto\\bn\\bn_ctx.c",299);
      plVar1 = (longlong *)param_1[1];
      *param_1 = (longlong)plVar1;
    }
    CRYPTO_free(param_1,"crypto\\bn\\bn_ctx.c",0xb2);
  }
  return;
}



// FUNCTION 143d50200 BN_CTX_get body=440 status=ok
// SIG undefined BN_CTX_get(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong BN_CTX_get(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143d5020c;
  if ((*(int *)((longlong)param_1 + 0x34) != 0) || ((int)param_1[7] != 0)) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 3);
  uVar2 = *(uint *)((longlong)param_1 + 0x3c);
  if (uVar1 == *(uint *)((longlong)param_1 + 0x1c)) {
    lVar3 = CRYPTO_malloc(400,"crypto\\bn\\bn_ctx.c");
    if (lVar3 == 0) {
      ERR_put_error(3,0x93,0x41,"crypto\\bn\\bn_ctx.c",0x13b,uVar6);
      goto LAB_143d50357;
    }
    lVar4 = 0x10;
    lVar5 = lVar3;
    do {
      bn_init(lVar5);
      if ((uVar2 & 8) != 0) {
        BN_set_flags(lVar5,8);
      }
      lVar5 = lVar5 + 0x18;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    lVar5 = param_1[2];
    *(undefined8 *)(lVar3 + 0x188) = 0;
    *(longlong *)(lVar3 + 0x180) = lVar5;
    if (*param_1 == 0) {
      *param_1 = lVar3;
      param_1[2] = lVar3;
      param_1[1] = lVar3;
      *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 0x10;
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
    }
    else {
      *(longlong *)(param_1[2] + 0x188) = lVar3;
      param_1[2] = lVar3;
      param_1[1] = lVar3;
      *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 0x10;
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
    }
  }
  else {
    if (uVar1 == 0) {
      param_1[1] = *param_1;
    }
    else if ((uVar1 & 0xf) == 0) {
      param_1[1] = *(longlong *)(param_1[1] + 0x188);
    }
    lVar3 = param_1[1] + (ulonglong)(uVar1 & 0xf) * 0x18;
    *(uint *)(param_1 + 3) = uVar1 + 1;
  }
  if (lVar3 != 0) {
    BN_set_word(lVar3,0);
    *(int *)(param_1 + 6) = (int)param_1[6] + 1;
    return lVar3;
  }
LAB_143d50357:
  *(undefined4 *)(param_1 + 7) = 1;
  ERR_put_error(3,0x74,0x6d,"crypto\\bn\\bn_ctx.c",0xe1,uVar6);
  return 0;
}



// FUNCTION 143d503c0 BN_CTX_new body=104 status=ok
// SIG undefined BN_CTX_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * BN_CTX_new(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)CRYPTO_zalloc(0x40,"crypto\\bn\\bn_ctx.c",0x8a);
  if (puVar1 == (undefined8 *)0x0) {
    ERR_put_error(3,0x6a,0x41,"crypto\\bn\\bn_ctx.c",0x8b);
    return (undefined8 *)0x0;
  }
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  return puVar1;
}



// FUNCTION 143d50430 BN_CTX_secure_new body=113 status=ok
// SIG undefined BN_CTX_secure_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * BN_CTX_secure_new(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)CRYPTO_zalloc(0x40,"crypto\\bn\\bn_ctx.c",0x8a);
  if (puVar1 == (undefined8 *)0x0) {
    ERR_put_error(3,0x6a,0x41,"crypto\\bn\\bn_ctx.c",0x8b);
    return (undefined8 *)0x0;
  }
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined4 *)((longlong)puVar1 + 0x3c) = 8;
  return puVar1;
}



// FUNCTION 143d504b0 BN_CTX_start body=285 status=ok
// SIG undefined BN_CTX_start(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_CTX_start(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *_Dst;
  uint uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143d504bc;
  if ((*(int *)(param_1 + 0x34) != 0) || (*(int *)(param_1 + 0x38) != 0)) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    return;
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  uVar2 = *(undefined4 *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x28) == iVar1) {
    if (iVar1 == 0) {
      uVar3 = 0x20;
    }
    else {
      uVar3 = (uint)(iVar1 * 3) >> 1;
    }
    _Dst = (void *)CRYPTO_malloc((ulonglong)uVar3 << 2,"crypto\\bn\\bn_ctx.c",0x104);
    if (_Dst == (void *)0x0) {
      ERR_put_error(3,0x94,0x41,"crypto\\bn\\bn_ctx.c",0x105,uVar4);
      ERR_put_error(3,0x81,0x6d,"crypto\\bn\\bn_ctx.c",0xbd);
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
      return;
    }
    if (*(uint *)(param_1 + 0x28) != 0) {
      _guard_xfg_dispatch_icall_nop
                (_Dst,*(void **)(param_1 + 0x20),(ulonglong)*(uint *)(param_1 + 0x28) << 2);
    }
    CRYPTO_free(*(undefined8 *)(param_1 + 0x20),"crypto\\bn\\bn_ctx.c",0x10a);
    *(void **)(param_1 + 0x20) = _Dst;
    *(uint *)(param_1 + 0x2c) = uVar3;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (ulonglong)*(uint *)(param_1 + 0x28) * 4) = uVar2;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return;
}



// FUNCTION 143d505d0 BN_mod_exp body=243 status=ok
// SIG undefined BN_mod_exp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_mod_exp(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143d505ea;
  iVar1 = BN_is_odd(param_4);
  if (iVar1 == 0) {
    BN_mod_exp_recp(param_1,param_2,param_3,param_4,param_5,uVar2);
  }
  else {
    if ((((*(int *)(param_2 + 1) == 1) && (*(int *)(param_2 + 2) == 0)) &&
        (iVar1 = BN_get_flags(param_3,4), iVar1 == 0)) &&
       ((iVar1 = BN_get_flags(param_2,4), iVar1 == 0 &&
        (iVar1 = BN_get_flags(param_4,4), iVar1 == 0)))) {
      BN_mod_exp_mont_word(param_1,*(undefined8 *)*param_2,param_3,param_4,param_5,0);
      return;
    }
    BN_mod_exp_mont(param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



// FUNCTION 143d506d0 BN_mod_exp_mont body=1423 status=ok
// SIG undefined BN_mod_exp_mont(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong BN_mod_exp_mont(undefined8 param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                         undefined8 param_5,longlong param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  longlong lVar22;
  int iVar23;
  int iVar24;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  longlong local_1b0;
  uint local_1a8;
  ulonglong local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  longlong local_188;
  ulonglong local_180;
  longlong local_178;
  undefined8 local_170;
  undefined8 local_168;
  longlong alStack_160 [33];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x143d506e7;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  lVar14 = 0;
  uVar18 = 4;
  local_170 = param_5;
  local_188 = param_6;
  local_180 = 0;
  local_1a8 = 4;
  local_190 = param_3;
  local_168 = param_1;
  iVar9 = BN_get_flags(param_3,4);
  if (((iVar9 != 0) || (iVar9 = BN_get_flags(param_2,4), iVar9 != 0)) ||
     (iVar9 = BN_get_flags(param_4,4), iVar9 != 0)) {
    local_1b0 = param_6;
    local_1b8 = param_5;
    uVar11 = BN_mod_exp_mont_consttime(param_1,param_2,param_3,param_4);
    return uVar11;
  }
  iVar9 = BN_is_odd(param_4);
  if (iVar9 == 0) {
    local_1b8 = CONCAT44(local_1b8._4_4_,0x13e);
    ERR_put_error(3,0x6d,0x66,"crypto\\bn\\bn_exp.c");
    return 0;
  }
  iVar9 = BN_num_bits(param_3);
  if (iVar9 == 0) {
    iVar9 = BN_abs_is_word(param_4,1);
    if (iVar9 != 0) {
      BN_set_word(param_1,0);
      return 1;
    }
    uVar11 = BN_set_word(param_1,1);
    return uVar11;
  }
  BN_CTX_start(param_5);
  local_198 = BN_CTX_get(param_5);
  plVar12 = (longlong *)BN_CTX_get(param_5);
  lVar13 = BN_CTX_get(param_5);
  alStack_160[1] = lVar13;
  if (lVar13 == 0) goto LAB_143d50c02;
  lVar14 = local_188;
  if ((local_188 != 0) ||
     ((lVar14 = BN_MONT_CTX_new(), lVar14 != 0 &&
      (iVar10 = BN_MONT_CTX_set(lVar14,param_4,param_5), iVar10 != 0)))) {
    if ((((*(int *)(param_2 + 0x10) != 0) || (iVar10 = BN_ucmp(param_2,param_4), -1 < iVar10)) &&
        (iVar10 = BN_nnmod(lVar13,param_2,param_4,param_5), param_2 = lVar13, iVar10 == 0)) ||
       (iVar10 = bn_to_mont_fixed_top(lVar13,param_2,lVar14,param_5), iVar10 == 0))
    goto LAB_143d50c02;
    if (iVar9 < 0x2a0) {
      if (0xef < iVar9) {
        uVar18 = 5;
        local_1a8 = 5;
        uVar19 = local_1a8;
        goto LAB_143d508ec;
      }
      uVar19 = local_1a8;
      if (0x4f < iVar9) goto LAB_143d508ec;
      uVar18 = 3;
      uVar20 = 1;
      local_1a8 = uVar20;
      uVar19 = uVar18;
      if (0x17 < iVar9) goto LAB_143d508ec;
    }
    else {
      uVar18 = 6;
      local_1a8 = 6;
      uVar19 = local_1a8;
LAB_143d508ec:
      local_1a8 = uVar19;
      local_1b8 = param_5;
      iVar10 = bn_mul_mont_fixed_top(local_198,lVar13,lVar13,lVar14);
      if (iVar10 == 0) goto LAB_143d50c02;
      local_1a0 = (ulonglong)(1 << ((char)uVar18 - 1U & 0x1f));
      uVar20 = uVar18;
      if (1 < (longlong)local_1a0) {
        lVar13 = 1;
        do {
          lVar15 = BN_CTX_get(param_5);
          alStack_160[lVar13 + 1] = lVar15;
          if (lVar15 == 0) goto LAB_143d50c02;
          local_1b8 = param_5;
          iVar10 = bn_mul_mont_fixed_top(lVar15,alStack_160[lVar13],local_198,lVar14);
          if (iVar10 == 0) goto LAB_143d50c02;
          lVar13 = lVar13 + 1;
        } while (lVar13 < (longlong)local_1a0);
      }
    }
    iVar10 = (int)param_4[1];
    iVar9 = iVar9 + -1;
    local_1a0 = CONCAT44(local_1a0._4_4_,1);
    local_198 = CONCAT44(local_198._4_4_,iVar10);
    local_178 = (longlong)iVar10 * 8 + -8;
    if (*(longlong *)(local_178 + *param_4) < 0) {
      lVar13 = bn_wexpand(plVar12,iVar10);
      if (lVar13 != 0) {
        iVar23 = 1;
        iVar21 = 1;
        *(longlong *)*plVar12 = -*(longlong *)*param_4;
        iVar24 = iVar23;
        if ((1 < (int)local_198) && (iVar24 = iVar21, 7 < iVar10 - 1U)) {
          lVar13 = *plVar12;
          lVar15 = *param_4;
          plVar1 = (longlong *)(lVar13 + 8);
          plVar2 = (longlong *)(local_178 + lVar13);
          uVar20 = local_1a8;
          if (((((longlong *)(local_178 + lVar15) < plVar1) || (plVar2 < (longlong *)(lVar15 + 8U)))
              && ((plVar12 < plVar1 || (plVar2 < plVar12)))) &&
             ((param_4 < plVar1 || (plVar2 < param_4)))) {
            uVar18 = iVar10 - 1U & 0x80000007;
            if ((int)uVar18 < 0) {
              uVar18 = (uVar18 - 1 | 0xfffffff8) + 1;
            }
            lVar22 = 1;
            lVar16 = 0x28;
            do {
              puVar3 = (ulonglong *)(lVar15 + -0x20 + lVar16);
              uVar11 = puVar3[1];
              iVar23 = iVar23 + 8;
              lVar22 = lVar22 + 8;
              uVar5 = *(ulonglong *)(lVar15 + lVar16);
              uVar6 = ((ulonglong *)(lVar15 + lVar16))[1];
              lVar16 = lVar16 + 0x40;
              puVar4 = (ulonglong *)(lVar13 + -0x60 + lVar16);
              *puVar4 = ~*puVar3;
              puVar4[1] = ~uVar11;
              puVar3 = (ulonglong *)(lVar15 + -0x50 + lVar16);
              uVar11 = puVar3[1];
              puVar4 = (ulonglong *)(lVar13 + -0x50 + lVar16);
              *puVar4 = ~*puVar3;
              puVar4[1] = ~uVar11;
              puVar3 = (ulonglong *)(lVar15 + -0x30 + lVar16);
              uVar11 = *puVar3;
              uVar7 = puVar3[1];
              puVar3 = (ulonglong *)(lVar13 + -0x40 + lVar16);
              *puVar3 = ~uVar5;
              puVar3[1] = ~uVar6;
              puVar3 = (ulonglong *)(lVar13 + -0x30 + lVar16);
              *puVar3 = ~uVar11;
              puVar3[1] = ~uVar7;
              iVar24 = iVar23;
            } while (lVar22 < (int)((int)local_198 - uVar18));
          }
        }
        for (lVar13 = (longlong)iVar24; lVar13 < (int)local_198; lVar13 = lVar13 + 1) {
          *(ulonglong *)(*plVar12 + lVar13 * 8) = ~*(ulonglong *)(*param_4 + lVar13 * 8);
        }
        *(int *)(plVar12 + 1) = (int)local_198;
LAB_143d50add:
        bVar8 = true;
        do {
          while( true ) {
            iVar10 = BN_is_bit_set(local_190,iVar9);
            uVar17 = local_190;
            if (iVar10 != 0) break;
            if ((!bVar8) &&
               (local_1b8 = param_5, iVar10 = bn_mul_mont_fixed_top(plVar12,plVar12,plVar12,lVar14),
               iVar10 == 0)) goto LAB_143d50c02;
            if (iVar9 == 0) goto LAB_143d50be5;
            iVar9 = iVar9 + -1;
          }
          uVar19 = 1;
          iVar21 = 1;
          iVar24 = 0;
          iVar10 = iVar9;
          uVar18 = 1;
          if (1 < uVar20) {
            do {
              uVar19 = uVar18;
              iVar10 = iVar10 + -1;
              param_5 = local_170;
              if (iVar10 < 0) break;
              iVar23 = BN_is_bit_set(uVar17,iVar10);
              if (iVar23 != 0) {
                uVar19 = uVar19 << ((char)iVar21 - (char)iVar24 & 0x1fU) | 1;
                iVar24 = iVar21;
              }
              iVar21 = iVar21 + 1;
              param_5 = local_170;
              uVar18 = uVar19;
            } while (iVar21 < (int)local_1a8);
          }
          if (((int)local_1a0 == 0) && (iVar10 = 0, 0 < iVar24 + 1)) {
            do {
              local_1b8 = param_5;
              iVar21 = bn_mul_mont_fixed_top(plVar12,plVar12,plVar12,lVar14);
              if (iVar21 == 0) goto LAB_143d50c02;
              iVar10 = iVar10 + 1;
            } while (iVar10 < iVar24 + 1);
          }
          local_1b8 = param_5;
          iVar10 = bn_mul_mont_fixed_top
                             (plVar12,plVar12,alStack_160[((longlong)(int)uVar19 >> 1) + 1],lVar14);
          if (iVar10 == 0) goto LAB_143d50c02;
          iVar24 = iVar9 - iVar24;
          bVar8 = false;
          iVar9 = iVar24 + -1;
          local_1a0 = local_1a0 & 0xffffffff00000000;
          uVar20 = local_1a8;
        } while (0 < iVar24);
LAB_143d50be5:
        iVar9 = BN_from_montgomery(local_168,plVar12,lVar14,param_5);
        local_180 = (ulonglong)(iVar9 != 0);
      }
    }
    else {
      uVar17 = BN_value_one();
      iVar10 = bn_to_mont_fixed_top(plVar12,uVar17,lVar14,param_5);
      if (iVar10 != 0) goto LAB_143d50add;
    }
LAB_143d50c02:
    if (local_188 != 0) goto LAB_143d50c12;
  }
  BN_MONT_CTX_free(lVar14);
LAB_143d50c12:
  BN_CTX_end(param_5);
  return local_180 & 0xffffffff;
}



// FUNCTION 143d50c60 BN_mod_exp_mont_consttime body=3441 status=ok
// SIG undefined BN_mod_exp_mont_consttime(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong BN_mod_exp_mont_consttime
                    (undefined8 *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
                    undefined8 param_5,longlong param_6)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  byte bVar12;
  int iVar13;
  uint uVar14;
  ulonglong *puVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  int iVar21;
  longlong *plVar22;
  longlong *plVar23;
  size_t _Size;
  int iVar24;
  ulonglong uVar25;
  uint uVar26;
  ulonglong uVar27;
  longlong *_Dst;
  uint uVar28;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  longlong *local_c8;
  uint local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  int local_b0;
  ulonglong local_a8;
  uint local_a0;
  longlong *local_98;
  longlong local_90;
  longlong *local_88;
  int local_80;
  uint uStack_7c;
  undefined8 *local_78;
  longlong *local_70;
  uint local_68;
  uint uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 *local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x143d50c74;
  puVar19 = auStack_108;
  puVar20 = auStack_108;
  local_38 = DAT_1468387a8 ^ (ulonglong)&local_c8;
  local_a0 = 0;
  local_80 = 0;
  uVar9 = 0;
  _Dst = (longlong *)0x0;
  local_98 = param_3;
  local_88 = param_4;
  local_78 = param_2;
  local_58 = param_1;
  iVar7 = BN_is_odd(param_4);
  if (iVar7 == 0) {
    local_e8 = CONCAT44(local_e8._4_4_,0x266);
    ERR_put_error(3,0x7c,0x66,"crypto\\bn\\bn_exp.c");
    uVar9 = 0;
    puVar20 = auStack_108;
    goto LAB_143d5199f;
  }
  uVar3 = *(uint *)(param_4 + 1);
  lVar18 = (longlong)(int)uVar3;
  uVar28 = *(uint *)(param_3 + 1) * 0x40;
  uStack_7c = uVar28;
  if ((*(uint *)(param_3 + 1) & 0x3ffffff) == 0) {
    iVar7 = BN_abs_is_word(param_4,1);
    if (iVar7 == 0) {
      uVar9 = BN_set_word(param_1,1);
    }
    else {
      BN_set_word(param_1,0);
      uVar9 = 1;
      puVar20 = auStack_108;
    }
    goto LAB_143d5199f;
  }
  BN_CTX_start(param_5);
  if (param_6 == 0) {
    lVar17 = BN_MONT_CTX_new();
    puVar20 = auStack_108;
    local_90 = lVar17;
    if ((lVar17 != 0) &&
       (iVar7 = BN_MONT_CTX_set(lVar17,param_4,param_5), puVar20 = auStack_108, iVar7 != 0))
    goto LAB_143d50d92;
LAB_143d51966:
    *(undefined8 *)(puVar20 + -8) = 0x143d5196e;
    BN_MONT_CTX_free(lVar17);
  }
  else {
    local_90 = param_6;
    lVar17 = param_6;
LAB_143d50d92:
    if (*(int *)(local_78 + 2) == 0) {
      if ((((*(int *)(local_78 + 1) == 0x10) && ((int)local_98[1] == 0x10)) &&
          (iVar7 = BN_num_bits(param_4), iVar7 == 0x400)) &&
         (iVar7 = FUN_140097900(), puVar5 = local_58, iVar7 != 0)) {
        lVar18 = bn_wexpand(local_58,0x10);
        puVar19 = auStack_108;
        if (lVar18 != 0) {
          local_e0 = *(undefined8 *)(lVar17 + 0x50);
          local_e8 = *(undefined8 *)(lVar17 + 8);
          RSAZ_1024_mod_exp_avx2(*puVar5,*local_78,*local_98,*param_4);
          *(undefined4 *)(puVar5 + 1) = 0x10;
          *(undefined4 *)(puVar5 + 2) = 0;
          bn_correct_top(puVar5);
          local_a0 = 1;
          puVar19 = auStack_108;
        }
      }
      else {
        if (((*(int *)(local_78 + 1) != 8) || ((int)local_98[1] != 8)) ||
           (iVar7 = BN_num_bits(param_4), puVar5 = local_58, iVar7 != 0x200)) goto LAB_143d50ebf;
        lVar18 = bn_wexpand(local_58,8);
        puVar19 = auStack_108;
        _Dst = (longlong *)0x0;
        if (lVar18 != 0) {
          local_e0 = *(undefined8 *)(lVar17 + 8);
          local_e8 = *(undefined8 *)(lVar17 + 0x50);
          RSAZ_512_mod_exp(*puVar5,*local_78,*local_98,*param_4);
          *(undefined4 *)(puVar5 + 1) = 8;
          *(undefined4 *)(puVar5 + 2) = 0;
          bn_correct_top(puVar5);
          local_a0 = 1;
          puVar19 = auStack_108;
          uVar9 = 0;
        }
      }
    }
    else {
LAB_143d50ebf:
      iVar7 = 3;
      uVar26 = 5;
      if ((int)uVar28 < 0x3aa) {
        uVar14 = uVar26;
        if ((int)uVar28 < 0x133) {
          if ((int)uVar28 < 0x5a) {
            uVar26 = 1;
            uVar14 = 1;
            if (0x16 < (int)uVar28) {
              uVar26 = 3;
              uVar14 = uVar26;
            }
          }
          else {
            uVar26 = 4;
            uVar14 = 4;
          }
        }
      }
      else {
        uVar14 = 6;
      }
      local_b0 = 1 << (sbyte)uVar26;
      iVar13 = uVar3 * 2;
      if ((int)(uVar3 * 2) <= local_b0) {
        iVar13 = local_b0;
      }
      iVar13 = iVar13 + local_b0 * uVar3;
      local_80 = iVar13 + uVar3;
      if (uVar14 < 5) {
        local_80 = iVar13;
      }
      local_80 = local_80 * 8;
      uVar9 = (ulonglong)(local_80 + 0x40);
      if (local_80 < 0xc00) {
        uVar10 = uVar9 + 0xf;
        if (uVar10 <= uVar9) {
          uVar10 = 0xffffffffffffff0;
        }
        uVar9 = (longlong)&local_c8 + -(uVar10 & 0xfffffffffffffff0);
        puVar20 = auStack_108 + -(uVar10 & 0xfffffffffffffff0);
      }
      else {
        uVar9 = CRYPTO_malloc(uVar9,"crypto\\bn\\bn_exp.c",0x2cc);
        puVar20 = auStack_108;
        if (uVar9 == 0) goto LAB_143d5195c;
      }
      puVar19 = puVar20;
      _Size = (size_t)local_80;
      uVar10 = uVar9 & 0xffffffffffffffc0;
      _Dst = (longlong *)(uVar10 + 0x40);
      *(undefined8 *)(puVar19 + -8) = 0x143d50f9c;
      _guard_xfg_dispatch_icall_nop(_Dst,0,_Size);
      local_68 = 0;
      local_a8 = 0;
      if (0xbff < local_80) {
        local_a8 = uVar9;
      }
      local_c0 = 0;
      local_60 = 0;
      local_b8 = 0;
      local_50 = lVar18 * 8 + -8;
      local_c8 = _Dst + local_b0 * lVar18;
      local_5c = 2;
      local_b4 = 2;
      local_70 = _Dst + local_b0 * lVar18 + lVar18;
      local_bc = uVar3;
      uStack_64 = uVar3;
      if (((longlong *)*local_88)[lVar18 + -1] < 0) {
        *local_c8 = -*(longlong *)*local_88;
        uVar25 = 1;
        uVar9 = uVar25;
        if ((1 < (int)uVar3) && (7 < uVar3 - 1)) {
          lVar16 = *local_88;
          if ((((longlong *)(local_50 + lVar16) < local_c8 + 1) ||
              (local_c8 + lVar18 + -1 < (longlong *)(lVar16 + 8U))) &&
             ((local_88 < local_c8 + 1 || (uVar9 = 1, local_c8 + lVar18 + -1 < local_88)))) {
            uVar28 = uVar3 - 1 & 0x80000007;
            if ((int)uVar28 < 0) {
              uVar28 = (uVar28 - 1 | 0xfffffff8) + 1;
            }
            local_48 = (longlong)(int)(uVar3 - uVar28);
            local_50 = -(longlong)local_c8;
            local_40 = -0x20 - (longlong)local_c8;
            puVar15 = (ulonglong *)(local_c8 + 5);
            uVar27 = uVar25;
            do {
              uVar25 = (ulonglong)((int)uVar25 + 8);
              puVar2 = (ulonglong *)(lVar16 + local_40 + (longlong)puVar15);
              uVar9 = puVar2[1];
              uVar27 = uVar27 + 8;
              puVar1 = puVar15 + 8;
              puVar15[-4] = ~*puVar2;
              puVar15[-3] = ~uVar9;
              puVar2 = (ulonglong *)((lVar16 - (longlong)local_c8) + -0x50 + (longlong)puVar1);
              uVar9 = puVar2[1];
              puVar15[-2] = ~*puVar2;
              puVar15[-1] = ~uVar9;
              puVar2 = (ulonglong *)(lVar16 + local_50 + -0x40 + (longlong)puVar1);
              uVar9 = puVar2[1];
              *puVar15 = ~*puVar2;
              puVar15[1] = ~uVar9;
              puVar2 = (ulonglong *)((lVar16 - (longlong)local_c8) + -0x30 + (longlong)puVar1);
              uVar9 = puVar2[1];
              puVar15[2] = ~*puVar2;
              puVar15[3] = ~uVar9;
              puVar15 = puVar1;
              lVar17 = local_90;
              uVar9 = uVar25;
              uVar28 = uStack_7c;
            } while ((longlong)uVar27 < local_48);
          }
        }
        for (lVar16 = (longlong)(int)uVar9; local_c0 = uVar3, lVar16 < lVar18; lVar16 = lVar16 + 1)
        {
          local_c8[lVar16] = ~*(ulonglong *)(*local_88 + lVar16 * 8);
        }
      }
      else {
        *(undefined8 *)(puVar19 + -8) = 0x143d51174;
        uVar11 = BN_value_one();
        *(undefined8 *)(puVar19 + -8) = 0x143d5118a;
        iVar13 = bn_to_mont_fixed_top(&local_c8,uVar11,lVar17,param_5);
        uVar9 = local_a8;
        if (iVar13 == 0) goto LAB_143d5195c;
      }
      puVar5 = local_78;
      plVar23 = local_88;
      if (*(int *)(local_78 + 2) == 0) {
        *(undefined8 *)(puVar19 + -8) = 0x143d511ab;
        iVar13 = BN_ucmp(puVar5,plVar23);
        puVar5 = local_78;
        if (-1 < iVar13) goto LAB_143d511d3;
        *(undefined8 *)(puVar19 + -8) = 0x143d511c6;
        iVar13 = bn_to_mont_fixed_top(&local_70,puVar5,lVar17,param_5);
        uVar9 = local_a8;
        if (iVar13 == 0) goto LAB_143d5195c;
LAB_143d51211:
        lVar16 = local_90;
        plVar23 = local_c8;
        if ((uVar26 == 5) && (1 < (int)uVar3)) {
          lVar17 = lVar17 + 0x50;
          if ((int)local_68 < (int)uVar3) {
            plVar22 = local_70 + (int)local_68;
            for (lVar16 = (longlong)(int)(uVar3 - local_68); lVar16 != 0; lVar16 = lVar16 + -1) {
              *plVar22 = 0;
              plVar22 = plVar22 + 1;
            }
          }
          if ((int)local_c0 < (int)uVar3) {
            plVar22 = local_c8 + (int)local_c0;
            for (lVar16 = (longlong)(int)(uVar3 - local_c0); lVar16 != 0; lVar16 = lVar16 + -1) {
              *plVar22 = 0;
              plVar22 = plVar22 + 1;
            }
          }
          plVar22 = local_70 + lVar18;
          if (0 < lVar18) {
            lVar16 = 0;
            do {
              plVar22[lVar16] = *(longlong *)(*(longlong *)(local_90 + 0x20) + lVar16 * 8);
              lVar16 = lVar16 + 1;
            } while (lVar16 < lVar18);
          }
          *(undefined8 *)(puVar19 + -8) = 0x143d512a6;
          bn_scatter5(plVar23,lVar18,_Dst,0);
          plVar23 = local_70;
          lVar16 = (longlong)(int)local_68;
          *(undefined8 *)(puVar19 + -8) = 0x143d512bc;
          bn_scatter5(plVar23,lVar16,_Dst,1);
          plVar4 = local_70;
          plVar23 = local_c8;
          *(uint *)(puVar19 + 0x28) = uVar3;
          *(longlong *)(puVar19 + 0x20) = lVar17;
          *(undefined8 *)(puVar19 + -8) = 0x143d512d8;
          FUN_1400948c0(plVar23,plVar4,plVar4,plVar22);
          plVar23 = local_c8;
          *(undefined8 *)(puVar19 + -8) = 0x143d512ed;
          bn_scatter5(plVar23,lVar18,_Dst,2);
          iVar13 = 4;
          do {
            plVar23 = local_c8;
            *(uint *)(puVar19 + 0x28) = uVar3;
            *(longlong *)(puVar19 + 0x20) = lVar17;
            *(undefined8 *)(puVar19 + -8) = 0x143d5130d;
            FUN_1400948c0(plVar23,plVar23,plVar23,plVar22);
            plVar23 = local_c8;
            *(undefined8 *)(puVar19 + -8) = 0x143d5131f;
            bn_scatter5(plVar23,lVar18,_Dst,(longlong)iVar13);
            iVar13 = iVar13 * 2;
          } while (iVar13 < 0x20);
          local_88 = (longlong *)0x3;
          do {
            plVar6 = local_70;
            plVar4 = local_88;
            plVar23 = local_c8;
            *(int *)(puVar19 + 0x30) = iVar7 + -1;
            *(uint *)(puVar19 + 0x28) = uVar3;
            *(longlong *)(puVar19 + 0x20) = lVar17;
            *(undefined8 *)(puVar19 + -8) = 0x143d51353;
            FUN_140097b40(plVar23,plVar6,_Dst,plVar22);
            plVar23 = local_c8;
            *(undefined8 *)(puVar19 + -8) = 0x143d51365;
            bn_scatter5(plVar23,lVar18,_Dst,plVar4);
            iVar13 = iVar7 * 2;
            if (iVar7 < 0x10) {
              do {
                plVar23 = local_c8;
                *(uint *)(puVar19 + 0x28) = uVar3;
                *(longlong *)(puVar19 + 0x20) = lVar17;
                *(undefined8 *)(puVar19 + -8) = 0x143d5138b;
                FUN_1400948c0(plVar23,plVar23,plVar23,plVar22);
                plVar23 = local_c8;
                *(undefined8 *)(puVar19 + -8) = 0x143d5139d;
                bn_scatter5(plVar23,lVar18,_Dst,(longlong)iVar13);
                iVar13 = iVar13 * 2;
              } while (iVar13 < 0x20);
            }
            iVar7 = iVar7 + 2;
            local_88 = (longlong *)((longlong)local_88 + 2);
          } while (iVar7 < 8);
          if (iVar7 < 0x10) {
            lVar16 = (longlong)iVar7;
            local_88 = (longlong *)(longlong)(iVar7 * 2);
            do {
              plVar4 = local_70;
              plVar23 = local_c8;
              *(int *)(puVar19 + 0x30) = iVar7 + -1;
              *(uint *)(puVar19 + 0x28) = uVar3;
              *(longlong *)(puVar19 + 0x20) = lVar17;
              *(undefined8 *)(puVar19 + -8) = 0x143d513f4;
              FUN_140097b40(plVar23,plVar4,_Dst,plVar22);
              plVar23 = local_c8;
              *(undefined8 *)(puVar19 + -8) = 0x143d51406;
              bn_scatter5(plVar23,lVar18,_Dst,lVar16);
              plVar23 = local_c8;
              *(uint *)(puVar19 + 0x28) = uVar3;
              *(longlong *)(puVar19 + 0x20) = lVar17;
              *(undefined8 *)(puVar19 + -8) = 0x143d51421;
              FUN_1400948c0(plVar23,plVar23,plVar23,plVar22);
              plVar4 = local_88;
              plVar23 = local_c8;
              *(undefined8 *)(puVar19 + -8) = 0x143d51434;
              bn_scatter5(plVar23,lVar18,_Dst,plVar4);
              local_88 = (longlong *)((longlong)local_88 + 4);
              iVar7 = iVar7 + 2;
              lVar16 = lVar16 + 2;
            } while (iVar7 < 0x10);
          }
          if (iVar7 < 0x20) {
            lVar16 = (longlong)iVar7;
            iVar7 = iVar7 + -1;
            do {
              plVar4 = local_70;
              plVar23 = local_c8;
              *(int *)(puVar19 + 0x30) = iVar7;
              *(uint *)(puVar19 + 0x28) = uVar3;
              *(longlong *)(puVar19 + 0x20) = lVar17;
              *(undefined8 *)(puVar19 + -8) = 0x143d51480;
              FUN_140097b40(plVar23,plVar4,_Dst,plVar22);
              plVar23 = local_c8;
              *(undefined8 *)(puVar19 + -8) = 0x143d51492;
              bn_scatter5(plVar23,lVar18,_Dst,lVar16);
              iVar7 = iVar7 + 2;
              lVar16 = lVar16 + 2;
            } while (iVar7 < 0x1f);
          }
          plVar4 = local_98;
          plVar23 = local_c8;
          iVar13 = (int)(uStack_7c - 1) % 5 + 1;
          iVar21 = uStack_7c - iVar13;
          uVar26 = iVar21 >> 0x1f & 0x3f;
          uVar28 = iVar21 + uVar26;
          iVar7 = (uVar28 & 0x3f) - uVar26;
          iVar24 = (int)uVar28 >> 6;
          uVar28 = 0;
          if ((-1 < iVar24) && (uVar28 = 0, iVar24 < (int)local_98[1])) {
            uVar9 = *(ulonglong *)(*local_98 + (longlong)iVar24 * 8);
            if (iVar7 != 0) {
              bVar12 = (byte)iVar7;
              uVar9 = uVar9 >> (bVar12 & 0x3f);
              if (iVar24 + 1 < (int)local_98[1]) {
                uVar9 = uVar9 | *(longlong *)(*local_98 + 8 + (longlong)iVar24 * 8) <<
                                (0x40 - bVar12 & 0x3f);
              }
            }
            uVar28 = (uint)uVar9;
          }
          *(undefined8 *)(puVar19 + -8) = 0x143d5153f;
          bn_gather5(plVar23,lVar18,_Dst,(longlong)(int)(uVar28 & (1 << ((byte)iVar13 & 0x1f)) - 1U)
                    );
          if (0 < iVar21) {
            if ((uVar3 & 7) == 0) {
              do {
                lVar18 = *plVar4;
                iVar21 = iVar21 + -5;
                *(undefined8 *)(puVar19 + -8) = 0x143d5162d;
                uVar8 = FUN_14009ac30(lVar18,iVar21);
                plVar23 = local_c8;
                *(undefined4 *)(puVar19 + 0x30) = uVar8;
                *(uint *)(puVar19 + 0x28) = uVar3;
                *(longlong *)(puVar19 + 0x20) = lVar17;
                *(undefined8 *)(puVar19 + -8) = 0x143d5164c;
                FUN_140098ac0(plVar23,plVar23,_Dst,plVar22);
              } while (0 < iVar21);
            }
            else {
              do {
                plVar23 = local_c8;
                *(uint *)(puVar19 + 0x28) = uVar3;
                *(longlong *)(puVar19 + 0x20) = lVar17;
                *(undefined8 *)(puVar19 + -8) = 0x143d5157b;
                FUN_1400948c0(plVar23,plVar23,plVar23,plVar22);
                plVar23 = local_c8;
                *(uint *)(puVar19 + 0x28) = uVar3;
                *(longlong *)(puVar19 + 0x20) = lVar17;
                *(undefined8 *)(puVar19 + -8) = 0x143d51596;
                FUN_1400948c0(plVar23,plVar23,plVar23,plVar22);
                plVar23 = local_c8;
                *(uint *)(puVar19 + 0x28) = uVar3;
                *(longlong *)(puVar19 + 0x20) = lVar17;
                *(undefined8 *)(puVar19 + -8) = 0x143d515b1;
                FUN_1400948c0(plVar23,plVar23,plVar23,plVar22);
                plVar23 = local_c8;
                *(uint *)(puVar19 + 0x28) = uVar3;
                *(longlong *)(puVar19 + 0x20) = lVar17;
                *(undefined8 *)(puVar19 + -8) = 0x143d515cc;
                FUN_1400948c0(plVar23,plVar23,plVar23,plVar22);
                plVar23 = local_c8;
                *(uint *)(puVar19 + 0x28) = uVar3;
                *(longlong *)(puVar19 + 0x20) = lVar17;
                *(undefined8 *)(puVar19 + -8) = 0x143d515e7;
                FUN_1400948c0(plVar23,plVar23,plVar23,plVar22);
                lVar18 = *plVar4;
                iVar21 = iVar21 + -5;
                *(undefined8 *)(puVar19 + -8) = 0x143d515f4;
                uVar8 = FUN_14009ac30(lVar18,iVar21);
                plVar23 = local_c8;
                *(undefined4 *)(puVar19 + 0x30) = uVar8;
                *(uint *)(puVar19 + 0x28) = uVar3;
                *(longlong *)(puVar19 + 0x20) = lVar17;
                *(undefined8 *)(puVar19 + -8) = 0x143d51613;
                FUN_140097b40(plVar23,plVar23,_Dst,plVar22);
              } while (0 < iVar21);
            }
          }
          plVar23 = local_c8;
          *(uint *)(puVar19 + 0x28) = uVar3;
          *(longlong *)(puVar19 + 0x20) = lVar17;
          *(undefined8 *)(puVar19 + -8) = 0x143d5166b;
          uVar28 = FUN_1400995a0(plVar23,plVar23,0,plVar22);
          local_c0 = uVar3;
          local_a0 = uVar28;
          *(undefined8 *)(puVar19 + -8) = 0x143d5167d;
          bn_correct_top(&local_c8);
          puVar5 = local_58;
          if (uVar28 == 0) {
LAB_143d51919:
            puVar5 = local_58;
            lVar17 = local_90;
            uVar9 = local_a8;
            *(undefined8 *)(puVar19 + -8) = 0x143d51937;
            iVar7 = BN_from_montgomery(puVar5,&local_c8,lVar17,param_5);
            if (iVar7 != 0) {
              local_a0 = 1;
            }
          }
          else {
            *(undefined8 *)(puVar19 + -8) = 0x143d51693;
            lVar18 = BN_copy(puVar5,&local_c8);
            lVar17 = local_90;
            uVar9 = local_a8;
            local_a0 = uVar28;
            if (lVar18 == 0) {
              local_a0 = 0;
            }
          }
        }
        else {
          uVar14 = uVar3;
          if ((int)local_c0 < (int)uVar3) {
            uVar14 = local_c0;
          }
          lVar18 = 0;
          if (0 < (int)uVar14) {
            lVar17 = lVar18;
            plVar23 = _Dst;
            do {
              plVar22 = local_c8 + lVar17;
              lVar17 = lVar17 + 1;
              *plVar23 = *plVar22;
              plVar23 = plVar23 + local_b0;
            } while (lVar17 < (int)uVar14);
          }
          uVar14 = uVar3;
          if ((int)local_68 < (int)uVar3) {
            uVar14 = local_68;
          }
          if (0 < (int)uVar14) {
            plVar23 = (longlong *)(uVar10 + 0x48);
            do {
              plVar22 = local_70 + lVar18;
              lVar18 = lVar18 + 1;
              *plVar23 = *plVar22;
              plVar23 = plVar23 + local_b0;
            } while (lVar18 < (int)uVar14);
          }
          if (1 < uVar26) {
            *(undefined8 *)(puVar19 + 0x20) = param_5;
            *(undefined8 *)(puVar19 + -8) = 0x143d51754;
            iVar13 = bn_mul_mont_fixed_top(&local_c8,&local_70,&local_70,lVar16);
            lVar17 = lVar16;
            uVar9 = local_a8;
            if (iVar13 == 0) goto LAB_143d5195c;
            uVar14 = uVar3;
            if ((int)local_c0 < (int)uVar3) {
              uVar14 = local_c0;
            }
            if (0 < (int)uVar14) {
              plVar23 = (longlong *)(uVar10 + 0x50);
              lVar18 = 0;
              do {
                plVar22 = local_c8 + lVar18;
                lVar18 = lVar18 + 1;
                *plVar23 = *plVar22;
                plVar23 = plVar23 + local_b0;
              } while (lVar18 < (int)uVar14);
            }
            if (3 < local_b0) {
              do {
                *(undefined8 *)(puVar19 + 0x20) = param_5;
                *(undefined8 *)(puVar19 + -8) = 0x143d517b9;
                iVar13 = bn_mul_mont_fixed_top(&local_c8,&local_70,&local_c8,lVar16);
                lVar17 = local_90;
                uVar9 = local_a8;
                if (iVar13 == 0) goto LAB_143d5195c;
                uVar14 = uVar3;
                if ((int)local_c0 < (int)uVar3) {
                  uVar14 = local_c0;
                }
                lVar18 = 0;
                if (0 < (int)uVar14) {
                  plVar23 = _Dst + iVar7;
                  do {
                    plVar22 = local_c8 + lVar18;
                    lVar18 = lVar18 + 1;
                    *plVar23 = *plVar22;
                    plVar23 = plVar23 + local_b0;
                  } while (lVar18 < (int)uVar14);
                }
                iVar7 = iVar7 + 1;
              } while (iVar7 < local_b0);
            }
          }
          plVar23 = local_98;
          iVar13 = (int)(uVar28 - 1) % (int)uVar26 + 1;
          iVar7 = uVar28 - iVar13;
          *(undefined8 *)(puVar19 + -8) = 0x143d5182e;
          uVar28 = bn_get_bits(plVar23,iVar7);
          *(uint *)(puVar19 + 0x20) = uVar26;
          *(undefined8 *)(puVar19 + -8) = 0x143d51852;
          iVar13 = MOD_EXP_CTIME_COPY_FROM_PREBUF
                             (&local_c8,uVar3,_Dst,(1 << ((byte)iVar13 & 0x1f)) - 1U & uVar28);
          lVar17 = local_90;
          uVar9 = local_a8;
          if (iVar13 != 0) {
            uStack_7c = local_b0 - 1;
            do {
              if (iVar7 < 1) goto LAB_143d51919;
              iVar13 = 0;
              do {
                *(undefined8 *)(puVar19 + 0x20) = param_5;
                *(undefined8 *)(puVar19 + -8) = 0x143d518a9;
                iVar21 = bn_mul_mont_fixed_top(&local_c8,&local_c8,&local_c8,lVar16);
                plVar23 = local_98;
                lVar17 = local_90;
                uVar9 = local_a8;
                if (iVar21 == 0) goto LAB_143d5195c;
                iVar13 = iVar13 + 1;
              } while (iVar13 < (int)uVar26);
              iVar7 = iVar7 - uVar26;
              *(undefined8 *)(puVar19 + -8) = 0x143d518c3;
              uVar28 = bn_get_bits(plVar23,iVar7);
              uVar28 = uVar28 & uStack_7c;
              *(uint *)(puVar19 + 0x20) = uVar26;
              *(undefined8 *)(puVar19 + -8) = 0x143d518dc;
              iVar13 = MOD_EXP_CTIME_COPY_FROM_PREBUF(&local_70,uVar3,_Dst,uVar28);
              lVar17 = local_90;
              uVar9 = local_a8;
              if (iVar13 == 0) break;
              *(undefined8 *)(puVar19 + 0x20) = param_5;
              *(undefined8 *)(puVar19 + -8) = 0x143d518f9;
              iVar13 = bn_mul_mont_fixed_top(&local_c8,&local_c8,&local_70,lVar16);
              lVar17 = local_90;
              uVar9 = local_a8;
            } while (iVar13 != 0);
          }
        }
      }
      else {
LAB_143d511d3:
        puVar5 = local_78;
        plVar23 = local_88;
        *(undefined8 *)(puVar19 + -8) = 0x143d511ea;
        iVar13 = BN_nnmod(&local_70,puVar5,plVar23,param_5);
        uVar9 = local_a8;
        if (iVar13 != 0) {
          *(undefined8 *)(puVar19 + -8) = 0x143d51209;
          iVar13 = bn_to_mont_fixed_top(&local_70,&local_70,lVar17,param_5);
          uVar9 = local_a8;
          if (iVar13 != 0) goto LAB_143d51211;
        }
      }
    }
LAB_143d5195c:
    puVar20 = puVar19;
    if (param_6 == 0) goto LAB_143d51966;
  }
  if (_Dst != (longlong *)0x0) {
    lVar18 = (longlong)local_80;
    *(undefined8 *)(puVar20 + -8) = 0x143d5197f;
    FUN_14004ff40(_Dst,lVar18);
    *(undefined8 *)(puVar20 + -8) = 0x143d51994;
    CRYPTO_free(uVar9,"crypto\\bn\\bn_exp.c",0x461);
  }
  *(undefined8 *)(puVar20 + -8) = 0x143d5199c;
  BN_CTX_end(param_5);
  uVar9 = (ulonglong)local_a0;
LAB_143d5199f:
  *(undefined8 *)(puVar20 + -8) = 0x143d519ae;
  return uVar9;
}



// FUNCTION 143d519e0 BN_mod_exp_mont_word body=1012 status=ok
// SIG undefined BN_mod_exp_mont_word(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
BN_mod_exp_mont_word
          (undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 *param_4,
          undefined8 param_5,longlong param_6)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar11;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  uVar3 = 0;
  lVar7 = 0;
  iVar2 = BN_get_flags(param_3,4);
  if ((iVar2 != 0) || (iVar2 = BN_get_flags(param_4), iVar2 != 0)) {
    ERR_put_error(3,0x75,0x42,"crypto\\bn\\bn_exp.c",CONCAT44(uVar11,0x484));
    return 0;
  }
  iVar2 = BN_is_odd(param_4);
  if (iVar2 == 0) {
    ERR_put_error(3,0x75,0x66,"crypto\\bn\\bn_exp.c",CONCAT44(uVar11,0x48c));
    return 0;
  }
  if (*(int *)(param_4 + 1) == 1) {
    param_2 = param_2 % *(ulonglong *)*param_4;
  }
  iVar2 = BN_num_bits(param_3);
  if (iVar2 == 0) {
    iVar2 = BN_abs_is_word(param_4,1);
    if (iVar2 != 0) {
      BN_set_word(param_1,0);
      return 1;
    }
    uVar3 = BN_set_word(param_1,1);
    return uVar3;
  }
  if (param_2 == 0) {
    BN_set_word(param_1,0);
    return 1;
  }
  BN_CTX_start(param_5);
  lVar5 = BN_CTX_get(param_5);
  lVar6 = BN_CTX_get(param_5);
  if (lVar6 == 0) {
LAB_143d51d7e:
    if (param_6 != 0) goto LAB_143d51d91;
  }
  else {
    lVar7 = param_6;
    if ((param_6 != 0) ||
       ((lVar7 = BN_MONT_CTX_new(), lVar7 != 0 &&
        (iVar4 = BN_MONT_CTX_set(lVar7,param_4,param_5), uVar3 = 0, iVar4 != 0)))) {
      bVar1 = true;
      uVar10 = param_2;
      for (iVar2 = iVar2 + -2; -1 < iVar2; iVar2 = iVar2 + -1) {
        uVar9 = uVar10 * uVar10;
        lVar8 = lVar5;
        if (uVar9 / uVar10 != uVar10) {
          if (bVar1) {
            iVar4 = BN_set_word();
            if ((iVar4 == 0) || (iVar4 = BN_to_montgomery(lVar5,lVar5,lVar7,param_5), iVar4 == 0))
            goto LAB_143d51d7c;
            bVar1 = false;
            lVar5 = lVar6;
          }
          else {
            iVar4 = BN_mul_word(lVar5,uVar10);
            if ((iVar4 == 0) ||
               (iVar4 = BN_div(0,lVar6,lVar5,param_4,param_5), lVar8 = lVar6, iVar4 == 0))
            goto LAB_143d51d7c;
          }
          uVar9 = 1;
          lVar6 = lVar5;
        }
        if ((!bVar1) && (iVar4 = BN_mod_mul_montgomery(lVar8,lVar8,lVar8,lVar7,param_5), iVar4 == 0)
           ) goto LAB_143d51d7c;
        iVar4 = BN_is_bit_set(param_3);
        lVar5 = lVar8;
        uVar10 = uVar9;
        if ((iVar4 != 0) && (uVar10 = uVar9 * param_2, (uVar9 * param_2) / param_2 != uVar9)) {
          if (bVar1) {
            iVar4 = BN_set_word();
            if ((iVar4 == 0) || (iVar4 = BN_to_montgomery(lVar8,lVar8,lVar7,param_5), iVar4 == 0))
            goto LAB_143d51d7c;
            bVar1 = false;
            uVar10 = param_2;
          }
          else {
            iVar4 = BN_mul_word(lVar8,uVar9);
            if ((iVar4 == 0) ||
               (iVar4 = BN_div(0,lVar6,lVar8,param_4,param_5), lVar5 = lVar6, uVar10 = param_2,
               lVar6 = lVar8, iVar4 == 0)) goto LAB_143d51d7c;
          }
        }
      }
      if (uVar10 == 1) {
        if (bVar1) {
          iVar2 = BN_set_word(param_1,1);
        }
        else {
LAB_143d51d1b:
          iVar2 = BN_from_montgomery(param_1,lVar5,lVar7,param_5);
        }
        if (iVar2 != 0) {
          uVar3 = 1;
          goto LAB_143d51d7e;
        }
      }
      else if (bVar1) {
        iVar2 = BN_set_word();
        if (iVar2 != 0) {
          iVar2 = BN_to_montgomery(lVar5,lVar5,lVar7,param_5);
joined_r0x000143d51d5f:
          if (iVar2 != 0) goto LAB_143d51d1b;
        }
      }
      else {
        iVar2 = BN_mul_word(lVar5,uVar10);
        if (iVar2 != 0) {
          iVar2 = BN_div(0,lVar6,lVar5,param_4,param_5);
          lVar5 = lVar6;
          goto joined_r0x000143d51d5f;
        }
      }
LAB_143d51d7c:
      uVar3 = 0;
      goto LAB_143d51d7e;
    }
  }
  BN_MONT_CTX_free(lVar7);
LAB_143d51d91:
  BN_CTX_end(param_5);
  return uVar3;
}



// FUNCTION 143d51de0 BN_mod_exp_recp body=993 status=ok
// SIG undefined BN_mod_exp_recp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
BN_mod_exp_recp(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
               undefined8 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  undefined4 local_1b8;
  int local_1b4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 local_198 [56];
  longlong alStack_160 [33];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  uVar13 = 4;
  local_1a8 = param_5;
  local_1b8 = 0;
  local_1b0 = param_3;
  iVar4 = BN_get_flags(param_3,4);
  if (((iVar4 != 0) || (iVar4 = BN_get_flags(param_2,4), iVar4 != 0)) ||
     (iVar4 = BN_get_flags(param_4,4), iVar4 != 0)) {
    local_1c8 = CONCAT44(local_1c8._4_4_,0xaf);
    ERR_put_error(3,0x7d,0x42,"crypto\\bn\\bn_exp.c");
    return 0;
  }
  iVar4 = BN_num_bits(param_3);
  if (iVar4 == 0) {
    iVar4 = BN_abs_is_word(param_4,1);
    if (iVar4 != 0) {
      BN_set_word(param_1,0);
      return 1;
    }
    uVar5 = BN_set_word(param_1,1);
    return uVar5;
  }
  BN_CTX_start(param_5);
  lVar8 = BN_CTX_get(param_5);
  lVar9 = BN_CTX_get(param_5);
  alStack_160[1] = lVar9;
  if (lVar9 == 0) goto LAB_143d52177;
  BN_RECP_CTX_init(local_198);
  lVar10 = param_4;
  if (*(int *)(param_4 + 0x10) != 0) {
    lVar10 = BN_copy(lVar8,param_4);
    if (lVar10 == 0) goto LAB_143d52177;
    *(undefined4 *)(lVar8 + 0x10) = 0;
    lVar10 = lVar8;
  }
  iVar6 = BN_RECP_CTX_set(local_198,lVar10,param_5);
  if ((iVar6 < 1) || (iVar6 = BN_nnmod(lVar9,param_2,param_4,param_5), iVar6 == 0))
  goto LAB_143d52177;
  iVar6 = BN_is_zero(lVar9);
  if (iVar6 != 0) {
    BN_set_word(param_1,0);
    local_1b8 = 1;
    goto LAB_143d52177;
  }
  lVar10 = 1;
  if (iVar4 < 0x2a0) {
    if (0xef < iVar4) {
      uVar13 = 5;
      goto LAB_143d51fcc;
    }
    if (0x4f < iVar4) goto LAB_143d51fcc;
    uVar13 = 3;
    uVar14 = 1;
    if (0x17 < iVar4) goto LAB_143d51fcc;
  }
  else {
    uVar13 = 6;
LAB_143d51fcc:
    local_1c8 = param_5;
    iVar6 = BN_mod_mul_reciprocal(lVar8,lVar9,lVar9,local_198);
    if (iVar6 == 0) goto LAB_143d52177;
    lVar9 = (longlong)(1 << ((char)uVar13 - 1U & 0x1f));
    uVar14 = uVar13;
    if (1 < lVar9) {
      do {
        lVar11 = BN_CTX_get(param_5);
        alStack_160[lVar10 + 1] = lVar11;
        if (lVar11 == 0) goto LAB_143d52177;
        local_1c8 = param_5;
        iVar6 = BN_mod_mul_reciprocal(lVar11,alStack_160[lVar10],lVar8,local_198);
        if (iVar6 == 0) goto LAB_143d52177;
        lVar10 = lVar10 + 1;
      } while (lVar10 < lVar9);
    }
  }
  bVar1 = true;
  local_1b4 = 1;
  iVar4 = iVar4 + -1;
  iVar6 = BN_set_word(param_1,1);
  if (iVar6 != 0) {
    do {
      while( true ) {
        uVar12 = 1;
        uVar13 = 1;
        iVar6 = BN_is_bit_set(local_1b0,iVar4);
        uVar2 = local_1b0;
        if (iVar6 != 0) break;
        if ((!bVar1) &&
           (local_1c8 = param_5, iVar6 = BN_mod_mul_reciprocal(param_1,param_1,param_1,local_198),
           iVar6 == 0)) goto LAB_143d52177;
        if (iVar4 == 0) goto LAB_143d52173;
        iVar4 = iVar4 + -1;
      }
      uVar15 = 0;
      iVar6 = iVar4;
      uVar3 = uVar12;
      if (1 < uVar14) {
        do {
          uVar13 = uVar3;
          iVar6 = iVar6 + -1;
          param_5 = local_1a8;
          if (iVar6 < 0) break;
          iVar7 = BN_is_bit_set(uVar2,iVar6);
          if (iVar7 != 0) {
            uVar13 = uVar13 << ((char)uVar12 - (char)uVar15 & 0x1fU) | 1;
            uVar15 = uVar12;
          }
          uVar12 = uVar12 + 1;
          param_5 = local_1a8;
          uVar3 = uVar13;
        } while ((int)uVar12 < (int)uVar14);
      }
      if ((local_1b4 == 0) && (iVar6 = 0, 0 < (int)(uVar15 + 1))) {
        do {
          local_1c8 = param_5;
          iVar7 = BN_mod_mul_reciprocal(param_1,param_1,param_1,local_198);
          if (iVar7 == 0) goto LAB_143d52177;
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)(uVar15 + 1));
      }
      local_1c8 = param_5;
      iVar6 = BN_mod_mul_reciprocal
                        (param_1,param_1,alStack_160[((longlong)(int)uVar13 >> 1) + 1],local_198);
      if (iVar6 == 0) goto LAB_143d52177;
      iVar6 = iVar4 - uVar15;
      bVar1 = false;
      local_1b4 = 0;
      iVar4 = iVar6 + -1;
    } while (0 < iVar6);
LAB_143d52173:
    local_1b8 = 1;
  }
LAB_143d52177:
  BN_CTX_end(param_5);
  BN_RECP_CTX_free(local_198);
  return local_1b8;
}



// FUNCTION 143d521d0 MOD_EXP_CTIME_COPY_FROM_PREBUF body=674 status=ok
// SIG undefined MOD_EXP_CTIME_COPY_FROM_PREBUF(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
MOD_EXP_CTIME_COPY_FROM_PREBUF
          (longlong *param_1,int param_2,ulonglong *param_3,uint param_4,int param_5)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong local_78;
  
  iVar5 = 1 << ((byte)param_5 & 0x1f);
  lVar2 = bn_wexpand(param_1,param_2);
  if (lVar2 != 0) {
    if (param_5 < 4) {
      if (0 < param_2) {
        lVar2 = 0;
        do {
          uVar9 = 0;
          uVar1 = 0;
          puVar8 = param_3;
          if (0 < iVar5) {
            do {
              uVar4 = uVar1 ^ param_4;
              uVar1 = uVar1 + 1;
              uVar9 = uVar9 | -(ulonglong)((int)(~uVar4 & uVar4 - 1) >> 0x1f & 1) & *puVar8;
              puVar8 = puVar8 + 1;
            } while ((int)uVar1 < iVar5);
          }
          param_3 = param_3 + iVar5;
          *(ulonglong *)(*param_1 + lVar2 * 8) = uVar9;
          lVar2 = lVar2 + 1;
        } while (lVar2 < param_2);
      }
    }
    else {
      bVar3 = (byte)param_5 - 2;
      uVar1 = (int)param_4 >> (bVar3 & 0x1f);
      iVar6 = 1 << (bVar3 & 0x1f);
      lVar2 = (longlong)iVar6;
      if (0 < param_2) {
        local_78 = 0;
        do {
          uVar9 = 0;
          uVar4 = 0;
          if (0 < lVar2) {
            puVar8 = param_3 + lVar2 * 2;
            lVar10 = lVar2;
            do {
              uVar7 = uVar4 ^ param_4 & iVar6 - 1U;
              uVar4 = uVar4 + 1;
              uVar9 = uVar9 | -(ulonglong)((int)(uVar7 - 1 & ~uVar7) >> 0x1f & 1) &
                              (puVar8[lVar2 * -2] &
                               -(ulonglong)((int)(~uVar1 & uVar1 - 1) >> 0x1f & 1) |
                              (puVar8 + 1)[-1 - lVar2] &
                              -(ulonglong)((int)((uVar1 ^ 1) - 1 & ~(uVar1 ^ 1)) >> 0x1f & 1) |
                              *puVar8 & -(ulonglong)
                                         ((int)((uVar1 ^ 2) - 1 & ~(uVar1 ^ 2)) >> 0x1f & 1) |
                              puVar8[lVar2] &
                              -(ulonglong)((int)((uVar1 ^ 3) - 1 & ~(uVar1 ^ 3)) >> 0x1f & 1));
              lVar10 = lVar10 + -1;
              puVar8 = puVar8 + 1;
            } while (lVar10 != 0);
          }
          param_3 = param_3 + iVar5;
          *(ulonglong *)(*param_1 + local_78 * 8) = uVar9;
          local_78 = local_78 + 1;
        } while (local_78 < param_2);
      }
    }
    *(int *)(param_1 + 1) = param_2;
    return 1;
  }
  return 0;
}



// FUNCTION 143d52480 bn_get_bits body=94 status=ok
// SIG undefined bn_get_bits(void)

ulonglong bn_get_bits(longlong *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  
  uVar4 = param_2 >> 0x1f & 0x3f;
  uVar1 = param_2 + uVar4;
  iVar2 = (uVar1 & 0x3f) - uVar4;
  iVar6 = (int)uVar1 >> 6;
  if ((iVar6 < 0) || ((int)param_1[1] <= iVar6)) {
    return 0;
  }
  uVar5 = *(ulonglong *)(*param_1 + (longlong)iVar6 * 8);
  if ((iVar2 != 0) &&
     (bVar3 = (byte)iVar2, uVar5 = uVar5 >> (bVar3 & 0x3f), iVar6 + 1 < (int)param_1[1])) {
    return *(longlong *)(*param_1 + 8 + (longlong)iVar6 * 8) << (0x40 - bVar3 & 0x3f) | uVar5;
  }
  return uVar5;
}



// FUNCTION 143d524e0 EVP_DecodeBlock body=33 status=ok
// SIG undefined EVP_DecodeBlock(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_DecodeBlock(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  evp_decodeblock_int(0,param_1,param_2,param_3);
  return;
}



// FUNCTION 143d52510 EVP_DecodeFinal body=93 status=ok
// SIG undefined EVP_DecodeFinal(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_DecodeFinal(int *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  
  *param_3 = 0;
  if (*param_1 != 0) {
    iVar1 = evp_decodeblock_int(param_1,param_2,param_1 + 2);
    if (iVar1 < 0) {
      return 0xffffffff;
    }
    *param_1 = 0;
    *param_3 = iVar1;
  }
  return 1;
}



// FUNCTION 143d52570 EVP_DecodeInit body=10 status=ok
// SIG undefined EVP_DecodeInit(void)

void EVP_DecodeInit(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[0xb] = 0;
  return;
}



// FUNCTION 143d52580 EVP_DecodeUpdate body=500 status=ok
// SIG undefined EVP_DecodeUpdate(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong EVP_DecodeUpdate(int *param_1,longlong param_2,int *param_3,byte *param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined8 uVar16;
  ulonglong uVar8;
  
  uVar16 = 0x143d5259f;
  uVar10 = 0;
  iVar13 = 0;
  iVar3 = *param_1;
  uVar11 = (ulonglong)iVar3;
  iVar9 = 0;
  bVar15 = false;
  uVar6 = uVar10;
  if ((((0 < iVar3) && (uVar6 = 0, *(char *)(uVar11 + 7 + (longlong)param_1) == '=')) &&
      (uVar6 = 1, 1 < iVar3)) && (uVar6 = 1, *(char *)(uVar11 + 6 + (longlong)param_1) == '=')) {
    uVar6 = 2;
  }
  iVar5 = (int)uVar6;
  if (param_5 == 0) goto LAB_143d52748;
  puVar4 = &DAT_145d86c70;
  if ((*(byte *)(param_1 + 0x17) & 2) == 0) {
    puVar4 = &DAT_145d86bf0;
  }
  uVar8 = uVar10;
  uVar12 = uVar11;
  uVar14 = uVar10;
  if (0 < param_5) {
    do {
      iVar13 = (int)uVar14;
      bVar1 = *param_4;
      param_4 = param_4 + 1;
      if ((char)bVar1 < '\0') {
        bVar2 = 0xff;
      }
      else {
        bVar2 = puVar4[bVar1];
      }
      iVar9 = iVar13;
      if (bVar2 == 0xff) goto LAB_143d5276d;
      if (bVar1 == 0x3d) {
        uVar6 = (ulonglong)((int)uVar6 + 1);
      }
      else if ((0 < (int)uVar6) && ((bVar2 | 0x13) != 0xf3)) goto LAB_143d5276d;
      iVar5 = (int)uVar6;
      if (2 < iVar5) goto LAB_143d5276d;
      if (bVar2 == 0xf2) {
        iVar9 = 1;
        bVar15 = true;
        goto LAB_143d52705;
      }
      if ((bVar2 | 0x13) != 0xf3) {
        if (0x3f < (int)uVar12) goto LAB_143d5276d;
        uVar12 = (ulonglong)((int)uVar12 + 1);
        *(byte *)(uVar11 + 8 + (longlong)param_1) = bVar1;
        uVar11 = uVar11 + 1;
      }
      if ((int)uVar12 == 0x40) {
        iVar3 = evp_decodeblock_int(param_1,param_2,param_1 + 2,uVar12,puVar4,uVar16);
        uVar12 = uVar10;
        if ((iVar3 < 0) || (uVar12 = 0, iVar3 < iVar5)) goto LAB_143d5276d;
        uVar14 = (ulonglong)(uint)(iVar13 + (iVar3 - iVar5));
        param_2 = param_2 + (iVar3 - iVar5);
        uVar11 = uVar10;
        uVar12 = uVar10;
      }
      iVar13 = (int)uVar14;
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while ((int)uVar7 < param_5);
    iVar9 = 0;
  }
LAB_143d52705:
  if ((int)uVar12 < 1) {
LAB_143d5272f:
    iVar9 = iVar13;
    iVar3 = (int)uVar12;
    if (bVar15) goto LAB_143d52748;
LAB_143d52735:
    iVar3 = (int)uVar12;
    if ((iVar3 != 0) || (iVar5 == 0)) {
      uVar10 = 1;
    }
  }
  else {
    if ((uVar12 & 3) == 0) {
      iVar3 = evp_decodeblock_int(param_1,param_2,param_1 + 2,uVar12,puVar4,uVar16);
      uVar12 = 0;
      iVar9 = iVar13;
      if ((-1 < iVar3) && (iVar5 <= iVar3)) {
        uVar12 = uVar10;
        iVar13 = iVar13 + (iVar3 - iVar5);
        goto LAB_143d5272f;
      }
    }
    else {
      bVar15 = iVar9 == 0;
      iVar9 = iVar13;
      if (bVar15) goto LAB_143d52735;
    }
LAB_143d5276d:
    iVar3 = (int)uVar12;
    uVar10 = 0xffffffff;
  }
LAB_143d52748:
  *param_3 = iVar9;
  *param_1 = iVar3;
  return uVar10;
}



// FUNCTION 143d52780 EVP_ENCODE_CTX_free body=33 status=ok
// SIG undefined EVP_ENCODE_CTX_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_ENCODE_CTX_free(undefined8 param_1)

{
  CRYPTO_free(param_1,"crypto\\evp\\encode.c",0x86);
  return;
}



// FUNCTION 143d527b0 EVP_ENCODE_CTX_new body=36 status=ok
// SIG undefined EVP_ENCODE_CTX_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_ENCODE_CTX_new(void)

{
  CRYPTO_zalloc(0x60,"crypto\\evp\\encode.c",0x81);
  return;
}



// FUNCTION 143d527e0 EVP_EncodeBlock body=33 status=ok
// SIG undefined EVP_EncodeBlock(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_EncodeBlock(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  evp_encodeblock_int(0,param_1,param_2,param_3);
  return;
}



// FUNCTION 143d52810 EVP_EncodeFinal body=117 status=ok
// SIG undefined EVP_EncodeFinal(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_EncodeFinal(int *param_1,longlong param_2,uint *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (*param_1 != 0) {
    uVar1 = evp_encodeblock_int(param_1,param_2,param_1 + 2);
    if ((*(byte *)(param_1 + 0x17) & 1) == 0) {
      uVar2 = (ulonglong)uVar1;
      uVar1 = uVar1 + 1;
      *(undefined1 *)(uVar2 + param_2) = 10;
    }
    *(undefined1 *)((ulonglong)uVar1 + param_2) = 0;
    *param_1 = 0;
    *param_3 = uVar1;
    return;
  }
  *param_3 = 0;
  return;
}



// FUNCTION 143d52890 EVP_EncodeInit body=16 status=ok
// SIG undefined EVP_EncodeInit(void)

void EVP_EncodeInit(undefined4 *param_1)

{
  param_1[1] = 0x30;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  return;
}



// FUNCTION 143d528a0 EVP_EncodeUpdate body=389 status=ok
// SIG undefined EVP_EncodeUpdate(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
EVP_EncodeUpdate(uint *param_1,undefined1 *param_2,undefined4 *param_3,void *param_4,int param_5)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  size_t _Size;
  ulonglong uVar4;
  int iVar5;
  
  _Size = (size_t)param_5;
  uVar4 = 0;
  *param_3 = 0;
  if (param_5 < 1) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_1[1];
    if (0x50 < (int)uVar1) {
      OPENSSL_die("assertion failed: ctx->length <= (int)sizeof(ctx->enc_data)",
                  "crypto\\evp\\encode.c",0xab);
      uVar1 = param_1[1];
    }
    uVar3 = *param_1;
    iVar5 = uVar1 - uVar3;
    if (param_5 < iVar5) {
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)param_1 + (longlong)(int)uVar3 + 8),param_4,_Size);
      *param_1 = *param_1 + param_5;
    }
    else {
      if (uVar3 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)param_1 + (longlong)(int)uVar3 + 8),param_4,(longlong)iVar5);
        param_4 = (void *)((longlong)param_4 + (longlong)iVar5);
        _Size = (size_t)(uint)(param_5 - iVar5);
        iVar5 = evp_encodeblock_int(param_1,param_2,param_1 + 2,param_1[1]);
        uVar4 = (ulonglong)iVar5;
        param_2 = param_2 + uVar4;
        *param_1 = 0;
        if ((param_1[0x17] & 1) == 0) {
          *param_2 = 10;
          param_2 = param_2 + 1;
          uVar4 = uVar4 + 1;
        }
        *param_2 = 0;
        uVar1 = param_1[1];
      }
      uVar3 = (uint)_Size;
      if ((int)uVar1 <= (int)uVar3) {
        do {
          if (0x7fffffff < uVar4) goto LAB_143d529dd;
          iVar5 = evp_encodeblock_int(param_1,param_2,param_4,uVar1);
          param_4 = (void *)((longlong)param_4 + (longlong)(int)param_1[1]);
          uVar3 = (int)_Size - param_1[1];
          _Size = (size_t)uVar3;
          param_2 = param_2 + iVar5;
          uVar4 = uVar4 + (longlong)iVar5;
          if ((param_1[0x17] & 1) == 0) {
            *param_2 = 10;
            param_2 = param_2 + 1;
            uVar4 = uVar4 + 1;
          }
          *param_2 = 0;
          uVar1 = param_1[1];
        } while ((int)uVar1 <= (int)uVar3);
      }
      if (0x7fffffff < uVar4) {
LAB_143d529dd:
        *param_3 = 0;
        return 0;
      }
      if (uVar3 != 0) {
        _guard_xfg_dispatch_icall_nop(param_1 + 2,param_4,(longlong)(int)uVar3);
      }
      *param_1 = uVar3;
      *param_3 = (int)uVar4;
    }
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 143d52a30 evp_decodeblock_int body=387 status=ok
// SIG undefined evp_decodeblock_int(void)

int evp_decodeblock_int(longlong param_1,undefined1 *param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  byte bVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  
  iVar10 = 0;
  if ((param_1 == 0) || (puVar8 = &DAT_145d86c70, (*(byte *)(param_1 + 0x5c) & 2) == 0)) {
    puVar8 = &DAT_145d86bf0;
  }
  for (; ((-1 < (char)*param_3 && (puVar8[*param_3] == -0x20)) && (0 < (int)param_4));
      param_4 = param_4 - 1) {
    param_3 = param_3 + 1;
  }
  for (lVar5 = (longlong)(int)param_4; 3 < lVar5; lVar5 = lVar5 + -1) {
    if ((char)param_3[lVar5 + -1] < '\0') {
      bVar1 = 0xff;
    }
    else {
      bVar1 = puVar8[param_3[lVar5 + -1]];
    }
    if ((bVar1 | 0x13) != 0xf3) break;
    param_4 = param_4 - 1;
  }
  uVar3 = param_4 & 0x80000003;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
  }
  if (uVar3 == 0) {
    iVar9 = 0;
    if (0 < (int)param_4) {
      do {
        if ((char)*param_3 < '\0') {
          bVar1 = 0xff;
        }
        else {
          bVar1 = puVar8[*param_3];
        }
        if ((char)param_3[1] < '\0') {
          bVar4 = 0xff;
        }
        else {
          bVar4 = puVar8[param_3[1]];
        }
        if ((char)param_3[2] < '\0') {
          bVar2 = 0xff;
        }
        else {
          bVar2 = puVar8[param_3[2]];
        }
        if ((char)param_3[3] < '\0') {
          bVar7 = 0xff;
        }
        else {
          bVar7 = puVar8[param_3[3]];
        }
        param_3 = param_3 + 4;
        if (((char)(bVar4 | bVar1) < '\0') || ((char)(bVar7 | bVar2) < '\0')) goto LAB_143d52b96;
        iVar10 = iVar10 + 3;
        iVar9 = iVar9 + 4;
        iVar6 = (((uint)bVar1 << 6 | (uint)bVar4) << 6 | (uint)bVar2) << 6;
        *param_2 = (char)((uint)iVar6 >> 0x10);
        param_2[1] = (char)((uint)iVar6 >> 8);
        param_2[2] = (byte)iVar6 | bVar7;
        param_2 = param_2 + 3;
      } while (iVar9 < (int)param_4);
    }
  }
  else {
LAB_143d52b96:
    iVar10 = -1;
  }
  return iVar10;
}



// FUNCTION 143d52bc0 evp_encodeblock_int body=298 status=ok
// SIG undefined evp_encodeblock_int(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int evp_encodeblock_int(longlong param_1,char *param_2,longlong param_3,int param_4)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  uint3 uVar4;
  char cVar5;
  ulonglong uVar6;
  byte *pbVar7;
  char *pcVar8;
  int iVar9;
  
  iVar9 = 0;
  if ((param_1 == 0) ||
     (pcVar8 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz./",
     (*(byte *)(param_1 + 0x5c) & 2) == 0)) {
    pcVar8 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
  }
  if (0 < param_4) {
    pbVar7 = (byte *)(param_3 + 1);
    do {
      bVar2 = pbVar7[-1];
      if (param_4 < 3) {
        uVar6 = (ulonglong)bVar2 << 0x10;
        if (param_4 == 2) {
          uVar6 = (ulonglong)((uint)uVar6 | (uint)*pbVar7 << 8);
        }
        *param_2 = pcVar8[uVar6 >> 0x12];
        param_2[1] = pcVar8[(uint)(uVar6 >> 0xc) & 0x3f];
        if (param_4 == 1) {
          cVar5 = '=';
        }
        else {
          cVar5 = pcVar8[(uint)(uVar6 >> 6) & 0x3f];
        }
        param_2[2] = cVar5;
        cVar5 = '=';
      }
      else {
        bVar3 = *pbVar7;
        uVar4 = CONCAT21(CONCAT11(bVar2,bVar3),pbVar7[1]);
        *param_2 = pcVar8[bVar2 >> 2];
        param_2[1] = pcVar8[(ushort)(CONCAT11(bVar2,bVar3) >> 4) & 0x3f];
        param_2[2] = pcVar8[uVar4 >> 6 & 0x3f];
        cVar5 = pcVar8[uVar4 & 0x3f];
      }
      pcVar1 = param_2 + 3;
      iVar9 = iVar9 + 4;
      param_2 = param_2 + 4;
      *pcVar1 = cVar5;
      pbVar7 = pbVar7 + 3;
      param_4 = param_4 + -3;
    } while (0 < param_4);
    *param_2 = '\0';
    return iVar9;
  }
  *param_2 = '\0';
  return 0;
}



// FUNCTION 143d52cf0 BN_add body=155 status=ok
// SIG undefined BN_add(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_add(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)(param_2 + 0x10);
  if (iVar2 == *(int *)(param_3 + 0x10)) {
    uVar3 = BN_uadd();
    *(int *)(param_1 + 0x10) = iVar2;
  }
  else {
    iVar2 = BN_ucmp(param_2,param_3);
    if (iVar2 < 1) {
      if (iVar2 < 0) {
        uVar1 = *(undefined4 *)(param_3 + 0x10);
        uVar3 = BN_usub(param_1,param_3,param_2);
        *(undefined4 *)(param_1 + 0x10) = uVar1;
      }
      else {
        BN_set_word(param_1,0);
        uVar3 = 1;
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x10);
      uVar3 = BN_usub(param_1,param_2,param_3);
      *(undefined4 *)(param_1 + 0x10) = uVar1;
    }
  }
  return uVar3;
}



// FUNCTION 143d52d90 BN_sub body=147 status=ok
// SIG undefined BN_sub(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_sub(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_2 + 0x10);
  if (uVar3 == *(uint *)(param_3 + 0x10)) {
    iVar1 = BN_ucmp(param_2,param_3);
    if (iVar1 < 1) {
      if (iVar1 < 0) {
        uVar3 = (uint)(*(int *)(param_3 + 0x10) == 0);
        uVar2 = BN_usub(param_1,param_3,param_2);
      }
      else {
        uVar3 = 0;
        BN_set_word(param_1,0);
        uVar2 = 1;
      }
    }
    else {
      uVar3 = *(uint *)(param_2 + 0x10);
      uVar2 = BN_usub(param_1,param_2,param_3);
    }
  }
  else {
    uVar2 = BN_uadd();
  }
  *(uint *)(param_1 + 0x10) = uVar3;
  return uVar2;
}



// FUNCTION 143d52e30 BN_uadd body=207 status=ok
// SIG undefined BN_uadd(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_uadd(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong *puVar7;
  int iVar8;
  longlong *plVar9;
  
  plVar9 = param_2;
  if ((int)param_3[1] <= (int)param_2[1]) {
    plVar9 = param_3;
    param_3 = param_2;
  }
  iVar1 = (int)param_3[1];
  iVar2 = (int)plVar9[1];
  iVar8 = iVar1 - iVar2;
  lVar4 = bn_wexpand(param_1,iVar1 + 1);
  uVar6 = 0;
  if (lVar4 != 0) {
    *(int *)(param_1 + 1) = iVar1;
    lVar4 = *param_3;
    lVar3 = *param_1;
    uVar5 = bn_add_words(lVar3,lVar4,*plVar9,iVar2);
    puVar7 = (ulonglong *)(lVar3 + (longlong)iVar2 * 8);
    plVar9 = (longlong *)(lVar4 + (longlong)iVar2 * 8);
    for (; iVar8 != 0; iVar8 = iVar8 + -1) {
      lVar4 = *plVar9;
      plVar9 = plVar9 + 1;
      *puVar7 = lVar4 + uVar5;
      puVar7 = puVar7 + 1;
      uVar5 = uVar5 & lVar4 + uVar5 == 0;
    }
    *puVar7 = uVar5;
    uVar6 = 1;
    *(int *)(param_1 + 1) = (int)param_1[1] + (int)uVar5;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return uVar6;
}



// FUNCTION 143d52f00 BN_usub body=272 status=ok
// SIG undefined BN_usub(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_usub(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  
  iVar7 = (int)param_2[1];
  iVar1 = *(int *)(param_3 + 1);
  iVar6 = iVar7 - iVar1;
  if (iVar6 < 0) {
    ERR_put_error(3,0x73,100,"crypto\\bn\\bn_add.c",0x8b,0x143d52f1f);
  }
  else {
    lVar3 = bn_wexpand(param_1,iVar7);
    if (lVar3 != 0) {
      lVar3 = *param_2;
      lVar2 = *param_1;
      uVar4 = bn_sub_words(lVar2,lVar3,*param_3,iVar1);
      plVar8 = (longlong *)(lVar3 + (longlong)iVar1 * 8);
      plVar5 = (longlong *)(lVar2 + (longlong)iVar1 * 8);
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        lVar3 = *plVar8;
        plVar8 = plVar8 + 1;
        *plVar5 = lVar3 - uVar4;
        plVar5 = plVar5 + 1;
        uVar4 = uVar4 & lVar3 == 0;
      }
      while ((iVar7 != 0 && (plVar8 = plVar5 + -1, plVar5 = plVar5 + -1, *plVar8 == 0))) {
        iVar7 = iVar7 + -1;
      }
      *(int *)(param_1 + 1) = iVar7;
      *(undefined4 *)(param_1 + 2) = 0;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143d53010 BN_mul body=50 status=ok
// SIG undefined BN_mul(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 BN_mul(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = bn_mul_fixed_top();
  bn_correct_top(param_1);
  return uVar1;
}



// FUNCTION 143d53050 bn_mul_fixed_top body=649 status=ok
// SIG undefined bn_mul_fixed_top(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
bn_mul_fixed_top(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int iVar9;
  
  iVar1 = *(int *)(param_2 + 1);
  cVar3 = '\0';
  iVar2 = *(int *)(param_3 + 1);
  if ((iVar1 == 0) || (iVar2 == 0)) {
    BN_set_word(param_1,0);
    return 1;
  }
  iVar4 = iVar2 + iVar1;
  BN_CTX_start(param_4);
  if (((param_1 != param_2) && (puVar5 = param_1, param_1 != param_3)) ||
     (puVar5 = (undefined8 *)BN_CTX_get(param_4), puVar5 != (undefined8 *)0x0)) {
    iVar9 = iVar1 - iVar2;
    if ((iVar9 == 0) && (iVar1 == 8)) {
      lVar6 = bn_wexpand(puVar5,0x10);
      if (lVar6 != 0) {
        *(undefined4 *)(puVar5 + 1) = 0x10;
        bn_mul_comba8(*puVar5,*param_2,*param_3);
        goto LAB_143d5326c;
      }
    }
    else if ((iVar1 < 0x10) || ((iVar2 < 0x10 || (2 < iVar9 + 1U)))) {
      lVar6 = bn_wexpand(puVar5,iVar4);
      if (lVar6 != 0) {
        *(int *)(puVar5 + 1) = iVar4;
        bn_mul_normal(*puVar5,*param_2,iVar1,*param_3,iVar2);
        goto LAB_143d5326c;
      }
    }
    else {
      if (-1 < iVar9) {
        cVar3 = BN_num_bits_word((longlong)iVar1);
      }
      if (iVar9 == -1) {
        cVar3 = BN_num_bits_word((longlong)iVar2);
      }
      iVar9 = 1 << (cVar3 - 1U & 0x1f);
      puVar7 = (undefined8 *)BN_CTX_get(param_4);
      if (puVar7 != (undefined8 *)0x0) {
        if ((iVar9 < iVar1) || (iVar9 < iVar2)) {
          lVar6 = bn_wexpand(puVar7,iVar9 * 8);
          if ((lVar6 != 0) && (lVar6 = bn_wexpand(puVar5,iVar9 * 8), lVar6 != 0)) {
            FUN_143d53410(*puVar5,*param_2,*param_3,iVar9,iVar1 - iVar9,iVar2 - iVar9,*puVar7);
            *(int *)(puVar5 + 1) = iVar4;
            goto LAB_143d5326c;
          }
        }
        else {
          lVar6 = bn_wexpand(puVar7,iVar9 * 4);
          if ((lVar6 != 0) && (lVar6 = bn_wexpand(puVar5,iVar9 * 4), lVar6 != 0)) {
            FUN_143d53970(*puVar5,*param_2,*param_3,iVar9,iVar1 - iVar9,iVar2 - iVar9,*puVar7);
            *(int *)(puVar5 + 1) = iVar4;
LAB_143d5326c:
            *(uint *)(puVar5 + 2) = *(uint *)(param_2 + 2) ^ *(uint *)(param_3 + 2);
            if ((param_1 == puVar5) || (lVar6 = BN_copy(param_1,puVar5), lVar6 != 0)) {
              uVar8 = 1;
              goto LAB_143d53296;
            }
          }
        }
      }
    }
  }
  uVar8 = 0;
LAB_143d53296:
  BN_CTX_end(param_4);
  return uVar8;
}



// FUNCTION 143d532e0 bn_mul_normal body=294 status=ok
// SIG undefined bn_mul_normal(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void bn_mul_normal(longlong param_1,undefined8 *param_2,int param_3,undefined8 *param_4,int param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = param_2;
  iVar1 = param_5;
  if (param_5 <= param_3) {
    puVar3 = param_4;
    iVar1 = param_3;
    param_4 = param_2;
    param_3 = param_5;
  }
  puVar4 = (undefined8 *)((longlong)iVar1 * 8 + param_1);
  if (param_3 < 1) {
    bn_mul_words(param_1,param_4,iVar1,0);
  }
  else {
    uVar2 = bn_mul_words(param_1,param_4,iVar1,*puVar3);
    param_3 = param_3 + -1;
    *puVar4 = uVar2;
    if (0 < param_3) {
      puVar4 = puVar4 + 2;
      puVar3 = puVar3 + 2;
      param_1 = param_1 + 0x10;
      do {
        uVar2 = bn_mul_add_words(param_1 + -8,param_4,iVar1,puVar3[-1]);
        puVar4[-1] = uVar2;
        if (param_3 + -1 < 1) {
          return;
        }
        uVar2 = bn_mul_add_words(param_1,param_4,iVar1,*puVar3);
        *puVar4 = uVar2;
        if (param_3 + -2 < 1) {
          return;
        }
        uVar2 = bn_mul_add_words(param_1 + 8,param_4,iVar1,puVar3[1]);
        puVar4[1] = uVar2;
        if (param_3 + -3 < 1) {
          return;
        }
        uVar2 = bn_mul_add_words(param_1 + 0x10,param_4,iVar1,puVar3[2]);
        puVar4[2] = uVar2;
        puVar3 = puVar3 + 4;
        puVar4 = puVar4 + 4;
        param_1 = param_1 + 0x20;
        param_3 = param_3 + -4;
      } while (0 < param_3);
    }
  }
  return;
}



// FUNCTION 143d53410 FUN_143d53410 body=1329 status=ok
// SIG undefined FUN_143d53410(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d53410(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,
                  int param_6,longlong param_7)

{
  ulonglong *puVar1;
  longlong lVar2;
  size_t _Size;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  void *_Dst;
  longlong lVar10;
  ulonglong *puVar11;
  
  iVar6 = param_4 * 2;
  if (param_4 < 8) {
    bn_mul_normal(param_1,param_2,param_4 + param_5,param_3);
    return;
  }
  iVar7 = param_4 - param_5;
  lVar2 = (longlong)param_4 * 8;
  iVar4 = bn_cmp_part_words(param_2,param_2 + lVar2,param_5,iVar7);
  bVar3 = false;
  iVar8 = param_6 - param_4;
  iVar5 = bn_cmp_part_words(lVar2 + param_3,param_3,param_6,iVar8);
  switch(iVar4 * 3 + 4 + iVar5) {
  case 0:
    bn_sub_part_words(param_7,lVar2 + param_2,param_2,param_5,param_5 - param_4);
    bn_sub_part_words(lVar2 + param_7,param_3,lVar2 + param_3,param_6,param_4 - param_6);
    break;
  case 1:
  case 2:
    bn_sub_part_words(param_7,lVar2 + param_2,param_2,param_5,param_5 - param_4);
    bn_sub_part_words(lVar2 + param_7,lVar2 + param_3,param_3,param_6,iVar8);
    bVar3 = true;
    break;
  case 3:
  case 4:
  case 5:
  case 6:
    bn_sub_part_words(param_7,param_2,lVar2 + param_2,param_5,iVar7);
    bn_sub_part_words(lVar2 + param_7,param_3,lVar2 + param_3,param_6,param_4 - param_6);
    bVar3 = true;
    break;
  case 7:
  case 8:
    bn_sub_part_words(param_7,param_2,lVar2 + param_2,param_5,iVar7);
    bn_sub_part_words(lVar2 + param_7,lVar2 + param_3,param_3,param_6,iVar8);
  }
  _Size = (longlong)iVar6 * 8;
  if (param_4 == 8) {
    bn_mul_comba8(_Size + param_7);
    bn_mul_comba8(param_1,param_2,param_3);
    bn_mul_normal(param_1 + 0x80,param_2 + 0x40,param_5,param_3 + 0x40,param_6);
    _guard_xfg_dispatch_icall_nop
              ((void *)(param_1 + (longlong)(param_5 + 0x10 + param_6) * 8),0,
               (longlong)((0x10 - param_5) - param_6) << 3);
  }
  else {
    lVar10 = param_7 + (longlong)(param_4 * 4) * 8;
    FUN_143d53970(_Size + param_7,param_7,lVar2 + param_7,param_4,0,0,lVar10);
    FUN_143d53970(param_1,param_2,param_3,param_4,0,0,lVar10);
    iVar5 = param_4 / 2;
    iVar8 = param_6 - iVar5;
    iVar7 = param_5 - iVar5;
    iVar4 = iVar7;
    if (param_5 <= param_6) {
      iVar4 = iVar8;
    }
    _Dst = (void *)(param_1 + _Size);
    if (iVar4 == 0) {
      FUN_143d53970(_Dst,lVar2 + param_2,lVar2 + param_3,iVar5,iVar7,iVar8,lVar10);
      _guard_xfg_dispatch_icall_nop
                ((void *)(param_1 + (longlong)(iVar5 * 2 + iVar6) * 8),0,
                 (longlong)(iVar6 + iVar5 * -2) << 3);
    }
    else if (iVar4 < 1) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,_Size);
      if ((param_5 < 0x10) && (param_6 < 0x10)) {
        bn_mul_normal(_Dst,lVar2 + param_2,param_5,lVar2 + param_3,param_6);
      }
      else {
        do {
          iVar5 = iVar5 / 2;
          if ((iVar5 < param_5) || (iVar5 < param_6)) {
            FUN_143d53410(_Dst,lVar2 + param_2,lVar2 + param_3,iVar5,param_5 - iVar5,param_6 - iVar5
                          ,lVar10);
            goto LAB_143d5386b;
          }
        } while ((iVar5 != param_5) && (iVar5 != param_6));
        FUN_143d53970(_Dst,lVar2 + param_2,lVar2 + param_3,iVar5,param_5 - iVar5,param_6 - iVar5,
                      lVar10);
      }
    }
    else {
      FUN_143d53410(_Dst,lVar2 + param_2,lVar2 + param_3,iVar5,iVar7,iVar8,lVar10);
      _guard_xfg_dispatch_icall_nop
                ((void *)(param_1 + (longlong)(iVar6 + param_5 + param_6) * 8),0,
                 (longlong)((iVar6 - param_5) - param_6) << 3);
    }
  }
LAB_143d5386b:
  iVar4 = bn_add_words(param_7,param_1,param_1 + _Size,iVar6);
  lVar10 = _Size + param_7;
  if (bVar3) {
    iVar5 = bn_sub_words(lVar10,param_7,lVar10);
    iVar5 = -iVar5;
  }
  else {
    iVar5 = bn_add_words(lVar10,lVar10,param_7,iVar6);
  }
  iVar6 = bn_add_words(lVar2 + param_1,lVar2 + param_1,lVar10,iVar6);
  iVar6 = iVar4 + iVar5 + iVar6;
  if (iVar6 != 0) {
    puVar11 = (ulonglong *)(param_1 + (longlong)(param_4 * 3) * 8);
    uVar9 = *(longlong *)(param_1 + (longlong)(param_4 * 3) * 8) + (longlong)iVar6;
    *puVar11 = uVar9;
    if (uVar9 < (ulonglong)(longlong)iVar6) {
      do {
        puVar1 = puVar11 + 1;
        *puVar1 = *puVar1 + 1;
        puVar11 = puVar11 + 1;
      } while (*puVar1 == 0);
    }
  }
  return;
}



// FUNCTION 143d53970 FUN_143d53970 body=1285 status=ok
// SIG undefined FUN_143d53970(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d53970(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,
                  int param_6,longlong param_7)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong *puVar17;
  
  lVar16 = (longlong)param_4;
  iVar8 = param_4 / 2;
  if (param_4 == 8) {
    if ((param_5 == 0) && (param_6 == 0)) {
      bn_mul_comba8(param_1,param_2);
      return;
    }
LAB_143d539f0:
    bn_mul_normal(param_1,param_2,param_4 + param_5,param_3,param_4 + param_6);
    if (-1 < param_5 + param_6) {
      return;
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(param_1 + (longlong)(param_5 + param_4 * 2 + param_6) * 8),0,
               (longlong)-(param_5 + param_6) << 3);
    return;
  }
  if (param_4 < 0x10) goto LAB_143d539f0;
  iVar14 = iVar8 - (param_5 + iVar8);
  lVar5 = (longlong)iVar8 * 8;
  lVar11 = lVar5 + param_2;
  iVar9 = bn_cmp_part_words(param_2,lVar11,param_5 + iVar8,iVar14);
  bVar7 = false;
  bVar6 = false;
  lVar12 = lVar5 + param_3;
  iVar10 = bn_cmp_part_words(lVar12,param_3,iVar8 + param_6,param_6);
  switch(iVar9 * 3 + 4 + iVar10) {
  case 0:
    bn_sub_part_words(param_7,lVar11,param_2,param_5 + iVar8,param_5);
    bn_sub_part_words(lVar5 + param_7,param_3,lVar12,iVar8 + param_6,iVar8 - (iVar8 + param_6));
    break;
  case 1:
  case 3:
  case 4:
  case 5:
  case 7:
    bVar6 = true;
    break;
  case 2:
    bn_sub_part_words(param_7,lVar11,param_2,param_5 + iVar8,param_5);
    bn_sub_part_words(lVar5 + param_7,lVar12,param_3,iVar8 + param_6,param_6);
    bVar7 = true;
    break;
  case 6:
    bn_sub_part_words(param_7,param_2,lVar11,param_5 + iVar8,iVar14);
    bn_sub_part_words(lVar5 + param_7,param_3,lVar12,iVar8 + param_6,iVar8 - (iVar8 + param_6));
    bVar7 = true;
    break;
  case 8:
    bn_sub_part_words(param_7,param_2,lVar11,param_5 + iVar8,iVar14);
    bn_sub_part_words(lVar5 + param_7,lVar12,param_3,iVar8 + param_6,param_6);
  }
  if (iVar8 == 4) {
    if ((param_5 == 0) && (param_6 == 0)) {
      puVar2 = (undefined8 *)(lVar16 * 8 + param_7);
      if (bVar6) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
      }
      else {
        bn_mul_comba4(puVar2,param_7,param_7 + 0x20);
      }
      bn_mul_comba4(param_1,param_2,param_3);
      lVar15 = lVar16 * 8 + param_1;
      bn_mul_comba4(lVar15,lVar11,lVar12);
      goto LAB_143d53dd7;
    }
  }
  else if (((iVar8 == 8) && (param_5 == 0)) && (param_6 == 0)) {
    pvVar3 = (void *)(lVar16 * 8 + param_7);
    if (bVar6) {
      _guard_xfg_dispatch_icall_nop(pvVar3,0,0x80);
    }
    else {
      bn_mul_comba8(pvVar3,param_7,param_7 + 0x40);
    }
    bn_mul_comba8(param_1,param_2,param_3);
    lVar15 = lVar16 * 8 + param_1;
    bn_mul_comba8(lVar15,lVar11,lVar12);
    goto LAB_143d53dd7;
  }
  pvVar3 = (void *)(lVar16 * 8 + param_7);
  lVar4 = param_7 + (longlong)(param_4 * 2) * 8;
  if (bVar6) {
    _guard_xfg_dispatch_icall_nop(pvVar3,0,lVar16 * 8);
  }
  else {
    FUN_143d53970(pvVar3,param_7,lVar5 + param_7,iVar8,0,0,lVar4);
  }
  FUN_143d53970(param_1,param_2,param_3,iVar8,0,0,lVar4);
  lVar15 = lVar16 * 8 + param_1;
  FUN_143d53970(lVar15,lVar11,lVar12,iVar8,param_5,param_6,lVar4);
LAB_143d53dd7:
  iVar9 = bn_add_words(param_7,param_1,lVar15,param_4);
  lVar16 = lVar16 * 8 + param_7;
  if (bVar7) {
    iVar10 = bn_sub_words(lVar16,param_7,lVar16);
    iVar10 = -iVar10;
  }
  else {
    iVar10 = bn_add_words(lVar16,lVar16,param_7,param_4);
  }
  iVar14 = bn_add_words(lVar5 + param_1,lVar5 + param_1,lVar16,param_4);
  iVar14 = iVar9 + iVar10 + iVar14;
  if (iVar14 == 0) {
    return;
  }
  puVar17 = (ulonglong *)(param_1 + (longlong)(param_4 + iVar8) * 8);
  uVar13 = *(longlong *)(param_1 + (longlong)(param_4 + iVar8) * 8) + (longlong)iVar14;
  *puVar17 = uVar13;
  if ((ulonglong)(longlong)iVar14 <= uVar13) {
    return;
  }
  do {
    puVar1 = puVar17 + 1;
    *puVar1 = *puVar1 + 1;
    puVar17 = puVar17 + 1;
  } while (*puVar1 == 0);
  return;
}



// FUNCTION 143d53ea0 bn_sub_part_words body=543 status=ok
// SIG undefined bn_sub_part_words(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong bn_sub_part_words(longlong param_1,longlong param_2,longlong param_3,int param_4,
                          int param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  lVar1 = bn_sub_words();
  if (param_5 != 0) {
    lVar2 = (longlong)param_4 * 8;
    plVar5 = (longlong *)(param_1 + lVar2);
    plVar7 = (longlong *)(param_2 + lVar2);
    plVar6 = (longlong *)(param_3 + lVar2);
    if (param_5 < 0) {
      while( true ) {
        lVar2 = *plVar6;
        *plVar5 = -(lVar2 + lVar1);
        if (lVar2 != 0) {
          lVar1 = 1;
        }
        if (-1 < param_5 + 1) break;
        lVar2 = plVar6[1];
        plVar5[1] = -(lVar2 + lVar1);
        if (lVar2 != 0) {
          lVar1 = 1;
        }
        if (-1 < param_5 + 2) {
          return lVar1;
        }
        lVar2 = plVar6[2];
        plVar5[2] = -(lVar2 + lVar1);
        if (lVar2 != 0) {
          lVar1 = 1;
        }
        if (-1 < param_5 + 3) {
          return lVar1;
        }
        lVar2 = plVar6[3];
        plVar5[3] = -(lVar2 + lVar1);
        if (lVar2 != 0) {
          lVar1 = 1;
        }
        param_5 = param_5 + 4;
        if (-1 < param_5) {
          return lVar1;
        }
        plVar6 = plVar6 + 4;
        plVar5 = plVar5 + 4;
      }
    }
    else {
      while (lVar1 != 0) {
        lVar2 = *plVar7;
        *plVar5 = lVar2 - lVar1;
        lVar3 = 0;
        if (lVar2 == 0) {
          lVar3 = lVar1;
        }
        if (param_5 + -1 < 1) {
          return lVar3;
        }
        lVar1 = plVar7[1];
        plVar5[1] = lVar1 - lVar3;
        lVar2 = 0;
        if (lVar1 == 0) {
          lVar2 = lVar3;
        }
        if (param_5 + -2 < 1) {
          return lVar2;
        }
        lVar1 = plVar7[2];
        plVar5[2] = lVar1 - lVar2;
        lVar3 = 0;
        if (lVar1 == 0) {
          lVar3 = lVar2;
        }
        if (param_5 + -3 < 1) {
          return lVar3;
        }
        lVar2 = plVar7[3];
        plVar5[3] = lVar2 - lVar3;
        lVar1 = 0;
        if (lVar2 == 0) {
          lVar1 = lVar3;
        }
        param_5 = param_5 + -4;
        if (param_5 < 1) {
          return lVar1;
        }
        plVar7 = plVar7 + 4;
        plVar5 = plVar5 + 4;
      }
      lVar1 = 0;
      if (0 < param_5) {
        param_5 = param_5 + -1;
        *plVar5 = *plVar7;
        if (0 < param_5) {
          plVar6 = plVar7 + 2;
          plVar4 = plVar5 + 2;
          do {
            plVar4[-1] = plVar6[-1];
            if (param_5 + -1 < 1) {
              return 0;
            }
            *plVar4 = *plVar6;
            if (param_5 + -2 < 1) {
              return 0;
            }
            plVar4[1] = plVar6[1];
            if (param_5 + -3 < 1) {
              return 0;
            }
            plVar6 = plVar6 + 4;
            param_5 = param_5 + -4;
            plVar4[2] = *(longlong *)
                         ((longlong)plVar4 + (longlong)plVar7 + (0x10 - (longlong)plVar5));
            plVar4 = plVar4 + 4;
          } while (0 < param_5);
        }
      }
    }
  }
  return lVar1;
}



// FUNCTION 143d540c0 BN_mod_add body=74 status=ok
// SIG undefined BN_mod_add(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_mod_add(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  int iVar1;
  
  iVar1 = BN_add();
  if (iVar1 == 0) {
    return;
  }
  BN_nnmod(param_1,param_1,param_4,param_5);
  return;
}



// FUNCTION 143d54110 BN_mod_add_quick body=54 status=ok
// SIG undefined BN_mod_add_quick(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong BN_mod_add_quick(undefined8 param_1)

{
  ulonglong uVar1;
  
  uVar1 = bn_mod_add_fixed_top();
  if ((int)uVar1 != 0) {
    bn_correct_top(param_1);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 143d54150 BN_mod_lshift1_quick body=100 status=ok
// SIG undefined BN_mod_lshift1_quick(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_mod_lshift1_quick(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = BN_lshift1();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = BN_cmp(param_1,param_3);
  if (-1 < iVar1) {
    uVar2 = BN_sub(param_1,param_1,param_3);
    return uVar2;
  }
  return 1;
}



// FUNCTION 143d541c0 BN_mod_lshift_quick body=229 status=ok
// SIG undefined BN_mod_lshift_quick(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_mod_lshift_quick(longlong param_1,longlong param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143d541da;
  if ((param_1 == param_2) || (lVar3 = BN_copy(), lVar3 != 0)) {
    do {
      if (param_3 < 1) {
        return 1;
      }
      iVar1 = BN_num_bits(param_1);
      iVar2 = BN_num_bits(param_4);
      iVar2 = iVar2 - iVar1;
      if (iVar2 < 0) {
        ERR_put_error(3,0x77,0x6e,"crypto\\bn\\bn_mod.c",0x126,uVar4);
        return 0;
      }
      iVar1 = param_3;
      if (iVar2 <= param_3) {
        iVar1 = iVar2;
      }
      if (iVar1 == 0) {
        iVar1 = BN_lshift1(param_1,param_1);
        if (iVar1 == 0) {
          return 0;
        }
        param_3 = param_3 + -1;
      }
      else {
        iVar2 = BN_lshift(param_1,param_1,iVar1);
        if (iVar2 == 0) {
          return 0;
        }
        param_3 = param_3 - iVar1;
      }
      iVar1 = BN_cmp(param_1,param_4);
    } while ((iVar1 < 0) || (iVar1 = BN_sub(param_1,param_1,param_4), iVar1 != 0));
  }
  return 0;
}



// FUNCTION 143d542b0 BN_mod_mul body=186 status=ok
// SIG undefined BN_mod_mul(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
BN_mod_mul(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
          undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  BN_CTX_start(param_5);
  lVar2 = BN_CTX_get(param_5);
  uVar3 = 0;
  if (lVar2 != 0) {
    if (param_2 == param_3) {
      iVar1 = BN_sqr(lVar2,param_2,param_5);
    }
    else {
      iVar1 = BN_mul(lVar2,param_2,param_3,param_5);
    }
    uVar3 = 0;
    if (iVar1 != 0) {
      iVar1 = BN_nnmod(param_1,lVar2,param_4,param_5);
      uVar3 = 0;
      if (iVar1 != 0) {
        uVar3 = 1;
      }
    }
  }
  BN_CTX_end(param_5);
  return uVar3;
}



// FUNCTION 143d54370 BN_mod_sqr body=98 status=ok
// SIG undefined BN_mod_sqr(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_mod_sqr(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143d54385;
  iVar1 = BN_sqr(param_1,param_2,param_4);
  if (iVar1 == 0) {
    return;
  }
  BN_div(0,param_1,param_1,param_3,param_4,uVar2);
  return;
}



// FUNCTION 143d543e0 BN_mod_sub body=74 status=ok
// SIG undefined BN_mod_sub(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_mod_sub(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  int iVar1;
  
  iVar1 = BN_sub();
  if (iVar1 == 0) {
    return;
  }
  BN_nnmod(param_1,param_1,param_4,param_5);
  return;
}



// FUNCTION 143d54430 BN_mod_sub_quick body=91 status=ok
// SIG undefined BN_mod_sub_quick(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
BN_mod_sub_quick(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = BN_sub();
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = BN_add(param_1,param_1,param_4);
    return uVar1;
  }
  return 1;
}



// FUNCTION 143d54490 BN_nnmod body=127 status=ok
// SIG undefined BN_nnmod(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_nnmod(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = BN_div(0,param_1,param_2,param_3,param_4,0x143d544a0);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    return 1;
  }
  UNRECOVERED_JUMPTABLE = BN_add;
  if (*(int *)(param_3 + 0x10) != 0) {
    UNRECOVERED_JUMPTABLE = BN_sub;
  }
                    /* WARNING: Could not recover jumptable at 0x000143d5450c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_1,param_3);
  return uVar1;
}



// FUNCTION 143d54510 bn_mod_add_fixed_top body=496 status=ok
// SIG undefined bn_mod_add_fixed_top(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
bn_mod_add_fixed_top(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  longlong lVar12;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  ulonglong local_c8 [16];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  iVar1 = *(int *)(param_4 + 1);
  uVar8 = (ulonglong)iVar1;
  puVar3 = local_c8;
  local_d8 = param_4;
  lVar2 = bn_wexpand(param_1,iVar1);
  if (lVar2 == 0) {
LAB_143d546dd:
    uVar5 = 0;
  }
  else {
    if (0x10 < uVar8) {
      puVar3 = (ulonglong *)CRYPTO_malloc(uVar8 * 8,"crypto\\bn\\bn_mod.c");
      if (puVar3 == (ulonglong *)0x0) goto LAB_143d546dd;
    }
    puVar4 = puVar3;
    if ((ulonglong *)*param_2 != (ulonglong *)0x0) {
      puVar4 = (ulonglong *)*param_2;
    }
    puVar11 = puVar3;
    if ((ulonglong *)*param_3 != (ulonglong *)0x0) {
      puVar11 = (ulonglong *)*param_3;
    }
    uVar10 = 0;
    lVar12 = 0;
    lVar2 = 0;
    uVar9 = 0;
    if (iVar1 != 0) {
      do {
        uVar7 = ((longlong)(uVar10 - (longlong)*(int *)(param_2 + 1)) >> 0x3f & puVar4[lVar12]) +
                uVar9;
        uVar6 = ((longlong)(uVar10 - (longlong)*(int *)(param_3 + 1)) >> 0x3f & puVar11[lVar2]) +
                uVar7;
        puVar3[uVar10] = uVar6;
        uVar9 = (ulonglong)(uVar7 < uVar9) + (ulonglong)(uVar6 < uVar7);
        uVar10 = uVar10 + 1;
        lVar12 = lVar12 - ((longlong)(uVar10 - (longlong)*(int *)((longlong)param_2 + 0xc)) >> 0x3f)
        ;
        lVar2 = lVar2 - ((longlong)(uVar10 - (longlong)*(int *)((longlong)param_3 + 0xc)) >> 0x3f);
      } while (uVar10 < uVar8);
    }
    lVar2 = *param_1;
    lVar12 = bn_sub_words(lVar2,puVar3,*local_d8);
    if (iVar1 != 0) {
      lVar2 = lVar2 - (longlong)puVar3;
      puVar4 = puVar3;
      do {
        *(ulonglong *)(lVar2 + -8 + (longlong)(puVar4 + 1)) =
             ~(uVar9 - lVar12) & *(ulonglong *)(lVar2 + (longlong)puVar4) | uVar9 - lVar12 & *puVar4
        ;
        *puVar4 = 0;
        uVar8 = uVar8 - 1;
        puVar4 = puVar4 + 1;
      } while (uVar8 != 0);
    }
    *(int *)(param_1 + 1) = iVar1;
    *(undefined4 *)(param_1 + 2) = 0;
    if (puVar3 != local_c8) {
      CRYPTO_free(puVar3,"crypto\\bn\\bn_mod.c",0x5a);
    }
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 143d54700 bn_mod_sub_fixed_top body=429 status=ok
// SIG undefined bn_mod_sub_fixed_top(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
bn_mod_sub_fixed_top(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  int iVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong *puVar11;
  
  iVar1 = (int)param_4[1];
  uVar3 = (ulonglong)iVar1;
  lVar4 = bn_wexpand(param_1,iVar1);
  if (lVar4 == 0) {
    return 0;
  }
  puVar2 = (ulonglong *)*param_1;
  puVar5 = puVar2;
  if ((ulonglong *)*param_2 != (ulonglong *)0x0) {
    puVar5 = (ulonglong *)*param_2;
  }
  puVar11 = puVar2;
  if ((ulonglong *)*param_3 != (ulonglong *)0x0) {
    puVar11 = (ulonglong *)*param_3;
  }
  uVar7 = 0;
  lVar10 = 0;
  lVar4 = 0;
  uVar9 = 0;
  if (uVar3 != 0) {
    do {
      uVar6 = (longlong)(uVar7 - (longlong)*(int *)(param_2 + 1)) >> 0x3f & puVar5[lVar10];
      uVar8 = (longlong)(uVar7 - (longlong)*(int *)(param_3 + 1)) >> 0x3f & puVar11[lVar4];
      puVar2[uVar7] = (uVar6 - uVar8) - uVar9;
      if (uVar6 != uVar8) {
        uVar9 = (ulonglong)(uVar6 < uVar8);
      }
      uVar7 = uVar7 + 1;
      lVar10 = lVar10 - ((longlong)(uVar7 - (longlong)*(int *)((longlong)param_2 + 0xc)) >> 0x3f);
      lVar4 = lVar4 - ((longlong)(uVar7 - (longlong)*(int *)((longlong)param_3 + 0xc)) >> 0x3f);
    } while (uVar7 < uVar3);
  }
  lVar4 = *param_4;
  uVar7 = 0;
  if (uVar3 != 0) {
    uVar6 = uVar3;
    puVar5 = puVar2;
    do {
      uVar8 = (*(ulonglong *)((lVar4 - (longlong)puVar2) + (longlong)puVar5) & -uVar9) + uVar7;
      *puVar5 = *puVar5 + uVar8;
      uVar7 = (ulonglong)(uVar8 < uVar7) + (ulonglong)(*puVar5 < uVar8);
      uVar6 = uVar6 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar6 != 0);
  }
  uVar6 = 0;
  if (uVar3 != 0) {
    puVar5 = puVar2;
    do {
      uVar8 = (*(ulonglong *)((longlong)puVar5 + (lVar4 - (longlong)puVar2)) & uVar7 - uVar9) +
              uVar6;
      *puVar5 = *puVar5 + uVar8;
      uVar6 = (ulonglong)(uVar8 < uVar6) + (ulonglong)(*puVar5 < uVar8);
      uVar3 = uVar3 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar3 != 0);
  }
  *(int *)(param_1 + 1) = iVar1;
  *(undefined4 *)(param_1 + 2) = 0;
  return 1;
}



// FUNCTION 143d548b0 EVP_BytesToKey body=663 status=ok
// SIG undefined EVP_BytesToKey(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int EVP_BytesToKey(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  int param_5,uint param_6,undefined1 *param_7,undefined1 *param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auStack_e8 [32];
  int local_c8;
  int local_c4;
  int local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined1 local_98 [64];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_c4 = 0;
  local_c8 = 0;
  local_b8 = param_4;
  local_b0 = param_3;
  local_a8 = param_1;
  iVar1 = IStreamingManager::GetNumWantingResources();
  iVar2 = IStreamingManager::GetNumWantingResourcesID(param_1);
  if (0x40 < iVar1) {
    OPENSSL_die("assertion failed: nkey <= EVP_MAX_KEY_LENGTH","crypto\\evp\\evp_key.c",0x56);
  }
  if (0x10 < iVar2) {
    OPENSSL_die("assertion failed: niv <= EVP_MAX_IV_LENGTH","crypto\\evp\\evp_key.c",0x57);
  }
  if (param_4 != 0) {
    lVar5 = EVP_MD_CTX_new();
    if (lVar5 != 0) {
      iVar3 = EVP_DigestInit_ex(lVar5,param_2,0);
      iVar4 = 0;
      do {
        if (((iVar3 == 0) ||
            ((((local_c0 = iVar4 + 1, iVar4 != 0 &&
               (iVar4 = EVP_DigestUpdate(lVar5,local_98,local_c8), iVar4 == 0)) ||
              (iVar4 = EVP_DigestUpdate(lVar5,local_b8,(longlong)param_5), iVar4 == 0)) ||
             ((local_b0 != 0 && (iVar4 = EVP_DigestUpdate(lVar5,local_b0,8), iVar4 == 0)))))) ||
           (iVar4 = EVP_DigestFinal_ex(lVar5,local_98,&local_c8), iVar4 == 0)) break;
        uVar7 = 1;
        if (1 < param_6) {
          do {
            iVar4 = EVP_DigestInit_ex(lVar5,param_2,0);
            if (((iVar4 == 0) || (iVar4 = EVP_DigestUpdate(lVar5,local_98,local_c8), iVar4 == 0)) ||
               (iVar4 = EVP_DigestFinal_ex(lVar5,local_98), iVar4 == 0)) goto LAB_143d54b0a;
            uVar7 = uVar7 + 1;
          } while (uVar7 < param_6);
        }
        uVar6 = 0;
        while ((iVar4 = (int)uVar6, iVar1 != 0 && (iVar4 != local_c8))) {
          if (param_7 != (undefined1 *)0x0) {
            *param_7 = local_98[uVar6];
            param_7 = param_7 + 1;
          }
          iVar1 = iVar1 + -1;
          uVar6 = (ulonglong)(iVar4 + 1);
        }
        if ((iVar2 != 0) && (iVar4 != local_c8)) {
          do {
            if ((int)uVar6 == local_c8) break;
            if (param_8 != (undefined1 *)0x0) {
              *param_8 = local_98[uVar6];
              param_8 = param_8 + 1;
            }
            uVar6 = (ulonglong)((int)uVar6 + 1);
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        if ((iVar1 == 0) && (iVar2 == 0)) {
          local_c4 = IStreamingManager::GetNumWantingResources(local_a8);
          break;
        }
        iVar3 = EVP_DigestInit_ex(lVar5,param_2,0);
        iVar4 = local_c0;
      } while( true );
    }
LAB_143d54b0a:
    EVP_MD_CTX_free(lVar5);
    FUN_14004ff40(local_98,0x40);
    iVar1 = local_c4;
  }
  return iVar1;
}



// FUNCTION 143d54b50 EVP_get_pw_prompt body=20 status=ok
// SIG undefined EVP_get_pw_prompt(void)

undefined1 * EVP_get_pw_prompt(void)

{
  if (DAT_146bcb980 == '\0') {
    return (undefined1 *)0x0;
  }
  return &DAT_146bcb980;
}



// FUNCTION 143d54b70 EVP_read_pw_string_min body=251 status=ok
// SIG undefined EVP_read_pw_string_min(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
EVP_read_pw_string_min
          (undefined8 param_1,undefined4 param_2,int param_3,undefined1 *param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_288 [32];
  undefined4 local_268;
  int local_260;
  undefined8 local_258;
  undefined1 local_248 [512];
  ulonglong local_48;
  undefined8 uStack_38;
  
  uStack_38 = 0x143d54b83;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  uVar2 = 0xffffffff;
  puVar4 = param_4;
  if ((param_4 == (undefined1 *)0x0) && (puVar4 = &DAT_146bcb980, DAT_146bcb980 == '\0')) {
    puVar4 = param_4;
  }
  lVar3 = UI_new();
  if (lVar3 != 0) {
    if (0x1ff < param_3) {
      param_3 = 0x1ff;
    }
    local_268 = param_2;
    local_260 = param_3;
    iVar1 = UI_add_input_string(lVar3,puVar4,0,param_1);
    if ((-1 < iVar1) &&
       ((param_5 == 0 ||
        (local_268 = param_2, local_260 = param_3, local_258 = param_1,
        iVar1 = UI_add_verify_string(lVar3,puVar4,0,local_248), -1 < iVar1)))) {
      uVar2 = UI_process(lVar3);
      FUN_14004ff40(local_248,0x200);
    }
    UI_free(lVar3);
    return uVar2;
  }
  return 0xffffffff;
}



// FUNCTION 143d54c70 cmac_key_free body=30 status=ok
// SIG undefined cmac_key_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void cmac_key_free(void)

{
  undefined8 uVar1;
  
  uVar1 = FNiagaraEmitterHandle::GetInstance();
  CMAC_CTX_free(uVar1);
  return;
}



// FUNCTION 143d54c90 FUN_143d54c90 body=26 status=ok
// SIG undefined FUN_143d54c90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d54c90(longlong param_1)

{
  DH_free(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 143d54cb0 dh_pub_decode body=339 status=ok
// SIG undefined dh_pub_decode(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dh_pub_decode(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 uVar7;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 *local_18;
  undefined8 local_10;
  
  local_10 = 0x143d54cc5;
  lVar4 = 0;
  iVar1 = X509_PUBKEY_get0_param(0,&local_10,local_res20,&local_20,param_2);
  uVar7 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (iVar1 != 0) {
    X509_ALGOR_get0(0,local_res18,&local_18,local_20);
    if (local_res18[0] == 0x10) {
      local_28 = *(undefined8 *)(local_18 + 2);
      if (*(undefined **)(param_1 + 0x10) == &DAT_145d87e10) {
        lVar3 = d2i_DHxparams();
      }
      else {
        lVar3 = d2i_DHparams(0,&local_28,*local_18);
      }
      if (lVar3 == 0) {
        uVar2 = 0x47;
        uVar6 = 0x68;
      }
      else {
        lVar4 = d2i_ASN1_INTEGER(0,&local_10,local_res20[0]);
        if (lVar4 == 0) {
          uVar2 = 0x4c;
          uVar6 = 0x68;
        }
        else {
          lVar5 = ASN1_INTEGER_to_BN(lVar4,0);
          *(longlong *)(lVar3 + 0x20) = lVar5;
          if (lVar5 != 0) {
            ASN1_BIT_STRING_free(lVar4);
            EVP_PKEY_assign(param_1,**(undefined4 **)(param_1 + 0x10),lVar3);
            return 1;
          }
          uVar2 = 0x52;
          uVar6 = 0x6d;
        }
      }
    }
    else {
      uVar2 = 0x3e;
      uVar6 = 0x69;
      lVar3 = lVar4;
    }
    ERR_put_error(5,0x6c,uVar6,"crypto\\dh\\dh_ameth.c",CONCAT44(uVar7,uVar2));
    ASN1_BIT_STRING_free(lVar4);
    DH_free(lVar3);
  }
  return 0;
}



// FUNCTION 143d54e10 dh_pub_encode body=313 status=ok
// SIG undefined dh_pub_encode(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dh_pub_encode(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 local_res10;
  undefined8 in_stack_ffffffffffffffd8;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar6 = 0x143d54e28;
  lVar3 = *(longlong *)(param_2 + 0x28);
  local_res10 = 0;
  piVar2 = (int *)ASN1_STRING_new();
  if (piVar2 == (int *)0x0) {
    uVar4 = CONCAT44(uVar5,0x6e);
  }
  else {
    if (*(undefined **)(param_2 + 0x10) == &DAT_145d87e10) {
      iVar1 = i2d_DHxparams();
    }
    else {
      iVar1 = i2d_ASN1_INTEGER(lVar3,piVar2 + 2);
    }
    *piVar2 = iVar1;
    if (iVar1 < 1) {
      uVar4 = CONCAT44(uVar5,0x73);
    }
    else {
      lVar3 = BN_to_ASN1_INTEGER(*(undefined8 *)(lVar3 + 0x20),0);
      if (lVar3 == 0) goto LAB_143d54e6b;
      iVar1 = i2d_ASN1_INTEGER(lVar3,&local_res10);
      ASN1_BIT_STRING_free(lVar3);
      if (0 < iVar1) {
        uVar6 = OBJ_nid2obj(**(undefined4 **)(param_2 + 0x10));
        iVar1 = X509_PUBKEY_set0_param(param_1,uVar6,0x10,piVar2,local_res10,iVar1);
        if (iVar1 != 0) {
          return 1;
        }
        goto LAB_143d54e6b;
      }
      uVar4 = CONCAT44(uVar5,0x81);
    }
  }
  ERR_put_error(5,0x6d,0x41,"crypto\\dh\\dh_ameth.c",uVar4,uVar6);
LAB_143d54e6b:
  CRYPTO_free(local_res10,"crypto\\dh\\dh_ameth.c",0x8a);
  ASN1_STRING_free(piVar2);
  return 0;
}



// FUNCTION 143d54f50 dh_priv_decode body=357 status=ok
// SIG undefined dh_priv_decode(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dh_priv_decode(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined8 uVar6;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_18 [8];
  undefined4 *local_10;
  undefined4 uVar7;
  
  local_10 = (undefined4 *)0x143d54f65;
  lVar2 = 0;
  iVar1 = PKCS8_pkey_get0(0,local_18,local_res20,&local_20,param_2);
  uVar7 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (iVar1 == 0) {
    return 0;
  }
  X509_ALGOR_get0(0,local_res18,&local_10,local_20);
  lVar3 = lVar2;
  if ((local_res18[0] == 0x10) &&
     (lVar2 = d2i_ASN1_INTEGER(0,local_18,local_res20[0]), lVar3 = 0, lVar2 != 0)) {
    local_28 = *(undefined8 *)(local_10 + 2);
    if (*(undefined **)(param_1 + 0x10) == &DAT_145d87e10) {
      lVar3 = d2i_DHxparams();
    }
    else {
      lVar3 = d2i_DHparams(0,&local_28,*local_10);
    }
    if (lVar3 == 0) goto LAB_143d55071;
    lVar4 = BN_secure_new();
    *(longlong *)(lVar3 + 0x28) = lVar4;
    if ((lVar4 != 0) && (lVar4 = ASN1_INTEGER_to_BN(lVar2,lVar4), lVar4 != 0)) {
      iVar1 = DH_generate_key(lVar3);
      if (iVar1 != 0) {
        EVP_PKEY_assign(param_1,**(undefined4 **)(param_1 + 0x10),lVar3);
        ASN1_STRING_clear_free(lVar2);
        return 1;
      }
      goto LAB_143d55093;
    }
    uVar6 = CONCAT44(uVar7,0xb5);
    uVar5 = 0x6a;
  }
  else {
LAB_143d55071:
    uVar6 = CONCAT44(uVar7,0xc3);
    uVar5 = 0x72;
  }
  ERR_put_error(5,0x6e,uVar5,"crypto\\dh\\dh_ameth.c",uVar6);
LAB_143d55093:
  DH_free(lVar3);
  ASN1_STRING_clear_free(lVar2);
  return 0;
}



// FUNCTION 143d550c0 dh_priv_encode body=342 status=ok
// SIG undefined dh_priv_encode(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dh_priv_encode(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 local_res18 [2];
  undefined8 in_stack_ffffffffffffffc8;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  local_res18[0] = 0;
  piVar2 = (int *)ASN1_STRING_new();
  if (piVar2 == (int *)0x0) {
    uVar4 = CONCAT44(uVar5,0xd4);
LAB_143d550fa:
    uVar5 = 0x41;
  }
  else {
    if (*(undefined **)(param_2 + 0x10) == &DAT_145d87e10) {
      iVar1 = i2d_DHxparams();
    }
    else {
      iVar1 = i2d_ASN1_INTEGER(*(undefined8 *)(param_2 + 0x28),piVar2 + 2);
    }
    *piVar2 = iVar1;
    if (iVar1 < 1) {
      uVar4 = CONCAT44(uVar5,0xda);
      goto LAB_143d550fa;
    }
    piVar2[1] = 0x10;
    lVar3 = BN_to_ASN1_INTEGER(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x28),0);
    if (lVar3 != 0) {
      uVar5 = i2d_ASN1_INTEGER(lVar3,local_res18);
      ASN1_STRING_clear_free(lVar3);
      uVar4 = OBJ_nid2obj(**(undefined4 **)(param_2 + 0x10));
      iVar1 = PKCS8_pkey_set0(param_1,uVar4,0,0x10,piVar2,local_res18[0],uVar5);
      if (iVar1 != 0) {
        return 1;
      }
      goto LAB_143d551cd;
    }
    uVar4 = CONCAT44(uVar5,0xe3);
    uVar5 = 0x6a;
  }
  ERR_put_error(5,0x6f,uVar5,"crypto\\dh\\dh_ameth.c",uVar4);
LAB_143d551cd:
  CRYPTO_free(local_res18[0],"crypto\\dh\\dh_ameth.c",0xf3);
  ASN1_STRING_free(piVar2);
  ASN1_STRING_clear_free(0);
  return 0;
}



// FUNCTION 143d55220 dh_param_decode body=119 status=ok
// SIG undefined dh_param_decode(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dh_param_decode(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143d5522c;
  if (*(undefined **)(param_1 + 0x10) == &DAT_145d87e10) {
    lVar1 = d2i_DHxparams(0);
  }
  else {
    lVar1 = d2i_DHparams(0);
  }
  if (lVar1 == 0) {
    ERR_put_error(5,0x6b,5,"crypto\\dh\\dh_ameth.c",0xff,uVar2);
    return 0;
  }
  EVP_PKEY_assign(param_1,**(undefined4 **)(param_1 + 0x10),lVar1);
  return 1;
}



// FUNCTION 143d552a0 dh_param_encode body=51 status=ok
// SIG undefined dh_param_encode(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void dh_param_encode(longlong param_1)

{
  if (*(undefined **)(param_1 + 0x10) == &DAT_145d87e10) {
    i2d_DHxparams();
    return;
  }
  i2d_ASN1_INTEGER(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 143d552e0 FUN_143d552e0 body=26 status=ok
// SIG undefined FUN_143d552e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d552e0(longlong param_1)

{
  DH_size(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 143d55300 dh_bits body=30 status=ok
// SIG undefined dh_bits(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void dh_bits(longlong param_1)

{
  BN_num_bits(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 8));
  return;
}



// FUNCTION 143d55320 FUN_143d55320 body=26 status=ok
// SIG undefined FUN_143d55320(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d55320(longlong param_1)

{
  DH_security_bits(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 143d55340 dh_cmp_parameters body=142 status=ok
// SIG undefined dh_cmp_parameters(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dh_cmp_parameters(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = BN_cmp(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 8),
                 *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 8));
  if ((iVar1 != 0) ||
     (iVar1 = BN_cmp(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x10),
                     *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x10)), iVar1 != 0)) {
    return 0;
  }
  if ((*(undefined **)(param_1 + 0x10) == &DAT_145d87e10) &&
     (iVar1 = BN_cmp(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x40),
                     *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x40)), iVar1 != 0)) {
    return 0;
  }
  return 1;
}



// FUNCTION 143d553d0 dh_copy_parameters body=99 status=ok
// SIG undefined dh_copy_parameters(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void dh_copy_parameters(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 == 0) {
    lVar1 = DH_new();
    *(longlong *)(param_1 + 0x28) = lVar1;
    if (lVar1 == 0) {
      return;
    }
  }
  int_dh_param_copy(lVar1,*(undefined8 *)(param_2 + 0x28),
                    *(undefined **)(param_2 + 0x10) == &DAT_145d87e10);
  return;
}



// FUNCTION 143d55460 dh_pub_cmp body=167 status=ok
// SIG undefined dh_pub_cmp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dh_pub_cmp(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = BN_cmp(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 8),
                 *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 8));
  if ((iVar1 == 0) &&
     (iVar1 = BN_cmp(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x10),
                     *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x10)), iVar1 == 0)) {
    if ((*(undefined **)(param_1 + 0x10) == &DAT_145d87e10) &&
       (iVar1 = BN_cmp(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x40),
                       *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x40)), iVar1 != 0)) {
      return 0;
    }
    iVar1 = BN_cmp(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x20),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x20));
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143d55510 dh_param_print body=29 status=ok
// SIG undefined dh_param_print(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void dh_param_print(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  do_dh_print(param_1,*(undefined8 *)(param_2 + 0x28),param_3,0);
  return;
}



// FUNCTION 143d55530 dh_public_print body=30 status=ok
// SIG undefined dh_public_print(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void dh_public_print(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  do_dh_print(param_1,*(undefined8 *)(param_2 + 0x28),param_3,1);
  return;
}



// FUNCTION 143d55550 dh_private_print body=30 status=ok
// SIG undefined dh_private_print(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void dh_private_print(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  do_dh_print(param_1,*(undefined8 *)(param_2 + 0x28),param_3,2);
  return;
}



// FUNCTION 143d55570 dh_pkey_ctrl body=356 status=ok
// SIG undefined dh_pkey_ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dh_pkey_ctrl(undefined8 param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar5;
  longlong local_18;
  longlong local_10;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  local_10 = 0x143d5557c;
  if (param_2 != 7) {
    if (param_2 != 8) {
      return 0xfffffffe;
    }
    *param_4 = 1;
    return 1;
  }
  if (param_3 != 1) {
    if (param_3 != 0) {
      return 0xfffffffe;
    }
    uVar4 = dh_cms_encrypt(param_4);
    return uVar4;
  }
  lVar2 = CMS_RecipientInfo_get0_pkey_ctx(param_4);
  if (lVar2 == 0) {
    return 0;
  }
  lVar3 = FUniqueNetIdString::GetBytes(lVar2);
  if (lVar3 == 0) {
    uVar5 = 0;
    iVar1 = CMS_RecipientInfo_kari_get0_orig_id(param_4,&local_18,&local_10,0,0,0);
    if (iVar1 == 0) {
      return 0;
    }
    if (local_18 == 0) {
      return 0;
    }
    if (local_10 == 0) {
      return 0;
    }
    iVar1 = dh_cms_set_peerkey(lVar2);
    if (iVar1 == 0) {
      ERR_put_error(5,0x72,0x6f,"crypto\\dh\\dh_ameth.c",CONCAT44(uVar5,0x2fa));
      return 0;
    }
  }
  iVar1 = dh_cms_set_shared_info(lVar2,param_4);
  if (iVar1 != 0) {
    return 1;
  }
  ERR_put_error(5,0x72,0x71,"crypto\\dh\\dh_ameth.c",CONCAT44(uVar5,0x300));
  return 0;
}



// FUNCTION 143d556e0 dh_pkey_public_check body=72 status=ok
// SIG undefined dh_pkey_public_check(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dh_pkey_public_check(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x20) == 0) {
    ERR_put_error(5,0x7c,0x7d,"crypto\\dh\\dh_ameth.c",0x205);
    return 0;
  }
  uVar1 = DH_check_pub_key_ex();
  return uVar1;
}



// FUNCTION 143d55730 FUN_143d55730 body=26 status=ok
// SIG undefined FUN_143d55730(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d55730(longlong param_1)

{
  DH_check_ex(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 143d55750 dh_cms_encrypt body=1011 status=ok
// SIG undefined dh_cms_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * dh_cms_encrypt(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  WriteBytesMem *this;
  uchar *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong local_res10;
  undefined8 local_res18;
  longlong local_res20;
  ulonglong uVar15;
  undefined4 uVar16;
  longlong local_58;
  longlong local_50;
  longlong local_48 [2];
  
  puVar11 = (undefined8 *)0x0;
  puVar12 = (undefined8 *)0x0;
  iVar5 = 0;
  puVar14 = (undefined8 *)0x0;
  local_res10 = 0;
  this = (WriteBytesMem *)CMS_RecipientInfo_get0_pkey_ctx();
  if (this == (WriteBytesMem *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar6 = AK::WriteBytesMem::Bytes(this);
  uVar3 = 0;
  iVar1 = CMS_RecipientInfo_kari_get0_orig_id(param_1,&local_res18,&local_res20,0,0,0);
  puVar13 = puVar11;
  puVar10 = puVar11;
  if (iVar1 == 0) goto LAB_143d55b11;
  X509_ALGOR_get0(local_48,0,0,local_res18);
  lVar7 = OBJ_nid2obj(0);
  if (local_48[0] == lVar7) {
    lVar7 = BN_to_ASN1_INTEGER(*(undefined8 *)(*(longlong *)(puVar6 + 0x28) + 0x20),0);
    if (lVar7 == 0) goto LAB_143d55b11;
    iVar1 = i2d_ASN1_INTEGER(lVar7,&local_res10);
    ASN1_BIT_STRING_free(lVar7);
    puVar10 = puVar14;
    if (iVar1 < 1) goto LAB_143d55b11;
    ASN1_STRING_set0(local_res20,local_res10,iVar1);
    *(uint *)(local_res20 + 0x10) = *(uint *)(local_res20 + 0x10) & 0xfffffff0;
    *(uint *)(local_res20 + 0x10) = *(uint *)(local_res20 + 0x10) | 8;
    local_res10 = 0;
    uVar8 = OBJ_nid2obj(0x398);
    X509_ALGOR_set0(local_res18,uVar8,0xffffffff);
  }
  uVar15 = CONCAT44(uVar3,0xfffffffe);
  iVar1 = EVP_PKEY_CTX_ctrl(this,0x398,0x400,0x1006,uVar15,0);
  puVar10 = puVar14;
  if (0 < iVar1) {
    uVar15 = uVar15 & 0xffffffff00000000;
    iVar2 = EVP_PKEY_CTX_ctrl(this,0x398,0x400,0x1008,uVar15,&local_58);
    puVar13 = puVar12;
    if (iVar2 != 0) {
      if (iVar1 == 1) {
        uVar15 = CONCAT44((int)(uVar15 >> 0x20),2);
        iVar1 = EVP_PKEY_CTX_ctrl(this,0x398,0x400,0x1006,uVar15,0);
        if (iVar1 < 1) goto LAB_143d55b11;
      }
      else if (iVar1 != 2) goto LAB_143d55b11;
      if (local_58 == 0) {
        local_58 = EVP_sha1();
        uVar15 = uVar15 & 0xffffffff00000000;
        iVar1 = EVP_PKEY_CTX_ctrl(this,0x398,0x400,0x1007,uVar15,local_58);
        if (iVar1 < 1) goto LAB_143d55b11;
      }
      else {
        iVar1 = FRollingHash::GetWindowSize();
        if (iVar1 != 0x40) goto LAB_143d55b11;
      }
      iVar1 = CMS_RecipientInfo_kari_get0_alg(param_1,&local_res18,&local_50);
      if (iVar1 != 0) {
        uVar8 = CMS_RecipientInfo_kari_get0_ctx(param_1);
        uVar9 = FHardwareCursor::GetHandle(uVar8);
        uVar3 = FUN_143cf6400(uVar9);
        uVar9 = OBJ_nid2obj(uVar3);
        uVar15 = uVar15 & 0xffffffff00000000;
        iVar1 = EVP_PKEY_CTX_ctrl(this,0x398,0x400,0x100d,uVar15,uVar9);
        uVar16 = (undefined4)(uVar15 >> 0x20);
        if (0 < iVar1) {
          uVar4 = UVariantSet::GetNumVariants(uVar8);
          puVar10 = (undefined8 *)X509_ALGOR_new();
          if (puVar10 != (undefined8 *)0x0) {
            uVar9 = OBJ_nid2obj(uVar3);
            *puVar10 = uVar9;
            lVar7 = ASN1_TYPE_new();
            puVar10[1] = lVar7;
            if ((lVar7 != 0) && (iVar1 = EVP_CIPHER_param_to_asn1(uVar8,lVar7), 0 < iVar1)) {
              iVar1 = ASN1_TYPE_get(puVar10[1]);
              if (iVar1 == 0) {
                ASN1_TYPE_free(puVar10[1]);
                puVar10[1] = 0;
              }
              uVar8 = CONCAT44(uVar16,uVar4);
              iVar1 = EVP_PKEY_CTX_ctrl(this,0x398,0x400,0x1009,uVar8,0);
              uVar3 = (undefined4)((ulonglong)uVar8 >> 0x20);
              if (0 < iVar1) {
                if (local_50 != 0) {
                  iVar5 = FRollingHash::GetWindowSize();
                  uVar8 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
                          ::GetBoundProgramCounterForTimerManager(local_50);
                  puVar11 = (undefined8 *)
                            CRYPTO_memdup(uVar8,(longlong)iVar5,"crypto\\dh\\dh_ameth.c",0x36a);
                  if (puVar11 == (undefined8 *)0x0) goto LAB_143d55b11;
                }
                iVar5 = EVP_PKEY_CTX_ctrl(this,0x398,0x400,0x100b,CONCAT44(uVar3,iVar5),puVar11);
                if (0 < iVar5) {
                  local_res10 = 0;
                  iVar5 = FUN_143d33db0(puVar10,&local_res10);
                  if (((local_res10 != 0) && (iVar5 != 0)) &&
                     (lVar7 = ASN1_STRING_new(), lVar7 != 0)) {
                    ASN1_STRING_set0(lVar7,local_res10,iVar5);
                    local_res10 = 0;
                    uVar8 = OBJ_nid2obj(0xf5);
                    X509_ALGOR_set0(local_res18,uVar8,0x10,lVar7);
                    puVar13 = (undefined8 *)0x1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_143d55b11:
  CRYPTO_free(local_res10,"crypto\\dh\\dh_ameth.c",0x386);
  X509_ALGOR_free(puVar10);
  return puVar13;
}



// FUNCTION 143d55b50 dh_cms_set_peerkey body=462 status=ok
// SIG undefined dh_cms_set_peerkey(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong dh_cms_set_peerkey(WriteBytesMem *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int local_res20 [2];
  undefined8 local_48;
  longlong local_40;
  undefined1 local_38 [8];
  undefined8 uStack_30;
  
  uStack_30 = 0x143d55b67;
  lVar8 = 0;
  lVar10 = 0;
  lVar7 = 0;
  X509_ALGOR_get0(&local_48,local_res20,local_38,param_2);
  iVar2 = OBJ_obj2nid(local_48);
  lVar6 = lVar8;
  lVar4 = lVar8;
  lVar9 = lVar8;
  lVar5 = lVar8;
  if ((((iVar2 == 0x398) && (lVar6 = 0, lVar4 = lVar7, lVar5 = lVar10, local_res20[0] != 5)) &&
      (piVar3 = (int *)AK::WriteBytesMem::Bytes(param_1), lVar6 = lVar8, lVar4 = lVar8,
      lVar5 = lVar8, piVar3 != (int *)0x0)) &&
     (lVar6 = 0, lVar4 = lVar7, lVar5 = lVar10, *piVar3 == 0x398)) {
    uVar1 = *(undefined8 *)(piVar3 + 10);
    lVar4 = DH_new();
    lVar6 = lVar8;
    if ((lVar4 != 0) &&
       (iVar2 = int_dh_param_copy(lVar4,uVar1,0xffffffff), lVar6 = lVar4, iVar2 == 0)) {
      DH_free(lVar4);
      lVar6 = lVar8;
    }
    iVar2 = FRollingHash::GetWindowSize(param_3);
    local_40 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
               ::GetBoundProgramCounterForTimerManager(param_3);
    lVar4 = lVar8;
    lVar5 = lVar8;
    if ((local_40 != 0) && (lVar4 = lVar7, lVar5 = lVar10, iVar2 != 0)) {
      lVar5 = d2i_ASN1_INTEGER(0,&local_40,iVar2);
      if (lVar5 == 0) {
        ERR_put_error(5,0x73,0x68,"crypto\\dh\\dh_ameth.c",0x285);
      }
      else {
        lVar4 = ASN1_INTEGER_to_BN(lVar5,0);
        *(longlong *)(lVar6 + 0x20) = lVar4;
        lVar9 = 0;
        if (lVar4 == 0) {
          ERR_put_error(5,0x73,0x6d,"crypto\\dh\\dh_ameth.c",0x28b);
          lVar4 = lVar7;
        }
        else {
          lVar4 = EVP_PKEY_new();
          if (lVar4 != 0) {
            EVP_PKEY_assign(lVar4,**(undefined4 **)(piVar3 + 4),lVar6);
            iVar2 = EVP_PKEY_derive_set_peer(param_1,lVar4);
            lVar9 = 0;
            lVar6 = lVar8;
            if (0 < iVar2) {
              lVar9 = 1;
            }
          }
        }
      }
    }
  }
  ASN1_BIT_STRING_free(lVar5);
  EVP_PKEY_free(lVar4);
  DH_free(lVar6);
  return lVar9;
}



// FUNCTION 143d55d20 dh_cms_set_shared_info body=688 status=ok
// SIG undefined dh_cms_set_shared_info(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * dh_cms_set_shared_info(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *local_res18;
  longlong local_res20;
  undefined8 in_stack_ffffffffffffffb8;
  ulonglong uVar16;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uStack_30 = 0x143d55d37;
  puVar10 = (undefined8 *)0x0;
  puVar11 = (undefined8 *)0x0;
  puVar15 = (undefined8 *)0x0;
  puVar13 = (undefined8 *)0x0;
  iVar5 = 0;
  iVar1 = CMS_RecipientInfo_kari_get0_alg(param_2,&local_res18,&local_res20);
  puVar12 = puVar10;
  puVar14 = puVar10;
  puVar7 = puVar10;
  if (iVar1 != 0) {
    iVar1 = OBJ_obj2nid(*local_res18);
    puVar14 = puVar13;
    puVar7 = puVar15;
    if (iVar1 == 0xf5) {
      uVar16 = CONCAT44(uVar2,2);
      iVar1 = EVP_PKEY_CTX_ctrl(param_1,0x398,0x400,0x1006,uVar16,0);
      if (0 < iVar1) {
        uVar6 = EVP_sha1();
        iVar1 = EVP_PKEY_CTX_ctrl(param_1,0x398,0x400,0x1007,uVar16 & 0xffffffff00000000,uVar6);
        puVar12 = puVar11;
        if ((0 < iVar1) && (*(int *)local_res18[1] == 0x10)) {
          local_38 = *(undefined8 *)(*(longlong *)((int *)local_res18[1] + 2) + 8);
          puVar7 = (undefined8 *)X509_ALGOR_free(0,&local_38,**(undefined4 **)(local_res18[1] + 8));
          if ((puVar7 != (undefined8 *)0x0) &&
             (lVar8 = CMS_RecipientInfo_kari_get0_ctx(param_2), lVar8 != 0)) {
            uVar2 = OBJ_obj2nid(*puVar7);
            uVar6 = OBJ_nid2sn(uVar2);
            lVar9 = EVP_get_cipherbyname(uVar6);
            puVar12 = puVar10;
            puVar14 = puVar10;
            if ((lVar9 != 0) &&
               (uVar3 = TResourceArray<unsigned_char,0>::GetResourceDataSize(lVar9),
               puVar14 = puVar13, (uVar3 & 0xf0007) == 0x10002)) {
              uVar2 = 0;
              iVar1 = EVP_EncryptInit_ex(lVar8,lVar9,0,0,0);
              if ((iVar1 != 0) &&
                 (iVar1 = EVP_CIPHER_asn1_to_param(lVar8,puVar7[1]), puVar12 = puVar11, 0 < iVar1))
              {
                uVar4 = UVariantSet::GetNumVariants(lVar8);
                uVar16 = CONCAT44(uVar2,uVar4);
                iVar1 = EVP_PKEY_CTX_ctrl(param_1,0x398,0x400,0x1009,uVar16,0);
                if (0 < iVar1) {
                  uVar2 = FUN_143cf6400(lVar9);
                  uVar6 = OBJ_nid2obj(uVar2);
                  uVar16 = uVar16 & 0xffffffff00000000;
                  iVar1 = EVP_PKEY_CTX_ctrl(param_1,0x398,0x400,0x100d,uVar16,uVar6);
                  uVar2 = (undefined4)(uVar16 >> 0x20);
                  if (0 < iVar1) {
                    if (local_res20 != 0) {
                      iVar5 = FRollingHash::GetWindowSize();
                      uVar6 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
                              ::GetBoundProgramCounterForTimerManager(local_res20);
                      puVar10 = (undefined8 *)
                                CRYPTO_memdup(uVar6,(longlong)iVar5,"crypto\\dh\\dh_ameth.c",0x2da);
                      puVar14 = puVar10;
                      if (puVar10 == (undefined8 *)0x0) goto LAB_143d55f9f;
                    }
                    iVar1 = EVP_PKEY_CTX_ctrl(param_1,0x398,0x400,0x100b,CONCAT44(uVar2,iVar5),
                                              puVar10);
                    puVar14 = puVar10;
                    if (0 < iVar1) {
                      puVar14 = (undefined8 *)0x0;
                      puVar12 = (undefined8 *)0x1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      ERR_put_error(5,0x74,0x70,"crypto\\dh\\dh_ameth.c",CONCAT44(uVar2,0x2b2));
    }
  }
LAB_143d55f9f:
  X509_ALGOR_free(puVar7);
  CRYPTO_free(puVar14,"crypto\\dh\\dh_ameth.c",0x2e6);
  return puVar12;
}



// FUNCTION 143d55fd0 do_dh_print body=805 status=ok
// SIG undefined do_dh_print(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 do_dh_print(undefined8 param_1,longlong param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined4 uVar9;
  char *pcVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined4 uVar10;
  
  uVar13 = 0x143d55fec;
  uVar6 = 0;
  uVar9 = 7;
  uVar10 = 7;
  if (param_4 == 2) {
    lVar8 = *(longlong *)(param_2 + 0x20);
    uVar12 = *(ulonglong *)(param_2 + 0x28);
  }
  else {
    uVar12 = 0;
    if (param_4 < 1) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(longlong *)(param_2 + 0x20);
      uVar12 = uVar6;
    }
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    if (param_4 != 2) {
      if (0 < param_4) {
LAB_143d5607d:
        if (lVar8 == 0) goto LAB_143d56035;
      }
      if (param_4 == 2) {
        pcVar11 = "DH Private-Key";
      }
      else {
        pcVar11 = "DH Public-Key";
        if (param_4 != 1) {
          pcVar11 = "DH Parameters";
        }
      }
      BIO_indent(param_1,param_3,0x80);
      uVar1 = BN_num_bits(*(undefined8 *)(param_2 + 8));
      iVar2 = BIO_printf(param_1,"%s: (%d bit)\n",pcVar11,uVar1);
      if (0 < iVar2) {
        iVar4 = param_3 + 4;
        iVar2 = ASN1_bn_print(param_1,"private-key:",uVar12,0,iVar4);
        if (((((iVar2 != 0) &&
              (iVar2 = ASN1_bn_print(param_1,"public-key:",lVar8,0,iVar4), iVar2 != 0)) &&
             (iVar2 = ASN1_bn_print(param_1,"prime:",*(undefined8 *)(param_2 + 8),0,iVar4),
             uVar9 = uVar10, iVar2 != 0)) &&
            (iVar2 = ASN1_bn_print(param_1,"generator:",*(undefined8 *)(param_2 + 0x10),0,iVar4),
            iVar2 != 0)) &&
           (((*(longlong *)(param_2 + 0x40) == 0 ||
             (iVar2 = ASN1_bn_print(param_1,"subgroup order:",*(longlong *)(param_2 + 0x40),0,iVar4)
             , iVar2 != 0)) &&
            ((*(longlong *)(param_2 + 0x48) == 0 ||
             (iVar2 = ASN1_bn_print(param_1,"subgroup factor:",*(longlong *)(param_2 + 0x48),0,iVar4
                                   ), iVar2 != 0)))))) {
          if (*(longlong *)(param_2 + 0x50) != 0) {
            BIO_indent(param_1,iVar4,0x80);
            BIO_puts(param_1,"seed:");
            uVar12 = uVar6;
            if (0 < *(int *)(param_2 + 0x58)) {
              do {
                iVar2 = (int)uVar6;
                if ((iVar2 == (iVar2 / 0xf) * 0xf) &&
                   ((iVar3 = BIO_puts(param_1,&DAT_143fc48d8), iVar3 < 1 ||
                    (iVar3 = BIO_indent(param_1,param_3 + 8,0x80), iVar3 == 0))))
                goto LAB_143d5603b;
                puVar7 = &DAT_145cc3708;
                uVar5 = iVar2 + 1;
                uVar6 = (ulonglong)uVar5;
                if (uVar5 == *(uint *)(param_2 + 0x58)) {
                  puVar7 = (undefined2 *)&DAT_143f3f584;
                }
                iVar2 = BIO_printf(param_1,"%02x%s",
                                   *(undefined1 *)(*(longlong *)(param_2 + 0x50) + uVar12),puVar7);
                if (iVar2 < 1) goto LAB_143d5603b;
                uVar12 = uVar12 + 1;
              } while ((int)uVar5 < *(int *)(param_2 + 0x58));
            }
            iVar2 = BIO_write(param_1,&DAT_143fc48d8,1);
            if (iVar2 < 1) {
              return 0;
            }
          }
          if ((*(longlong *)(param_2 + 0x60) == 0) ||
             (iVar2 = ASN1_bn_print(param_1,"counter:",*(longlong *)(param_2 + 0x60),0,iVar4),
             iVar2 != 0)) {
            if (*(int *)(param_2 + 0x18) == 0) {
              return 1;
            }
            BIO_indent(param_1,iVar4,0x80);
            iVar2 = BIO_printf(param_1,"recommended-private-length: %d bits\n",
                               *(undefined4 *)(param_2 + 0x18));
            if (0 < iVar2) {
              return 1;
            }
          }
        }
      }
      goto LAB_143d5603b;
    }
    if (uVar12 != 0) goto LAB_143d5607d;
  }
LAB_143d56035:
  uVar9 = 0x43;
LAB_143d5603b:
  ERR_put_error(5,100,uVar9,"crypto\\dh\\dh_ameth.c",0x157,uVar13);
  return 0;
}



// FUNCTION 143d56300 int_dh_bn_cpy body=118 status=ok
// SIG undefined int_dh_bn_cpy(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 int_dh_bn_cpy(longlong *param_1,longlong param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = BN_get_flags(param_2,2);
    if (iVar1 != 0) {
      iVar1 = BN_get_flags(param_2,1);
      if (iVar1 == 0) goto LAB_143d5631e;
    }
    param_2 = BN_dup(param_2);
    if (param_2 == 0) {
      return 0;
    }
  }
LAB_143d5631e:
  BN_clear_free(*param_1);
  *param_1 = param_2;
  return 1;
}



// FUNCTION 143d56380 int_dh_param_copy body=290 status=ok
// SIG undefined int_dh_param_copy(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 int_dh_param_copy(longlong param_1,longlong param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (param_3 == 0xffffffff) {
    param_3 = (uint)(*(longlong *)(param_2 + 0x40) != 0);
  }
  iVar1 = int_dh_bn_cpy(param_1 + 8,*(undefined8 *)(param_2 + 8));
  if ((iVar1 != 0) &&
     (iVar1 = int_dh_bn_cpy(param_1 + 0x10,*(undefined8 *)(param_2 + 0x10)), iVar1 != 0)) {
    if (param_3 == 0) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
      return 1;
    }
    iVar1 = int_dh_bn_cpy(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40));
    if ((iVar1 != 0) &&
       (iVar1 = int_dh_bn_cpy(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48)), iVar1 != 0)) {
      CRYPTO_free(*(undefined8 *)(param_1 + 0x50),"crypto\\dh\\dh_ameth.c",0x197);
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
      if (*(longlong *)(param_2 + 0x50) == 0) {
        return 1;
      }
      lVar2 = CRYPTO_memdup(*(longlong *)(param_2 + 0x50),(longlong)*(int *)(param_2 + 0x58),
                            "crypto\\dh\\dh_ameth.c",0x19b);
      *(longlong *)(param_1 + 0x50) = lVar2;
      if (lVar2 != 0) {
        *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143d564b0 dsa_pub_decode body=351 status=ok
// SIG undefined dsa_pub_decode(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dsa_pub_decode(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 uVar7;
  undefined8 local_28;
  undefined4 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0x143d564c5;
  lVar5 = 0;
  iVar1 = X509_PUBKEY_get0_param(0,&local_10,local_res20,&local_28,param_2);
  uVar7 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (iVar1 == 0) {
    return 0;
  }
  X509_ALGOR_get0(0,local_res18,&local_20,local_28);
  if (local_res18[0] == 0x10) {
    local_18 = *(undefined8 *)(local_20 + 2);
    lVar3 = d2i_DSAparams(0,&local_18,*local_20);
    if (lVar3 == 0) {
      uVar2 = 0x2a;
      uVar6 = 0x68;
      lVar5 = 0;
      goto LAB_143d565a8;
    }
  }
  else {
    if ((local_res18[0] != 5) && (local_res18[0] != -1)) {
      uVar2 = 0x34;
      uVar6 = 0x69;
      lVar3 = 0;
      goto LAB_143d565a8;
    }
    lVar3 = DSA_new();
    if (lVar3 == 0) {
      uVar2 = 0x30;
      uVar6 = 0x41;
      goto LAB_143d565a8;
    }
  }
  lVar5 = d2i_ASN1_INTEGER(0,&local_10,local_res20[0]);
  if (lVar5 == 0) {
    uVar2 = 0x39;
    uVar6 = 0x68;
  }
  else {
    lVar4 = ASN1_INTEGER_to_BN(lVar5,0);
    *(longlong *)(lVar3 + 0x20) = lVar4;
    if (lVar4 != 0) {
      ASN1_BIT_STRING_free(lVar5);
      EVP_PKEY_assign(param_1,0x74,lVar3);
      return 1;
    }
    uVar2 = 0x3e;
    uVar6 = 0x6c;
  }
LAB_143d565a8:
  ERR_put_error(10,0x75,uVar6,"crypto\\dsa\\dsa_ameth.c",CONCAT44(uVar7,uVar2));
  ASN1_BIT_STRING_free(lVar5);
  DSA_free(lVar3);
  return 0;
}



// FUNCTION 143d56610 dsa_pub_encode body=357 status=ok
// SIG undefined dsa_pub_encode(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dsa_pub_encode(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 local_res10;
  undefined8 in_stack_ffffffffffffffd8;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar7 = 0x143d56628;
  lVar3 = *(longlong *)(param_2 + 0x28);
  piVar2 = (int *)0x0;
  local_res10 = 0;
  if ((((*(int *)(param_2 + 0x30) == 0) || (*(longlong *)(lVar3 + 8) == 0)) ||
      (*(longlong *)(lVar3 + 0x10) == 0)) || (*(longlong *)(lVar3 + 0x18) == 0)) {
    uVar4 = 0xffffffff;
LAB_143d566e9:
    lVar3 = BN_to_ASN1_INTEGER(*(undefined8 *)(lVar3 + 0x20),0);
    if (lVar3 == 0) {
      uVar5 = CONCAT44(uVar6,0x6a);
    }
    else {
      iVar1 = i2d_ASN1_INTEGER(lVar3,&local_res10);
      ASN1_BIT_STRING_free(lVar3);
      if (0 < iVar1) {
        lVar3 = OBJ_nid2obj(0x74);
        if ((lVar3 != 0) &&
           (iVar1 = X509_PUBKEY_set0_param(param_1,lVar3,uVar4,piVar2,local_res10,iVar1), iVar1 != 0
           )) {
          return 1;
        }
        goto LAB_143d5668d;
      }
      uVar5 = CONCAT44(uVar6,0x72);
    }
  }
  else {
    piVar2 = (int *)ASN1_STRING_new();
    if (piVar2 == (int *)0x0) {
      uVar5 = CONCAT44(uVar6,0x5b);
    }
    else {
      iVar1 = i2d_ASN1_INTEGER(lVar3,piVar2 + 2);
      *piVar2 = iVar1;
      if (0 < iVar1) {
        uVar4 = 0x10;
        goto LAB_143d566e9;
      }
      uVar5 = CONCAT44(uVar6,0x60);
    }
  }
  ERR_put_error(10,0x76,0x41,"crypto\\dsa\\dsa_ameth.c",uVar5,uVar7);
LAB_143d5668d:
  CRYPTO_free(local_res10,"crypto\\dsa\\dsa_ameth.c",0x7e);
  ASN1_STRING_free(piVar2);
  return 0;
}



// FUNCTION 143d56780 dsa_priv_decode body=459 status=ok
// SIG undefined dsa_priv_decode(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong dsa_priv_decode(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 local_res18 [2];
  int local_res20 [2];
  undefined4 uVar9;
  undefined8 local_38;
  undefined1 local_30 [8];
  undefined4 *local_28;
  undefined8 local_20;
  
  local_20 = 0x143d56793;
  lVar6 = 0;
  lVar7 = 0;
  lVar3 = PKCS8_pkey_get0(0,local_30,local_res18,&local_38,param_2);
  uVar9 = (undefined4)((ulonglong)param_2 >> 0x20);
  if ((int)lVar3 == 0) {
    return lVar3;
  }
  X509_ALGOR_get0(0,local_res20,&local_28,local_38);
  lVar4 = d2i_ASN1_INTEGER(0,local_30,local_res18[0]);
  lVar3 = lVar6;
  if (((lVar4 == 0) || (lVar3 = 0, *(int *)(lVar4 + 4) == 0x102)) || (local_res20[0] != 0x10)) {
LAB_143d568fd:
    uVar1 = 0xc2;
    uVar8 = 0x68;
  }
  else {
    local_20 = *(undefined8 *)(local_28 + 2);
    lVar3 = d2i_DSAparams(0,&local_20,*local_28);
    if (lVar3 == 0) goto LAB_143d568fd;
    lVar5 = BN_secure_new();
    *(longlong *)(lVar3 + 0x28) = lVar5;
    if (lVar5 == 0) {
LAB_143d568f2:
      uVar1 = 0xa9;
      uVar8 = 0x6d;
    }
    else {
      lVar5 = ASN1_INTEGER_to_BN(lVar4,lVar5);
      if (lVar5 == 0) goto LAB_143d568f2;
      lVar7 = BN_new();
      *(longlong *)(lVar3 + 0x20) = lVar7;
      if (lVar7 == 0) {
        uVar1 = 0xae;
        uVar8 = 0x41;
        lVar7 = lVar6;
      }
      else {
        lVar7 = BN_CTX_new();
        if (lVar7 == 0) {
          uVar1 = 0xb2;
          uVar8 = 0x41;
        }
        else {
          BN_set_flags(*(undefined8 *)(lVar3 + 0x28),4);
          lVar5 = lVar7;
          iVar2 = BN_mod_exp(*(undefined8 *)(lVar3 + 0x20),*(undefined8 *)(lVar3 + 0x18),
                             *(undefined8 *)(lVar3 + 0x28),*(undefined8 *)(lVar3 + 8),lVar7);
          uVar9 = (undefined4)((ulonglong)lVar5 >> 0x20);
          if (iVar2 != 0) {
            EVP_PKEY_assign(param_1,0x74,lVar3);
            lVar6 = 1;
            goto LAB_143d56926;
          }
          uVar1 = 0xb8;
          uVar8 = 0x6d;
        }
      }
    }
  }
  ERR_put_error(10,0x73,uVar8,"crypto\\dsa\\dsa_ameth.c",CONCAT44(uVar9,uVar1));
  DSA_free(lVar3);
LAB_143d56926:
  BN_CTX_free(lVar7);
  ASN1_STRING_clear_free(lVar4);
  return lVar6;
}



// FUNCTION 143d56950 dsa_priv_encode body=355 status=ok
// SIG undefined dsa_priv_encode(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dsa_priv_encode(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined8 local_res10;
  
  piVar4 = (int *)0x0;
  local_res10 = 0;
  if ((*(longlong *)(param_2 + 0x28) == 0) ||
     (*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x28) == 0)) {
    uVar3 = 0xd3;
    uVar5 = 0x65;
  }
  else {
    piVar4 = (int *)ASN1_STRING_new();
    if (piVar4 == (int *)0x0) {
      uVar3 = 0xda;
      uVar5 = 0x41;
    }
    else {
      iVar1 = i2d_ASN1_INTEGER(*(undefined8 *)(param_2 + 0x28),piVar4 + 2);
      *piVar4 = iVar1;
      if (iVar1 < 1) {
        uVar3 = 0xe0;
        uVar5 = 0x41;
      }
      else {
        piVar4[1] = 0x10;
        lVar2 = BN_to_ASN1_INTEGER(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x28),0);
        if (lVar2 != 0) {
          uVar5 = i2d_ASN1_INTEGER(lVar2,&local_res10);
          ASN1_STRING_clear_free(lVar2);
          uVar3 = OBJ_nid2obj(0x74);
          iVar1 = PKCS8_pkey_set0(param_1,uVar3,0,0x10,piVar4,local_res10,uVar5);
          if (iVar1 != 0) {
            return 1;
          }
          goto LAB_143d56a76;
        }
        uVar3 = 0xe9;
        uVar5 = 0x6d;
      }
    }
  }
  ERR_put_error(10,0x74,uVar5,"crypto\\dsa\\dsa_ameth.c",uVar3);
LAB_143d56a76:
  CRYPTO_free(local_res10,"crypto\\dsa\\dsa_ameth.c",0xf9);
  ASN1_STRING_free(piVar4);
  ASN1_STRING_clear_free(0);
  return 0;
}



// FUNCTION 143d56ac0 FUN_143d56ac0 body=26 status=ok
// SIG undefined FUN_143d56ac0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d56ac0(longlong param_1)

{
  DSA_size(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 143d56ae0 FUN_143d56ae0 body=26 status=ok
// SIG undefined FUN_143d56ae0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d56ae0(longlong param_1)

{
  PKCS12_decrypt_skey(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 143d56b00 FUN_143d56b00 body=26 status=ok
// SIG undefined FUN_143d56b00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d56b00(longlong param_1)

{
  DSA_security_bits(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 143d56b50 dsa_copy_parameters body=220 status=ok
// SIG undefined dsa_copy_parameters(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dsa_copy_parameters(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    lVar1 = DSA_new();
    *(longlong *)(param_1 + 0x28) = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  lVar1 = BN_dup(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 8));
  if (lVar1 != 0) {
    BN_free(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 8));
    *(longlong *)(*(longlong *)(param_1 + 0x28) + 8) = lVar1;
    lVar1 = BN_dup(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x10));
    if (lVar1 != 0) {
      BN_free(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x10));
      *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10) = lVar1;
      lVar1 = BN_dup(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x18));
      if (lVar1 != 0) {
        BN_free(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x18));
        *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) = lVar1;
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143d56c30 dsa_cmp_parameters body=129 status=ok
// SIG undefined dsa_cmp_parameters(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dsa_cmp_parameters(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = BN_cmp(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 8),
                 *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 8));
  if (iVar1 == 0) {
    iVar1 = BN_cmp(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x10),
                   *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x10));
    if (iVar1 == 0) {
      iVar1 = BN_cmp(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x18),
                     *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x18));
      if (iVar1 == 0) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143d56cc0 dsa_pub_cmp body=51 status=ok
// SIG undefined dsa_pub_cmp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool dsa_pub_cmp(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = BN_cmp(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x20),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x20),param_3,param_4,0x143d56cca);
  return iVar1 == 0;
}



// FUNCTION 143d56d00 FUN_143d56d00 body=26 status=ok
// SIG undefined FUN_143d56d00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d56d00(longlong param_1)

{
  DSA_free(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 143d56d20 dsa_param_decode body=97 status=ok
// SIG undefined dsa_param_decode(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dsa_param_decode(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143d56d2c;
  lVar1 = d2i_DSAparams(0);
  if (lVar1 == 0) {
    ERR_put_error(10,0x77,10,"crypto\\dsa\\dsa_ameth.c",0x17d,uVar2);
    return 0;
  }
  EVP_PKEY_assign(param_1,0x74,lVar1);
  return 1;
}



// FUNCTION 143d56d90 FUN_143d56d90 body=26 status=ok
// SIG undefined FUN_143d56d90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d56d90(longlong param_1)

{
  i2d_ASN1_INTEGER(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 143d56db0 dsa_param_print body=29 status=ok
// SIG undefined dsa_param_print(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void dsa_param_print(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  do_dsa_print(param_1,*(undefined8 *)(param_2 + 0x28),param_3,0);
  return;
}



// FUNCTION 143d56dd0 dsa_pub_print body=30 status=ok
// SIG undefined dsa_pub_print(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void dsa_pub_print(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  do_dsa_print(param_1,*(undefined8 *)(param_2 + 0x28),param_3,1);
  return;
}



// FUNCTION 143d56df0 dsa_priv_print body=30 status=ok
// SIG undefined dsa_priv_print(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void dsa_priv_print(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  do_dsa_print(param_1,*(undefined8 *)(param_2 + 0x28),param_3,2);
  return;
}



// FUNCTION 143d56e10 old_dsa_priv_decode body=97 status=ok
// SIG undefined old_dsa_priv_decode(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 old_dsa_priv_decode(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143d56e1c;
  lVar1 = d2i_DSAPrivateKey(0);
  if (lVar1 == 0) {
    ERR_put_error(10,0x7a,10,"crypto\\dsa\\dsa_ameth.c",0x1a1,uVar2);
    return 0;
  }
  EVP_PKEY_assign(param_1,0x74,lVar1);
  return 1;
}



// FUNCTION 143d56e80 FUN_143d56e80 body=26 status=ok
// SIG undefined FUN_143d56e80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d56e80(longlong param_1)

{
  FUN_143d700a0(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 143d56ea0 dsa_sig_print body=272 status=ok
// SIG undefined dsa_sig_print(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong dsa_sig_print(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4
                       )

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 local_res18 [2];
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0x143d56eae;
  if (param_3 == (undefined4 *)0x0) {
    iVar1 = BIO_puts(param_1,&DAT_143fc48d8);
    return (ulonglong)(0 < iVar1);
  }
  local_res18[0] = *(undefined8 *)(param_3 + 2);
  lVar2 = d2i_DSA_SIG(0,local_res18,*param_3);
  if (lVar2 != 0) {
    uVar3 = 0;
    ECDSA_SIG_get0(lVar2,&local_28,&local_20);
    iVar1 = BIO_write(param_1,&DAT_143fc48d8,1);
    if (iVar1 == 1) {
      iVar1 = ASN1_bn_print(param_1,"r:   ",local_28,0,param_4);
      if (iVar1 != 0) {
        iVar1 = ASN1_bn_print(param_1,"s:   ",local_20,0,param_4);
        uVar3 = 0;
        if (iVar1 != 0) {
          uVar3 = 1;
        }
      }
    }
    DSA_SIG_free(lVar2);
    return uVar3;
  }
  uVar3 = X509_signature_dump(param_1,param_3,param_4);
  return uVar3;
}



// FUNCTION 143d56fb0 dsa_pkey_ctrl body=395 status=ok
// SIG undefined dsa_pkey_ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dsa_pkey_ctrl(undefined8 param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_res10 [6];
  longlong *local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x143d56fc0;
  if (param_2 == 1) {
    if (param_3 != 0) {
      return 1;
    }
    PKCS7_SIGNER_INFO_get0_algs(param_4,0,&local_10,&local_18);
    if (local_10 == (longlong *)0x0) {
      return 0xffffffff;
    }
    if (*local_10 == 0) {
      return 0xffffffff;
    }
    iVar1 = OBJ_obj2nid();
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    uVar2 = FRollingHash::GetWindowSize(param_1);
    iVar1 = OBJ_find_sigid_by_algs(local_res10,iVar1,uVar2);
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    uVar3 = OBJ_nid2obj(local_res10[0]);
  }
  else {
    if (param_2 == 3) {
      *param_4 = 0x2a0;
      return 2;
    }
    if (param_2 != 5) {
      if (param_2 == 8) {
        *param_4 = 0xffffffff;
        return 1;
      }
      return 0xfffffffe;
    }
    if (param_3 != 0) {
      return 1;
    }
    CMS_SignerInfo_get0_algs(param_4,0,0,&local_18,&local_10);
    if ((local_18 == (longlong *)0x0) || (*local_18 == 0)) {
      return 0xffffffff;
    }
    iVar1 = OBJ_obj2nid();
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    uVar2 = FRollingHash::GetWindowSize(param_1);
    iVar1 = OBJ_find_sigid_by_algs(local_res10,iVar1,uVar2);
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    uVar3 = OBJ_nid2obj(local_res10[0]);
    local_18 = local_10;
  }
  X509_ALGOR_set0(local_18,uVar3,0xffffffff);
  return 1;
}



// FUNCTION 143d57140 do_dsa_print body=369 status=ok
// SIG undefined do_dsa_print(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong do_dsa_print(undefined8 param_1,longlong param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  uVar7 = 0x143d5715e;
  lVar3 = 0;
  if (param_4 == 2) {
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    lVar4 = *(longlong *)(param_2 + 0x28);
  }
  else {
    lVar4 = 0;
    if (param_4 < 1) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_2 + 0x20);
      lVar4 = 0;
    }
  }
  if (param_4 == 2) {
    pcVar6 = "Private-Key";
  }
  else {
    pcVar6 = "Public-Key";
    if (param_4 != 1) {
      pcVar6 = "DSA-Parameters";
    }
  }
  if (lVar4 != 0) {
    iVar1 = BIO_indent(param_1,param_3,0x80);
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = BN_num_bits(*(undefined8 *)(param_2 + 8));
    iVar1 = BIO_printf(param_1,"%s: (%d bit)\n",pcVar6,uVar2);
    if (iVar1 < 1) {
      return 0;
    }
  }
  iVar1 = ASN1_bn_print(param_1,"priv:",lVar4,0,param_3,uVar7);
  lVar4 = 0;
  if ((((iVar1 != 0) &&
       (iVar1 = ASN1_bn_print(param_1,"pub: ",uVar5,0,param_3,uVar7), lVar4 = lVar3, iVar1 != 0)) &&
      (iVar1 = ASN1_bn_print(param_1,"P:   ",*(undefined8 *)(param_2 + 8),0,param_3,uVar7),
      iVar1 != 0)) &&
     (iVar1 = ASN1_bn_print(param_1,"Q:   ",*(undefined8 *)(param_2 + 0x10),0,param_3,uVar7),
     iVar1 != 0)) {
    iVar1 = ASN1_bn_print(param_1,"G:   ",*(undefined8 *)(param_2 + 0x18),0,param_3);
    lVar4 = 0;
    if (iVar1 != 0) {
      lVar4 = 1;
    }
  }
  return lVar4;
}



// FUNCTION 143d572c0 eckey_pub_encode body=279 status=ok
// SIG undefined eckey_pub_encode(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 eckey_pub_encode(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int local_res10 [2];
  undefined8 local_res18;
  longlong local_res20;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar5 = 0x143d572cf;
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  lVar2 = 0;
  local_res18 = 0;
  iVar1 = eckey_param2type(local_res10,&local_res18,uVar3);
  if (iVar1 == 0) {
    ERR_put_error(0x10,0xd8,0x10,"crypto\\ec\\ec_ameth.c",CONCAT44(uVar4,0x43),uVar5);
    return 0;
  }
  iVar1 = i2o_ECPublicKey(uVar3,0);
  uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (0 < iVar1) {
    lVar2 = CRYPTO_malloc((longlong)iVar1,"crypto\\ec\\ec_ameth.c",0x49);
    if (lVar2 != 0) {
      local_res20 = lVar2;
      iVar1 = i2o_ECPublicKey(uVar3,&local_res20);
      if (0 < iVar1) {
        uVar3 = OBJ_nid2obj(0x198);
        iVar1 = X509_PUBKEY_set0_param
                          (param_1,uVar3,local_res10[0],local_res18,lVar2,CONCAT44(uVar4,iVar1));
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
  }
  if (local_res10[0] == 6) {
    ASN1_OBJECT_free();
  }
  else {
    ASN1_STRING_free(local_res18);
  }
  CRYPTO_free(lVar2,"crypto\\ec\\ec_ameth.c",0x58);
  return 0;
}



// FUNCTION 143d573e0 eckey_pub_decode body=250 status=ok
// SIG undefined eckey_pub_decode(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

undefined8 eckey_pub_decode(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 uVar3;
  longlong local_28 [3];
  undefined8 local_10;
  
  local_10 = 0x143d573ec;
  local_28[1] = 0;
  iVar1 = X509_PUBKEY_get0_param(0,local_28 + 1,local_res20,local_28 + 2,param_2);
  uVar3 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (iVar1 != 0) {
    X509_ALGOR_get0(0,local_res18,&local_10,local_28[2]);
    local_28[0] = eckey_type2param(local_res18[0],local_10);
    if (local_28[0] != 0) {
      lVar2 = o2i_ECPublicKey(local_28,local_28 + 1,local_res20[0]);
      if (lVar2 == 0) {
        ERR_put_error(0x10,0xd7,0x8e,"crypto\\ec\\ec_ameth.c",CONCAT44(uVar3,0x9d));
        EC_KEY_free(local_28[0]);
        return 0;
      }
      EVP_PKEY_assign(param_1,0x198,local_28[0]);
      return 1;
    }
    ERR_put_error(0x10,0xd7,0x10,"crypto\\ec\\ec_ameth.c",CONCAT44(uVar3,0x97));
  }
  return 0;
}



// FUNCTION 143d574e0 eckey_pub_cmp body=164 status=ok
// SIG undefined eckey_pub_cmp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 eckey_pub_cmp(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = FUniqueNetIdString::GetBytes(*(undefined8 *)(param_2 + 0x28));
  lVar3 = USignificanceManager::GetWorld(*(undefined8 *)(param_1 + 0x28));
  lVar4 = USignificanceManager::GetWorld(*(undefined8 *)(param_2 + 0x28));
  if (((lVar2 != 0) && (lVar3 != 0)) && (lVar4 != 0)) {
    iVar1 = EC_POINT_cmp(lVar2,lVar3,lVar4,0);
    if (iVar1 == 0) {
      return 1;
    }
    if (iVar1 == 1) {
      return 0;
    }
  }
  return 0xfffffffe;
}



// FUNCTION 143d57590 eckey_priv_decode body=228 status=ok
// SIG undefined eckey_priv_decode(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

undefined8 eckey_priv_decode(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 uVar5;
  longlong local_28 [3];
  undefined8 local_10;
  
  local_10 = 0x143d5759c;
  local_28[1] = 0;
  iVar1 = PKCS8_pkey_get0(0,local_28 + 1,local_res20,local_28 + 2,param_2);
  uVar5 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (iVar1 != 0) {
    X509_ALGOR_get0(0,local_res18,&local_10,local_28[2]);
    local_28[0] = eckey_type2param(local_res18[0],local_10);
    if (local_28[0] == 0) {
      uVar2 = 0xd4;
      uVar4 = 0x10;
    }
    else {
      lVar3 = d2i_ECPrivateKey(local_28,local_28 + 1,local_res20[0]);
      if (lVar3 != 0) {
        EVP_PKEY_assign(param_1,0x198,local_28[0]);
        return 1;
      }
      uVar2 = 0xcc;
      uVar4 = 0x8e;
    }
    ERR_put_error(0x10,0xd5,uVar4,"crypto\\ec\\ec_ameth.c",CONCAT44(uVar5,uVar2));
    EC_KEY_free(local_28[0]);
  }
  return 0;
}



// FUNCTION 143d57680 eckey_priv_encode body=638 status=ok
// SIG undefined eckey_priv_encode(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 eckey_priv_encode(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong local_res10;
  undefined8 in_stack_ffffffffffffff78;
  undefined8 uVar10;
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
  undefined8 uStack_20;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  puVar1 = *(undefined8 **)(param_2 + 0x28);
  local_68 = *puVar1;
  uStack_60 = puVar1[1];
  local_58 = puVar1[2];
  uStack_50 = puVar1[3];
  local_48 = puVar1[4];
  uStack_40 = puVar1[5];
  local_38 = *(undefined4 *)(puVar1 + 6);
  uStack_34 = *(undefined4 *)((longlong)puVar1 + 0x34);
  uStack_30 = *(undefined4 *)(puVar1 + 7);
  uStack_2c = *(undefined4 *)((longlong)puVar1 + 0x3c);
  local_28 = *(undefined4 *)(puVar1 + 8);
  uStack_24 = *(undefined4 *)((longlong)puVar1 + 0x44);
  uStack_20 = puVar1[9];
  lVar5 = FUniqueNetIdString::GetBytes(&local_68);
  if (lVar5 == 0) {
    uVar10 = CONCAT44(uVar9,0x1f);
    uVar7 = 0x7c;
  }
  else {
    iVar2 = BuildPatchServices::FMemoryChunkStoreStatistics::GetPeakStoreUse(lVar5);
    if ((iVar2 != 0) && (iVar2 = TMeshAttributeArraySet<int>::GetNumIndices(lVar5), iVar2 != 0)) {
      piVar6 = (int *)OBJ_nid2obj(iVar2);
      uVar8 = 6;
LAB_143d5774e:
      uVar3 = UNiagaraPreviewAxis_InterpParamBase::Num_Implementation(&local_68);
      EC_KEY_set_enc_flags(&local_68,uVar3 | 1);
      iVar2 = i2d_ECPrivateKey(&local_68,0);
      if (iVar2 == 0) {
        ERR_put_error(0x10,0xd6,0x10,"crypto\\ec\\ec_ameth.c",CONCAT44(uVar9,0xf2));
        return 0;
      }
      lVar5 = CRYPTO_malloc((longlong)iVar2,"crypto\\ec\\ec_ameth.c",0xf5);
      if (lVar5 == 0) {
        uVar7 = CONCAT44(uVar9,0xf7);
        uVar9 = 0x41;
      }
      else {
        local_res10 = lVar5;
        iVar4 = i2d_ECPrivateKey(&local_68,&local_res10);
        if (iVar4 != 0) {
          uVar7 = OBJ_nid2obj(0x198);
          iVar2 = PKCS8_pkey_set0(param_1,uVar7,0,uVar8,piVar6,lVar5,iVar2);
          if (iVar2 == 0) {
            CRYPTO_free(lVar5,"crypto\\ec\\ec_ameth.c",0x103);
            return 0;
          }
          return 1;
        }
        CRYPTO_free(lVar5,"crypto\\ec\\ec_ameth.c",0xfc);
        uVar7 = CONCAT44(uVar9,0xfd);
        uVar9 = 0x10;
      }
      ERR_put_error(0x10,0xd6,uVar9,"crypto\\ec\\ec_ameth.c",uVar7);
      return 0;
    }
    piVar6 = (int *)ASN1_STRING_new();
    if (piVar6 == (int *)0x0) goto LAB_143d578ce;
    iVar2 = i2d_ECParameters(&local_68,piVar6 + 2);
    *piVar6 = iVar2;
    if (0 < iVar2) {
      uVar8 = 0x10;
      goto LAB_143d5774e;
    }
    ASN1_STRING_free(piVar6);
    uVar10 = CONCAT44(uVar9,0x31);
    uVar7 = 0x10;
  }
  ERR_put_error(0x10,0xdf,uVar7,"crypto\\ec\\ec_ameth.c",uVar10);
  uVar9 = (undefined4)((ulonglong)uVar10 >> 0x20);
LAB_143d578ce:
  ERR_put_error(0x10,0xd6,0x8e,"crypto\\ec\\ec_ameth.c",CONCAT44(uVar9,0xe3));
  return 0;
}



// FUNCTION 143d57900 FUN_143d57900 body=26 status=ok
// SIG undefined FUN_143d57900(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d57900(longlong param_1)

{
  ECDSA_size(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 143d57920 ec_bits body=34 status=ok
// SIG undefined ec_bits(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ec_bits(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUniqueNetIdString::GetBytes(*(undefined8 *)(param_1 + 0x28));
  EC_GROUP_order_bits(uVar1);
  return;
}



// FUNCTION 143d57950 ec_security_bits body=125 status=ok
// SIG undefined ec_security_bits(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int ec_security_bits(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUniqueNetIdString::GetBytes(*(undefined8 *)(param_1 + 0x28));
  iVar1 = EC_GROUP_order_bits(uVar2);
  if (0x1ff < iVar1) {
    return 0x100;
  }
  if (0x17f < iVar1) {
    return 0xc0;
  }
  if (0xff < iVar1) {
    return 0x80;
  }
  if (0xdf < iVar1) {
    return 0x70;
  }
  if (0x9f < iVar1) {
    return 0x50;
  }
  return iVar1 / 2;
}



// FUNCTION 143d579d0 ec_missing_parameters body=49 status=ok
// SIG undefined ec_missing_parameters(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ec_missing_parameters(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar1 = FUniqueNetIdString::GetBytes();
    if (lVar1 != 0) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 143d57a10 ec_copy_parameters body=130 status=ok
// SIG undefined ec_copy_parameters(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ec_copy_parameters(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = FUniqueNetIdString::GetBytes(*(undefined8 *)(param_2 + 0x28));
  lVar3 = EC_GROUP_dup(uVar2);
  if (lVar3 == 0) {
    return 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x28);
  if (lVar4 == 0) {
    lVar4 = EC_KEY_new();
    *(longlong *)(param_1 + 0x28) = lVar4;
    if (lVar4 == 0) goto LAB_143d57a65;
  }
  iVar1 = EC_KEY_set_group(lVar4,lVar3);
  if (iVar1 != 0) {
    EC_GROUP_free(lVar3);
    return 1;
  }
LAB_143d57a65:
  EC_GROUP_free(lVar3);
  return 0;
}



// FUNCTION 143d57aa0 ec_cmp_parameters body=103 status=ok
// SIG undefined ec_cmp_parameters(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ec_cmp_parameters(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUniqueNetIdString::GetBytes(*(undefined8 *)(param_1 + 0x28));
  lVar3 = FUniqueNetIdString::GetBytes(*(undefined8 *)(param_2 + 0x28));
  if ((lVar2 != 0) && (lVar3 != 0)) {
    iVar1 = EC_GROUP_cmp(lVar2,lVar3,0);
    return (ulonglong)(iVar1 == 0);
  }
  return 0xfffffffe;
}



// FUNCTION 143d57b10 FUN_143d57b10 body=26 status=ok
// SIG undefined FUN_143d57b10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d57b10(longlong param_1)

{
  EC_KEY_free(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 143d57b30 eckey_param_decode body=99 status=ok
// SIG undefined eckey_param_decode(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 eckey_param_decode(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143d57b3c;
  lVar1 = d2i_ECParameters(0);
  if (lVar1 == 0) {
    ERR_put_error(0x10,0xd4,0x10,"crypto\\ec\\ec_ameth.c",0x19b,uVar2);
    return 0;
  }
  EVP_PKEY_assign(param_1,0x198,lVar1);
  return 1;
}



// FUNCTION 143d57ba0 FUN_143d57ba0 body=26 status=ok
// SIG undefined FUN_143d57ba0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d57ba0(longlong param_1)

{
  i2d_ECParameters(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 143d57bc0 eckey_param_print body=30 status=ok
// SIG undefined eckey_param_print(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void eckey_param_print(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  do_EC_KEY_print(param_1,*(undefined8 *)(param_2 + 0x28),param_3,2);
  return;
}



// FUNCTION 143d57be0 eckey_pub_print body=30 status=ok
// SIG undefined eckey_pub_print(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void eckey_pub_print(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  do_EC_KEY_print(param_1,*(undefined8 *)(param_2 + 0x28),param_3,1);
  return;
}



// FUNCTION 143d57c00 eckey_priv_print body=29 status=ok
// SIG undefined eckey_priv_print(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void eckey_priv_print(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  do_EC_KEY_print(param_1,*(undefined8 *)(param_2 + 0x28),param_3,0);
  return;
}



// FUNCTION 143d57c20 old_ec_priv_decode body=97 status=ok
// SIG undefined old_ec_priv_decode(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 old_ec_priv_decode(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143d57c2c;
  lVar1 = d2i_ECPrivateKey(0);
  if (lVar1 == 0) {
    ERR_put_error(0x10,0xde,0x8e,"crypto\\ec\\ec_ameth.c",0x1bf,uVar2);
    return 0;
  }
  EVP_PKEY_assign(param_1,0x198,lVar1);
  return 1;
}



// FUNCTION 143d57c90 FUN_143d57c90 body=26 status=ok
// SIG undefined FUN_143d57c90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d57c90(longlong param_1)

{
  i2d_ECPrivateKey(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 143d57cb0 FUN_143d57cb0 body=571 status=ok
// SIG undefined FUN_143d57cb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_143d57cb0(undefined8 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_res10 [2];
  longlong *local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x143d57cc5;
  switch(param_2) {
  case 1:
    if (param_3 != 0) {
      return 1;
    }
    PKCS7_SIGNER_INFO_get0_algs(param_4,0,&local_18,&local_10);
    if (((local_18 == (longlong *)0x0) || (*local_18 == 0)) || (iVar1 = OBJ_obj2nid(), iVar1 == 0))
    {
      return 0xffffffff;
    }
    uVar2 = FRollingHash::GetWindowSize(param_1);
    iVar1 = OBJ_find_sigid_by_algs(local_res10,iVar1,uVar2);
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    uVar3 = OBJ_nid2obj(local_res10[0]);
    local_18 = local_10;
    break;
  default:
    return 0xfffffffe;
  case 3:
    *param_4 = 0x2a0;
    return 2;
  case 5:
    if (param_3 != 0) {
      return 1;
    }
    CMS_SignerInfo_get0_algs(param_4,0,0,&local_10,&local_18);
    if (local_10 == (longlong *)0x0) {
      return 0xffffffff;
    }
    if (*local_10 == 0) {
      return 0xffffffff;
    }
    iVar1 = OBJ_obj2nid();
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    uVar2 = FRollingHash::GetWindowSize(param_1);
    iVar1 = OBJ_find_sigid_by_algs(local_res10,iVar1,uVar2);
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    uVar3 = OBJ_nid2obj(local_res10[0]);
    break;
  case 7:
    if (param_3 == 1) {
      uVar3 = ecdh_cms_decrypt(param_4);
      return uVar3;
    }
    if (param_3 != 0) {
      return 0xfffffffe;
    }
    uVar3 = ecdh_cms_encrypt(param_4);
    return uVar3;
  case 8:
    *param_4 = 1;
    return 1;
  case 9:
    uVar3 = EVP_PKEY_get0_EC_KEY(param_1);
    uVar3 = EC_KEY_oct2key(uVar3,param_4,(longlong)param_3,0);
    return uVar3;
  case 10:
    uVar3 = EVP_PKEY_get0_EC_KEY(param_1);
    uVar3 = EC_KEY_key2buf(uVar3,4,param_4);
    return uVar3;
  }
  X509_ALGOR_set0(local_18,uVar3,0xffffffff);
  return 1;
}



// FUNCTION 143d57f20 ec_pkey_check body=72 status=ok
// SIG undefined ec_pkey_check(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ec_pkey_check(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28) == 0) {
    ERR_put_error(0x10,0x111,0x7d,"crypto\\ec\\ec_ameth.c",0x212);
    return 0;
  }
  uVar1 = EC_KEY_check_key();
  return uVar1;
}



// FUNCTION 143d57f70 FUN_143d57f70 body=26 status=ok
// SIG undefined FUN_143d57f70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d57f70(longlong param_1)

{
  EC_KEY_check_key(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 143d57f90 ec_pkey_param_check body=77 status=ok
// SIG undefined ec_pkey_param_check(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ec_pkey_param_check(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18);
  if (lVar1 == 0) {
    ERR_put_error(0x10,0x112,0x7c,"crypto\\ec\\ec_ameth.c",0x22f);
    return 0;
  }
  uVar2 = EC_GROUP_check(lVar1,0);
  return uVar2;
}


