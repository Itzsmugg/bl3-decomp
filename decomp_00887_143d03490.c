// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143d03490 aesni_ccm_init_key body=260 status=ok
// SIG undefined aesni_ccm_init_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 aesni_ccm_init_key(undefined8 param_1,longlong param_2,void *param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  void *_Dst;
  undefined8 uVar4;
  
  uVar4 = 0x143d034b0;
  lVar2 = FTcpDeserializedMessage::GetMessage();
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) goto LAB_143d03541;
  iVar1 = UVariantSet::GetNumVariants(param_1);
  FUN_1400620a0(param_2,iVar1 << 3,lVar2);
  CRYPTO_ccm128_init(lVar2 + 0x118,*(undefined4 *)(lVar2 + 0x10c),*(undefined4 *)(lVar2 + 0x108),
                     lVar2,&LAB_14005dd40,uVar4);
  *(undefined4 *)(lVar2 + 0xf8) = 1;
  pcVar3 = FUN_14005eba0;
  if (param_4 != 0) {
    pcVar3 = FUN_14005ea50;
  }
  *(code **)(lVar2 + 0x150) = pcVar3;
LAB_143d03541:
  if (param_3 != (void *)0x0) {
    iVar1 = *(int *)(lVar2 + 0x108);
    _Dst = (void *)IMessageToken::ToText(param_1);
    _guard_xfg_dispatch_icall_nop(_Dst,param_3,(longlong)(0xf - iVar1));
    *(undefined4 *)(lVar2 + 0xfc) = 1;
  }
  return 1;
}



// FUNCTION 143d035a0 aes_ccm_cipher body=609 status=ok
// SIG undefined aes_ccm_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong aes_ccm_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined1 local_68 [16];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x143d035b7;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  lVar3 = FTcpDeserializedMessage::GetMessage();
  lVar6 = lVar3 + 0x118;
  if (*(int *)(lVar3 + 0xf8) == 0) {
    return 0xffffffff;
  }
  if (-1 < *(int *)(lVar3 + 0x110)) {
    uVar4 = aes_ccm_tls_cipher(param_1,param_2,param_3,param_4);
    return uVar4;
  }
  if ((param_3 == 0) && (param_2 != 0)) {
    return 0;
  }
  if (*(int *)(lVar3 + 0xfc) == 0) {
    return 0xffffffff;
  }
  iVar2 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
  if ((iVar2 == 0) && (*(int *)(lVar3 + 0x100) == 0)) {
    return 0xffffffff;
  }
  if (param_2 == 0) {
    if (param_3 == 0) {
      iVar2 = *(int *)(lVar3 + 0x108);
      uVar5 = IMessageToken::ToText(param_1);
      iVar2 = CRYPTO_ccm128_setiv(lVar6,uVar5,(longlong)(0xf - iVar2),param_4);
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      *(undefined4 *)(lVar3 + 0x104) = 1;
      return param_4 & 0xffffffff;
    }
    if ((*(int *)(lVar3 + 0x104) == 0) && (param_4 != 0)) {
      return 0xffffffff;
    }
    CRYPTO_ccm128_aad(lVar6,param_3,param_4);
    return param_4 & 0xffffffff;
  }
  if (*(int *)(lVar3 + 0x104) == 0) {
    iVar2 = *(int *)(lVar3 + 0x108);
    uVar5 = IMessageToken::ToText(param_1);
    iVar2 = CRYPTO_ccm128_setiv(lVar6,uVar5,(longlong)(0xf - iVar2),param_4);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    *(undefined4 *)(lVar3 + 0x104) = 1;
  }
  iVar2 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
  lVar1 = *(longlong *)(lVar3 + 0x150);
  if (iVar2 != 0) {
    if (lVar1 == 0) {
      iVar2 = CRYPTO_ccm128_encrypt(lVar6);
    }
    else {
      local_78 = lVar1;
      iVar2 = CRYPTO_ccm128_encrypt_ccm64(lVar6);
    }
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    *(undefined4 *)(lVar3 + 0x100) = 1;
    return param_4 & 0xffffffff;
  }
  uVar4 = 0xffffffff;
  if (lVar1 == 0) {
    iVar2 = CRYPTO_ccm128_decrypt(lVar6,param_3,param_2,param_4);
  }
  else {
    local_78 = lVar1;
    iVar2 = CRYPTO_ccm128_decrypt_ccm64(lVar6);
  }
  if ((iVar2 == 0) &&
     (lVar6 = CRYPTO_ccm128_tag(lVar6,local_68,(longlong)*(int *)(lVar3 + 0x10c)), lVar6 != 0)) {
    iVar2 = *(int *)(lVar3 + 0x10c);
    uVar5 = UListView::OnItemSelectionChanged(param_1);
    iVar2 = FUN_14004ffa0(local_68,uVar5,(longlong)iVar2);
    if ((iVar2 == 0) && (uVar4 = param_4 & 0xffffffff, (int)param_4 != -1)) goto LAB_143d037c8;
  }
  FUN_14004ff40(param_2,param_4);
LAB_143d037c8:
  *(undefined8 *)(lVar3 + 0xfc) = 0;
  *(undefined4 *)(lVar3 + 0x104) = 0;
  return uVar4;
}



// FUNCTION 143d03810 aesni_ocb_init_key body=373 status=ok
// SIG undefined aesni_ocb_init_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 aesni_ocb_init_key(undefined8 param_1,longlong param_2,void *param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  
  lVar2 = FTcpDeserializedMessage::GetMessage();
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) {
    if (*(int *)(lVar2 + 0x1f0) == 0) {
      _guard_xfg_dispatch_icall_nop
                (*(void **)(lVar2 + 0x2a8),param_3,(longlong)*(int *)(lVar2 + 0x2e8));
    }
    else {
      CRYPTO_ocb128_setiv(lVar2 + 0x1f8,param_3,(longlong)*(int *)(lVar2 + 0x2e8),
                          (longlong)*(int *)(lVar2 + 0x2ec));
    }
    *(undefined4 *)(lVar2 + 500) = 1;
    return 1;
  }
  iVar1 = UVariantSet::GetNumVariants(param_1);
  FUN_1400620a0(param_2,iVar1 << 3,lVar2);
  iVar1 = UVariantSet::GetNumVariants(param_1);
  FUN_140062030(param_2,iVar1 << 3,lVar2 + 0xf8);
  pcVar3 = FUN_140060f00;
  if (param_4 != 0) {
    pcVar3 = FUN_140060860;
  }
  iVar1 = CRYPTO_ocb128_init(lVar2 + 0x1f8,lVar2,lVar2 + 0xf8,&LAB_14005dd40,&LAB_14005dd90,pcVar3);
  if (iVar1 == 0) {
    return 0;
  }
  if ((param_3 != (void *)0x0) ||
     ((*(int *)(lVar2 + 500) != 0 && (param_3 = *(void **)(lVar2 + 0x2a8), param_3 != (void *)0x0)))
     ) {
    iVar1 = CRYPTO_ocb128_setiv(lVar2 + 0x1f8,param_3,(longlong)*(int *)(lVar2 + 0x2e8),
                                (longlong)*(int *)(lVar2 + 0x2ec));
    if (iVar1 != 1) {
      return 0;
    }
    *(undefined4 *)(lVar2 + 500) = 1;
  }
  *(undefined4 *)(lVar2 + 0x1f0) = 1;
  return 1;
}



// FUNCTION 143d03990 aes_ocb_cipher body=779 status=ok
// SIG undefined aes_ocb_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

int aes_ocb_cipher(undefined8 param_1,longlong param_2,void *param_3,ulonglong param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint *puVar6;
  void *_Dst;
  undefined8 uVar7;
  ulonglong uVar5;
  
  uVar7 = 0x143d039b7;
  iVar1 = 0;
  lVar3 = FTcpDeserializedMessage::GetMessage();
  if ((*(int *)(lVar3 + 500) != 0) && (*(int *)(lVar3 + 0x1f0) != 0)) {
    if (param_3 != (void *)0x0) {
      if (param_2 == 0) {
        _Dst = (void *)(lVar3 + 0x2d0);
        puVar6 = (uint *)(lVar3 + 0x2e4);
      }
      else {
        puVar6 = (uint *)(lVar3 + 0x2e0);
        _Dst = (void *)(lVar3 + 0x2c0);
        iVar2 = is_partially_overlapping((int)*puVar6 + param_2,param_3,param_4 & 0xffffffff);
        if (iVar2 != 0) {
          ERR_put_error(6,0xa9,0xa2,"crypto\\evp\\e_aes.c",0xff1,uVar7);
          return 0;
        }
      }
      uVar4 = *puVar6;
      if (0 < (int)uVar4) {
        uVar5 = (ulonglong)(0x10 - uVar4);
        if (param_4 < uVar5) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)(int)uVar4 + (longlong)_Dst),param_3,param_4);
          *puVar6 = *puVar6 + (int)param_4;
          return 0;
        }
        _guard_xfg_dispatch_icall_nop((void *)((longlong)(int)uVar4 + (longlong)_Dst),param_3,uVar5)
        ;
        param_4 = param_4 - uVar5;
        param_3 = (void *)((longlong)param_3 + uVar5);
        if (param_2 == 0) {
          iVar1 = CRYPTO_ocb128_aad(lVar3 + 0x1f8,_Dst,0x10);
        }
        else {
          iVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
          if (iVar1 == 0) {
            iVar1 = CRYPTO_ocb128_decrypt(lVar3 + 0x1f8,_Dst,param_2,0x10);
          }
          else {
            iVar1 = CRYPTO_ocb128_encrypt();
          }
        }
        if (iVar1 == 0) {
          return -1;
        }
        *puVar6 = 0;
        iVar1 = 0x10;
        if (param_2 != 0) {
          param_2 = param_2 + 0x10;
        }
      }
      uVar4 = (uint)param_4 & 0xf;
      uVar5 = (ulonglong)uVar4;
      if (param_4 != uVar5) {
        if (param_2 == 0) {
          iVar2 = CRYPTO_ocb128_aad(lVar3 + 0x1f8,param_3,param_4 - uVar5);
        }
        else {
          iVar2 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
          if (iVar2 == 0) {
            iVar2 = CRYPTO_ocb128_decrypt(lVar3 + 0x1f8,param_3,param_2,param_4 - uVar5);
          }
          else {
            iVar2 = CRYPTO_ocb128_encrypt();
          }
        }
        if (iVar2 == 0) {
          return -1;
        }
        iVar1 = iVar1 + ((uint)param_4 - uVar4);
        param_3 = (void *)((longlong)param_3 + (param_4 - uVar5));
      }
      if (uVar5 != 0) {
        _guard_xfg_dispatch_icall_nop(_Dst,param_3,uVar5);
        *puVar6 = uVar4;
        return iVar1;
      }
      return iVar1;
    }
    if (0 < *(int *)(lVar3 + 0x2e0)) {
      iVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
      if (iVar1 == 0) {
        iVar1 = CRYPTO_ocb128_decrypt
                          (lVar3 + 0x1f8,lVar3 + 0x2c0,param_2,(longlong)*(int *)(lVar3 + 0x2e0));
      }
      else {
        iVar1 = CRYPTO_ocb128_encrypt();
      }
      if (iVar1 == 0) {
        return -1;
      }
      iVar1 = *(int *)(lVar3 + 0x2e0);
      *(undefined4 *)(lVar3 + 0x2e0) = 0;
    }
    if (0 < *(int *)(lVar3 + 0x2e4)) {
      iVar2 = CRYPTO_ocb128_aad(lVar3 + 0x1f8,lVar3 + 0x2d0,(longlong)*(int *)(lVar3 + 0x2e4));
      if (iVar2 == 0) {
        return -1;
      }
      *(undefined4 *)(lVar3 + 0x2e4) = 0;
    }
    iVar2 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
    if (iVar2 == 0) {
      if ((-1 < *(int *)(lVar3 + 0x2ec)) &&
         (iVar2 = CRYPTO_ocb128_finish
                            (lVar3 + 0x1f8,lVar3 + 0x2b0,(longlong)*(int *)(lVar3 + 0x2ec)),
         iVar2 == 0)) {
LAB_143d03c8c:
        *(undefined4 *)(lVar3 + 500) = 0;
        return iVar1;
      }
    }
    else {
      iVar2 = CRYPTO_ocb128_tag(lVar3 + 0x1f8,lVar3 + 0x2b0,0x10);
      if (iVar2 == 1) goto LAB_143d03c8c;
    }
  }
  return -1;
}



// FUNCTION 143d03ca0 aes_init_key body=492 status=ok
// SIG undefined aes_init_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool aes_init_key(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  code *pcVar6;
  uint uVar7;
  
  lVar3 = FTcpDeserializedMessage::GetMessage();
  uVar4 = FHardwareCursor::GetHandle(param_1);
  uVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(uVar4);
  uVar1 = uVar1 & 0xf0007;
  if ((uVar1 - 1 < 2) && (param_4 == 0)) {
    uVar7 = DAT_146bcd584 & 0x200;
    if ((uVar7 == 0) || (uVar1 != 2)) {
      iVar2 = UVariantSet::GetNumVariants(param_1);
      if (uVar7 == 0) {
        iVar2 = FUN_140057850(param_2,iVar2 << 3,lVar3);
        pcVar5 = (code *)0x0;
        if (uVar1 == 2) {
          pcVar5 = FUN_140057a90;
        }
        *(code **)(lVar3 + 0xf8) = FUN_140057490;
      }
      else {
        iVar2 = FUN_14005a390();
        pcVar5 = (code *)0x0;
        if (uVar1 == 2) {
          pcVar5 = FUN_14005a620;
        }
        *(code **)(lVar3 + 0xf8) = FUN_14005a550;
      }
    }
    else {
      iVar2 = UVariantSet::GetNumVariants(param_1);
      iVar2 = FUN_140057850(param_2,iVar2 << 3,lVar3);
      *(code **)(lVar3 + 0xf8) = FUN_140057490;
      pcVar5 = (code *)&LAB_14005bf20;
    }
  }
  else {
    uVar7 = DAT_146bcd584 & 0x200;
    if ((uVar7 == 0) || (uVar1 != 5)) {
      iVar2 = UVariantSet::GetNumVariants(param_1);
      if (uVar7 == 0) {
        iVar2 = FUN_140057570(param_2,iVar2 << 3,lVar3);
        pcVar5 = FUN_140056ee0;
        pcVar6 = FUN_140057a90;
      }
      else {
        iVar2 = FUN_14005a2b0();
        pcVar5 = FUN_14005a480;
        pcVar6 = FUN_14005a620;
      }
      *(code **)(lVar3 + 0xf8) = pcVar5;
      pcVar5 = (code *)0x0;
      if (uVar1 == 2) {
        pcVar5 = pcVar6;
      }
    }
    else {
      iVar2 = UVariantSet::GetNumVariants(param_1);
      iVar2 = FUN_140057570(param_2,iVar2 << 3,lVar3);
      *(code **)(lVar3 + 0xf8) = FUN_140056ee0;
      pcVar5 = (code *)&DAT_14005c470;
    }
  }
  *(code **)(lVar3 + 0x100) = pcVar5;
  if (-1 >= iVar2) {
    ERR_put_error(6,0x85,0x8f,"crypto\\evp\\e_aes.c",0xa66);
  }
  return -1 < iVar2;
}



// FUNCTION 143d03e90 aes_cbc_cipher body=207 status=ok
// SIG undefined aes_cbc_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
aes_cbc_cipher(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  uVar6 = 1;
  lVar3 = FTcpDeserializedMessage::GetMessage();
  lVar1 = *(longlong *)(lVar3 + 0x100);
  iVar2 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
  if (lVar1 == 0) {
    uVar4 = *(undefined8 *)(lVar3 + 0xf8);
    uVar5 = IMessageToken::ToText(param_1);
    if (iVar2 == 0) {
      CRYPTO_cbc128_decrypt(param_3,param_2,param_4,lVar3,uVar5,uVar4);
    }
    else {
      CRYPTO_cbc128_encrypt();
    }
  }
  else {
    uVar4 = IMessageToken::ToText(param_1);
    (**(code **)(lVar3 + 0x100))(param_3,param_2,param_4,lVar3,uVar4,CONCAT44(uVar6,iVar2));
  }
  return 1;
}



// FUNCTION 143d03f60 aes_ecb_cipher body=140 status=ok
// SIG undefined aes_ecb_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 aes_ecb_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  iVar1 = EVP_CIPHER_CTX_block_size();
  uVar4 = (ulonglong)iVar1;
  lVar2 = FTcpDeserializedMessage::GetMessage(param_1);
  if (uVar4 <= param_4) {
    lVar3 = param_3;
    do {
      (**(code **)(lVar2 + 0xf8))(lVar3,(param_2 - param_3) + lVar3,lVar2);
      lVar3 = lVar3 + uVar4;
    } while ((ulonglong)(lVar3 - param_3) <= param_4 - uVar4);
  }
  return 1;
}



// FUNCTION 143d03ff0 aes_gcm_cleanup body=120 status=ok
// SIG undefined aes_gcm_cleanup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 aes_gcm_cleanup(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FTcpDeserializedMessage::GetMessage();
  if (lVar1 == 0) {
    return 0;
  }
  FUN_14004ff40(lVar1 + 0x100,0x1b8);
  lVar1 = *(longlong *)(lVar1 + 0x2b8);
  lVar2 = IMessageToken::ToText(param_1);
  if (lVar1 != lVar2) {
    CRYPTO_free(lVar1,"crypto\\evp\\e_aes.c",0xaf8);
  }
  return 1;
}



// FUNCTION 143d04070 FUN_143d04070 body=1072 status=ok
// SIG undefined FUN_143d04070(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_143d04070(longlong *param_1,undefined4 param_2,int param_3,longlong *param_4)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Dst;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  size_t _Size;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x143d04090;
  _Size = (size_t)param_3;
  lVar3 = FTcpDeserializedMessage::GetMessage();
  switch(param_2) {
  case 0:
    *(undefined8 *)(lVar3 + 0xf8) = 0;
    uVar8 = *(undefined4 *)(*param_1 + 0xc);
    *(longlong **)(lVar3 + 0x2b8) = param_1 + 5;
    *(undefined4 *)(lVar3 + 0x2c0) = uVar8;
    *(undefined4 *)(lVar3 + 0x2c4) = 0xffffffff;
    *(undefined4 *)(lVar3 + 0x2c8) = 0;
    *(undefined4 *)(lVar3 + 0x2cc) = 0xffffffff;
    return 1;
  default:
    return 0xffffffff;
  case 8:
    lVar4 = FTcpDeserializedMessage::GetMessage(param_4);
    if (*(longlong *)(lVar3 + 0x280) != 0) {
      if (*(longlong *)(lVar3 + 0x280) != lVar3) {
        return 0;
      }
      *(longlong *)(lVar4 + 0x280) = lVar4;
    }
    if (*(longlong **)(lVar3 + 0x2b8) == param_1 + 5) {
      *(longlong **)(lVar4 + 0x2b8) = param_4 + 5;
      return 1;
    }
    _Dst = (void *)CRYPTO_malloc((longlong)*(int *)(lVar3 + 0x2c0),"crypto\\evp\\e_aes.c",0xb76);
    *(void **)(lVar4 + 0x2b8) = _Dst;
    if (_Dst != (void *)0x0) {
      _guard_xfg_dispatch_icall_nop
                (_Dst,*(void **)(lVar3 + 0x2b8),(longlong)*(int *)(lVar3 + 0x2c0));
      return 1;
    }
    uVar8 = 0xb77;
    goto LAB_143d04164;
  case 9:
    if (param_3 < 1) {
      return 0;
    }
    if ((param_3 < 0x11) || (param_3 <= *(int *)(lVar3 + 0x2c0))) {
LAB_143d04185:
      *(int *)(lVar3 + 0x2c0) = param_3;
      return 1;
    }
    if (*(longlong **)(lVar3 + 0x2b8) != param_1 + 5) {
      CRYPTO_free(*(longlong **)(lVar3 + 0x2b8),"crypto\\evp\\e_aes.c",0xb10);
    }
    lVar4 = CRYPTO_malloc(_Size,"crypto\\evp\\e_aes.c",0xb11);
    *(longlong *)(lVar3 + 0x2b8) = lVar4;
    if (lVar4 != 0) goto LAB_143d04185;
    uVar8 = 0xb12;
LAB_143d04164:
    ERR_put_error(6,0xc4,0x41,"crypto\\evp\\e_aes.c",uVar8,uVar9);
    break;
  case 0x10:
    if (((param_3 - 1U < 0x10) && ((int)param_1[2] != 0)) && (-1 < *(int *)(lVar3 + 0x2c4))) {
      _guard_xfg_dispatch_icall_nop(param_4,param_1 + 7,_Size);
      return 1;
    }
    break;
  case 0x11:
    if ((param_3 - 1U < 0x10) && ((int)param_1[2] == 0)) {
      _guard_xfg_dispatch_icall_nop(param_1 + 7,param_4,_Size);
      *(int *)(lVar3 + 0x2c4) = param_3;
      return 1;
    }
    break;
  case 0x12:
    if (param_3 == -1) {
      _guard_xfg_dispatch_icall_nop
                (*(void **)(lVar3 + 0x2b8),param_4,(longlong)*(int *)(lVar3 + 0x2c0));
      *(undefined4 *)(lVar3 + 0x2c8) = 1;
      return 1;
    }
    if (((3 < param_3) && (7 < *(int *)(lVar3 + 0x2c0) - param_3)) &&
       ((_guard_xfg_dispatch_icall_nop(*(void **)(lVar3 + 0x2b8),param_4,_Size),
        (int)param_1[2] == 0 ||
        (iVar2 = RAND_bytes(*(longlong *)(lVar3 + 0x2b8) + _Size,*(int *)(lVar3 + 0x2c0) - param_3),
        0 < iVar2)))) {
      *(undefined4 *)(lVar3 + 0x2c8) = 1;
      return 1;
    }
    break;
  case 0x13:
    if ((*(int *)(lVar3 + 0x2c8) != 0) && (*(int *)(lVar3 + 0xf8) != 0)) {
      CRYPTO_gcm128_setiv(lVar3 + 0x100,*(undefined8 *)(lVar3 + 0x2b8),
                          (longlong)*(int *)(lVar3 + 0x2c0));
      iVar2 = *(int *)(lVar3 + 0x2c0);
      if ((param_3 < 1) || (iVar2 < param_3)) {
        param_3 = iVar2;
      }
      _guard_xfg_dispatch_icall_nop
                (param_4,(void *)(((longlong)iVar2 - (longlong)param_3) +
                                 *(longlong *)(lVar3 + 0x2b8)),(longlong)param_3);
      iVar2 = *(int *)(lVar3 + 0x2c0);
      lVar7 = 8;
      lVar4 = *(longlong *)(lVar3 + 0x2b8);
      do {
        lVar7 = lVar7 + -1;
        pcVar1 = (char *)(iVar2 + lVar4 + -8 + lVar7);
        *pcVar1 = *pcVar1 + '\x01';
        if (*pcVar1 != '\0') break;
      } while (lVar7 != 0);
      *(undefined4 *)(lVar3 + 0xfc) = 1;
      return 1;
    }
    break;
  case 0x16:
    if (param_3 == 0xd) {
      param_1[7] = *param_4;
      *(int *)(param_1 + 8) = (int)param_4[1];
      *(undefined1 *)((longlong)param_1 + 0x44) = *(undefined1 *)((longlong)param_4 + 0xc);
      *(undefined4 *)(lVar3 + 0x2cc) = 0xd;
      uVar5 = (uint)CONCAT11(*(undefined1 *)((longlong)param_1 + 0x43),
                             *(undefined1 *)((longlong)param_1 + 0x44));
      if (7 < uVar5) {
        uVar6 = uVar5 - 8;
        if ((int)param_1[2] == 0) {
          if (uVar6 < 0x10) {
            return 0;
          }
          uVar6 = uVar5 - 0x18;
        }
        *(char *)((longlong)param_1 + 0x44) = (char)uVar6;
        *(char *)((longlong)param_1 + 0x43) = (char)(uVar6 >> 8);
        return 0x10;
      }
    }
    break;
  case 0x18:
    if (((*(int *)(lVar3 + 0x2c8) != 0) && (*(int *)(lVar3 + 0xf8) != 0)) && ((int)param_1[2] == 0))
    {
      _guard_xfg_dispatch_icall_nop
                ((void *)(((longlong)*(int *)(lVar3 + 0x2c0) - _Size) + *(longlong *)(lVar3 + 0x2b8)
                         ),param_4,_Size);
      CRYPTO_gcm128_setiv(lVar3 + 0x100,*(undefined8 *)(lVar3 + 0x2b8),
                          (longlong)*(int *)(lVar3 + 0x2c0));
      *(undefined4 *)(lVar3 + 0xfc) = 1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143d04510 aes_gcm_init_key body=310 status=ok
// SIG undefined aes_gcm_init_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 aes_gcm_init_key(longlong param_1,longlong param_2,void *param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined *puVar3;
  
  lVar2 = FTcpDeserializedMessage::GetMessage();
  uVar1 = DAT_146bcd584;
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
      CRYPTO_gcm128_setiv();
    }
    *(undefined4 *)(lVar2 + 0xfc) = 1;
    *(undefined4 *)(lVar2 + 0x2c8) = 0;
    return 1;
  }
  FUN_140057570(param_2,*(int *)(param_1 + 0x68) * 8,lVar2);
  CRYPTO_gcm128_init(lVar2 + 0x100,lVar2,FUN_140056ee0);
  puVar3 = &DAT_14005c470;
  if ((uVar1 & 0x200) == 0) {
    puVar3 = (undefined *)0x0;
  }
  *(undefined **)(lVar2 + 0x2d0) = puVar3;
  if ((param_3 != (void *)0x0) ||
     ((*(int *)(lVar2 + 0xfc) != 0 && (param_3 = *(void **)(lVar2 + 0x2b8), param_3 != (void *)0x0))
     )) {
    CRYPTO_gcm128_setiv(lVar2 + 0x100,param_3,(longlong)*(int *)(lVar2 + 0x2c0));
    *(undefined4 *)(lVar2 + 0xfc) = 1;
  }
  *(undefined4 *)(lVar2 + 0xf8) = 1;
  return 1;
}



// FUNCTION 143d04650 aes_xts_ctrl body=197 status=ok
// SIG undefined aes_xts_ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 aes_xts_ctrl(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FTcpDeserializedMessage::GetMessage();
  if (param_2 == 8) {
    lVar2 = FTcpDeserializedMessage::GetMessage(param_4);
    if (*(longlong *)(lVar1 + 0x1f0) != 0) {
      if (*(longlong *)(lVar1 + 0x1f0) != lVar1) {
        return 0;
      }
      *(longlong *)(lVar2 + 0x1f0) = lVar2;
    }
    if (*(longlong *)(lVar1 + 0x1f8) != 0) {
      if (*(longlong *)(lVar1 + 0x1f8) != lVar1 + 0xf8) {
        return 0;
      }
      *(longlong *)(lVar2 + 0x1f8) = lVar2 + 0xf8;
    }
  }
  else {
    if (param_2 != 0) {
      return 0xffffffff;
    }
    *(undefined8 *)(lVar1 + 0x1f0) = 0;
    *(undefined8 *)(lVar1 + 0x1f8) = 0;
  }
  return 1;
}



// FUNCTION 143d04720 aes_xts_init_key body=325 status=ok
// SIG undefined aes_xts_init_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 aes_xts_init_key(undefined8 param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined8 *puVar7;
  
  lVar4 = FTcpDeserializedMessage::GetMessage();
  if (param_3 == (undefined8 *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) goto LAB_143d0482c;
  *(undefined8 *)(lVar4 + 0x210) = 0;
  if ((DAT_146bcd584 & 0x200) != 0) {
    puVar5 = &DAT_14005d0f0;
    if (param_4 != 0) {
      puVar5 = &DAT_14005c860;
    }
    *(undefined **)(lVar4 + 0x210) = puVar5;
  }
  iVar2 = UVariantSet::GetNumVariants(param_1);
  if (param_4 == 0) {
    FUN_140057850(param_2,iVar2 << 2,lVar4);
    pcVar6 = FUN_140057490;
  }
  else {
    FUN_140057570();
    pcVar6 = FUN_140056ee0;
  }
  *(code **)(lVar4 + 0x200) = pcVar6;
  iVar2 = UVariantSet::GetNumVariants(param_1);
  iVar3 = UVariantSet::GetNumVariants(param_1);
  FUN_140057570(iVar3 / 2 + param_2,iVar2 << 2,lVar4 + 0xf8);
  *(code **)(lVar4 + 0x208) = FUN_140056ee0;
  *(longlong *)(lVar4 + 0x1f0) = lVar4;
LAB_143d0482c:
  if (param_3 != (undefined8 *)0x0) {
    *(longlong *)(lVar4 + 0x1f8) = lVar4 + 0xf8;
    puVar7 = (undefined8 *)IMessageToken::ToText(param_1);
    uVar1 = param_3[1];
    *puVar7 = *param_3;
    puVar7[1] = uVar1;
  }
  return 1;
}



// FUNCTION 143d04870 FUN_143d04870 body=606 status=ok
// SIG undefined FUN_143d04870(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_143d04870(undefined8 param_1,undefined4 param_2,int param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined4 *puVar6;
  void *_Dst;
  ushort uVar7;
  ulonglong _Size;
  
  _Size = (ulonglong)param_3;
  lVar3 = FTcpDeserializedMessage::GetMessage();
  switch(param_2) {
  case 0:
    *(undefined4 *)(lVar3 + 0x108) = 8;
    *(undefined8 *)(lVar3 + 0xf8) = 0;
    *(undefined8 *)(lVar3 + 0x100) = 0;
    *(undefined4 *)(lVar3 + 0x10c) = 0xc;
    *(undefined4 *)(lVar3 + 0x110) = 0xffffffff;
    return 1;
  default:
    return 0xffffffff;
  case 8:
    lVar5 = FTcpDeserializedMessage::GetMessage(param_4);
    if (*(longlong *)(lVar3 + 0x148) != 0) {
      if (*(longlong *)(lVar3 + 0x148) != lVar3) {
        return 0;
      }
      *(longlong *)(lVar5 + 0x148) = lVar5;
    }
    return 1;
  case 9:
    param_3 = 0xf - param_3;
  case 0x14:
    if (param_3 - 2U < 7) {
      *(int *)(lVar3 + 0x108) = param_3;
      return 1;
    }
    break;
  case 0x10:
    iVar2 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
    if (((iVar2 != 0) && (*(int *)(lVar3 + 0x100) != 0)) &&
       (lVar5 = CRYPTO_ccm128_tag(lVar3 + 0x118,param_4,_Size), lVar5 != 0)) {
      *(undefined8 *)(lVar3 + 0xfc) = 0;
      *(undefined4 *)(lVar3 + 0x104) = 0;
      return 1;
    }
    break;
  case 0x11:
    if (((_Size & 1) == 0) && (param_3 - 4U < 0xd)) {
      iVar2 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
      if (param_4 != (undefined8 *)0x0) {
        if (iVar2 != 0) {
          return 0;
        }
        *(undefined4 *)(lVar3 + 0x100) = 1;
        _Dst = (void *)UListView::OnItemSelectionChanged(param_1);
        _guard_xfg_dispatch_icall_nop(_Dst,param_4,_Size);
      }
      *(int *)(lVar3 + 0x10c) = param_3;
      return 1;
    }
    break;
  case 0x12:
    if (param_3 == 4) {
      puVar6 = (undefined4 *)IMessageToken::ToText(param_1);
      *puVar6 = *(undefined4 *)param_4;
      return 1;
    }
    break;
  case 0x16:
    if (param_3 == 0xd) {
      puVar4 = (undefined8 *)UListView::OnItemSelectionChanged(param_1);
      *puVar4 = *param_4;
      *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_4 + 1);
      *(undefined1 *)((longlong)puVar4 + 0xc) = *(undefined1 *)((longlong)param_4 + 0xc);
      *(undefined4 *)(lVar3 + 0x110) = 0xd;
      lVar5 = UListView::OnItemSelectionChanged(param_1);
      uVar1 = *(undefined1 *)(lVar5 + 0xb);
      lVar5 = UListView::OnItemSelectionChanged(param_1);
      uVar7 = CONCAT11(uVar1,*(undefined1 *)(lVar5 + 0xc));
      if (7 < uVar7) {
        uVar7 = uVar7 - 8;
        iVar2 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
        if (iVar2 == 0) {
          if ((int)(uint)uVar7 < *(int *)(lVar3 + 0x10c)) {
            return 0;
          }
          uVar7 = uVar7 - (short)*(int *)(lVar3 + 0x10c);
        }
        lVar5 = UListView::OnItemSelectionChanged(param_1);
        *(char *)(lVar5 + 0xb) = (char)(uVar7 >> 8);
        lVar5 = UListView::OnItemSelectionChanged(param_1);
        *(char *)(lVar5 + 0xc) = (char)uVar7;
        return *(undefined4 *)(lVar3 + 0x10c);
      }
    }
  }
  return 0;
}



// FUNCTION 143d04b30 aes_ccm_init_key body=262 status=ok
// SIG undefined aes_ccm_init_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 aes_ccm_init_key(undefined8 param_1,longlong param_2,void *param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  void *_Dst;
  undefined8 uVar5;
  
  uVar5 = 0x143d04b48;
  lVar3 = FTcpDeserializedMessage::GetMessage();
  uVar1 = DAT_146bcd584;
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) goto LAB_143d04beb;
  iVar2 = UVariantSet::GetNumVariants(param_1);
  if ((uVar1 & 0x200) == 0) {
    FUN_140057570(param_2,iVar2 << 3,lVar3);
    pcVar4 = FUN_140056ee0;
  }
  else {
    FUN_14005a2b0();
    pcVar4 = FUN_14005a480;
  }
  CRYPTO_ccm128_init(lVar3 + 0x118,*(undefined4 *)(lVar3 + 0x10c),*(undefined4 *)(lVar3 + 0x108),
                     lVar3,pcVar4,uVar5);
  *(undefined4 *)(lVar3 + 0xf8) = 1;
  *(undefined8 *)(lVar3 + 0x150) = 0;
LAB_143d04beb:
  if (param_3 != (void *)0x0) {
    iVar2 = *(int *)(lVar3 + 0x108);
    _Dst = (void *)IMessageToken::ToText(param_1);
    _guard_xfg_dispatch_icall_nop(_Dst,param_3,(longlong)(0xf - iVar2));
    *(undefined4 *)(lVar3 + 0xfc) = 1;
  }
  return 1;
}



// FUNCTION 143d04c40 aes_wrap_init_key body=203 status=ok
// SIG undefined aes_wrap_init_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 aes_wrap_init_key(undefined8 param_1,longlong param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  void *_Dst;
  undefined8 uVar4;
  
  lVar3 = FTcpDeserializedMessage::GetMessage();
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
LAB_143d04c85:
    iVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
    iVar2 = UVariantSet::GetNumVariants(param_1);
    if (iVar1 == 0) {
      FUN_140057850(param_2,iVar2 << 3,lVar3);
    }
    else {
      FUN_140057570();
    }
    if (param_3 == (void *)0x0) {
      uVar4 = 0;
      goto LAB_143d04ce4;
    }
  }
  else if (param_2 != 0) goto LAB_143d04c85;
  iVar1 = EVP_CIPHER_CTX_iv_length(param_1);
  _Dst = (void *)IMessageToken::ToText(param_1);
  _guard_xfg_dispatch_icall_nop(_Dst,param_3,(longlong)iVar1);
  uVar4 = IMessageToken::ToText(param_1);
LAB_143d04ce4:
  *(undefined8 *)(lVar3 + 0xf8) = uVar4;
  return 1;
}



// FUNCTION 143d04d10 aes_wrap_cipher body=448 status=ok
// SIG undefined aes_wrap_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong aes_wrap_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar6 = 0x143d04d2e;
  lVar2 = FTcpDeserializedMessage::GetMessage();
  iVar1 = EVP_CIPHER_CTX_iv_length(param_1);
  bVar4 = iVar1 == 4;
  if (param_3 != 0) {
    if (((param_4 == 0) ||
        ((iVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1), iVar1 == 0 &&
         ((param_4 < 0x10 || ((param_4 & 7) != 0)))))) || ((!bVar4 && ((param_4 & 7) != 0)))) {
      return 0xffffffff;
    }
    iVar1 = is_partially_overlapping(param_2,param_3,param_4 & 0xffffffff);
    if (iVar1 == 0) {
      iVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
      if (param_2 == 0) {
        if (iVar1 != 0) {
          if (bVar4) {
            param_4 = param_4 + 7 & 0xfffffffffffffff8;
          }
          return (ulonglong)((int)param_4 + 8);
        }
        return (ulonglong)((int)param_4 - 8);
      }
      if (bVar4) {
        if (iVar1 == 0) {
          uVar3 = CRYPTO_128_unwrap_pad();
          if (uVar3 == 0) {
            return 0xffffffff;
          }
          return uVar3 & 0xffffffff;
        }
        uVar3 = CRYPTO_128_wrap_pad();
        if (uVar3 == 0) {
          return 0xffffffff;
        }
        return uVar3 & 0xffffffff;
      }
      if (iVar1 == 0) {
        uVar3 = CRYPTO_128_unwrap(lVar2,*(undefined8 *)(lVar2 + 0xf8),param_2,param_3,param_4,
                                  FUN_140057490);
        if (uVar3 == 0) {
          return 0xffffffff;
        }
        return uVar3 & 0xffffffff;
      }
      uVar3 = CRYPTO_128_wrap();
      if (uVar3 == 0) {
        return 0xffffffff;
      }
      return uVar3 & 0xffffffff;
    }
    ERR_put_error(6,0xaa,0xa2,"crypto\\evp\\e_aes.c",CONCAT44(uVar5,0xeae),uVar6);
  }
  return 0;
}



// FUNCTION 143d04ed0 aes_ocb_ctrl body=346 status=ok
// SIG undefined aes_ocb_ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 aes_ocb_ctrl(undefined8 param_1,int param_2,uint param_3,void *param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = FTcpDeserializedMessage::GetMessage();
  if (param_2 == 0) {
    *(undefined8 *)(lVar3 + 0x1f0) = 0;
    uVar2 = EVP_CIPHER_CTX_iv_length(param_1);
    *(undefined4 *)(lVar3 + 0x2e8) = uVar2;
    uVar5 = IMessageToken::ToText(param_1);
    *(undefined8 *)(lVar3 + 0x2a8) = uVar5;
    *(undefined4 *)(lVar3 + 0x2ec) = 0x10;
    *(undefined8 *)(lVar3 + 0x2e0) = 0;
LAB_143d0500a:
    uVar5 = 1;
  }
  else {
    if (param_2 == 8) {
      lVar4 = FTcpDeserializedMessage::GetMessage(param_4);
      uVar5 = CRYPTO_ocb128_copy_ctx(lVar4 + 0x1f8,lVar3 + 0x1f8,lVar4,lVar4 + 0xf8);
      return uVar5;
    }
    if (param_2 == 9) {
      if (param_3 - 1 < 0xf) {
        *(uint *)(lVar3 + 0x2e8) = param_3;
        goto LAB_143d0500a;
      }
    }
    else if (param_2 == 0x10) {
      if ((param_3 == *(uint *)(lVar3 + 0x2ec)) &&
         (iVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1), iVar1 != 0)) {
        _guard_xfg_dispatch_icall_nop(param_4,(void *)(lVar3 + 0x2b0),(longlong)(int)param_3);
        goto LAB_143d0500a;
      }
    }
    else {
      if (param_2 != 0x11) {
        return 0xffffffff;
      }
      if (param_4 == (void *)0x0) {
        if (param_3 < 0x11) {
          *(uint *)(lVar3 + 0x2ec) = param_3;
          goto LAB_143d0500a;
        }
      }
      else if ((param_3 == *(uint *)(lVar3 + 0x2ec)) &&
              (iVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1), iVar1 == 0)) {
        _guard_xfg_dispatch_icall_nop((void *)(lVar3 + 0x2b0),param_4,(longlong)(int)param_3);
        goto LAB_143d0500a;
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 143d05030 aes_ocb_init_key body=473 status=ok
// SIG undefined aes_ocb_init_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 aes_ocb_init_key(undefined8 param_1,longlong param_2,void *param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = FTcpDeserializedMessage::GetMessage();
  uVar1 = DAT_146bcd584;
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) {
    if (*(int *)(lVar3 + 0x1f0) == 0) {
      _guard_xfg_dispatch_icall_nop
                (*(void **)(lVar3 + 0x2a8),param_3,(longlong)*(int *)(lVar3 + 0x2e8));
    }
    else {
      CRYPTO_ocb128_setiv(lVar3 + 0x1f8,param_3,(longlong)*(int *)(lVar3 + 0x2e8),
                          (longlong)*(int *)(lVar3 + 0x2ec));
    }
    *(undefined4 *)(lVar3 + 500) = 1;
    return 1;
  }
  iVar2 = UVariantSet::GetNumVariants(param_1);
  if ((uVar1 & 0x200) == 0) {
    FUN_140057570(param_2,iVar2 << 3,lVar3);
    iVar2 = UVariantSet::GetNumVariants(param_1);
    FUN_140057850(param_2,iVar2 << 3,lVar3 + 0xf8);
    iVar2 = CRYPTO_ocb128_init(lVar3 + 0x1f8,lVar3,lVar3 + 0xf8,FUN_140056ee0,FUN_140057490,0);
  }
  else {
    FUN_14005a2b0();
    iVar2 = UVariantSet::GetNumVariants(param_1);
    FUN_14005a390(param_2,iVar2 << 3,lVar3 + 0xf8);
    iVar2 = CRYPTO_ocb128_init(lVar3 + 0x1f8,lVar3,lVar3 + 0xf8,FUN_14005a480,FUN_14005a550,0);
  }
  if (iVar2 == 0) {
    return 0;
  }
  if ((param_3 != (void *)0x0) ||
     ((*(int *)(lVar3 + 500) != 0 && (param_3 = *(void **)(lVar3 + 0x2a8), param_3 != (void *)0x0)))
     ) {
    iVar2 = CRYPTO_ocb128_setiv(lVar3 + 0x1f8,param_3,(longlong)*(int *)(lVar3 + 0x2e8),
                                (longlong)*(int *)(lVar3 + 0x2ec));
    if (iVar2 != 1) {
      return 0;
    }
    *(undefined4 *)(lVar3 + 500) = 1;
  }
  *(undefined4 *)(lVar3 + 0x1f0) = 1;
  return 1;
}



// FUNCTION 143d05210 aes_ocb_cleanup body=40 status=ok
// SIG undefined aes_ocb_cleanup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 aes_ocb_cleanup(void)

{
  longlong lVar1;
  
  lVar1 = FTcpDeserializedMessage::GetMessage();
  CRYPTO_ocb128_cleanup(lVar1 + 0x1f8);
  return 1;
}



// FUNCTION 143d05240 EVP_aes_256_cbc body=29 status=ok
// SIG undefined EVP_aes_256_cbc(void)

undefined * EVP_aes_256_cbc(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_145d73dd0;
  if ((DAT_146bcd584 & 0x2000000) != 0) {
    puVar1 = &DAT_145d73d70;
  }
  return puVar1;
}



// FUNCTION 143d05260 EVP_aes_256_cbc body=29 status=ok
// SIG undefined EVP_aes_256_cbc(void)

undefined * EVP_aes_256_cbc(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_145d75150;
  if ((DAT_146bcd584 & 0x2000000) != 0) {
    puVar1 = &DAT_145d750f0;
  }
  return puVar1;
}



// FUNCTION 143d05280 EVP_aes_256_cbc body=29 status=ok
// SIG undefined EVP_aes_256_cbc(void)

undefined * EVP_aes_256_cbc(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_145d740d0;
  if ((DAT_146bcd584 & 0x2000000) != 0) {
    puVar1 = &DAT_145d74070;
  }
  return puVar1;
}



// FUNCTION 143d052a0 EVP_aes_256_cbc body=29 status=ok
// SIG undefined EVP_aes_256_cbc(void)

undefined * EVP_aes_256_cbc(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_145d74010;
  if ((DAT_146bcd584 & 0x2000000) != 0) {
    puVar1 = &DAT_145d73fb0;
  }
  return puVar1;
}



// FUNCTION 143d052c0 EVP_aes_256_cbc body=29 status=ok
// SIG undefined EVP_aes_256_cbc(void)

undefined * EVP_aes_256_cbc(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_145d74190;
  if ((DAT_146bcd584 & 0x2000000) != 0) {
    puVar1 = &DAT_145d74130;
  }
  return puVar1;
}



// FUNCTION 143d052e0 EVP_aes_256_cbc body=29 status=ok
// SIG undefined EVP_aes_256_cbc(void)

undefined * EVP_aes_256_cbc(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_145d74250;
  if ((DAT_146bcd584 & 0x2000000) != 0) {
    puVar1 = &DAT_145d741f0;
  }
  return puVar1;
}



// FUNCTION 143d05300 EVP_aes_256_cbc body=29 status=ok
// SIG undefined EVP_aes_256_cbc(void)

undefined * EVP_aes_256_cbc(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_145d73e90;
  if ((DAT_146bcd584 & 0x2000000) != 0) {
    puVar1 = &DAT_145d73e30;
  }
  return puVar1;
}



// FUNCTION 143d05320 EVP_aes_256_cbc body=29 status=ok
// SIG undefined EVP_aes_256_cbc(void)

undefined * EVP_aes_256_cbc(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_145d74d90;
  if ((DAT_146bcd584 & 0x2000000) != 0) {
    puVar1 = &DAT_145d74d30;
  }
  return puVar1;
}



// FUNCTION 143d05340 EVP_aes_256_cbc body=29 status=ok
// SIG undefined EVP_aes_256_cbc(void)

undefined * EVP_aes_256_cbc(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_145d755d0;
  if ((DAT_146bcd584 & 0x2000000) != 0) {
    puVar1 = &DAT_145d75570;
  }
  return puVar1;
}



// FUNCTION 143d05360 EVP_aes_256_cbc body=29 status=ok
// SIG undefined EVP_aes_256_cbc(void)

undefined * EVP_aes_256_cbc(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_145d73f50;
  if ((DAT_146bcd584 & 0x2000000) != 0) {
    puVar1 = &DAT_145d73ef0;
  }
  return puVar1;
}



// FUNCTION 143d05380 FUN_143d05380 body=8 status=ok
// SIG undefined FUN_143d05380(void)

undefined * FUN_143d05380(void)

{
  return &DAT_145d75330;
}



// FUNCTION 143d05390 FUN_143d05390 body=8 status=ok
// SIG undefined FUN_143d05390(void)

undefined * FUN_143d05390(void)

{
  return &DAT_145d75450;
}



// FUNCTION 143d053a0 EVP_aes_256_cbc body=29 status=ok
// SIG undefined EVP_aes_256_cbc(void)

undefined * EVP_aes_256_cbc(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_145d74fd0;
  if ((DAT_146bcd584 & 0x2000000) != 0) {
    puVar1 = &DAT_145d74f70;
  }
  return puVar1;
}



// FUNCTION 143d053c0 EVP_aes_256_cbc body=29 status=ok
// SIG undefined EVP_aes_256_cbc(void)

undefined * EVP_aes_256_cbc(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_145d74310;
  if ((DAT_146bcd584 & 0x2000000) != 0) {
    puVar1 = &DAT_145d742b0;
  }
  return puVar1;
}



// FUNCTION 143d053e0 EVP_aes_256_cbc body=29 status=ok
// SIG undefined EVP_aes_256_cbc(void)

undefined * EVP_aes_256_cbc(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_145d75210;
  if ((DAT_146bcd584 & 0x2000000) != 0) {
    puVar1 = &DAT_145d751b0;
  }
  return puVar1;
}



// FUNCTION 143d05400 EVP_aes_256_cbc body=29 status=ok
// SIG undefined EVP_aes_256_cbc(void)

undefined * EVP_aes_256_cbc(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_145d74610;
  if ((DAT_146bcd584 & 0x2000000) != 0) {
    puVar1 = &DAT_145d745b0;
  }
  return puVar1;
}



// FUNCTION 143d05420 EVP_aes_256_cbc body=29 status=ok
// SIG undefined EVP_aes_256_cbc(void)

undefined * EVP_aes_256_cbc(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_145d74550;
  if ((DAT_146bcd584 & 0x2000000) != 0) {
    puVar1 = &DAT_145d744f0;
  }
  return puVar1;
}



// FUNCTION 143d05440 EVP_aes_256_cbc body=29 status=ok
// SIG undefined EVP_aes_256_cbc(void)

undefined * EVP_aes_256_cbc(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_145d746d0;
  if ((DAT_146bcd584 & 0x2000000) != 0) {
    puVar1 = &DAT_145d74670;
  }
  return puVar1;
}



// FUNCTION 143d05460 EVP_aes_256_cbc body=29 status=ok
// SIG undefined EVP_aes_256_cbc(void)

undefined * EVP_aes_256_cbc(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_145d74790;
  if ((DAT_146bcd584 & 0x2000000) != 0) {
    puVar1 = &DAT_145d74730;
  }
  return puVar1;
}



// FUNCTION 143d05480 EVP_aes_256_cbc body=29 status=ok
// SIG undefined EVP_aes_256_cbc(void)

undefined * EVP_aes_256_cbc(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_145d743d0;
  if ((DAT_146bcd584 & 0x2000000) != 0) {
    puVar1 = &DAT_145d74370;
  }
  return puVar1;
}



// FUNCTION 143d054a0 EVP_aes_256_cbc body=29 status=ok
// SIG undefined EVP_aes_256_cbc(void)

undefined * EVP_aes_256_cbc(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_145d74e50;
  if ((DAT_146bcd584 & 0x2000000) != 0) {
    puVar1 = &DAT_145d74df0;
  }
  return puVar1;
}



// FUNCTION 143d054c0 EVP_aes_256_cbc body=29 status=ok
// SIG undefined EVP_aes_256_cbc(void)

undefined * EVP_aes_256_cbc(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_145d75690;
  if ((DAT_146bcd584 & 0x2000000) != 0) {
    puVar1 = &DAT_145d75630;
  }
  return puVar1;
}



// FUNCTION 143d054e0 EVP_aes_256_cbc body=29 status=ok
// SIG undefined EVP_aes_256_cbc(void)

undefined * EVP_aes_256_cbc(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_145d74490;
  if ((DAT_146bcd584 & 0x2000000) != 0) {
    puVar1 = &DAT_145d74430;
  }
  return puVar1;
}



// FUNCTION 143d05500 FUN_143d05500 body=8 status=ok
// SIG undefined FUN_143d05500(void)

undefined * FUN_143d05500(void)

{
  return &DAT_145d75390;
}



// FUNCTION 143d05510 FUN_143d05510 body=8 status=ok
// SIG undefined FUN_143d05510(void)

undefined * FUN_143d05510(void)

{
  return &DAT_145d754b0;
}



// FUNCTION 143d05520 EVP_aes_256_cbc body=29 status=ok
// SIG undefined EVP_aes_256_cbc(void)

undefined * EVP_aes_256_cbc(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_145d74850;
  if ((DAT_146bcd584 & 0x2000000) != 0) {
    puVar1 = &DAT_145d747f0;
  }
  return puVar1;
}



// FUNCTION 143d05540 EVP_aes_256_cbc body=29 status=ok
// SIG undefined EVP_aes_256_cbc(void)

undefined * EVP_aes_256_cbc(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_145d752d0;
  if ((DAT_146bcd584 & 0x2000000) != 0) {
    puVar1 = &DAT_145d75270;
  }
  return puVar1;
}



// FUNCTION 143d05560 EVP_aes_256_cbc body=29 status=ok
// SIG undefined EVP_aes_256_cbc(void)

undefined * EVP_aes_256_cbc(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_145d74b50;
  if ((DAT_146bcd584 & 0x2000000) != 0) {
    puVar1 = &DAT_145d74af0;
  }
  return puVar1;
}



// FUNCTION 143d05580 EVP_aes_256_cbc body=29 status=ok
// SIG undefined EVP_aes_256_cbc(void)

undefined * EVP_aes_256_cbc(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_145d74a90;
  if ((DAT_146bcd584 & 0x2000000) != 0) {
    puVar1 = &DAT_145d74a30;
  }
  return puVar1;
}



// FUNCTION 143d055a0 EVP_aes_256_cbc body=29 status=ok
// SIG undefined EVP_aes_256_cbc(void)

undefined * EVP_aes_256_cbc(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_145d74c10;
  if ((DAT_146bcd584 & 0x2000000) != 0) {
    puVar1 = &DAT_145d74bb0;
  }
  return puVar1;
}



// FUNCTION 143d055c0 EVP_aes_256_cbc body=29 status=ok
// SIG undefined EVP_aes_256_cbc(void)

undefined * EVP_aes_256_cbc(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_145d74cd0;
  if ((DAT_146bcd584 & 0x2000000) != 0) {
    puVar1 = &DAT_145d74c70;
  }
  return puVar1;
}



// FUNCTION 143d055e0 EVP_aes_256_cbc body=29 status=ok
// SIG undefined EVP_aes_256_cbc(void)

undefined * EVP_aes_256_cbc(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_145d74910;
  if ((DAT_146bcd584 & 0x2000000) != 0) {
    puVar1 = &DAT_145d748b0;
  }
  return puVar1;
}



// FUNCTION 143d05600 EVP_aes_256_cbc body=29 status=ok
// SIG undefined EVP_aes_256_cbc(void)

undefined * EVP_aes_256_cbc(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_145d74f10;
  if ((DAT_146bcd584 & 0x2000000) != 0) {
    puVar1 = &DAT_145d74eb0;
  }
  return puVar1;
}



// FUNCTION 143d05620 EVP_aes_256_cbc body=29 status=ok
// SIG undefined EVP_aes_256_cbc(void)

undefined * EVP_aes_256_cbc(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_145d75750;
  if ((DAT_146bcd584 & 0x2000000) != 0) {
    puVar1 = &DAT_145d756f0;
  }
  return puVar1;
}



// FUNCTION 143d05640 EVP_aes_256_cbc body=29 status=ok
// SIG undefined EVP_aes_256_cbc(void)

undefined * EVP_aes_256_cbc(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_145d749d0;
  if ((DAT_146bcd584 & 0x2000000) != 0) {
    puVar1 = &DAT_145d74970;
  }
  return puVar1;
}



// FUNCTION 143d05660 FUN_143d05660 body=8 status=ok
// SIG undefined FUN_143d05660(void)

undefined * FUN_143d05660(void)

{
  return &DAT_145d753f0;
}



// FUNCTION 143d05670 FUN_143d05670 body=8 status=ok
// SIG undefined FUN_143d05670(void)

undefined * FUN_143d05670(void)

{
  return &DAT_145d75510;
}



// FUNCTION 143d05680 EVP_aes_256_cbc body=29 status=ok
// SIG undefined EVP_aes_256_cbc(void)

undefined * EVP_aes_256_cbc(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_145d75090;
  if ((DAT_146bcd584 & 0x2000000) != 0) {
    puVar1 = &DAT_145d75030;
  }
  return puVar1;
}



// FUNCTION 143d056a0 aes_ccm_tls_cipher body=472 status=ok
// SIG undefined aes_ccm_tls_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong aes_ccm_tls_cipher(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                            ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143d056b5;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  lVar2 = FTcpDeserializedMessage::GetMessage();
  lVar6 = lVar2 + 0x118;
  if ((param_2 == param_3) && ((longlong)*(int *)(lVar2 + 0x10c) + 8U <= param_4)) {
    iVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
    if (iVar1 != 0) {
      puVar3 = (undefined8 *)UListView::OnItemSelectionChanged(param_1);
      *param_2 = *puVar3;
    }
    lVar4 = IMessageToken::ToText(param_1);
    *(undefined8 *)(lVar4 + 4) = *param_3;
    param_4 = param_4 - (longlong)(*(int *)(lVar2 + 0x10c) + 8);
    iVar1 = *(int *)(lVar2 + 0x108);
    uVar5 = IMessageToken::ToText(param_1);
    iVar1 = CRYPTO_ccm128_setiv(lVar6,uVar5,(longlong)(0xf - iVar1),param_4);
    if (iVar1 == 0) {
      iVar1 = *(int *)(lVar2 + 0x110);
      uVar5 = UListView::OnItemSelectionChanged(param_1);
      CRYPTO_ccm128_aad(lVar6,uVar5,(longlong)iVar1);
      param_2 = param_2 + 1;
      iVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
      lVar4 = *(longlong *)(lVar2 + 0x150);
      if (iVar1 == 0) {
        if (lVar4 == 0) {
          iVar1 = CRYPTO_ccm128_decrypt(lVar6,param_3 + 1,param_2,param_4);
        }
        else {
          local_68 = lVar4;
          iVar1 = CRYPTO_ccm128_decrypt_ccm64(lVar6);
        }
        if (((iVar1 == 0) &&
            (lVar6 = CRYPTO_ccm128_tag(lVar6,local_58,(longlong)*(int *)(lVar2 + 0x10c)), lVar6 != 0
            )) && (iVar1 = FUN_14004ffa0(local_58,param_4 + (longlong)(param_3 + 1),
                                         (longlong)*(int *)(lVar2 + 0x10c)), iVar1 == 0)) {
          return param_4 & 0xffffffff;
        }
        FUN_14004ff40(param_2,param_4);
      }
      else {
        if (lVar4 == 0) {
          iVar1 = CRYPTO_ccm128_encrypt(lVar6);
        }
        else {
          local_68 = lVar4;
          iVar1 = CRYPTO_ccm128_encrypt_ccm64(lVar6);
        }
        if ((iVar1 == 0) &&
           (lVar6 = CRYPTO_ccm128_tag(lVar6,param_4 + (longlong)param_2,
                                      (longlong)*(int *)(lVar2 + 0x10c)), lVar6 != 0)) {
          return (ulonglong)(uint)(*(int *)(lVar2 + 0x10c) + 8 + (int)param_4);
        }
      }
    }
  }
  return 0xffffffff;
}



// FUNCTION 143d05880 aes_gcm_tls_cipher body=670 status=ok
// SIG undefined aes_gcm_tls_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int aes_gcm_tls_cipher(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  
  lVar9 = 0x143d058a2;
  lVar4 = FTcpDeserializedMessage::GetMessage();
  iVar3 = -1;
  iVar8 = iVar3;
  if ((param_2 == param_3) && (0x17 < param_4)) {
    uVar7 = 0x18;
    if (*(int *)(param_1 + 0x10) != 0) {
      uVar7 = 0x13;
    }
    iVar2 = EVP_CIPHER_CTX_ctrl(param_1,uVar7,8,param_2);
    if (0 < iVar2) {
      lVar1 = lVar4 + 0x100;
      iVar2 = CRYPTO_gcm128_aad(lVar1,param_1 + 0x38,(longlong)*(int *)(lVar4 + 0x2cc));
      if (iVar2 == 0) {
        pcVar6 = *(code **)(lVar4 + 0x2d0);
        param_3 = param_3 + 8;
        param_2 = param_2 + 8;
        param_4 = param_4 - 0x18;
        if (*(int *)(param_1 + 0x10) == 0) {
          if (pcVar6 == (code *)0x0) {
            iVar2 = CRYPTO_gcm128_decrypt(lVar1,param_3,param_2,param_4);
          }
          else {
            lVar5 = 0;
            if (((0xf < param_4) && (pcVar6 == FUN_14005ed80)) &&
               (*(undefined **)(lVar4 + 0x268) == &DAT_140064f60)) {
              iVar2 = CRYPTO_gcm128_decrypt(lVar1,0,0,0);
              if (iVar2 != 0) {
                return -1;
              }
              lVar9 = lVar4 + 0x140;
              lVar5 = FUN_140062f80(param_3,param_2,param_4,*(undefined8 *)(lVar4 + 0x280),lVar1,
                                    lVar9);
              *(longlong *)(lVar4 + 0x138) = *(longlong *)(lVar4 + 0x138) + lVar5;
              pcVar6 = *(code **)(lVar4 + 0x2d0);
            }
            iVar2 = CRYPTO_gcm128_decrypt_ctr32
                              (lVar1,lVar5 + param_3,lVar5 + param_2,param_4 - lVar5,pcVar6,lVar9);
          }
          if (iVar2 == 0) {
            CRYPTO_gcm128_tag(lVar1,param_1 + 0x38,0x10);
            iVar2 = FUN_14004ffa0(param_1 + 0x38,param_3 + param_4,0x10);
            iVar8 = (int)param_4;
            if (iVar2 != 0) {
              FUN_14004ff40(param_2,param_4);
              iVar8 = iVar3;
            }
          }
        }
        else {
          if (pcVar6 == (code *)0x0) {
            iVar3 = CRYPTO_gcm128_encrypt(lVar1,param_3,param_2,param_4);
          }
          else {
            lVar9 = 0;
            if (((0x1f < param_4) && (pcVar6 == FUN_14005ed80)) &&
               (*(undefined **)(lVar4 + 0x268) == &DAT_140064f60)) {
              iVar3 = CRYPTO_gcm128_encrypt(lVar1,0,0,0);
              if (iVar3 != 0) {
                return -1;
              }
              lVar9 = FUN_140063300(param_3,param_2,param_4,*(undefined8 *)(lVar4 + 0x280),lVar1,
                                    lVar4 + 0x140);
              *(longlong *)(lVar4 + 0x138) = *(longlong *)(lVar4 + 0x138) + lVar9;
              pcVar6 = *(code **)(lVar4 + 0x2d0);
            }
            iVar3 = CRYPTO_gcm128_encrypt_ctr32
                              (lVar1,lVar9 + param_3,lVar9 + param_2,param_4 - lVar9,pcVar6);
          }
          if (iVar3 == 0) {
            CRYPTO_gcm128_tag(lVar1,param_2 + param_4,0x10);
            iVar8 = (int)param_4 + 0x18;
          }
        }
      }
    }
    *(undefined4 *)(lVar4 + 0xfc) = 0;
    *(undefined4 *)(lVar4 + 0x2cc) = 0xffffffff;
  }
  return iVar8;
}



// FUNCTION 143d05b20 aesni_cbc_hmac_sha1_init_key body=267 status=ok
// SIG undefined aesni_cbc_hmac_sha1_init_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint aesni_cbc_hmac_sha1_init_key
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  
  lVar4 = FTcpDeserializedMessage::GetMessage();
  iVar2 = UVariantSet::GetNumVariants(param_1);
  if (param_4 == 0) {
    uVar3 = FUN_140062030(param_2,iVar2 << 3,lVar4);
  }
  else {
    uVar3 = FUN_1400620a0();
  }
  puVar1 = (undefined8 *)(lVar4 + 0xf4);
  SHA1_Init(puVar1);
  *(undefined8 *)(lVar4 + 0x154) = *puVar1;
  *(undefined8 *)(lVar4 + 0x15c) = *(undefined8 *)(lVar4 + 0xfc);
  *(undefined8 *)(lVar4 + 0x218) = 0xffffffffffffffff;
  *(undefined8 *)(lVar4 + 0x164) = *(undefined8 *)(lVar4 + 0x104);
  *(undefined8 *)(lVar4 + 0x16c) = *(undefined8 *)(lVar4 + 0x10c);
  *(undefined8 *)(lVar4 + 0x174) = *(undefined8 *)(lVar4 + 0x114);
  *(undefined8 *)(lVar4 + 0x17c) = *(undefined8 *)(lVar4 + 0x11c);
  *(undefined8 *)(lVar4 + 0x184) = *(undefined8 *)(lVar4 + 0x124);
  *(undefined8 *)(lVar4 + 0x18c) = *(undefined8 *)(lVar4 + 300);
  *(undefined8 *)(lVar4 + 0x194) = *(undefined8 *)(lVar4 + 0x134);
  *(undefined8 *)(lVar4 + 0x19c) = *(undefined8 *)(lVar4 + 0x13c);
  *(undefined8 *)(lVar4 + 0x1a4) = *(undefined8 *)(lVar4 + 0x144);
  *(undefined8 *)(lVar4 + 0x1ac) = *(undefined8 *)(lVar4 + 0x14c);
  *(undefined8 *)(lVar4 + 0x1b4) = *puVar1;
  *(undefined8 *)(lVar4 + 0x1bc) = *(undefined8 *)(lVar4 + 0xfc);
  *(undefined8 *)(lVar4 + 0x1c4) = *(undefined8 *)(lVar4 + 0x104);
  *(undefined8 *)(lVar4 + 0x1cc) = *(undefined8 *)(lVar4 + 0x10c);
  *(undefined8 *)(lVar4 + 0x1d4) = *(undefined8 *)(lVar4 + 0x114);
  *(undefined8 *)(lVar4 + 0x1dc) = *(undefined8 *)(lVar4 + 0x11c);
  *(undefined8 *)(lVar4 + 0x1e4) = *(undefined8 *)(lVar4 + 0x124);
  *(undefined8 *)(lVar4 + 0x1ec) = *(undefined8 *)(lVar4 + 300);
  *(undefined8 *)(lVar4 + 500) = *(undefined8 *)(lVar4 + 0x134);
  *(undefined8 *)(lVar4 + 0x1fc) = *(undefined8 *)(lVar4 + 0x13c);
  *(undefined8 *)(lVar4 + 0x204) = *(undefined8 *)(lVar4 + 0x144);
  *(undefined8 *)(lVar4 + 0x20c) = *(undefined8 *)(lVar4 + 0x14c);
  return ~uVar3 >> 0x1f;
}



// FUNCTION 143d05c30 aesni_cbc_hmac_sha1_cipher body=2010 status=ok
// SIG undefined aesni_cbc_hmac_sha1_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint aesni_cbc_hmac_sha1_cipher
               (undefined8 param_1,undefined4 *param_2,undefined4 *param_3,ulonglong param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  byte bVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  char *pcVar14;
  undefined1 *puVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  longlong local_d8;
  longlong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  uint local_b0;
  undefined4 *local_a8;
  undefined4 *local_a0;
  longlong local_98;
  uint local_80 [10];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x143d05c47;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_c8 = param_1;
  local_a8 = param_3;
  local_a0 = param_2;
  lVar8 = FTcpDeserializedMessage::GetMessage();
  uVar11 = 0;
  local_c0 = 0;
  uVar12 = 0;
  uVar18 = (ulonglong)(0x40 - *(int *)(lVar8 + 0x210));
  uVar24 = *(ulonglong *)(lVar8 + 0x218);
  *(undefined8 *)(lVar8 + 0x218) = 0xffffffffffffffff;
  if ((param_4 & 0xf) != 0) {
    return 0;
  }
  iVar6 = TResourceArray<unsigned_char,0>::GetResourceDataSize(local_c8);
  if (iVar6 != 0) {
    uVar20 = uVar11;
    uVar19 = param_4;
    if (uVar24 != 0xffffffffffffffff) {
      if (param_4 != (uVar24 + 0x24 & 0xfffffffffffffff0)) {
        return 0;
      }
      uVar19 = uVar24;
      local_c0 = uVar11;
      if (0x301 < *(uint *)(lVar8 + 0x220)) {
        local_c0 = 0x10;
        uVar20 = local_c0;
      }
    }
    uVar24 = local_c0;
    uVar21 = uVar11;
    if ((uVar20 + uVar18 < uVar19) && (local_b8 = (uVar19 - uVar18) - uVar20 >> 6, local_b8 != 0)) {
      sha1_update(lVar8 + 0x1b4U,(longlong)param_3 + local_c0,uVar18);
      lVar13 = (longlong)param_3 + uVar24 + uVar18;
      local_e8 = IMessageToken::ToText(local_c8);
      param_3 = local_a8;
      uVar24 = local_b8;
      local_e0 = lVar8 + 0x1b4U;
      local_d8 = lVar13;
      FUN_140065b00(local_a8,param_2,local_b8,lVar8);
      uVar11 = uVar24 * 0x40;
      iVar6 = (int)((uVar24 & 0x3ffffffffffffff) >> 0x17) + *(int *)(lVar8 + 0x1cc);
      *(int *)(lVar8 + 0x1cc) = iVar6;
      uVar12 = (uint)(uVar24 << 9);
      *(int *)(lVar8 + 0x1c8) = *(int *)(lVar8 + 0x1c8) + uVar12;
      uVar21 = uVar18 + uVar11;
      if (*(uint *)(lVar8 + 0x1c8) < uVar12) {
        *(int *)(lVar8 + 0x1cc) = iVar6 + 1;
      }
    }
    puVar22 = (undefined8 *)(lVar8 + 0x1b4);
    sha1_update(puVar22,(longlong)param_3 + uVar21 + local_c0,uVar19 - (uVar21 + local_c0));
    if (uVar19 != param_4) {
      if (param_3 != param_2) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)param_2 + uVar11),(void *)((longlong)param_3 + uVar11),
                   uVar19 - uVar11);
      }
      lVar13 = (longlong)param_2 + uVar19;
      SHA1_Final(lVar13,puVar22);
      *puVar22 = *(undefined8 *)(lVar8 + 0x154);
      *(undefined8 *)(lVar8 + 0x1bc) = *(undefined8 *)(lVar8 + 0x15c);
      *(undefined8 *)(lVar8 + 0x1c4) = *(undefined8 *)(lVar8 + 0x164);
      *(undefined8 *)(lVar8 + 0x1cc) = *(undefined8 *)(lVar8 + 0x16c);
      *(undefined8 *)(lVar8 + 0x1d4) = *(undefined8 *)(lVar8 + 0x174);
      *(undefined8 *)(lVar8 + 0x1dc) = *(undefined8 *)(lVar8 + 0x17c);
      *(undefined8 *)(lVar8 + 0x1e4) = *(undefined8 *)(lVar8 + 0x184);
      *(undefined8 *)(lVar8 + 0x1ec) = *(undefined8 *)(lVar8 + 0x18c);
      *(undefined4 *)(lVar8 + 500) = *(undefined4 *)(lVar8 + 0x194);
      *(undefined4 *)(lVar8 + 0x1f8) = *(undefined4 *)(lVar8 + 0x198);
      *(undefined4 *)(lVar8 + 0x1fc) = *(undefined4 *)(lVar8 + 0x19c);
      *(undefined4 *)(lVar8 + 0x200) = *(undefined4 *)(lVar8 + 0x1a0);
      *(undefined4 *)(lVar8 + 0x204) = *(undefined4 *)(lVar8 + 0x1a4);
      *(undefined4 *)(lVar8 + 0x208) = *(undefined4 *)(lVar8 + 0x1a8);
      *(undefined4 *)(lVar8 + 0x20c) = *(undefined4 *)(lVar8 + 0x1ac);
      *(undefined4 *)(lVar8 + 0x210) = *(undefined4 *)(lVar8 + 0x1b0);
      sha1_update(puVar22,lVar13,0x14);
      SHA1_Final(lVar13,puVar22);
      uVar19 = uVar19 + 0x14;
      param_3 = param_2;
      if (uVar19 < param_4) {
        pcVar14 = (char *)((longlong)param_2 + uVar19);
        for (lVar13 = param_4 - uVar19; lVar13 != 0; lVar13 = lVar13 + -1) {
          *pcVar14 = ((char)param_4 - (char)uVar19) + -1;
          pcVar14 = pcVar14 + 1;
        }
      }
    }
    local_e8 = IMessageToken::ToText(local_c8);
    local_e0 = CONCAT44(local_e0._4_4_,1);
    FUN_1400615f0((longlong)param_3 + uVar11,uVar11 + (longlong)param_2,param_4 - uVar11,lVar8);
    return 1;
  }
  if (uVar24 == 0xffffffffffffffff) {
    local_e8 = IMessageToken::ToText(local_c8);
    local_e0 = local_e0 & 0xffffffff00000000;
    FUN_1400615f0(param_3,param_2,param_4,lVar8);
    sha1_update(lVar8 + 0x1b4,param_2,param_4);
    return 1;
  }
  if (CONCAT11(*(undefined1 *)(uVar24 + 0x21c + lVar8),*(undefined1 *)(uVar24 + 0x21d + lVar8)) <
      0x302) {
    if (0x14 < param_4) goto LAB_143d05f28;
  }
  else if (0x24 < param_4) {
    puVar9 = (undefined4 *)IMessageToken::ToText(local_c8);
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    param_2 = param_2 + 4;
    param_3 = param_3 + 4;
    param_4 = param_4 - 0x10;
    *puVar9 = uVar2;
    puVar9[1] = uVar3;
    puVar9[2] = uVar4;
    puVar9[3] = uVar5;
    local_a0 = param_2;
LAB_143d05f28:
    local_e8 = IMessageToken::ToText(local_c8);
    local_e0 = (ulonglong)local_e0._4_4_ << 0x20;
    FUN_1400615f0(param_3,param_2,param_4,lVar8);
    bVar10 = *(byte *)((param_4 - 1) + (longlong)param_2);
    uVar7 = (int)param_4 - 0x15;
    local_b0 = 0xff - uVar7 >> 0x18 | uVar7 & 0xff;
    uVar7 = 0xffffffff - ((int)(local_b0 - bVar10 | local_b0 ^ bVar10) >> 0x1f);
    local_c0 = CONCAT44(local_c0._4_4_,uVar7);
    uVar7 = ~uVar7 & local_b0 | uVar7 & bVar10;
    local_a8 = (undefined4 *)CONCAT44(local_a8._4_4_,uVar7);
    lVar13 = param_4 - (uVar7 + 0x15);
    *(char *)(uVar24 + 0x21f + lVar8) = (char)lVar13;
    *(char *)(uVar24 + 0x21e + lVar8) = (char)((ulonglong)lVar13 >> 8);
    *(undefined8 *)(lVar8 + 0x1b4) = *(undefined8 *)(lVar8 + 0xf4);
    *(undefined8 *)(lVar8 + 0x1bc) = *(undefined8 *)(lVar8 + 0xfc);
    *(undefined8 *)(lVar8 + 0x1c4) = *(undefined8 *)(lVar8 + 0x104);
    *(undefined8 *)(lVar8 + 0x1cc) = *(undefined8 *)(lVar8 + 0x10c);
    *(undefined8 *)(lVar8 + 0x1d4) = *(undefined8 *)(lVar8 + 0x114);
    *(undefined8 *)(lVar8 + 0x1dc) = *(undefined8 *)(lVar8 + 0x11c);
    *(undefined8 *)(lVar8 + 0x1e4) = *(undefined8 *)(lVar8 + 0x124);
    *(undefined8 *)(lVar8 + 0x1ec) = *(undefined8 *)(lVar8 + 300);
    *(undefined4 *)(lVar8 + 500) = *(undefined4 *)(lVar8 + 0x134);
    *(undefined4 *)(lVar8 + 0x1f8) = *(undefined4 *)(lVar8 + 0x138);
    *(undefined4 *)(lVar8 + 0x1fc) = *(undefined4 *)(lVar8 + 0x13c);
    *(undefined4 *)(lVar8 + 0x200) = *(undefined4 *)(lVar8 + 0x140);
    *(undefined4 *)(lVar8 + 0x204) = *(undefined4 *)(lVar8 + 0x144);
    *(undefined4 *)(lVar8 + 0x208) = *(undefined4 *)(lVar8 + 0x148);
    *(undefined4 *)(lVar8 + 0x20c) = *(undefined4 *)(lVar8 + 0x14c);
    *(undefined4 *)(lVar8 + 0x210) = *(undefined4 *)(lVar8 + 0x150);
    local_c8 = lVar13;
    sha1_update((undefined8 *)(lVar8 + 0x1b4),lVar8 + 0x220,uVar24);
    uVar24 = param_4 - 0x14;
    if (0x13f < uVar24) {
      lVar13 = (ulonglong)(0x40 - *(int *)(lVar8 + 0x210)) + (param_4 - 0x154 & 0xffffffffffffffc0);
      sha1_update(lVar8 + 0x1b4,param_2,lVar13);
      param_2 = (undefined4 *)((longlong)param_2 + lVar13);
      uVar24 = uVar24 - lVar13;
      lVar13 = local_c8 - lVar13;
      local_c8 = lVar13;
      local_a0 = param_2;
    }
    uVar7 = *(uint *)(lVar8 + 0x210);
    uVar17 = (int)lVar13 * 8 + *(int *)(lVar8 + 0x1c8);
    local_80[0] = 0;
    local_80[1] = 0;
    local_80[2] = 0;
    local_80[3] = 0;
    local_80[4] = 0;
    uVar17 = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 | uVar17 * 0x1000000
    ;
    uVar18 = (ulonglong)uVar17;
    uVar20 = uVar11;
    local_b8 = uVar18;
    if (uVar24 != 0) {
      local_98 = (longlong)param_2 + lVar13;
      lVar23 = -lVar13;
      do {
        bVar10 = (byte)((ulonglong)lVar23 >> 0x38);
        uVar17 = uVar7 + 1;
        *(byte *)((ulonglong)uVar7 + 0x1d0 + lVar8) =
             ~((byte)(lVar13 - uVar20 >> 0x38) | bVar10) & 0x80 |
             *(byte *)(local_98 + lVar23) & bVar10;
        uVar7 = uVar17;
        if (uVar17 == 0x40) {
          uVar7 = (uint)((lVar13 - uVar20) + 7 >> 0x20);
          *(uint *)(lVar8 + 0x20c) = *(uint *)(lVar8 + 0x20c) | (int)uVar7 >> 0x1f & (uint)uVar18;
          FUN_1400687c0(lVar8 + 0x1b4,lVar8 + 0x1d0,1);
          uVar7 = (int)((uint)((ulonglong)(lVar23 + -0x48) >> 0x20) & uVar7) >> 0x1f;
          local_80[0] = local_80[0] | *(uint *)(lVar8 + 0x1b4) & uVar7;
          local_80[1] = local_80[1] | *(uint *)(lVar8 + 0x1b8) & uVar7;
          local_80[2] = local_80[2] | *(uint *)(lVar8 + 0x1bc) & uVar7;
          local_80[3] = local_80[3] | *(uint *)(lVar8 + 0x1c0) & uVar7;
          local_80[4] = local_80[4] | *(uint *)(lVar8 + 0x1c4) & uVar7;
          uVar18 = local_b8;
          uVar7 = uVar12;
        }
        uVar17 = (uint)uVar18;
        uVar20 = uVar20 + 1;
        lVar23 = lVar23 + 1;
        lVar13 = local_c8;
        param_2 = local_a0;
      } while (uVar20 < uVar24);
    }
    puVar22 = (undefined8 *)(lVar8 + 0x1d0);
    uVar18 = (ulonglong)uVar7;
    if (uVar18 < 0x40) {
      lVar13 = 0x40 - uVar18;
      uVar20 = uVar20 + lVar13;
      puVar15 = (undefined1 *)(uVar18 + (longlong)puVar22);
      for (; lVar13 != 0; lVar13 = lVar13 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
    }
    if (0x38 < uVar7) {
      uVar7 = (uint)((local_c8 - uVar20) + 8 >> 0x20);
      *(uint *)(lVar8 + 0x20c) = *(uint *)(lVar8 + 0x20c) | (int)uVar7 >> 0x1f & uVar17;
      FUN_1400687c0(lVar8 + 0x1b4,puVar22,1);
      uVar7 = (int)((uint)((uVar20 - local_c8) + -0x49 >> 0x20) & uVar7) >> 0x1f;
      local_80[0] = local_80[0] | uVar7 & *(uint *)(lVar8 + 0x1b4);
      local_80[1] = local_80[1] | *(uint *)(lVar8 + 0x1b8) & uVar7;
      local_80[2] = local_80[2] | *(uint *)(lVar8 + 0x1bc) & uVar7;
      local_80[3] = local_80[3] | *(uint *)(lVar8 + 0x1c0) & uVar7;
      local_80[4] = local_80[4] | *(uint *)(lVar8 + 0x1c4) & uVar7;
      *puVar22 = 0;
      uVar20 = uVar20 + 0x40;
      *(undefined8 *)(lVar8 + 0x1d8) = 0;
      *(undefined8 *)(lVar8 + 0x1e0) = 0;
      *(undefined8 *)(lVar8 + 0x1e8) = 0;
      *(undefined8 *)(lVar8 + 0x1f0) = 0;
      *(undefined8 *)(lVar8 + 0x1f8) = 0;
      *(undefined8 *)(lVar8 + 0x200) = 0;
      *(undefined8 *)(lVar8 + 0x208) = 0;
    }
    *(int *)(lVar8 + 0x20c) = (int)local_b8;
    puVar1 = (uint *)(lVar8 + 0x1b4);
    FUN_1400687c0(puVar1,puVar22,1);
    lVar13 = local_c8;
    uVar7 = (uint)((longlong)((uVar20 - local_c8) + -0x49) >> 0x3f);
    local_80[0] = uVar7 & *puVar1 | local_80[0];
    local_80[1] = *(uint *)(lVar8 + 0x1b8) & uVar7 | local_80[1];
    local_80[1] = local_80[1] >> 0x18 | (local_80[1] & 0xff0000) >> 8 | (local_80[1] & 0xff00) << 8
                  | local_80[1] << 0x18;
    local_80[0] = local_80[0] >> 0x18 | (local_80[0] & 0xff0000) >> 8 | (local_80[0] & 0xff00) << 8
                  | local_80[0] << 0x18;
    local_80[2] = *(uint *)(lVar8 + 0x1bc) & uVar7 | local_80[2];
    local_80[3] = *(uint *)(lVar8 + 0x1c0) & uVar7 | local_80[3];
    local_80[3] = local_80[3] >> 0x18 | (local_80[3] & 0xff0000) >> 8 | (local_80[3] & 0xff00) << 8
                  | local_80[3] << 0x18;
    local_80[2] = local_80[2] >> 0x18 | (local_80[2] & 0xff0000) >> 8 | (local_80[2] & 0xff00) << 8
                  | local_80[2] << 0x18;
    *(undefined8 *)puVar1 = *(undefined8 *)(lVar8 + 0x154);
    *(undefined8 *)(lVar8 + 0x1bc) = *(undefined8 *)(lVar8 + 0x15c);
    local_80[4] = *(uint *)(lVar8 + 0x1c4) & uVar7 | local_80[4];
    *(undefined8 *)(lVar8 + 0x1c4) = *(undefined8 *)(lVar8 + 0x164);
    *(undefined8 *)(lVar8 + 0x1cc) = *(undefined8 *)(lVar8 + 0x16c);
    local_80[4] = local_80[4] >> 0x18 | (local_80[4] & 0xff0000) >> 8 | (local_80[4] & 0xff00) << 8
                  | local_80[4] << 0x18;
    *(undefined8 *)(lVar8 + 0x1d4) = *(undefined8 *)(lVar8 + 0x174);
    *(undefined8 *)(lVar8 + 0x1dc) = *(undefined8 *)(lVar8 + 0x17c);
    *(undefined8 *)(lVar8 + 0x1e4) = *(undefined8 *)(lVar8 + 0x184);
    *(undefined8 *)(lVar8 + 0x1ec) = *(undefined8 *)(lVar8 + 0x18c);
    *(undefined4 *)(lVar8 + 500) = *(undefined4 *)(lVar8 + 0x194);
    *(undefined4 *)(lVar8 + 0x1f8) = *(undefined4 *)(lVar8 + 0x198);
    *(undefined4 *)(lVar8 + 0x1fc) = *(undefined4 *)(lVar8 + 0x19c);
    *(undefined4 *)(lVar8 + 0x200) = *(undefined4 *)(lVar8 + 0x1a0);
    *(undefined4 *)(lVar8 + 0x204) = *(undefined4 *)(lVar8 + 0x1a4);
    *(undefined4 *)(lVar8 + 0x208) = *(undefined4 *)(lVar8 + 0x1a8);
    *(undefined4 *)(lVar8 + 0x20c) = *(undefined4 *)(lVar8 + 0x1ac);
    *(undefined4 *)(lVar8 + 0x210) = *(undefined4 *)(lVar8 + 0x1b0);
    sha1_update(puVar1,local_80,0x14);
    SHA1_Final(local_80,puVar1);
    lVar23 = (longlong)param_2 + lVar13;
    lVar8 = lVar23 + -1 + ((uVar24 - local_b0) - lVar13);
    iVar6 = (int)lVar23 - (int)lVar8;
    if (local_b0 + 0x14 != 0) {
      uVar24 = uVar11;
      uVar18 = uVar11;
      do {
        bVar10 = *(byte *)(lVar8 + uVar24);
        iVar16 = (int)uVar24;
        uVar12 = (iVar16 - iVar6) - 0x14;
        uVar24 = uVar24 + 1;
        uVar7 = (int)(uVar12 & (iVar6 - iVar16) - 1U) >> 0x1f;
        uVar12 = (uint)uVar11 | (bVar10 ^ (uint)local_a8) & ~((int)uVar12 >> 0x1f) |
                 (*(byte *)(uVar18 + (longlong)local_80) ^ bVar10) & uVar7;
        uVar11 = (ulonglong)uVar12;
        uVar18 = uVar18 + (uVar7 & 1);
      } while (uVar24 < local_b0 + 0x14);
    }
    return 0xffffffffU - ((int)-uVar12 >> 0x1f) & (uint)local_c0 & 1;
  }
  return 0;
}



// FUNCTION 143d06410 aesni_cbc_hmac_sha1_ctrl body=1218 status=ok
// SIG undefined aesni_cbc_hmac_sha1_ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong aesni_cbc_hmac_sha1_ctrl(undefined8 param_1,int param_2,int param_3,undefined8 *param_4)

{
  longlong lVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong *puVar12;
  undefined1 auStack_b8 [32];
  uint local_98;
  ulonglong local_88 [9];
  undefined8 uStack_40;
  
  uStack_40 = 0x143d0642d;
  local_88[8] = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  lVar4 = FTcpDeserializedMessage::GetMessage();
  if (param_2 == 0x16) {
    if (param_3 == 0xd) {
      uVar9 = (uint)CONCAT11(*(undefined1 *)((longlong)param_4 + 0xb),
                             *(undefined1 *)((longlong)param_4 + 0xc));
      iVar3 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
      if (iVar3 == 0) {
        *(undefined8 *)(lVar4 + 0x220) = *param_4;
        *(undefined4 *)(lVar4 + 0x228) = *(undefined4 *)(param_4 + 1);
        *(undefined1 *)(lVar4 + 0x22c) = *(undefined1 *)((longlong)param_4 + 0xc);
        *(undefined8 *)(lVar4 + 0x218) = 0xd;
        return 0x14;
      }
      *(ulonglong *)(lVar4 + 0x218) = (ulonglong)uVar9;
      uVar11 = (uint)CONCAT11(*(undefined1 *)((longlong)param_4 + 9),
                              *(undefined1 *)((longlong)param_4 + 10));
      *(uint *)(lVar4 + 0x220) = uVar11;
      if (0x301 < uVar11) {
        if (uVar9 < 0x10) {
          return 0;
        }
        uVar9 = uVar9 - 0x10;
        *(char *)((longlong)param_4 + 0xc) = (char)uVar9;
        *(char *)((longlong)param_4 + 0xb) = (char)(uVar9 >> 8);
      }
      *(undefined8 *)(lVar4 + 0x1b4) = *(undefined8 *)(lVar4 + 0xf4);
      *(undefined8 *)(lVar4 + 0x1bc) = *(undefined8 *)(lVar4 + 0xfc);
      *(undefined8 *)(lVar4 + 0x1c4) = *(undefined8 *)(lVar4 + 0x104);
      *(undefined8 *)(lVar4 + 0x1cc) = *(undefined8 *)(lVar4 + 0x10c);
      *(undefined8 *)(lVar4 + 0x1d4) = *(undefined8 *)(lVar4 + 0x114);
      *(undefined8 *)(lVar4 + 0x1dc) = *(undefined8 *)(lVar4 + 0x11c);
      *(undefined8 *)(lVar4 + 0x1e4) = *(undefined8 *)(lVar4 + 0x124);
      *(undefined8 *)(lVar4 + 0x1ec) = *(undefined8 *)(lVar4 + 300);
      *(undefined8 *)(lVar4 + 500) = *(undefined8 *)(lVar4 + 0x134);
      *(undefined8 *)(lVar4 + 0x1fc) = *(undefined8 *)(lVar4 + 0x13c);
      *(undefined8 *)(lVar4 + 0x204) = *(undefined8 *)(lVar4 + 0x144);
      *(undefined8 *)(lVar4 + 0x20c) = *(undefined8 *)(lVar4 + 0x14c);
      sha1_update((undefined8 *)(lVar4 + 0x1b4),param_4,0xd);
      return (ulonglong)((uVar9 + 0x24 & 0xfffffff0) - uVar9);
    }
  }
  else {
    if (param_2 == 0x17) {
      local_88[0] = 0;
      local_88[1] = 0;
      local_88[2] = 0;
      local_88[3] = 0;
      local_88[4] = 0;
      local_88[5] = 0;
      local_88[6] = 0;
      local_88[7] = 0;
      if (param_3 < 0x41) {
        _guard_xfg_dispatch_icall_nop(local_88,param_4,(longlong)param_3);
      }
      else {
        SHA1_Init(lVar4 + 0xf4);
        sha1_update(lVar4 + 0xf4,param_4,(longlong)param_3);
        SHA1_Final(local_88,lVar4 + 0xf4);
      }
      local_88[0] = local_88[0] ^ 0x3636363636363636;
      local_88[1] = local_88[1] ^ 0x3636363636363636;
      local_88[2] = local_88[2] ^ 0x3636363636363636;
      local_88[3] = local_88[3] ^ 0x3636363636363636;
      local_88[4] = local_88[4] ^ 0x3636363636363636;
      local_88[5] = local_88[5] ^ 0x3636363636363636;
      local_88[6] = local_88[6] ^ 0x3636363636363636;
      local_88[7] = local_88[7] ^ 0x3636363636363636;
      SHA1_Init(lVar4 + 0xf4);
      sha1_update(lVar4 + 0xf4,local_88,0x40);
      lVar1 = lVar4 + 0x154;
      local_88[0] = local_88[0] ^ 0x6a6a6a6a6a6a6a6a;
      local_88[1] = local_88[1] ^ 0x6a6a6a6a6a6a6a6a;
      local_88[2] = local_88[2] ^ 0x6a6a6a6a6a6a6a6a;
      local_88[3] = local_88[3] ^ 0x6a6a6a6a6a6a6a6a;
      local_88[4] = local_88[4] ^ 0x6a6a6a6a6a6a6a6a;
      local_88[5] = local_88[5] ^ 0x6a6a6a6a6a6a6a6a;
      local_88[6] = local_88[6] ^ 0x6a6a6a6a6a6a6a6a;
      local_88[7] = local_88[7] ^ 0x6a6a6a6a6a6a6a6a;
      SHA1_Init(lVar1);
      puVar12 = local_88;
      lVar10 = 0x40;
      if ((ulonglong)*(uint *)(lVar4 + 0x1b0) != 0) {
        uVar6 = 0x40 - (ulonglong)*(uint *)(lVar4 + 0x1b0);
        uVar5 = 0x40;
        if (uVar6 < 0x41) {
          uVar5 = uVar6;
        }
        SHA1_Update(lVar1,local_88,uVar5);
        puVar12 = (ulonglong *)((longlong)local_88 + uVar5);
        lVar10 = 0x40 - uVar5;
      }
      uVar5 = (ulonglong)((uint)lVar10 & 0x3f);
      uVar6 = lVar10 - uVar5;
      if (uVar6 != 0) {
        FUN_1400687c0(lVar1,puVar12,uVar6 >> 6);
        uVar9 = (int)uVar6 * 8;
        *(int *)(lVar4 + 0x168) = *(int *)(lVar4 + 0x168) + uVar9;
        puVar12 = (ulonglong *)((longlong)puVar12 + uVar6);
        iVar3 = (int)(uVar6 >> 0x1d) + *(int *)(lVar4 + 0x16c);
        *(int *)(lVar4 + 0x16c) = iVar3;
        if (*(uint *)(lVar4 + 0x168) < uVar9) {
          *(int *)(lVar4 + 0x16c) = iVar3 + 1;
        }
      }
      if (uVar5 != 0) {
        SHA1_Update(lVar1,puVar12,uVar5);
      }
      FUN_14004ff40(local_88,0x40);
      return 1;
    }
    if (param_2 == 0x19) {
      if (0x1f < param_3) {
        uVar2 = CONCAT11(*(undefined1 *)(param_4[1] + 0xb),*(undefined1 *)(param_4[1] + 0xc));
        uVar9 = (uint)uVar2;
        iVar3 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
        if ((iVar3 != 0) &&
           (0x301 < CONCAT11(*(undefined1 *)(param_4[1] + 9),*(undefined1 *)(param_4[1] + 10)))) {
          if (uVar2 == 0) {
            uVar11 = *(uint *)(param_4 + 3) >> 2;
            if (1 < uVar11 - 1) {
              return 0xffffffff;
            }
            uVar9 = *(uint *)(param_4 + 2);
          }
          else {
            if (uVar9 < 0x1000) {
              return 0;
            }
            uVar11 = 1;
            if ((0x1fff < uVar9) && (uVar11 = 1, (DAT_146bcd588 & 0x20) != 0)) {
              uVar11 = 2;
            }
          }
          *(undefined8 *)(lVar4 + 0x1b4) = *(undefined8 *)(lVar4 + 0xf4);
          *(undefined8 *)(lVar4 + 0x1bc) = *(undefined8 *)(lVar4 + 0xfc);
          *(undefined8 *)(lVar4 + 0x1c4) = *(undefined8 *)(lVar4 + 0x104);
          *(undefined8 *)(lVar4 + 0x1cc) = *(undefined8 *)(lVar4 + 0x10c);
          *(undefined8 *)(lVar4 + 0x1d4) = *(undefined8 *)(lVar4 + 0x114);
          *(undefined8 *)(lVar4 + 0x1dc) = *(undefined8 *)(lVar4 + 0x11c);
          *(undefined8 *)(lVar4 + 0x1e4) = *(undefined8 *)(lVar4 + 0x124);
          *(undefined8 *)(lVar4 + 0x1ec) = *(undefined8 *)(lVar4 + 300);
          *(undefined8 *)(lVar4 + 500) = *(undefined8 *)(lVar4 + 0x134);
          *(undefined8 *)(lVar4 + 0x1fc) = *(undefined8 *)(lVar4 + 0x13c);
          *(undefined8 *)(lVar4 + 0x204) = *(undefined8 *)(lVar4 + 0x144);
          *(undefined8 *)(lVar4 + 0x20c) = *(undefined8 *)(lVar4 + 0x14c);
          sha1_update((undefined8 *)(lVar4 + 0x1b4),param_4[1],0xd);
          bVar7 = (char)uVar11 + 1;
          uVar8 = uVar9 >> (bVar7 & 0x1f);
          uVar9 = (uVar8 - (uVar8 << (bVar7 & 0x1f))) + uVar9;
          if ((uVar8 < uVar9) && ((uVar9 + 0x16 & 0x3f) < uVar11 * 4 - 1)) {
            uVar8 = uVar8 + 1;
            uVar9 = uVar9 + uVar11 * -4 + 1;
          }
          *(uint *)(param_4 + 3) = uVar11 * 4;
          iVar3 = (uVar8 + 0x24 & 0xfffffff0) + 0x15;
          return (ulonglong)
                 ((((iVar3 << (bVar7 & 0x1f)) + (uVar9 + 0x24 & 0xfffffff0)) - iVar3) + 0x15);
        }
      }
    }
    else {
      if (param_2 == 0x1a) {
        local_98 = *(uint *)(param_4 + 3) >> 2;
        uVar5 = tls1_1_multi_block_encrypt(lVar4,*param_4,param_4[1],param_4[2]);
        return uVar5;
      }
      if (param_2 == 0x1c) {
        return (ulonglong)((param_3 + 0x24U & 0xfffffff0) + 0x15);
      }
    }
  }
  return 0xffffffff;
}



// FUNCTION 143d068e0 FUN_143d068e0 body=27 status=ok
// SIG undefined FUN_143d068e0(void)

undefined * FUN_143d068e0(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)0x0;
  if ((DAT_146bcd584 & 0x2000000) != 0) {
    puVar1 = &DAT_146836cf0;
  }
  return puVar1;
}



// FUNCTION 143d06900 FUN_143d06900 body=27 status=ok
// SIG undefined FUN_143d06900(void)

undefined * FUN_143d06900(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)0x0;
  if ((DAT_146bcd584 & 0x2000000) != 0) {
    puVar1 = &DAT_146836d50;
  }
  return puVar1;
}



// FUNCTION 143d06920 sha1_update body=188 status=ok
// SIG undefined sha1_update(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void sha1_update(longlong param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  
  if ((ulonglong)*(uint *)(param_1 + 0x5c) != 0) {
    uVar2 = 0x40 - (ulonglong)*(uint *)(param_1 + 0x5c);
    uVar4 = param_3;
    if (uVar2 <= param_3) {
      uVar4 = uVar2;
    }
    SHA1_Update(param_1,param_2,uVar4);
    param_2 = param_2 + uVar4;
    param_3 = param_3 - uVar4;
  }
  uVar4 = (ulonglong)((uint)param_3 & 0x3f);
  param_3 = param_3 - uVar4;
  if (param_3 != 0) {
    FUN_1400687c0(param_1,param_2,param_3 >> 6);
    uVar1 = (int)param_3 * 8;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + uVar1;
    param_2 = param_2 + param_3;
    iVar3 = (int)(param_3 >> 0x1d) + *(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0x18) = iVar3;
    if (*(uint *)(param_1 + 0x14) < uVar1) {
      *(int *)(param_1 + 0x18) = iVar3 + 1;
    }
  }
  if (uVar4 != 0) {
    SHA1_Update(param_1,param_2,uVar4);
  }
  return;
}



// FUNCTION 143d069e0 tls1_1_multi_block_encrypt body=2020 status=ok
// SIG undefined tls1_1_multi_block_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong tls1_1_multi_block_encrypt
                    (uint *param_1,undefined1 *param_2,longlong param_3,longlong *param_4,
                    int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined1 **ppuVar15;
  byte bVar16;
  undefined1 *puVar17;
  longlong *plVar18;
  undefined4 *puVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  longlong *plVar26;
  ulonglong uVar27;
  longlong *plVar28;
  uint *puVar29;
  uint uVar30;
  ulonglong uVar31;
  longlong lVar32;
  undefined1 auStack_7b8 [32];
  uint local_798;
  undefined1 local_794;
  undefined1 local_793;
  undefined1 local_792;
  longlong *local_790;
  int local_788;
  uint local_784;
  uint *local_780;
  undefined1 *local_778;
  longlong local_770;
  undefined1 *local_768;
  uint local_760;
  uint local_75c;
  int local_758;
  uint local_754;
  longlong local_748;
  uint auStack_740 [2];
  longlong local_738 [14];
  undefined8 local_6c8;
  undefined4 local_6c0 [30];
  longlong local_648;
  undefined1 *local_640;
  undefined4 local_638 [2];
  undefined4 local_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined4 uStack_624;
  longlong local_618 [34];
  undefined8 local_508;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  uint auStack_4cc [16];
  uint auStack_48c [225];
  undefined1 local_108 [32];
  undefined1 local_e8 [64];
  uint auStack_a8 [24];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_7b8;
  uVar27 = 0;
  uVar1 = param_5 * 4;
  local_788 = 0;
  local_790 = param_4;
  local_780 = param_1;
  local_770 = param_3;
  local_768 = param_2;
  iVar13 = RAND_bytes(&local_508,param_5 << 6);
  if (iVar13 < 1) {
    uVar27 = 0;
  }
  else {
    bVar16 = (char)param_5 + 1;
    local_784 = (uint)param_4 >> (bVar16 & 0x1f);
    lVar32 = -(ulonglong)((uint)local_108 & 0x1f);
    local_778 = local_e8 + lVar32;
    local_798 = (local_784 - (local_784 << (bVar16 & 0x1f))) + (int)local_790;
    if ((local_784 < local_798) && ((local_798 + 0x16 & 0x3f) < uVar1 - 1)) {
      local_784 = local_784 + 1;
      local_798 = local_798 + param_5 * -4 + 1;
    }
    uVar23 = local_784;
    uVar22 = local_798;
    local_748 = local_770;
    local_648 = local_770;
    local_640 = local_768 + 0x15;
    *(undefined4 *)(local_768 + 5) = (undefined4)local_508;
    *(undefined4 *)(local_768 + 9) = local_508._4_4_;
    *(undefined4 *)(local_768 + 0xd) = uStack_500;
    *(undefined4 *)(local_768 + 0x11) = uStack_4fc;
    local_630 = (undefined4)local_508;
    uStack_62c = local_508._4_4_;
    uStack_628 = uStack_500;
    uStack_624 = uStack_4fc;
    if (1 < uVar1) {
      plVar26 = local_738;
      ppuVar15 = &local_640;
      plVar28 = &local_748;
      uVar31 = (ulonglong)(uVar1 - 1);
      plVar18 = local_618;
      puVar24 = &local_4f8;
      do {
        lVar5 = *plVar28;
        uVar7 = *puVar24;
        uVar12 = puVar24[1];
        *plVar26 = lVar5 + (ulonglong)local_784;
        plVar28 = plVar28 + 2;
        plVar18[-1] = lVar5 + (ulonglong)local_784;
        plVar26 = plVar26 + 2;
        puVar17 = *ppuVar15;
        ppuVar15 = ppuVar15 + 5;
        puVar17 = puVar17 + ((local_784 + 0x24 & 0xfffffff0) + 0x15);
        *plVar18 = (longlong)puVar17;
        *(undefined8 *)(puVar17 + -0x10) = uVar7;
        *(undefined8 *)(puVar17 + -8) = uVar12;
        uVar14 = *(undefined4 *)((longlong)puVar24 + 4);
        uVar10 = *(undefined4 *)(puVar24 + 1);
        uVar11 = *(undefined4 *)((longlong)puVar24 + 0xc);
        *(undefined4 *)(plVar18 + 2) = *(undefined4 *)puVar24;
        *(undefined4 *)((longlong)plVar18 + 0x14) = uVar14;
        *(undefined4 *)(plVar18 + 3) = uVar10;
        *(undefined4 *)((longlong)plVar18 + 0x1c) = uVar11;
        uVar31 = uVar31 - 1;
        plVar18 = plVar18 + 5;
        puVar24 = puVar24 + 2;
        param_1 = local_780;
      } while (uVar31 != 0);
    }
    local_508 = *(ulonglong *)(param_1 + 0x74);
    if (uVar1 != 0) {
      local_754 = param_1[0x71];
      puVar29 = (uint *)((longlong)auStack_a8 + lVar32);
      local_760 = param_1[0x6d];
      local_75c = param_1[0x6e];
      local_794 = (undefined1)param_1[0x76];
      local_793 = *(undefined1 *)((longlong)param_1 + 0x1d9);
      local_792 = *(undefined1 *)((longlong)param_1 + 0x1da);
      uVar21 = param_1[0x6f];
      uVar2 = param_1[0x70];
      puVar24 = &local_508;
      local_758 = uVar1 - 1;
      local_770 = CONCAT44(local_770._4_4_,uVar21);
      local_790 = (longlong *)CONCAT44(local_790._4_4_,uVar2);
      puVar19 = &uStack_500;
      uVar31 = local_508 >> 0x38 | (local_508 & 0xff000000000000) >> 0x28 |
               (local_508 & 0xff0000000000) >> 0x18 | (local_508 & 0xff00000000) >> 8 |
               (local_508 & 0xff000000) << 8 | (local_508 & 0xff0000) << 0x18 |
               (local_508 & 0xff00) << 0x28 | local_508 << 0x38;
      uVar25 = uVar27;
      do {
        *puVar29 = uVar21;
        uVar3 = local_784;
        if ((int)uVar27 == local_758) {
          uVar3 = local_798;
        }
        puVar29[0x10] = local_754;
        *(char *)(puVar19 + 1) = (char)uVar3;
        uVar30 = (int)uVar27 + 1;
        uVar27 = (ulonglong)uVar30;
        puVar29[8] = uVar2;
        puVar6 = *(undefined8 **)((longlong)auStack_740 + (uVar25 - 8));
        puVar29[-0x10] = local_760;
        puVar29[-8] = local_75c;
        puVar29 = puVar29 + 1;
        *(ulonglong *)(puVar19 + -2) =
             uVar31 >> 0x38 | (uVar31 & 0xff000000000000) >> 0x28 |
             (uVar31 & 0xff0000000000) >> 0x18 | (uVar31 & 0xff00000000) >> 8 |
             (uVar31 & 0xff000000) << 8 | (uVar31 & 0xff0000) << 0x18 | (uVar31 & 0xff00) << 0x28 |
             uVar31 << 0x38;
        *(undefined1 *)puVar19 = local_794;
        *(undefined1 *)((longlong)puVar19 + 1) = local_793;
        *(undefined1 *)((longlong)puVar19 + 2) = local_792;
        *(char *)((longlong)puVar19 + 3) = (char)(uVar3 >> 8);
        uVar7 = puVar6[1];
        *(undefined8 *)((longlong)puVar19 + 5) = *puVar6;
        *(undefined8 *)((longlong)puVar19 + 0xd) = uVar7;
        uVar14 = *(undefined4 *)((longlong)puVar6 + 0x14);
        uVar10 = *(undefined4 *)(puVar6 + 3);
        uVar11 = *(undefined4 *)((longlong)puVar6 + 0x1c);
        *(undefined4 *)((longlong)puVar19 + 0x15) = *(undefined4 *)(puVar6 + 2);
        *(undefined4 *)((longlong)puVar19 + 0x19) = uVar14;
        *(undefined4 *)((longlong)puVar19 + 0x1d) = uVar10;
        *(undefined4 *)((longlong)puVar19 + 0x21) = uVar11;
        uVar14 = *(undefined4 *)((longlong)puVar6 + 0x24);
        uVar10 = *(undefined4 *)(puVar6 + 5);
        uVar11 = *(undefined4 *)((longlong)puVar6 + 0x2c);
        *(undefined4 *)((longlong)puVar19 + 0x25) = *(undefined4 *)(puVar6 + 4);
        *(undefined4 *)((longlong)puVar19 + 0x29) = uVar14;
        *(undefined4 *)((longlong)puVar19 + 0x2d) = uVar10;
        *(undefined4 *)((longlong)puVar19 + 0x31) = uVar11;
        *(undefined2 *)((longlong)puVar19 + 0x35) = *(undefined2 *)(puVar6 + 6);
        *(undefined1 *)((longlong)puVar19 + 0x37) = *(undefined1 *)((longlong)puVar6 + 0x32);
        *(longlong *)((longlong)auStack_740 + (uVar25 - 8)) = (longlong)puVar6 + 0x33;
        *(undefined8 **)((longlong)local_6c0 + (uVar25 - 8)) = puVar24;
        puVar24 = puVar24 + 0x10;
        *(uint *)((longlong)auStack_740 + uVar25) = uVar3 - 0x33 >> 6;
        *(undefined4 *)((longlong)local_6c0 + uVar25) = 1;
        puVar19 = puVar19 + 0x20;
        uVar31 = uVar31 + 1;
        uVar25 = uVar25 + 0x10;
        param_1 = local_780;
      } while (uVar30 < uVar1);
    }
    uVar27 = 0;
    FUN_14006d500(local_778,&local_6c8,param_5);
    puVar17 = local_778;
    uVar21 = uVar22;
    if (uVar23 <= uVar22) {
      uVar21 = uVar23;
    }
    uVar21 = uVar21 - 0x33 >> 6;
    iVar13 = local_788;
    if (0x20 < uVar21) {
      if (uVar1 != 0) {
        puVar19 = local_638;
        uVar25 = (ulonglong)uVar1;
        uVar31 = uVar27;
        do {
          *(undefined8 *)((longlong)local_6c0 + (uVar31 - 8)) =
               *(undefined8 *)((longlong)auStack_740 + (uVar31 - 8));
          *(undefined4 *)((longlong)local_6c0 + uVar31) = 0x20;
          uVar31 = uVar31 + 0x10;
          *puVar19 = 0x80;
          puVar19 = puVar19 + 10;
          uVar25 = uVar25 - 1;
        } while (uVar25 != 0);
      }
      do {
        FUN_14006d500(puVar17,&local_6c8,param_5);
        FUN_1400750c0(&local_648,param_1,param_5);
        if (uVar1 != 0) {
          uVar25 = (ulonglong)uVar1;
          ppuVar15 = &local_640;
          uVar31 = uVar27;
          do {
            plVar26 = (longlong *)((longlong)auStack_740 + (uVar31 - 8));
            *plVar26 = *plVar26 + 0x800;
            *ppuVar15 = *ppuVar15 + 0x800;
            uVar7 = *(undefined8 *)((longlong)auStack_740 + (uVar31 - 8));
            *(int *)((longlong)auStack_740 + uVar31) =
                 *(int *)((longlong)auStack_740 + uVar31) + -0x20;
            ppuVar15[-1] = ppuVar15[-1] + 0x800;
            *(undefined8 *)((longlong)local_6c0 + (uVar31 - 8)) = uVar7;
            puVar8 = *ppuVar15;
            *(undefined4 *)((longlong)local_6c0 + uVar31) = 0x20;
            uVar31 = uVar31 + 0x10;
            *(undefined4 *)(ppuVar15 + 1) = 0x80;
            uVar14 = *(undefined4 *)(puVar8 + -0xc);
            uVar10 = *(undefined4 *)(puVar8 + -8);
            uVar11 = *(undefined4 *)(puVar8 + -4);
            *(undefined4 *)(ppuVar15 + 2) = *(undefined4 *)(puVar8 + -0x10);
            *(undefined4 *)((longlong)ppuVar15 + 0x14) = uVar14;
            *(undefined4 *)(ppuVar15 + 3) = uVar10;
            *(undefined4 *)((longlong)ppuVar15 + 0x1c) = uVar11;
            uVar25 = uVar25 - 1;
            ppuVar15 = ppuVar15 + 5;
          } while (uVar25 != 0);
        }
        iVar13 = iVar13 + 0x800;
        uVar21 = uVar21 - 0x20;
        uVar23 = local_784;
        uVar22 = local_798;
      } while (0x20 < uVar21);
    }
    local_788 = iVar13;
    puVar17 = local_778;
    FUN_14006d500(local_778,&local_748,param_5);
    _guard_xfg_dispatch_icall_nop(&local_508,0,0x400);
    if (uVar1 != 0) {
      lVar32 = 0;
      puVar24 = &local_508;
      local_790 = (longlong *)0x0;
      do {
        if ((int)uVar27 == uVar1 - 1) {
          uVar23 = local_798;
        }
        uVar22 = ((uVar23 + *(int *)((longlong)auStack_740 + lVar32) * -0x40) - local_788) - 0x33;
        _guard_xfg_dispatch_icall_nop
                  (puVar24,(void *)((ulonglong)
                                    (uint)(*(int *)((longlong)auStack_740 + lVar32) * 0x40) +
                                   *(longlong *)((longlong)auStack_740 + lVar32 + -8)),
                   (ulonglong)uVar22);
        uVar23 = uVar23 * 8 + 0x268;
        uVar23 = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                 uVar23 * 0x1000000;
        *(undefined1 *)((longlong)local_790 + (longlong)&local_508 + (ulonglong)uVar22) = 0x80;
        if (uVar22 < 0x38) {
          *(uint *)((longlong)auStack_4cc + (longlong)local_790) = uVar23;
          uVar14 = 1;
        }
        else {
          *(uint *)((longlong)auStack_48c + (longlong)local_790) = uVar23;
          uVar14 = 2;
        }
        local_790 = local_790 + 0x10;
        *(undefined4 *)((longlong)local_6c0 + lVar32) = uVar14;
        uVar21 = (int)uVar27 + 1;
        uVar27 = (ulonglong)uVar21;
        *(undefined8 **)((longlong)local_6c0 + lVar32 + -8) = puVar24;
        puVar24 = puVar24 + 0x10;
        lVar32 = lVar32 + 0x10;
        puVar17 = local_778;
        param_1 = local_780;
        uVar23 = local_784;
        uVar22 = local_798;
      } while (uVar21 < uVar1);
    }
    FUN_14006d500(puVar17,&local_6c8,param_5);
    _guard_xfg_dispatch_icall_nop(&local_508,0,0x400);
    if (uVar1 != 0) {
      uVar21 = param_1[0x58];
      puVar19 = local_6c0;
      uVar2 = param_1[0x55];
      uVar3 = param_1[0x56];
      puVar24 = &local_508;
      uVar30 = param_1[0x57];
      local_790 = (longlong *)CONCAT44(local_790._4_4_,uVar21);
      uVar4 = param_1[0x59];
      uVar27 = (ulonglong)uVar1;
      puVar29 = (uint *)(puVar17 + 0x40);
      puVar20 = (uint *)((longlong)&local_508 + 4);
      do {
        uVar22 = puVar29[-0x10];
        *(undefined8 **)(puVar19 + -2) = puVar24;
        puVar24 = puVar24 + 0x10;
        puVar29[-0x10] = uVar2;
        *(undefined1 *)(puVar20 + 4) = 0x80;
        puVar20[0xe] = 0xa0020000;
        *puVar19 = 1;
        puVar19 = puVar19 + 4;
        puVar20[-1] = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                      uVar22 << 0x18;
        uVar22 = puVar29[-8];
        puVar29[-8] = uVar3;
        *puVar20 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                   uVar22 << 0x18;
        uVar22 = *puVar29;
        *puVar29 = uVar30;
        puVar20[1] = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                     uVar22 << 0x18;
        uVar22 = puVar29[8];
        puVar29[8] = uVar21;
        puVar20[2] = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                     uVar22 << 0x18;
        uVar22 = puVar29[0x10];
        puVar29[0x10] = uVar4;
        puVar20[3] = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                     uVar22 << 0x18;
        uVar27 = uVar27 - 1;
        puVar29 = puVar29 + 1;
        puVar20 = puVar20 + 0x20;
        param_1 = local_780;
        uVar22 = local_798;
      } while (uVar27 != 0);
    }
    FUN_14006d500(puVar17,&local_6c8,param_5);
    uVar31 = 0;
    local_798 = 0;
    uVar27 = uVar31;
    if (uVar1 != 0) {
      plVar26 = &local_648;
      local_780 = (uint *)(puVar17 + 0x40);
      do {
        puVar17 = local_768;
        if ((int)uVar31 == uVar1 - 1) {
          uVar23 = uVar22;
        }
        local_790 = plVar26;
        _guard_xfg_dispatch_icall_nop
                  ((void *)plVar26[1],(void *)*plVar26,(ulonglong)(uVar23 - local_788));
        *plVar26 = plVar26[1];
        puVar29 = (uint *)(local_768 + (uVar23 + 0x15));
        uVar21 = local_780[-0x10];
        *puVar29 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                   uVar21 << 0x18;
        uVar21 = local_780[-8];
        puVar29[1] = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                     uVar21 << 0x18;
        uVar21 = *local_780;
        puVar29[2] = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                     uVar21 << 0x18;
        uVar21 = local_780[8];
        puVar29[3] = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                     uVar21 << 0x18;
        uVar21 = local_780[0x10];
        local_780 = local_780 + 1;
        puVar29[4] = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                     uVar21 << 0x18;
        iVar9 = -(uVar23 + 0x14 & 0xf);
        iVar13 = iVar9 + 0xf;
        uVar31 = (ulonglong)(iVar9 + 0x10);
        local_768 = (undefined1 *)((longlong)(puVar29 + 5) + uVar31);
        puVar29 = puVar29 + 5;
        for (; uVar31 != 0; uVar31 = uVar31 - 1) {
          *(char *)puVar29 = (char)iVar13;
          puVar29 = (uint *)((longlong)puVar29 + 1);
        }
        iVar13 = uVar23 + 0x14 + iVar13;
        *(uint *)(local_790 + 2) = (uint)((iVar13 + 1) - local_788) >> 4;
        plVar26 = local_790 + 5;
        *puVar17 = (char)param_1[0x76];
        puVar17[1] = *(undefined1 *)((longlong)param_1 + 0x1d9);
        puVar17[2] = *(undefined1 *)((longlong)param_1 + 0x1da);
        puVar17[3] = (char)((uint)(iVar13 + 0x11) >> 8);
        puVar17[4] = (char)(iVar13 + 0x11);
        local_798 = local_798 + 1;
        uVar31 = (ulonglong)local_798;
        uVar27 = uVar27 + (iVar13 + 0x16);
        puVar17 = local_778;
        uVar23 = local_784;
        local_790 = plVar26;
      } while (local_798 < uVar1);
    }
    FUN_1400750c0(&local_648,param_1,param_5);
    FUN_14004ff40(&local_508,0x400);
    FUN_14004ff40(puVar17,0xa0);
  }
  return uVar27;
}



// FUNCTION 143d071d0 aesni_cbc_hmac_sha256_init_key body=289 status=ok
// SIG undefined aesni_cbc_hmac_sha256_init_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint aesni_cbc_hmac_sha256_init_key
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  
  lVar4 = FTcpDeserializedMessage::GetMessage();
  iVar2 = UVariantSet::GetNumVariants(param_1);
  if (param_4 == 0) {
    uVar3 = FUN_140062030(param_2,iVar2 << 3,lVar4);
  }
  else {
    uVar3 = FUN_1400620a0();
  }
  puVar1 = (undefined8 *)(lVar4 + 0xf4);
  SHA256_Init(puVar1);
  *(undefined8 *)(lVar4 + 0x164) = *puVar1;
  *(undefined8 *)(lVar4 + 0x16c) = *(undefined8 *)(lVar4 + 0xfc);
  *(undefined8 *)(lVar4 + 0x248) = 0xffffffffffffffff;
  *(undefined8 *)(lVar4 + 0x174) = *(undefined8 *)(lVar4 + 0x104);
  *(undefined8 *)(lVar4 + 0x17c) = *(undefined8 *)(lVar4 + 0x10c);
  *(undefined8 *)(lVar4 + 0x184) = *(undefined8 *)(lVar4 + 0x114);
  *(undefined8 *)(lVar4 + 0x18c) = *(undefined8 *)(lVar4 + 0x11c);
  *(undefined8 *)(lVar4 + 0x194) = *(undefined8 *)(lVar4 + 0x124);
  *(undefined8 *)(lVar4 + 0x19c) = *(undefined8 *)(lVar4 + 300);
  *(undefined8 *)(lVar4 + 0x1a4) = *(undefined8 *)(lVar4 + 0x134);
  *(undefined8 *)(lVar4 + 0x1ac) = *(undefined8 *)(lVar4 + 0x13c);
  *(undefined8 *)(lVar4 + 0x1b4) = *(undefined8 *)(lVar4 + 0x144);
  *(undefined8 *)(lVar4 + 0x1bc) = *(undefined8 *)(lVar4 + 0x14c);
  *(undefined8 *)(lVar4 + 0x1c4) = *(undefined8 *)(lVar4 + 0x154);
  *(undefined8 *)(lVar4 + 0x1cc) = *(undefined8 *)(lVar4 + 0x15c);
  *(undefined8 *)(lVar4 + 0x1d4) = *puVar1;
  *(undefined8 *)(lVar4 + 0x1dc) = *(undefined8 *)(lVar4 + 0xfc);
  *(undefined8 *)(lVar4 + 0x1e4) = *(undefined8 *)(lVar4 + 0x104);
  *(undefined8 *)(lVar4 + 0x1ec) = *(undefined8 *)(lVar4 + 0x10c);
  *(undefined8 *)(lVar4 + 500) = *(undefined8 *)(lVar4 + 0x114);
  *(undefined8 *)(lVar4 + 0x1fc) = *(undefined8 *)(lVar4 + 0x11c);
  *(undefined8 *)(lVar4 + 0x204) = *(undefined8 *)(lVar4 + 0x124);
  *(undefined8 *)(lVar4 + 0x20c) = *(undefined8 *)(lVar4 + 300);
  *(undefined8 *)(lVar4 + 0x214) = *(undefined8 *)(lVar4 + 0x134);
  *(undefined8 *)(lVar4 + 0x21c) = *(undefined8 *)(lVar4 + 0x13c);
  *(undefined8 *)(lVar4 + 0x224) = *(undefined8 *)(lVar4 + 0x144);
  *(undefined8 *)(lVar4 + 0x22c) = *(undefined8 *)(lVar4 + 0x14c);
  *(undefined8 *)(lVar4 + 0x234) = *(undefined8 *)(lVar4 + 0x154);
  *(undefined8 *)(lVar4 + 0x23c) = *(undefined8 *)(lVar4 + 0x15c);
  return ~uVar3 >> 0x1f;
}



// FUNCTION 143d07300 aesni_cbc_hmac_sha256_cipher body=2166 status=ok
// SIG undefined aesni_cbc_hmac_sha256_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint aesni_cbc_hmac_sha256_cipher
               (undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  char *pcVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  ulonglong local_110;
  longlong local_108;
  ulonglong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  uint local_d8;
  longlong local_d0;
  longlong local_c8;
  uint local_80 [10];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x143d07317;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_f0 = param_3;
  local_e8 = param_1;
  lVar4 = FTcpDeserializedMessage::GetMessage();
  uVar7 = 0;
  local_f8 = 0;
  uVar8 = 0;
  uVar12 = (ulonglong)(0x40 - *(int *)(lVar4 + 0x23c));
  uVar18 = *(ulonglong *)(lVar4 + 0x248);
  *(undefined8 *)(lVar4 + 0x248) = 0xffffffffffffffff;
  if ((param_4 & 0xf) == 0) {
    iVar2 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
    lVar9 = local_f0;
    if (iVar2 != 0) {
      uVar10 = uVar7;
      uVar16 = param_4;
      if (uVar18 != 0xffffffffffffffff) {
        if (param_4 != (uVar18 + 0x30 & 0xfffffffffffffff0)) {
          return 0;
        }
        uVar16 = uVar18;
        local_f8 = uVar7;
        if (0x301 < *(uint *)(lVar4 + 0x250)) {
          local_f8 = 0x10;
          uVar10 = local_f8;
        }
      }
      uVar18 = uVar7;
      if (((((_DAT_146bcd588 & 0x20000000) != 0) ||
           (((DAT_146bcd584 >> 0x1c & 1) != 0 &&
            ((DAT_146bcd580 & 0x40000000) != 0 || (DAT_146bcd584 & 0x800) != 0)))) &&
          (uVar10 + uVar12 < uVar16)) && (local_e0 = (uVar16 - uVar12) - uVar10 >> 6, local_e0 != 0)
         ) {
        sha256_update(lVar4 + 0x1d4U,local_f0 + uVar10,uVar12);
        lVar9 = lVar9 + uVar12 + local_f8;
        local_118 = IMessageToken::ToText(local_e8);
        uVar18 = local_e0;
        local_110 = lVar4 + 0x1d4U;
        local_108 = lVar9;
        FUN_140076b40(local_f0,param_2,local_e0,lVar4);
        uVar7 = uVar18 * 0x40;
        iVar2 = (int)((uVar18 & 0x3ffffffffffffff) >> 0x17) + *(int *)(lVar4 + 0x1f8);
        *(int *)(lVar4 + 0x1f8) = iVar2;
        uVar8 = (uint)(uVar18 << 9);
        *(int *)(lVar4 + 500) = *(int *)(lVar4 + 500) + uVar8;
        uVar10 = local_f8;
        uVar18 = uVar12 + uVar7;
        if (*(uint *)(lVar4 + 500) < uVar8) {
          *(int *)(lVar4 + 0x1f8) = iVar2 + 1;
        }
      }
      lVar9 = local_f0;
      puVar17 = (undefined8 *)(lVar4 + 0x1d4);
      sha256_update(puVar17,local_f0 + uVar18 + uVar10,uVar16 - (uVar18 + uVar10));
      if (uVar16 != param_4) {
        if (lVar9 != param_2) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(param_2 + uVar7),(void *)(lVar9 + uVar7),uVar16 - uVar7);
        }
        lVar9 = param_2 + uVar16;
        SHA256_Final(lVar9,puVar17);
        *puVar17 = *(undefined8 *)(lVar4 + 0x164);
        *(undefined8 *)(lVar4 + 0x1dc) = *(undefined8 *)(lVar4 + 0x16c);
        *(undefined8 *)(lVar4 + 0x1e4) = *(undefined8 *)(lVar4 + 0x174);
        *(undefined8 *)(lVar4 + 0x1ec) = *(undefined8 *)(lVar4 + 0x17c);
        *(undefined8 *)(lVar4 + 500) = *(undefined8 *)(lVar4 + 0x184);
        *(undefined8 *)(lVar4 + 0x1fc) = *(undefined8 *)(lVar4 + 0x18c);
        *(undefined8 *)(lVar4 + 0x204) = *(undefined8 *)(lVar4 + 0x194);
        *(undefined8 *)(lVar4 + 0x20c) = *(undefined8 *)(lVar4 + 0x19c);
        *(undefined8 *)(lVar4 + 0x214) = *(undefined8 *)(lVar4 + 0x1a4);
        *(undefined8 *)(lVar4 + 0x21c) = *(undefined8 *)(lVar4 + 0x1ac);
        *(undefined4 *)(lVar4 + 0x224) = *(undefined4 *)(lVar4 + 0x1b4);
        *(undefined4 *)(lVar4 + 0x228) = *(undefined4 *)(lVar4 + 0x1b8);
        *(undefined4 *)(lVar4 + 0x22c) = *(undefined4 *)(lVar4 + 0x1bc);
        *(undefined4 *)(lVar4 + 0x230) = *(undefined4 *)(lVar4 + 0x1c0);
        *(undefined4 *)(lVar4 + 0x234) = *(undefined4 *)(lVar4 + 0x1c4);
        *(undefined4 *)(lVar4 + 0x238) = *(undefined4 *)(lVar4 + 0x1c8);
        *(undefined4 *)(lVar4 + 0x23c) = *(undefined4 *)(lVar4 + 0x1cc);
        *(undefined4 *)(lVar4 + 0x240) = *(undefined4 *)(lVar4 + 0x1d0);
        sha256_update(puVar17,lVar9,0x20);
        SHA256_Final(lVar9,puVar17);
        uVar16 = uVar16 + 0x20;
        lVar9 = param_2;
        if (uVar16 < param_4) {
          pcVar11 = (char *)(param_2 + uVar16);
          for (lVar5 = param_4 - uVar16; lVar5 != 0; lVar5 = lVar5 + -1) {
            *pcVar11 = ((char)param_4 - (char)uVar16) + -1;
            pcVar11 = pcVar11 + 1;
          }
        }
      }
      local_118 = IMessageToken::ToText(local_e8);
      local_110 = CONCAT44(local_110._4_4_,1);
      FUN_1400615f0(lVar9 + uVar7,param_2 + uVar7,param_4 - uVar7,lVar4);
      return 1;
    }
    local_118 = IMessageToken::ToText(local_e8);
    local_110 = local_110 & 0xffffffff00000000;
    FUN_1400615f0(local_f0,param_2,param_4,lVar4);
    if (uVar18 == 0xffffffffffffffff) {
      sha256_update(lVar4 + 0x1d4,param_2,param_4);
      return 1;
    }
    uVar12 = 0x10;
    if (CONCAT11(*(undefined1 *)(uVar18 + 0x24c + lVar4),*(undefined1 *)(uVar18 + 0x24d + lVar4)) <
        0x302) {
      uVar12 = uVar7;
    }
    if (uVar12 + 0x21 <= param_4) {
      lVar9 = param_4 - uVar12;
      param_2 = param_2 + uVar12;
      bVar6 = *(byte *)(lVar9 + -1 + param_2);
      uVar3 = (int)lVar9 - 0x21;
      local_d8 = 0xff - uVar3 >> 0x18 | uVar3 & 0xff;
      uVar3 = 0xffffffff - ((int)(local_d8 - bVar6 | local_d8 ^ bVar6) >> 0x1f);
      local_f0 = CONCAT44(local_f0._4_4_,uVar3);
      uVar3 = ~uVar3 & local_d8 | uVar3 & bVar6;
      local_e8 = CONCAT44(local_e8._4_4_,uVar3);
      uVar12 = lVar9 - (ulonglong)(uVar3 + 0x21);
      *(char *)(uVar18 + 0x24f + lVar4) = (char)uVar12;
      *(char *)(uVar18 + 0x24e + lVar4) = (char)(uVar12 >> 8);
      *(undefined8 *)(lVar4 + 0x1d4) = *(undefined8 *)(lVar4 + 0xf4);
      *(undefined8 *)(lVar4 + 0x1dc) = *(undefined8 *)(lVar4 + 0xfc);
      *(undefined8 *)(lVar4 + 0x1e4) = *(undefined8 *)(lVar4 + 0x104);
      *(undefined8 *)(lVar4 + 0x1ec) = *(undefined8 *)(lVar4 + 0x10c);
      *(undefined8 *)(lVar4 + 500) = *(undefined8 *)(lVar4 + 0x114);
      *(undefined8 *)(lVar4 + 0x1fc) = *(undefined8 *)(lVar4 + 0x11c);
      *(undefined8 *)(lVar4 + 0x204) = *(undefined8 *)(lVar4 + 0x124);
      *(undefined8 *)(lVar4 + 0x20c) = *(undefined8 *)(lVar4 + 300);
      *(undefined8 *)(lVar4 + 0x214) = *(undefined8 *)(lVar4 + 0x134);
      *(undefined8 *)(lVar4 + 0x21c) = *(undefined8 *)(lVar4 + 0x13c);
      *(undefined4 *)(lVar4 + 0x224) = *(undefined4 *)(lVar4 + 0x144);
      *(undefined4 *)(lVar4 + 0x228) = *(undefined4 *)(lVar4 + 0x148);
      *(undefined4 *)(lVar4 + 0x22c) = *(undefined4 *)(lVar4 + 0x14c);
      *(undefined4 *)(lVar4 + 0x230) = *(undefined4 *)(lVar4 + 0x150);
      *(undefined4 *)(lVar4 + 0x234) = *(undefined4 *)(lVar4 + 0x154);
      *(undefined4 *)(lVar4 + 0x238) = *(undefined4 *)(lVar4 + 0x158);
      *(undefined4 *)(lVar4 + 0x23c) = *(undefined4 *)(lVar4 + 0x15c);
      *(undefined4 *)(lVar4 + 0x240) = *(undefined4 *)(lVar4 + 0x160);
      local_f8 = uVar12;
      local_d0 = param_2;
      sha256_update((undefined8 *)(lVar4 + 0x1d4),lVar4 + 0x250,uVar18);
      uVar18 = lVar9 - 0x20;
      if (0x13f < uVar18) {
        lVar9 = (ulonglong)(0x40 - *(int *)(lVar4 + 0x23c)) + (lVar9 - 0x160U & 0xffffffffffffffc0);
        sha256_update(lVar4 + 0x1d4,param_2,lVar9);
        param_2 = param_2 + lVar9;
        uVar18 = uVar18 - lVar9;
        uVar12 = local_f8 - lVar9;
        local_f8 = uVar12;
        local_d0 = param_2;
      }
      uVar3 = *(uint *)(lVar4 + 0x23c);
      uVar15 = (int)uVar12 * 8 + *(int *)(lVar4 + 500);
      local_80[0] = 0;
      local_80[1] = 0;
      local_80[2] = 0;
      local_80[3] = 0;
      local_80[4] = 0;
      local_80[5] = 0;
      local_80[6] = 0;
      local_80[7] = 0;
      uVar15 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
               uVar15 * 0x1000000;
      uVar10 = (ulonglong)uVar15;
      uVar16 = uVar7;
      local_e0 = uVar10;
      if (uVar18 != 0) {
        local_c8 = param_2 + uVar12;
        lVar9 = -uVar12;
        do {
          bVar6 = (byte)((ulonglong)lVar9 >> 0x38);
          uVar15 = uVar3 + 1;
          *(byte *)((ulonglong)uVar3 + 0x1fc + lVar4) =
               ~((byte)(uVar12 - uVar16 >> 0x38) | bVar6) & 0x80 |
               *(byte *)(local_c8 + lVar9) & bVar6;
          uVar3 = uVar15;
          if (uVar15 == 0x40) {
            uVar3 = (uint)((uVar12 - uVar16) + 7 >> 0x20);
            *(uint *)(lVar4 + 0x238) = *(uint *)(lVar4 + 0x238) | (int)uVar3 >> 0x1f & (uint)uVar10;
            FUN_1400501c0(lVar4 + 0x1d4,lVar4 + 0x1fc,1);
            uVar3 = (int)(uVar3 & (uint)((ulonglong)(lVar9 + -0x48) >> 0x20)) >> 0x1f;
            local_80[0] = local_80[0] | *(uint *)(lVar4 + 0x1d4) & uVar3;
            local_80[1] = local_80[1] | *(uint *)(lVar4 + 0x1d8) & uVar3;
            local_80[2] = local_80[2] | *(uint *)(lVar4 + 0x1dc) & uVar3;
            local_80[3] = local_80[3] | *(uint *)(lVar4 + 0x1e0) & uVar3;
            local_80[4] = local_80[4] | *(uint *)(lVar4 + 0x1e4) & uVar3;
            local_80[5] = local_80[5] | *(uint *)(lVar4 + 0x1e8) & uVar3;
            local_80[6] = local_80[6] | *(uint *)(lVar4 + 0x1ec) & uVar3;
            local_80[7] = local_80[7] | *(uint *)(lVar4 + 0x1f0) & uVar3;
            uVar10 = local_e0;
            uVar3 = uVar8;
          }
          uVar15 = (uint)uVar10;
          uVar16 = uVar16 + 1;
          lVar9 = lVar9 + 1;
          uVar12 = local_f8;
          param_2 = local_d0;
        } while (uVar16 < uVar18);
      }
      puVar17 = (undefined8 *)(lVar4 + 0x1fc);
      uVar12 = (ulonglong)uVar3;
      if (uVar12 < 0x40) {
        lVar9 = 0x40 - uVar12;
        uVar16 = uVar16 + lVar9;
        puVar13 = (undefined1 *)(uVar12 + (longlong)puVar17);
        for (; lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
        }
      }
      if (0x38 < uVar3) {
        uVar3 = (uint)((local_f8 - uVar16) + 8 >> 0x20);
        *(uint *)(lVar4 + 0x238) = *(uint *)(lVar4 + 0x238) | (int)uVar3 >> 0x1f & uVar15;
        FUN_1400501c0(lVar4 + 0x1d4,puVar17,1);
        uVar3 = (int)(uVar3 & (uint)((uVar16 - local_f8) + -0x49 >> 0x20)) >> 0x1f;
        local_80[0] = local_80[0] | *(uint *)(lVar4 + 0x1d4) & uVar3;
        local_80[1] = local_80[1] | *(uint *)(lVar4 + 0x1d8) & uVar3;
        local_80[2] = local_80[2] | *(uint *)(lVar4 + 0x1dc) & uVar3;
        local_80[3] = local_80[3] | *(uint *)(lVar4 + 0x1e0) & uVar3;
        local_80[4] = local_80[4] | *(uint *)(lVar4 + 0x1e4) & uVar3;
        local_80[5] = local_80[5] | *(uint *)(lVar4 + 0x1e8) & uVar3;
        local_80[6] = local_80[6] | *(uint *)(lVar4 + 0x1ec) & uVar3;
        local_80[7] = local_80[7] | *(uint *)(lVar4 + 0x1f0) & uVar3;
        *puVar17 = 0;
        uVar16 = uVar16 + 0x40;
        *(undefined8 *)(lVar4 + 0x204) = 0;
        *(undefined8 *)(lVar4 + 0x20c) = 0;
        *(undefined8 *)(lVar4 + 0x214) = 0;
        *(undefined8 *)(lVar4 + 0x21c) = 0;
        *(undefined8 *)(lVar4 + 0x224) = 0;
        *(undefined8 *)(lVar4 + 0x22c) = 0;
        *(undefined8 *)(lVar4 + 0x234) = 0;
      }
      puVar1 = (uint *)(lVar4 + 0x1d4);
      *(int *)(lVar4 + 0x238) = (int)local_e0;
      FUN_1400501c0(puVar1,puVar17,1);
      uVar12 = local_f8;
      uVar3 = (uint)((longlong)((uVar16 - local_f8) + -0x49) >> 0x3f);
      local_80[0] = uVar3 & *puVar1 | local_80[0];
      local_80[1] = *(uint *)(lVar4 + 0x1d8) & uVar3 | local_80[1];
      local_80[1] = local_80[1] >> 0x18 | (local_80[1] & 0xff0000) >> 8 |
                    (local_80[1] & 0xff00) << 8 | local_80[1] << 0x18;
      local_80[0] = local_80[0] >> 0x18 | (local_80[0] & 0xff0000) >> 8 |
                    (local_80[0] & 0xff00) << 8 | local_80[0] << 0x18;
      local_80[2] = *(uint *)(lVar4 + 0x1dc) & uVar3 | local_80[2];
      local_80[3] = *(uint *)(lVar4 + 0x1e0) & uVar3 | local_80[3];
      local_80[3] = local_80[3] >> 0x18 | (local_80[3] & 0xff0000) >> 8 |
                    (local_80[3] & 0xff00) << 8 | local_80[3] << 0x18;
      local_80[2] = local_80[2] >> 0x18 | (local_80[2] & 0xff0000) >> 8 |
                    (local_80[2] & 0xff00) << 8 | local_80[2] << 0x18;
      local_80[4] = *(uint *)(lVar4 + 0x1e4) & uVar3 | local_80[4];
      local_80[5] = *(uint *)(lVar4 + 0x1e8) & uVar3 | local_80[5];
      local_80[5] = local_80[5] >> 0x18 | (local_80[5] & 0xff0000) >> 8 |
                    (local_80[5] & 0xff00) << 8 | local_80[5] << 0x18;
      local_80[4] = local_80[4] >> 0x18 | (local_80[4] & 0xff0000) >> 8 |
                    (local_80[4] & 0xff00) << 8 | local_80[4] << 0x18;
      local_80[6] = *(uint *)(lVar4 + 0x1ec) & uVar3 | local_80[6];
      *(undefined8 *)puVar1 = *(undefined8 *)(lVar4 + 0x164);
      *(undefined8 *)(lVar4 + 0x1dc) = *(undefined8 *)(lVar4 + 0x16c);
      local_80[7] = *(uint *)(lVar4 + 0x1f0) & uVar3 | local_80[7];
      *(undefined8 *)(lVar4 + 0x1e4) = *(undefined8 *)(lVar4 + 0x174);
      *(undefined8 *)(lVar4 + 0x1ec) = *(undefined8 *)(lVar4 + 0x17c);
      local_80[7] = local_80[7] >> 0x18 | (local_80[7] & 0xff0000) >> 8 |
                    (local_80[7] & 0xff00) << 8 | local_80[7] << 0x18;
      local_80[6] = local_80[6] >> 0x18 | (local_80[6] & 0xff0000) >> 8 |
                    (local_80[6] & 0xff00) << 8 | local_80[6] << 0x18;
      *(undefined8 *)(lVar4 + 500) = *(undefined8 *)(lVar4 + 0x184);
      *(undefined8 *)(lVar4 + 0x1fc) = *(undefined8 *)(lVar4 + 0x18c);
      *(undefined8 *)(lVar4 + 0x204) = *(undefined8 *)(lVar4 + 0x194);
      *(undefined8 *)(lVar4 + 0x20c) = *(undefined8 *)(lVar4 + 0x19c);
      *(undefined8 *)(lVar4 + 0x214) = *(undefined8 *)(lVar4 + 0x1a4);
      *(undefined8 *)(lVar4 + 0x21c) = *(undefined8 *)(lVar4 + 0x1ac);
      *(undefined4 *)(lVar4 + 0x224) = *(undefined4 *)(lVar4 + 0x1b4);
      *(undefined4 *)(lVar4 + 0x228) = *(undefined4 *)(lVar4 + 0x1b8);
      *(undefined4 *)(lVar4 + 0x22c) = *(undefined4 *)(lVar4 + 0x1bc);
      *(undefined4 *)(lVar4 + 0x230) = *(undefined4 *)(lVar4 + 0x1c0);
      *(undefined4 *)(lVar4 + 0x234) = *(undefined4 *)(lVar4 + 0x1c4);
      *(undefined4 *)(lVar4 + 0x238) = *(undefined4 *)(lVar4 + 0x1c8);
      *(undefined4 *)(lVar4 + 0x23c) = *(undefined4 *)(lVar4 + 0x1cc);
      *(undefined4 *)(lVar4 + 0x240) = *(undefined4 *)(lVar4 + 0x1d0);
      sha256_update(puVar1,local_80,0x20);
      SHA256_Final(local_80,puVar1);
      param_2 = param_2 + uVar12;
      lVar4 = param_2 + -1 + ((uVar18 - local_d8) - uVar12);
      iVar2 = (int)param_2 - (int)lVar4;
      if (local_d8 + 0x20 != 0) {
        uVar18 = uVar7;
        uVar12 = uVar7;
        do {
          bVar6 = *(byte *)(lVar4 + uVar18);
          iVar14 = (int)uVar18;
          uVar8 = (iVar14 - iVar2) - 0x20;
          uVar18 = uVar18 + 1;
          uVar3 = (int)(uVar8 & (iVar2 - iVar14) - 1U) >> 0x1f;
          uVar8 = (uint)uVar7 | (bVar6 ^ (uint)local_e8) & ~((int)uVar8 >> 0x1f) |
                  (*(byte *)(uVar12 + (longlong)local_80) ^ bVar6) & uVar3;
          uVar7 = (ulonglong)uVar8;
          uVar12 = uVar12 + (uVar3 & 1);
        } while (uVar18 < local_d8 + 0x20);
      }
      return 0xffffffffU - ((int)-uVar8 >> 0x1f) & (uint)local_f0 & 1;
    }
  }
  return 0;
}



// FUNCTION 143d07b80 aesni_cbc_hmac_sha256_ctrl body=1257 status=ok
// SIG undefined aesni_cbc_hmac_sha256_ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong aesni_cbc_hmac_sha256_ctrl
                    (undefined8 param_1,int param_2,uint param_3,undefined8 *param_4)

{
  longlong lVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong *puVar11;
  uint uVar12;
  undefined1 auStack_b8 [32];
  uint local_98;
  ulonglong local_88 [9];
  undefined8 uStack_40;
  
  uStack_40 = 0x143d07b9d;
  local_88[8] = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  lVar4 = FTcpDeserializedMessage::GetMessage();
  if (param_2 == 0x16) {
    if (param_3 == 0xd) {
      uVar9 = (uint)CONCAT11(*(undefined1 *)((longlong)param_4 + 0xb),
                             *(undefined1 *)((longlong)param_4 + 0xc));
      iVar3 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
      if (iVar3 == 0) {
        *(undefined8 *)(lVar4 + 0x250) = *param_4;
        *(undefined4 *)(lVar4 + 600) = *(undefined4 *)(param_4 + 1);
        *(undefined1 *)(lVar4 + 0x25c) = *(undefined1 *)((longlong)param_4 + 0xc);
        *(undefined8 *)(lVar4 + 0x248) = 0xd;
        return 0x20;
      }
      *(ulonglong *)(lVar4 + 0x248) = (ulonglong)uVar9;
      uVar12 = (uint)CONCAT11(*(undefined1 *)((longlong)param_4 + 9),
                              *(undefined1 *)((longlong)param_4 + 10));
      *(uint *)(lVar4 + 0x250) = uVar12;
      if (0x301 < uVar12) {
        if (uVar9 < 0x10) {
          return 0;
        }
        uVar9 = uVar9 - 0x10;
        *(char *)((longlong)param_4 + 0xc) = (char)uVar9;
        *(char *)((longlong)param_4 + 0xb) = (char)(uVar9 >> 8);
      }
      *(undefined8 *)(lVar4 + 0x1d4) = *(undefined8 *)(lVar4 + 0xf4);
      *(undefined8 *)(lVar4 + 0x1dc) = *(undefined8 *)(lVar4 + 0xfc);
      *(undefined8 *)(lVar4 + 0x1e4) = *(undefined8 *)(lVar4 + 0x104);
      *(undefined8 *)(lVar4 + 0x1ec) = *(undefined8 *)(lVar4 + 0x10c);
      *(undefined8 *)(lVar4 + 500) = *(undefined8 *)(lVar4 + 0x114);
      *(undefined8 *)(lVar4 + 0x1fc) = *(undefined8 *)(lVar4 + 0x11c);
      *(undefined8 *)(lVar4 + 0x204) = *(undefined8 *)(lVar4 + 0x124);
      *(undefined8 *)(lVar4 + 0x20c) = *(undefined8 *)(lVar4 + 300);
      *(undefined8 *)(lVar4 + 0x214) = *(undefined8 *)(lVar4 + 0x134);
      *(undefined8 *)(lVar4 + 0x21c) = *(undefined8 *)(lVar4 + 0x13c);
      *(undefined8 *)(lVar4 + 0x224) = *(undefined8 *)(lVar4 + 0x144);
      *(undefined8 *)(lVar4 + 0x22c) = *(undefined8 *)(lVar4 + 0x14c);
      *(undefined8 *)(lVar4 + 0x234) = *(undefined8 *)(lVar4 + 0x154);
      *(undefined8 *)(lVar4 + 0x23c) = *(undefined8 *)(lVar4 + 0x15c);
      sha256_update((undefined8 *)(lVar4 + 0x1d4),param_4,0xd);
      return (ulonglong)((uVar9 + 0x30 & 0xfffffff0) - uVar9);
    }
  }
  else if (param_2 == 0x17) {
    local_88[0] = 0;
    local_88[1] = 0;
    local_88[2] = 0;
    local_88[3] = 0;
    local_88[4] = 0;
    local_88[5] = 0;
    local_88[6] = 0;
    local_88[7] = 0;
    if (-1 < (int)param_3) {
      if (param_3 < 0x41) {
        _guard_xfg_dispatch_icall_nop(local_88,param_4,(longlong)(int)param_3);
      }
      else {
        SHA256_Init(lVar4 + 0xf4);
        sha256_update(lVar4 + 0xf4,param_4,(longlong)(int)param_3);
        SHA256_Final(local_88,lVar4 + 0xf4);
      }
      local_88[0] = local_88[0] ^ 0x3636363636363636;
      local_88[1] = local_88[1] ^ 0x3636363636363636;
      local_88[2] = local_88[2] ^ 0x3636363636363636;
      local_88[3] = local_88[3] ^ 0x3636363636363636;
      local_88[4] = local_88[4] ^ 0x3636363636363636;
      local_88[5] = local_88[5] ^ 0x3636363636363636;
      local_88[6] = local_88[6] ^ 0x3636363636363636;
      local_88[7] = local_88[7] ^ 0x3636363636363636;
      SHA256_Init(lVar4 + 0xf4);
      sha256_update(lVar4 + 0xf4,local_88,0x40);
      lVar1 = lVar4 + 0x164;
      local_88[0] = local_88[0] ^ 0x6a6a6a6a6a6a6a6a;
      local_88[1] = local_88[1] ^ 0x6a6a6a6a6a6a6a6a;
      local_88[2] = local_88[2] ^ 0x6a6a6a6a6a6a6a6a;
      local_88[3] = local_88[3] ^ 0x6a6a6a6a6a6a6a6a;
      local_88[4] = local_88[4] ^ 0x6a6a6a6a6a6a6a6a;
      local_88[5] = local_88[5] ^ 0x6a6a6a6a6a6a6a6a;
      local_88[6] = local_88[6] ^ 0x6a6a6a6a6a6a6a6a;
      local_88[7] = local_88[7] ^ 0x6a6a6a6a6a6a6a6a;
      SHA256_Init(lVar1);
      puVar11 = local_88;
      lVar10 = 0x40;
      if ((ulonglong)*(uint *)(lVar4 + 0x1cc) != 0) {
        uVar6 = 0x40 - (ulonglong)*(uint *)(lVar4 + 0x1cc);
        uVar5 = 0x40;
        if (uVar6 < 0x41) {
          uVar5 = uVar6;
        }
        SHA256_Update(lVar1,local_88,uVar5);
        puVar11 = (ulonglong *)((longlong)local_88 + uVar5);
        lVar10 = 0x40 - uVar5;
      }
      uVar5 = (ulonglong)((uint)lVar10 & 0x3f);
      uVar6 = lVar10 - uVar5;
      if (uVar6 != 0) {
        FUN_1400501c0(lVar1,puVar11,uVar6 >> 6);
        uVar9 = (int)uVar6 * 8;
        *(int *)(lVar4 + 0x184) = *(int *)(lVar4 + 0x184) + uVar9;
        puVar11 = (ulonglong *)((longlong)puVar11 + uVar6);
        iVar3 = (int)(uVar6 >> 0x1d) + *(int *)(lVar4 + 0x188);
        *(int *)(lVar4 + 0x188) = iVar3;
        if (*(uint *)(lVar4 + 0x184) < uVar9) {
          *(int *)(lVar4 + 0x188) = iVar3 + 1;
        }
      }
      if (uVar5 != 0) {
        SHA256_Update(lVar1,puVar11,uVar5);
      }
      FUN_14004ff40(local_88,0x40);
      return 1;
    }
  }
  else if (param_2 == 0x19) {
    if ((-1 < (int)param_3) && (0x1f < param_3)) {
      uVar2 = CONCAT11(*(undefined1 *)(param_4[1] + 0xb),*(undefined1 *)(param_4[1] + 0xc));
      uVar9 = (uint)uVar2;
      iVar3 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
      if ((iVar3 != 0) &&
         (0x301 < CONCAT11(*(undefined1 *)(param_4[1] + 9),*(undefined1 *)(param_4[1] + 10)))) {
        if (uVar2 == 0) {
          uVar12 = *(uint *)(param_4 + 3) >> 2;
          if (1 < uVar12 - 1) {
            return 0xffffffff;
          }
          uVar9 = *(uint *)(param_4 + 2);
        }
        else {
          if (uVar9 < 0x1000) {
            return 0;
          }
          uVar12 = 1;
          if ((0x1fff < uVar9) && (uVar12 = 1, (DAT_146bcd588 & 0x20) != 0)) {
            uVar12 = 2;
          }
        }
        *(undefined8 *)(lVar4 + 0x1d4) = *(undefined8 *)(lVar4 + 0xf4);
        *(undefined8 *)(lVar4 + 0x1dc) = *(undefined8 *)(lVar4 + 0xfc);
        *(undefined8 *)(lVar4 + 0x1e4) = *(undefined8 *)(lVar4 + 0x104);
        *(undefined8 *)(lVar4 + 0x1ec) = *(undefined8 *)(lVar4 + 0x10c);
        *(undefined8 *)(lVar4 + 500) = *(undefined8 *)(lVar4 + 0x114);
        *(undefined8 *)(lVar4 + 0x1fc) = *(undefined8 *)(lVar4 + 0x11c);
        *(undefined8 *)(lVar4 + 0x204) = *(undefined8 *)(lVar4 + 0x124);
        *(undefined8 *)(lVar4 + 0x20c) = *(undefined8 *)(lVar4 + 300);
        *(undefined8 *)(lVar4 + 0x214) = *(undefined8 *)(lVar4 + 0x134);
        *(undefined8 *)(lVar4 + 0x21c) = *(undefined8 *)(lVar4 + 0x13c);
        *(undefined8 *)(lVar4 + 0x224) = *(undefined8 *)(lVar4 + 0x144);
        *(undefined8 *)(lVar4 + 0x22c) = *(undefined8 *)(lVar4 + 0x14c);
        *(undefined8 *)(lVar4 + 0x234) = *(undefined8 *)(lVar4 + 0x154);
        *(undefined8 *)(lVar4 + 0x23c) = *(undefined8 *)(lVar4 + 0x15c);
        sha256_update((undefined8 *)(lVar4 + 0x1d4),param_4[1],0xd);
        bVar7 = (char)uVar12 + 1;
        uVar8 = uVar9 >> (bVar7 & 0x1f);
        uVar9 = (uVar8 - (uVar8 << (bVar7 & 0x1f))) + uVar9;
        if ((uVar8 < uVar9) && ((uVar9 + 0x16 & 0x3f) < uVar12 * 4 - 1)) {
          uVar8 = uVar8 + 1;
          uVar9 = uVar9 + uVar12 * -4 + 1;
        }
        *(uint *)(param_4 + 3) = uVar12 * 4;
        iVar3 = (uVar8 + 0x30 & 0xfffffff0) + 0x15;
        return (ulonglong)
               ((((iVar3 << (bVar7 & 0x1f)) + (uVar9 + 0x30 & 0xfffffff0)) - iVar3) + 0x15);
      }
    }
  }
  else {
    if (param_2 == 0x1a) {
      local_98 = *(uint *)(param_4 + 3) >> 2;
      uVar5 = tls1_1_multi_block_encrypt(lVar4,*param_4,param_4[1],param_4[2]);
      return uVar5;
    }
    if (param_2 == 0x1c) {
      return (ulonglong)((param_3 + 0x30 & 0xfffffff0) + 0x15);
    }
  }
  return 0xffffffff;
}



// FUNCTION 143d08070 FUN_143d08070 body=90 status=ok
// SIG undefined FUN_143d08070(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined * FUN_143d08070(void)

{
  int iVar1;
  
  if ((DAT_146bcd584 & 0x2000000) != 0) {
    iVar1 = FUN_140076b40(0,0,0,0,0,0,0);
    if (iVar1 != 0) {
      return &DAT_146836db0;
    }
  }
  return (undefined *)0x0;
}



// FUNCTION 143d080d0 FUN_143d080d0 body=90 status=ok
// SIG undefined FUN_143d080d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined * FUN_143d080d0(void)

{
  int iVar1;
  
  if ((DAT_146bcd584 & 0x2000000) != 0) {
    iVar1 = FUN_140076b40(0,0,0,0,0,0,0);
    if (iVar1 != 0) {
      return &DAT_146836e10;
    }
  }
  return (undefined *)0x0;
}



// FUNCTION 143d08130 sha256_update body=188 status=ok
// SIG undefined sha256_update(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void sha256_update(longlong param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  
  if ((ulonglong)*(uint *)(param_1 + 0x68) != 0) {
    uVar2 = 0x40 - (ulonglong)*(uint *)(param_1 + 0x68);
    uVar4 = param_3;
    if (uVar2 <= param_3) {
      uVar4 = uVar2;
    }
    SHA256_Update(param_1,param_2,uVar4);
    param_2 = param_2 + uVar4;
    param_3 = param_3 - uVar4;
  }
  uVar4 = (ulonglong)((uint)param_3 & 0x3f);
  param_3 = param_3 - uVar4;
  if (param_3 != 0) {
    FUN_1400501c0(param_1,param_2,param_3 >> 6);
    uVar1 = (int)param_3 * 8;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + uVar1;
    param_2 = param_2 + param_3;
    iVar3 = (int)(param_3 >> 0x1d) + *(int *)(param_1 + 0x24);
    *(int *)(param_1 + 0x24) = iVar3;
    if (*(uint *)(param_1 + 0x20) < uVar1) {
      *(int *)(param_1 + 0x24) = iVar3 + 1;
    }
  }
  if (uVar4 != 0) {
    SHA256_Update(param_1,param_2,uVar4);
  }
  return;
}



// FUNCTION 143d081f0 tls1_1_multi_block_encrypt body=2238 status=ok
// SIG undefined tls1_1_multi_block_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong tls1_1_multi_block_encrypt
                    (uint *param_1,undefined1 *param_2,longlong param_3,uint param_4,int param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined1 **ppuVar12;
  byte bVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  longlong *plVar17;
  undefined4 *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  longlong *plVar26;
  ulonglong uVar27;
  longlong *plVar28;
  ulonglong uVar29;
  uint *puVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  undefined1 auStack_838 [32];
  uint local_818;
  undefined1 local_814;
  undefined1 local_813;
  undefined1 local_812;
  uint local_810;
  uint local_80c;
  uint local_808;
  uint local_804;
  uint local_800;
  uint local_7f8;
  undefined1 *local_7f0;
  uint *local_7e8;
  longlong local_7e0;
  ulonglong local_7d8;
  longlong *local_7d0;
  undefined1 *local_7c8;
  uint local_7c0;
  int local_7bc;
  uint local_7b8;
  longlong local_7a8;
  uint auStack_7a0 [2];
  longlong local_798 [14];
  undefined8 local_728;
  undefined4 local_720 [30];
  longlong local_6a8;
  undefined1 *local_6a0;
  undefined4 local_698 [2];
  undefined4 local_690;
  undefined4 uStack_68c;
  undefined4 uStack_688;
  undefined4 uStack_684;
  longlong local_678 [34];
  undefined8 local_568;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  undefined8 local_558;
  undefined8 uStack_550;
  uint auStack_52c [16];
  uint auStack_4ec [225];
  undefined1 local_168 [32];
  undefined1 local_148 [64];
  uint auStack_108 [48];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143d0820d;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_838;
  uVar32 = 0;
  local_810 = 0;
  uVar21 = param_5 * 4;
  local_7d0 = (longlong *)CONCAT44(local_7d0._4_4_,uVar21);
  local_7e8 = param_1;
  local_7c8 = param_2;
  iVar10 = RAND_bytes(&local_568,param_5 << 6);
  if (iVar10 < 1) {
    uVar31 = 0;
  }
  else {
    bVar13 = (char)param_5 + 1;
    local_818 = param_4 >> (bVar13 & 0x1f);
    lVar5 = -(ulonglong)((uint)local_168 & 0x1f);
    local_7f0 = local_148 + lVar5;
    uVar22 = (param_4 - (local_818 << (bVar13 & 0x1f))) + local_818;
    local_7d8 = (ulonglong)uVar22;
    if ((local_818 < uVar22) && ((uVar22 + 0x16 & 0x3f) < uVar21 - 1)) {
      local_818 = local_818 + 1;
      local_7d8 = (ulonglong)(uVar22 + param_5 * -4 + 1);
    }
    uVar27 = local_7d8;
    uVar22 = local_818;
    uVar23 = (uint)local_7d8;
    local_7a8 = param_3;
    local_6a8 = param_3;
    local_6a0 = local_7c8 + 0x15;
    *(undefined4 *)(local_7c8 + 5) = (undefined4)local_568;
    *(undefined4 *)(local_7c8 + 9) = local_568._4_4_;
    *(undefined4 *)(local_7c8 + 0xd) = uStack_560;
    *(undefined4 *)(local_7c8 + 0x11) = uStack_55c;
    local_690 = (undefined4)local_568;
    uStack_68c = local_568._4_4_;
    uStack_688 = uStack_560;
    uStack_684 = uStack_55c;
    if (1 < uVar21) {
      plVar26 = local_798;
      ppuVar12 = &local_6a0;
      plVar28 = &local_7a8;
      uVar31 = (ulonglong)(uVar21 - 1);
      plVar17 = local_678;
      puVar24 = &local_558;
      do {
        lVar1 = *plVar28;
        uVar3 = *puVar24;
        uVar9 = puVar24[1];
        *plVar26 = lVar1 + (ulonglong)local_818;
        plVar28 = plVar28 + 2;
        plVar17[-1] = lVar1 + (ulonglong)local_818;
        plVar26 = plVar26 + 2;
        puVar14 = *ppuVar12;
        ppuVar12 = ppuVar12 + 5;
        puVar14 = puVar14 + ((local_818 + 0x30 & 0xfffffff0) + 0x15);
        *plVar17 = (longlong)puVar14;
        *(undefined8 *)(puVar14 + -0x10) = uVar3;
        *(undefined8 *)(puVar14 + -8) = uVar9;
        uVar11 = *(undefined4 *)((longlong)puVar24 + 4);
        uVar7 = *(undefined4 *)(puVar24 + 1);
        uVar8 = *(undefined4 *)((longlong)puVar24 + 0xc);
        *(undefined4 *)(plVar17 + 2) = *(undefined4 *)puVar24;
        *(undefined4 *)((longlong)plVar17 + 0x14) = uVar11;
        *(undefined4 *)(plVar17 + 3) = uVar7;
        *(undefined4 *)((longlong)plVar17 + 0x1c) = uVar8;
        uVar31 = uVar31 - 1;
        plVar17 = plVar17 + 5;
        puVar24 = puVar24 + 2;
        param_1 = local_7e8;
      } while (uVar31 != 0);
    }
    local_568 = *(ulonglong *)(param_1 + 0x7f);
    if (uVar21 != 0) {
      local_7b8 = param_1[0x78];
      puVar15 = (uint *)((longlong)auStack_108 + lVar5);
      local_7c0 = param_1[0x75];
      local_7f8 = param_1[0x77];
      local_80c = param_1[0x79];
      local_808 = param_1[0x7a];
      local_804 = param_1[0x7b];
      local_800 = param_1[0x7c];
      local_814 = (undefined1)param_1[0x81];
      local_813 = *(undefined1 *)((longlong)param_1 + 0x205);
      local_812 = *(undefined1 *)((longlong)param_1 + 0x206);
      uVar20 = param_1[0x76];
      puVar24 = &local_568;
      local_7bc = uVar21 - 1;
      local_7e0 = CONCAT44(local_7e0._4_4_,uVar20);
      uVar31 = uVar32;
      puVar18 = &uStack_560;
      uVar25 = local_568 >> 0x38 | (local_568 & 0xff000000000000) >> 0x28 |
               (local_568 & 0xff0000000000) >> 0x18 | (local_568 & 0xff00000000) >> 8 |
               (local_568 & 0xff000000) << 8 | (local_568 & 0xff0000) << 0x18 |
               (local_568 & 0xff00) << 0x28 | local_568 << 0x38;
      uVar29 = uVar32;
      do {
        puVar15[-8] = uVar20;
        uVar16 = local_818;
        if ((int)uVar31 == local_7bc) {
          uVar16 = uVar23;
        }
        puVar15[8] = local_7b8;
        uVar19 = (int)uVar31 + 1;
        uVar31 = (ulonglong)uVar19;
        puVar15[0x10] = local_80c;
        puVar15[0x18] = local_808;
        puVar15[0x20] = local_804;
        puVar15[0x28] = local_800;
        *(char *)(puVar18 + 1) = (char)uVar16;
        *puVar15 = local_7f8;
        puVar2 = *(undefined8 **)((longlong)auStack_7a0 + (uVar29 - 8));
        puVar15[-0x10] = local_7c0;
        puVar15 = puVar15 + 1;
        *(ulonglong *)(puVar18 + -2) =
             uVar25 >> 0x38 | (uVar25 & 0xff000000000000) >> 0x28 |
             (uVar25 & 0xff0000000000) >> 0x18 | (uVar25 & 0xff00000000) >> 8 |
             (uVar25 & 0xff000000) << 8 | (uVar25 & 0xff0000) << 0x18 | (uVar25 & 0xff00) << 0x28 |
             uVar25 << 0x38;
        *(undefined1 *)puVar18 = local_814;
        *(undefined1 *)((longlong)puVar18 + 1) = local_813;
        *(undefined1 *)((longlong)puVar18 + 2) = local_812;
        *(char *)((longlong)puVar18 + 3) = (char)(uVar16 >> 8);
        uVar3 = puVar2[1];
        *(undefined8 *)((longlong)puVar18 + 5) = *puVar2;
        *(undefined8 *)((longlong)puVar18 + 0xd) = uVar3;
        uVar11 = *(undefined4 *)((longlong)puVar2 + 0x14);
        uVar7 = *(undefined4 *)(puVar2 + 3);
        uVar8 = *(undefined4 *)((longlong)puVar2 + 0x1c);
        *(undefined4 *)((longlong)puVar18 + 0x15) = *(undefined4 *)(puVar2 + 2);
        *(undefined4 *)((longlong)puVar18 + 0x19) = uVar11;
        *(undefined4 *)((longlong)puVar18 + 0x1d) = uVar7;
        *(undefined4 *)((longlong)puVar18 + 0x21) = uVar8;
        uVar11 = *(undefined4 *)((longlong)puVar2 + 0x24);
        uVar7 = *(undefined4 *)(puVar2 + 5);
        uVar8 = *(undefined4 *)((longlong)puVar2 + 0x2c);
        *(undefined4 *)((longlong)puVar18 + 0x25) = *(undefined4 *)(puVar2 + 4);
        *(undefined4 *)((longlong)puVar18 + 0x29) = uVar11;
        *(undefined4 *)((longlong)puVar18 + 0x2d) = uVar7;
        *(undefined4 *)((longlong)puVar18 + 0x31) = uVar8;
        *(undefined2 *)((longlong)puVar18 + 0x35) = *(undefined2 *)(puVar2 + 6);
        *(undefined1 *)((longlong)puVar18 + 0x37) = *(undefined1 *)((longlong)puVar2 + 0x32);
        *(longlong *)((longlong)auStack_7a0 + (uVar29 - 8)) = (longlong)puVar2 + 0x33;
        *(undefined8 **)((longlong)local_720 + (uVar29 - 8)) = puVar24;
        puVar24 = puVar24 + 0x10;
        *(uint *)((longlong)auStack_7a0 + uVar29) = uVar16 - 0x33 >> 6;
        *(undefined4 *)((longlong)local_720 + uVar29) = 1;
        puVar18 = puVar18 + 0x20;
        uVar25 = uVar25 + 1;
        uVar29 = uVar29 + 0x10;
        param_1 = local_7e8;
      } while (uVar19 < uVar21);
    }
    FUN_14007b600(local_7f0,&local_728,param_5);
    puVar14 = local_7f0;
    if (uVar22 <= uVar23) {
      uVar23 = uVar22;
    }
    uVar20 = uVar23 - 0x33 >> 6;
    uVar23 = local_810;
    if (0x20 < uVar20) {
      uVar31 = uVar32;
      if (uVar21 != 0) {
        puVar18 = local_698;
        uVar25 = (ulonglong)uVar21;
        uVar27 = uVar32;
        do {
          *(undefined8 *)((longlong)local_720 + (uVar27 - 8)) =
               *(undefined8 *)((longlong)auStack_7a0 + (uVar27 - 8));
          *(undefined4 *)((longlong)local_720 + uVar27) = 0x20;
          uVar27 = uVar27 + 0x10;
          *puVar18 = 0x80;
          puVar18 = puVar18 + 10;
          uVar25 = uVar25 - 1;
        } while (uVar25 != 0);
      }
      do {
        FUN_14007b600(puVar14,&local_728,param_5);
        FUN_1400750c0(&local_6a8,param_1,param_5);
        if (uVar21 != 0) {
          uVar25 = (ulonglong)uVar21;
          ppuVar12 = &local_6a0;
          uVar27 = uVar32;
          do {
            plVar26 = (longlong *)((longlong)auStack_7a0 + (uVar27 - 8));
            *plVar26 = *plVar26 + 0x800;
            *ppuVar12 = *ppuVar12 + 0x800;
            uVar3 = *(undefined8 *)((longlong)auStack_7a0 + (uVar27 - 8));
            *(int *)((longlong)auStack_7a0 + uVar27) =
                 *(int *)((longlong)auStack_7a0 + uVar27) + -0x20;
            ppuVar12[-1] = ppuVar12[-1] + 0x800;
            *(undefined8 *)((longlong)local_720 + (uVar27 - 8)) = uVar3;
            puVar4 = *ppuVar12;
            *(undefined4 *)((longlong)local_720 + uVar27) = 0x20;
            uVar27 = uVar27 + 0x10;
            *(undefined4 *)(ppuVar12 + 1) = 0x80;
            uVar11 = *(undefined4 *)(puVar4 + -0xc);
            uVar7 = *(undefined4 *)(puVar4 + -8);
            uVar8 = *(undefined4 *)(puVar4 + -4);
            *(undefined4 *)(ppuVar12 + 2) = *(undefined4 *)(puVar4 + -0x10);
            *(undefined4 *)((longlong)ppuVar12 + 0x14) = uVar11;
            *(undefined4 *)(ppuVar12 + 3) = uVar7;
            *(undefined4 *)((longlong)ppuVar12 + 0x1c) = uVar8;
            uVar25 = uVar25 - 1;
            ppuVar12 = ppuVar12 + 5;
          } while (uVar25 != 0);
        }
        uVar23 = (int)uVar31 + 0x800;
        uVar20 = uVar20 - 0x20;
        uVar27 = local_7d8;
        uVar31 = (ulonglong)uVar23;
        uVar22 = local_818;
      } while (0x20 < uVar20);
    }
    local_810 = uVar23;
    puVar14 = local_7f0;
    FUN_14007b600(local_7f0,&local_7a8,param_5);
    _guard_xfg_dispatch_icall_nop(&local_568,0,0x400);
    if (uVar21 != 0) {
      uVar31 = 0;
      local_7e0 = 0;
      puVar24 = &local_568;
      uVar32 = uVar31;
      do {
        uVar22 = local_818;
        if ((int)uVar31 == uVar21 - 1) {
          uVar22 = (uint)local_7d8;
        }
        uVar23 = ((uVar22 + *(int *)((longlong)auStack_7a0 + uVar32) * -0x40) - local_810) - 0x33;
        _guard_xfg_dispatch_icall_nop
                  (puVar24,(void *)((ulonglong)
                                    (uint)(*(int *)((longlong)auStack_7a0 + uVar32) * 0x40) +
                                   *(longlong *)((longlong)auStack_7a0 + (uVar32 - 8))),
                   (ulonglong)uVar23);
        uVar22 = uVar22 * 8 + 0x268;
        uVar22 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                 uVar22 * 0x1000000;
        *(undefined1 *)((longlong)&local_568 + local_7e0 + (ulonglong)uVar23) = 0x80;
        if (uVar23 < 0x38) {
          *(uint *)((longlong)auStack_52c + local_7e0) = uVar22;
          uVar11 = 1;
        }
        else {
          *(uint *)((longlong)auStack_4ec + local_7e0) = uVar22;
          uVar11 = 2;
        }
        *(undefined4 *)((longlong)local_720 + uVar32) = uVar11;
        local_7e0 = local_7e0 + 0x80;
        *(undefined8 **)((longlong)local_720 + (uVar32 - 8)) = puVar24;
        uVar23 = (int)uVar31 + 1;
        uVar31 = (ulonglong)uVar23;
        puVar24 = puVar24 + 0x10;
        uVar32 = uVar32 + 0x10;
        puVar14 = local_7f0;
        uVar27 = local_7d8;
        param_1 = local_7e8;
        uVar22 = local_818;
      } while (uVar23 < uVar21);
    }
    uVar32 = 0;
    FUN_14007b600(puVar14,&local_728,param_5);
    _guard_xfg_dispatch_icall_nop(&local_568,0,0x400);
    uVar23 = 0;
    if (uVar21 != 0) {
      local_7f8 = param_1[0x5b];
      uVar22 = param_1[0x59];
      puVar18 = local_720;
      uVar23 = param_1[0x5a];
      puVar24 = &local_568;
      uVar20 = param_1[0x5c];
      local_7e0 = CONCAT44(local_7e0._4_4_,uVar20);
      local_800 = param_1[0x5d];
      local_804 = param_1[0x5e];
      local_808 = param_1[0x5f];
      local_80c = param_1[0x60];
      uVar27 = (ulonglong)uVar21;
      puVar15 = (uint *)(puVar14 + 0x40);
      puVar30 = (uint *)((longlong)&local_568 + 4);
      do {
        uVar21 = puVar15[-0x10];
        *(undefined8 **)(puVar18 + -2) = puVar24;
        puVar24 = puVar24 + 0x10;
        puVar15[-0x10] = uVar22;
        *(undefined1 *)(puVar30 + 7) = 0x80;
        puVar30[0xe] = 0x30000;
        *puVar18 = 1;
        puVar18 = puVar18 + 4;
        puVar30[-1] = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                      uVar21 << 0x18;
        uVar21 = puVar15[-8];
        puVar15[-8] = uVar23;
        *puVar30 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                   uVar21 << 0x18;
        uVar21 = *puVar15;
        *puVar15 = local_7f8;
        puVar30[1] = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                     uVar21 << 0x18;
        uVar21 = puVar15[8];
        puVar15[8] = uVar20;
        puVar30[2] = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                     uVar21 << 0x18;
        uVar21 = puVar15[0x10];
        puVar15[0x10] = local_800;
        puVar30[3] = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                     uVar21 << 0x18;
        uVar21 = puVar15[0x18];
        puVar15[0x18] = local_804;
        puVar30[4] = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                     uVar21 << 0x18;
        uVar21 = puVar15[0x20];
        puVar15[0x20] = local_808;
        puVar30[5] = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                     uVar21 << 0x18;
        uVar21 = puVar15[0x28];
        puVar30[6] = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                     uVar21 << 0x18;
        puVar15[0x28] = local_80c;
        uVar27 = uVar27 - 1;
        puVar15 = puVar15 + 1;
        puVar30 = puVar30 + 0x20;
      } while (uVar27 != 0);
      puVar14 = local_7f0;
      uVar27 = local_7d8;
      param_1 = local_7e8;
      uVar22 = local_818;
      uVar23 = (uint)local_7d0;
    }
    FUN_14007b600(puVar14,&local_728,param_5);
    local_818 = 0;
    uVar31 = uVar32;
    if (uVar23 != 0) {
      local_7d0 = &local_6a8;
      local_7e8 = (uint *)(puVar14 + 0x40);
      do {
        puVar14 = local_7c8;
        puVar15 = local_7e8;
        uVar21 = uVar22;
        if ((int)uVar32 == uVar23 - 1) {
          uVar21 = (uint)uVar27;
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)local_7d0[1],(void *)*local_7d0,(ulonglong)(uVar21 - local_810));
        puVar30 = (uint *)(local_7c8 + (uVar21 + 0x15));
        *local_7d0 = local_7d0[1];
        uVar20 = puVar15[-0x10];
        *puVar30 = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                   uVar20 << 0x18;
        uVar20 = puVar15[-8];
        puVar30[1] = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                     uVar20 << 0x18;
        uVar20 = *puVar15;
        puVar30[2] = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                     uVar20 << 0x18;
        uVar20 = puVar15[8];
        puVar30[3] = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                     uVar20 << 0x18;
        uVar20 = puVar15[0x10];
        puVar30[4] = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                     uVar20 << 0x18;
        uVar20 = puVar15[0x18];
        puVar30[5] = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                     uVar20 << 0x18;
        uVar20 = puVar15[0x20];
        puVar30[6] = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                     uVar20 << 0x18;
        uVar20 = puVar15[0x28];
        puVar30[7] = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                     uVar20 << 0x18;
        iVar6 = -(uVar21 + 0x20 & 0xf);
        iVar10 = iVar6 + 0xf;
        uVar32 = (ulonglong)(iVar6 + 0x10);
        local_7c8 = (undefined1 *)((longlong)(puVar30 + 8) + uVar32);
        puVar15 = puVar30 + 8;
        for (; uVar32 != 0; uVar32 = uVar32 - 1) {
          *(char *)puVar15 = (char)iVar10;
          puVar15 = (uint *)((longlong)puVar15 + 1);
        }
        iVar10 = uVar21 + 0x20 + iVar10;
        local_7e8 = local_7e8 + 1;
        *(uint *)(local_7d0 + 2) = (iVar10 + 1) - local_810 >> 4;
        local_7d0 = local_7d0 + 5;
        *puVar14 = (char)param_1[0x81];
        puVar14[1] = *(undefined1 *)((longlong)param_1 + 0x205);
        puVar14[2] = *(undefined1 *)((longlong)param_1 + 0x206);
        puVar14[3] = (char)((uint)(iVar10 + 0x11) >> 8);
        puVar14[4] = (char)(iVar10 + 0x11);
        local_818 = local_818 + 1;
        uVar32 = (ulonglong)local_818;
        uVar31 = uVar31 + (iVar10 + 0x16);
        puVar14 = local_7f0;
        uVar27 = local_7d8;
      } while (local_818 < uVar23);
    }
    FUN_1400750c0(&local_6a8,param_1,param_5);
    FUN_14004ff40(&local_568,0x400);
    FUN_14004ff40(puVar14,0x100);
  }
  return uVar31;
}



// FUNCTION 143d08ab0 aria_init_key body=211 status=ok
// SIG undefined aria_init_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 aria_init_key(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FHardwareCursor::GetHandle();
  uVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(uVar3);
  if ((param_4 == 0) && ((uVar1 & 0xf0007) - 1 < 2)) {
    uVar3 = FTcpDeserializedMessage::GetMessage(param_1);
    iVar2 = UVariantSet::GetNumVariants(param_1);
    iVar2 = aria_set_decrypt_key(param_2,iVar2 << 3,uVar3);
  }
  else {
    uVar3 = FTcpDeserializedMessage::GetMessage(param_1);
    iVar2 = UVariantSet::GetNumVariants(param_1);
    iVar2 = FUN_143d4b930(param_2,iVar2 << 3,uVar3);
  }
  if (iVar2 < 0) {
    ERR_put_error(6,0xb9,0xb0,"crypto\\evp\\e_aria.c",0x49);
    return 0;
  }
  return 1;
}



// FUNCTION 143d08b90 aria_128_cbc_cipher body=276 status=ok
// SIG undefined aria_128_cbc_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
aria_128_cbc_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  if (0x3fffffff < param_4) {
    uVar4 = param_4 >> 0x1e;
    param_4 = param_4 + uVar4 * -0x40000000;
    do {
      iVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
      uVar2 = IMessageToken::ToText(param_1);
      uVar3 = FTcpDeserializedMessage::GetMessage(param_1);
      if (iVar1 == 0) {
        CRYPTO_cbc128_decrypt(param_3,param_2,0x40000000,uVar3,uVar2,FUN_143d4aec0);
      }
      else {
        CRYPTO_cbc128_encrypt();
      }
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (param_4 != 0) {
    iVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
    uVar2 = IMessageToken::ToText(param_1);
    uVar3 = FTcpDeserializedMessage::GetMessage(param_1);
    if (iVar1 == 0) {
      CRYPTO_cbc128_decrypt(param_3,param_2,(longlong)(int)param_4,uVar3,uVar2,FUN_143d4aec0);
    }
    else {
      CRYPTO_cbc128_encrypt();
    }
  }
  return 1;
}



// FUNCTION 143d08cb0 aria_128_cfb8_cipher body=287 status=ok
// SIG undefined aria_128_cfb8_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
aria_128_cfb8_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

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
    CRYPTO_cfb128_encrypt
              (param_3,param_2,(longlong)(int)uVar5,uVar3,uVar2,local_res20,uVar1,FUN_143d4aec0);
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



// FUNCTION 143d08dd0 aria_128_ecb_cipher body=143 status=ok
// SIG undefined aria_128_ecb_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
aria_128_ecb_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  lVar1 = FHardwareCursor::GetHandle();
  uVar3 = (ulonglong)*(int *)(lVar1 + 4);
  if (uVar3 <= param_4) {
    lVar1 = param_3;
    do {
      TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
      uVar2 = FTcpDeserializedMessage::GetMessage(param_1);
      FUN_143d4aec0(lVar1,(param_2 - param_3) + lVar1,uVar2);
      lVar1 = lVar1 + uVar3;
    } while ((ulonglong)(lVar1 - param_3) <= param_4 - uVar3);
  }
  return 1;
}



// FUNCTION 143d08e60 FUN_143d08e60 body=314 status=ok
// SIG undefined FUN_143d08e60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_143d08e60(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 local_res20 [2];
  undefined8 uVar4;
  
  uVar4 = 0x143d08e77;
  if (0x3fffffff < param_4) {
    uVar3 = param_4 >> 0x1e;
    param_4 = param_4 + uVar3 * -0x40000000;
    do {
      local_res20[0] = FOnlineVoiceImpl::GetNumLocalTalkers(param_1);
      uVar1 = IMessageToken::ToText(param_1);
      uVar2 = FTcpDeserializedMessage::GetMessage(param_1);
      CRYPTO_ofb128_encrypt(param_3,param_2,0x40000000,uVar2,uVar1,local_res20,FUN_143d4aec0);
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
    CRYPTO_ofb128_encrypt
              (param_3,param_2,(longlong)(int)param_4,uVar2,uVar1,local_res20,FUN_143d4aec0,uVar4);
    FArchiveState::SetGameNetVer(param_1,local_res20[0]);
  }
  return 1;
}



// FUNCTION 143d08fa0 aria_128_cfb1_cipher body=315 status=ok
// SIG undefined aria_128_cfb1_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
aria_128_cfb1_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined4 local_res20 [2];
  
  if (param_4 == 0) {
    return 1;
  }
  uVar6 = param_4;
  if (0x7ffffff < param_4) {
    uVar6 = 0x8000000;
  }
  do {
    if (param_4 < uVar6) {
      return 1;
    }
    local_res20[0] = FOnlineVoiceImpl::GetNumLocalTalkers(param_1);
    iVar1 = EVP_CIPHER_CTX_test_flags(param_1,0x2000);
    iVar7 = (int)uVar6 * 8;
    if (iVar1 != 0) {
      iVar7 = (int)uVar6;
    }
    uVar2 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
    uVar3 = IMessageToken::ToText(param_1);
    uVar4 = FTcpDeserializedMessage::GetMessage(param_1);
    CRYPTO_cfb128_1_encrypt
              (param_3,param_2,(longlong)iVar7,uVar4,uVar3,local_res20,uVar2,FUN_143d4aec0);
    FArchiveState::SetGameNetVer(param_1,local_res20[0]);
    param_4 = param_4 - uVar6;
    param_3 = param_3 + uVar6;
    param_2 = param_2 + uVar6;
    uVar5 = param_4;
    if (uVar6 <= param_4) {
      uVar5 = uVar6;
    }
    uVar6 = uVar5;
  } while (param_4 != 0);
  return 1;
}



// FUNCTION 143d090e0 aria_128_cfb8_cipher body=287 status=ok
// SIG undefined aria_128_cfb8_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
aria_128_cfb8_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

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
    CRYPTO_cfb128_8_encrypt
              (param_3,param_2,(longlong)(int)uVar5,uVar3,uVar2,local_res20,uVar1,FUN_143d4aec0);
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



// FUNCTION 143d09200 FUN_143d09200 body=178 status=ok
// SIG undefined FUN_143d09200(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_143d09200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_28 [2];
  undefined8 uStack_20;
  
  uStack_20 = 0x143d0921e;
  local_28[0] = FOnlineVoiceImpl::GetNumLocalTalkers();
  uVar1 = FTcpDeserializedMessage::GetMessage(param_1);
  uVar2 = UListView::OnItemSelectionChanged(param_1);
  uVar3 = IMessageToken::ToText(param_1);
  CRYPTO_ctr128_encrypt(param_3,param_2,param_4,uVar1,uVar3,uVar2,local_28,FUN_143d4aec0);
  FArchiveState::SetGameNetVer(param_1,local_28[0]);
  return 1;
}



// FUNCTION 143d092c0 aria_gcm_init_key body=322 status=ok
// SIG undefined aria_gcm_init_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 aria_gcm_init_key(undefined8 param_1,longlong param_2,void *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143d092da;
  lVar2 = FTcpDeserializedMessage::GetMessage();
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) {
    if (*(int *)(lVar2 + 0x118) == 0) {
      _guard_xfg_dispatch_icall_nop
                (*(void **)(lVar2 + 0x2d8),param_3,(longlong)*(int *)(lVar2 + 0x2e0));
    }
    else {
      CRYPTO_gcm128_setiv(lVar2 + 0x120);
    }
    *(undefined4 *)(lVar2 + 0x11c) = 1;
    *(undefined4 *)(lVar2 + 0x2e8) = 0;
    return 1;
  }
  iVar1 = UVariantSet::GetNumVariants(param_1);
  iVar1 = FUN_143d4b930(param_2,iVar1 << 3,lVar2);
  CRYPTO_gcm128_init(lVar2 + 0x120,lVar2,FUN_143d4aec0);
  if (-1 < iVar1) {
    if ((param_3 != (void *)0x0) ||
       ((*(int *)(lVar2 + 0x11c) != 0 &&
        (param_3 = *(void **)(lVar2 + 0x2d8), param_3 != (void *)0x0)))) {
      CRYPTO_gcm128_setiv(lVar2 + 0x120,param_3,(longlong)*(int *)(lVar2 + 0x2e0));
      *(undefined4 *)(lVar2 + 0x11c) = 1;
    }
    *(undefined4 *)(lVar2 + 0x118) = 1;
    return 1;
  }
  ERR_put_error(6,0xb0,0xb0,"crypto\\evp\\e_aria.c",0xdd,uVar3);
  return 0;
}



// FUNCTION 143d09410 FUN_143d09410 body=1179 status=ok
// SIG undefined FUN_143d09410(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_143d09410(undefined8 param_1,undefined4 param_2,int param_3,undefined8 *param_4)

{
  char *pcVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  size_t _Size;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  
  _Size = (size_t)param_3;
  lVar4 = FTcpDeserializedMessage::GetMessage();
  switch(param_2) {
  case 0:
    *(undefined8 *)(lVar4 + 0x118) = 0;
    uVar12 = EVP_CIPHER_CTX_iv_length(param_1);
    *(undefined4 *)(lVar4 + 0x2e0) = uVar12;
    uVar8 = IMessageToken::ToText(param_1);
    *(undefined8 *)(lVar4 + 0x2d8) = uVar8;
    *(undefined4 *)(lVar4 + 0x2e4) = 0xffffffff;
    *(undefined4 *)(lVar4 + 0x2e8) = 0;
    *(undefined4 *)(lVar4 + 0x2ec) = 0xffffffff;
    return 1;
  default:
    return 0xffffffff;
  case 8:
    lVar5 = FTcpDeserializedMessage::GetMessage(param_4);
    if (*(longlong *)(lVar4 + 0x2a0) != 0) {
      if (*(longlong *)(lVar4 + 0x2a0) != lVar4) {
        return 0;
      }
      *(longlong *)(lVar5 + 0x2a0) = lVar5;
    }
    lVar9 = IMessageToken::ToText(param_1);
    if (*(longlong *)(lVar4 + 0x2d8) == lVar9) {
      uVar8 = IMessageToken::ToText(param_4);
      *(undefined8 *)(lVar5 + 0x2d8) = uVar8;
      return 1;
    }
    pvVar6 = (void *)CRYPTO_malloc((longlong)*(int *)(lVar4 + 0x2e0),"crypto\\evp\\e_aria.c",0x176);
    *(void **)(lVar5 + 0x2d8) = pvVar6;
    if (pvVar6 != (void *)0x0) {
      _guard_xfg_dispatch_icall_nop
                (pvVar6,*(void **)(lVar4 + 0x2d8),(longlong)*(int *)(lVar4 + 0x2e0));
      return 1;
    }
    uVar12 = 0x177;
    goto LAB_143d09510;
  case 9:
    if (param_3 < 1) {
      return 0;
    }
    if ((param_3 < 0x11) || (param_3 <= *(int *)(lVar4 + 0x2e0))) {
LAB_143d09531:
      *(int *)(lVar4 + 0x2e0) = param_3;
      return 1;
    }
    lVar5 = *(longlong *)(lVar4 + 0x2d8);
    lVar9 = IMessageToken::ToText(param_1);
    if (lVar5 != lVar9) {
      CRYPTO_free(lVar5,"crypto\\evp\\e_aria.c",0x10c);
    }
    lVar5 = CRYPTO_malloc(_Size,"crypto\\evp\\e_aria.c",0x10d);
    *(longlong *)(lVar4 + 0x2d8) = lVar5;
    if (lVar5 != 0) goto LAB_143d09531;
    uVar12 = 0x10e;
LAB_143d09510:
    ERR_put_error(6,0xc5,0x41,"crypto\\evp\\e_aria.c",uVar12);
    break;
  case 0x10:
    if (((param_3 - 1U < 0x10) &&
        (iVar3 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1), iVar3 != 0)) &&
       (-1 < *(int *)(lVar4 + 0x2e4))) {
      pvVar6 = (void *)UListView::OnItemSelectionChanged(param_1);
      _guard_xfg_dispatch_icall_nop(param_4,pvVar6,_Size);
      return 1;
    }
    break;
  case 0x11:
    if ((param_3 - 1U < 0x10) &&
       (iVar3 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1), iVar3 == 0)) {
      pvVar6 = (void *)UListView::OnItemSelectionChanged(param_1);
      _guard_xfg_dispatch_icall_nop(pvVar6,param_4,_Size);
      *(int *)(lVar4 + 0x2e4) = param_3;
      return 1;
    }
    break;
  case 0x12:
    if (param_3 == -1) {
      _guard_xfg_dispatch_icall_nop
                (*(void **)(lVar4 + 0x2d8),param_4,(longlong)*(int *)(lVar4 + 0x2e0));
      *(undefined4 *)(lVar4 + 0x2e8) = 1;
      return 1;
    }
    if ((3 < param_3) && (7 < *(int *)(lVar4 + 0x2e0) - param_3)) {
      _guard_xfg_dispatch_icall_nop(*(void **)(lVar4 + 0x2d8),param_4,_Size);
      iVar3 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
      if ((iVar3 == 0) ||
         (iVar3 = RAND_bytes(*(longlong *)(lVar4 + 0x2d8) + _Size,*(int *)(lVar4 + 0x2e0) - param_3)
         , 0 < iVar3)) {
        *(undefined4 *)(lVar4 + 0x2e8) = 1;
        return 1;
      }
    }
    break;
  case 0x13:
    if ((*(int *)(lVar4 + 0x2e8) != 0) && (*(int *)(lVar4 + 0x118) != 0)) {
      CRYPTO_gcm128_setiv(lVar4 + 0x120,*(undefined8 *)(lVar4 + 0x2d8),
                          (longlong)*(int *)(lVar4 + 0x2e0));
      iVar3 = *(int *)(lVar4 + 0x2e0);
      if ((param_3 < 1) || (iVar3 < param_3)) {
        param_3 = iVar3;
      }
      _guard_xfg_dispatch_icall_nop
                (param_4,(void *)(((longlong)iVar3 - (longlong)param_3) +
                                 *(longlong *)(lVar4 + 0x2d8)),(longlong)param_3);
      iVar3 = *(int *)(lVar4 + 0x2e0);
      lVar9 = 8;
      lVar5 = *(longlong *)(lVar4 + 0x2d8);
      do {
        lVar9 = lVar9 + -1;
        pcVar1 = (char *)(iVar3 + lVar5 + -8 + lVar9);
        *pcVar1 = *pcVar1 + '\x01';
        if (*pcVar1 != '\0') break;
      } while (lVar9 != 0);
      *(undefined4 *)(lVar4 + 0x11c) = 1;
      return 1;
    }
    break;
  case 0x16:
    if (param_3 == 0xd) {
      puVar7 = (undefined8 *)UListView::OnItemSelectionChanged(param_1);
      *puVar7 = *param_4;
      *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(param_4 + 1);
      *(undefined1 *)((longlong)puVar7 + 0xc) = *(undefined1 *)((longlong)param_4 + 0xc);
      *(undefined4 *)(lVar4 + 0x2ec) = 0xd;
      lVar4 = UListView::OnItemSelectionChanged(param_1);
      uVar2 = *(undefined1 *)(lVar4 + 0xb);
      lVar4 = UListView::OnItemSelectionChanged(param_1);
      uVar10 = (uint)CONCAT11(uVar2,*(undefined1 *)(lVar4 + 0xc));
      if (7 < uVar10) {
        uVar11 = uVar10 - 8;
        iVar3 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
        if (iVar3 == 0) {
          if (uVar11 < 0x10) {
            return 0;
          }
          uVar11 = uVar10 - 0x18;
        }
        lVar4 = UListView::OnItemSelectionChanged(param_1);
        *(char *)(lVar4 + 0xb) = (char)(uVar11 >> 8);
        lVar4 = UListView::OnItemSelectionChanged(param_1);
        *(char *)(lVar4 + 0xc) = (char)uVar11;
        return 0x10;
      }
    }
    break;
  case 0x18:
    if (((*(int *)(lVar4 + 0x2e8) != 0) && (*(int *)(lVar4 + 0x118) != 0)) &&
       (iVar3 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1), iVar3 == 0)) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(((longlong)*(int *)(lVar4 + 0x2e0) - _Size) + *(longlong *)(lVar4 + 0x2d8)
                         ),param_4,_Size);
      CRYPTO_gcm128_setiv(lVar4 + 0x120,*(undefined8 *)(lVar4 + 0x2d8),
                          (longlong)*(int *)(lVar4 + 0x2e0));
      *(undefined4 *)(lVar4 + 0x11c) = 1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143d09910 aria_gcm_cipher body=696 status=ok
// SIG undefined aria_gcm_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong aria_gcm_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  
  lVar3 = FTcpDeserializedMessage::GetMessage();
  if (*(int *)(lVar3 + 0x118) != 0) {
    if (-1 < *(int *)(lVar3 + 0x2ec)) {
      lVar3 = FTcpDeserializedMessage::GetMessage(param_1);
      uVar6 = 0xffffffff;
      uVar7 = uVar6;
      if ((param_2 == param_3) && (0x17 < param_4)) {
        iVar2 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
        uVar5 = 0x18;
        if (iVar2 != 0) {
          uVar5 = 0x13;
        }
        iVar2 = EVP_CIPHER_CTX_ctrl(param_1,uVar5,8,param_2);
        if (0 < iVar2) {
          iVar2 = *(int *)(lVar3 + 0x2ec);
          uVar5 = UListView::OnItemSelectionChanged(param_1);
          iVar2 = CRYPTO_gcm128_aad(lVar3 + 0x120,uVar5,(longlong)iVar2);
          if (iVar2 == 0) {
            lVar1 = param_4 - 0x18;
            param_2 = param_2 + 8;
            iVar2 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
            if (iVar2 == 0) {
              iVar2 = CRYPTO_gcm128_decrypt(lVar3 + 0x120,param_3 + 8,param_2,lVar1);
              if (iVar2 == 0) {
                uVar5 = UListView::OnItemSelectionChanged(param_1);
                CRYPTO_gcm128_tag(lVar3 + 0x120,uVar5,0x10);
                uVar5 = UListView::OnItemSelectionChanged(param_1);
                iVar2 = FUN_14004ffa0(uVar5,param_3 + 8 + lVar1,0x10);
                uVar7 = (uint)lVar1;
                if (iVar2 != 0) {
                  FUN_14004ff40(param_2,lVar1);
                  uVar7 = uVar6;
                }
              }
            }
            else {
              iVar2 = CRYPTO_gcm128_encrypt();
              if (iVar2 == 0) {
                CRYPTO_gcm128_tag(lVar3 + 0x120,param_2 + lVar1,0x10);
                uVar7 = (uint)lVar1 + 0x18;
              }
            }
          }
        }
        *(undefined4 *)(lVar3 + 0x11c) = 0;
        *(undefined4 *)(lVar3 + 0x2ec) = 0xffffffff;
      }
      return (ulonglong)uVar7;
    }
    if (*(int *)(lVar3 + 0x11c) == 0) {
      return 0xffffffff;
    }
    if (param_3 == 0) {
      iVar2 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
      if (iVar2 != 0) {
        uVar5 = UListView::OnItemSelectionChanged(param_1);
        CRYPTO_gcm128_tag(lVar3 + 0x120,uVar5,0x10);
        *(undefined4 *)(lVar3 + 0x2e4) = 0x10;
        *(undefined4 *)(lVar3 + 0x11c) = 0;
        return 0;
      }
      iVar2 = *(int *)(lVar3 + 0x2e4);
      if (iVar2 < 0) {
        return 0xffffffff;
      }
      uVar5 = UListView::OnItemSelectionChanged(param_1);
      uVar4 = CRYPTO_gcm128_finish(lVar3 + 0x120,uVar5,(longlong)iVar2);
      if ((int)uVar4 != 0) {
        return 0xffffffff;
      }
      *(undefined4 *)(lVar3 + 0x11c) = 0;
      return uVar4;
    }
    if (param_2 == 0) {
      iVar2 = CRYPTO_gcm128_aad(lVar3 + 0x120,param_3,param_4);
    }
    else {
      iVar2 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
      if (iVar2 == 0) {
        iVar2 = CRYPTO_gcm128_decrypt(lVar3 + 0x120,param_3,param_2,param_4);
        if (iVar2 != 0) {
          return 0xffffffff;
        }
        goto LAB_143d09b1e;
      }
      iVar2 = CRYPTO_gcm128_encrypt();
    }
    if (iVar2 == 0) {
LAB_143d09b1e:
      return param_4 & 0xffffffff;
    }
  }
  return 0xffffffff;
}



// FUNCTION 143d09bd0 aria_ccm_init_key body=276 status=ok
// SIG undefined aria_ccm_init_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 aria_ccm_init_key(undefined8 param_1,longlong param_2,void *param_3)

{
  int iVar1;
  longlong lVar2;
  void *_Dst;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143d09bea;
  lVar2 = FTcpDeserializedMessage::GetMessage();
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) goto LAB_143d09c97;
  iVar1 = UVariantSet::GetNumVariants(param_1);
  iVar1 = FUN_143d4b930(param_2,iVar1 << 3,lVar2);
  uVar3 = 1;
  CRYPTO_ccm128_init(lVar2 + 0x138,*(undefined4 *)(lVar2 + 300),*(undefined4 *)(lVar2 + 0x128),lVar2
                     ,FUN_143d4aec0,uVar4);
  if (iVar1 < 0) {
    ERR_put_error(6,0xaf,0xb0,"crypto\\evp\\e_aria.c",CONCAT44(uVar3,0x1f8));
    return 0;
  }
  *(undefined8 *)(lVar2 + 0x170) = 0;
  *(undefined4 *)(lVar2 + 0x118) = 1;
LAB_143d09c97:
  if (param_3 != (void *)0x0) {
    iVar1 = *(int *)(lVar2 + 0x128);
    _Dst = (void *)IMessageToken::ToText(param_1);
    _guard_xfg_dispatch_icall_nop(_Dst,param_3,(longlong)(0xf - iVar1));
    *(undefined4 *)(lVar2 + 0x11c) = 1;
  }
  return 1;
}



// FUNCTION 143d09cf0 FUN_143d09cf0 body=606 status=ok
// SIG undefined FUN_143d09cf0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_143d09cf0(undefined8 param_1,undefined4 param_2,int param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined4 *puVar6;
  void *_Dst;
  ushort uVar7;
  ulonglong _Size;
  
  _Size = (ulonglong)param_3;
  lVar3 = FTcpDeserializedMessage::GetMessage();
  switch(param_2) {
  case 0:
    *(undefined4 *)(lVar3 + 0x128) = 8;
    *(undefined8 *)(lVar3 + 0x118) = 0;
    *(undefined8 *)(lVar3 + 0x120) = 0;
    *(undefined4 *)(lVar3 + 300) = 0xc;
    *(undefined4 *)(lVar3 + 0x130) = 0xffffffff;
    return 1;
  default:
    return 0xffffffff;
  case 8:
    lVar5 = FTcpDeserializedMessage::GetMessage(param_4);
    if (*(longlong *)(lVar3 + 0x168) != 0) {
      if (*(longlong *)(lVar3 + 0x168) != lVar3) {
        return 0;
      }
      *(longlong *)(lVar5 + 0x168) = lVar5;
    }
    return 1;
  case 9:
    param_3 = 0xf - param_3;
  case 0x14:
    if (param_3 - 2U < 7) {
      *(int *)(lVar3 + 0x128) = param_3;
      return 1;
    }
    break;
  case 0x10:
    iVar2 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
    if (((iVar2 != 0) && (*(int *)(lVar3 + 0x120) != 0)) &&
       (lVar5 = CRYPTO_ccm128_tag(lVar3 + 0x138,param_4,_Size), lVar5 != 0)) {
      *(undefined8 *)(lVar3 + 0x11c) = 0;
      *(undefined4 *)(lVar3 + 0x124) = 0;
      return 1;
    }
    break;
  case 0x11:
    if (((_Size & 1) == 0) && (param_3 - 4U < 0xd)) {
      iVar2 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
      if (param_4 != (undefined8 *)0x0) {
        if (iVar2 != 0) {
          return 0;
        }
        *(undefined4 *)(lVar3 + 0x120) = 1;
        _Dst = (void *)UListView::OnItemSelectionChanged(param_1);
        _guard_xfg_dispatch_icall_nop(_Dst,param_4,_Size);
      }
      *(int *)(lVar3 + 300) = param_3;
      return 1;
    }
    break;
  case 0x12:
    if (param_3 == 4) {
      puVar6 = (undefined4 *)IMessageToken::ToText(param_1);
      *puVar6 = *(undefined4 *)param_4;
      return 1;
    }
    break;
  case 0x16:
    if (param_3 == 0xd) {
      puVar4 = (undefined8 *)UListView::OnItemSelectionChanged(param_1);
      *puVar4 = *param_4;
      *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_4 + 1);
      *(undefined1 *)((longlong)puVar4 + 0xc) = *(undefined1 *)((longlong)param_4 + 0xc);
      *(undefined4 *)(lVar3 + 0x130) = 0xd;
      lVar5 = UListView::OnItemSelectionChanged(param_1);
      uVar1 = *(undefined1 *)(lVar5 + 0xb);
      lVar5 = UListView::OnItemSelectionChanged(param_1);
      uVar7 = CONCAT11(uVar1,*(undefined1 *)(lVar5 + 0xc));
      if (7 < uVar7) {
        uVar7 = uVar7 - 8;
        iVar2 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
        if (iVar2 == 0) {
          if ((int)(uint)uVar7 < *(int *)(lVar3 + 300)) {
            return 0;
          }
          uVar7 = uVar7 - (short)*(int *)(lVar3 + 300);
        }
        lVar5 = UListView::OnItemSelectionChanged(param_1);
        *(char *)(lVar5 + 0xb) = (char)(uVar7 >> 8);
        lVar5 = UListView::OnItemSelectionChanged(param_1);
        *(char *)(lVar5 + 0xc) = (char)uVar7;
        return *(undefined4 *)(lVar3 + 300);
      }
    }
  }
  return 0;
}



// FUNCTION 143d09fb0 aria_ccm_cipher body=609 status=ok
// SIG undefined aria_ccm_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong aria_ccm_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined1 local_68 [16];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x143d09fc7;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  lVar3 = FTcpDeserializedMessage::GetMessage();
  lVar6 = lVar3 + 0x138;
  if (*(int *)(lVar3 + 0x118) == 0) {
    return 0xffffffff;
  }
  if (-1 < *(int *)(lVar3 + 0x130)) {
    uVar4 = aria_ccm_tls_cipher(param_1,param_2,param_3,param_4);
    return uVar4;
  }
  if ((param_3 == 0) && (param_2 != 0)) {
    return 0;
  }
  if (*(int *)(lVar3 + 0x11c) == 0) {
    return 0xffffffff;
  }
  iVar2 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
  if ((iVar2 == 0) && (*(int *)(lVar3 + 0x120) == 0)) {
    return 0xffffffff;
  }
  if (param_2 == 0) {
    if (param_3 == 0) {
      iVar2 = *(int *)(lVar3 + 0x128);
      uVar5 = IMessageToken::ToText(param_1);
      iVar2 = CRYPTO_ccm128_setiv(lVar6,uVar5,(longlong)(0xf - iVar2),param_4);
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      *(undefined4 *)(lVar3 + 0x124) = 1;
      return param_4 & 0xffffffff;
    }
    if ((*(int *)(lVar3 + 0x124) == 0) && (param_4 != 0)) {
      return 0xffffffff;
    }
    CRYPTO_ccm128_aad(lVar6,param_3,param_4);
    return param_4 & 0xffffffff;
  }
  if (*(int *)(lVar3 + 0x124) == 0) {
    iVar2 = *(int *)(lVar3 + 0x128);
    uVar5 = IMessageToken::ToText(param_1);
    iVar2 = CRYPTO_ccm128_setiv(lVar6,uVar5,(longlong)(0xf - iVar2),param_4);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    *(undefined4 *)(lVar3 + 0x124) = 1;
  }
  iVar2 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
  lVar1 = *(longlong *)(lVar3 + 0x170);
  if (iVar2 != 0) {
    if (lVar1 == 0) {
      iVar2 = CRYPTO_ccm128_encrypt(lVar6);
    }
    else {
      local_78 = lVar1;
      iVar2 = CRYPTO_ccm128_encrypt_ccm64(lVar6);
    }
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    *(undefined4 *)(lVar3 + 0x120) = 1;
    return param_4 & 0xffffffff;
  }
  uVar4 = 0xffffffff;
  if (lVar1 == 0) {
    iVar2 = CRYPTO_ccm128_decrypt(lVar6,param_3,param_2,param_4);
  }
  else {
    local_78 = lVar1;
    iVar2 = CRYPTO_ccm128_decrypt_ccm64(lVar6);
  }
  if ((iVar2 == 0) &&
     (lVar6 = CRYPTO_ccm128_tag(lVar6,local_68,(longlong)*(int *)(lVar3 + 300)), lVar6 != 0)) {
    iVar2 = *(int *)(lVar3 + 300);
    uVar5 = UListView::OnItemSelectionChanged(param_1);
    iVar2 = FUN_14004ffa0(local_68,uVar5,(longlong)iVar2);
    if ((iVar2 == 0) && (uVar4 = param_4 & 0xffffffff, (int)param_4 != -1)) goto LAB_143d0a1d8;
  }
  FUN_14004ff40(param_2,param_4);
LAB_143d0a1d8:
  *(undefined8 *)(lVar3 + 0x11c) = 0;
  *(undefined4 *)(lVar3 + 0x124) = 0;
  return uVar4;
}



// FUNCTION 143d0a220 FUN_143d0a220 body=8 status=ok
// SIG undefined FUN_143d0a220(void)

undefined * FUN_143d0a220(void)

{
  return &DAT_145d757c0;
}



// FUNCTION 143d0a230 FUN_143d0a230 body=8 status=ok
// SIG undefined FUN_143d0a230(void)

undefined * FUN_143d0a230(void)

{
  return &DAT_145d760c0;
}



// FUNCTION 143d0a240 FUN_143d0a240 body=8 status=ok
// SIG undefined FUN_143d0a240(void)

undefined * FUN_143d0a240(void)

{
  return &DAT_145d75c40;
}



// FUNCTION 143d0a250 FUN_143d0a250 body=8 status=ok
// SIG undefined FUN_143d0a250(void)

undefined * FUN_143d0a250(void)

{
  return &DAT_145d75820;
}



// FUNCTION 143d0a260 FUN_143d0a260 body=8 status=ok
// SIG undefined FUN_143d0a260(void)

undefined * FUN_143d0a260(void)

{
  return &DAT_145d75d60;
}



// FUNCTION 143d0a270 FUN_143d0a270 body=8 status=ok
// SIG undefined FUN_143d0a270(void)

undefined * FUN_143d0a270(void)

{
  return &DAT_145d75e80;
}



// FUNCTION 143d0a280 FUN_143d0a280 body=8 status=ok
// SIG undefined FUN_143d0a280(void)

undefined * FUN_143d0a280(void)

{
  return &DAT_145d758e0;
}



// FUNCTION 143d0a290 FUN_143d0a290 body=8 status=ok
// SIG undefined FUN_143d0a290(void)

undefined * FUN_143d0a290(void)

{
  return &DAT_145d75fa0;
}



// FUNCTION 143d0a2a0 FUN_143d0a2a0 body=8 status=ok
// SIG undefined FUN_143d0a2a0(void)

undefined * FUN_143d0a2a0(void)

{
  return &DAT_145d75880;
}



// FUNCTION 143d0a2b0 FUN_143d0a2b0 body=8 status=ok
// SIG undefined FUN_143d0a2b0(void)

undefined * FUN_143d0a2b0(void)

{
  return &DAT_145d75940;
}



// FUNCTION 143d0a2c0 FUN_143d0a2c0 body=8 status=ok
// SIG undefined FUN_143d0a2c0(void)

undefined * FUN_143d0a2c0(void)

{
  return &DAT_145d76120;
}



// FUNCTION 143d0a2d0 FUN_143d0a2d0 body=8 status=ok
// SIG undefined FUN_143d0a2d0(void)

undefined * FUN_143d0a2d0(void)

{
  return &DAT_145d75ca0;
}



// FUNCTION 143d0a2e0 FUN_143d0a2e0 body=8 status=ok
// SIG undefined FUN_143d0a2e0(void)

undefined * FUN_143d0a2e0(void)

{
  return &DAT_145d759a0;
}



// FUNCTION 143d0a2f0 FUN_143d0a2f0 body=8 status=ok
// SIG undefined FUN_143d0a2f0(void)

undefined * FUN_143d0a2f0(void)

{
  return &DAT_145d75dc0;
}



// FUNCTION 143d0a300 FUN_143d0a300 body=8 status=ok
// SIG undefined FUN_143d0a300(void)

undefined * FUN_143d0a300(void)

{
  return &DAT_145d75ee0;
}



// FUNCTION 143d0a310 FUN_143d0a310 body=8 status=ok
// SIG undefined FUN_143d0a310(void)

undefined * FUN_143d0a310(void)

{
  return &DAT_145d75a60;
}



// FUNCTION 143d0a320 FUN_143d0a320 body=8 status=ok
// SIG undefined FUN_143d0a320(void)

undefined * FUN_143d0a320(void)

{
  return &DAT_145d76000;
}



// FUNCTION 143d0a330 FUN_143d0a330 body=8 status=ok
// SIG undefined FUN_143d0a330(void)

undefined * FUN_143d0a330(void)

{
  return &DAT_145d75a00;
}



// FUNCTION 143d0a340 FUN_143d0a340 body=8 status=ok
// SIG undefined FUN_143d0a340(void)

undefined * FUN_143d0a340(void)

{
  return &DAT_145d75ac0;
}



// FUNCTION 143d0a350 FUN_143d0a350 body=8 status=ok
// SIG undefined FUN_143d0a350(void)

undefined * FUN_143d0a350(void)

{
  return &DAT_145d76180;
}



// FUNCTION 143d0a360 FUN_143d0a360 body=8 status=ok
// SIG undefined FUN_143d0a360(void)

undefined * FUN_143d0a360(void)

{
  return &DAT_145d75d00;
}



// FUNCTION 143d0a370 FUN_143d0a370 body=8 status=ok
// SIG undefined FUN_143d0a370(void)

undefined * FUN_143d0a370(void)

{
  return &DAT_145d75b20;
}



// FUNCTION 143d0a380 FUN_143d0a380 body=8 status=ok
// SIG undefined FUN_143d0a380(void)

undefined * FUN_143d0a380(void)

{
  return &DAT_145d75e20;
}



// FUNCTION 143d0a390 FUN_143d0a390 body=8 status=ok
// SIG undefined FUN_143d0a390(void)

undefined * FUN_143d0a390(void)

{
  return &DAT_145d75f40;
}



// FUNCTION 143d0a3a0 FUN_143d0a3a0 body=8 status=ok
// SIG undefined FUN_143d0a3a0(void)

undefined * FUN_143d0a3a0(void)

{
  return &DAT_145d75be0;
}



// FUNCTION 143d0a3b0 FUN_143d0a3b0 body=8 status=ok
// SIG undefined FUN_143d0a3b0(void)

undefined * FUN_143d0a3b0(void)

{
  return &DAT_145d76060;
}



// FUNCTION 143d0a3c0 FUN_143d0a3c0 body=8 status=ok
// SIG undefined FUN_143d0a3c0(void)

undefined * FUN_143d0a3c0(void)

{
  return &DAT_145d75b80;
}



// FUNCTION 143d0a3d0 aria_ccm_tls_cipher body=472 status=ok
// SIG undefined aria_ccm_tls_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong aria_ccm_tls_cipher(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                             ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143d0a3e5;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  lVar2 = FTcpDeserializedMessage::GetMessage();
  lVar6 = lVar2 + 0x138;
  if ((param_2 == param_3) && ((longlong)*(int *)(lVar2 + 300) + 8U <= param_4)) {
    iVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
    if (iVar1 != 0) {
      puVar3 = (undefined8 *)UListView::OnItemSelectionChanged(param_1);
      *param_2 = *puVar3;
    }
    lVar4 = IMessageToken::ToText(param_1);
    *(undefined8 *)(lVar4 + 4) = *param_3;
    param_4 = param_4 - (longlong)(*(int *)(lVar2 + 300) + 8);
    iVar1 = *(int *)(lVar2 + 0x128);
    uVar5 = IMessageToken::ToText(param_1);
    iVar1 = CRYPTO_ccm128_setiv(lVar6,uVar5,(longlong)(0xf - iVar1),param_4);
    if (iVar1 == 0) {
      iVar1 = *(int *)(lVar2 + 0x130);
      uVar5 = UListView::OnItemSelectionChanged(param_1);
      CRYPTO_ccm128_aad(lVar6,uVar5,(longlong)iVar1);
      param_2 = param_2 + 1;
      iVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
      lVar4 = *(longlong *)(lVar2 + 0x170);
      if (iVar1 == 0) {
        if (lVar4 == 0) {
          iVar1 = CRYPTO_ccm128_decrypt(lVar6,param_3 + 1,param_2,param_4);
        }
        else {
          local_68 = lVar4;
          iVar1 = CRYPTO_ccm128_decrypt_ccm64(lVar6);
        }
        if (((iVar1 == 0) &&
            (lVar6 = CRYPTO_ccm128_tag(lVar6,local_58,(longlong)*(int *)(lVar2 + 300)), lVar6 != 0))
           && (iVar1 = FUN_14004ffa0(local_58,param_4 + (longlong)(param_3 + 1),
                                     (longlong)*(int *)(lVar2 + 300)), iVar1 == 0)) {
          return param_4 & 0xffffffff;
        }
        FUN_14004ff40(param_2,param_4);
      }
      else {
        if (lVar4 == 0) {
          iVar1 = CRYPTO_ccm128_encrypt(lVar6);
        }
        else {
          local_68 = lVar4;
          iVar1 = CRYPTO_ccm128_encrypt_ccm64(lVar6);
        }
        if ((iVar1 == 0) &&
           (lVar6 = CRYPTO_ccm128_tag(lVar6,param_4 + (longlong)param_2,
                                      (longlong)*(int *)(lVar2 + 300)), lVar6 != 0)) {
          return (ulonglong)(uint)(*(int *)(lVar2 + 300) + 8 + (int)param_4);
        }
      }
    }
  }
  return 0xffffffff;
}



// FUNCTION 143d0a5b0 camellia_init_key body=222 status=ok
// SIG undefined camellia_init_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 camellia_init_key(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143d0a5ca;
  lVar3 = FTcpDeserializedMessage::GetMessage();
  iVar1 = UVariantSet::GetNumVariants(param_1);
  iVar1 = Camellia_set_key(param_2,iVar1 << 3,lVar3);
  if (iVar1 < 0) {
    ERR_put_error(6,0x9f,0x9d,"crypto\\evp\\e_camellia.c",0xdd,uVar6);
    uVar6 = 0;
  }
  else {
    uVar6 = FHardwareCursor::GetHandle(param_1);
    uVar2 = TResourceArray<unsigned_char,0>::GetResourceDataSize(uVar6);
    if (((uVar2 & 0xf0007) - 1 < 2) && (param_4 == 0)) {
      pcVar4 = FUN_143d4c680;
    }
    else {
      pcVar4 = FUN_143d4c6b0;
    }
    puVar5 = (undefined *)0x0;
    *(code **)(lVar3 + 0x118) = pcVar4;
    if ((uVar2 & 0xf0007) == 2) {
      puVar5 = &DAT_140085880;
    }
    uVar6 = 1;
    *(undefined **)(lVar3 + 0x120) = puVar5;
  }
  return uVar6;
}



// FUNCTION 143d0a690 camellia_cbc_cipher body=207 status=ok
// SIG undefined camellia_cbc_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
camellia_cbc_cipher(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  uVar6 = 1;
  lVar3 = FTcpDeserializedMessage::GetMessage();
  lVar1 = *(longlong *)(lVar3 + 0x120);
  iVar2 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
  if (lVar1 == 0) {
    uVar4 = *(undefined8 *)(lVar3 + 0x118);
    uVar5 = IMessageToken::ToText(param_1);
    if (iVar2 == 0) {
      CRYPTO_cbc128_decrypt(param_3,param_2,param_4,lVar3,uVar5,uVar4);
    }
    else {
      CRYPTO_cbc128_encrypt();
    }
  }
  else {
    uVar4 = IMessageToken::ToText(param_1);
    (**(code **)(lVar3 + 0x120))(param_3,param_2,param_4,lVar3,uVar4,CONCAT44(uVar6,iVar2));
  }
  return 1;
}



// FUNCTION 143d0a760 camellia_ecb_cipher body=140 status=ok
// SIG undefined camellia_ecb_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
camellia_ecb_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  iVar1 = EVP_CIPHER_CTX_block_size();
  uVar4 = (ulonglong)iVar1;
  lVar2 = FTcpDeserializedMessage::GetMessage(param_1);
  if (uVar4 <= param_4) {
    lVar3 = param_3;
    do {
      (**(code **)(lVar2 + 0x118))(lVar3,(param_2 - param_3) + lVar3,lVar2);
      lVar3 = lVar3 + uVar4;
    } while ((ulonglong)(lVar3 - param_3) <= param_4 - uVar4);
  }
  return 1;
}



// FUNCTION 143d0a7f0 camellia_ofb_cipher body=163 status=ok
// SIG undefined camellia_ofb_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
camellia_ofb_cipher(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_18 [2];
  undefined8 uStack_10;
  
  uStack_10 = 0x143d0a810;
  lVar1 = FTcpDeserializedMessage::GetMessage();
  local_18[0] = FOnlineVoiceImpl::GetNumLocalTalkers(param_1);
  uVar2 = IMessageToken::ToText(param_1);
  CRYPTO_ofb128_encrypt(param_3,param_2,param_4,lVar1,uVar2,local_18,*(undefined8 *)(lVar1 + 0x118))
  ;
  FArchiveState::SetGameNetVer(param_1,local_18[0]);
  return 1;
}



// FUNCTION 143d0a8a0 camellia_cfb_cipher body=176 status=ok
// SIG undefined camellia_cfb_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
camellia_cfb_cipher(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_28 [2];
  undefined8 uStack_20;
  
  uStack_20 = 0x143d0a8be;
  lVar2 = FTcpDeserializedMessage::GetMessage();
  local_28[0] = FOnlineVoiceImpl::GetNumLocalTalkers(param_1);
  uVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
  uVar3 = IMessageToken::ToText(param_1);
  CRYPTO_cfb128_encrypt
            (param_3,param_2,param_4,lVar2,uVar3,local_28,uVar1,*(undefined8 *)(lVar2 + 0x118));
  FArchiveState::SetGameNetVer(param_1,local_28[0]);
  return 1;
}



// FUNCTION 143d0a950 camellia_cfb8_cipher body=176 status=ok
// SIG undefined camellia_cfb8_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
camellia_cfb8_cipher(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_28 [2];
  undefined8 uStack_20;
  
  uStack_20 = 0x143d0a96e;
  lVar2 = FTcpDeserializedMessage::GetMessage();
  local_28[0] = FOnlineVoiceImpl::GetNumLocalTalkers(param_1);
  uVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
  uVar3 = IMessageToken::ToText(param_1);
  CRYPTO_cfb128_8_encrypt
            (param_3,param_2,param_4,lVar2,uVar3,local_28,uVar1,*(undefined8 *)(lVar2 + 0x118));
  FArchiveState::SetGameNetVer(param_1,local_28[0]);
  return 1;
}



// FUNCTION 143d0aa00 camellia_cfb1_cipher body=414 status=ok
// SIG undefined camellia_cfb1_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
camellia_cfb1_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 local_38 [2];
  undefined8 uStack_30;
  
  uStack_30 = 0x143d0aa17;
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
                   *(undefined8 *)(lVar3 + 0x118));
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
            (param_3,param_2,param_4,lVar3,uVar4,local_38,uVar2,*(undefined8 *)(lVar3 + 0x118));
  FArchiveState::SetGameNetVer(param_1,local_38[0]);
  return 1;
}



// FUNCTION 143d0aba0 camellia_ctr_cipher body=234 status=ok
// SIG undefined camellia_ctr_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
camellia_ctr_cipher(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_28 [2];
  undefined8 uStack_20;
  
  uStack_20 = 0x143d0abc4;
  local_28[0] = FOnlineVoiceImpl::GetNumLocalTalkers();
  lVar2 = FTcpDeserializedMessage::GetMessage(param_1);
  lVar1 = *(longlong *)(lVar2 + 0x120);
  uVar3 = UListView::OnItemSelectionChanged(param_1);
  uVar4 = IMessageToken::ToText(param_1);
  if (lVar1 == 0) {
    CRYPTO_ctr128_encrypt
              (param_3,param_2,param_4,lVar2,uVar4,uVar3,local_28,*(undefined8 *)(lVar2 + 0x118));
  }
  else {
    CRYPTO_ctr128_encrypt_ctr32(param_3);
  }
  FArchiveState::SetGameNetVer(param_1,local_28[0]);
  return 1;
}



// FUNCTION 143d0ac90 FUN_143d0ac90 body=8 status=ok
// SIG undefined FUN_143d0ac90(void)

undefined * FUN_143d0ac90(void)

{
  return &DAT_145d761f0;
}



// FUNCTION 143d0aca0 FUN_143d0aca0 body=8 status=ok
// SIG undefined FUN_143d0aca0(void)

undefined * FUN_143d0aca0(void)

{
  return &DAT_145d76370;
}



// FUNCTION 143d0acb0 FUN_143d0acb0 body=8 status=ok
// SIG undefined FUN_143d0acb0(void)

undefined * FUN_143d0acb0(void)

{
  return &DAT_145d76310;
}



// FUNCTION 143d0acc0 FUN_143d0acc0 body=8 status=ok
// SIG undefined FUN_143d0acc0(void)

undefined * FUN_143d0acc0(void)

{
  return &DAT_145d763d0;
}



// FUNCTION 143d0acd0 FUN_143d0acd0 body=8 status=ok
// SIG undefined FUN_143d0acd0(void)

undefined * FUN_143d0acd0(void)

{
  return &DAT_145d76430;
}



// FUNCTION 143d0ace0 FUN_143d0ace0 body=8 status=ok
// SIG undefined FUN_143d0ace0(void)

undefined * FUN_143d0ace0(void)

{
  return &DAT_145d76250;
}



// FUNCTION 143d0acf0 FUN_143d0acf0 body=8 status=ok
// SIG undefined FUN_143d0acf0(void)

undefined * FUN_143d0acf0(void)

{
  return &DAT_145d762b0;
}



// FUNCTION 143d0ad00 FUN_143d0ad00 body=8 status=ok
// SIG undefined FUN_143d0ad00(void)

undefined * FUN_143d0ad00(void)

{
  return &DAT_145d76490;
}



// FUNCTION 143d0ad10 FUN_143d0ad10 body=8 status=ok
// SIG undefined FUN_143d0ad10(void)

undefined * FUN_143d0ad10(void)

{
  return &DAT_145d76610;
}



// FUNCTION 143d0ad20 FUN_143d0ad20 body=8 status=ok
// SIG undefined FUN_143d0ad20(void)

undefined * FUN_143d0ad20(void)

{
  return &DAT_145d765b0;
}



// FUNCTION 143d0ad30 FUN_143d0ad30 body=8 status=ok
// SIG undefined FUN_143d0ad30(void)

undefined * FUN_143d0ad30(void)

{
  return &DAT_145d76670;
}



// FUNCTION 143d0ad40 FUN_143d0ad40 body=8 status=ok
// SIG undefined FUN_143d0ad40(void)

undefined * FUN_143d0ad40(void)

{
  return &DAT_145d766d0;
}



// FUNCTION 143d0ad50 FUN_143d0ad50 body=8 status=ok
// SIG undefined FUN_143d0ad50(void)

undefined * FUN_143d0ad50(void)

{
  return &DAT_145d764f0;
}



// FUNCTION 143d0ad60 FUN_143d0ad60 body=8 status=ok
// SIG undefined FUN_143d0ad60(void)

undefined * FUN_143d0ad60(void)

{
  return &DAT_145d76550;
}



// FUNCTION 143d0ad70 FUN_143d0ad70 body=8 status=ok
// SIG undefined FUN_143d0ad70(void)

undefined * FUN_143d0ad70(void)

{
  return &DAT_145d76730;
}



// FUNCTION 143d0ad80 FUN_143d0ad80 body=8 status=ok
// SIG undefined FUN_143d0ad80(void)

undefined * FUN_143d0ad80(void)

{
  return &DAT_145d768b0;
}



// FUNCTION 143d0ad90 FUN_143d0ad90 body=8 status=ok
// SIG undefined FUN_143d0ad90(void)

undefined * FUN_143d0ad90(void)

{
  return &DAT_145d76850;
}



// FUNCTION 143d0ada0 FUN_143d0ada0 body=8 status=ok
// SIG undefined FUN_143d0ada0(void)

undefined * FUN_143d0ada0(void)

{
  return &DAT_145d76910;
}



// FUNCTION 143d0adb0 FUN_143d0adb0 body=8 status=ok
// SIG undefined FUN_143d0adb0(void)

undefined * FUN_143d0adb0(void)

{
  return &DAT_145d76970;
}



// FUNCTION 143d0adc0 FUN_143d0adc0 body=8 status=ok
// SIG undefined FUN_143d0adc0(void)

undefined * FUN_143d0adc0(void)

{
  return &DAT_145d76790;
}



// FUNCTION 143d0add0 FUN_143d0add0 body=8 status=ok
// SIG undefined FUN_143d0add0(void)

undefined * FUN_143d0add0(void)

{
  return &DAT_145d767f0;
}



// FUNCTION 143d0ade0 chacha_init_key body=218 status=ok
// SIG undefined chacha_init_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 chacha_init_key(longlong param_1,longlong param_2,longlong param_3)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined2 uVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  longlong lVar8;
  
  lVar4 = *(longlong *)(param_1 + 0x70);
  if (param_2 != 0) {
    puVar1 = (undefined2 *)(param_2 + 2);
    lVar8 = 8;
    puVar7 = puVar1;
    do {
      uVar5 = *puVar7;
      puVar2 = (undefined1 *)((longlong)puVar7 + -1);
      puVar3 = (undefined1 *)((param_2 - (longlong)puVar1) + (longlong)puVar7);
      uVar6 = (longlong)puVar7 - (longlong)puVar1;
      puVar7 = puVar7 + 2;
      *(uint *)(lVar4 + (uVar6 & 0xfffffffffffffffc)) = CONCAT31(CONCAT21(uVar5,*puVar2),*puVar3);
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  if (param_3 != 0) {
    puVar1 = (undefined2 *)(param_3 + 2);
    lVar8 = 4;
    puVar7 = puVar1;
    do {
      uVar5 = *puVar7;
      puVar2 = (undefined1 *)((longlong)puVar7 + -1);
      puVar3 = (undefined1 *)((param_3 - (longlong)puVar1) + (longlong)puVar7);
      uVar6 = (longlong)puVar7 - (longlong)puVar1;
      puVar7 = puVar7 + 2;
      *(uint *)(lVar4 + 0x20 + (uVar6 & 0xfffffffffffffffc)) =
           CONCAT31(CONCAT21(uVar5,*puVar2),*puVar3);
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  *(undefined4 *)(lVar4 + 0x70) = 0;
  return 1;
}



// FUNCTION 143d0aec0 chacha_cipher body=453 status=ok
// SIG undefined chacha_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 chacha_cipher(longlong param_1,byte *param_2,byte *param_3,ulonglong param_4)

{
  uint *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  byte bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  lVar8 = *(longlong *)(param_1 + 0x70);
  uVar11 = *(uint *)(lVar8 + 0x70);
  puVar1 = (uint *)(lVar8 + 0x70);
  if (uVar11 != 0) {
    for (; (param_4 != 0 && (uVar11 < 0x40)); uVar11 = uVar11 + 1) {
      bVar4 = *param_3;
      param_3 = param_3 + 1;
      *param_2 = *(byte *)((ulonglong)uVar11 + 0x30 + lVar8) ^ bVar4;
      param_2 = param_2 + 1;
      param_4 = param_4 - 1;
    }
    *puVar1 = uVar11;
    if (param_4 == 0) {
      return 1;
    }
    if (uVar11 == 0x40) {
      *puVar1 = 0;
      piVar2 = (int *)(lVar8 + 0x20);
      *piVar2 = *piVar2 + 1;
      if (*piVar2 == 0) {
        *(int *)(lVar8 + 0x24) = *(int *)(lVar8 + 0x24) + 1;
      }
    }
  }
  uVar11 = *(uint *)(lVar8 + 0x20);
  uVar12 = (uint)param_4 & 0x3f;
  uVar7 = param_4 - uVar12;
  if (0x3f < uVar7) {
    do {
      uVar6 = uVar7 >> 6;
      if (0x10000000 < uVar6) {
        uVar6 = 0x10000000;
      }
      uVar13 = uVar11 + (int)uVar6;
      uVar5 = (ulonglong)uVar13;
      uVar11 = 0;
      if (uVar6 <= uVar5) {
        uVar11 = uVar13;
      }
      uVar9 = uVar6 - uVar5;
      if (uVar6 <= uVar5) {
        uVar9 = uVar6;
      }
      lVar10 = uVar9 * 0x40;
      FUN_140086000(param_2,param_3,lVar10,lVar8,(uint *)(lVar8 + 0x20));
      uVar7 = uVar7 + uVar9 * -0x40;
      *(uint *)(lVar8 + 0x20) = uVar11;
      param_3 = param_3 + lVar10;
      param_2 = param_2 + lVar10;
      if (uVar11 == 0) {
        *(int *)(lVar8 + 0x24) = *(int *)(lVar8 + 0x24) + 1;
      }
    } while (0x3f < uVar7);
  }
  uVar7 = (ulonglong)uVar12;
  if ((param_4 & 0x3f) != 0) {
    puVar3 = (undefined8 *)(lVar8 + 0x30);
    *puVar3 = 0;
    *(undefined8 *)(lVar8 + 0x38) = 0;
    *(undefined8 *)(lVar8 + 0x40) = 0;
    *(undefined8 *)(lVar8 + 0x48) = 0;
    *(undefined8 *)(lVar8 + 0x50) = 0;
    *(undefined8 *)(lVar8 + 0x58) = 0;
    *(undefined8 *)(lVar8 + 0x60) = 0;
    *(undefined8 *)(lVar8 + 0x68) = 0;
    FUN_140086000(puVar3,puVar3,0x40,lVar8,lVar8 + 0x20);
    if ((param_4 & 0x3f) != 0) {
      lVar8 = lVar8 - (longlong)param_3;
      lVar10 = (longlong)param_2 - (longlong)param_3;
      do {
        param_3[lVar10] = param_3[lVar8 + 0x30] ^ *param_3;
        param_3 = param_3 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    *puVar1 = uVar12;
  }
  return 1;
}



// FUNCTION 143d0b090 chacha20_poly1305_init_key body=313 status=ok
// SIG undefined chacha20_poly1305_init_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
chacha20_poly1305_init_key(longlong param_1,longlong param_2,void *param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined2 uVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28 [2];
  
  local_28[1] = 0x143d0b0a2;
  local_28[0] = DAT_1468387a8 ^ (ulonglong)auStack_58;
  lVar5 = *(longlong *)(param_1 + 0x70);
  if ((param_2 != 0) || (param_3 != (void *)0x0)) {
    *(undefined8 *)(lVar5 + 200) = 0xffffffffffffffff;
    *(undefined8 *)(lVar5 + 0xa8) = 0;
    *(undefined8 *)(lVar5 + 0xb0) = 0;
    *(undefined8 *)(lVar5 + 0xb8) = 0;
    if (param_3 == (void *)0x0) {
      lVar5 = *(longlong *)(param_1 + 0x70);
      if (param_2 != 0) {
        puVar1 = (undefined2 *)(param_2 + 2);
        lVar9 = 8;
        puVar8 = puVar1;
        do {
          uVar6 = *puVar8;
          puVar2 = (undefined1 *)((longlong)puVar8 + -1);
          puVar3 = (undefined1 *)((param_2 - (longlong)puVar1) + (longlong)puVar8);
          uVar7 = (longlong)puVar8 - (longlong)puVar1;
          puVar8 = puVar8 + 2;
          *(uint *)(lVar5 + (uVar7 & 0xfffffffffffffffc)) =
               CONCAT31(CONCAT21(uVar6,*puVar2),*puVar3);
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      *(undefined4 *)(lVar5 + 0x70) = 0;
    }
    else {
      local_38 = 0;
      local_30 = 0;
      iVar4 = *(int *)(lVar5 + 0xc4);
      if (iVar4 < 0x11) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)local_28 - (longlong)iVar4),param_3,(longlong)iVar4);
      }
      chacha_init_key(param_1,param_2,&local_38,param_4);
      *(undefined4 *)(lVar5 + 0x78) = *(undefined4 *)(lVar5 + 0x24);
      *(undefined4 *)(lVar5 + 0x7c) = *(undefined4 *)(lVar5 + 0x28);
      *(undefined4 *)(lVar5 + 0x80) = *(undefined4 *)(lVar5 + 0x2c);
    }
  }
  return 1;
}



// FUNCTION 143d0b1d0 chacha20_poly1305_cipher body=800 status=ok
// SIG undefined chacha20_poly1305_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong chacha20_poly1305_cipher
                    (longlong param_1,undefined8 *param_2,longlong param_3,ulonglong param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  size_t sVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  size_t _Size;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  undefined1 local_68 [16];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x143d0b1e7;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(param_1 + 0x70);
  sVar3 = *(size_t *)(lVar2 + 200);
  if (*(int *)(lVar2 + 0xbc) == 0) {
    if ((sVar3 != 0xffffffffffffffff) && (param_2 != (undefined8 *)0x0)) {
      uVar7 = chacha20_poly1305_tls_cipher();
      return uVar7;
    }
    puVar1 = (undefined4 *)(lVar2 + 0x20);
    *puVar1 = 0;
    local_78 = puVar1;
    FUN_140086000(lVar2 + 0x30,&DAT_145d76a40,0x40,lVar2);
    Poly1305_Init(lVar2 + 0xd0,lVar2 + 0x30);
    *puVar1 = 1;
    *(undefined4 *)(lVar2 + 0x70) = 0;
    *(undefined8 *)(lVar2 + 0xb0) = 0;
    *(undefined8 *)(lVar2 + 0xa8) = 0;
    *(undefined4 *)(lVar2 + 0xbc) = 1;
    if (sVar3 != 0xffffffffffffffff) {
      Poly1305_Update(lVar2 + 0xd0,lVar2 + 0x94,0xd);
      *(undefined8 *)(lVar2 + 0xa8) = 0xd;
      *(undefined4 *)(lVar2 + 0xb8) = 1;
    }
  }
  _Size = sVar3;
  lVar9 = param_3;
  puVar10 = param_2;
  if (param_3 != 0) {
    if (param_2 == (undefined8 *)0x0) {
      Poly1305_Update(lVar2 + 0xd0,param_3,param_4);
      *(longlong *)(lVar2 + 0xa8) = *(longlong *)(lVar2 + 0xa8) + param_4;
      *(undefined4 *)(lVar2 + 0xb8) = 1;
      goto LAB_143d0b4cf;
    }
    if (*(int *)(lVar2 + 0xb8) != 0) {
      uVar5 = *(uint *)(lVar2 + 0xa8) & 0xf;
      if (uVar5 != 0) {
        Poly1305_Update(lVar2 + 0xd0,&DAT_145d76a40,0x10 - (ulonglong)uVar5);
      }
      *(undefined4 *)(lVar2 + 0xb8) = 0;
    }
    *(undefined8 *)(lVar2 + 200) = 0xffffffffffffffff;
    _Size = param_4;
    if ((sVar3 != 0xffffffffffffffff) && (_Size = sVar3, param_4 != sVar3 + 0x10)) {
      return 0xffffffff;
    }
    lVar9 = param_3 + _Size;
    puVar10 = (undefined8 *)((longlong)param_2 + _Size);
    if (*(int *)(param_1 + 0x10) == 0) {
      Poly1305_Update(lVar2 + 0xd0,param_3,_Size);
      chacha_cipher(param_1,param_2,param_3,_Size);
    }
    else {
      chacha_cipher(param_1,param_2,param_3,_Size);
      Poly1305_Update(lVar2 + 0xd0,param_2,_Size);
    }
    *(longlong *)(lVar2 + 0xb0) = *(longlong *)(lVar2 + 0xb0) + _Size;
    if ((lVar9 != 0) && (_Size == param_4)) goto LAB_143d0b4cf;
  }
  if (*(int *)(lVar2 + 0xb8) != 0) {
    uVar5 = *(uint *)(lVar2 + 0xa8) & 0xf;
    if (uVar5 != 0) {
      Poly1305_Update(lVar2 + 0xd0,&DAT_145d76a40,0x10 - (ulonglong)uVar5);
    }
    *(undefined4 *)(lVar2 + 0xb8) = 0;
  }
  uVar5 = *(uint *)(lVar2 + 0xb0) & 0xf;
  if (uVar5 != 0) {
    Poly1305_Update(lVar2 + 0xd0,&DAT_145d76a40,0x10 - (ulonglong)uVar5);
  }
  Poly1305_Update(lVar2 + 0xd0,lVar2 + 0xa8,0x10);
  puVar8 = (undefined1 *)(lVar2 + 0x84);
  if (*(int *)(param_1 + 0x10) == 0) {
    puVar8 = local_68;
  }
  Poly1305_Final(lVar2 + 0xd0,puVar8);
  *(undefined4 *)(lVar2 + 0xbc) = 0;
  if ((lVar9 == 0) || (param_4 == _Size)) {
    if ((*(int *)(param_1 + 0x10) == 0) &&
       (iVar6 = FUN_14004ffa0(local_68,lVar2 + 0x84,(longlong)*(int *)(lVar2 + 0xc0)), iVar6 != 0))
    {
      return 0xffffffff;
    }
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    iVar6 = FUN_14004ffa0(local_68,lVar9,0x10);
    if (iVar6 != 0) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)puVar10 - _Size),0,_Size);
      return 0xffffffff;
    }
  }
  else {
    uVar4 = *(undefined8 *)(lVar2 + 0x8c);
    *puVar10 = *(undefined8 *)(lVar2 + 0x84);
    puVar10[1] = uVar4;
  }
LAB_143d0b4cf:
  return param_4 & 0xffffffff;
}



// FUNCTION 143d0b4f0 chacha20_poly1305_cleanup body=57 status=ok
// SIG undefined chacha20_poly1305_cleanup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 chacha20_poly1305_cleanup(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    lVar1 = Poly1305_ctx_size();
    FUN_14004ff40(*(undefined8 *)(param_1 + 0x70),lVar1 + 0xd0);
  }
  return 1;
}



// FUNCTION 143d0b530 FUN_143d0b530 body=844 status=ok
// SIG undefined FUN_143d0b530(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_143d0b530(longlong param_1,undefined4 param_2,int param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143d0b54a;
  lVar3 = *(longlong *)(param_1 + 0x70);
  switch(param_2) {
  case 0:
    if (lVar3 == 0) {
      lVar3 = Poly1305_ctx_size();
      lVar3 = CRYPTO_zalloc(lVar3 + 0xd0,"crypto\\evp\\e_chacha20_poly1305.c",0x1fb);
      *(longlong *)(param_1 + 0x70) = lVar3;
      if (lVar3 == 0) {
        ERR_put_error(6,0xb6,0x86,"crypto\\evp\\e_chacha20_poly1305.c",0x1fd,uVar5);
        return 0;
      }
    }
    *(undefined4 *)(lVar3 + 0xc4) = 0xc;
    *(undefined8 *)(lVar3 + 0xa8) = 0;
    *(undefined8 *)(lVar3 + 0xb0) = 0;
    *(undefined8 *)(lVar3 + 0xb8) = 0;
    *(undefined4 *)(lVar3 + 0xc0) = 0;
    *(undefined8 *)(lVar3 + 200) = 0xffffffffffffffff;
    *(undefined8 *)(lVar3 + 0x94) = 0;
    *(undefined8 *)(lVar3 + 0x9c) = 0;
    break;
  default:
    return 0xffffffff;
  case 8:
    if (lVar3 != 0) {
      lVar2 = Poly1305_ctx_size();
      lVar3 = CRYPTO_memdup(lVar3,lVar2 + 0xd0,"crypto\\evp\\e_chacha20_poly1305.c",0x20f);
      param_4[0xe] = lVar3;
      if (lVar3 == 0) {
        ERR_put_error(6,0xb6,0xad,"crypto\\evp\\e_chacha20_poly1305.c",0x211);
        return 0;
      }
    }
    break;
  case 9:
    if (0xf < param_3 - 1U) {
      return 0;
    }
    *(int *)(lVar3 + 0xc4) = param_3;
    return 1;
  case 0x10:
    if (0xf < param_3 - 1U) {
      return 0;
    }
    if (*(int *)(param_1 + 0x10) == 0) {
      return 0;
    }
    _guard_xfg_dispatch_icall_nop(param_4,(void *)(lVar3 + 0x84),(longlong)param_3);
    return 1;
  case 0x11:
    if (0xf < param_3 - 1U) {
      return 0;
    }
    if (param_4 != (undefined8 *)0x0) {
      _guard_xfg_dispatch_icall_nop((void *)(lVar3 + 0x84),param_4,(longlong)param_3);
      *(int *)(lVar3 + 0xc0) = param_3;
      return 1;
    }
    break;
  case 0x12:
    if (param_3 != 0xc) {
      return 0;
    }
    uVar1 = *(undefined4 *)param_4;
    *(undefined4 *)(lVar3 + 0x24) = uVar1;
    *(undefined4 *)(lVar3 + 0x78) = uVar1;
    uVar1 = *(undefined4 *)((longlong)param_4 + 4);
    *(undefined4 *)(lVar3 + 0x28) = uVar1;
    *(undefined4 *)(lVar3 + 0x7c) = uVar1;
    uVar1 = *(undefined4 *)(param_4 + 1);
    *(undefined4 *)(lVar3 + 0x2c) = uVar1;
    *(undefined4 *)(lVar3 + 0x80) = uVar1;
    return 1;
  case 0x16:
    if (param_3 != 0xd) {
      return 0;
    }
    *(undefined8 *)(lVar3 + 0x94) = *param_4;
    *(undefined4 *)(lVar3 + 0x9c) = *(undefined4 *)(param_4 + 1);
    *(undefined1 *)(lVar3 + 0xa0) = *(undefined1 *)((longlong)param_4 + 0xc);
    uVar4 = (uint)CONCAT11(*(undefined1 *)((longlong)param_4 + 0xb),
                           *(undefined1 *)((longlong)param_4 + 0xc));
    if (*(int *)(param_1 + 0x10) == 0) {
      if (uVar4 < 0x10) {
        return 0;
      }
      uVar4 = uVar4 - 0x10;
      *(char *)(lVar3 + 0xa0) = (char)uVar4;
      *(char *)(lVar3 + 0x9f) = (char)(uVar4 >> 8);
    }
    *(ulonglong *)(lVar3 + 200) = (ulonglong)uVar4;
    *(undefined4 *)(lVar3 + 0x24) = *(undefined4 *)(lVar3 + 0x78);
    *(uint *)(lVar3 + 0x28) = *(uint *)(lVar3 + 0x94) ^ *(uint *)(lVar3 + 0x7c);
    *(uint *)(lVar3 + 0x2c) = *(uint *)(lVar3 + 0x98) ^ *(uint *)(lVar3 + 0x80);
    *(undefined4 *)(lVar3 + 0xbc) = 0;
    return 0x10;
  case 0x17:
    break;
  }
  return 1;
}



// FUNCTION 143d0b8e0 FUN_143d0b8e0 body=8 status=ok
// SIG undefined FUN_143d0b8e0(void)

undefined * FUN_143d0b8e0(void)

{
  return &DAT_145d769e0;
}



// FUNCTION 143d0b8f0 FUN_143d0b8f0 body=8 status=ok
// SIG undefined FUN_143d0b8f0(void)

undefined * FUN_143d0b8f0(void)

{
  return &DAT_146836e70;
}



// FUNCTION 143d0b900 chacha20_poly1305_tls_cipher body=747 status=ok
// SIG undefined chacha20_poly1305_tls_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong chacha20_poly1305_tls_cipher
                    (longlong param_1,undefined8 *param_2,longlong param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  int iVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  longlong lVar12;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  undefined4 *local_198;
  undefined1 *local_190;
  longlong local_188;
  ulonglong local_180;
  undefined1 local_178 [48];
  undefined4 auStack_148 [4];
  undefined4 auStack_138 [56];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  lVar2 = *(longlong *)(param_1 + 0x70);
  uVar3 = *(ulonglong *)(lVar2 + 200);
  if (param_4 == uVar3 + 0x10) {
    uVar10 = (ulonglong)(-((int)&stack0x00000028 + -0x1a0) & 0xf);
    lVar12 = 0;
    local_190 = local_178 + uVar10;
    *(undefined4 *)(lVar2 + 0x20) = 0;
    lVar1 = lVar2 + 0xd0;
    local_198 = (undefined4 *)((longlong)auStack_148 + uVar10);
    local_1a8 = lVar2 + 0x20;
    puVar11 = (undefined4 *)((longlong)auStack_138 + uVar10);
    local_188 = param_1;
    if (uVar3 < 0xc1) {
      local_180 = uVar3 + 0x7f & 0xffffffffffffffc0;
      FUN_140086000(local_190,&DAT_145d76a40,local_180,lVar2);
      Poly1305_Init(lVar1,local_190);
      *(undefined4 *)(lVar2 + 0x70) = 0;
      lVar12 = 0x10;
      uVar4 = *(undefined4 *)(lVar2 + 0x98);
      uVar5 = *(undefined4 *)(lVar2 + 0x9c);
      uVar6 = *(undefined4 *)(lVar2 + 0xa0);
      *local_198 = *(undefined4 *)(lVar2 + 0x94);
      local_198[1] = uVar4;
      local_198[2] = uVar5;
      local_198[3] = uVar6;
      *(undefined8 *)(lVar2 + 0xa8) = 0xd;
      *(ulonglong *)(lVar2 + 0xb0) = uVar3;
      if (uVar3 != 0) {
        if (*(int *)(local_188 + 0x10) == 0) {
          puVar11 = (undefined4 *)FUN_14008dab0(param_2,param_3,puVar11,uVar3);
        }
        else {
          puVar11 = (undefined4 *)FUN_14008da40();
        }
        param_3 = param_3 + uVar3;
        param_2 = (undefined8 *)((longlong)param_2 + uVar3);
        lVar12 = (longlong)puVar11 - (longlong)local_198;
      }
    }
    else {
      local_180 = 0x40;
      FUN_140086000(local_190,&DAT_145d76a40,0x40,lVar2);
      Poly1305_Init(lVar1,local_190);
      *(undefined4 *)(lVar2 + 0x20) = 1;
      *(undefined4 *)(lVar2 + 0x70) = 0;
      Poly1305_Update(lVar1,lVar2 + 0x94,0x10);
      *(undefined8 *)(lVar2 + 0xa8) = 0xd;
      *(ulonglong *)(lVar2 + 0xb0) = uVar3;
      local_198 = puVar11;
      if (*(int *)(local_188 + 0x10) == 0) {
        Poly1305_Update(lVar1,param_3,uVar3);
        local_1a8 = lVar2 + 0x20;
        FUN_140086000(param_2,param_3,uVar3,lVar2);
      }
      else {
        local_1a8 = lVar2 + 0x20;
        FUN_140086000(param_2,param_3,uVar3,lVar2);
        Poly1305_Update(lVar1,param_2,uVar3);
      }
      param_3 = param_3 + uVar3;
      param_2 = (undefined8 *)((longlong)param_2 + uVar3);
      Poly1305_Update(lVar1,&DAT_145d76a40,-(int)uVar3 & 0xf);
    }
    puVar8 = local_198;
    uVar4 = *(undefined4 *)(lVar2 + 0xac);
    uVar5 = *(undefined4 *)(lVar2 + 0xb0);
    uVar6 = *(undefined4 *)(lVar2 + 0xb4);
    *puVar11 = *(undefined4 *)(lVar2 + 0xa8);
    puVar11[1] = uVar4;
    puVar11[2] = uVar5;
    puVar11[3] = uVar6;
    Poly1305_Update(lVar1,local_198,lVar12 + 0x10);
    FUN_14004ff40(local_190,local_180);
    lVar12 = local_188;
    puVar11 = (undefined4 *)(lVar2 + 0x84);
    if (*(int *)(local_188 + 0x10) == 0) {
      puVar11 = puVar8;
    }
    Poly1305_Final(lVar1,puVar11);
    *(undefined8 *)(lVar2 + 200) = 0xffffffffffffffff;
    if (*(int *)(lVar12 + 0x10) == 0) {
      iVar9 = FUN_14004ffa0(puVar8,param_3,0x10);
      if (iVar9 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)param_2 + (0x10 - param_4)),0,param_4 - 0x10);
        return 0xffffffff;
      }
    }
    else {
      uVar7 = *(undefined8 *)(lVar2 + 0x8c);
      *param_2 = *(undefined8 *)(lVar2 + 0x84);
      param_2[1] = uVar7;
    }
    param_4 = param_4 & 0xffffffff;
  }
  else {
    param_4 = 0xffffffff;
  }
  return param_4;
}



// FUNCTION 143d0bbf0 seed_init_key body=45 status=ok
// SIG undefined seed_init_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 seed_init_key(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FTcpDeserializedMessage::GetMessage();
  SEED_set_key(param_2,uVar1);
  return 1;
}



// FUNCTION 143d0bc20 seed_cbc_cipher body=254 status=ok
// SIG undefined seed_cbc_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 seed_cbc_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143d0bc3f;
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
      SEED_cbc_encrypt(param_3,param_2,0x40000000,uVar4,uVar3,uVar6);
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
    SEED_cbc_encrypt(param_3,param_2,(longlong)(int)param_4,uVar3,uVar6,CONCAT44(uVar1,uVar2));
  }
  return 1;
}



// FUNCTION 143d0bd20 seed_cfb128_cipher body=267 status=ok
// SIG undefined seed_cfb128_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
seed_cfb128_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

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
    SEED_cfb128_encrypt(param_3,param_2,(longlong)(int)uVar5,uVar3,uVar2,local_res20,uVar1);
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



// FUNCTION 143d0be30 seed_ecb_cipher body=166 status=ok
// SIG undefined seed_ecb_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 seed_ecb_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

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
      SEED_ecb_encrypt(lVar2,(param_2 - param_3) + lVar2,uVar3,uVar1);
      lVar2 = lVar2 + uVar4;
    } while ((ulonglong)(lVar2 - param_3) <= param_4 - uVar4);
  }
  return 1;
}



// FUNCTION 143d0bee0 seed_ofb_cipher body=279 status=ok
// SIG undefined seed_ofb_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 seed_ofb_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

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
      SEED_ofb128_encrypt(param_3,param_2,0x40000000,uVar2,uVar1,local_res20);
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
    SEED_ofb128_encrypt(param_3,param_2,(longlong)(int)param_4,uVar2,uVar1,local_res20);
    FArchiveState::SetGameNetVer(param_1,local_res20[0]);
  }
  return 1;
}



// FUNCTION 143d0c000 FUN_143d0c000 body=8 status=ok
// SIG undefined FUN_143d0c000(void)

undefined * FUN_143d0c000(void)

{
  return &DAT_145d76b70;
}



// FUNCTION 143d0c010 FUN_143d0c010 body=8 status=ok
// SIG undefined FUN_143d0c010(void)

undefined * FUN_143d0c010(void)

{
  return &DAT_145d76bd0;
}



// FUNCTION 143d0c020 FUN_143d0c020 body=8 status=ok
// SIG undefined FUN_143d0c020(void)

undefined * FUN_143d0c020(void)

{
  return &DAT_145d76c90;
}



// FUNCTION 143d0c030 FUN_143d0c030 body=8 status=ok
// SIG undefined FUN_143d0c030(void)

undefined * FUN_143d0c030(void)

{
  return &DAT_145d76c30;
}



// FUNCTION 143d0c040 OPENSSL_DIR_end body=91 status=ok
// SIG undefined OPENSSL_DIR_end(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OPENSSL_DIR_end(longlong *param_1)

{
  int *piVar1;
  
  if ((param_1 != (longlong *)0x0) && (*param_1 != 0)) {
    FindClose(*(HANDLE *)(*param_1 + 0x250));
    free((void *)*param_1);
    *param_1 = 0;
    return 1;
  }
  piVar1 = _errno();
  *piVar1 = 0x16;
  return 0;
}



// FUNCTION 143d0c0a0 OPENSSL_DIR_read body=976 status=ok
// SIG undefined OPENSSL_DIR_read(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong OPENSSL_DIR_read(longlong *param_1,LPCSTR param_2)

{
  ulonglong uVar1;
  char cVar2;
  WCHAR WVar3;
  LPWIN32_FIND_DATAW p_Var4;
  uint uVar5;
  int iVar6;
  DWORD DVar7;
  BOOL BVar8;
  int iVar9;
  int *piVar10;
  void *pvVar11;
  ulonglong uVar12;
  undefined1 (*pauVar13) [16];
  HANDLE pvVar14;
  char *pcVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  LPCWSTR pWVar22;
  ulonglong uVar23;
  UINT CodePage;
  ulonglong uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar42 [16];
  undefined1 auVar50 [16];
  undefined8 uStackY_80;
  undefined1 auStackY_78 [32];
  CHAR aCStack_3a [2];
  ulonglong local_38;
  undefined8 local_30;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 uVar41;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  
  local_30 = 0x143d0c0b4;
  puVar19 = auStackY_78;
  puVar21 = auStackY_78;
  local_38 = DAT_1468387a8 ^ (ulonglong)&local_38;
  puVar20 = auStackY_78;
  if ((param_1 == (longlong *)0x0) || (puVar20 = auStackY_78, param_2 == (LPCSTR)0x0)) {
LAB_143d0c35f:
    *(undefined8 *)(puVar20 + -8) = 0x143d0c365;
    piVar10 = _errno();
    *piVar10 = 0x16;
    puVar21 = puVar20;
  }
  else {
    uStackY_80 = 0x143d0c0f4;
    piVar10 = _errno();
    uVar17 = 0;
    uVar5 = 0;
    *piVar10 = 0;
    p_Var4 = (LPWIN32_FIND_DATAW)*param_1;
    if (p_Var4 != (LPWIN32_FIND_DATAW)0x0) {
      uStackY_80 = 0x143d0c3de;
      BVar8 = FindNextFileW(*(HANDLE *)(p_Var4 + 1),p_Var4);
      if (BVar8 == 0) goto LAB_143d0c36b;
LAB_143d0c3e2:
      lVar16 = *param_1;
      WVar3 = *(WCHAR *)(lVar16 + 0x2c);
      pWVar22 = (LPCWSTR)(lVar16 + 0x2c);
      uVar23 = uVar17;
      while ((WVar3 != L'\0' && (uVar23 < 0xff))) {
        uVar23 = uVar23 + 1;
        WVar3 = pWVar22[uVar23];
      }
      *(undefined8 *)(puVar19 + 0x38) = 0;
      *(undefined8 *)(puVar19 + 0x30) = 0;
      uVar23 = uVar23 + 1;
      *(undefined4 *)(puVar19 + 0x28) = 0x100;
      *(longlong *)(puVar19 + 0x20) = lVar16 + 600;
      *(undefined8 *)(puVar19 + -8) = 0x143d0c438;
      iVar9 = WideCharToMultiByte(0xfde9,0,pWVar22,(int)uVar23,*(LPSTR *)(puVar19 + 0x20),
                                  *(int *)(puVar19 + 0x28),*(LPCSTR *)(puVar19 + 0x30),
                                  *(LPBOOL *)(puVar19 + 0x38));
      if ((iVar9 == 0) && (uVar23 != 0)) {
        do {
          *(char *)(*param_1 + 600 + uVar17) = (char)pWVar22[uVar17];
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar23);
      }
      *(undefined1 *)(*param_1 + 0x357) = 0;
      lVar16 = *param_1 + 600;
      goto LAB_143d0c36d;
    }
    cVar2 = *param_2;
    uVar23 = uVar17;
    pcVar15 = param_2;
    while ((cVar2 != '\0' && (uVar5 = (uint)uVar23, uVar5 < 0x80000000))) {
      pcVar15 = pcVar15 + 1;
      uVar5 = uVar5 + 1;
      cVar2 = *pcVar15;
      uVar23 = (ulonglong)uVar5;
    }
    uVar23 = (ulonglong)(uVar5 & 0x7fffffff);
    if (uVar23 - 1 < 0x7ffffffc) {
      uStackY_80 = 0x143d0c143;
      pvVar11 = malloc(0x358);
      *param_1 = (longlong)pvVar11;
      if (pvVar11 != (void *)0x0) {
        uStackY_80 = 0x143d0c16c;
        _guard_xfg_dispatch_icall_nop(pvVar11,0,0x358);
        uVar24 = uVar23 + 1;
        CodePage = 0xfde9;
        iVar9 = (int)uVar24;
        uStackY_80 = 0x143d0c18f;
        iVar6 = MultiByteToWideChar(0xfde9,0,param_2,iVar9,(LPWSTR)0x0,0);
        if (iVar6 < 1) {
          uStackY_80 = 0x143d0c1a0;
          DVar7 = GetLastError();
          CodePage = 0xfde9;
          if (DVar7 == 0x459) {
            uStackY_80 = 0x143d0c1c3;
            iVar6 = MultiByteToWideChar(0,0,param_2,iVar9,(LPWSTR)0x0,0);
            CodePage = 0;
          }
          if (0 < iVar6) goto LAB_143d0c302;
          uVar1 = (longlong)(int)((uVar5 & 0x7fffffff) + 3) * 2;
          uVar12 = uVar1 + 0xf;
          if (uVar12 <= uVar1) {
            uVar12 = 0xffffffffffffff0;
          }
          uStackY_80 = 0x143d0c1f8;
          lVar16 = -(uVar12 & 0xfffffffffffffff0);
          puVar19 = auStackY_78 + lVar16;
          puVar18 = auStackY_78 + lVar16;
          pWVar22 = (LPCWSTR)((longlong)&local_38 + lVar16);
          iVar6 = iVar9;
          if (uVar24 != 0) {
            uVar12 = uVar17;
            puVar19 = puVar18;
            if ((0x1f < uVar24) &&
               ((param_2 + uVar23 < pWVar22 || (aCStack_3a + uVar24 * 2 + lVar16 < param_2)))) {
              pauVar13 = (undefined1 (*) [16])(&stack0xffffffffffffffe8 + lVar16);
              do {
                uVar23 = *(ulonglong *)(param_2 + uVar12);
                uVar1 = *(ulonglong *)(param_2 + uVar12 + 8);
                uVar41 = (undefined1)(uVar23 >> 0x38);
                auVar31._8_6_ = 0;
                auVar31._0_8_ = uVar23;
                auVar31[0xe] = uVar41;
                auVar31[0xf] = uVar41;
                uVar41 = (undefined1)(uVar23 >> 0x30);
                auVar30._14_2_ = auVar31._14_2_;
                auVar30._8_5_ = 0;
                auVar30._0_8_ = uVar23;
                auVar30[0xd] = uVar41;
                auVar29._13_3_ = auVar30._13_3_;
                auVar29._8_4_ = 0;
                auVar29._0_8_ = uVar23;
                auVar29[0xc] = uVar41;
                uVar41 = (undefined1)(uVar23 >> 0x28);
                auVar28._12_4_ = auVar29._12_4_;
                auVar28._8_3_ = 0;
                auVar28._0_8_ = uVar23;
                auVar28[0xb] = uVar41;
                auVar27._11_5_ = auVar28._11_5_;
                auVar27._8_2_ = 0;
                auVar27._0_8_ = uVar23;
                auVar27[10] = uVar41;
                uVar41 = (undefined1)(uVar23 >> 0x20);
                auVar26._10_6_ = auVar27._10_6_;
                auVar26[8] = 0;
                auVar26._0_8_ = uVar23;
                auVar26[9] = uVar41;
                auVar32._9_7_ = auVar26._9_7_;
                auVar32[8] = uVar41;
                auVar32._0_8_ = uVar23;
                uVar41 = (undefined1)(uVar23 >> 0x18);
                auVar25._8_8_ = auVar32._8_8_;
                auVar25[7] = uVar41;
                auVar25[6] = uVar41;
                uVar41 = (undefined1)(uVar23 >> 0x10);
                auVar25[5] = uVar41;
                auVar25[4] = uVar41;
                uVar41 = (undefined1)(uVar23 >> 8);
                auVar25[3] = uVar41;
                auVar25[2] = uVar41;
                auVar25[0] = (undefined1)uVar23;
                auVar25[1] = auVar25[0];
                uVar41 = (undefined1)(uVar1 >> 0x38);
                auVar49._8_6_ = 0;
                auVar49._0_8_ = uVar1;
                auVar49[0xe] = uVar41;
                auVar49[0xf] = uVar41;
                uVar41 = (undefined1)(uVar1 >> 0x30);
                auVar48._14_2_ = auVar49._14_2_;
                auVar48._8_5_ = 0;
                auVar48._0_8_ = uVar1;
                auVar48[0xd] = uVar41;
                auVar47._13_3_ = auVar48._13_3_;
                auVar47._8_4_ = 0;
                auVar47._0_8_ = uVar1;
                auVar47[0xc] = uVar41;
                uVar41 = (undefined1)(uVar1 >> 0x28);
                auVar46._12_4_ = auVar47._12_4_;
                auVar46._8_3_ = 0;
                auVar46._0_8_ = uVar1;
                auVar46[0xb] = uVar41;
                auVar45._11_5_ = auVar46._11_5_;
                auVar45._8_2_ = 0;
                auVar45._0_8_ = uVar1;
                auVar45[10] = uVar41;
                uVar41 = (undefined1)(uVar1 >> 0x20);
                auVar44._10_6_ = auVar45._10_6_;
                auVar44[8] = 0;
                auVar44._0_8_ = uVar1;
                auVar44[9] = uVar41;
                auVar43._9_7_ = auVar44._9_7_;
                auVar43[8] = uVar41;
                auVar43._0_8_ = uVar1;
                uVar41 = (undefined1)(uVar1 >> 0x18);
                auVar42._8_8_ = auVar43._8_8_;
                auVar42[7] = uVar41;
                auVar42[6] = uVar41;
                uVar41 = (undefined1)(uVar1 >> 0x10);
                auVar42[5] = uVar41;
                auVar42[4] = uVar41;
                uVar41 = (undefined1)(uVar1 >> 8);
                auVar42[3] = uVar41;
                auVar42[2] = uVar41;
                auVar42[0] = (undefined1)uVar1;
                auVar42[1] = auVar42[0];
                auVar32 = psraw(auVar25,8);
                pauVar13[-2] = auVar32;
                uVar23 = *(ulonglong *)(param_2 + uVar12 + 0x10);
                auVar32 = psraw(auVar42,8);
                pauVar13[-1] = auVar32;
                uVar1 = *(ulonglong *)(param_2 + uVar12 + 0x18);
                uVar12 = uVar12 + 0x20;
                uVar41 = (undefined1)(uVar23 >> 0x38);
                auVar40._8_6_ = 0;
                auVar40._0_8_ = uVar23;
                auVar40[0xe] = uVar41;
                auVar40[0xf] = uVar41;
                uVar41 = (undefined1)(uVar23 >> 0x30);
                auVar39._14_2_ = auVar40._14_2_;
                auVar39._8_5_ = 0;
                auVar39._0_8_ = uVar23;
                auVar39[0xd] = uVar41;
                auVar38._13_3_ = auVar39._13_3_;
                auVar38._8_4_ = 0;
                auVar38._0_8_ = uVar23;
                auVar38[0xc] = uVar41;
                uVar41 = (undefined1)(uVar23 >> 0x28);
                auVar37._12_4_ = auVar38._12_4_;
                auVar37._8_3_ = 0;
                auVar37._0_8_ = uVar23;
                auVar37[0xb] = uVar41;
                auVar36._11_5_ = auVar37._11_5_;
                auVar36._8_2_ = 0;
                auVar36._0_8_ = uVar23;
                auVar36[10] = uVar41;
                uVar41 = (undefined1)(uVar23 >> 0x20);
                auVar35._10_6_ = auVar36._10_6_;
                auVar35[8] = 0;
                auVar35._0_8_ = uVar23;
                auVar35[9] = uVar41;
                auVar34._9_7_ = auVar35._9_7_;
                auVar34[8] = uVar41;
                auVar34._0_8_ = uVar23;
                uVar41 = (undefined1)(uVar23 >> 0x18);
                auVar33._8_8_ = auVar34._8_8_;
                auVar33[7] = uVar41;
                auVar33[6] = uVar41;
                uVar41 = (undefined1)(uVar23 >> 0x10);
                auVar33[5] = uVar41;
                auVar33[4] = uVar41;
                uVar41 = (undefined1)(uVar23 >> 8);
                auVar33[3] = uVar41;
                auVar33[2] = uVar41;
                auVar33[0] = (undefined1)uVar23;
                auVar33[1] = auVar33[0];
                uVar41 = (undefined1)(uVar1 >> 0x38);
                auVar57._8_6_ = 0;
                auVar57._0_8_ = uVar1;
                auVar57[0xe] = uVar41;
                auVar57[0xf] = uVar41;
                uVar41 = (undefined1)(uVar1 >> 0x30);
                auVar56._14_2_ = auVar57._14_2_;
                auVar56._8_5_ = 0;
                auVar56._0_8_ = uVar1;
                auVar56[0xd] = uVar41;
                auVar55._13_3_ = auVar56._13_3_;
                auVar55._8_4_ = 0;
                auVar55._0_8_ = uVar1;
                auVar55[0xc] = uVar41;
                uVar41 = (undefined1)(uVar1 >> 0x28);
                auVar54._12_4_ = auVar55._12_4_;
                auVar54._8_3_ = 0;
                auVar54._0_8_ = uVar1;
                auVar54[0xb] = uVar41;
                auVar53._11_5_ = auVar54._11_5_;
                auVar53._8_2_ = 0;
                auVar53._0_8_ = uVar1;
                auVar53[10] = uVar41;
                uVar41 = (undefined1)(uVar1 >> 0x20);
                auVar52._10_6_ = auVar53._10_6_;
                auVar52[8] = 0;
                auVar52._0_8_ = uVar1;
                auVar52[9] = uVar41;
                auVar51._9_7_ = auVar52._9_7_;
                auVar51[8] = uVar41;
                auVar51._0_8_ = uVar1;
                uVar41 = (undefined1)(uVar1 >> 0x18);
                auVar50._8_8_ = auVar51._8_8_;
                auVar50[7] = uVar41;
                auVar50[6] = uVar41;
                uVar41 = (undefined1)(uVar1 >> 0x10);
                auVar50[5] = uVar41;
                auVar50[4] = uVar41;
                uVar41 = (undefined1)(uVar1 >> 8);
                auVar50[3] = uVar41;
                auVar50[2] = uVar41;
                auVar50[0] = (undefined1)uVar1;
                auVar50[1] = auVar50[0];
                auVar32 = psraw(auVar33,8);
                *pauVar13 = auVar32;
                auVar32 = psraw(auVar50,8);
                pauVar13[1] = auVar32;
                pauVar13 = pauVar13 + 4;
              } while (uVar12 < (uVar24 & 0xffffffffffffffe0));
            }
            for (; uVar12 < uVar24; uVar12 = uVar12 + 1) {
              pWVar22[uVar12] = (short)param_2[uVar12];
              puVar19 = auStackY_78 + lVar16;
            }
          }
LAB_143d0c2c1:
          lVar16 = (longlong)iVar6;
          WVar3 = pWVar22[lVar16 + -2];
          if (WVar3 != L'*') {
            if ((WVar3 == L'/') || (WVar3 == L'\\')) {
              (pWVar22 + lVar16 + -1)[0] = L'*';
              (pWVar22 + lVar16 + -1)[1] = L'\0';
            }
            else {
              (pWVar22 + lVar16 + -1)[0] = L'/';
              (pWVar22 + lVar16 + -1)[1] = L'*';
              pWVar22[lVar16 + 1] = L'\0';
            }
          }
          p_Var4 = (LPWIN32_FIND_DATAW)*param_1;
          *(undefined8 *)(puVar19 + -8) = 0x143d0c3a7;
          pvVar14 = FindFirstFileW(pWVar22,p_Var4);
          *(HANDLE *)(*param_1 + 0x250) = pvVar14;
          pvVar11 = (void *)*param_1;
          if (*(longlong *)((longlong)pvVar11 + 0x250) != -1) goto LAB_143d0c3e2;
        }
        else {
LAB_143d0c302:
          uVar24 = (longlong)(iVar6 + 2) * 2;
          uVar23 = uVar24 + 0xf;
          if (uVar23 <= uVar24) {
            uVar23 = 0xffffffffffffff0;
          }
          uStackY_80 = 0x143d0c328;
          lVar16 = -(uVar23 & 0xfffffffffffffff0);
          puVar19 = auStackY_78 + lVar16;
          pWVar22 = (LPCWSTR)((longlong)&local_38 + lVar16);
          *(int *)(&stack0xffffffffffffffb0 + lVar16) = iVar6;
          *(LPCWSTR *)(&stack0xffffffffffffffa8 + lVar16) = pWVar22;
          *(undefined8 *)(auStackY_78 + lVar16 + -8) = 0x143d0c34b;
          iVar9 = MultiByteToWideChar(CodePage,0,param_2,iVar9,
                                      *(LPWSTR *)(&stack0xffffffffffffffa8 + lVar16),
                                      *(int *)(&stack0xffffffffffffffb0 + lVar16));
          if (iVar9 != 0) goto LAB_143d0c2c1;
          pvVar11 = (void *)*param_1;
          puVar19 = auStackY_78 + lVar16;
        }
        *(undefined8 *)(puVar19 + -8) = 0x143d0c35c;
        free(pvVar11);
        *param_1 = 0;
        puVar20 = puVar19;
        goto LAB_143d0c35f;
      }
      uStackY_80 = 0x143d0c151;
      piVar10 = _errno();
      *piVar10 = 0xc;
      puVar21 = auStackY_78;
    }
    else {
      uStackY_80 = 0x143d0c3c6;
      piVar10 = _errno();
      *piVar10 = 2;
      puVar21 = auStackY_78;
    }
  }
LAB_143d0c36b:
  lVar16 = 0;
  puVar19 = puVar21;
LAB_143d0c36d:
  *(undefined8 *)(puVar19 + -8) = 0x143d0c379;
  return lVar16;
}



// FUNCTION 143d0c470 file_write body=73 status=ok
// SIG undefined file_write(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int file_write(longlong param_1,void *param_2,int param_3)

{
  int iVar1;
  size_t sVar2;
  
  if ((*(int *)(param_1 + 0x20) != 0) && (param_2 != (void *)0x0)) {
    sVar2 = fwrite(param_2,(longlong)param_3,1,*(FILE **)(param_1 + 0x38));
    iVar1 = 0;
    if ((int)sVar2 != 0) {
      iVar1 = param_3;
    }
    return iVar1;
  }
  return 0;
}



// FUNCTION 143d0c4c0 file_read body=189 status=ok
// SIG undefined file_read(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong file_read(longlong param_1,void *param_2,int param_3)

{
  int iVar1;
  DWORD DVar2;
  size_t sVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143d0c4cc;
  if ((*(int *)(param_1 + 0x20) != 0) && (param_2 != (void *)0x0)) {
    sVar3 = fread(param_2,1,(longlong)param_3,*(FILE **)(param_1 + 0x38));
    iVar1 = ferror(*(FILE **)(param_1 + 0x38));
    if (iVar1 != 0) {
      DVar2 = GetLastError();
      ERR_put_error(2,0xb,DVar2,"crypto\\bio\\bss_file.c",0x98,uVar4);
      ERR_put_error(0x20,0x82,2,"crypto\\bio\\bss_file.c",0x99);
      return 0xffffffff;
    }
    return sVar3 & 0xffffffff;
  }
  return 0;
}



// FUNCTION 143d0c580 file_puts body=100 status=ok
// SIG undefined file_puts(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint file_puts(longlong param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  size_t sVar4;
  uint uVar5;
  
  cVar1 = *param_2;
  pcVar3 = param_2;
  for (uVar5 = 0; (cVar1 != '\0' && (uVar5 < 0x80000000)); uVar5 = uVar5 + 1) {
    pcVar3 = pcVar3 + 1;
    cVar1 = *pcVar3;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    sVar4 = fwrite(param_2,(ulonglong)(uVar5 & 0x7fffffff),1,*(FILE **)(param_1 + 0x38));
    uVar2 = 0;
    if ((int)sVar4 != 0) {
      uVar2 = uVar5 & 0x7fffffff;
    }
    return uVar2;
  }
  return 0;
}



// FUNCTION 143d0c5f0 file_gets body=88 status=ok
// SIG undefined file_gets(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint file_gets(longlong param_1,char *param_2,int param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  *param_2 = '\0';
  pcVar1 = fgets(param_2,param_3,*(FILE **)(param_1 + 0x38));
  uVar3 = uVar2;
  if ((pcVar1 != (char *)0x0) && (uVar3 = 0, *param_2 != '\0')) {
    do {
      if (0x7fffffff < uVar2) break;
      param_2 = param_2 + 1;
      uVar2 = uVar2 + 1;
    } while (*param_2 != '\0');
    uVar3 = uVar2 & 0x7fffffff;
  }
  return uVar3;
}



// FUNCTION 143d0c650 FUN_143d0c650 body=652 status=ok
// SIG undefined FUN_143d0c650(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_143d0c650(longlong param_1,undefined4 param_2,uint param_3,FILE *param_4)

{
  FILE *_File;
  int iVar1;
  DWORD DVar2;
  longlong lVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 local_res10 [8];
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar8;
  undefined8 uVar7;
  undefined *puVar9;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  puVar9 = (undefined *)0x143d0c66b;
  iVar5 = 1;
  _File = *(FILE **)(param_1 + 0x38);
  iVar1 = 1;
  switch(param_2) {
  case 1:
  case 0x80:
    iVar1 = fseek(_File,param_3,0);
    break;
  case 2:
    iVar1 = feof(_File);
    break;
  case 3:
  case 0x85:
    iVar1 = ftell(_File);
    break;
  default:
    goto switchD_143d0c6aa_caseD_4;
  case 8:
    iVar1 = *(int *)(param_1 + 0x24);
    break;
  case 9:
    *(uint *)(param_1 + 0x24) = param_3;
    iVar1 = iVar5;
    break;
  case 0xb:
    iVar1 = fflush(_File);
    if (iVar1 != -1) {
      return 1;
    }
    DVar2 = GetLastError();
    ERR_put_error(2,0x12,DVar2,"crypto\\bio\\bss_file.c",CONCAT44(uVar8,0x13e),puVar9);
    ERR_add_error_data(1,"fflush()");
    uVar7 = 0x140;
LAB_143d0c8a8:
    uVar6 = 2;
    goto LAB_143d0c8ae;
  case 0xc:
    break;
  case 0x6a:
    file_free(param_1);
    *(FILE **)(param_1 + 0x38) = param_4;
    *(undefined4 *)(param_1 + 0x20) = 1;
    *(uint *)(param_1 + 0x24) = param_3 & 1;
    iVar1 = _fileno(param_4);
    if ((param_3 & 0x10) == 0) {
      _setmode(iVar1,0x8000);
      iVar1 = iVar5;
    }
    else {
      _setmode(iVar1,0x4000);
      iVar1 = iVar5;
    }
    break;
  case 0x6b:
    iVar1 = iVar5;
    if (param_4 != (FILE *)0x0) {
      param_4->_ptr = (char *)_File;
    }
    break;
  case 0x6c:
    file_free(param_1);
    *(uint *)(param_1 + 0x24) = param_3 & 1;
    if ((param_3 & 8) != 0) {
      puVar9 = &DAT_145d76d88;
      if ((param_3 & 2) == 0) {
        puVar9 = &DAT_145d76d8c;
      }
LAB_143d0c77e:
      OPENSSL_strlcpy(local_res10,puVar9,4);
      puVar4 = &DAT_145d76d94;
      if ((param_3 & 0x10) != 0) {
        puVar4 = &DAT_145cc554c;
      }
      OPENSSL_strlcat(local_res10,puVar4,4);
      lVar3 = openssl_fopen(param_4,local_res10);
      if (lVar3 != 0) {
        *(longlong *)(param_1 + 0x38) = lVar3;
        *(undefined4 *)(param_1 + 0x20) = 1;
        BIO_clear_flags(param_1,0);
        return 1;
      }
      DVar2 = GetLastError();
      ERR_put_error(2,1,DVar2,"crypto\\bio\\bss_file.c",CONCAT44(uVar8,0x122));
      puVar9 = &DAT_145d48aac;
      ERR_add_error_data(5,"fopen(\'",param_4,&DAT_145d76d78,local_res10,&DAT_145d48aac);
      uVar7 = 0x124;
      goto LAB_143d0c8a8;
    }
    if (((byte)param_3 & 6) == 6) {
      puVar9 = &DAT_145d76d90;
      goto LAB_143d0c77e;
    }
    if ((param_3 & 4) != 0) {
      puVar9 = &DAT_144027c64;
      goto LAB_143d0c77e;
    }
    if ((param_3 & 2) != 0) {
      puVar9 = &DAT_145d71df8;
      goto LAB_143d0c77e;
    }
    uVar7 = CONCAT44(uVar8,0x116);
    uVar6 = 0x65;
LAB_143d0c8ae:
    ERR_put_error(0x20,0x74,uVar6,"crypto\\bio\\bss_file.c",uVar7,puVar9);
switchD_143d0c6aa_caseD_4:
    iVar1 = 0;
  }
  return iVar1;
}



// FUNCTION 143d0c990 file_free body=91 status=ok
// SIG undefined file_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 file_free(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    if ((*(int *)(param_1 + 0x20) != 0) && (*(FILE **)(param_1 + 0x38) != (FILE *)0x0)) {
      fclose(*(FILE **)(param_1 + 0x38));
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return 1;
}



// FUNCTION 143d0c9f0 BIO_new_file body=327 status=ok
// SIG undefined BIO_new_file(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong BIO_new_file(undefined8 param_1,char *param_2)

{
  DWORD DVar1;
  undefined4 uVar2;
  FILE *_File;
  char *pcVar3;
  int *piVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined8 in_stack_ffffffffffffffe8;
  undefined8 uVar7;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar7 = 0x143d0ca10;
  _File = (FILE *)openssl_fopen();
  pcVar3 = _guard_xfg_dispatch_icall_nop(param_2,0x62);
  uVar6 = 1;
  if (pcVar3 == (char *)0x0) {
    uVar6 = 0x11;
  }
  if (_File == (FILE *)0x0) {
    DVar1 = GetLastError();
    uVar6 = 2;
    ERR_put_error(2,1,DVar1,"crypto\\bio\\bss_file.c",CONCAT44(uVar2,0x48),uVar7);
    ERR_add_error_data(5,"fopen(\'",param_1,&DAT_145d76d78,param_2,&DAT_145d48aac);
    piVar4 = _errno();
    if ((*piVar4 == 2) || (piVar4 = _errno(), *piVar4 == 6)) {
      uVar6 = 0x80;
      uVar2 = 0x4f;
    }
    else {
      uVar2 = 0x51;
    }
    ERR_put_error(0x20,0x6d,uVar6,"crypto\\bio\\bss_file.c",uVar2);
    return 0;
  }
  lVar5 = BIO_new(&DAT_145d76cf0);
  if (lVar5 == 0) {
    fclose(_File);
    return 0;
  }
  BIO_clear_flags(lVar5,0);
  BIO_ctrl(lVar5,0x6a,uVar6,_File);
  return lVar5;
}



// FUNCTION 143d0cb40 BIO_new_fp body=113 status=ok
// SIG undefined BIO_new_fp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong BIO_new_fp(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = BIO_new(&DAT_145d76cf0);
  if (lVar1 == 0) {
    return 0;
  }
  BIO_set_flags(lVar1,0);
  BIO_ctrl(lVar1,0x6a,param_2,param_1);
  return lVar1;
}



// FUNCTION 143d0cbc0 BIO_s_file body=8 status=ok
// SIG undefined BIO_s_file(void)

undefined * BIO_s_file(void)

{
  return &DAT_145d76cf0;
}



// FUNCTION 143d0cbd0 BIO_printf body=257 status=ok
// SIG undefined BIO_printf(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 BIO_printf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_888 [32];
  undefined1 *local_868;
  undefined8 local_860;
  undefined8 *local_858;
  longlong local_848;
  undefined4 local_840 [2];
  undefined1 local_838 [8];
  undefined8 local_830;
  undefined1 *local_828 [2];
  undefined1 local_818 [2048];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143d0cbea;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_888;
  local_830 = 0x800;
  local_858 = &local_res18;
  local_848 = 0;
  local_828[0] = local_818;
  local_868 = local_838;
  local_res18 = param_3;
  local_res20 = param_4;
  local_860 = param_2;
  iVar1 = FUN_143d0ce50(local_828,&local_848,&local_830,local_840);
  if (iVar1 == 0) {
    CRYPTO_free(local_848,"crypto\\bio\\b_print.c",0x371);
    uVar2 = 0xffffffff;
  }
  else if (local_848 == 0) {
    uVar2 = BIO_write(param_1,local_818,local_840[0]);
  }
  else {
    uVar2 = BIO_write(param_1,local_848,local_840[0]);
    CRYPTO_free(local_848,"crypto\\bio\\b_print.c",0x376);
  }
  return uVar2;
}



// FUNCTION 143d0cce0 BIO_snprintf body=119 status=ok
// SIG undefined BIO_snprintf(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong BIO_snprintf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 local_res20;
  int local_28 [2];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10 [2];
  
  local_10[1] = 0x143d0ccf4;
  local_res20 = param_4;
  local_20 = param_2;
  local_18 = param_1;
  iVar1 = FUN_143d0ce50(&local_18,0,&local_20,local_10,local_28,param_3,&local_res20);
  uVar2 = 0xffffffff;
  if ((iVar1 != 0) && (local_28[0] == 0)) {
    uVar2 = 0xffffffff;
    if (local_10[0] < 0x80000000) {
      uVar2 = local_10[0] & 0xffffffff;
    }
  }
  return uVar2;
}



// FUNCTION 143d0cd60 BIO_vprintf body=235 status=ok
// SIG undefined BIO_vprintf(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 BIO_vprintf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_888 [32];
  undefined1 *local_868;
  undefined8 local_860;
  undefined8 local_858;
  longlong local_848;
  undefined4 local_840 [2];
  undefined1 local_838 [8];
  undefined8 local_830;
  undefined1 *local_828 [2];
  undefined1 local_818 [2048];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143d0cd6c;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_888;
  local_828[0] = local_818;
  local_868 = local_838;
  local_830 = 0x800;
  local_848 = 0;
  local_860 = param_2;
  local_858 = param_3;
  iVar1 = FUN_143d0ce50(local_828,&local_848,&local_830,local_840);
  if (iVar1 == 0) {
    CRYPTO_free(local_848,"crypto\\bio\\b_print.c",0x371);
    uVar2 = 0xffffffff;
  }
  else if (local_848 == 0) {
    uVar2 = BIO_write(param_1,local_818,local_840[0]);
  }
  else {
    uVar2 = BIO_write(param_1,local_848,local_840[0]);
    CRYPTO_free(local_848,"crypto\\bio\\b_print.c",0x376);
  }
  return uVar2;
}



// FUNCTION 143d0ce50 FUN_143d0ce50 body=1596 status=ok
// SIG undefined FUN_143d0ce50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x000143d0d188) */

undefined8
FUN_143d0ce50(undefined8 param_1,longlong param_2,ulonglong *param_3,longlong *param_4,uint *param_5
             ,char *param_6,ulonglong *param_7)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  ulonglong in_stack_ffffffffffffff88;
  undefined4 uVar14;
  uint local_48;
  uint local_44;
  ulonglong local_40;
  
  local_40 = 0;
LAB_143d0ce99:
  cVar7 = '\0';
  cVar8 = *param_6;
  iVar4 = 0;
  local_48 = 0;
  uVar10 = 0;
  local_44 = 0xffffffff;
LAB_143d0ceaf:
  param_6 = param_6 + 1;
  uVar11 = local_44;
LAB_143d0cec0:
  if ((cVar8 == '\0') || ((param_2 == 0 && (*param_3 <= local_40)))) goto LAB_143d0cf4d;
  uVar14 = (undefined4)(in_stack_ffffffffffffff88 >> 0x20);
  pcVar6 = param_6;
  switch(cVar7) {
  case '\0':
    if (cVar8 == '%') {
      cVar7 = '\x01';
    }
    else {
      in_stack_ffffffffffffff88 = CONCAT44(uVar14,(int)cVar8);
      iVar3 = doapr_outch(param_1,param_2,&local_40,param_3,in_stack_ffffffffffffff88);
      if (iVar3 == 0) {
        return 0;
      }
    }
    pcVar6 = param_6 + 1;
    cVar8 = *param_6;
    break;
  case '\x01':
    if (cVar8 == ' ') {
      cVar8 = *param_6;
      uVar10 = uVar10 | 4;
      param_6 = param_6 + 1;
    }
    else if (cVar8 == '#') {
      cVar8 = *param_6;
      uVar10 = uVar10 | 8;
      param_6 = param_6 + 1;
    }
    else if (cVar8 == '+') {
      cVar8 = *param_6;
      uVar10 = uVar10 | 2;
      param_6 = param_6 + 1;
    }
    else if (cVar8 == '-') {
      cVar8 = *param_6;
      uVar10 = uVar10 | 1;
      param_6 = param_6 + 1;
    }
    else if (cVar8 == '0') {
      cVar8 = *param_6;
      uVar10 = uVar10 | 0x10;
      param_6 = param_6 + 1;
    }
    else {
      cVar7 = '\x02';
    }
    goto LAB_143d0cec0;
  case '\x02':
    iVar12 = (int)cVar8;
    iVar3 = ossl_ctype_check(iVar12,4);
    if (iVar3 == 0) {
      if (cVar8 == '*') {
        local_48 = (uint)*param_7;
        param_7 = param_7 + 1;
        cVar8 = *param_6;
        param_6 = param_6 + 1;
      }
      cVar7 = '\x03';
      uVar11 = local_44;
    }
    else {
      cVar8 = *param_6;
      param_6 = param_6 + 1;
      local_48 = iVar12 + (local_48 * 5 + -0x18) * 2;
      uVar11 = local_44;
    }
    goto LAB_143d0cec0;
  case '\x03':
    cVar9 = cVar8;
    if (cVar8 == '.') {
      cVar9 = *param_6;
    }
    cVar7 = (cVar8 != '.') + '\x04';
    bVar13 = cVar8 != '.';
    pcVar6 = param_6 + 1;
    cVar8 = cVar9;
    if (bVar13) {
      pcVar6 = param_6;
    }
    break;
  case '\x04':
    goto switchD_143d0cefc_caseD_4;
  case '\x05':
    goto code_r0x000143d0d13a;
  case '\x06':
    uVar5 = (uint)cVar8;
    switch(uVar5) {
    case 0x25:
      goto LAB_143d0d39e;
    case 0x45:
      uVar10 = uVar10 | 0x20;
    case 0x65:
      uVar14 = 1;
      goto LAB_143d0d349;
    case 0x47:
      uVar10 = uVar10 | 0x20;
    case 0x67:
      uVar14 = 2;
LAB_143d0d349:
      in_stack_ffffffffffffff88 = *param_7;
      param_7 = param_7 + 1;
      iVar4 = fmtfp(param_1,param_2,&local_40,param_3,in_stack_ffffffffffffff88,local_48,uVar11,
                    uVar10,uVar14);
      break;
    case 0x58:
      uVar10 = uVar10 | 0x20;
    case 0x6f:
    case 0x75:
    case 0x78:
      uVar10 = uVar10 | 0x40;
      if (iVar4 == 1) {
        in_stack_ffffffffffffff88 = (ulonglong)(ushort)*param_7;
      }
      else if ((iVar4 == 2) || ((iVar4 != 4 && (iVar4 != 5)))) {
        in_stack_ffffffffffffff88 = (ulonglong)(uint)*param_7;
      }
      else {
        in_stack_ffffffffffffff88 = *param_7;
      }
      if (cVar8 == 'o') {
        uVar14 = 8;
      }
      else {
        uVar14 = 0x10;
        if (cVar8 == 'u') {
          uVar14 = 10;
        }
      }
      goto LAB_143d0d26a;
    case 99:
      uVar5 = (uint)*param_7;
      param_7 = param_7 + 1;
LAB_143d0d39e:
      in_stack_ffffffffffffff88 = CONCAT44(uVar14,uVar5);
      iVar4 = doapr_outch(param_1,param_2,&local_40,param_3,in_stack_ffffffffffffff88);
      break;
    case 100:
    case 0x69:
      if (iVar4 == 1) {
        in_stack_ffffffffffffff88 = (ulonglong)(short)(ushort)*param_7;
      }
      else if ((iVar4 == 2) || ((iVar4 != 4 && (iVar4 != 5)))) {
        in_stack_ffffffffffffff88 = (ulonglong)(int)(uint)*param_7;
      }
      else {
        in_stack_ffffffffffffff88 = *param_7;
      }
      uVar14 = 10;
      goto LAB_143d0d26a;
    case 0x66:
      in_stack_ffffffffffffff88 = *param_7;
      param_7 = param_7 + 1;
      iVar4 = fmtfp(param_1,param_2,&local_40,param_3,in_stack_ffffffffffffff88,local_48,uVar11,
                    uVar10,0);
      break;
    case 0x6e:
      puVar2 = (undefined4 *)*param_7;
      param_7 = param_7 + 1;
      *puVar2 = (undefined4)local_40;
      goto LAB_143d0ce99;
    case 0x70:
      uVar10 = uVar10 | 8;
      in_stack_ffffffffffffff88 = *param_7;
      uVar14 = 0x10;
LAB_143d0d26a:
      param_7 = param_7 + 1;
      iVar4 = fmtint(param_1,param_2,&local_40,param_3,in_stack_ffffffffffffff88,uVar14,local_48,
                     uVar11,uVar10);
      break;
    case 0x73:
      in_stack_ffffffffffffff88 = *param_7;
      param_7 = param_7 + 1;
      if (((int)uVar11 < 0) && (uVar11 = 0x7fffffff, param_2 == 0)) {
        uVar11 = (uint)*param_3;
      }
      iVar4 = fmtstr(param_1,param_2,&local_40,param_3,in_stack_ffffffffffffff88,uVar10,local_48,
                     uVar11);
      break;
    case 0x77:
      param_6 = param_6 + 1;
    default:
      goto LAB_143d0ce99;
    }
    if (iVar4 == 0) {
      return 0;
    }
    goto LAB_143d0ce99;
  }
  param_6 = pcVar6;
  if (cVar7 == '\a') {
LAB_143d0cf4d:
    if ((param_2 == 0) &&
       (uVar1 = *param_3, *param_5 = (uint)(uVar1 - 1 < local_40), uVar1 - 1 < local_40)) {
      local_40 = *param_3 - 1;
    }
    iVar4 = doapr_outch(param_1,param_2,&local_40,param_3,
                        in_stack_ffffffffffffff88 & 0xffffffff00000000);
    if (iVar4 == 0) {
      return 0;
    }
    *param_4 = local_40 - 1;
    return 1;
  }
  goto LAB_143d0cec0;
code_r0x000143d0d13a:
  switch(cVar8) {
  case 'L':
    cVar8 = *param_6;
    iVar4 = 3;
    param_6 = param_6 + 1;
    cVar7 = '\x06';
    break;
  case 'h':
    cVar8 = *param_6;
    iVar4 = 1;
    param_6 = param_6 + 1;
    cVar7 = '\x06';
    break;
  case 'j':
  case 'q':
    cVar8 = *param_6;
    iVar4 = 4;
    param_6 = param_6 + 1;
    cVar7 = '\x06';
    break;
  case 'l':
    cVar8 = *param_6;
    if (cVar8 == 'l') {
      cVar8 = param_6[1];
      iVar4 = 4;
      cVar7 = '\x06';
      param_6 = param_6 + 2;
    }
    else {
      iVar4 = 2;
      pcVar6 = param_6 + 1;
      if (cVar8 != 'l') {
        pcVar6 = param_6;
      }
      param_6 = pcVar6 + 1;
      cVar7 = '\x06';
    }
    break;
  case 'z':
    cVar8 = *param_6;
    iVar4 = 5;
    param_6 = param_6 + 1;
  default:
    cVar7 = '\x06';
  }
  goto LAB_143d0cec0;
switchD_143d0cefc_caseD_4:
  iVar12 = (int)cVar8;
  iVar3 = ossl_ctype_check(iVar12,4);
  if (iVar3 == 0) {
    cVar7 = '\x05';
    uVar11 = local_44;
    if (cVar8 == '*') {
      local_44 = (uint)*param_7;
      param_7 = param_7 + 1;
      cVar8 = *param_6;
      param_6 = param_6 + 1;
      uVar11 = local_44;
    }
    goto LAB_143d0cec0;
  }
  cVar8 = *param_6;
  uVar11 = 0;
  if (-1 < (int)local_44) {
    uVar11 = local_44;
  }
  local_44 = (iVar12 + uVar11 * 10) - 0x30;
  goto LAB_143d0ceaf;
}



// FUNCTION 143d0d580 doapr_outch body=291 status=ok
// SIG undefined doapr_outch(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
doapr_outch(longlong *param_1,longlong *param_2,ulonglong *param_3,ulonglong *param_4,
           undefined1 param_5)

{
  ulonglong uVar1;
  void *_Dst;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143d0d59b;
  if ((*param_1 != 0) || (param_2 != (longlong *)0x0)) {
    uVar1 = *param_4;
    if (*param_3 <= uVar1) {
      if ((param_2 == (longlong *)0x0) || (*param_3 != uVar1)) goto LAB_143d0d67e;
      if (uVar1 < 0x7ffffc00) {
        uVar1 = uVar1 + 0x400;
        *param_4 = uVar1;
        if (*param_2 == 0) {
          _Dst = (void *)CRYPTO_malloc(uVar1,"crypto\\bio\\b_print.c",0x336);
          *param_2 = (longlong)_Dst;
          if (_Dst != (void *)0x0) {
            if (*param_3 != 0) {
              if ((void *)*param_1 == (void *)0x0) {
                return 0;
              }
              _guard_xfg_dispatch_icall_nop(_Dst,(void *)*param_1,*param_3);
            }
            *param_1 = 0;
LAB_143d0d67e:
            if (*param_3 < *param_4) {
              lVar2 = *param_1;
              if (lVar2 == 0) {
                lVar2 = *param_2;
              }
              *(undefined1 *)(*param_3 + lVar2) = param_5;
              *param_3 = *param_3 + 1;
            }
            return 1;
          }
          ERR_put_error(0x20,0x96,0x41,"crypto\\bio\\b_print.c",0x337,uVar3);
        }
        else {
          lVar2 = CRYPTO_realloc(*param_2,uVar1,"crypto\\bio\\b_print.c",0x342);
          if (lVar2 != 0) {
            *param_2 = lVar2;
            goto LAB_143d0d67e;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143d0d6b0 fmtfp body=1733 status=ok
// SIG undefined fmtfp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
fmtfp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,double param_5,
     int param_6,int param_7,uint param_8,int param_9)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_e8 [32];
  uint local_c8;
  int local_b8;
  int local_b4;
  uint local_b0;
  uint local_ac;
  undefined8 local_a0;
  char acStack_98 [23];
  char acStack_81 [24];
  char acStack_69 [25];
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_b0 = 0;
  uVar10 = 0;
  iVar4 = 0;
  local_ac = 0;
  iVar6 = 6;
  if (-1 < param_7) {
    iVar6 = param_7;
  }
  if (0.0 <= param_5) {
    if ((param_8 & 2) == 0) {
      local_b4 = 0;
      if ((param_8 & 4) != 0) {
        local_b4 = 0x20;
      }
    }
    else {
      local_b4 = 0x2b;
    }
  }
  else {
    local_b4 = 0x2d;
  }
  dVar13 = 1.0;
  if (param_9 == 2) {
    if (param_5 == 0.0) goto LAB_143d0d787;
    if (param_5 < 0.0001) {
      local_b8 = 1;
    }
    else if ((iVar6 != 0) || (param_5 < 10.0)) {
      if (0 < iVar6) {
        dVar12 = 1.0;
        iVar7 = iVar6;
        do {
          dVar12 = dVar12 * 10.0;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        if (dVar12 <= param_5) goto LAB_143d0d7c6;
      }
LAB_143d0d787:
      local_b8 = 0;
    }
    else {
LAB_143d0d7c6:
      local_b8 = 1;
    }
  }
  else {
    local_b8 = param_9;
    if (param_9 == 0) goto LAB_143d0d87c;
  }
  dVar12 = param_5;
  if (param_5 != 0.0) {
    for (; local_ac = uVar10, dVar12 < 1.0; dVar12 = dVar12 * 10.0) {
      uVar10 = uVar10 - 1;
    }
    for (; 10.0 < dVar12; dVar12 = dVar12 / 10.0) {
      local_ac = local_ac + 1;
    }
  }
  if (param_9 == 2) {
    if (iVar6 == 0) {
      iVar6 = 1;
    }
    if (local_b8 == 0) {
      iVar6 = iVar6 + (-1 - local_ac);
      if (iVar6 < 0) {
        return 0;
      }
      goto LAB_143d0d87c;
    }
    iVar6 = iVar6 + -1;
  }
  if (local_b8 == 1) {
    param_5 = dVar12;
  }
LAB_143d0d87c:
  if (param_5 < 0.0) {
    param_5 = -param_5;
  }
  if (4294967295.0 < param_5) {
    return 0;
  }
  dVar12 = 1.0;
  uVar5 = (ulonglong)param_5;
  iVar7 = iVar6;
  if (9 < iVar6) {
    iVar6 = 9;
    iVar7 = 9;
  }
  for (; iVar6 != 0; iVar6 = iVar6 + -1) {
    dVar12 = dVar12 * 10.0;
  }
  uVar1 = (uint)dVar12;
  iVar6 = iVar7;
  uVar10 = uVar1 + 1;
  if (dVar12 - (double)(int)uVar1 < 0.5) {
    uVar10 = uVar1;
  }
  for (; iVar6 != 0; iVar6 = iVar6 + -1) {
    dVar13 = dVar13 * 10.0;
  }
  dVar13 = (param_5 - (double)(uVar5 & 0xffffffff)) * dVar13;
  uVar2 = (uint)dVar13;
  uVar1 = uVar2 + 1;
  if (dVar13 - (double)(int)uVar2 < 0.5) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 - uVar10;
  if (uVar1 < uVar10) {
    uVar2 = uVar1;
  }
  uVar9 = (ulonglong)((int)uVar5 + 1);
  if (uVar1 < uVar10) {
    uVar9 = uVar5 & 0xffffffff;
  }
  lVar3 = 0;
  iVar6 = 0;
  do {
    iVar11 = iVar6;
    iVar6 = (int)(uVar9 / 10);
    acStack_98[lVar3] = "0123456789"[(uint)((int)uVar9 + iVar6 * -10)];
    lVar3 = lVar3 + 1;
    if (iVar6 == 0) break;
    uVar9 = uVar9 / 10;
    iVar6 = iVar11 + 1;
  } while (lVar3 < 0x14);
  if (iVar11 != 0x13) {
    iVar11 = iVar11 + 1;
  }
  local_a0 = (ulonglong)iVar11;
  if (local_a0 < 0x14) {
    acStack_98[local_a0] = '\0';
    if (0 < iVar7) {
      lVar3 = 0;
      uVar5 = (ulonglong)uVar2;
      do {
        while (((param_9 != 2 || (lVar3 != 0)) || ((int)uVar5 != (int)(uVar5 / 10) * 10))) {
          iVar4 = iVar4 + 1;
          acStack_81[lVar3 + 1] = "0123456789"[(uint)((int)uVar5 + (int)(uVar5 / 10) * -10)];
          lVar3 = lVar3 + 1;
          uVar5 = uVar5 / 10;
          if (iVar7 <= iVar4) goto LAB_143d0d9f3;
        }
        iVar7 = iVar7 + -1;
        uVar5 = uVar5 / 10;
      } while (iVar4 < iVar7);
    }
LAB_143d0d9f3:
    iVar6 = 0x13;
    if (iVar4 != 0x14) {
      iVar6 = iVar4;
    }
    uVar5 = (ulonglong)iVar6;
    if (uVar5 < 0x14) {
      acStack_81[uVar5 + 1] = '\0';
      if (local_b8 == 1) {
        uVar8 = 0;
        uVar9 = uVar8;
        iVar4 = (local_ac ^ (int)local_ac >> 0x1f) - ((int)local_ac >> 0x1f);
        do {
          local_b0 = (int)uVar9 + 1;
          uVar9 = (ulonglong)local_b0;
          acStack_69[uVar8 + 1] = "0123456789"[iVar4 % 10];
          uVar8 = uVar8 + 1;
          if (iVar4 / 10 < 1) {
            if (local_b0 == 1) {
              acStack_69[2] = 0x30;
              local_b0 = 2;
            }
            goto LAB_143d0da9a;
          }
          iVar4 = iVar4 / 10;
        } while ((longlong)uVar8 < 0x14);
      }
      else {
LAB_143d0da9a:
        iVar4 = (((param_6 - (uint)(local_b4 != 0)) - (uint)(0 < iVar7)) - iVar11) - iVar7;
        if (local_b8 == 1) {
          iVar4 = iVar4 + (-2 - local_b0);
        }
        iVar11 = 0;
        if (-1 < iVar7 - iVar6) {
          iVar11 = iVar7 - iVar6;
        }
        iVar6 = 0;
        if (-1 < iVar4) {
          iVar6 = iVar4;
        }
        iVar4 = -iVar6;
        if ((param_8 & 1) == 0) {
          iVar4 = iVar6;
        }
        if (((param_8 & 0x10) == 0) || (iVar4 < 1)) {
          for (; 0 < iVar4; iVar4 = iVar4 + -1) {
            local_c8 = 0x20;
            iVar6 = doapr_outch(param_1,param_2,param_3,param_4);
            if (iVar6 == 0) {
              return 0;
            }
          }
        }
        else {
          if (local_b4 != 0) {
            local_c8 = local_b4;
            iVar6 = doapr_outch(param_1,param_2,param_3,param_4);
            if (iVar6 == 0) {
              return 0;
            }
            iVar4 = iVar4 + -1;
            local_b4 = 0;
          }
          for (; 0 < iVar4; iVar4 = iVar4 + -1) {
            local_c8 = 0x30;
            iVar6 = doapr_outch(param_1,param_2,param_3,param_4);
            if (iVar6 == 0) {
              return 0;
            }
          }
        }
        uVar9 = local_a0;
        if (local_b4 != 0) {
          local_c8 = local_b4;
          iVar6 = doapr_outch(param_1,param_2,param_3,param_4);
          uVar9 = local_a0;
          if (iVar6 == 0) {
            return 0;
          }
        }
        do {
          if ((longlong)uVar9 < 1) {
            local_a0 = uVar9;
            if ((0 < iVar7) || ((param_8 & 8) != 0)) {
              local_c8 = 0x2e;
              iVar6 = doapr_outch(param_1,param_2,param_3,param_4);
              if (iVar6 == 0) {
                return 0;
              }
              while (0 < (longlong)uVar5) {
                local_c8 = (uint)acStack_81[uVar5];
                uVar5 = uVar5 - 1;
                iVar6 = doapr_outch(param_1,param_2,param_3,param_4);
                if (iVar6 == 0) {
                  return 0;
                }
              }
            }
            for (; 0 < iVar11; iVar11 = iVar11 + -1) {
              local_c8 = 0x30;
              iVar6 = doapr_outch(param_1,param_2,param_3,param_4);
              if (iVar6 == 0) {
                return 0;
              }
            }
            if (local_b8 == 1) {
              local_c8 = ~param_8 & 0x20 | 0x45;
              iVar6 = doapr_outch(param_1,param_2,param_3,param_4);
              if (iVar6 == 0) {
                return 0;
              }
              if ((int)local_ac < 0) {
                local_c8 = 0x2d;
                iVar6 = doapr_outch(param_1,param_2,param_3,param_4);
              }
              else {
                local_c8 = 0x2b;
                iVar6 = doapr_outch(param_1,param_2,param_3,param_4);
              }
              if (iVar6 == 0) {
                return 0;
              }
              lVar3 = (longlong)(int)local_b0;
              if (0 < (int)local_b0) {
                do {
                  local_c8 = (uint)acStack_69[lVar3];
                  lVar3 = lVar3 + -1;
                  iVar6 = doapr_outch(param_1,param_2,param_3,param_4);
                  if (iVar6 == 0) {
                    return 0;
                  }
                } while (0 < lVar3);
              }
            }
            while( true ) {
              if (-1 < iVar4) {
                return 1;
              }
              local_c8 = 0x20;
              iVar6 = doapr_outch(param_1,param_2,param_3,param_4);
              if (iVar6 == 0) break;
              iVar4 = iVar4 + 1;
            }
            return 0;
          }
          local_a0 = uVar9 - 1;
          local_c8 = (uint)acStack_98[uVar9 - 1];
          iVar6 = doapr_outch(param_1,param_2,param_3,param_4);
          uVar9 = local_a0;
        } while (iVar6 != 0);
      }
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  __report_rangecheckfailure();
}



// FUNCTION 143d0dd80 fmtint body=766 status=ok
// SIG undefined fmtint(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
fmtint(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulonglong param_5
      ,uint param_6,int param_7,uint param_8,uint param_9)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  char *pcVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_b8 [32];
  uint local_98;
  uint local_88;
  uint local_84;
  char acStack_79 [33];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x143d0dd97;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  uVar10 = 0;
  local_88 = 0;
  local_84 = 0;
  if (-1 < (int)param_8) {
    local_84 = param_8;
  }
  if ((param_9 & 0x40) == 0) {
    if ((longlong)param_5 < 0) {
      local_88 = 0x2d;
      param_5 = -param_5;
    }
    else if ((param_9 & 2) == 0) {
      local_88 = 0;
      if ((param_9 & 4) != 0) {
        local_88 = 0x20;
      }
    }
    else {
      local_88 = 0x2b;
    }
  }
  pcVar8 = "";
  if ((param_9 & 8) != 0) {
    pcVar3 = "0";
    if (param_6 != 8) {
      pcVar3 = "";
    }
    pcVar8 = "0x";
    if (param_6 != 0x10) {
      pcVar8 = pcVar3;
    }
  }
  pcVar3 = "0123456789abcdef";
  uVar5 = uVar10;
  uVar9 = uVar10;
  if ((param_9 & 0x20) != 0) {
    pcVar3 = "0123456789ABCDEF";
  }
  do {
    uVar7 = (uint)uVar9;
    acStack_79[uVar5 + 1] = pcVar3[param_5 % (ulonglong)param_6];
    uVar5 = uVar5 + 1;
    if (param_5 / param_6 == 0) break;
    param_5 = param_5 / param_6;
    uVar9 = (ulonglong)(uVar7 + 1);
  } while ((longlong)uVar5 < 0x1a);
  if (uVar7 != 0x19) {
    uVar7 = uVar7 + 1;
  }
  uVar5 = (ulonglong)(int)uVar7;
  if (uVar5 < 0x1a) {
    lVar6 = -1;
    acStack_79[uVar5 + 1] = '\0';
    do {
      lVar6 = lVar6 + 1;
    } while (pcVar8[lVar6] != '\0');
    uVar4 = uVar7;
    if ((int)uVar7 <= (int)local_84) {
      uVar4 = local_84;
    }
    uVar4 = ((param_7 - uVar4) - (uint)(local_88 != 0)) - (int)lVar6;
    if (-1 < (int)(local_84 - uVar7)) {
      uVar10 = (ulonglong)(local_84 - uVar7);
    }
    uVar7 = 0;
    if (-1 < (int)uVar4) {
      uVar7 = uVar4;
    }
    if ((param_9 & 0x10) != 0) {
      uVar4 = uVar7;
      if ((int)uVar7 <= (int)(uint)uVar10) {
        uVar4 = (uint)uVar10;
      }
      uVar10 = (ulonglong)uVar4;
    }
    uVar4 = 0;
    if ((param_9 & 0x10) == 0) {
      uVar4 = uVar7;
    }
    uVar7 = -uVar4;
    if ((param_9 & 1) == 0) {
      uVar7 = uVar4;
    }
    for (; 0 < (int)uVar7; uVar7 = uVar7 - 1) {
      local_98 = 0x20;
      iVar2 = doapr_outch(param_1,param_2,param_3,param_4);
      if (iVar2 == 0) {
        return 0;
      }
    }
    if ((local_88 == 0) ||
       (local_98 = local_88, iVar2 = doapr_outch(param_1,param_2,param_3,param_4), iVar2 != 0)) {
      cVar1 = *pcVar8;
      while (cVar1 != '\0') {
        local_98 = (uint)cVar1;
        iVar2 = doapr_outch(param_1,param_2,param_3,param_4);
        if (iVar2 == 0) {
          return 0;
        }
        pcVar3 = pcVar8 + 1;
        pcVar8 = pcVar8 + 1;
        cVar1 = *pcVar3;
      }
      uVar4 = (uint)uVar10;
      while (0 < (int)uVar4) {
        local_98 = 0x30;
        iVar2 = doapr_outch(param_1,param_2,param_3,param_4);
        if (iVar2 == 0) {
          return 0;
        }
        uVar4 = (int)uVar10 - 1;
        uVar10 = (ulonglong)uVar4;
      }
      do {
        if ((longlong)uVar5 < 1) {
          while( true ) {
            if (-1 < (int)uVar7) {
              return 1;
            }
            local_98 = 0x20;
            iVar2 = doapr_outch(param_1,param_2,param_3,param_4);
            if (iVar2 == 0) break;
            uVar7 = uVar7 + 1;
          }
          return 0;
        }
        local_98 = (uint)acStack_79[uVar5];
        uVar5 = uVar5 - 1;
        iVar2 = doapr_outch(param_1,param_2,param_3,param_4);
      } while (iVar2 != 0);
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __report_rangecheckfailure();
}



// FUNCTION 143d0e080 fmtstr body=372 status=ok
// SIG undefined fmtstr(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
fmtstr(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,char *param_5,
      uint param_6,int param_7,int param_8)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143d0e0a7;
  iVar3 = 0;
  pcVar5 = "<NULL>";
  if (param_5 != (char *)0x0) {
    pcVar5 = param_5;
  }
  lVar1 = -1;
  if (-1 < param_8) {
    lVar1 = (longlong)param_8;
  }
  lVar1 = OPENSSL_strnlen(pcVar5,lVar1);
  iVar2 = param_7 - (int)lVar1;
  if ((param_7 < 0) || (iVar2 < 0)) {
    iVar2 = 0;
  }
  if (-1 < param_8) {
    if (param_8 < 0x7fffffff - iVar2) {
      param_8 = param_8 + iVar2;
    }
    else {
      param_8 = 0x7fffffff;
    }
  }
  iVar4 = -iVar2;
  if ((param_6 & 1) == 0) {
    iVar4 = iVar2;
  }
  for (; (0 < iVar4 && ((param_8 < 0 || (iVar3 < param_8)))); iVar3 = iVar3 + 1) {
    iVar2 = doapr_outch(param_1,param_2,param_3,param_4,0x20,uVar6);
    if (iVar2 == 0) {
      return 0;
    }
    iVar4 = iVar4 + -1;
  }
  for (; (lVar1 != 0 && ((param_8 < 0 || (iVar3 < param_8)))); iVar3 = iVar3 + 1) {
    iVar2 = doapr_outch(param_1,param_2,param_3,param_4,(int)*pcVar5,uVar6);
    pcVar5 = pcVar5 + 1;
    if (iVar2 == 0) {
      return 0;
    }
    lVar1 = lVar1 + -1;
  }
  for (; (iVar4 < 0 && ((param_8 < 0 || (iVar3 < param_8)))); iVar3 = iVar3 + 1) {
    iVar2 = doapr_outch(param_1,param_2,param_3,param_4,0x20,uVar6);
    if (iVar2 == 0) {
      return 0;
    }
    iVar4 = iVar4 + 1;
  }
  return 1;
}



// FUNCTION 143d0e200 FUN_143d0e200 body=647 status=ok
// SIG undefined FUN_143d0e200(void)

char * FUN_143d0e200(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return "ok";
  case 1:
    return "unspecified certificate verification error";
  case 2:
    return "unable to get issuer certificate";
  case 3:
    return "unable to get certificate CRL";
  case 4:
    return "unable to decrypt certificate\'s signature";
  case 5:
    return "unable to decrypt CRL\'s signature";
  case 6:
    return "unable to decode issuer public key";
  case 7:
    return "certificate signature failure";
  case 8:
    return "CRL signature failure";
  case 9:
    return "certificate is not yet valid";
  case 10:
    return "certificate has expired";
  case 0xb:
    return "CRL is not yet valid";
  case 0xc:
    return "CRL has expired";
  case 0xd:
    return "format error in certificate\'s notBefore field";
  case 0xe:
    return "format error in certificate\'s notAfter field";
  case 0xf:
    return "format error in CRL\'s lastUpdate field";
  case 0x10:
    return "format error in CRL\'s nextUpdate field";
  case 0x11:
    return "out of memory";
  case 0x12:
    return "self signed certificate";
  case 0x13:
    return "self signed certificate in certificate chain";
  case 0x14:
    return "unable to get local issuer certificate";
  case 0x15:
    return "unable to verify the first certificate";
  case 0x16:
    return "certificate chain too long";
  case 0x17:
    return "certificate revoked";
  case 0x18:
    return "invalid CA certificate";
  case 0x19:
    return "path length constraint exceeded";
  case 0x1a:
    return "unsupported certificate purpose";
  case 0x1b:
    return "certificate not trusted";
  case 0x1c:
    return "certificate rejected";
  case 0x1d:
    return "subject issuer mismatch";
  case 0x1e:
    return "authority and subject key identifier mismatch";
  case 0x1f:
    return "authority and issuer serial number mismatch";
  case 0x20:
    return "key usage does not include certificate signing";
  case 0x21:
    return "unable to get CRL issuer certificate";
  case 0x22:
    return "unhandled critical extension";
  case 0x23:
    return "key usage does not include CRL signing";
  case 0x24:
    return "unhandled critical CRL extension";
  case 0x25:
    return "invalid non-CA certificate (has CA markings)";
  case 0x26:
    return "proxy path length constraint exceeded";
  case 0x27:
    return "key usage does not include digital signature";
  case 0x28:
    return "proxy certificates not allowed, please set the appropriate flag";
  case 0x29:
    return "invalid or inconsistent certificate extension";
  case 0x2a:
    return "invalid or inconsistent certificate policy extension";
  case 0x2b:
    return "no explicit policy";
  case 0x2c:
    return "Different CRL scope";
  case 0x2d:
    return "Unsupported extension feature";
  case 0x2e:
    return "RFC 3779 resource not subset of parent\'s resources";
  case 0x2f:
    return "permitted subtree violation";
  case 0x30:
    return "excluded subtree violation";
  case 0x31:
    return "name constraints minimum and maximum not supported";
  case 0x32:
    return "application verification failure";
  case 0x33:
    return "unsupported name constraint type";
  case 0x34:
    return "unsupported or invalid name constraint syntax";
  case 0x35:
    return "unsupported or invalid name syntax";
  case 0x36:
    return "CRL path validation error";
  case 0x37:
    return "Path Loop";
  case 0x38:
    return "Suite B: certificate version invalid";
  case 0x39:
    return "Suite B: invalid public key algorithm";
  case 0x3a:
    return "Suite B: invalid ECC curve";
  case 0x3b:
    return "Suite B: invalid signature algorithm";
  case 0x3c:
    return "Suite B: curve not allowed for this LOS";
  case 0x3d:
    return "Suite B: cannot sign P-384 with P-256";
  case 0x3e:
    return "Hostname mismatch";
  case 0x3f:
    return "Email address mismatch";
  case 0x40:
    return "IP address mismatch";
  case 0x41:
    return "No matching DANE TLSA records";
  case 0x42:
    return "EE certificate key too weak";
  case 0x43:
    return "CA certificate key too weak";
  case 0x44:
    return "CA signature digest algorithm too weak";
  case 0x45:
    return "Invalid certificate verification context";
  case 0x46:
    return "Issuer certificate lookup error";
  case 0x47:
    return "Certificate Transparency required, but no valid SCTs found";
  case 0x48:
    return "proxy subject name violation";
  case 0x49:
    return "OCSP verification needed";
  case 0x4a:
    return "OCSP verification failed";
  case 0x4b:
    return "OCSP unknown cert";
  default:
    return "unknown certificate verification error";
  }
}



// FUNCTION 143d0e5c0 BN_GENCB_free body=41 status=ok
// SIG undefined BN_GENCB_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_GENCB_free(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1 != 0) {
    CRYPTO_free(param_1,"crypto\\bn\\bn_lib.c",0x39c,param_4,0x143d0e5cf);
  }
  return;
}



// FUNCTION 143d0e5f0 BN_GENCB_new body=78 status=ok
// SIG undefined BN_GENCB_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong BN_GENCB_new(void)

{
  longlong lVar1;
  
  lVar1 = CRYPTO_malloc(0x18,"crypto\\bn\\bn_lib.c",0x390);
  if (lVar1 == 0) {
    ERR_put_error(3,0x8f,0x41,"crypto\\bn\\bn_lib.c",0x391);
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 143d0e640 FUN_143d0e640 body=15 status=ok
// SIG undefined FUN_143d0e640(void)

void FUN_143d0e640(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 2;
  *(undefined8 *)(param_1 + 2) = param_3;
  *(undefined8 *)(param_1 + 4) = param_2;
  return;
}



// FUNCTION 143d0e650 BN_abs_is_word body=37 status=ok
// SIG undefined BN_abs_is_word(void)

undefined8 BN_abs_is_word(undefined8 *param_1,longlong param_2)

{
  if (((*(int *)(param_1 + 1) != 1) || (*(longlong *)*param_1 != param_2)) &&
     ((param_2 != 0 || (*(int *)(param_1 + 1) != 0)))) {
    return 0;
  }
  return 1;
}



// FUNCTION 143d0e680 BN_bin2bn body=314 status=ok
// SIG undefined BN_bin2bn(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * BN_bin2bn(byte *param_1,int param_2,longlong *param_3)

{
  byte bVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  bool bVar9;
  
  plVar2 = (longlong *)0x0;
  if ((param_3 == (longlong *)0x0) &&
     (plVar2 = (longlong *)BN_new(), param_3 = plVar2, plVar2 == (longlong *)0x0)) {
    return (longlong *)0x0;
  }
  for (; (0 < param_2 && (*param_1 == 0)); param_1 = param_1 + 1) {
    param_2 = param_2 + -1;
  }
  if (param_2 == 0) {
    *(undefined4 *)(param_3 + 1) = 0;
    return param_3;
  }
  uVar8 = param_2 - 1U & 7;
  uVar6 = (param_2 - 1U >> 3) + 1;
  uVar5 = (ulonglong)uVar6;
  plVar3 = param_3;
  if (*(int *)((longlong)param_3 + 0xc) < (int)uVar6) {
    plVar3 = (longlong *)bn_expand2(param_3);
  }
  if (plVar3 == (longlong *)0x0) {
    BN_free(plVar2);
    param_3 = (longlong *)0x0;
  }
  else {
    *(uint *)(param_3 + 1) = uVar6;
    uVar4 = 0;
    *(undefined4 *)(param_3 + 2) = 0;
    do {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
      uVar4 = uVar4 << 8 | (ulonglong)bVar1;
      bVar9 = uVar8 == 0;
      uVar8 = uVar8 - 1;
      if (bVar9) {
        uVar5 = (ulonglong)((int)uVar5 - 1);
        *(ulonglong *)(*param_3 + uVar5 * 8) = uVar4;
        uVar4 = 0;
        uVar8 = 7;
      }
    } while (param_2 != 0);
    uVar8 = *(uint *)(param_3 + 1);
    uVar5 = (ulonglong)(int)uVar8;
    if (0 < (int)uVar8) {
      lVar7 = *param_3 + uVar5 * 8;
      do {
        uVar8 = (uint)uVar5;
        plVar2 = (longlong *)(lVar7 + -8);
        lVar7 = lVar7 + -8;
        if (*plVar2 != 0) break;
        uVar8 = uVar8 - 1;
        uVar5 = (ulonglong)uVar8;
      } while (0 < (int)uVar8);
      *(uint *)(param_3 + 1) = uVar8;
    }
    if (uVar8 == 0) {
      *(undefined4 *)(param_3 + 2) = 0;
    }
  }
  return param_3;
}



// FUNCTION 143d0e7c0 BN_bn2bin body=26 status=ok
// SIG undefined BN_bn2bin(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_bn2bin(undefined8 param_1,undefined8 param_2)

{
  bn2binpad(param_1,param_2,0xffffffff);
  return;
}



// FUNCTION 143d0e7e0 BN_bn2binpad body=37 status=ok
// SIG undefined BN_bn2binpad(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_bn2binpad(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 < 0) {
    return 0xffffffff;
  }
  uVar1 = bn2binpad();
  return uVar1;
}



// FUNCTION 143d0e810 BN_clear_free body=139 status=ok
// SIG undefined BN_clear_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_clear_free(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    if ((*param_1 != 0) && ((*(byte *)((longlong)param_1 + 0x14) & 2) == 0)) {
      FUN_14004ff40(*param_1,(longlong)*(int *)((longlong)param_1 + 0xc) << 3);
      if ((*(byte *)((longlong)param_1 + 0x14) & 8) == 0) {
        CRYPTO_free(*param_1,"crypto\\bn\\bn_lib.c",0x96);
      }
      else {
        CRYPTO_secure_free(*param_1,"crypto\\bn\\bn_lib.c",0x94);
      }
    }
    if ((*(byte *)((longlong)param_1 + 0x14) & 1) != 0) {
      FUN_14004ff40(param_1,0x18);
      CRYPTO_free(param_1,"crypto\\bn\\bn_lib.c",0xa4);
    }
  }
  return;
}



// FUNCTION 143d0e8a0 BN_cmp body=139 status=ok
// SIG undefined BN_cmp(void)

undefined4 BN_cmp(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  undefined4 uVar8;
  
  if (param_1 == (longlong *)0x0) {
    if (param_2 == (longlong *)0x0) {
      return 0;
    }
    return 1;
  }
  if (param_2 != (longlong *)0x0) {
    iVar1 = (int)param_1[2];
    if (iVar1 == (int)param_2[2]) {
      iVar2 = (int)param_1[1];
      uVar8 = 1;
      uVar5 = 0xffffffff;
      if (iVar1 != 0) {
        uVar8 = 0xffffffff;
        uVar5 = 1;
      }
      if ((int)param_2[1] < iVar2) {
        return uVar8;
      }
      if (iVar2 < (int)param_2[1]) {
        return uVar5;
      }
      if (iVar2 + -1 < 0) {
        return 0;
      }
      lVar7 = (longlong)(iVar2 + -1);
      puVar6 = (ulonglong *)(*param_2 + lVar7 * 8);
      while( true ) {
        uVar3 = *(ulonglong *)((*param_1 - *param_2) + (longlong)puVar6);
        uVar4 = *puVar6;
        if (uVar3 >= uVar4 && uVar3 != uVar4) {
          return uVar8;
        }
        if (uVar3 < uVar4) break;
        puVar6 = puVar6 + -1;
        lVar7 = lVar7 + -1;
        if (lVar7 < 0) {
          return 0;
        }
      }
      return uVar5;
    }
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0xffffffff;
}



// FUNCTION 143d0e930 FUN_143d0e930 body=762 status=ok
// SIG undefined FUN_143d0e930(void)

void FUN_143d0e930(longlong param_1,longlong *param_2,longlong *param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  
  uVar14 = 0xffffffffffffffff - (param_1 + -1 >> 0x3f);
  uVar12 = (uint)uVar14;
  uVar10 = (*(uint *)(param_2 + 1) ^ *(uint *)(param_3 + 1)) & uVar12;
  iVar15 = param_4 + -1;
  *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) ^ uVar10;
  *(uint *)(param_3 + 1) = *(uint *)(param_3 + 1) ^ uVar10;
  uVar10 = (*(uint *)(param_2 + 2) ^ *(uint *)(param_3 + 2)) & uVar12;
  *(uint *)(param_2 + 2) = *(uint *)(param_2 + 2) ^ uVar10;
  *(uint *)(param_3 + 2) = *(uint *)(param_3 + 2) ^ uVar10;
  uVar12 = (*(uint *)((longlong)param_2 + 0x14) ^ *(uint *)((longlong)param_3 + 0x14)) & 4 & uVar12;
  *(uint *)((longlong)param_2 + 0x14) = uVar12 ^ *(uint *)((longlong)param_2 + 0x14);
  *(uint *)((longlong)param_3 + 0x14) = *(uint *)((longlong)param_3 + 0x14) ^ uVar12;
  switch(iVar15) {
  default:
    iVar13 = 10;
    if ((10 < param_4) && (1 < param_4 - 10U)) {
      lVar17 = *param_3;
      lVar6 = *param_2;
      plVar1 = (longlong *)(lVar17 + 0x50);
      plVar2 = (longlong *)(lVar6 + 0x50);
      plVar3 = (longlong *)(lVar17 + (longlong)iVar15 * 8);
      plVar4 = (longlong *)(lVar6 + (longlong)iVar15 * 8);
      if (((plVar4 < plVar1) || (plVar3 < plVar2)) &&
         ((((param_3 < plVar1 || (plVar3 < param_3)) && ((param_2 < plVar1 || (plVar3 < param_2))))
          && (((param_3 < plVar2 || (plVar4 < param_3)) &&
              ((param_2 < plVar2 || (plVar4 < param_2)))))))) {
        uVar10 = param_4 - 10U & 0x80000001;
        if ((int)uVar10 < 0) {
          uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
        }
        lVar11 = 0x50;
        do {
          uVar8 = *(ulonglong *)(lVar11 + lVar17);
          uVar9 = ((ulonglong *)(lVar11 + lVar17))[1];
          iVar13 = iVar13 + 2;
          uVar7 = *(ulonglong *)(lVar11 + lVar6);
          uVar16 = ((ulonglong *)(lVar11 + lVar6))[1];
          uVar18 = (uVar8 ^ uVar7) & uVar14;
          uVar19 = (uVar9 ^ uVar16) & uVar14;
          *(ulonglong *)(lVar11 + lVar6) = uVar18 ^ uVar7;
          ((ulonglong *)(lVar11 + lVar6))[1] = uVar19 ^ uVar16;
          *(ulonglong *)(lVar11 + lVar17) = uVar18 ^ uVar8;
          ((ulonglong *)(lVar11 + lVar17))[1] = uVar19 ^ uVar9;
          lVar11 = lVar11 + 0x10;
        } while (iVar13 < (int)(param_4 - uVar10));
      }
    }
    for (lVar17 = (longlong)iVar13; lVar17 < param_4; lVar17 = lVar17 + 1) {
      uVar7 = *(ulonglong *)(*param_2 + lVar17 * 8);
      uVar16 = (*(ulonglong *)(*param_3 + lVar17 * 8) ^ uVar7) & uVar14;
      *(ulonglong *)(*param_2 + lVar17 * 8) = uVar7 ^ uVar16;
      puVar5 = (ulonglong *)(*param_3 + lVar17 * 8);
      *puVar5 = *puVar5 ^ uVar16;
    }
  case 9:
    uVar7 = *(ulonglong *)(*param_2 + 0x48);
    uVar16 = (*(ulonglong *)(*param_3 + 0x48) ^ uVar7) & uVar14;
    *(ulonglong *)(*param_2 + 0x48) = uVar7 ^ uVar16;
    *(ulonglong *)(*param_3 + 0x48) = *(ulonglong *)(*param_3 + 0x48) ^ uVar16;
  case 8:
    uVar7 = *(ulonglong *)(*param_2 + 0x40);
    uVar16 = (*(ulonglong *)(*param_3 + 0x40) ^ uVar7) & uVar14;
    *(ulonglong *)(*param_2 + 0x40) = uVar7 ^ uVar16;
    *(ulonglong *)(*param_3 + 0x40) = *(ulonglong *)(*param_3 + 0x40) ^ uVar16;
  case 7:
    uVar7 = *(ulonglong *)(*param_2 + 0x38);
    uVar16 = (*(ulonglong *)(*param_3 + 0x38) ^ uVar7) & uVar14;
    *(ulonglong *)(*param_2 + 0x38) = uVar7 ^ uVar16;
    *(ulonglong *)(*param_3 + 0x38) = *(ulonglong *)(*param_3 + 0x38) ^ uVar16;
  case 6:
    uVar7 = *(ulonglong *)(*param_2 + 0x30);
    uVar16 = (*(ulonglong *)(*param_3 + 0x30) ^ uVar7) & uVar14;
    *(ulonglong *)(*param_2 + 0x30) = uVar7 ^ uVar16;
    *(ulonglong *)(*param_3 + 0x30) = *(ulonglong *)(*param_3 + 0x30) ^ uVar16;
  case 5:
    uVar7 = *(ulonglong *)(*param_2 + 0x28);
    uVar16 = (*(ulonglong *)(*param_3 + 0x28) ^ uVar7) & uVar14;
    *(ulonglong *)(*param_2 + 0x28) = uVar7 ^ uVar16;
    *(ulonglong *)(*param_3 + 0x28) = *(ulonglong *)(*param_3 + 0x28) ^ uVar16;
  case 4:
    uVar7 = *(ulonglong *)(*param_2 + 0x20);
    uVar16 = (*(ulonglong *)(*param_3 + 0x20) ^ uVar7) & uVar14;
    *(ulonglong *)(*param_2 + 0x20) = uVar7 ^ uVar16;
    *(ulonglong *)(*param_3 + 0x20) = *(ulonglong *)(*param_3 + 0x20) ^ uVar16;
  case 3:
    uVar7 = *(ulonglong *)(*param_2 + 0x18);
    uVar16 = (*(ulonglong *)(*param_3 + 0x18) ^ uVar7) & uVar14;
    *(ulonglong *)(*param_2 + 0x18) = uVar7 ^ uVar16;
    *(ulonglong *)(*param_3 + 0x18) = *(ulonglong *)(*param_3 + 0x18) ^ uVar16;
  case 2:
    uVar7 = *(ulonglong *)(*param_2 + 0x10);
    uVar16 = (*(ulonglong *)(*param_3 + 0x10) ^ uVar7) & uVar14;
    *(ulonglong *)(*param_2 + 0x10) = uVar7 ^ uVar16;
    *(ulonglong *)(*param_3 + 0x10) = *(ulonglong *)(*param_3 + 0x10) ^ uVar16;
  case 1:
    uVar7 = *(ulonglong *)(*param_2 + 8);
    uVar16 = (*(ulonglong *)(*param_3 + 8) ^ uVar7) & uVar14;
    *(ulonglong *)(*param_2 + 8) = uVar7 ^ uVar16;
    *(ulonglong *)(*param_3 + 8) = *(ulonglong *)(*param_3 + 8) ^ uVar16;
  case 0:
    uVar7 = *(ulonglong *)*param_2;
    uVar14 = (*(ulonglong *)*param_3 ^ uVar7) & uVar14;
    *(ulonglong *)*param_2 = uVar7 ^ uVar14;
    *(ulonglong *)*param_3 = *(ulonglong *)*param_3 ^ uVar14;
    return;
  }
}



// FUNCTION 143d0ec60 BN_copy body=116 status=ok
// SIG undefined BN_copy(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * BN_copy(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_1;
    if (*(int *)((longlong)param_1 + 0xc) < *(int *)(param_2 + 1)) {
      puVar1 = (undefined8 *)bn_expand2();
    }
    if (puVar1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    if (0 < *(int *)(param_2 + 1)) {
      _guard_xfg_dispatch_icall_nop
                ((void *)*param_1,(void *)*param_2,(longlong)*(int *)(param_2 + 1) << 3);
    }
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  }
  return param_1;
}



// FUNCTION 143d0ece0 BN_dup body=224 status=ok
// SIG undefined BN_dup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * BN_dup(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143d0ecf0;
  if (param_1 != (undefined8 *)0x0) {
    if ((*(byte *)((longlong)param_1 + 0x14) & 8) == 0) {
      puVar1 = (undefined8 *)BN_new();
    }
    else {
      puVar1 = (undefined8 *)CRYPTO_zalloc(0x18,"crypto\\bn\\bn_lib.c",0xbe);
      if (puVar1 == (undefined8 *)0x0) {
        ERR_put_error(3,0x71,0x41,"crypto\\bn\\bn_lib.c",0xbf,uVar3);
      }
      else {
        *(undefined4 *)((longlong)puVar1 + 0x14) = 9;
      }
    }
    if (puVar1 != (undefined8 *)0x0) {
      if (puVar1 != param_1) {
        puVar2 = puVar1;
        if (*(int *)((longlong)puVar1 + 0xc) < *(int *)(param_1 + 1)) {
          puVar2 = (undefined8 *)bn_expand2(puVar1);
        }
        if (puVar2 == (undefined8 *)0x0) {
          BN_free(puVar1);
          return (undefined8 *)0x0;
        }
        if (0 < *(int *)(param_1 + 1)) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)*puVar1,(void *)*param_1,(longlong)*(int *)(param_1 + 1) << 3);
        }
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 2);
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 1);
      }
      return puVar1;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143d0edc0 BN_free body=100 status=ok
// SIG undefined BN_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if ((*(uint *)((longlong)param_1 + 0x14) & 2) == 0) {
      if ((*(uint *)((longlong)param_1 + 0x14) & 8) == 0) {
        CRYPTO_free(*param_1,"crypto\\bn\\bn_lib.c",0x96);
      }
      else {
        CRYPTO_secure_free(*param_1,"crypto\\bn\\bn_lib.c",0x94);
      }
    }
    if ((*(byte *)((longlong)param_1 + 0x14) & 1) != 0) {
      CRYPTO_free(param_1,"crypto\\bn\\bn_lib.c",0xaf);
    }
  }
  return;
}



// FUNCTION 143d0ee30 BN_get_flags body=6 status=ok
// SIG undefined BN_get_flags(void)

uint BN_get_flags(longlong param_1,uint param_2)

{
  return *(uint *)(param_1 + 0x14) & param_2;
}



// FUNCTION 143d0ee40 BN_get_word body=26 status=ok
// SIG undefined BN_get_word(void)

undefined8 BN_get_word(undefined8 *param_1)

{
  if (1 < *(int *)(param_1 + 1)) {
    return 0xffffffffffffffff;
  }
  if (*(int *)(param_1 + 1) == 1) {
    return *(undefined8 *)*param_1;
  }
  return 0;
}



// FUNCTION 143d0ee60 BN_is_bit_set body=56 status=ok
// SIG undefined BN_is_bit_set(void)

uint BN_is_bit_set(longlong *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (-1 < param_2) {
    uVar1 = param_2 >> 0x1f & 0x3f;
    param_2 = param_2 + uVar1;
    iVar2 = param_2 >> 6;
    if (iVar2 < (int)param_1[1]) {
      return (uint)(*(ulonglong *)(*param_1 + (longlong)iVar2 * 8) >>
                   (((byte)param_2 & 0x3f) - (char)uVar1 & 0x3f)) & 1;
    }
  }
  return 0;
}



// FUNCTION 143d0eea0 BN_is_negative body=9 status=ok
// SIG undefined BN_is_negative(void)

bool BN_is_negative(longlong param_1)

{
  return *(int *)(param_1 + 0x10) != 0;
}



// FUNCTION 143d0eeb0 BN_is_odd body=23 status=ok
// SIG undefined BN_is_odd(void)

undefined8 BN_is_odd(undefined8 *param_1)

{
  if ((0 < *(int *)(param_1 + 1)) && ((*(byte *)*param_1 & 1) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 143d0eed0 BN_is_one body=30 status=ok
// SIG undefined BN_is_one(void)

undefined8 BN_is_one(undefined8 *param_1)

{
  if (((*(int *)(param_1 + 1) == 1) && (*(longlong *)*param_1 == 1)) && (*(int *)(param_1 + 2) == 0)
     ) {
    return 1;
  }
  return 0;
}



// FUNCTION 143d0eef0 BN_is_word body=48 status=ok
// SIG undefined BN_is_word(void)

undefined8 BN_is_word(undefined8 *param_1,longlong param_2)

{
  if ((((*(int *)(param_1 + 1) == 1) && (*(longlong *)*param_1 == param_2)) ||
      ((param_2 == 0 && (*(int *)(param_1 + 1) == 0)))) &&
     ((param_2 == 0 || (*(int *)(param_1 + 2) == 0)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 143d0ef20 BN_is_zero body=9 status=ok
// SIG undefined BN_is_zero(void)

bool BN_is_zero(longlong param_1)

{
  return *(int *)(param_1 + 8) == 0;
}



// FUNCTION 143d0ef30 BN_mask_bits body=157 status=ok
// SIG undefined BN_mask_bits(void)

undefined8 BN_mask_bits(longlong *param_1,int param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  
  if (-1 < param_2) {
    uVar5 = param_2 >> 0x1f & 0x3f;
    uVar3 = param_2 + uVar5;
    iVar4 = (uVar3 & 0x3f) - uVar5;
    iVar7 = (int)uVar3 >> 6;
    if (iVar7 < (int)param_1[1]) {
      if (iVar4 == 0) {
        *(int *)(param_1 + 1) = iVar7;
      }
      else {
        *(int *)(param_1 + 1) = iVar7 + 1;
        puVar2 = (ulonglong *)(*param_1 + (longlong)iVar7 * 8);
        *puVar2 = *puVar2 & ~(-1L << ((byte)iVar4 & 0x3f));
        iVar7 = (int)param_1[1];
      }
      if (0 < iVar7) {
        lVar6 = *param_1 + (longlong)iVar7 * 8;
        do {
          plVar1 = (longlong *)(lVar6 + -8);
          lVar6 = lVar6 + -8;
          if (*plVar1 != 0) break;
          iVar7 = iVar7 + -1;
        } while (0 < iVar7);
        *(int *)(param_1 + 1) = iVar7;
      }
      if (iVar7 == 0) {
        *(undefined4 *)(param_1 + 2) = 0;
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143d0efd0 BN_new body=88 status=ok
// SIG undefined BN_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong BN_new(void)

{
  longlong lVar1;
  
  lVar1 = CRYPTO_zalloc(0x18,"crypto\\bn\\bn_lib.c",0xbe);
  if (lVar1 == 0) {
    ERR_put_error(3,0x71,0x41,"crypto\\bn\\bn_lib.c",0xbf);
    return 0;
  }
  *(undefined4 *)(lVar1 + 0x14) = 1;
  return lVar1;
}



// FUNCTION 143d0f030 BN_num_bits body=256 status=ok
// SIG undefined BN_num_bits(void)

int BN_num_bits(longlong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = (int)param_1[1];
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = *(ulonglong *)(*param_1 + -8 + (longlong)iVar1 * 8);
  lVar4 = -(uVar2 >> 0x20);
  uVar7 = uVar2 ^ (uVar2 >> 0x20 ^ uVar2) & lVar4 >> 0x3f;
  lVar8 = -(uVar7 >> 0x10);
  uVar7 = uVar7 ^ (uVar7 >> 0x10 ^ uVar7) & lVar8 >> 0x3f;
  lVar6 = -(uVar7 >> 8);
  uVar7 = uVar7 ^ (uVar7 >> 8 ^ uVar7) & lVar6 >> 0x3f;
  lVar5 = -(uVar7 >> 4);
  uVar7 = uVar7 ^ (uVar7 >> 4 ^ uVar7) & lVar5 >> 0x3f;
  lVar3 = -(uVar7 >> 2);
  return ((uVar2 != 0) - 0x40) +
         ((uint)((longlong)-(((uVar7 >> 2 ^ uVar7) & lVar3 >> 0x3f ^ uVar7) >> 1) >> 0x3f) & 1) +
         iVar1 * 0x40 + ((uint)(lVar4 >> 0x3f) & 0x20) + ((uint)(lVar8 >> 0x3f) & 0x10) +
         ((uint)(lVar5 >> 0x3f) & 4) + ((uint)(lVar6 >> 0x3f) & 8) + ((uint)(lVar3 >> 0x3f) & 2);
}



// FUNCTION 143d0f130 BN_num_bits_word body=214 status=ok
// SIG undefined BN_num_bits_word(void)

int BN_num_bits_word(ulonglong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  lVar5 = -(param_1 >> 0x20);
  uVar6 = param_1 ^ (param_1 >> 0x20 ^ param_1) & lVar5 >> 0x3f;
  lVar2 = -(uVar6 >> 0x10);
  uVar6 = uVar6 ^ (uVar6 >> 0x10 ^ uVar6) & lVar2 >> 0x3f;
  lVar3 = -(uVar6 >> 8);
  uVar6 = uVar6 ^ (uVar6 >> 8 ^ uVar6) & lVar3 >> 0x3f;
  lVar4 = -(uVar6 >> 4);
  uVar6 = uVar6 ^ (uVar6 >> 4 ^ uVar6) & lVar4 >> 0x3f;
  lVar1 = -(uVar6 >> 2);
  return ((uint)(lVar1 >> 0x3f) & 2) +
         ((uint)((longlong)-(((uVar6 >> 2 ^ uVar6) & lVar1 >> 0x3f ^ uVar6) >> 1) >> 0x3f) & 1) +
         (uint)(param_1 != 0) + ((uint)(lVar5 >> 0x3f) & 0x20) + ((uint)(lVar2 >> 0x3f) & 0x10) +
         ((uint)(lVar3 >> 0x3f) & 8) + ((uint)(lVar4 >> 0x3f) & 4);
}



// FUNCTION 143d0f210 BN_secure_new body=88 status=ok
// SIG undefined BN_secure_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong BN_secure_new(void)

{
  longlong lVar1;
  
  lVar1 = CRYPTO_zalloc(0x18,"crypto\\bn\\bn_lib.c",0xbe);
  if (lVar1 == 0) {
    ERR_put_error(3,0x71,0x41,"crypto\\bn\\bn_lib.c",0xbf);
    return 0;
  }
  *(undefined4 *)(lVar1 + 0x14) = 9;
  return lVar1;
}



// FUNCTION 143d0f270 FUN_143d0f270 body=102 status=ok
// SIG undefined FUN_143d0f270(void)

int FUN_143d0f270(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 < 0x3c00) {
    if (param_1 < 0x1e00) {
      if (param_1 < 0xc00) {
        if (param_1 < 0x800) {
          if (param_1 < 0x400) {
            return 0;
          }
          iVar1 = 0x50;
        }
        else {
          iVar1 = 0x70;
        }
      }
      else {
        iVar1 = 0x80;
      }
    }
    else {
      iVar1 = 0xc0;
    }
  }
  else {
    iVar1 = 0x100;
  }
  if (param_2 != -1) {
    param_2 = param_2 / 2;
    if (param_2 < 0x50) {
      return 0;
    }
    if (iVar1 <= param_2) {
      param_2 = iVar1;
    }
    return param_2;
  }
  return iVar1;
}



// FUNCTION 143d0f2e0 BN_set_bit body=180 status=ok
// SIG undefined BN_set_bit(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_set_bit(longlong *param_1,int param_2)

{
  int iVar1;
  ulonglong *puVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  
  if (param_2 < 0) {
LAB_143d0f37d:
    uVar5 = 0;
  }
  else {
    uVar7 = param_2 >> 0x1f & 0x3f;
    uVar3 = param_2 + uVar7;
    iVar8 = (int)uVar3 >> 6;
    if ((int)param_1[1] <= iVar8) {
      iVar1 = iVar8 + 1;
      plVar4 = param_1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1) {
        plVar4 = (longlong *)bn_expand2(param_1,iVar1);
      }
      if (plVar4 == (longlong *)0x0) goto LAB_143d0f37d;
      for (lVar6 = (longlong)(int)param_1[1]; lVar6 < iVar1; lVar6 = lVar6 + 1) {
        *(undefined8 *)(*param_1 + lVar6 * 8) = 0;
      }
      *(int *)(param_1 + 1) = iVar1;
    }
    puVar2 = (ulonglong *)(*param_1 + (longlong)iVar8 * 8);
    uVar5 = 1;
    *puVar2 = *puVar2 | 1L << ((longlong)(int)((uVar3 & 0x3f) - uVar7) & 0x3fU);
  }
  return uVar5;
}



// FUNCTION 143d0f3a0 BN_set_flags body=4 status=ok
// SIG undefined BN_set_flags(void)

void BN_set_flags(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | param_2;
  return;
}



// FUNCTION 143d0f3b0 BN_set_negative body=26 status=ok
// SIG undefined BN_set_negative(void)

void BN_set_negative(longlong param_1,int param_2)

{
  if ((param_2 != 0) && (*(int *)(param_1 + 8) != 0)) {
    *(undefined4 *)(param_1 + 0x10) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 143d0f3d0 BN_set_word body=98 status=ok
// SIG undefined BN_set_word(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_set_word(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (*(int *)((longlong)param_1 + 0xc) < 1) {
    puVar1 = (undefined8 *)bn_expand2();
  }
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 2) = 0;
    *(longlong *)*param_1 = param_2;
    *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
    return 1;
  }
  return 0;
}



// FUNCTION 143d0f440 BN_to_montgomery body=38 status=ok
// SIG undefined BN_to_montgomery(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_to_montgomery(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  BN_mod_mul_montgomery(param_1,param_2,param_3 + 8,param_3,param_4);
  return;
}



// FUNCTION 143d0f470 BN_ucmp body=72 status=ok
// SIG undefined BN_ucmp(void)

int BN_ucmp(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  
  iVar2 = (int)param_1[1] - (int)param_2[1];
  if (iVar2 == 0) {
    iVar2 = (int)param_1[1] + -1;
    lVar4 = (longlong)iVar2;
    if (-1 < iVar2) {
      puVar3 = (ulonglong *)(*param_2 + lVar4 * 8);
      do {
        uVar1 = *(ulonglong *)((*param_1 - *param_2) + (longlong)puVar3);
        if (uVar1 != *puVar3) {
          iVar2 = -1;
          if (*puVar3 <= uVar1) {
            iVar2 = 1;
          }
          return iVar2;
        }
        puVar3 = puVar3 + -1;
        lVar4 = lVar4 + -1;
      } while (-1 < lVar4);
    }
    iVar2 = 0;
  }
  return iVar2;
}



// FUNCTION 143d0f4c0 BN_value_one body=8 status=ok
// SIG undefined BN_value_one(void)

undefined ** BN_value_one(void)

{
  return &PTR_DAT_145d778d0;
}



// FUNCTION 143d0f4d0 BN_with_flags body=48 status=ok
// SIG undefined BN_with_flags(void)

void BN_with_flags(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(uint *)((longlong)param_1 + 0x14) =
       *(uint *)((longlong)param_2 + 0x14) & 0xfffffffe | *(uint *)((longlong)param_1 + 0x14) & 1 |
       param_3 | 2;
  return;
}



// FUNCTION 143d0f500 bn2binpad body=384 status=ok
// SIG undefined bn2binpad(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int bn2binpad(longlong *param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  
  uStack_20 = 0x143d0f513;
  iVar4 = BN_num_bits();
  uVar7 = 0;
  iVar4 = (int)(iVar4 + 7 + (iVar4 + 7 >> 0x1f & 7U)) >> 3;
  if ((param_3 != -1) && (bVar3 = param_3 < iVar4, iVar4 = param_3, bVar3)) {
    local_38 = *param_1;
    uStack_30 = param_1[1];
    iVar5 = (int)uStack_30;
    if (0 < iVar5) {
      lVar8 = local_38 + (longlong)iVar5 * 8;
      do {
        plVar1 = (longlong *)(lVar8 + -8);
        lVar8 = lVar8 + -8;
        if (*plVar1 != 0) break;
        iVar5 = iVar5 + -1;
      } while (0 < iVar5);
      uVar9 = (ulonglong)uStack_30 >> 0x20;
      uStack_30 = CONCAT44((int)uVar9,iVar5);
    }
    local_28 = (undefined4)param_1[2];
    if (iVar5 == 0) {
      local_28 = 0;
    }
    uStack_24 = (undefined4)((ulonglong)param_1[2] >> 0x20);
    iVar5 = BN_num_bits(&local_38);
    if (param_3 < (int)(iVar5 + 7 + (iVar5 + 7 >> 0x1f & 7U)) >> 3) {
      return -1;
    }
  }
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar9 = (ulonglong)iVar4;
  if ((uVar2 & 0x1fffffff) != 0) {
    lVar8 = param_1[1];
    pbVar6 = (byte *)(param_2 + uVar9);
    uVar10 = uVar7;
    if (iVar4 != 0) {
      do {
        pbVar6 = pbVar6 + -1;
        uVar11 = uVar10 + 1;
        *pbVar6 = (byte)(*(ulonglong *)(*param_1 + (uVar7 & 0xfffffffffffffff8)) >>
                        (((byte)uVar7 & 7) << 3)) &
                  (byte)((longlong)(uVar10 - (longlong)((int)lVar8 << 3)) >> 0x3f);
        uVar7 = uVar7 - ((longlong)(uVar7 - ((longlong)(int)(uVar2 << 3) + -1)) >> 0x3f);
        uVar10 = uVar11;
      } while (uVar11 < uVar9);
    }
    return iVar4;
  }
  FUN_14004ff40(param_2,uVar9);
  return iVar4;
}



// FUNCTION 143d0f680 bn_cmp_part_words body=224 status=ok
// SIG undefined bn_cmp_part_words(void)

undefined8 bn_cmp_part_words(longlong param_1,longlong param_2,int param_3,int param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  bool bVar9;
  
  lVar5 = (longlong)param_3 + -1;
  if (param_4 < 0) {
    lVar7 = (longlong)param_4;
    plVar6 = (longlong *)(param_2 + (lVar5 - lVar7) * 8);
    do {
      if (*plVar6 != 0) {
        return 0xffffffff;
      }
      plVar6 = plVar6 + -1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < 0);
  }
  if ((0 < param_4) && (lVar7 = (longlong)param_4, 0 < param_4)) {
    plVar6 = (longlong *)(param_1 + (lVar5 + lVar7) * 8);
    do {
      if (*plVar6 != 0) {
        return 1;
      }
      lVar7 = lVar7 + -1;
      plVar6 = plVar6 + -1;
    } while (0 < lVar7);
  }
  uVar1 = *(ulonglong *)(param_1 + lVar5 * 8);
  uVar2 = *(ulonglong *)(param_2 + lVar5 * 8);
  bVar8 = uVar1 < uVar2;
  bVar9 = false;
  if (uVar1 == uVar2) {
    lVar5 = (longlong)(param_3 + -2);
    if (-1 < param_3 + -2) {
      puVar4 = (ulonglong *)(param_2 + lVar5 * 8);
      do {
        uVar1 = *(ulonglong *)((param_1 - param_2) + (longlong)puVar4);
        bVar8 = uVar1 < *puVar4;
        bVar9 = uVar1 == *puVar4;
        if (!bVar9) goto LAB_143d0f6f4;
        puVar4 = puVar4 + -1;
        lVar5 = lVar5 + -1;
      } while (-1 < lVar5);
    }
    return 0;
  }
LAB_143d0f6f4:
  uVar3 = 0xffffffff;
  if (!bVar8 && !bVar9) {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 143d0f760 bn_cmp_words body=72 status=ok
// SIG undefined bn_cmp_words(void)

undefined8 bn_cmp_words(longlong param_1,longlong param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  
  uVar1 = *(ulonglong *)(param_1 + -8 + (longlong)param_3 * 8);
  uVar2 = *(ulonglong *)(param_2 + -8 + (longlong)param_3 * 8);
  bVar6 = uVar1 < uVar2;
  bVar7 = uVar1 == uVar2;
  if (!bVar7) {
LAB_143d0f772:
    uVar3 = 0xffffffff;
    if (!bVar6 && !bVar7) {
      uVar3 = 1;
    }
    return uVar3;
  }
  lVar5 = (longlong)(param_3 + -2);
  if (-1 < param_3 + -2) {
    puVar4 = (ulonglong *)(param_2 + lVar5 * 8);
    do {
      uVar1 = *(ulonglong *)((param_1 - param_2) + (longlong)puVar4);
      bVar6 = uVar1 < *puVar4;
      bVar7 = uVar1 == *puVar4;
      if (!bVar7) goto LAB_143d0f772;
      puVar4 = puVar4 + -1;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  return 0;
}



// FUNCTION 143d0f7b0 bn_correct_top body=48 status=ok
// SIG undefined bn_correct_top(void)

void bn_correct_top(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 1);
  uVar3 = (ulonglong)(int)uVar2;
  if (0 < (int)uVar2) {
    lVar4 = *param_1 + uVar3 * 8;
    do {
      uVar2 = (uint)uVar3;
      plVar1 = (longlong *)(lVar4 + -8);
      lVar4 = lVar4 + -8;
      if (*plVar1 != 0) break;
      uVar2 = uVar2 - 1;
      uVar3 = (ulonglong)uVar2;
    } while (0 < (int)uVar2);
    *(uint *)(param_1 + 1) = uVar2;
  }
  if (uVar2 == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 143d0f7e0 bn_expand2 body=289 status=ok
// SIG undefined bn_expand2(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * bn_expand2(longlong *param_1,int param_2)

{
  undefined4 uVar1;
  void *_Dst;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143d0f7f5;
  if (param_2 <= *(int *)((longlong)param_1 + 0xc)) {
    return param_1;
  }
  if (param_2 < 0x800000) {
    if ((*(uint *)((longlong)param_1 + 0x14) & 2) == 0) {
      if ((*(uint *)((longlong)param_1 + 0x14) & 8) == 0) {
        _Dst = (void *)CRYPTO_zalloc((longlong)param_2 << 3,"crypto\\bn\\bn_lib.c",0xe0);
      }
      else {
        _Dst = (void *)CRYPTO_secure_zalloc((longlong)param_2 << 3,"crypto\\bn\\bn_lib.c",0xde);
      }
      if (_Dst != (void *)0x0) {
        if (0 < (int)param_1[1]) {
          _guard_xfg_dispatch_icall_nop(_Dst,(void *)*param_1,(longlong)(int)param_1[1] << 3);
        }
        if (*param_1 != 0) {
          FUN_14004ff40(*param_1,(longlong)*(int *)((longlong)param_1 + 0xc) << 3);
          if ((*(byte *)((longlong)param_1 + 0x14) & 8) == 0) {
            CRYPTO_free(*param_1,"crypto\\bn\\bn_lib.c",0x96);
          }
          else {
            CRYPTO_secure_free(*param_1,"crypto\\bn\\bn_lib.c",0x94);
          }
        }
        *param_1 = (longlong)_Dst;
        *(int *)((longlong)param_1 + 0xc) = param_2;
        return param_1;
      }
      uVar1 = 0xe2;
      uVar2 = 0x41;
    }
    else {
      uVar1 = 0xda;
      uVar2 = 0x69;
    }
  }
  else {
    uVar1 = 0xd6;
    uVar2 = 0x72;
  }
  ERR_put_error(3,0x78,uVar2,"crypto\\bn\\bn_lib.c",uVar1,uVar3);
  return (longlong *)0x0;
}



// FUNCTION 143d0f910 bn_init body=24 status=ok
// SIG undefined bn_init(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bn_init(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = DAT_146bcb478;
  uVar1 = uRam0000000146bcb470;
  *param_1 = _DAT_146bcb468;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return;
}



// FUNCTION 143d0f930 bn_wexpand body=35 status=ok
// SIG undefined bn_wexpand(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong bn_wexpand(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return param_1;
  }
  lVar1 = bn_expand2();
  return lVar1;
}



// FUNCTION 143d0f960 SRP_Calc_A body=163 status=ok
// SIG undefined SRP_Calc_A(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong SRP_Calc_A(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143d0f97b;
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) && (lVar2 = BN_CTX_new(), lVar2 != 0))
  {
    lVar3 = BN_new();
    if ((lVar3 != 0) && (iVar1 = BN_mod_exp(lVar3,param_3,param_1,param_2,lVar2,uVar4), iVar1 == 0))
    {
      BN_free(lVar3);
      lVar3 = 0;
    }
    BN_CTX_free(lVar2);
    return lVar3;
  }
  return 0;
}



// FUNCTION 143d0fa10 SRP_Calc_B body=332 status=ok
// SIG undefined SRP_Calc_B(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong SRP_Calc_B(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  uVar7 = 0x143d0fa31;
  lVar4 = 0;
  lVar5 = 0;
  lVar6 = 0;
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 != 0 && (lVar2 = BN_CTX_new(), lVar2 != 0)))) {
    lVar3 = BN_new();
    if (((lVar3 != 0) && ((lVar4 = BN_new(), lVar4 != 0 && (lVar5 = BN_new(), lVar5 != 0)))) &&
       ((iVar1 = BN_mod_exp(lVar4,param_3,param_1,param_2,lVar2,uVar7), iVar1 == 0 ||
        (((lVar6 = srp_Calc_xy(param_2,param_3,param_2), lVar6 == 0 ||
          (iVar1 = BN_mod_mul(lVar3,param_4,lVar6,param_2,lVar2), iVar1 == 0)) ||
         (iVar1 = BN_mod_add(lVar5,lVar4,lVar3,param_2,lVar2), iVar1 == 0)))))) {
      BN_free(lVar5);
      lVar5 = 0;
    }
    BN_CTX_free(lVar2);
    BN_clear_free(lVar3);
    BN_clear_free(lVar4);
    BN_free(lVar6);
    return lVar5;
  }
  return 0;
}



// FUNCTION 143d0fb60 SRP_Calc_client_key body=493 status=ok
// SIG undefined SRP_Calc_client_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong SRP_Calc_client_key(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                            longlong param_5,longlong param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_38;
  
  lVar4 = 0;
  lVar5 = 0;
  lVar6 = 0;
  lVar7 = 0;
  local_38 = 0;
  if (((((param_6 != 0) && (param_2 != 0)) && (param_1 != 0)) && ((param_3 != 0 && (param_4 != 0))))
     && ((param_5 != 0 && (lVar2 = BN_CTX_new(), lVar2 != 0)))) {
    lVar3 = BN_new();
    if (((((lVar3 != 0) && (lVar4 = BN_new(), lVar4 != 0)) && (lVar5 = BN_new(), lVar5 != 0)) &&
        (((iVar1 = BN_mod_exp(lVar3,param_3,param_4,param_1,lVar2), lVar6 = lVar7, iVar1 != 0 &&
          (local_38 = srp_Calc_xy(param_1,param_3,param_1), local_38 != 0)) &&
         (iVar1 = BN_mod_mul(lVar4,lVar3,local_38,param_1,lVar2), iVar1 != 0)))) &&
       (((iVar1 = BN_mod_sub(lVar3,param_2,lVar4,param_1,lVar2), iVar1 != 0 &&
         (iVar1 = BN_mul(lVar5,param_6,param_4,lVar2), iVar1 != 0)) &&
        ((iVar1 = BN_add(lVar4,param_5,lVar5), iVar1 != 0 &&
         ((lVar6 = BN_new(), lVar6 != 0 &&
          (iVar1 = BN_mod_exp(lVar6,lVar3,lVar4,param_1,lVar2), iVar1 == 0)))))))) {
      BN_free(lVar6);
      lVar6 = 0;
    }
    BN_CTX_free(lVar2);
    BN_clear_free(lVar3);
    BN_clear_free(lVar4);
    BN_clear_free(lVar5);
    BN_free(local_38);
    return lVar6;
  }
  return 0;
}



// FUNCTION 143d0fd50 SRP_Calc_server_key body=285 status=ok
// SIG undefined SRP_Calc_server_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong SRP_Calc_server_key(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                            longlong param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143d0fd6d;
  lVar3 = 0;
  lVar4 = 0;
  if ((((param_3 == 0) || (param_1 == 0)) || (param_2 == 0)) || ((param_4 == 0 || (param_5 == 0))))
  {
    lVar4 = 0;
  }
  else {
    lVar2 = BN_CTX_new();
    if (lVar2 != 0) {
      lVar3 = BN_new();
      if (lVar3 != 0) {
        iVar1 = BN_mod_exp(lVar3,param_2,param_3,param_5,lVar2,uVar5);
        if (iVar1 != 0) {
          iVar1 = BN_mod_mul(lVar3,param_1,lVar3,param_5,lVar2);
          lVar4 = 0;
          if (iVar1 != 0) {
            lVar4 = BN_new();
            if (lVar4 != 0) {
              iVar1 = BN_mod_exp(lVar4,lVar3,param_4,param_5,lVar2);
              if (iVar1 == 0) {
                BN_free(lVar4);
                lVar4 = 0;
              }
            }
          }
        }
      }
    }
    BN_CTX_free(lVar2);
    BN_clear_free(lVar3);
  }
  return lVar4;
}



// FUNCTION 143d0fe70 SRP_Calc_u body=22 status=ok
// SIG undefined SRP_Calc_u(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SRP_Calc_u(void)

{
  srp_Calc_xy();
  return;
}



// FUNCTION 143d0fe90 SRP_Calc_x body=517 status=ok
// SIG undefined SRP_Calc_x(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 SRP_Calc_x(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  uVar5 = 0;
  uVar8 = 0;
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) ||
     (lVar2 = EVP_MD_CTX_new(), lVar2 == 0)) {
    uVar5 = 0;
  }
  else {
    iVar1 = BN_num_bits(param_1);
    lVar3 = CRYPTO_malloc((longlong)((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3),
                          "crypto\\srp\\srp_lib.c",0x84);
    if (lVar3 != 0) {
      uVar4 = EVP_sha1();
      iVar1 = EVP_DigestInit_ex(lVar2,uVar4,0);
      if (iVar1 != 0) {
        lVar6 = -1;
        lVar7 = -1;
        do {
          lVar7 = lVar7 + 1;
        } while (*(char *)(param_2 + lVar7) != '\0');
        iVar1 = EVP_DigestUpdate(lVar2,param_2);
        if ((iVar1 != 0) && (iVar1 = EVP_DigestUpdate(lVar2,&DAT_145cc3708,1), iVar1 != 0)) {
          do {
            lVar6 = lVar6 + 1;
          } while (*(char *)(lVar6 + param_3) != '\0');
          iVar1 = EVP_DigestUpdate(lVar2,param_3,lVar6);
          if ((iVar1 != 0) &&
             (iVar1 = EVP_DigestFinal_ex(lVar2,local_58,0), uVar5 = uVar8, iVar1 != 0)) {
            uVar8 = EVP_sha1();
            iVar1 = EVP_DigestInit_ex(lVar2,uVar8,0);
            if (iVar1 != 0) {
              BN_bn2bin(param_1,lVar3);
              iVar1 = BN_num_bits(param_1);
              iVar1 = EVP_DigestUpdate(lVar2,lVar3,
                                       (longlong)((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3))
              ;
              if (((iVar1 != 0) && (iVar1 = EVP_DigestUpdate(lVar2,local_58,0x14), iVar1 != 0)) &&
                 (iVar1 = EVP_DigestFinal_ex(lVar2,local_58,0), iVar1 != 0)) {
                uVar5 = BN_bin2bn(local_58,0x14);
              }
            }
          }
        }
      }
    }
    CRYPTO_free(lVar3,"crypto\\srp\\srp_lib.c",0x99);
    EVP_MD_CTX_free(lVar2);
  }
  return uVar5;
}



// FUNCTION 143d100a0 SRP_Verify_A_mod_N body=158 status=ok
// SIG undefined SRP_Verify_A_mod_N(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool SRP_Verify_A_mod_N(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  bVar4 = false;
  if ((param_1 != 0) && (param_2 != 0)) {
    lVar2 = BN_CTX_new();
    if (lVar2 != 0) {
      lVar3 = BN_new();
      if (lVar3 != 0) {
        iVar1 = BN_nnmod(lVar3,param_1,param_2,lVar2);
        if (iVar1 != 0) {
          iVar1 = BN_is_zero(lVar3);
          bVar4 = iVar1 == 0;
        }
      }
      BN_CTX_free(lVar2);
      BN_free(lVar3);
    }
  }
  return bVar4;
}



// FUNCTION 143d10140 SRP_Verify_B_mod_N body=162 status=ok
// SIG undefined SRP_Verify_B_mod_N(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool SRP_Verify_B_mod_N(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  bVar4 = false;
  if (((param_1 != 0) && (param_2 != 0)) && (lVar2 = BN_CTX_new(), lVar2 != 0)) {
    lVar3 = BN_new();
    if ((lVar3 != 0) && (iVar1 = BN_nnmod(lVar3,param_1,param_2,lVar2), iVar1 != 0)) {
      iVar1 = BN_is_zero(lVar3);
      bVar4 = iVar1 == 0;
    }
    BN_CTX_free(lVar2);
    BN_free(lVar3);
    return bVar4;
  }
  return false;
}



// FUNCTION 143d101f0 SRP_check_known_gN_param body=153 status=ok
// SIG undefined SRP_check_known_gN_param(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined * SRP_check_known_gN_param(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar2 = 0;
    uVar3 = uVar2;
    do {
      iVar1 = BN_cmp(*(undefined8 *)((longlong)&PTR_PTR_146836ee8 + uVar2),param_1);
      if ((iVar1 == 0) &&
         (iVar1 = BN_cmp(*(undefined8 *)((longlong)&PTR_PTR_146836ef0 + uVar2),param_2), iVar1 == 0)
         ) {
        return (&PTR_DAT_146836ee0)[uVar3 * 3];
      }
      uVar3 = uVar3 + 1;
      uVar2 = uVar2 + 0x18;
    } while (uVar2 < 0xa8);
  }
  return (undefined *)0x0;
}



// FUNCTION 143d10290 srp_Calc_xy body=310 status=ok
// SIG undefined srp_Calc_xy(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 srp_Calc_xy(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [24];
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  iVar1 = BN_num_bits(param_3);
  uVar4 = 0;
  iVar1 = (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
  if (param_1 == param_3) {
LAB_143d102e9:
    if (param_2 != param_3) {
      iVar2 = BN_ucmp(param_2,param_3);
      if (-1 < iVar2) goto LAB_143d102fd;
    }
    lVar3 = CRYPTO_malloc((longlong)(iVar1 * 2),"crypto\\srp\\srp_lib.c",0x21);
    if (lVar3 != 0) {
      iVar2 = BN_bn2binpad(param_1,lVar3,iVar1);
      if (-1 < iVar2) {
        iVar2 = BN_bn2binpad(param_2,lVar3 + iVar1,iVar1);
        if (-1 < iVar2) {
          local_58 = EVP_sha1();
          local_50 = 0;
          iVar1 = EVP_Digest(lVar3,(longlong)(iVar1 * 2),local_48,0);
          uVar4 = 0;
          if (iVar1 != 0) {
            uVar4 = BN_bin2bn(local_48,0x14);
          }
        }
      }
    }
    CRYPTO_free(lVar3,"crypto\\srp\\srp_lib.c",0x29);
  }
  else {
    iVar2 = BN_ucmp(param_1,param_3);
    if (iVar2 < 0) goto LAB_143d102e9;
LAB_143d102fd:
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 143d103d0 PEM_ASN1_read_bio body=203 status=ok
// SIG undefined PEM_ASN1_read_bio(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong PEM_ASN1_read_bio(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                          undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143d103e0;
  local_20 = 0;
  iVar1 = PEM_bytes_read_bio(&local_20,local_28,0,param_2,param_3,param_5,param_6);
  uVar3 = (undefined4)((ulonglong)param_3 >> 0x20);
  if (iVar1 == 0) {
    return 0;
  }
  local_18 = local_20;
  lVar2 = (*param_1)(param_4,&local_18,local_28[0]);
  if (lVar2 == 0) {
    ERR_put_error(9,0x67,0xd,"crypto\\pem\\pem_oth.c",CONCAT44(uVar3,0x21));
  }
  CRYPTO_free(local_20,"crypto\\pem\\pem_oth.c",0x22);
  return lVar2;
}



// FUNCTION 143d104a0 PEM_ASN1_write_bio body=1329 status=ok
// SIG undefined PEM_ASN1_write_bio(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

ulonglong PEM_ASN1_write_bio(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                            longlong param_5,char *param_6,int param_7,code *param_8,void *param_9)

{
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  char *pcVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  undefined2 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  char *pcVar15;
  ulonglong uVar16;
  undefined1 auStack_538 [32];
  undefined1 *local_518;
  undefined4 local_510;
  undefined1 *local_508;
  undefined8 local_500;
  int local_4f8;
  int local_4f4;
  int local_4f0;
  longlong local_4e8;
  longlong local_4e0;
  longlong local_4d8;
  longlong local_4d0;
  longlong local_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined1 local_4b0 [24];
  undefined1 local_498 [64];
  char local_458;
  undefined2 auStack_457 [511];
  ulonglong local_58 [2];
  undefined8 uStack_48;
  
  uStack_48 = 0x143d104bf;
  local_58[0] = DAT_1468387a8 ^ (ulonglong)auStack_538;
  uVar13 = 0;
  uVar16 = 0;
  uVar1 = 0xffffffffffffffff;
  local_4e8 = param_5;
  local_4d0 = 0;
  local_4f0 = 0;
  local_4f8 = 0;
  local_4f4 = 0;
  local_4e0 = 0;
  local_4d8 = 0;
  local_4c0 = param_2;
  local_4b8 = param_3;
  if (param_5 != 0) {
    uVar2 = FRollingHash::GetWindowSize(param_5);
    local_4d8 = OBJ_nid2sn(uVar2);
    if (((local_4d8 != 0) &&
        (iVar3 = IStreamingManager::GetNumWantingResourcesID(local_4e8), iVar3 != 0)) &&
       (iVar3 = IStreamingManager::GetNumWantingResourcesID(local_4e8), iVar3 < 0x11)) {
      iVar3 = IStreamingManager::GetNumWantingResourcesID(local_4e8);
      uVar6 = uVar1;
      do {
        uVar11 = uVar6;
        uVar6 = uVar11 + 1;
      } while (*(char *)(local_4d8 + uVar6) != '\0');
      if (uVar11 + 0x25 + (longlong)(iVar3 * 2) < 0x401) goto LAB_143d105bd;
    }
    local_518 = (undefined1 *)CONCAT44(local_518._4_4_,0x14a);
    ERR_put_error(9,0x69,0x71,"crypto\\pem\\pem_lib.c");
    uVar16 = uVar13;
    goto LAB_143d1095c;
  }
LAB_143d105bd:
  local_4f0 = (*param_1)(param_4,0);
  if (local_4f0 < 0) {
    local_518 = (undefined1 *)CONCAT44(local_518._4_4_,0x150);
    ERR_put_error(9,0x69,0xd,"crypto\\pem\\pem_lib.c");
    local_4f0 = 0;
    uVar16 = uVar13;
    goto LAB_143d1095c;
  }
  local_4e0 = CRYPTO_malloc(local_4f0 + 0x14,"crypto\\pem\\pem_lib.c",0x156);
  if (local_4e0 == 0) {
    local_518 = (undefined1 *)CONCAT44(local_518._4_4_,0x158);
    ERR_put_error(9,0x69,0x41,"crypto\\pem\\pem_lib.c");
    uVar16 = uVar13;
    goto LAB_143d1095c;
  }
  local_4c8 = local_4e0;
  local_4f8 = (*param_1)(param_4,&local_4c8);
  lVar14 = local_4e8;
  if (local_4e8 == 0) {
    local_458 = '\0';
    lVar14 = local_4e0;
  }
  else {
    if (param_6 == (char *)0x0) {
      if (param_8 == (code *)0x0) {
        uVar11 = uVar1;
        if (param_9 != (void *)0x0) {
          do {
            uVar11 = uVar11 + 1;
          } while (*(char *)((longlong)param_9 + uVar11) != '\0');
          uVar6 = uVar11 & 0xffffffff;
          if (0x400 < (int)uVar11) {
            uVar6 = 0x400;
          }
          _guard_xfg_dispatch_icall_nop(&local_458,param_9,(longlong)(int)uVar6);
          goto LAB_143d10732;
        }
        pcVar7 = (char *)EVP_get_pw_prompt();
        local_518 = (undefined1 *)CONCAT44(local_518._4_4_,1);
        pcVar15 = "Enter PEM pass phrase:";
        if (pcVar7 != (char *)0x0) {
          pcVar15 = pcVar7;
        }
        iVar3 = EVP_read_pw_string_min(&local_458,4,0x400,pcVar15);
        if (iVar3 == 0) {
          do {
            uVar6 = uVar11 + 1;
            pcVar15 = (char *)((longlong)auStack_457 + uVar11);
            uVar11 = uVar6;
          } while (*pcVar15 != '\0');
          goto LAB_143d10732;
        }
        local_518 = (undefined1 *)CONCAT44(local_518._4_4_,0x3b);
        ERR_put_error(9,100,0x6d,"crypto\\pem\\pem_lib.c");
        _guard_xfg_dispatch_icall_nop(&local_458,0,0x400);
      }
      else {
        uVar4 = (*param_8)(&local_458,0x400,1,param_9);
        uVar6 = (ulonglong)uVar4;
LAB_143d10732:
        param_7 = (int)uVar6;
        if (0 < param_7) {
          param_6 = &local_458;
          goto LAB_143d10767;
        }
      }
      local_518 = (undefined1 *)CONCAT44(local_518._4_4_,0x165);
      ERR_put_error(9,0x69,0x6f,"crypto\\pem\\pem_lib.c");
      goto LAB_143d1095c;
    }
LAB_143d10767:
    uVar2 = IStreamingManager::GetNumWantingResourcesID(lVar14);
    iVar3 = RAND_bytes(local_4b0,uVar2);
    if (iVar3 < 1) goto LAB_143d1095c;
    uVar8 = EVP_md5();
    local_500 = 0;
    local_508 = local_498;
    local_510 = 1;
    local_518 = (undefined1 *)CONCAT44(local_518._4_4_,param_7);
    iVar3 = EVP_BytesToKey(lVar14,uVar8,local_4b0,param_6);
    if (iVar3 == 0) goto LAB_143d1095c;
    if (param_6 == &local_458) {
      FUN_14004ff40(&local_458,0x400);
    }
    local_458 = '\0';
    uVar6 = uVar1;
    do {
      uVar11 = uVar6;
      uVar6 = uVar11 + 1;
    } while (*(char *)((longlong)auStack_457 + uVar11) != '\0');
    BIO_snprintf((longlong)auStack_457 + uVar11,
                 (longlong)local_58 - ((longlong)auStack_457 + uVar11),"Proc-Type: 4,%s\n",
                 "ENCRYPTED");
    iVar3 = IStreamingManager::GetNumWantingResourcesID(lVar14);
    do {
      uVar6 = uVar1;
      uVar1 = uVar6 + 1;
    } while (*(char *)((longlong)auStack_457 + uVar6) != '\0');
    lVar9 = (longlong)auStack_457 + uVar6;
    iVar10 = (int)local_58 - (int)lVar9;
    iVar5 = BIO_snprintf(lVar9,(longlong)iVar10,"DEK-Info: %s,",local_4d8);
    if (0 < iVar5) {
      iVar10 = iVar10 - iVar5;
      puVar12 = (undefined2 *)(lVar9 + iVar5);
      if (0 < (longlong)iVar3) {
        do {
          iVar5 = BIO_snprintf(puVar12,(longlong)iVar10,&DAT_145d77a28,local_4b0[uVar13]);
          if (iVar5 < 1) goto LAB_143d108a8;
          iVar10 = iVar10 - iVar5;
          uVar13 = uVar13 + 1;
          puVar12 = (undefined2 *)((longlong)puVar12 + (longlong)iVar5);
        } while ((longlong)uVar13 < (longlong)iVar3);
      }
      if (1 < iVar10) {
        *puVar12 = 10;
      }
    }
LAB_143d108a8:
    lVar9 = EVP_CIPHER_CTX_new();
    local_4d0 = lVar9;
    if (lVar9 == 0) goto LAB_143d1095c;
    local_518 = local_4b0;
    iVar3 = EVP_EncryptInit_ex(lVar9,lVar14,0,local_498);
    lVar14 = local_4e0;
    if (iVar3 == 0) goto LAB_143d1095c;
    local_518 = (undefined1 *)CONCAT44(local_518._4_4_,local_4f8);
    iVar3 = EVP_EncryptUpdate(lVar9,local_4e0,&local_4f4,local_4e0);
    if ((iVar3 == 0) ||
       (iVar3 = EVP_EncryptFinal_ex(lVar9,local_4f4 + lVar14,&local_4f8), iVar3 == 0))
    goto LAB_143d1095c;
    local_4f8 = local_4f8 + local_4f4;
  }
  local_518 = (undefined1 *)CONCAT44(local_518._4_4_,local_4f8);
  local_4f8 = PEM_write_bio(local_4b8,local_4c0,&local_458,lVar14);
  uVar16 = (ulonglong)(0 < local_4f8);
LAB_143d1095c:
  FUN_14004ff40(local_498,0x40);
  FUN_14004ff40(local_4b0,0x10);
  EVP_CIPHER_CTX_free(local_4d0);
  FUN_14004ff40(&local_458,0x400);
  CRYPTO_clear_free(local_4e0,local_4f0,"crypto\\pem\\pem_lib.c",0x194);
  return uVar16;
}



// FUNCTION 143d109e0 PEM_bytes_read_bio body=64 status=ok
// SIG undefined PEM_bytes_read_bio(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_bytes_read_bio(void)

{
  pem_bytes_read_bio_flags();
  return;
}



// FUNCTION 143d10a20 PEM_bytes_read_bio_secmem body=64 status=ok
// SIG undefined PEM_bytes_read_bio_secmem(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_bytes_read_bio_secmem(void)

{
  pem_bytes_read_bio_flags();
  return;
}



// FUNCTION 143d10a60 PEM_def_callback body=241 status=ok
// SIG undefined PEM_def_callback(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong PEM_def_callback(void *param_1,uint param_2,int param_3,void *param_4)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  uVar7 = 0x143d10a75;
  if (param_4 != (void *)0x0) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (*(char *)((longlong)param_4 + lVar4) != '\0');
    uVar3 = (uint)lVar4;
    if ((int)param_2 < (int)(uint)lVar4) {
      uVar3 = param_2;
    }
    _guard_xfg_dispatch_icall_nop(param_1,param_4,(longlong)(int)uVar3);
    return (ulonglong)uVar3;
  }
  pcVar2 = (char *)EVP_get_pw_prompt();
  pcVar6 = "Enter PEM pass phrase:";
  if (pcVar2 != (char *)0x0) {
    pcVar6 = pcVar2;
  }
  iVar1 = EVP_read_pw_string_min
                    (param_1,-(param_3 != 0) & 4,(ulonglong)param_2,pcVar6,param_3,uVar7);
  if (iVar1 != 0) {
    ERR_put_error(9,100,0x6d,"crypto\\pem\\pem_lib.c",0x3b);
    _guard_xfg_dispatch_icall_nop(param_1,0,(ulonglong)param_2);
    return 0xffffffffffffffff;
  }
  uVar5 = 0xffffffffffffffff;
  do {
    uVar5 = uVar5 + 1;
  } while (*(char *)((longlong)param_1 + uVar5) != '\0');
  return uVar5 & 0xffffffff;
}



// FUNCTION 143d10b60 PEM_do_header body=698 status=ok
// SIG undefined PEM_do_header(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int PEM_do_header(longlong *param_1,longlong param_2,int *param_3,code *param_4,void *param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  char *pcVar9;
  undefined1 auStack_4d8 [32];
  longlong *local_4b8;
  undefined4 local_4b0;
  undefined1 *local_4a8;
  undefined8 local_4a0;
  int local_498 [4];
  undefined1 local_488 [64];
  char local_448 [1024];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_4d8;
  local_498[0] = *param_3;
  if (*param_1 == 0) {
    return 1;
  }
  if (param_4 == (code *)0x0) {
    if (param_5 == (void *)0x0) {
      pcVar4 = (char *)EVP_get_pw_prompt();
      local_4b8 = (longlong *)((ulonglong)local_4b8 & 0xffffffff00000000);
      pcVar9 = "Enter PEM pass phrase:";
      if (pcVar4 != (char *)0x0) {
        pcVar9 = pcVar4;
      }
      iVar2 = EVP_read_pw_string_min(local_448,0,0x400,pcVar9);
      if (iVar2 != 0) {
        local_4b8 = (longlong *)CONCAT44(local_4b8._4_4_,0x3b);
        ERR_put_error(9,100,0x6d,"crypto\\pem\\pem_lib.c");
        _guard_xfg_dispatch_icall_nop(local_448,0,0x400);
        goto LAB_143d10ca6;
      }
      uVar7 = 0xffffffffffffffff;
      do {
        uVar8 = uVar7 + 1;
        lVar6 = uVar7 + 1;
        uVar7 = uVar8;
      } while (local_448[lVar6] != '\0');
    }
    else {
      uVar7 = 0xffffffffffffffff;
      do {
        uVar7 = uVar7 + 1;
      } while (*(char *)((longlong)param_5 + uVar7) != '\0');
      uVar8 = uVar7 & 0xffffffff;
      if (0x400 < (int)uVar7) {
        uVar8 = 0x400;
      }
      _guard_xfg_dispatch_icall_nop(local_448,param_5,(longlong)(int)uVar8);
    }
  }
  else {
    uVar1 = (*param_4)(local_448,0x400,0);
    uVar8 = (ulonglong)uVar1;
  }
  if ((int)uVar8 < 0) {
LAB_143d10ca6:
    local_4b8 = (longlong *)CONCAT44(local_4b8._4_4_,0x1b2);
    ERR_put_error(9,0x6a,0x68,"crypto\\pem\\pem_lib.c");
    return 0;
  }
  uVar5 = EVP_md5();
  local_4a0 = 0;
  local_4a8 = local_488;
  local_4b0 = 1;
  local_4b8 = (longlong *)CONCAT44(local_4b8._4_4_,(int)uVar8);
  iVar2 = EVP_BytesToKey(*param_1,uVar5,param_1 + 1,local_448);
  if ((iVar2 == 0) || (lVar6 = EVP_CIPHER_CTX_new(), lVar6 == 0)) {
    return 0;
  }
  local_4b8 = param_1 + 1;
  iVar3 = EVP_DecryptInit_ex(lVar6,*param_1,0,local_488);
  iVar2 = 0;
  if (iVar3 != 0) {
    local_4b8 = (longlong *)CONCAT44(local_4b8._4_4_,local_498[0]);
    iVar3 = EVP_DecryptUpdate(lVar6,param_2,local_498,param_2);
    iVar2 = 0;
    if (iVar3 != 0) {
      *param_3 = local_498[0];
      iVar2 = EVP_DecryptFinal_ex(lVar6,param_2 + local_498[0],local_498);
      if (iVar2 != 0) {
        *param_3 = *param_3 + local_498[0];
        goto LAB_143d10daf;
      }
    }
  }
  local_4b8 = (longlong *)CONCAT44(local_4b8._4_4_,0x1cd);
  ERR_put_error(9,0x6a,0x65,"crypto\\pem\\pem_lib.c");
LAB_143d10daf:
  EVP_CIPHER_CTX_free(lVar6);
  FUN_14004ff40(local_448,0x400);
  FUN_14004ff40(local_488,0x40);
  return iVar2;
}



// FUNCTION 143d10e20 PEM_get_EVP_CIPHER_INFO body=801 status=ok
// SIG undefined PEM_get_EVP_CIPHER_INFO(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PEM_get_EVP_CIPHER_INFO(char *param_1,longlong *param_2)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  longlong *plVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  
  uVar16 = 0x143d10e3e;
  uVar10 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (((param_1 == (char *)0x0) || (*param_1 == '\0')) || (*param_1 == '\n')) {
LAB_143d110e9:
    uVar16 = 1;
  }
  else {
    iVar3 = strncmp(param_1,"Proc-Type:",10);
    if (iVar3 == 0) {
      sVar5 = strspn(param_1 + 10," \t");
      pcVar11 = param_1 + 10 + sVar5;
      if ((*pcVar11 == '4') && (pcVar12 = pcVar11 + 2, pcVar11[1] == ',')) {
        sVar5 = strspn(pcVar12," \t");
        iVar3 = strncmp(pcVar12 + sVar5,"ENCRYPTED",9);
        if (iVar3 != 0) {
LAB_143d1111d:
          ERR_put_error(9,0x6b,0x6a,"crypto\\pem\\pem_lib.c",0x1fd);
          return 0;
        }
        pcVar11 = pcVar12 + sVar5 + 9;
        sVar5 = strspn(pcVar11," \t\r\n");
        if (sVar5 == 0) goto LAB_143d1111d;
        sVar5 = strspn(pcVar11," \t\r");
        pcVar11 = pcVar11 + sVar5;
        if (*pcVar11 != '\n') {
          ERR_put_error(9,0x6b,0x70,"crypto\\pem\\pem_lib.c",0x203);
          return 0;
        }
        iVar3 = strncmp(pcVar11 + 1,"DEK-Info:",9);
        if (iVar3 != 0) {
          ERR_put_error(9,0x6b,0x69,"crypto\\pem\\pem_lib.c",0x20c);
          return 0;
        }
        sVar5 = strspn(pcVar11 + 10," \t");
        pcVar11 = pcVar11 + 10 + sVar5;
        sVar5 = strcspn(pcVar11," \t,");
        pcVar12 = pcVar11 + sVar5;
        cVar2 = *pcVar12;
        *pcVar12 = '\0';
        lVar6 = EVP_get_cipherbyname(pcVar11);
        *param_2 = lVar6;
        *pcVar12 = cVar2;
        sVar5 = strspn(pcVar12," \t");
        pcVar12 = pcVar12 + sVar5;
        if (lVar6 == 0) {
          ERR_put_error(9,0x6b,0x72,"crypto\\pem\\pem_lib.c",0x21f);
          return 0;
        }
        iVar3 = IStreamingManager::GetNumWantingResourcesID(lVar6);
        if ((0 < iVar3) && (cVar2 = *pcVar12, pcVar12 = pcVar12 + 1, cVar2 != ',')) {
          ERR_put_error(9,0x6b,0x81,"crypto\\pem\\pem_lib.c",0x224);
          return 0;
        }
        if ((iVar3 == 0) && (*pcVar12 == ',')) {
          ERR_put_error(9,0x6b,0x82,"crypto\\pem\\pem_lib.c",0x227);
          return 0;
        }
        iVar3 = IStreamingManager::GetNumWantingResourcesID(lVar6);
        lVar6 = (longlong)iVar3;
        if (0 < iVar3) {
          plVar13 = param_2 + 1;
          for (; lVar6 != 0; lVar6 = lVar6 + -1) {
            *(undefined1 *)plVar13 = 0;
            plVar13 = (longlong *)((longlong)plVar13 + 1);
          }
        }
        if (0 < iVar3 * 2) {
          do {
            iVar4 = FUN_143cf2b10(*pcVar12);
            if (iVar4 < 0) {
              uVar9 = 0x65;
              uVar15 = 0x23d;
              uVar14 = 0x67;
              goto LAB_143d10e97;
            }
            pcVar12 = pcVar12 + 1;
            uVar7 = uVar10;
            if ((int)uVar10 < 0) {
              uVar7 = uVar10 + 1;
            }
            uVar8 = ~uVar10;
            uVar10 = uVar10 + 1;
            pbVar1 = (byte *)((longlong)((int)uVar7 >> 1) + 8 + (longlong)param_2);
            *pbVar1 = *pbVar1 | (char)iVar4 << (sbyte)((uVar8 & 1) << 2);
          } while ((int)uVar10 < iVar3 * 2);
        }
        goto LAB_143d110e9;
      }
    }
    else {
      uVar9 = 0x6b;
      uVar15 = 0x1f0;
      uVar14 = 0x6b;
LAB_143d10e97:
      ERR_put_error(9,uVar9,uVar14,"crypto\\pem\\pem_lib.c",uVar15,uVar16);
    }
    uVar16 = 0;
  }
  return uVar16;
}



// FUNCTION 143d11150 PEM_read_bio body=41 status=ok
// SIG undefined PEM_read_bio(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_read_bio(void)

{
  PEM_read_bio_ex();
  return;
}



// FUNCTION 143d11180 PEM_read_bio_ex body=789 status=ok
// SIG undefined PEM_read_bio_ex(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong PEM_read_bio_ex(undefined8 param_1,ulonglong *param_2,longlong *param_3,longlong *param_4,
                         int *param_5,uint param_6)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  int local_68 [2];
  ulonglong local_60;
  int local_58 [2];
  longlong *local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong uVar8;
  
  local_40 = 0x143d111ac;
  lVar2 = EVP_ENCODE_CTX_new();
  uVar8 = 0;
  uVar7 = 0;
  local_40 = 0;
  if (lVar2 == 0) {
    ERR_put_error(9,0x91,0x41,"crypto\\pem\\pem_lib.c",0x380);
    return 0;
  }
  *param_5 = 0;
  *param_3 = 0;
  *param_2 = 0;
  *param_4 = 0;
  uVar9 = uVar8;
  if (((byte)param_6 & 6) == 6) {
    uVar12 = 0x389;
    uVar10 = 7;
    uVar3 = uVar8;
    uVar4 = uVar8;
  }
  else {
    if ((param_6 & 1) == 0) {
      uVar10 = BIO_s_mem();
    }
    else {
      uVar10 = BIO_s_mem();
    }
    uVar3 = BIO_new(uVar10);
    local_60 = uVar3;
    uVar4 = BIO_new(uVar10);
    local_48 = uVar4;
    if ((uVar3 != 0) && (uVar4 != 0)) {
      iVar1 = get_name(param_1,&local_40,param_6);
      uVar11 = local_40;
      if ((iVar1 != 0) &&
         (iVar1 = get_header_and_data(param_1,&local_60,&local_48,local_40,param_6),
         uVar3 = local_60, uVar9 = uVar7, uVar4 = local_48, iVar1 != 0)) {
        EVP_DecodeInit(lVar2);
        uVar4 = local_48;
        BIO_ctrl(local_48,0x73,0,&local_50);
        local_68[0] = (int)*local_50;
        iVar1 = EVP_DecodeUpdate(lVar2,local_50[1],local_68,local_50[1],local_68[0]);
        if ((iVar1 < 0) ||
           (iVar1 = EVP_DecodeFinal(lVar2,(longlong)local_68[0] + local_50[1],local_58),
           uVar3 = local_60, iVar1 < 0)) {
          ERR_put_error(9,0x91,100,"crypto\\pem\\pem_lib.c",0x3a1);
          uVar3 = local_60;
        }
        else {
          local_68[0] = local_68[0] + local_58[0];
          *local_50 = (longlong)local_68[0];
          uVar9 = uVar8;
          if (local_68[0] != 0) {
            iVar1 = BIO_ctrl(local_60,3,0);
            local_60 = CONCAT44(local_60._4_4_,iVar1);
            lVar5 = pem_malloc(iVar1 + 1,param_6);
            *param_3 = lVar5;
            lVar6 = pem_malloc(local_68[0],param_6);
            *param_4 = lVar6;
            lVar5 = *param_3;
            if ((lVar5 == 0) || (lVar6 == 0)) {
              pem_free(lVar5,param_6,0);
              pem_free(*param_4,param_6,0);
              uVar9 = uVar7;
            }
            else {
              BIO_read(uVar3,lVar5,local_60 & 0xffffffff);
              *(undefined1 *)((longlong)(int)local_60 + *param_3) = 0;
              BIO_read(uVar4,*param_4,local_68[0]);
              *param_5 = local_68[0];
              *param_2 = uVar11;
              uVar11 = 0;
              uVar9 = 1;
            }
          }
        }
      }
      goto LAB_143d11432;
    }
    uVar12 = 0x391;
    uVar10 = 0x41;
  }
  ERR_put_error(9,0x91,uVar10,"crypto\\pem\\pem_lib.c",uVar12);
  uVar11 = uVar8;
LAB_143d11432:
  EVP_ENCODE_CTX_free(lVar2);
  if ((param_6 & 1) == 0) {
    CRYPTO_free(uVar11,"crypto\\pem\\pem_lib.c",0xdf);
  }
  else {
    CRYPTO_secure_clear_free(uVar11,0,"crypto\\pem\\pem_lib.c",0xdd);
  }
  BIO_free(uVar3);
  BIO_free(uVar4);
  return uVar9;
}



// FUNCTION 143d114a0 PEM_write_bio body=655 status=ok
// SIG undefined PEM_write_bio(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong PEM_write_bio(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,
                       int param_5)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  int local_48 [2];
  longlong local_40;
  
  local_40 = 0x143d114c4;
  uVar6 = 0;
  uVar11 = 0;
  uVar8 = 0;
  local_40 = EVP_ENCODE_CTX_new();
  uVar9 = 7;
  uVar3 = uVar6;
  if (local_40 == 0) {
    lVar5 = local_40;
    uVar9 = 0x41;
  }
  else {
    EVP_EncodeInit(local_40);
    uVar4 = 0xffffffffffffffff;
    uVar7 = 0xffffffffffffffff;
    do {
      uVar7 = uVar7 + 1;
    } while (*(char *)(uVar7 + param_2) != '\0');
    iVar1 = BIO_write(param_1,"-----BEGIN ",0xb);
    uVar10 = uVar9;
    if (iVar1 == 0xb) {
      iVar1 = BIO_write(param_1,param_2,uVar7 & 0xffffffff);
      uVar3 = uVar8;
      if ((iVar1 == (int)uVar7) && (iVar1 = BIO_write(param_1,"-----\n",6), iVar1 == 6)) {
        do {
          uVar4 = uVar4 + 1;
        } while (*(char *)(param_3 + uVar4) != '\0');
        if (((int)uVar4 < 1) ||
           ((iVar1 = BIO_write(param_1,param_3,uVar4 & 0xffffffff), iVar1 == (int)uVar4 &&
            (iVar1 = BIO_write(param_1,&DAT_143fc48d8,1), iVar1 == 1)))) {
          uVar3 = CRYPTO_malloc(0x2000,"crypto\\pem\\pem_lib.c",0x276);
          uVar8 = uVar6;
          lVar5 = local_40;
          if (uVar3 != 0) {
            for (; local_40 = lVar5, 0 < param_5; param_5 = param_5 - iVar1) {
              iVar1 = param_5;
              if (0x1400 < param_5) {
                iVar1 = 0x1400;
              }
              iVar2 = EVP_EncodeUpdate(lVar5,uVar3,local_48,(int)uVar6 + param_4,iVar1);
              uVar10 = 7;
              if ((iVar2 == 0) ||
                 ((local_48[0] != 0 &&
                  (iVar2 = BIO_write(param_1,uVar3,local_48[0]), iVar2 != local_48[0]))))
              goto LAB_143d116ce;
              uVar11 = (int)uVar8 + local_48[0];
              uVar6 = (ulonglong)(uint)((int)uVar6 + iVar1);
              uVar8 = (ulonglong)uVar11;
              lVar5 = local_40;
            }
            EVP_EncodeFinal(lVar5,uVar3,local_48);
            if ((((local_48[0] < 1) || (iVar1 = BIO_write(param_1,uVar3), iVar1 == local_48[0])) &&
                (iVar1 = BIO_write(param_1,"-----END ",9), iVar1 == 9)) &&
               ((iVar1 = BIO_write(param_1,param_2,uVar7 & 0xffffffff), iVar1 == (int)uVar7 &&
                (iVar1 = BIO_write(param_1,"-----\n",6), iVar1 == 6)))) {
              uVar6 = (ulonglong)(uVar11 + local_48[0]);
              if (uVar11 + local_48[0] != 0) goto LAB_143d116f2;
            }
            else {
              uVar6 = 0;
            }
            goto LAB_143d116d3;
          }
          uVar10 = 0x41;
        }
      }
    }
LAB_143d116ce:
    uVar6 = 0;
    lVar5 = local_40;
    uVar9 = uVar10;
  }
LAB_143d116d3:
  ERR_put_error(9,0x72,uVar9,"crypto\\pem\\pem_lib.c",0x292);
LAB_143d116f2:
  EVP_ENCODE_CTX_free(lVar5);
  CRYPTO_clear_free(uVar3,0x2000,"crypto\\pem\\pem_lib.c",0x294);
  return uVar6;
}



// FUNCTION 143d11730 check_pem body=866 status=ok
// SIG undefined check_pem(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool check_pem(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 local_res18;
  
  pcVar5 = param_1;
  do {
    cVar1 = *pcVar5;
    cVar2 = pcVar5[(longlong)param_2 - (longlong)param_1];
    if (cVar1 != cVar2) break;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  if (cVar1 != cVar2) {
    iVar3 = _guard_xfg_dispatch_icall_nop(param_2,"ANY PRIVATE KEY");
    if (iVar3 == 0) {
      iVar3 = _guard_xfg_dispatch_icall_nop(param_1,"ENCRYPTED PRIVATE KEY");
      if ((iVar3 != 0) && (iVar3 = _guard_xfg_dispatch_icall_nop(param_1,"PRIVATE KEY"), iVar3 != 0)
         ) {
        lVar6 = -1;
        do {
          lVar6 = lVar6 + 1;
        } while (param_1[lVar6] != '\0');
        iVar3 = (int)lVar6;
        if (iVar3 < 0xd) {
          return false;
        }
        iVar4 = _guard_xfg_dispatch_icall_nop(param_1 + (longlong)iVar3 + -0xb,"PRIVATE KEY");
        if (iVar4 != 0) {
          return false;
        }
        if (param_1[(longlong)iVar3 + -0xc] != ' ') {
          return false;
        }
        iVar3 = (int)(param_1 + (longlong)iVar3 + -0xc) - (int)param_1;
        if (iVar3 < 1) {
          return false;
        }
        lVar6 = EVP_PKEY_asn1_find_str(0,param_1,iVar3);
        if (lVar6 == 0) {
          return false;
        }
        if (*(longlong *)(lVar6 + 0xb8) == 0) {
          return false;
        }
      }
    }
    else {
      iVar3 = _guard_xfg_dispatch_icall_nop(param_2,"PARAMETERS");
      if (iVar3 == 0) {
        lVar6 = -1;
        do {
          lVar6 = lVar6 + 1;
        } while (param_1[lVar6] != '\0');
        iVar3 = (int)lVar6;
        if ((((0xb < iVar3) &&
             (iVar4 = _guard_xfg_dispatch_icall_nop(param_1 + (longlong)iVar3 + -10,"PARAMETERS"),
             iVar4 == 0)) && (param_1[(longlong)iVar3 + -0xb] == ' ')) &&
           ((iVar3 = (int)(param_1 + (longlong)iVar3 + -0xb) - (int)param_1, 0 < iVar3 &&
            (lVar6 = EVP_PKEY_asn1_find_str(&local_res18,param_1,iVar3), lVar6 != 0)))) {
          lVar6 = *(longlong *)(lVar6 + 0x70);
          ENGINE_finish(local_res18);
          return lVar6 != 0;
        }
        return false;
      }
      iVar3 = _guard_xfg_dispatch_icall_nop(param_1,"X9.42 DH PARAMETERS");
      if ((((((iVar3 != 0) ||
             (iVar3 = _guard_xfg_dispatch_icall_nop(param_2,"DH PARAMETERS"), iVar3 != 0)) &&
            ((iVar3 = _guard_xfg_dispatch_icall_nop(param_1,"X509 CERTIFICATE"), iVar3 != 0 ||
             (iVar3 = _guard_xfg_dispatch_icall_nop(param_2,"CERTIFICATE"), iVar3 != 0)))) &&
           ((iVar3 = _guard_xfg_dispatch_icall_nop(param_1,"NEW CERTIFICATE REQUEST"), iVar3 != 0 ||
            (iVar3 = _guard_xfg_dispatch_icall_nop(param_2,"CERTIFICATE REQUEST"), iVar3 != 0)))) &&
          ((iVar3 = _guard_xfg_dispatch_icall_nop(param_1,"CERTIFICATE"), iVar3 != 0 ||
           (iVar3 = _guard_xfg_dispatch_icall_nop(param_2,"TRUSTED CERTIFICATE"), iVar3 != 0)))) &&
         ((iVar3 = _guard_xfg_dispatch_icall_nop(param_1,"X509 CERTIFICATE"), iVar3 != 0 ||
          (iVar3 = _guard_xfg_dispatch_icall_nop(param_2,"TRUSTED CERTIFICATE"), iVar3 != 0)))) {
        iVar3 = _guard_xfg_dispatch_icall_nop(param_1,"CERTIFICATE");
        lVar9 = 0;
        lVar6 = lVar9;
        if (iVar3 == 0) {
          do {
            lVar7 = lVar6 + 1;
            if (param_2[lVar6] != (&DAT_145d77afc)[lVar6]) goto LAB_143d119e8;
            lVar6 = lVar7;
          } while (lVar7 != 6);
        }
        else {
LAB_143d119e8:
          iVar3 = _guard_xfg_dispatch_icall_nop(param_1,"PKCS #7 SIGNED DATA");
          lVar6 = lVar9;
          if (iVar3 == 0) {
            do {
              lVar7 = lVar6 + 1;
              if (param_2[lVar6] != (&DAT_145d77afc)[lVar6]) goto LAB_143d11a18;
              lVar6 = lVar7;
            } while (lVar7 != 6);
          }
          else {
LAB_143d11a18:
            iVar3 = _guard_xfg_dispatch_icall_nop(param_1,"CERTIFICATE");
            lVar6 = lVar9;
            lVar7 = lVar9;
            if (iVar3 == 0) {
              do {
                lVar8 = lVar7 + 1;
                if (param_2[lVar7] != (&DAT_145d77b1c)[lVar7]) goto LAB_143d11a60;
                lVar7 = lVar8;
              } while (lVar8 != 4);
            }
            else {
LAB_143d11a60:
              do {
                lVar7 = lVar6 + 1;
                if (param_1[lVar6] != (&DAT_145d77afc)[lVar6]) {
                  return false;
                }
                lVar6 = lVar7;
              } while (lVar7 != 6);
              do {
                lVar6 = lVar9 + 1;
                if (param_2[lVar9] != (&DAT_145d77b1c)[lVar9]) {
                  return false;
                }
                lVar9 = lVar6;
              } while (lVar6 != 4);
            }
          }
        }
      }
    }
  }
  return true;
}



// FUNCTION 143d11aa0 get_header_and_data body=677 status=ok
// SIG undefined get_header_and_data(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
get_header_and_data(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,char *param_4,
                   uint param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char *_Str1;
  void *pvVar4;
  size_t _MaxCount;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  
  uVar8 = 0;
  uVar7 = *param_2;
  bVar1 = false;
  iVar5 = 0;
  if ((param_5 & 1) == 0) {
    _Str1 = (char *)CRYPTO_malloc(0x100,"crypto\\pem\\pem_lib.c",0xe5);
  }
  else {
    _Str1 = (char *)CRYPTO_secure_malloc(0x100,"crypto\\pem\\pem_lib.c",0xe4);
  }
  if (_Str1 == (char *)0x0) {
    ERR_put_error(9,0x8f,0x41,"crypto\\pem\\pem_lib.c",0x324);
    uVar8 = 0;
  }
  else {
    iVar2 = BIO_gets(param_1,_Str1,0xff);
    while (0 < iVar2) {
      if ((iVar5 == 0) &&
         (pvVar4 = _guard_xfg_dispatch_icall_nop(_Str1,0x3a,(longlong)iVar2), pvVar4 != (void *)0x0)
         ) {
        iVar5 = 1;
      }
      iVar3 = strncmp(_Str1,"-----END ",9);
      if ((iVar3 == 0) || (uVar6 = 0xffffffff, iVar5 == 1)) {
        uVar6 = 0xfffffffb;
      }
      iVar2 = sanitize_line(_Str1,iVar2,uVar6 & param_5);
      if (*_Str1 == '\n') {
        if (iVar5 != 2) {
          uVar7 = *param_3;
          iVar5 = 2;
          goto LAB_143d11c13;
        }
        uVar8 = 0x33c;
        uVar7 = 0x66;
        goto LAB_143d11c41;
      }
      iVar3 = strncmp(_Str1,"-----END ",9);
      if (iVar3 == 0) {
        _MaxCount = 0xffffffffffffffff;
        do {
          _MaxCount = _MaxCount + 1;
        } while (param_4[_MaxCount] != '\0');
        iVar2 = strncmp(_Str1 + 9,param_4,_MaxCount);
        if ((iVar2 != 0) || (iVar2 = strncmp(_Str1 + 9 + _MaxCount,"-----\n",6), iVar2 != 0)) {
          uVar8 = 0x34a;
          uVar7 = 0x66;
          goto LAB_143d11c41;
        }
        if (iVar5 == 0) {
          *param_2 = *param_3;
          *param_3 = uVar7;
        }
        uVar8 = 1;
        goto LAB_143d11c57;
      }
      if (bVar1) {
        uVar8 = 0x354;
        uVar7 = 0x66;
        goto LAB_143d11c41;
      }
      iVar3 = BIO_puts(uVar7,_Str1);
      if (iVar3 < 0) goto LAB_143d11c57;
      if (iVar5 == 2) {
        if (iVar2 < 0x42) {
          if (iVar2 < 0x41) {
            bVar1 = true;
          }
          goto LAB_143d11c13;
        }
        goto LAB_143d11c57;
      }
LAB_143d11c13:
      iVar2 = BIO_gets(param_1,_Str1,0xff);
    }
    uVar8 = 0x32c;
    uVar7 = 0x70;
LAB_143d11c41:
    ERR_put_error(9,0x8f,uVar7,"crypto\\pem\\pem_lib.c",uVar8);
    uVar8 = 0;
LAB_143d11c57:
    if ((param_5 & 1) == 0) {
      CRYPTO_free(_Str1,"crypto\\pem\\pem_lib.c",0xdf);
    }
    else {
      CRYPTO_secure_clear_free(_Str1,0x100,"crypto\\pem\\pem_lib.c");
    }
  }
  return uVar8;
}



// FUNCTION 143d11d50 get_name body=467 status=ok
// SIG undefined get_name(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 get_name(undefined8 param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  char *_Str1;
  void *_Dst;
  uint uVar3;
  size_t _Size;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x143d11d6f;
  uVar5 = 0;
  uVar3 = param_3 & 1;
  if (uVar3 == 0) {
    _Str1 = (char *)CRYPTO_malloc(0x100,"crypto\\pem\\pem_lib.c",0xe5);
  }
  else {
    _Str1 = (char *)CRYPTO_secure_malloc(0x100,"crypto\\pem\\pem_lib.c",0xe4);
  }
  if (_Str1 == (char *)0x0) {
    ERR_put_error(9,0x90,0x41,"crypto\\pem\\pem_lib.c",0x2e1,uVar7);
    uVar5 = 0;
  }
  else {
    do {
      iVar1 = BIO_gets(param_1,_Str1,0xff);
      if (iVar1 < 1) {
        uVar6 = 0x2e9;
        uVar4 = 0x6c;
        goto LAB_143d11eba;
      }
      iVar1 = sanitize_line(_Str1,iVar1,param_3 & 0xfffffffb);
      iVar2 = strncmp(_Str1,"-----BEGIN ",0xb);
    } while (((iVar2 != 0) || (iVar1 < 6)) ||
            (iVar2 = strncmp(_Str1 + (longlong)iVar1 + -6,"-----\n",6), iVar2 != 0));
    _Size = (size_t)(iVar1 + -0x10);
    _Str1[iVar1 + -6] = '\0';
    if (uVar3 == 0) {
      _Dst = (void *)CRYPTO_malloc(_Size,"crypto\\pem\\pem_lib.c",0xe5);
    }
    else {
      _Dst = (void *)CRYPTO_secure_malloc(_Size,"crypto\\pem\\pem_lib.c",0xe4);
    }
    *param_2 = _Dst;
    if (_Dst == (void *)0x0) {
      uVar6 = 0x2f8;
      uVar4 = 0x41;
LAB_143d11eba:
      ERR_put_error(9,0x90,uVar4,"crypto\\pem\\pem_lib.c",uVar6);
    }
    else {
      _guard_xfg_dispatch_icall_nop(_Dst,_Str1 + 0xb,_Size);
      uVar5 = 1;
    }
    if (uVar3 == 0) {
      CRYPTO_free(_Str1,"crypto\\pem\\pem_lib.c",0xdf);
    }
    else {
      CRYPTO_secure_clear_free(_Str1,0x100,"crypto\\pem\\pem_lib.c");
    }
  }
  return uVar5;
}



// FUNCTION 143d11f30 pem_bytes_read_bio_flags body=710 status=ok
// SIG undefined pem_bytes_read_bio_flags(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int pem_bytes_read_bio_flags
              (undefined8 *param_1,uint *param_2,ulonglong *param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,uint *param_7,uint param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_e8 [32];
  uint *local_c8;
  uint local_c0;
  uint local_b8;
  int local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  uint *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  uint *local_78;
  undefined1 local_70 [24];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x143d11f47;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  uVar5 = 0;
  local_98 = param_5;
  local_88 = param_6;
  local_90 = param_7;
  uVar6 = param_8 & 1;
  local_a0 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_b4 = 0;
  uVar8 = uVar5;
  local_80 = param_1;
  local_78 = param_2;
  while( true ) {
    uVar2 = local_a8;
    uVar1 = local_b0;
    if (uVar6 == 0) {
      CRYPTO_free(uVar5,"crypto\\pem\\pem_lib.c",0xdf);
      CRYPTO_free(uVar1,"crypto\\pem\\pem_lib.c",0xdf);
      CRYPTO_free(uVar2,"crypto\\pem\\pem_lib.c",0xdf);
    }
    else {
      CRYPTO_secure_clear_free(uVar5,0,"crypto\\pem\\pem_lib.c",0xdd);
      CRYPTO_secure_clear_free(uVar1,0,"crypto\\pem\\pem_lib.c",0xdd);
      CRYPTO_secure_clear_free(uVar2,(longlong)(int)uVar8,"crypto\\pem\\pem_lib.c",0xdd);
    }
    local_c8 = &local_b8;
    local_c0 = param_8;
    iVar3 = PEM_read_bio_ex(local_98,&local_a0,&local_b0,&local_a8);
    uVar5 = local_a0;
    if (iVar3 == 0) {
      uVar6 = ERR_peek_error();
      if ((uVar6 & 0xfff) == 0x6c) {
        ERR_add_error_data(2,"Expecting: ",param_4);
      }
      return 0;
    }
    iVar3 = check_pem(local_a0);
    uVar1 = local_b0;
    if (iVar3 != 0) break;
    uVar8 = (ulonglong)local_b8;
  }
  iVar4 = PEM_get_EVP_CIPHER_INFO(local_b0,local_70);
  uVar2 = local_a8;
  iVar3 = local_b4;
  if (iVar4 == 0) {
LAB_143d12113:
    uVar7 = local_b8;
    if (uVar6 != 0) {
      CRYPTO_secure_clear_free(uVar5,0,"crypto\\pem\\pem_lib.c",0xdd);
      goto LAB_143d1212e;
    }
    CRYPTO_free(uVar5,"crypto\\pem\\pem_lib.c",0xdf);
  }
  else {
    local_c8 = local_90;
    iVar4 = PEM_do_header(local_70,local_a8,&local_b8,local_88);
    iVar3 = local_b4;
    if (iVar4 == 0) goto LAB_143d12113;
    *local_80 = uVar2;
    *local_78 = local_b8;
    if (param_3 != (ulonglong *)0x0) {
      *param_3 = uVar5;
    }
    iVar3 = 1;
    uVar7 = local_b8;
    if (param_3 == (ulonglong *)0x0) goto LAB_143d12113;
LAB_143d1212e:
    if (uVar6 != 0) {
      CRYPTO_secure_clear_free(uVar1,0,"crypto\\pem\\pem_lib.c",0xdd);
      goto LAB_143d12172;
    }
  }
  CRYPTO_free(uVar1,"crypto\\pem\\pem_lib.c",0xdf);
LAB_143d12172:
  if (iVar3 == 0) {
    if (uVar6 == 0) {
      CRYPTO_free(uVar2,"crypto\\pem\\pem_lib.c",0xdf);
    }
    else {
      CRYPTO_secure_clear_free(uVar2,(longlong)(int)uVar7,"crypto\\pem\\pem_lib.c",0xdd);
      iVar3 = 0;
    }
  }
  return iVar3;
}



// FUNCTION 143d12200 pem_check_suffix body=135 status=ok
// SIG undefined pem_check_suffix(void)

int pem_check_suffix(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar6;
  char *pcVar7;
  longlong lVar5;
  
  lVar6 = -1;
  do {
    lVar6 = lVar6 + 1;
    lVar4 = -1;
  } while (*(char *)(param_1 + lVar6) != '\0');
  do {
    lVar5 = lVar4;
    lVar4 = lVar5 + 1;
  } while (*(char *)(param_2 + lVar4) != '\0');
  if ((int)lVar5 + 2 < (int)lVar6) {
    pcVar7 = (char *)(((longlong)(int)lVar6 - (longlong)(int)lVar4) + param_1);
    pcVar3 = pcVar7;
    do {
      cVar1 = *pcVar3;
      cVar2 = pcVar3[param_2 - (longlong)pcVar7];
      if (cVar1 != cVar2) break;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    if ((cVar1 == cVar2) && (pcVar7[-1] == ' ')) {
      return (int)(pcVar7 + -1) - (int)param_1;
    }
  }
  return 0;
}



// FUNCTION 143d12290 pem_free body=68 status=ok
// SIG undefined pem_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void pem_free(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  if ((param_2 & 1) != 0) {
    CRYPTO_secure_clear_free(param_1,param_3,"crypto\\pem\\pem_lib.c",0xdd);
    return;
  }
  CRYPTO_free(param_1,"crypto\\pem\\pem_lib.c",0xdf);
  return;
}


