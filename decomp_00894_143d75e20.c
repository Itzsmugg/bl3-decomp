// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143d75e20 file_open body=983 status=ok
// SIG undefined file_open(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * file_open(undefined8 param_1,char *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  char *pcVar9;
  char **ppcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  undefined1 auStack_10b8 [32];
  undefined4 local_1098;
  char *local_1088;
  uint local_1080 [6];
  undefined1 local_1068 [6];
  ushort local_1062;
  char local_1038 [4095];
  undefined1 local_39;
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x143d75e36;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_10b8;
  local_1080[0] = local_1080[0] & 0xfffffffe;
  pcVar13 = (char *)0x1;
  local_1088 = param_2;
  iVar3 = _strnicmp(param_2,"file:",5);
  pcVar12 = (char *)0x0;
  if (iVar3 == 0) {
    pcVar9 = param_2 + 5;
    iVar3 = strncmp(pcVar9,"//",2);
    if (iVar3 == 0) {
      pcVar9 = param_2 + 7;
      pcVar13 = (char *)0x0;
      iVar3 = _strnicmp(pcVar9,"localhost/",10);
      if (iVar3 == 0) {
        pcVar9 = param_2 + 0x10;
        pcVar13 = pcVar12;
      }
      else if (*pcVar9 != '/') {
        local_1098 = 0x318;
        ERR_put_error(0x2c,0x78,0x6f,"crypto\\store\\loader_file.c");
        return (undefined4 *)0x0;
      }
    }
    uVar1 = local_1080[(longlong)pcVar13 * 4];
    cVar2 = *pcVar9;
    local_1080[(longlong)pcVar13 * 4] = uVar1 | 1;
    if ((((cVar2 == '/') && (pcVar9[2] == ':')) && (pcVar9[3] == '/')) &&
       (cVar2 = ossl_tolower((int)pcVar9[1]), (byte)(cVar2 + 0x9fU) < 0x1a)) {
      pcVar9 = pcVar9 + 1;
      local_1080[(longlong)pcVar13 * 4] = uVar1 & 0xfffffffe;
    }
    *(char **)(local_1080 + (longlong)pcVar13 * 4 + -2) = pcVar9;
    pcVar13 = pcVar13 + 1;
  }
  ppcVar10 = &local_1088;
  pcVar9 = pcVar12;
  do {
    if (pcVar13 <= pcVar12) {
      pcVar11 = pcVar9;
      if (pcVar9 == (char *)0x0) {
        return (undefined4 *)0x0;
      }
      break;
    }
    if ((((ulonglong)ppcVar10[1] & 1) != 0) && (pcVar11 = *ppcVar10, *pcVar11 != '/')) {
      local_1098 = 0x335;
      ERR_put_error(0x2c,0x78,0x6c,"crypto\\store\\loader_file.c");
      ERR_add_error_data(1,pcVar11);
      return (undefined4 *)0x0;
    }
    pcVar11 = *ppcVar10;
    iVar3 = _stat64i32(pcVar11,local_1068);
    if (iVar3 < 0) {
      piVar4 = _errno();
      local_1098 = 0x33b;
      ERR_put_error(2,0x16,*piVar4,"crypto\\store\\loader_file.c");
      ERR_add_error_data(1,pcVar11);
      pcVar11 = pcVar9;
    }
    pcVar12 = pcVar12 + 1;
    ppcVar10 = ppcVar10 + 2;
    pcVar9 = pcVar11;
  } while (pcVar11 == (char *)0x0);
  ERR_clear_error();
  puVar5 = (undefined4 *)CRYPTO_zalloc(0x50,"crypto\\store\\loader_file.c",0x348);
  if (puVar5 == (undefined4 *)0x0) {
    local_1098 = 0x34a;
    ERR_put_error(0x2c,0x78,0x41,"crypto\\store\\loader_file.c");
  }
  else {
    if ((local_1062 & 0xf000) == 0x4000) {
      lVar6 = CRYPTO_strdup(param_2,"crypto\\store\\loader_file.c",0x354);
      *(longlong *)(puVar5 + 8) = lVar6;
      *puVar5 = 2;
      if (lVar6 != 0) {
        uVar7 = OPENSSL_DIR_read(puVar5 + 4,pcVar11);
        *(undefined8 *)(puVar5 + 0xe) = uVar7;
        piVar4 = _errno();
        iVar3 = *piVar4;
        puVar5[0x10] = iVar3;
        if (*(longlong *)(puVar5 + 0xe) != 0) {
          return puVar5;
        }
        if (iVar3 == 0) {
          puVar5[6] = 1;
          return puVar5;
        }
        piVar4 = _errno();
        *piVar4 = puVar5[0x10];
        piVar4 = _errno();
        openssl_strerror_r(*piVar4,local_1038,0x100);
        local_1098 = 0x361;
        ERR_put_error(0x2c,0x78,2,"crypto\\store\\loader_file.c");
        ERR_add_error_data(1,local_1038);
      }
    }
    else {
      _guard_xfg_dispatch_icall_nop(local_1038,0,0x1000);
      uVar7 = BIO_f_buffer();
      lVar6 = BIO_new(uVar7);
      if (lVar6 != 0) {
        lVar8 = BIO_new_file(pcVar11,&DAT_145d82a34);
        *(longlong *)(puVar5 + 4) = lVar8;
        if (lVar8 != 0) {
          uVar7 = BIO_push(lVar6,lVar8);
          *(undefined8 *)(puVar5 + 4) = uVar7;
          iVar3 = BIO_ctrl(uVar7,0x1d,0xfff,local_1038);
          if (iVar3 < 1) {
            return puVar5;
          }
          local_39 = 0;
          pcVar13 = _guard_xfg_dispatch_icall_nop(local_1038,"-----BEGIN ");
          if (pcVar13 != (char *)0x0) {
            *puVar5 = 1;
            return puVar5;
          }
          return puVar5;
        }
      }
      BIO_free_all(lVar6);
    }
    OSSL_STORE_LOADER_CTX_free(puVar5);
  }
  return (undefined4 *)0x0;
}



// FUNCTION 143d76200 file_ctrl body=100 status=ok
// SIG undefined file_ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 file_ctrl(longlong param_1,int param_2,undefined8 *param_3)

{
  if (param_2 == 1) {
    if (*(int *)*param_3 != 0) {
      if (*(int *)*param_3 != 1) {
        ERR_put_error(0x2c,0x81,7,"crypto\\store\\loader_file.c",0x391);
        return 0;
      }
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
      return 1;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffe;
  }
  return 1;
}



// FUNCTION 143d76280 file_find body=170 status=ok
// SIG undefined file_find(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 file_find(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143d76290;
  iVar1 = FRollingHash::GetWindowSize(param_2);
  if (iVar1 == 1) {
    if (param_1 == (int *)0x0) {
      return 1;
    }
    if (*param_1 == 2) {
      uVar4 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
              ::GetBoundProgramCounterForTimerManager(param_2);
      uVar2 = X509_NAME_hash(uVar4);
      BIO_snprintf(param_1 + 10,9,"%08lx",uVar2);
      return 1;
    }
    uVar3 = 0x3b3;
    uVar2 = 0x77;
  }
  else {
    if (param_1 == (int *)0x0) {
      return 0;
    }
    uVar3 = 0x3bf;
    uVar2 = 0x78;
  }
  ERR_put_error(0x2c,0x8a,uVar2,"crypto\\store\\loader_file.c",uVar3,uVar4);
  return 0;
}



// FUNCTION 143d76330 file_eof body=82 status=ok
// SIG undefined file_eof(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong file_eof(int *param_1)

{
  ulonglong uVar1;
  
  if (*param_1 == 2) {
    return (ulonglong)(uint)param_1[6];
  }
  if (*(longlong *)(param_1 + 6) != 0) {
    uVar1 = (**(code **)(*(longlong *)(param_1 + 6) + 0x10))(*(undefined8 *)(param_1 + 8));
    if ((int)uVar1 == 0) {
      return uVar1;
    }
  }
  uVar1 = BIO_ctrl(*(undefined8 *)(param_1 + 4),2,0);
  return uVar1;
}



// FUNCTION 143d763a0 file_load body=1903 status=ok
// SIG undefined file_load(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

ulonglong file_load(int *param_1,int *param_2,int *param_3)

{
  int **ppiVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  int *piVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  char cVar13;
  uint uVar14;
  char *pcVar15;
  char *pcVar16;
  longlong lVar17;
  char *pcVar18;
  undefined1 auStack_1e8 [32];
  int **local_1c8;
  int *local_1c0;
  int *local_1b8;
  int *local_1b0;
  int local_1a8;
  int local_1a4;
  longlong local_1a0;
  char *local_198;
  undefined8 local_190;
  int local_188 [2];
  int *local_180;
  int *local_178;
  int *local_170;
  undefined *local_168;
  undefined1 local_160 [24];
  undefined1 local_148 [256];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143d763c2;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  uVar10 = 0;
  param_1[1] = 0;
  ERR_clear_error();
  if (*param_1 == 2) {
LAB_143d76400:
    do {
      pcVar15 = *(char **)(param_1 + 0xe);
      lVar17 = 0;
      if (pcVar15 == (char *)0x0) {
        if (param_1[6] != 0) {
          return 0;
        }
        piVar9 = _errno();
        *piVar9 = param_1[0x10];
        param_1[1] = param_1[1] + 1;
        piVar9 = _errno();
        openssl_strerror_r(*piVar9,local_148,0x100);
        local_1c8 = (int **)CONCAT44(local_1c8._4_4_,0x4f2);
        ERR_put_error(0x2c,0x77,2,"crypto\\store\\loader_file.c");
        ERR_add_error_data(1,local_148);
        return 0;
      }
      lVar7 = 0;
      if (*pcVar15 != '.') {
        if ((char)param_1[10] == '\0') {
LAB_143d764d1:
          pcVar15 = *(char **)(param_1 + 8);
          pcVar18 = *(char **)(param_1 + 0xe);
          cVar2 = *pcVar15;
          cVar13 = '\0';
          if (cVar2 != '\0') {
            uVar4 = 0;
            pcVar16 = pcVar15;
            do {
              if (0x7fffffff < uVar4) break;
              pcVar16 = pcVar16 + 1;
              uVar4 = uVar4 + 1;
            } while (*pcVar16 != '\0');
            cVar13 = pcVar15[(uVar4 & 0x7fffffff) - 1];
          }
          pcVar16 = "/";
          if (cVar13 == '\\' || cVar13 == '/') {
            pcVar16 = "";
          }
          for (uVar4 = 0; (cVar2 != '\0' && (uVar4 < 0x80000000)); uVar4 = uVar4 + 1) {
            pcVar15 = pcVar15 + 1;
            cVar2 = *pcVar15;
          }
          cVar13 = *pcVar16;
          pcVar15 = pcVar16;
          for (uVar14 = 0; (cVar13 != '\0' && (uVar14 < 0x80000000)); uVar14 = uVar14 + 1) {
            pcVar15 = pcVar15 + 1;
            cVar13 = *pcVar15;
          }
          cVar13 = *pcVar18;
          pcVar15 = pcVar18;
          for (uVar5 = 0; (cVar13 != '\0' && (uVar5 < 0x80000000)); uVar5 = uVar5 + 1) {
            pcVar15 = pcVar15 + 1;
            cVar13 = *pcVar15;
          }
          lVar17 = (longlong)
                   (int)((uVar5 & 0x7fffffff) + (uVar14 & 0x7fffffff) + (uVar4 & 0x7fffffff) + 1);
          lVar7 = CRYPTO_zalloc(lVar17,"crypto\\store\\loader_file.c",0x492);
          if (lVar7 == 0) {
            local_1c8 = (int **)CONCAT44(local_1c8._4_4_,0x494);
            ERR_put_error(0x2c,0x7e,0x41,"crypto\\store\\loader_file.c");
            return 0;
          }
          OPENSSL_strlcat(lVar7,*(undefined8 *)(param_1 + 8),lVar17);
          OPENSSL_strlcat(lVar7,pcVar16,lVar17);
          OPENSSL_strlcat(lVar7,pcVar18);
        }
        else if (((((param_1[0x12] & 0xfffffffaU) == 0) && (lVar7 = lVar17, param_1[0x12] != 1)) &&
                 (iVar3 = _strnicmp(pcVar15,(char *)(param_1 + 10),8), iVar3 == 0)) &&
                (pcVar15[8] == '.')) {
          cVar13 = pcVar15[9];
          pcVar18 = pcVar15 + 9;
          iVar3 = param_1[0x12];
          if (cVar13 == 'r') {
            pcVar18 = pcVar15 + 10;
            if ((iVar3 == 0) || (iVar3 == 5)) {
              cVar13 = *pcVar18;
LAB_143d7648d:
              iVar3 = ossl_ctype_check((int)cVar13,4);
              if (iVar3 != 0) {
                iVar3 = ossl_ctype_check((int)*pcVar18,4);
                while (iVar3 != 0) {
                  pcVar15 = pcVar18 + 1;
                  pcVar18 = pcVar18 + 1;
                  iVar3 = ossl_ctype_check((int)*pcVar15,4);
                }
                if (*pcVar18 == '\0') goto LAB_143d764d1;
              }
            }
          }
          else if (iVar3 != 5) goto LAB_143d7648d;
        }
      }
      uVar8 = OPENSSL_DIR_read(param_1 + 4,*(undefined8 *)(param_1 + 8));
      *(undefined8 *)(param_1 + 0xe) = uVar8;
      piVar9 = _errno();
      iVar3 = *piVar9;
      param_1[0x10] = iVar3;
      if ((*(longlong *)(param_1 + 0xe) == 0) && (iVar3 == 0)) {
        param_1[6] = 1;
      }
      if (lVar7 != 0) {
        uVar10 = OSSL_STORE_INFO_new_NAME(lVar7);
        if (uVar10 == 0) {
          CRYPTO_free(lVar7,"crypto\\store\\loader_file.c",0x50b);
          local_1c8 = (int **)CONCAT44(local_1c8._4_4_,0x50c);
          ERR_put_error(0x2c,0x77,0x2c,"crypto\\store\\loader_file.c");
          return 0;
        }
        return uVar10;
      }
      if (*param_1 == 2) {
        iVar3 = param_1[6];
      }
      else {
        if ((*(longlong *)(param_1 + 6) != 0) &&
           (iVar3 = (**(code **)(*(longlong *)(param_1 + 6) + 0x10))(*(undefined8 *)(param_1 + 8)),
           iVar3 == 0)) goto LAB_143d76400;
        iVar3 = BIO_ctrl(*(undefined8 *)(param_1 + 4),2);
      }
      uVar11 = uVar10;
    } while (iVar3 == 0);
  }
  else {
    while( true ) {
      local_188[0] = 0;
      uVar11 = uVar10;
      if (*(longlong *)(param_1 + 6) != 0) {
        local_1c0 = local_188;
        ppiVar1 = (int **)(param_1 + 8);
        local_1c8 = ppiVar1;
        local_1b8 = param_2;
        local_1b0 = param_3;
        uVar11 = (**(code **)(*(longlong *)(param_1 + 6) + 8))(0,0,0);
        if (uVar11 == 0) {
          (**(code **)(*(longlong *)(param_1 + 6) + 0x18))(ppiVar1);
          *ppiVar1 = (int *)0x0;
          param_1[6] = 0;
          param_1[7] = 0;
        }
      }
      if (uVar11 != 0) break;
      uVar11 = 0;
      if (*param_1 == 2) {
        iVar3 = param_1[6];
LAB_143d767ee:
        if (iVar3 != 0) {
          return 0;
        }
      }
      else if ((*(longlong *)(param_1 + 6) == 0) ||
              (iVar3 = (**(code **)(*(longlong *)(param_1 + 6) + 0x10))
                                 (*(undefined8 *)(param_1 + 8)), iVar3 != 0)) {
        iVar3 = BIO_ctrl(*(undefined8 *)(param_1 + 4),2,0);
        goto LAB_143d767ee;
      }
      do {
        iVar3 = -1;
        local_1a4 = -1;
        local_1a0 = 0;
        local_198 = (char *)0x0;
        local_190 = 0;
        local_1a8 = 0;
        if (*param_1 == 1) {
          local_1c8 = (int **)&local_1a8;
          if ((*(byte *)(param_1 + 2) & 1) == 0) {
            iVar6 = PEM_read_bio(*(undefined8 *)(param_1 + 4),&local_1a0,&local_198);
          }
          else {
            local_1c0 = (int *)CONCAT44(local_1c0._4_4_,3);
            iVar6 = PEM_read_bio_ex();
          }
          if (iVar6 < 1) goto LAB_143d769f1;
          cVar13 = *local_198;
          uVar4 = 0;
          uVar12 = uVar10;
          pcVar15 = local_198;
          while ((cVar13 != '\0' && (uVar4 = (uint)uVar12, uVar4 < 0x80000000))) {
            pcVar15 = pcVar15 + 1;
            uVar4 = uVar4 + 1;
            cVar13 = *pcVar15;
            uVar12 = (ulonglong)uVar4;
          }
          if (10 < (uVar4 & 0x7fffffff)) {
            iVar6 = PEM_get_EVP_CIPHER_INFO(local_198,local_160);
            if (iVar6 != 0) {
              local_1c8 = &local_178;
              local_168 = &DAT_145da4a8c;
              local_178 = param_2;
              local_170 = param_3;
              iVar6 = PEM_do_header(local_160,local_190,&local_1a8);
              if (iVar6 != 0) goto LAB_143d7692f;
            }
            goto LAB_143d769f1;
          }
LAB_143d7692f:
          local_1c8 = (int **)(longlong)local_1a8;
          local_1b0 = &local_1a4;
          local_1c0 = param_2;
          local_1b8 = param_3;
          uVar11 = file_load_try_decode(param_1,local_1a0,local_198);
          iVar3 = local_1a4;
          if (uVar11 == 0) {
            if (local_1a0 == 0) {
              if (local_1a4 < 2) goto LAB_143d7697b;
              local_1c8 = (int **)CONCAT44(local_1c8._4_4_,0x541);
              ERR_put_error(0x2c,0x77,0x6b);
            }
            else {
              if (1 < local_1a4) goto LAB_143d769f1;
LAB_143d7697b:
              if (local_1a4 == 1) {
                iVar6 = ERR_peek_error();
                if (iVar6 == 0) {
                  local_1c8 = (int **)CONCAT44(local_1c8._4_4_,0x549);
                  ERR_put_error(0x2c,0x77,0x6e);
                  if (local_1a0 != 0) {
                    ERR_add_error_data(3,"PEM type is \'");
                  }
                }
                goto LAB_143d769f1;
              }
            }
            if (0 < iVar3) goto LAB_143d769f1;
          }
        }
        else {
          local_180 = (int *)0x0;
          iVar6 = asn1_d2i_read_bio(*(undefined8 *)(param_1 + 4),&local_180);
          if (-1 < iVar6) {
            local_190 = *(undefined8 *)(local_180 + 2);
            local_1a8 = *local_180;
            CRYPTO_free(local_180,"crypto\\store\\loader_file.c",0x475);
            goto LAB_143d7692f;
          }
LAB_143d769f1:
          param_1[1] = param_1[1] + 1;
        }
        if ((*(byte *)(param_1 + 2) & 1) == 0) {
          CRYPTO_free(local_1a0,"crypto\\store\\loader_file.c",0x449);
        }
        else {
          CRYPTO_secure_clear_free(local_1a0,0,"crypto\\store\\loader_file.c");
        }
        if ((*(byte *)(param_1 + 2) & 1) == 0) {
          CRYPTO_free(local_198,"crypto\\store\\loader_file.c",0x449);
        }
        else {
          CRYPTO_secure_clear_free(local_198,0,"crypto\\store\\loader_file.c");
        }
        if ((*(byte *)(param_1 + 2) & 1) == 0) {
          CRYPTO_free(local_190);
        }
        else {
          CRYPTO_secure_clear_free();
        }
        if (iVar3 != 0) {
          if (1 < iVar3) {
            return 0;
          }
          break;
        }
        if (*param_1 == 2) {
          iVar3 = param_1[6];
LAB_143d76ac5:
          if (iVar3 != 0) break;
        }
        else if ((*(longlong *)(param_1 + 6) == 0) ||
                (iVar3 = (**(code **)(*(longlong *)(param_1 + 6) + 0x10))
                                   (*(undefined8 *)(param_1 + 8)), iVar3 != 0)) {
          iVar3 = BIO_ctrl(*(undefined8 *)(param_1 + 4));
          goto LAB_143d76ac5;
        }
      } while (param_1[1] < 1);
      if (uVar11 == 0) {
        return 0;
      }
      if (param_1[0x12] == 0) {
        return uVar11;
      }
      iVar3 = FRollingHash::GetWindowSize(uVar11);
      if (param_1[0x12] == iVar3) {
        return uVar11;
      }
      FUN_143dbaa00(uVar11);
    }
  }
  return uVar11;
}



// FUNCTION 143d76b10 file_close body=78 status=ok
// SIG undefined file_close(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 file_close(int *param_1)

{
  if (*param_1 == 2) {
    OPENSSL_DIR_end();
    OSSL_STORE_LOADER_CTX_free(param_1);
    return 1;
  }
  BIO_free_all(*(undefined8 *)(param_1 + 4));
  OSSL_STORE_LOADER_CTX_free(param_1);
  return 1;
}



// FUNCTION 143d76b60 OSSL_STORE_LOADER_CTX_free body=109 status=ok
// SIG undefined OSSL_STORE_LOADER_CTX_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OSSL_STORE_LOADER_CTX_free(int *param_1)

{
  if (*param_1 == 2) {
    CRYPTO_free(*(undefined8 *)(param_1 + 8),"crypto\\store\\loader_file.c",0x2e8);
  }
  else if (*(longlong *)(param_1 + 6) != 0) {
    (**(code **)(*(longlong *)(param_1 + 6) + 0x18))(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  CRYPTO_free(param_1,"crypto\\store\\loader_file.c",0x2f0);
  return;
}



// FUNCTION 143d76bd0 file_get_pass body=347 status=ok
// SIG undefined file_get_pass(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
file_get_pass(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143d76bf0;
  lVar2 = UI_new();
  if (lVar2 == 0) {
    ERR_put_error(0x2c,0x76,0x41,"crypto\\store\\loader_file.c",0x36,uVar6);
    return 0;
  }
  if (param_1 != 0) {
    UI_set_method(lVar2,param_1);
  }
  uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
  UI_add_user_data(lVar2,param_5);
  lVar3 = UI_construct_prompt(lVar2,"pass phrase",param_4);
  if (lVar3 == 0) {
    uVar5 = 0x40;
    uVar4 = 0x41;
  }
  else {
    iVar1 = UI_add_input_string(lVar2,lVar3,2,param_2,0,CONCAT44(uVar4,param_3 + -1));
    if (iVar1 == 0) {
      uVar5 = 0x44;
      uVar4 = 0x28;
    }
    else {
      iVar1 = UI_process(lVar2);
      if (iVar1 == -2) {
        uVar5 = 0x4a;
        uVar4 = 0x6d;
      }
      else {
        if (iVar1 != -1) goto LAB_143d76cf0;
        uVar5 = 0x4e;
        uVar4 = 0x28;
      }
    }
  }
  ERR_put_error(0x2c,0x76,uVar4,"crypto\\store\\loader_file.c",uVar5);
  param_2 = 0;
LAB_143d76cf0:
  CRYPTO_free(lVar3,"crypto\\store\\loader_file.c",0x56);
  UI_free(lVar2);
  return param_2;
}



// FUNCTION 143d76d30 file_get_pem_pass body=90 status=ok
// SIG undefined file_get_pem_pass(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint file_get_pem_pass(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)file_get_pass(*param_4,param_1,(longlong)param_2,param_4[2],param_4[1]);
  if (pcVar3 != (char *)0x0) {
    cVar1 = *pcVar3;
    for (uVar2 = 0; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
    }
    return uVar2 & 0x7fffffff;
  }
  return 0;
}



// FUNCTION 143d76d90 file_load_try_decode body=609 status=ok
// SIG undefined file_load_try_decode(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong file_load_try_decode
                    (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,int *param_8)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong *in_stack_ffffffffffffff78;
  undefined4 uVar9;
  int local_68 [2];
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143d76db4;
  puVar7 = (undefined8 *)0x0;
  uVar6 = 0;
  local_48 = (undefined8 *)0x0;
  local_50 = 0;
  do {
    uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
    local_60 = 0;
    plVar3 = (longlong *)CRYPTO_zalloc(0x38,"crypto\\store\\loader_file.c",0x3e6);
    if (plVar3 == (longlong *)0x0) {
      in_stack_ffffffffffffff78 = (longlong *)CONCAT44(uVar9,0x3ea);
      ERR_put_error(0x2c,0x7c,0x41,"crypto\\store\\loader_file.c",in_stack_ffffffffffffff78);
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      *param_8 = 0;
      uVar8 = uVar4;
      do {
        lVar1 = *(longlong *)((longlong)&PTR_PTR_146837d38 + uVar8);
        local_68[0] = 0;
        local_58 = 0;
        in_stack_ffffffffffffff78 = &local_58;
        uVar5 = (**(code **)(lVar1 + 8))
                          (param_2,param_3,param_4,param_5,in_stack_ffffffffffffff78,local_68,
                           param_6,param_7);
        if (0 < local_68[0]) {
          plVar3[*param_8] = lVar1;
          if (local_60 != 0) {
            (**(code **)(lVar1 + 0x18))(&local_60);
          }
          *param_8 = *param_8 + local_68[0];
          local_60 = local_58;
          if (*param_8 < 2) {
            if (uVar4 != 0) goto LAB_143d76f0b;
          }
          else {
            FUN_143dbaa00(uVar4);
            FUN_143dbaa00(uVar5);
            if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
              (**(code **)(lVar1 + 0x18))(&local_60);
            }
            local_60 = 0;
            uVar5 = 0;
          }
          uVar4 = uVar5;
        }
LAB_143d76f0b:
        uVar8 = uVar8 + 8;
      } while (uVar8 < 0x38);
      if ((*param_8 == 1) && (*(int *)(*plVar3 + 0x20) != 0)) {
        *(longlong *)(param_1 + 0x18) = *plVar3;
        *(longlong *)(param_1 + 0x20) = local_60;
      }
      CRYPTO_free(plVar3,"crypto\\store\\loader_file.c",0x414);
      uVar6 = local_50;
      puVar7 = local_48;
    }
    CRYPTO_free(uVar6,"crypto\\store\\loader_file.c",0x418);
    BUF_MEM_free(puVar7);
    if (uVar4 == 0) {
      return 0;
    }
    iVar2 = FRollingHash::GetWindowSize(uVar4);
    if (iVar2 != -1) {
      ERR_clear_error();
      return uVar4;
    }
    uVar6 = ossl_store_info_get0_EMBEDDED_pem_name(uVar4);
    local_50 = uVar6;
    puVar7 = (undefined8 *)ossl_store_info_get0_EMBEDDED_buffer(uVar4);
    param_4 = puVar7[1];
    param_5 = *puVar7;
    local_48 = puVar7;
    CRYPTO_free(uVar4,"crypto\\store\\loader_file.c",0x422);
    param_2 = uVar6;
  } while( true );
}



// FUNCTION 143d77000 OPENSSL_gmtime body=47 status=ok
// SIG undefined OPENSSL_gmtime(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

tm * OPENSSL_gmtime(__time64_t *param_1,tm *param_2)

{
  errno_t eVar1;
  
  eVar1 = _gmtime64_s(param_2,param_1);
  if (eVar1 != 0) {
    param_2 = (tm *)0x0;
  }
  return param_2;
}



// FUNCTION 143d77030 OPENSSL_gmtime_adj body=409 status=ok
// SIG undefined OPENSSL_gmtime_adj(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OPENSSL_gmtime_adj(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int local_res20;
  int local_18;
  
  iVar1 = julian_adj();
  if (iVar1 != 0) {
    iVar1 = ((local_res20 + 0x10bd9) * 4) / 0x23ab1;
    iVar2 = iVar1 * 0x23ab1 + 3;
    iVar5 = (local_res20 + 0x10bd9) - ((int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2);
    iVar2 = ((iVar5 + 1) * 4000) / 0x164b09;
    iVar3 = iVar2 * 0x5b5;
    iVar5 = iVar5 + (0x1f - ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2));
    iVar3 = (iVar5 * 0x50) / 0x98f;
    uVar4 = (iVar1 + -0x44) * 100 + iVar3 / 0xb + iVar2;
    if (uVar4 < 0x1fa4) {
      param_1[5] = uVar4;
      param_1[3] = iVar5 - (iVar3 * 0x98f) / 0x50;
      param_1[4] = iVar3 + (iVar3 / 0xb) * -0xc + 1;
      param_1[2] = local_18 / 0xe10;
      param_1[1] = (local_18 / 0x3c) % 0x3c;
      *param_1 = local_18 % 0x3c;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143d771d0 OPENSSL_gmtime_diff body=199 status=ok
// SIG undefined OPENSSL_gmtime_diff(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OPENSSL_gmtime_diff(int *param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int local_18;
  int local_14;
  undefined8 local_10;
  
  local_10 = 0x143d771e5;
  iVar1 = julian_adj(param_3,0,0,&local_14,(longlong)&local_10 + 4);
  if ((iVar1 != 0) && (iVar1 = julian_adj(param_4,0,0,&local_18,&local_10), iVar1 != 0)) {
    local_18 = local_18 - local_14;
    local_10._0_4_ = (int)local_10 - local_10._4_4_;
    if ((0 < local_18) && ((int)local_10 < 0)) {
      local_18 = local_18 + -1;
      local_10._0_4_ = (int)local_10 + 0x15180;
    }
    if ((local_18 < 0) && (0 < (int)local_10)) {
      local_18 = local_18 + 1;
      local_10._0_4_ = (int)local_10 + -0x15180;
    }
    if (param_1 != (int *)0x0) {
      *param_1 = local_18;
    }
    if (param_2 != (int *)0x0) {
      *param_2 = (int)local_10;
    }
    return 1;
  }
  return 0;
}



// FUNCTION 143d772a0 julian_adj body=311 status=ok
// SIG undefined julian_adj(void)

undefined8 julian_adj(int *param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  param_2 = param_3 / 0x15180 + param_2;
  iVar3 = param_3 % 0x15180 + (param_1[2] * 0x3c + param_1[1]) * 0x3c + *param_1;
  if (iVar3 < 0x15180) {
    if (iVar3 < 0) {
      param_2 = param_2 + -1;
      iVar3 = iVar3 + 0x15180;
    }
  }
  else {
    param_2 = param_2 + 1;
    iVar3 = iVar3 + -0x15180;
  }
  iVar2 = (param_1[4] + -0xd) / 0xc;
  iVar4 = param_1[5] + iVar2;
  iVar1 = ((iVar4 + 0x1a90) / 100) * 3;
  iVar4 = (iVar4 + 0x1a2c) * 0x5b5;
  param_2 = ((int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2) + -0x7d4b +
            (((param_1[4] + iVar2 * -0xc + -1) * 0x16f) / 0xc -
            ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2)) + param_1[3] + param_2;
  if (param_2 < 0) {
    return 0;
  }
  *param_4 = param_2;
  *param_5 = iVar3;
  return 1;
}



// FUNCTION 143d773e0 X509_policy_tree_get0_user_policies body=24 status=ok
// SIG undefined X509_policy_tree_get0_user_policies(void)

undefined8 X509_policy_tree_get0_user_policies(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x28) & 2) != 0) {
    return *(undefined8 *)(param_1 + 0x18);
  }
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 143d77400 policy_data_free body=95 status=ok
// SIG undefined policy_data_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void policy_data_free(byte *param_1)

{
  if (param_1 != (byte *)0x0) {
    ASN1_OBJECT_free(*(undefined8 *)(param_1 + 8));
    if ((*param_1 & 4) == 0) {
      OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x10),FUN_143d79a30);
    }
    OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x18),ASN1_OBJECT_free);
    CRYPTO_free(param_1,"crypto\\x509v3\\pcy_data.c",0x1b);
  }
  return;
}



// FUNCTION 143d77460 policy_data_new body=301 status=ok
// SIG undefined policy_data_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * policy_data_new(undefined8 *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143d77475;
  if (param_1 == (undefined8 *)0x0) {
    if (param_2 == 0) {
      return (undefined4 *)0x0;
    }
  }
  else if (param_2 == 0) {
    lVar1 = 0;
    goto LAB_143d774c1;
  }
  lVar1 = OBJ_dup(param_2);
  if (lVar1 == 0) {
    return (undefined4 *)0x0;
  }
LAB_143d774c1:
  puVar2 = (undefined4 *)CRYPTO_zalloc(0x20,"crypto\\x509v3\\pcy_data.c");
  if (puVar2 == (undefined4 *)0x0) {
    uVar4 = 0x36;
  }
  else {
    lVar3 = OPENSSL_sk_new_null();
    *(longlong *)(puVar2 + 6) = lVar3;
    if (lVar3 != 0) {
      if (param_3 != 0) {
        *puVar2 = 0x10;
      }
      if (lVar1 == 0) {
        *(undefined8 *)(puVar2 + 2) = *param_1;
        *param_1 = 0;
      }
      else {
        *(longlong *)(puVar2 + 2) = lVar1;
      }
      if (param_1 == (undefined8 *)0x0) {
        return puVar2;
      }
      *(undefined8 *)(puVar2 + 4) = param_1[1];
      param_1[1] = 0;
      return puVar2;
    }
    CRYPTO_free(puVar2,"crypto\\x509v3\\pcy_data.c",0x3b);
    ASN1_OBJECT_free(lVar1);
    uVar4 = 0x3d;
  }
  ERR_put_error(0x22,0xab,0x41,"crypto\\x509v3\\pcy_data.c",uVar4,uVar5);
  return (undefined4 *)0x0;
}



// FUNCTION 143d77590 level_add_node body=375 status=ok
// SIG undefined level_add_node(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * level_add_node(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143d775b0;
  plVar2 = (longlong *)CRYPTO_zalloc(0x18,"crypto\\x509v3\\pcy_node.c",0x42);
  if (plVar2 == (longlong *)0x0) {
    ERR_put_error(0x22,0xa8,0x41,"crypto\\x509v3\\pcy_node.c",0x44,uVar5);
    return (longlong *)0x0;
  }
  *plVar2 = param_2;
  plVar2[1] = param_3;
  if (param_1 == 0) {
LAB_143d7762c:
    if (param_4 != 0) {
      lVar3 = *(longlong *)(param_4 + 0x10);
      if (lVar3 == 0) {
        lVar3 = OPENSSL_sk_new_null();
        *(longlong *)(param_4 + 0x10) = lVar3;
        if (lVar3 == 0) {
          uVar4 = 0x61;
          goto LAB_143d776ae;
        }
      }
      iVar1 = OPENSSL_sk_push(lVar3,param_2);
      if (iVar1 == 0) {
        uVar4 = 0x65;
        goto LAB_143d776ae;
      }
    }
    if (param_3 != 0) {
      *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
    }
  }
  else {
    iVar1 = OBJ_obj2nid(*(undefined8 *)(param_2 + 8));
    if (iVar1 == 0x2ea) {
      if (*(longlong *)(param_1 + 0x10) == 0) {
        *(longlong **)(param_1 + 0x10) = plVar2;
        goto LAB_143d7762c;
      }
    }
    else {
      lVar3 = *(longlong *)(param_1 + 8);
      if (lVar3 == 0) {
        lVar3 = OPENSSL_sk_new(node_cmp);
        *(longlong *)(param_1 + 8) = lVar3;
        if (lVar3 != 0) goto LAB_143d7767e;
        uVar4 = 0x53;
      }
      else {
LAB_143d7767e:
        iVar1 = OPENSSL_sk_push(lVar3,plVar2);
        if (iVar1 != 0) goto LAB_143d7762c;
        uVar4 = 0x57;
      }
LAB_143d776ae:
      ERR_put_error(0x22,0xa8,0x41,"crypto\\x509v3\\pcy_node.c",uVar4,uVar5);
    }
    CRYPTO_free(plVar2,"crypto\\x509v3\\pcy_node.c",0x76);
    plVar2 = (longlong *)0x0;
  }
  return plVar2;
}



// FUNCTION 143d77710 level_find_node body=152 status=ok
// SIG undefined level_find_node(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * level_find_node(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
  if (0 < iVar1) {
    do {
      plVar2 = (longlong *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 8),iVar3);
      if ((plVar2[1] == param_2) &&
         (iVar1 = OBJ_cmp(*(undefined8 *)(*plVar2 + 8),param_3), iVar1 == 0)) {
        return plVar2;
      }
      iVar3 = iVar3 + 1;
      iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
    } while (iVar3 < iVar1);
  }
  return (longlong *)0x0;
}



// FUNCTION 143d777b0 node_cmp body=42 status=ok
// SIG undefined node_cmp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void node_cmp(undefined8 *param_1,undefined8 *param_2)

{
  OBJ_cmp(*(undefined8 *)(*(longlong *)*param_1 + 8),*(undefined8 *)(*(longlong *)*param_2 + 8));
  return;
}



// FUNCTION 143d777e0 policy_node_cmp_new body=29 status=ok
// SIG undefined policy_node_cmp_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void policy_node_cmp_new(void)

{
  OPENSSL_sk_new(node_cmp);
  return;
}



// FUNCTION 143d77800 policy_node_free body=33 status=ok
// SIG undefined policy_node_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void policy_node_free(undefined8 param_1)

{
  CRYPTO_free(param_1,"crypto\\x509v3\\pcy_node.c",0x76);
  return;
}



// FUNCTION 143d77830 policy_node_match body=160 status=ok
// SIG undefined policy_node_match(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 policy_node_match(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  byte *pbVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  pbVar1 = (byte *)*param_2;
  if (((*(uint *)(param_1 + 0x18) & 0x400) == 0) && ((*pbVar1 & 3) != 0)) {
    iVar4 = 0;
    iVar2 = OPENSSL_sk_num(*(undefined8 *)(pbVar1 + 0x18));
    if (0 < iVar2) {
      do {
        uVar3 = OPENSSL_sk_value(*(undefined8 *)(pbVar1 + 0x18),iVar4);
        iVar2 = OBJ_cmp(uVar3,param_3);
        if (iVar2 == 0) {
          return 1;
        }
        iVar4 = iVar4 + 1;
        iVar2 = OPENSSL_sk_num(*(undefined8 *)(pbVar1 + 0x18));
      } while (iVar4 < iVar2);
    }
  }
  else {
    iVar2 = OBJ_cmp(*(undefined8 *)(pbVar1 + 8),param_3);
    if (iVar2 == 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143d778d0 tree_find_sk body=59 status=ok
// SIG undefined tree_find_sk(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void tree_find_sk(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 *local_48 [3];
  undefined1 local_30 [8];
  undefined8 local_28;
  undefined8 uStack_10;
  
  uStack_10 = 0x143d778dc;
  local_48[0] = local_30;
  local_28 = param_2;
  uVar1 = OPENSSL_sk_find(param_1,local_48);
  OPENSSL_sk_value(param_1,uVar1);
  return;
}



// FUNCTION 143d77910 ASN1_PRINTABLE_type body=176 status=ok
// SIG undefined ASN1_PRINTABLE_type(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASN1_PRINTABLE_type(byte *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  
  bVar2 = false;
  bVar1 = false;
  if ((param_1 != (byte *)0x0) && (*param_1 != 0)) {
    iVar5 = -1;
    if (0 < param_2) {
      iVar5 = param_2;
    }
    bVar4 = *param_1;
    do {
      if (iVar5 == 0) break;
      param_1 = param_1 + 1;
      iVar3 = ossl_ctype_check(bVar4,0x800);
      if (iVar3 == 0) {
        bVar2 = true;
      }
      if ((bVar4 & 0x80) != 0) {
        bVar1 = true;
      }
      bVar4 = *param_1;
      iVar5 = iVar5 + -1;
    } while (*param_1 != 0);
    if (bVar1) {
      return 0x14;
    }
    if (bVar2) {
      return 0x16;
    }
  }
  return 0x13;
}



// FUNCTION 143d779c0 ASN1_STRING_print body=208 status=ok
// SIG undefined ASN1_STRING_print(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 ASN1_STRING_print(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined1 auStack_88 [32];
  char local_68 [80];
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = 0x143d779da;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  if (param_2 == (int *)0x0) {
LAB_143d77a68:
    uVar1 = 0;
  }
  else {
    pcVar5 = *(char **)(param_2 + 2);
    iVar6 = 0;
    iVar4 = 0;
    if (0 < *param_2) {
      lVar3 = 0;
      do {
        cVar2 = *pcVar5;
        if (((0x5e < (byte)(cVar2 - 0x20U)) && (cVar2 != '\n')) && (cVar2 != '\r')) {
          cVar2 = '.';
        }
        local_68[lVar3] = cVar2;
        iVar6 = iVar6 + 1;
        lVar3 = lVar3 + 1;
        if (0x4f < iVar6) {
          iVar6 = BIO_write(param_1);
          if (iVar6 < 1) goto LAB_143d77a68;
          iVar6 = 0;
          lVar3 = 0;
        }
        iVar4 = iVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (iVar4 < *param_2);
      if (0 < iVar6) {
        iVar4 = BIO_write(param_1,local_68);
        if (iVar4 < 1) goto LAB_143d77a68;
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 143d77a90 ASN1_STRING_TABLE_add body=381 status=ok
// SIG undefined ASN1_STRING_TABLE_add(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ASN1_STRING_TABLE_add(undefined4 param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143d77aae;
  if ((DAT_146bcba20 == 0) && (DAT_146bcba20 = OPENSSL_sk_new(&LAB_143cae300), DAT_146bcba20 == 0))
  goto LAB_143d77ba6;
  puVar3 = (undefined4 *)ASN1_STRING_TABLE_get(param_1);
  if ((puVar3 == (undefined4 *)0x0) || (puVar4 = puVar3, (*(byte *)(puVar3 + 4) & 1) == 0)) {
    puVar4 = (undefined4 *)CRYPTO_zalloc(0x14,"crypto\\asn1\\a_strnid.c",0x9f);
    if (puVar4 == (undefined4 *)0x0) {
      ERR_put_error(0xd,0x8a,0x41,"crypto\\asn1\\a_strnid.c",0xa0,uVar5);
      goto LAB_143d77ba6;
    }
    iVar1 = OPENSSL_sk_push(DAT_146bcba20,puVar4);
    if (iVar1 == 0) {
      CRYPTO_free(puVar4,"crypto\\asn1\\a_strnid.c",0xa4);
      goto LAB_143d77ba6;
    }
    if (puVar3 == (undefined4 *)0x0) {
      *puVar4 = param_1;
      uVar2 = 1;
      *(undefined8 *)(puVar4 + 1) = 0xffffffffffffffff;
    }
    else {
      *puVar4 = *puVar3;
      puVar4[1] = puVar3[1];
      puVar4[2] = puVar3[2];
      puVar4[3] = puVar3[3];
      uVar2 = puVar3[4] | 1;
    }
    puVar4[4] = uVar2;
  }
  if (puVar4 != (undefined4 *)0x0) {
    if (-1 < param_2) {
      puVar4[1] = param_2;
    }
    if (-1 < param_3) {
      puVar4[2] = param_3;
    }
    if (param_4 != 0) {
      puVar4[3] = param_4;
    }
    if (param_5 != 0) {
      puVar4[4] = param_5 | 1;
    }
    return 1;
  }
LAB_143d77ba6:
  ERR_put_error(0xd,0x81,0x41,"crypto\\asn1\\a_strnid.c",0xbe,uVar5);
  return 0;
}



// FUNCTION 143d77c10 ASN1_STRING_TABLE_cleanup body=57 status=ok
// SIG undefined ASN1_STRING_TABLE_cleanup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_STRING_TABLE_cleanup(void)

{
  longlong lVar1;
  
  lVar1 = DAT_146bcba20;
  if (DAT_146bcba20 != 0) {
    DAT_146bcba20 = 0;
    OPENSSL_sk_pop_free(lVar1,st_free);
    return;
  }
  return;
}



// FUNCTION 143d77c50 ASN1_STRING_TABLE_get body=147 status=ok
// SIG undefined ASN1_STRING_TABLE_get(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void ASN1_STRING_TABLE_get(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined4 local_28 [6];
  ulonglong local_10;
  undefined8 uStack_8;
  
  uStack_8 = 0x143d77c5a;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  local_28[0] = param_1;
  if (DAT_146bcba20 != 0) {
    iVar1 = OPENSSL_sk_find(DAT_146bcba20,local_28);
    if (-1 < iVar1) {
      OPENSSL_sk_value(DAT_146bcba20,iVar1);
      return;
    }
  }
  local_38 = &LAB_1431fadb0;
  OBJ_bsearch_(local_28,&DAT_145da4af0,0x1b);
  return;
}



// FUNCTION 143d77cf0 ASN1_STRING_set_by_NID body=193 status=ok
// SIG undefined ASN1_STRING_set_by_NID(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ASN1_STRING_set_by_NID
          (undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 local_res8;
  undefined8 uVar5;
  
  uVar5 = 0x143d77d0a;
  local_res8 = 0;
  puVar4 = &local_res8;
  if (param_1 != (undefined8 *)0x0) {
    puVar4 = param_1;
  }
  lVar2 = ASN1_STRING_TABLE_get(param_5);
  if (lVar2 == 0) {
    iVar1 = ASN1_mbstring_copy(puVar4,param_2,param_3,param_4,DAT_146837dc0 & 0x2806);
  }
  else {
    uVar3 = *(uint *)(lVar2 + 0xc);
    if ((*(byte *)(lVar2 + 0x10) & 2) == 0) {
      uVar3 = uVar3 & DAT_146837dc0;
    }
    iVar1 = ASN1_mbstring_ncopy(puVar4,param_2,param_3,param_4,uVar3,*(undefined4 *)(lVar2 + 4),
                                *(undefined4 *)(lVar2 + 8),uVar5);
  }
  if (iVar1 < 1) {
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar4;
  }
  return uVar5;
}



// FUNCTION 143d77dc0 st_free body=46 status=ok
// SIG undefined st_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void st_free(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    CRYPTO_free(param_1,"crypto\\asn1\\a_strnid.c",0xda);
    return;
  }
  return;
}



// FUNCTION 143d77df0 FUN_143d77df0 body=739 status=ok
// SIG undefined FUN_143d77df0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143d77df0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined2 *puVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 auStack_188 [32];
  uint local_168;
  uint local_160;
  uint local_158;
  longlong local_148;
  char local_140 [7];
  undefined2 uStack_139;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  iVar8 = 0;
  iVar2 = OPENSSL_sk_num(param_2);
  if (0 < iVar2) {
    do {
      puVar3 = (undefined4 *)OPENSSL_sk_value(param_2,iVar8);
      local_148 = param_3;
      switch(*puVar3) {
      case 0:
        pcVar6 = "othername";
        goto LAB_143d77e81;
      case 1:
        iVar2 = FUN_143d2e3a0("email",*(undefined8 *)(*(longlong *)(puVar3 + 2) + 8),&local_148);
        break;
      case 2:
        iVar2 = FUN_143d2e3a0(&DAT_145da4eb0,*(undefined8 *)(*(longlong *)(puVar3 + 2) + 8),
                              &local_148);
        break;
      case 3:
        pcVar6 = "X400Name";
        goto LAB_143d77e81;
      case 4:
        lVar4 = X509_NAME_oneline(*(undefined8 *)(puVar3 + 2),(longlong)&uStack_139 + 1,0x100);
        if (lVar4 != 0) {
          pcVar7 = (char *)((longlong)&uStack_139 + 1);
          pcVar6 = "DirName";
          goto LAB_143d77e88;
        }
        goto LAB_143d77e9a;
      case 5:
        pcVar6 = "EdiPartyName";
LAB_143d77e81:
        pcVar7 = "<unsupported>";
LAB_143d77e88:
        iVar2 = X509V3_add_value(pcVar6,pcVar7,&local_148);
        break;
      case 6:
        iVar2 = FUN_143d2e3a0(&DAT_145da4eb4,*(undefined8 *)(*(longlong *)(puVar3 + 2) + 8),
                              &local_148);
        break;
      case 7:
        iVar2 = **(int **)(puVar3 + 2);
        puVar9 = *(undefined1 **)(*(int **)(puVar3 + 2) + 2);
        if (iVar2 == 4) {
          local_158 = (uint)(byte)puVar9[3];
          local_160 = (uint)(byte)puVar9[2];
          local_168 = (uint)(byte)puVar9[1];
          BIO_snprintf((longlong)&uStack_139 + 1,0x100,"%d.%d.%d.%d",*puVar9);
          pcVar7 = (char *)((longlong)&uStack_139 + 1);
          pcVar6 = "IP Address";
        }
        else if (iVar2 == 0x10) {
          uStack_139._1_1_ = 0;
          iVar2 = 0;
          do {
            BIO_snprintf(local_140,5,&DAT_145d811d8,CONCAT11(*puVar9,puVar9[1]));
            puVar5 = &uStack_139;
            puVar9 = puVar9 + 2;
            do {
              pcVar7 = (char *)((longlong)puVar5 + 1);
              puVar5 = (undefined2 *)((longlong)puVar5 + 1);
            } while (*pcVar7 != '\0');
            lVar4 = 0;
            do {
              cVar1 = local_140[lVar4];
              *(char *)((longlong)puVar5 + lVar4) = cVar1;
              lVar4 = lVar4 + 1;
            } while (cVar1 != '\0');
            if (iVar2 != 7) {
              puVar5 = &uStack_139;
              do {
                pcVar7 = (char *)((longlong)puVar5 + 1);
                puVar5 = (undefined2 *)((longlong)puVar5 + 1);
              } while (*pcVar7 != '\0');
              *puVar5 = 0x3a;
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < 8);
          pcVar7 = (char *)((longlong)&uStack_139 + 1);
          pcVar6 = "IP Address";
        }
        else {
          pcVar7 = "<invalid>";
          pcVar6 = "IP Address";
        }
        goto LAB_143d77e88;
      case 8:
        i2t_ASN1_OBJECT((longlong)&uStack_139 + 1,0x100,*(undefined8 *)(puVar3 + 2));
        pcVar7 = (char *)((longlong)&uStack_139 + 1);
        pcVar6 = "Registered ID";
        goto LAB_143d77e88;
      default:
        goto switchD_143d77e78_default;
      }
      param_3 = local_148;
      if (iVar2 == 0) {
LAB_143d77e9a:
        param_3 = 0;
      }
switchD_143d77e78_default:
      iVar8 = iVar8 + 1;
      iVar2 = OPENSSL_sk_num(param_2);
    } while (iVar8 < iVar2);
  }
  if (param_3 == 0) {
    param_3 = OPENSSL_sk_new_null();
  }
  return param_3;
}



// FUNCTION 143d78100 v2i_subject_alt body=402 status=ok
// SIG undefined v2i_subject_alt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong v2i_subject_alt(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  
  uVar8 = 0x143d78113;
  iVar1 = OPENSSL_sk_num(param_3);
  lVar3 = OPENSSL_sk_new_reserve(0,iVar1);
  if (lVar3 == 0) {
    ERR_put_error(0x22,0x9a,0x41,"crypto\\x509v3\\v3_alt.c",0x121,uVar8);
    OPENSSL_sk_free(0);
    return 0;
  }
  iVar7 = 0;
  if (0 < iVar1) {
    do {
      lVar4 = OPENSSL_sk_value(param_3,iVar7);
      iVar2 = name_cmp(*(undefined8 *)(lVar4 + 8),"email");
      if ((iVar2 == 0) && (*(longlong *)(lVar4 + 0x10) != 0)) {
        lVar5 = 0;
        do {
          lVar6 = lVar5 + 1;
          if (*(char *)(*(longlong *)(lVar4 + 0x10) + lVar5) != (&DAT_145da4fb8)[lVar5])
          goto LAB_143d781e9;
          lVar5 = lVar6;
        } while (lVar6 != 5);
        iVar2 = 0;
LAB_143d78228:
        iVar2 = copy_email(param_2,lVar3,iVar2);
        if (iVar2 == 0) {
LAB_143d78237:
          OPENSSL_sk_pop_free(lVar3,GENERAL_NAME_free);
          return 0;
        }
      }
      else {
LAB_143d781e9:
        iVar2 = name_cmp(*(undefined8 *)(lVar4 + 8),"email");
        if ((iVar2 == 0) && (*(longlong *)(lVar4 + 0x10) != 0)) {
          lVar5 = 0;
          do {
            lVar6 = lVar5;
            if (*(char *)(*(longlong *)(lVar4 + 0x10) + lVar6) != (&DAT_145da4fc0)[lVar6])
            goto LAB_143d7824a;
            lVar5 = lVar6 + 1;
          } while (lVar6 + 1 != 5);
          iVar2 = (int)lVar6 + -3;
          goto LAB_143d78228;
        }
LAB_143d7824a:
        lVar4 = v2i_GENERAL_NAME(param_1,param_2,lVar4);
        if (lVar4 == 0) goto LAB_143d78237;
        OPENSSL_sk_push(lVar3,lVar4);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar1);
  }
  return lVar3;
}



// FUNCTION 143d782a0 v2i_issuer_alt body=568 status=ok
// SIG undefined v2i_issuer_alt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong v2i_issuer_alt(undefined8 param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined8 uVar10;
  
  uVar10 = 0x143d782b7;
  iVar1 = OPENSSL_sk_num(param_3);
  lVar5 = OPENSSL_sk_new_reserve(0,iVar1);
  if (lVar5 == 0) {
    ERR_put_error(0x22,0x99,0x41,"crypto\\x509v3\\v3_alt.c",0xd2,uVar10);
    OPENSSL_sk_free(0);
    return 0;
  }
  iVar9 = 0;
  if (0 < iVar1) {
    do {
      lVar6 = OPENSSL_sk_value(param_3,iVar9);
      iVar2 = name_cmp(*(undefined8 *)(lVar6 + 8),"issuer");
      if ((iVar2 == 0) && (*(longlong *)(lVar6 + 0x10) != 0)) {
        lVar7 = 0;
        do {
          lVar8 = lVar7 + 1;
          if (*(char *)(*(longlong *)(lVar6 + 0x10) + lVar7) != (&DAT_145da4fb8)[lVar7])
          goto LAB_143d78441;
          lVar7 = lVar8;
        } while (lVar8 != 5);
        if (param_2 == (int *)0x0) {
LAB_143d784a4:
          uVar4 = 0xf7;
          uVar10 = 0x7f;
        }
        else {
          if (*param_2 == 1) goto LAB_143d7845f;
          if (*(longlong *)(param_2 + 2) == 0) goto LAB_143d784a4;
          iVar2 = X509_get_ext_d2i(*(longlong *)(param_2 + 2),0x55,0xffffffff);
          if (iVar2 < 0) goto LAB_143d7845f;
          lVar6 = X509_get_ext_d2i(*(undefined8 *)(param_2 + 2),iVar2);
          if ((lVar6 == 0) || (lVar6 = X509V3_EXT_d2i(lVar6), lVar6 == 0)) {
            uVar4 = 0xff;
            uVar10 = 0x7e;
          }
          else {
            iVar2 = OPENSSL_sk_num(lVar6);
            iVar3 = OPENSSL_sk_reserve(lVar5,iVar2);
            if (iVar3 != 0) {
              iVar3 = 0;
              if (0 < iVar2) {
                do {
                  uVar10 = OPENSSL_sk_value(lVar6,iVar3);
                  OPENSSL_sk_push(lVar5,uVar10);
                  iVar3 = iVar3 + 1;
                } while (iVar3 < iVar2);
              }
              OPENSSL_sk_free(lVar6);
              goto LAB_143d7845f;
            }
            uVar4 = 0x105;
            uVar10 = 0x41;
          }
        }
        ERR_put_error(0x22,0x7b,uVar10,"crypto\\x509v3\\v3_alt.c",uVar4);
LAB_143d784c5:
        OPENSSL_sk_pop_free(lVar5,GENERAL_NAME_free);
        return 0;
      }
LAB_143d78441:
      lVar6 = v2i_GENERAL_NAME(param_1,param_2,lVar6);
      if (lVar6 == 0) goto LAB_143d784c5;
      OPENSSL_sk_push(lVar5,lVar6);
LAB_143d7845f:
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar1);
  }
  return lVar5;
}



// FUNCTION 143d784e0 FUN_143d784e0 body=579 status=ok
// SIG undefined FUN_143d784e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_143d784e0(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  
  switch(*param_2) {
  case 0:
    BIO_printf(param_1,"othername:<unsupported>");
    return 1;
  case 1:
    BIO_printf(param_1,"email:%s",*(undefined8 *)(*(longlong *)(param_2 + 2) + 8));
    return 1;
  case 2:
    BIO_printf(param_1,"DNS:%s",*(undefined8 *)(*(longlong *)(param_2 + 2) + 8));
    return 1;
  case 3:
    BIO_printf(param_1,"X400Name:<unsupported>");
    return 1;
  case 4:
    BIO_printf(param_1,"DirName:");
    X509_NAME_print_ex(param_1,*(undefined8 *)(param_2 + 2),0,0x82031f);
    return 1;
  case 5:
    BIO_printf(param_1,"EdiPartyName:<unsupported>");
    return 1;
  case 6:
    BIO_printf(param_1,"URI:%s",*(undefined8 *)(*(longlong *)(param_2 + 2) + 8));
    return 1;
  case 7:
    break;
  case 8:
    BIO_printf(param_1,"Registered ID:");
    i2a_ASN1_OBJECT(param_1,*(undefined8 *)(param_2 + 2));
  default:
    return 1;
  }
  iVar1 = **(int **)(param_2 + 2);
  puVar3 = *(undefined1 **)(*(int **)(param_2 + 2) + 2);
  if (iVar1 == 4) {
    BIO_printf(param_1,"IP Address:%d.%d.%d.%d",*puVar3,puVar3[1],puVar3[2],
               CONCAT44(1,(uint)(byte)puVar3[3]));
    return 1;
  }
  if (iVar1 != 0x10) {
    BIO_printf(param_1,"IP Address:<invalid>");
    return 1;
  }
  BIO_printf(param_1,"IP Address");
  lVar2 = 8;
  do {
    BIO_printf(param_1,&DAT_145da4f88,CONCAT11(*puVar3,puVar3[1]));
    puVar3 = puVar3 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  BIO_puts(param_1,&DAT_143fc48d8);
  return 1;
}



// FUNCTION 143d78750 FUN_143d78750 body=880 status=ok
// SIG undefined FUN_143d78750(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 *
FUN_143d78750(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             char *param_5,int param_6)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  if (param_5 == (char *)0x0) {
    ERR_put_error(0x22,0xa4,0x7c,"crypto\\x509v3\\v3_alt.c",0x1a2);
    return (undefined4 *)0x0;
  }
  puVar2 = param_1;
  if ((param_1 == (undefined4 *)0x0) &&
     (puVar2 = (undefined4 *)GENERAL_NAME_new(), puVar2 == (undefined4 *)0x0)) {
    ERR_put_error(0x22,0xa4,0x41,"crypto\\x509v3\\v3_alt.c",0x1ab);
    return (undefined4 *)0x0;
  }
  switch(param_4) {
  case 0:
    pcVar4 = _guard_xfg_dispatch_icall_nop(param_5,0x3b);
    if (pcVar4 != (char *)0x0) {
      lVar3 = FUN_143d2d200();
      *(longlong *)(puVar2 + 2) = lVar3;
      if (lVar3 != 0) {
        ASN1_TYPE_free(*(undefined8 *)(lVar3 + 8));
        lVar3 = ASN1_generate_v3(pcVar4 + 1,param_3);
        *(longlong *)(*(longlong *)(puVar2 + 2) + 8) = lVar3;
        if ((lVar3 != 0) &&
           (lVar3 = CRYPTO_strndup(param_5,(longlong)((int)pcVar4 - (int)param_5),
                                   "crypto\\x509v3\\v3_alt.c",0x22d), lVar3 != 0)) {
          uVar6 = OBJ_txt2obj(lVar3,0);
          **(undefined8 **)(puVar2 + 2) = uVar6;
          CRYPTO_free(lVar3,"crypto\\x509v3\\v3_alt.c",0x231);
          if (**(longlong **)(puVar2 + 2) != 0) goto LAB_143d78a5f;
        }
      }
    }
    uVar7 = 0x1d8;
    uVar6 = 0x93;
    break;
  case 1:
  case 2:
  case 6:
    lVar3 = ASN1_IA5STRING_new();
    *(longlong *)(puVar2 + 2) = lVar3;
    if (lVar3 != 0) {
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (param_5[lVar5] != '\0');
      iVar1 = ASN1_STRING_set(lVar3,param_5);
      if (iVar1 != 0) goto LAB_143d78a5f;
    }
    uVar7 = 0x1e5;
    uVar6 = 0x41;
    break;
  default:
    uVar7 = 0x1dd;
    uVar6 = 0xa7;
    break;
  case 4:
    lVar5 = 0;
    iVar1 = 0;
    lVar3 = X509_NAME_free();
    if (lVar3 == 0) {
LAB_143d7892f:
      X509_NAME_free(lVar3);
    }
    else {
      lVar5 = X509V3_get_section(param_3,param_5);
      if (lVar5 == 0) {
        ERR_put_error(0x22,0x90,0x96,"crypto\\x509v3\\v3_alt.c",0x241);
        ERR_add_error_data(2,"section=",param_5);
        goto LAB_143d7892f;
      }
      iVar1 = X509V3_NAME_from_section(lVar3,lVar5,0x1001);
      if (iVar1 == 0) goto LAB_143d7892f;
      *(longlong *)(puVar2 + 2) = lVar3;
    }
    X509V3_section_free(param_3,lVar5);
    if (iVar1 != 0) {
LAB_143d78a5f:
      *puVar2 = param_4;
      return puVar2;
    }
    uVar7 = 0x1d1;
    uVar6 = 0x95;
    break;
  case 7:
    if (param_6 == 0) {
      lVar3 = a2i_IPADDRESS(param_5);
    }
    else {
      lVar3 = a2i_IPADDRESS_NC();
    }
    *(longlong *)(puVar2 + 2) = lVar3;
    if (lVar3 == 0) {
      ERR_put_error(0x22,0xa4,0x76,"crypto\\x509v3\\v3_alt.c",0x1c9);
      ERR_add_error_data(2,"value=",param_5);
      goto LAB_143d78a9b;
    }
    goto LAB_143d78a5f;
  case 8:
    lVar3 = OBJ_txt2obj(param_5,0);
    if (lVar3 != 0) {
      *(longlong *)(puVar2 + 2) = lVar3;
      *puVar2 = param_4;
      return puVar2;
    }
    ERR_put_error(0x22,0xa4,0x77,"crypto\\x509v3\\v3_alt.c",0x1bb);
    ERR_add_error_data(2,"value=",param_5);
    goto LAB_143d78a9b;
  }
  ERR_put_error(0x22,0xa4,uVar6,"crypto\\x509v3\\v3_alt.c",uVar7);
LAB_143d78a9b:
  if (param_1 == (undefined4 *)0x0) {
    GENERAL_NAME_free(puVar2);
  }
  return (undefined4 *)0x0;
}



// FUNCTION 143d78af0 copy_email body=363 status=ok
// SIG undefined copy_email(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 copy_email(int *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  
  uVar9 = 0x143d78b0e;
  lVar7 = 0;
  puVar8 = (undefined4 *)0x0;
  if (param_1 == (int *)0x0) {
LAB_143d78c0d:
    uVar3 = 0x14d;
    uVar4 = 0x7d;
LAB_143d78c18:
    ERR_put_error(0x22,0x7a,uVar4,"crypto\\x509v3\\v3_alt.c",uVar3,uVar9);
    GENERAL_NAME_free(puVar8);
    ASN1_BIT_STRING_free(lVar7);
    uVar9 = 0;
  }
  else {
    if (*param_1 != 1) {
      if (*(longlong *)(param_1 + 4) == 0) {
        if (*(longlong *)(param_1 + 6) == 0) goto LAB_143d78c0d;
        uVar4 = FUniqueNetIdString::GetBytes();
      }
      else {
        uVar4 = FBackChannelConnection::GetSocket(*(longlong *)(param_1 + 4));
      }
      for (iVar1 = X509_NAME_get_index_by_NID(uVar4,0x30,0xffffffff); -1 < iVar1;
          iVar1 = X509_NAME_get_index_by_NID(uVar4,0x30,iVar1)) {
        uVar5 = X509_NAME_get_entry(uVar4,iVar1);
        uVar6 = X509_NAME_ENTRY_get_data(uVar5);
        lVar7 = ASN1_STRING_dup(uVar6);
        if (param_3 != 0) {
          X509_NAME_delete_entry(uVar4,iVar1);
          X509_NAME_ENTRY_free(uVar5);
          iVar1 = iVar1 + -1;
        }
        puVar8 = (undefined4 *)0x0;
        if ((lVar7 == 0) || (puVar8 = (undefined4 *)GENERAL_NAME_new(), puVar8 == (undefined4 *)0x0)
           ) {
          uVar3 = 0x161;
          uVar4 = 0x41;
          goto LAB_143d78c18;
        }
        *(longlong *)(puVar8 + 2) = lVar7;
        *puVar8 = 1;
        lVar7 = 0;
        iVar2 = OPENSSL_sk_push(param_2,puVar8);
        if (iVar2 == 0) {
          uVar3 = 0x168;
          uVar4 = 0x41;
          goto LAB_143d78c18;
        }
      }
    }
    uVar9 = 1;
  }
  return uVar9;
}



// FUNCTION 143d78c60 FUN_143d78c60 body=626 status=ok
// SIG undefined FUN_143d78c60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143d78c60(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined1 auStack_168 [32];
  uint local_148;
  uint local_140;
  uint local_138;
  undefined8 local_128;
  char local_120 [7];
  undefined2 uStack_119;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143d78c6c;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_128 = param_3;
  switch(*param_2) {
  case 0:
    pcVar6 = "<unsupported>";
    pcVar5 = "othername";
    break;
  case 1:
    iVar2 = FUN_143d2e3a0("email",*(undefined8 *)(*(longlong *)(param_2 + 2) + 8),&local_128);
    goto LAB_143d78ea9;
  case 2:
    iVar2 = FUN_143d2e3a0(&DAT_145da4eb0,*(undefined8 *)(*(longlong *)(param_2 + 2) + 8),&local_128)
    ;
    goto LAB_143d78ea9;
  case 3:
    pcVar6 = "<unsupported>";
    pcVar5 = "X400Name";
    break;
  case 4:
    lVar3 = X509_NAME_oneline(*(undefined8 *)(param_2 + 2),(longlong)&uStack_119 + 1,0x100);
    if (lVar3 != 0) {
      pcVar5 = "DirName";
      goto LAB_143d78e9a;
    }
    goto LAB_143d78ead;
  case 5:
    pcVar6 = "<unsupported>";
    pcVar5 = "EdiPartyName";
    break;
  case 6:
    iVar2 = FUN_143d2e3a0(&DAT_145da4eb4,*(undefined8 *)(*(longlong *)(param_2 + 2) + 8),&local_128)
    ;
    goto LAB_143d78ea9;
  case 7:
    iVar2 = **(int **)(param_2 + 2);
    puVar7 = *(undefined1 **)(*(int **)(param_2 + 2) + 2);
    if (iVar2 == 4) {
      local_138 = (uint)(byte)puVar7[3];
      local_140 = (uint)(byte)puVar7[2];
      local_148 = (uint)(byte)puVar7[1];
      BIO_snprintf((longlong)&uStack_119 + 1,0x100,"%d.%d.%d.%d",*puVar7);
      pcVar5 = "IP Address";
    }
    else {
      if (iVar2 != 0x10) {
        pcVar6 = "<invalid>";
        pcVar5 = "IP Address";
        break;
      }
      iVar2 = 0;
      uStack_119._1_1_ = 0;
      do {
        BIO_snprintf(local_120,5,&DAT_145d811d8,CONCAT11(*puVar7,puVar7[1]));
        puVar4 = &uStack_119;
        puVar7 = puVar7 + 2;
        do {
          pcVar5 = (char *)((longlong)puVar4 + 1);
          puVar4 = (undefined2 *)((longlong)puVar4 + 1);
        } while (*pcVar5 != '\0');
        lVar3 = 0;
        do {
          cVar1 = local_120[lVar3];
          *(char *)((longlong)puVar4 + lVar3) = cVar1;
          lVar3 = lVar3 + 1;
        } while (cVar1 != '\0');
        if (iVar2 != 7) {
          puVar4 = &uStack_119;
          do {
            pcVar5 = (char *)((longlong)puVar4 + 1);
            puVar4 = (undefined2 *)((longlong)puVar4 + 1);
          } while (*pcVar5 != '\0');
          *puVar4 = 0x3a;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 8);
      pcVar5 = "IP Address";
    }
    goto LAB_143d78e9a;
  case 8:
    i2t_ASN1_OBJECT((longlong)&uStack_119 + 1,0x100,*(undefined8 *)(param_2 + 2));
    pcVar5 = "Registered ID";
LAB_143d78e9a:
    pcVar6 = (char *)((longlong)&uStack_119 + 1);
    break;
  default:
    goto switchD_143d78ca6_default;
  }
  iVar2 = X509V3_add_value(pcVar5,pcVar6,&local_128);
LAB_143d78ea9:
  param_3 = local_128;
  if (iVar2 == 0) {
LAB_143d78ead:
    param_3 = 0;
  }
switchD_143d78ca6_default:
  return param_3;
}



// FUNCTION 143d78f00 v2i_GENERAL_NAME body=356 status=ok
// SIG undefined v2i_GENERAL_NAME(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 v2i_GENERAL_NAME(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 in_stack_ffffffffffffffe8;
  ulonglong uVar5;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar5 = 0x143d78f1a;
  lVar1 = *(longlong *)(param_3 + 0x10);
  uVar3 = *(undefined8 *)(param_3 + 8);
  if (lVar1 == 0) {
    ERR_put_error(0x22,0x75,0x7c,"crypto\\x509v3\\v3_alt.c",CONCAT44(uVar4,0x200),0x143d78f1a);
LAB_143d7904d:
    uVar3 = 0;
  }
  else {
    iVar2 = name_cmp(uVar3,"email");
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    else {
      iVar2 = name_cmp(uVar3,&DAT_145da4eb4);
      if (iVar2 == 0) {
        uVar4 = 6;
      }
      else {
        iVar2 = name_cmp(uVar3,&DAT_145da4eb0);
        if (iVar2 == 0) {
          uVar4 = 2;
        }
        else {
          iVar2 = name_cmp(uVar3,&DAT_145da4fc8);
          if (iVar2 == 0) {
            uVar4 = 8;
          }
          else {
            iVar2 = name_cmp(uVar3,&DAT_145da4fcc);
            if (iVar2 == 0) {
              uVar4 = 7;
            }
            else {
              iVar2 = name_cmp(uVar3,"dirName");
              if (iVar2 == 0) {
                uVar4 = 4;
              }
              else {
                iVar2 = name_cmp(uVar3,"otherName");
                if (iVar2 != 0) {
                  ERR_put_error(0x22,0x75,0x75,"crypto\\x509v3\\v3_alt.c",CONCAT44(uVar4,0x213));
                  ERR_add_error_data(2,"name=",uVar3);
                  goto LAB_143d7904d;
                }
                uVar4 = 0;
              }
            }
          }
        }
      }
    }
    uVar3 = FUN_143d78750(0,param_1,param_2,uVar4,lVar1,uVar5 & 0xffffffff00000000);
  }
  return uVar3;
}



// FUNCTION 143d79070 v2i_GENERAL_NAMES body=542 status=ok
// SIG undefined v2i_GENERAL_NAMES(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong v2i_GENERAL_NAMES(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined4 uVar7;
  longlong in_stack_ffffffffffffffc8;
  ulonglong uVar8;
  
  uVar8 = 0x143d79084;
  iVar2 = OPENSSL_sk_num(param_3);
  lVar4 = OPENSSL_sk_new_reserve(0,iVar2);
  if (lVar4 == 0) {
    ERR_put_error(0x22,0x76,0x41,"crypto\\x509v3\\v3_alt.c",0x182,uVar8);
    OPENSSL_sk_free(0);
    return 0;
  }
  iVar6 = 0;
  if (0 < iVar2) {
    do {
      uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
      lVar5 = OPENSSL_sk_value(param_3,iVar6);
      in_stack_ffffffffffffffc8 = *(longlong *)(lVar5 + 0x10);
      uVar1 = *(undefined8 *)(lVar5 + 8);
      if (in_stack_ffffffffffffffc8 == 0) {
        ERR_put_error(0x22,0x75,0x7c,"crypto\\x509v3\\v3_alt.c",CONCAT44(uVar7,0x200),uVar8);
LAB_143d79278:
        OPENSSL_sk_pop_free(lVar4,GENERAL_NAME_free);
        return 0;
      }
      iVar3 = name_cmp(uVar1,"email");
      if (iVar3 == 0) {
        uVar7 = 1;
      }
      else {
        iVar3 = name_cmp(uVar1,&DAT_145da4eb4);
        if (iVar3 == 0) {
          uVar7 = 6;
        }
        else {
          iVar3 = name_cmp(uVar1,&DAT_145da4eb0);
          if (iVar3 == 0) {
            uVar7 = 2;
          }
          else {
            iVar3 = name_cmp(uVar1,&DAT_145da4fc8);
            if (iVar3 == 0) {
              uVar7 = 8;
            }
            else {
              iVar3 = name_cmp(uVar1,&DAT_145da4fcc);
              if (iVar3 == 0) {
                uVar7 = 7;
              }
              else {
                iVar3 = name_cmp(uVar1,"dirName");
                if (iVar3 == 0) {
                  uVar7 = 4;
                }
                else {
                  iVar3 = name_cmp(uVar1,"otherName");
                  if (iVar3 != 0) {
                    ERR_put_error(0x22,0x75,0x75,"crypto\\x509v3\\v3_alt.c",CONCAT44(uVar7,0x213));
                    ERR_add_error_data(2,"name=",uVar1);
                    goto LAB_143d79278;
                  }
                  uVar7 = 0;
                }
              }
            }
          }
        }
      }
      uVar8 = uVar8 & 0xffffffff00000000;
      lVar5 = FUN_143d78750(0,param_1,param_2,uVar7,in_stack_ffffffffffffffc8);
      if (lVar5 == 0) goto LAB_143d79278;
      OPENSSL_sk_push(lVar4,lVar5);
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
  }
  return lVar4;
}



// FUNCTION 143d79290 v2i_GENERAL_NAME_ex body=372 status=ok
// SIG undefined v2i_GENERAL_NAME_ex(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
v2i_GENERAL_NAME_ex(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                   undefined4 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar5;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar5 = 1;
  lVar1 = *(longlong *)(param_4 + 0x10);
  uVar3 = *(undefined8 *)(param_4 + 8);
  if (lVar1 == 0) {
    ERR_put_error(0x22,0x75,0x7c,"crypto\\x509v3\\v3_alt.c",CONCAT44(uVar4,0x200),0x143d792b0);
LAB_143d793e7:
    uVar3 = 0;
  }
  else {
    iVar2 = name_cmp(uVar3,"email");
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    else {
      iVar2 = name_cmp(uVar3,&DAT_145da4eb4);
      if (iVar2 == 0) {
        uVar4 = 6;
      }
      else {
        iVar2 = name_cmp(uVar3,&DAT_145da4eb0);
        if (iVar2 == 0) {
          uVar4 = 2;
        }
        else {
          iVar2 = name_cmp(uVar3,&DAT_145da4fc8);
          if (iVar2 == 0) {
            uVar4 = 8;
          }
          else {
            iVar2 = name_cmp(uVar3,&DAT_145da4fcc);
            if (iVar2 == 0) {
              uVar4 = 7;
            }
            else {
              iVar2 = name_cmp(uVar3,"dirName");
              if (iVar2 == 0) {
                uVar4 = 4;
              }
              else {
                iVar2 = name_cmp(uVar3,"otherName");
                if (iVar2 != 0) {
                  ERR_put_error(0x22,0x75,0x75,"crypto\\x509v3\\v3_alt.c",CONCAT44(uVar4,0x213));
                  ERR_add_error_data(2,"name=",uVar3);
                  goto LAB_143d793e7;
                }
                uVar4 = 0;
              }
            }
          }
        }
      }
    }
    uVar3 = FUN_143d78750(param_1,param_2,param_3,uVar4,lVar1,CONCAT44(uVar5,param_5));
  }
  return uVar3;
}



// FUNCTION 143d79460 i2r_certpol body=742 status=ok
// SIG undefined i2r_certpol(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 i2r_certpol(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 *puVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  int local_48;
  
  local_48 = 0;
  iVar4 = OPENSSL_sk_num(param_2);
  if (0 < iVar4) {
    do {
      puVar5 = (undefined8 *)OPENSSL_sk_value(param_2,local_48);
      BIO_printf(param_3,"%*sPolicy: ",param_4,&DAT_143f3f584);
      i2a_ASN1_OBJECT(param_3,*puVar5);
      BIO_puts(param_3,&DAT_143fc48d8);
      lVar1 = puVar5[1];
      if (lVar1 != 0) {
        iVar9 = 0;
        iVar4 = OPENSSL_sk_num(lVar1);
        if (0 < iVar4) {
          do {
            puVar5 = (undefined8 *)OPENSSL_sk_value(lVar1,iVar9);
            iVar4 = OBJ_obj2nid(*puVar5);
            if (iVar4 == 0xa4) {
              pcVar8 = "%*sCPS: %s\n";
              uVar11 = *(undefined8 *)(puVar5[1] + 8);
              iVar4 = param_4 + 2;
LAB_143d796d2:
              BIO_printf(param_3,pcVar8,iVar4,&DAT_143f3f584,uVar11);
            }
            else if (iVar4 == 0xa5) {
              BIO_printf(param_3,"%*sUser Notice:\n",param_4 + 2,&DAT_143f3f584);
              plVar2 = (longlong *)puVar5[1];
              plVar3 = (longlong *)*plVar2;
              if (plVar3 != (longlong *)0x0) {
                BIO_printf(param_3,"%*sOrganization: %s\n",param_4 + 4,&DAT_143f3f584,
                           *(undefined8 *)(*plVar3 + 8));
                iVar4 = OPENSSL_sk_num(plVar3[1]);
                puVar7 = &DAT_143f3f584;
                if (1 < iVar4) {
                  puVar7 = &DAT_144027c44;
                }
                BIO_printf(param_3,"%*sNumber%s: ",param_4 + 4,&DAT_143f3f584,puVar7);
                iVar10 = 0;
                iVar4 = OPENSSL_sk_num(plVar3[1]);
                if (0 < iVar4) {
                  do {
                    lVar6 = OPENSSL_sk_value(plVar3[1],iVar10);
                    if (iVar10 != 0) {
                      BIO_puts(param_3,&DAT_145cbbc74);
                    }
                    if (lVar6 == 0) {
                      BIO_puts(param_3,"(null)");
                    }
                    else {
                      lVar6 = i2s_ASN1_INTEGER(0,lVar6);
                      if (lVar6 == 0) goto LAB_143d796e1;
                      BIO_puts(param_3,lVar6);
                      CRYPTO_free(lVar6,"crypto\\x509v3\\v3_cpols.c",0x1d3);
                    }
                    iVar10 = iVar10 + 1;
                    iVar4 = OPENSSL_sk_num(plVar3[1]);
                  } while (iVar10 < iVar4);
                }
                BIO_puts(param_3,&DAT_143fc48d8);
              }
              lVar6 = plVar2[1];
              if (lVar6 != 0) {
                uVar11 = *(undefined8 *)(lVar6 + 8);
                pcVar8 = "%*sExplicit Text: %s\n";
                iVar4 = param_4 + 4;
                goto LAB_143d796d2;
              }
            }
            else {
              BIO_printf(param_3,"%*sUnknown Qualifier: ",param_4 + 4,&DAT_143f3f584);
              i2a_ASN1_OBJECT(param_3,*puVar5);
              BIO_puts(param_3,&DAT_143fc48d8);
            }
LAB_143d796e1:
            iVar9 = iVar9 + 1;
            iVar4 = OPENSSL_sk_num(lVar1);
          } while (iVar9 < iVar4);
        }
      }
      local_48 = local_48 + 1;
      iVar4 = OPENSSL_sk_num(param_2);
    } while (local_48 < iVar4);
  }
  return 1;
}



// FUNCTION 143d79750 r2i_certpol body=685 status=ok
// SIG undefined r2i_certpol(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong r2i_certpol(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 uVar13;
  
  lVar4 = X509V3_parse_list(param_3);
  iVar2 = OPENSSL_sk_num(lVar4);
  if (lVar4 == 0) {
    ERR_put_error(0x22,0x82,0x22,"crypto\\x509v3\\v3_cpols.c",0x65);
    return 0;
  }
  lVar5 = OPENSSL_sk_new_reserve(0,iVar2);
  if (lVar5 == 0) {
    uVar11 = 0x6b;
LAB_143d797e4:
    ERR_put_error(0x22,0x82,0x41,"crypto\\x509v3\\v3_cpols.c",uVar11);
LAB_143d799d8:
    OPENSSL_sk_pop_free(lVar4,X509V3_conf_free);
    OPENSSL_sk_pop_free(lVar5,FUN_143d79a10);
    lVar5 = 0;
  }
  else {
    iVar12 = 0;
    iVar10 = 0;
    if (0 < iVar2) {
      do {
        puVar6 = (undefined8 *)OPENSSL_sk_value(lVar4,iVar10);
        if ((puVar6[2] != 0) || (pcVar1 = (char *)puVar6[1], pcVar1 == (char *)0x0)) {
          uVar13 = 0x75;
          uVar11 = 0x86;
LAB_143d7998b:
          ERR_put_error(0x22,0x82,uVar11,"crypto\\x509v3\\v3_cpols.c",uVar13);
          ERR_add_error_data(6,"section:",*puVar6,",name:",puVar6[1],",value:",puVar6[2]);
          goto LAB_143d799d8;
        }
        lVar7 = 0;
        do {
          lVar9 = lVar7;
          if (pcVar1[lVar9] != (&DAT_145da5404)[lVar9]) {
            if (*pcVar1 == '@') {
              lVar7 = X509V3_get_section(param_2,pcVar1 + 1);
              if (lVar7 == 0) {
                uVar13 = 0x81;
                uVar11 = 0x87;
                goto LAB_143d7998b;
              }
              plVar8 = (longlong *)policy_section(param_2,lVar7,iVar12);
              X509V3_section_free(param_2,lVar7);
              if (plVar8 == (longlong *)0x0) goto LAB_143d799d8;
            }
            else {
              lVar7 = OBJ_txt2obj(pcVar1,0);
              if (lVar7 == 0) {
                uVar13 = 0x8d;
                uVar11 = 0x6e;
                goto LAB_143d7998b;
              }
              plVar8 = (longlong *)ASN1_item_new(&DAT_145da50f0);
              if (plVar8 == (longlong *)0x0) {
                ASN1_OBJECT_free(lVar7);
                uVar11 = 0x94;
                goto LAB_143d797e4;
              }
              *plVar8 = lVar7;
            }
            iVar3 = OPENSSL_sk_push(lVar5,plVar8);
            if (iVar3 != 0) goto LAB_143d798e9;
            ASN1_item_free(plVar8,&DAT_145da50f0);
            uVar11 = 0x9b;
            goto LAB_143d797e4;
          }
          lVar7 = lVar9 + 1;
        } while (lVar9 + 1 != 7);
        iVar12 = (int)lVar9 + -5;
LAB_143d798e9:
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar2);
    }
    OPENSSL_sk_pop_free(lVar4,X509V3_conf_free);
  }
  return lVar5;
}



// FUNCTION 143d79a10 FUN_143d79a10 body=29 status=ok
// SIG undefined FUN_143d79a10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d79a10(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_145da50f0);
  return;
}



// FUNCTION 143d79a30 FUN_143d79a30 body=29 status=ok
// SIG undefined FUN_143d79a30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d79a30(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_145da5200);
  return;
}



// FUNCTION 143d79a50 notice_section body=1227 status=ok
// SIG undefined notice_section(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * notice_section(undefined8 param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  char *pcVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  char *_Str;
  undefined4 uVar13;
  size_t _MaxCount;
  undefined8 uVar14;
  int iVar15;
  undefined8 in_stack_ffffffffffffffa8;
  
  plVar5 = (longlong *)ASN1_item_new(&DAT_145da5200);
  if (plVar5 != (longlong *)0x0) {
    lVar6 = OBJ_nid2obj(0xa5);
    *plVar5 = lVar6;
    if (lVar6 == 0) {
      uVar14 = 0x128;
      uVar13 = 0x44;
      goto LAB_143d79c2d;
    }
    plVar7 = (longlong *)ASN1_item_new(&DAT_145da5270);
    if (plVar7 != (longlong *)0x0) {
      plVar5[1] = (longlong)plVar7;
      iVar15 = 0;
      iVar2 = OPENSSL_sk_num(param_2);
      if (0 < iVar2) {
        do {
          puVar8 = (undefined8 *)OPENSSL_sk_value(param_2,iVar15);
          pcVar9 = (char *)puVar8[1];
          _Str = (char *)puVar8[2];
          iVar2 = _guard_xfg_dispatch_icall_nop(pcVar9,"explicitText");
          if (iVar2 == 0) {
            pcVar9 = _guard_xfg_dispatch_icall_nop(_Str,0x3a);
            iVar2 = 0;
            if ((pcVar9 == (char *)0x0) || (iVar3 = (int)pcVar9 - (int)_Str, iVar2 = 0, iVar3 == -1)
               ) goto LAB_143d79bd4;
            if (iVar3 == 4) {
              _MaxCount = 4;
              pcVar9 = "UTF8";
LAB_143d79b4f:
              iVar2 = strncmp(_Str,pcVar9,_MaxCount);
              if (iVar2 == 0) {
                uVar13 = 0xc;
              }
              else {
LAB_143d79bd2:
                iVar2 = 0;
LAB_143d79bd4:
                uVar13 = 0x1a;
                iVar3 = iVar2;
              }
            }
            else {
              if (iVar3 == 10) {
                pcVar9 = "UTF8String";
                _MaxCount = 10;
                goto LAB_143d79b4f;
              }
              if (iVar3 != 3) {
                if (iVar3 == 9) {
                  pcVar9 = "BMPSTRING";
                  goto LAB_143d79b7e;
                }
                iVar2 = iVar3;
                if (iVar3 == 7) {
                  iVar3 = strncmp(_Str,"VISIBLE",7);
                  if (iVar3 == 0) goto LAB_143d79bd4;
                  goto LAB_143d79bd2;
                }
                if ((iVar3 != 0xd) || (iVar3 = strncmp(_Str,"VISIBLESTRING",0xd), iVar3 != 0))
                goto LAB_143d79bd2;
                goto LAB_143d79bd4;
              }
              pcVar9 = "BMP";
LAB_143d79b7e:
              iVar2 = strncmp(_Str,pcVar9,(longlong)iVar3);
              if (iVar2 != 0) goto LAB_143d79bd2;
              uVar13 = 0x1e;
            }
            lVar6 = ASN1_STRING_type_new(uVar13);
            plVar7[1] = lVar6;
            if (lVar6 == 0) goto LAB_143d79c1f;
            if (iVar3 != 0) {
              _Str = _Str + (iVar3 + 1);
            }
            uVar10 = 0xffffffffffffffff;
            do {
              uVar10 = uVar10 + 1;
            } while (_Str[uVar10] != '\0');
            iVar2 = ASN1_STRING_set(lVar6,_Str,uVar10 & 0xffffffff);
joined_r0x000143d79cd4:
            if (iVar2 == 0) goto LAB_143d79c1f;
          }
          else {
            iVar2 = _guard_xfg_dispatch_icall_nop(pcVar9,"organization");
            if (iVar2 == 0) {
              plVar11 = (longlong *)*plVar7;
              if (plVar11 == (longlong *)0x0) {
                plVar11 = (longlong *)ASN1_item_new(&DAT_145da52e0);
                if (plVar11 == (longlong *)0x0) goto LAB_143d79c1f;
                *plVar7 = (longlong)plVar11;
              }
              lVar6 = -1;
              uVar13 = 0x16;
              if (param_3 == 0) {
                uVar13 = 0x1a;
              }
              *(undefined4 *)(*plVar11 + 4) = uVar13;
              do {
                lVar6 = lVar6 + 1;
              } while (*(char *)(puVar8[2] + lVar6) != '\0');
              iVar2 = ASN1_STRING_set(*plVar11);
              goto joined_r0x000143d79cd4;
            }
            iVar2 = _guard_xfg_dispatch_icall_nop(pcVar9,"noticeNumbers");
            if (iVar2 != 0) {
              ERR_put_error(0x22,0x84,0x8a,"crypto\\x509v3\\v3_cpols.c",0x15e);
              ERR_add_error_data(6,"section:",*puVar8,",name:",puVar8[1],",value:",puVar8[2]);
              goto LAB_143d79c41;
            }
            lVar6 = *plVar7;
            if (lVar6 == 0) {
              lVar6 = ASN1_item_new(&DAT_145da52e0);
              if (lVar6 == 0) goto LAB_143d79c1f;
              *plVar7 = lVar6;
              _Str = (char *)puVar8[2];
            }
            lVar12 = X509V3_parse_list(_Str);
            uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
            if (lVar12 == 0) {
LAB_143d79e48:
              ERR_put_error(0x22,0x84,0x8d,"crypto\\x509v3\\v3_cpols.c",CONCAT44(uVar13,0x154));
              ERR_add_error_data(6,"section:",*puVar8,",name:",puVar8[1],",value:",puVar8[2]);
              OPENSSL_sk_pop_free(lVar12,X509V3_conf_free);
              goto LAB_143d79c41;
            }
            iVar2 = OPENSSL_sk_num(lVar12);
            uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
            if (iVar2 == 0) goto LAB_143d79e48;
            uVar14 = *(undefined8 *)(lVar6 + 8);
            iVar3 = 0;
            iVar2 = OPENSSL_sk_num(lVar12);
            if (0 < iVar2) {
              do {
                lVar6 = OPENSSL_sk_value(lVar12,iVar3);
                lVar6 = s2i_ASN1_INTEGER(0,*(undefined8 *)(lVar6 + 8));
                uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
                if (lVar6 == 0) {
                  uVar4 = 0x17f;
                  uVar14 = 0x8c;
LAB_143d79e29:
                  in_stack_ffffffffffffffa8 = CONCAT44(uVar13,uVar4);
                  ERR_put_error(0x22,0x85,uVar14,"crypto\\x509v3\\v3_cpols.c",
                                in_stack_ffffffffffffffa8);
                  bVar1 = false;
                  goto LAB_143d79d9a;
                }
                iVar2 = OPENSSL_sk_push(uVar14,lVar6);
                uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
                if (iVar2 == 0) {
                  ASN1_BIT_STRING_free(lVar6);
                  uVar4 = 0x189;
                  uVar14 = 0x41;
                  goto LAB_143d79e29;
                }
                iVar3 = iVar3 + 1;
                iVar2 = OPENSSL_sk_num(lVar12);
              } while (iVar3 < iVar2);
            }
            bVar1 = true;
LAB_143d79d9a:
            OPENSSL_sk_pop_free(lVar12,X509V3_conf_free);
            if (!bVar1) goto LAB_143d79c41;
          }
          iVar15 = iVar15 + 1;
          iVar2 = OPENSSL_sk_num(param_2);
        } while (iVar15 < iVar2);
      }
      plVar7 = (longlong *)*plVar7;
      if (plVar7 == (longlong *)0x0) {
        return plVar5;
      }
      if ((plVar7[1] != 0) && (*plVar7 != 0)) {
        return plVar5;
      }
      uVar14 = 0x167;
      uVar13 = 0x8e;
      goto LAB_143d79c2d;
    }
  }
LAB_143d79c1f:
  uVar14 = 0x16e;
  uVar13 = 0x41;
LAB_143d79c2d:
  ERR_put_error(0x22,0x84,uVar13,"crypto\\x509v3\\v3_cpols.c",uVar14);
LAB_143d79c41:
  ASN1_item_free(plVar5,&DAT_145da5200);
  return (longlong *)0x0;
}



// FUNCTION 143d79f20 policy_section body=742 status=ok
// SIG undefined policy_section(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * policy_section(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  char *_Str1;
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  plVar2 = (longlong *)ASN1_item_new(&DAT_145da50f0);
  if (plVar2 == (longlong *)0x0) {
LAB_143d7a1b4:
    uVar9 = 0xf3;
    uVar8 = 0x41;
  }
  else {
    iVar6 = 0;
    iVar1 = OPENSSL_sk_num(param_2);
    if (0 < iVar1) {
LAB_143d79f80:
      puVar3 = (undefined8 *)OPENSSL_sk_value(param_2,iVar6);
      _Str1 = (char *)puVar3[1];
      iVar1 = _guard_xfg_dispatch_icall_nop(_Str1,"policyIdentifier");
      if (iVar1 == 0) {
        lVar4 = OBJ_txt2obj(puVar3[2],0);
        if (lVar4 == 0) {
          uVar9 = 0xb7;
          uVar8 = 0x6e;
LAB_143d7a11d:
          ERR_put_error(0x22,0x83,uVar8,"crypto\\x509v3\\v3_cpols.c",uVar9);
          ERR_add_error_data(6,"section:",*puVar3,",name:",puVar3[1],",value:",puVar3[2]);
          goto LAB_143d7a1d6;
        }
        *plVar2 = lVar4;
      }
      else {
        iVar1 = name_cmp(_Str1,&DAT_145da5424);
        if (iVar1 != 0) {
          iVar1 = name_cmp(puVar3[1],"userNotice");
          if (iVar1 == 0) {
            if (*(char *)puVar3[2] == '@') {
              lVar4 = X509V3_get_section(param_1,(char *)puVar3[2] + 1);
              if (lVar4 == 0) {
                uVar9 = 0xd7;
                uVar8 = 0x87;
                goto LAB_143d7a11d;
              }
              lVar7 = notice_section(param_1,lVar4,param_3);
              X509V3_section_free(param_1,lVar4);
              if (lVar7 != 0) {
                lVar4 = plVar2[1];
                if (lVar4 == 0) {
                  lVar4 = OPENSSL_sk_new_null();
                  plVar2[1] = lVar4;
                }
                iVar1 = OPENSSL_sk_push(lVar4,lVar7);
                goto LAB_143d7a0d8;
              }
              goto LAB_143d7a1d6;
            }
            uVar9 = 0xd1;
            uVar8 = 0x89;
          }
          else {
            uVar9 = 0xe5;
            uVar8 = 0x8a;
          }
          goto LAB_143d7a11d;
        }
        if (plVar2[1] == 0) {
          lVar4 = OPENSSL_sk_new_null();
          plVar2[1] = lVar4;
        }
        plVar5 = (longlong *)ASN1_item_new(&DAT_145da5200);
        if ((plVar5 == (longlong *)0x0) || (iVar1 = OPENSSL_sk_push(plVar2[1],plVar5), iVar1 == 0))
        goto LAB_143d7a1b4;
        lVar4 = OBJ_nid2obj(0xa4);
        *plVar5 = lVar4;
        if (lVar4 == 0) {
          uVar9 = 0xc5;
          uVar8 = 0x44;
          goto LAB_143d7a1c2;
        }
        lVar4 = ASN1_IA5STRING_new();
        plVar5[1] = lVar4;
        if (lVar4 == 0) goto LAB_143d7a1b4;
        lVar7 = -1;
        do {
          lVar7 = lVar7 + 1;
        } while (*(char *)(puVar3[2] + lVar7) != '\0');
        iVar1 = ASN1_STRING_set(lVar4);
LAB_143d7a0d8:
        if (iVar1 == 0) goto LAB_143d7a1b4;
      }
      iVar6 = iVar6 + 1;
      iVar1 = OPENSSL_sk_num(param_2);
      if (iVar1 <= iVar6) goto LAB_143d7a0f2;
      goto LAB_143d79f80;
    }
LAB_143d7a0f2:
    if (*plVar2 != 0) {
      return plVar2;
    }
    uVar9 = 0xec;
    uVar8 = 0x8b;
  }
LAB_143d7a1c2:
  ERR_put_error(0x22,0x83,uVar8,"crypto\\x509v3\\v3_cpols.c",uVar9);
LAB_143d7a1d6:
  ASN1_item_free(plVar2,&DAT_145da50f0);
  return (longlong *)0x0;
}



// FUNCTION 143d7a220 i2v_POLICY_CONSTRAINTS body=74 status=ok
// SIG undefined i2v_POLICY_CONSTRAINTS(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 i2v_POLICY_CONSTRAINTS(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  X509V3_add_value_int("Require Explicit Policy",*param_2,local_res18);
  X509V3_add_value_int("Inhibit Policy Mapping",param_2[1],local_res18);
  return local_res18[0];
}



// FUNCTION 143d7a270 v2i_POLICY_CONSTRAINTS body=401 status=ok
// SIG undefined v2i_POLICY_CONSTRAINTS(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * v2i_POLICY_CONSTRAINTS(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *_Str1;
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar6;
  
  plVar2 = (longlong *)ASN1_item_new(&DAT_145da55e0);
  if (plVar2 == (longlong *)0x0) {
    ERR_put_error(0x22,0x92,0x41,"crypto\\x509v3\\v3_pcons.c",0x40);
    return (longlong *)0x0;
  }
  iVar5 = 0;
  iVar1 = OPENSSL_sk_num(param_3);
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  if (0 < iVar1) {
    do {
      puVar3 = (undefined8 *)OPENSSL_sk_value(param_3,iVar5);
      _Str1 = (char *)puVar3[1];
      iVar1 = _guard_xfg_dispatch_icall_nop(_Str1,"requireExplicitPolicy");
      plVar4 = plVar2;
      if (iVar1 != 0) {
        iVar1 = _guard_xfg_dispatch_icall_nop(_Str1,"inhibitPolicyMapping");
        if (iVar1 != 0) {
          ERR_put_error(0x22,0x92,0x6a,"crypto\\x509v3\\v3_pcons.c",0x4c);
          ERR_add_error_data(6,"section:",*puVar3,",name:",puVar3[1],",value:",puVar3[2]);
          goto LAB_143d7a375;
        }
        plVar4 = plVar2 + 1;
      }
      iVar1 = X509V3_get_value_int(puVar3,plVar4);
      if (iVar1 == 0) goto LAB_143d7a375;
      iVar5 = iVar5 + 1;
      iVar1 = OPENSSL_sk_num(param_3);
      uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
    } while (iVar5 < iVar1);
  }
  if ((plVar2[1] == 0) && (*plVar2 == 0)) {
    ERR_put_error(0x22,0x92,0x97,"crypto\\x509v3\\v3_pcons.c",CONCAT44(uVar6,0x53));
LAB_143d7a375:
    ASN1_item_free(plVar2,&DAT_145da55e0);
    plVar2 = (longlong *)0x0;
  }
  return plVar2;
}



// FUNCTION 143d7a410 POLICY_CONSTRAINTS_free body=29 status=ok
// SIG undefined POLICY_CONSTRAINTS_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void POLICY_CONSTRAINTS_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_145da55e0);
  return;
}



// FUNCTION 143d7a430 policy_cache_set_mapping body=353 status=ok
// SIG undefined policy_cache_set_mapping(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int policy_cache_set_mapping(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  uint *puVar6;
  int iVar7;
  
  plVar1 = *(longlong **)(param_1 + 0xf0);
  iVar7 = 0;
  iVar3 = OPENSSL_sk_num(param_2);
  if (iVar3 == 0) {
LAB_143d7a551:
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x800;
    iVar7 = -1;
  }
  else {
    iVar4 = OPENSSL_sk_num(param_2);
    iVar3 = iVar7;
    if (0 < iVar4) {
      do {
        puVar5 = (undefined8 *)OPENSSL_sk_value(param_2,iVar3);
        iVar4 = OBJ_obj2nid(puVar5[1]);
        if ((iVar4 == 0x2ea) || (iVar4 = OBJ_obj2nid(*puVar5), iVar4 == 0x2ea)) goto LAB_143d7a551;
        puVar6 = (uint *)policy_cache_find_data(plVar1,*puVar5);
        if (puVar6 == (uint *)0x0) {
          if ((uint *)*plVar1 != (uint *)0x0) {
            puVar6 = (uint *)policy_data_new(0,*puVar5,*(uint *)*plVar1 & 0x10);
            if (puVar6 != (uint *)0x0) {
              uVar2 = *(undefined8 *)(*plVar1 + 0x10);
              *puVar6 = *puVar6 | 6;
              *(undefined8 *)(puVar6 + 4) = uVar2;
              iVar4 = OPENSSL_sk_push(plVar1[1],puVar6);
              if (iVar4 != 0) goto LAB_143d7a523;
              policy_data_free(puVar6);
            }
            goto LAB_143d7a561;
          }
        }
        else {
          *puVar6 = *puVar6 | 1;
LAB_143d7a523:
          iVar4 = OPENSSL_sk_push(*(undefined8 *)(puVar6 + 6),puVar5[1]);
          if (iVar4 == 0) goto LAB_143d7a561;
          puVar5[1] = 0;
        }
        iVar3 = iVar3 + 1;
        iVar4 = OPENSSL_sk_num(param_2);
      } while (iVar3 < iVar4);
    }
    iVar7 = 1;
  }
LAB_143d7a561:
  OPENSSL_sk_pop_free(param_2,FUN_143d85420);
  return iVar7;
}



// FUNCTION 143d7a5a0 BIO_dump body=47 status=ok
// SIG undefined BIO_dump(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BIO_dump(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  BIO_dump_indent_cb(write_bio,param_1,param_2,param_3,0);
  return;
}



// FUNCTION 143d7a5d0 BIO_dump_indent body=44 status=ok
// SIG undefined BIO_dump_indent(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BIO_dump_indent(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  BIO_dump_indent_cb(write_bio,param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 143d7a600 BIO_dump_indent_cb body=721 status=ok
// SIG undefined BIO_dump_indent_cb(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int BIO_dump_indent_cb(code *param_1,undefined8 param_2,longlong param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  char cVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  char *pcVar13;
  undefined1 auStack_1c8 [32];
  undefined1 *local_1a8;
  int local_1a0;
  int local_198;
  int local_194;
  int local_190;
  int local_18c;
  undefined8 local_188;
  code *local_180;
  char local_178 [304];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  iVar12 = 0;
  local_198 = 0;
  if (param_5 < 0) {
    param_5 = 0;
  }
  else if (0x80 < param_5) {
    param_5 = 0x80;
  }
  iVar2 = param_5;
  if (6 < param_5) {
    iVar2 = 6;
  }
  local_194 = 0;
  iVar2 = (param_5 - iVar2) + 3;
  local_190 = 0x10 - ((int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2);
  iVar2 = param_4 / local_190;
  lVar6 = (longlong)local_190;
  local_18c = iVar2 + 1;
  if (param_4 <= iVar2 * local_190) {
    local_18c = iVar2;
  }
  if (0 < local_18c) {
    iVar2 = 0;
    local_188 = param_2;
    local_180 = param_1;
    do {
      iVar12 = local_198;
      local_1a8 = &DAT_143f3f584;
      local_1a0 = iVar2;
      iVar3 = BIO_snprintf(local_178,0x121,"%*s%04x - ");
      iVar8 = 0;
      uVar5 = (ulonglong)iVar3;
      lVar7 = 0;
      if (0 < lVar6) {
        pcVar13 = local_178 + uVar5;
        do {
          iVar12 = (int)uVar5;
          if (3 < 0x121U - (longlong)iVar12) {
            if (iVar2 + iVar8 < param_4) {
              uVar4 = 0x20;
              if (iVar8 == 7) {
                uVar4 = 0x2d;
              }
              local_1a8 = (undefined1 *)CONCAT44(local_1a8._4_4_,uVar4);
              BIO_snprintf(local_178 + iVar12,4,"%02x%c");
            }
            else {
              builtin_strncpy(pcVar13,"   ",4);
            }
            uVar5 = (ulonglong)(iVar12 + 3);
            pcVar13 = pcVar13 + 3;
          }
          iVar8 = iVar8 + 1;
          lVar7 = lVar7 + 1;
          iVar12 = local_198;
        } while (lVar7 < lVar6);
      }
      lVar7 = (longlong)(int)uVar5;
      if (2 < 0x121U - lVar7) {
        uVar5 = (ulonglong)((int)uVar5 + 2);
        (local_178 + lVar7)[0] = ' ';
        (local_178 + lVar7)[1] = ' ';
        local_178[lVar7 + 2] = '\0';
      }
      iVar3 = (int)uVar5;
      lVar7 = 0;
      if (0 < lVar6) {
        uVar10 = (longlong)iVar3;
        iVar8 = iVar2;
        do {
          iVar3 = (int)uVar5;
          if (param_4 <= iVar8) break;
          uVar11 = uVar10;
          if (1 < 0x121U - (longlong)iVar3) {
            cVar1 = *(char *)(iVar2 + lVar7 + param_3);
            cVar9 = '.';
            if ((byte)(cVar1 - 0x20U) < 0x5f) {
              cVar9 = cVar1;
            }
            uVar5 = (ulonglong)(iVar3 + 1);
            local_178[uVar10] = cVar9;
            uVar11 = uVar10 + 1;
            if (0x120 < uVar11) goto LAB_143d7a8cc;
            local_178[uVar10 + 1] = '\0';
          }
          iVar3 = (int)uVar5;
          iVar8 = iVar8 + 1;
          lVar7 = lVar7 + 1;
          uVar10 = uVar11;
        } while (lVar7 < lVar6);
      }
      uVar5 = (ulonglong)iVar3;
      if (1 < 0x121 - uVar5) {
        local_178[uVar5] = '\n';
        uVar5 = (ulonglong)(iVar3 + 1);
        if (0x120 < uVar5) {
LAB_143d7a8cc:
                    /* WARNING: Subroutine does not return */
          __report_rangecheckfailure();
        }
        local_178[uVar5] = '\0';
      }
      iVar3 = (*local_180)(local_178,uVar5,local_188);
      iVar2 = iVar2 + local_190;
      iVar12 = iVar12 + iVar3;
      local_194 = local_194 + 1;
      local_198 = iVar12;
    } while (local_194 < local_18c);
  }
  return iVar12;
}



// FUNCTION 143d7a8e0 BIO_hex_string body=261 status=ok
// SIG undefined BIO_hex_string(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
BIO_hex_string(undefined8 param_1,undefined4 param_2,int param_3,longlong param_4,int param_5)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  if (0 < param_5) {
    lVar1 = (longlong)param_5 + -1;
    uVar4 = uVar3;
    if (0 < lVar1) {
      do {
        if ((uVar3 != 0) && ((int)uVar4 == 0)) {
          BIO_printf(param_1,&DAT_145d811b8,param_2,&DAT_143f3f584);
        }
        BIO_printf(param_1,"%02X:",*(undefined1 *)(uVar3 + param_4));
        uVar4 = (longlong)((int)uVar4 + 1) % (longlong)param_3;
        iVar2 = (int)uVar4;
        if (iVar2 == 0) {
          BIO_printf(param_1,&DAT_143fc48d8);
        }
        uVar3 = uVar3 + 1;
        uVar4 = uVar4 & 0xffffffff;
      } while ((longlong)uVar3 < lVar1);
      if (((int)lVar1 != 0) && (iVar2 == 0)) {
        BIO_printf(param_1,&DAT_145d811b8,param_2,&DAT_143f3f584);
      }
    }
    BIO_printf(param_1,&DAT_145d77a28,*(undefined1 *)(param_4 + lVar1));
  }
  return 1;
}



// FUNCTION 143d7a9f0 write_bio body=34 status=ok
// SIG undefined write_bio(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void write_bio(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  BIO_write(param_3,param_1,param_2);
  return;
}



// FUNCTION 143d7aa20 def_create body=105 status=ok
// SIG undefined def_create(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong def_create(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = CRYPTO_malloc(0x18,"crypto\\conf\\conf_def.c",0x6a);
  if ((lVar2 != 0) && (iVar1 = (**(code **)(param_1 + 0x10))(lVar2), iVar1 == 0)) {
    CRYPTO_free(lVar2,"crypto\\conf\\conf_def.c",0x6d);
    return 0;
  }
  return lVar2;
}



// FUNCTION 143d7aaf0 def_destroy body=68 status=ok
// SIG undefined def_destroy(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 def_destroy(longlong param_1)

{
  if (param_1 != 0) {
    _CONF_free_data();
    CRYPTO_free(param_1,"crypto\\conf\\conf_def.c",0x8e);
    return 1;
  }
  return 0;
}



// FUNCTION 143d7ab40 def_destroy_data body=40 status=ok
// SIG undefined def_destroy_data(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 def_destroy_data(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  _CONF_free_data();
  return 1;
}



// FUNCTION 143d7ab70 def_load body=181 status=ok
// SIG undefined def_load(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 def_load(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143d7ab85;
  lVar3 = BIO_new_file(param_2,&DAT_145d82a34);
  if (lVar3 == 0) {
    uVar1 = ERR_peek_last_error();
    bVar5 = (uVar1 & 0xfff) != 0x80;
    uVar2 = 0xa8;
    if (bVar5) {
      uVar2 = 0xaa;
    }
    uVar4 = 0x72;
    if (bVar5) {
      uVar4 = 2;
    }
    ERR_put_error(0xe,0x78,uVar4,"crypto\\conf\\conf_def.c",uVar2,uVar6);
    return 0;
  }
  uVar2 = def_load_bio(param_1,lVar3,param_3);
  BIO_free(lVar3);
  return uVar2;
}



// FUNCTION 143d7ac30 def_load_bio body=2693 status=ok
// SIG undefined def_load_bio(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 def_load_bio(longlong param_1,longlong param_2,int *param_3)

{
  byte bVar1;
  ushort uVar2;
  ulonglong uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  byte *pbVar9;
  int *piVar10;
  longlong lVar11;
  uint uVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  uint local_e8;
  uint local_e4;
  ulonglong local_e0;
  longlong local_d8;
  int local_d0;
  byte *local_c8;
  longlong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  byte *local_a8;
  ulonglong local_a0;
  int *local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143d7ac4f;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_90 = *(longlong *)(param_1 + 0x10);
  uVar14 = 0;
  local_d0 = 0;
  local_c8 = (byte *)0x0;
  local_b0 = 0;
  local_e0 = 0;
  local_b8 = 0;
  local_d8 = param_2;
  local_98 = param_3;
  local_c0 = BUF_MEM_new();
  if (local_c0 == 0) {
    local_f8 = 0xca;
    ERR_put_error(0xe,0x79,7,"crypto\\conf\\conf_def.c");
    uVar21 = uVar14;
    uVar15 = uVar14;
  }
  else {
    local_c8 = (byte *)CRYPTO_strdup("default","crypto\\conf\\conf_def.c",0xce);
    uVar21 = 0;
    local_a8 = local_c8;
    if (local_c8 == (byte *)0x0) {
      local_f8 = 0xd0;
    }
    else {
      iVar6 = _CONF_new_data(param_1);
      if (iVar6 != 0) {
        lVar11 = _CONF_new_section(param_1,local_c8);
        lVar8 = local_c0;
        if (lVar11 == 0) {
          local_f8 = 0xdb;
          ERR_put_error(0xe,0x79,0x67,"crypto\\conf\\conf_def.c");
          uVar15 = 0;
        }
        else {
          local_e8 = 0;
          local_e4 = 0;
          lVar7 = BUF_MEM_grow(local_c0,0x200);
          uVar21 = uVar14;
          uVar22 = uVar14;
          while (lVar7 != 0) {
            puVar17 = (undefined1 *)((longlong)(int)uVar14 + *(longlong *)(lVar8 + 8));
            *puVar17 = 0;
            BIO_gets(param_2,puVar17,0x1ff);
            uVar14 = 0xffffffffffffffff;
            puVar17[0x1ff] = 0;
            do {
              uVar14 = uVar14 + 1;
            } while (puVar17[uVar14] != '\0');
            uVar5 = (uint)uVar14;
            uVar15 = uVar14;
            uVar3 = local_e0;
            while ((local_e0 = uVar3, uVar5 == 0 && (uVar5 = (uint)uVar14, (int)uVar21 == 0))) {
              if (local_b8 == 0) {
LAB_143d7ae1e:
                lVar8 = OPENSSL_sk_pop(uVar22);
                if (lVar8 == 0) {
                  local_d8 = lVar8;
                  BUF_MEM_free(local_c0);
                  CRYPTO_free(local_c8,"crypto\\conf\\conf_def.c",0x1aa);
                  OPENSSL_sk_free(uVar22);
                  return 1;
                }
              }
              else {
                lVar8 = get_next_file(uVar3,&local_b8);
                if (lVar8 == 0) {
                  local_d8 = lVar8;
                  CRYPTO_free(uVar3,"crypto\\conf\\conf_def.c",0xfa);
                  local_e0 = 0;
                  goto LAB_143d7ae1e;
                }
              }
              local_d8 = lVar8;
              BIO_vfree(param_2);
              BIO_gets(lVar8,puVar17,0x1ff);
              uVar14 = 0xffffffffffffffff;
              puVar17[0x1ff] = 0;
              do {
                uVar14 = uVar14 + 1;
              } while (puVar17[uVar14] != '\0');
              uVar5 = (uint)uVar14;
              uVar15 = uVar14 & 0xffffffff;
              param_2 = lVar8;
              uVar3 = local_e0;
              uVar21 = (ulonglong)local_e4;
            }
            bVar23 = false;
            uVar12 = (uint)uVar15;
            lVar8 = (longlong)(int)uVar12;
            local_e4 = 0;
            if (0 < (int)uVar12) {
              do {
                uVar12 = (uint)uVar15;
                if ((puVar17[lVar8 + -1] != '\r') && (puVar17[lVar8 + -1] != '\n')) break;
                uVar12 = uVar12 - 1;
                uVar15 = (ulonglong)uVar12;
                lVar8 = lVar8 + -1;
              } while (0 < lVar8);
            }
            if ((uVar5 == 0) || (uVar12 != uVar5)) {
              local_d0 = local_d0 + 1;
              puVar17[(int)uVar12] = 0;
            }
            else {
              bVar23 = true;
              local_e4 = 1;
            }
            uVar21 = 0;
            local_e8 = local_e8 + uVar12;
            if ((int)local_e8 < 1) {
LAB_143d7af36:
              uVar14 = (ulonglong)local_e8;
              if (!bVar23) {
                pbVar18 = *(byte **)(local_c0 + 8);
                uVar14 = 0;
                local_e8 = 0;
                clear_comments(param_1,pbVar18);
                for (; bVar4 = *pbVar18, bVar4 < 0x80; pbVar18 = pbVar18 + 1) {
                  uVar2 = *(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar4 * 2);
                  if (((uVar2 & 0x10) == 0) || ((bVar4 < 0x80 && ((uVar2 & 8) != 0)))) {
                    if ((bVar4 < 0x80) &&
                       ((*(byte *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar4 * 2) & 8) != 0))
                    goto LAB_143d7b0d2;
                    break;
                  }
                }
                if (bVar4 == 0x5b) {
                  do {
                    pbVar18 = pbVar18 + 1;
                    bVar4 = *pbVar18;
                    pbVar20 = pbVar18;
                    if ((0x7f < bVar4) ||
                       (uVar2 = *(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar4 * 2),
                       (uVar2 & 0x10) == 0)) break;
                  } while ((0x7f < bVar4) || ((uVar2 & 8) == 0));
LAB_143d7afe0:
                  bVar4 = *pbVar18;
                  pbVar19 = pbVar18;
                  if (bVar4 < 0x80) {
                    if ((*(byte *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar4 * 2) & 0x20) == 0)
                    {
                      if ((0x7f < bVar4) ||
                         ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar4 * 2) & 0x307)
                          == 0)) goto LAB_143d7b040;
                      pbVar18 = pbVar18 + 1;
                    }
                    else if (pbVar18[1] < 0x80) {
                      pbVar18 = pbVar18 + ((ulonglong)
                                           (*(ushort *)
                                             (*(longlong *)(param_1 + 8) + (ulonglong)pbVar18[1] * 2
                                             ) >> 3 & 1) ^ 1) + 1;
                    }
                    else {
                      pbVar18 = pbVar18 + 2;
                    }
                    goto LAB_143d7afe0;
                  }
LAB_143d7b040:
                  while (((bVar4 < 0x80 &&
                          (uVar2 = *(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar4 * 2),
                          (uVar2 & 0x10) != 0)) && ((uVar2 & 8) == 0))) {
                    bVar4 = pbVar19[1];
                    pbVar19 = pbVar19 + 1;
                  }
                  if (bVar4 != 0x5d) {
                    if ((bVar4 == 0) ||
                       (bVar23 = pbVar20 == pbVar19, pbVar18 = pbVar19, pbVar20 = pbVar19, bVar23))
                    {
                      local_f8 = 0x144;
                      ERR_put_error(0xe,0x79,100,"crypto\\conf\\conf_def.c");
                      uVar15 = local_e0;
                      goto LAB_143d7b43e;
                    }
                    goto LAB_143d7afe0;
                  }
                  *pbVar18 = 0;
                  iVar6 = str_copy(param_1,0,&local_a8);
                  local_c8 = local_a8;
                  uVar15 = local_e0;
                  if (iVar6 == 0) goto LAB_143d7b43e;
                  lVar11 = _CONF_get_section(param_1,local_a8);
                  if ((lVar11 == 0) && (lVar11 = _CONF_new_section(param_1,local_c8), lVar11 == 0))
                  {
                    local_f8 = 0x14e;
                    ERR_put_error(0xe,0x79,0x67,"crypto\\conf\\conf_def.c");
                    uVar21 = 0;
                    uVar15 = local_e0;
                    goto LAB_143d7b43e;
                  }
                }
                else {
                  pbVar9 = (byte *)eat_alpha_numeric(param_1,pbVar18);
                  pbVar20 = local_c8;
                  pbVar19 = pbVar9;
                  if ((*pbVar9 == 0x3a) && (pbVar9[1] == 0x3a)) {
                    *pbVar9 = 0;
                    pbVar19 = pbVar9 + 2;
                    pbVar9 = (byte *)eat_alpha_numeric(param_1,pbVar9 + 2);
                    pbVar20 = pbVar18;
                    pbVar18 = pbVar19;
                    pbVar19 = pbVar9;
                  }
                  while (((bVar4 = *pbVar9, bVar4 < 0x80 &&
                          (uVar2 = *(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar4 * 2),
                          (uVar2 & 0x10) != 0)) && ((0x7f < bVar4 || ((uVar2 & 8) == 0))))) {
                    pbVar9 = pbVar9 + 1;
                  }
                  iVar6 = strncmp((char *)pbVar18,".include",8);
                  if ((iVar6 != 0) || (pbVar9 == pbVar18 + 8)) {
                    if (*pbVar9 == 0x3d) {
                      *pbVar19 = 0;
                      eat_ws(param_1,pbVar9 + 1);
                      trim_ws();
                      uVar21 = CRYPTO_malloc(0x18,"crypto\\conf\\conf_def.c",0x18a);
                      if (uVar21 == 0) {
                        local_f8 = 0x18b;
                      }
                      else {
                        lVar8 = CRYPTO_strdup(pbVar18,"crypto\\conf\\conf_def.c",0x18e);
                        *(undefined8 *)(uVar21 + 0x10) = 0;
                        *(longlong *)(uVar21 + 8) = lVar8;
                        if (lVar8 == 0) {
                          local_f8 = 0x191;
                        }
                        else {
                          iVar6 = str_copy(param_1,pbVar20,uVar21 + 0x10);
                          param_2 = local_d8;
                          uVar15 = local_e0;
                          if (iVar6 == 0) goto LAB_143d7b43e;
                          pbVar18 = pbVar20;
                          do {
                            bVar4 = *pbVar18;
                            bVar1 = pbVar18[(longlong)local_c8 - (longlong)pbVar20];
                            if (bVar4 != bVar1) break;
                            pbVar18 = pbVar18 + 1;
                          } while (bVar1 != 0);
                          lVar8 = lVar11;
                          if (((bVar4 != bVar1) &&
                              (lVar8 = _CONF_get_section(param_1,pbVar20), lVar8 == 0)) &&
                             (lVar8 = _CONF_new_section(param_1,pbVar20), lVar8 == 0)) {
                            local_f8 = 0x19d;
                            uVar13 = 0x67;
                            goto LAB_143d7b430;
                          }
                          iVar6 = _CONF_add_string(param_1,lVar8,uVar21);
                          if (iVar6 != 0) {
                            uVar14 = (ulonglong)local_e8;
                            param_2 = local_d8;
                            uVar22 = local_b0;
                            goto LAB_143d7b0d2;
                          }
                          local_f8 = 0x1a3;
                        }
                      }
LAB_143d7b63a:
                      uVar13 = 0x41;
                    }
                    else {
                      local_f8 = 0x182;
                      uVar13 = 0x65;
                    }
LAB_143d7b430:
                    ERR_put_error(0xe,0x79,uVar13,"crypto\\conf\\conf_def.c");
                    param_2 = local_d8;
                    uVar15 = local_e0;
                    goto LAB_143d7b43e;
                  }
                  local_a0 = 0;
                  pbVar18 = pbVar9;
                  while ((0x7f < *pbVar18 ||
                         ((*(byte *)(*(longlong *)(param_1 + 8) + (ulonglong)*pbVar18 * 2) & 8) == 0
                         ))) {
                    pbVar18 = pbVar18 + 1;
                  }
                  do {
                    pbVar19 = pbVar18;
                    pbVar18 = pbVar19 + -1;
                    if ((pbVar18 < pbVar9) || (0x7f < *pbVar18)) break;
                  } while ((*(byte *)(*(longlong *)(param_1 + 8) + (ulonglong)*pbVar18 * 2) & 0x10)
                           != 0);
                  *pbVar19 = 0;
                  iVar6 = str_copy(param_1,pbVar20,&local_a0);
                  uVar14 = local_a0;
                  param_2 = local_d8;
                  uVar15 = local_e0;
                  if (iVar6 == 0) goto LAB_143d7b43e;
                  local_88 = 0;
                  local_80 = 0;
                  local_78 = 0;
                  local_70 = 0;
                  local_68 = 0;
                  local_60 = 0;
                  iVar6 = _stat64i32(local_a0,&local_88);
                  if (iVar6 < 0) {
                    piVar10 = _errno();
                    uVar16 = 0x16;
                    local_f8 = 0x29f;
                    iVar6 = *piVar10;
                    uVar13 = 2;
LAB_143d7b252:
                    ERR_put_error(uVar13,uVar16,iVar6);
                    ERR_add_error_data(1,uVar14);
                    lVar8 = 0;
                  }
                  else if ((local_88._6_2_ & 0xf000) == 0x4000) {
                    if (local_b8 != 0) {
                      uVar16 = 0x74;
                      local_f8 = 0x2a8;
                      uVar13 = 0xe;
                      iVar6 = 0x6f;
                      goto LAB_143d7b252;
                    }
                    lVar8 = get_next_file(uVar14,&local_b8);
                    if (lVar8 != 0) {
                      local_e0 = uVar14;
                    }
                  }
                  else {
                    lVar8 = BIO_new_file(uVar14,&DAT_145d71df8);
                  }
                  if (uVar14 != local_e0) {
                    CRYPTO_free(uVar14,"crypto\\conf\\conf_def.c",0x16b);
                  }
                  if (lVar8 == 0) {
                    uVar14 = 0;
                    param_2 = local_d8;
                    uVar22 = local_b0;
                  }
                  else {
                    if ((local_b0 == 0) && (local_b0 = OPENSSL_sk_new_null(), local_b0 == 0)) {
                      local_f8 = 0x175;
                      goto LAB_143d7b63a;
                    }
                    uVar22 = local_b0;
                    param_2 = local_d8;
                    iVar6 = OPENSSL_sk_push(local_b0,local_d8);
                    if (iVar6 == 0) {
                      local_f8 = 0x17a;
                      ERR_put_error(0xe,0x79,0x41,"crypto\\conf\\conf_def.c");
                      uVar21 = 0;
                      uVar15 = local_e0;
                      goto LAB_143d7b43e;
                    }
                    uVar14 = 0;
                    param_2 = lVar8;
                    local_d8 = lVar8;
                  }
                }
              }
LAB_143d7b0d2:
              uVar21 = (ulonglong)local_e4;
            }
            else {
              uVar14 = (ulonglong)(local_e8 - 1);
              lVar8 = (longlong)(int)local_e8 + *(longlong *)(local_c0 + 8);
              bVar4 = *(byte *)(lVar8 + -1);
              if (((0x7f < bVar4) ||
                  ((*(byte *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar4 * 2) & 0x20) == 0)) ||
                 ((1 < (int)local_e8 &&
                  ((bVar4 = *(byte *)(lVar8 + -2), bVar4 < 0x80 &&
                   ((*(byte *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar4 * 2) & 0x20) != 0))))))
              goto LAB_143d7af36;
              uVar21 = 1;
              local_e4 = 1;
              local_e8 = local_e8 - 1;
            }
            lVar8 = local_c0;
            lVar7 = BUF_MEM_grow(local_c0,(longlong)((int)uVar14 + 0x200));
          }
          local_f8 = 0xe3;
          ERR_put_error(0xe,0x79,7,"crypto\\conf\\conf_def.c");
          uVar21 = 0;
          uVar15 = local_e0;
        }
        goto LAB_143d7b43e;
      }
      local_f8 = 0xd5;
    }
    ERR_put_error(0xe,0x79,0x41,"crypto\\conf\\conf_def.c");
    uVar15 = 0;
  }
LAB_143d7b43e:
  BUF_MEM_free(local_c0);
  CRYPTO_free(local_c8,"crypto\\conf\\conf_def.c",0x1b3);
  uVar14 = local_b0;
  iVar6 = OPENSSL_sk_num(local_b0);
  while (0 < iVar6) {
    lVar11 = OPENSSL_sk_pop(uVar14);
    BIO_vfree(param_2);
    iVar6 = OPENSSL_sk_num(uVar14);
    param_2 = lVar11;
  }
  OPENSSL_sk_free(uVar14);
  CRYPTO_free(uVar15,"crypto\\conf\\conf_def.c",0x1c0);
  if (local_b8 != 0) {
    OPENSSL_DIR_end(&local_b8);
  }
  if (local_98 != (int *)0x0) {
    *local_98 = local_d0;
  }
  BIO_snprintf(local_58,0xd,&DAT_145cba150);
  ERR_add_error_data(2,"line ",local_58);
  if (local_90 != *(longlong *)(param_1 + 0x10)) {
    CONF_free();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (uVar21 != 0) {
    CRYPTO_free(*(undefined8 *)(uVar21 + 8),"crypto\\conf\\conf_def.c",0x1cd);
    CRYPTO_free(*(undefined8 *)(uVar21 + 0x10),"crypto\\conf\\conf_def.c",0x1ce);
    CRYPTO_free(uVar21,"crypto\\conf\\conf_def.c",0x1cf);
  }
  return 0;
}



// FUNCTION 143d7b6c0 def_dump body=42 status=ok
// SIG undefined def_dump(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 def_dump(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  OPENSSL_LH_doall_arg
            (*(undefined8 *)(param_1 + 0x10),dump_value_doall_arg,param_2,param_4,0x143d7b6ca);
  return 1;
}



// FUNCTION 143d7b710 NCONF_default body=8 status=ok
// SIG undefined NCONF_default(void)

undefined ** NCONF_default(void)

{
  return &PTR_s_OpenSSL_default_146837de0;
}



// FUNCTION 143d7b720 clear_comments body=448 status=ok
// SIG undefined clear_comments(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void clear_comments(longlong param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  for (; bVar1 = *param_2, bVar1 < 0x80; param_2 = param_2 + 1) {
    if ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) & 0x800) != 0) {
      *param_2 = 0;
      return;
    }
    if ((0x7f < bVar1) ||
       ((*(byte *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) & 0x10) == 0)) break;
  }
LAB_143d7b780:
  bVar1 = *param_2;
  if (bVar1 < 0x80) {
    if ((*(byte *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) & 0x80) != 0) {
      *param_2 = 0;
      return;
    }
    if (0x7f < bVar1) goto LAB_143d7b8cc;
    if ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) & 0x400) != 0) {
      do {
        pbVar4 = param_2;
        pbVar5 = pbVar4 + 1;
        bVar2 = *pbVar5;
        if ((bVar2 < 0x80) &&
           ((*(byte *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar2 * 2) & 8) != 0)) break;
        param_2 = pbVar5;
      } while ((bVar2 != bVar1) || (param_2 = pbVar4 + 2, pbVar4[2] == bVar1));
      param_2 = pbVar4 + 2;
      if (bVar2 != bVar1) {
        param_2 = pbVar5;
      }
      goto LAB_143d7b780;
    }
    if (bVar1 < 0x80) {
      lVar3 = *(longlong *)(param_1 + 8);
      if ((*(byte *)(lVar3 + (ulonglong)bVar1 * 2) & 0x40) != 0) {
        do {
          do {
            pbVar5 = param_2;
            pbVar4 = pbVar5 + 1;
            bVar2 = *pbVar4;
            param_2 = pbVar4;
            if (((bVar2 < 0x80) && ((*(byte *)(lVar3 + (ulonglong)bVar2 * 2) & 8) != 0)) ||
               (bVar2 == bVar1)) {
              param_2 = pbVar5 + 2;
              if (bVar2 != bVar1) {
                param_2 = pbVar4;
              }
              goto LAB_143d7b780;
            }
          } while ((0x7f < bVar2) || ((*(byte *)(lVar3 + (ulonglong)bVar2 * 2) & 0x20) == 0));
          param_2 = pbVar5 + 2;
        } while ((0x7f < pbVar5[2]) || ((*(byte *)(lVar3 + (ulonglong)pbVar5[2] * 2) & 8) == 0));
        goto LAB_143d7b780;
      }
      if (0x7f < bVar1) goto LAB_143d7b8cc;
      if ((*(byte *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) & 0x20) != 0) {
        if (param_2[1] < 0x80) {
          param_2 = param_2 + ((ulonglong)
                               (*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)param_2[1] * 2)
                                >> 3 & 1) ^ 1) + 1;
        }
        else {
          param_2 = param_2 + 2;
        }
        goto LAB_143d7b780;
      }
      if ((bVar1 < 0x80) &&
         ((*(byte *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) & 8) != 0)) {
        return;
      }
    }
  }
LAB_143d7b8cc:
  param_2 = param_2 + 1;
  goto LAB_143d7b780;
}



// FUNCTION 143d7b8e0 dump_value_doall_arg body=76 status=ok
// SIG undefined dump_value_doall_arg(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void dump_value_doall_arg(undefined8 *param_1,undefined8 param_2)

{
  if (param_1[1] != 0) {
    BIO_printf(param_2,"[%s] %s=%s\n",*param_1,param_1[1],param_1[2]);
    return;
  }
  BIO_printf(param_2,"[[%s]]\n",*param_1);
  return;
}



// FUNCTION 143d7b930 eat_alpha_numeric body=119 status=ok
// SIG undefined eat_alpha_numeric(void)

byte * eat_alpha_numeric(longlong param_1,byte *param_2)

{
  byte bVar1;
  
  while( true ) {
    while( true ) {
      bVar1 = *param_2;
      if (0x7f < bVar1) {
        return param_2;
      }
      if ((*(byte *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) & 0x20) == 0) break;
      if (param_2[1] < 0x80) {
        param_2 = param_2 + ((ulonglong)
                             (*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)param_2[1] * 2) >>
                              3 & 1) ^ 1) + 1;
      }
      else {
        param_2 = param_2 + 2;
      }
    }
    if (0x7f < bVar1) break;
    if ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) & 0x307) == 0) {
      return param_2;
    }
    param_2 = param_2 + 1;
  }
  return param_2;
}



// FUNCTION 143d7b9b0 eat_ws body=52 status=ok
// SIG undefined eat_ws(void)

byte * eat_ws(longlong param_1,byte *param_2)

{
  byte bVar1;
  ushort uVar2;
  
  while (((bVar1 = *param_2, bVar1 < 0x80 &&
          (uVar2 = *(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2),
          (uVar2 & 0x10) != 0)) && ((0x7f < bVar1 || ((uVar2 & 8) == 0))))) {
    param_2 = param_2 + 1;
  }
  return param_2;
}



// FUNCTION 143d7b9f0 get_next_file body=406 status=ok
// SIG undefined get_next_file(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong get_next_file(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar2 = OPENSSL_DIR_read(param_2,param_1);
  do {
    if (lVar2 == 0) {
LAB_143d7bb5a:
      OPENSSL_DIR_end(param_2);
      *param_2 = 0;
      return 0;
    }
    uVar5 = 0xffffffffffffffff;
    do {
      uVar6 = uVar5;
      uVar5 = uVar6 + 1;
    } while (*(char *)(lVar2 + uVar5) != '\0');
    if (((5 < uVar5) && (iVar1 = _stricmp((char *)(uVar5 + lVar2 + -5),".conf"), iVar1 == 0)) ||
       ((4 < uVar5 && (iVar1 = _stricmp((char *)(uVar5 + lVar2 + -4),".cnf"), iVar1 == 0)))) {
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (*(char *)(lVar3 + param_1) != '\0');
      lVar3 = uVar6 + 3 + lVar3;
      pcVar4 = (char *)CRYPTO_zalloc(lVar3,"crypto\\conf\\conf_def.c",0x2cb);
      if (pcVar4 == (char *)0x0) {
        ERR_put_error(0xe,0x6b,0x41,"crypto\\conf\\conf_def.c",0x2cd);
        goto LAB_143d7bb5a;
      }
      if (*pcVar4 == '\0') {
        OPENSSL_strlcpy(pcVar4,param_1,lVar3);
        OPENSSL_strlcat(pcVar4,&DAT_145cc6654,lVar3);
      }
      OPENSSL_strlcat(pcVar4,lVar2,lVar3);
      lVar2 = BIO_new_file(pcVar4,&DAT_145d71df8);
      CRYPTO_free(pcVar4,"crypto\\conf\\conf_def.c",0x2e6);
      if (lVar2 != 0) {
        return lVar2;
      }
    }
    lVar2 = OPENSSL_DIR_read(param_2,param_1);
  } while( true );
}



// FUNCTION 143d7bb90 str_copy body=1196 status=ok
// SIG undefined str_copy(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 str_copy(longlong param_1,byte *param_2,longlong *param_3,byte *param_4)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  longlong *plVar4;
  longlong lVar5;
  char *pcVar6;
  undefined8 uVar7;
  byte bVar8;
  byte bVar9;
  longlong lVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  int iVar17;
  undefined4 uVar18;
  
  bVar2 = 0;
  iVar17 = 0;
  plVar4 = (longlong *)BUF_MEM_new();
  if (plVar4 == (longlong *)0x0) {
    return 0;
  }
  lVar5 = -1;
  do {
    lVar5 = lVar5 + 1;
  } while (param_4[lVar5] != 0);
  lVar5 = BUF_MEM_grow(plVar4,(longlong)((int)lVar5 + 1));
  if (lVar5 == 0) {
LAB_143d7c014:
    BUF_MEM_free(plVar4);
    uVar7 = 0;
  }
  else {
LAB_143d7bc36:
    while( true ) {
      bVar9 = *param_4;
      if (bVar9 < 0x80) {
        uVar3 = *(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar9 * 2) >> 6 & 1;
      }
      else {
        uVar3 = 0;
      }
      lVar5 = (longlong)iVar17;
      if (uVar3 == 0) break;
      while( true ) {
        bVar8 = param_4[1];
        pbVar11 = param_4 + 1;
        if (((bVar8 < 0x80) &&
            ((*(byte *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar8 * 2) & 8) != 0)) ||
           (bVar8 == bVar9)) break;
        if ((bVar8 < 0x80) &&
           ((*(byte *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar8 * 2) & 0x20) != 0)) {
          bVar8 = param_4[2];
          pbVar11 = param_4 + 2;
          if ((bVar8 < 0x80) &&
             ((*(byte *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar8 * 2) & 8) != 0)) break;
        }
        iVar17 = iVar17 + 1;
        *(byte *)(lVar5 + plVar4[1]) = bVar8;
        lVar5 = lVar5 + 1;
        param_4 = pbVar11;
      }
LAB_143d7bd0e:
      param_4 = pbVar11;
      if (*pbVar11 == bVar9) {
        param_4 = pbVar11 + 1;
      }
    }
    if (0x7f < bVar9) {
LAB_143d7bdd6:
      if (bVar9 != 0x24) {
        iVar17 = iVar17 + 1;
        *(byte *)(lVar5 + plVar4[1]) = bVar9;
        param_4 = param_4 + 1;
        goto LAB_143d7bc36;
      }
      if (param_4[1] == 0x7b) {
        bVar9 = 0x7d;
      }
      else {
        bVar9 = 0;
        if (param_4[1] == 0x28) {
          bVar9 = 0x29;
        }
      }
      pbVar11 = param_4 + 2;
      pbVar14 = param_4 + 2;
      if (bVar9 == 0) {
        pbVar11 = param_4 + 1;
        pbVar14 = param_4 + 1;
      }
      while ((*pbVar11 < 0x80 &&
             ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)*pbVar11 * 2) & 0x107) != 0))) {
        pbVar11 = pbVar11 + 1;
      }
      pbVar13 = pbVar11;
      pbVar12 = pbVar14;
      pbVar15 = param_2;
      pbVar16 = (byte *)0x0;
      if ((*pbVar11 == 0x3a) && (pbVar11[1] == 0x3a)) {
        *pbVar11 = 0;
        pbVar12 = pbVar11 + 2;
        bVar2 = 0x3a;
        pbVar13 = pbVar12;
        while ((pbVar15 = pbVar14, pbVar16 = pbVar11, *pbVar13 < 0x80 &&
               ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)*pbVar13 * 2) & 0x107) != 0)))
        {
          pbVar13 = pbVar13 + 1;
        }
      }
      bVar8 = *pbVar13;
      *pbVar13 = 0;
      pbVar11 = pbVar13;
      if (bVar9 == 0) {
LAB_143d7be86:
        pcVar6 = (char *)_CONF_get_string(param_1,pbVar15,pbVar12);
        if (pbVar16 != (byte *)0x0) {
          *pbVar16 = bVar2;
        }
        *pbVar13 = bVar8;
        if (pcVar6 != (char *)0x0) {
          lVar10 = -1;
          do {
            lVar10 = lVar10 + 1;
          } while (pcVar6[lVar10] != '\0');
          if ((byte *)0x10000 < param_4 + *plVar4 + (lVar10 - (longlong)pbVar11)) {
            ERR_put_error(0xe,0x65,0x74,"crypto\\conf\\conf_def.c",0x26e);
            goto LAB_143d7c014;
          }
          lVar10 = BUF_MEM_grow_clean(plVar4);
          if (lVar10 == 0) {
            ERR_put_error(0xe,0x65,0x41,"crypto\\conf\\conf_def.c",0x272);
            goto LAB_143d7c014;
          }
          cVar1 = *pcVar6;
          while (cVar1 != '\0') {
            pcVar6 = pcVar6 + 1;
            iVar17 = iVar17 + 1;
            *(char *)(lVar5 + plVar4[1]) = cVar1;
            lVar5 = lVar5 + 1;
            cVar1 = *pcVar6;
          }
          *pbVar13 = bVar8;
          param_4 = pbVar11;
          goto LAB_143d7bc36;
        }
        uVar18 = 0x269;
        uVar7 = 0x68;
      }
      else {
        if (bVar8 == bVar9) {
          pbVar11 = pbVar13 + 1;
          goto LAB_143d7be86;
        }
        uVar18 = 0x255;
        uVar7 = 0x66;
      }
      ERR_put_error(0xe,0x65,uVar7,"crypto\\conf\\conf_def.c",uVar18);
      goto LAB_143d7c014;
    }
    if ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar9 * 2) & 0x400) != 0) {
      do {
        bVar8 = param_4[1];
        pbVar11 = param_4 + 1;
        if ((bVar8 < 0x80) &&
           ((*(byte *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar8 * 2) & 8) != 0))
        goto LAB_143d7bd0e;
        if (bVar8 == bVar9) {
          if (param_4[2] != bVar9) goto LAB_143d7bd0e;
          pbVar11 = param_4 + 2;
        }
        iVar17 = iVar17 + 1;
        *(byte *)(lVar5 + plVar4[1]) = *pbVar11;
        lVar5 = lVar5 + 1;
        param_4 = pbVar11;
      } while( true );
    }
    if (0x7f < bVar9) goto LAB_143d7bdd6;
    if ((*(byte *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar9 * 2) & 0x20) != 0) {
      bVar9 = param_4[1];
      param_4 = param_4 + 2;
      if ((bVar9 < 0x80) &&
         ((*(byte *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar9 * 2) & 8) != 0))
      goto LAB_143d7bf4b;
      if (bVar9 == 0x72) {
        iVar17 = iVar17 + 1;
        *(undefined1 *)(lVar5 + plVar4[1]) = 0xd;
      }
      else if (bVar9 == 0x6e) {
        iVar17 = iVar17 + 1;
        *(undefined1 *)(lVar5 + plVar4[1]) = 10;
      }
      else if (bVar9 == 0x62) {
        iVar17 = iVar17 + 1;
        *(undefined1 *)(lVar5 + plVar4[1]) = 8;
      }
      else {
        if (bVar9 == 0x74) {
          bVar9 = 9;
        }
        iVar17 = iVar17 + 1;
        *(byte *)(lVar5 + plVar4[1]) = bVar9;
      }
      goto LAB_143d7bc36;
    }
    if ((0x7f < bVar9) || ((*(byte *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar9 * 2) & 8) == 0))
    goto LAB_143d7bdd6;
LAB_143d7bf4b:
    *(undefined1 *)(lVar5 + plVar4[1]) = 0;
    CRYPTO_free(*param_3,"crypto\\conf\\conf_def.c",0x289);
    *param_3 = plVar4[1];
    CRYPTO_free(plVar4,"crypto\\conf\\conf_def.c",0x28b);
    uVar7 = 1;
  }
  return uVar7;
}



// FUNCTION 143d7c040 trim_ws body=79 status=ok
// SIG undefined trim_ws(void)

void trim_ws(longlong param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar2 = param_2;
  while ((0x7f < *pbVar2 ||
         ((*(byte *)(*(longlong *)(param_1 + 8) + (ulonglong)*pbVar2 * 2) & 8) == 0))) {
    pbVar2 = pbVar2 + 1;
  }
  do {
    pbVar1 = pbVar2;
    pbVar2 = pbVar1 + -1;
    if ((pbVar2 < param_2) || (0x7f < *pbVar2)) break;
  } while ((*(byte *)(*(longlong *)(param_1 + 8) + (ulonglong)*pbVar2 * 2) & 0x10) != 0);
  *pbVar1 = 0;
  return;
}



// FUNCTION 143d7c090 _CONF_add_string body=188 status=ok
// SIG undefined _CONF_add_string(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 _CONF_add_string(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar1 = param_2[2];
  *param_3 = *param_2;
  uVar2 = OPENSSL_sk_push(uVar1,param_3);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  lVar3 = OPENSSL_LH_insert(*(undefined8 *)(param_1 + 0x10),param_3);
  if (lVar3 != 0) {
    OPENSSL_sk_delete_ptr(uVar1,lVar3);
    CRYPTO_free(*(undefined8 *)(lVar3 + 8),"crypto\\conf\\conf_api.c",0x3e);
    CRYPTO_free(*(undefined8 *)(lVar3 + 0x10),"crypto\\conf\\conf_api.c",0x3f);
    CRYPTO_free(lVar3,"crypto\\conf\\conf_api.c",0x40);
  }
  return 1;
}



// FUNCTION 143d7c150 _CONF_free_data body=88 status=ok
// SIG undefined _CONF_free_data(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void _CONF_free_data(longlong param_1)

{
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
    BIO_set_retry_reason(*(longlong *)(param_1 + 0x10),0);
    OPENSSL_LH_doall_arg
              (*(undefined8 *)(param_1 + 0x10),FUN_143d7c580,*(undefined8 *)(param_1 + 0x10));
    OPENSSL_LH_doall(*(undefined8 *)(param_1 + 0x10),value_free_stack_doall);
    OPENSSL_LH_free(*(undefined8 *)(param_1 + 0x10));
  }
  return;
}



// FUNCTION 143d7c1b0 _CONF_get_section body=63 status=ok
// SIG undefined _CONF_get_section(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 _CONF_get_section(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong local_28 [4];
  undefined8 uStack_8;
  
  uStack_8 = 0x143d7c1ba;
  if ((param_1 != 0) && (param_2 != 0)) {
    local_28[1] = 0;
    local_28[0] = param_2;
    uVar1 = OPENSSL_LH_retrieve(*(undefined8 *)(param_1 + 0x10),local_28);
    return uVar1;
  }
  return 0;
}



// FUNCTION 143d7c1f0 _CONF_get_section_values body=72 status=ok
// SIG undefined _CONF_get_section_values(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 _CONF_get_section_values(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong local_28 [4];
  undefined8 uStack_8;
  
  uStack_8 = 0x143d7c1fa;
  if ((param_1 != 0) && (param_2 != 0)) {
    local_28[1] = 0;
    local_28[0] = param_2;
    lVar1 = OPENSSL_LH_retrieve(*(undefined8 *)(param_1 + 0x10),local_28);
    if (lVar1 != 0) {
      return *(undefined8 *)(lVar1 + 0x10);
    }
  }
  return 0;
}



// FUNCTION 143d7c240 _CONF_get_string body=228 status=ok
// SIG undefined _CONF_get_string(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char * _CONF_get_string(longlong param_1,char *param_2,char *param_3)

{
  longlong lVar1;
  char *pcVar2;
  longlong lVar3;
  char *local_28;
  char *local_20;
  undefined8 uStack_10;
  
  uStack_10 = 0x143d7c255;
  if (param_3 != (char *)0x0) {
    if (param_1 == 0) {
      pcVar2 = getenv(param_3);
      return pcVar2;
    }
    if (param_2 != (char *)0x0) {
      local_28 = param_2;
      local_20 = param_3;
      lVar1 = OPENSSL_LH_retrieve(*(undefined8 *)(param_1 + 0x10),&local_28);
      if (lVar1 != 0) goto LAB_143d7c2e5;
      lVar1 = 0;
      do {
        lVar3 = lVar1 + 1;
        if (param_2[lVar1] != (&DAT_145da5948)[lVar1]) goto LAB_143d7c2c1;
        lVar1 = lVar3;
      } while (lVar3 != 4);
      pcVar2 = getenv(param_3);
      if (pcVar2 != (char *)0x0) {
        return pcVar2;
      }
    }
LAB_143d7c2c1:
    local_28 = "default";
    local_20 = param_3;
    lVar1 = OPENSSL_LH_retrieve(*(undefined8 *)(param_1 + 0x10),&local_28);
    if (lVar1 != 0) {
LAB_143d7c2e5:
      return *(char **)(lVar1 + 0x10);
    }
  }
  return (char *)0x0;
}



// FUNCTION 143d7c330 _CONF_new_data body=77 status=ok
// SIG undefined _CONF_new_data(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 _CONF_new_data(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar1 = OPENSSL_LH_new(FUN_143d7c540,&LAB_143d7c4b0);
    *(longlong *)(param_1 + 0x10) = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 143d7c380 _CONF_new_section body=303 status=ok
// SIG undefined _CONF_new_section(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * _CONF_new_section(longlong param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  void *_Dst;
  longlong lVar5;
  uint uVar6;
  char *pcVar7;
  size_t _Size;
  
  puVar4 = (undefined8 *)0x0;
  lVar3 = OPENSSL_sk_new_null();
  if ((lVar3 != 0) &&
     (puVar4 = (undefined8 *)CRYPTO_malloc(0x18,"crypto\\conf\\conf_api.c",0xc4),
     puVar4 != (undefined8 *)0x0)) {
    cVar1 = *param_2;
    pcVar7 = param_2;
    for (uVar6 = 0; (cVar1 != '\0' && (uVar6 < 0x80000000)); uVar6 = uVar6 + 1) {
      pcVar7 = pcVar7 + 1;
      cVar1 = *pcVar7;
    }
    _Size = (size_t)(int)((uVar6 & 0x7fffffff) + 1);
    _Dst = (void *)CRYPTO_malloc(_Size,"crypto\\conf\\conf_api.c",199);
    *puVar4 = _Dst;
    if (_Dst != (void *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,param_2,_Size);
      puVar4[1] = 0;
      puVar4[2] = lVar3;
      lVar5 = OPENSSL_LH_insert(*(undefined8 *)(param_1 + 0x10),puVar4);
      if ((lVar5 == 0) &&
         (iVar2 = UVariantSet::GetNumVariants(*(undefined8 *)(param_1 + 0x10)), iVar2 < 1)) {
        return puVar4;
      }
    }
  }
  OPENSSL_sk_free(lVar3);
  if (puVar4 != (undefined8 *)0x0) {
    CRYPTO_free(*puVar4,"crypto\\conf\\conf_api.c",0xd6);
  }
  CRYPTO_free(puVar4,"crypto\\conf\\conf_api.c",0xd7);
  return (undefined8 *)0x0;
}



// FUNCTION 143d7c540 FUN_143d7c540 body=57 status=ok
// SIG undefined FUN_143d7c540(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_143d7c540(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_143cf4b60(param_1[1]);
  iVar2 = FUN_143cf4b60(*param_1);
  return iVar2 << 2 ^ uVar1;
}



// FUNCTION 143d7c580 FUN_143d7c580 body=43 status=ok
// SIG undefined FUN_143d7c580(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d7c580(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    OPENSSL_LH_delete(param_2,param_1);
    return;
  }
  return;
}



// FUNCTION 143d7c5b0 value_free_stack_doall body=218 status=ok
// SIG undefined value_free_stack_doall(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void value_free_stack_doall(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_1[1] == 0) {
    uVar1 = param_1[2];
    iVar2 = OPENSSL_sk_num(uVar1);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      lVar3 = OPENSSL_sk_value(uVar1,iVar2);
      CRYPTO_free(*(undefined8 *)(lVar3 + 0x10),"crypto\\conf\\conf_api.c",0xb2);
      CRYPTO_free(*(undefined8 *)(lVar3 + 8),"crypto\\conf\\conf_api.c",0xb3);
      CRYPTO_free(lVar3,"crypto\\conf\\conf_api.c",0xb4);
    }
    OPENSSL_sk_free(uVar1);
    CRYPTO_free(*param_1,"crypto\\conf\\conf_api.c",0xb7);
    CRYPTO_free(param_1,"crypto\\conf\\conf_api.c",0xb8);
  }
  return;
}



// FUNCTION 143d7c690 win32_load body=327 status=ok
// SIG undefined win32_load(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 win32_load(longlong param_1)

{
  int iVar1;
  LPCSTR lpLibFileName;
  HMODULE hLibModule;
  HMODULE pHVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143d7c6aa;
  pHVar2 = (HMODULE)0x0;
  lpLibFileName = (LPCSTR)DSO_convert_filename(param_1,0);
  if (lpLibFileName == (LPCSTR)0x0) {
    uVar4 = 0x66;
    uVar3 = 0x6f;
    hLibModule = pHVar2;
  }
  else {
    hLibModule = LoadLibraryA(lpLibFileName);
    if (hLibModule == (HMODULE)0x0) {
      ERR_put_error(0x25,0x78,0x67,"crypto\\dso\\dso_win32.c",0x6b,uVar5);
      ERR_add_error_data(3,"filename(",lpLibFileName,&DAT_144025e14);
      goto LAB_143d7c77d;
    }
    pHVar2 = (HMODULE)CRYPTO_malloc(8,"crypto\\dso\\dso_win32.c");
    if (pHVar2 == (HMODULE)0x0) {
      uVar4 = 0x71;
      uVar3 = 0x41;
    }
    else {
      *(HMODULE *)pHVar2 = hLibModule;
      iVar1 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 8),pHVar2);
      if (iVar1 != 0) {
        *(LPCSTR *)(param_1 + 0x38) = lpLibFileName;
        return 1;
      }
      uVar4 = 0x76;
      uVar3 = 0x69;
    }
  }
  ERR_put_error(0x25,0x78,uVar3,"crypto\\dso\\dso_win32.c",uVar4,uVar5);
LAB_143d7c77d:
  CRYPTO_free(lpLibFileName,"crypto\\dso\\dso_win32.c",0x7e);
  CRYPTO_free(pHVar2,"crypto\\dso\\dso_win32.c",0x7f);
  if (hLibModule != (HMODULE)0x0) {
    FreeLibrary(hLibModule);
  }
  return 0;
}



// FUNCTION 143d7c7e0 win32_unload body=256 status=ok
// SIG undefined win32_unload(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 win32_unload(longlong param_1)

{
  int iVar1;
  BOOL BVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143d7c7ec;
  if (param_1 == 0) {
    ERR_put_error(0x25,0x79,0x43,"crypto\\dso\\dso_win32.c",0x89,0x143d7c7ec);
    return 0;
  }
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
  if (iVar1 < 1) {
    return 1;
  }
  puVar3 = (undefined8 *)OPENSSL_sk_pop(*(undefined8 *)(param_1 + 8));
  if (puVar3 == (undefined8 *)0x0) {
    ERR_put_error(0x25,0x79,0x68,"crypto\\dso\\dso_win32.c",0x90,uVar4);
    return 0;
  }
  BVar2 = FreeLibrary((HMODULE)*puVar3);
  if (BVar2 == 0) {
    ERR_put_error(0x25,0x79,0x6b,"crypto\\dso\\dso_win32.c",0x94,uVar4);
    OPENSSL_sk_push(*(undefined8 *)(param_1 + 8),puVar3);
    return 0;
  }
  CRYPTO_free(puVar3,"crypto\\dso\\dso_win32.c",0x9c);
  return 1;
}



// FUNCTION 143d7c8e0 win32_bind_func body=250 status=ok
// SIG undefined win32_bind_func(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

FARPROC win32_bind_func(longlong param_1,LPCSTR param_2)

{
  int iVar1;
  undefined8 *puVar2;
  FARPROC pFVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143d7c8f0;
  if ((param_1 == 0) || (param_2 == (LPCSTR)0x0)) {
    uVar5 = 0xa9;
    uVar4 = 0x43;
  }
  else {
    iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
    if (iVar1 < 1) {
      uVar5 = 0xad;
      uVar4 = 0x69;
    }
    else {
      iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
      puVar2 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 8),iVar1 + -1);
      if (puVar2 != (undefined8 *)0x0) {
        pFVar3 = GetProcAddress((HMODULE)*puVar2,param_2);
        if (pFVar3 != (FARPROC)0x0) {
          return pFVar3;
        }
        ERR_put_error(0x25,0x65,0x6a,"crypto\\dso\\dso_win32.c",0xb7,uVar6);
        ERR_add_error_data(3,"symname(",param_2,&DAT_144025e14);
        return (FARPROC)0x0;
      }
      uVar5 = 0xb2;
      uVar4 = 0x68;
    }
  }
  ERR_put_error(0x25,0x65,uVar4,"crypto\\dso\\dso_win32.c",uVar5,uVar6);
  return (FARPROC)0x0;
}



// FUNCTION 143d7c9e0 win32_name_converter body=268 status=ok
// SIG undefined win32_name_converter(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char * win32_name_converter(undefined8 param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  char *_Format;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x143d7c9f5;
  bVar2 = false;
  cVar1 = *param_2;
  pcVar4 = param_2;
  for (uVar5 = 0; (cVar1 != '\0' && (uVar5 < 0x80000000)); uVar5 = uVar5 + 1) {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  pcVar4 = _guard_xfg_dispatch_icall_nop(param_2,"/");
  if (((pcVar4 == (char *)0x0) &&
      (pcVar4 = _guard_xfg_dispatch_icall_nop(param_2,"\\"), pcVar4 == (char *)0x0)) &&
     (pcVar4 = _guard_xfg_dispatch_icall_nop(param_2,":"), pcVar4 == (char *)0x0)) {
    bVar2 = true;
    uVar6 = 0x1cf;
    iVar3 = 5;
  }
  else {
    iVar3 = 1;
    uVar6 = 0x1d2;
  }
  pcVar4 = (char *)CRYPTO_malloc((longlong)(int)(iVar3 + (uVar5 & 0x7fffffff)),
                                 "crypto\\dso\\dso_win32.c",uVar6);
  if (pcVar4 != (char *)0x0) {
    _Format = "%s.dll";
    if (!bVar2) {
      _Format = "%s";
    }
    sprintf(pcVar4,_Format,param_2);
    return pcVar4;
  }
  ERR_put_error(0x25,0x7d,0x6d,"crypto\\dso\\dso_win32.c",0x1d4,uVar7);
  return (char *)0x0;
}



// FUNCTION 143d7caf0 win32_merger body=512 status=ok
// SIG undefined win32_merger(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong win32_merger(undefined8 param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143d7cb0a;
  plVar3 = (longlong *)0x0;
  plVar4 = (longlong *)0x0;
  if (param_2 == 0) {
    if (param_3 == 0) {
      ERR_put_error(0x25,0x86,0x43,"crypto\\dso\\dso_win32.c",0x18d,0x143d7cb0a);
      return 0;
    }
    lVar2 = CRYPTO_strdup(param_3,"crypto\\dso\\dso_win32.c",0x197);
    plVar4 = plVar3;
    if (lVar2 != 0) goto LAB_143d7ccae;
    uVar5 = 0x199;
  }
  else if (param_3 == 0) {
    lVar2 = CRYPTO_strdup(param_2,"crypto\\dso\\dso_win32.c",0x191);
    if (lVar2 != 0) {
LAB_143d7ccae:
      CRYPTO_free(plVar3,"crypto\\dso\\dso_win32.c",0x1bf);
      CRYPTO_free(plVar4,"crypto\\dso\\dso_win32.c",0x1c0);
      return lVar2;
    }
    uVar5 = 0x193;
  }
  else {
    plVar3 = (longlong *)win32_splitter(param_1,param_2,0);
    if (plVar3 != (longlong *)0x0) {
      plVar4 = (longlong *)win32_splitter(param_1,param_3,1);
      if (plVar4 == (longlong *)0x0) {
        ERR_put_error(0x25,0x86,0x41,"crypto\\dso\\dso_win32.c",0x1a4);
        CRYPTO_free(plVar3,"crypto\\dso\\dso_win32.c",0x1a5);
        return 0;
      }
      if ((*plVar3 == 0) && (plVar3[2] == 0)) {
        *plVar3 = *plVar4;
        *(int *)(plVar3 + 1) = (int)plVar4[1];
        plVar3[2] = plVar4[2];
        *(int *)(plVar3 + 3) = (int)plVar4[3];
      }
      if ((char *)plVar3[6] == (char *)0x0) {
        plVar3[6] = plVar4[6];
        *(int *)(plVar3 + 7) = (int)plVar4[7];
      }
      else {
        cVar1 = *(char *)plVar3[6];
        if ((cVar1 != '\\') && (cVar1 != '/')) {
          plVar3[4] = plVar4[6];
          *(int *)(plVar3 + 5) = (int)plVar4[7];
        }
      }
      if (plVar3[8] == 0) {
        plVar3[8] = plVar4[8];
        *(int *)(plVar3 + 9) = (int)plVar4[9];
      }
      lVar2 = win32_joiner(param_1,plVar3);
      goto LAB_143d7ccae;
    }
    uVar5 = 0x19f;
  }
  ERR_put_error(0x25,0x86,0x41,"crypto\\dso\\dso_win32.c",uVar5,uVar6);
  return 0;
}



// FUNCTION 143d7ccf0 win32_globallookup body=455 status=ok
// SIG undefined win32_globallookup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FARPROC win32_globallookup(LPCSTR param_1)

{
  int iVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  FARPROC pFVar3;
  FARPROC pFVar4;
  undefined1 *hObject;
  INT_PTR IVar5;
  undefined1 auStack_298 [32];
  undefined4 local_278;
  undefined4 local_268 [10];
  HMODULE local_240;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  hModule = LoadLibraryW(L"KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    local_278 = 0x206;
    ERR_put_error(0x25,0x8e,0x6c,"crypto\\dso\\dso_win32.c");
  }
  else {
    pFVar2 = GetProcAddress(hModule,"CreateToolhelp32Snapshot");
    if (pFVar2 == (FARPROC)0x0) {
      FreeLibrary(hModule);
      local_278 = 0x20e;
      ERR_put_error(0x25,0x8e,0x6c,"crypto\\dso\\dso_win32.c");
    }
    else {
      pFVar3 = GetProcAddress(hModule,"Module32First");
      pFVar4 = GetProcAddress(hModule,"Module32Next");
      hObject = (undefined1 *)(*pFVar2)(8);
      if (hObject == &DAT_ffffffffffffffff) {
        FreeLibrary(hModule);
        local_278 = 0x21e;
        ERR_put_error(0x25,0x8e,0x6c,"crypto\\dso\\dso_win32.c");
      }
      else {
        local_268[0] = 0x238;
        IVar5 = (*pFVar3)(hObject,local_268);
        iVar1 = (int)IVar5;
        while (iVar1 != 0) {
          pFVar2 = GetProcAddress(local_240,param_1);
          if (pFVar2 != (FARPROC)0x0) {
            CloseHandle(hObject);
            FreeLibrary(hModule);
            return pFVar2;
          }
          IVar5 = (*pFVar4)(hObject,local_268);
          iVar1 = (int)IVar5;
        }
        CloseHandle(hObject);
        FreeLibrary(hModule);
      }
    }
  }
  return (FARPROC)0x0;
}



// FUNCTION 143d7cec0 DSO_METHOD_openssl body=8 status=ok
// SIG undefined DSO_METHOD_openssl(void)

undefined ** DSO_METHOD_openssl(void)

{
  return &PTR_s_OpenSSL__win32__shared_library_m_146837e80;
}



// FUNCTION 143d7ced0 win32_joiner body=789 status=ok
// SIG undefined win32_joiner(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char * win32_joiner(undefined8 param_1,longlong *param_2)

{
  char *_Dest;
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  uVar7 = 0x143d7cee0;
  iVar1 = 0;
  iVar5 = 0;
  if (param_2 == (longlong *)0x0) {
    ERR_put_error(0x25,0x87,0x43,"crypto\\dso\\dso_win32.c",0x136,0x143d7cee0);
    return (char *)0x0;
  }
  if (*param_2 == 0) {
    if (param_2[2] != 0) {
      iVar1 = (int)param_2[3];
      goto LAB_143d7cf42;
    }
  }
  else {
    iVar1 = (int)param_2[1] + 2;
    if (((param_2[4] != 0) || (param_2[6] != 0)) || (param_2[8] != 0)) {
LAB_143d7cf42:
      iVar1 = iVar1 + 1;
    }
  }
  iVar1 = iVar1 + (int)param_2[5];
  if ((param_2[4] != 0) && ((param_2[6] != 0 || (param_2[8] != 0)))) {
    iVar1 = iVar1 + 1;
  }
  iVar1 = iVar1 + (int)param_2[7];
  if ((param_2[6] != 0) && (param_2[8] != 0)) {
    iVar1 = iVar1 + 1;
  }
  iVar1 = (int)param_2[9] + iVar1;
  if (iVar1 == 0) {
    ERR_put_error(0x25,0x87,0x71,"crypto\\dso\\dso_win32.c",0x14b,0x143d7cee0);
    return (char *)0x0;
  }
  _Dest = (char *)CRYPTO_malloc((longlong)iVar1 + 1,"crypto\\dso\\dso_win32.c",0x14f);
  if (_Dest == (char *)0x0) {
    ERR_put_error(0x25,0x87,0x41,"crypto\\dso\\dso_win32.c",0x151,uVar7);
    return (char *)0x0;
  }
  if (*param_2 == 0) {
    if ((char *)param_2[2] == (char *)0x0) goto LAB_143d7d06f;
    strncpy(_Dest,(char *)param_2[2],(longlong)(int)param_2[3]);
    iVar5 = (int)param_2[3];
    _Dest[iVar5] = ':';
  }
  else {
    _Dest[0] = '\\';
    _Dest[1] = '\\';
    _Dest[2] = '\0';
    strncpy(_Dest + 2,(char *)*param_2,(longlong)(int)param_2[1]);
    iVar5 = (int)param_2[1] + 2;
    if (((param_2[4] == 0) && (param_2[6] == 0)) && (param_2[8] == 0)) goto LAB_143d7d06f;
    _Dest[iVar5] = '\\';
  }
  iVar5 = iVar5 + 1;
LAB_143d7d06f:
  lVar2 = (longlong)(int)param_2[5];
  pcVar3 = (char *)param_2[4];
  pcVar6 = pcVar3;
  if (0 < (int)param_2[5]) {
    do {
      pcVar4 = pcVar3;
      if (pcVar6 + ((longlong)(int)lVar2 - (longlong)pcVar3) != (char *)0x0) {
        do {
          if (*pcVar4 == '\0') break;
          if (*pcVar4 == '/') {
            if (pcVar4 != (char *)0x0) goto LAB_143d7d0c6;
            break;
          }
          pcVar4 = pcVar4 + 1;
        } while (pcVar4 + -(longlong)pcVar3 < pcVar6 + ((longlong)(int)lVar2 - (longlong)pcVar3));
      }
      pcVar4 = pcVar6 + lVar2;
LAB_143d7d0c6:
      strncpy(_Dest + iVar5,pcVar3,(longlong)pcVar4 - (longlong)pcVar3);
      iVar1 = (int)pcVar3;
      pcVar3 = pcVar4 + 1;
      iVar1 = iVar5 + ((int)pcVar4 - iVar1);
      iVar5 = iVar1 + 1;
      _Dest[iVar1] = '\\';
      lVar2 = (longlong)(int)param_2[5];
      pcVar6 = (char *)param_2[4];
    } while ((longlong)pcVar3 - param_2[4] < lVar2);
  }
  lVar2 = (longlong)(int)param_2[7];
  pcVar3 = (char *)param_2[6];
  pcVar6 = pcVar3;
  if (0 < (int)param_2[7]) {
    do {
      pcVar4 = pcVar6;
      if (pcVar3 + ((longlong)(int)lVar2 - (longlong)pcVar6) != (char *)0x0) {
        do {
          if (*pcVar4 == '\0') break;
          if (*pcVar4 == '/') {
            if (pcVar4 != (char *)0x0) goto LAB_143d7d166;
            break;
          }
          pcVar4 = pcVar4 + 1;
        } while (pcVar4 + -(longlong)pcVar6 < pcVar3 + ((longlong)(int)lVar2 - (longlong)pcVar6));
      }
      pcVar4 = pcVar3 + lVar2;
LAB_143d7d166:
      strncpy(_Dest + iVar5,pcVar6,(longlong)pcVar4 - (longlong)pcVar6);
      iVar1 = iVar5 + ((int)pcVar4 - (int)pcVar6);
      iVar5 = iVar1 + 1;
      _Dest[iVar1] = '\\';
      pcVar3 = (char *)param_2[6];
      lVar2 = (longlong)(int)param_2[7];
      pcVar6 = pcVar4 + 1;
    } while ((longlong)(pcVar4 + 1) - (longlong)pcVar3 < lVar2);
  }
  strncpy(_Dest + iVar5,(char *)param_2[8],(longlong)(int)param_2[9]);
  _Dest[(int)param_2[9] + iVar5] = '\0';
  return _Dest;
}



// FUNCTION 143d7d1f0 win32_splitter body=505 status=ok
// SIG undefined win32_splitter(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * win32_splitter(undefined8 param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  uVar7 = 0x143d7d205;
  if (param_2 == (char *)0x0) {
    ERR_put_error(0x25,0x88,0x6f,"crypto\\dso\\dso_win32.c",0xd4,0x143d7d205);
    return (undefined8 *)0x0;
  }
  puVar3 = (undefined8 *)CRYPTO_zalloc(0x50,"crypto\\dso\\dso_win32.c",0xd8);
  if (puVar3 == (undefined8 *)0x0) {
    ERR_put_error(0x25,0x88,0x41,"crypto\\dso\\dso_win32.c",0xda,uVar7);
    puVar3 = (undefined8 *)0x0;
  }
  else {
    if (((*param_2 == '\\') && (param_2[1] == '\\')) ||
       ((pcVar6 = param_2, iVar4 = 1, *param_2 == '/' && (param_2[1] == '/')))) {
      param_2 = param_2 + 2;
      *puVar3 = param_2;
      pcVar6 = param_2;
      iVar4 = 0;
    }
    while( true ) {
      cVar1 = *param_2;
      iVar2 = (int)pcVar6;
      iVar5 = (int)param_2;
      if (cVar1 == '\0') break;
      if (cVar1 == '/') {
LAB_143d7d2fa:
        if (iVar4 == 0) {
          iVar4 = 2;
          param_2 = param_2 + 1;
          *(int *)(puVar3 + 1) = iVar5 - iVar2;
          puVar3[6] = param_2;
          pcVar6 = param_2;
        }
        else {
          param_2 = param_2 + 1;
          iVar2 = (int)param_2 - iVar2;
          if (iVar4 == 1) {
            iVar4 = 2;
            puVar3[6] = pcVar6;
            *(int *)(puVar3 + 7) = iVar2;
            pcVar6 = param_2;
          }
          else {
            *(int *)(puVar3 + 7) = *(int *)(puVar3 + 7) + iVar2;
            pcVar6 = param_2;
          }
        }
      }
      else if (cVar1 == ':') {
        if (iVar4 != 1) {
          ERR_put_error(0x25,0x88,0x73,"crypto\\dso\\dso_win32.c",0xed,uVar7);
          CRYPTO_free(puVar3,"crypto\\dso\\dso_win32.c",0xee);
          return (undefined8 *)0x0;
        }
        puVar3[2] = pcVar6;
        iVar4 = 2;
        param_2 = param_2 + 1;
        *(int *)(puVar3 + 3) = iVar5 - iVar2;
        puVar3[6] = param_2;
        pcVar6 = param_2;
      }
      else {
        if (cVar1 == '\\') goto LAB_143d7d2fa;
        param_2 = param_2 + 1;
      }
    }
    if (iVar4 == 0) {
      *(int *)(puVar3 + 1) = iVar5 - iVar2;
    }
    else if (param_2 != pcVar6 && -1 < (longlong)param_2 - (longlong)pcVar6) {
      if (param_3 == 0) {
        puVar3[8] = pcVar6;
        *(int *)(puVar3 + 9) = iVar5 - iVar2;
      }
      else if (iVar4 == 1) {
        puVar3[6] = pcVar6;
        *(int *)(puVar3 + 7) = iVar5 - iVar2;
      }
      else {
        *(int *)(puVar3 + 7) = (*(int *)(puVar3 + 7) - iVar2) + iVar5;
      }
    }
    if (*(int *)(puVar3 + 1) == 0) {
      *puVar3 = 0;
    }
    if (*(int *)(puVar3 + 3) == 0) {
      puVar3[2] = 0;
    }
    if (*(int *)(puVar3 + 7) == 0) {
      puVar3[6] = 0;
    }
    if (*(int *)(puVar3 + 9) == 0) {
      puVar3[8] = 0;
    }
  }
  return puVar3;
}



// FUNCTION 143d7d3f0 ASN1_generate_v3 body=88 status=ok
// SIG undefined ASN1_generate_v3(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASN1_generate_v3(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int local_res18 [4];
  undefined8 uVar2;
  
  uVar2 = 0x143d7d3fc;
  local_res18[0] = 0;
  uVar1 = generate_v3(param_1,param_2,0,local_res18);
  if (local_res18[0] != 0) {
    ERR_put_error(0xd,0xb2,local_res18[0],"crypto\\asn1\\asn1_gen.c",0x5e,uVar2);
  }
  return uVar1;
}



// FUNCTION 143d7d450 ASN1_str2mask body=48 status=ok
// SIG undefined ASN1_str2mask(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_str2mask(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  CONF_parse_list(param_1,0x7c,1,mask_cb,param_2);
  return;
}



// FUNCTION 143d7d480 append_exp body=208 status=ok
// SIG undefined append_exp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 append_exp(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = *param_1;
  if ((iVar1 != -1) && (param_6 == 0)) {
    ERR_put_error(0xd,0xb0,0xb3,"crypto\\asn1\\asn1_gen.c",0x1d8,0x143d7d48c);
    return 0;
  }
  iVar2 = param_1[0x6a];
  lVar3 = (longlong)iVar2;
  if (iVar2 == 0x14) {
    ERR_put_error(0xd,0xb0,0xae,"crypto\\asn1\\asn1_gen.c",0x1dd,0x143d7d48c);
    return 0;
  }
  param_1[0x6a] = iVar2 + 1;
  if (iVar1 == -1) {
    param_1[lVar3 * 5 + 6] = param_2;
    param_1[lVar3 * 5 + 7] = param_3;
  }
  else {
    param_1[lVar3 * 5 + 6] = iVar1;
    param_1[lVar3 * 5 + 7] = param_1[1];
    param_1[0] = -1;
    param_1[1] = -1;
  }
  param_1[lVar3 * 5 + 9] = param_5;
  param_1[lVar3 * 5 + 8] = param_4;
  return 1;
}



// FUNCTION 143d7d550 FUN_143d7d550 body=751 status=ok
// SIG undefined FUN_143d7d550(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_143d7d550(char *param_1,int param_2,int *param_3)

{
  uint uVar1;
  char *pcVar2;
  char *_Str1;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 local_res8 [2];
  undefined4 local_res18 [4];
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x143d7d566;
  iVar5 = 0;
  _Str1 = (char *)0x0;
  if (param_1 == (char *)0x0) {
    return 0xffffffff;
  }
  iVar3 = 0;
  pcVar2 = param_1;
  if (0 < param_2) {
    do {
      if (*pcVar2 == ':') {
        _Str1 = pcVar2 + 1;
        iVar5 = ((int)param_1 - (int)_Str1) + param_2;
        param_2 = (int)pcVar2 - (int)param_1;
        break;
      }
      pcVar2 = pcVar2 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_2);
  }
  uVar1 = asn1_str2tag(param_1,param_2);
  if (uVar1 == 0xffffffff) {
    ERR_put_error(0xd,0xb1,0xc2,"crypto\\asn1\\asn1_gen.c",0x10a,uVar7);
    ERR_add_error_data(2,&DAT_145da5ee8,param_1);
    return 0xffffffff;
  }
  if ((uVar1 >> 0x10 & 1) == 0) {
    param_3[2] = uVar1;
    *(char **)(param_3 + 4) = _Str1;
    if ((_Str1 != (char *)0x0) || (param_1[param_2] == '\0')) {
      return 0;
    }
    uVar6 = 0x115;
    uVar4 = 0xbd;
LAB_143d7d62b:
    ERR_put_error(0xd,0xb1,uVar4,"crypto\\asn1\\asn1_gen.c",uVar6,uVar7);
    return 0xffffffff;
  }
  switch(uVar1) {
  case 0x10001:
    if (*param_3 != -1) {
      uVar6 = 0x120;
      uVar4 = 0xb5;
      goto LAB_143d7d62b;
    }
    iVar5 = parse_tagging(_Str1,iVar5,param_3,param_3 + 1);
    goto LAB_143d7d744;
  case 0x10002:
    iVar5 = parse_tagging(_Str1,iVar5,local_res18,local_res8);
    if (iVar5 == 0) {
      return 0xffffffff;
    }
    uVar7 = 1;
    uVar4 = 0;
    uVar6 = 0;
    goto LAB_143d7d73c;
  default:
    goto switchD_143d7d67a_caseD_10003;
  case 0x10004:
    local_res18[0] = 3;
    uVar6 = 1;
    goto LAB_143d7d736;
  case 0x10005:
    local_res18[0] = 4;
    uVar6 = 0;
LAB_143d7d736:
    uVar7 = 0;
    break;
  case 0x10006:
    uVar7 = 1;
    uVar6 = 0;
    local_res18[0] = 0x10;
    break;
  case 0x10007:
    uVar7 = 1;
    uVar6 = 0;
    local_res18[0] = 0x11;
    break;
  case 0x10008:
    if (_Str1 == (char *)0x0) {
      uVar6 = 0x145;
    }
    else {
      iVar5 = strncmp(_Str1,"ASCII",5);
      if (iVar5 == 0) {
        param_3[3] = 1;
        return 1;
      }
      iVar5 = strncmp(_Str1,"UTF8",4);
      if (iVar5 == 0) {
        param_3[3] = 2;
        return 1;
      }
      iVar5 = strncmp(_Str1,"HEX",3);
      if (iVar5 == 0) {
        param_3[3] = 3;
        return 1;
      }
      iVar5 = strncmp(_Str1,"BITLIST",7);
      if (iVar5 == 0) {
        param_3[3] = 4;
        return 1;
      }
      uVar6 = 0x151;
    }
    uVar4 = 0xa0;
    goto LAB_143d7d62b;
  }
  uVar4 = 1;
  local_res8[0] = 0;
LAB_143d7d73c:
  iVar5 = append_exp(param_3,local_res18[0],local_res8[0],uVar7,uVar6,uVar4);
LAB_143d7d744:
  if (iVar5 == 0) {
    return 0xffffffff;
  }
switchD_143d7d67a_caseD_10003:
  return 1;
}



// FUNCTION 143d7d860 asn1_str2tag body=169 status=ok
// SIG undefined asn1_str2tag(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 asn1_str2tag(char *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar2 = (ulonglong)param_2;
  if (param_2 == 0xffffffff) {
    uVar2 = 0xffffffffffffffff;
    do {
      uVar2 = uVar2 + 1;
    } while (param_1[uVar2] != '\0');
  }
  uVar3 = 0;
  DAT_146bcba28 = &PTR_DAT_145da5a20;
  do {
    if ((int)uVar2 == *(int *)(DAT_146bcba28 + 1)) {
      iVar1 = strncmp(*DAT_146bcba28,param_1,(longlong)(int)uVar2);
      if (iVar1 == 0) {
        return *(undefined4 *)((longlong)DAT_146bcba28 + 0xc);
      }
    }
    DAT_146bcba28 = DAT_146bcba28 + 2;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x31);
  return 0xffffffff;
}



// FUNCTION 143d7d910 FUN_143d7d910 body=1094 status=ok
// SIG undefined FUN_143d7d910(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * FUN_143d7d910(char *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 local_res20 [2];
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar8;
  undefined8 local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 uStack_20;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uStack_20 = 0x143d7d923;
  piVar3 = (int *)ASN1_TYPE_new();
  if (piVar3 == (int *)0x0) {
    ERR_put_error(0xd,0xb3,0x41,"crypto\\asn1\\asn1_gen.c",CONCAT44(uVar8,0x24b));
    return (int *)0x0;
  }
  pcVar5 = "";
  if (param_1 != (char *)0x0) {
    pcVar5 = param_1;
  }
  switch(param_3) {
  case 1:
    if (param_2 != 1) {
      ERR_put_error(0xd,0xb3,0xbe,"crypto\\asn1\\asn1_gen.c",CONCAT44(uVar8,0x25d));
      goto LAB_143d7dd39;
    }
    local_30 = 0;
    local_38 = 0;
    local_28 = pcVar5;
    iVar2 = X509V3_get_value_bool(&local_38,piVar3 + 2);
    if (iVar2 != 0) goto LAB_143d7dc9c;
    uVar6 = 0x264;
    uVar7 = 0xb0;
    break;
  case 2:
  case 10:
    if (param_2 != 1) {
      ERR_put_error(0xd,0xb3,0xb9,"crypto\\asn1\\asn1_gen.c",CONCAT44(uVar8,0x26c));
      goto LAB_143d7dd39;
    }
    lVar4 = s2i_ASN1_INTEGER(0,pcVar5);
    *(longlong *)(piVar3 + 2) = lVar4;
    if (lVar4 != 0) goto LAB_143d7dc9c;
    uVar6 = 0x271;
    uVar7 = 0xb4;
    break;
  case 3:
  case 4:
    lVar4 = ASN1_STRING_new();
    *(longlong *)(piVar3 + 2) = lVar4;
    if (lVar4 == 0) {
      ERR_put_error(0xd,0xb3,0x41,"crypto\\asn1\\asn1_gen.c",CONCAT44(uVar8,0x2b4));
      goto LAB_143d7dd39;
    }
    if (param_2 == 3) {
      lVar4 = OPENSSL_hexstr2buf(pcVar5,local_res20);
      if (lVar4 != 0) {
        *(longlong *)(*(longlong *)(piVar3 + 2) + 8) = lVar4;
        **(undefined4 **)(piVar3 + 2) = local_res20[0];
        *(int *)(*(longlong *)(piVar3 + 2) + 4) = param_3;
LAB_143d7dc87:
        if (param_3 == 3) {
          *(uint *)(*(longlong *)(piVar3 + 2) + 0x10) =
               *(uint *)(*(longlong *)(piVar3 + 2) + 0x10) & 0xfffffff0;
          *(uint *)(*(longlong *)(piVar3 + 2) + 0x10) =
               *(uint *)(*(longlong *)(piVar3 + 2) + 0x10) | 8;
        }
LAB_143d7dc9c:
        *piVar3 = param_3;
        return piVar3;
      }
      uVar6 = 0x2ba;
      uVar7 = 0xb2;
    }
    else {
      if (param_2 == 1) {
        ASN1_STRING_set(lVar4,pcVar5,0xffffffff);
        goto LAB_143d7dc87;
      }
      if ((param_2 != 4) || (param_3 != 3)) {
        ERR_put_error(0xd,0xb3,0xaf,"crypto\\asn1\\asn1_gen.c",CONCAT44(uVar8,0x2cc));
        goto LAB_143d7dd39;
      }
      iVar2 = CONF_parse_list(pcVar5,0x2c,1,bitstr_cb,lVar4);
      uVar8 = (undefined4)((ulonglong)lVar4 >> 0x20);
      if (iVar2 != 0) goto LAB_143d7dc9c;
      uVar6 = 0x2c6;
      uVar7 = 0xbc;
    }
    break;
  case 5:
    if ((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) {
      ERR_put_error(0xd,0xb3,0xb6,"crypto\\asn1\\asn1_gen.c",CONCAT44(uVar8,0x256));
      goto LAB_143d7dd39;
    }
    goto LAB_143d7dc9c;
  case 6:
    if (param_2 != 1) {
      ERR_put_error(0xd,0xb3,0xbf,"crypto\\asn1\\asn1_gen.c",CONCAT44(uVar8,0x278));
      goto LAB_143d7dd39;
    }
    lVar4 = OBJ_txt2obj(pcVar5,0);
    *(longlong *)(piVar3 + 2) = lVar4;
    if (lVar4 != 0) goto LAB_143d7dc9c;
    uVar6 = 0x27c;
    uVar7 = 0xb7;
    break;
  default:
    uVar6 = 0x2d9;
    uVar7 = 0xc4;
    break;
  case 0xc:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1e:
    if (param_2 == 1) {
      uVar6 = 0x1001;
    }
    else {
      if (param_2 != 2) {
        ERR_put_error(0xd,0xb3,0xb1,"crypto\\asn1\\asn1_gen.c",CONCAT44(uVar8,0x2a5));
        goto LAB_143d7dd39;
      }
      uVar6 = 0x1000;
    }
    uVar1 = ASN1_tag2bit(param_3);
    uVar7 = CONCAT44(uVar8,uVar1);
    iVar2 = ASN1_mbstring_copy(piVar3 + 2,pcVar5,0xffffffff,uVar6,uVar7);
    uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (0 < iVar2) goto LAB_143d7dc9c;
    uVar6 = 0x2ab;
    uVar7 = 0x41;
    break;
  case 0x17:
  case 0x18:
    if (param_2 != 1) {
      ERR_put_error(0xd,0xb3,0xc1,"crypto\\asn1\\asn1_gen.c",CONCAT44(uVar8,0x284));
      goto LAB_143d7dd39;
    }
    lVar4 = ASN1_STRING_new();
    *(longlong *)(piVar3 + 2) = lVar4;
    if (lVar4 == 0) {
      uVar6 = 0x288;
      uVar7 = 0x41;
    }
    else {
      iVar2 = ASN1_STRING_set(lVar4,pcVar5,0xffffffff);
      if (iVar2 == 0) {
        uVar6 = 0x28c;
        uVar7 = 0x41;
      }
      else {
        *(int *)(*(longlong *)(piVar3 + 2) + 4) = param_3;
        iVar2 = ASN1_TIME_check(*(undefined8 *)(piVar3 + 2));
        if (iVar2 != 0) goto LAB_143d7dc9c;
        uVar6 = 0x291;
        uVar7 = 0xb8;
      }
    }
  }
  ERR_put_error(0xd,0xb3,uVar7,"crypto\\asn1\\asn1_gen.c",CONCAT44(uVar8,uVar6));
  ERR_add_error_data(2,"string=",pcVar5);
LAB_143d7dd39:
  ASN1_TYPE_free(piVar3);
  return (int *)0x0;
}



// FUNCTION 143d7dda0 bitstr_cb body=204 status=ok
// SIG undefined bitstr_cb(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 bitstr_cb(char *param_1,int param_2,undefined8 param_3)

{
  ulong uVar1;
  int iVar2;
  undefined4 uVar3;
  char *local_res8;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143d7ddb5;
  if (param_1 != (char *)0x0) {
    uVar1 = strtoul(param_1,&local_res8,10);
    if (((local_res8 == (char *)0x0) || (*local_res8 == '\0')) || (local_res8 == param_1 + param_2))
    {
      if ((int)uVar1 < 0) {
        uVar4 = 0x2f3;
        uVar3 = 0xbb;
      }
      else {
        iVar2 = ASN1_BIT_STRING_set_bit(param_3,uVar1,1);
        if (iVar2 != 0) {
          return 1;
        }
        uVar4 = 0x2f7;
        uVar3 = 0x41;
      }
      ERR_put_error(0xd,0xb4,uVar3,"crypto\\asn1\\asn1_gen.c",uVar4,uVar5);
    }
  }
  return 0;
}



// FUNCTION 143d7de70 generate_v3 body=1084 status=ok
// SIG undefined generate_v3(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * generate_v3(undefined8 param_1,longlong param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined1 auStack_288 [32];
  undefined8 *local_268;
  undefined4 local_258;
  int local_254;
  int *local_250;
  undefined8 local_248;
  void *local_240;
  int local_238;
  longlong local_230;
  void *local_228;
  undefined1 local_220 [4];
  undefined1 local_21c [12];
  int *local_210;
  undefined8 local_208;
  int local_200;
  undefined4 local_1fc;
  longlong local_1f8;
  undefined4 local_1e0 [96];
  int local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  piVar8 = (int *)0x0;
  local_240 = (void *)0x0;
  local_258 = 0;
  local_268 = &local_208;
  local_208 = 0xffffffffffffffff;
  local_1fc = 1;
  local_60 = 0;
  local_254 = param_3;
  local_230 = param_2;
  iVar1 = CONF_parse_list(param_1,0x2c,1,FUN_143d7d550);
  if (iVar1 != 0) {
    *param_4 = 0xc2;
    return (int *)0x0;
  }
  local_238 = local_200;
  if (local_200 - 0x10U < 2) {
    if (param_2 == 0) {
      *param_4 = 0xc0;
      return (int *)0x0;
    }
    if (0x31 < param_3) {
      *param_4 = 0xb5;
      return (int *)0x0;
    }
    piVar11 = (int *)0x0;
    local_248 = 0;
    lVar5 = OPENSSL_sk_new_null();
    piVar4 = piVar8;
    piVar7 = piVar8;
    if (lVar5 != 0) {
      if (local_1f8 != 0) {
        piVar7 = (int *)X509V3_get_section(local_230,local_1f8);
        if (piVar7 == (int *)0x0) goto LAB_143d7e058;
        iVar1 = OPENSSL_sk_num(piVar7);
        if (0 < iVar1) {
          local_254 = local_254 + 1;
          piVar9 = piVar8;
          do {
            lVar6 = OPENSSL_sk_value(piVar7,piVar9);
            lVar6 = generate_v3(*(undefined8 *)(lVar6 + 0x10),local_230,local_254,param_4);
            piVar4 = piVar11;
            if ((lVar6 == 0) || (iVar1 = OPENSSL_sk_push(lVar5,lVar6), iVar1 == 0))
            goto LAB_143d7e058;
            uVar3 = (int)piVar9 + 1;
            piVar9 = (int *)(ulonglong)uVar3;
            iVar1 = OPENSSL_sk_num(piVar7);
          } while ((int)uVar3 < iVar1);
        }
      }
      iVar1 = local_238;
      if (local_238 == 0x11) {
        iVar2 = i2d_ASN1_TYPE();
      }
      else {
        iVar2 = i2d_ASN1_TYPE(lVar5,&local_248);
      }
      piVar4 = piVar11;
      if ((-1 < iVar2) && (piVar4 = (int *)ASN1_TYPE_new(), piVar4 != (int *)0x0)) {
        lVar6 = ASN1_STRING_type_new(iVar1);
        *(longlong *)(piVar4 + 2) = lVar6;
        if (lVar6 != 0) {
          *piVar4 = iVar1;
          *(undefined8 *)(lVar6 + 8) = local_248;
          **(int **)(piVar4 + 2) = iVar2;
          local_248 = 0;
        }
      }
    }
LAB_143d7e058:
    CRYPTO_free(local_248,"crypto\\asn1\\asn1_gen.c",0x1ca);
    OPENSSL_sk_pop_free(lVar5,ASN1_TYPE_free);
    X509V3_section_free(local_230,piVar7);
  }
  else {
    piVar4 = (int *)FUN_143d7d910(local_1f8,local_1fc,local_200);
  }
  if (piVar4 == (int *)0x0) {
    return (int *)0x0;
  }
  if (((int)local_208 == -1) && (local_60 == 0)) {
    return piVar4;
  }
  iVar2 = i2d_ASN1_TYPE(piVar4,&local_240);
  ASN1_TYPE_free(piVar4);
  local_228 = local_240;
  piVar4 = piVar8;
  iVar1 = iVar2;
  if ((int)local_208 != -1) {
    local_268 = (undefined8 *)CONCAT44(local_268._4_4_,iVar2);
    uVar3 = ASN1_get_object(&local_228,&local_258,local_21c,local_220);
    piVar7 = piVar8;
    if ((char)uVar3 < '\0') goto LAB_143d7e25c;
    iVar2 = iVar2 + ((int)local_240 - (int)local_228);
    if ((uVar3 & 1) == 0) {
      iVar1 = ASN1_object_size(0,local_258,local_208 & 0xffffffff);
      piVar4 = (int *)(ulonglong)(uVar3 & 0x20);
    }
    else {
      local_258 = 0;
      iVar1 = ASN1_object_size(0,0,local_208 & 0xffffffff);
      piVar4 = (int *)0x2;
    }
  }
  puVar10 = (undefined4 *)((longlong)&local_208 + (longlong)local_60 * 0x14 + 4);
  piVar7 = piVar8;
  if (0 < local_60) {
    do {
      puVar10[4] = iVar1 + puVar10[3];
      iVar1 = ASN1_object_size(0,iVar1 + puVar10[3],*puVar10);
      uVar3 = (int)piVar7 + 1;
      piVar7 = (int *)(ulonglong)uVar3;
      puVar10 = puVar10 + -5;
    } while ((int)uVar3 < local_60);
  }
  piVar7 = (int *)CRYPTO_malloc((longlong)iVar1,"crypto\\asn1\\asn1_gen.c",0xc3);
  if (piVar7 != (int *)0x0) {
    local_250 = piVar7;
    if (0 < local_60) {
      puVar10 = local_1e0;
      do {
        local_268 = (undefined8 *)CONCAT44(local_268._4_4_,puVar10[-3]);
        ASN1_put_object(&local_250,puVar10[-2],*puVar10,puVar10[-4]);
        if (puVar10[-1] != 0) {
          *(undefined1 *)local_250 = 0;
          local_250 = (int *)((longlong)local_250 + 1);
        }
        uVar3 = (int)piVar8 + 1;
        piVar8 = (int *)(ulonglong)uVar3;
        puVar10 = puVar10 + 5;
      } while ((int)uVar3 < local_60);
    }
    if ((int)local_208 != -1) {
      if ((local_208._4_4_ == 0) && ((int)local_208 - 0x10U < 2)) {
        piVar4 = (int *)&DAT_00000020;
      }
      local_268 = (undefined8 *)CONCAT44(local_268._4_4_,local_208._4_4_);
      ASN1_put_object(&local_250,piVar4,local_258);
    }
    _guard_xfg_dispatch_icall_nop(local_250,local_228,(longlong)iVar2);
    local_210 = piVar7;
    piVar8 = (int *)d2i_ASN1_TYPE(0,&local_210,iVar1);
  }
LAB_143d7e25c:
  CRYPTO_free(local_240,"crypto\\asn1\\asn1_gen.c",0xe9);
  CRYPTO_free(piVar7,"crypto\\asn1\\asn1_gen.c",0xea);
  return piVar8;
}



// FUNCTION 143d7e2b0 mask_cb body=159 status=ok
// SIG undefined mask_cb(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 mask_cb(char *param_1,int param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 != (char *)0x0) {
    if (param_2 == 3) {
      iVar1 = strncmp(param_1,"DIR",3);
      if (iVar1 == 0) {
        *param_3 = *param_3 | 0x2906;
        return 1;
      }
    }
    uVar2 = asn1_str2tag(param_1,param_2);
    if ((uVar2 != 0) && ((uVar2 >> 0x10 & 1) == 0)) {
      uVar2 = ASN1_tag2bit(uVar2);
      if (uVar2 != 0) {
        *param_3 = *param_3 | uVar2;
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143d7e350 parse_tagging body=330 status=ok
// SIG undefined parse_tagging(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 parse_tagging(char *param_1,int param_2,ulong *param_3,undefined4 *param_4)

{
  ulong uVar1;
  char local_res8 [8];
  char *local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143d7e36b;
  if ((param_1 != (char *)0x0) &&
     (((uVar1 = strtoul(param_1,&local_18,10), local_18 == (char *)0x0 || (*local_18 == '\0')) ||
      (local_18 <= param_1 + param_2)))) {
    if (-1 < (int)uVar1) {
      *param_3 = uVar1;
      if ((local_18 != (char *)0x0) && (param_2 + ((int)param_1 - (int)local_18) != 0)) {
        local_res8[0] = *local_18;
        if (local_res8[0] == 'A') {
          *param_4 = 0x40;
          return 1;
        }
        if (local_res8[0] != 'C') {
          if (local_res8[0] == 'P') {
            *param_4 = 0xc0;
            return 1;
          }
          if (local_res8[0] != 'U') {
            local_res8[1] = 0;
            ERR_put_error(0xd,0xb6,0xba,"crypto\\asn1\\asn1_gen.c",0x187);
            ERR_add_error_data(2,"Char=",local_res8);
            return 0;
          }
          *param_4 = 0;
          return 1;
        }
      }
      *param_4 = 0x80;
      return 1;
    }
    ERR_put_error(0xd,0xb6,0xbb,"crypto\\asn1\\asn1_gen.c",0x168);
  }
  return 0;
}



// FUNCTION 143d7e4a0 ENGINE_ctrl body=363 status=ok
// SIG undefined ENGINE_ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ENGINE_ctrl(longlong param_1,int param_2,undefined4 param_3,undefined8 param_4,
                     undefined8 param_5)

{
  int iVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar5 = 0x143d7e4bb;
  if (param_1 == 0) {
    ERR_put_error(0x26,0x8e,0x43,"crypto\\engine\\eng_ctrl.c",CONCAT44(uVar4,0x81),0x143d7e4bb);
    uVar3 = 0;
  }
  else {
    CRYPTO_THREAD_read_lock(DAT_146bcd570);
    iVar1 = *(int *)(param_1 + 0x9c);
    CRYPTO_THREAD_unlock(DAT_146bcd570);
    pcVar2 = *(code **)(param_1 + 0x70);
    uVar3 = (ulonglong)(pcVar2 != (code *)0x0);
    if (iVar1 < 1) {
      ERR_put_error(0x26,0x8e,0x82,"crypto\\engine\\eng_ctrl.c",CONCAT44(uVar4,0x89),uVar5);
      uVar3 = 0;
    }
    else if (param_2 != 10) {
      if (param_2 - 0xbU < 8) {
        if (pcVar2 == (code *)0x0) {
          ERR_put_error(0x26,0x8e,0x78,"crypto\\engine\\eng_ctrl.c",CONCAT44(uVar4,0x9e),uVar5);
          return 0xffffffff;
        }
        if ((*(byte *)(param_1 + 0x98) & 2) == 0) {
          uVar3 = FUN_143d7e880(param_1,param_2,param_3,param_4,param_5);
          return uVar3;
        }
      }
      else if (pcVar2 == (code *)0x0) {
        ERR_put_error(0x26,0x8e,0x78,"crypto\\engine\\eng_ctrl.c",CONCAT44(uVar4,0xab),uVar5);
        return 0;
      }
      uVar3 = (*pcVar2)(param_1,param_2,param_3,param_4,param_5);
    }
  }
  return uVar3;
}



// FUNCTION 143d7e610 ENGINE_ctrl_cmd_string body=620 status=ok
// SIG undefined ENGINE_ctrl_cmd_string(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_ctrl_cmd_string(longlong param_1,longlong param_2,char *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  char *local_res8;
  undefined4 uVar6;
  undefined8 uVar5;
  undefined8 uVar7;
  
  uVar7 = 0x143d7e61e;
  if ((param_1 == 0) || (param_2 == 0)) {
    ERR_put_error(0x26,0xab,0x43,"crypto\\engine\\eng_ctrl.c",0xed,0x143d7e61e);
    return 0;
  }
  if ((*(longlong *)(param_1 + 0x70) == 0) ||
     (iVar1 = ENGINE_ctrl(param_1,0xd,0,param_2,0), iVar1 < 1)) {
    if (param_4 != 0) {
      ERR_clear_error();
      return 1;
    }
    uVar5 = 0xff;
    uVar4 = 0x89;
    goto LAB_143d7e725;
  }
  uVar6 = 0;
  uVar2 = ENGINE_ctrl(param_1,0x12,iVar1,0,0);
  if ((int)uVar2 < 0) {
    ERR_put_error(0x26,0xaa,0x8a,"crypto\\engine\\eng_ctrl.c",CONCAT44(uVar6,0xb7),uVar7);
    uVar4 = 0x86;
    uVar5 = 0x104;
    goto LAB_143d7e725;
  }
  if ((uVar2 & 7) == 0) {
    uVar5 = CONCAT44(uVar6,0x104);
    uVar4 = 0x86;
    goto LAB_143d7e725;
  }
  uVar2 = ENGINE_ctrl(param_1,0x12,iVar1,0,0);
  if (-1 < (int)uVar2) {
    if ((uVar2 & 4) == 0) {
      if (param_3 == (char *)0x0) {
        uVar5 = 0x128;
        uVar4 = 0x87;
        goto LAB_143d7e725;
      }
      if ((uVar2 & 2) != 0) {
        iVar1 = ENGINE_ctrl(param_1,iVar1,0,param_3,0);
        goto joined_r0x000143d7e783;
      }
      if ((uVar2 & 1) == 0) {
        uVar5 = 0x13a;
        goto LAB_143d7e793;
      }
      lVar3 = strtol(param_3,&local_res8,10);
      if ((param_3 == local_res8) || (*local_res8 != '\0')) {
        uVar5 = 0x140;
        uVar4 = 0x85;
        goto LAB_143d7e725;
      }
    }
    else {
      if (param_3 != (char *)0x0) {
        uVar5 = 0x118;
        uVar4 = 0x88;
        goto LAB_143d7e725;
      }
      lVar3 = 0;
    }
    iVar1 = ENGINE_ctrl(param_1,iVar1,lVar3,0,0);
joined_r0x000143d7e783:
    if (iVar1 < 1) {
      return 0;
    }
    return 1;
  }
  uVar5 = 0x10f;
LAB_143d7e793:
  uVar4 = 0x6e;
LAB_143d7e725:
  ERR_put_error(0x26,0xab,uVar4,"crypto\\engine\\eng_ctrl.c",uVar5,uVar7);
  return 0;
}



// FUNCTION 143d7e880 FUN_143d7e880 body=730 status=ok
// SIG undefined FUN_143d7e880(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_143d7e880(longlong param_1,int param_2,uint param_3,char *param_4)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  bool bVar5;
  char *pcVar6;
  uint *puVar7;
  ulonglong uVar8;
  undefined *puVar9;
  char *pcVar10;
  undefined8 uVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  
  if (param_2 == 0xb) {
    puVar4 = *(uint **)(param_1 + 0x90);
    if (((puVar4 != (uint *)0x0) && (*puVar4 != 0)) && (*(longlong *)(puVar4 + 2) != 0)) {
      return (ulonglong)*puVar4;
    }
    return 0;
  }
  if ((((param_2 - 0xdU & 0xfffffff9) == 0) && (param_2 != 0x13)) && (param_4 == (char *)0x0)) {
    ERR_put_error(0x26,0xac,0x43,"crypto\\engine\\eng_ctrl.c",0x4f);
    return 0xffffffffffffffff;
  }
  puVar4 = *(uint **)(param_1 + 0x90);
  if (param_2 == 0xd) {
    if (puVar4 != (uint *)0x0) {
      iVar13 = 0;
      for (puVar7 = puVar4; *puVar7 != 0; puVar7 = puVar7 + 8) {
        pcVar6 = *(char **)(puVar7 + 2);
        if (pcVar6 == (char *)0x0) {
LAB_143d7e960:
          if (((*puVar7 != 0) && (*(longlong *)(puVar7 + 2) != 0)) && (-1 < iVar13)) {
            return (ulonglong)puVar4[(longlong)iVar13 * 8];
          }
          break;
        }
        lVar12 = (longlong)param_4 - (longlong)pcVar6;
        do {
          cVar1 = *pcVar6;
          cVar2 = pcVar6[lVar12];
          if (cVar1 != cVar2) break;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        if (cVar1 == cVar2) goto LAB_143d7e960;
        iVar13 = iVar13 + 1;
      }
    }
    uVar15 = 0x57;
    uVar11 = 0x89;
  }
  else {
    if (puVar4 != (uint *)0x0) {
      uVar14 = 0;
      puVar7 = puVar4;
      uVar8 = uVar14;
      while( true ) {
        uVar3 = *puVar7;
        iVar13 = (int)uVar8;
        if (((uVar3 == 0) || (*(longlong *)(puVar7 + 2) == 0)) || (param_3 <= uVar3)) break;
        uVar8 = (ulonglong)(iVar13 + 1);
        puVar7 = puVar7 + 8;
      }
      if ((uVar3 == param_3) && (-1 < iVar13)) {
        switch(param_2) {
        case 0xc:
          if ((puVar4[(longlong)iVar13 * 8 + 8] == 0) ||
             (bVar5 = false, *(longlong *)(puVar4 + (longlong)iVar13 * 8 + 10) == 0)) {
            bVar5 = true;
          }
          if (!bVar5) {
            uVar14 = (ulonglong)puVar4[(longlong)iVar13 * 8 + 8];
          }
          return uVar14;
        default:
          uVar15 = 0x79;
          uVar11 = 0x6e;
          break;
        case 0xe:
          uVar8 = 0xffffffffffffffff;
          do {
            uVar8 = uVar8 + 1;
          } while (*(char *)(*(longlong *)(puVar4 + (longlong)iVar13 * 8 + 2) + uVar8) != '\0');
          return uVar8;
        case 0xf:
          pcVar6 = *(char **)(puVar4 + (longlong)iVar13 * 8 + 2);
          pcVar10 = param_4;
          do {
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            *pcVar10 = cVar1;
            pcVar10 = pcVar10 + 1;
          } while (cVar1 != '\0');
          uVar8 = 0xffffffffffffffff;
          do {
            uVar8 = uVar8 + 1;
          } while (param_4[uVar8] != '\0');
          return uVar8;
        case 0x10:
          uVar8 = 0xffffffffffffffff;
          puVar9 = *(undefined **)(puVar4 + (longlong)iVar13 * 8 + 4);
          if (*(undefined **)(puVar4 + (longlong)iVar13 * 8 + 4) == (undefined *)0x0) {
            puVar9 = PTR_DAT_146837ed8;
          }
          do {
            uVar8 = uVar8 + 1;
          } while (puVar9[uVar8] != '\0');
          return uVar8;
        case 0x11:
          pcVar6 = *(char **)(puVar4 + (longlong)iVar13 * 8 + 4);
          if (*(char **)(puVar4 + (longlong)iVar13 * 8 + 4) == (char *)0x0) {
            pcVar6 = PTR_DAT_146837ed8;
          }
          lVar12 = (longlong)param_4 - (longlong)pcVar6;
          do {
            cVar1 = *pcVar6;
            pcVar6[lVar12] = cVar1;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          uVar8 = 0xffffffffffffffff;
          do {
            uVar8 = uVar8 + 1;
          } while (param_4[uVar8] != '\0');
          return uVar8;
        case 0x12:
          return (ulonglong)puVar4[(longlong)iVar13 * 8 + 6];
        }
        goto LAB_143d7eb33;
      }
    }
    uVar15 = 0x62;
    uVar11 = 0x8a;
  }
LAB_143d7eb33:
  ERR_put_error(0x26,0xac,uVar11,"crypto\\engine\\eng_ctrl.c",uVar15);
  return 0xffffffffffffffff;
}



// FUNCTION 143d7eb80 bn_add_words body=316 status=ok
// SIG undefined bn_add_words(void)

ulonglong bn_add_words(ulonglong *param_1,longlong *param_2,longlong *param_3,uint param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  if ((int)param_4 < 1) {
    return 0;
  }
  uVar5 = 0;
  for (; (param_4 & 0xfffffffc) != 0; param_4 = param_4 - 4) {
    lVar2 = *param_3;
    uVar4 = *param_2 + uVar5;
    *param_1 = lVar2 + uVar4;
    lVar3 = param_3[1];
    uVar4 = (ulonglong)(uVar4 < uVar5) + (ulonglong)(lVar2 + uVar4 < uVar4);
    uVar5 = param_2[1] + uVar4;
    param_1[1] = lVar3 + uVar5;
    lVar2 = param_3[2];
    uVar4 = (ulonglong)(uVar5 < uVar4) + (ulonglong)(lVar3 + uVar5 < uVar5);
    uVar5 = param_2[2] + uVar4;
    param_1[2] = lVar2 + uVar5;
    lVar3 = param_3[3];
    uVar4 = (ulonglong)(uVar5 < uVar4) + (ulonglong)(lVar2 + uVar5 < uVar5);
    uVar5 = param_2[3] + uVar4;
    param_1[3] = lVar3 + uVar5;
    uVar5 = (ulonglong)(uVar5 < uVar4) + (ulonglong)(lVar3 + uVar5 < uVar5);
    param_2 = param_2 + 4;
    param_3 = param_3 + 4;
    param_1 = param_1 + 4;
  }
  if (param_4 != 0) {
    plVar6 = param_2;
    do {
      lVar2 = *plVar6;
      plVar1 = (longlong *)(((longlong)param_3 - (longlong)param_2) + (longlong)plVar6);
      plVar6 = plVar6 + 1;
      uVar4 = lVar2 + uVar5;
      uVar7 = *plVar1 + uVar4;
      *(ulonglong *)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)plVar6) = uVar7;
      uVar5 = (ulonglong)(uVar4 < uVar5) + (ulonglong)(uVar7 < uVar4);
      param_4 = param_4 - 1;
    } while (param_4 != 0);
  }
  return uVar5;
}



// FUNCTION 143d7ecc0 bn_div_words body=396 status=ok
// SIG undefined bn_div_words(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong bn_div_words(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  
  uVar6 = 0;
  iVar11 = 2;
  if (param_3 == 0) {
    return 0xffffffffffffffff;
  }
  iVar2 = BN_num_bits_word(param_3);
  uVar8 = param_1 - param_3;
  if (param_1 < param_3) {
    uVar8 = param_1;
  }
  if (0x40 - iVar2 != 0) {
    bVar1 = (byte)(0x40 - iVar2);
    param_3 = param_3 << (bVar1 & 0x3f);
    uVar8 = param_2 >> (0x40 - bVar1 & 0x3f) | uVar8 << (bVar1 & 0x3f);
    param_2 = param_2 << (bVar1 & 0x3f);
  }
  uVar10 = param_3 >> 0x20;
  do {
    if (uVar8 >> 0x20 == uVar10) {
      uVar9 = 0xffffffff;
    }
    else {
      uVar9 = uVar8 / uVar10;
    }
    lVar7 = uVar9 * uVar10;
    uVar5 = uVar9 * (param_3 & 0xffffffff);
    uVar3 = uVar8 - lVar7;
    if ((uVar3 & 0xffffffff00000000) == 0) {
      do {
        if (uVar5 <= (uVar3 << 0x20 | param_2 >> 0x20)) break;
        lVar7 = lVar7 - uVar10;
        uVar3 = uVar8 - lVar7;
        uVar9 = uVar9 - 1;
        uVar5 = uVar5 - (param_3 & 0xffffffff);
      } while ((uVar3 & 0xffffffff00000000) == 0);
    }
    uVar4 = (uVar5 >> 0x20) + lVar7;
    uVar3 = uVar4 + 1;
    if (uVar5 << 0x20 <= param_2) {
      uVar3 = uVar4;
    }
    uVar4 = uVar9 - 1;
    if (uVar3 <= uVar8) {
      uVar4 = uVar9;
    }
    iVar11 = iVar11 + -1;
    if (iVar11 == 0) {
      return uVar4 | uVar6;
    }
    uVar6 = uVar4 << 0x20;
    uVar9 = uVar8 + param_3;
    if (uVar3 <= uVar8) {
      uVar9 = uVar8;
    }
    uVar8 = uVar9 - uVar3 << 0x20 | param_2 - (uVar5 << 0x20) >> 0x20;
    param_2 = param_2 << 0x20;
  } while( true );
}



// FUNCTION 143d7ee50 bn_mul_add_words body=337 status=ok
// SIG undefined bn_mul_add_words(void)

ulonglong bn_mul_add_words(longlong *param_1,ulonglong *param_2,uint param_3,ulonglong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  ulonglong uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  
  uVar16 = 0;
  if (0 < (int)param_3) {
    for (; (param_3 & 0xfffffffc) != 0; param_3 = param_3 - 4) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = *param_2;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = param_4;
      auVar11[8] = *param_1 + uVar16 < uVar16;
      auVar11._0_8_ = *param_1 + uVar16;
      auVar11._9_7_ = 0;
      auVar11 = auVar1 * auVar6 + auVar11;
      *param_1 = auVar11._0_8_;
      uVar17 = auVar11._8_8_;
      uVar16 = param_1[1] + uVar17;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = param_2[1];
      auVar7._8_8_ = 0;
      auVar7._0_8_ = param_4;
      auVar12[8] = uVar16 < uVar17;
      auVar12._0_8_ = uVar16;
      auVar12._9_7_ = 0;
      auVar12 = auVar2 * auVar7 + auVar12;
      param_1[1] = auVar12._0_8_;
      uVar17 = auVar12._8_8_;
      uVar16 = param_1[2] + uVar17;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = param_2[2];
      auVar8._8_8_ = 0;
      auVar8._0_8_ = param_4;
      auVar13[8] = uVar16 < uVar17;
      auVar13._0_8_ = uVar16;
      auVar13._9_7_ = 0;
      auVar13 = auVar3 * auVar8 + auVar13;
      param_1[2] = auVar13._0_8_;
      uVar17 = auVar13._8_8_;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = param_2[3];
      auVar9._8_8_ = 0;
      auVar9._0_8_ = param_4;
      uVar16 = param_1[3] + uVar17;
      auVar14[8] = uVar16 < uVar17;
      auVar14._0_8_ = uVar16;
      auVar14._9_7_ = 0;
      auVar14 = auVar4 * auVar9 + auVar14;
      param_1[3] = auVar14._0_8_;
      uVar16 = auVar14._8_8_;
      param_2 = param_2 + 4;
      param_1 = param_1 + 4;
    }
    if (param_3 != 0) {
      plVar18 = param_1;
      do {
        auVar5._8_8_ = 0;
        auVar5._0_8_ = *(ulonglong *)(((longlong)param_2 - (longlong)param_1) + (longlong)plVar18);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = param_4;
        auVar15[8] = *plVar18 + uVar16 < uVar16;
        auVar15._0_8_ = *plVar18 + uVar16;
        auVar15._9_7_ = 0;
        auVar15 = auVar5 * auVar10 + auVar15;
        *plVar18 = auVar15._0_8_;
        uVar16 = auVar15._8_8_;
        param_3 = param_3 - 1;
        plVar18 = plVar18 + 1;
      } while (param_3 != 0);
    }
    return uVar16;
  }
  return 0;
}



// FUNCTION 143d7efb0 bn_mul_comba4 body=521 status=ok
// SIG undefined bn_mul_comba4(void)

void bn_mul_comba4(undefined8 *param_1,ulonglong *param_2,ulonglong *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  ulonglong uVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  ulonglong uVar52;
  ulonglong uVar53;
  ulonglong uVar54;
  ulonglong uVar55;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *param_3;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = *param_2;
  *param_1 = SUB168(auVar1 * auVar17,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_3[1];
  auVar18._8_8_ = 0;
  auVar18._0_8_ = *param_2;
  uVar47 = SUB168(auVar2 * auVar18,0);
  uVar50 = SUB168(auVar1 * auVar17,8) + uVar47;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar50;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *param_3;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = param_2[1];
  auVar33 = auVar3 * auVar19 + auVar33;
  param_1[1] = auVar33._0_8_;
  uVar48 = auVar33._8_8_;
  uVar47 = SUB168(auVar2 * auVar18,8) + (ulonglong)(uVar50 < uVar47) + uVar48;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = uVar47;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *param_3;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = param_2[2];
  auVar34 = auVar4 * auVar20 + auVar34;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = auVar34._0_8_;
  uVar55 = auVar34._8_8_;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_3[1];
  auVar21._8_8_ = 0;
  auVar21._0_8_ = param_2[1];
  uVar47 = uVar55 + (uVar47 < uVar48);
  auVar35 = auVar5 * auVar21 + auVar35;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = auVar35._0_8_;
  uVar53 = auVar35._8_8_;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_3[2];
  auVar22._8_8_ = 0;
  auVar22._0_8_ = *param_2;
  uVar48 = uVar53 + uVar47;
  auVar36 = auVar6 * auVar22 + auVar36;
  param_1[2] = auVar36._0_8_;
  uVar49 = auVar36._8_8_;
  uVar50 = uVar49 + uVar48;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = uVar50;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_3[3];
  auVar23._8_8_ = 0;
  auVar23._0_8_ = *param_2;
  auVar37 = auVar7 * auVar23 + auVar37;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = auVar37._0_8_;
  uVar54 = auVar37._8_8_;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_3[2];
  auVar24._8_8_ = 0;
  auVar24._0_8_ = param_2[1];
  uVar47 = uVar54 + (ulonglong)(uVar47 < uVar55) + (ulonglong)(uVar48 < uVar53) +
                    (ulonglong)(uVar50 < uVar49);
  auVar38 = auVar8 * auVar24 + auVar38;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = auVar38._0_8_;
  uVar51 = auVar38._8_8_;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_3[1];
  auVar25._8_8_ = 0;
  auVar25._0_8_ = param_2[2];
  uVar48 = uVar51 + uVar47;
  auVar39 = auVar9 * auVar25 + auVar39;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = auVar39._0_8_;
  uVar49 = auVar39._8_8_;
  uVar50 = uVar49 + uVar48;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = *param_3;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = param_2[3];
  auVar40 = auVar10 * auVar26 + auVar40;
  param_1[3] = auVar40._0_8_;
  uVar52 = auVar40._8_8_;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_3[1];
  auVar27._8_8_ = 0;
  auVar27._0_8_ = param_2[3];
  uVar55 = uVar50 + uVar52;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = uVar55;
  auVar41 = auVar11 * auVar27 + auVar41;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = auVar41._0_8_;
  uVar53 = auVar41._8_8_;
  uVar48 = uVar53 + (ulonglong)(uVar48 < uVar51) + (ulonglong)(uVar47 < uVar54) +
                    (ulonglong)(uVar50 < uVar49) + (ulonglong)(uVar55 < uVar52);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_3[2];
  auVar28._8_8_ = 0;
  auVar28._0_8_ = param_2[2];
  auVar42 = auVar12 * auVar28 + auVar42;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = auVar42._0_8_;
  uVar50 = auVar42._8_8_;
  uVar47 = uVar48 + uVar50;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = param_3[3];
  auVar29._8_8_ = 0;
  auVar29._0_8_ = param_2[1];
  auVar43 = auVar13 * auVar29 + auVar43;
  param_1[4] = auVar43._0_8_;
  uVar49 = auVar43._8_8_;
  uVar51 = uVar47 + uVar49;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = uVar51;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = param_3[3];
  auVar30._8_8_ = 0;
  auVar30._0_8_ = param_2[2];
  auVar44 = auVar14 * auVar30 + auVar44;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = auVar44._0_8_;
  uVar55 = auVar44._8_8_;
  uVar48 = (ulonglong)(uVar48 < uVar53) + (ulonglong)(uVar47 < uVar50) +
           (ulonglong)(uVar51 < uVar49) + uVar55;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = param_3[2];
  auVar31._8_8_ = 0;
  auVar31._0_8_ = param_2[3];
  auVar45 = auVar15 * auVar31 + auVar45;
  param_1[5] = auVar45._0_8_;
  uVar47 = auVar45._8_8_;
  uVar50 = uVar48 + uVar47;
  auVar46._8_8_ = (ulonglong)(uVar48 < uVar55) + (ulonglong)(uVar50 < uVar47);
  auVar46._0_8_ = uVar50;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = param_3[3];
  auVar32._8_8_ = 0;
  auVar32._0_8_ = param_2[3];
  *(undefined1 (*) [16])(param_1 + 6) = auVar16 * auVar32 + auVar46;
  return;
}



// FUNCTION 143d7f1c0 bn_mul_comba8 body=1823 status=ok
// SIG undefined bn_mul_comba8(void)

void bn_mul_comba8(undefined8 *param_1,ulonglong *param_2,ulonglong *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  ulonglong uVar191;
  ulonglong uVar192;
  ulonglong uVar193;
  ulonglong uVar194;
  ulonglong uVar195;
  ulonglong uVar196;
  ulonglong uVar197;
  ulonglong uVar198;
  ulonglong uVar199;
  ulonglong uVar200;
  ulonglong uVar201;
  ulonglong uVar202;
  ulonglong uVar203;
  ulonglong uVar204;
  ulonglong uVar205;
  ulonglong uVar206;
  ulonglong uVar207;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *param_3;
  auVar65._8_8_ = 0;
  auVar65._0_8_ = *param_2;
  *param_1 = SUB168(auVar1 * auVar65,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_3[1];
  auVar66._8_8_ = 0;
  auVar66._0_8_ = *param_2;
  uVar191 = SUB168(auVar2 * auVar66,0);
  uVar196 = SUB168(auVar1 * auVar65,8) + uVar191;
  auVar129._8_8_ = 0;
  auVar129._0_8_ = uVar196;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *param_3;
  auVar67._8_8_ = 0;
  auVar67._0_8_ = param_2[1];
  auVar129 = auVar3 * auVar67 + auVar129;
  param_1[1] = auVar129._0_8_;
  uVar192 = auVar129._8_8_;
  uVar191 = SUB168(auVar2 * auVar66,8) + (ulonglong)(uVar196 < uVar191) + uVar192;
  auVar130._8_8_ = 0;
  auVar130._0_8_ = uVar191;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *param_3;
  auVar68._8_8_ = 0;
  auVar68._0_8_ = param_2[2];
  auVar130 = auVar4 * auVar68 + auVar130;
  auVar131._8_8_ = 0;
  auVar131._0_8_ = auVar130._0_8_;
  uVar207 = auVar130._8_8_;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_3[1];
  auVar69._8_8_ = 0;
  auVar69._0_8_ = param_2[1];
  uVar191 = uVar207 + (uVar191 < uVar192);
  auVar131 = auVar5 * auVar69 + auVar131;
  auVar132._8_8_ = 0;
  auVar132._0_8_ = auVar131._0_8_;
  uVar201 = auVar131._8_8_;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_3[2];
  auVar70._8_8_ = 0;
  auVar70._0_8_ = *param_2;
  uVar192 = uVar191 + uVar201;
  auVar132 = auVar6 * auVar70 + auVar132;
  param_1[2] = auVar132._0_8_;
  uVar193 = auVar132._8_8_;
  uVar196 = uVar192 + uVar193;
  auVar133._8_8_ = 0;
  auVar133._0_8_ = uVar196;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_3[3];
  auVar71._8_8_ = 0;
  auVar71._0_8_ = *param_2;
  auVar133 = auVar7 * auVar71 + auVar133;
  auVar134._8_8_ = 0;
  auVar134._0_8_ = auVar133._0_8_;
  uVar204 = auVar133._8_8_;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_3[2];
  auVar72._8_8_ = 0;
  auVar72._0_8_ = param_2[1];
  uVar191 = (ulonglong)(uVar191 < uVar207) + (ulonglong)(uVar192 < uVar201) +
            (ulonglong)(uVar196 < uVar193) + uVar204;
  auVar134 = auVar8 * auVar72 + auVar134;
  auVar135._8_8_ = 0;
  auVar135._0_8_ = auVar134._0_8_;
  uVar197 = auVar134._8_8_;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_3[1];
  auVar73._8_8_ = 0;
  auVar73._0_8_ = param_2[2];
  uVar192 = uVar191 + uVar197;
  auVar135 = auVar9 * auVar73 + auVar135;
  auVar136._8_8_ = 0;
  auVar136._0_8_ = auVar135._0_8_;
  uVar193 = auVar135._8_8_;
  uVar196 = uVar192 + uVar193;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = *param_3;
  auVar74._8_8_ = 0;
  auVar74._0_8_ = param_2[3];
  auVar136 = auVar10 * auVar74 + auVar136;
  param_1[3] = auVar136._0_8_;
  uVar198 = auVar136._8_8_;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = *param_3;
  auVar75._8_8_ = 0;
  auVar75._0_8_ = param_2[4];
  uVar207 = uVar196 + uVar198;
  auVar137._8_8_ = 0;
  auVar137._0_8_ = uVar207;
  auVar137 = auVar11 * auVar75 + auVar137;
  auVar138._8_8_ = 0;
  auVar138._0_8_ = auVar137._0_8_;
  uVar201 = auVar137._8_8_;
  uVar192 = uVar201 + (ulonglong)(uVar191 < uVar204) + (ulonglong)(uVar192 < uVar197) +
                      (ulonglong)(uVar196 < uVar193) + (ulonglong)(uVar207 < uVar198);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_3[1];
  auVar76._8_8_ = 0;
  auVar76._0_8_ = param_2[3];
  auVar138 = auVar12 * auVar76 + auVar138;
  auVar139._8_8_ = 0;
  auVar139._0_8_ = auVar138._0_8_;
  uVar196 = auVar138._8_8_;
  uVar191 = uVar192 + uVar196;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = param_3[2];
  auVar77._8_8_ = 0;
  auVar77._0_8_ = param_2[2];
  auVar139 = auVar13 * auVar77 + auVar139;
  auVar140._8_8_ = 0;
  auVar140._0_8_ = auVar139._0_8_;
  uVar193 = auVar139._8_8_;
  uVar204 = uVar191 + uVar193;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = param_3[3];
  auVar78._8_8_ = 0;
  auVar78._0_8_ = param_2[1];
  auVar140 = auVar14 * auVar78 + auVar140;
  auVar141._8_8_ = 0;
  auVar141._0_8_ = auVar140._0_8_;
  uVar207 = auVar140._8_8_;
  uVar199 = uVar204 + uVar207;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = param_3[4];
  auVar79._8_8_ = 0;
  auVar79._0_8_ = *param_2;
  auVar141 = auVar15 * auVar79 + auVar141;
  param_1[4] = auVar141._0_8_;
  uVar197 = auVar141._8_8_;
  uVar200 = uVar199 + uVar197;
  auVar142._8_8_ = 0;
  auVar142._0_8_ = uVar200;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = param_3[5];
  auVar80._8_8_ = 0;
  auVar80._0_8_ = *param_2;
  auVar142 = auVar16 * auVar80 + auVar142;
  auVar143._8_8_ = 0;
  auVar143._0_8_ = auVar142._0_8_;
  uVar198 = auVar142._8_8_;
  uVar207 = (ulonglong)(uVar192 < uVar201) + (ulonglong)(uVar191 < uVar196) +
            (ulonglong)(uVar204 < uVar193) + (ulonglong)(uVar199 < uVar207) +
            (ulonglong)(uVar200 < uVar197) + uVar198;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = param_3[4];
  auVar81._8_8_ = 0;
  auVar81._0_8_ = param_2[1];
  auVar143 = auVar17 * auVar81 + auVar143;
  auVar144._8_8_ = 0;
  auVar144._0_8_ = auVar143._0_8_;
  uVar191 = auVar143._8_8_;
  uVar197 = uVar207 + uVar191;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = param_3[3];
  auVar82._8_8_ = 0;
  auVar82._0_8_ = param_2[2];
  auVar144 = auVar18 * auVar82 + auVar144;
  auVar145._8_8_ = 0;
  auVar145._0_8_ = auVar144._0_8_;
  uVar192 = auVar144._8_8_;
  uVar199 = uVar197 + uVar192;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = param_3[2];
  auVar83._8_8_ = 0;
  auVar83._0_8_ = param_2[3];
  auVar145 = auVar19 * auVar83 + auVar145;
  auVar146._8_8_ = 0;
  auVar146._0_8_ = auVar145._0_8_;
  uVar196 = auVar145._8_8_;
  uVar200 = uVar199 + uVar196;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = param_3[1];
  auVar84._8_8_ = 0;
  auVar84._0_8_ = param_2[4];
  auVar146 = auVar20 * auVar84 + auVar146;
  auVar147._8_8_ = 0;
  auVar147._0_8_ = auVar146._0_8_;
  uVar193 = auVar146._8_8_;
  uVar202 = uVar200 + uVar193;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = *param_3;
  auVar85._8_8_ = 0;
  auVar85._0_8_ = param_2[5];
  auVar147 = auVar21 * auVar85 + auVar147;
  param_1[5] = auVar147._0_8_;
  uVar201 = auVar147._8_8_;
  uVar203 = uVar202 + uVar201;
  auVar148._8_8_ = 0;
  auVar148._0_8_ = uVar203;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = *param_3;
  auVar86._8_8_ = 0;
  auVar86._0_8_ = param_2[6];
  auVar148 = auVar22 * auVar86 + auVar148;
  auVar149._8_8_ = 0;
  auVar149._0_8_ = auVar148._0_8_;
  uVar204 = auVar148._8_8_;
  uVar191 = (ulonglong)(uVar207 < uVar198) + (ulonglong)(uVar197 < uVar191) +
            (ulonglong)(uVar199 < uVar192) + (ulonglong)(uVar200 < uVar196) +
            (ulonglong)(uVar202 < uVar193) + (ulonglong)(uVar203 < uVar201) + uVar204;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = param_3[1];
  auVar87._8_8_ = 0;
  auVar87._0_8_ = param_2[5];
  auVar149 = auVar23 * auVar87 + auVar149;
  auVar150._8_8_ = 0;
  auVar150._0_8_ = auVar149._0_8_;
  uVar198 = auVar149._8_8_;
  uVar192 = uVar191 + uVar198;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = param_3[2];
  auVar88._8_8_ = 0;
  auVar88._0_8_ = param_2[4];
  auVar150 = auVar24 * auVar88 + auVar150;
  auVar151._8_8_ = 0;
  auVar151._0_8_ = auVar150._0_8_;
  uVar199 = auVar150._8_8_;
  uVar196 = uVar192 + uVar199;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = param_3[3];
  auVar89._8_8_ = 0;
  auVar89._0_8_ = param_2[3];
  auVar151 = auVar25 * auVar89 + auVar151;
  auVar152._8_8_ = 0;
  auVar152._0_8_ = auVar151._0_8_;
  uVar200 = auVar151._8_8_;
  uVar193 = uVar196 + uVar200;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = param_3[4];
  auVar90._8_8_ = 0;
  auVar90._0_8_ = param_2[2];
  auVar152 = auVar26 * auVar90 + auVar152;
  auVar153._8_8_ = 0;
  auVar153._0_8_ = auVar152._0_8_;
  uVar202 = auVar152._8_8_;
  uVar201 = uVar193 + uVar202;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = param_3[5];
  auVar91._8_8_ = 0;
  auVar91._0_8_ = param_2[1];
  auVar153 = auVar27 * auVar91 + auVar153;
  auVar154._8_8_ = 0;
  auVar154._0_8_ = auVar153._0_8_;
  uVar203 = auVar153._8_8_;
  uVar207 = uVar201 + uVar203;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = param_3[6];
  auVar92._8_8_ = 0;
  auVar92._0_8_ = *param_2;
  auVar154 = auVar28 * auVar92 + auVar154;
  param_1[6] = auVar154._0_8_;
  uVar194 = auVar154._8_8_;
  uVar197 = uVar207 + uVar194;
  auVar155._8_8_ = 0;
  auVar155._0_8_ = uVar197;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = param_3[7];
  auVar93._8_8_ = 0;
  auVar93._0_8_ = *param_2;
  auVar155 = auVar29 * auVar93 + auVar155;
  auVar156._8_8_ = 0;
  auVar156._0_8_ = auVar155._0_8_;
  uVar195 = auVar155._8_8_;
  uVar204 = (ulonglong)(uVar191 < uVar204) + (ulonglong)(uVar192 < uVar198) +
            (ulonglong)(uVar196 < uVar199) + (ulonglong)(uVar193 < uVar200) +
            (ulonglong)(uVar201 < uVar202) + (ulonglong)(uVar207 < uVar203) +
            (ulonglong)(uVar197 < uVar194) + uVar195;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = param_3[6];
  auVar94._8_8_ = 0;
  auVar94._0_8_ = param_2[1];
  auVar156 = auVar30 * auVar94 + auVar156;
  auVar157._8_8_ = 0;
  auVar157._0_8_ = auVar156._0_8_;
  uVar191 = auVar156._8_8_;
  uVar199 = uVar204 + uVar191;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = param_3[5];
  auVar95._8_8_ = 0;
  auVar95._0_8_ = param_2[2];
  auVar157 = auVar31 * auVar95 + auVar157;
  auVar158._8_8_ = 0;
  auVar158._0_8_ = auVar157._0_8_;
  uVar192 = auVar157._8_8_;
  uVar200 = uVar199 + uVar192;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = param_3[4];
  auVar96._8_8_ = 0;
  auVar96._0_8_ = param_2[3];
  auVar158 = auVar32 * auVar96 + auVar158;
  auVar159._8_8_ = 0;
  auVar159._0_8_ = auVar158._0_8_;
  uVar196 = auVar158._8_8_;
  uVar202 = uVar200 + uVar196;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = param_3[3];
  auVar97._8_8_ = 0;
  auVar97._0_8_ = param_2[4];
  auVar159 = auVar33 * auVar97 + auVar159;
  auVar160._8_8_ = 0;
  auVar160._0_8_ = auVar159._0_8_;
  uVar193 = auVar159._8_8_;
  uVar203 = uVar202 + uVar193;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = param_3[2];
  auVar98._8_8_ = 0;
  auVar98._0_8_ = param_2[5];
  auVar160 = auVar34 * auVar98 + auVar160;
  auVar161._8_8_ = 0;
  auVar161._0_8_ = auVar160._0_8_;
  uVar201 = auVar160._8_8_;
  uVar194 = uVar203 + uVar201;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = param_3[1];
  auVar99._8_8_ = 0;
  auVar99._0_8_ = param_2[6];
  auVar161 = auVar35 * auVar99 + auVar161;
  auVar162._8_8_ = 0;
  auVar162._0_8_ = auVar161._0_8_;
  uVar207 = auVar161._8_8_;
  uVar205 = uVar194 + uVar207;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = *param_3;
  auVar100._8_8_ = 0;
  auVar100._0_8_ = param_2[7];
  auVar162 = auVar36 * auVar100 + auVar162;
  param_1[7] = auVar162._0_8_;
  uVar197 = auVar162._8_8_;
  uVar206 = uVar205 + uVar197;
  auVar163._8_8_ = 0;
  auVar163._0_8_ = uVar206;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = param_3[1];
  auVar101._8_8_ = 0;
  auVar101._0_8_ = param_2[7];
  auVar163 = auVar37 * auVar101 + auVar163;
  auVar164._8_8_ = 0;
  auVar164._0_8_ = auVar163._0_8_;
  uVar198 = auVar163._8_8_;
  uVar204 = (ulonglong)(uVar204 < uVar195) + (ulonglong)(uVar199 < uVar191) +
            (ulonglong)(uVar200 < uVar192) + (ulonglong)(uVar202 < uVar196) +
            (ulonglong)(uVar203 < uVar193) + (ulonglong)(uVar194 < uVar201) +
            (ulonglong)(uVar205 < uVar207) + (ulonglong)(uVar206 < uVar197) + uVar198;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = param_3[2];
  auVar102._8_8_ = 0;
  auVar102._0_8_ = param_2[6];
  auVar164 = auVar38 * auVar102 + auVar164;
  auVar165._8_8_ = 0;
  auVar165._0_8_ = auVar164._0_8_;
  uVar191 = auVar164._8_8_;
  uVar199 = uVar204 + uVar191;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = param_3[3];
  auVar103._8_8_ = 0;
  auVar103._0_8_ = param_2[5];
  auVar165 = auVar39 * auVar103 + auVar165;
  auVar166._8_8_ = 0;
  auVar166._0_8_ = auVar165._0_8_;
  uVar192 = auVar165._8_8_;
  uVar200 = uVar199 + uVar192;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = param_3[4];
  auVar104._8_8_ = 0;
  auVar104._0_8_ = param_2[4];
  auVar166 = auVar40 * auVar104 + auVar166;
  auVar167._8_8_ = 0;
  auVar167._0_8_ = auVar166._0_8_;
  uVar196 = auVar166._8_8_;
  uVar202 = uVar200 + uVar196;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = param_3[5];
  auVar105._8_8_ = 0;
  auVar105._0_8_ = param_2[3];
  auVar167 = auVar41 * auVar105 + auVar167;
  auVar168._8_8_ = 0;
  auVar168._0_8_ = auVar167._0_8_;
  uVar193 = auVar167._8_8_;
  uVar203 = uVar202 + uVar193;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = param_3[6];
  auVar106._8_8_ = 0;
  auVar106._0_8_ = param_2[2];
  auVar168 = auVar42 * auVar106 + auVar168;
  auVar169._8_8_ = 0;
  auVar169._0_8_ = auVar168._0_8_;
  uVar201 = auVar168._8_8_;
  uVar194 = uVar203 + uVar201;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = param_3[7];
  auVar107._8_8_ = 0;
  auVar107._0_8_ = param_2[1];
  auVar169 = auVar43 * auVar107 + auVar169;
  param_1[8] = auVar169._0_8_;
  uVar207 = auVar169._8_8_;
  uVar195 = uVar194 + uVar207;
  auVar170._8_8_ = 0;
  auVar170._0_8_ = uVar195;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = param_3[7];
  auVar108._8_8_ = 0;
  auVar108._0_8_ = param_2[2];
  auVar170 = auVar44 * auVar108 + auVar170;
  auVar171._8_8_ = 0;
  auVar171._0_8_ = auVar170._0_8_;
  uVar197 = auVar170._8_8_;
  uVar198 = (ulonglong)(uVar204 < uVar198) + (ulonglong)(uVar199 < uVar191) +
            (ulonglong)(uVar200 < uVar192) + (ulonglong)(uVar202 < uVar196) +
            (ulonglong)(uVar203 < uVar193) + (ulonglong)(uVar194 < uVar201) +
            (ulonglong)(uVar195 < uVar207) + uVar197;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = param_3[6];
  auVar109._8_8_ = 0;
  auVar109._0_8_ = param_2[3];
  auVar171 = auVar45 * auVar109 + auVar171;
  auVar172._8_8_ = 0;
  auVar172._0_8_ = auVar171._0_8_;
  uVar191 = auVar171._8_8_;
  uVar204 = uVar198 + uVar191;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = param_3[5];
  auVar110._8_8_ = 0;
  auVar110._0_8_ = param_2[4];
  auVar172 = auVar46 * auVar110 + auVar172;
  auVar173._8_8_ = 0;
  auVar173._0_8_ = auVar172._0_8_;
  uVar192 = auVar172._8_8_;
  uVar199 = uVar204 + uVar192;
  auVar47._8_8_ = 0;
  auVar47._0_8_ = param_3[4];
  auVar111._8_8_ = 0;
  auVar111._0_8_ = param_2[5];
  auVar173 = auVar47 * auVar111 + auVar173;
  auVar174._8_8_ = 0;
  auVar174._0_8_ = auVar173._0_8_;
  uVar196 = auVar173._8_8_;
  uVar200 = uVar199 + uVar196;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = param_3[3];
  auVar112._8_8_ = 0;
  auVar112._0_8_ = param_2[6];
  auVar174 = auVar48 * auVar112 + auVar174;
  auVar175._8_8_ = 0;
  auVar175._0_8_ = auVar174._0_8_;
  uVar193 = auVar174._8_8_;
  uVar202 = uVar200 + uVar193;
  auVar49._8_8_ = 0;
  auVar49._0_8_ = param_3[2];
  auVar113._8_8_ = 0;
  auVar113._0_8_ = param_2[7];
  auVar175 = auVar49 * auVar113 + auVar175;
  param_1[9] = auVar175._0_8_;
  uVar201 = auVar175._8_8_;
  uVar203 = uVar202 + uVar201;
  auVar176._8_8_ = 0;
  auVar176._0_8_ = uVar203;
  auVar50._8_8_ = 0;
  auVar50._0_8_ = param_3[3];
  auVar114._8_8_ = 0;
  auVar114._0_8_ = param_2[7];
  auVar176 = auVar50 * auVar114 + auVar176;
  auVar177._8_8_ = 0;
  auVar177._0_8_ = auVar176._0_8_;
  uVar207 = auVar176._8_8_;
  uVar191 = (ulonglong)(uVar198 < uVar197) + (ulonglong)(uVar204 < uVar191) +
            (ulonglong)(uVar199 < uVar192) + (ulonglong)(uVar200 < uVar196) +
            (ulonglong)(uVar202 < uVar193) + (ulonglong)(uVar203 < uVar201) + uVar207;
  auVar51._8_8_ = 0;
  auVar51._0_8_ = param_3[4];
  auVar115._8_8_ = 0;
  auVar115._0_8_ = param_2[6];
  auVar177 = auVar51 * auVar115 + auVar177;
  auVar178._8_8_ = 0;
  auVar178._0_8_ = auVar177._0_8_;
  uVar197 = auVar177._8_8_;
  uVar192 = uVar191 + uVar197;
  auVar52._8_8_ = 0;
  auVar52._0_8_ = param_3[5];
  auVar116._8_8_ = 0;
  auVar116._0_8_ = param_2[5];
  auVar178 = auVar52 * auVar116 + auVar178;
  auVar179._8_8_ = 0;
  auVar179._0_8_ = auVar178._0_8_;
  uVar198 = auVar178._8_8_;
  uVar196 = uVar192 + uVar198;
  auVar53._8_8_ = 0;
  auVar53._0_8_ = param_3[6];
  auVar117._8_8_ = 0;
  auVar117._0_8_ = param_2[4];
  auVar179 = auVar53 * auVar117 + auVar179;
  auVar180._8_8_ = 0;
  auVar180._0_8_ = auVar179._0_8_;
  uVar204 = auVar179._8_8_;
  uVar193 = uVar196 + uVar204;
  auVar54._8_8_ = 0;
  auVar54._0_8_ = param_3[7];
  auVar118._8_8_ = 0;
  auVar118._0_8_ = param_2[3];
  auVar180 = auVar54 * auVar118 + auVar180;
  param_1[10] = auVar180._0_8_;
  uVar199 = auVar180._8_8_;
  uVar201 = uVar193 + uVar199;
  auVar181._8_8_ = 0;
  auVar181._0_8_ = uVar201;
  auVar55._8_8_ = 0;
  auVar55._0_8_ = param_3[7];
  auVar119._8_8_ = 0;
  auVar119._0_8_ = param_2[4];
  auVar181 = auVar55 * auVar119 + auVar181;
  auVar182._8_8_ = 0;
  auVar182._0_8_ = auVar181._0_8_;
  uVar200 = auVar181._8_8_;
  uVar201 = (ulonglong)(uVar191 < uVar207) + (ulonglong)(uVar192 < uVar197) +
            (ulonglong)(uVar196 < uVar198) + (ulonglong)(uVar193 < uVar204) +
            (ulonglong)(uVar201 < uVar199) + uVar200;
  auVar56._8_8_ = 0;
  auVar56._0_8_ = param_3[6];
  auVar120._8_8_ = 0;
  auVar120._0_8_ = param_2[5];
  auVar182 = auVar56 * auVar120 + auVar182;
  auVar183._8_8_ = 0;
  auVar183._0_8_ = auVar182._0_8_;
  uVar191 = auVar182._8_8_;
  uVar207 = uVar201 + uVar191;
  auVar57._8_8_ = 0;
  auVar57._0_8_ = param_3[5];
  auVar121._8_8_ = 0;
  auVar121._0_8_ = param_2[6];
  auVar183 = auVar57 * auVar121 + auVar183;
  auVar184._8_8_ = 0;
  auVar184._0_8_ = auVar183._0_8_;
  uVar192 = auVar183._8_8_;
  uVar197 = uVar207 + uVar192;
  auVar58._8_8_ = 0;
  auVar58._0_8_ = param_3[4];
  auVar122._8_8_ = 0;
  auVar122._0_8_ = param_2[7];
  auVar184 = auVar58 * auVar122 + auVar184;
  uVar196 = auVar184._8_8_;
  uVar198 = uVar197 + uVar196;
  auVar185._8_8_ = 0;
  auVar185._0_8_ = uVar198;
  param_1[0xb] = auVar184._0_8_;
  auVar59._8_8_ = 0;
  auVar59._0_8_ = param_3[5];
  auVar123._8_8_ = 0;
  auVar123._0_8_ = param_2[7];
  auVar185 = auVar59 * auVar123 + auVar185;
  auVar186._8_8_ = 0;
  auVar186._0_8_ = auVar185._0_8_;
  uVar193 = auVar185._8_8_;
  uVar201 = (ulonglong)(uVar201 < uVar200) + (ulonglong)(uVar207 < uVar191) +
            (ulonglong)(uVar197 < uVar192) + (ulonglong)(uVar198 < uVar196) + uVar193;
  auVar60._8_8_ = 0;
  auVar60._0_8_ = param_3[6];
  auVar124._8_8_ = 0;
  auVar124._0_8_ = param_2[6];
  auVar186 = auVar60 * auVar124 + auVar186;
  auVar187._8_8_ = 0;
  auVar187._0_8_ = auVar186._0_8_;
  uVar191 = auVar186._8_8_;
  uVar207 = uVar201 + uVar191;
  auVar61._8_8_ = 0;
  auVar61._0_8_ = param_3[7];
  auVar125._8_8_ = 0;
  auVar125._0_8_ = param_2[5];
  auVar187 = auVar61 * auVar125 + auVar187;
  param_1[0xc] = auVar187._0_8_;
  uVar192 = auVar187._8_8_;
  uVar197 = uVar207 + uVar192;
  auVar188._8_8_ = 0;
  auVar188._0_8_ = uVar197;
  auVar62._8_8_ = 0;
  auVar62._0_8_ = param_3[7];
  auVar126._8_8_ = 0;
  auVar126._0_8_ = param_2[6];
  auVar188 = auVar62 * auVar126 + auVar188;
  auVar189._8_8_ = 0;
  auVar189._0_8_ = auVar188._0_8_;
  uVar196 = auVar188._8_8_;
  uVar191 = (ulonglong)(uVar201 < uVar193) + (ulonglong)(uVar207 < uVar191) +
            (ulonglong)(uVar197 < uVar192) + uVar196;
  auVar63._8_8_ = 0;
  auVar63._0_8_ = param_3[6];
  auVar127._8_8_ = 0;
  auVar127._0_8_ = param_2[7];
  auVar189 = auVar63 * auVar127 + auVar189;
  param_1[0xd] = auVar189._0_8_;
  uVar193 = auVar189._8_8_;
  uVar192 = uVar191 + uVar193;
  auVar190._8_8_ = (ulonglong)(uVar191 < uVar196) + (ulonglong)(uVar192 < uVar193);
  auVar190._0_8_ = uVar192;
  auVar64._8_8_ = 0;
  auVar64._0_8_ = param_3[7];
  auVar128._8_8_ = 0;
  auVar128._0_8_ = param_2[7];
  *(undefined1 (*) [16])(param_1 + 0xe) = auVar64 * auVar128 + auVar190;
  return;
}



// FUNCTION 143d7f8e0 bn_mul_words body=257 status=ok
// SIG undefined bn_mul_words(void)

ulonglong bn_mul_words(ulonglong *param_1,ulonglong *param_2,uint param_3,ulonglong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  
  uVar14 = 0;
  if (0 < (int)param_3) {
    for (; (param_3 & 0xfffffffc) != 0; param_3 = param_3 - 4) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = *param_2;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = param_4;
      uVar12 = SUB168(auVar1 * auVar6,0);
      uVar14 = uVar12 + uVar14;
      *param_1 = uVar14;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = param_2[1];
      auVar7._8_8_ = 0;
      auVar7._0_8_ = param_4;
      uVar13 = SUB168(auVar2 * auVar7,0);
      uVar12 = uVar13 + SUB168(auVar1 * auVar6,8) + (ulonglong)(uVar14 < uVar12);
      param_1[1] = uVar12;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = param_2[2];
      auVar8._8_8_ = 0;
      auVar8._0_8_ = param_4;
      uVar14 = SUB168(auVar3 * auVar8,0);
      uVar13 = uVar14 + SUB168(auVar2 * auVar7,8) + (ulonglong)(uVar12 < uVar13);
      param_1[2] = uVar13;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = param_2[3];
      auVar9._8_8_ = 0;
      auVar9._0_8_ = param_4;
      uVar12 = SUB168(auVar4 * auVar9,0);
      uVar14 = uVar12 + SUB168(auVar3 * auVar8,8) + (ulonglong)(uVar13 < uVar14);
      param_1[3] = uVar14;
      uVar14 = SUB168(auVar4 * auVar9,8) + (ulonglong)(uVar14 < uVar12);
      param_2 = param_2 + 4;
      param_1 = param_1 + 4;
    }
    if (param_3 != 0) {
      puVar15 = param_2;
      do {
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar14;
        uVar14 = *puVar15;
        puVar15 = puVar15 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar14;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = param_4;
        auVar11 = auVar5 * auVar10 + auVar11;
        *(longlong *)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)puVar15) =
             auVar11._0_8_;
        uVar14 = auVar11._8_8_;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
    return uVar14;
  }
  return 0;
}



// FUNCTION 143d7f9f0 bn_sqr_comba4 body=442 status=ok
// SIG undefined bn_sqr_comba4(void)

void bn_sqr_comba4(undefined8 *param_1,ulonglong *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *param_2;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = *param_2;
  *param_1 = SUB168(auVar1 * auVar11,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *param_2;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_2[1];
  auVar2 = auVar2 * auVar12;
  uVar39 = SUB168(auVar1 * auVar11,8) + auVar2._0_8_;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar39;
  param_1[1] = SUB168(auVar2 + auVar21,0);
  uVar36 = SUB168(auVar2 + auVar21,8);
  uVar39 = auVar2._8_8_ + (ulonglong)(uVar39 < auVar2._0_8_) + uVar36;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar39;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2[1];
  auVar13._8_8_ = 0;
  auVar13._0_8_ = param_2[1];
  auVar22 = auVar3 * auVar13 + auVar22;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = auVar22._0_8_;
  uVar37 = auVar22._8_8_;
  uVar36 = uVar37 + (uVar39 < uVar36);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *param_2;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = param_2[2];
  auVar30 = auVar4 * auVar14 + auVar30;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = auVar30._0_8_;
  uVar39 = auVar30._8_8_;
  uVar40 = uVar36 + uVar39;
  auVar23 = auVar4 * auVar14 + auVar23;
  param_1[2] = auVar23._0_8_;
  uVar38 = auVar23._8_8_;
  uVar41 = uVar40 + uVar38;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar41;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = *param_2;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = param_2[3];
  auVar31 = auVar5 * auVar15 + auVar31;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = auVar31._0_8_;
  uVar35 = auVar31._8_8_;
  uVar40 = (ulonglong)(uVar36 < uVar37) + (ulonglong)(uVar40 < uVar39) +
           (ulonglong)(uVar41 < uVar38) + uVar35;
  auVar24 = auVar5 * auVar15 + auVar24;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = auVar24._0_8_;
  uVar39 = auVar24._8_8_;
  uVar41 = uVar40 + uVar39;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_2[1];
  auVar16._8_8_ = 0;
  auVar16._0_8_ = param_2[2];
  auVar32 = auVar6 * auVar16 + auVar32;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = auVar32._0_8_;
  uVar36 = auVar32._8_8_;
  uVar42 = uVar41 + uVar36;
  auVar25 = auVar6 * auVar16 + auVar25;
  param_1[3] = auVar25._0_8_;
  uVar37 = auVar25._8_8_;
  uVar43 = uVar42 + uVar37;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar43;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_2[2];
  auVar17._8_8_ = 0;
  auVar17._0_8_ = param_2[2];
  auVar26 = auVar7 * auVar17 + auVar26;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = auVar26._0_8_;
  uVar38 = auVar26._8_8_;
  uVar36 = uVar38 + (ulonglong)(uVar40 < uVar35) + (ulonglong)(uVar41 < uVar39) +
                    (ulonglong)(uVar42 < uVar36) + (ulonglong)(uVar43 < uVar37);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_2[1];
  auVar18._8_8_ = 0;
  auVar18._0_8_ = param_2[3];
  auVar33 = auVar8 * auVar18 + auVar33;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = auVar33._0_8_;
  uVar39 = auVar33._8_8_;
  uVar40 = uVar36 + uVar39;
  auVar27 = auVar8 * auVar18 + auVar27;
  param_1[4] = auVar27._0_8_;
  uVar37 = auVar27._8_8_;
  uVar41 = uVar40 + uVar37;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar41;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_2[2];
  auVar19._8_8_ = 0;
  auVar19._0_8_ = param_2[3];
  auVar28 = auVar9 * auVar19 + auVar28;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = auVar28._0_8_;
  uVar35 = auVar28._8_8_;
  uVar39 = (ulonglong)(uVar36 < uVar38) + (ulonglong)(uVar40 < uVar39) +
           (ulonglong)(uVar41 < uVar37) + uVar35;
  auVar34 = auVar9 * auVar19 + auVar34;
  param_1[5] = auVar34._0_8_;
  uVar36 = auVar34._8_8_;
  uVar37 = uVar39 + uVar36;
  auVar29._8_8_ = (ulonglong)(uVar39 < uVar35) + (ulonglong)(uVar37 < uVar36);
  auVar29._0_8_ = uVar37;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_2[3];
  auVar20._8_8_ = 0;
  auVar20._0_8_ = param_2[3];
  *(undefined1 (*) [16])(param_1 + 6) = auVar10 * auVar20 + auVar29;
  return;
}



// FUNCTION 143d7fbb0 bn_sqr_comba8 body=1645 status=ok
// SIG undefined bn_sqr_comba8(void)

void bn_sqr_comba8(undefined8 *param_1,ulonglong *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  ulonglong uVar135;
  ulonglong uVar136;
  ulonglong uVar137;
  ulonglong uVar138;
  ulonglong uVar139;
  ulonglong uVar140;
  ulonglong uVar141;
  ulonglong uVar142;
  ulonglong uVar143;
  ulonglong uVar144;
  ulonglong uVar145;
  ulonglong uVar146;
  ulonglong uVar147;
  ulonglong uVar148;
  ulonglong uVar149;
  ulonglong uVar150;
  ulonglong uVar151;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *param_2;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = *param_2;
  *param_1 = SUB168(auVar1 * auVar37,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *param_2;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = param_2[1];
  auVar2 = auVar2 * auVar38;
  uVar143 = SUB168(auVar1 * auVar37,8) + auVar2._0_8_;
  auVar73._8_8_ = 0;
  auVar73._0_8_ = uVar143;
  param_1[1] = SUB168(auVar2 + auVar73,0);
  uVar136 = SUB168(auVar2 + auVar73,8);
  uVar143 = auVar2._8_8_ + (ulonglong)(uVar143 < auVar2._0_8_) + uVar136;
  auVar74._8_8_ = 0;
  auVar74._0_8_ = uVar143;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2[1];
  auVar39._8_8_ = 0;
  auVar39._0_8_ = param_2[1];
  auVar74 = auVar3 * auVar39 + auVar74;
  auVar108._8_8_ = 0;
  auVar108._0_8_ = auVar74._0_8_;
  uVar137 = auVar74._8_8_;
  uVar136 = uVar137 + (uVar143 < uVar136);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *param_2;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = param_2[2];
  auVar108 = auVar4 * auVar40 + auVar108;
  auVar75._8_8_ = 0;
  auVar75._0_8_ = auVar108._0_8_;
  uVar143 = auVar108._8_8_;
  uVar144 = uVar136 + uVar143;
  auVar75 = auVar4 * auVar40 + auVar75;
  param_1[2] = auVar75._0_8_;
  uVar138 = auVar75._8_8_;
  uVar145 = uVar144 + uVar138;
  auVar109._8_8_ = 0;
  auVar109._0_8_ = uVar145;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = *param_2;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = param_2[3];
  auVar109 = auVar5 * auVar41 + auVar109;
  auVar76._8_8_ = 0;
  auVar76._0_8_ = auVar109._0_8_;
  uVar135 = auVar109._8_8_;
  uVar144 = (ulonglong)(uVar136 < uVar137) + (ulonglong)(uVar144 < uVar143) +
            (ulonglong)(uVar145 < uVar138) + uVar135;
  auVar76 = auVar5 * auVar41 + auVar76;
  auVar110._8_8_ = 0;
  auVar110._0_8_ = auVar76._0_8_;
  uVar143 = auVar76._8_8_;
  uVar145 = uVar144 + uVar143;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_2[1];
  auVar42._8_8_ = 0;
  auVar42._0_8_ = param_2[2];
  auVar110 = auVar6 * auVar42 + auVar110;
  auVar77._8_8_ = 0;
  auVar77._0_8_ = auVar110._0_8_;
  uVar136 = auVar110._8_8_;
  uVar148 = uVar145 + uVar136;
  auVar77 = auVar6 * auVar42 + auVar77;
  param_1[3] = auVar77._0_8_;
  uVar137 = auVar77._8_8_;
  uVar149 = uVar148 + uVar137;
  auVar78._8_8_ = 0;
  auVar78._0_8_ = uVar149;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_2[2];
  auVar43._8_8_ = 0;
  auVar43._0_8_ = param_2[2];
  auVar78 = auVar7 * auVar43 + auVar78;
  auVar111._8_8_ = 0;
  auVar111._0_8_ = auVar78._0_8_;
  uVar138 = auVar78._8_8_;
  uVar136 = uVar138 + (ulonglong)(uVar144 < uVar135) + (ulonglong)(uVar145 < uVar143) +
                      (ulonglong)(uVar148 < uVar136) + (ulonglong)(uVar149 < uVar137);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_2[1];
  auVar44._8_8_ = 0;
  auVar44._0_8_ = param_2[3];
  auVar111 = auVar8 * auVar44 + auVar111;
  auVar79._8_8_ = 0;
  auVar79._0_8_ = auVar111._0_8_;
  uVar143 = auVar111._8_8_;
  uVar148 = uVar136 + uVar143;
  auVar79 = auVar8 * auVar44 + auVar79;
  auVar112._8_8_ = 0;
  auVar112._0_8_ = auVar79._0_8_;
  uVar144 = auVar79._8_8_;
  uVar149 = uVar148 + uVar144;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = *param_2;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = param_2[4];
  auVar112 = auVar9 * auVar45 + auVar112;
  auVar80._8_8_ = 0;
  auVar80._0_8_ = auVar112._0_8_;
  uVar135 = auVar112._8_8_;
  uVar146 = uVar149 + uVar135;
  auVar80 = auVar9 * auVar45 + auVar80;
  param_1[4] = auVar80._0_8_;
  uVar145 = auVar80._8_8_;
  uVar147 = uVar146 + uVar145;
  auVar113._8_8_ = 0;
  auVar113._0_8_ = uVar147;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = *param_2;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = param_2[5];
  auVar113 = auVar10 * auVar46 + auVar113;
  auVar81._8_8_ = 0;
  auVar81._0_8_ = auVar113._0_8_;
  uVar137 = auVar113._8_8_;
  uVar148 = (ulonglong)(uVar136 < uVar138) + (ulonglong)(uVar148 < uVar143) +
            (ulonglong)(uVar149 < uVar144) + (ulonglong)(uVar146 < uVar135) +
            (ulonglong)(uVar147 < uVar145) + uVar137;
  auVar81 = auVar10 * auVar46 + auVar81;
  auVar114._8_8_ = 0;
  auVar114._0_8_ = auVar81._0_8_;
  uVar135 = auVar81._8_8_;
  uVar149 = uVar148 + uVar135;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_2[1];
  auVar47._8_8_ = 0;
  auVar47._0_8_ = param_2[4];
  auVar114 = auVar11 * auVar47 + auVar114;
  auVar82._8_8_ = 0;
  auVar82._0_8_ = auVar114._0_8_;
  uVar136 = auVar114._8_8_;
  uVar146 = uVar149 + uVar136;
  auVar82 = auVar11 * auVar47 + auVar82;
  auVar115._8_8_ = 0;
  auVar115._0_8_ = auVar82._0_8_;
  uVar138 = auVar82._8_8_;
  uVar147 = uVar146 + uVar138;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_2[2];
  auVar48._8_8_ = 0;
  auVar48._0_8_ = param_2[3];
  auVar115 = auVar12 * auVar48 + auVar115;
  auVar83._8_8_ = 0;
  auVar83._0_8_ = auVar115._0_8_;
  uVar143 = auVar115._8_8_;
  uVar141 = uVar147 + uVar143;
  auVar83 = auVar12 * auVar48 + auVar83;
  uVar144 = auVar83._8_8_;
  uVar142 = uVar141 + uVar144;
  auVar84._8_8_ = 0;
  auVar84._0_8_ = uVar142;
  param_1[5] = auVar83._0_8_;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = param_2[3];
  auVar49._8_8_ = 0;
  auVar49._0_8_ = param_2[3];
  auVar84 = auVar13 * auVar49 + auVar84;
  auVar116._8_8_ = 0;
  auVar116._0_8_ = auVar84._0_8_;
  uVar145 = auVar84._8_8_;
  uVar149 = (ulonglong)(uVar148 < uVar137) + (ulonglong)(uVar149 < uVar135) +
            (ulonglong)(uVar146 < uVar136) + (ulonglong)(uVar147 < uVar138) +
            (ulonglong)(uVar141 < uVar143) + (ulonglong)(uVar142 < uVar144) + uVar145;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = param_2[2];
  auVar50._8_8_ = 0;
  auVar50._0_8_ = param_2[4];
  auVar116 = auVar14 * auVar50 + auVar116;
  auVar85._8_8_ = 0;
  auVar85._0_8_ = auVar116._0_8_;
  uVar136 = auVar116._8_8_;
  uVar146 = uVar149 + uVar136;
  auVar85 = auVar14 * auVar50 + auVar85;
  auVar117._8_8_ = 0;
  auVar117._0_8_ = auVar85._0_8_;
  uVar138 = auVar85._8_8_;
  uVar147 = uVar146 + uVar138;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = param_2[1];
  auVar51._8_8_ = 0;
  auVar51._0_8_ = param_2[5];
  auVar117 = auVar15 * auVar51 + auVar117;
  auVar86._8_8_ = 0;
  auVar86._0_8_ = auVar117._0_8_;
  uVar143 = auVar117._8_8_;
  uVar141 = uVar147 + uVar143;
  auVar86 = auVar15 * auVar51 + auVar86;
  auVar118._8_8_ = 0;
  auVar118._0_8_ = auVar86._0_8_;
  uVar144 = auVar86._8_8_;
  uVar142 = uVar141 + uVar144;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = *param_2;
  auVar52._8_8_ = 0;
  auVar52._0_8_ = param_2[6];
  auVar118 = auVar16 * auVar52 + auVar118;
  auVar87._8_8_ = 0;
  auVar87._0_8_ = auVar118._0_8_;
  uVar135 = auVar118._8_8_;
  uVar150 = uVar142 + uVar135;
  auVar87 = auVar16 * auVar52 + auVar87;
  param_1[6] = auVar87._0_8_;
  uVar148 = auVar87._8_8_;
  uVar151 = uVar150 + uVar148;
  auVar119._8_8_ = 0;
  auVar119._0_8_ = uVar151;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = *param_2;
  auVar53._8_8_ = 0;
  auVar53._0_8_ = param_2[7];
  auVar119 = auVar17 * auVar53 + auVar119;
  auVar88._8_8_ = 0;
  auVar88._0_8_ = auVar119._0_8_;
  uVar137 = auVar119._8_8_;
  uVar146 = (ulonglong)(uVar149 < uVar145) + (ulonglong)(uVar146 < uVar136) +
            (ulonglong)(uVar147 < uVar138) + (ulonglong)(uVar141 < uVar143) +
            (ulonglong)(uVar142 < uVar144) + (ulonglong)(uVar150 < uVar135) +
            (ulonglong)(uVar151 < uVar148) + uVar137;
  auVar88 = auVar17 * auVar53 + auVar88;
  auVar120._8_8_ = 0;
  auVar120._0_8_ = auVar88._0_8_;
  uVar138 = auVar88._8_8_;
  uVar147 = uVar146 + uVar138;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = param_2[1];
  auVar54._8_8_ = 0;
  auVar54._0_8_ = param_2[6];
  auVar120 = auVar18 * auVar54 + auVar120;
  auVar89._8_8_ = 0;
  auVar89._0_8_ = auVar120._0_8_;
  uVar136 = auVar120._8_8_;
  uVar141 = uVar147 + uVar136;
  auVar89 = auVar18 * auVar54 + auVar89;
  auVar121._8_8_ = 0;
  auVar121._0_8_ = auVar89._0_8_;
  uVar144 = auVar89._8_8_;
  uVar142 = uVar141 + uVar144;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = param_2[2];
  auVar55._8_8_ = 0;
  auVar55._0_8_ = param_2[5];
  auVar121 = auVar19 * auVar55 + auVar121;
  auVar90._8_8_ = 0;
  auVar90._0_8_ = auVar121._0_8_;
  uVar143 = auVar121._8_8_;
  uVar150 = uVar142 + uVar143;
  auVar90 = auVar19 * auVar55 + auVar90;
  auVar122._8_8_ = 0;
  auVar122._0_8_ = auVar90._0_8_;
  uVar145 = auVar90._8_8_;
  uVar151 = uVar150 + uVar145;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = param_2[3];
  auVar56._8_8_ = 0;
  auVar56._0_8_ = param_2[4];
  auVar122 = auVar20 * auVar56 + auVar122;
  auVar91._8_8_ = 0;
  auVar91._0_8_ = auVar122._0_8_;
  uVar135 = auVar122._8_8_;
  uVar139 = uVar151 + uVar135;
  auVar91 = auVar20 * auVar56 + auVar91;
  param_1[7] = auVar91._0_8_;
  uVar148 = auVar91._8_8_;
  uVar140 = uVar139 + uVar148;
  auVar92._8_8_ = 0;
  auVar92._0_8_ = uVar140;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = param_2[4];
  auVar57._8_8_ = 0;
  auVar57._0_8_ = param_2[4];
  auVar92 = auVar21 * auVar57 + auVar92;
  auVar123._8_8_ = 0;
  auVar123._0_8_ = auVar92._0_8_;
  uVar149 = auVar92._8_8_;
  uVar148 = (ulonglong)(uVar146 < uVar137) + (ulonglong)(uVar147 < uVar138) +
            (ulonglong)(uVar141 < uVar136) + (ulonglong)(uVar142 < uVar144) +
            (ulonglong)(uVar150 < uVar143) + (ulonglong)(uVar151 < uVar145) +
            (ulonglong)(uVar139 < uVar135) + (ulonglong)(uVar140 < uVar148) + uVar149;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = param_2[3];
  auVar58._8_8_ = 0;
  auVar58._0_8_ = param_2[5];
  auVar123 = auVar22 * auVar58 + auVar123;
  auVar93._8_8_ = 0;
  auVar93._0_8_ = auVar123._0_8_;
  uVar136 = auVar123._8_8_;
  uVar146 = uVar148 + uVar136;
  auVar93 = auVar22 * auVar58 + auVar93;
  auVar124._8_8_ = 0;
  auVar124._0_8_ = auVar93._0_8_;
  uVar138 = auVar93._8_8_;
  uVar147 = uVar146 + uVar138;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = param_2[2];
  auVar59._8_8_ = 0;
  auVar59._0_8_ = param_2[6];
  auVar124 = auVar23 * auVar59 + auVar124;
  auVar94._8_8_ = 0;
  auVar94._0_8_ = auVar124._0_8_;
  uVar143 = auVar124._8_8_;
  uVar141 = uVar147 + uVar143;
  auVar94 = auVar23 * auVar59 + auVar94;
  auVar125._8_8_ = 0;
  auVar125._0_8_ = auVar94._0_8_;
  uVar144 = auVar94._8_8_;
  uVar142 = uVar141 + uVar144;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = param_2[1];
  auVar60._8_8_ = 0;
  auVar60._0_8_ = param_2[7];
  auVar125 = auVar24 * auVar60 + auVar125;
  auVar95._8_8_ = 0;
  auVar95._0_8_ = auVar125._0_8_;
  uVar135 = auVar125._8_8_;
  uVar150 = uVar142 + uVar135;
  auVar95 = auVar24 * auVar60 + auVar95;
  param_1[8] = auVar95._0_8_;
  uVar145 = auVar95._8_8_;
  uVar151 = uVar150 + uVar145;
  auVar126._8_8_ = 0;
  auVar126._0_8_ = uVar151;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = param_2[2];
  auVar61._8_8_ = 0;
  auVar61._0_8_ = param_2[7];
  auVar126 = auVar25 * auVar61 + auVar126;
  auVar96._8_8_ = 0;
  auVar96._0_8_ = auVar126._0_8_;
  uVar137 = auVar126._8_8_;
  uVar148 = (ulonglong)(uVar148 < uVar149) + (ulonglong)(uVar146 < uVar136) +
            (ulonglong)(uVar147 < uVar138) + (ulonglong)(uVar141 < uVar143) +
            (ulonglong)(uVar142 < uVar144) + (ulonglong)(uVar150 < uVar135) +
            (ulonglong)(uVar151 < uVar145) + uVar137;
  auVar96 = auVar25 * auVar61 + auVar96;
  auVar127._8_8_ = 0;
  auVar127._0_8_ = auVar96._0_8_;
  uVar135 = auVar96._8_8_;
  uVar149 = uVar148 + uVar135;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = param_2[3];
  auVar62._8_8_ = 0;
  auVar62._0_8_ = param_2[6];
  auVar127 = auVar26 * auVar62 + auVar127;
  auVar97._8_8_ = 0;
  auVar97._0_8_ = auVar127._0_8_;
  uVar136 = auVar127._8_8_;
  uVar146 = uVar149 + uVar136;
  auVar97 = auVar26 * auVar62 + auVar97;
  auVar128._8_8_ = 0;
  auVar128._0_8_ = auVar97._0_8_;
  uVar138 = auVar97._8_8_;
  uVar147 = uVar146 + uVar138;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = param_2[4];
  auVar63._8_8_ = 0;
  auVar63._0_8_ = param_2[5];
  auVar128 = auVar27 * auVar63 + auVar128;
  auVar98._8_8_ = 0;
  auVar98._0_8_ = auVar128._0_8_;
  uVar143 = auVar128._8_8_;
  uVar141 = uVar147 + uVar143;
  auVar98 = auVar27 * auVar63 + auVar98;
  param_1[9] = auVar98._0_8_;
  uVar144 = auVar98._8_8_;
  uVar142 = uVar141 + uVar144;
  auVar99._8_8_ = 0;
  auVar99._0_8_ = uVar142;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = param_2[5];
  auVar64._8_8_ = 0;
  auVar64._0_8_ = param_2[5];
  auVar99 = auVar28 * auVar64 + auVar99;
  auVar129._8_8_ = 0;
  auVar129._0_8_ = auVar99._0_8_;
  uVar145 = auVar99._8_8_;
  uVar144 = (ulonglong)(uVar148 < uVar137) + (ulonglong)(uVar149 < uVar135) +
            (ulonglong)(uVar146 < uVar136) + (ulonglong)(uVar147 < uVar138) +
            (ulonglong)(uVar141 < uVar143) + (ulonglong)(uVar142 < uVar144) + uVar145;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = param_2[4];
  auVar65._8_8_ = 0;
  auVar65._0_8_ = param_2[6];
  auVar129 = auVar29 * auVar65 + auVar129;
  auVar100._8_8_ = 0;
  auVar100._0_8_ = auVar129._0_8_;
  uVar136 = auVar129._8_8_;
  uVar148 = uVar144 + uVar136;
  auVar100 = auVar29 * auVar65 + auVar100;
  auVar130._8_8_ = 0;
  auVar130._0_8_ = auVar100._0_8_;
  uVar137 = auVar100._8_8_;
  uVar149 = uVar148 + uVar137;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = param_2[3];
  auVar66._8_8_ = 0;
  auVar66._0_8_ = param_2[7];
  auVar130 = auVar30 * auVar66 + auVar130;
  auVar101._8_8_ = 0;
  auVar101._0_8_ = auVar130._0_8_;
  uVar143 = auVar130._8_8_;
  uVar146 = uVar149 + uVar143;
  auVar101 = auVar30 * auVar66 + auVar101;
  param_1[10] = auVar101._0_8_;
  uVar138 = auVar101._8_8_;
  uVar147 = uVar146 + uVar138;
  auVar131._8_8_ = 0;
  auVar131._0_8_ = uVar147;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = param_2[4];
  auVar67._8_8_ = 0;
  auVar67._0_8_ = param_2[7];
  auVar131 = auVar31 * auVar67 + auVar131;
  auVar102._8_8_ = 0;
  auVar102._0_8_ = auVar131._0_8_;
  uVar135 = auVar131._8_8_;
  uVar144 = (ulonglong)(uVar144 < uVar145) + (ulonglong)(uVar148 < uVar136) +
            (ulonglong)(uVar149 < uVar137) + (ulonglong)(uVar146 < uVar143) +
            (ulonglong)(uVar147 < uVar138) + uVar135;
  auVar102 = auVar31 * auVar67 + auVar102;
  auVar132._8_8_ = 0;
  auVar132._0_8_ = auVar102._0_8_;
  uVar143 = auVar102._8_8_;
  uVar145 = uVar144 + uVar143;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = param_2[5];
  auVar68._8_8_ = 0;
  auVar68._0_8_ = param_2[6];
  auVar132 = auVar32 * auVar68 + auVar132;
  auVar103._8_8_ = 0;
  auVar103._0_8_ = auVar132._0_8_;
  uVar136 = auVar132._8_8_;
  uVar148 = uVar145 + uVar136;
  auVar103 = auVar32 * auVar68 + auVar103;
  param_1[0xb] = auVar103._0_8_;
  uVar137 = auVar103._8_8_;
  uVar149 = uVar148 + uVar137;
  auVar104._8_8_ = 0;
  auVar104._0_8_ = uVar149;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = param_2[6];
  auVar69._8_8_ = 0;
  auVar69._0_8_ = param_2[6];
  auVar104 = auVar33 * auVar69 + auVar104;
  auVar133._8_8_ = 0;
  auVar133._0_8_ = auVar104._0_8_;
  uVar138 = auVar104._8_8_;
  uVar137 = (ulonglong)(uVar144 < uVar135) + (ulonglong)(uVar145 < uVar143) +
            (ulonglong)(uVar148 < uVar136) + (ulonglong)(uVar149 < uVar137) + uVar138;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = param_2[5];
  auVar70._8_8_ = 0;
  auVar70._0_8_ = param_2[7];
  auVar133 = auVar34 * auVar70 + auVar133;
  auVar105._8_8_ = 0;
  auVar105._0_8_ = auVar133._0_8_;
  uVar136 = auVar133._8_8_;
  uVar144 = uVar137 + uVar136;
  auVar105 = auVar34 * auVar70 + auVar105;
  param_1[0xc] = auVar105._0_8_;
  uVar135 = auVar105._8_8_;
  uVar145 = uVar144 + uVar135;
  auVar106._8_8_ = 0;
  auVar106._0_8_ = uVar145;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = param_2[6];
  auVar71._8_8_ = 0;
  auVar71._0_8_ = param_2[7];
  auVar106 = auVar35 * auVar71 + auVar106;
  auVar134._8_8_ = 0;
  auVar134._0_8_ = auVar106._0_8_;
  uVar143 = auVar106._8_8_;
  uVar135 = (ulonglong)(uVar137 < uVar138) + (ulonglong)(uVar144 < uVar136) +
            (ulonglong)(uVar145 < uVar135) + uVar143;
  auVar134 = auVar35 * auVar71 + auVar134;
  param_1[0xd] = auVar134._0_8_;
  uVar136 = auVar134._8_8_;
  uVar137 = uVar135 + uVar136;
  auVar107._8_8_ = (ulonglong)(uVar135 < uVar143) + (ulonglong)(uVar137 < uVar136);
  auVar107._0_8_ = uVar137;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = param_2[7];
  auVar72._8_8_ = 0;
  auVar72._0_8_ = param_2[7];
  *(undefined1 (*) [16])(param_1 + 0xe) = auVar36 * auVar72 + auVar107;
  return;
}



// FUNCTION 143d80220 bn_sqr_words body=157 status=ok
// SIG undefined bn_sqr_words(void)

void bn_sqr_words(undefined1 (*param_1) [16],ulonglong *param_2,uint param_3)

{
  ulonglong *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  if (0 < (int)param_3) {
    for (; (param_3 & 0xfffffffc) != 0; param_3 = param_3 - 4) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = *param_2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = *param_2;
      *param_1 = auVar2 * auVar7;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = param_2[1];
      auVar8._8_8_ = 0;
      auVar8._0_8_ = param_2[1];
      param_1[1] = auVar3 * auVar8;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = param_2[2];
      auVar9._8_8_ = 0;
      auVar9._0_8_ = param_2[2];
      param_1[2] = auVar4 * auVar9;
      puVar1 = param_2 + 3;
      param_2 = param_2 + 4;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = *puVar1;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = *puVar1;
      param_1[3] = auVar5 * auVar10;
      param_1 = param_1 + 4;
    }
    for (; param_3 != 0; param_3 = param_3 - 1) {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = *param_2;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = *param_2;
      param_2 = param_2 + 1;
      *param_1 = auVar6 * auVar11;
      param_1 = param_1 + 1;
    }
  }
  return;
}



// FUNCTION 143d802c0 bn_sub_words body=318 status=ok
// SIG undefined bn_sub_words(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint bn_sub_words(longlong *param_1,ulonglong *param_2,ulonglong *param_3,uint param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = 0;
  if (0 < (int)param_4) {
    for (; (param_4 & 0xfffffffc) != 0; param_4 = param_4 - 4) {
      uVar1 = *param_2;
      uVar2 = *param_3;
      *param_1 = (uVar1 - (longlong)(int)uVar3) - uVar2;
      if (uVar1 != uVar2) {
        uVar3 = (uint)(uVar1 < uVar2);
      }
      uVar1 = param_2[1];
      uVar2 = param_3[1];
      param_1[1] = (uVar1 - (longlong)(int)uVar3) - uVar2;
      if (uVar1 != uVar2) {
        uVar3 = (uint)(uVar1 < uVar2);
      }
      uVar1 = param_2[2];
      uVar2 = param_3[2];
      param_1[2] = (uVar1 - (longlong)(int)uVar3) - uVar2;
      if (uVar1 != uVar2) {
        uVar3 = (uint)(uVar1 < uVar2);
      }
      uVar1 = param_2[3];
      uVar2 = param_3[3];
      param_1[3] = (uVar1 - (longlong)(int)uVar3) - uVar2;
      if (uVar1 != uVar2) {
        uVar3 = (uint)(uVar1 < uVar2);
      }
      param_2 = param_2 + 4;
      param_3 = param_3 + 4;
      param_1 = param_1 + 4;
    }
    if (param_4 != 0) {
      lVar4 = (longlong)param_3 - (longlong)param_2;
      lVar5 = (longlong)param_1 - (longlong)param_2;
      do {
        uVar1 = *param_2;
        uVar2 = *(ulonglong *)(lVar4 + (longlong)param_2);
        *(ulonglong *)(lVar5 + (longlong)param_2) = (uVar1 - (longlong)(int)uVar3) - uVar2;
        if (uVar1 != uVar2) {
          uVar3 = (uint)(uVar1 < uVar2);
        }
        param_2 = param_2 + 1;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
  }
  return uVar3;
}



// FUNCTION 143d80400 engine_table_cleanup body=82 status=ok
// SIG undefined engine_table_cleanup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void engine_table_cleanup(longlong *param_1)

{
  CRYPTO_THREAD_read_lock(DAT_146bcd570);
  if (*param_1 != 0) {
    OPENSSL_LH_doall(*param_1,int_cleanup_cb_doall);
    OPENSSL_LH_free(*param_1);
    *param_1 = 0;
  }
  CRYPTO_THREAD_unlock(DAT_146bcd570);
  return;
}



// FUNCTION 143d80460 engine_table_doall body=50 status=ok
// SIG undefined engine_table_doall(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void engine_table_doall(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  if (param_1 != 0) {
    uStack_8 = 0x143d8046f;
    local_18 = param_2;
    local_10 = param_3;
    OPENSSL_LH_doall_arg(param_1,FUN_143d80820,&local_18);
  }
  return;
}



// FUNCTION 143d804a0 engine_table_register body=508 status=ok
// SIG undefined engine_table_register(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
engine_table_register
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,int param_5,
          int param_6)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 local_38 [6];
  undefined8 uStack_20;
  
  uStack_20 = 0x143d804be;
  uVar5 = 0;
  CRYPTO_THREAD_read_lock(DAT_146bcd570);
  if (*param_1 == 0) {
    lVar2 = OPENSSL_LH_new(FRollingHash::GetWindowSize,&LAB_1431fadb0);
    if (lVar2 == 0) goto LAB_143d80615;
    *param_1 = lVar2;
    engine_cleanup_add_first(param_2);
  }
  while (param_5 != 0) {
    local_38[0] = *param_4;
    param_5 = param_5 + -1;
    puVar3 = (undefined4 *)OPENSSL_LH_retrieve(*param_1,local_38);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)CRYPTO_malloc(0x20,"crypto\\engine\\eng_table.c",100);
      if (puVar3 == (undefined4 *)0x0) goto LAB_143d80615;
      puVar3[6] = 1;
      *puVar3 = *param_4;
      lVar2 = OPENSSL_sk_new_null();
      *(longlong *)(puVar3 + 2) = lVar2;
      if (lVar2 == 0) {
        CRYPTO_free(puVar3,"crypto\\engine\\eng_table.c",0x6b);
        uVar5 = 0;
        goto LAB_143d80615;
      }
      *(undefined8 *)(puVar3 + 4) = 0;
      OPENSSL_LH_insert(*param_1,puVar3);
      puVar4 = (undefined4 *)OPENSSL_LH_retrieve(*param_1,local_38);
      if (puVar4 != puVar3) {
        OPENSSL_sk_free(*(undefined8 *)(puVar3 + 2));
        CRYPTO_free(puVar3,"crypto\\engine\\eng_table.c",0x72);
        uVar5 = 0;
        goto LAB_143d80615;
      }
    }
    OPENSSL_sk_delete_ptr(*(undefined8 *)(puVar3 + 2),param_3);
    iVar1 = OPENSSL_sk_push(*(undefined8 *)(puVar3 + 2),param_3);
    if (iVar1 == 0) goto LAB_143d80615;
    puVar3[6] = 0;
    if (param_6 != 0) {
      iVar1 = engine_unlocked_init(param_3);
      if (iVar1 == 0) {
        ERR_put_error(0x26,0xb8,0x6d,"crypto\\engine\\eng_table.c",0x82);
        goto LAB_143d80615;
      }
      if (*(longlong *)(puVar3 + 4) != 0) {
        engine_unlocked_finish(*(longlong *)(puVar3 + 4),0);
      }
      *(undefined8 *)(puVar3 + 4) = param_3;
      puVar3[6] = 1;
    }
    param_4 = param_4 + 1;
  }
  uVar5 = 1;
LAB_143d80615:
  CRYPTO_THREAD_unlock(DAT_146bcd570);
  return uVar5;
}



// FUNCTION 143d806a0 engine_table_select body=296 status=ok
// SIG undefined engine_table_select(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong engine_table_select(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_28 [6];
  undefined8 uStack_10;
  
  uStack_10 = 0x143d806b5;
  lVar3 = 0;
  if (*param_1 == 0) {
    return 0;
  }
  ERR_set_mark();
  CRYPTO_THREAD_read_lock(DAT_146bcd570);
  if ((*param_1 != 0) &&
     (local_28[0] = param_2, lVar2 = OPENSSL_LH_retrieve(*param_1,local_28), lVar2 != 0)) {
    if (((*(longlong *)(lVar2 + 0x10) == 0) || (iVar1 = engine_unlocked_init(), iVar1 == 0)) &&
       (*(int *)(lVar2 + 0x18) == 0)) {
      lVar3 = OPENSSL_sk_value(*(undefined8 *)(lVar2 + 8),0);
      while (lVar3 != 0) {
        if (((0 < *(int *)(lVar3 + 0xa0)) || ((DAT_146bcba30 & 1) == 0)) &&
           (iVar1 = engine_unlocked_init(lVar3), iVar1 != 0)) {
          if ((*(longlong *)(lVar2 + 0x10) != lVar3) &&
             (iVar1 = engine_unlocked_init(lVar3), iVar1 != 0)) {
            if (*(longlong *)(lVar2 + 0x10) != 0) {
              engine_unlocked_finish(*(longlong *)(lVar2 + 0x10),0);
            }
            *(longlong *)(lVar2 + 0x10) = lVar3;
          }
          break;
        }
        lVar3 = OPENSSL_sk_value(*(undefined8 *)(lVar2 + 8));
      }
    }
    else {
      lVar3 = *(longlong *)(lVar2 + 0x10);
    }
    *(undefined4 *)(lVar2 + 0x18) = 1;
  }
  CRYPTO_THREAD_unlock(DAT_146bcd570);
  ERR_pop_to_mark();
  return lVar3;
}



// FUNCTION 143d807d0 int_cleanup_cb_doall body=74 status=ok
// SIG undefined int_cleanup_cb_doall(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void int_cleanup_cb_doall(longlong param_1)

{
  if (param_1 != 0) {
    OPENSSL_sk_free(*(undefined8 *)(param_1 + 8));
    if (*(longlong *)(param_1 + 0x10) != 0) {
      engine_unlocked_finish(*(longlong *)(param_1 + 0x10),0);
    }
    CRYPTO_free(param_1,"crypto\\engine\\eng_table.c",0xb1);
  }
  return;
}



// FUNCTION 143d80820 FUN_143d80820 body=37 status=ok
// SIG undefined FUN_143d80820(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d80820(undefined4 *param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143d80842. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_2)(*param_1,*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_1 + 4),param_2[1])
  ;
  return;
}



// FUNCTION 143d80850 PKCS5_PBE_keyivgen body=891 status=ok
// SIG undefined PKCS5_PBE_keyivgen(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
PKCS5_PBE_keyivgen(undefined8 param_1,longlong param_2,ulonglong param_3,int *param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined4 local_100;
  undefined4 local_f8;
  int local_f4;
  undefined8 local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [64];
  undefined1 local_98 [64];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  uVar6 = param_3 & 0xffffffff;
  local_f8 = 0;
  local_f0 = param_1;
  if (((param_4 == (int *)0x0) || (*param_4 != 0x10)) || (*(longlong *)(param_4 + 2) == 0)) {
    local_108 = (undefined1 *)CONCAT44(local_108._4_4_,0x29);
    ERR_put_error(6,0x75,0x72,"crypto\\evp\\p5_crpt.c");
    local_f8 = 0;
  }
  else {
    uVar3 = PBEPARAM_it();
    puVar4 = (undefined8 *)ASN1_TYPE_unpack_sequence(uVar3,param_4);
    if (puVar4 == (undefined8 *)0x0) {
      local_108 = (undefined1 *)CONCAT44(local_108._4_4_,0x2f);
      ERR_put_error(6,0x75,0x72,"crypto\\evp\\p5_crpt.c");
      local_f8 = 0;
    }
    else {
      if (puVar4[1] == 0) {
        iVar7 = 1;
      }
      else {
        iVar7 = ASN1_INTEGER_get();
      }
      uVar3 = *(undefined8 *)((int *)*puVar4 + 2);
      local_f4 = *(int *)*puVar4;
      if (param_2 == 0) {
        uVar6 = 0;
      }
      else if ((int)param_3 == -1) {
        uVar6 = 0xffffffffffffffff;
        do {
          uVar6 = uVar6 + 1;
        } while (*(char *)(uVar6 + param_2) != '\0');
      }
      lVar5 = EVP_MD_CTX_new();
      if (lVar5 == 0) {
        local_108 = (undefined1 *)CONCAT44(local_108._4_4_,0x41);
        ERR_put_error(6,0x75,0x41,"crypto\\evp\\p5_crpt.c");
        EVP_MD_CTX_free(0);
      }
      else {
        iVar1 = EVP_DigestInit_ex(lVar5,param_6,0);
        if (((iVar1 != 0) &&
            (iVar1 = EVP_DigestUpdate(lVar5,param_2,(longlong)(int)uVar6), iVar1 != 0)) &&
           (iVar1 = EVP_DigestUpdate(lVar5,uVar3,(longlong)local_f4), iVar1 != 0)) {
          PBEPARAM_free(puVar4);
          iVar1 = EVP_DigestFinal_ex(lVar5,local_d8,0);
          if (iVar1 != 0) {
            iVar1 = EVP_MD_size(param_6);
            if (iVar1 < 0) {
              return 0;
            }
            iVar1 = 1;
            if (1 < iVar7) {
              do {
                iVar2 = EVP_DigestInit_ex(lVar5,param_6,0);
                if (((iVar2 == 0) || (iVar2 = EVP_DigestUpdate(lVar5,local_d8), iVar2 == 0)) ||
                   (iVar2 = EVP_DigestFinal_ex(lVar5,local_d8), iVar2 == 0)) goto LAB_143d80b93;
                iVar1 = iVar1 + 1;
              } while (iVar1 < iVar7);
            }
            iVar7 = IStreamingManager::GetNumWantingResources(param_5);
            if (0x40 < iVar7) {
              OPENSSL_die("assertion failed: EVP_CIPHER_key_length(cipher) <= (int)sizeof(md_tmp)",
                          "crypto\\evp\\p5_crpt.c",0x59);
            }
            iVar7 = IStreamingManager::GetNumWantingResources(param_5);
            _guard_xfg_dispatch_icall_nop(local_98,local_d8,(longlong)iVar7);
            iVar7 = IStreamingManager::GetNumWantingResourcesID(param_5);
            if (0x10 < iVar7) {
              OPENSSL_die("assertion failed: EVP_CIPHER_iv_length(cipher) <= 16",
                          "crypto\\evp\\p5_crpt.c",0x5b);
            }
            iVar7 = IStreamingManager::GetNumWantingResourcesID(param_5);
            iVar1 = IStreamingManager::GetNumWantingResourcesID(param_5);
            _guard_xfg_dispatch_icall_nop(local_e8,local_d8 + (0x10 - iVar1),(longlong)iVar7);
            local_100 = param_7;
            local_108 = local_e8;
            iVar7 = FUN_143cf75a0(local_f0,param_5,0,local_98);
            if (iVar7 != 0) {
              FUN_14004ff40(local_d8,0x40);
              FUN_14004ff40(local_98,0x40);
              FUN_14004ff40(local_e8,0x10);
              local_f8 = 1;
            }
          }
        }
LAB_143d80b93:
        EVP_MD_CTX_free(lVar5);
      }
    }
  }
  return local_f8;
}



// FUNCTION 143d80bd0 PKCS5_PBKDF2_HMAC body=864 status=ok
// SIG undefined PKCS5_PBKDF2_HMAC(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
PKCS5_PBKDF2_HMAC(undefined1 *param_1,ulonglong param_2,undefined8 param_3,int param_4,int param_5,
                 undefined8 param_6,uint param_7,ulonglong *param_8)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong *puVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  size_t _Size;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  undefined1 local_a5;
  int local_a4;
  undefined8 local_a0;
  ulonglong local_98 [11];
  
  local_98[10] = 0x143d80be7;
  local_98[8] = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  uVar12 = param_2 & 0xffffffff;
  iVar14 = 1;
  local_a4 = param_4;
  local_a0 = param_3;
  uVar3 = EVP_MD_size(param_6);
  if ((-1 < (int)uVar3) && (lVar6 = HMAC_CTX_new(), lVar6 != 0)) {
    if (param_1 == (undefined1 *)0x0) {
      param_1 = &DAT_143f3f584;
      uVar12 = 0;
    }
    else if ((int)param_2 == -1) {
      uVar12 = 0xffffffffffffffff;
      do {
        uVar12 = uVar12 + 1;
      } while (param_1[uVar12] != '\0');
    }
    local_b8 = 0;
    iVar4 = HMAC_Init_ex(lVar6,param_1,uVar12 & 0xffffffff);
    if ((iVar4 != 0) && (lVar7 = HMAC_CTX_new(), lVar7 != 0)) {
      while( true ) {
        if (param_7 == 0) {
          HMAC_CTX_free(lVar7);
          HMAC_CTX_free(lVar6);
          return 1;
        }
        local_a5 = (undefined1)iVar14;
        uVar11 = param_7;
        if ((int)uVar3 < (int)param_7) {
          uVar11 = uVar3;
        }
        local_a8 = (undefined1)((uint)iVar14 >> 0x18);
        local_a7 = (undefined1)((uint)iVar14 >> 0x10);
        local_a6 = (undefined1)((uint)iVar14 >> 8);
        iVar4 = HMAC_CTX_copy(lVar7,lVar6);
        if ((((iVar4 == 0) || (iVar4 = HMAC_Update(lVar7,param_3,(longlong)local_a4), iVar4 == 0))
            || (iVar4 = HMAC_Update(lVar7,&local_a8,4), iVar4 == 0)) ||
           (iVar4 = HMAC_Final(lVar7,local_98,0), iVar4 == 0)) break;
        _Size = (size_t)(int)uVar11;
        _guard_xfg_dispatch_icall_nop(param_8,local_98,_Size);
        iVar4 = 1;
        if (1 < param_5) {
          do {
            iVar5 = HMAC_CTX_copy(lVar7,lVar6);
            if (((iVar5 == 0) ||
                (iVar5 = HMAC_Update(lVar7,local_98,(longlong)(int)uVar3), iVar5 == 0)) ||
               (iVar5 = HMAC_Final(lVar7,local_98,0), iVar5 == 0)) goto LAB_143d80efa;
            lVar13 = 0;
            if (((0 < (int)uVar11) && (0x3f < uVar11)) &&
               (((ulonglong *)((longlong)local_98 + (longlong)(int)(uVar11 - 1)) < param_8 ||
                ((ulonglong *)((longlong)(int)(uVar11 - 1) + (longlong)param_8) < local_98)))) {
              uVar10 = uVar11 & 0x8000003f;
              if ((int)uVar10 < 0) {
                uVar10 = (uVar10 - 1 | 0xffffffc0) + 1;
              }
              puVar8 = param_8;
              do {
                lVar13 = lVar13 + 0x40;
                puVar2 = (ulonglong *)(((longlong)local_98 - (longlong)param_8) + (longlong)puVar8);
                uVar12 = puVar2[1];
                puVar1 = puVar8 + 8;
                *puVar8 = *puVar2 ^ *puVar8;
                puVar8[1] = uVar12 ^ puVar8[1];
                uVar12 = *(ulonglong *)
                          ((longlong)(auStack_d8 + (0x10 - (longlong)param_8) + (longlong)puVar1) +
                          8);
                puVar8[2] = *(ulonglong *)
                             (auStack_d8 + (0x10 - (longlong)param_8) + (longlong)puVar1) ^
                            puVar8[2];
                puVar8[3] = uVar12 ^ puVar8[3];
                puVar2 = (ulonglong *)(((longlong)&local_b8 - (longlong)param_8) + (longlong)puVar1)
                ;
                uVar12 = puVar2[1];
                puVar8[4] = *puVar2 ^ puVar8[4];
                puVar8[5] = uVar12 ^ puVar8[5];
                uVar12 = *(ulonglong *)
                          ((longlong)(&local_a8 + -(longlong)param_8 + (longlong)puVar1) + 8);
                puVar8[6] = *(ulonglong *)(&local_a8 + -(longlong)param_8 + (longlong)puVar1) ^
                            puVar8[6];
                puVar8[7] = uVar12 ^ puVar8[7];
                puVar8 = puVar1;
              } while (lVar13 < (int)(uVar11 - uVar10));
            }
            if (lVar13 < (longlong)_Size) {
              pbVar9 = (byte *)(lVar13 + (longlong)param_8);
              lVar13 = _Size - lVar13;
              do {
                *pbVar9 = *pbVar9 ^ pbVar9[(longlong)local_98 - (longlong)param_8];
                pbVar9 = pbVar9 + 1;
                lVar13 = lVar13 + -1;
              } while (lVar13 != 0);
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < param_5);
        }
        param_8 = (ulonglong *)((longlong)param_8 + _Size);
        param_7 = param_7 - uVar11;
        iVar14 = iVar14 + 1;
        param_3 = local_a0;
      }
LAB_143d80efa:
      HMAC_CTX_free(lVar7);
    }
    HMAC_CTX_free(lVar6);
  }
  return 0;
}



// FUNCTION 143d80f30 PKCS5_v2_PBE_keyivgen body=415 status=ok
// SIG undefined PKCS5_v2_PBE_keyivgen(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
PKCS5_v2_PBE_keyivgen
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 in_stack_ffffffffffffffb8;
  code **ppcVar8;
  undefined8 in_stack_ffffffffffffffc0;
  undefined4 uVar9;
  code *local_28;
  undefined8 uStack_20;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffc0 >> 0x20);
  uVar1 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uStack_20 = 0x143d80f49;
  uVar4 = 0;
  uVar5 = PBE2PARAM_it();
  plVar6 = (longlong *)ASN1_TYPE_unpack_sequence(uVar5,param_4);
  if (plVar6 == (longlong *)0x0) {
    ERR_put_error(6,0x76,0x72,"crypto\\evp\\p5_crpt2.c",CONCAT44(uVar1,0x96));
  }
  else {
    uVar1 = OBJ_obj2nid(*(undefined8 *)*plVar6);
    ppcVar8 = &local_28;
    iVar2 = EVP_PBE_find(2,uVar1,0,0,ppcVar8);
    uVar1 = (undefined4)((ulonglong)ppcVar8 >> 0x20);
    if (iVar2 == 0) {
      ERR_put_error(6,0x76,0x7c,"crypto\\evp\\p5_crpt2.c",CONCAT44(uVar1,0x9e));
    }
    else {
      uVar3 = OBJ_obj2nid(*(undefined8 *)plVar6[1]);
      uVar5 = OBJ_nid2sn(uVar3);
      lVar7 = EVP_get_cipherbyname(uVar5);
      if (lVar7 == 0) {
        ERR_put_error(6,0x76,0x6b,"crypto\\evp\\p5_crpt2.c",CONCAT44(uVar1,0xa9));
      }
      else {
        uVar1 = 0;
        iVar2 = FUN_143cf75a0(param_1,lVar7,0,0,0,CONCAT44(uVar9,param_7));
        if (iVar2 != 0) {
          iVar2 = EVP_CIPHER_asn1_to_param(param_1,*(undefined8 *)(plVar6[1] + 8));
          if (iVar2 < 0) {
            ERR_put_error(6,0x76,0x7a,"crypto\\evp\\p5_crpt2.c",CONCAT44(uVar1,0xb1));
          }
          else {
            uVar4 = (*local_28)(param_1,param_2,param_3,*(undefined8 *)(*plVar6 + 8),0,0,param_7);
          }
        }
      }
    }
  }
  PBE2PARAM_free(plVar6);
  return uVar4;
}



// FUNCTION 143d810d0 PKCS5_v2_PBKDF2_keyivgen body=663 status=ok
// SIG undefined PKCS5_v2_PBKDF2_keyivgen(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
PKCS5_v2_PBKDF2_keyivgen
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong local_c0;
  uint local_b8;
  undefined1 *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_98 [64];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  puVar11 = (undefined8 *)0x0;
  local_a4 = param_3;
  lVar7 = FHardwareCursor::GetHandle();
  if (lVar7 == 0) {
    local_c8 = CONCAT44(local_c8._4_4_,199);
    ERR_put_error(6,0xa4,0x83,"crypto\\evp\\p5_crpt2.c");
    puVar10 = puVar11;
    puVar9 = puVar11;
  }
  else {
    uVar2 = UVariantSet::GetNumVariants(param_1);
    puVar10 = (undefined8 *)(ulonglong)uVar2;
    if (0x40 < uVar2) {
      OPENSSL_die("assertion failed: keylen <= sizeof(key)","crypto\\evp\\p5_crpt2.c",0xcb);
    }
    uVar8 = PBKDF2PARAM_it();
    puVar9 = (undefined8 *)ASN1_TYPE_unpack_sequence(uVar8,param_4);
    if (puVar9 == (undefined8 *)0x0) {
      local_c8 = CONCAT44(local_c8._4_4_,0xd2);
      ERR_put_error(6,0xa4,0x72,"crypto\\evp\\p5_crpt2.c");
    }
    else {
      uVar2 = UVariantSet::GetNumVariants(param_1);
      puVar10 = (undefined8 *)(ulonglong)uVar2;
      if ((puVar9[2] == 0) || (uVar3 = ASN1_INTEGER_get(), uVar3 == uVar2)) {
        if ((undefined8 *)puVar9[3] == (undefined8 *)0x0) {
          uVar4 = 0xa3;
        }
        else {
          uVar4 = OBJ_obj2nid(*(undefined8 *)puVar9[3]);
        }
        local_c8 = 0;
        iVar5 = EVP_PBE_find(1,uVar4,0,&local_a8);
        if (iVar5 == 0) {
          local_c8 = CONCAT44(local_c8._4_4_,0xe5);
          ERR_put_error(6,0xa4,0x7d,"crypto\\evp\\p5_crpt2.c");
          puVar11 = (undefined8 *)0x0;
        }
        else {
          uVar8 = OBJ_nid2sn(local_a8);
          lVar7 = EVP_get_digestbyname(uVar8);
          if (lVar7 == 0) {
            local_c8 = CONCAT44(local_c8._4_4_,0xeb);
            ERR_put_error(6,0xa4,0x7d,"crypto\\evp\\p5_crpt2.c");
          }
          else if (*(int *)*puVar9 == 4) {
            puVar1 = *(undefined4 **)((int *)*puVar9 + 2);
            uVar8 = *(undefined8 *)(puVar1 + 2);
            uVar4 = *puVar1;
            uVar6 = ASN1_INTEGER_get(puVar9[1]);
            local_b0 = local_98;
            local_c8 = CONCAT44(local_c8._4_4_,uVar6);
            local_c0 = lVar7;
            local_b8 = uVar2;
            iVar5 = PKCS5_PBKDF2_HMAC(param_2,local_a4,uVar8,uVar4);
            if (iVar5 != 0) {
              local_c0 = CONCAT44(local_c0._4_4_,param_7);
              local_c8 = 0;
              uVar2 = FUN_143cf75a0(param_1,0,0,local_98);
              puVar11 = (undefined8 *)(ulonglong)uVar2;
            }
          }
          else {
            local_c8 = CONCAT44(local_c8._4_4_,0xf0);
            ERR_put_error(6,0xa4,0x7e,"crypto\\evp\\p5_crpt2.c");
          }
        }
      }
      else {
        local_c8 = CONCAT44(local_c8._4_4_,0xdb);
        ERR_put_error(6,0xa4,0x7b,"crypto\\evp\\p5_crpt2.c");
      }
    }
  }
  FUN_14004ff40(local_98,puVar10);
  PBKDF2PARAM_free(puVar9);
  return puVar11;
}



// FUNCTION 143d81370 PKCS5_v2_scrypt_keyivgen body=569 status=ok
// SIG undefined PKCS5_v2_scrypt_keyivgen(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
PKCS5_v2_scrypt_keyivgen
          (undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 *local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined1 local_88 [64];
  ulonglong local_48;
  undefined8 uStack_38;
  
  uStack_38 = 0x143d81383;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  puVar5 = (undefined8 *)0x0;
  lVar3 = FHardwareCursor::GetHandle();
  if (lVar3 == 0) {
    local_d8 = CONCAT44(local_d8._4_4_,0xe0);
    ERR_put_error(6,0xb4,0x83,"crypto\\asn1\\p5_scrypt.c");
    puVar4 = puVar5;
    goto LAB_143d81578;
  }
  puVar4 = (undefined8 *)ASN1_TYPE_unpack_sequence(&DAT_145da60e0,param_4);
  if (puVar4 == (undefined8 *)0x0) {
    local_d8 = CONCAT44(local_d8._4_4_,0xe9);
    ERR_put_error(6,0xb4,0x72,"crypto\\asn1\\p5_scrypt.c");
    goto LAB_143d81578;
  }
  iVar1 = UVariantSet::GetNumVariants(param_1);
  lVar3 = (longlong)iVar1;
  if (puVar4[4] == 0) {
LAB_143d8144f:
    iVar1 = ASN1_INTEGER_get_uint64(&local_98,puVar4[1]);
    if (iVar1 == 0) {
LAB_143d81542:
      local_d8 = CONCAT44(local_d8._4_4_,0x100);
      uVar6 = 0xab;
      goto LAB_143d81550;
    }
    iVar1 = ASN1_INTEGER_get_uint64(&local_a0,puVar4[2]);
    if (iVar1 == 0) goto LAB_143d81542;
    iVar1 = ASN1_INTEGER_get_uint64(&local_a8,puVar4[3]);
    if (iVar1 == 0) goto LAB_143d81542;
    local_b0 = 0;
    local_b8 = (undefined1 *)0x0;
    local_c0 = 0;
    local_c8 = local_a8;
    local_d0 = local_a0;
    local_d8 = local_98;
    iVar1 = EVP_PBE_scrypt(0,0,0,0);
    if (iVar1 == 0) goto LAB_143d81542;
    local_b8 = local_88;
    local_c0 = 0;
    local_c8 = local_a8;
    local_d0 = local_a0;
    local_d8 = local_98;
    local_b0 = lVar3;
    iVar1 = EVP_PBE_scrypt(param_2,(longlong)param_3,*(undefined8 *)((int *)*puVar4 + 2),
                           (longlong)*(int *)*puVar4);
    if (iVar1 != 0) {
      local_d0 = CONCAT44(local_d0._4_4_,param_7);
      local_d8 = 0;
      uVar2 = FUN_143cf75a0(param_1,0,0,local_88);
      puVar5 = (undefined8 *)(ulonglong)uVar2;
    }
  }
  else {
    iVar1 = ASN1_INTEGER_get_uint64(&local_90);
    if ((iVar1 != 0) && (local_90 == lVar3)) goto LAB_143d8144f;
    local_d8 = CONCAT44(local_d8._4_4_,0xf6);
    uVar6 = 0x7b;
LAB_143d81550:
    ERR_put_error(6,0xb4,uVar6,"crypto\\asn1\\p5_scrypt.c");
  }
  if (lVar3 != 0) {
    FUN_14004ff40(local_88,lVar3);
  }
LAB_143d81578:
  ASN1_item_free(puVar4,&DAT_145da60e0);
  return puVar5;
}



// FUNCTION 143d815b0 PKCS12_PBE_keyivgen body=536 status=ok
// SIG undefined PKCS12_PBE_keyivgen(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
PKCS12_PBE_keyivgen(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                   longlong param_5,undefined8 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined1 local_b0 [24];
  undefined1 local_98 [64];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  if (param_5 != 0) {
    local_b8 = param_1;
    uVar3 = PBEPARAM_it();
    puVar4 = (undefined8 *)ASN1_TYPE_unpack_sequence(uVar3,param_4);
    if (puVar4 != (undefined8 *)0x0) {
      if (puVar4[1] == 0) {
        uVar5 = 1;
      }
      else {
        uVar5 = ASN1_INTEGER_get();
      }
      uVar3 = *(undefined8 *)((undefined4 *)*puVar4 + 2);
      uVar1 = *(undefined4 *)*puVar4;
      local_d8 = IStreamingManager::GetNumWantingResources(param_5);
      local_c8 = param_6;
      local_d0 = local_98;
      local_e8._0_4_ = 1;
      local_e0 = uVar5;
      iVar2 = PKCS12_key_gen_utf8(param_2,param_3,uVar3,uVar1);
      if (iVar2 == 0) {
        local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,0x37);
        ERR_put_error(0x23,0x78,0x6b,"crypto\\pkcs12\\p12_crpt.c");
        PBEPARAM_free(puVar4);
        return 0;
      }
      local_d8 = IStreamingManager::GetNumWantingResourcesID(param_5);
      local_c8 = param_6;
      local_d0 = local_b0;
      local_e8._0_4_ = 2;
      local_e0 = uVar5;
      iVar2 = PKCS12_key_gen_utf8(param_2,param_3,uVar3,uVar1);
      if (iVar2 == 0) {
        local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,0x3d);
        ERR_put_error(0x23,0x78,0x6a,"crypto\\pkcs12\\p12_crpt.c");
        PBEPARAM_free(puVar4);
        return 0;
      }
      PBEPARAM_free(puVar4);
      local_e0 = param_7;
      local_e8 = local_b0;
      uVar5 = FUN_143cf75a0(local_b8,param_5,0,local_98);
      FUN_14004ff40(local_98,0x40);
      FUN_14004ff40(local_b0,0x10);
      return uVar5;
    }
    local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,0x2b);
    ERR_put_error(0x23,0x78,0x65,"crypto\\pkcs12\\p12_crpt.c");
  }
  return 0;
}



// FUNCTION 143d817d0 X509_PKEY_free body=104 status=ok
// SIG undefined X509_PKEY_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_PKEY_free(longlong param_1)

{
  if (param_1 != 0) {
    X509_ALGOR_free(*(undefined8 *)(param_1 + 8));
    ASN1_BIT_STRING_free(*(undefined8 *)(param_1 + 0x10));
    EVP_PKEY_free(*(undefined8 *)(param_1 + 0x18));
    if (*(int *)(param_1 + 0x30) != 0) {
      CRYPTO_free(*(undefined8 *)(param_1 + 0x28),"crypto\\asn1\\x_pkey.c",0x2d);
    }
    CRYPTO_free(param_1,"crypto\\asn1\\x_pkey.c",0x2e);
  }
  return;
}



// FUNCTION 143d81840 X509_PKEY_new body=197 status=ok
// SIG undefined X509_PKEY_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong X509_PKEY_new(void)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143d8184c;
  lVar1 = CRYPTO_zalloc(0x50,"crypto\\asn1\\x_pkey.c",0x14);
  if (lVar1 != 0) {
    uVar2 = X509_ALGOR_new();
    *(undefined8 *)(lVar1 + 8) = uVar2;
    lVar3 = ASN1_OCTET_STRING_new();
    *(longlong *)(lVar1 + 0x10) = lVar3;
    if ((*(longlong *)(lVar1 + 8) != 0) && (lVar3 != 0)) {
      return lVar1;
    }
    X509_ALGOR_free();
    ASN1_BIT_STRING_free(*(undefined8 *)(lVar1 + 0x10));
    EVP_PKEY_free(*(undefined8 *)(lVar1 + 0x18));
    if (*(int *)(lVar1 + 0x30) != 0) {
      CRYPTO_free(*(undefined8 *)(lVar1 + 0x28),"crypto\\asn1\\x_pkey.c",0x2d);
    }
    CRYPTO_free(lVar1,"crypto\\asn1\\x_pkey.c",0x2e);
  }
  ERR_put_error(0xd,0xad,0x41,"crypto\\asn1\\x_pkey.c",0x20,uVar4);
  return 0;
}



// FUNCTION 143d81910 UTF8_getc body=814 status=ok
// SIG undefined UTF8_getc(void)

undefined8 UTF8_getc(byte *param_1,int param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  
  if (param_2 < 1) {
    return 0;
  }
  bVar1 = *param_1;
  if (-1 < (char)bVar1) {
    *param_3 = bVar1 & 0x7f;
    return 1;
  }
  if ((bVar1 & 0xe0) == 0xc0) {
    if (param_2 < 2) {
      return 0xffffffff;
    }
    if ((param_1[1] & 0xc0) != 0x80) {
      return 0xfffffffd;
    }
    uVar2 = (bVar1 & 0x1f) << 6 | param_1[1] & 0x3f;
    if (0x7f < uVar2) {
      *param_3 = uVar2;
      return 2;
    }
  }
  else if ((bVar1 & 0xf0) == 0xe0) {
    if (param_2 < 3) {
      return 0xffffffff;
    }
    if ((param_1[1] & 0xc0) != 0x80) {
      return 0xfffffffd;
    }
    if ((param_1[2] & 0xc0) != 0x80) {
      return 0xfffffffd;
    }
    uVar2 = ((bVar1 & 0xf) << 6 | param_1[1] & 0x3f) << 6 | param_1[2] & 0x3f;
    if (0x7ff < uVar2) {
      *param_3 = uVar2;
      return 3;
    }
  }
  else if ((bVar1 & 0xf8) == 0xf0) {
    if (param_2 < 4) {
      return 0xffffffff;
    }
    if ((param_1[1] & 0xc0) != 0x80) {
      return 0xfffffffd;
    }
    if ((param_1[2] & 0xc0) != 0x80) {
      return 0xfffffffd;
    }
    if ((param_1[3] & 0xc0) != 0x80) {
      return 0xfffffffd;
    }
    uVar2 = ((param_1[1] & 0x3f) << 6 | param_1[2] & 0x3f) << 6 | param_1[3] & 0x3f |
            (bVar1 & 7) << 0x12;
    if (0xffff < uVar2) {
      *param_3 = uVar2;
      return 4;
    }
  }
  else if ((bVar1 & 0xfc) == 0xf8) {
    if (param_2 < 5) {
      return 0xffffffff;
    }
    if (((((param_1[1] & 0xc0) != 0x80) || ((param_1[2] & 0xc0) != 0x80)) ||
        ((param_1[3] & 0xc0) != 0x80)) || ((param_1[4] & 0xc0) != 0x80)) {
      return 0xfffffffd;
    }
    uVar2 = (((bVar1 & 3) << 6 | param_1[1] & 0x3f) << 6 | param_1[2] & 0x3f) << 0xc |
            (param_1[3] & 0x3f) << 6 | param_1[4] & 0x3f;
    if (0x1fffff < uVar2) {
      *param_3 = uVar2;
      return 5;
    }
  }
  else {
    if ((bVar1 & 0xfe) != 0xfc) {
      return 0xfffffffe;
    }
    if (param_2 < 6) {
      return 0xffffffff;
    }
    if ((param_1[1] & 0xc0) != 0x80) {
      return 0xfffffffd;
    }
    if ((param_1[2] & 0xc0) != 0x80) {
      return 0xfffffffd;
    }
    if ((param_1[3] & 0xc0) != 0x80) {
      return 0xfffffffd;
    }
    if ((param_1[4] & 0xc0) != 0x80) {
      return 0xfffffffd;
    }
    if ((param_1[5] & 0xc0) != 0x80) {
      return 0xfffffffd;
    }
    uVar2 = ((((bVar1 & 1) << 6 | param_1[1] & 0x3f) << 6 | param_1[2] & 0x3f) << 6 |
            param_1[3] & 0x3f) << 0xc | (param_1[4] & 0x3f) << 6 | param_1[5] & 0x3f;
    if (0x3ffffff < uVar2) {
      *param_3 = uVar2;
      return 6;
    }
  }
  return 0xfffffffc;
}



// FUNCTION 143d81c40 UTF8_putc body=435 status=ok
// SIG undefined UTF8_putc(void)

undefined8 UTF8_putc(byte *param_1,int param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  
  if (param_1 == (byte *)0x0) {
    param_2 = 6;
  }
  else if (param_2 < 1) {
    return 0xffffffff;
  }
  bVar2 = (byte)param_3;
  if (0x7f < param_3) {
    if (param_3 < 0x800) {
      if (1 < param_2) {
        if (param_1 != (byte *)0x0) {
          *param_1 = (byte)(param_3 >> 6) & 0x1f | 0xc0;
          param_1[1] = bVar2 & 0x3f | 0x80;
        }
        return 2;
      }
    }
    else if (param_3 < 0x10000) {
      if (2 < param_2) {
        if (param_1 != (byte *)0x0) {
          *param_1 = (byte)(param_3 >> 0xc) & 0xf | 0xe0;
          param_1[1] = (byte)(param_3 >> 6) & 0x3f | 0x80;
          param_1[2] = bVar2 & 0x3f | 0x80;
        }
        return 3;
      }
    }
    else if (param_3 < 0x200000) {
      if (3 < param_2) {
        if (param_1 != (byte *)0x0) {
          *param_1 = (byte)(param_3 >> 0x12) & 7 | 0xf0;
          param_1[1] = (byte)(param_3 >> 0xc) & 0x3f | 0x80;
          param_1[2] = (byte)(param_3 >> 6) & 0x3f | 0x80;
          param_1[3] = bVar2 & 0x3f | 0x80;
        }
        return 4;
      }
    }
    else {
      bVar1 = (byte)(param_3 >> 0x18);
      if (param_3 < 0x4000000) {
        if (4 < param_2) {
          if (param_1 != (byte *)0x0) {
            *param_1 = bVar1 & 3 | 0xf8;
            param_1[1] = (byte)(param_3 >> 0x12) & 0x3f | 0x80;
            param_1[2] = (byte)(param_3 >> 0xc) & 0x3f | 0x80;
            param_1[3] = (byte)(param_3 >> 6) & 0x3f | 0x80;
            param_1[4] = bVar2 & 0x3f | 0x80;
          }
          return 5;
        }
      }
      else if (5 < param_2) {
        if (param_1 != (byte *)0x0) {
          *param_1 = bVar1 >> 6 & 1 | 0xfc;
          param_1[1] = bVar1 & 0x3f | 0x80;
          param_1[2] = (byte)(param_3 >> 0x12) & 0x3f | 0x80;
          param_1[3] = (byte)(param_3 >> 0xc) & 0x3f | 0x80;
          param_1[4] = (byte)(param_3 >> 6) & 0x3f | 0x80;
          param_1[5] = bVar2 & 0x3f | 0x80;
        }
        return 6;
      }
    }
    return 0xffffffff;
  }
  if (param_1 != (byte *)0x0) {
    *param_1 = bVar2;
  }
  return 1;
}



// FUNCTION 143d81e00 ASN1_parse_dump body=57 status=ok
// SIG undefined ASN1_parse_dump(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_parse_dump(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                    undefined4 param_5)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  asn1_parse2(param_1,local_res10,param_3,0,0,param_4,param_5);
  return;
}



// FUNCTION 143d81e40 ASN1_tag2str body=45 status=ok
// SIG undefined ASN1_tag2str(void)

char * ASN1_tag2str(uint param_1)

{
  if ((param_1 - 0x102 & 0xfffffff7) == 0) {
    param_1 = param_1 & 0xfffffeff;
  }
  if (param_1 < 0x1f) {
    return (&PTR_DAT_145da61d0)[(int)param_1];
  }
  return "(unknown)";
}



// FUNCTION 143d81e70 asn1_parse2 body=2626 status=ok
// SIG undefined asn1_parse2(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
asn1_parse2(undefined8 param_1,longlong *param_2,uint param_3,int param_4,int param_5,int param_6,
           int param_7)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  char *pcVar11;
  byte *pbVar12;
  int iVar13;
  uint uVar14;
  byte *pbVar15;
  ulonglong uVar16;
  byte *pbVar17;
  char *pcVar18;
  int iVar19;
  undefined1 auStack_178 [32];
  int local_158;
  int local_150;
  int local_148;
  int local_138 [2];
  longlong *local_130;
  int local_128;
  byte *local_120;
  uint local_118;
  undefined4 local_114;
  int local_110;
  byte *local_108;
  uint local_100;
  int local_fc;
  int local_f8;
  undefined8 local_f0;
  byte *local_e8;
  char local_d8 [128];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  uVar16 = (ulonglong)(int)param_3;
  local_114 = 0;
  local_f0 = 0;
  local_110 = 0;
  if (0x80 < param_5) {
    local_130 = param_2;
    local_fc = param_4;
    BIO_puts(param_1,"BAD RECURSION DEPTH\n");
    return 0;
  }
  local_e8 = (byte *)*param_2 + uVar16;
  pbVar15 = (byte *)*param_2;
  plVar4 = param_2;
joined_r0x000143d81eff:
  local_130 = plVar4;
  local_120 = pbVar15;
  local_fc = param_4;
  if ((int)param_3 < 1) {
    piVar10 = (int *)0x0;
    local_114 = 1;
LAB_143d82869:
    ASN1_OBJECT_free(local_f0);
    ASN1_BIT_STRING_free(piVar10);
    *param_2 = (longlong)local_120;
    return local_114;
  }
  local_158 = (int)uVar16;
  uVar6 = ASN1_get_object(&local_120,local_138,&local_118,&local_100);
  if ((char)uVar6 < '\0') {
    piVar10 = (int *)0x0;
    iVar7 = BIO_write(param_1,"Error in encoding\n",0x12);
    param_2 = local_130;
    if (0 < iVar7) {
      local_114 = 0;
    }
    goto LAB_143d82869;
  }
  iVar13 = (int)local_120 - (int)pbVar15;
  local_f8 = (int)uVar16 - iVar13;
  local_128 = iVar13;
  iVar7 = BIO_printf(param_1,"%5ld:",((int)pbVar15 - (int)*plVar4) + param_4);
  if (iVar7 < 1) goto LAB_143d8281f;
  if (uVar6 == 0x21) {
    iVar7 = BIO_printf(param_1,"d=%-2d hl=%ld l=inf  ",param_5,iVar13);
  }
  else {
    local_158 = local_138[0];
    iVar7 = BIO_printf(param_1,"d=%-2d hl=%ld l=%4ld ",param_5,iVar13);
  }
  uVar5 = local_100;
  uVar14 = local_118;
  if (iVar7 < 1) goto LAB_143d8281f;
  pcVar11 = "cons: ";
  if ((uVar6 & 0x20) == 0) {
    pcVar11 = "prim: ";
  }
  iVar7 = BIO_write(param_1,pcVar11,6);
  if (iVar7 < 6) goto LAB_143d8281f;
  iVar7 = 0;
  if (param_6 != 0) {
    iVar7 = param_5;
  }
  BIO_indent(param_1,iVar7,0x80);
  pcVar11 = local_d8;
  bVar1 = (byte)uVar5;
  if ((bVar1 & 0xc0) == 0xc0) {
    pcVar18 = "priv [ %d ] ";
LAB_143d82039:
    BIO_snprintf(local_d8,0x80,pcVar18,uVar14);
  }
  else {
    if ((char)bVar1 < '\0') {
      pcVar18 = "cont [ %d ]";
      goto LAB_143d82039;
    }
    if ((uVar5 & 0x40) != 0) {
      pcVar18 = "appl [ %d ]";
      goto LAB_143d82039;
    }
    if (0x1e < (int)uVar14) {
      pcVar18 = "<ASN1 %d>";
      goto LAB_143d82039;
    }
    if ((uVar14 - 0x102 & 0xfffffff7) == 0) {
      uVar14 = uVar14 & 0xfffffeff;
    }
    if (uVar14 < 0x1f) {
      pcVar11 = (&PTR_DAT_145da61d0)[(int)uVar14];
    }
    else {
      pcVar11 = "(unknown)";
    }
  }
  iVar13 = BIO_printf(param_1,"%-18s",pcVar11);
  pbVar12 = local_120;
  iVar7 = local_128;
  if (iVar13 < 1) goto LAB_143d8281f;
  if ((uVar6 & 0x20) != 0) {
    pbVar17 = local_120 + local_138[0];
    iVar13 = BIO_write(param_1,&DAT_143fc48d8,1);
    pbVar15 = local_e8;
    iVar7 = local_fc;
    param_2 = local_130;
    if (0 < iVar13) {
      if (local_138[0] <= local_f8) {
        if ((uVar6 == 0x21) && (local_138[0] == 0)) {
          do {
            local_148 = param_7;
            local_150 = param_6;
            local_158 = param_5 + 1;
            iVar13 = asn1_parse2(param_1,&local_120,(int)pbVar15 - (int)local_120,
                                 ((int)local_120 - (int)*param_2) + iVar7);
            if (iVar13 == 0) goto LAB_143d827f9;
          } while ((iVar13 != 2) && (local_120 < pbVar15));
          local_138[0] = (int)local_120 - (int)pbVar12;
        }
        else if (local_120 < pbVar17) {
          iVar13 = local_138[0];
          do {
            local_148 = param_7;
            iVar19 = (int)local_120;
            local_150 = param_6;
            local_158 = param_5 + 1;
            iVar8 = asn1_parse2(param_1,&local_120,iVar13,(iVar7 - (int)*param_2) + iVar19);
            if (iVar8 == 0) goto LAB_143d827f9;
            iVar13 = iVar13 + (iVar19 - (int)local_120);
          } while (local_120 < pbVar17);
        }
        goto LAB_143d827df;
      }
      BIO_printf(param_1,"length is greater than %ld\n",local_f8);
      local_114 = 0;
    }
    goto LAB_143d8281f;
  }
  if (local_100 != 0) {
    local_120 = local_120 + local_138[0];
    iVar7 = BIO_write(param_1,&DAT_143fc48d8,1);
    param_2 = local_130;
    if (iVar7 < 1) goto LAB_143d82801;
    goto LAB_143d827df;
  }
  bVar2 = false;
  bVar3 = false;
  if ((local_118 < 0x1b) && ((0x5dc1000U >> (local_118 & 0x1f) & 1) != 0)) {
    iVar7 = BIO_write(param_1,&DAT_145cc3708,1);
    if ((iVar7 < 1) ||
       ((iVar7 = local_128, bVar3 = bVar2, 0 < local_138[0] &&
        (iVar13 = BIO_write(param_1,local_120), iVar7 = local_128, iVar13 != local_138[0]))))
    goto LAB_143d8281f;
    goto LAB_143d82735;
  }
  if (local_118 == 6) {
    local_108 = pbVar15;
    lVar9 = d2i_ASN1_OBJECT(&local_f0,&local_108,local_138[0] + local_128);
    if (lVar9 != 0) {
      iVar13 = BIO_write(param_1,&DAT_145cc3708,1);
      if (0 < iVar13) {
        i2a_ASN1_OBJECT(param_1,local_f0);
        bVar3 = bVar2;
        goto LAB_143d82735;
      }
      goto LAB_143d8281f;
    }
    iVar13 = BIO_puts(param_1,":BAD OBJECT");
    if (iVar13 < 1) goto LAB_143d8281f;
    local_110 = 1;
    goto LAB_143d8273c;
  }
  if (local_118 == 1) {
    if (local_138[0] != 1) {
      iVar7 = BIO_puts(param_1,":BAD BOOLEAN");
      if (iVar7 < 1) goto LAB_143d8281f;
      local_110 = 1;
    }
    iVar7 = local_128;
    if (0 < local_138[0]) {
      BIO_printf(param_1,&DAT_145da64a8,*local_120);
      iVar7 = local_128;
    }
  }
  else {
    if (local_118 == 0x1e) goto LAB_143d82735;
    if (local_118 != 4) {
      if (local_118 == 2) {
        local_108 = pbVar15;
        piVar10 = (int *)d2i_ASN1_INTEGER(0,&local_108,local_138[0] + local_128);
        if (piVar10 == (int *)0x0) {
          iVar13 = BIO_puts(param_1,":BAD INTEGER");
          if (0 < iVar13) {
            local_110 = 1;
LAB_143d825b5:
            ASN1_BIT_STRING_free(piVar10);
            goto LAB_143d82735;
          }
        }
        else {
          iVar13 = BIO_write(param_1,&DAT_145cc3708,1);
          if ((0 < iVar13) &&
             ((piVar10[1] != 0x102 || (iVar13 = BIO_write(param_1,&DAT_145cc6554,1), 0 < iVar13))))
          {
            iVar13 = *piVar10;
            iVar8 = 0;
            lVar9 = 0;
            if (0 < iVar13) {
              do {
                iVar13 = BIO_printf(param_1,&DAT_145d77a28,
                                    *(undefined1 *)(*(longlong *)(piVar10 + 2) + lVar9));
                if (iVar13 < 1) goto LAB_143d8281f;
                iVar13 = *piVar10;
                iVar8 = iVar8 + 1;
                lVar9 = lVar9 + 1;
              } while (iVar8 < iVar13);
            }
            if (iVar13 != 0) goto LAB_143d825b5;
            iVar13 = BIO_write(param_1,&DAT_145d778fc,2);
            if (0 < iVar13) {
              ASN1_BIT_STRING_free(piVar10);
              goto LAB_143d82735;
            }
          }
        }
      }
      else if (local_118 == 10) {
        local_108 = pbVar15;
        piVar10 = (int *)FUN_143d1a090(0,&local_108,local_138[0] + local_128);
        if (piVar10 == (int *)0x0) {
          iVar13 = BIO_puts(param_1,":BAD ENUMERATED");
          if (0 < iVar13) {
            local_110 = 1;
LAB_143d826c5:
            ASN1_BIT_STRING_free(piVar10);
            goto LAB_143d82735;
          }
        }
        else {
          iVar13 = BIO_write(param_1,&DAT_145cc3708,1);
          if ((0 < iVar13) &&
             ((piVar10[1] != 0x10a || (iVar13 = BIO_write(param_1,&DAT_145cc6554,1), 0 < iVar13))))
          {
            iVar13 = *piVar10;
            iVar8 = 0;
            lVar9 = 0;
            if (0 < iVar13) {
              do {
                iVar13 = BIO_printf(param_1,&DAT_145d77a28,
                                    *(undefined1 *)(*(longlong *)(piVar10 + 2) + lVar9));
                if (iVar13 < 1) goto LAB_143d8281f;
                iVar13 = *piVar10;
                iVar8 = iVar8 + 1;
                lVar9 = lVar9 + 1;
              } while (iVar8 < iVar13);
            }
            if (iVar13 != 0) goto LAB_143d826c5;
            iVar13 = BIO_write(param_1,&DAT_145d778fc,2);
            if (0 < iVar13) {
              ASN1_BIT_STRING_free(piVar10);
              goto LAB_143d82735;
            }
          }
        }
      }
      else {
        if ((local_138[0] < 1) || (param_7 == 0)) goto LAB_143d82735;
        iVar7 = BIO_write(param_1,&DAT_143fc48d8,1);
        if (0 < iVar7) {
          iVar7 = local_138[0];
          if ((param_7 != -1) && (param_7 <= local_138[0])) {
            iVar7 = param_7;
          }
          iVar7 = BIO_dump_indent(param_1,local_120,iVar7,6);
          if (0 < iVar7) {
            iVar7 = local_128;
            bVar3 = true;
            goto LAB_143d82735;
          }
        }
      }
      goto LAB_143d8281f;
    }
    local_108 = pbVar15;
    piVar10 = (int *)d2i_ASN1_OCTET_STRING(0,&local_108,local_138[0] + local_128);
    if ((piVar10 != (int *)0x0) && (0 < *piVar10)) {
      local_108 = *(byte **)(piVar10 + 2);
      pbVar12 = local_108;
      if (0 < (longlong)*piVar10) {
        do {
          bVar1 = *pbVar12;
          if (((bVar1 < 0x20) && ((0xffffd9ffU >> (bVar1 & 0x1f) & 1) != 0)) || (0x7e < bVar1)) {
            if (param_7 == 0) {
              iVar13 = BIO_write(param_1,"[HEX DUMP]:",0xb);
              param_2 = local_130;
              if (iVar13 < 1) goto LAB_143d82869;
              iVar13 = 0;
              lVar9 = 0;
              if (0 < *piVar10) goto LAB_143d82430;
              goto LAB_143d823ec;
            }
            iVar13 = BIO_write(param_1,&DAT_143fc48d8,1);
            param_2 = local_130;
            if (iVar13 < 1) goto LAB_143d82869;
            if ((param_7 == -1) || (iVar13 = param_7, *piVar10 < param_7)) {
              iVar13 = *piVar10;
            }
            iVar13 = BIO_dump_indent(param_1,local_108,iVar13,6);
            param_2 = local_130;
            if (iVar13 < 1) goto LAB_143d82869;
            ASN1_BIT_STRING_free(piVar10);
            bVar3 = true;
            goto LAB_143d82735;
          }
          pbVar12 = pbVar12 + 1;
        } while ((longlong)pbVar12 - (longlong)local_108 < (longlong)*piVar10);
      }
      iVar13 = BIO_write(param_1,&DAT_145cc3708,1);
      param_2 = local_130;
      if ((iVar13 < 1) ||
         (iVar13 = BIO_write(param_1,local_108,*piVar10), param_2 = local_130, iVar13 < 1))
      goto LAB_143d82869;
    }
LAB_143d823ec:
    ASN1_BIT_STRING_free(piVar10);
    bVar3 = bVar2;
  }
LAB_143d82735:
  bVar2 = bVar3;
  if (local_110 != 0) {
LAB_143d8273c:
    pbVar15 = pbVar15 + iVar7;
    iVar7 = BIO_puts(param_1,&DAT_145da64e0);
    if (iVar7 < 1) goto LAB_143d8281f;
    iVar7 = 0;
    if (0 < local_138[0]) {
      do {
        iVar13 = BIO_printf(param_1,&DAT_145d77a28,*pbVar15);
        if (iVar13 < 1) goto LAB_143d8281f;
        iVar7 = iVar7 + 1;
        pbVar15 = pbVar15 + 1;
      } while (iVar7 < local_138[0]);
    }
    iVar7 = BIO_puts(param_1,&DAT_145cbda38);
    if (iVar7 < 1) goto LAB_143d8281f;
  }
  if ((bVar2) || (iVar7 = BIO_write(param_1,&DAT_143fc48d8,1), 0 < iVar7)) {
    local_120 = local_120 + local_138[0];
    param_2 = local_130;
    if ((local_118 == 0) && (local_100 == 0)) {
      piVar10 = (int *)0x0;
      local_114 = 2;
      goto LAB_143d82869;
    }
LAB_143d827df:
    param_3 = local_f8 - local_138[0];
    uVar16 = (ulonglong)param_3;
    pbVar15 = local_120;
    plVar4 = local_130;
    param_4 = local_fc;
    goto joined_r0x000143d81eff;
  }
LAB_143d8281f:
  piVar10 = (int *)0x0;
  param_2 = local_130;
  goto LAB_143d82869;
LAB_143d827f9:
  local_114 = 0;
LAB_143d82801:
  piVar10 = (int *)0x0;
  goto LAB_143d82869;
  while( true ) {
    iVar13 = iVar13 + 1;
    lVar9 = lVar9 + 1;
    if (*piVar10 <= iVar13) break;
LAB_143d82430:
    iVar8 = BIO_printf(param_1,&DAT_145d77a28,local_108[lVar9]);
    param_2 = local_130;
    if (iVar8 < 1) goto LAB_143d82869;
  }
  ASN1_BIT_STRING_free(piVar10);
  goto LAB_143d82735;
}



// FUNCTION 143d828c0 ASN1_mbstring_copy body=41 status=ok
// SIG undefined ASN1_mbstring_copy(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_mbstring_copy(void)

{
  ASN1_mbstring_ncopy();
  return;
}



// FUNCTION 143d828f0 ASN1_mbstring_ncopy body=1752 status=ok
// SIG undefined ASN1_mbstring_ncopy(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint ASN1_mbstring_ncopy(undefined8 *param_1,byte *param_2,uint param_3,int param_4,uint param_5,
                        int param_6,int param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  code *pcVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  uint local_98;
  char local_94;
  int local_90;
  byte *local_88;
  longlong local_80;
  undefined8 *local_78;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  uVar17 = (ulonglong)param_3;
  if (param_3 == 0xffffffff) {
    uVar17 = 0xffffffffffffffff;
    do {
      uVar17 = uVar17 + 1;
    } while (param_2[uVar17] != 0);
  }
  if (param_5 == 0) {
    param_5 = 0x2806;
  }
  uVar12 = (uint)uVar17;
  local_90 = param_4;
  local_88 = param_2;
  local_78 = param_1;
  if (param_4 == 0x1000) {
    uVar15 = 0;
    uVar13 = uVar17 & 0xffffffff;
    uVar11 = uVar12;
    while (uVar11 != 0) {
      iVar7 = UTF8_getc(param_2,uVar13,&local_98);
      if (iVar7 < 0) {
        local_a8 = (longlong *)CONCAT44(local_a8._4_4_,0x55);
        ERR_put_error(0xd,0x7a,0x86,"crypto\\asn1\\a_mbstr.c");
        return 0xffffffff;
      }
      uVar11 = (int)uVar13 - iVar7;
      uVar13 = (ulonglong)uVar11;
      param_2 = param_2 + iVar7;
      uVar15 = uVar15 + 1;
    }
  }
  else {
    uVar15 = uVar12;
    if (param_4 != 0x1001) {
      if (param_4 == 0x1002) {
        if ((uVar17 & 1) != 0) {
          local_a8 = (longlong *)CONCAT44(local_a8._4_4_,0x41);
          ERR_put_error(0xd,0x7a,0x81,"crypto\\asn1\\a_mbstr.c");
          return 0xffffffff;
        }
        uVar15 = (int)uVar12 >> 1;
      }
      else {
        if (param_4 != 0x1004) {
          local_a8 = (longlong *)CONCAT44(local_a8._4_4_,0x5f);
          ERR_put_error(0xd,0x7a,0xa0,"crypto\\asn1\\a_mbstr.c");
          return 0xffffffff;
        }
        if ((uVar17 & 3) != 0) {
          local_a8 = (longlong *)CONCAT44(local_a8._4_4_,0x4a);
          ERR_put_error(0xd,0x7a,0x85,"crypto\\asn1\\a_mbstr.c");
          return 0xffffffff;
        }
        uVar15 = (int)uVar12 >> 2;
      }
    }
  }
  if ((0 < param_6) && ((int)uVar15 < param_6)) {
    local_a8 = (longlong *)CONCAT44(local_a8._4_4_,100);
    ERR_put_error(0xd,0x7a,0x98,"crypto\\asn1\\a_mbstr.c");
    BIO_snprintf(local_68,0x20,&DAT_145cba150,param_6);
    ERR_add_error_data(2,"minsize=",local_68);
    return 0xffffffff;
  }
  if ((0 < param_7) && (param_7 < (int)uVar15)) {
    local_a8 = (longlong *)CONCAT44(local_a8._4_4_,0x6b);
    ERR_put_error(0xd,0x7a,0x97,"crypto\\asn1\\a_mbstr.c");
    BIO_snprintf(local_68,0x20,&DAT_145cba150,param_7);
    ERR_add_error_data(2,"maxsize=",local_68);
    return 0xffffffff;
  }
  uVar13 = uVar17 & 0xffffffff;
  pbVar14 = local_88;
  puVar5 = local_78;
  uVar11 = uVar12;
  while (local_78 = puVar5, uVar11 != 0) {
    iVar7 = (int)uVar13;
    if (local_90 == 0x1001) {
      bVar4 = *pbVar14;
      pbVar14 = pbVar14 + 1;
      uVar13 = (ulonglong)(iVar7 - 1);
      local_98 = (uint)bVar4;
    }
    else if (local_90 == 0x1002) {
      bVar4 = *pbVar14;
      pbVar1 = pbVar14 + 1;
      pbVar14 = pbVar14 + 2;
      local_98 = (uint)CONCAT11(bVar4,*pbVar1);
      uVar13 = (ulonglong)(iVar7 - 2);
    }
    else if (local_90 == 0x1004) {
      bVar4 = *pbVar14;
      pbVar1 = pbVar14 + 1;
      pbVar2 = pbVar14 + 2;
      pbVar3 = pbVar14 + 3;
      pbVar14 = pbVar14 + 4;
      local_98 = (uint)*pbVar3 | (uint)*pbVar2 << 8 | (uint)*pbVar1 << 0x10 | (uint)bVar4 << 0x18;
      uVar13 = (ulonglong)(iVar7 - 4);
    }
    else {
      iVar6 = UTF8_getc(pbVar14,uVar13,&local_98);
      if (iVar6 < 0) goto LAB_143d82cd2;
      uVar13 = (ulonglong)(uint)(iVar7 - iVar6);
      pbVar14 = pbVar14 + iVar6;
    }
    uVar11 = local_98;
    uVar16 = local_98;
    if (0x7fffffff < local_98) {
      uVar16 = 0x7fffffff;
    }
    if ((((param_5 & 1) != 0) && (iVar7 = ossl_ctype_check(uVar16,4), iVar7 == 0)) &&
       (uVar16 != 0x20)) {
      param_5 = param_5 & 0xfffffffe;
    }
    if (((param_5 & 2) != 0) && (iVar7 = ossl_ctype_check(uVar16,0x800), iVar7 == 0)) {
      param_5 = param_5 & 0xfffffffd;
    }
    if (((param_5 & 0x10) != 0) && ((uVar16 & 0xffffff80) != 0)) {
      param_5 = param_5 & 0xffffffef;
    }
    if (((param_5 & 4) != 0) && (0xff < uVar11)) {
      param_5 = param_5 & 0xfffffffb;
    }
    if (((param_5 >> 0xb & 1) != 0) && (0xffff < uVar11)) {
      param_5 = param_5 & 0xfffff7ff;
    }
    if (param_5 == 0) {
LAB_143d82cd2:
      local_a8 = (longlong *)CONCAT44(local_a8._4_4_,0x73);
      ERR_put_error(0xd,0x7a,0x7c,"crypto\\asn1\\a_mbstr.c");
      return 0xffffffff;
    }
    puVar5 = local_78;
    uVar11 = (uint)uVar13;
  }
  iVar7 = 0x1001;
  if ((param_5 & 1) == 0) {
    if ((param_5 & 2) == 0) {
      if ((param_5 & 0x10) == 0) {
        if ((param_5 & 4) == 0) {
          if ((param_5 >> 0xb & 1) == 0) {
            if ((param_5 >> 8 & 1) == 0) {
              iVar7 = 0x1000;
              uVar11 = 0xc;
            }
            else {
              iVar7 = 0x1004;
              uVar11 = 0x1c;
            }
          }
          else {
            iVar7 = 0x1002;
            uVar11 = 0x1e;
          }
        }
        else {
          uVar11 = 0x14;
        }
      }
      else {
        uVar11 = 0x16;
      }
    }
    else {
      uVar11 = 0x13;
    }
  }
  else {
    uVar11 = 0x12;
  }
  if (puVar5 == (undefined8 *)0x0) {
    return uVar11;
  }
  puVar9 = (uint *)*puVar5;
  if (puVar9 == (uint *)0x0) {
    local_94 = '\x01';
    puVar9 = (uint *)ASN1_STRING_type_new(uVar11);
    if (puVar9 == (uint *)0x0) {
      local_a8 = (longlong *)CONCAT44(local_a8._4_4_,0x98);
      goto LAB_143d82dad;
    }
    *puVar5 = puVar9;
  }
  else {
    local_94 = '\0';
    CRYPTO_free(*(undefined8 *)(puVar9 + 2),"crypto\\asn1\\a_mbstr.c",0x90);
    puVar9[1] = uVar11;
    puVar9[2] = 0;
    puVar9[3] = 0;
    *puVar9 = 0;
  }
  iVar6 = local_90;
  if (local_90 == iVar7) {
    iVar7 = ASN1_STRING_set(puVar9,local_88,uVar17 & 0xffffffff);
    if (iVar7 != 0) {
      return uVar11;
    }
    local_a8 = (longlong *)CONCAT44(local_a8._4_4_,0xa0);
  }
  else {
    if (iVar7 == 0x1000) {
      uVar15 = 0;
      uVar13 = uVar17 & 0xffffffff;
      pbVar14 = local_88;
      while (uVar12 != 0) {
        iVar7 = (int)uVar13;
        if (iVar6 == 0x1001) {
          bVar4 = *pbVar14;
          pbVar14 = pbVar14 + 1;
          uVar13 = (ulonglong)(iVar7 - 1);
          local_98 = (uint)bVar4;
        }
        else if (iVar6 == 0x1002) {
          bVar4 = *pbVar14;
          pbVar1 = pbVar14 + 1;
          pbVar14 = pbVar14 + 2;
          local_98 = (uint)CONCAT11(bVar4,*pbVar1);
          uVar13 = (ulonglong)(iVar7 - 2);
        }
        else if (iVar6 == 0x1004) {
          bVar4 = *pbVar14;
          pbVar1 = pbVar14 + 1;
          pbVar2 = pbVar14 + 2;
          pbVar3 = pbVar14 + 3;
          pbVar14 = pbVar14 + 4;
          local_98 = (uint)*pbVar3 |
                     (uint)*pbVar2 << 8 | (uint)*pbVar1 << 0x10 | (uint)bVar4 << 0x18;
          uVar13 = (ulonglong)(iVar7 - 4);
        }
        else {
          iVar8 = UTF8_getc(pbVar14,uVar13,&local_98);
          if (iVar8 < 0) break;
          uVar13 = (ulonglong)(uint)(iVar7 - iVar8);
          pbVar14 = pbVar14 + iVar8;
        }
        iVar7 = UTF8_putc(0,0xffffffff,local_98);
        uVar15 = uVar15 + iVar7;
        uVar12 = (uint)uVar13;
      }
      pcVar10 = cpy_utf8;
    }
    else if (iVar7 == 0x1001) {
      pcVar10 = (code *)&LAB_143d82fd0;
    }
    else if (iVar7 == 0x1002) {
      uVar15 = uVar15 * 2;
      pcVar10 = (code *)&LAB_143d82fe0;
    }
    else if (iVar7 == 0x1004) {
      uVar15 = uVar15 * 4;
      pcVar10 = (code *)&LAB_143d83000;
    }
    else {
      uVar15 = 0;
      pcVar10 = (code *)0x0;
    }
    local_80 = CRYPTO_malloc((longlong)(int)(uVar15 + 1),"crypto\\asn1\\a_mbstr.c",0xbd);
    if (local_80 != 0) {
      *puVar9 = uVar15;
      local_a8 = &local_80;
      *(longlong *)(puVar9 + 2) = local_80;
      *(undefined1 *)((int)uVar15 + local_80) = 0;
      traverse_string(local_88,uVar17 & 0xffffffff,iVar6,pcVar10);
      return uVar11;
    }
    if (local_94 != '\0') {
      ASN1_STRING_free(puVar9);
    }
    local_a8 = (longlong *)CONCAT44(local_a8._4_4_,0xc0);
  }
LAB_143d82dad:
  ERR_put_error(0xd,0x7a,0x41,"crypto\\asn1\\a_mbstr.c");
  return 0xffffffff;
}



// FUNCTION 143d83030 cpy_utf8 body=51 status=ok
// SIG undefined cpy_utf8(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 cpy_utf8(undefined4 param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = UTF8_putc(*param_2,0xff,param_1);
  *param_2 = *param_2 + (longlong)iVar1;
  return 1;
}



// FUNCTION 143d83070 traverse_string body=259 status=ok
// SIG undefined traverse_string(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 traverse_string(byte *param_1,int param_2,int param_3,code *param_4,undefined8 param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  uint local_res10 [2];
  
  do {
    if (param_2 == 0) {
      return 1;
    }
    if (param_3 == 0x1001) {
      bVar4 = *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
      local_res10[0] = (uint)bVar4;
    }
    else if (param_3 == 0x1002) {
      bVar4 = *param_1;
      pbVar1 = param_1 + 1;
      param_1 = param_1 + 2;
      local_res10[0] = (uint)CONCAT11(bVar4,*pbVar1);
      param_2 = param_2 + -2;
    }
    else if (param_3 == 0x1004) {
      bVar4 = *param_1;
      pbVar1 = param_1 + 1;
      pbVar2 = param_1 + 2;
      pbVar3 = param_1 + 3;
      param_1 = param_1 + 4;
      local_res10[0] =
           (uint)*pbVar3 | (uint)*pbVar2 << 8 | (uint)*pbVar1 << 0x10 | (uint)bVar4 << 0x18;
      param_2 = param_2 + -4;
    }
    else {
      iVar5 = UTF8_getc(param_1,param_2,local_res10);
      if (iVar5 < 0) {
        return 0xffffffff;
      }
      param_2 = param_2 - iVar5;
      param_1 = param_1 + iVar5;
    }
  } while ((param_4 == (code *)0x0) || (uVar6 = (*param_4)(local_res10[0],param_5), 0 < (int)uVar6))
  ;
  return uVar6;
}



// FUNCTION 143d83180 v2i_ASN1_BIT_STRING body=450 status=ok
// SIG undefined v2i_ASN1_BIT_STRING(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong v2i_ASN1_BIT_STRING(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int iVar9;
  longlong lVar10;
  
  lVar4 = ASN1_BIT_STRING_new();
  if (lVar4 == 0) {
    ERR_put_error(0x22,0x65,0x41,"crypto\\x509v3\\v3_bitst.c",0x43);
    return 0;
  }
  iVar9 = 0;
  iVar3 = OPENSSL_sk_num(param_3);
  if (0 < iVar3) {
    do {
      puVar5 = (undefined8 *)OPENSSL_sk_value(param_3,iVar9);
      puVar8 = *(undefined4 **)(param_1 + 0x60);
      pcVar6 = *(char **)(puVar8 + 2);
      if (pcVar6 != (char *)0x0) {
        do {
          pcVar7 = *(char **)(puVar8 + 4);
          lVar10 = puVar5[1] - (longlong)pcVar7;
          do {
            cVar1 = *pcVar7;
            cVar2 = pcVar7[lVar10];
            if (cVar1 != cVar2) break;
            pcVar7 = pcVar7 + 1;
          } while (cVar2 != '\0');
          if (cVar1 == cVar2) {
LAB_143d83266:
            iVar3 = ASN1_BIT_STRING_set_bit(lVar4,*puVar8,1);
            if (iVar3 == 0) {
              ERR_put_error(0x22,0x65,0x41,"crypto\\x509v3\\v3_bitst.c",0x4d);
              ASN1_BIT_STRING_free(lVar4);
              return 0;
            }
            break;
          }
          lVar10 = puVar5[1] - (longlong)pcVar6;
          do {
            cVar1 = *pcVar6;
            cVar2 = pcVar6[lVar10];
            if (cVar1 != cVar2) break;
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          if (cVar1 == cVar2) goto LAB_143d83266;
          pcVar6 = *(char **)(puVar8 + 8);
          puVar8 = puVar8 + 6;
        } while (pcVar6 != (char *)0x0);
      }
      if (*(longlong *)(puVar8 + 2) == 0) {
        ERR_put_error(0x22,0x65,0x6f,"crypto\\x509v3\\v3_bitst.c",0x56);
        ERR_add_error_data(6,"section:",*puVar5,",name:",puVar5[1],",value:",puVar5[2]);
        ASN1_BIT_STRING_free(lVar4);
        return 0;
      }
      iVar9 = iVar9 + 1;
      iVar3 = OPENSSL_sk_num(param_3);
    } while (iVar9 < iVar3);
  }
  return lVar4;
}



// FUNCTION 143d83350 i2v_ASN1_BIT_STRING body=109 status=ok
// SIG undefined i2v_ASN1_BIT_STRING(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 i2v_ASN1_BIT_STRING(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 local_res18 [2];
  
  puVar3 = *(undefined4 **)(param_1 + 0x60);
  local_res18[0] = param_3;
  if (*(longlong *)(*(undefined4 **)(param_1 + 0x60) + 2) != 0) {
    do {
      iVar2 = ASN1_BIT_STRING_get_bit(param_2,*puVar3);
      if (iVar2 != 0) {
        X509V3_add_value(*(undefined8 *)(puVar3 + 2),0,local_res18);
      }
      plVar1 = (longlong *)(puVar3 + 8);
      puVar3 = puVar3 + 6;
    } while (*plVar1 != 0);
    return local_res18[0];
  }
  return param_3;
}



// FUNCTION 143d833d0 v2i_EXTENDED_KEY_USAGE body=321 status=ok
// SIG undefined v2i_EXTENDED_KEY_USAGE(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong v2i_EXTENDED_KEY_USAGE(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar6;
  
  iVar1 = OPENSSL_sk_num(param_3);
  lVar2 = OPENSSL_sk_new_reserve(0,iVar1);
  if (lVar2 == 0) {
    ERR_put_error(0x22,0x67,0x41,"crypto\\x509v3\\v3_extku.c",0x52);
    OPENSSL_sk_free(0);
    return 0;
  }
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      puVar3 = (undefined8 *)OPENSSL_sk_value(param_3,iVar5);
      lVar4 = puVar3[2];
      if (lVar4 == 0) {
        lVar4 = puVar3[1];
      }
      lVar4 = OBJ_txt2obj(lVar4,0);
      uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
      if (lVar4 == 0) {
        OPENSSL_sk_pop_free(lVar2,ASN1_OBJECT_free);
        ERR_put_error(0x22,0x67,0x6e,"crypto\\x509v3\\v3_extku.c",CONCAT44(uVar6,0x60));
        ERR_add_error_data(6,"section:",*puVar3,",name:",puVar3[1],",value:",puVar3[2]);
        return 0;
      }
      OPENSSL_sk_push(lVar2,lVar4);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  return lVar2;
}



// FUNCTION 143d83520 i2v_EXTENDED_KEY_USAGE body=161 status=ok
// SIG undefined i2v_EXTENDED_KEY_USAGE(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 i2v_EXTENDED_KEY_USAGE(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78 [2];
  undefined1 local_68 [80];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143d83530;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  iVar3 = 0;
  local_78[0] = param_3;
  iVar1 = OPENSSL_sk_num(param_2);
  if (0 < iVar1) {
    do {
      uVar2 = OPENSSL_sk_value(param_2,iVar3);
      i2t_ASN1_OBJECT(local_68,0x50,uVar2);
      X509V3_add_value(0,local_68,local_78);
      iVar3 = iVar3 + 1;
      iVar1 = OPENSSL_sk_num(param_2);
    } while (iVar3 < iVar1);
  }
  return local_78[0];
}



// FUNCTION 143d835e0 i2r_PKEY_USAGE_PERIOD body=175 status=ok
// SIG undefined i2r_PKEY_USAGE_PERIOD(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
i2r_PKEY_USAGE_PERIOD(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  BIO_printf(param_3,&DAT_145d811b8,param_4,&DAT_143f3f584);
  if (*param_2 != 0) {
    BIO_write(param_3,"Not Before: ",0xc);
    ASN1_GENERALIZEDTIME_print(param_3,*param_2);
    if (param_2[1] == 0) {
      return 1;
    }
    BIO_write(param_3,&DAT_145cbbc74,2);
  }
  if (param_2[1] != 0) {
    BIO_write(param_3,"Not After: ",0xb);
    ASN1_GENERALIZEDTIME_print(param_3,param_2[1]);
  }
  return 1;
}



// FUNCTION 143d836b0 sxnet_i2r body=236 status=ok
// SIG undefined sxnet_i2r(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 sxnet_i2r(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar6 = 1;
  iVar1 = ASN1_INTEGER_get(*param_2);
  BIO_printf(param_3,"%*sVersion: %ld (0x%lX)",param_4,&DAT_143f3f584,CONCAT44(uVar5,iVar1 + 1),
             CONCAT44(uVar6,iVar1));
  iVar4 = 0;
  iVar1 = OPENSSL_sk_num(param_2[1]);
  if (0 < iVar1) {
    do {
      puVar2 = (undefined8 *)OPENSSL_sk_value(param_2[1],iVar4);
      uVar3 = i2s_ASN1_INTEGER(0,*puVar2);
      BIO_printf(param_3,"\n%*sZone: %s, User: ",param_4,&DAT_143f3f584,uVar3);
      CRYPTO_free(uVar3,"crypto\\x509v3\\v3_sxnet.c",0x46);
      ASN1_STRING_print(param_3,puVar2[1]);
      iVar4 = iVar4 + 1;
      iVar1 = OPENSSL_sk_num(param_2[1]);
    } while (iVar4 < iVar1);
  }
  return 1;
}



// FUNCTION 143d837a0 sxnet_v2i body=192 status=ok
// SIG undefined sxnet_v2i(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong sxnet_v2i(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong local_res20;
  undefined8 uVar7;
  
  uVar7 = 0x143d837b5;
  uVar5 = 0;
  local_res20 = 0;
  iVar2 = OPENSSL_sk_num(param_3);
  uVar6 = uVar5;
  if (0 < iVar2) {
    do {
      lVar3 = OPENSSL_sk_value(param_3,uVar5);
      uVar1 = *(undefined8 *)(lVar3 + 0x10);
      lVar3 = s2i_ASN1_INTEGER(0,*(undefined8 *)(lVar3 + 8));
      if (lVar3 == 0) {
        ERR_put_error(0x22,0x7d,0x83,"crypto\\x509v3\\v3_sxnet.c",0x6d,uVar7);
        return 0;
      }
      iVar2 = SXNET_add_id_INTEGER(&local_res20,lVar3,uVar1,0xffffffff);
      if (iVar2 == 0) {
        return 0;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      iVar2 = OPENSSL_sk_num(param_3);
      uVar6 = local_res20;
    } while ((int)uVar4 < iVar2);
  }
  return uVar6;
}



// FUNCTION 143d83860 SXNET_add_id_INTEGER body=479 status=ok
// SIG undefined SXNET_add_id_INTEGER(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
SXNET_add_id_INTEGER(longlong *param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  uVar8 = 0x143d83879;
  plVar5 = (longlong *)0x0;
  uVar6 = param_4 & 0xffffffff;
  if (((param_1 == (longlong *)0x0) || (param_2 == 0)) || (param_3 == 0)) {
    ERR_put_error(0x22,0x7e,0x6b,"crypto\\x509v3\\v3_sxnet.c",0x90,0x143d83879);
    return 0;
  }
  lVar7 = -1;
  if ((int)param_4 == -1) {
    uVar6 = 0xffffffffffffffff;
    do {
      uVar6 = uVar6 + 1;
    } while (*(char *)(param_3 + uVar6) != '\0');
  }
  iVar2 = (int)uVar6;
  if (0x40 < iVar2) {
    ERR_put_error(0x22,0x7e,0x84,"crypto\\x509v3\\v3_sxnet.c",0x96,0x143d83879);
    return 0;
  }
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)ASN1_item_new(&DAT_145da6b90);
    if ((puVar3 == (undefined8 *)0x0) || (iVar1 = ASN1_INTEGER_set(*puVar3,0), iVar1 == 0))
    goto LAB_143d839cd;
    *param_1 = (longlong)puVar3;
  }
  lVar4 = SXNET_get_id_INTEGER(puVar3,param_2);
  if (lVar4 != 0) {
    ERR_put_error(0x22,0x7e,0x85,"crypto\\x509v3\\v3_sxnet.c",0xa2,uVar8);
    return 0;
  }
  plVar5 = (longlong *)ASN1_item_new(&DAT_145da6b20);
  if (plVar5 != (longlong *)0x0) {
    if (iVar2 == -1) {
      do {
        lVar7 = lVar7 + 1;
      } while (*(char *)(param_3 + lVar7) != '\0');
      iVar2 = (int)lVar7;
    }
    iVar2 = ASN1_OCTET_STRING_set(plVar5[1],param_3,iVar2);
    if ((iVar2 != 0) && (iVar2 = OPENSSL_sk_push(puVar3[1],plVar5), iVar2 != 0)) {
      *plVar5 = param_2;
      return 1;
    }
  }
LAB_143d839cd:
  ERR_put_error(0x22,0x7e,0x41,"crypto\\x509v3\\v3_sxnet.c",0xb3,uVar8);
  ASN1_item_free(plVar5,&DAT_145da6b20);
  ASN1_item_free(puVar3,&DAT_145da6b90);
  *param_1 = 0;
  return 0;
}



// FUNCTION 143d83a40 SXNET_get_id_INTEGER body=123 status=ok
// SIG undefined SXNET_get_id_INTEGER(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SXNET_get_id_INTEGER(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
  if (0 < iVar1) {
    do {
      puVar2 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 8),iVar3);
      iVar1 = ASN1_INTEGER_cmp(*puVar2,param_2);
      if (iVar1 == 0) {
        return puVar2[1];
      }
      iVar3 = iVar3 + 1;
      iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
    } while (iVar3 < iVar1);
  }
  return 0;
}



// FUNCTION 143d83ac0 i2s_ASN1_IA5STRING body=154 status=ok
// SIG undefined i2s_ASN1_IA5STRING(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void * i2s_ASN1_IA5STRING(undefined8 param_1,int *param_2)

{
  void *_Dst;
  undefined8 uVar1;
  
  uVar1 = 0x143d83acc;
  if ((param_2 != (int *)0x0) && (*param_2 != 0)) {
    _Dst = (void *)CRYPTO_malloc((longlong)*param_2 + 1,"crypto\\x509v3\\v3_ia5.c",0x22);
    if (_Dst == (void *)0x0) {
      ERR_put_error(0x22,0x95,0x41,"crypto\\x509v3\\v3_ia5.c",0x23,uVar1);
      return (void *)0x0;
    }
    _guard_xfg_dispatch_icall_nop(_Dst,*(void **)(param_2 + 2),(longlong)*param_2);
    *(undefined1 *)((longlong)*param_2 + (longlong)_Dst) = 0;
    return _Dst;
  }
  return (void *)0x0;
}



// FUNCTION 143d83b60 s2i_ASN1_IA5STRING body=189 status=ok
// SIG undefined s2i_ASN1_IA5STRING(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong s2i_ASN1_IA5STRING(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143d83b6c;
  if (param_3 == 0) {
    ERR_put_error(0x22,100,0x6b,"crypto\\x509v3\\v3_ia5.c",0x31,0x143d83b6c);
    return 0;
  }
  lVar2 = ASN1_IA5STRING_new();
  if (lVar2 == 0) {
    ERR_put_error(0x22,100,0x41,"crypto\\x509v3\\v3_ia5.c",0x3f,uVar4);
    return 0;
  }
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (*(char *)(param_3 + lVar3) != '\0');
  iVar1 = ASN1_STRING_set(lVar2,param_3);
  if (iVar1 == 0) {
    ASN1_BIT_STRING_free(lVar2);
    return 0;
  }
  return lVar2;
}



// FUNCTION 143d83c20 i2s_ASN1_OCTET_STRING body=28 status=ok
// SIG undefined i2s_ASN1_OCTET_STRING(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2s_ASN1_OCTET_STRING(undefined8 param_1,undefined4 *param_2)

{
  OPENSSL_buf2hexstr(*(undefined8 *)(param_2 + 2),*param_2);
  return;
}



// FUNCTION 143d83c40 s2i_skey_id body=487 status=ok
// SIG undefined s2i_skey_id(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * s2i_skey_id(undefined8 param_1,int *param_2,longlong param_3)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 local_90;
  int local_88;
  undefined4 local_84;
  undefined4 local_80 [2];
  undefined8 local_78 [2];
  undefined1 local_68 [64];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x143d83c4f;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  lVar3 = 0;
  do {
    lVar4 = lVar3 + 1;
    if (*(char *)(param_3 + lVar3) != (&DAT_145da7020)[lVar3]) {
      puVar2 = (undefined4 *)ASN1_OCTET_STRING_new();
      if (puVar2 == (undefined4 *)0x0) {
        local_98 = CONCAT44(local_98._4_4_,0x28);
        ERR_put_error(0x22,0x70,0x41,"crypto\\x509v3\\v3_skey.c");
        return (undefined4 *)0x0;
      }
      lVar3 = OPENSSL_hexstr2buf(param_3,local_80);
      *(longlong *)(puVar2 + 2) = lVar3;
      if (lVar3 == 0) {
        ASN1_BIT_STRING_free(puVar2);
        return (undefined4 *)0x0;
      }
      *puVar2 = local_80[0];
      return puVar2;
    }
    lVar3 = lVar4;
  } while (lVar4 != 5);
  puVar2 = (undefined4 *)ASN1_OCTET_STRING_new();
  if (puVar2 == (undefined4 *)0x0) {
    local_98 = CONCAT44(local_98._4_4_,0x45);
    ERR_put_error(0x22,0x73,0x41,"crypto\\x509v3\\v3_skey.c");
    return (undefined4 *)0x0;
  }
  if (param_2 == (int *)0x0) {
LAB_143d83d7c:
    local_98._0_4_ = 0x4d;
LAB_143d83d84:
    uVar5 = 0x72;
  }
  else {
    if (*param_2 == 1) {
      return puVar2;
    }
    if (*(longlong *)(param_2 + 6) == 0) {
      if (*(longlong *)(param_2 + 4) == 0) goto LAB_143d83d7c;
      lVar3 = *(longlong *)(*(longlong *)(param_2 + 4) + 0x50);
    }
    else {
      lVar3 = *(longlong *)(*(longlong *)(param_2 + 6) + 0x20);
    }
    if (lVar3 == 0) {
      local_98._0_4_ = 0x57;
      goto LAB_143d83d84;
    }
    local_98 = lVar3;
    X509_PUBKEY_get0_param(0,local_78,&local_88,0);
    local_98 = EVP_sha1();
    local_90 = 0;
    iVar1 = EVP_Digest(local_78[0],(longlong)local_88,local_68,&local_84);
    if (iVar1 == 0) goto LAB_143d83d9e;
    iVar1 = ASN1_OCTET_STRING_set(puVar2,local_68,local_84);
    if (iVar1 != 0) {
      return puVar2;
    }
    local_98 = CONCAT44(local_98._4_4_,0x61);
    uVar5 = 0x41;
  }
  ERR_put_error(0x22,0x73,uVar5,"crypto\\x509v3\\v3_skey.c");
LAB_143d83d9e:
  ASN1_BIT_STRING_free(puVar2);
  return (undefined4 *)0x0;
}



// FUNCTION 143d83e30 i2v_AUTHORITY_KEYID body=208 status=ok
// SIG undefined i2v_AUTHORITY_KEYID(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 i2v_AUTHORITY_KEYID(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 local_res18 [2];
  
  puVar1 = (undefined4 *)*param_2;
  local_res18[0] = param_3;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = OPENSSL_buf2hexstr(*(undefined8 *)(puVar1 + 2),*puVar1);
    X509V3_add_value(&DAT_145d81d28,uVar2,local_res18);
    CRYPTO_free(uVar2,"crypto\\x509v3\\v3_akey.c",0x2e);
  }
  if (param_2[1] != 0) {
    local_res18[0] = FUN_143d77df0(0);
  }
  puVar1 = (undefined4 *)param_2[2];
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = OPENSSL_buf2hexstr(*(undefined8 *)(puVar1 + 2),*puVar1);
    X509V3_add_value("serial",uVar2,local_res18);
    CRYPTO_free(uVar2,"crypto\\x509v3\\v3_akey.c",0x35);
    return local_res18[0];
  }
  return local_res18[0];
}



// FUNCTION 143d83f00 v2i_AUTHORITY_KEYID body=808 status=ok
// SIG undefined v2i_AUTHORITY_KEYID(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * v2i_AUTHORITY_KEYID(undefined8 param_1,int *param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  char cVar14;
  undefined4 uVar15;
  char cVar16;
  char cVar17;
  undefined4 uVar18;
  
  puVar10 = (undefined4 *)0x0;
  cVar16 = '\0';
  cVar14 = '\0';
  iVar2 = OPENSSL_sk_num(param_3);
  puVar6 = puVar10;
  cVar17 = '\0';
  if (0 < iVar2) {
LAB_143d83f45:
    lVar3 = OPENSSL_sk_value(param_3,puVar6);
    puVar4 = puVar10;
    do {
      puVar12 = (undefined4 *)((longlong)puVar4 + 1);
      puVar11 = puVar10;
      if (*(char *)(*(longlong *)(lVar3 + 8) + (longlong)puVar4) != *(char *)(puVar4 + 0x5176074a))
      goto LAB_143d83fb3;
      puVar4 = puVar12;
    } while (puVar12 != (undefined4 *)&DAT_00000006);
    puVar4 = puVar10;
    cVar16 = '\x01';
    if (*(longlong *)(lVar3 + 0x10) != 0) {
      do {
        puVar11 = (undefined4 *)((longlong)puVar4 + 1);
        if (*(char *)(*(longlong *)(lVar3 + 0x10) + (longlong)puVar4) !=
            *(char *)(puVar4 + 0x51769c2c)) goto LAB_143d84019;
        puVar4 = puVar11;
      } while (puVar11 != (undefined4 *)0x7);
      cVar16 = '\x02';
    }
    goto LAB_143d84019;
  }
LAB_143d8402b:
  if (param_2 != (int *)0x0) {
    lVar3 = *(longlong *)(param_2 + 2);
    if (lVar3 != 0) {
      puVar6 = puVar10;
      if (cVar16 != '\0') {
        iVar2 = X509_get_ext_d2i(lVar3,0x52,0xffffffff);
        if ((-1 < iVar2) && (lVar5 = X509_get_ext_d2i(lVar3,iVar2), lVar5 != 0)) {
          puVar6 = (undefined4 *)X509V3_EXT_d2i(lVar5);
        }
        if ((cVar16 == '\x02') && (puVar6 == (undefined4 *)0x0)) {
          uVar18 = 0x74;
          uVar15 = 0x7b;
          goto LAB_143d841fa;
        }
      }
      puVar11 = puVar10;
      puVar4 = puVar10;
      if (((cVar14 == '\0') || (puVar6 != (undefined4 *)0x0)) &&
         (puVar12 = puVar10, puVar8 = puVar10, cVar14 != '\x02')) {
LAB_143d8416a:
        puVar9 = (undefined8 *)FUN_143d34ee0();
        if (puVar9 == (undefined8 *)0x0) goto LAB_143d84137;
        if (puVar8 == (undefined4 *)0x0) {
LAB_143d841b0:
          puVar9[1] = puVar11;
          puVar9[2] = puVar12;
          *puVar9 = puVar6;
          return puVar9;
        }
        puVar11 = (undefined4 *)OPENSSL_sk_new_null();
        if (((puVar11 != (undefined4 *)0x0) &&
            (puVar10 = (undefined4 *)GENERAL_NAME_new(), puVar10 != (undefined4 *)0x0)) &&
           (iVar2 = OPENSSL_sk_push(puVar11,puVar10), iVar2 != 0)) {
          *puVar10 = 4;
          *(undefined4 **)(puVar10 + 2) = puVar8;
          goto LAB_143d841b0;
        }
        uVar18 = 0x8a;
        uVar15 = 0x41;
        puVar4 = puVar10;
      }
      else {
        uVar7 = FVoicePacketImpl::GetSampleCounter(lVar3);
        puVar8 = (undefined4 *)X509_NAME_dup(uVar7);
        uVar7 = UE4Function_Private::
                TFunction_OwnedObject<<lambda_6ee2cf6eb29fb3eaf224d7c8f92aa15b>,0>::GetAddress
                          (lVar3);
        puVar12 = (undefined4 *)ASN1_INTEGER_dup(uVar7);
        if ((puVar8 != (undefined4 *)0x0) && (puVar12 != (undefined4 *)0x0)) goto LAB_143d8416a;
        uVar18 = 0x7e;
        uVar15 = 0x7a;
      }
      ERR_put_error(0x22,0x77,uVar15,"crypto\\x509v3\\v3_akey.c",uVar18);
      puVar10 = puVar11;
LAB_143d84137:
      OPENSSL_sk_free(puVar10);
      GENERAL_NAME_free(puVar4);
      X509_NAME_free(puVar8);
      ASN1_BIT_STRING_free(puVar12);
      ASN1_BIT_STRING_free(puVar6);
      return (undefined8 *)0x0;
    }
    if (*param_2 == 1) {
      puVar9 = (undefined8 *)FUN_143d34ee0();
      return puVar9;
    }
  }
  uVar18 = 0x68;
  uVar15 = 0x79;
LAB_143d841fa:
  ERR_put_error(0x22,0x77,uVar15,"crypto\\x509v3\\v3_akey.c",uVar18);
  return (undefined8 *)0x0;
LAB_143d83fb3:
  do {
    puVar4 = (undefined4 *)((longlong)puVar11 + 1);
    if (*(char *)(*(longlong *)(lVar3 + 8) + (longlong)puVar11) != *(char *)(puVar11 + 0x51755fbb))
    {
      ERR_put_error(0x22,0x77,0x78,"crypto\\x509v3\\v3_akey.c",0x5e);
      ERR_add_error_data(2,"name=",*(undefined8 *)(lVar3 + 8));
      return (undefined8 *)0x0;
    }
    puVar11 = puVar4;
  } while (puVar4 != (undefined4 *)0x7);
  puVar4 = puVar10;
  cVar14 = '\x01';
  cVar16 = cVar17;
  if (*(longlong *)(lVar3 + 0x10) != 0) {
    do {
      cVar17 = *(char *)(*(longlong *)(lVar3 + 0x10) + (longlong)puVar4);
      puVar11 = (undefined4 *)((longlong)puVar4 + 1);
      pcVar1 = (char *)(puVar4 + 0x51769c2c);
      if (cVar17 != *pcVar1) break;
      puVar4 = puVar11;
    } while (puVar11 != (undefined4 *)0x7);
    cVar14 = '\x01';
    if (cVar17 == *pcVar1) {
      cVar14 = '\x02';
    }
  }
LAB_143d84019:
  uVar13 = (int)puVar6 + 1;
  puVar6 = (undefined4 *)(ulonglong)uVar13;
  iVar2 = OPENSSL_sk_num(param_3);
  cVar17 = cVar16;
  if (iVar2 <= (int)uVar13) goto LAB_143d8402b;
  goto LAB_143d83f45;
}



// FUNCTION 143d84230 s2i_asn1_int body=25 status=ok
// SIG undefined s2i_asn1_int(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void s2i_asn1_int(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  s2i_ASN1_INTEGER(param_1,param_3);
  return;
}



// FUNCTION 143d84250 i2s_ASN1_ENUMERATED_TABLE body=116 status=ok
// SIG undefined i2s_ASN1_ENUMERATED_TABLE(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2s_ASN1_ENUMERATED_TABLE(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = ASN1_ENUMERATED_get(param_2);
  lVar1 = *(longlong *)(*(int **)(param_1 + 0x60) + 2);
  piVar2 = *(int **)(param_1 + 0x60);
  while( true ) {
    if (lVar1 == 0) {
      i2s_ASN1_ENUMERATED(param_1,param_2);
      return;
    }
    if (iVar3 == *piVar2) break;
    lVar1 = *(longlong *)(piVar2 + 8);
    piVar2 = piVar2 + 6;
  }
  CRYPTO_strdup(*(undefined8 *)(piVar2 + 2),"crypto\\x509v3\\v3_enum.c",0x32);
  return;
}



// FUNCTION 143d842d0 i2r_ocsp_crlid body=313 status=ok
// SIG undefined i2r_ocsp_crlid(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
i2r_ocsp_crlid(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*param_2 != 0) {
    iVar1 = BIO_printf(param_3,"%*scrlUrl: ",param_4,&DAT_143f3f584);
    if (iVar1 < 1) {
      return 0;
    }
    iVar1 = ASN1_STRING_print(param_3,*param_2);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = BIO_write(param_3,&DAT_143fc48d8,1);
    if (iVar1 < 1) {
      return 0;
    }
  }
  if (param_2[1] != 0) {
    iVar1 = BIO_printf(param_3,"%*scrlNum: ",param_4,&DAT_143f3f584);
    if (iVar1 < 1) {
      return 0;
    }
    iVar1 = i2a_ASN1_INTEGER(param_3,param_2[1]);
    if (iVar1 < 1) {
      return 0;
    }
    iVar1 = BIO_write(param_3,&DAT_143fc48d8,1);
    if (iVar1 < 1) {
      return 0;
    }
  }
  if (param_2[2] == 0) {
    return 1;
  }
  iVar1 = BIO_printf(param_3,"%*scrlTime: ",param_4,&DAT_143f3f584);
  if (((0 < iVar1) && (iVar1 = ASN1_GENERALIZEDTIME_print(param_3,param_2[2]), iVar1 != 0)) &&
     (iVar1 = BIO_write(param_3,&DAT_143fc48d8,1), 0 < iVar1)) {
    return 1;
  }
  return 0;
}



// FUNCTION 143d84410 i2r_ocsp_acutoff body=101 status=ok
// SIG undefined i2r_ocsp_acutoff(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
i2r_ocsp_acutoff(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = BIO_printf(param_3,&DAT_145d811b8,param_4,&DAT_143f3f584);
  if (0 < iVar1) {
    iVar1 = ASN1_GENERALIZEDTIME_print(param_3,param_2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143d84480 i2r_object body=101 status=ok
// SIG undefined i2r_object(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 i2r_object(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = BIO_printf(param_3,&DAT_145d811b8,param_4,&DAT_143f3f584);
  if (0 < iVar1) {
    iVar1 = i2a_ASN1_OBJECT(param_3,param_2);
    if (0 < iVar1) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143d844f0 FUN_143d844f0 body=22 status=ok
// SIG undefined FUN_143d844f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d844f0(void)

{
  ASN1_OCTET_STRING_new();
  return;
}



// FUNCTION 143d84510 i2d_ocsp_nonce body=77 status=ok
// SIG undefined i2d_ocsp_nonce(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int i2d_ocsp_nonce(int *param_1,longlong *param_2)

{
  if (param_2 != (longlong *)0x0) {
    _guard_xfg_dispatch_icall_nop((void *)*param_2,*(void **)(param_1 + 2),(longlong)*param_1);
    *param_2 = *param_2 + (longlong)*param_1;
    return *param_1;
  }
  return *param_1;
}



// FUNCTION 143d84560 d2i_ocsp_nonce body=171 status=ok
// SIG undefined d2i_ocsp_nonce(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong d2i_ocsp_nonce(longlong *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143d8457a;
  if ((((param_1 == (longlong *)0x0) || (lVar2 = *param_1, lVar2 == 0)) &&
      (lVar2 = ASN1_OCTET_STRING_new(), lVar2 == 0)) ||
     (iVar1 = ASN1_OCTET_STRING_set(lVar2,*param_2,param_3), iVar1 == 0)) {
    if ((param_1 == (longlong *)0x0) || (*param_1 != lVar2)) {
      ASN1_BIT_STRING_free(lVar2);
    }
    ERR_put_error(0x27,0x66,0x41,"crypto\\ocsp\\v3_ocsp.c",0xce,uVar3);
    lVar2 = 0;
  }
  else {
    *param_2 = *param_2 + (longlong)param_3;
    if (param_1 != (longlong *)0x0) {
      *param_1 = lVar2;
    }
  }
  return lVar2;
}



// FUNCTION 143d84610 FUN_143d84610 body=22 status=ok
// SIG undefined FUN_143d84610(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d84610(void)

{
  ASN1_BIT_STRING_free();
  return;
}



// FUNCTION 143d84630 i2r_ocsp_nonce body=107 status=ok
// SIG undefined i2r_ocsp_nonce(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
i2r_ocsp_nonce(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = BIO_printf(param_3,&DAT_145d811b8,param_4,&DAT_143f3f584);
  if (0 < iVar1) {
    iVar1 = i2a_ASN1_STRING(param_3,param_2,4);
    if (0 < iVar1) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143d846a0 FUN_143d846a0 body=22 status=ok
// SIG undefined FUN_143d846a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d846a0(void)

{
  ASN1_NULL_new();
  return;
}



// FUNCTION 143d846c0 i2r_ocsp_serviceloc body=272 status=ok
// SIG undefined i2r_ocsp_serviceloc(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
i2r_ocsp_serviceloc(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  iVar1 = BIO_printf(param_3,"%*sIssuer: ",param_4,&DAT_143f3f584);
  if ((iVar1 < 1) || (iVar1 = X509_NAME_print_ex(param_3,*param_2,0,0x82031f), iVar1 < 1)) {
    return 0;
  }
  iVar3 = 0;
  iVar1 = OPENSSL_sk_num(param_2[1]);
  if (0 < iVar1) {
    do {
      puVar2 = (undefined8 *)OPENSSL_sk_value(param_2[1],iVar3);
      iVar1 = BIO_printf(param_3,&DAT_145da762c,param_4 * 2,&DAT_143f3f584);
      if (iVar1 < 1) {
        return 0;
      }
      iVar1 = i2a_ASN1_OBJECT(param_3,*puVar2);
      if (iVar1 < 1) {
        return 0;
      }
      iVar1 = BIO_puts(param_3,&DAT_145da7634);
      if (iVar1 < 1) {
        return 0;
      }
      iVar1 = FUN_143d784e0(param_3,puVar2[1]);
      if (iVar1 < 1) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      iVar1 = OPENSSL_sk_num(param_2[1]);
    } while (iVar3 < iVar1);
  }
  return 1;
}



// FUNCTION 143d847d0 i2r_pci body=231 status=ok
// SIG undefined i2r_pci(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 i2r_pci(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  BIO_printf(param_3,"%*sPath Length Constraint: ",param_4,&DAT_143f3f584);
  if (*param_2 == 0) {
    BIO_printf(param_3,"infinite");
  }
  else {
    i2a_ASN1_INTEGER();
  }
  BIO_puts(param_3,&DAT_143fc48d8);
  BIO_printf(param_3,"%*sPolicy Language: ",param_4,&DAT_143f3f584);
  i2a_ASN1_OBJECT(param_3,*(undefined8 *)param_2[1]);
  BIO_puts(param_3,&DAT_143fc48d8);
  if ((*(longlong *)(param_2[1] + 8) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_2[1] + 8) + 8), lVar1 != 0)) {
    BIO_printf(param_3,"%*sPolicy Text: %s\n",param_4,&DAT_143f3f584,lVar1);
  }
  return 1;
}



// FUNCTION 143d848c0 r2i_pci body=659 status=ok
// SIG undefined r2i_pci(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * r2i_pci(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 local_res20;
  undefined8 in_stack_ffffffffffffffa8;
  undefined8 uVar13;
  longlong local_38;
  longlong local_30;
  
  puVar12 = (undefined8 *)0x0;
  local_38 = 0;
  local_res20 = 0;
  local_30 = 0;
  uVar4 = X509V3_parse_list(param_3);
  iVar2 = OPENSSL_sk_num(uVar4);
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  puVar7 = puVar12;
  if (iVar2 < 1) {
LAB_143d84ad3:
    uVar11 = CONCAT44(uVar10,0x123);
    uVar10 = 0x9a;
  }
  else {
    do {
      puVar5 = (undefined8 *)OPENSSL_sk_value(uVar4,puVar7);
      pcVar1 = (char *)puVar5[1];
      if (pcVar1 == (char *)0x0) {
LAB_143d84a76:
        uVar13 = 0x102;
        uVar11 = 0x99;
LAB_143d84a84:
        ERR_put_error(0x22,0x9b,uVar11,"crypto\\x509v3\\v3_pci.c",uVar13);
LAB_143d84a98:
        ERR_add_error_data(6,"section:",*puVar5,",name:",puVar5[1],",value:",puVar5[2]);
        goto LAB_143d84af5;
      }
      if (*pcVar1 != '@') {
        if (puVar5[2] == 0) goto LAB_143d84a76;
        iVar2 = process_pci_value(puVar5,&local_38,&local_res20,&local_30);
        if (iVar2 != 0) goto LAB_143d849cc;
        goto LAB_143d84a98;
      }
      iVar2 = 1;
      lVar6 = X509V3_get_section(param_2,pcVar1 + 1);
      puVar8 = puVar12;
      if (lVar6 == 0) {
        uVar13 = 0x10c;
        uVar11 = 0x87;
        goto LAB_143d84a84;
      }
      do {
        iVar3 = OPENSSL_sk_num(lVar6);
        if (iVar3 <= (int)puVar8) break;
        uVar11 = OPENSSL_sk_value(lVar6,puVar8);
        iVar2 = process_pci_value(uVar11,&local_38,&local_res20,&local_30);
        puVar8 = (undefined8 *)(ulonglong)((int)puVar8 + 1);
      } while (iVar2 != 0);
      X509V3_section_free(param_2,lVar6);
      if (iVar2 == 0) goto LAB_143d84af5;
LAB_143d849cc:
      uVar9 = (int)puVar7 + 1;
      puVar7 = (undefined8 *)(ulonglong)uVar9;
      iVar2 = OPENSSL_sk_num(uVar4);
      uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
    } while ((int)uVar9 < iVar2);
    if (local_38 == 0) goto LAB_143d84ad3;
    iVar2 = OBJ_obj2nid();
    if (((iVar2 - 0x299U & 0xfffffffd) == 0) && (local_30 != 0)) {
      uVar11 = CONCAT44(uVar10,0x129);
      uVar10 = 0x9f;
    }
    else {
      puVar7 = (undefined8 *)FUN_143d3dd30();
      if (puVar7 != (undefined8 *)0x0) {
        *(longlong *)puVar7[1] = local_38;
        *(longlong *)(puVar7[1] + 8) = local_30;
        *puVar7 = local_res20;
        local_res20 = 0;
        goto LAB_143d84b28;
      }
      uVar11 = CONCAT44(uVar10,0x12f);
      uVar10 = 0x41;
    }
  }
  ERR_put_error(0x22,0x9b,uVar10,"crypto\\x509v3\\v3_pci.c",uVar11);
LAB_143d84af5:
  ASN1_OBJECT_free(local_38);
  ASN1_BIT_STRING_free(local_res20);
  local_res20 = 0;
  ASN1_BIT_STRING_free(local_30);
  FUN_143d3dd00(0);
  puVar7 = puVar12;
LAB_143d84b28:
  OPENSSL_sk_pop_free(uVar4,X509V3_conf_free);
  return puVar7;
}



// FUNCTION 143d84b60 process_pci_value body=1433 status=ok
// SIG undefined process_pci_value(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
process_pci_value(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  char *_Str1;
  bool bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  void *_Src;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined1 auStack_898 [32];
  undefined8 local_878;
  char *local_870;
  undefined8 local_868;
  int local_858 [4];
  undefined1 local_848 [2048];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143d84b75;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_898;
  _Str1 = (char *)param_1[1];
  lVar5 = 0;
  bVar1 = false;
  iVar2 = _guard_xfg_dispatch_icall_nop(_Str1,"language");
  lVar4 = lVar5;
  if (iVar2 == 0) {
    if (*param_2 == 0) {
      lVar4 = OBJ_txt2obj(param_1[2],0);
      *param_2 = lVar4;
      if (lVar4 != 0) {
        return 1;
      }
      local_878 = CONCAT44(local_878._4_4_,100);
      uVar8 = 0x6e;
    }
    else {
      local_878 = CONCAT44(local_878._4_4_,0x5e);
      uVar8 = 0x9b;
    }
  }
  else {
    do {
      lVar6 = lVar4 + 1;
      lVar7 = lVar5;
      if (_Str1[lVar4] != "pathlen"[lVar4]) goto LAB_143d84cb0;
      lVar4 = lVar6;
    } while (lVar6 != 8);
    if (*param_3 == 0) {
      iVar2 = X509V3_get_value_int(param_1,param_3);
      if (iVar2 != 0) {
        return 1;
      }
      local_878 = CONCAT44(local_878._4_4_,0x71);
      uVar8 = 0x9c;
    }
    else {
      local_878 = CONCAT44(local_878._4_4_,0x6b);
      uVar8 = 0x9d;
    }
  }
LAB_143d84bca:
  ERR_put_error(0x22,0x96,uVar8,"crypto\\x509v3\\v3_pci.c");
  local_868 = param_1[2];
  local_870 = ",value:";
  local_878 = param_1[1];
  ERR_add_error_data(6,"section:",*param_1,",name:");
  return 0;
LAB_143d84cb0:
  do {
    lVar4 = lVar7 + 1;
    if (_Str1[lVar7] != "policy"[lVar7]) {
      return 1;
    }
    lVar7 = lVar4;
  } while (lVar4 != 7);
  if (*param_4 == 0) {
    lVar4 = ASN1_OCTET_STRING_new();
    *param_4 = lVar4;
    if (lVar4 == 0) {
      local_878 = CONCAT44(local_878._4_4_,0x7b);
      uVar8 = 0x41;
      goto LAB_143d84bca;
    }
    bVar1 = true;
  }
  iVar2 = strncmp((char *)param_1[2],"hex:",4);
  if (iVar2 == 0) {
    _Src = (void *)OPENSSL_hexstr2buf((char *)param_1[2] + 4,local_858);
    if (_Src == (void *)0x0) goto LAB_143d8508e;
    lVar5 = CRYPTO_realloc(*(undefined8 *)((int *)*param_4 + 2),
                           (longlong)(*(int *)*param_4 + local_858[0] + 1),
                           "crypto\\x509v3\\v3_pci.c",0x8b);
    if (lVar5 != 0) {
      *(longlong *)(*param_4 + 8) = lVar5;
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)*(int *)*param_4 + *(longlong *)((int *)*param_4 + 2)),_Src,
                 (longlong)local_858[0]);
      *(int *)*param_4 = *(int *)*param_4 + local_858[0];
      *(undefined1 *)((longlong)*(int *)*param_4 + *(longlong *)((int *)*param_4 + 2)) = 0;
      CRYPTO_free(_Src,"crypto\\x509v3\\v3_pci.c",0x9f);
      goto LAB_143d85022;
    }
    CRYPTO_free(_Src,"crypto\\x509v3\\v3_pci.c",0x93);
    CRYPTO_free(*(undefined8 *)(*param_4 + 8),"crypto\\x509v3\\v3_pci.c",0x98);
    uVar8 = 0x41;
    local_878 = CONCAT44(local_878._4_4_,0x9b);
    *(undefined8 *)(*param_4 + 8) = 0;
    *(undefined4 *)*param_4 = 0;
  }
  else {
    iVar2 = strncmp((char *)param_1[2],"file:",5);
    if (iVar2 == 0) {
      lVar4 = BIO_new_file((char *)param_1[2] + 5,&DAT_145d71df8);
      if (lVar4 == 0) {
        local_878 = CONCAT44(local_878._4_4_,0xa5);
        uVar8 = 0x20;
      }
      else {
        do {
          while( true ) {
            iVar2 = BIO_read(lVar4,local_848,0x800);
            if (iVar2 < 1) break;
            lVar5 = CRYPTO_realloc(*(undefined8 *)((int *)*param_4 + 2),
                                   (longlong)(*(int *)*param_4 + 1 + iVar2),
                                   "crypto\\x509v3\\v3_pci.c",0xaf);
            if (lVar5 == 0) {
              CRYPTO_free(*(undefined8 *)(*param_4 + 8),"crypto\\x509v3\\v3_pci.c",0xb2);
              local_878 = CONCAT44(local_878._4_4_,0xb6);
              *(undefined8 *)(*param_4 + 8) = 0;
              *(undefined4 *)*param_4 = 0;
              ERR_put_error(0x22,0x96,0x41,"crypto\\x509v3\\v3_pci.c");
              local_868 = param_1[2];
              local_870 = ",value:";
              local_878 = param_1[1];
              ERR_add_error_data(6,"section:",*param_1,",name:");
              BIO_free_all(lVar4);
              goto LAB_143d850c7;
            }
            *(longlong *)(*param_4 + 8) = lVar5;
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)*(int *)*param_4 + *(longlong *)((int *)*param_4 + 2)),
                       local_848,(longlong)iVar2);
            *(int *)*param_4 = *(int *)*param_4 + iVar2;
            *(undefined1 *)((longlong)*(int *)*param_4 + *(longlong *)((int *)*param_4 + 2)) = 0;
          }
          if (iVar2 != 0) break;
          iVar3 = BIO_test_flags(lVar4,8);
        } while (iVar3 != 0);
        BIO_free_all(lVar4);
        if (iVar2 < 0) {
          local_878 = CONCAT44(local_878._4_4_,0xc4);
          uVar8 = 0x20;
        }
        else {
LAB_143d85022:
          if (lVar5 != 0) {
            return 1;
          }
          local_878 = CONCAT44(local_878._4_4_,0xe5);
          uVar8 = 0x41;
        }
      }
    }
    else {
      iVar2 = strncmp((char *)param_1[2],"text:",5);
      if (iVar2 == 0) {
        lVar4 = -1;
        do {
          lVar4 = lVar4 + 1;
        } while (*(char *)(param_1[2] + 5 + lVar4) != '\0');
        local_858[0] = (int)lVar4;
        lVar5 = CRYPTO_realloc(*(undefined8 *)((int *)*param_4 + 2),
                               (longlong)(local_858[0] + *(int *)*param_4 + 1),
                               "crypto\\x509v3\\v3_pci.c",0xcb);
        if (lVar5 != 0) {
          *(longlong *)(*param_4 + 8) = lVar5;
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)*(int *)*param_4 + *(longlong *)((int *)*param_4 + 2)),
                     (void *)(param_1[2] + 5),(longlong)local_858[0]);
          *(int *)*param_4 = *(int *)*param_4 + local_858[0];
          *(undefined1 *)((longlong)*(int *)*param_4 + *(longlong *)((int *)*param_4 + 2)) = 0;
          goto LAB_143d85022;
        }
        CRYPTO_free(*(undefined8 *)(*param_4 + 8),"crypto\\x509v3\\v3_pci.c",0xd7);
        uVar8 = 0x41;
        local_878 = CONCAT44(local_878._4_4_,0xda);
        *(undefined8 *)(*param_4 + 8) = 0;
        *(undefined4 *)*param_4 = 0;
      }
      else {
        local_878 = CONCAT44(local_878._4_4_,0xe0);
        uVar8 = 0x98;
      }
    }
  }
  ERR_put_error(0x22,0x96,uVar8,"crypto\\x509v3\\v3_pci.c");
LAB_143d8508e:
  local_868 = param_1[2];
  local_870 = ",value:";
  local_878 = param_1[1];
  ERR_add_error_data(6,"section:",*param_1,",name:");
LAB_143d850c7:
  if (!bVar1) {
    return 0;
  }
  ASN1_BIT_STRING_free(*param_4);
  *param_4 = 0;
  return 0;
}



// FUNCTION 143d85130 v2i_POLICY_MAPPINGS body=534 status=ok
// SIG undefined v2i_POLICY_MAPPINGS(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong v2i_POLICY_MAPPINGS(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  iVar1 = OPENSSL_sk_num(param_3);
  lVar2 = OPENSSL_sk_new_reserve(0,iVar1);
  if (lVar2 == 0) {
    ERR_put_error(0x22,0x91,0x41,"crypto\\x509v3\\v3_pmaps.c",0x4c);
    return 0;
  }
  iVar7 = 0;
  if (0 < iVar1) {
    do {
      puVar3 = (undefined8 *)OPENSSL_sk_value(param_3,iVar7);
      if ((puVar3[2] == 0) || (puVar3[1] == 0)) {
        ERR_put_error(0x22,0x91,0x6e,"crypto\\x509v3\\v3_pmaps.c",0x54);
        ERR_add_error_data(6,"section:",*puVar3,",name:",puVar3[1],",value:",puVar3[2]);
        lVar4 = 0;
        lVar5 = 0;
LAB_143d85320:
        ASN1_OBJECT_free(lVar4);
        ASN1_OBJECT_free(lVar5);
        OPENSSL_sk_pop_free(lVar2,FUN_143d85420);
        return 0;
      }
      lVar4 = OBJ_txt2obj(puVar3[1],0);
      lVar5 = OBJ_txt2obj(puVar3[2],0);
      if ((lVar4 == 0) || (lVar5 == 0)) {
        ERR_put_error(0x22,0x91,0x6e,"crypto\\x509v3\\v3_pmaps.c",0x5c);
        ERR_add_error_data(6,"section:",*puVar3,",name:",puVar3[1],",value:",puVar3[2]);
        goto LAB_143d85320;
      }
      plVar6 = (longlong *)ASN1_item_new(&DAT_145da77f0);
      if (plVar6 == (longlong *)0x0) {
        ERR_put_error(0x22,0x91,0x41,"crypto\\x509v3\\v3_pmaps.c",0x62);
        goto LAB_143d85320;
      }
      *plVar6 = lVar4;
      plVar6[1] = lVar5;
      OPENSSL_sk_push(lVar2,plVar6);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar1);
  }
  return lVar2;
}



// FUNCTION 143d85350 i2v_POLICY_MAPPINGS body=203 status=ok
// SIG undefined i2v_POLICY_MAPPINGS(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 i2v_POLICY_MAPPINGS(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_e8 [32];
  undefined8 local_c8 [2];
  undefined1 local_b8 [80];
  undefined1 local_68 [80];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143d85360;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  iVar3 = 0;
  local_c8[0] = param_3;
  iVar1 = OPENSSL_sk_num(param_2);
  if (0 < iVar1) {
    do {
      puVar2 = (undefined8 *)OPENSSL_sk_value(param_2,iVar3);
      i2t_ASN1_OBJECT(local_68,0x50,*puVar2);
      i2t_ASN1_OBJECT(local_b8,0x50,puVar2[1]);
      X509V3_add_value(local_68,local_b8,local_c8);
      iVar3 = iVar3 + 1;
      iVar1 = OPENSSL_sk_num(param_2);
    } while (iVar3 < iVar1);
  }
  return local_c8[0];
}



// FUNCTION 143d85420 FUN_143d85420 body=29 status=ok
// SIG undefined FUN_143d85420(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d85420(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_145da77f0);
  return;
}



// FUNCTION 143d85440 i2s_poison body=40 status=ok
// SIG undefined i2s_poison(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2s_poison(void)

{
  CRYPTO_strdup(&DAT_145d4a5b8,"crypto\\ct\\ct_x509v3.c",0x12);
  return;
}



// FUNCTION 143d85470 i2r_SCT_LIST body=59 status=ok
// SIG undefined i2r_SCT_LIST(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 i2r_SCT_LIST(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  SCT_LIST_print(param_2,param_3,param_4,&DAT_143fc48d8,0);
  return 1;
}



// FUNCTION 143d854b0 x509_ext_d2i_SCT_LIST body=90 status=ok
// SIG undefined x509_ext_d2i_SCT_LIST(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 x509_ext_d2i_SCT_LIST(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = d2i_SCT_LIST();
  iVar1 = set_sct_list_source(uVar2,2);
  if (iVar1 != 1) {
    SCT_LIST_free(uVar2);
    *param_1 = 0;
    return 0;
  }
  return uVar2;
}



// FUNCTION 143d85510 ocsp_ext_d2i_SCT_LIST body=90 status=ok
// SIG undefined ocsp_ext_d2i_SCT_LIST(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ocsp_ext_d2i_SCT_LIST(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = d2i_SCT_LIST();
  iVar1 = set_sct_list_source(uVar2,3);
  if (iVar1 != 1) {
    SCT_LIST_free(uVar2);
    *param_1 = 0;
    return 0;
  }
  return uVar2;
}



// FUNCTION 143d85570 set_sct_list_source body=126 status=ok
// SIG undefined set_sct_list_source(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 set_sct_list_source(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (param_1 != 0) {
    iVar3 = 0;
    iVar1 = OPENSSL_sk_num();
    if (0 < iVar1) {
      do {
        uVar2 = OPENSSL_sk_value(param_1,iVar3);
        iVar1 = SCT_set_source(uVar2,param_2);
        if (iVar1 != 1) {
          return 0;
        }
        iVar3 = iVar3 + 1;
        iVar1 = OPENSSL_sk_num(param_1);
      } while (iVar3 < iVar1);
    }
  }
  return 1;
}



// FUNCTION 143d855f0 i2v_TLS_FEATURE body=196 status=ok
// SIG undefined i2v_TLS_FEATURE(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 i2v_TLS_FEATURE(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 local_res18;
  
  iVar5 = 0;
  local_res18 = param_3;
  iVar1 = OPENSSL_sk_num(param_2);
  if (0 < iVar1) {
    do {
      uVar2 = OPENSSL_sk_value(param_2);
      iVar1 = ASN1_INTEGER_get(uVar2);
      uVar4 = 0;
      piVar3 = &DAT_1468381b8;
      do {
        if (iVar1 == *piVar3) {
          if (uVar4 < 2) {
            X509V3_add_value(0,(&PTR_s_status_request_1468381c0)[uVar4 * 2],&local_res18);
            goto LAB_143d85670;
          }
          break;
        }
        uVar4 = uVar4 + 1;
        piVar3 = piVar3 + 4;
      } while (uVar4 < 2);
      X509V3_add_value_int(0,uVar2,&local_res18);
LAB_143d85670:
      iVar5 = iVar5 + 1;
      iVar1 = OPENSSL_sk_num(param_2);
    } while (iVar5 < iVar1);
  }
  return local_res18;
}



// FUNCTION 143d856c0 v2i_TLS_FEATURE body=554 status=ok
// SIG undefined v2i_TLS_FEATURE(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong v2i_TLS_FEATURE(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  char *_Str1;
  undefined **ppuVar8;
  char *local_res20;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar9;
  
  lVar3 = OPENSSL_sk_new_null();
  if (lVar3 == 0) {
    ERR_put_error(0x22,0xa5,0x41,"crypto\\x509v3\\v3_tlsf.c",99);
    return 0;
  }
  iVar7 = 0;
  iVar1 = OPENSSL_sk_num(param_3);
  if (0 < iVar1) {
    do {
      puVar4 = (undefined8 *)OPENSSL_sk_value(param_3,iVar7);
      _Str1 = (char *)puVar4[2];
      if (_Str1 == (char *)0x0) {
        _Str1 = (char *)puVar4[1];
      }
      uVar6 = 0;
      ppuVar8 = &PTR_s_status_request_1468381c0;
      do {
        iVar1 = _stricmp(_Str1,*ppuVar8);
        if (iVar1 == 0) {
          if (uVar6 < 2) {
            uVar2 = (&DAT_1468381b8)[uVar6 * 4];
            goto LAB_143d857d0;
          }
          break;
        }
        uVar6 = uVar6 + 1;
        ppuVar8 = ppuVar8 + 2;
      } while (uVar6 < 2);
      uVar2 = strtol(_Str1,&local_res20,10);
      if (((*local_res20 != '\0') || (_Str1 == local_res20)) || (0xffff < uVar2)) {
        ERR_put_error(0x22,0xa5,0x8f,"crypto\\x509v3\\v3_tlsf.c",0x77);
        ERR_add_error_data(6,"section:",*puVar4,",name:",puVar4[1],",value:",puVar4[2]);
        goto LAB_143d858d4;
      }
LAB_143d857d0:
      lVar5 = ASN1_INTEGER_new();
      uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
      if (lVar5 == 0) {
LAB_143d85855:
        ERR_put_error(0x22,0xa5,0x41,"crypto\\x509v3\\v3_tlsf.c",CONCAT44(uVar9,0x80));
LAB_143d858d4:
        OPENSSL_sk_pop_free(lVar3,ASN1_BIT_STRING_free);
        return 0;
      }
      iVar1 = ASN1_INTEGER_set(lVar5,uVar2);
      uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
      if (iVar1 == 0) goto LAB_143d85855;
      iVar1 = OPENSSL_sk_push(lVar3,lVar5);
      uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
      if (iVar1 < 1) goto LAB_143d85855;
      iVar7 = iVar7 + 1;
      iVar1 = OPENSSL_sk_num(param_3);
    } while (iVar7 < iVar1);
  }
  return lVar3;
}



// FUNCTION 143d85940 i2r_ADMISSION_SYNTAX body=1134 status=ok
// SIG undefined i2r_ADMISSION_SYNTAX(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 i2r_ADMISSION_SYNTAX(undefined8 param_1,longlong *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  int local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143d8595a;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_e0 = param_1;
  local_d8 = param_2;
  if ((*param_2 == 0) ||
     ((((iVar1 = BIO_printf(param_3,"%*sadmissionAuthority:\n",param_4,&DAT_143f3f584), 0 < iVar1 &&
        (iVar1 = BIO_printf(param_3,"%*s  ",param_4,&DAT_143f3f584), 0 < iVar1)) &&
       (iVar1 = FUN_143d784e0(param_3,*param_2), 0 < iVar1)) &&
      (iVar1 = BIO_printf(param_3,&DAT_143fc48d8), 0 < iVar1)))) {
    iVar1 = 0;
    iVar2 = OPENSSL_sk_num(param_2[1]);
    if (0 < iVar2) {
      do {
        plVar4 = (longlong *)OPENSSL_sk_value(param_2[1],iVar1);
        iVar1 = iVar1 + 1;
        local_108 = (undefined1 *)CONCAT44(local_108._4_4_,iVar1);
        local_e8 = iVar1;
        iVar2 = BIO_printf(param_3,"%*sEntry %0d:\n",param_4,&DAT_143f3f584);
        if ((iVar2 < 1) ||
           (((*plVar4 != 0 &&
             (((iVar2 = BIO_printf(param_3,"%*s  admissionAuthority:\n",param_4,&DAT_143f3f584),
               iVar2 < 1 ||
               (iVar2 = BIO_printf(param_3,"%*s    ",param_4,&DAT_143f3f584), iVar2 < 1)) ||
              ((iVar2 = FUN_143d784e0(param_3,*plVar4), iVar2 < 1 ||
               (iVar2 = BIO_printf(param_3,&DAT_143fc48d8), iVar2 < 1)))))) ||
            ((plVar4[1] != 0 &&
             (iVar2 = i2r_NAMING_AUTHORITY(param_1,plVar4[1],param_3,param_4), iVar2 < 1))))))
        goto LAB_143d85da7;
        iVar8 = 0;
        iVar2 = OPENSSL_sk_num(plVar4[2]);
        if (0 < iVar2) {
          do {
            plVar5 = (longlong *)OPENSSL_sk_value(plVar4[2],iVar8);
            iVar8 = iVar8 + 1;
            local_108 = (undefined1 *)CONCAT44(local_108._4_4_,iVar8);
            iVar1 = BIO_printf(param_3,"%*s  Profession Info Entry %0d:\n",param_4,&DAT_143f3f584);
            if (((iVar1 < 1) ||
                ((plVar5[3] != 0 &&
                 (((iVar1 = BIO_printf(param_3,"%*s    registrationNumber: ",param_4,&DAT_143f3f584)
                   , iVar1 < 1 || (iVar1 = ASN1_STRING_print(param_3,plVar5[3]), iVar1 < 1)) ||
                  (iVar1 = BIO_printf(param_3,&DAT_143fc48d8), iVar1 < 1)))))) ||
               ((*plVar5 != 0 &&
                (iVar1 = i2r_NAMING_AUTHORITY(param_1,*plVar5,param_3,param_4 + 2), iVar1 < 1))))
            goto LAB_143d85da7;
            if (plVar5[1] != 0) {
              iVar1 = BIO_printf(param_3,"%*s    Info Entries:\n",param_4,&DAT_143f3f584);
              if (iVar1 < 1) goto LAB_143d85da7;
              iVar2 = 0;
              iVar1 = OPENSSL_sk_num(plVar5[1]);
              if (0 < iVar1) {
                do {
                  uVar6 = OPENSSL_sk_value(plVar5[1],iVar2);
                  iVar1 = BIO_printf(param_3,"%*s      ",param_4,&DAT_143f3f584);
                  if (((iVar1 < 1) || (iVar1 = ASN1_STRING_print(param_3,uVar6), iVar1 < 1)) ||
                     (iVar1 = BIO_printf(param_3,&DAT_143fc48d8), iVar1 < 1)) goto LAB_143d85da7;
                  iVar2 = iVar2 + 1;
                  iVar1 = OPENSSL_sk_num(plVar5[1]);
                } while (iVar2 < iVar1);
              }
            }
            if (plVar5[2] != 0) {
              iVar1 = BIO_printf(param_3,"%*s    Profession OIDs:\n",param_4,&DAT_143f3f584);
              if (iVar1 < 1) goto LAB_143d85da7;
              iVar2 = 0;
              iVar1 = OPENSSL_sk_num(plVar5[2]);
              if (0 < iVar1) {
                do {
                  uVar6 = OPENSSL_sk_value(plVar5[2],iVar2);
                  uVar3 = OBJ_obj2nid(uVar6);
                  puVar7 = (undefined1 *)OBJ_nid2ln(uVar3);
                  OBJ_obj2txt(local_c8,0x80,uVar6);
                  bVar9 = puVar7 != (undefined1 *)0x0;
                  local_f0 = &DAT_143f3f584;
                  if (bVar9) {
                    local_f0 = &DAT_144025e14;
                  }
                  local_100 = &DAT_143f3f584;
                  if (bVar9) {
                    local_100 = &DAT_144025e10;
                  }
                  local_f8 = local_c8;
                  local_108 = &DAT_143f3f584;
                  if (bVar9) {
                    local_108 = puVar7;
                  }
                  iVar1 = BIO_printf(param_3,"%*s      %s%s%s%s\n",param_4,&DAT_143f3f584);
                  if (iVar1 < 1) goto LAB_143d85da7;
                  iVar2 = iVar2 + 1;
                  iVar1 = OPENSSL_sk_num(plVar5[2]);
                } while (iVar2 < iVar1);
              }
            }
            iVar2 = OPENSSL_sk_num(plVar4[2]);
            param_2 = local_d8;
            param_1 = local_e0;
            iVar1 = local_e8;
          } while (iVar8 < iVar2);
        }
        iVar2 = OPENSSL_sk_num(param_2[1]);
      } while (iVar1 < iVar2);
    }
    uVar6 = 1;
  }
  else {
LAB_143d85da7:
    uVar6 = 0xffffffff;
  }
  return uVar6;
}



// FUNCTION 143d85db0 i2r_NAMING_AUTHORITY body=487 status=ok
// SIG undefined i2r_NAMING_AUTHORITY(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
i2r_NAMING_AUTHORITY(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  bool bVar6;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x143d85dbe;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if ((param_2 == (longlong *)0x0) || (((*param_2 == 0 && (param_2[2] == 0)) && (param_2[1] == 0))))
  {
    return 0;
  }
  iVar1 = BIO_printf(param_3,"%*snamingAuthority: ",param_4,&DAT_143f3f584);
  if (iVar1 < 1) {
    return 0;
  }
  if (*param_2 != 0) {
    uVar2 = OBJ_obj2nid();
    puVar3 = (undefined1 *)OBJ_nid2ln(uVar2);
    iVar1 = BIO_printf(param_3,"%*s  admissionAuthorityId: ",param_4,&DAT_143f3f584);
    if (iVar1 < 1) {
      return 0;
    }
    OBJ_obj2txt(local_a8,0x80,*param_2);
    bVar6 = puVar3 != (undefined1 *)0x0;
    local_b0 = &DAT_143f3f584;
    if (bVar6) {
      local_b0 = &DAT_144025e14;
    }
    puVar5 = &DAT_143f3f584;
    if (bVar6) {
      puVar5 = &DAT_144025e10;
    }
    local_b8 = local_a8;
    puVar4 = &DAT_143f3f584;
    if (bVar6) {
      puVar4 = puVar3;
    }
    iVar1 = BIO_printf(param_3,"%s%s%s%s\n",puVar4,puVar5);
    if (iVar1 < 1) {
      return 0;
    }
  }
  if (((param_2[2] == 0) ||
      (((iVar1 = BIO_printf(param_3,"%*s  namingAuthorityText: ",param_4,&DAT_143f3f584), 0 < iVar1
        && (iVar1 = ASN1_STRING_print(param_3,param_2[2]), 0 < iVar1)) &&
       (iVar1 = BIO_printf(param_3,&DAT_143fc48d8), 0 < iVar1)))) &&
     ((param_2[1] == 0 ||
      (((iVar1 = BIO_printf(param_3,"%*s  namingAuthorityUrl: ",param_4,&DAT_143f3f584), 0 < iVar1
        && (iVar1 = ASN1_STRING_print(param_3,param_2[1]), 0 < iVar1)) &&
       (iVar1 = BIO_printf(param_3,&DAT_143fc48d8), 0 < iVar1)))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 143d85fa0 EVP_SignFinal body=386 status=ok
// SIG undefined EVP_SignFinal(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
EVP_SignFinal(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  undefined8 local_a0;
  uint local_98 [2];
  longlong local_90;
  undefined1 local_88 [64];
  ulonglong local_48;
  undefined8 uStack_38;
  
  uStack_38 = 0x143d85fb3;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_98[0] = 0;
  lVar3 = 0;
  *param_3 = 0;
  iVar1 = EVP_MD_CTX_test_flags(param_1,0x200);
  if (iVar1 == 0) {
    lVar3 = EVP_MD_CTX_new();
    if (lVar3 == 0) {
      local_a8 = CONCAT44(local_a8._4_4_,0x22);
      ERR_put_error(6,0x6b,0x41,"crypto\\evp\\p_sign.c");
    }
    else {
      iVar2 = EVP_MD_CTX_copy_ex(lVar3,param_1);
      iVar1 = 0;
      if (iVar2 != 0) {
        iVar1 = EVP_DigestFinal_ex(lVar3,local_88,local_98);
      }
      EVP_MD_CTX_free(lVar3);
      if (iVar1 != 0) goto LAB_143d86070;
    }
    uVar4 = 0;
  }
  else {
    iVar1 = EVP_DigestFinal_ex(param_1,local_88,local_98);
    uVar4 = 0;
    if (iVar1 != 0) {
LAB_143d86070:
      iVar1 = EVP_PKEY_size(param_4);
      local_90 = (longlong)iVar1;
      lVar3 = EVP_PKEY_CTX_new(param_4,0);
      uVar4 = 0;
      if ((lVar3 != 0) && (iVar1 = EVP_PKEY_sign_init(lVar3), 0 < iVar1)) {
        local_a0 = EVP_MD_CTX_md(param_1);
        local_a8 = local_a8 & 0xffffffff00000000;
        iVar1 = EVP_PKEY_CTX_ctrl(lVar3,0xffffffff,0xf8,1);
        uVar4 = 0;
        if (0 < iVar1) {
          local_a8 = (ulonglong)local_98[0];
          iVar1 = EVP_PKEY_sign(lVar3,param_2,&local_90,local_88);
          if (0 < iVar1) {
            uVar4 = 1;
            *param_3 = (undefined4)local_90;
          }
        }
      }
    }
    EVP_PKEY_CTX_free(lVar3);
  }
  return uVar4;
}



// FUNCTION 143d86130 BN_sqr body=426 status=ok
// SIG undefined BN_sqr(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 BN_sqr(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined1 auStack_178 [32];
  int local_158;
  undefined1 local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  iVar1 = *(int *)(param_2 + 1);
  uVar9 = 0;
  if (iVar1 < 1) {
    *(undefined4 *)(param_1 + 1) = 0;
    uVar7 = 1;
    *(undefined4 *)(param_1 + 2) = 0;
    goto LAB_143d862af;
  }
  BN_CTX_start(param_3);
  puVar3 = param_1;
  if (param_2 == param_1) {
    puVar3 = (undefined8 *)BN_CTX_get(param_3);
  }
  plVar4 = (longlong *)BN_CTX_get(param_3);
  uVar7 = 0;
  if ((puVar3 != (undefined8 *)0x0) && (uVar7 = uVar9, plVar4 != (longlong *)0x0)) {
    local_158 = iVar1 * 2;
    lVar5 = bn_wexpand(puVar3,local_158);
    if (lVar5 != 0) {
      if (iVar1 == 4) {
        bn_sqr_comba4(*puVar3,*param_2);
      }
      else if (iVar1 == 8) {
        bn_sqr_comba8(*puVar3,*param_2);
      }
      else {
        if (0xf < iVar1) {
          cVar2 = BN_num_bits_word((longlong)iVar1);
          iVar6 = 1 << (cVar2 - 1U & 0x1f);
          if (iVar1 == iVar6) {
            lVar5 = bn_wexpand(plVar4,iVar6 * 4);
            if (lVar5 != 0) {
              bn_sqr_recursive(*puVar3,*param_2,iVar1,*plVar4);
              goto LAB_143d86271;
            }
          }
          else {
            lVar5 = bn_wexpand(plVar4,iVar1 * 2);
            if (lVar5 != 0) {
              puVar8 = (undefined1 *)*plVar4;
              goto LAB_143d86263;
            }
          }
          goto LAB_143d86294;
        }
        puVar8 = local_148;
LAB_143d86263:
        bn_sqr_normal(*puVar3,*param_2,iVar1,puVar8);
      }
LAB_143d86271:
      *(int *)(puVar3 + 1) = local_158;
      *(undefined4 *)(puVar3 + 2) = 0;
      if ((param_1 == puVar3) || (lVar5 = BN_copy(param_1,puVar3), lVar5 != 0)) {
        uVar7 = 1;
      }
    }
  }
LAB_143d86294:
  BN_CTX_end(param_3);
LAB_143d862af:
  bn_correct_top(param_1);
  return uVar7;
}



// FUNCTION 143d862e0 bn_sqr_fixed_top body=415 status=ok
// SIG undefined bn_sqr_fixed_top(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 bn_sqr_fixed_top(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined1 auStack_168 [32];
  undefined1 local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  iVar1 = *(int *)(param_2 + 1);
  uVar8 = 0;
  if (iVar1 < 1) {
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    return 1;
  }
  BN_CTX_start(param_3);
  puVar4 = param_1;
  if (param_2 == param_1) {
    puVar4 = (undefined8 *)BN_CTX_get(param_3);
  }
  plVar5 = (longlong *)BN_CTX_get(param_3);
  uVar9 = 0;
  if ((puVar4 == (undefined8 *)0x0) || (uVar9 = uVar8, plVar5 == (longlong *)0x0))
  goto LAB_143d86446;
  iVar2 = iVar1 * 2;
  lVar6 = bn_wexpand(puVar4,iVar2);
  uVar9 = 0;
  if (lVar6 == 0) goto LAB_143d86446;
  if (iVar1 == 4) {
    bn_sqr_comba4(*puVar4,*param_2);
  }
  else if (iVar1 == 8) {
    bn_sqr_comba8(*puVar4,*param_2);
  }
  else {
    if (iVar1 < 0x10) {
      puVar10 = local_148;
    }
    else {
      cVar3 = BN_num_bits_word((longlong)iVar1);
      iVar7 = 1 << (cVar3 - 1U & 0x1f);
      if (iVar1 == iVar7) {
        lVar6 = bn_wexpand(plVar5,iVar7 * 4);
        uVar9 = uVar8;
        if (lVar6 == 0) goto LAB_143d86446;
        bn_sqr_recursive(*puVar4,*param_2,iVar1,*plVar5);
        goto LAB_143d8641d;
      }
      lVar6 = bn_wexpand(plVar5,iVar2);
      uVar9 = uVar8;
      if (lVar6 == 0) goto LAB_143d86446;
      puVar10 = (undefined1 *)*plVar5;
    }
    bn_sqr_normal(*puVar4,*param_2,iVar1,puVar10);
  }
LAB_143d8641d:
  *(undefined4 *)(puVar4 + 2) = 0;
  *(int *)(puVar4 + 1) = iVar2;
  if ((param_1 == puVar4) || (lVar6 = BN_copy(param_1,puVar4), uVar9 = uVar8, lVar6 != 0)) {
    uVar9 = 1;
  }
LAB_143d86446:
  BN_CTX_end(param_3);
  return uVar9;
}



// FUNCTION 143d86480 bn_sqr_normal body=271 status=ok
// SIG undefined bn_sqr_normal(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void bn_sqr_normal(undefined8 *param_1,undefined8 *param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  
  iVar3 = param_3 + -1;
  lVar5 = (longlong)iVar3 * 8;
  puVar2 = param_1 + 1;
  param_1[(longlong)(param_3 * 2) + -1] = 0;
  *param_1 = 0;
  puVar4 = param_2;
  if (0 < iVar3) {
    puVar4 = param_2 + 1;
    uVar1 = bn_mul_words(puVar2,puVar4,iVar3,*param_2);
    puVar2[iVar3] = uVar1;
    puVar2 = param_1 + 3;
  }
  if (0 < param_3 + -2) {
    iVar6 = param_3 + -2;
    do {
      uVar1 = *puVar4;
      lVar5 = lVar5 + -8;
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + -1;
      iVar6 = iVar6 + -1;
      uVar1 = bn_mul_add_words(puVar2,puVar4,iVar3,uVar1);
      *(undefined8 *)(lVar5 + (longlong)puVar2) = uVar1;
      puVar2 = puVar2 + 2;
    } while (0 < iVar6);
  }
  bn_add_words(param_1,param_1,param_1,param_3 * 2);
  bn_sqr_words(param_4,param_2,param_3);
  bn_add_words(param_1,param_1,param_4,param_3 * 2);
  return;
}



// FUNCTION 143d86590 bn_sqr_recursive body=444 status=ok
// SIG undefined bn_sqr_recursive(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void bn_sqr_recursive(longlong param_1,longlong param_2,int param_3,longlong param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Dst;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  
  lVar12 = (longlong)param_3;
  iVar6 = param_3 / 2;
  if (param_3 == 4) {
    bn_sqr_comba4(param_1,param_2);
    return;
  }
  if (param_3 == 8) {
    bn_sqr_comba8(param_1,param_2);
    return;
  }
  if (param_3 < 0x10) {
    bn_sqr_normal(param_1,param_2,param_3);
    return;
  }
  lVar13 = (longlong)iVar6 * 8;
  lVar2 = lVar13 + param_2;
  iVar7 = bn_cmp_words(param_2,lVar2,iVar6,param_4,lVar13,0x143d865a2);
  bVar5 = false;
  if (iVar7 < 1) {
    if (iVar7 < 0) {
      bn_sub_words(param_4,lVar2,param_2,iVar6);
    }
    else {
      bVar5 = true;
    }
  }
  else {
    bn_sub_words(param_4,param_2,lVar2,iVar6);
    bVar5 = false;
  }
  lVar3 = param_4 + (longlong)(param_3 * 2) * 8;
  _Dst = (void *)(lVar12 * 8 + param_4);
  if (bVar5) {
    _guard_xfg_dispatch_icall_nop(_Dst,0,lVar12 * 8);
  }
  else {
    bn_sqr_recursive(_Dst,param_4,iVar6,lVar3);
  }
  bn_sqr_recursive(param_1,param_2,iVar6,lVar3);
  lVar4 = param_1 + lVar12 * 8;
  bn_sqr_recursive(lVar4,lVar2,iVar6,lVar3);
  iVar7 = bn_add_words(param_4,param_1,lVar4,param_3);
  lVar12 = param_4 + lVar12 * 8;
  iVar8 = bn_sub_words(lVar12,param_4,lVar12,param_3);
  iVar9 = bn_add_words(lVar13 + param_1,lVar13 + param_1,lVar12,param_3);
  iVar9 = (iVar7 - iVar8) + iVar9;
  if (iVar9 != 0) {
    puVar10 = (ulonglong *)(param_1 + (longlong)(iVar6 + param_3) * 8);
    uVar11 = *(longlong *)(param_1 + (longlong)(iVar6 + param_3) * 8) + (longlong)iVar9;
    *puVar10 = uVar11;
    if (uVar11 < (ulonglong)(longlong)iVar9) {
      do {
        puVar1 = puVar10 + 1;
        *puVar1 = *puVar1 + 1;
        puVar10 = puVar10 + 1;
      } while (*puVar1 == 0);
    }
  }
  return;
}



// FUNCTION 143d86750 BN_RECP_CTX_free body=69 status=ok
// SIG undefined BN_RECP_CTX_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_RECP_CTX_free(longlong param_1)

{
  if (param_1 != 0) {
    BN_free();
    BN_free(param_1 + 0x18);
    if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
      CRYPTO_free(param_1,"crypto\\bn\\bn_recp.c",0x2a);
    }
  }
  return;
}



// FUNCTION 143d867a0 BN_RECP_CTX_init body=70 status=ok
// SIG undefined BN_RECP_CTX_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_RECP_CTX_init(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  bn_init();
  bn_init(param_1 + 3);
  return;
}



// FUNCTION 143d867f0 BN_RECP_CTX_set body=91 status=ok
// SIG undefined BN_RECP_CTX_set(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_RECP_CTX_set(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = BN_copy();
  if (lVar2 == 0) {
    return 0;
  }
  BN_set_word(param_1 + 0x18,0);
  uVar1 = BN_num_bits(param_2);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(undefined4 *)(param_1 + 0x34) = 0;
  return 1;
}



// FUNCTION 143d86850 BN_div_recp body=646 status=ok
// SIG undefined BN_div_recp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint BN_div_recp(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                undefined8 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  uint uVar10;
  uint uVar8;
  uint uVar9;
  
  uVar8 = 0;
  uVar9 = 0;
  uVar7 = 0;
  BN_CTX_start(param_5);
  if (param_1 == 0) {
    param_1 = BN_CTX_get(param_5);
  }
  if (param_2 == 0) {
    param_2 = BN_CTX_get(param_5);
  }
  uVar4 = BN_CTX_get(param_5);
  lVar5 = BN_CTX_get(param_5);
  uVar10 = uVar8;
  if (lVar5 != 0) {
    iVar1 = BN_ucmp(param_3,param_4);
    if (iVar1 < 0) {
      BN_set_word(param_1,0);
      lVar5 = BN_copy(param_2,param_3);
      BN_CTX_end(param_5);
      return (uint)(lVar5 != 0);
    }
    iVar2 = BN_num_bits(param_3);
    iVar1 = *(int *)(param_4 + 0x34);
    iVar3 = *(int *)(param_4 + 0x30) * 2;
    if (iVar2 < iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 != iVar1) {
      BN_CTX_start(param_5);
      lVar6 = BN_CTX_get(param_5);
      iVar1 = -1;
      if ((lVar6 != 0) && (iVar3 = BN_set_bit(lVar6,iVar2), iVar3 != 0)) {
        iVar3 = BN_div(param_4 + 0x18,0,lVar6,param_4,param_5);
        iVar1 = -1;
        if (iVar3 != 0) {
          iVar1 = iVar2;
        }
      }
      BN_CTX_end(param_5);
      *(int *)(param_4 + 0x34) = iVar1;
    }
    if ((((iVar1 != -1) &&
         (iVar1 = BN_rshift(uVar4,param_3,*(undefined4 *)(param_4 + 0x30)), iVar1 != 0)) &&
        (iVar1 = BN_mul(lVar5,uVar4,param_4 + 0x18,param_5), iVar1 != 0)) &&
       (iVar1 = BN_rshift(param_1,lVar5,iVar2 - *(int *)(param_4 + 0x30)), uVar10 = uVar9,
       iVar1 != 0)) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      iVar1 = BN_mul(lVar5,param_4,param_1,param_5);
      if ((iVar1 != 0) && (iVar1 = BN_usub(param_2,param_3,lVar5), iVar1 != 0)) {
        *(undefined4 *)(param_2 + 0x10) = 0;
        iVar1 = BN_ucmp(param_2,param_4);
        while (-1 < iVar1) {
          if (2 < (int)uVar8) {
            ERR_put_error(3,0x82,0x65,"crypto\\bn\\bn_recp.c",0x95);
            goto LAB_143d86a9a;
          }
          iVar1 = BN_usub(param_2,param_2,param_4);
          if ((iVar1 == 0) || (iVar1 = BN_add_word(param_1,1), iVar1 == 0)) goto LAB_143d86a9a;
          iVar1 = BN_ucmp(param_2,param_4);
          uVar8 = uVar8 + 1;
        }
        iVar1 = BN_is_zero(param_2);
        if (iVar1 == 0) {
          uVar7 = *(undefined4 *)(param_3 + 0x10);
        }
        *(undefined4 *)(param_2 + 0x10) = uVar7;
        *(uint *)(param_1 + 0x10) = *(uint *)(param_3 + 0x10) ^ *(uint *)(param_4 + 0x10);
        uVar10 = 1;
      }
    }
  }
LAB_143d86a9a:
  BN_CTX_end(param_5);
  return uVar10;
}



// FUNCTION 143d86ae0 BN_mod_mul_reciprocal body=199 status=ok
// SIG undefined BN_mod_mul_reciprocal(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
BN_mod_mul_reciprocal
          (undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143d86b04;
  uVar2 = 0;
  BN_CTX_start(param_5);
  lVar3 = BN_CTX_get(param_5);
  if (lVar3 != 0) {
    if (param_3 != 0) {
      if (param_2 == param_3) {
        iVar1 = BN_sqr(lVar3,param_2,param_5);
      }
      else {
        iVar1 = BN_mul(lVar3,param_2,param_3,param_5);
      }
      uVar2 = 0;
      param_2 = lVar3;
      if (iVar1 == 0) goto LAB_143d86b7d;
    }
    uVar2 = BN_div_recp(0,param_1,param_2,param_4,param_5,uVar4);
  }
LAB_143d86b7d:
  BN_CTX_end(param_5);
  return uVar2;
}



// FUNCTION 143d86bb0 RSAZ_1024_mod_exp_avx2 body=1951 status=ok
// SIG undefined RSAZ_1024_mod_exp_avx2(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void RSAZ_1024_mod_exp_avx2
               (undefined8 param_1,undefined8 param_2,byte *param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  longlong lVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined1 auStack_1688 [32];
  undefined8 local_1668;
  undefined1 local_1658 [64];
  undefined1 local_1618 [320];
  undefined1 auStack_14d8 [320];
  undefined1 auStack_1398 [320];
  undefined1 auStack_1258 [4608];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x143d86bc7;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1688;
  lVar2 = -(ulonglong)((int)&stack0xfffffffffffffff0 - 0x1648U & 0x3f);
  puVar7 = local_1618 + lVar2;
  uVar5 = ((uint)puVar7 & 0xfff) + 0x140;
  puVar6 = auStack_1398 + lVar2;
  if (uVar5 < 0x1000) {
    puVar6 = puVar7;
  }
  puVar1 = auStack_1258 + lVar2;
  lVar8 = 0x140;
  if (uVar5 < 0x1000) {
    lVar8 = 0x280;
  }
  puVar9 = puVar7 + lVar8;
  if (uVar5 < 0x1000) {
    puVar7 = auStack_14d8 + lVar2;
  }
  FUN_1400973a0(puVar6,param_4);
  FUN_1400973a0(puVar9,param_2);
  FUN_1400973a0(puVar1,param_5);
  local_1668 = param_6;
  FUN_140096700(puVar1,puVar1,puVar1,puVar6);
  local_1668 = param_6;
  FUN_140096700(puVar1,puVar1,&DAT_145da8240,puVar6);
  local_1668 = param_6;
  FUN_140096700(puVar7,puVar1,&DAT_145da8100,puVar6);
  local_1668 = param_6;
  FUN_140096700(puVar9,puVar9,puVar1,puVar6);
  rsaz_1024_scatter5_avx2(puVar1,puVar7,0);
  rsaz_1024_scatter5_avx2(puVar1,puVar9,1);
  local_1668._0_4_ = 1;
  FUN_140095a80(puVar7,puVar9,puVar6,param_6);
  rsaz_1024_scatter5_avx2(puVar1,puVar7,2);
  local_1668._0_4_ = 1;
  FUN_140095a80(puVar7,puVar7,puVar6,param_6);
  rsaz_1024_scatter5_avx2(puVar1,puVar7,4);
  local_1668._0_4_ = 1;
  FUN_140095a80(puVar7,puVar7,puVar6,param_6);
  rsaz_1024_scatter5_avx2(puVar1,puVar7,8);
  local_1668 = CONCAT44(local_1668._4_4_,1);
  FUN_140095a80(puVar7,puVar7,puVar6,param_6);
  rsaz_1024_scatter5_avx2(puVar1,puVar7,0x10);
  local_1668 = param_6;
  FUN_140096700(puVar7,puVar7,puVar9,puVar6);
  rsaz_1024_scatter5_avx2(puVar1,puVar7,0x11);
  FUN_140097660(puVar7,puVar1,2);
  local_1668 = param_6;
  FUN_140096700(puVar7,puVar7,puVar9,puVar6);
  rsaz_1024_scatter5_avx2(puVar1,puVar7,3);
  local_1668._0_4_ = 1;
  FUN_140095a80(puVar7,puVar7,puVar6,param_6);
  rsaz_1024_scatter5_avx2(puVar1,puVar7,6);
  local_1668._0_4_ = 1;
  FUN_140095a80(puVar7,puVar7,puVar6,param_6);
  rsaz_1024_scatter5_avx2(puVar1,puVar7,0xc);
  local_1668 = CONCAT44(local_1668._4_4_,1);
  FUN_140095a80(puVar7,puVar7,puVar6,param_6);
  rsaz_1024_scatter5_avx2(puVar1,puVar7,0x18);
  local_1668 = param_6;
  FUN_140096700(puVar7,puVar7,puVar9,puVar6);
  rsaz_1024_scatter5_avx2(puVar1,puVar7,0x19);
  FUN_140097660(puVar7,puVar1,4);
  local_1668 = param_6;
  FUN_140096700(puVar7,puVar7,puVar9,puVar6);
  rsaz_1024_scatter5_avx2(puVar1,puVar7,5);
  local_1668._0_4_ = 1;
  FUN_140095a80(puVar7,puVar7,puVar6,param_6);
  rsaz_1024_scatter5_avx2(puVar1,puVar7,10);
  local_1668 = CONCAT44(local_1668._4_4_,1);
  FUN_140095a80(puVar7,puVar7,puVar6,param_6);
  rsaz_1024_scatter5_avx2(puVar1,puVar7,0x14);
  local_1668 = param_6;
  FUN_140096700(puVar7,puVar7,puVar9,puVar6);
  rsaz_1024_scatter5_avx2(puVar1,puVar7,0x15);
  FUN_140097660(puVar7,puVar1,6);
  local_1668 = param_6;
  FUN_140096700(puVar7,puVar7,puVar9,puVar6);
  rsaz_1024_scatter5_avx2(puVar1,puVar7,7);
  local_1668._0_4_ = 1;
  FUN_140095a80(puVar7,puVar7,puVar6,param_6);
  rsaz_1024_scatter5_avx2(puVar1,puVar7,0xe);
  local_1668 = CONCAT44(local_1668._4_4_,1);
  FUN_140095a80(puVar7,puVar7,puVar6,param_6);
  rsaz_1024_scatter5_avx2(puVar1,puVar7,0x1c);
  local_1668 = param_6;
  FUN_140096700(puVar7,puVar7,puVar9,puVar6);
  rsaz_1024_scatter5_avx2(puVar1,puVar7,0x1d);
  FUN_140097660(puVar7,puVar1,8);
  local_1668 = param_6;
  FUN_140096700(puVar7,puVar7,puVar9,puVar6);
  rsaz_1024_scatter5_avx2(puVar1,puVar7,9);
  local_1668 = CONCAT44(local_1668._4_4_,1);
  FUN_140095a80(puVar7,puVar7,puVar6,param_6);
  rsaz_1024_scatter5_avx2(puVar1,puVar7,0x12);
  local_1668 = param_6;
  FUN_140096700(puVar7,puVar7,puVar9,puVar6);
  rsaz_1024_scatter5_avx2(puVar1,puVar7,0x13);
  FUN_140097660(puVar7,puVar1,10);
  local_1668 = param_6;
  FUN_140096700(puVar7,puVar7,puVar9,puVar6);
  rsaz_1024_scatter5_avx2(puVar1,puVar7,0xb);
  local_1668 = CONCAT44(local_1668._4_4_,1);
  FUN_140095a80(puVar7,puVar7,puVar6,param_6);
  rsaz_1024_scatter5_avx2(puVar1,puVar7,0x16);
  local_1668 = param_6;
  FUN_140096700(puVar7,puVar7,puVar9,puVar6);
  rsaz_1024_scatter5_avx2(puVar1,puVar7,0x17);
  FUN_140097660(puVar7,puVar1,0xc);
  local_1668 = param_6;
  FUN_140096700(puVar7,puVar7,puVar9,puVar6);
  rsaz_1024_scatter5_avx2(puVar1,puVar7,0xd);
  local_1668 = CONCAT44(local_1668._4_4_,1);
  FUN_140095a80(puVar7,puVar7,puVar6,param_6);
  rsaz_1024_scatter5_avx2(puVar1,puVar7,0x1a);
  local_1668 = param_6;
  FUN_140096700(puVar7,puVar7,puVar9,puVar6);
  rsaz_1024_scatter5_avx2(puVar1,puVar7,0x1b);
  FUN_140097660(puVar7,puVar1,0xe);
  local_1668 = param_6;
  FUN_140096700(puVar7,puVar7,puVar9,puVar6);
  rsaz_1024_scatter5_avx2(puVar1,puVar7,0xf);
  local_1668 = CONCAT44(local_1668._4_4_,1);
  FUN_140095a80(puVar7,puVar7,puVar6,param_6);
  rsaz_1024_scatter5_avx2(puVar1,puVar7,0x1e);
  local_1668 = param_6;
  FUN_140096700(puVar7,puVar7,puVar9,puVar6);
  rsaz_1024_scatter5_avx2(puVar1,puVar7,0x1f);
  FUN_140097660(puVar7,puVar1,param_3[0x7f] >> 3);
  uVar5 = 0x3f6;
  do {
    local_1668 = CONCAT44(local_1668._4_4_,5);
    FUN_140095a80(puVar7,puVar7,puVar6,param_6);
    bVar4 = (byte)uVar5 & 7;
    uVar3 = uVar5;
    if ((int)uVar5 < 0) {
      uVar3 = uVar5 + 7;
      bVar4 = bVar4 - 8;
    }
    uVar5 = uVar5 - 5;
    FUN_140097660(puVar9,puVar1,
                  (int)(uint)CONCAT11(param_3[(longlong)((int)uVar3 >> 3) + 1],
                                      param_3[(int)uVar3 >> 3]) >> (bVar4 & 0x1f) & 0x1f);
    local_1668 = param_6;
    FUN_140096700(puVar7,puVar7,puVar9,puVar6);
  } while (uVar5 < 0x80000000);
  local_1668 = CONCAT44(local_1668._4_4_,4);
  FUN_140095a80(puVar7,puVar7,puVar6,param_6);
  FUN_140097660(puVar9,puVar1,*param_3 & 0xf);
  local_1668 = param_6;
  FUN_140096700(puVar7,puVar7,puVar9,puVar6);
  local_1668 = param_6;
  FUN_140096700(puVar7,puVar7,&DAT_145da8100,puVar6);
  FUN_1400970e0(param_1,puVar7);
  FUN_14004ff40(local_1658,0x1600);
  return;
}



// FUNCTION 143d87350 RSAZ_512_mod_exp body=623 status=ok
// SIG undefined RSAZ_512_mod_exp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void RSAZ_512_mod_exp(undefined8 param_1,undefined8 param_2,longlong param_3,longlong *param_4,
                     undefined8 param_5,undefined8 param_6)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_558 [32];
  undefined1 *local_538;
  uint local_530;
  undefined8 local_528;
  undefined1 local_518 [24];
  undefined1 auStack_500 [1024];
  undefined1 auStack_100 [64];
  longlong lStack_c0;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x143d87367;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_558;
  lStack_c0 = -*param_4;
  uStack_b8 = ~param_4[1];
  uStack_b0 = ~param_4[2];
  uStack_a8 = ~param_4[3];
  uStack_a0 = ~param_4[4];
  uStack_98 = ~param_4[5];
  uStack_90 = ~param_4[6];
  uStack_88 = ~param_4[7];
  local_528 = param_1;
  rsaz_512_scatter4(auStack_500,&lStack_c0,0);
  local_538 = (undefined1 *)param_5;
  FUN_1400c69a0(auStack_100,param_2,param_6,param_4);
  rsaz_512_scatter4(auStack_500,auStack_100,1);
  local_538 = (undefined1 *)CONCAT44(local_538._4_4_,1);
  FUN_1400c6080(&lStack_c0,auStack_100,param_4,param_5);
  rsaz_512_scatter4(auStack_500,&lStack_c0,2);
  iVar3 = 3;
  do {
    local_538 = auStack_500;
    local_530 = iVar3;
    FUN_1400c7220(&lStack_c0,auStack_100,param_4,param_5);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  bVar1 = *(byte *)(param_3 + 0x3f);
  rsaz_512_gather4(&lStack_c0,auStack_500,bVar1 >> 4);
  local_538 = (undefined1 *)CONCAT44(local_538._4_4_,4);
  FUN_1400c6080(&lStack_c0,&lStack_c0,param_4,param_5);
  local_530 = bVar1 & 0xf;
  local_538 = (undefined1 *)param_5;
  FUN_1400c6b00(&lStack_c0,&lStack_c0,auStack_500,param_4);
  lVar2 = 0x3e;
  do {
    bVar1 = *(byte *)(lVar2 + param_3);
    local_538 = (undefined1 *)CONCAT44(local_538._4_4_,4);
    FUN_1400c6080(&lStack_c0,&lStack_c0,param_4,param_5);
    local_530 = (uint)(bVar1 >> 4);
    local_538 = (undefined1 *)param_5;
    FUN_1400c6b00(&lStack_c0,&lStack_c0,auStack_500,param_4);
    local_538 = (undefined1 *)CONCAT44(local_538._4_4_,4);
    FUN_1400c6080(&lStack_c0,&lStack_c0,param_4,param_5);
    local_530 = bVar1 & 0xf;
    local_538 = (undefined1 *)param_5;
    FUN_1400c6b00(&lStack_c0,&lStack_c0,auStack_500,param_4);
    lVar2 = lVar2 + -1;
  } while (-1 < lVar2);
  FUN_1400c73c0(local_528,&lStack_c0,param_4,param_5);
  FUN_14004ff40(local_518,0x4c0);
  return;
}



// FUNCTION 143d875c0 UI_add_input_string body=159 status=ok
// SIG undefined UI_add_input_string(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong UI_add_input_string(longlong param_1,undefined8 param_2,undefined4 param_3,
                             undefined8 param_4,undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = general_allocate_prompt(param_1,param_2,0,1,param_3,param_4);
  if (lVar1 == 0) {
LAB_143d87611:
    uVar3 = 0xffffffff;
  }
  else {
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar2 = OPENSSL_sk_new_null();
      *(longlong *)(param_1 + 8) = lVar2;
      if (lVar2 == 0) {
        free_string(lVar1);
        goto LAB_143d87611;
      }
    }
    *(undefined4 *)(lVar1 + 0x28) = param_5;
    *(undefined4 *)(lVar1 + 0x2c) = param_6;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    uVar3 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 8),lVar1);
    if ((int)uVar3 < 1) {
      free_string(lVar1);
      return (ulonglong)((int)uVar3 - 1);
    }
  }
  return uVar3;
}



// FUNCTION 143d87660 UI_add_user_data body=77 status=ok
// SIG undefined UI_add_user_data(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong UI_add_user_data(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = param_1[2];
  uVar1 = *(uint *)(param_1 + 4);
  if ((uVar1 & 2) != 0) {
    (**(code **)(*param_1 + 0x38))(param_1,lVar2);
    uVar1 = *(uint *)(param_1 + 4);
    lVar2 = 0;
  }
  param_1[2] = param_2;
  *(uint *)(param_1 + 4) = uVar1 & 0xfffffffd;
  return lVar2;
}



// FUNCTION 143d876b0 UI_add_verify_string body=77 status=ok
// SIG undefined UI_add_verify_string(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void UI_add_verify_string
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  general_allocate_string(param_1,param_2,0,2,param_3,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 143d87700 UI_construct_prompt body=359 status=ok
// SIG undefined UI_construct_prompt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong UI_construct_prompt(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined2 local_38 [2];
  undefined4 local_34;
  undefined2 local_30;
  undefined1 local_2e;
  undefined4 local_2c;
  undefined2 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  if (*(code **)(*param_1 + 0x40) == (code *)0x0) {
    local_34 = 0x65746e45;
    local_30 = 0x2072;
    local_2e = 0;
    local_2c = 0x726f6620;
    local_28 = 0x20;
    local_38[0] = 0x3a;
    if (param_2 != 0) {
      lVar3 = -1;
      lVar2 = -1;
      do {
        lVar2 = lVar2 + 1;
      } while (*(char *)(param_2 + lVar2) != '\0');
      iVar1 = (int)lVar2 + 6;
      if (param_3 != 0) {
        do {
          lVar3 = lVar3 + 1;
        } while (*(char *)(param_3 + lVar3) != '\0');
        iVar1 = (int)lVar2 + 0xb + (int)lVar3;
      }
      lVar3 = (longlong)(iVar1 + 2);
      lVar2 = CRYPTO_malloc(lVar3,"crypto\\ui\\ui_lib.c",0x179);
      if (lVar2 != 0) {
        OPENSSL_strlcpy(lVar2,&local_34,lVar3);
        OPENSSL_strlcat(lVar2,param_2,lVar3);
        if (param_3 != 0) {
          OPENSSL_strlcat(lVar2,&local_2c,lVar3);
          OPENSSL_strlcat(lVar2,param_3,lVar3);
        }
        OPENSSL_strlcat(lVar2,local_38,lVar3);
        return lVar2;
      }
      local_48 = 0x17a;
      ERR_put_error(0x28,0x79,0x41,"crypto\\ui\\ui_lib.c");
    }
    lVar2 = 0;
  }
  else {
    lVar2 = (**(code **)(*param_1 + 0x40))();
  }
  return lVar2;
}



// FUNCTION 143d87870 UI_free body=107 status=ok
// SIG undefined UI_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void UI_free(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    if ((*(byte *)(param_1 + 4) & 2) != 0) {
      (**(code **)(*param_1 + 0x38))(param_1,param_1[2]);
    }
    OPENSSL_sk_pop_free(param_1[1],free_string);
    CRYPTO_free_ex_data(0xb,param_1,param_1 + 3);
    CRYPTO_THREAD_lock_free(param_1[5]);
    CRYPTO_free(param_1,"crypto\\ui\\ui_lib.c",0x53);
  }
  return;
}



// FUNCTION 143d878e0 UI_get0_action_string body=13 status=ok
// SIG undefined UI_get0_action_string(void)

undefined8 UI_get0_action_string(int *param_1)

{
  if (*param_1 != 3) {
    return 0;
  }
  return *(undefined8 *)(param_1 + 10);
}



// FUNCTION 143d878f0 UI_get0_result_string body=17 status=ok
// SIG undefined UI_get0_result_string(void)

undefined8 UI_get0_result_string(int *param_1)

{
  if (*param_1 - 1U < 2) {
    return *(undefined8 *)(param_1 + 6);
  }
  return 0;
}



// FUNCTION 143d87910 UI_get0_test_string body=13 status=ok
// SIG undefined UI_get0_test_string(void)

undefined8 UI_get0_test_string(int *param_1)

{
  if (*param_1 != 2) {
    return 0;
  }
  return *(undefined8 *)(param_1 + 0xc);
}



// FUNCTION 143d87920 UI_new body=206 status=ok
// SIG undefined UI_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * UI_new(void)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143d8792c;
  plVar2 = (longlong *)CRYPTO_zalloc(0x30,"crypto\\ui\\ui_lib.c",0x19);
  if (plVar2 == (longlong *)0x0) {
    ERR_put_error(0x28,0x68,0x41,"crypto\\ui\\ui_lib.c",0x1c,uVar5);
    return (longlong *)0x0;
  }
  lVar3 = CRYPTO_THREAD_lock_new();
  plVar2[5] = lVar3;
  if (lVar3 == 0) {
    ERR_put_error(0x28,0x68,0x41,"crypto\\ui\\ui_lib.c",0x22,uVar5);
    uVar4 = 0x23;
  }
  else {
    lVar3 = FUN_143dbbb90();
    if (lVar3 == 0) {
      lVar3 = FUN_143dbc020();
    }
    *plVar2 = lVar3;
    iVar1 = CRYPTO_new_ex_data(0xb,plVar2,plVar2 + 3);
    if (iVar1 != 0) {
      return plVar2;
    }
    uVar4 = 0x2e;
  }
  CRYPTO_free(plVar2,"crypto\\ui\\ui_lib.c",uVar4);
  return (longlong *)0x0;
}



// FUNCTION 143d879f0 UI_process body=446 status=ok
// SIG undefined UI_process(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char * UI_process(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  uVar7 = 0x143d87a05;
  if ((*(code **)(*param_1 + 8) != (code *)0x0) &&
     (iVar1 = (**(code **)(*param_1 + 8))(), iVar1 < 1)) {
    pcVar3 = "opening session";
    pcVar6 = (char *)0xffffffff;
    goto LAB_143d87b21;
  }
  if ((*(uint *)(param_1 + 4) & 0x100) != 0) {
    ERR_print_errors_cb(print_error,param_1);
  }
  pcVar3 = (char *)0x0;
  iVar1 = OPENSSL_sk_num(param_1[1]);
  pcVar6 = pcVar3;
  if (0 < iVar1) {
    do {
      if (*(longlong *)(*param_1 + 0x10) != 0) {
        uVar2 = OPENSSL_sk_value(param_1[1],pcVar6);
        iVar1 = (**(code **)(*param_1 + 0x10))(param_1,uVar2);
        if (iVar1 < 1) {
          pcVar3 = "writing strings";
          pcVar6 = (char *)0xffffffff;
          goto LAB_143d87b21;
        }
      }
      uVar5 = (int)pcVar6 + 1;
      pcVar6 = (char *)(ulonglong)uVar5;
      iVar1 = OPENSSL_sk_num(param_1[1]);
    } while ((int)uVar5 < iVar1);
  }
  if (*(code **)(*param_1 + 0x18) != (code *)0x0) {
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
    if (iVar1 == -1) {
LAB_143d87b5c:
      pcVar3 = "processing";
      pcVar6 = (char *)0xfffffffe;
      goto LAB_143d87b21;
    }
    if (iVar1 == 0) {
      pcVar3 = "flushing";
      pcVar6 = (char *)0xffffffff;
      goto LAB_143d87b21;
    }
  }
  iVar1 = OPENSSL_sk_num(param_1[1]);
  pcVar4 = pcVar3;
  pcVar6 = pcVar3;
  if (0 < iVar1) {
    do {
      if (*(longlong *)(*param_1 + 0x20) != 0) {
        uVar2 = OPENSSL_sk_value(param_1[1],pcVar4);
        iVar1 = (**(code **)(*param_1 + 0x20))(param_1,uVar2);
        if (iVar1 == -1) goto LAB_143d87b5c;
        if (iVar1 == 0) {
          pcVar3 = "reading strings";
          pcVar6 = (char *)0xffffffff;
          break;
        }
      }
      uVar5 = (int)pcVar4 + 1;
      pcVar4 = (char *)(ulonglong)uVar5;
      iVar1 = OPENSSL_sk_num(param_1[1]);
    } while ((int)uVar5 < iVar1);
  }
LAB_143d87b21:
  if ((*(code **)(*param_1 + 0x28) == (code *)0x0) ||
     (iVar1 = (**(code **)(*param_1 + 0x28))(param_1), 0 < iVar1)) {
    pcVar4 = pcVar3;
    if ((int)pcVar6 != -1) {
      return pcVar6;
    }
  }
  else {
    pcVar6 = (char *)0xffffffff;
    pcVar4 = "closing session";
    if (pcVar3 != (char *)0x0) {
      pcVar4 = pcVar3;
    }
  }
  ERR_put_error(0x28,0x71,0x6b,"crypto\\ui\\ui_lib.c",0x21f,uVar7);
  ERR_add_error_data(2,"while ",pcVar4);
  return pcVar6;
}



// FUNCTION 143d87bb0 UI_set_method body=7 status=ok
// SIG undefined UI_set_method(void)

undefined8 UI_set_method(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return param_2;
}



// FUNCTION 143d87bc0 UI_set_result body=39 status=ok
// SIG undefined UI_set_result(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void UI_set_result(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_3 + lVar1) != '\0');
  UI_set_result_ex();
  return;
}



// FUNCTION 143d87bf0 UI_set_result_ex body=475 status=ok
// SIG undefined UI_set_result_ex(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 UI_set_result_ex(longlong param_1,int *param_2,char *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  size_t _Size;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  char *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  undefined8 uStack_28;
  
  uStack_28 = 0x143d87bff;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffffe;
  iVar2 = *param_2;
  _Size = (size_t)param_4;
  if (0 < iVar2) {
    if (iVar2 < 3) {
      BIO_snprintf(local_48,0xd,&DAT_144cd4c80,param_2[10]);
      BIO_snprintf(local_58,0xd,&DAT_144cd4c80,param_2[0xb]);
      if (param_4 < param_2[10]) {
        local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x387);
        uVar4 = 0x65;
      }
      else {
        if (param_4 <= param_2[0xb]) {
          if (*(void **)(param_2 + 6) != (void *)0x0) {
            _guard_xfg_dispatch_icall_nop(*(void **)(param_2 + 6),param_3,_Size);
            if (param_4 <= param_2[0xb]) {
              *(undefined1 *)(_Size + *(longlong *)(param_2 + 6)) = 0;
            }
            *(size_t *)(param_2 + 8) = _Size;
            return 0;
          }
          local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x396);
          goto LAB_143d87d77;
        }
        local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x38e);
        uVar4 = 100;
      }
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
      ERR_put_error(0x28,0x78,uVar4,"crypto\\ui\\ui_lib.c");
      local_60 = " characters";
      local_68 = local_58;
      ERR_add_error_data(5,"You must type in ",local_48,&DAT_145cbda28);
      return 0xffffffff;
    }
    if (iVar2 == 3) {
      if (*(undefined1 **)(param_2 + 6) == (undefined1 *)0x0) {
        local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x3a4);
LAB_143d87d77:
        ERR_put_error(0x28,0x78,0x69,"crypto\\ui\\ui_lib.c");
        return 0xffffffff;
      }
      **(undefined1 **)(param_2 + 6) = 0;
      cVar1 = *param_3;
      while (cVar1 != '\0') {
        pcVar3 = _guard_xfg_dispatch_icall_nop(*(char **)(param_2 + 0xc),(int)cVar1);
        if (pcVar3 != (char *)0x0) {
          **(undefined1 **)(param_2 + 6) = **(undefined1 **)(param_2 + 0xc);
          return 0;
        }
        pcVar3 = _guard_xfg_dispatch_icall_nop(*(char **)(param_2 + 0xe),(int)*param_3);
        if (pcVar3 != (char *)0x0) {
          **(undefined1 **)(param_2 + 6) = **(undefined1 **)(param_2 + 0xe);
          return 0;
        }
        pcVar3 = param_3 + 1;
        param_3 = param_3 + 1;
        cVar1 = *pcVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 143d87dd0 free_string body=141 status=ok
// SIG undefined free_string(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void free_string(int *param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    CRYPTO_free(*(undefined8 *)(param_1 + 2),"crypto\\ui\\ui_lib.c",0x37);
    if (*param_1 == 3) {
      CRYPTO_free(*(undefined8 *)(param_1 + 10),"crypto\\ui\\ui_lib.c",0x3a);
      CRYPTO_free(*(undefined8 *)(param_1 + 0xc),"crypto\\ui\\ui_lib.c",0x3b);
      CRYPTO_free(*(undefined8 *)(param_1 + 0xe),"crypto\\ui\\ui_lib.c",0x3c);
    }
  }
  CRYPTO_free(param_1,"crypto\\ui\\ui_lib.c",0x46);
  return;
}



// FUNCTION 143d87e60 general_allocate_prompt body=219 status=ok
// SIG undefined general_allocate_prompt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * general_allocate_prompt
                (undefined8 param_1,longlong param_2,int param_3,int param_4,int param_5,
                longlong param_6)

{
  int *piVar1;
  
  piVar1 = (int *)0x0;
  if (param_2 == 0) {
    ERR_put_error(0x28,0x6d,0x43,"crypto\\ui\\ui_lib.c",0x69,0x143d87e7b);
  }
  else if ((param_4 - 1U < 3) && (param_6 == 0)) {
    ERR_put_error(0x28,0x6d,0x69,"crypto\\ui\\ui_lib.c",0x6c,0x143d87e7b);
  }
  else {
    piVar1 = (int *)CRYPTO_malloc(0x48,"crypto\\ui\\ui_lib.c");
    if (piVar1 != (int *)0x0) {
      *(longlong *)(piVar1 + 2) = param_2;
      piVar1[4] = param_5;
      piVar1[0x10] = (uint)(param_3 != 0);
      *piVar1 = param_4;
      *(longlong *)(piVar1 + 6) = param_6;
    }
  }
  return piVar1;
}



// FUNCTION 143d87f40 general_allocate_string body=164 status=ok
// SIG undefined general_allocate_string(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong general_allocate_string
                    (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
                    undefined8 param_9)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = general_allocate_prompt();
  if (lVar1 == 0) {
LAB_143d87f92:
    uVar3 = 0xffffffff;
  }
  else {
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar2 = OPENSSL_sk_new_null();
      *(longlong *)(param_1 + 8) = lVar2;
      if (lVar2 == 0) {
        free_string(lVar1);
        goto LAB_143d87f92;
      }
    }
    *(undefined4 *)(lVar1 + 0x28) = param_7;
    *(undefined4 *)(lVar1 + 0x2c) = param_8;
    *(undefined8 *)(lVar1 + 0x30) = param_9;
    uVar3 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 8),lVar1,param_3,param_4,param_5,param_6);
    if ((int)uVar3 < 1) {
      free_string(lVar1);
      return (ulonglong)((int)uVar3 - 1);
    }
  }
  return uVar3;
}



// FUNCTION 143d87ff0 print_error body=102 status=ok
// SIG undefined print_error(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 print_error(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x143d87ffa;
  local_58 = 5;
  local_18 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (*(code **)(*param_3 + 0x10) != (code *)0x0) {
    local_50 = param_1;
    iVar1 = (**(code **)(*param_3 + 0x10))(param_3,&local_58);
    if (iVar1 < 1) {
      return 0xffffffff;
    }
  }
  return 0;
}



// FUNCTION 143d88060 ASN1_bn_print body=634 status=ok
// SIG undefined ASN1_bn_print(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ASN1_bn_print(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                       int param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  char *pcVar9;
  char *pcVar10;
  undefined2 *puVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  
  uVar7 = 0;
  if (param_3 == 0) {
LAB_143d882bc:
    uVar7 = 1;
  }
  else {
    iVar2 = BN_is_negative(param_3);
    pcVar9 = "";
    if (iVar2 != 0) {
      pcVar9 = "-";
    }
    iVar2 = BIO_indent(param_1,param_5,0x80);
    if (iVar2 != 0) {
      iVar2 = BN_is_zero(param_3);
      if (iVar2 == 0) {
        iVar2 = BN_num_bits(param_3);
        if (0x47 < iVar2 + 7) {
          iVar2 = BN_num_bits(param_3);
          lVar5 = (longlong)(((int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3) + 1);
          puVar6 = (undefined1 *)CRYPTO_malloc(lVar5,"crypto\\asn1\\t_pkey.c",0x49);
          uVar13 = uVar7;
          if (puVar6 != (undefined1 *)0x0) {
            *puVar6 = 0;
            pcVar10 = "";
            if (*pcVar9 == '-') {
              pcVar10 = " (Negative)";
            }
            iVar2 = BIO_printf(param_1,"%s%s\n",param_2,pcVar10);
            if (0 < iVar2) {
              iVar2 = BN_bn2bin(param_3,puVar6 + 1);
              if ((char)puVar6[1] < '\0') {
                iVar2 = iVar2 + 1;
                puVar12 = puVar6;
              }
              else {
                puVar12 = puVar6 + 1;
              }
              uVar8 = uVar7;
              if (iVar2 != 0) {
                do {
                  if ((uVar8 == (uVar8 / 0xf) * 0xf) &&
                     (((uVar8 != 0 &&
                       (iVar3 = BIO_puts(param_1,&DAT_143fc48d8), uVar13 = uVar7, iVar3 < 1)) ||
                      (iVar3 = BIO_indent(param_1,param_5 + 4,0x80), uVar13 = 0, iVar3 == 0))))
                  goto LAB_143d88290;
                  puVar11 = &DAT_145cc3708;
                  if (uVar8 == (longlong)iVar2 - 1U) {
                    puVar11 = (undefined2 *)&DAT_143f3f584;
                  }
                  iVar3 = BIO_printf(param_1,"%02x%s",puVar12[uVar8],puVar11);
                  uVar13 = 0;
                  if (iVar3 < 1) goto LAB_143d88290;
                  uVar8 = uVar8 + 1;
                } while (uVar8 < (ulonglong)(longlong)iVar2);
              }
              iVar2 = BIO_write(param_1,&DAT_143fc48d8,1);
              uVar13 = 0;
              if (0 < iVar2) {
                uVar13 = 1;
              }
            }
          }
LAB_143d88290:
          CRYPTO_clear_free(puVar6,lVar5,"crypto\\asn1\\t_pkey.c",0x5b);
          return uVar13;
        }
        puVar4 = (undefined4 *)FHardwareCursor::GetHandle();
        uVar1 = *puVar4;
        puVar4 = (undefined4 *)FHardwareCursor::GetHandle(param_3);
        iVar2 = BIO_printf(param_1,"%s %s%lu (%s0x%lx)\n",param_2,pcVar9,*puVar4,pcVar9,uVar1);
      }
      else {
        iVar2 = BIO_printf(param_1,"%s 0\n",param_2);
      }
      if (0 < iVar2) goto LAB_143d882bc;
    }
    uVar7 = 0;
  }
  return uVar7;
}



// FUNCTION 143d882e0 ASN1_buf_print body=258 status=ok
// SIG undefined ASN1_buf_print(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASN1_buf_print(undefined8 param_1,longlong param_2,ulonglong param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  
  uVar3 = 0;
  if (param_3 != 0) {
    do {
      if ((uVar3 == (uVar3 / 0xf) * 0xf) &&
         (((uVar3 != 0 && (iVar1 = BIO_puts(param_1,&DAT_143fc48d8), iVar1 < 1)) ||
          (iVar1 = BIO_indent(param_1,param_4,0x80), iVar1 == 0)))) goto LAB_143d883ba;
      puVar4 = &DAT_145cc3708;
      if (uVar3 == param_3 - 1) {
        puVar4 = (undefined2 *)&DAT_143f3f584;
      }
      iVar1 = BIO_printf(param_1,"%02x%s",*(undefined1 *)(uVar3 + param_2),puVar4);
      if (iVar1 < 1) goto LAB_143d883ba;
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_3);
  }
  iVar1 = BIO_write(param_1,&DAT_143fc48d8,1);
  if (iVar1 < 1) {
LAB_143d883ba:
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 143d883f0 CMS_RecipientInfo_encrypt body=842 status=ok
// SIG undefined CMS_RecipientInfo_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong CMS_RecipientInfo_encrypt(longlong param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined1 auStack_178 [32];
  ulonglong local_158;
  int *local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined1 local_138 [256];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  iVar2 = *param_2;
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      lVar4 = cms_RecipientInfo_kari_encrypt(param_1);
      return lVar4;
    }
    if (iVar2 != 2) {
      if (iVar2 != 3) {
        local_158 = CONCAT44(local_158._4_4_,0x307);
        ERR_put_error(0x2e,0xa9,0x9a,"crypto\\cms\\cms_env.c");
        return 0;
      }
      lVar4 = cms_RecipientInfo_pwri_crypt(param_1,param_2,1);
      return lVar4;
    }
    lVar4 = *(longlong *)(param_2 + 2);
    lVar7 = 0;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
    if (*(longlong *)(lVar4 + 0x20) == 0) {
      local_158 = CONCAT44(local_158._4_4_,0x274);
      ERR_put_error(0x2e,0x88,0x82,"crypto\\cms\\cms_env.c");
      return 0;
    }
    iVar2 = FUN_140057570(*(longlong *)(lVar4 + 0x20),*(longlong *)(lVar4 + 0x28) << 3,local_138);
    if (iVar2 == 0) {
      lVar5 = CRYPTO_malloc(*(longlong *)(lVar1 + 0x28) + 8,"crypto\\cms\\cms_env.c",0x27e);
      if (lVar5 == 0) {
        uVar3 = 0x281;
        uVar9 = 0x41;
      }
      else {
        local_158 = CONCAT44(local_158._4_4_,*(undefined4 *)(lVar1 + 0x28));
        iVar2 = AES_wrap_key(local_138,0,lVar5,*(undefined8 *)(lVar1 + 0x20));
        if (0 < iVar2) {
          ASN1_STRING_set0(*(undefined8 *)(lVar4 + 0x18),lVar5,iVar2);
          lVar7 = 1;
          goto LAB_143d8856b;
        }
        uVar3 = 0x288;
        uVar9 = 0x9f;
      }
    }
    else {
      uVar3 = 0x27a;
      uVar9 = 0x73;
      lVar5 = lVar7;
    }
    local_158 = CONCAT44(local_158._4_4_,uVar3);
    ERR_put_error(0x2e,0x88,uVar9,"crypto\\cms\\cms_env.c");
    CRYPTO_free(lVar5,"crypto\\cms\\cms_env.c",0x293);
LAB_143d8856b:
    FUN_14004ff40(local_138,0xf4);
    return lVar7;
  }
  lVar5 = 0;
  lVar10 = 0;
  lVar4 = *(longlong *)(param_2 + 2);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  lVar7 = *(longlong *)(lVar4 + 0x30);
  if (lVar7 == 0) {
    lVar7 = EVP_PKEY_CTX_new(*(undefined8 *)(lVar4 + 0x28),0);
    if (lVar7 == 0) {
      return 0;
    }
    iVar2 = EVP_PKEY_encrypt_init(lVar7);
    lVar8 = lVar5;
    lVar6 = lVar10;
    if (iVar2 < 1) goto LAB_143d886e1;
  }
  else {
    iVar2 = cms_env_asn1_ctrl(param_2,0);
    lVar8 = 0;
    lVar6 = 0;
    if (iVar2 == 0) goto LAB_143d886e1;
  }
  local_158 = local_158 & 0xffffffff00000000;
  local_150 = param_2;
  iVar2 = EVP_PKEY_CTX_ctrl(lVar7,0xffffffff,0x100,9);
  if (iVar2 < 1) {
    local_158 = CONCAT44(local_158._4_4_,0x146);
    ERR_put_error(0x2e,0x8d,0x6e,"crypto\\cms\\cms_env.c");
    lVar8 = lVar5;
    lVar6 = lVar10;
  }
  else {
    local_158 = *(ulonglong *)(lVar1 + 0x28);
    iVar2 = EVP_PKEY_encrypt(lVar7,0,&local_148,*(undefined8 *)(lVar1 + 0x20));
    lVar8 = lVar5;
    lVar6 = lVar10;
    if (0 < iVar2) {
      lVar6 = CRYPTO_malloc(CONCAT44(uStack_144,local_148),"crypto\\cms\\cms_env.c",0x14d);
      if (lVar6 == 0) {
        local_158 = CONCAT44(local_158._4_4_,0x150);
        ERR_put_error(0x2e,0x8d,0x41,"crypto\\cms\\cms_env.c");
      }
      else {
        local_158 = *(ulonglong *)(lVar1 + 0x28);
        iVar2 = EVP_PKEY_encrypt(lVar7,lVar6,&local_148,*(undefined8 *)(lVar1 + 0x20));
        if (0 < iVar2) {
          ASN1_STRING_set0(*(undefined8 *)(lVar4 + 0x18),lVar6,local_148);
          lVar8 = 1;
          lVar6 = 0;
        }
      }
    }
  }
LAB_143d886e1:
  EVP_PKEY_CTX_free(lVar7);
  *(undefined8 *)(lVar4 + 0x30) = 0;
  CRYPTO_free(lVar6,"crypto\\cms\\cms_env.c",0x15f);
  return lVar8;
}



// FUNCTION 143d88740 CMS_RecipientInfo_get0_pkey_ctx body=32 status=ok
// SIG undefined CMS_RecipientInfo_get0_pkey_ctx(void)

undefined8 CMS_RecipientInfo_get0_pkey_ctx(int *param_1)

{
  if (*param_1 == 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 2) + 0x30);
  }
  if (*param_1 == 1) {
    return *(undefined8 *)(*(longlong *)(param_1 + 2) + 0x28);
  }
  return 0;
}



// FUNCTION 143d88760 CMS_RecipientInfo_ktri_get0_algs body=105 status=ok
// SIG undefined CMS_RecipientInfo_ktri_get0_algs(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
CMS_RecipientInfo_ktri_get0_algs
          (int *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  
  if (*param_1 != 0) {
    ERR_put_error(0x2e,0x8e,0x7c,"crypto\\cms\\cms_env.c",0xee);
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 2);
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(lVar1 + 0x28);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(lVar1 + 0x20);
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(lVar1 + 0x10);
  }
  return 1;
}



// FUNCTION 143d887d0 cms_EnvelopedData_init_bio body=295 status=ok
// SIG undefined cms_EnvelopedData_init_bio(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong cms_EnvelopedData_init_bio(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  
  bVar3 = false;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  lVar5 = cms_EncryptedContent_init_bio(lVar1);
  if ((lVar5 != 0) && (*(longlong *)(lVar1 + 0x18) != 0)) {
    iVar7 = 0;
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10);
    iVar4 = OPENSSL_sk_num(uVar2);
    if (0 < iVar4) {
      do {
        uVar6 = OPENSSL_sk_value(uVar2,iVar7);
        iVar4 = CMS_RecipientInfo_encrypt(param_1,uVar6);
        if (iVar4 < 1) {
          ERR_put_error(0x2e,0x7d,0x74,"crypto\\cms\\cms_env.c",0x365);
          goto LAB_143d88869;
        }
        iVar7 = iVar7 + 1;
        iVar4 = OPENSSL_sk_num(uVar2);
      } while (iVar7 < iVar4);
    }
    cms_env_set_version(*(undefined8 *)(param_1 + 8));
    bVar3 = true;
LAB_143d88869:
    *(undefined8 *)(lVar1 + 0x18) = 0;
    CRYPTO_clear_free(*(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28),
                      "crypto\\cms\\cms_env.c",0x36f);
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    if (!bVar3) {
      BIO_free(lVar5);
      return 0;
    }
  }
  return lVar5;
}



// FUNCTION 143d88900 cms_env_asn1_ctrl body=225 status=ok
// SIG undefined cms_env_asn1_ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 cms_env_asn1_ctrl(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  uchar *puVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143d88910;
  if (*param_1 == 0) {
    puVar3 = *(uchar **)(*(longlong *)(param_1 + 2) + 0x28);
  }
  else {
    if (*param_1 != 1) {
      return 0;
    }
    if (*(WriteBytesMem **)(*(longlong *)(param_1 + 2) + 0x28) == (WriteBytesMem *)0x0) {
      return 0;
    }
    puVar3 = AK::WriteBytesMem::Bytes(*(WriteBytesMem **)(*(longlong *)(param_1 + 2) + 0x28));
    if (puVar3 == (uchar *)0x0) {
      return 0;
    }
  }
  if ((*(longlong *)(puVar3 + 0x10) != 0) &&
     (pcVar1 = *(code **)(*(longlong *)(puVar3 + 0x10) + 0xb0), pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)(puVar3,7,param_2,param_1);
    if (iVar2 == -2) {
      ERR_put_error(0x2e,0xab,0x7d,"crypto\\cms\\cms_env.c",0x47,uVar4);
      return 0;
    }
    if (iVar2 < 1) {
      ERR_put_error(0x2e,0xab,0x6f,"crypto\\cms\\cms_env.c",0x4b,uVar4);
      return 0;
    }
  }
  return 1;
}



// FUNCTION 143d889f0 cms_env_set_version body=353 status=ok
// SIG undefined cms_env_set_version(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void cms_env_set_version(int *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (*param_1 < 4) {
    puVar1 = *(undefined8 **)(param_1 + 2);
    if (puVar1 != (undefined8 *)0x0) {
      iVar4 = 0;
      iVar2 = OPENSSL_sk_num(*puVar1);
      if (0 < iVar2) {
        do {
          piVar3 = (int *)OPENSSL_sk_value(*puVar1,iVar4);
          if (*piVar3 == 4) goto LAB_143d88b0f;
          if ((*piVar3 == 3) && (*param_1 < 3)) {
            *param_1 = 3;
          }
          iVar4 = iVar4 + 1;
          iVar2 = OPENSSL_sk_num(*puVar1);
        } while (iVar4 < iVar2);
      }
      iVar4 = 0;
      iVar2 = OPENSSL_sk_num(puVar1[1]);
      if (0 < iVar2) {
        do {
          piVar3 = (int *)OPENSSL_sk_value(puVar1[1],iVar4);
          if (*piVar3 == 1) {
LAB_143d88b0f:
            *param_1 = 4;
            return;
          }
          iVar4 = iVar4 + 1;
          iVar2 = OPENSSL_sk_num(puVar1[1]);
        } while (iVar4 < iVar2);
      }
    }
    if (*param_1 < 3) {
      iVar4 = 0;
      iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 4));
      if (0 < iVar2) {
        do {
          piVar3 = (int *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 4),iVar4);
          if (*piVar3 - 3U < 2) {
            *param_1 = 3;
            return;
          }
          if ((*piVar3 != 0) || (**(int **)(piVar3 + 2) != 0)) {
            *param_1 = 2;
          }
          iVar4 = iVar4 + 1;
          iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 4));
        } while (iVar4 < iVar2);
      }
      if ((*(longlong *)(param_1 + 2) == 0) && (*(longlong *)(param_1 + 8) == 0)) {
        if (*param_1 != 2) {
          *param_1 = 0;
          return;
        }
      }
      else {
        *param_1 = 2;
      }
    }
  }
  return;
}



// FUNCTION 143d88b60 CMS_RecipientInfo_kari_get0_alg body=100 status=ok
// SIG undefined CMS_RecipientInfo_kari_get0_alg(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CMS_RecipientInfo_kari_get0_alg(int *param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (*param_1 != 1) {
    ERR_put_error(0x2e,0xaf,0xb5,"crypto\\cms\\cms_kari.c",0x1c);
    return 0;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(*(longlong *)(param_1 + 2) + 0x18);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(*(longlong *)(param_1 + 2) + 0x10);
  }
  return 1;
}



// FUNCTION 143d88bd0 CMS_RecipientInfo_kari_get0_ctx body=17 status=ok
// SIG undefined CMS_RecipientInfo_kari_get0_ctx(void)

undefined8 CMS_RecipientInfo_kari_get0_ctx(int *param_1)

{
  if (*param_1 == 1) {
    return *(undefined8 *)(*(longlong *)(param_1 + 2) + 0x30);
  }
  return 0;
}



// FUNCTION 143d88bf0 CMS_RecipientInfo_kari_get0_orig_id body=251 status=ok
// SIG undefined CMS_RecipientInfo_kari_get0_orig_id(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
CMS_RecipientInfo_kari_get0_orig_id
          (int *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
          undefined8 *param_5,undefined8 *param_6)

{
  int iVar1;
  int *piVar2;
  
  if (*param_1 != 1) {
    ERR_put_error(0x2e,0xad,0xb5,"crypto\\cms\\cms_kari.c",0x3d,0x143d88bfc);
    return 0;
  }
  piVar2 = *(int **)(*(longlong *)(param_1 + 2) + 8);
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
  }
  if (param_6 != (undefined8 *)0x0) {
    *param_6 = 0;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0;
  }
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = **(undefined8 **)(piVar2 + 2);
    }
    if (param_6 != (undefined8 *)0x0) {
      *param_6 = *(undefined8 *)(*(longlong *)(piVar2 + 2) + 8);
      return 1;
    }
  }
  else if (iVar1 == 1) {
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = *(undefined8 *)(piVar2 + 2);
      return 1;
    }
  }
  else {
    if (iVar1 != 2) {
      return 0;
    }
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = **(undefined8 **)(piVar2 + 2);
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *(undefined8 *)(*(longlong *)(piVar2 + 2) + 8);
    }
  }
  return 1;
}



// FUNCTION 143d88cf0 cms_RecipientInfo_kari_encrypt body=495 status=ok
// SIG undefined cms_RecipientInfo_kari_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 cms_RecipientInfo_kari_encrypt(longlong param_1,int *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  undefined4 local_res10 [2];
  undefined8 local_res18 [2];
  
  if (*param_2 != 1) {
    ERR_put_error(0x2e,0xb2,0xb5,"crypto\\cms\\cms_kari.c",0x175);
    return 0;
  }
  lVar1 = *(longlong *)(param_2 + 2);
  uVar2 = *(undefined8 *)(lVar1 + 0x20);
  uVar9 = *(undefined8 *)(lVar1 + 0x30);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  uVar10 = *(undefined8 *)(lVar3 + 0x18);
  iVar5 = IStreamingManager::GetNumWantingResources(uVar10);
  lVar8 = FHardwareCursor::GetHandle(uVar9);
  iVar11 = 0;
  if (lVar8 == 0) {
    iVar7 = FUN_143cf6400(uVar10);
    if (iVar7 == 0x2c) {
      uVar10 = FUN_143d01060();
    }
    else if (iVar5 < 0x11) {
      uVar10 = FUN_143d05380();
    }
    else if (iVar5 < 0x19) {
      uVar10 = FUN_143d05500();
    }
    else {
      uVar10 = FUN_143d05660();
    }
    iVar5 = EVP_EncryptInit_ex(uVar9,uVar10,0,0,0);
    if (iVar5 == 0) {
      return 0;
    }
  }
  else {
    uVar9 = FHardwareCursor::GetHandle(uVar9);
    uVar6 = TResourceArray<unsigned_char,0>::GetResourceDataSize(uVar9);
    if ((uVar6 & 0xf0007) != 0x10002) {
      return 0;
    }
  }
  piVar4 = *(int **)(lVar1 + 8);
  if (*piVar4 == -1) {
    *piVar4 = 2;
    uVar9 = FUN_143d8a520();
    lVar8 = ASN1_item_new(uVar9);
    *(longlong *)(piVar4 + 2) = lVar8;
    if (lVar8 == 0) {
      return 0;
    }
  }
  iVar5 = cms_env_asn1_ctrl(param_2,0);
  if (iVar5 == 0) {
    return 0;
  }
  iVar5 = OPENSSL_sk_num(uVar2);
  if (0 < iVar5) {
    do {
      lVar8 = OPENSSL_sk_value(uVar2,iVar11);
      iVar5 = EVP_PKEY_derive_set_peer(*(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(lVar8 + 0x10));
      if (iVar5 < 1) {
        return 0;
      }
      iVar5 = cms_kek_cipher(local_res18,local_res10,*(undefined8 *)(lVar3 + 0x20),
                             *(undefined8 *)(lVar3 + 0x28),lVar1,1);
      if (iVar5 == 0) {
        return 0;
      }
      ASN1_STRING_set0(*(undefined8 *)(lVar8 + 8),local_res18[0],local_res10[0]);
      iVar11 = iVar11 + 1;
      iVar5 = OPENSSL_sk_num(uVar2);
    } while (iVar11 < iVar5);
  }
  return 1;
}



// FUNCTION 143d88ee0 cms_kek_cipher body=369 status=ok
// SIG undefined cms_kek_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int cms_kek_cipher(longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
                  longlong param_5,undefined4 param_6)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  int local_98 [2];
  ulonglong local_90;
  undefined1 local_88 [64];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143d88ef5;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  iVar3 = 0;
  lVar2 = 0;
  iVar1 = UVariantSet::GetNumVariants(*(undefined8 *)(param_5 + 0x30));
  local_90 = (ulonglong)iVar1;
  if (local_90 < 0x41) {
    iVar1 = EVP_PKEY_derive(*(undefined8 *)(param_5 + 0x28),local_88,&local_90);
    if (0 < iVar1) {
      local_a0 = param_6;
      local_a8 = 0;
      iVar1 = FUN_143cf75a0(*(undefined8 *)(param_5 + 0x30),0,0,local_88);
      if (iVar1 != 0) {
        local_a8 = CONCAT44(local_a8._4_4_,param_4);
        iVar1 = EVP_CipherUpdate(*(undefined8 *)(param_5 + 0x30),0,local_98,param_3);
        if (iVar1 != 0) {
          lVar2 = CRYPTO_malloc((longlong)local_98[0],"crypto\\cms\\cms_kari.c",0xd0);
          iVar3 = 0;
          if (lVar2 != 0) {
            local_a8 = CONCAT44(local_a8._4_4_,param_4);
            iVar1 = EVP_CipherUpdate(*(undefined8 *)(param_5 + 0x30),lVar2,local_98,param_3);
            if (iVar1 != 0) {
              iVar3 = 1;
              *param_1 = lVar2;
              *param_2 = (longlong)local_98[0];
            }
          }
        }
      }
    }
    FUN_14004ff40(local_88,local_90);
    if (iVar3 == 0) {
      CRYPTO_free(lVar2,"crypto\\cms\\cms_kari.c",0xdc);
    }
    EVP_CIPHER_CTX_reset(*(undefined8 *)(param_5 + 0x30));
    EVP_PKEY_CTX_free(*(undefined8 *)(param_5 + 0x28));
    *(undefined8 *)(param_5 + 0x28) = 0;
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}



// FUNCTION 143d89060 FUN_143d89060 body=13 status=ok
// SIG undefined FUN_143d89060(void)

void FUN_143d89060(longlong param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x10);
  }
  return;
}



// FUNCTION 143d89070 PKCS7_SIGNER_INFO_get0_algs body=37 status=ok
// SIG undefined PKCS7_SIGNER_INFO_get0_algs(void)

void PKCS7_SIGNER_INFO_get0_algs
               (longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x38);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x10);
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(param_1 + 0x20);
  }
  return;
}



// FUNCTION 143d890a0 PKCS7_ctrl body=287 status=ok
// SIG undefined PKCS7_ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int PKCS7_ctrl(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143d890b5;
  iVar1 = OBJ_obj2nid(*(undefined8 *)(param_1 + 0x18));
  if (param_2 == 1) {
    if (iVar1 == 0x16) {
      *(int *)(param_1 + 0x10) = param_3;
      if (param_3 != 0) {
        iVar1 = OBJ_obj2nid(*(undefined8 *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x28) + 0x18));
        if (iVar1 == 0x15) {
          ASN1_BIT_STRING_free
                    (*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x28) + 0x20));
          *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x28) + 0x20) = 0;
        }
      }
      return param_3;
    }
    uVar3 = 0x25;
  }
  else {
    if (param_2 != 2) {
      uVar3 = 0x39;
      uVar2 = 0x6e;
      goto LAB_143d8919c;
    }
    if (iVar1 == 0x16) {
      if ((*(longlong *)(param_1 + 0x20) != 0) &&
         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x28) + 0x20) != 0)) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    uVar3 = 0x33;
  }
  uVar2 = 0x68;
LAB_143d8919c:
  ERR_put_error(0x21,0x68,uVar2,"crypto\\pkcs7\\pk7_lib.c",uVar3,uVar4);
  return 0;
}



// FUNCTION 143d891c0 PKCS7_stream body=196 status=ok
// SIG undefined PKCS7_stream(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS7_stream(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = OBJ_obj2nid(*(undefined8 *)(param_2 + 0x18));
  if (iVar1 == 0x15) {
    lVar2 = *(longlong *)(param_2 + 0x20);
  }
  else if (iVar1 == 0x16) {
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x28) + 0x20);
  }
  else if (iVar1 == 0x17) {
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x10) + 0x10);
    if (lVar2 != 0) goto LAB_143d89268;
    lVar2 = ASN1_OCTET_STRING_new();
    *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x10) + 0x10) = lVar2;
  }
  else {
    if (iVar1 != 0x18) {
      return 0;
    }
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x28) + 0x10);
    if (lVar2 != 0) goto LAB_143d89268;
    lVar2 = ASN1_OCTET_STRING_new();
    *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x28) + 0x10) = lVar2;
  }
  if (lVar2 == 0) {
    return 0;
  }
LAB_143d89268:
  *(uint *)(lVar2 + 0x10) = *(uint *)(lVar2 + 0x10) | 0x10;
  *param_1 = lVar2 + 8;
  return 1;
}



// FUNCTION 143d89290 CMS_SignerInfo_get0_algs body=54 status=ok
// SIG undefined CMS_SignerInfo_get0_algs(void)

void CMS_SignerInfo_get0_algs
               (longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
               undefined8 *param_5)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x40);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x38);
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(param_1 + 0x10);
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = *(undefined8 *)(param_1 + 0x20);
  }
  return;
}



// FUNCTION 143d892d0 CMS_SignerInfo_sign body=682 status=ok
// SIG undefined CMS_SignerInfo_sign(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CMS_SignerInfo_sign(longlong param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong local_res8;
  longlong local_res10;
  undefined4 local_res18;
  undefined4 uStackX_1c;
  ulonglong in_stack_ffffffffffffffc8;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  local_res10 = 0;
  local_res8 = 0;
  uVar3 = OBJ_obj2nid(**(undefined8 **)(param_1 + 0x10));
  uVar5 = OBJ_nid2sn(uVar3);
  lVar6 = EVP_get_digestbyname(uVar5);
  if (lVar6 == 0) {
    return 0;
  }
  iVar4 = CMS_signed_get_attr_by_NID(param_1,0x34,0xffffffff);
  if (iVar4 < 0) {
    lVar7 = X509_gmtime_adj(0,0);
    bVar2 = false;
    if (lVar7 != 0) {
      in_stack_ffffffffffffffc8 = CONCAT44((int)(in_stack_ffffffffffffffc8 >> 0x20),0xffffffff);
      iVar4 = CMS_signed_add1_attr_by_NID
                        (param_1,0x34,*(undefined4 *)(lVar7 + 4),lVar7,in_stack_ffffffffffffffc8);
      bVar2 = false;
      if (0 < iVar4) {
        bVar2 = true;
      }
    }
    ASN1_TIME_free(lVar7);
    if (bVar2) goto LAB_143d893f0;
    uVar8 = 0x67;
    uVar5 = 0x18c;
    uVar3 = 0x41;
  }
  else {
LAB_143d893f0:
    lVar7 = *(longlong *)(param_1 + 0x50);
    if (*(longlong *)(param_1 + 0x50) == 0) {
      EVP_MD_CTX_reset(uVar1);
      in_stack_ffffffffffffffc8 = *(ulonglong *)(param_1 + 0x40);
      iVar4 = EVP_DigestSignInit(uVar1,&local_res10,lVar6,0,in_stack_ffffffffffffffc8);
      if (iVar4 < 1) goto LAB_143d893c3;
      *(longlong *)(param_1 + 0x50) = local_res10;
      lVar7 = local_res10;
    }
    local_res10 = lVar7;
    in_stack_ffffffffffffffc8 = in_stack_ffffffffffffffc8 & 0xffffffff00000000;
    iVar4 = EVP_PKEY_CTX_ctrl(local_res10,0xffffffff,8,0xb,in_stack_ffffffffffffffc8,param_1);
    uVar3 = (undefined4)(in_stack_ffffffffffffffc8 >> 0x20);
    if (iVar4 < 1) {
      uVar5 = CONCAT44(uVar3,0x298);
    }
    else {
      uVar5 = CMS_Attributes_Sign_it();
      iVar4 = ASN1_item_i2d(*(undefined8 *)(param_1 + 0x18),&local_res8,uVar5);
      if (((local_res8 == 0) ||
          (iVar4 = EVP_DigestUpdate(uVar1,local_res8,(longlong)iVar4), iVar4 < 1)) ||
         (iVar4 = EVP_DigestSignFinal(uVar1,0,&local_res18), iVar4 < 1)) goto LAB_143d893c3;
      CRYPTO_free(local_res8,"crypto\\cms\\cms_sd.c",0x2a4);
      local_res8 = CRYPTO_malloc(CONCAT44(uStackX_1c,local_res18),"crypto\\cms\\cms_sd.c",0x2a5);
      if ((local_res8 == 0) ||
         (iVar4 = EVP_DigestSignFinal(uVar1,local_res8,&local_res18), iVar4 < 1))
      goto LAB_143d893c3;
      iVar4 = EVP_PKEY_CTX_ctrl(local_res10,0xffffffff,8,0xb,CONCAT44(uVar3,1),param_1);
      if (0 < iVar4) {
        EVP_MD_CTX_reset(uVar1);
        ASN1_STRING_set0(*(undefined8 *)(param_1 + 0x28),local_res8,local_res18);
        return 1;
      }
      uVar5 = 0x2ad;
    }
    uVar8 = 0x97;
    uVar3 = 0x6e;
  }
  ERR_put_error(0x2e,uVar8,uVar3,"crypto\\cms\\cms_sd.c",uVar5);
LAB_143d893c3:
  CRYPTO_free(local_res8,"crypto\\cms\\cms_sd.c",0x2b8);
  EVP_MD_CTX_reset(uVar1);
  return 0;
}



// FUNCTION 143d89580 CMS_get0_SignerInfos body=96 status=ok
// SIG undefined CMS_get0_SignerInfos(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CMS_get0_SignerInfos(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143d8958c;
  iVar1 = OBJ_obj2nid(*param_1);
  if (iVar1 != 0x16) {
    ERR_put_error(0x2e,0x85,0x6c,"crypto\\cms\\cms_sd.c",0x1a,uVar2);
    return 0;
  }
  if (param_1[1] == 0) {
    return 0;
  }
  return *(undefined8 *)(param_1[1] + 0x28);
}



// FUNCTION 143d895e0 cms_SignedData_final body=151 status=ok
// SIG undefined cms_SignedData_final(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 cms_SignedData_final(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar2 = CMS_get0_SignerInfos();
  iVar4 = 0;
  iVar1 = OPENSSL_sk_num(uVar2);
  if (0 < iVar1) {
    do {
      uVar3 = OPENSSL_sk_value(uVar2,iVar4);
      iVar1 = cms_SignerInfo_content_sign(param_1,uVar3,param_2);
      if (iVar1 == 0) {
        return 0;
      }
      iVar4 = iVar4 + 1;
      iVar1 = OPENSSL_sk_num(uVar2);
    } while (iVar4 < iVar1);
  }
  *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x10) = 0;
  return 1;
}



// FUNCTION 143d89680 cms_SignedData_init_bio body=249 status=ok
// SIG undefined cms_SignedData_init_bio(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong cms_SignedData_init_bio(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 uVar7;
  ulonglong uVar6;
  
  uVar7 = 0x143d89690;
  uVar3 = 0;
  iVar2 = OBJ_obj2nid(*param_1);
  if (iVar2 != 0x16) {
    ERR_put_error(0x2e,0x85,0x6c,"crypto\\cms\\cms_sd.c",0x1a,uVar7);
    return 0;
  }
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    if (*(int *)(*(longlong *)(lVar1 + 0x10) + 0x10) != 0) {
      cms_sd_set_version(lVar1);
    }
    iVar2 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 8));
    uVar4 = uVar3;
    uVar6 = uVar3;
    if (0 < iVar2) {
      do {
        uVar7 = OPENSSL_sk_value(*(undefined8 *)(lVar1 + 8),uVar6);
        uVar3 = cms_DigestAlgorithm_init_bio(uVar7);
        if (uVar3 == 0) {
          BIO_free_all(uVar4);
          return 0;
        }
        if (uVar4 != 0) {
          BIO_push(uVar4,uVar3);
          uVar3 = uVar4;
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        iVar2 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 8));
        uVar4 = uVar3;
      } while ((int)uVar5 < iVar2);
    }
    return uVar3;
  }
  return 0;
}



// FUNCTION 143d89780 cms_SignerInfo_content_sign body=748 status=ok
// SIG undefined cms_SignerInfo_content_sign(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong cms_SignerInfo_content_sign(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  uint local_88 [2];
  longlong local_80;
  undefined1 local_78 [64];
  ulonglong local_38;
  undefined8 uStack_30;
  longlong lVar6;
  
  uStack_30 = 0x143d89796;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  lVar3 = EVP_MD_CTX_new();
  lVar6 = 0;
  lVar5 = 0;
  lVar8 = 0;
  if (lVar3 == 0) {
    local_98 = CONCAT44(local_98._4_4_,0x21d);
    ERR_put_error(0x2e,0x96,0x41,"crypto\\cms\\cms_sd.c");
    return 0;
  }
  lVar7 = lVar6;
  if (*(longlong *)(param_2 + 0x40) == 0) {
    local_98 = CONCAT44(local_98._4_4_,0x222);
    ERR_put_error(0x2e,0x96,0x85,"crypto\\cms\\cms_sd.c");
    lVar8 = lVar6;
    goto LAB_143d89a33;
  }
  iVar2 = cms_DigestAlgorithm_find_ctx(lVar3,param_3,*(undefined8 *)(param_2 + 0x10));
  if ((iVar2 == 0) ||
     ((*(longlong *)(param_2 + 0x50) != 0 && (iVar2 = cms_sd_asn1_ctrl(param_2,0), iVar2 == 0))))
  goto LAB_143d89a33;
  iVar2 = CMS_signed_get_attr_count(param_2);
  lVar7 = lVar5;
  if (iVar2 < 0) {
    lVar5 = *(longlong *)(param_2 + 0x50);
    if (lVar5 == 0) {
      iVar2 = EVP_PKEY_size(*(undefined8 *)(param_2 + 0x40));
      lVar4 = CRYPTO_malloc((longlong)iVar2,"crypto\\cms\\cms_sd.c",0x256);
      if (lVar4 == 0) {
        local_98 = CONCAT44(local_98._4_4_,600);
LAB_143d89938:
        ERR_put_error(0x2e,0x96,0x41,"crypto\\cms\\cms_sd.c");
        lVar8 = lVar6;
        goto LAB_143d89a33;
      }
      iVar2 = EVP_SignFinal(lVar3,lVar4,local_88,*(undefined8 *)(param_2 + 0x40));
      if (iVar2 == 0) {
        local_98 = CONCAT44(local_98._4_4_,0x25c);
        ERR_put_error(0x2e,0x96,0x8b,"crypto\\cms\\cms_sd.c");
        CRYPTO_free(lVar4,"crypto\\cms\\cms_sd.c",0x25d);
        goto LAB_143d89a33;
      }
    }
    else {
      iVar2 = EVP_DigestFinal_ex(lVar3,local_78,local_88);
      lVar8 = lVar5;
      if (iVar2 == 0) goto LAB_143d89a33;
      iVar2 = EVP_PKEY_size(*(undefined8 *)(param_2 + 0x40));
      local_80 = (longlong)iVar2;
      lVar4 = CRYPTO_malloc(local_80,"crypto\\cms\\cms_sd.c",0x249);
      lVar6 = lVar5;
      if (lVar4 == 0) {
        local_98 = CONCAT44(local_98._4_4_,0x24b);
        goto LAB_143d89938;
      }
      local_98 = (ulonglong)local_88[0];
      iVar2 = EVP_PKEY_sign(lVar5,lVar4,&local_80,local_78);
      if (iVar2 < 1) {
        CRYPTO_free(lVar4,"crypto\\cms\\cms_sd.c",0x24f);
        goto LAB_143d89a33;
      }
      local_88[0] = (uint)local_80;
    }
    ASN1_STRING_set0(*(undefined8 *)(param_2 + 0x28),lVar4,local_88[0]);
  }
  else {
    uVar1 = **(undefined8 **)(*(longlong *)(param_1 + 8) + 0x10);
    iVar2 = EVP_DigestFinal_ex(lVar3,local_78,local_88);
    if (iVar2 == 0) goto LAB_143d89a33;
    local_98 = CONCAT44(local_98._4_4_,local_88[0]);
    iVar2 = CMS_signed_add1_attr_by_NID(param_2,0x33,4,local_78);
    if (iVar2 == 0) goto LAB_143d89a33;
    local_98 = CONCAT44(local_98._4_4_,0xffffffff);
    iVar2 = CMS_signed_add1_attr_by_NID(param_2,0x32,6,uVar1);
    if ((iVar2 < 1) || (iVar2 = CMS_SignerInfo_sign(param_2), iVar2 == 0)) goto LAB_143d89a33;
  }
  lVar7 = 1;
  lVar8 = lVar6;
LAB_143d89a33:
  EVP_MD_CTX_free(lVar3);
  EVP_PKEY_CTX_free(lVar8);
  return lVar7;
}



// FUNCTION 143d89a70 cms_sd_asn1_ctrl body=152 status=ok
// SIG undefined cms_sd_asn1_ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 cms_sd_asn1_ctrl(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10);
  if ((lVar1 != 0) && (pcVar2 = *(code **)(lVar1 + 0xb0), pcVar2 != (code *)0x0)) {
    iVar3 = (*pcVar2)(*(longlong *)(param_1 + 0x40),5,param_2,param_1);
    if (iVar3 == -2) {
      ERR_put_error(0x2e,0xaa,0x7d,"crypto\\cms\\cms_sd.c",0xd2);
      return 0;
    }
    if (iVar3 < 1) {
      ERR_put_error(0x2e,0xaa,0x6f,"crypto\\cms\\cms_sd.c",0xd6);
      return 0;
    }
  }
  return 1;
}



// FUNCTION 143d89b10 cms_sd_set_version body=326 status=ok
// SIG undefined cms_sd_set_version(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void cms_sd_set_version(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 6));
  if (0 < iVar1) {
    do {
      piVar2 = (int *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 6),iVar4);
      iVar1 = *piVar2;
      if (iVar1 == 4) {
        if (*param_1 < 5) {
          *param_1 = 5;
        }
      }
      else if (iVar1 == 3) {
        if (*param_1 < 4) {
          *param_1 = 4;
        }
      }
      else if ((iVar1 == 2) && (*param_1 < 3)) {
        *param_1 = 3;
      }
      iVar4 = iVar4 + 1;
      iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 6));
    } while (iVar4 < iVar1);
  }
  iVar4 = 0;
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
  if (0 < iVar1) {
    do {
      piVar2 = (int *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 8),iVar4);
      if ((*piVar2 == 1) && (*param_1 < 5)) {
        *param_1 = 5;
      }
      iVar4 = iVar4 + 1;
      iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
    } while (iVar4 < iVar1);
  }
  iVar1 = OBJ_obj2nid(**(undefined8 **)(param_1 + 4));
  if ((iVar1 != 0x15) && (*param_1 < 3)) {
    *param_1 = 3;
  }
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 10));
  if (0 < iVar1) {
    do {
      piVar2 = (int *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 10),iVar3);
      if (**(int **)(piVar2 + 2) == 1) {
        if (*piVar2 < 3) {
          *piVar2 = 3;
        }
        if (*param_1 < 3) {
          *param_1 = 3;
        }
      }
      else if (*piVar2 < 1) {
        *piVar2 = 1;
      }
      iVar3 = iVar3 + 1;
      iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 10));
    } while (iVar3 < iVar1);
  }
  if (*param_1 < 1) {
    *param_1 = 1;
  }
  return;
}



// FUNCTION 143d89c60 EC_GROUP_check body=488 status=ok
// SIG undefined EC_GROUP_check(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong EC_GROUP_check(WriteBytesMem *param_1,longlong param_2)

{
  int iVar1;
  uchar *puVar2;
  longlong lVar3;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar4;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar9 = 0x143d89c78;
  lVar4 = 0;
  lVar3 = 0;
  lVar6 = 0;
  if ((**(byte **)param_1 & 2) == 0) {
    lVar7 = lVar4;
    lVar5 = lVar4;
    if ((param_2 == 0) && (param_2 = BN_CTX_new(), lVar7 = param_2, param_2 == 0)) {
      ERR_put_error(0x10,0xaa,0x41,"crypto\\ec\\ec_check.c",CONCAT44(uVar8,0x1b),uVar9);
      lVar6 = lVar4;
    }
    else {
      iVar1 = EC_GROUP_check_discriminant(param_1,param_2);
      if (iVar1 == 0) {
        ERR_put_error(0x10,0xaa,0x76,"crypto\\ec\\ec_check.c",CONCAT44(uVar8,0x22),uVar9);
      }
      else if (*(longlong *)(param_1 + 8) == 0) {
        ERR_put_error(0x10,0xaa,0x71,"crypto\\ec\\ec_check.c",CONCAT44(uVar8,0x28),uVar9);
      }
      else {
        iVar1 = EC_POINT_is_on_curve(param_1,*(longlong *)(param_1 + 8),param_2);
        lVar5 = lVar3;
        if (iVar1 < 1) {
          ERR_put_error(0x10,0xaa,0x6b,"crypto\\ec\\ec_check.c",CONCAT44(uVar8,0x2c),uVar9);
        }
        else {
          lVar6 = EC_POINT_new(param_1);
          if ((lVar6 != 0) &&
             (puVar2 = AK::WriteBytesMem::Bytes(param_1), lVar5 = lVar4, puVar2 != (uchar *)0x0)) {
            iVar1 = BN_is_zero(puVar2);
            if (iVar1 == 0) {
              uVar8 = 0;
              iVar1 = EC_POINT_mul(param_1,lVar6,puVar2,0,0,param_2);
              if (iVar1 != 0) {
                iVar1 = EC_POINT_is_at_infinity(param_1,lVar6);
                if (iVar1 == 0) {
                  ERR_put_error(0x10,0xaa,0x7a,"crypto\\ec\\ec_check.c",CONCAT44(uVar8,0x3e));
                  lVar5 = lVar3;
                }
                else {
                  lVar5 = 1;
                }
              }
            }
            else {
              ERR_put_error(0x10,0xaa,0x80,"crypto\\ec\\ec_check.c",CONCAT44(uVar8,0x37));
            }
          }
        }
      }
    }
    BN_CTX_free(lVar7);
    EC_POINT_free(lVar6);
  }
  else {
    lVar5 = 1;
  }
  return lVar5;
}



// FUNCTION 143d89e50 ECPKParameters_print body=1566 status=ok
// SIG undefined ECPKParameters_print(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong ECPKParameters_print(undefined8 param_1,WriteBytesMem *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uchar *puVar9;
  char *pcVar10;
  undefined *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  undefined4 uVar16;
  undefined2 *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  bool bVar20;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  ulonglong local_128;
  ulonglong local_120;
  ulonglong local_118;
  longlong local_110;
  int local_108;
  longlong local_100;
  ulonglong local_f8;
  uchar *local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined1 local_d8;
  undefined1 local_d7 [143];
  ulonglong local_48;
  undefined8 uStack_40;
  undefined4 uVar15;
  
  uStack_40 = 0x143d89e6a;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  uVar18 = 0;
  local_128 = 0;
  local_100 = 0;
  local_110 = 0;
  local_f8 = 0;
  uVar14 = 0x20;
  uVar15 = 0x20;
  iVar2 = 0;
  uVar12 = uVar18;
  uVar8 = uVar18;
  if (param_2 == (WriteBytesMem *)0x0) {
    uVar5 = uVar18;
    uVar16 = 0x43;
  }
  else {
    uVar5 = BN_CTX_new();
    local_120 = uVar5;
    if (uVar5 == 0) {
      uVar16 = 0x41;
    }
    else {
      iVar1 = BuildPatchServices::FMemoryChunkStoreStatistics::GetPeakStoreUse(param_2);
      uVar16 = uVar14;
      if (iVar1 == 0) {
        uVar6 = FHardwareCursor::GetHandle(param_2);
        local_108 = FCachedCompositeFontData::FCachedFontRange::BinarySearchKey(uVar6);
        bVar20 = local_108 == 0x197;
        uVar8 = BN_new();
        local_118 = uVar8;
        if (((uVar8 == 0) || (local_128 = BN_new(), local_128 == 0)) ||
           (local_100 = BN_new(), local_100 == 0)) {
          uVar12 = local_128;
          uVar16 = 0x41;
        }
        else {
          local_138 = uVar5;
          iVar1 = EC_GROUP_get_curve(param_2,uVar8,local_128,local_100);
          if (iVar1 == 0) {
            uVar12 = local_128;
            uVar16 = 0x10;
          }
          else {
            lVar7 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
                    ::GetBoundProgramCounterForTimerManager(param_2);
            if (lVar7 == 0) {
              uVar12 = local_128;
              uVar8 = local_118;
              uVar16 = 0x10;
            }
            else {
              puVar9 = AK::WriteBytesMem::Bytes(param_2);
              local_f0 = puVar9;
              local_e8 = FUniqueNetIdString::GetBytes(param_2);
              if (puVar9 != (uchar *)0x0) {
                iVar1 = FWmfMediaTextureSample::GetFormat(param_2);
                local_138 = local_120;
                local_110 = EC_POINT_point2bn(param_2,lVar7,iVar1,0);
                if (local_110 != 0) {
                  local_e0 = FVoicePacketImpl::GetSampleCounter(param_2);
                  if (local_e0 != 0) {
                    local_f8 = UNiagaraSystem::GetEffectType(param_2);
                  }
                  iVar3 = BIO_indent(param_1,param_3,0x80);
                  uVar12 = local_128;
                  uVar8 = local_118;
                  uVar5 = local_120;
                  if (iVar3 != 0) {
                    uVar6 = OBJ_nid2sn(local_108);
                    iVar3 = BIO_printf(param_1,"Field Type: %s\n",uVar6);
                    uVar12 = local_128;
                    uVar8 = local_118;
                    uVar5 = local_120;
                    if (0 < iVar3) {
                      if (bVar20) {
                        iVar3 = EC_GROUP_get_basis_type(param_2);
                        uVar12 = local_128;
                        uVar8 = local_118;
                        uVar5 = local_120;
                        if ((iVar3 != 0) &&
                           (iVar4 = BIO_indent(param_1,param_3,0x80), uVar12 = local_128,
                           uVar8 = local_118, uVar5 = local_120, iVar4 != 0)) {
                          uVar6 = OBJ_nid2sn(iVar3);
                          iVar3 = BIO_printf(param_1,"Basis Type: %s\n",uVar6);
                          uVar12 = local_128;
                          uVar8 = local_118;
                          uVar5 = local_120;
                          uVar16 = uVar15;
                          if (0 < iVar3) {
                            pcVar10 = "Polynomial:";
                            goto LAB_143d8a1ea;
                          }
                        }
                      }
                      else {
                        pcVar10 = "Prime:";
LAB_143d8a1ea:
                        uVar8 = local_118;
                        local_138 = CONCAT44(local_138._4_4_,param_3);
                        iVar3 = ASN1_bn_print(param_1,pcVar10,local_118,0);
                        uVar12 = local_128;
                        uVar5 = local_120;
                        uVar16 = uVar15;
                        if (iVar3 != 0) {
                          local_138 = CONCAT44(local_138._4_4_,param_3);
                          iVar3 = ASN1_bn_print(param_1,"A:   ",local_128,0);
                          uVar5 = local_120;
                          uVar16 = uVar14;
                          if (iVar3 != 0) {
                            local_138 = CONCAT44(local_138._4_4_,param_3);
                            iVar3 = ASN1_bn_print(param_1,"B:   ",local_100,0);
                            uVar5 = local_120;
                            if (iVar3 != 0) {
                              local_138 = CONCAT44(local_138._4_4_,param_3);
                              puVar11 = PTR_s_Generator__compressed___1468381d8;
                              if ((iVar1 != 2) &&
                                 (puVar11 = PTR_s_Generator__uncompressed___1468381e0, iVar1 != 4))
                              {
                                puVar11 = PTR_s_Generator__hybrid___1468381e8;
                              }
                              iVar1 = ASN1_bn_print(param_1,puVar11,local_110,0);
                              uVar5 = local_120;
                              if (iVar1 != 0) {
                                local_138 = CONCAT44(local_138._4_4_,param_3);
                                iVar1 = ASN1_bn_print(param_1,"Order: ",local_f0,0);
                                uVar5 = local_120;
                                if (iVar1 != 0) {
                                  if (local_e8 != 0) {
                                    local_138 = CONCAT44(local_138._4_4_,param_3);
                                    iVar1 = ASN1_bn_print(param_1,"Cofactor: ",local_e8,0);
                                    uVar5 = local_120;
                                    if (iVar1 == 0) goto LAB_143d89eba;
                                  }
                                  lVar7 = local_e0;
                                  if (local_e0 == 0) {
                                    uVar19 = 1;
                                    uVar5 = local_120;
                                    goto LAB_143d89edb;
                                  }
                                  if (0 < param_3) {
                                    iVar2 = param_3;
                                    if (0x80 < param_3) {
                                      iVar2 = 0x80;
                                    }
                                    _guard_xfg_dispatch_icall_nop(&local_d8,0x20,(longlong)iVar2);
                                    iVar1 = BIO_write(param_1,&local_d8,iVar2);
                                    uVar5 = local_120;
                                    if (iVar1 < 1) goto LAB_143d89eba;
                                  }
                                  iVar1 = BIO_printf(param_1,&DAT_145cc6210,"Seed:");
                                  uVar19 = local_f8;
                                  uVar5 = local_120;
                                  if (0 < iVar1) {
                                    uVar13 = uVar18;
                                    if (local_f8 != 0) {
                                      do {
                                        if (uVar13 == (uVar13 / 0xf) * 0xf) {
                                          local_d8 = 10;
                                          _guard_xfg_dispatch_icall_nop
                                                    (local_d7,0x20,(longlong)(iVar2 + 4));
                                          iVar1 = BIO_write(param_1,&local_d8,iVar2 + 5);
                                          uVar12 = local_128;
                                          uVar8 = local_118;
                                          uVar5 = local_120;
                                          uVar16 = uVar14;
                                          if (iVar1 < 1) goto LAB_143d89eba;
                                        }
                                        puVar17 = &DAT_145cc3708;
                                        if (uVar13 + 1 == uVar19) {
                                          puVar17 = (undefined2 *)&DAT_143f3f584;
                                        }
                                        iVar1 = BIO_printf(param_1,"%02x%s",
                                                           *(undefined1 *)(uVar13 + lVar7),puVar17);
                                        uVar12 = local_128;
                                        uVar8 = local_118;
                                        uVar5 = local_120;
                                        uVar16 = uVar15;
                                        if (iVar1 < 1) goto LAB_143d89eba;
                                        uVar13 = uVar13 + 1;
                                      } while (uVar13 < uVar19);
                                    }
                                    iVar2 = BIO_write(param_1,&DAT_143fc48d8,1);
                                    uVar12 = local_128;
                                    uVar8 = local_118;
                                    uVar5 = local_120;
                                    uVar16 = uVar14;
                                    if (0 < iVar2) {
                                      uVar19 = 1;
                                      goto LAB_143d89edb;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  goto LAB_143d89eba;
                }
              }
              uVar12 = local_128;
              uVar8 = local_118;
              uVar5 = local_120;
              uVar16 = 0x10;
            }
          }
        }
      }
      else {
        iVar2 = BIO_indent(param_1,param_3,0x80);
        if ((iVar2 != 0) &&
           (iVar2 = TMeshAttributeArraySet<int>::GetNumIndices(param_2), iVar2 != 0)) {
          uVar6 = OBJ_nid2sn(iVar2);
          iVar1 = BIO_printf(param_1,"ASN1 OID: %s",uVar6);
          if ((0 < iVar1) &&
             (iVar1 = BIO_printf(param_1,&DAT_143fc48d8), uVar16 = uVar15, 0 < iVar1)) {
            lVar7 = EC_curve_nid2nist(iVar2);
            if (lVar7 == 0) {
              uVar19 = 1;
              uVar8 = 0;
              goto LAB_143d89edb;
            }
            iVar2 = BIO_indent(param_1,param_3,0x80);
            if ((iVar2 != 0) &&
               (iVar2 = BIO_printf(param_1,"NIST CURVE: %s\n",lVar7), uVar8 = 0, uVar16 = uVar14,
               0 < iVar2)) {
              uVar19 = 1;
              uVar8 = uVar18;
              goto LAB_143d89edb;
            }
          }
        }
      }
    }
  }
LAB_143d89eba:
  local_138 = CONCAT44(local_138._4_4_,0xd6);
  ERR_put_error(0x10,0x95,uVar16,"crypto\\ec\\eck_prn.c");
  uVar19 = uVar18;
LAB_143d89edb:
  BN_free(uVar8);
  BN_free(uVar12);
  BN_free(local_100);
  BN_free(local_110);
  BN_CTX_free(uVar5);
  return uVar19;
}



// FUNCTION 143d8a520 FUN_143d8a520 body=8 status=ok
// SIG undefined FUN_143d8a520(void)

undefined * FUN_143d8a520(void)

{
  return &DAT_145da8f70;
}



// FUNCTION 143d8a5c0 cms_si_cb body=68 status=ok
// SIG undefined cms_si_cb(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 cms_si_cb(int param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_1 == 3) {
    lVar1 = *param_2;
    EVP_PKEY_free(*(undefined8 *)(lVar1 + 0x40));
    X509_free(*(undefined8 *)(lVar1 + 0x38));
    EVP_MD_CTX_free(*(undefined8 *)(lVar1 + 0x48));
  }
  return 1;
}



// FUNCTION 143d8a650 cms_rek_cb body=40 status=ok
// SIG undefined cms_rek_cb(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 cms_rek_cb(int param_1,longlong *param_2)

{
  if (param_1 == 3) {
    EVP_PKEY_free(*(undefined8 *)(*param_2 + 0x10));
  }
  return 1;
}



// FUNCTION 143d8a690 cms_kari_cb body=109 status=ok
// SIG undefined cms_kari_cb(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 cms_kari_cb(int param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_2;
  if (param_1 != 1) {
    if (param_1 == 3) {
      EVP_PKEY_CTX_free(*(undefined8 *)(lVar1 + 0x28));
      EVP_CIPHER_CTX_free(*(undefined8 *)(lVar1 + 0x30));
    }
    return 1;
  }
  lVar2 = EVP_CIPHER_CTX_new();
  *(longlong *)(lVar1 + 0x30) = lVar2;
  if (lVar2 == 0) {
    return 0;
  }
  EVP_CIPHER_CTX_set_flags(lVar2,1);
  *(undefined8 *)(lVar1 + 0x28) = 0;
  return 1;
}



// FUNCTION 143d8a720 cms_ri_cb body=136 status=ok
// SIG undefined cms_ri_cb(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 cms_ri_cb(int param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_1 == 2) {
    piVar2 = (int *)*param_2;
    iVar1 = *piVar2;
    if (iVar1 == 0) {
      lVar3 = *(longlong *)(piVar2 + 2);
      EVP_PKEY_free(*(undefined8 *)(lVar3 + 0x28));
      X509_free(*(undefined8 *)(lVar3 + 0x20));
      EVP_PKEY_CTX_free(*(undefined8 *)(lVar3 + 0x30));
      return 1;
    }
    if (iVar1 == 2) {
      uVar4 = 0xd2;
    }
    else {
      if (iVar1 != 3) {
        return 1;
      }
      uVar4 = 0xd5;
    }
    CRYPTO_clear_free(*(undefined8 *)(*(longlong *)(piVar2 + 2) + 0x20),
                      *(undefined8 *)(*(longlong *)(piVar2 + 2) + 0x28),"crypto\\cms\\cms_asn1.c",
                      uVar4,0x143d8a72a);
  }
  return 1;
}



// FUNCTION 143d8a7d0 cms_cb body=131 status=ok
// SIG undefined cms_cb(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 cms_cb(int param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_2 == (undefined8 *)0x0) {
    return 1;
  }
  uVar1 = *param_2;
  if (param_1 == 10) {
    iVar2 = CMS_stream(param_4 + 2,uVar1);
    if (iVar2 < 1) {
      return 0;
    }
LAB_143d8a832:
    lVar3 = CMS_dataInit(uVar1,*param_4);
    param_4[1] = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
  }
  else {
    if (param_1 != 0xb) {
      if (param_1 == 0xc) goto LAB_143d8a832;
      if (param_1 != 0xd) {
        return 1;
      }
    }
    iVar2 = CMS_dataFinal(uVar1,param_4[1]);
    if (iVar2 < 1) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 143d8a870 CMS_Attributes_Sign_it body=8 status=ok
// SIG undefined CMS_Attributes_Sign_it(void)

undefined * CMS_Attributes_Sign_it(void)

{
  return &DAT_145da9a90;
}



// FUNCTION 143d8a880 CMS_SharedInfo_encode body=131 status=ok
// SIG undefined CMS_SharedInfo_encode(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CMS_SharedInfo_encode(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined1 local_res20;
  undefined1 local_res21;
  undefined1 local_res22;
  undefined1 local_res23;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 *local_10;
  undefined8 uStack_8;
  
  uStack_8 = 0x143d8a88a;
  param_4 = param_4 << 3;
  local_res20 = (undefined1)((uint)param_4 >> 0x18);
  local_res21 = (undefined1)((uint)param_4 >> 0x10);
  local_res22 = (undefined1)((uint)param_4 >> 8);
  local_30 = &local_res20;
  local_10 = &local_38;
  local_res23 = (undefined1)param_4;
  local_38 = 4;
  local_34 = 4;
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_3;
  ASN1_item_i2d(&local_20,param_1,&DAT_145da9d20);
  return;
}



// FUNCTION 143d8a910 EVP_md_null body=8 status=ok
// SIG undefined EVP_md_null(void)

undefined * EVP_md_null(void)

{
  return &DAT_145daa570;
}



// FUNCTION 143d8a920 X448 body=42 status=ok
// SIG undefined X448(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool X448(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = x448_int(param_1,param_3,param_2,param_4,0x143d8a92a);
  return iVar1 == -1;
}



// FUNCTION 143d8a950 X448_public_from_private body=516 status=ok
// SIG undefined X448_public_from_private(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void X448_public_from_private(undefined8 param_1,uint *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  uint uVar16;
  undefined1 auStack_328 [32];
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined1 local_2c8 [64];
  undefined1 local_288 [64];
  undefined8 local_248 [8];
  undefined1 local_208 [64];
  undefined1 local_1c8 [64];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148 [32];
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_328;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_38 = *(undefined8 *)(param_2 + 4);
  uStack_30 = *(undefined8 *)(param_2 + 6);
  local_28 = param_2[8];
  uStack_24 = param_2[9];
  uStack_20 = param_2[10];
  uStack_1c = param_2[0xb];
  local_18 = *(ulonglong *)(param_2 + 0xc) | 0x8000000000000000;
  local_48 = *param_2 & 0xfffffffc;
  curve448_scalar_decode_long(local_2c8,&local_48,0x38);
  uVar16 = 1;
  do {
    curve448_scalar_halve(local_2c8,local_2c8);
    uVar16 = uVar16 * 2;
  } while (uVar16 < 2);
  curve448_precomputed_scalarmul(local_148,PTR_DAT_146838280,local_2c8);
  lVar15 = 2;
  puVar13 = local_148;
  puVar14 = local_248;
  do {
    uVar9 = puVar13[1];
    uVar10 = puVar13[2];
    uVar11 = puVar13[3];
    *puVar14 = *puVar13;
    puVar14[1] = uVar9;
    uVar9 = puVar13[4];
    uVar12 = puVar13[5];
    puVar14[2] = uVar10;
    puVar14[3] = uVar11;
    uVar10 = puVar13[6];
    uVar11 = puVar13[7];
    puVar14[4] = uVar9;
    puVar14[5] = uVar12;
    uVar9 = puVar13[8];
    uVar12 = puVar13[9];
    puVar14[6] = uVar10;
    puVar14[7] = uVar11;
    uVar10 = puVar13[10];
    uVar11 = puVar13[0xb];
    puVar14[8] = uVar9;
    puVar14[9] = uVar12;
    uVar1 = *(undefined4 *)(puVar13 + 0xc);
    uVar2 = *(undefined4 *)((longlong)puVar13 + 100);
    uVar3 = *(undefined4 *)(puVar13 + 0xd);
    uVar4 = *(undefined4 *)((longlong)puVar13 + 0x6c);
    puVar14[10] = uVar10;
    puVar14[0xb] = uVar11;
    uVar5 = *(undefined4 *)(puVar13 + 0xe);
    uVar6 = *(undefined4 *)((longlong)puVar13 + 0x74);
    uVar7 = *(undefined4 *)(puVar13 + 0xf);
    uVar8 = *(undefined4 *)((longlong)puVar13 + 0x7c);
    *(undefined4 *)(puVar14 + 0xc) = uVar1;
    *(undefined4 *)((longlong)puVar14 + 100) = uVar2;
    *(undefined4 *)(puVar14 + 0xd) = uVar3;
    *(undefined4 *)((longlong)puVar14 + 0x6c) = uVar4;
    *(undefined4 *)(puVar14 + 0xe) = uVar5;
    *(undefined4 *)((longlong)puVar14 + 0x74) = uVar6;
    *(undefined4 *)(puVar14 + 0xf) = uVar7;
    *(undefined4 *)((longlong)puVar14 + 0x7c) = uVar8;
    lVar15 = lVar15 + -1;
    puVar13 = puVar13 + 0x10;
    puVar14 = puVar14 + 0x10;
  } while (lVar15 != 0);
  gf_sqr(local_288,local_248);
  gf_isr(&local_308,local_288);
  gf_sqr(local_288,&local_308);
  gf_mul(&local_308,local_288,local_248);
  local_188 = local_308;
  uStack_180 = uStack_300;
  local_178 = local_2f8;
  uStack_170 = uStack_2f0;
  local_168 = local_2e8;
  uStack_164 = uStack_2e4;
  uStack_160 = uStack_2e0;
  uStack_15c = uStack_2dc;
  local_158 = local_2d8;
  uStack_154 = uStack_2d4;
  uStack_150 = uStack_2d0;
  uStack_14c = uStack_2cc;
  gf_mul(local_1c8,&local_188,local_208);
  gf_sqr(local_208,local_1c8);
  gf_serialize(param_1,local_208,1);
  FUN_14004ff40(local_248,0x100);
  FUN_14004ff40(local_148,0x100);
  return;
}



// FUNCTION 143d8ab60 add_niels_to_pt body=1498 status=ok
// SIG undefined add_niels_to_pt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void add_niels_to_pt(int *param_1,longlong param_2,int param_3)

{
  undefined1 auVar1 [16];
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_178 [32];
  int local_158;
  int *local_150;
  int local_148 [11];
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  piVar3 = param_1 + 0x10;
  local_148[0] = param_1[0x10] - *param_1;
  local_148[1] = param_1[0x11] - param_1[1];
  local_148[2] = param_1[0x12] - param_1[2];
  local_148[3] = param_1[0x13] - param_1[3];
  local_148[4] = param_1[0x14] - param_1[4];
  local_148[5] = param_1[0x15] - param_1[5];
  local_148[6] = param_1[0x16] - param_1[6];
  local_148[7] = param_1[0x17] - param_1[7];
  local_148[8] = param_1[0x18] - param_1[8];
  local_148[9] = param_1[0x19] - param_1[9];
  local_148[10] = param_1[0x1a] - param_1[10];
  local_11c = param_1[0x1b] - param_1[0xb];
  local_118 = param_1[0x1c] - param_1[0xc];
  local_114 = param_1[0x1d] - param_1[0xd];
  local_110 = param_1[0x1e] - param_1[0xe];
  local_10c = param_1[0x1f] - param_1[0xf];
  piVar2 = local_148;
  uVar4 = 0;
  do {
    uVar5 = uVar4 + 8;
    *piVar2 = (~-(uint)(uVar4 == 8) & 0x1ffffffe | -(uint)(uVar4 == 8) & 0x1ffffffc) + *piVar2;
    piVar2[1] = (~-(uint)(uVar4 == 7) & 0x1ffffffe | -(uint)(uVar4 == 7) & 0x1ffffffc) + piVar2[1];
    piVar2[2] = (~-(uint)(uVar4 == 6) & 0x1ffffffe | -(uint)(uVar4 == 6) & 0x1ffffffc) + piVar2[2];
    piVar2[3] = (~-(uint)(uVar4 == 5) & 0x1ffffffe | -(uint)(uVar4 == 5) & 0x1ffffffc) + piVar2[3];
    auVar1 = *(undefined1 (*) [16])(piVar2 + 4);
    piVar2[4] = (~-(uint)(uVar4 == 4) & 0x1ffffffe | -(uint)(uVar4 == 4) & 0x1ffffffc) +
                auVar1._0_4_;
    piVar2[5] = (~-(uint)(uVar4 == 3) & 0x1ffffffe | -(uint)(uVar4 == 3) & 0x1ffffffc) +
                auVar1._4_4_;
    piVar2[6] = (~-(uint)(uVar4 == 2) & 0x1ffffffe | -(uint)(uVar4 == 2) & 0x1ffffffc) +
                auVar1._8_4_;
    piVar2[7] = (~-(uint)(uVar4 == 1) & 0x1ffffffe | -(uint)(uVar4 == 1) & 0x1ffffffc) +
                auVar1._12_4_;
    piVar2 = piVar2 + 8;
    uVar4 = uVar5;
  } while (uVar5 < 0x10);
  local_158 = param_3;
  local_150 = piVar3;
  gf_weak_reduce(local_148);
  gf_mul(&local_108,param_2,local_148);
  local_148[0] = *piVar3 + *param_1;
  local_148[1] = param_1[0x11] + param_1[1];
  local_148[2] = param_1[0x12] + param_1[2];
  local_148[3] = param_1[0x13] + param_1[3];
  local_148[4] = param_1[4] + param_1[0x14];
  local_148[5] = param_1[0x15] + param_1[5];
  local_148[6] = param_1[0x16] + param_1[6];
  local_148[7] = param_1[0x17] + param_1[7];
  local_148[8] = param_1[8] + param_1[0x18];
  local_148[9] = param_1[0x19] + param_1[9];
  local_148[10] = param_1[0x1a] + param_1[10];
  local_11c = param_1[0x1b] + param_1[0xb];
  local_118 = param_1[0xc] + param_1[0x1c];
  local_114 = param_1[0x1d] + param_1[0xd];
  local_110 = param_1[0x1e] + param_1[0xe];
  local_10c = param_1[0x1f] + param_1[0xf];
  gf_mul(piVar3,param_2 + 0x40,local_148);
  gf_mul(param_1,param_2 + 0x80,param_1 + 0x30);
  local_c8 = local_108 + *piVar3;
  local_c4 = local_104 + param_1[0x11];
  local_c0 = local_100 + param_1[0x12];
  local_bc = local_fc + param_1[0x13];
  local_b8 = local_f8 + param_1[0x14];
  local_b4 = local_f4 + param_1[0x15];
  local_b0 = local_f0 + param_1[0x16];
  local_ac = local_ec + param_1[0x17];
  local_a8 = local_e8 + param_1[0x18];
  local_a4 = param_1[0x19] + local_e4;
  local_a0 = param_1[0x1a] + local_e0;
  local_9c = local_dc + param_1[0x1b];
  local_11c = param_1[0x1b] - local_dc;
  local_98 = param_1[0x1c] + local_d8;
  local_118 = param_1[0x1c] - local_d8;
  local_94 = param_1[0x1d] + local_d4;
  local_114 = param_1[0x1d] - local_d4;
  local_90 = param_1[0x1e] + local_d0;
  local_110 = param_1[0x1e] - local_d0;
  local_8c = local_cc + param_1[0x1f];
  local_148[0] = *local_150 - local_108;
  local_148[1] = param_1[0x11] - local_104;
  local_148[2] = param_1[0x12] - local_100;
  local_148[3] = param_1[0x13] - local_fc;
  local_148[4] = param_1[0x14] - local_f8;
  local_148[5] = param_1[0x15] - local_f4;
  local_148[6] = param_1[0x16] - local_f0;
  local_148[7] = param_1[0x17] - local_ec;
  local_148[8] = param_1[0x18] - local_e8;
  local_148[9] = param_1[0x19] - local_e4;
  local_148[10] = param_1[0x1a] - local_e0;
  local_10c = param_1[0x1f] - local_cc;
  piVar3 = local_148;
  uVar4 = 0;
  do {
    uVar5 = uVar4 + 8;
    *piVar3 = (-(uint)(uVar4 == 8) & 0x1ffffffc | ~-(uint)(uVar4 == 8) & 0x1ffffffe) + *piVar3;
    piVar3[1] = (-(uint)(uVar4 == 7) & 0x1ffffffc | ~-(uint)(uVar4 == 7) & 0x1ffffffe) + piVar3[1];
    piVar3[2] = (-(uint)(uVar4 == 6) & 0x1ffffffc | ~-(uint)(uVar4 == 6) & 0x1ffffffe) + piVar3[2];
    piVar3[3] = (-(uint)(uVar4 == 5) & 0x1ffffffc | ~-(uint)(uVar4 == 5) & 0x1ffffffe) + piVar3[3];
    auVar1 = *(undefined1 (*) [16])(piVar3 + 4);
    piVar3[4] = (-(uint)(uVar4 == 4) & 0x1ffffffc | ~-(uint)(uVar4 == 4) & 0x1ffffffe) +
                auVar1._0_4_;
    piVar3[5] = (-(uint)(uVar4 == 3) & 0x1ffffffc | ~-(uint)(uVar4 == 3) & 0x1ffffffe) +
                auVar1._4_4_;
    piVar3[6] = (-(uint)(uVar4 == 2) & 0x1ffffffc | ~-(uint)(uVar4 == 2) & 0x1ffffffe) +
                auVar1._8_4_;
    piVar3[7] = (-(uint)(uVar4 == 1) & 0x1ffffffc | ~-(uint)(uVar4 == 1) & 0x1ffffffe) +
                auVar1._12_4_;
    piVar3 = piVar3 + 8;
    uVar4 = uVar5;
  } while (uVar5 < 0x10);
  gf_weak_reduce(local_148);
  gf_sub_RAW(param_1 + 0x10,param_1 + 0x20,param_1);
  gf_bias(param_1 + 0x10,2);
  gf_weak_reduce(param_1 + 0x10);
  local_104 = param_1[0x21] + param_1[1];
  local_108 = param_1[0x20] + *param_1;
  local_100 = param_1[0x22] + param_1[2];
  local_fc = param_1[0x23] + param_1[3];
  local_f8 = param_1[0x24] + param_1[4];
  local_f4 = param_1[0x25] + param_1[5];
  local_f0 = param_1[0x26] + param_1[6];
  local_ec = param_1[0x27] + param_1[7];
  local_e8 = param_1[0x28] + param_1[8];
  local_e4 = param_1[0x29] + param_1[9];
  local_e0 = param_1[0x2a] + param_1[10];
  local_dc = param_1[0x2b] + param_1[0xb];
  local_d8 = param_1[0x2c] + param_1[0xc];
  local_d4 = param_1[0x2d] + param_1[0xd];
  local_d0 = param_1[0x2e] + param_1[0xe];
  local_cc = param_1[0x2f] + param_1[0xf];
  gf_mul(param_1 + 0x20,&local_108,param_1 + 0x10);
  gf_mul(param_1,param_1 + 0x10,local_148);
  gf_mul(param_1 + 0x10,&local_108,&local_c8);
  if (local_158 == 0) {
    gf_mul(param_1 + 0x30,local_148,&local_c8);
  }
  return;
}



// FUNCTION 143d8b140 add_pniels_to_pt body=160 status=ok
// SIG undefined add_pniels_to_pt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void add_pniels_to_pt(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x143d8b152;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  gf_mul(&local_68,param_1 + 0x80,param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0x80) = local_68;
  *(undefined8 *)(param_1 + 0x88) = uStack_60;
  *(undefined8 *)(param_1 + 0x90) = local_58;
  *(undefined8 *)(param_1 + 0x98) = uStack_50;
  *(undefined4 *)(param_1 + 0xa0) = local_48;
  *(undefined4 *)(param_1 + 0xa4) = uStack_44;
  *(undefined4 *)(param_1 + 0xa8) = uStack_40;
  *(undefined4 *)(param_1 + 0xac) = uStack_3c;
  *(undefined4 *)(param_1 + 0xb0) = local_38;
  *(undefined4 *)(param_1 + 0xb4) = uStack_34;
  *(undefined4 *)(param_1 + 0xb8) = uStack_30;
  *(undefined4 *)(param_1 + 0xbc) = uStack_2c;
  add_niels_to_pt(param_1,param_2,param_3);
  return;
}



// FUNCTION 143d8b1e0 curve448_base_double_scalarmul_non_secret body=893 status=ok
// SIG undefined curve448_base_double_scalarmul_non_secret(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void curve448_base_double_scalarmul_non_secret
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  int *piVar7;
  int *piVar8;
  undefined1 auStack_ec8 [32];
  undefined4 local_ea8;
  undefined8 local_e98;
  undefined8 uStack_e90;
  undefined8 local_e88;
  undefined8 uStack_e80;
  undefined4 local_e78;
  undefined4 uStack_e74;
  undefined4 uStack_e70;
  undefined4 uStack_e6c;
  undefined4 local_e68;
  undefined4 uStack_e64;
  undefined4 uStack_e60;
  undefined4 uStack_e5c;
  int local_e58;
  int local_e54 [2];
  int local_e4c [153];
  int local_be8;
  int local_be4 [2];
  int local_bdc [225];
  undefined1 local_858 [192];
  undefined1 auStack_798 [1856];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_ec8;
  recode_wnaf(&local_e58,param_2,5);
  recode_wnaf(&local_be8,param_4,3);
  prepare_wnaf_table(local_858,param_3,3);
  if (local_be8 < 0) {
    lVar5 = 2;
    puVar4 = (undefined8 *)&DAT_145daa640;
    do {
      uVar6 = puVar4[1];
      *param_1 = *puVar4;
      param_1[1] = uVar6;
      uVar6 = puVar4[3];
      param_1[2] = puVar4[2];
      param_1[3] = uVar6;
      uVar6 = puVar4[5];
      param_1[4] = puVar4[4];
      param_1[5] = uVar6;
      uVar6 = puVar4[7];
      param_1[6] = puVar4[6];
      param_1[7] = uVar6;
      uVar6 = puVar4[9];
      param_1[8] = puVar4[8];
      param_1[9] = uVar6;
      uVar6 = puVar4[0xb];
      param_1[10] = puVar4[10];
      param_1[0xb] = uVar6;
      uVar6 = puVar4[0xd];
      param_1[0xc] = puVar4[0xc];
      param_1[0xd] = uVar6;
      uVar6 = puVar4[0xf];
      param_1[0xe] = puVar4[0xe];
      param_1[0xf] = uVar6;
      lVar5 = lVar5 + -1;
      puVar4 = puVar4 + 0x10;
      param_1 = param_1 + 0x10;
    } while (lVar5 != 0);
  }
  else {
    if (local_e58 < local_be8) {
      pniels_to_pt(param_1,local_858 + ((longlong)local_be4[0] >> 1) * 0x100);
      piVar7 = local_e54;
      piVar8 = local_bdc;
      iVar3 = local_be8;
    }
    else {
      if (local_be8 == local_e58) {
        pniels_to_pt(param_1,local_858 + ((longlong)local_be4[0] >> 1) * 0x100);
        add_niels_to_pt(param_1,PTR_DAT_146838288 + ((longlong)local_e54[0] >> 1) * 0xc0,local_be8);
        piVar8 = local_bdc;
      }
      else {
        niels_to_pt(param_1,PTR_DAT_146838288 + ((longlong)local_e54[0] >> 1) * 0xc0);
        piVar8 = local_be4;
        local_be8 = local_e58;
      }
      piVar7 = local_e4c;
      iVar3 = local_be8;
    }
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      iVar1 = piVar8[-1];
      iVar2 = piVar7[-1];
      if (((iVar3 == 0) || (iVar3 == iVar1)) || (iVar3 == iVar2)) {
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
      }
      point_double_internal(param_1,param_1,uVar6);
      if (iVar3 == iVar1) {
        iVar1 = *piVar8;
        if (iVar1 < 1) {
          if ((iVar3 == 0) || (local_ea8 = 1, iVar3 == iVar2)) {
            local_ea8 = 0;
          }
          lVar5 = ((longlong)-iVar1 >> 1) * 0x100;
          gf_mul(&local_e98,param_1 + 0x10,auStack_798 + lVar5);
          param_1[0x10] = local_e98;
          param_1[0x11] = uStack_e90;
          param_1[0x12] = local_e88;
          param_1[0x13] = uStack_e80;
          *(undefined4 *)(param_1 + 0x14) = local_e78;
          *(undefined4 *)((longlong)param_1 + 0xa4) = uStack_e74;
          *(undefined4 *)(param_1 + 0x15) = uStack_e70;
          *(undefined4 *)((longlong)param_1 + 0xac) = uStack_e6c;
          *(undefined4 *)(param_1 + 0x16) = local_e68;
          *(undefined4 *)((longlong)param_1 + 0xb4) = uStack_e64;
          *(undefined4 *)(param_1 + 0x17) = uStack_e60;
          *(undefined4 *)((longlong)param_1 + 0xbc) = uStack_e5c;
          sub_niels_from_pt(param_1,local_858 + lVar5);
        }
        else {
          add_pniels_to_pt(param_1,local_858 + ((longlong)iVar1 >> 1) * 0x100);
        }
        piVar8 = piVar8 + 2;
      }
      if (iVar3 == iVar2) {
        iVar1 = *piVar7;
        if (iVar1 < 1) {
          sub_niels_from_pt(param_1,PTR_DAT_146838288 + ((longlong)-iVar1 >> 1) * 0xc0);
        }
        else {
          add_niels_to_pt(param_1,PTR_DAT_146838288 + ((longlong)iVar1 >> 1) * 0xc0);
        }
        piVar7 = piVar7 + 2;
      }
    }
    FUN_14004ff40(&local_be8,0x390);
    FUN_14004ff40(&local_e58,0x268);
    FUN_14004ff40(local_858,0x800);
  }
  return;
}



// FUNCTION 143d8b560 curve448_point_decode_like_eddsa_and_mul_by_ratio body=677 status=ok
// SIG undefined curve448_point_decode_like_eddsa_and_mul_by_ratio(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint curve448_point_decode_like_eddsa_and_mul_by_ratio(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_1a8 [32];
  undefined1 local_188 [64];
  undefined1 local_148 [64];
  undefined1 local_108 [64];
  undefined1 local_c8 [64];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  byte local_50;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143d8b57f;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  local_88 = *param_2;
  uStack_80 = param_2[1];
  bVar3 = *(byte *)(param_2 + 7);
  local_78 = param_2[2];
  uStack_70 = param_2[3];
  local_50 = bVar3 & 0x7f;
  local_68 = *(undefined4 *)(param_2 + 4);
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_60 = *(undefined4 *)(param_2 + 5);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_58 = param_2[6];
  uVar5 = gf_deserialize(param_1 + 0x40,&local_88,1);
  bVar4 = local_50;
  gf_sqr(param_1,param_1 + 0x40);
  puVar1 = (undefined8 *)(param_1 + 0x80);
  gf_sub(puVar1,&DAT_145daa600,param_1);
  lVar2 = param_1 + 0xc0;
  gf_mulw_unsigned(lVar2,param_1,0x98a9);
  gf_sub(lVar2,&DAT_145daa5c0,lVar2);
  gf_sub(lVar2,&DAT_145daa600,lVar2);
  gf_mul(param_1,puVar1,lVar2);
  uVar6 = gf_isr(lVar2,param_1);
  gf_mul(param_1,lVar2,puVar1);
  uVar7 = gf_lobit(param_1);
  gf_cond_neg(param_1,0xffffffffU - ((int)((bVar3 & 0x80) - 1) >> 0x1f) ^ uVar7);
  *puVar1 = 1;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  gf_sqr(local_c8,param_1);
  gf_sqr(local_188,param_1 + 0x40);
  gf_add(local_108,local_c8,local_188);
  gf_add(lVar2,param_1 + 0x40,param_1);
  gf_sqr(local_148,lVar2);
  gf_sub(local_148,local_148,local_108);
  gf_sub(lVar2,local_188,local_c8);
  gf_sqr(param_1,puVar1);
  gf_add(puVar1,param_1,param_1);
  gf_sub(local_188,puVar1,local_108);
  gf_mul(param_1,local_188,local_148);
  gf_mul(puVar1,lVar2,local_188);
  gf_mul(param_1 + 0x40,lVar2,local_108);
  gf_mul(lVar2,local_148,local_108);
  FUN_14004ff40(local_188,0x40);
  FUN_14004ff40(local_148,0x40);
  FUN_14004ff40(local_c8,0x40);
  FUN_14004ff40(local_108,0x40);
  FUN_14004ff40(&local_88,0x39);
  return uVar5 & uVar6 & (int)(bVar4 - 1) >> 0x1f;
}



// FUNCTION 143d8b810 curve448_point_destroy body=27 status=ok
// SIG undefined curve448_point_destroy(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void curve448_point_destroy(undefined8 param_1)

{
  FUN_14004ff40(param_1,0x100);
  return;
}



// FUNCTION 143d8b830 curve448_point_eq body=125 status=ok
// SIG undefined curve448_point_eq(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void curve448_point_eq(longlong param_1,longlong param_2)

{
  undefined1 auStack_b8 [32];
  undefined1 local_98 [64];
  undefined1 local_58 [64];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143d8b840;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  gf_mul(local_58,param_1 + 0x40,param_2);
  gf_mul(local_98,param_2 + 0x40,param_1);
  gf_eq(local_58,local_98);
  return;
}


