// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143d122e0 pem_malloc body=58 status=ok
// SIG undefined pem_malloc(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void pem_malloc(int param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    CRYPTO_secure_malloc((longlong)param_1,"crypto\\pem\\pem_lib.c",0xe4);
    return;
  }
  CRYPTO_malloc((longlong)param_1,"crypto\\pem\\pem_lib.c",0xe5);
  return;
}



// FUNCTION 143d12320 sanitize_line body=231 status=ok
// SIG undefined sanitize_line(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int sanitize_line(char *param_1,uint param_2,byte param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)(int)param_2;
  if ((param_3 & 2) == 0) {
    iVar4 = 0;
    if ((param_3 & 4) == 0) {
      pcVar3 = param_1;
      if (0 < (longlong)uVar5) {
        do {
          cVar1 = *pcVar3;
          if ((cVar1 == '\n') || (cVar1 == '\r')) break;
          iVar2 = ossl_ctype_check((int)cVar1,0x40);
          if (iVar2 != 0) {
            *pcVar3 = ' ';
          }
          pcVar3 = pcVar3 + 1;
          iVar4 = iVar4 + 1;
        } while ((longlong)pcVar3 - (longlong)param_1 < (longlong)uVar5);
      }
    }
    else {
      pcVar3 = param_1;
      if (0 < (longlong)uVar5) {
        do {
          iVar2 = ossl_ctype_check((int)*pcVar3,0x400);
          if (((iVar2 == 0) || (*pcVar3 == '\n')) || (*pcVar3 == '\r')) break;
          pcVar3 = pcVar3 + 1;
          iVar4 = iVar4 + 1;
        } while ((longlong)pcVar3 - (longlong)param_1 < (longlong)uVar5);
      }
    }
  }
  else {
    if (-1 < (int)param_2) {
      pcVar3 = param_1 + uVar5;
      do {
        param_2 = (uint)uVar5;
        if (' ' < *pcVar3) break;
        pcVar3 = pcVar3 + -1;
        param_2 = param_2 - 1;
        uVar5 = (ulonglong)param_2;
      } while (-1 < (int)param_2);
    }
    iVar4 = param_2 + 1;
  }
  (param_1 + iVar4)[0] = '\n';
  (param_1 + iVar4)[1] = '\0';
  return iVar4 + 1;
}



// FUNCTION 143d12410 ENGINE_load_ssl_client_cert body=292 status=ok
// SIG undefined ENGINE_load_ssl_client_cert(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ENGINE_load_ssl_client_cert
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  if (param_1 == 0) {
    ERR_put_error(0x26,0xc2,0x43,"crypto\\engine\\eng_pkey.c",CONCAT44(uVar2,0x7a));
    uVar1 = 0;
  }
  else {
    CRYPTO_THREAD_read_lock(DAT_146bcd570);
    if (*(int *)(param_1 + 0xa0) == 0) {
      CRYPTO_THREAD_unlock(DAT_146bcd570);
      ERR_put_error(0x26,0xc2,0x75,"crypto\\engine\\eng_pkey.c",CONCAT44(uVar2,0x81));
      uVar1 = 0;
    }
    else {
      CRYPTO_THREAD_unlock(DAT_146bcd570);
      if (*(code **)(param_1 + 0x88) == (code *)0x0) {
        ERR_put_error(0x26,0xc2,0x7d,"crypto\\engine\\eng_pkey.c",CONCAT44(uVar2,0x87));
        uVar1 = 0;
      }
      else {
        uVar1 = (**(code **)(param_1 + 0x88))
                          (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      }
    }
  }
  return uVar1;
}



// FUNCTION 143d12540 ENGINE_set_load_privkey_function body=10 status=ok
// SIG undefined ENGINE_set_load_privkey_function(void)

undefined8 ENGINE_set_load_privkey_function(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x78) = param_2;
  return 1;
}



// FUNCTION 143d12550 ENGINE_set_load_ssl_client_cert_function body=13 status=ok
// SIG undefined ENGINE_set_load_ssl_client_cert_function(void)

undefined8 ENGINE_set_load_ssl_client_cert_function(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x88) = param_2;
  return 1;
}



// FUNCTION 143d12560 zlib_stateful_init body=238 status=ok
// SIG undefined zlib_stateful_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 zlib_stateful_init(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)CRYPTO_zalloc(0xb0,"crypto\\comp\\c_zlib.c");
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[6] = zlib_zalloc;
    puVar2[7] = zlib_zfree;
    puVar2[8] = 0;
    *puVar2 = 0;
    puVar2[2] = 0;
    iVar1 = inflateInit_(puVar2,"1.2.8",0x58);
    if (iVar1 == 0) {
      puVar2[0x11] = zlib_zalloc;
      puVar2[0xb] = 0;
      puVar2[0x12] = zlib_zfree;
      puVar2[0x13] = 0;
      puVar2[0xd] = 0;
      iVar1 = deflateInit_(puVar2 + 0xb,0xffffffff,"1.2.8",0x58);
      if (iVar1 == 0) {
        *(undefined8 **)(param_1 + 0x18) = puVar2;
        return 1;
      }
    }
  }
  CRYPTO_free(puVar2,"crypto\\comp\\c_zlib.c",0x99);
  return 0;
}



// FUNCTION 143d12650 zlib_stateful_finish body=62 status=ok
// SIG undefined zlib_stateful_finish(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void zlib_stateful_finish(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  inflateEnd(lVar1);
  deflateEnd(lVar1 + 0x58);
  CRYPTO_free(lVar1,"crypto\\comp\\c_zlib.c",0xa2);
  return;
}



// FUNCTION 143d12690 zlib_stateful_compress_block body=103 status=ok
// SIG undefined zlib_stateful_compress_block(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int zlib_stateful_compress_block
              (longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
    return -1;
  }
  *(undefined8 *)(lVar1 + 0x58) = param_4;
  *(int *)(lVar1 + 0x60) = param_5;
  *(undefined8 *)(lVar1 + 0x68) = param_2;
  *(int *)(lVar1 + 0x70) = param_3;
  if ((param_5 != 0) && (iVar2 = FUN_14369d3f0((undefined8 *)(lVar1 + 0x58),2), iVar2 != 0)) {
    return -1;
  }
  return param_3 - *(int *)(lVar1 + 0x70);
}



// FUNCTION 143d12700 zlib_stateful_expand_block body=114 status=ok
// SIG undefined zlib_stateful_expand_block(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int zlib_stateful_expand_block
              (longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (puVar1 == (undefined8 *)0x0) {
    return 0;
  }
  *puVar1 = param_4;
  *(int *)(puVar1 + 1) = param_5;
  puVar1[2] = param_2;
  *(int *)(puVar1 + 3) = param_3;
  if (param_5 != 0) {
    iVar2 = FUN_14369eec0(puVar1,2);
    if (iVar2 != 0) {
      return -1;
    }
  }
  return param_3 - *(int *)(puVar1 + 3);
}



// FUNCTION 143d12780 bio_zlib_new body=181 status=ok
// SIG undefined bio_zlib_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 bio_zlib_new(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143d12790;
  lVar1 = CRYPTO_zalloc(0xe8,"crypto\\comp\\c_zlib.c");
  if (lVar1 == 0) {
    ERR_put_error(0x29,100,0x41,"crypto\\comp\\c_zlib.c",0x14a,uVar2);
    return 0;
  }
  *(undefined4 *)(lVar1 + 8) = 0x400;
  *(undefined4 *)(lVar1 + 0x70) = 0x400;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(lVar1 + 0xc0) = 0;
  *(undefined8 *)(lVar1 + 200) = 0;
  *(undefined4 *)(lVar1 + 0x88) = 0xffffffff;
  CAkMatrixAwareCtx::SetRegisteredNotif(param_1,1);
  FMemFileIn::seekg(param_1,lVar1);
  return 1;
}



// FUNCTION 143d12840 bio_zlib_free body=178 status=ok
// SIG undefined bio_zlib_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 bio_zlib_free(longlong param_1)

{
  longlong *plVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  plVar1 = (longlong *)UNiagaraSystem::GetEffectType();
  if (*plVar1 != 0) {
    inflateEnd(plVar1 + 2);
    CRYPTO_free(*plVar1,"crypto\\comp\\c_zlib.c",0x163);
  }
  if (plVar1[0xd] != 0) {
    deflateEnd(plVar1 + 0x12);
    CRYPTO_free(plVar1[0xd],"crypto\\comp\\c_zlib.c",0x168);
  }
  CRYPTO_free(plVar1,"crypto\\comp\\c_zlib.c",0x16a);
  FMemFileIn::seekg(param_1,0);
  CAkMatrixAwareCtx::SetRegisteredNotif(param_1,0);
  return 1;
}



// FUNCTION 143d12900 bio_zlib_read body=427 status=ok
// SIG undefined bio_zlib_read(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int bio_zlib_read(undefined8 param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143d12913;
  uVar2 = BIO_next();
  if ((param_2 == 0) || (param_3 == 0)) {
    return 0;
  }
  plVar3 = (longlong *)UNiagaraSystem::GetEffectType(param_1);
  BIO_clear_flags(param_1,0xf);
  if (*plVar3 == 0) {
    lVar4 = CRYPTO_malloc((longlong)(int)plVar3[1],"crypto\\comp\\c_zlib.c",0x17e);
    *plVar3 = lVar4;
    if (lVar4 == 0) {
      ERR_put_error(0x29,0x65,0x41,"crypto\\comp\\c_zlib.c",0x180,uVar5);
      return 0;
    }
    inflateInit_(plVar3 + 2,"1.2.8",0x58);
    plVar3[2] = *plVar3;
    *(undefined4 *)(plVar3 + 3) = 0;
  }
  plVar3[4] = param_2;
  iVar1 = (int)plVar3[3];
  *(int *)(plVar3 + 5) = param_3;
  while( true ) {
    while (iVar1 == 0) {
      iVar1 = BIO_read(uVar2,*plVar3,(int)plVar3[1]);
      if (iVar1 < 1) {
        param_3 = param_3 - (int)plVar3[5];
        BIO_copy_next_retry(param_1);
        if (-1 < iVar1) {
          return param_3;
        }
        if (0 < param_3) {
          return param_3;
        }
        return iVar1;
      }
      *(int *)(plVar3 + 3) = iVar1;
      plVar3[2] = *plVar3;
    }
    iVar1 = FUN_14369eec0(plVar3 + 2,0);
    if (iVar1 != 0) break;
    if ((int)plVar3[5] == 0) goto LAB_143d12a74;
    iVar1 = (int)plVar3[3];
  }
  if (iVar1 != 1) {
    ERR_put_error(0x29,0x65,100,"crypto\\comp\\c_zlib.c",400);
    uVar2 = zError(iVar1);
    ERR_add_error_data(2,"zlib error:",uVar2);
    return 0;
  }
LAB_143d12a74:
  return param_3 - (int)plVar3[5];
}



// FUNCTION 143d12ab0 bio_zlib_write body=493 status=ok
// SIG undefined bio_zlib_write(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int bio_zlib_write(undefined8 param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143d12ac9;
  uVar3 = BIO_next();
  if (((param_2 == 0) || (param_3 == 0)) ||
     (lVar4 = UNiagaraSystem::GetEffectType(param_1), *(int *)(lVar4 + 0x84) != 0)) {
    return 0;
  }
  plVar1 = (longlong *)(lVar4 + 0x90);
  BIO_clear_flags(param_1,0xf);
  if (*(longlong *)(lVar4 + 0x68) == 0) {
    lVar5 = CRYPTO_malloc((longlong)*(int *)(lVar4 + 0x70),"crypto\\comp\\c_zlib.c",0x1ba);
    *(longlong *)(lVar4 + 0x68) = lVar5;
    if (lVar5 == 0) {
      ERR_put_error(0x29,0x66,0x41,"crypto\\comp\\c_zlib.c",0x1bd,uVar6);
      return 0;
    }
    *(longlong *)(lVar4 + 0x78) = lVar5;
    *(undefined4 *)(lVar4 + 0x80) = 0;
    deflateInit_(plVar1,*(undefined4 *)(lVar4 + 0x88),"1.2.8",0x58);
    *(undefined8 *)(lVar4 + 0xa0) = *(undefined8 *)(lVar4 + 0x68);
    *(undefined4 *)(lVar4 + 0xa8) = *(undefined4 *)(lVar4 + 0x70);
  }
  *plVar1 = param_2;
  *(int *)(lVar4 + 0x98) = param_3;
  iVar2 = *(int *)(lVar4 + 0x80);
  while( true ) {
    if (iVar2 != 0) {
      uVar6 = *(undefined8 *)(lVar4 + 0x78);
      do {
        iVar2 = BIO_write(uVar3,uVar6,iVar2);
        if (iVar2 < 1) {
          param_3 = param_3 - *(int *)(lVar4 + 0x98);
          BIO_copy_next_retry(param_1);
          if (-1 < iVar2) {
            return param_3;
          }
          if (0 < param_3) {
            return param_3;
          }
          return iVar2;
        }
        *(longlong *)(lVar4 + 0x78) = *(longlong *)(lVar4 + 0x78) + (longlong)iVar2;
        uVar6 = *(undefined8 *)(lVar4 + 0x78);
        iVar2 = *(int *)(lVar4 + 0x80) - iVar2;
        *(int *)(lVar4 + 0x80) = iVar2;
      } while (iVar2 != 0);
    }
    if (*(int *)(lVar4 + 0x98) == 0) {
      return param_3;
    }
    *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(lVar4 + 0x68);
    *(undefined8 *)(lVar4 + 0xa0) = *(undefined8 *)(lVar4 + 0x68);
    *(undefined4 *)(lVar4 + 0xa8) = *(undefined4 *)(lVar4 + 0x70);
    iVar2 = FUN_14369d3f0(plVar1,0);
    if (iVar2 != 0) break;
    iVar2 = *(int *)(lVar4 + 0x70) - *(int *)(lVar4 + 0xa8);
    *(int *)(lVar4 + 0x80) = iVar2;
  }
  ERR_put_error(0x29,0x66,99,"crypto\\comp\\c_zlib.c",0x1e6);
  uVar3 = zError(iVar2);
  ERR_add_error_data(2,"zlib error:",uVar3);
  return 0;
}



// FUNCTION 143d12ca0 bio_zlib_ctrl body=680 status=ok
// SIG undefined bio_zlib_ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int bio_zlib_ctrl(undefined8 param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  
  lVar2 = BIO_next();
  if (lVar2 == 0) {
    return 0;
  }
  puVar3 = (undefined8 *)UNiagaraSystem::GetEffectType(param_1);
  if (param_2 == 1) {
    puVar3[0x10] = 0;
  }
  else {
    if (param_2 == 0xb) {
      uVar4 = BIO_next(param_1);
      lVar5 = UNiagaraSystem::GetEffectType(param_1);
      if ((*(longlong *)(lVar5 + 0x68) != 0) &&
         ((*(int *)(lVar5 + 0x84) == 0 || (*(int *)(lVar5 + 0x80) != 0)))) {
        BIO_clear_flags(param_1,0xf);
        *(undefined8 *)(lVar5 + 0x90) = 0;
        *(undefined4 *)(lVar5 + 0x98) = 0;
        iVar1 = *(int *)(lVar5 + 0x80);
        while( true ) {
          if (iVar1 != 0) {
            uVar6 = *(undefined8 *)(lVar5 + 0x78);
            do {
              iVar1 = BIO_write(uVar4,uVar6,iVar1);
              if (iVar1 < 1) {
                BIO_copy_next_retry(param_1);
                return iVar1;
              }
              *(longlong *)(lVar5 + 0x78) = *(longlong *)(lVar5 + 0x78) + (longlong)iVar1;
              uVar6 = *(undefined8 *)(lVar5 + 0x78);
              iVar1 = *(int *)(lVar5 + 0x80) - iVar1;
              *(int *)(lVar5 + 0x80) = iVar1;
            } while (iVar1 != 0);
          }
          if (*(int *)(lVar5 + 0x84) != 0) break;
          *(undefined8 *)(lVar5 + 0x78) = *(undefined8 *)(lVar5 + 0x68);
          *(undefined8 *)(lVar5 + 0xa0) = *(undefined8 *)(lVar5 + 0x68);
          *(undefined4 *)(lVar5 + 0xa8) = *(undefined4 *)(lVar5 + 0x70);
          iVar1 = FUN_14369d3f0((undefined8 *)(lVar5 + 0x90),4);
          if (iVar1 == 1) {
            *(undefined4 *)(lVar5 + 0x84) = 1;
            iVar1 = *(int *)(lVar5 + 0x70) - *(int *)(lVar5 + 0xa8);
            *(int *)(lVar5 + 0x80) = iVar1;
          }
          else {
            if (iVar1 != 0) {
              ERR_put_error(0x29,99,99,"crypto\\comp\\c_zlib.c",0x217);
              uVar4 = zError(iVar1);
              ERR_add_error_data(2,"zlib error:",uVar4);
              return 0;
            }
            iVar1 = *(int *)(lVar5 + 0x70) - *(int *)(lVar5 + 0xa8);
            *(int *)(lVar5 + 0x80) = iVar1;
          }
        }
      }
      iVar1 = BIO_ctrl(lVar2,0xb,0);
      return iVar1;
    }
    if (param_2 == 0x65) {
      BIO_clear_flags(param_1,0xf);
      iVar1 = BIO_ctrl(lVar2,0x65,param_3,param_4);
      BIO_copy_next_retry(param_1);
      return iVar1;
    }
    if (param_2 != 0x75) {
      iVar1 = BIO_ctrl(lVar2,param_2,param_3,param_4);
      return iVar1;
    }
    iVar1 = param_3;
    iVar7 = param_3;
    if ((param_4 != (int *)0x0) && (iVar1 = -1, *param_4 != 0)) {
      iVar7 = -1;
      iVar1 = param_3;
    }
    if (iVar7 != -1) {
      CRYPTO_free(*puVar3,"crypto\\comp\\c_zlib.c",0x246);
      *puVar3 = 0;
      *(int *)(puVar3 + 1) = iVar7;
    }
    if (iVar1 != -1) {
      CRYPTO_free(puVar3[0xd],"crypto\\comp\\c_zlib.c",0x24c);
      puVar3[0xd] = 0;
      *(int *)(puVar3 + 0xe) = iVar1;
    }
  }
  return 1;
}



// FUNCTION 143d12f50 bio_zlib_callback_ctrl body=68 status=ok
// SIG undefined bio_zlib_callback_ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void bio_zlib_callback_ctrl(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = BIO_next();
  if (lVar1 == 0) {
    return;
  }
  BIO_callback_ctrl(lVar1,param_2,param_3);
  return;
}



// FUNCTION 143d12fa0 BIO_f_zlib body=8 status=ok
// SIG undefined BIO_f_zlib(void)

undefined * BIO_f_zlib(void)

{
  return &DAT_145d77b90;
}



// FUNCTION 143d12fb0 COMP_zlib body=8 status=ok
// SIG undefined COMP_zlib(void)

undefined * COMP_zlib(void)

{
  return &DAT_146836f88;
}



// FUNCTION 143d12fc0 zlib_zalloc body=39 status=ok
// SIG undefined zlib_zalloc(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void zlib_zalloc(undefined8 param_1,int param_2,int param_3)

{
  CRYPTO_zalloc(param_2 * param_3,"crypto\\comp\\c_zlib.c",0x33);
  return;
}



// FUNCTION 143d12ff0 zlib_zfree body=36 status=ok
// SIG undefined zlib_zfree(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void zlib_zfree(undefined8 param_1,undefined8 param_2)

{
  CRYPTO_free(param_2,"crypto\\comp\\c_zlib.c",0x39);
  return;
}



// FUNCTION 143d13020 null_cipher body=48 status=ok
// SIG undefined null_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 null_cipher(undefined8 param_1,void *param_2,void *param_3,size_t param_4)

{
  if (param_3 != param_2) {
    _guard_xfg_dispatch_icall_nop(param_2,param_3,param_4);
  }
  return 1;
}



// FUNCTION 143d13050 FUN_143d13050 body=8 status=ok
// SIG undefined FUN_143d13050(void)

undefined * FUN_143d13050(void)

{
  return &DAT_145d77c30;
}



// FUNCTION 143d13060 EVP_PKEY_asn1_find body=251 status=ok
// SIG undefined EVP_PKEY_asn1_find(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong EVP_PKEY_asn1_find(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 *local_res8;
  undefined4 local_128 [70];
  undefined8 uStack_10;
  
  uStack_10 = 0x143d13070;
  do {
    local_res8 = local_128;
    local_128[0] = param_2;
    if ((DAT_146bcb480 == 0) || (iVar1 = OPENSSL_sk_find(DAT_146bcb480,local_128), iVar1 < 0)) {
      plVar3 = (longlong *)OBJ_bsearch_(&local_res8,&PTR_DAT_146836fc0,0x14,8,&LAB_143cae300);
      if ((plVar3 == (longlong *)0x0) || (lVar2 = *plVar3, lVar2 == 0)) {
        lVar2 = 0;
LAB_143d13110:
        if (param_1 != (longlong *)0x0) {
          lVar4 = ENGINE_get_pkey_asn1_meth_engine(param_2);
          if (lVar4 == 0) {
            *param_1 = 0;
          }
          else {
            *param_1 = lVar4;
            lVar2 = ENGINE_get_pkey_asn1_meth(lVar4,param_2);
          }
        }
        return lVar2;
      }
    }
    else {
      lVar2 = OPENSSL_sk_value(DAT_146bcb480,iVar1);
    }
    if ((lVar2 == 0) || ((*(byte *)(lVar2 + 8) & 1) == 0)) goto LAB_143d13110;
    param_2 = *(undefined4 *)(lVar2 + 4);
  } while( true );
}



// FUNCTION 143d13160 EVP_PKEY_asn1_find_str body=351 status=ok
// SIG undefined EVP_PKEY_asn1_find_str(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined *
EVP_PKEY_asn1_find_str(undefined8 *param_1,char *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar7;
  longlong lVar8;
  char *pcVar9;
  undefined *puVar10;
  undefined8 local_res8;
  undefined *puVar6;
  
  puVar10 = (undefined *)0x0;
  if (param_3 == 0xffffffff) {
    cVar1 = *param_2;
    puVar4 = puVar10;
    pcVar3 = param_2;
    param_3 = 0;
    while ((cVar1 != '\0' && (param_3 = (uint)puVar4, param_3 < 0x80000000))) {
      pcVar3 = pcVar3 + 1;
      param_3 = param_3 + 1;
      cVar1 = *pcVar3;
      puVar4 = (undefined *)(ulonglong)param_3;
    }
    param_3 = param_3 & 0x7fffffff;
  }
  if (param_1 != (undefined8 *)0x0) {
    puVar4 = (undefined *)ENGINE_pkey_asn1_find_str(&local_res8,param_2,param_3,param_4,0x143d13171)
    ;
    if (puVar4 != (undefined *)0x0) {
      iVar2 = ENGINE_init(local_res8);
      if (iVar2 == 0) {
        puVar4 = puVar10;
      }
      ENGINE_free(local_res8);
      *param_1 = local_res8;
      return puVar4;
    }
    *param_1 = 0;
  }
  iVar2 = 0x14;
  if (DAT_146bcb480 != 0) {
    iVar2 = OPENSSL_sk_num();
    iVar2 = iVar2 + 0x14;
  }
  if (0 < iVar2) {
    lVar8 = (longlong)iVar2;
    do {
      iVar7 = iVar2 + -1;
      lVar8 = lVar8 + -1;
      puVar4 = puVar10;
      if (-1 < lVar8) {
        if (iVar7 < 0x14) {
          puVar4 = (&PTR_DAT_146836fc0)[lVar8];
        }
        else {
          puVar4 = (undefined *)OPENSSL_sk_value(DAT_146bcb480,iVar2 + -0x15);
        }
      }
      if ((puVar4[8] & 1) == 0) {
        pcVar3 = *(char **)(puVar4 + 0x10);
        cVar1 = *pcVar3;
        pcVar9 = pcVar3;
        puVar6 = puVar10;
        uVar5 = 0;
        while ((cVar1 != '\0' && (uVar5 = (uint)puVar6, uVar5 < 0x80000000))) {
          pcVar9 = pcVar9 + 1;
          uVar5 = uVar5 + 1;
          cVar1 = *pcVar9;
          puVar6 = (undefined *)(ulonglong)uVar5;
        }
        if (((uVar5 & 0x7fffffff) == param_3) &&
           (iVar2 = _strnicmp(pcVar3,param_2,(longlong)(int)param_3), iVar2 == 0)) {
          return puVar4;
        }
      }
      iVar2 = iVar7;
    } while (0 < iVar7);
  }
  return (undefined *)0x0;
}



// FUNCTION 143d132c0 EVP_PKEY_asn1_free body=99 status=ok
// SIG undefined EVP_PKEY_asn1_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_PKEY_asn1_free(longlong param_1)

{
  if ((param_1 != 0) && ((*(byte *)(param_1 + 8) & 2) != 0)) {
    CRYPTO_free(*(undefined8 *)(param_1 + 0x10),"crypto\\asn1\\ameth_lib.c",0x11e);
    CRYPTO_free(*(undefined8 *)(param_1 + 0x18),"crypto\\asn1\\ameth_lib.c",0x11f);
    CRYPTO_free(param_1,"crypto\\asn1\\ameth_lib.c",0x120);
  }
  return;
}



// FUNCTION 143d13330 EVP_PKEY_asn1_get0 body=67 status=ok
// SIG undefined EVP_PKEY_asn1_get0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined * EVP_PKEY_asn1_get0(int param_1)

{
  undefined *puVar1;
  
  if (param_1 < 0) {
    return (undefined *)0x0;
  }
  if (param_1 < 0x14) {
    return (&PTR_DAT_146836fc0)[param_1];
  }
  puVar1 = (undefined *)OPENSSL_sk_value(DAT_146bcb480,param_1 + -0x14);
  return puVar1;
}



// FUNCTION 143d13380 EVP_PKEY_asn1_get0_info body=81 status=ok
// SIG undefined EVP_PKEY_asn1_get0_info(void)

undefined8
EVP_PKEY_asn1_get0_info
          (undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4,
          undefined8 *param_5,undefined4 *param_6)

{
  if (param_6 == (undefined4 *)0x0) {
    return 0;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_6;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_6[1];
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = param_6[2];
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(param_6 + 6);
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = *(undefined8 *)(param_6 + 4);
  }
  return 1;
}



// FUNCTION 143d133e0 EVP_PKEY_asn1_get_count body=48 status=ok
// SIG undefined EVP_PKEY_asn1_get_count(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int EVP_PKEY_asn1_get_count(void)

{
  int iVar1;
  
  if (DAT_146bcb480 != 0) {
    iVar1 = OPENSSL_sk_num();
    return iVar1 + 0x14;
  }
  return 0x14;
}



// FUNCTION 143d13410 RSA_free body=276 status=ok
// SIG undefined RSA_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RSA_free(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x70);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 2) {
      if ((*(longlong *)(param_1 + 8) != 0) &&
         (pcVar3 = *(code **)(*(longlong *)(param_1 + 8) + 0x40), pcVar3 != (code *)0x0)) {
        (*pcVar3)();
      }
      ENGINE_finish(*(undefined8 *)(param_1 + 0x10));
      CRYPTO_free_ex_data(9,param_1,param_1 + 0x68);
      CRYPTO_THREAD_lock_free(*(undefined8 *)(param_1 + 0xa8));
      BN_clear_free(*(undefined8 *)(param_1 + 0x18));
      BN_clear_free(*(undefined8 *)(param_1 + 0x20));
      BN_clear_free(*(undefined8 *)(param_1 + 0x28));
      BN_clear_free(*(undefined8 *)(param_1 + 0x30));
      BN_clear_free(*(undefined8 *)(param_1 + 0x38));
      BN_clear_free(*(undefined8 *)(param_1 + 0x40));
      BN_clear_free(*(undefined8 *)(param_1 + 0x48));
      BN_clear_free(*(undefined8 *)(param_1 + 0x50));
      RSA_PSS_PARAMS_free(*(undefined8 *)(param_1 + 0x60));
      OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x58),rsa_multip_info_free);
      BN_BLINDING_free(*(undefined8 *)(param_1 + 0x98));
      BN_BLINDING_free(*(undefined8 *)(param_1 + 0xa0));
      CRYPTO_free(*(undefined8 *)(param_1 + 0x90),"crypto\\rsa\\rsa_lib.c",0x8c);
      CRYPTO_free(param_1,"crypto\\rsa\\rsa_lib.c",0x8d);
    }
  }
  return;
}



// FUNCTION 143d13530 RSA_get_ex_data body=26 status=ok
// SIG undefined RSA_get_ex_data(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RSA_get_ex_data(longlong param_1)

{
  CRYPTO_get_ex_data(param_1 + 0x68);
  return;
}



// FUNCTION 143d13550 RSA_new body=24 status=ok
// SIG undefined RSA_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RSA_new(void)

{
  RSA_new_method(0);
  return;
}



// FUNCTION 143d13570 RSA_new_method body=635 status=ok
// SIG undefined RSA_new_method(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong RSA_new_method(WriteBytesMem *param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uchar *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x143d13580;
  lVar4 = CRYPTO_zalloc(0xb0,"crypto\\rsa\\rsa_lib.c");
  if (lVar4 == 0) {
    ERR_put_error(4,0x6a,0x41,"crypto\\rsa\\rsa_lib.c",0x37,uVar9);
    return 0;
  }
  *(undefined4 *)(lVar4 + 0x70) = 1;
  lVar5 = CRYPTO_THREAD_lock_new();
  *(longlong *)(lVar4 + 0xa8) = lVar5;
  if (lVar5 == 0) {
    ERR_put_error(4,0x6a,0x41,"crypto\\rsa\\rsa_lib.c",0x3e,uVar9);
    uVar9 = 0x3f;
    goto LAB_143d13744;
  }
  lVar5 = RSA_get_default_method();
  *(longlong *)(lVar4 + 8) = lVar5;
  *(uint *)(lVar4 + 0x74) = *(uint *)(lVar5 + 0x48) & 0xfffffbff;
  if (param_1 == (WriteBytesMem *)0x0) {
    param_1 = (WriteBytesMem *)ENGINE_get_default_RSA();
LAB_143d13768:
    *(WriteBytesMem **)(lVar4 + 0x10) = param_1;
    if (param_1 != (WriteBytesMem *)0x0) {
      puVar6 = AK::WriteBytesMem::Bytes(param_1);
      *(uchar **)(lVar4 + 8) = puVar6;
      if (puVar6 == (uchar *)0x0) {
        uVar8 = 0x52;
        goto LAB_143d13642;
      }
    }
    *(uint *)(lVar4 + 0x74) = *(uint *)(*(longlong *)(lVar4 + 8) + 0x48) & 0xfffffbff;
    iVar3 = CRYPTO_new_ex_data(9,lVar4,lVar4 + 0x68);
    if (iVar3 != 0) {
      pcVar2 = *(code **)(*(longlong *)(lVar4 + 8) + 0x38);
      if (pcVar2 == (code *)0x0) {
        return lVar4;
      }
      iVar3 = (*pcVar2)(lVar4);
      if (iVar3 != 0) {
        return lVar4;
      }
      uVar8 = 0x5e;
      uVar7 = 0x46;
      goto LAB_143d13648;
    }
  }
  else {
    iVar3 = ENGINE_init(param_1);
    if (iVar3 != 0) goto LAB_143d13768;
    uVar8 = 0x48;
LAB_143d13642:
    uVar7 = 0x26;
LAB_143d13648:
    ERR_put_error(4,0x6a,uVar7,"crypto\\rsa\\rsa_lib.c",uVar8);
  }
  LOCK();
  piVar1 = (int *)(lVar4 + 0x70);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (1 < iVar3) {
    return 0;
  }
  if ((*(longlong *)(lVar4 + 8) != 0) &&
     (pcVar2 = *(code **)(*(longlong *)(lVar4 + 8) + 0x40), pcVar2 != (code *)0x0)) {
    (*pcVar2)(lVar4);
  }
  ENGINE_finish(*(undefined8 *)(lVar4 + 0x10));
  CRYPTO_free_ex_data(9,lVar4,lVar4 + 0x68);
  CRYPTO_THREAD_lock_free(*(undefined8 *)(lVar4 + 0xa8));
  BN_clear_free(*(undefined8 *)(lVar4 + 0x18));
  BN_clear_free(*(undefined8 *)(lVar4 + 0x20));
  BN_clear_free(*(undefined8 *)(lVar4 + 0x28));
  BN_clear_free(*(undefined8 *)(lVar4 + 0x30));
  BN_clear_free(*(undefined8 *)(lVar4 + 0x38));
  BN_clear_free(*(undefined8 *)(lVar4 + 0x40));
  BN_clear_free(*(undefined8 *)(lVar4 + 0x48));
  BN_clear_free(*(undefined8 *)(lVar4 + 0x50));
  RSA_PSS_PARAMS_free(*(undefined8 *)(lVar4 + 0x60));
  OPENSSL_sk_pop_free(*(undefined8 *)(lVar4 + 0x58),rsa_multip_info_free);
  BN_BLINDING_free(*(undefined8 *)(lVar4 + 0x98));
  BN_BLINDING_free(*(undefined8 *)(lVar4 + 0xa0));
  CRYPTO_free(*(undefined8 *)(lVar4 + 0x90),"crypto\\rsa\\rsa_lib.c",0x8c);
  uVar9 = 0x8d;
LAB_143d13744:
  CRYPTO_free(lVar4,"crypto\\rsa\\rsa_lib.c",uVar9);
  return 0;
}



// FUNCTION 143d137f0 RSA_pkey_ctx_ctrl body=90 status=ok
// SIG undefined RSA_pkey_ctx_ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
RSA_pkey_ctx_ctrl(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((((param_1 != (undefined8 *)0x0) && ((int *)*param_1 != (int *)0x0)) &&
      (iVar1 = *(int *)*param_1, iVar1 != 6)) && (iVar1 != 0x390)) {
    return 0xffffffff;
  }
  uVar2 = EVP_PKEY_CTX_ctrl(param_1,0xffffffff,param_2,param_3,param_4,param_5,0x143d137fa);
  return uVar2;
}



// FUNCTION 143d13850 RSA_security_bits body=103 status=ok
// SIG undefined RSA_security_bits(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 RSA_security_bits(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar1 = BN_num_bits(*(undefined8 *)(param_1 + 0x18));
  if (*(int *)(param_1 + 4) == 1) {
    iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x58));
    if (0 < iVar2) {
      iVar3 = rsa_multip_cap(uVar1);
      if (iVar2 + 2 <= iVar3) goto LAB_143d138a1;
    }
    return 0;
  }
LAB_143d138a1:
  uVar4 = FUN_143d0f270(uVar1,0xffffffff);
  return uVar4;
}



// FUNCTION 143d138c0 RSA_set0_key body=147 status=ok
// SIG undefined RSA_set0_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 RSA_set0_key(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) && (param_2 == 0)) ||
     ((*(longlong *)(param_1 + 0x20) == 0 && (param_3 == 0)))) {
    uVar1 = 0;
  }
  else {
    if (param_2 != 0) {
      BN_free();
      *(longlong *)(param_1 + 0x18) = param_2;
    }
    if (param_3 != 0) {
      BN_free(*(undefined8 *)(param_1 + 0x20));
      *(longlong *)(param_1 + 0x20) = param_3;
    }
    if (param_4 != 0) {
      BN_free(*(undefined8 *)(param_1 + 0x28));
      *(longlong *)(param_1 + 0x28) = param_4;
    }
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 143d13960 RSA_set_ex_data body=26 status=ok
// SIG undefined RSA_set_ex_data(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RSA_set_ex_data(longlong param_1)

{
  CRYPTO_set_ex_data(param_1 + 0x68);
  return;
}



// FUNCTION 143d13980 EVP_DigestSign body=139 status=ok
// SIG undefined EVP_DigestSign(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
EVP_DigestSign(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined8 uVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(longlong **)(param_1 + 0x20) + 0xd0);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d139c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  }
  if (param_2 != 0) {
    iVar1 = EVP_DigestUpdate(param_1,param_4,param_5);
    if (iVar1 < 1) {
      return 0;
    }
  }
  uVar2 = EVP_DigestSignFinal(param_1,param_2,param_3);
  return uVar2;
}



// FUNCTION 143d13a10 EVP_DigestSignFinal body=470 status=ok
// SIG undefined EVP_DigestSignFinal(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong EVP_DigestSignFinal(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  uint local_88 [4];
  undefined1 local_78 [64];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x143d13a26;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  plVar5 = (longlong *)param_1[4];
  lVar6 = *plVar5;
  if ((*(byte *)(lVar6 + 4) & 4) != 0) {
    if (param_2 == 0) {
      uVar4 = (**(code **)(lVar6 + 0x78))(plVar5,0,param_3,param_1);
      return uVar4;
    }
    if ((*(uint *)(param_1 + 2) & 0x200) == 0) {
      plVar5 = (longlong *)EVP_PKEY_CTX_dup(plVar5);
      if (plVar5 == (longlong *)0x0) {
        return 0;
      }
      uVar2 = (**(code **)(*plVar5 + 0x78))(plVar5,param_2,param_3,param_1);
      EVP_PKEY_CTX_free(plVar5);
      return (ulonglong)uVar2;
    }
    uVar4 = (**(code **)(lVar6 + 0x78))();
    return uVar4;
  }
  pcVar1 = *(code **)(lVar6 + 0x78);
  if (param_2 == 0) {
    if (pcVar1 == (code *)0x0) {
      iVar3 = EVP_MD_size(*param_1);
      if (iVar3 < 0) {
        return 0;
      }
      local_98 = (ulonglong)iVar3;
      iVar3 = EVP_PKEY_sign(plVar5,0,param_3,0);
    }
    else {
      iVar3 = (*pcVar1)(plVar5,0,param_3,param_1);
    }
    goto joined_r0x000143d13bdd;
  }
  local_88[0] = 0;
  if ((*(uint *)(param_1 + 2) & 0x200) == 0) {
    lVar6 = EVP_MD_CTX_new();
    if (lVar6 == 0) {
      return 0;
    }
    iVar3 = EVP_MD_CTX_copy_ex(lVar6,param_1);
    if (iVar3 == 0) {
      EVP_MD_CTX_free(lVar6);
      return 0;
    }
    if (pcVar1 == (code *)0x0) {
      uVar2 = EVP_DigestFinal_ex(lVar6,local_78,local_88);
    }
    else {
      uVar2 = (**(code **)(**(longlong **)(lVar6 + 0x20) + 0x78))
                        (*(longlong **)(lVar6 + 0x20),param_2,param_3,lVar6);
    }
    EVP_MD_CTX_free(lVar6);
LAB_143d13b50:
    uVar4 = (ulonglong)uVar2;
    if (pcVar1 != (code *)0x0) {
      return uVar4;
    }
  }
  else {
    if (pcVar1 != (code *)0x0) {
      uVar2 = (*pcVar1)(plVar5,param_2,param_3,param_1);
      goto LAB_143d13b50;
    }
    uVar2 = EVP_DigestFinal_ex(param_1,local_78,local_88);
    uVar4 = (ulonglong)uVar2;
  }
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  local_98 = (ulonglong)local_88[0];
  iVar3 = EVP_PKEY_sign(param_1[4],param_2,param_3,local_78);
joined_r0x000143d13bdd:
  if (iVar3 < 1) {
    return 0;
  }
  return 1;
}



// FUNCTION 143d13bf0 EVP_DigestSignInit body=41 status=ok
// SIG undefined EVP_DigestSignInit(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_DigestSignInit(void)

{
  do_sigver_init();
  return;
}



// FUNCTION 143d13c20 EVP_DigestVerify body=408 status=ok
// SIG undefined EVP_DigestVerify(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong EVP_DigestVerify(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                          undefined8 param_5)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  uint local_98 [4];
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x20) + 0xd8);
  if (pcVar1 != (code *)0x0) {
    local_a8 = param_5;
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  iVar2 = EVP_DigestUpdate(param_1,param_4,param_5);
  if (iVar2 < 1) {
    return 0xffffffff;
  }
  local_98[0] = 0;
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x20) + 0x88);
  if ((*(uint *)(param_1 + 0x10) & 0x200) == 0) {
    lVar5 = EVP_MD_CTX_new();
    if (lVar5 != 0) {
      iVar2 = EVP_MD_CTX_copy_ex(lVar5,param_1);
      if (iVar2 != 0) {
        if (pcVar1 == (code *)0x0) {
          uVar3 = EVP_DigestFinal_ex(lVar5,local_88,local_98);
        }
        else {
          uVar3 = (**(code **)(**(longlong **)(lVar5 + 0x20) + 0x88))
                            (*(longlong **)(lVar5 + 0x20),param_2,param_3 & 0xffffffff,lVar5);
        }
        EVP_MD_CTX_free(lVar5);
        goto LAB_143d13d59;
      }
      EVP_MD_CTX_free(lVar5);
    }
    uVar4 = 0xffffffff;
  }
  else {
    if (pcVar1 == (code *)0x0) {
      uVar3 = EVP_DigestFinal_ex(param_1,local_88,local_98);
      uVar4 = (ulonglong)uVar3;
    }
    else {
      uVar3 = (*pcVar1)(*(longlong **)(param_1 + 0x20),param_2,param_3 & 0xffffffff,param_1);
LAB_143d13d59:
      uVar4 = (ulonglong)uVar3;
      if (pcVar1 != (code *)0x0) {
        return uVar4;
      }
    }
    if ((int)uVar4 != 0) {
      local_a8 = (ulonglong)local_98[0];
      uVar3 = EVP_PKEY_verify(*(undefined8 *)(param_1 + 0x20),param_2,param_3,local_88);
      uVar4 = (ulonglong)uVar3;
    }
  }
  return uVar4;
}



// FUNCTION 143d13dc0 EVP_DigestVerifyFinal body=300 status=ok
// SIG undefined EVP_DigestVerifyFinal(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong EVP_DigestVerifyFinal(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  uint local_88 [4];
  undefined1 local_78 [64];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x143d13dd6;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_88[0] = 0;
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x20) + 0x88);
  if ((*(uint *)(param_1 + 0x10) & 0x200) == 0) {
    lVar4 = EVP_MD_CTX_new();
    if (lVar4 != 0) {
      iVar3 = EVP_MD_CTX_copy_ex(lVar4,param_1);
      if (iVar3 != 0) {
        if (pcVar1 == (code *)0x0) {
          uVar2 = EVP_DigestFinal_ex(lVar4,local_78,local_88);
        }
        else {
          uVar2 = (**(code **)(**(longlong **)(lVar4 + 0x20) + 0x88))
                            (*(longlong **)(lVar4 + 0x20),param_2,param_3 & 0xffffffff,lVar4);
        }
        EVP_MD_CTX_free(lVar4);
        goto LAB_143d13e9b;
      }
      EVP_MD_CTX_free(lVar4);
    }
    uVar5 = 0xffffffff;
  }
  else {
    if (pcVar1 == (code *)0x0) {
      uVar2 = EVP_DigestFinal_ex(param_1,local_78,local_88);
      uVar5 = (ulonglong)uVar2;
    }
    else {
      uVar2 = (*pcVar1)();
LAB_143d13e9b:
      uVar5 = (ulonglong)uVar2;
      if (pcVar1 != (code *)0x0) {
        return uVar5;
      }
    }
    if ((int)uVar5 != 0) {
      local_98 = (ulonglong)local_88[0];
      uVar5 = EVP_PKEY_verify(*(undefined8 *)(param_1 + 0x20),param_2,param_3,local_78);
    }
  }
  return uVar5;
}



// FUNCTION 143d13ef0 EVP_DigestVerifyInit body=41 status=ok
// SIG undefined EVP_DigestVerifyInit(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_DigestVerifyInit(void)

{
  do_sigver_init();
  return;
}



// FUNCTION 143d13f20 do_sigver_init body=490 status=ok
// SIG undefined do_sigver_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
do_sigver_init(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
              undefined8 param_5,int param_6)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined4 local_res8 [2];
  undefined8 uVar6;
  
  uVar6 = 0x143d13f3b;
  plVar4 = *(longlong **)(param_1 + 0x20);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)EVP_PKEY_CTX_new(param_5,param_4);
    *(longlong **)(param_1 + 0x20) = plVar4;
    if (plVar4 == (longlong *)0x0) {
      return 0;
    }
  }
  if (((*(byte *)(*plVar4 + 4) & 4) == 0) && (param_3 == 0)) {
    iVar3 = EVP_PKEY_get_default_digest_nid(param_5,local_res8);
    if (iVar3 < 1) {
LAB_143d13fa3:
      ERR_put_error(6,0xa1,0x9e,"crypto\\evp\\m_sigver.c",0x2a,uVar6);
      return 0;
    }
    uVar5 = OBJ_nid2sn(local_res8[0]);
    param_3 = EVP_get_digestbyname(uVar5);
    if (param_3 == 0) goto LAB_143d13fa3;
  }
  plVar4 = *(longlong **)(param_1 + 0x20);
  lVar1 = *plVar4;
  if (param_6 == 0) {
    if (*(code **)(lVar1 + 0x70) != (code *)0x0) {
      iVar3 = (**(code **)(lVar1 + 0x70))(plVar4,param_1);
      if (iVar3 < 1) {
        return 0;
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x20) = 0x40;
      goto LAB_143d14086;
    }
    if (*(longlong *)(lVar1 + 0xd0) != 0) {
      *(undefined4 *)(plVar4 + 4) = 8;
      *(code **)(param_1 + 0x28) = update;
      goto LAB_143d14086;
    }
    iVar3 = EVP_PKEY_sign_init();
  }
  else {
    if (*(code **)(lVar1 + 0x80) != (code *)0x0) {
      iVar3 = (**(code **)(lVar1 + 0x80))(plVar4,param_1);
      if (iVar3 < 1) {
        return 0;
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x20) = 0x80;
      goto LAB_143d14086;
    }
    if (*(longlong *)(lVar1 + 0xd8) != 0) {
      *(undefined4 *)(plVar4 + 4) = 0x10;
      *(code **)(param_1 + 0x28) = update;
      goto LAB_143d14086;
    }
    iVar3 = EVP_PKEY_verify_init();
  }
  if (iVar3 < 1) {
    return 0;
  }
LAB_143d14086:
  iVar3 = EVP_PKEY_CTX_ctrl(*(undefined8 *)(param_1 + 0x20),0xffffffff,0xf8,1,0,param_3);
  if (iVar3 < 1) {
    return 0;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x20);
  }
  if ((*(byte *)(**(longlong **)(param_1 + 0x20) + 4) & 4) == 0) {
    iVar3 = EVP_DigestInit_ex(param_1,param_3,param_4);
    if (iVar3 == 0) {
      return 0;
    }
    pcVar2 = *(code **)(**(longlong **)(param_1 + 0x20) + 0xf8);
    if (pcVar2 != (code *)0x0) {
      uVar6 = (*pcVar2)(*(longlong **)(param_1 + 0x20),param_1);
      return uVar6;
    }
  }
  return 1;
}



// FUNCTION 143d14110 update body=50 status=ok
// SIG undefined update(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 update(void)

{
  ERR_put_error(6,0xad,0xb1,"crypto\\evp\\m_sigver.c",0x14);
  return 0;
}



// FUNCTION 143d14150 EVP_PKEY_CTX_ctrl body=292 status=ok
// SIG undefined EVP_PKEY_CTX_ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int EVP_PKEY_CTX_ctrl(undefined8 *param_1,int param_2,uint param_3,undefined4 param_4,
                     undefined4 param_5,undefined8 param_6)

{
  int *piVar1;
  int iVar2;
  
  if (((param_1 == (undefined8 *)0x0) || (piVar1 = (int *)*param_1, piVar1 == (int *)0x0)) ||
     (*(code **)(piVar1 + 0x30) == (code *)0x0)) {
    ERR_put_error(6,0x89,0x93,"crypto\\evp\\pmeth_lib.c",0x174);
    return -2;
  }
  if ((param_2 != -1) && (*piVar1 != param_2)) {
    return -1;
  }
  if (*(longlong *)(piVar1 + 0x3e) == 0) {
    if (*(uint *)(param_1 + 4) == 0) {
      ERR_put_error(6,0x89,0x95,"crypto\\evp\\pmeth_lib.c",0x17f);
      return -1;
    }
    if ((param_3 != 0xffffffff) && ((param_3 & *(uint *)(param_1 + 4)) == 0)) {
      ERR_put_error(6,0x89,0x94,"crypto\\evp\\pmeth_lib.c",0x184);
      return -1;
    }
  }
  iVar2 = (**(code **)(piVar1 + 0x30))(param_1,param_4,param_5,param_6);
  if (iVar2 == -2) {
    ERR_put_error(6,0x89,0x93,"crypto\\evp\\pmeth_lib.c",0x18c);
  }
  return iVar2;
}



// FUNCTION 143d14280 EVP_PKEY_CTX_dup body=316 status=ok
// SIG undefined EVP_PKEY_CTX_dup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * EVP_PKEY_CTX_dup(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143d1428c;
  if ((*param_1 == 0) || (*(longlong *)(*param_1 + 0x10) == 0)) {
    return (longlong *)0x0;
  }
  if ((param_1[1] != 0) && (iVar1 = ENGINE_init(), iVar1 == 0)) {
    ERR_put_error(6,0x9c,0x26,"crypto\\evp\\pmeth_lib.c",0x105,uVar4);
    return (longlong *)0x0;
  }
  plVar2 = (longlong *)CRYPTO_malloc(0x50,"crypto\\evp\\pmeth_lib.c",0x109);
  if (plVar2 == (longlong *)0x0) {
    ERR_put_error(6,0x9c,0x41,"crypto\\evp\\pmeth_lib.c",0x10b,uVar4);
    return (longlong *)0x0;
  }
  *plVar2 = *param_1;
  plVar2[1] = param_1[1];
  lVar3 = 0;
  if (param_1[2] != 0) {
    EVP_PKEY_up_ref(param_1[2]);
    lVar3 = param_1[2];
  }
  plVar2[2] = lVar3;
  lVar3 = 0;
  if (param_1[3] != 0) {
    EVP_PKEY_up_ref(param_1[3]);
    lVar3 = param_1[3];
  }
  plVar2[3] = lVar3;
  plVar2[5] = 0;
  plVar2[6] = 0;
  *(int *)(plVar2 + 4) = (int)param_1[4];
  iVar1 = (**(code **)(*param_1 + 0x10))(plVar2,param_1);
  if (iVar1 < 1) {
    *plVar2 = 0;
    EVP_PKEY_CTX_free(plVar2);
    return (longlong *)0x0;
  }
  return plVar2;
}



// FUNCTION 143d143c0 EVP_PKEY_CTX_free body=95 status=ok
// SIG undefined EVP_PKEY_CTX_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_PKEY_CTX_free(longlong *param_1)

{
  code *pcVar1;
  
  if (param_1 != (longlong *)0x0) {
    if ((*param_1 != 0) && (pcVar1 = *(code **)(*param_1 + 0x18), pcVar1 != (code *)0x0)) {
      (*pcVar1)();
    }
    EVP_PKEY_free(param_1[2]);
    EVP_PKEY_free(param_1[3]);
    ENGINE_finish(param_1[1]);
    CRYPTO_free(param_1,"crypto\\evp\\pmeth_lib.c",0x16b);
  }
  return;
}



// FUNCTION 143d14420 EVP_PKEY_CTX_hex2ctrl body=129 status=ok
// SIG undefined EVP_PKEY_CTX_hex2ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 EVP_PKEY_CTX_hex2ctrl(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 local_res20 [2];
  
  lVar2 = OPENSSL_hexstr2buf(param_3,local_res20);
  if (lVar2 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(*param_1 + 0xc0))(param_1,param_2,local_res20[0],lVar2);
  CRYPTO_free(lVar2,"crypto\\evp\\pmeth_lib.c",0x1bb);
  return uVar1;
}



// FUNCTION 143d144b0 EVP_PKEY_CTX_md body=150 status=ok
// SIG undefined EVP_PKEY_CTX_md(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
EVP_PKEY_CTX_md(undefined8 param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143d144c5;
  if (param_4 != 0) {
    lVar1 = EVP_get_digestbyname(param_4);
    if (lVar1 != 0) {
      uVar2 = EVP_PKEY_CTX_ctrl(param_1,0xffffffff,param_2,param_3,0,lVar1);
      return uVar2;
    }
  }
  ERR_put_error(6,0xa8,0x98,"crypto\\evp\\pmeth_lib.c",0x1c5,uVar2);
  return 0;
}



// FUNCTION 143d14550 EVP_PKEY_CTX_new body=26 status=ok
// SIG undefined EVP_PKEY_CTX_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_PKEY_CTX_new(undefined8 param_1,undefined8 param_2)

{
  int_ctx_new(param_1,param_2,0xffffffff);
  return;
}



// FUNCTION 143d14570 EVP_PKEY_CTX_new_id body=27 status=ok
// SIG undefined EVP_PKEY_CTX_new_id(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_PKEY_CTX_new_id(undefined4 param_1,undefined8 param_2)

{
  int_ctx_new(0,param_2,param_1);
  return;
}



// FUNCTION 143d14590 EVP_PKEY_CTX_set0_keygen_info body=9 status=ok
// SIG undefined EVP_PKEY_CTX_set0_keygen_info(void)

void EVP_PKEY_CTX_set0_keygen_info(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(undefined4 *)(param_1 + 0x48) = param_3;
  return;
}



// FUNCTION 143d145a0 EVP_PKEY_CTX_str2ctrl body=75 status=ok
// SIG undefined EVP_PKEY_CTX_str2ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_CTX_str2ctrl(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar2 = 0xffffffffffffffff;
  do {
    uVar2 = uVar2 + 1;
  } while (*(char *)(param_3 + uVar2) != '\0');
  if (0x7fffffff < uVar2) {
    return 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x000143d145e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0xc0))();
  return uVar1;
}



// FUNCTION 143d145f0 EVP_PKEY_meth_free body=47 status=ok
// SIG undefined EVP_PKEY_meth_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_PKEY_meth_free(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((param_1 != 0) && ((*(byte *)(param_1 + 4) & 1) != 0)) {
    CRYPTO_free(param_1,"crypto\\evp\\pmeth_lib.c",0xf0,param_4,0x143d145ff);
  }
  return;
}



// FUNCTION 143d14620 evp_app_cleanup_int body=46 status=ok
// SIG undefined evp_app_cleanup_int(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void evp_app_cleanup_int(void)

{
  if (DAT_146bcb488 != 0) {
    OPENSSL_sk_pop_free(DAT_146bcb488,EVP_PKEY_meth_free);
    return;
  }
  return;
}



// FUNCTION 143d14650 int_ctx_new body=484 status=ok
// SIG undefined int_ctx_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * int_ctx_new(int *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  int *local_res20;
  undefined8 in_stack_fffffffffffffee8;
  undefined4 uVar6;
  undefined8 uVar5;
  int local_108 [62];
  undefined8 uStack_10;
  
  uVar6 = (undefined4)((ulonglong)in_stack_fffffffffffffee8 >> 0x20);
  uStack_10 = 0x143d14665;
  if (param_3 == -1) {
    if (param_1 == (int *)0x0) {
      return (longlong *)0x0;
    }
    param_3 = *param_1;
  }
  if ((param_2 == 0) &&
     ((param_1 == (int *)0x0 ||
      ((param_2 = *(longlong *)(param_1 + 8), param_2 == 0 &&
       (param_2 = *(longlong *)(param_1 + 6), param_2 == 0)))))) {
    param_2 = ENGINE_get_pkey_meth_engine(param_3);
  }
  else {
    iVar1 = ENGINE_init(param_2);
    if (iVar1 == 0) {
      ERR_put_error(6,0x9d,0x26,"crypto\\evp\\pmeth_lib.c",CONCAT44(uVar6,0x77));
      return (longlong *)0x0;
    }
  }
  if (param_2 == 0) {
    local_res20 = local_108;
    local_108[0] = param_3;
    if ((DAT_146bcb488 != 0) && (iVar1 = OPENSSL_sk_find(DAT_146bcb488,local_108), -1 < iVar1)) {
      lVar2 = OPENSSL_sk_value(DAT_146bcb488,iVar1);
      goto LAB_143d1476f;
    }
    uVar6 = 1;
    plVar3 = (longlong *)OBJ_bsearch_(&local_res20,&PTR_DAT_146837060,0x12,8,&LAB_143cae300);
    if ((plVar3 != (longlong *)0x0) && (lVar2 = *plVar3, lVar2 != 0)) goto LAB_143d1476f;
  }
  else {
    lVar2 = ENGINE_get_pkey_meth(param_2,param_3);
LAB_143d1476f:
    if (lVar2 != 0) {
      plVar3 = (longlong *)CRYPTO_zalloc(0x50,"crypto\\evp\\pmeth_lib.c");
      if (plVar3 != (longlong *)0x0) {
        plVar3[1] = param_2;
        *plVar3 = lVar2;
        *(undefined4 *)(plVar3 + 4) = 0;
        plVar3[2] = (longlong)param_1;
        if (param_1 != (int *)0x0) {
          EVP_PKEY_up_ref(param_1);
        }
        if (*(code **)(lVar2 + 8) != (code *)0x0) {
          iVar1 = (**(code **)(lVar2 + 8))(plVar3);
          if (iVar1 < 1) {
            *plVar3 = 0;
            EVP_PKEY_CTX_free(plVar3);
            return (longlong *)0x0;
          }
          return plVar3;
        }
        return plVar3;
      }
      ENGINE_finish(param_2);
      uVar4 = 0x41;
      uVar5 = CONCAT44(uVar6,0x95);
      goto LAB_143d147ff;
    }
  }
  ENGINE_finish(param_2);
  uVar4 = 0x9c;
  uVar5 = CONCAT44(uVar6,0x8c);
LAB_143d147ff:
  ERR_put_error(6,0x9d,uVar4,"crypto\\evp\\pmeth_lib.c",uVar5);
  return (longlong *)0x0;
}



// FUNCTION 143d14840 EVP_PKEY_decrypt body=329 status=ok
// SIG undefined EVP_PKEY_decrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
EVP_PKEY_decrypt(longlong *param_1,longlong param_2,ulonglong *param_3,undefined8 param_4,
                undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar4 = 0x143d1485a;
  if (((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
     (*(longlong *)(lVar1 + 0xa8) == 0)) {
    ERR_put_error(6,0x68,0x96,"crypto\\evp\\pmeth_fn.c",CONCAT44(uVar3,0xc1),0x143d1485a);
    uVar4 = 0xfffffffe;
  }
  else if ((int)param_1[4] == 0x200) {
    if ((*(byte *)(lVar1 + 4) & 2) != 0) {
      iVar2 = EVP_PKEY_size(param_1[2]);
      if (iVar2 == 0) {
        ERR_put_error(6,0x68,0xa3,"crypto\\evp\\pmeth_fn.c",CONCAT44(uVar3,200),uVar4);
        return 0;
      }
      if (param_2 == 0) {
        *param_3 = (longlong)iVar2;
        return 1;
      }
      if (*param_3 < (ulonglong)(longlong)iVar2) {
        ERR_put_error(6,0x68,0x9b,"crypto\\evp\\pmeth_fn.c",CONCAT44(uVar3,200),uVar4);
        return 0;
      }
    }
    uVar4 = (**(code **)(*param_1 + 0xa8))(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    ERR_put_error(6,0x68,0x97,"crypto\\evp\\pmeth_fn.c",CONCAT44(uVar3,0xc5),0x143d1485a);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



// FUNCTION 143d14990 EVP_PKEY_decrypt_init body=133 status=ok
// SIG undefined EVP_PKEY_decrypt_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_decrypt_init(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
     (*(longlong *)(lVar1 + 0xa8) == 0)) {
    ERR_put_error(6,0x8a,0x96,"crypto\\evp\\pmeth_fn.c",0xaf,0x143d1499c);
    uVar2 = 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0x200;
    if (*(code **)(lVar1 + 0xa0) == (code *)0x0) {
      return 1;
    }
    uVar2 = (**(code **)(lVar1 + 0xa0))();
    if ((int)uVar2 < 1) {
      *(undefined4 *)(param_1 + 4) = 0;
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 143d14a20 EVP_PKEY_derive body=381 status=ok
// SIG undefined EVP_PKEY_derive(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_derive(longlong *param_1,longlong param_2,ulonglong *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143d14a35;
  if (((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
     (*(longlong *)(lVar1 + 0xb8) == 0)) {
    ERR_put_error(6,0x99,0x96,"crypto\\evp\\pmeth_fn.c",0x120,0x143d14a35);
    return 0xfffffffe;
  }
  if ((int)param_1[4] != 0x400) {
    ERR_put_error(6,0x99,0x97,"crypto\\evp\\pmeth_fn.c",0x124,0x143d14a35);
    return 0xffffffff;
  }
  if ((*(byte *)(lVar1 + 4) & 2) != 0) {
    iVar2 = EVP_PKEY_size(param_1[2]);
    if (iVar2 == 0) {
      ERR_put_error(6,0x99,0xa3,"crypto\\evp\\pmeth_fn.c",0x127,uVar3);
      return 0;
    }
    if (param_2 == 0) {
      *param_3 = (longlong)iVar2;
      return 1;
    }
    if (*param_3 < (ulonglong)(longlong)iVar2) {
      ERR_put_error(6,0x99,0x9b,"crypto\\evp\\pmeth_fn.c",0x127,uVar3);
      return 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143d14b5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*param_1 + 0xb8))(param_1,param_2,param_3);
  return uVar3;
}



// FUNCTION 143d14ba0 EVP_PKEY_derive_init body=133 status=ok
// SIG undefined EVP_PKEY_derive_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_derive_init(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
     (*(longlong *)(lVar1 + 0xb8) == 0)) {
    ERR_put_error(6,0x9a,0x96,"crypto\\evp\\pmeth_fn.c",0xd1,0x143d14bac);
    uVar2 = 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0x400;
    if (*(code **)(lVar1 + 0xb0) == (code *)0x0) {
      return 1;
    }
    uVar2 = (**(code **)(lVar1 + 0xb0))();
    if ((int)uVar2 < 1) {
      *(undefined4 *)(param_1 + 4) = 0;
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 143d14c30 EVP_PKEY_derive_set_peer body=536 status=ok
// SIG undefined EVP_PKEY_derive_set_peer(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_derive_set_peer(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143d14c40;
  if ((((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
      ((*(longlong *)(lVar1 + 0xb8) == 0 &&
       ((*(longlong *)(lVar1 + 0x98) == 0 && (*(longlong *)(lVar1 + 0xa8) == 0)))))) ||
     (*(code **)(lVar1 + 0xc0) == (code *)0x0)) {
    ERR_put_error(6,0x9b,0x96,"crypto\\evp\\pmeth_fn.c",0xe4,0x143d14c40);
    uVar3 = 0xfffffffe;
  }
  else {
    if ((((int)param_1[4] - 0x100U & 0xfffffcff) != 0) || ((int)param_1[4] == 0x300)) {
      ERR_put_error(6,0x9b,0x97,"crypto\\evp\\pmeth_fn.c",0xeb,0x143d14c40);
      return 0xffffffff;
    }
    uVar3 = (**(code **)(lVar1 + 0xc0))(param_1,2,0,param_2);
    if (0 < (int)uVar3) {
      if ((int)uVar3 != 2) {
        if ((int *)param_1[2] == (int *)0x0) {
          ERR_put_error(6,0x9b,0x9a,"crypto\\evp\\pmeth_fn.c",0xf8,uVar4);
          return 0xffffffff;
        }
        if (*(int *)param_1[2] != *param_2) {
          ERR_put_error(6,0x9b,0x65,"crypto\\evp\\pmeth_fn.c",0xfd,uVar4);
          return 0xffffffff;
        }
        iVar2 = EVP_PKEY_missing_parameters(param_2);
        if (iVar2 == 0) {
          iVar2 = EVP_PKEY_cmp_parameters(param_1[2],param_2);
          if (iVar2 == 0) {
            ERR_put_error(6,0x9b,0x99,"crypto\\evp\\pmeth_fn.c",0x10a,uVar4);
            return 0xffffffff;
          }
        }
        EVP_PKEY_free(param_1[3]);
        param_1[3] = (longlong)param_2;
        uVar4 = (**(code **)(*param_1 + 0xc0))(param_1,2,1,param_2);
        if ((int)uVar4 < 1) {
          param_1[3] = 0;
          return uVar4;
        }
        EVP_PKEY_up_ref(param_2);
      }
      return 1;
    }
  }
  return uVar3;
}



// FUNCTION 143d14e50 EVP_PKEY_encrypt body=329 status=ok
// SIG undefined EVP_PKEY_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
EVP_PKEY_encrypt(longlong *param_1,longlong param_2,ulonglong *param_3,undefined8 param_4,
                undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar4 = 0x143d14e6a;
  if (((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
     (*(longlong *)(lVar1 + 0x98) == 0)) {
    ERR_put_error(6,0x69,0x96,"crypto\\evp\\pmeth_fn.c",CONCAT44(uVar3,0x9f),0x143d14e6a);
    uVar4 = 0xfffffffe;
  }
  else if ((int)param_1[4] == 0x100) {
    if ((*(byte *)(lVar1 + 4) & 2) != 0) {
      iVar2 = EVP_PKEY_size(param_1[2]);
      if (iVar2 == 0) {
        ERR_put_error(6,0x69,0xa3,"crypto\\evp\\pmeth_fn.c",CONCAT44(uVar3,0xa6),uVar4);
        return 0;
      }
      if (param_2 == 0) {
        *param_3 = (longlong)iVar2;
        return 1;
      }
      if (*param_3 < (ulonglong)(longlong)iVar2) {
        ERR_put_error(6,0x69,0x9b,"crypto\\evp\\pmeth_fn.c",CONCAT44(uVar3,0xa6),uVar4);
        return 0;
      }
    }
    uVar4 = (**(code **)(*param_1 + 0x98))(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    ERR_put_error(6,0x69,0x97,"crypto\\evp\\pmeth_fn.c",CONCAT44(uVar3,0xa3),0x143d14e6a);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



// FUNCTION 143d14fa0 EVP_PKEY_encrypt_init body=133 status=ok
// SIG undefined EVP_PKEY_encrypt_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_encrypt_init(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
     (*(longlong *)(lVar1 + 0x98) == 0)) {
    ERR_put_error(6,0x8b,0x96,"crypto\\evp\\pmeth_fn.c",0x8d,0x143d14fac);
    uVar2 = 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0x100;
    if (*(code **)(lVar1 + 0x90) == (code *)0x0) {
      return 1;
    }
    uVar2 = (**(code **)(lVar1 + 0x90))();
    if ((int)uVar2 < 1) {
      *(undefined4 *)(param_1 + 4) = 0;
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 143d15030 EVP_PKEY_sign body=328 status=ok
// SIG undefined EVP_PKEY_sign(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
EVP_PKEY_sign(longlong *param_1,longlong param_2,ulonglong *param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar4 = 0x143d1504a;
  if (((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
     (*(longlong *)(lVar1 + 0x48) == 0)) {
    ERR_put_error(6,0x8c,0x96,"crypto\\evp\\pmeth_fn.c",CONCAT44(uVar3,0x3a),0x143d1504a);
    uVar4 = 0xfffffffe;
  }
  else if ((int)param_1[4] == 8) {
    if ((*(byte *)(lVar1 + 4) & 2) != 0) {
      iVar2 = EVP_PKEY_size(param_1[2]);
      if (iVar2 == 0) {
        ERR_put_error(6,0x8c,0xa3,"crypto\\evp\\pmeth_fn.c",CONCAT44(uVar3,0x41),uVar4);
        return 0;
      }
      if (param_2 == 0) {
        *param_3 = (longlong)iVar2;
        return 1;
      }
      if (*param_3 < (ulonglong)(longlong)iVar2) {
        ERR_put_error(6,0x8c,0x9b,"crypto\\evp\\pmeth_fn.c",CONCAT44(uVar3,0x41),uVar4);
        return 0;
      }
    }
    uVar4 = (**(code **)(*param_1 + 0x48))(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    ERR_put_error(6,0x8c,0x97,"crypto\\evp\\pmeth_fn.c",CONCAT44(uVar3,0x3e),0x143d1504a);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



// FUNCTION 143d15180 EVP_PKEY_sign_init body=127 status=ok
// SIG undefined EVP_PKEY_sign_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_sign_init(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
     (*(longlong *)(lVar1 + 0x48) == 0)) {
    ERR_put_error(6,0x8d,0x96,"crypto\\evp\\pmeth_fn.c",0x28,0x143d1518c);
    uVar2 = 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 8;
    if (*(code **)(lVar1 + 0x40) == (code *)0x0) {
      return 1;
    }
    uVar2 = (**(code **)(lVar1 + 0x40))();
    if ((int)uVar2 < 1) {
      *(undefined4 *)(param_1 + 4) = 0;
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 143d15200 EVP_PKEY_verify body=136 status=ok
// SIG undefined EVP_PKEY_verify(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_verify(longlong *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (((param_1 != (longlong *)0x0) && (*param_1 != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x58), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    if ((int)param_1[4] != 0x10) {
      ERR_put_error(6,0x8e,0x97,"crypto\\evp\\pmeth_fn.c",0x60);
      return 0xffffffff;
    }
                    /* WARNING: Could not recover jumptable at 0x000143d15259. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  ERR_put_error(6,0x8e,0x96,"crypto\\evp\\pmeth_fn.c",0x5c);
  return 0xfffffffe;
}



// FUNCTION 143d15290 EVP_PKEY_verify_init body=127 status=ok
// SIG undefined EVP_PKEY_verify_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_verify_init(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
     (*(longlong *)(lVar1 + 0x58) == 0)) {
    ERR_put_error(6,0x8f,0x96,"crypto\\evp\\pmeth_fn.c",0x4a,0x143d1529c);
    uVar2 = 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0x10;
    if (*(code **)(lVar1 + 0x50) == (code *)0x0) {
      return 1;
    }
    uVar2 = (**(code **)(lVar1 + 0x50))();
    if ((int)uVar2 < 1) {
      *(undefined4 *)(param_1 + 4) = 0;
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 143d15310 BN_get_rfc3526_prime_3072 body=37 status=ok
// SIG undefined BN_get_rfc3526_prime_3072(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_get_rfc3526_prime_3072(undefined8 param_1)

{
  BN_bin2bn(&DAT_145d77fb0,0x180,param_1);
  return;
}



// FUNCTION 143d15340 BN_get_rfc3526_prime_8192 body=37 status=ok
// SIG undefined BN_get_rfc3526_prime_8192(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_get_rfc3526_prime_8192(undefined8 param_1)

{
  BN_bin2bn(&DAT_145d78630,0x400,param_1);
  return;
}



// FUNCTION 143d15370 EC_GROUP_check_discriminant body=72 status=ok
// SIG undefined EC_GROUP_check_discriminant(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_GROUP_check_discriminant(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x48) == (code *)0x0) {
    ERR_put_error(0x10,0xab,0x42,"crypto\\ec\\ec_lib.c",0x1df);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000143d153b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x48))();
  return uVar1;
}



// FUNCTION 143d153c0 EC_GROUP_clear_free body=215 status=ok
// SIG undefined EC_GROUP_clear_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EC_GROUP_clear_free(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  
  if (param_1 != (longlong *)0x0) {
    pcVar2 = *(code **)(*param_1 + 0x18);
    if ((pcVar2 != (code *)0x0) || (pcVar2 = *(code **)(*param_1 + 0x10), pcVar2 != (code *)0x0)) {
      (*pcVar2)();
    }
    EC_pre_comp_free(param_1);
    BN_MONT_CTX_free(param_1[0x12]);
    plVar1 = (longlong *)param_1[1];
    if (plVar1 != (longlong *)0x0) {
      pcVar2 = *(code **)(*plVar1 + 0x60);
      if ((pcVar2 != (code *)0x0) || (pcVar2 = *(code **)(*plVar1 + 0x58), pcVar2 != (code *)0x0)) {
        (*pcVar2)(plVar1);
      }
      CRYPTO_clear_free(plVar1,0x30,"crypto\\ec\\ec_lib.c",0x261);
    }
    BN_clear_free(param_1[2]);
    BN_clear_free(param_1[3]);
    CRYPTO_clear_free(param_1[6],param_1[7],"crypto\\ec\\ec_lib.c",0x7e);
    CRYPTO_clear_free(param_1,0xa8,"crypto\\ec\\ec_lib.c");
  }
  return;
}



// FUNCTION 143d154a0 EC_GROUP_cmp body=651 status=ok
// SIG undefined EC_GROUP_cmp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 EC_GROUP_cmp(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 uVar13;
  
  uVar10 = 0;
  if ((*(int *)((byte *)*param_1 + 4) != *(int *)(*param_2 + 4)) ||
     ((((int)param_1[4] != 0 && ((int)param_2[4] != 0)) && ((int)param_1[4] != (int)param_2[4])))) {
    return 1;
  }
  if ((*(byte *)*param_1 & 2) != 0) {
    return 0;
  }
  lVar11 = 0;
  if ((param_3 == 0) && (param_3 = BN_CTX_new(), lVar11 = param_3, param_3 == 0)) {
    return 0xffffffff;
  }
  BN_CTX_start(param_3);
  uVar4 = BN_CTX_get(param_3);
  uVar5 = BN_CTX_get(param_3);
  uVar6 = BN_CTX_get(param_3);
  uVar7 = BN_CTX_get(param_3);
  uVar8 = BN_CTX_get(param_3);
  lVar9 = BN_CTX_get(param_3);
  if (lVar9 == 0) {
LAB_143d15704:
    BN_CTX_end(param_3);
    BN_CTX_free(lVar11);
    return 0xffffffff;
  }
  iVar3 = (**(code **)(*param_1 + 0x30))(param_1,uVar4,uVar5,uVar6,param_3);
  if (iVar3 != 0) {
    lVar12 = param_3;
    iVar3 = (**(code **)(*param_2 + 0x30))(param_2,uVar7,uVar8,lVar9,param_3);
    uVar13 = (undefined4)((ulonglong)lVar12 >> 0x20);
    if (((iVar3 != 0) && (iVar3 = BN_cmp(uVar4,uVar7), iVar3 == 0)) &&
       ((iVar3 = BN_cmp(uVar5,uVar8), iVar3 == 0 && (iVar3 = BN_cmp(uVar6,lVar9), iVar3 == 0)))) {
      lVar9 = *param_1;
      plVar1 = (longlong *)param_2[1];
      plVar2 = (longlong *)param_1[1];
      if (*(code **)(lVar9 + 0xd8) == (code *)0x0) {
        uVar4 = CONCAT44(uVar13,0x362);
        uVar10 = 0x42;
      }
      else {
        if (((lVar9 == *plVar2) &&
            ((((iVar3 = (int)param_1[4], iVar3 == 0 || ((int)plVar2[1] == 0)) ||
              (iVar3 == (int)plVar2[1])) && (lVar9 == *plVar1)))) &&
           (((iVar3 == 0 || ((int)plVar1[1] == 0)) || (iVar3 == (int)plVar1[1])))) {
          iVar3 = (**(code **)(lVar9 + 0xd8))(param_1,plVar2,plVar1,param_3);
          if (iVar3 == 0) {
            lVar9 = param_1[3];
            lVar12 = param_2[3];
            if ((param_1[2] == 0) || (param_2[2] == 0)) goto LAB_143d15704;
            iVar3 = BN_cmp();
            if ((iVar3 == 0) && (iVar3 = BN_cmp(lVar9,lVar12), iVar3 == 0)) goto LAB_143d156d5;
          }
          goto LAB_143d156d0;
        }
        uVar4 = CONCAT44(uVar13,0x366);
        uVar10 = 0x65;
      }
      ERR_put_error(0x10,0x71,uVar10,"crypto\\ec\\ec_lib.c",uVar4);
    }
  }
LAB_143d156d0:
  uVar10 = 1;
LAB_143d156d5:
  BN_CTX_end(param_3);
  BN_CTX_free(lVar11);
  return uVar10;
}



// FUNCTION 143d15730 EC_GROUP_copy body=669 status=ok
// SIG undefined EC_GROUP_copy(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_GROUP_copy(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  void *_Dst;
  longlong lVar5;
  
  if (*(longlong *)(*param_1 + 0x20) == 0) {
    ERR_put_error(0x10,0x6a,0x42,"crypto\\ec\\ec_lib.c",0x85,0x143d15740);
    return 0;
  }
  if (*param_1 != *param_2) {
    ERR_put_error(0x10,0x6a,0x65,"crypto\\ec\\ec_lib.c",0x89,0x143d15740);
    return 0;
  }
  if (param_1 == param_2) {
    return 1;
  }
  *(int *)(param_1 + 4) = (int)param_2[4];
  lVar5 = 0;
  *(int *)(param_1 + 0x13) = (int)param_2[0x13];
  iVar1 = (int)param_2[0x13];
  if (iVar1 == 0) {
    param_1[0x14] = 0;
  }
  else if (iVar1 == 4) {
    lVar2 = EC_nistz256_pre_comp_dup(param_2[0x14]);
    param_1[0x14] = lVar2;
  }
  else if (iVar1 == 5) {
    lVar2 = EC_ec_pre_comp_dup(param_2[0x14]);
    param_1[0x14] = lVar2;
  }
  lVar2 = param_2[0x12];
  if (lVar2 == 0) {
    BN_MONT_CTX_free(param_1[0x12]);
    param_1[0x12] = 0;
  }
  else {
    lVar3 = param_1[0x12];
    if (lVar3 == 0) {
      lVar3 = BN_MONT_CTX_new();
      param_1[0x12] = lVar3;
      if (lVar3 == 0) {
        return 0;
      }
      lVar2 = param_2[0x12];
    }
    lVar2 = BN_MONT_CTX_copy(lVar3,lVar2);
    if (lVar2 == 0) {
      return 0;
    }
  }
  lVar2 = param_2[1];
  if (lVar2 == 0) {
    EC_POINT_clear_free(param_1[1]);
    param_1[1] = 0;
  }
  else {
    lVar3 = param_1[1];
    if (lVar3 == 0) {
      lVar3 = EC_POINT_new(param_1);
      param_1[1] = lVar3;
      if (lVar3 == 0) {
        return 0;
      }
      lVar2 = param_2[1];
    }
    uVar4 = EC_POINT_copy(lVar3,lVar2);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
  }
  if ((*(byte *)*param_2 & 2) == 0) {
    lVar2 = BN_copy(param_1[2],param_2[2]);
    if (lVar2 == 0) {
      return 0;
    }
    lVar2 = BN_copy(param_1[3],param_2[3]);
    if (lVar2 == 0) {
      return 0;
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  *(int *)(param_1 + 5) = (int)param_2[5];
  if (param_2[6] == 0) {
    CRYPTO_free(param_1[6],"crypto\\ec\\ec_lib.c",0xe1);
    param_1[6] = 0;
LAB_143d159ad:
    param_1[7] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x000143d159c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
    return uVar4;
  }
  CRYPTO_free(param_1[6],"crypto\\ec\\ec_lib.c",0xd8);
  _Dst = (void *)CRYPTO_malloc(param_2[7],"crypto\\ec\\ec_lib.c",0xd9);
  param_1[6] = (longlong)_Dst;
  if (_Dst == (void *)0x0) {
    ERR_put_error(0x10,0x6a,0x41,"crypto\\ec\\ec_lib.c",0xda);
  }
  else {
    _guard_xfg_dispatch_icall_nop(_Dst,(void *)param_2[6],param_2[7]);
    if (_Dst != (void *)0x0) {
      lVar5 = param_2[7];
      goto LAB_143d159ad;
    }
  }
  return 0;
}



// FUNCTION 143d159d0 EC_GROUP_dup body=501 status=ok
// SIG undefined EC_GROUP_dup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * EC_GROUP_dup(undefined8 *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0x143d159e5;
  if (param_1 != (undefined8 *)0x0) {
    pbVar1 = (byte *)*param_1;
    if (pbVar1 == (byte *)0x0) {
      uVar7 = 0x19;
      uVar6 = 0x6c;
    }
    else if (*(longlong *)(pbVar1 + 8) == 0) {
      uVar7 = 0x1d;
      uVar6 = 0x42;
    }
    else {
      plVar4 = (longlong *)CRYPTO_zalloc(0xa8,"crypto\\ec\\ec_lib.c",0x21);
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = (longlong)pbVar1;
        if ((*pbVar1 & 2) == 0) {
          lVar5 = BN_new();
          plVar4[2] = lVar5;
          if (lVar5 == 0) goto LAB_143d15ac3;
          lVar5 = BN_new();
          plVar4[3] = lVar5;
          if (lVar5 == 0) goto LAB_143d15ac3;
        }
        *(undefined4 *)((longlong)plVar4 + 0x24) = 1;
        *(undefined4 *)(plVar4 + 5) = 4;
        iVar3 = (**(code **)(pbVar1 + 8))(plVar4);
        if (iVar3 != 0) {
          iVar3 = EC_GROUP_copy(plVar4,param_1);
          if (iVar3 == 0) {
            if (*(code **)(*plVar4 + 0x10) != (code *)0x0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
            EC_pre_comp_free(plVar4);
            BN_MONT_CTX_free(plVar4[0x12]);
            plVar2 = (longlong *)plVar4[1];
            if (plVar2 != (longlong *)0x0) {
              if (*(code **)(*plVar2 + 0x58) != (code *)0x0) {
                (**(code **)(*plVar2 + 0x58))(plVar2);
              }
              CRYPTO_free(plVar2,"crypto\\ec\\ec_lib.c",0x255);
            }
            BN_free(plVar4[2]);
            BN_free(plVar4[3]);
            CRYPTO_free(plVar4[6],"crypto\\ec\\ec_lib.c",0x6b);
            CRYPTO_free(plVar4,"crypto\\ec\\ec_lib.c",0x6c);
            return (longlong *)0x0;
          }
          return plVar4;
        }
LAB_143d15ac3:
        BN_free(plVar4[2]);
        BN_free(plVar4[3]);
        CRYPTO_free(plVar4,"crypto\\ec\\ec_lib.c",0x39);
        return (longlong *)0x0;
      }
      uVar7 = 0x23;
      uVar6 = 0x41;
    }
    ERR_put_error(0x10,0x6c,uVar6,"crypto\\ec\\ec_lib.c",uVar7,uVar8);
  }
  return (longlong *)0x0;
}



// FUNCTION 143d15bd0 EC_GROUP_free body=184 status=ok
// SIG undefined EC_GROUP_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EC_GROUP_free(longlong *param_1)

{
  longlong *plVar1;
  
  if (param_1 != (longlong *)0x0) {
    if (*(code **)(*param_1 + 0x10) != (code *)0x0) {
      (**(code **)(*param_1 + 0x10))();
    }
    EC_pre_comp_free(param_1);
    BN_MONT_CTX_free(param_1[0x12]);
    plVar1 = (longlong *)param_1[1];
    if (plVar1 != (longlong *)0x0) {
      if (*(code **)(*plVar1 + 0x58) != (code *)0x0) {
        (**(code **)(*plVar1 + 0x58))(plVar1);
      }
      CRYPTO_free(plVar1,"crypto\\ec\\ec_lib.c",0x255);
    }
    BN_free(param_1[2]);
    BN_free(param_1[3]);
    CRYPTO_free(param_1[6],"crypto\\ec\\ec_lib.c",0x6b);
    CRYPTO_free(param_1,"crypto\\ec\\ec_lib.c",0x6c);
  }
  return;
}



// FUNCTION 143d15c90 EC_GROUP_get_cofactor body=75 status=ok
// SIG undefined EC_GROUP_get_cofactor(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool EC_GROUP_get_cofactor(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    lVar2 = BN_copy(param_2);
    if (lVar2 != 0) {
      iVar1 = BN_is_zero(*(undefined8 *)(param_1 + 0x18));
      return iVar1 == 0;
    }
  }
  return false;
}



// FUNCTION 143d15ce0 EC_GROUP_get_curve body=72 status=ok
// SIG undefined EC_GROUP_get_curve(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_GROUP_get_curve(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x30) == (code *)0x0) {
    ERR_put_error(0x10,0x123,0x42,"crypto\\ec\\ec_lib.c",0x1b0);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000143d15d25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x30))();
  return uVar1;
}



// FUNCTION 143d15d30 EC_GROUP_get_degree body=72 status=ok
// SIG undefined EC_GROUP_get_degree(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_GROUP_get_degree(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x38) == (code *)0x0) {
    ERR_put_error(0x10,0xad,0x42,"crypto\\ec\\ec_lib.c",0x1d5);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000143d15d75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x38))();
  return uVar1;
}



// FUNCTION 143d15d80 EC_GROUP_new body=314 status=ok
// SIG undefined EC_GROUP_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * EC_GROUP_new(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143d15d8c;
  if (param_1 == (byte *)0x0) {
    ERR_put_error(0x10,0x6c,0x6c,"crypto\\ec\\ec_lib.c",0x19,0x143d15d8c);
    return (undefined8 *)0x0;
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    ERR_put_error(0x10,0x6c,0x42,"crypto\\ec\\ec_lib.c",0x1d,0x143d15d8c);
    return (undefined8 *)0x0;
  }
  puVar2 = (undefined8 *)CRYPTO_zalloc(0xa8,"crypto\\ec\\ec_lib.c",0x21);
  if (puVar2 == (undefined8 *)0x0) {
    ERR_put_error(0x10,0x6c,0x41,"crypto\\ec\\ec_lib.c",0x23,uVar4);
    return (undefined8 *)0x0;
  }
  *puVar2 = param_1;
  if ((*param_1 & 2) == 0) {
    lVar3 = BN_new();
    puVar2[2] = lVar3;
    if (lVar3 == 0) goto LAB_143d15e78;
    lVar3 = BN_new();
    puVar2[3] = lVar3;
    if (lVar3 == 0) goto LAB_143d15e78;
  }
  *(undefined4 *)((longlong)puVar2 + 0x24) = 1;
  *(undefined4 *)(puVar2 + 5) = 4;
  iVar1 = (**(code **)(param_1 + 8))(puVar2);
  if (iVar1 != 0) {
    return puVar2;
  }
LAB_143d15e78:
  BN_free(puVar2[2]);
  BN_free(puVar2[3]);
  CRYPTO_free(puVar2,"crypto\\ec\\ec_lib.c",0x39);
  return (undefined8 *)0x0;
}



// FUNCTION 143d15ec0 EC_GROUP_order_bits body=24 status=ok
// SIG undefined EC_GROUP_order_bits(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EC_GROUP_order_bits(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143d15ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}



// FUNCTION 143d15ee0 EC_GROUP_set_curve body=72 status=ok
// SIG undefined EC_GROUP_set_curve(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_GROUP_set_curve(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x28) == (code *)0x0) {
    ERR_put_error(0x10,0x124,0x42,"crypto\\ec\\ec_lib.c",0x1a6);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000143d15f25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x28))();
  return uVar1;
}



// FUNCTION 143d15f30 EC_GROUP_set_generator body=365 status=ok
// SIG undefined EC_GROUP_set_generator(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
EC_GROUP_set_generator(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_2 == 0) {
    ERR_put_error(0x10,0x6f,0x43,"crypto\\ec\\ec_lib.c",0x110,0x143d15f4a);
  }
  else {
    lVar2 = *(longlong *)(param_1 + 8);
    if (lVar2 == 0) {
      lVar2 = EC_POINT_new();
      *(longlong *)(param_1 + 8) = lVar2;
      if (lVar2 == 0) {
        return 0;
      }
    }
    iVar1 = EC_POINT_copy(lVar2,param_2);
    if (iVar1 != 0) {
      if (param_3 == 0) {
        BN_set_word(*(undefined8 *)(param_1 + 0x10),0);
      }
      else {
        lVar2 = BN_copy(*(undefined8 *)(param_1 + 0x10),param_3);
        if (lVar2 == 0) {
          return 0;
        }
      }
      if (param_4 == 0) {
        BN_set_word(*(undefined8 *)(param_1 + 0x18),0);
      }
      else {
        lVar2 = BN_copy(*(undefined8 *)(param_1 + 0x18),param_4);
        if (lVar2 == 0) {
          return 0;
        }
      }
      iVar1 = BN_is_odd(*(undefined8 *)(param_1 + 0x10));
      if (iVar1 != 0) {
        lVar2 = BN_CTX_new();
        uVar4 = 0;
        BN_MONT_CTX_free(*(undefined8 *)(param_1 + 0x90));
        *(undefined8 *)(param_1 + 0x90) = 0;
        if (lVar2 != 0) {
          lVar3 = BN_MONT_CTX_new();
          *(longlong *)(param_1 + 0x90) = lVar3;
          if (lVar3 != 0) {
            iVar1 = BN_MONT_CTX_set(lVar3,*(undefined8 *)(param_1 + 0x10),lVar2);
            if (iVar1 == 0) {
              BN_MONT_CTX_free(*(undefined8 *)(param_1 + 0x90));
              *(undefined8 *)(param_1 + 0x90) = 0;
              BN_CTX_free(lVar2);
              return 0;
            }
            uVar4 = 1;
          }
        }
        BN_CTX_free(lVar2);
        return uVar4;
      }
      BN_MONT_CTX_free(*(undefined8 *)(param_1 + 0x90));
      *(undefined8 *)(param_1 + 0x90) = 0;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143d160a0 EC_GROUP_set_seed body=213 status=ok
// SIG undefined EC_GROUP_set_seed(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

size_t EC_GROUP_set_seed(longlong param_1,void *param_2,size_t param_3)

{
  void *_Dst;
  undefined8 uVar1;
  
  uVar1 = 0x143d160b5;
  CRYPTO_free(*(undefined8 *)(param_1 + 0x30),"crypto\\ec\\ec_lib.c",0x187);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if ((param_3 != 0) && (param_2 != (void *)0x0)) {
    _Dst = (void *)CRYPTO_malloc(param_3,"crypto\\ec\\ec_lib.c",0x18e);
    *(void **)(param_1 + 0x30) = _Dst;
    if (_Dst == (void *)0x0) {
      ERR_put_error(0x10,0x11e,0x41,"crypto\\ec\\ec_lib.c",399,uVar1);
      return 0;
    }
    _guard_xfg_dispatch_icall_nop(_Dst,param_2,param_3);
    *(size_t *)(param_1 + 0x38) = param_3;
    return param_3;
  }
  return 1;
}



// FUNCTION 143d16180 EC_POINT_add body=168 status=ok
// SIG undefined EC_POINT_add(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_POINT_add(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0xb0) == (code *)0x0) {
    uVar4 = 0x315;
    uVar3 = 0x42;
  }
  else {
    if ((((lVar2 == *param_2) &&
         ((((iVar1 = (int)param_1[4], iVar1 == 0 || ((int)param_2[1] == 0)) ||
           (iVar1 == (int)param_2[1])) && (lVar2 == *param_3)))) &&
        ((((iVar1 == 0 || ((int)param_3[1] == 0)) || (iVar1 == (int)param_3[1])) &&
         (lVar2 == *param_4)))) &&
       (((iVar1 == 0 || ((int)param_4[1] == 0)) || (iVar1 == (int)param_4[1])))) {
                    /* WARNING: Could not recover jumptable at 0x000143d161fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(lVar2 + 0xb0))(param_1);
      return uVar3;
    }
    uVar4 = 0x31a;
    uVar3 = 0x65;
  }
  ERR_put_error(0x10,0x70,uVar3,"crypto\\ec\\ec_lib.c",uVar4,0x143d1618c);
  return 0;
}



// FUNCTION 143d16230 EC_POINT_clear_free body=77 status=ok
// SIG undefined EC_POINT_clear_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EC_POINT_clear_free(longlong *param_1)

{
  code *pcVar1;
  
  if (param_1 != (longlong *)0x0) {
    pcVar1 = *(code **)(*param_1 + 0x60);
    if ((pcVar1 != (code *)0x0) || (pcVar1 = *(code **)(*param_1 + 0x58), pcVar1 != (code *)0x0)) {
      (*pcVar1)();
    }
    CRYPTO_clear_free(param_1,0x30,"crypto\\ec\\ec_lib.c",0x261);
  }
  return;
}



// FUNCTION 143d16280 EC_POINT_cmp body=150 status=ok
// SIG undefined EC_POINT_cmp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_POINT_cmp(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0xd8) == (code *)0x0) {
    uVar4 = 0x362;
    uVar3 = 0x42;
  }
  else {
    if (((lVar2 == *param_2) &&
        (((iVar1 = (int)param_1[4], iVar1 == 0 || ((int)param_2[1] == 0)) ||
         (iVar1 == (int)param_2[1])))) &&
       ((lVar2 == *param_3 &&
        (((iVar1 == 0 || ((int)param_3[1] == 0)) || (iVar1 == (int)param_3[1])))))) {
                    /* WARNING: Could not recover jumptable at 0x000143d162e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(lVar2 + 0xd8))(param_1);
      return uVar3;
    }
    uVar4 = 0x366;
    uVar3 = 0x65;
  }
  ERR_put_error(0x10,0x71,uVar3,"crypto\\ec\\ec_lib.c",uVar4,0x143d1628c);
  return 0xffffffff;
}



// FUNCTION 143d16320 EC_POINT_copy body=128 status=ok
// SIG undefined EC_POINT_copy(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_POINT_copy(longlong *param_1,longlong *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x68);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    uVar3 = 0x267;
    uVar2 = 0x42;
  }
  else {
    if (*param_1 == *param_2) {
      if ((((int)param_1[1] == (int)param_2[1]) || ((int)param_1[1] == 0)) || ((int)param_2[1] == 0)
         ) {
        if (param_1 == param_2) {
          return 1;
        }
                    /* WARNING: Could not recover jumptable at 0x000143d16374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*UNRECOVERED_JUMPTABLE)();
        return uVar1;
      }
    }
    uVar3 = 0x26e;
    uVar2 = 0x65;
  }
  ERR_put_error(0x10,0x72,uVar2,"crypto\\ec\\ec_lib.c",uVar3);
  return 0;
}



// FUNCTION 143d163a0 EC_POINT_dbl body=147 status=ok
// SIG undefined EC_POINT_dbl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_POINT_dbl(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0xb8) == (code *)0x0) {
    uVar4 = 0x324;
    uVar3 = 0x42;
  }
  else {
    if (((lVar2 == *param_2) &&
        (((iVar1 = (int)param_1[4], iVar1 == 0 || ((int)param_2[1] == 0)) ||
         (iVar1 == (int)param_2[1])))) &&
       ((lVar2 == *param_3 &&
        (((iVar1 == 0 || ((int)param_3[1] == 0)) || (iVar1 == (int)param_3[1])))))) {
                    /* WARNING: Could not recover jumptable at 0x000143d16406. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(lVar2 + 0xb8))(param_1);
      return uVar3;
    }
    uVar4 = 0x328;
    uVar3 = 0x65;
  }
  ERR_put_error(0x10,0x73,uVar3,"crypto\\ec\\ec_lib.c",uVar4,0x143d163ac);
  return 0;
}



// FUNCTION 143d16440 EC_POINT_free body=63 status=ok
// SIG undefined EC_POINT_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EC_POINT_free(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    if (*(code **)(*param_1 + 0x58) != (code *)0x0) {
      (**(code **)(*param_1 + 0x58))();
    }
    CRYPTO_free(param_1,"crypto\\ec\\ec_lib.c",0x255);
  }
  return;
}



// FUNCTION 143d16480 EC_POINT_get_affine_coordinates body=311 status=ok
// SIG undefined EC_POINT_get_affine_coordinates(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
EC_POINT_get_affine_coordinates
          (longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143d1649a;
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x90) == 0) {
    uVar5 = 0x2f1;
    uVar4 = 0x42;
LAB_143d1658a:
    ERR_put_error(0x10,0x125,uVar4,"crypto\\ec\\ec_lib.c",uVar5,uVar6);
    return 0;
  }
  if ((lVar1 != *param_2) ||
     (((iVar2 = (int)param_1[4], iVar2 != 0 && ((int)param_2[1] != 0)) && (iVar2 != (int)param_2[1])
      ))) {
    uVar5 = 0x2f5;
    uVar4 = 0x65;
    goto LAB_143d1658a;
  }
  if (*(code **)(lVar1 + 200) == (code *)0x0) {
    uVar6 = 0x33f;
    uVar3 = 0x42;
  }
  else {
    if (((iVar2 == 0) || ((int)param_2[1] == 0)) || (iVar2 == (int)param_2[1])) {
      iVar2 = (**(code **)(lVar1 + 200))(param_1,param_2);
      if (iVar2 != 0) {
        uVar5 = 0x2f9;
        uVar4 = 0x6a;
        goto LAB_143d1658a;
      }
      goto LAB_143d16511;
    }
    uVar6 = 0x343;
    uVar3 = 0x65;
  }
  ERR_put_error(0x10,0x76,uVar3,"crypto\\ec\\ec_lib.c",uVar6,0x143d1649a);
LAB_143d16511:
  uVar6 = (**(code **)(*param_1 + 0x90))(param_1,param_2,param_3,param_4,param_5);
  return uVar6;
}



// FUNCTION 143d165c0 EC_POINT_invert body=121 status=ok
// SIG undefined EC_POINT_invert(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_POINT_invert(longlong *param_1,longlong *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xc0);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    uVar3 = 0x331;
    uVar2 = 0x42;
  }
  else {
    if ((*param_1 == *param_2) &&
       ((((int)param_1[4] == 0 || ((int)param_2[1] == 0)) || ((int)param_1[4] == (int)param_2[1]))))
    {
                    /* WARNING: Could not recover jumptable at 0x000143d1660b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
      return uVar1;
    }
    uVar3 = 0x335;
    uVar2 = 0x65;
  }
  ERR_put_error(0x10,0xd2,uVar2,"crypto\\ec\\ec_lib.c",uVar3);
  return 0;
}



// FUNCTION 143d16640 EC_POINT_is_at_infinity body=116 status=ok
// SIG undefined EC_POINT_is_at_infinity(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_POINT_is_at_infinity(longlong *param_1,longlong *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 200);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    uVar3 = 0x33f;
    uVar2 = 0x42;
  }
  else {
    if (*param_1 == *param_2) {
      if ((int)param_1[4] == 0) {
LAB_143d16684:
                    /* WARNING: Could not recover jumptable at 0x000143d16688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*UNRECOVERED_JUMPTABLE)();
        return uVar1;
      }
      if (((int)param_2[1] == 0) || ((int)param_1[4] == (int)param_2[1])) goto LAB_143d16684;
    }
    uVar3 = 0x343;
    uVar2 = 0x65;
  }
  ERR_put_error(0x10,0x76,uVar2,"crypto\\ec\\ec_lib.c",uVar3);
  return 0;
}



// FUNCTION 143d166c0 EC_POINT_is_on_curve body=119 status=ok
// SIG undefined EC_POINT_is_on_curve(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_POINT_is_on_curve(longlong *param_1,longlong *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xd0);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    uVar3 = 0x354;
    uVar2 = 0x42;
  }
  else {
    if ((*param_1 == *param_2) &&
       ((((int)param_1[4] == 0 || ((int)param_2[1] == 0)) || ((int)param_1[4] == (int)param_2[1]))))
    {
                    /* WARNING: Could not recover jumptable at 0x000143d1670b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
      return uVar1;
    }
    uVar3 = 0x358;
    uVar2 = 0x65;
  }
  ERR_put_error(0x10,0x77,uVar2,"crypto\\ec\\ec_lib.c",uVar3);
  return 0;
}



// FUNCTION 143d16740 EC_POINT_make_affine body=119 status=ok
// SIG undefined EC_POINT_make_affine(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_POINT_make_affine(longlong *param_1,longlong *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xe0);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    uVar3 = 0x36f;
    uVar2 = 0x42;
  }
  else {
    if ((*param_1 == *param_2) &&
       ((((int)param_1[4] == 0 || ((int)param_2[1] == 0)) || ((int)param_1[4] == (int)param_2[1]))))
    {
                    /* WARNING: Could not recover jumptable at 0x000143d1678b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
      return uVar1;
    }
    uVar3 = 0x373;
    uVar2 = 0x65;
  }
  ERR_put_error(0x10,0x78,uVar2,"crypto\\ec\\ec_lib.c",uVar3);
  return 0;
}



// FUNCTION 143d167c0 EC_POINT_mul body=89 status=ok
// SIG undefined EC_POINT_mul(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EC_POINT_mul(void)

{
  EC_POINTs_mul();
  return;
}



// FUNCTION 143d16820 EC_POINT_new body=260 status=ok
// SIG undefined EC_POINT_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * EC_POINT_new(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143d1682c;
  if (param_1 == (longlong *)0x0) {
    ERR_put_error(0x10,0x79,0x43,"crypto\\ec\\ec_lib.c",0x235,0x143d1682c);
    return (longlong *)0x0;
  }
  if (*(longlong *)(*param_1 + 0x50) == 0) {
    ERR_put_error(0x10,0x79,0x42,"crypto\\ec\\ec_lib.c",0x239,0x143d1682c);
    return (longlong *)0x0;
  }
  plVar3 = (longlong *)CRYPTO_zalloc(0x30,"crypto\\ec\\ec_lib.c",0x23d);
  if (plVar3 == (longlong *)0x0) {
    ERR_put_error(0x10,0x79,0x41,"crypto\\ec\\ec_lib.c",0x23f,uVar4);
    return (longlong *)0x0;
  }
  lVar1 = *param_1;
  *plVar3 = lVar1;
  *(int *)(plVar3 + 1) = (int)param_1[4];
  iVar2 = (**(code **)(lVar1 + 0x50))(plVar3);
  if (iVar2 == 0) {
    CRYPTO_free(plVar3,"crypto\\ec\\ec_lib.c",0x247);
    return (longlong *)0x0;
  }
  return plVar3;
}



// FUNCTION 143d16930 EC_POINT_set_Jprojective_coordinates_GFp body=116 status=ok
// SIG undefined EC_POINT_set_Jprojective_coordinates_GFp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_POINT_set_Jprojective_coordinates_GFp(longlong *param_1,longlong *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x78);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    uVar3 = 0x2a3;
    uVar2 = 0x42;
  }
  else {
    if ((*param_1 == *param_2) &&
       ((((int)param_1[4] == 0 || ((int)param_2[1] == 0)) || ((int)param_1[4] == (int)param_2[1]))))
    {
                    /* WARNING: Could not recover jumptable at 0x000143d16978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
      return uVar1;
    }
    uVar3 = 0x2a8;
    uVar2 = 0x65;
  }
  ERR_put_error(0x10,0x7e,uVar2,"crypto\\ec\\ec_lib.c",uVar3);
  return 0;
}



// FUNCTION 143d169b0 EC_POINT_set_affine_coordinates body=368 status=ok
// SIG undefined EC_POINT_set_affine_coordinates(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
EC_POINT_set_affine_coordinates
          (longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143d169c0;
  pcVar1 = *(code **)(*param_1 + 0x88);
  if (pcVar1 == (code *)0x0) {
    ERR_put_error(0x10,0x126,0x42,"crypto\\ec\\ec_lib.c",0x2c8,0x143d169c0);
    return 0;
  }
  if ((*param_1 != *param_2) ||
     ((((int)param_1[4] != 0 && ((int)param_2[1] != 0)) && ((int)param_1[4] != (int)param_2[1])))) {
    ERR_put_error(0x10,0x126,0x65,"crypto\\ec\\ec_lib.c",0x2cc,0x143d169c0);
    return 0;
  }
  uVar4 = param_5;
  iVar2 = (*pcVar1)(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  pcVar1 = *(code **)(*param_1 + 0xd0);
  uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (pcVar1 == (code *)0x0) {
    uVar4 = CONCAT44(uVar3,0x354);
    uVar3 = 0x42;
  }
  else {
    if ((*param_1 == *param_2) &&
       ((((int)param_1[4] == 0 || ((int)param_2[1] == 0)) || ((int)param_1[4] == (int)param_2[1]))))
    {
      iVar2 = (*pcVar1)(param_1,param_2,param_5,pcVar1,uVar4);
      uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
      if (0 < iVar2) {
        return 1;
      }
      goto LAB_143d16abd;
    }
    uVar4 = CONCAT44(uVar3,0x358);
    uVar3 = 0x65;
  }
  ERR_put_error(0x10,0x77,uVar3,"crypto\\ec\\ec_lib.c",uVar4,uVar5);
  uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
LAB_143d16abd:
  ERR_put_error(0x10,0x126,0x6b,"crypto\\ec\\ec_lib.c",CONCAT44(uVar3,0x2d3),uVar5);
  return 0;
}



// FUNCTION 143d16b20 EC_POINT_set_to_infinity body=114 status=ok
// SIG undefined EC_POINT_set_to_infinity(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_POINT_set_to_infinity(longlong *param_1,longlong *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x70);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    ERR_put_error(0x10,0x7f,0x42,"crypto\\ec\\ec_lib.c",0x292);
    return 0;
  }
  if (*param_1 != *param_2) {
    ERR_put_error(0x10,0x7f,0x65,"crypto\\ec\\ec_lib.c",0x296);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000143d16b8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}



// FUNCTION 143d16ba0 EC_POINTs_make_affine body=222 status=ok
// SIG undefined EC_POINTs_make_affine(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_POINTs_make_affine(longlong *param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xe8);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    ERR_put_error(0x10,0x88,0x42,"crypto\\ec\\ec_lib.c",0x37f,0x143d16bb5);
    return 0;
  }
  uVar3 = 0;
  if (param_2 != 0) {
    do {
      plVar2 = *(longlong **)(param_3 + uVar3 * 8);
      if ((*param_1 != *plVar2) ||
         ((((int)param_1[4] != 0 && (iVar1 = (int)plVar2[1], iVar1 != 0)) &&
          ((int)param_1[4] != iVar1)))) {
        ERR_put_error(0x10,0x88,0x65,"crypto\\ec\\ec_lib.c",900,0x143d16bb5);
        return 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x000143d16c49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return uVar4;
}



// FUNCTION 143d16c80 EC_POINTs_mul body=489 status=ok
// SIG undefined EC_POINTs_mul(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong EC_POINTs_mul(longlong *param_1,longlong *param_2,longlong param_3,ulonglong param_4,
                       longlong param_5,undefined8 param_6,ulonglong param_7)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x143d16c98;
  uVar6 = 0;
  if ((param_3 == 0) && (param_4 == 0)) {
    pcVar3 = *(code **)(*param_1 + 0x70);
    if (pcVar3 == (code *)0x0) {
      ERR_put_error(0x10,0x7f,0x42,"crypto\\ec\\ec_lib.c",0x292);
    }
    else if (*param_1 == *param_2) {
      uVar6 = (*pcVar3)();
    }
    else {
      ERR_put_error(0x10,0x7f,0x65,"crypto\\ec\\ec_lib.c",0x296);
      uVar6 = 0;
    }
  }
  else if ((*param_1 == *param_2) &&
          (((iVar1 = (int)param_1[4], iVar1 == 0 || ((int)param_2[1] == 0)) ||
           (iVar1 == (int)param_2[1])))) {
    uVar7 = uVar6;
    if (param_4 != 0) {
      do {
        plVar4 = *(longlong **)(param_5 + uVar7 * 8);
        if ((*param_1 != *plVar4) ||
           (((iVar1 != 0 && (iVar2 = (int)plVar4[1], iVar2 != 0)) && (iVar1 != iVar2)))) {
          uVar9 = 0x3a3;
          uVar8 = 0x65;
          goto LAB_143d16da9;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < param_4);
    }
    uVar7 = uVar6;
    if ((param_7 == 0) && (param_7 = BN_CTX_secure_new(), uVar7 = param_7, param_7 == 0)) {
      uVar9 = 0x3a9;
      uVar8 = 0x44;
LAB_143d16da9:
      ERR_put_error(0x10,0x122,uVar8,"crypto\\ec\\ec_lib.c",uVar9);
      uVar6 = 0;
    }
    else if (*(code **)(*param_1 + 0xf0) == (code *)0x0) {
      uVar5 = ec_wNAF_mul(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar9);
      uVar6 = (ulonglong)uVar5;
      BN_CTX_free(uVar7);
    }
    else {
      uVar5 = (**(code **)(*param_1 + 0xf0))();
      uVar6 = (ulonglong)uVar5;
      BN_CTX_free(uVar7);
    }
  }
  else {
    ERR_put_error(0x10,0x122,0x65,"crypto\\ec\\ec_lib.c",0x39e);
    uVar6 = 0;
  }
  return uVar6;
}



// FUNCTION 143d16e70 EC_pre_comp_free body=92 status=ok
// SIG undefined EC_pre_comp_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EC_pre_comp_free(longlong param_1)

{
  if (*(int *)(param_1 + 0x98) == 4) {
    EC_nistz256_pre_comp_free(*(undefined8 *)(param_1 + 0xa0));
  }
  else if (*(int *)(param_1 + 0x98) == 5) {
    EC_ec_pre_comp_free(*(undefined8 *)(param_1 + 0xa0));
    *(undefined8 *)(param_1 + 0xa0) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  return;
}



// FUNCTION 143d16ed0 ec_group_do_inverse_ord body=285 status=ok
// SIG undefined ec_group_do_inverse_ord(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ec_group_do_inverse_ord
                   (longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(code **)(*param_1 + 0x180) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d16f12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar2 = (**(code **)(*param_1 + 0x180))();
    return lVar2;
  }
  lVar2 = 0;
  if (param_1[0x12] != 0) {
    lVar3 = lVar2;
    if ((param_4 == 0) && (lVar3 = BN_CTX_secure_new(), param_4 = lVar3, lVar3 == 0)) {
      return 0;
    }
    BN_CTX_start(param_4);
    lVar4 = BN_CTX_get(param_4);
    if (((lVar4 != 0) && (iVar1 = BN_set_word(lVar4,2), iVar1 != 0)) &&
       (iVar1 = BN_sub(lVar4,param_1[2],lVar4), iVar1 != 0)) {
      iVar1 = BN_mod_exp_mont(param_2,param_3,lVar4,param_1[2],param_4,param_1[0x12]);
      lVar2 = 0;
      if (iVar1 != 0) {
        lVar2 = 1;
      }
    }
    if (param_4 != 0) {
      BN_CTX_end(param_4);
    }
    BN_CTX_free(lVar3);
  }
  return lVar2;
}



// FUNCTION 143d16ff0 ec_group_simple_order_bits body=38 status=ok
// SIG undefined ec_group_simple_order_bits(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ec_group_simple_order_bits(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return 0;
  }
  uVar1 = BN_num_bits();
  return uVar1;
}



// FUNCTION 143d17020 ec_point_blind_coordinates body=44 status=ok
// SIG undefined ec_point_blind_coordinates(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ec_point_blind_coordinates(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x188) == (code *)0x0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000143d17049. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x188))();
  return uVar1;
}



// FUNCTION 143d17050 EC_GROUP_new_by_curve_name body=132 status=ok
// SIG undefined EC_GROUP_new_by_curve_name(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong EC_GROUP_new_by_curve_name(int param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int *piVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined8 uStack_8;
  
  uStack_8 = 0x143d1705a;
  uVar1 = 0;
  if (0 < param_1) {
    piVar3 = &DAT_145d7c980;
    do {
      if (*piVar3 == param_1) {
        lVar2 = uVar1 * 0x20;
        local_28 = (&DAT_145d7c980)[uVar1 * 8];
        uStack_24 = *(undefined4 *)(&UNK_145d7c984 + lVar2);
        uStack_20 = *(undefined4 *)(&UNK_145d7c988 + lVar2);
        uStack_1c = *(undefined4 *)(&UNK_145d7c98c + lVar2);
        local_18 = *(undefined4 *)(&UNK_145d7c990 + lVar2);
        uStack_14 = *(undefined4 *)(&UNK_145d7c994 + lVar2);
        uStack_10 = *(undefined4 *)(&UNK_145d7c998 + lVar2);
        uStack_c = *(undefined4 *)(&UNK_145d7c99c + lVar2);
        lVar2 = ec_group_new_from_data(&local_28);
        if (lVar2 != 0) {
          return lVar2;
        }
        break;
      }
      uVar1 = uVar1 + 1;
      piVar3 = piVar3 + 8;
    } while (uVar1 < 0x52);
    ERR_put_error(0x10,0xae,0x81,"crypto\\ec\\ec_curve.c",0xc3c);
  }
  return 0;
}



// FUNCTION 143d170e0 EC_curve_nid2nist body=51 status=ok
// SIG undefined EC_curve_nid2nist(void)

undefined * EC_curve_nid2nist(int param_1)

{
  ulonglong uVar1;
  int *piVar2;
  
  uVar1 = 0;
  piVar2 = &DAT_1468370f8;
  do {
    if (*piVar2 == param_1) {
      return (&PTR_s_B_163_1468370f0)[uVar1 * 2];
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 4;
  } while (uVar1 < 0xf);
  return (undefined *)0x0;
}



// FUNCTION 143d17120 EC_curve_nist2nid body=106 status=ok
// SIG undefined EC_curve_nist2nid(void)

undefined4 EC_curve_nist2nid(longlong param_1)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined **ppuVar6;
  
  ppuVar6 = &PTR_s_B_163_1468370f0;
  uVar5 = 0;
  do {
    pcVar3 = *ppuVar6;
    lVar4 = param_1 - (longlong)pcVar3;
    do {
      cVar1 = *pcVar3;
      cVar2 = pcVar3[lVar4];
      if (cVar1 != cVar2) break;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    if (cVar1 == cVar2) {
      return (&DAT_1468370f8)[uVar5 * 4];
    }
    uVar5 = uVar5 + 1;
    ppuVar6 = ppuVar6 + 2;
    if (0xe < uVar5) {
      return 0;
    }
  } while( true );
}



// FUNCTION 143d17190 ec_group_new_from_data body=1234 status=ok
// SIG undefined ec_group_new_from_data(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * ec_group_new_from_data(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  bool bVar14;
  undefined8 in_stack_ffffffffffffff78;
  longlong lVar15;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined4 uVar16;
  
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  plVar6 = (longlong *)0x0;
  bVar3 = false;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (*(longlong *)(param_1 + 2) == 0) {
    if (*(code **)(param_1 + 4) != (code *)0x0) {
      plVar6 = (longlong *)(**(code **)(param_1 + 4))();
    }
    plVar6 = (longlong *)EC_GROUP_new(plVar6);
    return plVar6;
  }
  lVar7 = BN_CTX_new();
  plVar11 = plVar6;
  plVar10 = plVar6;
  plVar13 = plVar6;
  if (lVar7 == 0) {
    ERR_put_error(0x10,0xaf,0x41,"crypto\\ec\\ec_curve.c",CONCAT44(uVar16,0xbd4));
    bVar3 = false;
    goto LAB_143d175ea;
  }
  piVar2 = *(int **)(param_1 + 2);
  iVar1 = piVar2[1];
  lVar8 = (longlong)iVar1;
  iVar5 = piVar2[2];
  lVar12 = (longlong)piVar2 + lVar8 + 0x10;
  local_78 = BN_bin2bn(lVar12,iVar5,0);
  if (local_78 == 0) {
LAB_143d175bc:
    ERR_put_error(0x10,0xaf,3,"crypto\\ec\\ec_curve.c",CONCAT44(uVar16,0xbe1));
LAB_143d175e6:
    bVar14 = !bVar3;
    if (!bVar14) goto LAB_143d175f4;
  }
  else {
    local_70 = BN_bin2bn(iVar5 + lVar12,iVar5,0);
    if (local_70 == 0) goto LAB_143d175bc;
    local_68 = BN_bin2bn(iVar5 * 2 + lVar12,iVar5,0);
    if (local_68 == 0) goto LAB_143d175bc;
    if (*(code **)(param_1 + 4) == (code *)0x0) {
      if (*piVar2 != 0x196) {
        plVar10 = (longlong *)EC_GROUP_new_curve_GF2m(local_78,local_70,local_68,lVar7);
        if (plVar10 != (longlong *)0x0) goto LAB_143d173a9;
        ERR_put_error(0x10,0xaf,0x10,"crypto\\ec\\ec_curve.c",CONCAT44(uVar16,0xbf7));
        plVar11 = (longlong *)0x0;
        plVar13 = (longlong *)0x0;
        goto LAB_143d175ea;
      }
      plVar10 = (longlong *)EC_GROUP_new_curve_GF2m();
      if (plVar10 == (longlong *)0x0) {
        ERR_put_error(0x10,0xaf,0x10,"crypto\\ec\\ec_curve.c",CONCAT44(uVar16,0xbee));
        plVar11 = (longlong *)0x0;
        plVar13 = (longlong *)0x0;
        goto LAB_143d175ea;
      }
LAB_143d173a9:
      CAkMatrixAwareCtx::SetRegisteredNotif(plVar10,*param_1);
      plVar11 = (longlong *)EC_POINT_new(plVar10);
      if (plVar11 == (longlong *)0x0) {
        ERR_put_error(0x10,0xaf,0x10,"crypto\\ec\\ec_curve.c",CONCAT44(uVar16,0xc00));
        plVar13 = (longlong *)0x0;
        goto LAB_143d175ea;
      }
      local_60 = BN_bin2bn(iVar5 * 3 + lVar12,iVar5,0);
      if (local_60 == 0) {
LAB_143d1758b:
        ERR_put_error(0x10,0xaf,3,"crypto\\ec\\ec_curve.c",CONCAT44(uVar16,0xc06));
        plVar13 = (longlong *)0x0;
        goto LAB_143d175ea;
      }
      local_58 = BN_bin2bn(iVar5 * 4 + lVar12,iVar5,0);
      if (local_58 == 0) goto LAB_143d1758b;
      lVar15 = lVar7;
      iVar4 = EC_POINT_set_affine_coordinates(plVar10,plVar11,local_60,local_58,lVar7);
      uVar16 = (undefined4)((ulonglong)lVar15 >> 0x20);
      if (iVar4 == 0) {
        ERR_put_error(0x10,0xaf,0x10,"crypto\\ec\\ec_curve.c",CONCAT44(uVar16,0xc0a));
        plVar13 = (longlong *)0x0;
        goto LAB_143d175ea;
      }
      plVar13 = (longlong *)BN_bin2bn(iVar5 * 5 + lVar12,iVar5,0);
      if (plVar13 == (longlong *)0x0) {
LAB_143d1755d:
        ERR_put_error(0x10,0xaf,3,"crypto\\ec\\ec_curve.c",CONCAT44(uVar16,0xc0f));
        goto LAB_143d175ea;
      }
      iVar5 = BN_set_word(local_60,piVar2[3]);
      if (iVar5 == 0) goto LAB_143d1755d;
      iVar5 = EC_GROUP_set_generator(plVar10,plVar11,plVar13,local_60);
      if (iVar5 == 0) {
        ERR_put_error(0x10,0xaf,0x10,"crypto\\ec\\ec_curve.c",CONCAT44(uVar16,0xc13));
        goto LAB_143d175ea;
      }
      if (iVar1 != 0) {
        lVar8 = EC_GROUP_set_seed(plVar10,lVar12 - lVar8,lVar8);
        if (lVar8 == 0) {
          ERR_put_error(0x10,0xaf,0x10,"crypto\\ec\\ec_curve.c",CONCAT44(uVar16,0xc18));
          goto LAB_143d175ea;
        }
      }
      bVar3 = true;
      goto LAB_143d175e6;
    }
    uVar9 = (**(code **)(param_1 + 4))();
    plVar10 = (longlong *)EC_GROUP_new(uVar9);
    if (plVar10 != (longlong *)0x0) {
      lVar15 = lVar7;
      iVar4 = (**(code **)(*plVar10 + 0x28))(plVar10,local_78,local_70,local_68,lVar7);
      uVar16 = (undefined4)((ulonglong)lVar15 >> 0x20);
      if (iVar4 != 0) goto LAB_143d173a9;
    }
    ERR_put_error(0x10,0xaf,0x10,"crypto\\ec\\ec_curve.c",CONCAT44(uVar16,0xbe9));
    plVar13 = (longlong *)0x0;
    bVar3 = false;
  }
LAB_143d175ea:
  EC_GROUP_free(plVar10);
  bVar14 = !bVar3;
LAB_143d175f4:
  if (!bVar14) {
    plVar6 = plVar10;
  }
  EC_POINT_free(plVar11);
  BN_CTX_free(lVar7);
  BN_free(local_78);
  BN_free(local_70);
  BN_free(local_68);
  BN_free(plVar13);
  BN_free(local_60);
  BN_free(local_58);
  return plVar6;
}



// FUNCTION 143d17670 EC_KEY_can_sign body=31 status=ok
// SIG undefined EC_KEY_can_sign(void)

undefined8 EC_KEY_can_sign(longlong param_1)

{
  byte *pbVar1;
  
  if (((*(undefined8 **)(param_1 + 0x18) != (undefined8 *)0x0) &&
      (pbVar1 = (byte *)**(undefined8 **)(param_1 + 0x18), pbVar1 != (byte *)0x0)) &&
     ((*pbVar1 & 4) == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 143d17690 EC_KEY_check_key body=113 status=ok
// SIG undefined EC_KEY_check_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_KEY_check_key(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (((param_1 == 0) || (*(longlong **)(param_1 + 0x18) == (longlong *)0x0)) ||
     (*(longlong *)(param_1 + 0x20) == 0)) {
    uVar3 = 0x102;
    uVar2 = 0x43;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(**(longlong **)(param_1 + 0x18) + 0x158);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d176d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)();
      return uVar1;
    }
    uVar3 = 0x107;
    uVar2 = 0x42;
  }
  ERR_put_error(0x10,0xb1,uVar2,"crypto\\ec\\ec_key.c",uVar3);
  return 0;
}



// FUNCTION 143d17710 FUN_143d17710 body=6 status=ok
// SIG undefined FUN_143d17710(void)

void FUN_143d17710(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & ~param_2;
  return;
}



// FUNCTION 143d17720 EC_KEY_copy body=519 status=ok
// SIG undefined EC_KEY_copy(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * EC_KEY_copy(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((param_1 == (longlong *)0x0) || (param_2 == (longlong *)0x0)) {
    ERR_put_error(0x10,0xb2,0x43,"crypto\\ec\\ec_key.c",0x4c,0x143d17730);
    return (longlong *)0x0;
  }
  if (*param_2 != *param_1) {
    pcVar1 = *(code **)(*param_1 + 0x18);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)();
    }
    if (((longlong *)param_1[3] != (longlong *)0x0) &&
       (pcVar1 = *(code **)(*(longlong *)param_1[3] + 0x170), pcVar1 != (code *)0x0)) {
      (*pcVar1)(param_1);
    }
    iVar2 = ENGINE_finish(param_1[1]);
    if (iVar2 == 0) {
      return (longlong *)0x0;
    }
    param_1[1] = 0;
  }
  if (param_2[3] != 0) {
    uVar3 = FHardwareCursor::GetHandle();
    EC_GROUP_free(param_1[3]);
    lVar4 = EC_GROUP_new(uVar3);
    param_1[3] = lVar4;
    if (lVar4 == 0) {
      return (longlong *)0x0;
    }
    iVar2 = EC_GROUP_copy(lVar4,param_2[3]);
    if (iVar2 == 0) {
      return (longlong *)0x0;
    }
    if (param_2[4] != 0) {
      EC_POINT_free(param_1[4]);
      lVar4 = EC_POINT_new(param_2[3]);
      param_1[4] = lVar4;
      if (lVar4 == 0) {
        return (longlong *)0x0;
      }
      iVar2 = EC_POINT_copy(lVar4,param_2[4]);
      if (iVar2 == 0) {
        return (longlong *)0x0;
      }
    }
    lVar4 = param_2[5];
    if (lVar4 != 0) {
      lVar5 = param_1[5];
      if (lVar5 == 0) {
        lVar5 = BN_new();
        param_1[5] = lVar5;
        if (lVar5 == 0) {
          return (longlong *)0x0;
        }
        lVar4 = param_2[5];
      }
      lVar4 = BN_copy(lVar5,lVar4);
      if (lVar4 == 0) {
        return (longlong *)0x0;
      }
      if ((*(code **)(*(longlong *)param_2[3] + 0x168) != (code *)0x0) &&
         (iVar2 = (**(code **)(*(longlong *)param_2[3] + 0x168))(param_1,param_2), iVar2 == 0)) {
        return (longlong *)0x0;
      }
    }
  }
  *(int *)(param_1 + 6) = (int)param_2[6];
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(int *)(param_1 + 2) = (int)param_2[2];
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  iVar2 = CRYPTO_dup_ex_data(8,param_1 + 8,param_2 + 8);
  if (iVar2 == 0) {
    return (longlong *)0x0;
  }
  lVar4 = *param_2;
  if (lVar4 != *param_1) {
    if ((param_2[1] != 0) && (iVar2 = ENGINE_init(), iVar2 == 0)) {
      return (longlong *)0x0;
    }
    param_1[1] = param_2[1];
    *param_1 = *param_2;
    lVar4 = *param_2;
  }
  if ((*(code **)(lVar4 + 0x20) != (code *)0x0) &&
     (iVar2 = (**(code **)(lVar4 + 0x20))(param_1,param_2), iVar2 == 0)) {
    return (longlong *)0x0;
  }
  return param_1;
}



// FUNCTION 143d17930 EC_KEY_dup body=90 status=ok
// SIG undefined EC_KEY_dup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong EC_KEY_dup(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = EC_KEY_new_method(*(undefined8 *)(param_1 + 8));
  if (lVar1 != 0) {
    lVar2 = EC_KEY_copy(lVar1,param_1);
    if (lVar2 != 0) {
      return lVar1;
    }
    EC_KEY_free(lVar1);
  }
  return 0;
}



// FUNCTION 143d17990 EC_KEY_free body=186 status=ok
// SIG undefined EC_KEY_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EC_KEY_free(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  
  if (param_1 != (longlong *)0x0) {
    LOCK();
    plVar1 = param_1 + 7;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 < 2) {
      if ((*param_1 != 0) && (pcVar2 = *(code **)(*param_1 + 0x18), pcVar2 != (code *)0x0)) {
        (*pcVar2)();
      }
      ENGINE_finish(param_1[1]);
      if (((longlong *)param_1[3] != (longlong *)0x0) &&
         (pcVar2 = *(code **)(*(longlong *)param_1[3] + 0x170), pcVar2 != (code *)0x0)) {
        (*pcVar2)(param_1);
      }
      CRYPTO_free_ex_data(8,param_1,param_1 + 8);
      CRYPTO_THREAD_lock_free(param_1[9]);
      EC_GROUP_free(param_1[3]);
      EC_POINT_free(param_1[4]);
      BN_clear_free(param_1[5]);
      CRYPTO_clear_free(param_1,0x50,"crypto\\ec\\ec_key.c");
    }
  }
  return;
}



// FUNCTION 143d17a50 EC_KEY_generate_key body=103 status=ok
// SIG undefined EC_KEY_generate_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_KEY_generate_key(longlong *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if ((param_1 == (longlong *)0x0) || (param_1[3] == 0)) {
    uVar2 = 0xb8;
    uVar1 = 0x43;
  }
  else {
    if (*(code **)(*param_1 + 0x40) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d17a79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*param_1 + 0x40))();
      return uVar1;
    }
    uVar2 = 0xbd;
    uVar1 = 0x98;
  }
  ERR_put_error(0x10,0xb3,uVar1,"crypto\\ec\\ec_key.c",uVar2);
  return 0;
}



// FUNCTION 143d17ac0 EC_KEY_key2buf body=66 status=ok
// SIG undefined EC_KEY_key2buf(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_KEY_key2buf(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0x20) != 0)) &&
     (*(longlong *)(param_1 + 0x18) != 0)) {
    uVar1 = EC_POINT_point2buf(*(longlong *)(param_1 + 0x18),*(longlong *)(param_1 + 0x20),param_2,
                               param_3,param_4);
    return uVar1;
  }
  return 0;
}



// FUNCTION 143d17b10 EC_KEY_new body=24 status=ok
// SIG undefined EC_KEY_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EC_KEY_new(void)

{
  EC_KEY_new_method(0);
  return;
}



// FUNCTION 143d17b30 EC_KEY_new_by_curve_name body=112 status=ok
// SIG undefined EC_KEY_new_by_curve_name(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * EC_KEY_new_by_curve_name(undefined4 param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)EC_KEY_new_method(0);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = EC_GROUP_new_by_curve_name(param_1);
    plVar2[3] = lVar3;
    if (lVar3 != 0) {
      if (*(code **)(*plVar2 + 0x28) == (code *)0x0) {
        return plVar2;
      }
      iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2,lVar3);
      if (iVar1 != 0) {
        return plVar2;
      }
    }
    EC_KEY_free(plVar2);
  }
  return (longlong *)0x0;
}



// FUNCTION 143d17ba0 EC_KEY_oct2key body=156 status=ok
// SIG undefined EC_KEY_oct2key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_KEY_oct2key(longlong param_1,byte *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143d17bba;
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    if (lVar2 == 0) {
      lVar2 = EC_POINT_new();
      *(longlong *)(param_1 + 0x20) = lVar2;
      if (lVar2 == 0) {
        return 0;
      }
    }
    iVar1 = EC_POINT_oct2point(*(undefined8 *)(param_1 + 0x18),lVar2,param_2,param_3,param_4,uVar3);
    if (iVar1 != 0) {
      if ((*(byte *)**(undefined8 **)(param_1 + 0x18) & 2) == 0) {
        *(uint *)(param_1 + 0x34) = *param_2 & 0xfffffffe;
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143d17c40 EC_KEY_oct2priv body=91 status=ok
// SIG undefined EC_KEY_oct2priv(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_KEY_oct2priv(longlong param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  if ((*(longlong **)(param_1 + 0x18) != (longlong *)0x0) &&
     (lVar1 = **(longlong **)(param_1 + 0x18), lVar1 != 0)) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x140);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d17c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)();
      return uVar2;
    }
    ERR_put_error(0x10,0xff,0x42,"crypto\\ec\\ec_key.c",0x239);
  }
  return 0;
}



// FUNCTION 143d17ca0 EC_KEY_priv2buf body=266 status=ok
// SIG undefined EC_KEY_priv2buf(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong EC_KEY_priv2buf(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143d17cb6;
  if ((*(longlong **)(param_1 + 0x18) == (longlong *)0x0) ||
     (lVar2 = **(longlong **)(param_1 + 0x18), lVar2 == 0)) {
    return 0;
  }
  pcVar1 = *(code **)(lVar2 + 0x138);
  if (pcVar1 == (code *)0x0) {
    ERR_put_error(0x10,0x100,0x42,"crypto\\ec\\ec_key.c",0x216,0x143d17cb6);
    return 0;
  }
  lVar2 = (*pcVar1)(param_1,0,0);
  if (lVar2 != 0) {
    lVar3 = CRYPTO_malloc(lVar2,"crypto\\ec\\ec_key.c",599);
    if (lVar3 == 0) {
      ERR_put_error(0x10,0x117,0x41,"crypto\\ec\\ec_key.c",600,uVar4);
    }
    else {
      lVar2 = EC_KEY_priv2oct(param_1,lVar3,lVar2);
      if (lVar2 != 0) {
        *param_2 = lVar3;
        return lVar2;
      }
      CRYPTO_free(lVar3,"crypto\\ec\\ec_key.c",0x25d);
    }
    return 0;
  }
  return 0;
}



// FUNCTION 143d17db0 EC_KEY_priv2oct body=91 status=ok
// SIG undefined EC_KEY_priv2oct(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_KEY_priv2oct(longlong param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  if ((*(longlong **)(param_1 + 0x18) != (longlong *)0x0) &&
     (lVar1 = **(longlong **)(param_1 + 0x18), lVar1 != 0)) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x138);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d17e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)();
      return uVar2;
    }
    ERR_put_error(0x10,0x100,0x42,"crypto\\ec\\ec_key.c",0x216);
  }
  return 0;
}



// FUNCTION 143d17e10 FUN_143d17e10 body=4 status=ok
// SIG undefined FUN_143d17e10(void)

void FUN_143d17e10(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | param_2;
  return;
}



// FUNCTION 143d17e20 EC_KEY_set_group body=97 status=ok
// SIG undefined EC_KEY_set_group(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong EC_KEY_set_group(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if (*(code **)(*param_1 + 0x28) != (code *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x28))();
    if ((int)uVar1 == 0) {
      return uVar1;
    }
  }
  EC_GROUP_free(param_1[3]);
  lVar2 = EC_GROUP_dup(param_2);
  param_1[3] = lVar2;
  return (ulonglong)(lVar2 != 0);
}



// FUNCTION 143d17e90 EC_KEY_up_ref body=21 status=ok
// SIG undefined EC_KEY_up_ref(void)

bool EC_KEY_up_ref(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x38);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return 1 < iVar2 + 1;
}



// FUNCTION 143d17eb0 ec_key_simple_check_key body=614 status=ok
// SIG undefined ec_key_simple_check_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ec_key_simple_check_key(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar6;
  undefined8 uVar5;
  undefined8 uVar7;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar7 = 0x143d17eca;
  lVar3 = 0;
  lVar4 = 0;
  if (((param_1 == 0) || (*(longlong *)(param_1 + 0x18) == 0)) ||
     (*(longlong *)(param_1 + 0x20) == 0)) {
    ERR_put_error(0x10,0x102,0x43,"crypto\\ec\\ec_key.c",0x116,0x143d17eca);
    return 0;
  }
  iVar1 = EC_POINT_is_at_infinity();
  if (iVar1 != 0) {
    ERR_put_error(0x10,0x102,0x6a,"crypto\\ec\\ec_key.c",CONCAT44(uVar6,0x11b),uVar7);
    lVar4 = lVar3;
    lVar2 = lVar3;
    goto LAB_143d180c9;
  }
  lVar2 = BN_CTX_new();
  if ((lVar2 == 0) || (lVar4 = EC_POINT_new(*(undefined8 *)(param_1 + 0x18)), lVar4 == 0))
  goto LAB_143d180c9;
  iVar1 = EC_POINT_is_on_curve
                    (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),lVar2);
  if (iVar1 < 1) {
    ERR_put_error(0x10,0x102,0x6b,"crypto\\ec\\ec_key.c",CONCAT44(uVar6,0x126),uVar7);
    lVar3 = 0;
    goto LAB_143d180c9;
  }
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
  iVar1 = BN_is_zero(uVar7);
  if (iVar1 == 0) {
    iVar1 = EC_POINT_mul(*(undefined8 *)(param_1 + 0x18),lVar4,0,*(undefined8 *)(param_1 + 0x20),
                         uVar7,lVar2);
    if (iVar1 == 0) {
      uVar5 = 0x130;
      uVar7 = 0x10;
    }
    else {
      iVar1 = EC_POINT_is_at_infinity(*(undefined8 *)(param_1 + 0x18),lVar4);
      if (iVar1 != 0) {
        if (*(longlong *)(param_1 + 0x28) != 0) {
          iVar1 = BN_cmp(*(longlong *)(param_1 + 0x28),uVar7);
          if (-1 < iVar1) {
            uVar5 = 0x13d;
            goto LAB_143d1801f;
          }
          uVar6 = 0;
          iVar1 = EC_POINT_mul(*(undefined8 *)(param_1 + 0x18),lVar4,*(undefined8 *)(param_1 + 0x28)
                               ,0,0,lVar2);
          if (iVar1 == 0) {
            ERR_put_error(0x10,0x102,0x10,"crypto\\ec\\ec_key.c",CONCAT44(uVar6,0x142));
            goto LAB_143d180c9;
          }
          iVar1 = EC_POINT_cmp(*(undefined8 *)(param_1 + 0x18),lVar4,*(undefined8 *)(param_1 + 0x20)
                               ,lVar2);
          if (iVar1 != 0) {
            ERR_put_error(0x10,0x102,0x7b,"crypto\\ec\\ec_key.c",CONCAT44(uVar6,0x146));
            goto LAB_143d180c9;
          }
        }
        lVar3 = 1;
        goto LAB_143d180c9;
      }
      uVar5 = 0x134;
LAB_143d1801f:
      uVar7 = 0x82;
    }
  }
  else {
    uVar5 = 300;
    uVar7 = 0x7a;
  }
  ERR_put_error(0x10,0x102,uVar7,"crypto\\ec\\ec_key.c",uVar5);
LAB_143d180c9:
  BN_CTX_free(lVar2);
  EC_POINT_free(lVar4);
  return lVar3;
}



// FUNCTION 143d18120 ec_key_simple_generate_key body=259 status=ok
// SIG undefined ec_key_simple_generate_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ec_key_simple_generate_key(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uchar *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = 0;
  lVar2 = BN_CTX_new();
  lVar3 = lVar6;
  lVar5 = lVar6;
  if ((lVar2 != 0) &&
     (((lVar3 = *(longlong *)(param_1 + 0x28), lVar3 != 0 ||
       (lVar3 = BN_new(), lVar5 = 0, lVar3 != 0)) &&
      (puVar4 = AK::WriteBytesMem::Bytes(*(WriteBytesMem **)(param_1 + 0x18)), lVar5 = lVar6,
      puVar4 != (uchar *)0x0)))) {
    do {
      iVar1 = BN_priv_rand_range(lVar3,puVar4);
      lVar5 = 0;
      if (iVar1 == 0) goto LAB_143d181e9;
      iVar1 = BN_is_zero(lVar3);
    } while (iVar1 != 0);
    lVar5 = *(longlong *)(param_1 + 0x20);
    if (((lVar5 != 0) || (lVar5 = EC_POINT_new(*(undefined8 *)(param_1 + 0x18)), lVar5 != 0)) &&
       (iVar1 = EC_POINT_mul(*(undefined8 *)(param_1 + 0x18),lVar5,lVar3,0,0,lVar2), lVar6 = 0,
       iVar1 != 0)) {
      *(longlong *)(param_1 + 0x28) = lVar3;
      lVar6 = 1;
      *(longlong *)(param_1 + 0x20) = lVar5;
    }
  }
LAB_143d181e9:
  if (*(longlong *)(param_1 + 0x20) == 0) {
    EC_POINT_free(lVar5);
  }
  if (*(longlong *)(param_1 + 0x28) != lVar3) {
    BN_free(lVar3);
  }
  BN_CTX_free(lVar2);
  return lVar6;
}



// FUNCTION 143d18230 ec_key_simple_generate_public_key body=50 status=ok
// SIG undefined ec_key_simple_generate_public_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ec_key_simple_generate_public_key(longlong param_1)

{
  EC_POINT_mul(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
               *(undefined8 *)(param_1 + 0x28),0,0,0,0x143d1823a);
  return;
}



// FUNCTION 143d18270 ec_key_simple_oct2priv body=199 status=ok
// SIG undefined ec_key_simple_oct2priv(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ec_key_simple_oct2priv(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143d18285;
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 == 0) {
    lVar1 = BN_secure_new();
    *(longlong *)(param_1 + 0x28) = lVar1;
    if (lVar1 == 0) {
      ERR_put_error(0x10,0x103,0x41,"crypto\\ec\\ec_key.c",0x244,uVar2);
      return 0;
    }
  }
  lVar1 = BN_bin2bn(param_2,param_3,lVar1);
  *(longlong *)(param_1 + 0x28) = lVar1;
  if (lVar1 == 0) {
    ERR_put_error(0x10,0x103,3,"crypto\\ec\\ec_key.c",0x249,uVar2);
    return 0;
  }
  return 1;
}



// FUNCTION 143d18340 ec_key_simple_priv2oct body=157 status=ok
// SIG undefined ec_key_simple_priv2oct(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ec_key_simple_priv2oct(longlong param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143d1835a;
  iVar1 = EC_GROUP_order_bits(*(undefined8 *)(param_1 + 0x18));
  iVar1 = (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
  uVar2 = (ulonglong)iVar1;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    if (param_2 == 0) {
      return uVar2;
    }
    if (uVar2 <= param_3) {
      iVar1 = BN_bn2binpad(*(longlong *)(param_1 + 0x28),param_2,iVar1);
      if (iVar1 != -1) {
        return uVar2;
      }
      ERR_put_error(0x10,0x104,100,"crypto\\ec\\ec_key.c",0x22d,uVar3);
    }
  }
  return 0;
}



// FUNCTION 143d183e0 ossl_ec_key_gen body=31 status=ok
// SIG undefined ossl_ec_key_gen(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ossl_ec_key_gen(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143d183f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x150))();
  return;
}



// FUNCTION 143d18400 RSA_bits body=26 status=ok
// SIG undefined RSA_bits(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RSA_bits(longlong param_1)

{
  BN_num_bits(*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 143d18420 RSA_flags body=16 status=ok
// SIG undefined RSA_flags(void)

undefined4 RSA_flags(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x48);
}



// FUNCTION 143d18430 RSA_private_decrypt body=25 status=ok
// SIG undefined RSA_private_decrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RSA_private_decrypt(void)

{
  longlong in_R9;
  
                    /* WARNING: Could not recover jumptable at 0x000143d18445. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(in_R9 + 8) + 0x20))();
  return;
}



// FUNCTION 143d18450 RSA_private_encrypt body=25 status=ok
// SIG undefined RSA_private_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RSA_private_encrypt(void)

{
  longlong in_R9;
  
                    /* WARNING: Could not recover jumptable at 0x000143d18465. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(in_R9 + 8) + 0x18))();
  return;
}



// FUNCTION 143d18470 RSA_public_decrypt body=25 status=ok
// SIG undefined RSA_public_decrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RSA_public_decrypt(void)

{
  longlong in_R9;
  
                    /* WARNING: Could not recover jumptable at 0x000143d18485. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(in_R9 + 8) + 0x10))();
  return;
}



// FUNCTION 143d18490 RSA_public_encrypt body=25 status=ok
// SIG undefined RSA_public_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RSA_public_encrypt(void)

{
  longlong in_R9;
  
                    /* WARNING: Could not recover jumptable at 0x000143d184a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(in_R9 + 8) + 8))();
  return;
}



// FUNCTION 143d184b0 RSA_setup_blinding body=639 status=ok
// SIG undefined RSA_setup_blinding(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong RSA_setup_blinding(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar13;
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  lVar11 = 0;
  lVar4 = param_2;
  if ((param_2 == 0) && (lVar4 = BN_CTX_new(), lVar4 == 0)) {
    return 0;
  }
  BN_CTX_start(lVar4);
  lVar5 = BN_CTX_get(lVar4);
  if (lVar5 == 0) {
    ERR_put_error(4,0x88,0x41,"crypto\\rsa\\rsa_crpt.c",CONCAT44(uVar13,0x7e));
    lVar5 = 0;
    goto LAB_143d186fa;
  }
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 == 0) {
    lVar10 = *(longlong *)(param_1 + 0x28);
    lVar12 = 0;
    lVar5 = lVar11;
    if (((lVar10 != 0) && (lVar1 = *(longlong *)(param_1 + 0x30), lVar1 != 0)) &&
       (lVar2 = *(longlong *)(param_1 + 0x38), lVar5 = lVar12, lVar2 != 0)) {
      BN_CTX_start(lVar4);
      uVar6 = BN_CTX_get(lVar4);
      uVar7 = BN_CTX_get(lVar4);
      lVar8 = BN_CTX_get(lVar4);
      lVar5 = lVar11;
      if (lVar8 != 0) {
        uVar9 = BN_value_one();
        iVar3 = BN_sub(uVar7,lVar1,uVar9);
        if (iVar3 != 0) {
          uVar9 = BN_value_one();
          iVar3 = BN_sub(lVar8,lVar2,uVar9);
          lVar5 = lVar12;
          if ((iVar3 != 0) && (iVar3 = BN_mul(uVar6,uVar7,lVar8,lVar4), iVar3 != 0)) {
            lVar5 = BN_mod_inverse(0,lVar10,uVar6,lVar4);
          }
        }
      }
      BN_CTX_end(lVar4);
      if (lVar5 != 0) goto LAB_143d1864a;
    }
    ERR_put_error(4,0x88,0x8c,"crypto\\rsa\\rsa_crpt.c",CONCAT44(uVar13,0x85));
  }
  else {
LAB_143d1864a:
    lVar10 = BN_new();
    if (lVar10 == 0) {
      ERR_put_error(4,0x88,0x41,"crypto\\rsa\\rsa_crpt.c",CONCAT44(uVar13,0x90));
    }
    else {
      BN_with_flags(lVar10,*(undefined8 *)(param_1 + 0x18),4);
      uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x30);
      lVar11 = BN_BLINDING_create_param(0,lVar5,lVar10,lVar4,uVar6,*(undefined8 *)(param_1 + 0x78));
      uVar13 = (undefined4)((ulonglong)uVar6 >> 0x20);
      BN_free(lVar10);
      if (lVar11 == 0) {
        ERR_put_error(4,0x88,3,"crypto\\rsa\\rsa_crpt.c",CONCAT44(uVar13,0x9b));
      }
      else {
        BN_BLINDING_set_current_thread(lVar11);
      }
    }
  }
LAB_143d186fa:
  BN_CTX_end(lVar4);
  if (lVar4 != param_2) {
    BN_CTX_free(lVar4);
  }
  if (lVar5 != *(longlong *)(param_1 + 0x20)) {
    BN_free(lVar5);
  }
  return lVar11;
}



// FUNCTION 143d18730 RSA_size body=39 status=ok
// SIG undefined RSA_size(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int RSA_size(longlong param_1)

{
  int iVar1;
  
  iVar1 = BN_num_bits(*(undefined8 *)(param_1 + 0x18));
  return (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
}



// FUNCTION 143d18760 DH_free body=218 status=ok
// SIG undefined DH_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DH_free(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x68);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 2) {
      if ((*(longlong *)(param_1 + 0x78) != 0) &&
         (pcVar3 = *(code **)(*(longlong *)(param_1 + 0x78) + 0x28), pcVar3 != (code *)0x0)) {
        (*pcVar3)();
      }
      ENGINE_finish(*(undefined8 *)(param_1 + 0x80));
      CRYPTO_free_ex_data(6,param_1,param_1 + 0x70);
      CRYPTO_THREAD_lock_free(*(undefined8 *)(param_1 + 0x88));
      BN_clear_free(*(undefined8 *)(param_1 + 8));
      BN_clear_free(*(undefined8 *)(param_1 + 0x10));
      BN_clear_free(*(undefined8 *)(param_1 + 0x40));
      BN_clear_free(*(undefined8 *)(param_1 + 0x48));
      CRYPTO_free(*(undefined8 *)(param_1 + 0x50),"crypto\\dh\\dh_lib.c",0x7b);
      BN_clear_free(*(undefined8 *)(param_1 + 0x60));
      BN_clear_free(*(undefined8 *)(param_1 + 0x20));
      BN_clear_free(*(undefined8 *)(param_1 + 0x28));
      CRYPTO_free(param_1,"crypto\\dh\\dh_lib.c",0x7f);
    }
  }
  return;
}



// FUNCTION 143d18840 DH_get0_key body=25 status=ok
// SIG undefined DH_get0_key(void)

void DH_get0_key(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x20);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 143d18860 DH_get0_pqg body=37 status=ok
// SIG undefined DH_get0_pqg(void)

void DH_get0_pqg(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 8);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x40);
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(param_1 + 0x10);
  }
  return;
}



// FUNCTION 143d18890 DH_new body=24 status=ok
// SIG undefined DH_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DH_new(void)

{
  DH_new_method(0);
  return;
}



// FUNCTION 143d188b0 DH_new_method body=571 status=ok
// SIG undefined DH_new_method(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong DH_new_method(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0x143d188c0;
  lVar4 = CRYPTO_zalloc(0x90,"crypto\\dh\\dh_lib.c",0x2c);
  if (lVar4 == 0) {
    ERR_put_error(5,0x69,0x41,"crypto\\dh\\dh_lib.c",0x2f,uVar8);
    return 0;
  }
  *(undefined4 *)(lVar4 + 0x68) = 1;
  lVar5 = CRYPTO_THREAD_lock_new();
  *(longlong *)(lVar4 + 0x88) = lVar5;
  if (lVar5 == 0) {
    ERR_put_error(5,0x69,0x41,"crypto\\dh\\dh_lib.c",0x36,uVar8);
    uVar8 = 0x37;
    goto LAB_143d18a45;
  }
  lVar5 = DH_get_default_method();
  *(longlong *)(lVar4 + 0x78) = lVar5;
  *(undefined4 *)(lVar4 + 0x30) = *(undefined4 *)(lVar5 + 0x30);
  if (param_1 == 0) {
    param_1 = ENGINE_get_default_DH();
LAB_143d18a69:
    *(longlong *)(lVar4 + 0x80) = param_1;
    if (param_1 != 0) {
      lVar5 = USignificanceManager::GetWorld(param_1);
      *(longlong *)(lVar4 + 0x78) = lVar5;
      if (lVar5 == 0) {
        uVar7 = 0x49;
        goto LAB_143d1897d;
      }
    }
    *(undefined4 *)(lVar4 + 0x30) = *(undefined4 *)(*(longlong *)(lVar4 + 0x78) + 0x30);
    iVar3 = CRYPTO_new_ex_data(6,lVar4,lVar4 + 0x70);
    if (iVar3 != 0) {
      pcVar2 = *(code **)(*(longlong *)(lVar4 + 0x78) + 0x20);
      if (pcVar2 == (code *)0x0) {
        return lVar4;
      }
      iVar3 = (*pcVar2)(lVar4);
      if (iVar3 != 0) {
        return lVar4;
      }
      uVar7 = 0x55;
      uVar6 = 0x46;
      goto LAB_143d18983;
    }
  }
  else {
    iVar3 = ENGINE_init(param_1);
    if (iVar3 != 0) goto LAB_143d18a69;
    uVar7 = 0x40;
LAB_143d1897d:
    uVar6 = 0x26;
LAB_143d18983:
    ERR_put_error(5,0x69,uVar6,"crypto\\dh\\dh_lib.c",uVar7);
  }
  LOCK();
  piVar1 = (int *)(lVar4 + 0x68);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (1 < iVar3) {
    return 0;
  }
  if ((*(longlong *)(lVar4 + 0x78) != 0) &&
     (pcVar2 = *(code **)(*(longlong *)(lVar4 + 0x78) + 0x28), pcVar2 != (code *)0x0)) {
    (*pcVar2)(lVar4);
  }
  ENGINE_finish(*(undefined8 *)(lVar4 + 0x80));
  CRYPTO_free_ex_data(6,lVar4,lVar4 + 0x70);
  CRYPTO_THREAD_lock_free(*(undefined8 *)(lVar4 + 0x88));
  BN_clear_free(*(undefined8 *)(lVar4 + 8));
  BN_clear_free(*(undefined8 *)(lVar4 + 0x10));
  BN_clear_free(*(undefined8 *)(lVar4 + 0x40));
  BN_clear_free(*(undefined8 *)(lVar4 + 0x48));
  CRYPTO_free(*(undefined8 *)(lVar4 + 0x50),"crypto\\dh\\dh_lib.c",0x7b);
  BN_clear_free(*(undefined8 *)(lVar4 + 0x60));
  BN_clear_free(*(undefined8 *)(lVar4 + 0x20));
  BN_clear_free(*(undefined8 *)(lVar4 + 0x28));
  uVar8 = 0x7f;
LAB_143d18a45:
  CRYPTO_free(lVar4,"crypto\\dh\\dh_lib.c",uVar8);
  return 0;
}



// FUNCTION 143d18af0 DH_security_bits body=81 status=ok
// SIG undefined DH_security_bits(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DH_security_bits(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(longlong *)(param_1 + 0x40) == 0) {
    iVar1 = -1;
    if (*(int *)(param_1 + 0x18) != 0) {
      iVar1 = *(int *)(param_1 + 0x18);
    }
  }
  else {
    iVar1 = BN_num_bits();
  }
  uVar2 = BN_num_bits(*(undefined8 *)(param_1 + 8));
  FUN_143d0f270(uVar2,iVar1);
  return;
}



// FUNCTION 143d18b50 DH_set0_key body=90 status=ok
// SIG undefined DH_set0_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 DH_set0_key(longlong param_1,longlong param_2,longlong param_3)

{
  if (param_2 != 0) {
    BN_free(*(undefined8 *)(param_1 + 0x20));
    *(longlong *)(param_1 + 0x20) = param_2;
  }
  if (param_3 != 0) {
    BN_free(*(undefined8 *)(param_1 + 0x28));
    *(longlong *)(param_1 + 0x28) = param_3;
  }
  return 1;
}



// FUNCTION 143d18bb0 DH_set0_pqg body=163 status=ok
// SIG undefined DH_set0_pqg(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 DH_set0_pqg(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (((*(longlong *)(param_1 + 8) == 0) && (param_2 == 0)) ||
     ((*(longlong *)(param_1 + 0x10) == 0 && (param_4 == 0)))) {
    uVar2 = 0;
  }
  else {
    if (param_2 != 0) {
      BN_free();
      *(longlong *)(param_1 + 8) = param_2;
    }
    if (param_3 != 0) {
      BN_free(*(undefined8 *)(param_1 + 0x40));
      *(longlong *)(param_1 + 0x40) = param_3;
    }
    if (param_4 != 0) {
      BN_free(*(undefined8 *)(param_1 + 0x10));
      *(longlong *)(param_1 + 0x10) = param_4;
    }
    if (param_3 != 0) {
      uVar1 = BN_num_bits(param_3);
      *(undefined4 *)(param_1 + 0x18) = uVar1;
    }
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 143d18c60 DH_size body=39 status=ok
// SIG undefined DH_size(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int DH_size(longlong param_1)

{
  int iVar1;
  
  iVar1 = BN_num_bits(*(undefined8 *)(param_1 + 8));
  return (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
}



// FUNCTION 143d18c90 DH_up_ref body=21 status=ok
// SIG undefined DH_up_ref(void)

bool DH_up_ref(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x68);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return 1 < iVar2 + 1;
}



// FUNCTION 143d18cb0 FUN_143d18cb0 body=120 status=ok
// SIG undefined FUN_143d18cb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_143d18cb0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = DH_new();
  if (lVar1 != 0) {
    uVar2 = BN_dup(&PTR_DAT_145d8b2d0);
    *(undefined8 *)(lVar1 + 8) = uVar2;
    uVar2 = BN_dup(&PTR_DAT_145d8b2e8);
    *(undefined8 *)(lVar1 + 0x10) = uVar2;
    lVar3 = BN_dup(&PTR_DAT_145d8b300);
    *(longlong *)(lVar1 + 0x40) = lVar3;
    if (((*(longlong *)(lVar1 + 8) != 0) && (lVar3 != 0)) && (*(longlong *)(lVar1 + 0x10) != 0)) {
      return lVar1;
    }
    DH_free(lVar1);
  }
  return 0;
}



// FUNCTION 143d18d30 FUN_143d18d30 body=120 status=ok
// SIG undefined FUN_143d18d30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_143d18d30(void)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = DH_new();
  if (lVar1 != 0) {
    uVar2 = BN_dup(&PTR_DAT_145d8b318);
    *(undefined8 *)(lVar1 + 8) = uVar2;
    uVar2 = BN_dup(&PTR_DAT_145d8b330);
    *(undefined8 *)(lVar1 + 0x10) = uVar2;
    lVar3 = BN_dup(&PTR_DAT_145d8b348);
    *(longlong *)(lVar1 + 0x40) = lVar3;
    if (((*(longlong *)(lVar1 + 8) != 0) && (lVar3 != 0)) && (*(longlong *)(lVar1 + 0x10) != 0)) {
      return lVar1;
    }
    DH_free(lVar1);
  }
  return 0;
}



// FUNCTION 143d18db0 FUN_143d18db0 body=120 status=ok
// SIG undefined FUN_143d18db0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_143d18db0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = DH_new();
  if (lVar1 != 0) {
    uVar2 = BN_dup(&PTR_DAT_145d8b360);
    *(undefined8 *)(lVar1 + 8) = uVar2;
    uVar2 = BN_dup(&PTR_DAT_145d8b378);
    *(undefined8 *)(lVar1 + 0x10) = uVar2;
    lVar3 = BN_dup(&PTR_DAT_145d8b390);
    *(longlong *)(lVar1 + 0x40) = lVar3;
    if (((*(longlong *)(lVar1 + 8) != 0) && (lVar3 != 0)) && (*(longlong *)(lVar1 + 0x10) != 0)) {
      return lVar1;
    }
    DH_free(lVar1);
  }
  return 0;
}



// FUNCTION 143d18e30 conf_add_ssl_module body=43 status=ok
// SIG undefined conf_add_ssl_module(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void conf_add_ssl_module(void)

{
  CONF_module_add("ssl_conf",ssl_module_init,ssl_module_free);
  return;
}



// FUNCTION 143d18e60 conf_ssl_get body=33 status=ok
// SIG undefined conf_ssl_get(void)

undefined8 conf_ssl_get(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(DAT_146bcb490 + param_1 * 0x18);
  *param_2 = *puVar1;
  *param_3 = puVar1[2];
  return puVar1[1];
}



// FUNCTION 143d18e90 conf_ssl_get_cmd body=19 status=ok
// SIG undefined conf_ssl_get_cmd(void)

void conf_ssl_get_cmd(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_3 = *(undefined8 *)(param_1 + param_2 * 0x10);
  *param_4 = *(undefined8 *)(param_1 + 8 + param_2 * 0x10);
  return;
}



// FUNCTION 143d18eb0 conf_ssl_name_find body=131 status=ok
// SIG undefined conf_ssl_name_find(void)

undefined8 conf_ssl_name_find(longlong param_1,ulonglong *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  if ((param_1 != 0) && (uVar5 = 0, puVar6 = DAT_146bcb490, DAT_146bcb498 != 0)) {
    do {
      pcVar3 = (char *)*puVar6;
      lVar4 = param_1 - (longlong)pcVar3;
      do {
        cVar1 = *pcVar3;
        cVar2 = pcVar3[lVar4];
        if (cVar1 != cVar2) break;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) {
        *param_2 = uVar5;
        return 1;
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 3;
    } while (uVar5 < DAT_146bcb498);
  }
  return 0;
}



// FUNCTION 143d18f40 ssl_module_free body=300 status=ok
// SIG undefined ssl_module_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl_module_free(void)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if (DAT_146bcb490 != 0) {
    uVar3 = 0;
    if (DAT_146bcb498 != 0) {
      lVar5 = 0;
      do {
        lVar1 = DAT_146bcb490;
        CRYPTO_free(*(undefined8 *)(lVar5 + DAT_146bcb490),"crypto\\conf\\conf_ssl.c",0x31);
        uVar4 = 0;
        if (*(longlong *)(lVar5 + 0x10 + lVar1) != 0) {
          lVar2 = 0;
          do {
            CRYPTO_free(*(undefined8 *)(*(longlong *)(lVar5 + 8 + lVar1) + lVar2),
                        "crypto\\conf\\conf_ssl.c",0x33);
            CRYPTO_free(*(undefined8 *)(*(longlong *)(lVar5 + 8 + lVar1) + 8 + lVar2),
                        "crypto\\conf\\conf_ssl.c",0x34);
            uVar4 = uVar4 + 1;
            lVar2 = lVar2 + 0x10;
          } while (uVar4 < *(ulonglong *)(lVar5 + 0x10 + lVar1));
        }
        CRYPTO_free(*(undefined8 *)(lVar5 + 8 + lVar1),"crypto\\conf\\conf_ssl.c",0x36);
        uVar3 = uVar3 + 1;
        lVar5 = lVar5 + 0x18;
      } while (uVar3 < DAT_146bcb498);
    }
    CRYPTO_free(DAT_146bcb490,"crypto\\conf\\conf_ssl.c",0x38);
    DAT_146bcb490 = 0;
    DAT_146bcb498 = 0;
  }
  return;
}



// FUNCTION 143d19070 ssl_module_init body=725 status=ok
// SIG undefined ssl_module_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_module_init(WriteBytesMem *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  uchar *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  char *pcVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  longlong local_res18;
  
  puVar5 = AK::WriteBytesMem::Bytes(param_1);
  lVar6 = NCONF_get_section(param_2,puVar5);
  iVar3 = OPENSSL_sk_num(lVar6);
  if (iVar3 < 1) {
    if (lVar6 == 0) {
      uVar4 = 0x48;
      uVar14 = 0x78;
    }
    else {
      uVar4 = 0x4a;
      uVar14 = 0x77;
    }
    ERR_put_error(0xe,0x7b,uVar14,"crypto\\conf\\conf_ssl.c",uVar4);
    ERR_add_error_data(2,"section=",puVar5);
    ssl_module_free(param_1);
    uVar11 = 0;
  }
  else {
    iVar3 = OPENSSL_sk_num(lVar6);
    uVar12 = (ulonglong)iVar3;
    ssl_module_free(param_1);
    DAT_146bcb490 = CRYPTO_zalloc(uVar12 * 0x18,"crypto\\conf\\conf_ssl.c",0x50);
    uVar15 = 0;
    DAT_146bcb498 = uVar12;
    if (uVar12 != 0) {
      local_res18 = 0;
      do {
        plVar1 = (longlong *)(local_res18 + DAT_146bcb490);
        lVar7 = OPENSSL_sk_value(lVar6,uVar15 & 0xffffffff);
        lVar8 = NCONF_get_section(param_2,*(undefined8 *)(lVar7 + 0x10));
        iVar3 = OPENSSL_sk_num(lVar8);
        if (iVar3 < 1) {
          if (lVar8 == 0) {
            uVar14 = 0x76;
            uVar4 = 0x5a;
          }
          else {
            uVar4 = 0x5d;
            uVar14 = 0x75;
          }
          ERR_put_error(0xe,0x7b,uVar14,"crypto\\conf\\conf_ssl.c",uVar4);
          ERR_add_error_data(4,"name=",*(undefined8 *)(lVar7 + 8),", value=",
                             *(undefined8 *)(lVar7 + 0x10));
LAB_143d1931e:
          ssl_module_free(param_1);
          return 0;
        }
        lVar7 = CRYPTO_strdup(*(undefined8 *)(lVar7 + 8),"crypto\\conf\\conf_ssl.c",0x61);
        *plVar1 = lVar7;
        if (lVar7 == 0) goto LAB_143d1931e;
        iVar3 = OPENSSL_sk_num(lVar8);
        uVar12 = (ulonglong)iVar3;
        lVar7 = CRYPTO_zalloc(uVar12 << 4,"crypto\\conf\\conf_ssl.c",0x65);
        plVar1[1] = lVar7;
        if (lVar7 == 0) goto LAB_143d1931e;
        uVar13 = 0;
        plVar1[2] = uVar12;
        if (uVar12 != 0) {
          lVar7 = 0;
          do {
            lVar9 = OPENSSL_sk_value(lVar8,uVar13 & 0xffffffff);
            lVar2 = plVar1[1];
            pcVar10 = _guard_xfg_dispatch_icall_nop(*(char **)(lVar9 + 8),0x2e);
            if (pcVar10 == (char *)0x0) {
              pcVar10 = *(char **)(lVar9 + 8);
            }
            else {
              pcVar10 = pcVar10 + 1;
            }
            uVar11 = CRYPTO_strdup(pcVar10,"crypto\\conf\\conf_ssl.c",0x74);
            *(undefined8 *)(lVar2 + lVar7) = uVar11;
            lVar9 = CRYPTO_strdup(*(undefined8 *)(lVar9 + 0x10),"crypto\\conf\\conf_ssl.c",0x75);
            *(longlong *)(lVar2 + 8 + lVar7) = lVar9;
            if ((*(longlong *)(lVar2 + lVar7) == 0) || (lVar9 == 0)) goto LAB_143d1931e;
            uVar13 = uVar13 + 1;
            lVar7 = lVar7 + 0x10;
          } while (uVar13 < uVar12);
        }
        uVar15 = uVar15 + 1;
        local_res18 = local_res18 + 0x18;
      } while (uVar15 < DAT_146bcb498);
    }
    uVar11 = 1;
  }
  return uVar11;
}



// FUNCTION 143d19350 EVP_PKEY_keygen body=235 status=ok
// SIG undefined EVP_PKEY_keygen(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int EVP_PKEY_keygen(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (((param_1 != (longlong *)0x0) && (*param_1 != 0)) && (*(longlong *)(*param_1 + 0x38) != 0)) {
    if ((int)param_1[4] == 4) {
      if (param_2 != (longlong *)0x0) {
        lVar2 = *param_2;
        if (lVar2 == 0) {
          lVar2 = EVP_PKEY_new();
          *param_2 = lVar2;
          if (lVar2 == 0) {
            return -1;
          }
        }
        iVar1 = (**(code **)(*param_1 + 0x38))(param_1,lVar2);
        if (iVar1 < 1) {
          EVP_PKEY_free(*param_2);
          *param_2 = 0;
        }
        return iVar1;
      }
    }
    else {
      ERR_put_error(6,0x92,0x97,"crypto\\evp\\pmeth_gn.c",0x60,0x143d19360);
    }
    return -1;
  }
  ERR_put_error(6,0x92,0x96,"crypto\\evp\\pmeth_gn.c",0x5c,0x143d19360);
  return -2;
}



// FUNCTION 143d19440 EVP_PKEY_keygen_init body=127 status=ok
// SIG undefined EVP_PKEY_keygen_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_keygen_init(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
     (*(longlong *)(lVar1 + 0x38) == 0)) {
    ERR_put_error(6,0x93,0x96,"crypto\\evp\\pmeth_gn.c",0x4a,0x143d1944c);
    uVar2 = 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 4;
    if (*(code **)(lVar1 + 0x30) == (code *)0x0) {
      return 1;
    }
    uVar2 = (**(code **)(lVar1 + 0x30))();
    if ((int)uVar2 < 1) {
      *(undefined4 *)(param_1 + 4) = 0;
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 143d194c0 EVP_PKEY_new_mac_key body=311 status=ok
// SIG undefined EVP_PKEY_new_mac_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong EVP_PKEY_new_mac_key
                   (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0x143d194da;
  lVar4 = 0;
  plVar3 = (longlong *)EVP_PKEY_CTX_new_id();
  if (plVar3 == (longlong *)0x0) {
    return 0;
  }
  lVar1 = *plVar3;
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x38) == 0)) {
    uVar7 = 0x4a;
    uVar5 = 0x93;
LAB_143d195c0:
    uVar6 = 0x96;
  }
  else {
    *(undefined4 *)(plVar3 + 4) = 4;
    if ((*(code **)(lVar1 + 0x30) != (code *)0x0) &&
       (iVar2 = (**(code **)(lVar1 + 0x30))(plVar3), iVar2 < 1)) {
      *(undefined4 *)(plVar3 + 4) = 0;
      goto LAB_143d195d7;
    }
    iVar2 = EVP_PKEY_CTX_ctrl(plVar3,0xffffffff,4,6,param_4,param_3);
    if (iVar2 < 1) goto LAB_143d195d7;
    uVar8 = param_3;
    if ((*plVar3 == 0) || (*(longlong *)(*plVar3 + 0x38) == 0)) {
      uVar7 = 0x5c;
      uVar5 = 0x92;
      goto LAB_143d195c0;
    }
    if ((int)plVar3[4] == 4) {
      lVar4 = EVP_PKEY_new();
      if ((lVar4 != 0) && (iVar2 = (**(code **)(*plVar3 + 0x38))(plVar3,lVar4), iVar2 < 1)) {
        EVP_PKEY_free(lVar4);
        lVar4 = 0;
      }
      goto LAB_143d195d7;
    }
    uVar5 = 0x92;
    uVar7 = 0x60;
    uVar6 = 0x97;
  }
  ERR_put_error(6,uVar5,uVar6,"crypto\\evp\\pmeth_gn.c",uVar7,uVar8);
LAB_143d195d7:
  EVP_PKEY_CTX_free(plVar3);
  return lVar4;
}



// FUNCTION 143d19600 EVP_PKEY_paramgen body=283 status=ok
// SIG undefined EVP_PKEY_paramgen(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int EVP_PKEY_paramgen(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143d19610;
  if (((param_1 != (longlong *)0x0) && (*param_1 != 0)) && (*(longlong *)(*param_1 + 0x28) != 0)) {
    if ((int)param_1[4] == 2) {
      if (param_2 != (longlong *)0x0) {
        lVar2 = *param_2;
        if (lVar2 == 0) {
          lVar2 = EVP_PKEY_new();
          *param_2 = lVar2;
          if (lVar2 == 0) {
            ERR_put_error(6,0x94,0x41,"crypto\\evp\\pmeth_gn.c",0x39,uVar3);
            return -1;
          }
        }
        iVar1 = (**(code **)(*param_1 + 0x28))(param_1,lVar2);
        if (iVar1 < 1) {
          EVP_PKEY_free(*param_2);
          *param_2 = 0;
        }
        return iVar1;
      }
    }
    else {
      ERR_put_error(6,0x94,0x97,"crypto\\evp\\pmeth_gn.c",0x2e,0x143d19610);
    }
    return -1;
  }
  ERR_put_error(6,0x94,0x96,"crypto\\evp\\pmeth_gn.c",0x29,0x143d19610);
  return -2;
}



// FUNCTION 143d19720 EVP_PKEY_paramgen_init body=127 status=ok
// SIG undefined EVP_PKEY_paramgen_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_paramgen_init(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
     (*(longlong *)(lVar1 + 0x28) == 0)) {
    ERR_put_error(6,0x95,0x96,"crypto\\evp\\pmeth_gn.c",0x18,0x143d1972c);
    uVar2 = 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 2;
    if (*(code **)(lVar1 + 0x20) == (code *)0x0) {
      return 1;
    }
    uVar2 = (**(code **)(lVar1 + 0x20))();
    if ((int)uVar2 < 1) {
      *(undefined4 *)(param_1 + 4) = 0;
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 143d197a0 evp_pkey_set_cb_translate body=32 status=ok
// SIG undefined evp_pkey_set_cb_translate(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void evp_pkey_set_cb_translate(undefined8 param_1,undefined8 param_2)

{
  FUN_143d0e640(param_1,trans_cb,param_2);
  return;
}



// FUNCTION 143d197c0 trans_cb body=62 status=ok
// SIG undefined trans_cb(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void trans_cb(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
          ::GetBoundProgramCounterForTimerManager(param_3);
  **(undefined4 **)(lVar1 + 0x40) = param_1;
  *(undefined4 *)(*(longlong *)(lVar1 + 0x40) + 4) = param_2;
                    /* WARNING: Could not recover jumptable at 0x000143d197fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x38))(lVar1);
  return;
}



// FUNCTION 143d19800 DH_check body=532 status=ok
// SIG undefined DH_check(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 DH_check(longlong param_1,uint *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0;
  uVar6 = 0;
  *param_2 = 0;
  lVar2 = BN_CTX_new();
  if (lVar2 == 0) {
    return 0;
  }
  BN_CTX_start(lVar2);
  uVar3 = BN_CTX_get(lVar2);
  lVar4 = BN_CTX_get(lVar2);
  if (lVar4 == 0) goto LAB_143d199eb;
  if (*(longlong *)(param_1 + 0x40) == 0) {
    iVar1 = BN_is_word(*(undefined8 *)(param_1 + 0x10),2);
    if (iVar1 == 0) {
      iVar1 = BN_is_word(*(undefined8 *)(param_1 + 0x10),5);
      if (iVar1 == 0) {
        *param_2 = *param_2 | 4;
      }
      else {
        lVar4 = BN_mod_word(*(undefined8 *)(param_1 + 8),10);
        uVar7 = uVar6;
        if (lVar4 == -1) goto LAB_143d199eb;
        if ((lVar4 - 3U & 0xfffffffffffffffb) != 0) {
          *param_2 = *param_2 | 8;
        }
      }
    }
    else {
      lVar4 = BN_mod_word(*(undefined8 *)(param_1 + 8),0x18);
      uVar7 = uVar6;
      if (lVar4 == -1) goto LAB_143d199eb;
      if (lVar4 != 0xb) {
        *param_2 = *param_2 | 8;
      }
    }
  }
  else {
    uVar5 = BN_value_one();
    iVar1 = BN_cmp(*(undefined8 *)(param_1 + 0x10),uVar5);
    if ((iVar1 < 1) ||
       (iVar1 = BN_cmp(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8)), -1 < iVar1)) {
LAB_143d198be:
      *param_2 = *param_2 | 8;
    }
    else {
      iVar1 = BN_mod_exp(uVar3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x40),
                         *(undefined8 *)(param_1 + 8),lVar2);
      if (iVar1 == 0) goto LAB_143d199eb;
      iVar1 = BN_is_one(uVar3);
      if (iVar1 == 0) goto LAB_143d198be;
    }
    iVar1 = BN_is_prime_ex(*(undefined8 *)(param_1 + 0x40),0,lVar2,0);
    if (iVar1 < 0) goto LAB_143d199eb;
    if (iVar1 == 0) {
      *param_2 = *param_2 | 0x10;
    }
    iVar1 = BN_div(uVar3,lVar4,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x40),lVar2);
    uVar7 = uVar6;
    if (iVar1 == 0) goto LAB_143d199eb;
    iVar1 = BN_is_one(lVar4);
    if (iVar1 == 0) {
      *param_2 = *param_2 | 0x20;
    }
    if ((*(longlong *)(param_1 + 0x48) != 0) &&
       (iVar1 = BN_cmp(*(longlong *)(param_1 + 0x48),uVar3), iVar1 != 0)) {
      *param_2 = *param_2 | 0x40;
    }
  }
  iVar1 = BN_is_prime_ex(*(undefined8 *)(param_1 + 8),0,lVar2,0);
  uVar7 = uVar6;
  if (iVar1 < 0) goto LAB_143d199eb;
  if (iVar1 == 0) {
    *param_2 = *param_2 | 1;
  }
  else if (*(longlong *)(param_1 + 0x40) == 0) {
    iVar1 = BN_rshift1(uVar3,*(undefined8 *)(param_1 + 8));
    if (iVar1 == 0) goto LAB_143d199eb;
    iVar1 = BN_is_prime_ex(uVar3,0,lVar2,0);
    if (iVar1 < 0) goto LAB_143d199eb;
    if (iVar1 == 0) {
      *param_2 = *param_2 | 2;
    }
  }
  uVar7 = 1;
LAB_143d199eb:
  BN_CTX_end(lVar2);
  BN_CTX_free(lVar2);
  return uVar7;
}



// FUNCTION 143d19a20 DH_check_ex body=314 status=ok
// SIG undefined DH_check_ex(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool DH_check_ex(undefined8 param_1)

{
  uint uVar1;
  uint local_res10 [6];
  undefined8 uVar2;
  
  uVar2 = 0x143d19a30;
  local_res10[0] = 0;
  DH_check(param_1,local_res10);
  uVar1 = local_res10[0];
  if ((local_res10[0] & 8) != 0) {
    ERR_put_error(5,0x79,0x78,"crypto\\dh\\dh_check.c",0x54,uVar2);
  }
  if ((uVar1 & 0x10) != 0) {
    ERR_put_error(5,0x79,0x77,"crypto\\dh\\dh_check.c",0x56,uVar2);
  }
  if ((uVar1 & 0x20) != 0) {
    ERR_put_error(5,0x79,0x74,"crypto\\dh\\dh_check.c",0x58,uVar2);
  }
  if ((uVar1 & 0x40) != 0) {
    ERR_put_error(5,0x79,0x73,"crypto\\dh\\dh_check.c",0x5a,uVar2);
  }
  if ((uVar1 & 4) != 0) {
    ERR_put_error(5,0x79,0x79,"crypto\\dh\\dh_check.c",0x5c);
  }
  if ((uVar1 & 1) != 0) {
    ERR_put_error(5,0x79,0x75,"crypto\\dh\\dh_check.c",0x5e);
  }
  if ((uVar1 & 2) != 0) {
    ERR_put_error(5,0x79,0x76,"crypto\\dh\\dh_check.c",0x60);
  }
  return uVar1 == 0;
}



// FUNCTION 143d19b60 DH_check_params body=245 status=ok
// SIG undefined DH_check_params(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 DH_check_params(longlong param_1,uint *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  *param_2 = 0;
  lVar2 = BN_CTX_new();
  if (lVar2 != 0) {
    BN_CTX_start(lVar2);
    lVar3 = BN_CTX_get(lVar2);
    uVar5 = 0;
    if (lVar3 != 0) {
      iVar1 = BN_is_odd(*(undefined8 *)(param_1 + 8));
      if (iVar1 == 0) {
        *param_2 = *param_2 | 1;
      }
      iVar1 = BN_is_negative(*(undefined8 *)(param_1 + 0x10));
      if (((iVar1 != 0) || (iVar1 = BN_is_zero(*(undefined8 *)(param_1 + 0x10)), iVar1 != 0)) ||
         (iVar1 = BN_is_one(*(undefined8 *)(param_1 + 0x10)), iVar1 != 0)) {
        *param_2 = *param_2 | 8;
      }
      lVar4 = BN_copy(lVar3,*(undefined8 *)(param_1 + 8));
      uVar5 = 0;
      if ((lVar4 != 0) && (iVar1 = BN_sub_word(lVar3,1), iVar1 != 0)) {
        iVar1 = BN_cmp(*(undefined8 *)(param_1 + 0x10),lVar3);
        if (-1 < iVar1) {
          *param_2 = *param_2 | 8;
        }
        uVar5 = 1;
      }
    }
    BN_CTX_end(lVar2);
    BN_CTX_free(lVar2);
    return uVar5;
  }
  return 0;
}



// FUNCTION 143d19c60 DH_check_pub_key body=273 status=ok
// SIG undefined DH_check_pub_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 DH_check_pub_key(longlong param_1,undefined8 param_2,uint *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar5 = 0;
  *param_3 = 0;
  lVar2 = BN_CTX_new();
  if (lVar2 == 0) {
    return 0;
  }
  BN_CTX_start(lVar2);
  lVar3 = BN_CTX_get(lVar2);
  uVar6 = 0;
  if ((lVar3 != 0) && (iVar1 = BN_set_word(lVar3,1), uVar6 = uVar5, iVar1 != 0)) {
    iVar1 = BN_cmp(param_2,lVar3);
    if (iVar1 < 1) {
      *param_3 = *param_3 | 1;
    }
    lVar4 = BN_copy(lVar3,*(undefined8 *)(param_1 + 8));
    if ((lVar4 != 0) && (iVar1 = BN_sub_word(lVar3,1), iVar1 != 0)) {
      iVar1 = BN_cmp(param_2,lVar3);
      if (-1 < iVar1) {
        *param_3 = *param_3 | 2;
      }
      if (*(longlong *)(param_1 + 0x40) != 0) {
        iVar1 = BN_mod_exp(lVar3,param_2,*(longlong *)(param_1 + 0x40),*(undefined8 *)(param_1 + 8),
                           lVar2);
        if (iVar1 == 0) goto LAB_143d19d46;
        iVar1 = BN_is_one(lVar3);
        if (iVar1 == 0) {
          *param_3 = *param_3 | 4;
        }
      }
      uVar6 = 1;
    }
  }
LAB_143d19d46:
  BN_CTX_end(lVar2);
  BN_CTX_free(lVar2);
  return uVar6;
}



// FUNCTION 143d19d80 DH_check_pub_key_ex body=166 status=ok
// SIG undefined DH_check_pub_key_ex(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool DH_check_pub_key_ex(undefined8 param_1)

{
  uint uVar1;
  uint local_res18 [4];
  undefined8 uVar2;
  
  uVar2 = 0x143d19d90;
  local_res18[0] = 0;
  DH_check(param_1,local_res18);
  uVar1 = local_res18[0];
  if ((local_res18[0] & 1) != 0) {
    ERR_put_error(5,0x7b,0x7c,"crypto\\dh\\dh_check.c",0xbc,uVar2);
  }
  if ((uVar1 & 2) != 0) {
    ERR_put_error(5,0x7b,0x7b,"crypto\\dh\\dh_check.c",0xbe,uVar2);
  }
  if ((uVar1 & 4) != 0) {
    ERR_put_error(5,0x7b,0x7a,"crypto\\dh\\dh_check.c",0xc0,uVar2);
  }
  return uVar1 == 0;
}



// FUNCTION 143d19e40 ASN1_BIT_STRING_free body=22 status=ok
// SIG undefined ASN1_BIT_STRING_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_BIT_STRING_free(void)

{
  ASN1_STRING_free();
  return;
}



// FUNCTION 143d19e70 ASN1_BIT_STRING_new body=25 status=ok
// SIG undefined ASN1_BIT_STRING_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_BIT_STRING_new(void)

{
  ASN1_STRING_type_new(3);
  return;
}



// FUNCTION 143d19ed0 ASN1_GENERALIZEDTIME_new body=25 status=ok
// SIG undefined ASN1_GENERALIZEDTIME_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_GENERALIZEDTIME_new(void)

{
  ASN1_STRING_type_new(0x18);
  return;
}



// FUNCTION 143d19f00 ASN1_IA5STRING_new body=25 status=ok
// SIG undefined ASN1_IA5STRING_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_IA5STRING_new(void)

{
  ASN1_STRING_type_new(0x16);
  return;
}



// FUNCTION 143d19f30 ASN1_INTEGER_new body=25 status=ok
// SIG undefined ASN1_INTEGER_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_INTEGER_new(void)

{
  ASN1_STRING_type_new(2);
  return;
}



// FUNCTION 143d19f60 ASN1_NULL_new body=29 status=ok
// SIG undefined ASN1_NULL_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_NULL_new(void)

{
  ASN1_item_new(&DAT_145d7df00);
  return;
}



// FUNCTION 143d19fb0 ASN1_OCTET_STRING_new body=25 status=ok
// SIG undefined ASN1_OCTET_STRING_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_OCTET_STRING_new(void)

{
  ASN1_STRING_type_new(4);
  return;
}



// FUNCTION 143d1a000 ASN1_TYPE_free body=29 status=ok
// SIG undefined ASN1_TYPE_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_TYPE_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_145d7df60);
  return;
}



// FUNCTION 143d1a020 ASN1_TYPE_new body=29 status=ok
// SIG undefined ASN1_TYPE_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_TYPE_new(void)

{
  ASN1_item_new(&DAT_145d7df60);
  return;
}



// FUNCTION 143d1a050 ASN1_UTF8STRING_new body=25 status=ok
// SIG undefined ASN1_UTF8STRING_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_UTF8STRING_new(void)

{
  ASN1_STRING_type_new(0xc);
  return;
}



// FUNCTION 143d1a090 FUN_143d1a090 body=29 status=ok
// SIG undefined FUN_143d1a090(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d1a090(void)

{
  ASN1_item_d2i();
  return;
}



// FUNCTION 143d1a0b0 d2i_ASN1_INTEGER body=29 status=ok
// SIG undefined d2i_ASN1_INTEGER(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_ASN1_INTEGER(void)

{
  ASN1_item_d2i();
  return;
}



// FUNCTION 143d1a0d0 d2i_ASN1_OCTET_STRING body=29 status=ok
// SIG undefined d2i_ASN1_OCTET_STRING(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_ASN1_OCTET_STRING(void)

{
  ASN1_item_d2i();
  return;
}



// FUNCTION 143d1a0f0 d2i_ASN1_SEQUENCE_ANY body=29 status=ok
// SIG undefined d2i_ASN1_SEQUENCE_ANY(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_ASN1_SEQUENCE_ANY(void)

{
  ASN1_item_d2i();
  return;
}



// FUNCTION 143d1a110 d2i_ASN1_TYPE body=29 status=ok
// SIG undefined d2i_ASN1_TYPE(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_ASN1_TYPE(void)

{
  ASN1_item_d2i();
  return;
}



// FUNCTION 143d1a130 i2d_ASN1_INTEGER body=29 status=ok
// SIG undefined i2d_ASN1_INTEGER(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_ASN1_INTEGER(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_145d7e1e0);
  return;
}



// FUNCTION 143d1a150 i2d_ASN1_OCTET_STRING body=29 status=ok
// SIG undefined i2d_ASN1_OCTET_STRING(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_ASN1_OCTET_STRING(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_145d7e1b0);
  return;
}



// FUNCTION 143d1a170 i2d_ASN1_TYPE body=29 status=ok
// SIG undefined i2d_ASN1_TYPE(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_ASN1_TYPE(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_145d7e130);
  return;
}



// FUNCTION 143d1a190 i2d_ASN1_TYPE body=29 status=ok
// SIG undefined i2d_ASN1_TYPE(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_ASN1_TYPE(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_145d7e180);
  return;
}



// FUNCTION 143d1a1b0 i2d_ASN1_TYPE body=29 status=ok
// SIG undefined i2d_ASN1_TYPE(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_ASN1_TYPE(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_145d7df60);
  return;
}



// FUNCTION 143d1a1d0 uint64_new body=96 status=ok
// SIG undefined uint64_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 uint64_new(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143d1a1dc;
  lVar1 = CRYPTO_zalloc(8,"crypto\\asn1\\x_int64.c",0x1f);
  *param_1 = lVar1;
  if (lVar1 == 0) {
    ERR_put_error(0xd,0x8d,0x41,"crypto\\asn1\\x_int64.c",0x20,uVar2);
    return 0;
  }
  return 1;
}



// FUNCTION 143d1a230 uint64_free body=50 status=ok
// SIG undefined uint64_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void uint64_free(undefined8 *param_1)

{
  CRYPTO_free(*param_1,"crypto\\asn1\\x_int64.c",0x28);
  *param_1 = 0;
  return;
}



// FUNCTION 143d1a280 uint64_i2c body=78 status=ok
// SIG undefined uint64_i2c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 uint64_i2c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  lVar1 = *(longlong *)*param_1;
  if (((*(uint *)(param_4 + 0x20) & 1) != 0) && (lVar1 == 0)) {
    return 0xffffffff;
  }
  if (((*(uint *)(param_4 + 0x20) & 2) != 0) && (lVar1 < 0)) {
    lVar1 = -lVar1;
    uVar2 = 1;
  }
  uVar2 = i2c_uint64_int(param_2,lVar1,uVar2);
  return uVar2;
}



// FUNCTION 143d1a2d0 uint64_c2i body=285 status=ok
// SIG undefined uint64_c2i(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
uint64_c2i(longlong *param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5,
          longlong param_6)

{
  ulonglong *puVar1;
  int iVar2;
  int local_res8 [2];
  undefined8 local_res10;
  ulonglong local_18 [2];
  
  local_18[1] = 0x143d1a2ea;
  local_18[0] = 0;
  local_res8[0] = 0;
  local_res10 = param_2;
  if ((*param_1 == 0) && (iVar2 = uint64_new(param_1,param_6), iVar2 == 0)) {
    return 0;
  }
  puVar1 = (ulonglong *)*param_1;
  if (param_3 != 0) {
    iVar2 = c2i_uint64_int(local_18,local_res8,&local_res10,param_3);
    if (iVar2 == 0) {
      return 0;
    }
    if ((*(byte *)(param_6 + 0x20) & 2) == 0) {
      if (local_res8[0] != 0) {
        ERR_put_error(0xd,0x70,0xe2,"crypto\\asn1\\x_int64.c",0x61);
        return 0;
      }
    }
    else if (local_res8[0] == 0) {
      if (0x7fffffffffffffff < local_18[0]) {
        ERR_put_error(0xd,0x70,0xdf,"crypto\\asn1\\x_int64.c",0x66);
        return 0;
      }
    }
    else {
      local_18[0] = -local_18[0];
    }
  }
  *puVar1 = local_18[0];
  return 1;
}



// FUNCTION 143d1a3f0 uint64_print body=49 status=ok
// SIG undefined uint64_print(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void uint64_print(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined *puVar1;
  
  puVar1 = &DAT_145d7e788;
  if ((*(byte *)(param_3 + 0x20) & 2) == 0) {
    puVar1 = &DAT_145d7e790;
  }
  BIO_printf(param_1,puVar1,*(undefined8 *)*param_2);
  return;
}



// FUNCTION 143d1a430 uint32_new body=96 status=ok
// SIG undefined uint32_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 uint32_new(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143d1a43c;
  lVar1 = CRYPTO_zalloc(4,"crypto\\asn1\\x_int64.c",0x7e);
  *param_1 = lVar1;
  if (lVar1 == 0) {
    ERR_put_error(0xd,0x8b,0x41,"crypto\\asn1\\x_int64.c",0x7f,uVar2);
    return 0;
  }
  return 1;
}



// FUNCTION 143d1a490 uint32_free body=50 status=ok
// SIG undefined uint32_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void uint32_free(undefined8 *param_1)

{
  CRYPTO_free(*param_1,"crypto\\asn1\\x_int64.c",0x87);
  *param_1 = 0;
  return;
}



// FUNCTION 143d1a4e0 uint32_i2c body=76 status=ok
// SIG undefined uint32_i2c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 uint32_i2c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  iVar1 = *(int *)*param_1;
  if (((*(uint *)(param_4 + 0x20) & 1) != 0) && (iVar1 == 0)) {
    return 0xffffffff;
  }
  if (((*(uint *)(param_4 + 0x20) & 2) != 0) && (iVar1 < 0)) {
    iVar1 = -iVar1;
    uVar2 = 1;
  }
  uVar2 = i2c_uint64_int(param_2,iVar1,uVar2);
  return uVar2;
}



// FUNCTION 143d1a530 uint32_c2i body=345 status=ok
// SIG undefined uint32_c2i(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
uint32_c2i(longlong *param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5,
          longlong param_6)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int local_res8 [2];
  undefined8 local_res10;
  ulonglong local_18 [2];
  
  local_18[1] = 0x143d1a54a;
  local_18[0] = 0;
  iVar2 = 0;
  local_res8[0] = 0;
  local_res10 = param_2;
  if (*param_1 == 0) {
    iVar2 = uint64_new(param_1,param_6);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = (int)local_18[0];
  }
  piVar1 = (int *)*param_1;
  if (param_3 != 0) {
    iVar2 = c2i_uint64_int(local_18,local_res8,&local_res10,param_3);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = (int)local_18[0];
    if ((*(byte *)(param_6 + 0x20) & 2) == 0) {
      if (local_res8[0] != 0) {
        ERR_put_error(0xd,0x69,0xe2,"crypto\\asn1\\x_int64.c",200);
        return 0;
      }
      bVar3 = local_18[0] < 0xffffffff;
      bVar4 = local_18[0] == 0xffffffff;
    }
    else {
      if (local_res8[0] != 0) {
        if (0x80000000 < local_18[0]) {
          ERR_put_error(0xd,0x69,0xe0,"crypto\\asn1\\x_int64.c",0xcd);
          return 0;
        }
        iVar2 = -iVar2;
        goto LAB_143d1a638;
      }
      bVar3 = local_18[0] < 0x7fffffff;
      bVar4 = local_18[0] == 0x7fffffff;
    }
    if (!bVar3 && !bVar4) {
      ERR_put_error(0xd,0x69,0xdf,"crypto\\asn1\\x_int64.c",0xd4);
      return 0;
    }
  }
LAB_143d1a638:
  *piVar1 = iVar2;
  return 1;
}



// FUNCTION 143d1a690 uint32_print body=49 status=ok
// SIG undefined uint32_print(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void uint32_print(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined *puVar1;
  
  puVar1 = &DAT_145d7e798;
  if ((*(byte *)(param_3 + 0x20) & 2) == 0) {
    puVar1 = &DAT_145d7e79c;
  }
  BIO_printf(param_1,puVar1,*(undefined4 *)*param_2);
  return;
}



// FUNCTION 143d1a730 FUN_143d1a730 body=25 status=ok
// SIG undefined FUN_143d1a730(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d1a730(undefined8 param_1,undefined8 param_2)

{
  FUN_143d1a780(param_1,param_2,0);
  return;
}



// FUNCTION 143d1a750 ASN1_item_free body=36 status=ok
// SIG undefined ASN1_item_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_item_free(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_143d1a780(local_res8,param_2,0,param_4,0x143d1a75f);
  return;
}



// FUNCTION 143d1a780 FUN_143d1a780 body=568 status=ok
// SIG undefined FUN_143d1a780(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d1a780(longlong *param_1,char *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  lVar6 = *(longlong *)(param_2 + 0x18);
  if ((*param_2 != '\0') && (*param_1 == 0)) {
    return;
  }
  if ((lVar6 == 0) || (pcVar4 = *(code **)(lVar6 + 0x18), pcVar4 == (code *)0x0)) {
    pcVar4 = (code *)0x0;
  }
  switch(*param_2) {
  case '\0':
    if (*(longlong *)(param_2 + 8) == 0) {
      asn1_primitive_free(param_1,param_2,param_3);
    }
    else {
      asn1_template_free();
    }
    break;
  case '\x01':
  case '\x06':
    iVar1 = asn1_do_lock(param_1,0xffffffff,param_2);
    if ((iVar1 == 0) &&
       ((pcVar4 == (code *)0x0 || (iVar1 = (*pcVar4)(2,param_1,param_2,0), iVar1 != 2)))) {
      asn1_enc_free(param_1,param_2);
      iVar1 = 0;
      lVar6 = (longlong)*(int *)(param_2 + 0x10) * 0x20 + *(longlong *)(param_2 + 8);
      if (0 < *(int *)(param_2 + 0x10)) {
        do {
          lVar6 = lVar6 + -0x20;
          lVar2 = asn1_do_adb(param_1,lVar6,0);
          if (lVar2 != 0) {
            uVar3 = FUN_143d6ce50(param_1,lVar2);
            asn1_template_free(uVar3,lVar2);
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)(param_2 + 0x10));
      }
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(3,param_1,param_2);
      }
      if (param_3 == 0) {
        uVar5 = 0x73;
LAB_143d1a98f:
        CRYPTO_free(*param_1,"crypto\\asn1\\tasn_fre.c",uVar5);
        *param_1 = 0;
      }
    }
    break;
  case '\x02':
    if ((pcVar4 == (code *)0x0) || (iVar1 = (*pcVar4)(2,param_1,param_2), iVar1 != 2)) {
      iVar1 = FUN_143d6ce40(param_1,param_2);
      if ((-1 < iVar1) && (iVar1 < *(int *)(param_2 + 0x10))) {
        lVar6 = (longlong)iVar1 * 0x20 + *(longlong *)(param_2 + 8);
        uVar3 = FUN_143d6ce50(param_1,lVar6);
        asn1_template_free(uVar3,lVar6);
      }
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(3,param_1,param_2);
      }
      if (param_3 == 0) {
        uVar5 = 0x4b;
        goto LAB_143d1a98f;
      }
    }
    break;
  case '\x03':
    break;
  case '\x04':
    if ((lVar6 != 0) && (*(code **)(lVar6 + 0x10) != (code *)0x0)) {
      (**(code **)(lVar6 + 0x10))(param_1,param_2);
    }
    break;
  case '\x05':
    asn1_primitive_free(param_1,param_2,param_3);
    break;
  default:
    goto switchD_143d1a7f1_default;
  }
switchD_143d1a7f1_default:
  return;
}



// FUNCTION 143d1a9e0 asn1_primitive_free body=266 status=ok
// SIG undefined asn1_primitive_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void asn1_primitive_free(longlong *param_1,char *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  
  if (param_2 == (char *)0x0) {
    iVar2 = *(int *)*param_1;
    param_1 = (longlong *)((int *)*param_1 + 2);
LAB_143d1aa53:
    if (*param_1 == 0) {
      return;
    }
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x18);
    if (lVar1 != 0) {
      if (param_3 == 0) {
        if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d1aa27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar1 + 0x18))();
          return;
        }
      }
      else if (*(code **)(lVar1 + 0x20) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d1aa16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar1 + 0x20))();
        return;
      }
    }
    if (*param_2 == '\x05') {
      iVar2 = -1;
      if (*param_1 == 0) {
        return;
      }
      goto LAB_143d1aa6c;
    }
    iVar2 = *(int *)(param_2 + 4);
    if (iVar2 != 1) goto LAB_143d1aa53;
  }
  if (iVar2 == -4) {
    asn1_primitive_free(param_1,0,0);
    CRYPTO_free(*param_1,"crypto\\asn1\\tasn_fre.c",200);
  }
  else {
    if (iVar2 == 1) {
      if (param_2 != (char *)0x0) {
        *(int *)param_1 = *(int *)(param_2 + 0x20);
        return;
      }
      *(int *)param_1 = -1;
      return;
    }
    if (iVar2 != 5) {
LAB_143d1aa6c:
      if (iVar2 != 6) {
        asn1_string_embed_free(*param_1,param_3);
        *param_1 = 0;
        return;
      }
      ASN1_OBJECT_free(*param_1);
      *param_1 = 0;
      return;
    }
  }
  *param_1 = 0;
  return;
}



// FUNCTION 143d1aaf0 asn1_template_free body=189 status=ok
// SIG undefined asn1_template_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void asn1_template_free(undefined8 ***param_1,uint *param_2)

{
  undefined8 **ppuVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 **local_res10;
  undefined8 local_res18;
  
  uVar5 = *param_2 & 0x1000;
  if (uVar5 != 0) {
    local_res10 = param_1;
    param_1 = &local_res10;
  }
  if ((*param_2 & 6) != 0) {
    iVar4 = 0;
    ppuVar1 = *param_1;
    iVar2 = OPENSSL_sk_num(ppuVar1);
    if (0 < iVar2) {
      do {
        local_res18 = OPENSSL_sk_value(ppuVar1,iVar4);
        uVar3 = (**(code **)(param_2 + 6))();
        FUN_143d1a780(&local_res18,uVar3,uVar5);
        iVar4 = iVar4 + 1;
        iVar2 = OPENSSL_sk_num(ppuVar1);
      } while (iVar4 < iVar2);
    }
    OPENSSL_sk_free(ppuVar1);
    *param_1 = (undefined8 **)0x0;
    return;
  }
  uVar3 = (**(code **)(param_2 + 6))();
  FUN_143d1a780(param_1,uVar3,uVar5);
  return;
}



// FUNCTION 143d1abb0 ASN1_item_d2i body=148 status=ok
// SIG undefined ASN1_item_d2i(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
ASN1_item_d2i(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined1 *local_60;
  undefined4 local_58;
  undefined8 local_48;
  undefined1 local_40 [24];
  ulonglong local_28;
  undefined8 uStack_18;
  
  uStack_18 = 0x143d1abbd;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_60 = local_40;
  local_58 = 0;
  local_68 = 0;
  puVar3 = &local_48;
  if (param_1 != (undefined8 *)0x0) {
    puVar3 = param_1;
  }
  local_70 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_78 = 0xffffffff;
  iVar1 = FUN_143d1ba50(puVar3,param_2,param_3,param_4);
  if (iVar1 < 1) {
    FUN_143d1a730(puVar3,param_4);
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar3;
  }
  return uVar2;
}



// FUNCTION 143d1ac50 ASN1_item_ex_d2i body=125 status=ok
// SIG undefined ASN1_item_ex_d2i(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ASN1_item_ex_d2i(undefined8 param_1,undefined8 param_2,undefined8 param_3,
                          undefined8 param_4)

{
  ulonglong uVar1;
  
  uVar1 = FUN_143d1ba50();
  if ((int)uVar1 < 1) {
    FUN_143d1a730(param_1,param_4);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 143d1acd0 ASN1_tag2bit body=22 status=ok
// SIG undefined ASN1_tag2bit(void)

undefined4 ASN1_tag2bit(uint param_1)

{
  if (param_1 < 0x1f) {
    return *(undefined4 *)(&DAT_145d7e7c0 + (longlong)(int)param_1 * 4);
  }
  return 0;
}



// FUNCTION 143d1acf0 asn1_collect body=786 status=ok
// SIG undefined asn1_collect(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
asn1_collect(int *param_1,longlong *param_2,uint param_3,byte param_4,int param_5,int param_6,
            int param_7)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  char *pcVar9;
  int local_res8 [2];
  longlong *local_res10;
  int local_58;
  int local_54;
  char *local_50;
  char *local_48 [2];
  
  pcVar9 = (char *)*param_2;
  param_4 = param_4 & 1;
  uVar7 = (ulonglong)(int)param_3;
  local_res10 = param_2;
  if ((param_1 == (int *)0x0) && (param_4 == 0)) {
    *param_2 = (longlong)(pcVar9 + uVar7);
    return 1;
  }
  do {
    local_50 = pcVar9;
    if ((int)param_3 < 1) {
      if (param_4 == 0) {
LAB_143d1afcb:
        *local_res10 = (longlong)pcVar9;
        uVar4 = 1;
      }
      else {
        ERR_put_error(0xd,0x6a,0x89,"crypto\\asn1\\tasn_dec.c",0x40a);
        uVar4 = 0;
      }
      return uVar4;
    }
    iVar6 = (int)uVar7;
    if (((1 < iVar6) && (*pcVar9 == '\0')) && (pcVar9[1] == '\0')) {
      pcVar9 = pcVar9 + 2;
      if (param_4 == 0) {
        local_50 = pcVar9;
        ERR_put_error(0xd,0x6a,0x9f,"crypto\\asn1\\tasn_dec.c",0x3f0);
        return 0;
      }
      goto LAB_143d1afcb;
    }
    local_48[0] = pcVar9;
    bVar2 = ASN1_get_object(local_48,local_res8,&local_58,&local_54,iVar6);
    if ((char)bVar2 < '\0') {
      uVar4 = 0x45e;
      uVar8 = 0x66;
LAB_143d1af87:
      ERR_put_error(0xd,0x68,uVar8,"crypto\\asn1\\tasn_dec.c",uVar4);
      ERR_put_error(0xd,0x6a,0x3a,"crypto\\asn1\\tasn_dec.c",0x3f9);
      return 0;
    }
    if ((-1 < param_5) && ((param_5 != local_58 || (param_6 != local_54)))) {
      uVar4 = 0x46a;
      uVar8 = 0xa8;
      goto LAB_143d1af87;
    }
    if ((bVar2 & 1) != 0) {
      local_res8[0] = ((int)pcVar9 - (int)local_48[0]) + iVar6;
    }
    iVar3 = local_res8[0];
    local_50 = local_48[0];
    if ((bVar2 & 0x20) == 0) {
      if (local_res8[0] != 0) {
        if (param_1 != (int *)0x0) {
          iVar1 = *param_1;
          lVar5 = BUF_MEM_grow_clean(param_1,(longlong)(local_res8[0] + iVar1));
          if (lVar5 == 0) {
            ERR_put_error(0xd,0x8c,0x41,"crypto\\asn1\\tasn_dec.c",0x417);
            return 0;
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar1 + *(longlong *)(param_1 + 2)),local_50,(longlong)iVar3
                    );
        }
        local_50 = local_50 + iVar3;
      }
    }
    else {
      if (4 < param_7) {
        ERR_put_error(0xd,0x6a,0xc5,"crypto\\asn1\\tasn_dec.c",0x400);
        return 0;
      }
      iVar3 = asn1_collect(param_1,&local_50,local_res8[0],bVar2 & 1,param_5,param_6,param_7 + 1);
      if (iVar3 == 0) {
        return 0;
      }
    }
    param_3 = iVar6 + ((int)pcVar9 - (int)local_50);
    uVar7 = (ulonglong)param_3;
    pcVar9 = local_50;
  } while( true );
}



// FUNCTION 143d1b010 asn1_d2i_ex_primitive body=1417 status=ok
// SIG undefined asn1_d2i_ex_primitive(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
asn1_d2i_ex_primitive
          (longlong param_1,longlong *param_2,int param_3,char *param_4,uint param_5,int param_6,
          char param_7,char *param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 in_stack_ffffffffffffff68;
  undefined8 uVar10;
  undefined4 uVar11;
  ulonglong in_stack_ffffffffffffff70;
  char local_78 [4];
  int local_74;
  uint local_70;
  uint local_6c;
  int local_68 [2];
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 uVar9;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  uVar9 = 0;
  uVar8 = 0;
  local_78[0] = '\0';
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  if (param_1 == 0) {
    ERR_put_error(0xd,0x6c,0x7d,"crypto\\asn1\\tasn_dec.c",CONCAT44(uVar11,0x28d));
    return 0;
  }
  if (*param_4 == '\x05') {
    uVar6 = 0xffffffff;
    uVar1 = param_5;
  }
  else {
    uVar1 = *(uint *)(param_4 + 4);
    uVar6 = param_5;
  }
  if (uVar1 == 0xfffffffc) {
    if (-1 < (int)uVar6) {
      ERR_put_error(0xd,0x6c,0x7f,"crypto\\asn1\\tasn_dec.c",CONCAT44(uVar11,0x29b));
      return 0;
    }
    if (param_7 != '\0') {
      ERR_put_error(0xd,0x6c,0x7e,"crypto\\asn1\\tasn_dec.c",CONCAT44(uVar11,0x2a0));
      return 0;
    }
    lVar5 = *param_2;
    if ((param_8 == (char *)0x0) || (*param_8 == '\0')) {
      uVar10 = CONCAT44(uVar11,param_3);
      local_60 = lVar5;
      uVar1 = ASN1_get_object(&local_60,local_68,&local_70,&local_74,uVar10);
      uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
      if (param_8 == (char *)0x0) goto LAB_143d1b1c4;
      *(uint *)(param_8 + 4) = uVar1;
      iVar4 = (int)local_60 - (int)lVar5;
      *(int *)(param_8 + 8) = local_68[0];
      *(int *)(param_8 + 0x10) = local_74;
      *(uint *)(param_8 + 0xc) = local_70;
      *(int *)(param_8 + 0x14) = iVar4;
      *param_8 = '\x01';
      if (((uVar1 & 0x81) != 0) || (iVar4 + local_68[0] <= param_3)) goto LAB_143d1b1c4;
      uVar8 = CONCAT44(uVar11,0x456);
      ERR_put_error(0xd,0x68,0x9b,"crypto\\asn1\\tasn_dec.c",uVar8);
      uVar11 = (undefined4)((ulonglong)uVar8 >> 0x20);
    }
    else {
      local_68[0] = *(int *)(param_8 + 8);
      local_74 = *(int *)(param_8 + 0x10);
      local_70 = *(uint *)(param_8 + 0xc);
      uVar1 = *(uint *)(param_8 + 4);
      local_60 = lVar5 + *(int *)(param_8 + 0x14);
LAB_143d1b1c4:
      if (-1 < (char)uVar1) {
        uVar1 = local_70;
        if ((char)local_74 != '\0') {
          uVar1 = 0xfffffffd;
        }
        goto LAB_143d1b222;
      }
      uVar8 = CONCAT44(uVar11,0x45e);
      ERR_put_error(0xd,0x68,0x66,"crypto\\asn1\\tasn_dec.c",uVar8);
      uVar11 = (undefined4)((ulonglong)uVar8 >> 0x20);
      if (param_8 == (char *)0x0) goto LAB_143d1b1f0;
    }
    *param_8 = '\0';
LAB_143d1b1f0:
    ERR_put_error(0xd,0x6c,0x3a,"crypto\\asn1\\tasn_dec.c",CONCAT44(uVar11,0x2a7));
    return 0;
  }
LAB_143d1b222:
  if (uVar6 == 0xffffffff) {
    uVar6 = uVar1;
    param_6 = 0;
  }
  local_60 = *param_2;
  iVar4 = (int)local_60;
  local_68[0] = param_6;
  if ((param_8 == (char *)0x0) || (*param_8 == '\0')) {
    uVar10 = CONCAT44(uVar11,param_3);
    uVar2 = ASN1_get_object(&local_60,&local_70,&local_6c,&local_74,uVar10);
    uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
    if (param_8 != (char *)0x0) {
      *(uint *)(param_8 + 4) = uVar2;
      iVar3 = (int)local_60 - iVar4;
      *(uint *)(param_8 + 8) = local_70;
      *(int *)(param_8 + 0x10) = local_74;
      *(uint *)(param_8 + 0xc) = local_6c;
      *(int *)(param_8 + 0x14) = iVar3;
      *param_8 = '\x01';
      if (((uVar2 & 0x81) == 0) && (param_3 < (int)(iVar3 + local_70))) {
        uVar8 = CONCAT44(uVar11,0x456);
        ERR_put_error(0xd,0x68,0x9b,"crypto\\asn1\\tasn_dec.c",uVar8);
        uVar11 = (undefined4)((ulonglong)uVar8 >> 0x20);
        *param_8 = '\0';
        goto LAB_143d1b400;
      }
    }
  }
  else {
    local_70 = *(uint *)(param_8 + 8);
    local_60 = *(int *)(param_8 + 0x14) + local_60;
    local_74 = *(int *)(param_8 + 0x10);
    local_6c = *(uint *)(param_8 + 0xc);
    uVar2 = *(uint *)(param_8 + 4);
  }
  if ((char)(byte)uVar2 < '\0') {
    uVar8 = CONCAT44(uVar11,0x45e);
    ERR_put_error(0xd,0x68,0x66,"crypto\\asn1\\tasn_dec.c",uVar8);
    uVar11 = (undefined4)((ulonglong)uVar8 >> 0x20);
    if (param_8 != (char *)0x0) {
      *param_8 = '\0';
    }
LAB_143d1b400:
    ERR_put_error(0xd,0x6c,0x3a,"crypto\\asn1\\tasn_dec.c",CONCAT44(uVar11,0x2b6));
    return 0;
  }
  if (-1 < (int)uVar6) {
    if ((uVar6 != local_6c) || (local_68[0] != local_74)) {
      if (param_7 != '\0') {
        return 0xffffffff;
      }
      if (param_8 != (char *)0x0) {
        *param_8 = '\0';
      }
      uVar8 = CONCAT44(uVar11,0x46a);
      ERR_put_error(0xd,0x68,0xa8,"crypto\\asn1\\tasn_dec.c",uVar8);
      uVar11 = (undefined4)((ulonglong)uVar8 >> 0x20);
      goto LAB_143d1b400;
    }
    if (param_8 != (char *)0x0) {
      *param_8 = '\0';
    }
  }
  uVar6 = local_70;
  if ((uVar2 & 1) != 0) {
    uVar6 = (iVar4 - (int)local_60) + param_3;
  }
  if ((uVar1 == 0x10) || (uVar1 == 0x11)) {
    if (uVar1 == 0xfffffffd) goto LAB_143d1b4bf;
    if ((uVar2 & 0x20) == 0) {
      ERR_put_error(0xd,0x6c,0x9c,"crypto\\asn1\\tasn_dec.c",CONCAT44(uVar11,0x2c8));
      return 0;
    }
LAB_143d1b4c7:
    lVar5 = *param_2;
    if ((uVar2 & 1) == 0) {
      lVar7 = (longlong)(int)uVar6;
      uVar6 = ((int)local_60 - (int)lVar5) + uVar6;
      lVar7 = lVar7 + local_60;
    }
    else {
      iVar4 = asn1_find_end(&local_60,uVar6);
      if (iVar4 == 0) goto LAB_143d1b552;
      uVar6 = (int)local_60 - (int)lVar5;
      lVar7 = local_60;
    }
  }
  else {
    if (uVar1 == 0xfffffffd) {
LAB_143d1b4bf:
      if (param_8 != (char *)0x0) {
        *param_8 = '\0';
      }
      goto LAB_143d1b4c7;
    }
    if ((uVar2 & 0x20) == 0) {
      lVar7 = local_60 + (int)uVar6;
      lVar5 = local_60;
    }
    else {
      if ((uVar1 < 0xb) && ((0x466U >> (uVar1 & 0x1f) & 1) != 0)) {
        ERR_put_error(0xd,0x6c,0xc3,"crypto\\asn1\\tasn_dec.c",CONCAT44(uVar11,0x2da));
        return 0;
      }
      local_78[0] = '\x01';
      uVar8 = CONCAT44(uVar11,0xffffffff);
      iVar4 = asn1_collect(&local_58,&local_60,uVar6,(byte)uVar2 & 1,uVar8,
                           in_stack_ffffffffffffff70 & 0xffffffff00000000,0);
      uVar11 = (undefined4)((ulonglong)uVar8 >> 0x20);
      uVar8 = uVar9;
      if (iVar4 == 0) goto LAB_143d1b552;
      uVar6 = (uint)local_58;
      lVar7 = (longlong)(int)(uint)local_58;
      lVar5 = BUF_MEM_grow_clean(&local_58,(longlong)(int)((uint)local_58 + 1));
      if (lVar5 == 0) {
        ERR_put_error(0xd,0x6c,0x41,"crypto\\asn1\\tasn_dec.c",CONCAT44(uVar11,0x2ec));
        goto LAB_143d1b552;
      }
      *(undefined1 *)(lVar7 + local_50) = 0;
      lVar7 = local_60;
      lVar5 = local_50;
    }
  }
  iVar4 = FUN_143d1b5a0(param_1,lVar5,uVar6,uVar1,local_78,param_4);
  uVar8 = uVar9;
  if (iVar4 != 0) {
    uVar8 = 1;
    *param_2 = lVar7;
  }
LAB_143d1b552:
  if (local_78[0] == '\0') {
    return uVar8;
  }
  CRYPTO_free(local_50,"crypto\\asn1\\tasn_dec.c",0x300);
  return uVar8;
}



// FUNCTION 143d1b5a0 FUN_143d1b5a0 body=791 status=ok
// SIG undefined FUN_143d1b5a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_143d1b5a0(uint *param_1,byte *param_2,uint param_3,uint param_4,char *param_5,longlong param_6)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  longlong lVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  byte *local_res10;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar9 = 0x143d1b5bc;
  puVar7 = (uint *)0x0;
  local_res10 = param_2;
  if ((*(longlong *)(param_6 + 0x18) != 0) &&
     (pcVar1 = *(code **)(*(longlong *)(param_6 + 0x18) + 0x28), pcVar1 != (code *)0x0)) {
    uVar9 = (*pcVar1)();
    return uVar9;
  }
  puVar6 = param_1;
  puVar3 = puVar7;
  if (*(int *)(param_6 + 4) == -4) {
    puVar3 = *(uint **)param_1;
    if (puVar3 == (uint *)0x0) {
      puVar3 = (uint *)ASN1_TYPE_new();
      if (puVar3 == (uint *)0x0) goto LAB_143d1b89d;
      *(uint **)param_1 = puVar3;
    }
    if (param_4 != *puVar3) {
      ASN1_TYPE_set(puVar3,param_4,0);
    }
    puVar6 = puVar3 + 2;
    puVar7 = param_1;
  }
  switch(param_4) {
  case 1:
    if (param_3 == 1) {
      *puVar6 = (uint)*local_res10;
      break;
    }
    ERR_put_error(0xd,0xcc,0x6a,"crypto\\asn1\\tasn_dec.c",0x332,uVar9);
    goto LAB_143d1b89d;
  case 2:
  case 10:
    lVar4 = c2i_ASN1_INTEGER(puVar6,&local_res10,param_3);
    if (lVar4 == 0) goto LAB_143d1b89d;
    *(uint *)(*(longlong *)puVar6 + 4) = *(uint *)(*(longlong *)puVar6 + 4) & 0x100 | param_4;
    break;
  case 3:
    lVar4 = c2i_ASN1_BIT_STRING(puVar6,&local_res10,param_3);
    goto LAB_143d1b692;
  default:
    if (param_4 == 0x1e) {
      if ((param_3 & 1) != 0) {
        ERR_put_error(0xd,0xcc,0xd6,"crypto\\asn1\\tasn_dec.c",0x35c,uVar9);
        goto LAB_143d1b89d;
      }
    }
    else if ((param_4 == 0x1c) && ((param_3 & 3) != 0)) {
      ERR_put_error(0xd,0xcc,0xd7,"crypto\\asn1\\tasn_dec.c",0x361,uVar9);
      goto LAB_143d1b89d;
    }
    puVar5 = *(uint **)puVar6;
    if (puVar5 == (uint *)0x0) {
      puVar5 = (uint *)ASN1_STRING_type_new(param_4);
      if (puVar5 == (uint *)0x0) {
        ERR_put_error(0xd,0xcc,0x41,"crypto\\asn1\\tasn_dec.c",CONCAT44(uVar8,0x368));
        goto LAB_143d1b89d;
      }
      *(uint **)puVar6 = puVar5;
    }
    else {
      puVar5[1] = param_4;
    }
    if (*param_5 == '\0') {
      iVar2 = ASN1_STRING_set(puVar5,local_res10,param_3);
      if (iVar2 == 0) {
        ERR_put_error(0xd,0xcc,0x41,"crypto\\asn1\\tasn_dec.c",CONCAT44(uVar8,0x378));
        ASN1_STRING_free(puVar5);
        puVar6[0] = 0;
        puVar6[1] = 0;
        goto LAB_143d1b89d;
      }
    }
    else {
      CRYPTO_free(*(undefined8 *)(puVar5 + 2),"crypto\\asn1\\tasn_dec.c",0x372);
      *(byte **)(puVar5 + 2) = local_res10;
      *puVar5 = param_3;
      *param_5 = '\0';
    }
    break;
  case 5:
    if (param_3 != 0) {
      ERR_put_error(0xd,0xcc,0x90,"crypto\\asn1\\tasn_dec.c",0x32a,uVar9);
      goto LAB_143d1b89d;
    }
    puVar6[0] = 1;
    puVar6[1] = 0;
    break;
  case 6:
    lVar4 = c2i_ASN1_OBJECT(puVar6,&local_res10,param_3);
LAB_143d1b692:
    if (lVar4 == 0) {
LAB_143d1b89d:
      ASN1_TYPE_free(puVar3);
      if (puVar7 != (uint *)0x0) {
        puVar7[0] = 0;
        puVar7[1] = 0;
      }
      return 0;
    }
  }
  if ((puVar3 != (uint *)0x0) && (param_4 == 5)) {
    puVar3[2] = 0;
    puVar3[3] = 0;
  }
  return 1;
}



// FUNCTION 143d1b8e0 asn1_find_end body=366 status=ok
// SIG undefined asn1_find_end(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 asn1_find_end(longlong *param_1,int param_2,char param_3)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined1 local_res8 [8];
  int local_res18 [2];
  undefined1 local_res20 [8];
  undefined4 uVar8;
  char *local_28 [2];
  
  pcVar2 = (char *)*param_1;
  uVar6 = (ulonglong)param_2;
  if (param_3 == '\0') {
    *param_1 = (longlong)(pcVar2 + uVar6);
    return 1;
  }
  iVar4 = 1;
  if (0 < param_2) {
    do {
      iVar5 = (int)uVar6;
      if (((iVar5 < 2) || (*pcVar2 != '\0')) || (pcVar2[1] != '\0')) {
        local_28[0] = pcVar2;
        bVar1 = ASN1_get_object(local_28,local_res18,local_res20,local_res8,iVar5);
        if ((char)bVar1 < '\0') {
          ERR_put_error(0xd,0x68,0x66,"crypto\\asn1\\tasn_dec.c",0x45e);
          uVar7 = 0x3a;
          uVar8 = 0x3b2;
          goto LAB_143d1ba24;
        }
        iVar3 = (int)pcVar2;
        if ((bVar1 & 1) != 0) {
          local_res18[0] = (iVar3 - (int)local_28[0]) + iVar5;
        }
        if ((bVar1 & 1) == 0) {
          pcVar2 = local_28[0] + local_res18[0];
        }
        else {
          if (iVar4 == -1) {
            uVar8 = 0x3b7;
            uVar7 = 0x3a;
            goto LAB_143d1ba24;
          }
          iVar4 = iVar4 + 1;
          pcVar2 = local_28[0];
        }
        iVar3 = iVar3 - (int)pcVar2;
      }
      else {
        pcVar2 = pcVar2 + 2;
        iVar4 = iVar4 + -1;
        if (iVar4 == 0) goto LAB_143d1b9bc;
        iVar3 = -2;
      }
      uVar6 = (ulonglong)(uint)(iVar5 + iVar3);
    } while (0 < iVar5 + iVar3);
    if (iVar4 == 0) {
LAB_143d1b9bc:
      *param_1 = (longlong)pcVar2;
      return 1;
    }
  }
  uVar8 = 0x3c1;
  uVar7 = 0x89;
LAB_143d1ba24:
  ERR_put_error(0xd,0xbe,uVar7,"crypto\\asn1\\tasn_dec.c",uVar8);
  return 0;
}



// FUNCTION 143d1ba50 FUN_143d1ba50 body=2473 status=ok
// SIG undefined FUN_143d1ba50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_143d1ba50(longlong *param_1,longlong *param_2,ulonglong param_3,undefined1 *param_4,int param_5,
             uint param_6,char param_7,char *param_8,int param_9)

{
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  byte *pbVar7;
  char cVar8;
  char *pcVar9;
  char *pcVar10;
  uint *puVar11;
  int iVar12;
  longlong *plVar13;
  uint uVar14;
  bool bVar15;
  uint local_res8 [2];
  longlong *local_res10;
  uint local_res20 [2];
  ulonglong in_stack_ffffffffffffff78;
  undefined8 uVar16;
  ulonglong in_stack_ffffffffffffff80;
  uint in_stack_ffffffffffffff88;
  int local_68;
  int local_64;
  char *local_60;
  char *local_58;
  code *local_50;
  char *local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143d1ba72;
  lVar5 = *(longlong *)(param_4 + 0x18);
  iVar4 = 0;
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  if ((lVar5 == 0) || (local_50 = *(code **)(lVar5 + 0x18), local_50 == (code *)0x0)) {
    local_50 = (code *)0x0;
  }
  param_9 = param_9 + 1;
  local_res10 = param_2;
  if (0x1e < param_9) {
    uVar16 = 0xa0;
    uVar6 = 0xc9;
    goto LAB_143d1bad4;
  }
  uVar14 = 0;
  iVar12 = (int)param_3;
  switch(*param_4) {
  case 0:
    if (*(longlong *)(param_4 + 8) == 0) {
      uVar6 = asn1_d2i_ex_primitive(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8)
      ;
      return uVar6;
    }
    if ((param_5 == -1) && (param_7 == '\0')) {
      uVar6 = asn1_template_ex_d2i
                        (param_1,param_2,param_3,*(longlong *)(param_4 + 8),
                         in_stack_ffffffffffffff78 & 0xffffffffffffff00,param_8,param_9);
      return uVar6;
    }
    uVar16 = 0xaf;
    uVar6 = 0xaa;
    break;
  case 1:
  case 6:
    local_58 = (char *)*param_2;
    uVar14 = 0;
    if (param_5 != -1) {
      uVar14 = param_6;
    }
    local_64 = 0x10;
    if (param_5 != -1) {
      local_64 = param_5;
    }
    local_60 = (char *)CONCAT44(local_60._4_4_,uVar14);
    local_48 = local_58;
    if ((param_8 == (char *)0x0) || (*param_8 == '\0')) {
      uVar3 = ASN1_get_object(&local_58,local_res8,&local_68,local_res20,param_3 & 0xffffffff);
      if (param_8 != (char *)0x0) {
        *(uint *)(param_8 + 4) = uVar3;
        iVar4 = (int)local_58 - (int)local_48;
        *(uint *)(param_8 + 8) = local_res8[0];
        *(uint *)(param_8 + 0x10) = local_res20[0];
        *(int *)(param_8 + 0xc) = local_68;
        *(int *)(param_8 + 0x14) = iVar4;
        *param_8 = '\x01';
        if (((uVar3 & 0x81) != 0) || ((int)(iVar4 + local_res8[0]) <= iVar12)) goto LAB_143d1bfe1;
        ERR_put_error(0xd,0x68,0x9b,"crypto\\asn1\\tasn_dec.c",0x456);
        *param_8 = '\0';
        uVar16 = 0x122;
        goto LAB_143d1bc97;
      }
LAB_143d1bfe1:
      uVar14 = (uint)local_60;
      pcVar10 = local_58;
    }
    else {
      local_res8[0] = *(uint *)(param_8 + 8);
      local_res20[0] = *(uint *)(param_8 + 0x10);
      local_68 = *(int *)(param_8 + 0xc);
      uVar3 = *(uint *)(param_8 + 4);
      pcVar10 = local_58 + *(int *)(param_8 + 0x14);
    }
    local_58 = pcVar10;
    pcVar9 = local_58;
    cVar8 = (char)uVar3;
    if (cVar8 < '\0') {
      ERR_put_error(0xd,0x68,0x66,"crypto\\asn1\\tasn_dec.c",0x45e);
      if (param_8 == (char *)0x0) {
LAB_143d1c0ab:
        uVar16 = 0x122;
      }
      else {
        *param_8 = '\0';
        uVar16 = 0x122;
      }
      goto LAB_143d1bc97;
    }
    if (-1 < local_64) {
      if ((local_64 != local_68) || (uVar14 != local_res20[0])) {
        if (param_7 != '\0') {
          return 0xffffffff;
        }
        if (param_8 != (char *)0x0) {
          *param_8 = '\0';
        }
        ERR_put_error(0xd,0x68,0xa8,"crypto\\asn1\\tasn_dec.c",0x46a);
        goto LAB_143d1c0ab;
      }
      if (param_8 != (char *)0x0) {
        *param_8 = '\0';
      }
    }
    uVar14 = local_res8[0];
    if ((uVar3 & 1) != 0) {
      uVar14 = ((int)local_48 - (int)local_58) + iVar12;
    }
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,cVar8) & 0xffffff01;
    if ((lVar5 == 0) || ((*(byte *)(lVar5 + 8) & 4) == 0)) {
      local_res20[0] = CONCAT31(local_res20[0]._1_3_,cVar8) & 0xffffff01;
    }
    else {
      local_res20[0] = CONCAT31(local_res20[0]._1_3_,1);
      uVar14 = (iVar12 - (int)local_58) + (int)*local_res10;
    }
    local_60 = local_58;
    if ((uVar3 & 0x20) == 0) {
      uVar16 = 0x12e;
      uVar6 = 0x95;
    }
    else {
      if ((*param_1 == 0) && (iVar4 = FUN_143d33dd0(param_1,param_4), iVar4 == 0)) {
        uVar16 = 0x133;
        goto LAB_143d1bc97;
      }
      if ((local_50 != (code *)0x0) && (iVar4 = (*local_50)(4,param_1,param_4), iVar4 == 0))
      goto LAB_143d1c3a4;
      iVar4 = *(int *)(param_4 + 0x10);
      iVar12 = 0;
      puVar11 = *(uint **)(param_4 + 8);
      if (0 < iVar4) {
        do {
          if (((*puVar11 & 0x300) != 0) && (lVar5 = asn1_do_adb(param_1,puVar11,0), lVar5 != 0)) {
            uVar6 = FUN_143d6ce50(param_1,lVar5);
            asn1_template_free(uVar6,lVar5);
          }
          iVar4 = *(int *)(param_4 + 0x10);
          iVar12 = iVar12 + 1;
          puVar11 = puVar11 + 8;
        } while (iVar12 < iVar4);
        puVar11 = *(uint **)(param_4 + 8);
      }
      iVar12 = 0;
      pcVar10 = pcVar9;
      if (0 < iVar4) {
        do {
          pbVar7 = (byte *)asn1_do_adb(param_1,puVar11,1);
          if (pbVar7 == (byte *)0x0) goto LAB_143d1bad9;
          local_48 = (char *)FUN_143d6ce50(param_1,pbVar7);
          pcVar10 = pcVar9;
          if (uVar14 == 0) break;
          local_58 = pcVar9;
          if (((1 < (int)uVar14) && (*pcVar9 == '\0')) && (pcVar9[1] == '\0')) {
            pcVar10 = pcVar9 + 2;
            if ((char)local_res8[0] == '\0') {
              uVar16 = 0x155;
              uVar6 = 0x9f;
              goto LAB_143d1bad4;
            }
            uVar14 = uVar14 + ((int)pcVar9 - (int)pcVar10);
            goto LAB_143d1c268;
          }
          if (iVar12 == *(int *)(param_4 + 0x10) + -1) {
            bVar2 = 0;
          }
          else {
            bVar2 = *pbVar7 & 1;
          }
          iVar4 = asn1_template_ex_d2i(local_48,&local_60,uVar14,pbVar7,bVar2,param_8,param_9);
          pcVar9 = local_60;
          if (iVar4 == 0) goto LAB_143d1c3c6;
          if (iVar4 == -1) {
            asn1_template_free(local_48,pbVar7);
          }
          else {
            uVar14 = uVar14 + ((int)local_58 - (int)local_60);
          }
          iVar12 = iVar12 + 1;
          puVar11 = puVar11 + 8;
          pcVar10 = pcVar9;
        } while (iVar12 < *(int *)(param_4 + 0x10));
      }
      if ((char)local_res8[0] != '\0') {
        if ((((int)uVar14 < 2) || (*pcVar10 != '\0')) || (pcVar10[1] != '\0')) {
          uVar16 = 0x17d;
          uVar6 = 0x89;
          break;
        }
        pcVar10 = pcVar10 + 2;
      }
LAB_143d1c268:
      if (((char)local_res20[0] != '\0') || (uVar14 == 0)) {
        if (iVar12 < *(int *)(param_4 + 0x10)) {
          do {
            pbVar7 = (byte *)asn1_do_adb(param_1,puVar11,1);
            if (pbVar7 == (byte *)0x0) goto LAB_143d1bad9;
            if ((*pbVar7 & 1) == 0) {
              ERR_put_error(0xd,0x78,0x79,"crypto\\asn1\\tasn_dec.c",0x196);
              goto LAB_143d1c3c6;
            }
            uVar6 = FUN_143d6ce50(param_1,pbVar7);
            asn1_template_free(uVar6,pbVar7);
            puVar11 = puVar11 + 8;
            iVar12 = iVar12 + 1;
          } while (iVar12 < *(int *)(param_4 + 0x10));
        }
        plVar13 = local_res10;
        iVar4 = asn1_enc_save(param_1,*local_res10,(int)pcVar10 - (int)*local_res10,param_4);
        if (iVar4 != 0) goto LAB_143d1c355;
        goto LAB_143d1c3a4;
      }
      uVar16 = 0x182;
      uVar6 = 0x94;
    }
    break;
  case 2:
    if ((local_50 == (code *)0x0) || (iVar12 = (*local_50)(4,param_1,param_4), iVar12 != 0)) {
      if (*param_1 == 0) {
        iVar12 = FUN_143d33dd0(param_1,param_4);
        if (iVar12 == 0) {
          uVar16 = 0xe6;
          goto LAB_143d1bc97;
        }
      }
      else {
        iVar12 = FUN_143d6ce40();
        if ((-1 < iVar12) && (iVar12 < *(int *)(param_4 + 0x10))) {
          lVar5 = (longlong)iVar12 * 0x20 + *(longlong *)(param_4 + 8);
          uVar6 = FUN_143d6ce50(param_1,lVar5);
          asn1_template_free(uVar6,lVar5);
          FUN_143d6ce60(param_1,0xffffffff,param_4);
        }
      }
      pbVar7 = *(byte **)(param_4 + 8);
      local_60 = (char *)*local_res10;
      bVar15 = *(int *)(param_4 + 0x10) == 0;
      if (0 < *(int *)(param_4 + 0x10)) {
        do {
          uVar6 = FUN_143d6ce50(param_1,pbVar7);
          iVar12 = asn1_template_ex_d2i
                             (uVar6,&local_60,param_3 & 0xffffffff,pbVar7,1,param_8,param_9);
          if (iVar12 != -1) {
            if (iVar12 < 1) {
              asn1_template_free(uVar6,pbVar7);
              ERR_put_error(0xd,0x78,0x3a,"crypto\\asn1\\tasn_dec.c",0xfd);
              goto LAB_143d1c3c6;
            }
            break;
          }
          iVar4 = iVar4 + 1;
          pbVar7 = pbVar7 + 0x20;
        } while (iVar4 < *(int *)(param_4 + 0x10));
        bVar15 = iVar4 == *(int *)(param_4 + 0x10);
      }
      pcVar10 = local_60;
      plVar13 = local_res10;
      if (bVar15) {
        if (param_7 != '\0') {
          FUN_143d1a730(param_1,param_4);
          return 0xffffffff;
        }
        uVar16 = 0x109;
        uVar6 = 0x8f;
        break;
      }
      FUN_143d6ce60(param_1,iVar4,param_4);
LAB_143d1c355:
      if ((local_50 == (code *)0x0) || (iVar4 = (*local_50)(5,param_1,param_4), iVar4 != 0)) {
        *plVar13 = (longlong)pcVar10;
        return 1;
      }
    }
LAB_143d1c3a4:
    ERR_put_error(0xd,0x78,100,"crypto\\asn1\\tasn_dec.c",0x1a6);
    pbVar7 = (byte *)0x0;
LAB_143d1c3c6:
    if (pbVar7 != (byte *)0x0) {
      ERR_add_error_data(4,"Field=",*(undefined8 *)(pbVar7 + 0x10),", Type=",
                         *(undefined8 *)(param_4 + 0x28));
      return 0;
    }
    goto LAB_143d1bad9;
  default:
    goto LAB_143d1baf0;
  case 4:
    uVar6 = (**(code **)(lVar5 + 0x20))
                      (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar6;
  case 5:
    pcVar1 = (code *)*param_2;
    if ((param_8 == (char *)0x0) || (*param_8 == '\0')) {
      local_50 = pcVar1;
      uVar3 = ASN1_get_object(&local_50,&local_60,local_res20,local_res8,param_3 & 0xffffffff);
      if (param_8 == (char *)0x0) goto LAB_143d1bc62;
      *(uint *)(param_8 + 4) = uVar3;
      iVar4 = (int)local_50 - (int)pcVar1;
      *(uint *)(param_8 + 8) = (uint)local_60;
      *(uint *)(param_8 + 0x10) = local_res8[0];
      *(uint *)(param_8 + 0xc) = local_res20[0];
      *(int *)(param_8 + 0x14) = iVar4;
      *param_8 = '\x01';
      if (((uVar3 & 0x81) != 0) || ((int)(iVar4 + (uint)local_60) <= iVar12)) goto LAB_143d1bc62;
      ERR_put_error(0xd,0x68,0x9b,"crypto\\asn1\\tasn_dec.c",0x456);
LAB_143d1bc8c:
      *param_8 = '\0';
    }
    else {
      local_res8[0] = *(uint *)(param_8 + 0x10);
      local_res20[0] = *(uint *)(param_8 + 0xc);
      uVar3 = *(uint *)(param_8 + 4);
      local_60 = (char *)CONCAT44(local_60._4_4_,*(undefined4 *)(param_8 + 8));
      local_50 = pcVar1 + *(int *)(param_8 + 0x14);
LAB_143d1bc62:
      if (-1 < (char)uVar3) {
        if ((char)local_res8[0] == '\0') {
          if (local_res20[0] < 0x1f) {
            uVar14 = *(uint *)(&DAT_145d7e7c0 + (longlong)(int)local_res20[0] * 4);
          }
          if ((*(uint *)(param_4 + 4) & uVar14) != 0) {
            uVar6 = asn1_d2i_ex_primitive
                              (param_1,local_res10,param_3 & 0xffffffff,param_4,local_res20[0],
                               in_stack_ffffffffffffff80 & 0xffffffff00000000,
                               in_stack_ffffffffffffff88 & 0xffffff00,param_8);
            return uVar6;
          }
          if (param_7 != '\0') {
            return 0xffffffff;
          }
          uVar16 = 0xcf;
          uVar6 = 0x8c;
        }
        else {
          if (param_7 != '\0') {
            return 0xffffffff;
          }
          uVar16 = 199;
          uVar6 = 0x8b;
        }
        break;
      }
      ERR_put_error(0xd,0x68,0x66,"crypto\\asn1\\tasn_dec.c",0x45e);
      if (param_8 != (char *)0x0) goto LAB_143d1bc8c;
    }
    uVar16 = 0xbe;
LAB_143d1bc97:
    uVar6 = 0x3a;
  }
LAB_143d1bad4:
  ERR_put_error(0xd,0x78,uVar6,"crypto\\asn1\\tasn_dec.c",uVar16);
LAB_143d1bad9:
  ERR_add_error_data(2,"Type=",*(undefined8 *)(param_4 + 0x28));
LAB_143d1baf0:
  return 0;
}



// FUNCTION 143d1c420 asn1_template_ex_d2i body=833 status=ok
// SIG undefined asn1_template_ex_d2i(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
asn1_template_ex_d2i
          (char *param_1,undefined8 *param_2,uint param_3,uint *param_4,char param_5,char *param_6,
          undefined4 param_7)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  char *local_res8;
  uint in_stack_ffffffffffffff98;
  undefined4 uVar8;
  int local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  char *local_38 [2];
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  uVar1 = *param_4;
  local_38[0] = (char *)*param_2;
  local_res8 = param_1;
  if ((uVar1 & 0x10) == 0) {
    uVar7 = asn1_template_noexp_d2i();
    return uVar7;
  }
  local_3c = param_4[1];
  iVar4 = (int)local_38[0];
  if ((param_6 == (char *)0x0) || (*param_6 == '\0')) {
    in_stack_ffffffffffffff98 = param_3;
    uVar3 = ASN1_get_object(local_38,&local_48,&local_40,&local_44,param_3);
    if (param_6 == (char *)0x0) goto LAB_143d1c56f;
    *(uint *)(param_6 + 4) = uVar3;
    iVar6 = (int)local_38[0] - iVar4;
    *(int *)(param_6 + 8) = local_48;
    *(uint *)(param_6 + 0x10) = local_44;
    *(uint *)(param_6 + 0xc) = local_40;
    *(int *)(param_6 + 0x14) = iVar6;
    *param_6 = '\x01';
    if (((uVar3 & 0x81) != 0) || (iVar6 + local_48 <= (int)param_3)) goto LAB_143d1c56f;
    ERR_put_error(0xd,0x68,0x9b,"crypto\\asn1\\tasn_dec.c",0x456);
    *param_6 = '\0';
    uVar8 = 0x1d1;
  }
  else {
    local_48 = *(int *)(param_6 + 8);
    local_38[0] = local_38[0] + *(int *)(param_6 + 0x14);
    local_44 = *(uint *)(param_6 + 0x10);
    local_40 = *(uint *)(param_6 + 0xc);
    uVar3 = *(uint *)(param_6 + 4);
LAB_143d1c56f:
    pcVar2 = local_res8;
    if ((char)uVar3 < '\0') {
      ERR_put_error(0xd,0x68,0x66,"crypto\\asn1\\tasn_dec.c",0x45e);
      if (param_6 == (char *)0x0) {
LAB_143d1c66b:
        uVar8 = 0x1d1;
      }
      else {
        *param_6 = '\0';
        uVar8 = 0x1d1;
      }
    }
    else {
      if (-1 < (int)local_3c) {
        if ((local_3c != local_40) || ((uVar1 & 0xc0) != local_44)) {
          if (param_5 != '\0') {
            return 0xffffffff;
          }
          if (param_6 != (char *)0x0) {
            *param_6 = '\0';
          }
          ERR_put_error(0xd,0x68,0xa8,"crypto\\asn1\\tasn_dec.c",0x46a);
          goto LAB_143d1c66b;
        }
        if (param_6 != (char *)0x0) {
          *param_6 = '\0';
        }
      }
      iVar5 = (int)local_38[0];
      iVar6 = local_48;
      if ((uVar3 & 1) != 0) {
        iVar6 = (iVar4 - iVar5) + param_3;
      }
      local_res8 = local_38[0];
      if ((uVar3 & 0x20) == 0) {
        uVar8 = 0x1d7;
        uVar7 = 0x78;
        goto LAB_143d1c605;
      }
      iVar4 = asn1_template_noexp_d2i
                        (pcVar2,&local_res8,iVar6,param_4,in_stack_ffffffffffffff98 & 0xffffff00,
                         param_6,param_7);
      if (iVar4 != 0) {
        iVar6 = (iVar5 - (int)local_res8) + iVar6;
        if ((uVar3 & 1) == 0) {
          if (iVar6 == 0) goto LAB_143d1c6f1;
          uVar8 = 0x1ee;
          uVar7 = 0x77;
        }
        else {
          if (((1 < iVar6) && (*local_res8 == '\0')) && (local_res8[1] == '\0')) {
            local_res8 = local_res8 + 2;
LAB_143d1c6f1:
            *param_2 = local_res8;
            return 1;
          }
          uVar8 = 0x1e5;
          uVar7 = 0x89;
        }
        goto LAB_143d1c605;
      }
      uVar8 = 0x1dd;
    }
  }
  uVar7 = 0x3a;
LAB_143d1c605:
  ERR_put_error(0xd,0x84,uVar7,"crypto\\asn1\\tasn_dec.c",uVar8);
  return 0;
}



// FUNCTION 143d1c770 asn1_template_noexp_d2i body=1160 status=ok
// SIG undefined asn1_template_noexp_d2i(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

undefined8
asn1_template_noexp_d2i
          (longlong *******param_1,undefined8 *param_2,undefined4 param_3,uint *param_4,char param_5
          ,char *param_6,undefined4 param_7)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  longlong ******pppppplVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 local_res8;
  undefined8 *local_res10;
  undefined4 uVar9;
  int local_64;
  uint local_60;
  uint local_5c;
  char *local_58;
  char *local_50;
  longlong *******local_48 [2];
  
  local_res8 = CONCAT44(local_res8._4_4_,param_3);
  if (param_1 == (longlong *******)0x0) {
    return 0;
  }
  uVar6 = *param_4;
  local_58 = (char *)*param_2;
  uVar8 = uVar6 & 0xc0;
  if ((uVar6 >> 0xc & 1) != 0) {
    local_48[0] = param_1;
    param_1 = (longlong *******)local_48;
  }
  local_res10 = param_2;
  if ((uVar6 & 6) == 0) {
    if ((uVar6 & 8) == 0) {
      uVar7 = (**(code **)(param_4 + 6))();
      iVar3 = FUN_143d1ba50(param_1,&local_58,param_3,uVar7,0xffffffff,0,param_5,param_6,param_7);
      if (iVar3 != 0) {
LAB_143d1cbae:
        if (iVar3 == -1) {
          return 0xffffffff;
        }
LAB_143d1cbbe:
        *local_res10 = local_58;
        return 1;
      }
      uVar9 = 0x273;
    }
    else {
      uVar7 = (**(code **)(param_4 + 6))();
      iVar3 = FUN_143d1ba50(param_1,&local_58,param_3,uVar7,param_4[1],uVar8,param_5,param_6,param_7
                           );
      if (iVar3 != 0) goto LAB_143d1cbae;
      uVar9 = 0x26a;
    }
    uVar7 = 0x3a;
LAB_143d1cb96:
    ERR_put_error(0xd,0x83,uVar7,"crypto\\asn1\\tasn_dec.c",uVar9);
  }
  else {
    if ((uVar6 & 8) == 0) {
      uVar8 = 0;
      uVar6 = (uVar6 & 2 | 0x20) >> 1;
    }
    else {
      uVar6 = param_4[1];
    }
    iVar3 = (int)local_58;
    if ((param_6 == (char *)0x0) || (*param_6 == '\0')) {
      local_50 = local_58;
      uVar2 = ASN1_get_object(&local_50,&local_64,&local_5c,&local_60,param_3);
      if (param_6 == (char *)0x0) goto LAB_143d1c849;
      *(uint *)(param_6 + 4) = uVar2;
      iVar5 = (int)local_50 - iVar3;
      *(int *)(param_6 + 8) = local_64;
      *(uint *)(param_6 + 0x10) = local_60;
      *(uint *)(param_6 + 0xc) = local_5c;
      *(int *)(param_6 + 0x14) = iVar5;
      *param_6 = '\x01';
      if ((uVar2 & 0x81) != 0) goto LAB_143d1c849;
      if (iVar5 + local_64 <= (int)local_res8) goto LAB_143d1c84d;
      ERR_put_error(0xd,0x68,0x9b,"crypto\\asn1\\tasn_dec.c",0x456);
      *param_6 = '\0';
    }
    else {
      local_64 = *(int *)(param_6 + 8);
      local_50 = local_58 + *(int *)(param_6 + 0x14);
      local_60 = *(uint *)(param_6 + 0x10);
      local_5c = *(uint *)(param_6 + 0xc);
      uVar2 = *(uint *)(param_6 + 4);
LAB_143d1c849:
LAB_143d1c84d:
      if (-1 < (char)uVar2) {
        if (-1 < (int)uVar6) {
          if ((uVar6 != local_5c) || (uVar8 != local_60)) {
            if (param_5 != '\0') {
              return 0xffffffff;
            }
            if (param_6 != (char *)0x0) {
              *param_6 = '\0';
            }
            ERR_put_error(0xd,0x68,0xa8,"crypto\\asn1\\tasn_dec.c",0x46a);
            goto LAB_143d1c985;
          }
          if (param_6 != (char *)0x0) {
            *param_6 = '\0';
          }
        }
        iVar5 = local_64;
        if ((uVar2 & 1) != 0) {
          iVar5 = (iVar3 - (int)local_50) + (int)local_res8;
        }
        pppppplVar4 = *param_1;
        local_58 = local_50;
        if (pppppplVar4 == (longlong ******)0x0) {
          pppppplVar4 = (longlong ******)OPENSSL_sk_new_null();
          *param_1 = pppppplVar4;
        }
        else {
          iVar3 = OPENSSL_sk_num(pppppplVar4);
          while (0 < iVar3) {
            local_res8 = OPENSSL_sk_pop(pppppplVar4);
            uVar7 = (**(code **)(param_4 + 6))();
            FUN_143d1a730(&local_res8,uVar7);
            iVar3 = OPENSSL_sk_num(pppppplVar4);
          }
        }
        pcVar1 = local_58;
        if (*param_1 == (longlong ******)0x0) {
          uVar9 = 0x23c;
          uVar7 = 0x41;
        }
        else {
          while( true ) {
            local_58 = pcVar1;
            if (iVar5 < 1) {
              if ((uVar2 & 1) == 0) goto LAB_143d1cbbe;
              uVar9 = 0x261;
              uVar7 = 0x89;
              goto LAB_143d1cb96;
            }
            if (((1 < iVar5) && (*pcVar1 == '\0')) && (pcVar1[1] == '\0')) break;
            local_res8 = 0;
            uVar7 = (**(code **)(param_4 + 6))();
            iVar3 = FUN_143d1ba50(&local_res8,&local_58,iVar5,uVar7,0xffffffff,0,0,param_6,param_7);
            if (iVar3 == 0) {
              uVar9 = 0x254;
              uVar7 = 0x3a;
              goto LAB_143d1cace;
            }
            iVar5 = iVar5 + ((int)pcVar1 - (int)local_58);
            iVar3 = OPENSSL_sk_push(*param_1,local_res8);
            pcVar1 = local_58;
            if (iVar3 == 0) {
              uVar9 = 0x25b;
              uVar7 = 0x41;
LAB_143d1cace:
              ERR_put_error(0xd,0x83,uVar7,"crypto\\asn1\\tasn_dec.c",uVar9);
              uVar7 = (**(code **)(param_4 + 6))();
              ASN1_item_free(local_res8,uVar7);
              return 0;
            }
          }
          local_58 = pcVar1 + 2;
          if ((uVar2 & 1) != 0) goto LAB_143d1cbbe;
          uVar9 = 0x248;
          uVar7 = 0x9f;
        }
        goto LAB_143d1cb96;
      }
      ERR_put_error(0xd,0x68,0x66,"crypto\\asn1\\tasn_dec.c",0x45e);
      if (param_6 != (char *)0x0) {
        *param_6 = '\0';
      }
    }
LAB_143d1c985:
    ERR_put_error(0xd,0x83,0x3a,"crypto\\asn1\\tasn_dec.c",0x229);
  }
  return 0;
}



// FUNCTION 143d1cc00 FUN_143d1cc00 body=878 status=ok
// SIG undefined FUN_143d1cc00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_143d1cc00(longlong *param_1,longlong param_2,char *param_3,undefined8 param_4,
                       uint param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  code *pcVar7;
  uint uVar8;
  code *pcVar10;
  code *pcVar11;
  longlong lVar12;
  uint local_res18 [2];
  int local_38;
  code *pcVar9;
  
  lVar12 = *(longlong *)(param_3 + 0x18);
  pcVar11 = (code *)0x0;
  local_38 = 1;
  if ((*param_3 != '\0') && (*param_1 == 0)) {
    return 0;
  }
  pcVar10 = pcVar11;
  if ((lVar12 != 0) && (pcVar10 = (code *)0x0, *(code **)(lVar12 + 0x18) != (code *)0x0)) {
    pcVar10 = *(code **)(lVar12 + 0x18);
  }
  switch(*param_3) {
  case '\0':
    lVar12 = *(longlong *)(param_3 + 8);
    if (lVar12 == 0) {
      uVar6 = asn1_i2d_ex_primitive(param_1,param_2,param_3);
      return uVar6;
    }
    break;
  case '\x02':
    if ((pcVar10 != (code *)0x0) && (iVar2 = (*pcVar10)(6,param_1,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_143d6ce40(param_1,param_3);
    if ((iVar2 < 0) || (*(int *)(param_3 + 0x10) <= iVar2)) {
      if (pcVar10 != (code *)0x0) {
        (*pcVar10)(7,param_1,param_3);
        return 0;
      }
      return 0;
    }
    lVar12 = (longlong)iVar2 * 0x20 + *(longlong *)(param_3 + 8);
    param_1 = (longlong *)FUN_143d6ce50(param_1,lVar12);
    param_4 = 0xffffffff;
    break;
  default:
    return 0;
  case '\x04':
    uVar6 = (**(code **)(lVar12 + 0x28))(param_1,param_2,param_3,param_4,param_5);
    return uVar6;
  case '\x05':
    uVar6 = asn1_i2d_ex_primitive(param_1,param_2,param_3,0xffffffff,param_5);
    return uVar6;
  case '\x06':
    local_38 = 1;
    if ((param_5 >> 0xb & 1) != 0) {
      local_38 = 2;
    }
  case '\x01':
    iVar2 = asn1_enc_restore(local_res18,param_2,param_1,param_3);
    if (iVar2 < 0) {
      return 0;
    }
    if (0 < iVar2) {
      return (ulonglong)local_res18[0];
    }
    iVar3 = (int)param_4;
    iVar2 = 0x10;
    if (iVar3 != -1) {
      iVar2 = iVar3;
    }
    local_res18[0] = 0;
    uVar1 = param_5 & 0xffffff3f;
    if (iVar3 != -1) {
      uVar1 = param_5;
    }
    pcVar7 = pcVar11;
    if (pcVar10 != (code *)0x0) {
      iVar3 = (*pcVar10)(6,param_1,param_3);
      if (iVar3 == 0) {
        return 0;
      }
      pcVar7 = (code *)(ulonglong)local_res18[0];
    }
    lVar12 = *(longlong *)(param_3 + 8);
    pcVar9 = pcVar11;
    if (0 < *(int *)(param_3 + 0x10)) {
      do {
        lVar4 = asn1_do_adb(param_1,lVar12,1);
        if (lVar4 == 0) {
          return 0;
        }
        uVar5 = FUN_143d6ce50(param_1,lVar4);
        iVar3 = asn1_template_ex_i2d(uVar5,0,lVar4,0xffffffff,uVar1);
        if ((iVar3 == -1) || ((int)(0x7fffffff - local_res18[0]) < iVar3)) {
          return 0xffffffff;
        }
        local_res18[0] = local_res18[0] + iVar3;
        pcVar7 = (code *)(ulonglong)local_res18[0];
        lVar12 = lVar12 + 0x20;
        uVar8 = (int)pcVar9 + 1;
        pcVar9 = (code *)(ulonglong)uVar8;
      } while ((int)uVar8 < *(int *)(param_3 + 0x10));
    }
    uVar6 = ASN1_object_size(local_38,pcVar7,iVar2);
    if (param_2 == 0) {
      return uVar6;
    }
    if ((int)uVar6 != -1) {
      ASN1_put_object(param_2,local_38,local_res18[0],iVar2,uVar1);
      lVar12 = *(longlong *)(param_3 + 8);
      if (0 < *(int *)(param_3 + 0x10)) {
        do {
          lVar4 = asn1_do_adb(param_1,lVar12,1);
          if (lVar4 == 0) {
            return 0;
          }
          uVar5 = FUN_143d6ce50(param_1,lVar4);
          asn1_template_ex_i2d(uVar5,param_2,lVar4,0xffffffff,uVar1);
          lVar12 = lVar12 + 0x20;
          uVar8 = (int)pcVar11 + 1;
          pcVar11 = (code *)(ulonglong)uVar8;
        } while ((int)uVar8 < *(int *)(param_3 + 0x10));
      }
      if (local_38 == 2) {
        ASN1_put_eoc(param_2);
      }
      if ((pcVar10 != (code *)0x0) && (iVar2 = (*pcVar10)(7,param_1,param_3), iVar2 == 0)) {
        return 0;
      }
      return uVar6 & 0xffffffff;
    }
    return uVar6;
  }
  uVar6 = asn1_template_ex_i2d(param_1,param_2,lVar12,param_4,param_5);
  return uVar6;
}



// FUNCTION 143d1cf90 ASN1_item_i2d body=25 status=ok
// SIG undefined ASN1_item_i2d(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_item_i2d(void)

{
  asn1_item_flags_i2d();
  return;
}



// FUNCTION 143d1cfb0 FUN_143d1cfb0 body=405 status=ok
// SIG undefined FUN_143d1cfb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_143d1cfb0(longlong *param_1,void *param_2,undefined4 *param_3,char *param_4)

{
  int iVar1;
  code *pcVar2;
  uint *puVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 *_Src;
  void **ppvVar7;
  void *local_res10 [2];
  undefined1 local_res20 [8];
  
  local_res10[0] = param_2;
  if ((*(longlong *)(param_4 + 0x18) != 0) &&
     (pcVar2 = *(code **)(*(longlong *)(param_4 + 0x18) + 0x30), pcVar2 != (code *)0x0)) {
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  if ((*param_4 != '\0') || (*(int *)(param_4 + 4) != 1)) {
    if (*param_1 == 0) {
      return 0xffffffff;
    }
    if (*param_4 == '\x05') {
      uVar5 = *(undefined4 *)(*param_1 + 4);
      *param_3 = uVar5;
      goto LAB_143d1d021;
    }
  }
  if (*(int *)(param_4 + 4) == -4) {
    uVar5 = *(undefined4 *)*param_1;
    param_1 = (longlong *)((undefined4 *)*param_1 + 2);
    *param_3 = uVar5;
  }
  else {
    uVar5 = *param_3;
  }
LAB_143d1d021:
  switch(uVar5) {
  case 1:
    iVar1 = (int)*param_1;
    if ((iVar1 == -1) ||
       ((local_res20[0] = (undefined1)iVar1, *(int *)(param_4 + 4) != -4 &&
        (((iVar1 != 0 && (0 < *(int *)(param_4 + 0x20))) ||
         ((iVar1 == 0 && (local_res20[0] = 0, *(int *)(param_4 + 0x20) == 0)))))))) {
      return 0xffffffff;
    }
    uVar6 = 1;
    _Src = local_res20;
    break;
  case 2:
  case 10:
    ppvVar7 = local_res10;
    if (param_2 == (void *)0x0) {
      ppvVar7 = (void **)0x0;
    }
    uVar4 = i2c_ASN1_INTEGER(*param_1,ppvVar7);
    return uVar4;
  case 3:
    ppvVar7 = local_res10;
    if (param_2 == (void *)0x0) {
      ppvVar7 = (void **)0x0;
    }
    uVar4 = i2c_ASN1_BIT_STRING(*param_1,ppvVar7);
    return uVar4;
  default:
    puVar3 = (uint *)*param_1;
    if ((*(int *)(param_4 + 0x20) == 0x800) && ((puVar3[4] & 0x10) != 0)) {
      if (param_2 != (void *)0x0) {
        *(void **)(puVar3 + 2) = param_2;
        *puVar3 = 0;
      }
      return 0xfffffffe;
    }
    _Src = *(undefined1 **)(puVar3 + 2);
    uVar6 = *puVar3;
    break;
  case 5:
    _Src = (undefined1 *)0x0;
    uVar6 = 0;
    break;
  case 6:
    _Src = *(undefined1 **)(*param_1 + 0x18);
    uVar6 = *(uint *)(*param_1 + 0x14);
    if (_Src == (undefined1 *)0x0) {
      return 0xffffffff;
    }
    if (uVar6 == 0) {
      return 0xffffffff;
    }
  }
  if ((param_2 != (void *)0x0) && (uVar6 != 0)) {
    _guard_xfg_dispatch_icall_nop(param_2,_Src,(longlong)(int)uVar6);
  }
  return (ulonglong)uVar6;
}



// FUNCTION 143d1d170 asn1_i2d_ex_primitive body=245 status=ok
// SIG undefined asn1_i2d_ex_primitive(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong asn1_i2d_ex_primitive
                    (undefined8 param_1,longlong *param_2,longlong param_3,int param_4,
                    undefined4 param_5)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  int local_res18 [4];
  undefined8 uVar5;
  
  uVar5 = 0x143d1d18c;
  local_res18[0] = *(int *)(param_3 + 4);
  iVar4 = 0;
  uVar2 = FUN_143d1cfb0(param_1,0,local_res18,param_3);
  uVar3 = (ulonglong)uVar2;
  if ((local_res18[0] - 0x10U < 2) || (local_res18[0] == -3)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (uVar2 == 0xffffffff) {
    uVar3 = 0;
  }
  else {
    if (uVar2 == 0xfffffffe) {
      uVar3 = 0;
      iVar4 = 2;
    }
    if (param_4 == -1) {
      param_4 = local_res18[0];
    }
    if (param_2 != (longlong *)0x0) {
      if (bVar1) {
        ASN1_put_object(param_2,iVar4,uVar3,param_4,param_5,uVar5);
      }
      FUN_143d1cfb0(param_1,*param_2,local_res18,param_3);
      if (iVar4 == 0) {
        *param_2 = *param_2 + (longlong)(int)uVar3;
      }
      else {
        ASN1_put_eoc(param_2);
      }
    }
    if (bVar1) {
      uVar3 = ASN1_object_size(iVar4,uVar3,param_4);
    }
  }
  return uVar3;
}



// FUNCTION 143d1d270 asn1_item_flags_i2d body=251 status=ok
// SIG undefined asn1_item_flags_i2d(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong asn1_item_flags_i2d(undefined8 param_1,longlong *param_2,undefined8 param_3,
                             undefined4 param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 local_res8;
  longlong local_res10;
  undefined8 uVar4;
  
  uVar4 = 0x143d1d282;
  local_res8 = param_1;
  if ((param_2 != (longlong *)0x0) && (*param_2 == 0)) {
    uVar1 = FUN_143d1cc00(&local_res8,0,param_3,0xffffffff,param_4,0x143d1d282);
    if ((int)uVar1 < 1) {
      return (ulonglong)uVar1;
    }
    lVar2 = CRYPTO_malloc((longlong)(int)uVar1,"crypto\\asn1\\tasn_enc.c",0x40);
    if (lVar2 == 0) {
      ERR_put_error(0xd,0x76,0x41,"crypto\\asn1\\tasn_enc.c",0x41);
      uVar1 = 0xffffffff;
    }
    else {
      local_res10 = lVar2;
      FUN_143d1cc00(&local_res8,&local_res10,param_3,0xffffffff,param_4,uVar4);
      *param_2 = lVar2;
    }
    return (ulonglong)uVar1;
  }
  uVar3 = FUN_143d1cc00(&local_res8,param_2,param_3,0xffffffff,param_4,0x143d1d282);
  return uVar3;
}



// FUNCTION 143d1d370 asn1_set_seq_out body=669 status=ok
// SIG undefined asn1_set_seq_out(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
asn1_set_seq_out(undefined8 param_1,longlong *param_2,int param_3,undefined8 param_4,int param_5,
                undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  void *_Base;
  void *pvVar4;
  undefined8 uVar5;
  int iVar6;
  int *piVar7;
  undefined8 *puVar8;
  void *local_48;
  undefined8 local_40;
  void *local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x143d1d381;
  iVar6 = 0;
  local_48 = (void *)0x0;
  if ((param_5 != 0) && (iVar1 = OPENSSL_sk_num(), 1 < iVar1)) {
    iVar1 = OPENSSL_sk_num(param_1);
    _Base = (void *)CRYPTO_malloc((longlong)iVar1 * 0x18,"crypto\\asn1\\tasn_enc.c",0x180);
    uVar5 = 0;
    if (_Base != (void *)0x0) {
      pvVar4 = (void *)CRYPTO_malloc((longlong)param_3,"crypto\\asn1\\tasn_enc.c",0x183);
      local_38 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        CRYPTO_free(_Base,"crypto\\asn1\\tasn_enc.c",0x185);
        uVar5 = 0;
      }
      else {
        local_48 = pvVar4;
        iVar1 = OPENSSL_sk_num(param_1);
        if (0 < iVar1) {
          puVar8 = (undefined8 *)((longlong)_Base + 0x10);
          iVar1 = iVar6;
          do {
            local_40 = OPENSSL_sk_value(param_1,iVar1);
            puVar8[-2] = local_48;
            uVar2 = FUN_143d1cc00(&local_40,&local_48,param_4,0xffffffff,param_6);
            *(undefined4 *)(puVar8 + -1) = uVar2;
            *puVar8 = local_40;
            iVar1 = iVar1 + 1;
            iVar3 = OPENSSL_sk_num(param_1);
            puVar8 = puVar8 + 3;
            pvVar4 = local_38;
          } while (iVar1 < iVar3);
        }
        iVar1 = OPENSSL_sk_num(param_1);
        qsort(_Base,(longlong)iVar1,0x18,der_cmp);
        local_48 = (void *)*param_2;
        iVar1 = OPENSSL_sk_num(param_1);
        if (0 < iVar1) {
          piVar7 = (int *)((longlong)_Base + 8);
          iVar1 = iVar6;
          do {
            _guard_xfg_dispatch_icall_nop(local_48,*(void **)(piVar7 + -2),(longlong)*piVar7);
            iVar3 = *piVar7;
            piVar7 = piVar7 + 6;
            local_48 = (void *)((longlong)local_48 + (longlong)iVar3);
            iVar1 = iVar1 + 1;
            iVar3 = OPENSSL_sk_num(param_1);
          } while (iVar1 < iVar3);
        }
        *param_2 = (longlong)local_48;
        if ((param_5 == 2) && (iVar1 = OPENSSL_sk_num(param_1), 0 < iVar1)) {
          puVar8 = (undefined8 *)((longlong)_Base + 0x10);
          do {
            OPENSSL_sk_set(param_1,iVar6,*puVar8);
            puVar8 = puVar8 + 3;
            iVar6 = iVar6 + 1;
            iVar1 = OPENSSL_sk_num(param_1);
          } while (iVar6 < iVar1);
        }
        CRYPTO_free(_Base,"crypto\\asn1\\tasn_enc.c",0x1aa);
        CRYPTO_free(pvVar4,"crypto\\asn1\\tasn_enc.c",0x1ab);
        uVar5 = 1;
      }
    }
    return uVar5;
  }
  iVar1 = OPENSSL_sk_num(param_1);
  if (0 < iVar1) {
    do {
      local_40 = OPENSSL_sk_value(param_1,iVar6);
      FUN_143d1cc00(&local_40,param_2,param_4,0xffffffff,param_6);
      iVar6 = iVar6 + 1;
      iVar1 = OPENSSL_sk_num(param_1);
    } while (iVar6 < iVar1);
  }
  return 1;
}



// FUNCTION 143d1d610 asn1_template_ex_i2d body=798 status=ok
// SIG undefined asn1_template_ex_i2d(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

ulonglong asn1_template_ex_i2d
                    (longlong *******param_1,longlong param_2,uint *param_3,uint param_4,
                    uint param_5)

{
  longlong ******pppppplVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  char cVar11;
  int iVar12;
  bool bVar13;
  uint local_54;
  uint local_50;
  longlong *******local_38;
  undefined8 local_30;
  
  local_30 = 0x143d1d62c;
  uVar10 = *param_3;
  if ((uVar10 >> 0xc & 1) != 0) {
    local_38 = param_1;
    param_1 = (longlong *******)&local_38;
  }
  iVar12 = 0;
  uVar9 = 0;
  if ((uVar10 & 0x18) == 0) {
    if (param_4 == 0xffffffff) {
      param_4 = 0xffffffff;
    }
    else {
      uVar9 = param_5 & 0xc0;
    }
LAB_143d1d69b:
    param_5 = param_5 & 0xffffff3f;
    bVar13 = ((uVar10 & param_5) >> 0xb & 1) != 0;
    cVar11 = bVar13 + '\x01';
    if ((uVar10 & 6) == 0) {
      if ((uVar10 & 0x10) == 0) {
        uVar5 = (**(code **)(param_3 + 6))();
        uVar6 = FUN_143d1cc00(param_1,param_2,uVar5,param_4,uVar9 | param_5);
        return uVar6;
      }
      uVar5 = (**(code **)(param_3 + 6))();
      iVar12 = FUN_143d1cc00(param_1,0,uVar5,0xffffffff,param_5);
      if (iVar12 != 0) {
        uVar10 = ASN1_object_size(cVar11,iVar12,param_4);
        uVar6 = (ulonglong)uVar10;
        if (param_2 == 0) {
          return uVar6;
        }
        if (uVar10 == 0xffffffff) {
          return 0xffffffff;
        }
        ASN1_put_object(param_2,cVar11,iVar12,param_4,uVar9);
        uVar5 = (**(code **)(param_3 + 6))();
        FUN_143d1cc00(param_1,param_2,uVar5,0xffffffff,param_5);
        if (!bVar13) {
          return uVar6;
        }
        ASN1_put_eoc(param_2);
        return uVar6;
      }
    }
    else {
      pppppplVar1 = *param_1;
      if (pppppplVar1 != (longlong ******)0x0) {
        if ((uVar10 & 2) == 0) {
          cVar7 = '\0';
        }
        else {
          cVar7 = ((uVar10 & 4) != 0) + '\x01';
        }
        if ((param_4 == 0xffffffff) || (local_54 = param_4, local_50 = uVar9, (uVar10 & 0x10) != 0))
        {
          local_50 = 0;
          local_54 = (cVar7 != '\0') + 0x10;
        }
        iVar2 = OPENSSL_sk_num(pppppplVar1);
        iVar8 = iVar12;
        if (0 < iVar2) {
          do {
            local_30 = OPENSSL_sk_value(pppppplVar1,iVar12);
            uVar5 = (**(code **)(param_3 + 6))();
            iVar2 = FUN_143d1cc00(&local_30,0,uVar5,0xffffffff,param_5);
            if ((iVar2 == -1) || (0x7fffffff - iVar2 < iVar8)) goto LAB_143d1d7a1;
            iVar8 = iVar8 + iVar2;
            iVar12 = iVar12 + 1;
            iVar2 = OPENSSL_sk_num(pppppplVar1);
          } while (iVar12 < iVar2);
        }
        uVar3 = ASN1_object_size(cVar11,iVar8,local_54);
        if (uVar3 != 0xffffffff) {
          uVar10 = uVar10 & 0x10;
          uVar4 = uVar3;
          if (uVar10 != 0) {
            uVar4 = ASN1_object_size(cVar11,uVar3,param_4);
          }
          uVar6 = (ulonglong)uVar4;
          if (param_2 == 0) {
            return uVar6;
          }
          if (uVar4 == 0xffffffff) {
            return 0xffffffff;
          }
          if (uVar10 != 0) {
            ASN1_put_object(param_2,cVar11,uVar3,param_4,uVar9);
          }
          ASN1_put_object(param_2,cVar11,iVar8,local_54,local_50);
          uVar5 = (**(code **)(param_3 + 6))();
          asn1_set_seq_out(pppppplVar1,param_2,iVar8,uVar5,cVar7,param_5);
          if (!bVar13) {
            return uVar6;
          }
          ASN1_put_eoc(param_2);
          if (uVar10 == 0) {
            return uVar6;
          }
          ASN1_put_eoc(param_2);
          return uVar6;
        }
        goto LAB_143d1d7a1;
      }
    }
    uVar6 = 0;
  }
  else {
    if (param_4 == 0xffffffff) {
      param_4 = param_3[1];
      uVar9 = uVar10 & 0xc0;
      goto LAB_143d1d69b;
    }
LAB_143d1d7a1:
    uVar6 = 0xffffffff;
  }
  return uVar6;
}



// FUNCTION 143d1d930 der_cmp body=65 status=ok
// SIG undefined der_cmp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int der_cmp(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 1);
  iVar2 = *(int *)(param_2 + 1);
  iVar3 = iVar1;
  if (iVar2 <= iVar1) {
    iVar3 = iVar2;
  }
  iVar3 = _guard_xfg_dispatch_icall_nop((void *)*param_1,(void *)*param_2,(longlong)iVar3);
  if (iVar3 == 0) {
    iVar3 = iVar1 - iVar2;
  }
  return iVar3;
}



// FUNCTION 143d1d980 PEM_read_bio_DHparams body=235 status=ok
// SIG undefined PEM_read_bio_DHparams(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong PEM_read_bio_DHparams
                   (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 local_28 [2];
  char *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0x143d1d98c;
  local_20 = (char *)0x0;
  local_18 = 0;
  iVar1 = PEM_bytes_read_bio(&local_18,local_28,&local_20,"DH PARAMETERS",param_1,param_3,param_4);
  uVar3 = (undefined4)((ulonglong)param_1 >> 0x20);
  if (iVar1 == 0) {
    return 0;
  }
  local_10 = local_18;
  iVar1 = _guard_xfg_dispatch_icall_nop(local_20,"X9.42 DH PARAMETERS");
  if (iVar1 == 0) {
    lVar2 = d2i_DHxparams();
  }
  else {
    lVar2 = d2i_DHparams(param_2,&local_10,local_28[0]);
  }
  if (lVar2 == 0) {
    ERR_put_error(9,0x8d,0xd,"crypto\\pem\\pem_pkey.c",CONCAT44(uVar3,0xde));
  }
  CRYPTO_free(local_20,"crypto\\pem\\pem_pkey.c",0xdf);
  CRYPTO_free(local_18,"crypto\\pem\\pem_pkey.c",0xe0);
  return lVar2;
}



// FUNCTION 143d1da70 PEM_read_bio_PrivateKey body=655 status=ok
// SIG undefined PEM_read_bio_PrivateKey(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong PEM_read_bio_PrivateKey
                   (undefined8 param_1,longlong *param_2,code *param_3,undefined8 param_4)

{
  char *_Str1;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined1 auStack_4a8 [32];
  undefined8 local_488;
  code *local_480;
  undefined8 local_478;
  int local_468 [2];
  char *local_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined1 local_448 [1024];
  ulonglong local_48;
  longlong lVar6;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_4a8;
  lVar6 = 0;
  lVar5 = 0;
  local_460 = (char *)0x0;
  local_450 = 0;
  local_488 = param_1;
  local_480 = param_3;
  local_478 = param_4;
  iVar1 = PEM_bytes_read_bio_secmem(&local_450,local_468,&local_460,"ANY PRIVATE KEY");
  _Str1 = local_460;
  if (iVar1 == 0) {
    return 0;
  }
  local_458 = local_450;
  iVar1 = _guard_xfg_dispatch_icall_nop(local_460,"PRIVATE KEY");
  if (iVar1 == 0) {
    lVar2 = PKCS8_PRIV_KEY_INFO_free(0,&local_458,local_468[0]);
    lVar5 = lVar6;
    if (lVar2 != 0) {
      lVar5 = EVP_PKCS82PKEY(lVar2);
      if (param_2 != (longlong *)0x0) {
        EVP_PKEY_free(*param_2);
        *param_2 = lVar5;
      }
      PKCS8_PRIV_KEY_INFO_free(lVar2);
LAB_143d1dc76:
      lVar6 = lVar5;
      if (lVar5 != 0) goto LAB_143d1dc9b;
    }
  }
  else {
    iVar1 = _guard_xfg_dispatch_icall_nop(_Str1,"ENCRYPTED PRIVATE KEY");
    if (iVar1 == 0) {
      lVar2 = PKCS8_PRIV_KEY_INFO_free(0,&local_458,local_468[0]);
      lVar5 = lVar6;
      if (lVar2 != 0) {
        if (param_3 == (code *)0x0) {
          iVar1 = PEM_def_callback(local_448,0x400,0,param_4);
        }
        else {
          iVar1 = (*param_3)();
        }
        if (iVar1 < 0) {
          local_488 = CONCAT44(local_488._4_4_,0x40);
          ERR_put_error(9,0x7b,0x68,"crypto\\pem\\pem_pkey.c");
          PKCS8_PRIV_KEY_INFO_free(lVar2);
          goto LAB_143d1dc9b;
        }
        lVar3 = PKCS8_decrypt(lVar2,local_448,iVar1);
        PKCS8_PRIV_KEY_INFO_free(lVar2);
        FUN_14004ff40(local_448,(longlong)iVar1);
        if (lVar3 != 0) {
          lVar5 = EVP_PKCS82PKEY(lVar3);
          if (param_2 != (longlong *)0x0) {
            EVP_PKEY_free(*param_2);
            *param_2 = lVar5;
          }
          PKCS8_PRIV_KEY_INFO_free(lVar3);
          goto LAB_143d1dc76;
        }
      }
    }
    else {
      iVar1 = pem_check_suffix(_Str1,"PRIVATE KEY");
      if (((0 < iVar1) &&
          (puVar4 = (undefined4 *)EVP_PKEY_asn1_find_str(0,local_460,iVar1),
          puVar4 != (undefined4 *)0x0)) && (*(longlong *)(puVar4 + 0x2e) != 0)) {
        lVar5 = d2i_PrivateKey(*puVar4,param_2,&local_458,local_468[0]);
        goto LAB_143d1dc76;
      }
    }
  }
  local_488 = CONCAT44(local_488._4_4_,0x58);
  ERR_put_error(9,0x7b,0xd,"crypto\\pem\\pem_pkey.c");
  lVar6 = lVar5;
LAB_143d1dc9b:
  CRYPTO_secure_free(local_460,"crypto\\pem\\pem_pkey.c",0x5a);
  CRYPTO_secure_clear_free(local_450,(longlong)local_468[0],"crypto\\pem\\pem_pkey.c",0x5b);
  return lVar6;
}



// FUNCTION 143d1dd10 rsa_cb body=122 status=ok
// SIG undefined rsa_cb(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte rsa_cb(int param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  
  if (param_1 == 0) {
    lVar2 = RSA_new();
    *param_2 = lVar2;
    return -(lVar2 != 0) & 2;
  }
  if (param_1 == 2) {
    RSA_free();
    *param_2 = 0;
    return 2;
  }
  if ((param_1 == 5) && (*(int *)(*param_2 + 4) == 1)) {
    iVar1 = rsa_multip_calc_product();
    bVar3 = 0;
    if (iVar1 == 1) {
      bVar3 = 2;
    }
    return bVar3;
  }
  return 1;
}



// FUNCTION 143d1dd90 rsa_pss_cb body=40 status=ok
// SIG undefined rsa_pss_cb(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 rsa_pss_cb(int param_1,longlong *param_2)

{
  if (param_1 == 2) {
    X509_ALGOR_free(*(undefined8 *)(*param_2 + 0x20));
  }
  return 1;
}



// FUNCTION 143d1ddc0 rsa_oaep_cb body=40 status=ok
// SIG undefined rsa_oaep_cb(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 rsa_oaep_cb(int param_1,longlong *param_2)

{
  if (param_1 == 2) {
    X509_ALGOR_free(*(undefined8 *)(*param_2 + 0x18));
  }
  return 1;
}



// FUNCTION 143d1ddf0 RSA_OAEP_PARAMS_free body=29 status=ok
// SIG undefined RSA_OAEP_PARAMS_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RSA_OAEP_PARAMS_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_145d7ecc0);
  return;
}



// FUNCTION 143d1de10 RSA_OAEP_PARAMS_it body=8 status=ok
// SIG undefined RSA_OAEP_PARAMS_it(void)

undefined * RSA_OAEP_PARAMS_it(void)

{
  return &DAT_145d7ecc0;
}



// FUNCTION 143d1de20 FUN_143d1de20 body=29 status=ok
// SIG undefined FUN_143d1de20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d1de20(void)

{
  ASN1_item_new(&DAT_145d7ecc0);
  return;
}



// FUNCTION 143d1de40 RSA_PSS_PARAMS_free body=29 status=ok
// SIG undefined RSA_PSS_PARAMS_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RSA_PSS_PARAMS_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_145d7ec30);
  return;
}



// FUNCTION 143d1de60 RSA_PSS_PARAMS_it body=8 status=ok
// SIG undefined RSA_PSS_PARAMS_it(void)

undefined * RSA_PSS_PARAMS_it(void)

{
  return &DAT_145d7ec30;
}



// FUNCTION 143d1de70 RSA_PSS_PARAMS_free body=29 status=ok
// SIG undefined RSA_PSS_PARAMS_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RSA_PSS_PARAMS_free(void)

{
  ASN1_item_new(&DAT_145d7ec30);
  return;
}



// FUNCTION 143d1de90 d2i_RSAPrivateKey body=29 status=ok
// SIG undefined d2i_RSAPrivateKey(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_RSAPrivateKey(void)

{
  ASN1_item_d2i();
  return;
}



// FUNCTION 143d1deb0 d2i_RSAPublicKey body=29 status=ok
// SIG undefined d2i_RSAPublicKey(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_RSAPublicKey(void)

{
  ASN1_item_d2i();
  return;
}



// FUNCTION 143d1ded0 i2d_RSAPrivateKey body=29 status=ok
// SIG undefined i2d_RSAPrivateKey(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_RSAPrivateKey(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_145d7eac0);
  return;
}



// FUNCTION 143d1def0 i2d_RSAPublicKey body=29 status=ok
// SIG undefined i2d_RSAPublicKey(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_RSAPublicKey(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_145d7eb30);
  return;
}



// FUNCTION 143d1df10 d2i_AutoPrivateKey body=611 status=ok
// SIG undefined d2i_AutoPrivateKey(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong d2i_AutoPrivateKey(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  
  local_res10[0] = *param_2;
  uVar3 = d2i_ASN1_SEQUENCE_ANY(0,local_res10);
  local_res10[0] = *param_2;
  iVar2 = OPENSSL_sk_num(uVar3);
  if (iVar2 == 6) {
    uVar7 = 0x74;
  }
  else {
    iVar2 = OPENSSL_sk_num(uVar3);
    if (iVar2 == 4) {
      uVar7 = 0x198;
    }
    else {
      iVar2 = OPENSSL_sk_num(uVar3);
      if (iVar2 == 3) {
        lVar4 = PKCS8_PRIV_KEY_INFO_free(0,local_res10,param_3);
        OPENSSL_sk_pop_free(uVar3,ASN1_TYPE_free);
        if (lVar4 == 0) {
          ERR_put_error(0xd,0xcf,0xa7,"crypto\\asn1\\d2i_pr.c",0x6d);
        }
        else {
          lVar6 = EVP_PKCS82PKEY(lVar4);
          PKCS8_PRIV_KEY_INFO_free(lVar4);
          if (lVar6 != 0) {
            *param_2 = local_res10[0];
            if (param_1 != (longlong *)0x0) {
              *param_1 = lVar6;
            }
            return lVar6;
          }
        }
        return 0;
      }
      uVar7 = 6;
    }
  }
  OPENSSL_sk_pop_free(uVar3,ASN1_TYPE_free);
  local_res20 = *param_2;
  if ((param_1 == (longlong *)0x0) || (lVar4 = *param_1, lVar4 == 0)) {
    lVar4 = EVP_PKEY_new();
    if (lVar4 == 0) {
      ERR_put_error(0xd,0x9a,6,"crypto\\asn1\\d2i_pr.c",0x1d);
      return 0;
    }
  }
  else {
    ENGINE_finish(*(undefined8 *)(lVar4 + 0x18));
    *(undefined8 *)(lVar4 + 0x18) = 0;
  }
  iVar2 = EVP_PKEY_set_type(lVar4,uVar7);
  if (iVar2 == 0) {
    uVar7 = 0x29;
    uVar3 = 0xa3;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)(lVar4 + 0x10) + 0xb8);
    if ((pcVar1 != (code *)0x0) &&
       (iVar2 = (*pcVar1)(lVar4,&local_res20,param_3), lVar6 = lVar4, iVar2 != 0)) {
LAB_143d1e117:
      *param_2 = local_res20;
      if (param_1 == (longlong *)0x0) {
        return lVar6;
      }
      *param_1 = lVar6;
      return lVar6;
    }
    if (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x40) != 0) {
      lVar5 = PKCS8_PRIV_KEY_INFO_free(0,&local_res20,param_3);
      if (lVar5 != 0) {
        lVar6 = EVP_PKCS82PKEY(lVar5);
        PKCS8_PRIV_KEY_INFO_free(lVar5);
        if (lVar6 != 0) {
          EVP_PKEY_free(lVar4);
          goto LAB_143d1e117;
        }
      }
      goto LAB_143d1e14d;
    }
    uVar7 = 0x3c;
    uVar3 = 0xd;
  }
  ERR_put_error(0xd,0x9a,uVar3,"crypto\\asn1\\d2i_pr.c",uVar7);
LAB_143d1e14d:
  if ((param_1 == (longlong *)0x0) || (*param_1 != lVar4)) {
    EVP_PKEY_free(lVar4);
  }
  return 0;
}



// FUNCTION 143d1e180 d2i_PrivateKey body=358 status=ok
// SIG undefined d2i_PrivateKey(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong d2i_PrivateKey(undefined4 param_1,longlong *param_2,undefined8 *param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 local_res10;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0x143d1e198;
  local_res10 = *param_3;
  if ((param_2 == (longlong *)0x0) || (lVar3 = *param_2, lVar3 == 0)) {
    lVar3 = EVP_PKEY_new();
    if (lVar3 == 0) {
      ERR_put_error(0xd,0x9a,6,"crypto\\asn1\\d2i_pr.c",0x1d);
      return 0;
    }
  }
  else {
    ENGINE_finish(*(undefined8 *)(lVar3 + 0x18));
    *(undefined8 *)(lVar3 + 0x18) = 0;
  }
  iVar2 = EVP_PKEY_set_type(lVar3,param_1);
  if (iVar2 == 0) {
    uVar7 = 0x29;
    uVar6 = 0xa3;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)(lVar3 + 0x10) + 0xb8);
    if ((pcVar1 != (code *)0x0) &&
       (iVar2 = (*pcVar1)(lVar3,&local_res10,param_4), lVar5 = lVar3, iVar2 != 0)) {
LAB_143d1e289:
      *param_3 = local_res10;
      if (param_2 != (longlong *)0x0) {
        *param_2 = lVar5;
        return lVar5;
      }
      return lVar5;
    }
    if (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x40) != 0) {
      lVar4 = PKCS8_PRIV_KEY_INFO_free(0,&local_res10,param_4);
      if (lVar4 != 0) {
        lVar5 = EVP_PKCS82PKEY(lVar4);
        PKCS8_PRIV_KEY_INFO_free(lVar4);
        if (lVar5 != 0) {
          EVP_PKEY_free(lVar3);
          goto LAB_143d1e289;
        }
      }
      goto LAB_143d1e2bf;
    }
    uVar7 = 0x3c;
    uVar6 = 0xd;
  }
  ERR_put_error(0xd,0x9a,uVar6,"crypto\\asn1\\d2i_pr.c",uVar7,uVar8);
LAB_143d1e2bf:
  if ((param_2 == (longlong *)0x0) || (*param_2 != lVar3)) {
    EVP_PKEY_free(lVar3);
  }
  return 0;
}



// FUNCTION 143d1e2f0 X509_CRL_digest body=145 status=ok
// SIG undefined X509_CRL_digest(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
X509_CRL_digest(longlong param_1,longlong param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143d1e30a;
  lVar1 = EVP_sha1();
  if ((param_2 == lVar1) && ((*(uint *)(param_1 + 0x7c) & 0x100) != 0)) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0x14;
    }
    uVar3 = *(undefined8 *)(param_1 + 0xb8);
    *param_3 = *(undefined8 *)(param_1 + 0xb0);
    param_3[1] = uVar3;
    *(undefined4 *)(param_3 + 2) = *(undefined4 *)(param_1 + 0xc0);
    uVar3 = 1;
  }
  else {
    uVar2 = X509_CRL_it();
    uVar3 = ASN1_item_digest(uVar2,param_2,param_1,param_3,param_4,uVar3);
  }
  return uVar3;
}



// FUNCTION 143d1e390 X509_digest body=148 status=ok
// SIG undefined X509_digest(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_digest(longlong param_1,longlong param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143d1e3aa;
  lVar1 = EVP_sha1();
  if ((param_2 == lVar1) && ((*(uint *)(param_1 + 0xd0) & 0x100) != 0)) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0x14;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x128);
    *param_3 = *(undefined8 *)(param_1 + 0x120);
    param_3[1] = uVar3;
    *(undefined4 *)(param_3 + 2) = *(undefined4 *)(param_1 + 0x130);
    uVar3 = 1;
  }
  else {
    uVar2 = X509_it();
    uVar3 = ASN1_item_digest(uVar2,param_2,param_1,param_3,param_4,uVar3);
  }
  return uVar3;
}



// FUNCTION 143d1e430 X509_verify body=126 status=ok
// SIG undefined X509_verify(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_verify(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143d1e445;
  iVar1 = X509_ALGOR_cmp(param_1 + 0x80,param_1 + 0x20);
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = X509_CINF_it();
  uVar3 = ASN1_item_verify(uVar2,param_1 + 0x80,param_1 + 0x90,param_1,param_2,uVar3);
  return uVar3;
}



// FUNCTION 143d1e4b0 d2i_PrivateKey_bio body=42 status=ok
// SIG undefined d2i_PrivateKey_bio(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_PrivateKey_bio(undefined8 param_1,undefined8 param_2)

{
  ASN1_d2i_bio(EVP_PKEY_new,d2i_AutoPrivateKey,param_1,param_2);
  return;
}



// FUNCTION 143d1e4e0 d2i_X509_CRL_bio body=54 status=ok
// SIG undefined d2i_X509_CRL_bio(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_X509_CRL_bio(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = X509_CRL_it();
  ASN1_item_d2i_bio(uVar1,param_1,param_2);
  return;
}



// FUNCTION 143d1e520 d2i_X509_bio body=54 status=ok
// SIG undefined d2i_X509_bio(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_X509_bio(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = X509_it();
  ASN1_item_d2i_bio(uVar1,param_1,param_2);
  return;
}



// FUNCTION 143d1e560 PEM_read_bio_X509_AUX body=53 status=ok
// SIG undefined PEM_read_bio_X509_AUX(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_read_bio_X509_AUX
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  PEM_ASN1_read_bio(d2i_X509_AUX,"TRUSTED CERTIFICATE",param_1,param_2,param_3,param_4,0x143d1e56a);
  return;
}



// FUNCTION 143d1e5a0 PEM_read_bio_X509_CRL body=53 status=ok
// SIG undefined PEM_read_bio_X509_CRL(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_read_bio_X509_CRL
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  PEM_ASN1_read_bio(X509_CRL_free,"X509 CRL",param_1,param_2,param_3,param_4,0x143d1e5aa);
  return;
}



// FUNCTION 143d1e5e0 SHA1_Final body=395 status=ok
// SIG undefined SHA1_Final(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SHA1_Final(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  uVar2 = param_2[0x17];
  puVar1 = param_2 + 7;
  *(undefined1 *)((ulonglong)uVar2 + (longlong)puVar1) = 0x80;
  uVar4 = (ulonglong)uVar2 + 1;
  if (0x38 < uVar4) {
    _guard_xfg_dispatch_icall_nop((void *)(uVar4 + (longlong)puVar1),0,0x40 - uVar4);
    uVar4 = 0;
    FUN_1400687c0(param_2,puVar1,1);
  }
  _guard_xfg_dispatch_icall_nop((void *)(uVar4 + (longlong)puVar1),0,0x38 - uVar4);
  *(undefined1 *)(param_2 + 0x15) = *(undefined1 *)((longlong)param_2 + 0x1b);
  *(undefined1 *)((longlong)param_2 + 0x55) = *(undefined1 *)((longlong)param_2 + 0x1a);
  *(undefined1 *)((longlong)param_2 + 0x56) = *(undefined1 *)((longlong)param_2 + 0x19);
  *(undefined1 *)((longlong)param_2 + 0x57) = *(undefined1 *)(param_2 + 6);
  *(undefined1 *)(param_2 + 0x16) = *(undefined1 *)((longlong)param_2 + 0x17);
  *(undefined1 *)((longlong)param_2 + 0x59) = *(undefined1 *)((longlong)param_2 + 0x16);
  *(undefined1 *)((longlong)param_2 + 0x5a) = *(undefined1 *)((longlong)param_2 + 0x15);
  *(undefined1 *)((longlong)param_2 + 0x5b) = *(undefined1 *)(param_2 + 5);
  FUN_1400687c0(param_2,puVar1,1);
  param_2[0x17] = 0;
  FUN_14004ff40(puVar1,0x40);
  uVar3 = *param_2;
  *param_1 = (char)((uint)uVar3 >> 0x18);
  param_1[1] = (char)((uint)uVar3 >> 0x10);
  param_1[2] = (char)((uint)uVar3 >> 8);
  param_1[3] = (char)uVar3;
  uVar3 = param_2[1];
  param_1[4] = (char)((uint)uVar3 >> 0x18);
  param_1[5] = (char)((uint)uVar3 >> 0x10);
  param_1[6] = (char)((uint)uVar3 >> 8);
  param_1[7] = (char)uVar3;
  uVar3 = param_2[2];
  param_1[8] = (char)((uint)uVar3 >> 0x18);
  param_1[9] = (char)((uint)uVar3 >> 0x10);
  param_1[10] = (char)((uint)uVar3 >> 8);
  param_1[0xb] = (char)uVar3;
  uVar3 = param_2[3];
  param_1[0xc] = (char)((uint)uVar3 >> 0x18);
  param_1[0xd] = (char)((uint)uVar3 >> 0x10);
  param_1[0xe] = (char)((uint)uVar3 >> 8);
  param_1[0xf] = (char)uVar3;
  uVar3 = param_2[4];
  param_1[0x10] = (char)((uint)uVar3 >> 0x18);
  param_1[0x11] = (char)((uint)uVar3 >> 0x10);
  param_1[0x12] = (char)((uint)uVar3 >> 8);
  param_1[0x13] = (char)uVar3;
  return 1;
}



// FUNCTION 143d1e770 SHA1_Init body=81 status=ok
// SIG undefined SHA1_Init(void)

undefined8 SHA1_Init(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 0xd) = 0;
  *(undefined8 *)(param_1 + 0xf) = 0;
  *(undefined8 *)(param_1 + 0x11) = 0;
  *(undefined8 *)(param_1 + 0x13) = 0;
  *(undefined8 *)(param_1 + 0x15) = 0;
  param_1[0x17] = 0;
  *param_1 = 0x67452301;
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  param_1[3] = 0x10325476;
  param_1[4] = 0xc3d2e1f0;
  return 1;
}


