// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143ceedc0 CONF_module_add body=44 status=ok
// SIG undefined CONF_module_add(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool CONF_module_add(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = module_add(0,param_1,param_2,param_3,0x143ceedca);
  return lVar1 != 0;
}



// FUNCTION 143ceedf0 CONF_modules_finish body=205 status=ok
// SIG undefined CONF_modules_finish(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CONF_modules_finish(void)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  iVar1 = OPENSSL_sk_num(DAT_146bc99e0);
  while (0 < iVar1) {
    plVar2 = (longlong *)OPENSSL_sk_pop(DAT_146bc99e0);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = *plVar2;
      if (*(code **)(lVar3 + 0x18) != (code *)0x0) {
        (**(code **)(lVar3 + 0x18))(plVar2);
        lVar3 = *plVar2;
      }
      *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + -1;
      CRYPTO_free(plVar2[1],"crypto\\conf\\conf_mod.c",0x197);
      CRYPTO_free(plVar2[2],"crypto\\conf\\conf_mod.c",0x198);
      CRYPTO_free(plVar2,"crypto\\conf\\conf_mod.c",0x199);
    }
    iVar1 = OPENSSL_sk_num(DAT_146bc99e0);
  }
  OPENSSL_sk_free(DAT_146bc99e0);
  DAT_146bc99e0 = 0;
  return;
}



// FUNCTION 143ceeec0 CONF_modules_load_file body=529 status=ok
// SIG undefined CONF_modules_load_file(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong CONF_modules_load_file(ulonglong param_1,longlong param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  char *pcVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  long lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  uVar11 = 0;
  lVar10 = 0;
  lVar3 = NCONF_new();
  uVar12 = uVar11;
  uVar6 = uVar11;
  if (lVar3 == 0) {
LAB_143ceeff1:
    uVar11 = uVar12;
    uVar13 = uVar6;
    if (param_1 != 0) goto LAB_143cef00b;
  }
  else {
    uVar6 = param_1;
    if (param_1 != 0) {
LAB_143ceefc0:
      iVar1 = NCONF_load(lVar3,uVar6,0);
      if (iVar1 < 1) {
        if (((param_3 & 0x10) == 0) || (uVar2 = ERR_peek_last_error(), (uVar2 & 0xfff) != 0x72))
        goto LAB_143ceeff1;
LAB_143ceefe7:
        ERR_clear_error();
      }
      else {
        if (param_2 == 0) {
LAB_143cef051:
          lVar8 = NCONF_get_string(lVar3,0,"openssl_conf");
          if (lVar8 == 0) goto LAB_143ceefe7;
        }
        else {
          lVar8 = NCONF_get_string(lVar3,0,param_2);
          if (lVar8 == 0) {
            if ((param_3 & 0x20) == 0) goto LAB_143ceefe7;
            goto LAB_143cef051;
          }
        }
        lVar8 = NCONF_get_section(lVar3,lVar8);
        uVar12 = 0;
        if (lVar8 == 0) goto LAB_143ceeff1;
        iVar1 = OPENSSL_sk_num(lVar8);
        if (0 < iVar1) {
          do {
            lVar9 = OPENSSL_sk_value(lVar8,uVar11);
            uVar2 = module_run(lVar3,*(undefined8 *)(lVar9 + 8),*(undefined8 *)(lVar9 + 0x10),
                               param_3);
            if (((int)uVar2 < 1) && ((param_3 & 1) == 0)) {
              uVar12 = (ulonglong)uVar2;
              goto LAB_143ceeff1;
            }
            uVar2 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar2;
            iVar1 = OPENSSL_sk_num(lVar8);
          } while ((int)uVar2 < iVar1);
        }
      }
      uVar12 = 1;
      goto LAB_143ceeff1;
    }
    pwVar4 = AK::MemoryMgr::GetPoolName(lVar10);
    if (((int)pwVar4 == 0) && (pcVar5 = getenv("OPENSSL_CONF"), pcVar5 != (char *)0x0)) {
      uVar6 = CRYPTO_strdup(pcVar5,"crypto\\conf\\conf_mod.c",0x1e6);
LAB_143ceefb6:
      uVar13 = uVar6;
      if (uVar6 != 0) goto LAB_143ceefc0;
    }
    else {
      lVar8 = X509_get_default_cert_area();
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while (*(char *)(lVar8 + lVar9) != '\0');
      lVar8 = (longlong)((int)lVar9 + 0xd);
      uVar6 = CRYPTO_malloc(lVar8,"crypto\\conf\\conf_mod.c",0x1f0);
      uVar13 = uVar11;
      if (uVar6 != 0) {
        uVar7 = X509_get_default_cert_area();
        BIO_snprintf(uVar6,lVar8,"%s%s%s",uVar7,&DAT_145cc6654,"openssl.cnf");
        goto LAB_143ceefb6;
      }
    }
  }
  CRYPTO_free(uVar13,"crypto\\conf\\conf_mod.c",0x8e);
LAB_143cef00b:
  NCONF_free(lVar3);
  return uVar11;
}



// FUNCTION 143cef0e0 CONF_parse_list body=317 status=ok
// SIG undefined CONF_parse_list(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CONF_parse_list(byte *param_1,int param_2,int param_3,code *param_4,undefined8 param_5)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  longlong lVar5;
  undefined8 uVar7;
  byte *pbVar8;
  longlong lVar6;
  
  if (param_1 == (byte *)0x0) {
    ERR_put_error(0xe,0x77,0x73,"crypto\\conf\\conf_mod.c",0x209,0x143cef0f4);
    return 0;
  }
  while( true ) {
    if (param_3 != 0) {
      bVar2 = *param_1;
      while ((bVar2 != 0 && (iVar3 = isspace((uint)bVar2), iVar3 != 0))) {
        bVar2 = param_1[1];
        param_1 = param_1 + 1;
      }
    }
    pbVar4 = (byte *)_guard_xfg_dispatch_icall_nop((char *)param_1,param_2);
    if ((pbVar4 == param_1) || (*param_1 == 0)) {
      iVar3 = 0;
      param_1 = (byte *)0x0;
    }
    else {
      if (pbVar4 == (byte *)0x0) {
        lVar5 = -1;
        do {
          lVar6 = lVar5;
          lVar5 = lVar6 + 1;
        } while (param_1[lVar5] != 0);
        pbVar8 = param_1 + lVar6;
      }
      else {
        pbVar8 = pbVar4 + -1;
      }
      if (param_3 != 0) {
        iVar3 = isspace((uint)*pbVar8);
        while (iVar3 != 0) {
          pbVar1 = pbVar8 + -1;
          pbVar8 = pbVar8 + -1;
          iVar3 = isspace((uint)*pbVar1);
        }
      }
      iVar3 = ((int)pbVar8 - (int)param_1) + 1;
    }
    uVar7 = (*param_4)(param_1,iVar3,param_5);
    if ((int)uVar7 < 1) break;
    if (pbVar4 == (byte *)0x0) {
      return 1;
    }
    param_1 = pbVar4 + 1;
  }
  return uVar7;
}



// FUNCTION 143cef220 conf_modules_free_int body=205 status=ok
// SIG undefined conf_modules_free_int(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void conf_modules_free_int(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  CONF_modules_finish();
  CONF_modules_finish();
  iVar1 = OPENSSL_sk_num(DAT_146bc99d8);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    puVar2 = (undefined8 *)OPENSSL_sk_value(DAT_146bc99d8,iVar1);
    OPENSSL_sk_delete(DAT_146bc99d8,iVar1);
    DSO_free(*puVar2);
    CRYPTO_free(puVar2[1],"crypto\\conf\\conf_mod.c",0x17d);
    CRYPTO_free(puVar2,"crypto\\conf\\conf_mod.c",0x17e);
  }
  iVar1 = OPENSSL_sk_num(DAT_146bc99d8);
  if (iVar1 == 0) {
    OPENSSL_sk_free(DAT_146bc99d8);
    DAT_146bc99d8 = 0;
  }
  return;
}



// FUNCTION 143cef2f0 module_add body=288 status=ok
// SIG undefined module_add(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * module_add(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143cef30b;
  if ((DAT_146bc99d8 == 0) && (DAT_146bc99d8 = OPENSSL_sk_new_null(), DAT_146bc99d8 == 0)) {
    return (undefined8 *)0x0;
  }
  puVar2 = (undefined8 *)CRYPTO_zalloc(0x30,"crypto\\conf\\conf_mod.c",0xeb);
  if (puVar2 == (undefined8 *)0x0) {
    ERR_put_error(0xe,0x7a,0x41,"crypto\\conf\\conf_mod.c",0xec,uVar4);
  }
  else {
    *puVar2 = param_1;
    lVar3 = CRYPTO_strdup(param_2,"crypto\\conf\\conf_mod.c",0xf1);
    puVar2[1] = lVar3;
    puVar2[2] = param_3;
    puVar2[3] = param_4;
    if (lVar3 == 0) {
      uVar4 = 0xf5;
    }
    else {
      iVar1 = OPENSSL_sk_push(DAT_146bc99d8,puVar2);
      if (iVar1 != 0) {
        return puVar2;
      }
      CRYPTO_free(puVar2[1],"crypto\\conf\\conf_mod.c",0xfa);
      uVar4 = 0xfb;
    }
    CRYPTO_free(puVar2,"crypto\\conf\\conf_mod.c",uVar4);
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143cef410 module_run body=967 status=ok
// SIG undefined module_run(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int module_run(undefined8 param_1,char *param_2,undefined8 param_3,ulonglong param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_98 [32];
  char *local_78;
  char *local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143cef426;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  pcVar5 = _guard_xfg_dispatch_icall_nop(param_2,0x2e);
  if (pcVar5 == (char *)0x0) {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (param_2[lVar6] != '\0');
    iVar10 = (int)lVar6;
  }
  else {
    iVar10 = (int)pcVar5 - (int)param_2;
  }
  iVar11 = 0;
  bVar1 = false;
  iVar3 = OPENSSL_sk_num(DAT_146bc99d8);
  if (0 < iVar3) {
    iVar3 = iVar11;
    do {
      lVar6 = OPENSSL_sk_value(DAT_146bc99d8,iVar3);
      iVar4 = strncmp(*(char **)(lVar6 + 8),param_2,(longlong)iVar10);
      if (iVar4 == 0) goto LAB_143cef609;
      iVar3 = iVar3 + 1;
      iVar4 = OPENSSL_sk_num(DAT_146bc99d8);
    } while (iVar3 < iVar4);
  }
  if ((param_4 & 8) != 0) goto LAB_143cef5a5;
  pcVar5 = (char *)NCONF_get_string(param_1,param_3,&DAT_145d5801c);
  if (pcVar5 == (char *)0x0) {
    ERR_clear_error();
    pcVar5 = param_2;
  }
  lVar7 = DSO_load(0,pcVar5,0,0);
  if (lVar7 == 0) {
    iVar11 = 0x6e;
  }
  else {
    lVar6 = DSO_bind_func(lVar7,"OPENSSL_init");
    if (lVar6 == 0) {
      iVar11 = 0x70;
    }
    else {
      uVar8 = DSO_bind_func(lVar7,"OPENSSL_finish");
      lVar6 = module_add(lVar7,param_2,lVar6,uVar8);
      if (lVar6 != 0) {
LAB_143cef609:
        iVar10 = 1;
        plVar9 = (longlong *)CRYPTO_malloc(0x28,"crypto\\conf\\conf_mod.c",0x127);
        if (plVar9 == (longlong *)0x0) {
LAB_143cef6d5:
          if ((*(code **)(lVar6 + 0x18) != (code *)0x0) && (bVar1)) {
            (**(code **)(lVar6 + 0x18))(plVar9);
          }
        }
        else {
          *plVar9 = lVar6;
          lVar7 = CRYPTO_strdup(param_2,"crypto\\conf\\conf_mod.c",300);
          plVar9[1] = lVar7;
          lVar7 = CRYPTO_strdup(param_3,"crypto\\conf\\conf_mod.c",0x12d);
          plVar9[2] = lVar7;
          plVar9[4] = 0;
          if ((plVar9[1] != 0) && (lVar7 != 0)) {
            bVar2 = false;
            if (*(code **)(lVar6 + 0x10) != (code *)0x0) {
              iVar10 = (**(code **)(lVar6 + 0x10))(plVar9,param_1);
              bVar1 = true;
              bVar2 = true;
              if (iVar10 < 1) goto LAB_143cef6d5;
            }
            bVar1 = bVar2;
            if ((DAT_146bc99e0 == 0) && (DAT_146bc99e0 = OPENSSL_sk_new_null(), DAT_146bc99e0 == 0))
            {
              local_78 = (char *)CONCAT44(local_78._4_4_,0x13f);
            }
            else {
              iVar3 = OPENSSL_sk_push(DAT_146bc99e0,plVar9);
              if (iVar3 != 0) {
                *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) + 1;
                if (0 < iVar10) {
                  return iVar10;
                }
                goto LAB_143cef733;
              }
              local_78 = (char *)CONCAT44(local_78._4_4_,0x145);
            }
            ERR_put_error(0xe,0x73,0x41,"crypto\\conf\\conf_mod.c");
            goto LAB_143cef6d5;
          }
        }
        if (plVar9 != (longlong *)0x0) {
          CRYPTO_free(plVar9[1],"crypto\\conf\\conf_mod.c",0x155);
          CRYPTO_free(plVar9[2],"crypto\\conf\\conf_mod.c",0x156);
          CRYPTO_free(plVar9,"crypto\\conf\\conf_mod.c",0x157);
        }
        iVar10 = -1;
LAB_143cef733:
        if ((param_4 & 4) != 0) {
          return iVar10;
        }
        local_78 = (char *)CONCAT44(local_78._4_4_,0xae);
        ERR_put_error(0xe,0x76,0x6d,"crypto\\conf\\conf_mod.c");
        BIO_snprintf(local_58,0xd,&DAT_145d58008,iVar10);
        local_68 = local_58;
        local_70 = ", retcode=";
        local_78 = (char *)param_3;
        ERR_add_error_data(6,"module=",param_2,", value=");
        return iVar10;
      }
    }
  }
  DSO_free(lVar7);
  local_78 = (char *)CONCAT44(local_78._4_4_,0xdd);
  ERR_put_error(0xe,0x75,iVar11,"crypto\\conf\\conf_mod.c");
  local_78 = pcVar5;
  ERR_add_error_data(4,"module=",param_2,", path=");
LAB_143cef5a5:
  if ((param_4 & 4) == 0) {
    local_78 = (char *)CONCAT44(local_78._4_4_,0xa2);
    ERR_put_error(0xe,0x76,0x71,"crypto\\conf\\conf_mod.c");
    ERR_add_error_data(2,"module=",param_2);
  }
  return -1;
}



// FUNCTION 143cef7e0 OPENSSL_load_builtin_modules body=42 status=ok
// SIG undefined OPENSSL_load_builtin_modules(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OPENSSL_load_builtin_modules(void)

{
  ASN1_add_oid_module();
  ASN1_add_stable_module();
  ENGINE_add_conf_module();
  EVP_add_alg_module();
  conf_add_ssl_module();
  return;
}



// FUNCTION 143cef810 ERR_STATE_free body=159 status=ok
// SIG undefined ERR_STATE_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ERR_STATE_free(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if (param_1 != 0) {
    pbVar1 = (byte *)(param_1 + 0x100);
    lVar2 = 0x10;
    puVar3 = (undefined8 *)(param_1 + 0x80);
    do {
      if ((*pbVar1 & 1) != 0) {
        CRYPTO_free(*puVar3,"crypto\\err\\err.c",0x105);
        *puVar3 = 0;
      }
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      puVar3 = puVar3 + 1;
      pbVar1 = pbVar1 + 4;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    CRYPTO_free(param_1,"crypto\\err\\err.c",0x107);
  }
  return;
}



// FUNCTION 143cef8b0 ERR_add_error_data body=350 status=ok
// SIG undefined ERR_add_error_data(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ERR_add_error_data(int param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined1 *puVar7;
  int iVar8;
  longlong local_res10 [3];
  
  iVar4 = 0x50;
  puVar1 = (undefined1 *)CRYPTO_malloc(0x51,"crypto\\err\\err.c",0x30c);
  if (puVar1 != (undefined1 *)0x0) {
    iVar5 = 0;
    iVar8 = 0;
    *puVar1 = 0;
    puVar7 = puVar1;
    if (0 < param_1) {
      do {
        pcVar3 = "<NULL>";
        if (*(char **)((longlong)register0x00000020 + 0x10) != (char *)0x0) {
          pcVar3 = *(char **)((longlong)register0x00000020 + 0x10);
        }
        lVar2 = -1;
        do {
          lVar2 = lVar2 + 1;
        } while (pcVar3[lVar2] != '\0');
        iVar5 = iVar5 + (int)lVar2;
        puVar1 = puVar7;
        if (iVar4 < iVar5) {
          iVar4 = iVar5 + 0x14;
          puVar1 = (undefined1 *)
                   CRYPTO_realloc(puVar7,(longlong)(iVar5 + 0x15),"crypto\\err\\err.c",0x31a);
          if (puVar1 == (undefined1 *)0x0) {
            CRYPTO_free(puVar7,"crypto\\err\\err.c",0x31c);
            return;
          }
        }
        OPENSSL_strlcat(puVar1,pcVar3,(longlong)iVar4 + 1);
        iVar8 = iVar8 + 1;
        puVar7 = puVar1;
        register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + 8);
      } while (iVar8 < param_1);
    }
    lVar2 = ERR_get_state();
    if (lVar2 != 0) {
      lVar6 = (longlong)*(int *)(lVar2 + 0x200);
      if ((*(byte *)(lVar2 + 0x100 + lVar6 * 4) & 1) != 0) {
        CRYPTO_free(*(undefined8 *)(lVar2 + 0x80 + lVar6 * 8),"crypto\\err\\err.c",0x2f9);
      }
      *(undefined1 **)(lVar2 + 0x80 + lVar6 * 8) = puVar1;
      *(undefined4 *)(lVar2 + 0x100 + lVar6 * 4) = 3;
    }
  }
  return;
}



// FUNCTION 143cefa10 ERR_clear_error body=190 status=ok
// SIG undefined ERR_clear_error(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ERR_clear_error(void)

{
  longlong lVar1;
  byte *pbVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar1 = ERR_get_state();
  if (lVar1 != 0) {
    pbVar2 = (byte *)(lVar1 + 0x100);
    lVar3 = 0x10;
    puVar4 = (undefined8 *)(lVar1 + 0x80);
    do {
      if ((*pbVar2 & 1) != 0) {
        CRYPTO_free(*puVar4,"crypto\\err\\err.c",0x1a6);
        *puVar4 = 0;
      }
      pbVar2[0] = 0;
      pbVar2[1] = 0;
      pbVar2[2] = 0;
      pbVar2[3] = 0;
      pbVar2[-0x100] = 0;
      pbVar2[-0xff] = 0;
      pbVar2[-0xfe] = 0;
      pbVar2[-0xfd] = 0;
      pbVar2[-0xc0] = 0;
      pbVar2[-0xbf] = 0;
      pbVar2[-0xbe] = 0;
      pbVar2[-0xbd] = 0;
      puVar4[0x18] = 0;
      puVar4 = puVar4 + 1;
      pbVar2[0xc0] = 0xff;
      pbVar2[0xc1] = 0xff;
      pbVar2[0xc2] = 0xff;
      pbVar2[0xc3] = 0xff;
      pbVar2 = pbVar2 + 4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    *(undefined8 *)(lVar1 + 0x200) = 0;
  }
  return;
}



// FUNCTION 143cefad0 ERR_error_string body=52 status=ok
// SIG undefined ERR_error_string(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined * ERR_error_string(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_146bcb200;
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
  }
  ERR_error_string_n(param_1,puVar1,0x100);
  return puVar1;
}



// FUNCTION 143cefb10 ERR_error_string_n body=777 status=ok
// SIG undefined ERR_error_string_n(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void ERR_error_string_n(uint param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_188 [32];
  undefined1 *local_168;
  undefined8 local_160;
  undefined8 local_158;
  uint local_148;
  uint local_140 [4];
  uint local_130 [4];
  uint local_120 [6];
  undefined1 local_108 [64];
  undefined1 local_c8 [64];
  undefined1 local_88 [64];
  ulonglong local_48;
  
  if (param_3 == 0) {
    return;
  }
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  local_148 = param_1 >> 0x18;
  iVar1 = CRYPTO_THREAD_run_once(&DAT_146bc99fc,do_err_strings_init_ossl_);
  puVar4 = (undefined1 *)0x0;
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar3 = DAT_146bcb1f0;
  }
  if (iVar3 == 0) {
LAB_143cefbe0:
    BIO_snprintf(local_108,0x40,"lib(%lu)",param_1 >> 0x18);
    puVar5 = local_108;
  }
  else {
    local_130[0] = param_1 & 0xff000000;
    CRYPTO_THREAD_read_lock(DAT_146bc9a00);
    lVar2 = OPENSSL_LH_retrieve(DAT_146bc9a08,local_130);
    CRYPTO_THREAD_unlock(DAT_146bc9a00);
    if ((lVar2 == 0) || (puVar5 = *(undefined1 **)(lVar2 + 8), puVar5 == (undefined1 *)0x0))
    goto LAB_143cefbe0;
  }
  iVar1 = CRYPTO_THREAD_run_once(&DAT_146bc99fc,do_err_strings_init_ossl_);
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar3 = DAT_146bcb1f0;
  }
  if (iVar3 != 0) {
    local_120[0] = param_1 & 0xfffff000;
    CRYPTO_THREAD_read_lock(DAT_146bc9a00);
    lVar2 = OPENSSL_LH_retrieve(DAT_146bc9a08,local_120);
    CRYPTO_THREAD_unlock(DAT_146bc9a00);
    if (lVar2 != 0) {
      puVar4 = *(undefined1 **)(lVar2 + 8);
    }
  }
  if (puVar4 == (undefined1 *)0x0) {
    BIO_snprintf(local_c8,0x40,"func(%lu)",param_1 >> 0xc & 0xfff);
    puVar4 = local_c8;
  }
  iVar1 = CRYPTO_THREAD_run_once(&DAT_146bc99fc,do_err_strings_init_ossl_);
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar3 = DAT_146bcb1f0;
  }
  if (iVar3 != 0) {
    local_140[0] = param_1 & 0xff000fff;
    CRYPTO_THREAD_read_lock(DAT_146bc9a00);
    lVar2 = OPENSSL_LH_retrieve(DAT_146bc9a08,local_140);
    CRYPTO_THREAD_unlock(DAT_146bc9a00);
    if (lVar2 == 0) {
      local_140[0] = param_1 & 0xfff;
      CRYPTO_THREAD_read_lock(DAT_146bc9a00);
      lVar2 = OPENSSL_LH_retrieve(DAT_146bc9a08,local_140);
      CRYPTO_THREAD_unlock(DAT_146bc9a00);
      if (lVar2 == 0) goto LAB_143cefd4d;
    }
    local_158 = *(undefined1 **)(lVar2 + 8);
    if (local_158 != (undefined1 *)0x0) goto LAB_143cefd71;
  }
LAB_143cefd4d:
  BIO_snprintf(local_88,0x40,"reason(%lu)",param_1 & 0xfff);
  local_158 = local_88;
LAB_143cefd71:
  local_168 = puVar5;
  local_160 = puVar4;
  BIO_snprintf(param_2,param_3,"error:%08lX:%s:%s:%s",param_1);
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(param_2 + lVar2) != '\0');
  if (lVar2 == param_3 + -1) {
    local_158 = (undefined1 *)(CONCAT44(local_158._4_4_,param_1) & 0xffffffff00000fff);
    local_160 = (undefined1 *)(CONCAT44(local_160._4_4_,param_1 >> 0xc) & 0xffffffff00000fff);
    local_168 = (undefined1 *)CONCAT44(local_168._4_4_,local_148);
    BIO_snprintf(param_2,param_3,"err:%lx:%lx:%lx:%lx",param_1);
  }
  return;
}



// FUNCTION 143cefe20 ERR_func_error_string body=147 status=ok
// SIG undefined ERR_func_error_string(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ERR_func_error_string(uint param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint local_18 [2];
  undefined8 uStack_10;
  
  uStack_10 = 0x143cefe30;
  iVar1 = CRYPTO_THREAD_run_once(&DAT_146bc99fc,do_err_strings_init_ossl_);
  uVar4 = 0;
  uVar3 = uVar4;
  if (iVar1 != 0) {
    uVar3 = (ulonglong)DAT_146bcb1f0;
  }
  if ((int)uVar3 == 0) {
    return 0;
  }
  local_18[0] = param_1 & 0xfffff000;
  CRYPTO_THREAD_read_lock(DAT_146bc9a00);
  lVar2 = OPENSSL_LH_retrieve(DAT_146bc9a08,local_18);
  CRYPTO_THREAD_unlock(DAT_146bc9a00);
  if (lVar2 != 0) {
    uVar4 = *(ulonglong *)(lVar2 + 8);
  }
  return uVar4;
}



// FUNCTION 143cefec0 ERR_get_error body=182 status=ok
// SIG undefined ERR_get_error(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 ERR_get_error(void)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  
  lVar3 = ERR_get_state();
  if ((lVar3 != 0) && (*(int *)(lVar3 + 0x204) != *(int *)(lVar3 + 0x200))) {
    uVar5 = *(int *)(lVar3 + 0x204) + 1U & 0x8000000f;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffff0) + 1;
    }
    lVar4 = (longlong)(int)uVar5;
    uVar2 = *(undefined4 *)(lVar3 + 0x40 + lVar4 * 4);
    lVar1 = lVar4 + 0x10;
    *(uint *)(lVar3 + 0x204) = uVar5;
    *(undefined4 *)(lVar3 + lVar1 * 4) = 0;
    lVar4 = lVar3 + lVar4 * 4;
    if ((*(byte *)(lVar4 + 0x100) & 1) != 0) {
      CRYPTO_free(*(undefined8 *)(lVar3 + lVar1 * 8),"crypto\\err\\err.c",0x20d);
      *(undefined8 *)(lVar3 + lVar1 * 8) = 0;
    }
    *(undefined4 *)(lVar4 + 0x100) = 0;
    return uVar2;
  }
  return 0;
}



// FUNCTION 143ceff80 ERR_get_error_line_data body=321 status=ok
// SIG undefined ERR_get_error_line_data(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
ERR_get_error_line_data(longlong *param_1,undefined4 *param_2,longlong *param_3,undefined4 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = ERR_get_state();
  if ((lVar5 == 0) || (*(int *)(lVar5 + 0x204) == *(int *)(lVar5 + 0x200))) {
    uVar4 = 0;
  }
  else {
    uVar3 = *(int *)(lVar5 + 0x204) + 1U & 0x8000000f;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
    }
    lVar6 = (longlong)(int)uVar3;
    uVar4 = *(undefined4 *)(lVar5 + 0x40 + lVar6 * 4);
    lVar1 = lVar6 + 0x10;
    *(uint *)(lVar5 + 0x204) = uVar3;
    *(undefined4 *)(lVar5 + lVar1 * 4) = 0;
    if ((param_1 != (longlong *)0x0) && (param_2 != (undefined4 *)0x0)) {
      lVar2 = *(longlong *)(lVar5 + 0x140 + lVar6 * 8);
      if (lVar2 == 0) {
        *param_1 = (longlong)&DAT_145d5862c;
        *param_2 = 0;
      }
      else {
        *param_1 = lVar2;
        *param_2 = *(undefined4 *)(lVar5 + 0x1c0 + lVar6 * 4);
      }
    }
    if (param_3 == (longlong *)0x0) {
      lVar6 = lVar5 + lVar6 * 4;
      if ((*(byte *)(lVar6 + 0x100) & 1) != 0) {
        CRYPTO_free(*(undefined8 *)(lVar5 + lVar1 * 8),"crypto\\err\\err.c",0x20d);
        *(undefined8 *)(lVar5 + lVar1 * 8) = 0;
      }
      *(undefined4 *)(lVar6 + 0x100) = 0;
    }
    else {
      lVar1 = *(longlong *)(lVar5 + lVar1 * 8);
      if (lVar1 == 0) {
        *param_3 = (longlong)&DAT_143f3f584;
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = 0;
        }
      }
      else {
        *param_3 = lVar1;
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = *(undefined4 *)(lVar5 + 0x100 + lVar6 * 4);
        }
      }
    }
  }
  return uVar4;
}



// FUNCTION 143cf00d0 ERR_get_next_error_library body=110 status=ok
// SIG undefined ERR_get_next_error_library(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int ERR_get_next_error_library
              (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = CRYPTO_THREAD_run_once
                    (&DAT_146bc99fc,do_err_strings_init_ossl_,param_3,param_4,0x143cf00da);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = DAT_146bcb1f0;
  }
  if (iVar2 == 0) {
    return 0;
  }
  CRYPTO_THREAD_read_lock(DAT_146bc9a00);
  iVar2 = DAT_146836a00;
  DAT_146836a00 = DAT_146836a00 + 1;
  CRYPTO_THREAD_unlock(DAT_146bc9a00);
  return iVar2;
}



// FUNCTION 143cf0140 ERR_get_state body=236 status=ok
// SIG undefined ERR_get_state(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ERR_get_state(void)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = OPENSSL_init_crypto(0x40000,0);
  if (iVar1 != 0) {
    iVar2 = CRYPTO_THREAD_run_once(&DAT_146bc99f0,err_do_init_ossl_);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = DAT_146bcb1f4;
    }
    if ((iVar1 != 0) && (lVar3 = CRYPTO_THREAD_get_local(&DAT_146bc99f8), lVar3 != -1)) {
      if (lVar3 != 0) {
        return lVar3;
      }
      iVar1 = CRYPTO_THREAD_set_local(&DAT_146bc99f8,0xffffffffffffffff);
      if (iVar1 != 0) {
        lVar3 = CRYPTO_zalloc(0x208,"crypto\\err\\err.c",0x2b1);
        if (lVar3 != 0) {
          iVar1 = ossl_init_thread_start(2);
          if ((iVar1 != 0) && (iVar1 = CRYPTO_THREAD_set_local(&DAT_146bc99f8,lVar3), iVar1 != 0)) {
            OPENSSL_init_crypto(2);
            return lVar3;
          }
          ERR_STATE_free(lVar3);
        }
        CRYPTO_THREAD_set_local(&DAT_146bc99f8,0);
      }
    }
  }
  return 0;
}



// FUNCTION 143cf0230 ERR_load_ERR_strings body=579 status=ok
// SIG undefined ERR_load_ERR_strings(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ERR_load_ERR_strings(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  longlong *plVar7;
  undefined *puVar8;
  uint uVar9;
  
  iVar1 = CRYPTO_THREAD_run_once
                    (&DAT_146bc99fc,do_err_strings_init_ossl_,param_3,param_4,0x143cf023a);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = DAT_146bcb1f0;
  }
  if (iVar2 != 0) {
    piVar5 = &DAT_146836440;
    CRYPTO_THREAD_read_lock(DAT_146bc9a00);
    iVar2 = DAT_146836440;
    while (iVar2 != 0) {
      OPENSSL_LH_insert(DAT_146bc9a08,piVar5);
      piVar5 = piVar5 + 4;
      iVar2 = *piVar5;
    }
    CRYPTO_THREAD_unlock(DAT_146bc9a00);
    piVar5 = &DAT_146836820;
    CRYPTO_THREAD_read_lock(DAT_146bc9a00);
    iVar2 = DAT_146836820;
    while (iVar2 != 0) {
      OPENSSL_LH_insert(DAT_146bc9a08,piVar5);
      piVar5 = piVar5 + 4;
      iVar2 = *piVar5;
    }
    CRYPTO_THREAD_unlock(DAT_146bc9a00);
    puVar6 = &DAT_146836690;
    puVar4 = &DAT_146836690;
    uVar9 = DAT_146836690;
    while (uVar9 != 0) {
      *puVar4 = uVar9 | 0x2000000;
      puVar4 = puVar4 + 4;
      uVar9 = *puVar4;
    }
    CRYPTO_THREAD_read_lock(DAT_146bc9a00);
    uVar9 = DAT_146836690;
    while (uVar9 != 0) {
      OPENSSL_LH_insert(DAT_146bc9a08,puVar6);
      puVar6 = puVar6 + 4;
      uVar9 = *puVar6;
    }
    CRYPTO_THREAD_unlock(DAT_146bc9a00);
    CRYPTO_THREAD_read_lock(DAT_146bc9a00);
    if (DAT_146836a04 != 0) {
      plVar7 = &DAT_146bc9a18;
      puVar8 = &DAT_146bca210;
      uVar9 = 1;
      do {
        *(uint *)(plVar7 + -1) = uVar9 & 0xfff | 0x2000000;
        if (*plVar7 == 0) {
          iVar2 = openssl_strerror_r(uVar9,puVar8,0x20);
          if (iVar2 == 0) {
            puVar3 = (undefined *)*plVar7;
          }
          else {
            *plVar7 = (longlong)puVar8;
            puVar3 = puVar8;
          }
          if (puVar3 == (undefined *)0x0) {
            *plVar7 = (longlong)"unknown";
          }
        }
        uVar9 = uVar9 + 1;
        puVar8 = puVar8 + 0x20;
        plVar7 = plVar7 + 2;
      } while ((int)uVar9 < 0x80);
      DAT_146836a04 = 0;
      CRYPTO_THREAD_unlock(DAT_146bc9a00);
      piVar5 = &DAT_146bc9a10;
      CRYPTO_THREAD_read_lock(DAT_146bc9a00);
      iVar2 = DAT_146bc9a10;
      while (iVar2 != 0) {
        OPENSSL_LH_insert(DAT_146bc9a08,piVar5);
        piVar5 = piVar5 + 4;
        iVar2 = *piVar5;
      }
    }
    CRYPTO_THREAD_unlock(DAT_146bc9a00);
    return 1;
  }
  return 0;
}



// FUNCTION 143cf0480 ERR_load_strings body=102 status=ok
// SIG undefined ERR_load_strings(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_load_strings(int param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = ERR_load_ERR_strings();
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  uVar2 = *param_2;
  puVar1 = param_2;
  while (uVar2 != 0) {
    *puVar1 = uVar2 | param_1 << 0x18;
    puVar1 = puVar1 + 4;
    uVar2 = *puVar1;
  }
  err_load_strings(param_2);
  return 1;
}



// FUNCTION 143cf04f0 ERR_load_strings_const body=52 status=ok
// SIG undefined ERR_load_strings_const(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_load_strings_const(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = ERR_load_ERR_strings();
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  err_load_strings(param_1);
  return 1;
}



// FUNCTION 143cf0530 ERR_peek_error body=74 status=ok
// SIG undefined ERR_peek_error(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 ERR_peek_error(void)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = ERR_get_state();
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x204) != *(int *)(lVar2 + 0x200))) {
    uVar1 = *(int *)(lVar2 + 0x204) + 1U & 0x8000000f;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffff0) + 1;
    }
    return *(undefined4 *)(lVar2 + 0x40 + (longlong)(int)uVar1 * 4);
  }
  return 0;
}



// FUNCTION 143cf0580 ERR_peek_last_error body=57 status=ok
// SIG undefined ERR_peek_last_error(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 ERR_peek_last_error(void)

{
  longlong lVar1;
  
  lVar1 = ERR_get_state();
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x204) != *(int *)(lVar1 + 0x200))) {
    return *(undefined4 *)(lVar1 + 0x40 + (longlong)*(int *)(lVar1 + 0x200) * 4);
  }
  return 0;
}



// FUNCTION 143cf05c0 ERR_pop_to_mark body=275 status=ok
// SIG undefined ERR_pop_to_mark(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_pop_to_mark(void)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  lVar3 = ERR_get_state();
  if (lVar3 != 0) {
    iVar5 = *(int *)(lVar3 + 0x204);
    iVar2 = *(int *)(lVar3 + 0x200);
    if (iVar5 != iVar2) {
      do {
        lVar4 = (longlong)iVar2;
        if ((*(byte *)(lVar3 + lVar4 * 4) & 1) != 0) break;
        if ((*(byte *)(lVar3 + 0x100 + lVar4 * 4) & 1) != 0) {
          CRYPTO_free(*(undefined8 *)(lVar3 + 0x80 + lVar4 * 8),"crypto\\err\\err.c",0x33e);
          *(undefined8 *)(lVar3 + 0x80 + (longlong)*(int *)(lVar3 + 0x200) * 8) = 0;
          iVar2 = *(int *)(lVar3 + 0x200);
        }
        *(undefined4 *)(lVar3 + 0x100 + (longlong)iVar2 * 4) = 0;
        *(undefined4 *)(lVar3 + (longlong)*(int *)(lVar3 + 0x200) * 4) = 0;
        *(undefined4 *)(lVar3 + 0x40 + (longlong)*(int *)(lVar3 + 0x200) * 4) = 0;
        *(undefined8 *)(lVar3 + 0x140 + (longlong)*(int *)(lVar3 + 0x200) * 8) = 0;
        *(undefined4 *)(lVar3 + 0x1c0 + (longlong)*(int *)(lVar3 + 0x200) * 4) = 0xffffffff;
        if (*(int *)(lVar3 + 0x200) < 1) {
          iVar2 = 0xf;
        }
        else {
          iVar2 = *(int *)(lVar3 + 0x200) + -1;
        }
        *(int *)(lVar3 + 0x200) = iVar2;
        iVar5 = *(int *)(lVar3 + 0x204);
      } while (iVar5 != iVar2);
      if (iVar5 != iVar2) {
        puVar1 = (uint *)(lVar3 + (longlong)iVar2 * 4);
        *puVar1 = *puVar1 & 0xfffffffe;
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143cf06e0 ERR_put_error body=315 status=ok
// SIG undefined ERR_put_error(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ERR_put_error(int param_1,uint param_2,uint param_3,undefined8 param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar3 = ERR_get_state();
  if (lVar3 != 0) {
    uVar4 = *(int *)(lVar3 + 0x200) + 1U & 0x8000000f;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffff0) + 1;
    }
    *(uint *)(lVar3 + 0x200) = uVar4;
    if (uVar4 == *(uint *)(lVar3 + 0x204)) {
      uVar1 = *(uint *)(lVar3 + 0x204) + 1 & 0x8000000f;
      if ((int)uVar1 < 0) {
        uVar1 = (uVar1 - 1 | 0xfffffff0) + 1;
      }
      *(uint *)(lVar3 + 0x204) = uVar1;
    }
    *(undefined4 *)(lVar3 + (longlong)(int)uVar4 * 4) = 0;
    *(uint *)(lVar3 + 0x40 + (longlong)*(int *)(lVar3 + 0x200) * 4) =
         (param_2 & 0xfff | param_1 << 0xc) << 0xc | param_3 & 0xfff;
    *(undefined8 *)(lVar3 + 0x140 + (longlong)*(int *)(lVar3 + 0x200) * 8) = param_4;
    *(undefined4 *)(lVar3 + 0x1c0 + (longlong)*(int *)(lVar3 + 0x200) * 4) = param_5;
    iVar2 = *(int *)(lVar3 + 0x200);
    if ((*(byte *)(lVar3 + 0x100 + (longlong)iVar2 * 4) & 1) != 0) {
      CRYPTO_free(*(undefined8 *)(lVar3 + 0x80 + (longlong)iVar2 * 8),"crypto\\err\\err.c",0x199);
      *(undefined8 *)(lVar3 + 0x80 + (longlong)*(int *)(lVar3 + 0x200) * 8) = 0;
      iVar2 = *(int *)(lVar3 + 0x200);
    }
    *(undefined4 *)(lVar3 + 0x100 + (longlong)iVar2 * 4) = 0;
  }
  return;
}



// FUNCTION 143cf0820 ERR_set_mark body=59 status=ok
// SIG undefined ERR_set_mark(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_set_mark(void)

{
  uint *puVar1;
  longlong lVar2;
  
  lVar2 = ERR_get_state();
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x204) != *(int *)(lVar2 + 0x200))) {
    puVar1 = (uint *)(lVar2 + (longlong)*(int *)(lVar2 + 0x200) * 4);
    *puVar1 = *puVar1 | 1;
    return 1;
  }
  return 0;
}



// FUNCTION 143cf0860 ERR_unload_strings body=127 status=ok
// SIG undefined ERR_unload_strings(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_unload_strings(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = CRYPTO_THREAD_run_once(&DAT_146bc99fc,do_err_strings_init_ossl_);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = DAT_146bcb1f0;
  }
  if (iVar2 != 0) {
    CRYPTO_THREAD_read_lock(DAT_146bc9a00);
    iVar2 = *param_2;
    while (iVar2 != 0) {
      OPENSSL_LH_delete(DAT_146bc9a08,param_2);
      param_2 = param_2 + 4;
      iVar2 = *param_2;
    }
    CRYPTO_THREAD_unlock(DAT_146bc9a00);
    return 1;
  }
  return 0;
}



// FUNCTION 143cf08e0 do_err_strings_init_ossl_ body=134 status=ok
// SIG undefined do_err_strings_init_ossl_(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void do_err_strings_init_ossl_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = OPENSSL_init_crypto(0,0,param_3,param_4,0x143cf08ea);
  if (iVar1 != 0) {
    DAT_146bc9a00 = CRYPTO_THREAD_lock_new();
    if (DAT_146bc9a00 != 0) {
      DAT_146bc9a08 = OPENSSL_LH_new(&LAB_143cf0b00,&LAB_143cf0ae0);
      if (DAT_146bc9a08 == 0) {
        CRYPTO_THREAD_lock_free(DAT_146bc9a00);
        DAT_146bc9a00 = 0;
        DAT_146bcb1f0 = 0;
        return;
      }
      DAT_146bcb1f0 = 1;
      return;
    }
  }
  DAT_146bcb1f0 = 0;
  return;
}



// FUNCTION 143cf0970 err_cleanup body=85 status=ok
// SIG undefined err_cleanup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void err_cleanup(void)

{
  if (DAT_146bc99f4 != 0) {
    CRYPTO_THREAD_cleanup_local(&DAT_146bc99f8);
  }
  CRYPTO_THREAD_lock_free(DAT_146bc9a00);
  DAT_146bc9a00 = 0;
  OPENSSL_LH_free(DAT_146bc9a08);
  DAT_146bc9a08 = 0;
  return;
}



// FUNCTION 143cf09d0 err_delete_thread_state body=68 status=ok
// SIG undefined err_delete_thread_state(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void err_delete_thread_state(void)

{
  longlong lVar1;
  
  lVar1 = CRYPTO_THREAD_get_local(&DAT_146bc99f8);
  if (lVar1 != 0) {
    CRYPTO_THREAD_set_local(&DAT_146bc99f8,0);
    ERR_STATE_free(lVar1);
    return;
  }
  return;
}



// FUNCTION 143cf0a20 err_do_init_ossl_ body=48 status=ok
// SIG undefined err_do_init_ossl_(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void err_do_init_ossl_(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  DAT_146bc99f4 = 1;
  DAT_146bcb1f4 = CRYPTO_THREAD_init_local(&DAT_146bc99f8,0,param_3,param_4,0x143cf0a2a);
  return;
}



// FUNCTION 143cf0a50 err_free_strings_int body=36 status=ok
// SIG undefined err_free_strings_int(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void err_free_strings_int(void)

{
  CRYPTO_THREAD_run_once(&DAT_146bc99fc,do_err_strings_init_ossl_);
  return;
}



// FUNCTION 143cf0a80 err_load_strings body=95 status=ok
// SIG undefined err_load_strings(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 err_load_strings(int *param_1)

{
  int iVar1;
  
  CRYPTO_THREAD_read_lock(DAT_146bc9a00);
  iVar1 = *param_1;
  while (iVar1 != 0) {
    OPENSSL_LH_insert(DAT_146bc9a08,param_1);
    param_1 = param_1 + 4;
    iVar1 = *param_1;
  }
  CRYPTO_THREAD_unlock(DAT_146bc9a00);
  return 1;
}



// FUNCTION 143cf0b40 cmac_key_free body=30 status=ok
// SIG undefined cmac_key_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void cmac_key_free(void)

{
  undefined8 uVar1;
  
  uVar1 = FUniqueNetIdString::GetBytes();
  SHA1_Init(uVar1);
  return;
}



// FUNCTION 143cf0b60 FUN_143cf0b60 body=54 status=ok
// SIG undefined FUN_143cf0b60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143cf0b60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUniqueNetIdString::GetBytes();
  SHA1_Update(uVar1,param_2,param_3);
  return;
}



// FUNCTION 143cf0ba0 FUN_143cf0ba0 body=39 status=ok
// SIG undefined FUN_143cf0ba0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143cf0ba0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUniqueNetIdString::GetBytes();
  SHA1_Final(param_2,uVar1);
  return;
}



// FUNCTION 143cf0bd0 ctrl body=334 status=ok
// SIG undefined ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 ctrl(longlong param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  if (param_2 == 0x1d) {
    if (((param_1 != 0) && (uVar3 = FUniqueNetIdString::GetBytes(), param_3 == 0x30)) &&
       (iVar1 = SHA1_Update(uVar3,param_4,0x30), 0 < iVar1)) {
      local_68 = 0x3636363636363636;
      local_60 = 0x3636363636363636;
      local_58 = 0x3636363636363636;
      local_50 = 0x3636363636363636;
      local_48 = 0x3636363636363636;
      iVar1 = SHA1_Update(uVar3,&local_68,0x28);
      if (((iVar1 != 0) && (iVar1 = SHA1_Final(local_40,uVar3), iVar1 != 0)) &&
         ((iVar1 = SHA1_Init(uVar3), iVar1 != 0 &&
          (iVar1 = SHA1_Update(uVar3,param_4,0x30), 0 < iVar1)))) {
        local_68 = 0x5c5c5c5c5c5c5c5c;
        local_60 = 0x5c5c5c5c5c5c5c5c;
        local_58 = 0x5c5c5c5c5c5c5c5c;
        local_50 = 0x5c5c5c5c5c5c5c5c;
        local_48 = 0x5c5c5c5c5c5c5c5c;
        iVar1 = SHA1_Update(uVar3,&local_68,0x28);
        if ((iVar1 != 0) && (iVar1 = SHA1_Update(uVar3,local_40,0x14), iVar1 != 0)) {
          FUN_14004ff40(local_40,0x14);
          return 1;
        }
      }
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}



// FUNCTION 143cf0d20 cmac_key_free body=30 status=ok
// SIG undefined cmac_key_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void cmac_key_free(void)

{
  undefined8 uVar1;
  
  uVar1 = FUniqueNetIdString::GetBytes();
  SHA224_Init(uVar1);
  return;
}



// FUNCTION 143cf0d40 FUN_143cf0d40 body=54 status=ok
// SIG undefined FUN_143cf0d40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143cf0d40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUniqueNetIdString::GetBytes();
  SHA224_Update(uVar1,param_2,param_3);
  return;
}



// FUNCTION 143cf0d80 FUN_143cf0d80 body=39 status=ok
// SIG undefined FUN_143cf0d80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143cf0d80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUniqueNetIdString::GetBytes();
  SHA224_Final(param_2,uVar1);
  return;
}



// FUNCTION 143cf0db0 cmac_key_free body=30 status=ok
// SIG undefined cmac_key_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void cmac_key_free(void)

{
  undefined8 uVar1;
  
  uVar1 = FUniqueNetIdString::GetBytes();
  SHA256_Init(uVar1);
  return;
}



// FUNCTION 143cf0dd0 FUN_143cf0dd0 body=54 status=ok
// SIG undefined FUN_143cf0dd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143cf0dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUniqueNetIdString::GetBytes();
  SHA256_Update(uVar1,param_2,param_3);
  return;
}



// FUNCTION 143cf0e10 FUN_143cf0e10 body=39 status=ok
// SIG undefined FUN_143cf0e10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143cf0e10(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUniqueNetIdString::GetBytes();
  SHA256_Final(param_2,uVar1);
  return;
}



// FUNCTION 143cf0e40 cmac_key_free body=30 status=ok
// SIG undefined cmac_key_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void cmac_key_free(void)

{
  undefined8 uVar1;
  
  uVar1 = FUniqueNetIdString::GetBytes();
  FUN_143d1f4e0(uVar1);
  return;
}



// FUNCTION 143cf0e60 cmac_key_free body=30 status=ok
// SIG undefined cmac_key_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void cmac_key_free(void)

{
  undefined8 uVar1;
  
  uVar1 = FUniqueNetIdString::GetBytes();
  FUN_143d1f570(uVar1);
  return;
}



// FUNCTION 143cf0e80 cmac_key_free body=30 status=ok
// SIG undefined cmac_key_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void cmac_key_free(void)

{
  undefined8 uVar1;
  
  uVar1 = FUniqueNetIdString::GetBytes();
  SHA384_Init(uVar1);
  return;
}



// FUNCTION 143cf0ea0 FUN_143cf0ea0 body=54 status=ok
// SIG undefined FUN_143cf0ea0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143cf0ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUniqueNetIdString::GetBytes();
  SHA384_Update(uVar1,param_2,param_3);
  return;
}



// FUNCTION 143cf0ee0 FUN_143cf0ee0 body=39 status=ok
// SIG undefined FUN_143cf0ee0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143cf0ee0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUniqueNetIdString::GetBytes();
  SHA384_Final(param_2,uVar1);
  return;
}



// FUNCTION 143cf0f10 cmac_key_free body=30 status=ok
// SIG undefined cmac_key_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void cmac_key_free(void)

{
  undefined8 uVar1;
  
  uVar1 = FUniqueNetIdString::GetBytes();
  SHA512_Init(uVar1);
  return;
}



// FUNCTION 143cf0f30 FUN_143cf0f30 body=54 status=ok
// SIG undefined FUN_143cf0f30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143cf0f30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUniqueNetIdString::GetBytes();
  SHA512_Update(uVar1,param_2,param_3);
  return;
}



// FUNCTION 143cf0f70 FUN_143cf0f70 body=39 status=ok
// SIG undefined FUN_143cf0f70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143cf0f70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUniqueNetIdString::GetBytes();
  SHA512_Final(param_2,uVar1);
  return;
}



// FUNCTION 143cf0fa0 EVP_sha1 body=8 status=ok
// SIG undefined EVP_sha1(void)

undefined * EVP_sha1(void)

{
  return &DAT_145d586a0;
}



// FUNCTION 143cf0fb0 FUN_143cf0fb0 body=8 status=ok
// SIG undefined FUN_143cf0fb0(void)

undefined * FUN_143cf0fb0(void)

{
  return &DAT_145d586f0;
}



// FUNCTION 143cf0fc0 EVP_sha256 body=8 status=ok
// SIG undefined EVP_sha256(void)

undefined * EVP_sha256(void)

{
  return &DAT_145d58740;
}



// FUNCTION 143cf0fd0 FUN_143cf0fd0 body=8 status=ok
// SIG undefined FUN_143cf0fd0(void)

undefined * FUN_143cf0fd0(void)

{
  return &DAT_145d58830;
}



// FUNCTION 143cf0fe0 FUN_143cf0fe0 body=8 status=ok
// SIG undefined FUN_143cf0fe0(void)

undefined * FUN_143cf0fe0(void)

{
  return &DAT_145d58880;
}



// FUNCTION 143cf0ff0 FUN_143cf0ff0 body=8 status=ok
// SIG undefined FUN_143cf0ff0(void)

undefined * FUN_143cf0ff0(void)

{
  return &DAT_145d58790;
}



// FUNCTION 143cf1000 FUN_143cf1000 body=8 status=ok
// SIG undefined FUN_143cf1000(void)

undefined * FUN_143cf1000(void)

{
  return &DAT_145d587e0;
}



// FUNCTION 143cf1010 HMAC body=394 status=ok
// SIG undefined HMAC(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined *
HMAC(undefined8 param_1,undefined *param_2,int param_3,undefined8 param_4,undefined8 param_5,
    undefined *param_6,undefined8 param_7)

{
  int iVar1;
  longlong *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_98 [4];
  undefined1 local_88 [64];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143cf1025;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  puVar3 = &DAT_146bcb300;
  if (param_6 != (undefined *)0x0) {
    puVar3 = param_6;
  }
  plVar2 = (longlong *)CRYPTO_zalloc(0xb8,"crypto\\hmac\\hmac.c");
  if ((plVar2 == (longlong *)0x0) || (iVar1 = HMAC_CTX_reset(plVar2), iVar1 != 0)) {
    if (plVar2 != (longlong *)0x0) {
      puVar4 = param_2;
      if ((param_2 == (undefined *)0x0) && (puVar4 = &DAT_145d588c8, param_3 != 0)) {
        puVar4 = param_2;
      }
      local_a8 = 0;
      iVar1 = HMAC_Init_ex(plVar2,puVar4,param_3,param_1);
      if (((((iVar1 != 0) && (*plVar2 != 0)) &&
           (iVar1 = EVP_DigestUpdate(plVar2[1],param_4,param_5), iVar1 != 0)) &&
          ((*plVar2 != 0 && (iVar1 = EVP_DigestFinal_ex(plVar2[1],local_88,local_98), iVar1 != 0))))
         && ((iVar1 = EVP_MD_CTX_copy_ex(plVar2[1],plVar2[3]), iVar1 != 0 &&
             ((iVar1 = EVP_DigestUpdate(plVar2[1],local_88,local_98[0]), iVar1 != 0 &&
              (iVar1 = EVP_DigestFinal_ex(plVar2[1],puVar3,param_7), iVar1 != 0)))))) {
        HMAC_CTX_free(plVar2);
        return puVar3;
      }
    }
  }
  else {
    HMAC_CTX_free(plVar2);
    plVar2 = (longlong *)0x0;
  }
  HMAC_CTX_free(plVar2);
  return (undefined *)0x0;
}



// FUNCTION 143cf11a0 HMAC_CTX_copy body=277 status=ok
// SIG undefined HMAC_CTX_copy(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 HMAC_CTX_copy(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = hmac_ctx_alloc_mds();
  if (iVar2 != 0) {
    iVar2 = EVP_MD_CTX_copy_ex(param_1[2],param_2[2]);
    if (iVar2 != 0) {
      iVar2 = EVP_MD_CTX_copy_ex(param_1[3],param_2[3]);
      if (iVar2 != 0) {
        iVar2 = EVP_MD_CTX_copy_ex(param_1[1],param_2[1]);
        if (iVar2 != 0) {
          uVar1 = *(undefined8 *)((longlong)param_2 + 0x2c);
          *(undefined8 *)((longlong)param_1 + 0x24) = *(undefined8 *)((longlong)param_2 + 0x24);
          *(undefined8 *)((longlong)param_1 + 0x2c) = uVar1;
          uVar1 = *(undefined8 *)((longlong)param_2 + 0x3c);
          *(undefined8 *)((longlong)param_1 + 0x34) = *(undefined8 *)((longlong)param_2 + 0x34);
          *(undefined8 *)((longlong)param_1 + 0x3c) = uVar1;
          uVar1 = *(undefined8 *)((longlong)param_2 + 0x4c);
          *(undefined8 *)((longlong)param_1 + 0x44) = *(undefined8 *)((longlong)param_2 + 0x44);
          *(undefined8 *)((longlong)param_1 + 0x4c) = uVar1;
          uVar1 = *(undefined8 *)((longlong)param_2 + 0x5c);
          *(undefined8 *)((longlong)param_1 + 0x54) = *(undefined8 *)((longlong)param_2 + 0x54);
          *(undefined8 *)((longlong)param_1 + 0x5c) = uVar1;
          uVar1 = *(undefined8 *)((longlong)param_2 + 0x6c);
          *(undefined8 *)((longlong)param_1 + 100) = *(undefined8 *)((longlong)param_2 + 100);
          *(undefined8 *)((longlong)param_1 + 0x6c) = uVar1;
          uVar1 = *(undefined8 *)((longlong)param_2 + 0x7c);
          *(undefined8 *)((longlong)param_1 + 0x74) = *(undefined8 *)((longlong)param_2 + 0x74);
          *(undefined8 *)((longlong)param_1 + 0x7c) = uVar1;
          uVar1 = *(undefined8 *)((longlong)param_2 + 0x8c);
          *(undefined8 *)((longlong)param_1 + 0x84) = *(undefined8 *)((longlong)param_2 + 0x84);
          *(undefined8 *)((longlong)param_1 + 0x8c) = uVar1;
          uVar1 = *(undefined8 *)((longlong)param_2 + 0x9c);
          *(undefined8 *)((longlong)param_1 + 0x94) = *(undefined8 *)((longlong)param_2 + 0x94);
          *(undefined8 *)((longlong)param_1 + 0x9c) = uVar1;
          uVar1 = *(undefined8 *)((longlong)param_2 + 0xac);
          *(undefined8 *)((longlong)param_1 + 0xa4) = *(undefined8 *)((longlong)param_2 + 0xa4);
          *(undefined8 *)((longlong)param_1 + 0xac) = uVar1;
          *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
          *param_1 = *param_2;
          return 1;
        }
      }
    }
  }
  EVP_MD_CTX_reset(param_1[2]);
  EVP_MD_CTX_reset(param_1[3]);
  EVP_MD_CTX_reset(param_1[1]);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_14004ff40((longlong)param_1 + 0x24,0x90);
  return 0;
}



// FUNCTION 143cf12c0 HMAC_CTX_free body=125 status=ok
// SIG undefined HMAC_CTX_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void HMAC_CTX_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    EVP_MD_CTX_reset(param_1[2]);
    EVP_MD_CTX_reset(param_1[3]);
    EVP_MD_CTX_reset(param_1[1]);
    *param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    FUN_14004ff40((longlong)param_1 + 0x24,0x90);
    EVP_MD_CTX_free(param_1[2]);
    EVP_MD_CTX_free(param_1[3]);
    EVP_MD_CTX_free(param_1[1]);
    CRYPTO_free(param_1,"crypto\\hmac\\hmac.c",0x9c);
  }
  return;
}



// FUNCTION 143cf1340 HMAC_CTX_new body=80 status=ok
// SIG undefined HMAC_CTX_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong HMAC_CTX_new(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = CRYPTO_zalloc(0xb8,"crypto\\hmac\\hmac.c");
  if (lVar2 != 0) {
    iVar1 = HMAC_CTX_reset(lVar2);
    if (iVar1 == 0) {
      HMAC_CTX_free(lVar2);
      return 0;
    }
  }
  return lVar2;
}



// FUNCTION 143cf1390 HMAC_CTX_reset body=174 status=ok
// SIG undefined HMAC_CTX_reset(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 HMAC_CTX_reset(undefined8 *param_1)

{
  int iVar1;
  
  EVP_MD_CTX_reset(param_1[2]);
  EVP_MD_CTX_reset(param_1[3]);
  EVP_MD_CTX_reset(param_1[1]);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_14004ff40((longlong)param_1 + 0x24,0x90);
  iVar1 = hmac_ctx_alloc_mds(param_1);
  if (iVar1 == 0) {
    EVP_MD_CTX_reset(param_1[2]);
    EVP_MD_CTX_reset(param_1[3]);
    EVP_MD_CTX_reset(param_1[1]);
    *param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    FUN_14004ff40((longlong)param_1 + 0x24,0x90);
    return 0;
  }
  return 1;
}



// FUNCTION 143cf1440 HMAC_CTX_set_flags body=65 status=ok
// SIG undefined HMAC_CTX_set_flags(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void HMAC_CTX_set_flags(longlong param_1,undefined4 param_2)

{
  EVP_MD_CTX_set_flags(*(undefined8 *)(param_1 + 0x10));
  EVP_MD_CTX_set_flags(*(undefined8 *)(param_1 + 0x18),param_2);
  EVP_MD_CTX_set_flags(*(undefined8 *)(param_1 + 8),param_2);
  return;
}



// FUNCTION 143cf1490 HMAC_Final body=162 status=ok
// SIG undefined HMAC_Final(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 HMAC_Final(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78 [4];
  undefined1 local_68 [64];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x143cf149e;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if ((((*param_1 != 0) && (iVar1 = EVP_DigestFinal_ex(param_1[1],local_68,local_78), iVar1 != 0))
      && (iVar1 = EVP_MD_CTX_copy_ex(param_1[1],param_1[3]), iVar1 != 0)) &&
     ((iVar1 = EVP_DigestUpdate(param_1[1],local_68,local_78[0]), iVar1 != 0 &&
      (iVar1 = EVP_DigestFinal_ex(param_1[1],param_2,param_3), iVar1 != 0)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 143cf1540 HMAC_Init_ex body=581 status=ok
// SIG undefined HMAC_Init_ex(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong HMAC_Init_ex(longlong *param_1,void *param_2,uint param_3,longlong param_4,
                     undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  byte *pbVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_108 [32];
  byte local_e8 [144];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x143cf1557;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  lVar10 = 0;
  bVar4 = false;
  lVar9 = *param_1;
  if (param_4 == 0) {
    if (lVar9 == 0) {
      return 0;
    }
  }
  else {
    if (param_4 != lVar9) {
      if (param_2 == (void *)0x0) {
        return 0;
      }
      if ((int)param_3 < 0) {
        return 0;
      }
    }
    bVar4 = true;
    *param_1 = param_4;
    lVar9 = param_4;
  }
  if (param_2 == (void *)0x0) {
    if (bVar4) goto LAB_143cf167f;
  }
  else {
    iVar5 = ULevelVariantSets::GetNumVariantSets(lVar9);
    if (0x90 < iVar5) {
      return 0;
    }
    if (iVar5 < (int)param_3) {
      iVar5 = EVP_DigestInit_ex(param_1[1],lVar9,param_5);
      if (iVar5 == 0) {
        return 0;
      }
      iVar5 = EVP_DigestUpdate(param_1[1],param_2,(longlong)(int)param_3);
      if (iVar5 == 0) {
        return 0;
      }
      iVar5 = EVP_DigestFinal_ex(param_1[1],(longlong)param_1 + 0x24,param_1 + 4);
      if (iVar5 == 0) {
        return 0;
      }
    }
    else {
      if (0x90 < param_3) {
        return 0;
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)param_1 + 0x24),param_2,(longlong)(int)param_3);
      *(uint *)(param_1 + 4) = param_3;
    }
    uVar3 = *(uint *)(param_1 + 4);
    bVar4 = true;
    if (uVar3 != 0x90) {
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)param_1 + (ulonglong)uVar3 + 0x24),0,(ulonglong)(0x90 - uVar3));
      bVar4 = true;
    }
LAB_143cf167f:
    lVar1 = (longlong)param_1 + (0x24 - (longlong)local_e8);
    lVar2 = (longlong)param_1 + (0x25 - (longlong)local_e8);
    lVar8 = lVar10;
    do {
      pbVar6 = local_e8 + lVar8;
      lVar7 = lVar8 + 2;
      *pbVar6 = pbVar6[lVar1] ^ 0x36;
      local_e8[lVar8 + 1] = pbVar6[lVar2] ^ 0x36;
      lVar8 = lVar7;
    } while (lVar7 < 0x90);
    iVar5 = EVP_DigestInit_ex(param_1[2],lVar9,param_5);
    if (iVar5 == 0) goto LAB_143cf1769;
    iVar5 = ULevelVariantSets::GetNumVariantSets(lVar9);
    iVar5 = EVP_DigestUpdate(param_1[2],local_e8,(longlong)iVar5);
    lVar8 = lVar10;
    if (iVar5 == 0) goto LAB_143cf1769;
    do {
      pbVar6 = local_e8 + lVar8;
      lVar7 = lVar8 + 2;
      *pbVar6 = pbVar6[lVar1] ^ 0x5c;
      local_e8[lVar8 + 1] = pbVar6[lVar2] ^ 0x5c;
      lVar8 = lVar7;
    } while (lVar7 < 0x90);
    iVar5 = EVP_DigestInit_ex(param_1[3],lVar9,param_5);
    if (iVar5 == 0) goto LAB_143cf1769;
    iVar5 = ULevelVariantSets::GetNumVariantSets(lVar9);
    iVar5 = EVP_DigestUpdate(param_1[3],local_e8,(longlong)iVar5);
    lVar10 = 0;
    if (iVar5 == 0) goto LAB_143cf1769;
  }
  iVar5 = EVP_MD_CTX_copy_ex(param_1[1],param_1[2]);
  lVar10 = 0;
  if (iVar5 != 0) {
    lVar10 = 1;
  }
LAB_143cf1769:
  if (bVar4) {
    FUN_14004ff40(local_e8,0x90);
    return lVar10;
  }
  return lVar10;
}



// FUNCTION 143cf1790 HMAC_Update body=39 status=ok
// SIG undefined HMAC_Update(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 HMAC_Update(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    return 0;
  }
  uVar1 = EVP_DigestUpdate(param_1[1]);
  return uVar1;
}



// FUNCTION 143cf17c0 HMAC_size body=35 status=ok
// SIG undefined HMAC_size(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong HMAC_size(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = EVP_MD_size(*param_1);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  return (longlong)iVar1;
}



// FUNCTION 143cf17f0 hmac_ctx_alloc_mds body=106 status=ok
// SIG undefined hmac_ctx_alloc_mds(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 hmac_ctx_alloc_mds(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar1 = EVP_MD_CTX_new();
    *(longlong *)(param_1 + 0x10) = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar1 = EVP_MD_CTX_new();
    *(longlong *)(param_1 + 0x18) = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar1 = EVP_MD_CTX_new();
    *(longlong *)(param_1 + 8) = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 143cf1860 CRYPTO_THREAD_cleanup_local body=35 status=ok
// SIG undefined CRYPTO_THREAD_cleanup_local(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool CRYPTO_THREAD_cleanup_local(DWORD *param_1)

{
  BOOL BVar1;
  
  BVar1 = TlsFree(*param_1);
  return BVar1 != 0;
}



// FUNCTION 143cf1890 FUN_143cf1890 body=8 status=ok
// SIG undefined FUN_143cf1890(void)

bool FUN_143cf1890(int param_1,int param_2)

{
  return param_1 == param_2;
}



// FUNCTION 143cf18a0 CRYPTO_THREAD_get_current_id body=24 status=ok
// SIG undefined CRYPTO_THREAD_get_current_id(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRYPTO_THREAD_get_current_id(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143cf18b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetCurrentThreadId();
  return;
}



// FUNCTION 143cf18c0 CRYPTO_THREAD_get_local body=63 status=ok
// SIG undefined CRYPTO_THREAD_get_local(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

LPVOID CRYPTO_THREAD_get_local(DWORD *param_1)

{
  DWORD dwErrCode;
  LPVOID pvVar1;
  
  dwErrCode = GetLastError();
  pvVar1 = TlsGetValue(*param_1);
  SetLastError(dwErrCode);
  return pvVar1;
}



// FUNCTION 143cf1900 CRYPTO_THREAD_init_local body=42 status=ok
// SIG undefined CRYPTO_THREAD_init_local(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool CRYPTO_THREAD_init_local(DWORD *param_1)

{
  DWORD DVar1;
  
  DVar1 = TlsAlloc();
  *param_1 = DVar1;
  return DVar1 != 0xffffffff;
}



// FUNCTION 143cf1930 CRYPTO_THREAD_lock_free body=55 status=ok
// SIG undefined CRYPTO_THREAD_lock_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRYPTO_THREAD_lock_free(LPCRITICAL_SECTION param_1)

{
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    DeleteCriticalSection(param_1);
    CRYPTO_free(param_1,"crypto\\threads_win.c",0x3c);
  }
  return;
}



// FUNCTION 143cf1970 CRYPTO_THREAD_lock_new body=96 status=ok
// SIG undefined CRYPTO_THREAD_lock_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

LPCRITICAL_SECTION CRYPTO_THREAD_lock_new(void)

{
  BOOL BVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)CRYPTO_zalloc(0x28,"crypto\\threads_win.c",0x16);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    BVar1 = InitializeCriticalSectionAndSpinCount(lpCriticalSection,0x400);
    if (BVar1 != 0) {
      return lpCriticalSection;
    }
    CRYPTO_free(lpCriticalSection,"crypto\\threads_win.c",0x1d);
  }
  return (LPCRITICAL_SECTION)0x0;
}



// FUNCTION 143cf19d0 CRYPTO_THREAD_read_lock body=29 status=ok
// SIG undefined CRYPTO_THREAD_read_lock(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CRYPTO_THREAD_read_lock(LPCRITICAL_SECTION param_1)

{
  EnterCriticalSection(param_1);
  return 1;
}



// FUNCTION 143cf19f0 CRYPTO_THREAD_run_once body=104 status=ok
// SIG undefined CRYPTO_THREAD_run_once(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool CRYPTO_THREAD_run_once(int *param_1,code *param_2)

{
  int iVar1;
  bool bVar2;
  
  if (*param_1 == 2) {
    return true;
  }
  while( true ) {
    LOCK();
    iVar1 = *param_1;
    bVar2 = iVar1 == 0;
    if (bVar2) {
      *param_1 = 1;
      iVar1 = 0;
    }
    UNLOCK();
    if (bVar2) break;
    if (iVar1 != 1) {
      return *param_1 == 2;
    }
  }
  (*param_2)();
  *param_1 = 2;
  return true;
}



// FUNCTION 143cf1a60 CRYPTO_THREAD_set_local body=35 status=ok
// SIG undefined CRYPTO_THREAD_set_local(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool CRYPTO_THREAD_set_local(DWORD *param_1,LPVOID param_2)

{
  BOOL BVar1;
  
  BVar1 = TlsSetValue(*param_1,param_2);
  return BVar1 != 0;
}



// FUNCTION 143cf1a90 CRYPTO_THREAD_unlock body=29 status=ok
// SIG undefined CRYPTO_THREAD_unlock(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CRYPTO_THREAD_unlock(LPCRITICAL_SECTION param_1)

{
  LeaveCriticalSection(param_1);
  return 1;
}



// FUNCTION 143cf1ab0 CRYPTO_atomic_add body=17 status=ok
// SIG undefined CRYPTO_atomic_add(void)

undefined8 CRYPTO_atomic_add(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  UNLOCK();
  *param_3 = iVar1 + param_2;
  return 1;
}



// FUNCTION 143cf1ad0 CRYPTO_dup_ex_data body=527 status=ok
// SIG undefined CRYPTO_dup_ex_data(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * CRYPTO_dup_ex_data(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  longlong lVar12;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 local_b0;
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 local_98 [80];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143cf1aea;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  puVar10 = (undefined1 *)0x0;
  if (*param_3 == 0) {
LAB_143cf1caf:
    puVar10 = (undefined1 *)0x1;
  }
  else {
    local_a0 = param_2;
    puVar4 = (undefined8 *)get_and_lock();
    if (puVar4 != (undefined8 *)0x0) {
      iVar2 = OPENSSL_sk_num(*puVar4);
      iVar3 = OPENSSL_sk_num(*param_3);
      if (iVar3 < iVar2) {
        iVar2 = iVar3;
      }
      lVar12 = (longlong)iVar2;
      puVar5 = puVar10;
      if (0 < iVar2) {
        if (iVar2 < 10) {
          puVar5 = local_98;
        }
        else {
          puVar5 = (undefined1 *)CRYPTO_malloc(lVar12 * 8,"crypto\\ex_data.c",0x115);
          if (puVar5 == (undefined1 *)0x0) goto LAB_143cf1b98;
        }
        puVar9 = puVar10;
        puVar11 = puVar10;
        if (0 < iVar2) {
          do {
            uVar6 = OPENSSL_sk_value(*puVar4,puVar11);
            *(undefined8 *)(puVar5 + (longlong)puVar9 * 8) = uVar6;
            puVar9 = puVar9 + 1;
            puVar11 = (undefined1 *)(ulonglong)((int)puVar11 + 1);
          } while ((longlong)puVar9 < lVar12);
        }
      }
LAB_143cf1b98:
      CRYPTO_THREAD_unlock(DAT_146bcb3c0);
      uVar6 = local_a0;
      if (iVar2 == 0) goto LAB_143cf1caf;
      if (puVar5 != (undefined1 *)0x0) {
        uVar7 = CRYPTO_get_ex_data(local_a0,iVar2 + -1);
        iVar3 = CRYPTO_set_ex_data(uVar6,iVar2 + -1,uVar7);
        if (iVar3 != 0) {
          puVar9 = puVar10;
          puVar11 = puVar10;
          if (0 < iVar2) {
            do {
              puVar8 = puVar10;
              if ((*param_3 != 0) && (iVar2 = OPENSSL_sk_num(), (int)puVar9 < iVar2)) {
                puVar8 = (undefined1 *)OPENSSL_sk_value(*param_3,puVar9);
              }
              puVar1 = *(undefined4 **)(puVar5 + (longlong)puVar11 * 8);
              local_a8 = puVar8;
              if ((puVar1 != (undefined4 *)0x0) && (*(code **)(puVar1 + 8) != (code *)0x0)) {
                local_b0 = *(undefined8 *)(puVar1 + 2);
                local_b8 = *puVar1;
                iVar2 = (**(code **)(puVar1 + 8))(uVar6,param_3,&local_a8,puVar9);
                if (iVar2 == 0) goto LAB_143cf1c8c;
              }
              CRYPTO_set_ex_data(uVar6,puVar9,local_a8);
              puVar11 = puVar11 + 1;
              puVar9 = (undefined1 *)(ulonglong)((int)puVar9 + 1);
            } while ((longlong)puVar11 < lVar12);
          }
          puVar10 = (undefined1 *)0x1;
        }
LAB_143cf1c8c:
        if (puVar5 == local_98) {
          return puVar10;
        }
        CRYPTO_free(puVar5,"crypto\\ex_data.c",0x137);
        return puVar10;
      }
      local_b8 = 0x11f;
      ERR_put_error(0xf,0x6e,0x41,"crypto\\ex_data.c");
    }
    puVar10 = (undefined1 *)0x0;
  }
  return puVar10;
}



// FUNCTION 143cf1ce0 CRYPTO_free_ex_data body=470 status=ok
// SIG undefined CRYPTO_free_ex_data(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void CRYPTO_free_ex_data(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [80];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  puVar4 = (undefined1 *)0x0;
  puVar3 = (undefined8 *)get_and_lock();
  if (puVar3 == (undefined8 *)0x0) goto LAB_143cf1e87;
  iVar1 = OPENSSL_sk_num(*puVar3);
  lVar8 = (longlong)iVar1;
  if (0 < iVar1) {
    if (iVar1 < 10) {
      puVar4 = local_98;
    }
    else {
      puVar4 = (undefined1 *)CRYPTO_malloc(lVar8 * 8,"crypto\\ex_data.c",0x151);
      if (puVar4 == (undefined1 *)0x0) goto LAB_143cf1d99;
    }
    iVar1 = 0;
    if (0 < lVar8) {
      lVar7 = 0;
      do {
        uVar5 = OPENSSL_sk_value(*puVar3,iVar1);
        *(undefined8 *)(puVar4 + lVar7 * 8) = uVar5;
        iVar1 = iVar1 + 1;
        lVar7 = lVar7 + 1;
      } while (lVar7 < lVar8);
    }
  }
LAB_143cf1d99:
  CRYPTO_THREAD_unlock(DAT_146bcb3c0);
  iVar1 = 0;
  if (0 < lVar8) {
    lVar7 = 0;
    do {
      if (puVar4 == (undefined1 *)0x0) {
        CRYPTO_THREAD_read_lock(DAT_146bcb3c0);
        puVar6 = (undefined4 *)OPENSSL_sk_value(*puVar3,iVar1);
        CRYPTO_THREAD_unlock(DAT_146bcb3c0);
      }
      else {
        puVar6 = *(undefined4 **)(puVar4 + lVar7 * 8);
      }
      if ((puVar6 != (undefined4 *)0x0) && (*(longlong *)(puVar6 + 6) != 0)) {
        if ((*param_3 == 0) || (iVar2 = OPENSSL_sk_num(), iVar2 <= iVar1)) {
          uVar5 = 0;
        }
        else {
          uVar5 = OPENSSL_sk_value(*param_3,iVar1);
        }
        local_a0 = *(undefined8 *)(puVar6 + 2);
        local_a8 = *puVar6;
        (**(code **)(puVar6 + 6))(param_2,uVar5,param_3,iVar1);
      }
      iVar1 = iVar1 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar8);
  }
  if (puVar4 != local_98) {
    CRYPTO_free(puVar4,"crypto\\ex_data.c",0x167);
  }
LAB_143cf1e87:
  OPENSSL_sk_free(*param_3);
  *param_3 = 0;
  return;
}



// FUNCTION 143cf1ec0 CRYPTO_get_ex_data body=74 status=ok
// SIG undefined CRYPTO_get_ex_data(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CRYPTO_get_ex_data(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*param_1 != 0) {
    iVar1 = OPENSSL_sk_num();
    if (param_2 < iVar1) {
      uVar2 = OPENSSL_sk_value(*param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 143cf1f10 CRYPTO_get_ex_new_index body=354 status=ok
// SIG undefined CRYPTO_get_ex_new_index(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int CRYPTO_get_ex_new_index
              (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143cf1f29;
  iVar5 = -1;
  plVar2 = (longlong *)get_and_lock();
  if (plVar2 == (longlong *)0x0) {
    return -1;
  }
  if (*plVar2 == 0) {
    lVar3 = OPENSSL_sk_new_null();
    *plVar2 = lVar3;
    if ((lVar3 == 0) || (iVar1 = OPENSSL_sk_push(lVar3,0), iVar1 == 0)) {
      ERR_put_error(0xf,100,0x41,"crypto\\ex_data.c",0xac,uVar6);
      goto LAB_143cf2050;
    }
  }
  puVar4 = (undefined4 *)CRYPTO_malloc(0x28,"crypto\\ex_data.c",0xb1);
  if (puVar4 == (undefined4 *)0x0) {
    ERR_put_error(0xf,100,0x41,"crypto\\ex_data.c",0xb3,uVar6);
  }
  else {
    *puVar4 = param_2;
    *(undefined8 *)(puVar4 + 2) = param_3;
    *(undefined8 *)(puVar4 + 4) = param_4;
    *(undefined8 *)(puVar4 + 8) = param_5;
    *(undefined8 *)(puVar4 + 6) = param_6;
    iVar1 = OPENSSL_sk_push(*plVar2,0);
    if (iVar1 == 0) {
      ERR_put_error(0xf,100,0x41,"crypto\\ex_data.c",0xbd,uVar6);
      CRYPTO_free(puVar4,"crypto\\ex_data.c",0xbe);
    }
    else {
      iVar5 = OPENSSL_sk_num(*plVar2);
      iVar5 = iVar5 + -1;
      OPENSSL_sk_set(*plVar2,iVar5,puVar4);
    }
  }
LAB_143cf2050:
  CRYPTO_THREAD_unlock(DAT_146bcb3c0);
  return iVar5;
}



// FUNCTION 143cf2080 CRYPTO_new_ex_data body=461 status=ok
// SIG undefined CRYPTO_new_ex_data(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 CRYPTO_new_ex_data(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [80];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  puVar4 = (undefined1 *)0x0;
  puVar3 = (undefined8 *)get_and_lock();
  if (puVar3 == (undefined8 *)0x0) {
    return 0;
  }
  *param_3 = 0;
  iVar2 = OPENSSL_sk_num(*puVar3);
  lVar8 = (longlong)iVar2;
  if (0 < iVar2) {
    if (iVar2 < 10) {
      puVar4 = local_98;
    }
    else {
      puVar4 = (undefined1 *)CRYPTO_malloc(lVar8 * 8,"crypto\\ex_data.c",0xe2);
      if (puVar4 == (undefined1 *)0x0) goto LAB_143cf2149;
    }
    iVar7 = 0;
    if (0 < iVar2) {
      lVar6 = 0;
      do {
        uVar5 = OPENSSL_sk_value(*puVar3,iVar7);
        *(undefined8 *)(puVar4 + lVar6 * 8) = uVar5;
        iVar7 = iVar7 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar8);
    }
  }
LAB_143cf2149:
  CRYPTO_THREAD_unlock(DAT_146bcb3c0);
  if ((iVar2 < 1) || (puVar4 != (undefined1 *)0x0)) {
    iVar2 = 0;
    if (0 < lVar8) {
      lVar6 = 0;
      do {
        if ((*(longlong *)(puVar4 + lVar6 * 8) != 0) &&
           (*(longlong *)(*(longlong *)(puVar4 + lVar6 * 8) + 0x10) != 0)) {
          if ((*param_3 == 0) || (iVar7 = OPENSSL_sk_num(), iVar7 <= iVar2)) {
            uVar5 = 0;
          }
          else {
            uVar5 = OPENSSL_sk_value(*param_3,iVar2);
          }
          puVar1 = *(undefined4 **)(puVar4 + lVar6 * 8);
          local_a0 = *(undefined8 *)(puVar1 + 2);
          local_a8 = *puVar1;
          (**(code **)(puVar1 + 4))(param_2,uVar5,param_3,iVar2);
        }
        iVar2 = iVar2 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar8);
    }
    if (puVar4 != local_98) {
      CRYPTO_free(puVar4,"crypto\\ex_data.c",0xf5);
    }
    uVar5 = 1;
  }
  else {
    local_a8 = 0xea;
    ERR_put_error(0xf,0x70,0x41,"crypto\\ex_data.c");
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 143cf2250 CRYPTO_set_ex_data body=223 status=ok
// SIG undefined CRYPTO_set_ex_data(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CRYPTO_set_ex_data(longlong *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143cf2265;
  lVar3 = *param_1;
  if (lVar3 == 0) {
    lVar3 = OPENSSL_sk_new_null();
    *param_1 = lVar3;
    if (lVar3 == 0) {
      ERR_put_error(0xf,0x66,0x41,"crypto\\ex_data.c",0x177,uVar4);
      return 0;
    }
  }
  iVar1 = OPENSSL_sk_num(lVar3);
  while( true ) {
    if (param_2 < iVar1) {
      OPENSSL_sk_set(*param_1,param_2,param_3);
      return 1;
    }
    iVar2 = OPENSSL_sk_push(*param_1,0);
    if (iVar2 == 0) break;
    iVar1 = iVar1 + 1;
  }
  ERR_put_error(0xf,0x66,0x41,"crypto\\ex_data.c",0x17e,uVar4);
  return 0;
}



// FUNCTION 143cf2330 cleanup_cb body=33 status=ok
// SIG undefined cleanup_cb(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void cleanup_cb(undefined8 param_1)

{
  CRYPTO_free(param_1,"crypto\\ex_data.c",0x54);
  return;
}



// FUNCTION 143cf2360 crypto_cleanup_all_ex_data_int body=110 status=ok
// SIG undefined crypto_cleanup_all_ex_data_int(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void crypto_cleanup_all_ex_data_int(void)

{
  undefined8 *puVar1;
  
  puVar1 = &DAT_146bcb340;
  do {
    OPENSSL_sk_pop_free(*puVar1,cleanup_cb);
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while ((longlong)puVar1 < 0x146bcb3c0);
  CRYPTO_THREAD_lock_free(DAT_146bcb3c0);
  DAT_146bcb3c0 = 0;
  return;
}



// FUNCTION 143cf23d0 FUN_143cf23d0 body=70 status=ok
// SIG undefined FUN_143cf23d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143cf23d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = OPENSSL_init_crypto(0,0,param_3,param_4,0x143cf23da);
  if (iVar1 == 0) {
    DAT_146bcb3cc = 0;
    return;
  }
  DAT_146bcb3c0 = CRYPTO_THREAD_lock_new();
  DAT_146bcb3cc = (uint)(DAT_146bcb3c0 != 0);
  return;
}



// FUNCTION 143cf2420 get_and_lock body=147 status=ok
// SIG undefined get_and_lock(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * get_and_lock(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143cf242c;
  if (param_1 < 0x10) {
    iVar1 = CRYPTO_THREAD_run_once(&DAT_146bcb3c8);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = DAT_146bcb3cc;
    }
    if (iVar2 != 0) {
      if (DAT_146bcb3c0 == 0) {
        return (undefined8 *)0x0;
      }
      CRYPTO_THREAD_read_lock();
      return &DAT_146bcb340 + (int)param_1;
    }
    uVar4 = 0x3c;
    uVar3 = 0x41;
  }
  else {
    uVar4 = 0x37;
    uVar3 = 7;
  }
  ERR_put_error(0xf,0x71,uVar3,"crypto\\ex_data.c",uVar4,uVar5);
  return (undefined8 *)0x0;
}



// FUNCTION 143cf24c0 CRYPTO_malloc body=77 status=ok
// SIG undefined CRYPTO_malloc(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * CRYPTO_malloc(size_t param_1)

{
  void *pvVar1;
  
  if ((PTR_CRYPTO_malloc_146836a10 != (undefined *)0x0) &&
     ((code *)PTR_CRYPTO_malloc_146836a10 != CRYPTO_malloc)) {
                    /* WARNING: Could not recover jumptable at 0x000143cf24e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (void *)(*(code *)PTR_CRYPTO_malloc_146836a10)();
    return pvVar1;
  }
  if (param_1 == 0) {
    return (void *)0x0;
  }
  _DAT_146836a08 = 0;
                    /* WARNING: Could not recover jumptable at 0x000143cf2506. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = malloc(param_1);
  return pvVar1;
}



// FUNCTION 143cf2510 CRYPTO_free body=55 status=ok
// SIG undefined CRYPTO_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRYPTO_free(void *param_1)

{
  if ((PTR_CRYPTO_free_146836a20 != (undefined *)0x0) &&
     ((code *)PTR_CRYPTO_free_146836a20 != CRYPTO_free)) {
                    /* WARNING: Could not recover jumptable at 0x000143cf2539. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_CRYPTO_free_146836a20)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143cf2540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(param_1);
  return;
}



// FUNCTION 143cf2550 CRYPTO_realloc body=201 status=ok
// SIG undefined CRYPTO_realloc(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * CRYPTO_realloc(void *param_1,size_t param_2,undefined8 param_3,undefined4 param_4)

{
  void *pvVar1;
  
  if ((PTR_CRYPTO_realloc_146836a18 != (undefined *)0x0) &&
     ((code *)PTR_CRYPTO_realloc_146836a18 != CRYPTO_realloc)) {
                    /* WARNING: Could not recover jumptable at 0x000143cf2582. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (void *)(*(code *)PTR_CRYPTO_realloc_146836a18)(param_1,param_2);
    return pvVar1;
  }
  if (param_1 == (void *)0x0) {
    if ((PTR_CRYPTO_malloc_146836a10 != (undefined *)0x0) &&
       ((code *)PTR_CRYPTO_malloc_146836a10 != CRYPTO_malloc)) {
                    /* WARNING: Could not recover jumptable at 0x000143cf25af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pvVar1 = (void *)(*(code *)PTR_CRYPTO_malloc_146836a10)(param_2,param_3,param_4);
      return pvVar1;
    }
    if (param_2 != 0) {
      _DAT_146836a08 = 0;
                    /* WARNING: Could not recover jumptable at 0x000143cf25c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pvVar1 = malloc(param_2);
      return pvVar1;
    }
    return (void *)0x0;
  }
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000143cf260d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = realloc(param_1,param_2);
    return pvVar1;
  }
  if ((PTR_CRYPTO_free_146836a20 != (undefined *)0x0) &&
     ((code *)PTR_CRYPTO_free_146836a20 != CRYPTO_free)) {
    (*(code *)PTR_CRYPTO_free_146836a20)(param_1,param_3,param_4,param_4,0x143cf255a);
    return (void *)0x0;
  }
  free(param_1);
  return (void *)0x0;
}



// FUNCTION 143cf2620 CRYPTO_clear_free body=124 status=ok
// SIG undefined CRYPTO_clear_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRYPTO_clear_free(void *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  if (param_1 != (void *)0x0) {
    if (param_2 != 0) {
      FUN_14004ff40();
    }
    if ((PTR_CRYPTO_free_146836a20 != (undefined *)0x0) &&
       ((code *)PTR_CRYPTO_free_146836a20 != CRYPTO_free)) {
                    /* WARNING: Could not recover jumptable at 0x000143cf2680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR_CRYPTO_free_146836a20)(param_1,param_3,param_4);
      return;
    }
    free(param_1);
  }
  return;
}



// FUNCTION 143cf26a0 CRYPTO_clear_realloc body=302 status=ok
// SIG undefined CRYPTO_clear_realloc(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * CRYPTO_clear_realloc
                 (void *param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
                 undefined4 param_5)

{
  void *pvVar1;
  
  if (param_1 == (void *)0x0) {
    if ((PTR_CRYPTO_malloc_146836a10 != (undefined *)0x0) &&
       ((code *)PTR_CRYPTO_malloc_146836a10 != CRYPTO_malloc)) {
      pvVar1 = (void *)(*(code *)PTR_CRYPTO_malloc_146836a10)(param_3,param_4,param_5);
      return pvVar1;
    }
    pvVar1 = (void *)0x0;
    if (param_3 != 0) {
      _DAT_146836a08 = 0;
      pvVar1 = malloc(param_3);
    }
    return pvVar1;
  }
  if (param_3 == 0) {
    CRYPTO_clear_free(param_1,param_2,param_4,param_5);
    return (void *)0x0;
  }
  if (param_3 < param_2) {
    FUN_14004ff40((longlong)param_1 + param_3,param_2 - param_3);
    return param_1;
  }
  pvVar1 = (void *)CRYPTO_malloc(param_3,param_4,param_5);
  if (pvVar1 != (void *)0x0) {
    _guard_xfg_dispatch_icall_nop(pvVar1,param_1,param_2);
    CRYPTO_clear_free(param_1,param_2,param_4,param_5);
  }
  return pvVar1;
}



// FUNCTION 143cf27d0 CRYPTO_get_mem_functions body=46 status=ok
// SIG undefined CRYPTO_get_mem_functions(void)

void CRYPTO_get_mem_functions(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = PTR_CRYPTO_malloc_146836a10;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = PTR_CRYPTO_realloc_146836a18;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = PTR_CRYPTO_free_146836a20;
  }
  return;
}



// FUNCTION 143cf2800 CRYPTO_zalloc body=125 status=ok
// SIG undefined CRYPTO_zalloc(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * CRYPTO_zalloc(size_t param_1)

{
  void *_Dst;
  
  if ((PTR_CRYPTO_malloc_146836a10 == (undefined *)0x0) ||
     ((code *)PTR_CRYPTO_malloc_146836a10 == CRYPTO_malloc)) {
    if (param_1 == 0) {
      return (void *)0x0;
    }
    _DAT_146836a08 = 0;
    _Dst = malloc(param_1);
  }
  else {
    _Dst = (void *)(*(code *)PTR_CRYPTO_malloc_146836a10)(param_1);
  }
  if (_Dst != (void *)0x0) {
    _guard_xfg_dispatch_icall_nop(_Dst,0,param_1);
  }
  return _Dst;
}



// FUNCTION 143cf2880 CRYPTO_memdup body=163 status=ok
// SIG undefined CRYPTO_memdup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void * CRYPTO_memdup(void *param_1,ulonglong param_2,undefined8 param_3,undefined4 param_4)

{
  void *_Dst;
  undefined8 uVar1;
  
  uVar1 = 0x143cf2890;
  if ((param_1 != (void *)0x0) && (param_2 < 0x7fffffff)) {
    _Dst = (void *)CRYPTO_malloc(param_2,param_3,param_4);
    if (_Dst == (void *)0x0) {
      ERR_put_error(0xf,0x73,0x41,"crypto\\o_str.c",0x42,uVar1);
      return (void *)0x0;
    }
    _guard_xfg_dispatch_icall_nop(_Dst,param_1,param_2);
    return _Dst;
  }
  return (void *)0x0;
}



// FUNCTION 143cf2930 CRYPTO_strdup body=100 status=ok
// SIG undefined CRYPTO_strdup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong CRYPTO_strdup(char *param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  
  if (param_1 != (char *)0x0) {
    cVar1 = *param_1;
    pcVar4 = param_1;
    for (uVar2 = 0; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar4;
    }
    lVar3 = CRYPTO_malloc((uVar2 & 0x7fffffff) + 1);
    if (lVar3 != 0) {
      lVar5 = lVar3 - (longlong)param_1;
      do {
        cVar1 = *param_1;
        param_1[lVar5] = cVar1;
        param_1 = param_1 + 1;
      } while (cVar1 != '\0');
    }
    return lVar3;
  }
  return 0;
}



// FUNCTION 143cf29a0 CRYPTO_strndup body=131 status=ok
// SIG undefined CRYPTO_strndup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void * CRYPTO_strndup(char *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  char *pcVar1;
  void *_Dst;
  size_t _Size;
  
  pcVar1 = param_1;
  if (param_1 == (char *)0x0) {
    return (void *)0x0;
  }
  for (; (param_2 != 0 && (param_2 = param_2 + -1, *pcVar1 != '\0')); pcVar1 = pcVar1 + 1) {
  }
  _Size = (longlong)pcVar1 - (longlong)param_1;
  _Dst = (void *)CRYPTO_malloc(_Size + 1,param_3,param_4);
  if (_Dst != (void *)0x0) {
    _guard_xfg_dispatch_icall_nop(_Dst,param_1,_Size);
    *(undefined1 *)((longlong)_Dst + _Size) = 0;
  }
  return _Dst;
}



// FUNCTION 143cf2a30 OPENSSL_buf2hexstr body=209 status=ok
// SIG undefined OPENSSL_buf2hexstr(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char * OPENSSL_buf2hexstr(byte *param_1,uint param_2)

{
  char *pcVar1;
  char *pcVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143cf2a40;
  uVar3 = (ulonglong)param_2;
  if (param_2 == 0) {
    pcVar1 = (char *)CRYPTO_zalloc(1,"crypto\\o_str.c",200);
    return pcVar1;
  }
  pcVar1 = (char *)CRYPTO_malloc((longlong)(int)(param_2 * 3),"crypto\\o_str.c",0xcb);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    if (0 < (int)param_2) {
      do {
        *pcVar2 = "0123456789ABCDEF"[*param_1 >> 4];
        pcVar2[1] = "0123456789ABCDEF"[*param_1 & 0xf];
        pcVar2[2] = ':';
        pcVar2 = pcVar2 + 3;
        uVar3 = uVar3 - 1;
        param_1 = param_1 + 1;
      } while (uVar3 != 0);
    }
    pcVar2[-1] = '\0';
    return pcVar1;
  }
  ERR_put_error(0xf,0x75,0x41,"crypto\\o_str.c",0xcc,uVar4);
  return (char *)0x0;
}



// FUNCTION 143cf2b10 FUN_143cf2b10 body=139 status=ok
// SIG undefined FUN_143cf2b10(void)

undefined8 FUN_143cf2b10(undefined1 param_1)

{
  switch(param_1) {
  case 0x30:
    return 0;
  case 0x31:
    return 1;
  case 0x32:
    return 2;
  case 0x33:
    return 3;
  case 0x34:
    return 4;
  case 0x35:
    return 5;
  case 0x36:
    return 6;
  case 0x37:
    return 7;
  case 0x38:
    return 8;
  case 0x39:
    return 9;
  default:
    return 0xffffffff;
  case 0x41:
  case 0x61:
    return 10;
  case 0x42:
  case 0x62:
    return 0xb;
  case 0x43:
  case 99:
    return 0xc;
  case 0x44:
  case 100:
    return 0xd;
  case 0x45:
  case 0x65:
    return 0xe;
  case 0x46:
  case 0x66:
    return 0xf;
  }
}



// FUNCTION 143cf2c20 OPENSSL_hexstr2buf body=382 status=ok
// SIG undefined OPENSSL_hexstr2buf(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte * OPENSSL_hexstr2buf(char *param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  byte *pbVar8;
  undefined8 uVar9;
  
  uVar9 = 0x143cf2c30;
  cVar1 = *param_1;
  pcVar7 = param_1;
  for (uVar3 = 0; (cVar1 != '\0' && (uVar3 < 0x80000000)); uVar3 = uVar3 + 1) {
    pcVar7 = pcVar7 + 1;
    cVar1 = *pcVar7;
  }
  pbVar6 = (byte *)CRYPTO_malloc(uVar3 >> 1 & 0x3fffffff,"crypto\\o_str.c",0x9c);
  if (pbVar6 == (byte *)0x0) {
    ERR_put_error(0xf,0x76,0x41,"crypto\\o_str.c",0x9d,uVar9);
    return (byte *)0x0;
  }
  cVar1 = *param_1;
  pbVar8 = pbVar6;
  do {
    if (cVar1 == '\0') {
      if (param_2 != (int *)0x0) {
        *param_2 = (int)pbVar8 - (int)pbVar6;
      }
      return pbVar6;
    }
    pcVar7 = param_1 + 1;
    if (cVar1 != ':') {
      cVar2 = *pcVar7;
      pcVar7 = param_1 + 2;
      if (cVar2 == '\0') {
        ERR_put_error(0xf,0x76,0x67,"crypto\\o_str.c",0xa7,uVar9);
        CRYPTO_free(pbVar6,"crypto\\o_str.c",0xa8);
        return (byte *)0x0;
      }
      iVar4 = FUN_143cf2b10();
      iVar5 = FUN_143cf2b10(cVar1);
      if ((iVar4 < 0) || (iVar5 < 0)) {
        CRYPTO_free(pbVar6,"crypto\\o_str.c",0xae);
        ERR_put_error(0xf,0x76,0x66,"crypto\\o_str.c",0xaf);
        return (byte *)0x0;
      }
      *pbVar8 = (char)iVar5 << 4 | (byte)iVar4;
      pbVar8 = pbVar8 + 1;
    }
    cVar1 = *pcVar7;
    param_1 = pcVar7;
  } while( true );
}



// FUNCTION 143cf2da0 OPENSSL_strlcat body=124 status=ok
// SIG undefined OPENSSL_strlcat(void)

longlong OPENSSL_strlcat(char *param_1,char *param_2,ulonglong param_3)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  uVar3 = 0;
  uVar5 = uVar4;
  for (; (uVar2 = uVar4, param_3 != 0 && (*param_1 != '\0')); param_1 = param_1 + 1) {
    uVar5 = uVar5 + 1;
    param_3 = param_3 - 1;
  }
  for (; (1 < param_3 && (*param_2 != '\0')); param_2 = param_2 + 1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
    param_3 = param_3 - 1;
    uVar2 = uVar2 + 1;
  }
  if (param_3 != 0) {
    *param_1 = '\0';
  }
  cVar1 = *param_2;
  while ((cVar1 != '\0' && (uVar3 = (uint)uVar4, uVar3 < 0x80000000))) {
    param_2 = param_2 + 1;
    uVar3 = uVar3 + 1;
    cVar1 = *param_2;
    uVar4 = (ulonglong)uVar3;
  }
  return (uVar3 & 0x7fffffff) + uVar2 + uVar5;
}



// FUNCTION 143cf2e20 OPENSSL_strlcpy body=89 status=ok
// SIG undefined OPENSSL_strlcpy(void)

longlong OPENSSL_strlcpy(char *param_1,char *param_2,ulonglong param_3)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar2 = 0;
  lVar3 = 0;
  for (; (1 < param_3 && (*param_2 != '\0')); param_2 = param_2 + 1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
    lVar3 = lVar3 + 1;
    param_3 = param_3 - 1;
  }
  if (param_3 != 0) {
    *param_1 = '\0';
  }
  cVar1 = *param_2;
  for (; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
    param_2 = param_2 + 1;
    cVar1 = *param_2;
  }
  return (ulonglong)(uVar2 & 0x7fffffff) + lVar3;
}



// FUNCTION 143cf2e80 OPENSSL_strnlen body=28 status=ok
// SIG undefined OPENSSL_strnlen(void)

longlong OPENSSL_strnlen(char *param_1,longlong param_2)

{
  char *pcVar1;
  
  for (pcVar1 = param_1; (param_2 != 0 && (param_2 = param_2 + -1, *pcVar1 != '\0'));
      pcVar1 = pcVar1 + 1) {
  }
  return (longlong)pcVar1 - (longlong)param_1;
}



// FUNCTION 143cf2ea0 openssl_strerror_r body=48 status=ok
// SIG undefined openssl_strerror_r(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool openssl_strerror_r(int param_1,char *param_2,size_t param_3)

{
  errno_t eVar1;
  
  eVar1 = strerror_s(param_2,param_3,param_1);
  return eVar1 == 0;
}



// FUNCTION 143cf2ed0 CRYPTO_secure_clear_free body=73 status=ok
// SIG undefined CRYPTO_secure_clear_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRYPTO_secure_clear_free
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  if (param_1 != 0) {
    FUN_14004ff40();
    CRYPTO_free(param_1,param_3,param_4);
  }
  return;
}



// FUNCTION 143cf2f20 CRYPTO_secure_free body=22 status=ok
// SIG undefined CRYPTO_secure_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRYPTO_secure_free(void)

{
  CRYPTO_free();
  return;
}



// FUNCTION 143cf2f40 CRYPTO_secure_malloc body=22 status=ok
// SIG undefined CRYPTO_secure_malloc(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRYPTO_secure_malloc(void)

{
  CRYPTO_malloc();
  return;
}



// FUNCTION 143cf2f60 CRYPTO_secure_zalloc body=22 status=ok
// SIG undefined CRYPTO_secure_zalloc(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRYPTO_secure_zalloc(void)

{
  CRYPTO_zalloc();
  return;
}



// FUNCTION 143cf2f80 BUF_MEM_free body=97 status=ok
// SIG undefined BUF_MEM_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BUF_MEM_free(longlong param_1)

{
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 8) != 0) {
      if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
        CRYPTO_clear_free(*(longlong *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                          "crypto\\buffer\\buffer.c",0x33);
      }
      else {
        CRYPTO_secure_clear_free();
      }
    }
    CRYPTO_free(param_1,"crypto\\buffer\\buffer.c",0x35);
  }
  return;
}



// FUNCTION 143cf2ff0 BUF_MEM_grow body=312 status=ok
// SIG undefined BUF_MEM_grow(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong BUF_MEM_grow(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143cf3000;
  uVar2 = *param_1;
  if (uVar2 < param_2) {
    if (param_1[2] < param_2) {
      if (0x5ffffffc < param_2) {
        ERR_put_error(7,100,0x41,"crypto\\buffer\\buffer.c",0x5a,0x143cf3000);
        return 0;
      }
      uVar2 = (param_2 + 3) / 3 << 2;
      if ((param_1[3] & 1) == 0) {
        uVar1 = CRYPTO_realloc(param_1[1],uVar2,"crypto\\buffer\\buffer.c",0x61);
      }
      else {
        uVar1 = sec_alloc_realloc(param_1);
      }
      if (uVar1 == 0) {
        ERR_put_error(7,100,0x41,"crypto\\buffer\\buffer.c",99,uVar3);
        return 0;
      }
      param_1[1] = uVar1;
      param_1[2] = uVar2;
      _guard_xfg_dispatch_icall_nop((void *)(uVar1 + *param_1),0,param_2 - *param_1);
      *param_1 = param_2;
      return param_2;
    }
    if (param_1[1] != 0) {
      _guard_xfg_dispatch_icall_nop((void *)(param_1[1] + uVar2),0,param_2 - uVar2);
    }
  }
  *param_1 = param_2;
  return param_2;
}



// FUNCTION 143cf3130 BUF_MEM_grow_clean body=361 status=ok
// SIG undefined BUF_MEM_grow_clean(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong BUF_MEM_grow_clean(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = *param_1;
  if (param_2 <= uVar2) {
    if (param_1[1] != 0) {
      _guard_xfg_dispatch_icall_nop((void *)(param_1[1] + param_2),0,uVar2 - param_2);
    }
    *param_1 = param_2;
    return param_2;
  }
  if (param_2 <= param_1[2]) {
    _guard_xfg_dispatch_icall_nop((void *)(param_1[1] + uVar2),0,param_2 - uVar2);
    *param_1 = param_2;
    return param_2;
  }
  if (0x5ffffffc < param_2) {
    ERR_put_error(7,0x69,0x41,"crypto\\buffer\\buffer.c",0x80);
    return 0;
  }
  uVar2 = (param_2 + 3) / 3 << 2;
  if ((param_1[3] & 1) == 0) {
    uVar1 = CRYPTO_clear_realloc
                      (param_1[1],param_1[2],uVar2,"crypto\\buffer\\buffer.c",0x87,0x143cf3140);
  }
  else {
    uVar1 = sec_alloc_realloc(param_1);
  }
  if (uVar1 == 0) {
    ERR_put_error(7,0x69,0x41,"crypto\\buffer\\buffer.c",0x89);
    return 0;
  }
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  _guard_xfg_dispatch_icall_nop((void *)(uVar1 + *param_1),0,param_2 - *param_1);
  *param_1 = param_2;
  return param_2;
}



// FUNCTION 143cf32a0 BUF_MEM_new body=74 status=ok
// SIG undefined BUF_MEM_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong BUF_MEM_new(void)

{
  longlong lVar1;
  
  lVar1 = CRYPTO_zalloc(0x20,"crypto\\buffer\\buffer.c",0x23);
  if (lVar1 == 0) {
    ERR_put_error(7,0x65,0x41,"crypto\\buffer\\buffer.c",0x25);
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 143cf32f0 BUF_MEM_new_ex body=88 status=ok
// SIG undefined BUF_MEM_new_ex(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong BUF_MEM_new_ex(undefined4 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143cf32fc;
  lVar1 = CRYPTO_zalloc(0x20,"crypto\\buffer\\buffer.c",0x23);
  if (lVar1 == 0) {
    ERR_put_error(7,0x65,0x41,"crypto\\buffer\\buffer.c",0x25,uVar2);
    return 0;
  }
  *(undefined4 *)(lVar1 + 0x18) = param_1;
  return lVar1;
}



// FUNCTION 143cf3350 BUF_reverse body=92 status=ok
// SIG undefined BUF_reverse(void)

void BUF_reverse(undefined1 *param_1,undefined1 *param_2,ulonglong param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1 + (param_3 - 1);
  if (param_2 == (undefined1 *)0x0) {
    for (param_3 = param_3 >> 1; param_3 != 0; param_3 = param_3 - 1) {
      uVar1 = *puVar2;
      *puVar2 = *param_1;
      puVar2 = puVar2 + -1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
    }
  }
  else if (param_3 != 0) {
    do {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *puVar2 = uVar1;
      puVar2 = puVar2 + -1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
    return;
  }
  return;
}



// FUNCTION 143cf33b0 sec_alloc_realloc body=121 status=ok
// SIG undefined sec_alloc_realloc(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void * sec_alloc_realloc(size_t *param_1,undefined8 param_2)

{
  void *_Dst;
  
  _Dst = (void *)CRYPTO_secure_malloc(param_2,"crypto\\buffer\\buffer.c",0x3e);
  if (((void *)param_1[1] != (void *)0x0) && (_Dst != (void *)0x0)) {
    _guard_xfg_dispatch_icall_nop(_Dst,(void *)param_1[1],*param_1);
    CRYPTO_secure_clear_free(param_1[1],*param_1,"crypto\\buffer\\buffer.c",0x42);
    param_1[1] = 0;
  }
  return _Dst;
}



// FUNCTION 143cf3430 COMP_CTX_free body=63 status=ok
// SIG undefined COMP_CTX_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void COMP_CTX_free(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    if (*(code **)(*param_1 + 0x18) != (code *)0x0) {
      (**(code **)(*param_1 + 0x18))();
    }
    CRYPTO_free(param_1,"crypto\\comp\\comp_lib.c",0x38);
  }
  return;
}



// FUNCTION 143cf3470 COMP_CTX_new body=148 status=ok
// SIG undefined COMP_CTX_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * COMP_CTX_new(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143cf3480;
  plVar2 = (longlong *)CRYPTO_zalloc(0x20,"crypto\\comp\\comp_lib.c",0x16);
  if (plVar2 == (longlong *)0x0) {
    ERR_put_error(0x29,0x67,0x41,"crypto\\comp\\comp_lib.c",0x17,uVar3);
    return (longlong *)0x0;
  }
  *plVar2 = param_1;
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x10))(plVar2);
    if (iVar1 == 0) {
      CRYPTO_free(plVar2,"crypto\\comp\\comp_lib.c",0x1c);
      plVar2 = (longlong *)0x0;
    }
  }
  return plVar2;
}



// FUNCTION 143cf3510 COMP_compress_block body=77 status=ok
// SIG undefined COMP_compress_block(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 COMP_compress_block(longlong *param_1)

{
  undefined8 uVar1;
  int in_stack_00000028;
  
  if (*(code **)(*param_1 + 0x20) == (code *)0x0) {
    return 0xffffffff;
  }
  uVar1 = (**(code **)(*param_1 + 0x20))();
  if (0 < (int)uVar1) {
    *(int *)(param_1 + 1) = (int)param_1[1] + in_stack_00000028;
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + (int)uVar1;
  }
  return uVar1;
}



// FUNCTION 143cf3560 COMP_expand_block body=77 status=ok
// SIG undefined COMP_expand_block(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 COMP_expand_block(longlong *param_1)

{
  undefined8 uVar1;
  int in_stack_00000028;
  
  if (*(code **)(*param_1 + 0x28) == (code *)0x0) {
    return 0xffffffff;
  }
  uVar1 = (**(code **)(*param_1 + 0x28))();
  if (0 < (int)uVar1) {
    *(int *)(param_1 + 2) = (int)param_1[2] + in_stack_00000028;
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + (int)uVar1;
  }
  return uVar1;
}



// FUNCTION 143cf35b0 sock_write body=121 status=ok
// SIG undefined sock_write(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int sock_write(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  Ordinal_112(0);
  iVar1 = Ordinal_19((longlong)*(int *)(param_1 + 0x30),param_2,param_3,0);
  BIO_clear_flags(param_1,0xf);
  if (iVar1 < 1) {
    iVar2 = BIO_sock_should_retry(iVar1);
    if (iVar2 != 0) {
      BIO_set_flags(param_1,10);
    }
  }
  return iVar1;
}



// FUNCTION 143cf3630 sock_read body=144 status=ok
// SIG undefined sock_read(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int sock_read(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 0) {
    Ordinal_112(0);
    iVar1 = Ordinal_16((longlong)*(int *)(param_1 + 0x30),param_2,param_3,0);
    BIO_clear_flags(param_1,0xf);
    if (iVar1 < 1) {
      iVar2 = BIO_sock_should_retry(iVar1);
      if (iVar2 != 0) {
        BIO_set_flags(param_1,9);
      }
    }
    return iVar1;
  }
  return 0;
}



// FUNCTION 143cf36c0 sock_puts body=149 status=ok
// SIG undefined sock_puts(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int sock_puts(longlong param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  
  cVar1 = *param_2;
  pcVar4 = param_2;
  for (uVar5 = 0; (cVar1 != '\0' && (uVar5 < 0x80000000)); uVar5 = uVar5 + 1) {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  Ordinal_112(0);
  iVar2 = Ordinal_19((longlong)*(int *)(param_1 + 0x30),param_2,uVar5 & 0x7fffffff,0);
  BIO_clear_flags(param_1,0xf);
  if ((iVar2 < 1) && (iVar3 = BIO_sock_should_retry(iVar2), iVar3 != 0)) {
    BIO_set_flags(param_1,10);
  }
  return iVar2;
}



// FUNCTION 143cf3760 FUN_143cf3760 body=268 status=ok
// SIG undefined FUN_143cf3760(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_143cf3760(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  switch(param_2) {
  case 8:
    return *(undefined4 *)(param_1 + 0x24);
  case 9:
    *(undefined4 *)(param_1 + 0x24) = param_3;
    return 1;
  default:
    return 0;
  case 0xb:
  case 0xc:
    return 1;
  case 0x68:
    if ((param_1 != 0) && (*(int *)(param_1 + 0x24) != 0)) {
      if (*(int *)(param_1 + 0x20) != 0) {
        BIO_closesocket(*(undefined4 *)(param_1 + 0x30));
      }
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    *(undefined4 *)(param_1 + 0x30) = *param_4;
    *(undefined4 *)(param_1 + 0x24) = param_3;
    *(undefined4 *)(param_1 + 0x20) = 1;
    return 1;
  case 0x69:
    break;
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    return 0xffffffff;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0x30);
  }
  return *(undefined4 *)(param_1 + 0x30);
}



// FUNCTION 143cf3910 sock_free body=70 status=ok
// SIG undefined sock_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 sock_free(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    if (*(int *)(param_1 + 0x20) != 0) {
      BIO_closesocket(*(undefined4 *)(param_1 + 0x30));
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return 1;
}



// FUNCTION 143cf3960 BIO_new_socket body=102 status=ok
// SIG undefined BIO_new_socket(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong BIO_new_socket(undefined4 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = BIO_new(&DAT_145d58970);
  if (lVar1 == 0) {
    return 0;
  }
  BIO_int_ctrl(lVar1,0x68,param_2,param_1);
  return lVar1;
}



// FUNCTION 143cf39d0 BIO_s_socket body=8 status=ok
// SIG undefined BIO_s_socket(void)

undefined * BIO_s_socket(void)

{
  return &DAT_145d58970;
}



// FUNCTION 143cf39e0 BIO_sock_should_retry body=100 status=ok
// SIG undefined BIO_sock_should_retry(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BIO_sock_should_retry(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 + 1U < 2) {
    iVar1 = Ordinal_111();
    if (iVar1 < 0x7f) {
      if ((iVar1 - 0x67U < 0x18) && ((0x800201U >> (iVar1 - 0x67U & 0x1f) & 1) != 0)) {
        return 1;
      }
      if (iVar1 == 4) {
        return 1;
      }
      bVar2 = iVar1 == 0xb;
    }
    else {
      if (iVar1 == 0x86) {
        return 1;
      }
      if (iVar1 == 0x8c) {
        return 1;
      }
      bVar2 = iVar1 == 0x2733;
    }
    if (bVar2) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143cf3a50 buffer_write body=420 status=ok
// SIG undefined buffer_write(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong buffer_write(longlong param_1,void *param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar9 = 0;
  iVar4 = 0;
  if ((((param_2 == (void *)0x0) || (param_3 < 1)) ||
      (lVar1 = *(longlong *)(param_1 + 0x38), lVar1 == 0)) || (*(longlong *)(param_1 + 0x40) == 0))
  {
    return 0;
  }
  BIO_clear_flags(param_1,0xf);
  iVar3 = *(int *)(lVar1 + 0x20);
  iVar5 = *(int *)(lVar1 + 0x24);
  iVar7 = (*(int *)(lVar1 + 4) - iVar3) - iVar5;
  if (iVar7 < param_3) {
    do {
      if (iVar3 != 0) {
        if (0 < iVar7) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)(iVar3 + iVar5) + *(longlong *)(lVar1 + 0x18)),param_2,
                     (longlong)iVar7);
          iVar5 = *(int *)(lVar1 + 0x24);
          param_2 = (void *)((longlong)param_2 + (longlong)iVar7);
          param_3 = param_3 - iVar7;
          uVar9 = (ulonglong)(uint)((int)uVar9 + iVar7);
          *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + iVar7;
          iVar3 = *(int *)(lVar1 + 0x20);
        }
        do {
          uVar8 = (uint)uVar9;
          uVar2 = BIO_write(*(undefined8 *)(param_1 + 0x40),
                            (longlong)iVar5 + *(longlong *)(lVar1 + 0x18),iVar3);
          uVar6 = (ulonglong)uVar2;
          if ((int)uVar2 < 1) {
            BIO_copy_next_retry(param_1);
            if ((int)uVar2 < 0) goto LAB_143cf3bcf;
            if (uVar2 == 0) {
              return uVar9;
            }
          }
          *(int *)(lVar1 + 0x24) = *(int *)(lVar1 + 0x24) + uVar2;
          iVar5 = *(int *)(lVar1 + 0x24);
          iVar3 = *(int *)(lVar1 + 0x20) - uVar2;
          *(int *)(lVar1 + 0x20) = iVar3;
        } while (iVar3 != 0);
      }
      iVar7 = *(int *)(lVar1 + 4);
      *(undefined4 *)(lVar1 + 0x24) = 0;
      if (iVar7 <= param_3) {
        do {
          uVar8 = (uint)uVar9;
          iVar4 = BIO_write(*(undefined8 *)(param_1 + 0x40),param_2,param_3);
          uVar6 = (ulonglong)iVar4;
          if (iVar4 < 1) {
            BIO_copy_next_retry(param_1);
            if (iVar4 < 0) {
LAB_143cf3bcf:
              if ((int)uVar8 < 1) {
                return uVar6 & 0xffffffff;
              }
              return (ulonglong)uVar8;
            }
            if (iVar4 == 0) {
              return uVar9;
            }
          }
          uVar9 = (ulonglong)(uVar8 + iVar4);
          param_2 = (void *)((longlong)param_2 + uVar6);
          param_3 = param_3 - iVar4;
          if (param_3 == 0) {
            return uVar9;
          }
          iVar7 = *(int *)(lVar1 + 4);
        } while (iVar7 <= param_3);
      }
      iVar4 = (int)uVar9;
      iVar3 = *(int *)(lVar1 + 0x20);
      iVar5 = *(int *)(lVar1 + 0x24);
      iVar7 = (iVar7 - iVar3) - iVar5;
    } while (iVar7 < param_3);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)((longlong)(iVar3 + iVar5) + *(longlong *)(lVar1 + 0x18)),param_2,
             (longlong)param_3);
  *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + param_3;
  return (ulonglong)(uint)(iVar4 + param_3);
}



// FUNCTION 143cf3c00 buffer_read body=315 status=ok
// SIG undefined buffer_read(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong buffer_read(longlong param_1,void *param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  
  if (((param_2 == (void *)0x0) || (piVar1 = *(int **)(param_1 + 0x38), piVar1 == (int *)0x0)) ||
     (*(longlong *)(param_1 + 0x40) == 0)) {
    return 0;
  }
  uVar6 = 0;
  BIO_clear_flags(param_1,0xf);
  uVar4 = (ulonglong)(uint)piVar1[4];
  do {
    iVar3 = (int)uVar4;
    if (iVar3 != 0) {
      iVar5 = param_3;
      if (iVar3 <= param_3) {
        iVar5 = iVar3;
      }
      _guard_xfg_dispatch_icall_nop
                (param_2,(void *)((longlong)piVar1[5] + *(longlong *)(piVar1 + 2)),(longlong)iVar5);
      piVar1[5] = piVar1[5] + iVar5;
      uVar6 = uVar6 + iVar5;
      piVar1[4] = piVar1[4] - iVar5;
      if (param_3 == iVar5) goto LAB_143cf3d2a;
      param_3 = param_3 - iVar5;
      param_2 = (void *)((longlong)param_2 + (longlong)iVar5);
    }
    if (*piVar1 < param_3) break;
    uVar2 = BIO_read(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(piVar1 + 2));
    uVar4 = (ulonglong)uVar2;
    if ((int)uVar2 < 1) {
      BIO_copy_next_retry(param_1);
      if ((int)uVar2 < 0) goto LAB_143cf3d03;
      if (uVar2 == 0) goto LAB_143cf3d2a;
    }
    piVar1[5] = 0;
    piVar1[4] = uVar2;
  } while( true );
LAB_143cf3cd1:
  iVar3 = BIO_read(*(undefined8 *)(param_1 + 0x40),param_2,param_3);
  uVar4 = (ulonglong)iVar3;
  if (iVar3 < 1) {
    BIO_copy_next_retry(param_1);
    if (iVar3 < 0) {
LAB_143cf3d03:
      uVar4 = uVar4 & 0xffffffff;
      if (0 < (int)uVar6) {
        uVar4 = (ulonglong)uVar6;
      }
      return uVar4;
    }
    if (iVar3 == 0) {
LAB_143cf3d2a:
      return (ulonglong)uVar6;
    }
  }
  uVar6 = uVar6 + iVar3;
  if (param_3 == iVar3) goto LAB_143cf3d2a;
  param_2 = (void *)((longlong)param_2 + uVar4);
  param_3 = param_3 - iVar3;
  goto LAB_143cf3cd1;
}



// FUNCTION 143cf3d40 FUN_143cf3d40 body=66 status=ok
// SIG undefined FUN_143cf3d40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143cf3d40(undefined8 param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  
  cVar1 = *param_2;
  pcVar2 = param_2;
  for (uVar3 = 0; (cVar1 != '\0' && (uVar3 < 0x80000000)); uVar3 = uVar3 + 1) {
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar2;
  }
  buffer_write(param_1,param_2,uVar3 & 0x7fffffff);
  return;
}



// FUNCTION 143cf3d90 buffer_gets body=258 status=ok
// SIG undefined buffer_gets(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int buffer_gets(longlong param_1,char *param_2,int param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  
  puVar1 = *(undefined4 **)(param_1 + 0x38);
  param_3 = param_3 + -1;
  iVar7 = 0;
  BIO_clear_flags(param_1,0xf);
  iVar5 = puVar1[4];
  do {
    while (iVar5 < 1) {
      iVar5 = BIO_read(*(undefined8 *)(param_1 + 0x40),*(longlong *)(puVar1 + 2),*puVar1);
      if (iVar5 < 1) {
        BIO_copy_next_retry(param_1);
        *param_2 = '\0';
        if (iVar5 < 0) {
          if (iVar7 < 1) {
            return iVar5;
          }
          return iVar7;
        }
        if (iVar5 == 0) {
          return iVar7;
        }
      }
      puVar1[4] = iVar5;
      puVar1[5] = 0;
    }
    pcVar6 = (char *)((longlong)(int)puVar1[5] + *(longlong *)(puVar1 + 2));
    iVar4 = 0;
    pcVar3 = pcVar6;
    do {
      bVar2 = false;
      if ((longlong)param_3 <= (longlong)pcVar3 - (longlong)pcVar6) break;
      *param_2 = *pcVar3;
      param_2 = param_2 + 1;
      iVar5 = puVar1[4];
      iVar4 = iVar4 + 1;
      if (*pcVar3 == '\n') {
        bVar2 = true;
        break;
      }
      pcVar3 = pcVar3 + 1;
      bVar2 = false;
    } while (iVar4 < iVar5);
    puVar1[5] = puVar1[5] + iVar4;
    iVar5 = iVar5 - iVar4;
    iVar7 = iVar7 + iVar4;
    puVar1[4] = iVar5;
    param_3 = param_3 - iVar4;
    if ((bVar2) || (param_3 == 0)) {
      *param_2 = '\0';
      return iVar7;
    }
  } while( true );
}



// FUNCTION 143cf3ea0 FUN_143cf3ea0 body=1142 status=ok
// SIG undefined FUN_143cf3ea0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_143cf3ea0(longlong param_1,undefined4 param_2,int param_3,int *param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *_Dst;
  longlong lVar6;
  longlong lVar7;
  char *pcVar8;
  ulonglong uVar9;
  size_t _Size;
  int iVar10;
  undefined1 *_Dst_00;
  undefined1 local_res10 [16];
  int *local_res20;
  
  piVar2 = *(int **)(param_1 + 0x38);
  _Size = (size_t)param_3;
  local_res20 = param_4;
  switch(param_2) {
  case 1:
    piVar2[4] = 0;
    piVar2[5] = 0;
    piVar2[8] = 0;
    piVar2[9] = 0;
    goto LAB_143cf3f08;
  case 2:
    if (piVar2[4] < 1) {
      lVar6 = *(longlong *)(param_1 + 0x40);
      goto LAB_143cf3f15;
    }
    goto LAB_143cf4313;
  case 3:
    iVar3 = piVar2[8];
    break;
  default:
    lVar6 = *(longlong *)(param_1 + 0x40);
    goto joined_r0x000143cf430d;
  case 10:
    iVar3 = piVar2[4];
    goto LAB_143cf3f8a;
  case 0xb:
    lVar6 = *(longlong *)(param_1 + 0x40);
    if (lVar6 != 0) {
      if (0 < piVar2[8]) {
        BIO_clear_flags(param_1,0xf);
        iVar3 = piVar2[8];
        while (0 < iVar3) {
          iVar3 = BIO_write(*(undefined8 *)(param_1 + 0x40),
                            (longlong)piVar2[9] + *(longlong *)(piVar2 + 6),iVar3);
          BIO_copy_next_retry(param_1);
          if (iVar3 < 1) {
            return iVar3;
          }
          piVar2[9] = piVar2[9] + iVar3;
          piVar2[8] = piVar2[8] - iVar3;
          BIO_clear_flags(param_1,0xf);
          iVar3 = piVar2[8];
        }
        piVar2[8] = 0;
        piVar2[9] = 0;
        lVar6 = *(longlong *)(param_1 + 0x40);
      }
      goto LAB_143cf3f15;
    }
    goto LAB_143cf4313;
  case 0xc:
    iVar3 = BIO_int_ctrl(param_4,0x75,*piVar2);
    if ((iVar3 == 0) || (iVar5 = BIO_int_ctrl(param_4,0x75,piVar2[1],1), iVar3 = 1, iVar5 == 0)) {
      iVar3 = 0;
    }
    break;
  case 0xd:
    iVar3 = piVar2[8];
LAB_143cf3f8a:
    if (iVar3 != 0) {
      return iVar3;
    }
LAB_143cf3f08:
    lVar6 = *(longlong *)(param_1 + 0x40);
joined_r0x000143cf430d:
    if (lVar6 != 0) {
LAB_143cf3f15:
      iVar3 = BIO_ctrl(lVar6,param_2,param_3,param_4);
      return iVar3;
    }
    goto LAB_143cf4313;
  case 0x1d:
    _Dst_00 = local_res10;
    iVar3 = 0;
    if ((piVar2 != (int *)0x0) && (*(longlong *)(param_1 + 0x40) != 0)) {
      BIO_clear_flags(param_1,0xf);
      iVar5 = piVar2[4];
      iVar4 = piVar2[5];
      do {
        if (iVar5 != 0) {
          iVar10 = iVar3;
          if (iVar5 <= iVar3) {
            iVar10 = iVar5;
          }
          _guard_xfg_dispatch_icall_nop
                    (_Dst_00,(void *)((longlong)iVar4 + *(longlong *)(piVar2 + 2)),(longlong)iVar10)
          ;
          piVar2[5] = piVar2[5] + iVar10;
          piVar2[4] = piVar2[4] - iVar10;
          if (iVar3 == iVar10) break;
          iVar3 = iVar3 - iVar10;
          _Dst_00 = _Dst_00 + iVar10;
        }
        if (*piVar2 < iVar3) goto LAB_143cf42b0;
        iVar5 = BIO_read(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(piVar2 + 2));
        if ((iVar5 < 1) && (BIO_copy_next_retry(param_1), iVar5 < 1)) break;
        piVar2[5] = 0;
        piVar2[4] = iVar5;
        iVar4 = 0;
      } while( true );
    }
    goto LAB_143cf42de;
  case 0x65:
    if (*(longlong *)(param_1 + 0x40) != 0) {
      BIO_clear_flags(param_1,0xf);
      iVar3 = BIO_ctrl(*(undefined8 *)(param_1 + 0x40),param_2,param_3,param_4);
      BIO_copy_next_retry(param_1);
      return iVar3;
    }
LAB_143cf4313:
    iVar3 = 0;
    break;
  case 0x74:
    uVar9 = (ulonglong)(uint)piVar2[4];
    iVar5 = 0;
    iVar3 = 0;
    if (0 < piVar2[4]) {
      pcVar8 = (char *)(*(longlong *)(piVar2 + 2) + (longlong)piVar2[5]);
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        iVar3 = iVar5 + 1;
        if (cVar1 != '\n') {
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        uVar9 = uVar9 - 1;
        iVar3 = iVar5;
      } while (uVar9 != 0);
    }
    break;
  case 0x75:
    iVar3 = param_3;
    if (param_4 != (int *)0x0) {
      if (*param_4 == 0) {
        iVar3 = piVar2[1];
      }
      else {
        param_3 = *piVar2;
      }
    }
    lVar6 = *(longlong *)(piVar2 + 2);
    lVar7 = *(longlong *)(piVar2 + 6);
    if (((param_3 < 0x1001) || (param_3 == *piVar2)) ||
       (lVar6 = CRYPTO_malloc(_Size,"crypto\\bio\\bf_buff.c",0x141), lVar6 != 0)) {
      if (((iVar3 < 0x1001) || (iVar3 == piVar2[1])) ||
         (lVar7 = CRYPTO_malloc(_Size,"crypto\\bio\\bf_buff.c",0x146), lVar7 != 0)) {
        if (*(longlong *)(piVar2 + 2) != lVar6) {
          CRYPTO_free(*(longlong *)(piVar2 + 2),"crypto\\bio\\bf_buff.c",0x14e);
          *(longlong *)(piVar2 + 2) = lVar6;
          piVar2[4] = 0;
          piVar2[5] = 0;
          *piVar2 = param_3;
        }
        if (*(longlong *)(piVar2 + 6) == lVar7) {
          return 1;
        }
        CRYPTO_free(*(longlong *)(piVar2 + 6),"crypto\\bio\\bf_buff.c",0x155);
        *(longlong *)(piVar2 + 6) = lVar7;
        piVar2[8] = 0;
        piVar2[9] = 0;
        piVar2[1] = iVar3;
        return 1;
      }
      if (lVar6 != *(longlong *)(piVar2 + 2)) {
        CRYPTO_free(lVar6,"crypto\\bio\\bf_buff.c",0x149);
      }
    }
LAB_143cf4093:
    ERR_put_error(0x20,0x72,0x41,"crypto\\bio\\bf_buff.c",0x197);
    iVar3 = 0;
    break;
  case 0x7a:
    if (*piVar2 < param_3) {
      _Dst = (void *)CRYPTO_malloc(_Size,"crypto\\bio\\bf_buff.c",0x124);
      if (_Dst == (void *)0x0) goto LAB_143cf4093;
      CRYPTO_free(*(undefined8 *)(piVar2 + 2),"crypto\\bio\\bf_buff.c",0x127);
      *(void **)(piVar2 + 2) = _Dst;
    }
    else {
      _Dst = *(void **)(piVar2 + 2);
    }
    piVar2[4] = param_3;
    piVar2[5] = 0;
    _guard_xfg_dispatch_icall_nop(_Dst,param_4,_Size);
    iVar3 = 1;
  }
  return iVar3;
LAB_143cf42b0:
  while( true ) {
    iVar5 = BIO_read(*(undefined8 *)(param_1 + 0x40),_Dst_00,iVar3);
    if (((iVar5 < 1) && (BIO_copy_next_retry(param_1), iVar5 < 1)) || (iVar3 == iVar5)) break;
    _Dst_00 = _Dst_00 + iVar5;
    iVar3 = iVar3 - iVar5;
  }
LAB_143cf42de:
  if (piVar2[4] < param_3) {
    param_3 = piVar2[4];
  }
  _guard_xfg_dispatch_icall_nop
            (local_res20,(void *)((longlong)piVar2[5] + *(longlong *)(piVar2 + 2)),(longlong)param_3
            );
  return param_3;
}



// FUNCTION 143cf43d0 buffer_new body=239 status=ok
// SIG undefined buffer_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 buffer_new(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined4 *)CRYPTO_zalloc(0x28,"crypto\\bio\\bf_buff.c",0x31);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x1000;
    lVar2 = CRYPTO_malloc(0x1000,"crypto\\bio\\bf_buff.c",0x36);
    *(longlong *)(puVar1 + 2) = lVar2;
    if (lVar2 != 0) {
      puVar1[1] = 0x1000;
      lVar2 = CRYPTO_malloc(0x1000,"crypto\\bio\\bf_buff.c",0x3c);
      *(longlong *)(puVar1 + 6) = lVar2;
      if (lVar2 == 0) {
        CRYPTO_free(*(undefined8 *)(puVar1 + 2),"crypto\\bio\\bf_buff.c",0x3e);
        CRYPTO_free(puVar1,"crypto\\bio\\bf_buff.c",0x3f);
        return 0;
      }
      *(undefined4 **)(param_1 + 0x38) = puVar1;
      *(undefined4 *)(param_1 + 0x20) = 1;
      *(undefined4 *)(param_1 + 0x28) = 0;
      return 1;
    }
    CRYPTO_free(puVar1,"crypto\\bio\\bf_buff.c",0x38);
  }
  return 0;
}



// FUNCTION 143cf44c0 buffer_free body=134 status=ok
// SIG undefined buffer_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 buffer_free(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x38);
  CRYPTO_free(*(undefined8 *)(lVar1 + 8),"crypto\\bio\\bf_buff.c",0x50);
  CRYPTO_free(*(undefined8 *)(lVar1 + 0x18),"crypto\\bio\\bf_buff.c",0x51);
  CRYPTO_free(*(undefined8 *)(param_1 + 0x38),"crypto\\bio\\bf_buff.c",0x52);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return 1;
}



// FUNCTION 143cf4550 buffer_callback_ctrl body=38 status=ok
// SIG undefined buffer_callback_ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 buffer_callback_ctrl(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x40) == 0) {
    return 0;
  }
  uVar1 = BIO_callback_ctrl();
  return uVar1;
}



// FUNCTION 143cf4580 BIO_f_buffer body=8 status=ok
// SIG undefined BIO_f_buffer(void)

undefined * BIO_f_buffer(void)

{
  return &DAT_145d589d0;
}



// FUNCTION 143cf4590 OPENSSL_LH_delete body=339 status=ok
// SIG undefined OPENSSL_LH_delete(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OPENSSL_LH_delete(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 0xd) = 0;
  plVar6 = (longlong *)getrn(param_1,param_2,local_res8);
  puVar1 = (undefined8 *)*plVar6;
  if (puVar1 == (undefined8 *)0x0) {
    *(int *)(param_1 + 0xb) = (int)param_1[0xb] + 1;
    return 0;
  }
  *plVar6 = puVar1[1];
  uVar2 = *puVar1;
  CRYPTO_free(puVar1,"crypto\\lhash\\lhash.c",0x90);
  *(int *)((longlong)param_1 + 0x54) = *(int *)((longlong)param_1 + 0x54) + 1;
  iVar5 = (int)param_1[6] + -1;
  *(int *)(param_1 + 6) = iVar5;
  if ((0x10 < *(uint *)(param_1 + 3)) &&
     ((uint)(iVar5 * 0x100) / *(uint *)(param_1 + 3) <= *(uint *)((longlong)param_1 + 0x2c))) {
    uVar8 = (ulonglong)(uint)((int)param_1[4] + *(int *)((longlong)param_1 + 0x24) + -1);
    uVar3 = *(undefined8 *)(*param_1 + uVar8 * 8);
    *(undefined8 *)(*param_1 + uVar8 * 8) = 0;
    iVar5 = (int)param_1[4];
    lVar7 = *param_1;
    if (iVar5 == 0) {
      lVar7 = CRYPTO_realloc(lVar7,*(int *)((longlong)param_1 + 0x24) << 3,"crypto\\lhash\\lhash.c",
                             0x10c);
      if (lVar7 == 0) {
        *(int *)(param_1 + 0xd) = (int)param_1[0xd] + 1;
        return uVar2;
      }
      *(int *)(param_1 + 8) = (int)param_1[8] + 1;
      *(uint *)((longlong)param_1 + 0x1c) = *(uint *)((longlong)param_1 + 0x1c) >> 1;
      *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) >> 1;
      iVar5 = *(int *)((longlong)param_1 + 0x24);
      *param_1 = lVar7;
    }
    iVar5 = iVar5 + -1;
    *(int *)(param_1 + 4) = iVar5;
    *(int *)(param_1 + 3) = (int)param_1[3] + -1;
    *(int *)((longlong)param_1 + 0x3c) = *(int *)((longlong)param_1 + 0x3c) + 1;
    lVar4 = *(longlong *)(lVar7 + (longlong)iVar5 * 8);
    if (lVar4 == 0) {
      *(undefined8 *)(lVar7 + (longlong)iVar5 * 8) = uVar3;
      return uVar2;
    }
    for (lVar7 = *(longlong *)(lVar4 + 8); lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 8)) {
      lVar4 = lVar7;
    }
    *(undefined8 *)(lVar4 + 8) = uVar3;
  }
  return uVar2;
}



// FUNCTION 143cf46f0 OPENSSL_LH_doall body=109 status=ok
// SIG undefined OPENSSL_LH_doall(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OPENSSL_LH_doall(longlong *param_1,code *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  
  if ((param_1 != (longlong *)0x0) &&
     (iVar3 = (int)param_1[3] + -1, lVar4 = (longlong)iVar3, -1 < iVar3)) {
    do {
      puVar2 = *(undefined8 **)(*param_1 + lVar4 * 8);
      while (puVar2 != (undefined8 *)0x0) {
        puVar1 = (undefined8 *)puVar2[1];
        (*param_2)(*puVar2);
        puVar2 = puVar1;
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  return;
}



// FUNCTION 143cf4760 OPENSSL_LH_doall_arg body=133 status=ok
// SIG undefined OPENSSL_LH_doall_arg(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OPENSSL_LH_doall_arg(longlong *param_1,code *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  
  if ((param_1 != (longlong *)0x0) &&
     (iVar3 = (int)param_1[3] + -1, lVar4 = (longlong)iVar3, -1 < iVar3)) {
    do {
      puVar2 = *(undefined8 **)(*param_1 + lVar4 * 8);
      while (puVar2 != (undefined8 *)0x0) {
        puVar1 = (undefined8 *)puVar2[1];
        (*param_2)(*puVar2,param_3);
        puVar2 = puVar1;
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  return;
}



// FUNCTION 143cf47f0 OPENSSL_LH_free body=159 status=ok
// SIG undefined OPENSSL_LH_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OPENSSL_LH_free(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (param_1 != (longlong *)0x0) {
    uVar4 = 0;
    if ((int)param_1[3] != 0) {
      do {
        lVar2 = *(longlong *)(*param_1 + uVar4 * 8);
        while (lVar2 != 0) {
          lVar1 = *(longlong *)(lVar2 + 8);
          CRYPTO_free(lVar2,"crypto\\lhash\\lhash.c",0x58);
          lVar2 = lVar1;
        }
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
      } while (uVar3 < *(uint *)(param_1 + 3));
    }
    CRYPTO_free(*param_1,"crypto\\lhash\\lhash.c",0x5c);
    CRYPTO_free(param_1,"crypto\\lhash\\lhash.c",0x5d);
  }
  return;
}



// FUNCTION 143cf4890 OPENSSL_LH_insert body=372 status=ok
// SIG undefined OPENSSL_LH_insert(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OPENSSL_LH_insert(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined4 local_res8 [2];
  
  *(undefined4 *)(param_1 + 0xd) = 0;
  uVar11 = *(uint *)(param_1 + 3);
  if (*(uint *)(param_1 + 5) <= (uint)((int)param_1[6] << 8) / uVar11) {
    uVar2 = *(uint *)(param_1 + 4);
    uVar3 = *(uint *)((longlong)param_1 + 0x24);
    uVar4 = *(uint *)((longlong)param_1 + 0x1c);
    uVar6 = uVar2 + 1;
    if (uVar3 <= uVar2 + 1) {
      lVar7 = CRYPTO_realloc(*param_1,(ulonglong)(uVar4 * 2) << 3,"crypto\\lhash\\lhash.c",0xe1);
      if (lVar7 == 0) goto LAB_143cf4907;
      *param_1 = lVar7;
      _guard_xfg_dispatch_icall_nop((void *)(lVar7 + (ulonglong)uVar4 * 8),0,(ulonglong)uVar4 << 3);
      *(int *)(param_1 + 7) = (int)param_1[7] + 1;
      uVar11 = *(uint *)(param_1 + 3);
      *(uint *)((longlong)param_1 + 0x24) = uVar4;
      *(uint *)((longlong)param_1 + 0x1c) = uVar4 * 2;
      uVar6 = 0;
    }
    *(uint *)(param_1 + 4) = uVar6;
    lVar7 = *param_1;
    *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
    plVar9 = (longlong *)(lVar7 + (ulonglong)uVar2 * 8);
    *(uint *)(param_1 + 3) = uVar11 + 1;
    uVar8 = (ulonglong)(uVar3 + uVar2);
    *(undefined8 *)(lVar7 + uVar8 * 8) = 0;
    plVar1 = (longlong *)(lVar7 + uVar8 * 8);
    lVar7 = *plVar9;
    while (lVar7 != 0) {
      if (*(uint *)(lVar7 + 0x10) % uVar4 == uVar2) {
        plVar9 = (longlong *)(lVar7 + 8);
      }
      else {
        *plVar9 = *(longlong *)(lVar7 + 8);
        *(longlong *)(lVar7 + 8) = *plVar1;
        *plVar1 = lVar7;
      }
      lVar7 = *plVar9;
    }
  }
  plVar9 = (longlong *)getrn(param_1,param_2,local_res8);
  puVar10 = (undefined8 *)*plVar9;
  if (puVar10 != (undefined8 *)0x0) {
    uVar5 = *puVar10;
    *puVar10 = param_2;
    *(int *)(param_1 + 10) = (int)param_1[10] + 1;
    return uVar5;
  }
  puVar10 = (undefined8 *)CRYPTO_malloc(0x18,"crypto\\lhash\\lhash.c");
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = param_2;
    puVar10[1] = 0;
    *(undefined4 *)(puVar10 + 2) = local_res8[0];
    *plVar9 = (longlong)puVar10;
    *(int *)((longlong)param_1 + 0x4c) = *(int *)((longlong)param_1 + 0x4c) + 1;
    *(int *)(param_1 + 6) = (int)param_1[6] + 1;
    return 0;
  }
LAB_143cf4907:
  *(int *)(param_1 + 0xd) = (int)param_1[0xd] + 1;
  return 0;
}



// FUNCTION 143cf4a10 OPENSSL_LH_new body=234 status=ok
// SIG undefined OPENSSL_LH_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * OPENSSL_LH_new(code *param_1,code *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)CRYPTO_zalloc(0x70,"crypto\\lhash\\lhash.c",0x33);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = CRYPTO_zalloc(0x80,"crypto\\lhash\\lhash.c");
    *plVar1 = lVar2;
    if (lVar2 != 0) {
      *(undefined4 *)(plVar1 + 3) = 8;
      *(undefined4 *)((longlong)plVar1 + 0x1c) = 0x10;
      if (param_2 == (code *)0x0) {
        param_2 = _guard_xfg_dispatch_icall_nop;
      }
      *(undefined4 *)((longlong)plVar1 + 0x24) = 8;
      plVar1[1] = (longlong)param_2;
      *(undefined4 *)(plVar1 + 5) = 0x200;
      if (param_1 == (code *)0x0) {
        param_1 = FUN_143cf4b60;
      }
      *(undefined4 *)((longlong)plVar1 + 0x2c) = 0x100;
      plVar1[2] = (longlong)param_1;
      return plVar1;
    }
    CRYPTO_free(0,"crypto\\lhash\\lhash.c",0x47);
    CRYPTO_free(plVar1,"crypto\\lhash\\lhash.c",0x48);
  }
  return (longlong *)0x0;
}



// FUNCTION 143cf4b00 FUN_143cf4b00 body=12 status=ok
// SIG undefined FUN_143cf4b00(void)

undefined4 FUN_143cf4b00(longlong param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x30);
  }
  return 0;
}



// FUNCTION 143cf4b10 OPENSSL_LH_retrieve body=73 status=ok
// SIG undefined OPENSSL_LH_retrieve(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OPENSSL_LH_retrieve(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 local_res8 [32];
  
  *(undefined4 *)(param_1 + 0x68) = 0;
  plVar2 = (longlong *)getrn(param_1,param_2,local_res8);
  if ((undefined8 *)*plVar2 == (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    return 0;
  }
  uVar1 = *(undefined8 *)*plVar2;
  LOCK();
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 143cf4b60 FUN_143cf4b60 body=93 status=ok
// SIG undefined FUN_143cf4b60(void)

uint FUN_143cf4b60(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = 0;
  if ((param_1 != (byte *)0x0) && (bVar1 = *param_1, bVar1 != 0)) {
    uVar5 = 0x100;
    do {
      param_1 = param_1 + 1;
      uVar4 = (int)(char)bVar1 | uVar5;
      uVar5 = uVar5 + 0x100;
      bVar2 = ((byte)(uVar4 >> 2) ^ bVar1) & 0xf;
      bVar1 = *param_1;
      uVar3 = (uVar3 << bVar2 | uVar3 >> 0x20 - bVar2) ^ uVar4 * uVar4;
    } while (bVar1 != 0);
    return uVar3 >> 0x10 ^ uVar3;
  }
  return 0;
}



// FUNCTION 143cf4bc0 getrn body=191 status=ok
// SIG undefined getrn(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * getrn(longlong *param_1,undefined8 param_2,uint *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar4 = (*(code *)param_1[2])(param_2);
  LOCK();
  *(int *)((longlong)param_1 + 0x44) = *(int *)((longlong)param_1 + 0x44) + 1;
  UNLOCK();
  *param_3 = uVar4;
  uVar6 = uVar4 % *(uint *)((longlong)param_1 + 0x24);
  if (uVar6 < *(uint *)(param_1 + 4)) {
    uVar6 = uVar4 % *(uint *)((longlong)param_1 + 0x1c);
  }
  pcVar2 = (code *)param_1[1];
  puVar3 = *(undefined8 **)(*param_1 + (longlong)(int)uVar6 * 8);
  puVar1 = (undefined8 *)(*param_1 + (longlong)(int)uVar6 * 8);
  do {
    if (puVar3 == (undefined8 *)0x0) {
      return puVar1;
    }
    LOCK();
    *(int *)((longlong)param_1 + 100) = *(int *)((longlong)param_1 + 100) + 1;
    UNLOCK();
    if (*(uint *)(puVar3 + 2) == uVar4) {
      LOCK();
      *(int *)(param_1 + 9) = (int)param_1[9] + 1;
      UNLOCK();
      iVar5 = (*pcVar2)(*puVar3,param_2);
      if (iVar5 == 0) {
        return puVar1;
      }
    }
    puVar1 = puVar3 + 1;
    puVar3 = (undefined8 *)puVar3[1];
  } while( true );
}



// FUNCTION 143cf4c80 openssl_lh_strcasehash body=128 status=ok
// SIG undefined openssl_lh_strcasehash(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint openssl_lh_strcasehash(char *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = 0;
  if ((param_1 != (char *)0x0) && (cVar1 = *param_1, cVar1 != '\0')) {
    uVar6 = 0x100;
    do {
      uVar2 = ossl_tolower((int)cVar1);
      uVar3 = uVar2 | uVar6;
      param_1 = param_1 + 1;
      uVar6 = uVar6 + 0x100;
      bVar4 = ((byte)(uVar3 >> 2) ^ (byte)uVar2) & 0xf;
      uVar5 = (uVar5 << bVar4 | uVar5 >> 0x20 - bVar4) ^ uVar3 * uVar3;
      cVar1 = *param_1;
    } while (cVar1 != '\0');
    return uVar5 >> 0x10 ^ uVar5;
  }
  return 0;
}



// FUNCTION 143cf4d00 OBJ_bsearch_ body=180 status=ok
// SIG undefined OBJ_bsearch_(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong OBJ_bsearch_(undefined8 param_1,longlong param_2,int param_3,int param_4,code *param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  lVar3 = 0;
  if ((param_3 != 0) && (iVar4 = 0, 0 < param_3)) {
    do {
      iVar1 = (param_3 + iVar4) / 2;
      lVar3 = iVar1 * param_4 + param_2;
      iVar2 = (*param_5)(param_1,lVar3);
      if (-1 < iVar2) {
        if (iVar2 < 1) break;
        iVar4 = iVar1 + 1;
        iVar1 = param_3;
      }
      param_3 = iVar1;
    } while (iVar4 < param_3);
    if (iVar2 != 0) {
      lVar3 = 0;
    }
  }
  return lVar3;
}



// FUNCTION 143cf4dc0 OBJ_bsearch_ex_ body=242 status=ok
// SIG undefined OBJ_bsearch_ex_(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong OBJ_bsearch_ex_(undefined8 param_1,longlong param_2,int param_3,int param_4,code *param_5,
                        byte param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar1 = 0;
  lVar5 = 0;
  if (param_3 == 0) {
    return 0;
  }
  iVar4 = 0;
  if (0 < param_3) {
    do {
      iVar1 = (param_3 + iVar4) / 2;
      lVar5 = iVar1 * param_4 + param_2;
      iVar2 = (*param_5)(param_1,lVar5);
      iVar3 = iVar1;
      if (-1 < iVar2) {
        if (iVar2 < 1) break;
        iVar4 = iVar1 + 1;
        iVar3 = param_3;
      }
      param_3 = iVar3;
    } while (iVar4 < param_3);
    if (iVar2 != 0) {
      if ((param_6 & 1) != 0) {
        return lVar5;
      }
      return 0;
    }
  }
  if ((param_6 & 2) != 0) {
    if (0 < iVar1) {
      iVar4 = (iVar1 + -1) * param_4;
      do {
        iVar3 = (*param_5)(param_1,iVar4 + param_2);
        if (iVar3 != 0) break;
        iVar1 = iVar1 + -1;
        iVar4 = iVar4 - param_4;
      } while (0 < iVar1);
    }
    lVar5 = iVar1 * param_4 + param_2;
  }
  return lVar5;
}



// FUNCTION 143cf4ec0 OBJ_create body=670 status=ok
// SIG undefined OBJ_create(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong OBJ_create(undefined8 param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  longlong local_58 [6];
  
  local_58[4] = DAT_1468387a8 ^ (ulonglong)auStack_88;
  uVar8 = 0;
  if (((param_2 != 0) && (iVar3 = OBJ_sn2nid(param_2), iVar3 != 0)) ||
     ((param_3 != 0 && (iVar3 = OBJ_ln2nid(param_3), iVar3 != 0)))) {
    local_68 = 0x2ba;
    ERR_put_error(8,100,0x66,"crypto\\objects\\obj_dat.c");
    return 0;
  }
  plVar4 = (longlong *)OBJ_txt2obj(param_1,1);
  if (plVar4 == (longlong *)0x0) {
    return 0;
  }
  iVar3 = OBJ_obj2nid(plVar4);
  if (iVar3 != 0) {
    local_68 = 0x2c5;
    ERR_put_error(8,100,0x66,"crypto\\objects\\obj_dat.c");
    goto LAB_143cf5139;
  }
  bVar10 = DAT_146bcb3d8 != 0;
  *(int *)(plVar4 + 2) = DAT_146836a28;
  *plVar4 = param_2;
  plVar4[1] = param_3;
  DAT_146836a28 = DAT_146836a28 + 1;
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  if ((bVar10) || (DAT_146bcb3d8 = OPENSSL_LH_new(added_obj_hash,added_obj_cmp), DAT_146bcb3d8 != 0)
     ) {
    plVar5 = (longlong *)OBJ_dup(plVar4);
    if (plVar5 != (longlong *)0x0) {
      local_58[3] = CRYPTO_malloc(0x10,"crypto\\objects\\obj_dat.c",0xb9);
      if (local_58[3] != 0) {
        if ((*(int *)((longlong)plVar5 + 0x14) != 0) && (plVar4[3] != 0)) {
          local_58[0] = CRYPTO_malloc(0x10,"crypto\\objects\\obj_dat.c",0xbc);
          if (local_58[0] == 0) goto LAB_143cf50da;
        }
        if (*plVar5 != 0) {
          local_58[1] = CRYPTO_malloc(0x10,"crypto\\objects\\obj_dat.c",0xbf);
          if (local_58[1] == 0) goto LAB_143cf50da;
        }
        if (plVar5[1] != 0) {
          local_58[2] = CRYPTO_malloc(0x10,"crypto\\objects\\obj_dat.c",0xc2);
          if (local_58[2] == 0) goto LAB_143cf50da;
        }
        plVar9 = local_58;
        do {
          lVar2 = DAT_146bcb3d8;
          piVar1 = (int *)*plVar9;
          if (piVar1 != (int *)0x0) {
            *piVar1 = (int)uVar8;
            *(longlong **)(piVar1 + 2) = plVar5;
            uVar6 = OPENSSL_LH_insert(lVar2);
            CRYPTO_free(uVar6,"crypto\\objects\\obj_dat.c",0xcb);
          }
          uVar7 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
          plVar9 = plVar9 + 1;
        } while ((int)uVar7 < 4);
        *(uint *)(plVar5 + 4) = *(uint *)(plVar5 + 4) & 0xfffffff2;
        uVar8 = (ulonglong)*(uint *)(plVar5 + 2);
        goto LAB_143cf512a;
      }
LAB_143cf50da:
      local_68 = 0xd4;
      ERR_put_error(8,0x69,0x41,"crypto\\objects\\obj_dat.c");
    }
    do {
      CRYPTO_free(local_58[uVar8],"crypto\\objects\\obj_dat.c",0xd7);
      uVar8 = uVar8 + 1;
    } while ((longlong)uVar8 < 4);
    ASN1_OBJECT_free(plVar5);
    uVar8 = 0;
  }
LAB_143cf512a:
  *plVar4 = 0;
  plVar4[1] = 0;
LAB_143cf5139:
  ASN1_OBJECT_free(plVar4);
  return uVar8;
}



// FUNCTION 143cf5160 OBJ_get0_data body=13 status=ok
// SIG undefined OBJ_get0_data(void)

undefined8 OBJ_get0_data(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined8 *)(param_1 + 0x18);
}



// FUNCTION 143cf5170 OBJ_length body=13 status=ok
// SIG undefined OBJ_length(void)

longlong OBJ_length(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return (longlong)*(int *)(param_1 + 0x14);
}



// FUNCTION 143cf5180 OBJ_ln2nid body=290 status=ok
// SIG undefined OBJ_ln2nid(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 OBJ_ln2nid(byte *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  byte *pbVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  undefined4 local_48 [2];
  undefined1 *local_40;
  undefined1 local_38 [8];
  byte *local_30;
  undefined8 uStack_10;
  
  uStack_10 = 0x143cf518c;
  if (DAT_146bcb3d8 != 0) {
    local_40 = local_38;
    local_48[0] = 2;
    local_30 = param_1;
    lVar6 = OPENSSL_LH_retrieve(DAT_146bcb3d8,local_48);
    param_1 = local_30;
    if (lVar6 != 0) {
      return *(undefined4 *)(*(longlong *)(lVar6 + 8) + 0x10);
    }
  }
  iVar9 = 0;
  iVar10 = 0x4a2;
  do {
    iVar3 = (iVar10 + iVar9) / 2;
    uVar8 = (ulonglong)*(uint *)(&DAT_145d67620 + iVar3 * 4);
    pbVar7 = param_1;
    do {
      bVar1 = *pbVar7;
      if (bVar1 != pbVar7[(longlong)(&PTR_s_undefined_145d5a8d8)[uVar8 * 5] - (longlong)param_1]) {
        uVar4 = -(uint)(bVar1 < pbVar7[(longlong)(&PTR_s_undefined_145d5a8d8)[uVar8 * 5] -
                                       (longlong)param_1]) | 1;
        goto LAB_143cf5259;
      }
      pbVar7 = pbVar7 + 1;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_143cf5259:
    iVar2 = iVar3;
    if (-1 < (int)uVar4) {
      if ((int)uVar4 < 1) break;
      iVar9 = iVar3 + 1;
      iVar2 = iVar10;
    }
    iVar10 = iVar2;
  } while (iVar9 < iVar10);
  if ((uVar4 == 0) && ((uint *)(&DAT_145d67620 + iVar3 * 4) != (uint *)0x0)) {
    uVar5 = *(undefined4 *)(&DAT_145d5a8e0 + uVar8 * 0x28);
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 143cf52b0 OBJ_nid2ln body=178 status=ok
// SIG undefined OBJ_nid2ln(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined * OBJ_nid2ln(uint param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 local_48 [2];
  undefined1 *local_40;
  undefined1 local_38 [16];
  uint local_28;
  undefined8 uStack_8;
  
  uStack_8 = 0x143cf52ba;
  if (0x4aa < param_1) {
    if (DAT_146bcb3d8 == 0) {
      return (undefined *)0x0;
    }
    local_40 = local_38;
    local_48[0] = 3;
    local_28 = param_1;
    lVar1 = OPENSSL_LH_retrieve(DAT_146bcb3d8,local_48);
    if (lVar1 != 0) {
      return *(undefined **)(*(longlong *)(lVar1 + 8) + 8);
    }
    uVar2 = 0x127;
LAB_143cf5342:
    ERR_put_error(8,0x66,0x65,"crypto\\objects\\obj_dat.c",uVar2);
    return (undefined *)0x0;
  }
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (longlong)(int)param_1;
    if (*(int *)(&DAT_145d5a8e0 + lVar1 * 0x28) == 0) {
      uVar2 = 0x119;
      goto LAB_143cf5342;
    }
  }
  return (&PTR_s_undefined_145d5a8d8)[lVar1 * 5];
}



// FUNCTION 143cf5370 OBJ_nid2obj body=173 status=ok
// SIG undefined OBJ_nid2obj(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined ** OBJ_nid2obj(uint param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 local_48 [2];
  undefined1 *local_40;
  undefined1 local_38 [16];
  uint local_28;
  undefined8 uStack_8;
  
  uStack_8 = 0x143cf537a;
  if (0x4aa < param_1) {
    if (DAT_146bcb3d8 == 0) {
      return (undefined **)0x0;
    }
    local_40 = local_38;
    local_48[0] = 3;
    local_28 = param_1;
    lVar1 = OPENSSL_LH_retrieve(DAT_146bcb3d8,local_48);
    if (lVar1 != 0) {
      return *(undefined ***)(lVar1 + 8);
    }
    uVar2 = 0xf1;
LAB_143cf53fd:
    ERR_put_error(8,0x67,0x65,"crypto\\objects\\obj_dat.c",uVar2);
    return (undefined **)0x0;
  }
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (longlong)(int)param_1;
    if (*(int *)(&DAT_145d5a8e0 + lVar1 * 0x28) == 0) {
      uVar2 = 0xe3;
      goto LAB_143cf53fd;
    }
  }
  return &PTR_s_UNDEF_145d5a8d0 + lVar1 * 5;
}



// FUNCTION 143cf5420 OBJ_nid2sn body=176 status=ok
// SIG undefined OBJ_nid2sn(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined * OBJ_nid2sn(uint param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 local_48 [2];
  undefined1 *local_40;
  undefined1 local_38 [16];
  uint local_28;
  undefined8 uStack_8;
  
  uStack_8 = 0x143cf542a;
  if (0x4aa < param_1) {
    if (DAT_146bcb3d8 == 0) {
      return (undefined *)0x0;
    }
    local_40 = local_38;
    local_48[0] = 3;
    local_28 = param_1;
    lVar1 = OPENSSL_LH_retrieve(DAT_146bcb3d8,local_48);
    if (lVar1 != 0) {
      return (undefined *)**(undefined8 **)(lVar1 + 8);
    }
    uVar2 = 0x10c;
LAB_143cf54b0:
    ERR_put_error(8,0x68,0x65,"crypto\\objects\\obj_dat.c",uVar2);
    return (undefined *)0x0;
  }
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (longlong)(int)param_1;
    if (*(int *)(&DAT_145d5a8e0 + lVar1 * 0x28) == 0) {
      uVar2 = 0xfe;
      goto LAB_143cf54b0;
    }
  }
  return (&PTR_s_UNDEF_145d5a8d0)[lVar1 * 5];
}



// FUNCTION 143cf54d0 OBJ_obj2nid body=287 status=ok
// SIG undefined OBJ_obj2nid(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int OBJ_obj2nid(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  undefined4 local_38 [2];
  longlong local_30;
  
  local_30 = 0x143cf54f2;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      return *(int *)(param_1 + 0x10);
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      iVar6 = 0;
      if (DAT_146bcb3d8 != 0) {
        local_38[0] = 0;
        local_30 = param_1;
        lVar5 = OPENSSL_LH_retrieve(DAT_146bcb3d8,local_38);
        if (lVar5 != 0) {
          return *(int *)(*(longlong *)(lVar5 + 8) + 0x10);
        }
      }
      iVar1 = *(int *)(param_1 + 0x14);
      iVar7 = 0x42f;
      do {
        iVar3 = (iVar7 + iVar6) / 2;
        uVar8 = (ulonglong)*(uint *)(&DAT_145d688b0 + iVar3 * 4);
        iVar4 = iVar1 - *(int *)(&DAT_145d5a8e4 + uVar8 * 0x28);
        if (iVar4 == 0) {
          if (iVar1 == 0) goto LAB_143cf55c0;
          iVar4 = _guard_xfg_dispatch_icall_nop
                            (*(void **)(param_1 + 0x18),*(void **)(&DAT_145d5a8e8 + uVar8 * 0x28),
                             (longlong)iVar1);
        }
        iVar2 = iVar3;
        if (-1 < iVar4) {
          if (iVar4 < 1) break;
          iVar6 = iVar3 + 1;
          iVar2 = iVar7;
        }
        iVar7 = iVar2;
      } while (iVar6 < iVar7);
      if (iVar4 == 0) {
LAB_143cf55c0:
        if ((uint *)(&DAT_145d688b0 + iVar3 * 4) != (uint *)0x0) {
          return *(int *)(&DAT_145d5a8e0 + uVar8 * 0x28);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143cf55f0 OBJ_obj2txt body=1157 status=ok
// SIG undefined OBJ_obj2txt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong OBJ_obj2txt(char *param_1,int param_2,longlong param_3,int param_4)

{
  ulonglong uVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  byte *pbVar15;
  ulonglong uVar16;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  uint local_e8;
  int local_e4;
  int local_e0;
  undefined4 local_d8 [2];
  undefined1 *local_d0;
  undefined4 local_c8 [2];
  undefined1 *local_c0;
  undefined1 local_b8 [16];
  uint local_a8;
  undefined1 local_90 [16];
  uint local_80;
  char local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  uVar16 = (ulonglong)param_2;
  local_e8 = 0;
  if ((param_1 != (char *)0x0) && (0 < param_2)) {
    *param_1 = '\0';
  }
  if ((param_3 == 0) || (*(longlong *)(param_3 + 0x18) == 0)) {
    return 0;
  }
  if (param_4 == 0) {
    uVar4 = OBJ_obj2nid();
    lVar12 = (longlong)(int)uVar4;
    if (uVar4 != 0) {
      if (uVar4 < 0x4ab) {
        if (*(int *)(&DAT_145d5a8e0 + lVar12 * 0x28) == 0) {
          local_f8 = 0x119;
LAB_143cf56fa:
          ERR_put_error(8,0x66,0x65,"crypto\\objects\\obj_dat.c");
          goto LAB_143cf571a;
        }
        puVar8 = (&PTR_s_undefined_145d5a8d8)[lVar12 * 5];
LAB_143cf56e7:
        if (puVar8 == (undefined *)0x0) goto LAB_143cf571a;
LAB_143cf5785:
        if (param_1 != (char *)0x0) {
          OPENSSL_strlcpy(param_1,puVar8,uVar16);
        }
        uVar13 = 0xffffffffffffffff;
        do {
          uVar13 = uVar13 + 1;
        } while (puVar8[uVar13] != '\0');
        goto LAB_143cf5a3a;
      }
      if (DAT_146bcb3d8 != 0) {
        local_d0 = local_b8;
        local_d8[0] = 3;
        local_a8 = uVar4;
        lVar6 = OPENSSL_LH_retrieve(DAT_146bcb3d8,local_d8);
        if (lVar6 == 0) {
          local_f8 = 0x127;
          goto LAB_143cf56fa;
        }
        puVar8 = *(undefined **)(*(longlong *)(lVar6 + 8) + 8);
        goto LAB_143cf56e7;
      }
LAB_143cf571a:
      if (uVar4 < 0x4ab) {
        if (*(int *)(&DAT_145d5a8e0 + lVar12 * 0x28) != 0) {
          ppuVar9 = &PTR_s_UNDEF_145d5a8d0 + lVar12 * 5;
LAB_143cf577d:
          puVar8 = *ppuVar9;
          if (puVar8 == (undefined *)0x0) goto LAB_143cf57d3;
          goto LAB_143cf5785;
        }
        local_f8 = 0xfe;
      }
      else {
        if (DAT_146bcb3d8 == 0) goto LAB_143cf57d3;
        local_c0 = local_90;
        local_c8[0] = 3;
        local_80 = uVar4;
        lVar12 = OPENSSL_LH_retrieve(DAT_146bcb3d8,local_c8);
        if (lVar12 != 0) {
          ppuVar9 = *(undefined ***)(lVar12 + 8);
          goto LAB_143cf577d;
        }
        local_f8 = 0x10c;
      }
      ERR_put_error();
    }
  }
LAB_143cf57d3:
  lVar12 = 0;
  pbVar15 = *(byte **)(param_3 + 0x18);
  local_e0 = 1;
  uVar13 = 0;
  if (0 < *(int *)(param_3 + 0x14)) {
    uVar1 = 0xffffffffffffffff;
    uVar14 = 0xffffffffffffffff;
    local_e4 = *(int *)(param_3 + 0x14);
    do {
      uVar11 = 0;
      bVar3 = false;
      while( true ) {
        bVar2 = *pbVar15;
        pbVar15 = pbVar15 + 1;
        local_e4 = local_e4 + -1;
        uVar13 = uVar1;
        if ((local_e4 == 0) && ((char)bVar2 < '\0')) goto LAB_143cf5a27;
        if (bVar3) {
          iVar5 = BN_add_word(lVar12,bVar2 & 0x7f);
          if (iVar5 == 0) goto LAB_143cf5a27;
        }
        else {
          uVar11 = (ulonglong)((uint)uVar11 | bVar2 & 0x7f);
        }
        uVar4 = (uint)uVar11;
        uVar13 = uVar14;
        if (-1 < (char)bVar2) break;
        if (bVar3) {
LAB_143cf588a:
          iVar5 = BN_lshift(lVar12,lVar12,7);
          if (iVar5 == 0) goto LAB_143cf5a27;
        }
        else {
          if (0x1ffffff < uVar4) {
            if (((lVar12 != 0) || (lVar12 = BN_new(), lVar12 != 0)) &&
               (iVar5 = BN_set_word(lVar12,uVar11), iVar5 != 0)) {
              bVar3 = true;
              goto LAB_143cf588a;
            }
            goto LAB_143cf5a27;
          }
          uVar11 = (ulonglong)(uVar4 << 7);
        }
      }
      if (local_e0 != 0) {
        local_e0 = 0;
        if (uVar4 < 0x50) {
          uVar10 = uVar11 / 0x28;
          uVar11 = (ulonglong)(uVar4 + (int)uVar10 * -0x28);
        }
        else {
          uVar10 = 2;
          if (bVar3) {
            iVar5 = BN_sub_word(lVar12,0x50);
            if (iVar5 == 0) goto LAB_143cf5a27;
          }
          else {
            uVar11 = (ulonglong)(uVar4 - 0x50);
          }
        }
        if ((param_1 != (char *)0x0) && (1 < (int)uVar16)) {
          *param_1 = (char)uVar10 + '0';
          param_1 = param_1 + 1;
          uVar16 = (ulonglong)((int)uVar16 - 1);
          *param_1 = '\0';
        }
        local_e8 = local_e8 + 1;
      }
      iVar5 = (int)uVar16;
      if (bVar3) {
        lVar6 = BN_bn2dec(lVar12);
        uVar11 = uVar1;
        if (lVar6 == 0) goto LAB_143cf5a27;
        do {
          uVar11 = uVar11 + 1;
        } while (*(char *)(lVar6 + uVar11) != '\0');
        iVar7 = (int)uVar11;
        if (param_1 != (char *)0x0) {
          if (1 < iVar5) {
            *param_1 = '.';
            param_1 = param_1 + 1;
            iVar5 = iVar5 + -1;
            *param_1 = '\0';
          }
          OPENSSL_strlcpy(param_1,lVar6,(longlong)iVar5);
          if (iVar5 < iVar7) {
            param_1 = param_1 + iVar5;
            uVar16 = 0;
          }
          else {
            param_1 = param_1 + iVar7;
            uVar16 = (ulonglong)(uint)(iVar5 - iVar7);
          }
        }
        local_e8 = local_e8 + 1 + iVar7;
        CRYPTO_free(lVar6,"crypto\\objects\\obj_dat.c",0x1f7);
      }
      else {
        BIO_snprintf(local_68,0x1a,&DAT_145d71b4c,uVar11);
        uVar13 = uVar1;
        do {
          uVar11 = uVar13 + 1;
          lVar6 = uVar13 + 1;
          uVar13 = uVar11;
        } while (local_68[lVar6] != '\0');
        iVar7 = (int)uVar11;
        if ((param_1 != (char *)0x0) && (0 < iVar5)) {
          OPENSSL_strlcpy(param_1,local_68,(longlong)iVar5);
          if (iVar5 < iVar7) {
            param_1 = param_1 + iVar5;
            uVar16 = 0;
          }
          else {
            param_1 = param_1 + iVar7;
            uVar16 = (ulonglong)(uint)(iVar5 - iVar7);
          }
        }
        local_e8 = local_e8 + iVar7;
      }
    } while (0 < local_e4);
    uVar13 = (ulonglong)local_e8;
  }
LAB_143cf5a27:
  BN_free(lVar12);
LAB_143cf5a3a:
  return uVar13 & 0xffffffff;
}



// FUNCTION 143cf5a80 OBJ_sn2nid body=291 status=ok
// SIG undefined OBJ_sn2nid(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 OBJ_sn2nid(byte *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  byte *pbVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  undefined4 local_48 [2];
  byte **local_40;
  byte *local_38 [5];
  undefined8 uStack_10;
  
  uStack_10 = 0x143cf5a8c;
  if (DAT_146bcb3d8 != 0) {
    local_40 = local_38;
    local_48[0] = 1;
    local_38[0] = param_1;
    lVar6 = OPENSSL_LH_retrieve(DAT_146bcb3d8,local_48);
    param_1 = local_38[0];
    if (lVar6 != 0) {
      return *(undefined4 *)(*(longlong *)(lVar6 + 8) + 0x10);
    }
  }
  iVar9 = 0;
  iVar10 = 0x4a2;
  do {
    iVar3 = (iVar10 + iVar9) / 2;
    uVar8 = (ulonglong)*(uint *)(&DAT_145d66390 + iVar3 * 4);
    pbVar7 = param_1;
    do {
      bVar1 = *pbVar7;
      if (bVar1 != pbVar7[(longlong)(&PTR_s_UNDEF_145d5a8d0)[uVar8 * 5] - (longlong)param_1]) {
        uVar4 = -(uint)(bVar1 < pbVar7[(longlong)(&PTR_s_UNDEF_145d5a8d0)[uVar8 * 5] -
                                       (longlong)param_1]) | 1;
        goto LAB_143cf5b59;
      }
      pbVar7 = pbVar7 + 1;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_143cf5b59:
    iVar2 = iVar3;
    if (-1 < (int)uVar4) {
      if ((int)uVar4 < 1) break;
      iVar9 = iVar3 + 1;
      iVar2 = iVar10;
    }
    iVar10 = iVar2;
  } while (iVar9 < iVar10);
  if ((uVar4 == 0) && ((uint *)(&DAT_145d66390 + iVar3 * 4) != (uint *)0x0)) {
    uVar5 = *(undefined4 *)(&DAT_145d5a8e0 + uVar8 * 0x28);
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 143cf5bb0 OBJ_txt2obj body=525 status=ok
// SIG undefined OBJ_txt2obj(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined ** OBJ_txt2obj(undefined8 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined **ppuVar4;
  longlong lVar5;
  longlong local_res18;
  longlong local_res20;
  undefined4 uVar6;
  undefined4 local_58 [2];
  undefined1 *local_50;
  undefined1 local_48 [16];
  uint local_38;
  
  if ((param_2 != 0) ||
     ((uVar1 = OBJ_sn2nid(), uVar1 == 0 && (uVar1 = OBJ_ln2nid(param_1), uVar1 == 0)))) {
    iVar2 = a2d_ASN1_OBJECT(0,0,param_1,0xffffffff);
    if (0 < iVar2) {
      iVar3 = ASN1_object_size(0,iVar2,6);
      if (-1 < iVar3) {
        lVar5 = CRYPTO_malloc((longlong)iVar3,"crypto\\objects\\obj_dat.c",0x17b);
        if (lVar5 == 0) {
          ERR_put_error(8,0x6c,0x41,"crypto\\objects\\obj_dat.c",0x17c);
          ppuVar4 = (undefined **)0x0;
        }
        else {
          local_res18 = lVar5;
          ASN1_put_object(&local_res18,0,iVar2,6,0);
          a2d_ASN1_OBJECT(local_res18,iVar2,param_1,0xffffffff);
          local_res20 = lVar5;
          ppuVar4 = (undefined **)d2i_ASN1_OBJECT(0,&local_res20,iVar3);
          CRYPTO_free(lVar5,"crypto\\objects\\obj_dat.c",0x188);
        }
        return ppuVar4;
      }
    }
    return (undefined **)0x0;
  }
  if (uVar1 < 0x4ab) {
    if (uVar1 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = (longlong)(int)uVar1;
      if (*(int *)(&DAT_145d5a8e0 + lVar5 * 0x28) == 0) {
        uVar6 = 0xe3;
        goto LAB_143cf5c6c;
      }
    }
    return &PTR_s_UNDEF_145d5a8d0 + lVar5 * 5;
  }
  if (DAT_146bcb3d8 == 0) {
    return (undefined **)0x0;
  }
  local_50 = local_48;
  local_58[0] = 3;
  local_38 = uVar1;
  lVar5 = OPENSSL_LH_retrieve(DAT_146bcb3d8,local_58);
  if (lVar5 != 0) {
    return *(undefined ***)(lVar5 + 8);
  }
  uVar6 = 0xf1;
LAB_143cf5c6c:
  ERR_put_error(8,0x67,0x65,"crypto\\objects\\obj_dat.c",uVar6);
  return (undefined **)0x0;
}



// FUNCTION 143cf5dc0 added_obj_cmp body=226 status=ok
// SIG undefined added_obj_cmp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint added_obj_cmp(int *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  uint uVar5;
  byte *pbVar6;
  longlong lVar7;
  bool bVar8;
  
  iVar2 = *param_1;
  uVar5 = iVar2 - *param_2;
  if (uVar5 == 0) {
    puVar3 = *(undefined8 **)(param_1 + 2);
    plVar4 = *(longlong **)(param_2 + 2);
    if (iVar2 != 0) {
      if (iVar2 == 1) {
        pbVar6 = (byte *)*puVar3;
        if (pbVar6 == (byte *)0x0) {
          return 0xffffffff;
        }
        if (*plVar4 == 0) {
          return 1;
        }
        lVar7 = *plVar4 - (longlong)pbVar6;
        while( true ) {
          bVar1 = *pbVar6;
          bVar8 = bVar1 < pbVar6[lVar7];
          if (bVar1 != pbVar6[lVar7]) break;
          pbVar6 = pbVar6 + 1;
          if (bVar1 == 0) {
            return 0;
          }
        }
LAB_143cf5e76:
        return -(uint)bVar8 | 1;
      }
      if (iVar2 == 2) {
        pbVar6 = (byte *)puVar3[1];
        if (pbVar6 == (byte *)0x0) {
          return 0xffffffff;
        }
        if (plVar4[1] == 0) {
          return 1;
        }
        lVar7 = plVar4[1] - (longlong)pbVar6;
        do {
          bVar1 = *pbVar6;
          bVar8 = bVar1 < pbVar6[lVar7];
          if (bVar1 != pbVar6[lVar7]) goto LAB_143cf5e76;
          pbVar6 = pbVar6 + 1;
        } while (bVar1 != 0);
      }
      else if (iVar2 == 3) {
        return *(int *)(puVar3 + 2) - (int)plVar4[2];
      }
      return 0;
    }
    uVar5 = *(int *)((longlong)puVar3 + 0x14) - *(int *)((longlong)plVar4 + 0x14);
    if (uVar5 == 0) {
      uVar5 = _guard_xfg_dispatch_icall_nop
                        ((void *)puVar3[3],(void *)plVar4[3],
                         (longlong)*(int *)((longlong)puVar3 + 0x14));
      return uVar5;
    }
  }
  return uVar5;
}



// FUNCTION 143cf5eb0 added_obj_hash body=186 status=ok
// SIG undefined added_obj_hash(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint added_obj_hash(int *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  ulonglong uVar6;
  
  puVar2 = *(undefined8 **)(param_1 + 2);
  iVar4 = *param_1;
  if (iVar4 == 0) {
    uVar1 = *(uint *)((longlong)puVar2 + 0x14);
    uVar3 = uVar1 << 0x14;
    if (0 < (int)uVar1) {
      uVar6 = (ulonglong)uVar1;
      pbVar5 = (byte *)puVar2[3];
      iVar4 = 0;
      do {
        uVar3 = uVar3 ^ (uint)*pbVar5 << ((char)iVar4 + (char)(iVar4 / 0x18) * -0x18 & 0x1fU);
        uVar6 = uVar6 - 1;
        pbVar5 = pbVar5 + 1;
        iVar4 = iVar4 + 3;
      } while (uVar6 != 0);
    }
  }
  else if (iVar4 == 1) {
    uVar3 = FUN_143cf4b60(*puVar2);
  }
  else if (iVar4 == 2) {
    uVar3 = FUN_143cf4b60(puVar2[1]);
  }
  else {
    if (iVar4 != 3) {
      return 0;
    }
    uVar3 = *(uint *)(puVar2 + 2);
  }
  return *param_1 << 0x1e | uVar3 & 0x3fffffff;
}



// FUNCTION 143cf5fa0 cleanup3_doall body=63 status=ok
// SIG undefined cleanup3_doall(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void cleanup3_doall(longlong param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x10);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    ASN1_OBJECT_free(*(undefined8 *)(param_1 + 8));
  }
  CRYPTO_free(param_1,"crypto\\objects\\obj_dat.c",0x96);
  return;
}



// FUNCTION 143cf5fe0 obj_cleanup_int body=117 status=ok
// SIG undefined obj_cleanup_int(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void obj_cleanup_int(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (DAT_146bcb3d8 != 0) {
    BIO_set_retry_reason(DAT_146bcb3d8,0,param_3,param_4,0x143cf5fea);
    OPENSSL_LH_doall(DAT_146bcb3d8,&LAB_143cf5f70);
    OPENSSL_LH_doall(DAT_146bcb3d8,&LAB_143cf5f90);
    OPENSSL_LH_doall(DAT_146bcb3d8,cleanup3_doall);
    OPENSSL_LH_free(DAT_146bcb3d8);
    DAT_146bcb3d8 = 0;
  }
  return;
}



// FUNCTION 143cf6060 EVP_CIPHER_CTX_block_size body=7 status=ok
// SIG undefined EVP_CIPHER_CTX_block_size(void)

undefined4 EVP_CIPHER_CTX_block_size(longlong *param_1)

{
  return *(undefined4 *)(*param_1 + 4);
}



// FUNCTION 143cf6070 EVP_CIPHER_CTX_set_flags body=4 status=ok
// SIG undefined EVP_CIPHER_CTX_set_flags(void)

void EVP_CIPHER_CTX_set_flags(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | param_2;
  return;
}



// FUNCTION 143cf6080 EVP_CIPHER_CTX_test_flags body=6 status=ok
// SIG undefined EVP_CIPHER_CTX_test_flags(void)

uint EVP_CIPHER_CTX_test_flags(longlong param_1,uint param_2)

{
  return *(uint *)(param_1 + 0x6c) & param_2;
}



// FUNCTION 143cf6090 EVP_CIPHER_asn1_to_param body=297 status=ok
// SIG undefined EVP_CIPHER_asn1_to_param(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint EVP_CIPHER_asn1_to_param(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143cf60ae;
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0x40) == (code *)0x0) {
    if ((*(uint *)(lVar2 + 0x10) >> 0xc & 1) == 0) {
LAB_143cf6168:
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = *(uint *)(lVar2 + 0x10) & 0xf0007;
      if (uVar3 < 6) {
LAB_143cf6104:
        uVar3 = 0;
        if (param_2 != 0) {
          uVar1 = *(uint *)(lVar2 + 0xc);
          if (0x10 < uVar1) {
            OPENSSL_die("assertion failed: l <= sizeof(c->iv)","crypto\\evp\\evp_lib.c",0x5e);
          }
          uVar3 = ASN1_TYPE_get_octetstring(param_2,param_1 + 3,uVar1);
          if (uVar3 != uVar1) goto LAB_143cf6168;
          if (0 < (int)uVar3) {
            _guard_xfg_dispatch_icall_nop(param_1 + 5,param_1 + 3,(ulonglong)uVar1);
          }
        }
        goto LAB_143cf6154;
      }
      if ((7 < uVar3) && (uVar3 != 0x10001)) {
        if (uVar3 == 0x10002) {
          return 1;
        }
        if (uVar3 != 0x10003) goto LAB_143cf6104;
      }
      uVar3 = 0xfffffffe;
    }
  }
  else {
    uVar3 = (**(code **)(lVar2 + 0x40))();
LAB_143cf6154:
    if (0 < (int)uVar3) goto LAB_143cf6197;
  }
  uVar4 = 0x7a;
  if (uVar3 == 0xfffffffe) {
    uVar4 = 0x6b;
  }
  ERR_put_error(6,0xcc,uVar4,"crypto\\evp\\evp_lib.c",0x51,uVar5);
LAB_143cf6197:
  if ((int)uVar3 < -1) {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



// FUNCTION 143cf61c0 EVP_CIPHER_get_asn1_iv body=159 status=ok
// SIG undefined EVP_CIPHER_get_asn1_iv(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint EVP_CIPHER_get_asn1_iv(longlong *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = *(uint *)(*param_1 + 0xc);
    if (0x10 < uVar1) {
      OPENSSL_die("assertion failed: l <= sizeof(c->iv)","crypto\\evp\\evp_lib.c",0x5e);
    }
    uVar2 = ASN1_TYPE_get_octetstring(param_2,param_1 + 3,uVar1);
    if (uVar2 == uVar1) {
      if (0 < (int)uVar2) {
        _guard_xfg_dispatch_icall_nop(param_1 + 5,param_1 + 3,(ulonglong)uVar1);
      }
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



// FUNCTION 143cf6260 EVP_CIPHER_param_to_asn1 body=284 status=ok
// SIG undefined EVP_CIPHER_param_to_asn1(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int EVP_CIPHER_param_to_asn1(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143cf627a;
  piVar1 = (int *)*param_1;
  if (*(code **)(piVar1 + 0xe) == (code *)0x0) {
    if (((uint)piVar1[4] >> 0xc & 1) == 0) {
      iVar2 = -1;
    }
    else {
      uVar3 = piVar1[4] & 0xf0007;
      if (uVar3 < 6) {
LAB_143cf62ca:
        iVar2 = 0;
        if (param_2 != 0) {
          uVar3 = piVar1[3];
          if (0x10 < uVar3) {
            OPENSSL_die("assertion failed: j <= sizeof(c->iv)","crypto\\evp\\evp_lib.c",0x6f);
          }
          iVar2 = ASN1_TYPE_set_octetstring(param_2,param_1 + 3,uVar3);
        }
        goto LAB_143cf6304;
      }
      if ((7 < uVar3) && (uVar3 != 0x10001)) {
        if (uVar3 == 0x10002) {
          if (*piVar1 == 0xf6) {
            ASN1_TYPE_set(param_2,5);
          }
          return 1;
        }
        if (uVar3 != 0x10003) goto LAB_143cf62ca;
      }
      iVar2 = -2;
    }
  }
  else {
    iVar2 = (**(code **)(piVar1 + 0xe))();
LAB_143cf6304:
    if (0 < iVar2) goto LAB_143cf6360;
  }
  uVar4 = 0x7a;
  if (iVar2 == -2) {
    uVar4 = 0xe4;
  }
  ERR_put_error(6,0xcd,uVar4,"crypto\\evp\\evp_lib.c",0x2e,uVar5);
LAB_143cf6360:
  if (iVar2 < -1) {
    iVar2 = -1;
  }
  return iVar2;
}



// FUNCTION 143cf6380 EVP_CIPHER_set_asn1_iv body=114 status=ok
// SIG undefined EVP_CIPHER_set_asn1_iv(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_CIPHER_set_asn1_iv(longlong *param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    uVar1 = *(uint *)(*param_1 + 0xc);
    if (0x10 < uVar1) {
      OPENSSL_die("assertion failed: j <= sizeof(c->iv)","crypto\\evp\\evp_lib.c",0x6f);
    }
    uVar2 = ASN1_TYPE_set_octetstring(param_2,param_1 + 3,uVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 143cf6400 FUN_143cf6400 body=236 status=ok
// SIG undefined FUN_143cf6400(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_143cf6400(int *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if (iVar3 < 0x1a6) {
    if (iVar3 == 0x1a5) {
switchD_143cf648a_caseD_28a:
      return 0x1a5;
    }
    switch(iVar3) {
    case 5:
    case 0x61:
      return 5;
    case 0x1e:
    case 0x3d:
      goto switchD_143cf6446_caseD_1e;
    case 0x25:
    case 0x62:
    case 0xa6:
      return 0x25;
    }
  }
  else {
    switch(iVar3) {
    case 0x1a9:
    case 0x28b:
    case 0x28e:
      return 0x1a9;
    case 0x1ad:
    case 0x28c:
    case 0x28f:
      return 0x1ad;
    case 0x28a:
    case 0x28d:
      goto switchD_143cf648a_caseD_28a;
    case 0x290:
    case 0x291:
    case 0x292:
    case 0x293:
switchD_143cf6446_caseD_1e:
      return 0x1e;
    }
  }
  uVar1 = OBJ_nid2obj(iVar3);
  lVar2 = OBJ_get0_data(uVar1);
  if (lVar2 == 0) {
    iVar3 = 0;
  }
  ASN1_OBJECT_free(uVar1);
  return iVar3;
}



// FUNCTION 143cf66a0 EVP_Cipher body=27 status=ok
// SIG undefined EVP_Cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_Cipher(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143cf66b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}



// FUNCTION 143cf66c0 EVP_MD_CTX_clear_flags body=6 status=ok
// SIG undefined EVP_MD_CTX_clear_flags(void)

void EVP_MD_CTX_clear_flags(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & ~param_2;
  return;
}



// FUNCTION 143cf66d0 EVP_MD_CTX_md body=12 status=ok
// SIG undefined EVP_MD_CTX_md(void)

undefined8 EVP_MD_CTX_md(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  return *param_1;
}



// FUNCTION 143cf66e0 EVP_MD_CTX_set_flags body=4 status=ok
// SIG undefined EVP_MD_CTX_set_flags(void)

void EVP_MD_CTX_set_flags(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | param_2;
  return;
}



// FUNCTION 143cf66f0 EVP_MD_CTX_test_flags body=6 status=ok
// SIG undefined EVP_MD_CTX_test_flags(void)

uint EVP_MD_CTX_test_flags(longlong param_1,uint param_2)

{
  return *(uint *)(param_1 + 0x10) & param_2;
}



// FUNCTION 143cf6700 EVP_MD_meth_free body=35 status=ok
// SIG undefined EVP_MD_meth_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_MD_meth_free(undefined8 param_1)

{
  CRYPTO_free(param_1,"crypto\\evp\\evp_lib.c",0x15b);
  return;
}



// FUNCTION 143cf6730 EVP_MD_meth_new body=65 status=ok
// SIG undefined EVP_MD_meth_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_MD_meth_new(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)CRYPTO_zalloc(0x48,"crypto\\evp\\evp_lib.c",0x149);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
  }
  return;
}



// FUNCTION 143cf6780 EVP_MD_meth_set_app_datasize body=9 status=ok
// SIG undefined EVP_MD_meth_set_app_datasize(void)

undefined8 EVP_MD_meth_set_app_datasize(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  return 1;
}



// FUNCTION 143cf6790 EVP_MD_meth_set_final body=10 status=ok
// SIG undefined EVP_MD_meth_set_final(void)

undefined8 EVP_MD_meth_set_final(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return 1;
}



// FUNCTION 143cf67a0 EVP_MD_meth_set_flags body=9 status=ok
// SIG undefined EVP_MD_meth_set_flags(void)

undefined8 EVP_MD_meth_set_flags(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return 1;
}



// FUNCTION 143cf67b0 EVP_MD_meth_set_input_blocksize body=9 status=ok
// SIG undefined EVP_MD_meth_set_input_blocksize(void)

undefined8 EVP_MD_meth_set_input_blocksize(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x38) = param_2;
  return 1;
}



// FUNCTION 143cf67c0 EVP_MD_meth_set_result_size body=9 status=ok
// SIG undefined EVP_MD_meth_set_result_size(void)

undefined8 EVP_MD_meth_set_result_size(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return 1;
}



// FUNCTION 143cf67d0 EVP_MD_meth_set_update body=10 status=ok
// SIG undefined EVP_MD_meth_set_update(void)

undefined8 EVP_MD_meth_set_update(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return 1;
}



// FUNCTION 143cf67e0 EVP_MD_size body=66 status=ok
// SIG undefined EVP_MD_size(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 EVP_MD_size(longlong param_1)

{
  if (param_1 == 0) {
    ERR_put_error(6,0xa2,0x9f,"crypto\\evp\\evp_lib.c",0x13c);
    return 0xffffffff;
  }
  return *(undefined4 *)(param_1 + 8);
}



// FUNCTION 143cf6830 EVP_Digest body=201 status=ok
// SIG undefined EVP_Digest(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
EVP_Digest(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  lVar2 = CRYPTO_zalloc(0x30,"crypto\\evp\\digest.c",0x33);
  if (lVar2 != 0) {
    uVar3 = 1;
    EVP_MD_CTX_set_flags(lVar2,1);
    iVar1 = EVP_DigestInit_ex(lVar2,param_5,param_6);
    if (((iVar1 == 0) || (iVar1 = (**(code **)(lVar2 + 0x28))(lVar2,param_1,param_2), iVar1 == 0))
       || (iVar1 = EVP_DigestFinal_ex(lVar2,param_3,param_4), iVar1 == 0)) {
      uVar3 = 0;
    }
    EVP_MD_CTX_reset(lVar2);
    CRYPTO_free(lVar2,"crypto\\evp\\digest.c",0x39);
    return uVar3;
  }
  return 0;
}



// FUNCTION 143cf6900 EVP_DigestFinal body=50 status=ok
// SIG undefined EVP_DigestFinal(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 EVP_DigestFinal(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = EVP_DigestFinal_ex();
  EVP_MD_CTX_reset(param_1);
  return uVar1;
}



// FUNCTION 143cf6940 EVP_DigestFinalXOF body=177 status=ok
// SIG undefined EVP_DigestFinalXOF(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 EVP_DigestFinalXOF(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143cf6950;
  if (((*(byte *)(*param_1 + 0xc) & 2) != 0) && (param_3 < 0x80000000)) {
    iVar1 = (**(code **)(*param_1 + 0x40))(param_1,3);
    if (iVar1 != 0) {
      uVar2 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
      lVar3 = *param_1;
      if (*(code **)(lVar3 + 0x30) != (code *)0x0) {
        (**(code **)(lVar3 + 0x30))(param_1);
        EVP_MD_CTX_set_flags(param_1,2);
        lVar3 = *param_1;
      }
      FUN_14004ff40(param_1[3],(longlong)*(int *)(lVar3 + 0x3c));
      return uVar2;
    }
  }
  ERR_put_error(6,0xae,0xb2,"crypto\\evp\\digest.c",0xc5,uVar4);
  return 0;
}



// FUNCTION 143cf6a00 EVP_DigestFinal_ex body=158 status=ok
// SIG undefined EVP_DigestFinal_ex(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 EVP_DigestFinal_ex(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  if (0x40 < *(int *)(lVar2 + 8)) {
    OPENSSL_die("assertion failed: ctx->digest->md_size <= EVP_MAX_MD_SIZE","crypto\\evp\\digest.c",
                0xaa);
    lVar2 = *param_1;
  }
  uVar1 = (**(code **)(lVar2 + 0x20))(param_1,param_2);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(*param_1 + 8);
  }
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0x30) != (code *)0x0) {
    (**(code **)(lVar2 + 0x30))(param_1);
    EVP_MD_CTX_set_flags(param_1,2);
    lVar2 = *param_1;
  }
  FUN_14004ff40(param_1[3],(longlong)*(int *)(lVar2 + 0x3c));
  return uVar1;
}



// FUNCTION 143cf6aa0 EVP_DigestInit body=54 status=ok
// SIG undefined EVP_DigestInit(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_DigestInit(undefined8 param_1,undefined8 param_2)

{
  EVP_MD_CTX_reset();
  EVP_DigestInit_ex(param_1,param_2,0);
  return;
}



// FUNCTION 143cf6ae0 EVP_DigestInit_ex body=591 status=ok
// SIG undefined EVP_DigestInit_ex(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_DigestInit_ex(longlong *param_1,int *param_2,longlong param_3)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143cf6af5;
  EVP_MD_CTX_clear_flags(param_1,2);
  if (((param_1[1] == 0) || ((int *)*param_1 == (int *)0x0)) ||
     ((param_2 != (int *)0x0 && (*param_2 != *(int *)*param_1)))) {
    if (param_2 == (int *)0x0) {
      piVar2 = (int *)*param_1;
      param_2 = piVar2;
      if (piVar2 == (int *)0x0) {
        ERR_put_error(6,0x80,0x8b,"crypto\\evp\\digest.c",0x73,uVar4);
        return 0;
      }
    }
    else {
      ENGINE_finish();
      if (param_3 == 0) {
        param_3 = ENGINE_get_digest_engine(*param_2);
      }
      else {
        iVar1 = ENGINE_init(param_3);
        if (iVar1 == 0) {
          ERR_put_error(6,0x80,0x86,"crypto\\evp\\digest.c",0x58,uVar4);
          return 0;
        }
      }
      if ((param_3 != 0) &&
         (param_2 = (int *)ENGINE_get_digest(param_3,*param_2), param_2 == (int *)0x0)) {
        ERR_put_error(6,0x80,0x86,"crypto\\evp\\digest.c",100);
        ENGINE_finish(param_3);
        return 0;
      }
      param_1[1] = param_3;
      piVar2 = (int *)*param_1;
    }
    if (piVar2 != param_2) {
      if ((piVar2 != (int *)0x0) && (piVar2[0xf] != 0)) {
        CRYPTO_clear_free(param_1[3],(longlong)piVar2[0xf],"crypto\\evp\\digest.c",0x7b);
        param_1[3] = 0;
      }
      *param_1 = (longlong)param_2;
      if (((*(uint *)(param_1 + 2) & 0x100) == 0) && (param_2[0xf] != 0)) {
        param_1[5] = *(longlong *)(param_2 + 6);
        lVar3 = CRYPTO_zalloc((longlong)param_2[0xf],"crypto\\evp\\digest.c",0x81);
        param_1[3] = lVar3;
        if (lVar3 == 0) {
          ERR_put_error(6,0x80,0x41,"crypto\\evp\\digest.c",0x83,uVar4);
          return 0;
        }
      }
    }
  }
  if (((param_1[4] != 0) &&
      (iVar1 = EVP_PKEY_CTX_ctrl(param_1[4],0xffffffff,0xf8,7,0,param_1), iVar1 < 1)) &&
     (iVar1 != -2)) {
    return 0;
  }
  if ((*(uint *)(param_1 + 2) & 0x100) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000143cf6d2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*param_1 + 0x10))(param_1);
  return uVar4;
}



// FUNCTION 143cf6d30 EVP_DigestUpdate body=21 status=ok
// SIG undefined EVP_DigestUpdate(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_DigestUpdate(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143cf6d41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))();
  return;
}



// FUNCTION 143cf6d50 EVP_MD_CTX_copy body=51 status=ok
// SIG undefined EVP_MD_CTX_copy(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_MD_CTX_copy(undefined8 param_1,undefined8 param_2)

{
  EVP_MD_CTX_reset();
  EVP_MD_CTX_copy_ex(param_1,param_2);
  return;
}



// FUNCTION 143cf6d90 EVP_MD_CTX_copy_ex body=483 status=ok
// SIG undefined EVP_MD_CTX_copy_ex(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_MD_CTX_copy_ex(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  void *_Dst;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143cf6da0;
  if ((param_2 == (longlong *)0x0) || (*param_2 == 0)) {
    ERR_put_error(6,0x6e,0x6f,"crypto\\evp\\digest.c",0xd5,0x143cf6da0);
    return 0;
  }
  if (param_2[1] != 0) {
    iVar3 = ENGINE_init();
    if (iVar3 == 0) {
      ERR_put_error(6,0x6e,0x26,"crypto\\evp\\digest.c",0xdb,uVar5);
      return 0;
    }
  }
  if (*param_1 == *param_2) {
    _Dst = (void *)param_1[3];
    EVP_MD_CTX_set_flags(param_1,4);
  }
  else {
    _Dst = (void *)0x0;
  }
  EVP_MD_CTX_reset(param_1);
  lVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = lVar4;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
  lVar4 = param_2[3];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(int *)(param_1 + 2) = (int)param_2[2];
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  *(int *)(param_1 + 3) = (int)lVar4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x24);
  lVar4 = param_2[5];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(int *)(param_1 + 4) = (int)param_2[4];
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  *(int *)(param_1 + 5) = (int)lVar4;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar2;
  EVP_MD_CTX_clear_flags(param_1,0x400);
  param_1[3] = 0;
  param_1[4] = 0;
  if (param_2[3] != 0) {
    lVar4 = *param_1;
    if (*(int *)(lVar4 + 0x3c) != 0) {
      if (_Dst == (void *)0x0) {
        _Dst = (void *)CRYPTO_malloc((longlong)*(int *)(lVar4 + 0x3c),"crypto\\evp\\digest.c",0xf6);
        param_1[3] = (longlong)_Dst;
        if (_Dst == (void *)0x0) {
          ERR_put_error(6,0x6e,0x41,"crypto\\evp\\digest.c",0xf8);
          return 0;
        }
        lVar4 = *param_1;
      }
      else {
        param_1[3] = (longlong)_Dst;
      }
      _guard_xfg_dispatch_icall_nop(_Dst,(void *)param_2[3],(longlong)*(int *)(lVar4 + 0x3c));
    }
  }
  param_1[5] = param_2[5];
  if (param_2[4] != 0) {
    lVar4 = EVP_PKEY_CTX_dup();
    param_1[4] = lVar4;
    if (lVar4 == 0) {
      EVP_MD_CTX_reset(param_1);
      return 0;
    }
  }
  if (*(code **)(*param_1 + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143cf6f2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(*param_1 + 0x28))(param_1,param_2);
    return uVar5;
  }
  return 1;
}



// FUNCTION 143cf6f80 EVP_MD_CTX_ctrl body=53 status=ok
// SIG undefined EVP_MD_CTX_ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_MD_CTX_ctrl(longlong *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((*param_1 != 0) && (pcVar1 = *(code **)(*param_1 + 0x40), pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    if (0 < iVar2) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143cf6fc0 EVP_MD_CTX_free body=49 status=ok
// SIG undefined EVP_MD_CTX_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_MD_CTX_free(undefined8 param_1)

{
  EVP_MD_CTX_reset();
  CRYPTO_free(param_1,"crypto\\evp\\digest.c",0x39);
  return;
}



// FUNCTION 143cf7000 EVP_MD_CTX_new body=36 status=ok
// SIG undefined EVP_MD_CTX_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_MD_CTX_new(void)

{
  CRYPTO_zalloc(0x30,"crypto\\evp\\digest.c",0x33);
  return;
}



// FUNCTION 143cf7030 EVP_MD_CTX_reset body=191 status=ok
// SIG undefined EVP_MD_CTX_reset(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_MD_CTX_reset(longlong *param_1)

{
  int iVar1;
  
  if (param_1 != (longlong *)0x0) {
    if (*param_1 != 0) {
      if (*(longlong *)(*param_1 + 0x30) != 0) {
        iVar1 = EVP_MD_CTX_test_flags(param_1,2);
        if (iVar1 == 0) {
          (**(code **)(*param_1 + 0x30))(param_1);
        }
      }
      if (((*param_1 != 0) && (*(int *)(*param_1 + 0x3c) != 0)) && (param_1[3] != 0)) {
        iVar1 = EVP_MD_CTX_test_flags(param_1,4);
        if (iVar1 == 0) {
          CRYPTO_clear_free(param_1[3],(longlong)*(int *)(*param_1 + 0x3c),"crypto\\evp\\digest.c",
                            0x21);
        }
      }
    }
    iVar1 = EVP_MD_CTX_test_flags(param_1,0x400);
    if (iVar1 == 0) {
      EVP_PKEY_CTX_free(param_1[4]);
    }
    ENGINE_finish(param_1[1]);
    FUN_14004ff40(param_1,0x30);
  }
  return 1;
}



// FUNCTION 143cf70f0 EVP_CIPHER_CTX_copy body=378 status=ok
// SIG undefined EVP_CIPHER_CTX_copy(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_CIPHER_CTX_copy(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143cf7100;
  if ((param_2 != (longlong *)0x0) && (*param_2 != 0)) {
    if (param_2[1] != 0) {
      iVar2 = ENGINE_init();
      if (iVar2 == 0) {
        uVar4 = 0x26b;
        uVar3 = 0x26;
        goto LAB_143cf7247;
      }
    }
    EVP_CIPHER_CTX_reset(param_1);
    lVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar1;
    lVar1 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar1;
    lVar1 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = lVar1;
    lVar1 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = lVar1;
    lVar1 = param_2[9];
    param_1[8] = param_2[8];
    param_1[9] = lVar1;
    lVar1 = param_2[0xb];
    param_1[10] = param_2[10];
    param_1[0xb] = lVar1;
    lVar1 = param_2[0xd];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = lVar1;
    lVar1 = param_2[0xf];
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = lVar1;
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x84);
    lVar1 = param_2[0x11];
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x8c);
    *(int *)(param_1 + 0x10) = (int)param_2[0x10];
    *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
    *(int *)(param_1 + 0x11) = (int)lVar1;
    *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x94);
    lVar1 = param_2[0x13];
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x9c);
    *(int *)(param_1 + 0x12) = (int)param_2[0x12];
    *(undefined4 *)((longlong)param_1 + 0x94) = uVar3;
    *(int *)(param_1 + 0x13) = (int)lVar1;
    *(undefined4 *)((longlong)param_1 + 0x9c) = uVar4;
    if ((param_2[0xe] != 0) && (*(int *)(*param_2 + 0x30) != 0)) {
      _Dst = (void *)CRYPTO_malloc((longlong)*(int *)(*param_2 + 0x30),"crypto\\evp\\evp_enc.c",
                                   0x274);
      param_1[0xe] = (longlong)_Dst;
      if (_Dst == (void *)0x0) {
        *param_1 = 0;
        uVar3 = 0x41;
        uVar4 = 0x277;
        goto LAB_143cf7247;
      }
      _guard_xfg_dispatch_icall_nop(_Dst,(void *)param_2[0xe],(longlong)*(int *)(*param_2 + 0x30));
    }
    if ((*(uint *)(*param_2 + 0x10) & 0x400) != 0) {
      iVar2 = (**(code **)(*param_2 + 0x48))(param_2,8,0,param_1);
      if (iVar2 == 0) {
        *param_1 = 0;
        uVar3 = 0x86;
        uVar4 = 0x280;
        goto LAB_143cf7247;
      }
    }
    return 1;
  }
  uVar4 = 0x265;
  uVar3 = 0x6f;
LAB_143cf7247:
  ERR_put_error(6,0xa3,uVar3,"crypto\\evp\\evp_enc.c",uVar4,uVar5);
  return 0;
}



// FUNCTION 143cf7270 EVP_CIPHER_CTX_ctrl body=110 status=ok
// SIG undefined EVP_CIPHER_CTX_ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_CIPHER_CTX_ctrl(longlong *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  if (*param_1 == 0) {
    uVar3 = 0x247;
    uVar2 = 0x83;
  }
  else {
    pcVar1 = *(code **)(*param_1 + 0x48);
    if (pcVar1 == (code *)0x0) {
      uVar3 = 0x24c;
      uVar2 = 0x84;
    }
    else {
      uVar2 = (*pcVar1)();
      if ((int)uVar2 != -1) {
        return uVar2;
      }
      uVar3 = 0x253;
      uVar2 = 0x85;
    }
  }
  ERR_put_error(6,0x7c,uVar2,"crypto\\evp\\evp_enc.c",uVar3);
  return 0;
}



// FUNCTION 143cf72e0 EVP_CIPHER_CTX_free body=49 status=ok
// SIG undefined EVP_CIPHER_CTX_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_CIPHER_CTX_free(undefined8 param_1)

{
  EVP_CIPHER_CTX_reset();
  CRYPTO_free(param_1,"crypto\\evp\\evp_enc.c",0x30);
  return;
}



// FUNCTION 143cf7320 EVP_CIPHER_CTX_new body=36 status=ok
// SIG undefined EVP_CIPHER_CTX_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_CIPHER_CTX_new(void)

{
  CRYPTO_zalloc(0xa0,"crypto\\evp\\evp_enc.c",0x2a);
  return;
}



// FUNCTION 143cf7350 EVP_CIPHER_CTX_rand_key body=162 status=ok
// SIG undefined EVP_CIPHER_CTX_rand_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint EVP_CIPHER_CTX_rand_key(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  lVar1 = *param_1;
  if ((*(uint *)(lVar1 + 0x10) & 0x200) == 0) {
    iVar3 = RAND_priv_bytes(param_2,(int)param_1[0xd]);
    return (uint)(0 < iVar3);
  }
  if (lVar1 == 0) {
    uVar5 = 0x247;
    uVar4 = 0x83;
  }
  else if (*(code **)(lVar1 + 0x48) == (code *)0x0) {
    uVar5 = 0x24c;
    uVar4 = 0x84;
  }
  else {
    uVar2 = (**(code **)(lVar1 + 0x48))(param_1,6,0,param_2);
    if (uVar2 != 0xffffffff) {
      return uVar2;
    }
    uVar5 = 0x253;
    uVar4 = 0x85;
  }
  ERR_put_error(6,0x7c,uVar4,"crypto\\evp\\evp_enc.c",uVar5);
  return 0;
}



// FUNCTION 143cf7400 EVP_CIPHER_CTX_reset body=135 status=ok
// SIG undefined EVP_CIPHER_CTX_reset(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_CIPHER_CTX_reset(longlong *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (param_1 != (longlong *)0x0) {
    if (*param_1 != 0) {
      pcVar1 = *(code **)(*param_1 + 0x28);
      if (pcVar1 != (code *)0x0) {
        uVar2 = (*pcVar1)();
        if ((int)uVar2 == 0) {
          return uVar2;
        }
      }
      if ((param_1[0xe] != 0) && (*(int *)(*param_1 + 0x30) != 0)) {
        FUN_14004ff40();
      }
    }
    CRYPTO_free(param_1[0xe],"crypto\\evp\\evp_enc.c",0x20);
    ENGINE_finish(param_1[1]);
    _guard_xfg_dispatch_icall_nop(param_1,0,0xa0);
  }
  return 1;
}



// FUNCTION 143cf7490 EVP_CIPHER_CTX_set_key_length body=184 status=ok
// SIG undefined EVP_CIPHER_CTX_set_key_length(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_CIPHER_CTX_set_key_length(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  lVar1 = *param_1;
  if ((char)*(uint *)(lVar1 + 0x10) < '\0') {
    if (lVar1 == 0) {
      uVar4 = 0x247;
      uVar2 = 0x7c;
      uVar3 = 0x83;
    }
    else if (*(code **)(lVar1 + 0x48) == (code *)0x0) {
      uVar4 = 0x24c;
      uVar2 = 0x7c;
      uVar3 = 0x84;
    }
    else {
      uVar3 = (**(code **)(lVar1 + 0x48))(param_1,1,param_2);
      if ((int)uVar3 != -1) {
        return uVar3;
      }
      uVar4 = 0x253;
      uVar2 = 0x7c;
      uVar3 = 0x85;
    }
  }
  else {
    if ((int)param_1[0xd] == param_2) {
      return 1;
    }
    if ((0 < param_2) && ((*(uint *)(lVar1 + 0x10) & 8) != 0)) {
      *(int *)(param_1 + 0xd) = param_2;
      return 1;
    }
    uVar2 = 0x7a;
    uVar4 = 0x235;
    uVar3 = 0x82;
  }
  ERR_put_error(6,uVar2,uVar3,"crypto\\evp\\evp_enc.c",uVar4);
  return 0;
}



// FUNCTION 143cf7550 EVP_CIPHER_CTX_set_padding body=32 status=ok
// SIG undefined EVP_CIPHER_CTX_set_padding(void)

undefined8 EVP_CIPHER_CTX_set_padding(longlong param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x6c) & 0xfffffeff;
  if (param_2 == 0) {
    uVar1 = *(uint *)(param_1 + 0x6c) | 0x100;
  }
  *(uint *)(param_1 + 0x6c) = uVar1;
  return 1;
}



// FUNCTION 143cf7570 EVP_CipherFinal_ex body=37 status=ok
// SIG undefined EVP_CipherFinal_ex(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_CipherFinal_ex(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    EVP_EncryptFinal_ex();
    return;
  }
  EVP_DecryptFinal_ex();
  return;
}



// FUNCTION 143cf75a0 FUN_143cf75a0 body=798 status=ok
// SIG undefined FUN_143cf75a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_143cf75a0(longlong *param_1,int *param_2,longlong param_3,longlong param_4,longlong *param_5,
             int param_6)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int *piVar6;
  longlong *_Src;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  uVar10 = 0x143cf75bf;
  if (param_6 == -1) {
    uVar8 = *(uint *)(param_1 + 2);
  }
  else {
    uVar8 = (uint)(param_6 != 0);
    *(uint *)(param_1 + 2) = uVar8;
  }
  lVar3 = 0;
  if (((param_1[1] == 0) || (piVar6 = (int *)*param_1, piVar6 == (int *)0x0)) ||
     ((param_2 != (int *)0x0 && (*param_2 != *piVar6)))) {
    piVar6 = (int *)*param_1;
    if (param_2 != (int *)0x0) {
      if (piVar6 != (int *)0x0) {
        uVar7 = *(undefined4 *)((longlong)param_1 + 0x6c);
        EVP_CIPHER_CTX_reset(param_1);
        *(uint *)(param_1 + 2) = uVar8;
        *(undefined4 *)((longlong)param_1 + 0x6c) = uVar7;
      }
      if (param_3 == 0) {
        param_3 = FUN_143d3af50(*param_2);
LAB_143cf767d:
        if ((param_3 == 0) ||
           (param_2 = (int *)ENGINE_get_cipher(param_3,*param_2), lVar3 = param_3,
           param_2 != (int *)0x0)) {
          param_1[1] = lVar3;
          *param_1 = (longlong)param_2;
          if (param_2[0xc] == 0) {
            param_1[0xe] = 0;
            piVar6 = param_2;
          }
          else {
            lVar3 = CRYPTO_zalloc((longlong)param_2[0xc],"crypto\\evp\\evp_enc.c",0x80);
            param_1[0xe] = lVar3;
            if (lVar3 == 0) {
              *param_1 = 0;
              uVar7 = 0x41;
              uVar9 = 0x83;
              goto LAB_143cf7658;
            }
            piVar6 = (int *)*param_1;
          }
          iVar1 = param_2[2];
          *(uint *)((longlong)param_1 + 0x6c) = *(uint *)((longlong)param_1 + 0x6c) & 1;
          *(int *)(param_1 + 0xd) = iVar1;
          if (((*(byte *)(piVar6 + 4) & 0x40) == 0) ||
             (iVar1 = EVP_CIPHER_CTX_ctrl(param_1,0,0,0), iVar1 != 0)) {
            piVar6 = (int *)*param_1;
            goto LAB_143cf7725;
          }
          *param_1 = 0;
          uVar9 = 0x8f;
        }
        else {
          uVar9 = 0x70;
        }
      }
      else {
        iVar1 = ENGINE_init(param_3);
        if (iVar1 != 0) goto LAB_143cf767d;
        uVar9 = 0x61;
      }
      uVar7 = 0x86;
      goto LAB_143cf7658;
    }
    if (piVar6 == (int *)0x0) {
      uVar9 = 0x94;
      uVar7 = 0x83;
      goto LAB_143cf7658;
    }
  }
LAB_143cf7725:
  if ((0x10 < (uint)piVar6[1]) || ((0x10102U >> (piVar6[1] & 0x1fU) & 1) == 0)) {
    OPENSSL_die("assertion failed: ctx->cipher->block_size == 1 || ctx->cipher->block_size == 8 || ctx->cipher->block_size == 16"
                ,"crypto\\evp\\evp_enc.c",0x9d);
  }
  if ((*(byte *)((longlong)param_1 + 0x6c) & 1) == 0) {
    uVar4 = FHardwareCursor::GetHandle(param_1);
    uVar2 = TResourceArray<unsigned_char,0>::GetResourceDataSize(uVar4);
    if ((uVar2 & 0xf0007) == 0x10002) {
      uVar9 = 0xa1;
      uVar7 = 0xaa;
LAB_143cf7658:
      ERR_put_error(6,0x7b,uVar7,"crypto\\evp\\evp_enc.c",uVar9,uVar10);
      return 0;
    }
  }
  uVar10 = FHardwareCursor::GetHandle(param_1);
  uVar5 = TResourceArray<unsigned_char,0>::GetResourceDataSize(uVar10);
  if ((uVar5 & 0x10) == 0) {
    uVar10 = FHardwareCursor::GetHandle(param_1);
    uVar2 = TResourceArray<unsigned_char,0>::GetResourceDataSize(uVar10);
    switch(uVar2 & 0xf0007) {
    case 0:
    case 1:
      goto switchD_143cf77e9_caseD_0;
    case 3:
    case 4:
      *(undefined4 *)(param_1 + 0xb) = 0;
    case 2:
      iVar1 = EVP_CIPHER_CTX_iv_length(param_1);
      if (0x10 < iVar1) {
        OPENSSL_die("assertion failed: EVP_CIPHER_CTX_iv_length(ctx) <= (int)sizeof(ctx->iv)",
                    "crypto\\evp\\evp_enc.c",0xb5);
      }
      if (param_5 != (longlong *)0x0) {
        iVar1 = EVP_CIPHER_CTX_iv_length(param_1);
        _guard_xfg_dispatch_icall_nop(param_1 + 3,param_5,(longlong)iVar1);
      }
      iVar1 = EVP_CIPHER_CTX_iv_length(param_1);
      _Src = param_1 + 3;
      break;
    case 5:
      *(undefined4 *)(param_1 + 0xb) = 0;
      if (param_5 == (longlong *)0x0) goto switchD_143cf77e9_caseD_0;
      iVar1 = EVP_CIPHER_CTX_iv_length(param_1);
      _Src = param_5;
      break;
    default:
      goto LAB_143cf789f;
    }
    _guard_xfg_dispatch_icall_nop(param_1 + 5,_Src,(longlong)iVar1);
  }
switchD_143cf77e9_caseD_0:
  if (((param_4 == 0) && ((*(byte *)(*param_1 + 0x10) & 0x20) == 0)) ||
     (iVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_4,param_5,uVar8), iVar1 != 0)) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0xf) = 0;
    *(int *)((longlong)param_1 + 0x7c) = *(int *)(*param_1 + 4) + -1;
    return 1;
  }
LAB_143cf789f:
  return 0;
}



// FUNCTION 143cf78e0 EVP_CipherUpdate body=47 status=ok
// SIG undefined EVP_CipherUpdate(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_CipherUpdate(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    EVP_EncryptUpdate();
    return;
  }
  EVP_DecryptUpdate();
  return;
}



// FUNCTION 143cf7910 EVP_DecryptFinal body=22 status=ok
// SIG undefined EVP_DecryptFinal(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_DecryptFinal(void)

{
  EVP_DecryptFinal_ex();
  return;
}



// FUNCTION 143cf7930 EVP_DecryptFinal_ex body=411 status=ok
// SIG undefined EVP_DecryptFinal_ex(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_DecryptFinal_ex(longlong *param_1,undefined1 *param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x143cf794b;
  iVar2 = 0;
  *param_3 = 0;
  lVar3 = *param_1;
  if ((*(uint *)(lVar3 + 0x10) & 0x100000) != 0) {
    iVar2 = (**(code **)(lVar3 + 0x20))(param_1,param_2,0,0);
    if (iVar2 < 0) {
      return 0;
    }
    *param_3 = iVar2;
    return 1;
  }
  uVar4 = *(uint *)(lVar3 + 4);
  uVar6 = (ulonglong)uVar4;
  if ((*(uint *)((longlong)param_1 + 0x6c) & 0x100) == 0) {
    if (1 < uVar4) {
      if ((*(int *)((longlong)param_1 + 0x14) != 0) || ((int)param_1[0xf] == 0)) {
        ERR_put_error(6,0x65,0x6d,"crypto\\evp\\evp_enc.c",0x20e,0x143cf794b);
        return 0;
      }
      if (0x20 < uVar4) {
        OPENSSL_die("assertion failed: b <= sizeof(ctx->final)","crypto\\evp\\evp_enc.c",0x211);
      }
      bVar1 = *(byte *)((ulonglong)(uVar4 - 1) + 0x80 + (longlong)param_1);
      if ((bVar1 == 0) || ((int)uVar4 < (int)(uint)bVar1)) {
        uVar8 = 0x219;
LAB_143cf7a89:
        uVar7 = 100;
        goto LAB_143cf7a8f;
      }
      uVar4 = (uint)bVar1;
      if (bVar1 != 0) {
        do {
          uVar6 = (ulonglong)((int)uVar6 - 1);
          if (*(byte *)(uVar6 + 0x80 + (longlong)param_1) != uVar4) {
            uVar8 = 0x21e;
            goto LAB_143cf7a89;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < (int)uVar4);
      }
      iVar2 = *(int *)(*param_1 + 4) - uVar4;
      lVar3 = (longlong)iVar2;
      if (0 < iVar2) {
        puVar5 = param_2;
        do {
          *puVar5 = puVar5[(longlong)param_1 + (0x80 - (longlong)param_2)];
          puVar5 = puVar5 + 1;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
    }
    *param_3 = iVar2;
  }
  else if (*(int *)((longlong)param_1 + 0x14) != 0) {
    uVar8 = 0x206;
    uVar7 = 0x8a;
LAB_143cf7a8f:
    ERR_put_error(6,0x65,uVar7,"crypto\\evp\\evp_enc.c",uVar8,uVar9);
    return 0;
  }
  return 1;
}



// FUNCTION 143cf7ad0 EVP_DecryptInit_ex body=41 status=ok
// SIG undefined EVP_DecryptInit_ex(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_DecryptInit_ex(void)

{
  FUN_143cf75a0();
  return;
}



// FUNCTION 143cf7b00 EVP_DecryptUpdate body=587 status=ok
// SIG undefined EVP_DecryptUpdate(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong EVP_DecryptUpdate(longlong *param_1,void *param_2,int *param_3,void *param_4,int param_5)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x143cf7b1d;
  uVar1 = *(uint *)(*param_1 + 4);
  uVar4 = (ulonglong)uVar1;
  iVar3 = EVP_CIPHER_CTX_test_flags(param_1,0x2000);
  iVar5 = param_5;
  if (iVar3 != 0) {
    iVar5 = (int)((param_5 + 7 >> 0x1f & 7U) + param_5 + 7) >> 3;
  }
  if ((*(uint *)(*param_1 + 0x10) & 0x100000) == 0) {
    if (param_5 < 1) {
      *param_3 = 0;
      return (ulonglong)(param_5 == 0);
    }
    if ((*(uint *)((longlong)param_1 + 0x6c) & 0x100) != 0) {
      uVar4 = EVP_EncryptUpdate(param_1,param_2,param_3,param_4,param_5,uVar7);
      return uVar4;
    }
    if (0x20 < uVar1) {
      OPENSSL_die("assertion failed: b <= sizeof(ctx->final)","crypto\\evp\\evp_enc.c",0x1c9);
    }
    if ((int)param_1[0xf] == 0) {
      bVar2 = false;
    }
    else {
      if ((param_2 == param_4) ||
         (0 < (int)uVar1 &&
          (param_2 != param_4 &&
          ((ulonglong)-(longlong)(int)uVar1 < (ulonglong)((longlong)param_2 - (longlong)param_4) ||
          (ulonglong)((longlong)param_2 - (longlong)param_4) < (ulonglong)(longlong)(int)uVar1)))) {
        uVar6 = 0x1cf;
        goto LAB_143cf7bb5;
      }
      _guard_xfg_dispatch_icall_nop(param_2,param_1 + 0x10,uVar4);
      param_2 = (void *)((longlong)param_2 + uVar4);
      bVar2 = true;
    }
    iVar5 = EVP_EncryptUpdate(param_1,param_2,param_3,param_4,param_5,uVar7);
    if (iVar5 != 0) {
      if ((uVar1 < 2) || (*(int *)((longlong)param_1 + 0x14) != 0)) {
        *(undefined4 *)(param_1 + 0xf) = 0;
      }
      else {
        *param_3 = *param_3 - uVar1;
        *(undefined4 *)(param_1 + 0xf) = 1;
        _guard_xfg_dispatch_icall_nop
                  (param_1 + 0x10,(void *)((longlong)*param_3 + (longlong)param_2),uVar4);
      }
      if (bVar2) {
        *param_3 = *param_3 + uVar1;
      }
      return 1;
    }
  }
  else {
    if ((uVar1 != 1) ||
       (iVar5 < 1 ||
        (param_2 == param_4 ||
        (ulonglong)((longlong)param_2 - (longlong)param_4) <= (ulonglong)-(longlong)iVar5 &&
        (ulonglong)(longlong)iVar5 <= (ulonglong)((longlong)param_2 - (longlong)param_4)))) {
      iVar5 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_4,(longlong)param_5);
      if (-1 < iVar5) {
        *param_3 = iVar5;
        return 1;
      }
      *param_3 = 0;
      return 0;
    }
    uVar6 = 0x1b4;
LAB_143cf7bb5:
    ERR_put_error(6,0xa6,0xa2,"crypto\\evp\\evp_enc.c",uVar6);
  }
  return 0;
}



// FUNCTION 143cf7d50 EVP_EncryptFinal body=22 status=ok
// SIG undefined EVP_EncryptFinal(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_EncryptFinal(void)

{
  EVP_EncryptFinal_ex();
  return;
}



// FUNCTION 143cf7d70 EVP_EncryptFinal_ex body=293 status=ok
// SIG undefined EVP_EncryptFinal_ex(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_EncryptFinal_ex(longlong *param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143cf7d86;
  lVar3 = *param_1;
  if ((*(uint *)(lVar3 + 0x10) & 0x100000) != 0) {
    uVar2 = (**(code **)(lVar3 + 0x20))(param_1,param_2,0,0);
    if ((int)uVar2 < 0) {
      return 0;
    }
    *param_3 = uVar2;
    return 1;
  }
  uVar2 = *(uint *)(lVar3 + 4);
  if (0x20 < uVar2) {
    OPENSSL_die("assertion failed: b <= sizeof(ctx->buf)","crypto\\evp\\evp_enc.c",0x18c);
  }
  if (uVar2 != 1) {
    uVar1 = *(uint *)((longlong)param_1 + 0x14);
    if ((*(uint *)((longlong)param_1 + 0x6c) & 0x100) == 0) {
      if (uVar1 < uVar2) {
        puVar4 = (undefined1 *)((longlong)param_1 + (ulonglong)uVar1 + 0x38);
        for (lVar3 = (longlong)(int)(uVar2 - uVar1); lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar4 = (char)(uVar2 - uVar1);
          puVar4 = puVar4 + 1;
        }
      }
      uVar5 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_1 + 7,uVar2);
      if ((int)uVar5 == 0) {
        return uVar5;
      }
      *param_3 = uVar2;
      return uVar5;
    }
    if (uVar1 != 0) {
      ERR_put_error(6,0x7f,0x8a,"crypto\\evp\\evp_enc.c",0x195,uVar5);
      return 0;
    }
  }
  *param_3 = 0;
  return 1;
}



// FUNCTION 143cf7ea0 EVP_EncryptInit_ex body=41 status=ok
// SIG undefined EVP_EncryptInit_ex(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_EncryptInit_ex(void)

{
  FUN_143cf75a0();
  return;
}



// FUNCTION 143cf7ed0 EVP_EncryptUpdate body=624 status=ok
// SIG undefined EVP_EncryptUpdate(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

bool EVP_EncryptUpdate(longlong *param_1,void *param_2,uint *param_3,void *param_4,uint param_5)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  size_t _Size;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  uVar10 = 0x143cf7ee7;
  _Size = (size_t)(int)param_5;
  iVar3 = EVP_CIPHER_CTX_test_flags(param_1,0x2000);
  uVar4 = param_5;
  if (iVar3 != 0) {
    uVar4 = (int)(((int)(param_5 + 7) >> 0x1f & 7U) + param_5 + 7) >> 3;
  }
  lVar2 = *param_1;
  uVar1 = *(uint *)(lVar2 + 4);
  if ((*(uint *)(lVar2 + 0x10) & 0x100000) == 0) {
    if ((int)param_5 < 1) {
      *param_3 = 0;
      return param_5 == 0;
    }
    iVar3 = *(int *)((longlong)param_1 + 0x14);
    lVar8 = (longlong)iVar3;
    uVar7 = (lVar8 - (longlong)param_4) + (longlong)param_2;
    uVar6 = 0;
    if (uVar7 != 0) {
      uVar6 = (uint)((ulonglong)-(longlong)(int)uVar4 < uVar7 ||
                    uVar7 < (ulonglong)(longlong)(int)uVar4);
    }
    if ((0 < (int)uVar4 & uVar6) == 0) {
      if ((iVar3 == 0) && ((*(uint *)((longlong)param_1 + 0x7c) & param_5) == 0)) {
        iVar3 = (**(code **)(lVar2 + 0x20))(param_1,param_2,param_4,_Size);
        if (iVar3 == 0) {
          *param_3 = 0;
          return false;
        }
        *param_3 = param_5;
      }
      else {
        if (0x20 < (int)uVar1) {
          OPENSSL_die("assertion failed: bl <= (int)sizeof(ctx->buf)","crypto\\evp\\evp_enc.c",0x155
                     );
        }
        uVar4 = 0;
        if (iVar3 != 0) {
          iVar3 = uVar1 - iVar3;
          if ((int)param_5 < iVar3) {
            _guard_xfg_dispatch_icall_nop((void *)((longlong)param_1 + lVar8 + 0x38),param_4,_Size);
            *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + param_5;
            *param_3 = 0;
            return true;
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)param_1 + lVar8 + 0x38),param_4,(longlong)iVar3);
          param_5 = param_5 - iVar3;
          param_4 = (void *)((longlong)param_4 + (longlong)iVar3);
          iVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_1 + 7,(longlong)(int)uVar1);
          if (iVar3 == 0) {
            return false;
          }
          param_2 = (void *)((longlong)param_2 + (longlong)(int)uVar1);
          uVar4 = uVar1;
        }
        *param_3 = uVar4;
        uVar4 = uVar1 - 1 & param_5;
        iVar3 = param_5 - uVar4;
        if (0 < iVar3) {
          iVar5 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_4,(longlong)iVar3);
          if (iVar5 == 0) {
            return false;
          }
          *param_3 = *param_3 + iVar3;
        }
        if (uVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (param_1 + 7,(void *)((longlong)iVar3 + (longlong)param_4),(longlong)(int)uVar4)
          ;
        }
        *(uint *)((longlong)param_1 + 0x14) = uVar4;
      }
      return true;
    }
    uVar9 = 0x147;
  }
  else {
    if ((uVar1 != 1) ||
       ((int)uVar4 < 1 ||
        (param_2 == param_4 ||
        (ulonglong)((longlong)param_2 - (longlong)param_4) <= (ulonglong)-(longlong)(int)uVar4 &&
        (ulonglong)(longlong)(int)uVar4 <= (ulonglong)((longlong)param_2 - (longlong)param_4)))) {
      uVar4 = (**(code **)(lVar2 + 0x20))(param_1,param_2,param_4,_Size);
      if ((int)uVar4 < 0) {
        return false;
      }
      *param_3 = uVar4;
      return true;
    }
    uVar9 = 0x136;
  }
  ERR_put_error(6,0xa7,0xa2,"crypto\\evp\\evp_enc.c",uVar9,uVar10);
  return false;
}



// FUNCTION 143cf8140 is_partially_overlapping body=58 status=ok
// SIG undefined is_partially_overlapping(void)

bool is_partially_overlapping(longlong param_1,longlong param_2,int param_3)

{
  return (param_1 != param_2 &&
         ((ulonglong)-(longlong)param_3 < (ulonglong)(param_1 - param_2) ||
         (ulonglong)(param_1 - param_2) < (ulonglong)(longlong)param_3)) && 0 < param_3;
}



// FUNCTION 143cf8180 EVP_add_cipher body=86 status=ok
// SIG undefined EVP_add_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_add_cipher(undefined4 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar2 = OBJ_nid2sn(*param_1);
    iVar1 = OBJ_NAME_add(uVar2,2,param_1);
    if (iVar1 != 0) {
      uVar2 = OBJ_nid2ln(*param_1);
      uVar2 = OBJ_NAME_add(uVar2,2,param_1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 143cf81e0 EVP_add_digest body=162 status=ok
// SIG undefined EVP_add_digest(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_add_digest(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = OBJ_nid2sn(*param_1);
  iVar1 = OBJ_NAME_add(uVar2,1,param_1);
  if (iVar1 != 0) {
    uVar3 = OBJ_nid2ln(*param_1);
    uVar3 = OBJ_NAME_add(uVar3,1,param_1);
    if ((int)uVar3 != 0) {
      if (param_1[1] == 0) {
        return uVar3;
      }
      if (*param_1 == param_1[1]) {
        return uVar3;
      }
      uVar3 = OBJ_nid2sn();
      iVar1 = OBJ_NAME_add(uVar3,0x8001,uVar2);
      if (iVar1 != 0) {
        uVar3 = OBJ_nid2ln(param_1[1]);
        uVar2 = OBJ_NAME_add(uVar3,0x8001,uVar2);
        return uVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 143cf8290 EVP_get_cipherbyname body=58 status=ok
// SIG undefined EVP_get_cipherbyname(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_get_cipherbyname(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = OPENSSL_init_crypto(4,0);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = OBJ_NAME_get(param_1,2);
  return uVar2;
}



// FUNCTION 143cf82d0 EVP_get_digestbyname body=58 status=ok
// SIG undefined EVP_get_digestbyname(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_get_digestbyname(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = OPENSSL_init_crypto(8,0);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = OBJ_NAME_get(param_1,1);
  return uVar2;
}



// FUNCTION 143cf8310 evp_cleanup_int body=60 status=ok
// SIG undefined evp_cleanup_int(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void evp_cleanup_int(void)

{
  OBJ_NAME_cleanup(2);
  OBJ_NAME_cleanup(1);
  OBJ_NAME_cleanup(0xffffffff);
  EVP_PBE_cleanup();
  OBJ_sigid_free();
  evp_app_cleanup_int();
  return;
}



// FUNCTION 143cf8350 EVP_PKEY_assign body=75 status=ok
// SIG undefined EVP_PKEY_assign(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool EVP_PKEY_assign(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = EVP_PKEY_set_type();
    if (iVar1 != 0) {
      *(longlong *)(param_1 + 0x28) = param_3;
      return param_3 != 0;
    }
  }
  return false;
}



// FUNCTION 143cf83a0 EVP_PKEY_bits body=50 status=ok
// SIG undefined EVP_PKEY_bits(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_bits(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0x10) != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 0x10) + 0x60),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000143cf83c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 143cf83e0 EVP_PKEY_cmp body=123 status=ok
// SIG undefined EVP_PKEY_cmp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_cmp(int *param_1,int *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (*param_1 != *param_2) {
    return 0xffffffff;
  }
  if (*(longlong *)(param_1 + 4) != 0) {
    pcVar1 = *(code **)(*(longlong *)(param_1 + 4) + 0x90);
    if ((pcVar1 != (code *)0x0) && (uVar2 = (*pcVar1)(), (int)uVar2 < 1)) {
      return uVar2;
    }
    if (*(code **)(*(longlong *)(param_1 + 4) + 0x30) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143cf8448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*(longlong *)(param_1 + 4) + 0x30))(param_1,param_2);
      return uVar2;
    }
  }
  return 0xfffffffe;
}



// FUNCTION 143cf8460 EVP_PKEY_cmp_parameters body=67 status=ok
// SIG undefined EVP_PKEY_cmp_parameters(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_cmp_parameters(int *param_1,int *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (*param_1 != *param_2) {
    return 0xffffffff;
  }
  if ((*(longlong *)(param_1 + 4) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 4) + 0x90),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000143cf8496. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0xfffffffe;
}



// FUNCTION 143cf84b0 EVP_PKEY_copy_parameters body=296 status=ok
// SIG undefined EVP_PKEY_copy_parameters(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_copy_parameters(int *param_1,int *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143cf84c0;
  if (*param_1 == 0) {
    iVar1 = EVP_PKEY_set_type(param_1,*param_2);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else if (*param_1 != *param_2) {
    uVar3 = 0x51;
    uVar2 = 0x65;
    goto LAB_143cf85ba;
  }
  if (((*(longlong *)(param_2 + 4) == 0) ||
      (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 4) + 0x80),
      UNRECOVERED_JUMPTABLE == (code *)0x0)) ||
     (iVar1 = (*UNRECOVERED_JUMPTABLE)(param_2), iVar1 == 0)) {
    if (((*(longlong *)(param_1 + 4) != 0) &&
        (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 4) + 0x80),
        UNRECOVERED_JUMPTABLE != (code *)0x0)) &&
       (iVar1 = (*UNRECOVERED_JUMPTABLE)(param_1), iVar1 != 0)) {
      if (*(longlong *)(param_2 + 4) == 0) {
        return 0;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 4) + 0x88);
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        return 0;
      }
                    /* WARNING: Could not recover jumptable at 0x000143cf8570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return uVar4;
    }
    if (((*param_1 == *param_2) && (*(longlong *)(param_1 + 4) != 0)) &&
       ((UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 4) + 0x90),
        UNRECOVERED_JUMPTABLE != (code *)0x0 &&
        (uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2), (int)uVar2 == 1)))) {
      return uVar2;
    }
    uVar3 = 0x5d;
    uVar2 = 0x99;
  }
  else {
    uVar3 = 0x56;
    uVar2 = 0x67;
  }
LAB_143cf85ba:
  ERR_put_error(6,0x67,uVar2,"crypto\\evp\\p_lib.c",uVar3,uVar4);
  return 0;
}



// FUNCTION 143cf85e0 EVP_PKEY_free body=94 status=ok
// SIG undefined EVP_PKEY_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_PKEY_free(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 2) {
      EVP_PKEY_free_it();
      CRYPTO_THREAD_lock_free(*(undefined8 *)(param_1 + 0x40));
      OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x38),X509_ATTRIBUTE_free);
      CRYPTO_free(param_1,"crypto\\evp\\p_lib.c",0x25b);
    }
  }
  return;
}



// FUNCTION 143cf8640 EVP_PKEY_free_it body=89 status=ok
// SIG undefined EVP_PKEY_free_it(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_PKEY_free_it(longlong param_1)

{
  code *pcVar1;
  
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (pcVar1 = *(code **)(*(longlong *)(param_1 + 0x10) + 0xa8), pcVar1 != (code *)0x0)) {
    (*pcVar1)();
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  ENGINE_finish(*(undefined8 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = 0;
  ENGINE_finish(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 143cf86a0 EVP_PKEY_get0_DH body=75 status=ok
// SIG undefined EVP_PKEY_get0_DH(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_get0_DH(int *param_1)

{
  if ((*param_1 != 0x1c) && (*param_1 != 0x398)) {
    ERR_put_error(6,0x77,0x80,"crypto\\evp\\p_lib.c",0x223);
    return 0;
  }
  return *(undefined8 *)(param_1 + 10);
}



// FUNCTION 143cf86f0 EVP_PKEY_get0_EC_KEY body=67 status=ok
// SIG undefined EVP_PKEY_get0_EC_KEY(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_get0_EC_KEY(int *param_1)

{
  if (*param_1 != 0x198) {
    ERR_put_error(6,0x83,0x8e,"crypto\\evp\\p_lib.c",0x207);
    return 0;
  }
  return *(undefined8 *)(param_1 + 10);
}



// FUNCTION 143cf8740 EVP_PKEY_get0_RSA body=64 status=ok
// SIG undefined EVP_PKEY_get0_RSA(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_get0_RSA(int *param_1)

{
  if (*param_1 != 6) {
    ERR_put_error(6,0x79,0x7f,"crypto\\evp\\p_lib.c",0x1d0);
    return 0;
  }
  return *(undefined8 *)(param_1 + 10);
}



// FUNCTION 143cf8780 EVP_PKEY_get0_poly1305 body=79 status=ok
// SIG undefined EVP_PKEY_get0_poly1305(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_get0_poly1305(int *param_1,longlong *param_2)

{
  int *piVar1;
  
  if (*param_1 != 0x425) {
    ERR_put_error(6,0xb8,0xa4,"crypto\\evp\\p_lib.c",0x1ac);
    return 0;
  }
  piVar1 = *(int **)(param_1 + 10);
  *param_2 = (longlong)*piVar1;
  return *(undefined8 *)(piVar1 + 2);
}



// FUNCTION 143cf87d0 EVP_PKEY_get0_siphash body=77 status=ok
// SIG undefined EVP_PKEY_get0_siphash(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_get0_siphash(int *param_1,longlong *param_2)

{
  int *piVar1;
  
  if (*param_1 != 0x426) {
    ERR_put_error(6,0xac,0xaf,"crypto\\evp\\p_lib.c",0x1bb);
    return 0;
  }
  piVar1 = *(int **)(param_1 + 10);
  *param_2 = (longlong)*piVar1;
  return *(undefined8 *)(piVar1 + 2);
}



// FUNCTION 143cf8820 EVP_PKEY_get1_EC_KEY body=93 status=ok
// SIG undefined EVP_PKEY_get1_EC_KEY(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong EVP_PKEY_get1_EC_KEY(int *param_1)

{
  longlong lVar1;
  
  if (*param_1 != 0x198) {
    ERR_put_error(6,0x83,0x8e,"crypto\\evp\\p_lib.c",0x207);
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 10);
  if (lVar1 != 0) {
    EC_KEY_up_ref(lVar1);
  }
  return lVar1;
}



// FUNCTION 143cf8880 EVP_PKEY_get1_tls_encodedpoint body=65 status=ok
// SIG undefined EVP_PKEY_get1_tls_encodedpoint(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong EVP_PKEY_get1_tls_encodedpoint(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (pcVar1 = *(code **)(*(longlong *)(param_1 + 0x10) + 0xb0), pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)(param_1,10,0,param_2,0x143cf888a);
    if (0 < iVar2) {
      return (longlong)iVar2;
    }
  }
  return 0;
}



// FUNCTION 143cf88d0 EVP_PKEY_get_default_digest_nid body=61 status=ok
// SIG undefined EVP_PKEY_get_default_digest_nid(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_get_default_digest_nid(longlong param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 0x10) + 0xb0),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000143cf8900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,3,0,param_2);
    return uVar1;
  }
  return 0xfffffffe;
}



// FUNCTION 143cf8910 EVP_PKEY_missing_parameters body=48 status=ok
// SIG undefined EVP_PKEY_missing_parameters(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_missing_parameters(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 0x10) + 0x80),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000143cf8936. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 143cf8940 EVP_PKEY_new body=181 status=ok
// SIG undefined EVP_PKEY_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * EVP_PKEY_new(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143cf894c;
  puVar1 = (undefined8 *)CRYPTO_zalloc(0x48,"crypto\\evp\\p_lib.c",0x8e);
  if (puVar1 == (undefined8 *)0x0) {
    ERR_put_error(6,0x6a,0x41,"crypto\\evp\\p_lib.c",0x91,uVar3);
    return (undefined8 *)0x0;
  }
  *(undefined4 *)(puVar1 + 6) = 1;
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 1) = 1;
  lVar2 = CRYPTO_THREAD_lock_new();
  puVar1[8] = lVar2;
  if (lVar2 == 0) {
    ERR_put_error(6,0x6a,0x41,"crypto\\evp\\p_lib.c",0x9a,uVar3);
    CRYPTO_free(puVar1,"crypto\\evp\\p_lib.c",0x9b);
    return (undefined8 *)0x0;
  }
  return puVar1;
}



// FUNCTION 143cf8a00 EVP_PKEY_new_raw_private_key body=283 status=ok
// SIG undefined EVP_PKEY_new_raw_private_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong EVP_PKEY_new_raw_private_key
                   (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x143cf8a1e;
  lVar4 = EVP_PKEY_new();
  if (lVar4 != 0) {
    iVar3 = pkey_set_type(lVar4,param_2,param_1,0,0xffffffff,uVar7);
    if (iVar3 != 0) {
      pcVar2 = *(code **)(*(longlong *)(lVar4 + 0x10) + 0xf8);
      if (pcVar2 == (code *)0x0) {
        uVar6 = 0xed;
        uVar5 = 0x96;
      }
      else {
        iVar3 = (*pcVar2)(lVar4,param_3,param_4);
        if (iVar3 != 0) {
          return lVar4;
        }
        uVar6 = 0xf2;
        uVar5 = 0xb4;
      }
      ERR_put_error(6,0xbf,uVar5,"crypto\\evp\\p_lib.c",uVar6);
    }
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 < 2) {
      EVP_PKEY_free_it(lVar4);
      CRYPTO_THREAD_lock_free(*(undefined8 *)(lVar4 + 0x40));
      OPENSSL_sk_pop_free(*(undefined8 *)(lVar4 + 0x38),X509_ATTRIBUTE_free);
      CRYPTO_free(lVar4,"crypto\\evp\\p_lib.c",0x25b);
    }
  }
  return 0;
}



// FUNCTION 143cf8b20 EVP_PKEY_print_public body=121 status=ok
// SIG undefined EVP_PKEY_print_public(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_print_public(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if ((*(longlong *)(param_2 + 4) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 4) + 0x38),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000143cf8b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  BIO_indent(param_1,param_3,0x80);
  uVar1 = OBJ_nid2ln(*param_2);
  BIO_printf(param_1,"%s algorithm \"%s\" unsupported\n","Public Key",uVar1);
  return 1;
}



// FUNCTION 143cf8ba0 EVP_PKEY_security_bits body=60 status=ok
// SIG undefined EVP_PKEY_security_bits(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_security_bits(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 0x10) + 0x68),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000143cf8bcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0xfffffffe;
}



// FUNCTION 143cf8be0 EVP_PKEY_set1_DH body=95 status=ok
// SIG undefined EVP_PKEY_set1_DH(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool EVP_PKEY_set1_DH(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = EVP_PKEY_set_type(param_1,0x1c), iVar1 != 0)) {
    *(longlong *)(param_1 + 0x28) = param_2;
    if (param_2 == 0) {
      return false;
    }
    DH_up_ref(param_2);
    return param_2 != 0;
  }
  return false;
}



// FUNCTION 143cf8c40 EVP_PKEY_set1_EC_KEY body=97 status=ok
// SIG undefined EVP_PKEY_set1_EC_KEY(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool EVP_PKEY_set1_EC_KEY(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = EVP_PKEY_set_type(param_1,0x198), iVar1 != 0)) {
    *(longlong *)(param_1 + 0x28) = param_2;
    if (param_2 == 0) {
      return false;
    }
    EC_KEY_up_ref(param_2);
    return param_2 != 0;
  }
  return false;
}


