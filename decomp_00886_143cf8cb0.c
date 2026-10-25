// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143cf8cb0 EVP_PKEY_set1_tls_encodedpoint body=75 status=ok
// SIG undefined EVP_PKEY_set1_tls_encodedpoint(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_set1_tls_encodedpoint(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  code *pcVar1;
  int iVar2;
  
  if (((param_3 < 0x80000000) && (*(longlong *)(param_1 + 0x10) != 0)) &&
     (pcVar1 = *(code **)(*(longlong *)(param_1 + 0x10) + 0xb0), pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)(param_1,9,param_3,param_2,0x143cf8cba);
    if (0 < iVar2) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143cf8d00 EVP_PKEY_set_type body=248 status=ok
// SIG undefined EVP_PKEY_set_type(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_set_type(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined8 local_res8;
  undefined8 uVar2;
  
  uVar2 = 0x143cf8d10;
  local_res8 = 0;
  if (param_1 != (undefined4 *)0x0) {
    if (*(longlong *)(param_1 + 10) != 0) {
      EVP_PKEY_free_it();
    }
    if ((param_2 == param_1[1]) && (*(longlong *)(param_1 + 4) != 0)) {
      return 1;
    }
    ENGINE_finish(*(undefined8 *)(param_1 + 6));
    *(undefined8 *)(param_1 + 6) = 0;
    ENGINE_finish(*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  puVar1 = (undefined4 *)EVP_PKEY_asn1_find(&local_res8,param_2);
  if (param_1 == (undefined4 *)0x0) {
    ENGINE_finish(local_res8);
  }
  if (puVar1 == (undefined4 *)0x0) {
    ERR_put_error(6,0x9e,0x9c,"crypto\\evp\\p_lib.c",0xd2,uVar2);
    return 0;
  }
  if (param_1 != (undefined4 *)0x0) {
    *(undefined8 *)(param_1 + 6) = local_res8;
    *(undefined4 **)(param_1 + 4) = puVar1;
    *param_1 = *puVar1;
    param_1[1] = param_2;
  }
  return 1;
}



// FUNCTION 143cf8e00 EVP_PKEY_set_type_str body=36 status=ok
// SIG undefined EVP_PKEY_set_type_str(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_PKEY_set_type_str(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  pkey_set_type(param_1,0,0,param_2,param_3);
  return;
}



// FUNCTION 143cf8e30 EVP_PKEY_size body=50 status=ok
// SIG undefined EVP_PKEY_size(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_size(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0x10) != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 0x10) + 0x58),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000143cf8e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 143cf8e70 EVP_PKEY_type body=72 status=ok
// SIG undefined EVP_PKEY_type(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 EVP_PKEY_type(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 local_res10 [3];
  
  puVar2 = (undefined4 *)EVP_PKEY_asn1_find(local_res10,param_1);
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = *puVar2;
    ENGINE_finish(local_res10[0]);
    return uVar1;
  }
  ENGINE_finish(local_res10[0]);
  return 0;
}



// FUNCTION 143cf8ec0 EVP_PKEY_up_ref body=21 status=ok
// SIG undefined EVP_PKEY_up_ref(void)

bool EVP_PKEY_up_ref(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return 1 < iVar2 + 1;
}



// FUNCTION 143cf8ee0 pkey_set_type body=256 status=ok
// SIG undefined pkey_set_type(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
pkey_set_type(undefined4 *param_1,longlong param_2,int param_3,longlong param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong local_res10;
  undefined8 uVar3;
  
  uVar3 = 0x143cf8efd;
  plVar2 = &local_res10;
  if (param_2 != 0) {
    plVar2 = (longlong *)0x0;
  }
  local_res10 = param_2;
  if (param_1 != (undefined4 *)0x0) {
    if (*(longlong *)(param_1 + 10) != 0) {
      EVP_PKEY_free_it();
    }
    if ((param_3 == param_1[1]) && (*(longlong *)(param_1 + 4) != 0)) {
      return 1;
    }
    ENGINE_finish(*(undefined8 *)(param_1 + 6));
    *(undefined8 *)(param_1 + 6) = 0;
    ENGINE_finish(*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (param_4 == 0) {
    puVar1 = (undefined4 *)EVP_PKEY_asn1_find(plVar2,param_3);
  }
  else {
    puVar1 = (undefined4 *)EVP_PKEY_asn1_find_str(plVar2,param_4,param_5);
  }
  if ((param_1 == (undefined4 *)0x0) && (plVar2 != (longlong *)0x0)) {
    ENGINE_finish(local_res10);
  }
  if (puVar1 != (undefined4 *)0x0) {
    if (param_1 != (undefined4 *)0x0) {
      *(longlong *)(param_1 + 6) = local_res10;
      *(undefined4 **)(param_1 + 4) = puVar1;
      *param_1 = *puVar1;
      param_1[1] = param_3;
    }
    return 1;
  }
  ERR_put_error(6,0x9e,0x9c,"crypto\\evp\\p_lib.c",0xd2,uVar3);
  return 0;
}



// FUNCTION 143cf8fe0 dir_ctrl body=145 status=ok
// SIG undefined dir_ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong dir_ctrl(longlong param_1,int param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  uint uVar2;
  char *pcVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143cf8fec;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  if (param_2 != 2) {
    return 0;
  }
  if (param_4 == 3) {
    pcVar3 = (char *)X509_get_default_cert_dir_env();
    pcVar3 = getenv(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = (char *)X509_get_default_cert_dir();
    }
    uVar2 = add_cert_dir(uVar1,pcVar3,1);
    if (uVar2 == 0) {
      ERR_put_error(0xb,0x66,0x67,"crypto\\x509\\by_dir.c",0x54,uVar5);
    }
    return (ulonglong)uVar2;
  }
  uVar4 = add_cert_dir(uVar1,param_3,param_4);
  return uVar4;
}



// FUNCTION 143cf9080 new_dir body=233 status=ok
// SIG undefined new_dir(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 new_dir(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143cf9090;
  plVar2 = (longlong *)CRYPTO_malloc(0x18,"crypto\\x509\\by_dir.c",0x5f);
  if (plVar2 == (longlong *)0x0) {
    ERR_put_error(0xb,0x99,0x41,"crypto\\x509\\by_dir.c",0x62,uVar4);
    return 0;
  }
  lVar3 = BUF_MEM_new();
  *plVar2 = lVar3;
  if (lVar3 == 0) {
    uVar1 = 0x67;
  }
  else {
    plVar2[1] = 0;
    lVar3 = CRYPTO_THREAD_lock_new();
    plVar2[2] = lVar3;
    if (lVar3 != 0) {
      *(longlong **)(param_1 + 0x10) = plVar2;
      return 1;
    }
    BUF_MEM_free(*plVar2);
    uVar1 = 0x6e;
  }
  ERR_put_error(0xb,0x99,0x41,"crypto\\x509\\by_dir.c",uVar1,uVar4);
  CRYPTO_free(plVar2,"crypto\\x509\\by_dir.c",0x75);
  return 0;
}



// FUNCTION 143cf9170 free_dir body=78 status=ok
// SIG undefined free_dir(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void free_dir(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  OPENSSL_sk_pop_free(puVar1[1],by_dir_entry_free);
  BUF_MEM_free(*puVar1);
  CRYPTO_THREAD_lock_free(puVar1[2]);
  CRYPTO_free(puVar1,"crypto\\x509\\by_dir.c",0x96);
  return;
}



// FUNCTION 143cf91c0 get_cert_by_subject body=1057 status=ok
// SIG undefined get_cert_by_subject(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int get_cert_by_subject(longlong param_1,int param_2,longlong param_3,undefined4 *param_4)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  char *pcVar12;
  uint uVar13;
  longlong lVar14;
  undefined4 uVar15;
  int iVar16;
  longlong lVar17;
  undefined1 auStack_258 [32];
  undefined4 local_238;
  undefined4 local_230;
  undefined1 *local_228;
  uint local_220;
  undefined4 local_218;
  int local_214;
  undefined4 local_210 [2];
  undefined1 *local_208;
  longlong local_200;
  longlong local_1f8;
  undefined4 *local_1f0;
  int local_1e8 [2];
  undefined1 *local_1e0;
  undefined1 local_1d8 [24];
  longlong local_1c0;
  longlong local_190;
  undefined1 local_88 [48];
  ulonglong local_58;
  ulonglong uVar7;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  iVar5 = 0;
  lVar14 = 0;
  if (param_3 == 0) {
    return 0;
  }
  local_1f8 = param_1;
  local_1f0 = param_4;
  local_1e8[0] = param_2;
  if (param_2 == 1) {
    local_208 = &DAT_143f3f584;
    local_190 = param_3;
LAB_143cf9279:
    local_1e0 = local_1d8;
    lVar14 = BUF_MEM_new();
    if (lVar14 != 0) {
      lVar17 = *(longlong *)(param_1 + 0x10);
      local_200 = lVar17;
      uVar15 = X509_NAME_hash(param_3);
      local_214 = 0;
      local_218 = uVar15;
      iVar3 = OPENSSL_sk_num(*(undefined8 *)(lVar17 + 8));
      iVar16 = iVar5;
      if (0 < iVar3) {
        do {
          puVar6 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(lVar17 + 8),iVar5);
          pcVar12 = (char *)*puVar6;
          uVar13 = 0;
          cVar1 = *pcVar12;
          uVar9 = 0;
          uVar4 = uVar13;
          uVar7 = uVar9;
          while ((cVar1 != '\0' && (uVar4 = (uint)uVar7, uVar4 < 0x80000000))) {
            pcVar12 = pcVar12 + 1;
            uVar4 = uVar4 + 1;
            cVar1 = *pcVar12;
            uVar7 = (ulonglong)uVar4;
          }
          lVar8 = BUF_MEM_grow(lVar14,(longlong)(int)((uVar4 & 0x7fffffff) + 0x11));
          if (lVar8 == 0) {
            local_238 = 0x103;
            uVar15 = 0x41;
            goto LAB_143cf958b;
          }
          if ((param_2 == 2) && (puVar6[2] != 0)) {
            local_210[0] = uVar15;
            CRYPTO_THREAD_read_lock(*(undefined8 *)(lVar17 + 0x10));
            iVar5 = OPENSSL_sk_find(puVar6[2],local_210);
            if (iVar5 < 0) {
              CRYPTO_THREAD_unlock(*(undefined8 *)(lVar17 + 0x10));
              puVar2 = local_208;
              uVar15 = local_218;
            }
            else {
              uVar9 = OPENSSL_sk_value(puVar6[2],iVar5);
              uVar13 = *(uint *)(uVar9 + 4);
              CRYPTO_THREAD_unlock(*(undefined8 *)(lVar17 + 0x10));
              puVar2 = local_208;
              uVar15 = local_218;
            }
          }
          else {
            uVar9 = 0;
            puVar2 = local_208;
            uVar15 = local_218;
          }
          while( true ) {
            local_238 = 0x2f;
            local_230 = uVar15;
            local_228 = puVar2;
            local_220 = uVar13;
            BIO_snprintf(*(undefined8 *)(lVar14 + 8),*(undefined8 *)(lVar14 + 0x10),"%s%c%08lx.%s%d"
                         ,*puVar6);
            iVar5 = _stat64i32(*(undefined8 *)(lVar14 + 8),local_88);
            if (iVar5 < 0) break;
            if (param_2 == 1) {
              iVar5 = X509_load_cert_file(param_1,*(undefined8 *)(lVar14 + 8),
                                          *(undefined4 *)(puVar6 + 1));
LAB_143cf93ff:
              if (iVar5 == 0) break;
            }
            else if (param_2 == 2) {
              iVar5 = X509_load_crl_file(param_1,*(undefined8 *)(lVar14 + 8),
                                         *(undefined4 *)(puVar6 + 1));
              goto LAB_143cf93ff;
            }
            uVar13 = uVar13 + 1;
          }
          lVar17 = local_200;
          CRYPTO_THREAD_read_lock(*(undefined8 *)(local_200 + 0x10));
          uVar15 = OPENSSL_sk_find(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),local_1e8);
          puVar10 = (undefined4 *)
                    OPENSSL_sk_value(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),uVar15);
          CRYPTO_THREAD_unlock(*(undefined8 *)(lVar17 + 0x10));
          iVar16 = 0;
          if (param_2 == 2) {
            CRYPTO_THREAD_read_lock(*(undefined8 *)(lVar17 + 0x10));
            if (uVar9 == 0) {
              local_210[0] = local_218;
              uVar15 = OPENSSL_sk_find(puVar6[2],local_210);
              uVar9 = OPENSSL_sk_value(puVar6[2],uVar15);
              if (uVar9 != 0) goto LAB_143cf94f8;
              puVar11 = (undefined4 *)CRYPTO_malloc(8,"crypto\\x509\\by_dir.c",0x15d);
              if (puVar11 == (undefined4 *)0x0) {
                CRYPTO_THREAD_unlock(*(undefined8 *)(lVar17 + 0x10));
                uVar15 = 0x41;
                local_238 = 0x160;
                goto LAB_143cf958b;
              }
              *puVar11 = local_218;
              puVar11[1] = uVar13;
              iVar5 = OPENSSL_sk_push(puVar6[2],puVar11);
              if (iVar5 == 0) {
                CRYPTO_THREAD_unlock(*(undefined8 *)(lVar17 + 0x10));
                CRYPTO_free(puVar11,"crypto\\x509\\by_dir.c",0x168);
                uVar15 = 0x41;
                local_238 = 0x169;
                goto LAB_143cf958b;
              }
            }
            else {
LAB_143cf94f8:
              if (*(int *)(uVar9 + 4) < (int)uVar13) {
                *(uint *)(uVar9 + 4) = uVar13;
              }
            }
            CRYPTO_THREAD_unlock(*(undefined8 *)(lVar17 + 0x10));
          }
          if (puVar10 != (undefined4 *)0x0) {
            iVar16 = 1;
            *local_1f0 = *puVar10;
            *(undefined8 *)(local_1f0 + 2) = *(undefined8 *)(puVar10 + 2);
            ERR_clear_error();
            break;
          }
          iVar5 = local_214 + 1;
          local_214 = iVar5;
          iVar3 = OPENSSL_sk_num(*(undefined8 *)(lVar17 + 8));
          param_1 = local_1f8;
          uVar15 = local_218;
        } while (iVar5 < iVar3);
      }
      goto LAB_143cf959f;
    }
    local_238 = 0xf4;
    uVar15 = 7;
  }
  else {
    if (param_2 == 2) {
      local_208 = &DAT_145d71df8;
      local_1c0 = param_3;
      goto LAB_143cf9279;
    }
    local_238 = 0xef;
    uVar15 = 0x70;
  }
LAB_143cf958b:
  ERR_put_error(0xb,0x67,uVar15,"crypto\\x509\\by_dir.c");
  iVar16 = 0;
LAB_143cf959f:
  BUF_MEM_free(lVar14);
  return iVar16;
}



// FUNCTION 143cf95f0 FUN_143cf95f0 body=8 status=ok
// SIG undefined FUN_143cf95f0(void)

undefined ** FUN_143cf95f0(void)

{
  return &PTR_s_Load_certs_from_files_in_a_direc_146836a30;
}



// FUNCTION 143cf9600 add_cert_dir body=582 status=ok
// SIG undefined add_cert_dir(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 add_cert_dir(longlong param_1,char *param_2,undefined4 param_3)

{
  char *_Str1;
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  char *pcVar7;
  int iVar8;
  size_t _MaxCount;
  char *_Str2;
  char *pcVar9;
  undefined4 uVar10;
  
  if ((param_2 == (char *)0x0) || (cVar1 = *param_2, _Str2 = param_2, cVar1 == '\0')) {
    ERR_put_error(0xb,100,0x71,"crypto\\x509\\by_dir.c",0xa0,0x143cf9610);
    return 0;
  }
  do {
    if ((cVar1 == ';') || (pcVar9 = _Str2, cVar1 == '\0')) {
      pcVar9 = param_2 + 1;
      _MaxCount = (longlong)param_2 - (longlong)_Str2;
      if (_MaxCount != 0) {
        iVar8 = 0;
        iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
        if (0 < iVar2) {
          do {
            puVar4 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 8),iVar8);
            _Str1 = (char *)*puVar4;
            cVar1 = *_Str1;
            pcVar7 = _Str1;
            for (uVar3 = 0; (cVar1 != '\0' && (uVar3 < 0x80000000)); uVar3 = uVar3 + 1) {
              pcVar7 = pcVar7 + 1;
              cVar1 = *pcVar7;
            }
            if (((uVar3 & 0x7fffffff) == _MaxCount) &&
               (iVar2 = strncmp(_Str1,_Str2,_MaxCount), iVar2 == 0)) break;
            iVar8 = iVar8 + 1;
            iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
          } while (iVar8 < iVar2);
        }
        iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
        if (iVar2 <= iVar8) {
          if (*(longlong *)(param_1 + 8) == 0) {
            lVar5 = OPENSSL_sk_new_null();
            *(longlong *)(param_1 + 8) = lVar5;
            if (lVar5 == 0) {
              uVar10 = 0xb9;
              goto LAB_143cf97f9;
            }
          }
          plVar6 = (longlong *)CRYPTO_malloc(0x18,"crypto\\x509\\by_dir.c",0xbd);
          if (plVar6 == (longlong *)0x0) {
            uVar10 = 0xbf;
LAB_143cf97f9:
            ERR_put_error(0xb,100,0x41,"crypto\\x509\\by_dir.c",uVar10);
            return 0;
          }
          *(undefined4 *)(plVar6 + 1) = param_3;
          lVar5 = OPENSSL_sk_new(&LAB_143cf98a0);
          plVar6[2] = lVar5;
          lVar5 = CRYPTO_strndup(_Str2,_MaxCount,"crypto\\x509\\by_dir.c",0xc4);
          *plVar6 = lVar5;
          if ((lVar5 == 0) || (plVar6[2] == 0)) {
            CRYPTO_free(lVar5,"crypto\\x509\\by_dir.c",0x8a);
            OPENSSL_sk_pop_free(plVar6[2],by_dir_hash_free);
            CRYPTO_free(plVar6,"crypto\\x509\\by_dir.c",0x8c);
            return 0;
          }
          iVar2 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 8),plVar6);
          if (iVar2 == 0) {
            by_dir_entry_free(plVar6);
            uVar10 = 0xcb;
            goto LAB_143cf97f9;
          }
        }
      }
    }
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    if (cVar1 == '\0') {
      return 1;
    }
    cVar1 = *param_2;
    _Str2 = pcVar9;
  } while( true );
}



// FUNCTION 143cf9850 by_dir_entry_free body=79 status=ok
// SIG undefined by_dir_entry_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void by_dir_entry_free(undefined8 *param_1)

{
  CRYPTO_free(*param_1,"crypto\\x509\\by_dir.c",0x8a);
  OPENSSL_sk_pop_free(param_1[2],by_dir_hash_free);
  CRYPTO_free(param_1,"crypto\\x509\\by_dir.c",0x8c);
  return;
}



// FUNCTION 143cf98c0 by_dir_hash_free body=33 status=ok
// SIG undefined by_dir_hash_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void by_dir_hash_free(undefined8 param_1)

{
  CRYPTO_free(param_1,"crypto\\x509\\by_dir.c",0x7b);
  return;
}



// FUNCTION 143cf98f0 by_file_ctrl body=196 status=ok
// SIG undefined by_file_ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool by_file_ctrl(undefined8 param_1,int param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143cf9900;
  bVar3 = false;
  if (param_2 == 1) {
    if (param_4 == 3) {
      pcVar2 = (char *)X509_get_default_cert_file_env();
      pcVar2 = getenv(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar2 = (char *)X509_get_default_cert_file();
      }
      iVar1 = X509_load_cert_crl_file(param_1,pcVar2,1);
      bVar3 = iVar1 != 0;
      if (!bVar3) {
        ERR_put_error(0xb,0x65,0x68,"crypto\\x509\\by_file.c",0x3c,uVar4);
        return false;
      }
    }
    else {
      if (param_4 == 1) {
        iVar1 = X509_load_cert_crl_file(param_1,param_3,1);
        return iVar1 != 0;
      }
      iVar1 = X509_load_cert_file(param_1,param_3,param_4);
      bVar3 = iVar1 != 0;
    }
  }
  return bVar3;
}



// FUNCTION 143cf99c0 FUN_143cf99c0 body=8 status=ok
// SIG undefined FUN_143cf99c0(void)

undefined ** FUN_143cf99c0(void)

{
  return &PTR_s_Load_file_into_cache_146836a80;
}



// FUNCTION 143cf99d0 X509_load_cert_crl_file body=382 status=ok
// SIG undefined X509_load_cert_crl_file(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong X509_load_cert_crl_file(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  
  uVar8 = 0x143cf99e1;
  uVar6 = 0;
  if (param_3 != 1) {
    uVar2 = X509_load_cert_file();
    return uVar2;
  }
  lVar3 = BIO_new_file(param_2,&DAT_145d71df8);
  if (lVar3 == 0) {
    ERR_put_error(0xb,0x84,2,"crypto\\x509\\by_file.c",199,uVar8);
    return 0;
  }
  lVar4 = PEM_X509_INFO_read_bio(lVar3,0,0,&DAT_143f3f584);
  BIO_free(lVar3);
  if (lVar4 == 0) {
    ERR_put_error(0xb,0x84,9,"crypto\\x509\\by_file.c",0xcd,uVar8);
    return 0;
  }
  iVar7 = 0;
  iVar1 = OPENSSL_sk_num(lVar4);
  if (0 < iVar1) {
    do {
      plVar5 = (longlong *)OPENSSL_sk_value(lVar4,iVar7);
      if (*plVar5 != 0) {
        iVar1 = X509_STORE_add_cert(*(undefined8 *)(param_1 + 0x18));
        if (iVar1 == 0) goto LAB_143cf9b22;
        uVar6 = uVar6 + 1;
      }
      if (plVar5[1] != 0) {
        iVar1 = X509_STORE_add_crl(*(undefined8 *)(param_1 + 0x18));
        if (iVar1 == 0) goto LAB_143cf9b22;
        uVar6 = uVar6 + 1;
      }
      iVar7 = iVar7 + 1;
      iVar1 = OPENSSL_sk_num(lVar4);
    } while (iVar7 < iVar1);
    if (uVar6 != 0) goto LAB_143cf9b22;
  }
  ERR_put_error(0xb,0x84,0x88,"crypto\\x509\\by_file.c",0xdf);
LAB_143cf9b22:
  OPENSSL_sk_pop_free(lVar4,X509_INFO_free);
  return (ulonglong)uVar6;
}



// FUNCTION 143cf9b50 X509_load_cert_file body=421 status=ok
// SIG undefined X509_load_cert_file(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int X509_load_cert_file(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  uVar10 = 0x143cf9b74;
  iVar6 = 0;
  iVar7 = 0;
  lVar5 = 0;
  uVar3 = BIO_s_file();
  lVar4 = BIO_new(uVar3);
  if ((lVar4 == 0) || (iVar1 = BIO_ctrl(lVar4,0x6c,3,param_2), iVar1 < 1)) {
    uVar9 = 0x54;
    uVar8 = 2;
  }
  else if (param_3 == 1) {
    lVar5 = PEM_read_bio_X509_AUX(lVar4,0,0,&DAT_143f3f584);
    while (iVar6 = 0, lVar5 != 0) {
      iVar1 = X509_STORE_add_cert(*(undefined8 *)(param_1 + 0x18),lVar5);
      if (iVar1 == 0) goto LAB_143cf9cc4;
      iVar7 = iVar7 + 1;
      X509_free(lVar5);
      lVar5 = PEM_read_bio_X509_AUX(lVar4,0,0,&DAT_143f3f584);
    }
    uVar2 = ERR_peek_last_error();
    if (((uVar2 & 0xfff) == 0x6c) && (0 < iVar7)) {
      ERR_clear_error();
LAB_143cf9c7e:
      iVar6 = iVar7;
      if (iVar6 != 0) goto LAB_143cf9cc4;
      uVar9 = 0x7c;
      uVar8 = 0x87;
    }
    else {
      uVar9 = 0x61;
      uVar8 = 9;
    }
  }
  else if (param_3 == 2) {
    lVar5 = d2i_X509_bio(lVar4,0);
    if (lVar5 != 0) {
      iVar7 = X509_STORE_add_cert(*(undefined8 *)(param_1 + 0x18),lVar5);
      if (iVar7 == 0) goto LAB_143cf9cc4;
      goto LAB_143cf9c7e;
    }
    uVar9 = 0x70;
    uVar8 = 0xd;
  }
  else {
    uVar9 = 0x78;
    uVar8 = 100;
  }
  ERR_put_error(0xb,0x6f,uVar8,"crypto\\x509\\by_file.c",uVar9,uVar10);
LAB_143cf9cc4:
  X509_free(lVar5);
  BIO_free(lVar4);
  return iVar6;
}



// FUNCTION 143cf9d00 X509_load_crl_file body=421 status=ok
// SIG undefined X509_load_crl_file(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int X509_load_crl_file(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  uVar10 = 0x143cf9d24;
  iVar6 = 0;
  iVar7 = 0;
  lVar5 = 0;
  uVar3 = BIO_s_file();
  lVar4 = BIO_new(uVar3);
  if ((lVar4 == 0) || (iVar1 = BIO_ctrl(lVar4,0x6c,3,param_2), iVar1 < 1)) {
    uVar9 = 0x8d;
    uVar8 = 2;
  }
  else if (param_3 == 1) {
    lVar5 = PEM_read_bio_X509_CRL(lVar4,0,0,&DAT_143f3f584);
    while (iVar6 = 0, lVar5 != 0) {
      iVar1 = X509_STORE_add_crl(*(undefined8 *)(param_1 + 0x18),lVar5);
      if (iVar1 == 0) goto LAB_143cf9e74;
      iVar7 = iVar7 + 1;
      X509_CRL_free(lVar5);
      lVar5 = PEM_read_bio_X509_CRL(lVar4,0,0,&DAT_143f3f584);
    }
    uVar2 = ERR_peek_last_error();
    if (((uVar2 & 0xfff) == 0x6c) && (0 < iVar7)) {
      ERR_clear_error();
LAB_143cf9e2e:
      iVar6 = iVar7;
      if (iVar6 != 0) goto LAB_143cf9e74;
      uVar9 = 0xb5;
      uVar8 = 0x89;
    }
    else {
      uVar9 = 0x9a;
      uVar8 = 9;
    }
  }
  else if (param_3 == 2) {
    lVar5 = d2i_X509_CRL_bio(lVar4,0);
    if (lVar5 != 0) {
      iVar7 = X509_STORE_add_crl(*(undefined8 *)(param_1 + 0x18),lVar5);
      if (iVar7 == 0) goto LAB_143cf9e74;
      goto LAB_143cf9e2e;
    }
    uVar9 = 0xa9;
    uVar8 = 0xd;
  }
  else {
    uVar9 = 0xb1;
    uVar8 = 100;
  }
  ERR_put_error(0xb,0x70,uVar8,"crypto\\x509\\by_file.c",uVar9,uVar10);
LAB_143cf9e74:
  X509_CRL_free(lVar5);
  BIO_free(lVar4);
  return iVar6;
}



// FUNCTION 143cf9eb0 X509_STORE_load_locations body=198 status=ok
// SIG undefined X509_STORE_load_locations(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_STORE_load_locations(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143cf9ec5;
  if (param_2 != 0) {
    uVar2 = FUN_143cf99c0();
    lVar3 = X509_STORE_add_lookup(param_1,uVar2);
    if (lVar3 == 0) {
      return 0;
    }
    iVar1 = X509_LOOKUP_ctrl(lVar3,1,param_2,1,0);
    if (iVar1 != 1) {
      return 0;
    }
  }
  if (param_3 == 0) {
    if (param_2 != 0) {
      return 1;
    }
  }
  else {
    uVar2 = FUN_143cf95f0();
    lVar3 = X509_STORE_add_lookup(param_1,uVar2);
    if ((lVar3 != 0) && (iVar1 = X509_LOOKUP_ctrl(lVar3,2,param_3,1,0,uVar4), iVar1 == 1)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143cf9f80 X509_STORE_set_default_paths body=144 status=ok
// SIG undefined X509_STORE_set_default_paths(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_STORE_set_default_paths(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143cf9f8c;
  uVar1 = FUN_143cf99c0();
  lVar2 = X509_STORE_add_lookup(param_1,uVar1);
  if (lVar2 != 0) {
    X509_LOOKUP_ctrl(lVar2,1,0,3,0,uVar3);
    uVar1 = FUN_143cf95f0();
    lVar2 = X509_STORE_add_lookup(param_1,uVar1);
    if (lVar2 != 0) {
      X509_LOOKUP_ctrl(lVar2,2,0,3,0);
      ERR_clear_error();
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143cfa010 X509_VERIFY_PARAM_free body=151 status=ok
// SIG undefined X509_VERIFY_PARAM_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_VERIFY_PARAM_free(longlong param_1)

{
  if (param_1 != 0) {
    OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x28),ASN1_OBJECT_free);
    OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x30),str_free);
    CRYPTO_free(*(undefined8 *)(param_1 + 0x40),"crypto\\x509\\x509_vpm.c",0x68);
    CRYPTO_free(*(undefined8 *)(param_1 + 0x48),"crypto\\x509\\x509_vpm.c",0x69);
    CRYPTO_free(*(undefined8 *)(param_1 + 0x58),"crypto\\x509\\x509_vpm.c",0x6a);
    CRYPTO_free(param_1,"crypto\\x509\\x509_vpm.c",0x6b);
  }
  return;
}



// FUNCTION 143cfa0b0 X509_VERIFY_PARAM_inherit body=648 status=ok
// SIG undefined X509_VERIFY_PARAM_inherit(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_VERIFY_PARAM_inherit(longlong param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  if (param_2 == 0) {
    return 1;
  }
  iVar4 = 0;
  uVar9 = *(uint *)(param_2 + 0x10) | *(uint *)(param_1 + 0x10);
  if ((uVar9 & 0x10) != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if ((uVar9 & 8) != 0) {
    return 1;
  }
  uVar10 = uVar9 & 1;
  if ((uVar9 & 2) == 0) {
    bVar2 = false;
    if ((*(int *)(param_2 + 0x18) != 0) &&
       ((bVar1 = false, uVar10 != 0 || (bVar1 = false, bVar2 = false, *(int *)(param_1 + 0x18) == 0)
        ))) goto LAB_143cfa128;
LAB_143cfa130:
    if ((*(int *)(param_2 + 0x1c) != 0) && ((uVar10 != 0 || (*(int *)(param_1 + 0x1c) == 0))))
    goto LAB_143cfa141;
LAB_143cfa14c:
    if ((*(int *)(param_2 + 0x20) != -1) && ((uVar10 != 0 || (*(int *)(param_1 + 0x20) == -1))))
    goto LAB_143cfa15d;
LAB_143cfa168:
    if ((*(int *)(param_2 + 0x24) != -1) && ((uVar10 != 0 || (*(int *)(param_1 + 0x24) == -1))))
    goto LAB_143cfa179;
LAB_143cfa189:
    uVar8 = *(uint *)(param_1 + 0x14);
    if ((uVar8 & 2) == 0) goto LAB_143cfa191;
  }
  else {
    bVar1 = true;
LAB_143cfa128:
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
    bVar2 = bVar1;
    if (!bVar1) goto LAB_143cfa130;
LAB_143cfa141:
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    if (!bVar2) goto LAB_143cfa14c;
LAB_143cfa15d:
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    if (!bVar2) goto LAB_143cfa168;
LAB_143cfa179:
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    if (!bVar2) goto LAB_143cfa189;
    uVar8 = *(uint *)(param_1 + 0x14);
LAB_143cfa191:
    uVar8 = uVar8 & 0xfffffffd;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(uint *)(param_1 + 0x14) = uVar8;
  }
  if ((uVar9 & 4) != 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    uVar8 = 0;
  }
  *(uint *)(param_1 + 0x14) = *(uint *)(param_2 + 0x14) | uVar8;
  if ((bVar2) ||
     ((*(longlong *)(param_2 + 0x28) != 0 && ((uVar10 != 0 || (*(longlong *)(param_1 + 0x28) == 0)))
      ))) {
    lVar7 = *(longlong *)(param_2 + 0x28);
    OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x28),ASN1_OBJECT_free);
    if (lVar7 == 0) {
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    else {
      lVar5 = OPENSSL_sk_new_null();
      *(longlong *)(param_1 + 0x28) = lVar5;
      if (lVar5 == 0) {
        return 0;
      }
      iVar3 = OPENSSL_sk_num(lVar7);
      if (0 < iVar3) {
        do {
          uVar6 = OPENSSL_sk_value(lVar7,iVar4);
          lVar5 = OBJ_dup(uVar6);
          if (lVar5 == 0) {
            return 0;
          }
          iVar3 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 0x28),lVar5);
          if (iVar3 == 0) {
            ASN1_OBJECT_free(lVar5);
            return 0;
          }
          iVar4 = iVar4 + 1;
          iVar3 = OPENSSL_sk_num(lVar7);
        } while (iVar4 < iVar3);
      }
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x80;
    }
    if (!bVar2) goto LAB_143cfa25d;
LAB_143cfa26e:
    OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x30),str_free);
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (*(longlong *)(param_2 + 0x30) != 0) {
      lVar7 = OPENSSL_sk_deep_copy(*(longlong *)(param_2 + 0x30),str_copy,str_free);
      *(longlong *)(param_1 + 0x30) = lVar7;
      if (lVar7 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (!bVar2) goto LAB_143cfa2b2;
LAB_143cfa2c3:
    iVar4 = int_x509_param_set1(param_1 + 0x48,param_1 + 0x50,*(undefined8 *)(param_2 + 0x48),
                                *(undefined8 *)(param_2 + 0x50));
    if (iVar4 == 0) {
      return 0;
    }
    if (bVar2) goto LAB_143cfa2f2;
  }
  else {
LAB_143cfa25d:
    if ((*(longlong *)(param_2 + 0x30) != 0) &&
       ((uVar10 != 0 || (*(longlong *)(param_1 + 0x30) == 0)))) goto LAB_143cfa26e;
LAB_143cfa2b2:
    if ((*(longlong *)(param_2 + 0x48) != 0) &&
       ((uVar10 != 0 || (*(longlong *)(param_1 + 0x48) == 0)))) goto LAB_143cfa2c3;
  }
  if (*(longlong *)(param_2 + 0x58) == 0) {
    return 1;
  }
  if ((uVar10 == 0) && (*(longlong *)(param_1 + 0x58) != 0)) {
    return 1;
  }
LAB_143cfa2f2:
  iVar4 = X509_VERIFY_PARAM_set1_ip
                    (param_1,*(undefined8 *)(param_2 + 0x58),*(undefined8 *)(param_2 + 0x60));
  if (iVar4 != 0) {
    return 1;
  }
  return 0;
}



// FUNCTION 143cfa340 X509_VERIFY_PARAM_lookup body=113 status=ok
// SIG undefined X509_VERIFY_PARAM_lookup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_VERIFY_PARAM_lookup(undefined8 param_1)

{
  int iVar1;
  undefined8 local_78 [14];
  undefined8 uStack_8;
  
  uStack_8 = 0x143cfa34a;
  local_78[0] = param_1;
  if (DAT_146bcb3e0 != 0) {
    iVar1 = OPENSSL_sk_find(DAT_146bcb3e0,local_78);
    if (-1 < iVar1) {
      OPENSSL_sk_value(DAT_146bcb3e0,iVar1);
      return;
    }
  }
  OBJ_bsearch_(local_78,&PTR_s_default_145d71e40,5,0x68,&LAB_143cfa7c0);
  return;
}



// FUNCTION 143cfa3c0 X509_VERIFY_PARAM_move_peername body=103 status=ok
// SIG undefined X509_VERIFY_PARAM_move_peername(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_VERIFY_PARAM_move_peername(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x40);
  }
  if (*(longlong *)(param_1 + 0x40) != lVar1) {
    CRYPTO_free(*(longlong *)(param_1 + 0x40),"crypto\\x509\\x509_vpm.c",0x1a1);
    *(longlong *)(param_1 + 0x40) = lVar1;
  }
  if (param_2 != 0) {
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 143cfa430 X509_VERIFY_PARAM_new body=96 status=ok
// SIG undefined X509_VERIFY_PARAM_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong X509_VERIFY_PARAM_new(void)

{
  longlong lVar1;
  
  lVar1 = CRYPTO_zalloc(0x68,"crypto\\x509\\x509_vpm.c",0x56);
  if (lVar1 == 0) {
    ERR_put_error(0xb,0x9f,0x41,"crypto\\x509\\x509_vpm.c",0x58);
    return 0;
  }
  *(undefined4 *)(lVar1 + 0x1c) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0xffffffffffffffff;
  return lVar1;
}



// FUNCTION 143cfa490 X509_VERIFY_PARAM_set1 body=52 status=ok
// SIG undefined X509_VERIFY_PARAM_set1(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_VERIFY_PARAM_set1(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = uVar1 | 1;
  X509_VERIFY_PARAM_inherit();
  *(uint *)(param_1 + 0x10) = uVar1;
  return;
}



// FUNCTION 143cfa4d0 X509_VERIFY_PARAM_set1_host body=30 status=ok
// SIG undefined X509_VERIFY_PARAM_set1_host(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_VERIFY_PARAM_set1_host(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int_x509_param_set_hosts(param_1,0,param_2,param_3);
  return;
}



// FUNCTION 143cfa4f0 X509_VERIFY_PARAM_set1_ip body=61 status=ok
// SIG undefined X509_VERIFY_PARAM_set1_ip(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_VERIFY_PARAM_set1_ip(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (((param_3 & 0xffffffffffffffeb) == 0) && (param_3 != 0x14)) {
    uVar1 = int_x509_param_set1(param_1 + 0x58,param_1 + 0x60,param_2,param_3);
    return uVar1;
  }
  return 0;
}



// FUNCTION 143cfa530 FUN_143cfa530 body=29 status=ok
// SIG undefined FUN_143cfa530(void)

undefined8 FUN_143cfa530(longlong param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 | *(uint *)(param_1 + 0x14);
  *(uint *)(param_1 + 0x14) = uVar1;
  if ((param_2 & 0x780) != 0) {
    *(uint *)(param_1 + 0x14) = uVar1 | 0x80;
  }
  return 1;
}



// FUNCTION 143cfa550 int_x509_param_set1 body=171 status=ok
// SIG undefined int_x509_param_set1(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
int_x509_param_set1(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  
  if (param_3 == 0) {
    param_4 = 0;
    lVar1 = param_4;
  }
  else {
    if (param_4 == 0) {
      param_4 = -1;
      do {
        param_4 = param_4 + 1;
      } while (*(char *)(param_3 + param_4) != '\0');
    }
    lVar1 = CRYPTO_memdup(param_3,param_4,"crypto\\x509\\x509_vpm.c",0xf7);
    if (lVar1 == 0) {
      return 0;
    }
  }
  CRYPTO_free(*param_1,"crypto\\x509\\x509_vpm.c",0xfe);
  *param_1 = lVar1;
  if (param_2 != (longlong *)0x0) {
    *param_2 = param_4;
  }
  return 1;
}



// FUNCTION 143cfa600 int_x509_param_set_hosts body=343 status=ok
// SIG undefined int_x509_param_set_hosts(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 int_x509_param_set_hosts(longlong param_1,int param_2,void *param_3,ulonglong param_4)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  size_t _MaxCount;
  
  if (param_4 == 0) {
    if (param_3 != (void *)0x0) {
      param_4 = 0xffffffffffffffff;
      do {
        param_4 = param_4 + 1;
      } while (*(char *)((longlong)param_3 + param_4) != '\0');
      goto LAB_143cfa66a;
    }
LAB_143cfa67b:
    param_4 = 0;
  }
  else {
    if (param_3 == (void *)0x0) goto LAB_143cfa67b;
    _MaxCount = param_4 - 1;
    if (param_4 < 2) {
      _MaxCount = param_4;
    }
    pvVar2 = _guard_xfg_dispatch_icall_nop(param_3,0,_MaxCount);
    if (pvVar2 != (void *)0x0) {
      return 0;
    }
LAB_143cfa66a:
    if ((param_4 != 0) && (*(char *)((longlong)param_3 + (param_4 - 1)) == '\0')) {
      param_4 = param_4 - 1;
    }
  }
  if (param_2 == 0) {
    OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x30),str_free);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  if ((param_3 == (void *)0x0) || (param_4 == 0)) {
LAB_143cfa73d:
    uVar5 = 1;
  }
  else {
    lVar3 = CRYPTO_strndup(param_3,param_4,"crypto\\x509\\x509_vpm.c",0x3b);
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x30);
      if (lVar4 == 0) {
        lVar4 = OPENSSL_sk_new_null();
        *(longlong *)(param_1 + 0x30) = lVar4;
        if (lVar4 == 0) {
          CRYPTO_free(lVar3,"crypto\\x509\\x509_vpm.c",0x41);
          return 0;
        }
      }
      iVar1 = OPENSSL_sk_push(lVar4,lVar3);
      if (iVar1 != 0) goto LAB_143cfa73d;
      CRYPTO_free(lVar3,"crypto\\x509\\x509_vpm.c",0x46);
      iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x30));
      if (iVar1 == 0) {
        OPENSSL_sk_free(*(undefined8 *)(param_1 + 0x30));
        *(undefined8 *)(param_1 + 0x30) = 0;
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 143cfa760 str_copy body=33 status=ok
// SIG undefined str_copy(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void str_copy(undefined8 param_1)

{
  CRYPTO_strdup(param_1,"crypto\\x509\\x509_vpm.c",0x1c);
  return;
}



// FUNCTION 143cfa790 str_free body=33 status=ok
// SIG undefined str_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void str_free(undefined8 param_1)

{
  CRYPTO_free(param_1,"crypto\\x509\\x509_vpm.c",0x21);
  return;
}



// FUNCTION 143cfa7f0 x509_name_ex_d2i body=713 status=ok
// SIG undefined x509_name_ex_d2i(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong x509_name_ex_d2i(longlong *param_1,undefined8 *param_2,int param_3,undefined8 param_4,
                          undefined4 param_5,undefined4 param_6,undefined1 param_7,
                          undefined8 param_8)

{
  void *_Src;
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  undefined8 local_res10;
  void *local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x143cfa7ff;
  _Src = (void *)*param_2;
  iVar2 = 0x100000;
  if (param_3 < 0x100001) {
    iVar2 = param_3;
  }
  local_res10 = 0;
  local_28 = _Src;
  uVar4 = ASN1_item_ex_d2i(&local_res10,&local_28,iVar2,&DAT_145d72150,param_5,param_6,param_7,
                           param_8);
  if ((int)uVar4 < 1) {
    return uVar4;
  }
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    BUF_MEM_free(puVar1[2]);
    OPENSSL_sk_pop_free(*puVar1,X509_NAME_ENTRY_free);
    CRYPTO_free(puVar1[3],"crypto\\x509\\x_name.c",0x7b);
    CRYPTO_free(puVar1,"crypto\\x509\\x_name.c",0x7c);
    *param_1 = 0;
  }
  plVar5 = (longlong *)CRYPTO_zalloc(0x28,"crypto\\x509\\x_name.c");
  if (plVar5 != (longlong *)0x0) {
    lVar6 = OPENSSL_sk_new_null();
    *plVar5 = lVar6;
    if (lVar6 != 0) {
      lVar6 = BUF_MEM_new();
      plVar5[2] = lVar6;
      if (lVar6 != 0) {
        *(undefined4 *)(plVar5 + 1) = 1;
        lVar6 = BUF_MEM_grow(lVar6,(longlong)local_28 - (longlong)_Src);
        if (lVar6 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (*(void **)(plVar5[2] + 8),_Src,(longlong)local_28 - (longlong)_Src);
          iVar9 = 0;
          iVar2 = OPENSSL_sk_num(local_res10);
          if (0 < iVar2) {
            do {
              uVar7 = OPENSSL_sk_value(local_res10,iVar9);
              iVar8 = 0;
              iVar2 = OPENSSL_sk_num(uVar7);
              if (0 < iVar2) {
                do {
                  lVar6 = OPENSSL_sk_value(uVar7,iVar8);
                  *(int *)(lVar6 + 0x10) = iVar9;
                  iVar2 = OPENSSL_sk_push(*plVar5,lVar6);
                  if (iVar2 == 0) goto LAB_143cfaa11;
                  OPENSSL_sk_set(uVar7,iVar8,0);
                  iVar8 = iVar8 + 1;
                  iVar2 = OPENSSL_sk_num(uVar7);
                } while (iVar8 < iVar2);
              }
              iVar9 = iVar9 + 1;
              iVar2 = OPENSSL_sk_num(local_res10);
            } while (iVar9 < iVar2);
          }
          uVar3 = x509_name_canon(plVar5);
          if (uVar3 != 0) {
            OPENSSL_sk_pop_free(local_res10,FUN_143cfb1c0);
            *(undefined4 *)(plVar5 + 1) = 0;
            *param_1 = (longlong)plVar5;
            *param_2 = local_28;
            return (ulonglong)uVar3;
          }
        }
LAB_143cfaa11:
        ASN1_item_free(plVar5,&DAT_145d721b8);
        goto LAB_143cfaa66;
      }
    }
  }
  ERR_put_error(0xd,0xab,0x41,"crypto\\x509\\x_name.c",0x69);
  if (plVar5 != (longlong *)0x0) {
    OPENSSL_sk_free(*plVar5);
    CRYPTO_free(plVar5,"crypto\\x509\\x_name.c",0x6c);
  }
LAB_143cfaa66:
  OPENSSL_sk_pop_free(local_res10,FUN_143cfb1e0);
  ERR_put_error(0xd,0x9e,0x3a,"crypto\\x509\\x_name.c",0xce);
  return 0;
}



// FUNCTION 143cfaac0 x509_name_ex_i2d body=467 status=ok
// SIG undefined x509_name_ex_i2d(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong x509_name_ex_i2d(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  longlong local_res8;
  undefined8 local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x143cfaade;
  puVar2 = (undefined8 *)*param_1;
  if (*(int *)(puVar2 + 1) == 0) {
LAB_143cfac13:
    uVar1 = *(uint *)puVar2[2];
    if (param_2 != (longlong *)0x0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)*param_2,*(void **)((uint *)puVar2[2] + 2),(longlong)(int)uVar1);
      *param_2 = *param_2 + (longlong)(int)uVar1;
    }
    return (ulonglong)uVar1;
  }
  lVar5 = 0;
  iVar7 = -1;
  local_res8 = OPENSSL_sk_new_null();
  if (local_res8 != 0) {
    iVar8 = 0;
    iVar3 = OPENSSL_sk_num(*puVar2);
    if (0 < iVar3) {
      do {
        lVar4 = OPENSSL_sk_value(*puVar2,iVar8);
        if (*(int *)(lVar4 + 0x10) != iVar7) {
          lVar5 = OPENSSL_sk_new_null();
          if (lVar5 == 0) goto LAB_143cfac59;
          iVar7 = OPENSSL_sk_push(local_res8,lVar5);
          if (iVar7 == 0) {
            OPENSSL_sk_free(lVar5);
            goto LAB_143cfac59;
          }
          iVar7 = *(int *)(lVar4 + 0x10);
        }
        iVar3 = OPENSSL_sk_push(lVar5,lVar4);
        if (iVar3 == 0) goto LAB_143cfac59;
        iVar8 = iVar8 + 1;
        iVar3 = OPENSSL_sk_num(*puVar2);
      } while (iVar8 < iVar3);
    }
    iVar7 = FUN_143d1cc00(&local_res8,0,&DAT_145d72150,0xffffffff,0xffffffff);
    uVar6 = (ulonglong)iVar7;
    lVar5 = BUF_MEM_grow(puVar2[2],uVar6);
    if (lVar5 != 0) {
      local_28 = *(undefined8 *)(puVar2[2] + 8);
      FUN_143d1cc00(&local_res8,&local_28,&DAT_145d72150,0xffffffff,0xffffffff);
      OPENSSL_sk_pop_free(local_res8,FUN_143cfb1c0);
      *(undefined4 *)(puVar2 + 1) = 0;
      if (-1 < iVar7) {
        uVar6 = x509_name_canon(puVar2);
        if ((int)uVar6 < 0) {
          return uVar6;
        }
        goto LAB_143cfac13;
      }
      goto LAB_143cfac8f;
    }
  }
LAB_143cfac59:
  OPENSSL_sk_pop_free(local_res8,FUN_143cfb1c0);
  ERR_put_error(0xd,0xcb,0x41,"crypto\\x509\\x_name.c",0x114);
  uVar6 = 0xffffffff;
LAB_143cfac8f:
  return uVar6 & 0xffffffff;
}



// FUNCTION 143cfaca0 x509_name_ex_new body=183 status=ok
// SIG undefined x509_name_ex_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 x509_name_ex_new(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143cfacb0;
  plVar1 = (longlong *)CRYPTO_zalloc(0x28,"crypto\\x509\\x_name.c",0x5c);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = OPENSSL_sk_new_null();
    *plVar1 = lVar2;
    if (lVar2 != 0) {
      lVar2 = BUF_MEM_new();
      plVar1[2] = lVar2;
      if (lVar2 != 0) {
        *(undefined4 *)(plVar1 + 1) = 1;
        *param_1 = plVar1;
        return 1;
      }
    }
  }
  ERR_put_error(0xd,0xab,0x41,"crypto\\x509\\x_name.c",0x69,uVar3);
  if (plVar1 != (longlong *)0x0) {
    OPENSSL_sk_free(*plVar1);
    CRYPTO_free(plVar1,"crypto\\x509\\x_name.c",0x6c);
  }
  return 0;
}



// FUNCTION 143cfad60 x509_name_ex_free body=120 status=ok
// SIG undefined x509_name_ex_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void x509_name_ex_free(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((param_1 != (longlong *)0x0) && (puVar1 = (undefined8 *)*param_1, puVar1 != (undefined8 *)0x0)
     ) {
    BUF_MEM_free(puVar1[2]);
    OPENSSL_sk_pop_free(*puVar1,X509_NAME_ENTRY_free);
    CRYPTO_free(puVar1[3],"crypto\\x509\\x_name.c",0x7b);
    CRYPTO_free(puVar1,"crypto\\x509\\x_name.c",0x7c);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 143cfade0 x509_name_ex_print body=49 status=ok
// SIG undefined x509_name_ex_print(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
x509_name_ex_print(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = X509_NAME_print_ex(param_1,*param_2,param_3,*(undefined4 *)(param_5 + 4),0x143cfadea);
  uVar2 = 2;
  if (iVar1 < 1) {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143cfae40 X509_NAME_ENTRY_dup body=32 status=ok
// SIG undefined X509_NAME_ENTRY_dup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_NAME_ENTRY_dup(undefined8 param_1)

{
  ASN1_item_dup(&DAT_145d720b0,param_1);
  return;
}



// FUNCTION 143cfae60 X509_NAME_ENTRY_free body=29 status=ok
// SIG undefined X509_NAME_ENTRY_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_NAME_ENTRY_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_145d720b0);
  return;
}



// FUNCTION 143cfae80 X509_NAME_ENTRY_free body=29 status=ok
// SIG undefined X509_NAME_ENTRY_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_NAME_ENTRY_free(void)

{
  ASN1_item_new(&DAT_145d720b0);
  return;
}



// FUNCTION 143cfaea0 X509_NAME_dup body=32 status=ok
// SIG undefined X509_NAME_dup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_NAME_dup(undefined8 param_1)

{
  ASN1_item_dup(&DAT_145d721b8,param_1);
  return;
}



// FUNCTION 143cfaec0 X509_NAME_free body=29 status=ok
// SIG undefined X509_NAME_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_NAME_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_145d721b8);
  return;
}



// FUNCTION 143cfaef0 X509_NAME_free body=29 status=ok
// SIG undefined X509_NAME_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_NAME_free(void)

{
  ASN1_item_new(&DAT_145d721b8);
  return;
}



// FUNCTION 143cfaf10 X509_NAME_print body=364 status=ok
// SIG undefined X509_NAME_print(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_NAME_print(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  
  pcVar2 = (char *)X509_NAME_oneline(param_2,0,0);
  if (pcVar2 == (char *)0x0) {
    return 0;
  }
  if (*pcVar2 == '\0') {
    CRYPTO_free(pcVar2,"crypto\\x509\\x_name.c",0x1f8);
    return 1;
  }
  pcVar4 = pcVar2 + 1;
  pcVar5 = pcVar4;
  for (; *pcVar4 != '/'; pcVar4 = pcVar4 + 1) {
LAB_143cfafc6:
    if (*pcVar4 == '\0') goto LAB_143cfafcb;
LAB_143cfb009:
  }
  iVar1 = ossl_ctype_check((int)pcVar4[1],2);
  if (iVar1 == 0) goto LAB_143cfafc6;
  if (pcVar4[2] != '=') {
    iVar1 = ossl_ctype_check((int)pcVar4[2],2);
    if ((iVar1 == 0) || (pcVar4[3] != '=')) goto LAB_143cfafc6;
  }
LAB_143cfafcb:
  iVar6 = (int)pcVar4 - (int)pcVar5;
  iVar1 = BIO_write(param_1,pcVar5,iVar6);
  if (iVar1 == iVar6) {
    pcVar5 = pcVar4 + 1;
    if (*pcVar4 != '\0') {
      iVar1 = BIO_write(param_1,&DAT_145cbbc74,2);
      if (iVar1 != 2) goto LAB_143cfb02a;
      if (*pcVar4 != '\0') goto LAB_143cfb009;
    }
    CRYPTO_free(pcVar2,"crypto\\x509\\x_name.c",0x214);
    uVar3 = 1;
  }
  else {
LAB_143cfb02a:
    ERR_put_error(0xb,0x75,7,"crypto\\x509\\x_name.c",0x217);
    CRYPTO_free(pcVar2,"crypto\\x509\\x_name.c",0x218);
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 143cfb080 X509_NAME_set body=110 status=ok
// SIG undefined X509_NAME_set(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool X509_NAME_set(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*param_1 == param_2) {
    return *param_1 != 0;
  }
  lVar1 = ASN1_item_dup(&DAT_145d721b8);
  if (lVar1 == 0) {
    return false;
  }
  ASN1_item_free(*param_1,&DAT_145d721b8);
  *param_1 = lVar1;
  return true;
}



// FUNCTION 143cfb0f0 X509_NAME_free body=29 status=ok
// SIG undefined X509_NAME_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_NAME_free(void)

{
  ASN1_item_d2i();
  return;
}



// FUNCTION 143cfb110 i2d_X509_NAME body=29 status=ok
// SIG undefined i2d_X509_NAME(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_X509_NAME(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_145d721b8);
  return;
}



// FUNCTION 143cfb130 i2d_name_canon body=140 status=ok
// SIG undefined i2d_name_canon(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong i2d_name_canon(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  undefined8 local_res8;
  undefined8 uVar5;
  
  uVar5 = 0x143cfb14a;
  uVar4 = 0;
  iVar3 = 0;
  iVar1 = OPENSSL_sk_num();
  if (0 < iVar1) {
    do {
      local_res8 = OPENSSL_sk_value(param_1,iVar3);
      uVar2 = FUN_143d1cc00(&local_res8,param_2,&DAT_145d72100,0xffffffff,0xffffffff,uVar5);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      uVar4 = uVar4 + (int)uVar2;
      iVar3 = iVar3 + 1;
      iVar1 = OPENSSL_sk_num(param_1);
    } while (iVar3 < iVar1);
  }
  return (ulonglong)uVar4;
}



// FUNCTION 143cfb1c0 FUN_143cfb1c0 body=22 status=ok
// SIG undefined FUN_143cfb1c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143cfb1c0(void)

{
  OPENSSL_sk_free();
  return;
}



// FUNCTION 143cfb1e0 FUN_143cfb1e0 body=29 status=ok
// SIG undefined FUN_143cfb1e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143cfb1e0(undefined8 param_1)

{
  OPENSSL_sk_pop_free(param_1,X509_NAME_ENTRY_free);
  return;
}



// FUNCTION 143cfb200 x509_name_canon body=1006 status=ok
// SIG undefined x509_name_canon(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 x509_name_canon(undefined8 *param_1)

{
  byte *pbVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined8 *local_res8;
  int local_res10;
  int local_res18;
  undefined4 local_res20;
  undefined4 uVar15;
  longlong local_58 [3];
  
  lVar9 = 0;
  local_res20 = 0;
  local_res18 = -1;
  plVar10 = (longlong *)0x0;
  local_res8 = param_1;
  CRYPTO_free(param_1[3],"crypto\\x509\\x_name.c",0x134);
  param_1[3] = 0;
  iVar4 = OPENSSL_sk_num(*param_1);
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    return 1;
  }
  lVar7 = OPENSSL_sk_new_null();
  if (lVar7 == 0) {
    ERR_put_error(0xb,0x9c,0x41,"crypto\\x509\\x_name.c",0x13d);
  }
  else {
    iVar4 = 0;
    local_res10 = 0;
    iVar5 = OPENSSL_sk_num(*param_1);
    iVar6 = -1;
    if (0 < iVar5) {
      do {
        puVar8 = (undefined8 *)OPENSSL_sk_value(*param_1,iVar4);
        if (*(int *)(puVar8 + 2) != iVar6) {
          lVar9 = OPENSSL_sk_new_null();
          if (lVar9 != 0) {
            iVar6 = OPENSSL_sk_push(lVar7,lVar9);
            if (iVar6 != 0) {
              local_res18 = *(int *)(puVar8 + 2);
              goto LAB_143cfb310;
            }
            OPENSSL_sk_free(lVar9);
            ERR_put_error(0xb,0x9c,0x41,"crypto\\x509\\x_name.c",0x148);
          }
          plVar10 = (longlong *)0x0;
          goto LAB_143cfb5b9;
        }
LAB_143cfb310:
        plVar10 = (longlong *)ASN1_item_new(&DAT_145d720b0);
        if (plVar10 == (longlong *)0x0) {
          uVar15 = 0x14f;
          goto LAB_143cfb526;
        }
        lVar11 = OBJ_dup(*puVar8);
        *plVar10 = lVar11;
        if (lVar11 == 0) {
          uVar15 = 0x154;
          goto LAB_143cfb526;
        }
        lVar11 = puVar8[1];
        piVar2 = (int *)plVar10[1];
        uVar12 = ASN1_tag2bit(*(undefined4 *)(lVar11 + 4));
        if ((uVar12 & 0x2956) == 0) {
          iVar6 = ASN1_STRING_copy(piVar2);
          if (iVar6 == 0) goto LAB_143cfb5b9;
        }
        else {
          piVar2[1] = 0xc;
          iVar4 = ASN1_STRING_to_UTF8(piVar2 + 2,lVar11);
          *piVar2 = iVar4;
          if (iVar4 == -1) goto LAB_143cfb5b9;
          pbVar13 = *(byte **)(piVar2 + 2);
          while ((0 < iVar4 && (iVar6 = ossl_ctype_check(*pbVar13,8), iVar6 != 0))) {
            pbVar13 = pbVar13 + 1;
            iVar4 = iVar4 + -1;
          }
          if (0 < iVar4) {
            pbVar14 = pbVar13 + (longlong)iVar4 + -1;
            do {
              iVar6 = ossl_ctype_check(*pbVar14,8);
              if (iVar6 == 0) break;
              pbVar14 = pbVar14 + -1;
              iVar4 = iVar4 + -1;
            } while (0 < iVar4);
          }
          pbVar14 = *(byte **)(piVar2 + 2);
          iVar5 = 0;
          iVar6 = (int)pbVar14;
          if (0 < iVar4) {
            do {
              bVar3 = *pbVar13;
              if ((bVar3 & 0x80) == 0) {
                iVar6 = ossl_ctype_check(bVar3,8);
                if (iVar6 == 0) {
                  bVar3 = ossl_tolower(*pbVar13);
                  *pbVar14 = bVar3;
                  goto LAB_143cfb443;
                }
                *pbVar14 = 0x20;
                do {
                  pbVar1 = pbVar13 + 1;
                  pbVar13 = pbVar13 + 1;
                  iVar5 = iVar5 + 1;
                  iVar6 = ossl_ctype_check(*pbVar1,8);
                } while (iVar6 != 0);
              }
              else {
                *pbVar14 = bVar3;
LAB_143cfb443:
                pbVar13 = pbVar13 + 1;
                iVar5 = iVar5 + 1;
              }
              pbVar14 = pbVar14 + 1;
            } while (iVar5 < iVar4);
            iVar6 = piVar2[2];
          }
          *piVar2 = (int)pbVar14 - iVar6;
          param_1 = local_res8;
          iVar4 = local_res10;
        }
        iVar6 = OPENSSL_sk_push(lVar9,plVar10);
        if (iVar6 == 0) {
          uVar15 = 0x15a;
          goto LAB_143cfb526;
        }
        iVar4 = iVar4 + 1;
        local_res10 = iVar4;
        iVar5 = OPENSSL_sk_num(*param_1);
        iVar6 = local_res18;
      } while (iVar4 < iVar5);
    }
    iVar4 = i2d_name_canon(lVar7,0);
    plVar10 = (longlong *)0x0;
    if (-1 < iVar4) {
      *(int *)(param_1 + 4) = iVar4;
      local_58[0] = CRYPTO_malloc((longlong)iVar4,"crypto\\x509\\x_name.c",0x166);
      if (local_58[0] == 0) {
        uVar15 = 0x168;
LAB_143cfb526:
        ERR_put_error(0xb,0x9c,0x41,"crypto\\x509\\x_name.c",uVar15);
      }
      else {
        param_1[3] = local_58[0];
        iVar6 = 0;
        iVar4 = OPENSSL_sk_num(lVar7);
        if (0 < iVar4) {
          do {
            local_res8 = (undefined8 *)OPENSSL_sk_value(lVar7,iVar6);
            iVar4 = FUN_143d1cc00(&local_res8,local_58,&DAT_145d72100,0xffffffff,0xffffffff);
            if (iVar4 < 0) break;
            iVar6 = iVar6 + 1;
            iVar4 = OPENSSL_sk_num(lVar7);
          } while (iVar6 < iVar4);
        }
        local_res20 = 1;
      }
    }
  }
LAB_143cfb5b9:
  ASN1_item_free(plVar10,&DAT_145d720b0);
  OPENSSL_sk_pop_free(lVar7,FUN_143cfb1e0);
  return local_res20;
}



// FUNCTION 143cfb600 FUN_143cfb600 body=29 status=ok
// SIG undefined FUN_143cfb600(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143cfb600(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_145d722c0);
  return;
}



// FUNCTION 143cfb620 FUN_143cfb620 body=29 status=ok
// SIG undefined FUN_143cfb620(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143cfb620(void)

{
  ASN1_item_d2i();
  return;
}



// FUNCTION 143cfb640 FUN_143cfb640 body=29 status=ok
// SIG undefined FUN_143cfb640(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143cfb640(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_145d72310);
  return;
}



// FUNCTION 143cfb660 X509_CRL_get_ext_d2i body=26 status=ok
// SIG undefined X509_CRL_get_ext_d2i(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_CRL_get_ext_d2i(longlong param_1)

{
  X509v3_get_ext(*(undefined8 *)(param_1 + 0x38));
  return;
}



// FUNCTION 143cfb680 X509_CRL_get_ext_d2i body=26 status=ok
// SIG undefined X509_CRL_get_ext_d2i(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_CRL_get_ext_d2i(longlong param_1)

{
  X509v3_get_ext_by_NID(*(undefined8 *)(param_1 + 0x38));
  return;
}



// FUNCTION 143cfb6a0 X509_CRL_get_ext_d2i body=26 status=ok
// SIG undefined X509_CRL_get_ext_d2i(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_CRL_get_ext_d2i(longlong param_1)

{
  X509V3_get_d2i(*(undefined8 *)(param_1 + 0x38));
  return;
}



// FUNCTION 143cfb6c0 X509_REVOKED_get_ext_d2i body=26 status=ok
// SIG undefined X509_REVOKED_get_ext_d2i(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_REVOKED_get_ext_d2i(longlong param_1)

{
  X509V3_get_d2i(*(undefined8 *)(param_1 + 0x20));
  return;
}



// FUNCTION 143cfb6e0 X509_get_ext_d2i body=26 status=ok
// SIG undefined X509_get_ext_d2i(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_get_ext_d2i(longlong param_1)

{
  X509v3_get_ext(*(undefined8 *)(param_1 + 0x68));
  return;
}



// FUNCTION 143cfb700 X509_get_ext_d2i body=26 status=ok
// SIG undefined X509_get_ext_d2i(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_get_ext_d2i(longlong param_1)

{
  X509v3_get_ext(*(undefined8 *)(param_1 + 0x68));
  return;
}



// FUNCTION 143cfb720 X509_get_ext_d2i body=26 status=ok
// SIG undefined X509_get_ext_d2i(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_get_ext_d2i(longlong param_1)

{
  X509v3_get_ext_by_NID(*(undefined8 *)(param_1 + 0x68));
  return;
}



// FUNCTION 143cfb740 X509_get_ext_d2i body=26 status=ok
// SIG undefined X509_get_ext_d2i(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_get_ext_d2i(longlong param_1)

{
  X509v3_get_ext_count(*(undefined8 *)(param_1 + 0x68));
  return;
}



// FUNCTION 143cfb760 X509_get_ext_d2i body=26 status=ok
// SIG undefined X509_get_ext_d2i(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_get_ext_d2i(longlong param_1)

{
  X509V3_get_d2i(*(undefined8 *)(param_1 + 0x68));
  return;
}



// FUNCTION 143cfb780 ASYNC_WAIT_CTX_free body=149 status=ok
// SIG undefined ASYNC_WAIT_CTX_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASYNC_WAIT_CTX_free(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*param_1;
    while (puVar2 != (undefined8 *)0x0) {
      if ((*(int *)((longlong)puVar2 + 0x24) == 0) && ((code *)puVar2[3] != (code *)0x0)) {
        (*(code *)puVar2[3])(param_1,*puVar2,puVar2[1],puVar2[2]);
      }
      puVar1 = (undefined8 *)puVar2[5];
      CRYPTO_free(puVar2,"crypto\\async\\async_wait.c",0x25);
      puVar2 = puVar1;
    }
    CRYPTO_free(param_1,"crypto\\async\\async_wait.c",0x29);
  }
  return;
}



// FUNCTION 143cfb820 ASYNC_WAIT_CTX_new body=36 status=ok
// SIG undefined ASYNC_WAIT_CTX_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASYNC_WAIT_CTX_new(void)

{
  CRYPTO_zalloc(0x18,"crypto\\async\\async_wait.c",0x11);
  return;
}



// FUNCTION 143cfb850 ASYNC_get_current_job body=62 status=ok
// SIG undefined ASYNC_get_current_job(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ASYNC_get_current_job(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = OPENSSL_init_crypto(0x100,0,param_3,param_4,0x143cfb85a);
  if (iVar1 != 0) {
    lVar2 = CRYPTO_THREAD_get_local(&DAT_146bcb3e8);
    if (lVar2 != 0) {
      return *(undefined8 *)(lVar2 + 0x10);
    }
  }
  return 0;
}



// FUNCTION 143cfb890 ASYNC_start_job body=1130 status=ok
// SIG undefined ASYNC_start_job(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ASYNC_start_job(longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
               void *param_5,size_t param_6)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  LPVOID pvVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  uVar9 = 0x143cfb8a7;
  iVar1 = OPENSSL_init_crypto(0x100,0);
  if (iVar1 != 0) {
    lVar2 = CRYPTO_THREAD_get_local(&DAT_146bcb3e8);
    if (lVar2 != 0) {
LAB_143cfb96e:
      if (*param_1 != 0) {
        *(longlong *)(lVar2 + 0x10) = *param_1;
      }
      while( true ) {
        while (lVar4 = *(longlong *)(lVar2 + 0x10), lVar4 != 0) {
          iVar1 = *(int *)(lVar4 + 0x24);
          if (iVar1 == 3) {
            *param_3 = *(undefined4 *)(lVar4 + 0x20);
            *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 0x28) = 0;
            lVar4 = *(longlong *)(lVar2 + 0x10);
            puVar8 = (undefined8 *)CRYPTO_THREAD_get_local(&DAT_146bcb3ec);
            CRYPTO_free(*(undefined8 *)(lVar4 + 0x18),"crypto\\async\\async.c",0x8b);
            *(undefined8 *)(lVar4 + 0x18) = 0;
            OPENSSL_sk_push(*puVar8,lVar4);
            *(undefined8 *)(lVar2 + 0x10) = 0;
            *param_1 = 0;
            return 3;
          }
          if (iVar1 == 1) {
            *param_1 = lVar4;
            *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 0x24) = 2;
            *(undefined8 *)(lVar2 + 0x10) = 0;
            return 2;
          }
          if (iVar1 != 2) {
            ERR_put_error(0x33,0x69,0x44,"crypto\\async\\async.c",0xd7,uVar9);
            async_release_job(*(undefined8 *)(lVar2 + 0x10));
            *(undefined8 *)(lVar2 + 0x10) = 0;
            *param_1 = 0;
            return 0;
          }
          puVar8 = (undefined8 *)*param_1;
          *(undefined8 **)(lVar2 + 0x10) = puVar8;
          SwitchToFiber((LPVOID)*puVar8);
        }
        puVar8 = (undefined8 *)CRYPTO_THREAD_get_local(&DAT_146bcb3ec);
        if (puVar8 == (undefined8 *)0x0) break;
LAB_143cfba7b:
        puVar5 = (undefined8 *)OPENSSL_sk_pop(*puVar8);
        if (puVar5 == (undefined8 *)0x0) {
          if ((puVar8[2] != 0) && ((ulonglong)puVar8[2] <= (ulonglong)puVar8[1]))
          goto LAB_143cfbc4a;
          puVar5 = (undefined8 *)async_job_new();
          if (puVar5 != (undefined8 *)0x0) {
            pvVar6 = CreateFiber(0,FUN_143d3d410,(LPVOID)0x0);
            *puVar5 = pvVar6;
            if (pvVar6 == (LPVOID)0x0) {
              async_job_free(puVar5);
              *(undefined8 *)(lVar2 + 0x10) = 0;
              return 1;
            }
            puVar8[1] = puVar8[1] + 1;
          }
        }
        *(undefined8 **)(lVar2 + 0x10) = puVar5;
        if (puVar5 == (undefined8 *)0x0) {
          return 1;
        }
        if (param_5 == (void *)0x0) {
          puVar5[3] = 0;
        }
        else {
          uVar7 = CRYPTO_malloc(param_6,"crypto\\async\\async.c",0xe3);
          *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 0x18) = uVar7;
          _Dst = *(void **)(*(longlong *)(lVar2 + 0x10) + 0x18);
          if (_Dst == (void *)0x0) {
            ERR_put_error(0x33,0x69,0x41,"crypto\\async\\async.c",0xe5);
            async_release_job(*(undefined8 *)(lVar2 + 0x10));
            *(undefined8 *)(lVar2 + 0x10) = 0;
            return 0;
          }
          _guard_xfg_dispatch_icall_nop(_Dst,param_5,param_6);
        }
        *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 0x10) = param_4;
        *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 0x28) = param_2;
        SwitchToFiber((LPVOID)**(undefined8 **)(lVar2 + 0x10));
      }
      iVar1 = OPENSSL_init_crypto(0x100,0);
      if ((iVar1 == 0) || (iVar1 = ossl_init_thread_start(1), iVar1 == 0)) goto LAB_143cfbc4a;
      plVar3 = (longlong *)CRYPTO_zalloc(0x18,"crypto\\async\\async.c",0x14c);
      if (plVar3 == (longlong *)0x0) {
        ERR_put_error(0x33,0x65,0x41,"crypto\\async\\async.c",0x14e);
        *(undefined8 *)(lVar2 + 0x10) = 0;
        return 1;
      }
      lVar4 = OPENSSL_sk_new_reserve(0,0);
      *plVar3 = lVar4;
      if (lVar4 == 0) {
        ERR_put_error(0x33,0x65,0x41,"crypto\\async\\async.c",0x154);
        uVar9 = 0x155;
      }
      else {
        plVar3[2] = 0;
        plVar3[1] = 0;
        iVar1 = CRYPTO_THREAD_set_local(&DAT_146bcb3ec);
        if (iVar1 != 0) {
          puVar8 = (undefined8 *)CRYPTO_THREAD_get_local(&DAT_146bcb3ec);
          goto LAB_143cfba7b;
        }
        ERR_put_error(0x33,0x65,0x65,"crypto\\async\\async.c",0x16d);
        async_empty_pool(plVar3);
        OPENSSL_sk_free(*plVar3);
        uVar9 = 0x175;
      }
      CRYPTO_free(plVar3,"crypto\\async\\async.c",uVar9);
LAB_143cfbc4a:
      *(undefined8 *)(lVar2 + 0x10) = 0;
      return 1;
    }
    iVar1 = ossl_init_thread_start(1);
    if (iVar1 != 0) {
      lVar2 = CRYPTO_malloc(0x20,"crypto\\async\\async.c",0x28);
      if (lVar2 == 0) {
        ERR_put_error(0x33,100,0x41,"crypto\\async\\async.c",0x2a,uVar9);
      }
      else {
        async_fibre_init_dispatcher(lVar2);
        *(undefined8 *)(lVar2 + 0x10) = 0;
        *(undefined4 *)(lVar2 + 0x18) = 0;
        iVar1 = CRYPTO_THREAD_set_local(&DAT_146bcb3e8,lVar2);
        if (iVar1 != 0) goto LAB_143cfb96e;
      }
      CRYPTO_free(lVar2,"crypto\\async\\async.c",0x36);
    }
  }
  return 0;
}



// FUNCTION 143cfbd00 async_deinit body=41 status=ok
// SIG undefined async_deinit(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void async_deinit(void)

{
  CRYPTO_THREAD_cleanup_local(&DAT_146bcb3e8);
  CRYPTO_THREAD_cleanup_local(&DAT_146bcb3ec);
  return;
}



// FUNCTION 143cfbd30 async_delete_thread_state body=156 status=ok
// SIG undefined async_delete_thread_state(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void async_delete_thread_state(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)CRYPTO_THREAD_get_local(&DAT_146bcb3ec);
  if (puVar2 != (undefined8 *)0x0) {
    async_empty_pool(puVar2);
    OPENSSL_sk_free(*puVar2);
    CRYPTO_free(puVar2,"crypto\\async\\async.c",0x180);
    CRYPTO_THREAD_set_local(&DAT_146bcb3ec,0);
  }
  async_local_cleanup();
  uVar3 = CRYPTO_THREAD_get_local(&DAT_146bcb3e8);
  iVar1 = CRYPTO_THREAD_set_local(&DAT_146bcb3e8,0);
  if (iVar1 != 0) {
    CRYPTO_free(uVar3,"crypto\\async\\async.c",0x49);
    return;
  }
  return;
}



// FUNCTION 143cfbdd0 async_empty_pool body=114 status=ok
// SIG undefined async_empty_pool(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void async_empty_pool(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((param_1 != (longlong *)0x0) && (*param_1 != 0)) {
    while (puVar1 = (undefined8 *)OPENSSL_sk_pop(*param_1), puVar1 != (undefined8 *)0x0) {
      CRYPTO_free(puVar1[3],"crypto\\async\\async.c",0x60);
      DeleteFiber((LPVOID)*puVar1);
      CRYPTO_free(puVar1,"crypto\\async\\async.c",0x62);
    }
  }
  return;
}



// FUNCTION 143cfbe50 async_get_ctx body=29 status=ok
// SIG undefined async_get_ctx(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void async_get_ctx(void)

{
  CRYPTO_THREAD_get_local(&DAT_146bcb3e8);
  return;
}



// FUNCTION 143cfbe70 async_init body=78 status=ok
// SIG undefined async_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 async_init(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143cfbe7a;
  iVar1 = CRYPTO_THREAD_init_local(&DAT_146bcb3e8,0,param_3,param_4,0x143cfbe7a);
  if (iVar1 != 0) {
    iVar1 = CRYPTO_THREAD_init_local(&DAT_146bcb3ec,0,param_3,param_4,uVar2);
    if (iVar1 != 0) {
      return 1;
    }
    CRYPTO_THREAD_cleanup_local(&DAT_146bcb3e8);
  }
  return 0;
}



// FUNCTION 143cfbec0 async_job_free body=78 status=ok
// SIG undefined async_job_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void async_job_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    CRYPTO_free(param_1[3],"crypto\\async\\async.c",0x60);
    DeleteFiber((LPVOID)*param_1);
    CRYPTO_free(param_1,"crypto\\async\\async.c",0x62);
  }
  return;
}



// FUNCTION 143cfbf10 async_job_new body=86 status=ok
// SIG undefined async_job_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong async_job_new(void)

{
  longlong lVar1;
  
  lVar1 = CRYPTO_zalloc(0x30,"crypto\\async\\async.c",0x52);
  if (lVar1 == 0) {
    ERR_put_error(0x33,0x66,0x41,"crypto\\async\\async.c",0x54);
    return 0;
  }
  *(undefined4 *)(lVar1 + 0x24) = 0;
  return lVar1;
}



// FUNCTION 143cfbf70 async_release_job body=88 status=ok
// SIG undefined async_release_job(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void async_release_job(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)CRYPTO_THREAD_get_local(&DAT_146bcb3ec);
  CRYPTO_free(*(undefined8 *)(param_1 + 0x18),"crypto\\async\\async.c",0x8b);
  *(undefined8 *)(param_1 + 0x18) = 0;
  OPENSSL_sk_push(*puVar1,param_1);
  return;
}



// FUNCTION 143cfbfd0 async_start_func body=66 status=ok
// SIG undefined async_start_func(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void async_start_func(void)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)CRYPTO_THREAD_get_local(&DAT_146bcb3e8);
  do {
    lVar1 = puVar3[2];
    uVar2 = (**(code **)(lVar1 + 0x10))(*(undefined8 *)(lVar1 + 0x18));
    *(undefined4 *)(lVar1 + 0x20) = uVar2;
    *(undefined4 *)(lVar1 + 0x24) = 3;
    SwitchToFiber((LPVOID)*puVar3);
  } while( true );
}



// FUNCTION 143cfc020 CT_POLICY_EVAL_CTX_free body=66 status=ok
// SIG undefined CT_POLICY_EVAL_CTX_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CT_POLICY_EVAL_CTX_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    X509_free(*param_1);
    X509_free(param_1[1]);
    CRYPTO_free(param_1,"crypto\\ct\\ct_policy.c",0x32);
  }
  return;
}



// FUNCTION 143cfc070 CT_POLICY_EVAL_CTX_new body=116 status=ok
// SIG undefined CT_POLICY_EVAL_CTX_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong CT_POLICY_EVAL_CTX_new(void)

{
  longlong lVar1;
  __time64_t _Var2;
  undefined8 uVar3;
  
  uVar3 = 0x143cfc07c;
  lVar1 = CRYPTO_zalloc(0x20,"crypto\\ct\\ct_policy.c",0x1e);
  if (lVar1 == 0) {
    ERR_put_error(0x32,0x85,0x41,"crypto\\ct\\ct_policy.c",0x21,uVar3);
    return 0;
  }
  _Var2 = _time64((__time64_t *)0x0);
  *(__time64_t *)(lVar1 + 0x18) = (_Var2 + 300) * 1000;
  return lVar1;
}



// FUNCTION 143cfc0f0 CT_POLICY_EVAL_CTX_set1_cert body=67 status=ok
// SIG undefined CT_POLICY_EVAL_CTX_set1_cert(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CT_POLICY_EVAL_CTX_set1_cert(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = X509_up_ref(param_2);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  *param_1 = param_2;
  return 1;
}



// FUNCTION 143cfc140 CT_POLICY_EVAL_CTX_set1_issuer body=68 status=ok
// SIG undefined CT_POLICY_EVAL_CTX_set1_issuer(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CT_POLICY_EVAL_CTX_set1_issuer(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = X509_up_ref(param_2);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  *(undefined8 *)(param_1 + 8) = param_2;
  return 1;
}



// FUNCTION 143cfc190 SCT_LIST_free body=29 status=ok
// SIG undefined SCT_LIST_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SCT_LIST_free(undefined8 param_1)

{
  OPENSSL_sk_pop_free(param_1,SCT_free);
  return;
}



// FUNCTION 143cfc1b0 SCT_LIST_validate body=481 status=ok
// SIG undefined SCT_LIST_validate(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint SCT_LIST_validate(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  iVar7 = 0;
  uVar10 = 1;
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = OPENSSL_sk_num();
  }
  if (0 < iVar1) {
    do {
      piVar3 = (int *)OPENSSL_sk_value(param_1,iVar7);
      if (piVar3 != (int *)0x0) {
        uVar8 = 0xffffffff;
        local_res18 = 0;
        local_res20 = 0;
        uVar9 = 0;
        if (*piVar3 == 0) {
          lVar4 = CTLOG_STORE_get0_log_by_id
                            (param_2[2],*(undefined8 *)(piVar3 + 6),*(undefined8 *)(piVar3 + 8));
          if (lVar4 == 0) {
            piVar3[0x18] = 1;
          }
          else {
            lVar5 = SCT_CTX_new();
            uVar9 = uVar8;
            if (lVar5 != 0) {
              uVar6 = FNiagaraEmitterHandle::GetInstance(lVar4);
              iVar2 = X509_PUBKEY_set(&local_res20,uVar6);
              if ((iVar2 == 1) && (iVar2 = SCT_CTX_set1_pubkey(lVar5,local_res20), iVar2 == 1)) {
                if (piVar3[0x16] == 1) {
                  if (param_2[1] != 0) {
                    uVar6 = X509_get0_pubkey();
                    iVar2 = X509_PUBKEY_set(&local_res18,uVar6);
                    if ((iVar2 != 1) ||
                       (iVar2 = SCT_CTX_set1_issuer_pubkey(lVar5,local_res18), iVar2 != 1))
                    goto LAB_143cfc338;
                    goto LAB_143cfc2f0;
                  }
                  iVar2 = 4;
                }
                else {
LAB_143cfc2f0:
                  SCT_CTX_set_time(lVar5,param_2[3]);
                  iVar2 = SCT_CTX_set1_cert(lVar5,*param_2,0);
                  if (iVar2 == 1) {
                    iVar2 = SCT_CTX_verify(lVar5,piVar3);
                    iVar2 = (iVar2 != 1) + 2;
                  }
                  else {
                    iVar2 = 4;
                  }
                }
                piVar3[0x18] = iVar2;
                uVar9 = (uint)(iVar2 == 2);
              }
            }
LAB_143cfc338:
            X509_PUBKEY_free(local_res18);
            X509_PUBKEY_free(local_res20);
            SCT_CTX_free(lVar5);
            if ((int)uVar9 < 0) {
              return uVar9;
            }
          }
        }
        else {
          piVar3[0x18] = 5;
        }
        uVar10 = uVar10 & uVar9;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar1);
  }
  return uVar10;
}



// FUNCTION 143cfc3a0 SCT_free body=139 status=ok
// SIG undefined SCT_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SCT_free(longlong param_1)

{
  if (param_1 != 0) {
    CRYPTO_free(*(undefined8 *)(param_1 + 0x18),"crypto\\ct\\ct_sct.c",0x29);
    CRYPTO_free(*(undefined8 *)(param_1 + 0x30),"crypto\\ct\\ct_sct.c",0x2a);
    CRYPTO_free(*(undefined8 *)(param_1 + 0x48),"crypto\\ct\\ct_sct.c",0x2b);
    CRYPTO_free(*(undefined8 *)(param_1 + 8),"crypto\\ct\\ct_sct.c",0x2c);
    CRYPTO_free(param_1,"crypto\\ct\\ct_sct.c",0x2d);
  }
  return;
}



// FUNCTION 143cfc430 SCT_get_signature_nid body=40 status=ok
// SIG undefined SCT_get_signature_nid(void)

undefined8 SCT_get_signature_nid(int *param_1)

{
  if ((*param_1 == 0) && ((char)param_1[0x10] == '\x04')) {
    if (*(char *)((longlong)param_1 + 0x41) == '\x01') {
      return 0x29c;
    }
    if (*(char *)((longlong)param_1 + 0x41) == '\x03') {
      return 0x31a;
    }
  }
  return 0;
}



// FUNCTION 143cfc460 SCT_is_complete body=75 status=ok
// SIG undefined SCT_is_complete(void)

bool SCT_is_complete(int *param_1)

{
  if (*param_1 != -1) {
    if (*param_1 != 0) {
      return *(longlong *)(param_1 + 2) != 0;
    }
    if ((((*(longlong *)(param_1 + 6) != 0) && ((char)param_1[0x10] == '\x04')) &&
        ((*(char *)((longlong)param_1 + 0x41) == '\x01' ||
         (*(char *)((longlong)param_1 + 0x41) == '\x03')))) &&
       ((*(longlong *)(param_1 + 0x12) != 0 && (*(longlong *)(param_1 + 0x14) != 0)))) {
      return true;
    }
  }
  return false;
}



// FUNCTION 143cfc4b0 SCT_new body=92 status=ok
// SIG undefined SCT_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * SCT_new(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)CRYPTO_zalloc(0x68,"crypto\\ct\\ct_sct.c",0x18);
  if (puVar1 == (undefined4 *)0x0) {
    ERR_put_error(0x32,100,0x41,"crypto\\ct\\ct_sct.c",0x1b);
    return (undefined4 *)0x0;
  }
  puVar1[0x16] = 0xffffffff;
  *puVar1 = 0xffffffff;
  return puVar1;
}



// FUNCTION 143cfc510 SCT_set1_signature body=184 status=ok
// SIG undefined SCT_set1_signature(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SCT_set1_signature(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143cfc525;
  CRYPTO_free(*(undefined8 *)(param_1 + 0x48),"crypto\\ct\\ct_sct.c",0xb3);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    lVar1 = CRYPTO_memdup(param_2,param_3,"crypto\\ct\\ct_sct.c",0xb9);
    *(longlong *)(param_1 + 0x48) = lVar1;
    if (lVar1 == 0) {
      ERR_put_error(0x32,0x74,0x41,"crypto\\ct\\ct_sct.c",0xbb,uVar2);
      return 0;
    }
    *(longlong *)(param_1 + 0x50) = param_3;
  }
  return 1;
}



// FUNCTION 143cfc5d0 SCT_set_source body=48 status=ok
// SIG undefined SCT_set_source(void)

undefined8 SCT_set_source(longlong param_1,int param_2)

{
  *(int *)(param_1 + 0x5c) = param_2;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (param_2 != 1) {
    if (param_2 == 2) {
      *(undefined4 *)(param_1 + 0x58) = 1;
      return 1;
    }
    if (param_2 != 3) {
      return 1;
    }
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  return 1;
}



// FUNCTION 143cfc600 SCT_signature_is_complete body=48 status=ok
// SIG undefined SCT_signature_is_complete(void)

undefined8 SCT_signature_is_complete(int *param_1)

{
  if ((((*param_1 == 0) && ((char)param_1[0x10] == '\x04')) &&
      ((*(char *)((longlong)param_1 + 0x41) == '\x01' ||
       (*(char *)((longlong)param_1 + 0x41) == '\x03')))) &&
     ((*(longlong *)(param_1 + 0x12) != 0 && (*(longlong *)(param_1 + 0x14) != 0)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 143cfc630 d2i_SCT_LIST body=159 status=ok
// SIG undefined d2i_SCT_LIST(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong d2i_SCT_LIST(undefined8 param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  longlong local_res10;
  int *local_res20;
  
  local_res10 = *param_2;
  local_res20 = (int *)0x0;
  lVar1 = d2i_ASN1_OCTET_STRING(&local_res20,&local_res10,param_3);
  if (lVar1 == 0) {
    return 0;
  }
  local_res10 = *(longlong *)(local_res20 + 2);
  lVar1 = o2i_SCT_LIST(param_1,&local_res10,(longlong)*local_res20);
  if (lVar1 != 0) {
    *param_2 = *param_2 + (longlong)param_3;
  }
  ASN1_BIT_STRING_free(local_res20);
  return lVar1;
}



// FUNCTION 143cfc6d0 i2d_SCT_LIST body=98 status=ok
// SIG undefined i2d_SCT_LIST(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong i2d_SCT_LIST(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  int local_28 [2];
  undefined8 local_20 [2];
  undefined8 uStack_10;
  
  uStack_10 = 0x143cfc6dc;
  local_20[0] = 0;
  uVar2 = i2o_SCT_LIST(param_1,local_20);
  local_28[0] = (int)uVar2;
  if (local_28[0] == -1) {
    return uVar2;
  }
  uVar1 = i2d_ASN1_OCTET_STRING(local_28,param_2);
  CRYPTO_free(local_20[0],"crypto\\ct\\ct_oct.c",0x195);
  return (ulonglong)uVar1;
}



// FUNCTION 143cfc740 i2o_SCT body=607 status=ok
// SIG undefined i2o_SCT(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong i2o_SCT(int *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined1 *_Dst;
  undefined1 *_Dst_00;
  undefined1 *puVar9;
  undefined8 uVar10;
  
  uVar10 = 0x143cfc75e;
  iVar4 = SCT_is_complete();
  if (iVar4 == 0) {
    ERR_put_error(0x32,0x6b,0x6a,"crypto\\ct\\ct_oct.c",0xce,uVar10);
    puVar6 = (undefined1 *)0x0;
LAB_143cfc903:
    CRYPTO_free(puVar6,"crypto\\ct\\ct_oct.c",0xfd);
    uVar7 = 0xffffffff;
  }
  else {
    if (*param_1 == 0) {
      uVar7 = *(longlong *)(param_1 + 0xe) + 0x2f + *(longlong *)(param_1 + 0x14);
    }
    else {
      uVar7 = *(ulonglong *)(param_1 + 4);
    }
    if (param_2 != (undefined8 *)0x0) {
      _Dst = (undefined1 *)*param_2;
      if (_Dst == (undefined1 *)0x0) {
        puVar6 = (undefined1 *)CRYPTO_malloc(uVar7,"crypto\\ct\\ct_oct.c",0xe3);
        _Dst = puVar6;
        puVar9 = puVar6;
        if (puVar6 == (undefined1 *)0x0) {
          ERR_put_error(0x32,0x6b,0x41,"crypto\\ct\\ct_oct.c",0xe5,uVar10);
          goto LAB_143cfc903;
        }
      }
      else {
        puVar6 = _Dst + uVar7;
        puVar9 = (undefined1 *)0x0;
      }
      *param_2 = puVar6;
      if (*param_1 == 0) {
        *_Dst = 0;
        _Dst_00 = _Dst + 0x2b;
        puVar1 = *(undefined4 **)(param_1 + 6);
        uVar5 = puVar1[1];
        uVar8 = puVar1[2];
        uVar3 = puVar1[3];
        *(undefined4 *)(_Dst + 1) = *puVar1;
        *(undefined4 *)(_Dst + 5) = uVar5;
        *(undefined4 *)(_Dst + 9) = uVar8;
        *(undefined4 *)(_Dst + 0xd) = uVar3;
        uVar10 = *(undefined8 *)(puVar1 + 6);
        *(undefined8 *)(_Dst + 0x11) = *(undefined8 *)(puVar1 + 4);
        *(undefined8 *)(_Dst + 0x19) = uVar10;
        _Dst[0x21] = *(undefined1 *)((longlong)param_1 + 0x2f);
        _Dst[0x22] = *(undefined1 *)((longlong)param_1 + 0x2e);
        _Dst[0x23] = *(undefined1 *)((longlong)param_1 + 0x2d);
        _Dst[0x24] = (char)param_1[0xb];
        _Dst[0x25] = *(undefined1 *)((longlong)param_1 + 0x2b);
        _Dst[0x26] = *(undefined1 *)((longlong)param_1 + 0x2a);
        _Dst[0x27] = *(undefined1 *)((longlong)param_1 + 0x29);
        _Dst[0x28] = (char)param_1[10];
        _Dst[0x29] = *(undefined1 *)((longlong)param_1 + 0x39);
        _Dst[0x2a] = (char)param_1[0xe];
        if (*(size_t *)(param_1 + 0xe) != 0) {
          _guard_xfg_dispatch_icall_nop
                    (_Dst_00,*(void **)(param_1 + 0xc),*(size_t *)(param_1 + 0xe));
          _Dst_00 = _Dst_00 + *(longlong *)(param_1 + 0xe);
        }
        iVar4 = SCT_signature_is_complete(param_1);
        puVar6 = puVar9;
        if (iVar4 == 0) {
          uVar5 = 0x6b;
          uVar8 = 0x9f;
        }
        else if (*param_1 == 0) {
          lVar2 = *(longlong *)(param_1 + 0x14);
          if ((_Dst_00 != (undefined1 *)0x0) ||
             (_Dst_00 = (undefined1 *)CRYPTO_malloc(lVar2 + 4,"crypto\\ct\\ct_oct.c",0xb4),
             _Dst_00 != (undefined1 *)0x0)) {
            *_Dst_00 = (char)param_1[0x10];
            _Dst_00[1] = *(undefined1 *)((longlong)param_1 + 0x41);
            _Dst_00[2] = *(undefined1 *)((longlong)param_1 + 0x51);
            _Dst_00[3] = (char)param_1[0x14];
            _guard_xfg_dispatch_icall_nop
                      (_Dst_00 + 4,*(void **)(param_1 + 0x12),*(size_t *)(param_1 + 0x14));
            if ((int)(lVar2 + 4) < 1) goto LAB_143cfc903;
            goto LAB_143cfc984;
          }
          uVar5 = 0x41;
          uVar8 = 0xb6;
        }
        else {
          uVar5 = 0x67;
          uVar8 = 0xa4;
        }
        ERR_put_error(0x32,0x6d,uVar5,"crypto\\ct\\ct_oct.c",uVar8);
        CRYPTO_free(0,"crypto\\ct\\ct_oct.c",0xc4);
        goto LAB_143cfc903;
      }
      _guard_xfg_dispatch_icall_nop(_Dst,*(void **)(param_1 + 2),uVar7);
    }
LAB_143cfc984:
    uVar7 = uVar7 & 0xffffffff;
  }
  return uVar7;
}



// FUNCTION 143cfc9a0 i2o_SCT_LIST body=545 status=ok
// SIG undefined i2o_SCT_LIST(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong i2o_SCT_LIST(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *local_res10;
  
  bVar1 = false;
  puVar6 = (undefined1 *)0x0;
  if (param_2 != (longlong *)0x0) {
    lVar3 = *param_2;
    if (lVar3 == 0) {
      iVar2 = i2o_SCT_LIST(param_1,0);
      if (iVar2 == -1) {
        ERR_put_error(0x32,0x6c,0x69,"crypto\\ct\\ct_oct.c",0x14a);
        return 0xffffffff;
      }
      lVar3 = CRYPTO_malloc((longlong)iVar2,"crypto\\ct\\ct_oct.c",0x14d);
      *param_2 = lVar3;
      if (lVar3 == 0) {
        ERR_put_error(0x32,0x6c,0x41,"crypto\\ct\\ct_oct.c",0x14e);
        return 0xffffffff;
      }
      bVar1 = true;
    }
    puVar6 = (undefined1 *)(lVar3 + 2);
  }
  uVar5 = 2;
  iVar7 = 0;
  iVar2 = OPENSSL_sk_num(param_1);
  if (0 < iVar2) {
    do {
      piVar4 = (int *)OPENSSL_sk_value(param_1,iVar7);
      if (param_2 == (longlong *)0x0) {
        iVar2 = SCT_is_complete(piVar4);
        if (iVar2 == 0) {
          ERR_put_error(0x32,0x6b,0x6a,"crypto\\ct\\ct_oct.c",0xce);
          CRYPTO_free(0,"crypto\\ct\\ct_oct.c",0xfd);
          goto LAB_143cfcb99;
        }
        if (*piVar4 == 0) {
          iVar2 = (int)*(undefined8 *)(piVar4 + 0xe) + 0x2f + (int)*(undefined8 *)(piVar4 + 0x14);
        }
        else {
          iVar2 = (int)*(undefined8 *)(piVar4 + 4);
        }
        if (iVar2 == -1) goto LAB_143cfcb99;
      }
      else {
        local_res10 = puVar6 + 2;
        iVar2 = i2o_SCT(piVar4,&local_res10);
        if (iVar2 == -1) goto LAB_143cfcb99;
        puVar6[1] = (char)iVar2;
        *puVar6 = (char)((uint)iVar2 >> 8);
        puVar6 = local_res10;
      }
      iVar7 = iVar7 + 1;
      uVar5 = uVar5 + (longlong)(iVar2 + 2);
      iVar2 = OPENSSL_sk_num(param_1);
    } while (iVar7 < iVar2);
    if (0xffff < uVar5) {
LAB_143cfcb99:
      if (bVar1) {
        CRYPTO_free(*param_2,"crypto\\ct\\ct_oct.c",0x172);
        *param_2 = 0;
      }
      return 0xffffffff;
    }
  }
  if (param_2 != (longlong *)0x0) {
    puVar6 = (undefined1 *)*param_2;
    *puVar6 = (char)(uVar5 - 2 >> 8);
    puVar6[1] = (char)uVar5 + -2;
    if (!bVar1) {
      *param_2 = *param_2 + uVar5;
    }
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 143cfcbd0 o2i_SCT body=747 status=ok
// SIG undefined o2i_SCT(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint * o2i_SCT(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte *pbVar6;
  uint *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  
  uVar11 = 0x143cfcbf2;
  puVar7 = (uint *)0x0;
  if (param_3 - 1 < 0xffff) {
    puVar7 = (uint *)SCT_new();
    if (puVar7 == (uint *)0x0) goto LAB_143cfce94;
    pbVar8 = (byte *)*param_2;
    bVar1 = *pbVar8;
    *puVar7 = (uint)bVar1;
    if (bVar1 != 0) {
      lVar4 = CRYPTO_memdup(pbVar8,param_3,"crypto\\ct\\ct_oct.c",0x87);
      *(longlong *)(puVar7 + 2) = lVar4;
      if (lVar4 != 0) {
        *(ulonglong *)(puVar7 + 4) = param_3;
        pbVar8 = pbVar8 + param_3;
LAB_143cfce58:
        *param_2 = (longlong)pbVar8;
        if (param_1 == (undefined8 *)0x0) {
          return puVar7;
        }
        SCT_free(*param_1);
        *param_1 = puVar7;
        return puVar7;
      }
      goto LAB_143cfce94;
    }
    if (param_3 < 0x2b) {
      uVar10 = 99;
    }
    else {
      lVar4 = CRYPTO_memdup(pbVar8 + 1,0x20,"crypto\\ct\\ct_oct.c");
      *(longlong *)(puVar7 + 6) = lVar4;
      if (lVar4 == 0) goto LAB_143cfce94;
      puVar7[8] = 0x20;
      puVar7[9] = 0;
      bVar1 = pbVar8[0x21];
      *(ulonglong *)(puVar7 + 10) = (ulonglong)bVar1 << 0x38;
      uVar5 = (ulonglong)pbVar8[0x22] << 0x30 | (ulonglong)bVar1 << 0x38;
      *(ulonglong *)(puVar7 + 10) = uVar5;
      uVar5 = (ulonglong)pbVar8[0x23] << 0x28 | uVar5;
      *(ulonglong *)(puVar7 + 10) = uVar5;
      uVar5 = (ulonglong)pbVar8[0x24] << 0x20 | uVar5;
      *(ulonglong *)(puVar7 + 10) = uVar5;
      uVar5 = (ulonglong)pbVar8[0x25] << 0x18 | uVar5;
      *(ulonglong *)(puVar7 + 10) = uVar5;
      uVar5 = (ulonglong)pbVar8[0x26] << 0x10 | uVar5;
      *(ulonglong *)(puVar7 + 10) = uVar5;
      uVar5 = (ulonglong)pbVar8[0x27] << 8 | uVar5;
      *(ulonglong *)(puVar7 + 10) = uVar5;
      *(ulonglong *)(puVar7 + 10) = pbVar8[0x28] | uVar5;
      uVar5 = (ulonglong)CONCAT11(pbVar8[0x29],pbVar8[0x2a]);
      if (param_3 - 0x2b < uVar5) {
        uVar10 = 0x72;
      }
      else {
        if (uVar5 != 0) {
          lVar4 = CRYPTO_memdup(pbVar8 + 0x2b,uVar5,"crypto\\ct\\ct_oct.c",0x76);
          *(longlong *)(puVar7 + 0xc) = lVar4;
          if (lVar4 == 0) goto LAB_143cfce94;
        }
        pbVar6 = pbVar8 + 0x2b + uVar5;
        *(ulonglong *)(puVar7 + 0xe) = uVar5;
        uVar5 = (param_3 - 0x2b) - uVar5;
        if (*puVar7 == 0) {
          if (uVar5 < 5) {
            uVar10 = 0x2a;
          }
          else {
            *(byte *)(puVar7 + 0x10) = *pbVar6;
            *(byte *)((longlong)puVar7 + 0x41) = pbVar6[1];
            iVar3 = SCT_get_signature_nid(puVar7);
            if (iVar3 == 0) {
              uVar10 = 0x33;
            }
            else {
              bVar1 = pbVar6[2];
              bVar2 = pbVar6[3];
              pbVar8 = pbVar6 + 4;
              pbVar9 = (byte *)(ulonglong)CONCAT11(bVar1,bVar2);
              if (pbVar9 <= pbVar6 + (uVar5 - (longlong)pbVar8)) {
                iVar3 = SCT_set1_signature(puVar7,pbVar8,pbVar9);
                if ((iVar3 == 1) &&
                   (iVar3 = ((int)uVar5 - (int)(pbVar6 + (uVar5 - (longlong)pbVar8))) +
                            (uint)CONCAT11(bVar1,bVar2), 0 < iVar3)) {
                  pbVar8 = pbVar8 + (longlong)(pbVar9 + (uVar5 - (longlong)iVar3));
                  goto LAB_143cfce58;
                }
                goto LAB_143cfcd6a;
              }
              uVar10 = 0x3a;
            }
          }
          ERR_put_error(0x32,0x70,0x6b,"crypto\\ct\\ct_oct.c",uVar10,uVar11);
          uVar10 = 0x80;
        }
        else {
          ERR_put_error(0x32,0x70,0x67,"crypto\\ct\\ct_oct.c",0x1f,uVar11);
LAB_143cfcd6a:
          uVar10 = 0x80;
        }
      }
    }
  }
  else {
    uVar10 = 0x4c;
  }
  ERR_put_error(0x32,0x6e,0x68,"crypto\\ct\\ct_oct.c",uVar10,uVar11);
LAB_143cfce94:
  SCT_free(puVar7);
  return (uint *)0x0;
}



// FUNCTION 143cfcec0 o2i_SCT_LIST body=487 status=ok
// SIG undefined o2i_SCT_LIST(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong o2i_SCT_LIST(longlong *param_1,longlong *param_2,longlong param_3)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0x143cfced1;
  if (0xfffd < param_3 - 2U) {
    ERR_put_error(0x32,0x6f,0x69,"crypto\\ct\\ct_oct.c",0x108,0x143cfced1);
    return 0;
  }
  puVar1 = (undefined1 *)*param_2;
  uVar5 = (ulonglong)CONCAT11(*puVar1,puVar1[1]);
  *param_2 = (longlong)(puVar1 + 2);
  if (uVar5 != param_3 - 2U) {
    ERR_put_error(0x32,0x6f,0x69,"crypto\\ct\\ct_oct.c",0x10e,0x143cfced1);
    return 0;
  }
  if ((param_1 == (longlong *)0x0) || (lVar4 = *param_1, lVar4 == 0)) {
    lVar4 = OPENSSL_sk_new_null();
    if (lVar4 == 0) {
      return 0;
    }
  }
  else {
    lVar3 = OPENSSL_sk_pop(lVar4);
    while (lVar3 != 0) {
      SCT_free(lVar3);
      lVar3 = OPENSSL_sk_pop(lVar4);
    }
  }
  do {
    if (uVar5 == 0) {
      if (param_1 == (longlong *)0x0) {
        return lVar4;
      }
      if (*param_1 != 0) {
        return lVar4;
      }
      *param_1 = lVar4;
      return lVar4;
    }
    if (uVar5 < 2) {
      uVar7 = 0x123;
LAB_143cfd049:
      ERR_put_error(0x32,0x6f,0x69,"crypto\\ct\\ct_oct.c",uVar7,uVar8);
      goto LAB_143cfd062;
    }
    puVar1 = (undefined1 *)*param_2;
    uVar6 = (ulonglong)CONCAT11(*puVar1,puVar1[1]);
    *param_2 = (longlong)(puVar1 + 2);
    if ((uVar6 == 0) || (uVar5 - 2 < uVar6)) {
      uVar7 = 0x12a;
      goto LAB_143cfd049;
    }
    uVar5 = (uVar5 - 2) - uVar6;
    lVar3 = o2i_SCT(0,param_2);
    if (lVar3 == 0) goto LAB_143cfd062;
    iVar2 = OPENSSL_sk_push(lVar4,lVar3);
  } while (iVar2 != 0);
  SCT_free(lVar3);
LAB_143cfd062:
  if ((param_1 == (longlong *)0x0) || (*param_1 == 0)) {
    SCT_LIST_free(lVar4);
  }
  return 0;
}



// FUNCTION 143cfd0b0 CTLOG_STORE_free body=64 status=ok
// SIG undefined CTLOG_STORE_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CTLOG_STORE_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    OPENSSL_sk_pop_free(*param_1,CTLOG_free);
    CRYPTO_free(param_1,"crypto\\ct\\ct_log.c",0x73);
  }
  return;
}



// FUNCTION 143cfd0f0 CTLOG_STORE_get0_log_by_id body=144 status=ok
// SIG undefined CTLOG_STORE_get0_log_by_id(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong CTLOG_STORE_get0_log_by_id(undefined8 *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = OPENSSL_sk_num(*param_1);
  if (0 < iVar1) {
    do {
      lVar2 = OPENSSL_sk_value(*param_1,iVar3);
      iVar1 = _guard_xfg_dispatch_icall_nop((void *)(lVar2 + 8),param_2,param_3);
      if (iVar1 == 0) {
        return lVar2;
      }
      iVar3 = iVar3 + 1;
      iVar1 = OPENSSL_sk_num(*param_1);
    } while (iVar3 < iVar1);
  }
  return 0;
}



// FUNCTION 143cfd180 CTLOG_STORE_new body=131 status=ok
// SIG undefined CTLOG_STORE_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * CTLOG_STORE_new(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143cfd18c;
  plVar1 = (longlong *)CRYPTO_zalloc(8,"crypto\\ct\\ct_log.c",0x5e);
  if (plVar1 == (longlong *)0x0) {
    ERR_put_error(0x32,0x83,0x41,"crypto\\ct\\ct_log.c",0x61,uVar3);
    return (longlong *)0x0;
  }
  lVar2 = OPENSSL_sk_new_null();
  *plVar1 = lVar2;
  if (lVar2 == 0) {
    CRYPTO_free(plVar1,"crypto\\ct\\ct_log.c",0x6b);
    return (longlong *)0x0;
  }
  return plVar1;
}



// FUNCTION 143cfd210 CTLOG_free body=79 status=ok
// SIG undefined CTLOG_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CTLOG_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    CRYPTO_free(*param_1,"crypto\\ct\\ct_log.c",0x10a);
    EVP_PKEY_free(param_1[5]);
    CRYPTO_free(param_1,"crypto\\ct\\ct_log.c",0x10c);
  }
  return;
}



// FUNCTION 143cfd260 check_purpose_ssl_client body=92 status=ok
// SIG undefined check_purpose_ssl_client(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 check_purpose_ssl_client(undefined8 param_1,longlong param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(uint *)(param_2 + 0xd0);
  if (((uVar1 & 4) == 0) || ((*(byte *)(param_2 + 0xd8) & 2) != 0)) {
    if (param_3 != 0) {
      uVar2 = check_ssl_ca(param_2);
      return uVar2;
    }
    if ((((uVar1 & 2) == 0) || ((*(byte *)(param_2 + 0xd4) & 0x88) != 0)) &&
       (((uVar1 & 8) == 0 || ((*(byte *)(param_2 + 0xdc) & 0x80) != 0)))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143cfd2c0 check_purpose_ssl_server body=92 status=ok
// SIG undefined check_purpose_ssl_server(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 check_purpose_ssl_server(undefined8 param_1,longlong param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(uint *)(param_2 + 0xd0);
  if (((uVar1 & 4) == 0) || ((*(byte *)(param_2 + 0xd8) & 0x11) != 0)) {
    if (param_3 != 0) {
      uVar2 = check_ssl_ca(param_2);
      return uVar2;
    }
    if ((((uVar1 & 8) == 0) || ((*(byte *)(param_2 + 0xdc) & 0x40) != 0)) &&
       (((uVar1 & 2) == 0 || ((*(byte *)(param_2 + 0xd4) & 0xa8) != 0)))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143cfd320 check_purpose_ns_ssl_server body=106 status=ok
// SIG undefined check_purpose_ns_ssl_server(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 check_purpose_ns_ssl_server(undefined8 param_1,longlong param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(uint *)(param_2 + 0xd0);
  if (((uVar1 & 4) == 0) || ((*(byte *)(param_2 + 0xd8) & 0x11) != 0)) {
    if (param_3 != 0) {
      uVar2 = check_ssl_ca(param_2);
      return uVar2;
    }
    if (((((uVar1 & 8) == 0) || ((*(byte *)(param_2 + 0xdc) & 0x40) != 0)) &&
        (((uVar1 & 2) == 0 || ((*(byte *)(param_2 + 0xd4) & 0xa8) != 0)))) &&
       (((uVar1 & 2) == 0 || ((*(byte *)(param_2 + 0xd4) & 0x20) != 0)))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143cfd390 check_purpose_smime_sign body=68 status=ok
// SIG undefined check_purpose_smime_sign(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 check_purpose_smime_sign(undefined8 param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = purpose_smime(param_2,param_3);
  if (((((int)uVar1 != 0) && (param_3 == 0)) && ((*(byte *)(param_2 + 0xd0) & 2) != 0)) &&
     ((*(byte *)(param_2 + 0xd4) & 0xc0) == 0)) {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 143cfd3e0 check_purpose_smime_encrypt body=68 status=ok
// SIG undefined check_purpose_smime_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 check_purpose_smime_encrypt(undefined8 param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = purpose_smime(param_2,param_3);
  if (((((int)uVar1 != 0) && (param_3 == 0)) && ((*(byte *)(param_2 + 0xd0) & 2) != 0)) &&
     ((*(byte *)(param_2 + 0xd4) & 0x20) == 0)) {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 143cfd430 check_purpose_crl_sign body=71 status=ok
// SIG undefined check_purpose_crl_sign(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 check_purpose_crl_sign(undefined8 param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    if (((*(byte *)(param_2 + 0xd0) & 2) == 0) || ((*(byte *)(param_2 + 0xd4) & 2) != 0)) {
      return 1;
    }
  }
  else {
    uVar1 = check_ca(param_2);
    if ((int)uVar1 != 2) {
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 143cfd480 check_purpose_timestamp_sign body=140 status=ok
// SIG undefined check_purpose_timestamp_sign(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 check_purpose_timestamp_sign(undefined8 param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    uVar2 = check_ca(param_2);
    return uVar2;
  }
  if (((((*(uint *)(param_2 + 0xd0) & 2) == 0) ||
       (((*(uint *)(param_2 + 0xd4) & 0xffffff3f) == 0 && ((*(uint *)(param_2 + 0xd4) & 0xc0) != 0))
       )) && ((*(uint *)(param_2 + 0xd0) & 4) != 0)) && (*(int *)(param_2 + 0xd8) == 0x40)) {
    iVar1 = X509_get_ext_d2i(param_2,0x7e,0xffffffff);
    if (-1 < iVar1) {
      uVar2 = X509_get_ext_d2i(param_2,iVar1);
      iVar1 = X509_EXTENSION_get_critical(uVar2);
      if (iVar1 == 0) {
        return 0;
      }
    }
    return 1;
  }
  return 0;
}



// FUNCTION 143cfd510 ocsp_helper body=40 status=ok
// SIG undefined ocsp_helper(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ocsp_helper(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = check_ca(param_2);
    return uVar1;
  }
  return 1;
}



// FUNCTION 143cfd540 X509_PURPOSE_get0 body=74 status=ok
// SIG undefined X509_PURPOSE_get0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined * X509_PURPOSE_get0(int param_1)

{
  undefined *puVar1;
  
  if (param_1 < 0) {
    return (undefined *)0x0;
  }
  if (param_1 < 9) {
    return &DAT_146836ad0 + (longlong)param_1 * 0x30;
  }
  puVar1 = (undefined *)OPENSSL_sk_value(DAT_146bcb3f0,param_1 + -9);
  return puVar1;
}



// FUNCTION 143cfd590 X509_PURPOSE_get_by_id body=71 status=ok
// SIG undefined X509_PURPOSE_get_by_id(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint X509_PURPOSE_get_by_id(int param_1)

{
  uint uVar1;
  int iVar2;
  int local_38 [12];
  undefined8 uStack_8;
  
  uStack_8 = 0x143cfd59a;
  uVar1 = param_1 - 1;
  if (8 < uVar1) {
    if (DAT_146bcb3f0 != 0) {
      local_38[0] = param_1;
      iVar2 = OPENSSL_sk_find(DAT_146bcb3f0,local_38);
      if (-1 < iVar2) {
        return iVar2 + 9;
      }
    }
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 143cfd5e0 X509_check_akid body=244 status=ok
// SIG undefined X509_check_akid(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_check_akid(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  
  if (param_2 != (longlong *)0x0) {
    if (((*param_2 != 0) && (*(longlong *)(param_1 + 0xe0) != 0)) &&
       (iVar2 = ASN1_OCTET_STRING_cmp(), iVar2 != 0)) {
      return 0x1e;
    }
    lVar1 = param_2[2];
    if (lVar1 != 0) {
      uVar3 = UE4Function_Private::
              TFunction_OwnedObject<<lambda_6ee2cf6eb29fb3eaf224d7c8f92aa15b>,0>::GetAddress
                        (param_1);
      iVar2 = ASN1_INTEGER_cmp(uVar3,lVar1);
      if (iVar2 != 0) {
        return 0x1f;
      }
    }
    lVar1 = param_2[1];
    if (lVar1 != 0) {
      iVar5 = 0;
      iVar2 = OPENSSL_sk_num(lVar1);
      if (0 < iVar2) {
        do {
          piVar4 = (int *)OPENSSL_sk_value(lVar1,iVar5);
          if (*piVar4 == 4) {
            lVar1 = *(longlong *)(piVar4 + 2);
            if (lVar1 == 0) {
              return 0;
            }
            uVar3 = FVoicePacketImpl::GetSampleCounter(param_1);
            iVar2 = X509_NAME_cmp(lVar1,uVar3);
            if (iVar2 == 0) {
              return 0;
            }
            return 0x1f;
          }
          iVar5 = iVar5 + 1;
          iVar2 = OPENSSL_sk_num(lVar1);
        } while (iVar5 < iVar2);
      }
    }
  }
  return 0;
}



// FUNCTION 143cfd6e0 X509_check_ca body=138 status=ok
// SIG undefined X509_check_ca(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint X509_check_ca(longlong param_1)

{
  uint uVar1;
  
  FUN_143cfdb20();
  uVar1 = *(uint *)(param_1 + 0xd0);
  if (((uVar1 & 2) == 0) || ((*(byte *)(param_1 + 0xd4) & 4) != 0)) {
    if ((uVar1 & 1) != 0) {
      return (uVar1 & 0xff) >> 4 & 1;
    }
    if ((uVar1 & 0x2040) == 0x2040) {
      return 3;
    }
    if ((uVar1 & 2) != 0) {
      return 4;
    }
    if (((uVar1 & 8) != 0) && ((*(byte *)(param_1 + 0xdc) & 7) != 0)) {
      return 5;
    }
  }
  return 0;
}



// FUNCTION 143cfd770 X509_check_issued body=227 status=ok
// SIG undefined X509_check_issued(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_check_issued(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FVoicePacketImpl::GetSampleCounter(param_2);
  uVar3 = FBackChannelConnection::GetSocket(param_1);
  iVar1 = X509_NAME_cmp(uVar3,uVar2);
  if (iVar1 != 0) {
    return 0x1d;
  }
  FUN_143cfdb20(param_1);
  FUN_143cfdb20(param_2);
  if ((*(longlong *)(param_2 + 0xe8) != 0) && (uVar2 = X509_check_akid(param_1), (int)uVar2 != 0)) {
    return uVar2;
  }
  if ((*(byte *)(param_1 + 0xd0) & 2) != 0) {
    if ((*(uint *)(param_2 + 0xd0) & 0x400) == 0) {
      if ((*(byte *)(param_1 + 0xd4) & 4) == 0) {
        return 0x20;
      }
    }
    else if ((*(byte *)(param_1 + 0xd4) & 0x80) == 0) {
      return 0x27;
    }
  }
  return 0;
}



// FUNCTION 143cfd860 X509_check_purpose body=270 status=ok
// SIG undefined X509_check_purpose(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 X509_check_purpose(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  int local_38 [2];
  undefined8 uStack_30;
  undefined8 uStack_10;
  
  uStack_10 = 0x143cfd875;
  FUN_143cfdb20();
  if (param_2 == -1) {
    return 1;
  }
  uVar4 = param_2 - 1;
  if (8 < uVar4) {
    if (DAT_146bcb3f0 == 0) {
      return 0xffffffff;
    }
    local_38[0] = param_2;
    iVar1 = OPENSSL_sk_find(DAT_146bcb3f0,local_38);
    if (iVar1 < 0) {
      return 0xffffffff;
    }
    uVar4 = iVar1 + 9;
  }
  if (uVar4 == 0xffffffff) {
    return 0xffffffff;
  }
  if (-1 < (int)uVar4) {
    switch(uVar4) {
    case 0:
      goto check_purpose_ssl_client;
    case 1:
      uVar4 = *(uint *)(param_1 + 0xd0);
      if (((uVar4 & 4) == 0) || ((*(byte *)(param_1 + 0xd8) & 0x11) != 0)) {
        if (param_3 != 0) {
          uVar2 = check_ssl_ca(param_1);
          return uVar2;
        }
        if ((((uVar4 & 8) == 0) || ((*(byte *)(param_1 + 0xdc) & 0x40) != 0)) &&
           (((uVar4 & 2) == 0 || ((*(byte *)(param_1 + 0xd4) & 0xa8) != 0)))) {
          return 1;
        }
      }
      return 0;
    case 2:
      uVar4 = *(uint *)(param_1 + 0xd0);
      if (((uVar4 & 4) == 0) || ((*(byte *)(param_1 + 0xd8) & 0x11) != 0)) {
        if (param_3 != 0) {
          uVar2 = check_ssl_ca(param_1);
          return uVar2;
        }
        if (((((uVar4 & 8) == 0) || ((*(byte *)(param_1 + 0xdc) & 0x40) != 0)) &&
            (((uVar4 & 2) == 0 || ((*(byte *)(param_1 + 0xd4) & 0xa8) != 0)))) &&
           (((uVar4 & 2) == 0 || ((*(byte *)(param_1 + 0xd4) & 0x20) != 0)))) {
          return 1;
        }
      }
      return 0;
    case 3:
      uStack_10 = 0x143cfd39c;
      uStack_30 = 0x143cfd3b0;
      uVar2 = purpose_smime(param_1,param_3);
      if ((((int)uVar2 != 0) && (param_3 == 0)) &&
         (((*(byte *)(param_1 + 0xd0) & 2) != 0 && ((*(byte *)(param_1 + 0xd4) & 0xc0) == 0)))) {
        uVar2 = 0;
      }
      return uVar2;
    case 4:
      uStack_10 = 0x143cfd3ec;
      uStack_30 = 0x143cfd400;
      uVar2 = purpose_smime(param_1,param_3);
      if (((((int)uVar2 != 0) && (param_3 == 0)) && ((*(byte *)(param_1 + 0xd0) & 2) != 0)) &&
         ((*(byte *)(param_1 + 0xd4) & 0x20) == 0)) {
        uVar2 = 0;
      }
      return uVar2;
    case 5:
      if (param_3 == 0) {
        if (((*(byte *)(param_1 + 0xd0) & 2) == 0) || ((*(byte *)(param_1 + 0xd4) & 2) != 0)) {
          return 1;
        }
      }
      else {
        uStack_30 = 0x143cfd44a;
        uVar2 = check_ca(param_1);
        if ((int)uVar2 != 2) {
          return uVar2;
        }
      }
      return 0;
    case 6:
      return 1;
    case 7:
      if (param_3 != 0) {
        uVar2 = check_ca(param_1);
        return uVar2;
      }
      return 1;
    case 8:
      uStack_10 = 0x143cfd48c;
      if (param_3 != 0) {
        uVar2 = check_ca(param_1);
        return uVar2;
      }
      if (((((*(uint *)(param_1 + 0xd0) & 2) == 0) ||
           (((*(uint *)(param_1 + 0xd4) & 0xffffff3f) == 0 &&
            ((*(uint *)(param_1 + 0xd4) & 0xc0) != 0)))) && ((*(uint *)(param_1 + 0xd0) & 4) != 0))
         && (*(int *)(param_1 + 0xd8) == 0x40)) {
        uStack_30 = 0x143cfd4df;
        iVar1 = X509_get_ext_d2i(param_1,0x7e,0xffffffff);
        if (-1 < iVar1) {
          uStack_30 = 0x143cfd4ed;
          uVar2 = X509_get_ext_d2i(param_1,iVar1);
          uStack_30 = 0x143cfd4f5;
          iVar1 = X509_EXTENSION_get_critical(uVar2);
          if (iVar1 == 0) {
            return 0;
          }
        }
        return 1;
      }
      return 0;
    default:
      lVar3 = OPENSSL_sk_value(DAT_146bcb3f0,uVar4 - 9);
                    /* WARNING: Could not recover jumptable at 0x000143cfd955. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(lVar3 + 0x10))(lVar3,param_1,param_3);
      return uVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143cfd8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*_DAT_00000010)(0,param_1,param_3);
  return uVar2;
check_purpose_ssl_client:
  uVar4 = *(uint *)(param_1 + 0xd0);
  if (((uVar4 & 4) == 0) || ((*(byte *)(param_1 + 0xd8) & 2) != 0)) {
    if (param_3 != 0) {
      uVar2 = check_ssl_ca(param_1);
      return uVar2;
    }
    if ((((uVar4 & 2) == 0) || ((*(byte *)(param_1 + 0xd4) & 0x88) != 0)) &&
       (((uVar4 & 8) == 0 || ((*(byte *)(param_1 + 0xdc) & 0x80) != 0)))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143cfd970 X509_get_extension_flags body=35 status=ok
// SIG undefined X509_get_extension_flags(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 X509_get_extension_flags(longlong param_1)

{
  FUN_143cfdb20();
  return *(undefined4 *)(param_1 + 0xd0);
}



// FUNCTION 143cfd9a0 X509_get_key_usage body=55 status=ok
// SIG undefined X509_get_key_usage(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 X509_get_key_usage(longlong param_1)

{
  FUN_143cfdb20();
  if ((*(byte *)(param_1 + 0xd0) & 2) != 0) {
    return *(undefined4 *)(param_1 + 0xd4);
  }
  return 0xffffffff;
}



// FUNCTION 143cfd9e0 check_ca body=94 status=ok
// SIG undefined check_ca(void)

undefined8 check_ca(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xd0);
  if (((uVar1 & 2) == 0) || ((*(byte *)(param_1 + 0xd4) & 4) != 0)) {
    if ((uVar1 & 1) == 0) {
      if ((uVar1 & 0x2040) == 0x2040) {
        return 3;
      }
      if ((uVar1 & 2) != 0) {
        return 4;
      }
      if (((uVar1 & 8) != 0) && ((*(byte *)(param_1 + 0xdc) & 7) != 0)) {
        return 5;
      }
    }
    else if ((uVar1 & 0x10) != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143cfda40 check_ssl_ca body=100 status=ok
// SIG undefined check_ssl_ca(void)

undefined8 check_ssl_ca(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xd0);
  if (((uVar1 & 2) == 0) || ((*(byte *)(param_1 + 0xd4) & 4) != 0)) {
    if ((uVar1 & 1) == 0) {
      if ((uVar1 & 0x2040) == 0x2040) {
        return 3;
      }
      if ((uVar1 & 2) != 0) {
        return 4;
      }
      if ((((uVar1 & 8) != 0) && ((*(uint *)(param_1 + 0xdc) & 7) != 0)) &&
         ((*(uint *)(param_1 + 0xdc) & 4) != 0)) {
        return 5;
      }
    }
    else if ((uVar1 & 0x10) != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143cfdab0 purpose_smime body=104 status=ok
// SIG undefined purpose_smime(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 purpose_smime(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (((*(uint *)(param_1 + 0xd0) & 4) == 0) || ((*(byte *)(param_1 + 0xd8) & 4) != 0)) {
    if (param_2 == 0) {
      if (((*(uint *)(param_1 + 0xd0) & 8) == 0) || ((*(uint *)(param_1 + 0xdc) & 0x20) != 0)) {
        return 1;
      }
      if ((char)*(uint *)(param_1 + 0xdc) < '\0') {
        return 2;
      }
    }
    else {
      uVar1 = check_ca();
      if (((int)uVar1 != 0) && (((int)uVar1 != 5 || ((*(byte *)(param_1 + 0xdc) & 2) != 0)))) {
        return uVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 143cfdb20 FUN_143cfdb20 body=1572 status=ok
// SIG undefined FUN_143cfdb20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143cfdb20(longlong param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int *piVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int local_res8 [2];
  int local_res10 [2];
  
  if (*(int *)(param_1 + 0x148) == 0) {
    CRYPTO_THREAD_read_lock(*(undefined8 *)(param_1 + 0x140));
    if ((*(uint *)(param_1 + 0xd0) & 0x100) != 0) {
      CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x140));
      return;
    }
    uVar4 = EVP_sha1();
    X509_digest(param_1,uVar4,param_1 + 0x120,0);
    iVar2 = X509_get_version(param_1);
    if (iVar2 == 0) {
      *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x40;
    }
    piVar5 = (int *)X509_get_ext_d2i(param_1,0x57,0);
    uVar12 = 0xffffffff;
    if (piVar5 != (int *)0x0) {
      uVar10 = *(uint *)(param_1 + 0xd0);
      if (*piVar5 != 0) {
        uVar10 = uVar10 | 0x10;
        *(uint *)(param_1 + 0xd0) = uVar10;
      }
      lVar7 = *(longlong *)(piVar5 + 2);
      uVar3 = uVar12;
      if (lVar7 != 0) {
        if ((*(int *)(lVar7 + 4) == 0x102) || (*piVar5 == 0)) {
          *(uint *)(param_1 + 0xd0) = uVar10 | 0x80;
          uVar3 = 0;
        }
        else {
          uVar3 = ASN1_INTEGER_get(lVar7);
        }
      }
      *(undefined4 *)(param_1 + 200) = uVar3;
      FUN_143d3df50(piVar5);
      *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 1;
    }
    plVar6 = (longlong *)X509_get_ext_d2i(param_1,0x297,0,0);
    if (plVar6 != (longlong *)0x0) {
      if ((((*(byte *)(param_1 + 0xd0) & 0x10) != 0) ||
          (iVar2 = X509_get_ext_d2i(param_1,0x55,0xffffffff), -1 < iVar2)) ||
         (iVar2 = X509_get_ext_d2i(param_1,0x56,0xffffffff), -1 < iVar2)) {
        *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
      }
      if (*plVar6 != 0) {
        uVar12 = ASN1_INTEGER_get();
      }
      *(undefined4 *)(param_1 + 0xcc) = uVar12;
      FUN_143d3dd00(plVar6);
      *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x400;
    }
    piVar5 = (int *)X509_get_ext_d2i(param_1,0x53,0);
    if (piVar5 != (int *)0x0) {
      if (*piVar5 < 1) {
        *(undefined4 *)(param_1 + 0xd4) = 0;
      }
      else {
        bVar1 = **(byte **)(piVar5 + 2);
        *(uint *)(param_1 + 0xd4) = (uint)bVar1;
        if (1 < *piVar5) {
          *(uint *)(param_1 + 0xd4) =
               (uint)CONCAT11(*(undefined1 *)(*(longlong *)(piVar5 + 2) + 1),bVar1);
        }
      }
      *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 2;
      ASN1_BIT_STRING_free(piVar5);
    }
    *(undefined4 *)(param_1 + 0xd8) = 0;
    lVar7 = X509_get_ext_d2i(param_1,0x7e,0);
    if (lVar7 != 0) {
      *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 4;
      local_res8[0] = 0;
      iVar2 = OPENSSL_sk_num(lVar7);
      if (local_res8[0] < iVar2) {
        do {
          uVar4 = OPENSSL_sk_value(lVar7,local_res8[0]);
          iVar2 = OBJ_obj2nid(uVar4);
          if (iVar2 < 0xb5) {
            if (iVar2 == 0xb4) {
              *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x20;
            }
            else {
              switch(iVar2) {
              case 0x81:
                *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 1;
                break;
              case 0x82:
                *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 2;
                break;
              case 0x83:
                *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 8;
                break;
              case 0x84:
                *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 4;
                break;
              case 0x85:
                *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x40;
                break;
              case 0x89:
              case 0x8b:
                *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x10;
              }
            }
          }
          else if (iVar2 == 0x129) {
            *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x80;
          }
          else if (iVar2 == 0x38e) {
            *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x100;
          }
          local_res8[0] = local_res8[0] + 1;
          iVar2 = OPENSSL_sk_num(lVar7);
        } while (local_res8[0] < iVar2);
      }
      OPENSSL_sk_pop_free(lVar7,ASN1_OBJECT_free);
    }
    piVar5 = (int *)X509_get_ext_d2i(param_1,0x47,0);
    if (piVar5 != (int *)0x0) {
      if (*piVar5 < 1) {
        uVar10 = 0;
      }
      else {
        uVar10 = (uint)**(byte **)(piVar5 + 2);
      }
      *(uint *)(param_1 + 0xdc) = uVar10;
      *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 8;
      ASN1_BIT_STRING_free(piVar5);
    }
    uVar4 = X509_get_ext_d2i(param_1,0x52,0);
    *(undefined8 *)(param_1 + 0xe0) = uVar4;
    uVar4 = X509_get_ext_d2i(param_1,0x5a,0);
    *(undefined8 *)(param_1 + 0xe8) = uVar4;
    uVar4 = FVoicePacketImpl::GetSampleCounter(param_1);
    uVar8 = FBackChannelConnection::GetSocket(param_1);
    iVar2 = X509_NAME_cmp(uVar8,uVar4);
    if (iVar2 == 0) {
      *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x20;
      iVar2 = X509_check_akid(param_1,*(undefined8 *)(param_1 + 0xe8));
      if ((iVar2 == 0) &&
         (((*(uint *)(param_1 + 0xd0) & 2) == 0 || ((*(byte *)(param_1 + 0xd4) & 4) != 0)))) {
        *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x2000;
      }
    }
    uVar4 = X509_get_ext_d2i(param_1,0x55,0);
    *(undefined8 *)(param_1 + 0x100) = uVar4;
    lVar7 = X509_get_ext_d2i(param_1,0x29a,local_res8,0);
    *(longlong *)(param_1 + 0x108) = lVar7;
    if ((lVar7 == 0) && (local_res8[0] != -1)) {
      *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
    }
    uVar4 = X509_get_ext_d2i(param_1,0x67,0);
    *(undefined8 *)(param_1 + 0xf8) = uVar4;
    iVar11 = 0;
    iVar2 = OPENSSL_sk_num(uVar4);
    if (0 < iVar2) {
      do {
        puVar9 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0xf8),iVar11);
        piVar5 = (int *)puVar9[1];
        if (piVar5 == (int *)0x0) {
          uVar10 = 0x807f;
        }
        else {
          iVar2 = *piVar5;
          if (iVar2 < 1) {
            uVar10 = *(uint *)(puVar9 + 3);
          }
          else {
            uVar10 = (uint)**(byte **)(piVar5 + 2);
            *(uint *)(puVar9 + 3) = (uint)**(byte **)(piVar5 + 2);
            iVar2 = *piVar5;
          }
          if (1 < iVar2) {
            uVar10 = uVar10 | (uint)*(byte *)(*(longlong *)(piVar5 + 2) + 1) << 8;
          }
          uVar10 = uVar10 & 0x807f;
        }
        *(uint *)(puVar9 + 3) = uVar10;
        if (((int *)*puVar9 != (int *)0x0) && (*(int *)*puVar9 == 1)) {
          iVar13 = 0;
          iVar2 = OPENSSL_sk_num(puVar9[2]);
          if (0 < iVar2) {
            do {
              piVar5 = (int *)OPENSSL_sk_value(puVar9[2],iVar13);
              if (*piVar5 == 4) {
                lVar7 = *(longlong *)(piVar5 + 2);
                if (lVar7 != 0) goto LAB_143cfdff2;
                break;
              }
              iVar13 = iVar13 + 1;
              iVar2 = OPENSSL_sk_num(puVar9[2]);
            } while (iVar13 < iVar2);
          }
          lVar7 = FVoicePacketImpl::GetSampleCounter(param_1);
LAB_143cfdff2:
          DIST_POINT_set_dpname(*puVar9,lVar7);
        }
        iVar11 = iVar11 + 1;
        iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0xf8));
      } while (iVar11 < iVar2);
    }
    uVar4 = X509_get_ext_d2i(param_1,0x122,0,0);
    *(undefined8 *)(param_1 + 0x110) = uVar4;
    uVar4 = X509_get_ext_d2i(param_1,0x123,0,0);
    *(undefined8 *)(param_1 + 0x118) = uVar4;
    local_res8[0] = 0;
    iVar2 = X509_get_ext_d2i(param_1);
    if (local_res8[0] < iVar2) {
      do {
        uVar4 = X509_get_ext_d2i(param_1,local_res8[0]);
        uVar8 = EVP_MD_CTX_md(uVar4);
        iVar2 = OBJ_obj2nid(uVar8);
        if (iVar2 == 0x359) {
          *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x1000;
        }
        iVar2 = X509_EXTENSION_get_critical(uVar4);
        if (iVar2 != 0) {
          uVar4 = EVP_MD_CTX_md(uVar4);
          local_res10[0] = OBJ_obj2nid(uVar4);
          if ((local_res10[0] == 0) ||
             (lVar7 = OBJ_bsearch_(local_res10,&DAT_145d72540,0xe,4,&LAB_1431fadb0), lVar7 == 0)) {
            *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x200;
            break;
          }
        }
        local_res8[0] = local_res8[0] + 1;
        iVar2 = X509_get_ext_d2i(param_1);
      } while (local_res8[0] < iVar2);
    }
    x509_init_sig_info(param_1);
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x100;
    *(undefined4 *)(param_1 + 0x148) = 1;
    CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x140));
  }
  return;
}



// FUNCTION 143cfe170 RAND_bytes body=104 status=ok
// SIG undefined RAND_bytes(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 RAND_bytes(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143cfe180;
  lVar1 = RAND_get_rand_method();
  if (*(code **)(lVar1 + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143cfe1a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(lVar1 + 8))(param_1,param_2);
    return uVar2;
  }
  ERR_put_error(0x24,100,0x65,"crypto\\rand\\rand_lib.c",0x309,uVar2);
  return 0xffffffff;
}



// FUNCTION 143cfe1e0 RAND_get_rand_method body=185 status=ok
// SIG undefined RAND_get_rand_method(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined **
RAND_get_rand_method(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined **ppuVar3;
  int iVar4;
  
  iVar1 = CRYPTO_THREAD_run_once(&DAT_146bcb418,do_rand_init_ossl_,param_3,param_4,0x143cfe1ea);
  iVar4 = 0;
  if (iVar1 != 0) {
    iVar4 = DAT_146bcb42c;
  }
  if (iVar4 != 0) {
    CRYPTO_THREAD_read_lock(DAT_146bcb408);
    lVar2 = DAT_146bcb3f8;
    ppuVar3 = DAT_146bcb410;
    if ((DAT_146bcb410 == (undefined **)0x0) &&
       ((lVar2 = ENGINE_get_default_RAND(), lVar2 == 0 ||
        (ppuVar3 = (undefined **)FVoicePacketImpl::GetSampleCounter(lVar2),
        ppuVar3 == (undefined **)0x0)))) {
      ENGINE_finish(lVar2);
      DAT_146bcb410 = &PTR_drbg_seed_146837270;
      lVar2 = DAT_146bcb3f8;
      ppuVar3 = DAT_146bcb410;
    }
    DAT_146bcb410 = ppuVar3;
    DAT_146bcb3f8 = lVar2;
    ppuVar3 = DAT_146bcb410;
    CRYPTO_THREAD_unlock(DAT_146bcb408);
    return ppuVar3;
  }
  return (undefined **)0x0;
}



// FUNCTION 143cfe2a0 RAND_priv_bytes body=193 status=ok
// SIG undefined RAND_priv_bytes(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 RAND_priv_bytes(undefined8 param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143cfe2b5;
  lVar1 = RAND_get_rand_method();
  lVar2 = RAND_OpenSSL();
  if (lVar1 == lVar2) {
    lVar1 = RAND_DRBG_get0_private();
    if (lVar1 == 0) {
      return 0;
    }
    uVar3 = RAND_DRBG_bytes(lVar1,param_1,(longlong)param_2);
    return uVar3;
  }
  lVar1 = RAND_get_rand_method();
  if (*(code **)(lVar1 + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143cfe2f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(lVar1 + 8))(param_1,param_2);
    return uVar3;
  }
  ERR_put_error(0x24,100,0x65,"crypto\\rand\\rand_lib.c",0x309,uVar3);
  return 0xffffffff;
}



// FUNCTION 143cfe370 RAND_set_rand_method body=125 status=ok
// SIG undefined RAND_set_rand_method(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 RAND_set_rand_method(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = CRYPTO_THREAD_run_once(&DAT_146bcb418);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = DAT_146bcb42c;
  }
  if (iVar2 == 0) {
    return 0;
  }
  CRYPTO_THREAD_read_lock(DAT_146bcb408);
  ENGINE_finish(DAT_146bcb3f8);
  DAT_146bcb3f8 = 0;
  DAT_146bcb410 = param_1;
  CRYPTO_THREAD_unlock(DAT_146bcb408);
  return 1;
}



// FUNCTION 143cfe3f0 do_rand_init_ossl_ body=163 status=ok
// SIG undefined do_rand_init_ossl_(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void do_rand_init_ossl_(long param_1,undefined1 param_2)

{
  AKRESULT AVar1;
  
  DAT_146bcb400 = CRYPTO_THREAD_lock_new();
  if (DAT_146bcb400 != 0) {
    DAT_146bcb408 = CRYPTO_THREAD_lock_new();
    if (DAT_146bcb408 != 0) {
      DAT_146bcb420 = CRYPTO_THREAD_lock_new();
      if (DAT_146bcb420 != 0) {
        if (DAT_146bcb428 != 0) {
          DAT_146bcb42c = 1;
          return;
        }
        AVar1 = AK::MemoryMgr::SetMonitoring(param_1,(bool)param_2);
        if (AVar1 != 0) {
          DAT_146bcb42c = 1;
          return;
        }
        AK::MemoryMgr::StartProfileThreadUsage(param_1);
      }
      CRYPTO_THREAD_lock_free(DAT_146bcb408);
      DAT_146bcb408 = 0;
    }
    CRYPTO_THREAD_lock_free(DAT_146bcb400);
    DAT_146bcb400 = 0;
  }
  DAT_146bcb42c = 0;
  return;
}



// FUNCTION 143cfe4a0 rand_cleanup_int body=132 status=ok
// SIG undefined rand_cleanup_int(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void rand_cleanup_int(void)

{
  long lVar1;
  
  DAT_146bcb428 = 1;
  if ((DAT_146bcb410 != 0) && (*(code **)(DAT_146bcb410 + 0x10) != (code *)0x0)) {
    (**(code **)(DAT_146bcb410 + 0x10))();
  }
  lVar1 = 0;
  RAND_set_rand_method();
  AK::MemoryMgr::StartProfileThreadUsage(lVar1);
  CRYPTO_THREAD_lock_free(DAT_146bcb400);
  DAT_146bcb400 = 0;
  CRYPTO_THREAD_lock_free(DAT_146bcb408);
  DAT_146bcb408 = 0;
  CRYPTO_THREAD_lock_free(DAT_146bcb420);
  DAT_146bcb420 = 0;
  return;
}



// FUNCTION 143cfe530 rand_drbg_cleanup_entropy body=44 status=ok
// SIG undefined rand_drbg_cleanup_entropy(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void rand_drbg_cleanup_entropy(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  CRYPTO_secure_clear_free(param_2,param_3,"crypto\\rand\\rand_lib.c",0xdc);
  return;
}



// FUNCTION 143cfe560 rand_drbg_cleanup_nonce body=44 status=ok
// SIG undefined rand_drbg_cleanup_nonce(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void rand_drbg_cleanup_nonce(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  CRYPTO_secure_clear_free(param_2,param_3,"crypto\\rand\\rand_lib.c",0x10d);
  return;
}



// FUNCTION 143cfe590 rand_drbg_get_additional_data body=159 status=ok
// SIG undefined rand_drbg_get_additional_data(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 rand_drbg_get_additional_data(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  puVar3 = (undefined8 *)rand_pool_new(0,0,param_2);
  if (puVar3 == (undefined8 *)0x0) {
    return 0;
  }
  iVar2 = rand_pool_add_additional_data(puVar3);
  if (iVar2 != 0) {
    uVar1 = *puVar3;
    uVar4 = puVar3[1];
    *puVar3 = 0;
    *param_1 = uVar1;
  }
  CRYPTO_secure_clear_free(*puVar3,puVar3[3],"crypto\\rand\\rand_lib.c",0x1d4);
  CRYPTO_free(puVar3,"crypto\\rand\\rand_lib.c",0x1d5);
  return uVar4;
}



// FUNCTION 143cfe630 rand_drbg_get_entropy body=648 status=ok
// SIG undefined rand_drbg_get_entropy(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong rand_drbg_get_entropy
                    (longlong param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
                    undefined8 param_5,int param_6)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar12;
  undefined8 uVar11;
  undefined8 uVar13;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar13 = 0x143cfe645;
  uVar7 = 0;
  uVar10 = 0;
  if ((*(longlong *)(param_1 + 8) != 0) &&
     (*(int *)(*(longlong *)(param_1 + 8) + 0x28) < *(int *)(param_1 + 0x28))) {
    ERR_put_error(0x24,0x78,0x83,"crypto\\rand\\rand_lib.c",0x91,0x143cfe645);
    return 0;
  }
  plVar5 = (longlong *)rand_pool_new(param_3,param_4,param_5);
  if (plVar5 == (longlong *)0x0) {
    return 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (puVar1 != (undefined8 *)0x0) {
    rand_pool_add(plVar5,*puVar1,puVar1[1],puVar1[4]);
    rand_pool_free(*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    if (param_6 != 0) {
      ERR_put_error(0x24,0x78,0x85,"crypto\\rand\\rand_lib.c",CONCAT44(uVar12,0xc3),uVar13);
      goto LAB_143cfe868;
    }
    uVar7 = rand_pool_acquire_entropy(plVar5);
LAB_143cfe856:
    if (uVar7 != 0) {
      lVar3 = *plVar5;
      uVar10 = plVar5[1];
      *plVar5 = 0;
      *param_2 = lVar3;
    }
  }
  else {
    uVar2 = plVar5[1];
    uVar9 = plVar5[5] - plVar5[4];
    if ((ulonglong)plVar5[5] <= (ulonglong)plVar5[4]) {
      uVar9 = uVar7;
    }
    uVar9 = uVar9 + 7 >> 3;
    if (plVar5[3] - uVar2 < uVar9) {
      uVar11 = CONCAT44(uVar12,0x239);
      uVar8 = 0x73;
    }
    else {
      if ((uVar2 < (ulonglong)plVar5[2]) && (uVar6 = plVar5[2] - uVar2, uVar9 < uVar6)) {
        uVar9 = uVar6;
      }
      if (uVar9 == 0) goto LAB_143cfe868;
      if (uVar9 <= plVar5[3] - uVar2) {
        lVar3 = *plVar5;
        if (lVar3 + uVar2 == 0) goto LAB_143cfe868;
        rand_drbg_unlock(*(longlong *)(param_1 + 8));
        uVar12 = 0;
        iVar4 = RAND_DRBG_generate(*(undefined8 *)(param_1 + 8),lVar3 + uVar2,uVar9,param_6,0,0);
        if (iVar4 != 0) {
          uVar7 = uVar9;
        }
        rand_drbg_unlock(*(undefined8 *)(param_1 + 8));
        if ((ulonglong)(plVar5[3] - plVar5[1]) < uVar7) {
          ERR_put_error(0x24,0x72,0x7d,"crypto\\rand\\rand_lib.c",CONCAT44(uVar12,0x28a));
        }
        else if (uVar7 != 0) {
          plVar5[1] = plVar5[1] + uVar7;
          plVar5[4] = plVar5[4] + uVar7 * 8;
        }
        uVar7 = plVar5[4];
        if ((uVar7 < (ulonglong)plVar5[5]) || ((ulonglong)plVar5[1] < (ulonglong)plVar5[2]))
        goto LAB_143cfe868;
        goto LAB_143cfe856;
      }
      uVar11 = CONCAT44(uVar12,0x277);
      uVar8 = 0x71;
    }
    ERR_put_error(0x24,uVar8,0x7d,"crypto\\rand\\rand_lib.c",uVar11,uVar13);
    uVar10 = uVar7;
  }
LAB_143cfe868:
  CRYPTO_secure_clear_free(*plVar5,plVar5[3],"crypto\\rand\\rand_lib.c",0x1d4);
  CRYPTO_free(plVar5,"crypto\\rand\\rand_lib.c",0x1d5);
  return uVar10;
}



// FUNCTION 143cfe8c0 rand_drbg_get_nonce body=279 status=ok
// SIG undefined rand_drbg_get_nonce(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong rand_drbg_get_nonce(undefined8 param_1,longlong *param_2,undefined8 param_3,
                            undefined8 param_4,undefined8 param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  uStack_10 = 0;
  plVar4 = (longlong *)rand_pool_new(0,param_4,param_5);
  lVar5 = 0;
  if (plVar4 != (longlong *)0x0) {
    iVar3 = rand_pool_add_nonce_data(plVar4);
    lVar5 = 0;
    if (iVar3 != 0) {
      CRYPTO_atomic_add(&DAT_146bcb41c,1,&uStack_10,DAT_146bcb420);
      if ((ulonglong)(plVar4[3] - plVar4[1]) < 0x10) {
        ERR_put_error(0x24,0x67,0x6a,"crypto\\rand\\rand_lib.c",600);
      }
      else {
        local_18 = (undefined4)param_1;
        uStack_14 = (undefined4)((ulonglong)param_1 >> 0x20);
        puVar1 = (undefined4 *)(plVar4[1] + *plVar4);
        *puVar1 = local_18;
        puVar1[1] = uStack_14;
        puVar1[2] = (undefined4)uStack_10;
        puVar1[3] = uStack_10._4_4_;
        plVar4[1] = plVar4[1] + 0x10;
        lVar2 = *plVar4;
        lVar5 = plVar4[1];
        *plVar4 = 0;
        *param_2 = lVar2;
      }
    }
    CRYPTO_secure_clear_free(*plVar4,plVar4[3],"crypto\\rand\\rand_lib.c",0x1d4);
    CRYPTO_free(plVar4,"crypto\\rand\\rand_lib.c",0x1d5);
  }
  return lVar5;
}



// FUNCTION 143cfe9e0 rand_pool_add body=141 status=ok
// SIG undefined rand_pool_add(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 rand_pool_add(longlong *param_1,void *param_2,size_t param_3,longlong param_4)

{
  if ((ulonglong)(param_1[3] - param_1[1]) < param_3) {
    ERR_put_error(0x24,0x67,0x6a,"crypto\\rand\\rand_lib.c",600,0x143cfe9f5);
    return 0;
  }
  if (param_3 != 0) {
    _guard_xfg_dispatch_icall_nop((void *)(param_1[1] + *param_1),param_2,param_3);
    param_1[1] = param_1[1] + param_3;
    param_1[4] = param_1[4] + param_4;
  }
  return 1;
}



// FUNCTION 143cfea70 rand_pool_add_begin body=84 status=ok
// SIG undefined rand_pool_add_begin(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong rand_pool_add_begin(longlong *param_1,ulonglong param_2)

{
  if (param_2 != 0) {
    if (param_2 <= (ulonglong)(param_1[3] - param_1[1])) {
      return *param_1 + param_1[1];
    }
    ERR_put_error(0x24,0x71,0x7d,"crypto\\rand\\rand_lib.c",0x277);
  }
  return 0;
}



// FUNCTION 143cfead0 rand_pool_add_end body=95 status=ok
// SIG undefined rand_pool_add_end(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 rand_pool_add_end(longlong param_1,ulonglong param_2,longlong param_3)

{
  if ((ulonglong)(*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 8)) < param_2) {
    ERR_put_error(0x24,0x72,0x7d,"crypto\\rand\\rand_lib.c",0x28a);
    return 0;
  }
  if (param_2 != 0) {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + param_3;
    *(ulonglong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + param_2;
  }
  return 1;
}



// FUNCTION 143cfeb30 rand_pool_bytes_needed body=175 status=ok
// SIG undefined rand_pool_bytes_needed(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong rand_pool_bytes_needed(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x28) - *(ulonglong *)(param_1 + 0x20);
  if (*(ulonglong *)(param_1 + 0x28) <= *(ulonglong *)(param_1 + 0x20)) {
    lVar3 = 0;
  }
  if (param_2 == 0) {
    ERR_put_error(0x24,0x73,0x69,"crypto\\rand\\rand_lib.c",0x231);
    return 0;
  }
  uVar1 = *(ulonglong *)(param_1 + 8);
  uVar2 = (ulonglong)param_2 * lVar3 + 7 >> 3;
  if (*(longlong *)(param_1 + 0x18) - uVar1 < uVar2) {
    ERR_put_error(0x24,0x73,0x7d,"crypto\\rand\\rand_lib.c",0x239);
    return 0;
  }
  if ((uVar1 < *(ulonglong *)(param_1 + 0x10)) &&
     (uVar1 = *(ulonglong *)(param_1 + 0x10) - uVar1, uVar2 < uVar1)) {
    uVar2 = uVar1;
  }
  return uVar2;
}



// FUNCTION 143cfebe0 rand_pool_entropy_available body=23 status=ok
// SIG undefined rand_pool_entropy_available(void)

ulonglong rand_pool_entropy_available(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x20);
  if ((uVar1 < *(ulonglong *)(param_1 + 0x28)) ||
     (*(ulonglong *)(param_1 + 8) < *(ulonglong *)(param_1 + 0x10))) {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 143cfec00 rand_pool_free body=74 status=ok
// SIG undefined rand_pool_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void rand_pool_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    CRYPTO_secure_clear_free(*param_1,param_1[3],"crypto\\rand\\rand_lib.c",0x1d4);
    CRYPTO_free(param_1,"crypto\\rand\\rand_lib.c",0x1d5);
  }
  return;
}



// FUNCTION 143cfec50 rand_pool_new body=196 status=ok
// SIG undefined rand_pool_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * rand_pool_new(int param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143cfec6a;
  plVar2 = (longlong *)CRYPTO_zalloc(0x30,"crypto\\rand\\rand_lib.c",0x1b3);
  if (plVar2 == (longlong *)0x0) {
    uVar1 = 0x1b6;
  }
  else {
    plVar2[2] = param_2;
    plVar2[3] = param_3;
    lVar3 = CRYPTO_secure_zalloc(param_3,"crypto\\rand\\rand_lib.c",0x1bd);
    *plVar2 = lVar3;
    if (lVar3 != 0) {
      plVar2[5] = (longlong)param_1;
      return plVar2;
    }
    uVar1 = 0x1bf;
  }
  ERR_put_error(0x24,0x74,0x41,"crypto\\rand\\rand_lib.c",uVar1,uVar4);
  CRYPTO_free(plVar2,"crypto\\rand\\rand_lib.c",0x1c8);
  return (longlong *)0x0;
}



// FUNCTION 143cfedc0 SCT_LIST_free body=29 status=ok
// SIG undefined SCT_LIST_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SCT_LIST_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_145d72cd0);
  return;
}



// FUNCTION 143cfede0 OCSP_BASICRESP_it body=8 status=ok
// SIG undefined OCSP_BASICRESP_it(void)

undefined * OCSP_BASICRESP_it(void)

{
  return &DAT_145d72cd0;
}



// FUNCTION 143cfee00 FUN_143cfee00 body=29 status=ok
// SIG undefined FUN_143cfee00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143cfee00(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_145d72980);
  return;
}



// FUNCTION 143cfee20 SCT_LIST_free body=29 status=ok
// SIG undefined SCT_LIST_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SCT_LIST_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_145d72910);
  return;
}



// FUNCTION 143cfee50 FUN_143cfee50 body=29 status=ok
// SIG undefined FUN_143cfee50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143cfee50(void)

{
  ASN1_item_d2i();
  return;
}



// FUNCTION 143cfee70 SCT_LIST_free body=29 status=ok
// SIG undefined SCT_LIST_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SCT_LIST_free(void)

{
  ASN1_item_d2i();
  return;
}



// FUNCTION 143cfee90 FUN_143cfee90 body=29 status=ok
// SIG undefined FUN_143cfee90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143cfee90(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_145d72980);
  return;
}



// FUNCTION 143cfeeb0 OCSP_resp_count body=39 status=ok
// SIG undefined OCSP_resp_count(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OCSP_resp_count(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  uVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x20));
  return uVar1;
}



// FUNCTION 143cfeee0 OCSP_resp_get0 body=38 status=ok
// SIG undefined OCSP_resp_get0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OCSP_resp_get0(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x20));
  return uVar1;
}



// FUNCTION 143cfef10 OCSP_response_get1_basic body=139 status=ok
// SIG undefined OCSP_response_get1_basic(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OCSP_response_get1_basic(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143cfef1c;
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == (undefined8 *)0x0) {
    ERR_put_error(0x27,0x6f,0x6c,"crypto\\ocsp\\ocsp_cl.c",0x9a,0x143cfef1c);
    return 0;
  }
  iVar2 = OBJ_obj2nid(*puVar1);
  if (iVar2 != 0x16d) {
    ERR_put_error(0x27,0x6f,0x68,"crypto\\ocsp\\ocsp_cl.c",0x9e,uVar3);
    return 0;
  }
  uVar3 = OCSP_BASICRESP_it();
  uVar3 = ASN1_item_unpack(puVar1[1],uVar3);
  return uVar3;
}



// FUNCTION 143cfefa0 ENGINE_finish body=229 status=ok
// SIG undefined ENGINE_finish(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int ENGINE_finish(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143cfefb0;
  if (param_1 == 0) {
    return 1;
  }
  CRYPTO_THREAD_read_lock(DAT_146bcd570);
  iVar2 = 1;
  piVar1 = (int *)(param_1 + 0xa0);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*(longlong *)(param_1 + 0x68) != 0)) {
    CRYPTO_THREAD_unlock(DAT_146bcd570);
    iVar2 = (**(code **)(param_1 + 0x68))(param_1);
    CRYPTO_THREAD_read_lock(DAT_146bcd570);
    if (iVar2 != 0) goto LAB_143cff00d;
  }
  else {
LAB_143cff00d:
    iVar3 = engine_free_util(param_1,0);
    if (iVar3 != 0) goto LAB_143cff03d;
    ERR_put_error(0x26,0xbf,0x6a,"crypto\\engine\\eng_init.c",0x46,uVar4);
  }
  iVar2 = 0;
LAB_143cff03d:
  CRYPTO_THREAD_unlock(DAT_146bcd570);
  if (iVar2 == 0) {
    ERR_put_error(0x26,0x6b,0x6a,"crypto\\engine\\eng_init.c",0x69);
    return 0;
  }
  return iVar2;
}



// FUNCTION 143cff090 ENGINE_init body=229 status=ok
// SIG undefined ENGINE_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int ENGINE_init(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143cff09c;
  if (param_1 == 0) {
    ERR_put_error(0x26,0x77,0x43,"crypto\\engine\\eng_init.c",0x51,0x143cff09c);
    return 0;
  }
  iVar1 = CRYPTO_THREAD_run_once(&DAT_146bcb6f8,FUN_143d29020);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = DAT_146bcb6fc;
  }
  if (iVar2 == 0) {
    ERR_put_error(0x26,0x77,0x41,"crypto\\engine\\eng_init.c",0x55,uVar3);
    return 0;
  }
  CRYPTO_THREAD_read_lock(DAT_146bcd570);
  iVar2 = 1;
  if ((*(int *)(param_1 + 0xa0) == 0) && (*(code **)(param_1 + 0x60) != (code *)0x0)) {
    iVar2 = (**(code **)(param_1 + 0x60))(param_1);
    if (iVar2 == 0) goto LAB_143cff15c;
  }
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
  *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
LAB_143cff15c:
  CRYPTO_THREAD_unlock(DAT_146bcd570);
  return iVar2;
}



// FUNCTION 143cff180 engine_unlocked_finish body=180 status=ok
// SIG undefined engine_unlocked_finish(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int engine_unlocked_finish(longlong param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143cff195;
  iVar2 = 1;
  piVar1 = (int *)(param_1 + 0xa0);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (pcVar4 = *(code **)(param_1 + 0x68), pcVar4 != (code *)0x0)) {
    if (param_2 != 0) {
      CRYPTO_THREAD_unlock(DAT_146bcd570);
      pcVar4 = *(code **)(param_1 + 0x68);
    }
    iVar2 = (*pcVar4)(param_1);
    if (param_2 != 0) {
      CRYPTO_THREAD_read_lock(DAT_146bcd570);
    }
    if (iVar2 == 0) {
      return 0;
    }
  }
  iVar3 = engine_free_util(param_1,0);
  if (iVar3 == 0) {
    ERR_put_error(0x26,0xbf,0x6a,"crypto\\engine\\eng_init.c",0x46,uVar5);
    return 0;
  }
  return iVar2;
}



// FUNCTION 143cff240 engine_unlocked_init body=78 status=ok
// SIG undefined engine_unlocked_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong engine_unlocked_init(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  
  uVar2 = 1;
  if ((*(int *)(param_1 + 0xa0) == 0) && (*(code **)(param_1 + 0x60) != (code *)0x0)) {
    uVar1 = (**(code **)(param_1 + 0x60))(param_1);
    uVar2 = (uint)uVar1;
    if (uVar2 == 0) {
      return uVar1;
    }
  }
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
  *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
  return (ulonglong)uVar2;
}



// FUNCTION 143cff290 OBJ_NAME_add body=337 status=ok
// SIG undefined OBJ_NAME_add(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 OBJ_NAME_add(undefined8 param_1,uint param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  longlong lVar6;
  undefined4 uVar7;
  
  iVar2 = CRYPTO_THREAD_run_once(&DAT_146bcb448,o_names_init_ossl_);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = DAT_146bcb44c;
  }
  if (iVar3 == 0) {
    return 0;
  }
  puVar4 = (uint *)CRYPTO_malloc(0x18,"crypto\\objects\\o_names.c",0xdb);
  uVar1 = DAT_146bcb438;
  uVar7 = 0;
  if (puVar4 != (uint *)0x0) {
    *(undefined8 *)(puVar4 + 2) = param_1;
    *(undefined8 *)(puVar4 + 4) = param_3;
    puVar4[1] = param_2 & 0x8000;
    *puVar4 = param_2 & 0xffff7fff;
    CRYPTO_THREAD_read_lock(uVar1);
    piVar5 = (int *)OPENSSL_LH_insert(DAT_146bcb430,puVar4);
    if (piVar5 == (int *)0x0) {
      iVar3 = UVariantSet::GetNumVariants(DAT_146bcb430);
      if (iVar3 != 0) {
        CRYPTO_free(puVar4,"crypto\\objects\\o_names.c",0xf9);
        uVar7 = 0;
        goto LAB_143cff391;
      }
    }
    else {
      if ((DAT_146bcb440 != 0) && (iVar3 = OPENSSL_sk_num(), *piVar5 < iVar3)) {
        lVar6 = OPENSSL_sk_value(DAT_146bcb440);
        (**(code **)(lVar6 + 0x10))(*(undefined8 *)(piVar5 + 2),*piVar5,*(undefined8 *)(piVar5 + 4))
        ;
      }
      CRYPTO_free(piVar5,"crypto\\objects\\o_names.c",0xf5);
    }
    uVar7 = 1;
  }
LAB_143cff391:
  CRYPTO_THREAD_unlock(DAT_146bcb438);
  return uVar7;
}



// FUNCTION 143cff3f0 OBJ_NAME_cleanup body=183 status=ok
// SIG undefined OBJ_NAME_cleanup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OBJ_NAME_cleanup(int param_1)

{
  undefined4 uVar1;
  
  if (DAT_146bcb430 != 0) {
    DAT_146bcb450 = param_1;
    uVar1 = FImgMediaPlayer::GetState();
    BIO_set_retry_reason(DAT_146bcb430,0);
    OPENSSL_LH_doall(DAT_146bcb430,names_lh_free_doall);
    if (param_1 < 0) {
      OPENSSL_LH_free();
      OPENSSL_sk_pop_free(DAT_146bcb440,name_funcs_free);
      CRYPTO_THREAD_lock_free(DAT_146bcb438);
      DAT_146bcb430 = 0;
      DAT_146bcb440 = 0;
      DAT_146bcb438 = 0;
      return;
    }
    BIO_set_retry_reason(DAT_146bcb430,uVar1);
  }
  return;
}



// FUNCTION 143cff4b0 OBJ_NAME_get body=250 status=ok
// SIG undefined OBJ_NAME_get(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OBJ_NAME_get(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  uint local_28 [2];
  longlong local_20;
  undefined8 uStack_10;
  
  uStack_10 = 0x143cff4cb;
  if (param_1 != 0) {
    iVar1 = CRYPTO_THREAD_run_once(&DAT_146bcb448,o_names_init_ossl_);
    iVar4 = 0;
    if (iVar1 != 0) {
      iVar4 = DAT_146bcb44c;
    }
    if (iVar4 != 0) {
      CRYPTO_THREAD_read_lock(DAT_146bcb438);
      local_28[0] = param_2 & 0xffff7fff;
      local_20 = param_1;
      lVar2 = OPENSSL_LH_retrieve(DAT_146bcb430,local_28);
      iVar4 = 0;
      do {
        uVar3 = 0;
        if (lVar2 == 0) {
LAB_143cff57c:
          CRYPTO_THREAD_unlock(DAT_146bcb438);
          return uVar3;
        }
        if ((*(int *)(lVar2 + 4) == 0) || ((param_2 & 0x8000) != 0)) {
          uVar3 = *(undefined8 *)(lVar2 + 0x10);
          goto LAB_143cff57c;
        }
        uVar3 = 0;
        if (9 < iVar4) goto LAB_143cff57c;
        local_20 = *(longlong *)(lVar2 + 0x10);
        lVar2 = OPENSSL_LH_retrieve(DAT_146bcb430,local_28);
        iVar4 = iVar4 + 1;
      } while( true );
    }
  }
  return 0;
}



// FUNCTION 143cff5b0 name_funcs_free body=35 status=ok
// SIG undefined name_funcs_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void name_funcs_free(undefined8 param_1)

{
  CRYPTO_free(param_1,"crypto\\objects\\o_names.c",0x17e);
  return;
}



// FUNCTION 143cff5e0 names_lh_free_doall body=240 status=ok
// SIG undefined names_lh_free_doall(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void names_lh_free_doall(uint *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  uint local_28 [2];
  undefined8 local_20;
  
  if ((param_1 != (uint *)0x0) && (((int)DAT_146bcb450 < 0 || (DAT_146bcb450 == *param_1)))) {
    uVar1 = *param_1;
    uVar2 = *(undefined8 *)(param_1 + 2);
    iVar3 = CRYPTO_THREAD_run_once(&DAT_146bcb448,o_names_init_ossl_);
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = DAT_146bcb44c;
    }
    if (iVar4 != 0) {
      CRYPTO_THREAD_read_lock(DAT_146bcb438);
      local_28[0] = uVar1 & 0xffff7fff;
      local_20 = uVar2;
      piVar5 = (int *)OPENSSL_LH_delete(DAT_146bcb430,local_28);
      if (piVar5 != (int *)0x0) {
        if ((DAT_146bcb440 != 0) && (iVar4 = OPENSSL_sk_num(), *piVar5 < iVar4)) {
          lVar6 = OPENSSL_sk_value(DAT_146bcb440);
          (**(code **)(lVar6 + 0x10))
                    (*(undefined8 *)(piVar5 + 2),*piVar5,*(undefined8 *)(piVar5 + 4));
        }
        CRYPTO_free(piVar5,"crypto\\objects\\o_names.c",0x11f);
      }
      CRYPTO_THREAD_unlock(DAT_146bcb438);
    }
  }
  return;
}



// FUNCTION 143cff6d0 o_names_init_ossl_ body=114 status=ok
// SIG undefined o_names_init_ossl_(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void o_names_init_ossl_(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0x143cff6da;
  AK::MemoryMgr::GetPoolName(3);
  DAT_146bcb430 = OPENSSL_LH_new(obj_name_hash,obj_name_cmp,param_3,param_4,uVar1);
  DAT_146bcb438 = CRYPTO_THREAD_lock_new();
  AK::MemoryMgr::GetPoolName(2);
  if ((DAT_146bcb430 == 0) || (DAT_146bcb44c = 1, DAT_146bcb438 == 0)) {
    DAT_146bcb44c = 0;
  }
  return;
}



// FUNCTION 143cff750 obj_name_cmp body=113 status=ok
// SIG undefined obj_name_cmp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void obj_name_cmp(int *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*param_1 == *param_2) {
    if (DAT_146bcb440 != 0) {
      iVar1 = OPENSSL_sk_num();
      if (*param_1 < iVar1) {
        lVar2 = OPENSSL_sk_value(DAT_146bcb440);
                    /* WARNING: Could not recover jumptable at 0x000143cff7a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar2 + 8))(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
        return;
      }
    }
    _stricmp(*(char **)(param_1 + 2),*(char **)(param_2 + 2));
  }
  return;
}



// FUNCTION 143cff7d0 obj_name_hash body=92 status=ok
// SIG undefined obj_name_hash(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint obj_name_hash(uint *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  if (DAT_146bcb440 != 0) {
    iVar1 = OPENSSL_sk_num();
    if ((int)*param_1 < iVar1) {
      puVar3 = (undefined8 *)OPENSSL_sk_value(DAT_146bcb440);
      uVar2 = (*(code *)*puVar3)(*(undefined8 *)(param_1 + 2));
      return *param_1 ^ uVar2;
    }
  }
  uVar2 = openssl_lh_strcasehash(*(undefined8 *)(param_1 + 2));
  return *param_1 ^ uVar2;
}



// FUNCTION 143cff830 cmac_key_free body=30 status=ok
// SIG undefined cmac_key_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void cmac_key_free(void)

{
  undefined8 uVar1;
  
  uVar1 = FUniqueNetIdString::GetBytes();
  MD5_Init(uVar1);
  return;
}



// FUNCTION 143cff850 FUN_143cff850 body=54 status=ok
// SIG undefined FUN_143cff850(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143cff850(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUniqueNetIdString::GetBytes();
  MD5_Update(uVar1,param_2,param_3);
  return;
}



// FUNCTION 143cff890 FUN_143cff890 body=39 status=ok
// SIG undefined FUN_143cff890(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143cff890(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUniqueNetIdString::GetBytes();
  MD5_Final(param_2,uVar1);
  return;
}



// FUNCTION 143cff8c0 EVP_md5 body=8 status=ok
// SIG undefined EVP_md5(void)

undefined * EVP_md5(void)

{
  return &DAT_145d731a0;
}



// FUNCTION 143cff8d0 init body=55 status=ok
// SIG undefined init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void init(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUniqueNetIdString::GetBytes();
  iVar1 = MD5_Init(lVar2);
  if (iVar1 == 0) {
    return;
  }
  SHA1_Init(lVar2 + 0x5c);
  return;
}



// FUNCTION 143cff910 update body=102 status=ok
// SIG undefined update(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void update(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUniqueNetIdString::GetBytes();
  iVar1 = MD5_Update(lVar2,param_2,param_3);
  if (iVar1 == 0) {
    return;
  }
  SHA1_Update(lVar2 + 0x5c,param_2,param_3);
  return;
}



// FUNCTION 143cff980 final body=79 status=ok
// SIG undefined final(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void final(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUniqueNetIdString::GetBytes();
  iVar1 = MD5_Final(param_2,lVar2);
  if (iVar1 == 0) {
    return;
  }
  SHA1_Final(param_2 + 0x10,lVar2 + 0x5c);
  return;
}



// FUNCTION 143cff9d0 ctrl body=519 status=ok
// SIG undefined ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 ctrl(longlong param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [24];
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  if (param_2 == 0x1d) {
    if (((param_1 != 0) && (lVar3 = FUniqueNetIdString::GetBytes(), param_3 == 0x30)) &&
       (iVar1 = update(param_1,param_4,0x30), 0 < iVar1)) {
      local_88 = 0x3636363636363636;
      local_80 = 0x3636363636363636;
      local_78 = 0x3636363636363636;
      local_70 = 0x3636363636363636;
      local_68 = 0x3636363636363636;
      local_60 = 0x3636363636363636;
      iVar1 = MD5_Update(lVar3,&local_88,0x30);
      if (((iVar1 != 0) && (iVar1 = MD5_Final(local_58,lVar3), iVar1 != 0)) &&
         ((iVar1 = SHA1_Update(lVar3 + 0x5c,&local_88,0x28), iVar1 != 0 &&
          (iVar1 = SHA1_Final(local_48,lVar3 + 0x5c), iVar1 != 0)))) {
        lVar4 = FUniqueNetIdString::GetBytes(param_1);
        iVar1 = MD5_Init(lVar4);
        if (((iVar1 != 0) && (iVar1 = SHA1_Init(lVar4 + 0x5c), iVar1 != 0)) &&
           (iVar1 = update(param_1,param_4,0x30), 0 < iVar1)) {
          local_88 = 0x5c5c5c5c5c5c5c5c;
          local_80 = 0x5c5c5c5c5c5c5c5c;
          local_78 = 0x5c5c5c5c5c5c5c5c;
          local_70 = 0x5c5c5c5c5c5c5c5c;
          local_68 = 0x5c5c5c5c5c5c5c5c;
          local_60 = 0x5c5c5c5c5c5c5c5c;
          iVar1 = MD5_Update(lVar3,&local_88,0x30);
          if ((((iVar1 != 0) && (iVar1 = MD5_Update(lVar3,local_58,0x10), iVar1 != 0)) &&
              (iVar1 = SHA1_Update(lVar3 + 0x5c,&local_88,0x28), iVar1 != 0)) &&
             (iVar1 = SHA1_Update(lVar3 + 0x5c,local_48,0x14), iVar1 != 0)) {
            FUN_14004ff40(local_58,0x10);
            FUN_14004ff40(local_48,0x14);
            return 1;
          }
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



// FUNCTION 143cffbe0 FUN_143cffbe0 body=8 status=ok
// SIG undefined FUN_143cffbe0(void)

undefined * FUN_143cffbe0(void)

{
  return &DAT_145d731f0;
}



// FUNCTION 143cffbf0 des_init_key body=76 status=ok
// SIG undefined des_init_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 des_init_key(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FTcpDeserializedMessage::GetMessage();
  *(undefined8 *)(lVar1 + 0x80) = 0;
  uVar2 = FTcpDeserializedMessage::GetMessage(param_1);
  DES_set_key_unchecked(param_2,uVar2);
  return 1;
}



// FUNCTION 143cffc40 des_ctrl body=78 status=ok
// SIG undefined des_ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 des_ctrl(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  if (param_2 != 6) {
    return 0xffffffff;
  }
  iVar1 = RAND_priv_bytes(param_4,8);
  if (iVar1 < 1) {
    return 0;
  }
  DES_set_odd_parity(param_4);
  return 1;
}



// FUNCTION 143cffc90 des_ecb_cipher body=166 status=ok
// SIG undefined des_ecb_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 des_ecb_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  lVar2 = FHardwareCursor::GetHandle();
  uVar4 = (ulonglong)*(int *)(lVar2 + 4);
  if (uVar4 <= param_4) {
    lVar2 = param_3;
    do {
      uVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
      uVar3 = FTcpDeserializedMessage::GetMessage(param_1);
      DES_ecb_encrypt(lVar2,(param_2 - param_3) + lVar2,uVar3,uVar1);
      lVar2 = lVar2 + uVar4;
    } while ((ulonglong)(lVar2 - param_3) <= param_4 - uVar4);
  }
  return 1;
}



// FUNCTION 143cffd40 des_ofb_cipher body=279 status=ok
// SIG undefined des_ofb_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 des_ofb_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 local_res20 [2];
  
  if (0x3fffffff < param_4) {
    uVar3 = param_4 >> 0x1e;
    param_4 = param_4 + uVar3 * -0x40000000;
    do {
      local_res20[0] = FOnlineVoiceImpl::GetNumLocalTalkers(param_1);
      uVar1 = IMessageToken::ToText(param_1);
      uVar2 = FTcpDeserializedMessage::GetMessage(param_1);
      DES_ofb64_encrypt(param_3,param_2,0x40000000,uVar2,uVar1,local_res20);
      FArchiveState::SetGameNetVer(param_1,local_res20[0]);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (param_4 != 0) {
    local_res20[0] = FOnlineVoiceImpl::GetNumLocalTalkers(param_1);
    uVar1 = IMessageToken::ToText(param_1);
    uVar2 = FTcpDeserializedMessage::GetMessage(param_1);
    DES_ofb64_encrypt(param_3,param_2,param_4 & 0xffffffff,uVar2,uVar1,local_res20);
    FArchiveState::SetGameNetVer(param_1,local_res20[0]);
  }
  return 1;
}



// FUNCTION 143cffe60 des_cbc_cipher body=303 status=ok
// SIG undefined des_cbc_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 des_cbc_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x143cffe79;
  lVar3 = FTcpDeserializedMessage::GetMessage();
  if (*(longlong *)(lVar3 + 0x80) == 0) {
    if (0x3fffffff < param_4) {
      uVar6 = param_4 >> 0x1e;
      param_4 = param_4 + uVar6 * -0x40000000;
      do {
        uVar2 = (undefined4)((ulonglong)uVar7 >> 0x20);
        uVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
        uVar4 = IMessageToken::ToText(param_1);
        uVar5 = FTcpDeserializedMessage::GetMessage(param_1);
        uVar7 = CONCAT44(uVar2,uVar1);
        FUN_143d41550(param_3,param_2,0x40000000,uVar5,uVar4,uVar7);
        param_3 = param_3 + 0x40000000;
        param_2 = param_2 + 0x40000000;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    uVar1 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (param_4 != 0) {
      uVar2 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
      uVar7 = IMessageToken::ToText(param_1);
      uVar4 = FTcpDeserializedMessage::GetMessage(param_1);
      FUN_143d41550(param_3,param_2,param_4 & 0xffffffff,uVar4,uVar7,CONCAT44(uVar1,uVar2));
    }
  }
  else {
    uVar4 = IMessageToken::ToText(param_1);
    (**(code **)(lVar3 + 0x80))(param_3,param_2,param_4,lVar3,uVar4,uVar7);
  }
  return 1;
}



// FUNCTION 143cfff90 des_cfb64_cipher body=323 status=ok
// SIG undefined des_cfb64_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 des_cfb64_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 local_res20 [2];
  
  if (0x3fffffff < param_4) {
    uVar4 = param_4 >> 0x1e;
    param_4 = param_4 + uVar4 * -0x40000000;
    do {
      local_res20[0] = FOnlineVoiceImpl::GetNumLocalTalkers(param_1);
      uVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
      uVar2 = IMessageToken::ToText(param_1);
      uVar3 = FTcpDeserializedMessage::GetMessage(param_1);
      DES_cfb64_encrypt(param_3,param_2,0x40000000,uVar3,uVar2,local_res20,uVar1);
      FArchiveState::SetGameNetVer(param_1,local_res20[0]);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (param_4 != 0) {
    local_res20[0] = FOnlineVoiceImpl::GetNumLocalTalkers(param_1);
    uVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
    uVar2 = IMessageToken::ToText(param_1);
    uVar3 = FTcpDeserializedMessage::GetMessage(param_1);
    DES_cfb64_encrypt(param_3,param_2,param_4 & 0xffffffff,uVar3,uVar2,local_res20,uVar1);
    FArchiveState::SetGameNetVer(param_1,local_res20[0]);
  }
  return 1;
}



// FUNCTION 143d000e0 des_cfb1_cipher body=420 status=ok
// SIG undefined des_cfb1_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 des_cfb1_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte bVar6;
  ulonglong uVar7;
  byte local_48;
  byte local_47 [15];
  
  if (param_4 == 0) {
    return 1;
  }
  uVar4 = param_4;
  if (0x7ffffff < param_4) {
    uVar4 = 0x8000000;
  }
  do {
    if (param_4 < uVar4) {
      return 1;
    }
    uVar7 = 0;
    if ((uVar4 & 0x1fffffffffffffff) != 0) {
      do {
        bVar6 = (byte)uVar7;
        uVar5 = uVar7 >> 3;
        local_48 = -(((byte)(1 << (7 - (bVar6 & 7) & 0x1f)) & *(byte *)(uVar5 + param_3)) != 0) &
                   0x80;
        uVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
        uVar2 = IMessageToken::ToText(param_1);
        uVar3 = FTcpDeserializedMessage::GetMessage(param_1);
        FUN_143d41a50(&local_48,local_47,1,1,uVar3,uVar2,uVar1);
        uVar7 = uVar7 + 1;
        *(byte *)(uVar5 + param_2) =
             ~(byte)(0x80 >> (bVar6 & 7)) & *(byte *)(uVar5 + param_2) |
             (local_47[0] & 0x80) >> (bVar6 & 7);
      } while (uVar7 < uVar4 * 8);
    }
    param_4 = param_4 - uVar4;
    param_3 = param_3 + uVar4;
    param_2 = param_2 + uVar4;
    uVar7 = param_4;
    if (uVar4 <= param_4) {
      uVar7 = uVar4;
    }
    uVar4 = uVar7;
  } while (param_4 != 0);
  return 1;
}



// FUNCTION 143d00290 des_cfb8_cipher body=270 status=ok
// SIG undefined des_cfb8_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 des_cfb8_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143d002af;
  if (0x3fffffff < param_4) {
    uVar4 = param_4 >> 0x1e;
    param_4 = param_4 + uVar4 * -0x40000000;
    do {
      uVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
      uVar2 = IMessageToken::ToText(param_1);
      uVar3 = FTcpDeserializedMessage::GetMessage(param_1);
      FUN_143d41a50(param_3,param_2,8,0x40000000,uVar3,uVar2,uVar1);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (param_4 != 0) {
    uVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
    uVar2 = IMessageToken::ToText(param_1);
    uVar3 = FTcpDeserializedMessage::GetMessage(param_1);
    FUN_143d41a50(param_3,param_2,8,param_4 & 0xffffffff,uVar3,uVar2,uVar1,uVar5);
  }
  return 1;
}



// FUNCTION 143d003a0 FUN_143d003a0 body=8 status=ok
// SIG undefined FUN_143d003a0(void)

undefined * FUN_143d003a0(void)

{
  return &DAT_145d73240;
}



// FUNCTION 143d003b0 FUN_143d003b0 body=8 status=ok
// SIG undefined FUN_143d003b0(void)

undefined * FUN_143d003b0(void)

{
  return &DAT_145d733c0;
}



// FUNCTION 143d003c0 FUN_143d003c0 body=8 status=ok
// SIG undefined FUN_143d003c0(void)

undefined * FUN_143d003c0(void)

{
  return &DAT_145d732a0;
}



// FUNCTION 143d003d0 FUN_143d003d0 body=8 status=ok
// SIG undefined FUN_143d003d0(void)

undefined * FUN_143d003d0(void)

{
  return &DAT_145d73420;
}



// FUNCTION 143d003e0 FUN_143d003e0 body=8 status=ok
// SIG undefined FUN_143d003e0(void)

undefined * FUN_143d003e0(void)

{
  return &DAT_145d73360;
}



// FUNCTION 143d003f0 FUN_143d003f0 body=8 status=ok
// SIG undefined FUN_143d003f0(void)

undefined * FUN_143d003f0(void)

{
  return &DAT_145d73300;
}



// FUNCTION 143d00400 des_ede_init_key body=171 status=ok
// SIG undefined des_ede_init_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 des_ede_init_key(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FTcpDeserializedMessage::GetMessage();
  puVar1[0x30] = 0;
  DES_set_key_unchecked(param_2,puVar1);
  DES_set_key_unchecked(param_2 + 8,puVar1 + 0x10);
  puVar1[0x20] = *puVar1;
  puVar1[0x21] = puVar1[1];
  puVar1[0x22] = puVar1[2];
  puVar1[0x23] = puVar1[3];
  puVar1[0x24] = puVar1[4];
  puVar1[0x25] = puVar1[5];
  puVar1[0x26] = puVar1[6];
  puVar1[0x27] = puVar1[7];
  puVar1[0x28] = puVar1[8];
  puVar1[0x29] = puVar1[9];
  puVar1[0x2a] = puVar1[10];
  puVar1[0x2b] = puVar1[0xb];
  puVar1[0x2c] = puVar1[0xc];
  puVar1[0x2d] = puVar1[0xd];
  puVar1[0x2e] = puVar1[0xe];
  puVar1[0x2f] = puVar1[0xf];
  return 1;
}



// FUNCTION 143d004b0 des_ede3_init_key body=100 status=ok
// SIG undefined des_ede3_init_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 des_ede3_init_key(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FTcpDeserializedMessage::GetMessage();
  *(undefined8 *)(lVar1 + 0x180) = 0;
  DES_set_key_unchecked(param_2,lVar1);
  DES_set_key_unchecked(param_2 + 8,lVar1 + 0x80);
  DES_set_key_unchecked(param_2 + 0x10,lVar1 + 0x100);
  return 1;
}



// FUNCTION 143d00520 des3_ctrl body=146 status=ok
// SIG undefined des3_ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 des3_ctrl(undefined8 param_1,int param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 != 6) {
    return 0xffffffff;
  }
  uVar1 = UVariantSet::GetNumVariants();
  iVar2 = RAND_priv_bytes(param_4,uVar1);
  if (iVar2 < 1) {
    return 0;
  }
  DES_set_odd_parity(param_4);
  iVar2 = UVariantSet::GetNumVariants(param_1);
  if (0xf < iVar2) {
    DES_set_odd_parity(param_4 + 8);
  }
  iVar2 = UVariantSet::GetNumVariants(param_1);
  if (0x17 < iVar2) {
    DES_set_odd_parity(param_4 + 0x10);
  }
  return 1;
}



// FUNCTION 143d005c0 des_ede_ecb_cipher body=216 status=ok
// SIG undefined des_ede_ecb_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
des_ede_ecb_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  lVar2 = FHardwareCursor::GetHandle();
  uVar3 = (ulonglong)*(int *)(lVar2 + 4);
  if (uVar3 <= param_4) {
    lVar2 = param_3;
    do {
      uVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
      lVar4 = FTcpDeserializedMessage::GetMessage(param_1);
      lVar5 = FTcpDeserializedMessage::GetMessage(param_1);
      uVar6 = FTcpDeserializedMessage::GetMessage(param_1);
      DES_ecb3_encrypt(lVar2,lVar2 + (param_2 - param_3),uVar6,lVar5 + 0x80,lVar4 + 0x100,uVar1);
      lVar2 = lVar2 + uVar3;
    } while ((ulonglong)(lVar2 - param_3) <= param_4 - uVar3);
  }
  return 1;
}



// FUNCTION 143d006a0 des_ede_ofb_cipher body=396 status=ok
// SIG undefined des_ede_ofb_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
des_ede_ofb_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 local_res20 [2];
  
  if (0x3fffffff < param_4) {
    uVar5 = param_4 >> 0x1e;
    param_4 = param_4 + uVar5 * -0x40000000;
    do {
      local_res20[0] = FOnlineVoiceImpl::GetNumLocalTalkers(param_1);
      uVar1 = IMessageToken::ToText(param_1);
      lVar2 = FTcpDeserializedMessage::GetMessage(param_1);
      lVar3 = FTcpDeserializedMessage::GetMessage(param_1);
      uVar4 = FTcpDeserializedMessage::GetMessage(param_1);
      DES_ede3_ofb64_encrypt
                (param_3,param_2,0x40000000,uVar4,lVar3 + 0x80,lVar2 + 0x100,uVar1,local_res20);
      FArchiveState::SetGameNetVer(param_1,local_res20[0]);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (param_4 != 0) {
    local_res20[0] = FOnlineVoiceImpl::GetNumLocalTalkers(param_1);
    uVar1 = IMessageToken::ToText(param_1);
    lVar2 = FTcpDeserializedMessage::GetMessage(param_1);
    lVar3 = FTcpDeserializedMessage::GetMessage(param_1);
    uVar4 = FTcpDeserializedMessage::GetMessage(param_1);
    DES_ede3_ofb64_encrypt
              (param_3,param_2,param_4 & 0xffffffff,uVar4,lVar3 + 0x80,lVar2 + 0x100,uVar1,
               local_res20);
    FArchiveState::SetGameNetVer(param_1,local_res20[0]);
  }
  return 1;
}



// FUNCTION 143d00830 des_ede_cbc_cipher body=354 status=ok
// SIG undefined des_ede_cbc_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
des_ede_cbc_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143d00843;
  lVar3 = FTcpDeserializedMessage::GetMessage();
  uVar1 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (*(longlong *)(lVar3 + 0x180) == 0) {
    if (0x3fffffff < param_4) {
      uVar5 = param_4 >> 0x1e;
      param_4 = param_4 + uVar5 * -0x40000000;
      do {
        uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
        uVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
        uVar4 = IMessageToken::ToText(param_1);
        uVar6 = CONCAT44(uVar2,uVar1);
        FUN_143d3ea00(param_3,param_2,0x40000000,lVar3,lVar3 + 0x80,lVar3 + 0x100,uVar4,uVar6);
        uVar1 = (undefined4)((ulonglong)uVar6 >> 0x20);
        param_3 = param_3 + 0x40000000;
        param_2 = param_2 + 0x40000000;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if (param_4 != 0) {
      uVar2 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
      uVar6 = IMessageToken::ToText(param_1);
      FUN_143d3ea00(param_3,param_2,param_4 & 0xffffffff,lVar3,lVar3 + 0x80,lVar3 + 0x100,uVar6,
                    CONCAT44(uVar1,uVar2));
    }
    return 1;
  }
  uVar6 = IMessageToken::ToText(param_1);
  (**(code **)(lVar3 + 0x180))(param_3,param_2,param_4,lVar3,uVar6);
  return 1;
}



// FUNCTION 143d009a0 des_ede_cfb64_cipher body=452 status=ok
// SIG undefined des_ede_cfb64_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
des_ede_cfb64_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong local_res20;
  undefined4 local_48 [2];
  undefined8 uStack_40;
  
  uStack_40 = 0x143d009bf;
  if (0x3fffffff < param_4) {
    uVar6 = param_4 >> 0x1e;
    local_res20 = param_4 + uVar6 * -0x40000000;
    do {
      local_48[0] = FOnlineVoiceImpl::GetNumLocalTalkers(param_1);
      uVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
      uVar2 = IMessageToken::ToText(param_1);
      lVar3 = FTcpDeserializedMessage::GetMessage(param_1);
      lVar4 = FTcpDeserializedMessage::GetMessage(param_1);
      uVar5 = FTcpDeserializedMessage::GetMessage(param_1);
      DES_ede3_cfb64_encrypt
                (param_3,param_2,0x40000000,uVar5,lVar4 + 0x80,lVar3 + 0x100,uVar2,local_48,uVar1);
      FArchiveState::SetGameNetVer(param_1,local_48[0]);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar6 = uVar6 - 1;
      param_4 = local_res20;
    } while (uVar6 != 0);
  }
  if (param_4 != 0) {
    uVar1 = FOnlineVoiceImpl::GetNumLocalTalkers(param_1);
    local_res20 = CONCAT44(local_res20._4_4_,uVar1);
    uVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
    uVar2 = IMessageToken::ToText(param_1);
    lVar3 = FTcpDeserializedMessage::GetMessage(param_1);
    lVar4 = FTcpDeserializedMessage::GetMessage(param_1);
    uVar5 = FTcpDeserializedMessage::GetMessage(param_1);
    DES_ede3_cfb64_encrypt
              (param_3,param_2,param_4 & 0xffffffff,uVar5,lVar4 + 0x80,lVar3 + 0x100,uVar2,
               &local_res20,uVar1);
    FArchiveState::SetGameNetVer(param_1,local_res20 & 0xffffffff);
  }
  return 1;
}



// FUNCTION 143d00b70 des_ede3_cfb1_cipher body=359 status=ok
// SIG undefined des_ede3_cfb1_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
des_ede3_cfb1_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  byte bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  byte local_res20 [8];
  byte local_48 [16];
  
  iVar1 = EVP_CIPHER_CTX_test_flags(param_1,0x2000);
  if (iVar1 == 0) {
    param_4 = param_4 * 8;
  }
  uVar8 = 0;
  if (param_4 != 0) {
    do {
      bVar7 = (byte)uVar8;
      uVar9 = uVar8 >> 3;
      local_res20[0] =
           -(((byte)(1 << (7 - (bVar7 & 7) & 0x1f)) & *(byte *)(uVar9 + param_3)) != 0) & 0x80;
      uVar2 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
      uVar3 = IMessageToken::ToText(param_1);
      lVar4 = FTcpDeserializedMessage::GetMessage(param_1);
      lVar5 = FTcpDeserializedMessage::GetMessage(param_1);
      uVar6 = FTcpDeserializedMessage::GetMessage(param_1);
      FUN_143d43040(local_res20,local_48,1,1,uVar6,lVar5 + 0x80,lVar4 + 0x100,uVar3,uVar2);
      uVar8 = uVar8 + 1;
      *(byte *)(uVar9 + param_2) =
           ~(byte)(0x80 >> (bVar7 & 7)) & *(byte *)(uVar9 + param_2) |
           (local_48[0] & 0x80) >> (bVar7 & 7);
    } while (uVar8 < param_4);
  }
  return 1;
}



// FUNCTION 143d00ce0 des_ede3_cfb8_cipher body=383 status=ok
// SIG undefined des_ede3_cfb8_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
des_ede3_cfb8_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  if (0x3fffffff < param_4) {
    uVar6 = param_4 >> 0x1e;
    param_4 = param_4 + uVar6 * -0x40000000;
    do {
      uVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
      uVar2 = IMessageToken::ToText(param_1);
      lVar3 = FTcpDeserializedMessage::GetMessage(param_1);
      lVar4 = FTcpDeserializedMessage::GetMessage(param_1);
      uVar5 = FTcpDeserializedMessage::GetMessage(param_1);
      FUN_143d43040(param_3,param_2,8,0x40000000,uVar5,lVar4 + 0x80,lVar3 + 0x100,uVar2,uVar1);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (param_4 != 0) {
    uVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
    uVar2 = IMessageToken::ToText(param_1);
    lVar3 = FTcpDeserializedMessage::GetMessage(param_1);
    lVar4 = FTcpDeserializedMessage::GetMessage(param_1);
    uVar5 = FTcpDeserializedMessage::GetMessage(param_1);
    FUN_143d43040(param_3,param_2,8,param_4 & 0xffffffff,uVar5,lVar4 + 0x80,lVar3 + 0x100,uVar2,
                  uVar1);
  }
  return 1;
}



// FUNCTION 143d00e60 des_ede3_wrap_cipher body=394 status=ok
// SIG undefined des_ede3_wrap_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong des_ede3_wrap_cipher
                    (undefined8 param_1,undefined8 *param_2,void *param_3,ulonglong param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  if ((param_4 < 0x40000000) && ((param_4 & 7) == 0)) {
    iVar1 = is_partially_overlapping(param_2,param_3,param_4 & 0xffffffff);
    if (iVar1 == 0) {
      iVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
      if (iVar1 == 0) {
        uVar3 = des_ede3_unwrap(param_1,param_2,param_3,param_4);
      }
      else if (param_2 == (undefined8 *)0x0) {
        uVar3 = (ulonglong)((int)param_4 + 0x10);
      }
      else {
        _guard_xfg_dispatch_icall_nop(param_2 + 1,param_3,param_4);
        SHA1(param_3,param_4,local_48);
        *(undefined8 *)(param_4 + 8 + (longlong)param_2) = local_48[0];
        FUN_14004ff40(local_48,0x14);
        uVar2 = IMessageToken::ToText(param_1);
        iVar1 = RAND_bytes(uVar2,8);
        if (iVar1 < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          puVar4 = (undefined8 *)IMessageToken::ToText(param_1);
          *param_2 = *puVar4;
          des_ede_cbc_cipher(param_1,param_2 + 1,param_2 + 1,param_4 + 8);
          BUF_reverse(param_2,0,param_4 + 0x10);
          puVar4 = (undefined8 *)IMessageToken::ToText(param_1);
          *puVar4 = 0x521e8792ca2dd4a;
          des_ede_cbc_cipher(param_1,param_2,param_2,param_4 + 0x10);
          uVar3 = (ulonglong)((int)param_4 + 0x10);
        }
      }
    }
    else {
      local_58 = 0x18e;
      ERR_put_error(6,0xab,0xa2,"crypto\\evp\\e_des3.c");
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



// FUNCTION 143d00ff0 FUN_143d00ff0 body=8 status=ok
// SIG undefined FUN_143d00ff0(void)

undefined * FUN_143d00ff0(void)

{
  return &DAT_145d735a0;
}



// FUNCTION 143d01000 FUN_143d01000 body=8 status=ok
// SIG undefined FUN_143d01000(void)

undefined * FUN_143d01000(void)

{
  return &DAT_145d73720;
}



// FUNCTION 143d01010 FUN_143d01010 body=8 status=ok
// SIG undefined FUN_143d01010(void)

undefined * FUN_143d01010(void)

{
  return &DAT_145d73600;
}



// FUNCTION 143d01020 FUN_143d01020 body=8 status=ok
// SIG undefined FUN_143d01020(void)

undefined * FUN_143d01020(void)

{
  return &DAT_145d73780;
}



// FUNCTION 143d01030 FUN_143d01030 body=8 status=ok
// SIG undefined FUN_143d01030(void)

undefined * FUN_143d01030(void)

{
  return &DAT_145d73660;
}



// FUNCTION 143d01040 FUN_143d01040 body=8 status=ok
// SIG undefined FUN_143d01040(void)

undefined * FUN_143d01040(void)

{
  return &DAT_145d737e0;
}



// FUNCTION 143d01050 FUN_143d01050 body=8 status=ok
// SIG undefined FUN_143d01050(void)

undefined * FUN_143d01050(void)

{
  return &DAT_145d736c0;
}



// FUNCTION 143d01060 FUN_143d01060 body=8 status=ok
// SIG undefined FUN_143d01060(void)

undefined * FUN_143d01060(void)

{
  return &DAT_145d73840;
}



// FUNCTION 143d01070 FUN_143d01070 body=8 status=ok
// SIG undefined FUN_143d01070(void)

undefined * FUN_143d01070(void)

{
  return &DAT_145d73480;
}



// FUNCTION 143d01080 FUN_143d01080 body=8 status=ok
// SIG undefined FUN_143d01080(void)

undefined * FUN_143d01080(void)

{
  return &DAT_145d734e0;
}



// FUNCTION 143d01090 FUN_143d01090 body=8 status=ok
// SIG undefined FUN_143d01090(void)

undefined * FUN_143d01090(void)

{
  return &DAT_145d73540;
}



// FUNCTION 143d010a0 des_ede3_unwrap body=597 status=ok
// SIG undefined des_ede3_unwrap(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int des_ede3_unwrap(undefined8 param_1,void *param_2,void *param_3,ulonglong param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [24];
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  iVar1 = -1;
  if (0x17 < param_4) {
    if (param_2 == (void *)0x0) {
      iVar1 = (int)param_4 + -0x10;
    }
    else {
      puVar4 = (undefined8 *)IMessageToken::ToText();
      *puVar4 = 0x521e8792ca2dd4a;
      des_ede_cbc_cipher(param_1,local_78,param_3,8);
      if (param_2 == param_3) {
        _guard_xfg_dispatch_icall_nop(param_2,(void *)((longlong)param_2 + 8),param_4 - 8);
        param_3 = (void *)((longlong)param_3 + -8);
      }
      des_ede_cbc_cipher(param_1,param_2,(longlong)param_3 + 8,param_4 - 0x10);
      des_ede_cbc_cipher(param_1,local_70,(param_4 - 8) + (longlong)param_3,8);
      BUF_reverse(local_78,0,8);
      BUF_reverse(param_2,0,param_4 - 0x10);
      uVar5 = IMessageToken::ToText(param_1);
      BUF_reverse(uVar5,local_70,8);
      des_ede_cbc_cipher(param_1,param_2,param_2,param_4 - 0x10);
      lVar6 = FTcpDeserializedMessage::GetMessage(param_1);
      if (*(longlong *)(lVar6 + 0x180) == 0) {
        uVar2 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
        local_88 = IMessageToken::ToText(param_1);
        local_98 = lVar6 + 0x80;
        local_90 = lVar6 + 0x100;
        local_80 = uVar2;
        FUN_143d3ea00(local_78,local_78,8,lVar6);
      }
      else {
        local_98 = IMessageToken::ToText();
        (**(code **)(lVar6 + 0x180))(local_78,local_78,8,lVar6);
      }
      SHA1(param_2,param_4 - 0x10,local_68);
      iVar3 = FUN_14004ffa0(local_68,local_78,8);
      if (iVar3 == 0) {
        iVar1 = (int)param_4 + -0x10;
      }
      FUN_14004ff40(local_78,8);
      FUN_14004ff40(local_68,0x14);
      FUN_14004ff40(local_70,8);
      uVar5 = IMessageToken::ToText(param_1);
      FUN_14004ff40(uVar5,8);
      if (iVar1 == -1) {
        FUN_14004ff40(param_2,param_4 - 0x10);
      }
    }
  }
  return iVar1;
}



// FUNCTION 143d01300 rc4_init_key body=79 status=ok
// SIG undefined rc4_init_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 rc4_init_key(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = UVariantSet::GetNumVariants();
  uVar2 = FTcpDeserializedMessage::GetMessage(param_1);
  FUN_140055620(uVar2,uVar1,param_2);
  return 1;
}



// FUNCTION 143d01350 rc4_cipher body=76 status=ok
// SIG undefined rc4_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 rc4_cipher(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FTcpDeserializedMessage::GetMessage();
  FUN_140054f80(uVar1,param_4,param_3,param_2);
  return 1;
}



// FUNCTION 143d013a0 FUN_143d013a0 body=8 status=ok
// SIG undefined FUN_143d013a0(void)

undefined * FUN_143d013a0(void)

{
  return &DAT_145d738b0;
}



// FUNCTION 143d013b0 FUN_143d013b0 body=8 status=ok
// SIG undefined FUN_143d013b0(void)

undefined * FUN_143d013b0(void)

{
  return &DAT_145d73910;
}



// FUNCTION 143d013c0 rc4_hmac_md5_init_key body=255 status=ok
// SIG undefined rc4_hmac_md5_init_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 rc4_hmac_md5_init_key(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  lVar3 = FTcpDeserializedMessage::GetMessage();
  uVar2 = UVariantSet::GetNumVariants(param_1);
  FUN_140055620(lVar3,uVar2,param_2);
  puVar1 = (undefined8 *)(lVar3 + 0x408);
  MD5_Init(puVar1);
  *(undefined8 *)(lVar3 + 0x520) = 0xffffffffffffffff;
  *(undefined8 *)(lVar3 + 0x464) = *puVar1;
  *(undefined8 *)(lVar3 + 0x46c) = *(undefined8 *)(lVar3 + 0x410);
  *(undefined8 *)(lVar3 + 0x474) = *(undefined8 *)(lVar3 + 0x418);
  *(undefined8 *)(lVar3 + 0x47c) = *(undefined8 *)(lVar3 + 0x420);
  *(undefined8 *)(lVar3 + 0x484) = *(undefined8 *)(lVar3 + 0x428);
  *(undefined8 *)(lVar3 + 0x48c) = *(undefined8 *)(lVar3 + 0x430);
  *(undefined8 *)(lVar3 + 0x494) = *(undefined8 *)(lVar3 + 0x438);
  *(undefined8 *)(lVar3 + 0x49c) = *(undefined8 *)(lVar3 + 0x440);
  *(undefined8 *)(lVar3 + 0x4a4) = *(undefined8 *)(lVar3 + 0x448);
  *(undefined8 *)(lVar3 + 0x4ac) = *(undefined8 *)(lVar3 + 0x450);
  *(undefined8 *)(lVar3 + 0x4b4) = *(undefined8 *)(lVar3 + 0x458);
  *(undefined4 *)(lVar3 + 0x4bc) = *(undefined4 *)(lVar3 + 0x460);
  *(undefined8 *)(lVar3 + 0x4c0) = *puVar1;
  *(undefined8 *)(lVar3 + 0x4c8) = *(undefined8 *)(lVar3 + 0x410);
  *(undefined8 *)(lVar3 + 0x4d0) = *(undefined8 *)(lVar3 + 0x418);
  *(undefined8 *)(lVar3 + 0x4d8) = *(undefined8 *)(lVar3 + 0x420);
  *(undefined8 *)(lVar3 + 0x4e0) = *(undefined8 *)(lVar3 + 0x428);
  *(undefined8 *)(lVar3 + 0x4e8) = *(undefined8 *)(lVar3 + 0x430);
  *(undefined8 *)(lVar3 + 0x4f0) = *(undefined8 *)(lVar3 + 0x438);
  *(undefined8 *)(lVar3 + 0x4f8) = *(undefined8 *)(lVar3 + 0x440);
  *(undefined8 *)(lVar3 + 0x500) = *(undefined8 *)(lVar3 + 0x448);
  *(undefined8 *)(lVar3 + 0x508) = *(undefined8 *)(lVar3 + 0x450);
  *(undefined8 *)(lVar3 + 0x510) = *(undefined8 *)(lVar3 + 0x458);
  *(undefined4 *)(lVar3 + 0x518) = *(undefined4 *)(lVar3 + 0x460);
  return 1;
}



// FUNCTION 143d014c0 rc4_hmac_md5_cipher body=1079 status=ok
// SIG undefined rc4_hmac_md5_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
rc4_hmac_md5_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  void *_Dst;
  int iVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  void *pvVar11;
  uint *puVar12;
  ulonglong uVar13;
  undefined1 auStack_98 [32];
  longlong local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong local_60 [2];
  ulonglong local_50;
  undefined8 uStack_48;
  
  uStack_48 = 0x143d014d7;
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_60[0] = param_2;
  puVar2 = (uint *)FTcpDeserializedMessage::GetMessage();
  uVar7 = *(ulonglong *)(puVar2 + 0x148);
  uVar8 = (ulonglong)(0x40 - puVar2[0x146]);
  uVar10 = (ulonglong)(0x1f - (*puVar2 & 0x1f));
  if ((uVar7 == 0xffffffffffffffff) || (param_4 == uVar7 + 0x10)) {
    local_68 = uVar7;
    iVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
    if (iVar1 == 0) {
      lVar9 = 0x80;
      if (uVar8 <= uVar10) {
        lVar9 = 0x40;
      }
      uVar10 = uVar10 + lVar9;
      if (((uVar10 < param_4) && (uVar7 = param_4 - uVar10 >> 6, uVar7 != 0)) &&
         ((DAT_146bcd580 & 0x100000) == 0)) {
        FUN_140054f80(puVar2,uVar10,param_3,param_2);
        MD5_Update(puVar2 + 0x130,param_2,uVar8);
        local_78 = uVar8 + param_2;
        local_70 = uVar7;
        FUN_140055900(puVar2,uVar10 + param_3,uVar10 + param_2,puVar2 + 0x130);
        uVar4 = puVar2[0x135];
        lVar5 = uVar8 + uVar7 * 0x40;
        uVar6 = (int)(uVar7 << 9) + puVar2[0x134];
        if (uVar6 < puVar2[0x134]) {
          uVar4 = uVar4 + 1;
        }
        puVar2[0x134] = uVar6;
        puVar2[0x135] = (int)(param_4 - uVar10 >> 0x1d) + uVar4;
        lVar9 = uVar10 + uVar7 * 0x40;
      }
      else {
        lVar5 = 0;
        lVar9 = lVar5;
      }
      puVar12 = puVar2 + 0x130;
      FUN_140054f80(puVar2,param_4 - lVar9,param_3 + lVar9,lVar9 + param_2);
      uVar7 = local_68;
      if (local_68 == 0xffffffffffffffff) {
        MD5_Update(puVar12,lVar5 + param_2,param_4 - lVar5);
      }
      else {
        MD5_Update(puVar12,lVar5 + param_2,local_68 - lVar5);
        MD5_Final(local_60,puVar12);
        *(undefined8 *)puVar12 = *(undefined8 *)(puVar2 + 0x119);
        *(undefined8 *)(puVar2 + 0x132) = *(undefined8 *)(puVar2 + 0x11b);
        *(undefined8 *)(puVar2 + 0x134) = *(undefined8 *)(puVar2 + 0x11d);
        *(undefined8 *)(puVar2 + 0x136) = *(undefined8 *)(puVar2 + 0x11f);
        *(undefined8 *)(puVar2 + 0x138) = *(undefined8 *)(puVar2 + 0x121);
        *(undefined8 *)(puVar2 + 0x13a) = *(undefined8 *)(puVar2 + 0x123);
        *(undefined8 *)(puVar2 + 0x13c) = *(undefined8 *)(puVar2 + 0x125);
        *(undefined8 *)(puVar2 + 0x13e) = *(undefined8 *)(puVar2 + 0x127);
        puVar2[0x140] = puVar2[0x129];
        puVar2[0x141] = puVar2[0x12a];
        puVar2[0x142] = puVar2[299];
        puVar2[0x143] = puVar2[300];
        *(undefined8 *)(puVar2 + 0x144) = *(undefined8 *)(puVar2 + 0x12d);
        puVar2[0x146] = puVar2[0x12f];
        MD5_Update(puVar12,local_60,0x10);
        MD5_Final(local_60,puVar12);
        iVar1 = FUN_14004ffa0(uVar7 + param_2,local_60,0x10);
        if (iVar1 != 0) goto LAB_143d018ba;
      }
    }
    else {
      uVar13 = param_4;
      if (uVar7 != 0xffffffffffffffff) {
        uVar13 = uVar7;
      }
      local_68 = uVar8 + 0x40;
      if (uVar10 <= uVar8) {
        local_68 = uVar8;
      }
      if (((local_68 < uVar13) && (uVar7 = uVar13 - local_68, uVar8 = uVar7 >> 6, uVar8 != 0)) &&
         ((DAT_146bcd580 & 0x100000) == 0)) {
        MD5_Update(puVar2 + 0x130,param_3,local_68);
        lVar9 = local_60[0];
        FUN_140054f80(puVar2,uVar10,param_3,local_60[0]);
        local_78 = local_68 + param_3;
        local_70 = uVar8;
        FUN_140055900(puVar2,param_3 + uVar10,uVar10 + lVar9,puVar2 + 0x130);
        lVar9 = uVar10 + uVar8 * 0x40;
        lVar5 = local_68 + uVar8 * 0x40;
        uVar6 = (int)(uVar7 >> 0x1d) + puVar2[0x135];
        puVar2[0x135] = uVar6;
        uVar4 = (uint)(uVar8 << 9);
        puVar2[0x134] = puVar2[0x134] + uVar4;
        if (puVar2[0x134] < uVar4) {
          puVar2[0x135] = uVar6 + 1;
        }
      }
      else {
        lVar5 = 0;
        lVar9 = lVar5;
      }
      puVar12 = puVar2 + 0x130;
      MD5_Update(puVar12,param_3 + lVar5,uVar13 - lVar5);
      lVar5 = local_60[0];
      _Dst = (void *)(local_60[0] + lVar9);
      if (uVar13 == param_4) {
        pvVar11 = (void *)(param_3 + lVar9);
      }
      else {
        if (param_3 != local_60[0]) {
          _guard_xfg_dispatch_icall_nop(_Dst,(void *)(param_3 + lVar9),uVar13 - lVar9);
        }
        lVar5 = lVar5 + uVar13;
        MD5_Final(lVar5,puVar12);
        *(undefined8 *)puVar12 = *(undefined8 *)(puVar2 + 0x119);
        *(undefined8 *)(puVar2 + 0x132) = *(undefined8 *)(puVar2 + 0x11b);
        *(undefined8 *)(puVar2 + 0x134) = *(undefined8 *)(puVar2 + 0x11d);
        *(undefined8 *)(puVar2 + 0x136) = *(undefined8 *)(puVar2 + 0x11f);
        *(undefined8 *)(puVar2 + 0x138) = *(undefined8 *)(puVar2 + 0x121);
        *(undefined8 *)(puVar2 + 0x13a) = *(undefined8 *)(puVar2 + 0x123);
        *(undefined8 *)(puVar2 + 0x13c) = *(undefined8 *)(puVar2 + 0x125);
        *(undefined8 *)(puVar2 + 0x13e) = *(undefined8 *)(puVar2 + 0x127);
        puVar2[0x140] = puVar2[0x129];
        puVar2[0x141] = puVar2[0x12a];
        puVar2[0x142] = puVar2[299];
        puVar2[0x143] = puVar2[300];
        *(undefined8 *)(puVar2 + 0x144) = *(undefined8 *)(puVar2 + 0x12d);
        puVar2[0x146] = puVar2[0x12f];
        MD5_Update(puVar12,lVar5,0x10);
        MD5_Final(lVar5,puVar12);
        pvVar11 = _Dst;
      }
      FUN_140054f80(puVar2,param_4 - lVar9,pvVar11,_Dst);
    }
    puVar2[0x148] = 0xffffffff;
    puVar2[0x149] = 0xffffffff;
    uVar3 = 1;
  }
  else {
LAB_143d018ba:
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 143d01900 rc4_hmac_md5_ctrl body=599 status=ok
// SIG undefined rc4_hmac_md5_ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 rc4_hmac_md5_ctrl(undefined8 param_1,int param_2,int param_3,void *param_4)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x143d01919;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  lVar2 = FTcpDeserializedMessage::GetMessage();
  if (param_2 == 0x16) {
    if (param_3 == 0xd) {
      uVar3 = (uint)CONCAT11(*(undefined1 *)((longlong)param_4 + 0xb),
                             *(undefined1 *)((longlong)param_4 + 0xc));
      iVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
      if (iVar1 == 0) {
        if (uVar3 < 0x10) {
          return 0xffffffff;
        }
        uVar3 = uVar3 - 0x10;
        *(char *)((longlong)param_4 + 0xc) = (char)uVar3;
        *(char *)((longlong)param_4 + 0xb) = (char)(uVar3 >> 8);
      }
      *(ulonglong *)(lVar2 + 0x520) = (ulonglong)uVar3;
      *(undefined8 *)(lVar2 + 0x4c0) = *(undefined8 *)(lVar2 + 0x408);
      *(undefined8 *)(lVar2 + 0x4c8) = *(undefined8 *)(lVar2 + 0x410);
      *(undefined8 *)(lVar2 + 0x4d0) = *(undefined8 *)(lVar2 + 0x418);
      *(undefined8 *)(lVar2 + 0x4d8) = *(undefined8 *)(lVar2 + 0x420);
      *(undefined8 *)(lVar2 + 0x4e0) = *(undefined8 *)(lVar2 + 0x428);
      *(undefined8 *)(lVar2 + 0x4e8) = *(undefined8 *)(lVar2 + 0x430);
      *(undefined8 *)(lVar2 + 0x4f0) = *(undefined8 *)(lVar2 + 0x438);
      *(undefined8 *)(lVar2 + 0x4f8) = *(undefined8 *)(lVar2 + 0x440);
      *(undefined8 *)(lVar2 + 0x500) = *(undefined8 *)(lVar2 + 0x448);
      *(undefined8 *)(lVar2 + 0x508) = *(undefined8 *)(lVar2 + 0x450);
      *(undefined8 *)(lVar2 + 0x510) = *(undefined8 *)(lVar2 + 0x458);
      *(undefined4 *)(lVar2 + 0x518) = *(undefined4 *)(lVar2 + 0x460);
      MD5_Update((undefined8 *)(lVar2 + 0x4c0),param_4,0xd);
      return 0x10;
    }
  }
  else if (param_2 == 0x17) {
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    if (param_3 < 0x41) {
      _guard_xfg_dispatch_icall_nop(&local_78,param_4,(longlong)param_3);
    }
    else {
      MD5_Init(lVar2 + 0x408);
      MD5_Update(lVar2 + 0x408,param_4,(longlong)param_3);
      MD5_Final(&local_78,lVar2 + 0x408);
    }
    local_78 = local_78 ^ 0x3636363636363636;
    uStack_70 = uStack_70 ^ 0x3636363636363636;
    local_68 = local_68 ^ 0x3636363636363636;
    uStack_60 = uStack_60 ^ 0x3636363636363636;
    local_58 = local_58 ^ 0x3636363636363636;
    uStack_50 = uStack_50 ^ 0x3636363636363636;
    local_48 = local_48 ^ 0x3636363636363636;
    uStack_40 = uStack_40 ^ 0x3636363636363636;
    MD5_Init(lVar2 + 0x408);
    MD5_Update(lVar2 + 0x408,&local_78,0x40);
    local_78 = local_78 ^ 0x6a6a6a6a6a6a6a6a;
    uStack_70 = uStack_70 ^ 0x6a6a6a6a6a6a6a6a;
    local_68 = local_68 ^ 0x6a6a6a6a6a6a6a6a;
    uStack_60 = uStack_60 ^ 0x6a6a6a6a6a6a6a6a;
    local_58 = local_58 ^ 0x6a6a6a6a6a6a6a6a;
    uStack_50 = uStack_50 ^ 0x6a6a6a6a6a6a6a6a;
    local_48 = local_48 ^ 0x6a6a6a6a6a6a6a6a;
    uStack_40 = uStack_40 ^ 0x6a6a6a6a6a6a6a6a;
    MD5_Init(lVar2 + 0x464);
    MD5_Update(lVar2 + 0x464,&local_78,0x40);
    FUN_14004ff40(&local_78,0x40);
    return 1;
  }
  return 0xffffffff;
}



// FUNCTION 143d01b60 FUN_143d01b60 body=8 status=ok
// SIG undefined FUN_143d01b60(void)

undefined * FUN_143d01b60(void)

{
  return &DAT_146836c90;
}



// FUNCTION 143d01b70 idea_init_key body=205 status=ok
// SIG undefined idea_init_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 idea_init_key(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [224];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143d01b80;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  if (param_4 == 0) {
    uVar2 = FHardwareCursor::GetHandle();
    uVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(uVar2);
    if ((uVar1 & 0xf0007) != 4) {
      uVar2 = FHardwareCursor::GetHandle(param_1);
      uVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(uVar2);
      if ((uVar1 & 0xf0007) != 3) {
        IDEA_set_encrypt_key(param_2,local_f8);
        uVar2 = FTcpDeserializedMessage::GetMessage(param_1);
        IDEA_set_decrypt_key(local_f8,uVar2);
        FUN_14004ff40(local_f8,0xd8);
        return 1;
      }
    }
  }
  uVar2 = FTcpDeserializedMessage::GetMessage(param_1);
  IDEA_set_encrypt_key(param_2,uVar2);
  return 1;
}



// FUNCTION 143d01c40 idea_ecb_cipher body=135 status=ok
// SIG undefined idea_ecb_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 idea_ecb_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  lVar1 = FHardwareCursor::GetHandle();
  uVar3 = (ulonglong)*(int *)(lVar1 + 4);
  if (uVar3 <= param_4) {
    lVar1 = param_3;
    do {
      uVar2 = FTcpDeserializedMessage::GetMessage(param_1);
      IDEA_ecb_encrypt(lVar1,(param_2 - param_3) + lVar1,uVar2);
      lVar1 = lVar1 + uVar3;
    } while ((ulonglong)(lVar1 - param_3) <= param_4 - uVar3);
  }
  return 1;
}



// FUNCTION 143d01cd0 FUN_143d01cd0 body=254 status=ok
// SIG undefined FUN_143d01cd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_143d01cd0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143d01cef;
  uVar1 = 1;
  if (0x3fffffff < param_4) {
    uVar5 = param_4 >> 0x1e;
    param_4 = param_4 + uVar5 * -0x40000000;
    do {
      uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
      uVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
      uVar3 = IMessageToken::ToText(param_1);
      uVar4 = FTcpDeserializedMessage::GetMessage(param_1);
      uVar6 = CONCAT44(uVar2,uVar1);
      FUN_143d43ee0(param_3,param_2,0x40000000,uVar4,uVar3,uVar6);
      uVar1 = (undefined4)((ulonglong)uVar6 >> 0x20);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (param_4 != 0) {
    uVar2 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
    uVar6 = IMessageToken::ToText(param_1);
    uVar3 = FTcpDeserializedMessage::GetMessage(param_1);
    FUN_143d43ee0(param_3,param_2,param_4 & 0xffffffff,uVar3,uVar6,CONCAT44(uVar1,uVar2));
  }
  return 1;
}



// FUNCTION 143d01dd0 idea_ofb_cipher body=279 status=ok
// SIG undefined idea_ofb_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 idea_ofb_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 local_res20 [2];
  
  if (0x3fffffff < param_4) {
    uVar3 = param_4 >> 0x1e;
    param_4 = param_4 + uVar3 * -0x40000000;
    do {
      local_res20[0] = FOnlineVoiceImpl::GetNumLocalTalkers(param_1);
      uVar1 = IMessageToken::ToText(param_1);
      uVar2 = FTcpDeserializedMessage::GetMessage(param_1);
      IDEA_ofb64_encrypt(param_3,param_2,0x40000000,uVar2,uVar1,local_res20);
      FArchiveState::SetGameNetVer(param_1,local_res20[0]);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (param_4 != 0) {
    local_res20[0] = FOnlineVoiceImpl::GetNumLocalTalkers(param_1);
    uVar1 = IMessageToken::ToText(param_1);
    uVar2 = FTcpDeserializedMessage::GetMessage(param_1);
    IDEA_ofb64_encrypt(param_3,param_2,param_4 & 0xffffffff,uVar2,uVar1,local_res20);
    FArchiveState::SetGameNetVer(param_1,local_res20[0]);
  }
  return 1;
}



// FUNCTION 143d01ef0 idea_cfb64_cipher body=267 status=ok
// SIG undefined idea_cfb64_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 idea_cfb64_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 local_res20 [2];
  
  if (param_4 == 0) {
    return 1;
  }
  uVar5 = param_4;
  if (0x3fffffff < param_4) {
    uVar5 = 0x40000000;
  }
  do {
    if (param_4 < uVar5) {
      return 1;
    }
    local_res20[0] = FOnlineVoiceImpl::GetNumLocalTalkers(param_1);
    uVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
    uVar2 = IMessageToken::ToText(param_1);
    uVar3 = FTcpDeserializedMessage::GetMessage(param_1);
    IDEA_cfb64_encrypt(param_3,param_2,uVar5 & 0xffffffff,uVar3,uVar2,local_res20,uVar1);
    FArchiveState::SetGameNetVer(param_1,local_res20[0]);
    param_4 = param_4 - uVar5;
    param_3 = param_3 + uVar5;
    param_2 = param_2 + uVar5;
    uVar4 = param_4;
    if (uVar5 <= param_4) {
      uVar4 = uVar5;
    }
    uVar5 = uVar4;
  } while (param_4 != 0);
  return 1;
}



// FUNCTION 143d02000 FUN_143d02000 body=8 status=ok
// SIG undefined FUN_143d02000(void)

undefined * FUN_143d02000(void)

{
  return &DAT_145d73970;
}



// FUNCTION 143d02010 FUN_143d02010 body=8 status=ok
// SIG undefined FUN_143d02010(void)

undefined * FUN_143d02010(void)

{
  return &DAT_145d739d0;
}



// FUNCTION 143d02020 FUN_143d02020 body=8 status=ok
// SIG undefined FUN_143d02020(void)

undefined * FUN_143d02020(void)

{
  return &DAT_145d73a90;
}



// FUNCTION 143d02030 FUN_143d02030 body=8 status=ok
// SIG undefined FUN_143d02030(void)

undefined * FUN_143d02030(void)

{
  return &DAT_145d73a30;
}



// FUNCTION 143d02040 rc2_init_key body=104 status=ok
// SIG undefined rc2_init_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 rc2_init_key(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  puVar2 = (undefined4 *)FTcpDeserializedMessage::GetMessage();
  uVar1 = UVariantSet::GetNumVariants(param_1);
  lVar3 = FTcpDeserializedMessage::GetMessage(param_1);
  RC2_set_key(lVar3 + 4,uVar1,param_2,*puVar2);
  return 1;
}



// FUNCTION 143d020b0 rc2_set_asn1_type_and_iv body=167 status=ok
// SIG undefined rc2_set_asn1_type_and_iv(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 rc2_set_asn1_type_and_iv(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int local_res10 [2];
  
  if (param_2 != 0) {
    EVP_CIPHER_CTX_ctrl(param_1,2,0,local_res10);
    if (local_res10[0] == 0x80) {
      uVar3 = 0x3a;
    }
    else if (local_res10[0] == 0x40) {
      uVar3 = 0x78;
    }
    else {
      uVar3 = 0;
      if (local_res10[0] == 0x28) {
        uVar3 = 0xa0;
      }
    }
    uVar1 = EVP_CIPHER_CTX_iv_length(param_1);
    uVar2 = IMessageToken::GetOnMessageTokenActivated(param_1);
    uVar2 = ASN1_TYPE_set_int_octetstring(param_2,uVar3,uVar2,uVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 143d02160 rc2_get_asn1_type_and_iv body=307 status=ok
// SIG undefined rc2_get_asn1_type_and_iv(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint rc2_get_asn1_type_and_iv(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined4 local_40;
  int local_38 [2];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = EVP_CIPHER_CTX_iv_length();
  if (0x10 < uVar1) {
    OPENSSL_die("assertion failed: l <= sizeof(iv)","crypto\\evp\\e_rc2.c",0x82);
  }
  uVar2 = ASN1_TYPE_get_int_octetstring(param_2,local_38,local_30,uVar1);
  if (uVar2 == uVar1) {
    if (local_38[0] == 0x3a) {
      uVar1 = 0x80;
    }
    else if (local_38[0] == 0x78) {
      uVar1 = 0x40;
    }
    else {
      if (local_38[0] != 0xa0) {
        local_48 = (undefined1 *)CONCAT44(local_48._4_4_,0x73);
        ERR_put_error(6,0x6d,0x6c,"crypto\\evp\\e_rc2.c");
        return 0xffffffff;
      }
      uVar1 = 0x28;
    }
    if (0 < (int)uVar2) {
      local_48 = local_30;
      local_40 = 0xffffffff;
      iVar3 = FUN_143cf75a0(param_1,0,0,0);
      if (iVar3 == 0) {
        return 0xffffffff;
      }
    }
    EVP_CIPHER_CTX_ctrl(param_1,3,uVar1);
    iVar3 = EVP_CIPHER_CTX_set_key_length(param_1,uVar1 >> 3);
    if (0 < iVar3) {
      return uVar2;
    }
  }
  return 0xffffffff;
}



// FUNCTION 143d022a0 rc2_ctrl body=142 status=ok
// SIG undefined rc2_ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 rc2_ctrl(undefined8 param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  
  if (param_2 == 0) {
    param_3 = UVariantSet::GetNumVariants();
    param_3 = param_3 << 3;
  }
  else {
    if (param_2 == 2) {
      puVar1 = (undefined4 *)FTcpDeserializedMessage::GetMessage();
      *param_4 = *puVar1;
      return 1;
    }
    if (param_2 != 3) {
      return 0xffffffff;
    }
    if (param_3 < 1) {
      return 0;
    }
  }
  piVar2 = (int *)FTcpDeserializedMessage::GetMessage(param_1);
  *piVar2 = param_3;
  return 1;
}



// FUNCTION 143d02330 rc2_cbc_cipher body=256 status=ok
// SIG undefined rc2_cbc_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 rc2_cbc_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143d0234f;
  uVar1 = 1;
  if (0x3fffffff < param_4) {
    uVar5 = param_4 >> 0x1e;
    param_4 = param_4 + uVar5 * -0x40000000;
    do {
      uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
      uVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
      uVar3 = IMessageToken::ToText(param_1);
      lVar4 = FTcpDeserializedMessage::GetMessage(param_1);
      uVar6 = CONCAT44(uVar2,uVar1);
      FUN_143d45460(param_3,param_2,0x40000000,lVar4 + 4,uVar3,uVar6);
      uVar1 = (undefined4)((ulonglong)uVar6 >> 0x20);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (param_4 != 0) {
    uVar2 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
    uVar6 = IMessageToken::ToText(param_1);
    lVar4 = FTcpDeserializedMessage::GetMessage(param_1);
    FUN_143d45460(param_3,param_2,param_4 & 0xffffffff,lVar4 + 4,uVar6,CONCAT44(uVar1,uVar2));
  }
  return 1;
}



// FUNCTION 143d02430 rc2_cfb64_cipher body=268 status=ok
// SIG undefined rc2_cfb64_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 rc2_cfb64_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 local_res20 [2];
  
  if (param_4 == 0) {
    return 1;
  }
  uVar5 = param_4;
  if (0x3fffffff < param_4) {
    uVar5 = 0x40000000;
  }
  do {
    if (param_4 < uVar5) {
      return 1;
    }
    local_res20[0] = FOnlineVoiceImpl::GetNumLocalTalkers(param_1);
    uVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
    uVar2 = IMessageToken::ToText(param_1);
    lVar3 = FTcpDeserializedMessage::GetMessage(param_1);
    RC2_cfb64_encrypt(param_3,param_2,uVar5 & 0xffffffff,lVar3 + 4,uVar2,local_res20,uVar1);
    FArchiveState::SetGameNetVer(param_1,local_res20[0]);
    param_4 = param_4 - uVar5;
    param_3 = param_3 + uVar5;
    param_2 = param_2 + uVar5;
    uVar4 = param_4;
    if (uVar5 <= param_4) {
      uVar4 = uVar5;
    }
    uVar5 = uVar4;
  } while (param_4 != 0);
  return 1;
}



// FUNCTION 143d02540 rc2_ecb_cipher body=167 status=ok
// SIG undefined rc2_ecb_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 rc2_ecb_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar2 = FHardwareCursor::GetHandle();
  uVar4 = (ulonglong)*(int *)(lVar2 + 4);
  if (uVar4 <= param_4) {
    lVar2 = param_3;
    do {
      uVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
      lVar3 = FTcpDeserializedMessage::GetMessage(param_1);
      RC2_ecb_encrypt(lVar2,(param_2 - param_3) + lVar2,lVar3 + 4,uVar1);
      lVar2 = lVar2 + uVar4;
    } while ((ulonglong)(lVar2 - param_3) <= param_4 - uVar4);
  }
  return 1;
}



// FUNCTION 143d025f0 rc2_ofb_cipher body=281 status=ok
// SIG undefined rc2_ofb_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 rc2_ofb_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 local_res20 [2];
  
  if (0x3fffffff < param_4) {
    uVar3 = param_4 >> 0x1e;
    param_4 = param_4 + uVar3 * -0x40000000;
    do {
      local_res20[0] = FOnlineVoiceImpl::GetNumLocalTalkers(param_1);
      uVar1 = IMessageToken::ToText(param_1);
      lVar2 = FTcpDeserializedMessage::GetMessage(param_1);
      RC2_ofb64_encrypt(param_3,param_2,0x40000000,lVar2 + 4,uVar1,local_res20);
      FArchiveState::SetGameNetVer(param_1,local_res20[0]);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (param_4 != 0) {
    local_res20[0] = FOnlineVoiceImpl::GetNumLocalTalkers(param_1);
    uVar1 = IMessageToken::ToText(param_1);
    lVar2 = FTcpDeserializedMessage::GetMessage(param_1);
    RC2_ofb64_encrypt(param_3,param_2,param_4 & 0xffffffff,lVar2 + 4,uVar1,local_res20);
    FArchiveState::SetGameNetVer(param_1,local_res20[0]);
  }
  return 1;
}



// FUNCTION 143d02710 FUN_143d02710 body=8 status=ok
// SIG undefined FUN_143d02710(void)

undefined * FUN_143d02710(void)

{
  return &DAT_145d73cd0;
}



// FUNCTION 143d02720 FUN_143d02720 body=8 status=ok
// SIG undefined FUN_143d02720(void)

undefined * FUN_143d02720(void)

{
  return &DAT_145d73c70;
}



// FUNCTION 143d02730 FUN_143d02730 body=8 status=ok
// SIG undefined FUN_143d02730(void)

undefined * FUN_143d02730(void)

{
  return &DAT_145d73af0;
}



// FUNCTION 143d02740 FUN_143d02740 body=8 status=ok
// SIG undefined FUN_143d02740(void)

undefined * FUN_143d02740(void)

{
  return &DAT_145d73b50;
}



// FUNCTION 143d02750 FUN_143d02750 body=8 status=ok
// SIG undefined FUN_143d02750(void)

undefined * FUN_143d02750(void)

{
  return &DAT_145d73c10;
}



// FUNCTION 143d02760 FUN_143d02760 body=8 status=ok
// SIG undefined FUN_143d02760(void)

undefined * FUN_143d02760(void)

{
  return &DAT_145d73bb0;
}



// FUNCTION 143d02770 aesni_init_key body=295 status=ok
// SIG undefined aesni_init_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool aesni_init_key(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  lVar3 = FTcpDeserializedMessage::GetMessage();
  uVar4 = FHardwareCursor::GetHandle(param_1);
  uVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(uVar4);
  uVar1 = uVar1 & 0xf0007;
  if ((uVar1 - 1 < 2) && (param_4 == 0)) {
    iVar2 = UVariantSet::GetNumVariants(param_1);
    iVar2 = FUN_140062030(param_2,iVar2 << 3,lVar3);
    *(undefined1 **)(lVar3 + 0xf8) = &LAB_14005dd90;
    pcVar5 = (code *)0x0;
    if (uVar1 == 2) {
      pcVar5 = FUN_1400615f0;
    }
  }
  else {
    iVar2 = UVariantSet::GetNumVariants(param_1);
    iVar2 = FUN_1400620a0(param_2,iVar2 << 3,lVar3);
    *(undefined1 **)(lVar3 + 0xf8) = &LAB_14005dd40;
    if (uVar1 == 2) {
      pcVar5 = FUN_1400615f0;
    }
    else if (uVar1 == 5) {
      pcVar5 = FUN_14005ed80;
    }
    else {
      pcVar5 = (code *)0x0;
    }
  }
  *(code **)(lVar3 + 0x100) = pcVar5;
  if (-1 >= iVar2) {
    ERR_put_error(6,0xa5,0x8f,"crypto\\evp\\e_aes.c",0x126);
  }
  return -1 < iVar2;
}



// FUNCTION 143d028a0 aesni_cbc_cipher body=127 status=ok
// SIG undefined aesni_cbc_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
aesni_cbc_cipher(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  uVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize();
  uVar2 = IMessageToken::ToText(param_1);
  uVar3 = FTcpDeserializedMessage::GetMessage(param_1);
  FUN_1400615f0(param_3,param_2,param_4,uVar3,uVar2,CONCAT44(uVar4,uVar1));
  return 1;
}



// FUNCTION 143d02920 aesni_ecb_cipher body=131 status=ok
// SIG undefined aesni_ecb_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
aesni_ecb_cipher(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143d0293b;
  iVar1 = EVP_CIPHER_CTX_block_size();
  if ((ulonglong)(longlong)iVar1 <= param_4) {
    uVar2 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
    uVar3 = FTcpDeserializedMessage::GetMessage(param_1);
    FUN_14005e480(param_3,param_2,param_4,uVar3,uVar2,uVar4);
  }
  return 1;
}



// FUNCTION 143d029b0 aes_ofb_cipher body=163 status=ok
// SIG undefined aes_ofb_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
aes_ofb_cipher(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_18 [2];
  undefined8 uStack_10;
  
  uStack_10 = 0x143d029d0;
  lVar1 = FTcpDeserializedMessage::GetMessage();
  local_18[0] = FOnlineVoiceImpl::GetNumLocalTalkers(param_1);
  uVar2 = IMessageToken::ToText(param_1);
  CRYPTO_ofb128_encrypt(param_3,param_2,param_4,lVar1,uVar2,local_18,*(undefined8 *)(lVar1 + 0xf8));
  FArchiveState::SetGameNetVer(param_1,local_18[0]);
  return 1;
}



// FUNCTION 143d02a60 aes_cfb_cipher body=176 status=ok
// SIG undefined aes_cfb_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
aes_cfb_cipher(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_28 [2];
  undefined8 uStack_20;
  
  uStack_20 = 0x143d02a7e;
  lVar2 = FTcpDeserializedMessage::GetMessage();
  local_28[0] = FOnlineVoiceImpl::GetNumLocalTalkers(param_1);
  uVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
  uVar3 = IMessageToken::ToText(param_1);
  CRYPTO_cfb128_encrypt
            (param_3,param_2,param_4,lVar2,uVar3,local_28,uVar1,*(undefined8 *)(lVar2 + 0xf8));
  FArchiveState::SetGameNetVer(param_1,local_28[0]);
  return 1;
}



// FUNCTION 143d02b10 aes_cfb8_cipher body=176 status=ok
// SIG undefined aes_cfb8_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
aes_cfb8_cipher(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_28 [2];
  undefined8 uStack_20;
  
  uStack_20 = 0x143d02b2e;
  lVar2 = FTcpDeserializedMessage::GetMessage();
  local_28[0] = FOnlineVoiceImpl::GetNumLocalTalkers(param_1);
  uVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
  uVar3 = IMessageToken::ToText(param_1);
  CRYPTO_cfb128_8_encrypt
            (param_3,param_2,param_4,lVar2,uVar3,local_28,uVar1,*(undefined8 *)(lVar2 + 0xf8));
  FArchiveState::SetGameNetVer(param_1,local_28[0]);
  return 1;
}



// FUNCTION 143d02bc0 aes_cfb1_cipher body=414 status=ok
// SIG undefined aes_cfb1_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 aes_cfb1_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 local_38 [2];
  undefined8 uStack_30;
  
  uStack_30 = 0x143d02bd7;
  lVar3 = FTcpDeserializedMessage::GetMessage();
  iVar1 = EVP_CIPHER_CTX_test_flags(param_1,0x2000);
  if (iVar1 == 0) {
    if (0xfffffffffffffff < param_4) {
      uVar5 = param_4 >> 0x3c;
      param_4 = param_4 + uVar5 * -0x1000000000000000;
      do {
        local_38[0] = FOnlineVoiceImpl::GetNumLocalTalkers(param_1);
        uVar2 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
        uVar4 = IMessageToken::ToText(param_1);
        CRYPTO_cfb128_1_encrypt
                  (param_3,param_2,0x8000000000000000,lVar3,uVar4,local_38,uVar2,
                   *(undefined8 *)(lVar3 + 0xf8));
        FArchiveState::SetGameNetVer(param_1,local_38[0]);
        param_2 = param_2 + 0x1000000000000000;
        param_3 = param_3 + 0x1000000000000000;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if (param_4 == 0) {
      return 1;
    }
    local_38[0] = FOnlineVoiceImpl::GetNumLocalTalkers(param_1);
    uVar2 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
    uVar4 = IMessageToken::ToText(param_1);
    param_4 = param_4 * 8;
  }
  else {
    local_38[0] = FOnlineVoiceImpl::GetNumLocalTalkers(param_1);
    uVar2 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
    uVar4 = IMessageToken::ToText(param_1);
  }
  CRYPTO_cfb128_1_encrypt
            (param_3,param_2,param_4,lVar3,uVar4,local_38,uVar2,*(undefined8 *)(lVar3 + 0xf8));
  FArchiveState::SetGameNetVer(param_1,local_38[0]);
  return 1;
}



// FUNCTION 143d02d60 aes_ctr_cipher body=234 status=ok
// SIG undefined aes_ctr_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
aes_ctr_cipher(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_28 [2];
  undefined8 uStack_20;
  
  uStack_20 = 0x143d02d84;
  local_28[0] = FOnlineVoiceImpl::GetNumLocalTalkers();
  lVar2 = FTcpDeserializedMessage::GetMessage(param_1);
  lVar1 = *(longlong *)(lVar2 + 0x100);
  uVar3 = UListView::OnItemSelectionChanged(param_1);
  uVar4 = IMessageToken::ToText(param_1);
  if (lVar1 == 0) {
    CRYPTO_ctr128_encrypt
              (param_3,param_2,param_4,lVar2,uVar4,uVar3,local_28,*(undefined8 *)(lVar2 + 0xf8));
  }
  else {
    CRYPTO_ctr128_encrypt_ctr32(param_3);
  }
  FArchiveState::SetGameNetVer(param_1,local_28[0]);
  return 1;
}



// FUNCTION 143d02e50 aesni_gcm_init_key body=290 status=ok
// SIG undefined aesni_gcm_init_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 aesni_gcm_init_key(undefined8 param_1,longlong param_2,void *param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FTcpDeserializedMessage::GetMessage();
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) {
    if (*(int *)(lVar2 + 0xf8) == 0) {
      _guard_xfg_dispatch_icall_nop
                (*(void **)(lVar2 + 0x2b8),param_3,(longlong)*(int *)(lVar2 + 0x2c0));
    }
    else {
      CRYPTO_gcm128_setiv(lVar2 + 0x100);
    }
    *(undefined4 *)(lVar2 + 0xfc) = 1;
    *(undefined4 *)(lVar2 + 0x2c8) = 0;
    return 1;
  }
  iVar1 = UVariantSet::GetNumVariants(param_1);
  FUN_1400620a0(param_2,iVar1 << 3,lVar2);
  CRYPTO_gcm128_init(lVar2 + 0x100,lVar2,&LAB_14005dd40);
  *(code **)(lVar2 + 0x2d0) = FUN_14005ed80;
  if ((param_3 != (void *)0x0) ||
     ((*(int *)(lVar2 + 0xfc) != 0 && (param_3 = *(void **)(lVar2 + 0x2b8), param_3 != (void *)0x0))
     )) {
    CRYPTO_gcm128_setiv(lVar2 + 0x100,param_3,(longlong)*(int *)(lVar2 + 0x2c0));
    *(undefined4 *)(lVar2 + 0xfc) = 1;
  }
  *(undefined4 *)(lVar2 + 0xf8) = 1;
  return 1;
}



// FUNCTION 143d02f80 aes_gcm_cipher body=744 status=ok
// SIG undefined aes_gcm_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong aes_gcm_cipher(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  
  lVar6 = 0x143d02f9e;
  lVar2 = FTcpDeserializedMessage::GetMessage();
  if (*(int *)(lVar2 + 0xf8) != 0) {
    if (-1 < *(int *)(lVar2 + 0x2cc)) {
      uVar3 = aes_gcm_tls_cipher(param_1,param_2,param_3,param_4);
      return uVar3;
    }
    if (*(int *)(lVar2 + 0xfc) != 0) {
      if (param_3 == 0) {
        if (*(int *)(param_1 + 0x10) != 0) {
          CRYPTO_gcm128_tag(lVar2 + 0x100,param_1 + 0x38,0x10);
          *(undefined4 *)(lVar2 + 0x2c4) = 0x10;
          *(undefined4 *)(lVar2 + 0xfc) = 0;
          return 0;
        }
        if ((-1 < *(int *)(lVar2 + 0x2c4)) &&
           (iVar1 = CRYPTO_gcm128_finish
                              (lVar2 + 0x100,param_1 + 0x38,(longlong)*(int *)(lVar2 + 0x2c4)),
           iVar1 == 0)) {
          *(undefined4 *)(lVar2 + 0xfc) = 0;
          return 0;
        }
      }
      else {
        if (param_2 == 0) {
          iVar1 = CRYPTO_gcm128_aad(lVar2 + 0x100,param_3,param_4);
        }
        else {
          pcVar5 = *(code **)(lVar2 + 0x2d0);
          if (*(int *)(param_1 + 0x10) == 0) {
            if (pcVar5 == (code *)0x0) {
              iVar1 = CRYPTO_gcm128_decrypt(lVar2 + 0x100,param_3,param_2,param_4);
            }
            else {
              lVar4 = 0;
              if (((0xf < param_4) && (pcVar5 == FUN_14005ed80)) &&
                 (*(undefined **)(lVar2 + 0x268) == &DAT_140064f60)) {
                uVar3 = (ulonglong)(-*(int *)(lVar2 + 0x270) & 0xf);
                iVar1 = CRYPTO_gcm128_decrypt(lVar2 + 0x100,param_3,param_2,uVar3);
                if (iVar1 != 0) {
                  return 0xffffffff;
                }
                lVar6 = lVar2 + 0x140;
                lVar4 = FUN_140062f80(uVar3 + param_3,uVar3 + param_2,param_4 - uVar3,
                                      *(undefined8 *)(lVar2 + 0x280),lVar2 + 0x100,lVar6);
                *(longlong *)(lVar2 + 0x138) = *(longlong *)(lVar2 + 0x138) + lVar4;
                pcVar5 = *(code **)(lVar2 + 0x2d0);
                lVar4 = lVar4 + uVar3;
              }
              iVar1 = CRYPTO_gcm128_decrypt_ctr32
                                (lVar2 + 0x100,lVar4 + param_3,lVar4 + param_2,param_4 - lVar4,
                                 pcVar5,lVar6);
            }
          }
          else if (pcVar5 == (code *)0x0) {
            iVar1 = CRYPTO_gcm128_encrypt(lVar2 + 0x100,param_3,param_2,param_4);
          }
          else {
            lVar6 = 0;
            if (((0x1f < param_4) && (pcVar5 == FUN_14005ed80)) &&
               (*(undefined **)(lVar2 + 0x268) == &DAT_140064f60)) {
              uVar3 = (ulonglong)(-*(int *)(lVar2 + 0x270) & 0xf);
              iVar1 = CRYPTO_gcm128_encrypt(lVar2 + 0x100,param_3,param_2,uVar3);
              if (iVar1 != 0) {
                return 0xffffffff;
              }
              lVar6 = FUN_140063300(uVar3 + param_3,uVar3 + param_2,param_4 - uVar3,
                                    *(undefined8 *)(lVar2 + 0x280),lVar2 + 0x100,lVar2 + 0x140);
              *(longlong *)(lVar2 + 0x138) = *(longlong *)(lVar2 + 0x138) + lVar6;
              pcVar5 = *(code **)(lVar2 + 0x2d0);
              lVar6 = lVar6 + uVar3;
            }
            iVar1 = CRYPTO_gcm128_encrypt_ctr32
                              (lVar2 + 0x100,lVar6 + param_3,lVar6 + param_2,param_4 - lVar6,pcVar5)
            ;
          }
        }
        if (iVar1 == 0) {
          return param_4 & 0xffffffff;
        }
      }
    }
  }
  return 0xffffffff;
}



// FUNCTION 143d03270 aesni_xts_init_key body=296 status=ok
// SIG undefined aesni_xts_init_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 aesni_xts_init_key(undefined8 param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  
  lVar4 = FTcpDeserializedMessage::GetMessage();
  if (param_3 == (undefined8 *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) goto LAB_143d0335f;
  iVar2 = UVariantSet::GetNumVariants(param_1);
  if (param_4 == 0) {
    FUN_140062030(param_2,iVar2 << 2,lVar4);
    pcVar5 = FUN_14005ffb0;
    puVar7 = &LAB_14005dd90;
  }
  else {
    FUN_1400620a0();
    pcVar5 = FUN_14005f780;
    puVar7 = &LAB_14005dd40;
  }
  *(undefined1 **)(lVar4 + 0x200) = puVar7;
  *(code **)(lVar4 + 0x210) = pcVar5;
  iVar2 = UVariantSet::GetNumVariants(param_1);
  iVar3 = UVariantSet::GetNumVariants(param_1);
  FUN_1400620a0(iVar3 / 2 + param_2,iVar2 << 2,lVar4 + 0xf8);
  *(undefined1 **)(lVar4 + 0x208) = &LAB_14005dd40;
  *(longlong *)(lVar4 + 0x1f0) = lVar4;
LAB_143d0335f:
  if (param_3 != (undefined8 *)0x0) {
    *(longlong *)(lVar4 + 0x1f8) = lVar4 + 0xf8;
    puVar6 = (undefined8 *)IMessageToken::ToText(param_1);
    uVar1 = param_3[1];
    *puVar6 = *param_3;
    puVar6[1] = uVar1;
  }
  return 1;
}



// FUNCTION 143d033a0 aes_xts_cipher body=239 status=ok
// SIG undefined aes_xts_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 aes_xts_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  uVar6 = 1;
  lVar4 = FTcpDeserializedMessage::GetMessage();
  plVar1 = (longlong *)(lVar4 + 0x1f0);
  if ((((*plVar1 != 0) && (*(longlong *)(lVar4 + 0x1f8) != 0)) && (param_2 != 0)) &&
     ((param_3 != 0 && (0xf < param_4)))) {
    if (*(longlong *)(lVar4 + 0x210) != 0) {
      uVar5 = IMessageToken::ToText();
      (**(code **)(lVar4 + 0x210))
                (param_3,param_2,param_4,*plVar1,*(undefined8 *)(lVar4 + 0x1f8),uVar5);
      return 1;
    }
    uVar2 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
    uVar5 = IMessageToken::ToText(param_1);
    iVar3 = CRYPTO_xts128_encrypt(plVar1,uVar5,param_3,param_2,param_4,CONCAT44(uVar6,uVar2));
    if (iVar3 == 0) {
      return 1;
    }
  }
  return 0;
}


