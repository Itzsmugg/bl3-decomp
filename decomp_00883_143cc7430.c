// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143cc7430 ssl3_get_cipher_by_char body=117 status=ok
// SIG undefined ssl3_get_cipher_by_char(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl3_get_cipher_by_char(byte *param_1)

{
  longlong lVar1;
  undefined1 local_58 [24];
  uint local_40;
  undefined8 uStack_8;
  
  uStack_8 = 0x143cc743a;
  local_40 = (*param_1 | 0x30000) << 8 | (uint)param_1[1];
  lVar1 = OBJ_bsearch_ssl_cipher_id(local_58,&DAT_146832da0,5);
  if (lVar1 == 0) {
    lVar1 = OBJ_bsearch_ssl_cipher_id(local_58,&DAT_146832f30,0xa4);
    if (lVar1 == 0) {
      OBJ_bsearch_ssl_cipher_id(local_58,&DAT_146836270,2);
    }
  }
  return;
}



// FUNCTION 143cc74b0 ssl3_get_cipher_by_id body=97 status=ok
// SIG undefined ssl3_get_cipher_by_id(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl3_get_cipher_by_id(undefined4 param_1)

{
  longlong lVar1;
  undefined1 local_58 [24];
  undefined4 local_40;
  undefined8 uStack_8;
  
  uStack_8 = 0x143cc74ba;
  local_40 = param_1;
  lVar1 = OBJ_bsearch_ssl_cipher_id(local_58,&DAT_146832da0,5);
  if (lVar1 == 0) {
    lVar1 = OBJ_bsearch_ssl_cipher_id(local_58,&DAT_146832f30,0xa4);
    if (lVar1 == 0) {
      OBJ_bsearch_ssl_cipher_id(local_58,&DAT_146836270,2);
    }
  }
  return;
}



// FUNCTION 143cc7520 ssl3_get_cipher_by_std_name body=245 status=ok
// SIG undefined ssl3_get_cipher_by_std_name(void)

undefined * ssl3_get_cipher_by_std_name(char *param_1)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar8 = (undefined *)0x0;
  puVar6 = &DAT_146832da0;
  puVar7 = puVar8;
  do {
    if (*(longlong *)(puVar6 + 0x10) != 0) {
      pcVar3 = param_1;
      do {
        cVar1 = *pcVar3;
        cVar2 = pcVar3[*(longlong *)(puVar6 + 0x10) - (longlong)param_1];
        if (cVar1 != cVar2) break;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      puVar4 = puVar6;
      if (cVar1 == cVar2) break;
    }
    puVar7 = puVar7 + 1;
    puVar6 = puVar6 + 0x50;
    puVar4 = puVar8;
  } while (puVar7 < (undefined *)0x5);
  puVar6 = &DAT_146832f30;
  puVar7 = puVar8;
  do {
    if (*(longlong *)(puVar6 + 0x10) != 0) {
      pcVar3 = param_1;
      do {
        cVar1 = *pcVar3;
        cVar2 = pcVar3[*(longlong *)(puVar6 + 0x10) - (longlong)param_1];
        if (cVar1 != cVar2) break;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      puVar5 = puVar6;
      if (cVar1 == cVar2) break;
    }
    puVar7 = puVar7 + 1;
    puVar6 = puVar6 + 0x50;
    puVar5 = puVar4;
  } while (puVar7 < (undefined *)0xa4);
  if (puVar5 == (undefined *)0x0) {
    puVar7 = &DAT_146836270;
    do {
      pcVar3 = param_1;
      do {
        cVar1 = *pcVar3;
        cVar2 = pcVar3[*(longlong *)(puVar7 + 0x10) - (longlong)param_1];
        if (cVar1 != cVar2) break;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) {
        return puVar7;
      }
      puVar8 = puVar8 + 1;
      puVar7 = puVar7 + 0x50;
    } while (puVar8 < (undefined *)0x2);
  }
  return puVar5;
}



// FUNCTION 143cc7620 ssl3_get_req_cert_type body=388 status=ok
// SIG undefined ssl3_get_req_cert_type(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_get_req_cert_type(int *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  uint local_res8 [2];
  
  local_res8[0] = 0;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x122) + 0x188);
  if (lVar2 != 0) {
    uVar4 = WPACKET_memcpy(param_2,lVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x122) + 400));
    return uVar4;
  }
  ssl_set_sig_mask(local_res8,param_1,0x5000e);
  uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x238) + 0x1c);
  if ((*param_1 < 0x301) || ((uVar1 & 0x10) == 0)) {
    uVar4 = 1;
    if (((((*param_1 == 0x300) && ((uVar1 & 2) != 0)) &&
         ((iVar3 = WPACKET_put_bytes__(param_2,5,1), iVar3 == 0 ||
          (iVar3 = WPACKET_put_bytes__(param_2,6,1), iVar3 == 0)))) ||
        (((local_res8[0] & 1) == 0 && (iVar3 = WPACKET_put_bytes__(param_2,1,1), iVar3 == 0)))) ||
       ((((local_res8[0] & 2) == 0 && (iVar3 = WPACKET_put_bytes__(param_2,2,1), iVar3 == 0)) ||
        ((0x300 < *param_1 &&
         (((local_res8[0] & 8) == 0 && (iVar3 = WPACKET_put_bytes__(param_2,0x40,1), iVar3 == 0)))))
        ))) {
      return 0;
    }
  }
  else {
    uVar4 = 1;
    iVar3 = WPACKET_put_bytes__(param_2,0x16,1);
    if (((iVar3 == 0) || (iVar3 = WPACKET_put_bytes__(param_2,0xee,1), iVar3 == 0)) ||
       (iVar3 = WPACKET_put_bytes__(param_2,0xef,1), iVar3 == 0)) {
      uVar4 = 0;
    }
  }
  return uVar4;
}



// FUNCTION 143cc77b0 ssl3_new body=98 status=ok
// SIG undefined ssl3_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool ssl3_new(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = CRYPTO_zalloc(0x410,"ssl\\s3_lib.c",0xce0);
  if (lVar2 != 0) {
    *(longlong *)(param_1 + 0xa8) = lVar2;
    iVar1 = SSL_SRP_CTX_init(param_1);
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0x18))(param_1);
      return iVar1 != 0;
    }
  }
  return false;
}



// FUNCTION 143cc7830 ssl3_peek body=32 status=ok
// SIG undefined ssl3_peek(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl3_peek(void)

{
  ssl3_read_internal();
  return;
}



// FUNCTION 143cc7850 ssl3_put_cipher_by_char body=104 status=ok
// SIG undefined ssl3_put_cipher_by_char(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_put_cipher_by_char(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if ((*(uint *)(param_1 + 0x18) & 0xff000000) != 0x3000000) {
    *param_3 = 0;
    return 1;
  }
  uVar1 = WPACKET_put_bytes__(param_2,*(uint *)(param_1 + 0x18) & 0xffff,2);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  *param_3 = 2;
  return 1;
}



// FUNCTION 143cc78c0 ssl3_read body=31 status=ok
// SIG undefined ssl3_read(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl3_read(void)

{
  ssl3_read_internal();
  return;
}



// FUNCTION 143cc78e0 ssl3_read_internal body=269 status=ok
// SIG undefined ssl3_read_internal(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int ssl3_read_internal(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                      undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143cc7900;
  SetLastError(0);
  lVar2 = *(longlong *)(param_1 + 0xa8);
  if (*(int *)(lVar2 + 0x104) != 0) {
    ssl3_renegotiate_check(param_1,0);
    lVar2 = *(longlong *)(param_1 + 0xa8);
  }
  *(undefined4 *)(lVar2 + 0x110) = 1;
  iVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0x68))
                    (param_1,0x17,0,param_2,param_3,param_4,param_5,uVar3);
  if ((iVar1 == -1) && (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x110) == 2)) {
    ossl_statem_set_in_handshake(param_1,1);
    iVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0x68))
                      (param_1,0x17,0,param_2,param_3,param_4,param_5);
    ossl_statem_set_in_handshake(param_1,0);
  }
  else {
    *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x110) = 0;
  }
  return iVar1;
}



// FUNCTION 143cc7a10 ssl3_renegotiate_check body=200 status=ok
// SIG undefined ssl3_renegotiate_check(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_renegotiate_check(longlong param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x104) == 0) {
    return 0;
  }
  iVar2 = RECORD_LAYER_read_pending(param_1 + 0x800);
  if ((iVar2 == 0) && (iVar2 = RECORD_LAYER_write_pending(param_1 + 0x800), iVar2 == 0)) {
    if ((param_2 == 0) && (iVar2 = FSlateAccessibleWidget::GetId(param_1), iVar2 != 0)) {
      return 0;
    }
    ossl_statem_set_renegotiate(param_1);
    *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x104) = 0;
    piVar1 = (int *)(*(longlong *)(param_1 + 0xa8) + 0x10c);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(param_1 + 0xa8) + 0x108);
    *piVar1 = *piVar1 + 1;
    return 1;
  }
  return 0;
}



// FUNCTION 143cc7ae0 ssl3_set_req_cert_type body=175 status=ok
// SIG undefined ssl3_set_req_cert_type(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_set_req_cert_type(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  
  CRYPTO_free(*(undefined8 *)(param_1 + 0x188),"ssl\\s3_lib.c",0x1111);
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    if (param_3 < 0x100) {
      lVar1 = CRYPTO_memdup(param_2,param_3,"ssl\\s3_lib.c",0x1118);
      *(longlong *)(param_1 + 0x188) = lVar1;
      if (lVar1 != 0) {
        *(ulonglong *)(param_1 + 400) = param_3;
        return 1;
      }
    }
    return 0;
  }
  return 1;
}



// FUNCTION 143cc7b90 ssl3_shutdown body=225 status=ok
// SIG undefined ssl3_shutdown(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_shutdown(longlong param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined1 local_res8 [32];
  undefined8 uVar4;
  
  uVar4 = 0x143cc7b9c;
  if ((*(int *)(param_1 + 0x40) != 0) || (iVar2 = SSL_in_before(), iVar2 != 0)) {
    *(undefined4 *)(param_1 + 0x44) = 3;
    return 1;
  }
  uVar1 = *(uint *)(param_1 + 0x44);
  if ((uVar1 & 1) == 0) {
    *(uint *)(param_1 + 0x44) = uVar1 | 1;
    ssl3_send_alert(param_1,1,0);
    if (*(int *)(*(longlong *)(param_1 + 0xa8) + 0xfc) != 0) {
      return 0xffffffff;
    }
  }
  else {
    if (*(int *)(*(longlong *)(param_1 + 0xa8) + 0xfc) == 0) {
      if ((uVar1 & 2) != 0) goto LAB_143cc7be5;
      (**(code **)(*(longlong *)(param_1 + 8) + 0x68))(param_1,0,0,0,0,0,local_res8,uVar4);
      bVar3 = (*(byte *)(param_1 + 0x44) & 2) == 0;
    }
    else {
      iVar2 = (**(code **)(*(longlong *)(param_1 + 8) + 0x78))(param_1);
      bVar3 = iVar2 == -1;
    }
    if (bVar3) {
      return 0xffffffff;
    }
  }
LAB_143cc7be5:
  if ((*(int *)(param_1 + 0x44) == 3) && (*(int *)(*(longlong *)(param_1 + 0xa8) + 0xfc) == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 143cc7c80 ssl3_write body=122 status=ok
// SIG undefined ssl3_write(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl3_write(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0x143cc7c9a;
  SetLastError(0);
  if (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x104) != 0) {
    ssl3_renegotiate_check(param_1,0);
  }
  (**(code **)(*(longlong *)(param_1 + 8) + 0x70))(param_1,0x17,param_2,param_3,param_4,uVar1);
  return;
}



// FUNCTION 143cc7d00 ssl_derive body=576 status=ok
// SIG undefined ssl_derive(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ssl_derive(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 local_res10;
  undefined4 uVar8;
  
  uVar8 = 1;
  uVar6 = 0;
  local_res10 = 0;
  if ((param_2 == 0) || (param_3 == 0)) {
    ossl_statem_fatal(param_1,0x50,0x24e,0x44,"ssl\\s3_lib.c",0x1000012a4);
    return 0;
  }
  uVar3 = EVP_PKEY_CTX_new(param_2,0);
  iVar1 = EVP_PKEY_derive_init(uVar3);
  if (iVar1 < 1) {
LAB_143cc7ea2:
    uVar5 = CONCAT44(uVar8,0x12ae);
    uVar4 = uVar6;
LAB_143cc7eb1:
    uVar7 = 0x44;
  }
  else {
    iVar1 = EVP_PKEY_derive_set_peer(uVar3,param_3);
    if (iVar1 < 1) goto LAB_143cc7ea2;
    iVar1 = EVP_PKEY_derive(uVar3,0,&local_res10);
    if (iVar1 < 1) goto LAB_143cc7ea2;
    uVar4 = CRYPTO_malloc(local_res10,"ssl\\s3_lib.c",0x12b2);
    if (uVar4 != 0) {
      iVar1 = EVP_PKEY_derive(uVar3,uVar4,&local_res10);
      if (0 < iVar1) {
        if (param_4 == 0) {
          *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x2b8) = uVar4;
          uVar4 = 0;
          uVar6 = 1;
          *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2c0) = local_res10;
        }
        else if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
                 (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
          if (*(int *)(param_1 + 200) == 0) {
            uVar5 = ssl_handshake_md(param_1);
            iVar1 = tls13_generate_secret(param_1,uVar5,0,0,0,param_1 + 300);
            if (iVar1 == 0) goto LAB_143cc7ecf;
          }
          iVar1 = tls13_generate_handshake_secret(param_1,uVar4,local_res10);
          if (iVar1 != 0) {
            uVar6 = 1;
          }
        }
        else {
          uVar2 = ssl_generate_master_secret(param_1,uVar4,local_res10,0);
          uVar6 = (ulonglong)uVar2;
        }
        goto LAB_143cc7ecf;
      }
      uVar5 = CONCAT44(uVar8,0x12bb);
      goto LAB_143cc7eb1;
    }
    uVar5 = CONCAT44(uVar8,0x12b5);
    uVar7 = 0x41;
  }
  ossl_statem_fatal(param_1,0x50,0x24e,uVar7,"ssl\\s3_lib.c",uVar5);
LAB_143cc7ecf:
  CRYPTO_clear_free(uVar4,local_res10,"ssl\\s3_lib.c",0x12da);
  EVP_PKEY_CTX_free(uVar3);
  return uVar6;
}



// FUNCTION 143cc7f40 ssl_dh_to_pkey body=94 status=ok
// SIG undefined ssl_dh_to_pkey(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_dh_to_pkey(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar2 = EVP_PKEY_new();
  iVar1 = EVP_PKEY_set1_DH(uVar2,param_1);
  if (iVar1 < 1) {
    EVP_PKEY_free(uVar2);
    return 0;
  }
  return uVar2;
}



// FUNCTION 143cc7fa0 ssl_fill_hello_random body=204 status=ok
// SIG undefined ssl_fill_hello_random(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ssl_fill_hello_random
                    (longlong param_1,int param_2,undefined1 *param_3,ulonglong param_4,int param_5)

{
  uint uVar1;
  __time64_t _Var2;
  ulonglong uVar3;
  undefined1 *puVar4;
  
  if (param_4 < 4) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x5c8) >> 5;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x5c8) >> 6;
  }
  if ((uVar1 & 1) == 0) {
    uVar3 = param_4 & 0xffffffff;
    puVar4 = param_3;
  }
  else {
    _Var2 = _time64((__time64_t *)0x0);
    uVar3 = (ulonglong)((int)param_4 - 4);
    *param_3 = (char)((ulonglong)_Var2 >> 0x18);
    param_3[1] = (char)((ulonglong)_Var2 >> 0x10);
    param_3[2] = (char)((ulonglong)_Var2 >> 8);
    param_3[3] = (char)_Var2;
    puVar4 = param_3 + 4;
  }
  uVar3 = RAND_bytes(puVar4,uVar3);
  if (0 < (int)uVar3) {
    if (param_4 < 9) {
      return 0;
    }
    if (param_5 == 1) {
      *(undefined8 *)(param_3 + (param_4 - 8)) = 0x14452474e574f44;
      return uVar3;
    }
    if (param_5 == 2) {
      *(char (*) [8])(param_3 + (param_4 - 8)) = (char  [8])0x4452474e574f44;
    }
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 143cc8070 ssl_generate_master_secret body=549 status=ok
// SIG undefined ssl_generate_master_secret(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_generate_master_secret(longlong param_1,void *param_2,size_t param_3,int param_4)

{
  undefined1 *_Dst;
  size_t _Size;
  int iVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  uVar4 = 0;
  uVar5 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x1c);
  if ((uVar5 & 0x1c8) == 0) {
    iVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x18))
                      (param_1,*(longlong *)(param_1 + 0x508) + 0x50,param_2,param_3,
                       *(longlong *)(param_1 + 0x508) + 8);
    if (iVar1 == 0) goto LAB_143cc822b;
  }
  else {
    _Size = *(size_t *)(*(longlong *)(param_1 + 0xa8) + 0x2d0);
    uVar5 = uVar5 & 8;
    if (uVar5 != 0) {
      param_3 = _Size;
    }
    lVar3 = _Size + 4 + param_3;
    puVar2 = (undefined1 *)CRYPTO_malloc(lVar3,"ssl\\s3_lib.c",0x11fe);
    if (puVar2 == (undefined1 *)0x0) goto LAB_143cc822b;
    _Dst = puVar2 + 2;
    *puVar2 = (char)(param_3 >> 8);
    puVar2[1] = (char)param_3;
    if (uVar5 == 0) {
      _guard_xfg_dispatch_icall_nop(_Dst,param_2,param_3);
    }
    else {
      _guard_xfg_dispatch_icall_nop(_Dst,0,param_3);
    }
    puVar2[param_3 + 3] = (char)_Size;
    _Dst[param_3] = (char)(_Size >> 8);
    _guard_xfg_dispatch_icall_nop
              (_Dst + param_3 + 2,*(void **)(*(longlong *)(param_1 + 0xa8) + 0x2c8),_Size);
    CRYPTO_clear_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2c8),_Size,"ssl\\s3_lib.c",
                      0x120b);
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2c8) = 0;
    iVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x18))
                      (param_1,*(longlong *)(param_1 + 0x508) + 0x50,puVar2,lVar3,
                       *(longlong *)(param_1 + 0x508) + 8);
    if (iVar1 == 0) {
      CRYPTO_clear_free(puVar2,lVar3,"ssl\\s3_lib.c",0x1210);
      goto LAB_143cc822b;
    }
    CRYPTO_clear_free(puVar2,lVar3,"ssl\\s3_lib.c",0x1214);
  }
  uVar4 = 1;
LAB_143cc822b:
  if (param_2 != (void *)0x0) {
    if (param_4 == 0) {
      FUN_14004ff40(param_2,param_3);
    }
    else {
      CRYPTO_clear_free(param_2,param_3,"ssl\\s3_lib.c",0x1226);
    }
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2b8) = 0;
  }
  return uVar4;
}



// FUNCTION 143cc82a0 ssl_generate_param_group body=248 status=ok
// SIG undefined ssl_generate_param_group(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ssl_generate_param_group(void)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong local_res10 [3];
  
  lVar3 = 0;
  local_res10[0] = 0;
  puVar2 = (undefined4 *)tls1_group_id_lookup();
  if (puVar2 != (undefined4 *)0x0) {
    if ((*(byte *)(puVar2 + 2) & 3) == 2) {
      local_res10[0] = EVP_PKEY_new();
      if ((local_res10[0] != 0) && (iVar1 = EVP_PKEY_set_type(local_res10[0],*puVar2), iVar1 != 0))
      {
        return local_res10[0];
      }
      EVP_PKEY_free(local_res10[0]);
      return 0;
    }
    lVar3 = EVP_PKEY_CTX_new_id(0x198,0);
    if ((((lVar3 != 0) && (iVar1 = EVP_PKEY_paramgen_init(lVar3), 0 < iVar1)) &&
        (iVar1 = EVP_PKEY_CTX_ctrl(lVar3,0x198,6,0x1001,*puVar2,0), 0 < iVar1)) &&
       (iVar1 = EVP_PKEY_paramgen(lVar3,local_res10), iVar1 < 1)) {
      EVP_PKEY_free(local_res10[0]);
      local_res10[0] = 0;
    }
  }
  EVP_PKEY_CTX_free(lVar3);
  return local_res10[0];
}



// FUNCTION 143cc83a0 ssl_generate_pkey body=125 status=ok
// SIG undefined ssl_generate_pkey(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_generate_pkey(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_res8 [4];
  
  local_res8[0] = 0;
  if (param_1 == 0) {
    return 0;
  }
  lVar2 = EVP_PKEY_CTX_new(param_1,0);
  if (lVar2 != 0) {
    iVar1 = EVP_PKEY_keygen_init(lVar2);
    if (0 < iVar1) {
      iVar1 = EVP_PKEY_keygen(lVar2,local_res8);
      if (iVar1 < 1) {
        EVP_PKEY_free(local_res8[0]);
        local_res8[0] = 0;
      }
    }
  }
  EVP_PKEY_CTX_free(lVar2);
  return local_res8[0];
}



// FUNCTION 143cc8420 ssl_generate_pkey_group body=415 status=ok
// SIG undefined ssl_generate_pkey_group(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_generate_pkey_group(undefined8 param_1,undefined2 param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 local_res18;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar8 = 1;
  lVar4 = 0;
  local_res18 = 0;
  puVar3 = (undefined4 *)tls1_group_id_lookup(param_2);
  if (puVar3 == (undefined4 *)0x0) {
    ossl_statem_fatal(param_1,0x50,0x22f,0x44,"ssl\\s3_lib.c",CONCAT44(uVar8,0x1250));
    goto LAB_143cc85a2;
  }
  uVar1 = *(ushort *)(puVar3 + 2);
  if ((uVar1 & 3) == 2) {
    uVar5 = *puVar3;
  }
  else {
    uVar5 = 0x198;
  }
  lVar4 = EVP_PKEY_CTX_new_id(uVar5,0);
  if (lVar4 == 0) {
    ossl_statem_fatal(param_1,0x50,0x22f,0x41,"ssl\\s3_lib.c",CONCAT44(uVar8,0x125a));
    goto LAB_143cc85a2;
  }
  iVar2 = EVP_PKEY_keygen_init(lVar4);
  if (iVar2 < 1) {
    uVar7 = CONCAT44(uVar8,0x125f);
LAB_143cc8529:
    ossl_statem_fatal(param_1,0x50,0x22f,6,"ssl\\s3_lib.c",uVar7);
  }
  else {
    if ((uVar1 & 3) != 2) {
      uVar8 = 0;
      iVar2 = EVP_PKEY_CTX_ctrl(lVar4,0x198,6,0x1001,CONCAT44(uVar6,*puVar3),0);
      if (iVar2 < 1) {
        uVar7 = CONCAT44(uVar8,0x1265);
        goto LAB_143cc8529;
      }
    }
    iVar2 = EVP_PKEY_keygen(lVar4,&local_res18);
    if (iVar2 < 1) {
      ossl_statem_fatal(param_1,0x50,0x22f,6,"ssl\\s3_lib.c",CONCAT44(uVar8,0x126a));
      EVP_PKEY_free(local_res18);
      local_res18 = 0;
    }
  }
LAB_143cc85a2:
  EVP_PKEY_CTX_free(lVar4);
  return local_res18;
}



// FUNCTION 143cc85c0 ssl_get_algorithm2 body=92 status=ok
// SIG undefined ssl_get_algorithm2(void)

int ssl_get_algorithm2(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0xa8) == 0) ||
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238), lVar2 == 0)) {
    return -1;
  }
  iVar1 = *(int *)(lVar2 + 0x40);
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 4) == 0) {
    if (((*(uint *)(lVar2 + 0x1c) & 0x1c8) != 0) && (iVar1 == 0x505)) {
      return 0x909;
    }
  }
  else if (iVar1 == 0x909) {
    return 0x404;
  }
  return iVar1;
}



// FUNCTION 143cc8620 ssl_sort_cipher_list body=103 status=ok
// SIG undefined ssl_sort_cipher_list(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl_sort_cipher_list(void)

{
  qsort(&DAT_146832da0,5,0x50,(_PtFuncCompare *)&LAB_143cc5a90);
  qsort(&DAT_146832f30,0xa4,0x50,(_PtFuncCompare *)&LAB_143cc5a90);
                    /* WARNING: Could not recover jumptable at 0x000143cc8680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  qsort(&DAT_146836270,2,0x50,(_PtFuncCompare *)&LAB_143cc5a90);
  return;
}



// FUNCTION 143cc8690 ssl3_dispatch_alert body=303 status=ok
// SIG undefined ssl3_dispatch_alert(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ssl3_dispatch_alert(undefined4 *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  ulonglong in_stack_ffffffffffffffe0;
  
  *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0xfc) = 0;
  local_res8 = 2;
  uVar1 = do_ssl3_write(param_1,0x15,*(longlong *)(param_1 + 0x2a) + 0x100,&local_res8,1,
                        in_stack_ffffffffffffffe0 & 0xffffffff00000000,local_res10,0x143cc86a0);
  if ((int)uVar1 < 1) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0xfc) = 1;
    return uVar1;
  }
  BIO_ctrl(*(undefined8 *)(param_1 + 6),0xb,0);
  if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
    (**(code **)(param_1 + 0x2e))
              (1,*param_1,0x15,*(longlong *)(param_1 + 0x2a) + 0x100,2,param_1,
               *(undefined8 *)(param_1 + 0x30));
  }
  pcVar2 = *(code **)(param_1 + 0x15a);
  if ((pcVar2 != (code *)0x0) ||
     (pcVar2 = *(code **)(*(longlong *)(param_1 + 0x166) + 0x108), pcVar2 != (code *)0x0)) {
    (*pcVar2)(param_1,0x4008,
              CONCAT11(*(undefined1 *)(*(longlong *)(param_1 + 0x2a) + 0x100),
                       *(undefined1 *)(*(longlong *)(param_1 + 0x2a) + 0x101)));
  }
  return uVar1 & 0xffffffff;
}



// FUNCTION 143cc87c0 ssl3_do_change_cipher_spec body=197 status=ok
// SIG undefined ssl3_do_change_cipher_spec(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_do_change_cipher_spec(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0x21;
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar3 = 0x11;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x270) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x508);
    if ((lVar1 == 0) || (*(longlong *)(lVar1 + 8) == 0)) {
      ERR_put_error(0x14,0x124,0x85,"ssl\\s3_msg.c",0x18,0x143cc87d0);
      return 0;
    }
    *(undefined8 *)(lVar1 + 0x128) = *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x238);
    iVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x10))(param_1);
    if (iVar2 == 0) {
      return 0;
    }
  }
  iVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x20))(param_1,uVar3);
  if (iVar2 == 0) {
    return 0;
  }
  return 1;
}



// FUNCTION 143cc8890 ssl3_send_alert body=263 status=ok
// SIG undefined ssl3_send_alert(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_send_alert(int *param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  
  lVar1 = *(longlong *)(*(int **)(param_1 + 2) + 0x30);
  if (((((*(byte *)(lVar1 + 0x60) & 8) == 0) && (iVar2 = **(int **)(param_1 + 2), 0x303 < iVar2)) &&
      (iVar2 != 0x10000)) || ((param_1[0x21] - 1U < 4 || (param_1[0x136] == 1)))) {
    iVar2 = tls13_alert_code(param_3);
  }
  else {
    iVar2 = (**(code **)(lVar1 + 0x50))(param_3);
  }
  uVar4 = (undefined1)iVar2;
  if ((*param_1 == 0x300) && (iVar2 == 0x46)) {
    uVar4 = 0x28;
  }
  else if (iVar2 < 0) {
    return 0xffffffff;
  }
  if ((param_2 == 2) && (*(longlong *)(param_1 + 0x142) != 0)) {
    SSL_CTX_remove_session(*(undefined8 *)(param_1 + 0x1ce));
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0xfc) = 1;
  *(char *)(*(longlong *)(param_1 + 0x2a) + 0x100) = (char)param_2;
  *(undefined1 *)(*(longlong *)(param_1 + 0x2a) + 0x101) = uVar4;
  iVar2 = RECORD_LAYER_write_pending(param_1 + 0x200);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x000143cc897e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(longlong *)(param_1 + 2) + 0x78))(param_1);
  return uVar3;
}



// FUNCTION 143cc89a0 dtls1_dispatch_alert body=320 status=ok
// SIG undefined dtls1_dispatch_alert(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int dtls1_dispatch_alert(undefined4 *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined2 local_res8 [4];
  undefined1 local_res10 [8];
  ulonglong in_stack_ffffffffffffffd8;
  undefined8 uVar3;
  
  uVar3 = 0x143cc89b0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0xfc) = 0;
  local_res8[0] = *(undefined2 *)(*(longlong *)(param_1 + 0x2a) + 0x100);
  iVar1 = do_dtls1_write(param_1,0x15,local_res8,2,in_stack_ffffffffffffffd8 & 0xffffffff00000000,
                         local_res10);
  if (iVar1 < 1) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0xfc) = 1;
    return iVar1;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x2a) + 0x100) == '\x02') {
    BIO_ctrl(*(undefined8 *)(param_1 + 6),0xb,0);
  }
  if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
    (**(code **)(param_1 + 0x2e))
              (1,*param_1,0x15,*(longlong *)(param_1 + 0x2a) + 0x100,2,param_1,
               *(undefined8 *)(param_1 + 0x30),uVar3);
  }
  pcVar2 = *(code **)(param_1 + 0x15a);
  if ((pcVar2 != (code *)0x0) ||
     (pcVar2 = *(code **)(*(longlong *)(param_1 + 0x166) + 0x108), pcVar2 != (code *)0x0)) {
    (*pcVar2)(param_1,0x4008,
              CONCAT11(*(undefined1 *)(*(longlong *)(param_1 + 0x2a) + 0x100),
                       *(undefined1 *)(*(longlong *)(param_1 + 0x2a) + 0x101)));
  }
  return iVar1;
}



// FUNCTION 143cc8ae0 dtls1_write_app_data_bytes body=211 status=ok
// SIG undefined dtls1_write_app_data_bytes(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
dtls1_write_app_data_bytes
          (longlong param_1,undefined4 param_2,undefined8 param_3,ulonglong param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar4 = 0x143cc8afa;
  iVar1 = FSlateAccessibleWidget::GetId();
  if ((iVar1 != 0) && (iVar1 = ossl_statem_get_in_handshake(param_1), iVar1 == 0)) {
    uVar2 = (**(code **)(param_1 + 0x30))(param_1);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    if ((int)uVar2 == 0) {
      ERR_put_error(0x14,0x10c,0xe5,"ssl\\d1_msg.c",CONCAT44(uVar3,0x17));
      return 0xffffffff;
    }
  }
  if (param_4 < 0x4001) {
    uVar4 = dtls1_write_bytes(param_1,param_2,param_3,param_4,param_5,uVar4);
  }
  else {
    ERR_put_error(0x14,0x10c,0x14e,"ssl\\d1_msg.c",CONCAT44(uVar3,0x1d));
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



// FUNCTION 143cc8bc0 ERR_load_SSL_strings body=62 status=ok
// SIG undefined ERR_load_SSL_strings(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_load_SSL_strings(void)

{
  longlong lVar1;
  
  lVar1 = ERR_func_error_string(0x141b6000);
  if (lVar1 == 0) {
    ERR_load_strings_const(&DAT_145d4e400);
    ERR_load_strings_const(&DAT_145d4feb0);
  }
  return 1;
}



// FUNCTION 143cc8c00 WPACKET_allocate_bytes body=69 status=ok
// SIG undefined WPACKET_allocate_bytes(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 WPACKET_allocate_bytes(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = WPACKET_reserve_bytes();
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + param_2;
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + param_2;
  return 1;
}



// FUNCTION 143cc8c50 WPACKET_cleanup body=80 status=ok
// SIG undefined WPACKET_cleanup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void WPACKET_cleanup(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    CRYPTO_free(puVar2,"ssl\\packet.c",0x1a5);
    puVar2 = puVar1;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 143cc8ca0 WPACKET_close body=48 status=ok
// SIG undefined WPACKET_close(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 WPACKET_close(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
    uVar2 = wpacket_intern_close(param_1,plVar1,1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 143cc8cd0 WPACKET_fill_lengths body=118 status=ok
// SIG undefined WPACKET_fill_lengths(void)

undefined8 WPACKET_fill_lengths(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)param_1[5];
  if (plVar5 != (longlong *)0x0) {
    while ((uVar1 = param_1[3] - plVar5[3], uVar1 != 0 ||
           (((*(uint *)(plVar5 + 4) & 1) == 0 && ((*(uint *)(plVar5 + 4) & 2) == 0))))) {
      lVar4 = plVar5[2];
      if (lVar4 != 0) {
        lVar2 = param_1[1];
        if (lVar2 == 0) {
          lVar2 = *(longlong *)(*param_1 + 8);
        }
        puVar3 = (undefined1 *)(lVar4 + -1 + plVar5[1] + lVar2);
        do {
          *puVar3 = (char)uVar1;
          puVar3 = puVar3 + -1;
          uVar1 = uVar1 >> 8;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        if (uVar1 != 0) {
          return 0;
        }
      }
      plVar5 = (longlong *)*plVar5;
      if (plVar5 == (longlong *)0x0) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143cc8d50 WPACKET_finish body=104 status=ok
// SIG undefined WPACKET_finish(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int WPACKET_finish(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if ((plVar1 != (longlong *)0x0) && (*plVar1 == 0)) {
    iVar2 = wpacket_intern_close(param_1,plVar1,1);
    if (iVar2 != 0) {
      CRYPTO_free(*(undefined8 *)(param_1 + 0x28),"ssl\\packet.c",0x109);
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    return iVar2;
  }
  return 0;
}



// FUNCTION 143cc8dc0 WPACKET_get_curr body=24 status=ok
// SIG undefined WPACKET_get_curr(void)

longlong WPACKET_get_curr(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(*param_1 + 8);
  }
  return param_1[2] + lVar1;
}



// FUNCTION 143cc8de0 WPACKET_get_length body=34 status=ok
// SIG undefined WPACKET_get_length(void)

undefined8 WPACKET_get_length(longlong param_1,longlong *param_2)

{
  if ((*(longlong *)(param_1 + 0x28) != 0) && (param_2 != (longlong *)0x0)) {
    *param_2 = *(longlong *)(param_1 + 0x18) - *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18);
    return 1;
  }
  return 0;
}



// FUNCTION 143cc8e10 WPACKET_get_total_written body=21 status=ok
// SIG undefined WPACKET_get_total_written(void)

undefined8 WPACKET_get_total_written(longlong param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    return 0;
  }
  *param_2 = *(undefined8 *)(param_1 + 0x18);
  return 1;
}



// FUNCTION 143cc8e30 WPACKET_init body=143 status=ok
// SIG undefined WPACKET_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 WPACKET_init(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143cc8e40;
  uVar2 = 0;
  if (param_2 != 0) {
    *param_1 = param_2;
    param_1[1] = 0;
    param_1[4] = -1;
    param_1[2] = 0;
    param_1[3] = 0;
    lVar1 = CRYPTO_zalloc(0x28,"ssl\\packet.c",0x61);
    param_1[5] = lVar1;
    if (lVar1 == 0) {
      ERR_put_error(0x14,0x279,0x41,"ssl\\packet.c",0x62,uVar3);
      return 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 143cc8ec0 WPACKET_init_static_len body=112 status=ok
// SIG undefined WPACKET_init_static_len(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
WPACKET_init_static_len(undefined8 *param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  if (param_4 - 1U < 7) {
    uVar1 = param_4 + -1 + (1L << (((byte)param_4 & 7) << 3));
  }
  else {
    uVar1 = 0xffffffffffffffff;
  }
  if ((param_2 != 0) && (param_3 != 0)) {
    param_1[1] = param_2;
    *param_1 = 0;
    if (uVar1 < param_3) {
      param_3 = uVar1;
    }
    param_1[4] = param_3;
    uVar2 = wpacket_intern_init_len(param_1,param_4);
    return uVar2;
  }
  return 0;
}



// FUNCTION 143cc8f30 WPACKET_memcpy body=241 status=ok
// SIG undefined WPACKET_memcpy(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 WPACKET_memcpy(longlong *param_1,void *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_3 != 0) {
    if ((param_1[5] == 0) || ((ulonglong)(param_1[4] - param_1[3]) < param_3)) {
      return 0;
    }
    if (param_1[1] == 0) {
      uVar3 = *(ulonglong *)*param_1;
      if (uVar3 - param_1[3] < param_3) {
        if (uVar3 < param_3) {
          uVar3 = param_3;
        }
        if (uVar3 < 0x8000000000000000) {
          uVar3 = uVar3 * 2;
          if (uVar3 < 0x100) {
            uVar3 = 0x100;
          }
        }
        else {
          uVar3 = 0xffffffffffffffff;
        }
        lVar2 = BUF_MEM_grow((ulonglong *)*param_1,uVar3);
        if (lVar2 == 0) {
          return 0;
        }
      }
    }
    lVar2 = param_1[1];
    if (lVar2 == 0) {
      lVar2 = *(longlong *)(*param_1 + 8);
    }
    lVar1 = param_1[2];
    param_1[3] = param_1[3] + param_3;
    param_1[2] = lVar1 + param_3;
    _guard_xfg_dispatch_icall_nop((void *)(lVar2 + lVar1),param_2,param_3);
  }
  return 1;
}



// FUNCTION 143cc9030 WPACKET_memset body=239 status=ok
// SIG undefined WPACKET_memset(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 WPACKET_memset(longlong *param_1,int param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_3 != 0) {
    if ((param_1[5] == 0) || ((ulonglong)(param_1[4] - param_1[3]) < param_3)) {
      return 0;
    }
    if (param_1[1] == 0) {
      uVar3 = *(ulonglong *)*param_1;
      if (uVar3 - param_1[3] < param_3) {
        if (uVar3 < param_3) {
          uVar3 = param_3;
        }
        if (uVar3 < 0x8000000000000000) {
          uVar3 = uVar3 * 2;
          if (uVar3 < 0x100) {
            uVar3 = 0x100;
          }
        }
        else {
          uVar3 = 0xffffffffffffffff;
        }
        lVar2 = BUF_MEM_grow((ulonglong *)*param_1,uVar3);
        if (lVar2 == 0) {
          return 0;
        }
      }
    }
    lVar2 = param_1[1];
    if (lVar2 == 0) {
      lVar2 = *(longlong *)(*param_1 + 8);
    }
    lVar1 = param_1[2];
    param_1[3] = param_1[3] + param_3;
    param_1[2] = lVar1 + param_3;
    _guard_xfg_dispatch_icall_nop((void *)(lVar2 + lVar1),param_2,param_3);
  }
  return 1;
}



// FUNCTION 143cc9120 WPACKET_put_bytes__ body=282 status=ok
// SIG undefined WPACKET_put_bytes__(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 WPACKET_put_bytes__(longlong *param_1,uint param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)param_2;
  if ((((param_3 < 5) && (param_1[5] != 0)) && (param_3 != 0)) &&
     (param_3 <= (ulonglong)(param_1[4] - param_1[3]))) {
    if (param_1[1] == 0) {
      uVar4 = *(ulonglong *)*param_1;
      if (uVar4 - param_1[3] < param_3) {
        if (uVar4 < param_3) {
          uVar4 = param_3;
        }
        if (uVar4 < 0x8000000000000000) {
          uVar4 = uVar4 * 2;
          if (uVar4 < 0x100) {
            uVar4 = 0x100;
          }
        }
        else {
          uVar4 = 0xffffffffffffffff;
        }
        lVar2 = BUF_MEM_grow((ulonglong *)*param_1,uVar4);
        if (lVar2 == 0) {
          return 0;
        }
      }
    }
    lVar2 = param_1[1];
    if (lVar2 == 0) {
      lVar2 = *(longlong *)(*param_1 + 8);
    }
    lVar1 = param_1[2];
    param_1[3] = param_1[3] + param_3;
    param_1[2] = lVar1 + param_3;
    puVar3 = (undefined1 *)(lVar1 + -1 + param_3 + lVar2);
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *puVar3 = (char)uVar5;
      puVar3 = puVar3 + -1;
      uVar5 = uVar5 >> 8;
    }
    if (uVar5 == 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143cc9240 WPACKET_reserve_bytes body=206 status=ok
// SIG undefined WPACKET_reserve_bytes(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 WPACKET_reserve_bytes(longlong *param_1,ulonglong param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (((param_1[5] == 0) || (param_2 == 0)) || ((ulonglong)(param_1[4] - param_1[3]) < param_2)) {
    return 0;
  }
  if (param_1[1] == 0) {
    uVar2 = *(ulonglong *)*param_1;
    if (uVar2 - param_1[3] < param_2) {
      if (uVar2 < param_2) {
        uVar2 = param_2;
      }
      if (uVar2 < 0x8000000000000000) {
        uVar2 = uVar2 * 2;
        if (uVar2 < 0x100) {
          uVar2 = 0x100;
        }
      }
      else {
        uVar2 = 0xffffffffffffffff;
      }
      lVar1 = BUF_MEM_grow((ulonglong *)*param_1,uVar2);
      if (lVar1 == 0) {
        return 0;
      }
    }
  }
  if (param_3 != (longlong *)0x0) {
    lVar1 = param_1[1];
    if (lVar1 == 0) {
      lVar1 = *(longlong *)(*param_1 + 8);
    }
    *param_3 = lVar1 + param_1[2];
  }
  return 1;
}



// FUNCTION 143cc9310 WPACKET_set_flags body=19 status=ok
// SIG undefined WPACKET_set_flags(void)

undefined8 WPACKET_set_flags(longlong param_1,undefined4 param_2)

{
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return 0;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x20) = param_2;
  return 1;
}



// FUNCTION 143cc9330 WPACKET_set_max_size body=115 status=ok
// SIG undefined WPACKET_set_max_size(void)

undefined8 WPACKET_set_max_size(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  if (puVar1 != (undefined8 *)0x0) {
    for (puVar3 = (undefined8 *)*puVar1; puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)*puVar3
        ) {
      puVar1 = puVar3;
    }
    lVar2 = puVar1[2];
    if (lVar2 - 1U < 7) {
      uVar4 = lVar2 + -1 + (1L << (((byte)lVar2 & 7) << 3));
    }
    else {
      uVar4 = 0xffffffffffffffff;
    }
    if ((param_2 <= uVar4) && (*(ulonglong *)(param_1 + 0x18) <= param_2)) {
      *(ulonglong *)(param_1 + 0x20) = param_2;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143cc93b0 WPACKET_start_sub_packet body=140 status=ok
// SIG undefined WPACKET_start_sub_packet(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 WPACKET_start_sub_packet(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143cc93bc;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    puVar1 = (undefined8 *)CRYPTO_zalloc(0x28,"ssl\\packet.c",0x119);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 **)(param_1 + 0x28) = puVar1;
      puVar1[3] = *(undefined8 *)(param_1 + 0x18);
      puVar1[2] = 0;
      puVar1[1] = 0;
      return 1;
    }
    ERR_put_error(0x14,0x27a,0x41,"ssl\\packet.c",0x11a,uVar2);
  }
  return 0;
}



// FUNCTION 143cc9440 WPACKET_start_sub_packet_len__ body=360 status=ok
// SIG undefined WPACKET_start_sub_packet_len__(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 WPACKET_start_sub_packet_len__(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143cc9455;
  if (param_1[5] != 0) {
    plVar2 = (longlong *)CRYPTO_zalloc(0x28,"ssl\\packet.c",0x119);
    if (plVar2 == (longlong *)0x0) {
      ERR_put_error(0x14,0x27a,0x41,"ssl\\packet.c",0x11a,uVar6);
    }
    else {
      *plVar2 = param_1[5];
      param_1[5] = (longlong)plVar2;
      plVar2[3] = param_1[3] + param_2;
      plVar2[2] = param_2;
      if (param_2 == 0) {
        plVar2[1] = 0;
        return 1;
      }
      if ((param_1[5] != 0) && (param_2 <= (ulonglong)(param_1[4] - param_1[3]))) {
        if (param_1[1] == 0) {
          uVar5 = *(ulonglong *)*param_1;
          if (uVar5 - param_1[3] < param_2) {
            if (uVar5 < param_2) {
              uVar5 = param_2;
            }
            if (uVar5 < 0x8000000000000000) {
              uVar5 = uVar5 * 2;
              if (uVar5 < 0x100) {
                uVar5 = 0x100;
              }
            }
            else {
              uVar5 = 0xffffffffffffffff;
            }
            lVar3 = BUF_MEM_grow((ulonglong *)*param_1,uVar5);
            if (lVar3 == 0) {
              return 0;
            }
          }
        }
        lVar3 = param_1[1];
        lVar4 = lVar3;
        if (lVar3 == 0) {
          lVar4 = *(longlong *)(*param_1 + 8);
        }
        lVar1 = param_1[2];
        param_1[3] = param_1[3] + param_2;
        param_1[2] = lVar1 + param_2;
        if (lVar3 == 0) {
          lVar3 = *(longlong *)(*param_1 + 8);
        }
        plVar2[1] = (lVar4 + lVar1) - lVar3;
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143cc95b0 WPACKET_sub_allocate_bytes__ body=143 status=ok
// SIG undefined WPACKET_sub_allocate_bytes__(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
WPACKET_sub_allocate_bytes__
          (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = WPACKET_start_sub_packet_len__(param_1,param_4);
  if (iVar2 != 0) {
    iVar2 = WPACKET_reserve_bytes(param_1,param_2,param_3);
    if (iVar2 != 0) {
      *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + param_2;
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + param_2;
      plVar1 = *(longlong **)(param_1 + 0x28);
      if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
        iVar2 = wpacket_intern_close(param_1,plVar1,1);
        if (iVar2 != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143cc9640 WPACKET_sub_memcpy__ body=290 status=ok
// SIG undefined WPACKET_sub_memcpy__(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
WPACKET_sub_memcpy__(longlong *param_1,void *param_2,ulonglong param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  iVar3 = WPACKET_start_sub_packet_len__(param_1,param_4);
  if (iVar3 != 0) {
    if (param_3 != 0) {
      if (param_1[5] == 0) {
        return 0;
      }
      if ((ulonglong)(param_1[4] - param_1[3]) < param_3) {
        return 0;
      }
      if (param_1[1] == 0) {
        uVar5 = *(ulonglong *)*param_1;
        if (uVar5 - param_1[3] < param_3) {
          if (uVar5 < param_3) {
            uVar5 = param_3;
          }
          if (uVar5 < 0x8000000000000000) {
            uVar5 = uVar5 * 2;
            if (uVar5 < 0x100) {
              uVar5 = 0x100;
            }
          }
          else {
            uVar5 = 0xffffffffffffffff;
          }
          lVar4 = BUF_MEM_grow((ulonglong *)*param_1,uVar5);
          if (lVar4 == 0) {
            return 0;
          }
        }
      }
      lVar4 = param_1[1];
      if (lVar4 == 0) {
        lVar4 = *(longlong *)(*param_1 + 8);
      }
      lVar1 = param_1[2];
      param_1[3] = param_1[3] + param_3;
      param_1[2] = lVar1 + param_3;
      _guard_xfg_dispatch_icall_nop((void *)(lVar4 + lVar1),param_2,param_3);
    }
    plVar2 = (longlong *)param_1[5];
    if (((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) &&
       (iVar3 = wpacket_intern_close(param_1,plVar2,1), iVar3 != 0)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143cc9770 WPACKET_sub_reserve_bytes__ body=67 status=ok
// SIG undefined WPACKET_sub_reserve_bytes__(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
WPACKET_sub_reserve_bytes__(undefined8 param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  undefined8 uVar1;
  
  uVar1 = WPACKET_reserve_bytes(param_1,param_2 + param_4);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  *param_3 = *param_3 + param_4;
  return 1;
}



// FUNCTION 143cc97c0 wpacket_intern_close body=216 status=ok
// SIG undefined wpacket_intern_close(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 wpacket_intern_close(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  
  uVar4 = param_1[3] - param_2[3];
  if (uVar4 == 0) {
    if ((*(uint *)(param_2 + 4) & 1) != 0) {
      return 0;
    }
    if ((*(uint *)(param_2 + 4) & 2) != 0) {
      if (param_3 == 0) {
        return 0;
      }
      if (param_1[2] - param_2[2] == param_2[1]) {
        param_1[3] = param_1[3] - param_2[2];
        param_1[2] = param_1[2] - param_2[2];
      }
      param_2[1] = 0;
      param_2[2] = 0;
    }
  }
  lVar3 = param_2[2];
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    if (lVar1 == 0) {
      lVar1 = *(longlong *)(*param_1 + 8);
    }
    puVar2 = (undefined1 *)(lVar3 + -1 + param_2[1] + lVar1);
    do {
      *puVar2 = (char)uVar4;
      puVar2 = puVar2 + -1;
      uVar4 = uVar4 >> 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    bVar5 = uVar4 != 0;
    uVar4 = 0;
    if (bVar5) {
      return 0;
    }
  }
  if (param_3 != 0) {
    param_1[5] = *param_2;
    CRYPTO_free(param_2,"ssl\\packet.c",0xdb,uVar4,0x143cc97ca);
  }
  return 1;
}



// FUNCTION 143cc98a0 wpacket_intern_init_len body=365 status=ok
// SIG undefined wpacket_intern_init_len(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 wpacket_intern_init_len(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143cc98b0;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar2 = CRYPTO_zalloc(0x28,"ssl\\packet.c",0x61);
  param_1[5] = lVar2;
  if (lVar2 == 0) {
    ERR_put_error(0x14,0x279,0x41,"ssl\\packet.c",0x62,uVar5);
    return 0;
  }
  if (param_2 != 0) {
    *(ulonglong *)(lVar2 + 0x18) = param_2;
    *(ulonglong *)(param_1[5] + 0x10) = param_2;
    lVar2 = param_1[5];
    if ((lVar2 == 0) || ((ulonglong)(param_1[4] - param_1[3]) < param_2)) {
LAB_143cc9998:
      CRYPTO_free(lVar2,"ssl\\packet.c",0x6d);
      param_1[5] = 0;
      return 0;
    }
    if (param_1[1] == 0) {
      uVar4 = *(ulonglong *)*param_1;
      if (uVar4 - param_1[3] < param_2) {
        if (uVar4 < param_2) {
          uVar4 = param_2;
        }
        if (uVar4 < 0x8000000000000000) {
          uVar4 = uVar4 * 2;
          if (uVar4 < 0x100) {
            uVar4 = 0x100;
          }
        }
        else {
          uVar4 = 0xffffffffffffffff;
        }
        lVar2 = BUF_MEM_grow((ulonglong *)*param_1,uVar4);
        if (lVar2 == 0) {
          lVar2 = param_1[5];
          goto LAB_143cc9998;
        }
      }
    }
    lVar2 = param_1[1];
    lVar3 = lVar2;
    if (lVar2 == 0) {
      lVar3 = *(longlong *)(*param_1 + 8);
    }
    lVar1 = param_1[2];
    param_1[3] = param_1[3] + param_2;
    param_1[2] = lVar1 + param_2;
    if (lVar2 == 0) {
      lVar2 = *(longlong *)(*param_1 + 8);
    }
    *(longlong *)(param_1[5] + 8) = (lVar3 + lVar1) - lVar2;
  }
  return 1;
}



// FUNCTION 143cc9a10 final_renegotiate body=131 status=ok
// SIG undefined final_renegotiate(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 final_renegotiate(longlong param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    if (((*(uint *)(param_1 + 0x5c4) & 0x40004) != 0) || (param_3 != 0)) {
      return 1;
    }
    uVar1 = 0x375;
  }
  else {
    if (*(int *)(param_1 + 0x750) == 0) {
      return 1;
    }
    if ((*(uint *)(param_1 + 0x5c4) & 0x40000) != 0) {
      return 1;
    }
    if (param_3 != 0) {
      return 1;
    }
    uVar1 = 0x381;
  }
  ossl_statem_fatal(param_1,0x28,0x1e3,0x152,"ssl\\statem\\extensions.c",uVar1,0x143cc9a1a);
  return 0;
}



// FUNCTION 143cc9aa0 init_server_name body=81 status=ok
// SIG undefined init_server_name(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 init_server_name(longlong param_1)

{
  if (*(int *)(param_1 + 0x38) != 0) {
    *(undefined4 *)(param_1 + 0x710) = 0;
    CRYPTO_free(*(undefined8 *)(param_1 + 0x630),"ssl\\statem\\extensions.c",0x38e);
    *(undefined8 *)(param_1 + 0x630) = 0;
  }
  return 1;
}



// FUNCTION 143cc9b00 final_server_name body=773 status=ok
// SIG undefined final_server_name(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 final_server_name(longlong param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 local_res8 [2];
  undefined4 uVar9;
  
  uVar9 = 1;
  local_res8[0] = 0x70;
  iVar7 = 3;
  uVar3 = SSL_get_options();
  lVar6 = *(longlong *)(param_1 + 0x598);
  if ((lVar6 == 0) || (lVar2 = *(longlong *)(param_1 + 0x738), lVar2 == 0)) {
    uVar5 = CONCAT44(uVar9,0x39d);
  }
  else {
    if (*(code **)(lVar6 + 0x1f0) == (code *)0x0) {
      if (*(code **)(lVar2 + 0x1f0) != (code *)0x0) {
        iVar7 = (**(code **)(lVar2 + 0x1f0))(param_1,local_res8,*(undefined8 *)(lVar2 + 0x1f8));
      }
    }
    else {
      iVar7 = (**(code **)(lVar6 + 0x1f0))(param_1,local_res8,*(undefined8 *)(lVar6 + 0x1f8));
    }
    if ((((*(int *)(param_1 + 0x38) != 0) && (param_3 != 0)) && (iVar7 == 0)) &&
       ((*(int *)(param_1 + 200) == 0 ||
        ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0 &&
          (iVar4 = **(int **)(param_1 + 8), 0x303 < iVar4)) && (iVar4 != 0x10000)))))) {
      CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x158),
                  "ssl\\statem\\extensions.c",0x3b4);
      uVar5 = CRYPTO_strdup(*(undefined8 *)(param_1 + 0x630),"ssl\\statem\\extensions.c",0x3b5);
      *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x158) = uVar5;
      if ((*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x158) == 0) &&
         (*(longlong *)(param_1 + 0x630) != 0)) {
        uVar5 = CONCAT44(uVar9,0x3b8);
        ossl_statem_fatal(param_1,0x50,0x22e,0x44,"ssl\\statem\\extensions.c",uVar5);
        uVar9 = (undefined4)((ulonglong)uVar5 >> 0x20);
      }
    }
    if (((*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x198) == 0) ||
        (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x220) == 0)) &&
       (*(longlong *)(param_1 + 0x598) != *(longlong *)(param_1 + 0x738))) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(param_1 + 0x598) + 0x74);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      LOCK();
      piVar1 = (int *)(*(longlong *)(param_1 + 0x738) + 0x74);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    if (((iVar7 != 0) || (*(int *)(param_1 + 0x670) == 0)) ||
       (((~(uVar3 >> 0xe) & 1) == 0 ||
        ((uVar3 = SSL_get_options(param_1), (uVar3 >> 0xe & 1) == 0 ||
         (*(undefined4 *)(param_1 + 0x670) = 0, *(int *)(param_1 + 200) != 0)))))) {
LAB_143cc9d56:
      if (iVar7 == 1) {
        if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0) ||
            (iVar7 = **(int **)(param_1 + 8), iVar7 < 0x304)) || (iVar7 == 0x10000)) {
          ssl3_send_alert(param_1,1,local_res8[0]);
        }
        return 1;
      }
      if (iVar7 != 2) {
        if (iVar7 != 3) {
          return 1;
        }
        *(undefined4 *)(param_1 + 0x710) = 0;
        return 1;
      }
      uVar8 = 0xea;
      uVar5 = CONCAT44(uVar9,0x3e9);
      uVar9 = local_res8[0];
      goto LAB_143cc9ddd;
    }
    lVar6 = USkinnedMeshComponent::GetRefPoseOverride(param_1);
    if (lVar6 == 0) {
      uVar5 = CONCAT44(uVar9,0x3e1);
    }
    else {
      CRYPTO_free(*(undefined8 *)(lVar6 + 0x180),"ssl\\statem\\extensions.c",0x3d4);
      *(undefined8 *)(lVar6 + 0x180) = 0;
      *(undefined8 *)(lVar6 + 0x188) = 0;
      *(undefined8 *)(lVar6 + 400) = 0;
      *(undefined4 *)(lVar6 + 0x198) = 0;
      iVar4 = ssl_generate_session_id(param_1,lVar6);
      if (iVar4 != 0) goto LAB_143cc9d56;
      uVar5 = CONCAT44(uVar9,0x3dc);
    }
  }
  uVar8 = 0x44;
  uVar9 = 0x50;
LAB_143cc9ddd:
  ossl_statem_fatal(param_1,uVar9,0x22e,uVar8,"ssl\\statem\\extensions.c",uVar5);
  return 0;
}



// FUNCTION 143cc9e10 final_ec_pt_formats body=212 status=ok
// SIG undefined final_ec_pt_formats(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 final_ec_pt_formats(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  char *pcVar5;
  
  if (((*(int *)(param_1 + 0x38) == 0) && (*(longlong *)(param_1 + 0x680) != 0)) &&
     (*(longlong *)(param_1 + 0x678) != 0)) {
    pcVar5 = *(char **)(*(longlong *)(param_1 + 0x508) + 0x168);
    if (((pcVar5 != (char *)0x0) &&
        (uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x508) + 0x160), uVar2 != 0)) &&
       ((lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238),
        (*(byte *)(lVar3 + 0x1c) & 4) != 0 || ((*(byte *)(lVar3 + 0x20) & 8) != 0)))) {
      uVar4 = 0;
      if (uVar2 != 0) {
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          if (cVar1 == '\0') break;
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar2);
      }
      if (uVar4 == uVar2) {
        ossl_statem_fatal(param_1,0x2f,0x1e5,0x9d,"ssl\\statem\\extensions.c",0x41a,0x143cc9e1a);
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 143cc9f10 init_status_request body=97 status=ok
// SIG undefined init_status_request(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 init_status_request(longlong param_1)

{
  if (*(int *)(param_1 + 0x38) != 0) {
    *(undefined4 *)(param_1 + 0x638) = 0xffffffff;
    return 1;
  }
  CRYPTO_free(*(undefined8 *)(param_1 + 0x660),"ssl\\statem\\extensions.c",0x435);
  *(undefined8 *)(param_1 + 0x660) = 0;
  *(undefined8 *)(param_1 + 0x668) = 0;
  return 1;
}



// FUNCTION 143cc9fa0 init_alpn body=165 status=ok
// SIG undefined init_alpn(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 init_alpn(longlong param_1)

{
  CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3e0),"ssl\\statem\\extensions.c",
              0x449);
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3e0) = 0;
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 1000) = 0;
  if (*(int *)(param_1 + 0x38) != 0) {
    CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3f0),"ssl\\statem\\extensions.c",
                0x44d);
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3f0) = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3f8) = 0;
  }
  return 1;
}



// FUNCTION 143cca050 final_alpn body=100 status=ok
// SIG undefined final_alpn(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 final_alpn(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    if ((param_3 == 0) && (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x1a0) != 0)) {
      *(undefined4 *)(param_1 + 0x6ec) = 0;
    }
  }
  else if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
           (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
    uVar2 = tls_handle_alpn();
    return uVar2;
  }
  return 1;
}



// FUNCTION 143cca0c0 init_sig_algs_cert body=79 status=ok
// SIG undefined init_sig_algs_cert(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 init_sig_algs_cert(longlong param_1)

{
  CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2f0),"ssl\\statem\\extensions.c",
              0x474);
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2f0) = 0;
  return 1;
}



// FUNCTION 143cca110 init_sig_algs body=79 status=ok
// SIG undefined init_sig_algs(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 init_sig_algs(longlong param_1)

{
  CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2e8),"ssl\\statem\\extensions.c",
              0x46b);
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2e8) = 0;
  return 1;
}



// FUNCTION 143cca160 init_certificate_authorities body=73 status=ok
// SIG undefined init_certificate_authorities(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 init_certificate_authorities(longlong param_1)

{
  OPENSSL_sk_pop_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x260),X509_NAME_free);
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x260) = 0;
  return 1;
}



// FUNCTION 143cca1b0 tls_construct_certificate_authorities body=218 status=ok
// SIG undefined tls_construct_certificate_authorities(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_certificate_authorities(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar4;
  undefined8 uVar3;
  
  uVar4 = 1;
  lVar2 = SSL_get0_CA_list();
  if (lVar2 == 0) {
    return 2;
  }
  iVar1 = OPENSSL_sk_num(lVar2);
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = WPACKET_put_bytes__(param_2,0x2f,2);
  if ((iVar1 == 0) || (iVar1 = WPACKET_start_sub_packet_len__(param_2,2), iVar1 == 0)) {
    uVar3 = CONCAT44(uVar4,0x4ba);
  }
  else {
    iVar1 = construct_ca_names(param_1,param_2);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = WPACKET_close(param_2);
    if (iVar1 != 0) {
      return 1;
    }
    uVar3 = CONCAT44(uVar4,0x4c6);
  }
  ossl_statem_fatal(param_1,0x50,0x21e,0x44,"ssl\\statem\\extensions.c",uVar3);
  return 0;
}



// FUNCTION 143cca290 tls_parse_certificate_authorities body=113 status=ok
// SIG undefined tls_parse_certificate_authorities(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_certificate_authorities(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = parse_ca_names();
  if (iVar1 != 0) {
    if (*(longlong *)(param_2 + 8) == 0) {
      return 1;
    }
    ossl_statem_fatal(param_1,0x32,0x236,0x6e,"ssl\\statem\\extensions.c",CONCAT44(uVar2,0x4d5));
  }
  return 0;
}



// FUNCTION 143cca310 init_srp body=65 status=ok
// SIG undefined init_srp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 init_srp(longlong param_1)

{
  CRYPTO_free(*(undefined8 *)(param_1 + 0x7a0),"ssl\\statem\\extensions.c",0x47d);
  *(undefined8 *)(param_1 + 0x7a0) = 0;
  return 1;
}



// FUNCTION 143cca390 final_ems body=126 status=ok
// SIG undefined final_ems(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 final_ems(longlong param_1)

{
  if (((*(int *)(param_1 + 0x38) == 0) && (*(int *)(param_1 + 200) != 0)) &&
     (((~(**(uint **)(param_1 + 0xa8) >> 9) ^ ~*(uint *)(*(longlong *)(param_1 + 0x508) + 0x1d0)) &
      1) != 0)) {
    ossl_statem_fatal(param_1,0x28,0x1e6,0x68,"ssl\\statem\\extensions.c",0x49d,0x143cca39a);
    return 0;
  }
  return 1;
}



// FUNCTION 143cca420 final_key_share body=615 status=ok
// SIG undefined final_key_share(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 final_key_share(longlong param_1,uint param_2,int param_3)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  ulonglong local_res8;
  longlong local_res20;
  undefined8 uVar8;
  
  uVar8 = 0x143cca436;
  uVar7 = 1;
  if ((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0) {
    return 1;
  }
  iVar4 = **(int **)(param_1 + 8);
  if (iVar4 < 0x304) {
    return 1;
  }
  if (iVar4 == 0x10000) {
    return 1;
  }
  if ((param_2 >> 0xb & 1) != 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    if (param_3 != 0) {
      return 1;
    }
    if ((*(int *)(param_1 + 200) != 0) && ((*(byte *)(param_1 + 0x6e0) & 1) != 0)) {
      iVar4 = tls13_generate_handshake_secret(param_1,0,0);
      if (iVar4 != 0) {
        return 1;
      }
      uVar8 = CONCAT44(uVar7,0x58c);
      uVar5 = 0x50;
      uVar7 = 0x44;
      goto LAB_143cca4d4;
    }
    uVar8 = 0x10000050b;
    uVar5 = 0x6d;
  }
  else {
    if (*(longlong *)(*(uint **)(param_1 + 0xa8) + 0x102) != 0) {
      if (((**(uint **)(param_1 + 0xa8) & 0x800) == 0) || (*(int *)(param_1 + 0x700) != 0)) {
LAB_143cca656:
        if (*(int *)(param_1 + 0x4d8) != 1) {
          return 1;
        }
        *(undefined4 *)(param_1 + 0x4d8) = 2;
        return 1;
      }
      if (*(int *)(param_1 + 0x4d8) == 0) {
LAB_143cca636:
        *(undefined4 *)(param_1 + 0x4d8) = 1;
        return 1;
      }
      uVar5 = 0x50;
      uVar8 = 0x10000053c;
      uVar7 = 0x44;
      goto LAB_143cca4d4;
    }
    if (((*(int *)(param_1 + 0x4d8) == 0) && (param_3 != 0)) &&
       ((*(int *)(param_1 + 200) == 0 || ((*(byte *)(param_1 + 0x6e0) & 2) != 0)))) {
      uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x178);
      uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x170);
      tls1_get_supported_groups(param_1,&local_res20,&local_res8);
      uVar7 = (undefined4)((ulonglong)uVar8 >> 0x20);
      uVar6 = 0;
      if (local_res8 != 0) {
        do {
          uVar1 = *(undefined2 *)(local_res20 + uVar6 * 2);
          iVar4 = check_in_list(param_1,uVar1,uVar2,uVar3,1);
          uVar7 = (undefined4)((ulonglong)uVar8 >> 0x20);
          if (iVar4 != 0) {
            if (uVar6 < local_res8) {
              *(undefined2 *)(*(longlong *)(param_1 + 0xa8) + 0x406) = uVar1;
              goto LAB_143cca636;
            }
            break;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < local_res8);
      }
    }
    if ((*(int *)(param_1 + 200) != 0) && ((*(byte *)(param_1 + 0x6e0) & 1) != 0)) {
      if (((**(uint **)(param_1 + 0xa8) & 0x800) == 0) || (*(int *)(param_1 + 0x700) != 0))
      goto LAB_143cca656;
      if (*(int *)(param_1 + 0x4d8) == 0) goto LAB_143cca636;
      uVar5 = 0x50;
      uVar8 = CONCAT44(uVar7,0x576);
      uVar7 = 0x44;
      goto LAB_143cca4d4;
    }
    uVar8 = CONCAT44(uVar7,0x569);
    uVar5 = 0x6d;
    if (param_3 != 0) {
      uVar5 = 0x28;
    }
  }
  uVar7 = 0x65;
LAB_143cca4d4:
  ossl_statem_fatal(param_1,uVar5,0x1f7,uVar7,"ssl\\statem\\extensions.c",uVar8);
  return 0;
}



// FUNCTION 143cca6b0 final_sig_algs body=116 status=ok
// SIG undefined final_sig_algs(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 final_sig_algs(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if ((((param_3 == 0) &&
       ((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0)) &&
      (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) &&
     ((iVar1 != 0x10000 && (*(int *)(param_1 + 200) == 0)))) {
    ossl_statem_fatal(param_1,0x6d,0x1f1,0x70,"ssl\\statem\\extensions.c",0x4e9,0x143cca6ba);
    return 0;
  }
  return 1;
}



// FUNCTION 143cca730 final_early_data body=255 status=ok
// SIG undefined final_early_data(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 final_early_data(longlong param_1,int param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_3 == 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    if (((((*(int *)(param_1 + 0x16e0) != 0) && (*(int *)(param_1 + 200) != 0)) &&
         (*(int *)(*(longlong *)(param_1 + 0x508) + 0x198) == 0)) &&
        ((*(int *)(param_1 + 0x84) == 9 && (*(int *)(param_1 + 0x6ec) != 0)))) &&
       (*(int *)(param_1 + 0x4d8) == 0)) {
      pcVar1 = *(code **)(*(longlong *)(param_1 + 0x598) + 0x3c8);
      if ((pcVar1 == (code *)0x0) ||
         (iVar2 = (*pcVar1)(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x598) + 0x3d0)),
         iVar2 != 0)) {
        *(undefined4 *)(param_1 + 0x6e8) = 2;
        uVar3 = tls13_change_cipher_state(param_1,0x61);
        if ((int)uVar3 != 0) {
          return 1;
        }
        return uVar3;
      }
    }
    *(undefined4 *)(param_1 + 0x6e8) = 1;
    return 1;
  }
  if (param_2 != 0x400) {
    return 1;
  }
  if (*(int *)(param_1 + 0x6ec) == 0) {
    ossl_statem_fatal(param_1,0x2f,0x22c,0xe9,"ssl\\statem\\extensions.c",0x10000065f);
    return 0;
  }
  return 1;
}



// FUNCTION 143cca830 final_maxfragmentlen body=172 status=ok
// SIG undefined final_maxfragmentlen(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 final_maxfragmentlen(longlong param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  if ((((*(int *)(param_1 + 0x38) != 0) && (*(int *)(param_1 + 200) != 0)) &&
      ((byte)(*(char *)(*(longlong *)(param_1 + 0x508) + 0x1b0) - 1U) < 4)) && (param_3 == 0)) {
    ossl_statem_fatal(param_1,0x6d,0x22d,0x6e,"ssl\\statem\\extensions.c",0x686,0x143cca83a);
    return 0;
  }
  if (((*(longlong *)(param_1 + 0x508) != 0) &&
      (cVar1 = *(char *)(*(longlong *)(param_1 + 0x508) + 0x1b0), (byte)(cVar1 - 1U) < 4)) &&
     ((*(ulonglong *)(param_1 + 0x5f0) < (ulonglong)(uint)(0x200 << (cVar1 - 1U & 0x1f)) &&
      (iVar2 = ssl3_setup_buffers(param_1), iVar2 == 0)))) {
    return 0;
  }
  return 1;
}



// FUNCTION 143cca8f0 extension_is_relevant body=158 status=ok
// SIG undefined extension_is_relevant(void)

undefined8 extension_is_relevant(int *param_1,uint param_2,uint param_3)

{
  int *piVar1;
  bool bVar2;
  
  piVar1 = *(int **)(param_1 + 2);
  if ((param_3 >> 0xb & 1) == 0) {
    if ((((*(byte *)(*(longlong *)(piVar1 + 0x30) + 0x60) & 8) == 0) && (0x303 < *piVar1)) &&
       (*piVar1 != 0x10000)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
  }
  else {
    bVar2 = true;
  }
  if ((((*(byte *)(*(longlong *)(piVar1 + 0x30) + 0x60) & 8) == 0) || ((param_2 & 4) == 0)) &&
     ((*param_1 != 0x300 || ((param_2 & 8) != 0)))) {
    if (bVar2) {
      if ((param_2 & 0x10) != 0) {
        return 0;
      }
    }
    else if (((param_2 & 0x20) != 0) && (-1 < (char)param_3)) {
      return 0;
    }
    if ((((param_1[0xe] == 0) || (bVar2)) || ((param_2 & 0x20) == 0)) &&
       ((param_1[0x32] == 0 || ((param_2 & 0x40) == 0)))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143cca990 should_add_extension body=119 status=ok
// SIG undefined should_add_extension(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 should_add_extension(longlong param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  
  if ((((param_3 & param_2) != 0) && (iVar1 = extension_is_relevant(), iVar1 != 0)) &&
     ((((param_2 & 0x20) == 0 || (-1 < (char)param_3)) ||
      (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0 &&
       (0x303 < param_4)))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 143ccaa10 tls_collect_extensions body=1202 status=ok
// SIG undefined tls_collect_extensions(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
tls_collect_extensions
          (longlong param_1,undefined8 *param_2,uint param_3,longlong *param_4,longlong *param_5,
          int param_6)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong local_res10;
  undefined8 in_stack_ffffffffffffff90;
  undefined4 uVar19;
  uint uStack_40;
  
  lVar9 = *(longlong *)(param_1 + 0x488);
  uVar14 = 0;
  puVar2 = (undefined1 *)*param_2;
  uVar15 = param_2[1];
  lVar18 = lVar9 + 0x1e8;
  *param_4 = 0;
  if ((param_3 & 0x80) != 0) {
    custom_ext_init(*(longlong *)(param_1 + 0x488) + 0x1e8);
  }
  uVar8 = uVar14;
  if (lVar18 != 0) {
    uVar8 = *(ulonglong *)(lVar9 + 0x1f0);
  }
  lVar9 = CRYPTO_zalloc((uVar8 + 0x1a) * 0x28,"ssl\\statem\\extensions.c",0x23b);
  uVar17 = uVar14;
  if (lVar9 == 0) {
    ossl_statem_fatal(param_1,0x50,0x1b3,0x41,"ssl\\statem\\extensions.c",0x23e);
    return 0;
  }
  while (uVar15 != 0) {
    uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
    if (uVar15 < 2) {
LAB_143ccadde:
      ossl_statem_fatal(param_1,0x32,0x1b3,0x6e,"ssl\\statem\\extensions.c",CONCAT44(uVar19,0x24b));
      goto LAB_143ccaea8;
    }
    uVar13 = (uint)CONCAT11(*puVar2,puVar2[1]);
    if (uVar15 - 2 < 2) goto LAB_143ccadde;
    puVar1 = puVar2 + 4;
    uVar3 = puVar2[2];
    uVar4 = puVar2[3];
    uVar12 = (ulonglong)CONCAT11(uVar3,uVar4);
    if (uVar15 - 4 < uVar12) goto LAB_143ccadde;
    puVar2 = puVar1 + uVar12;
    uVar15 = (uVar15 - 4) - uVar12;
    puVar10 = &DAT_145d55cc0;
    uVar12 = uVar14;
    do {
      if (uVar13 == *puVar10) {
        uVar5 = puVar10[1];
        if ((param_3 & uVar5) == 0) goto LAB_143ccadae;
        if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
          uVar5 = uVar5 & 2;
        }
        else {
          uVar5 = uVar5 & 1;
        }
        if (uVar5 == 0) goto LAB_143ccac91;
        goto LAB_143ccadae;
      }
      uVar12 = uVar12 + 1;
      puVar10 = puVar10 + 0xe;
    } while (uVar12 < 0x1a);
    if (lVar18 != 0) {
      local_res10 = 0;
      if ((param_3 & 0x80) == 0) {
        uVar12 = 2;
        if ((param_3 >> 8 & 1) != 0) {
          uVar12 = uVar14;
        }
      }
      else {
        uVar12 = 1;
      }
      lVar11 = custom_ext_find(lVar18,uVar12,uVar13,&local_res10);
      uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
      if (lVar11 == 0) goto LAB_143ccac56;
      uVar5 = *(uint *)(lVar11 + 8);
      if ((param_3 & uVar5) != 0) {
        if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
          uVar5 = uVar5 & 2;
        }
        else {
          uVar5 = uVar5 & 1;
        }
        if (uVar5 != 0) goto LAB_143ccadae;
        uVar12 = local_res10 + 0x1a;
LAB_143ccac91:
        uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
        plVar16 = (longlong *)(lVar9 + uVar12 * 0x28);
        if ((plVar16 != (longlong *)0x0) && ((int)plVar16[2] == 1)) goto LAB_143ccadae;
        goto LAB_143ccacb3;
      }
LAB_143ccadae:
      ossl_statem_fatal(param_1,0x2f,0x1b3,0x6e,"ssl\\statem\\extensions.c",CONCAT44(uVar19,0x259));
      goto LAB_143ccaea8;
    }
LAB_143ccac56:
    plVar16 = (longlong *)0x0;
LAB_143ccacb3:
    uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
    if (((uVar13 == 0x29) && ((param_3 & 0x80) != 0)) && (uVar15 != 0)) goto LAB_143ccadae;
    uVar12 = ((longlong)plVar16 - lVar9) / 0x28;
    if (((((uint)uVar12 < 0x1a) && ((param_3 & 0x6080) == 0)) &&
        ((uVar13 != 0x2c && ((uVar13 != 0xff01 && (uVar13 != 0x12)))))) &&
       ((*(byte *)((uVar12 & 0xffffffff) + 0x600 + param_1) & 2) == 0)) {
      ossl_statem_fatal(param_1,0x6e,0x1b3,0xd9,"ssl\\statem\\extensions.c",CONCAT44(uVar19,0x274));
      goto LAB_143ccaea8;
    }
    if (plVar16 != (longlong *)0x0) {
      uStack_40 = (uint)CONCAT11(uVar3,uVar4);
      plVar16[4] = uVar17;
      uVar17 = uVar17 + 1;
      *(undefined4 *)(plVar16 + 2) = 1;
      *plVar16 = (longlong)puVar1;
      *(uint *)(plVar16 + 1) = uStack_40;
      *(undefined4 *)((longlong)plVar16 + 0xc) = 0;
      *(uint *)(plVar16 + 3) = uVar13;
      if (*(code **)(param_1 + 0x620) != (code *)0x0) {
        in_stack_ffffffffffffff90 = *(undefined8 *)(param_1 + 0x628);
        (**(code **)(param_1 + 0x620))
                  (param_1,*(int *)(param_1 + 0x38) == 0,uVar13,*plVar16,(int)plVar16[1],
                   in_stack_ffffffffffffff90);
      }
    }
  }
  if (param_6 != 0) {
    puVar10 = &DAT_145d55cc4;
    do {
      pcVar6 = *(code **)(puVar10 + 1);
      if ((((pcVar6 != (code *)0x0) && ((param_3 & *puVar10) != 0)) &&
          (iVar7 = extension_is_relevant(param_1,*puVar10,param_3), iVar7 != 0)) &&
         (iVar7 = (*pcVar6)(param_1,param_3), iVar7 == 0)) {
LAB_143ccaea8:
        CRYPTO_free(lVar9,"ssl\\statem\\extensions.c",0x29a);
        return 0;
      }
      uVar14 = uVar14 + 1;
      puVar10 = puVar10 + 0xe;
    } while (uVar14 < 0x1a);
  }
  *param_4 = lVar9;
  if (param_5 != (longlong *)0x0) {
    *param_5 = uVar8 + 0x1a;
  }
  return 1;
}



// FUNCTION 143ccaed0 tls_construct_extensions body=571 status=ok
// SIG undefined tls_construct_extensions(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
tls_construct_extensions
          (longlong param_1,undefined8 param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  ulonglong uVar5;
  undefined **ppuVar6;
  int local_38;
  undefined1 local_34 [4];
  undefined8 uStack_30;
  
  uStack_30 = 0x143ccaee6;
  uVar5 = 0;
  local_38 = 0;
  iVar3 = WPACKET_start_sub_packet_len__(param_2,2);
  if ((iVar3 == 0) ||
     (((param_3 & 0x180) != 0 && (iVar3 = WPACKET_set_flags(param_2,2), iVar3 == 0)))) {
    ossl_statem_fatal(param_1,0x50,0x1bf,0x44,"ssl\\statem\\extensions.c",0x328);
    return 0;
  }
  if ((param_3 & 0x80) != 0) {
    iVar3 = ssl_get_min_max_version(param_1,local_34,&local_38,0);
    if (iVar3 != 0) {
      ossl_statem_fatal(param_1,0x50,0x1bf,iVar3,"ssl\\statem\\extensions.c",0x330);
      return 0;
    }
    custom_ext_init(*(longlong *)(param_1 + 0x488) + 0x1e8);
  }
  iVar3 = custom_ext_add(param_1,param_3,param_2,param_4,param_5,local_38);
  if (iVar3 != 0) {
    ppuVar6 = &PTR_tls_construct_stoc_renegotiate_145d55ce0;
    do {
      uVar2 = *(uint *)((longlong)ppuVar6 + -0x1c);
      if ((((param_3 & uVar2) != 0) &&
          (iVar3 = extension_is_relevant(param_1,uVar2,param_3), iVar3 != 0)) &&
         ((((uVar2 & 0x20) == 0 || ((param_3 & 0x80) == 0)) ||
          (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0 &&
           (0x303 < local_38)))))) {
        if (*(int *)(param_1 + 0x38) == 0) {
          pcVar4 = (code *)ppuVar6[1];
        }
        else {
          pcVar4 = (code *)*ppuVar6;
        }
        if (pcVar4 != (code *)0x0) {
          iVar3 = (*pcVar4)(param_1,param_2,param_3,param_4,param_5);
          if (iVar3 == 0) {
            return 0;
          }
          if ((iVar3 == 1) && ((param_3 & 0x6080) != 0)) {
            pbVar1 = (byte *)(param_1 + 0x600 + uVar5);
            *pbVar1 = *pbVar1 | 2;
          }
        }
      }
      uVar5 = uVar5 + 1;
      ppuVar6 = ppuVar6 + 7;
    } while (uVar5 < 0x1a);
    iVar3 = WPACKET_close(param_2);
    if (iVar3 != 0) {
      return 1;
    }
    ossl_statem_fatal(param_1,0x50,0x1bf,0x44,"ssl\\statem\\extensions.c",0x35c);
  }
  return 0;
}



// FUNCTION 143ccb110 tls_parse_all_extensions body=397 status=ok
// SIG undefined tls_parse_all_extensions(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
tls_parse_all_extensions
          (longlong param_1,uint param_2,longlong param_3,undefined8 param_4,undefined8 param_5,
          int param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  code *pcVar4;
  longlong lVar5;
  uint *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  
  uVar10 = 0x143ccb134;
  uVar7 = 0;
  uVar8 = 0;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x488) + 0x1f0);
  if (lVar2 != -0x1a) {
    do {
      lVar5 = (longlong)(int)(uint)uVar8;
      puVar1 = (undefined8 *)(param_3 + lVar5 * 0x28);
      if ((*(int *)(param_3 + 0x10 + lVar5 * 0x28) != 0) && (*(int *)((longlong)puVar1 + 0x14) == 0)
         ) {
        *(undefined4 *)((longlong)puVar1 + 0x14) = 1;
        if ((uint)uVar8 < 0x1a) {
          iVar3 = extension_is_relevant(param_1,(&DAT_145d55cc4)[lVar5 * 0xe],param_2);
          if (iVar3 == 0) goto LAB_143ccb22a;
          if (*(int *)(param_1 + 0x38) == 0) {
            pcVar4 = (code *)(&PTR_tls_parse_stoc_renegotiate_145d55cd8)[lVar5 * 7];
          }
          else {
            pcVar4 = (code *)(&PTR_tls_parse_ctos_renegotiate_145d55cd0)[lVar5 * 7];
          }
          if (pcVar4 == (code *)0x0) goto LAB_143ccb1eb;
          iVar3 = (*pcVar4)(param_1,puVar1,param_2,param_4,param_5);
        }
        else {
LAB_143ccb1eb:
          iVar3 = custom_ext_parse(param_1,param_2,*(undefined4 *)(puVar1 + 3),*puVar1,puVar1[1],
                                   param_4,param_5,uVar10);
        }
        if (iVar3 == 0) {
          return 0;
        }
      }
LAB_143ccb22a:
      uVar8 = uVar8 + 1;
    } while (uVar8 < lVar2 + 0x1aU);
  }
  if (param_6 != 0) {
    puVar6 = &DAT_145d55cc4;
    puVar9 = (undefined4 *)(param_3 + 0x10);
    do {
      if (((*(code **)(puVar6 + 0xb) != (code *)0x0) && ((*puVar6 & param_2) != 0)) &&
         (iVar3 = (**(code **)(puVar6 + 0xb))(param_1,param_2,*puVar9), iVar3 == 0)) {
        return 0;
      }
      uVar7 = uVar7 + 1;
      puVar9 = puVar9 + 10;
      puVar6 = puVar6 + 0xe;
    } while (uVar7 < 0x1a);
  }
  return 1;
}



// FUNCTION 143ccb2a0 tls_parse_extension body=246 status=ok
// SIG undefined tls_parse_extension(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
tls_parse_extension(longlong param_1,uint param_2,undefined4 param_3,longlong param_4,
                   undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143ccb2c0;
  lVar3 = (longlong)(int)param_2;
  puVar1 = (undefined8 *)(param_4 + lVar3 * 0x28);
  if ((*(int *)(param_4 + 0x10 + lVar3 * 0x28) == 0) || (*(int *)((longlong)puVar1 + 0x14) != 0)) {
LAB_143ccb376:
    uVar5 = 1;
  }
  else {
    *(undefined4 *)((longlong)puVar1 + 0x14) = 1;
    if (param_2 < 0x1a) {
      iVar2 = extension_is_relevant(param_1,(&DAT_145d55cc4)[lVar3 * 0xe]);
      if (iVar2 == 0) goto LAB_143ccb376;
      if (*(int *)(param_1 + 0x38) == 0) {
        pcVar4 = (code *)(&PTR_tls_parse_stoc_renegotiate_145d55cd8)[lVar3 * 7];
      }
      else {
        pcVar4 = (code *)(&PTR_tls_parse_ctos_renegotiate_145d55cd0)[lVar3 * 7];
      }
      if (pcVar4 != (code *)0x0) {
        uVar5 = (*pcVar4)(param_1,puVar1,param_3,param_5,param_6);
        return uVar5;
      }
    }
    uVar5 = custom_ext_parse(param_1,param_3,*(undefined4 *)(puVar1 + 3),*puVar1,puVar1[1],param_5,
                             param_6,uVar5);
  }
  return uVar5;
}



// FUNCTION 143ccb3a0 tls_psk_do_binder body=1315 status=ok
// SIG undefined tls_psk_do_binder(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint tls_psk_do_binder(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined1 *param_6,longlong param_7,int param_8,
                      int param_9)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 auStack_1f8 [32];
  char *local_1d8;
  undefined1 *local_1d0;
  char *local_1c8;
  undefined1 *local_1c0;
  char *local_1b8;
  undefined1 *local_1a8;
  ulonglong uStack_1a0;
  uint local_198;
  char *local_190;
  char *local_188;
  undefined1 *local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined1 *local_168;
  undefined8 local_160;
  undefined1 local_158 [64];
  undefined1 local_118 [64];
  undefined1 local_d8 [64];
  undefined1 local_98 [64];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  local_168 = param_6;
  lVar3 = 0;
  local_160 = param_5;
  local_188 = (char *)0x0;
  local_178 = param_4;
  local_170 = param_3;
  iVar2 = EVP_MD_size();
  local_198 = 0xffffffff;
  if (iVar2 < 0) {
    local_1d0 = (undefined1 *)CONCAT44(local_1d0._4_4_,0x5b0);
    local_1d8 = "ssl\\statem\\extensions.c";
    ossl_statem_fatal(param_1,0x50,0x1fa,0x44);
    goto LAB_143ccb873;
  }
  pcVar11 = (char *)(longlong)iVar2;
  bVar1 = false;
  if ((((param_9 != 0) && (bVar1 = false, *(int *)(param_1 + 0x84) == 2)) &&
      (*(int *)(*(longlong *)(param_1 + 0x508) + 0x19c) == 0)) &&
     (bVar1 = false, *(int *)(param_7 + 0x19c) != 0)) {
    bVar1 = true;
  }
  pcVar10 = "ext binder";
  if (param_9 == 0) {
    pcVar10 = "res binder";
  }
  if (((*(int *)(param_1 + 0x38) != 0) || (param_9 == 0)) ||
     (puVar6 = (undefined1 *)(param_7 + 0x10), bVar1)) {
    puVar6 = (undefined1 *)(param_1 + 300);
  }
  local_1d8 = *(char **)(param_7 + 8);
  local_1d0 = puVar6;
  iVar2 = tls13_generate_secret(param_1,param_2,0,param_7 + 0x50);
  if (iVar2 == 0) goto LAB_143ccb873;
  lVar3 = EVP_MD_CTX_new();
  if (((lVar3 == 0) || (iVar2 = EVP_DigestInit_ex(lVar3,param_2,0), iVar2 < 1)) ||
     (iVar2 = EVP_DigestFinal_ex(lVar3,local_158,0), iVar2 < 1)) {
    local_1d0 = (undefined1 *)CONCAT44(local_1d0._4_4_,0x5df);
    goto LAB_143ccb836;
  }
  local_1c0 = local_118;
  local_1d0 = local_158;
  local_1d8 = (char *)0xa;
  local_1c8 = pcVar11;
  local_1b8 = pcVar11;
  iVar2 = tls13_hkdf_expand(param_1,param_2,puVar6,pcVar10);
  if ((iVar2 == 0) ||
     (local_1d8 = pcVar11, iVar2 = tls13_derive_finishedkey(param_1,param_2,local_118,local_d8),
     iVar2 == 0)) goto LAB_143ccb873;
  iVar2 = EVP_DigestInit_ex(lVar3,param_2,0);
  if (iVar2 < 1) {
    local_1d0 = (undefined1 *)CONCAT44(local_1d0._4_4_,0x5f2);
    goto LAB_143ccb836;
  }
  if (*(int *)(param_1 + 0x4d8) == 1) {
    iVar2 = BIO_ctrl(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe0),3,0,&local_180);
    uVar7 = (ulonglong)iVar2;
    if (iVar2 != 0) {
      if (*(int *)(param_1 + 0x38) == 0) {
LAB_143ccb6f7:
        iVar2 = EVP_DigestUpdate(lVar3,local_180,uVar7);
        if (0 < iVar2) goto LAB_143ccb720;
        local_1d0 = (undefined1 *)CONCAT44(local_1d0._4_4_,0x61c);
      }
      else {
        if ((uVar7 < 0x8000000000000000) && (local_1a8 = local_180, uStack_1a0 = uVar7, uVar7 != 0))
        {
          local_1a8 = local_180 + 1;
          uStack_1a0 = uVar7 - 1;
          if (2 < uVar7 - 1) {
            uStack_1a0 = uVar7 - 4;
            uVar4 = (ulonglong)CONCAT21(CONCAT11(*local_1a8,local_180[2]),local_180[3]);
            if (uVar4 <= uStack_1a0) {
              local_1a8 = local_180 + uVar4 + 4;
              uVar8 = uStack_1a0 - uVar4;
              uStack_1a0 = uVar8;
              if (uVar8 != 0) {
                local_1a8 = local_180 + uVar4 + 5;
                uStack_1a0 = uVar8 - 1;
                if (2 < uStack_1a0) {
                  uVar4 = (ulonglong)CONCAT21(CONCAT11(*local_1a8,local_1a8[1]),local_1a8[2]);
                  if (uVar4 <= uVar8 - 4) {
                    uVar7 = (uVar7 - (uVar8 - 4)) + uVar4;
                    goto LAB_143ccb6f7;
                  }
                }
              }
            }
          }
        }
        local_1d0 = (undefined1 *)CONCAT44(local_1d0._4_4_,0x614);
      }
      goto LAB_143ccb836;
    }
    local_1d0 = (undefined1 *)CONCAT44(local_1d0._4_4_,0x602);
    uVar9 = 0x14c;
LAB_143ccb83c:
    uVar5 = 0x50;
  }
  else {
LAB_143ccb720:
    iVar2 = EVP_DigestUpdate(lVar3,local_170,local_178);
    if ((iVar2 < 1) || (iVar2 = EVP_DigestFinal_ex(lVar3,local_158,0), iVar2 < 1)) {
      local_1d0 = (undefined1 *)CONCAT44(local_1d0._4_4_,0x624);
LAB_143ccb836:
      uVar9 = 0x44;
      goto LAB_143ccb83c;
    }
    local_1d8 = (char *)EVP_PKEY_new_raw_private_key(0x357,0,local_d8,pcVar11);
    local_188 = local_1d8;
    if (local_1d8 == (char *)0x0) {
      local_1d0 = (undefined1 *)CONCAT44(local_1d0._4_4_,0x62c);
      goto LAB_143ccb836;
    }
    puVar6 = local_98;
    if (param_8 != 0) {
      puVar6 = local_168;
    }
    local_190 = pcVar11;
    iVar2 = EVP_DigestSignInit(lVar3,0,param_2,0);
    if ((((iVar2 < 1) || (iVar2 = EVP_DigestUpdate(lVar3,local_158,pcVar11), iVar2 < 1)) ||
        (iVar2 = EVP_DigestSignFinal(lVar3,puVar6,&local_190), iVar2 < 1)) || (local_190 != pcVar11)
       ) {
      local_1d0 = (undefined1 *)CONCAT44(local_1d0._4_4_,0x639);
      goto LAB_143ccb836;
    }
    if (param_8 != 0) {
      local_198 = 1;
      goto LAB_143ccb873;
    }
    iVar2 = FUN_14004ffa0(local_160,puVar6,pcVar11);
    local_198 = (uint)(iVar2 == 0);
    if (iVar2 == 0) goto LAB_143ccb873;
    local_1d0 = (undefined1 *)CONCAT44(local_1d0._4_4_,0x644);
    uVar5 = 0x2f;
    uVar9 = 0xfd;
  }
  local_1d8 = "ssl\\statem\\extensions.c";
  ossl_statem_fatal(param_1,uVar5,0x1fa,uVar9);
LAB_143ccb873:
  FUN_14004ff40(local_118,0x40);
  FUN_14004ff40(local_d8,0x40);
  EVP_PKEY_free(local_188);
  EVP_MD_CTX_free(lVar3);
  return local_198;
}



// FUNCTION 143ccb8d0 tls_validate_all_contexts body=230 status=ok
// SIG undefined tls_validate_all_contexts(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_validate_all_contexts(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined1 local_res8 [8];
  
  uVar4 = 0;
  if ((char)param_2 < '\0') {
    uVar7 = 1;
  }
  else {
    uVar7 = 2;
    if ((param_2 >> 8 & 1) != 0) {
      uVar7 = 0;
    }
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x488) + 0x1f0);
  if (lVar1 != -0x1a) {
    puVar6 = (undefined4 *)(param_3 + 0x18);
    puVar5 = &DAT_145d55cc4;
    do {
      if (puVar6[-2] != 0) {
        if (uVar4 < 0x1a) {
          uVar3 = *puVar5;
        }
        else {
          lVar2 = custom_ext_find(*(longlong *)(param_1 + 0x488) + 0x1e8,uVar7,*puVar6,local_res8);
          if (lVar2 == 0) {
            return 0;
          }
          uVar3 = *(uint *)(lVar2 + 8);
        }
        if ((param_2 & uVar3) == 0) {
          return 0;
        }
        if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
          uVar3 = uVar3 & 2;
        }
        else {
          uVar3 = uVar3 & 1;
        }
        if (uVar3 != 0) {
          return 0;
        }
      }
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 0xe;
      puVar6 = puVar6 + 10;
    } while (uVar4 < lVar1 + 0x1aU);
  }
  return 1;
}



// FUNCTION 143ccb9c0 dtls1_close_construct_packet body=571 status=ok
// SIG undefined dtls1_close_construct_packet(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 dtls1_close_construct_packet(int *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  longlong local_30;
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x143ccb9d2;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  if ((((param_3 == 0x101) || (iVar2 = WPACKET_close(param_2), iVar2 != 0)) &&
      (iVar2 = WPACKET_get_length(param_2,&local_38), iVar2 != 0)) && (local_38 < 0x80000000)) {
    if (param_3 != 0x101) {
      *(ulonglong *)(*(longlong *)(param_1 + 0x2c) + 0x140) = local_38 - 0xc;
      *(ulonglong *)(*(longlong *)(param_1 + 0x2c) + 0x158) = local_38 - 0xc;
    }
    *(longlong *)(param_1 + 0x26) = (longlong)(int)local_38;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    if (param_3 == 3) {
      return 1;
    }
    puVar3 = (undefined1 *)dtls1_hm_fragment_new((longlong)(int)local_38,0);
    if (puVar3 != (undefined1 *)0x0) {
      _guard_xfg_dispatch_icall_nop
                (*(void **)(puVar3 + 0x58),*(void **)(*(longlong *)(param_1 + 0x22) + 8),
                 *(size_t *)(param_1 + 0x26));
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x2c) + 0x140);
      if (param_3 == 0x101) {
        lVar5 = 1;
        if (*param_1 == 0x100) {
          lVar5 = 3;
        }
        if (lVar5 + lVar4 != (ulonglong)(uint)param_1[0x26]) {
          return 0;
        }
      }
      else if (lVar4 + 0xcU != (ulonglong)(uint)param_1[0x26]) {
        return 0;
      }
      *(longlong *)(puVar3 + 8) = lVar4;
      *(undefined2 *)(puVar3 + 0x10) = *(undefined2 *)(*(longlong *)(param_1 + 0x2c) + 0x148);
      *puVar3 = *(undefined1 *)(*(longlong *)(param_1 + 0x2c) + 0x138);
      *(undefined8 *)(puVar3 + 0x18) = 0;
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x2c) + 0x140);
      *(uint *)(puVar3 + 0x28) = (uint)(param_3 == 0x101);
      *(undefined8 *)(puVar3 + 0x20) = uVar1;
      *(undefined8 *)(puVar3 + 0x30) = *(undefined8 *)(param_1 + 0x118);
      *(undefined8 *)(puVar3 + 0x38) = *(undefined8 *)(param_1 + 0x11e);
      *(undefined8 *)(puVar3 + 0x40) = *(undefined8 *)(param_1 + 0x114);
      *(undefined8 *)(puVar3 + 0x48) = *(undefined8 *)(param_1 + 0x142);
      *(undefined2 *)(puVar3 + 0x50) = *(undefined2 *)(*(longlong *)(param_1 + 0x5ac) + 2);
      local_30 = (ulonglong)
                 CONCAT11(puVar3[0x10] * '\x02' - puVar3[0x28],
                          (char)((uint)*(ushort *)(puVar3 + 0x10) * 2 - *(int *)(puVar3 + 0x28) >> 8
                                )) << 0x30;
      lVar4 = pitem_new(&local_30,puVar3);
      if (lVar4 != 0) {
        pqueue_insert(*(undefined8 *)(*(longlong *)(param_1 + 0x2c) + 0x120),lVar4);
        return 1;
      }
      dtls1_hm_fragment_free(puVar3);
    }
  }
  return 0;
}



// FUNCTION 143ccbc00 dtls1_do_write body=1225 status=ok
// SIG undefined dtls1_do_write(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dtls1_do_write(int *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong local_res18;
  
  iVar3 = dtls1_query_mtu();
  if (iVar3 != 0) {
    lVar12 = *(longlong *)(param_1 + 0x2c);
    uVar5 = dtls1_min_mtu(param_1);
    if ((uVar5 <= *(ulonglong *)(lVar12 + 0x130)) &&
       (((*(longlong *)(param_1 + 0x28) != 0 || (param_2 != 0x16)) ||
        (*(longlong *)(param_1 + 0x26) == *(longlong *)(lVar12 + 0x140) + 0xc)))) {
      uVar14 = 0;
      uVar5 = uVar14;
      if (*(longlong *)(param_1 + 0x11e) != 0) {
        if (*(longlong *)(param_1 + 0x118) != 0) {
          uVar6 = FHardwareCursor::GetHandle();
          uVar4 = TResourceArray<unsigned_char,0>::GetResourceDataSize(uVar6);
          if ((uVar4 >> 0x15 & 1) != 0) goto LAB_143ccbcc5;
        }
        uVar6 = EVP_MD_CTX_md(*(undefined8 *)(param_1 + 0x11e));
        iVar3 = EVP_MD_size(uVar6);
        uVar5 = (longlong)iVar3;
      }
LAB_143ccbcc5:
      uVar13 = uVar14;
      if (*(longlong *)(param_1 + 0x118) != 0) {
        uVar6 = FHardwareCursor::GetHandle();
        uVar4 = TResourceArray<unsigned_char,0>::GetResourceDataSize(uVar6);
        if ((uVar4 & 0xf0007) == 2) {
          iVar3 = EVP_CIPHER_CTX_block_size(*(undefined8 *)(param_1 + 0x118));
          uVar13 = (longlong)(iVar3 * 2);
        }
      }
      param_1[10] = 1;
      lVar12 = *(longlong *)(param_1 + 0x26);
      uVar11 = uVar14;
      bVar2 = true;
      do {
        if (lVar12 == 0) {
          return 0;
        }
        if ((param_2 == 0x16) && (uVar9 = *(ulonglong *)(param_1 + 0x28), uVar9 != 0)) {
          if (uVar11 == 0) {
            uVar11 = *(ulonglong *)(*(longlong *)(param_1 + 0x2c) + 0x150);
          }
          else {
            if (uVar9 < 0xd) {
              return 0xffffffff;
            }
            *(longlong *)(param_1 + 0x26) = *(longlong *)(param_1 + 0x26) + 0xc;
            *(ulonglong *)(param_1 + 0x28) = uVar9 - 0xc;
          }
        }
        iVar3 = BIO_ctrl(*(undefined8 *)(param_1 + 6),0xd,0);
        lVar12 = *(longlong *)(param_1 + 0x2c);
        uVar7 = (longlong)(iVar3 + 0xd) + uVar13 + uVar5;
        uVar9 = *(ulonglong *)(lVar12 + 0x130) - uVar7;
        if (*(ulonglong *)(lVar12 + 0x130) <= uVar7) {
          uVar9 = uVar14;
        }
        if (uVar9 < 0xd) {
          uVar6 = BIO_ctrl(*(undefined8 *)(param_1 + 6),0xb,0);
          if ((int)uVar6 < 1) {
            param_1[10] = 2;
            return uVar6;
          }
          lVar12 = *(longlong *)(param_1 + 0x2c);
          lVar8 = uVar5 + 0xd + uVar13;
          if (*(ulonglong *)(lVar12 + 0x130) <= lVar8 + 0xcU) {
            return 0xffffffff;
          }
          uVar9 = *(ulonglong *)(lVar12 + 0x130) - lVar8;
        }
        if ((uint)param_1[0x26] <= uVar9) {
          uVar9 = *(ulonglong *)(param_1 + 0x26);
        }
        uVar7 = *(ulonglong *)(param_1 + 0x17c);
        if (uVar9 <= *(ulonglong *)(param_1 + 0x17c)) {
          uVar7 = uVar9;
        }
        if (param_2 == 0x16) {
          if (uVar7 < 0xc) {
            return 0xffffffff;
          }
          *(ulonglong *)(lVar12 + 0x150) = uVar11;
          *(ulonglong *)(lVar12 + 0x158) = uVar7 - 0xc;
          lVar12 = *(longlong *)(param_1 + 0x2c);
          puVar10 = (undefined1 *)
                    (*(longlong *)(*(longlong *)(param_1 + 0x22) + 8) +
                    *(longlong *)(param_1 + 0x28));
          *puVar10 = *(undefined1 *)(lVar12 + 0x138);
          puVar10[1] = *(undefined1 *)(lVar12 + 0x142);
          puVar10[2] = *(undefined1 *)(lVar12 + 0x141);
          puVar10[3] = *(undefined1 *)(lVar12 + 0x140);
          puVar10[4] = *(undefined1 *)(lVar12 + 0x149);
          puVar10[5] = *(undefined1 *)(lVar12 + 0x148);
          puVar10[6] = *(undefined1 *)(lVar12 + 0x152);
          puVar10[7] = *(undefined1 *)(lVar12 + 0x151);
          puVar10[8] = *(undefined1 *)(lVar12 + 0x150);
          puVar10[9] = *(undefined1 *)(lVar12 + 0x15a);
          puVar10[10] = *(undefined1 *)(lVar12 + 0x159);
          puVar10[0xb] = *(undefined1 *)(lVar12 + 0x158);
        }
        iVar3 = dtls1_write_bytes(param_1,param_2,
                                  *(longlong *)(*(longlong *)(param_1 + 0x22) + 8) +
                                  *(longlong *)(param_1 + 0x28),uVar7,&local_res18);
        bVar1 = false;
        if (iVar3 < 0) {
          if (!bVar2) {
            return 0xffffffff;
          }
          uVar6 = SSL_get_wbio(param_1);
          iVar3 = BIO_ctrl(uVar6,0x2b,0);
          if (iVar3 < 1) {
            return 0xffffffff;
          }
          uVar4 = SSL_get_options(param_1);
          if ((uVar4 >> 0xc & 1) != 0) {
            return 0xffffffff;
          }
          iVar3 = dtls1_query_mtu(param_1);
          if (iVar3 == 0) {
            return 0xffffffff;
          }
        }
        else {
          if (uVar7 != local_res18) {
            return 0xffffffff;
          }
          if ((param_2 == 0x16) &&
             (lVar12 = *(longlong *)(param_1 + 0x2c), *(int *)(lVar12 + 0x200) == 0)) {
            puVar10 = (undefined1 *)
                      (*(longlong *)(*(longlong *)(param_1 + 0x22) + 8) +
                      *(longlong *)(param_1 + 0x28));
            if ((uVar11 == 0) && (*param_1 != 0x100)) {
              *puVar10 = *(undefined1 *)(lVar12 + 0x138);
              puVar10[1] = *(undefined1 *)(lVar12 + 0x142);
              puVar10[2] = *(undefined1 *)(lVar12 + 0x141);
              puVar10[3] = *(undefined1 *)(lVar12 + 0x140);
              puVar10[4] = *(undefined1 *)(lVar12 + 0x149);
              puVar10[5] = *(undefined1 *)(lVar12 + 0x148);
              *(undefined2 *)(puVar10 + 6) = 0;
              puVar10[8] = 0;
              puVar10[9] = *(undefined1 *)(lVar12 + 0x142);
              puVar10[10] = *(undefined1 *)(lVar12 + 0x141);
              puVar10[0xb] = *(undefined1 *)(lVar12 + 0x140);
            }
            else {
              puVar10 = puVar10 + 0xc;
            }
            iVar3 = ssl3_finish_mac(param_1,puVar10);
            if (iVar3 == 0) {
              return 0xffffffff;
            }
          }
          uVar9 = *(ulonglong *)(param_1 + 0x26);
          if (local_res18 == uVar9) {
            if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
              (**(code **)(param_1 + 0x2e))
                        (1,*param_1,param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x22) + 8),
                         uVar9 + *(longlong *)(param_1 + 0x28),param_1,
                         *(undefined8 *)(param_1 + 0x30));
            }
            param_1[0x28] = 0;
            param_1[0x29] = 0;
            param_1[0x26] = 0;
            param_1[0x27] = 0;
            return 1;
          }
          *(ulonglong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + local_res18;
          lVar8 = uVar9 - local_res18;
          lVar12 = *(longlong *)(param_1 + 0x2c);
          local_res18 = local_res18 - 0xc;
          *(longlong *)(param_1 + 0x26) = lVar8;
          uVar11 = uVar11 + local_res18;
          *(ulonglong *)(lVar12 + 0x150) = uVar11;
          *(undefined8 *)(lVar12 + 0x158) = 0;
          bVar1 = bVar2;
        }
        lVar12 = *(longlong *)(param_1 + 0x26);
        bVar2 = bVar1;
      } while( true );
    }
  }
  return 0xffffffff;
}



// FUNCTION 143ccc0d0 dtls1_get_message_header body=165 status=ok
// SIG undefined dtls1_get_message_header(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void dtls1_get_message_header(undefined1 *param_1,undefined1 *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x58);
  *param_2 = *param_1;
  *(ulonglong *)(param_2 + 8) = (ulonglong)CONCAT21(CONCAT11(param_1[1],param_1[2]),param_1[3]);
  *(ushort *)(param_2 + 0x10) = CONCAT11(param_1[4],param_1[5]);
  *(ulonglong *)(param_2 + 0x18) = (ulonglong)CONCAT21(CONCAT11(param_1[6],param_1[7]),param_1[8]);
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)CONCAT21(CONCAT11(param_1[9],param_1[10]),param_1[0xb]);
  return;
}



// FUNCTION 143ccc180 dtls1_hm_fragment_free body=117 status=ok
// SIG undefined dtls1_hm_fragment_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void dtls1_hm_fragment_free(longlong param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x28) != 0) {
      EVP_CIPHER_CTX_free(*(undefined8 *)(param_1 + 0x30));
      EVP_MD_CTX_free(*(undefined8 *)(param_1 + 0x38));
    }
    CRYPTO_free(*(undefined8 *)(param_1 + 0x58),"ssl\\statem\\statem_dtls.c",0x67);
    CRYPTO_free(*(undefined8 *)(param_1 + 0x60),"ssl\\statem\\statem_dtls.c",0x68);
    CRYPTO_free(param_1,"ssl\\statem\\statem_dtls.c",0x69);
  }
  return;
}



// FUNCTION 143ccc200 dtls1_hm_fragment_new body=334 status=ok
// SIG undefined dtls1_hm_fragment_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong dtls1_hm_fragment_new(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143ccc220;
  lVar3 = 0;
  lVar1 = CRYPTO_malloc(0x68,"ssl\\statem\\statem_dtls.c",0x3e);
  if (lVar1 == 0) {
    ERR_put_error(0x14,0x26f,0x41,"ssl\\statem\\statem_dtls.c",0x3f,uVar5);
    return 0;
  }
  lVar2 = lVar3;
  if ((param_1 == 0) ||
     (lVar2 = CRYPTO_malloc(param_1,"ssl\\statem\\statem_dtls.c",0x44), lVar2 != 0)) {
    *(longlong *)(lVar1 + 0x58) = lVar2;
    if ((param_2 == 0) ||
       (lVar3 = CRYPTO_zalloc(param_1 + 7U >> 3,"ssl\\statem\\statem_dtls.c",0x50), lVar3 != 0)) {
      *(longlong *)(lVar1 + 0x60) = lVar3;
      return lVar1;
    }
    ERR_put_error(0x14,0x26f,0x41,"ssl\\statem\\statem_dtls.c",0x52,uVar5);
    CRYPTO_free(lVar2,"ssl\\statem\\statem_dtls.c",0x53);
    uVar4 = 0x54;
  }
  else {
    ERR_put_error(0x14,0x26f,0x41,"ssl\\statem\\statem_dtls.c",0x45,uVar5);
    uVar4 = 0x46;
  }
  CRYPTO_free(lVar1,"ssl\\statem\\statem_dtls.c",uVar4);
  return 0;
}



// FUNCTION 143ccc350 dtls1_preprocess_fragment body=322 status=ok
// SIG undefined dtls1_preprocess_fragment(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dtls1_preprocess_fragment(longlong param_1,byte *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar3 = 1;
  uVar1 = *(ulonglong *)(param_2 + 8);
  if (uVar1 < (ulonglong)(*(longlong *)(param_2 + 0x20) + *(longlong *)(param_2 + 0x18))) {
LAB_143ccc457:
    uVar6 = 0x1000001ae;
  }
  else {
    uVar4 = 0x454c;
    if (0x454c < *(ulonglong *)(param_1 + 0x5d8)) {
      uVar4 = *(ulonglong *)(param_1 + 0x5d8);
    }
    if (uVar4 < uVar1) goto LAB_143ccc457;
    if (*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x1a8) == 0) {
      lVar2 = BUF_MEM_grow_clean(*(undefined8 *)(param_1 + 0x88),uVar1 + 0xc);
      if (lVar2 != 0) {
        *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x228) = uVar1;
        *(ulonglong *)(*(longlong *)(param_1 + 0xb0) + 0x198) = uVar1;
        *(uint *)(*(longlong *)(param_1 + 0xa8) + 0x230) = (uint)*param_2;
        *(byte *)(*(longlong *)(param_1 + 0xb0) + 400) = *param_2;
        *(undefined2 *)(*(longlong *)(param_1 + 0xb0) + 0x1a0) = *(undefined2 *)(param_2 + 0x10);
        return 1;
      }
      uVar6 = CONCAT44(uVar3,0x1b9);
      uVar3 = 0x50;
      uVar5 = 7;
      goto LAB_143ccc469;
    }
    if (uVar1 == *(ulonglong *)(*(longlong *)(param_1 + 0xb0) + 0x198)) {
      return 1;
    }
    uVar6 = 0x1000001c8;
  }
  uVar5 = 0x98;
  uVar3 = 0x2f;
LAB_143ccc469:
  ossl_statem_fatal(param_1,uVar3,0x120,uVar5,"ssl\\statem\\statem_dtls.c",uVar6);
  return 0;
}



// FUNCTION 143ccc4a0 dtls1_process_out_of_seq_message body=581 status=ok
// SIG undefined dtls1_process_out_of_seq_message(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 dtls1_process_out_of_seq_message(longlong param_1,char *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_188 [32];
  ulonglong local_168;
  undefined4 local_160;
  ulonglong *local_158;
  ulonglong local_148;
  longlong local_140;
  undefined1 local_138 [256];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x143ccc4b6;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  uVar10 = *(ulonglong *)(param_2 + 0x20);
  puVar8 = (undefined8 *)0x0;
  if (*(longlong *)(param_2 + 0x18) + uVar10 <= *(ulonglong *)(param_2 + 8)) {
    local_140 = (ulonglong)
                CONCAT11((char)*(undefined2 *)(param_2 + 0x10),
                         (char)((ushort)*(undefined2 *)(param_2 + 0x10) >> 8)) << 0x30;
    lVar6 = pqueue_find(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x118),&local_140);
    if ((lVar6 != 0) && (uVar10 != *(ulonglong *)(param_2 + 8))) {
      lVar6 = 0;
    }
    uVar1 = *(ushort *)(*(longlong *)(param_1 + 0xb0) + 0x110);
    puVar8 = (undefined8 *)0x0;
    if ((((uVar1 < *(ushort *)(param_2 + 0x10)) && ((uint)*(ushort *)(param_2 + 0x10) <= uVar1 + 10)
         ) && (lVar6 == 0)) && ((uVar1 != 0 || (*param_2 != '\x14')))) {
      if (uVar10 != *(ulonglong *)(param_2 + 8)) {
        uVar7 = FUN_143ccc7a0(param_1,param_2);
        return uVar7;
      }
      uVar9 = 0x454c;
      if (0x454c < *(ulonglong *)(param_1 + 0x5d8)) {
        uVar9 = *(ulonglong *)(param_1 + 0x5d8);
      }
      if ((uVar10 <= uVar9) &&
         (puVar8 = (undefined8 *)dtls1_hm_fragment_new(uVar10,0), puVar8 != (undefined8 *)0x0)) {
        uVar7 = *(undefined8 *)(param_2 + 8);
        *puVar8 = *(undefined8 *)param_2;
        puVar8[1] = uVar7;
        uVar7 = *(undefined8 *)(param_2 + 0x18);
        puVar8[2] = *(undefined8 *)(param_2 + 0x10);
        puVar8[3] = uVar7;
        uVar7 = *(undefined8 *)(param_2 + 0x28);
        puVar8[4] = *(undefined8 *)(param_2 + 0x20);
        puVar8[5] = uVar7;
        uVar7 = *(undefined8 *)(param_2 + 0x38);
        puVar8[6] = *(undefined8 *)(param_2 + 0x30);
        puVar8[7] = uVar7;
        uVar2 = *(undefined4 *)(param_2 + 0x44);
        uVar3 = *(undefined4 *)(param_2 + 0x48);
        uVar4 = *(undefined4 *)(param_2 + 0x4c);
        *(undefined4 *)(puVar8 + 8) = *(undefined4 *)(param_2 + 0x40);
        *(undefined4 *)((longlong)puVar8 + 0x44) = uVar2;
        *(undefined4 *)(puVar8 + 9) = uVar3;
        *(undefined4 *)((longlong)puVar8 + 0x4c) = uVar4;
        puVar8[10] = *(undefined8 *)(param_2 + 0x50);
        if (uVar10 != 0) {
          local_158 = &local_148;
          local_160 = 0;
          local_168 = uVar10;
          iVar5 = (**(code **)(*(longlong *)(param_1 + 8) + 0x68))(param_1,0x16,0,puVar8[0xb]);
          if ((iVar5 < 1) || (local_148 != uVar10)) goto LAB_143ccc654;
        }
        lVar6 = pitem_new(&local_140,puVar8);
        if ((lVar6 != 0) &&
           (lVar6 = pqueue_insert(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x118),lVar6),
           lVar6 != 0)) {
          return 0xfffffffd;
        }
      }
    }
    else {
      while( true ) {
        if (uVar10 == 0) {
          return 0xfffffffd;
        }
        local_158 = &local_148;
        local_160 = 0;
        local_168 = uVar10;
        if (0x100 < uVar10) {
          local_168 = 0x100;
        }
        iVar5 = (**(code **)(*(longlong *)(param_1 + 8) + 0x68))(param_1,0x16,0,local_138);
        if (iVar5 < 1) break;
        uVar10 = uVar10 - local_148;
      }
      if (lVar6 != 0) {
        return 0;
      }
    }
  }
LAB_143ccc654:
  dtls1_hm_fragment_free(puVar8);
  return 0;
}



// FUNCTION 143ccc6f0 dtls1_read_failed body=163 status=ok
// SIG undefined dtls1_read_failed(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong dtls1_read_failed(WriteBytesMem *param_1,uint param_2)

{
  int iVar1;
  uchar *puVar2;
  ulonglong uVar3;
  
  if (0 < (int)param_2) {
    ossl_statem_fatal(param_1,0x50,0x153,0x44,"ssl\\statem\\statem_dtls.c",0x1000003cc);
    return 0;
  }
  iVar1 = dtls1_is_timer_expired();
  if (iVar1 != 0) {
    iVar1 = ossl_statem_in_error(param_1);
    if (iVar1 == 0) {
      iVar1 = FSlateAccessibleWidget::GetId(param_1);
      if (iVar1 != 0) {
        uVar3 = dtls1_handle_timeout();
        return uVar3;
      }
      puVar2 = AK::WriteBytesMem::Bytes(param_1);
      BIO_set_flags(puVar2,1);
    }
  }
  return (ulonglong)param_2;
}



// FUNCTION 143ccc7a0 FUN_143ccc7a0 body=891 status=ok
// SIG undefined FUN_143ccc7a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_143ccc7a0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  byte *pbVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  undefined1 auStack_188 [32];
  ulonglong local_168;
  undefined4 local_160;
  ulonglong *local_158;
  ulonglong local_148;
  longlong local_140;
  undefined1 local_138 [256];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x143ccc7b6;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  uVar13 = param_2[4];
  puVar8 = (undefined8 *)0x0;
  if (param_2[3] + uVar13 <= (ulonglong)param_2[1]) {
    uVar15 = 0x454c;
    if (0x454c < *(ulonglong *)(param_1 + 0x5d8)) {
      uVar15 = *(ulonglong *)(param_1 + 0x5d8);
    }
    puVar8 = (undefined8 *)0x0;
    if ((ulonglong)param_2[1] <= uVar15) {
      if (uVar13 == 0) {
        return 0xfffffffd;
      }
      local_140 = (ulonglong)
                  CONCAT11((char)*(undefined2 *)(param_2 + 2),
                           (char)((ushort)*(undefined2 *)(param_2 + 2) >> 8)) << 0x30;
      lVar7 = pqueue_find(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x118),&local_140);
      if (lVar7 == 0) {
        puVar8 = (undefined8 *)dtls1_hm_fragment_new(param_2[1],1);
        if (puVar8 == (undefined8 *)0x0) goto LAB_143ccc91c;
        uVar4 = param_2[1];
        *puVar8 = *param_2;
        puVar8[1] = uVar4;
        uVar4 = param_2[3];
        puVar8[2] = param_2[2];
        puVar8[3] = uVar4;
        uVar4 = param_2[5];
        puVar8[4] = param_2[4];
        puVar8[5] = uVar4;
        uVar4 = param_2[7];
        puVar8[6] = param_2[6];
        puVar8[7] = uVar4;
        uVar1 = *(undefined4 *)((longlong)param_2 + 0x44);
        uVar2 = *(undefined4 *)(param_2 + 9);
        uVar3 = *(undefined4 *)((longlong)param_2 + 0x4c);
        *(undefined4 *)(puVar8 + 8) = *(undefined4 *)(param_2 + 8);
        *(undefined4 *)((longlong)puVar8 + 0x44) = uVar1;
        *(undefined4 *)(puVar8 + 9) = uVar2;
        *(undefined4 *)((longlong)puVar8 + 0x4c) = uVar3;
        puVar8[10] = param_2[10];
        puVar8[4] = puVar8[1];
        puVar8[3] = 0;
      }
      else {
        puVar8 = *(undefined8 **)(lVar7 + 8);
        if (puVar8[1] != param_2[1]) {
          puVar8 = (undefined8 *)0x0;
          goto LAB_143ccc91c;
        }
      }
      if (puVar8[0xc] == 0) {
        while( true ) {
          local_158 = &local_148;
          local_160 = 0;
          local_168 = uVar13;
          if (0x100 < uVar13) {
            local_168 = 0x100;
          }
          iVar5 = (**(code **)(*(longlong *)(param_1 + 8) + 0x68))(param_1,0x16,0,local_138);
          if (iVar5 < 1) break;
          uVar13 = uVar13 - local_148;
          if (uVar13 == 0) {
            return 0xfffffffd;
          }
        }
      }
      else {
        local_158 = &local_148;
        local_160 = 0;
        local_168 = uVar13;
        iVar5 = (**(code **)(*(longlong *)(param_1 + 8) + 0x68))
                          (param_1,0x16,0,puVar8[0xb] + param_2[3]);
        if ((0 < iVar5) && (local_148 == uVar13)) {
          uVar6 = *(uint *)(param_2 + 3);
          uVar15 = (ulonglong)(int)uVar6;
          iVar5 = (int)uVar13;
          if (iVar5 < 9) {
            if ((int)uVar6 < (int)(uVar6 + iVar5)) {
              do {
                uVar6 = (uint)uVar15;
                pbVar11 = (byte *)(((longlong)(int)uVar6 >> 3) + puVar8[0xc]);
                uVar15 = (ulonglong)(uVar6 + 1);
                *pbVar11 = *pbVar11 | (byte)(1 << (uVar6 & 7));
              } while ((int)(uVar6 + 1) < *(int *)(param_2 + 3) + iVar5);
            }
          }
          else {
            pbVar11 = (byte *)(((longlong)uVar15 >> 3) + puVar8[0xc]);
            *pbVar11 = *pbVar11 | (&DAT_146836310)[uVar6 & 7];
            iVar14 = *(int *)(param_2 + 3);
            iVar10 = (iVar14 >> 3) + 1;
            if (iVar10 < iVar5 + -1 + iVar14 >> 3) {
              lVar12 = (longlong)iVar10;
              do {
                iVar10 = iVar10 + 1;
                *(undefined1 *)(lVar12 + puVar8[0xc]) = 0xff;
                iVar14 = *(int *)(param_2 + 3);
                lVar12 = lVar12 + 1;
              } while (iVar10 < iVar14 + iVar5 + -1 >> 3);
            }
            pbVar11 = (byte *)(((longlong)(iVar5 + iVar14) + -1 >> 3) + puVar8[0xc]);
            *pbVar11 = *pbVar11 | (&DAT_146836318)[iVar5 + iVar14 & 7];
          }
          uVar6 = (uint)param_2[1];
          if (param_2[1] != 0) {
            lVar12 = puVar8[0xc];
            if (*(char *)(((longlong)(int)uVar6 + -1 >> 3) + lVar12) == (&DAT_146836318)[uVar6 & 7])
            {
              iVar5 = ((int)(uVar6 - 1) >> 3) + -1;
              if (-1 < iVar5) {
                lVar9 = (longlong)iVar5;
                do {
                  if (*(char *)(lVar12 + lVar9) != -1) goto LAB_143cccac6;
                  lVar9 = lVar9 + -1;
                } while (-1 < lVar9);
              }
              CRYPTO_free(lVar12,"ssl\\statem\\statem_dtls.c",0x261);
              puVar8[0xc] = 0;
            }
LAB_143cccac6:
            if (lVar7 != 0) {
              return 0xfffffffd;
            }
            lVar7 = pitem_new(&local_140,puVar8);
            if ((lVar7 != 0) &&
               (lVar7 = pqueue_insert(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x118),lVar7),
               lVar7 != 0)) {
              return 0xfffffffd;
            }
            goto LAB_143ccc91c;
          }
        }
      }
      if (lVar7 != 0) {
        return 0xffffffff;
      }
    }
  }
LAB_143ccc91c:
  dtls1_hm_fragment_free(puVar8);
  return 0xffffffff;
}



// FUNCTION 143cccb20 dtls1_retransmit_buffered_messages body=645 status=ok
// SIG undefined dtls1_retransmit_buffered_messages(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 dtls1_retransmit_buffered_messages(longlong param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  undefined8 uVar11;
  undefined1 auStack_78 [32];
  char *local_58;
  undefined4 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_48 = param_1;
  local_40 = FHardwareCursor::GetHandle(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x120));
  lVar9 = pqueue_next(&local_40);
  while( true ) {
    if (lVar9 == 0) {
      return 1;
    }
    iVar10 = (uint)*(ushort *)(*(longlong *)(lVar9 + 8) + 0x10) * 2 -
             *(int *)(*(longlong *)(lVar9 + 8) + 0x28);
    local_38 = (ulonglong)CONCAT11((char)iVar10,(char)((uint)iVar10 >> 8)) << 0x30;
    lVar9 = pqueue_find(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x120),&local_38);
    if (lVar9 == 0) break;
    puVar3 = *(undefined1 **)(lVar9 + 8);
    lVar9 = 1;
    if (*(int *)(puVar3 + 0x28) == 0) {
      lVar9 = 0xc;
    }
    _guard_xfg_dispatch_icall_nop
              (*(void **)(*(longlong *)(param_1 + 0x88) + 8),*(void **)(puVar3 + 0x58),
               *(longlong *)(puVar3 + 8) + lVar9);
    lVar4 = *(longlong *)(param_1 + 0xb0);
    *(longlong *)(param_1 + 0x98) = *(longlong *)(puVar3 + 8) + lVar9;
    uVar2 = *(undefined2 *)(puVar3 + 0x10);
    uVar1 = *puVar3;
    uVar5 = *(undefined8 *)(puVar3 + 0x20);
    *(undefined8 *)(lVar4 + 0x140) = *(undefined8 *)(puVar3 + 8);
    *(undefined1 *)(lVar4 + 0x138) = uVar1;
    *(undefined2 *)(lVar4 + 0x148) = uVar2;
    *(undefined8 *)(lVar4 + 0x158) = uVar5;
    *(undefined8 *)(lVar4 + 0x150) = 0;
    uVar5 = *(undefined8 *)(param_1 + 0x460);
    uVar6 = *(undefined8 *)(param_1 + 0x478);
    uVar7 = *(undefined8 *)(param_1 + 0x450);
    uVar2 = *(undefined2 *)(*(longlong *)(param_1 + 0x16b0) + 2);
    uVar8 = *(undefined8 *)(param_1 + 0x508);
    *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x200) = 1;
    *(undefined8 *)(param_1 + 0x460) = *(undefined8 *)(puVar3 + 0x30);
    *(undefined8 *)(param_1 + 0x478) = *(undefined8 *)(puVar3 + 0x38);
    *(undefined8 *)(param_1 + 0x450) = *(undefined8 *)(puVar3 + 0x40);
    *(undefined8 *)(param_1 + 0x508) = *(undefined8 *)(puVar3 + 0x48);
    DTLS_RECORD_LAYER_set_saved_w_epoch(param_1 + 0x800,*(undefined2 *)(puVar3 + 0x50));
    lVar4 = local_48;
    uVar11 = 0x16;
    if (*(int *)(puVar3 + 0x28) != 0) {
      uVar11 = 0x14;
    }
    iVar10 = dtls1_do_write(local_48,uVar11);
    *(undefined8 *)(lVar4 + 0x460) = uVar5;
    *(undefined8 *)(lVar4 + 0x478) = uVar6;
    *(undefined8 *)(lVar4 + 0x450) = uVar7;
    *(undefined8 *)(lVar4 + 0x508) = uVar8;
    DTLS_RECORD_LAYER_set_saved_w_epoch(param_1 + 0x800,uVar2);
    *(undefined4 *)(*(longlong *)(lVar4 + 0xb0) + 0x200) = 0;
    BIO_ctrl(*(undefined8 *)(lVar4 + 0x18),0xb,0,0);
    if (iVar10 < 1) {
      return 0xffffffff;
    }
    lVar9 = pqueue_next(&local_40);
    param_1 = lVar4;
  }
  local_50 = 0x45b;
  local_58 = "ssl\\statem\\statem_dtls.c";
  ossl_statem_fatal(param_1,0x50,0x186,0x44);
  return 0xffffffff;
}



// FUNCTION 143cccdb0 dtls1_set_handshake_header body=234 status=ok
// SIG undefined dtls1_set_handshake_header(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dtls1_set_handshake_header(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  undefined1 local_res20 [8];
  
  *(undefined2 *)(*(longlong *)(param_1 + 0xb0) + 0x10c) =
       *(undefined2 *)(*(longlong *)(param_1 + 0xb0) + 0x10e);
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (param_3 == 0x101) {
    *(undefined8 *)(lVar1 + 0x140) = 0;
    *(undefined8 *)(lVar1 + 0x150) = 0;
    *(undefined8 *)(lVar1 + 0x158) = 0;
    *(undefined1 *)(lVar1 + 0x138) = 1;
    *(undefined2 *)(lVar1 + 0x148) = *(undefined2 *)(lVar1 + 0x10c);
    iVar2 = WPACKET_put_bytes__(param_2,1,1);
  }
  else {
    *(short *)(lVar1 + 0x10e) = *(short *)(lVar1 + 0x10e) + 1;
    lVar1 = *(longlong *)(param_1 + 0xb0);
    *(char *)(lVar1 + 0x138) = (char)param_3;
    *(undefined8 *)(lVar1 + 0x140) = 0;
    *(undefined8 *)(lVar1 + 0x150) = 0;
    *(undefined8 *)(lVar1 + 0x158) = 0;
    *(undefined2 *)(lVar1 + 0x148) = *(undefined2 *)(lVar1 + 0x10c);
    iVar2 = WPACKET_allocate_bytes(param_2,0xc,local_res20);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = WPACKET_start_sub_packet(param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
  return 1;
}



// FUNCTION 143cccea0 dtls_construct_change_cipher_spec body=137 status=ok
// SIG undefined dtls_construct_change_cipher_spec(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dtls_construct_change_cipher_spec(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*param_1 == 0x100) {
    *(short *)(*(longlong *)(param_1 + 0x2c) + 0x10e) =
         *(short *)(*(longlong *)(param_1 + 0x2c) + 0x10e) + 1;
    iVar1 = WPACKET_put_bytes__(param_2,*(undefined2 *)(*(longlong *)(param_1 + 0x2c) + 0x10c),2);
    if (iVar1 == 0) {
      ossl_statem_fatal(param_1,0x50,0x173,0x44,"ssl\\statem\\statem_dtls.c",CONCAT44(uVar2,0x396));
      return 0;
    }
  }
  return 1;
}



// FUNCTION 143cccf30 dtls_get_message body=501 status=ok
// SIG undefined dtls_get_message(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dtls_get_message(int *param_1,int *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 *_Dst;
  int local_res8 [2];
  undefined1 local_res20 [8];
  undefined8 uVar8;
  
  uVar8 = 0x143cccf49;
  lVar1 = *(longlong *)(param_1 + 0x2c);
  _Dst = (undefined1 *)(lVar1 + 400);
  _guard_xfg_dispatch_icall_nop(_Dst,0,0x58);
  iVar3 = dtls_get_reassembled_message(param_1,local_res8,local_res20);
  while (iVar3 == 0) {
    if (1 < local_res8[0] + 3U) {
      return 0;
    }
    iVar3 = dtls_get_reassembled_message(param_1,local_res8,local_res20);
  }
  *param_2 = *(int *)(*(longlong *)(param_1 + 0x2a) + 0x230);
  puVar2 = *(undefined1 **)(*(longlong *)(param_1 + 0x22) + 8);
  *param_3 = *(undefined8 *)(param_1 + 0x26);
  if (*param_2 == 0x101) {
    if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
      (**(code **)(param_1 + 0x2e))
                (0,*param_1,0x14,puVar2,1,param_1,*(undefined8 *)(param_1 + 0x30),uVar8);
    }
  }
  else {
    lVar6 = *(longlong *)(lVar1 + 0x198);
    *puVar2 = *_Dst;
    puVar2[3] = (char)lVar6;
    uVar5 = (undefined1)((ulonglong)lVar6 >> 0x10);
    puVar2[1] = uVar5;
    uVar4 = (undefined1)((ulonglong)lVar6 >> 8);
    puVar2[2] = uVar4;
    puVar2[4] = *(undefined1 *)(lVar1 + 0x1a1);
    puVar2[5] = *(undefined1 *)(lVar1 + 0x1a0);
    *(undefined2 *)(puVar2 + 6) = 0;
    puVar2[8] = 0;
    puVar2[9] = uVar5;
    puVar2[10] = uVar4;
    puVar2[0xb] = (char)lVar6;
    puVar7 = puVar2 + 0xc;
    if (*param_1 != 0x100) {
      lVar6 = lVar6 + 0xc;
      puVar7 = puVar2;
    }
    if (((*param_2 == 0x14) && (iVar3 = ssl3_take_mac(param_1), iVar3 == 0)) ||
       (iVar3 = ssl3_finish_mac(param_1,puVar7,lVar6), iVar3 == 0)) {
      return 0;
    }
    if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
      (**(code **)(param_1 + 0x2e))
                (0,*param_1,0x16,puVar7,lVar6,param_1,*(undefined8 *)(param_1 + 0x30));
    }
    _guard_xfg_dispatch_icall_nop(_Dst,0,0x58);
    *(short *)(*(longlong *)(param_1 + 0x2c) + 0x110) =
         *(short *)(*(longlong *)(param_1 + 0x2c) + 0x110) + 1;
    *(longlong *)(param_1 + 0x24) = *(longlong *)(*(longlong *)(param_1 + 0x22) + 8) + 0xc;
  }
  return 1;
}



// FUNCTION 143ccd130 dtls_get_reassembled_message body=1380 status=ok
// SIG undefined dtls_get_reassembled_message(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 dtls_get_reassembled_message(undefined4 *param_1,undefined4 *param_2,ulonglong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  short sVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined1 auStack_108 [32];
  char *local_e8;
  undefined4 *local_e0;
  ulonglong *local_d8;
  ulonglong local_c8;
  int local_c0 [2];
  char local_b8 [8];
  ulonglong local_b0;
  ulonglong local_a0;
  ulonglong local_98;
  char local_58;
  char local_57;
  char local_56;
  char local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143ccd14f;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  *param_2 = 0;
  do {
    while (lVar5 = FHardwareCursor::GetHandle
                             (*(undefined8 *)(*(longlong *)(param_1 + 0x2c) + 0x118)), lVar5 != 0) {
      lVar1 = *(longlong *)(lVar5 + 8);
      lVar2 = *(longlong *)(param_1 + 0x2c);
      if (*(ushort *)(lVar2 + 0x110) <= *(ushort *)(lVar1 + 0x10)) {
        if ((*(longlong *)(lVar1 + 0x60) == 0) &&
           (*(ushort *)(lVar2 + 0x110) == *(ushort *)(lVar1 + 0x10))) {
          uVar6 = *(ulonglong *)(lVar1 + 0x20);
          pqueue_pop(*(undefined8 *)(lVar2 + 0x118));
          iVar3 = dtls1_preprocess_fragment(param_1,lVar1);
          if ((iVar3 != 0) && (*(size_t *)(lVar1 + 0x20) != 0)) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(lVar1 + 0x18) +
                               *(longlong *)(*(longlong *)(param_1 + 0x22) + 8) + 0xc),
                       *(void **)(lVar1 + 0x58),*(size_t *)(lVar1 + 0x20));
          }
          dtls1_hm_fragment_free(lVar1);
          pitem_free(lVar5);
          if (iVar3 == 0) {
            *(undefined8 *)(param_1 + 0x26) = 0;
            return 0;
          }
          *(ulonglong *)(param_1 + 0x26) = uVar6;
          *param_3 = uVar6;
          return 1;
        }
        break;
      }
      pqueue_pop(*(undefined8 *)(lVar2 + 0x118));
      if (*(int *)(lVar1 + 0x28) != 0) {
        EVP_CIPHER_CTX_free(*(undefined8 *)(lVar1 + 0x30));
        EVP_MD_CTX_free(*(undefined8 *)(lVar1 + 0x38));
      }
      CRYPTO_free(*(undefined8 *)(lVar1 + 0x58),"ssl\\statem\\statem_dtls.c",0x67);
      CRYPTO_free(*(undefined8 *)(lVar1 + 0x60),"ssl\\statem\\statem_dtls.c",0x68);
      CRYPTO_free(lVar1,"ssl\\statem\\statem_dtls.c",0x69);
      pitem_free(lVar5);
    }
    local_d8 = &local_c8;
    local_e0 = (undefined4 *)((ulonglong)local_e0 & 0xffffffff00000000);
    local_e8 = (char *)0xc;
    iVar3 = (**(code **)(*(longlong *)(param_1 + 2) + 0x68))(param_1,0x16,local_c0,&local_58);
    if (iVar3 < 1) {
LAB_143ccd660:
      param_1[10] = 3;
      goto LAB_143ccd667;
    }
    if (local_c0[0] == 0x14) {
      if (local_58 == '\x01') {
        _guard_xfg_dispatch_icall_nop
                  (*(void **)(*(longlong *)(param_1 + 0x22) + 8),&local_58,local_c8);
        *(ulonglong *)(param_1 + 0x26) = local_c8 - 1;
        *(longlong *)(param_1 + 0x24) = *(longlong *)(*(longlong *)(param_1 + 0x22) + 8) + 1;
        *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0x230) = 0x101;
        *(ulonglong *)(*(longlong *)(param_1 + 0x2a) + 0x228) = local_c8 - 1;
        *param_3 = local_c8 - 1;
        return 1;
      }
      local_e0 = (undefined4 *)CONCAT44(local_e0._4_4_,0x304);
      local_e8 = "ssl\\statem\\statem_dtls.c";
      ossl_statem_fatal(param_1,10,0x172,0x67);
      *(undefined8 *)(param_1 + 0x26) = 0;
      goto LAB_143ccd667;
    }
    if (local_c8 != 0xc) {
      local_e0 = (undefined4 *)CONCAT44(local_e0._4_4_,0x314);
      local_e8 = "ssl\\statem\\statem_dtls.c";
      ossl_statem_fatal(param_1,10,0x172);
      *(undefined8 *)(param_1 + 0x26) = 0;
      goto LAB_143ccd667;
    }
    _guard_xfg_dispatch_icall_nop(local_b8,0,0x58);
    local_b8[0] = local_58;
    uVar10 = (ulonglong)CONCAT21(CONCAT11(local_57,local_56),local_55);
    sVar7 = CONCAT11(local_54,local_53);
    uVar12 = (ulonglong)CONCAT21(CONCAT11(local_52,local_51),local_50);
    uVar9 = (ulonglong)CONCAT21(CONCAT11(local_4f,local_4e),local_4d);
    local_b0 = uVar10;
    local_a0 = uVar12;
    local_98 = uVar9;
    uVar6 = RECORD_LAYER_get_rrec_length(param_1 + 0x200);
    if (uVar6 < uVar9) {
      local_e0 = (undefined4 *)CONCAT44(local_e0._4_4_,0x325);
      uVar8 = 0x2f;
      uVar11 = 0x10f;
      goto LAB_143ccd47d;
    }
    if (sVar7 != *(short *)(*(longlong *)(param_1 + 0x2c) + 0x110)) {
      uVar4 = dtls1_process_out_of_seq_message(param_1,local_b8);
      *param_2 = uVar4;
      return 0;
    }
    if ((uVar9 != 0) && (uVar9 < uVar10)) {
      uVar4 = FUN_143ccc7a0(param_1,local_b8);
      *param_2 = uVar4;
      return 0;
    }
    if ((((param_1[0xe] != 0) || (*(longlong *)(*(longlong *)(param_1 + 0x2c) + 0x1a8) != 0)) ||
        (param_1[0x17] == 1)) || (local_58 != '\0')) {
      iVar3 = dtls1_preprocess_fragment(param_1,local_b8);
      if (iVar3 == 0) goto LAB_143ccd48b;
      if (uVar9 == 0) {
        local_c8 = 0;
      }
      else {
        local_d8 = &local_c8;
        local_e0 = (undefined4 *)((ulonglong)local_e0 & 0xffffffff00000000);
        local_e8 = (char *)uVar9;
        iVar3 = (**(code **)(*(longlong *)(param_1 + 2) + 0x68))
                          (param_1,0x16,0,
                           *(longlong *)(*(longlong *)(param_1 + 0x22) + 8) + 0xc + uVar12);
        if (iVar3 < 1) goto LAB_143ccd660;
      }
      if (local_c8 == uVar9) {
        *(ulonglong *)(param_1 + 0x26) = uVar9;
        *param_3 = uVar9;
        return 1;
      }
      local_e0 = (undefined4 *)CONCAT44(local_e0._4_4_,0x372);
      local_e8 = "ssl\\statem\\statem_dtls.c";
      ossl_statem_fatal(param_1,0x2f,0x172);
      *(undefined8 *)(param_1 + 0x26) = 0;
      goto LAB_143ccd667;
    }
    if (((local_57 != '\0') || (local_56 != '\0')) || (local_55 != '\0')) {
      local_e0 = (undefined4 *)CONCAT44(local_e0._4_4_,0x34e);
      uVar8 = 10;
      uVar11 = 0xf4;
LAB_143ccd47d:
      local_e8 = "ssl\\statem\\statem_dtls.c";
      ossl_statem_fatal(param_1,uVar8,0x172,uVar11);
LAB_143ccd48b:
      *(undefined8 *)(param_1 + 0x26) = 0;
LAB_143ccd667:
      *param_3 = 0;
      return 0;
    }
    if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
      local_d8 = *(ulonglong **)(param_1 + 0x30);
      local_e8 = (char *)0xc;
      local_e0 = param_1;
      (**(code **)(param_1 + 0x2e))(0,*param_1,0x16,&local_58);
    }
    *(undefined8 *)(param_1 + 0x26) = 0;
  } while( true );
}



// FUNCTION 143ccd6a0 PACKET_as_length_prefixed_2 body=130 status=ok
// SIG undefined PACKET_as_length_prefixed_2(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PACKET_as_length_prefixed_2(longlong *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  puVar1 = (undefined1 *)*param_1;
  if (1 < (ulonglong)param_1[1]) {
    uVar2 = param_1[1] - 2;
    uVar3 = (ulonglong)CONCAT11(*puVar1,puVar1[1]);
    if (uVar3 <= uVar2) {
      if (uVar2 == uVar3) {
        *param_1 = (longlong)(puVar1 + 2 + uVar3);
        param_1[1] = 0;
        *param_2 = (longlong)(puVar1 + 2);
        param_2[1] = uVar3;
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143ccd730 PACKET_memdup body=139 status=ok
// SIG undefined PACKET_memdup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PACKET_memdup(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  CRYPTO_free(*param_2,"d:\\dev\\openssl\\source\\win64-release\\ssl\\packet_locl.h",0x1a4);
  *param_2 = 0;
  *param_3 = 0;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar2 = CRYPTO_memdup(*param_1,lVar1,
                          "d:\\dev\\openssl\\source\\win64-release\\ssl\\packet_locl.h",0x1ad);
    *param_2 = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
    *param_3 = lVar1;
  }
  return 1;
}



// FUNCTION 143ccd7c0 FUN_143ccd7c0 body=57 status=ok
// SIG undefined FUN_143ccd7c0(void)

undefined8 FUN_143ccd7c0(int *param_1)

{
  if (((*param_1 < 0x301) ||
      ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x238) + 0x20) & 4) == 0)) &&
     ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x238) + 0x20) & 0x50) == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 143ccd800 FUN_143ccd800 body=401 status=ok
// SIG undefined FUN_143ccd800(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_143ccd800(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  code *pcVar1;
  
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 0xc:
    *param_3 = tls_construct_client_hello;
    *param_4 = 1;
    return 1;
  case 0xd:
    *param_3 = tls_construct_client_certificate;
    *param_4 = 0xb;
    return 1;
  case 0xe:
    *param_3 = tls_construct_client_key_exchange;
    *param_4 = 0x10;
    return 1;
  case 0xf:
    *param_3 = tls_construct_cert_verify;
    *param_4 = 0xf;
    return 1;
  case 0x10:
    break;
  case 0x11:
    *param_3 = tls_construct_next_proto;
    *param_4 = 0x43;
    return 1;
  case 0x12:
    *param_3 = tls_construct_finished;
    *param_4 = 0x14;
    return 1;
  default:
    ossl_statem_fatal(param_1,0x50,0x1ae,0xec,"ssl\\statem\\statem_clnt.c",0x385,0x143ccd80a);
    return 0;
  case 0x2b:
    *param_3 = tls_construct_key_update;
    *param_4 = 0x18;
    return 1;
  case 0x2f:
    *param_3 = 0;
    *param_4 = 0xffffffff;
    return 1;
  case 0x30:
    *param_3 = tls_construct_end_of_early_data;
    *param_4 = 5;
    return 1;
  }
  pcVar1 = dtls_construct_change_cipher_spec;
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
    pcVar1 = tls_construct_change_cipher_spec;
  }
  *param_3 = pcVar1;
  *param_4 = 0x101;
  return 1;
}



// FUNCTION 143ccd9f0 FUN_143ccd9f0 body=109 status=ok
// SIG undefined FUN_143ccd9f0(void)

undefined8 FUN_143ccd9f0(int *param_1)

{
  undefined8 uVar1;
  
  switch(param_1[0x17]) {
  case 2:
    return 0x102;
  case 3:
  case 0x26:
    return 20000;
  case 4:
  case 7:
    return *(undefined8 *)(param_1 + 0x176);
  case 5:
  case 9:
  case 0x27:
    return 0x4000;
  case 6:
    return 0x19000;
  default:
    return 0;
  case 10:
    break;
  case 0xb:
    return 0x40;
  case 0x2d:
    return 1;
  }
  uVar1 = 1;
  if (*param_1 == 0x100) {
    uVar1 = 3;
  }
  return uVar1;
}



// FUNCTION 143ccdac0 ossl_statem_client_post_process_message body=75 status=ok
// SIG undefined ossl_statem_client_post_process_message(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ossl_statem_client_post_process_message(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x5c) != 7) {
    ossl_statem_fatal(param_1,0x50,0x251,0x44,"ssl\\statem\\statem_clnt.c",0x447,0x143ccdaca);
    return 0;
  }
  uVar1 = tls_prepare_client_certificate();
  return uVar1;
}



// FUNCTION 143ccdb10 FUN_143ccdb10 body=835 status=ok
// SIG undefined FUN_143ccdb10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_143ccdb10(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  *(undefined8 *)(param_1 + 0x98) = 0;
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 0xc:
    if ((*(int *)(param_1 + 0x84) == 2) && (*(int *)(param_1 + 0x16e0) != 0)) {
      if (((*(uint *)(param_1 + 0x5c4) & 0x100000) == 0) &&
         (uVar5 = tls13_change_cipher_state(param_1,0x52), (int)uVar5 == 0)) {
        return uVar5;
      }
    }
    else {
      iVar4 = statem_flush(param_1);
      if (iVar4 == 0) {
        return 3;
      }
    }
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
      return 2;
    }
    *(undefined4 *)(param_1 + 0x5e0) = 1;
    return 2;
  default:
    goto LAB_143ccdbc7;
  case 0xe:
    lVar2 = *(longlong *)(param_1 + 0xa8);
    lVar6 = *(longlong *)(lVar2 + 0x2b8);
    uVar5 = *(undefined8 *)(lVar2 + 0x2c0);
    uVar1 = *(uint *)(*(longlong *)(lVar2 + 0x238) + 0x1c);
    if ((uVar1 & 0x20) == 0) {
      if ((lVar6 == 0) && ((uVar1 & 8) == 0)) {
        ossl_statem_fatal(param_1,0x50,0x162,0x41,"ssl\\statem\\statem_clnt.c",0x100000d31);
      }
      else {
        iVar4 = ssl_generate_master_secret(param_1,lVar6,uVar5,1);
        if (iVar4 != 0) {
          return 2;
        }
        lVar6 = 0;
        uVar5 = 0;
      }
    }
    else {
      iVar4 = srp_generate_client_master_secret(param_1);
      if (iVar4 != 0) {
        return 2;
      }
    }
    CRYPTO_clear_free(lVar6,uVar5,"ssl\\statem\\statem_clnt.c",0xd5a);
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2b8) = 0;
    return 0;
  case 0x10:
    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
        (iVar4 = **(int **)(param_1 + 8), 0x303 < iVar4)) && (iVar4 != 0x10000)) {
      return 2;
    }
    if (*(int *)(param_1 + 0x4d8) == 1) {
      return 2;
    }
    if ((*(int *)(param_1 + 0x84) != 2) || (*(int *)(param_1 + 0x16e0) == 0)) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x128) =
           *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x238);
      puVar3 = *(undefined4 **)(*(longlong *)(param_1 + 0xa8) + 0x298);
      if (puVar3 == (undefined4 *)0x0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x508) + 0x120) = 0;
      }
      else {
        *(undefined4 *)(*(longlong *)(param_1 + 0x508) + 0x120) = *puVar3;
      }
      iVar4 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x10))(param_1);
      if (iVar4 == 0) {
        return 0;
      }
      iVar4 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x20))(param_1,0x12);
      if (iVar4 == 0) {
        return 0;
      }
      if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
        return 2;
      }
      dtls1_reset_seq_numbers(param_1,2);
      return 2;
    }
    iVar4 = tls13_change_cipher_state(param_1,0x52);
    break;
  case 0x12:
    iVar4 = statem_flush(param_1);
    if (iVar4 != 1) {
      return 4;
    }
    if ((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0) {
      return 2;
    }
    iVar4 = **(int **)(param_1 + 8);
    if (iVar4 < 0x304) {
      return 2;
    }
    if (iVar4 == 0x10000) {
      return 2;
    }
    iVar4 = tls13_save_handshake_digest_for_pha(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x758) == 4) {
      return 2;
    }
    iVar4 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x20))(param_1,0x112);
    break;
  case 0x2b:
    iVar4 = statem_flush(param_1);
    if (iVar4 != 1) {
      return 3;
    }
    iVar4 = tls13_update_key(param_1,1);
    break;
  case 0x30:
    EVP_CIPHER_CTX_free(*(undefined8 *)(param_1 + 0x460));
    *(undefined8 *)(param_1 + 0x460) = 0;
    goto LAB_143ccdbc7;
  }
  if (iVar4 == 0) {
    return 0;
  }
LAB_143ccdbc7:
  return 2;
}



// FUNCTION 143ccdea0 ossl_statem_client_pre_work body=201 status=ok
// SIG undefined ossl_statem_client_pre_work(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ossl_statem_client_pre_work(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar1 == 1) {
    uVar2 = tls_finish_handshake(param_1,param_2,1);
    return uVar2;
  }
  if (iVar1 == 0xc) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) {
      uVar2 = ssl3_init_finished_mac(param_1);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
    }
  }
  else if (iVar1 == 0x10) {
    if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) &&
       (*(int *)(param_1 + 200) != 0)) {
      *(undefined4 *)(param_1 + 0x78) = 0;
      return 2;
    }
  }
  else if ((iVar1 == 0x2e) ||
          (((iVar1 == 0x2f && (*(int *)(param_1 + 0x84) != 7)) && (*(int *)(param_1 + 0x84) != 0))))
  {
    uVar2 = tls_finish_handshake(param_1,param_2,0,1);
    return uVar2;
  }
  return 2;
}



// FUNCTION 143ccdf70 FUN_143ccdf70 body=1526 status=ok
// SIG undefined FUN_143ccdf70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_143ccdf70(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char *pcVar6;
  code *pcVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  undefined8 local_res8;
  undefined4 uVar15;
  byte *local_18;
  ulonglong uStack_10;
  
  uStack_10 = 0x143ccdf8a;
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 2:
    if (1 < (ulonglong)param_2[1]) {
      *param_2 = *param_2 + 2;
      param_2[1] = param_2[1] - 2;
      local_18 = (byte *)*param_2;
      uStack_10 = param_2[1];
      if (uStack_10 != 0) {
        uStack_10 = uStack_10 - 1;
        bVar2 = *local_18;
        uVar13 = (ulonglong)bVar2;
        pbVar1 = local_18 + 1;
        local_18 = pbVar1;
        if (uVar13 <= uStack_10) {
          uStack_10 = uStack_10 - uVar13;
          local_18 = pbVar1 + uVar13;
          *param_2 = (longlong)local_18;
          param_2[1] = uStack_10;
          _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0xb0),pbVar1,(ulonglong)bVar2);
          *(ulonglong *)(*(longlong *)(param_1 + 0xb0) + 0x100) = uVar13;
          return 1;
        }
      }
    }
    ossl_statem_fatal(param_1,0x32,0x182,0x9f,"ssl\\statem\\statem_clnt.c",0x523);
    uVar10 = 0;
    break;
  case 3:
    uVar10 = tls_process_server_hello(param_1);
    break;
  case 4:
    uVar10 = tls_process_server_certificate(param_1);
    break;
  case 5:
    lVar9 = param_2[1];
    if (lVar9 == 0) {
LAB_143cce190:
      uVar15 = 0xac7;
      uVar14 = 0x149;
LAB_143cce1a5:
      uVar11 = 0x32;
    }
    else {
      pcVar6 = (char *)*param_2;
      cVar3 = *pcVar6;
      *param_2 = (longlong)(pcVar6 + 1);
      param_2[1] = lVar9 - 1U;
      if (cVar3 != '\x01') goto LAB_143cce190;
      if (lVar9 - 1U < 3) {
LAB_143cce180:
        uVar15 = 0xacd;
        uVar14 = 0x9f;
        goto LAB_143cce1a5;
      }
      cVar3 = pcVar6[1];
      cVar4 = pcVar6[2];
      cVar5 = pcVar6[3];
      *param_2 = (longlong)(pcVar6 + 4);
      uVar13 = (ulonglong)CONCAT21(CONCAT11(cVar3,cVar4),cVar5);
      param_2[1] = lVar9 - 4U;
      if (lVar9 - 4U != uVar13) goto LAB_143cce180;
      lVar9 = CRYPTO_malloc(uVar13,"ssl\\statem\\statem_clnt.c",0xad0);
      *(longlong *)(param_1 + 0x660) = lVar9;
      if (lVar9 != 0) {
        iVar8 = PACKET_copy_bytes(param_2,lVar9,uVar13);
        if (iVar8 != 0) {
          *(ulonglong *)(param_1 + 0x668) = uVar13;
          return 3;
        }
        uVar15 = 0xad8;
        uVar14 = 0x9f;
        goto LAB_143cce1a5;
      }
      uVar15 = 0xad3;
      uVar11 = 0x50;
      uVar14 = 0x41;
    }
    ossl_statem_fatal(param_1,uVar11,0x1ef,uVar14,"ssl\\statem\\statem_clnt.c",uVar15);
    uVar10 = 0;
    break;
  case 6:
    uVar10 = tls_process_key_exchange(param_1);
    break;
  case 7:
    uVar10 = tls_process_certificate_request(param_1);
    break;
  case 8:
    if (param_2[1] != 0) {
      ossl_statem_fatal(param_1,0x32,0x170,0x9f,"ssl\\statem\\statem_clnt.c",0xb24);
      return 0;
    }
    if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x1c) & 0x20) != 0) &&
       (iVar8 = SRP_Calc_A_param(param_1), iVar8 < 1)) {
      ossl_statem_fatal(param_1,0x50,0x170,0x169,"ssl\\statem\\statem_clnt.c",0xb2b);
      return 0;
    }
    iVar8 = ssl3_check_cert_and_algorithm(param_1);
    if (iVar8 != 0) {
      if (*(int *)(param_1 + 0x638) != -1) {
        pcVar7 = *(code **)(*(longlong *)(param_1 + 0x598) + 0x220);
        if (pcVar7 != (code *)0x0) {
          iVar8 = (*pcVar7)(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x598) + 0x228));
          if (iVar8 == 0) {
            uVar15 = 0xb08;
            uVar14 = 0x71;
            uVar10 = 0x148;
          }
          else {
            if (-1 < iVar8) goto LAB_143cce301;
            uVar14 = 0x50;
            uVar15 = 0xb0e;
            uVar10 = 0x41;
          }
          ossl_statem_fatal(param_1,uVar14,0x1ba,uVar10,"ssl\\statem\\statem_clnt.c",uVar15);
          goto LAB_143cce2d7;
        }
      }
LAB_143cce301:
      if (((*(longlong *)(param_1 + 0x718) == 0) || (iVar8 = ssl_validate_ct(param_1), iVar8 != 0))
         || ((*(byte *)(param_1 + 0x558) & 1) == 0)) {
        return 1;
      }
    }
LAB_143cce2d7:
    uVar10 = 0;
    break;
  case 9:
    uVar10 = tls_process_new_session_ticket(param_1);
    break;
  case 10:
    uVar10 = tls_process_change_cipher_spec(param_1);
    break;
  case 0xb:
    uVar10 = tls_process_finished(param_1);
    break;
  default:
    ossl_statem_fatal(param_1,0x50,0x252,0x44,"ssl\\statem\\statem_clnt.c",0x40b);
    uVar10 = 0;
    break;
  case 0x26:
    pbVar1 = (byte *)*param_2;
    uVar13 = param_2[1];
    local_res8 = 0;
    if (uVar13 < 2) {
LAB_143cce4df:
      uStack_10 = uVar13;
      local_18 = pbVar1;
      ossl_statem_fatal(param_1,0x32,0x1bc,0x9f,"ssl\\statem\\statem_clnt.c",0xe5c);
    }
    else {
      uVar12 = uVar13 - 2;
      local_18 = pbVar1 + 2;
      uStack_10 = (ulonglong)CONCAT11(*pbVar1,pbVar1[1]);
      pbVar1 = local_18;
      uVar13 = uVar12;
      if (uVar12 < uStack_10) goto LAB_143cce4df;
      pbVar1 = local_18 + uStack_10;
      uVar13 = uVar12 - uStack_10;
      if (uVar12 - uStack_10 != 0) goto LAB_143cce4df;
      *param_2 = (longlong)(local_18 + uStack_10);
      param_2[1] = 0;
      pbVar1 = local_18;
      uVar13 = uStack_10;
      if (param_2[1] != 0) goto LAB_143cce4df;
      iVar8 = tls_collect_extensions(param_1,&local_18,0x400,&local_res8,0,1);
      if ((iVar8 != 0) &&
         (iVar8 = tls_parse_all_extensions(param_1,0x400,local_res8,0,0,1), iVar8 != 0)) {
        CRYPTO_free(local_res8,"ssl\\statem\\statem_clnt.c",0xe69);
        return 3;
      }
    }
    CRYPTO_free(local_res8,"ssl\\statem\\statem_clnt.c",0xe6d);
    uVar10 = 0;
    break;
  case 0x27:
    uVar10 = tls_process_cert_verify(param_1);
    break;
  case 0x29:
    if (param_2[1] == 0) {
      if ((*(uint *)(param_1 + 0x5c4) & 0x40000000) == 0) {
        if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
          SSL_renegotiate_abbreviated(param_1);
          uVar10 = 1;
        }
        else {
          SSL_renegotiate();
          uVar10 = 1;
        }
      }
      else {
        ssl3_send_alert(param_1,1,100);
        uVar10 = 1;
      }
    }
    else {
      ossl_statem_fatal(param_1,0x32,0x1fb,0x9f,"ssl\\statem\\statem_clnt.c",0xe3c);
      uVar10 = 0;
    }
    break;
  case 0x2d:
    uVar10 = tls_process_key_update(param_1);
  }
  return uVar10;
}



// FUNCTION 143cce5d0 FUN_143cce5d0 body=1170 status=ok
// SIG undefined FUN_143cce5d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_143cce5d0(WriteBytesMem *param_1,int param_2)

{
  int iVar1;
  uchar *puVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  uVar3 = *(uint *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8;
  if (((uVar3 == 0) && (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
    switch(*(undefined4 *)(param_1 + 0x5c)) {
    case 1:
      if (param_2 == 4) {
        *(undefined4 *)(param_1 + 0x5c) = 9;
        return 1;
      }
      if (param_2 == 0x18) {
        *(undefined4 *)(param_1 + 0x5c) = 0x2d;
        return 1;
      }
      if ((param_2 == 0xd) && (*(int *)(param_1 + 0x758) == 1)) {
        *(undefined4 *)(param_1 + 0x758) = 4;
        uVar4 = 1;
        iVar1 = tls13_restore_handshake_digest_for_pha(param_1);
        if (iVar1 != 0) {
LAB_143cce744:
          *(undefined4 *)(param_1 + 0x5c) = 7;
          return 1;
        }
      }
      break;
    case 3:
      if (param_2 == 8) {
        *(undefined4 *)(param_1 + 0x5c) = 0x26;
        return 1;
      }
      break;
    case 4:
      if (param_2 == 0xf) {
        *(undefined4 *)(param_1 + 0x5c) = 0x27;
        return 1;
      }
      break;
    case 0xc:
      if (param_2 == 2) {
        *(undefined4 *)(param_1 + 0x5c) = 3;
        return 1;
      }
      break;
    case 0x26:
      if (*(int *)(param_1 + 200) != 0) goto switchD_143cce642_caseD_27;
      if (param_2 == 0xd) goto LAB_143cce744;
    case 7:
      if (param_2 == 0xb) {
        *(undefined4 *)(param_1 + 0x5c) = 4;
        return 1;
      }
      break;
    case 0x27:
switchD_143cce642_caseD_27:
      if (param_2 == 0x14) {
        *(undefined4 *)(param_1 + 0x5c) = 0xb;
        return 1;
      }
    }
  }
  else {
    switch(*(undefined4 *)(param_1 + 0x5c)) {
    case 1:
      if (param_2 == 0) {
        *(undefined4 *)(param_1 + 0x5c) = 0x29;
        return 1;
      }
      break;
    case 3:
      if (*(int *)(param_1 + 200) != 0) {
        iVar1 = *(int *)(param_1 + 0x670);
        goto joined_r0x000143cce9c9;
      }
      if ((uVar3 != 0) && (param_2 == 3)) {
LAB_143cce859:
        *(undefined4 *)(param_1 + 0x5c) = 2;
        return 1;
      }
      if ((((0x300 < *(int *)param_1) && (*(longlong *)(param_1 + 0x6b0) != 0)) &&
          (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x180) != 0)) && (param_2 == 0x101)) {
        *(undefined4 *)(param_1 + 200) = 1;
        *(undefined4 *)(param_1 + 0x5c) = 10;
        return 1;
      }
      if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x20) & 0x54) == 0) {
        if (param_2 == 0xb) {
          *(undefined4 *)(param_1 + 0x5c) = 4;
          return 1;
        }
        break;
      }
      uVar3 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x1c);
      if ((uVar3 & 0x1a6) != 0) goto LAB_143cce9a2;
      if (((uVar3 & 0x1c8) != 0) && (param_2 == 0xc)) goto LAB_143cce9ab;
      goto joined_r0x000143cce979;
    case 4:
      if ((*(int *)(param_1 + 0x64c) != 0) && (param_2 == 0x16)) {
        *(undefined4 *)(param_1 + 0x5c) = 5;
        return 1;
      }
    case 5:
      uVar3 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x1c);
      if ((uVar3 & 0x1a6) == 0) {
        if (((uVar3 & 0x1c8) != 0) && (param_2 == 0xc)) goto LAB_143cce9ab;
switchD_143cce780_caseD_6:
joined_r0x000143cce979:
        if (param_2 == 0xd) {
          uVar4 = 1;
          iVar1 = FUN_143ccd7c0(param_1);
          if (iVar1 != 0) {
            *(undefined4 *)(param_1 + 0x5c) = 7;
            return 1;
          }
        }
        else {
switchD_143cce780_caseD_7:
          if (param_2 == 0xe) {
            *(undefined4 *)(param_1 + 0x5c) = 8;
            return 1;
          }
        }
      }
      else {
LAB_143cce9a2:
        if (param_2 == 0xc) {
LAB_143cce9ab:
          *(undefined4 *)(param_1 + 0x5c) = 6;
          return 1;
        }
      }
      break;
    case 6:
      goto switchD_143cce780_caseD_6;
    case 7:
      goto switchD_143cce780_caseD_7;
    case 10:
      if (param_2 == 0x14) {
        *(undefined4 *)(param_1 + 0x5c) = 0xb;
        return 1;
      }
      break;
    case 0xc:
      if (param_2 == 2) {
LAB_143cce7ff:
        *(undefined4 *)(param_1 + 0x5c) = 3;
        return 1;
      }
      if ((uVar3 != 0) && (param_2 == 3)) goto LAB_143cce859;
      break;
    case 0x12:
      iVar1 = *(int *)(param_1 + 0x670);
joined_r0x000143cce9c9:
      if (iVar1 != 0) {
        if (param_2 == 4) {
          *(undefined4 *)(param_1 + 0x5c) = 9;
          return 1;
        }
        break;
      }
    case 9:
      if (param_2 == 0x101) {
        *(undefined4 *)(param_1 + 0x5c) = 10;
        return 1;
      }
      break;
    case 0x2e:
      if (param_2 == 2) goto LAB_143cce7ff;
    }
  }
  if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) &&
     (param_2 == 0x101)) {
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x28) = 3;
    puVar2 = AK::WriteBytesMem::Bytes(param_1);
    BIO_clear_flags(puVar2,0xf);
    BIO_set_flags(puVar2,9);
    return 0;
  }
  ossl_statem_fatal(param_1,10,0x1a1,0xf4,"ssl\\statem\\statem_clnt.c",CONCAT44(uVar4,0x18b));
  return 0;
}



// FUNCTION 143cceb10 FUN_143cceb10 body=1213 status=ok
// SIG undefined FUN_143cceb10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_143cceb10(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8;
  if (((uVar4 != 0) || (iVar1 = **(int **)(param_1 + 8), iVar1 < 0x304)) || (iVar1 == 0x10000)) {
    switch(*(undefined4 *)(param_1 + 0x5c)) {
    case 0:
    case 2:
      break;
    case 1:
      if (*(int *)(param_1 + 0x750) == 0) {
        return 2;
      }
      break;
    case 3:
      if (((*(uint *)(param_1 + 0x5c4) & 0x100000) != 0) &&
         (uVar3 = 0x10, *(int *)(param_1 + 0x84) != 7)) goto LAB_143ccee07;
      break;
    default:
      ossl_statem_fatal(param_1,0x50,599,0x44,"ssl\\statem\\statem_clnt.c",0x100000208);
      return 0;
    case 8:
      *(uint *)(param_1 + 0x5c) = 0xe - (uint)(*(int *)(*(longlong *)(param_1 + 0xa8) + 0x248) != 0)
      ;
      return 1;
    case 0xb:
      if (*(int *)(param_1 + 200) == 0) goto LAB_143ccef47;
    case 0xf:
      *(undefined4 *)(param_1 + 0x5c) = 0x10;
      return 1;
    case 0xc:
      if (*(int *)(param_1 + 0x84) != 2) {
        return 2;
      }
      uVar3 = 0x10;
      if ((*(uint *)(param_1 + 0x5c4) & 0x100000) == 0) {
        uVar3 = 0x2e;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar3;
      return 1;
    case 0xd:
      *(undefined4 *)(param_1 + 0x5c) = 0xe;
      return 1;
    case 0xe:
      *(uint *)(param_1 + 0x5c) = (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x248) != 1) + 0xf;
      if ((**(byte **)(param_1 + 0xa8) & 0x10) == 0) {
        return 1;
      }
      *(undefined4 *)(param_1 + 0x5c) = 0x10;
      return 1;
    case 0x10:
      if (*(int *)(param_1 + 0x4d8) == 1) {
        *(undefined4 *)(param_1 + 0x5c) = 0xc;
        return 1;
      }
      if (*(int *)(param_1 + 0x84) != 2) {
        if ((uVar4 == 0) && (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x3dc) != 0)) {
          *(undefined4 *)(param_1 + 0x5c) = 0x11;
          return 1;
        }
        *(undefined4 *)(param_1 + 0x5c) = 0x12;
        return 1;
      }
      *(undefined4 *)(param_1 + 0x5c) = 0x2e;
      return 1;
    case 0x11:
      *(undefined4 *)(param_1 + 0x5c) = 0x12;
      return 1;
    case 0x12:
      if (*(int *)(param_1 + 200) == 0) {
        return 2;
      }
LAB_143ccef47:
      *(undefined4 *)(param_1 + 0x5c) = 1;
      return 1;
    case 0x29:
      iVar1 = ssl3_renegotiate_check(param_1,1);
      if (iVar1 == 0) goto LAB_143ccef47;
      uVar2 = tls_setup_handshake(param_1);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
      break;
    case 0x2e:
      return 2;
    }
    uVar3 = 0xc;
LAB_143ccee07:
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    return 1;
  }
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 1:
    if (*(int *)(param_1 + 0x754) == -1) {
      return 2;
    }
    break;
  default:
    uVar2 = 0x1000001a2;
    goto LAB_143cced3b;
  case 7:
    if (*(int *)(param_1 + 0x758) == 4) {
      *(undefined4 *)(param_1 + 0x5c) = 0xd;
      return 1;
    }
    if ((*(byte *)(param_1 + 0x44) & 1) != 0) goto switchD_143cceb80_caseD_9;
    uVar2 = 0x1000001b2;
LAB_143cced3b:
    ossl_statem_fatal(param_1,0x50,0x256,0x44,"ssl\\statem\\statem_clnt.c",uVar2);
    return 0;
  case 9:
  case 0x12:
  case 0x2b:
switchD_143cceb80_caseD_9:
    *(undefined4 *)(param_1 + 0x5c) = 1;
    return 1;
  case 0xb:
    if ((*(int *)(param_1 + 0x84) - 3U & 0xfffffffb) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0x2f;
      return 1;
    }
    if (((*(uint *)(param_1 + 0x5c4) & 0x100000) != 0) && (*(int *)(param_1 + 0x4d8) == 0)) {
      *(undefined4 *)(param_1 + 0x5c) = 0x10;
      return 1;
    }
    uVar3 = 0x12;
    if (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x248) != 0) {
      uVar3 = 0xd;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    return 1;
  case 0xd:
    uVar3 = 0x12;
    if (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x248) == 1) {
      uVar3 = 0xf;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    return 1;
  case 0xf:
    *(undefined4 *)(param_1 + 0x5c) = 0x12;
    return 1;
  case 0x10:
  case 0x30:
    goto switchD_143cceb80_caseD_10;
  case 0x2d:
    if (*(int *)(param_1 + 0x754) == -1) goto switchD_143cceb80_caseD_9;
    break;
  case 0x2f:
    if (*(int *)(param_1 + 0x6e8) == 2) {
      *(undefined4 *)(param_1 + 0x5c) = 0x30;
      return 1;
    }
    goto switchD_143cceb80_caseD_10;
  }
  *(undefined4 *)(param_1 + 0x5c) = 0x2b;
  return 1;
switchD_143cceb80_caseD_10:
  uVar3 = 0x12;
  if (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x248) != 0) {
    uVar3 = 0xd;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  return 1;
}



// FUNCTION 143ccf0a0 set_client_ciphersuite body=525 status=ok
// SIG undefined set_client_ciphersuite(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 set_client_ciphersuite(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  uVar7 = 1;
  lVar2 = ssl_get_cipher_by_char(param_1,param_2,0);
  if (lVar2 == 0) {
    ossl_statem_fatal(param_1,0x2f,0x21c,0xf8,"ssl\\statem\\statem_clnt.c",CONCAT44(uVar7,0x542));
    return 0;
  }
  iVar1 = ssl_cipher_disabled(param_1,lVar2,0x10003,1);
  if (iVar1 != 0) {
    ossl_statem_fatal(param_1,0x2f,0x21c,0x105,"ssl\\statem\\statem_clnt.c",CONCAT44(uVar7,0x54b));
    return 0;
  }
  uVar3 = ssl_get_ciphers_by_id(param_1);
  iVar1 = OPENSSL_sk_find(uVar3,lVar2);
  if (iVar1 < 0) {
    uVar6 = CONCAT44(uVar7,0x554);
  }
  else {
    if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0) ||
         (iVar1 = **(int **)(param_1 + 8), iVar1 < 0x304)) || (iVar1 == 0x10000)) ||
       ((lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238), lVar4 == 0 ||
        (*(int *)(lVar4 + 0x18) == *(int *)(lVar2 + 0x18))))) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x508) + 0x128);
      if (lVar4 != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x508) + 0x130) = *(undefined4 *)(lVar4 + 0x18);
      }
      if ((*(int *)(param_1 + 200) == 0) ||
         (*(int *)(*(longlong *)(param_1 + 0x508) + 0x130) == *(int *)(lVar2 + 0x18))) {
LAB_143ccf28f:
        *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) = lVar2;
        return 1;
      }
      if (((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
         ((iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1 && (iVar1 != 0x10000)))) {
        lVar4 = ssl_md(*(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x128) + 0x40)
                      );
        lVar5 = ssl_md(*(undefined4 *)(lVar2 + 0x40));
        if (lVar5 == lVar4) goto LAB_143ccf28f;
        uVar6 = CONCAT44(uVar7,0x571);
        uVar3 = 0xda;
      }
      else {
        uVar6 = CONCAT44(uVar7,0x57a);
        uVar3 = 0xc5;
      }
      goto LAB_143ccf172;
    }
    uVar6 = CONCAT44(uVar7,0x55c);
  }
  uVar3 = 0x105;
LAB_143ccf172:
  ossl_statem_fatal(param_1,0x2f,0x21c,uVar3,"ssl\\statem\\statem_clnt.c",uVar6);
  return 0;
}



// FUNCTION 143ccf2b0 ssl3_check_cert_and_algorithm body=318 status=ok
// SIG undefined ssl3_check_cert_and_algorithm(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_check_cert_and_algorithm(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong local_res8;
  undefined4 uVar8;
  undefined8 uVar7;
  
  uVar8 = 1;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238);
  uVar1 = *(uint *)(lVar5 + 0x20);
  uVar2 = *(uint *)(lVar5 + 0x1c);
  if ((uVar1 & 0xab) == 0) {
    return 1;
  }
  uVar4 = X509_get0_pubkey(*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0xf8));
  lVar5 = ssl_cert_lookup_by_pkey(uVar4,&local_res8);
  if ((lVar5 == 0) || ((uVar1 & *(uint *)(lVar5 + 4)) == 0)) {
    uVar7 = CONCAT44(uVar8,0xe01);
    uVar4 = 0xdd;
  }
  else if ((*(uint *)(lVar5 + 4) & 8) == 0) {
    if (((uVar2 & 0x41) == 0) || (local_res8 == 0)) {
      if ((uVar2 & 2) == 0) {
        return 1;
      }
      if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x408) != 0) {
        return 1;
      }
      uVar6 = 0x50;
      uVar7 = CONCAT44(uVar8,0xe19);
      uVar4 = 0x44;
      goto LAB_143ccf352;
    }
    uVar7 = CONCAT44(uVar8,0xe12);
    uVar4 = 0xa9;
  }
  else {
    iVar3 = ssl_check_srvr_ecc_cert_and_alg
                      (*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0xf8),param_1);
    if (iVar3 != 0) {
      return 1;
    }
    uVar7 = CONCAT44(uVar8,0xe0a);
    uVar4 = 0x130;
  }
  uVar6 = 0x28;
LAB_143ccf352:
  ossl_statem_fatal(param_1,uVar6,0x82,uVar4,"ssl\\statem\\statem_clnt.c",uVar7);
  return 0;
}



// FUNCTION 143ccf3f0 ssl3_check_client_certificate body=109 status=ok
// SIG undefined ssl3_check_client_certificate(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_check_client_certificate(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143ccf3fc;
  iVar1 = tls_choose_sigalg(param_1,0);
  if ((iVar1 == 0) || (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2d8) == 0)) {
    return 0;
  }
  if (((*(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30001) != 0) &&
     (iVar1 = FUN_143cb9da0(param_1,0,0,0,0xfffffffe,uVar2), iVar1 == 0)) {
    return 0;
  }
  return 1;
}



// FUNCTION 143ccf460 ssl_cipher_list_to_bytes body=697 status=ok
// SIG undefined ssl_cipher_list_to_bytes(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_cipher_list_to_bytes(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong local_res20;
  undefined4 uVar12;
  undefined8 uVar13;
  ulonglong uVar11;
  
  uVar13 = 0x143ccf473;
  iVar3 = *(int *)(param_1 + 0x750);
  uVar7 = 0;
  iVar1 = ssl_set_client_disabled();
  if (iVar1 == 0) {
    uVar12 = 0xe8b;
    uVar8 = 0xbf;
  }
  else {
    if (param_2 != 0) {
      uVar4 = 0xfffc;
      if (iVar3 != 0) {
        uVar4 = 0xfffe;
      }
      uVar9 = uVar4 - 2;
      if ((*(byte *)(param_1 + 0x5c8) & 0x80) == 0) {
        uVar9 = uVar4;
      }
      iVar1 = OPENSSL_sk_num(param_2);
      uVar4 = uVar7;
      uVar11 = uVar7;
      if (0 < iVar1) {
        do {
          if (uVar9 <= uVar7) break;
          lVar5 = OPENSSL_sk_value(param_2,uVar11);
          iVar1 = ssl_cipher_disabled(param_1,lVar5,0x10001,0);
          if (iVar1 == 0) {
            iVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0x98))(lVar5,param_3,&local_res20);
            if (iVar1 == 0) {
              uVar8 = 0xeb4;
              goto LAB_143ccf65e;
            }
            if (uVar4 == 0) {
              if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
                iVar1 = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x340);
                if ((iVar1 <= *(int *)(lVar5 + 0x30)) && (*(int *)(lVar5 + 0x2c) <= iVar1)) {
                  uVar4 = 1;
                }
              }
              else {
                iVar1 = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x340);
                iVar6 = *(int *)(lVar5 + 0x38);
                if (iVar6 == 0x100) {
                  iVar6 = 0xff00;
                }
                iVar2 = iVar1;
                if (iVar1 == 0x100) {
                  iVar2 = 0xff00;
                }
                if (iVar6 <= iVar2) {
                  iVar6 = *(int *)(lVar5 + 0x34);
                  if (iVar6 == 0x100) {
                    iVar6 = 0xff00;
                  }
                  if (iVar1 == 0x100) {
                    iVar1 = 0xff00;
                  }
                  if (iVar1 <= iVar6) {
                    uVar4 = 1;
                  }
                }
              }
            }
            uVar7 = uVar7 + local_res20;
          }
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
          iVar1 = OPENSSL_sk_num(param_2);
        } while ((int)uVar10 < iVar1);
        if ((uVar7 != 0) && (uVar4 != 0)) {
          if ((iVar3 == 0) &&
             (iVar3 = (**(code **)(*(longlong *)(param_1 + 8) + 0x98))
                                (&DAT_146836320,param_3,&local_res20), iVar3 == 0)) {
            uVar8 = 0xeda;
          }
          else {
            if (((*(byte *)(param_1 + 0x5c8) & 0x80) == 0) ||
               (iVar3 = (**(code **)(*(longlong *)(param_1 + 8) + 0x98))
                                  (&DAT_146836370,param_3,&local_res20), iVar3 != 0)) {
              return 1;
            }
            uVar8 = 0xee4;
          }
LAB_143ccf65e:
          ossl_statem_fatal(param_1,0x50,0x1a9,0x44,"ssl\\statem\\statem_clnt.c",uVar8);
          return 0;
        }
      }
      ossl_statem_fatal(param_1,0x50,0x1a9,0xb5,"ssl\\statem\\statem_clnt.c",0xeca);
      if (uVar4 == 0) {
        ERR_add_error_data(1,"No ciphers enabled for max supported SSL/TLS version");
      }
      return 0;
    }
    uVar12 = 0xe91;
    uVar8 = 0x44;
  }
  ossl_statem_fatal(param_1,0x50,0x1a9,uVar8,"ssl\\statem\\statem_clnt.c",uVar12,uVar13);
  return 0;
}



// FUNCTION 143ccf720 tls_construct_cke_gost body=866 status=ok
// SIG undefined tls_construct_cke_gost(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 tls_construct_cke_gost(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined1 auStack_198 [32];
  char *local_178;
  undefined1 *local_170;
  ulonglong local_168;
  undefined1 local_160 [8];
  undefined1 local_158 [32];
  undefined1 local_138 [256];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x143ccf732;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  lVar7 = 0;
  uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x20);
  if (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0xf8) == 0) {
    local_170 = (undefined1 *)CONCAT44(local_170._4_4_,0xc72);
    local_178 = "ssl\\statem\\statem_clnt.c";
    ossl_statem_fatal(param_1,0x28,0x196);
    return 0;
  }
  uVar4 = X509_get0_pubkey();
  lVar5 = EVP_PKEY_CTX_new(uVar4,0);
  if (lVar5 == 0) {
    local_170 = (undefined1 *)CONCAT44(local_170._4_4_,0xc79);
    local_178 = "ssl\\statem\\statem_clnt.c";
    ossl_statem_fatal(param_1,0x50,0x196,0x41);
    return 0;
  }
  lVar6 = CRYPTO_malloc(0x20,"ssl\\statem\\statem_clnt.c",0xc84);
  if (lVar6 == 0) {
    uVar2 = 0xc87;
    uVar8 = 0x41;
    goto LAB_143ccfa0f;
  }
  iVar3 = EVP_PKEY_encrypt_init(lVar5);
  if ((iVar3 < 1) || (iVar3 = RAND_bytes(lVar6,0x20), iVar3 < 1)) {
    uVar2 = 0xc91;
  }
  else {
    lVar7 = EVP_MD_CTX_new();
    if (lVar7 != 0) {
      uVar4 = 0x3d6;
      if ((uVar1 & 0x80) == 0) {
        uVar4 = 0x329;
      }
      uVar4 = OBJ_nid2sn(uVar4);
      uVar4 = EVP_get_digestbyname(uVar4);
      iVar3 = EVP_DigestInit(lVar7,uVar4);
      if ((((0 < iVar3) &&
           (iVar3 = EVP_DigestUpdate(lVar7,*(longlong *)(param_1 + 0xa8) + 0xb8,0x20), 0 < iVar3))
          && (iVar3 = EVP_DigestUpdate(lVar7,*(longlong *)(param_1 + 0xa8) + 0x98,0x20), 0 < iVar3))
         && (iVar3 = EVP_DigestFinal_ex(lVar7,local_158,local_160), 0 < iVar3)) {
        EVP_MD_CTX_free(lVar7);
        lVar7 = 0;
        local_170 = local_158;
        local_178 = (char *)CONCAT44(local_178._4_4_,8);
        iVar3 = EVP_PKEY_CTX_ctrl(lVar5,0xffffffff,0x100,8);
        if (iVar3 < 0) {
          uVar2 = 0xca9;
          uVar8 = 0x112;
          goto LAB_143ccfa0f;
        }
        local_168 = 0xff;
        local_178 = (char *)0x20;
        iVar3 = EVP_PKEY_encrypt(lVar5,local_138,&local_168,lVar6);
        if (iVar3 < 1) {
          uVar2 = 0xcb3;
          uVar8 = 0x112;
          goto LAB_143ccfa0f;
        }
        iVar3 = WPACKET_put_bytes__(param_2,0x30,1);
        if (((iVar3 != 0) &&
            ((local_168 < 0x80 || (iVar3 = WPACKET_put_bytes__(param_2,0x81,1), iVar3 != 0)))) &&
           (iVar3 = WPACKET_sub_memcpy__(param_2,local_138,local_168,1), iVar3 != 0)) {
          EVP_PKEY_CTX_free(lVar5);
          *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2b8) = lVar6;
          *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2c0) = 0x20;
          return 1;
        }
        uVar2 = 0xcbb;
        goto LAB_143ccfa09;
      }
    }
    uVar2 = 0xca1;
  }
LAB_143ccfa09:
  uVar8 = 0x44;
LAB_143ccfa0f:
  local_170 = (undefined1 *)CONCAT44(local_170._4_4_,uVar2);
  local_178 = "ssl\\statem\\statem_clnt.c";
  ossl_statem_fatal(param_1,0x50,0x196,uVar8);
  EVP_PKEY_CTX_free(lVar5);
  CRYPTO_clear_free(lVar6,0x20,"ssl\\statem\\statem_clnt.c",0xcc6);
  EVP_MD_CTX_free(lVar7);
  return 0;
}



// FUNCTION 143ccfa90 tls_construct_cke_psk_preamble body=703 status=ok
// SIG undefined tls_construct_cke_psk_preamble(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong tls_construct_cke_psk_preamble(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_208 [32];
  char *local_1e8;
  undefined4 local_1e0;
  char local_1d8;
  char local_1d7 [143];
  char local_148 [256];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143ccfaaa;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  pcVar1 = *(code **)(param_1 + 0x578);
  uVar8 = 0;
  uVar3 = 0;
  uVar7 = 0;
  uVar11 = 0;
  uVar13 = 0;
  if (pcVar1 == (code *)0x0) {
    local_1e0 = 0xb4b;
    uVar10 = 0xe0;
    uVar7 = uVar8;
    uVar11 = uVar8;
    uVar12 = uVar8;
    uVar13 = uVar8;
LAB_143ccfcc6:
    uVar6 = 0x50;
  }
  else {
    _guard_xfg_dispatch_icall_nop(&local_1d8,0,0x81);
    local_1e8 = local_148;
    local_1e0 = 0x100;
    uVar2 = (*pcVar1)(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0xe0),&local_1d8,0x80
                     );
    uVar12 = (ulonglong)uVar2;
    if (uVar12 < 0x101) {
      if (uVar2 != 0) {
        pcVar5 = &local_1d8;
        uVar7 = uVar8;
        while ((local_1d8 != '\0' && (uVar3 = (uint)uVar7, uVar3 < 0x80000000))) {
          pcVar5 = pcVar5 + 1;
          uVar3 = uVar3 + 1;
          local_1d8 = *pcVar5;
          uVar7 = (ulonglong)uVar3;
        }
        uVar7 = (ulonglong)(uVar3 & 0x7fffffff);
        if (uVar7 < 0x81) {
          uVar11 = CRYPTO_memdup(local_148,uVar12,"ssl\\statem\\statem_clnt.c",0xb67);
          uVar13 = CRYPTO_strdup(&local_1d8,"ssl\\statem\\statem_clnt.c",0xb68);
          if ((uVar11 == 0) || (uVar13 == 0)) {
            local_1e0 = 0xb6b;
            uVar10 = 0x41;
          }
          else {
            CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2c8),
                        "ssl\\statem\\statem_clnt.c",0xb6f);
            *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x2c8) = uVar11;
            uVar11 = 0;
            *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x2d0) = uVar12;
            CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0xe8),
                        "ssl\\statem\\statem_clnt.c",0xb73);
            *(ulonglong *)(*(longlong *)(param_1 + 0x508) + 0xe8) = uVar13;
            uVar13 = 0;
            iVar4 = WPACKET_sub_memcpy__(param_2,&local_1d8,uVar7,2);
            if (iVar4 != 0) {
              uVar9 = 1;
              uVar13 = uVar8;
              goto LAB_143ccfcdb;
            }
            local_1e0 = 0xb79;
            uVar10 = 0x44;
          }
        }
        else {
          local_1e0 = 0xb63;
          uVar10 = 0x44;
          uVar11 = uVar8;
          uVar13 = uVar8;
        }
        goto LAB_143ccfcc6;
      }
      local_1e0 = 0xb5c;
      uVar6 = 0x28;
      uVar10 = 0xdf;
    }
    else {
      uVar6 = 0x28;
      local_1e0 = 0xb57;
      uVar10 = 0x44;
      uVar7 = uVar8;
      uVar11 = uVar8;
      uVar13 = uVar8;
    }
  }
  local_1e8 = "ssl\\statem\\statem_clnt.c";
  ossl_statem_fatal(param_1,uVar6,0x197,uVar10);
  uVar9 = uVar8;
  uVar8 = uVar11;
LAB_143ccfcdb:
  FUN_14004ff40(local_148,uVar12);
  FUN_14004ff40(&local_1d8,0x81);
  CRYPTO_clear_free(uVar8,uVar12,"ssl\\statem\\statem_clnt.c",0xb82);
  CRYPTO_clear_free(uVar13,uVar7,"ssl\\statem\\statem_clnt.c",0xb83);
  return uVar9;
}



// FUNCTION 143ccfd50 tls_construct_cke_rsa body=717 status=ok
// SIG undefined tls_construct_cke_rsa(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_cke_rsa(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined8 local_res8;
  undefined8 local_res18 [2];
  undefined4 uVar7;
  
  local_res18[0] = 0;
  lVar5 = 0;
  if (*(longlong *)(*(longlong *)(param_1 + 0x142) + 0xf8) == 0) {
    ossl_statem_fatal(param_1,0x50,0x199,0x44,"ssl\\statem\\statem_clnt.c",0xb9c,0x143ccfd5f);
    return 0;
  }
  uVar2 = X509_get0_pubkey();
  lVar3 = EVP_PKEY_get0_RSA(uVar2);
  if (lVar3 == 0) {
    ossl_statem_fatal(param_1,0x50,0x199,0x44,"ssl\\statem\\statem_clnt.c",0xba3);
    return 0;
  }
  puVar4 = (undefined1 *)CRYPTO_malloc(0x30,"ssl\\statem\\statem_clnt.c",0xba8);
  if (puVar4 == (undefined1 *)0x0) {
    ossl_statem_fatal(param_1,0x50,0x199,0x41,"ssl\\statem\\statem_clnt.c",0xbab);
    return 0;
  }
  *puVar4 = (char)((uint)param_1[0x179] >> 8);
  puVar4[1] = (char)param_1[0x179];
  iVar1 = RAND_bytes(puVar4 + 2,0x2e);
  if (iVar1 < 1) {
    uVar7 = 0xbb4;
    uVar6 = 0x41;
  }
  else if ((*param_1 < 0x301) || (iVar1 = WPACKET_start_sub_packet_len__(param_2,2), iVar1 != 0)) {
    lVar5 = EVP_PKEY_CTX_new(uVar2,0);
    if (((lVar5 == 0) || (iVar1 = EVP_PKEY_encrypt_init(lVar5), iVar1 < 1)) ||
       (iVar1 = EVP_PKEY_encrypt(lVar5,0,&local_res8,puVar4,0x30), iVar1 < 1)) {
      uVar7 = 0xbc2;
      uVar6 = 6;
    }
    else {
      iVar1 = WPACKET_allocate_bytes(param_2,local_res8,local_res18);
      if ((iVar1 == 0) ||
         (iVar1 = EVP_PKEY_encrypt(lVar5,local_res18[0],&local_res8,puVar4,0x30), iVar1 < 1)) {
        uVar7 = 0xbc8;
        uVar6 = 0x77;
      }
      else {
        EVP_PKEY_CTX_free(lVar5);
        lVar5 = 0;
        if ((*param_1 < 0x301) || (iVar1 = WPACKET_close(param_2), iVar1 != 0)) {
          iVar1 = ssl_log_rsa_client_key_exchange(param_1,local_res18[0],local_res8,puVar4,0x30);
          if (iVar1 != 0) {
            *(undefined1 **)(*(longlong *)(param_1 + 0x2a) + 0x2b8) = puVar4;
            *(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x2c0) = 0x30;
            return 1;
          }
          goto LAB_143ccffea;
        }
        uVar7 = 0xbd1;
        uVar6 = 0x44;
      }
    }
  }
  else {
    uVar7 = 0xbbb;
    uVar6 = 0x44;
  }
  ossl_statem_fatal(param_1,0x50,0x199,uVar6,"ssl\\statem\\statem_clnt.c",uVar7);
LAB_143ccffea:
  CRYPTO_clear_free(puVar4,0x30,"ssl\\statem\\statem_clnt.c",0xbe0);
  EVP_PKEY_CTX_free(lVar5);
  return 0;
}



// FUNCTION 143cd0020 tls_construct_client_certificate body=339 status=ok
// SIG undefined tls_construct_client_certificate(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_client_certificate(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  uVar3 = 1;
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
      (iVar2 = **(int **)(param_1 + 8), 0x303 < iVar2)) && (iVar2 != 0x10000)) {
    uVar3 = 1;
    if (*(longlong *)(param_1 + 0x760) == 0) {
      iVar2 = WPACKET_put_bytes__(param_2,0,1);
      if (iVar2 != 0) goto LAB_143cd00d4;
      uVar4 = CONCAT44(uVar3,0xdcd);
    }
    else {
      iVar2 = WPACKET_sub_memcpy__
                        (param_2,*(longlong *)(param_1 + 0x760),*(undefined8 *)(param_1 + 0x768),1);
      if (iVar2 != 0) goto LAB_143cd00d4;
      uVar4 = CONCAT44(uVar3,0xdd2);
    }
    uVar3 = 0x50;
    uVar5 = 0x44;
  }
  else {
LAB_143cd00d4:
    if (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x248) == 2) {
      uVar4 = 0;
    }
    else {
      uVar4 = **(undefined8 **)(param_1 + 0x488);
    }
    iVar2 = ssl3_output_cert_chain(param_1,param_2,uVar4);
    if (iVar2 == 0) {
      return 0;
    }
    lVar1 = *(longlong *)(*(int **)(param_1 + 8) + 0x30);
    if ((((*(byte *)(lVar1 + 0x60) & 8) != 0) || (iVar2 = **(int **)(param_1 + 8), iVar2 < 0x304))
       || ((iVar2 == 0x10000 ||
           ((*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x198) != 0 &&
            (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x220) != 0)))))) {
      return 1;
    }
    iVar2 = (**(code **)(lVar1 + 0x20))(param_1,0x92);
    if (iVar2 != 0) {
      return 1;
    }
    uVar4 = CONCAT44(uVar3,0xde6);
    uVar3 = 0xffffffff;
    uVar5 = 0x6d;
  }
  ossl_statem_fatal(param_1,uVar3,0x1e4,uVar5,"ssl\\statem\\statem_clnt.c",uVar4);
  return 0;
}



// FUNCTION 143cd0180 tls_construct_client_hello body=1110 status=ok
// SIG undefined tls_construct_client_hello(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_client_hello(int *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  int *_Src;
  int iVar6;
  size_t _Size;
  ulonglong in_stack_ffffffffffffffe8;
  undefined8 uVar7;
  
  uVar7 = 0x143cd0195;
  puVar5 = *(undefined4 **)(param_1 + 0x142);
  iVar2 = WPACKET_set_max_size(param_2,0x4000);
  if (iVar2 == 0) {
    ossl_statem_fatal(param_1,0x50,0x1e7,0x44,"ssl\\statem\\statem_clnt.c",0x45d);
    return 0;
  }
  iVar2 = ssl_set_client_hello_version(param_1);
  if (iVar2 != 0) {
    ossl_statem_fatal(param_1,0x50,0x1e7,iVar2,"ssl\\statem\\statem_clnt.c",0x465);
    return 0;
  }
  if ((((puVar5 == (undefined4 *)0x0) ||
       (iVar2 = ssl_version_supported(param_1,*puVar5,0,0), iVar2 == 0)) ||
      (iVar2 = SSL_SESSION_is_resumable(puVar5), iVar2 == 0)) &&
     ((param_1[0x136] == 0 && (iVar2 = ssl_get_new_session(param_1,0), iVar2 == 0)))) {
    return 0;
  }
  _Size = 0x20;
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0) {
    if (param_1[0x136] == 0) goto LAB_143cd02ba;
  }
  else {
    uVar4 = 0;
    do {
      if (*(char *)(uVar4 + *(longlong *)(param_1 + 0x2a) + 0xb8) != '\0') goto LAB_143cd02e0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x20);
LAB_143cd02ba:
    iVar2 = ssl_fill_hello_random
                      (param_1,0,*(longlong *)(param_1 + 0x2a) + 0xb8,0x20,
                       in_stack_ffffffffffffffe8 & 0xffffffff00000000,uVar7);
    if (iVar2 < 1) {
      uVar7 = 0x48a;
      goto LAB_143cd059e;
    }
  }
LAB_143cd02e0:
  iVar2 = WPACKET_put_bytes__(param_2,param_1[0x179],2);
  if ((iVar2 == 0) ||
     (iVar2 = WPACKET_memcpy(param_2,*(longlong *)(param_1 + 0x2a) + 0xb8,0x20), iVar2 == 0)) {
    uVar7 = 0x4b2;
  }
  else {
    piVar1 = *(int **)(param_1 + 0x142);
    _Src = piVar1 + 0x26;
    if ((param_1[0xf] == 0) && (*piVar1 != 0x304)) {
      _Size = *(size_t *)(piVar1 + 0x24);
      if (*param_1 == 0x304) {
        *(size_t *)(param_1 + 0x154) = _Size;
        _guard_xfg_dispatch_icall_nop(param_1 + 0x14c,_Src,_Size);
      }
    }
    else if ((*param_1 == 0x304) && ((param_1[0x171] & 0x100000U) != 0)) {
      _Src = param_1 + 0x14c;
      param_1[0x154] = 0x20;
      param_1[0x155] = 0;
      if ((param_1[0x136] == 0) && (iVar2 = RAND_bytes(_Src,0x20), iVar2 < 1)) {
        uVar7 = 0x4c2;
        goto LAB_143cd059e;
      }
    }
    else {
      _Size = 0;
    }
    iVar2 = WPACKET_start_sub_packet_len__(param_2,1);
    if ((iVar2 == 0) ||
       (((_Size != 0 && (iVar2 = WPACKET_memcpy(param_2,_Src,_Size), iVar2 == 0)) ||
        (iVar2 = WPACKET_close(param_2), iVar2 == 0)))) {
      uVar7 = 0x4d5;
    }
    else {
      if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) != 0) {
        uVar4 = *(ulonglong *)(*(longlong *)(param_1 + 0x2c) + 0x100);
        if ((0x100 < uVar4) ||
           (iVar2 = WPACKET_sub_memcpy__(param_2,*(longlong *)(param_1 + 0x2c),uVar4,1), iVar2 == 0)
           ) {
          uVar7 = 0x4df;
          goto LAB_143cd059e;
        }
      }
      iVar2 = WPACKET_start_sub_packet_len__(param_2,2);
      if (iVar2 == 0) {
        uVar7 = 0x4e7;
      }
      else {
        uVar7 = SSL_get_ciphers(param_1);
        iVar2 = ssl_cipher_list_to_bytes(param_1,uVar7,param_2);
        if (iVar2 == 0) {
          return 0;
        }
        iVar2 = WPACKET_close(param_2);
        if (iVar2 == 0) {
          uVar7 = 0x4f1;
        }
        else {
          iVar2 = WPACKET_start_sub_packet_len__(param_2,1);
          if (iVar2 == 0) {
            uVar7 = 0x4f8;
          }
          else {
            iVar2 = ssl_allow_compression(param_1);
            if (((iVar2 != 0) && (*(longlong *)(*(longlong *)(param_1 + 0x166) + 0x100) != 0)) &&
               (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) != 0 ||
                (*(int *)(*(longlong *)(param_1 + 0x2a) + 0x340) < 0x304)))) {
              iVar2 = OPENSSL_sk_num();
              iVar6 = 0;
              if (0 < iVar2) {
                do {
                  puVar5 = (undefined4 *)
                           OPENSSL_sk_value(*(undefined8 *)(*(longlong *)(param_1 + 0x166) + 0x100),
                                            iVar6);
                  iVar3 = WPACKET_put_bytes__(param_2,*puVar5,1);
                  if (iVar3 == 0) {
                    uVar7 = 0x505;
                    goto LAB_143cd059e;
                  }
                  iVar6 = iVar6 + 1;
                } while (iVar6 < iVar2);
              }
            }
            iVar2 = WPACKET_put_bytes__(param_2,0,1);
            if ((iVar2 != 0) && (iVar2 = WPACKET_close(param_2), iVar2 != 0)) {
              iVar2 = tls_construct_extensions(param_1,param_2,0x80,0,0);
              if (iVar2 == 0) {
                return 0;
              }
              return 1;
            }
            uVar7 = 0x50e;
          }
        }
      }
    }
  }
LAB_143cd059e:
  ossl_statem_fatal(param_1,0x50,0x1e7,0x44,"ssl\\statem\\statem_clnt.c",uVar7);
  return 0;
}



// FUNCTION 143cd05e0 tls_construct_client_key_exchange body=1089 status=ok
// SIG undefined tls_construct_client_key_exchange(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_client_key_exchange(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 local_res8;
  undefined8 local_res18;
  undefined4 uVar10;
  undefined8 uVar9;
  
  uVar10 = 1;
  lVar4 = 0;
  uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x1c);
  if (((uVar1 & 0x1c8) == 0) || (uVar10 = 1, iVar2 = tls_construct_cke_psk_preamble(), iVar2 != 0))
  {
    if ((uVar1 & 0x41) == 0) {
      if ((uVar1 & 0x102) != 0) {
        local_res8 = 0;
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x408);
        if (lVar6 == 0) {
          uVar3 = CONCAT44(uVar10,0xbf6);
LAB_143cd069d:
          ossl_statem_fatal(param_1,0x50,0x194,0x44,"ssl\\statem\\statem_clnt.c",uVar3);
        }
        else {
          lVar4 = ssl_generate_pkey(lVar6);
          if (lVar4 == 0) {
            uVar3 = CONCAT44(uVar10,0xbfd);
            goto LAB_143cd069d;
          }
          lVar5 = EVP_PKEY_get0_DH(lVar4);
          if (lVar5 == 0) {
            uVar3 = CONCAT44(uVar10,0xc05);
            goto LAB_143cd069d;
          }
          iVar2 = ssl_derive(param_1,lVar4,lVar6,0);
          if (iVar2 != 0) {
            DH_get0_key(lVar5,&local_res18,0);
            iVar2 = BN_num_bits(local_res18);
            iVar2 = WPACKET_sub_allocate_bytes__
                              (param_2,(longlong)((int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3),
                               &local_res8,2);
            if (iVar2 != 0) {
              BN_bn2bin(local_res18,local_res8);
              EVP_PKEY_free(lVar4);
              bVar8 = false;
              goto LAB_143cd0649;
            }
            uVar3 = CONCAT44(uVar10,0xc13);
            goto LAB_143cd069d;
          }
        }
        EVP_PKEY_free(lVar4);
        bVar8 = true;
        goto LAB_143cd0649;
      }
      if ((uVar1 & 0x84) != 0) {
        bVar8 = false;
        local_res8 = 0;
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x408);
        if (lVar4 != 0) {
          lVar6 = ssl_generate_pkey(lVar4);
          if (lVar6 == 0) {
            ossl_statem_fatal(param_1,0x50,0x195,0x41,"ssl\\statem\\statem_clnt.c",
                              CONCAT44(uVar10,0xc37));
            bVar8 = false;
          }
          else {
            iVar2 = ssl_derive(param_1,lVar6,lVar4,0);
            if (iVar2 != 0) {
              lVar4 = EVP_PKEY_get1_tls_encodedpoint(lVar6,&local_res8);
              if (lVar4 == 0) {
                ossl_statem_fatal(param_1,0x50,0x195,0x10,"ssl\\statem\\statem_clnt.c",
                                  CONCAT44(uVar10,0xc45));
              }
              else {
                iVar2 = WPACKET_sub_memcpy__(param_2,local_res8,lVar4,1);
                if (iVar2 == 0) {
                  ossl_statem_fatal(param_1,0x50,0x195,0x44,"ssl\\statem\\statem_clnt.c",
                                    CONCAT44(uVar10,0xc4b));
                }
                else {
                  bVar8 = true;
                }
              }
            }
          }
          CRYPTO_free(local_res8,"ssl\\statem\\statem_clnt.c",0xc51);
          EVP_PKEY_free(lVar6);
          bVar8 = !bVar8;
          goto LAB_143cd0649;
        }
        uVar9 = CONCAT44(uVar10,0xc30);
        uVar3 = 0x195;
LAB_143cd09a0:
        uVar7 = 0x44;
LAB_143cd09a6:
        ossl_statem_fatal(param_1,0x50,uVar3,uVar7,"ssl\\statem\\statem_clnt.c",uVar9);
        goto LAB_143cd09b8;
      }
      if ((uVar1 & 0x10) != 0) {
        iVar2 = tls_construct_cke_gost(param_1,param_2);
        goto LAB_143cd0647;
      }
      if ((uVar1 & 0x20) != 0) {
        local_res8 = 0;
        if (*(longlong *)(param_1 + 0x7c8) == 0) {
LAB_143cd0978:
          uVar9 = CONCAT44(uVar10,0xcd9);
          uVar3 = 0x19a;
          goto LAB_143cd09a0;
        }
        iVar2 = BN_num_bits();
        iVar2 = WPACKET_sub_allocate_bytes__
                          (param_2,(longlong)((int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3),
                           &local_res8,2);
        if (iVar2 == 0) goto LAB_143cd0978;
        BN_bn2bin(*(undefined8 *)(param_1 + 0x7c8),local_res8);
        CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x1b8),
                    "ssl\\statem\\statem_clnt.c",0xcde);
        uVar3 = CRYPTO_strdup(*(undefined8 *)(param_1 + 0x7a0),"ssl\\statem\\statem_clnt.c",0xcdf);
        *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x1b8) = uVar3;
        if (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x1b8) != 0) goto LAB_143cd064f;
        uVar9 = CONCAT44(uVar10,0xce2);
        uVar7 = 0x41;
        uVar3 = 0x19a;
        goto LAB_143cd09a6;
      }
      if ((uVar1 & 8) == 0) {
        uVar9 = CONCAT44(uVar10,0xd0d);
        uVar3 = 0x1e8;
        goto LAB_143cd09a0;
      }
    }
    else {
      iVar2 = tls_construct_cke_rsa(param_1,param_2);
LAB_143cd0647:
      bVar8 = iVar2 == 0;
LAB_143cd0649:
      if (bVar8) goto LAB_143cd09b8;
    }
LAB_143cd064f:
    uVar3 = 1;
  }
  else {
LAB_143cd09b8:
    CRYPTO_clear_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2b8),
                      *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2c0),
                      "ssl\\statem\\statem_clnt.c",0xd13);
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2b8) = 0;
    CRYPTO_clear_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2c8),
                      *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2d0),
                      "ssl\\statem\\statem_clnt.c",0xd16);
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2c8) = 0;
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 143cd0a30 tls_construct_end_of_early_data body=96 status=ok
// SIG undefined tls_construct_end_of_early_data(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_end_of_early_data(longlong param_1)

{
  if ((*(int *)(param_1 + 0x84) - 3U & 0xfffffffb) != 0) {
    ossl_statem_fatal(param_1,0x50,0x218,0x42,"ssl\\statem\\statem_clnt.c",0xef3,0x143cd0a3a);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x84) = 7;
  return 1;
}



// FUNCTION 143cd0a90 tls_construct_next_proto body=209 status=ok
// SIG undefined tls_construct_next_proto(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_next_proto(longlong param_1,undefined8 param_2)

{
  int iVar1;
  size_t _Size;
  void *local_res8;
  undefined4 uVar2;
  
  uVar2 = 1;
  local_res8 = (void *)0x0;
  _Size = 0x20 - (ulonglong)((int)*(undefined8 *)(param_1 + 0x6d8) + 2U & 0x1f);
  iVar1 = WPACKET_sub_memcpy__
                    (param_2,*(undefined8 *)(param_1 + 0x6d0),*(undefined8 *)(param_1 + 0x6d8),1);
  if (iVar1 != 0) {
    iVar1 = WPACKET_sub_allocate_bytes__(param_2,_Size,&local_res8,1);
    if (iVar1 != 0) {
      _guard_xfg_dispatch_icall_nop(local_res8,0,_Size);
      return 1;
    }
  }
  ossl_statem_fatal(param_1,0x50,0x1aa,0x44,"ssl\\statem\\statem_clnt.c",CONCAT44(uVar2,0xe2d));
  return 0;
}



// FUNCTION 143cd0b70 tls_prepare_client_certificate body=621 status=ok
// SIG undefined tls_prepare_client_certificate(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_prepare_client_certificate(int *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong local_res18;
  longlong local_res20;
  undefined8 uVar5;
  
  local_res20 = 0;
  local_res18 = 0;
  if (param_2 == 3) {
    pcVar1 = *(code **)(*(longlong *)(param_1 + 0x122) + 0x1c8);
    if (pcVar1 != (code *)0x0) {
      iVar2 = (*pcVar1)(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x122) + 0x1d0));
      if (iVar2 < 0) {
        param_1[10] = 4;
        return 3;
      }
      if (iVar2 == 0) {
        uVar5 = 0xd84;
        uVar4 = 0xea;
        goto LAB_143cd0daf;
      }
      param_1[10] = 1;
    }
    iVar2 = ssl3_check_client_certificate(param_1);
    if (iVar2 != 0) goto LAB_143cd0d83;
  }
  else if (param_2 != 4) {
    uVar5 = 0xdc2;
    uVar4 = 0x44;
LAB_143cd0daf:
    ossl_statem_fatal(param_1,0x50,0x168,uVar4,"ssl\\statem\\statem_clnt.c",uVar5);
    return 0;
  }
  iVar2 = 0;
  if (*(longlong *)(*(longlong *)(param_1 + 0x166) + 0x1d8) == 0) {
LAB_143cd0c66:
    if (*(code **)(*(longlong *)(param_1 + 0x166) + 0xb8) != (code *)0x0) {
      iVar2 = (**(code **)(*(longlong *)(param_1 + 0x166) + 0xb8))
                        (param_1,&local_res20,&local_res18);
    }
  }
  else {
    uVar4 = SSL_get_client_CA_list(param_1);
    iVar2 = ENGINE_load_ssl_client_cert
                      (*(undefined8 *)(*(longlong *)(param_1 + 0x166) + 0x1d8),param_1,uVar4,
                       &local_res20,&local_res18,0,0,0);
    if (iVar2 == 0) goto LAB_143cd0c66;
  }
  if (iVar2 < 0) {
    param_1[10] = 4;
    return 4;
  }
  param_1[10] = 1;
  if (iVar2 == 1) {
    if ((local_res18 == 0) || (local_res20 == 0)) {
      iVar2 = 0;
      ERR_put_error(0x14,0x168,0x6a,"ssl\\statem\\statem_clnt.c",0xda6);
    }
    else {
      iVar3 = SSL_use_certificate(param_1);
      if ((iVar3 == 0) || (iVar3 = SSL_use_PrivateKey(param_1,local_res18), iVar3 == 0)) {
        iVar2 = 0;
      }
    }
  }
  X509_free(local_res20);
  EVP_PKEY_free(local_res18);
  if ((iVar2 == 0) || (iVar2 = ssl3_check_client_certificate(param_1), iVar2 == 0)) {
    if (*param_1 == 0x300) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0x248) = 0;
      ssl3_send_alert(param_1,1,0x29);
      return 2;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0x248) = 2;
    iVar2 = ssl3_digest_cached_records(param_1,0);
    if (iVar2 == 0) {
      return 0;
    }
  }
LAB_143cd0d83:
  if (param_1[0x1d6] != 4) {
    return 2;
  }
  return 1;
}



// FUNCTION 143cd0de0 tls_process_cert_status_body body=359 status=ok
// SIG undefined tls_process_cert_status_body(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_process_cert_status_body(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  uVar7 = 1;
  lVar6 = param_2[1];
  if (lVar6 == 0) {
LAB_143cd0f08:
    ossl_statem_fatal(param_1,0x32,0x1ef,0x149,"ssl\\statem\\statem_clnt.c",0x100000ac7);
    return 0;
  }
  pcVar4 = (char *)*param_2;
  cVar1 = *pcVar4;
  *param_2 = pcVar4 + 1;
  param_2[1] = lVar6 - 1U;
  if (cVar1 != '\x01') goto LAB_143cd0f08;
  if (lVar6 - 1U < 3) {
LAB_143cd0ed9:
    uVar10 = 0x100000acd;
  }
  else {
    cVar1 = pcVar4[1];
    cVar2 = pcVar4[2];
    cVar3 = pcVar4[3];
    *param_2 = pcVar4 + 4;
    uVar8 = (ulonglong)CONCAT21(CONCAT11(cVar1,cVar2),cVar3);
    param_2[1] = lVar6 - 4U;
    if (lVar6 - 4U != uVar8) goto LAB_143cd0ed9;
    lVar6 = CRYPTO_malloc(uVar8,"ssl\\statem\\statem_clnt.c",0xad0);
    *(longlong *)(param_1 + 0x660) = lVar6;
    if (lVar6 == 0) {
      uVar10 = CONCAT44(uVar7,0xad3);
      uVar7 = 0x50;
      uVar9 = 0x41;
      goto LAB_143cd0ef1;
    }
    iVar5 = PACKET_copy_bytes(param_2,lVar6,uVar8);
    if (iVar5 != 0) {
      *(ulonglong *)(param_1 + 0x668) = uVar8;
      return 1;
    }
    uVar10 = CONCAT44(uVar7,0xad8);
  }
  uVar7 = 0x32;
  uVar9 = 0x9f;
LAB_143cd0ef1:
  ossl_statem_fatal(param_1,uVar7,0x1ef,uVar9,"ssl\\statem\\statem_clnt.c",uVar10);
  return 0;
}



// FUNCTION 143cd0f50 tls_process_certificate_request body=1215 status=ok
// SIG undefined tls_process_certificate_request(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_process_certificate_request(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 local_res8;
  undefined4 uVar8;
  byte *local_48;
  ulonglong uStack_40;
  undefined1 local_38 [8];
  undefined8 uStack_30;
  
  uStack_30 = 0x143cd0f75;
  *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x310) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x314) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x318) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x31c) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 800) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x324) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x328) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x32c) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x330) = 0;
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
      (iVar3 = **(int **)(param_1 + 8), 0x303 < iVar3)) && (iVar3 != 0x10000)) {
    local_res8 = 0;
    if ((*(byte *)(param_1 + 0x44) & 1) != 0) {
      return 1;
    }
    CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x250),"ssl\\statem\\statem_clnt.c",
                0x9a3);
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x250) = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 600) = 0;
    CRYPTO_free(*(undefined8 *)(param_1 + 0x760),"ssl\\statem\\statem_clnt.c",0x9a6);
    *(undefined8 *)(param_1 + 0x760) = 0;
    local_48 = (byte *)*param_2;
    uVar5 = param_2[1];
    if (uVar5 == 0) {
LAB_143cd11d2:
      uStack_40 = uVar5;
      uVar8 = 0x9ad;
      goto LAB_143cd13d1;
    }
    uVar5 = uVar5 - 1;
    uStack_40 = (ulonglong)*local_48;
    local_48 = local_48 + 1;
    if (uVar5 < uStack_40) goto LAB_143cd11d2;
    *param_2 = (longlong)(local_48 + uStack_40);
    param_2[1] = uVar5 - uStack_40;
    iVar3 = PACKET_memdup(&local_48,param_1 + 0x760,param_1 + 0x768);
    uVar5 = uStack_40;
    if (iVar3 == 0) goto LAB_143cd11d2;
    iVar3 = PACKET_get_length_prefixed_2(param_2,local_38);
    if (iVar3 != 0) {
      iVar3 = tls_collect_extensions(param_1,local_38,0x4000,&local_res8,0,1);
      if ((iVar3 == 0) ||
         (iVar3 = tls_parse_all_extensions(param_1,0x4000,local_res8,0,0,1), iVar3 == 0)) {
        CRYPTO_free(local_res8,"ssl\\statem\\statem_clnt.c",0x9bd);
        return 0;
      }
      CRYPTO_free(local_res8,"ssl\\statem\\statem_clnt.c",0x9c0);
      iVar3 = tls1_process_sigalgs(param_1);
      if (iVar3 == 0) {
        uVar8 = 0x9c4;
        uVar6 = 0x50;
        uVar7 = 0x10f;
        goto LAB_143cd13df;
      }
      goto LAB_143cd139a;
    }
    uVar8 = 0x9b4;
    uVar7 = 0x10f;
  }
  else {
    local_48 = (byte *)*param_2;
    uStack_40 = param_2[1];
    if (uStack_40 == 0) {
LAB_143cd13c2:
      uVar8 = 0x9ce;
    }
    else {
      uStack_40 = uStack_40 - 1;
      uVar5 = (ulonglong)*local_48;
      pbVar1 = local_48 + 1;
      local_48 = pbVar1;
      if (uStack_40 < uVar5) goto LAB_143cd13c2;
      uStack_40 = uStack_40 - uVar5;
      local_48 = pbVar1 + uVar5;
      *param_2 = (longlong)local_48;
      param_2[1] = uStack_40;
      lVar2 = *(longlong *)(param_1 + 0xa8);
      CRYPTO_free(*(undefined8 *)(lVar2 + 0x250),
                  "d:\\dev\\openssl\\source\\win64-release\\ssl\\packet_locl.h",0x1a4);
      *(undefined8 *)(lVar2 + 0x250) = 0;
      *(undefined8 *)(lVar2 + 600) = 0;
      if (uVar5 != 0) {
        lVar4 = CRYPTO_memdup(pbVar1,uVar5,
                              "d:\\dev\\openssl\\source\\win64-release\\ssl\\packet_locl.h",0x1ad);
        *(longlong *)(lVar2 + 0x250) = lVar4;
        if (lVar4 == 0) {
          uVar6 = 0x50;
          uVar8 = 0x9d5;
          uVar7 = 0x44;
          goto LAB_143cd13df;
        }
        *(ulonglong *)(lVar2 + 600) = uVar5;
      }
      if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 2) == 0) {
LAB_143cd138b:
        iVar3 = parse_ca_names(param_1,param_2);
        if (iVar3 == 0) {
          return 0;
        }
LAB_143cd139a:
        if (param_2[1] == 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x248) = 1;
          return 2;
        }
        uVar8 = 0x9ff;
      }
      else {
        pbVar1 = (byte *)*param_2;
        uVar5 = param_2[1];
        local_48 = pbVar1;
        if (1 < uVar5) {
          uVar5 = uVar5 - 2;
          local_48 = pbVar1 + 2;
          uStack_40 = (ulonglong)CONCAT11(*pbVar1,pbVar1[1]);
          if (uStack_40 <= uVar5) {
            *param_2 = (longlong)(local_48 + uStack_40);
            param_2[1] = uVar5 - uStack_40;
            iVar3 = tls1_save_sigalgs(param_1,&local_48,0);
            if (iVar3 == 0) {
              uVar8 = 0x9ea;
              uVar6 = 0x50;
              uVar7 = 0x168;
              goto LAB_143cd13df;
            }
            iVar3 = tls1_process_sigalgs(param_1);
            if (iVar3 == 0) {
              uVar8 = 0x9f0;
              uVar6 = 0x50;
              uVar7 = 0x41;
              goto LAB_143cd13df;
            }
            goto LAB_143cd138b;
          }
        }
        uStack_40 = uVar5;
        uVar8 = 0x9df;
      }
    }
LAB_143cd13d1:
    uVar7 = 0x9f;
  }
  uVar6 = 0x32;
LAB_143cd13df:
  ossl_statem_fatal(param_1,uVar6,0x169,uVar7,"ssl\\statem\\statem_clnt.c",uVar8);
  return 0;
}



// FUNCTION 143cd1410 tls_process_initial_server_flight body=199 status=ok
// SIG undefined tls_process_initial_server_flight(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_process_initial_server_flight(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar6;
  undefined8 uVar5;
  
  uVar6 = 1;
  iVar2 = ssl3_check_cert_and_algorithm();
  if (iVar2 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x638) != -1) {
    pcVar1 = *(code **)(*(longlong *)(param_1 + 0x598) + 0x220);
    if (pcVar1 != (code *)0x0) {
      iVar2 = (*pcVar1)(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x598) + 0x228));
      if (iVar2 == 0) {
        uVar5 = CONCAT44(uVar6,0xb08);
        uVar3 = 0x71;
        uVar4 = 0x148;
      }
      else {
        if (-1 < iVar2) goto LAB_143cd14ad;
        uVar3 = 0x50;
        uVar5 = CONCAT44(uVar6,0xb0e);
        uVar4 = 0x41;
      }
      ossl_statem_fatal(param_1,uVar3,0x1ba,uVar4,"ssl\\statem\\statem_clnt.c",uVar5);
      return 0;
    }
  }
LAB_143cd14ad:
  if (((*(longlong *)(param_1 + 0x718) != 0) && (iVar2 = ssl_validate_ct(param_1), iVar2 == 0)) &&
     ((*(byte *)(param_1 + 0x558) & 1) != 0)) {
    return 0;
  }
  return 1;
}



// FUNCTION 143cd14e0 tls_process_key_exchange body=1409 status=ok
// SIG undefined tls_process_key_exchange(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_process_key_exchange(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 local_res8;
  longlong local_res10;
  undefined8 local_res18;
  undefined1 *local_res20;
  undefined4 uVar16;
  longlong local_58;
  ulonglong uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0x143cd14fa;
  local_58 = *param_2;
  uStack_50 = param_2[1];
  local_res18 = 0;
  lVar13 = 0;
  local_res10 = 0;
  uVar3 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x1c);
  EVP_PKEY_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x408));
  local_res8 = CONCAT44(local_res8._4_4_,uVar3) & 0xffffffff000001c8;
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x408) = 0;
  iVar6 = 0;
  if ((uVar3 & 0x1c8) == 0) {
LAB_143cd16a1:
    if ((uVar3 & 0x48) == 0) {
      if ((uVar3 & 0x20) == 0) {
        if ((uVar3 & 0x102) == 0) {
          if ((uVar3 & 0x84) == 0) {
            if (uVar3 != 0) {
              uVar12 = 0xf4;
              uVar16 = 0x901;
              uVar10 = 10;
              uVar11 = 0x16d;
              goto LAB_143cd1a45;
            }
            goto LAB_143cd19ed;
          }
          iVar5 = tls_process_ske_ecdhe(param_1,param_2,&local_res10);
        }
        else {
          iVar5 = tls_process_ske_dhe(param_1,param_2,&local_res10);
        }
      }
      else {
        iVar5 = tls_process_ske_srp(param_1,param_2,&local_res10);
      }
      lVar7 = local_58;
      lVar8 = local_res10;
      lVar14 = 0;
      if (iVar5 == 0) goto LAB_143cd1a52;
      if (local_res10 == 0) goto LAB_143cd19ed;
      uVar9 = param_2[1];
      uVar15 = uStack_50 - uVar9;
      local_res8 = 0;
      if ((uStack_50 < uVar15) || (0x7fffffffffffffff < uVar15)) {
        uVar16 = 0x916;
        uVar12 = 0x44;
      }
      else {
        if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 2) == 0) {
          iVar6 = tls1_set_peer_legacy_sigalg(param_1,local_res10);
          if (iVar6 != 0) goto LAB_143cd1798;
          uVar16 = 0x928;
LAB_143cd17e7:
          uVar12 = 0x44;
          uVar11 = 0x16d;
          uVar10 = 0x50;
          goto LAB_143cd1a45;
        }
        if (uVar9 < 2) {
          uVar16 = 0x91f;
          uVar12 = 0xa0;
        }
        else {
          puVar4 = (undefined1 *)*param_2;
          uVar1 = *puVar4;
          uVar2 = puVar4[1];
          *param_2 = (longlong)(puVar4 + 2);
          param_2[1] = uVar9 - 2;
          iVar6 = tls12_check_peer_sigalg(param_1,CONCAT11(uVar1,uVar2),local_res10);
          lVar14 = lVar13;
          if (iVar6 < 1) goto LAB_143cd1a52;
LAB_143cd1798:
          iVar6 = tls1_lookup_md(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x308),&local_res8)
          ;
          if (iVar6 == 0) {
            uVar16 = 0x92e;
            goto LAB_143cd17e7;
          }
          iVar6 = PACKET_get_length_prefixed_2(param_2,&local_58);
          if ((iVar6 == 0) || (param_2[1] != 0)) {
            uVar16 = 0x939;
            uVar12 = 0x9f;
          }
          else {
            iVar6 = EVP_PKEY_size(lVar8);
            uVar9 = uStack_50;
            if (iVar6 < 0) {
              uVar16 = 0x93f;
              goto LAB_143cd17e7;
            }
            if (uStack_50 <= (ulonglong)(longlong)iVar6) {
              lVar13 = EVP_MD_CTX_new();
              if (lVar13 == 0) {
                uVar16 = 0x950;
                uVar12 = 0x41;
                uVar10 = 0x50;
                uVar11 = 0x16d;
              }
              else {
                iVar6 = EVP_DigestVerifyInit(lVar13,&local_res18,local_res8,0,lVar8);
                if (iVar6 < 1) {
                  uVar12 = 6;
                  uVar16 = 0x956;
                  uVar11 = 0x16d;
                  uVar10 = 0x50;
                }
                else {
                  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x308);
                  if (((lVar8 == 0) || (*(int *)(lVar8 + 0x14) != 0x390)) ||
                     ((iVar6 = RSA_pkey_ctx_ctrl(local_res18,0xffffffff,0x1001,6,0), 0 < iVar6 &&
                      (iVar6 = RSA_pkey_ctx_ctrl(local_res18,0x18,0x1002,0xffffffff,0), 0 < iVar6)))
                     ) {
                    lVar8 = construct_key_exchange_tbs(param_1,&local_res10,lVar7,uVar15);
                    lVar14 = lVar13;
                    if (lVar8 == 0) goto LAB_143cd1a52;
                    iVar6 = EVP_DigestVerify(lVar13,local_58,uVar9,local_res10,lVar8);
                    CRYPTO_free(local_res10,"ssl\\statem\\statem_clnt.c",0x96b);
                    if (0 < iVar6) {
                      EVP_MD_CTX_free(lVar13);
                      return 3;
                    }
                    uVar10 = 0x33;
                    uVar16 = 0x96e;
                    uVar11 = 0x16d;
                    uVar12 = 0x7b;
                  }
                  else {
                    uVar12 = 6;
                    uVar16 = 0x95e;
                    uVar11 = 0x16d;
                    uVar10 = 0x50;
                  }
                }
              }
              goto LAB_143cd1a45;
            }
            uVar16 = 0x949;
            uVar12 = 0x108;
          }
        }
      }
    }
    else {
LAB_143cd19ed:
      if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x20) & 0x44) == 0) &&
         (iVar6 == 0)) {
        iVar6 = ssl3_check_cert_and_algorithm(param_1);
        lVar14 = lVar13;
        if (iVar6 == 0) goto LAB_143cd1a52;
        uVar16 = 0x97a;
        uVar12 = 0x186;
      }
      else {
        if (param_2[1] == 0) {
          return 3;
        }
        uVar16 = 0x982;
        uVar12 = 0x99;
      }
    }
    uVar11 = 0x16d;
LAB_143cd1a40:
    uVar10 = 0x32;
  }
  else {
    puVar4 = (undefined1 *)*param_2;
    if ((ulonglong)param_2[1] < 2) {
LAB_143cd167a:
      uVar16 = 0x7d6;
      uVar12 = 0x9f;
      uVar11 = 0x1a5;
      goto LAB_143cd1a40;
    }
    uVar9 = param_2[1] - 2;
    local_res20 = puVar4 + 2;
    uVar15 = (ulonglong)CONCAT11(*puVar4,puVar4[1]);
    if (uVar9 < uVar15) goto LAB_143cd167a;
    *param_2 = (longlong)(local_res20 + uVar15);
    param_2[1] = uVar9 - uVar15;
    if (uVar15 < 0x81) {
      lVar8 = *(longlong *)(param_1 + 0x508);
      uVar11 = *(undefined8 *)(lVar8 + 0xe0);
      if (uVar15 == 0) {
        CRYPTO_free(uVar11,"ssl\\statem\\statem_clnt.c",0x7e8);
        *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0xe0) = 0;
      }
      else {
        CRYPTO_free(uVar11,"d:\\dev\\openssl\\source\\win64-release\\ssl\\packet_locl.h",0x1c1);
        lVar7 = CRYPTO_strndup(local_res20,uVar15,
                               "d:\\dev\\openssl\\source\\win64-release\\ssl\\packet_locl.h",0x1c4);
        *(longlong *)(lVar8 + 0xe0) = lVar7;
        if (lVar7 == 0) {
          uVar16 = 0x7ed;
          uVar10 = 0x50;
          uVar11 = 0x1a5;
          uVar12 = 0x44;
          goto LAB_143cd1a45;
        }
      }
      iVar6 = (int)local_res8;
      goto LAB_143cd16a1;
    }
    uVar10 = 0x28;
    uVar16 = 0x7e3;
    uVar12 = 0x92;
    uVar11 = 0x1a5;
    lVar13 = 0;
  }
LAB_143cd1a45:
  ossl_statem_fatal(param_1,uVar10,uVar11,uVar12,"ssl\\statem\\statem_clnt.c",uVar16);
  lVar14 = lVar13;
LAB_143cd1a52:
  EVP_MD_CTX_free(lVar14);
  return 0;
}



// FUNCTION 143cd1a70 tls_process_new_session_ticket body=1329 status=ok
// SIG undefined tls_process_new_session_ticket(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_process_new_session_ticket(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  int *piVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  __time64_t _Var11;
  undefined8 uVar12;
  uint uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint local_res10 [2];
  undefined8 local_res18 [2];
  undefined8 in_stack_ffffffffffffff80;
  undefined8 uVar19;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  undefined8 uStack_40;
  
  uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff80 >> 0x20);
  uStack_40 = 0x143cd1a8a;
  uVar15 = param_2[1];
  local_res18[0] = 0;
  uVar18 = 0;
  local_58 = 0;
  local_50 = 0;
  if (uVar15 < 4) {
LAB_143cd1bbf:
    uVar18 = 0x32;
    uVar19 = 0xa1b;
    uVar17 = 0x9f;
  }
  else {
    puVar5 = (undefined1 *)*param_2;
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    uVar3 = puVar5[2];
    uVar4 = puVar5[3];
    param_2[1] = uVar15 - 4;
    *param_2 = (longlong)(puVar5 + 4);
    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
        (iVar8 = **(int **)(param_1 + 8), 0x303 < iVar8)) && (iVar8 != 0x10000)) {
      if (3 < uVar15 - 4) {
        uVar18 = CONCAT31(CONCAT21(CONCAT11(puVar5[4],puVar5[5]),puVar5[6]),puVar5[7]);
        *param_2 = (longlong)(puVar5 + 8);
        param_2[1] = uVar15 - 8;
        iVar8 = PACKET_get_length_prefixed_1(param_2,&local_58);
        if (iVar8 != 0) goto LAB_143cd1b66;
      }
      goto LAB_143cd1bbf;
    }
LAB_143cd1b66:
    uVar19 = local_58;
    if ((ulonglong)param_2[1] < 2) goto LAB_143cd1bbf;
    puVar5 = (undefined1 *)*param_2;
    uVar15 = param_2[1] - 2;
    uVar7 = CONCAT11(*puVar5,puVar5[1]);
    uVar13 = (uint)uVar7;
    param_2[1] = uVar15;
    *param_2 = (longlong)(puVar5 + 2);
    piVar6 = *(int **)(param_1 + 8);
    uVar16 = *(uint *)(*(longlong *)(piVar6 + 0x30) + 0x60) & 8;
    if (((uVar16 == 0) && (0x303 < *piVar6)) && (*piVar6 != 0x10000)) {
      if ((uVar7 == 0) || (uVar15 < uVar13)) goto LAB_143cd1bbf;
    }
    else if (uVar15 != uVar13) goto LAB_143cd1bbf;
    uVar15 = (ulonglong)uVar13;
    if (uVar7 == 0) {
      return 3;
    }
    if ((((uVar16 == 0) && (0x303 < *piVar6)) && (*piVar6 != 0x10000)) ||
       (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x90) != 0)) {
      plVar14 = (longlong *)(param_1 + 0x508);
      lVar10 = ssl_session_dup(*plVar14,0);
      if (lVar10 != 0) {
        if (((*(byte *)(*(longlong *)(param_1 + 0x738) + 0x48) & 1) != 0) &&
           ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0 ||
             (iVar8 = **(int **)(param_1 + 8), iVar8 < 0x304)) || (iVar8 == 0x10000)))) {
          SSL_CTX_remove_session(*(longlong *)(param_1 + 0x738),*plVar14);
        }
        SSL_SESSION_free(*plVar14);
        *plVar14 = lVar10;
        goto LAB_143cd1cc3;
      }
      uVar19 = 0xa39;
      uVar18 = 0x50;
      uVar17 = 0x41;
    }
    else {
LAB_143cd1cc3:
      plVar14 = (longlong *)(param_1 + 0x508);
      _Var11 = _time64((__time64_t *)0x0);
      *(int *)(*plVar14 + 0x11c) = (int)_Var11;
      CRYPTO_free(*(undefined8 *)(*plVar14 + 0x180),"ssl\\statem\\statem_clnt.c",0xa51);
      *(undefined8 *)(*plVar14 + 0x180) = 0;
      *(undefined8 *)(*plVar14 + 0x188) = 0;
      uVar12 = CRYPTO_malloc(uVar15,"ssl\\statem\\statem_clnt.c",0xa55);
      *(undefined8 *)(*plVar14 + 0x180) = uVar12;
      if (*(longlong *)(*plVar14 + 0x180) == 0) {
        uVar18 = 0x50;
        uVar19 = 0xa58;
        uVar17 = 0x41;
      }
      else {
        iVar8 = PACKET_copy_bytes(param_2,*(longlong *)(*plVar14 + 0x180),uVar15);
        if (iVar8 == 0) {
          uVar18 = 0x32;
          uVar19 = 0xa5d;
          uVar17 = 0x9f;
        }
        else {
          *(uint *)(*plVar14 + 400) = CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4);
          *(undefined4 *)(*plVar14 + 0x194) = uVar18;
          *(ulonglong *)(*plVar14 + 0x188) = uVar15;
          if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
              (iVar8 = **(int **)(param_1 + 8), 0x303 < iVar8)) && (iVar8 != 0x10000)) {
            iVar8 = PACKET_as_length_prefixed_2(param_2,local_48);
            if ((iVar8 == 0) || (param_2[1] != 0)) {
              uVar18 = 0x32;
              uVar19 = CONCAT44(uVar17,0xa6c);
              uVar17 = 0x9f;
              goto LAB_143cd1bda;
            }
            iVar8 = tls_collect_extensions(param_1,local_48,0x2000,local_res18,0,CONCAT44(uVar17,1))
            ;
            if ((iVar8 == 0) ||
               (iVar8 = tls_parse_all_extensions(param_1,0x2000,local_res18[0],0,0,1), iVar8 == 0))
            goto LAB_143cd1bea;
          }
          lVar10 = *plVar14;
          uVar12 = EVP_sha256();
          iVar8 = EVP_Digest(*(undefined8 *)(lVar10 + 0x180),uVar15,lVar10 + 0x98,local_res10,uVar12
                             ,0);
          if (iVar8 == 0) {
            uVar19 = 0xa8e;
            uVar18 = 0x50;
            uVar17 = 6;
          }
          else {
            *(ulonglong *)(*plVar14 + 0x90) = (ulonglong)local_res10[0];
            *(undefined4 *)(*plVar14 + 0xf0) = 0;
            if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0) ||
                (iVar8 = **(int **)(param_1 + 8), iVar8 < 0x304)) || (iVar8 == 0x10000)) {
              return 3;
            }
            uVar12 = ssl_handshake_md(param_1);
            iVar8 = EVP_MD_size(uVar12);
            if (-1 < iVar8) {
              iVar9 = tls13_hkdf_expand(param_1,uVar12,param_1 + 0x1ec,"resumption",10,uVar19,
                                        local_50,*plVar14 + 0x50,(longlong)iVar8);
              if (iVar9 != 0) {
                *(longlong *)(*plVar14 + 8) = (longlong)iVar8;
                CRYPTO_free(local_res18[0],"ssl\\statem\\statem_clnt.c",0xab0);
                ssl_update_cache(param_1,1);
                return 1;
              }
              goto LAB_143cd1bea;
            }
            uVar18 = 0x50;
            uVar19 = 0xa9f;
            uVar17 = 0x44;
          }
        }
      }
    }
  }
LAB_143cd1bda:
  ossl_statem_fatal(param_1,uVar18,0x16e,uVar17,"ssl\\statem\\statem_clnt.c",uVar19);
LAB_143cd1bea:
  CRYPTO_free(local_res18[0],"ssl\\statem\\statem_clnt.c",0xab7);
  return 0;
}



// FUNCTION 143cd1fb0 tls_process_server_certificate body=1440 status=ok
// SIG undefined tls_process_server_certificate(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong tls_process_server_certificate(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined8 local_res20;
  undefined4 uVar18;
  undefined1 *local_58;
  undefined4 local_50 [2];
  undefined1 local_48 [8];
  undefined8 uStack_40;
  
  uStack_40 = 0x143cd1fca;
  lVar11 = 0;
  lVar12 = 0;
  lVar8 = OPENSSL_sk_new_null();
  lVar9 = lVar11;
  if (lVar8 == 0) {
    uVar18 = 0x72e;
    uVar10 = 0x50;
    uVar14 = 0x41;
  }
  else {
    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
        (iVar7 = **(int **)(param_1 + 8), 0x303 < iVar7)) && (iVar7 != 0x10000)) {
      if (param_2[1] != 0) {
        cVar1 = *(char *)*param_2;
        *param_2 = (longlong)((char *)*param_2 + 1);
        param_2[1] = param_2[1] + -1;
        if (cVar1 == '\0') goto LAB_143cd2048;
      }
    }
    else {
LAB_143cd2048:
      if (2 < (ulonglong)param_2[1]) {
        puVar5 = (undefined1 *)*param_2;
        uVar15 = param_2[1] - 3;
        uVar2 = *puVar5;
        uVar3 = puVar5[1];
        uVar4 = puVar5[2];
        *param_2 = (longlong)(puVar5 + 3);
        param_2[1] = uVar15;
        if ((uVar15 == CONCAT21(CONCAT11(uVar2,uVar3),uVar4)) && (lVar16 = lVar11, uVar15 != 0)) {
          do {
            if (uVar15 < 3) {
LAB_143cd24c3:
              ossl_statem_fatal(param_1,0x32,0x16f,0x87,"ssl\\statem\\statem_clnt.c",0x740);
              lVar9 = lVar11;
              goto LAB_143cd251f;
            }
            puVar6 = (undefined1 *)*param_2;
            uVar15 = uVar15 - 3;
            puVar5 = puVar6 + 3;
            uVar13 = (uint)CONCAT21(CONCAT11(*puVar6,puVar6[1]),puVar6[2]);
            *param_2 = (longlong)puVar5;
            uVar17 = (ulonglong)uVar13;
            param_2[1] = uVar15;
            if (uVar15 < uVar17) goto LAB_143cd24c3;
            *param_2 = (longlong)(puVar5 + uVar13);
            param_2[1] = uVar15 - uVar17;
            local_58 = puVar5;
            lVar9 = d2i_X509(0,&local_58);
            if (lVar9 == 0) {
              uVar10 = 0x2a;
              uVar18 = 0x748;
              uVar14 = 0xd;
              goto LAB_143cd2507;
            }
            if (local_58 != puVar5 + uVar17) {
              uVar10 = 0x32;
              uVar18 = 0x74e;
              uVar14 = 0x87;
              goto LAB_143cd2507;
            }
            if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
                (iVar7 = **(int **)(param_1 + 8), 0x303 < iVar7)) && (iVar7 != 0x10000)) {
              local_res20 = 0;
              iVar7 = PACKET_get_length_prefixed_2(param_2,local_48);
              if (iVar7 == 0) {
                uVar18 = 0x759;
                uVar10 = 0x32;
                uVar14 = 0x10f;
                goto LAB_143cd2507;
              }
              iVar7 = tls_collect_extensions(param_1,local_48,0x1000,&local_res20,0,lVar16 == 0);
              if ((iVar7 == 0) ||
                 (iVar7 = tls_parse_all_extensions
                                    (param_1,0x1000,local_res20,lVar9,lVar16,param_2[1] == 0),
                 iVar7 == 0)) {
                CRYPTO_free(local_res20,"ssl\\statem\\statem_clnt.c",0x762);
                goto LAB_143cd251f;
              }
              CRYPTO_free(local_res20,"ssl\\statem\\statem_clnt.c",0x766);
            }
            iVar7 = OPENSSL_sk_push(lVar8,lVar9);
            if (iVar7 == 0) {
              ossl_statem_fatal(param_1,0x50,0x16f,0x41,"ssl\\statem\\statem_clnt.c",0x76c);
              lVar11 = lVar12;
              goto LAB_143cd251f;
            }
            uVar15 = param_2[1];
            lVar16 = lVar16 + 1;
          } while (uVar15 != 0);
          iVar7 = ssl_verify_cert_chain(param_1,lVar8);
          if ((*(int *)(param_1 + 0x558) == 0) || (0 < iVar7)) {
            ERR_clear_error();
            if (iVar7 < 2) {
              *(longlong *)(*(longlong *)(param_1 + 0x508) + 0x108) = lVar8;
              uVar10 = OPENSSL_sk_value(lVar8,0);
              lVar8 = 0;
              lVar11 = X509_get0_pubkey(uVar10);
              if ((lVar11 == 0) || (iVar7 = EVP_PKEY_missing_parameters(lVar11), iVar7 != 0)) {
                ossl_statem_fatal(param_1,0x50,0x16f,0xef,"ssl\\statem\\statem_clnt.c",0x79b);
                lVar11 = lVar12;
                lVar9 = 0;
              }
              else {
                lVar11 = ssl_cert_lookup_by_pkey(lVar11,local_50);
                if (lVar11 == 0) {
                  ossl_statem_fatal(param_1,0x2f,0x16f,0xf7,"ssl\\statem\\statem_clnt.c",0x7a3);
                  lVar11 = lVar12;
                  lVar9 = 0;
                }
                else if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) ==
                            0) && (iVar7 = **(int **)(param_1 + 8), 0x303 < iVar7)) &&
                         (iVar7 != 0x10000)) ||
                        ((*(uint *)(lVar11 + 4) &
                         *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x20)) !=
                         0)) {
                  *(undefined4 *)(*(longlong *)(param_1 + 0x508) + 0x100) = local_50[0];
                  X509_free(*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0xf8));
                  X509_up_ref(uVar10);
                  *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0xf8) = uVar10;
                  *(undefined4 *)(*(longlong *)(param_1 + 0x508) + 0x110) =
                       *(undefined4 *)(param_1 + 0x5a8);
                  lVar9 = 0;
                  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0)
                      || (iVar7 = **(int **)(param_1 + 8), iVar7 < 0x304)) ||
                     ((iVar7 == 0x10000 ||
                      (iVar7 = ssl_handshake_hash(param_1,param_1 + 0x490,0x40,param_1 + 0x4d0),
                      lVar11 = lVar12, iVar7 != 0)))) {
                    lVar11 = 3;
                  }
                }
                else {
                  ossl_statem_fatal(param_1,0x2f,0x16f,0x17f,"ssl\\statem\\statem_clnt.c",0x7b0);
                  lVar11 = lVar12;
                  lVar9 = 0;
                }
              }
            }
            else {
              ossl_statem_fatal(param_1,0x28,0x16f,iVar7,"ssl\\statem\\statem_clnt.c",0x78a);
              lVar9 = lVar11;
            }
          }
          else {
            uVar14 = ssl_x509err2alert(*(undefined4 *)(param_1 + 0x5a8));
            ossl_statem_fatal(param_1,uVar14,0x16f,0x86,"ssl\\statem\\statem_clnt.c",0x784);
            lVar9 = lVar11;
          }
          goto LAB_143cd251f;
        }
      }
    }
    uVar10 = 0x32;
    uVar18 = 0x738;
    uVar14 = 0x9f;
  }
LAB_143cd2507:
  ossl_statem_fatal(param_1,uVar10,0x16f,uVar14,"ssl\\statem\\statem_clnt.c",uVar18);
LAB_143cd251f:
  X509_free(lVar9);
  OPENSSL_sk_pop_free(lVar8,X509_free);
  return lVar11;
}



// FUNCTION 143cd2550 tls_process_server_hello body=2274 status=ok
// SIG undefined tls_process_server_hello(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 tls_process_server_hello(int *param_1,longlong *param_2)

{
  undefined8 *_Buf2;
  byte bVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int *piVar4;
  longlong lVar5;
  int iVar6;
  byte *pbVar7;
  longlong lVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  uint uVar13;
  ulonglong uVar14;
  bool bVar15;
  uint local_res18 [2];
  longlong local_res20;
  undefined8 in_stack_ffffffffffffff90;
  undefined8 uVar16;
  undefined8 local_68;
  byte *local_60;
  byte *local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
  local_40 = 0x143cd256d;
  bVar15 = false;
  local_68 = 0;
  if ((ulonglong)param_2[1] < 2) {
    uVar11 = 0x593;
    goto LAB_143cd2de8;
  }
  puVar2 = (undefined1 *)*param_2;
  uVar14 = param_2[1] - 2;
  _Buf2 = (undefined8 *)(puVar2 + 2);
  local_res18[0] = (uint)CONCAT11(*puVar2,puVar2[1]);
  *param_2 = (longlong)_Buf2;
  param_2[1] = uVar14;
  if ((*param_1 == 0x304) && (local_res18[0] == 0x303)) {
    if (uVar14 < 0x20) goto LAB_143cd2dd6;
    iVar6 = _guard_xfg_dispatch_icall_nop(&DAT_145d4a970,_Buf2,0x20);
    if (iVar6 != 0) goto LAB_143cd2619;
    param_1[0x136] = 1;
    if ((ulonglong)param_2[1] < 0x20) {
      uVar11 = 0x5a0;
      goto LAB_143cd2de8;
    }
    *param_2 = *param_2 + 0x20;
    param_2[1] = param_2[1] - 0x20;
    bVar15 = true;
  }
  else {
LAB_143cd2619:
    if (uVar14 < 0x20) {
LAB_143cd2dd6:
      uVar11 = 0x5a6;
      goto LAB_143cd2de8;
    }
    lVar8 = *(longlong *)(param_1 + 0x2a);
    uVar11 = *(undefined8 *)(puVar2 + 10);
    *(undefined8 *)(lVar8 + 0x98) = *_Buf2;
    *(undefined8 *)(lVar8 + 0xa0) = uVar11;
    uVar11 = *(undefined8 *)(puVar2 + 0x1a);
    *(undefined8 *)(lVar8 + 0xa8) = *(undefined8 *)(puVar2 + 0x12);
    *(undefined8 *)(lVar8 + 0xb0) = uVar11;
    *param_2 = *param_2 + 0x20;
    param_2[1] = param_2[1] + -0x20;
  }
  local_58 = (byte *)*param_2;
  uStack_50 = param_2[1];
  if (uStack_50 == 0) {
LAB_143cd2dcc:
    uVar11 = 0x5ae;
LAB_143cd2de8:
    uVar12 = 0x9f;
LAB_143cd2dee:
    uVar10 = 0x32;
  }
  else {
    uVar14 = (ulonglong)*local_58;
    local_60 = local_58 + 1;
    uStack_50 = uStack_50 - 1;
    local_58 = local_60;
    if (uStack_50 < uVar14) goto LAB_143cd2dcc;
    local_58 = local_60 + uVar14;
    uStack_50 = uStack_50 - uVar14;
    *param_2 = (longlong)local_58;
    param_2[1] = uStack_50;
    if (0x20 < uVar14) {
      uVar11 = 0x5b5;
      uVar10 = 0x2f;
      uVar12 = 300;
      goto LAB_143cd2df6;
    }
    uVar3 = param_2[1];
    if (uVar3 < 2) {
      uVar11 = 0x5bb;
      goto LAB_143cd2de8;
    }
    local_res20 = *param_2;
    *param_2 = local_res20 + 2;
    param_2[1] = uVar3 - 2;
    if (uVar3 - 2 == 0) {
      uVar11 = 0x5c1;
      goto LAB_143cd2de8;
    }
    bVar1 = *(byte *)(local_res20 + 2);
    *param_2 = local_res20 + 3;
    uVar9 = (uint)bVar1;
    param_2[1] = uVar3 - 3;
    if ((uVar3 - 3 != 0) || (bVar15)) {
      iVar6 = PACKET_as_length_prefixed_2(param_2,&local_48);
      if ((iVar6 != 0) && (param_2[1] == 0)) {
        if (!bVar15) goto LAB_143cd271c;
        goto LAB_143cd275f;
      }
      uVar11 = 0x5cb;
      uVar12 = 0x10f;
      goto LAB_143cd2dee;
    }
    local_48 = 0;
    local_40 = 0;
LAB_143cd271c:
    uVar11 = CONCAT44(uVar10,1);
    iVar6 = tls_collect_extensions(param_1,&local_48,0x300,&local_68,0,uVar11);
    uVar10 = (undefined4)((ulonglong)uVar11 >> 0x20);
    if ((iVar6 == 0) ||
       (iVar6 = ssl_choose_client_version(param_1,local_res18[0],local_68), iVar6 == 0))
    goto LAB_143cd2e06;
LAB_143cd275f:
    piVar4 = *(int **)(param_1 + 2);
    uVar13 = *(uint *)(*(longlong *)(piVar4 + 0x30) + 0x60) & 8;
    if (((uVar13 == 0) && ((0x303 < *piVar4 && (*piVar4 != 0x10000)))) || (bVar15)) {
      if (uVar9 == 0) {
        if ((uVar14 == *(ulonglong *)(param_1 + 0x154)) &&
           (iVar6 = _guard_xfg_dispatch_icall_nop(local_60,param_1 + 0x14c,uVar14), iVar6 == 0)) {
          if (bVar15) {
            iVar6 = set_client_ciphersuite(param_1,local_res20);
            if (iVar6 != 0) {
              local_res20 = 0;
              EVP_CIPHER_CTX_free(*(undefined8 *)(param_1 + 0x118));
              uVar11 = CONCAT44(uVar10,1);
              param_1[0x118] = 0;
              param_1[0x119] = 0;
              iVar6 = tls_collect_extensions(param_1,&local_48,0x800,&local_res20,0,uVar11);
              if (iVar6 != 0) {
                uVar11 = CONCAT44((int)((ulonglong)uVar11 >> 0x20),1);
                iVar6 = tls_parse_all_extensions(param_1,0x800,local_res20,0,0,uVar11);
                uVar10 = (undefined4)((ulonglong)uVar11 >> 0x20);
                if (iVar6 != 0) {
                  CRYPTO_free(local_res20,"ssl\\statem\\statem_clnt.c",0x6f2);
                  local_res20 = 0;
                  if ((*(longlong *)(param_1 + 0x1be) == 0) &&
                     (*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x240) != 0)) {
                    ossl_statem_fatal(param_1,0x2f,0x262,0xd6,"ssl\\statem\\statem_clnt.c",
                                      CONCAT44(uVar10,0x700));
                  }
                  else {
                    iVar6 = create_synthetic_message_hash(param_1,0,0,0,0);
                    if ((iVar6 != 0) &&
                       (iVar6 = ssl3_finish_mac(param_1,*(undefined8 *)
                                                         (*(longlong *)(param_1 + 0x22) + 8),
                                                *(longlong *)(param_1 + 0x26) + 4), iVar6 != 0)) {
                      return 1;
                    }
                  }
                }
              }
              CRYPTO_free(local_res20,"ssl\\statem\\statem_clnt.c",0x71b);
              return 0;
            }
            goto LAB_143cd2e06;
          }
          goto LAB_143cd2923;
        }
        uVar11 = 0x5ea;
        uVar10 = 0x2f;
        uVar12 = 999;
      }
      else {
        uVar11 = 0x5e2;
        uVar10 = 0x2f;
        uVar12 = 0x155;
      }
    }
    else {
LAB_143cd2923:
      if (((uVar13 != 0) || (*piVar4 < 0x304)) || (uVar11 = 0x200, *piVar4 == 0x10000)) {
        uVar11 = 0x100;
      }
      iVar6 = tls_validate_all_contexts(param_1,uVar11,local_68);
      if (iVar6 == 0) {
        uVar11 = 0x600;
        uVar10 = 0x2f;
        uVar12 = 0x6e;
      }
      else {
        param_1[0x32] = 0;
        if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
            (iVar6 = **(int **)(param_1 + 2), 0x303 < iVar6)) && (iVar6 != 0x10000)) {
          iVar6 = RECORD_LAYER_processed_read_pending(param_1 + 0x200);
          if (iVar6 != 0) {
            uVar11 = 0x60e;
            uVar10 = 10;
            uVar12 = 0xb6;
            goto LAB_143cd2df6;
          }
          uVar10 = 0;
          iVar6 = tls_parse_extension(param_1,0x19,0x200,local_68,0,0);
          lVar8 = local_res20;
          pbVar7 = local_60;
          if (iVar6 == 0) goto LAB_143cd2e06;
        }
        else {
          lVar8 = local_res20;
          if (((0x300 < *param_1) && (*(code **)(param_1 + 0x1ac) != (code *)0x0)) &&
             (*(longlong *)(*(longlong *)(param_1 + 0x142) + 0x180) != 0)) {
            uVar16 = *(undefined8 *)(param_1 + 0x1ae);
            local_58 = (byte *)0x0;
            local_res18[0] = 0x40;
            iVar6 = (**(code **)(param_1 + 0x1ac))
                              (param_1,*(longlong *)(param_1 + 0x142) + 0x50,local_res18,0,&local_58
                               ,uVar16);
            lVar8 = local_res20;
            uVar10 = (undefined4)((ulonglong)uVar16 >> 0x20);
            if ((iVar6 == 0) || ((int)local_res18[0] < 1)) {
              uVar10 = 0x50;
              uVar11 = 0x639;
              uVar12 = 0x44;
              goto LAB_143cd2df6;
            }
            *(longlong *)(*(longlong *)(param_1 + 0x142) + 8) = (longlong)(int)local_res18[0];
            pbVar7 = local_58;
            if (local_58 == (byte *)0x0) {
              pbVar7 = (byte *)ssl_get_cipher_by_char(param_1,local_res20,0);
            }
            *(byte **)(*(longlong *)(param_1 + 0x142) + 0x128) = pbVar7;
          }
          pbVar7 = local_60;
          if (((uVar14 != 0) && (uVar14 == *(ulonglong *)(*(longlong *)(param_1 + 0x142) + 0x90)))
             && (iVar6 = _guard_xfg_dispatch_icall_nop
                                   (local_60,(void *)(*(longlong *)(param_1 + 0x142) + 0x98),uVar14)
                , iVar6 == 0)) {
            param_1[0x32] = 1;
          }
        }
        lVar5 = *(longlong *)(param_1 + 0x142);
        if (param_1[0x32] == 0) {
          if ((*(longlong *)(lVar5 + 0x90) != 0) ||
             ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0 &&
               (iVar6 = **(int **)(param_1 + 2), 0x303 < iVar6)) &&
              ((iVar6 != 0x10000 && (*(int *)(lVar5 + 0x198) != -1)))))) {
            LOCK();
            *(int *)(*(longlong *)(param_1 + 0x1ce) + 0x80) =
                 *(int *)(*(longlong *)(param_1 + 0x1ce) + 0x80) + 1;
            UNLOCK();
            iVar6 = ssl_get_new_session(param_1,0);
            if (iVar6 == 0) goto LAB_143cd2e06;
          }
          **(int **)(param_1 + 0x142) = *param_1;
          if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) != 0) ||
               (iVar6 = **(int **)(param_1 + 2), iVar6 < 0x304)) || (iVar6 == 0x10000)) &&
             (*(ulonglong *)(*(longlong *)(param_1 + 0x142) + 0x90) = uVar14, uVar14 != 0)) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(param_1 + 0x142) + 0x98),pbVar7,uVar14);
          }
        }
        else if ((*(size_t *)(param_1 + 0x138) != *(size_t *)(lVar5 + 0xb8)) ||
                (iVar6 = _guard_xfg_dispatch_icall_nop
                                   ((void *)(lVar5 + 0xc0),param_1 + 0x13a,
                                    *(size_t *)(param_1 + 0x138)), iVar6 != 0)) {
          uVar11 = 0x64b;
          uVar10 = 0x2f;
          uVar12 = 0x110;
          goto LAB_143cd2df6;
        }
        if (*param_1 == **(int **)(param_1 + 0x142)) {
          *(int *)(*(longlong *)(param_1 + 0x2a) + 0x33c) = *param_1;
          *(int *)(*(longlong *)(param_1 + 0x2a) + 0x340) = *param_1;
          iVar6 = set_client_ciphersuite(param_1,lVar8);
          if (iVar6 == 0) goto LAB_143cd2e06;
          if ((param_1[0x32] == 0) || (uVar9 == *(uint *)(*(longlong *)(param_1 + 0x142) + 0x120)))
          {
            if (uVar9 == 0) {
              lVar8 = 0;
LAB_143cd2c99:
              *(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x298) = lVar8;
              iVar6 = tls_parse_all_extensions(param_1,uVar11,local_68,0,0,CONCAT44(uVar10,1));
              if (iVar6 != 0) {
                lVar8 = *(longlong *)(*(int **)(param_1 + 2) + 0x30);
                if ((((*(byte *)(lVar8 + 0x60) & 8) != 0) ||
                    (iVar6 = **(int **)(param_1 + 2), iVar6 < 0x304)) ||
                   ((iVar6 == 0x10000 ||
                    ((iVar6 = (**(code **)(lVar8 + 0x10))(param_1), iVar6 != 0 &&
                     (iVar6 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x20))
                                        (param_1,0x91), iVar6 != 0)))))) {
                  CRYPTO_free(local_68,"ssl\\statem\\statem_clnt.c",0x6d7);
                  return 3;
                }
              }
              goto LAB_143cd2e06;
            }
            iVar6 = ssl_allow_compression(param_1);
            if (iVar6 == 0) {
              uVar11 = 0x69c;
              uVar10 = 0x2f;
              uVar12 = 0x157;
            }
            else {
              lVar8 = ssl3_comp_find(*(undefined8 *)(*(longlong *)(param_1 + 0x166) + 0x100),uVar9);
              if (lVar8 != 0) goto LAB_143cd2c99;
              uVar11 = 0x6a4;
              uVar10 = 0x2f;
              uVar12 = 0x101;
            }
          }
          else {
            uVar11 = 0x695;
            uVar10 = 0x2f;
            uVar12 = 0x158;
          }
        }
        else {
          uVar11 = 0x674;
          uVar10 = 0x46;
          uVar12 = 0xd2;
        }
      }
    }
  }
LAB_143cd2df6:
  ossl_statem_fatal(param_1,uVar10,0x171,uVar12,"ssl\\statem\\statem_clnt.c",uVar11);
LAB_143cd2e06:
  CRYPTO_free(local_68,"ssl\\statem\\statem_clnt.c",0x6da);
  return 0;
}



// FUNCTION 143cd2e40 tls_process_ske_dhe body=994 status=ok
// SIG undefined tls_process_ske_dhe(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_process_ske_dhe(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  undefined8 uVar17;
  longlong lVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  int local_res10 [2];
  undefined8 *local_res18;
  longlong local_res20;
  
  puVar8 = (undefined1 *)*param_2;
  local_res10[0] = 0;
  local_res18 = param_3;
  if ((ulonglong)param_2[1] < 2) {
LAB_143cd31e7:
    ossl_statem_fatal(param_1,0x32,0x1a3,0x9f,"ssl\\statem\\statem_clnt.c",0x839);
    return 0;
  }
  uVar15 = param_2[1] - 2;
  uVar2 = *puVar8;
  uVar3 = puVar8[1];
  uVar20 = (ulonglong)CONCAT11(uVar2,uVar3);
  if (uVar15 < uVar20) goto LAB_143cd31e7;
  puVar16 = puVar8 + 2 + uVar20;
  uVar15 = uVar15 - uVar20;
  *param_2 = (longlong)puVar16;
  param_2[1] = uVar15;
  if (uVar15 < 2) goto LAB_143cd31e7;
  uVar4 = *puVar16;
  uVar5 = puVar16[1];
  uVar20 = (ulonglong)CONCAT11(uVar4,uVar5);
  if (uVar15 - 2 < uVar20) goto LAB_143cd31e7;
  uVar15 = (uVar15 - 2) - uVar20;
  puVar1 = puVar16 + 2 + uVar20;
  *param_2 = (longlong)puVar1;
  param_2[1] = uVar15;
  if (uVar15 < 2) goto LAB_143cd31e7;
  uVar6 = *puVar1;
  uVar7 = puVar1[1];
  uVar20 = (ulonglong)CONCAT11(uVar6,uVar7);
  if (uVar15 - 2 < uVar20) goto LAB_143cd31e7;
  *param_2 = (longlong)(puVar1 + 2 + uVar20);
  param_2[1] = (uVar15 - 2) - uVar20;
  lVar11 = EVP_PKEY_new();
  lVar12 = DH_new();
  if ((lVar11 == 0) || (lVar12 == 0)) {
    uVar10 = 0x842;
    uVar19 = 0x41;
LAB_143cd3192:
    lVar13 = 0;
    lVar18 = 0;
    lVar14 = lVar18;
  }
  else {
    local_res20 = BN_bin2bn(puVar8 + 2,CONCAT11(uVar2,uVar3),0);
    lVar13 = BN_bin2bn(puVar16 + 2,CONCAT11(uVar4,uVar5),0);
    lVar14 = BN_bin2bn(puVar1 + 2,CONCAT11(uVar6,uVar7),0);
    lVar18 = local_res20;
    if (((local_res20 == 0) || (lVar13 == 0)) || (lVar14 == 0)) {
      uVar10 = 0x84e;
      uVar19 = 3;
    }
    else {
      iVar9 = BN_is_zero(lVar14);
      if (iVar9 != 0) {
        uVar17 = 0x2f;
        uVar10 = 0x855;
        uVar19 = 0x66;
        goto LAB_143cd319a;
      }
      iVar9 = DH_set0_pqg(lVar12,lVar18,0,lVar13);
      if (iVar9 == 0) {
        uVar10 = 0x85b;
        uVar19 = 3;
      }
      else {
        lVar13 = 0;
        iVar9 = DH_check_params(lVar12,local_res10);
        if ((iVar9 == 0) || (local_res10[0] != 0)) {
          uVar17 = 0x2f;
          uVar10 = 0x862;
          lVar18 = 0;
          uVar19 = 0x66;
          goto LAB_143cd319a;
        }
        iVar9 = DH_set0_key(lVar12,lVar14,0);
        if (iVar9 != 0) {
          lVar18 = 0;
          uVar10 = DH_security_bits(lVar12);
          iVar9 = ssl_security(param_1,0x40007,uVar10,0,lVar12);
          if (iVar9 == 0) {
            uVar17 = 0x28;
            uVar10 = 0x86f;
            uVar19 = 0x18a;
            lVar14 = lVar18;
            goto LAB_143cd319a;
          }
          iVar9 = EVP_PKEY_assign(lVar11,0x1c,lVar12);
          if (iVar9 != 0) {
            *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x408) = lVar11;
            if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x20) & 3) != 0) {
              uVar19 = X509_get0_pubkey(*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0xf8));
              *local_res18 = uVar19;
            }
            return 1;
          }
          uVar10 = 0x875;
          uVar19 = 6;
          goto LAB_143cd3192;
        }
        uVar10 = 0x868;
        uVar19 = 3;
        lVar18 = lVar13;
      }
    }
  }
  uVar17 = 0x50;
LAB_143cd319a:
  ossl_statem_fatal(param_1,uVar17,0x1a3,uVar19,"ssl\\statem\\statem_clnt.c",uVar10);
  BN_free(lVar18);
  BN_free(lVar13);
  BN_free(lVar14);
  DH_free(lVar12);
  EVP_PKEY_free(lVar11);
  return 0;
}



// FUNCTION 143cd3230 tls_process_ske_ecdhe body=474 status=ok
// SIG undefined tls_process_ske_ecdhe(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_process_ske_ecdhe(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0x143cd3246;
  lVar7 = param_2[1];
  if (lVar7 == 0) {
LAB_143cd33cc:
    ossl_statem_fatal(param_1,0x32,0x1a4,0xa0,"ssl\\statem\\statem_clnt.c",0x8a1);
    return 0;
  }
  pcVar5 = (char *)*param_2;
  cVar1 = *pcVar5;
  *param_2 = pcVar5 + 1;
  param_2[1] = lVar7 - 1U;
  if (lVar7 - 1U < 2) goto LAB_143cd33cc;
  cVar2 = pcVar5[1];
  cVar3 = pcVar5[2];
  *param_2 = pcVar5 + 3;
  param_2[1] = lVar7 + -3;
  if (cVar1 == '\x03') {
    uVar10 = CONCAT11(cVar2,cVar3);
    iVar6 = tls1_check_group_id(param_1,uVar10,1);
    if (iVar6 == 0) goto LAB_143cd339b;
    lVar7 = ssl_generate_param_group(uVar10);
    *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x408) = lVar7;
    if (lVar7 == 0) {
      uVar12 = 0x8b1;
      uVar9 = 0x50;
      uVar11 = 0x13a;
      goto LAB_143cd33ae;
    }
    iVar6 = PACKET_get_length_prefixed_1(param_2,&local_18);
    if (iVar6 == 0) {
      uVar9 = 0x32;
      uVar12 = 0x8b7;
      uVar11 = 0x9f;
      goto LAB_143cd33ae;
    }
    iVar6 = EVP_PKEY_set1_tls_encodedpoint
                      (*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x408),local_18,local_10);
    if (iVar6 != 0) {
      uVar4 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x20);
      if (((uVar4 & 8) != 0) || ((uVar4 & 1) != 0)) {
        uVar8 = X509_get0_pubkey(*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0xf8));
        *param_3 = uVar8;
      }
      return 1;
    }
    uVar12 = 0x8bf;
    uVar11 = 0x132;
  }
  else {
LAB_143cd339b:
    uVar12 = 0x8ab;
    uVar11 = 0x17a;
  }
  uVar9 = 0x2f;
LAB_143cd33ae:
  ossl_statem_fatal(param_1,uVar9,0x1a4,uVar11,"ssl\\statem\\statem_clnt.c",uVar12);
  return 0;
}



// FUNCTION 143cd3410 tls_process_ske_srp body=627 status=ok
// SIG undefined tls_process_ske_srp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_process_ske_srp(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte *pbVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulonglong uVar13;
  byte *pbVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  byte *pbVar19;
  
  pbVar8 = (byte *)*param_2;
  uVar13 = param_2[1];
  pbVar19 = pbVar8;
  if (1 < uVar13) {
    uVar13 = uVar13 - 2;
    bVar2 = *pbVar8;
    bVar3 = pbVar8[1];
    uVar17 = (ulonglong)CONCAT11(bVar2,bVar3);
    if (uVar17 <= uVar13) {
      uVar13 = uVar13 - uVar17;
      pbVar12 = pbVar8 + 2 + uVar17;
      *param_2 = (longlong)pbVar12;
      param_2[1] = uVar13;
      pbVar19 = pbVar12;
      if (1 < uVar13) {
        bVar4 = *pbVar12;
        uVar13 = uVar13 - 2;
        bVar5 = pbVar12[1];
        uVar17 = (ulonglong)CONCAT11(bVar4,bVar5);
        if (uVar17 <= uVar13) {
          pbVar14 = pbVar12 + 2 + uVar17;
          uVar13 = uVar13 - uVar17;
          *param_2 = (longlong)pbVar14;
          param_2[1] = uVar13;
          pbVar19 = pbVar14;
          if (uVar13 != 0) {
            uVar17 = (ulonglong)*pbVar14;
            uVar13 = uVar13 - 1;
            if (uVar17 <= uVar13) {
              uVar13 = uVar13 - uVar17;
              pbVar19 = pbVar14 + 1 + uVar17;
              *param_2 = (longlong)pbVar19;
              param_2[1] = uVar13;
              if (1 < uVar13) {
                pbVar1 = pbVar19 + 2;
                bVar6 = *pbVar19;
                uVar13 = uVar13 - 2;
                bVar7 = pbVar19[1];
                uVar15 = (ulonglong)CONCAT11(bVar6,bVar7);
                pbVar19 = pbVar1;
                if (uVar15 <= uVar13) {
                  uVar13 = uVar13 - uVar15;
                  pbVar19 = pbVar1 + uVar15;
                  *param_2 = (longlong)pbVar19;
                  param_2[1] = uVar13;
                  lVar10 = BN_bin2bn(pbVar8 + 2,CONCAT11(bVar2,bVar3),0);
                  *(longlong *)(param_1 + 0x7a8) = lVar10;
                  if (lVar10 != 0) {
                    lVar10 = BN_bin2bn(pbVar12 + 2,CONCAT11(bVar4,bVar5),0);
                    *(longlong *)(param_1 + 0x7b0) = lVar10;
                    if (lVar10 != 0) {
                      lVar10 = BN_bin2bn(pbVar14 + 1,uVar17,0);
                      *(longlong *)(param_1 + 0x7b8) = lVar10;
                      if (lVar10 != 0) {
                        lVar10 = BN_bin2bn(pbVar1,CONCAT11(bVar6,bVar7),0);
                        *(longlong *)(param_1 + 0x7c0) = lVar10;
                        if (lVar10 != 0) {
                          iVar9 = srp_verify_server_param(param_1);
                          if (iVar9 == 0) {
                            return 0;
                          }
                          if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x20
                                        ) & 3) != 0) {
                            uVar11 = X509_get0_pubkey(*(undefined8 *)
                                                       (*(longlong *)(param_1 + 0x508) + 0xf8));
                            *param_3 = uVar11;
                          }
                          return 1;
                        }
                      }
                    }
                  }
                  uVar11 = 0x50;
                  uVar18 = 0x815;
                  uVar16 = 3;
                  goto LAB_143cd3649;
                }
              }
            }
          }
        }
      }
    }
  }
  uVar11 = 0x32;
  uVar18 = 0x803;
  uVar16 = 0x9f;
LAB_143cd3649:
  ossl_statem_fatal(param_1,uVar11,0x1a6,uVar16,"ssl\\statem\\statem_clnt.c",uVar18,pbVar19,uVar13);
  return 0;
}



// FUNCTION 143cd3690 d2i_SSL_SESSION body=1083 status=ok
// SIG undefined d2i_SSL_SESSION(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * d2i_SSL_SESSION(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  byte *pbVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  int *piVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 local_res10;
  undefined4 uVar10;
  undefined8 uVar11;
  
  uVar11 = 0x143cd36ae;
  local_res10 = *param_2;
  piVar7 = (int *)0x0;
  piVar4 = (int *)ASN1_item_d2i(0,&local_res10,param_3,&DAT_145d56600);
  piVar5 = piVar7;
  if ((piVar4 == (int *)0x0) ||
     (((param_1 == (longlong *)0x0 || (piVar5 = (int *)*param_1, piVar5 == (int *)0x0)) &&
      (piVar5 = (int *)SSL_SESSION_new(), piVar5 == (int *)0x0)))) goto LAB_143cd371f;
  if (*piVar4 == 1) {
    iVar3 = piVar4[1];
    if (((iVar3 >> 8 == 3) || (iVar3 >> 8 == 0xfe)) || (iVar3 == 0x100)) {
      *piVar5 = iVar3;
      if (**(int **)(piVar4 + 2) == 2) {
        pbVar1 = *(byte **)(*(int **)(piVar4 + 2) + 2);
        piVar5[0x4c] = (*pbVar1 | 0x30000) << 8 | (uint)pbVar1[1];
        lVar6 = ssl3_get_cipher_by_id();
        *(longlong *)(piVar5 + 0x4a) = lVar6;
        if ((lVar6 == 0) ||
           (iVar3 = ssl_session_memcpy(piVar5 + 0x26,piVar5 + 0x24,*(undefined8 *)(piVar4 + 8),0x20)
           , iVar3 == 0)) goto LAB_143cd371f;
        puVar2 = *(uint **)(piVar4 + 6);
        if (puVar2 != (uint *)0x0) {
          if (0x40 < *puVar2) goto LAB_143cd371f;
          _guard_xfg_dispatch_icall_nop(piVar5 + 0x14,*(void **)(puVar2 + 2),(longlong)(int)*puVar2)
          ;
          piVar7 = (int *)(longlong)(int)*puVar2;
        }
        *(int **)(piVar5 + 2) = piVar7;
        lVar6 = *(longlong *)(piVar4 + 0xc);
        if (lVar6 == 0) {
          lVar6 = _time64((__time64_t *)0x0);
        }
        piVar5[0x47] = (int)lVar6;
        iVar3 = 3;
        if (*(longlong *)(piVar4 + 0xe) != 0) {
          iVar3 = (int)*(longlong *)(piVar4 + 0xe);
        }
        piVar5[0x46] = iVar3;
        X509_free(*(undefined8 *)(piVar5 + 0x3e));
        *(undefined8 *)(piVar5 + 0x3e) = *(undefined8 *)(piVar4 + 0x10);
        piVar4[0x10] = 0;
        piVar4[0x11] = 0;
        iVar3 = ssl_session_memcpy(piVar5 + 0x30,piVar5 + 0x2e,*(undefined8 *)(piVar4 + 0x12),0x20);
        if (iVar3 == 0) goto LAB_143cd371f;
        piVar5[0x44] = piVar4[0x14];
        iVar3 = ssl_session_strndup(piVar5 + 0x56,*(undefined8 *)(piVar4 + 0x16));
        if (((iVar3 == 0) ||
            (iVar3 = ssl_session_strndup(piVar5 + 0x38,*(undefined8 *)(piVar4 + 0x1e)), iVar3 == 0))
           || (iVar3 = ssl_session_strndup(piVar5 + 0x3a,*(undefined8 *)(piVar4 + 0x20)), iVar3 == 0
              )) goto LAB_143cd371f;
        piVar5[100] = piVar4[0x18];
        piVar5[0x65] = piVar4[0x1a];
        CRYPTO_free(*(undefined8 *)(piVar5 + 0x60),"ssl\\ssl_asn1.c",0x14b);
        if (*(longlong *)(piVar4 + 0x1c) == 0) {
          piVar5[0x60] = 0;
          piVar5[0x61] = 0;
        }
        else {
          *(undefined8 *)(piVar5 + 0x60) = *(undefined8 *)(*(longlong *)(piVar4 + 0x1c) + 8);
          *(longlong *)(piVar5 + 0x62) = (longlong)**(int **)(piVar4 + 0x1c);
          *(undefined8 *)(*(longlong *)(piVar4 + 0x1c) + 8) = 0;
        }
        piVar7 = *(int **)(piVar4 + 4);
        if (piVar7 == (int *)0x0) {
          uVar8 = 0;
        }
        else {
          if (*piVar7 != 1) {
            uVar10 = 0x156;
            uVar9 = 0x10f;
            goto LAB_143cd371a;
          }
          uVar8 = (uint)**(byte **)(piVar7 + 2);
        }
        piVar5[0x48] = uVar8;
        iVar3 = ssl_session_strndup(piVar5 + 0x6e,*(undefined8 *)(piVar4 + 0x22));
        if (iVar3 != 0) {
          piVar5[0x74] = piVar4[0x24];
          piVar5[0x67] = piVar4[0x26];
          CRYPTO_free(*(undefined8 *)(piVar5 + 0x68),"ssl\\ssl_asn1.c",0x167);
          if (*(longlong *)(piVar4 + 0x28) == 0) {
            piVar5[0x68] = 0;
            piVar5[0x69] = 0;
            piVar5[0x6a] = 0;
            piVar5[0x6b] = 0;
          }
          else {
            *(undefined8 *)(piVar5 + 0x68) = *(undefined8 *)(*(longlong *)(piVar4 + 0x28) + 8);
            *(longlong *)(piVar5 + 0x6a) = (longlong)**(int **)(piVar4 + 0x28);
            *(undefined8 *)(*(longlong *)(piVar4 + 0x28) + 8) = 0;
          }
          *(char *)(piVar5 + 0x6c) = (char)piVar4[0x2a];
          CRYPTO_free(*(undefined8 *)(piVar5 + 0x70),"ssl\\ssl_asn1.c",0x173);
          if (*(longlong *)(piVar4 + 0x2c) == 0) {
            piVar5[0x70] = 0;
            piVar5[0x71] = 0;
            piVar5[0x72] = 0;
            piVar5[0x73] = 0;
          }
          else {
            *(undefined8 *)(piVar5 + 0x70) = *(undefined8 *)(*(longlong *)(piVar4 + 0x2c) + 8);
            *(longlong *)(piVar5 + 0x72) = (longlong)**(int **)(piVar4 + 0x2c);
            *(undefined8 *)(*(longlong *)(piVar4 + 0x2c) + 8) = 0;
          }
          ASN1_item_free(piVar4,&DAT_145d56600);
          if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
            *param_1 = (longlong)piVar5;
          }
          *param_2 = local_res10;
          return piVar5;
        }
        goto LAB_143cd371f;
      }
      uVar10 = 0x114;
      uVar9 = 0x89;
    }
    else {
      uVar10 = 0x10d;
      uVar9 = 0x103;
    }
  }
  else {
    uVar10 = 0x106;
    uVar9 = 0xfe;
  }
LAB_143cd371a:
  ERR_put_error(0x14,0x67,uVar9,"ssl\\ssl_asn1.c",uVar10,uVar11);
LAB_143cd371f:
  ASN1_item_free(piVar4,&DAT_145d56600);
  if ((param_1 == (longlong *)0x0) || ((int *)*param_1 != piVar5)) {
    SSL_SESSION_free(piVar5);
  }
  return (int *)0x0;
}



// FUNCTION 143cd3ad0 i2d_SSL_SESSION body=918 status=ok
// SIG undefined i2d_SSL_SESSION(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 i2d_SSL_SESSION(undefined4 *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined2 uVar6;
  char *pcVar7;
  undefined1 local_res8 [8];
  undefined1 local_res18;
  undefined1 local_res19;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 *local_1f0;
  undefined4 *local_1e8;
  undefined4 *local_1e0;
  undefined4 *local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined4 *local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a4 [4];
  uint *local_1a0;
  ulonglong local_198;
  undefined4 local_190;
  undefined4 *local_188;
  uint *local_180;
  uint *local_178;
  uint *local_170;
  ulonglong local_168;
  undefined4 local_160;
  undefined4 *local_158;
  uint local_150;
  undefined4 *local_148;
  undefined4 local_138 [2];
  undefined1 *local_130;
  undefined4 local_128;
  undefined4 local_120 [2];
  undefined1 *local_118;
  undefined4 local_110;
  undefined4 local_108 [2];
  undefined4 *local_100;
  undefined4 local_f8;
  undefined4 local_f0 [2];
  undefined4 *local_e8;
  undefined4 local_e0;
  undefined4 local_d8 [2];
  undefined4 *local_d0;
  undefined4 local_c8;
  uint local_c0 [2];
  char *local_b8;
  undefined4 local_b0;
  undefined4 local_a8 [2];
  longlong local_a0;
  undefined4 local_98;
  uint local_90 [2];
  char *local_88;
  undefined4 local_80;
  uint local_78 [2];
  char *local_70;
  undefined4 local_68;
  uint local_60 [2];
  char *local_58;
  undefined4 local_50;
  undefined4 local_48 [2];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_30 [2];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = 0x143cd3aea;
  if ((param_1 == (undefined4 *)0x0) ||
     ((lVar2 = *(longlong *)(param_1 + 0x4a), lVar2 == 0 && (param_1[0x4c] == 0)))) {
    uVar5 = 0;
  }
  else {
    local_1e8 = (undefined4 *)0x0;
    local_1d0 = 0;
    _guard_xfg_dispatch_icall_nop(local_1a4,0,100);
    local_1f4 = *param_1;
    local_1f8 = 1;
    if (lVar2 == 0) {
      uVar6 = (undefined2)param_1[0x4c];
    }
    else {
      uVar6 = (undefined2)*(undefined4 *)(lVar2 + 0x18);
    }
    local_res19 = (undefined1)uVar6;
    local_res18 = (undefined1)((ushort)uVar6 >> 8);
    local_130 = &local_res18;
    local_1f0 = local_138;
    local_138[0] = 2;
    uVar4 = 0;
    local_128 = 0;
    if (param_1[0x48] != 0) {
      local_res8[0] = (undefined1)param_1[0x48];
      local_118 = local_res8;
      local_1e8 = local_120;
      local_120[0] = 1;
      local_110 = 0;
    }
    pcVar3 = *(char **)(param_1 + 0x56);
    local_100 = param_1 + 0x14;
    local_108[0] = param_1[2];
    local_1e0 = local_108;
    local_e8 = param_1 + 0x26;
    local_f0[0] = param_1[0x24];
    local_1d8 = local_f0;
    local_d0 = param_1 + 0x30;
    local_d8[0] = param_1[0x2e];
    local_1b0 = local_d8;
    local_1c8 = (longlong)(int)param_1[0x47];
    local_1c0 = (longlong)(int)param_1[0x46];
    local_1a8 = param_1[0x44];
    local_1b8 = *(undefined8 *)(param_1 + 0x3e);
    local_f8 = 0;
    local_e0 = 0;
    local_c8 = 0;
    if (pcVar3 == (char *)0x0) {
      local_1a0 = (uint *)0x0;
    }
    else {
      cVar1 = *pcVar3;
      pcVar7 = pcVar3;
      for (; (cVar1 != '\0' && (uVar4 < 0x80000000)); uVar4 = uVar4 + 1) {
        pcVar7 = pcVar7 + 1;
        cVar1 = *pcVar7;
      }
      local_c0[0] = uVar4 & 0x7fffffff;
      local_1a0 = local_c0;
      local_b0 = 0;
      local_b8 = pcVar3;
    }
    if (*(longlong *)(param_1 + 0x60) != 0) {
      local_a8[0] = param_1[0x62];
      local_188 = local_a8;
      local_98 = 0;
      local_a0 = *(longlong *)(param_1 + 0x60);
    }
    if (param_1[100] != 0) {
      local_198 = (ulonglong)(uint)param_1[100];
    }
    pcVar3 = *(char **)(param_1 + 0x38);
    local_190 = param_1[0x65];
    uVar4 = 0;
    if (pcVar3 == (char *)0x0) {
      local_180 = (uint *)0x0;
    }
    else {
      cVar1 = *pcVar3;
      pcVar7 = pcVar3;
      for (local_90[0] = uVar4; (cVar1 != '\0' && (local_90[0] < 0x80000000));
          local_90[0] = local_90[0] + 1) {
        pcVar7 = pcVar7 + 1;
        cVar1 = *pcVar7;
      }
      local_90[0] = local_90[0] & 0x7fffffff;
      local_180 = local_90;
      local_80 = 0;
      local_88 = pcVar3;
    }
    pcVar3 = *(char **)(param_1 + 0x3a);
    if (pcVar3 == (char *)0x0) {
      local_178 = (uint *)0x0;
    }
    else {
      cVar1 = *pcVar3;
      pcVar7 = pcVar3;
      for (local_78[0] = uVar4; (cVar1 != '\0' && (local_78[0] < 0x80000000));
          local_78[0] = local_78[0] + 1) {
        pcVar7 = pcVar7 + 1;
        cVar1 = *pcVar7;
      }
      local_78[0] = local_78[0] & 0x7fffffff;
      local_178 = local_78;
      local_68 = 0;
      local_70 = pcVar3;
    }
    pcVar3 = *(char **)(param_1 + 0x6e);
    if (pcVar3 == (char *)0x0) {
      local_170 = (uint *)0x0;
    }
    else {
      cVar1 = *pcVar3;
      pcVar7 = pcVar3;
      for (; (cVar1 != '\0' && (uVar4 < 0x80000000)); uVar4 = uVar4 + 1) {
        pcVar7 = pcVar7 + 1;
        cVar1 = *pcVar7;
      }
      local_60[0] = uVar4 & 0x7fffffff;
      local_170 = local_60;
      local_50 = 0;
      local_58 = pcVar3;
    }
    local_168 = (ulonglong)(uint)param_1[0x74];
    local_160 = param_1[0x67];
    if (*(longlong *)(param_1 + 0x68) == 0) {
      local_158 = (undefined4 *)0x0;
    }
    else {
      local_48[0] = param_1[0x6a];
      local_158 = local_48;
      local_38 = 0;
      local_40 = *(longlong *)(param_1 + 0x68);
    }
    local_150 = (uint)*(byte *)(param_1 + 0x6c);
    if (*(longlong *)(param_1 + 0x70) == 0) {
      local_148 = (undefined4 *)0x0;
    }
    else {
      local_30[0] = param_1[0x72];
      local_148 = local_30;
      local_20 = local_20 & 0xffffffff00000000;
      local_28 = *(longlong *)(param_1 + 0x70);
    }
    uVar5 = ASN1_item_i2d(&local_1f8,param_2,&DAT_145d56600);
  }
  return uVar5;
}



// FUNCTION 143cd3e70 ssl_session_memcpy body=107 status=ok
// SIG undefined ssl_session_memcpy(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 ssl_session_memcpy(void *param_1,longlong *param_2,int *param_3,int param_4)

{
  int iVar1;
  
  if (param_3 == (int *)0x0) {
    *param_2 = 0;
    return 1;
  }
  iVar1 = *param_3;
  if ((-1 < iVar1) && (iVar1 <= param_4)) {
    _guard_xfg_dispatch_icall_nop(param_1,*(void **)(param_3 + 2),(longlong)iVar1);
    *param_2 = (longlong)*param_3;
    return 1;
  }
  return 0;
}



// FUNCTION 143cd3ee0 ssl_session_strndup body=118 status=ok
// SIG undefined ssl_session_strndup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_session_strndup(longlong *param_1,int *param_2)

{
  longlong lVar1;
  
  CRYPTO_free(*param_1,"ssl\\ssl_asn1.c",0xd5);
  *param_1 = 0;
  if (param_2 != (int *)0x0) {
    lVar1 = CRYPTO_strndup(*(undefined8 *)(param_2 + 2),(longlong)*param_2,"ssl\\ssl_asn1.c",0xd9);
    *param_1 = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 143cd3f60 tls13_enc body=1279 status=ok
// SIG undefined tls13_enc(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 tls13_enc(longlong param_1,undefined4 *param_2,longlong param_3,int param_4)

{
  size_t _Size;
  byte *pbVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_e8 [32];
  byte *local_c8;
  int local_c0;
  int local_b8;
  uint local_b4;
  int local_b0 [2];
  void *local_a8;
  ulonglong local_a0;
  byte *local_98;
  longlong local_90;
  undefined1 local_88 [40];
  byte abStack_60 [24];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if (param_3 != 1) {
    local_c0 = 0x29;
    local_c8 = (byte *)0x145d567d0;
    ossl_statem_fatal(param_1,0x50,0x261,0x44);
    return 0xffffffff;
  }
  if (param_4 == 0) {
    lVar7 = *(longlong *)(param_1 + 0x430);
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x460);
  }
  lVar6 = 0x16a0;
  if (param_4 == 0) {
    lVar6 = 0x1698;
  }
  local_98 = (byte *)(lVar6 + param_1);
  lVar6 = 0x468;
  if (param_4 == 0) {
    lVar6 = 0x438;
  }
  local_a8 = (void *)(lVar6 + param_1);
  if ((lVar7 == 0) || (param_2[1] == 0x15)) {
    _guard_xfg_dispatch_icall_nop
              (*(void **)(param_2 + 8),*(void **)(param_2 + 10),*(size_t *)(param_2 + 2));
    *(undefined8 *)(param_2 + 10) = *(undefined8 *)(param_2 + 8);
    return 1;
  }
  iVar4 = EVP_CIPHER_CTX_iv_length(lVar7);
  local_a0 = (ulonglong)iVar4;
  if (*(int *)(param_1 + 0x84) - 3U < 2) {
    lVar6 = *(longlong *)(param_1 + 0x508);
    if (((lVar6 == 0) || (*(int *)(lVar6 + 0x19c) == 0)) &&
       ((lVar6 = *(longlong *)(param_1 + 0x510), lVar6 == 0 || (*(int *)(lVar6 + 0x19c) == 0)))) {
      local_c0 = 0x4d;
      goto LAB_143cd440f;
    }
    uVar5 = *(uint *)(*(longlong *)(lVar6 + 0x128) + 0x24);
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238);
    if (lVar6 == 0) {
      local_c0 = 0x59;
LAB_143cd440f:
      local_c8 = (byte *)0x145d567d0;
      ossl_statem_fatal(param_1,0x50,0x261,0x44);
      return 0xffffffff;
    }
    uVar5 = *(uint *)(lVar6 + 0x24);
  }
  local_b4 = uVar5 & 0x3c000;
  lVar6 = 8;
  if (local_b4 == 0) {
    if (((uVar5 & 0x3000) == 0) && ((uVar5 >> 0x13 & 1) == 0)) {
      local_c0 = 0x70;
      goto LAB_143cd43e2;
    }
    uVar8 = 0x10;
LAB_143cd4122:
    if (param_4 == 0) goto LAB_143cd4127;
  }
  else {
    uVar2 = 8;
    if ((uVar5 & 0x30000) == 0) {
      uVar2 = 0x10;
    }
    uVar8 = (ulonglong)uVar2;
    if (param_4 != 0) {
      iVar4 = EVP_CIPHER_CTX_ctrl(lVar7,0x11,uVar8,0);
      if (iVar4 < 1) {
        local_c0 = 0x67;
        goto LAB_143cd43e2;
      }
      goto LAB_143cd4122;
    }
LAB_143cd4127:
    if (*(ulonglong *)(param_2 + 2) < uVar8 + 1) {
      return 0;
    }
    *(ulonglong *)(param_2 + 2) = *(ulonglong *)(param_2 + 2) - uVar8;
  }
  uVar3 = local_a0;
  if (local_a0 < 8) {
    local_c0 = 0x82;
  }
  else {
    _Size = local_a0 - 8;
    _guard_xfg_dispatch_icall_nop(abStack_60 + 8,local_a8,_Size);
    abStack_60[uVar3] = *local_98 ^ *(byte *)((longlong)local_a8 + _Size);
    abStack_60[uVar3 + 1] = local_98[1] ^ *(byte *)((longlong)local_a8 + (uVar3 - 7));
    abStack_60[uVar3 + 2] = local_98[2] ^ *(byte *)((longlong)local_a8 + (uVar3 - 6));
    abStack_60[uVar3 + 3] = local_98[3] ^ *(byte *)((longlong)local_a8 + (uVar3 - 5));
    abStack_60[uVar3 + 4] = local_98[4] ^ *(byte *)((longlong)local_a8 + (uVar3 - 4));
    abStack_60[uVar3 + 5] = local_98[5] ^ *(byte *)((longlong)local_a8 + (uVar3 - 3));
    abStack_60[uVar3 + 6] = local_98[6] ^ *(byte *)((longlong)local_a8 + (uVar3 - 2));
    abStack_60[uVar3 + 7] = local_98[7] ^ *(byte *)((longlong)local_a8 + (uVar3 - 1));
    do {
      pbVar1 = local_98 + lVar6 + -1;
      *pbVar1 = *pbVar1 + 1;
      if (*pbVar1 != 0) break;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    if (lVar6 == 0) {
      return 0xffffffff;
    }
    local_c8 = abStack_60 + 8;
    local_c0 = param_4;
    iVar4 = FUN_143cf75a0(lVar7,0,0,0);
    if (iVar4 < 1) {
      return 0xffffffff;
    }
    if ((param_4 == 0) &&
       (iVar4 = EVP_CIPHER_CTX_ctrl(lVar7,0x11,uVar8,
                                    *(longlong *)(param_2 + 8) + *(longlong *)(param_2 + 2)),
       iVar4 < 1)) {
      return 0xffffffff;
    }
    iVar4 = WPACKET_init_static_len(local_88,local_48,5);
    if ((((iVar4 == 0) || (iVar4 = WPACKET_put_bytes__(local_88,param_2[1],1), iVar4 == 0)) ||
        (iVar4 = WPACKET_put_bytes__(local_88,*param_2,2), iVar4 == 0)) ||
       (((iVar4 = WPACKET_put_bytes__(local_88,param_2[2] + (int)uVar8,2), iVar4 == 0 ||
         (iVar4 = WPACKET_get_total_written(local_88,&local_90), iVar4 == 0)) ||
        ((local_90 != 5 || (iVar4 = WPACKET_finish(local_88), iVar4 == 0)))))) {
      WPACKET_cleanup(local_88);
      return 0xffffffff;
    }
    if (local_b4 != 0) {
      local_c8 = (byte *)CONCAT44(local_c8._4_4_,param_2[2]);
      iVar4 = EVP_CipherUpdate(lVar7,0,&local_b8,0);
      if (iVar4 < 1) {
        return 0xffffffff;
      }
    }
    local_c8._0_4_ = 5;
    iVar4 = EVP_CipherUpdate(lVar7,0,&local_b8,local_48);
    if (iVar4 < 1) {
      return 0xffffffff;
    }
    local_c8 = (byte *)CONCAT44(local_c8._4_4_,param_2[2]);
    iVar4 = EVP_CipherUpdate(lVar7,*(undefined8 *)(param_2 + 8),&local_b8,
                             *(undefined8 *)(param_2 + 10));
    if (iVar4 < 1) {
      return 0xffffffff;
    }
    iVar4 = EVP_CipherFinal_ex(lVar7,(longlong)local_b8 + *(longlong *)(param_2 + 8),local_b0);
    if (iVar4 < 1) {
      return 0xffffffff;
    }
    if ((longlong)(local_b0[0] + local_b8) != *(longlong *)(param_2 + 2)) {
      return 0xffffffff;
    }
    if (param_4 == 0) {
      return 1;
    }
    iVar4 = EVP_CIPHER_CTX_ctrl(lVar7,0x10,uVar8,
                                *(longlong *)(param_2 + 8) + *(longlong *)(param_2 + 2));
    if (0 < iVar4) {
      *(ulonglong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + uVar8;
      return 1;
    }
    local_c0 = 0xbd;
  }
LAB_143cd43e2:
  local_c8 = (byte *)0x145d567d0;
  ossl_statem_fatal(param_1,0x50,0x261,0x44);
  return 0xffffffff;
}



// FUNCTION 143cd4460 SSL3_RECORD_clear body=65 status=ok
// SIG undefined SSL3_RECORD_clear(void)

void SSL3_RECORD_clear(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x30);
    do {
      puVar1[-6] = 0;
      puVar1[-5] = 0;
      puVar1[-4] = 0;
      puVar1[-3] = 0;
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = *puVar1;
      puVar1 = puVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143cd44b0 SSL3_RECORD_release body=98 status=ok
// SIG undefined SSL3_RECORD_release(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL3_RECORD_release(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x30);
    do {
      CRYPTO_free(*puVar1,"ssl\\record\\ssl3_record.c",0x37);
      *puVar1 = 0;
      puVar1 = puVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143cd4520 SSL3_RECORD_set_seq_num body=8 status=ok
// SIG undefined SSL3_RECORD_set_seq_num(void)

void SSL3_RECORD_set_seq_num(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  return;
}



// FUNCTION 143cd4530 dtls1_get_record body=756 status=ok
// SIG undefined dtls1_get_record(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dtls1_get_record(uint *param_1)

{
  ulonglong *puVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  byte *pbVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int local_res8 [2];
  ulonglong local_res10;
  undefined8 uVar10;
  
  uVar10 = 0x143cd4546;
  iVar6 = dtls1_process_buffered_records();
  do {
    if (iVar6 == 0) {
      return 0xffffffff;
    }
    iVar6 = dtls1_retrieve_buffered_record(param_1,*(longlong *)(param_1 + 0x5ac) + 0x30);
    if (iVar6 != 0) {
      return 1;
    }
    puVar1 = (ulonglong *)(param_1 + 0x594);
    if ((param_1[0x203] == 0xf1) && (0xc < *puVar1)) {
LAB_143cd46ea:
      uVar9 = *(ulonglong *)(param_1 + 0x354);
      if ((*puVar1 - 0xd < uVar9) &&
         ((iVar6 = ssl3_read_n(param_1,uVar9,uVar9,1,1,&local_res10), iVar6 < 1 ||
          (local_res10 != uVar9)))) {
LAB_143cd47e1:
        iVar6 = ossl_statem_in_error(param_1);
        if (iVar6 != 0) {
          return 0xffffffff;
        }
      }
      else {
        param_1[0x203] = 0xf0;
        lVar8 = dtls1_get_bitmap(param_1,param_1 + 0x352,local_res8);
        if (lVar8 == 0) {
          param_1[0x354] = 0;
          param_1[0x355] = 0;
          *puVar1 = 0;
          goto LAB_143cd480b;
        }
        iVar6 = dtls1_record_replay_check(param_1,lVar8);
        if (iVar6 != 0) {
          if (*(longlong *)(param_1 + 0x354) == 0) {
            param_1[0x360] = 1;
            goto LAB_143cd480b;
          }
          if (local_res8[0] == 0) {
            iVar6 = dtls1_process_record(param_1,lVar8);
            if (iVar6 != 0) {
              return 1;
            }
            goto LAB_143cd47e1;
          }
          iVar6 = FSlateAccessibleWidget::GetId();
          if (((iVar6 != 0) || (iVar6 = ossl_statem_get_in_handshake(param_1), iVar6 != 0)) &&
             (iVar6 = dtls1_buffer_record(param_1,*(longlong *)(param_1 + 0x5ac) + 0x20,
                                          param_1 + 0x362), iVar6 < 0)) {
            return 0xffffffff;
          }
        }
      }
      param_1[0x354] = 0;
      param_1[0x355] = 0;
      param_1[0x360] = 1;
      *puVar1 = 0;
    }
    else {
      uVar7 = ssl3_read_n(param_1,0xd,*(undefined8 *)(param_1 + 0x20c),0,1,&local_res10);
      if ((int)uVar7 < 1) {
        return uVar7;
      }
      if (*puVar1 == 0xd) {
        pbVar5 = *(byte **)(param_1 + 0x592);
        param_1[0x203] = 0xf1;
        if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
          (**(code **)(param_1 + 0x2e))
                    (0,0,0x100,pbVar5,0xd,param_1,*(undefined8 *)(param_1 + 0x30),uVar10);
        }
        param_1[0x353] = (uint)*pbVar5;
        bVar2 = pbVar5[2];
        bVar3 = pbVar5[1];
        param_1[0x361] = (uint)CONCAT11(pbVar5[3],pbVar5[4]);
        *(undefined4 *)((longlong)param_1 + 0x169a) = *(undefined4 *)(pbVar5 + 5);
        *(undefined2 *)((longlong)param_1 + 0x169e) = *(undefined2 *)(pbVar5 + 9);
        uVar9 = (ulonglong)CONCAT11(pbVar5[0xb],pbVar5[0xc]);
        param_1[0x360] = 0;
        *(ulonglong *)(param_1 + 0x354) = uVar9;
        if ((((param_1[0x178] != 0) || (param_1[0x353] == 0x15)) ||
            ((uint)CONCAT11(bVar3,bVar2) == *param_1)) &&
           ((((((uint)CONCAT11(bVar3,bVar2) ^ *param_1) & 0xff00) == 0 && (uVar9 < 0x4541)) &&
            ((*(longlong *)(param_1 + 0x142) == 0 ||
             ((cVar4 = *(char *)(*(longlong *)(param_1 + 0x142) + 0x1b0), 3 < (byte)(cVar4 - 1U) ||
              (uVar9 <= (uint)(0x200 << (cVar4 - 1U & 0x1f)))))))))) goto LAB_143cd46ea;
        param_1[0x354] = 0;
        param_1[0x355] = 0;
        param_1[0x360] = 1;
        *puVar1 = 0;
      }
      else {
        *puVar1 = 0;
      }
    }
LAB_143cd480b:
    iVar6 = dtls1_process_buffered_records(param_1);
  } while( true );
}



// FUNCTION 143cd4830 dtls1_process_record body=1208 status=ok
// SIG undefined dtls1_process_record(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 dtls1_process_record(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined1 auStack_e8 [32];
  char *local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [64];
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar7 = *(longlong *)(param_1 + 0x508);
  lVar5 = *(longlong *)(param_1 + 0x1648) + 0xd;
  *(longlong *)(param_1 + 0xd70) = lVar5;
  if (0x4540 < *(ulonglong *)(param_1 + 0xd50)) {
    local_c0 = 0x666;
    local_c8 = "ssl\\record\\ssl3_record.c";
    ossl_statem_fatal(param_1,0x16,0x101);
    return 0;
  }
  *(longlong *)(param_1 + 0xd68) = lVar5;
  *(ulonglong *)(param_1 + 0xd58) = *(ulonglong *)(param_1 + 0xd50);
  if (((**(uint **)(param_1 + 0xa8) & 0x100) != 0) && (*(longlong *)(param_1 + 0x448) != 0)) {
    uVar6 = EVP_MD_CTX_md();
    iVar2 = EVP_MD_size(uVar6);
    uVar10 = (ulonglong)iVar2;
    if (0x40 < uVar10) {
      uVar6 = 0x50;
      local_c0 = 0x673;
      uVar12 = 0x44;
LAB_143cd49bb:
      local_c8 = "ssl\\record\\ssl3_record.c";
      ossl_statem_fatal(param_1,uVar6,0x101,uVar12);
      return 0;
    }
    if (*(ulonglong *)(param_1 + 0xd58) < uVar10) {
      local_c0 = 0x678;
      local_c8 = "ssl\\record\\ssl3_record.c";
      ossl_statem_fatal(param_1,0x32,0x101);
      return 0;
    }
    *(longlong *)(param_1 + 0xd50) = *(longlong *)(param_1 + 0xd50) - uVar10;
    lVar5 = *(longlong *)(param_1 + 0xd50);
    lVar1 = *(longlong *)(param_1 + 0xd68);
    iVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 8))
                      (param_1,param_1 + 0xd48,local_b8,0);
    if ((iVar2 == 0) || (iVar2 = FUN_14004ffa0(local_b8,lVar5 + lVar1,uVar10), iVar2 != 0)) {
      local_c0 = 0x680;
      uVar6 = 0x14;
      uVar12 = 0x119;
      goto LAB_143cd49bb;
    }
  }
  iVar2 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 8) + 0xc0))(param_1,param_1 + 0xd48,1)
  ;
  if (iVar2 == 0) {
    iVar2 = ossl_statem_in_error(param_1);
    if (iVar2 != 0) {
      return 0;
    }
    goto LAB_143cd4baf;
  }
  if ((((lVar7 != 0) && ((**(uint **)(param_1 + 0xa8) & 0x100) == 0)) &&
      (*(longlong *)(param_1 + 0x430) != 0)) &&
     (lVar7 = EVP_MD_CTX_md(*(undefined8 *)(param_1 + 0x448)), lVar7 != 0)) {
    uVar6 = EVP_MD_CTX_md(*(undefined8 *)(param_1 + 0x448));
    iVar3 = EVP_MD_size(uVar6);
    if (iVar3 < 0) {
      uVar8 = 0x50;
      local_c0 = 0x6ab;
      uVar11 = 6;
      goto LAB_143cd4c3d;
    }
    uVar10 = (ulonglong)iVar3;
    if (0x40 < uVar10) {
      uVar8 = 0x50;
      local_c0 = 0x6b1;
      uVar11 = 0x44;
      goto LAB_143cd4c3d;
    }
    if (uVar10 <= *(ulonglong *)(param_1 + 0xd58)) {
      uVar6 = FHardwareCursor::GetHandle(*(undefined8 *)(param_1 + 0x430));
      uVar4 = TResourceArray<unsigned_char,0>::GetResourceDataSize(uVar6);
      if (((uVar4 & 0xf0007) != 2) || (uVar10 + 1 <= *(ulonglong *)(param_1 + 0xd58))) {
        uVar6 = FHardwareCursor::GetHandle(*(undefined8 *)(param_1 + 0x430));
        uVar4 = TResourceArray<unsigned_char,0>::GetResourceDataSize(uVar6);
        if ((uVar4 & 0xf0007) == 2) {
          puVar9 = local_78;
          iVar3 = ssl3_cbc_copy_mac(local_78,param_1 + 0xd48,uVar10);
          if (iVar3 == 0) {
            local_c0 = 0x6ce;
            uVar8 = 0x50;
            uVar11 = 0x44;
            goto LAB_143cd4c3d;
          }
          *(longlong *)(param_1 + 0xd50) = *(longlong *)(param_1 + 0xd50) - uVar10;
        }
        else {
          *(longlong *)(param_1 + 0xd50) = *(longlong *)(param_1 + 0xd50) - uVar10;
          puVar9 = (undefined1 *)(*(longlong *)(param_1 + 0xd50) + *(longlong *)(param_1 + 0xd68));
        }
        iVar3 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 8))
                          (param_1,param_1 + 0xd48,local_b8,0);
        if (((iVar3 == 0) || (puVar9 == (undefined1 *)0x0)) ||
           (iVar3 = FUN_14004ffa0(local_b8,puVar9,uVar10), iVar3 != 0)) {
          iVar2 = -1;
        }
        if (uVar10 + 0x4400 < *(ulonglong *)(param_1 + 0xd50)) goto LAB_143cd4baf;
        goto LAB_143cd4baa;
      }
    }
    uVar8 = 0x32;
    local_c0 = 0x6c0;
    uVar11 = 0xa0;
LAB_143cd4c3d:
    local_c8 = "ssl\\record\\ssl3_record.c";
    ossl_statem_fatal(param_1,uVar8,0x101,uVar11);
    return 0;
  }
LAB_143cd4baa:
  if (iVar2 < 0) {
LAB_143cd4baf:
    *(undefined8 *)(param_1 + 0xd50) = 0;
    *(undefined8 *)(param_1 + 0x1650) = 0;
    return 0;
  }
  if (*(longlong *)(param_1 + 0x458) != 0) {
    if (0x4400 < *(ulonglong *)(param_1 + 0xd50)) {
      local_c0 = 0x6ef;
      local_c8 = "ssl\\record\\ssl3_record.c";
      ossl_statem_fatal(param_1,0x16,0x101);
      return 0;
    }
    iVar2 = ssl3_do_uncompress(param_1,param_1 + 0xd48);
    if (iVar2 == 0) {
      local_c0 = 0x6f4;
      uVar8 = 0x1e;
      uVar11 = 0x6b;
      goto LAB_143cd4c3d;
    }
  }
  if (0x4000 < *(ulonglong *)(param_1 + 0xd50)) {
    local_c0 = 0x6fb;
    local_c8 = "ssl\\record\\ssl3_record.c";
    ossl_statem_fatal(param_1,0x16,0x101);
    return 0;
  }
  *(undefined8 *)(param_1 + 0xd60) = 0;
  *(undefined8 *)(param_1 + 0x1650) = 0;
  dtls1_record_bitmap_update(param_1,param_2);
  return 1;
}



// FUNCTION 143cd4cf0 early_data_count_ok body=267 status=ok
// SIG undefined early_data_count_ok(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 early_data_count_ok(longlong param_1,longlong param_2,int param_3,int param_4)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x508);
  if (*(int *)(param_1 + 0x38) == 0) {
    if ((*(int *)(lVar1 + 0x19c) == 0) &&
       ((lVar1 = *(longlong *)(param_1 + 0x510), lVar1 == 0 || (*(int *)(lVar1 + 0x19c) == 0)))) {
      ossl_statem_fatal(param_1,0x50,0x214,0x44,"ssl\\record\\ssl3_record.c",0x100000076);
      return 0;
    }
    uVar2 = *(uint *)(lVar1 + 0x19c);
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x16e4);
    if ((*(int *)(param_1 + 0x6e8) == 2) && (*(uint *)(lVar1 + 0x19c) <= uVar2)) {
      uVar2 = *(uint *)(lVar1 + 0x19c);
    }
  }
  if (uVar2 == 0) {
    uVar4 = 0x100000086;
  }
  else {
    if (param_2 + (ulonglong)*(uint *)(param_1 + 0x16e8) <= (ulonglong)(uVar2 + param_3)) {
      *(uint *)(param_1 + 0x16e8) = *(uint *)(param_1 + 0x16e8) + (int)param_2;
      return 1;
    }
    uVar4 = 0x10000008f;
  }
  uVar3 = 10;
  if (param_4 != 0) {
    uVar3 = 0x50;
  }
  ossl_statem_fatal(param_1,uVar3,0x214,0xa4,"ssl\\record\\ssl3_record.c",uVar4);
  return 0;
}



// FUNCTION 143cd4e00 n_ssl3_mac body=787 status=ok
// SIG undefined n_ssl3_mac(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 n_ssl3_mac(longlong param_1,longlong param_2,undefined1 *param_3,int param_4)

{
  void *_Src;
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  size_t _Size;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  void *local_d0;
  size_t local_c8;
  undefined1 local_c0;
  undefined1 local_b8 [8];
  ulonglong local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined1 auStack_90 [72];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143cd4e15;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  if (param_4 == 0) {
    uVar11 = *(undefined8 *)(param_1 + 0x448);
    lVar8 = 0x1698;
    lVar10 = 0x10;
  }
  else {
    uVar11 = *(undefined8 *)(param_1 + 0x478);
    lVar8 = 0x16a0;
    lVar10 = 0x58;
  }
  _Src = (void *)(lVar10 + *(longlong *)(param_1 + 0xa8));
  puVar1 = (undefined8 *)(param_1 + lVar8);
  uVar9 = EVP_MD_CTX_md(uVar11);
  iVar6 = EVP_MD_size(uVar9);
  if (-1 < iVar6) {
    local_b0 = (ulonglong)iVar6;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_b0;
    auVar3 = ZEXT816(0) << 0x40 | ZEXT816(0x30);
    _Size = SUB168(auVar3 / auVar2,0) * local_b0;
    if (param_4 == 0) {
      uVar9 = FHardwareCursor::GetHandle(*(undefined8 *)(param_1 + 0x430),SUB168(auVar3 % auVar2,0))
      ;
      uVar7 = TResourceArray<unsigned_char,0>::GetResourceDataSize(uVar9);
      if (((uVar7 & 0xf0007) == 2) &&
         (cVar5 = ssl3_cbc_record_digest_supported(uVar11), uVar4 = local_b0, cVar5 != '\0')) {
        _guard_xfg_dispatch_icall_nop(&local_98,_Src,local_b0);
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)&local_98 + uVar4),
                   "666666666666666666666666666666666666666666666666\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ssl\\record\\ssl3_record.c"
                   ,_Size);
        lVar10 = *(longlong *)(param_2 + 8);
        lVar8 = _Size + uVar4;
        *(undefined8 *)((longlong)&local_98 + lVar8) = *puVar1;
        auStack_90[lVar8] = *(undefined1 *)(param_2 + 4);
        local_e0 = lVar10 + uVar4;
        local_c0 = 1;
        auStack_90[lVar8 + 1] = (char)((ulonglong)lVar10 >> 8);
        local_d8 = *(undefined8 *)(param_2 + 0x10);
        local_c8 = uVar4;
        local_e8 = *(undefined8 *)(param_2 + 0x28);
        auStack_90[lVar8 + 2] = (char)lVar10;
        local_d0 = _Src;
        iVar6 = ssl3_cbc_digest_record(uVar11,param_3,&local_b0,&local_98);
        if (iVar6 < 1) {
          return 0;
        }
        goto LAB_143cd50d0;
      }
    }
    lVar8 = EVP_MD_CTX_new();
    if (lVar8 != 0) {
      local_b8[0] = *(undefined1 *)(param_2 + 4);
      *param_3 = *(undefined1 *)(param_2 + 9);
      param_3[1] = *(undefined1 *)(param_2 + 8);
      iVar6 = EVP_MD_CTX_copy_ex(lVar8,uVar11);
      if (((((0 < iVar6) && (iVar6 = EVP_DigestUpdate(lVar8,_Src,local_b0), 0 < iVar6)) &&
           (iVar6 = EVP_DigestUpdate(lVar8,
                                     "666666666666666666666666666666666666666666666666\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ssl\\record\\ssl3_record.c"
                                     ,_Size), 0 < iVar6)) &&
          (((iVar6 = EVP_DigestUpdate(lVar8,puVar1,8), 0 < iVar6 &&
            (iVar6 = EVP_DigestUpdate(lVar8,local_b8,1), 0 < iVar6)) &&
           ((iVar6 = EVP_DigestUpdate(lVar8,param_3,2), 0 < iVar6 &&
            ((iVar6 = EVP_DigestUpdate(lVar8,*(undefined8 *)(param_2 + 0x28),
                                       *(undefined8 *)(param_2 + 8)), 0 < iVar6 &&
             (iVar6 = EVP_DigestFinal_ex(lVar8,param_3,0), 0 < iVar6)))))))) &&
         ((iVar6 = EVP_MD_CTX_copy_ex(lVar8,uVar11), 0 < iVar6 &&
          ((((iVar6 = EVP_DigestUpdate(lVar8,_Src,local_b0), 0 < iVar6 &&
             (iVar6 = EVP_DigestUpdate(lVar8,
                                       "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ssl\\record\\ssl3_record.c"
                                       ,_Size), 0 < iVar6)) &&
            (iVar6 = EVP_DigestUpdate(lVar8,param_3,local_b0), 0 < iVar6)) &&
           (iVar6 = EVP_DigestFinal_ex(lVar8,param_3,local_a8), 0 < iVar6)))))) {
        EVP_MD_CTX_free(lVar8);
LAB_143cd50d0:
        ssl3_record_sequence_update(puVar1);
        return 1;
      }
      EVP_MD_CTX_free(lVar8);
    }
  }
  return 0;
}



// FUNCTION 143cd5120 ssl3_cbc_copy_mac body=473 status=ok
// SIG undefined ssl3_cbc_copy_mac(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 ssl3_cbc_copy_mac(longlong param_1,longlong param_2,size_t param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  byte *_Dst;
  undefined1 auStack_108 [32];
  ulonglong local_e8;
  longlong local_d8;
  byte local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  uVar10 = 0;
  uVar8 = *(ulonglong *)(param_2 + 0x10);
  local_e8 = *(longlong *)(param_2 + 8) - param_3;
  if ((uVar8 < param_3) || (0x40 < param_3)) {
    uVar4 = 0;
  }
  else {
    _Dst = local_c8 + (-((int)&stack0x00000010 + -0xd8) & 0x3f);
    uVar9 = uVar10;
    if (param_3 + 0x100 < uVar8) {
      uVar9 = (uVar8 - param_3) - 0x100;
    }
    local_d8 = param_1;
    _guard_xfg_dispatch_icall_nop(_Dst,0,param_3);
    uVar7 = uVar10;
    if (uVar9 < uVar8) {
      lVar1 = *(longlong *)(param_2 + 0x20);
      uVar2 = *(ulonglong *)(param_2 + 8);
      uVar11 = uVar10;
      uVar12 = uVar10;
      do {
        pbVar5 = (byte *)(lVar1 + uVar9);
        uVar3 = (longlong)((uVar9 ^ local_e8) - 1 & ~(uVar9 ^ local_e8)) >> 0x3f;
        uVar6 = ((longlong)pbVar5 - (lVar1 + uVar2) ^ uVar2 | uVar9 ^ uVar2) ^ uVar9;
        uVar7 = uVar7 | uVar3 & uVar11;
        uVar9 = uVar9 + 1;
        uVar12 = (uVar12 | uVar3) & (longlong)uVar6 >> 0x3f;
        _Dst[uVar11] = _Dst[uVar11] | (byte)uVar12 & *pbVar5;
        uVar11 = uVar11 + 1;
        uVar11 = uVar11 & (longlong)((uVar11 - param_3 ^ param_3 | param_3 ^ uVar11) ^ uVar11) >>
                          0x3f;
        param_1 = local_d8;
      } while (uVar9 < uVar8);
    }
    if (param_3 != 0) {
      do {
        uVar8 = uVar7 + 1;
        *(byte *)(param_1 + uVar10) = _Dst[uVar7];
        uVar10 = uVar10 + 1;
        uVar7 = uVar8 & (longlong)((uVar8 - param_3 ^ param_3 | param_3 ^ uVar8) ^ uVar8) >> 0x3f;
      } while (uVar10 < param_3);
    }
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 143cd5300 ssl3_do_compress body=89 status=ok
// SIG undefined ssl3_do_compress(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_do_compress(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = COMP_compress_block(*(undefined8 *)(param_1 + 0x450),*(undefined8 *)(param_2 + 0x20),
                              *(int *)(param_2 + 8) + 0x400,*(undefined8 *)(param_2 + 0x28),
                              *(int *)(param_2 + 8),0x143cd530c);
  if (iVar1 < 0) {
    return 0;
  }
  *(longlong *)(param_2 + 8) = (longlong)iVar1;
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_2 + 0x20);
  return 1;
}



// FUNCTION 143cd5360 ssl3_do_uncompress body=145 status=ok
// SIG undefined ssl3_do_uncompress(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_do_uncompress(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143cd5370;
  lVar2 = *(longlong *)(param_2 + 0x30);
  if (lVar2 == 0) {
    lVar2 = CRYPTO_malloc(0x4540,"ssl\\record\\ssl3_record.c",799);
    *(longlong *)(param_2 + 0x30) = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
  }
  iVar1 = COMP_expand_block(*(undefined8 *)(param_1 + 0x458),lVar2,0x4000,
                            *(undefined8 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 8),uVar3);
  if (iVar1 < 0) {
    return 0;
  }
  *(longlong *)(param_2 + 8) = (longlong)iVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_2 + 0x30);
  return 1;
}



// FUNCTION 143cd5400 ssl3_enc body=559 status=ok
// SIG undefined ssl3_enc(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

uint ssl3_enc(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  size_t _Size;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  
  uVar11 = 1;
  lVar7 = 0;
  if (param_3 != 1) {
    return 0;
  }
  if (param_4 == 0) {
    lVar4 = *(longlong *)(param_1 + 0x430);
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x460);
  }
  lVar3 = lVar7;
  if (lVar4 != 0) {
    uVar11 = 1;
    lVar3 = FHardwareCursor::GetHandle(lVar4);
  }
  if (((*(longlong *)(param_1 + 0x508) == 0) || (lVar4 == 0)) || (lVar3 == 0)) {
    _guard_xfg_dispatch_icall_nop
              (*(void **)(param_2 + 0x20),*(void **)(param_2 + 0x28),*(size_t *)(param_2 + 8));
    *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_2 + 0x20);
    return 1;
  }
  uVar9 = *(ulonglong *)(param_2 + 8);
  iVar2 = EVP_CIPHER_CTX_block_size(lVar4);
  uVar10 = (ulonglong)iVar2;
  if (uVar10 == 1) {
LAB_143cd54d3:
    if (param_4 != 0) goto LAB_143cd54f2;
  }
  else if (param_4 != 0) {
    _Size = uVar10 - uVar9 % uVar10;
    uVar9 = uVar9 + _Size;
    _guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(param_2 + 0x28) + *(longlong *)(param_2 + 8)),0,_Size);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + _Size;
    *(char *)((uVar9 - 1) + *(longlong *)(param_2 + 0x28)) = (char)_Size + -1;
    goto LAB_143cd54d3;
  }
  if ((uVar9 == 0) || (uVar9 % uVar10 != 0)) {
    return 0;
  }
LAB_143cd54f2:
  iVar2 = EVP_Cipher(lVar4,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28),
                     uVar9 & 0xffffffff);
  if (iVar2 < 1) {
    return 0xffffffff;
  }
  lVar4 = EVP_MD_CTX_md(*(undefined8 *)(param_1 + 0x448));
  if (lVar4 != 0) {
    uVar5 = EVP_MD_CTX_md(*(undefined8 *)(param_1 + 0x448));
    iVar2 = EVP_MD_size(uVar5);
    if (iVar2 < 0) {
      ossl_statem_fatal(param_1,0x50,0x260,0x44,"ssl\\record\\ssl3_record.c",CONCAT44(uVar11,0x392))
      ;
      return 0xffffffff;
    }
    lVar7 = (longlong)iVar2;
  }
  if ((uVar10 != 1) && (param_4 == 0)) {
    uVar9 = *(ulonglong *)(param_2 + 8);
    if (lVar7 + 1U <= uVar9) {
      uVar6 = (ulonglong)*(byte *)((uVar9 - 1) + *(longlong *)(param_2 + 0x20));
      uVar1 = uVar6 + lVar7 + 1U;
      uVar6 = uVar6 + 1;
      uVar10 = 0xffffffffffffffffU -
               ((longlong)((uVar9 - uVar1 ^ uVar1 | uVar9 ^ uVar1) ^ uVar9) >> 0x3f) &
               0xffffffffffffffffU -
               ((longlong)((uVar10 - uVar6 | uVar6 ^ uVar10) ^ uVar10) >> 0x3f);
      uVar8 = (uint)uVar10;
      *(ulonglong *)(param_2 + 8) = uVar9 - (uVar6 & uVar10);
      return uVar8 & 1 | ~uVar8;
    }
    return 0;
  }
  return 1;
}



// FUNCTION 143cd5630 ssl3_get_record body=3600 status=ok
// SIG undefined ssl3_get_record(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 ssl3_get_record(uint *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  char *_Str1;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  byte *pbVar16;
  ulonglong *puVar17;
  uint *puVar18;
  ulonglong *puVar19;
  byte *pbVar20;
  undefined1 *puVar21;
  byte *pbVar22;
  bool bVar23;
  undefined1 auStack_138 [32];
  char *local_118;
  uint *local_110;
  undefined8 local_108;
  ulonglong *local_f8;
  byte *local_e8;
  undefined8 uStack_e0;
  uint local_d8 [2];
  longlong local_d0;
  byte *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [64];
  undefined1 local_78 [64];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x143cd5652;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  pbVar22 = *(byte **)(param_1 + 0x17e);
  local_f8 = (ulonglong *)(param_1 + 0x354);
  local_d0 = *(longlong *)(param_1 + 0x142);
  pbVar20 = (byte *)0x0;
  puVar17 = local_f8;
  if (pbVar22 == (byte *)0x0) {
    pbVar22 = (byte *)0x1;
  }
  do {
    puVar19 = puVar17;
    if ((param_1[0x203] != 0xf1) || (*(ulonglong *)(param_1 + 0x594) < 5)) {
      local_110 = local_d8;
      local_118 = (char *)CONCAT44(local_118._4_4_,(uint)(pbVar20 == (byte *)0x0));
      uVar9 = ssl3_read_n(param_1,5,*(undefined8 *)(param_1 + 0x20c),0);
      if ((int)uVar9 < 1) {
        return uVar9;
      }
      uVar15 = *(ulonglong *)(param_1 + 0x594);
      pbVar16 = *(byte **)(param_1 + 0x592);
      param_1[0x203] = 0xf1;
      if (0x7fffffffffffffff < uVar15) {
        local_110 = (uint *)CONCAT44(local_110._4_4_,0xda);
        uVar9 = 0x44;
        goto LAB_143cd63eb;
      }
      uStack_e0._0_4_ = (undefined4)uVar15;
      uStack_e0._4_4_ = (undefined4)(uVar15 >> 0x20);
      uStack_c0 = (undefined4)uStack_e0;
      uStack_bc = uStack_e0._4_4_;
      local_e8 = pbVar16;
      uStack_e0 = uVar15;
      local_c8 = pbVar16;
      if (1 < uVar15) {
        if (uVar15 != 2) {
          if ((((param_1[0xe] != 0) && (param_1[0x5aa] != 0)) && ((char)*pbVar16 < '\0')) &&
             (pbVar16[2] == 1)) {
            uVar15 = (ulonglong)(CONCAT11(*pbVar16,pbVar16[1]) & 0x7fff);
            *(uint *)((longlong)puVar19 + -4) = 0x16;
            *puVar19 = uVar15;
            *(uint *)(puVar19 + -1) = 2;
            if (*(longlong *)(param_1 + 0x20c) - 2U < uVar15) {
              local_110 = (uint *)CONCAT44(local_110._4_4_,0xfb);
              uVar14 = 0x16;
              uVar9 = 0xc6;
            }
            else {
              if (8 < uVar15) goto LAB_143cd594e;
              uVar14 = 0x32;
              local_110 = (uint *)CONCAT44(local_110._4_4_,0x101);
              uVar9 = 0xa0;
            }
            goto LAB_143cd63f0;
          }
          if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
            local_108 = *(undefined8 *)(param_1 + 0x30);
            local_118 = (char *)0x5;
            local_110 = param_1;
            (**(code **)(param_1 + 0x2e))(0,0,0x100,pbVar16);
          }
          if (uVar15 != 0) {
            bVar3 = *pbVar16;
            uStack_e0 = uVar15 - 1;
            if (1 < uStack_e0) {
              uStack_e0 = uVar15 - 3;
              uVar6 = (uint)CONCAT11(pbVar16[1],pbVar16[2]);
              if (1 < uStack_e0) {
                bVar1 = pbVar16[3];
                local_e8 = pbVar16 + 5;
                uStack_e0 = uVar15 - 5;
                bVar2 = pbVar16[4];
                *(uint *)((longlong)puVar19 + -4) = (uint)bVar3;
                *puVar19 = (ulonglong)CONCAT11(bVar1,bVar2);
                *(uint *)(puVar19 + -1) = uVar6;
                if ((param_1[0x178] == 0) &&
                   (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) != 0 ||
                      (iVar7 = **(int **)(param_1 + 2), iVar7 < 0x304)) || (iVar7 == 0x10000)) &&
                    ((param_1[0x136] != 1 && (uVar6 != *param_1)))))) {
                  if ((((*param_1 ^ uVar6) & 0xff00) == 0) &&
                     ((*(longlong *)(param_1 + 0x118) == 0 && (*(longlong *)(param_1 + 0x11e) == 0))
                     )) {
                    if (bVar3 == 0x15) {
                      local_110 = (uint *)CONCAT44(local_110._4_4_,299);
                      uVar9 = 0x10b;
                      goto LAB_143cd5ae3;
                    }
                    *param_1 = uVar6;
                  }
                  local_110 = (uint *)CONCAT44(local_110._4_4_,0x134);
                  uVar14 = 0x46;
                  uVar9 = 0x10b;
                  goto LAB_143cd63f0;
                }
                if ((uVar6 & 0xffffff00) == 0x300) {
                  if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0)
                       && (iVar7 = **(int **)(param_1 + 2), 0x303 < iVar7)) && (iVar7 != 0x10000))
                     && (*(longlong *)(param_1 + 0x10c) != 0)) {
                    if (bVar3 != 0x17) {
                      if (bVar3 != 0x14) {
                        if (bVar3 == 0x15) {
                          bVar23 = param_1[0x20] == 1;
                          goto LAB_143cd5918;
                        }
LAB_143cd5b25:
                        local_110 = (uint *)CONCAT44(local_110._4_4_,0x15e);
                        uVar14 = 10;
                        uVar9 = 0x1bb;
                        goto LAB_143cd63f0;
                      }
                      if (*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x198) != 0) {
                        bVar23 = *(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x220) == 0;
LAB_143cd5918:
                        if (!bVar23) goto LAB_143cd5b25;
                      }
                    }
                    if (uVar6 != 0x303) {
                      local_110 = (uint *)CONCAT44(local_110._4_4_,0x163);
                      uVar14 = 0x32;
                      uVar9 = 0x10b;
                      goto LAB_143cd63f0;
                    }
                  }
                  if ((ulonglong)CONCAT11(bVar1,bVar2) <= *(longlong *)(param_1 + 0x20c) - 5U)
                  goto LAB_143cd594e;
                  local_110 = (uint *)CONCAT44(local_110._4_4_,0x16b);
                  uVar14 = 0x16;
                  uVar9 = 0xc6;
                  goto LAB_143cd63f0;
                }
                if (param_1[0x5aa] == 0) {
                  local_110 = (uint *)CONCAT44(local_110._4_4_,0x151);
                  uVar14 = 0x46;
                  uVar9 = 0x10b;
                  goto LAB_143cd63f0;
                }
                _Str1 = *(char **)(param_1 + 0x592);
                iVar7 = strncmp(_Str1,"GET ",4);
                if (((iVar7 != 0) && (iVar7 = strncmp(_Str1,"POST ",5), iVar7 != 0)) &&
                   ((iVar7 = strncmp(_Str1,"HEAD ",5), iVar7 != 0 &&
                    (iVar7 = strncmp(_Str1,"PUT ",4), iVar7 != 0)))) {
                  iVar7 = strncmp(_Str1,"CONNE",5);
                  if (iVar7 != 0) {
                    local_110 = (uint *)CONCAT44(local_110._4_4_,0x14c);
                    local_118 = "ssl\\record\\ssl3_record.c";
                    ossl_statem_fatal(param_1,0xffffffff,0x8f,0x10b);
                    return 0xffffffff;
                  }
                  local_110 = (uint *)CONCAT44(local_110._4_4_,0x146);
                  local_118 = "ssl\\record\\ssl3_record.c";
                  ossl_statem_fatal(param_1,0xffffffff,0x8f,0x9b);
                  return 0xffffffff;
                }
                local_110 = (uint *)CONCAT44(local_110._4_4_,0x142);
                uVar9 = 0x9c;
LAB_143cd5ae3:
                uVar13 = 0xffffffff;
                goto LAB_143cd5aed;
              }
            }
          }
          uVar14 = 0x32;
          local_110 = (uint *)CONCAT44(local_110._4_4_,0x10f);
          uVar9 = 0x44;
          goto LAB_143cd63f0;
        }
      }
      uVar14 = 0x32;
      local_110 = (uint *)CONCAT44(local_110._4_4_,0xe1);
      uVar9 = 0x44;
      goto LAB_143cd63f0;
    }
LAB_143cd594e:
    pbVar16 = (byte *)0x0;
    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
        (iVar7 = **(int **)(param_1 + 2), 0x303 < iVar7)) && (iVar7 != 0x10000)) {
      uVar15 = *puVar19;
      if (0x4100 < uVar15) {
        local_110 = (uint *)CONCAT44(local_110._4_4_,0x176);
        uVar14 = 0x16;
        uVar9 = 0x96;
        goto LAB_143cd63f0;
      }
    }
    else {
      uVar10 = 0x4140;
      uVar15 = *puVar19;
      if (*(longlong *)(param_1 + 0x116) != 0) {
        uVar10 = 0x4540;
      }
      if (uVar10 < uVar15) {
        local_110 = (uint *)CONCAT44(local_110._4_4_,0x187);
        uVar14 = 0x16;
        uVar9 = 0x96;
        goto LAB_143cd63f0;
      }
    }
    uVar10 = uVar15 - 3;
    if ((uint)puVar19[-1] != 2) {
      uVar10 = uVar15;
    }
    if (uVar10 != 0) {
      local_110 = local_d8;
      local_118 = (char *)((ulonglong)local_118 & 0xffffffff00000000);
      uVar9 = ssl3_read_n(param_1,uVar10,uVar10,1);
      if ((int)uVar9 < 1) {
        return uVar9;
      }
    }
    param_1[0x203] = 0xf0;
    lVar11 = 2;
    if ((uint)puVar19[-1] != 2) {
      lVar11 = 5;
    }
    pbVar20 = pbVar20 + 1;
    lVar5 = *(longlong *)(param_1 + 0x592);
    puVar19[4] = lVar11 + lVar5;
    puVar19[1] = *puVar19;
    puVar19[3] = lVar11 + lVar5;
    *(uint *)(puVar19 + 6) = 0;
    param_1[0x594] = 0;
    param_1[0x595] = 0;
    param_1[0x5aa] = 0;
    local_c8 = pbVar20;
    if ((((pbVar22 <= pbVar20) || (*(uint *)((longlong)puVar19 + -4) != 0x17)) ||
        ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 1) == 0)) ||
       (*(longlong *)(param_1 + 0x10c) == 0)) break;
    uVar9 = FHardwareCursor::GetHandle();
    uVar6 = TResourceArray<unsigned_char,0>::GetResourceDataSize(uVar9);
    if (((uVar6 >> 0x17 & 1) == 0) ||
       (iVar7 = ssl3_record_app_data_waiting(param_1), puVar17 = puVar19 + 9, iVar7 == 0)) break;
  } while( true );
  if ((((pbVar20 == (byte *)0x1) && (*(uint *)((longlong)puVar19 + -4) == 0x14)) &&
      (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0 &&
         (iVar7 = **(int **)(param_1 + 2), 0x303 < iVar7)) && (iVar7 != 0x10000)) ||
       (param_1[0x136] != 0)))) &&
     ((*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x198) == 0 ||
      (*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x220) == 0)))) {
    if ((*puVar19 == 1) && (*(char *)puVar19[3] == '\x01')) {
      *(uint *)((longlong)puVar19 + -4) = 0x16;
      *(longlong *)(param_1 + 0x59c) = *(longlong *)(param_1 + 0x59c) + 1;
      if (*(ulonglong *)(param_1 + 0x59c) < 0x21) {
        *(uint *)(puVar19 + 6) = 1;
        param_1[0x204] = 1;
        param_1[0x205] = 0;
        return 1;
      }
      local_110 = (uint *)CONCAT44(local_110._4_4_,0x1e5);
      uVar14 = 10;
      uVar9 = 0x106;
    }
    else {
      local_110 = (uint *)CONCAT44(local_110._4_4_,0x1d9);
      uVar14 = 0x2f;
      uVar9 = 0x104;
    }
LAB_143cd63f0:
    local_118 = "ssl\\record\\ssl3_record.c";
    ossl_statem_fatal(param_1,uVar14,0x8f,uVar9);
    return 0xffffffff;
  }
  puVar17 = local_f8;
  if (((**(uint **)(param_1 + 0x2a) & 0x100) != 0) && (*(longlong *)(param_1 + 0x112) != 0)) {
    uVar9 = EVP_MD_CTX_md();
    uVar6 = EVP_MD_size(uVar9);
    puVar17 = local_f8;
    if (0x40 < uVar6) {
      local_110 = (uint *)CONCAT44(local_110._4_4_,0x1f8);
      uVar9 = 6;
LAB_143cd63eb:
      uVar14 = 0x50;
      goto LAB_143cd63f0;
    }
    uVar15 = (ulonglong)(int)uVar6;
    puVar19 = local_f8;
    if (pbVar20 != (byte *)0x0) {
      do {
        if (*puVar19 < uVar15) {
          uVar14 = 0x32;
          local_110 = (uint *)CONCAT44(local_110._4_4_,0x201);
          uVar9 = 0xa0;
          goto LAB_143cd63f0;
        }
        uVar10 = puVar19[3];
        uVar12 = *puVar19 - uVar15;
        *puVar19 = uVar12;
        iVar7 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 8))
                          (param_1,puVar19 + -1,local_b8,0);
        if ((iVar7 == 0) || (iVar7 = FUN_14004ffa0(local_b8,uVar10 + uVar12,uVar15), iVar7 != 0)) {
          local_110 = (uint *)CONCAT44(local_110._4_4_,0x209);
          uVar14 = 0x14;
          uVar9 = 0x119;
          goto LAB_143cd63f0;
        }
        pbVar16 = pbVar16 + 1;
        puVar19 = puVar19 + 9;
      } while (pbVar16 < pbVar20);
    }
  }
  pbVar22 = (byte *)*puVar17;
  local_e8 = pbVar22;
  iVar7 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 2) + 0xc0))
                    (param_1,param_1 + 0x352,pbVar20,0);
  puVar19 = puVar17;
  if (iVar7 == 0) {
    iVar7 = ossl_statem_in_error(param_1);
    if (iVar7 != 0) {
      return 0xffffffff;
    }
    if ((pbVar20 != (byte *)0x1) || (iVar7 = ossl_statem_skip_early_data(param_1), iVar7 == 0)) {
      uVar13 = 0x15;
      local_110 = (uint *)CONCAT44(local_110._4_4_,0x233);
      uVar9 = 0x81;
LAB_143cd5aed:
      local_118 = "ssl\\record\\ssl3_record.c";
      ossl_statem_fatal(param_1,uVar13,0x8f,uVar9);
      return 0xffffffff;
    }
    pbVar22 = (byte *)*puVar17;
  }
  else {
    if ((((local_d0 != 0) && (*(longlong *)(param_1 + 0x10c) != 0)) &&
        ((**(uint **)(param_1 + 0x2a) & 0x100) == 0)) &&
       (lVar11 = EVP_MD_CTX_md(*(undefined8 *)(param_1 + 0x112)), lVar11 != 0)) {
      uVar9 = EVP_MD_CTX_md(*(undefined8 *)(param_1 + 0x112));
      iVar8 = EVP_MD_size(uVar9);
      uVar15 = (ulonglong)iVar8;
      if (0x40 < uVar15) {
        uVar13 = 0x50;
        local_110 = (uint *)CONCAT44(local_110._4_4_,0x24b);
        uVar9 = 0x44;
        goto LAB_143cd5aed;
      }
      pbVar16 = (byte *)0x0;
      if (pbVar20 != (byte *)0x0) {
        do {
          if (puVar17[1] < uVar15) {
LAB_143cd5f99:
            uVar13 = 0x32;
            local_110 = (uint *)CONCAT44(local_110._4_4_,0x25c);
            uVar9 = 0xa0;
            goto LAB_143cd5aed;
          }
          uVar9 = FHardwareCursor::GetHandle(*(undefined8 *)(param_1 + 0x10c));
          uVar6 = TResourceArray<unsigned_char,0>::GetResourceDataSize(uVar9);
          if (((uVar6 & 0xf0007) == 2) && (puVar17[1] < uVar15 + 1)) goto LAB_143cd5f99;
          uVar9 = FHardwareCursor::GetHandle(*(undefined8 *)(param_1 + 0x10c));
          uVar6 = TResourceArray<unsigned_char,0>::GetResourceDataSize(uVar9);
          if ((uVar6 & 0xf0007) == 2) {
            puVar21 = local_78;
            iVar8 = ssl3_cbc_copy_mac(local_78,puVar17 + -1,uVar15);
            if (iVar8 == 0) {
              uVar13 = 0x50;
              local_110 = (uint *)CONCAT44(local_110._4_4_,0x26a);
              uVar9 = 0x44;
              goto LAB_143cd5aed;
            }
            *puVar17 = *puVar17 - uVar15;
          }
          else {
            *puVar17 = *puVar17 - uVar15;
            puVar21 = (undefined1 *)(*puVar17 + puVar17[3]);
          }
          iVar8 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 8))
                            (param_1,puVar17 + -1,local_b8,0);
          if (((iVar8 == 0) || (puVar21 == (undefined1 *)0x0)) ||
             (iVar8 = FUN_14004ffa0(local_b8,puVar21,uVar15), iVar8 != 0)) {
            iVar7 = -1;
          }
          if (uVar15 + 0x4400 < *puVar17) {
            iVar7 = -1;
          }
          pbVar16 = pbVar16 + 1;
          puVar17 = puVar17 + 9;
          pbVar22 = local_e8;
          pbVar20 = local_c8;
          puVar19 = local_f8;
        } while (pbVar16 < local_c8);
      }
    }
    puVar18 = param_1 + 0x352;
    if (-1 < iVar7) {
      pbVar22 = (byte *)0x0;
      if (pbVar20 != (byte *)0x0) {
        do {
          if (*(longlong *)(param_1 + 0x116) != 0) {
            if (0x4400 < *(ulonglong *)(puVar18 + 2)) {
              uVar13 = 0x16;
              local_110 = (uint *)CONCAT44(local_110._4_4_,0x2b0);
              uVar9 = 0x8c;
              goto LAB_143cd5aed;
            }
            iVar7 = ssl3_do_uncompress(param_1,puVar18);
            if (iVar7 == 0) {
              uVar13 = 0x1e;
              local_110 = (uint *)CONCAT44(local_110._4_4_,0x2b5);
              uVar9 = 0x6b;
              goto LAB_143cd5aed;
            }
          }
          if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
               (iVar7 = **(int **)(param_1 + 2), 0x303 < iVar7)) && (iVar7 != 0x10000)) &&
             ((*(longlong *)(param_1 + 0x10c) != 0 && (puVar18[1] != 0x15)))) {
            if ((*(longlong *)(puVar18 + 2) == 0) || (puVar18[1] != 0x17)) {
              local_110 = (uint *)CONCAT44(local_110._4_4_,0x2c2);
              uVar13 = 10;
              uVar9 = 0x1bb;
              goto LAB_143cd5aed;
            }
            lVar11 = *(longlong *)(puVar18 + 2) + -1;
            if (lVar11 != 0) {
              do {
                if (*(char *)(*(longlong *)(puVar18 + 8) + lVar11) != '\0') break;
                lVar11 = lVar11 + -1;
              } while (lVar11 != 0);
            }
            *(longlong *)(puVar18 + 2) = lVar11;
            bVar3 = *(byte *)(*(longlong *)(puVar18 + 8) + lVar11);
            puVar18[1] = (uint)bVar3;
            if ((bVar3 != 0x17) && (1 < bVar3 - 0x15)) {
              local_110 = (uint *)CONCAT44(local_110._4_4_,0x2d1);
              uVar13 = 10;
              uVar9 = 0x1bb;
              goto LAB_143cd5aed;
            }
            if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
              local_108 = *(undefined8 *)(param_1 + 0x30);
              local_118 = (char *)0x1;
              local_110 = param_1;
              (**(code **)(param_1 + 0x2e))(0,*param_1,0x101);
            }
          }
          if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
               (iVar7 = **(int **)(param_1 + 2), 0x303 < iVar7)) && (iVar7 != 0x10000)) &&
             ((puVar18[1] - 0x15 < 2 && (*(longlong *)(puVar18 + 2) == 0)))) {
            local_110 = (uint *)CONCAT44(local_110._4_4_,0x2e2);
            uVar13 = 10;
            uVar9 = 0x10f;
            goto LAB_143cd5aed;
          }
          uVar15 = *(ulonglong *)(puVar18 + 2);
          if (0x4000 < uVar15) {
            uVar13 = 0x16;
            local_110 = (uint *)CONCAT44(local_110._4_4_,0x2e8);
            uVar9 = 0x92;
            goto LAB_143cd5aed;
          }
          if (((*(longlong *)(param_1 + 0x142) != 0) &&
              (cVar4 = *(char *)(*(longlong *)(param_1 + 0x142) + 0x1b0), (byte)(cVar4 - 1U) < 4))
             && ((uint)(0x200 << (cVar4 - 1U & 0x1f)) < uVar15)) {
            uVar13 = 0x16;
            local_110 = (uint *)CONCAT44(local_110._4_4_,0x2f0);
            uVar9 = 0x92;
            goto LAB_143cd5aed;
          }
          puVar18[6] = 0;
          puVar18[7] = 0;
          if (uVar15 == 0) {
            lVar11 = *(longlong *)(param_1 + 0x59c);
            *(ulonglong *)(param_1 + 0x59c) = lVar11 + 1U;
            if (0x20 < lVar11 + 1U) {
              local_110 = (uint *)CONCAT44(local_110._4_4_,0x303);
              uVar13 = 10;
              uVar9 = 0x12a;
              goto LAB_143cd5aed;
            }
          }
          else {
            param_1[0x59c] = 0;
            param_1[0x59d] = 0;
          }
          pbVar22 = pbVar22 + 1;
          puVar18 = puVar18 + 0x12;
        } while (pbVar22 < pbVar20);
      }
      if (((param_1[0x21] == 0xb) && (param_1[0x353] == 0x17)) &&
         (iVar7 = early_data_count_ok(param_1,*puVar19,0,0), iVar7 == 0)) {
        return 0xffffffff;
      }
      *(byte **)(param_1 + 0x204) = pbVar20;
      return 1;
    }
    iVar7 = ossl_statem_in_error(param_1);
    if (iVar7 != 0) {
      return 0xffffffff;
    }
    if ((pbVar20 != (byte *)0x1) || (iVar7 = ossl_statem_skip_early_data(param_1), iVar7 == 0)) {
      local_110 = (uint *)CONCAT44(local_110._4_4_,0x2a5);
      uVar13 = 0x14;
      uVar9 = 0x119;
      goto LAB_143cd5aed;
    }
  }
  iVar7 = early_data_count_ok(param_1,pbVar22,0x68,0);
  if (iVar7 == 0) {
    return 0xffffffff;
  }
  *puVar19 = 0;
  param_1[0x360] = 1;
  param_1[0x204] = 1;
  param_1[0x205] = 0;
  RECORD_LAYER_reset_read_sequence(param_1 + 0x200);
  return 1;
}



// FUNCTION 143cd6440 ssl3_record_app_data_waiting body=70 status=ok
// SIG undefined ssl3_record_app_data_waiting(void)

undefined8 ssl3_record_app_data_waiting(longlong param_1)

{
  char *pcVar1;
  
  if ((((*(longlong *)(param_1 + 0x820) != 0) && (4 < *(ulonglong *)(param_1 + 0x840))) &&
      (pcVar1 = (char *)(*(longlong *)(param_1 + 0x820) + *(longlong *)(param_1 + 0x838)),
      *pcVar1 == '\x17')) &&
     ((ulonglong)CONCAT11(pcVar1[3],pcVar1[4]) + 5 <= *(ulonglong *)(param_1 + 0x840))) {
    return 1;
  }
  return 0;
}



// FUNCTION 143cd6490 tls1_cbc_remove_padding body=362 status=ok
// SIG undefined tls1_cbc_remove_padding(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint tls1_cbc_remove_padding(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  byte *pbVar13;
  
  uVar7 = param_4 + 1;
  uVar6 = *(ulonglong *)(param_2 + 8);
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 1) == 0) {
    if (uVar6 < uVar7) {
      return 0;
    }
  }
  else {
    if (uVar6 < uVar7 + param_3) {
      return 0;
    }
    *(longlong *)(param_2 + 0x20) = *(longlong *)(param_2 + 0x20) + param_3;
    uVar6 = uVar6 - param_3;
    *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + param_3;
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) - param_3;
    *(ulonglong *)(param_2 + 8) = uVar6;
  }
  bVar1 = *(byte *)(*(longlong *)(param_2 + 0x20) + -1 + uVar6);
  uVar8 = (ulonglong)bVar1;
  uVar4 = FHardwareCursor::GetHandle(*(undefined8 *)(param_1 + 0x430));
  uVar3 = TResourceArray<unsigned_char,0>::GetResourceDataSize(uVar4);
  uVar6 = *(ulonglong *)(param_2 + 8);
  if ((uVar3 & 0x200000) == 0) {
    uVar7 = uVar8 + uVar7;
    uVar10 = 0xffffffffffffffff -
             ((longlong)((uVar6 - uVar7 ^ uVar7 | uVar6 ^ uVar7) ^ uVar6) >> 0x3f);
    uVar7 = 0x100;
    if (uVar6 < 0x100) {
      uVar7 = uVar6;
    }
    if (uVar7 != 0) {
      uVar11 = 0;
      pbVar13 = (byte *)(*(longlong *)(param_2 + 0x20) + -1 + uVar6);
      do {
        uVar12 = uVar11 + 1;
        bVar2 = (byte)(uVar11 >> 0x38);
        uVar10 = uVar10 & ~(ulonglong)
                           (byte)(0xffU - ((char)((byte)(uVar8 - uVar11 >> 0x38) ^ bVar2 | bVar2) >>
                                          7) & (bVar1 ^ *pbVar13));
        uVar11 = uVar12;
        pbVar13 = pbVar13 + -1;
      } while (uVar12 < uVar7);
    }
    lVar5 = (~uVar10 & 0xff) - 1;
    lVar9 = uVar6 - (uVar8 + 1 & lVar5 >> 0x3f);
    uVar3 = (uint)(lVar5 >> 0x3f);
    uVar3 = uVar3 & 1 | ~uVar3;
  }
  else {
    uVar3 = 1;
    lVar9 = (uVar6 - uVar8) + -1;
  }
  *(longlong *)(param_2 + 8) = lVar9;
  return uVar3;
}



// FUNCTION 143cd6600 tls1_enc body=2558 status=ok
// SIG undefined tls1_enc(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint tls1_enc(undefined4 *param_1,longlong param_2,ulonglong param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  char *pcVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong *puVar13;
  longlong lVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  bool bVar19;
  undefined1 auStack_458 [32];
  char *local_438;
  undefined4 local_430;
  ulonglong local_428;
  ulonglong local_420;
  int local_418;
  longlong local_410;
  ulonglong local_408;
  ulonglong local_3f8 [32];
  undefined8 local_2f8 [32];
  undefined1 local_1f8;
  undefined1 uStack_1f7;
  undefined4 uStack_1f6;
  undefined2 uStack_1f2;
  undefined1 local_1df [407];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_458;
  uVar11 = 0;
  local_418 = 0;
  local_408 = 0;
  local_410 = param_2;
  if (param_3 == 0) {
    local_430 = 0x3b6;
    local_438 = "ssl\\record\\ssl3_record.c";
    ossl_statem_fatal(param_1,0x50,0x191,0x44);
    return 0;
  }
  if (param_4 == 0) {
    lVar5 = EVP_MD_CTX_md(*(undefined8 *)(param_1 + 0x112));
    if (lVar5 == 0) {
LAB_143cd6818:
      lVar5 = *(longlong *)(param_1 + 0x10c);
      if (lVar5 == 0) {
        local_420 = 0;
        uVar17 = 0;
      }
      else {
        local_420 = FHardwareCursor::GetHandle(lVar5);
        uVar17 = local_420;
      }
      goto LAB_143cd675f;
    }
    uVar6 = EVP_MD_CTX_md(*(undefined8 *)(param_1 + 0x112));
    iVar2 = EVP_MD_size(uVar6);
    if (-1 < iVar2) goto LAB_143cd6818;
    local_430 = 0x3e6;
  }
  else {
    lVar5 = EVP_MD_CTX_md(*(undefined8 *)(param_1 + 0x11e));
    if (lVar5 != 0) {
      uVar6 = EVP_MD_CTX_md(*(undefined8 *)(param_1 + 0x11e));
      iVar2 = EVP_MD_size(uVar6);
      if (iVar2 < 0) {
        local_430 = 0x3bf;
        goto LAB_143cd6ecd;
      }
    }
    lVar5 = *(longlong *)(param_1 + 0x118);
    if (lVar5 == 0) {
      local_420 = 0;
      uVar17 = uVar11;
    }
    else {
      uVar17 = FHardwareCursor::GetHandle(lVar5);
      local_420 = uVar17;
      if (((((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 1) != 0) &&
           (uVar3 = TResourceArray<unsigned_char,0>::GetResourceDataSize(uVar17),
           (uVar3 & 0xf0007) == 2)) &&
          (iVar2 = IStreamingManager::GetNumWantingResourcesID(uVar17), 1 < iVar2)) &&
         (uVar17 = local_420, param_3 != 0)) {
        plVar12 = (longlong *)(param_2 + 0x20);
        uVar10 = uVar11;
        do {
          if (*plVar12 != plVar12[1]) {
            local_430 = 0x3d7;
            goto LAB_143cd6ecd;
          }
          iVar2 = RAND_bytes();
          if (iVar2 < 1) {
            local_430 = 0x3db;
            goto LAB_143cd6ecd;
          }
          uVar10 = uVar10 + 1;
          plVar12 = plVar12 + 9;
          param_2 = local_410;
          uVar17 = local_420;
        } while (uVar10 < param_3);
      }
    }
LAB_143cd675f:
    if (((*(longlong *)(param_1 + 0x142) == 0) || (lVar5 == 0)) || (uVar17 == 0)) {
      if (param_3 != 0) {
        puVar15 = (undefined8 *)(param_2 + 0x20);
        do {
          _guard_xfg_dispatch_icall_nop((void *)*puVar15,(void *)puVar15[1],puVar15[-3]);
          puVar15[1] = *puVar15;
          puVar15 = puVar15 + 9;
          param_3 = param_3 - 1;
        } while (param_3 != 0);
      }
      return 1;
    }
    uVar6 = FHardwareCursor::GetHandle(lVar5);
    iVar2 = FCachedCompositeFontData::FCachedFontRange::BinarySearchKey(uVar6);
    uVar17 = (ulonglong)iVar2;
    if (1 < param_3) {
      uVar6 = FHardwareCursor::GetHandle(lVar5);
      uVar3 = TResourceArray<unsigned_char,0>::GetResourceDataSize(uVar6);
      if ((uVar3 >> 0x17 & 1) == 0) {
        local_430 = 0x402;
        uVar6 = 0x196;
        goto LAB_143cd6ed3;
      }
    }
    local_428 = 0;
    if (param_3 != 0) {
      puVar18 = local_1df;
      puVar13 = (ulonglong *)(param_2 + 8);
      do {
        local_3f8[local_428] = *puVar13;
        uVar6 = FHardwareCursor::GetHandle(lVar5);
        uVar3 = TResourceArray<unsigned_char,0>::GetResourceDataSize(uVar6);
        if ((uVar3 >> 0x15 & 1) == 0) {
          if (uVar17 != 1) {
            if (param_4 == 0) goto LAB_143cd69fd;
            uVar10 = local_3f8[local_428];
            uVar16 = uVar17 - uVar10 % uVar17;
            if (0x100 < uVar16) {
              local_430 = 0x43a;
              goto LAB_143cd6ecd;
            }
            uVar9 = uVar10;
            if (uVar10 < uVar16 + uVar10) {
              do {
                *(char *)(uVar9 + puVar13[4]) = (char)uVar16 + -1;
                uVar9 = uVar9 + 1;
                uVar10 = local_3f8[local_428];
              } while (uVar9 < uVar10 + uVar16);
            }
            *puVar13 = *puVar13 + uVar16;
            local_3f8[local_428] = uVar10 + uVar16;
          }
LAB_143cd69f8:
          if (param_4 == 0) goto LAB_143cd69fd;
        }
        else {
          lVar14 = 0x16a0;
          if (param_4 == 0) {
            lVar14 = 0x1698;
          }
          puVar15 = (undefined8 *)(lVar14 + (longlong)param_1);
          if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0) {
            pcVar8 = (char *)((longlong)puVar15 + 7);
            *(undefined8 *)(puVar18 + -9) = *puVar15;
            do {
              *pcVar8 = *pcVar8 + '\x01';
              if (*pcVar8 != '\0') break;
              pcVar8 = pcVar8 + -1;
            } while (-1 < (longlong)pcVar8 - (longlong)puVar15);
          }
          else {
            puVar7 = *(undefined1 **)(param_1 + 0x5ac) + 2;
            if (param_4 == 0) {
              puVar7 = *(undefined1 **)(param_1 + 0x5ac);
            }
            local_1f8 = puVar7[1];
            uStack_1f7 = *puVar7;
            uStack_1f6 = *(undefined4 *)((longlong)puVar15 + 2);
            uStack_1f2 = *(undefined2 *)((longlong)puVar15 + 6);
            *(ulonglong *)(puVar18 + -9) =
                 CONCAT26(uStack_1f2,CONCAT42(uStack_1f6,CONCAT11(uStack_1f7,local_1f8)));
          }
          uVar1 = *param_1;
          puVar18[-1] = *(undefined1 *)((longlong)puVar13 + -4);
          puVar18[1] = (char)uVar1;
          uVar10 = *puVar13;
          *puVar18 = (char)((uint)uVar1 >> 8);
          puVar18[3] = (char)uVar10;
          puVar18[2] = (char)(uVar10 >> 8);
          local_418 = EVP_CIPHER_CTX_ctrl(lVar5,0x16,0xd);
          if (local_418 < 1) {
            local_430 = 0x42a;
            goto LAB_143cd6ecd;
          }
          if (param_4 != 0) {
            local_3f8[local_428] = local_3f8[local_428] + (longlong)local_418;
            *puVar13 = *puVar13 + (longlong)local_418;
            goto LAB_143cd69f8;
          }
LAB_143cd69fd:
          if (local_3f8[local_428] == 0) {
            return 0;
          }
          if (local_3f8[local_428] % uVar17 != 0) {
            return 0;
          }
        }
        local_428 = local_428 + 1;
        puVar18 = puVar18 + 0xd;
        puVar13 = puVar13 + 9;
      } while (local_428 < param_3);
    }
    lVar14 = local_410;
    if (1 < param_3) {
      if (param_3 != 0) {
        puVar15 = (undefined8 *)(local_410 + 0x20);
        uVar10 = uVar11;
        do {
          uVar6 = *puVar15;
          puVar15 = puVar15 + 9;
          local_2f8[uVar10] = uVar6;
          uVar10 = uVar10 + 1;
        } while (uVar10 < param_3);
      }
      iVar2 = EVP_CIPHER_CTX_ctrl(lVar5,0x22,param_3 & 0xffffffff,local_2f8);
      if (iVar2 < 1) {
        local_430 = 0x454;
        uVar6 = 0x196;
        goto LAB_143cd6ed3;
      }
      if (param_3 != 0) {
        puVar15 = (undefined8 *)(lVar14 + 0x28);
        uVar10 = uVar11;
        do {
          uVar6 = *puVar15;
          puVar15 = puVar15 + 9;
          local_2f8[uVar10] = uVar6;
          uVar10 = uVar10 + 1;
        } while (uVar10 < param_3);
      }
      iVar2 = EVP_CIPHER_CTX_ctrl(lVar5,0x23,param_3 & 0xffffffff,local_2f8);
      if ((iVar2 < 1) ||
         (iVar2 = EVP_CIPHER_CTX_ctrl(lVar5,0x24,param_3 & 0xffffffff,local_3f8), iVar2 < 1)) {
        local_430 = 0x460;
        uVar6 = 0x196;
        goto LAB_143cd6ed3;
      }
    }
    lVar14 = local_410;
    iVar2 = EVP_Cipher(lVar5,*(undefined8 *)(local_410 + 0x20),*(undefined8 *)(local_410 + 0x28),
                       (undefined4)local_3f8[0]);
    uVar6 = FHardwareCursor::GetHandle(lVar5);
    uVar3 = TResourceArray<unsigned_char,0>::GetResourceDataSize(uVar6);
    uVar10 = local_420;
    if ((uVar3 >> 0x14 & 1) == 0) {
      bVar19 = iVar2 == 0;
    }
    else {
      bVar19 = iVar2 < 0;
    }
    if (bVar19) {
      return 0xffffffff;
    }
    if (param_4 == 0) {
      uVar3 = TResourceArray<unsigned_char,0>::GetResourceDataSize(local_420);
      if ((uVar3 & 0xf0007) == 6) {
        if (param_3 != 0) {
          uVar10 = uVar11;
          if (3 < param_3) {
            plVar12 = (longlong *)(lVar14 + 0x68);
            do {
              uVar10 = uVar10 + 4;
              plVar12[-9] = plVar12[-9] + 8;
              *plVar12 = *plVar12 + 8;
              plVar12[-8] = plVar12[-8] + 8;
              plVar12[1] = plVar12[1] + 8;
              plVar12[-0xc] = plVar12[-0xc] + -8;
              plVar12[-3] = plVar12[-3] + -8;
              plVar12[9] = plVar12[9] + 8;
              plVar12[0x12] = plVar12[0x12] + 8;
              plVar12[10] = plVar12[10] + 8;
              plVar12[0x13] = plVar12[0x13] + 8;
              plVar12[6] = plVar12[6] + -8;
              plVar12[0xf] = plVar12[0xf] + -8;
              plVar12 = plVar12 + 0x24;
            } while (uVar10 < param_3 - ((uint)param_3 & 3));
          }
          if (uVar10 < param_3) {
            plVar12 = (longlong *)(lVar14 + (uVar10 * 9 + 5) * 8);
            lVar5 = param_3 - uVar10;
            do {
              plVar12[-1] = plVar12[-1] + 8;
              *plVar12 = *plVar12 + 8;
              plVar12[-4] = plVar12[-4] + -8;
              plVar12 = plVar12 + 9;
              lVar5 = lVar5 + -1;
            } while (lVar5 != 0);
          }
        }
      }
      else {
        uVar3 = TResourceArray<unsigned_char,0>::GetResourceDataSize(uVar10);
        if (((uVar3 & 0xf0007) == 7) && (param_3 != 0)) {
          uVar10 = uVar11;
          if (3 < param_3) {
            plVar12 = (longlong *)(lVar14 + 0x68);
            do {
              uVar10 = uVar10 + 4;
              plVar12[-9] = plVar12[-9] + 8;
              *plVar12 = *plVar12 + 8;
              plVar12[-8] = plVar12[-8] + 8;
              plVar12[1] = plVar12[1] + 8;
              plVar12[-0xc] = plVar12[-0xc] + -8;
              plVar12[-3] = plVar12[-3] + -8;
              plVar12[9] = plVar12[9] + 8;
              plVar12[0x12] = plVar12[0x12] + 8;
              plVar12[10] = plVar12[10] + 8;
              plVar12[0x13] = plVar12[0x13] + 8;
              plVar12[6] = plVar12[6] + -8;
              plVar12[0xf] = plVar12[0xf] + -8;
              plVar12 = plVar12 + 0x24;
            } while (uVar10 < param_3 - ((uint)param_3 & 3));
          }
          if (uVar10 < param_3) {
            plVar12 = (longlong *)(lVar14 + (uVar10 * 9 + 5) * 8);
            lVar5 = param_3 - uVar10;
            do {
              plVar12[-1] = plVar12[-1] + 8;
              *plVar12 = *plVar12 + 8;
              plVar12[-4] = plVar12[-4] + -8;
              plVar12 = plVar12 + 9;
              lVar5 = lVar5 + -1;
            } while (lVar5 != 0);
          }
        }
      }
    }
    uVar3 = 1;
    uVar10 = uVar11;
    if (((**(uint **)(param_1 + 0x2a) & 0x100) != 0) ||
       (lVar5 = EVP_MD_CTX_md(*(undefined8 *)(param_1 + 0x112)), lVar5 == 0)) {
LAB_143cd6f08:
      lVar5 = lVar14;
      if (((uVar17 != 1) && (param_4 == 0)) && (param_3 != 0)) {
        do {
          uVar4 = tls1_cbc_remove_padding(param_1,lVar14,uVar17,uVar10);
          if (uVar4 == 0) {
            return 0;
          }
          uVar11 = uVar11 + 1;
          lVar14 = lVar14 + 0x48;
          uVar4 = (int)((uVar4 ^ 1) - 1 & ~(uVar4 ^ 1)) >> 0x1f;
          uVar3 = uVar3 & uVar4 | ~uVar4;
          uVar10 = local_408;
          lVar5 = local_410;
        } while (uVar11 < param_3);
      }
      if (local_418 == 0) {
        return uVar3;
      }
      if (param_4 != 0) {
        return uVar3;
      }
      if (param_3 != 0) {
        plVar12 = (longlong *)(lVar5 + 8);
        do {
          *plVar12 = *plVar12 - (longlong)local_418;
          plVar12 = plVar12 + 9;
          param_3 = param_3 - 1;
        } while (param_3 != 0);
        return uVar3;
      }
      return uVar3;
    }
    uVar6 = EVP_MD_CTX_md(*(undefined8 *)(param_1 + 0x112));
    iVar2 = EVP_MD_size(uVar6);
    if (-1 < iVar2) {
      local_408 = (ulonglong)iVar2;
      uVar10 = local_408;
      goto LAB_143cd6f08;
    }
    local_430 = 0x483;
  }
LAB_143cd6ecd:
  uVar6 = 0x44;
LAB_143cd6ed3:
  local_438 = "ssl\\record\\ssl3_record.c";
  ossl_statem_fatal(param_1,0x50,0x191,uVar6);
  return 0xffffffff;
}



// FUNCTION 143cd7000 tls1_mac body=655 status=ok
// SIG undefined tls1_mac(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 tls1_mac(undefined4 *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  char *pcVar6;
  undefined1 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined1 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_50;
  undefined1 uStack_4f;
  undefined4 uStack_4e;
  undefined2 uStack_4a;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143cd701a;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  lVar5 = 0;
  uVar3 = param_1[0x4a];
  if (param_4 == 0) {
    lVar8 = *(longlong *)(param_1 + 0x112);
  }
  else {
    lVar8 = *(longlong *)(param_1 + 0x11e);
  }
  lVar9 = 0x16a0;
  if (param_4 == 0) {
    lVar9 = 0x1698;
  }
  puVar10 = (undefined8 *)(lVar9 + (longlong)param_1);
  uVar4 = EVP_MD_CTX_md(lVar8);
  iVar2 = EVP_MD_size(uVar4);
  if (iVar2 < 0) {
    return 0;
  }
  local_68 = (longlong)iVar2;
  if ((((param_4 != 0) + 1 & uVar3) == 0) &&
     ((lVar5 = EVP_MD_CTX_new(), lVar5 == 0 ||
      (iVar2 = EVP_MD_CTX_copy(lVar5,lVar8), lVar8 = lVar5, iVar2 == 0)))) goto LAB_143cd71ea;
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0) {
    local_60 = *puVar10;
  }
  else {
    puVar7 = *(undefined1 **)(param_1 + 0x5ac) + 2;
    if (param_4 == 0) {
      puVar7 = *(undefined1 **)(param_1 + 0x5ac);
    }
    local_50 = puVar7[1];
    uStack_4f = *puVar7;
    uStack_4e = *(undefined4 *)((longlong)puVar10 + 2);
    uStack_4a = *(undefined2 *)((longlong)puVar10 + 6);
    local_60 = CONCAT26(uStack_4a,CONCAT42(uStack_4e,CONCAT11(uStack_4f,local_50)));
  }
  local_58 = *(undefined1 *)(param_2 + 4);
  local_57 = (undefined1)((uint)*param_1 >> 8);
  local_56 = (undefined1)*param_1;
  local_54 = (undefined1)*(undefined8 *)(param_2 + 8);
  local_55 = (undefined1)((ulonglong)*(undefined8 *)(param_2 + 8) >> 8);
  if ((param_4 == 0) && ((**(uint **)(param_1 + 0x2a) & 0x100) == 0)) {
    uVar4 = FHardwareCursor::GetHandle(*(undefined8 *)(param_1 + 0x10c));
    uVar3 = TResourceArray<unsigned_char,0>::GetResourceDataSize(uVar4);
    if (((uVar3 & 0xf0007) != 2) || (cVar1 = ssl3_cbc_record_digest_supported(lVar8), cVar1 == '\0')
       ) goto LAB_143cd721c;
    local_90 = local_68 + *(longlong *)(param_2 + 8);
    local_78 = *(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 8);
    local_80 = *(longlong *)(param_1 + 0x2a) + 0x10;
    local_88 = *(undefined8 *)(param_2 + 0x10);
    local_98 = *(undefined8 *)(param_2 + 0x28);
    local_70 = (char)param_4;
    iVar2 = ssl3_cbc_digest_record(lVar8,param_3,&local_68,&local_60);
  }
  else {
LAB_143cd721c:
    iVar2 = EVP_DigestUpdate(lVar8,&local_60,0xd);
    if ((iVar2 < 1) ||
       (iVar2 = EVP_DigestUpdate(lVar8,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 8))
       , iVar2 < 1)) goto LAB_143cd71ea;
    iVar2 = EVP_DigestSignFinal(lVar8,param_3,&local_68);
  }
  if (0 < iVar2) {
    EVP_MD_CTX_free(lVar5);
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0) {
      pcVar6 = (char *)((longlong)puVar10 + 7);
      do {
        *pcVar6 = *pcVar6 + '\x01';
        if (*pcVar6 != '\0') {
          return 1;
        }
        pcVar6 = pcVar6 + -1;
      } while (-1 < (longlong)pcVar6 - (longlong)puVar10);
    }
    return 1;
  }
LAB_143cd71ea:
  EVP_MD_CTX_free(lVar5);
  return 0;
}



// FUNCTION 143cd73d0 ssl3_change_cipher_state body=877 status=ok
// SIG undefined ssl3_change_cipher_state(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 ssl3_change_cipher_state(longlong param_1,uint param_2)

{
  void *pvVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  void *_Src;
  undefined8 uVar9;
  void *_Dst;
  size_t _Size;
  undefined1 auStack_d8 [32];
  char *local_b8;
  uint local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [24];
  undefined1 local_88 [64];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143cd73ea;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  lVar4 = *(longlong *)(param_1 + 0xa8);
  lVar6 = 0;
  bVar2 = false;
  lVar8 = *(longlong *)(lVar4 + 0x280);
  uVar9 = *(undefined8 *)(lVar4 + 0x278);
  local_a8 = uVar9;
  if (lVar8 == 0) {
    local_b0 = 0x6f;
  }
  else {
    if (*(longlong *)(lVar4 + 0x298) != 0) {
      lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x298) + 0x10);
    }
    if ((param_2 & 1) == 0) {
      lVar4 = *(longlong *)(param_1 + 0x460);
      *(undefined4 *)(param_1 + 0x7c) = 1;
      if (lVar4 == 0) {
        lVar4 = EVP_CIPHER_CTX_new();
        *(longlong *)(param_1 + 0x460) = lVar4;
        if (lVar4 == 0) {
          local_b0 = 0xa3;
          uVar9 = 0x41;
          goto LAB_143cd76a5;
        }
        EVP_CIPHER_CTX_reset(lVar4);
        lVar4 = *(longlong *)(param_1 + 0x460);
      }
      else {
        bVar2 = true;
      }
      lVar5 = ssl_replace_hash(param_1 + 0x478,lVar8);
      if (lVar5 == 0) {
        local_b0 = 0xae;
        uVar9 = 0x41;
        goto LAB_143cd76a5;
      }
      COMP_CTX_free(*(undefined8 *)(param_1 + 0x450));
      *(undefined8 *)(param_1 + 0x450) = 0;
      if (lVar6 != 0) {
        lVar6 = COMP_CTX_new(lVar6);
        *(longlong *)(param_1 + 0x450) = lVar6;
        if (lVar6 == 0) {
          local_b0 = 0xba;
          uVar9 = 0x8e;
          goto LAB_143cd76a5;
        }
      }
      RECORD_LAYER_reset_write_sequence(param_1 + 0x800);
      lVar6 = *(longlong *)(param_1 + 0xa8);
      _Dst = (void *)(lVar6 + 0x58);
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x430);
      if (lVar4 == 0) {
        lVar4 = EVP_CIPHER_CTX_new();
        *(longlong *)(param_1 + 0x430) = lVar4;
        if (lVar4 == 0) {
          local_b0 = 0x7e;
          uVar9 = 0x41;
          goto LAB_143cd76a5;
        }
        EVP_CIPHER_CTX_reset(lVar4);
        lVar4 = *(longlong *)(param_1 + 0x430);
      }
      else {
        bVar2 = true;
      }
      lVar5 = ssl_replace_hash(param_1 + 0x448,lVar8);
      if (lVar5 == 0) {
        local_b0 = 0x8a;
        goto LAB_143cd769f;
      }
      COMP_CTX_free(*(undefined8 *)(param_1 + 0x458));
      *(undefined8 *)(param_1 + 0x458) = 0;
      if (lVar6 != 0) {
        lVar6 = COMP_CTX_new(lVar6);
        *(longlong *)(param_1 + 0x458) = lVar6;
        if (lVar6 == 0) {
          local_b0 = 0x96;
          uVar9 = 0x8e;
          goto LAB_143cd76a5;
        }
      }
      RECORD_LAYER_reset_read_sequence(param_1 + 0x800);
      lVar6 = *(longlong *)(param_1 + 0xa8);
      _Dst = (void *)(lVar6 + 0x10);
    }
    if (bVar2) {
      EVP_CIPHER_CTX_reset(lVar4);
      lVar6 = *(longlong *)(param_1 + 0xa8);
    }
    pvVar1 = *(void **)(lVar6 + 0x270);
    iVar3 = EVP_MD_size(lVar8);
    if (iVar3 < 0) {
      local_b0 = 0xca;
    }
    else {
      _Size = (size_t)iVar3;
      iVar3 = IStreamingManager::GetNumWantingResources(uVar9);
      lVar6 = (longlong)iVar3;
      iVar3 = IStreamingManager::GetNumWantingResourcesID(local_a8);
      lVar8 = (longlong)iVar3;
      if ((param_2 == 0x12) || (param_2 == 0x21)) {
        lVar5 = _Size * 2;
        lVar6 = lVar6 * 2 + lVar5;
        uVar7 = lVar6 + lVar8 * 2;
        _Src = pvVar1;
      }
      else {
        lVar5 = lVar6 + _Size * 2;
        lVar6 = lVar5 + lVar8 + lVar6;
        uVar7 = lVar6 + lVar8;
        _Src = (void *)(_Size + (longlong)pvVar1);
      }
      if (*(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x268) < uVar7) {
        local_b0 = 0xe5;
      }
      else {
        _guard_xfg_dispatch_icall_nop(_Dst,_Src,_Size);
        local_b8 = (char *)(lVar6 + (longlong)pvVar1);
        local_b0 = param_2 & 2;
        iVar3 = FUN_143cf75a0(lVar4,local_a8,0,(longlong)pvVar1 + lVar5);
        if (iVar3 != 0) {
          *(undefined4 *)(param_1 + 0x7c) = 0;
          FUN_14004ff40(local_88,0x40);
          FUN_14004ff40(local_a0,0x10);
          return 1;
        }
        local_b0 = 0xed;
      }
    }
  }
LAB_143cd769f:
  uVar9 = 0x44;
LAB_143cd76a5:
  local_b8 = "ssl\\s3_enc.c";
  ossl_statem_fatal(param_1,0x50,0x81,uVar9);
  FUN_14004ff40(local_88,0x40);
  FUN_14004ff40(local_a0,0x10);
  return 0;
}



// FUNCTION 143cd7740 ssl3_cleanup_key_block body=93 status=ok
// SIG undefined ssl3_cleanup_key_block(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl3_cleanup_key_block(longlong param_1)

{
  CRYPTO_clear_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x270),
                    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x268),"ssl\\s3_enc.c",0x141);
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x270) = 0;
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x268) = 0;
  return;
}



// FUNCTION 143cd77a0 ssl3_digest_cached_records body=391 status=ok
// SIG undefined ssl3_digest_cached_records(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_digest_cached_records(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_res8;
  undefined8 uVar5;
  undefined4 uVar6;
  
  uVar6 = 1;
  if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0xe8) == 0) {
    iVar1 = BIO_ctrl(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe0),3,0,&local_res8);
    if (iVar1 < 1) {
      uVar5 = CONCAT44(uVar6,0x188);
      uVar4 = 0x14c;
    }
    else {
      uVar4 = EVP_MD_CTX_new();
      *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe8) = uVar4;
      if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0xe8) == 0) {
        ossl_statem_fatal(param_1,0x50,0x125,0x41,"ssl\\s3_enc.c",CONCAT44(uVar6,399));
        return 0;
      }
      lVar3 = ssl_handshake_md(param_1);
      if (lVar3 != 0) {
        iVar2 = EVP_DigestInit_ex(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe8),lVar3,0);
        if (iVar2 != 0) {
          iVar1 = EVP_DigestUpdate(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe8),local_res8,
                                   (longlong)iVar1);
          if (iVar1 != 0) goto LAB_143cd78e9;
        }
      }
      uVar5 = CONCAT44(uVar6,0x197);
      uVar4 = 0x44;
    }
    ossl_statem_fatal(param_1,0x50,0x125,uVar4,"ssl\\s3_enc.c",uVar5);
    return 0;
  }
LAB_143cd78e9:
  if (param_2 == 0) {
    BIO_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe0));
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe0) = 0;
  }
  return 1;
}



// FUNCTION 143cd7930 ssl3_final_finish_mac body=707 status=ok
// SIG undefined ssl3_final_finish_mac(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ssl3_final_finish_mac
                   (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined8 local_res8;
  
  uVar6 = 1;
  if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0xe8) == 0) {
    uVar6 = 1;
    iVar1 = BIO_ctrl(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe0),3,0,&local_res8);
    if (iVar1 < 1) {
      uVar2 = 0x188;
      uVar4 = 0x14c;
    }
    else {
      uVar4 = EVP_MD_CTX_new();
      *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe8) = uVar4;
      if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0xe8) == 0) {
        uVar2 = 399;
        uVar4 = 0x41;
      }
      else {
        lVar5 = ssl_handshake_md(param_1);
        if (((lVar5 != 0) &&
            (iVar3 = EVP_DigestInit_ex(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe8),lVar5,0
                                      ), iVar3 != 0)) &&
           (iVar1 = EVP_DigestUpdate(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe8),
                                     local_res8,(longlong)iVar1), iVar1 != 0)) goto LAB_143cd7a48;
        uVar2 = 0x197;
        uVar4 = 0x44;
      }
    }
    ossl_statem_fatal(param_1,0x50,0x125,uVar4,"ssl\\s3_enc.c",CONCAT44(uVar6,uVar2));
  }
  else {
LAB_143cd7a48:
    BIO_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe0));
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe0) = 0;
    uVar4 = EVP_MD_CTX_md(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe8));
    iVar1 = FRollingHash::GetWindowSize(uVar4);
    if (iVar1 == 0x72) {
      lVar5 = EVP_MD_CTX_new();
      if (lVar5 == 0) {
        uVar4 = CONCAT44(uVar6,0x1b7);
        uVar6 = 0x41;
      }
      else {
        iVar1 = EVP_MD_CTX_copy_ex(lVar5,*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe8));
        if (iVar1 != 0) {
          uVar4 = EVP_MD_CTX_md(lVar5);
          iVar1 = EVP_MD_size(uVar4);
          if (iVar1 < 0) {
            ossl_statem_fatal(param_1,0x50,0x11d,0x44,"ssl\\s3_enc.c",CONCAT44(uVar6,0x1c3));
            EVP_MD_CTX_reset(lVar5);
            return 0;
          }
          if (((param_2 != 0) && (iVar3 = EVP_DigestUpdate(lVar5,param_2,param_3), iVar3 < 1)) ||
             ((iVar3 = EVP_MD_CTX_ctrl(lVar5,0x1d,
                                       *(undefined4 *)(*(longlong *)(param_1 + 0x508) + 8),
                                       *(longlong *)(param_1 + 0x508) + 0x50), iVar3 < 1 ||
              (iVar3 = EVP_DigestFinal_ex(lVar5,param_4,0), iVar3 < 1)))) {
            ossl_statem_fatal(param_1,0x50,0x11d,0x44,"ssl\\s3_enc.c",CONCAT44(uVar6,0x1ce));
            iVar1 = 0;
          }
          EVP_MD_CTX_free(lVar5);
          return (longlong)iVar1;
        }
        uVar4 = CONCAT44(uVar6,0x1bc);
        uVar6 = 0x44;
      }
    }
    else {
      uVar4 = CONCAT44(uVar6,0x1b0);
      uVar6 = 0x144;
    }
    ossl_statem_fatal(param_1,0x50,0x11d,uVar6,"ssl\\s3_enc.c",uVar4);
  }
  return 0;
}



// FUNCTION 143cd7c00 ssl3_finish_mac body=186 status=ok
// SIG undefined ssl3_finish_mac(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_finish_mac(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = 1;
  if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0xe8) == 0) {
    if (param_3 < 0x80000000) {
      iVar1 = BIO_write(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe0));
      if ((0 < iVar1) && (iVar1 == (int)param_3)) {
        return 1;
      }
      uVar3 = CONCAT44(uVar2,0x170);
      uVar2 = 0x44;
    }
    else {
      uVar3 = 0x10000016a;
      uVar2 = 0xed;
    }
  }
  else {
    iVar1 = EVP_DigestUpdate();
    if (iVar1 != 0) {
      return 1;
    }
    uVar3 = CONCAT44(uVar2,0x177);
    uVar2 = 0x44;
  }
  ossl_statem_fatal(param_1,0x50,0x24b,uVar2,"ssl\\s3_enc.c",uVar3);
  return 0;
}



// FUNCTION 143cd7cc0 ssl3_free_digest_list body=98 status=ok
// SIG undefined ssl3_free_digest_list(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl3_free_digest_list(longlong param_1)

{
  BIO_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe0));
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe0) = 0;
  EVP_MD_CTX_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe8));
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe8) = 0;
  return;
}



// FUNCTION 143cd7d30 ssl3_generate_key_block body=710 status=ok
// SIG undefined ssl3_generate_key_block(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 ssl3_generate_key_block(longlong param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar9;
  char cVar10;
  char cVar11;
  char *pcVar12;
  undefined1 auStack_a8 [32];
  char *local_88;
  undefined4 local_80;
  char local_78;
  undefined4 local_74;
  int local_70;
  undefined1 local_68 [24];
  char local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_78 = 'A';
  uVar9 = 0;
  local_74 = 0;
  local_70 = param_3;
  lVar5 = EVP_MD_CTX_new();
  lVar6 = EVP_MD_CTX_new();
  if ((lVar5 == 0) || (lVar6 == 0)) {
    local_80 = 0x22;
    uVar7 = 0x41;
LAB_143cd7f9e:
    local_88 = "ssl\\s3_enc.c";
    ossl_statem_fatal(param_1,0x50,0xee,uVar7);
  }
  else {
    EVP_MD_CTX_set_flags(lVar5,8);
    cVar10 = 'A';
    iVar4 = 0;
    if (0 < param_3) {
      do {
        uVar9 = uVar9 + 1;
        if (0x10 < uVar9) {
          local_80 = 0x2b;
          uVar7 = 0x44;
          goto LAB_143cd7f9e;
        }
        cVar11 = cVar10;
        if (uVar9 != 0) {
          pcVar12 = local_50;
          for (uVar8 = (ulonglong)uVar9; cVar11 = local_78, uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar12 = cVar10;
            pcVar12 = pcVar12 + 1;
          }
        }
        local_78 = cVar11 + '\x01';
        uVar7 = EVP_sha1();
        iVar1 = EVP_DigestInit_ex(lVar6,uVar7,0);
        if (((((iVar1 == 0) ||
              (iVar1 = EVP_DigestUpdate(lVar6,local_50,(ulonglong)uVar9), iVar1 == 0)) ||
             (iVar1 = EVP_DigestUpdate(lVar6,*(longlong *)(param_1 + 0x508) + 0x50,
                                       *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 8)),
             iVar1 == 0)) ||
            ((iVar1 = EVP_DigestUpdate(lVar6,*(longlong *)(param_1 + 0xa8) + 0x98,0x20), iVar1 == 0
             || (iVar1 = EVP_DigestUpdate(lVar6,*(longlong *)(param_1 + 0xa8) + 0xb8,0x20),
                iVar1 == 0)))) || (iVar1 = EVP_DigestFinal_ex(lVar6,local_68,0), iVar1 == 0)) {
LAB_143cd7f57:
          local_80 = 0x3e;
          uVar7 = 0x44;
          goto LAB_143cd7f9e;
        }
        uVar7 = EVP_md5();
        iVar1 = EVP_DigestInit_ex(lVar5,uVar7,0);
        if (((iVar1 == 0) ||
            (iVar1 = EVP_DigestUpdate(lVar5,*(longlong *)(param_1 + 0x508) + 0x50,
                                      *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 8)),
            iVar1 == 0)) || (iVar2 = EVP_DigestUpdate(lVar5,local_68), iVar1 = local_70, iVar2 == 0)
           ) goto LAB_143cd7f57;
        iVar2 = iVar4 + 0x10;
        if (local_70 < iVar2) {
          iVar3 = EVP_DigestFinal_ex(lVar5,local_68);
          if (iVar3 == 0) {
            local_80 = 0x44;
            uVar7 = 0x44;
            goto LAB_143cd7f9e;
          }
          _guard_xfg_dispatch_icall_nop(param_2,local_68,(ulonglong)(uint)(iVar1 - iVar4));
        }
        else {
          iVar4 = EVP_DigestFinal_ex(lVar5,param_2);
          if (iVar4 == 0) {
            local_80 = 0x4b;
            uVar7 = 0x44;
            goto LAB_143cd7f9e;
          }
        }
        param_2 = (void *)((longlong)param_2 + 0x10);
        cVar10 = local_78;
        iVar4 = iVar2;
      } while (iVar2 < iVar1);
    }
    FUN_14004ff40(local_68,0x14);
    local_74 = 1;
  }
  EVP_MD_CTX_free(lVar5);
  EVP_MD_CTX_free(lVar6);
  return local_74;
}



// FUNCTION 143cd8000 ssl3_generate_master_secret body=619 status=ok
// SIG undefined ssl3_generate_master_secret(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int ssl3_generate_master_secret
              (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
              longlong *param_5)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  undefined **ppuVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  char *local_b8;
  undefined4 local_b0;
  uint local_a8 [2];
  longlong *local_a0;
  undefined1 local_98 [64];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_a0 = param_5;
  lVar4 = EVP_MD_CTX_new();
  lVar9 = 0;
  if (lVar4 == 0) {
    local_b0 = 0x1ed;
    local_b8 = "ssl\\s3_enc.c";
    ossl_statem_fatal(param_1,0x50,0x184,0x41);
    iVar7 = 0;
  }
  else {
    iVar7 = 0;
    ppuVar8 = &PTR_DAT_1468363c0;
    do {
      iVar3 = EVP_DigestInit_ex(lVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x598) + 0xf0),0);
      if (iVar3 < 1) {
LAB_143cd81e7:
        local_b0 = 0x200;
        local_b8 = "ssl\\s3_enc.c";
        ossl_statem_fatal(param_1,0x50,0x184,0x44);
        iVar7 = 0;
        goto LAB_143cd8214;
      }
      pcVar2 = *ppuVar8;
      cVar1 = *pcVar2;
      pcVar5 = pcVar2;
      for (uVar6 = 0; (cVar1 != '\0' && (uVar6 < 0x80000000)); uVar6 = uVar6 + 1) {
        pcVar5 = pcVar5 + 1;
        cVar1 = *pcVar5;
      }
      iVar3 = EVP_DigestUpdate(lVar4,pcVar2,uVar6 & 0x7fffffff);
      if ((((((iVar3 < 1) || (iVar3 = EVP_DigestUpdate(lVar4,param_3,param_4), iVar3 < 1)) ||
            (iVar3 = EVP_DigestUpdate(lVar4,*(longlong *)(param_1 + 0xa8) + 0xb8,0x20), iVar3 < 1))
           || ((iVar3 = EVP_DigestUpdate(lVar4,*(longlong *)(param_1 + 0xa8) + 0x98,0x20), iVar3 < 1
               || (iVar3 = EVP_DigestFinal_ex(lVar4,local_98,local_a8), iVar3 < 1)))) ||
          ((iVar3 = EVP_DigestInit_ex(lVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x598) + 0xe8),0
                                     ), iVar3 < 1 ||
           ((iVar3 = EVP_DigestUpdate(lVar4,param_3,param_4), iVar3 < 1 ||
            (iVar3 = EVP_DigestUpdate(lVar4,local_98,local_a8[0]), iVar3 < 1)))))) ||
         (iVar3 = EVP_DigestFinal_ex(lVar4,param_2), iVar3 < 1)) goto LAB_143cd81e7;
      iVar7 = iVar7 + 1;
      param_2 = param_2 + (ulonglong)local_a8[0];
      lVar9 = lVar9 + (ulonglong)local_a8[0];
      ppuVar8 = ppuVar8 + 1;
    } while (iVar7 < 3);
    iVar7 = 1;
LAB_143cd8214:
    EVP_MD_CTX_free(lVar4);
    FUN_14004ff40(local_98,0x40);
    if (iVar7 != 0) {
      *local_a0 = lVar9;
    }
  }
  return iVar7;
}



// FUNCTION 143cd8270 ssl3_init_finished_mac body=231 status=ok
// SIG undefined ssl3_init_finished_mac(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_init_finished_mac(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  uVar1 = BIO_s_mem();
  lVar2 = BIO_new(uVar1);
  if (lVar2 == 0) {
    ossl_statem_fatal(param_1,0x50,0x18d,0x41,"ssl\\s3_enc.c",CONCAT44(uVar3,0x14c));
    return 0;
  }
  BIO_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe0));
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe0) = 0;
  EVP_MD_CTX_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe8));
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe8) = 0;
  *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0xe0) = lVar2;
  BIO_ctrl(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe0),9,1);
  return 1;
}



// FUNCTION 143cd8360 ssl3_setup_key_block body=597 status=ok
// SIG undefined ssl3_setup_key_block(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 ssl3_setup_key_block(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  undefined8 *puVar6;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x268) != 0) {
    return 1;
  }
  puVar6 = local_res18;
  iVar1 = FUN_143caead0(*(undefined8 *)(param_1 + 0x508),&local_res8,&local_res10,0,0,puVar6,0);
  uVar4 = (undefined4)((ulonglong)puVar6 >> 0x20);
  if (iVar1 != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x278) = local_res8;
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x280) = local_res10;
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x298) = local_res18[0];
    iVar1 = EVP_MD_size(local_res10);
    if (iVar1 < 0) {
      uVar4 = 0;
    }
    else {
      iVar2 = IStreamingManager::GetNumWantingResourcesID(local_res8);
      iVar3 = IStreamingManager::GetNumWantingResources(local_res8);
      iVar1 = (iVar3 + iVar1 + iVar2) * 2;
      CRYPTO_clear_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x270),
                        *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x268),"ssl\\s3_enc.c",0x141
                       );
      *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x270) = 0;
      *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x268) = 0;
      lVar5 = CRYPTO_malloc((longlong)iVar1,"ssl\\s3_enc.c",0x11e);
      if (lVar5 == 0) {
        ossl_statem_fatal(param_1,0x50,0x9d,0x41,"ssl\\s3_enc.c",CONCAT44(uVar4,0x120));
        uVar4 = 0;
      }
      else {
        *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x268) = (longlong)iVar1;
        *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x270) = lVar5;
        uVar4 = ssl3_generate_key_block(param_1,lVar5,iVar1);
        if ((*(uint *)(param_1 + 0x5c4) & 0x800) == 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0xd8) = 1;
          lVar5 = *(longlong *)(param_1 + 0x508);
          if (*(longlong *)(lVar5 + 0x128) != 0) {
            if (*(int *)(*(longlong *)(lVar5 + 0x128) + 0x24) == 0x20) {
              *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0xd8) = 0;
              lVar5 = *(longlong *)(param_1 + 0x508);
            }
            if (*(int *)(*(longlong *)(lVar5 + 0x128) + 0x24) == 4) {
              *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0xd8) = 0;
            }
          }
        }
      }
    }
    return uVar4;
  }
  ossl_statem_fatal(param_1,0x50,0x9d,0x8a,"ssl\\s3_enc.c",CONCAT44(uVar4,0x109));
  return 0;
}



// FUNCTION 143cd85c0 tls1_PRF body=702 status=ok
// SIG undefined tls1_PRF(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
tls1_PRF(undefined8 param_1,longlong param_2,undefined4 param_3,longlong param_4,undefined4 param_5,
        longlong param_6,undefined4 param_7,longlong param_8,undefined4 param_9,longlong param_10,
        undefined4 param_11,longlong param_12,undefined4 param_13,undefined8 param_14,
        undefined8 param_15,int param_16)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  ulonglong in_stack_ffffffffffffffd8;
  undefined4 uVar6;
  undefined8 uVar5;
  longlong lVar7;
  
  lVar7 = 0x143cd85df;
  lVar2 = ssl_prf_md();
  uVar4 = 0;
  if (lVar2 == 0) {
    if (param_16 != 0) {
      ossl_statem_fatal(param_1,0x50,0x11c,0x44,"ssl\\t1_enc.c",0x24);
      return 0;
    }
    ERR_put_error(0x14,0x11c,0x44,"ssl\\t1_enc.c",0x26,lVar7);
    return 0;
  }
  lVar3 = EVP_PKEY_CTX_new_id(0x3fd,0);
  uVar6 = (undefined4)(in_stack_ffffffffffffffd8 >> 0x20);
  if (lVar3 != 0) {
    iVar1 = EVP_PKEY_derive_init(lVar3);
    uVar6 = (undefined4)(in_stack_ffffffffffffffd8 >> 0x20);
    if (0 < iVar1) {
      in_stack_ffffffffffffffd8 = in_stack_ffffffffffffffd8 & 0xffffffff00000000;
      iVar1 = EVP_PKEY_CTX_ctrl(lVar3,0xffffffff,0x400,0x1000,in_stack_ffffffffffffffd8,lVar2);
      uVar6 = (undefined4)(in_stack_ffffffffffffffd8 >> 0x20);
      lVar7 = lVar2;
      if (0 < iVar1) {
        uVar5 = CONCAT44(uVar6,param_13);
        iVar1 = EVP_PKEY_CTX_ctrl(lVar3,0xffffffff,0x400,0x1001,uVar5,param_12);
        uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
        lVar7 = param_12;
        if (0 < iVar1) {
          uVar5 = CONCAT44(uVar6,param_3);
          iVar1 = EVP_PKEY_CTX_ctrl(lVar3,0xffffffff,0x400,0x1002,uVar5,param_2);
          uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
          lVar7 = param_2;
          if (0 < iVar1) {
            uVar5 = CONCAT44(uVar6,param_5);
            iVar1 = EVP_PKEY_CTX_ctrl(lVar3,0xffffffff,0x400,0x1002,uVar5,param_4);
            uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
            lVar7 = param_4;
            if (0 < iVar1) {
              uVar5 = CONCAT44(uVar6,param_7);
              iVar1 = EVP_PKEY_CTX_ctrl(lVar3,0xffffffff,0x400,0x1002,uVar5,param_6);
              uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
              lVar7 = param_6;
              if (0 < iVar1) {
                uVar5 = CONCAT44(uVar6,param_9);
                iVar1 = EVP_PKEY_CTX_ctrl(lVar3,0xffffffff,0x400,0x1002,uVar5,param_8);
                uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
                lVar7 = param_8;
                if (0 < iVar1) {
                  uVar5 = CONCAT44(uVar6,param_11);
                  iVar1 = EVP_PKEY_CTX_ctrl(lVar3,0xffffffff,0x400,0x1002,uVar5,param_10);
                  uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
                  lVar7 = param_10;
                  if ((0 < iVar1) &&
                     (iVar1 = EVP_PKEY_derive(lVar3,param_14,&param_15), lVar7 = param_10, 0 < iVar1
                     )) {
                    uVar4 = 1;
                    goto LAB_143cd8855;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (param_16 == 0) {
    ERR_put_error(0x14,0x11c,0x44,"ssl\\t1_enc.c",CONCAT44(uVar6,0x37),lVar7);
  }
  else {
    ossl_statem_fatal(param_1,0x50,0x11c,0x44,"ssl\\t1_enc.c",0x35);
    uVar4 = 0;
  }
LAB_143cd8855:
  EVP_PKEY_CTX_free(lVar3);
  return uVar4;
}



// FUNCTION 143cd8880 FUN_143cd8880 body=228 status=ok
// SIG undefined FUN_143cd8880(void)

undefined8 FUN_143cd8880(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 0;
  default:
    return 0xffffffff;
  case 10:
    return 10;
  case 0x14:
    return 0x14;
  case 0x15:
    return 0x15;
  case 0x16:
    return 0x16;
  case 0x1e:
    return 0x1e;
  case 0x28:
  case 0x74:
    return 0x28;
  case 0x2a:
    return 0x2a;
  case 0x2b:
    return 0x2b;
  case 0x2c:
    return 0x2c;
  case 0x2d:
    return 0x2d;
  case 0x2e:
    return 0x2e;
  case 0x2f:
    return 0x2f;
  case 0x30:
    return 0x30;
  case 0x31:
    return 0x31;
  case 0x32:
    return 0x32;
  case 0x33:
    return 0x33;
  case 0x3c:
    return 0x3c;
  case 0x46:
    return 0x46;
  case 0x47:
    return 0x47;
  case 0x50:
    return 0x50;
  case 0x56:
    return 0x56;
  case 0x5a:
    return 0x5a;
  case 100:
    return 100;
  case 0x6e:
    return 0x6e;
  case 0x6f:
    return 0x6f;
  case 0x70:
    return 0x70;
  case 0x71:
    return 0x71;
  case 0x72:
    return 0x72;
  case 0x73:
    return 0x73;
  case 0x78:
    return 0x78;
  }
}



// FUNCTION 143cd8a70 tls1_change_cipher_state body=1739 status=ok
// SIG undefined tls1_change_cipher_state(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 tls1_change_cipher_state(longlong param_1,uint param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  size_t _Size;
  void *pvVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  char *pcVar10;
  ulonglong uVar11;
  size_t *psVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  void *_Src;
  void *pvVar16;
  undefined1 auStack_168 [32];
  char *local_148;
  uint local_140;
  longlong local_138;
  uint local_130;
  void *local_128;
  size_t *local_120;
  undefined8 local_118;
  undefined1 local_110 [32];
  undefined1 local_f0 [40];
  undefined1 local_c8 [64];
  undefined1 local_88 [64];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143cd8a8a;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  puVar1 = *(uint **)(param_1 + 0xa8);
  bVar4 = false;
  local_118 = *(undefined8 *)(puVar1 + 0xa0);
  uVar2 = *(undefined8 *)(puVar1 + 0x9e);
  lVar9 = *(longlong *)(puVar1 + 0xa6);
  local_130 = puVar1[0xa2];
  if ((param_2 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x7c) = 1;
    uVar6 = *puVar1 | 0x400;
    if (*(int *)(param_1 + 0x6e4) == 0) {
      uVar6 = *puVar1 & 0xfffffbff;
    }
    *puVar1 = uVar6;
    lVar7 = *(longlong *)(param_1 + 0x460);
    uVar6 = *(uint *)(param_1 + 0x128) | 2;
    if ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x40) & 0x10000) == 0) {
      uVar6 = *(uint *)(param_1 + 0x128) & 0xfffffffd;
    }
    *(uint *)(param_1 + 0x128) = uVar6;
    if ((lVar7 == 0) ||
       ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0)) {
      lVar7 = EVP_CIPHER_CTX_new();
      *(longlong *)(param_1 + 0x460) = lVar7;
      if (lVar7 == 0) {
        local_140 = 0xab;
        uVar15 = 0x41;
        goto LAB_143cd9060;
      }
    }
    else {
      bVar4 = true;
    }
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
      lVar8 = ssl_replace_hash(param_1 + 0x478,0);
      if (lVar8 != 0) goto LAB_143cd8cce;
      local_140 = 0xbd;
      uVar15 = 0x41;
    }
    else {
      lVar8 = EVP_MD_CTX_new();
      if (lVar8 != 0) {
        *(longlong *)(param_1 + 0x478) = lVar8;
LAB_143cd8cce:
        COMP_CTX_free(*(undefined8 *)(param_1 + 0x450));
        *(undefined8 *)(param_1 + 0x450) = 0;
        if (lVar9 != 0) {
          lVar9 = COMP_CTX_new(*(undefined8 *)(lVar9 + 0x10));
          *(longlong *)(param_1 + 0x450) = lVar9;
          if (lVar9 == 0) {
            local_140 = 0xc9;
            uVar15 = 0x8e;
            goto LAB_143cd9060;
          }
        }
        if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
          RECORD_LAYER_reset_write_sequence(param_1 + 0x800);
        }
        lVar9 = *(longlong *)(param_1 + 0xa8);
        local_128 = (void *)(lVar9 + 0x58);
        psVar12 = (size_t *)(lVar9 + 0x50);
        goto LAB_143cd8d61;
      }
      local_140 = 0xb4;
      uVar15 = 0x41;
    }
  }
  else {
    uVar6 = *puVar1 & 0xfffffeff;
    if (*(int *)(param_1 + 0x6e4) != 0) {
      uVar6 = *puVar1 | 0x100;
    }
    *puVar1 = uVar6;
    lVar7 = *(longlong *)(param_1 + 0x430);
    uVar6 = *(uint *)(param_1 + 0x128) | 1;
    if ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x40) & 0x10000) == 0) {
      uVar6 = *(uint *)(param_1 + 0x128) & 0xfffffffe;
    }
    *(uint *)(param_1 + 0x128) = uVar6;
    if (lVar7 == 0) {
      lVar7 = EVP_CIPHER_CTX_new();
      *(longlong *)(param_1 + 0x430) = lVar7;
      if (lVar7 == 0) {
        local_140 = 0x7c;
        uVar15 = 0x41;
        goto LAB_143cd9060;
      }
      EVP_CIPHER_CTX_reset(lVar7);
      lVar7 = *(longlong *)(param_1 + 0x430);
    }
    else {
      bVar4 = true;
    }
    lVar8 = ssl_replace_hash(param_1 + 0x448,0);
    if (lVar8 == 0) goto LAB_143cd907f;
    COMP_CTX_free(*(undefined8 *)(param_1 + 0x458));
    *(undefined8 *)(param_1 + 0x458) = 0;
    if (lVar9 != 0) {
      lVar9 = COMP_CTX_new(*(undefined8 *)(lVar9 + 0x10));
      *(longlong *)(param_1 + 0x458) = lVar9;
      if (lVar9 == 0) {
        local_140 = 0x90;
        uVar15 = 0x8e;
        goto LAB_143cd9060;
      }
    }
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
      RECORD_LAYER_reset_read_sequence(param_1 + 0x800);
    }
    lVar9 = *(longlong *)(param_1 + 0xa8);
    local_128 = (void *)(lVar9 + 0x10);
    psVar12 = (size_t *)(lVar9 + 8);
LAB_143cd8d61:
    local_120 = psVar12;
    if (bVar4) {
      EVP_CIPHER_CTX_reset(lVar7);
      lVar9 = *(longlong *)(param_1 + 0xa8);
    }
    _Size = *(size_t *)(lVar9 + 0x290);
    pvVar3 = *(void **)(lVar9 + 0x270);
    *psVar12 = _Size;
    iVar5 = IStreamingManager::GetNumWantingResources(uVar2);
    local_138 = (longlong)iVar5;
    uVar6 = TResourceArray<unsigned_char,0>::GetResourceDataSize(uVar2);
    if ((uVar6 & 0xf0007) == 6) {
      uVar13 = 4;
    }
    else {
      uVar6 = TResourceArray<unsigned_char,0>::GetResourceDataSize(uVar2);
      if ((uVar6 & 0xf0007) == 7) {
        uVar13 = 4;
      }
      else {
        iVar5 = IStreamingManager::GetNumWantingResourcesID(uVar2);
        uVar13 = (ulonglong)iVar5;
      }
    }
    pvVar16 = local_128;
    if ((param_2 == 0x12) || (param_2 == 0x21)) {
      lVar9 = _Size * 2;
      local_138 = lVar9 + local_138 * 2;
      uVar11 = local_138 + uVar13 * 2;
      _Src = pvVar3;
    }
    else {
      lVar9 = local_138 + _Size * 2;
      local_138 = lVar9 + local_138 + uVar13;
      uVar11 = local_138 + uVar13;
      _Src = (void *)(_Size + (longlong)pvVar3);
    }
    local_138 = local_138 + (longlong)pvVar3;
    lVar9 = (longlong)pvVar3 + lVar9;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x268) < uVar11) {
      local_140 = 0xfc;
    }
    else {
      _guard_xfg_dispatch_icall_nop(local_128,_Src,_Size);
      uVar6 = TResourceArray<unsigned_char,0>::GetResourceDataSize(uVar2);
      if ((uVar6 >> 0x15 & 1) == 0) {
        pcVar10 = (char *)EVP_PKEY_new_mac_key(local_130,0,pvVar16,(int)*local_120);
        if ((pcVar10 == (char *)0x0) ||
           (local_148 = pcVar10, iVar5 = EVP_DigestSignInit(lVar8,0,local_118,0), iVar5 < 1)) {
          EVP_PKEY_free(pcVar10);
          local_140 = 0x10a;
          goto LAB_143cd905a;
        }
        EVP_PKEY_free(pcVar10);
        pvVar16 = local_128;
      }
      param_2 = param_2 & 2;
      uVar6 = TResourceArray<unsigned_char,0>::GetResourceDataSize(uVar2);
      local_140 = param_2;
      if ((uVar6 & 0xf0007) == 6) {
        local_148 = (char *)0x0;
        iVar5 = FUN_143cf75a0(lVar7,uVar2,0,lVar9);
        if ((iVar5 == 0) ||
           (iVar5 = EVP_CIPHER_CTX_ctrl(lVar7,0x12,uVar13 & 0xffffffff,local_138), iVar5 == 0)) {
          local_140 = 0x11d;
        }
        else {
LAB_143cd9018:
          uVar6 = TResourceArray<unsigned_char,0>::GetResourceDataSize(uVar2);
          if ((((uVar6 >> 0x15 & 1) == 0) || (*local_120 == 0)) ||
             (iVar5 = EVP_CIPHER_CTX_ctrl(lVar7,0x17,*local_120 & 0xffffffff,pvVar16), iVar5 != 0))
          {
            *(undefined4 *)(param_1 + 0x7c) = 0;
            FUN_14004ff40(local_c8,0x40);
            FUN_14004ff40(local_88,0x40);
            FUN_14004ff40(local_110,0x20);
            FUN_14004ff40(local_f0,0x20);
            return 1;
          }
          local_140 = 0x13c;
        }
      }
      else {
        uVar6 = TResourceArray<unsigned_char,0>::GetResourceDataSize(uVar2);
        if ((uVar6 & 0xf0007) == 7) {
          local_148 = (char *)0x0;
          uVar6 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x24);
          iVar5 = FUN_143cf75a0(lVar7,uVar2,0,0);
          if ((iVar5 != 0) && (iVar5 = EVP_CIPHER_CTX_ctrl(lVar7,9,0xc,0), iVar5 != 0)) {
            uVar14 = 8;
            if ((uVar6 & 0x30000) == 0) {
              uVar14 = 0x10;
            }
            iVar5 = EVP_CIPHER_CTX_ctrl(lVar7,0x11,uVar14,0);
            if ((iVar5 != 0) &&
               (iVar5 = EVP_CIPHER_CTX_ctrl(lVar7,0x12,uVar13 & 0xffffffff,local_138), iVar5 != 0))
            {
              local_140 = 0xffffffff;
              local_148 = (char *)0x0;
              iVar5 = FUN_143cf75a0(lVar7,0,0,lVar9);
              if (iVar5 != 0) goto LAB_143cd9018;
            }
          }
          local_140 = 0x12d;
        }
        else {
          local_148 = (char *)local_138;
          iVar5 = FUN_143cf75a0(lVar7,uVar2,0,lVar9);
          if (iVar5 != 0) goto LAB_143cd9018;
          local_140 = 0x133;
        }
      }
    }
LAB_143cd905a:
    uVar15 = 0x44;
  }
LAB_143cd9060:
  local_148 = "ssl\\t1_enc.c";
  ossl_statem_fatal(param_1,0x50,0xd1,uVar15);
LAB_143cd907f:
  FUN_14004ff40(local_c8,0x40);
  FUN_14004ff40(local_88,0x40);
  FUN_14004ff40(local_110,0x20);
  FUN_14004ff40(local_f0,0x20);
  return 0;
}



// FUNCTION 143cd9140 tls1_export_keying_material body=623 status=ok
// SIG undefined tls1_export_keying_material(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
tls1_export_keying_material
          (longlong param_1,undefined8 param_2,undefined8 param_3,void *param_4,size_t param_5,
          void *param_6,size_t param_7,int param_8)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong *_Dst;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 in_stack_ffffffffffffff78;
  undefined8 uVar6;
  ulonglong uVar7;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  uVar7 = 0x143cd9161;
  lVar4 = param_5 + 0x40;
  if (param_8 != 0) {
    lVar4 = param_5 + 0x42 + param_7;
  }
  _Dst = (longlong *)CRYPTO_malloc(lVar4,"ssl\\t1_enc.c",0x22a);
  if (_Dst == (longlong *)0x0) {
    uVar6 = CONCAT44(uVar5,0x263);
    uVar5 = 0x41;
  }
  else {
    _guard_xfg_dispatch_icall_nop(_Dst,param_4,param_5);
    lVar2 = *(longlong *)(param_1 + 0xa8);
    uVar6 = *(undefined8 *)(lVar2 + 0xc0);
    *(undefined8 *)((longlong)_Dst + param_5) = *(undefined8 *)(lVar2 + 0xb8);
    ((undefined8 *)((longlong)_Dst + param_5))[1] = uVar6;
    uVar6 = *(undefined8 *)(lVar2 + 0xd0);
    puVar1 = (undefined8 *)((longlong)_Dst + param_5 + 0x10);
    *puVar1 = *(undefined8 *)(lVar2 + 200);
    puVar1[1] = uVar6;
    lVar2 = *(longlong *)(param_1 + 0xa8);
    uVar6 = *(undefined8 *)(lVar2 + 0xa0);
    puVar1 = (undefined8 *)(param_5 + 0x20 + (longlong)_Dst);
    *puVar1 = *(undefined8 *)(lVar2 + 0x98);
    puVar1[1] = uVar6;
    uVar6 = *(undefined8 *)(lVar2 + 0xb0);
    puVar1 = (undefined8 *)(param_5 + 0x30 + (longlong)_Dst);
    *puVar1 = *(undefined8 *)(lVar2 + 0xa8);
    puVar1[1] = uVar6;
    if (param_8 != 0) {
      *(char *)(param_5 + 0x40 + (longlong)_Dst) = (char)(param_7 >> 8);
      *(char *)(param_5 + 0x41 + (longlong)_Dst) = (char)param_7;
      if ((param_7 != 0) || (param_6 != (void *)0x0)) {
        _guard_xfg_dispatch_icall_nop((void *)(param_5 + 0x42 + (longlong)_Dst),param_6,param_7);
      }
    }
    iVar3 = _guard_xfg_dispatch_icall_nop(_Dst,"client finished",0xf);
    if (iVar3 != 0) {
      iVar3 = _guard_xfg_dispatch_icall_nop(_Dst,"server finished",0xf);
      if ((iVar3 != 0) &&
         (((*_Dst != 0x732072657473616d || ((int)_Dst[1] != 0x65726365)) ||
          (*(char *)((longlong)_Dst + 0xc) != 't')))) {
        iVar3 = _guard_xfg_dispatch_icall_nop(_Dst,"extended master secret",0x16);
        if ((iVar3 != 0) &&
           (((*_Dst != 0x617078652079656b || ((int)_Dst[1] != 0x6f69736e)) ||
            (*(char *)((longlong)_Dst + 0xc) != 'n')))) {
          uVar5 = tls1_PRF(param_1,_Dst,lVar4,0,0,0,0,0,0,0,0,*(longlong *)(param_1 + 0x508) + 0x50,
                           *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 8),param_2,param_3,
                           uVar7 & 0xffffffff00000000);
          goto LAB_143cd9379;
        }
      }
    }
    uVar6 = CONCAT44(uVar5,0x25f);
    uVar5 = 0x16f;
  }
  ERR_put_error(0x14,0x13a,uVar5,"ssl\\t1_enc.c",uVar6);
  uVar5 = 0;
LAB_143cd9379:
  CRYPTO_clear_free(_Dst,lVar4,"ssl\\t1_enc.c",0x266);
  return uVar5;
}



// FUNCTION 143cd93b0 tls1_final_finish_mac body=277 status=ok
// SIG undefined tls1_final_finish_mac(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
tls1_final_finish_mac(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88 [2];
  undefined1 local_78 [64];
  ulonglong local_38;
  undefined8 uStack_28;
  
  uStack_28 = 0x143cd93bf;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  iVar1 = ssl3_digest_cached_records(param_1,0);
  if ((iVar1 != 0) && (iVar1 = ssl_handshake_hash(param_1,local_78,0x40,local_88), iVar1 != 0)) {
    local_90 = 1;
    local_98 = 0xc;
    local_b0 = *(longlong *)(param_1 + 0x508) + 0x50;
    local_a8 = *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 8);
    local_b8 = 0;
    local_c0 = 0;
    local_c8 = 0;
    local_d0 = 0;
    local_d8 = 0;
    local_e0 = 0;
    local_e8 = local_88[0];
    local_a0 = param_4;
    iVar1 = tls1_PRF(param_1,param_2,param_3,local_78);
    if (iVar1 != 0) {
      FUN_14004ff40(local_78,local_88[0]);
      return 0xc;
    }
  }
  return 0;
}



// FUNCTION 143cd94d0 tls1_generate_master_secret body=438 status=ok
// SIG undefined tls1_generate_master_secret(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
tls1_generate_master_secret
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 *param_5)

{
  int iVar1;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  longlong local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8 [2];
  undefined1 local_b8 [128];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x143cd94e1;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_f0 = param_3;
  local_e8 = param_4;
  local_e0 = param_2;
  if ((*(byte *)(*(longlong *)(param_1 + 0x508) + 0x1d0) & 1) == 0) {
    local_d0 = 1;
    local_d8 = 0x30;
    local_110 = *(longlong *)(param_1 + 0xa8) + 0x98;
    local_f8 = 0;
    local_100 = 0;
    local_108 = 0x20;
    local_118 = 0;
    local_120 = 0;
    local_128 = 0x20;
    iVar1 = tls1_PRF(param_1,"master secret",0xd,*(longlong *)(param_1 + 0xa8) + 0xb8);
    if (iVar1 != 0) {
LAB_143cd95db:
      *param_5 = 0x30;
      return 1;
    }
  }
  else {
    iVar1 = ssl3_digest_cached_records(param_1,1);
    if ((iVar1 != 0) && (iVar1 = ssl_handshake_hash(param_1,local_b8,0x80,local_c8), iVar1 != 0)) {
      local_d0 = 1;
      local_d8 = 0x30;
      local_f8 = 0;
      local_100 = 0;
      local_108 = 0;
      local_110 = 0;
      local_118 = 0;
      local_120 = 0;
      local_128 = local_c8[0];
      iVar1 = tls1_PRF(param_1,"extended master secret",0x16,local_b8);
      if (iVar1 != 0) {
        FUN_14004ff40(local_b8,local_c8[0]);
        goto LAB_143cd95db;
      }
    }
  }
  return 0;
}



// FUNCTION 143cd9690 tls1_setup_key_block body=732 status=ok
// SIG undefined tls1_setup_key_block(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls1_setup_key_block(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  longlong local_res18;
  undefined8 local_res20;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined1 local_38 [24];
  
  uVar5 = 0;
  local_res8[0] = 0;
  local_res18 = 0;
  if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x268) != 0) {
    return 1;
  }
  puVar6 = local_38;
  iVar1 = FUN_143caead0(*(undefined8 *)(param_1 + 0x508),&local_res10,&local_res20,local_res8,
                        &local_res18,puVar6,*(undefined4 *)(param_1 + 0x6e4));
  uVar7 = (undefined4)((ulonglong)puVar6 >> 0x20);
  if (iVar1 == 0) {
    ossl_statem_fatal(param_1,0x50,0xd3,0x8a,"ssl\\t1_enc.c",CONCAT44(uVar7,0x16e));
    return 0;
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x278) = local_res10;
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x280) = local_res20;
  *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x288) = local_res8[0];
  *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x290) = local_res18;
  iVar1 = IStreamingManager::GetNumWantingResources(local_res10);
  iVar2 = IStreamingManager::GetNumWantingResourcesID(local_res10);
  lVar4 = ((longlong)iVar2 + (longlong)iVar1 + local_res18) * 2;
  ssl3_cleanup_key_block(param_1);
  lVar3 = CRYPTO_malloc(lVar4,"ssl\\t1_enc.c",0x17b);
  if (lVar3 == 0) {
    ossl_statem_fatal(param_1,0x50,0xd3,0x41,"ssl\\t1_enc.c",CONCAT44(uVar7,0x17d));
  }
  else {
    *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x268) = lVar4;
    *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x270) = lVar3;
    iVar1 = tls1_PRF(param_1,"key expansion",0xd,*(longlong *)(param_1 + 0xa8) + 0x98,0x20,
                     *(longlong *)(param_1 + 0xa8) + 0xb8,0x20,0,0,0,0,
                     *(longlong *)(param_1 + 0x508) + 0x50,
                     *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 8),lVar3,lVar4,1);
    if (iVar1 != 0) {
      if (((*(uint *)(param_1 + 0x5c4) & 0x800) == 0) && (**(int **)(param_1 + 8) < 0x302)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0xd8) = 1;
        lVar4 = *(longlong *)(param_1 + 0x508);
        if (*(longlong *)(lVar4 + 0x128) != 0) {
          if (*(int *)(*(longlong *)(lVar4 + 0x128) + 0x24) == 0x20) {
            *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0xd8) = 0;
            lVar4 = *(longlong *)(param_1 + 0x508);
          }
          if (*(int *)(*(longlong *)(lVar4 + 0x128) + 0x24) == 4) {
            *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0xd8) = 0;
          }
        }
      }
      uVar5 = 1;
    }
  }
  return uVar5;
}



// FUNCTION 143cd9970 cmd_SignatureAlgorithms body=77 status=ok
// SIG undefined cmd_SignatureAlgorithms(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool cmd_SignatureAlgorithms(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    iVar1 = FUN_143ca4750(*(longlong *)(param_1 + 0x20));
    return 0 < iVar1;
  }
  iVar1 = FUN_143ca38a0(*(undefined8 *)(param_1 + 0x18),0x62,0,param_2,0x143cd997a);
  return 0 < iVar1;
}



// FUNCTION 143cd99c0 cmd_ClientSignatureAlgorithms body=77 status=ok
// SIG undefined cmd_ClientSignatureAlgorithms(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool cmd_ClientSignatureAlgorithms(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    iVar1 = FUN_143ca4750(*(longlong *)(param_1 + 0x20));
    return 0 < iVar1;
  }
  iVar1 = FUN_143ca38a0(*(undefined8 *)(param_1 + 0x18),0x66,0,param_2,0x143cd99ca);
  return 0 < iVar1;
}



// FUNCTION 143cd9a10 cmd_Curves body=77 status=ok
// SIG undefined cmd_Curves(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool cmd_Curves(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    iVar1 = FUN_143ca4750(*(longlong *)(param_1 + 0x20));
    return 0 < iVar1;
  }
  iVar1 = FUN_143ca38a0(*(undefined8 *)(param_1 + 0x18),0x5c,0,param_2,0x143cd9a1a);
  return 0 < iVar1;
}



// FUNCTION 143cd9a60 cmd_ECDHParameters body=254 status=ok
// SIG undefined cmd_ECDHParameters(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool cmd_ECDHParameters(byte *param_1,char *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 1;
  if (((*param_1 & 2) == 0) ||
     ((iVar1 = _stricmp(param_2,"+automatic"), iVar1 != 0 &&
      (iVar1 = _stricmp(param_2,"automatic"), iVar1 != 0)))) {
    lVar2 = 0;
    if ((*param_1 & 1) == 0) {
LAB_143cd9ada:
      iVar1 = EC_curve_nist2nid(param_2);
      if (((iVar1 != 0) || (iVar1 = OBJ_sn2nid(param_2), iVar1 != 0)) &&
         (lVar2 = EC_KEY_new_by_curve_name(iVar1), lVar2 != 0)) {
        if (*(longlong *)(param_1 + 0x18) == 0) {
          if (*(longlong *)(param_1 + 0x20) != 0) {
            iVar4 = FUN_143ca4750(*(longlong *)(param_1 + 0x20),4,0,lVar2);
          }
        }
        else {
          iVar4 = FUN_143ca38a0(*(longlong *)(param_1 + 0x18),4,0,lVar2);
        }
        EC_KEY_free(lVar2);
        return 0 < iVar4;
      }
      return false;
    }
    do {
      lVar3 = lVar2 + 1;
      if (param_2[lVar2] != (&DAT_145d578bc)[lVar2]) goto LAB_143cd9ada;
      lVar2 = lVar3;
    } while (lVar3 != 5);
  }
  return true;
}



// FUNCTION 143cd9b60 cmd_CipherString body=85 status=ok
// SIG undefined cmd_CipherString(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool cmd_CipherString(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = 1;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar1 = SSL_CTX_set_cipher_list();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    iVar1 = SSL_set_cipher_list(*(longlong *)(param_1 + 0x20),param_2);
  }
  return 0 < iVar1;
}



// FUNCTION 143cd9bc0 cmd_Ciphersuites body=85 status=ok
// SIG undefined cmd_Ciphersuites(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool cmd_Ciphersuites(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = 1;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar1 = SSL_CTX_set_ciphersuites();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    iVar1 = SSL_set_ciphersuites(*(longlong *)(param_1 + 0x20),param_2);
  }
  return 0 < iVar1;
}



// FUNCTION 143cd9c20 cmd_Protocol body=75 status=ok
// SIG undefined cmd_Protocol(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void cmd_Protocol(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xa0) = 9;
  *(undefined ***)(param_1 + 0x98) = &PTR_DAT_145d56930;
  CONF_parse_list(param_2,0x2c,1,ssl_set_option_list,param_1);
  return;
}



// FUNCTION 143cd9c70 cmd_MinProtocol body=29 status=ok
// SIG undefined cmd_MinProtocol(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void cmd_MinProtocol(longlong param_1,undefined8 param_2)

{
  min_max_proto(param_1,param_2,*(undefined8 *)(param_1 + 0x88));
  return;
}



// FUNCTION 143cd9c90 cmd_MaxProtocol body=29 status=ok
// SIG undefined cmd_MaxProtocol(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void cmd_MaxProtocol(longlong param_1,undefined8 param_2)

{
  min_max_proto(param_1,param_2,*(undefined8 *)(param_1 + 0x90));
  return;
}



// FUNCTION 143cd9cb0 cmd_Options body=88 status=ok
// SIG undefined cmd_Options(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 cmd_Options(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    return 0xfffffffd;
  }
  *(undefined8 *)(param_1 + 0xa0) = 0xf;
  *(undefined ***)(param_1 + 0x98) = &PTR_s_SessionTicket_145d56a90;
  uVar1 = CONF_parse_list(param_2,0x2c,1,ssl_set_option_list,param_1);
  return uVar1;
}



// FUNCTION 143cd9d10 cmd_VerifyMode body=88 status=ok
// SIG undefined cmd_VerifyMode(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 cmd_VerifyMode(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    return 0xfffffffd;
  }
  *(undefined8 *)(param_1 + 0xa0) = 6;
  *(undefined ***)(param_1 + 0x98) = &PTR_DAT_145d56c00;
  uVar1 = CONF_parse_list(param_2,0x2c,1,ssl_set_option_list,param_1);
  return uVar1;
}



// FUNCTION 143cd9d70 cmd_Certificate body=237 status=ok
// SIG undefined cmd_Certificate(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool cmd_Certificate(byte *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  plVar2 = (longlong *)0x0;
  iVar4 = 1;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar4 = SSL_CTX_use_certificate_chain_file();
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x130);
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    iVar4 = SSL_use_certificate_chain_file(*(longlong *)(param_1 + 0x20),param_2);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x488);
  }
  if (((0 < iVar4) && (plVar2 != (longlong *)0x0)) && ((*param_1 & 0x40) != 0)) {
    lVar1 = ((*plVar2 - (longlong)plVar2) + -0x20) / 0x28;
    CRYPTO_free(*(undefined8 *)(param_1 + lVar1 * 8 + 0x30),"ssl\\ssl_conf.c",0x1af);
    lVar3 = CRYPTO_strdup(param_2,"ssl\\ssl_conf.c",0x1b0);
    *(longlong *)(param_1 + lVar1 * 8 + 0x30) = lVar3;
    if (lVar3 == 0) {
      iVar4 = 0;
    }
  }
  return 0 < iVar4;
}



// FUNCTION 143cd9e60 cmd_PrivateKey body=114 status=ok
// SIG undefined cmd_PrivateKey(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong cmd_PrivateKey(byte *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = 1;
  if ((*param_1 & 0x20) == 0) {
    return 0xfffffffe;
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar1 = SSL_CTX_use_PrivateKey_file(*(longlong *)(param_1 + 0x18),param_2,1);
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    iVar1 = SSL_use_PrivateKey_file(*(longlong *)(param_1 + 0x20),param_2,1);
  }
  return (ulonglong)(0 < iVar1);
}



// FUNCTION 143cd9ee0 cmd_ServerInfoFile body=47 status=ok
// SIG undefined cmd_ServerInfoFile(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool cmd_ServerInfoFile(longlong param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar1 = SSL_CTX_use_serverinfo_file();
  }
  return 0 < iVar1;
}



// FUNCTION 143cd9f10 cmd_ChainCAPath body=30 status=ok
// SIG undefined cmd_ChainCAPath(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void cmd_ChainCAPath(undefined8 param_1,undefined8 param_2)

{
  do_store(param_1,0,param_2,0);
  return;
}



// FUNCTION 143cd9f30 cmd_ChainCAFile body=28 status=ok
// SIG undefined cmd_ChainCAFile(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void cmd_ChainCAFile(undefined8 param_1,undefined8 param_2)

{
  do_store(param_1,param_2,0,0);
  return;
}



// FUNCTION 143cd9f50 cmd_VerifyCAPath body=31 status=ok
// SIG undefined cmd_VerifyCAPath(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void cmd_VerifyCAPath(undefined8 param_1,undefined8 param_2)

{
  do_store(param_1,0,param_2,1);
  return;
}



// FUNCTION 143cd9f70 cmd_VerifyCAFile body=29 status=ok
// SIG undefined cmd_VerifyCAFile(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void cmd_VerifyCAFile(undefined8 param_1,undefined8 param_2)

{
  do_store(param_1,param_2,0,1);
  return;
}



// FUNCTION 143cd9f90 FUN_143cd9f90 body=86 status=ok
// SIG undefined FUN_143cd9f90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143cd9f90(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 == 0) {
    lVar1 = OPENSSL_sk_new_null();
    *(longlong *)(param_1 + 0xa8) = lVar1;
    if (lVar1 == 0) {
      return;
    }
  }
  SSL_add_file_cert_subjects_to_stack(lVar1,param_2);
  return;
}



// FUNCTION 143cd9ff0 FUN_143cd9ff0 body=86 status=ok
// SIG undefined FUN_143cd9ff0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143cd9ff0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 == 0) {
    lVar1 = OPENSSL_sk_new_null();
    *(longlong *)(param_1 + 0xa8) = lVar1;
    if (lVar1 == 0) {
      return;
    }
  }
  SSL_add_dir_cert_subjects_to_stack(lVar1,param_2);
  return;
}



// FUNCTION 143cda050 cmd_DHParameters body=239 status=ok
// SIG undefined cmd_DHParameters(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool cmd_DHParameters(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar3 = 0;
  if ((*(longlong *)(param_1 + 0x18) == 0) && (*(longlong *)(param_1 + 0x20) == 0)) {
    bVar1 = true;
  }
  else {
    uVar4 = BIO_s_file();
    lVar5 = BIO_new(uVar4);
    lVar6 = 0;
    if (lVar5 != 0) {
      iVar2 = BIO_ctrl(lVar5,0x6c,3,param_2);
      lVar6 = 0;
      if (0 < iVar2) {
        lVar6 = PEM_read_bio_DHparams(lVar5,0,0,0);
        if (lVar6 != 0) {
          iVar3 = 0;
          if (*(longlong *)(param_1 + 0x18) != 0) {
            iVar3 = FUN_143ca38a0(*(longlong *)(param_1 + 0x18),3,0,lVar6);
          }
          if (*(longlong *)(param_1 + 0x20) != 0) {
            iVar3 = FUN_143ca4750(*(longlong *)(param_1 + 0x20),3,0,lVar6);
          }
        }
      }
    }
    DH_free(lVar6);
    BIO_free(lVar5);
    bVar1 = 0 < iVar3;
  }
  return bVar1;
}



// FUNCTION 143cda140 cmd_RecordPadding body=127 status=ok
// SIG undefined cmd_RecordPadding(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong cmd_RecordPadding(longlong param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  iVar1 = atoi(param_2);
  if (iVar1 < 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    uVar2 = SSL_CTX_set_block_padding(*(longlong *)(param_1 + 0x18),(longlong)iVar1);
    uVar3 = (ulonglong)uVar2;
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    uVar3 = FUN_143ca60d0(*(longlong *)(param_1 + 0x20),(longlong)iVar1);
    return uVar3;
  }
  return uVar3;
}



// FUNCTION 143cda1c0 cmd_NumTickets body=127 status=ok
// SIG undefined cmd_NumTickets(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong cmd_NumTickets(longlong param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  iVar1 = atoi(param_2);
  if (iVar1 < 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    uVar2 = SSL_CTX_set_num_tickets(*(longlong *)(param_1 + 0x18),(longlong)iVar1);
    uVar3 = (ulonglong)uVar2;
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    uVar3 = FUN_143ca63b0(*(longlong *)(param_1 + 0x20),(longlong)iVar1);
    return uVar3;
  }
  return uVar3;
}



// FUNCTION 143cda240 SSL_CONF_CTX_finish body=299 status=ok
// SIG undefined SSL_CONF_CTX_finish(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_CONF_CTX_finish(byte *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  byte *pbVar5;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    if (*(longlong *)(param_1 + 0x20) == 0) goto LAB_143cda2f8;
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x488);
  }
  else {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x130);
  }
  if ((plVar3 != (longlong *)0x0) && ((*param_1 & 0x40) != 0)) {
    uVar4 = 0;
    pbVar5 = param_1 + 0x30;
    do {
      plVar3 = plVar3 + 5;
      lVar1 = *(longlong *)pbVar5;
      if (((lVar1 != 0) && (*plVar3 == 0)) && (iVar2 = 1, (*param_1 & 0x20) != 0)) {
        if (*(longlong *)(param_1 + 0x18) != 0) {
          iVar2 = SSL_CTX_use_PrivateKey_file(*(longlong *)(param_1 + 0x18),lVar1,1);
        }
        if (*(longlong *)(param_1 + 0x20) != 0) {
          iVar2 = SSL_use_PrivateKey_file(*(longlong *)(param_1 + 0x20),lVar1,1);
        }
        if (iVar2 < 1) {
          return 0;
        }
      }
      uVar4 = uVar4 + 1;
      pbVar5 = pbVar5 + 8;
    } while (uVar4 < 9);
  }
LAB_143cda2f8:
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      if (*(longlong *)(param_1 + 0x18) == 0) {
        OPENSSL_sk_pop_free(lVar1,X509_NAME_free);
      }
      else {
        SSL_CTX_set0_CA_list(*(longlong *)(param_1 + 0x18),lVar1);
      }
    }
    else {
      SSL_set0_CA_list(*(longlong *)(param_1 + 0x20),lVar1);
    }
    param_1[0xa8] = 0;
    param_1[0xa9] = 0;
    param_1[0xaa] = 0;
    param_1[0xab] = 0;
    param_1[0xac] = 0;
    param_1[0xad] = 0;
    param_1[0xae] = 0;
    param_1[0xaf] = 0;
  }
  return 1;
}



// FUNCTION 143cda370 SSL_CONF_CTX_free body=157 status=ok
// SIG undefined SSL_CONF_CTX_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CONF_CTX_free(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x30);
    lVar2 = 9;
    do {
      CRYPTO_free(*puVar1,"ssl\\ssl_conf.c",0x399);
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    CRYPTO_free(*(undefined8 *)(param_1 + 8),"ssl\\ssl_conf.c",0x39a);
    OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0xa8),X509_NAME_free);
    CRYPTO_free(param_1,"ssl\\ssl_conf.c",0x39c);
  }
  return;
}



// FUNCTION 143cda410 SSL_CONF_CTX_new body=40 status=ok
// SIG undefined SSL_CONF_CTX_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CONF_CTX_new(void)

{
  CRYPTO_zalloc(0xb0,"ssl\\ssl_conf.c",0x36e);
  return;
}



// FUNCTION 143cda440 SSL_CONF_CTX_set_flags body=7 status=ok
// SIG undefined SSL_CONF_CTX_set_flags(void)

void SSL_CONF_CTX_set_flags(uint *param_1,uint param_2)

{
  *param_1 = *param_1 | param_2;
  return;
}



// FUNCTION 143cda450 SSL_CONF_CTX_set_ssl body=117 status=ok
// SIG undefined SSL_CONF_CTX_set_ssl(void)

void SSL_CONF_CTX_set_ssl(longlong param_1,longlong param_2)

{
  *(longlong *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (param_2 != 0) {
    *(longlong *)(param_1 + 0x28) = param_2 + 0x5c4;
    *(longlong *)(param_1 + 0x88) = param_2 + 0x5cc;
    *(longlong *)(param_1 + 0x90) = param_2 + 0x5d0;
    *(longlong *)(param_1 + 0x78) = *(longlong *)(param_2 + 0x488) + 0x1c;
    *(longlong *)(param_1 + 0x80) = param_2 + 0x558;
    return;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  return;
}



// FUNCTION 143cda4d0 SSL_CONF_CTX_set_ssl_ctx body=117 status=ok
// SIG undefined SSL_CONF_CTX_set_ssl_ctx(void)

void SSL_CONF_CTX_set_ssl_ctx(longlong param_1,longlong param_2)

{
  *(longlong *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (param_2 != 0) {
    *(longlong *)(param_1 + 0x28) = param_2 + 0x118;
    *(longlong *)(param_1 + 0x88) = param_2 + 0x120;
    *(longlong *)(param_1 + 0x90) = param_2 + 0x124;
    *(longlong *)(param_1 + 0x78) = *(longlong *)(param_2 + 0x130) + 0x1c;
    *(longlong *)(param_1 + 0x80) = param_2 + 0x150;
    return;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  return;
}



// FUNCTION 143cda550 SSL_CONF_cmd body=491 status=ok
// SIG undefined SSL_CONF_cmd(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 SSL_CONF_cmd(byte *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  uint *puVar4;
  uint uVar5;
  longlong local_res10 [3];
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar7 = 0x143cda565;
  local_res10[0] = param_2;
  if (param_2 == 0) {
    ERR_put_error(0x14,0x14e,0x181,"ssl\\ssl_conf.c",CONCAT44(uVar6,0x31c),0x143cda565);
    return 0;
  }
  iVar2 = ssl_conf_cmd_skip_prefix(param_1,local_res10);
  if (iVar2 != 0) {
    puVar3 = (undefined8 *)ssl_conf_cmd_lookup(param_1,local_res10[0]);
    if (puVar3 != (undefined8 *)0x0) {
      if (*(short *)((longlong)puVar3 + 0x1a) == 4) {
        if ((ulonglong)((longlong)(puVar3 + -0x28baad92) >> 5) < 0x16) {
          lVar1 = ((longlong)(puVar3 + -0x28baad92) >> 5) * 8;
          puVar4 = *(uint **)(param_1 + 0x28);
          if (puVar4 != (uint *)0x0) {
            uVar5 = *(uint *)(&DAT_145d57294 + lVar1) & 0xf00;
            if (uVar5 != 0) {
              if (uVar5 == 0x100) {
                puVar4 = *(uint **)(param_1 + 0x78);
              }
              else {
                if (uVar5 != 0x200) {
                  return 1;
                }
                puVar4 = *(uint **)(param_1 + 0x80);
              }
            }
            if ((*(uint *)(&DAT_145d57294 + lVar1) & 1) == 0) {
              *puVar4 = *puVar4 | *(uint *)(&DAT_145d57290 + lVar1);
              return 1;
            }
            *puVar4 = ~*(uint *)(&DAT_145d57290 + lVar1) & *puVar4;
          }
          return 1;
        }
      }
      else {
        if (param_3 == 0) {
          return 0xfffffffd;
        }
        iVar2 = (*(code *)*puVar3)(param_1,param_3);
        if (0 < iVar2) {
          return 2;
        }
        if (iVar2 == -2) {
          return 0xfffffffe;
        }
        if ((*param_1 & 0x10) != 0) {
          ERR_put_error(0x14,0x14e,0x180,"ssl\\ssl_conf.c",CONCAT44(uVar6,0x332),uVar7);
          ERR_add_error_data(4,&DAT_145d578e4,local_res10[0],", value=",param_3);
          return 0;
        }
      }
      return 0;
    }
    if ((*param_1 & 0x10) != 0) {
      ERR_put_error(0x14,0x14e,0x182,"ssl\\ssl_conf.c",CONCAT44(uVar6,0x339),uVar7);
      ERR_add_error_data(2,&DAT_145d578e4,local_res10[0]);
    }
  }
  return 0xfffffffe;
}



// FUNCTION 143cda740 do_store body=175 status=ok
// SIG undefined do_store(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool do_store(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      return true;
    }
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x488);
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x130);
  }
  lVar4 = 0x1e0;
  if (param_4 == 0) {
    lVar4 = 0x1d8;
  }
  lVar3 = *(longlong *)(lVar4 + lVar2);
  if (lVar3 == 0) {
    lVar3 = X509_STORE_new();
    *(longlong *)(lVar4 + lVar2) = lVar3;
    if (lVar3 == 0) {
      return false;
    }
  }
  iVar1 = X509_STORE_load_locations(lVar3,param_2,param_3);
  return 0 < iVar1;
}



// FUNCTION 143cda7f0 min_max_proto body=187 status=ok
// SIG undefined min_max_proto(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 min_max_proto(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined **ppuVar8;
  
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  if (puVar3 == (undefined8 *)0x0) {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      return 0;
    }
    puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 0x20) + 0x598);
  }
  uVar7 = 0;
  ppuVar8 = &PTR_DAT_145d56a10;
  do {
    pcVar4 = *ppuVar8;
    lVar6 = param_2 - (longlong)pcVar4;
    do {
      cVar1 = *pcVar4;
      cVar2 = pcVar4[lVar6];
      if (cVar1 != cVar2) break;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    if (cVar1 == cVar2) {
      if (*(int *)(&UNK_145d56a18 + uVar7 * 0x10) < 0) {
        return 0;
      }
      uVar5 = FUN_143cb4c10(*(undefined4 *)*puVar3,*(int *)(&UNK_145d56a18 + uVar7 * 0x10),param_3);
      return uVar5;
    }
    uVar7 = uVar7 + 1;
    ppuVar8 = ppuVar8 + 2;
    if (7 < uVar7) {
      return 0;
    }
  } while( true );
}



// FUNCTION 143cda8b0 ssl_conf_cmd_lookup body=221 status=ok
// SIG undefined ssl_conf_cmd_lookup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined * ssl_conf_cmd_lookup(uint *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  if (param_2 != (char *)0x0) {
    uVar8 = 0;
    puVar7 = &DAT_145d56c90;
    do {
      uVar3 = *(ushort *)(puVar7 + 0x18);
      uVar4 = *param_1;
      if (((((uVar3 & 8) == 0) || ((uVar4 & 8) != 0)) && (((uVar3 & 4) == 0 || ((uVar4 & 4) != 0))))
         && (((uVar3 & 0x20) == 0 || ((uVar4 & 0x20) != 0)))) {
        if (((uVar4 & 1) != 0) && (pcVar6 = *(char **)(puVar7 + 0x10), pcVar6 != (char *)0x0)) {
          lVar9 = (longlong)param_2 - (longlong)pcVar6;
          do {
            cVar1 = *pcVar6;
            cVar2 = pcVar6[lVar9];
            if (cVar1 != cVar2) break;
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          if (cVar1 == cVar2) {
            return puVar7;
          }
        }
        if ((((uVar4 & 2) != 0) && (*(char **)(puVar7 + 8) != (char *)0x0)) &&
           (iVar5 = _stricmp(*(char **)(puVar7 + 8),param_2), iVar5 == 0)) {
          return puVar7;
        }
      }
      uVar8 = uVar8 + 1;
      puVar7 = puVar7 + 0x20;
    } while (uVar8 < 0x30);
  }
  return (undefined *)0x0;
}



// FUNCTION 143cda990 ssl_conf_cmd_skip_prefix body=211 status=ok
// SIG undefined ssl_conf_cmd_skip_prefix(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_conf_cmd_skip_prefix(byte *param_1,longlong *param_2)

{
  char cVar1;
  char *_Str1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  
  if ((param_2 != (longlong *)0x0) && (_Str1 = (char *)*param_2, _Str1 != (char *)0x0)) {
    if (*(char **)(param_1 + 8) == (char *)0x0) {
      if ((*param_1 & 1) != 0) {
        if (*_Str1 != '-') {
          return 0;
        }
        if (_Str1[1] == '\0') {
          return 0;
        }
        *param_2 = (longlong)(_Str1 + 1);
      }
      return 1;
    }
    cVar1 = *_Str1;
    pcVar4 = _Str1;
    for (uVar2 = 0; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar4;
    }
    if (((*(ulonglong *)(param_1 + 0x10) < (ulonglong)(uVar2 & 0x7fffffff)) &&
        (((*param_1 & 1) == 0 ||
         (iVar3 = strncmp(_Str1,*(char **)(param_1 + 8),*(ulonglong *)(param_1 + 0x10)), iVar3 == 0)
         ))) && (((*param_1 & 2) == 0 ||
                 (iVar3 = _strnicmp((char *)*param_2,*(char **)(param_1 + 8),
                                    *(size_t *)(param_1 + 0x10)), iVar3 == 0)))) {
      *param_2 = *param_2 + *(longlong *)(param_1 + 0x10);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143cdaa70 ssl_set_option_list body=330 status=ok
// SIG undefined ssl_set_option_list(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_set_option_list(char *param_1,int param_2,uint *param_3)

{
  byte *pbVar1;
  bool bVar2;
  bool bVar3;
  byte *pbVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  bVar3 = true;
  if (param_1 == (char *)0x0) {
    return 0;
  }
  uVar9 = 0;
  bVar2 = false;
  if (param_2 != -1) {
    bVar2 = false;
    if (*param_1 != '+') {
      bVar2 = false;
      if (*param_1 != '-') goto LAB_143cdaacd;
      bVar2 = true;
      bVar3 = false;
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  }
LAB_143cdaacd:
  puVar8 = *(undefined8 **)(param_3 + 0x26);
  if (*(longlong *)(param_3 + 0x28) != 0) {
    do {
      if ((*(uint *)((longlong)puVar8 + 0xc) & *param_3 & 0xc) != 0) {
        if (param_2 == -1) {
          pbVar4 = (byte *)*puVar8;
          lVar10 = (longlong)param_1 - (longlong)pbVar4;
          do {
            pbVar1 = pbVar4 + lVar10;
            iVar6 = (uint)*pbVar4 - (uint)*pbVar1;
            if (iVar6 != 0) break;
            pbVar4 = pbVar4 + 1;
          } while (*pbVar1 != 0);
        }
        else {
          if (*(int *)(puVar8 + 1) != param_2) goto LAB_143cdab2f;
          iVar6 = _strnicmp((char *)*puVar8,param_1,(longlong)param_2);
        }
        if (iVar6 == 0) {
          puVar5 = *(uint **)(param_3 + 10);
          if (puVar5 != (uint *)0x0) {
            if ((*(uint *)((longlong)puVar8 + 0xc) & 1) == 0) {
              bVar2 = bVar3;
            }
            uVar7 = *(uint *)((longlong)puVar8 + 0xc) & 0xf00;
            if (uVar7 != 0) {
              if (uVar7 == 0x100) {
                puVar5 = *(uint **)(param_3 + 0x1e);
              }
              else {
                if (uVar7 != 0x200) {
                  return 1;
                }
                puVar5 = *(uint **)(param_3 + 0x20);
              }
            }
            if (bVar2) {
              *puVar5 = *puVar5 | *(uint *)(puVar8 + 2);
              return 1;
            }
            *puVar5 = ~*(uint *)(puVar8 + 2) & *puVar5;
          }
          return 1;
        }
      }
LAB_143cdab2f:
      uVar9 = uVar9 + 1;
      puVar8 = puVar8 + 3;
    } while (uVar9 < *(ulonglong *)(param_3 + 0x28));
  }
  return 0;
}



// FUNCTION 143cdabc0 pitem_free body=33 status=ok
// SIG undefined pitem_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void pitem_free(undefined8 param_1)

{
  CRYPTO_free(param_1,"ssl\\pqueue.c",0x23);
  return;
}



// FUNCTION 143cdabf0 pitem_new body=129 status=ok
// SIG undefined pitem_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * pitem_new(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143cdac00;
  puVar1 = (undefined8 *)CRYPTO_malloc(0x18,"ssl\\pqueue.c",0x14);
  if (puVar1 == (undefined8 *)0x0) {
    ERR_put_error(0x14,0x270,0x41,"ssl\\pqueue.c",0x17,uVar2);
    return (undefined8 *)0x0;
  }
  *puVar1 = *param_1;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  return puVar1;
}



// FUNCTION 143cdac80 pqueue_find body=67 status=ok
// SIG undefined pqueue_find(void)

longlong * pqueue_find(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_1 = (longlong *)*param_1;
  if (param_1 != (longlong *)0x0) {
    plVar1 = (longlong *)param_1[2];
    while ((plVar2 = (longlong *)0x0, plVar1 != (longlong *)0x0 &&
           (plVar2 = param_1, *param_1 != *param_2))) {
      param_1 = plVar1;
      plVar1 = (longlong *)plVar1[2];
    }
    if (*param_1 == *param_2) {
      plVar2 = param_1;
    }
    if (plVar2 != (longlong *)0x0) {
      return plVar2;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 143cdacd0 pqueue_free body=33 status=ok
// SIG undefined pqueue_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void pqueue_free(undefined8 param_1)

{
  CRYPTO_free(param_1,"ssl\\pqueue.c",0x32);
  return;
}



// FUNCTION 143cdad00 pqueue_insert body=166 status=ok
// SIG undefined pqueue_insert(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void * pqueue_insert(longlong *param_1,void *param_2)

{
  void *pvVar1;
  int iVar2;
  void *_Buf1;
  void *pvVar3;
  
  if ((void *)*param_1 == (void *)0x0) {
    *param_1 = (longlong)param_2;
    return param_2;
  }
  pvVar1 = (void *)*param_1;
  pvVar3 = (void *)0x0;
  do {
    _Buf1 = pvVar1;
    iVar2 = _guard_xfg_dispatch_icall_nop(_Buf1,param_2,8);
    if (0 < iVar2) {
      *(void **)((longlong)param_2 + 0x10) = _Buf1;
      if (pvVar3 == (void *)0x0) {
        *param_1 = (longlong)param_2;
        return param_2;
      }
      goto LAB_143cdad77;
    }
    if (iVar2 == 0) {
      return (void *)0x0;
    }
    pvVar1 = *(void **)((longlong)_Buf1 + 0x10);
    pvVar3 = _Buf1;
  } while (*(void **)((longlong)_Buf1 + 0x10) != (void *)0x0);
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
LAB_143cdad77:
  *(void **)((longlong)pvVar3 + 0x10) = param_2;
  return param_2;
}



// FUNCTION 143cdadb0 pqueue_new body=83 status=ok
// SIG undefined pqueue_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong pqueue_new(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143cdadbc;
  lVar1 = CRYPTO_zalloc(0x10,"ssl\\pqueue.c",0x28);
  if (lVar1 == 0) {
    ERR_put_error(0x14,0x271,0x41,"ssl\\pqueue.c",0x2b,uVar2);
  }
  return lVar1;
}



// FUNCTION 143cdae10 pqueue_next body=24 status=ok
// SIG undefined pqueue_next(void)

longlong pqueue_next(longlong *param_1)

{
  longlong lVar1;
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      *param_1 = *(longlong *)(lVar1 + 0x10);
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 143cdae30 pqueue_pop body=16 status=ok
// SIG undefined pqueue_pop(void)

void pqueue_pop(longlong *param_1)

{
  if (*param_1 != 0) {
    *param_1 = *(longlong *)(*param_1 + 0x10);
  }
  return;
}



// FUNCTION 143cdae40 pqueue_size body=29 status=ok
// SIG undefined pqueue_size(void)

longlong pqueue_size(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  for (lVar1 = *param_1; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x10)) {
    lVar2 = lVar2 + 1;
  }
  return lVar2;
}



// FUNCTION 143cdae60 dtls1_record_bitmap_update body=108 status=ok
// SIG undefined dtls1_record_bitmap_update(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void dtls1_record_bitmap_update(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(param_1 + 0x1698);
  puVar2 = param_2 + 1;
  uVar1 = satsub64be(puVar3);
  if ((int)uVar1 < 1) {
    if (-uVar1 < 0x20) {
      *param_2 = *param_2 | 1 << (-uVar1 & 0x1f);
    }
    return;
  }
  if (uVar1 < 0x20) {
    *param_2 = *param_2 << ((byte)uVar1 & 0x1f) | 1;
    *(undefined8 *)puVar2 = *puVar3;
    return;
  }
  *param_2 = 1;
  *(undefined8 *)puVar2 = *puVar3;
  return;
}



// FUNCTION 143cdaed0 dtls1_record_replay_check body=93 status=ok
// SIG undefined dtls1_record_replay_check(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dtls1_record_replay_check(longlong param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = satsub64be(param_1 + 0x1698,param_2 + 1);
  if ((iVar1 < 1) && ((0x1f < (uint)-iVar1 || ((*param_2 >> (-iVar1 & 0x1fU) & 1) != 0)))) {
    return 0;
  }
  SSL3_RECORD_set_seq_num(param_1 + 0xd48,param_1 + 0x1698);
  return 1;
}



// FUNCTION 143cdaf30 satsub64be body=218 status=ok
// SIG undefined satsub64be(void)

longlong satsub64be(byte *param_1,byte *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)*param_1 << 0x38 | (ulonglong)param_1[1] << 0x30 |
          (ulonglong)param_1[2] << 0x28 | (ulonglong)param_1[3] << 0x20 |
          (ulonglong)param_1[4] << 0x18 | (ulonglong)param_1[5] << 0x10 |
          (ulonglong)CONCAT11(param_1[6],param_1[7]);
  uVar2 = (ulonglong)*param_2 << 0x38 | (ulonglong)param_2[1] << 0x30 |
          (ulonglong)param_2[2] << 0x28 | (ulonglong)param_2[3] << 0x20 |
          (ulonglong)param_2[4] << 0x18 | (ulonglong)param_2[5] << 0x10 |
          (ulonglong)CONCAT11(param_2[6],param_2[7]);
  lVar1 = uVar3 - uVar2;
  if ((uVar2 < uVar3) && (lVar1 < 0)) {
    return 0x80;
  }
  if ((uVar2 <= uVar3) || (lVar1 < 1)) {
    if (0x80 < lVar1) {
      return 0x80;
    }
    if (-0x81 < lVar1) {
      return lVar1;
    }
  }
  return 0xffffff80;
}



// FUNCTION 143cdb010 tls_construct_stoc_alpn body=248 status=ok
// SIG undefined tls_construct_stoc_alpn(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_stoc_alpn(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x3e0) == 0) {
    return 2;
  }
  iVar1 = WPACKET_put_bytes__(param_2,0x10,2);
  if (iVar1 != 0) {
    iVar1 = WPACKET_start_sub_packet_len__(param_2,2);
    if (iVar1 != 0) {
      iVar1 = WPACKET_start_sub_packet_len__(param_2,2);
      if (iVar1 != 0) {
        iVar1 = WPACKET_sub_memcpy__
                          (param_2,*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3e0),
                           *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 1000),1);
        if (iVar1 != 0) {
          iVar1 = WPACKET_close(param_2);
          if (iVar1 != 0) {
            iVar1 = WPACKET_close(param_2);
            if (iVar1 != 0) {
              return 1;
            }
          }
        }
      }
    }
  }
  ossl_statem_fatal(param_1,0x50,0x1c3,0x44,"ssl\\statem\\extensions_srvr.c",CONCAT44(uVar2,0x620));
  return 0;
}



// FUNCTION 143cdb110 tls_construct_stoc_cookie body=1233 status=ok
// SIG undefined tls_construct_stoc_cookie(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

undefined8 tls_construct_stoc_cookie(longlong param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong local_res8;
  undefined4 uVar7;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28 [2];
  
  local_28[1] = 0x143cdb128;
  uVar6 = 0;
  if ((**(uint **)(param_1 + 0xa8) & 0x800) == 0) {
    return 2;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x598) + 0xd0) == 0) {
    uVar7 = 0x6e5;
    uVar6 = 0x11f;
    goto LAB_143cdb5af;
  }
  iVar1 = WPACKET_put_bytes__(param_2,0x2c,2);
  if ((((((iVar1 == 0) || (iVar1 = WPACKET_start_sub_packet_len__(param_2,2), iVar1 == 0)) ||
        (iVar1 = WPACKET_start_sub_packet_len__(param_2,2), iVar1 == 0)) ||
       (((iVar1 = WPACKET_get_total_written(param_2,&local_30), iVar1 == 0 ||
         (iVar1 = WPACKET_reserve_bytes(param_2,0x1072,&local_58), iVar1 == 0)) ||
        ((iVar1 = WPACKET_put_bytes__(param_2,0,2), iVar1 == 0 ||
         ((iVar1 = WPACKET_put_bytes__(param_2,0x304,2), iVar1 == 0 ||
          (iVar1 = WPACKET_put_bytes__(param_2,*(undefined2 *)
                                                (*(longlong *)(param_1 + 0xa8) + 0x406),2),
          iVar1 == 0)))))))) ||
      (iVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0x98))
                         (*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x238),param_2,
                          local_28 + 1), iVar1 == 0)) ||
     (iVar1 = WPACKET_put_bytes__(param_2,*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x408) == 0,
                                  1), iVar1 == 0)) {
LAB_143cdb59e:
    uVar7 = 0x6f9;
  }
  else {
    uVar2 = _time64((__time64_t *)0x0);
    iVar1 = WPACKET_put_bytes__(param_2,uVar2 & 0xffffffff,4);
    if (((iVar1 == 0) || (iVar1 = WPACKET_start_sub_packet_len__(param_2,2), iVar1 == 0)) ||
       (iVar1 = WPACKET_reserve_bytes(param_2,0x40,&local_78), iVar1 == 0)) goto LAB_143cdb59e;
    iVar1 = ssl3_digest_cached_records(param_1,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = ssl_handshake_hash(param_1,local_78,0x40,&local_50);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = WPACKET_allocate_bytes(param_2,local_50,&local_48);
    if (((iVar1 == 0) || (local_78 != local_48)) ||
       ((iVar1 = WPACKET_close(param_2), iVar1 == 0 ||
        ((iVar1 = WPACKET_start_sub_packet_len__(param_2,1), iVar1 == 0 ||
         (iVar1 = WPACKET_reserve_bytes(param_2,0x1000,&local_70), iVar1 == 0)))))) {
      uVar7 = 0x70e;
    }
    else {
      iVar1 = (**(code **)(*(longlong *)(param_1 + 0x598) + 0xd0))(param_1,local_70,&local_40);
      if (iVar1 == 0) {
        uVar7 = 0x715;
        uVar6 = 400;
        goto LAB_143cdb5af;
      }
      iVar1 = WPACKET_allocate_bytes(param_2,local_40,&local_38);
      if ((((iVar1 == 0) || (local_70 != local_38)) || (iVar1 = WPACKET_close(param_2), iVar1 == 0))
         || ((iVar1 = WPACKET_get_total_written(param_2,&local_res8), iVar1 == 0 ||
             (iVar1 = WPACKET_reserve_bytes(param_2,0x20,&local_60), iVar1 == 0)))) {
        uVar7 = 0x71f;
      }
      else {
        local_res8 = local_res8 - local_30;
        local_68 = 0x20;
        if (local_res8 < 0x1053) {
          lVar3 = EVP_MD_CTX_new();
          lVar4 = EVP_PKEY_new_raw_private_key(0x357,0,*(longlong *)(param_1 + 0x738) + 0x298,0x20);
          if ((lVar3 == 0) || (lVar4 == 0)) {
            uVar7 = 0x733;
            uVar5 = 0x41;
          }
          else {
            uVar5 = EVP_sha256();
            iVar1 = EVP_DigestSignInit(lVar3,0,uVar5,0,lVar4);
            if ((iVar1 < 1) ||
               (iVar1 = EVP_DigestSign(lVar3,local_60,&local_68,local_58,local_res8), iVar1 < 1)) {
              uVar7 = 0x73b;
              uVar5 = 0x44;
            }
            else if (local_res8 + local_68 < 0x1073) {
              iVar1 = WPACKET_allocate_bytes(param_2,local_68,local_28);
              if ((((iVar1 != 0) && (local_60 == local_28[0])) &&
                  (local_58 == local_60 - local_res8)) &&
                 ((iVar1 = WPACKET_close(param_2), iVar1 != 0 &&
                  (iVar1 = WPACKET_close(param_2), iVar1 != 0)))) {
                uVar6 = 1;
                goto LAB_143cdb565;
              }
              uVar7 = 0x74b;
              uVar5 = 0x44;
            }
            else {
              uVar7 = 0x741;
              uVar5 = 0x44;
            }
          }
          ossl_statem_fatal(param_1,0x50,0x265,uVar5,"ssl\\statem\\extensions_srvr.c",uVar7);
LAB_143cdb565:
          EVP_MD_CTX_free(lVar3);
          EVP_PKEY_free(lVar4);
          return uVar6;
        }
        uVar7 = 0x727;
      }
    }
  }
  uVar6 = 0x44;
LAB_143cdb5af:
  ossl_statem_fatal(param_1,0x50,0x265,uVar6,"ssl\\statem\\extensions_srvr.c",uVar7);
  return 0;
}



// FUNCTION 143cdb5f0 tls_construct_stoc_cryptopro_bug body=259 status=ok
// SIG undefined tls_construct_stoc_cryptopro_bug(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 tls_construct_stoc_cryptopro_bug(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  char *local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  local_38 = 0x2000e8fd;
  local_34 = 0x8301e30;
  local_30 = 0x852a0606;
  local_2c = 0x9020203;
  local_28 = 0x6060830;
  local_24 = 0x203852a;
  local_20 = 0x8301602;
  local_1c = 0x852a0606;
  local_18 = 0x17020203;
  if ((*(ushort *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x18) - 0x80 < 2) &&
     (iVar1 = SSL_get_options(param_1), iVar1 < 0)) {
    iVar1 = WPACKET_memcpy(param_2,&local_38,0x24);
    if (iVar1 == 0) {
      local_40 = 0x76e;
      local_48 = "ssl\\statem\\extensions_srvr.c";
      ossl_statem_fatal(param_1,0x50,0x1c4,0x44);
      return 0;
    }
    return 1;
  }
  return 2;
}



// FUNCTION 143cdb700 tls_construct_stoc_early_data body=273 status=ok
// SIG undefined tls_construct_stoc_early_data(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_stoc_early_data(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar4;
  undefined4 uVar3;
  
  uVar3 = 1;
  uVar4 = 1;
  if (param_3 == 0x2000) {
    if (*(int *)(param_1 + 0x16e0) == 0) {
      return 2;
    }
    iVar1 = WPACKET_put_bytes__(param_2,0x2a,2);
    if (((iVar1 != 0) && (iVar1 = WPACKET_start_sub_packet_len__(param_2,2), iVar1 != 0)) &&
       ((iVar1 = WPACKET_put_bytes__(param_2,*(undefined4 *)(param_1 + 0x16e0),4), iVar1 != 0 &&
        (iVar1 = WPACKET_close(param_2), iVar1 != 0)))) {
      return 1;
    }
    uVar2 = CONCAT44(uVar3,0x782);
  }
  else {
    if (*(int *)(param_1 + 0x6e8) != 2) {
      return 2;
    }
    iVar1 = WPACKET_put_bytes__(param_2,0x2a,2);
    if (((iVar1 != 0) && (iVar1 = WPACKET_start_sub_packet_len__(param_2,2), iVar1 != 0)) &&
       (iVar1 = WPACKET_close(param_2), iVar1 != 0)) {
      return 1;
    }
    uVar2 = CONCAT44(uVar4,0x790);
  }
  ossl_statem_fatal(param_1,0x50,0x213,0x44,"ssl\\statem\\extensions_srvr.c",uVar2);
  return 0;
}



// FUNCTION 143cdb820 tls_construct_stoc_ec_pt_formats body=252 status=ok
// SIG undefined tls_construct_stoc_ec_pt_formats(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_stoc_ec_pt_formats(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 local_res8;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143cdb830;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238);
  if ((((*(byte *)(lVar1 + 0x1c) & 4) != 0) || ((*(byte *)(lVar1 + 0x20) & 8) != 0)) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x168) != 0)) {
    tls1_get_formatlist(param_1,&local_18,&local_res8);
    iVar2 = WPACKET_put_bytes__(param_2,0xb,2);
    if (iVar2 != 0) {
      iVar2 = WPACKET_start_sub_packet_len__(param_2,2);
      if (iVar2 != 0) {
        iVar2 = WPACKET_sub_memcpy__(param_2,local_18,local_res8,1);
        if (iVar2 != 0) {
          iVar2 = WPACKET_close(param_2);
          if (iVar2 != 0) {
            return 1;
          }
        }
      }
    }
    ossl_statem_fatal(param_1,0x50,0x1c5,0x44,"ssl\\statem\\extensions_srvr.c",0x570);
    return 0;
  }
  return 2;
}



// FUNCTION 143cdb920 tls_construct_stoc_ems body=167 status=ok
// SIG undefined tls_construct_stoc_ems(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_stoc_ems(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if ((**(uint **)(param_1 + 0xa8) & 0x200) == 0) {
    return 2;
  }
  iVar1 = WPACKET_put_bytes__(param_2,0x17,2);
  if (iVar1 != 0) {
    iVar1 = WPACKET_put_bytes__(param_2,0,2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  ossl_statem_fatal(param_1,0x50,0x1c6,0x44,"ssl\\statem\\extensions_srvr.c",CONCAT44(uVar2,0x663));
  return 0;
}



// FUNCTION 143cdb9d0 tls_construct_stoc_etm body=221 status=ok
// SIG undefined tls_construct_stoc_etm(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_stoc_etm(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  if (*(int *)(param_1 + 0x6e4) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238);
    if ((((*(int *)(lVar1 + 0x28) != 0x40) && (iVar2 = *(int *)(lVar1 + 0x24), iVar2 != 4)) &&
        (iVar2 != 0x400)) && (iVar2 != 0x40000)) {
      iVar2 = WPACKET_put_bytes__(param_2,0x16,2);
      if (iVar2 != 0) {
        iVar2 = WPACKET_put_bytes__(param_2,0,2);
        if (iVar2 != 0) {
          return 1;
        }
      }
      ossl_statem_fatal(param_1,0x50,0x1c7,0x44,"ssl\\statem\\extensions_srvr.c",
                        CONCAT44(uVar3,0x653));
      return 0;
    }
    *(undefined4 *)(param_1 + 0x6e4) = 0;
  }
  return 2;
}



// FUNCTION 143cdbab0 tls_construct_stoc_key_share body=713 status=ok
// SIG undefined tls_construct_stoc_key_share(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool tls_construct_stoc_key_share(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_res8;
  undefined4 uVar6;
  undefined8 uVar5;
  undefined4 uVar8;
  undefined4 uVar7;
  
  uVar8 = 1;
  uVar7 = 1;
  uVar6 = 1;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x408);
  if (*(int *)(param_1 + 0x4d8) == 1) {
    if (lVar1 != 0) {
      return (bool)2;
    }
    iVar2 = WPACKET_put_bytes__(param_2,0x33,2);
    if (((iVar2 != 0) && (iVar2 = WPACKET_start_sub_packet_len__(param_2,2), iVar2 != 0)) &&
       ((iVar2 = WPACKET_put_bytes__(param_2,*(undefined2 *)(*(longlong *)(param_1 + 0xa8) + 0x406),
                                     2), iVar2 != 0 && (iVar2 = WPACKET_close(param_2), iVar2 != 0))
       )) {
      return true;
    }
    uVar5 = CONCAT44(uVar7,0x696);
  }
  else if (lVar1 == 0) {
    if ((*(int *)(param_1 + 200) != 0) &&
       (uVar6 = 1, iVar2 = tls13_generate_handshake_secret(param_1,0,0), iVar2 != 0)) {
      return (bool)2;
    }
    uVar5 = CONCAT44(uVar6,0x6a1);
  }
  else {
    iVar2 = WPACKET_put_bytes__(param_2,0x33,2);
    if (((iVar2 != 0) && (iVar2 = WPACKET_start_sub_packet_len__(param_2,2), iVar2 != 0)) &&
       (iVar2 = WPACKET_put_bytes__(param_2,*(undefined2 *)(*(longlong *)(param_1 + 0xa8) + 0x406),2
                                   ), iVar2 != 0)) {
      lVar3 = ssl_generate_pkey(lVar1);
      if (lVar3 == 0) {
        ossl_statem_fatal(param_1,0x50,0x1c8,0x41,"ssl\\statem\\extensions_srvr.c",
                          CONCAT44(uVar8,0x6b2));
      }
      else {
        lVar4 = EVP_PKEY_get1_tls_encodedpoint(lVar3,&local_res8);
        if (lVar4 == 0) {
          ossl_statem_fatal(param_1,0x50,0x1c8,0x10,"ssl\\statem\\extensions_srvr.c",
                            CONCAT44(uVar8,0x6ba));
          EVP_PKEY_free(lVar3);
        }
        else {
          iVar2 = WPACKET_sub_memcpy__(param_2,local_res8,lVar4,2);
          if ((iVar2 != 0) && (iVar2 = WPACKET_close(param_2), iVar2 != 0)) {
            CRYPTO_free(local_res8,"ssl\\statem\\extensions_srvr.c",0x6c7);
            *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x240) = lVar3;
            iVar2 = ssl_derive(param_1,lVar3,lVar1,1);
            return iVar2 != 0;
          }
          ossl_statem_fatal(param_1,0x50,0x1c8,0x44,"ssl\\statem\\extensions_srvr.c",
                            CONCAT44(uVar8,0x6c2));
          EVP_PKEY_free(lVar3);
          CRYPTO_free(local_res8,"ssl\\statem\\extensions_srvr.c",0x6c4);
        }
      }
      return false;
    }
    uVar5 = CONCAT44(uVar8,0x6ab);
  }
  ossl_statem_fatal(param_1,0x50,0x1c8,0x44,"ssl\\statem\\extensions_srvr.c",uVar5);
  return false;
}



// FUNCTION 143cdbd80 tls_construct_stoc_maxfragmentlen body=223 status=ok
// SIG undefined tls_construct_stoc_maxfragmentlen(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_stoc_maxfragmentlen(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (3 < (byte)(*(char *)(*(longlong *)(param_1 + 0x508) + 0x1b0) - 1U)) {
    return 2;
  }
  iVar1 = WPACKET_put_bytes__(param_2,1,2);
  if (iVar1 != 0) {
    iVar1 = WPACKET_start_sub_packet_len__(param_2,2);
    if (iVar1 != 0) {
      iVar1 = WPACKET_put_bytes__(param_2,*(undefined1 *)(*(longlong *)(param_1 + 0x508) + 0x1b0),1)
      ;
      if (iVar1 != 0) {
        iVar1 = WPACKET_close(param_2);
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
  }
  ossl_statem_fatal(param_1,0x50,0x224,0x44,"ssl\\statem\\extensions_srvr.c",CONCAT44(uVar2,0x554));
  return 0;
}



// FUNCTION 143cdbe60 tls_construct_stoc_next_proto_neg body=258 status=ok
// SIG undefined tls_construct_stoc_next_proto_neg(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_stoc_next_proto_neg(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 local_res8 [2];
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143cdbe70;
  iVar2 = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x3dc);
  *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x3dc) = 0;
  if (iVar2 != 0) {
    pcVar1 = *(code **)(*(longlong *)(param_1 + 0x598) + 0x278);
    if (pcVar1 != (code *)0x0) {
      iVar2 = (*pcVar1)(param_1,&local_18,local_res8,
                        *(undefined8 *)(*(longlong *)(param_1 + 0x598) + 0x280));
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = WPACKET_put_bytes__(param_2,0x3374,2);
      if ((iVar2 != 0) &&
         (iVar2 = WPACKET_sub_memcpy__(param_2,local_18,local_res8[0],2), iVar2 != 0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x3dc) = 1;
        return 1;
      }
      ossl_statem_fatal(param_1,0x50,0x1c9,0x44,"ssl\\statem\\extensions_srvr.c",0x607);
      return 0;
    }
  }
  return 2;
}



// FUNCTION 143cdbf70 tls_construct_stoc_psk body=203 status=ok
// SIG undefined tls_construct_stoc_psk(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_stoc_psk(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(int *)(param_1 + 200) == 0) {
    return 2;
  }
  iVar1 = WPACKET_put_bytes__(param_2,0x29,2);
  if (iVar1 != 0) {
    iVar1 = WPACKET_start_sub_packet_len__(param_2,2);
    if (iVar1 != 0) {
      iVar1 = WPACKET_put_bytes__(param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x508) + 0x198),2)
      ;
      if (iVar1 != 0) {
        iVar1 = WPACKET_close(param_2);
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
  }
  ossl_statem_fatal(param_1,0x50,0x1f8,0x44,"ssl\\statem\\extensions_srvr.c",CONCAT44(uVar2,0x7a2));
  return 0;
}



// FUNCTION 143cdc040 tls_construct_stoc_renegotiate body=280 status=ok
// SIG undefined tls_construct_stoc_renegotiate(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_stoc_renegotiate(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x3d8) == 0) {
    return 2;
  }
  iVar1 = WPACKET_put_bytes__(param_2,0xff01,2);
  if (iVar1 != 0) {
    iVar1 = WPACKET_start_sub_packet_len__(param_2,2);
    if (iVar1 != 0) {
      iVar1 = WPACKET_start_sub_packet_len__(param_2,1);
      if (iVar1 != 0) {
        iVar1 = WPACKET_memcpy(param_2,*(longlong *)(param_1 + 0xa8) + 0x348,
                               *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x388));
        if (iVar1 != 0) {
          iVar1 = WPACKET_memcpy(param_2,*(longlong *)(param_1 + 0xa8) + 0x390,
                                 *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3d0));
          if (iVar1 != 0) {
            iVar1 = WPACKET_close(param_2);
            if (iVar1 != 0) {
              iVar1 = WPACKET_close(param_2);
              if (iVar1 != 0) {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  ossl_statem_fatal(param_1,0x50,0x1ca,0x44,"ssl\\statem\\extensions_srvr.c",CONCAT44(uVar2,0x52a));
  return 0;
}



// FUNCTION 143cdc160 tls_construct_stoc_server_name body=177 status=ok
// SIG undefined tls_construct_stoc_server_name(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_stoc_server_name(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (((*(int *)(param_1 + 200) == 0) && (*(int *)(param_1 + 0x710) == 1)) &&
     (*(longlong *)(param_1 + 0x630) != 0)) {
    iVar1 = WPACKET_put_bytes__(param_2,0,2);
    if (iVar1 != 0) {
      iVar1 = WPACKET_put_bytes__(param_2,0,2);
      if (iVar1 != 0) {
        return 1;
      }
    }
    ossl_statem_fatal(param_1,0x50,0x1cb,0x44,"ssl\\statem\\extensions_srvr.c",CONCAT44(uVar2,0x53c)
                     );
    return 0;
  }
  return 2;
}



// FUNCTION 143cdc220 tls_construct_stoc_session_ticket body=180 status=ok
// SIG undefined tls_construct_stoc_session_ticket(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_stoc_session_ticket(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(int *)(param_1 + 0x670) != 0) {
    iVar1 = tls_use_ticket();
    if (iVar1 != 0) {
      iVar1 = WPACKET_put_bytes__(param_2,0x23,2);
      if (iVar1 != 0) {
        iVar1 = WPACKET_put_bytes__(param_2,0,2);
        if (iVar1 != 0) {
          return 1;
        }
      }
      ossl_statem_fatal(param_1,0x50,0x1cc,0x44,"ssl\\statem\\extensions_srvr.c",
                        CONCAT44(uVar2,0x5c6));
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 0x670) = 0;
  return 2;
}



// FUNCTION 143cdc2e0 tls_construct_stoc_status_request body=287 status=ok
// SIG undefined tls_construct_stoc_status_request(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
tls_construct_stoc_status_request
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          longlong param_5)

{
  int iVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  
  uVar3 = 1;
  if ((*(int *)(param_1 + 0x64c) == 0) ||
     (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0 &&
        (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) && (iVar1 != 0x10000)) && (param_5 != 0)))
     ) {
    return 2;
  }
  iVar1 = WPACKET_put_bytes__(param_2,5,2);
  if ((iVar1 == 0) || (iVar1 = WPACKET_start_sub_packet_len__(param_2,2), iVar1 == 0)) {
    uVar2 = CONCAT44(uVar3,0x5db);
  }
  else {
    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
        (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) &&
       ((iVar1 != 0x10000 && (iVar1 = tls_construct_cert_status(param_1,param_2), iVar1 == 0)))) {
      return 0;
    }
    iVar1 = WPACKET_close(param_2);
    if (iVar1 != 0) {
      return 1;
    }
    uVar2 = CONCAT44(uVar3,0x5ea);
  }
  ossl_statem_fatal(param_1,0x50,0x1cd,0x44,"ssl\\statem\\extensions_srvr.c",uVar2);
  return 0;
}



// FUNCTION 143cdc400 tls_construct_stoc_supported_groups body=386 status=ok
// SIG undefined tls_construct_stoc_supported_groups(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_stoc_supported_groups(longlong param_1,undefined8 param_2)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  undefined4 uVar6;
  longlong local_28 [2];
  
  local_28[1] = 0x143cdc418;
  bVar2 = true;
  if (*(short *)(*(longlong *)(param_1 + 0xa8) + 0x406) == 0) {
LAB_143cdc56a:
    uVar4 = 2;
  }
  else {
    tls1_get_supported_groups(param_1,local_28,&local_res8);
    if (local_res8 == 0) {
      uVar6 = 0x588;
    }
    else {
      uVar5 = 0;
      if (local_res8 != 0) {
        do {
          sVar1 = *(short *)(local_28[0] + uVar5 * 2);
          iVar3 = tls_curve_allowed(param_1,sVar1,0x20004);
          if (iVar3 != 0) {
            if (bVar2) {
              if (*(short *)(*(longlong *)(param_1 + 0xa8) + 0x406) == sVar1) goto LAB_143cdc56a;
              iVar3 = WPACKET_put_bytes__(param_2,10,2);
              if (((iVar3 == 0) || (iVar3 = WPACKET_start_sub_packet_len__(param_2,2), iVar3 == 0))
                 || (iVar3 = WPACKET_start_sub_packet_len__(param_2,2), iVar3 == 0)) {
                uVar6 = 0x5a0;
                goto LAB_143cdc45b;
              }
              bVar2 = false;
            }
            iVar3 = WPACKET_put_bytes__(param_2,sVar1,2);
            if (iVar3 == 0) {
              uVar6 = 0x5a9;
              goto LAB_143cdc45b;
            }
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_res8);
      }
      iVar3 = WPACKET_close(param_2);
      if ((iVar3 != 0) && (iVar3 = WPACKET_close(param_2), iVar3 != 0)) {
        return 1;
      }
      uVar6 = 0x5b2;
    }
LAB_143cdc45b:
    ossl_statem_fatal(param_1,0x50,0x220,0x44,"ssl\\statem\\extensions_srvr.c",uVar6);
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 143cdc590 tls_construct_stoc_supported_versions body=211 status=ok
// SIG undefined tls_construct_stoc_supported_versions(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_stoc_supported_versions(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
      (iVar1 = **(int **)(param_1 + 2), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
    iVar1 = WPACKET_put_bytes__(param_2,0x2b,2);
    if (iVar1 != 0) {
      iVar1 = WPACKET_start_sub_packet_len__(param_2,2);
      if (iVar1 != 0) {
        iVar1 = WPACKET_put_bytes__(param_2,*param_1,2);
        if (iVar1 != 0) {
          iVar1 = WPACKET_close(param_2);
          if (iVar1 != 0) {
            return 1;
          }
        }
      }
    }
    uVar2 = CONCAT44(uVar3,0x67b);
  }
  else {
    uVar2 = 0x100000671;
  }
  ossl_statem_fatal(param_1,0x50,0x263,0x44,"ssl\\statem\\extensions_srvr.c",uVar2);
  return 0;
}



// FUNCTION 143cdc670 tls_construct_stoc_use_srtp body=239 status=ok
// SIG undefined tls_construct_stoc_use_srtp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_stoc_use_srtp(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(longlong *)(param_1 + 0x748) == 0) {
    return 2;
  }
  iVar1 = WPACKET_put_bytes__(param_2,0xe,2);
  if (iVar1 != 0) {
    iVar1 = WPACKET_start_sub_packet_len__(param_2,2);
    if (iVar1 != 0) {
      iVar1 = WPACKET_put_bytes__(param_2,2,2);
      if (iVar1 != 0) {
        iVar1 = WPACKET_put_bytes__(param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x748) + 8),2);
        if (iVar1 != 0) {
          iVar1 = WPACKET_put_bytes__(param_2,0,1);
          if (iVar1 != 0) {
            iVar1 = WPACKET_close(param_2);
            if (iVar1 != 0) {
              return 1;
            }
          }
        }
      }
    }
  }
  ossl_statem_fatal(param_1,0x50,0x1ce,0x44,"ssl\\statem\\extensions_srvr.c",CONCAT44(uVar2,0x636));
  return 0;
}



// FUNCTION 143cdc760 tls_parse_ctos_alpn body=618 status=ok
// SIG undefined tls_parse_ctos_alpn(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_ctos_alpn(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  undefined4 uVar9;
  
  if ((*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x198) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x220) != 0)) {
    return 1;
  }
  pbVar8 = (byte *)*param_2;
  uVar6 = param_2[1];
  if (1 < uVar6) {
    uVar7 = uVar6 - 2;
    pbVar1 = pbVar8 + 2;
    uVar5 = (ulonglong)CONCAT11(*pbVar8,pbVar8[1]);
    pbVar8 = pbVar1;
    uVar6 = uVar7;
    if (uVar5 <= uVar7) {
      pbVar8 = pbVar1 + uVar5;
      uVar6 = uVar7 - uVar5;
      if (uVar7 - uVar5 == 0) {
        *param_2 = (longlong)(pbVar1 + uVar5);
        param_2[1] = 0;
        pbVar8 = pbVar1;
        uVar6 = uVar5;
        if (1 < uVar5) {
          while (uVar6 != 0) {
            pbVar2 = pbVar8 + 1;
            uVar7 = (ulonglong)*pbVar8;
            uVar6 = uVar6 - 1;
            pbVar8 = pbVar2;
            if (uVar6 < uVar7) break;
            uVar6 = uVar6 - uVar7;
            pbVar8 = pbVar2 + uVar7;
            if (uVar7 == 0) break;
            if (uVar6 == 0) {
              CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3f0),
                          "ssl\\statem\\extensions_srvr.c",0x1e5);
              *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3f0) = 0;
              *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3f8) = 0;
              lVar3 = *(longlong *)(param_1 + 0xa8);
              CRYPTO_free(*(undefined8 *)(lVar3 + 0x3f0),
                          "d:\\dev\\openssl\\source\\win64-release\\ssl\\packet_locl.h",0x1a4);
              *(undefined8 *)(lVar3 + 0x3f0) = 0;
              *(undefined8 *)(lVar3 + 0x3f8) = 0;
              if (uVar5 != 0) {
                lVar4 = CRYPTO_memdup(pbVar1,uVar5,
                                      "d:\\dev\\openssl\\source\\win64-release\\ssl\\packet_locl.h",
                                      0x1ad);
                *(longlong *)(lVar3 + 0x3f0) = lVar4;
                if (lVar4 == 0) {
                  ossl_statem_fatal(param_1,0x50,0x237,0x44,"ssl\\statem\\extensions_srvr.c",0x1eb);
                  return 0;
                }
                *(ulonglong *)(lVar3 + 0x3f8) = uVar5;
              }
              return 1;
            }
          }
          uVar9 = 0x1e0;
          goto LAB_143cdc99a;
        }
      }
    }
  }
  uVar9 = 0x1d6;
LAB_143cdc99a:
  ossl_statem_fatal(param_1,0x32,0x237,0x6e,"ssl\\statem\\extensions_srvr.c",uVar9,pbVar8,uVar6);
  return 0;
}



// FUNCTION 143cdc9d0 tls_parse_ctos_cookie body=2052 status=ok
// SIG undefined tls_parse_ctos_cookie(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 tls_parse_ctos_cookie(undefined4 *param_1,longlong *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  __time64_t _Var8;
  undefined4 uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStack_11e8 [32];
  char *local_11c8;
  undefined4 local_11c0;
  byte local_11b8;
  byte *local_11a8;
  ulonglong uStack_11a0;
  undefined1 local_1198 [48];
  byte *local_1168;
  longlong local_1158;
  undefined8 local_1150;
  undefined1 local_1148 [8];
  undefined1 local_1140 [40];
  undefined1 local_1118 [4304];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143cdc9f2;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_11e8;
  if (*(longlong *)(*(longlong *)(param_1 + 0x166) + 0xd8) == 0) {
    return 1;
  }
  if ((**(uint **)(param_1 + 0x2a) & 0x800) == 0) {
    return 1;
  }
  pbVar2 = (byte *)*param_2;
  uStack_11a0 = param_2[1];
  local_11a8 = pbVar2;
  if (uStack_11a0 < 2) {
LAB_143cdd1a2:
    local_11c0 = 0x2ec;
  }
  else {
    uStack_11a0 = uStack_11a0 - 2;
    pbVar1 = pbVar2 + 2;
    uVar10 = (ulonglong)CONCAT11(*pbVar2,pbVar2[1]);
    local_11a8 = pbVar1;
    if (uStack_11a0 < uVar10) goto LAB_143cdd1a2;
    local_11a8 = pbVar1 + uVar10;
    uStack_11a0 = uStack_11a0 - uVar10;
    if (uStack_11a0 != 0) goto LAB_143cdd1a2;
    *param_2 = (longlong)local_11a8;
    param_2[1] = 0;
    if ((uVar10 < 0x20) || (uVar13 = uVar10 - 0x20, uVar10 < uVar13)) {
      local_11c0 = 0x2f6;
      local_11a8 = pbVar1;
    }
    else {
      local_11a8 = pbVar1;
      lVar5 = EVP_MD_CTX_new();
      uVar6 = EVP_PKEY_new_raw_private_key(0x357,0,*(longlong *)(param_1 + 0x1ce) + 0x298,0x20);
      if ((lVar5 == 0) || (uVar6 == 0)) {
        EVP_MD_CTX_free(lVar5);
        EVP_PKEY_free(uVar6);
        uVar9 = 0x50;
        local_11c0 = 0x305;
        uVar11 = 0x41;
        goto LAB_143cdd1b3;
      }
      local_1158 = 0x20;
      uVar7 = EVP_sha256();
      local_11c8 = (char *)uVar6;
      iVar4 = EVP_DigestSignInit(lVar5,0,uVar7,0);
      if ((iVar4 < 1) ||
         ((local_11c8 = (char *)uVar13, iVar4 = EVP_DigestSign(lVar5,local_1140,&local_1158,pbVar1),
          iVar4 < 1 || (local_1158 != 0x20)))) {
        EVP_MD_CTX_free(lVar5);
        EVP_PKEY_free(uVar6);
        uVar9 = 0x50;
        local_11c0 = 0x311;
        uVar11 = 0x44;
        goto LAB_143cdd1b3;
      }
      EVP_MD_CTX_free(lVar5);
      EVP_PKEY_free(uVar6);
      iVar4 = FUN_14004ffa0(local_1140,pbVar1 + uVar13,0x20);
      if (iVar4 != 0) {
        local_11c0 = 0x31a;
        uVar9 = 0x2f;
        uVar11 = 0x134;
        goto LAB_143cdd1b3;
      }
      if (uVar10 < 2) {
        local_11c0 = 800;
      }
      else {
        uStack_11a0 = uVar10 - 2;
        if (CONCAT11(*pbVar1,pbVar2[3]) != 0) {
          return 1;
        }
        if (uStack_11a0 < 2) {
          local_11c0 = 0x32f;
        }
        else {
          uStack_11a0 = uVar10 - 4;
          if (CONCAT11(pbVar2[4],pbVar2[5]) != 0x304) {
            uVar9 = 0x2f;
            local_11c0 = 0x334;
            uVar11 = 0x74;
            goto LAB_143cdd1b3;
          }
          if (uStack_11a0 < 2) {
            local_11c0 = 0x33a;
          }
          else {
            uStack_11a0 = uVar10 - 6;
            if (uStack_11a0 < 2) {
              local_11c0 = 0x341;
            }
            else {
              uVar13 = uVar10 - 8;
              uStack_11a0 = uVar13;
              if ((CONCAT11(pbVar2[6],pbVar2[7]) !=
                   *(short *)(*(longlong *)(param_1 + 0x2a) + 0x406)) ||
                 (lVar5 = ssl_get_cipher_by_char(param_1,pbVar2 + 8,0),
                 *(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x238) != lVar5)) {
                local_11c0 = 0x34c;
                uVar9 = 0x2f;
                uVar11 = 0xba;
                goto LAB_143cdd1b3;
              }
              if (uVar13 != 0) {
                local_11b8 = pbVar2[10];
                uStack_11a0 = uVar10 - 9;
                if (3 < uStack_11a0) {
                  local_11a8 = pbVar2 + 0xf;
                  uVar12 = CONCAT31(CONCAT21(CONCAT11(pbVar2[0xb],pbVar2[0xc]),pbVar2[0xd]),
                                    pbVar2[0xe]);
                  uStack_11a0 = uVar10 - 0xd;
                  if (1 < uStack_11a0) {
                    local_1168 = pbVar2 + 0x11;
                    uStack_11a0 = uVar10 - 0xf;
                    uVar13 = (ulonglong)CONCAT11(*local_11a8,pbVar2[0x10]);
                    if (uVar13 <= uStack_11a0) {
                      local_11a8 = local_1168 + uVar13;
                      uStack_11a0 = uStack_11a0 - uVar13;
                      if (uStack_11a0 != 0) {
                        pbVar2 = local_11a8 + 1;
                        bVar3 = *local_11a8;
                        if (((ulonglong)bVar3 <= uStack_11a0 - 1) &&
                           ((uStack_11a0 - 1) - (ulonglong)bVar3 == 0x20)) {
                          _Var8 = _time64((__time64_t *)0x0);
                          if (((uint)_Var8 < uVar12) || (600 < (uint)_Var8 - uVar12)) {
                            return 1;
                          }
                          iVar4 = (**(code **)(*(longlong *)(param_1 + 0x166) + 0xd8))
                                            (param_1,pbVar2,bVar3);
                          if (iVar4 == 0) {
                            local_11c0 = 0x365;
                            uVar9 = 0x2f;
                            uVar11 = 0x134;
                          }
                          else {
                            iVar4 = WPACKET_init_static_len(local_1198,local_1118,0x10c8,0);
                            if (iVar4 == 0) {
                              local_11c0 = 0x370;
                              uVar9 = 0x50;
                              uVar11 = 0x44;
                            }
                            else {
                              iVar4 = WPACKET_put_bytes__(local_1198,2,1);
                              if ((((iVar4 == 0) ||
                                   (iVar4 = WPACKET_start_sub_packet_len__(local_1198,3), iVar4 == 0
                                   )) || (iVar4 = WPACKET_put_bytes__(local_1198,0x303,2),
                                         iVar4 == 0)) ||
                                 (((iVar4 = WPACKET_memcpy(local_1198,&DAT_145d4a970,0x20),
                                   iVar4 == 0 ||
                                   (iVar4 = WPACKET_sub_memcpy__
                                                      (local_1198,param_1 + 0x14c,
                                                       *(undefined8 *)(param_1 + 0x154),1),
                                   iVar4 == 0)) ||
                                  ((iVar4 = (**(code **)(*(longlong *)(param_1 + 2) + 0x98))
                                                      (*(undefined8 *)
                                                        (*(longlong *)(param_1 + 0x2a) + 0x238),
                                                       local_1198,local_1148), iVar4 == 0 ||
                                   ((iVar4 = WPACKET_put_bytes__(local_1198,0,1), iVar4 == 0 ||
                                    (iVar4 = WPACKET_start_sub_packet_len__(local_1198,2),
                                    iVar4 == 0)))))))) {
                                WPACKET_cleanup(local_1198);
                                uVar9 = 0x50;
                                local_11c0 = 0x37f;
                                uVar11 = 0x44;
                              }
                              else {
                                iVar4 = WPACKET_put_bytes__(local_1198,0x2b,2);
                                if ((((iVar4 == 0) ||
                                     (iVar4 = WPACKET_start_sub_packet_len__(local_1198,2),
                                     iVar4 == 0)) ||
                                    (iVar4 = WPACKET_put_bytes__(local_1198,*param_1,2), iVar4 == 0)
                                    ) || (iVar4 = WPACKET_close(local_1198), iVar4 == 0)) {
                                  WPACKET_cleanup(local_1198);
                                  uVar9 = 0x50;
                                  local_11c0 = 0x388;
                                  uVar11 = 0x44;
                                }
                                else if ((local_11b8 == 0) ||
                                        (((iVar4 = WPACKET_put_bytes__(local_1198,0x33,2),
                                          iVar4 != 0 &&
                                          (iVar4 = WPACKET_start_sub_packet_len__(local_1198,2),
                                          iVar4 != 0)) &&
                                         ((iVar4 = WPACKET_put_bytes__(local_1198,
                                                                       *(undefined2 *)
                                                                        (*(longlong *)
                                                                          (param_1 + 0x2a) + 0x406),
                                                                       2), iVar4 != 0 &&
                                          (iVar4 = WPACKET_close(local_1198), iVar4 != 0)))))) {
                                  iVar4 = WPACKET_put_bytes__(local_1198,0x2c,2);
                                  if ((((iVar4 != 0) &&
                                       (iVar4 = WPACKET_start_sub_packet_len__(local_1198,2),
                                       iVar4 != 0)) &&
                                      (iVar4 = WPACKET_sub_memcpy__(local_1198,pbVar1,uVar10,2),
                                      iVar4 != 0)) &&
                                     ((((iVar4 = WPACKET_close(local_1198), iVar4 != 0 &&
                                        (iVar4 = WPACKET_close(local_1198), iVar4 != 0)) &&
                                       (iVar4 = WPACKET_close(local_1198), iVar4 != 0)) &&
                                      ((iVar4 = WPACKET_get_total_written(local_1198,&local_1150),
                                       iVar4 != 0 &&
                                       (iVar4 = WPACKET_finish(local_1198), iVar4 != 0)))))) {
                                    local_11c8 = (char *)local_1150;
                                    iVar4 = create_synthetic_message_hash
                                                      (param_1,local_1168,uVar13,local_1118);
                                    if (iVar4 == 0) {
                                      return 0;
                                    }
                                    param_1[0x136] = 1;
                                    param_1[0x1c0] = 1;
                                    return 1;
                                  }
                                  WPACKET_cleanup(local_1198);
                                  uVar9 = 0x50;
                                  local_11c0 = 0x3a0;
                                  uVar11 = 0x44;
                                }
                                else {
                                  WPACKET_cleanup(local_1198);
                                  uVar9 = 0x50;
                                  local_11c0 = 0x392;
                                  uVar11 = 0x44;
                                }
                              }
                            }
                          }
                          goto LAB_143cdd1b3;
                        }
                      }
                    }
                  }
                }
              }
              local_11c0 = 0x356;
            }
          }
        }
      }
    }
  }
  uVar9 = 0x32;
  uVar11 = 0x9f;
LAB_143cdd1b3:
  local_11c8 = "ssl\\statem\\extensions_srvr.c";
  ossl_statem_fatal(param_1,uVar9,0x266,uVar11);
  return 0;
}



// FUNCTION 143cdd1e0 tls_parse_ctos_early_data body=101 status=ok
// SIG undefined tls_parse_ctos_early_data(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_ctos_early_data(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if (*(longlong *)(param_2 + 8) == 0) {
    if (*(int *)(param_1 + 0x4d8) == 0) {
      return 1;
    }
    uVar2 = 0x3f1;
    uVar1 = 0x2f;
  }
  else {
    uVar2 = 0x3eb;
    uVar1 = 0x32;
  }
  ossl_statem_fatal(param_1,uVar1,0x238,0x6e,"ssl\\statem\\extensions_srvr.c",uVar2,0x143cdd1ea);
  return 0;
}



// FUNCTION 143cdd250 tls_parse_ctos_ec_pt_formats body=366 status=ok
// SIG undefined tls_parse_ctos_ec_pt_formats(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_ctos_ec_pt_formats(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  
  pbVar6 = (byte *)*param_2;
  uVar4 = param_2[1];
  if (uVar4 != 0) {
    uVar4 = uVar4 - 1;
    uVar5 = (ulonglong)*pbVar6;
    pbVar1 = pbVar6 + 1;
    pbVar6 = pbVar1;
    if (uVar5 <= uVar4) {
      pbVar6 = pbVar1 + uVar5;
      uVar4 = uVar4 - uVar5;
      if (uVar4 == 0) {
        *param_2 = (longlong)pbVar6;
        param_2[1] = 0;
        if (uVar5 != 0) {
          if (*(int *)(param_1 + 200) == 0) {
            lVar2 = *(longlong *)(param_1 + 0x508);
            CRYPTO_free(*(undefined8 *)(lVar2 + 0x168),
                        "d:\\dev\\openssl\\source\\win64-release\\ssl\\packet_locl.h",0x1a4);
            *(undefined8 *)(lVar2 + 0x168) = 0;
            *(undefined8 *)(lVar2 + 0x160) = 0;
            lVar3 = CRYPTO_memdup(pbVar1,uVar5,
                                  "d:\\dev\\openssl\\source\\win64-release\\ssl\\packet_locl.h",
                                  0x1ad);
            *(longlong *)(lVar2 + 0x168) = lVar3;
            if (lVar3 == 0) {
              ossl_statem_fatal(param_1,0x50,0x239,0x44,"ssl\\statem\\extensions_srvr.c",0x104);
              return 0;
            }
            *(ulonglong *)(lVar2 + 0x160) = uVar5;
          }
          return 1;
        }
      }
    }
  }
  ossl_statem_fatal(param_1,0x32,0x239,0x6e,"ssl\\statem\\extensions_srvr.c",0xfb,pbVar6,uVar4);
  return 0;
}



// FUNCTION 143cdd3c0 tls_parse_ctos_ems body=90 status=ok
// SIG undefined tls_parse_ctos_ems(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_ctos_ems(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 8) != 0) {
    ossl_statem_fatal(param_1,0x32,0x23a,0x6e,"ssl\\statem\\extensions_srvr.c",0x3dc,0x143cdd3ca);
    return 0;
  }
  **(uint **)(param_1 + 0xa8) = **(uint **)(param_1 + 0xa8) | 0x200;
  return 1;
}



// FUNCTION 143cdd440 tls_parse_ctos_key_share body=844 status=ok
// SIG undefined tls_parse_ctos_key_share(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_ctos_key_share(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  short sVar5;
  longlong lVar6;
  undefined8 uVar7;
  ushort uVar8;
  bool bVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong in_stack_ffffffffffffff98;
  undefined4 uVar16;
  undefined8 local_58;
  undefined1 *local_50;
  ulonglong uStack_48;
  undefined1 *local_38;
  ulonglong uStack_30;
  
  uStack_30 = 0x143cdd465;
  bVar9 = false;
  if ((*(int *)(param_1 + 200) != 0) && ((*(byte *)(param_1 + 0x6e0) & 2) == 0)) {
    return 1;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x408) != 0) {
    iVar12 = 0x50;
    uVar16 = 0x272;
    iVar14 = 0x44;
    goto LAB_143cdd755;
  }
  local_50 = (undefined1 *)*param_2;
  uStack_48 = param_2[1];
  if (uStack_48 < 2) {
LAB_143cdd740:
    uVar16 = 0x278;
  }
  else {
    uStack_48 = uStack_48 - 2;
    puVar1 = local_50 + 2;
    uVar8 = CONCAT11(*local_50,local_50[1]);
    uVar13 = (ulonglong)uVar8;
    local_50 = puVar1;
    if (uStack_48 < uVar13) goto LAB_143cdd740;
    local_50 = puVar1 + uVar13;
    uStack_48 = uStack_48 - uVar13;
    if (uStack_48 != 0) goto LAB_143cdd740;
    *param_2 = (longlong)local_50;
    param_2[1] = 0;
    tls1_get_supported_groups(param_1,&local_50,&local_58);
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x508) + 0x170);
    uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x178);
    if (lVar6 == 0) {
      iVar12 = 0x6d;
      uVar16 = 0x287;
      iVar14 = 0xd1;
      goto LAB_143cdd755;
    }
    uVar10 = uVar13;
    if ((*(short *)(*(longlong *)(param_1 + 0xa8) + 0x406) != 0) && (uVar13 == 0)) {
      uVar16 = 0x292;
      iVar12 = uVar8 + 0x2f;
      iVar14 = uVar8 + 0x6c;
      goto LAB_143cdd755;
    }
    while( true ) {
      if (uVar13 == 0) {
        return 1;
      }
      if (uVar10 < 2) break;
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      local_38 = puVar1 + 2;
      uStack_30 = uVar10 - 2;
      if (uVar10 - 2 < 2) break;
      puVar2 = puVar1 + 4;
      uStack_30 = uVar10 - 4;
      uVar15 = (ulonglong)CONCAT11(puVar1[2],puVar1[3]);
      local_38 = puVar2;
      if (uStack_30 < uVar15) break;
      uVar13 = uStack_30 - uVar15;
      local_38 = puVar2 + uVar15;
      uStack_30 = uVar13;
      if (uVar15 == 0) break;
      puVar1 = local_38;
      uVar10 = uVar13;
      if (!bVar9) {
        sVar5 = *(short *)(*(longlong *)(param_1 + 0xa8) + 0x406);
        if ((sVar5 != 0) && ((CONCAT11(uVar3,uVar4) != sVar5 || (uVar13 != 0)))) {
          iVar12 = 0x2f;
          uVar16 = 0x2ae;
          iVar14 = 0x6c;
          goto LAB_143cdd755;
        }
        in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffffff00000000;
        iVar12 = check_in_list(param_1,CONCAT11(uVar3,uVar4),uVar7,lVar6,in_stack_ffffffffffffff98);
        if (iVar12 == 0) {
          iVar12 = 0x2f;
          uVar16 = 0x2b5;
          iVar14 = 0x6c;
          goto LAB_143cdd755;
        }
        in_stack_ffffffffffffff98 = CONCAT44((int)(in_stack_ffffffffffffff98 >> 0x20),1);
        iVar12 = check_in_list(param_1,CONCAT11(uVar3,uVar4),local_50,local_58,
                               in_stack_ffffffffffffff98);
        puVar1 = local_38;
        uVar10 = uStack_30;
        if (iVar12 != 0) {
          lVar11 = ssl_generate_param_group(CONCAT11(uVar3,uVar4));
          *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x408) = lVar11;
          if (lVar11 == 0) {
            uVar16 = 0x2c1;
            iVar12 = 0x50;
            iVar14 = 0x13a;
            goto LAB_143cdd755;
          }
          *(short *)(*(longlong *)(param_1 + 0xa8) + 0x406) = CONCAT11(uVar3,uVar4);
          iVar12 = EVP_PKEY_set1_tls_encodedpoint
                             (*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x408),puVar2,uVar15);
          if (iVar12 == 0) {
            uVar16 = 0x2cb;
            iVar12 = 0x2f;
            iVar14 = 0x132;
            goto LAB_143cdd755;
          }
          bVar9 = true;
          puVar1 = local_38;
          uVar10 = uStack_30;
        }
      }
    }
    uVar16 = 0x29b;
  }
  iVar14 = 0x9f;
  iVar12 = 0x32;
LAB_143cdd755:
  ossl_statem_fatal(param_1,iVar12,0x1cf,iVar14,"ssl\\statem\\extensions_srvr.c",uVar16);
  return 0;
}



// FUNCTION 143cdd790 tls_parse_ctos_maxfragmentlen body=187 status=ok
// SIG undefined tls_parse_ctos_maxfragmentlen(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_ctos_maxfragmentlen(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if (param_2[1] == 1) {
    cVar1 = *(char *)*param_2;
    *param_2 = (char *)*param_2 + 1;
    param_2[1] = 0;
    if ((byte)(cVar1 - 1U) < 4) {
      if ((*(int *)(param_1 + 200) == 0) ||
         (*(char *)(*(longlong *)(param_1 + 0x508) + 0x1b0) == cVar1)) {
        *(char *)(*(longlong *)(param_1 + 0x508) + 0x1b0) = cVar1;
        return 1;
      }
      uVar4 = 0xca;
      uVar2 = 0x2f;
      uVar3 = 0xe8;
    }
    else {
      uVar4 = 0xbe;
      uVar2 = 0x2f;
      uVar3 = 0xe8;
    }
  }
  else {
    uVar2 = 0x32;
    uVar4 = 0xb6;
    uVar3 = 0x6e;
  }
  ossl_statem_fatal(param_1,uVar2,0x23b,uVar3,"ssl\\statem\\extensions_srvr.c",uVar4,0x143cdd79a);
  return 0;
}



// FUNCTION 143cdd880 tls_parse_ctos_post_handshake_auth body=89 status=ok
// SIG undefined tls_parse_ctos_post_handshake_auth(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_ctos_post_handshake_auth(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 8) != 0) {
    ossl_statem_fatal(param_1,0x32,0x26c,0x116,"ssl\\statem\\extensions_srvr.c",0x50c,0x143cdd88a);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x758) = 2;
  return 1;
}



// FUNCTION 143cdd8e0 tls_parse_ctos_psk body=2152 status=ok
// SIG undefined tls_parse_ctos_psk(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 tls_parse_ctos_psk(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  __time64_t _Var12;
  longlong lVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  byte *pbVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  uint uVar21;
  undefined1 auStack_1f8 [32];
  byte *local_1d8;
  ulonglong *local_1d0;
  ulonglong local_1c8;
  undefined4 local_1c0;
  undefined4 local_1b8;
  ulonglong local_1a8 [2];
  byte *local_198;
  ulonglong uStack_190;
  undefined2 local_188 [2];
  uint local_184;
  undefined4 local_180;
  longlong local_178;
  byte *local_168;
  ulonglong uStack_160;
  ulonglong local_158;
  longlong *local_150;
  undefined1 local_148 [256];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143cdd902;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  uVar18 = 0;
  local_180 = 0;
  local_178 = 0;
  local_1a8[0] = 0;
  if ((*(byte *)(param_1 + 0x6e0) & 3) == 0) {
    return 1;
  }
  local_168 = (byte *)*param_2;
  uStack_160 = param_2[1];
  local_150 = param_2;
  if (uStack_160 < 2) {
LAB_143cde116:
    local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,0x427);
LAB_143cde12a:
    uVar14 = 0x32;
    uVar19 = 0x6e;
LAB_143cde133:
    local_1d8 = (byte *)0x145d57900;
    ossl_statem_fatal(param_1,uVar14,0x1f9,uVar19);
    return 0;
  }
  uStack_160 = uStack_160 - 2;
  pbVar17 = local_168 + 2;
  uVar15 = (ulonglong)CONCAT11(*local_168,local_168[1]);
  local_168 = pbVar17;
  if (uStack_160 < uVar15) goto LAB_143cde116;
  uStack_160 = uStack_160 - uVar15;
  local_168 = pbVar17 + uVar15;
  local_184 = 0;
  *param_2 = (longlong)local_168;
  param_2[1] = uStack_160;
  *(undefined4 *)(param_1 + 0x670) = 0;
  uVar16 = uVar18;
  local_198 = pbVar17;
  uStack_190 = uVar15;
  if (uVar15 == 0) {
    return 1;
  }
  do {
    uVar9 = (uint)uVar16;
    if (uVar15 < 2) {
LAB_143cde0eb:
      local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,0x434);
      local_1d8 = (byte *)0x145d57900;
      ossl_statem_fatal(param_1,0x32,0x1f9,0x6e);
      return 0;
    }
    pbVar1 = pbVar17 + 2;
    uStack_190 = uStack_190 - 2;
    uVar16 = (ulonglong)CONCAT11(*pbVar17,pbVar17[1]);
    if (uStack_190 < uVar16) goto LAB_143cde0eb;
    uStack_190 = uStack_190 - uVar16;
    local_198 = pbVar1 + uVar16;
    if (uStack_190 < 4) goto LAB_143cde0eb;
    bVar2 = local_198[1];
    bVar3 = *local_198;
    uVar15 = uStack_190 - 4;
    bVar4 = local_198[2];
    bVar5 = local_198[3];
    local_198 = local_198 + 4;
    uStack_190 = uVar15;
    local_168 = local_198;
    local_158 = uVar15;
    if ((*(code **)(param_1 + 0x588) != (code *)0x0) &&
       (iVar8 = (**(code **)(param_1 + 0x588))(param_1,pbVar1,uVar16,local_1a8),
       uVar18 = local_1a8[0], iVar8 == 0)) {
      local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,0x43d);
      local_1d8 = (byte *)0x145d57900;
      ossl_statem_fatal(param_1,0x50,0x1f9,0x6e);
      return 0;
    }
    if (uVar18 == 0) {
      if ((*(longlong *)(param_1 + 0x580) != 0) && (uVar16 < 0x81)) {
        CRYPTO_free(0,"d:\\dev\\openssl\\source\\win64-release\\ssl\\packet_locl.h",0x1c1);
        lVar11 = CRYPTO_strndup(pbVar1,uVar16,
                                "d:\\dev\\openssl\\source\\win64-release\\ssl\\packet_locl.h",0x1c4)
        ;
        if (lVar11 == 0) {
          local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,1099);
          local_1d8 = (byte *)0x145d57900;
          ossl_statem_fatal(param_1,0x50,0x1f9,0x44);
          return 0;
        }
        uVar9 = (**(code **)(param_1 + 0x580))(param_1,lVar11,local_148,0x100);
        CRYPTO_free(lVar11,"ssl\\statem\\extensions_srvr.c",0x450);
        if (0x100 < uVar9) {
          local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,0x453);
          goto LAB_143cdde94;
        }
        if (uVar9 != 0) {
          local_188[0] = 0x113;
          lVar11 = SSL_CIPHER_find(param_1,local_188);
          if (lVar11 == 0) {
            FUN_14004ff40(local_148,uVar9);
            local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,0x461);
            goto LAB_143cdde94;
          }
          local_1a8[0] = SSL_SESSION_new();
          if ((((local_1a8[0] == 0) ||
               (iVar8 = SSL_SESSION_set1_master_key(local_1a8[0],local_148,uVar9), iVar8 == 0)) ||
              (iVar8 = SSL_SESSION_set_cipher(local_1a8[0],lVar11), iVar8 == 0)) ||
             (iVar8 = SSL_SESSION_set_protocol_version(local_1a8[0],0x304), iVar8 == 0)) {
            FUN_14004ff40(local_148,uVar9);
            uVar14 = 0x50;
            local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,0x46e);
            uVar20 = 0x44;
            goto LAB_143cde0c0;
          }
          FUN_14004ff40(local_148,uVar9);
        }
        uVar18 = local_1a8[0];
        uVar15 = local_158;
        uVar9 = local_184;
        if (local_1a8[0] != 0) goto LAB_143cddd50;
      }
      if (((*(uint *)(param_1 + 0x5c4) >> 0xe & 1) == 0) &&
         ((*(int *)(param_1 + 0x16e0) == 0 || ((*(uint *)(param_1 + 0x5c4) >> 0x18 & 1) != 0)))) {
        local_1d0 = local_1a8;
        local_1d8 = (byte *)0x0;
        uVar10 = tls_decrypt_ticket(param_1,pbVar1,uVar16,0);
        if (uVar10 == 3) {
LAB_143cdded9:
          local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,0x4a0);
          goto LAB_143cde12a;
        }
        if (uVar10 < 2) {
          local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,0x4a7);
          goto LAB_143cdde94;
        }
        uVar18 = local_1a8[0];
        lVar11 = local_178;
        uVar16 = local_1a8[0];
        if ((uVar10 - 2 & 0xfffffffd) != 0) goto LAB_143cddc76;
      }
      else {
        *(undefined4 *)(param_1 + 0x670) = 1;
        if (uVar16 == 0) goto LAB_143cdded9;
        lVar11 = local_178;
        if ((uVar16 == 0x20) &&
           (uVar16 = lookup_sess_in_cache(param_1,pbVar1,0x20), uVar18 = local_1a8[0],
           lVar11 = local_178, uVar16 != 0)) {
LAB_143cddc76:
          local_1a8[0] = uVar16;
          if (((*(int *)(param_1 + 0x16e0) == 0) || ((*(uint *)(param_1 + 0x5c4) & 0x1000000) != 0))
             || (iVar8 = SSL_CTX_remove_session(*(undefined8 *)(param_1 + 0x738),local_1a8[0]),
                iVar8 != 0)) {
            _Var12 = _time64((__time64_t *)0x0);
            uVar10 = (int)_Var12 - *(int *)(local_1a8[0] + 0x11c);
            uVar21 = CONCAT31(CONCAT21(CONCAT11(bVar3,bVar2),bVar4),bVar5) -
                     *(int *)(local_1a8[0] + 0x194);
            if (((uVar9 == 0) && ((int)uVar10 <= *(int *)(local_1a8[0] + 0x118))) &&
               (((uVar10 * 1000) / 1000 == uVar10 &&
                ((uVar10 = uVar10 * 1000 + 1000, uVar21 <= uVar10 && (uVar10 <= uVar21 + 10000))))))
            {
              *(undefined4 *)(param_1 + 0x6ec) = 1;
            }
            goto LAB_143cdddc5;
          }
          SSL_SESSION_free();
          local_1a8[0] = 0;
          uVar18 = 0;
          lVar11 = local_178;
        }
      }
    }
    else {
LAB_143cddd50:
      uVar18 = ssl_session_dup(uVar18,0);
      if (uVar18 == 0) {
        local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,0x47c);
LAB_143cdde94:
        uVar14 = 0x50;
        uVar19 = 0x44;
        goto LAB_143cde133;
      }
      SSL_SESSION_free(local_1a8[0]);
      local_1a8[0] = uVar18;
      _guard_xfg_dispatch_icall_nop
                ((void *)(uVar18 + 0xc0),(void *)(param_1 + 0x4e8),*(size_t *)(param_1 + 0x4e0));
      local_180 = 1;
      *(undefined8 *)(local_1a8[0] + 0xb8) = *(undefined8 *)(param_1 + 0x4e0);
      if (uVar9 == 0) {
        *(undefined4 *)(param_1 + 0x6ec) = 1;
      }
      *(undefined4 *)(param_1 + 0x670) = 1;
LAB_143cdddc5:
      lVar11 = ssl_md(*(undefined4 *)(*(longlong *)(local_1a8[0] + 0x128) + 0x40));
      local_178 = lVar11;
      lVar13 = ssl_md(*(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x40));
      uVar18 = local_1a8[0];
      if (lVar11 == lVar13) break;
      SSL_SESSION_free();
      *(undefined4 *)(param_1 + 0x6ec) = 0;
      local_1a8[0] = 0;
      *(undefined4 *)(param_1 + 0x670) = 0;
      uVar18 = 0;
    }
    uVar9 = uVar9 + 1;
    uVar16 = (ulonglong)uVar9;
    pbVar17 = local_168;
    local_184 = uVar9;
  } while (uVar15 != 0);
  plVar7 = local_150;
  if (uVar18 == 0) {
    return 1;
  }
  lVar13 = *local_150;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x88) + 8);
  iVar8 = EVP_MD_size(lVar11);
  pbVar17 = (byte *)*plVar7;
  uVar18 = plVar7[1];
  local_198 = pbVar17;
  if (uVar18 < 2) {
LAB_143cde0ab:
    uStack_190 = uVar18;
    local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,0x4e5);
LAB_143cde0b3:
    uVar20 = 0x6e;
    uVar14 = 0x32;
  }
  else {
    uVar18 = uVar18 - 2;
    local_198 = pbVar17 + 2;
    uStack_190 = (ulonglong)CONCAT11(*pbVar17,pbVar17[1]);
    if (uVar18 < uStack_190) goto LAB_143cde0ab;
    uVar10 = 0;
    *plVar7 = (longlong)(local_198 + uStack_190);
    plVar7[1] = uVar18 - uStack_190;
    do {
      if (uStack_190 == 0) {
LAB_143cde0a1:
        local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,0x4ec);
        goto LAB_143cde0b3;
      }
      local_1d8 = local_198 + 1;
      uVar18 = (ulonglong)*local_198;
      uStack_190 = uStack_190 - 1;
      local_198 = local_1d8;
      if (uStack_190 < uVar18) goto LAB_143cde0a1;
      uStack_190 = uStack_190 - uVar18;
      local_198 = local_1d8 + uVar18;
      uVar10 = uVar10 + 1;
    } while (uVar10 <= uVar9);
    if (uVar18 == (longlong)iVar8) {
      local_1b8 = local_180;
      local_1c0 = 0;
      local_1c8 = local_1a8[0];
      local_1d0 = (ulonglong *)0x0;
      iVar8 = tls_psk_do_binder(param_1,lVar11,*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 8),
                                lVar13 - lVar6);
      if (iVar8 == 1) {
        *(uint *)(local_1a8[0] + 0x198) = uVar9;
        SSL_SESSION_free(*(undefined8 *)(param_1 + 0x508));
        *(ulonglong *)(param_1 + 0x508) = local_1a8[0];
        return 1;
      }
      goto LAB_143cde0d0;
    }
    uVar14 = 0x32;
    local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,0x4f3);
    uVar20 = 0x6e;
  }
LAB_143cde0c0:
  local_1d8 = (byte *)0x145d57900;
  ossl_statem_fatal(param_1,uVar14,0x1f9,uVar20);
LAB_143cde0d0:
  SSL_SESSION_free(local_1a8[0]);
  return 0;
}



// FUNCTION 143cde150 tls_parse_ctos_psk_kex_modes body=212 status=ok
// SIG undefined tls_parse_ctos_psk_kex_modes(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_ctos_psk_kex_modes(longlong param_1,longlong *param_2)

{
  byte bVar1;
  byte *pbVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte *pbVar5;
  
  pbVar5 = (byte *)*param_2;
  uVar4 = param_2[1];
  if (uVar4 != 0) {
    uVar4 = uVar4 - 1;
    uVar3 = (ulonglong)*pbVar5;
    pbVar2 = pbVar5 + 1;
    pbVar5 = pbVar2;
    if (uVar3 <= uVar4) {
      pbVar5 = pbVar2 + uVar3;
      uVar4 = uVar4 - uVar3;
      if (uVar4 == 0) {
        *param_2 = (longlong)pbVar5;
        param_2[1] = 0;
        if (uVar3 != 0) {
          while (uVar3 != 0) {
            bVar1 = *pbVar2;
            uVar3 = uVar3 - 1;
            pbVar2 = pbVar2 + 1;
            if (bVar1 == 1) {
              *(uint *)(param_1 + 0x6e0) = *(uint *)(param_1 + 0x6e0) | 2;
            }
            else if ((bVar1 == 0) && ((*(uint *)(param_1 + 0x5c4) & 0x400) != 0)) {
              *(uint *)(param_1 + 0x6e0) = *(uint *)(param_1 + 0x6e0) | 1;
            }
          }
          return 1;
        }
      }
    }
  }
  ossl_statem_fatal(param_1,0x32,0x23c,0x6e,"ssl\\statem\\extensions_srvr.c",0x24e,pbVar5,uVar4,
                    0x143cde15a);
  return 0;
}



// FUNCTION 143cde230 tls_parse_ctos_renegotiate body=266 status=ok
// SIG undefined tls_parse_ctos_renegotiate(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_ctos_renegotiate(longlong param_1,undefined8 *param_2)

{
  byte *_Buf1;
  byte bVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  if (param_2[1] != 0) {
    uVar4 = param_2[1] - 1;
    bVar1 = *(byte *)*param_2;
    uVar5 = (ulonglong)bVar1;
    _Buf1 = (byte *)*param_2 + 1;
    *param_2 = _Buf1;
    param_2[1] = uVar4;
    if (uVar5 <= uVar4) {
      param_2[1] = uVar4 - uVar5;
      *param_2 = _Buf1 + uVar5;
      lVar2 = *(longlong *)(param_1 + 0xa8);
      if ((ulonglong)bVar1 == *(size_t *)(lVar2 + 0x388)) {
        iVar3 = _guard_xfg_dispatch_icall_nop
                          (_Buf1,(void *)(lVar2 + 0x348),*(size_t *)(lVar2 + 0x388));
        if (iVar3 == 0) {
          *(undefined4 *)(lVar2 + 0x3d8) = 1;
          return 1;
        }
        uVar6 = 0x41;
      }
      else {
        uVar6 = 0x10000003a;
      }
      ossl_statem_fatal(param_1,0x28,0x1d0,0x151,"ssl\\statem\\extensions_srvr.c",uVar6);
      return 0;
    }
  }
  ossl_statem_fatal(param_1,0x32,0x1d0,0x150,"ssl\\statem\\extensions_srvr.c",0x100000033);
  return 0;
}



// FUNCTION 143cde340 tls_parse_ctos_server_name body=745 status=ok
// SIG undefined tls_parse_ctos_server_name(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_ctos_server_name(longlong param_1,longlong *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  char *pcVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  char *pcVar14;
  
  pcVar11 = (char *)*param_2;
  uVar10 = param_2[1];
  pcVar14 = pcVar11;
  if (uVar10 < 2) {
LAB_143cde5f1:
    ossl_statem_fatal(param_1,0x32,0x23d,0x6e,"ssl\\statem\\extensions_srvr.c",0x6b,pcVar14,uVar10);
    return 0;
  }
  uVar10 = uVar10 - 2;
  pcVar1 = pcVar11 + 2;
  uVar8 = (ulonglong)CONCAT11(*pcVar11,pcVar11[1]);
  pcVar14 = pcVar1;
  if (uVar10 < uVar8) goto LAB_143cde5f1;
  uVar10 = uVar10 - uVar8;
  pcVar14 = pcVar1 + uVar8;
  if (uVar10 != 0) goto LAB_143cde5f1;
  *param_2 = (longlong)(pcVar1 + uVar8);
  param_2[1] = 0;
  uVar10 = 0;
  pcVar14 = pcVar1;
  if (uVar8 == 0) goto LAB_143cde5f1;
  pcVar14 = pcVar11 + 3;
  if ((*pcVar1 == '\0') && (1 < uVar8 - 1)) {
    pcVar1 = pcVar11 + 5;
    uVar10 = (ulonglong)CONCAT11(*pcVar14,pcVar11[4]);
    if (uVar8 - 3 != uVar10) goto LAB_143cde5c0;
    iVar5 = *(int *)(param_1 + 200);
    if ((iVar5 != 0) &&
       ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0 ||
         (iVar3 = **(int **)(param_1 + 8), iVar3 < 0x304)) || (iVar3 == 0x10000)))) {
LAB_143cde531:
      if (iVar5 == 0) {
        return 1;
      }
      pcVar11 = *(char **)(*(longlong *)(param_1 + 0x508) + 0x158);
      if (pcVar11 != (char *)0x0) {
        cVar2 = *pcVar11;
        for (uVar4 = 0; (cVar2 != '\0' && (uVar4 < 0x80000000)); uVar4 = uVar4 + 1) {
          pcVar11 = pcVar11 + 1;
          cVar2 = *pcVar11;
        }
        if ((uVar10 == (uVar4 & 0x7fffffff)) && (iVar5 = FUN_14004ffa0(pcVar1), iVar5 == 0)) {
          iVar5 = 1;
          goto LAB_143cde585;
        }
      }
      iVar5 = 0;
LAB_143cde585:
      *(int *)(param_1 + 0x710) = iVar5;
      if ((iVar5 == 0) && (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x158) != 0)) {
        *(undefined4 *)(param_1 + 0x6ec) = 0;
      }
      return 1;
    }
    if (uVar10 < 0x100) {
      pvVar6 = _guard_xfg_dispatch_icall_nop(pcVar1,0,uVar10);
      if (pvVar6 == (void *)0x0) {
        CRYPTO_free(*(undefined8 *)(param_1 + 0x630),"ssl\\statem\\extensions_srvr.c",0x95);
        *(undefined8 *)(param_1 + 0x630) = 0;
        CRYPTO_free(0,"d:\\dev\\openssl\\source\\win64-release\\ssl\\packet_locl.h",0x1c1);
        lVar7 = CRYPTO_strndup(pcVar1,uVar10,
                               "d:\\dev\\openssl\\source\\win64-release\\ssl\\packet_locl.h",0x1c4);
        *(longlong *)(param_1 + 0x630) = lVar7;
        if (lVar7 == 0) {
          uVar13 = 0x99;
          uVar9 = 0x50;
          uVar12 = 0x44;
          goto LAB_143cde5da;
        }
        iVar5 = *(int *)(param_1 + 200);
        *(undefined4 *)(param_1 + 0x710) = 1;
        goto LAB_143cde531;
      }
      uVar13 = 0x8d;
      uVar9 = 0x70;
    }
    else {
      uVar13 = 0x86;
      uVar9 = 0x70;
    }
  }
  else {
LAB_143cde5c0:
    uVar13 = 0x7e;
    uVar9 = 0x32;
  }
  uVar12 = 0x6e;
LAB_143cde5da:
  ossl_statem_fatal(param_1,uVar9,0x23d,uVar12,"ssl\\statem\\extensions_srvr.c",uVar13,pcVar14);
  return 0;
}



// FUNCTION 143cde630 tls_parse_ctos_session_ticket body=112 status=ok
// SIG undefined tls_parse_ctos_session_ticket(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_ctos_session_ticket(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(code **)(param_1 + 0x6a0) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x6a0))
                      (param_1,*param_2,*(undefined4 *)(param_2 + 1),
                       *(undefined8 *)(param_1 + 0x6a8));
    if (iVar1 == 0) {
      ossl_statem_fatal(param_1,0x50,0x23e,0x44,"ssl\\statem\\extensions_srvr.c",
                        CONCAT44(uVar2,0x115));
      return 0;
    }
  }
  return 1;
}



// FUNCTION 143cde6a0 tls_parse_ctos_sig_algs body=237 status=ok
// SIG undefined tls_parse_ctos_sig_algs(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_ctos_sig_algs(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined1 *local_18;
  ulonglong uStack_10;
  
  puVar1 = (undefined1 *)*param_2;
  uVar2 = param_2[1];
  if (1 < uVar2) {
    uVar4 = uVar2 - 2;
    local_18 = puVar1 + 2;
    uStack_10 = (ulonglong)CONCAT11(*puVar1,puVar1[1]);
    puVar1 = local_18;
    uVar2 = uVar4;
    if (uStack_10 <= uVar4) {
      puVar1 = local_18 + uStack_10;
      uVar2 = uVar4 - uStack_10;
      if (uVar4 - uStack_10 == 0) {
        *param_2 = (longlong)(local_18 + uStack_10);
        param_2[1] = 0;
        puVar1 = local_18;
        uVar2 = uStack_10;
        if (uStack_10 != 0) {
          if (*(int *)(param_1 + 200) != 0) {
            return 1;
          }
          iVar3 = tls1_save_sigalgs(param_1,&local_18,0);
          if (iVar3 != 0) {
            return 1;
          }
          uVar5 = 0x13f;
          goto LAB_143cde761;
        }
      }
    }
  }
  uStack_10 = uVar2;
  local_18 = puVar1;
  uVar5 = 0x139;
LAB_143cde761:
  ossl_statem_fatal(param_1,0x32,0x23f,0x6e,"ssl\\statem\\extensions_srvr.c",uVar5);
  return 0;
}



// FUNCTION 143cde790 tls_parse_ctos_sig_algs_cert body=240 status=ok
// SIG undefined tls_parse_ctos_sig_algs_cert(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_ctos_sig_algs_cert(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined1 *local_18;
  ulonglong uStack_10;
  
  puVar1 = (undefined1 *)*param_2;
  uVar2 = param_2[1];
  if (1 < uVar2) {
    uVar4 = uVar2 - 2;
    local_18 = puVar1 + 2;
    uStack_10 = (ulonglong)CONCAT11(*puVar1,puVar1[1]);
    puVar1 = local_18;
    uVar2 = uVar4;
    if (uStack_10 <= uVar4) {
      puVar1 = local_18 + uStack_10;
      uVar2 = uVar4 - uStack_10;
      if (uVar4 - uStack_10 == 0) {
        *param_2 = (longlong)(local_18 + uStack_10);
        param_2[1] = 0;
        puVar1 = local_18;
        uVar2 = uStack_10;
        if (uStack_10 != 0) {
          if (*(int *)(param_1 + 200) != 0) {
            return 1;
          }
          iVar3 = tls1_save_sigalgs(param_1,&local_18,1);
          if (iVar3 != 0) {
            return 1;
          }
          uVar5 = 0x12a;
          goto LAB_143cde854;
        }
      }
    }
  }
  uStack_10 = uVar2;
  local_18 = puVar1;
  uVar5 = 0x124;
LAB_143cde854:
  ossl_statem_fatal(param_1,0x32,0x267,0x6e,"ssl\\statem\\extensions_srvr.c",uVar5);
  return 0;
}



// FUNCTION 143cde880 tls_parse_ctos_srp body=292 status=ok
// SIG undefined tls_parse_ctos_srp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_ctos_srp(longlong param_1,undefined8 *param_2)

{
  byte *_Buf;
  byte bVar1;
  void *pvVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte *pbVar9;
  
  pbVar9 = (byte *)*param_2;
  uVar4 = param_2[1];
  if (uVar4 != 0) {
    uVar4 = uVar4 - 1;
    bVar1 = *pbVar9;
    uVar6 = (ulonglong)bVar1;
    _Buf = pbVar9 + 1;
    pbVar9 = _Buf;
    if (uVar6 <= uVar4) {
      pbVar9 = _Buf + uVar6;
      uVar4 = uVar4 - uVar6;
      if (uVar4 == 0) {
        *param_2 = pbVar9;
        param_2[1] = 0;
        pvVar2 = _guard_xfg_dispatch_icall_nop(_Buf,0,(ulonglong)(uint)bVar1);
        if (pvVar2 == (void *)0x0) {
          CRYPTO_free(*(undefined8 *)(param_1 + 0x7a0),
                      "d:\\dev\\openssl\\source\\win64-release\\ssl\\packet_locl.h",0x1c1);
          lVar3 = CRYPTO_strndup(_Buf,(uint)bVar1,
                                 "d:\\dev\\openssl\\source\\win64-release\\ssl\\packet_locl.h",0x1c4
                                );
          *(longlong *)(param_1 + 0x7a0) = lVar3;
          if (lVar3 != 0) {
            return 1;
          }
          uVar8 = 0xea;
          uVar5 = 0x50;
          uVar7 = 0x44;
          goto LAB_143cde978;
        }
      }
    }
  }
  uVar5 = 0x32;
  uVar8 = 0xe0;
  uVar7 = 0x6e;
LAB_143cde978:
  ossl_statem_fatal(param_1,uVar5,0x240,uVar7,"ssl\\statem\\extensions_srvr.c",uVar8,pbVar9,uVar4);
  return 0;
}



// FUNCTION 143cde9b0 tls_parse_ctos_status_request body=750 status=ok
// SIG undefined tls_parse_ctos_status_request(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
tls_parse_ctos_status_request
          (longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined1 *local_res8;
  undefined4 uVar12;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if ((*(int *)(param_1 + 200) == 0) && (param_4 == 0)) {
    if (param_2[1] == 0) {
      ossl_statem_fatal(param_1,0x32,0x241,0x6e,"ssl\\statem\\extensions_srvr.c",0x156);
      return 0;
    }
    *(uint *)(param_1 + 0x638) = (uint)*(byte *)*param_2;
    *param_2 = *param_2 + 1;
    param_2[1] = param_2[1] + -1;
    if (*(int *)(param_1 + 0x638) == 1) {
      iVar6 = PACKET_get_length_prefixed_2(param_2,&local_38);
      if (iVar6 == 0) {
        uVar12 = 0x164;
        uVar9 = CONCAT44(uStack_30._4_4_,(undefined4)uStack_30);
LAB_143cdea57:
        uVar8 = 0x32;
        uVar11 = 0x6e;
        uStack_30 = uVar9;
      }
      else {
        OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x650),FUN_143cfee00);
        uVar10 = CONCAT44(uStack_30._4_4_,(undefined4)uStack_30);
        if (uVar10 == 0) {
          *(undefined8 *)(param_1 + 0x650) = 0;
        }
        else {
          lVar7 = OPENSSL_sk_new_null();
          *(longlong *)(param_1 + 0x650) = lVar7;
          if (lVar7 == 0) {
            uVar12 = 0x171;
            uVar8 = 0x50;
            uVar11 = 0x41;
            goto LAB_143cdea60;
          }
        }
        uVar4 = CONCAT44(uStack_30._4_4_,(undefined4)uStack_30);
        uStack_30 = uVar10;
        uVar5 = uVar4;
        do {
          uVar9 = uVar5;
          if (uVar10 == 0) {
            uStack_30 = uVar9;
            iVar6 = PACKET_as_length_prefixed_2(param_2,&local_38);
            uVar10 = uStack_30;
            puVar1 = local_38;
            if (iVar6 == 0) {
              uVar12 = 0x1a2;
              uVar9 = uStack_30;
            }
            else {
              if (uStack_30 == 0) {
                return 1;
              }
              local_res8 = local_38;
              OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x658),FUN_143cfb600);
              lVar7 = FUN_143cfb620(0,&local_res8,uVar10 & 0xffffffff);
              *(longlong *)(param_1 + 0x658) = lVar7;
              if ((lVar7 != 0) && (local_res8 == puVar1 + uVar10)) {
                return 1;
              }
              uVar12 = 0x1af;
              uVar9 = uStack_30;
            }
            goto LAB_143cdea57;
          }
          if (uStack_30 < 2) {
LAB_143cdebd9:
            uVar12 = 0x180;
            goto LAB_143cdea57;
          }
          uVar3 = *local_38;
          puVar1 = local_38 + 2;
          puVar2 = local_38 + 1;
          uVar10 = (ulonglong)CONCAT11(uVar3,*puVar2);
          if (uVar4 - 2 < uVar10) goto LAB_143cdebd9;
          uVar9 = (uVar4 - 2) - uVar10;
          local_38 = puVar1 + uVar10;
          if (uVar10 == 0) goto LAB_143cdebd9;
          local_res8 = puVar1;
          uStack_30 = uVar9;
          lVar7 = FUN_143cfee50(0,&local_res8,CONCAT11(uVar3,*puVar2));
          if (lVar7 == 0) {
            uVar12 = 0x18a;
            uVar9 = uStack_30;
            goto LAB_143cdea57;
          }
          if (local_res8 != puVar1 + uVar10) {
            FUN_143cfee00(lVar7);
            uVar12 = 0x191;
            uVar9 = uStack_30;
            goto LAB_143cdea57;
          }
          iVar6 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 0x650),lVar7);
          uVar4 = uVar9;
          uVar5 = uStack_30;
          uVar10 = uVar9;
        } while (iVar6 != 0);
        FUN_143cfee00(lVar7);
        uVar8 = 0x50;
        uVar12 = 0x199;
        uVar11 = 0x44;
      }
LAB_143cdea60:
      ossl_statem_fatal(param_1,uVar8,0x241,uVar11,"ssl\\statem\\extensions_srvr.c",uVar12);
      return 0;
    }
    *(undefined4 *)(param_1 + 0x638) = 0xffffffff;
  }
  return 1;
}



// FUNCTION 143cdeca0 tls_parse_ctos_supported_groups body=396 status=ok
// SIG undefined tls_parse_ctos_supported_groups(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_ctos_supported_groups(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 *local_18;
  ulonglong uStack_10;
  
  puVar2 = (undefined1 *)*param_2;
  uVar3 = param_2[1];
  if (1 < uVar3) {
    uVar5 = uVar3 - 2;
    local_18 = puVar2 + 2;
    bVar1 = puVar2[1];
    uStack_10 = (ulonglong)CONCAT11(*puVar2,bVar1);
    puVar2 = local_18;
    uVar3 = uVar5;
    if (uStack_10 <= uVar5) {
      puVar2 = local_18 + uStack_10;
      uVar3 = uVar5 - uStack_10;
      if (uVar5 - uStack_10 == 0) {
        *param_2 = (longlong)(local_18 + uStack_10);
        param_2[1] = 0;
        puVar2 = local_18;
        uVar3 = uStack_10;
        if ((uStack_10 != 0) && ((bVar1 & 1) == 0)) {
          if ((*(int *)(param_1 + 200) != 0) &&
             ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0 ||
               (iVar4 = **(int **)(param_1 + 8), iVar4 < 0x304)) || (iVar4 == 0x10000)))) {
            return 1;
          }
          CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x178),
                      "ssl\\statem\\extensions_srvr.c",0x3c5);
          *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x178) = 0;
          *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x170) = 0;
          iVar4 = tls1_save_u16(&local_18,*(longlong *)(param_1 + 0x508) + 0x178,
                                *(longlong *)(param_1 + 0x508) + 0x170);
          if (iVar4 != 0) {
            return 1;
          }
          uVar8 = 0x3cd;
          uVar6 = 0x50;
          uVar7 = 0x44;
          goto LAB_143cdee0c;
        }
      }
    }
  }
  uStack_10 = uVar3;
  local_18 = puVar2;
  uVar6 = 0x32;
  uVar8 = 0x3c0;
  uVar7 = 0x6e;
LAB_143cdee0c:
  ossl_statem_fatal(param_1,uVar6,0x242,uVar7,"ssl\\statem\\extensions_srvr.c",uVar8);
  return 0;
}



// FUNCTION 143cdee30 tls_parse_ctos_use_srtp body=514 status=ok
// SIG undefined tls_parse_ctos_use_srtp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_ctos_use_srtp(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  
  lVar6 = SSL_get_srtp_profiles();
  if (lVar6 == 0) {
    return 1;
  }
  if (1 < (ulonglong)param_2[1]) {
    puVar4 = (undefined1 *)*param_2;
    uVar12 = param_2[1] - 2;
    puVar13 = puVar4 + 2;
    bVar1 = puVar4[1];
    uVar9 = (uint)CONCAT11(*puVar4,bVar1);
    *param_2 = (longlong)puVar13;
    param_2[1] = uVar12;
    if (((bVar1 & 1) == 0) && (uVar11 = (ulonglong)uVar9, uVar11 <= uVar12)) {
      *param_2 = (longlong)(puVar13 + uVar9);
      param_2[1] = uVar12 - uVar11;
      uVar7 = SSL_get_srtp_profiles(param_1);
      *(undefined8 *)(param_1 + 0x748) = 0;
      iVar5 = OPENSSL_sk_num(uVar7);
      do {
        if (uVar11 == 0) {
          if (param_2[1] == 0) {
            uVar14 = 0x228;
LAB_143cdefc9:
            uVar7 = 0x161;
          }
          else {
            uVar12 = (ulonglong)*(byte *)*param_2;
            pbVar8 = (byte *)*param_2 + 1;
            uVar11 = param_2[1] - 1;
            *param_2 = (longlong)pbVar8;
            param_2[1] = uVar11;
            if (uVar12 <= uVar11) {
              *param_2 = (longlong)(pbVar8 + uVar12);
              param_2[1] = uVar11 - uVar12;
              if (uVar11 - uVar12 == 0) {
                return 1;
              }
            }
            uVar14 = 0x22f;
            uVar7 = 0x160;
          }
          ossl_statem_fatal(param_1,0x32,0x1d1,uVar7,"ssl\\statem\\extensions_srvr.c",uVar14);
          return 0;
        }
        if (uVar11 < 2) {
          uVar14 = 0x20f;
          goto LAB_143cdefc9;
        }
        uVar2 = *puVar13;
        uVar11 = uVar11 - 2;
        uVar3 = puVar13[1];
        iVar10 = 0;
        puVar13 = puVar13 + 2;
        if (0 < iVar5) {
          do {
            lVar6 = OPENSSL_sk_value(uVar7,iVar10);
            if (*(uint *)(lVar6 + 8) == (uint)CONCAT11(uVar2,uVar3)) {
              *(longlong *)(param_1 + 0x748) = lVar6;
              iVar5 = iVar10;
              break;
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar5);
        }
      } while( true );
    }
  }
  ossl_statem_fatal(param_1,0x32,0x1d1,0x161,"ssl\\statem\\extensions_srvr.c",0x203);
  return 0;
}



// FUNCTION 143cdf040 tls_construct_ctos_alpn body=274 status=ok
// SIG undefined tls_construct_ctos_alpn(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_ctos_alpn(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x400) = 0;
  if ((*(longlong *)(param_1 + 0x6c0) != 0) &&
     ((*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x198) == 0 ||
      (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x220) == 0)))) {
    iVar1 = WPACKET_put_bytes__(param_2,0x10,2);
    if (iVar1 != 0) {
      iVar1 = WPACKET_start_sub_packet_len__(param_2,2);
      if (iVar1 != 0) {
        iVar1 = WPACKET_sub_memcpy__
                          (param_2,*(undefined8 *)(param_1 + 0x6c0),*(undefined8 *)(param_1 + 0x6c8)
                           ,2);
        if (iVar1 != 0) {
          iVar1 = WPACKET_close(param_2);
          if (iVar1 != 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x400) = 1;
            return 1;
          }
        }
      }
    }
    ossl_statem_fatal(param_1,0x50,0x1d2,0x44,"ssl\\statem\\extensions_clnt.c",CONCAT44(uVar2,399));
    return 0;
  }
  return 2;
}



// FUNCTION 143cdf160 tls_construct_ctos_cookie body=263 status=ok
// SIG undefined tls_construct_ctos_cookie(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_ctos_cookie(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  uVar2 = 0;
  if (*(longlong *)(param_1 + 0x6f8) == 0) {
    return 2;
  }
  iVar1 = WPACKET_put_bytes__(param_2,0x2c,2);
  if (iVar1 != 0) {
    iVar1 = WPACKET_start_sub_packet_len__(param_2,2);
    if (iVar1 != 0) {
      iVar1 = WPACKET_sub_memcpy__
                        (param_2,*(undefined8 *)(param_1 + 0x6f0),*(undefined8 *)(param_1 + 0x6f8),2
                        );
      if (iVar1 != 0) {
        iVar1 = WPACKET_close(param_2);
        if (iVar1 != 0) {
          uVar2 = 1;
          goto LAB_143cdf225;
        }
      }
    }
  }
  ossl_statem_fatal(param_1,0x50,0x217,0x44,"ssl\\statem\\extensions_clnt.c",CONCAT44(uVar3,0x2cd));
LAB_143cdf225:
  CRYPTO_free(*(undefined8 *)(param_1 + 0x6f0),"ssl\\statem\\extensions_clnt.c",0x2d3);
  *(undefined8 *)(param_1 + 0x6f0) = 0;
  *(undefined8 *)(param_1 + 0x6f8) = 0;
  return uVar2;
}



// FUNCTION 143cdf270 tls_construct_ctos_early_data body=1376 status=ok
// SIG undefined tls_construct_ctos_early_data(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 tls_construct_ctos_early_data(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  char cVar2;
  char cVar3;
  code *pcVar4;
  byte *pbVar5;
  ulonglong uVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong lVar12;
  char *pcVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  int *piVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  undefined1 auStack_238 [32];
  int **local_218;
  undefined4 local_210;
  undefined2 local_208 [4];
  int *local_200;
  ulonglong local_1f8;
  char *local_1f0;
  byte *local_1e8;
  ulonglong uStack_1e0;
  byte *local_1d8;
  ulonglong uStack_1d0;
  char local_1c8;
  char local_1c7 [143];
  int *local_138 [32];
  ulonglong local_38;
  undefined8 uStack_20;
  
  uStack_20 = 0x143cdf287;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  local_1f0 = (char *)0x0;
  local_1f8 = 0;
  uVar11 = 0;
  local_200 = (int *)0x0;
  if (*(int *)(param_1 + 0x4d8) == 1) {
    uVar11 = ssl_handshake_md(param_1);
  }
  if (*(code **)(param_1 + 0x590) != (code *)0x0) {
    local_218 = &local_200;
    iVar8 = (**(code **)(param_1 + 0x590))(param_1,uVar11,&local_1f0,&local_1f8);
    if (iVar8 != 0) {
      if (local_200 == (int *)0x0) goto LAB_143cdf363;
      if (*local_200 == 0x304) goto LAB_143cdf35a;
    }
    SSL_SESSION_free();
    uVar14 = 0x50;
    local_210 = 0x2f0;
    uVar18 = 0xdb;
    goto LAB_143cdf343;
  }
LAB_143cdf35a:
  if (local_200 == (int *)0x0) {
LAB_143cdf363:
    pcVar4 = *(code **)(param_1 + 0x578);
    if (pcVar4 != (code *)0x0) {
      _guard_xfg_dispatch_icall_nop(&local_1c8,0,0x81);
      local_210 = 0x100;
      local_218 = local_138;
      uVar9 = (*pcVar4)(param_1,0,&local_1c8,0x80);
      if (0x100 < uVar9) {
        uVar14 = 0x28;
        local_210 = 0x2ff;
        uVar18 = 0x44;
        goto LAB_143cdf343;
      }
      if (uVar9 != 0) {
        local_208[0] = 0x113;
        pcVar13 = &local_1c8;
        for (uVar10 = 0; (local_1c8 != '\0' && (uVar10 < 0x80000000)); uVar10 = uVar10 + 1) {
          pcVar13 = pcVar13 + 1;
          local_1c8 = *pcVar13;
        }
        local_1f8 = (ulonglong)(uVar10 & 0x7fffffff);
        if (0x80 < local_1f8) {
          uVar14 = 0x50;
          local_210 = 0x309;
          uVar18 = 0x44;
          goto LAB_143cdf343;
        }
        local_1f0 = &local_1c8;
        lVar12 = SSL_CIPHER_find(param_1,local_208);
        if (lVar12 == 0) {
          local_210 = 0x316;
          uVar14 = 0x50;
          uVar18 = 0x44;
          goto LAB_143cdf343;
        }
        local_200 = (int *)SSL_SESSION_new();
        if ((((local_200 == (int *)0x0) ||
             (iVar8 = SSL_SESSION_set1_master_key(local_200,local_138,uVar9), iVar8 == 0)) ||
            (iVar8 = SSL_SESSION_set_cipher(local_200,lVar12), iVar8 == 0)) ||
           (iVar8 = SSL_SESSION_set_protocol_version(local_200,0x304), iVar8 == 0)) {
          local_210 = 0x321;
          local_218 = (int **)0x145d57920;
          ossl_statem_fatal(param_1,0x50,0x212,0x44);
          FUN_14004ff40(local_138,uVar9);
          return 0;
        }
        FUN_14004ff40(local_138,uVar9);
      }
    }
  }
  SSL_SESSION_free(*(undefined8 *)(param_1 + 0x510));
  *(int **)(param_1 + 0x510) = local_200;
  if (local_200 != (int *)0x0) {
    CRYPTO_free(*(undefined8 *)(param_1 + 0x518),"ssl\\statem\\extensions_clnt.c",0x32d);
    lVar12 = CRYPTO_memdup(local_1f0,local_1f8,"ssl\\statem\\extensions_clnt.c",0x32e);
    *(longlong *)(param_1 + 0x518) = lVar12;
    if (lVar12 == 0) {
      local_210 = 0x331;
      uVar14 = 0x50;
      uVar18 = 0x44;
      goto LAB_143cdf343;
    }
    *(ulonglong *)(param_1 + 0x520) = local_1f8;
  }
  if ((*(int *)(param_1 + 0x84) != 2) ||
     ((piVar16 = *(int **)(param_1 + 0x508), piVar16[0x67] == 0 &&
      ((local_200 == (int *)0x0 || (piVar16 = local_200, local_200[0x67] == 0)))))) {
    *(undefined4 *)(param_1 + 0x16e0) = 0;
    return 2;
  }
  *(int *)(param_1 + 0x16e0) = piVar16[0x67];
  if (*(longlong *)(piVar16 + 0x56) != 0) {
    pcVar13 = *(char **)(param_1 + 0x630);
    if (pcVar13 != (char *)0x0) {
      lVar12 = *(longlong *)(piVar16 + 0x56) - (longlong)pcVar13;
      do {
        cVar2 = *pcVar13;
        cVar3 = pcVar13[lVar12];
        if (cVar2 != cVar3) break;
        pcVar13 = pcVar13 + 1;
      } while (cVar3 != '\0');
      if (cVar2 == cVar3) goto LAB_143cdf61f;
    }
    local_210 = 0x346;
    uVar14 = 0x50;
    uVar18 = 0xe7;
LAB_143cdf343:
    local_218 = (int **)0x145d57920;
    ossl_statem_fatal(param_1,uVar14,0x212,uVar18);
    return 0;
  }
LAB_143cdf61f:
  pbVar5 = *(byte **)(param_1 + 0x6c0);
  if ((pbVar5 == (byte *)0x0) && (*(longlong *)(piVar16 + 0x68) != 0)) {
    local_210 = 0x34d;
    uVar14 = 0x50;
    uVar18 = 0xde;
    goto LAB_143cdf343;
  }
  if (*(longlong *)(piVar16 + 0x68) != 0) {
    uVar6 = *(ulonglong *)(param_1 + 0x6c8);
    pbVar7 = pbVar5;
    uVar15 = uVar6;
    if (0x7fffffffffffffff < uVar6) {
      local_210 = 0x35b;
      goto LAB_143cdf7ae;
    }
    do {
      uStack_1e0 = uVar15;
      uStack_1d0 = uVar6;
      local_1d8 = pbVar7;
      local_1e8 = pbVar5;
      if (uStack_1d0 == 0) {
LAB_143cdf708:
        local_210 = 0x368;
        uVar11 = 0xde;
        goto LAB_143cdf7b4;
      }
      pbVar1 = local_1d8 + 1;
      uVar17 = (ulonglong)*local_1d8;
      uStack_1e0 = uStack_1e0 - 1;
      local_1e8 = pbVar1;
      if (uStack_1e0 < uVar17) goto LAB_143cdf708;
      pbVar5 = pbVar1 + uVar17;
      uVar15 = uStack_1e0 - uVar17;
      pbVar7 = pbVar5;
      uVar6 = uVar15;
    } while ((uVar17 != *(ulonglong *)(piVar16 + 0x6a)) ||
            (local_1e8 = pbVar5, uStack_1e0 = uVar15, local_1d8 = pbVar5, uStack_1d0 = uVar15,
            iVar8 = FUN_14004ffa0(pbVar1,*(undefined8 *)(piVar16 + 0x68),
                                  *(ulonglong *)(piVar16 + 0x6a)), pbVar7 = local_1d8,
            uVar6 = uStack_1d0, iVar8 != 0));
  }
  iVar8 = WPACKET_put_bytes__(param_2,0x2a,2);
  if ((iVar8 != 0) &&
     ((iVar8 = WPACKET_start_sub_packet_len__(param_2,2), iVar8 != 0 &&
      (iVar8 = WPACKET_close(param_2), iVar8 != 0)))) {
    *(undefined4 *)(param_1 + 0x6e8) = 1;
    *(undefined4 *)(param_1 + 0x6ec) = 1;
    return 1;
  }
  local_210 = 0x371;
LAB_143cdf7ae:
  uVar11 = 0x44;
LAB_143cdf7b4:
  local_218 = (int **)0x145d57920;
  ossl_statem_fatal(param_1,0x50,0x212,uVar11);
  return 0;
}


