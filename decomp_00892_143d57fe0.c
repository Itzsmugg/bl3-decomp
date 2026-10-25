// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143d57fe0 do_EC_KEY_print body=597 status=ok
// SIG undefined do_EC_KEY_print(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong do_EC_KEY_print(undefined8 param_1,longlong param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  longlong lVar8;
  undefined8 local_res10;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x143d58002;
  lVar8 = 0;
  local_res10 = 0;
  local_38 = 0;
  if ((param_2 == 0) || (lVar3 = FUniqueNetIdString::GetBytes(param_2), lVar3 == 0)) {
    ERR_put_error(0x10,0xdd,0x43,"crypto\\ec\\ec_ameth.c",0x15f);
    return 0;
  }
  lVar5 = lVar8;
  lVar6 = lVar8;
  if ((param_4 == 2) || (lVar4 = USignificanceManager::GetWorld(param_2), lVar5 = 0, lVar4 == 0)) {
LAB_143d58078:
    if (param_4 == 0) {
      lVar4 = FNiagaraEmitterHandle::GetInstance(param_2);
      if ((lVar4 != 0) && (lVar6 = EC_KEY_priv2buf(param_2,&local_res10), lVar6 == 0))
      goto LAB_143d58137;
      pcVar7 = "Private-Key";
    }
    else {
      pcVar7 = "Public-Key";
      if (param_4 != 1) {
        pcVar7 = "ECDSA-Parameters";
      }
    }
    iVar2 = BIO_indent(param_1,param_3,0x80);
    if (iVar2 != 0) {
      uVar1 = EC_GROUP_order_bits(lVar3);
      iVar2 = BIO_printf(param_1,"%s: (%d bit)\n",pcVar7,uVar1);
      if ((((0 < iVar2) &&
           ((lVar6 == 0 ||
            ((iVar2 = BIO_printf(param_1,"%*spriv:\n",param_3,&DAT_143f3f584), 0 < iVar2 &&
             (iVar2 = ASN1_buf_print(param_1,local_res10,lVar6,param_3 + 4), iVar2 != 0)))))) &&
          ((lVar5 == 0 ||
           ((iVar2 = BIO_printf(param_1,"%*spub:\n",param_3,&DAT_143f3f584), 0 < iVar2 &&
            (iVar2 = ASN1_buf_print(param_1,local_38,lVar5,param_3 + 4), iVar2 != 0)))))) &&
         (iVar2 = ECPKParameters_print(param_1,lVar3,param_3), iVar2 != 0)) {
        lVar8 = 1;
        goto LAB_143d58158;
      }
    }
  }
  else {
    uVar1 = UPartyBeaconState::GetMaxReservations(param_2);
    lVar5 = EC_KEY_key2buf(param_2,uVar1,&local_38,0);
    if (lVar5 != 0) goto LAB_143d58078;
  }
LAB_143d58137:
  ERR_put_error(0x10,0xdd,0x10,"crypto\\ec\\ec_ameth.c",399);
LAB_143d58158:
  CRYPTO_clear_free(local_res10,lVar6,"crypto\\ec\\ec_ameth.c",400);
  CRYPTO_free(local_38,"crypto\\ec\\ec_ameth.c",0x191);
  return lVar8;
}



// FUNCTION 143d58240 ecdh_cms_decrypt body=563 status=ok
// SIG undefined ecdh_cms_decrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ecdh_cms_decrypt(undefined8 param_1)

{
  int iVar1;
  WriteBytesMem *this;
  longlong lVar2;
  uchar *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  int local_res10 [2];
  longlong local_res18;
  longlong local_res20;
  undefined8 in_stack_ffffffffffffff98;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  this = (WriteBytesMem *)CMS_RecipientInfo_get0_pkey_ctx();
  if (this == (WriteBytesMem *)0x0) {
    return 0;
  }
  lVar2 = FUniqueNetIdString::GetBytes(this);
  if (lVar2 == 0) {
    lVar5 = 0;
    iVar7 = 0;
    lVar2 = 0;
    uVar10 = 0;
    iVar1 = CMS_RecipientInfo_kari_get0_orig_id(param_1,&local_res20,&local_58,0,0,0);
    if (iVar1 == 0) {
      return 0;
    }
    if (local_res20 == 0) {
      return 0;
    }
    if (local_58 == 0) {
      return 0;
    }
    local_res18 = 0;
    lVar9 = 0;
    X509_ALGOR_get0(&local_50,local_res10,&local_48);
    iVar1 = OBJ_obj2nid(local_50);
    lVar8 = lVar5;
    lVar6 = lVar5;
    if (iVar1 == 0x198) {
      lVar8 = lVar2;
      lVar6 = lVar9;
      if ((local_res10[0] == -1) || (local_res10[0] == 5)) {
        puVar3 = AK::WriteBytesMem::Bytes(this);
        if (puVar3 != (uchar *)0x0) {
          uVar4 = FUniqueNetIdString::GetBytes(*(undefined8 *)(puVar3 + 0x28));
          local_res18 = EC_KEY_new();
          if (local_res18 == 0) goto LAB_143d583ec;
          iVar1 = EC_KEY_set_group(local_res18,uVar4);
          if (iVar1 != 0) goto LAB_143d5837a;
        }
        goto LAB_143d583e4;
      }
      local_res18 = eckey_type2param(local_res10[0],local_48);
      lVar6 = lVar5;
      if (local_res18 != 0) {
LAB_143d5837a:
        iVar1 = FRollingHash::GetWindowSize(local_58);
        local_40 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
                   ::GetBoundProgramCounterForTimerManager(local_58);
        lVar8 = lVar5;
        lVar6 = lVar9;
        if ((((local_40 != 0) && (iVar1 != 0)) &&
            (lVar5 = o2i_ECPublicKey(&local_res18,&local_40,iVar1), lVar8 = lVar2, lVar5 != 0)) &&
           (lVar6 = EVP_PKEY_new(), lVar6 != 0)) {
          EVP_PKEY_set1_EC_KEY(lVar6,local_res18);
          iVar1 = EVP_PKEY_derive_set_peer(this,lVar6);
          lVar8 = 0;
          if (0 < iVar1) {
            lVar8 = 1;
          }
        }
        goto LAB_143d583e4;
      }
    }
    else {
LAB_143d583e4:
      iVar7 = (int)lVar8;
    }
LAB_143d583ec:
    EC_KEY_free(local_res18);
    EVP_PKEY_free(lVar6);
    if (iVar7 == 0) {
      uVar4 = CONCAT44(uVar10,0x315);
      uVar10 = 0x95;
      goto LAB_143d58425;
    }
  }
  iVar1 = ecdh_cms_set_shared_info(this,param_1);
  if (iVar1 != 0) {
    return 1;
  }
  uVar4 = CONCAT44(uVar10,0x31b);
  uVar10 = 0x96;
LAB_143d58425:
  ERR_put_error(0x10,0xee,uVar10,"crypto\\ec\\ec_ameth.c",uVar4);
  return 0;
}



// FUNCTION 143d58480 ecdh_cms_encrypt body=1033 status=ok
// SIG undefined ecdh_cms_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * ecdh_cms_encrypt(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  WriteBytesMem *this;
  uchar *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined4 local_res10 [2];
  longlong local_res18;
  undefined8 local_res20;
  undefined4 uVar15;
  ulonglong uVar14;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48 [2];
  undefined8 *puVar11;
  
  puVar11 = (undefined8 *)0x0;
  puVar10 = (undefined8 *)0x0;
  puVar13 = (undefined8 *)0x0;
  local_res18 = 0;
  this = (WriteBytesMem *)CMS_RecipientInfo_get0_pkey_ctx();
  if (this == (WriteBytesMem *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar5 = AK::WriteBytesMem::Bytes(this);
  uVar15 = 0;
  iVar1 = CMS_RecipientInfo_kari_get0_orig_id(param_1,&local_res20,&local_68,0,0,0);
  puVar12 = puVar11;
  puVar9 = puVar11;
  if (iVar1 != 0) {
    X509_ALGOR_get0(&local_58,0,0,local_res20);
    lVar6 = OBJ_nid2obj(0);
    if (local_58 == lVar6) {
      uVar7 = *(undefined8 *)(puVar5 + 0x28);
      iVar1 = i2o_ECPublicKey(uVar7,0);
      puVar9 = puVar13;
      if (((iVar1 < 1) ||
          (local_res18 = CRYPTO_malloc((longlong)iVar1,"crypto\\ec\\ec_ameth.c",0x344),
          puVar9 = puVar11, local_res18 == 0)) ||
         (local_50 = local_res18, iVar1 = i2o_ECPublicKey(uVar7,&local_50), puVar9 = puVar13,
         iVar1 < 1)) goto LAB_143d58854;
      ASN1_STRING_set0(local_68,local_res18,iVar1);
      *(uint *)(local_68 + 0x10) = *(uint *)(local_68 + 0x10) & 0xfffffff0;
      *(uint *)(local_68 + 0x10) = *(uint *)(local_68 + 0x10) | 8;
      local_res18 = 0;
      uVar7 = OBJ_nid2obj(0x198);
      X509_ALGOR_set0(local_res20,uVar7,0xffffffff);
    }
    uVar14 = CONCAT44(uVar15,0xfffffffe);
    iVar1 = EVP_PKEY_CTX_ctrl(this,0x198,0x400,0x1004,uVar14,0);
    puVar12 = puVar10;
    puVar9 = puVar13;
    if (0 < iVar1) {
      uVar14 = uVar14 & 0xffffffff00000000;
      iVar2 = EVP_PKEY_CTX_ctrl(this,0x198,0x400,0x1006,uVar14,&local_60);
      if (iVar2 != 0) {
        uVar7 = CONCAT44((int)(uVar14 >> 0x20),0xfffffffe);
        iVar2 = EVP_PKEY_CTX_ctrl(this,0x198,0x400,0x1003,uVar7,0);
        if (-1 < iVar2) {
          if (iVar2 == 0) {
            iVar2 = 0x3b2;
          }
          else if (iVar2 == 1) {
            iVar2 = 0x3b3;
          }
          if (iVar1 == 1) {
            uVar14 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),2);
            iVar1 = EVP_PKEY_CTX_ctrl(this,0x198,0x400,0x1004,uVar14,0);
            uVar15 = (undefined4)(uVar14 >> 0x20);
            if (0 < iVar1) {
              if (local_60 == 0) {
                local_60 = EVP_sha1();
                uVar14 = uVar14 & 0xffffffff00000000;
                iVar1 = EVP_PKEY_CTX_ctrl(this,0x198,0x400,0x1005,uVar14,local_60);
                uVar15 = (undefined4)(uVar14 >> 0x20);
                if (iVar1 < 1) goto LAB_143d58854;
              }
              iVar1 = CMS_RecipientInfo_kari_get0_alg(param_1,&local_res20,local_48);
              if (iVar1 != 0) {
                uVar3 = FRollingHash::GetWindowSize(local_60);
                iVar1 = OBJ_find_sigid_by_algs(local_res10,uVar3,iVar2);
                if (iVar1 != 0) {
                  uVar7 = CMS_RecipientInfo_kari_get0_ctx(param_1);
                  uVar8 = FHardwareCursor::GetHandle(uVar7);
                  uVar3 = FUN_143cf6400(uVar8);
                  uVar4 = UVariantSet::GetNumVariants(uVar7);
                  puVar9 = (undefined8 *)X509_ALGOR_new();
                  if (puVar9 != (undefined8 *)0x0) {
                    uVar8 = OBJ_nid2obj(uVar3);
                    *puVar9 = uVar8;
                    lVar6 = ASN1_TYPE_new();
                    puVar9[1] = lVar6;
                    if ((lVar6 != 0) && (iVar1 = EVP_CIPHER_param_to_asn1(uVar7,lVar6), 0 < iVar1))
                    {
                      iVar1 = ASN1_TYPE_get(puVar9[1]);
                      if (iVar1 == 0) {
                        ASN1_TYPE_free(puVar9[1]);
                        puVar9[1] = 0;
                      }
                      uVar7 = CONCAT44(uVar15,uVar4);
                      iVar1 = EVP_PKEY_CTX_ctrl(this,0x198,0x400,0x1007,uVar7,0);
                      uVar15 = (undefined4)((ulonglong)uVar7 >> 0x20);
                      if (((0 < iVar1) &&
                          (iVar1 = CMS_SharedInfo_encode(&local_res18,puVar9,local_48[0],uVar4),
                          iVar1 != 0)) &&
                         (iVar1 = EVP_PKEY_CTX_ctrl(this,0x198,0x400,0x1009,CONCAT44(uVar15,iVar1),
                                                    local_res18), 0 < iVar1)) {
                        local_res18 = 0;
                        iVar1 = FUN_143d33db0(puVar9,&local_res18);
                        puVar12 = puVar11;
                        if (((local_res18 != 0) && (iVar1 != 0)) &&
                           (lVar6 = ASN1_STRING_new(), puVar12 = puVar10, lVar6 != 0)) {
                          ASN1_STRING_set0(lVar6,local_res18,iVar1);
                          local_res18 = 0;
                          uVar7 = OBJ_nid2obj(local_res10[0]);
                          X509_ALGOR_set0(local_res20,uVar7,0x10,lVar6);
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
      }
    }
  }
LAB_143d58854:
  CRYPTO_free(local_res18,"crypto\\ec\\ec_ameth.c",0x3a9);
  X509_ALGOR_free(puVar9);
  return puVar12;
}



// FUNCTION 143d58890 ecdh_cms_set_shared_info body=726 status=ok
// SIG undefined ecdh_cms_set_shared_info(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ecdh_cms_set_shared_info(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined8 in_stack_ffffffffffffffb8;
  ulonglong uVar11;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  local_20 = 0x143d5889f;
  uVar10 = 0;
  uVar9 = 0;
  local_38 = 0;
  iVar1 = CMS_RecipientInfo_kari_get0_alg(param_2,&local_30,&local_20);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = OBJ_obj2nid(*local_30);
  if ((iVar1 != 0) && (iVar1 = OBJ_find_sigid_algs(iVar1,local_res20,local_res18), iVar1 != 0)) {
    uVar4 = 0;
    if (local_res18[0] != 0x3b2) {
      if (local_res18[0] != 0x3b3) goto LAB_143d58b39;
      uVar4 = 1;
    }
    uVar5 = CONCAT44(uVar2,uVar4);
    iVar1 = EVP_PKEY_CTX_ctrl(param_1,0x198,0x400,0x1003,uVar5,0);
    uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (0 < iVar1) {
      uVar11 = CONCAT44(uVar2,2);
      iVar1 = EVP_PKEY_CTX_ctrl(param_1,0x198,0x400,0x1004,uVar11,0);
      uVar2 = (undefined4)(uVar11 >> 0x20);
      if (0 < iVar1) {
        uVar5 = OBJ_nid2sn(local_res20[0]);
        lVar6 = EVP_get_digestbyname(uVar5);
        uVar2 = (undefined4)(uVar11 >> 0x20);
        if (lVar6 != 0) {
          uVar11 = uVar11 & 0xffffffff00000000;
          iVar1 = EVP_PKEY_CTX_ctrl(param_1,0x198,0x400,0x1005,uVar11,lVar6);
          uVar2 = (undefined4)(uVar11 >> 0x20);
          if (0 < iVar1) {
            if (*(int *)local_30[1] != 0x10) {
              return 0;
            }
            local_28 = *(undefined8 *)(*(longlong *)((int *)local_30[1] + 2) + 8);
            puVar7 = (undefined8 *)X509_ALGOR_free(0,&local_28,**(undefined4 **)(local_30[1] + 8));
            if ((puVar7 != (undefined8 *)0x0) &&
               (lVar6 = CMS_RecipientInfo_kari_get0_ctx(param_2), lVar6 != 0)) {
              uVar2 = OBJ_obj2nid(*puVar7);
              uVar5 = OBJ_nid2sn(uVar2);
              lVar8 = EVP_get_cipherbyname(uVar5);
              if ((lVar8 != 0) &&
                 (uVar3 = TResourceArray<unsigned_char,0>::GetResourceDataSize(lVar8),
                 (uVar3 & 0xf0007) == 0x10002)) {
                uVar2 = 0;
                iVar1 = EVP_EncryptInit_ex(lVar6,lVar8,0,0,0);
                if ((iVar1 != 0) &&
                   (iVar1 = EVP_CIPHER_asn1_to_param(lVar6,puVar7[1]), uVar10 = uVar9, 0 < iVar1)) {
                  uVar4 = UVariantSet::GetNumVariants(lVar6);
                  uVar9 = CONCAT44(uVar2,uVar4);
                  iVar1 = EVP_PKEY_CTX_ctrl(param_1,0x198,0x400,0x1007,uVar9,0);
                  uVar2 = (undefined4)((ulonglong)uVar9 >> 0x20);
                  if ((0 < iVar1) &&
                     ((iVar1 = CMS_SharedInfo_encode(&local_38,puVar7,local_20,uVar4), iVar1 != 0 &&
                      (iVar1 = EVP_PKEY_CTX_ctrl(param_1,0x198,0x400,0x1009,CONCAT44(uVar2,iVar1),
                                                 local_38), 0 < iVar1)))) {
                    local_38 = 0;
                    uVar10 = 1;
                  }
                }
              }
            }
            X509_ALGOR_free(puVar7);
            CRYPTO_free(local_38,"crypto\\ec\\ec_ameth.c",0x301);
            return uVar10;
          }
        }
      }
    }
  }
LAB_143d58b39:
  ERR_put_error(0x10,0xef,0x94,"crypto\\ec\\ec_ameth.c",CONCAT44(uVar2,0x2da));
  return 0;
}



// FUNCTION 143d58b70 eckey_param2type body=280 status=ok
// SIG undefined eckey_param2type(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 eckey_param2type(undefined4 *param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143d58b8b;
  if ((param_3 == 0) || (lVar2 = FUniqueNetIdString::GetBytes(param_3), lVar2 == 0)) {
    ERR_put_error(0x10,0xdf,0x7c,"crypto\\ec\\ec_ameth.c",0x1f,uVar4);
    uVar4 = 0;
  }
  else {
    iVar1 = BuildPatchServices::FMemoryChunkStoreStatistics::GetPeakStoreUse(lVar2);
    if ((iVar1 == 0) || (iVar1 = TMeshAttributeArraySet<int>::GetNumIndices(lVar2), iVar1 == 0)) {
      piVar3 = (int *)ASN1_STRING_new();
      if (piVar3 != (int *)0x0) {
        iVar1 = i2d_ECParameters(param_3,piVar3 + 2);
        *piVar3 = iVar1;
        if (0 < iVar1) {
          *param_2 = piVar3;
          *param_1 = 0x10;
          return 1;
        }
        ASN1_STRING_free(piVar3);
        ERR_put_error(0x10,0xdf,0x10,"crypto\\ec\\ec_ameth.c",0x31);
      }
      uVar4 = 0;
    }
    else {
      uVar4 = OBJ_nid2obj(iVar1);
      *param_2 = uVar4;
      *param_1 = 6;
      uVar4 = 1;
    }
  }
  return uVar4;
}



// FUNCTION 143d58c90 eckey_type2param body=258 status=ok
// SIG undefined eckey_type2param(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong eckey_type2param(int param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 local_res18 [2];
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143d58ca5;
  lVar3 = 0;
  if (param_1 == 0x10) {
    local_res18[0] = *(undefined8 *)(param_2 + 2);
    lVar2 = d2i_ECParameters(0,local_res18,*param_2);
    if (lVar2 != 0) {
      return lVar2;
    }
    uVar5 = 0x67;
LAB_143d58d54:
    lVar2 = 0;
    uVar4 = 0x8e;
  }
  else {
    if (param_1 != 6) {
      uVar5 = 0x7c;
      goto LAB_143d58d54;
    }
    lVar2 = EC_KEY_new();
    if (lVar2 != 0) {
      uVar5 = OBJ_obj2nid(param_2);
      lVar3 = EC_GROUP_new_by_curve_name(uVar5);
      if (lVar3 != 0) {
        BIO_set_shutdown(lVar3,1);
        iVar1 = EC_KEY_set_group(lVar2,lVar3);
        if (iVar1 != 0) {
          EC_GROUP_free(lVar3);
          return lVar2;
        }
      }
      goto LAB_143d58d70;
    }
    uVar5 = 0x71;
    uVar4 = 0x41;
  }
  ERR_put_error(0x10,0xdc,uVar4,"crypto\\ec\\ec_ameth.c",uVar5,uVar6);
LAB_143d58d70:
  EC_KEY_free(lVar2);
  EC_GROUP_free(lVar3);
  return 0;
}



// FUNCTION 143d58da0 ecx_pub_encode body=336 status=ok
// SIG undefined ecx_pub_encode(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ecx_pub_encode(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar7;
  longlong lVar6;
  ulonglong uVar8;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar8 = 0x143d58db0;
  if (*(longlong *)(param_2 + 0x28) == 0) {
    ERR_put_error(0x10,0x10c,0x74,"crypto\\ec\\ecx_meth.c",CONCAT44(uVar7,0x82),0x143d58db0);
    return 0;
  }
  iVar1 = **(int **)(param_2 + 0x10);
  if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
    cVar4 = ' ';
  }
  else {
    cVar4 = (iVar1 != 0x40b) + '8';
  }
  lVar2 = CRYPTO_memdup(*(longlong *)(param_2 + 0x28),cVar4,"crypto\\ec\\ecx_meth.c",0x86);
  if (lVar2 == 0) {
    uVar3 = CONCAT44(uVar7,0x88);
  }
  else {
    iVar1 = **(int **)(param_2 + 0x10);
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      uVar5 = 0x20;
    }
    else {
      uVar5 = (iVar1 != 0x40b) + 0x38;
    }
    uVar3 = OBJ_nid2obj();
    uVar8 = (ulonglong)uVar5;
    lVar6 = lVar2;
    iVar1 = X509_PUBKEY_set0_param(param_1,uVar3,0xffffffff,0,lVar2,uVar8);
    uVar7 = (undefined4)((ulonglong)lVar6 >> 0x20);
    if (iVar1 != 0) {
      return 1;
    }
    CRYPTO_free(lVar2,"crypto\\ec\\ecx_meth.c",0x8e);
    uVar3 = CONCAT44(uVar7,0x8f);
  }
  ERR_put_error(0x10,0x10c,0x41,"crypto\\ec\\ecx_meth.c",uVar3,uVar8);
  return 0;
}



// FUNCTION 143d58ef0 ecx_pub_decode body=101 status=ok
// SIG undefined ecx_pub_decode(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ecx_pub_decode(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 local_res18 [2];
  undefined8 local_res20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143d58efc;
  iVar1 = X509_PUBKEY_get0_param(0,&local_res20,local_res18,&local_18,param_2);
  if (iVar1 == 0) {
    return;
  }
  ecx_key_op(param_1,**(undefined4 **)(param_1 + 0x10),local_18,local_res20,local_res18[0],0);
  return;
}



// FUNCTION 143d58f60 ecx_pub_cmp body=120 status=ok
// SIG undefined ecx_pub_cmp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ecx_pub_cmp(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_2 + 0x28) != 0)) {
    iVar1 = **(int **)(param_1 + 0x10);
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      cVar2 = ' ';
    }
    else {
      cVar2 = (iVar1 != 0x40b) + '8';
    }
    iVar1 = FUN_14004ffa0(*(longlong *)(param_1 + 0x28),*(longlong *)(param_2 + 0x28),cVar2);
    return (ulonglong)(iVar1 == 0);
  }
  return 0xfffffffe;
}



// FUNCTION 143d58fe0 ecx_priv_decode body=182 status=ok
// SIG undefined ecx_priv_decode(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ecx_priv_decode(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 local_res18 [2];
  undefined8 local_res20;
  undefined4 uVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143d58fec;
  uVar2 = PKCS8_pkey_get0(0,&local_res20,local_res18,&local_18,param_2);
  uVar4 = (undefined4)((ulonglong)param_2 >> 0x20);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  lVar3 = d2i_ASN1_OCTET_STRING(0,&local_res20,local_res18[0]);
  if (lVar3 == 0) {
    local_res20 = 0;
    local_res18[0] = 0;
  }
  else {
    local_res20 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
                  ::GetBoundProgramCounterForTimerManager(lVar3);
    local_res18[0] = FRollingHash::GetWindowSize(lVar3);
  }
  uVar1 = ecx_key_op(param_1,**(undefined4 **)(param_1 + 0x10),local_18,local_res20,
                     CONCAT44(uVar4,local_res18[0]),1);
  ASN1_BIT_STRING_free(lVar3);
  return (ulonglong)uVar1;
}



// FUNCTION 143d590a0 ecx_priv_encode body=373 status=ok
// SIG undefined ecx_priv_encode(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ecx_priv_encode(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_res10;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar4;
  int local_28 [2];
  longlong local_20;
  undefined4 local_18;
  undefined8 uStack_10;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uStack_10 = 0x143d590b0;
  local_res10 = 0;
  if ((*(longlong *)(param_2 + 0x28) != 0) &&
     (local_20 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x40), local_20 != 0)) {
    iVar1 = **(int **)(param_2 + 0x10);
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      local_28[0] = 0x20;
    }
    else {
      local_28[0] = (iVar1 != 0x40b) + 0x38;
    }
    local_18 = 0;
    iVar1 = i2d_ASN1_OCTET_STRING(local_28,&local_res10);
    if (iVar1 < 0) {
      uVar3 = CONCAT44(uVar4,0xd7);
    }
    else {
      uVar3 = OBJ_nid2obj(**(undefined4 **)(param_2 + 0x10));
      uVar4 = 0;
      iVar2 = PKCS8_pkey_set0(param_1,uVar3,0,0xffffffff,0,local_res10,iVar1);
      if (iVar2 != 0) {
        return 1;
      }
      CRYPTO_clear_free(local_res10,(longlong)iVar1,"crypto\\ec\\ecx_meth.c",0xdd);
      uVar3 = CONCAT44(uVar4,0xde);
    }
    ERR_put_error(0x10,0x10b,0x41,"crypto\\ec\\ecx_meth.c",uVar3);
    return 0;
  }
  ERR_put_error(0x10,0x10b,0x7b,"crypto\\ec\\ecx_meth.c",CONCAT44(uVar4,0xcd));
  return 0;
}



// FUNCTION 143d592b0 ecx_free body=124 status=ok
// SIG undefined ecx_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ecx_free(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  
  uVar2 = 0;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    iVar1 = **(int **)(param_1 + 0x10);
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      cVar3 = ' ';
    }
    else {
      cVar3 = (iVar1 != 0x40b) + '8';
    }
    CRYPTO_secure_clear_free
              (*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x40),cVar3,"crypto\\ec\\ecx_meth.c",
               0x101);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
  }
  CRYPTO_free(uVar2,"crypto\\ec\\ecx_meth.c",0x102);
  return;
}



// FUNCTION 143d59330 ecx_priv_print body=31 status=ok
// SIG undefined ecx_priv_print(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ecx_priv_print(void)

{
  ecx_key_print();
  return;
}



// FUNCTION 143d59350 ecx_pub_print body=31 status=ok
// SIG undefined ecx_pub_print(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ecx_pub_print(void)

{
  ecx_key_print();
  return;
}



// FUNCTION 143d59370 ecx_ctrl body=403 status=ok
// SIG undefined ecx_ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int ecx_ctrl(longlong param_1,int param_2,int param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  void *_Dst;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x143d59389;
  if (param_2 != 9) {
    if (param_2 != 10) {
      return -2;
    }
    if (*(longlong *)(param_1 + 0x28) != 0) {
      iVar1 = **(int **)(param_1 + 0x10);
      if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
        cVar3 = ' ';
      }
      else {
        cVar3 = (iVar1 != 0x40b) + '8';
      }
      lVar2 = CRYPTO_memdup(*(longlong *)(param_1 + 0x28),cVar3,"crypto\\ec\\ecx_meth.c",0x148);
      *param_4 = lVar2;
      if (lVar2 != 0) {
        iVar1 = **(int **)(param_1 + 0x10);
        if ((iVar1 != 0x40a) && (iVar1 != 0x43f)) {
          return (iVar1 != 0x40b) + 0x38;
        }
        return 0x20;
      }
    }
    return 0;
  }
  iVar1 = **(int **)(param_1 + 0x10);
  if (param_4 != (longlong *)0x0) {
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = (iVar1 != 0x40b) + 0x38;
    }
    if (param_3 == iVar4) {
      _Dst = (void *)CRYPTO_zalloc(0x48,"crypto\\ec\\ecx_meth.c");
      if (_Dst != (void *)0x0) {
        _guard_xfg_dispatch_icall_nop(_Dst,param_4,(longlong)param_3);
        EVP_PKEY_assign(param_1,iVar1,_Dst);
        return 1;
      }
      uVar6 = 0x47;
      uVar5 = 0x41;
      goto LAB_143d594d2;
    }
  }
  uVar6 = 0x40;
  uVar5 = 0x66;
LAB_143d594d2:
  ERR_put_error(0x10,0x10a,uVar5,"crypto\\ec\\ecx_meth.c",uVar6,uVar7);
  return 0;
}



// FUNCTION 143d59530 ecx_set_priv_key body=48 status=ok
// SIG undefined ecx_set_priv_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ecx_set_priv_key(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  ecx_key_op(param_1,**(undefined4 **)(param_1 + 0x10),0,param_2,param_3,1,0x143d5953a);
  return;
}



// FUNCTION 143d59560 ecx_set_pub_key body=267 status=ok
// SIG undefined ecx_set_pub_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1 ecx_set_pub_key(longlong param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  undefined8 uVar3;
  
  uVar3 = 0x143d5957b;
  iVar1 = **(int **)(param_1 + 0x10);
  if (param_2 != (void *)0x0) {
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      iVar2 = 0x20;
    }
    else {
      iVar2 = (iVar1 != 0x40b) + 0x38;
    }
    if (param_3 == iVar2) {
      _Dst = (void *)CRYPTO_zalloc(0x48,"crypto\\ec\\ecx_meth.c");
      if (_Dst == (void *)0x0) {
        ERR_put_error(0x10,0x10a,0x41,"crypto\\ec\\ecx_meth.c",0x47,uVar3);
        return 0;
      }
      _guard_xfg_dispatch_icall_nop(_Dst,param_2,(longlong)param_3);
      EVP_PKEY_assign(param_1,iVar1,_Dst);
      return 1;
    }
  }
  ERR_put_error(0x10,0x10a,0x66,"crypto\\ec\\ecx_meth.c",0x40,0x143d5957b);
  return 0;
}



// FUNCTION 143d59670 ecx_get_priv_key body=232 status=ok
// SIG undefined ecx_get_priv_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 ecx_get_priv_key(longlong param_1,void *param_2,ulonglong *param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  size_t _Size;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (param_2 == (void *)0x0) {
    iVar1 = **(int **)(param_1 + 0x10);
    if ((iVar1 != 0x40a) && (iVar1 != 0x43f)) {
      *param_3 = (ulonglong)(iVar1 != 0x40b) + 0x38;
      return 1;
    }
    *param_3 = 0x20;
    return 1;
  }
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x40) != 0)) {
    iVar1 = **(int **)(param_1 + 0x10);
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      uVar3 = 0x20;
    }
    else {
      uVar3 = (ulonglong)(iVar1 != 0x40b) + 0x38;
    }
    if (uVar3 <= *param_3) {
      if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
        _Size = 0x20;
      }
      else {
        _Size = (ulonglong)(iVar1 != 0x40b) + 0x38;
      }
      *param_3 = _Size;
      _guard_xfg_dispatch_icall_nop(param_2,*(void **)(lVar2 + 0x40),_Size);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143d59760 ecx_get_pub_key body=221 status=ok
// SIG undefined ecx_get_pub_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 ecx_get_pub_key(longlong param_1,void *param_2,ulonglong *param_3)

{
  int iVar1;
  void *_Src;
  ulonglong uVar2;
  size_t _Size;
  
  _Src = *(void **)(param_1 + 0x28);
  if (param_2 == (void *)0x0) {
    iVar1 = **(int **)(param_1 + 0x10);
    if ((iVar1 != 0x40a) && (iVar1 != 0x43f)) {
      *param_3 = (ulonglong)(iVar1 != 0x40b) + 0x38;
      return 1;
    }
    *param_3 = 0x20;
    return 1;
  }
  if (_Src != (void *)0x0) {
    iVar1 = **(int **)(param_1 + 0x10);
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      uVar2 = 0x20;
    }
    else {
      uVar2 = (ulonglong)(iVar1 != 0x40b) + 0x38;
    }
    if (uVar2 <= *param_3) {
      if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
        _Size = 0x20;
      }
      else {
        _Size = (ulonglong)(iVar1 != 0x40b) + 0x38;
      }
      *param_3 = _Size;
      _guard_xfg_dispatch_icall_nop(param_2,_Src,_Size);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143d59850 ecd_item_verify body=145 status=ok
// SIG undefined ecd_item_verify(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte ecd_item_verify(undefined8 param_1)

{
  int iVar1;
  undefined8 in_stack_00000030;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar2;
  int local_18 [2];
  undefined8 local_10;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  local_10 = 0x143d5985c;
  X509_ALGOR_get0(&local_10,local_18,0);
  iVar1 = OBJ_obj2nid(local_10);
  if ((iVar1 - 0x43fU < 2) && (local_18[0] == -1)) {
    iVar1 = EVP_DigestVerifyInit(param_1,0,0,0,in_stack_00000030);
    return -(iVar1 != 0) & 2;
  }
  ERR_put_error(0x10,0x10e,0x66,"crypto\\ec\\ecx_meth.c",CONCAT44(uVar2,0x204));
  return 0;
}



// FUNCTION 143d598f0 ecd_item_sign25519 body=95 status=ok
// SIG undefined ecd_item_sign25519(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ecd_item_sign25519(void)

{
  undefined8 uVar1;
  undefined8 in_R9;
  longlong in_stack_00000028;
  
  uVar1 = OBJ_nid2obj(0x43f);
  X509_ALGOR_set0(in_R9,uVar1,0xffffffff);
  if (in_stack_00000028 != 0) {
    uVar1 = OBJ_nid2obj(0x43f);
    X509_ALGOR_set0(in_stack_00000028,uVar1,0xffffffff);
  }
  return 3;
}



// FUNCTION 143d59950 ecd_sig_info_set25519 body=48 status=ok
// SIG undefined ecd_sig_info_set25519(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ecd_sig_info_set25519(undefined8 param_1)

{
  X509_SIG_INFO_set(param_1,0,0x43f,0x80,2);
  return 1;
}



// FUNCTION 143d59980 ecd_item_sign448 body=95 status=ok
// SIG undefined ecd_item_sign448(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ecd_item_sign448(void)

{
  undefined8 uVar1;
  undefined8 in_R9;
  longlong in_stack_00000028;
  
  uVar1 = OBJ_nid2obj(0x440);
  X509_ALGOR_set0(in_R9,uVar1,0xffffffff);
  if (in_stack_00000028 != 0) {
    uVar1 = OBJ_nid2obj(0x440);
    X509_ALGOR_set0(in_stack_00000028,uVar1,0xffffffff);
  }
  return 3;
}



// FUNCTION 143d599e0 ecd_sig_info_set448 body=50 status=ok
// SIG undefined ecd_sig_info_set448(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ecd_sig_info_set448(undefined8 param_1)

{
  X509_SIG_INFO_set(param_1,0,0x440,0xe0,2);
  return 1;
}



// FUNCTION 143d59a20 pkey_ecx_keygen body=56 status=ok
// SIG undefined pkey_ecx_keygen(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void pkey_ecx_keygen(undefined8 *param_1,undefined8 param_2)

{
  ecx_key_op(param_2,*(undefined4 *)*param_1,0,0,0,2,0x143d59a2a);
  return;
}



// FUNCTION 143d59a60 pkey_ecx_derive25519 body=177 status=ok
// SIG undefined pkey_ecx_derive25519(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_ecx_derive25519(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if ((*(longlong *)(param_1 + 0x10) == 0) || (*(longlong *)(param_1 + 0x18) == 0)) {
    uVar4 = 0x298;
    uVar3 = 0x8c;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28);
    if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x40) == 0)) {
      uVar4 = 0x29e;
      uVar3 = 0x7b;
    }
    else {
      if (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x28) != 0) {
        if ((param_2 != 0) && (iVar2 = X25519(param_2), iVar2 == 0)) {
          return 0;
        }
        *param_3 = 0x20;
        return 1;
      }
      uVar4 = 0x2a2;
      uVar3 = 0x85;
    }
  }
  ERR_put_error(0x10,0x116,uVar3,"crypto\\ec\\ecx_meth.c",uVar4,0x143d59a6c);
  return 0;
}



// FUNCTION 143d59b20 pkey_ecx_derive448 body=177 status=ok
// SIG undefined pkey_ecx_derive448(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_ecx_derive448(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if ((*(longlong *)(param_1 + 0x10) == 0) || (*(longlong *)(param_1 + 0x18) == 0)) {
    uVar4 = 0x298;
    uVar3 = 0x8c;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28);
    if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x40) == 0)) {
      uVar4 = 0x29e;
      uVar3 = 0x7b;
    }
    else {
      if (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x28) != 0) {
        if ((param_2 != 0) && (iVar2 = X448(param_2), iVar2 == 0)) {
          return 0;
        }
        *param_3 = 0x38;
        return 1;
      }
      uVar4 = 0x2a2;
      uVar3 = 0x85;
    }
  }
  ERR_put_error(0x10,0x116,uVar3,"crypto\\ec\\ecx_meth.c",uVar4,0x143d59b2c);
  return 0;
}



// FUNCTION 143d59c00 pkey_ecd_digestsign25519 body=167 status=ok
// SIG undefined pkey_ecd_digestsign25519(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
pkey_ecd_digestsign25519
          (undefined8 param_1,longlong param_2,ulonglong *param_3,undefined8 param_4,
          undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar4 = 0x143d59c15;
  lVar2 = USignificanceManager::GetWorld();
  lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x28);
  if (param_2 != 0) {
    if (*param_3 < 0x40) {
      ERR_put_error(0x10,0x114,100,"crypto\\ec\\ecx_meth.c",CONCAT44(uVar3,0x2ec));
    }
    else {
      iVar1 = ED25519_sign(param_2,param_4,param_5,lVar2,*(undefined8 *)(lVar2 + 0x40),uVar4);
      if (iVar1 != 0) goto LAB_143d59c8b;
    }
    return 0;
  }
LAB_143d59c8b:
  *param_3 = 0x40;
  return 1;
}



// FUNCTION 143d59cb0 pkey_ecd_digestsign448 body=179 status=ok
// SIG undefined pkey_ecd_digestsign448(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
pkey_ecd_digestsign448
          (undefined8 param_1,longlong param_2,ulonglong *param_3,undefined8 param_4,
          undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar4 = 0x143d59cc5;
  lVar2 = USignificanceManager::GetWorld();
  lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x28);
  if (param_2 != 0) {
    if (*param_3 < 0x72) {
      ERR_put_error(0x10,0x115,100,"crypto\\ec\\ecx_meth.c",CONCAT44(uVar3,0x301));
    }
    else {
      iVar1 = ED448_sign(param_2,param_4,param_5,lVar2,*(undefined8 *)(lVar2 + 0x40),0,0,uVar4);
      if (iVar1 != 0) goto LAB_143d59d47;
    }
    return 0;
  }
LAB_143d59d47:
  *param_3 = 0x72;
  return 1;
}



// FUNCTION 143d59d70 pkey_ecd_digestverify25519 body=101 status=ok
// SIG undefined pkey_ecd_digestverify25519(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
pkey_ecd_digestverify25519
          (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = USignificanceManager::GetWorld();
  if (param_3 != 0x40) {
    return 0;
  }
  uVar2 = ED25519_verify(param_4,param_5,param_2,*(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 0x28)
                        );
  return uVar2;
}



// FUNCTION 143d59de0 pkey_ecd_digestverify448 body=114 status=ok
// SIG undefined pkey_ecd_digestverify448(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
pkey_ecd_digestverify448
          (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = USignificanceManager::GetWorld();
  if (param_3 != 0x72) {
    return 0;
  }
  uVar2 = ED448_verify(param_4,param_5,param_2,*(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 0x28),0
                       ,0);
  return uVar2;
}



// FUNCTION 143d59e60 pkey_ecd_ctrl body=107 status=ok
// SIG undefined pkey_ecd_ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_ecd_ctrl(undefined8 param_1,int param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143d59e6c;
  if (param_2 == 1) {
    if (param_4 != 0) {
      lVar1 = EVP_md_null();
      if (param_4 != lVar1) {
        ERR_put_error(0x10,0x10f,0x8a,"crypto\\ec\\ecx_meth.c",0x32b,uVar2);
        return 0;
      }
    }
  }
  else if (param_2 != 7) {
    return 0xfffffffe;
  }
  return 1;
}



// FUNCTION 143d59ed0 ecx_key_op body=720 status=ok
// SIG undefined ecx_key_op(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ecx_key_op(undefined8 param_1,int param_2,longlong param_3,void *param_4,int param_5,int param_6)

{
  void *_Dst;
  byte *_Dst_00;
  size_t sVar1;
  size_t _Size;
  int iVar2;
  undefined4 uVar3;
  int local_28 [2];
  undefined8 uStack_20;
  
  uStack_20 = 0x143d59eef;
  iVar2 = 0x20;
  _Size = 0x20;
  if (param_6 != 2) {
    if ((param_3 != 0) && (X509_ALGOR_get0(0,local_28,0,param_3), local_28[0] != -1)) {
      uVar3 = 0x3a;
      goto LAB_143d59f38;
    }
    if (param_4 != (void *)0x0) {
      if ((param_2 != 0x40a) && (param_2 != 0x43f)) {
        iVar2 = (param_2 != 0x40b) + 0x38;
      }
      if (param_5 == iVar2) goto LAB_143d59f8f;
    }
    uVar3 = 0x40;
LAB_143d59f38:
    ERR_put_error(0x10,0x10a,0x66,"crypto\\ec\\ecx_meth.c",uVar3);
    return 0;
  }
LAB_143d59f8f:
  _Dst = (void *)CRYPTO_zalloc(0x48,"crypto\\ec\\ecx_meth.c");
  if (_Dst == (void *)0x0) {
    ERR_put_error(0x10,0x10a,0x41,"crypto\\ec\\ecx_meth.c",0x47);
    return 0;
  }
  if (param_6 == 0) {
    _guard_xfg_dispatch_icall_nop(_Dst,param_4,(longlong)param_5);
  }
  else {
    sVar1 = _Size;
    if ((param_2 != 0x40a) && (param_2 != 0x43f)) {
      sVar1 = (ulonglong)(param_2 != 0x40b) + 0x38;
    }
    _Dst_00 = (byte *)CRYPTO_secure_malloc(sVar1,"crypto\\ec\\ecx_meth.c",0x4f);
    *(byte **)((longlong)_Dst + 0x40) = _Dst_00;
    if (_Dst_00 == (byte *)0x0) {
      ERR_put_error(0x10,0x10a,0x41,"crypto\\ec\\ecx_meth.c",0x51);
LAB_143d5a0b1:
      CRYPTO_free(_Dst,"crypto\\ec\\ecx_meth.c",0x78);
      return 0;
    }
    if (param_6 == 2) {
      if ((param_2 != 0x40a) && (param_2 != 0x43f)) {
        _Size = (size_t)((param_2 != 0x40b) + 0x38);
      }
      iVar2 = RAND_priv_bytes(_Dst_00,_Size);
      if (iVar2 < 1) {
        CRYPTO_secure_free(_Dst_00,"crypto\\ec\\ecx_meth.c",0x56);
        *(undefined8 *)((longlong)_Dst + 0x40) = 0;
        goto LAB_143d5a0b1;
      }
      if (param_2 == 0x40a) {
        *_Dst_00 = *_Dst_00 & 0xf8;
        _Dst_00[0x1f] = _Dst_00[0x1f] & 0x3f;
        _Dst_00[0x1f] = _Dst_00[0x1f] | 0x40;
      }
      else if (param_2 == 0x40b) {
        *_Dst_00 = *_Dst_00 & 0xfc;
        _Dst_00[0x37] = _Dst_00[0x37] | 0x80;
      }
    }
    else {
      if ((param_2 != 0x40a) && (param_2 != 0x43f)) {
        _Size = (ulonglong)(param_2 != 0x40b) + 0x38;
      }
      _guard_xfg_dispatch_icall_nop(_Dst_00,param_4,_Size);
    }
    if (param_2 == 0x40a) {
      X25519_public_from_private(_Dst,_Dst_00);
    }
    else if (param_2 == 0x40b) {
      X448_public_from_private(_Dst,_Dst_00);
    }
    else if (param_2 == 0x43f) {
      ED25519_public_from_private(_Dst,_Dst_00);
    }
    else if (param_2 == 0x440) {
      ED448_public_from_private(_Dst,_Dst_00);
    }
  }
  EVP_PKEY_assign(param_1,param_2,_Dst);
  return 1;
}



// FUNCTION 143d5a1a0 ecx_key_print body=444 status=ok
// SIG undefined ecx_key_print(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ecx_key_print(undefined8 param_1,longlong param_2,int param_3,undefined8 param_4,int param_5)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  char cVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143d5a1c0;
  lVar1 = *(longlong *)(param_2 + 0x28);
  uVar3 = OBJ_nid2ln(**(undefined4 **)(param_2 + 0x10));
  if (param_5 == 1) {
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x40) != 0)) {
      iVar2 = BIO_printf(param_1,"%*s%s Private-Key:\n",param_3,&DAT_143f3f584,uVar3,uVar6);
      if (iVar2 < 1) {
        return 0;
      }
      iVar2 = BIO_printf(param_1,"%*spriv:\n",param_3,&DAT_143f3f584,uVar3,uVar6);
      if (iVar2 < 1) {
        return 0;
      }
      iVar2 = **(int **)(param_2 + 0x10);
      if ((iVar2 == 0x40a) || (iVar2 == 0x43f)) {
        cVar5 = ' ';
      }
      else {
        cVar5 = (iVar2 != 0x40b) + '8';
      }
      iVar2 = ASN1_buf_print(param_1,*(undefined8 *)(lVar1 + 0x40),cVar5,param_3 + 4);
      if (iVar2 == 0) {
        return 0;
      }
LAB_143d5a2f1:
      iVar2 = BIO_printf(param_1,"%*spub:\n",param_3,&DAT_143f3f584,uVar3,uVar6);
      if (iVar2 < 1) {
        return 0;
      }
      iVar2 = **(int **)(param_2 + 0x10);
      if ((iVar2 == 0x40a) || (iVar2 == 0x43f)) {
        cVar5 = ' ';
      }
      else {
        cVar5 = (iVar2 != 0x40b) + '8';
      }
      iVar2 = ASN1_buf_print(param_1,lVar1,cVar5,param_3 + 4);
      if (iVar2 != 0) {
        return 1;
      }
      return 0;
    }
    pcVar4 = "%*s<INVALID PRIVATE KEY>\n";
  }
  else {
    if (lVar1 != 0) {
      iVar2 = BIO_printf(param_1,"%*s%s Public-Key:\n",param_3,&DAT_143f3f584,uVar3,uVar6);
      if (iVar2 < 1) {
        return 0;
      }
      goto LAB_143d5a2f1;
    }
    pcVar4 = "%*s<INVALID PUBLIC KEY>\n";
  }
  iVar2 = BIO_printf(param_1,pcVar4,param_3,&DAT_143f3f584);
  if (iVar2 < 1) {
    return 0;
  }
  return 1;
}



// FUNCTION 143d5a360 poly1305_key_free body=64 status=ok
// SIG undefined poly1305_key_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void poly1305_key_free(void)

{
  int *piVar1;
  
  piVar1 = (int *)FNiagaraEmitterHandle::GetInstance();
  if (piVar1 != (int *)0x0) {
    if (*(longlong *)(piVar1 + 2) != 0) {
      FUN_14004ff40(*(longlong *)(piVar1 + 2),(longlong)*piVar1);
    }
    ASN1_BIT_STRING_free(piVar1);
    return;
  }
  return;
}



// FUNCTION 143d5a3b0 poly1305_pkey_public_cmp body=62 status=ok
// SIG undefined poly1305_pkey_public_cmp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void poly1305_pkey_public_cmp(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FNiagaraEmitterHandle::GetInstance(param_2);
  uVar2 = FNiagaraEmitterHandle::GetInstance(param_1);
  ASN1_OCTET_STRING_cmp(uVar2,uVar1);
  return;
}



// FUNCTION 143d5a3f0 poly1305_set_priv_key body=127 status=ok
// SIG undefined poly1305_set_priv_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 poly1305_set_priv_key(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x28) == 0) && (param_3 == 0x20)) {
    lVar2 = ASN1_OCTET_STRING_new();
    if (lVar2 != 0) {
      iVar1 = ASN1_OCTET_STRING_set(lVar2,param_2,0x20);
      if (iVar1 != 0) {
        *(longlong *)(param_1 + 0x28) = lVar2;
        return 1;
      }
      ASN1_BIT_STRING_free(lVar2);
    }
  }
  return 0;
}



// FUNCTION 143d5a470 poly1305_get_priv_key body=160 status=ok
// SIG undefined poly1305_get_priv_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 poly1305_get_priv_key(longlong param_1,void *param_2,ulonglong *param_3)

{
  longlong lVar1;
  int iVar2;
  void *_Src;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (param_2 == (void *)0x0) {
    *param_3 = 0x20;
    return 1;
  }
  if ((lVar1 != 0) && (0x1f < *param_3)) {
    iVar2 = FRollingHash::GetWindowSize(lVar1);
    _Src = (void *)TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
                   ::GetBoundProgramCounterForTimerManager(lVar1);
    _guard_xfg_dispatch_icall_nop(param_2,_Src,(longlong)iVar2);
    *param_3 = 0x20;
    return 1;
  }
  return 0;
}



// FUNCTION 143d5a530 hmac_set_priv_key body=118 status=ok
// SIG undefined hmac_set_priv_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 hmac_set_priv_key(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x28) == 0) && (lVar2 = ASN1_OCTET_STRING_new(), lVar2 != 0)) {
    iVar1 = ASN1_OCTET_STRING_set(lVar2,param_2,param_3);
    if (iVar1 != 0) {
      *(longlong *)(param_1 + 0x28) = lVar2;
      return 1;
    }
    ASN1_BIT_STRING_free(lVar2);
  }
  return 0;
}



// FUNCTION 143d5a5b0 hmac_get_priv_key body=178 status=ok
// SIG undefined hmac_get_priv_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 hmac_get_priv_key(longlong param_1,void *param_2,ulonglong *param_3)

{
  longlong lVar1;
  int iVar2;
  void *_Src;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (param_2 == (void *)0x0) {
    iVar2 = FRollingHash::GetWindowSize(lVar1);
    *param_3 = (longlong)iVar2;
    return 1;
  }
  if (lVar1 != 0) {
    iVar2 = FRollingHash::GetWindowSize(lVar1);
    if ((ulonglong)(longlong)iVar2 <= *param_3) {
      iVar2 = FRollingHash::GetWindowSize(lVar1);
      *param_3 = (longlong)iVar2;
      _Src = (void *)TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
                     ::GetBoundProgramCounterForTimerManager(lVar1);
      _guard_xfg_dispatch_icall_nop(param_2,_Src,(longlong)iVar2);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143d5a670 rsa_pub_print body=25 status=ok
// SIG undefined rsa_pub_print(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void rsa_pub_print(void)

{
  pkey_rsa_print();
  return;
}



// FUNCTION 143d5a690 rsa_priv_print body=26 status=ok
// SIG undefined rsa_priv_print(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void rsa_priv_print(void)

{
  pkey_rsa_print();
  return;
}



// FUNCTION 143d5a6b0 rsa_sig_print body=184 status=ok
// SIG undefined rsa_sig_print(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 rsa_sig_print(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = OBJ_obj2nid(*param_2);
  if (iVar1 == 0x390) {
    uVar2 = rsa_pss_decode(param_2);
    iVar1 = rsa_pss_param_print(param_1,0,uVar2,param_4);
    RSA_PSS_PARAMS_free(uVar2);
    if (iVar1 == 0) {
      return 0;
    }
    if (param_3 == 0) {
      return 1;
    }
  }
  else if (param_3 == 0) {
    iVar1 = BIO_puts(param_1,&DAT_143fc48d8);
    if (iVar1 < 1) {
      return 0;
    }
    return 1;
  }
  uVar2 = X509_signature_dump(param_1,param_3,param_4);
  return uVar2;
}



// FUNCTION 143d5a770 FUN_143d5a770 body=778 status=ok
// SIG undefined FUN_143d5a770(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_143d5a770(longlong param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int local_res10 [2];
  undefined8 **ppuVar6;
  longlong local_18;
  undefined8 *local_10;
  undefined4 uVar7;
  
  local_10 = (undefined8 *)0x143d5a785;
  local_18 = 0;
  switch(param_2) {
  case 1:
    if (param_3 != 0) {
      return 1;
    }
    PKCS7_SIGNER_INFO_get0_algs(param_4,0,0,&local_18);
    goto LAB_143d5a7f7;
  case 2:
    if (**(int **)(param_1 + 0x10) == 0x390) {
      return 0xfffffffe;
    }
    if (param_3 != 0) {
      return 1;
    }
    FUN_143d89060(param_4,&local_18);
LAB_143d5a7f7:
    if (local_18 == 0) {
      return 1;
    }
    uVar4 = OBJ_nid2obj(6);
    X509_ALGOR_set0(local_18,uVar4,5);
    return 1;
  case 3:
    *param_4 = 0x2a0;
    return 1;
  case 5:
    if (param_3 == 0) {
      local_res10[0] = 1;
      lVar2 = AAIController::GetPerceptionComponent(param_4);
      CMS_SignerInfo_get0_algs(param_4,0,0,0,&local_10);
      if ((lVar2 != 0) &&
         (iVar1 = RSA_pkey_ctx_ctrl(lVar2,0xffffffff,0x1006,0,local_res10), iVar1 < 1)) {
        return 0;
      }
      if (local_res10[0] == 1) {
        uVar4 = OBJ_nid2obj(6);
        lVar2 = 0;
        uVar5 = 5;
      }
      else {
        if (local_res10[0] != 6) {
          return 0;
        }
        lVar2 = rsa_ctx_to_pss_string(lVar2);
        if (lVar2 == 0) {
          return 0;
        }
        uVar4 = OBJ_nid2obj(0x390);
        uVar5 = 0x10;
      }
      X509_ALGOR_set0(local_10,uVar4,uVar5,lVar2);
    }
    else {
      if (param_3 != 1) {
        return 1;
      }
      puVar3 = (undefined8 *)AAIController::GetPerceptionComponent(param_4);
      ppuVar6 = &local_10;
      CMS_SignerInfo_get0_algs(param_4,0,0,0,ppuVar6);
      uVar7 = (undefined4)((ulonglong)ppuVar6 >> 0x20);
      iVar1 = OBJ_obj2nid(*local_10);
      if (iVar1 == 0x390) {
        uVar4 = rsa_pss_to_ctx(0,puVar3,local_10,0);
        return uVar4;
      }
      if (*(int *)*puVar3 == 0x390) {
        ERR_put_error(4,0x9e,0x90,"crypto\\rsa\\rsa_ameth.c",CONCAT44(uVar7,0x2e0));
        return 0;
      }
      if (iVar1 != 6) {
        iVar1 = OBJ_find_sigid_algs(iVar1,0,local_res10);
        if (iVar1 == 0) {
          return 0;
        }
        if (local_res10[0] != 6) {
          return 0;
        }
        return 1;
      }
    }
    return 1;
  case 7:
    if (**(int **)(param_1 + 0x10) != 0x390) {
      if (param_3 == 0) {
        uVar4 = rsa_cms_encrypt(param_4);
        return uVar4;
      }
      if (param_3 != 1) {
        return 1;
      }
      uVar4 = rsa_cms_decrypt(param_4);
      return uVar4;
    }
    break;
  case 8:
    if (**(int **)(param_1 + 0x10) != 0x390) {
      *param_4 = 0;
      return 1;
    }
  }
  return 0xfffffffe;
}



// FUNCTION 143d5aaa0 rsa_item_verify body=136 status=ok
// SIG undefined rsa_item_verify(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
rsa_item_verify(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
               undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143d5aab0;
  iVar1 = OBJ_obj2nid(*param_4);
  if (iVar1 != 0x390) {
    ERR_put_error(4,0x94,0x9b,"crypto\\rsa\\rsa_ameth.c",0x2f9,uVar2);
    return 0xffffffff;
  }
  iVar1 = rsa_pss_to_ctx(param_1,0,param_4,param_6);
  uVar2 = 0xffffffff;
  if (0 < iVar1) {
    uVar2 = 2;
  }
  return uVar2;
}



// FUNCTION 143d5ab30 rsa_item_sign body=267 status=ok
// SIG undefined rsa_item_sign(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 rsa_item_sign(void)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 in_R9;
  longlong in_stack_00000028;
  int local_18 [2];
  undefined8 uStack_10;
  
  uStack_10 = 0x143d5ab40;
  uVar2 = USignificanceManager::GetWorld();
  iVar1 = RSA_pkey_ctx_ctrl(uVar2,0xffffffff,0x1006,0,local_18);
  if (0 < iVar1) {
    if (local_18[0] != 6) {
      return 2;
    }
    lVar3 = rsa_ctx_to_pss_string(uVar2);
    if (lVar3 != 0) {
      if (in_stack_00000028 != 0) {
        lVar4 = ASN1_STRING_dup(lVar3);
        if (lVar4 == 0) {
          ASN1_STRING_free(lVar3);
          return 0;
        }
        uVar2 = OBJ_nid2obj(0x390);
        X509_ALGOR_set0(in_stack_00000028,uVar2,0x10,lVar4);
      }
      uVar2 = OBJ_nid2obj(0x390);
      X509_ALGOR_set0(in_R9,uVar2,0x10,lVar3);
      return 3;
    }
  }
  return 0;
}



// FUNCTION 143d5ac40 rsa_sig_info_set body=383 status=ok
// SIG undefined rsa_sig_info_set(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 rsa_sig_info_set(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0;
  uVar7 = 0;
  iVar1 = OBJ_obj2nid(*param_2);
  if (iVar1 != 0x390) {
    return 0;
  }
  puVar4 = (undefined8 *)rsa_pss_decode(param_2);
  if (((puVar4 != (undefined8 *)0x0) && (lVar5 = rsa_algor_to_md(*puVar4), lVar5 != 0)) &&
     (lVar6 = rsa_algor_to_md(puVar4[4]), lVar6 != 0)) {
    if (puVar4[2] == 0) {
      iVar1 = 0x14;
    }
    else {
      iVar1 = ASN1_INTEGER_get();
      if (iVar1 < 0) {
        ERR_put_error(4,0x97,0x96,"crypto\\rsa\\rsa_ameth.c",0x2c0);
        goto LAB_143d5adac;
      }
    }
    if ((puVar4[3] == 0) || (iVar2 = ASN1_INTEGER_get(), iVar2 == 1)) {
      iVar2 = FRollingHash::GetWindowSize(lVar5);
      if (((iVar2 - 0x2a0U < 3) && (iVar3 = FRollingHash::GetWindowSize(lVar6), iVar2 == iVar3)) &&
         (iVar3 = EVP_MD_size(lVar5), iVar1 == iVar3)) {
        uVar7 = 2;
      }
      iVar1 = EVP_MD_size(lVar5);
      X509_SIG_INFO_set(param_1,iVar2,0x390,iVar1 << 2,uVar7);
      uVar8 = 1;
    }
    else {
      ERR_put_error(4,0x97,0x8b,"crypto\\rsa\\rsa_ameth.c",0x2cc);
    }
  }
LAB_143d5adac:
  RSA_PSS_PARAMS_free(puVar4);
  return uVar8;
}



// FUNCTION 143d5adc0 rsa_pkey_check body=28 status=ok
// SIG undefined rsa_pkey_check(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void rsa_pkey_check(longlong param_1)

{
  RSA_check_key_ex(*(undefined8 *)(param_1 + 0x28),0);
  return;
}



// FUNCTION 143d5ade0 rsa_pub_encode body=229 status=ok
// SIG undefined rsa_pub_encode(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 rsa_pub_encode(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  undefined4 uVar5;
  
  uVar5 = 1;
  lVar2 = *(longlong *)(param_2 + 0x28);
  local_res10 = 0;
  local_res18[0] = 0;
  if (**(int **)(param_2 + 0x10) == 6) {
    uVar4 = 5;
  }
  else if (*(longlong *)(lVar2 + 0x60) == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar5 = 1;
    uVar3 = RSA_PSS_PARAMS_it();
    lVar2 = ASN1_item_pack(*(undefined8 *)(lVar2 + 0x60),uVar3,local_res18);
    if (lVar2 == 0) {
      return 0;
    }
    uVar4 = 0x10;
  }
  iVar1 = i2d_RSAPublicKey(*(undefined8 *)(param_2 + 0x28),&local_res10);
  if (0 < iVar1) {
    uVar3 = OBJ_nid2obj(**(undefined4 **)(param_2 + 0x10));
    iVar1 = X509_PUBKEY_set0_param
                      (param_1,uVar3,uVar4,local_res18[0],local_res10,CONCAT44(uVar5,iVar1));
    if (iVar1 != 0) {
      return 1;
    }
    CRYPTO_free(local_res10,"crypto\\rsa\\rsa_ameth.c",0x5b);
  }
  return 0;
}



// FUNCTION 143d5aed0 rsa_pub_decode body=202 status=ok
// SIG undefined rsa_pub_decode(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 rsa_pub_decode(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  undefined4 uVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143d5aedc;
  uVar2 = X509_PUBKEY_get0_param(0,local_res20,local_res18,&local_18,param_2);
  uVar4 = (undefined4)((ulonglong)param_2 >> 0x20);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  lVar3 = d2i_RSAPublicKey(0,local_res20,local_res18[0]);
  if (lVar3 == 0) {
    ERR_put_error(4,0x8b,4,"crypto\\rsa\\rsa_ameth.c",CONCAT44(uVar4,0x69));
    return 0;
  }
  iVar1 = rsa_param_decode(lVar3,local_18);
  if (iVar1 == 0) {
    RSA_free(lVar3);
    return 0;
  }
  EVP_PKEY_assign(param_1,**(undefined4 **)(param_1 + 0x10),lVar3);
  return 1;
}



// FUNCTION 143d5afa0 rsa_pub_cmp body=104 status=ok
// SIG undefined rsa_pub_cmp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 rsa_pub_cmp(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = BN_cmp(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x18),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x18));
  if (iVar1 == 0) {
    iVar1 = BN_cmp(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x20),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x20));
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143d5b010 old_rsa_priv_decode body=99 status=ok
// SIG undefined old_rsa_priv_decode(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 old_rsa_priv_decode(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143d5b01c;
  lVar1 = d2i_RSAPrivateKey(0);
  if (lVar1 == 0) {
    ERR_put_error(4,0x93,4,"crypto\\rsa\\rsa_ameth.c",0x82,uVar2);
    return 0;
  }
  EVP_PKEY_assign(param_1,**(undefined4 **)(param_1 + 0x10),lVar1);
  return 1;
}



// FUNCTION 143d5b080 FUN_143d5b080 body=26 status=ok
// SIG undefined FUN_143d5b080(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d5b080(longlong param_1)

{
  i2d_RSAPrivateKey(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 143d5b0a0 rsa_priv_encode body=281 status=ok
// SIG undefined rsa_priv_encode(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 rsa_priv_encode(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  undefined8 uVar5;
  
  uVar5 = 0x143d5b0ae;
  lVar2 = *(longlong *)(param_2 + 0x28);
  local_res18[0] = 0;
  local_res10 = 0;
  if (**(int **)(param_2 + 0x10) == 6) {
    uVar4 = 5;
  }
  else if (*(longlong *)(lVar2 + 0x60) == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar3 = RSA_PSS_PARAMS_it();
    lVar2 = ASN1_item_pack(*(undefined8 *)(lVar2 + 0x60),uVar3,&local_res10);
    if (lVar2 == 0) {
      return 0;
    }
    uVar4 = 0x10;
  }
  iVar1 = i2d_RSAPrivateKey(*(undefined8 *)(param_2 + 0x28),local_res18);
  if (iVar1 < 1) {
    uVar5 = 0x9a;
  }
  else {
    uVar3 = OBJ_nid2obj(**(undefined4 **)(param_2 + 0x10));
    iVar1 = PKCS8_pkey_set0(param_1,uVar3,0,uVar4,local_res10,local_res18[0],iVar1,uVar5);
    if (iVar1 != 0) {
      return 1;
    }
    uVar5 = 0xa1;
  }
  ERR_put_error(4,0x8a,0x41,"crypto\\rsa\\rsa_ameth.c",uVar5);
  ASN1_STRING_free(local_res10);
  return 0;
}



// FUNCTION 143d5b1c0 rsa_priv_decode body=202 status=ok
// SIG undefined rsa_priv_decode(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 rsa_priv_decode(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  undefined4 uVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143d5b1cc;
  uVar2 = PKCS8_pkey_get0(0,local_res20,local_res18,&local_18,param_2);
  uVar4 = (undefined4)((ulonglong)param_2 >> 0x20);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  lVar3 = d2i_RSAPrivateKey(0,local_res20,local_res18[0]);
  if (lVar3 == 0) {
    ERR_put_error(4,0x96,4,"crypto\\rsa\\rsa_ameth.c",CONCAT44(uVar4,0xb4));
    return 0;
  }
  iVar1 = rsa_param_decode(lVar3,local_18);
  if (iVar1 == 0) {
    RSA_free(lVar3);
    return 0;
  }
  EVP_PKEY_assign(param_1,**(undefined4 **)(param_1 + 0x10),lVar3);
  return 1;
}



// FUNCTION 143d5b290 FUN_143d5b290 body=26 status=ok
// SIG undefined FUN_143d5b290(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d5b290(longlong param_1)

{
  RSA_size(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 143d5b2b0 rsa_bits body=30 status=ok
// SIG undefined rsa_bits(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void rsa_bits(longlong param_1)

{
  BN_num_bits(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x18));
  return;
}



// FUNCTION 143d5b2d0 FUN_143d5b2d0 body=26 status=ok
// SIG undefined FUN_143d5b2d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d5b2d0(longlong param_1)

{
  RSA_security_bits(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 143d5b2f0 FUN_143d5b2f0 body=26 status=ok
// SIG undefined FUN_143d5b2f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d5b2f0(longlong param_1)

{
  RSA_free(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 143d5b310 pkey_rsa_print body=879 status=ok
// SIG undefined pkey_rsa_print(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 pkey_rsa_print(undefined8 param_1,longlong param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong *puVar7;
  char *pcVar8;
  char *pcVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  uVar13 = 0;
  uVar2 = uVar13;
  if (*(longlong *)(lVar1 + 0x18) != 0) {
    uVar2 = BN_num_bits();
  }
  iVar3 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 0x58));
  iVar4 = BIO_indent(param_1,param_3,0x80);
  if (iVar4 != 0) {
    puVar12 = &DAT_145d473d4;
    if (**(int **)(param_2 + 0x10) == 0x390) {
      puVar12 = &DAT_145d4b7f8;
    }
    iVar4 = BIO_printf(param_1,&DAT_145d899c8,puVar12);
    if (0 < iVar4) {
      if ((param_4 == 0) || (*(longlong *)(lVar1 + 0x28) == 0)) {
        iVar3 = BIO_printf(param_1,"Public-Key: (%d bit)\n",uVar2);
        if (iVar3 < 1) {
          return 0;
        }
        pcVar8 = "Modulus:";
        pcVar9 = "Exponent:";
      }
      else {
        iVar4 = 2;
        if (0 < iVar3) {
          iVar4 = iVar3 + 2;
        }
        iVar3 = BIO_printf(param_1,"Private-Key: (%d bit, %d primes)\n",uVar2,iVar4);
        if (iVar3 < 1) {
          return 0;
        }
        pcVar8 = "modulus:";
        pcVar9 = "publicExponent:";
      }
      iVar3 = ASN1_bn_print(param_1,pcVar8,*(undefined8 *)(lVar1 + 0x18),0,param_3);
      uVar13 = 0;
      if ((iVar3 != 0) &&
         (iVar3 = ASN1_bn_print(param_1,pcVar9,*(undefined8 *)(lVar1 + 0x20),0,param_3), iVar3 != 0)
         ) {
        if (param_4 != 0) {
          iVar3 = ASN1_bn_print(param_1,"privateExponent:",*(undefined8 *)(lVar1 + 0x28),0,param_3);
          if (iVar3 == 0) {
            return 0;
          }
          iVar3 = ASN1_bn_print(param_1,"prime1:",*(undefined8 *)(lVar1 + 0x30),0,param_3);
          if (iVar3 == 0) {
            return 0;
          }
          iVar3 = ASN1_bn_print(param_1,"prime2:",*(undefined8 *)(lVar1 + 0x38),0,param_3);
          if (iVar3 == 0) {
            return 0;
          }
          iVar3 = ASN1_bn_print(param_1,"exponent1:",*(undefined8 *)(lVar1 + 0x40),0,param_3);
          if (iVar3 == 0) {
            return 0;
          }
          iVar3 = ASN1_bn_print(param_1,"exponent2:",*(undefined8 *)(lVar1 + 0x48),0,param_3);
          if (iVar3 == 0) {
            return 0;
          }
          iVar3 = ASN1_bn_print(param_1,"coefficient:",*(undefined8 *)(lVar1 + 0x50),0,param_3);
          if (iVar3 == 0) {
            return 0;
          }
          iVar4 = 0;
          iVar3 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 0x58));
          if (0 < iVar3) {
            iVar3 = 3;
            do {
              uVar10 = 0;
              puVar7 = (ulonglong *)OPENSSL_sk_value(*(undefined8 *)(lVar1 + 0x58),iVar4);
              uVar11 = uVar10;
              do {
                iVar5 = BIO_indent(param_1,param_3,0x80);
                if (iVar5 == 0) {
                  return 0;
                }
                iVar5 = (int)uVar10;
                if (iVar5 == 0) {
                  iVar6 = BIO_printf(param_1,"prime%d:",iVar3);
                  if (iVar6 < 1) {
                    return 0;
                  }
                  uVar11 = *puVar7;
                }
                else if (iVar5 == 1) {
                  iVar6 = BIO_printf(param_1,"exponent%d:",iVar3);
                  if (iVar6 < 1) {
                    return 0;
                  }
                  uVar11 = puVar7[1];
                }
                else if (iVar5 == 2) {
                  iVar6 = BIO_printf(param_1,"coefficient%d:",iVar3);
                  if (iVar6 < 1) {
                    return 0;
                  }
                  uVar11 = puVar7[2];
                }
                iVar6 = ASN1_bn_print(param_1,&DAT_143f3f584,uVar11,0,param_3);
                if (iVar6 == 0) {
                  return 0;
                }
                uVar10 = (ulonglong)(iVar5 + 1U);
              } while ((int)(iVar5 + 1U) < 3);
              iVar4 = iVar4 + 1;
              iVar3 = iVar3 + 1;
              iVar5 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 0x58));
            } while (iVar4 < iVar5);
          }
        }
        uVar13 = 0;
        if ((**(int **)(param_2 + 0x10) != 0x390) ||
           (iVar3 = rsa_pss_param_print(param_1,1,*(undefined8 *)(lVar1 + 0x60),param_3), iVar3 != 0
           )) {
          uVar13 = 1;
        }
      }
    }
  }
  return uVar13;
}



// FUNCTION 143d5b680 rsa_algor_to_md body=108 status=ok
// SIG undefined rsa_algor_to_md(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong rsa_algor_to_md(undefined8 *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    lVar2 = EVP_sha1();
    return lVar2;
  }
  uVar1 = OBJ_obj2nid(*param_1);
  uVar3 = OBJ_nid2sn(uVar1);
  lVar2 = EVP_get_digestbyname(uVar3);
  if (lVar2 == 0) {
    ERR_put_error(4,0x9c,0xa6,"crypto\\rsa\\rsa_ameth.c",0x230);
  }
  return lVar2;
}



// FUNCTION 143d5b6f0 rsa_cms_decrypt body=679 status=ok
// SIG undefined rsa_cms_decrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 rsa_cms_decrypt(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined8 *local_res10;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar14;
  ulonglong uVar13;
  undefined8 uVar15;
  undefined4 uVar9;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar15 = 0x143d5b702;
  uVar8 = 0xffffffff;
  uVar9 = 0xffffffff;
  uVar11 = 0;
  uVar12 = 0;
  lVar4 = CMS_RecipientInfo_get0_pkey_ctx();
  if (lVar4 == 0) {
    return 0;
  }
  iVar3 = CMS_RecipientInfo_ktri_get0_algs(param_1,0,0,&local_res10);
  if (iVar3 == 0) {
    return 0xffffffff;
  }
  iVar3 = OBJ_obj2nid(*local_res10);
  if (iVar3 == 6) {
    return 1;
  }
  if (iVar3 != 0x397) {
    ERR_put_error(4,0x9f,0xa2,"crypto\\rsa\\rsa_ameth.c",CONCAT44(uVar14,0x38c),uVar15);
    return 0xffffffff;
  }
  uVar15 = RSA_OAEP_PARAMS_it();
  puVar5 = (undefined8 *)ASN1_TYPE_unpack_sequence(uVar15,local_res10[1]);
  uVar10 = uVar8;
  if (puVar5 == (undefined8 *)0x0) {
LAB_143d5b809:
    ERR_put_error(4,0x9f,0xa1,"crypto\\rsa\\rsa_ameth.c",CONCAT44(uVar14,0x393));
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)puVar5[1];
    if (puVar1 != (undefined8 *)0x0) {
      iVar3 = OBJ_obj2nid(*puVar1);
      if (iVar3 == 0x38f) {
        uVar15 = X509_ALGOR_it();
        lVar6 = ASN1_TYPE_unpack_sequence(uVar15,puVar1[1]);
      }
      else {
        lVar6 = 0;
      }
      puVar5[3] = lVar6;
      if (lVar6 == 0) {
        RSA_OAEP_PARAMS_free(puVar5);
        goto LAB_143d5b809;
      }
    }
    lVar6 = rsa_algor_to_md(puVar5[3]);
    if ((lVar6 != 0) && (lVar7 = rsa_algor_to_md(*puVar5), lVar7 != 0)) {
      puVar1 = (undefined8 *)puVar5[2];
      uVar10 = uVar9;
      if (puVar1 != (undefined8 *)0x0) {
        iVar3 = OBJ_obj2nid(*puVar1);
        if (iVar3 != 0x3a7) {
          ERR_put_error(4,0x9f,0xa3,"crypto\\rsa\\rsa_ameth.c",CONCAT44(uVar14,0x3a2));
          goto LAB_143d5b82d;
        }
        if (*(int *)puVar1[1] != 4) {
          ERR_put_error(4,0x9f,0xa0,"crypto\\rsa\\rsa_ameth.c",CONCAT44(uVar14,0x3a6));
          goto LAB_143d5b82d;
        }
        lVar2 = *(longlong *)((int *)puVar1[1] + 2);
        uVar11 = *(undefined8 *)(lVar2 + 8);
        *(undefined8 *)(lVar2 + 8) = 0;
        uVar12 = **(undefined4 **)(puVar1[1] + 8);
      }
      uVar13 = 0;
      iVar3 = RSA_pkey_ctx_ctrl(lVar4,0xffffffff,0x1001,4,0);
      if ((((0 < iVar3) &&
           (iVar3 = EVP_PKEY_CTX_ctrl(lVar4,6,0x300,0x1009,uVar13 & 0xffffffff00000000,lVar7),
           0 < iVar3)) && (iVar3 = RSA_pkey_ctx_ctrl(lVar4,0x3f8,0x1005,0,lVar6), 0 < iVar3)) &&
         (iVar3 = EVP_PKEY_CTX_ctrl(lVar4,6,0x300,0x100a,uVar12,uVar11), uVar10 = uVar8, 0 < iVar3))
      {
        uVar10 = 1;
      }
    }
  }
LAB_143d5b82d:
  RSA_OAEP_PARAMS_free(puVar5);
  return uVar10;
}



// FUNCTION 143d5b9a0 rsa_cms_encrypt body=620 status=ok
// SIG undefined rsa_cms_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong rsa_cms_encrypt(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int local_res10 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  int *in_stack_ffffffffffffffb8;
  undefined8 *puVar8;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x143d5b9b2;
  lVar7 = 0;
  lVar6 = 0;
  local_res18 = 0;
  lVar3 = CMS_RecipientInfo_get0_pkey_ctx();
  local_res10[0] = 1;
  iVar1 = CMS_RecipientInfo_ktri_get0_algs(param_1,0,0,&local_res20);
  if (0 < iVar1) {
    if (lVar3 != 0) {
      in_stack_ffffffffffffffb8 = local_res10;
      iVar1 = RSA_pkey_ctx_ctrl(lVar3,0xffffffff,0x1006,0,in_stack_ffffffffffffffb8);
      if (iVar1 < 1) {
        return 0;
      }
    }
    if (local_res10[0] == 1) {
      uVar4 = OBJ_nid2obj(6);
      X509_ALGOR_set0(local_res20,uVar4,5);
      return 1;
    }
    if (local_res10[0] == 4) {
      iVar1 = EVP_PKEY_CTX_ctrl(lVar3,6,0x300,0x100b,
                                (ulonglong)in_stack_ffffffffffffffb8 & 0xffffffff00000000,&local_38)
      ;
      lVar5 = lVar7;
      if (0 < iVar1) {
        puVar8 = &local_30;
        iVar1 = RSA_pkey_ctx_ctrl(lVar3,0x3f8,0x1008,0,puVar8);
        lVar5 = 0;
        if ((((0 < iVar1) &&
             (iVar1 = EVP_PKEY_CTX_ctrl(lVar3,6,0x300,0x100c,(ulonglong)puVar8 & 0xffffffff00000000,
                                        &local_28), -1 < iVar1)) &&
            (lVar5 = FUN_143d1de20(), lVar7 = lVar6, lVar5 != 0)) &&
           ((iVar2 = rsa_md_to_algor(lVar5,local_38), iVar2 != 0 &&
            (iVar2 = rsa_md_to_mgf1(lVar5 + 8,local_30), iVar2 != 0)))) {
          if (0 < iVar1) {
            lVar3 = X509_ALGOR_new();
            *(longlong *)(lVar5 + 0x10) = lVar3;
            if ((lVar3 == 0) || (lVar3 = ASN1_OCTET_STRING_new(), lVar3 == 0)) goto LAB_143d5bbd9;
            iVar1 = ASN1_OCTET_STRING_set(lVar3,local_28,iVar1);
            if (iVar1 == 0) {
              ASN1_BIT_STRING_free(lVar3);
              goto LAB_143d5bbd9;
            }
            uVar4 = OBJ_nid2obj(0x3a7);
            X509_ALGOR_set0(*(undefined8 *)(lVar5 + 0x10),uVar4,4,lVar3);
          }
          uVar4 = RSA_OAEP_PARAMS_it();
          lVar3 = ASN1_item_pack(lVar5,uVar4,&local_res18);
          if (lVar3 != 0) {
            uVar4 = OBJ_nid2obj(0x397);
            X509_ALGOR_set0(local_res20,uVar4,0x10,local_res18);
            local_res18 = 0;
            lVar7 = 1;
          }
        }
      }
LAB_143d5bbd9:
      RSA_OAEP_PARAMS_free(lVar5);
      ASN1_STRING_free(local_res18);
      return lVar7;
    }
  }
  return 0;
}



// FUNCTION 143d5bc10 rsa_ctx_to_pss_string body=425 status=ok
// SIG undefined rsa_ctx_to_pss_string(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 rsa_ctx_to_pss_string(WriteBytesMem *param_1)

{
  byte bVar1;
  int iVar2;
  uchar *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int local_res10 [2];
  longlong local_res18;
  longlong local_res20;
  undefined8 in_stack_ffffffffffffffd8;
  uint uVar7;
  
  uVar7 = (uint)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  puVar3 = AK::WriteBytesMem::Bytes(param_1);
  iVar2 = EVP_PKEY_CTX_ctrl(param_1,0xffffffff,0xf8,0xd,(ulonglong)uVar7 << 0x20,&local_res18);
  if (iVar2 < 1) {
    return 0;
  }
  iVar2 = RSA_pkey_ctx_ctrl(param_1,0x3f8,0x1008,0,&local_res20);
  if (iVar2 < 1) {
    return 0;
  }
  iVar2 = RSA_pkey_ctx_ctrl(param_1,0x18,0x1007,0,local_res10);
  if (iVar2 == 0) {
    return 0;
  }
  if (local_res10[0] == -1) {
    local_res10[0] = EVP_MD_size(local_res18);
  }
  else if (local_res10[0] == -2) {
    iVar2 = EVP_MD_size(local_res18);
    local_res10[0] = EVP_PKEY_size(puVar3);
    local_res10[0] = local_res10[0] + (-2 - iVar2);
    bVar1 = EVP_PKEY_bits(puVar3);
    if ((bVar1 & 7) == 1) {
      local_res10[0] = local_res10[0] + -1;
    }
  }
  iVar2 = local_res10[0];
  lVar4 = RSA_PSS_PARAMS_free();
  if (lVar4 != 0) {
    if (iVar2 != 0x14) {
      lVar5 = ASN1_INTEGER_new();
      *(longlong *)(lVar4 + 0x10) = lVar5;
      if ((lVar5 == 0) || (iVar2 = ASN1_INTEGER_set(lVar5,iVar2), iVar2 == 0)) goto LAB_143d5bda2;
    }
    iVar2 = rsa_md_to_algor(lVar4,local_res18);
    if (iVar2 != 0) {
      lVar5 = local_res18;
      if (local_res20 != 0) {
        lVar5 = local_res20;
      }
      iVar2 = rsa_md_to_mgf1(lVar4 + 8,lVar5);
      if ((iVar2 != 0) && (iVar2 = rsa_md_to_algor(lVar4 + 0x20,lVar5), iVar2 != 0)) {
        uVar6 = RSA_PSS_PARAMS_it();
        uVar6 = ASN1_item_pack(lVar4,uVar6,0);
        RSA_PSS_PARAMS_free(lVar4);
        return uVar6;
      }
    }
  }
LAB_143d5bda2:
  RSA_PSS_PARAMS_free(lVar4);
  return 0;
}



// FUNCTION 143d5bdc0 rsa_md_to_algor body=94 status=ok
// SIG undefined rsa_md_to_algor(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 rsa_md_to_algor(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    iVar1 = FRollingHash::GetWindowSize(param_2);
    if (iVar1 != 0x40) {
      lVar2 = X509_ALGOR_new();
      *param_1 = lVar2;
      if (lVar2 == 0) {
        return 0;
      }
      X509_ALGOR_set_md(lVar2,param_2);
    }
  }
  return 1;
}



// FUNCTION 143d5be20 rsa_md_to_mgf1 body=247 status=ok
// SIG undefined rsa_md_to_mgf1(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 rsa_md_to_mgf1(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_res8;
  
  lVar2 = 0;
  local_res8 = 0;
  *param_1 = 0;
  if (param_2 == 0) {
    return 1;
  }
  iVar1 = FRollingHash::GetWindowSize(param_2);
  if (iVar1 == 0x40) {
    return 1;
  }
  iVar1 = FRollingHash::GetWindowSize(param_2);
  if (iVar1 != 0x40) {
    lVar2 = X509_ALGOR_new();
    if (lVar2 == 0) goto LAB_143d5bee2;
    X509_ALGOR_set_md(lVar2,param_2);
  }
  uVar3 = X509_ALGOR_it();
  lVar4 = ASN1_item_pack(lVar2,uVar3,&local_res8);
  if (lVar4 != 0) {
    lVar4 = X509_ALGOR_new();
    *param_1 = lVar4;
    if (lVar4 != 0) {
      uVar3 = OBJ_nid2obj(0x38f);
      X509_ALGOR_set0(*param_1,uVar3,0x10,local_res8);
      local_res8 = 0;
    }
  }
LAB_143d5bee2:
  ASN1_STRING_free(local_res8);
  X509_ALGOR_free(lVar2);
  if (*param_1 != 0) {
    return 1;
  }
  return 0;
}



// FUNCTION 143d5bf20 rsa_mgf1_decode body=63 status=ok
// SIG undefined rsa_mgf1_decode(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 rsa_mgf1_decode(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = OBJ_obj2nid(*param_1);
  if (iVar1 != 0x38f) {
    return 0;
  }
  uVar2 = X509_ALGOR_it();
  uVar2 = ASN1_TYPE_unpack_sequence(uVar2,param_1[1]);
  return uVar2;
}



// FUNCTION 143d5bf60 rsa_param_decode body=157 status=ok
// SIG undefined rsa_param_decode(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 rsa_param_decode(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res18 [2];
  undefined8 local_res20;
  undefined1 local_18 [8];
  undefined8 uStack_10;
  
  uStack_10 = 0x143d5bf70;
  X509_ALGOR_get0(&local_res20,local_res18,local_18,param_2);
  iVar1 = OBJ_obj2nid(local_res20);
  if ((iVar1 != 6) && (local_res18[0] != -1)) {
    if (local_res18[0] == 0x10) {
      lVar2 = rsa_pss_decode(param_2);
      *(longlong *)(param_1 + 0x60) = lVar2;
      if (lVar2 != 0) {
        return 1;
      }
    }
    else {
      ERR_put_error(4,0xa4,0x95,"crypto\\rsa\\rsa_ameth.c",0x42);
    }
    return 0;
  }
  return 1;
}



// FUNCTION 143d5c000 rsa_pss_decode body=143 status=ok
// SIG undefined rsa_pss_decode(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong rsa_pss_decode(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = RSA_PSS_PARAMS_it();
  lVar4 = ASN1_TYPE_unpack_sequence(uVar3,*(undefined8 *)(param_1 + 8));
  if (lVar4 == 0) {
    return 0;
  }
  puVar1 = *(undefined8 **)(lVar4 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    iVar2 = OBJ_obj2nid(*puVar1);
    if (iVar2 == 0x38f) {
      uVar3 = X509_ALGOR_it();
      lVar5 = ASN1_TYPE_unpack_sequence(uVar3,puVar1[1]);
    }
    else {
      lVar5 = 0;
    }
    *(longlong *)(lVar4 + 0x20) = lVar5;
    if (lVar5 == 0) {
      RSA_PSS_PARAMS_free(lVar4);
      return 0;
    }
  }
  return lVar4;
}



// FUNCTION 143d5c090 rsa_pss_get_param body=221 status=ok
// SIG undefined rsa_pss_get_param(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 rsa_pss_get_param(undefined8 *param_1,longlong *param_2,longlong *param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143d5c0ab;
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  lVar2 = rsa_algor_to_md(*param_1);
  *param_2 = lVar2;
  if (lVar2 == 0) {
    return 0;
  }
  lVar2 = rsa_algor_to_md(param_1[4]);
  *param_3 = lVar2;
  if (lVar2 == 0) {
    return 0;
  }
  if (param_1[2] == 0) {
    *param_4 = 0x14;
  }
  else {
    iVar1 = ASN1_INTEGER_get();
    *param_4 = iVar1;
    if (iVar1 < 0) {
      uVar4 = 0x2c0;
      uVar3 = 0x96;
      goto LAB_143d5c111;
    }
  }
  if ((param_1[3] == 0) || (iVar1 = ASN1_INTEGER_get(), iVar1 == 1)) {
    return 1;
  }
  uVar4 = 0x2cc;
  uVar3 = 0x8b;
LAB_143d5c111:
  ERR_put_error(4,0x97,uVar3,"crypto\\rsa\\rsa_ameth.c",uVar4,uVar5);
  return 0;
}



// FUNCTION 143d5c170 rsa_pss_param_print body=737 status=ok
// SIG undefined rsa_pss_param_print(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 rsa_pss_param_print(undefined8 param_1,int param_2,longlong *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  uVar5 = 0;
  puVar3 = (undefined8 *)0x0;
  puVar7 = (undefined8 *)0x0;
  iVar1 = BIO_indent(param_1,param_4,0x80);
  puVar8 = puVar3;
  uVar6 = 0;
  if (iVar1 == 0) goto LAB_143d5c42c;
  if (param_2 == 0) {
    if (param_3 == (longlong *)0x0) {
      pcVar4 = "(INVALID PSS PARAMETERS)\n";
      goto LAB_143d5c261;
    }
  }
  else {
    if (param_3 == (longlong *)0x0) {
      pcVar4 = "No PSS parameter restrictions\n";
LAB_143d5c261:
      iVar1 = BIO_puts(param_1,pcVar4);
      if (iVar1 < 1) {
        return 0;
      }
      return 1;
    }
    iVar1 = BIO_puts(param_1,"PSS parameter restrictions:");
    if (iVar1 < 1) {
      return 0;
    }
  }
  iVar1 = BIO_puts(param_1,&DAT_143fc48d8);
  uVar6 = uVar5;
  if (iVar1 < 1) goto LAB_143d5c42c;
  iVar1 = param_4 + 2;
  if (param_2 == 0) {
    iVar1 = param_4;
  }
  iVar2 = BIO_indent(param_1,iVar1,0x80);
  uVar6 = 0;
  if ((iVar2 == 0) || (iVar2 = BIO_puts(param_1,"Hash Algorithm: "), uVar6 = uVar5, iVar2 < 1))
  goto LAB_143d5c42c;
  if ((undefined8 *)*param_3 == (undefined8 *)0x0) {
    iVar2 = BIO_puts(param_1,"sha1 (default)");
  }
  else {
    iVar2 = i2a_ASN1_OBJECT(param_1,*(undefined8 *)*param_3);
  }
  puVar8 = puVar7;
  if ((((iVar2 < 1) || (iVar2 = BIO_puts(param_1,&DAT_143fc48d8), iVar2 < 1)) ||
      (iVar2 = BIO_indent(param_1,iVar1,0x80), iVar2 == 0)) ||
     (iVar2 = BIO_puts(param_1,"Mask Algorithm: "), iVar2 < 1)) goto LAB_143d5c42c;
  if ((undefined8 *)param_3[1] == (undefined8 *)0x0) {
    pcVar4 = "mgf1 with sha1 (default)";
LAB_143d5c336:
    iVar2 = BIO_puts(param_1,pcVar4);
  }
  else {
    iVar2 = i2a_ASN1_OBJECT(param_1,*(undefined8 *)param_3[1]);
    if ((iVar2 < 1) || (iVar2 = BIO_puts(param_1," with "), iVar2 < 1)) goto LAB_143d5c42c;
    puVar3 = (undefined8 *)rsa_mgf1_decode(param_3[1]);
    if (puVar3 == (undefined8 *)0x0) {
      pcVar4 = "INVALID";
      goto LAB_143d5c336;
    }
    iVar2 = i2a_ASN1_OBJECT(param_1,*puVar3);
  }
  puVar8 = puVar3;
  if (0 < iVar2) {
    BIO_puts(param_1,&DAT_143fc48d8);
    iVar2 = BIO_indent(param_1,iVar1,0x80);
    if (iVar2 != 0) {
      pcVar4 = "";
      if (param_2 != 0) {
        pcVar4 = "Minimum";
      }
      iVar2 = BIO_printf(param_1,"%s Salt Length: 0x",pcVar4);
      if (0 < iVar2) {
        if (param_3[2] == 0) {
          iVar2 = BIO_puts(param_1,"14 (default)");
        }
        else {
          iVar2 = i2a_ASN1_INTEGER();
        }
        if (0 < iVar2) {
          BIO_puts(param_1,&DAT_143fc48d8);
          iVar1 = BIO_indent(param_1,iVar1,0x80);
          if ((iVar1 != 0) && (iVar1 = BIO_puts(param_1,"Trailer Field: 0x"), 0 < iVar1)) {
            if (param_3[3] == 0) {
              iVar1 = BIO_puts(param_1,"BC (default)");
            }
            else {
              iVar1 = i2a_ASN1_INTEGER();
            }
            if (0 < iVar1) {
              BIO_puts(param_1,&DAT_143fc48d8);
              uVar6 = 1;
            }
          }
        }
      }
    }
  }
LAB_143d5c42c:
  X509_ALGOR_free(puVar8);
  return uVar6;
}



// FUNCTION 143d5c460 rsa_pss_params_create body=174 status=ok
// SIG undefined rsa_pss_params_create(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong rsa_pss_params_create(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = RSA_PSS_PARAMS_free();
  if (lVar2 != 0) {
    if (param_3 != 0x14) {
      lVar3 = ASN1_INTEGER_new();
      *(longlong *)(lVar2 + 0x10) = lVar3;
      if ((lVar3 == 0) || (iVar1 = ASN1_INTEGER_set(lVar3,param_3), iVar1 == 0)) goto LAB_143d5c4ef;
    }
    iVar1 = rsa_md_to_algor(lVar2,param_1);
    if (iVar1 != 0) {
      if (param_2 != 0) {
        param_1 = param_2;
      }
      iVar1 = rsa_md_to_mgf1(lVar2 + 8,param_1);
      if ((iVar1 != 0) && (iVar1 = rsa_md_to_algor(lVar2 + 0x20,param_1), iVar1 != 0)) {
        return lVar2;
      }
    }
  }
LAB_143d5c4ef:
  RSA_PSS_PARAMS_free(lVar2);
  return 0;
}



// FUNCTION 143d5c510 rsa_pss_to_ctx body=609 status=ok
// SIG undefined rsa_pss_to_ctx(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
rsa_pss_to_ctx(undefined8 param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  undefined8 in_stack_ffffffffffffffb8;
  undefined8 uVar10;
  uint uVar12;
  longlong lVar11;
  undefined4 uVar13;
  
  uVar12 = (uint)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uVar7 = 0xffffffff;
  local_res10 = param_2;
  iVar1 = OBJ_obj2nid(*param_3);
  if (iVar1 != 0x390) {
    ERR_put_error(4,0x9b,0x9b,"crypto\\rsa\\rsa_ameth.c",CONCAT44(uVar12,0x289));
    return 0xffffffff;
  }
  puVar4 = (undefined8 *)rsa_pss_decode(param_3);
  if (((puVar4 == (undefined8 *)0x0) || (lVar5 = rsa_algor_to_md(*puVar4), lVar5 == 0)) ||
     (lVar6 = rsa_algor_to_md(puVar4[4]), lVar6 == 0)) {
LAB_143d5c5ea:
    uVar10 = CONCAT44(uVar12,0x290);
    uVar9 = 0x95;
  }
  else {
    if (puVar4[2] != 0) {
      iVar1 = ASN1_INTEGER_get();
      if (-1 < iVar1) goto LAB_143d5c63c;
      uVar9 = CONCAT44(uVar12,0x2c0);
      uVar8 = 0x96;
LAB_143d5c5e5:
      ERR_put_error(4,0x97,uVar8,"crypto\\rsa\\rsa_ameth.c",uVar9);
      uVar12 = (uint)((ulonglong)uVar9 >> 0x20);
      goto LAB_143d5c5ea;
    }
    iVar1 = 0x14;
LAB_143d5c63c:
    if ((puVar4[3] != 0) && (iVar2 = ASN1_INTEGER_get(), iVar2 != 1)) {
      uVar9 = CONCAT44(uVar12,0x2cc);
      uVar8 = 0x8b;
      goto LAB_143d5c5e5;
    }
    if (param_4 != 0) {
      iVar2 = EVP_DigestVerifyInit(param_1,&local_res10,lVar5,0,param_4);
      uVar8 = uVar7;
      if (iVar2 == 0) goto LAB_143d5c60e;
LAB_143d5c6fb:
      iVar2 = RSA_pkey_ctx_ctrl(local_res10,0xffffffff,0x1001,6,0);
      uVar8 = uVar7;
      if (((0 < iVar2) &&
          (iVar1 = RSA_pkey_ctx_ctrl(local_res10,0x18,0x1002,iVar1,0), uVar8 = 0xffffffff, 0 < iVar1
          )) && (iVar1 = RSA_pkey_ctx_ctrl(local_res10,0x3f8,0x1005,0,lVar6), uVar8 = uVar7,
                0 < iVar1)) {
        uVar8 = 1;
      }
      goto LAB_143d5c60e;
    }
    lVar11 = (ulonglong)uVar12 << 0x20;
    iVar2 = EVP_PKEY_CTX_ctrl(local_res10,0xffffffff,0xf8,0xd,lVar11,local_res18);
    uVar13 = (undefined4)((ulonglong)lVar11 >> 0x20);
    uVar8 = 0xffffffff;
    if (iVar2 < 1) goto LAB_143d5c60e;
    iVar2 = FRollingHash::GetWindowSize(local_res18[0]);
    iVar3 = FRollingHash::GetWindowSize(lVar5);
    if (iVar3 == iVar2) goto LAB_143d5c6fb;
    uVar10 = CONCAT44(uVar13,0x29d);
    uVar9 = 0x9e;
  }
  ERR_put_error(4,0x9b,uVar9,"crypto\\rsa\\rsa_ameth.c",uVar10);
  uVar8 = uVar7;
LAB_143d5c60e:
  RSA_PSS_PARAMS_free(puVar4);
  return uVar8;
}



// FUNCTION 143d5c780 siphash_set_priv_key body=128 status=ok
// SIG undefined siphash_set_priv_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 siphash_set_priv_key(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x28) == 0) && (param_3 == 0x10)) {
    lVar2 = ASN1_OCTET_STRING_new();
    if (lVar2 != 0) {
      iVar1 = ASN1_OCTET_STRING_set(lVar2,param_2,0x10);
      if (iVar1 != 0) {
        *(longlong *)(param_1 + 0x28) = lVar2;
        return 1;
      }
      ASN1_BIT_STRING_free(lVar2);
    }
  }
  return 0;
}



// FUNCTION 143d5c800 siphash_get_priv_key body=165 status=ok
// SIG undefined siphash_get_priv_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 siphash_get_priv_key(longlong param_1,void *param_2,ulonglong *param_3)

{
  longlong lVar1;
  int iVar2;
  void *_Src;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (param_2 == (void *)0x0) {
    *param_3 = 0x10;
    return 1;
  }
  if ((lVar1 != 0) && (0xf < *param_3)) {
    iVar2 = FRollingHash::GetWindowSize(lVar1);
    _Src = (void *)TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
                   ::GetBoundProgramCounterForTimerManager(lVar1);
    _guard_xfg_dispatch_icall_nop(param_2,_Src,(longlong)iVar2);
    *param_3 = 0x10;
    return 1;
  }
  return 0;
}



// FUNCTION 143d5c8b0 ENGINE_get_pkey_asn1_meth body=89 status=ok
// SIG undefined ENGINE_get_pkey_asn1_meth(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_get_pkey_asn1_meth(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 local_res8 [4];
  
  if (*(code **)(param_1 + 0x50) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x50))(param_1,local_res8,0,param_2);
    if (iVar1 != 0) {
      return local_res8[0];
    }
  }
  ERR_put_error(0x26,0xc1,0x65,"crypto\\engine\\tb_asnmth.c",0x59);
  return 0;
}



// FUNCTION 143d5c910 ENGINE_get_pkey_asn1_meth_engine body=31 status=ok
// SIG undefined ENGINE_get_pkey_asn1_meth_engine(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ENGINE_get_pkey_asn1_meth_engine(undefined4 param_1)

{
  engine_table_select(&DAT_146bcb9d0,param_1);
  return;
}



// FUNCTION 143d5c930 ENGINE_pkey_asn1_find_str body=205 status=ok
// SIG undefined ENGINE_pkey_asn1_find_str(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_pkey_asn1_find_str(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  longlong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 uStack_c;
  
  _local_10 = CONCAT44(1,param_3);
  local_28 = 0;
  uStack_20 = 0;
  local_18 = param_2;
  iVar1 = CRYPTO_THREAD_run_once(&DAT_146bcb6f8);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = DAT_146bcb6fc;
  }
  if (iVar2 == 0) {
    ERR_put_error(0x26,0xc5,0x41,"crypto\\engine\\tb_asnmth.c",0xc3);
    return 0;
  }
  CRYPTO_THREAD_read_lock(DAT_146bcd570);
  engine_table_doall(DAT_146bcb9d0,look_str_cb,&local_28);
  if (local_28 != 0) {
    *(int *)(local_28 + 0x9c) = *(int *)(local_28 + 0x9c) + 1;
  }
  *param_1 = local_28;
  CRYPTO_THREAD_unlock(DAT_146bcd570);
  return uStack_20;
}



// FUNCTION 143d5ca00 ENGINE_register_pkey_asn1_meths body=99 status=ok
// SIG undefined ENGINE_register_pkey_asn1_meths(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_register_pkey_asn1_meths(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  ulonglong uVar3;
  
  uVar3 = 0x143d5ca0c;
  if (*(code **)(param_1 + 0x50) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x50))(param_1,0,local_res8,0);
    if (0 < iVar1) {
      uVar2 = engine_table_register
                        (&DAT_146bcb9d0,FUN_143d5cb60,param_1,local_res8[0],iVar1,
                         uVar3 & 0xffffffff00000000);
      return uVar2;
    }
  }
  return 1;
}



// FUNCTION 143d5ca70 ENGINE_set_default_pkey_asn1_meths body=99 status=ok
// SIG undefined ENGINE_set_default_pkey_asn1_meths(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_set_default_pkey_asn1_meths(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  undefined4 uVar3;
  
  uVar3 = 1;
  if (*(code **)(param_1 + 0x50) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x50))(param_1,0,local_res8,0);
    if (0 < iVar1) {
      uVar2 = engine_table_register
                        (&DAT_146bcb9d0,FUN_143d5cb60,param_1,local_res8[0],iVar1,CONCAT44(uVar3,1))
      ;
      return uVar2;
    }
  }
  return 1;
}



// FUNCTION 143d5cae0 engine_pkey_asn1_meths_free body=125 status=ok
// SIG undefined engine_pkey_asn1_meths_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void engine_pkey_asn1_meths_free(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong local_res8;
  undefined8 local_res10;
  
  if (*(code **)(param_1 + 0x50) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x50))(param_1,0,&local_res8,0);
    if (0 < iVar1) {
      lVar3 = 0;
      do {
        iVar2 = (**(code **)(param_1 + 0x50))
                          (param_1,&local_res10,0,*(undefined4 *)(local_res8 + lVar3 * 4));
        if (iVar2 != 0) {
          EVP_PKEY_asn1_free(local_res10);
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar1);
    }
  }
  return;
}



// FUNCTION 143d5cb60 FUN_143d5cb60 body=29 status=ok
// SIG undefined FUN_143d5cb60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d5cb60(void)

{
  engine_table_cleanup(&DAT_146bcb9d0);
  return;
}



// FUNCTION 143d5cb80 look_str_cb body=214 status=ok
// SIG undefined look_str_cb(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void look_str_cb(undefined4 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  char *_Str1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  longlong local_res20;
  
  if (param_4[1] == 0) {
    iVar5 = 0;
    iVar2 = OPENSSL_sk_num(param_2);
    if (0 < iVar2) {
      do {
        lVar3 = OPENSSL_sk_value(param_2,iVar5);
        (**(code **)(lVar3 + 0x50))(lVar3,&local_res20,0,param_1);
        if (local_res20 != 0) {
          _Str1 = *(char **)(local_res20 + 0x10);
          cVar1 = *_Str1;
          pcVar6 = _Str1;
          for (uVar4 = 0; (cVar1 != '\0' && (uVar4 < 0x80000000)); uVar4 = uVar4 + 1) {
            pcVar6 = pcVar6 + 1;
            cVar1 = *pcVar6;
          }
          if (((uVar4 & 0x7fffffff) == *(uint *)(param_4 + 3)) &&
             (iVar2 = _strnicmp(_Str1,(char *)param_4[2],(longlong)(int)*(uint *)(param_4 + 3)),
             iVar2 == 0)) {
            param_4[1] = local_res20;
            *param_4 = lVar3;
            return;
          }
        }
        iVar5 = iVar5 + 1;
        iVar2 = OPENSSL_sk_num(param_2);
      } while (iVar5 < iVar2);
    }
  }
  return;
}



// FUNCTION 143d5cc60 BN_BLINDING_convert_ex body=403 status=ok
// SIG undefined BN_BLINDING_convert_ex(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
BN_BLINDING_convert_ex(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  
  if ((*param_3 == 0) || (lVar4 = param_3[1], lVar4 == 0)) {
    ERR_put_error(3,100,0x6b,"crypto\\bn\\bn_blind.c",0x8d,0x143d5cc7b);
    return 0;
  }
  if (*(int *)((longlong)param_3 + 0x24) == -1) {
    *(undefined4 *)((longlong)param_3 + 0x24) = 0;
    goto LAB_143d5cd7c;
  }
  bVar2 = false;
  iVar3 = *(int *)((longlong)param_3 + 0x24) + 1;
  *(int *)((longlong)param_3 + 0x24) = iVar3;
  bVar1 = bVar2;
  if (((iVar3 == 0x20) && (param_3[2] != 0)) && ((*(byte *)(param_3 + 5) & 2) == 0)) {
    lVar4 = BN_BLINDING_create_param(param_3,0,0,param_4,0,0);
    bVar6 = lVar4 == 0;
LAB_143d5cd5d:
    bVar1 = bVar2;
    if (!bVar6) {
LAB_143d5cd5f:
      bVar1 = true;
    }
  }
  else {
    if ((*(byte *)(param_3 + 5) & 1) != 0) goto LAB_143d5cd5f;
    if (param_3[6] == 0) {
      iVar3 = BN_mod_mul(lVar4,lVar4,lVar4,param_3[3],param_4);
      bVar1 = false;
      if (iVar3 != 0) {
        lVar4 = *param_3;
        iVar3 = BN_mod_mul(lVar4,lVar4,lVar4,param_3[3],param_4);
        bVar6 = iVar3 == 0;
        goto LAB_143d5cd5d;
      }
    }
    else {
      iVar3 = bn_mul_mont_fixed_top(lVar4,lVar4,lVar4);
      if (iVar3 != 0) {
        lVar4 = *param_3;
        iVar3 = bn_mul_mont_fixed_top(lVar4,lVar4,lVar4,param_3[6],param_4);
        if (iVar3 != 0) goto LAB_143d5cd5f;
      }
    }
  }
  if (*(int *)((longlong)param_3 + 0x24) == 0x20) {
    *(undefined4 *)((longlong)param_3 + 0x24) = 0;
  }
  if (!bVar1) {
    return 0;
  }
LAB_143d5cd7c:
  if ((param_2 != 0) && (lVar4 = BN_copy(param_2,param_3[1]), lVar4 == 0)) {
    return 0;
  }
  if (param_3[6] == 0) {
    uVar5 = BN_mod_mul(param_1,param_1,*param_3,param_3[3],param_4);
    return uVar5;
  }
  uVar5 = BN_mod_mul_montgomery();
  return uVar5;
}



// FUNCTION 143d5ce00 BN_BLINDING_create_param body=720 status=ok
// SIG undefined BN_BLINDING_create_param(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong *
BN_BLINDING_create_param
          (longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,longlong param_5
          ,longlong param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int local_res8 [2];
  undefined8 in_stack_ffffffffffffffc8;
  
  uVar1 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  plVar6 = (longlong *)0x0;
  plVar4 = param_1;
  if (param_1 == (longlong *)0x0) {
    plVar4 = (longlong *)CRYPTO_zalloc(0x48,"crypto\\bn\\bn_blind.c",0x24);
    if (plVar4 == (longlong *)0x0) {
      ERR_put_error(3,0x66,0x41,"crypto\\bn\\bn_blind.c",CONCAT44(uVar1,0x25));
      plVar4 = plVar6;
    }
    else {
      lVar5 = CRYPTO_THREAD_lock_new();
      plVar4[8] = lVar5;
      if (lVar5 != 0) {
        uVar1 = CRYPTO_THREAD_get_current_id();
        *(undefined4 *)(plVar4 + 4) = uVar1;
        lVar5 = BN_dup(param_3);
        plVar4[3] = lVar5;
        if (lVar5 == 0) {
          BN_BLINDING_free(plVar4);
          plVar4 = plVar6;
        }
        else {
          iVar3 = BN_get_flags(param_3,4);
          if (iVar3 != 0) {
            BN_set_flags(plVar4[3],4);
          }
          *(undefined4 *)((longlong)plVar4 + 0x24) = 0xffffffff;
        }
        goto LAB_143d5cf19;
      }
      ERR_put_error(3,0x66,0x41,"crypto\\bn\\bn_blind.c",CONCAT44(uVar1,0x2b));
      CRYPTO_free(plVar4,"crypto\\bn\\bn_blind.c",0x2c);
      plVar4 = (longlong *)0x0;
    }
  }
  else {
LAB_143d5cf19:
    if (plVar4 != (longlong *)0x0) {
      if (*plVar4 == 0) {
        lVar5 = BN_new();
        *plVar4 = lVar5;
        if (lVar5 == 0) goto LAB_143d5cff0;
      }
      if (plVar4[1] == 0) {
        lVar5 = BN_new();
        plVar4[1] = lVar5;
        if (lVar5 == 0) goto LAB_143d5cff0;
      }
      if (param_2 != 0) {
        BN_free(plVar4[2]);
        lVar5 = BN_dup(param_2);
        plVar4[2] = lVar5;
      }
      if (plVar4[2] != 0) {
        if (param_5 != 0) {
          plVar4[7] = param_5;
        }
        if (param_6 != 0) {
          plVar4[6] = param_6;
        }
        iVar2 = BN_priv_rand_range(*plVar4,plVar4[3]);
        iVar3 = 0x20;
        while (iVar2 != 0) {
          lVar5 = int_bn_mod_inverse(plVar4[1],*plVar4,plVar4[3],param_4,local_res8);
          if (lVar5 != 0) {
            if (((code *)plVar4[7] == (code *)0x0) || (plVar4[6] == 0)) {
              iVar3 = BN_mod_exp(*plVar4,*plVar4,plVar4[2],plVar4[3],param_4);
            }
            else {
              iVar3 = (*(code *)plVar4[7])(*plVar4,*plVar4,plVar4[2],plVar4[3],param_4,plVar4[6]);
            }
            if (iVar3 != 0) {
              if (plVar4[6] == 0) {
                return plVar4;
              }
              iVar3 = bn_to_mont_fixed_top(plVar4[1],plVar4[1],plVar4[6],param_4);
              if ((iVar3 != 0) &&
                 (iVar3 = bn_to_mont_fixed_top(*plVar4,*plVar4,plVar4[6],param_4), iVar3 != 0)) {
                return plVar4;
              }
            }
            break;
          }
          if (local_res8[0] == 0) break;
          if (iVar3 == 0) {
            ERR_put_error(3,0x80,0x71,"crypto\\bn\\bn_blind.c",0x11d);
            break;
          }
          iVar2 = BN_priv_rand_range(*plVar4,plVar4[3]);
          iVar3 = iVar3 + -1;
        }
      }
    }
LAB_143d5cff0:
    if (param_1 != (longlong *)0x0) goto LAB_143d5d000;
  }
  BN_BLINDING_free(plVar4);
LAB_143d5d000:
  if (param_1 != (longlong *)0x0) {
    plVar6 = plVar4;
  }
  return plVar6;
}



// FUNCTION 143d5d0d0 BN_BLINDING_free body=93 status=ok
// SIG undefined BN_BLINDING_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_BLINDING_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    BN_free(*param_1);
    BN_free(param_1[1]);
    BN_free(param_1[2]);
    BN_free(param_1[3]);
    CRYPTO_THREAD_lock_free(param_1[8]);
    CRYPTO_free(param_1,"crypto\\bn\\bn_blind.c",0x5a);
  }
  return;
}



// FUNCTION 143d5d130 BN_BLINDING_invert_ex body=605 status=ok
// SIG undefined BN_BLINDING_invert_ex(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
BN_BLINDING_invert_ex(ulonglong *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  ulonglong *puVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  
  if ((param_2 == 0) && (param_2 = *(longlong *)(param_3 + 8), param_2 == 0)) {
    ERR_put_error(3,0x65,0x6b,"crypto\\bn\\bn_blind.c",0xaf);
    return 0;
  }
  if (*(longlong *)(param_3 + 0x30) != 0) {
    uVar3 = *(uint *)(param_2 + 8);
    uVar11 = (ulonglong)(int)uVar3;
    if ((int)uVar3 <= *(int *)((longlong)param_1 + 0xc)) {
      uVar9 = 0;
      uVar7 = param_1[1];
      lVar14 = (longlong)(int)(uint)uVar7;
      if (uVar3 != 0) {
        if (7 < uVar11) {
          puVar4 = (ulonglong *)*param_1;
          if ((param_1 < puVar4) || (puVar4 + (uVar11 - 1) < param_1)) {
            uVar8 = uVar9;
            lVar12 = 4;
            lVar13 = 0x20;
            do {
              uVar9 = uVar8 + 8;
              puVar1 = (ulonglong *)((longlong)puVar4 + lVar13 + -0x20);
              uVar6 = puVar1[1];
              puVar2 = (ulonglong *)((longlong)puVar4 + lVar13 + -0x20);
              *puVar2 = (longlong)(uVar8 - lVar14) >> 0x3f & *puVar1;
              puVar2[1] = (longlong)((uVar8 + 1) - lVar14) >> 0x3f & uVar6;
              puVar1 = (ulonglong *)((longlong)puVar4 + lVar13 + -0x10);
              uVar8 = puVar1[1];
              puVar2 = (ulonglong *)((longlong)puVar4 + lVar13 + -0x10);
              *puVar2 = (lVar12 + -2) - lVar14 >> 0x3f & *puVar1;
              puVar2[1] = (lVar12 + -1) - lVar14 >> 0x3f & uVar8;
              uVar8 = ((ulonglong *)(lVar13 + (longlong)puVar4))[1];
              *(ulonglong *)(lVar13 + (longlong)puVar4) =
                   lVar12 - lVar14 >> 0x3f & *(ulonglong *)(lVar13 + (longlong)puVar4);
              ((ulonglong *)(lVar13 + (longlong)puVar4))[1] = (lVar12 + 1) - lVar14 >> 0x3f & uVar8;
              puVar1 = (ulonglong *)((longlong)puVar4 + lVar13 + 0x10);
              uVar8 = puVar1[1];
              puVar2 = (ulonglong *)((longlong)puVar4 + lVar13 + 0x10);
              *puVar2 = (lVar12 + 2) - lVar14 >> 0x3f & *puVar1;
              puVar2[1] = (lVar12 + 3) - lVar14 >> 0x3f & uVar8;
              uVar8 = uVar9;
              lVar12 = lVar12 + 8;
              lVar13 = lVar13 + 0x40;
            } while (uVar9 < (uVar11 & 0xfffffffffffffff8));
          }
        }
        for (; uVar9 < uVar11; uVar9 = uVar9 + 1) {
          puVar4 = (ulonglong *)(*param_1 + uVar9 * 8);
          *puVar4 = *puVar4 & (longlong)(uVar9 - lVar14) >> 0x3f;
        }
      }
      uVar5 = (uint)((longlong)(uVar11 - lVar14) >> 0x3f);
      *(uint *)(param_1 + 1) = ~uVar5 & uVar3 | uVar5 & (uint)uVar7;
    }
    uVar10 = BN_mod_mul_montgomery(param_1,param_1,param_2,*(undefined8 *)(param_3 + 0x30),param_4);
    return uVar10;
  }
  uVar10 = BN_mod_mul(param_1,param_1,param_2,*(undefined8 *)(param_3 + 0x18),param_4);
  return uVar10;
}



// FUNCTION 143d5d390 BN_BLINDING_is_current_thread body=38 status=ok
// SIG undefined BN_BLINDING_is_current_thread(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_BLINDING_is_current_thread(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = CRYPTO_THREAD_get_current_id();
  FUN_143cf1890(uVar1,*(undefined4 *)(param_1 + 0x20));
  return;
}



// FUNCTION 143d5d3c0 FUN_143d5d3c0 body=26 status=ok
// SIG undefined FUN_143d5d3c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d5d3c0(longlong param_1)

{
  CRYPTO_THREAD_read_lock(*(undefined8 *)(param_1 + 0x40));
  return;
}



// FUNCTION 143d5d3e0 BN_BLINDING_set_current_thread body=32 status=ok
// SIG undefined BN_BLINDING_set_current_thread(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_BLINDING_set_current_thread(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = CRYPTO_THREAD_get_current_id();
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  return;
}



// FUNCTION 143d5d400 FUN_143d5d400 body=26 status=ok
// SIG undefined FUN_143d5d400(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d5d400(longlong param_1)

{
  CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x40));
  return;
}



// FUNCTION 143d5d420 rsa_ossl_public_encrypt body=743 status=ok
// SIG undefined rsa_ossl_public_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
rsa_ossl_public_encrypt
          (undefined4 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,int param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined8 in_stack_ffffffffffffffb8;
  undefined8 uVar9;
  undefined4 uVar10;
  ulonglong in_stack_ffffffffffffffc0;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uVar8 = 0xffffffff;
  iVar2 = 0;
  lVar6 = 0;
  iVar1 = BN_num_bits(*(undefined8 *)(param_4 + 0x18));
  if (0x4000 < iVar1) {
    ERR_put_error(4,0x68,0x69,"crypto\\rsa\\rsa_ossl.c",CONCAT44(uVar10,0x4c));
    return 0xffffffff;
  }
  iVar1 = BN_ucmp(*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x20));
  if (iVar1 < 1) {
    uVar4 = CONCAT44(uVar10,0x51);
LAB_143d5d4a4:
    ERR_put_error(4,0x68,0x65,"crypto\\rsa\\rsa_ossl.c",uVar4);
    return 0xffffffff;
  }
  iVar1 = BN_num_bits(*(undefined8 *)(param_4 + 0x18));
  if (0xc00 < iVar1) {
    iVar1 = BN_num_bits(*(undefined8 *)(param_4 + 0x20));
    if (0x40 < iVar1) {
      uVar4 = CONCAT44(uVar10,0x58);
      goto LAB_143d5d4a4;
    }
  }
  lVar3 = BN_CTX_new();
  if (lVar3 == 0) goto LAB_143d5d6d1;
  BN_CTX_start(lVar3);
  uVar4 = BN_CTX_get(lVar3);
  lVar5 = BN_CTX_get(lVar3);
  iVar1 = BN_num_bits(*(undefined8 *)(param_4 + 0x18));
  iVar2 = (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
  lVar6 = CRYPTO_malloc((longlong)iVar2,"crypto\\rsa\\rsa_ossl.c",99);
  if ((lVar5 == 0) || (lVar6 == 0)) {
    uVar9 = CONCAT44(uVar10,0x65);
    uVar4 = 0x41;
LAB_143d5d6b0:
    ERR_put_error(4,0x68,uVar4,"crypto\\rsa\\rsa_ossl.c",uVar9);
  }
  else {
    if (param_5 == 1) {
      iVar1 = RSA_padding_add_PKCS1_type_2(lVar6,iVar2,param_2,param_1);
    }
    else if (param_5 == 2) {
      iVar1 = RSA_padding_add_SSLv23(lVar6,iVar2,param_2,param_1);
    }
    else if (param_5 == 3) {
      iVar1 = RSA_padding_add_none(lVar6,iVar2,param_2,param_1);
    }
    else {
      if (param_5 != 4) {
        uVar9 = CONCAT44(uVar10,0x77);
        uVar4 = 0x76;
        goto LAB_143d5d6b0;
      }
      uVar10 = 0;
      iVar1 = RSA_padding_add_PKCS1_OAEP
                        (lVar6,iVar2,param_2,param_1,0,
                         in_stack_ffffffffffffffc0 & 0xffffffff00000000);
    }
    if (0 < iVar1) {
      lVar7 = BN_bin2bn(lVar6,iVar2,uVar4);
      if (lVar7 != 0) {
        iVar1 = BN_ucmp(uVar4,*(undefined8 *)(param_4 + 0x18));
        if (-1 < iVar1) {
          uVar9 = CONCAT44(uVar10,0x83);
          uVar4 = 0x84;
          goto LAB_143d5d6b0;
        }
        uVar8 = 0xffffffff;
        if ((*(byte *)(param_4 + 0x74) & 2) != 0) {
          lVar7 = BN_MONT_CTX_set_locked
                            (param_4 + 0x78,*(undefined8 *)(param_4 + 0xa8),
                             *(undefined8 *)(param_4 + 0x18),lVar3);
          if (lVar7 == 0) goto LAB_143d5d6c4;
        }
        iVar1 = (**(code **)(*(longlong *)(param_4 + 8) + 0x30))
                          (lVar5,uVar4,*(undefined8 *)(param_4 + 0x20),
                           *(undefined8 *)(param_4 + 0x18),lVar3,*(undefined8 *)(param_4 + 0x78));
        if (iVar1 != 0) {
          uVar8 = BN_bn2binpad(lVar5,param_3,iVar2);
        }
      }
    }
  }
LAB_143d5d6c4:
  BN_CTX_end(lVar3);
LAB_143d5d6d1:
  BN_CTX_free(lVar3);
  CRYPTO_clear_free(lVar6,(longlong)iVar2,"crypto\\rsa\\rsa_ossl.c",0x99);
  return uVar8;
}



// FUNCTION 143d5d710 rsa_ossl_private_encrypt body=914 status=ok
// SIG undefined rsa_ossl_private_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
rsa_ossl_private_encrypt
          (undefined4 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,int param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined8 in_stack_ffffffffffffffa8;
  undefined8 uVar10;
  undefined4 uVar11;
  int local_48 [2];
  longlong local_40;
  longlong local_38;
  undefined8 uStack_30;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  uStack_30 = 0x143d5d731;
  lVar6 = 0;
  uVar9 = 0xffffffff;
  iVar1 = 0;
  local_48[0] = 0;
  local_40 = 0;
  local_38 = 0;
  lVar3 = BN_CTX_new();
  if (lVar3 == 0) goto LAB_143d5da67;
  BN_CTX_start(lVar3);
  lVar4 = BN_CTX_get(lVar3);
  lVar5 = BN_CTX_get(lVar3);
  iVar1 = BN_num_bits(*(undefined8 *)(param_4 + 0x18));
  iVar1 = (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
  lVar6 = CRYPTO_malloc((longlong)iVar1,"crypto\\rsa\\rsa_ossl.c",0xff);
  if ((lVar5 == 0) || (lVar6 == 0)) {
    uVar10 = CONCAT44(uVar11,0x101);
LAB_143d5da38:
    uVar9 = 0x41;
LAB_143d5da3e:
    ERR_put_error(4,0x66,uVar9,"crypto\\rsa\\rsa_ossl.c",uVar10);
LAB_143d5da52:
    uVar9 = 0xffffffff;
  }
  else {
    if (param_5 != 1) {
      if (param_5 == 3) {
        iVar2 = RSA_padding_add_none(lVar6,iVar1,param_2,param_1);
        goto LAB_143d5d82e;
      }
      if (param_5 == 5) {
        iVar2 = RSA_padding_add_X931(lVar6,iVar1,param_2,param_1);
        goto LAB_143d5d82e;
      }
      uVar10 = CONCAT44(uVar11,0x111);
      uVar9 = 0x76;
      goto LAB_143d5da3e;
    }
    iVar2 = RSA_padding_add_PKCS1_type_1(lVar6,iVar1,param_2,param_1);
LAB_143d5d82e:
    if ((iVar2 < 1) || (lVar7 = BN_bin2bn(lVar6,iVar1,lVar4), lVar7 == 0)) goto LAB_143d5da52;
    iVar2 = BN_ucmp(lVar4,*(undefined8 *)(param_4 + 0x18));
    if (-1 < iVar2) {
      uVar10 = CONCAT44(uVar11,0x11d);
      uVar9 = 0x84;
      goto LAB_143d5da3e;
    }
    if ((*(byte *)(param_4 + 0x74) & 0x80) == 0) {
      lVar7 = rsa_get_blinding(param_4,local_48,lVar3);
      local_38 = lVar7;
      if (lVar7 == 0) {
        uVar10 = CONCAT44(uVar11,0x124);
        uVar9 = 0x44;
        goto LAB_143d5da3e;
      }
      if ((local_48[0] == 0) && (local_40 = BN_CTX_get(lVar3), local_40 == 0)) {
        uVar10 = CONCAT44(uVar11,299);
        goto LAB_143d5da38;
      }
      iVar2 = rsa_blinding_convert(lVar7,lVar4,local_40,lVar3);
      if (iVar2 == 0) goto LAB_143d5da52;
    }
    if ((((*(byte *)(param_4 + 0x74) & 0x20) == 0) && (*(int *)(param_4 + 4) != 1)) &&
       ((*(longlong *)(param_4 + 0x30) == 0 ||
        ((((*(longlong *)(param_4 + 0x38) == 0 || (*(longlong *)(param_4 + 0x40) == 0)) ||
          (*(longlong *)(param_4 + 0x48) == 0)) || (*(longlong *)(param_4 + 0x50) == 0)))))) {
      lVar7 = BN_new();
      if (lVar7 == 0) {
        uVar10 = CONCAT44(uVar11,0x13c);
        goto LAB_143d5da38;
      }
      BN_with_flags(lVar7,*(undefined8 *)(param_4 + 0x28),4);
      if (((*(byte *)(param_4 + 0x74) & 2) != 0) &&
         (lVar8 = BN_MONT_CTX_set_locked
                            (param_4 + 0x78,*(undefined8 *)(param_4 + 0xa8),
                             *(undefined8 *)(param_4 + 0x18),lVar3), lVar8 == 0)) {
        BN_free(lVar7);
        goto LAB_143d5da52;
      }
      iVar2 = (**(code **)(*(longlong *)(param_4 + 8) + 0x30))
                        (lVar5,lVar4,lVar7,*(undefined8 *)(param_4 + 0x18),lVar3,
                         *(undefined8 *)(param_4 + 0x78));
      BN_free(lVar7);
    }
    else {
      iVar2 = (**(code **)(*(longlong *)(param_4 + 8) + 0x28))(lVar5,lVar4,param_4,lVar3);
    }
    if ((iVar2 == 0) ||
       ((local_38 != 0 && (iVar2 = BN_BLINDING_invert_ex(lVar5,local_40,local_38,lVar3), iVar2 == 0)
        ))) goto LAB_143d5da52;
    if (param_5 == 5) {
      iVar2 = BN_sub(lVar4,*(undefined8 *)(param_4 + 0x18),lVar5);
      if (iVar2 == 0) goto LAB_143d5da52;
      iVar2 = BN_cmp(lVar5,lVar4);
      if (0 < iVar2) {
        lVar5 = lVar4;
      }
    }
    uVar9 = BN_bn2binpad(lVar5,param_3,iVar1);
  }
  BN_CTX_end(lVar3);
LAB_143d5da67:
  BN_CTX_free(lVar3);
  CRYPTO_clear_free(lVar6,(longlong)iVar1,"crypto\\rsa\\rsa_ossl.c",0x169);
  return uVar9;
}



// FUNCTION 143d5dab0 rsa_ossl_public_decrypt body=792 status=ok
// SIG undefined rsa_ossl_public_decrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int rsa_ossl_public_decrypt
              (int param_1,undefined8 param_2,void *param_3,longlong param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  void *_Src;
  longlong lVar8;
  byte *pbVar9;
  int iVar10;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar12;
  undefined8 uVar11;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  iVar10 = -1;
  iVar4 = -1;
  _Src = (void *)0x0;
  iVar2 = 0;
  iVar1 = BN_num_bits(*(undefined8 *)(param_4 + 0x18));
  if (0x4000 < iVar1) {
    ERR_put_error(4,0x67,0x69,"crypto\\rsa\\rsa_ossl.c",CONCAT44(uVar12,0x1f9));
    return -1;
  }
  iVar1 = BN_ucmp(*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x20));
  if (iVar1 < 1) {
    uVar6 = CONCAT44(uVar12,0x1fe);
LAB_143d5db30:
    ERR_put_error(4,0x67,0x65,"crypto\\rsa\\rsa_ossl.c",uVar6);
    return -1;
  }
  iVar1 = BN_num_bits(*(undefined8 *)(param_4 + 0x18));
  if ((0xc00 < iVar1) && (iVar1 = BN_num_bits(*(undefined8 *)(param_4 + 0x20)), 0x40 < iVar1)) {
    uVar6 = CONCAT44(uVar12,0x205);
    goto LAB_143d5db30;
  }
  lVar5 = BN_CTX_new();
  if (lVar5 == 0) goto LAB_143d5dd95;
  BN_CTX_start(lVar5);
  uVar6 = BN_CTX_get(lVar5);
  lVar7 = BN_CTX_get(lVar5);
  iVar1 = BN_num_bits(*(undefined8 *)(param_4 + 0x18));
  iVar2 = (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
  _Src = (void *)CRYPTO_malloc((longlong)iVar2,"crypto\\rsa\\rsa_ossl.c",0x210);
  if ((lVar7 == 0) || (_Src == (void *)0x0)) {
    uVar11 = 0x212;
    uVar6 = 0x41;
LAB_143d5dd6c:
    ERR_put_error(4,0x67,uVar6,"crypto\\rsa\\rsa_ossl.c",uVar11);
    iVar1 = iVar4;
  }
  else {
    if (iVar2 < param_1) {
      uVar11 = 0x21b;
      uVar6 = 0x6c;
      iVar4 = iVar10;
      goto LAB_143d5dd6c;
    }
    lVar8 = BN_bin2bn(param_2,param_1,uVar6);
    iVar1 = iVar10;
    if (lVar8 != 0) {
      iVar3 = BN_ucmp(uVar6,*(undefined8 *)(param_4 + 0x18));
      if (-1 < iVar3) {
        uVar11 = 0x224;
        uVar6 = 0x84;
        iVar4 = iVar10;
        goto LAB_143d5dd6c;
      }
      if (((*(byte *)(param_4 + 0x74) & 2) == 0) ||
         (lVar8 = BN_MONT_CTX_set_locked
                            (param_4 + 0x78,*(undefined8 *)(param_4 + 0xa8),
                             *(undefined8 *)(param_4 + 0x18),lVar5), lVar8 != 0)) {
        lVar8 = lVar5;
        iVar3 = (**(code **)(*(longlong *)(param_4 + 8) + 0x30))
                          (lVar7,uVar6,*(undefined8 *)(param_4 + 0x20),
                           *(undefined8 *)(param_4 + 0x18),lVar5,*(undefined8 *)(param_4 + 0x78));
        uVar12 = (undefined4)((ulonglong)lVar8 >> 0x20);
        if ((iVar3 != 0) &&
           (((param_5 != 5 ||
             (pbVar9 = (byte *)FHardwareCursor::GetHandle(lVar7), (*pbVar9 & 0xf) == 0xc)) ||
            (iVar3 = BN_sub(lVar7,*(undefined8 *)(param_4 + 0x18),lVar7), iVar1 = iVar4, iVar3 != 0)
            ))) {
          iVar4 = BN_bn2binpad(lVar7,_Src,iVar2);
          if (param_5 == 1) {
            iVar4 = RSA_padding_check_PKCS1_type_1(param_3,iVar2,_Src,iVar4,CONCAT44(uVar12,iVar2));
          }
          else if (param_5 == 3) {
            _guard_xfg_dispatch_icall_nop(param_3,_Src,(longlong)iVar4);
          }
          else {
            if (param_5 != 5) {
              uVar11 = CONCAT44(uVar12,0x242);
              uVar6 = 0x76;
              iVar4 = iVar10;
              goto LAB_143d5dd6c;
            }
            iVar4 = RSA_padding_check_X931(param_3,iVar2,_Src,iVar4,CONCAT44(uVar12,iVar2));
          }
          iVar1 = iVar4;
          if (iVar4 < 0) {
            uVar11 = 0x246;
            uVar6 = 0x72;
            goto LAB_143d5dd6c;
          }
        }
      }
    }
  }
  iVar10 = iVar1;
  BN_CTX_end(lVar5);
LAB_143d5dd95:
  BN_CTX_free(lVar5);
  CRYPTO_clear_free(_Src,(longlong)iVar2,"crypto\\rsa\\rsa_ossl.c",0x24c);
  return iVar10;
}



// FUNCTION 143d5ddd0 rsa_ossl_private_decrypt body=963 status=ok
// SIG undefined rsa_ossl_private_decrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int rsa_ossl_private_decrypt
              (int param_1,undefined8 param_2,void *param_3,longlong param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  void *_Src;
  longlong lVar5;
  void *pvVar6;
  longlong lVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 in_stack_ffffffffffffff98;
  undefined8 uVar10;
  int local_48 [2];
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  pvVar6 = (void *)0x0;
  local_48[0] = 0;
  local_30 = 0;
  iVar1 = 0;
  iVar9 = -1;
  lVar4 = BN_CTX_new();
  _Src = pvVar6;
  if (lVar4 == 0) goto LAB_143d5e152;
  BN_CTX_start(lVar4);
  local_38 = BN_CTX_get(lVar4);
  local_40 = BN_CTX_get(lVar4);
  iVar1 = BN_num_bits(*(undefined8 *)(param_4 + 0x18));
  iVar1 = (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
  _Src = (void *)CRYPTO_malloc((longlong)iVar1,"crypto\\rsa\\rsa_ossl.c",0x183);
  if ((local_40 == 0) || (_Src == (void *)0x0)) {
    uVar10 = 0x185;
LAB_143d5e130:
    uVar8 = 0x41;
LAB_143d5e136:
    ERR_put_error(4,0x65,uVar8,"crypto\\rsa\\rsa_ossl.c",uVar10);
    iVar3 = iVar9;
  }
  else {
    if (iVar1 < param_1) {
      uVar10 = 399;
      uVar8 = 0x6c;
      goto LAB_143d5e136;
    }
    lVar5 = BN_bin2bn(param_2,param_1,local_38);
    uVar10 = local_38;
    iVar3 = iVar9;
    if (lVar5 != 0) {
      iVar2 = BN_ucmp(local_38,*(undefined8 *)(param_4 + 0x18));
      if (-1 < iVar2) {
        uVar10 = 0x199;
        uVar8 = 0x84;
        goto LAB_143d5e136;
      }
      if ((*(byte *)(param_4 + 0x74) & 0x80) == 0) {
        pvVar6 = (void *)rsa_get_blinding(param_4,local_48,lVar4);
        if (pvVar6 == (void *)0x0) {
          uVar10 = 0x1a0;
          uVar8 = 0x44;
          goto LAB_143d5e136;
        }
        if ((local_48[0] == 0) && (local_30 = BN_CTX_get(lVar4), local_30 == 0)) {
          uVar10 = 0x1a7;
          goto LAB_143d5e130;
        }
        iVar2 = rsa_blinding_convert(pvVar6,uVar10,local_30,lVar4);
        if (iVar2 == 0) goto LAB_143d5e14a;
      }
      lVar5 = local_40;
      if ((((*(byte *)(param_4 + 0x74) & 0x20) == 0) && (*(int *)(param_4 + 4) != 1)) &&
         ((*(longlong *)(param_4 + 0x30) == 0 ||
          ((((*(longlong *)(param_4 + 0x38) == 0 || (*(longlong *)(param_4 + 0x40) == 0)) ||
            (*(longlong *)(param_4 + 0x48) == 0)) || (*(longlong *)(param_4 + 0x50) == 0)))))) {
        lVar5 = BN_new();
        if (lVar5 == 0) {
          uVar10 = 0x1b9;
          goto LAB_143d5e130;
        }
        BN_with_flags(lVar5,*(undefined8 *)(param_4 + 0x28),4);
        if (((*(byte *)(param_4 + 0x74) & 2) != 0) &&
           (lVar7 = BN_MONT_CTX_set_locked
                              (param_4 + 0x78,*(undefined8 *)(param_4 + 0xa8),
                               *(undefined8 *)(param_4 + 0x18),lVar4), lVar7 == 0)) {
          BN_free(lVar5);
          goto LAB_143d5e14a;
        }
        lVar7 = lVar4;
        iVar2 = (**(code **)(*(longlong *)(param_4 + 8) + 0x30))
                          (local_40,local_38,lVar5,*(undefined8 *)(param_4 + 0x18),lVar4,
                           *(undefined8 *)(param_4 + 0x78));
        uVar8 = (undefined4)((ulonglong)lVar7 >> 0x20);
        BN_free(lVar5);
        lVar5 = local_40;
      }
      else {
        iVar2 = (**(code **)(*(longlong *)(param_4 + 8) + 0x28))(local_40,uVar10,param_4,lVar4);
      }
      iVar3 = -1;
      if ((iVar2 != 0) &&
         ((pvVar6 == (void *)0x0 ||
          (iVar2 = BN_BLINDING_invert_ex(lVar5,local_30,pvVar6,lVar4), iVar3 = iVar9, iVar2 != 0))))
      {
        iVar3 = BN_bn2binpad(lVar5,_Src,iVar1);
        if (param_5 == 1) {
          iVar9 = RSA_padding_check_PKCS1_type_2(param_3,iVar1,_Src,iVar3,CONCAT44(uVar8,iVar1));
        }
        else if (param_5 == 2) {
          iVar9 = RSA_padding_check_SSLv23(param_3,iVar1,_Src,iVar3,CONCAT44(uVar8,iVar1));
        }
        else if (param_5 == 3) {
          _guard_xfg_dispatch_icall_nop(param_3,_Src,(longlong)iVar3);
          iVar9 = iVar3;
        }
        else {
          if (param_5 != 4) {
            uVar10 = CONCAT44(uVar8,0x1e1);
            uVar8 = 0x76;
            goto LAB_143d5e136;
          }
          iVar9 = RSA_padding_check_PKCS1_OAEP(param_3,iVar1,_Src,iVar3,CONCAT44(uVar8,iVar1),0,0);
        }
        iVar3 = iVar9;
        if (iVar9 < 0) {
          uVar10 = 0x1e5;
          uVar8 = 0x72;
          goto LAB_143d5e136;
        }
      }
    }
  }
LAB_143d5e14a:
  iVar9 = iVar3;
  BN_CTX_end(lVar4);
LAB_143d5e152:
  BN_CTX_free(lVar4);
  CRYPTO_clear_free(_Src,(longlong)iVar1,"crypto\\rsa\\rsa_ossl.c",0x1eb);
  return iVar9;
}



// FUNCTION 143d5e1a0 rsa_ossl_mod_exp body=2367 status=ok
// SIG undefined rsa_ossl_mod_exp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong rsa_ossl_mod_exp(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4
                          )

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  undefined8 uVar15;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  undefined8 *local_98;
  longlong local_90;
  ulonglong local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  longlong alStack_68 [4];
  undefined8 uStack_48;
  
  uStack_48 = 0x143d5e1b7;
  alStack_68[3] = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  iVar14 = 0;
  iVar2 = 0;
  local_88 = 0;
  bVar1 = false;
  local_a4 = 0;
  local_a0 = param_2;
  BN_CTX_start(param_4);
  uVar5 = BN_CTX_get(param_4);
  local_78 = BN_CTX_get(param_4);
  uVar6 = BN_CTX_get(param_4);
  local_80 = uVar6;
  local_70 = BN_CTX_get(param_4);
  if ((local_70 == 0) ||
     ((*(int *)(param_3 + 4) == 1 &&
      (iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_3 + 0x58)), local_a4 = iVar2, 2 < iVar2 - 1U))))
  goto LAB_143d5eaaf;
  uVar4 = *(uint *)(param_3 + 0x74);
  if ((uVar4 & 4) != 0) {
    lVar7 = BN_new();
    if (lVar7 == 0) goto LAB_143d5eaaf;
    BN_with_flags(lVar7,*(undefined8 *)(param_3 + 0x30),4);
    lVar8 = BN_MONT_CTX_set_locked(param_3 + 0x80,*(undefined8 *)(param_3 + 0xa8),lVar7,param_4);
    if (lVar8 != 0) {
      BN_with_flags(lVar7,*(undefined8 *)(param_3 + 0x38),4);
      lVar8 = BN_MONT_CTX_set_locked(param_3 + 0x88,*(undefined8 *)(param_3 + 0xa8),lVar7,param_4);
      if (lVar8 != 0) {
        if (0 < iVar2) {
          do {
            puVar9 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_3 + 0x58),iVar14);
            BN_with_flags(lVar7,*puVar9,4);
            lVar8 = BN_MONT_CTX_set_locked(puVar9 + 4,*(undefined8 *)(param_3 + 0xa8),lVar7,param_4)
            ;
            if (lVar8 == 0) goto LAB_143d5e99a;
            iVar14 = iVar14 + 1;
          } while (iVar14 < iVar2);
        }
        BN_free(lVar7);
        if ((iVar2 == 0) && (*(code **)(*(longlong *)(param_3 + 8) + 0x30) == BN_mod_exp_mont)) {
          iVar14 = BN_num_bits(*(undefined8 *)(param_3 + 0x38));
          iVar3 = BN_num_bits(*(undefined8 *)(param_3 + 0x30));
          if (iVar14 != iVar3) goto LAB_143d5e363;
          bVar1 = true;
        }
        else {
LAB_143d5e363:
          bVar1 = false;
        }
        uVar4 = *(uint *)(param_3 + 0x74);
        uVar6 = local_80;
        goto LAB_143d5e36d;
      }
    }
LAB_143d5e99a:
    BN_free(lVar7);
    goto LAB_143d5eaaf;
  }
LAB_143d5e36d:
  if (((uVar4 & 2) != 0) &&
     (lVar7 = BN_MONT_CTX_set_locked
                        (param_3 + 0x78,*(undefined8 *)(param_3 + 0xa8),
                         *(undefined8 *)(param_3 + 0x18),param_4), lVar7 == 0)) goto LAB_143d5eaaf;
  uVar15 = local_a0;
  if (bVar1) {
    iVar2 = bn_from_mont_fixed_top(uVar6,local_a0,*(undefined8 *)(param_3 + 0x88),param_4);
    if ((iVar2 == 0) ||
       (iVar2 = bn_to_mont_fixed_top(uVar6,uVar6,*(undefined8 *)(param_3 + 0x88),param_4),
       iVar2 == 0)) goto LAB_143d5eaaf;
    local_b0 = *(undefined8 *)(param_3 + 0x88);
    local_b8 = param_4;
    iVar2 = BN_mod_exp_mont_consttime
                      (uVar6,uVar6,*(undefined8 *)(param_3 + 0x48),*(undefined8 *)(param_3 + 0x38));
    if ((iVar2 == 0) ||
       ((iVar2 = bn_from_mont_fixed_top(uVar5,uVar15,*(undefined8 *)(param_3 + 0x80),param_4),
        iVar2 == 0 ||
        (iVar2 = bn_to_mont_fixed_top(uVar5,uVar5,*(undefined8 *)(param_3 + 0x80),param_4),
        iVar2 == 0)))) goto LAB_143d5eaaf;
    local_b0 = *(undefined8 *)(param_3 + 0x80);
    local_b8 = param_4;
    iVar2 = BN_mod_exp_mont_consttime
                      (uVar5,uVar5,*(undefined8 *)(param_3 + 0x40),*(undefined8 *)(param_3 + 0x30));
    if ((iVar2 == 0) ||
       ((((iVar2 = bn_mod_sub_fixed_top(uVar5,uVar5,uVar6,*(undefined8 *)(param_3 + 0x30)),
          iVar2 == 0 ||
          (iVar2 = bn_to_mont_fixed_top(uVar5,uVar5,*(undefined8 *)(param_3 + 0x80),param_4),
          iVar2 == 0)) ||
         (local_b8 = param_4,
         iVar2 = bn_mul_mont_fixed_top
                           (uVar5,uVar5,*(undefined8 *)(param_3 + 0x50),
                            *(undefined8 *)(param_3 + 0x80)), iVar2 == 0)) ||
        ((iVar2 = bn_mul_fixed_top(param_1,uVar5,*(undefined8 *)(param_3 + 0x38),param_4),
         iVar2 == 0 ||
         (iVar2 = bn_mod_add_fixed_top(param_1,param_1,uVar6,*(undefined8 *)(param_3 + 0x18)),
         iVar2 == 0)))))) goto LAB_143d5eaaf;
  }
  else {
    lVar7 = BN_new();
    if (lVar7 == 0) goto LAB_143d5eaaf;
    BN_with_flags(lVar7,local_a0,4);
    local_b8 = param_4;
    iVar14 = BN_div(0,uVar5,lVar7,*(undefined8 *)(param_3 + 0x38));
    if ((iVar14 == 0) || (lVar8 = BN_new(), lVar8 == 0)) {
LAB_143d5e53e:
      BN_free(lVar7);
      goto LAB_143d5eaaf;
    }
    BN_with_flags(lVar8,*(undefined8 *)(param_3 + 0x48),4);
    local_b0 = *(undefined8 *)(param_3 + 0x88);
    local_b8 = param_4;
    iVar14 = (**(code **)(*(longlong *)(param_3 + 8) + 0x30))
                       (uVar6,uVar5,lVar8,*(undefined8 *)(param_3 + 0x38));
    if (iVar14 == 0) {
      BN_free(lVar7);
      BN_free(lVar8);
      goto LAB_143d5eaaf;
    }
    BN_free(lVar8);
    local_b8 = param_4;
    iVar14 = BN_div(0,uVar5,lVar7,*(undefined8 *)(param_3 + 0x30));
    BN_free(lVar7);
    if ((iVar14 == 0) || (lVar7 = BN_new(), lVar7 == 0)) goto LAB_143d5eaaf;
    BN_with_flags(lVar7,*(undefined8 *)(param_3 + 0x40),4);
    local_b0 = *(undefined8 *)(param_3 + 0x80);
    local_b8 = param_4;
    iVar14 = (**(code **)(*(longlong *)(param_3 + 8) + 0x30))
                       (param_1,uVar5,lVar7,*(undefined8 *)(param_3 + 0x30));
    BN_free(lVar7);
    if (iVar14 == 0) goto LAB_143d5eaaf;
    lVar8 = (longlong)iVar2;
    local_90 = lVar8;
    if (0 < iVar2) {
      lVar7 = BN_new();
      lVar10 = BN_new();
      if ((lVar10 == 0) || (lVar7 == 0)) {
LAB_143d5e992:
        BN_free(lVar10);
        goto LAB_143d5e99a;
      }
      local_a8 = 0;
      if (0 < lVar8) {
        lVar8 = 0;
        do {
          lVar11 = BN_CTX_get(param_4);
          alStack_68[lVar8] = lVar11;
          if (lVar11 == 0) goto LAB_143d5e992;
          local_98 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_3 + 0x58),local_a8);
          BN_with_flags(lVar10,local_a0,4);
          BN_with_flags(lVar7,local_98[1],4);
          local_b8 = param_4;
          iVar2 = BN_div(0,uVar5,lVar10,*local_98);
          if (iVar2 == 0) goto LAB_143d5e992;
          local_b0 = local_98[4];
          local_b8 = param_4;
          iVar2 = (**(code **)(*(longlong *)(param_3 + 8) + 0x30))(lVar11,uVar5,lVar7,*local_98);
          if (iVar2 == 0) goto LAB_143d5e992;
          local_a8 = local_a8 + 1;
          lVar8 = lVar8 + 1;
        } while (lVar8 < local_90);
      }
      BN_free(lVar10);
      BN_free(lVar7);
      uVar6 = local_80;
      iVar2 = local_a4;
    }
    iVar14 = BN_sub(param_1,param_1,uVar6);
    if ((iVar14 == 0) ||
       ((((iVar14 = BN_is_negative(param_1), iVar14 != 0 &&
          (iVar14 = BN_add(param_1,param_1,*(undefined8 *)(param_3 + 0x30)), iVar14 == 0)) ||
         (iVar14 = BN_mul(uVar5,param_1,*(undefined8 *)(param_3 + 0x50),param_4), iVar14 == 0)) ||
        (lVar7 = BN_new(), lVar7 == 0)))) goto LAB_143d5eaaf;
    BN_with_flags(lVar7,uVar5,4);
    local_b8 = param_4;
    iVar14 = BN_div(0,param_1,lVar7,*(undefined8 *)(param_3 + 0x30));
    BN_free(lVar7);
    if ((iVar14 == 0) ||
       (((iVar14 = BN_is_negative(param_1), iVar14 != 0 &&
         (iVar14 = BN_add(param_1,param_1,*(undefined8 *)(param_3 + 0x30)), iVar14 == 0)) ||
        ((iVar14 = BN_mul(uVar5,param_1,*(undefined8 *)(param_3 + 0x38),param_4), iVar14 == 0 ||
         (iVar14 = BN_add(param_1,uVar5,uVar6), iVar14 == 0)))))) goto LAB_143d5eaaf;
    uVar15 = local_a0;
    if (0 < iVar2) {
      lVar7 = BN_new();
      if (lVar7 == 0) goto LAB_143d5eaaf;
      uVar12 = 0;
      uVar13 = uVar12;
      if (0 < local_90) {
        do {
          puVar9 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_3 + 0x58),uVar13);
          iVar2 = BN_sub(uVar5,alStack_68[uVar12],param_1);
          if ((iVar2 == 0) || (iVar2 = BN_mul(local_78,uVar5,puVar9[2],param_4), iVar2 == 0))
          goto LAB_143d5e53e;
          BN_with_flags(lVar7,local_78,4);
          local_b8 = param_4;
          iVar2 = BN_div(0,uVar5,lVar7,*puVar9);
          if (((iVar2 == 0) ||
              (((iVar2 = BN_is_negative(uVar5), iVar2 != 0 &&
                (iVar2 = BN_add(uVar5,uVar5,*puVar9), iVar2 == 0)) ||
               (iVar2 = BN_mul(uVar5,uVar5,puVar9[3],param_4), iVar2 == 0)))) ||
             (iVar2 = BN_add(param_1,param_1,uVar5), iVar2 == 0)) goto LAB_143d5e53e;
          uVar12 = uVar12 + 1;
          uVar13 = (ulonglong)((int)uVar13 + 1);
        } while ((longlong)uVar12 < local_90);
      }
      BN_free(lVar7);
      uVar15 = local_a0;
    }
  }
  lVar7 = local_70;
  if ((*(longlong *)(param_3 + 0x20) != 0) && (*(longlong *)(param_3 + 0x18) != 0)) {
    if (*(code **)(*(longlong *)(param_3 + 8) + 0x30) == BN_mod_exp_mont) {
      local_b0 = *(undefined8 *)(param_3 + 0x78);
      local_b8 = param_4;
      iVar2 = BN_mod_exp_mont(local_70,param_1);
    }
    else {
      bn_correct_top(param_1);
      lVar7 = local_70;
      local_b0 = *(undefined8 *)(param_3 + 0x78);
      local_b8 = param_4;
      iVar2 = (**(code **)(*(longlong *)(param_3 + 8) + 0x30))
                        (local_70,param_1,*(undefined8 *)(param_3 + 0x20),
                         *(undefined8 *)(param_3 + 0x18));
    }
    if ((iVar2 == 0) || (iVar2 = BN_sub(lVar7,lVar7,uVar15), iVar2 == 0)) goto LAB_143d5eaaf;
    iVar2 = BN_is_zero(lVar7);
    if (iVar2 == 0) {
      local_b8 = param_4;
      iVar2 = BN_div(0,lVar7,lVar7,*(undefined8 *)(param_3 + 0x18));
      if ((iVar2 == 0) ||
         ((iVar2 = BN_is_negative(lVar7), iVar2 != 0 &&
          (iVar2 = BN_add(lVar7,lVar7,*(undefined8 *)(param_3 + 0x18)), iVar2 == 0))))
      goto LAB_143d5eaaf;
      iVar2 = BN_is_zero(lVar7);
      if (iVar2 == 0) {
        lVar7 = BN_new();
        if (lVar7 == 0) goto LAB_143d5eaaf;
        BN_with_flags(lVar7,*(undefined8 *)(param_3 + 0x28),4);
        local_b0 = *(undefined8 *)(param_3 + 0x78);
        local_b8 = param_4;
        iVar2 = (**(code **)(*(longlong *)(param_3 + 8) + 0x30))
                          (param_1,uVar15,lVar7,*(undefined8 *)(param_3 + 0x18));
        BN_free(lVar7);
        if (iVar2 == 0) goto LAB_143d5eaaf;
      }
    }
  }
  bn_correct_top(param_1);
  local_88 = CONCAT44(local_88._4_4_,1);
LAB_143d5eaaf:
  BN_CTX_end(param_4);
  return local_88 & 0xffffffff;
}



// FUNCTION 143d5eaf0 rsa_ossl_finish body=131 status=ok
// SIG undefined rsa_ossl_finish(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 rsa_ossl_finish(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  BN_MONT_CTX_free(*(undefined8 *)(param_1 + 0x78));
  BN_MONT_CTX_free(*(undefined8 *)(param_1 + 0x80));
  BN_MONT_CTX_free(*(undefined8 *)(param_1 + 0x88));
  iVar3 = 0;
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x58));
  if (0 < iVar1) {
    do {
      lVar2 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x58),iVar3);
      BN_MONT_CTX_free(*(undefined8 *)(lVar2 + 0x20));
      iVar3 = iVar3 + 1;
      iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x58));
    } while (iVar3 < iVar1);
  }
  return 1;
}



// FUNCTION 143d5eb80 FUN_143d5eb80 body=8 status=ok
// SIG undefined FUN_143d5eb80(void)

undefined ** FUN_143d5eb80(void)

{
  return &PTR_s_OpenSSL_PKCS_1_RSA_146837a20;
}



// FUNCTION 143d5eb90 RSA_get_default_method body=8 status=ok
// SIG undefined RSA_get_default_method(void)

undefined * RSA_get_default_method(void)

{
  return PTR_PTR_146837a98;
}



// FUNCTION 143d5eba0 rsa_blinding_convert body=116 status=ok
// SIG undefined rsa_blinding_convert(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong rsa_blinding_convert
                    (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (param_3 == 0) {
    uVar2 = BN_BLINDING_convert_ex(param_2,0,param_1);
  }
  else {
    FUN_143d5d3c0();
    uVar1 = BN_BLINDING_convert_ex(param_2,param_3,param_1,param_4);
    uVar2 = (ulonglong)uVar1;
    FUN_143d5d400(param_1);
  }
  return uVar2;
}



// FUNCTION 143d5ec20 rsa_get_blinding body=183 status=ok
// SIG undefined rsa_get_blinding(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong rsa_get_blinding(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  CRYPTO_THREAD_read_lock(*(undefined8 *)(param_1 + 0xa8));
  lVar2 = *(longlong *)(param_1 + 0x98);
  if (lVar2 == 0) {
    lVar2 = RSA_setup_blinding(param_1,param_3);
    *(longlong *)(param_1 + 0x98) = lVar2;
    if (lVar2 == 0) goto LAB_143d5ecb3;
  }
  iVar1 = BN_BLINDING_is_current_thread(lVar2);
  if (iVar1 == 0) {
    *param_2 = 0;
    lVar2 = *(longlong *)(param_1 + 0xa0);
    if (lVar2 == 0) {
      lVar2 = RSA_setup_blinding(param_1,param_3);
      *(longlong *)(param_1 + 0xa0) = lVar2;
    }
  }
  else {
    *param_2 = 1;
  }
LAB_143d5ecb3:
  CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0xa8));
  return lVar2;
}



// FUNCTION 143d5ece0 ENGINE_get_default_RSA body=32 status=ok
// SIG undefined ENGINE_get_default_RSA(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ENGINE_get_default_RSA(void)

{
  engine_table_select(&DAT_146bcb9d8,1);
  return;
}



// FUNCTION 143d5ed00 ENGINE_register_RSA body=80 status=ok
// SIG undefined ENGINE_register_RSA(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_register_RSA(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    uVar1 = engine_table_register
                      (&DAT_146bcb9d8,FUN_143d5eda0,param_1,&DAT_145d89c80,1,0,0x143d5ed0a);
    return uVar1;
  }
  return 1;
}



// FUNCTION 143d5ed50 ENGINE_set_default_RSA body=80 status=ok
// SIG undefined ENGINE_set_default_RSA(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_set_default_RSA(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    uVar1 = engine_table_register
                      (&DAT_146bcb9d8,FUN_143d5eda0,param_1,&DAT_145d89c80,1,1,0x143d5ed5a);
    return uVar1;
  }
  return 1;
}



// FUNCTION 143d5eda0 FUN_143d5eda0 body=29 status=ok
// SIG undefined FUN_143d5eda0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d5eda0(void)

{
  engine_table_cleanup(&DAT_146bcb9d8);
  return;
}



// FUNCTION 143d5edc0 rsa_multip_calc_product body=234 status=ok
// SIG undefined rsa_multip_calc_product(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 rsa_multip_calc_product(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined4 uVar9;
  
  lVar3 = 0;
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x58));
  uVar9 = 0;
  if ((0 < iVar1) && (lVar3 = BN_CTX_new(), uVar9 = 0, lVar3 != 0)) {
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    iVar8 = 0;
    if (0 < iVar1) {
      do {
        puVar4 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x58),iVar8);
        lVar5 = puVar4[3];
        if (lVar5 == 0) {
          lVar5 = BN_secure_new();
          puVar4[3] = lVar5;
          uVar9 = 0;
          if (lVar5 == 0) goto LAB_143d5ee92;
        }
        iVar2 = BN_mul(lVar5,uVar7,uVar6,lVar3);
        uVar9 = 0;
        if (iVar2 == 0) goto LAB_143d5ee92;
        uVar7 = puVar4[3];
        iVar8 = iVar8 + 1;
        uVar6 = *puVar4;
      } while (iVar8 < iVar1);
    }
    uVar9 = 1;
  }
LAB_143d5ee92:
  BN_CTX_free(lVar3);
  return uVar9;
}



// FUNCTION 143d5eeb0 rsa_multip_cap body=48 status=ok
// SIG undefined rsa_multip_cap(void)

undefined8 rsa_multip_cap(int param_1)

{
  undefined8 uVar1;
  
  if (param_1 < 0x400) {
    return 2;
  }
  if (param_1 < 0x1000) {
    return 3;
  }
  uVar1 = 5;
  if (param_1 < 0x2000) {
    uVar1 = 4;
  }
  return uVar1;
}



// FUNCTION 143d5eee0 rsa_multip_info_free body=79 status=ok
// SIG undefined rsa_multip_info_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void rsa_multip_info_free(undefined8 *param_1)

{
  BN_clear_free(*param_1);
  BN_clear_free(param_1[1]);
  BN_clear_free(param_1[2]);
  BN_clear_free(param_1[3]);
  CRYPTO_free(param_1,"crypto\\rsa\\rsa_mp.c",0x13);
  return;
}



// FUNCTION 143d5ef30 rsa_multip_info_new body=210 status=ok
// SIG undefined rsa_multip_info_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * rsa_multip_info_new(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143d5ef3c;
  plVar1 = (longlong *)CRYPTO_zalloc(0x28,"crypto\\rsa\\rsa_mp.c",0x24);
  if (plVar1 == (longlong *)0x0) {
    ERR_put_error(4,0xa6,0x41,"crypto\\rsa\\rsa_mp.c",0x25,uVar3);
    return (longlong *)0x0;
  }
  lVar2 = BN_secure_new();
  *plVar1 = lVar2;
  if (lVar2 != 0) {
    lVar2 = BN_secure_new();
    plVar1[1] = lVar2;
    if (lVar2 != 0) {
      lVar2 = BN_secure_new();
      plVar1[2] = lVar2;
      if (lVar2 != 0) {
        lVar2 = BN_secure_new();
        plVar1[3] = lVar2;
        if (lVar2 != 0) {
          return plVar1;
        }
      }
    }
  }
  BN_free(*plVar1);
  BN_free(plVar1[1]);
  BN_free(plVar1[2]);
  BN_free(plVar1[3]);
  CRYPTO_free(plVar1,"crypto\\rsa\\rsa_mp.c",0x38);
  return (longlong *)0x0;
}



// FUNCTION 143d5f010 pkey_cmac_init body=56 status=ok
// SIG undefined pkey_cmac_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_cmac_init(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = CMAC_CTX_new();
  *(longlong *)(param_1 + 0x28) = lVar1;
  if (lVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  return 1;
}



// FUNCTION 143d5f050 pkey_cmac_copy body=91 status=ok
// SIG undefined pkey_cmac_copy(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_cmac_copy(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = CMAC_CTX_new();
  *(longlong *)(param_1 + 0x28) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    iVar1 = CMAC_CTX_copy(lVar2,*(undefined8 *)(param_2 + 0x28));
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143d5f0b0 FUN_143d5f0b0 body=26 status=ok
// SIG undefined FUN_143d5f0b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d5f0b0(longlong param_1)

{
  CMAC_CTX_free(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 143d5f0d0 pkey_cmac_keygen body=122 status=ok
// SIG undefined pkey_cmac_keygen(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_cmac_keygen(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = CMAC_CTX_new();
  if (lVar2 != 0) {
    iVar1 = CMAC_CTX_copy(lVar2,*(undefined8 *)(param_1 + 0x28));
    if (iVar1 != 0) {
      EVP_PKEY_assign(param_2,0x37e,lVar2);
      return 1;
    }
    CMAC_CTX_free(lVar2);
  }
  return 0;
}



// FUNCTION 143d5f150 cmac_signctx_init body=57 status=ok
// SIG undefined cmac_signctx_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 cmac_signctx_init(undefined8 param_1,undefined8 param_2)

{
  EVP_MD_CTX_set_flags(param_2,0x100);
  FMemFileOut::seekp(param_2,int_update);
  return 1;
}



// FUNCTION 143d5f190 FUN_143d5f190 body=26 status=ok
// SIG undefined FUN_143d5f190(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d5f190(longlong param_1)

{
  CMAC_Final(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 143d5f1b0 pkey_cmac_ctrl body=162 status=ok
// SIG undefined pkey_cmac_ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_cmac_ctrl(longlong param_1,int param_2,int param_3,longlong param_4)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143d5f1bc;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 1) {
    if ((*(longlong *)(param_1 + 0x10) != 0) &&
       (iVar2 = CMAC_CTX_copy(uVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28)),
       iVar2 == 0)) {
      return 0;
    }
    uVar5 = 0;
    lVar4 = 0;
  }
  else {
    if (param_2 == 6) {
      if (param_4 == 0) {
        return 0;
      }
      if (param_3 < 0) {
        return 0;
      }
      lVar3 = (longlong)param_3;
      lVar4 = 0;
      uVar5 = 0;
      goto LAB_143d5f233;
    }
    if (param_2 != 0xc) {
      return 0xfffffffe;
    }
    uVar5 = *(undefined8 *)(param_1 + 8);
    lVar4 = param_4;
  }
  lVar3 = 0;
  param_4 = 0;
LAB_143d5f233:
  iVar2 = CMAC_Init(uVar1,param_4,lVar3,lVar4,uVar5,uVar6);
  if (iVar2 == 0) {
    return 0;
  }
  return 1;
}



// FUNCTION 143d5f260 pkey_cmac_ctrl_str body=261 status=ok
// SIG undefined pkey_cmac_ctrl_str(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong pkey_cmac_ctrl_str(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x143d5f270;
  if (param_3 != 0) {
    uVar4 = 0;
    uVar5 = uVar4;
    do {
      uVar6 = uVar5 + 1;
      uVar1 = uVar4;
      if (*(char *)(param_2 + uVar5) != "cipher"[uVar5]) {
        do {
          uVar5 = uVar1;
          if (*(char *)(param_2 + uVar5) != *(char *)((longlong)&DAT_144044650 + uVar5)) {
            do {
              uVar5 = uVar4;
              if (*(char *)(param_2 + uVar5) != (&DAT_145d89da0)[uVar5]) {
                return 0xfffffffe;
              }
              uVar4 = uVar5 + 1;
            } while (uVar5 + 1 != 7);
            uVar4 = EVP_PKEY_CTX_hex2ctrl(param_1,uVar5 & 0xffffffff);
            return uVar4;
          }
          uVar1 = uVar5 + 1;
        } while (uVar5 + 1 != 4);
        uVar4 = EVP_PKEY_CTX_str2ctrl(param_1,(int)uVar5 + 3);
        return uVar4;
      }
      uVar5 = uVar6;
    } while (uVar6 != 7);
    lVar3 = EVP_get_cipherbyname(param_3);
    if (lVar3 != 0) {
      iVar2 = CMAC_Init(*(undefined8 *)(param_1 + 0x28),0,0,lVar3,*(undefined8 *)(param_1 + 8),uVar7
                       );
      return (ulonglong)(iVar2 != 0);
    }
  }
  return 0;
}



// FUNCTION 143d5f370 int_update body=65 status=ok
// SIG undefined int_update(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool int_update(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = USignificanceManager::GetWorld();
  iVar1 = CMAC_Update(*(undefined8 *)(lVar2 + 0x28),param_2,param_3);
  return iVar1 != 0;
}



// FUNCTION 143d5f3c0 pkey_dh_init body=134 status=ok
// SIG undefined pkey_dh_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_dh_init(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143d5f3cc;
  puVar1 = (undefined4 *)CRYPTO_zalloc(0x60,"crypto\\dh\\dh_pmeth.c",0x35);
  if (puVar1 == (undefined4 *)0x0) {
    ERR_put_error(5,0x7d,0x41,"crypto\\dh\\dh_pmeth.c",0x36,uVar2);
    return 0;
  }
  *puVar1 = 0x400;
  puVar1[3] = 0xffffffff;
  puVar1[1] = 2;
  *(undefined1 *)(puVar1 + 0xc) = 1;
  *(undefined4 **)(param_1 + 0x28) = puVar1;
  *(undefined4 **)(param_1 + 0x40) = puVar1 + 10;
  *(undefined4 *)(param_1 + 0x48) = 2;
  return 1;
}



// FUNCTION 143d5f450 pkey_dh_cleanup body=85 status=ok
// SIG undefined pkey_dh_cleanup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void pkey_dh_cleanup(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    CRYPTO_free(*(undefined8 *)(lVar1 + 0x48),"crypto\\dh\\dh_pmeth.c",0x49);
    ASN1_OBJECT_free(*(undefined8 *)(lVar1 + 0x38));
    CRYPTO_free(lVar1,"crypto\\dh\\dh_pmeth.c",0x4b);
    return;
  }
  return;
}



// FUNCTION 143d5f4b0 pkey_dh_copy body=318 status=ok
// SIG undefined pkey_dh_copy(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_dh_copy(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143d5f4c5;
  puVar2 = (undefined4 *)CRYPTO_zalloc(0x60,"crypto\\dh\\dh_pmeth.c",0x35);
  if (puVar2 == (undefined4 *)0x0) {
    ERR_put_error(5,0x7d,0x41,"crypto\\dh\\dh_pmeth.c",0x36,uVar4);
  }
  else {
    *puVar2 = 0x400;
    puVar2[3] = 0xffffffff;
    puVar2[1] = 2;
    *(undefined1 *)(puVar2 + 0xc) = 1;
    *(undefined4 **)(param_1 + 0x40) = puVar2 + 10;
    *(undefined4 **)(param_1 + 0x28) = puVar2;
    *(undefined4 *)(param_1 + 0x48) = 2;
    puVar1 = *(undefined4 **)(param_2 + 0x28);
    *puVar2 = *puVar1;
    puVar2[3] = puVar1[3];
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    puVar2[4] = puVar1[4];
    *(undefined8 *)(puVar2 + 6) = *(undefined8 *)(puVar1 + 6);
    puVar2[8] = puVar1[8];
    puVar2[9] = puVar1[9];
    *(undefined1 *)(puVar2 + 0xc) = *(undefined1 *)(puVar1 + 0xc);
    lVar3 = OBJ_dup(*(undefined8 *)(puVar1 + 0xe));
    *(longlong *)(puVar2 + 0xe) = lVar3;
    if (lVar3 != 0) {
      *(undefined8 *)(puVar2 + 0x10) = *(undefined8 *)(puVar1 + 0x10);
      if (*(longlong *)(puVar1 + 0x12) != 0) {
        lVar3 = CRYPTO_memdup(*(longlong *)(puVar1 + 0x12),*(undefined8 *)(puVar1 + 0x14),
                              "crypto\\dh\\dh_pmeth.c",0x66);
        *(longlong *)(puVar2 + 0x12) = lVar3;
        if (lVar3 == 0) {
          return 0;
        }
        *(undefined8 *)(puVar2 + 0x14) = *(undefined8 *)(puVar1 + 0x14);
      }
      *(undefined8 *)(puVar2 + 0x16) = *(undefined8 *)(puVar1 + 0x16);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143d5f5f0 FUN_143d5f5f0 body=704 status=ok
// SIG undefined FUN_143d5f5f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_143d5f5f0(longlong param_1,int param_2,uint param_3,uint *param_4)

{
  uint *puVar1;
  longlong lVar2;
  
  puVar1 = *(uint **)(param_1 + 0x28);
  if (param_2 < 0x1002) {
    if (param_2 == 0x1001) {
      if (0xff < (int)param_3) {
        *puVar1 = param_3;
        return 1;
      }
    }
    else if (param_2 == 2) {
      return 1;
    }
  }
  else {
    switch(param_2) {
    case 0x1002:
      if (puVar1[2] == 0) {
        puVar1[1] = param_3;
        return 1;
      }
      break;
    case 0x1003:
      if ((param_3 - 1 < 3) && (puVar1[9] == 0)) {
        puVar1[8] = param_3;
        return 1;
      }
      break;
    case 0x1004:
      if (puVar1[2] != 0) {
        puVar1[3] = param_3;
        return 1;
      }
      break;
    case 0x1005:
      if (param_3 < 3) {
        puVar1[2] = param_3;
        return 1;
      }
      break;
    case 0x1006:
      if (param_3 == 0xfffffffe) {
        return (int)(char)puVar1[0xc];
      }
      if (param_3 - 1 < 2) {
        *(char *)(puVar1 + 0xc) = (char)param_3;
        return 1;
      }
      break;
    case 0x1007:
      *(uint **)(puVar1 + 0x10) = param_4;
      return 1;
    case 0x1008:
      *(undefined8 *)param_4 = *(undefined8 *)(puVar1 + 0x10);
      return 1;
    case 0x1009:
      if (0 < (int)param_3) {
        *(longlong *)(puVar1 + 0x16) = (longlong)(int)param_3;
        return 1;
      }
      break;
    case 0x100a:
      *param_4 = puVar1[0x16];
      return 1;
    case 0x100b:
      CRYPTO_free(*(undefined8 *)(puVar1 + 0x12),"crypto\\dh\\dh_pmeth.c",0xc3);
      *(uint **)(puVar1 + 0x12) = param_4;
      lVar2 = (longlong)(int)param_3;
      if (param_4 == (uint *)0x0) {
        lVar2 = 0;
      }
      *(longlong *)(puVar1 + 0x14) = lVar2;
      return 1;
    case 0x100c:
      *(undefined8 *)param_4 = *(undefined8 *)(puVar1 + 0x12);
      return puVar1[0x14];
    case 0x100d:
      ASN1_OBJECT_free(*(undefined8 *)(puVar1 + 0xe));
      *(uint **)(puVar1 + 0xe) = param_4;
      return 1;
    case 0x100e:
      *(undefined8 *)param_4 = *(undefined8 *)(puVar1 + 0xe);
      return 1;
    case 0x100f:
      if ((0 < (int)param_3) && (puVar1[8] == 0)) {
        puVar1[9] = param_3;
        return 1;
      }
      break;
    case 0x1010:
      puVar1[4] = param_3;
      return 1;
    }
  }
  return 0xfffffffe;
}



// FUNCTION 143d5f8f0 pkey_dh_ctrl_str body=619 status=ok
// SIG undefined pkey_dh_ctrl_str(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_dh_ctrl_str(longlong param_1,char *param_2,char *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143d5f905;
  iVar1 = _guard_xfg_dispatch_icall_nop(param_2,"dh_paramgen_prime_len");
  if (iVar1 == 0) {
    iVar1 = atoi(param_3);
    uVar5 = EVP_PKEY_CTX_ctrl(param_1,0x1c,2,0x1001,iVar1,0);
    return uVar5;
  }
  iVar1 = _guard_xfg_dispatch_icall_nop(param_2,"dh_rfc5114");
  if (iVar1 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x28);
    uVar2 = atoi(param_3);
    if (uVar2 < 4) {
      *(uint *)(lVar3 + 0x20) = uVar2;
      return 1;
    }
  }
  else {
    iVar1 = _guard_xfg_dispatch_icall_nop(param_2,"dh_param");
    if (iVar1 == 0) {
      lVar3 = *(longlong *)(param_1 + 0x28);
      iVar1 = OBJ_sn2nid(param_3);
      if (iVar1 != 0) {
        *(int *)(lVar3 + 0x24) = iVar1;
        return 1;
      }
      ERR_put_error(5,0x78,0x6e,"crypto\\dh\\dh_pmeth.c",0xf4,uVar5);
    }
    else {
      iVar1 = _guard_xfg_dispatch_icall_nop(param_2,"dh_paramgen_generator");
      if (iVar1 == 0) {
        iVar1 = atoi(param_3);
        uVar5 = EVP_PKEY_CTX_ctrl(param_1,0x1c,2,0x1002,iVar1,0);
        return uVar5;
      }
      iVar1 = _guard_xfg_dispatch_icall_nop(param_2,"dh_paramgen_subprime_len");
      if (iVar1 == 0) {
        iVar1 = atoi(param_3);
        uVar5 = EVP_PKEY_CTX_ctrl(param_1,0x1c,2,0x1004,iVar1,0);
        return uVar5;
      }
      iVar1 = _guard_xfg_dispatch_icall_nop(param_2,"dh_paramgen_type");
      if (iVar1 == 0) {
        iVar1 = atoi(param_3);
        uVar5 = EVP_PKEY_CTX_ctrl(param_1,0x1c,2,0x1005,iVar1,0);
        return uVar5;
      }
      lVar3 = 0;
      while (lVar4 = lVar3 + 1, param_2[lVar3] == (&DAT_145d8a04c)[lVar3]) {
        lVar3 = lVar4;
        if (lVar4 == 7) {
          iVar1 = atoi(param_3);
          uVar5 = EVP_PKEY_CTX_ctrl(param_1,0x1c,0x400,0x1010,iVar1,0);
          return uVar5;
        }
      }
    }
  }
  return 0xfffffffe;
}



// FUNCTION 143d5fb60 pkey_dh_paramgen body=666 status=ok
// SIG undefined pkey_dh_paramgen(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int pkey_dh_paramgen(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar9;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  piVar1 = *(int **)(param_1 + 0x28);
  iVar2 = piVar1[8];
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      uVar3 = FUN_143d18cb0();
    }
    else if (iVar2 == 2) {
      uVar3 = FUN_143d18d30();
    }
    else {
      if (iVar2 != 3) {
        return -2;
      }
      uVar3 = FUN_143d18db0();
    }
    EVP_PKEY_assign(param_2,0x398,uVar3);
    return 1;
  }
  if (piVar1[9] != 0) {
    lVar4 = DH_new_by_nid();
    if (lVar4 == 0) {
      return 0;
    }
    EVP_PKEY_assign(param_2,0x1c,lVar4);
    return 1;
  }
  lVar4 = 0;
  lVar5 = lVar4;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar5 = BN_GENCB_new();
    if (lVar5 == 0) {
      return 0;
    }
    evp_pkey_set_cb_translate(lVar5,param_1);
  }
  if (piVar1[2] == 0) {
    lVar4 = DH_new();
    if (lVar4 == 0) {
      BN_GENCB_free(lVar5);
      return 0;
    }
    iVar2 = DH_generate_parameters_ex(lVar4,*piVar1,piVar1[1],lVar5);
    BN_GENCB_free(lVar5);
    if (iVar2 == 0) {
      DH_free(lVar4);
      return 0;
    }
    EVP_PKEY_assign(param_2,0x1c,lVar4);
    return iVar2;
  }
  iVar2 = *piVar1;
  iVar8 = piVar1[3];
  lVar7 = *(longlong *)(piVar1 + 6);
  if ((2 < piVar1[2]) || (lVar6 = DSA_new(), lVar6 == 0)) goto LAB_143d5fd3f;
  if ((iVar8 == -1) && (iVar8 = 0xa0, 0x7ff < iVar2)) {
    iVar8 = 0x100;
  }
  if (lVar7 == 0) {
    if (iVar2 < 0x800) {
      lVar7 = EVP_sha1();
    }
    else {
      lVar7 = EVP_sha256();
    }
  }
  if (piVar1[2] == 1) {
    iVar2 = dsa_builtin_paramgen(lVar6,(longlong)iVar2,(longlong)iVar8,lVar7,0,0,0,0,0,lVar5);
LAB_143d5fd2e:
    lVar4 = lVar6;
    if (0 < iVar2) goto LAB_143d5fd3f;
  }
  else if (piVar1[2] == 2) {
    iVar2 = dsa_builtin_paramgen2
                      (lVar6,(longlong)iVar2,(longlong)iVar8,lVar7,0,0,CONCAT44(uVar9,0xffffffff),0,
                       0,0,lVar5);
    goto LAB_143d5fd2e;
  }
  DSA_free(lVar6);
  lVar4 = 0;
LAB_143d5fd3f:
  BN_GENCB_free(lVar5);
  if (lVar4 != 0) {
    lVar5 = DSA_dup_DH(lVar4);
    DSA_free(lVar4);
    if (lVar5 != 0) {
      EVP_PKEY_assign(param_2,0x398,lVar5);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143d5fe00 pkey_dh_keygen body=167 status=ok
// SIG undefined pkey_dh_keygen(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_dh_keygen(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((param_1[2] == 0) && (*(int *)(param_1[5] + 0x24) == 0)) {
    ERR_put_error(5,0x71,0x6b,"crypto\\dh\\dh_pmeth.c",0x194,0x143d5fe10);
  }
  else {
    if (*(int *)(param_1[5] + 0x24) == 0) {
      lVar2 = DH_new();
    }
    else {
      lVar2 = DH_new_by_nid();
    }
    if (lVar2 != 0) {
      EVP_PKEY_assign(param_2,*(undefined4 *)*param_1,lVar2);
      if ((param_1[2] != 0) && (iVar1 = EVP_PKEY_copy_parameters(param_2), iVar1 == 0)) {
        return 0;
      }
      uVar3 = DH_generate_key(*(undefined8 *)(param_2 + 0x28));
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 143d5feb0 pkey_dh_derive body=455 status=ok
// SIG undefined pkey_dh_derive(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_dh_derive(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if ((*(longlong *)(param_1 + 0x10) == 0) || (*(longlong *)(param_1 + 0x18) == 0)) {
    ERR_put_error(5,0x70,0x6c,"crypto\\dh\\dh_pmeth.c",0x1ac);
    return 0;
  }
  uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  uVar2 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x28) + 0x20);
  if (*(char *)(lVar1 + 0x30) == '\x01') {
    if (param_2 == 0) {
      iVar3 = DH_size(uVar4);
      *param_3 = (longlong)iVar3;
    }
    else {
      if (*(int *)(lVar1 + 0x10) == 0) {
        uVar4 = DH_compute_key(param_2,uVar2,uVar4);
      }
      else {
        uVar4 = DH_compute_key_padded();
      }
      if ((int)uVar4 < 0) {
        return uVar4;
      }
      *param_3 = (longlong)(int)uVar4;
    }
LAB_143d5ff18:
    uVar4 = 1;
  }
  else {
    if (((*(char *)(lVar1 + 0x30) == '\x02') && (lVar5 = *(longlong *)(lVar1 + 0x58), lVar5 != 0))
       && (*(longlong *)(lVar1 + 0x38) != 0)) {
      if (param_2 == 0) {
        *param_3 = lVar5;
        goto LAB_143d5ff18;
      }
      if (*param_3 == lVar5) {
        uVar6 = 0;
        iVar3 = DH_size(uVar4);
        lVar7 = (longlong)iVar3;
        lVar5 = CRYPTO_malloc(lVar7,"crypto\\dh\\dh_pmeth.c",0x1ce);
        if (((lVar5 != 0) && (iVar3 = DH_compute_key_padded(lVar5,uVar2,uVar4), 0 < iVar3)) &&
           (iVar3 = DH_KDF_X9_42(param_2,*param_3,lVar5,lVar7,*(undefined8 *)(lVar1 + 0x38),
                                 *(undefined8 *)(lVar1 + 0x48),*(undefined8 *)(lVar1 + 0x50),
                                 *(undefined8 *)(lVar1 + 0x40)), iVar3 != 0)) {
          uVar6 = 1;
          *param_3 = *(longlong *)(lVar1 + 0x58);
        }
        CRYPTO_clear_free(lVar5,lVar7,"crypto\\dh\\dh_pmeth.c",0x1da);
        return uVar6;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 143d60080 pkey_dsa_init body=98 status=ok
// SIG undefined pkey_dsa_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_dsa_init(longlong param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)CRYPTO_malloc(0x20,"crypto\\dsa\\dsa_pmeth.c",0x22);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar1 = 0x400;
  *(undefined8 *)(puVar1 + 2) = 0;
  *(undefined8 *)(puVar1 + 6) = 0;
  puVar1[1] = 0xa0;
  *(undefined4 **)(param_1 + 0x28) = puVar1;
  *(undefined4 **)(param_1 + 0x40) = puVar1 + 4;
  *(undefined4 *)(param_1 + 0x48) = 2;
  return 1;
}



// FUNCTION 143d600f0 pkey_dsa_copy body=152 status=ok
// SIG undefined pkey_dsa_copy(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_dsa_copy(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)CRYPTO_malloc(0x20,"crypto\\dsa\\dsa_pmeth.c",0x22);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0x400;
    puVar2[1] = 0xa0;
    *(undefined8 *)(puVar2 + 2) = 0;
    *(undefined8 *)(puVar2 + 6) = 0;
    *(undefined4 **)(param_1 + 0x28) = puVar2;
    *(undefined4 **)(param_1 + 0x40) = puVar2 + 4;
    *(undefined4 *)(param_1 + 0x48) = 2;
    puVar1 = *(undefined4 **)(param_2 + 0x28);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(puVar1 + 2);
    *(undefined8 *)(puVar2 + 6) = *(undefined8 *)(puVar1 + 6);
    return 1;
  }
  return 0;
}



// FUNCTION 143d60190 pkey_dsa_cleanup body=37 status=ok
// SIG undefined pkey_dsa_cleanup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void pkey_dsa_cleanup(longlong param_1)

{
  CRYPTO_free(*(undefined8 *)(param_1 + 0x28),"crypto\\dsa\\dsa_pmeth.c",0x44);
  return;
}



// FUNCTION 143d601c0 pkey_dsa_sign body=150 status=ok
// SIG undefined pkey_dsa_sign(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
pkey_dsa_sign(longlong param_1,undefined8 param_2,ulonglong *param_3,undefined8 param_4,
             longlong param_5)

{
  int iVar1;
  undefined8 uVar2;
  uint local_res8 [2];
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  if ((*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) != 0) &&
     (iVar1 = EVP_MD_size(), param_5 != iVar1)) {
    return 0;
  }
  uVar2 = DSA_sign(0,param_4,(undefined4)param_5,param_2,local_res8,uVar2);
  if (0 < (int)uVar2) {
    *param_3 = (ulonglong)local_res8[0];
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 143d60260 pkey_dsa_verify body=128 status=ok
// SIG undefined pkey_dsa_verify(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
pkey_dsa_verify(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               longlong param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  if ((*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) != 0) &&
     (iVar1 = EVP_MD_size(), param_5 != iVar1)) {
    return 0;
  }
  uVar2 = DSA_verify(0,param_4,(undefined4)param_5,param_2,param_3,uVar2);
  return uVar2;
}



// FUNCTION 143d602e0 FUN_143d602e0 body=485 status=ok
// SIG undefined FUN_143d602e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_143d602e0(longlong param_1,int param_2,int param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143d602f0;
  piVar1 = *(int **)(param_1 + 0x28);
  if (param_2 < 0x1002) {
    if (param_2 == 0x1001) {
      if (0xff < param_3) {
        *piVar1 = param_3;
        return 1;
      }
    }
    else {
      switch(param_2) {
      case 1:
        iVar2 = FRollingHash::GetWindowSize(param_4);
        if (((iVar2 == 0x40) || (iVar2 = FRollingHash::GetWindowSize(param_4), iVar2 == 0x74)) ||
           (((iVar2 = FRollingHash::GetWindowSize(param_4), iVar2 == 0x42 ||
             (((iVar2 = FRollingHash::GetWindowSize(param_4), iVar2 == 0x2a3 ||
               (iVar2 = FRollingHash::GetWindowSize(param_4), iVar2 == 0x2a0)) ||
              (iVar2 = FRollingHash::GetWindowSize(param_4), iVar2 == 0x2a1)))) ||
            (iVar2 = FRollingHash::GetWindowSize(param_4), iVar2 == 0x2a2)))) {
          *(undefined8 **)(piVar1 + 6) = param_4;
          return 1;
        }
        uVar3 = 0x8e;
LAB_143d60454:
        ERR_put_error(10,0x78,0x6a,"crypto\\dsa\\dsa_pmeth.c",uVar3,uVar4);
        return 0;
      case 2:
        ERR_put_error(10,0x78,0x96,"crypto\\dsa\\dsa_pmeth.c",0x9f,0x143d602f0);
        break;
      case 5:
      case 7:
      case 0xb:
        return 1;
      case 0xd:
        *param_4 = *(undefined8 *)(piVar1 + 6);
        return 1;
      }
    }
  }
  else if (param_2 == 0x1002) {
    if ((((param_3 == 0xa0) || (param_3 == 0xe0)) || (param_3 == 0)) || (param_3 == 0x100)) {
      piVar1[1] = param_3;
      return 1;
    }
  }
  else if (param_2 == 0x1003) {
    iVar2 = FRollingHash::GetWindowSize(param_4);
    if (((iVar2 == 0x40) || (iVar2 = FRollingHash::GetWindowSize(param_4), iVar2 == 0x2a3)) ||
       (iVar2 = FRollingHash::GetWindowSize(param_4), iVar2 == 0x2a0)) {
      *(undefined8 **)(piVar1 + 2) = param_4;
      return 1;
    }
    uVar3 = 0x80;
    goto LAB_143d60454;
  }
  return 0xfffffffe;
}



// FUNCTION 143d60500 pkey_dsa_ctrl_str body=346 status=ok
// SIG undefined pkey_dsa_ctrl_str(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_dsa_ctrl_str(undefined8 param_1,char *param_2,char *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143d60515;
  iVar1 = _guard_xfg_dispatch_icall_nop(param_2,"dsa_paramgen_bits");
  if (iVar1 == 0) {
    iVar1 = atoi(param_3);
    uVar3 = EVP_PKEY_CTX_ctrl(param_1,0x74,2,0x1001,iVar1,0);
    return uVar3;
  }
  iVar1 = _guard_xfg_dispatch_icall_nop(param_2,"dsa_paramgen_q_bits");
  if (iVar1 == 0) {
    iVar1 = atoi(param_3);
    uVar3 = EVP_PKEY_CTX_ctrl(param_1,0x74,2,0x1002,iVar1,0);
    return uVar3;
  }
  iVar1 = _guard_xfg_dispatch_icall_nop(param_2,"dsa_paramgen_md");
  if (iVar1 != 0) {
    return 0xfffffffe;
  }
  lVar2 = EVP_get_digestbyname(param_3);
  if (lVar2 == 0) {
    ERR_put_error(10,0x68,0x6a,"crypto\\dsa\\dsa_pmeth.c",0xb9,uVar3);
    return 0;
  }
  uVar3 = EVP_PKEY_CTX_ctrl(param_1,0x74,2,0x1003,0,lVar2);
  return uVar3;
}



// FUNCTION 143d60660 pkey_dsa_paramgen body=226 status=ok
// SIG undefined pkey_dsa_paramgen(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int pkey_dsa_paramgen(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  piVar1 = *(int **)(param_1 + 0x28);
  lVar3 = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar3 = BN_GENCB_new();
    if (lVar3 == 0) {
      return 0;
    }
    evp_pkey_set_cb_translate(lVar3,param_1);
  }
  lVar4 = DSA_new();
  if (lVar4 == 0) {
    BN_GENCB_free(lVar3);
    return 0;
  }
  iVar2 = dsa_builtin_paramgen
                    (lVar4,(longlong)*piVar1,(longlong)piVar1[1],*(undefined8 *)(piVar1 + 2),0,0,0,0
                     ,0,lVar3);
  BN_GENCB_free(lVar3);
  if (iVar2 == 0) {
    DSA_free(lVar4);
    return 0;
  }
  EVP_PKEY_assign(param_2,0x74,lVar4);
  return iVar2;
}



// FUNCTION 143d60750 pkey_dsa_keygen body=136 status=ok
// SIG undefined pkey_dsa_keygen(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_dsa_keygen(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    ERR_put_error(10,0x79,0x6b,"crypto\\dsa\\dsa_pmeth.c",0xe5,0x143d60760);
  }
  else {
    lVar2 = DSA_new();
    if (lVar2 != 0) {
      EVP_PKEY_assign(param_2,0x74,lVar2);
      iVar1 = EVP_PKEY_copy_parameters(param_2,*(undefined8 *)(param_1 + 0x10));
      if (iVar1 != 0) {
        uVar3 = DSA_generate_key(*(undefined8 *)(param_2 + 0x28));
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 143d607e0 pkey_ec_init body=103 status=ok
// SIG undefined pkey_ec_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_ec_init(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143d607ec;
  lVar1 = CRYPTO_zalloc(0x40,"crypto\\ec\\ec_pmeth.c",0x2d);
  if (lVar1 == 0) {
    ERR_put_error(0x10,0x11a,0x41,"crypto\\ec\\ec_pmeth.c",0x2e,uVar2);
    return 0;
  }
  *(undefined2 *)(lVar1 + 0x18) = 0x1ff;
  *(longlong *)(param_1 + 0x28) = lVar1;
  return 1;
}



// FUNCTION 143d60850 pkey_ec_copy body=291 status=ok
// SIG undefined pkey_ec_copy(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_ec_copy(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143d60865;
  plVar2 = (longlong *)CRYPTO_zalloc(0x40,"crypto\\ec\\ec_pmeth.c",0x2d);
  if (plVar2 == (longlong *)0x0) {
    ERR_put_error(0x10,0x11a,0x41,"crypto\\ec\\ec_pmeth.c",0x2e,uVar4);
    return 0;
  }
  *(undefined2 *)(plVar2 + 3) = 0x1ff;
  *(longlong **)(param_1 + 0x28) = plVar2;
  plVar1 = *(longlong **)(param_2 + 0x28);
  if (*plVar1 != 0) {
    lVar3 = EC_GROUP_dup();
    *plVar2 = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
  }
  plVar2[1] = plVar1[1];
  if (plVar1[2] != 0) {
    lVar3 = EC_KEY_dup();
    plVar2[2] = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
  }
  *(undefined1 *)((longlong)plVar2 + 0x19) = *(undefined1 *)((longlong)plVar1 + 0x19);
  plVar2[4] = plVar1[4];
  plVar2[7] = plVar1[7];
  if (plVar1[5] == 0) {
    plVar2[5] = 0;
  }
  else {
    lVar3 = CRYPTO_memdup(plVar1[5],plVar1[6],"crypto\\ec\\ec_pmeth.c",0x4f);
    plVar2[5] = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
  }
  plVar2[6] = plVar1[6];
  return 1;
}



// FUNCTION 143d60980 pkey_ec_cleanup body=110 status=ok
// SIG undefined pkey_ec_cleanup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void pkey_ec_cleanup(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  if (puVar1 != (undefined8 *)0x0) {
    EC_GROUP_free(*puVar1);
    EC_KEY_free(puVar1[2]);
    CRYPTO_free(puVar1[5],"crypto\\ec\\ec_pmeth.c",0x5e);
    CRYPTO_free(puVar1,"crypto\\ec\\ec_pmeth.c",0x5f);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 143d609f0 pkey_ec_sign body=198 status=ok
// SIG undefined pkey_ec_sign(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
pkey_ec_sign(longlong param_1,longlong param_2,ulonglong *param_3,undefined8 param_4,
            undefined4 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint local_res8 [2];
  undefined8 in_stack_ffffffffffffffd8;
  undefined8 uVar6;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar6 = 0x143d60a08;
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  iVar2 = ECDSA_size(uVar5);
  if (iVar2 < 1) {
LAB_143d60a59:
    uVar5 = 0;
  }
  else {
    uVar4 = (ulonglong)iVar2;
    if (param_2 != 0) {
      if (*param_3 < uVar4) {
        ERR_put_error(0x10,0xda,100,"crypto\\ec\\ec_pmeth.c",CONCAT44(uVar3,0x77),uVar6);
        goto LAB_143d60a59;
      }
      if (*(longlong *)(lVar1 + 8) == 0) {
        uVar3 = 0x40;
      }
      else {
        uVar3 = FRollingHash::GetWindowSize();
      }
      uVar5 = ECDSA_sign(uVar3,param_4,param_5,param_2,local_res8,uVar5);
      if ((int)uVar5 < 1) {
        return uVar5;
      }
      uVar4 = (ulonglong)local_res8[0];
    }
    *param_3 = uVar4;
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 143d60ac0 pkey_ec_verify body=119 status=ok
// SIG undefined pkey_ec_verify(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void pkey_ec_verify(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                   undefined4 param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 8) == 0) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = FRollingHash::GetWindowSize();
  }
  ECDSA_verify(uVar2,param_4,param_5,param_2,param_3,uVar1);
  return;
}



// FUNCTION 143d60b40 pkey_ec_kdf_derive body=397 status=ok
// SIG undefined pkey_ec_kdf_derive(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_ec_kdf_derive(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong local_res8;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar7;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar4 = 0;
  if (*(char *)(lVar1 + 0x19) == '\x01') {
    uVar4 = pkey_ec_derive();
  }
  else if (param_2 == 0) {
    *param_3 = *(longlong *)(lVar1 + 0x38);
    uVar4 = 1;
  }
  else {
    if (*param_3 == *(longlong *)(lVar1 + 0x38)) {
      if ((*(longlong *)(param_1 + 0x10) != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
        lVar6 = *(longlong *)(lVar1 + 0x10);
        if (lVar6 == 0) {
          lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28);
        }
        uVar5 = FUniqueNetIdString::GetBytes(lVar6);
        iVar3 = EC_GROUP_get_degree(uVar5);
        local_res8 = (longlong)((int)(iVar3 + 7 + (iVar3 + 7 >> 0x1f & 7U)) >> 3);
        lVar6 = CRYPTO_malloc(local_res8,"crypto\\ec\\ec_pmeth.c",0xcd);
        if (lVar6 == 0) {
          ERR_put_error(0x10,0x11b,0x41,"crypto\\ec\\ec_pmeth.c",CONCAT44(uVar7,0xce));
          return 0;
        }
        iVar3 = pkey_ec_derive(param_1,lVar6,&local_res8);
        lVar2 = local_res8;
        if ((iVar3 != 0) &&
           (iVar3 = ECDH_KDF_X9_62(param_2,*param_3,lVar6,local_res8,*(undefined8 *)(lVar1 + 0x28),
                                   *(undefined8 *)(lVar1 + 0x30),*(undefined8 *)(lVar1 + 0x20)),
           iVar3 != 0)) {
          uVar4 = 1;
        }
        CRYPTO_clear_free(lVar6,lVar2,"crypto\\ec\\ec_pmeth.c",0xda);
        return uVar4;
      }
      ERR_put_error(0x10,0xd9,0x8c,"crypto\\ec\\ec_pmeth.c",0xa0);
    }
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 143d60cd0 FUN_143d60cd0 body=1042 status=ok
// SIG undefined FUN_143d60cd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_143d60cd0(longlong param_1,int param_2,int param_3,longlong *param_4)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (param_2 < 0x1002) {
    if (param_2 == 0x1001) {
      lVar4 = EC_GROUP_new_by_curve_name(param_3);
      if (lVar4 != 0) {
        EC_GROUP_free(*plVar1);
        *plVar1 = lVar4;
        return 1;
      }
      ERR_put_error(0x10,0xc5,0x8d,"crypto\\ec\\ec_pmeth.c",0xe7);
      return 0;
    }
    switch(param_2) {
    case 1:
      iVar2 = FRollingHash::GetWindowSize(param_4);
      if ((((iVar2 != 0x40) && (iVar2 = FRollingHash::GetWindowSize(param_4), iVar2 != 0x1a0)) &&
          (iVar2 = FRollingHash::GetWindowSize(param_4), iVar2 != 0x2a3)) &&
         (((iVar2 = FRollingHash::GetWindowSize(param_4), iVar2 != 0x2a0 &&
           (iVar2 = FRollingHash::GetWindowSize(param_4), iVar2 != 0x2a1)) &&
          (iVar2 = FRollingHash::GetWindowSize(param_4), iVar2 != 0x2a2)))) {
        ERR_put_error(0x10,0xc5,0x8a,"crypto\\ec\\ec_pmeth.c",0x147);
        return 0;
      }
      plVar1[1] = (longlong)param_4;
      return 1;
    case 2:
    case 5:
    case 7:
    case 0xb:
      return 1;
    case 0xd:
      *param_4 = plVar1[1];
      return 1;
    }
  }
  else {
    switch(param_2) {
    case 0x1002:
      if (*plVar1 == 0) {
        ERR_put_error(0x10,0xc5,0x8b,"crypto\\ec\\ec_pmeth.c",0xf0,0x143d60ce5);
        return 0;
      }
      BIO_set_shutdown(*plVar1,param_3);
      return 1;
    case 0x1003:
      if (param_3 == -2) {
        if ((char)plVar1[3] != -1) {
          return (int)(char)plVar1[3];
        }
        uVar3 = UPartyBeaconState::GetMaxPlayersPerTeam
                          (*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28));
        return uVar3 >> 0xc & 1;
      }
      if (param_3 + 1U < 3) {
        *(char *)(plVar1 + 3) = (char)param_3;
        if (param_3 == -1) {
          EC_KEY_free();
          plVar1[2] = 0;
          return 1;
        }
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28);
        lVar5 = *(longlong *)(lVar4 + 0x18);
        if (lVar5 == 0) {
          return 0xfffffffe;
        }
        iVar2 = BN_is_one(*(undefined8 *)(lVar5 + 0x18));
        if (iVar2 != 0) {
          return 1;
        }
        lVar5 = plVar1[2];
        if (lVar5 == 0) {
          lVar5 = EC_KEY_dup(lVar4);
          plVar1[2] = lVar5;
          if (lVar5 == 0) {
            return 0;
          }
        }
        if (param_3 != 0) {
          FUN_143d17e10();
          return 1;
        }
        FUN_143d17710(lVar5,0x1000);
        return 1;
      }
      break;
    case 0x1004:
      if (param_3 == -2) {
        return (int)*(char *)((longlong)plVar1 + 0x19);
      }
      if (param_3 - 1U < 2) {
        *(char *)((longlong)plVar1 + 0x19) = (char)param_3;
        return 1;
      }
      break;
    case 0x1005:
      plVar1[4] = (longlong)param_4;
      return 1;
    case 0x1006:
      *param_4 = plVar1[4];
      return 1;
    case 0x1007:
      if (0 < param_3) {
        plVar1[7] = (longlong)param_3;
        return 1;
      }
      break;
    case 0x1008:
      *(int *)param_4 = (int)plVar1[7];
      return 1;
    case 0x1009:
      CRYPTO_free(plVar1[5],"crypto\\ec\\ec_pmeth.c",0x134);
      plVar1[5] = (longlong)param_4;
      lVar4 = (longlong)param_3;
      if (param_4 == (longlong *)0x0) {
        lVar4 = 0;
      }
      plVar1[6] = lVar4;
      return 1;
    case 0x100a:
      *param_4 = plVar1[5];
      return *(uint *)(plVar1 + 6);
    }
  }
  return 0xfffffffe;
}



// FUNCTION 143d61140 pkey_ec_ctrl_str body=555 status=ok
// SIG undefined pkey_ec_ctrl_str(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_ec_ctrl_str(undefined8 param_1,char *param_2,char *param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143d61155;
  iVar1 = _guard_xfg_dispatch_icall_nop(param_2,"ec_paramgen_curve");
  if (iVar1 == 0) {
    iVar1 = EC_curve_nist2nid(param_3);
    if (((iVar1 == 0) && (iVar1 = OBJ_sn2nid(param_3), iVar1 == 0)) &&
       (iVar1 = OBJ_ln2nid(param_3), iVar1 == 0)) {
      ERR_put_error(0x10,0xc6,0x8d,"crypto\\ec\\ec_pmeth.c",0x169,uVar4);
      return 0;
    }
    uVar4 = EVP_PKEY_CTX_ctrl(param_1,0x198,6,0x1001,iVar1,0);
    return uVar4;
  }
  iVar1 = _guard_xfg_dispatch_icall_nop(param_2,"ec_param_enc");
  if (iVar1 == 0) {
    iVar1 = _guard_xfg_dispatch_icall_nop(param_3,"explicit");
    uVar2 = 0;
    if (iVar1 != 0) {
      iVar1 = _guard_xfg_dispatch_icall_nop(param_3,"named_curve");
      if (iVar1 != 0) {
        return 0xfffffffe;
      }
      uVar2 = 1;
    }
    uVar4 = EVP_PKEY_CTX_ctrl(param_1,0x198,6,0x1002,uVar2,0);
    return uVar4;
  }
  iVar1 = _guard_xfg_dispatch_icall_nop(param_2,"ecdh_kdf_md");
  if (iVar1 != 0) {
    iVar1 = _guard_xfg_dispatch_icall_nop(param_2,"ecdh_cofactor_mode");
    if (iVar1 != 0) {
      return 0xfffffffe;
    }
    iVar1 = atoi(param_3);
    uVar4 = EVP_PKEY_CTX_ctrl(param_1,0x198,0x400,0x1003,iVar1,0);
    return uVar4;
  }
  lVar3 = EVP_get_digestbyname(param_3);
  if (lVar3 != 0) {
    uVar4 = EVP_PKEY_CTX_ctrl(param_1,0x198,0x400,0x1005,0,lVar3);
    return uVar4;
  }
  ERR_put_error(0x10,0xc6,0x97,"crypto\\ec\\ec_pmeth.c",0x179,uVar4);
  return 0;
}



// FUNCTION 143d61370 pkey_ec_paramgen body=176 status=ok
// SIG undefined pkey_ec_paramgen(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int pkey_ec_paramgen(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (*plVar1 == 0) {
    ERR_put_error(0x10,0xdb,0x8b,"crypto\\ec\\ec_pmeth.c",0x18d,0x143d61380);
    return 0;
  }
  lVar3 = EC_KEY_new();
  if (lVar3 != 0) {
    iVar2 = EC_KEY_set_group(lVar3,*plVar1);
    if ((iVar2 != 0) && (iVar2 = EVP_PKEY_assign(param_2,0x198,lVar3), iVar2 != 0)) {
      return iVar2;
    }
    EC_KEY_free(lVar3);
    return 0;
  }
  return 0;
}



// FUNCTION 143d61420 pkey_ec_keygen body=210 status=ok
// SIG undefined pkey_ec_keygen(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_ec_keygen(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if ((*(longlong *)(param_1 + 0x10) == 0) && (*plVar1 == 0)) {
    ERR_put_error(0x10,199,0x8b,"crypto\\ec\\ec_pmeth.c",0x1a0,0x143d61435);
    return 0;
  }
  lVar3 = EC_KEY_new();
  if (lVar3 != 0) {
    iVar2 = EVP_PKEY_assign(param_2,0x198,lVar3);
    if (iVar2 == 0) {
      EC_KEY_free(lVar3);
    }
    else {
      if (*(longlong *)(param_1 + 0x10) == 0) {
        iVar2 = EC_KEY_set_group(lVar3,*plVar1);
      }
      else {
        iVar2 = EVP_PKEY_copy_parameters(param_2);
      }
      if (iVar2 != 0) {
        uVar4 = EC_KEY_generate_key(lVar3);
        return uVar4;
      }
    }
  }
  return 0;
}



// FUNCTION 143d61500 pkey_ec_derive body=243 status=ok
// SIG undefined pkey_ec_derive(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_ec_derive(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x10) != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10);
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28);
    }
    if (param_2 == 0) {
      uVar2 = FUniqueNetIdString::GetBytes(lVar3);
      iVar1 = EC_GROUP_get_degree(uVar2);
      *param_3 = (longlong)((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3);
    }
    else {
      uVar2 = USignificanceManager::GetWorld(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x28));
      iVar1 = ECDH_compute_key(param_2,*param_3,uVar2,lVar3,0);
      if (iVar1 < 1) {
        return 0;
      }
      *param_3 = (longlong)iVar1;
    }
    return 1;
  }
  ERR_put_error(0x10,0xd9,0x8c,"crypto\\ec\\ec_pmeth.c",0xa0,0x143d61510);
  return 0;
}



// FUNCTION 143d61600 pkey_sm2_init body=95 status=ok
// SIG undefined pkey_sm2_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_sm2_init(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143d6160c;
  lVar1 = CRYPTO_zalloc(0x28,"crypto\\sm2\\sm2_pmeth.c",0x24);
  if (lVar1 == 0) {
    ERR_put_error(0x35,0x6f,0x41,"crypto\\sm2\\sm2_pmeth.c",0x25,uVar2);
    return 0;
  }
  *(longlong *)(param_1 + 0x28) = lVar1;
  return 1;
}



// FUNCTION 143d61660 pkey_sm2_cleanup body=101 status=ok
// SIG undefined pkey_sm2_cleanup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void pkey_sm2_cleanup(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  if (puVar1 != (undefined8 *)0x0) {
    EC_GROUP_free(*puVar1);
    CRYPTO_free(puVar1[2],"crypto\\sm2\\sm2_pmeth.c",0x33);
    CRYPTO_free(puVar1,"crypto\\sm2\\sm2_pmeth.c",0x34);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 143d616d0 pkey_sm2_copy body=287 status=ok
// SIG undefined pkey_sm2_copy(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_sm2_copy(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  void *_Dst;
  undefined8 uVar4;
  
  uVar4 = 0x143d616e5;
  plVar2 = (longlong *)CRYPTO_zalloc(0x28,"crypto\\sm2\\sm2_pmeth.c",0x24);
  if (plVar2 == (longlong *)0x0) {
    ERR_put_error(0x35,0x6f,0x41,"crypto\\sm2\\sm2_pmeth.c",0x25,uVar4);
    return 0;
  }
  *(longlong **)(param_1 + 0x28) = plVar2;
  plVar1 = *(longlong **)(param_2 + 0x28);
  if (*plVar1 != 0) {
    lVar3 = EC_GROUP_dup();
    *plVar2 = lVar3;
    if (lVar3 == 0) goto LAB_143d6179a;
  }
  if (plVar1[2] != 0) {
    _Dst = (void *)CRYPTO_malloc(plVar1[3],"crypto\\sm2\\sm2_pmeth.c",0x49);
    plVar2[2] = (longlong)_Dst;
    if (_Dst == (void *)0x0) {
      ERR_put_error(0x35,0x73,0x41,"crypto\\sm2\\sm2_pmeth.c",0x4b,uVar4);
LAB_143d6179a:
      pkey_sm2_cleanup(param_1);
      return 0;
    }
    _guard_xfg_dispatch_icall_nop(_Dst,(void *)plVar1[2],plVar1[3]);
  }
  plVar2[3] = plVar1[3];
  *(int *)(plVar2 + 4) = (int)plVar1[4];
  plVar2[1] = plVar1[1];
  return 1;
}



// FUNCTION 143d617f0 pkey_sm2_sign body=168 status=ok
// SIG undefined pkey_sm2_sign(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
pkey_sm2_sign(longlong param_1,longlong param_2,ulonglong *param_3,undefined8 param_4,
             undefined4 param_5)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint local_res8 [2];
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar5 = 0x143d6180a;
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  iVar1 = ECDSA_size(uVar3);
  if (iVar1 < 1) {
LAB_143d61856:
    uVar3 = 0;
  }
  else {
    uVar2 = (ulonglong)iVar1;
    if (param_2 != 0) {
      if (*param_3 < uVar2) {
        ERR_put_error(0x35,0x70,0x6b,"crypto\\sm2\\sm2_pmeth.c",CONCAT44(uVar4,0x6a));
        goto LAB_143d61856;
      }
      uVar3 = sm2_sign(param_4,param_5,param_2,local_res8,uVar3,uVar5);
      if ((int)uVar3 < 1) {
        return uVar3;
      }
      uVar2 = (ulonglong)local_res8[0];
    }
    *param_3 = uVar2;
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 143d618a0 pkey_sm2_verify body=51 status=ok
// SIG undefined pkey_sm2_verify(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void pkey_sm2_verify(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                    undefined4 param_5)

{
  sm2_verify(param_4,param_5,param_2,param_3);
  return;
}



// FUNCTION 143d618e0 pkey_sm2_encrypt body=151 status=ok
// SIG undefined pkey_sm2_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
pkey_sm2_encrypt(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 8);
  if (lVar2 == 0) {
    lVar2 = EVP_sm3();
  }
  if (param_2 == 0) {
    iVar1 = sm2_ciphertext_size(uVar3,lVar2,param_5,param_3);
    uVar3 = 1;
    if (iVar1 == 0) {
      uVar3 = 0xffffffff;
    }
  }
  else {
    uVar3 = sm2_encrypt(uVar3,lVar2,param_4,param_5,param_2,param_3);
  }
  return uVar3;
}



// FUNCTION 143d61980 pkey_sm2_decrypt body=151 status=ok
// SIG undefined pkey_sm2_decrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
pkey_sm2_decrypt(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 8);
  if (lVar2 == 0) {
    lVar2 = EVP_sm3();
  }
  if (param_2 == 0) {
    iVar1 = sm2_plaintext_size(uVar3,lVar2,param_5,param_3);
    uVar3 = 1;
    if (iVar1 == 0) {
      uVar3 = 0xffffffff;
    }
  }
  else {
    uVar3 = sm2_decrypt(uVar3,lVar2,param_4,param_5,param_2,param_3);
  }
  return uVar3;
}



// FUNCTION 143d61a20 pkey_sm2_ctrl body=528 status=ok
// SIG undefined pkey_sm2_ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_sm2_ctrl(longlong param_1,int param_2,int param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  void *_Dst;
  size_t _Size;
  undefined8 uVar3;
  
  uVar3 = 0x143d61a30;
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (0x1002 < param_2) {
    if (param_2 == 0x100b) {
      _Size = (size_t)param_3;
      if (param_3 < 1) {
        _Dst = (void *)0x0;
        uVar3 = 0xd0;
      }
      else {
        _Dst = (void *)CRYPTO_malloc(_Size,"crypto\\sm2\\sm2_pmeth.c",0xc6);
        if (_Dst == (void *)0x0) {
          ERR_put_error(0x35,0x6d,0x41,"crypto\\sm2\\sm2_pmeth.c",200);
          return 0;
        }
        _guard_xfg_dispatch_icall_nop(_Dst,param_4,_Size);
        uVar3 = 0xcc;
      }
      CRYPTO_free(plVar1[2],"crypto\\sm2\\sm2_pmeth.c",uVar3);
      plVar1[2] = (longlong)_Dst;
      plVar1[3] = _Size;
      *(undefined4 *)(plVar1 + 4) = 1;
      return 1;
    }
    if (param_2 == 0x100c) {
      _guard_xfg_dispatch_icall_nop(param_4,(void *)plVar1[2],plVar1[3]);
      return 1;
    }
    if (param_2 != 0x100d) {
      return 0xfffffffe;
    }
    *param_4 = plVar1[3];
    return 1;
  }
  if (param_2 == 0x1002) {
    if (*plVar1 != 0) {
      BIO_set_shutdown(*plVar1,param_3);
      return 1;
    }
    ERR_put_error(0x35,0x6d,0x6d,"crypto\\sm2\\sm2_pmeth.c",0xb6,0x143d61a30);
    return 0;
  }
  if (param_2 == 1) {
    plVar1[1] = (longlong)param_4;
    return 1;
  }
  if (param_2 == 0xd) {
    *param_4 = plVar1[1];
    return 1;
  }
  if (param_2 != 0x1001) {
    return 0xfffffffe;
  }
  lVar2 = EC_GROUP_new_by_curve_name(param_3);
  if (lVar2 != 0) {
    EC_GROUP_free(*plVar1);
    *plVar1 = lVar2;
    return 1;
  }
  ERR_put_error(0x35,0x6d,0x6c,"crypto\\sm2\\sm2_pmeth.c",0xad,uVar3);
  return 0;
}



// FUNCTION 143d61c30 pkey_sm2_ctrl_str body=331 status=ok
// SIG undefined pkey_sm2_ctrl_str(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_sm2_ctrl_str(undefined8 param_1,char *param_2,char *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143d61c45;
  iVar1 = _guard_xfg_dispatch_icall_nop(param_2,"ec_paramgen_curve");
  if (iVar1 != 0) {
    iVar1 = _guard_xfg_dispatch_icall_nop(param_2,"ec_param_enc");
    if (iVar1 != 0) {
      return 0xfffffffe;
    }
    iVar1 = _guard_xfg_dispatch_icall_nop(param_3,"explicit");
    uVar2 = 0;
    if (iVar1 != 0) {
      iVar1 = _guard_xfg_dispatch_icall_nop(param_3,"named_curve");
      if (iVar1 != 0) {
        return 0xfffffffe;
      }
      uVar2 = 1;
    }
    uVar3 = EVP_PKEY_CTX_ctrl(param_1,0x198,6,0x1002,uVar2,0);
    return uVar3;
  }
  iVar1 = EC_curve_nist2nid(param_3);
  if (((iVar1 == 0) && (iVar1 = OBJ_sn2nid(param_3), iVar1 == 0)) &&
     (iVar1 = OBJ_ln2nid(param_3), iVar1 == 0)) {
    ERR_put_error(0x35,0x6e,0x6c,"crypto\\sm2\\sm2_pmeth.c",0xed,uVar3);
    return 0;
  }
  uVar3 = EVP_PKEY_CTX_ctrl(param_1,0x198,6,0x1001,iVar1,0);
  return uVar3;
}



// FUNCTION 143d61d80 pkey_sm2_digest_custom body=244 status=ok
// SIG undefined pkey_sm2_digest_custom(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 pkey_sm2_digest_custom(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_68 [64];
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0x143d61d98;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  uVar4 = EVP_MD_CTX_md(param_2);
  iVar2 = EVP_MD_size(uVar4);
  if (*(int *)(lVar1 + 0x20) == 0) {
    local_78 = CONCAT44(local_78._4_4_,0x10e);
    ERR_put_error(0x35,0x72,0x70,"crypto\\sm2\\sm2_pmeth.c");
  }
  else {
    if (iVar2 < 0) {
      local_78 = CONCAT44(local_78._4_4_,0x113);
      ERR_put_error(0x35,0x72,0x66,"crypto\\sm2\\sm2_pmeth.c");
      return 0;
    }
    local_78 = uVar5;
    iVar3 = sm2_compute_z_digest
                      (local_68,uVar4,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18));
    if (iVar3 != 0) {
      uVar5 = EVP_DigestUpdate(param_2,local_68,(longlong)iVar2);
      return uVar5;
    }
  }
  return 0;
}



// FUNCTION 143d61e80 pkey_hmac_init body=172 status=ok
// SIG undefined pkey_hmac_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_hmac_init(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143d61e90;
  lVar1 = CRYPTO_zalloc(0x28,"crypto\\hmac\\hm_pmeth.c",0x1f);
  if (lVar1 == 0) {
    ERR_put_error(0xf,0x7b,0x41,"crypto\\hmac\\hm_pmeth.c",0x20,uVar3);
    return 0;
  }
  *(undefined4 *)(lVar1 + 0xc) = 4;
  lVar2 = HMAC_CTX_new();
  *(longlong *)(lVar1 + 0x20) = lVar2;
  if (lVar2 == 0) {
    CRYPTO_free(lVar1,"crypto\\hmac\\hm_pmeth.c",0x26);
    return 0;
  }
  *(longlong *)(param_1 + 0x28) = lVar1;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return 1;
}



// FUNCTION 143d61f30 pkey_hmac_cleanup body=112 status=ok
// SIG undefined pkey_hmac_cleanup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void pkey_hmac_cleanup(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FNiagaraEmitterHandle::GetInstance();
  if (lVar1 != 0) {
    HMAC_CTX_free(*(undefined8 *)(lVar1 + 0x20));
    CRYPTO_clear_free(*(undefined8 *)(lVar1 + 0x10),(longlong)*(int *)(lVar1 + 8),
                      "crypto\\hmac\\hm_pmeth.c",0x50);
    CRYPTO_free(lVar1,"crypto\\hmac\\hm_pmeth.c",0x51);
    FMemFileOut::seekp(param_1,0);
  }
  return;
}



// FUNCTION 143d61fa0 pkey_hmac_copy body=366 status=ok
// SIG undefined pkey_hmac_copy(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_hmac_copy(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143d61fb5;
  lVar2 = CRYPTO_zalloc(0x28,"crypto\\hmac\\hm_pmeth.c",0x1f);
  if (lVar2 == 0) {
    ERR_put_error(0xf,0x7b,0x41,"crypto\\hmac\\hm_pmeth.c",0x20,uVar6);
    return 0;
  }
  *(undefined4 *)(lVar2 + 0xc) = 4;
  lVar3 = HMAC_CTX_new();
  *(longlong *)(lVar2 + 0x20) = lVar3;
  if (lVar3 == 0) {
    CRYPTO_free(lVar2,"crypto\\hmac\\hm_pmeth.c",0x26);
    return 0;
  }
  *(longlong *)(param_1 + 0x28) = lVar2;
  *(undefined4 *)(param_1 + 0x48) = 0;
  puVar4 = (undefined8 *)FNiagaraEmitterHandle::GetInstance(param_2);
  puVar5 = (undefined8 *)FNiagaraEmitterHandle::GetInstance(param_1);
  *puVar5 = *puVar4;
  iVar1 = HMAC_CTX_copy(puVar5[4],puVar4[4]);
  if (iVar1 != 0) {
    if (puVar4[2] != 0) {
      iVar1 = ASN1_OCTET_STRING_set(puVar5 + 1,puVar4[2],*(undefined4 *)(puVar4 + 1));
      if (iVar1 == 0) goto LAB_143d620aa;
    }
    return 1;
  }
LAB_143d620aa:
  lVar2 = FNiagaraEmitterHandle::GetInstance(param_1);
  if (lVar2 != 0) {
    HMAC_CTX_free(*(undefined8 *)(lVar2 + 0x20));
    CRYPTO_clear_free(*(undefined8 *)(lVar2 + 0x10),(longlong)*(int *)(lVar2 + 8),
                      "crypto\\hmac\\hm_pmeth.c",0x50);
    CRYPTO_free(lVar2,"crypto\\hmac\\hm_pmeth.c",0x51);
    FMemFileOut::seekp(param_1,0);
  }
  return 0;
}



// FUNCTION 143d62110 pkey_hmac_keygen body=78 status=ok
// SIG undefined pkey_hmac_keygen(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_hmac_keygen(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10) != 0) {
    lVar1 = ASN1_INTEGER_dup(*(longlong *)(param_1 + 0x28) + 8);
    if (lVar1 != 0) {
      EVP_PKEY_assign(param_2,0x357,lVar1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143d62160 hmac_signctx_init body=94 status=ok
// SIG undefined hmac_signctx_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 hmac_signctx_init(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar2 = EVP_MD_CTX_test_flags(param_2,0xfffffeff);
  HMAC_CTX_set_flags(*(undefined8 *)(lVar1 + 0x20),uVar2);
  EVP_MD_CTX_set_flags(param_2,0x100);
  FMemFileOut::seekp(param_2,int_update);
  return 1;
}



// FUNCTION 143d621c0 hmac_signctx body=131 status=ok
// SIG undefined hmac_signctx(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 hmac_signctx(longlong param_1,longlong param_2,ulonglong *param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  uint local_res8 [2];
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar3 = EVP_MD_CTX_md(param_4);
  iVar2 = EVP_MD_size(uVar3);
  if (iVar2 < 0) {
    return 0;
  }
  *param_3 = (longlong)iVar2;
  if (param_2 != 0) {
    iVar2 = HMAC_Final(*(undefined8 *)(lVar1 + 0x20),param_2,local_res8);
    if (iVar2 == 0) {
      return 0;
    }
    *param_3 = (ulonglong)local_res8[0];
  }
  return 1;
}



// FUNCTION 143d62250 pkey_hmac_ctrl body=135 status=ok
// SIG undefined pkey_hmac_ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_hmac_ctrl(longlong param_1,int param_2,int param_3,longlong param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (param_2 == 1) {
    *plVar1 = param_4;
  }
  else {
    if (param_2 == 6) {
      if ((param_4 == 0) && (0 < param_3)) {
        return 0;
      }
      if (param_3 < -1) {
        return 0;
      }
      iVar3 = ASN1_OCTET_STRING_set(plVar1 + 1,param_4);
    }
    else {
      if (param_2 != 7) {
        return 0xfffffffe;
      }
      puVar2 = *(undefined4 **)(*(longlong *)(param_1 + 0x10) + 0x28);
      iVar3 = HMAC_Init_ex(plVar1[4],*(undefined8 *)(puVar2 + 2),*puVar2,*plVar1,
                           *(undefined8 *)(param_1 + 8));
    }
    if (iVar3 == 0) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 143d622e0 pkey_hmac_ctrl_str body=141 status=ok
// SIG undefined pkey_hmac_ctrl_str(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_hmac_ctrl_str(undefined8 param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_3 == 0) {
    return 0;
  }
  uVar3 = 0;
  do {
    uVar4 = uVar3 + 1;
    uVar1 = 0;
    if (*(char *)(param_2 + uVar3) != *(char *)((longlong)&DAT_144044650 + uVar3)) {
      do {
        uVar3 = uVar1;
        if (*(char *)(param_2 + uVar3) != (&DAT_145d89da0)[uVar3]) {
          return 0xfffffffe;
        }
        uVar1 = uVar3 + 1;
      } while (uVar3 + 1 != 7);
      uVar2 = EVP_PKEY_CTX_hex2ctrl(param_1,uVar3 & 0xffffffff);
      return uVar2;
    }
    uVar3 = uVar4;
  } while (uVar4 != 4);
  uVar2 = EVP_PKEY_CTX_str2ctrl(param_1,6);
  return uVar2;
}



// FUNCTION 143d62370 int_update body=69 status=ok
// SIG undefined int_update(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool int_update(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = USignificanceManager::GetWorld();
  iVar1 = HMAC_Update(*(undefined8 *)(*(longlong *)(lVar2 + 0x28) + 0x20),param_2,param_3);
  return iVar1 != 0;
}



// FUNCTION 143d623c0 pkey_rsa_init body=124 status=ok
// SIG undefined pkey_rsa_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_rsa_init(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)CRYPTO_zalloc(0x50,"crypto\\rsa\\rsa_pmeth.c",0x35);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar1 = 0x400;
  puVar1[4] = 2;
  uVar2 = 6;
  if (*(int *)*param_1 != 0x390) {
    uVar2 = 1;
  }
  puVar1[7] = uVar2;
  *(undefined8 *)(puVar1 + 0xc) = 0xfffffffffffffffe;
  param_1[5] = puVar1;
  param_1[8] = puVar1 + 5;
  *(undefined4 *)(param_1 + 9) = 2;
  return 1;
}



// FUNCTION 143d62440 pkey_rsa_copy body=283 status=ok
// SIG undefined pkey_rsa_copy(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_rsa_copy(undefined8 *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  puVar2 = (undefined4 *)CRYPTO_zalloc(0x50,"crypto\\rsa\\rsa_pmeth.c",0x35);
  if (puVar2 == (undefined4 *)0x0) {
LAB_143d62544:
    uVar4 = 0;
  }
  else {
    *puVar2 = 0x400;
    puVar2[4] = 2;
    uVar5 = 6;
    if (*(int *)*param_1 != 0x390) {
      uVar5 = 1;
    }
    puVar2[7] = uVar5;
    *(undefined8 *)(puVar2 + 0xc) = 0xfffffffffffffffe;
    param_1[5] = puVar2;
    param_1[8] = puVar2 + 5;
    *(undefined4 *)(param_1 + 9) = 2;
    puVar1 = *(undefined4 **)(param_2 + 0x28);
    *puVar2 = *puVar1;
    if (*(longlong *)(puVar1 + 2) != 0) {
      lVar3 = BN_dup();
      *(longlong *)(puVar2 + 2) = lVar3;
      if (lVar3 == 0) goto LAB_143d62544;
    }
    puVar2[7] = puVar1[7];
    *(undefined8 *)(puVar2 + 8) = *(undefined8 *)(puVar1 + 8);
    *(undefined8 *)(puVar2 + 10) = *(undefined8 *)(puVar1 + 10);
    if (*(longlong *)(puVar1 + 0x10) != 0) {
      CRYPTO_free(*(undefined8 *)(puVar2 + 0x10),"crypto\\rsa\\rsa_pmeth.c",0x5b);
      lVar3 = CRYPTO_memdup(*(undefined8 *)(puVar1 + 0x10),*(undefined8 *)(puVar1 + 0x12),
                            "crypto\\rsa\\rsa_pmeth.c",0x5c);
      *(longlong *)(puVar2 + 0x10) = lVar3;
      if (lVar3 == 0) goto LAB_143d62544;
      *(undefined8 *)(puVar2 + 0x12) = *(undefined8 *)(puVar1 + 0x12);
    }
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 143d62560 pkey_rsa_cleanup body=109 status=ok
// SIG undefined pkey_rsa_cleanup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void pkey_rsa_cleanup(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    BN_free(*(undefined8 *)(lVar1 + 8));
    CRYPTO_free(*(undefined8 *)(lVar1 + 0x38),"crypto\\rsa\\rsa_pmeth.c",0x74);
    CRYPTO_free(*(undefined8 *)(lVar1 + 0x40),"crypto\\rsa\\rsa_pmeth.c",0x75);
    CRYPTO_free(lVar1,"crypto\\rsa\\rsa_pmeth.c",0x76);
    return;
  }
  return;
}



// FUNCTION 143d625d0 pkey_rsa_sign body=614 status=ok
// SIG undefined pkey_rsa_sign(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong pkey_rsa_sign(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4,
                       size_t param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint local_res8 [2];
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 uVar7;
  ulonglong uVar8;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar8 = 0x143d625ec;
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  if (*(longlong *)(lVar1 + 0x20) == 0) {
    uVar7 = CONCAT44(uVar6,*(undefined4 *)(lVar1 + 0x1c));
LAB_143d62805:
    uVar8 = RSA_private_encrypt((int)param_5,param_4,param_2,uVar2,uVar7,uVar8);
LAB_143d62810:
    if (-1 < (int)uVar8) {
      *param_3 = (longlong)(int)uVar8;
      uVar8 = 1;
    }
  }
  else {
    iVar4 = EVP_MD_size();
    if (param_5 == (longlong)iVar4) {
      iVar5 = FRollingHash::GetWindowSize(*(undefined8 *)(lVar1 + 0x20));
      iVar4 = *(int *)(lVar1 + 0x1c);
      if (iVar5 == 0x5f) {
        if (iVar4 == 1) {
          uVar8 = RSA_sign_ASN1_OCTET_STRING(0,param_4,(int)param_5,param_2,local_res8,uVar2);
          if ((int)uVar8 < 1) {
            return uVar8;
          }
          uVar8 = (ulonglong)local_res8[0];
          goto LAB_143d62810;
        }
      }
      else {
        if (iVar4 == 5) {
          iVar4 = EVP_PKEY_size(*(undefined8 *)(param_1 + 0x10));
          if ((ulonglong)(longlong)iVar4 < param_5 + 1) {
            ERR_put_error(4,0x8e,0x78,"crypto\\rsa\\rsa_pmeth.c",CONCAT44(uVar6,0x94));
            return 0xffffffff;
          }
          iVar4 = setup_tbuf(lVar1,param_1);
          if (iVar4 == 0) {
            ERR_put_error(4,0x8e,0x41,"crypto\\rsa\\rsa_pmeth.c",CONCAT44(uVar6,0x98));
            return 0xffffffff;
          }
          _guard_xfg_dispatch_icall_nop(*(void **)(lVar1 + 0x38),param_4,param_5);
          uVar6 = FRollingHash::GetWindowSize(*(undefined8 *)(lVar1 + 0x20));
          uVar3 = RSA_X931_hash_id(uVar6);
          uVar7 = 5;
          *(undefined1 *)(param_5 + *(longlong *)(lVar1 + 0x38)) = uVar3;
          param_5._0_4_ = (int)param_5 + 1;
          param_4 = *(void **)(lVar1 + 0x38);
          goto LAB_143d62805;
        }
        if (iVar4 == 1) {
          uVar6 = FRollingHash::GetWindowSize(*(undefined8 *)(lVar1 + 0x20));
          uVar8 = RSA_sign(uVar6,param_4,(int)param_5,param_2,local_res8,uVar2);
          if ((int)uVar8 < 1) {
            return uVar8;
          }
          uVar8 = (ulonglong)local_res8[0];
          goto LAB_143d62810;
        }
        if ((iVar4 == 6) && (iVar4 = setup_tbuf(lVar1,param_1), iVar4 != 0)) {
          uVar8 = (ulonglong)*(uint *)(lVar1 + 0x30);
          iVar4 = RSA_padding_add_PKCS1_PSS_mgf1
                            (uVar2,*(undefined8 *)(lVar1 + 0x38),param_4,
                             *(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28),uVar8);
          if (iVar4 != 0) {
            param_5._0_4_ = RSA_size(uVar2);
            param_4 = *(void **)(lVar1 + 0x38);
            uVar7 = 3;
            goto LAB_143d62805;
          }
        }
      }
    }
    else {
      ERR_put_error(4,0x8e,0x8f,"crypto\\rsa\\rsa_pmeth.c",CONCAT44(uVar6,0x84));
    }
    uVar8 = 0xffffffff;
  }
  return uVar8;
}



// FUNCTION 143d62840 pkey_rsa_verifyrecover body=440 status=ok
// SIG undefined pkey_rsa_verifyrecover(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int pkey_rsa_verifyrecover
              (longlong param_1,void *param_2,longlong *param_3,undefined8 param_4,
              undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int local_res8 [2];
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 uVar7;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  lVar1 = *(longlong *)(param_1 + 0x28);
  iVar2 = *(int *)(lVar1 + 0x1c);
  if (*(longlong *)(lVar1 + 0x20) != 0) {
    if (iVar2 == 5) {
      iVar2 = setup_tbuf(lVar1,param_1);
      if (iVar2 == 0) {
        return -1;
      }
      uVar7 = CONCAT44(uVar6,5);
      iVar2 = RSA_public_decrypt((undefined4)param_5,param_4,*(undefined8 *)(lVar1 + 0x38),
                                 *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28),uVar7);
      uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
      if (0 < iVar2) {
        iVar2 = iVar2 + -1;
        uVar3 = FRollingHash::GetWindowSize(*(undefined8 *)(lVar1 + 0x20));
        uVar4 = RSA_X931_hash_id(uVar3);
        if (*(byte *)(*(longlong *)(lVar1 + 0x38) + (longlong)iVar2) == uVar4) {
          iVar5 = EVP_MD_size(*(undefined8 *)(lVar1 + 0x20));
          if (iVar2 != iVar5) {
            ERR_put_error(4,0x8d,0x8f,"crypto\\rsa\\rsa_pmeth.c",CONCAT44(uVar6,0xd5));
            return 0;
          }
          local_res8[0] = iVar2;
          if (param_2 != (void *)0x0) {
            _guard_xfg_dispatch_icall_nop(param_2,*(void **)(lVar1 + 0x38),(longlong)iVar2);
          }
          goto LAB_143d629d2;
        }
        ERR_put_error(4,0x8d,100,"crypto\\rsa\\rsa_pmeth.c",CONCAT44(uVar6,0xd0));
      }
    }
    else {
      if (iVar2 != 1) {
        return -1;
      }
      lVar1 = *(longlong *)(param_1 + 0x10);
      uVar6 = FRollingHash::GetWindowSize();
      iVar2 = int_rsa_verify(uVar6,0,0,param_2,local_res8,param_4,param_5,
                             *(undefined8 *)(lVar1 + 0x28));
      if (0 < iVar2) goto LAB_143d629d2;
    }
    return 0;
  }
  local_res8[0] =
       RSA_public_decrypt((undefined4)param_5,param_4,param_2,
                          *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28),
                          CONCAT44(uVar6,iVar2));
LAB_143d629d2:
  if (-1 < local_res8[0]) {
    *param_3 = (longlong)local_res8[0];
    return 1;
  }
  return local_res8[0];
}



// FUNCTION 143d62a00 pkey_rsa_verify body=740 status=ok
// SIG undefined pkey_rsa_verify(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
pkey_rsa_verify(longlong param_1,undefined8 param_2,ulonglong param_3,void *param_4,size_t param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  int local_res8 [2];
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 in_stack_ffffffffffffffd0;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffd0 >> 0x20);
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  if (*(longlong *)(lVar1 + 0x20) == 0) {
    iVar4 = setup_tbuf(lVar1,param_1);
    if (iVar4 == 0) {
      return 0xffffffff;
    }
    local_res8[0] =
         RSA_public_decrypt(param_3 & 0xffffffff,param_2,*(undefined8 *)(lVar1 + 0x38),uVar7,
                            CONCAT44(uVar8,*(undefined4 *)(lVar1 + 0x1c)));
    if (local_res8[0] == 0) {
      return 0;
    }
  }
  else {
    if (*(int *)(lVar1 + 0x1c) == 1) {
      uVar3 = FRollingHash::GetWindowSize();
      uVar7 = RSA_verify(uVar3,param_4,(undefined4)param_5,param_2,CONCAT44(uVar8,(int)param_3),
                         uVar7);
      return uVar7;
    }
    iVar4 = EVP_MD_size();
    if (param_5 != (longlong)iVar4) {
      ERR_put_error(4,0x95,0x8f,"crypto\\rsa\\rsa_pmeth.c",CONCAT44(uVar8,0xfc));
      return 0xffffffff;
    }
    if (*(int *)(lVar1 + 0x1c) != 5) {
      if (*(int *)(lVar1 + 0x1c) != 6) {
        return 0xffffffff;
      }
      iVar4 = setup_tbuf(lVar1,param_1);
      if (iVar4 == 0) {
        return 0xffffffff;
      }
      iVar4 = RSA_public_decrypt(param_3 & 0xffffffff,param_2,*(undefined8 *)(lVar1 + 0x38),uVar7,
                                 CONCAT44(uVar8,3));
      if (iVar4 < 1) {
        return 0;
      }
      iVar4 = RSA_verify_PKCS1_PSS_mgf1
                        (uVar7,param_4,*(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28),
                         *(undefined8 *)(lVar1 + 0x38),CONCAT44(uVar3,*(undefined4 *)(lVar1 + 0x30))
                        );
      if (iVar4 < 1) {
        return 0;
      }
      return 1;
    }
    lVar2 = *(longlong *)(param_1 + 0x28);
    iVar4 = *(int *)(lVar2 + 0x1c);
    if (*(longlong *)(lVar2 + 0x20) == 0) {
      local_res8[0] =
           RSA_public_decrypt(param_3 & 0xffffffff,param_2,0,
                              *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28),
                              CONCAT44(uVar8,iVar4));
    }
    else if (iVar4 == 5) {
      iVar4 = setup_tbuf(lVar2,param_1);
      if (iVar4 == 0) {
        return 0;
      }
      uVar7 = CONCAT44(uVar8,5);
      iVar4 = RSA_public_decrypt(param_3 & 0xffffffff,param_2,*(undefined8 *)(lVar2 + 0x38),
                                 *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28),uVar7);
      uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
      if (iVar4 < 1) {
        return 0;
      }
      iVar4 = iVar4 + -1;
      uVar3 = FRollingHash::GetWindowSize(*(undefined8 *)(lVar2 + 0x20));
      uVar5 = RSA_X931_hash_id(uVar3);
      if (*(byte *)((longlong)iVar4 + *(longlong *)(lVar2 + 0x38)) != uVar5) {
        uVar7 = CONCAT44(uVar8,0xd0);
        uVar8 = 100;
LAB_143d62b4d:
        ERR_put_error(4,0x8d,uVar8,"crypto\\rsa\\rsa_pmeth.c",uVar7);
        return 0;
      }
      iVar6 = EVP_MD_size(*(undefined8 *)(lVar2 + 0x20));
      local_res8[0] = iVar4;
      if (iVar4 != iVar6) {
        uVar7 = CONCAT44(uVar8,0xd5);
        uVar8 = 0x8f;
        goto LAB_143d62b4d;
      }
    }
    else {
      if (iVar4 != 1) {
        return 0;
      }
      lVar2 = *(longlong *)(param_1 + 0x10);
      uVar8 = FRollingHash::GetWindowSize();
      iVar4 = int_rsa_verify(uVar8,0,0,0,local_res8,param_2,param_3,*(undefined8 *)(lVar2 + 0x28));
      if (iVar4 < 1) {
        return 0;
      }
    }
    if (local_res8[0] < 0) {
      return 0;
    }
  }
  if (((longlong)local_res8[0] == param_5) &&
     (iVar4 = _guard_xfg_dispatch_icall_nop
                        (param_4,*(void **)(lVar1 + 0x38),(longlong)local_res8[0]), iVar4 == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 143d62cf0 pkey_rsa_encrypt body=239 status=ok
// SIG undefined pkey_rsa_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
pkey_rsa_encrypt(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                undefined4 param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  iVar3 = *(int *)(lVar1 + 0x1c);
  uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  if (iVar3 == 4) {
    uVar2 = RSA_size(uVar4);
    iVar3 = setup_tbuf(lVar1,param_1);
    if ((iVar3 == 0) ||
       (iVar3 = RSA_padding_add_PKCS1_OAEP_mgf1
                          (*(undefined8 *)(lVar1 + 0x38),uVar2,param_4,param_5,
                           *(undefined8 *)(lVar1 + 0x40),*(undefined4 *)(lVar1 + 0x48),
                           *(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28)), iVar3 == 0)
       ) {
      return 0xffffffff;
    }
    iVar3 = 3;
    param_4 = *(undefined8 *)(lVar1 + 0x38);
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
    param_5 = uVar2;
  }
  uVar4 = RSA_public_encrypt(param_5,param_4,param_2,uVar4,iVar3);
  if (-1 < (int)uVar4) {
    *param_3 = (longlong)(int)uVar4;
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 143d62de0 pkey_rsa_decrypt body=251 status=ok
// SIG undefined pkey_rsa_decrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong pkey_rsa_decrypt(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                          undefined4 param_5)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143d62e00;
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (*(int *)(lVar1 + 0x1c) == 4) {
    iVar2 = setup_tbuf(lVar1,param_1);
    if (iVar2 == 0) {
      return 0xffffffff;
    }
    uVar3 = RSA_private_decrypt(param_5,param_4,*(undefined8 *)(lVar1 + 0x38),
                                *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28),3);
    if ((int)uVar3 < 1) {
      return uVar3;
    }
    uVar3 = RSA_padding_check_PKCS1_OAEP_mgf1
                      (param_2,uVar3 & 0xffffffff,*(undefined8 *)(lVar1 + 0x38),uVar3 & 0xffffffff,
                       (int)uVar3,*(undefined8 *)(lVar1 + 0x40),*(undefined4 *)(lVar1 + 0x48),
                       *(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28),uVar4);
  }
  else {
    uVar3 = RSA_private_decrypt(param_5,param_4,param_2,
                                *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28),
                                *(int *)(lVar1 + 0x1c));
  }
  if (-1 < (int)uVar3) {
    *param_3 = (longlong)(int)uVar3;
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 143d62ee0 FUN_143d62ee0 body=1194 status=ok
// SIG undefined FUN_143d62ee0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_143d62ee0(undefined8 *param_1,int param_2,int param_3,longlong *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0x143d62efb;
  piVar1 = (int *)param_1[5];
  if (param_2 < 0x1002) {
    if (param_2 == 0x1001) {
      if (param_3 - 1U < 6) {
        iVar3 = check_padding_md(*(undefined8 *)(piVar1 + 8),param_3);
        if (iVar3 == 0) {
          return 0;
        }
        if (param_3 == 6) {
          bVar6 = (*(byte *)(param_1 + 4) & 0x18) == 0;
        }
        else {
          if (*(int *)*param_1 == 0x390) goto LAB_143d63058;
          if (param_3 != 4) goto LAB_143d6304e;
          bVar6 = (*(uint *)(param_1 + 4) & 0x300) == 0;
        }
        if (!bVar6) {
          if (*(longlong *)(piVar1 + 8) == 0) {
            uVar8 = EVP_sha1();
            *(undefined8 *)(piVar1 + 8) = uVar8;
          }
LAB_143d6304e:
          piVar1[7] = param_3;
          return 1;
        }
      }
LAB_143d63058:
      uVar7 = 0x1ab;
      uVar5 = 0x90;
    }
    else {
      switch(param_2) {
      case 1:
        iVar3 = check_padding_md(param_4,piVar1[7]);
        if (iVar3 == 0) {
          return 0;
        }
        if (piVar1[0xd] != -1) {
          iVar3 = FRollingHash::GetWindowSize(*(undefined8 *)(piVar1 + 8));
          iVar2 = FRollingHash::GetWindowSize(param_4);
          if (iVar3 == iVar2) {
            return 1;
          }
          ERR_put_error(4,0x8f,0x91,"crypto\\rsa\\rsa_pmeth.c",0x1f9,uVar8);
          return 0;
        }
        *(longlong **)(piVar1 + 8) = param_4;
        return 1;
      case 3:
      case 4:
      case 9:
      case 10:
        if (*(int *)*param_1 != 0x390) {
          return 1;
        }
      case 2:
        uVar7 = 0x243;
        uVar5 = 0x94;
        break;
      case 5:
      case 7:
      case 0xb:
        return 1;
      default:
        goto LAB_143d62fe7;
      case 0xd:
        *param_4 = *(longlong *)(piVar1 + 8);
        return 1;
      }
    }
    goto LAB_143d62fdd;
  }
  switch(param_2) {
  case 0x1002:
  case 0x1007:
    if (piVar1[7] == 6) {
      if (param_2 == 0x1007) {
        *(int *)param_4 = piVar1[0xc];
        return 1;
      }
      if (param_3 < -3) {
        return -2;
      }
      if (piVar1[0xd] == -1) goto LAB_143d63128;
      if ((param_3 != -2) || (*(int *)(param_1 + 4) != 0x10)) {
        if (param_3 == -1) {
          iVar3 = EVP_MD_size(*(undefined8 *)(piVar1 + 8));
          if (piVar1[0xd] <= iVar3) {
LAB_143d63128:
            piVar1[0xc] = param_3;
            return 1;
          }
        }
        else if ((param_3 < 0) || (piVar1[0xd] <= param_3)) goto LAB_143d63128;
        ERR_put_error(4,0x8f,0xa4,"crypto\\rsa\\rsa_pmeth.c",0x1c6,uVar8);
        return 0;
      }
      uVar7 = 0x1c0;
    }
    else {
      uVar7 = 0x1b5;
    }
    uVar5 = 0x92;
    break;
  case 0x1003:
    if (0x1ff < param_3) {
      *piVar1 = param_3;
      return 1;
    }
    uVar7 = 0x1d0;
    uVar5 = 0x78;
    break;
  case 0x1004:
    if (((param_4 != (longlong *)0x0) && (iVar3 = BN_is_odd(param_4), iVar3 != 0)) &&
       (iVar3 = BN_is_one(param_4), iVar3 == 0)) {
      BN_free(*(undefined8 *)(piVar1 + 2));
      *(longlong **)(piVar1 + 2) = param_4;
      return 1;
    }
    uVar7 = 0x1d8;
    uVar5 = 0x65;
    break;
  case 0x1005:
  case 0x1008:
    if ((piVar1[7] - 4U & 0xfffffffd) == 0) {
      if (param_2 != 0x1008) {
        if (piVar1[0xd] == -1) {
          *(longlong **)(piVar1 + 10) = param_4;
          return 1;
        }
        iVar3 = FRollingHash::GetWindowSize(param_4);
        iVar2 = FRollingHash::GetWindowSize(*(undefined8 *)(piVar1 + 10));
        if (iVar2 == iVar3) {
          return 1;
        }
        ERR_put_error(4,0x8f,0x98,"crypto\\rsa\\rsa_pmeth.c",0x213);
        return 0;
      }
      lVar4 = *(longlong *)(piVar1 + 10);
      if (lVar4 != 0) goto LAB_143d632ac;
LAB_143d632a8:
      lVar4 = *(longlong *)(piVar1 + 8);
LAB_143d632ac:
      *param_4 = lVar4;
      return 1;
    }
    uVar7 = 0x207;
    uVar5 = 0x9c;
    break;
  case 0x1006:
    *(int *)param_4 = piVar1[7];
    return 1;
  case 0x1009:
  case 0x100b:
    if (piVar1[7] == 4) {
      if (param_2 != 0x100b) {
        *(longlong **)(piVar1 + 8) = param_4;
        return 1;
      }
      goto LAB_143d632a8;
    }
    uVar7 = 0x1ea;
    goto LAB_143d63238;
  case 0x100a:
    if (piVar1[7] == 4) {
      CRYPTO_free(*(undefined8 *)(piVar1 + 0x10),"crypto\\rsa\\rsa_pmeth.c",0x21f);
      if ((param_4 != (longlong *)0x0) && (0 < param_3)) {
        *(longlong **)(piVar1 + 0x10) = param_4;
        *(longlong *)(piVar1 + 0x12) = (longlong)param_3;
        return 1;
      }
      piVar1[0x10] = 0;
      piVar1[0x11] = 0;
      piVar1[0x12] = 0;
      piVar1[0x13] = 0;
      return 1;
    }
    uVar7 = 0x21c;
    goto LAB_143d63238;
  case 0x100c:
    if (piVar1[7] == 4) {
      *param_4 = *(longlong *)(piVar1 + 0x10);
      return piVar1[0x12];
    }
    uVar7 = 0x22b;
LAB_143d63238:
    uVar5 = 0x8d;
    break;
  case 0x100d:
    if (param_3 - 2U < 4) {
      piVar1[4] = param_3;
      return 1;
    }
    uVar7 = 0x1e1;
    uVar5 = 0xa5;
    break;
  default:
    goto LAB_143d62fe7;
  }
LAB_143d62fdd:
  ERR_put_error(4,0x8f,uVar5,"crypto\\rsa\\rsa_pmeth.c",uVar7,uVar8);
LAB_143d62fe7:
  return -2;
}



// FUNCTION 143d633f0 pkey_rsa_ctrl_str body=1417 status=ok
// SIG undefined pkey_rsa_ctrl_str(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong pkey_rsa_ctrl_str(undefined8 *param_1,char *param_2,char *param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_res18 [2];
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar7 = 0x143d63405;
  if (param_3 == (char *)0x0) {
    ERR_put_error(4,0x90,0x93,"crypto\\rsa\\rsa_pmeth.c",CONCAT44(uVar6,0x250),0x143d63405);
  }
  else {
    iVar1 = _guard_xfg_dispatch_icall_nop(param_2,"rsa_padding_mode");
    if (iVar1 == 0) {
      lVar4 = 0;
      do {
        lVar5 = lVar4 + 1;
        if (param_3[lVar4] != (&DAT_145d6ad74)[lVar4]) {
          lVar4 = 0;
          goto LAB_143d634a0;
        }
        lVar4 = lVar5;
      } while (lVar5 != 6);
      uVar7 = 1;
      goto LAB_143d63589;
    }
    iVar1 = _guard_xfg_dispatch_icall_nop(param_2,"rsa_pss_saltlen");
    if (iVar1 == 0) {
      lVar4 = 0;
      do {
        lVar5 = lVar4;
        if (param_3[lVar5] != "digest"[lVar5]) {
          lVar4 = 0;
          goto LAB_143d63640;
        }
        lVar4 = lVar5 + 1;
      } while (lVar5 + 1 != 7);
      iVar1 = (int)lVar5 + -7;
      goto LAB_143d63684;
    }
    iVar1 = _guard_xfg_dispatch_icall_nop(param_2,"rsa_keygen_bits");
    if (iVar1 == 0) {
      iVar1 = atoi(param_3);
      uVar3 = RSA_pkey_ctx_ctrl(param_1,4,0x1003,iVar1,0);
      return uVar3;
    }
    iVar1 = _guard_xfg_dispatch_icall_nop(param_2,"rsa_keygen_pubexp");
    if (iVar1 == 0) {
      local_res18[0] = 0;
      iVar1 = BN_asc2bn(local_res18,param_3);
      if (iVar1 != 0) {
        uVar2 = RSA_pkey_ctx_ctrl(param_1,4,0x1004,0,local_res18[0]);
        if ((int)uVar2 < 1) {
          BN_free(local_res18[0]);
        }
        return (ulonglong)uVar2;
      }
    }
    else {
      iVar1 = _guard_xfg_dispatch_icall_nop(param_2,"rsa_keygen_primes");
      if (iVar1 == 0) {
        iVar1 = atoi(param_3);
        uVar3 = RSA_pkey_ctx_ctrl(param_1,4,0x100d,iVar1,0);
        return uVar3;
      }
      iVar1 = _guard_xfg_dispatch_icall_nop(param_2,"rsa_mgf1_md");
      if (iVar1 == 0) {
        uVar3 = EVP_PKEY_CTX_md(param_1,0x3f8,0x1005,param_3);
        return uVar3;
      }
      if (*(int *)*param_1 == 0x390) {
        iVar1 = _guard_xfg_dispatch_icall_nop(param_2,"rsa_pss_keygen_mgf1_md");
        if (iVar1 == 0) {
          uVar3 = EVP_PKEY_CTX_md(param_1,4,0x1005,param_3);
          return uVar3;
        }
        iVar1 = _guard_xfg_dispatch_icall_nop(param_2,"rsa_pss_keygen_md");
        if (iVar1 == 0) {
          uVar3 = EVP_PKEY_CTX_md(param_1,4,1,param_3);
          return uVar3;
        }
        iVar1 = _guard_xfg_dispatch_icall_nop(param_2,"rsa_pss_keygen_saltlen");
        if (iVar1 == 0) {
          iVar1 = atoi(param_3);
          uVar3 = EVP_PKEY_CTX_ctrl(param_1,0x390,4,0x1002,CONCAT44(uVar6,iVar1),0);
          return uVar3;
        }
      }
      iVar1 = _guard_xfg_dispatch_icall_nop(param_2,"rsa_oaep_md");
      if (iVar1 == 0) {
        uVar3 = EVP_PKEY_CTX_md(param_1,0x300,0x1009,param_3);
        return uVar3;
      }
      iVar1 = _guard_xfg_dispatch_icall_nop(param_2,"rsa_oaep_label");
      if (iVar1 != 0) {
        return 0xfffffffe;
      }
      lVar4 = OPENSSL_hexstr2buf(param_3,local_res18);
      if (lVar4 != 0) {
        uVar2 = EVP_PKEY_CTX_ctrl(param_1,6,0x300,0x100a,CONCAT44(uVar6,(undefined4)local_res18[0]),
                                  lVar4);
        if ((int)uVar2 < 1) {
          CRYPTO_free(lVar4,"crypto\\rsa\\rsa_pmeth.c",0x2b5);
        }
        return (ulonglong)uVar2;
      }
    }
  }
  return 0;
  while (lVar4 = lVar5, lVar5 != 7) {
LAB_143d634a0:
    lVar5 = lVar4 + 1;
    if (param_3[lVar4] != (&DAT_145d8a7ac)[lVar4]) {
      lVar4 = 0;
      goto LAB_143d634d0;
    }
  }
  uVar7 = 2;
  goto LAB_143d63589;
  while (lVar4 = lVar5, lVar5 != 5) {
LAB_143d634d0:
    lVar5 = lVar4 + 1;
    if (param_3[lVar4] != (&DAT_145d82b38)[lVar4]) {
      lVar4 = 0;
      goto LAB_143d63500;
    }
  }
  uVar7 = 3;
  goto LAB_143d63589;
  while (lVar4 = lVar5, lVar5 != 5) {
LAB_143d63500:
    lVar5 = lVar4 + 1;
    if (param_3[lVar4] != (&DAT_145d8a7b4)[lVar4]) {
      lVar4 = 0;
      goto LAB_143d63523;
    }
  }
  uVar7 = 4;
  goto LAB_143d63589;
  while (lVar4 = lVar5, lVar5 != 5) {
LAB_143d63523:
    lVar5 = lVar4 + 1;
    if (param_3[lVar4] != (&DAT_145d8a7bc)[lVar4]) {
      lVar4 = 0;
      goto LAB_143d63550;
    }
  }
  uVar7 = 4;
  goto LAB_143d63589;
  while (lVar4 = lVar5, lVar5 != 4) {
LAB_143d63640:
    lVar5 = lVar4 + 1;
    if (param_3[lVar4] != (&DAT_145d814a4)[lVar4]) {
      lVar4 = 0;
      goto LAB_143d63663;
    }
  }
  iVar1 = -3;
  goto LAB_143d63684;
  while (lVar4 = lVar5 + 1, lVar5 + 1 != 5) {
LAB_143d63663:
    lVar5 = lVar4;
    if (param_3[lVar5] != (&DAT_145d578bc)[lVar5]) {
      iVar1 = atoi(param_3);
      goto LAB_143d63684;
    }
  }
  iVar1 = (int)lVar5 + -6;
LAB_143d63684:
  uVar3 = RSA_pkey_ctx_ctrl(param_1,0x18,0x1002,iVar1,0);
  return uVar3;
  while (lVar4 = lVar5, lVar5 != 5) {
LAB_143d63550:
    lVar5 = lVar4 + 1;
    if (param_3[lVar4] != (&DAT_145d8a7c4)[lVar4]) {
      lVar4 = 0;
      do {
        lVar5 = lVar4 + 1;
        if (param_3[lVar4] != (&DAT_145d6c5f8)[lVar4]) {
          ERR_put_error(4,0x90,0x76,"crypto\\rsa\\rsa_pmeth.c",CONCAT44(uVar6,0x265),uVar7);
          return 0xfffffffe;
        }
        lVar4 = lVar5;
      } while (lVar5 != 4);
      uVar7 = 6;
      goto LAB_143d63589;
    }
  }
  uVar7 = 5;
LAB_143d63589:
  uVar3 = RSA_pkey_ctx_ctrl(param_1,0xffffffff,0x1001,uVar7,0);
  return uVar3;
}



// FUNCTION 143d63980 pkey_rsa_keygen body=319 status=ok
// SIG undefined pkey_rsa_keygen(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int pkey_rsa_keygen(undefined8 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143d63994;
  puVar1 = (undefined4 *)param_1[5];
  if (*(longlong *)(puVar1 + 2) == 0) {
    lVar3 = BN_new();
    *(longlong *)(puVar1 + 2) = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
    iVar2 = BN_set_word(lVar3,0x10001);
    if (iVar2 == 0) {
      return 0;
    }
  }
  lVar3 = RSA_new();
  if (lVar3 == 0) {
    return 0;
  }
  lVar4 = 0;
  if (param_1[7] == 0) {
LAB_143d63a14:
    iVar2 = RSA_generate_multi_prime_key
                      (lVar3,*puVar1,puVar1[4],*(undefined8 *)(puVar1 + 2),lVar4,uVar6);
    BN_GENCB_free(lVar4);
    if (iVar2 < 1) {
      RSA_free(lVar3);
      return iVar2;
    }
    lVar4 = param_1[5];
    if ((*(int *)*param_1 == 0x390) &&
       (((*(longlong *)(lVar4 + 0x20) != 0 || (*(longlong *)(lVar4 + 0x28) != 0)) ||
        (*(int *)(lVar4 + 0x30) != -2)))) {
      uVar5 = 0;
      if (*(int *)(lVar4 + 0x30) != -2) {
        uVar5 = *(undefined4 *)(lVar4 + 0x30);
      }
      lVar4 = rsa_pss_params_create(*(longlong *)(lVar4 + 0x20),*(undefined8 *)(lVar4 + 0x28),uVar5)
      ;
      *(longlong *)(lVar3 + 0x60) = lVar4;
      if (lVar4 == 0) goto LAB_143d63a7d;
    }
    EVP_PKEY_assign(param_2,*(undefined4 *)*param_1,lVar3);
  }
  else {
    lVar4 = BN_GENCB_new();
    if (lVar4 != 0) {
      evp_pkey_set_cb_translate(lVar4,param_1);
      goto LAB_143d63a14;
    }
LAB_143d63a7d:
    RSA_free(lVar3);
    iVar2 = 0;
  }
  return iVar2;
}



// FUNCTION 143d63ac0 pkey_pss_init body=233 status=ok
// SIG undefined pkey_pss_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_pss_init(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_res8 [2];
  undefined8 local_res10;
  undefined8 local_res18;
  
  lVar1 = param_1[5];
  if (*(int *)*param_1 == 0x390) {
    lVar2 = *(longlong *)(param_1[2] + 0x28);
    if (*(longlong *)(lVar2 + 0x60) == 0) {
      return 1;
    }
    iVar4 = rsa_pss_get_param(*(longlong *)(lVar2 + 0x60),&local_res10,&local_res18,local_res8);
    if (iVar4 != 0) {
      iVar5 = EVP_MD_size(local_res10);
      iVar6 = RSA_size(lVar2);
      bVar3 = RSA_bits(lVar2);
      iVar4 = (iVar6 - iVar5) + -1;
      if ((bVar3 & 7) != 1) {
        iVar4 = iVar6 - iVar5;
      }
      if (local_res8[0] <= iVar4) {
        *(int *)(lVar1 + 0x34) = local_res8[0];
        *(undefined8 *)(lVar1 + 0x20) = local_res10;
        *(undefined8 *)(lVar1 + 0x28) = local_res18;
        *(int *)(lVar1 + 0x30) = local_res8[0];
        return 1;
      }
      ERR_put_error(4,0xa5,0x96,"crypto\\rsa\\rsa_pmeth.c",0x334);
    }
  }
  return 0;
}



// FUNCTION 143d63bb0 check_padding_md body=252 status=ok
// SIG undefined check_padding_md(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 check_padding_md(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143d63bbc;
  if (param_1 != 0) {
    iVar1 = FRollingHash::GetWindowSize();
    if (param_2 == 3) {
      ERR_put_error(4,0x8c,0x8d,"crypto\\rsa\\rsa_pmeth.c",0x167,uVar2);
      return 0;
    }
    if (param_2 == 5) {
      iVar1 = RSA_X931_hash_id();
      if (iVar1 == -1) {
        ERR_put_error(4,0x8c,0x8e,"crypto\\rsa\\rsa_pmeth.c",0x16d,uVar2);
        return 0;
      }
    }
    else if ((((0x35 < iVar1 - 0x40U) ||
              ((0x24000080000001U >> ((ulonglong)(iVar1 - 0x40U) & 0x3f) & 1) == 0)) &&
             (1 < iVar1 - 3U)) &&
            (((iVar1 != 0x101 && (3 < iVar1 - 0x2a0U)) && (3 < iVar1 - 0x448U)))) {
      ERR_put_error(4,0x8c,0x9d,"crypto\\rsa\\rsa_pmeth.c",0x185,uVar2);
      return 0;
    }
  }
  return 1;
}



// FUNCTION 143d63cb0 setup_tbuf body=115 status=ok
// SIG undefined setup_tbuf(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 setup_tbuf(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143d63cbc;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    iVar1 = EVP_PKEY_size(*(undefined8 *)(param_2 + 0x10));
    lVar2 = CRYPTO_malloc((longlong)iVar1,"crypto\\rsa\\rsa_pmeth.c",0x68);
    *(longlong *)(param_1 + 0x38) = lVar2;
    if (lVar2 == 0) {
      ERR_put_error(4,0xa7,0x41,"crypto\\rsa\\rsa_pmeth.c",0x69,uVar3);
      return 0;
    }
  }
  return 1;
}



// FUNCTION 143d63d30 pkey_scrypt_init body=127 status=ok
// SIG undefined pkey_scrypt_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_scrypt_init(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143d63d3c;
  lVar1 = CRYPTO_zalloc(0x40,"crypto\\kdf\\scrypt.c",0x3c);
  if (lVar1 == 0) {
    ERR_put_error(0x34,0x6a,0x41,"crypto\\kdf\\scrypt.c",0x3e,uVar2);
    return 0;
  }
  *(undefined8 *)(lVar1 + 0x20) = 0x100000;
  *(undefined8 *)(lVar1 + 0x28) = 8;
  *(undefined8 *)(lVar1 + 0x30) = 1;
  *(undefined8 *)(lVar1 + 0x38) = 0x40100000;
  *(longlong *)(param_1 + 0x28) = lVar1;
  return 1;
}



// FUNCTION 143d63db0 pkey_scrypt_cleanup body=94 status=ok
// SIG undefined pkey_scrypt_cleanup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void pkey_scrypt_cleanup(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  CRYPTO_clear_free(puVar1[2],puVar1[3],"crypto\\kdf\\scrypt.c",0x54);
  CRYPTO_clear_free(*puVar1,puVar1[1],"crypto\\kdf\\scrypt.c",0x55);
  CRYPTO_free(puVar1,"crypto\\kdf\\scrypt.c",0x56);
  return;
}



// FUNCTION 143d63e10 FUN_143d63e10 body=220 status=ok
// SIG undefined FUN_143d63e10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_143d63e10(longlong param_1,undefined4 param_2,undefined4 param_3,ulonglong *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  switch(param_2) {
  case 0x1008:
    uVar3 = pkey_scrypt_set_membuf(lVar1,lVar1 + 8,param_4,param_3);
    return uVar3;
  case 0x1009:
    uVar3 = pkey_scrypt_set_membuf(lVar1 + 0x10,lVar1 + 0x18,param_4,param_3);
    return uVar3;
  case 0x100a:
    uVar2 = *param_4;
    if ((1 < uVar2) && ((uVar2 & uVar2 - 1) == 0)) {
      *(ulonglong *)(lVar1 + 0x20) = uVar2;
      return 1;
    }
    break;
  case 0x100b:
    if (*param_4 != 0) {
      *(ulonglong *)(lVar1 + 0x28) = *param_4;
      return 1;
    }
    break;
  case 0x100c:
    if (*param_4 != 0) {
      *(ulonglong *)(lVar1 + 0x30) = *param_4;
      return 1;
    }
    break;
  case 0x100d:
    if (*param_4 != 0) {
      *(ulonglong *)(lVar1 + 0x38) = *param_4;
      return 1;
    }
    break;
  default:
    return 0xfffffffe;
  }
  return 0;
}



// FUNCTION 143d63f10 pkey_scrypt_ctrl_str body=896 status=ok
// SIG undefined pkey_scrypt_ctrl_str(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong pkey_scrypt_ctrl_str(longlong param_1,char *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x143d63f20;
  if (param_3 == (char *)0x0) {
    ERR_put_error(0x34,0x68,0x66,"crypto\\kdf\\scrypt.c",0xb7,0x143d63f20);
    return 0;
  }
  uVar3 = 0;
  uVar6 = uVar3;
  while (uVar4 = uVar6 + 1, uVar5 = uVar3, param_2[uVar6] == (&DAT_145d8a9b4)[uVar6]) {
    uVar6 = uVar4;
    if (uVar4 == 5) {
      uVar3 = EVP_PKEY_CTX_str2ctrl(param_1,0x1008,param_3);
      return uVar3;
    }
  }
  while (uVar4 = uVar5 + 1, uVar6 = uVar3, param_2[uVar5] == "hexpass"[uVar5]) {
    uVar5 = uVar4;
    if (uVar4 == 8) {
      uVar3 = EVP_PKEY_CTX_hex2ctrl(param_1,0x1008,param_3);
      return uVar3;
    }
  }
  while (uVar4 = uVar6 + 1, uVar5 = uVar3, param_2[uVar6] == (&DAT_145d8a9c8)[uVar6]) {
    uVar6 = uVar4;
    if (uVar4 == 5) {
      uVar3 = EVP_PKEY_CTX_str2ctrl(param_1,0x1009,param_3);
      return uVar3;
    }
  }
  while (uVar6 = uVar5 + 1, param_2[uVar5] == "hexsalt"[uVar5]) {
    uVar5 = uVar6;
    if (uVar6 == 8) {
      uVar3 = EVP_PKEY_CTX_hex2ctrl(param_1,0x1009,param_3);
      return uVar3;
    }
  }
  if ((*param_2 == 'N') && (param_2[1] == '\0')) {
    uVar3 = FUN_143d64350(param_1,0x100a,param_3);
    return uVar3;
  }
  if ((*param_2 == 'r') && (param_2[1] == '\0')) {
    uVar3 = FUN_143d64350(param_1,0x100b,param_3);
    return uVar3;
  }
  if ((*param_2 != 'p') || (param_2[1] != '\0')) {
    iVar2 = _guard_xfg_dispatch_icall_nop(param_2,"maxmem_bytes");
    if (iVar2 != 0) {
      ERR_put_error(0x34,0x68,0x67,"crypto\\kdf\\scrypt.c",0xd4,uVar7);
      return 0xfffffffe;
    }
    cVar1 = *param_3;
    while( true ) {
      if (cVar1 == '\0') {
        if (uVar3 != 0) {
          *(ulonglong *)(*(longlong *)(param_1 + 0x28) + 0x38) = uVar3;
        }
        return (ulonglong)(uVar3 != 0);
      }
      if (9 < (byte)(cVar1 - 0x30U)) break;
      uVar6 = (ulonglong)((int)cVar1 - 0x30U) + uVar3 * 10;
      if ((uVar6 < (int)cVar1 - 0x30U) || ((uVar3 * 10) / 10 != uVar3)) break;
      cVar1 = param_3[1];
      param_3 = param_3 + 1;
      uVar3 = uVar6;
    }
    ERR_put_error(0x34,0x69,0x6c,"crypto\\kdf\\scrypt.c",0xad,uVar7);
    return 0;
  }
  cVar1 = *param_3;
  while( true ) {
    if (cVar1 == '\0') {
      if (uVar3 != 0) {
        *(ulonglong *)(*(longlong *)(param_1 + 0x28) + 0x30) = uVar3;
      }
      return (ulonglong)(uVar3 != 0);
    }
    if (9 < (byte)(cVar1 - 0x30U)) break;
    uVar6 = (ulonglong)((int)cVar1 - 0x30U) + uVar3 * 10;
    if ((uVar6 < (int)cVar1 - 0x30U) || ((uVar3 * 10) / 10 != uVar3)) break;
    cVar1 = param_3[1];
    param_3 = param_3 + 1;
    uVar3 = uVar6;
  }
  ERR_put_error(0x34,0x69,0x6c,"crypto\\kdf\\scrypt.c",0xad,0x143d63f20);
  return 0;
}



// FUNCTION 143d64290 pkey_scrypt_derive body=182 status=ok
// SIG undefined pkey_scrypt_derive(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_scrypt_derive(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (*plVar1 == 0) {
    ERR_put_error(0x34,0x6d,0x6e,"crypto\\kdf\\scrypt.c",0xde);
    return 0;
  }
  if (plVar1[2] == 0) {
    ERR_put_error(0x34,0x6d,0x6f,"crypto\\kdf\\scrypt.c",0xe3);
    return 0;
  }
  uVar2 = EVP_PBE_scrypt(*plVar1,plVar1[1],plVar1[2],plVar1[3],plVar1[4],plVar1[5],plVar1[6],
                         plVar1[7],param_2,*param_3,0x143d6429a);
  return uVar2;
}



// FUNCTION 143d64350 FUN_143d64350 body=611 status=ok
// SIG undefined FUN_143d64350(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_143d64350(longlong param_1,undefined4 param_2,char *param_3)

{
  ulonglong uVar1;
  char cVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar8;
  ulonglong uVar7;
  
  uVar8 = 0x143d64365;
  uVar7 = 0;
  uVar6 = 0;
  cVar2 = *param_3;
  uVar4 = uVar7;
  while (cVar2 != '\0') {
    if (9 < (byte)(cVar2 - 0x30U)) {
LAB_143d643ef:
      ERR_put_error(0x34,0x69,0x6c,"crypto\\kdf\\scrypt.c",0xad,0x143d64365);
      return 0;
    }
    uVar1 = (ulonglong)((int)cVar2 - 0x30U) + uVar4 * 10;
    if ((uVar1 < (int)cVar2 - 0x30U) || ((uVar4 * 10) / 10 != uVar4)) goto LAB_143d643ef;
    param_3 = param_3 + 1;
    uVar4 = uVar1;
    cVar2 = *param_3;
  }
  plVar3 = *(longlong **)(param_1 + 0x28);
  switch(param_2) {
  case 0x1008:
    if (*plVar3 != 0) {
      CRYPTO_clear_free(*plVar3,plVar3[1],"crypto\\kdf\\scrypt.c",100);
    }
    lVar5 = CRYPTO_malloc(1,"crypto\\kdf\\scrypt.c");
    *plVar3 = lVar5;
    if (lVar5 != 0) {
      plVar3[1] = 0;
      return 1;
    }
    goto LAB_143d6445d;
  case 0x1009:
    if (plVar3[2] != 0) {
      CRYPTO_clear_free(plVar3[2],plVar3[3],"crypto\\kdf\\scrypt.c",100);
    }
    lVar5 = CRYPTO_malloc(1,"crypto\\kdf\\scrypt.c");
    plVar3[2] = lVar5;
    if (lVar5 != 0) {
      plVar3[3] = 0;
      return 1;
    }
LAB_143d6445d:
    ERR_put_error(0x34,0x6b,0x41,"crypto\\kdf\\scrypt.c",0x6c,uVar8);
    return 0;
  case 0x100a:
    if ((1 < uVar4) && ((uVar4 & uVar4 - 1) == 0)) {
      plVar3[4] = uVar4;
      return 1;
    }
    break;
  case 0x100b:
    uVar6 = uVar7;
    if (uVar4 != 0) {
      plVar3[5] = uVar4;
      return 1;
    }
    break;
  case 0x100c:
    uVar6 = uVar7;
    if (uVar4 != 0) {
      plVar3[6] = uVar4;
      return 1;
    }
    break;
  case 0x100d:
    uVar6 = uVar7;
    if (uVar4 != 0) {
      plVar3[7] = uVar4;
      return 1;
    }
    break;
  default:
    uVar6 = 0xfffffffe;
  }
  return uVar6;
}



// FUNCTION 143d645d0 pkey_scrypt_set_membuf body=231 status=ok
// SIG undefined pkey_scrypt_set_membuf(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool pkey_scrypt_set_membuf(longlong *param_1,longlong *param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  bool bVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143d645eb;
  if (param_3 == 0) {
    bVar2 = true;
  }
  else if (param_4 < 0) {
    bVar2 = false;
  }
  else {
    if (*param_1 != 0) {
      CRYPTO_clear_free(*param_1,*param_2,"crypto\\kdf\\scrypt.c",100);
    }
    if (param_4 < 1) {
      lVar1 = CRYPTO_malloc(1,"crypto\\kdf\\scrypt.c");
    }
    else {
      lVar1 = CRYPTO_memdup(param_3,(longlong)param_4,"crypto\\kdf\\scrypt.c",0x67);
    }
    *param_1 = lVar1;
    bVar2 = lVar1 != 0;
    if (bVar2) {
      *param_2 = (longlong)param_4;
    }
    else {
      ERR_put_error(0x34,0x6b,0x41,"crypto\\kdf\\scrypt.c",0x6c,uVar3);
    }
  }
  return bVar2;
}



// FUNCTION 143d646c0 pkey_tls1_prf_init body=97 status=ok
// SIG undefined pkey_tls1_prf_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_tls1_prf_init(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143d646cc;
  lVar1 = CRYPTO_zalloc(0x420,"crypto\\kdf\\tls1_prf.c",0x28);
  if (lVar1 == 0) {
    ERR_put_error(0x34,0x6e,0x41,"crypto\\kdf\\tls1_prf.c",0x29,uVar2);
    return 0;
  }
  *(longlong *)(param_1 + 0x28) = lVar1;
  return 1;
}



// FUNCTION 143d64730 pkey_tls1_prf_cleanup body=85 status=ok
// SIG undefined pkey_tls1_prf_cleanup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void pkey_tls1_prf_cleanup(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  CRYPTO_clear_free(*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x10),
                    "crypto\\kdf\\tls1_prf.c",0x34);
  FUN_14004ff40(lVar1 + 0x18,*(undefined8 *)(lVar1 + 0x418));
  CRYPTO_free(lVar1,"crypto\\kdf\\tls1_prf.c",0x36);
  return;
}



// FUNCTION 143d64790 pkey_tls1_prf_ctrl body=298 status=ok
// SIG undefined pkey_tls1_prf_ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_tls1_prf_ctrl(longlong param_1,int param_2,int param_3,void *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  size_t _Size;
  
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  _Size = (size_t)param_3;
  if (param_2 == 0x1000) {
    *puVar1 = param_4;
  }
  else {
    if (param_2 == 0x1001) {
      if (-1 < param_3) {
        if (puVar1[1] != 0) {
          CRYPTO_clear_free(puVar1[1],puVar1[2],"crypto\\kdf\\tls1_prf.c",0x45);
        }
        FUN_14004ff40(puVar1 + 3,puVar1[0x83]);
        puVar1[0x83] = 0;
        lVar2 = CRYPTO_memdup(param_4,_Size,"crypto\\kdf\\tls1_prf.c",0x48);
        puVar1[1] = lVar2;
        if (lVar2 != 0) {
          puVar1[2] = _Size;
          return 1;
        }
      }
      return 0;
    }
    if (param_2 != 0x1002) {
      return 0xfffffffe;
    }
    if ((param_3 != 0) && (param_4 != (void *)0x0)) {
      if (param_3 < 0) {
        return 0;
      }
      if (0x400 - *(int *)(puVar1 + 0x83) < param_3) {
        return 0;
      }
      _guard_xfg_dispatch_icall_nop((void *)((longlong)puVar1 + puVar1[0x83] + 0x18),param_4,_Size);
      puVar1[0x83] = puVar1[0x83] + _Size;
    }
  }
  return 1;
}



// FUNCTION 143d648c0 pkey_tls1_prf_ctrl_str body=447 status=ok
// SIG undefined pkey_tls1_prf_ctrl_str(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_tls1_prf_ctrl_str(longlong param_1,char *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143d648d5;
  if (param_3 == 0) {
    ERR_put_error(0x34,100,0x66,"crypto\\kdf\\tls1_prf.c",0x61,0x143d648d5);
    return 0;
  }
  if (((*param_2 == 'm') && (param_2[1] == 'd')) && (param_2[2] == '\0')) {
    plVar1 = *(longlong **)(param_1 + 0x28);
    lVar3 = EVP_get_digestbyname(param_3);
    if (lVar3 == 0) {
      ERR_put_error(0x34,100,100,"crypto\\kdf\\tls1_prf.c",0x69,uVar6);
      return 0;
    }
    *plVar1 = lVar3;
    return 1;
  }
  lVar5 = 0;
  lVar3 = lVar5;
  do {
    lVar4 = lVar3 + 1;
    if (param_2[lVar3] != "secret"[lVar3]) {
      iVar2 = _guard_xfg_dispatch_icall_nop(param_2,"hexsecret");
      lVar3 = lVar5;
      if (iVar2 == 0) {
        uVar6 = EVP_PKEY_CTX_hex2ctrl(param_1,0x1001,param_3);
        return uVar6;
      }
      do {
        lVar4 = lVar3 + 1;
        if (param_2[lVar3] != (&DAT_145d7efbc)[lVar3]) {
          do {
            lVar3 = lVar5 + 1;
            if (param_2[lVar5] != "hexseed"[lVar5]) {
              ERR_put_error(0x34,100,0x67,"crypto\\kdf\\tls1_prf.c",0x78);
              return 0xfffffffe;
            }
            lVar5 = lVar3;
          } while (lVar3 != 8);
          uVar6 = EVP_PKEY_CTX_hex2ctrl(param_1,0x1002,param_3);
          return uVar6;
        }
        lVar3 = lVar4;
      } while (lVar4 != 5);
      uVar6 = EVP_PKEY_CTX_str2ctrl(param_1,0x1002,param_3);
      return uVar6;
    }
    lVar3 = lVar4;
  } while (lVar4 != 7);
  uVar6 = EVP_PKEY_CTX_str2ctrl(param_1,0x1001);
  return uVar6;
}



// FUNCTION 143d64a80 pkey_tls1_prf_derive body=205 status=ok
// SIG undefined pkey_tls1_prf_derive(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_tls1_prf_derive(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (*plVar1 == 0) {
    ERR_put_error(0x34,0x65,0x69,"crypto\\kdf\\tls1_prf.c",0x81);
    return 0;
  }
  if (plVar1[1] == 0) {
    ERR_put_error(0x34,0x65,0x6b,"crypto\\kdf\\tls1_prf.c",0x85);
    return 0;
  }
  if (plVar1[0x83] == 0) {
    ERR_put_error(0x34,0x65,0x6a,"crypto\\kdf\\tls1_prf.c",0x89);
    return 0;
  }
  uVar2 = tls1_prf_alg(*plVar1,plVar1[1],plVar1[2],plVar1 + 3,plVar1[0x83],param_2,*param_3);
  return uVar2;
}



// FUNCTION 143d64b50 tls1_prf_P_hash body=619 status=ok
// SIG undefined tls1_prf_P_hash(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
tls1_prf_P_hash(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
               undefined8 param_5,void *param_6,ulonglong param_7)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined4 local_b8;
  int local_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  longlong local_a0;
  undefined1 local_98 [64];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x143d64b67;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar2 = 0;
  local_a0 = 0;
  local_b8 = 0;
  local_b0 = EVP_MD_size();
  lVar3 = lVar2;
  lVar4 = lVar2;
  if (0 < local_b0) {
    lVar2 = EVP_MD_CTX_new();
    lVar3 = EVP_MD_CTX_new();
    lVar4 = EVP_MD_CTX_new();
    if (((lVar2 != 0) && (lVar3 != 0)) && (lVar4 != 0)) {
      EVP_MD_CTX_set_flags(lVar4,8);
      local_a0 = EVP_PKEY_new_raw_private_key(0x357,0,param_2,param_3);
      if (((((local_a0 != 0) &&
            (local_c8 = local_a0, iVar1 = EVP_DigestSignInit(lVar4,0,param_1,0), iVar1 != 0)) &&
           ((iVar1 = EVP_MD_CTX_copy_ex(lVar2,lVar4), iVar1 != 0 &&
            ((param_4 == 0 || (iVar1 = EVP_DigestUpdate(lVar2,param_4,param_5), iVar1 != 0)))))) &&
          (iVar1 = EVP_DigestSignFinal(lVar2,local_98,&local_a8), iVar1 != 0)) &&
         (iVar1 = EVP_MD_CTX_copy_ex(lVar2,lVar4), iVar1 != 0)) {
        uVar5 = (ulonglong)local_b0;
        while( true ) {
          iVar1 = EVP_DigestUpdate(lVar2,local_98,local_a8);
          if (((iVar1 == 0) ||
              ((uVar5 < param_7 && (iVar1 = EVP_MD_CTX_copy_ex(lVar3,lVar2), iVar1 == 0)))) ||
             ((param_4 != 0 && (iVar1 = EVP_DigestUpdate(lVar2,param_4,param_5), iVar1 == 0))))
          goto LAB_143d64d62;
          if (param_7 <= uVar5) break;
          iVar1 = EVP_DigestSignFinal(lVar2,param_6,&local_b0);
          if (iVar1 == 0) goto LAB_143d64d62;
          param_6 = (void *)((longlong)param_6 + CONCAT44(uStack_ac,local_b0));
          param_7 = param_7 - CONCAT44(uStack_ac,local_b0);
          iVar1 = EVP_DigestSignFinal(lVar3,local_98,&local_a8);
          if ((iVar1 == 0) || (iVar1 = EVP_MD_CTX_copy_ex(lVar2,lVar4), iVar1 == 0))
          goto LAB_143d64d62;
        }
        iVar1 = EVP_DigestSignFinal(lVar2,local_98,&local_a8);
        if (iVar1 != 0) {
          _guard_xfg_dispatch_icall_nop(param_6,local_98,param_7);
          local_b8 = 1;
        }
      }
    }
  }
LAB_143d64d62:
  EVP_PKEY_free(local_a0);
  EVP_MD_CTX_free(lVar2);
  EVP_MD_CTX_free(lVar3);
  EVP_MD_CTX_free(lVar4);
  FUN_14004ff40(local_98,0x40);
  return local_b8;
}



// FUNCTION 143d64dc0 tls1_prf_alg body=624 status=ok
// SIG undefined tls1_prf_alg(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
tls1_prf_alg(undefined8 param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
            undefined8 param_5,ulonglong *param_6,ulonglong param_7)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  byte *pbVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar13;
  undefined4 uVar12;
  
  uVar13 = 0x143d64ddd;
  iVar4 = FRollingHash::GetWindowSize();
  if (iVar4 == 0x72) {
    lVar10 = (ulonglong)((uint)param_3 & 1) + (param_3 >> 1);
    uVar5 = EVP_md5();
    uVar11 = param_5;
    iVar4 = tls1_prf_P_hash(uVar5,param_2,lVar10,param_4,param_5,param_6,param_7,uVar13);
    uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
    if (iVar4 != 0) {
      uVar6 = CRYPTO_malloc(param_7,"crypto\\kdf\\tls1_prf.c",0x104);
      if (uVar6 == 0) {
        ERR_put_error(0x34,0x6f,0x41,"crypto\\kdf\\tls1_prf.c",CONCAT44(uVar12,0x105));
      }
      else {
        uVar13 = EVP_sha1();
        iVar4 = tls1_prf_P_hash(uVar13,(param_3 >> 1) + param_2,lVar10,param_4,param_5,uVar6,param_7
                               );
        if (iVar4 != 0) {
          uVar9 = 0;
          if (param_7 != 0) {
            if ((0x3f < param_7) &&
               (((ulonglong *)((param_7 - 1) + uVar6) < param_6 ||
                ((longlong)param_6 + (param_7 - 1) < uVar6)))) {
              lVar10 = uVar6 - (longlong)param_6;
              puVar7 = param_6;
              do {
                uVar9 = uVar9 + 0x40;
                uVar3 = ((ulonglong *)(lVar10 + (longlong)puVar7))[1];
                puVar1 = puVar7 + 8;
                *puVar7 = *(ulonglong *)(lVar10 + (longlong)puVar7) ^ *puVar7;
                puVar7[1] = uVar3 ^ puVar7[1];
                puVar2 = (ulonglong *)(lVar10 + -0x30 + (longlong)puVar1);
                uVar3 = puVar2[1];
                puVar7[2] = *puVar2 ^ puVar7[2];
                puVar7[3] = uVar3 ^ puVar7[3];
                puVar2 = (ulonglong *)(lVar10 + -0x20 + (longlong)puVar1);
                uVar3 = puVar2[1];
                puVar7[4] = *puVar2 ^ puVar7[4];
                puVar7[5] = uVar3 ^ puVar7[5];
                puVar2 = (ulonglong *)(lVar10 + -0x10 + (longlong)puVar1);
                uVar3 = puVar2[1];
                puVar7[6] = *puVar2 ^ puVar7[6];
                puVar7[7] = uVar3 ^ puVar7[7];
                puVar7 = puVar1;
              } while (uVar9 < (param_7 & 0xffffffffffffffc0));
            }
            if (uVar9 < param_7) {
              pbVar8 = (byte *)(uVar9 + (longlong)param_6);
              lVar10 = param_7 - uVar9;
              do {
                *pbVar8 = *pbVar8 ^ pbVar8[uVar6 - (longlong)param_6];
                pbVar8 = pbVar8 + 1;
                lVar10 = lVar10 + -1;
              } while (lVar10 != 0);
            }
          }
          CRYPTO_clear_free(uVar6,param_7,"crypto\\kdf\\tls1_prf.c",0x10f);
          return 1;
        }
        CRYPTO_clear_free(uVar6,param_7,"crypto\\kdf\\tls1_prf.c",0x10a);
      }
      return 0;
    }
  }
  else {
    iVar4 = tls1_prf_P_hash(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar13);
    if (iVar4 != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143d65030 pkey_hkdf_init body=97 status=ok
// SIG undefined pkey_hkdf_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_hkdf_init(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143d6503c;
  lVar1 = CRYPTO_zalloc(0x438,"crypto\\kdf\\hkdf.c",0x33);
  if (lVar1 == 0) {
    ERR_put_error(0x34,0x6c,0x41,"crypto\\kdf\\hkdf.c",0x34,uVar2);
    return 0;
  }
  *(longlong *)(param_1 + 0x28) = lVar1;
  return 1;
}



// FUNCTION 143d650a0 pkey_hkdf_cleanup body=111 status=ok
// SIG undefined pkey_hkdf_cleanup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void pkey_hkdf_cleanup(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  CRYPTO_clear_free(*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),
                    "crypto\\kdf\\hkdf.c",0x40);
  CRYPTO_clear_free(*(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28),
                    "crypto\\kdf\\hkdf.c",0x41);
  FUN_14004ff40(lVar1 + 0x30,*(undefined8 *)(lVar1 + 0x430));
  CRYPTO_free(lVar1,"crypto\\kdf\\hkdf.c",0x43);
  return;
}



// FUNCTION 143d65110 pkey_hkdf_ctrl body=390 status=ok
// SIG undefined pkey_hkdf_ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_hkdf_ctrl(longlong param_1,int param_2,int param_3,void *param_4)

{
  int *piVar1;
  longlong lVar2;
  size_t _Size;
  
  piVar1 = *(int **)(param_1 + 0x28);
  _Size = (size_t)param_3;
  if (param_2 == 0x1003) {
    if (param_4 == (void *)0x0) {
      return 0;
    }
    *(void **)(piVar1 + 2) = param_4;
  }
  else if (param_2 == 0x1004) {
    if ((param_3 != 0) && (param_4 != (void *)0x0)) {
      if (param_3 < 0) {
        return 0;
      }
      if (*(longlong *)(piVar1 + 4) != 0) {
        CRYPTO_clear_free(*(longlong *)(piVar1 + 4),*(undefined8 *)(piVar1 + 6),
                          "crypto\\kdf\\hkdf.c",0x5e);
      }
      lVar2 = CRYPTO_memdup(param_4,_Size,"crypto\\kdf\\hkdf.c",0x60);
      *(longlong *)(piVar1 + 4) = lVar2;
      if (lVar2 == 0) {
        return 0;
      }
      *(size_t *)(piVar1 + 6) = _Size;
      return 1;
    }
  }
  else {
    if (param_2 == 0x1005) {
      if (-1 < param_3) {
        if (*(longlong *)(piVar1 + 8) != 0) {
          CRYPTO_clear_free(*(longlong *)(piVar1 + 8),*(undefined8 *)(piVar1 + 10),
                            "crypto\\kdf\\hkdf.c",0x6c);
        }
        lVar2 = CRYPTO_memdup(param_4,_Size,"crypto\\kdf\\hkdf.c",0x6e);
        *(longlong *)(piVar1 + 8) = lVar2;
        if (lVar2 != 0) {
          *(size_t *)(piVar1 + 10) = _Size;
          return 1;
        }
      }
      return 0;
    }
    if (param_2 == 0x1006) {
      if ((param_3 != 0) && (param_4 != (void *)0x0)) {
        if (param_3 < 0) {
          return 0;
        }
        if (0x400 - piVar1[0x10c] < param_3) {
          return 0;
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)piVar1 + *(longlong *)(piVar1 + 0x10c) + 0x30),param_4,_Size);
        *(size_t *)(piVar1 + 0x10c) = *(longlong *)(piVar1 + 0x10c) + _Size;
      }
    }
    else {
      if (param_2 != 0x1007) {
        return 0xfffffffe;
      }
      *piVar1 = param_3;
    }
  }
  return 1;
}



// FUNCTION 143d652a0 pkey_hkdf_ctrl_str body=726 status=ok
// SIG undefined pkey_hkdf_ctrl_str(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_hkdf_ctrl_str(undefined8 param_1,char *param_2,char *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar5 = 0;
  lVar6 = lVar5;
  while (lVar7 = lVar6 + 1, param_2[lVar6] == (&DAT_145d8ac44)[lVar6]) {
    lVar6 = lVar7;
    if (lVar7 == 5) {
      iVar1 = _guard_xfg_dispatch_icall_nop(param_3,"EXTRACT_AND_EXPAND");
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        iVar1 = _guard_xfg_dispatch_icall_nop(param_3,"EXTRACT_ONLY");
        if (iVar1 == 0) {
          uVar2 = 1;
        }
        else {
          iVar1 = _guard_xfg_dispatch_icall_nop(param_3,"EXPAND_ONLY");
          if (iVar1 != 0) {
            return 0;
          }
          uVar2 = 2;
        }
      }
      uVar3 = EVP_PKEY_CTX_ctrl(param_1,0xffffffff,0x400,0x1007,uVar2,0);
      return uVar3;
    }
  }
  lVar6 = lVar5;
  if (((*param_2 == 'm') && (param_2[1] == 'd')) && (param_2[2] == '\0')) {
    uVar3 = EVP_PKEY_CTX_md(param_1,0x400,0x1003,param_3);
    return uVar3;
  }
  do {
    lVar4 = lVar6 + 1;
    lVar7 = lVar5;
    if (param_2[lVar6] != (&DAT_145d8a9c8)[lVar6]) {
      do {
        lVar4 = lVar7 + 1;
        lVar6 = lVar5;
        if (param_2[lVar7] != "hexsalt"[lVar7]) {
          do {
            lVar4 = lVar6 + 1;
            lVar7 = lVar5;
            if (param_2[lVar6] != *(char *)((longlong)&DAT_144044650 + lVar6)) {
              do {
                lVar4 = lVar7 + 1;
                lVar6 = lVar5;
                if (param_2[lVar7] != (&DAT_145d89da0)[lVar7]) {
                  do {
                    lVar7 = lVar6 + 1;
                    if (param_2[lVar6] != (&DAT_145d6c7b8)[lVar6]) {
                      do {
                        lVar6 = lVar5 + 1;
                        if (param_2[lVar5] != "hexinfo"[lVar5]) {
                          ERR_put_error(0x34,0x67,0x67,"crypto\\kdf\\hkdf.c",0xae,0x143d652b5);
                          return 0xfffffffe;
                        }
                        lVar5 = lVar6;
                      } while (lVar6 != 8);
                      uVar3 = EVP_PKEY_CTX_hex2ctrl(param_1,0x1006,param_3);
                      return uVar3;
                    }
                    lVar6 = lVar7;
                  } while (lVar7 != 5);
                  uVar3 = EVP_PKEY_CTX_str2ctrl(param_1,0x1006,param_3);
                  return uVar3;
                }
                lVar7 = lVar4;
              } while (lVar4 != 7);
              uVar3 = EVP_PKEY_CTX_hex2ctrl(param_1,0x1005,param_3);
              return uVar3;
            }
            lVar6 = lVar4;
          } while (lVar4 != 4);
          uVar3 = EVP_PKEY_CTX_str2ctrl(param_1,0x1005,param_3);
          return uVar3;
        }
        lVar7 = lVar4;
      } while (lVar4 != 8);
      uVar3 = EVP_PKEY_CTX_hex2ctrl(param_1,0x1004,param_3);
      return uVar3;
    }
    lVar6 = lVar4;
  } while (lVar4 != 5);
  uVar3 = EVP_PKEY_CTX_str2ctrl(param_1,0x1004,param_3);
  return uVar3;
}



// FUNCTION 143d65580 pkey_hkdf_derive body=475 status=ok
// SIG undefined pkey_hkdf_derive(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool pkey_hkdf_derive(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined4 local_88 [4];
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  piVar1 = *(int **)(param_1 + 0x28);
  lVar5 = *(longlong *)(piVar1 + 2);
  if (lVar5 == 0) {
    local_a8 = CONCAT44(local_a8._4_4_,0xb8);
    ERR_put_error(0x34,0x66,0x69,"crypto\\kdf\\hkdf.c");
LAB_143d655d5:
    bVar8 = false;
  }
  else {
    lVar6 = *(longlong *)(piVar1 + 8);
    if (lVar6 == 0) {
      local_a8 = CONCAT44(local_a8._4_4_,0xbc);
      ERR_put_error(0x34,0x66,0x68,"crypto\\kdf\\hkdf.c");
      return false;
    }
    iVar4 = *piVar1;
    local_a0 = (undefined1 *)param_2;
    if (iVar4 == 0) {
      local_a8 = *(undefined8 *)(piVar1 + 10);
      local_98 = (longlong *)local_88;
      local_a0 = local_78;
      lVar2 = *param_3;
      uVar3 = *(undefined8 *)(piVar1 + 0x10c);
      lVar6 = HMAC(lVar5,*(undefined8 *)(piVar1 + 4),piVar1[6],lVar6);
      lVar7 = 0;
      if (lVar6 != 0) {
        local_a8 = uVar3;
        local_a0 = (undefined1 *)param_2;
        local_98 = (longlong *)lVar2;
        lVar7 = HKDF_Expand(lVar5,local_78,local_88[0],piVar1 + 0xc);
        FUN_14004ff40(local_78,0x40);
      }
      bVar8 = lVar7 == 0;
    }
    else if (iVar4 == 1) {
      if (param_2 == 0) {
        iVar4 = EVP_MD_size();
        *param_3 = (longlong)iVar4;
        return true;
      }
      local_a8 = *(undefined8 *)(piVar1 + 10);
      local_98 = param_3;
      lVar5 = HKDF_Extract(lVar5,*(undefined8 *)(piVar1 + 4),*(undefined8 *)(piVar1 + 6),lVar6);
      bVar8 = lVar5 == 0;
    }
    else {
      if (iVar4 != 2) goto LAB_143d655d5;
      local_98 = (longlong *)*param_3;
      local_a8 = *(undefined8 *)(piVar1 + 0x10c);
      lVar5 = HKDF_Expand(lVar5,lVar6,*(undefined8 *)(piVar1 + 10),piVar1 + 0xc);
      bVar8 = lVar5 == 0;
    }
    bVar8 = !bVar8;
  }
  return bVar8;
}



// FUNCTION 143d65760 HKDF_Expand body=456 status=ok
// SIG undefined HKDF_Expand(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong HKDF_Expand(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                    undefined8 param_5,longlong param_6,ulonglong param_7)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  size_t _Size;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined1 local_c8 [8];
  ulonglong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 local_98 [64];
  ulonglong local_58;
  undefined8 uStack_48;
  longlong lVar9;
  
  uStack_48 = 0x143d65777;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  lVar9 = 0;
  lVar8 = 0;
  local_c0 = param_3;
  local_b8 = param_2;
  local_b0 = param_4;
  iVar1 = EVP_MD_size();
  uVar7 = (ulonglong)iVar1;
  uVar6 = param_7 / uVar7 + 1;
  if (param_7 % uVar7 == 0) {
    uVar6 = param_7 / uVar7;
  }
  if (((uVar6 < 0x100) && (param_6 != 0)) && (local_a8 = uVar6, lVar2 = HMAC_CTX_new(), lVar2 != 0))
  {
    local_d8 = 0;
    iVar1 = HMAC_Init_ex(lVar2,local_b8,local_c0 & 0xffffffff,param_1);
    lVar3 = lVar9;
    if ((iVar1 != 0) && (uVar5 = 1, lVar4 = lVar9, lVar3 = param_6, uVar6 != 0)) {
      do {
        local_c8[0] = (undefined1)uVar5;
        if (1 < (uint)uVar5) {
          local_d8 = 0;
          iVar1 = HMAC_Init_ex(lVar2,0,0,0);
          lVar3 = lVar9;
          if ((iVar1 == 0) || (iVar1 = HMAC_Update(lVar2,local_98,uVar7), iVar1 == 0)) break;
        }
        iVar1 = HMAC_Update(lVar2,local_b0,param_5);
        lVar3 = lVar8;
        if ((iVar1 == 0) ||
           ((iVar1 = HMAC_Update(lVar2,local_c8,1), iVar1 == 0 ||
            (iVar1 = HMAC_Final(lVar2,local_98,0), iVar1 == 0)))) break;
        _Size = param_7 - lVar4;
        if (uVar7 + lVar4 <= param_7) {
          _Size = uVar7;
        }
        _guard_xfg_dispatch_icall_nop((void *)(param_6 + lVar4),local_98,_Size);
        uVar5 = (ulonglong)((uint)uVar5 + 1);
        lVar4 = lVar4 + _Size;
        lVar3 = param_6;
        if (local_a8 < uVar5) break;
      } while( true );
    }
    FUN_14004ff40(local_98,0x40);
    HMAC_CTX_free(lVar2);
  }
  else {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 143d65930 HKDF_Extract body=91 status=ok
// SIG undefined HKDF_Extract(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 HKDF_Extract(void)

{
  longlong lVar1;
  undefined8 in_stack_00000030;
  ulonglong *in_stack_00000038;
  undefined4 local_18;
  
  lVar1 = HMAC();
  if (lVar1 == 0) {
    return 0;
  }
  *in_stack_00000038 = (ulonglong)local_18;
  return in_stack_00000030;
}



// FUNCTION 143d65990 pkey_poly1305_init body=124 status=ok
// SIG undefined pkey_poly1305_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_poly1305_init(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143d6599c;
  lVar1 = CRYPTO_zalloc(0x110,"crypto\\poly1305\\poly1305_pmeth.c",0x1f);
  if (lVar1 == 0) {
    ERR_put_error(0xf,0x7c,0x41,"crypto\\poly1305\\poly1305_pmeth.c",0x20,uVar2);
    return 0;
  }
  *(undefined4 *)(lVar1 + 4) = 4;
  FMemFileOut::seekp(param_1,lVar1);
  EVP_PKEY_CTX_set0_keygen_info(param_1,0,0);
  return 1;
}



// FUNCTION 143d65a10 pkey_poly1305_cleanup body=107 status=ok
// SIG undefined pkey_poly1305_cleanup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void pkey_poly1305_cleanup(undefined8 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FNiagaraEmitterHandle::GetInstance();
  if (piVar1 != (int *)0x0) {
    CRYPTO_clear_free(*(undefined8 *)(piVar1 + 2),(longlong)*piVar1,
                      "crypto\\poly1305\\poly1305_pmeth.c",0x2f);
    CRYPTO_clear_free(piVar1,0x110,"crypto\\poly1305\\poly1305_pmeth.c",0x30);
    FMemFileOut::seekp(param_1,0);
  }
  return;
}



// FUNCTION 143d65a80 pkey_poly1305_copy body=444 status=ok
// SIG undefined pkey_poly1305_copy(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_poly1305_copy(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143d65a95;
  lVar2 = CRYPTO_zalloc(0x110,"crypto\\poly1305\\poly1305_pmeth.c",0x1f);
  if (lVar2 == 0) {
    ERR_put_error(0xf,0x7c,0x41,"crypto\\poly1305\\poly1305_pmeth.c",0x20,uVar6);
    return 0;
  }
  *(undefined4 *)(lVar2 + 4) = 4;
  FMemFileOut::seekp(param_1,lVar2);
  EVP_PKEY_CTX_set0_keygen_info(param_1,0,0);
  lVar2 = FNiagaraEmitterHandle::GetInstance(param_2);
  lVar3 = FNiagaraEmitterHandle::GetInstance(param_1);
  lVar4 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
          ::GetBoundProgramCounterForTimerManager(lVar2);
  if (lVar4 != 0) {
    iVar1 = ASN1_STRING_copy(lVar3,lVar2);
    if (iVar1 == 0) {
      piVar5 = (int *)FNiagaraEmitterHandle::GetInstance(param_1);
      if (piVar5 != (int *)0x0) {
        CRYPTO_clear_free(*(undefined8 *)(piVar5 + 2),(longlong)*piVar5,
                          "crypto\\poly1305\\poly1305_pmeth.c",0x2f);
        CRYPTO_clear_free(piVar5,0x110,"crypto\\poly1305\\poly1305_pmeth.c",0x30);
        FMemFileOut::seekp(param_1,0);
      }
      return 0;
    }
  }
  uVar6 = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(lVar3 + 0x20) = uVar6;
  uVar6 = *(undefined8 *)(lVar2 + 0x30);
  *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar3 + 0x30) = uVar6;
  uVar6 = *(undefined8 *)(lVar2 + 0x40);
  *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)(lVar2 + 0x38);
  *(undefined8 *)(lVar3 + 0x40) = uVar6;
  uVar6 = *(undefined8 *)(lVar2 + 0x50);
  *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)(lVar2 + 0x48);
  *(undefined8 *)(lVar3 + 0x50) = uVar6;
  uVar6 = *(undefined8 *)(lVar2 + 0x60);
  *(undefined8 *)(lVar3 + 0x58) = *(undefined8 *)(lVar2 + 0x58);
  *(undefined8 *)(lVar3 + 0x60) = uVar6;
  uVar6 = *(undefined8 *)(lVar2 + 0x70);
  *(undefined8 *)(lVar3 + 0x68) = *(undefined8 *)(lVar2 + 0x68);
  *(undefined8 *)(lVar3 + 0x70) = uVar6;
  uVar6 = *(undefined8 *)(lVar2 + 0x80);
  *(undefined8 *)(lVar3 + 0x78) = *(undefined8 *)(lVar2 + 0x78);
  *(undefined8 *)(lVar3 + 0x80) = uVar6;
  uVar6 = *(undefined8 *)(lVar2 + 0x90);
  *(undefined8 *)(lVar3 + 0x88) = *(undefined8 *)(lVar2 + 0x88);
  *(undefined8 *)(lVar3 + 0x90) = uVar6;
  uVar6 = *(undefined8 *)(lVar2 + 0xa0);
  *(undefined8 *)(lVar3 + 0x98) = *(undefined8 *)(lVar2 + 0x98);
  *(undefined8 *)(lVar3 + 0xa0) = uVar6;
  uVar6 = *(undefined8 *)(lVar2 + 0xb0);
  *(undefined8 *)(lVar3 + 0xa8) = *(undefined8 *)(lVar2 + 0xa8);
  *(undefined8 *)(lVar3 + 0xb0) = uVar6;
  uVar6 = *(undefined8 *)(lVar2 + 0xc0);
  *(undefined8 *)(lVar3 + 0xb8) = *(undefined8 *)(lVar2 + 0xb8);
  *(undefined8 *)(lVar3 + 0xc0) = uVar6;
  uVar6 = *(undefined8 *)(lVar2 + 0xd0);
  *(undefined8 *)(lVar3 + 200) = *(undefined8 *)(lVar2 + 200);
  *(undefined8 *)(lVar3 + 0xd0) = uVar6;
  uVar6 = *(undefined8 *)(lVar2 + 0xe0);
  *(undefined8 *)(lVar3 + 0xd8) = *(undefined8 *)(lVar2 + 0xd8);
  *(undefined8 *)(lVar3 + 0xe0) = uVar6;
  uVar6 = *(undefined8 *)(lVar2 + 0xf0);
  *(undefined8 *)(lVar3 + 0xe8) = *(undefined8 *)(lVar2 + 0xe8);
  *(undefined8 *)(lVar3 + 0xf0) = uVar6;
  uVar6 = *(undefined8 *)(lVar2 + 0x100);
  *(undefined8 *)(lVar3 + 0xf8) = *(undefined8 *)(lVar2 + 0xf8);
  *(undefined8 *)(lVar3 + 0x100) = uVar6;
  *(undefined8 *)(lVar3 + 0x108) = *(undefined8 *)(lVar2 + 0x108);
  return 1;
}



// FUNCTION 143d65c40 pkey_poly1305_keygen body=95 status=ok
// SIG undefined pkey_poly1305_keygen(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_poly1305_keygen(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FNiagaraEmitterHandle::GetInstance();
  lVar2 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
          ::GetBoundProgramCounterForTimerManager(uVar1);
  if (lVar2 != 0) {
    lVar2 = ASN1_INTEGER_dup(uVar1);
    if (lVar2 != 0) {
      uVar1 = EVP_PKEY_assign(param_2,0x425,lVar2);
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 143d65ca0 poly1305_signctx_init body=124 status=ok
// SIG undefined poly1305_signctx_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 poly1305_signctx_init(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  piVar2 = *(int **)(*(longlong *)(param_1 + 0x10) + 0x28);
  if (*piVar2 != 0x20) {
    return 0;
  }
  EVP_MD_CTX_set_flags(param_2,0x100);
  FMemFileOut::seekp(param_2,int_update);
  Poly1305_Init(lVar1 + 0x18,*(undefined8 *)(piVar2 + 2));
  return 1;
}



// FUNCTION 143d65d20 poly1305_signctx body=48 status=ok
// SIG undefined poly1305_signctx(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 poly1305_signctx(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  *param_3 = 0x10;
  if (param_2 != 0) {
    Poly1305_Final(lVar1 + 0x18);
  }
  return 1;
}



// FUNCTION 143d65d50 pkey_poly1305_ctrl body=209 status=ok
// SIG undefined pkey_poly1305_ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_poly1305_ctrl(WriteBytesMem *param_1,int param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uchar *puVar4;
  undefined8 uVar5;
  longlong local_18 [2];
  
  local_18[1] = 0x143d65d70;
  lVar3 = FNiagaraEmitterHandle::GetInstance();
  if (param_2 != 1) {
    if (1 < param_2 - 6U) {
      return 0xfffffffe;
    }
    lVar1 = (longlong)param_3;
    if (param_2 != 6) {
      puVar4 = AK::WriteBytesMem::Bytes(param_1);
      param_4 = EVP_PKEY_get0_poly1305(puVar4,local_18);
      lVar1 = local_18[0];
    }
    local_18[0] = lVar1;
    if (((param_4 == 0) || (local_18[0] != 0x20)) ||
       (iVar2 = ASN1_OCTET_STRING_set(lVar3,param_4,0x20), iVar2 == 0)) {
      return 0;
    }
    uVar5 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
            ::GetBoundProgramCounterForTimerManager(lVar3);
    Poly1305_Init(lVar3 + 0x18,uVar5);
  }
  return 1;
}



// FUNCTION 143d65e30 int_update body=69 status=ok
// SIG undefined int_update(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 int_update(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = USignificanceManager::GetWorld();
  lVar2 = FNiagaraEmitterHandle::GetInstance(uVar1);
  Poly1305_Update(lVar2 + 0x18,param_2,param_3);
  return 1;
}



// FUNCTION 143d65e80 pkey_siphash_init body=122 status=ok
// SIG undefined pkey_siphash_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_siphash_init(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143d65e8c;
  lVar1 = CRYPTO_zalloc(0x58,"crypto\\siphash\\siphash_pmeth.c",0x1f);
  if (lVar1 == 0) {
    ERR_put_error(0xf,0x7d,0x41,"crypto\\siphash\\siphash_pmeth.c",0x20,uVar2);
    return 0;
  }
  *(undefined4 *)(lVar1 + 4) = 4;
  FMemFileOut::seekp(param_1,lVar1);
  EVP_PKEY_CTX_set0_keygen_info(param_1,0,0);
  return 1;
}



// FUNCTION 143d65f00 pkey_siphash_cleanup body=106 status=ok
// SIG undefined pkey_siphash_cleanup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void pkey_siphash_cleanup(undefined8 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FNiagaraEmitterHandle::GetInstance();
  if (piVar1 != (int *)0x0) {
    CRYPTO_clear_free(*(undefined8 *)(piVar1 + 2),(longlong)*piVar1,
                      "crypto\\siphash\\siphash_pmeth.c",0x2f);
    CRYPTO_clear_free(piVar1,0x58,"crypto\\siphash\\siphash_pmeth.c");
    FMemFileOut::seekp(param_1,0);
  }
  return;
}



// FUNCTION 143d65f70 pkey_siphash_copy body=330 status=ok
// SIG undefined pkey_siphash_copy(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_siphash_copy(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143d65f85;
  lVar2 = CRYPTO_zalloc(0x58,"crypto\\siphash\\siphash_pmeth.c",0x1f);
  if (lVar2 == 0) {
    ERR_put_error(0xf,0x7d,0x41,"crypto\\siphash\\siphash_pmeth.c",0x20,uVar6);
    return 0;
  }
  *(undefined4 *)(lVar2 + 4) = 4;
  FMemFileOut::seekp(param_1,lVar2);
  EVP_PKEY_CTX_set0_keygen_info(param_1,0,0);
  lVar2 = FNiagaraEmitterHandle::GetInstance(param_2);
  lVar3 = FNiagaraEmitterHandle::GetInstance(param_1);
  lVar4 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
          ::GetBoundProgramCounterForTimerManager(lVar2);
  if (lVar4 != 0) {
    iVar1 = ASN1_STRING_copy(lVar3,lVar2);
    if (iVar1 == 0) {
      piVar5 = (int *)FNiagaraEmitterHandle::GetInstance(param_1);
      if (piVar5 != (int *)0x0) {
        CRYPTO_clear_free(*(undefined8 *)(piVar5 + 2),(longlong)*piVar5,
                          "crypto\\siphash\\siphash_pmeth.c",0x2f);
        CRYPTO_clear_free(piVar5,0x58,"crypto\\siphash\\siphash_pmeth.c");
        FMemFileOut::seekp(param_1,0);
      }
      return 0;
    }
  }
  uVar6 = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(lVar3 + 0x20) = uVar6;
  uVar6 = *(undefined8 *)(lVar2 + 0x30);
  *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar3 + 0x30) = uVar6;
  uVar6 = *(undefined8 *)(lVar2 + 0x40);
  *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)(lVar2 + 0x38);
  *(undefined8 *)(lVar3 + 0x40) = uVar6;
  uVar6 = *(undefined8 *)(lVar2 + 0x50);
  *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)(lVar2 + 0x48);
  *(undefined8 *)(lVar3 + 0x50) = uVar6;
  return 1;
}



// FUNCTION 143d660c0 pkey_siphash_keygen body=95 status=ok
// SIG undefined pkey_siphash_keygen(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_siphash_keygen(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FNiagaraEmitterHandle::GetInstance();
  lVar2 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
          ::GetBoundProgramCounterForTimerManager(uVar1);
  if (lVar2 != 0) {
    lVar2 = ASN1_INTEGER_dup(uVar1);
    if (lVar2 != 0) {
      uVar1 = EVP_PKEY_assign(param_2,0x426,lVar2);
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 143d66120 siphash_signctx_init body=155 status=ok
// SIG undefined siphash_signctx_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 siphash_signctx_init(WriteBytesMem *param_1,undefined8 param_2)

{
  longlong lVar1;
  uchar *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong local_res18 [2];
  
  lVar1 = FNiagaraEmitterHandle::GetInstance();
  puVar2 = AK::WriteBytesMem::Bytes(param_1);
  lVar3 = EVP_PKEY_get0_siphash(puVar2,local_res18);
  if ((lVar3 != 0) && (local_res18[0] == 0x10)) {
    EVP_MD_CTX_set_flags(param_2,0x100);
    FMemFileOut::seekp(param_2,int_update);
    uVar4 = SipHash_Init(lVar1 + 0x18,lVar3,0,0);
    return uVar4;
  }
  return 0;
}



// FUNCTION 143d661c0 siphash_signctx body=102 status=ok
// SIG undefined siphash_signctx(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 siphash_signctx(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar2 = SipHash_hash_size(lVar1 + 0x18);
  *param_3 = uVar2;
  if (param_2 != 0) {
    uVar2 = FUN_143d9f5b0(lVar1 + 0x18,param_2,uVar2);
    return uVar2;
  }
  return 1;
}



// FUNCTION 143d66230 pkey_siphash_ctrl body=240 status=ok
// SIG undefined pkey_siphash_ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_siphash_ctrl(WriteBytesMem *param_1,int param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  uchar *puVar5;
  longlong local_18 [2];
  
  local_18[1] = 0x143d66250;
  lVar3 = FNiagaraEmitterHandle::GetInstance();
  if (param_2 == 1) {
    return 1;
  }
  if (5 < param_2) {
    if (param_2 < 8) {
      lVar1 = (longlong)param_3;
      if (param_2 != 6) {
        puVar5 = AK::WriteBytesMem::Bytes(param_1);
        param_4 = EVP_PKEY_get0_siphash(puVar5,local_18);
        lVar1 = local_18[0];
      }
      local_18[0] = lVar1;
      if (((param_4 != 0) && (local_18[0] == 0x10)) &&
         (iVar2 = ASN1_OCTET_STRING_set(lVar3,param_4,0x10), iVar2 != 0)) {
        uVar4 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
                ::GetBoundProgramCounterForTimerManager(lVar3);
        uVar4 = SipHash_Init(lVar3 + 0x18,uVar4,0,0);
        return uVar4;
      }
      return 0;
    }
    if (param_2 == 0xe) {
      uVar4 = SipHash_set_hash_size(lVar3 + 0x18,(longlong)param_3);
      return uVar4;
    }
  }
  return 0xfffffffe;
}



// FUNCTION 143d66320 pkey_siphash_ctrl_str body=277 status=ok
// SIG undefined pkey_siphash_ctrl_str(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_siphash_ctrl_str(undefined8 param_1,char *param_2,char *param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_3 == (char *)0x0) {
    return 0;
  }
  iVar2 = _guard_xfg_dispatch_icall_nop(param_2,"digestsize");
  if (iVar2 != 0) {
    lVar3 = 0;
    do {
      lVar6 = lVar3 + 1;
      uVar1 = 0;
      if (param_2[lVar3] != *(char *)((longlong)&DAT_144044650 + lVar3)) {
        do {
          uVar5 = uVar1;
          if (param_2[uVar5] != (&DAT_145d89da0)[uVar5]) {
            return 0xfffffffe;
          }
          uVar1 = uVar5 + 1;
        } while (uVar5 + 1 != 7);
        uVar4 = EVP_PKEY_CTX_hex2ctrl(param_1,uVar5 & 0xffffffff,param_3);
        return uVar4;
      }
      lVar3 = lVar6;
    } while (lVar6 != 4);
    uVar4 = EVP_PKEY_CTX_str2ctrl(param_1,6,param_3);
    return uVar4;
  }
  iVar2 = atoi(param_3);
  lVar3 = FNiagaraEmitterHandle::GetInstance(param_1);
  uVar4 = SipHash_set_hash_size(lVar3 + 0x18,(longlong)iVar2);
  return uVar4;
}



// FUNCTION 143d66440 int_update body=69 status=ok
// SIG undefined int_update(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 int_update(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = USignificanceManager::GetWorld();
  lVar2 = FNiagaraEmitterHandle::GetInstance(uVar1);
  SipHash_Update(lVar2 + 0x18,param_2,param_3);
  return 1;
}



// FUNCTION 143d66490 ecp_nistz256_mult_precompute body=1109 status=ok
// SIG undefined ecp_nistz256_mult_precompute(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong ecp_nistz256_mult_precompute(WriteBytesMem *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uchar *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar15;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  ulonglong local_b8;
  ulonglong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  undefined8 uStack_40;
  ulonglong uVar11;
  ulonglong uVar14;
  
  uStack_40 = 0x143d664a5;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  uVar14 = 0;
  uVar13 = 0;
  local_a0 = 0;
  EC_pre_comp_free();
  lVar3 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
          ::GetBoundProgramCounterForTimerManager(param_1);
  local_98 = lVar3;
  if (lVar3 == 0) {
    local_c8 = CONCAT44(local_c8._4_4_,800);
    ERR_put_error(0x10,0xf3,0x71,"crypto\\ec\\ecp_nistz256.c");
    uVar13 = 0;
  }
  else {
    iVar2 = ecp_nistz256_is_affine_G(lVar3);
    if (iVar2 == 0) {
      if (param_1 != (WriteBytesMem *)0x0) {
        puVar4 = (undefined8 *)CRYPTO_zalloc(0x30,"crypto\\ec\\ecp_nistz256.c",0x577);
        if (puVar4 == (undefined8 *)0x0) {
          local_c8 = CONCAT44(local_c8._4_4_,0x57a);
          ERR_put_error(0x10,0xf4,0x41,"crypto\\ec\\ecp_nistz256.c");
        }
        else {
          *puVar4 = param_1;
          puVar4[1] = 6;
          *(undefined4 *)(puVar4 + 4) = 1;
          lVar5 = CRYPTO_THREAD_lock_new();
          puVar4[5] = lVar5;
          if (lVar5 != 0) {
            uVar9 = uVar14;
            uVar7 = uVar14;
            uVar8 = uVar14;
            uVar15 = uVar14;
            if ((param_2 != 0) || (param_2 = BN_CTX_new(), local_a0 = param_2, param_2 != 0)) {
              BN_CTX_start(param_2);
              puVar6 = AK::WriteBytesMem::Bytes(param_1);
              if (puVar6 != (uchar *)0x0) {
                iVar2 = BN_is_zero(puVar6);
                uVar9 = 0;
                uVar8 = 0;
                if (iVar2 == 0) {
                  uVar7 = CRYPTO_malloc(0x25040,"crypto\\ec\\ecp_nistz256.c",0x343);
                  local_b8 = uVar7;
                  if (uVar7 == 0) {
                    local_c8 = CONCAT44(local_c8._4_4_,0x344);
                    ERR_put_error(0x10,0xf3,0x41,"crypto\\ec\\ecp_nistz256.c");
                  }
                  else {
                    lVar5 = (uVar7 - ((uint)uVar7 & 0x3f)) + 0x40;
                    local_a8 = lVar5;
                    uVar8 = EC_POINT_new(param_1);
                    uVar9 = EC_POINT_new(param_1);
                    uVar7 = local_b8;
                    uVar15 = uVar13;
                    local_b0 = uVar9;
                    if (((uVar8 != 0) && (uVar9 != 0)) &&
                       (iVar2 = EC_POINT_copy(uVar9,lVar3), uVar7 = local_b8, uVar13 = uVar14,
                       iVar2 != 0)) {
                      do {
                        iVar2 = EC_POINT_copy(uVar8,uVar9);
                        uVar7 = local_b8;
                        uVar12 = uVar14;
                        if (iVar2 == 0) goto LAB_143d66855;
                        do {
                          iVar2 = EC_POINT_make_affine(param_1,uVar8,param_2);
                          uVar7 = local_b8;
                          uVar9 = local_b0;
                          if (iVar2 == 0) goto LAB_143d66855;
                          iVar2 = bn_copy_words(local_88,*(undefined8 *)(uVar8 + 0x10),4);
                          if ((iVar2 == 0) ||
                             (iVar2 = bn_copy_words(local_68,*(undefined8 *)(uVar8 + 0x18),4),
                             iVar2 == 0)) {
                            local_c8 = CONCAT44(local_c8._4_4_,0x364);
                            ERR_put_error(0x10,0xf3,0x92,"crypto\\ec\\ecp_nistz256.c");
                            uVar7 = local_b8;
                            uVar9 = local_b0;
                            goto LAB_143d66855;
                          }
                          FUN_1400c2fc0((longlong)(int)uVar12 * 0x1000 + lVar5,local_88,uVar13);
                          uVar11 = uVar14;
                          do {
                            iVar2 = EC_POINT_dbl(param_1,uVar8,uVar8,param_2);
                            lVar5 = local_a8;
                            uVar9 = local_b0;
                            uVar7 = local_b8;
                            if (iVar2 == 0) goto LAB_143d66855;
                            uVar10 = (int)uVar11 + 1;
                            uVar11 = (ulonglong)uVar10;
                          } while ((int)uVar10 < 7);
                          uVar10 = (int)uVar12 + 1;
                          uVar12 = (ulonglong)uVar10;
                        } while ((int)uVar10 < 0x25);
                        local_c8 = param_2;
                        iVar2 = EC_POINT_add(param_1,local_b0,local_b0,local_98);
                        uVar7 = local_b8;
                        if (iVar2 == 0) goto LAB_143d66855;
                        uVar10 = (int)uVar13 + 1;
                        uVar13 = (ulonglong)uVar10;
                      } while ((int)uVar10 < 0x40);
                      puVar4[2] = lVar5;
                      puVar4[3] = local_b8;
                      *puVar4 = param_1;
                      puVar4[1] = 7;
                      *(undefined8 **)(param_1 + 0xa0) = puVar4;
                      puVar4 = (undefined8 *)0x0;
                      *(undefined4 *)(param_1 + 0x98) = 4;
                      uVar7 = 0;
                      uVar15 = 1;
                    }
                  }
                }
                else {
                  local_c8 = CONCAT44(local_c8._4_4_,0x33c);
                  ERR_put_error(0x10,0xf3,0x72,"crypto\\ec\\ecp_nistz256.c");
                  uVar7 = 0;
                }
              }
LAB_143d66855:
              if (param_2 != 0) {
                BN_CTX_end(param_2);
              }
            }
            BN_CTX_free(local_a0);
            if (puVar4 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(puVar4 + 4);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 < 2) {
                CRYPTO_free(puVar4[3],"crypto\\ec\\ecp_nistz256.c",0x5a0);
                CRYPTO_THREAD_lock_free(puVar4[5]);
                CRYPTO_free(puVar4,"crypto\\ec\\ecp_nistz256.c",0x5a2);
              }
            }
            CRYPTO_free(uVar7,"crypto\\ec\\ecp_nistz256.c",0x380);
            EC_POINT_free(uVar8);
            EC_POINT_free(uVar9);
            return uVar15;
          }
          local_c8 = CONCAT44(local_c8._4_4_,0x584);
          ERR_put_error(0x10,0xf4,0x41,"crypto\\ec\\ecp_nistz256.c");
          CRYPTO_free(puVar4,"crypto\\ec\\ecp_nistz256.c",0x585);
        }
      }
      uVar13 = 0;
    }
    else {
      uVar13 = 1;
    }
  }
  return uVar13;
}



// FUNCTION 143d668f0 ecp_nistz256_points_mul body=1905 status=ok
// SIG undefined ecp_nistz256_points_mul(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined *
ecp_nistz256_points_mul
          (longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,void *param_5,
          void *param_6,undefined8 param_7)

{
  size_t _Size;
  undefined8 uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined *puVar9;
  void *_Dst;
  uint uVar10;
  void *pvVar11;
  undefined1 *puVar12;
  ulonglong *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined1 auStack_1e8 [32];
  ulonglong local_1c8;
  undefined8 local_1c0;
  int local_1a0;
  longlong local_198;
  ulonglong local_190;
  void *local_188;
  void *local_180;
  void *local_178;
  longlong local_170;
  void *local_168;
  undefined8 local_160;
  ulonglong local_158;
  ulonglong local_140;
  ulonglong local_138;
  ulonglong local_130;
  ulonglong local_128;
  ulonglong local_120 [4];
  ulonglong local_100 [8];
  ulonglong local_c0 [4];
  ulonglong local_a0 [4];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  ulonglong local_58;
  undefined8 uStack_48;
  undefined *puVar20;
  
  uStack_48 = 0x143d66907;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  puVar20 = (undefined *)0x0;
  bVar17 = false;
  puVar19 = (undefined *)0x0;
  local_188 = param_5;
  local_180 = param_6;
  local_158 = param_4 + 1;
  local_160 = param_7;
  local_1a0 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_178 = (void *)0x0;
  local_168 = (void *)0x0;
  local_190 = param_4;
  local_170 = param_2;
  if (0xffffffe < param_4) {
    local_1c8 = CONCAT44(local_1c8._4_4_,0x477);
    ERR_put_error(0x10,0xf1,0x41,"crypto\\ec\\ecp_nistz256.c");
    return (undefined *)0x0;
  }
  BN_CTX_start(param_7);
  if (param_3 == 0) {
    uVar8 = local_190;
    _Dst = local_188;
    pvVar11 = local_180;
    iVar3 = 1;
  }
  else {
    local_198 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
                ::GetBoundProgramCounterForTimerManager(param_1);
    if (local_198 == 0) {
      local_1c8 = CONCAT44(local_1c8._4_4_,0x480);
      ERR_put_error(0x10,0xf1,0x71,"crypto\\ec\\ecp_nistz256.c");
      goto LAB_143d66fdc;
    }
    lVar7 = *(longlong *)(param_1 + 0xa0);
    lVar6 = param_3;
    if (lVar7 == 0) {
LAB_143d66aaf:
      iVar3 = ecp_nistz256_is_affine_G(local_198);
      if (iVar3 != 0) {
        puVar18 = &DAT_14009c000;
        goto LAB_143d66ac6;
      }
      bVar17 = true;
      local_1a0 = 1;
    }
    else {
      lVar5 = EC_POINT_new(param_1);
      if (lVar5 == 0) goto LAB_143d66fdc;
      FUN_1400c3000(&local_140,*(undefined8 *)(lVar7 + 0x10),1);
      iVar3 = bn_set_words(*(undefined8 *)(lVar5 + 0x10),&local_140,4);
      if (((iVar3 == 0) ||
          (iVar3 = bn_set_words(*(undefined8 *)(lVar5 + 0x18),local_120,4), iVar3 == 0)) ||
         (iVar3 = bn_set_words(*(undefined8 *)(lVar5 + 0x20),&DAT_145d8aef0,4), iVar3 == 0)) {
        EC_POINT_free(lVar5);
        puVar20 = puVar19;
        goto LAB_143d66fdc;
      }
      *(undefined4 *)(lVar5 + 0x28) = 1;
      iVar3 = EC_POINT_cmp(param_1,local_198,lVar5,param_7);
      puVar18 = puVar20;
      if (iVar3 == 0) {
        puVar18 = *(undefined **)(lVar7 + 0x10);
      }
      EC_POINT_free(lVar5);
      if (puVar18 == (undefined *)0x0) goto LAB_143d66aaf;
LAB_143d66ac6:
      iVar3 = BN_num_bits(param_3);
      if ((0x100 < iVar3) || (iVar3 = BN_is_negative(param_3), iVar3 != 0)) {
        lVar6 = BN_CTX_get(param_7);
        if (lVar6 == 0) goto LAB_143d66fdc;
        iVar3 = BN_nnmod(lVar6,param_3,*(undefined8 *)(param_1 + 0x10),param_7);
        if (iVar3 == 0) {
          local_1c8 = CONCAT44(local_1c8._4_4_,0x4ae);
          ERR_put_error(0x10,0xf1,3,"crypto\\ec\\ecp_nistz256.c");
          puVar20 = puVar19;
          goto LAB_143d66fdc;
        }
      }
      uVar14 = 0;
      iVar3 = IStreamingManager::GetNumWantingResources(lVar6);
      if (0 < iVar3 << 3) {
        puVar12 = (undefined1 *)((longlong)&local_80 + 1);
        puVar9 = puVar20;
        do {
          lVar7 = FHardwareCursor::GetHandle(lVar6);
          iVar4 = (int)puVar9;
          iVar3 = iVar4;
          if (iVar4 < 0) {
            iVar3 = iVar4 + 7;
          }
          uVar14 = iVar4 + 8;
          puVar9 = (undefined *)(ulonglong)uVar14;
          uVar1 = *(undefined8 *)(lVar7 + (longlong)(iVar3 >> 3) * 8);
          puVar12[-1] = (char)uVar1;
          *puVar12 = (char)((ulonglong)uVar1 >> 8);
          puVar12[1] = (char)((ulonglong)uVar1 >> 0x10);
          puVar12[2] = (char)((ulonglong)uVar1 >> 0x18);
          puVar12[3] = (char)((ulonglong)uVar1 >> 0x20);
          puVar12[4] = (char)((ulonglong)uVar1 >> 0x28);
          puVar12[6] = (char)((ulonglong)uVar1 >> 0x38);
          puVar12[5] = (char)((ulonglong)uVar1 >> 0x30);
          puVar12 = puVar12 + 8;
          iVar3 = IStreamingManager::GetNumWantingResources(lVar6);
        } while ((int)uVar14 < iVar3 * 8);
      }
      for (uVar8 = (ulonglong)(int)uVar14; (longlong)uVar8 < 0x21; uVar8 = uVar8 + 1) {
        if (0x20 < uVar8) {
                    /* WARNING: Subroutine does not return */
          __report_rangecheckfailure();
        }
        *(undefined1 *)((longlong)&local_80 + uVar8) = 0;
      }
      uVar10 = (byte)local_80 & 0x7f;
      uVar15 = (uVar10 >> 6) - 1;
      uVar16 = ~uVar15;
      uVar14 = uVar10 * -2 + 0xff & uVar16;
      uVar14 = (uVar16 & 1) + (((uVar14 | uVar15 & uVar10 * 2) >> 1) + (uVar14 & 1)) * 2;
      FUN_1400c3000(&local_140,puVar18,uVar14 >> 1);
      FUN_1400c14c0(local_120 + 4,local_120);
      uVar8 = -(ulonglong)(uVar14 & 1);
      puVar9 = puVar20;
      do {
        local_120[(longlong)puVar9] =
             local_120[(longlong)(puVar9 + 4)] & uVar8 ^ local_120[(longlong)puVar9] & ~uVar8;
        local_120[(longlong)(puVar9 + 1)] =
             local_120[(longlong)(puVar9 + 5)] & uVar8 ^ local_120[(longlong)(puVar9 + 1)] & ~uVar8;
        puVar9 = puVar9 + 2;
      } while ((longlong)puVar9 < 4);
      local_120[3] = local_140 | local_138 | local_130 | local_128 | local_120[0] | local_120[1] |
                     local_120[2] | local_120[3];
      uVar8 = 0xffffffffffffffff - ((longlong)~(-local_120[3] | local_120[3]) >> 0x3f);
      puVar9 = puVar20;
      do {
        uVar2 = *(ulonglong *)(&UNK_145d8aef8 + (longlong)puVar9);
        *(ulonglong *)(puVar9 + (longlong)(local_120 + 4)) =
             *(ulonglong *)(&DAT_145d8aef0 + (longlong)puVar9) & uVar8;
        *(ulonglong *)(puVar9 + (longlong)(local_120 + 5)) = uVar2 & uVar8;
        puVar9 = puVar9 + 0x10;
      } while ((longlong)puVar9 < 0x20);
      iVar3 = 7;
      lVar7 = 0x24;
      do {
        puVar18 = puVar18 + 0x1000;
        uVar10 = iVar3 - 1;
        iVar3 = iVar3 + 7;
        uVar14 = uVar10 >> 3;
        uVar14 = (ushort)(CONCAT11(*(undefined1 *)((longlong)&local_80 + (ulonglong)(uVar14 + 1)),
                                   *(undefined1 *)((longlong)&local_80 + (ulonglong)uVar14)) >>
                         ((byte)uVar10 & 7)) & 0xff;
        uVar10 = (uVar14 >> 7) - 1;
        uVar15 = ~uVar10;
        uVar14 = 0xff - uVar14 & uVar15 | uVar10 & uVar14;
        uVar14 = (uVar15 & 1) + ((uVar14 >> 1) + (uVar14 & 1)) * 2;
        FUN_1400c3000(local_120 + 8,puVar18,uVar14 >> 1);
        FUN_1400c14c0(local_c0 + 4,local_c0);
        uVar8 = -(ulonglong)(uVar14 & 1);
        puVar9 = puVar20;
        do {
          local_c0[(longlong)puVar9] =
               local_c0[(longlong)(puVar9 + 4)] & uVar8 ^ local_c0[(longlong)puVar9] & ~uVar8;
          local_c0[(longlong)(puVar9 + 1)] =
               local_c0[(longlong)(puVar9 + 5)] & uVar8 ^ local_c0[(longlong)(puVar9 + 1)] & ~uVar8;
          puVar9 = puVar9 + 2;
        } while ((longlong)puVar9 < 4);
        FUN_1400c4060(&local_140,&local_140,local_120 + 8);
        lVar7 = lVar7 + -1;
        param_7 = local_160;
      } while (lVar7 != 0);
    }
    if (bVar17) {
      _Size = local_190 * 8;
      local_178 = (void *)CRYPTO_malloc(_Size + 8,"crypto\\ec\\ecp_nistz256.c",0x511);
      if (local_178 == (void *)0x0) {
        local_1c8 = CONCAT44(local_1c8._4_4_,0x513);
      }
      else {
        _Dst = (void *)CRYPTO_malloc(_Size + 8,"crypto\\ec\\ecp_nistz256.c",0x517);
        pvVar11 = local_178;
        local_168 = _Dst;
        if (_Dst != (void *)0x0) {
          _guard_xfg_dispatch_icall_nop(local_178,local_180,_Size);
          *(longlong *)(_Size + (longlong)pvVar11) = lVar6;
          _guard_xfg_dispatch_icall_nop(_Dst,local_188,_Size);
          *(longlong *)(_Size + (longlong)_Dst) = local_198;
          uVar8 = local_158;
          param_2 = local_170;
          iVar3 = local_1a0;
          goto LAB_143d66f31;
        }
        local_1c8 = CONCAT44(local_1c8._4_4_,0x519);
      }
      ERR_put_error(0x10,0xf1,0x41,"crypto\\ec\\ecp_nistz256.c");
      puVar20 = puVar19;
      goto LAB_143d66fdc;
    }
    iVar3 = 0;
    uVar8 = local_190;
    _Dst = local_188;
    pvVar11 = local_180;
    param_2 = local_170;
  }
LAB_143d66f31:
  if (uVar8 != 0) {
    puVar13 = local_120 + 8;
    if (iVar3 != 0) {
      puVar13 = &local_140;
    }
    local_1c8 = uVar8;
    local_1c0 = param_7;
    iVar4 = ecp_nistz256_windowed_mul(param_1,puVar13,pvVar11,_Dst);
    puVar20 = puVar19;
    if (iVar4 == 0) goto LAB_143d66fdc;
    if (iVar3 == 0) {
      FUN_1400c38c0(&local_140,&local_140,puVar13);
    }
  }
  iVar3 = bn_set_words(*(undefined8 *)(param_2 + 0x10),&local_140,4);
  puVar20 = puVar19;
  if (((iVar3 != 0) &&
      (iVar3 = bn_set_words(*(undefined8 *)(param_2 + 0x18),local_120,4), iVar3 != 0)) &&
     (iVar3 = bn_set_words(*(undefined8 *)(param_2 + 0x20),local_120 + 4,4), iVar3 != 0)) {
    uVar14 = is_one(*(undefined8 *)(param_2 + 0x20));
    *(uint *)(param_2 + 0x28) = uVar14 & 1;
    puVar20 = (undefined *)0x1;
  }
LAB_143d66fdc:
  BN_CTX_end(param_7);
  CRYPTO_free(local_168,"crypto\\ec\\ecp_nistz256.c",0x53f);
  CRYPTO_free(local_178,"crypto\\ec\\ecp_nistz256.c",0x540);
  return puVar20;
}



// FUNCTION 143d67070 ecp_nistz256_get_affine body=444 status=ok
// SIG undefined ecp_nistz256_get_affine(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
ecp_nistz256_get_affine(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined1 local_148 [32];
  undefined1 local_128 [32];
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x143d6707e;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  iVar1 = EC_POINT_is_at_infinity();
  if (iVar1 == 0) {
    iVar1 = bn_copy_words(local_e8,*(undefined8 *)(param_2 + 0x10),4);
    if (((iVar1 != 0) &&
        (iVar1 = bn_copy_words(local_88,*(undefined8 *)(param_2 + 0x18),4), iVar1 != 0)) &&
       (iVar1 = bn_copy_words(local_108,*(undefined8 *)(param_2 + 0x20),4), iVar1 != 0)) {
      ecp_nistz256_mod_inverse(local_148,local_108);
      FUN_1400c2640(local_128,local_148);
      FUN_1400c2340(local_c8,local_128,local_e8);
      if (param_3 != 0) {
        FUN_1400c2ce0(local_a8,local_c8);
        iVar1 = bn_set_words(param_3,local_a8,4);
        if (iVar1 == 0) {
          return 0;
        }
      }
      if (param_4 != 0) {
        FUN_1400c2340(local_148,local_148,local_128);
        FUN_1400c2340(local_68,local_148,local_88);
        FUN_1400c2ce0(local_48,local_68);
        iVar1 = bn_set_words(param_4,local_48,4);
        if (iVar1 == 0) {
          return 0;
        }
        return 1;
      }
      return 1;
    }
    local_158 = 0x557;
    uVar2 = 0x92;
  }
  else {
    local_158 = 0x550;
    uVar2 = 0x6a;
  }
  ERR_put_error(0x10,0xf0,uVar2,"crypto\\ec\\ecp_nistz256.c");
  return 0;
}



// FUNCTION 143d67230 ecp_nistz256_window_have_precompute_mult body=78 status=ok
// SIG undefined ecp_nistz256_window_have_precompute_mult(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ecp_nistz256_window_have_precompute_mult(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
          ::GetBoundProgramCounterForTimerManager();
  if ((lVar2 != 0) && (iVar1 = ecp_nistz256_is_affine_G(lVar2), iVar1 != 0)) {
    return 1;
  }
  if ((*(int *)(param_1 + 0x98) == 4) && (*(longlong *)(param_1 + 0xa0) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 143d67280 ecp_nistz256_inv_mod_ord body=875 status=ok
// SIG undefined ecp_nistz256_inv_mod_ord(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
ecp_nistz256_inv_mod_ord(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined1 auStack_298 [32];
  undefined4 local_278;
  undefined1 local_268 [32];
  undefined1 local_248 [32];
  undefined1 local_228 [32];
  undefined1 local_208 [32];
  undefined1 local_1e8 [32];
  undefined1 local_1c8 [32];
  undefined1 local_1a8 [32];
  undefined1 local_188 [32];
  undefined1 local_168 [32];
  undefined1 local_148 [32];
  undefined1 local_128 [32];
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [64];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  lVar2 = bn_wexpand(param_2,4);
  if (lVar2 == 0) {
    local_278 = 0x5dd;
    ERR_put_error(0x10,0x113,3,"crypto\\ec\\ecp_nistz256.c");
    return 0;
  }
  iVar1 = BN_num_bits(param_3);
  if (((iVar1 < 0x101) && (iVar1 = BN_is_negative(param_3), lVar2 = param_3, iVar1 == 0)) ||
     ((lVar2 = BN_CTX_get(param_4), lVar2 != 0 &&
      (iVar1 = BN_nnmod(lVar2,param_3,*(undefined8 *)(param_1 + 0x10),param_4), iVar1 != 0)))) {
    iVar1 = bn_copy_words(local_68,lVar2,4);
    if (iVar1 != 0) {
      FUN_1400c1560(local_248,local_68,&DAT_145d8af50);
      FUN_1400c18e0(local_228,local_248,1);
      FUN_1400c1560(local_208,local_248,local_228);
      FUN_1400c1560(local_1e8,local_208,local_228);
      FUN_1400c1560(local_1c8,local_1e8,local_228);
      FUN_1400c18e0(local_1a8,local_1e8,1);
      FUN_1400c1560(local_188,local_1a8,local_1e8);
      FUN_1400c18e0(local_168,local_1a8,1);
      FUN_1400c1560(local_168,local_168,local_248);
      FUN_1400c18e0(local_148,local_168,1);
      FUN_1400c1560(local_128,local_148,local_1e8);
      FUN_1400c1560(local_108,local_148,local_168);
      FUN_1400c18e0(local_e8,local_108,2);
      FUN_1400c1560(local_e8,local_e8,local_208);
      FUN_1400c18e0(local_c8,local_e8,8);
      FUN_1400c1560(local_c8,local_c8,local_e8);
      FUN_1400c18e0(local_a8,local_c8,0x10);
      FUN_1400c1560(local_a8,local_a8,local_c8);
      FUN_1400c18e0(local_268,local_a8,0x40);
      FUN_1400c1560(local_268,local_268,local_a8);
      pbVar3 = &DAT_145d8af91;
      do {
        FUN_1400c18e0(local_268,local_268,pbVar3[-1]);
        FUN_1400c1560(local_268,local_268,local_248 + (ulonglong)*pbVar3 * 0x20);
        pbVar3 = pbVar3 + 2;
      } while ((longlong)pbVar3 < 0x145d8afc7);
      FUN_1400c1560(local_268,local_268,&DAT_145d8af70);
      iVar1 = bn_set_words(param_2,local_268,4);
      if (iVar1 == 0) {
        return 0;
      }
      return 1;
    }
    local_278 = 0x5ed;
    uVar4 = 0x92;
  }
  else {
    local_278 = 0x5e6;
    uVar4 = 3;
  }
  ERR_put_error(0x10,0x113,uVar4,"crypto\\ec\\ecp_nistz256.c");
  return 0;
}



// FUNCTION 143d67600 EC_nistz256_pre_comp_dup body=19 status=ok
// SIG undefined EC_nistz256_pre_comp_dup(void)

longlong EC_nistz256_pre_comp_dup(longlong param_1)

{
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 143d67620 EC_nistz256_pre_comp_free body=95 status=ok
// SIG undefined EC_nistz256_pre_comp_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EC_nistz256_pre_comp_free(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x20);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 2) {
      CRYPTO_free(*(undefined8 *)(param_1 + 0x18),"crypto\\ec\\ecp_nistz256.c",0x5a0);
      CRYPTO_THREAD_lock_free(*(undefined8 *)(param_1 + 0x28));
      CRYPTO_free(param_1,"crypto\\ec\\ecp_nistz256.c",0x5a2);
    }
  }
  return;
}



// FUNCTION 143d67680 ecp_nistz256_is_affine_G body=291 status=ok
// SIG undefined ecp_nistz256_is_affine_G(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ecp_nistz256_is_affine_G(longlong param_1)

{
  int iVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  iVar1 = IStreamingManager::GetNumWantingResources(*(undefined8 *)(param_1 + 0x10));
  if (iVar1 == 4) {
    iVar1 = IStreamingManager::GetNumWantingResources(*(undefined8 *)(param_1 + 0x18));
    if (iVar1 == 4) {
      puVar2 = (ulonglong *)FHardwareCursor::GetHandle(*(undefined8 *)(param_1 + 0x10));
      uVar4 = puVar2[2] ^ 0x79fb732b77622510 | puVar2[3] ^ 0x18905f76a53755c6 |
              puVar2[1] ^ 0x75ba95fc5fedb601 | *puVar2 ^ 0x79e730d418a9143c;
      if (-1 < (longlong)(-uVar4 | uVar4)) {
        puVar2 = (ulonglong *)FHardwareCursor::GetHandle(*(undefined8 *)(param_1 + 0x18));
        uVar4 = puVar2[2] ^ 0xd2e88688dd21f325 | puVar2[1] ^ 0x8b4ab8e4ba19e45c |
                puVar2[3] ^ 0x8571ff1825885d85 | *puVar2 ^ 0xddf25357ce95560a;
        if (-1 < (longlong)(-uVar4 | uVar4)) {
          lVar3 = is_one(*(undefined8 *)(param_1 + 0x20));
          if (lVar3 != 0) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143d677b0 ecp_nistz256_mod_inverse body=807 status=ok
// SIG undefined ecp_nistz256_mod_inverse(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void ecp_nistz256_mod_inverse(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x143d677c7;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  FUN_1400c2640(&local_e8);
  FUN_1400c2340(local_48,&local_e8,param_2);
  FUN_1400c2640(&local_e8,local_48);
  FUN_1400c2640(&local_e8,&local_e8);
  FUN_1400c2340(local_68,&local_e8,local_48);
  FUN_1400c2640(&local_e8,local_68);
  FUN_1400c2640(&local_e8,&local_e8);
  FUN_1400c2640(&local_e8,&local_e8);
  FUN_1400c2640(&local_e8,&local_e8);
  FUN_1400c2340(local_88,&local_e8,local_68);
  FUN_1400c2640(&local_e8,local_88);
  lVar1 = 7;
  do {
    FUN_1400c2640(&local_e8,&local_e8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_1400c2340(local_a8,&local_e8,local_88);
  FUN_1400c2640(&local_e8,local_a8);
  lVar1 = 0xf;
  do {
    FUN_1400c2640(&local_e8,&local_e8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_1400c2340(local_c8,&local_e8,local_a8);
  FUN_1400c2640(&local_e8,local_c8);
  lVar1 = 0x1f;
  do {
    FUN_1400c2640(&local_e8,&local_e8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_1400c2340(&local_e8,&local_e8,param_2);
  lVar1 = 0x80;
  do {
    FUN_1400c2640(&local_e8,&local_e8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_1400c2340(&local_e8,&local_e8,local_c8);
  lVar1 = 0x20;
  do {
    FUN_1400c2640(&local_e8,&local_e8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_1400c2340(&local_e8,&local_e8,local_c8);
  lVar1 = 0x10;
  do {
    FUN_1400c2640(&local_e8,&local_e8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_1400c2340(&local_e8,&local_e8,local_a8);
  lVar1 = 8;
  do {
    FUN_1400c2640(&local_e8,&local_e8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_1400c2340(&local_e8,&local_e8,local_88);
  FUN_1400c2640(&local_e8,&local_e8);
  FUN_1400c2640(&local_e8,&local_e8);
  FUN_1400c2640(&local_e8,&local_e8);
  FUN_1400c2640(&local_e8,&local_e8);
  FUN_1400c2340(&local_e8,&local_e8,local_68);
  FUN_1400c2640(&local_e8,&local_e8);
  FUN_1400c2640(&local_e8,&local_e8);
  FUN_1400c2340(&local_e8,&local_e8,local_48);
  FUN_1400c2640(&local_e8,&local_e8);
  FUN_1400c2640(&local_e8,&local_e8);
  FUN_1400c2340(&local_e8,&local_e8,param_2);
  *param_1 = local_e8;
  param_1[1] = uStack_e0;
  param_1[2] = local_d8;
  param_1[3] = uStack_d0;
  return;
}



// FUNCTION 143d67ae0 ecp_nistz256_windowed_mul body=2306 status=ok
// SIG undefined ecp_nistz256_windowed_mul(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte * ecp_nistz256_windowed_mul
                 (longlong param_1,undefined8 *param_2,longlong *param_3,longlong param_4,
                 ulonglong param_5,undefined8 param_6)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  int iVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  byte *pbVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  longlong *plVar20;
  byte *pbVar21;
  longlong lVar22;
  undefined4 uVar23;
  byte *local_88;
  longlong local_80;
  ulonglong local_68;
  longlong local_60;
  
  pbVar12 = (byte *)0x0;
  local_60 = 0;
  pbVar5 = pbVar12;
  pbVar6 = pbVar12;
  if (param_5 * 0x10 + 6 < 0x1555556) {
    pbVar5 = (byte *)CRYPTO_malloc(param_5 * 0x600 + 0x220,"crypto\\ec\\ecp_nistz256.c",599);
    pbVar6 = (byte *)0x0;
    if (((pbVar5 != (byte *)0x0) &&
        (pbVar6 = (byte *)CRYPTO_malloc(param_5 * 0x21,"crypto\\ec\\ecp_nistz256.c",0x259),
        pbVar6 != (byte *)0x0)) &&
       (local_60 = CRYPTO_malloc(param_5 * 8,"crypto\\ec\\ecp_nistz256.c",0x25a), local_60 != 0)) {
      local_68 = 0;
      pbVar21 = pbVar5 + (0x40 - (ulonglong)((uint)pbVar5 & 0x3f));
      pbVar1 = pbVar21 + param_5 * 0x600;
      if (param_5 != 0) {
        param_4 = param_4 - (longlong)param_3;
        local_80 = 0;
        plVar20 = param_3;
        local_88 = pbVar21;
        do {
          pbVar12 = (byte *)0x0;
          iVar4 = BN_num_bits(*plVar20);
          if ((0x100 < iVar4) || (iVar4 = BN_is_negative(*plVar20), iVar4 != 0)) {
            lVar7 = BN_CTX_get(param_6);
            if (lVar7 != 0) {
              iVar4 = BN_nnmod(lVar7,*plVar20,*(undefined8 *)(param_1 + 0x10),param_6);
              if (iVar4 != 0) goto LAB_143d67c6e;
              uVar23 = 0x26c;
              uVar19 = 3;
LAB_143d6832b:
              ERR_put_error(0x10,0xf2,uVar19,"crypto\\ec\\ecp_nistz256.c",uVar23);
            }
            goto LAB_143d68335;
          }
          lVar7 = *plVar20;
LAB_143d67c6e:
          *(longlong *)((longlong)plVar20 + (local_60 - (longlong)param_3)) = lVar7;
          iVar4 = IStreamingManager::GetNumWantingResources(lVar7);
          pbVar11 = pbVar12;
          if (iVar4 << 3 < 1) {
LAB_143d67d2c:
            lVar7 = 0x21 - (longlong)pbVar11;
            pbVar11 = pbVar11 + local_80 + (longlong)pbVar6;
            for (; lVar7 != 0; lVar7 = lVar7 + -1) {
              *pbVar11 = 0;
              pbVar11 = pbVar11 + 1;
            }
          }
          else {
            pbVar17 = pbVar6 + local_80;
            pbVar14 = pbVar12;
            do {
              lVar7 = FHardwareCursor::GetHandle
                                (*(undefined8 *)((longlong)plVar20 + (local_60 - (longlong)param_3))
                                );
              iVar13 = (int)pbVar14;
              iVar4 = iVar13;
              if (iVar13 < 0) {
                iVar4 = iVar13 + 7;
              }
              pbVar14 = (byte *)(ulonglong)(iVar13 + 8U);
              uVar2 = *(undefined8 *)(lVar7 + (longlong)(iVar4 >> 3) * 8);
              pbVar11[(longlong)pbVar17] = (byte)uVar2;
              (pbVar11 + 1)[(longlong)pbVar17] = (byte)((ulonglong)uVar2 >> 8);
              (pbVar11 + 2)[(longlong)pbVar17] = (byte)((ulonglong)uVar2 >> 0x10);
              (pbVar11 + 3)[(longlong)pbVar17] = (byte)((ulonglong)uVar2 >> 0x18);
              (pbVar11 + 4)[(longlong)pbVar17] = (byte)((ulonglong)uVar2 >> 0x20);
              (pbVar11 + 5)[(longlong)pbVar17] = (byte)((ulonglong)uVar2 >> 0x28);
              (pbVar11 + 6)[(longlong)pbVar17] = (byte)((ulonglong)uVar2 >> 0x30);
              (pbVar11 + 7)[(longlong)pbVar17] = (byte)((ulonglong)uVar2 >> 0x38);
              pbVar11 = pbVar11 + 8;
              iVar4 = IStreamingManager::GetNumWantingResources
                                (*(undefined8 *)((longlong)plVar20 + (local_60 - (longlong)param_3))
                                );
            } while ((int)(iVar13 + 8U) < iVar4 * 8);
            if ((longlong)pbVar11 < 0x21) goto LAB_143d67d2c;
          }
          iVar4 = bn_copy_words(pbVar1,*(undefined8 *)
                                        (*(longlong *)((longlong)plVar20 + param_4) + 0x10),4);
          if (((iVar4 == 0) ||
              (iVar4 = bn_copy_words(pbVar1 + 0x20,
                                     *(undefined8 *)
                                      (*(longlong *)((longlong)plVar20 + param_4) + 0x18),4),
              iVar4 == 0)) ||
             (iVar4 = bn_copy_words(pbVar1 + 0x40,
                                    *(undefined8 *)
                                     (*(longlong *)((longlong)plVar20 + param_4) + 0x20),4),
             iVar4 == 0)) {
            uVar23 = 0x289;
            uVar19 = 0x92;
            goto LAB_143d6832b;
          }
          FUN_1400c2e00(local_88,pbVar1,1);
          FUN_1400c3580(pbVar1 + 0x60,pbVar1);
          FUN_1400c2e00(local_88,pbVar1 + 0x60,2);
          pbVar12 = pbVar1 + 0xc0;
          FUN_1400c38c0(pbVar12,pbVar1 + 0x60,pbVar1);
          FUN_1400c2e00(local_88,pbVar12,3);
          FUN_1400c3580(pbVar1 + 0x60,pbVar1 + 0x60);
          FUN_1400c2e00(local_88,pbVar1 + 0x60,4);
          FUN_1400c3580(pbVar12,pbVar12);
          FUN_1400c2e00(local_88,pbVar12,6);
          pbVar11 = pbVar1 + 0x120;
          FUN_1400c38c0(pbVar11,pbVar1 + 0x60,pbVar1);
          FUN_1400c2e00(local_88,pbVar11,5);
          pbVar14 = pbVar1 + 0x180;
          FUN_1400c38c0(pbVar14,pbVar12,pbVar1);
          FUN_1400c2e00(local_88,pbVar14,7);
          FUN_1400c3580(pbVar1 + 0x60,pbVar1 + 0x60);
          FUN_1400c2e00(local_88,pbVar1 + 0x60,8);
          FUN_1400c3580(pbVar12,pbVar12);
          FUN_1400c2e00(local_88,pbVar12,0xc);
          FUN_1400c3580(pbVar11,pbVar11);
          FUN_1400c2e00(local_88,pbVar11,10);
          FUN_1400c3580(pbVar14,pbVar14);
          FUN_1400c2e00(local_88,pbVar14,0xe);
          FUN_1400c38c0(pbVar12,pbVar12,pbVar1);
          FUN_1400c2e00(local_88,pbVar12,0xd);
          FUN_1400c38c0(pbVar11,pbVar11,pbVar1);
          FUN_1400c2e00(local_88,pbVar11,0xb);
          FUN_1400c38c0(pbVar14,pbVar14,pbVar1);
          FUN_1400c2e00(local_88,pbVar14,0xf);
          FUN_1400c38c0(pbVar12,pbVar1 + 0x60,pbVar1);
          FUN_1400c2e00(local_88,pbVar12,9);
          FUN_1400c3580(pbVar1 + 0x60,pbVar1 + 0x60);
          FUN_1400c2e00(local_88,pbVar1 + 0x60,0x10);
          local_88 = local_88 + 0x600;
          local_80 = local_80 + 0x21;
          local_68 = local_68 + 1;
          plVar20 = plVar20 + 1;
        } while (local_68 < param_5);
      }
      local_80._0_4_ = 0xff;
      FUN_1400c2e60(pbVar1,pbVar21,(pbVar6[0x1f] >> 6 & 1) - ((char)pbVar6[0x1f] >> 7));
      uVar2 = *(undefined8 *)(pbVar1 + 8);
      *param_2 = *(undefined8 *)pbVar1;
      param_2[1] = uVar2;
      uVar2 = *(undefined8 *)(pbVar1 + 0x18);
      param_2[2] = *(undefined8 *)(pbVar1 + 0x10);
      param_2[3] = uVar2;
      uVar2 = *(undefined8 *)(pbVar1 + 0x28);
      param_2[4] = *(undefined8 *)(pbVar1 + 0x20);
      param_2[5] = uVar2;
      uVar2 = *(undefined8 *)(pbVar1 + 0x38);
      param_2[6] = *(undefined8 *)(pbVar1 + 0x30);
      param_2[7] = uVar2;
      uVar19 = *(undefined4 *)(pbVar1 + 0x44);
      uVar23 = *(undefined4 *)(pbVar1 + 0x48);
      uVar3 = *(undefined4 *)(pbVar1 + 0x4c);
      *(undefined4 *)(param_2 + 8) = *(undefined4 *)(pbVar1 + 0x40);
      *(undefined4 *)((longlong)param_2 + 0x44) = uVar19;
      *(undefined4 *)(param_2 + 9) = uVar23;
      *(undefined4 *)((longlong)param_2 + 0x4c) = uVar3;
      uVar2 = *(undefined8 *)(pbVar1 + 0x58);
      param_2[10] = *(undefined8 *)(pbVar1 + 0x50);
      param_2[0xb] = uVar2;
      do {
        uVar10 = (ulonglong)((uint)local_80 == 0xff);
        if (uVar10 < param_5) {
          uVar8 = (uint)local_80 - 1 >> 3;
          pbVar12 = pbVar21 + uVar10 * 0x600;
          lVar7 = uVar10 * 0x21;
          lVar22 = param_5 - uVar10;
          do {
            uVar9 = (ushort)(CONCAT11(pbVar6[(ulonglong)(uVar8 + 1) + lVar7],
                                      pbVar6[(ulonglong)uVar8 + lVar7]) >>
                            ((byte)((uint)local_80 - 1) & 7)) & 0x3f;
            uVar15 = (uVar9 >> 5) - 1;
            uVar16 = ~uVar15;
            uVar9 = 0x3f - uVar9 & uVar16 | uVar15 & uVar9;
            uVar9 = (uVar16 & 1) + ((uVar9 >> 1) + (uVar9 & 1)) * 2;
            FUN_1400c2e60(pbVar1,pbVar12,uVar9 >> 1);
            FUN_1400c14c0(pbVar1 + 0x80,pbVar1 + 0x20);
            uVar18 = -(ulonglong)(uVar9 & 1);
            uVar10 = ~uVar18;
            *(ulonglong *)(pbVar1 + 0x20) =
                 uVar10 & *(ulonglong *)(pbVar1 + 0x20) ^ uVar18 & *(ulonglong *)(pbVar1 + 0x80);
            *(ulonglong *)(pbVar1 + 0x28) =
                 *(ulonglong *)(pbVar1 + 0x88) & uVar18 ^ uVar10 & *(ulonglong *)(pbVar1 + 0x28);
            *(ulonglong *)(pbVar1 + 0x30) =
                 *(ulonglong *)(pbVar1 + 0x90) & uVar18 ^ uVar10 & *(ulonglong *)(pbVar1 + 0x30);
            *(ulonglong *)(pbVar1 + 0x38) =
                 *(ulonglong *)(pbVar1 + 0x98) & uVar18 ^ *(ulonglong *)(pbVar1 + 0x38) & uVar10;
            FUN_1400c38c0(param_2,param_2,pbVar1);
            lVar7 = lVar7 + 0x21;
            pbVar12 = pbVar12 + 0x600;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
        }
        local_80._0_4_ = (uint)local_80 - 5;
        FUN_1400c3580(param_2,param_2);
        FUN_1400c3580(param_2,param_2);
        FUN_1400c3580(param_2,param_2);
        FUN_1400c3580(param_2,param_2);
        FUN_1400c3580(param_2,param_2);
        pbVar12 = pbVar6;
      } while (4 < (uint)local_80);
      for (; param_5 != 0; param_5 = param_5 - 1) {
        uVar9 = *pbVar12 & 0x1f;
        uVar15 = (uVar9 >> 4) - 1;
        uVar16 = ~uVar15;
        uVar8 = uVar9 * -2 + 0x3f & uVar16;
        uVar8 = (uVar16 & 1) + (((uVar8 | uVar15 & uVar9 * 2) >> 1) + (uVar8 & 1)) * 2;
        FUN_1400c2e60(pbVar1,pbVar21,uVar8 >> 1);
        FUN_1400c14c0(pbVar1 + 0x80,pbVar1 + 0x20);
        uVar18 = -(ulonglong)(uVar8 & 1);
        uVar10 = ~uVar18;
        *(ulonglong *)(pbVar1 + 0x20) =
             *(ulonglong *)(pbVar1 + 0x20) & uVar10 ^ *(ulonglong *)(pbVar1 + 0x80) & uVar18;
        *(ulonglong *)(pbVar1 + 0x28) =
             *(ulonglong *)(pbVar1 + 0x88) & uVar18 ^ uVar10 & *(ulonglong *)(pbVar1 + 0x28);
        *(ulonglong *)(pbVar1 + 0x30) =
             *(ulonglong *)(pbVar1 + 0x90) & uVar18 ^ *(ulonglong *)(pbVar1 + 0x30) & uVar10;
        *(ulonglong *)(pbVar1 + 0x38) =
             *(ulonglong *)(pbVar1 + 0x98) & uVar18 ^ *(ulonglong *)(pbVar1 + 0x38) & uVar10;
        FUN_1400c38c0(param_2,param_2,pbVar1);
        pbVar21 = pbVar21 + 0x600;
        pbVar12 = pbVar12 + 0x21;
      }
      pbVar12 = (byte *)0x1;
      goto LAB_143d68335;
    }
  }
  ERR_put_error(0x10,0xf2,0x41,"crypto\\ec\\ecp_nistz256.c",0x25b);
LAB_143d68335:
  CRYPTO_free(pbVar5,"crypto\\ec\\ecp_nistz256.c",0x2eb);
  CRYPTO_free(pbVar6,"crypto\\ec\\ecp_nistz256.c",0x2ec);
  CRYPTO_free(local_60,"crypto\\ec\\ecp_nistz256.c",0x2ed);
  return pbVar12;
}



// FUNCTION 143d683f0 is_one body=135 status=ok
// SIG undefined is_one(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong is_one(undefined8 param_1)

{
  int iVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  
  puVar2 = (ulonglong *)FHardwareCursor::GetHandle();
  iVar1 = IStreamingManager::GetNumWantingResources(param_1);
  if (iVar1 == 4) {
    uVar3 = puVar2[3] ^ 0xfffffffe | puVar2[1] ^ 0xffffffff00000000 | ~puVar2[2] | *puVar2 ^ 1;
    return ~(-uVar3 | uVar3) >> 0x3f;
  }
  return 0;
}



// FUNCTION 143d68480 EC_ec_pre_comp_dup body=19 status=ok
// SIG undefined EC_ec_pre_comp_dup(void)

longlong EC_ec_pre_comp_dup(longlong param_1)

{
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 143d684a0 EC_ec_pre_comp_free body=151 status=ok
// SIG undefined EC_ec_pre_comp_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EC_ec_pre_comp_free(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 2) {
      plVar4 = *(longlong **)(param_1 + 0x20);
      if (plVar4 != (longlong *)0x0) {
        lVar3 = *plVar4;
        if (lVar3 != 0) {
          do {
            EC_POINT_free(lVar3);
            lVar3 = plVar4[1];
            plVar4 = plVar4 + 1;
          } while (lVar3 != 0);
          plVar4 = *(longlong **)(param_1 + 0x20);
        }
        CRYPTO_free(plVar4,"crypto\\ec\\ec_mult.c",0x62);
      }
      CRYPTO_THREAD_lock_free(*(undefined8 *)(param_1 + 0x38));
      CRYPTO_free(param_1,"crypto\\ec\\ec_mult.c",0x65);
    }
  }
  return;
}



// FUNCTION 143d68540 ec_scalar_mul_ladder body=1744 status=ok
// SIG undefined ec_scalar_mul_ladder(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ec_scalar_mul_ladder
                    (longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4,
                    undefined8 param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 uVar14;
  uint local_res20;
  undefined8 in_stack_ffffffffffffff98;
  uint local_54;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  lVar9 = 0;
  local_54 = 0;
  if ((param_4 != 0) && (iVar2 = EC_POINT_is_at_infinity(param_1,param_4), iVar2 != 0)) {
    uVar7 = EC_POINT_set_to_infinity(param_1,param_2);
    return uVar7;
  }
  iVar2 = BN_is_zero(param_1[2]);
  if (iVar2 != 0) {
    ERR_put_error(0x10,0x11c,0x72,"crypto\\ec\\ec_mult.c",CONCAT44(uVar14,0x9c));
    return 0;
  }
  iVar2 = BN_is_zero(param_1[3]);
  if (iVar2 != 0) {
    ERR_put_error(0x10,0x11c,0xa4,"crypto\\ec\\ec_mult.c",CONCAT44(uVar14,0xa0));
    return 0;
  }
  BN_CTX_start(param_5);
  lVar8 = EC_POINT_new(param_1);
  if ((lVar8 == 0) || (lVar9 = EC_POINT_new(param_1), lVar9 == 0)) {
    uVar10 = 0xa8;
LAB_143d68bb8:
    uVar14 = 0x41;
  }
  else if (param_4 == 0) {
    iVar2 = EC_POINT_copy(lVar8,param_1[1]);
    if (iVar2 != 0) goto LAB_143d68697;
    uVar10 = 0xae;
    uVar14 = 0x10;
  }
  else {
    iVar2 = EC_POINT_copy(lVar8,param_4);
    if (iVar2 == 0) {
      uVar10 = 0xb3;
      uVar14 = 0x10;
    }
    else {
LAB_143d68697:
      BN_set_flags(*(undefined8 *)(lVar8 + 0x10),4);
      BN_set_flags(*(undefined8 *)(lVar8 + 0x18),4);
      BN_set_flags(*(undefined8 *)(lVar8 + 0x20),4);
      BN_set_flags(*(undefined8 *)(param_2 + 0x10),4);
      BN_set_flags(*(undefined8 *)(param_2 + 0x18),4);
      BN_set_flags(*(undefined8 *)(param_2 + 0x20),4);
      BN_set_flags(*(undefined8 *)(lVar9 + 0x10),4);
      BN_set_flags(*(undefined8 *)(lVar9 + 0x18),4);
      BN_set_flags(*(undefined8 *)(lVar9 + 0x20),4);
      uVar10 = BN_CTX_get(param_5);
      uVar11 = BN_CTX_get(param_5);
      lVar12 = BN_CTX_get(param_5);
      if (lVar12 == 0) {
        uVar10 = 0xc0;
        goto LAB_143d68bb8;
      }
      iVar2 = BN_mul(uVar10,param_1[2],param_1[3],param_5);
      if (iVar2 == 0) {
        uVar10 = 0xc5;
        uVar14 = 3;
      }
      else {
        iVar2 = BN_num_bits(uVar10);
        iVar3 = IStreamingManager::GetNumWantingResources(uVar10);
        iVar3 = iVar3 + 1;
        lVar13 = bn_wexpand(lVar12,iVar3);
        if ((lVar13 == 0) || (lVar13 = bn_wexpand(uVar11,iVar3), lVar13 == 0)) {
          uVar10 = 0xd3;
          uVar14 = 3;
        }
        else {
          lVar13 = BN_copy(lVar12,param_3);
          if (lVar13 == 0) {
            uVar10 = 0xd8;
            uVar14 = 3;
          }
          else {
            BN_set_flags(lVar12,4);
            iVar4 = BN_num_bits(lVar12);
            if (((iVar2 < iVar4) || (iVar4 = BN_is_negative(lVar12), iVar4 != 0)) &&
               (iVar4 = BN_nnmod(lVar12,lVar12,uVar10,param_5), iVar4 == 0)) {
              uVar10 = 0xe4;
              uVar14 = 3;
            }
            else {
              iVar4 = BN_add(uVar11,lVar12,uVar10);
              if (iVar4 == 0) {
                uVar10 = 0xea;
                uVar14 = 3;
              }
              else {
                BN_set_flags(uVar11,4);
                iVar4 = BN_add(lVar12,uVar11,uVar10);
                if (iVar4 == 0) {
                  uVar10 = 0xef;
                  uVar14 = 3;
                }
                else {
                  iVar4 = BN_is_bit_set(uVar11,iVar2);
                  FUN_143d0e930((longlong)iVar4,lVar12,uVar11,iVar3);
                  uVar14 = IStreamingManager::GetNumWantingResources(param_1[8]);
                  lVar13 = bn_wexpand(*(undefined8 *)(lVar9 + 0x10),uVar14);
                  if (((((lVar13 == 0) ||
                        (lVar13 = bn_wexpand(*(undefined8 *)(lVar9 + 0x18),uVar14), lVar13 == 0)) ||
                       ((lVar13 = bn_wexpand(*(undefined8 *)(lVar9 + 0x20),uVar14), lVar13 == 0 ||
                        ((lVar13 = bn_wexpand(*(undefined8 *)(param_2 + 0x10),uVar14), lVar13 == 0
                         || (lVar13 = bn_wexpand(*(undefined8 *)(param_2 + 0x18),uVar14),
                            lVar13 == 0)))))) ||
                      (lVar13 = bn_wexpand(*(undefined8 *)(param_2 + 0x20),uVar14), lVar13 == 0)) ||
                     (((lVar13 = bn_wexpand(*(undefined8 *)(lVar8 + 0x10),uVar14), lVar13 == 0 ||
                       (lVar13 = bn_wexpand(*(undefined8 *)(lVar8 + 0x18),uVar14), lVar13 == 0)) ||
                      (lVar13 = bn_wexpand(*(undefined8 *)(lVar8 + 0x20),uVar14), lVar13 == 0)))) {
                    uVar10 = 0x103;
                    uVar14 = 3;
                  }
                  else {
                    iVar3 = ec_point_blind_coordinates(param_1,lVar8,param_5);
                    if (iVar3 == 0) {
                      uVar10 = 0x110;
                      uVar14 = 0xa3;
                    }
                    else {
                      if (*(code **)(*param_1 + 400) == (code *)0x0) {
                        iVar3 = EC_POINT_copy(lVar9,lVar8);
                        if (iVar3 != 0) {
                          iVar3 = EC_POINT_dbl(param_1,param_2,lVar9,param_5);
                          goto joined_r0x000143d689f2;
                        }
                      }
                      else {
                        iVar3 = (**(code **)(*param_1 + 400))(param_1,param_2,lVar9,lVar8,param_5);
joined_r0x000143d689f2:
                        if (iVar3 != 0) {
                          local_res20 = 1;
                          iVar3 = iVar2 + -1;
                          if (-1 < iVar2 + -1) {
                            do {
                              uVar5 = BN_is_bit_set(lVar12,iVar3);
                              lVar13 = (longlong)(int)(uVar5 ^ local_res20);
                              FUN_143d0e930(lVar13,*(undefined8 *)(param_2 + 0x10),
                                            *(undefined8 *)(lVar9 + 0x10),uVar14);
                              FUN_143d0e930(lVar13,*(undefined8 *)(param_2 + 0x18),
                                            *(undefined8 *)(lVar9 + 0x18),uVar14);
                              FUN_143d0e930(lVar13,*(undefined8 *)(param_2 + 0x20),
                                            *(undefined8 *)(lVar9 + 0x20),uVar14);
                              uVar6 = (*(uint *)(param_2 + 0x28) ^ *(uint *)(lVar9 + 0x28)) &
                                      (uVar5 ^ local_res20);
                              *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) ^ uVar6;
                              *(uint *)(lVar9 + 0x28) = *(uint *)(lVar9 + 0x28) ^ uVar6;
                              if (*(code **)(*param_1 + 0x198) == (code *)0x0) {
                                iVar2 = EC_POINT_add(param_1,lVar9,param_2,lVar9,param_5);
                                if (iVar2 != 0) {
                                  iVar2 = EC_POINT_dbl(param_1,param_2,param_2,param_5);
                                  goto LAB_143d68ac4;
                                }
LAB_143d68b76:
                                uVar10 = 0x166;
                                uVar14 = 0xa2;
                                goto LAB_143d68bc3;
                              }
                              iVar2 = (**(code **)(*param_1 + 0x198))(param_1,param_2,lVar9,lVar8);
LAB_143d68ac4:
                              if (iVar2 == 0) goto LAB_143d68b76;
                              bVar1 = 0 < iVar3;
                              iVar3 = iVar3 + -1;
                              local_res20 = uVar5;
                            } while (bVar1);
                          }
                          lVar12 = (longlong)(int)local_res20;
                          FUN_143d0e930(lVar12,*(undefined8 *)(param_2 + 0x10),
                                        *(undefined8 *)(lVar9 + 0x10),uVar14);
                          FUN_143d0e930(lVar12,*(undefined8 *)(param_2 + 0x18),
                                        *(undefined8 *)(lVar9 + 0x18),uVar14);
                          FUN_143d0e930(lVar12,*(undefined8 *)(param_2 + 0x20),
                                        *(undefined8 *)(lVar9 + 0x20),uVar14);
                          local_res20 = (*(uint *)(param_2 + 0x28) ^ *(uint *)(lVar9 + 0x28)) &
                                        local_res20;
                          *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) ^ local_res20;
                          *(uint *)(lVar9 + 0x28) = *(uint *)(lVar9 + 0x28) ^ local_res20;
                          if ((*(code **)(*param_1 + 0x1a0) == (code *)0x0) ||
                             (iVar2 = (**(code **)(*param_1 + 0x1a0))
                                                (param_1,param_2,lVar9,lVar8,param_5), iVar2 != 0))
                          {
                            local_54 = 1;
                            goto LAB_143d68bd4;
                          }
                          uVar10 = 0x175;
                          uVar14 = 0x88;
                          goto LAB_143d68bc3;
                        }
                      }
                      uVar10 = 0x116;
                      uVar14 = 0x99;
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
LAB_143d68bc3:
  ERR_put_error(0x10,0x11c,uVar14,"crypto\\ec\\ec_mult.c",uVar10);
LAB_143d68bd4:
  EC_POINT_free(lVar8);
  EC_POINT_free(lVar9);
  BN_CTX_end(param_5);
  return (ulonglong)local_54;
}



// FUNCTION 143d68c10 ec_wNAF_mul body=3138 status=ok
// SIG undefined ec_wNAF_mul(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong *
ec_wNAF_mul(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4,
           undefined8 *param_5,longlong *param_6,undefined8 param_7)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  void *pvVar9;
  void *_Dst;
  undefined8 *puVar10;
  size_t *psVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *plVar14;
  void *_Src;
  longlong *plVar15;
  char *pcVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  longlong *plVar21;
  bool bVar23;
  undefined8 in_stack_ffffffffffffff18;
  undefined4 uVar24;
  uint local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  ulonglong local_a8;
  longlong *local_a0;
  longlong *local_98;
  char *local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  undefined8 uStack_40;
  longlong *plVar22;
  
  uStack_40 = 0x143d68c2f;
  plVar22 = (longlong *)0x0;
  plVar21 = (longlong *)0x0;
  local_50 = 0;
  local_68 = 0;
  local_a0 = (longlong *)0x0;
  local_b8 = (longlong *)0x0;
  local_58 = 0;
  bVar23 = false;
  local_90 = (char *)0x0;
  local_80 = (longlong *)0x0;
  local_88 = 0;
  local_98 = (longlong *)0x0;
  local_c0 = (longlong *)0x0;
  local_d0 = 0;
  iVar3 = BN_is_zero(*(undefined8 *)(param_1 + 0x10));
  if ((iVar3 == 0) && (iVar3 = BN_is_zero(*(undefined8 *)(param_1 + 0x18)), iVar3 == 0)) {
    if (param_3 == 0) {
      plVar14 = plVar22;
      plVar17 = plVar22;
      if (param_4 == (longlong *)0x1) {
        plVar21 = (longlong *)ec_scalar_mul_ladder(param_1,param_2,*param_6,*param_5,param_7);
        return plVar21;
      }
      goto LAB_143d68e26;
    }
    if (param_4 == (longlong *)0x0) {
      plVar21 = (longlong *)ec_scalar_mul_ladder(param_1,param_2,param_3,0,param_7);
      return plVar21;
    }
LAB_143d68d22:
    local_50 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
               ::GetBoundProgramCounterForTimerManager(param_1);
    if (local_50 == 0) {
      ERR_put_error(0x10,0xbb,0x71,"crypto\\ec\\ec_mult.c",0x1d6);
      plVar14 = plVar22;
      plVar21 = plVar22;
      goto LAB_143d69161;
    }
    plVar14 = *(longlong **)(param_1 + 0xa0);
    if (((plVar14 == (longlong *)0x0) || (plVar14[2] == 0)) ||
       (iVar3 = EC_POINT_cmp(param_1,local_50,*(undefined8 *)plVar14[4],param_7), iVar3 != 0)) {
      local_d0 = 1;
      plVar14 = plVar22;
      plVar17 = (longlong *)0x1;
      local_b8 = (longlong *)0x1;
      goto LAB_143d68e26;
    }
    plVar13 = (longlong *)plVar14[1];
    local_a0 = plVar13;
    iVar3 = BN_num_bits(param_3);
    plVar17 = (longlong *)plVar14[2];
    local_58 = 1L << ((char)plVar14[3] - 1U & 0x3f);
    plVar13 = (longlong *)((ulonglong)(longlong)iVar3 / (ulonglong)plVar13 + 1);
    if (plVar14[5] == (longlong)plVar17 * local_58) {
      local_b8 = plVar17;
      if (plVar13 <= plVar17) {
        plVar17 = plVar13;
        local_b8 = plVar13;
      }
      goto LAB_143d68e26;
    }
    uVar20 = 0x1f2;
    goto LAB_143d68de3;
  }
  plVar14 = (longlong *)0x0;
  plVar17 = (longlong *)0x0;
  if (param_3 != 0) goto LAB_143d68d22;
LAB_143d68e26:
  local_c8 = (longlong *)((longlong)plVar17 + (longlong)param_4);
  lVar8 = (longlong)local_c8 * 8;
  local_90 = (char *)CRYPTO_malloc(lVar8,"crypto\\ec\\ec_mult.c",0x200);
  lVar7 = CRYPTO_malloc(lVar8,"crypto\\ec\\ec_mult.c",0x201);
  local_88 = lVar7;
  local_80 = (longlong *)CRYPTO_malloc(lVar8 + 8,"crypto\\ec\\ec_mult.c",0x203);
  local_c0 = (longlong *)CRYPTO_malloc(lVar8,"crypto\\ec\\ec_mult.c",0x204);
  if (local_80 != (longlong *)0x0) {
    *local_80 = 0;
  }
  if (((local_90 == (char *)0x0) || (lVar7 == 0)) ||
     ((local_80 == (longlong *)0x0 || (local_c0 == (longlong *)0x0)))) {
    uVar20 = 0x20b;
    uVar19 = 0x41;
LAB_143d68de9:
    ERR_put_error(0x10,0xbb,uVar19,"crypto\\ec\\ec_mult.c",uVar20);
LAB_143d6915e:
    plVar14 = (longlong *)0x0;
    plVar21 = plVar22;
    goto LAB_143d69161;
  }
  local_b0 = (longlong *)((ulonglong)local_d0 + (longlong)param_4);
  local_a8 = 0;
  if (local_b0 != (longlong *)0x0) {
    local_70 = (longlong *)((longlong)local_80 - (longlong)param_6);
    local_78 = (longlong)local_90 - (longlong)param_6;
    local_48 = local_70 + 1;
    local_60 = (longlong *)(local_88 - (longlong)param_6);
    plVar13 = plVar22;
    do {
      lVar8 = local_78;
      lVar7 = param_3;
      if (plVar13 < param_4) {
        lVar7 = *param_6;
      }
      uVar4 = BN_num_bits(lVar7);
      if (uVar4 < 2000) {
        if (uVar4 < 800) {
          if (uVar4 < 300) {
            if (uVar4 < 0x46) {
              lVar7 = 2 - (ulonglong)(uVar4 < 0x14);
            }
            else {
              lVar7 = 3;
            }
          }
          else {
            lVar7 = 4;
          }
        }
        else {
          lVar7 = 5;
        }
      }
      else {
        lVar7 = 6;
      }
      *(longlong *)(lVar8 + (longlong)param_6) = lVar7;
      local_a8 = local_a8 + (1L << ((char)lVar7 - 1U & 0x3f));
      *(undefined8 *)((longlong)local_48 + (longlong)param_6) = 0;
      lVar8 = param_3;
      if (plVar13 < param_4) {
        lVar8 = *param_6;
      }
      puVar10 = (undefined8 *)((longlong)local_60 + (longlong)param_6);
      lVar8 = bn_compute_wNAF(lVar8,*(undefined4 *)(local_78 + (longlong)param_6),puVar10);
      *(longlong *)((longlong)local_70 + (longlong)param_6) = lVar8;
      if (lVar8 == 0) goto LAB_143d6915e;
      plVar18 = (longlong *)*puVar10;
      plVar13 = (longlong *)((longlong)plVar13 + 1);
      param_6 = param_6 + 1;
      if (plVar18 <= local_98) {
        plVar18 = local_98;
      }
      plVar17 = local_b8;
      local_98 = plVar18;
    } while (plVar13 < local_b0);
  }
  if (plVar17 != (longlong *)0x0) {
    if (plVar14 != (longlong *)0x0) {
      local_b8 = (longlong *)0x0;
      if (local_d0 != 0) {
        uVar20 = 0x232;
        goto LAB_143d68de3;
      }
      uVar12 = plVar14[3];
      *(ulonglong *)(local_90 + (longlong)param_4 * 8) = uVar12;
      pvVar9 = (void *)bn_compute_wNAF(param_3,uVar12 & 0xffffffff,&local_b8);
      if (pvVar9 != (void *)0x0) {
        if (local_b8 <= local_98) {
          local_c8 = (longlong *)((longlong)param_4 + 1);
          local_80[(longlong)param_4] = (longlong)pvVar9;
          local_80[(longlong)param_4 + 1] = 0;
          *(longlong **)(local_88 + (longlong)param_4 * 8) = local_b8;
          local_c0[(longlong)param_4] = plVar14[4];
          goto LAB_143d69424;
        }
        if (local_b8 < (longlong *)((longlong)plVar17 * (longlong)local_a0)) {
          uVar12 = (ulonglong)((longlong)local_a0 + -1 + (longlong)local_b8) / (ulonglong)local_a0;
          if ((ulonglong)plVar14[2] < uVar12) {
            ERR_put_error(0x10,0xbb,0x44,"crypto\\ec\\ec_mult.c",0x25d);
            uVar20 = 0x25e;
LAB_143d6914f:
            CRYPTO_free(pvVar9,"crypto\\ec\\ec_mult.c",uVar20);
            goto LAB_143d6915e;
          }
          local_c8 = (longlong *)(uVar12 + (longlong)param_4);
        }
        plVar14 = (longlong *)plVar14[4];
        if (param_4 < local_c8) {
          local_60 = (longlong *)((longlong)local_c8 + -1);
          local_78 = (longlong)local_80 - local_88;
          local_70 = (longlong *)((longlong)local_c0 - local_88);
          psVar11 = (size_t *)(local_88 + (longlong)param_4 * 8);
          _Src = pvVar9;
          plVar17 = param_4;
          do {
            if (plVar17 < local_60) {
              *psVar11 = (size_t)local_a0;
              if (local_b8 < local_a0) {
                ERR_put_error(0x10,0xbb,0x44,"crypto\\ec\\ec_mult.c",0x26c);
                uVar20 = 0x26d;
                goto LAB_143d6914f;
              }
              local_b8 = (longlong *)((longlong)local_b8 - (longlong)local_a0);
            }
            else {
              *psVar11 = (size_t)local_b8;
            }
            *(undefined8 *)(local_78 + 8 + (longlong)psVar11) = 0;
            _Dst = (void *)CRYPTO_malloc(*psVar11,"crypto\\ec\\ec_mult.c",0x279);
            *(void **)(local_78 + (longlong)psVar11) = _Dst;
            if (_Dst == (void *)0x0) {
              ERR_put_error(0x10,0xbb,0x41,"crypto\\ec\\ec_mult.c",0x27b);
              uVar20 = 0x27c;
              goto LAB_143d6914f;
            }
            _guard_xfg_dispatch_icall_nop(_Dst,_Src,*psVar11);
            plVar13 = (longlong *)*psVar11;
            if ((longlong *)*psVar11 <= local_98) {
              plVar13 = local_98;
            }
            local_98 = plVar13;
            if (*plVar14 == 0) {
              ERR_put_error(0x10,0xbb,0x44,"crypto\\ec\\ec_mult.c",0x284);
              uVar20 = 0x285;
              goto LAB_143d6914f;
            }
            plVar17 = (longlong *)((longlong)plVar17 + 1);
            _Src = (void *)((longlong)_Src + (longlong)local_a0);
            *(longlong **)((longlong)local_70 + (longlong)psVar11) = plVar14;
            psVar11 = psVar11 + 1;
            plVar14 = plVar14 + local_58;
          } while (plVar17 < local_c8);
        }
        CRYPTO_free(pvVar9,"crypto\\ec\\ec_mult.c",0x28c);
        goto LAB_143d69424;
      }
      goto LAB_143d6915e;
    }
    if (local_d0 != 1) {
      uVar20 = 0x229;
LAB_143d68de3:
      uVar19 = 0x44;
      goto LAB_143d68de9;
    }
  }
LAB_143d69424:
  uVar12 = local_a8;
  plVar14 = (longlong *)CRYPTO_malloc(local_a8 * 8 + 8,"crypto\\ec\\ec_mult.c",0x296);
  uVar24 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
  if (plVar14 == (longlong *)0x0) {
    ERR_put_error(0x10,0xbb,0x41,"crypto\\ec\\ec_mult.c",CONCAT44(uVar24,0x298));
    plVar21 = plVar22;
    goto LAB_143d69161;
  }
  local_70 = plVar14 + uVar12;
  *local_70 = 0;
  plVar17 = plVar14;
  if (local_b0 != (longlong *)0x0) {
    lVar8 = (longlong)local_c0 - (longlong)local_90;
    plVar13 = plVar22;
    pcVar16 = local_90;
    do {
      *(longlong **)(pcVar16 + lVar8) = plVar17;
      plVar18 = plVar22;
      do {
        lVar7 = EC_POINT_new(param_1);
        uVar24 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
        *plVar17 = lVar7;
        if (lVar7 == 0) goto LAB_143d69161;
        plVar17 = plVar17 + 1;
        plVar18 = (longlong *)((longlong)plVar18 + 1);
      } while (plVar18 < (longlong *)(1L << (*pcVar16 - 1U & 0x3f)));
      plVar13 = (longlong *)((longlong)plVar13 + 1);
      pcVar16 = pcVar16 + 8;
    } while (plVar13 < local_b0);
  }
  plVar13 = local_b0;
  if (plVar17 != local_70) {
    ERR_put_error(0x10,0xbb,0x44,"crypto\\ec\\ec_mult.c",CONCAT44(uVar24,0x2a9));
    goto LAB_143d69161;
  }
  local_68 = EC_POINT_new(param_1);
  if (local_68 == 0) goto LAB_143d69161;
  if (plVar13 != (longlong *)0x0) {
    lVar8 = (longlong)local_90 - (longlong)local_c0;
    plVar17 = plVar22;
    plVar13 = local_c0;
    do {
      lVar7 = local_50;
      if (plVar17 < param_4) {
        lVar7 = *(longlong *)((longlong)plVar13 + ((longlong)param_5 - (longlong)local_c0));
      }
      iVar3 = EC_POINT_copy(*(undefined8 *)*plVar13,lVar7);
      if (iVar3 == 0) goto LAB_143d69161;
      if (1 < *(ulonglong *)((longlong)plVar13 + lVar8)) {
        iVar3 = EC_POINT_dbl(param_1,local_68,*(undefined8 *)*plVar13,param_7);
        if (iVar3 == 0) goto LAB_143d69161;
        uVar12 = 1;
        if (1 < (ulonglong)(1L << (*(char *)((longlong)plVar13 + lVar8) - 1U & 0x3f))) {
          do {
            iVar3 = EC_POINT_add(param_1,*(undefined8 *)(*plVar13 + uVar12 * 8),
                                 *(undefined8 *)(*plVar13 + -8 + uVar12 * 8),local_68,param_7);
            if (iVar3 == 0) goto LAB_143d69161;
            uVar12 = uVar12 + 1;
          } while (uVar12 < (ulonglong)(1L << (*(char *)((longlong)plVar13 + lVar8) - 1U & 0x3f)));
        }
      }
      plVar17 = (longlong *)((longlong)plVar17 + 1);
      plVar13 = plVar13 + 1;
    } while (plVar17 < local_b0);
  }
  iVar3 = EC_POINTs_make_affine(param_1,local_a8,plVar14,param_7);
  if (iVar3 == 0) goto LAB_143d69161;
  bVar2 = true;
  iVar3 = (int)local_98 + -1;
  if (iVar3 < 0) {
LAB_143d6981c:
    iVar3 = EC_POINT_set_to_infinity(param_1,param_2);
    if (iVar3 == 0) goto LAB_143d69161;
  }
  else {
    plVar17 = (longlong *)(longlong)iVar3;
    do {
      local_b0 = plVar17;
      if ((!bVar2) && (iVar5 = EC_POINT_dbl(param_1,param_2,param_2,param_7), iVar5 == 0))
      goto LAB_143d69161;
      if (local_c8 != (longlong *)0x0) {
        lVar8 = local_88 - (longlong)local_80;
        plVar13 = (longlong *)((longlong)local_c0 - (longlong)local_80);
        uVar12 = (ulonglong)iVar3;
        plVar18 = local_80;
        plVar15 = plVar22;
        local_a8 = uVar12;
        local_a0 = plVar13;
        do {
          if (uVar12 < *(ulonglong *)((longlong)plVar18 + lVar8)) {
            bVar1 = *(byte *)((longlong)plVar17 + *plVar18);
            uVar12 = local_a8;
            if (bVar1 != 0) {
              iVar5 = -(int)(char)bVar1;
              if (bVar1 < 0x80) {
                iVar5 = (int)(char)bVar1;
              }
              if ((bool)(bVar1 >> 7) != bVar23) {
                if ((!bVar2) &&
                   (iVar6 = EC_POINT_invert(param_1,param_2,param_7), plVar13 = local_a0, iVar6 == 0
                   )) goto LAB_143d69161;
                bVar23 = bVar23 == false;
              }
              uVar20 = *(undefined8 *)
                        (*(longlong *)((longlong)plVar13 + (longlong)plVar18) +
                        ((longlong)iVar5 >> 1) * 8);
              if (bVar2) {
                iVar5 = EC_POINT_copy(param_2,uVar20);
                plVar17 = local_b0;
                uVar12 = local_a8;
                plVar13 = local_a0;
                bVar2 = false;
              }
              else {
                iVar5 = EC_POINT_add(param_1,param_2,param_2,uVar20,param_7);
                plVar17 = local_b0;
                uVar12 = local_a8;
                plVar13 = local_a0;
              }
              local_b0 = plVar17;
              local_a8 = uVar12;
              local_a0 = plVar13;
              if (iVar5 == 0) goto LAB_143d69161;
            }
          }
          plVar15 = (longlong *)((longlong)plVar15 + 1);
          plVar18 = plVar18 + 1;
        } while (plVar15 < local_c8);
      }
      iVar3 = iVar3 + -1;
      plVar17 = (longlong *)((longlong)plVar17 + -1);
    } while (-1 < iVar3);
    local_b0 = plVar17;
    if (bVar2) goto LAB_143d6981c;
    if (bVar23 != false) {
      iVar3 = EC_POINT_invert(param_1,param_2,param_7);
      if (iVar3 != 0) {
        plVar21 = (longlong *)0x1;
      }
      goto LAB_143d69161;
    }
  }
  plVar21 = (longlong *)0x1;
LAB_143d69161:
  EC_POINT_free(local_68);
  CRYPTO_free(local_90,"crypto\\ec\\ec_mult.c",0x306);
  CRYPTO_free(local_88,"crypto\\ec\\ec_mult.c",0x307);
  plVar22 = local_80;
  if (local_80 != (longlong *)0x0) {
    lVar8 = *local_80;
    plVar17 = local_80;
    while (lVar8 != 0) {
      CRYPTO_free(lVar8,"crypto\\ec\\ec_mult.c",0x30c);
      plVar13 = plVar17 + 1;
      plVar17 = plVar17 + 1;
      lVar8 = *plVar13;
    }
    CRYPTO_free(plVar22,"crypto\\ec\\ec_mult.c",0x30e);
  }
  if (plVar14 != (longlong *)0x0) {
    lVar8 = *plVar14;
    plVar22 = plVar14;
    while (lVar8 != 0) {
      EC_POINT_clear_free(lVar8);
      plVar17 = plVar22 + 1;
      plVar22 = plVar22 + 1;
      lVar8 = *plVar17;
    }
    CRYPTO_free(plVar14,"crypto\\ec\\ec_mult.c",0x314);
  }
  CRYPTO_free(local_c0,"crypto\\ec\\ec_mult.c",0x316);
  return plVar21;
}



// FUNCTION 143d69860 EC_GROUP_new_curve_GF2m body=136 status=ok
// SIG undefined EC_GROUP_new_curve_GF2m(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong EC_GROUP_new_curve_GF2m
                   (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143d69880;
  uVar2 = EC_GF2m_simple_method();
  lVar3 = EC_GROUP_new(uVar2);
  if (lVar3 != 0) {
    iVar1 = EC_GROUP_set_curve(lVar3,param_1,param_2,param_3,param_4,uVar4);
    if (iVar1 != 0) {
      return lVar3;
    }
    EC_GROUP_clear_free(lVar3);
  }
  return 0;
}



// FUNCTION 143d698f0 EC_GROUP_new_curve_GF2m body=136 status=ok
// SIG undefined EC_GROUP_new_curve_GF2m(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong EC_GROUP_new_curve_GF2m
                   (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143d69910;
  uVar2 = EC_GF2m_simple_method();
  lVar3 = EC_GROUP_new(uVar2);
  if (lVar3 != 0) {
    iVar1 = EC_GROUP_set_curve(lVar3,param_1,param_2,param_3,param_4,uVar4);
    if (iVar1 != 0) {
      return lVar3;
    }
    EC_GROUP_clear_free(lVar3);
  }
  return 0;
}



// FUNCTION 143d69980 BN_generate_dsa_nonce body=590 status=ok
// SIG undefined BN_generate_dsa_nonce(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
BN_generate_dsa_nonce
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  uint local_228 [2];
  undefined8 local_220;
  undefined1 local_218 [224];
  undefined1 local_138 [96];
  undefined1 local_d8 [64];
  undefined1 local_98 [64];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  local_220 = param_6;
  iVar1 = BN_num_bits(param_2);
  uVar5 = ((int)((iVar1 + 7 >> 0x1f & 7U) + iVar1 + 7) >> 3) + 8;
  lVar2 = CRYPTO_malloc(uVar5,"crypto\\bn\\bn_rand.c",0xdf);
  uVar6 = 0;
  if (lVar2 != 0) {
    uVar4 = *(int *)(param_3 + 1) << 3;
    if (uVar4 < 0x61) {
      _guard_xfg_dispatch_icall_nop(local_138,(void *)*param_3,(ulonglong)uVar4);
      _guard_xfg_dispatch_icall_nop(local_138 + uVar4,0,0x60 - (ulonglong)uVar4);
      local_228[0] = 0;
      if (uVar5 != 0) {
        do {
          iVar1 = RAND_priv_bytes(local_d8,0x40);
          if (iVar1 != 1) goto LAB_143d69b82;
          SHA512_Init(local_218);
          SHA512_Update(local_218,local_228,4);
          SHA512_Update(local_218,local_138,0x60);
          SHA512_Update(local_218,param_4,param_5);
          SHA512_Update(local_218,local_d8,0x40);
          SHA512_Final(local_98,local_218);
          uVar4 = uVar5 - local_228[0];
          if (0x40 < uVar5 - local_228[0]) {
            uVar4 = 0x40;
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)((ulonglong)local_228[0] + lVar2),local_98,(ulonglong)uVar4);
          local_228[0] = local_228[0] + uVar4;
        } while (local_228[0] < uVar5);
      }
      lVar3 = BN_bin2bn(lVar2,uVar5,param_1);
      uVar6 = 0;
      if (lVar3 != 0) {
        local_238 = local_220;
        iVar1 = BN_div(0,param_1,param_1,param_2);
        uVar6 = 0;
        if (iVar1 == 1) {
          uVar6 = 1;
        }
      }
    }
    else {
      local_238 = CONCAT44(local_238._4_4_,0xeb);
      ERR_put_error(3,0x8c,0x75,"crypto\\bn\\bn_rand.c");
      uVar6 = 0;
    }
  }
LAB_143d69b82:
  CRYPTO_free(lVar2,"crypto\\bn\\bn_rand.c",0x109);
  FUN_14004ff40(local_138,0x60);
  return uVar6;
}



// FUNCTION 143d69bd0 BN_priv_rand body=40 status=ok
// SIG undefined BN_priv_rand(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_priv_rand(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bnrand(2,param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 143d69c00 BN_priv_rand_range body=31 status=ok
// SIG undefined BN_priv_rand_range(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_priv_rand_range(undefined8 param_1,undefined8 param_2)

{
  bnrand_range(2,param_1,param_2);
  return;
}



// FUNCTION 143d69c20 BN_rand body=39 status=ok
// SIG undefined BN_rand(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_rand(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bnrand(0,param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 143d69c50 bnrand body=577 status=ok
// SIG undefined bnrand(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong bnrand(int param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  byte local_res18 [16];
  
  lVar6 = 0;
  if (param_3 == 0) {
    if ((param_4 == -1) && (param_5 == 0)) {
      BN_set_word(param_2,0);
      return 1;
    }
  }
  else if ((-1 < param_3) && ((param_3 != 1 || (param_4 < 1)))) {
    iVar1 = (int)(param_3 + 7 + (param_3 + 7 >> 0x1f & 7U)) >> 3;
    lVar7 = (longlong)iVar1;
    uVar5 = param_3 - 1U & 0x80000007;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
    }
    pbVar3 = (byte *)CRYPTO_malloc(lVar7,"crypto\\bn\\bn_rand.c",0x27);
    if (pbVar3 == (byte *)0x0) {
      ERR_put_error(3,0x7f,0x41,"crypto\\bn\\bn_rand.c",0x29);
    }
    else {
      if (param_1 == 0) {
        iVar2 = RAND_bytes();
      }
      else {
        iVar2 = RAND_priv_bytes(pbVar3,iVar1);
      }
      if (0 < iVar2) {
        if ((param_1 == 1) && (lVar4 = lVar6, 0 < iVar1)) {
          do {
            iVar2 = RAND_bytes(local_res18,1);
            if (iVar2 < 1) goto LAB_143d69e27;
            if ((local_res18[0] < 0x80) || (lVar4 < 1)) {
              if (local_res18[0] < 0x2a) {
                pbVar3[lVar4] = 0;
              }
              else if (local_res18[0] < 0x54) {
                pbVar3[lVar4] = 0xff;
              }
            }
            else {
              pbVar3[lVar4] = pbVar3[lVar4 + -1];
            }
            lVar4 = lVar4 + 1;
          } while (lVar4 < lVar7);
        }
        if (-1 < param_4) {
          if (param_4 == 0) {
            *pbVar3 = *pbVar3 | (byte)(1 << (uVar5 & 0x1f));
          }
          else if (uVar5 == 0) {
            pbVar3[1] = pbVar3[1] | 0x80;
            *pbVar3 = 1;
          }
          else {
            *pbVar3 = *pbVar3 | '\x03' << ((char)uVar5 - 1U & 0x1f);
          }
        }
        *pbVar3 = *pbVar3 & ~(byte)(0xff << ((char)uVar5 + 1U & 0x1f));
        if (param_5 != 0) {
          pbVar3[lVar7 + -1] = pbVar3[lVar7 + -1] | 1;
        }
        lVar4 = BN_bin2bn(pbVar3,iVar1,param_2);
        lVar6 = 0;
        if (lVar4 != 0) {
          lVar6 = 1;
        }
      }
    }
LAB_143d69e27:
    CRYPTO_clear_free(pbVar3,lVar7,"crypto\\bn\\bn_rand.c",0x58);
    return lVar6;
  }
  ERR_put_error(3,0x7f,0x76,"crypto\\bn\\bn_rand.c",0x5d);
  return 0;
}



// FUNCTION 143d69ea0 bnrand_range body=454 status=ok
// SIG undefined bnrand_range(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 bnrand_range(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143d69eb3;
  iVar3 = 100;
  if ((*(int *)(param_3 + 0x10) != 0) || (iVar1 = BN_is_zero(param_3), iVar1 != 0)) {
    ERR_put_error(3,0x8a,0x73,"crypto\\bn\\bn_rand.c",0x77,uVar5);
    return 0;
  }
  iVar1 = BN_num_bits(param_3);
  if (iVar1 == 1) {
    BN_set_word(param_2,0);
  }
  else {
    iVar2 = BN_is_bit_set(param_3,iVar1 + -2);
    if ((iVar2 == 0) && (iVar2 = BN_is_bit_set(param_3,iVar1 + -3), iVar2 == 0)) {
      do {
        iVar2 = bnrand(param_1,param_2,iVar1 + 1,0xffffffff,0);
        if (iVar2 == 0) {
          return 0;
        }
        iVar2 = BN_cmp(param_2,param_3);
        if (-1 < iVar2) {
          iVar2 = BN_sub(param_2,param_2,param_3);
          if (iVar2 == 0) {
            return 0;
          }
          iVar2 = BN_cmp(param_2,param_3);
          if ((-1 < iVar2) && (iVar2 = BN_sub(param_2,param_2,param_3), iVar2 == 0)) {
            return 0;
          }
        }
        iVar3 = iVar3 + -1;
        if (iVar3 == 0) {
          uVar4 = 0x99;
LAB_143d6a016:
          ERR_put_error(3,0x8a,0x71,"crypto\\bn\\bn_rand.c",uVar4);
          return 0;
        }
        iVar2 = BN_cmp(param_2,param_3);
      } while (-1 < iVar2);
    }
    else {
      do {
        iVar2 = bnrand(param_1,param_2,iVar1,0xffffffff,0);
        if (iVar2 == 0) {
          return 0;
        }
        iVar3 = iVar3 + -1;
        if (iVar3 == 0) {
          uVar4 = 0xa6;
          goto LAB_143d6a016;
        }
        iVar2 = BN_cmp(param_2,param_3);
      } while (-1 < iVar2);
    }
  }
  return 1;
}



// FUNCTION 143d6a070 EC_POINT_oct2point body=188 status=ok
// SIG undefined EC_POINT_oct2point(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
EC_POINT_oct2point(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  pbVar1 = (byte *)*param_1;
  if ((*(code **)(pbVar1 + 0xa8) == (code *)0x0) && ((*pbVar1 & 1) == 0)) {
    uVar2 = 0x6a;
    uVar3 = 0x42;
  }
  else {
    if ((pbVar1 == (byte *)*param_2) &&
       (((*(int *)(param_1 + 4) == 0 || (*(int *)(param_2 + 1) == 0)) ||
        (*(int *)(param_1 + 4) == *(int *)(param_2 + 1))))) {
      if ((*pbVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143d6a0ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(pbVar1 + 0xa8))(param_1,param_2,param_3,param_4);
        return uVar2;
      }
      if (*(int *)(pbVar1 + 4) == 0x196) {
        uVar2 = ec_GFp_simple_oct2point();
        return uVar2;
      }
      uVar2 = ec_GF2m_simple_oct2point();
      return uVar2;
    }
    uVar2 = 0x6e;
    uVar3 = 0x65;
  }
  ERR_put_error(0x10,0x7a,uVar3,"crypto\\ec\\ec_oct.c",uVar2,0x143d6a07c);
  return 0;
}



// FUNCTION 143d6a130 EC_POINT_point2buf body=232 status=ok
// SIG undefined EC_POINT_point2buf(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong EC_POINT_point2buf(undefined8 param_1,undefined8 param_2,undefined4 param_3,
                           longlong *param_4,undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0;
  uVar4 = 0;
  lVar1 = EC_POINT_point2oct();
  lVar3 = 0;
  if (lVar1 != 0) {
    lVar2 = CRYPTO_malloc(lVar1,"crypto\\ec\\ec_oct.c",0x8b);
    if (lVar2 == 0) {
      ERR_put_error(0x10,0x119,0x41,"crypto\\ec\\ec_oct.c",CONCAT44(uVar4,0x8c),uVar5);
      lVar3 = 0;
    }
    else {
      lVar3 = EC_POINT_point2oct(param_1,param_2,param_3,lVar2,lVar1,param_5);
      if (lVar3 == 0) {
        CRYPTO_free(lVar2,"crypto\\ec\\ec_oct.c",0x91);
        lVar3 = 0;
      }
      else {
        *param_4 = lVar2;
      }
    }
  }
  return lVar3;
}



// FUNCTION 143d6a220 EC_POINT_point2oct body=198 status=ok
// SIG undefined EC_POINT_point2oct(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
EC_POINT_point2oct(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  pbVar1 = (byte *)*param_1;
  if ((*(code **)(pbVar1 + 0xa0) == (code *)0x0) && ((*pbVar1 & 1) == 0)) {
    uVar2 = 0x4c;
    uVar3 = 0x42;
  }
  else {
    if ((pbVar1 == (byte *)*param_2) &&
       (((*(int *)(param_1 + 4) == 0 || (*(int *)(param_2 + 1) == 0)) ||
        (*(int *)(param_1 + 4) == *(int *)(param_2 + 1))))) {
      if ((*pbVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143d6a2b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(pbVar1 + 0xa0))(param_1,param_2,param_3,param_4);
        return uVar2;
      }
      if (*(int *)(pbVar1 + 4) == 0x196) {
        uVar2 = ec_GFp_simple_point2oct();
        return uVar2;
      }
      uVar2 = ec_GF2m_simple_point2oct();
      return uVar2;
    }
    uVar2 = 0x50;
    uVar3 = 0x65;
  }
  ERR_put_error(0x10,0x7b,uVar3,"crypto\\ec\\ec_oct.c",uVar2,0x143d6a22c);
  return 0;
}



// FUNCTION 143d6a2f0 EC_POINT_set_compressed_coordinates body=190 status=ok
// SIG undefined EC_POINT_set_compressed_coordinates(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
EC_POINT_set_compressed_coordinates
          (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  pbVar1 = (byte *)*param_1;
  if ((*(code **)(pbVar1 + 0x98) == (code *)0x0) && ((*pbVar1 & 1) == 0)) {
    uVar2 = 0x18;
    uVar3 = 0x42;
  }
  else {
    if ((pbVar1 == (byte *)*param_2) &&
       (((*(int *)(param_1 + 4) == 0 || (*(int *)(param_2 + 1) == 0)) ||
        (*(int *)(param_1 + 4) == *(int *)(param_2 + 1))))) {
      if ((*pbVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143d6a37f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(pbVar1 + 0x98))(param_1,param_2,param_3,param_4);
        return uVar2;
      }
      if (*(int *)(pbVar1 + 4) == 0x196) {
        uVar2 = ec_GFp_simple_set_compressed_coordinates();
        return uVar2;
      }
      uVar2 = ec_GF2m_simple_set_compressed_coordinates();
      return uVar2;
    }
    uVar2 = 0x1d;
    uVar3 = 0x65;
  }
  ERR_put_error(0x10,0x127,uVar3,"crypto\\ec\\ec_oct.c",uVar2,0x143d6a2fc);
  return 0;
}



// FUNCTION 143d6a3b0 ECDH_compute_key body=286 status=ok
// SIG undefined ECDH_compute_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ECDH_compute_key(void *param_1,ulonglong param_2,undefined8 param_3,longlong *param_4,
                          code *param_5)

{
  int iVar1;
  void *pvVar2;
  ulonglong local_res10;
  void *local_res20;
  ulonglong local_18 [2];
  
  local_18[1] = 0x143d6a3c0;
  local_res20 = (void *)0x0;
  local_res10 = param_2;
  if (*(code **)(*param_4 + 0x48) == (code *)0x0) {
    ERR_put_error(0x10,0xf6,0x98,"crypto\\ec\\ec_kmeth.c",0x87);
  }
  else {
    if (0x7fffffff < param_2) {
      ERR_put_error(0x10,0xf6,0xa1,"crypto\\ec\\ec_kmeth.c",0x8b);
      return 0;
    }
    iVar1 = (**(code **)(*param_4 + 0x48))(&local_res20,local_18);
    pvVar2 = local_res20;
    if (iVar1 != 0) {
      if (param_5 == (code *)0x0) {
        if (local_18[0] < local_res10) {
          local_res10 = local_18[0];
        }
        _guard_xfg_dispatch_icall_nop(param_1,local_res20,local_res10);
      }
      else {
        (*param_5)(local_res20,local_18[0],param_1,&local_res10);
        pvVar2 = local_res20;
      }
      CRYPTO_clear_free(pvVar2,local_18[0],"crypto\\ec\\ec_kmeth.c",0x97);
      return local_res10 & 0xffffffff;
    }
  }
  return 0;
}



// FUNCTION 143d6a4d0 FUN_143d6a4d0 body=8 status=ok
// SIG undefined FUN_143d6a4d0(void)

undefined ** FUN_143d6a4d0(void)

{
  return &PTR_s_OpenSSL_EC_KEY_method_145d8b1e0;
}



// FUNCTION 143d6a4e0 EC_KEY_new_method body=395 status=ok
// SIG undefined EC_KEY_new_method(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * EC_KEY_new_method(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143d6a4f0;
  plVar2 = (longlong *)CRYPTO_zalloc(0x50,"crypto\\ec\\ec_kmeth.c",0x4b);
  if (plVar2 == (longlong *)0x0) {
    ERR_put_error(0x10,0xf5,0x41,"crypto\\ec\\ec_kmeth.c",0x4e,uVar6);
    return (longlong *)0x0;
  }
  *(undefined4 *)(plVar2 + 7) = 1;
  lVar3 = CRYPTO_THREAD_lock_new();
  plVar2[9] = lVar3;
  if (lVar3 == 0) {
    ERR_put_error(0x10,0xf5,0x41,"crypto\\ec\\ec_kmeth.c",0x55,uVar6);
    CRYPTO_free(plVar2,"crypto\\ec\\ec_kmeth.c",0x56);
    return (longlong *)0x0;
  }
  *plVar2 = (longlong)PTR_PTR_146837aa0;
  if (param_1 == 0) {
    param_1 = FUN_143d732a0();
LAB_143d6a5f1:
    plVar2[1] = param_1;
    if (param_1 != 0) {
      lVar3 = FNiagaraEmitterHandle::GetInstance(param_1);
      *plVar2 = lVar3;
      if (lVar3 == 0) {
        uVar5 = 0x67;
        goto LAB_143d6a5b8;
      }
    }
    *(undefined4 *)(plVar2 + 2) = 1;
    *(undefined4 *)((longlong)plVar2 + 0x34) = 4;
    iVar1 = CRYPTO_new_ex_data(8,plVar2,plVar2 + 8);
    if (iVar1 == 0) goto LAB_143d6a5d4;
    if (*(code **)(*plVar2 + 0x10) == (code *)0x0) {
      return plVar2;
    }
    iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if (iVar1 != 0) {
      return plVar2;
    }
    uVar5 = 0x75;
    uVar4 = 0x46;
  }
  else {
    iVar1 = ENGINE_init(param_1);
    if (iVar1 != 0) goto LAB_143d6a5f1;
    uVar5 = 0x5e;
LAB_143d6a5b8:
    uVar4 = 0x26;
  }
  ERR_put_error(0x10,0xf5,uVar4,"crypto\\ec\\ec_kmeth.c",uVar5);
LAB_143d6a5d4:
  EC_KEY_free(plVar2);
  return (longlong *)0x0;
}



// FUNCTION 143d6a670 BN_gcd body=429 status=ok
// SIG undefined BN_gcd(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 BN_gcd(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar8 = 0;
  BN_CTX_start(param_4);
  lVar3 = BN_CTX_get(param_4);
  lVar4 = BN_CTX_get(param_4);
  uVar9 = 0;
  if (((lVar4 != 0) && (lVar5 = BN_copy(lVar3,param_2), uVar9 = uVar8, lVar5 != 0)) &&
     (lVar5 = BN_copy(lVar4,param_3), lVar5 != 0)) {
    *(undefined4 *)(lVar3 + 0x10) = 0;
    *(undefined4 *)(lVar4 + 0x10) = 0;
    iVar1 = BN_cmp(lVar3,lVar4);
    lVar5 = lVar3;
    if (iVar1 < 0) {
      lVar5 = lVar4;
      lVar4 = lVar3;
    }
    iVar7 = 0;
    iVar1 = BN_is_zero(lVar4);
    lVar3 = lVar5;
    if (iVar1 == 0) {
      do {
        iVar1 = BN_is_odd(lVar3);
        iVar2 = BN_is_odd(lVar4);
        lVar5 = lVar3;
        if (iVar1 == 0) {
          iVar1 = BN_rshift1(lVar3,lVar3);
          uVar9 = uVar8;
          if (iVar1 == 0) goto LAB_143d6a7fb;
          if (iVar2 != 0) goto LAB_143d6a78d;
          iVar1 = BN_rshift1(lVar4,lVar4);
          if (iVar1 == 0) goto LAB_143d6a7fb;
          iVar7 = iVar7 + 1;
        }
        else {
          lVar6 = lVar4;
          if (((iVar2 != 0) &&
              (iVar1 = BN_sub(lVar3,lVar3,lVar4), lVar6 = lVar3, uVar9 = 0, iVar1 == 0)) ||
             (iVar1 = BN_rshift1(lVar6,lVar6), uVar9 = uVar8, iVar1 == 0)) goto LAB_143d6a7fb;
LAB_143d6a78d:
          iVar1 = BN_cmp(lVar3,lVar4);
          if (iVar1 < 0) {
            lVar5 = lVar4;
            lVar4 = lVar3;
          }
        }
        iVar1 = BN_is_zero(lVar4);
        lVar3 = lVar5;
      } while (iVar1 == 0);
      if ((iVar7 != 0) && (iVar1 = BN_lshift(lVar5,lVar5,iVar7), uVar9 = uVar8, iVar1 == 0))
      goto LAB_143d6a7fb;
    }
    uVar9 = uVar8;
    if (lVar5 != 0) {
      lVar4 = BN_copy(param_1,lVar5);
      uVar9 = 0;
      if (lVar4 != 0) {
        uVar9 = 1;
      }
    }
  }
LAB_143d6a7fb:
  BN_CTX_end(param_4);
  return uVar9;
}



// FUNCTION 143d6a820 BN_mod_inverse body=81 status=ok
// SIG undefined BN_mod_inverse(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_mod_inverse(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int local_18 [2];
  undefined8 uStack_10;
  
  uStack_10 = 0x143d6a82c;
  uVar2 = (undefined4)((ulonglong)local_18 >> 0x20);
  uVar1 = int_bn_mod_inverse();
  if (local_18[0] != 0) {
    ERR_put_error(3,0x6e,0x6c,"crypto\\bn\\bn_gcd.c",CONCAT44(uVar2,0x83));
  }
  return uVar1;
}



// FUNCTION 143d6a880 BN_mod_inverse_no_branch body=729 status=ok
// SIG undefined BN_mod_inverse_no_branch(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong BN_mod_inverse_no_branch
                   (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined8 in_stack_ffffffffffffff88;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined1 local_58 [24];
  undefined8 uStack_40;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  uStack_40 = 0x143d6a8a9;
  lVar9 = 0;
  BN_CTX_start(param_4);
  lVar2 = BN_CTX_get(param_4);
  lVar3 = BN_CTX_get(param_4);
  lVar4 = BN_CTX_get(param_4);
  uVar5 = BN_CTX_get(param_4);
  lVar6 = BN_CTX_get(param_4);
  lVar7 = BN_CTX_get(param_4);
  lVar8 = BN_CTX_get(param_4);
  if (lVar8 != 0) {
    lVar9 = param_1;
    if (param_1 == 0) {
      lVar9 = BN_new();
    }
    if (lVar9 != 0) {
      BN_set_word(lVar4,1);
      BN_set_word(lVar7,0);
      lVar8 = BN_copy(lVar3,param_2);
      if ((lVar8 != 0) && (lVar8 = BN_copy(lVar2,param_3), lVar8 != 0)) {
        *(undefined4 *)(lVar2 + 0x10) = 0;
        if ((*(int *)(lVar3 + 0x10) != 0) || (iVar1 = BN_ucmp(lVar3,lVar2), -1 < iVar1)) {
          bn_init(local_58);
          BN_with_flags(local_58,lVar3,4);
          iVar1 = BN_nnmod(lVar3,local_58,lVar2,param_4);
          if (iVar1 == 0) goto LAB_143d6ab23;
        }
        iVar10 = -1;
        iVar1 = BN_is_zero(lVar3);
        lVar8 = lVar7;
        lVar11 = lVar2;
        if (iVar1 == 0) {
          do {
            lVar7 = lVar4;
            lVar4 = lVar8;
            lVar2 = lVar3;
            bn_init(local_58);
            BN_with_flags(local_58,lVar11,4);
            uVar13 = param_4;
            iVar1 = BN_div(uVar5,lVar6,local_58,lVar2,param_4);
            uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
            if (((iVar1 == 0) || (iVar1 = BN_mul(lVar11,uVar5,lVar7,param_4), iVar1 == 0)) ||
               (iVar1 = BN_add(lVar11,lVar11,lVar4), iVar1 == 0)) goto LAB_143d6ab23;
            iVar10 = -iVar10;
            iVar1 = BN_is_zero(lVar6);
            lVar3 = lVar6;
            lVar8 = lVar7;
            lVar6 = lVar4;
            lVar4 = lVar11;
            lVar11 = lVar2;
          } while (iVar1 == 0);
          if (iVar10 < 0) goto LAB_143d6aa7d;
        }
        else {
LAB_143d6aa7d:
          iVar1 = BN_sub(lVar7,param_3,lVar7);
          if (iVar1 == 0) goto LAB_143d6ab23;
        }
        iVar1 = BN_is_one(lVar2);
        if (iVar1 == 0) {
          ERR_put_error(3,0x8b,0x6c,"crypto\\bn\\bn_gcd.c",CONCAT44(uVar14,0x265));
        }
        else {
          if ((*(int *)(lVar7 + 0x10) == 0) && (iVar1 = BN_ucmp(lVar7,param_3), iVar1 < 0)) {
            lVar3 = BN_copy(lVar9,lVar7);
            bVar12 = lVar3 == 0;
          }
          else {
            iVar1 = BN_nnmod(lVar9,lVar7,param_3,param_4);
            bVar12 = iVar1 == 0;
          }
          lVar3 = lVar9;
          if (!bVar12) goto LAB_143d6ab36;
        }
      }
    }
  }
LAB_143d6ab23:
  lVar3 = 0;
  if (param_1 == 0) {
    BN_free(lVar9);
  }
LAB_143d6ab36:
  BN_CTX_end(param_4);
  return lVar3;
}


